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
// IMC XML MD5: ec8ae6c8e72b7d9edd8ff47a9d1c3141                            *
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
    msg.setTimeStamp(0.596965971822);
    msg.setSource(54688U);
    msg.setSourceEntity(11U);
    msg.setDestination(38351U);
    msg.setDestinationEntity(117U);
    msg.state = 200U;
    msg.flags = 96U;
    msg.description.assign("DDKFGKCAOANLQQPDYEKUGMISZDXXUNNJWULWHCXLZGQSGQTFLUZZKNLRQQZJXIPHXKMWEJPYTWPSUABRDQKVFMREURFGVSJGCZHFBDLOELHEVVRITVKXLBZYYPVTMHOAUPBUDMORAVSAOCMS");

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
    msg.setTimeStamp(0.619341935539);
    msg.setSource(13770U);
    msg.setSourceEntity(32U);
    msg.setDestination(45670U);
    msg.setDestinationEntity(209U);
    msg.state = 137U;
    msg.flags = 159U;
    msg.description.assign("PYJNCGYOTYBVLWGMYPKVNNEXAABTDHWVPQRKKCKWWZIEXHPXYRZGTWQJRUYQUUSNIHLDXMRRSCIUZF");

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
    msg.setTimeStamp(0.499535491343);
    msg.setSource(24931U);
    msg.setSourceEntity(6U);
    msg.setDestination(12157U);
    msg.setDestinationEntity(70U);
    msg.state = 177U;
    msg.flags = 19U;
    msg.description.assign("MCLIBDQKFHLRNBOCVBPHYPKDMSRQTLLKRGDUJFLVKSUFWUYOPJNXXLKSPVGGPVLMWCSWOOAEKVFYPAURMLZHHRFTZCRDVARWUEHGZFEWBAQMSVKENNWKFWZRTQIEJBJJYALTXNIDZRFEAZFMSGQGTIO");

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
    msg.setTimeStamp(0.296300237825);
    msg.setSource(63457U);
    msg.setSourceEntity(231U);
    msg.setDestination(39400U);
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
    msg.setTimeStamp(0.697551310316);
    msg.setSource(15037U);
    msg.setSourceEntity(118U);
    msg.setDestination(41394U);
    msg.setDestinationEntity(154U);

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
    msg.setTimeStamp(0.455790312015);
    msg.setSource(38305U);
    msg.setSourceEntity(215U);
    msg.setDestination(22710U);
    msg.setDestinationEntity(100U);

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
    msg.setTimeStamp(0.56400038072);
    msg.setSource(3468U);
    msg.setSourceEntity(87U);
    msg.setDestination(25807U);
    msg.setDestinationEntity(193U);
    msg.id = 76U;
    msg.label.assign("NGRBGYNELFCSEJIZLDHZAKUIVZXBFDKDMFOZHGOVOKRAFLARLHDJNZCOLLVXHELNBKMGGRSUSKOTYQZNOBWQAPOTFAJYUTCRESJOIRHUIWEMIWFZZFCNRPMYNDOYTCICBNCPJQEYTAXDVLYQQ");
    msg.component.assign("VGEINBXVIJSRUMGNVTZWAFDDUKPRMGDCIQNDLXMKPMKGUUYQTDFJZCM");
    msg.act_time = 39904U;
    msg.deact_time = 48446U;

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
    msg.setTimeStamp(0.379253739717);
    msg.setSource(47432U);
    msg.setSourceEntity(254U);
    msg.setDestination(37670U);
    msg.setDestinationEntity(10U);
    msg.id = 59U;
    msg.label.assign("NGWPOILISQVIHRAKOMJKOGWD");
    msg.component.assign("OSOLAYIFNACLZCCTCKMIUOTEQMFZMSNMWINTMWDLIIRVDQZREQWERDHQSIVPZWBJHRWTFIGCJOXTBEYHXGWNLJUGAVEWASJMJLGUKBDLASKRDUDSUPGIRKXVXSDTGNBLAYKKCANBOEVJJLVRYBXIGTUSQEHYKZBFNOOKXZUNOGSXW");
    msg.act_time = 3407U;
    msg.deact_time = 30078U;

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
    msg.setTimeStamp(0.704555609916);
    msg.setSource(41083U);
    msg.setSourceEntity(196U);
    msg.setDestination(12531U);
    msg.setDestinationEntity(250U);
    msg.id = 123U;
    msg.label.assign("XCAXFNKMWVMJHFHGGHQRHKSXLKDRQXYCCJAXQDKERYNEUZFJYEZYMAAZZOPQNTUINIBMUDMTMKCWDHVNQBMLCGERCEWPNNVSAVNODPGBXNTUIIFZAGWNTUGSAIBFFELODKQLDPCVYUFOFBTBPQGUJHQZUEGYPRSLKOSIUXFCWLJZBOSBHJSECXTKJVRRAYSJLWSVHTGLQAKYLPWPODR");
    msg.component.assign("EEQRQNKKFCOAFZKBPT");
    msg.act_time = 50651U;
    msg.deact_time = 55411U;

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
    msg.setTimeStamp(0.550072406159);
    msg.setSource(31582U);
    msg.setSourceEntity(25U);
    msg.setDestination(56437U);
    msg.setDestinationEntity(201U);
    msg.id = 164U;

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
    msg.setTimeStamp(0.703171945269);
    msg.setSource(65061U);
    msg.setSourceEntity(229U);
    msg.setDestination(28377U);
    msg.setDestinationEntity(204U);
    msg.id = 151U;

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
    msg.setTimeStamp(0.258035346454);
    msg.setSource(29203U);
    msg.setSourceEntity(10U);
    msg.setDestination(8323U);
    msg.setDestinationEntity(106U);
    msg.id = 109U;

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
    msg.setTimeStamp(0.311854611551);
    msg.setSource(5579U);
    msg.setSourceEntity(49U);
    msg.setDestination(11464U);
    msg.setDestinationEntity(18U);
    msg.op = 157U;
    msg.list.assign("SXGBTWYOYMXZUJCSPDQHKNDPOPSRWYHEVIRNSSKAEYGQSDCVARKKQUGHPVBOZFIJATJSTKBDTACHGNFUNWBVOLXXTGMEZKIPZHWYELRMMVJPQLINKMQACIBFLJHTZJWUHVINBDOPIFLSCUCYRFOLWGEWZDATLDZPBUFKKQGNJVVFMYILFTVDMOQKWELAZUGEAHJNJNRHRPEXCVPRYBEEBMXCQXDOSIUMCADXRQYHUSXORCLMWFNJGW");

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
    msg.setTimeStamp(0.23930981589);
    msg.setSource(24615U);
    msg.setSourceEntity(44U);
    msg.setDestination(18440U);
    msg.setDestinationEntity(29U);
    msg.op = 230U;
    msg.list.assign("SZGDYGVLMJOTSBYVZUM");

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
    msg.setTimeStamp(0.602931696696);
    msg.setSource(43525U);
    msg.setSourceEntity(194U);
    msg.setDestination(59551U);
    msg.setDestinationEntity(128U);
    msg.op = 216U;
    msg.list.assign("ALFBLOKXLRBZJMZYACVXCWBRIBYXKYVKVO");

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
    msg.setTimeStamp(0.235640313386);
    msg.setSource(65104U);
    msg.setSourceEntity(162U);
    msg.setDestination(65056U);
    msg.setDestinationEntity(160U);
    msg.value = 89U;

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
    msg.setTimeStamp(0.641007855758);
    msg.setSource(42957U);
    msg.setSourceEntity(224U);
    msg.setDestination(18214U);
    msg.setDestinationEntity(232U);
    msg.value = 1U;

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
    msg.setTimeStamp(0.795914566112);
    msg.setSource(6513U);
    msg.setSourceEntity(154U);
    msg.setDestination(40629U);
    msg.setDestinationEntity(182U);
    msg.value = 120U;

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
    msg.setTimeStamp(0.14512779369);
    msg.setSource(22774U);
    msg.setSourceEntity(12U);
    msg.setDestination(59048U);
    msg.setDestinationEntity(103U);
    msg.consumer.assign("UAJFESWVFORQ");
    msg.message_id = 45588U;

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
    msg.setTimeStamp(0.825202372201);
    msg.setSource(44571U);
    msg.setSourceEntity(42U);
    msg.setDestination(54446U);
    msg.setDestinationEntity(219U);
    msg.consumer.assign("DQRABSVWIIJNKDLQHQGNTUOFNJXSJYXNJKXXOYRPTYVGKEGBTDBRYDUVAAYZHQNVADZHNKOVFFSOMKBYXSAPPBKELJIXPQWTCSYXOPQTWGETVIILEDRWKUHYHCBKVZ");
    msg.message_id = 61668U;

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
    msg.setTimeStamp(0.688247887836);
    msg.setSource(47003U);
    msg.setSourceEntity(4U);
    msg.setDestination(3757U);
    msg.setDestinationEntity(103U);
    msg.consumer.assign("GBWZSZUABMRNNCYTQPRHCXRVUFWPGDZQGSQGLQKUWJUTROIKXQHQKUMBVUCIRMETRPMZVAKDEJYLLTHJCZKWKDOFXBYIJQVKNTYXWGOERHYNHTECDHXRZOXBFCSQXQFOPWZMCDISLNFYPCJZNOWBLTSXLB");
    msg.message_id = 3169U;

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
    msg.setTimeStamp(0.453875865592);
    msg.setSource(36810U);
    msg.setSourceEntity(90U);
    msg.setDestination(28845U);
    msg.setDestinationEntity(130U);
    msg.type = 52U;

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
    msg.setTimeStamp(0.889101245222);
    msg.setSource(56506U);
    msg.setSourceEntity(138U);
    msg.setDestination(60384U);
    msg.setDestinationEntity(49U);
    msg.type = 75U;

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
    msg.setTimeStamp(0.86655426137);
    msg.setSource(39873U);
    msg.setSourceEntity(202U);
    msg.setDestination(25903U);
    msg.setDestinationEntity(18U);
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
    msg.setTimeStamp(0.593619989991);
    msg.setSource(43743U);
    msg.setSourceEntity(73U);
    msg.setDestination(31412U);
    msg.setDestinationEntity(32U);
    msg.op = 3U;

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
    msg.setTimeStamp(0.00667230380684);
    msg.setSource(53889U);
    msg.setSourceEntity(215U);
    msg.setDestination(61700U);
    msg.setDestinationEntity(229U);
    msg.op = 59U;

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
    msg.setTimeStamp(0.959611688266);
    msg.setSource(25416U);
    msg.setSourceEntity(79U);
    msg.setDestination(48385U);
    msg.setDestinationEntity(246U);
    msg.op = 107U;

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
    msg.setTimeStamp(0.531716563037);
    msg.setSource(9008U);
    msg.setSourceEntity(177U);
    msg.setDestination(57108U);
    msg.setDestinationEntity(242U);
    msg.total_steps = 131U;
    msg.step_number = 215U;
    msg.step.assign("NVSEAOYPQSHCEHWOEAOTWCDEAGRBDPRGJMJVRIKNTRWHLXLOYWGZRIXACVVRUNVPCGKUWUUMMEWZBMFIGGCRGYPJCPIRJIJBKVWYLGUIZNZPOMFFNSYLLWTHMOEYOEZHQSUGSCHQCJTIZLDYOGMLKDNKFAFDFOATUPVOUIBEPLQZTBLKRIHTBLDHXPQKFBEBMAKXZCAQXANFDRTSYQMQHHVWXIBKBXP");
    msg.flags = 227U;

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
    msg.setTimeStamp(0.899857892106);
    msg.setSource(26352U);
    msg.setSourceEntity(42U);
    msg.setDestination(23936U);
    msg.setDestinationEntity(40U);
    msg.total_steps = 69U;
    msg.step_number = 130U;
    msg.step.assign("SYLIVHCBJZENVTORCCUQRIOEDGKHUOQWLPVRYWXZTIQFBBWEFKAZHMVHDSDASIZPAETMAFAPIVQRYSFJSKOQRXWLDMFIWGPMJJKGXLBAVRUENNLVQXUBNPTLOCQAJZPEWCHQXHTYNIVJRNYOSWMGKXLDAUYU");
    msg.flags = 187U;

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
    msg.setTimeStamp(0.218387562309);
    msg.setSource(24604U);
    msg.setSourceEntity(119U);
    msg.setDestination(59361U);
    msg.setDestinationEntity(216U);
    msg.total_steps = 206U;
    msg.step_number = 196U;
    msg.step.assign("HMGVSRTWPOEEBVPGCFPHQHBRYDEQELCYQUHZXBXOGTASCLLGWVADLTHDIKIUXIOXBMWJAALXQFNUZNCKOPOASWCTFVXKEANWYSDGBRSHEUSFLZQAMLYLCYUTWNRHMICJPZDRVQIDKIPGOQHOTCVUGZNNKMD");
    msg.flags = 245U;

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
    msg.setTimeStamp(0.205199868188);
    msg.setSource(15594U);
    msg.setSourceEntity(181U);
    msg.setDestination(16283U);
    msg.setDestinationEntity(61U);
    msg.state = 53U;
    msg.error.assign("FRQJUWFVBDXOXRDWNJNOCOWOBQAQGIQMRQBJOGQDCLEMTVQGAGSYXHZOSXXLWUTVIFCFUEKPAGAYELCJZYNIMFMIHCVMTULBNSBVAHHIDURZXYHUUKPHWEB");

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
    msg.setTimeStamp(0.576814843722);
    msg.setSource(7457U);
    msg.setSourceEntity(233U);
    msg.setDestination(50278U);
    msg.setDestinationEntity(171U);
    msg.state = 11U;
    msg.error.assign("OHCADJHONSJOBDQDHFVGEGRLKRYEFEFHGBWOOXJLETUTOHIWLEICJ");

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
    msg.setTimeStamp(0.49755571619);
    msg.setSource(21854U);
    msg.setSourceEntity(29U);
    msg.setDestination(17652U);
    msg.setDestinationEntity(76U);
    msg.state = 29U;
    msg.error.assign("CHIVQYQVDSOZLWOYEBPVMGABAUCFCNCVRYZKBQGORZFSFPELIJBFCIEDUDSZCXUFPKRJVEJUNBWLHKEBWNJVXZYZBLPTYJLRWARHEHYPDAJZKIAMUIUNIGJPNAKDIREDREOHPOWFIOT");

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
    msg.setTimeStamp(0.866305824016);
    msg.setSource(26831U);
    msg.setSourceEntity(52U);
    msg.setDestination(38192U);
    msg.setDestinationEntity(200U);

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
    msg.setTimeStamp(0.367526266233);
    msg.setSource(49084U);
    msg.setSourceEntity(156U);
    msg.setDestination(37635U);
    msg.setDestinationEntity(221U);

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
    msg.setTimeStamp(0.41219483024);
    msg.setSource(23357U);
    msg.setSourceEntity(211U);
    msg.setDestination(8264U);
    msg.setDestinationEntity(239U);

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
    msg.setTimeStamp(0.546871688026);
    msg.setSource(48061U);
    msg.setSourceEntity(155U);
    msg.setDestination(64502U);
    msg.setDestinationEntity(185U);
    msg.op = 82U;
    msg.speed_min = 0.935026359106;
    msg.speed_max = 0.101414206169;
    msg.long_accel = 0.829545598151;
    msg.alt_max_msl = 0.453649233344;
    msg.dive_fraction_max = 0.683816014646;
    msg.climb_fraction_max = 0.566077314167;
    msg.bank_max = 0.536152445985;
    msg.p_max = 0.524235716067;
    msg.pitch_min = 0.674235064316;
    msg.pitch_max = 0.695387161345;
    msg.q_max = 0.641108432699;
    msg.g_min = 0.771968027364;
    msg.g_max = 0.570959399211;
    msg.g_lat_max = 0.262816609343;
    msg.rpm_min = 0.664464350306;
    msg.rpm_max = 0.678390199591;
    msg.rpm_rate_max = 0.0874074060584;

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
    msg.setTimeStamp(0.426437851404);
    msg.setSource(21699U);
    msg.setSourceEntity(166U);
    msg.setDestination(43515U);
    msg.setDestinationEntity(129U);
    msg.op = 111U;
    msg.speed_min = 0.223006735922;
    msg.speed_max = 0.860428259812;
    msg.long_accel = 0.333806544576;
    msg.alt_max_msl = 0.177999162949;
    msg.dive_fraction_max = 0.968678444534;
    msg.climb_fraction_max = 0.581749964987;
    msg.bank_max = 0.868136634514;
    msg.p_max = 0.324160659058;
    msg.pitch_min = 0.0365549167994;
    msg.pitch_max = 0.00837638023987;
    msg.q_max = 0.703259711255;
    msg.g_min = 0.413527614014;
    msg.g_max = 0.110860657982;
    msg.g_lat_max = 0.903257144191;
    msg.rpm_min = 0.228970837244;
    msg.rpm_max = 0.452545398142;
    msg.rpm_rate_max = 0.2828371709;

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
    msg.setTimeStamp(0.592459974697);
    msg.setSource(7440U);
    msg.setSourceEntity(237U);
    msg.setDestination(45861U);
    msg.setDestinationEntity(48U);
    msg.op = 122U;
    msg.speed_min = 0.618872817568;
    msg.speed_max = 0.0347629334274;
    msg.long_accel = 0.863647767525;
    msg.alt_max_msl = 0.61613379062;
    msg.dive_fraction_max = 0.00318294853395;
    msg.climb_fraction_max = 0.382227260194;
    msg.bank_max = 0.0898730515887;
    msg.p_max = 0.214505483807;
    msg.pitch_min = 0.270488243055;
    msg.pitch_max = 0.885532505556;
    msg.q_max = 0.106925937007;
    msg.g_min = 0.397509432187;
    msg.g_max = 0.129873748806;
    msg.g_lat_max = 0.2420442893;
    msg.rpm_min = 0.781245294792;
    msg.rpm_max = 0.0505427968694;
    msg.rpm_rate_max = 0.457811751372;

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
    msg.setTimeStamp(0.244848613636);
    msg.setSource(43931U);
    msg.setSourceEntity(113U);
    msg.setDestination(58754U);
    msg.setDestinationEntity(238U);

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
    msg.setTimeStamp(0.18126281115);
    msg.setSource(8231U);
    msg.setSourceEntity(44U);
    msg.setDestination(27419U);
    msg.setDestinationEntity(16U);

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
    msg.setTimeStamp(0.944185954362);
    msg.setSource(59936U);
    msg.setSourceEntity(31U);
    msg.setDestination(38348U);
    msg.setDestinationEntity(143U);

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
    msg.setTimeStamp(0.855773832526);
    msg.setSource(54728U);
    msg.setSourceEntity(216U);
    msg.setDestination(62996U);
    msg.setDestinationEntity(9U);
    msg.lat = 0.380438781979;
    msg.lon = 0.94714900418;
    msg.height = 0.646623020771;
    msg.x = 0.0111387631841;
    msg.y = 0.28753201845;
    msg.z = 0.764779202894;
    msg.phi = 0.952316607744;
    msg.theta = 0.587672402612;
    msg.psi = 0.363617200974;
    msg.u = 0.414136293207;
    msg.v = 0.3403495913;
    msg.w = 0.0551285629412;
    msg.p = 0.722440370849;
    msg.q = 0.553180217083;
    msg.r = 0.0637884111412;
    msg.svx = 0.710987375522;
    msg.svy = 0.340434455424;
    msg.svz = 0.511846990907;

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
    msg.setTimeStamp(0.551513904637);
    msg.setSource(35592U);
    msg.setSourceEntity(101U);
    msg.setDestination(22727U);
    msg.setDestinationEntity(175U);
    msg.lat = 0.173584719928;
    msg.lon = 0.565238339376;
    msg.height = 0.111283267228;
    msg.x = 0.884387297988;
    msg.y = 0.496370051072;
    msg.z = 0.294762161145;
    msg.phi = 0.804883606558;
    msg.theta = 0.171091244775;
    msg.psi = 0.400680830344;
    msg.u = 0.68329730782;
    msg.v = 0.741809238772;
    msg.w = 0.749227695652;
    msg.p = 0.919534821871;
    msg.q = 0.244859890934;
    msg.r = 0.529270848919;
    msg.svx = 0.0378013122349;
    msg.svy = 0.286670534783;
    msg.svz = 0.112262133565;

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
    msg.setTimeStamp(0.200866321731);
    msg.setSource(49945U);
    msg.setSourceEntity(0U);
    msg.setDestination(8745U);
    msg.setDestinationEntity(102U);
    msg.lat = 0.304838930553;
    msg.lon = 0.350201268292;
    msg.height = 0.470076019575;
    msg.x = 0.806289416558;
    msg.y = 0.181945549478;
    msg.z = 0.79436004952;
    msg.phi = 0.13910427537;
    msg.theta = 0.0916623438928;
    msg.psi = 0.820106095699;
    msg.u = 0.313571129649;
    msg.v = 0.213782824018;
    msg.w = 0.974824235825;
    msg.p = 0.174756335207;
    msg.q = 0.172526173597;
    msg.r = 0.422296690051;
    msg.svx = 0.245176395158;
    msg.svy = 0.8157417301;
    msg.svz = 0.630753261594;

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
    msg.setTimeStamp(0.0920757035833);
    msg.setSource(57242U);
    msg.setSourceEntity(2U);
    msg.setDestination(13473U);
    msg.setDestinationEntity(179U);
    msg.op = 222U;
    msg.entities.assign("BJIGGESAGSYHHAHTXBVFJZVJXZQEUQFJMXMGNBCEYDRVFGQEMYELBAPCQDOGFUYMCIQVUFWVABYORUXHXOKIAJIAWNPUBJYVHLIPQPRIDTKPCOBFQCEHDZQLSMNTYNUSZOTBSDVSLWEPGHDAZUMTSINZSWPCZDANTWKHCAHWDKERVYLFGRWCNGVSWEMXMNIJLZV");

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
    msg.setTimeStamp(0.965053900534);
    msg.setSource(63664U);
    msg.setSourceEntity(42U);
    msg.setDestination(30204U);
    msg.setDestinationEntity(95U);
    msg.op = 128U;
    msg.entities.assign("HFYBGACUVQUDJQSSMTFMPLFLOJNQDKHA");

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
    msg.setTimeStamp(0.979245312009);
    msg.setSource(53154U);
    msg.setSourceEntity(238U);
    msg.setDestination(13974U);
    msg.setDestinationEntity(4U);
    msg.op = 85U;
    msg.entities.assign("XQOWMORFSOBXIGRMMAXIINKMUHAHEIGFNADDRJETMSVZIVSQMWZLLTPCRDNJKSGNPABBLYMPVJYKIEVDJPESWXJJWFVMEQUSGPGNBZBIKAZMCRDOQNXTNKCSXYHEZXWPHHDAVDQEFEWYOYDYRLTCYUFVZGBAWTLBZATDL");

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
    msg.setTimeStamp(0.247579650828);
    msg.setSource(20218U);
    msg.setSourceEntity(93U);
    msg.setDestination(24675U);
    msg.setDestinationEntity(76U);
    msg.type = 254U;
    msg.speed = 19688U;
    const char tmp_msg_0[] = {-3, 96, -95, -43, 125, 22, 103, 79, -104, 71, 4, 21, 113, -43, -23, 37, 37, -25, -73, 74, -82, -12, -80, -21, 67, -77, -17, -82, 75, -65, 104, -67, 71, 66, 104, 124, -66, -45, -117, 45, -67, 86, -98, -30, -118, -120, 117, 2, -123, 94, -5, 58, 1, -65, 56, -120, -45, 62, 57, 81, 104, -30, 24, 16, -59, 103, 106, -123, -56, 16, -66, -61, 71, 56, 15, 100, -75, -103, 99, -103, 64, -81, 73, 41, 69, -108, -61, -96, 57, -13, -64, -43, -108, -33, 43, -63, -90, 46, -27, -121, 121, -58, -37, 37, -86, 1, -2, 72, 72, -10, 32, 18, -121, -48, 52, -70, 104, -28, -75, 50, 19, 100, -103, -103, 43, -121, -51, -14};
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
    msg.setTimeStamp(0.451300877003);
    msg.setSource(20390U);
    msg.setSourceEntity(42U);
    msg.setDestination(23668U);
    msg.setDestinationEntity(147U);
    msg.type = 90U;
    msg.speed = 37177U;
    const char tmp_msg_0[] = {-86, -86, -65, 106, -100, -58, -108, 104, 48, -53, -55, 73, 70, 33, -58, 52, 59, 16, -41, -4, 55, -12, 27, 67, 104, -17, -95, 115, 100, -18, -26, -51, 31, -49, 5, -28, -51, -79, 83, -107, -116, 26, 108, -76, 104, 98, -73, -16, 55, -61, -65, 13, 59, 74, 28, 25, 12, 44, -109, -61, 59, 126, -18, -69, -46, -42, 25, 9, -30, 29, -21, -30, -28, 93, 114, -77, -62, 112, -15, 115, 48, 3, 109, -47, -122, 100, -112, 72, -10, -38, -50, -50, -84, -28, 75, 72, 23, 44, 125, 126, -42, -57, -34, 63, -100, -7, -109, 93, -65, 60, 96, 86, 58, -36, 63, -89, 123, 26, -31, -92, 54, 124, -77, -103, -14, -99, -30, -41, -107, -69, -56, -61, 39, -32, 54, 1, 41, 88, -17, 4, 63, 119, 103, 50, -2, 9, -113, -35, -94, 36, -45, -100, 15, 55, -71, 67, 103, -39, -51, -96, -77, -107, 2, -44, 29, -58, 111, 45, 77, 8, 36, -49, -122, 107, 78, 50, 46, -42, 87, 54, 66, -68, 57, -6, 92, 77, -21, -26, -10, 115, -9, -93, -22, 11, -68, 38, 125, -122, 55, 122, -104, 40, 111};
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
    msg.setTimeStamp(0.331061178767);
    msg.setSource(30701U);
    msg.setSourceEntity(245U);
    msg.setDestination(56114U);
    msg.setDestinationEntity(231U);
    msg.type = 218U;
    msg.speed = 52364U;
    const char tmp_msg_0[] = {76, -11, 63, -6, 32, -78, 67, 78, -17, -54, -15, -37, 16, -27, -102, -97, 64, -37, 79, -128, 82, 36, 55, -18, -47, 26, -116, 100, -66, 51, -127, -87, 63, -114, 21, 112, -105, -13, -51, 56, -67, -84, -49, 93, 28, 14, 87, 115, 17, -66, 61, -23, -88, -43, -61, 22, -47, -78, 52, 36, 46, 78, -63, 95, 40, 101, -102, 54, 119, -25, 125, -104, -57, 81, -4, 61, 20, 116, -25, -79, 17, -91, 24, 108, -31, -15, -99, -43, 79, 37, 20, -20, -105, -105, 116, 34, -36, -100, -43, 106, 108, 97, 109, -82, -100, -39, -46, 56, -74, 65, -91, 89, -9, -75, -22, 24, -87, -29, 92, 98, -90, 22, -124, -54, 72, 47, -118, 15, -85, -23, -61, 117, 60, 60, -69, 40, 26, 36, -92, -55, -31, -124, -3, 97, 5, 101, -22, 9, 75, -38, 113, 76, -28, 79, 87, 68, -79, -112, 58, 34, 20, 70, -14, 6, 89, 85, 89, 13, -115, -99, 25, 54, 98, 40, 5, -10, 25, -53, 73, 4, -46, -53, 60, 109, 2, 36, 99, 55, -16, -18, 15, -2, -67, 84, 30, -29, 52, 87, -1, -45, 120, 98, 78, 91};
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
    msg.setTimeStamp(0.449701913779);
    msg.setSource(46851U);
    msg.setSourceEntity(130U);
    msg.setDestination(61657U);
    msg.setDestinationEntity(98U);
    msg.op = 136U;
    msg.tas2acc_pgain = 0.141255186765;
    msg.bank2p_pgain = 0.199952966776;

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
    msg.setTimeStamp(0.0367750388338);
    msg.setSource(63537U);
    msg.setSourceEntity(56U);
    msg.setDestination(14636U);
    msg.setDestinationEntity(146U);
    msg.op = 4U;
    msg.tas2acc_pgain = 0.777892837337;
    msg.bank2p_pgain = 0.648585120836;

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
    msg.setTimeStamp(0.0773132792015);
    msg.setSource(57707U);
    msg.setSourceEntity(136U);
    msg.setDestination(33396U);
    msg.setDestinationEntity(22U);
    msg.op = 198U;
    msg.tas2acc_pgain = 0.445529233503;
    msg.bank2p_pgain = 0.266985299486;

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
    msg.setTimeStamp(0.872455705024);
    msg.setSource(48728U);
    msg.setSourceEntity(30U);
    msg.setDestination(35514U);
    msg.setDestinationEntity(80U);
    msg.available = 2476735704U;
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
    msg.setTimeStamp(0.0661068187177);
    msg.setSource(49664U);
    msg.setSourceEntity(62U);
    msg.setDestination(10129U);
    msg.setDestinationEntity(146U);
    msg.available = 2046003236U;
    msg.value = 90U;

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
    msg.setTimeStamp(0.340099646038);
    msg.setSource(25031U);
    msg.setSourceEntity(242U);
    msg.setDestination(13421U);
    msg.setDestinationEntity(51U);
    msg.available = 4282652239U;
    msg.value = 95U;

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
    msg.setTimeStamp(0.238531262429);
    msg.setSource(30412U);
    msg.setSourceEntity(20U);
    msg.setDestination(36401U);
    msg.setDestinationEntity(58U);
    msg.op = 253U;
    msg.snapshot.assign("JTKWRDZYKDIBUDQARFOFTXJGVVXWCOPZEUCHZHZWOJOCBBVMKVNMTIDATDUSKIYJNTAYGJRWQHJYTQNNBMKZZSLCJBIIGXEANSIBFTQVJHLMEIGMVWMZMZCMGPCAYREXKJPWLWTGLPNBXSICDARPPHAIFXTBPIQGEOXKLYGA");
    IMC::FollowReference tmp_msg_0;
    tmp_msg_0.control_src = 8186U;
    tmp_msg_0.control_ent = 184U;
    tmp_msg_0.timeout = 0.853556797767;
    tmp_msg_0.loiter_radius = 0.685517595925;
    tmp_msg_0.altitude_interval = 0.230629160781;
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
    msg.setTimeStamp(0.560464792843);
    msg.setSource(55959U);
    msg.setSourceEntity(99U);
    msg.setDestination(42690U);
    msg.setDestinationEntity(250U);
    msg.op = 79U;
    msg.snapshot.assign("VSTHNVKTAQAUPIIMAUBENHBDENXAFGHEDGHPKWFTLMLQSCXLEWUHIFDTZVZDSVJZWNKPQHCITXVPZJRPVJMQICHENBSODEG");
    IMC::CcuEvent tmp_msg_0;
    tmp_msg_0.type = 43U;
    tmp_msg_0.id.assign("ZQSJJACJKVYQ");
    IMC::RowsCoverage tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.656618419431;
    tmp_tmp_msg_0_0.lon = 0.984254979412;
    tmp_tmp_msg_0_0.z = 0.411938819524;
    tmp_tmp_msg_0_0.z_units = 169U;
    tmp_tmp_msg_0_0.speed = 0.532158958699;
    tmp_tmp_msg_0_0.speed_units = 112U;
    tmp_tmp_msg_0_0.bearing = 0.82018551198;
    tmp_tmp_msg_0_0.cross_angle = 0.520369004443;
    tmp_tmp_msg_0_0.width = 0.594821107164;
    tmp_tmp_msg_0_0.length = 0.330080597584;
    tmp_tmp_msg_0_0.coff = 120U;
    tmp_tmp_msg_0_0.angaperture = 0.897148398234;
    tmp_tmp_msg_0_0.range = 14302U;
    tmp_tmp_msg_0_0.overlap = 11U;
    tmp_tmp_msg_0_0.flags = 167U;
    tmp_tmp_msg_0_0.custom.assign("DRHHYWBUZEISAFIPQZGJLCTFRLNPMWONRJXJRILNGJREUVOKJGCYBVKWVSNUEIYPSEBFWFTEYGFDXNVGQYBNRLDWOKKILBNWOHUCKVHTOQRZIUQZSCGHLDEBXQLDGYPNMZEFBKAPZJHPWXVTMJWTVYDPVLRODUQRAMWQHBOSHMADQKVJMSJUXXMCSAAPEQIHKKZFGZEWMIYZDOPXFKNPTFLMCBXMDIYO");
    tmp_msg_0.arg.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.198927673986);
    msg.setSource(34622U);
    msg.setSourceEntity(81U);
    msg.setDestination(36486U);
    msg.setDestinationEntity(4U);
    msg.op = 241U;
    msg.snapshot.assign("PDPUONOFDUXNIKU");
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 43561U;
    tmp_msg_0.avg = 0.221095040654;
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
    msg.setTimeStamp(0.817791123756);
    msg.setSource(22039U);
    msg.setSourceEntity(159U);
    msg.setDestination(43555U);
    msg.setDestinationEntity(150U);
    msg.op = 65U;
    msg.name.assign("PYNEKPKUSLKUODTWOZMIVTZOOFLMZUSOJHIDIMGIAWHVWJYQRKNICBNRXVCRVXMYQZWYBYAPGCQJDYQVZECPQTTJFUYNQHSLFQKAAWTBMDYJDXOESQFHMZZYRLLKDGWTNVOHHBEUJGJVROGHWALIESMRPIL");

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
    msg.setTimeStamp(0.516680995712);
    msg.setSource(2363U);
    msg.setSourceEntity(172U);
    msg.setDestination(17680U);
    msg.setDestinationEntity(108U);
    msg.op = 191U;
    msg.name.assign("BNXHSNISFFLZLJRPACKQOCJIDOYGMIYXFWEQLYUBDGTYGERNWFOHRYUEOVNMCCGGKTPCTGBWTPJZREGYJMUSSKHQSAAILHCVKZQOTKYZXVBWSOREMBSHDYFDWWQNMRILOIRDCUAXOALXQZRVBSHKD");

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
    msg.setTimeStamp(0.00191437196208);
    msg.setSource(20201U);
    msg.setSourceEntity(61U);
    msg.setDestination(41326U);
    msg.setDestinationEntity(44U);
    msg.op = 126U;
    msg.name.assign("ZVPBTJZONTLDVIQRBVWFNGLLTHOOXSBOHZABPYBYIXCMJBAMFX");

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
    msg.setTimeStamp(0.421972029299);
    msg.setSource(33073U);
    msg.setSourceEntity(191U);
    msg.setDestination(58633U);
    msg.setDestinationEntity(142U);
    msg.type = 106U;
    msg.htime = 0.726208859937;
    msg.context.assign("TNWHHTEGJLKYEXFJVPFMNXNIDNXGONSLHTJASYHPZICWLEORLSFMNDBMLUAQAQTSGVUZHYCRBDAGJPGOWORALAZRNEYMVCGAHKFEXPCFJHWGVPRZYTTSGEQBIYXOWJKNDCR");
    msg.text.assign("FUEQAFNBLIORJTIKPHGHNJYGSPUEWBLYOWSPWOUQGNABDSTGNDZWMIYBQMBNQYSWVJVRXMSEYGHKJECGRPKRXTWQSVKIMMZZJQQHDHGKFAZEPXPSLXOJINIEXFUULKCVNXDPMPVOCRYCAUDLYTGPAMUDSZCCWDTWWMXFCKZVNCRUSAFKBQJVBHCFBTVZIUELHVHBAQTSNHTVREXXUDYFTLZPILATYMIGJJGRFNFADMLOKERIEOQBXLWZYZJKD");

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
    msg.setTimeStamp(0.615758716074);
    msg.setSource(47823U);
    msg.setSourceEntity(195U);
    msg.setDestination(64361U);
    msg.setDestinationEntity(238U);
    msg.type = 57U;
    msg.htime = 0.10741401088;
    msg.context.assign("UGDJOXAMDVIDDBDLIUDAZPHOZWRZSHKVKNSQNJGYQTYJSBTCHRXWXTQXTWZAYPNPZXXOXZGYYCVHSEIYUPERTVHRKFBQQVMKETLFTAPNQJRMGYUNNRIOJJNWWIIECTCERXUPMAIMWBNHVBGUACASORAIBSYVOKRELADFZJPOIVUWSBFFLCLKEBKGNMTMELBZGVOPSMENGCELBULDIZFJQZHORFWXO");
    msg.text.assign("KCOYWGAHGYLFZTTMSHCEMIHTEOBKOLLJCQAYZZCDNTRFUHMUHVVGMTBVPHYUASNCRXOLAYBNZIYPTKGRACADLHDFWNGEIXDDVHVAFZXFLQWWXEPFZDZEKZJDYGMWQOYONLJGWUFEWOCOFQZLQKIVNRQUXJIRTDBTDCNXGBMBSRESIWBJGQIEJUURTUAXPRWEXQYSCVKQUYMSR");

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
    msg.setTimeStamp(0.590234927808);
    msg.setSource(62038U);
    msg.setSourceEntity(107U);
    msg.setDestination(4516U);
    msg.setDestinationEntity(37U);
    msg.type = 209U;
    msg.htime = 0.971406190932;
    msg.context.assign("WFMSSJHYOHNNLETDONGFHJKISYIQPIRLAVONWPYAKHNVN");
    msg.text.assign("PVFEMTAMWTSFJLKCOIITOCIXLZQWXGCXIWDWDQVSYFESZJGQCYAXRQBMXAZFTMPIYHISCTZPRZVRQSOVNGGTWHNUYAANOVURNZJIRKUGERCWJLOMDDRMXDRQXMVQHWNBKRVNHETFZFYGQJLLYPFUGZEHGLEHISNHRPJNCZXOCKNUVYWLGLSWABUPBJDLDPOLIBEKXBAVHAUHYKGEFKYBXDPTFFTOS");

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
    msg.setTimeStamp(0.749046359228);
    msg.setSource(29474U);
    msg.setSourceEntity(117U);
    msg.setDestination(10176U);
    msg.setDestinationEntity(29U);
    msg.command = 61U;
    msg.htime = 0.012715051237;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 193U;
    tmp_msg_0.htime = 0.259855177621;
    tmp_msg_0.context.assign("NTEBOYIYGOWUIOVVBOEVNVDJKLZGRPCCYPKMTDCGSPCTRRLQJVNOONTGF");
    tmp_msg_0.text.assign("TRPDFARPLZPQGFCEVCTZEBBHNTWLKVUPZPXGRTTOEVYBYPNMPDBWWJWNHNZMYJSCGDIOGLMUNKPHMGIIXXUPQXSEQJRYXWTIDOJCHJJEDJRXSEDLLNHISRZJVCWUZCHBLVFOLZBBUTSEFTEMEWYDAGYKYAOMQTGHDANNFXORSIRKCBQUFDFFWGQJQAKSLULIJKAWOGNAOMCVTWVKFAIYMIOCSDZUMH");
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
    msg.setTimeStamp(0.441044151671);
    msg.setSource(16240U);
    msg.setSourceEntity(236U);
    msg.setDestination(56943U);
    msg.setDestinationEntity(88U);
    msg.command = 124U;
    msg.htime = 0.556814140795;

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
    msg.setTimeStamp(0.423639150796);
    msg.setSource(24807U);
    msg.setSourceEntity(171U);
    msg.setDestination(53099U);
    msg.setDestinationEntity(89U);
    msg.command = 97U;
    msg.htime = 0.550175272271;

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
    msg.setTimeStamp(0.556833411108);
    msg.setSource(19489U);
    msg.setSourceEntity(38U);
    msg.setDestination(33127U);
    msg.setDestinationEntity(190U);
    msg.op = 190U;
    msg.file.assign("IJSWVMYVYQXXHROLTYAOSVKHRZPGYJQITMXJKDFOBZNKJEFCMTILCSYDIWWKVBITXLEGHUJZOKGGCZUJGPPBPMQGASSWCQBBADVBLXRNGUTRLFYBZNIQDXHIJTENJUNMEGWCNHAEMRHPMOHTRBJOXPSRCNUDDEWZWATKZSP");

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
    msg.setTimeStamp(0.569247274063);
    msg.setSource(24864U);
    msg.setSourceEntity(102U);
    msg.setDestination(9419U);
    msg.setDestinationEntity(183U);
    msg.op = 130U;
    msg.file.assign("QFTAAEMMBZNGDBKGMWNJWEOQGPUAWXXYRFKRN");

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
    msg.setTimeStamp(0.514950430918);
    msg.setSource(8363U);
    msg.setSourceEntity(84U);
    msg.setDestination(63038U);
    msg.setDestinationEntity(110U);
    msg.op = 234U;
    msg.file.assign("FXZPVIZJUSKEOYNHQHGQSRUXBYHQCVRNJUKLMSCFFVTBGEXPIJWE");

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
    msg.setTimeStamp(0.875954842953);
    msg.setSource(65301U);
    msg.setSourceEntity(149U);
    msg.setDestination(61276U);
    msg.setDestinationEntity(232U);
    msg.op = 234U;
    msg.clock = 0.209369483455;
    msg.tz = 68;

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
    msg.setTimeStamp(0.407457765866);
    msg.setSource(30306U);
    msg.setSourceEntity(161U);
    msg.setDestination(33351U);
    msg.setDestinationEntity(239U);
    msg.op = 3U;
    msg.clock = 0.317948006226;
    msg.tz = -67;

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
    msg.setTimeStamp(0.487855040812);
    msg.setSource(3911U);
    msg.setSourceEntity(251U);
    msg.setDestination(32915U);
    msg.setDestinationEntity(141U);
    msg.op = 40U;
    msg.clock = 0.778327187482;
    msg.tz = -7;

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
    msg.setTimeStamp(0.968472544779);
    msg.setSource(52233U);
    msg.setSourceEntity(169U);
    msg.setDestination(55367U);
    msg.setDestinationEntity(61U);
    msg.conductivity = 0.854864126181;
    msg.temperature = 0.512227611879;
    msg.depth = 0.349555517607;

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
    msg.setTimeStamp(0.604720926015);
    msg.setSource(47375U);
    msg.setSourceEntity(92U);
    msg.setDestination(49794U);
    msg.setDestinationEntity(190U);
    msg.conductivity = 0.208731198116;
    msg.temperature = 0.975679888636;
    msg.depth = 0.582355645264;

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
    msg.setTimeStamp(0.439642103263);
    msg.setSource(27504U);
    msg.setSourceEntity(166U);
    msg.setDestination(43083U);
    msg.setDestinationEntity(1U);
    msg.conductivity = 0.769335553223;
    msg.temperature = 0.607071356623;
    msg.depth = 0.0709686733746;

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
    msg.setTimeStamp(0.541144756874);
    msg.setSource(11393U);
    msg.setSourceEntity(214U);
    msg.setDestination(14015U);
    msg.setDestinationEntity(254U);
    msg.altitude = 0.721018808022;
    msg.roll = 40833U;
    msg.pitch = 11442U;
    msg.yaw = 9835U;
    msg.speed = -29002;

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
    msg.setTimeStamp(0.583550149029);
    msg.setSource(60054U);
    msg.setSourceEntity(221U);
    msg.setDestination(54235U);
    msg.setDestinationEntity(44U);
    msg.altitude = 0.621551886959;
    msg.roll = 7294U;
    msg.pitch = 48052U;
    msg.yaw = 58719U;
    msg.speed = -1404;

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
    msg.setTimeStamp(0.507172699343);
    msg.setSource(26628U);
    msg.setSourceEntity(44U);
    msg.setDestination(39856U);
    msg.setDestinationEntity(1U);
    msg.altitude = 0.918690344405;
    msg.roll = 8140U;
    msg.pitch = 48441U;
    msg.yaw = 53722U;
    msg.speed = -29483;

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
    msg.setTimeStamp(0.80330170537);
    msg.setSource(59116U);
    msg.setSourceEntity(142U);
    msg.setDestination(45854U);
    msg.setDestinationEntity(221U);
    msg.altitude = 0.948243904831;
    msg.width = 0.585507860612;
    msg.length = 0.581199964538;
    msg.bearing = 0.169082081361;
    msg.pxl = 29266;
    msg.encoding = 220U;
    const char tmp_msg_0[] = {-65, 57, 73, -75, 0, -54, -59, 31, -27, -2, 45, -62, 56, -51, 98, -116, 100, -96, -112, 63, 121, -116, -26, 100, 81, 64, -77, -73, 83, -94, 59, -9, -64, 53, 103, 93, 73, -10, 8, -101, -121, -21, -25, -38, 43, 107, -21, -110, -27, 53, 28, 7, -102, -112, 36, -103, 103, -37, -10, -1, -15, -9, -67, -44, 75, 25, 10, 88, 111, 118, 70, -114, -126, 61, 81, 13, -83, -41, 48, 63, -39, 6, -6, 21, 97, -17, 108, -24, 98, 16, -99, -102, -127, -117, 99, -37, 111, -5, -57, -124, -1, -10, 72, 41, 104, -11, -9, 49, 53, 29, 37, -37, 41, 60, -15, -4, -44, 0, -41, 50, -80, 16, 126, 75, -56, -122, -123, 66, -46, -88, 81, 101, 107, 80, -17, 124, 124, -12, 34, 118, 7};
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
    msg.setTimeStamp(0.402489415626);
    msg.setSource(37310U);
    msg.setSourceEntity(87U);
    msg.setDestination(20993U);
    msg.setDestinationEntity(84U);
    msg.altitude = 0.543996492762;
    msg.width = 0.200726913374;
    msg.length = 0.909973008723;
    msg.bearing = 0.373099197622;
    msg.pxl = 13489;
    msg.encoding = 193U;
    const char tmp_msg_0[] = {98, -44, 8, 89, 81, -37, -16, 112, 121, 72, 20, -122, -105, 19, -120, 123, -29, -12, 67, 0, 121, -30, 34, 59, 74, 99, 92, -74, 71, -36, 40, 37, -102, 67, -99, -64, -60, 4, -21, 38, 68, 39, -47, 85, -113, -35, 0, 57, -125, -39, 12, -34, 28, -14, -105, -61, -128, -61, 92, 102, -47, 58, 81, -42, -21, -2, -101, -13, 38, -71, 17, -23, -106, 68, 58, -31, 117, 81, -76, 86, 97, 117, -13, -99, -32, 60, 60, -124, -25, -35, 124, -39, -83, 63, 32, -92, 26, -102, -5, 81, -15, 59, -48, 123, 64, 33, -93, -97, 82, 41, 43, 78, 61, 35, -110, -125, 47, 60, -74};
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
    msg.setTimeStamp(0.102355992888);
    msg.setSource(52527U);
    msg.setSourceEntity(62U);
    msg.setDestination(12566U);
    msg.setDestinationEntity(151U);
    msg.altitude = 0.887308361219;
    msg.width = 0.215046156457;
    msg.length = 0.012220510963;
    msg.bearing = 0.493018859994;
    msg.pxl = -1430;
    msg.encoding = 224U;
    const char tmp_msg_0[] = {-113, 24, -99, 98, 26, -28, 5, 70, -104, 39, 5, 42, -10, -42, 98, -9, 68, -26, -95, -42, 109, 73, 108, -102, 36, 115, -110, 92, -23, -42, -39, 24, 118, 97, -85, 110, -12, 76, 125, 35, 29, -68, 112, -73, -87, 64, -34, 110, 56, 3, 28, 30, 71, -70, -34, -114, 64, -35, 104, -96, 19, -38, 72, 29, -15, -22, 9, -21, -82, 51, -79, 70, -28, -32, 56, -86, -110, 17, -36, -120, 15, 13, 20, 123, 88, 21, -75, -79, -108, -67, -120, 47, 50, -29, -99, -54, -79, -128, -115, -111, -7, 84, 1, -20, -103, 116, 3, -52, -33, -24, -26, -126, 93, -100, -64, 79, 31, 37, -106, -118, -61, -7, -46, -89, 35, 8, -93, -118, 84, 120, 116, 14, -80, -113, -59, -43, 83, -21, -108, 104, -56, -81, -80, 76, -88, -6, -64, -119, 4, -31, 105, 79, -39, -17, 9, -43, 43, 10, 70, 28, -11, 69, -81, 5, -124, -118, -30, -118, 53, -57, -16, 85, 25, -55, 47, 24, 115, 47, -4, -114, 115, -106, -101, -59, -69, 49, 104, -71, 94, 46, 112, 83, -14, -123, -6, -34, 26, 120, -117, 13, 20, 24, -67, 54, 111, -26, 105, 8};
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
    msg.setTimeStamp(0.244988496248);
    msg.setSource(41156U);
    msg.setSourceEntity(60U);
    msg.setDestination(63633U);
    msg.setDestinationEntity(36U);
    msg.text.assign("ZSSQADGIKLRAKPRHJWUVCCFQDPLBVJOXRMUAFPTELPDHMTXKCPBUZQSDABATABOVWQNASKICLHKUDMPVHFMKKBZBJYJNB");
    msg.type = 42U;

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
    msg.setTimeStamp(0.653483209304);
    msg.setSource(34534U);
    msg.setSourceEntity(116U);
    msg.setDestination(46369U);
    msg.setDestinationEntity(169U);
    msg.text.assign("UEYSQHPPDAQSAHRCQRIBEIKDLCYNTUVBRNQLTBMJLAUTYAZOXSFONIKXFKHVKJHJNSDLMHCIKEAQBRYMFPQGKTCTCJTEVLWUIVEMVBTLGOTPYHPZNDJDFICXLSAWZTURSYWDWECVFPOZGCXNWOOWUAYUUEKFXUHMDBXBBJHKLMOXYGLKIAPEBTSMYQZDWNFDXCRQRJCIAEPGZUHGYNFGNMWMIJXWPZBQIFLDVMORVZWROEAJKJZVROZSQFNG");
    msg.type = 201U;

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
    msg.setTimeStamp(0.147770973274);
    msg.setSource(32302U);
    msg.setSourceEntity(223U);
    msg.setDestination(30831U);
    msg.setDestinationEntity(38U);
    msg.text.assign("NQIOUGGRXIIHNOQCPSVJMGU");
    msg.type = 89U;

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
    msg.setTimeStamp(0.11585539281);
    msg.setSource(45594U);
    msg.setSourceEntity(3U);
    msg.setDestination(27923U);
    msg.setDestinationEntity(67U);
    msg.parameter = 146U;
    msg.numsamples = 196U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 48464U;
    tmp_msg_0.avg = 0.125447684415;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.936134150852;
    msg.lon = 0.189791114665;

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
    msg.setTimeStamp(0.21826861581);
    msg.setSource(41790U);
    msg.setSourceEntity(45U);
    msg.setDestination(14598U);
    msg.setDestinationEntity(240U);
    msg.parameter = 155U;
    msg.numsamples = 65U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 432U;
    tmp_msg_0.avg = 0.491923217707;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.910737247957;
    msg.lon = 0.451556501022;

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
    msg.setTimeStamp(0.341048616445);
    msg.setSource(60735U);
    msg.setSourceEntity(229U);
    msg.setDestination(58659U);
    msg.setDestinationEntity(157U);
    msg.parameter = 147U;
    msg.numsamples = 101U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 25784U;
    tmp_msg_0.avg = 0.0440310903361;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.699424538085;
    msg.lon = 0.991652394913;

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
    msg.setTimeStamp(0.619518323435);
    msg.setSource(2552U);
    msg.setSourceEntity(129U);
    msg.setDestination(55585U);
    msg.setDestinationEntity(64U);
    msg.depth = 45641U;
    msg.avg = 0.829513404236;

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
    msg.setTimeStamp(0.00207763208579);
    msg.setSource(51303U);
    msg.setSourceEntity(163U);
    msg.setDestination(44312U);
    msg.setDestinationEntity(102U);
    msg.depth = 32664U;
    msg.avg = 0.414885020498;

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
    msg.setTimeStamp(0.134020471891);
    msg.setSource(24339U);
    msg.setSourceEntity(213U);
    msg.setDestination(47798U);
    msg.setDestinationEntity(51U);
    msg.depth = 34375U;
    msg.avg = 0.49634534115;

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
    msg.setTimeStamp(0.882210871512);
    msg.setSource(48538U);
    msg.setSourceEntity(140U);
    msg.setDestination(20816U);
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
    msg.setTimeStamp(0.00121731805732);
    msg.setSource(10596U);
    msg.setSourceEntity(3U);
    msg.setDestination(39149U);
    msg.setDestinationEntity(173U);

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
    msg.setTimeStamp(0.652032710244);
    msg.setSource(13490U);
    msg.setSourceEntity(218U);
    msg.setDestination(52212U);
    msg.setDestinationEntity(2U);

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
    msg.setTimeStamp(0.657493206378);
    msg.setSource(36655U);
    msg.setSourceEntity(149U);
    msg.setDestination(58097U);
    msg.setDestinationEntity(145U);
    msg.sys_name.assign("MWFEWLUYOQWNWUVTHSUILACMIJWVAYBLNEODAESFZTZ");
    msg.sys_type = 3U;
    msg.owner = 44554U;
    msg.lat = 0.0356723283934;
    msg.lon = 0.521070704191;
    msg.height = 0.343978941518;
    msg.services.assign("DRFLBKFJIDOBKAPXSEQIGUMAEEUVGKJZHZYCCLZKBRBCALDHFAVSEGHHFXWQQKGWOZQCXWOJWHJKTGPAVNEJLMWUPSITGNIQAYBCDVPCYOIIMDFJCRTPJYXPXAABEATWDFMCABUHYGNXTTXIIFOXVMLSOJGFNQHNYPVKTLUVCNEURNQOULUWHMGCLYFPZYMOJDLXTSJOTTQDKZSMREZHR");

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
    msg.setTimeStamp(0.644923143492);
    msg.setSource(58534U);
    msg.setSourceEntity(31U);
    msg.setDestination(19238U);
    msg.setDestinationEntity(168U);
    msg.sys_name.assign("JMOILENMWRFJQEUCWAWQJLXVZYZACTBQKASFNLBOFRANJYUXHQRAOC");
    msg.sys_type = 205U;
    msg.owner = 43538U;
    msg.lat = 0.91435330118;
    msg.lon = 0.743684257146;
    msg.height = 0.119066262893;
    msg.services.assign("EOAXUWRZJVQHLHBMHKUUGVUSDDDZWLYYDOFZSEPMPSWMGONGXNRFENIJOCEPRTDNQORPJBMHHITNPBFGWAIAEFLVXYKQERTJCIJUFYZIGCMHOQXCZPNGNLWHTMV");

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
    msg.setTimeStamp(0.0533881316589);
    msg.setSource(22492U);
    msg.setSourceEntity(42U);
    msg.setDestination(26233U);
    msg.setDestinationEntity(76U);
    msg.sys_name.assign("SIDEOAALPFTQNDHMONTMNRRGGCVLZWMDLNPYKYBHOJEHETAXUMZFXFBMPJFBORRZHVURAZYXAYLNTYWJMQQRWIMIVDMIRJFKEGXUCOJBZHDPQNGPGMQKSAVEFVYUKDXIHQIGLJSHWVZKSCOZEKABIP");
    msg.sys_type = 136U;
    msg.owner = 24892U;
    msg.lat = 0.890171555623;
    msg.lon = 0.360349996172;
    msg.height = 0.177266487092;
    msg.services.assign("IUMLNXJWWILWPSESXULPKKJPMGSUZQQFKSVXBXVISJGTYSISZKHHOLETOHFFPIFOCPTBWYOXQXJATJRCEWMILFWAIZNMCLPMYZCUVSFDPTKZRQGPDWMUUKBYYYJDTKHVOHEYBNWNXETVMKLYFIXACEDRAANEVDOCWVPWXPQBNANMSFGANJJOZTILURNFTTEYRHUKERZHRLRCBHICUGAAGBSQDZCXOGHABYHKDQUQZDRVEGJGDRMFOC");

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
    msg.setTimeStamp(0.715011618116);
    msg.setSource(33596U);
    msg.setSourceEntity(171U);
    msg.setDestination(27751U);
    msg.setDestinationEntity(154U);
    msg.service.assign("NQRCZMBGIQBYTDNFKHVIZCJQMVNMXAOXLRDAJGTHMZAMCRPAAZGQJSQBHCCWSDYBUGLKYHTPDMUXTIKQSNMZWZBUCFFUOUJXEKZORJJJCLOXXWVBPSVGVEEFBOVMODECTBEKAEJGWAWPFQLMCBWKNQVENNLVINXWZHVSSYLHGGIQUTHNPUWTHSRNZFUYUYPEKRLWPTRHSKDYTAF");
    msg.service_type = 46U;

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
    msg.setTimeStamp(0.726337111512);
    msg.setSource(39086U);
    msg.setSourceEntity(179U);
    msg.setDestination(47468U);
    msg.setDestinationEntity(215U);
    msg.service.assign("ZYMPXCFEFBRNUZVPTMTMECZKFWBTZZPRQOLBSHRXSAIXZGAIKJUCDAHXDEERJQTLKCLIYLLBUFGEFJSUFNJEUNMXDPNUVEJGXDCSACYFAZRDIINOMOSWZYCEGMMLISVBNKHDKTGOKLHKYPIKSUMYHPXRHKJFVVXTRYUEGOWWDHXJQSWQRDPWWKQAYLPNPAVQFCVOSGNBVBBSZ");
    msg.service_type = 60U;

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
    msg.setTimeStamp(0.691653800253);
    msg.setSource(38470U);
    msg.setSourceEntity(216U);
    msg.setDestination(31980U);
    msg.setDestinationEntity(133U);
    msg.service.assign("OMRNVZYSMHXXENIBZHUUFACVEIMCFENMJOLPFAIXHSQTRZLPDBIDPADOCKWAKPAWLGRFWRFHNQMGKQJPPZLXQHRYSYZJEYLC");
    msg.service_type = 81U;

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
    msg.setTimeStamp(0.389165558976);
    msg.setSource(33259U);
    msg.setSourceEntity(56U);
    msg.setDestination(51051U);
    msg.setDestinationEntity(252U);
    msg.value = 0.73325494707;

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
    msg.setTimeStamp(0.713562950574);
    msg.setSource(30508U);
    msg.setSourceEntity(230U);
    msg.setDestination(43738U);
    msg.setDestinationEntity(217U);
    msg.value = 0.0310189657869;

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
    msg.setTimeStamp(0.12156163262);
    msg.setSource(8588U);
    msg.setSourceEntity(203U);
    msg.setDestination(30604U);
    msg.setDestinationEntity(70U);
    msg.value = 0.156071925977;

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
    msg.setTimeStamp(0.91458225487);
    msg.setSource(59138U);
    msg.setSourceEntity(137U);
    msg.setDestination(54618U);
    msg.setDestinationEntity(56U);
    msg.value = 0.00597725107641;

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
    msg.setTimeStamp(0.177362175814);
    msg.setSource(9555U);
    msg.setSourceEntity(86U);
    msg.setDestination(51805U);
    msg.setDestinationEntity(161U);
    msg.value = 0.0795608505076;

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
    msg.setTimeStamp(0.266232586019);
    msg.setSource(47294U);
    msg.setSourceEntity(74U);
    msg.setDestination(16553U);
    msg.setDestinationEntity(31U);
    msg.value = 0.842338950531;

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
    msg.setTimeStamp(0.473616910495);
    msg.setSource(695U);
    msg.setSourceEntity(239U);
    msg.setDestination(49048U);
    msg.setDestinationEntity(15U);
    msg.value = 0.743012632458;

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
    msg.setTimeStamp(0.99736202751);
    msg.setSource(3482U);
    msg.setSourceEntity(55U);
    msg.setDestination(7339U);
    msg.setDestinationEntity(229U);
    msg.value = 0.382015619906;

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
    msg.setTimeStamp(0.822044826306);
    msg.setSource(29208U);
    msg.setSourceEntity(57U);
    msg.setDestination(113U);
    msg.setDestinationEntity(106U);
    msg.value = 0.540136606992;

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
    msg.setTimeStamp(0.353944292177);
    msg.setSource(1610U);
    msg.setSourceEntity(36U);
    msg.setDestination(64268U);
    msg.setDestinationEntity(87U);
    msg.number.assign("OJLXCLDBNKRDPKQCZFTOTCVHOZVIHZJXBDONQPMUBMWEMPUAFSTUGAGFUICSLGERBXRDOFMWPHKOLJFGJDNCLUUYVGROJXQEXCKMARMNHMEBGRKDRXMFVIUPOQLWJQACTIPKHRISHKWEBTDUEPYEQSGYWANCANF");
    msg.timeout = 45620U;
    msg.contents.assign("HEQAEFAXWVVWKFPWXOFYPONCUVDPLXDMBXIHNMPZBHYGZGJGMZMH");

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
    msg.setTimeStamp(0.0728463375932);
    msg.setSource(22393U);
    msg.setSourceEntity(89U);
    msg.setDestination(64738U);
    msg.setDestinationEntity(208U);
    msg.number.assign("FAEMIWXSAUOPZVYVHROSGIENARSCPYUGOZSLDMFLWNGFTKQKGPFAZEHEWDABJYTHQCYXQU");
    msg.timeout = 2197U;
    msg.contents.assign("FQEVYMEZZZOMIWDNWROINMTJWYZLPKB");

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
    msg.setTimeStamp(0.142048933629);
    msg.setSource(6158U);
    msg.setSourceEntity(106U);
    msg.setDestination(55815U);
    msg.setDestinationEntity(65U);
    msg.number.assign("QOOGSOYXYPTTACMMINBEHEDKULQKRCWCGBPLJNWAKSXVAMVTAZWGOHMEHWNSHFQQHXJCGUKRECBWGSSKQRHJURDNQMYKTBNIVAPEGIAQUEUPPIZPQNGFPTRWHG");
    msg.timeout = 37105U;
    msg.contents.assign("UKBWKAWAICDGPRBZSLLJVRPJGNTZIAXHKIFQLFYXHGNREKBMTJUXGKEYMGHPXCIIBUUKCLGASSYZOWZWAIKWYRPMNSNDLLFCAMQSJYUTDTFQEOJTYMREFTZYIZBPMANTSZZFHMTJOWQO");

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
    msg.setTimeStamp(0.736228735793);
    msg.setSource(9026U);
    msg.setSourceEntity(160U);
    msg.setDestination(25501U);
    msg.setDestinationEntity(131U);
    msg.seq = 3054825608U;
    msg.destination.assign("OONCNTREFOZOZMHYFPRHAGHILNOOUVHCDZSEDJABIFBWYWPZXYKVUSSAODXXGCBTITJFAJMDOBQGLVUIFLNVJKAVPGWEIBPQAHMMWINMFSMXKUCJYLGNMQRTWNZWMIVBWEKBPDVQHRVTUUSNAVLIAHKVTOZAUHAWNECQHTHJLUJKJGLSRMQBZWEEFTQGXRYCKGRGQLECSDTYYJBZPEDPGPRKCQSSRBMXFXO");
    msg.timeout = 32394U;
    const char tmp_msg_0[] = {-59, -61, -54, -3, 49, -82, 83, 76, 85, 53, -26, 63, -36, 87, 70, -27, 47, 8, -81, -22, -13, 38, -33, -49, 43, 24, -41, 81, -79, 21, -5, 11, -127, -54, 84, -22, 50, 41, 122, -12, 4, -13, -72, 115, 26, 85, -87, -65, 72, -126, 94, -69, -100, 57, 61, -52, -109, -7, 13, -75, 100, 113, -10, -101, 22, 113, -61, -86, -7, 23, -5};
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
    msg.setTimeStamp(0.333384288862);
    msg.setSource(43008U);
    msg.setSourceEntity(182U);
    msg.setDestination(11938U);
    msg.setDestinationEntity(124U);
    msg.seq = 1207751570U;
    msg.destination.assign("WKSPCRXRLYMYTLMUKIUAMYVSZMAILWDFYBBNSCGFWOQNRGBXKYMDJREBJNHZGNHGUHGTJRKGEEOAVCNYRKCMUXTISXQOVAQOUAHCLLNNVVBEJTSXWPNAFGORZTVPGOMSWJHJKWFBPDPQXZJHLHJHZRZ");
    msg.timeout = 43236U;
    const char tmp_msg_0[] = {36, -95, 49, 116, -81, -8, 80, 56, -19, 45, 97, -99, -76, 37, 79, -59, -89, -89, -122, -64, 96, -51, -70, 73, 44, -89, -43, -19, -8, 12, -119, -36, -86, 122, 40, -66, 11, 102, -53, 16, -87, -8, -100, -10, -21, -99, -80, 38, -67, 23, -75, 68, 55, -28, -46, -50, 61, 55, -9, 125, -9, -34, -114, 41, 60, -49, 115, -12, 72, -107, 82, -71, 51, -122, -117, 79, 53, -33, -28, 110, -46, -118, 14, -95, 126, -108, -70, 96, 55, 121, -94, 111, -56, -114, 4, -92, -38, -86, -98, -8, -44, -80, -82, -34, 100, -68, -107, 106, -67, -78, -34, -89, 91, 64, -122, 25, -43, 91, -109, 86, -6, 5, 75, -76, -124, 43, -98, 60, 104, -72, -91, 57, 121, -109, 47, -89, 91, 106, -71, 35, -106, -49, 74, -77, 44, 10, 42, 15, 6, -93, 109, 5, -76, -89, -94, 36, -127, 42, -56, 22, -10, -9};
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
    msg.setTimeStamp(0.0739430838247);
    msg.setSource(33675U);
    msg.setSourceEntity(136U);
    msg.setDestination(33006U);
    msg.setDestinationEntity(170U);
    msg.seq = 3659104392U;
    msg.destination.assign("PJYVRZVPQUXLQTNHCTMALURPURKXKMVGZOGUFKJLRUGZDJLFBIQUALEZOWLYBUOAGCGNGKDQWZNIZBTLSHSVAJICGOX");
    msg.timeout = 28780U;
    const char tmp_msg_0[] = {16, -100, 63, 103, -22, -122, 32, 9, -6, -85, -6, -57, 73, -74, 92, -22, -87, 51, 107, 2, 51, 96, 81, -23, 82, -20, -87, -75, -102, -7, -59, -73, -19, -40, 55, -95, 65, -103, 111, -12, -62, -86, -39, 93, -4, -9, 52, -60, 68, -70, 12, 91, -56, -104, 6, -92, 118, -30, -13, 24, 96, 22, 44, -74, -116, -19, -91, 109, -78, 24, 34, -19, -17, -31, -56, 19, 7, 116, -11, -27, -27, -34, 11, -8, 75, -84, -23, -121, -45, -61, 57, 20, 123, 37, -65, 84, -96, 88, 93, -23, -116, -76, -60, -111, -76, -11, -35, -99, 29, -34, -58, 54, -54, 67, -45, -73, 21, 39, 8, 114, 73, -30, -52, -93, 99, -82, 74, -122, -101, -23, -71, -36, 41, 49, 75, 125, 113, 93, 114, -73, -88, -26, -67, -38, -16, -17, 41, -1, -28, -92, -52, -102, 111, 8, -4, -80, 24, -37, -9, 71, 117, 47, -24, 97, 32, -4, -113, -60, -120, -12, -24, -12, -127, -124, -29, 84, -17, -12, 20, 116, 13, 121, 72, -55, -60, -86, 46, 87, 101, 11, -120, 85, 37, 56, -47, 61, -58, -100, -16, -91, 94, 10, 88, 100, 90, 86, 2, 121, 29, -5, -32, -63, 72, -25, -75, -59, 39, 87, 86};
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
    msg.setTimeStamp(0.147764037059);
    msg.setSource(23824U);
    msg.setSourceEntity(205U);
    msg.setDestination(2535U);
    msg.setDestinationEntity(101U);
    msg.source.assign("AXOOZWNFFVPPRDQDQQKTARJNQCMKCQOTGKRBYFLOUWRUSBKNASHYRYTBAMHBUJK");
    const char tmp_msg_0[] = {103, -47, 92, 24, -104, -22, 52, -114, 81, 61, -52, -26, -10, 85, 34, 101, -79, -46, -123, -94, 74, -93, -119, -42, -123, 85, -46, -6, -65, 70, 14, -19, 9, -28, 91, -23, 34, -95, -101, 111, -80, -122, 97, -17, 91, -120, -55, -62, -64, 20, -1, -9, -96, 0, 8, 120, 74, 98, 126, -12, -85, -13, -1, 113, 82, -109, 16, 88, 112, -40, 63, -45, 114, 115, 71, -20, 35, 20, -20, 112, 43, 59, 42, 79, 100, 104, 80, 70, 70, 73, 38, -105, 8, -110, -6, -52, -20, 99, 111, -7, -114, -3, -113, -3, 73, -26, 48, -33, 124, -21, -112, -94, -83, 64, -79, -63, -15, 47, 35, 110, 3, 46, -23, -82, 7, 110, -95, -3, -102, -55, -37, -85, -87, -15, 41, 84, -86, 18, 91, 76, 40, 21, -69, -110, 124, -101, 73, 16, 108, 104, 38, -23, 109, 41, -60, 115, 115, -97, 86, 90, 106, 51, -90, 45, 14, -113, -102, 70, -35, 4, 107, 93, -106, 104, -94, -119, 97, 5};
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
    msg.setTimeStamp(0.847419195122);
    msg.setSource(54910U);
    msg.setSourceEntity(172U);
    msg.setDestination(38997U);
    msg.setDestinationEntity(162U);
    msg.source.assign("UICIWDYBWIPAHBKQRLOWD");
    const char tmp_msg_0[] = {87, -78, 31, -60, 118, 67, -2, 100, -35, -10, -51, -75, 24, 3, -70, -61, 10, 104, 99, 34, 70, 33, -126, 35, -27, 37, -65, -78, 68, -64, -93, 76, 100, 81, 68, 41, -1, 66, 123, 61, 65, 6, 15, 22, -65, -46, 75, 98, -99, 49, -106, 18, -113, 37, -78, -74, -47, 120, 36, -37, 26, 97, -103, 38, -12, -13, 24, -126, -15, -100, 48, 97, 19, 112, 65, -93, 57, 54, -38, 1, -75, 62, 68, -43, 75, 65, 0, -41, 103, 38, -53, 20, -92, -7, 116, -106, -127, -25, -78, -17, 19, 104, -124, -82, 55, -67, -110, -39, -90, -72, 22, -34, 68, -80, 16, -87, 18, 34, 113, 88, -119, -46, -18, -98, 41, -40, 60, -24, -114, -42, -50, -108, -95, -117, -103, -46, -76, 27, -12, 21, -58, 25, 100, 117, 6, -80, 73, -14, -23, 45, 81, 22, 115, 97, -106, 17, 73, 0, 32, 76, 65, 93, -65, 53, -47, 95, -56, -29, 25, 74, 42, 49, -88, -25, 7};
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
    msg.setTimeStamp(0.658382761519);
    msg.setSource(57957U);
    msg.setSourceEntity(11U);
    msg.setDestination(39587U);
    msg.setDestinationEntity(229U);
    msg.source.assign("SVRIWWXGLHFSTRERANVXXGUSXXFCPWFVWSOPMNEIECMZDDBZRVNMDUJDYCGQTLHVHRPNHPBLOYUSSAIWIALXPFKTOEUPINLATMYHZAFSJEAJDUBJQTCUDYWIPSKTCFBROKQ");
    const char tmp_msg_0[] = {-117, 40, 117, -70, -26, -118, -114, 10, 71, 75, 122, 28, 106, 112, -43, -69, -81, 120, 107, 81, -67, 89, -42, -43, 119, -33, 20, 121, 41, -8, 91, -125, 24, 69, 113, -126, -79, 116, 73, 29, 49, 98, 108, -3, -70, 115, -26, 123, -109, 116, 86, -36, 25, -27, -90, 20, 114, -48, -53, 125, -76, 22, -39, 0, -103, 62, 4, -81, 72, -29, 124, 71, -24, -81, 117, 114, 124, -72, -56, 105, 56, 73, 61, 73, -125, -66, -111, -30, 75, -78, -58, -54, -76, 79, 59, 104, -122, 48, -50, -69, 91, 32, -49, -45, -23, -108, 86, -74, 97, 117, 27, 102, 101, 121, 57, -10, 18, -11, 115, 5, -14, -53, 90, 80, -71, -118, -41, -76, 119, -77, -11, 92, -53, 108, -40, 91, -61, 10, 116, 38, -97, -128, 73, -67, 8, -124, 99, 21, 122, -79, -7, 53, 12, 118, -4, 39, -71, -95, -128, -109, 74, 24, -103, -30, -33, -127, -23, -96, 23, 23, -2, 18, 64, -62, -37, 116, -110, -85, -63, 117, 119, 124, 10, -38, -108, -109, -102, -25, -86, -68, -57, -41, -93, -36, 118, -123, 101, -53, 102, 7, 124, 81, -94, 100, 40, -25, 69, 90, 63, 100, -93, 19, 105, 32, 32, 38, -66, -2, 84, 52, -9, -80, 68};
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
    msg.setTimeStamp(0.308835864258);
    msg.setSource(9285U);
    msg.setSourceEntity(204U);
    msg.setDestination(1985U);
    msg.setDestinationEntity(16U);
    msg.seq = 1052572082U;
    msg.state = 156U;
    msg.error.assign("LWIZZKNPTVBYJRARUWEUTXSUMDEMLSARBYLZXDQFGMPDHASZSNWOAHBHIVSNFDEPAYOEMMRQKUNHSTLBWIITXEEUFBDGMEKVXFHEYXOIDOXSZCLICVRCIZOJRYC");

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
    msg.setTimeStamp(0.769819348042);
    msg.setSource(24140U);
    msg.setSourceEntity(177U);
    msg.setDestination(20038U);
    msg.setDestinationEntity(19U);
    msg.seq = 3628641220U;
    msg.state = 68U;
    msg.error.assign("PPQKKTWTBZZNQBFOVRXCWBTRLOWQSDXJXMOBHVUMYJLVHFSJPMMJFFXFSKPLOIBHGZNYKMW");

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
    msg.setTimeStamp(0.0706366117742);
    msg.setSource(57418U);
    msg.setSourceEntity(20U);
    msg.setDestination(9048U);
    msg.setDestinationEntity(183U);
    msg.seq = 3342026133U;
    msg.state = 15U;
    msg.error.assign("DMWCSSCUNHHGLCPBMAEDWIOKBQSZAFCOMXPIKDDSGTQETLAWHHPPQVGDUUAXKKIRVBLBPHRVJSOFWEBSQYYBOMNLIZFKYVQNZJZAAWKMDTMPQYGKJTDWMIMRJEHZYJJEMUAEQISFUECAZXBTQJCHWZSNKGTPNYXDFFTLVHTGGSHRVWTNKNVCRIESOJWZRHXFPJOOCUZFU");

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
    msg.setTimeStamp(0.2531025272);
    msg.setSource(49616U);
    msg.setSourceEntity(142U);
    msg.setDestination(51791U);
    msg.setDestinationEntity(149U);
    msg.origin.assign("KDLXSRRINAHPYUOGRTARHHEMJ");
    msg.text.assign("XQWPPOHWDHYBCWKJBRBGTEDNHVGMFSAQOKZNZOHRHILNMTAWKARQATYOXPSIALXEZGSMBQSQIVWYFGEPFRCHUFGBZOQZZCWLFIXBZASCRMIKIJMQLALVLPMHHEDNYOFFTHONBFGDPKENKYVRWSUYIESUTJJLXSJUKGFMVZAKGYUNJXICVTWPJDB");

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
    msg.setTimeStamp(0.738953456217);
    msg.setSource(49081U);
    msg.setSourceEntity(190U);
    msg.setDestination(17764U);
    msg.setDestinationEntity(235U);
    msg.origin.assign("PHRYITAUFQKCMOXRFTV");
    msg.text.assign("OLDKKISCDAVBN");

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
    msg.setTimeStamp(0.633331207917);
    msg.setSource(52551U);
    msg.setSourceEntity(82U);
    msg.setDestination(61519U);
    msg.setDestinationEntity(134U);
    msg.origin.assign("PGNCGWFTFVXJBMGHUFKIDBHCPZWXRQYPZYVRVWBRJTFOWHUXVQSXRNDGAEVJPNWCZKKZRWLTZBCRMHDNYAMAGUBGKQJHEBBMHKKTDSZUAXOYQOBURVOCFKARPAMFLYSEMWOOLRLOVETPYYIUIPHQCODIBFESGZVAJXHCWZECHKAXYTNMSDAXS");
    msg.text.assign("FAHKDZFTMGIFNCZHYLZEMDYEAFEDFLZNNVXJWRUKQVXGQNCSUQJQMAUPKNOLTRELHTMYJEPJSZQCYPFUXNLO");

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
    msg.setTimeStamp(0.986724512323);
    msg.setSource(48128U);
    msg.setSourceEntity(64U);
    msg.setDestination(57567U);
    msg.setDestinationEntity(28U);
    msg.origin.assign("KYHBHGLPRWUUXKZVRTUOTJVCIHSXPVVSLIAQVSXJEBMTOCZZDFOTHXGNRJPIOQBASRMBYEQUCWQDWNAEHURYDBMKETVTVTIULWMYXQFAVJLPAYPFJHMGNDSAGMARMRGWIJBZMTOWQNYZIOKWGOMWANRWQZUCCOBDSGXBZECPFMTVJLLHZPKANHFGJKHDXECYALRJVWHBKCZIXOUEQYGPZEKKSURBYDIQPXLLPQDSFDENNDX");
    msg.htime = 0.0168202669936;
    msg.lat = 0.626762715873;
    msg.lon = 0.817568007301;
    const char tmp_msg_0[] = {-111, -97, -83, -55, -32, 125, -18, 57, 48, -17, -119, -94, -100, 54, -124, 45, 117, 31, 16, 45, 99, -93, 31, -122, -23, -2, 15, -49, 104, 92, 90, 26, 71, 110, 102, -67, 33, 54, 17, -13, -84, -92, -61, -7, 56, 40, 101, 84, 5, 33, 7, 76, 77, -103, 105, 71, -74, -116, 24, 9, -94, 53, -63, -78, 9, 96, 1, -79, 56, -20, 49, 73, 75, -90, -91, -86, 7, 36, -97, -94, 87, -117, -21, -118, 61, -52, 20, -84, -99, -16, 13, -13, -1, 21, 106, -124, 56, 114, 9, -72, -8, 33, -95, 7, -15, -56, -81, -25, 19, -47, -71, 71, -47, 26, -6, 70, 62, 49, -15, -120, 123, -99, 81, 93, 47, 28, -82, 93, 109, -32, 103, -37, -51, 83, 8, -77, -12, -92, -109, 52, 56, -124, -119, -13, 124, -99, -28, -91, 25, 25, 11, -67, 17};
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
    msg.setTimeStamp(0.722274094712);
    msg.setSource(49U);
    msg.setSourceEntity(194U);
    msg.setDestination(29446U);
    msg.setDestinationEntity(221U);
    msg.origin.assign("CDVHNBDJLKVVHZMRSHQZLGKPUTGZMXVRFQEWZ");
    msg.htime = 0.646588277086;
    msg.lat = 0.114012976088;
    msg.lon = 0.63291705712;
    const char tmp_msg_0[] = {36, -44, 65, -125, 74, -24, -23, 73, -37, -104, -37, -110, -28, -109, -62, -101, 119, -80, 118, 42, -86, 100, -24, 33, 55, 68, -19, 108, -65, -100, 106, -127, -20, 14, 56, -48, -55, -29, 119, 23, -54, -52, 126, 117, 82, 0, 29, 87, -61, -83, -100, -119, -75, 80, 58, -38, 5, 64, 112, -29, 50, -108, 49, 118, -53, -6, -18, -47, -5};
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
    msg.setTimeStamp(0.979356356674);
    msg.setSource(18067U);
    msg.setSourceEntity(107U);
    msg.setDestination(20052U);
    msg.setDestinationEntity(192U);
    msg.origin.assign("FKHUALQIZZQTRSDVUVWPWEOVZCLALZFHUMHDRPMNCBCHPJWEAZDJKLADZOCKFFOSUXGFUTEYKIJRGLSUJQQPVEJJQOSSCRBBCYANVPXMHSTPXGYNEURSZEXYIBFBXLFCOVAGITANKTIKIADPBNMDSGWAECGECTXRHPMQZBTVDBNRNTXGWFJZJVLTNQQGOE");
    msg.htime = 0.185577075848;
    msg.lat = 0.299905916229;
    msg.lon = 0.550027037345;
    const char tmp_msg_0[] = {-1, 83, -73, -24, -18, 113, -27, -33, 79, -114, 63, -62, -72, 22, 5, -31, -123, 76, -107, 4, -123, -70, 30, 87, -118, -53, -37, -86, 4, -54, -16, 116, -76, 42, -87, 49, 72, 104, 24, -67, -128, -63, 73, 12, 41, 64, 31, -28, -68, 34, 122, 5, 55, 82, -17, -7, 55, 8, 108, 80, 85, 39, 116, -71, 63, 117, 83, -103, -124, 75, -43, 103, -119, -101, -76, -17, 83, -93, 76, -61, -116, 81, 40, -11, -44, -83, -104, 68, -11, -102, 8, -107, -93, 103, -42, -47, 114, -37, 46, -113, -118, 86, -78, -83, -33, 57, -104, -124, 0, -125, -76, -60, 46, 124};
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
    msg.setTimeStamp(0.733589710023);
    msg.setSource(23412U);
    msg.setSourceEntity(184U);
    msg.setDestination(4906U);
    msg.setDestinationEntity(159U);
    msg.req_id = 54389U;
    msg.ttl = 47235U;
    msg.destination.assign("OBZYHWTCNVFZUFQNLSMIXGCDVSYANRAXWKQHNHPMSNXOWJBSZG");
    const char tmp_msg_0[] = {48, 45, 50, -79, 62, 113, -122, 90, -82, 6, 64, -5, 26, -31, 71, 0, -24, -61, -98, 58, -99, 44, -41, 3, -114, -107, 80, 49, -1, -110, 4, 16, 105, 0, 108, 32, 49, 117, -46, 107, -96, -38, -51, -78, -111, -127, 115, -29, 65, 62, 34, -117, -110, -70, 123, -97, 87, -116, 86, -45, 122, 49, -38, 107, -62, -33, -6, -41, -109, 91, -61, 115, 119, -46, 86, -121, -77, 27, 86, 33, 37, 33, 125, 119, 122, -79, -121, 81, 14, -80, 47, 42, -86, -103, 101, 16, 109, 117, -96, 58, -113, 121, -81, 116, 32, 19, -101, 3, 55, -47, -53, -61, -94, -83, 66, 1, -42, 106, 39, -81, 40, -3, 12, -55, 116, 72, 8, -127, 27, -45, 41, 88, 35, -99, -18, -12, -91, -64, 85, -73, 111, -109, 111, 24, -67, 101, -119, 8, 63, -87, -85, -127, -51, -7, 75, -90, -14, 113, -8, 81, -71, -92, -17, -90, -49, -17, 30, -94, -69, -70, 76, -4, -70, -80, 86, 32, 27, -33, 94, -4, -54, -14, 6, 46, 115, -62, 72, -58, 62, 104, -33, 16, 82, 101, -31, -10, -24, 90, -24, 17, 14, -6, 68, -51, -92, 97, -29, -104, -62, 2, 22, -11, 90, 15, 90, -63, -80, -101, -65, 29, -58, 55, -34, -121, 26, -117, -14, 92, 58, -49, -6, 67, -68, -87, 15, 96, 89, 104, 120, -3, -17, 65, -11};
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
    msg.setTimeStamp(0.0875692731602);
    msg.setSource(62792U);
    msg.setSourceEntity(237U);
    msg.setDestination(40577U);
    msg.setDestinationEntity(134U);
    msg.req_id = 30492U;
    msg.ttl = 31715U;
    msg.destination.assign("ITJKYTQMZZTBHUMOYQTOATSPOFIEKQWDNGGOYZNAJXYXOXMEVAEWVEYLCUIWWZKAVARLYKWSLVRHLOSMQGKKHFURWIIKHULZRERTPSSQBJPHLMDYNCLNLPGVSFQYITBCEJDGPFXDQWMFBU");
    const char tmp_msg_0[] = {13, 81, -8, -68, -101, -41, -121, -58, -107, -124, 42, -39, -2, -48, -80, 101, -62, -59, 90, -111, 57, 24, 54, 70, -30, 68, 24, 25, -108, -23, 114, 42, -38, -16, 90, -34, 8, 111, 27, -44, 13, 33, 57, -30, 61, -23, 40, -45, 0, 22, 18, -29, -91, 40, 40, -66, 74, -57, -18, 36, -14, -78, -55, 99, 7, -37, -109, 83, 70, 87, 123, -107, -126, 53, -80, -81, 18, 12, 25, 83, -119, -54, 93, -87, 125, -4, 30, -89, -121, 23, -103, 46, -14, -34, -58, -41, 81, 5, -126, 113};
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
    msg.setTimeStamp(0.148003536);
    msg.setSource(41216U);
    msg.setSourceEntity(137U);
    msg.setDestination(9155U);
    msg.setDestinationEntity(196U);
    msg.req_id = 52579U;
    msg.ttl = 24251U;
    msg.destination.assign("PMANPUIGJBJBOHRAAEKDBJPFNDVRVUHPFZQGYUGXTZMCZKFINVHKASHBFWMSZTQEOUEFUTFOWCGBYBMEQFNHACQKMZSLXIRPHNCTIZEPZEKAEKOXRCXHCOSLFYXNHDFWUZXTRKOGLDLLIMZWRYNPOPQRQFP");
    const char tmp_msg_0[] = {4, 51, 120, -109, -8, 48, -62, 71, 96, -27, 28};
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
    msg.setTimeStamp(0.205540879758);
    msg.setSource(26830U);
    msg.setSourceEntity(70U);
    msg.setDestination(38185U);
    msg.setDestinationEntity(47U);
    msg.req_id = 17625U;
    msg.status = 77U;
    msg.text.assign("BYIORAUZNZZAPDFEXWNXHVVVFLSNCFRDYQYQCEMGHRRQKCYUGFWZBBQSYPQYCOWMPZFRDVWODCAVTXQCDJNNMKCOUKNRPTRSLQDTDAUBPLKWSHBOJUUSIGJOPPMOFKSIYANMJNSOLORIJBGEEQXEUKNJMIMJIZYZGBZEYXQSKCXPVJ");

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
    msg.setTimeStamp(0.727513426298);
    msg.setSource(31147U);
    msg.setSourceEntity(215U);
    msg.setDestination(7490U);
    msg.setDestinationEntity(82U);
    msg.req_id = 31761U;
    msg.status = 114U;
    msg.text.assign("OVCKYYKOKUDDJOLVYADUFHMMYMVTJVEFFAOXZXKZQYUQTNKNYNNDQWQEPMCUBPYATJFMTHMJZNFRDJCWDVVLQKUBLDPCCGYAVIXPSMNHVGWIEDREXJRZNDNWLRIOKHMAFBQASRBLUQNGITAOGZYWRCLCZTUTHLGELSHANBMSUEHGZIS");

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
    msg.setTimeStamp(0.639620068159);
    msg.setSource(35431U);
    msg.setSourceEntity(3U);
    msg.setDestination(34010U);
    msg.setDestinationEntity(227U);
    msg.req_id = 33708U;
    msg.status = 122U;
    msg.text.assign("RJRNKOAAJIQNDFCFDZPWBCDRMQMCJBWOZOVFNUUYYBPOPNVPXKFHGSEGGCJSBFPMIQQOGQEKMRBAQJQCBTYJSMCDTZKWFXAPNWIRCFHSDHHWSSAPTGKKWUIRXYZDYHTIPIVIVHLAMDWXVGYH");

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
    msg.setTimeStamp(0.106359231155);
    msg.setSource(32138U);
    msg.setSourceEntity(54U);
    msg.setDestination(18751U);
    msg.setDestinationEntity(224U);
    msg.group_name.assign("SCKGLKTSAYNYUMBHRBTUNXRGJDQQBVWTZGAWXVMKORYTIKIMAPUZPDPWDSOCZDJJTNIQPQAAHEFSRBAAZKWHXGFVLVHSXBXCTJNVXDUIYDQUGSBNEBCZNOEQLEOMEVFCTAYLULXGQFTLWVOJDJGUJNWSFEFLMUMZRMIHKSTDPXJCEPYWBJXSMIYOHZRWVCFEBDRKCV");
    msg.links = 1597261241U;

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
    msg.setTimeStamp(0.314234781097);
    msg.setSource(52754U);
    msg.setSourceEntity(157U);
    msg.setDestination(53846U);
    msg.setDestinationEntity(71U);
    msg.group_name.assign("CYLQLACDLSYIEKBFRBACCJNUAOAUEDNHPNTQRW");
    msg.links = 1985729197U;

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
    msg.setTimeStamp(0.181632651801);
    msg.setSource(38821U);
    msg.setSourceEntity(157U);
    msg.setDestination(11985U);
    msg.setDestinationEntity(199U);
    msg.group_name.assign("JQUBJPNXHEOVLAIVHRCWGORTCOKHKIWARBVKSLGTUHJDFKPGZNEPCHBJKYDXFMKDSIYBJUCAYNBGEZMMSTDQYUM");
    msg.links = 2659526625U;

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
    msg.setTimeStamp(0.865960638264);
    msg.setSource(24355U);
    msg.setSourceEntity(186U);
    msg.setDestination(8698U);
    msg.setDestinationEntity(94U);
    msg.groupname.assign("MCWZWABJZSMUADPZQVOGRSGSPRSRXYRFOOHOLEAIPLUNFNFWLKNUWZDITPQBXLDQWRMXUKMZVNHTIYVLCBDFZXBZUJQAYOTCHAMNYGMXVJYRNIGTILEHLAFLKWNHNJKIXHVAKDOKKHG");
    msg.action = 166U;
    msg.grouplist.assign("IUWOQRKMEIAUHKTIZYLGQHQPKDRCYATOHJVFZRBYUSPBPTRWUYQQMGBZBGWTOLGWZSSXBTVDEDSNHBKWJPRCNPFHMVVHESKIBHJQ");

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
    msg.setTimeStamp(0.819982952958);
    msg.setSource(53995U);
    msg.setSourceEntity(208U);
    msg.setDestination(54691U);
    msg.setDestinationEntity(172U);
    msg.groupname.assign("ODDUTZOSHJKBNNNUHHENUTAJOINJTKIPCDQRNTAAAWEYGFKCIHSLKGUMVZCYFLGUBPFDFADESYMCXWVQQGREEPQIVWYKSZIEANKDMXROJSVBQLIJXTTSVCPIGWCZLUNYURXQFIMSNXKLZRDPMWOXFVHDUXTDJYZQRZOUVAQLHTMVBRPWAFGDREBETZSJBJVTOQOGSXHKPJBLZVBEIKPYOJZARFBXIRKYMMOUPFMWFLCLGWC");
    msg.action = 246U;
    msg.grouplist.assign("WGOHDZFFQQHOWMFNERSQLBKXBGVKNBXJZBJOASCUPKELDUTNQSLGSNGJAVTRKOAHMDEUMRIVZMFDKF");

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
    msg.setTimeStamp(0.296123792544);
    msg.setSource(29586U);
    msg.setSourceEntity(212U);
    msg.setDestination(28350U);
    msg.setDestinationEntity(0U);
    msg.groupname.assign("RYYMJNIJSHORPEULUAHQABGYFTXT");
    msg.action = 86U;
    msg.grouplist.assign("GSQGIRJWKQXDCKVXFFZAFDLETBBVAWMPOCUDQFPQEEDMZVPGNIPYHCEQXJNFWHRACLVYJBKLDRYIRLLTKHTIRKZWEBEHUGNPHXBJXMNIZRDPTHGJCOHYPVPCNNUREJAUVQFAMQIHBTWTRKOCUHXI");

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
    msg.setTimeStamp(0.844498143183);
    msg.setSource(17398U);
    msg.setSourceEntity(232U);
    msg.setDestination(32943U);
    msg.setDestinationEntity(138U);
    msg.value = 0.140436917312;
    msg.sys_src = 24440U;

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
    msg.setTimeStamp(0.362581644878);
    msg.setSource(13426U);
    msg.setSourceEntity(214U);
    msg.setDestination(59969U);
    msg.setDestinationEntity(210U);
    msg.value = 0.315232630115;
    msg.sys_src = 16896U;

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
    msg.setTimeStamp(0.801336687333);
    msg.setSource(48458U);
    msg.setSourceEntity(6U);
    msg.setDestination(43688U);
    msg.setDestinationEntity(143U);
    msg.value = 0.688324213868;
    msg.sys_src = 20614U;

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
    msg.setTimeStamp(0.560929677045);
    msg.setSource(31980U);
    msg.setSourceEntity(0U);
    msg.setDestination(47159U);
    msg.setDestinationEntity(235U);
    msg.value = 0.236188069155;
    msg.units = 214U;

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
    msg.setTimeStamp(0.281633994274);
    msg.setSource(28319U);
    msg.setSourceEntity(85U);
    msg.setDestination(27466U);
    msg.setDestinationEntity(164U);
    msg.value = 0.0825093199546;
    msg.units = 162U;

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
    msg.setTimeStamp(0.476691343887);
    msg.setSource(12559U);
    msg.setSourceEntity(104U);
    msg.setDestination(27326U);
    msg.setDestinationEntity(59U);
    msg.value = 0.918177595414;
    msg.units = 131U;

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
    msg.setTimeStamp(0.559547780029);
    msg.setSource(2824U);
    msg.setSourceEntity(68U);
    msg.setDestination(47449U);
    msg.setDestinationEntity(155U);
    msg.base_lat = 0.149983766;
    msg.base_lon = 0.507947836946;
    msg.base_time = 0.861729602972;

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
    msg.setTimeStamp(0.646875945033);
    msg.setSource(2498U);
    msg.setSourceEntity(142U);
    msg.setDestination(16074U);
    msg.setDestinationEntity(84U);
    msg.base_lat = 0.861291363108;
    msg.base_lon = 0.730798057953;
    msg.base_time = 0.967508556641;

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
    msg.setTimeStamp(0.0320006669681);
    msg.setSource(63419U);
    msg.setSourceEntity(135U);
    msg.setDestination(43447U);
    msg.setDestinationEntity(98U);
    msg.base_lat = 0.71923866119;
    msg.base_lon = 0.963672468623;
    msg.base_time = 0.143553819701;

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
    msg.setTimeStamp(0.687161630695);
    msg.setSource(51264U);
    msg.setSourceEntity(15U);
    msg.setDestination(22327U);
    msg.setDestinationEntity(115U);
    msg.base_lat = 0.667153834293;
    msg.base_lon = 0.773043965844;
    msg.base_time = 0.696655196386;
    const char tmp_msg_0[] = {15, -25, 111, 50, -56, -5, -56, 120, 27, 106, 21, 96, 94, 119, -43, -125, 107, -98, 11, -125, -102, -104, 115, -71, 111, -32, -101, 65, 108, -48, 44, 86, 94, -13, -1, 121, 3, -126, 0, -122, -59, 108, -37, 63, 69, 17, 117, 111, 50, -41, -107, 36, -43, -49, 85, -107, -26, 85, -41, 82, -118, 120, 28, -64, -5, 119, -17, 106, 100, -117, -28, 89, 111, 24, 1, 34, 28, -15, -90, 81, 63, -97, -29, -10, 62, -37, 46, 25, -117, -99, -11, -99, -3, 54, 53, 77, 55, -96, -45, 111, -97, -62, -74, 36, -9, -106, 74, 47, 53, -111, -29, 52, 109, -97, -59, -86, -36, 54, -57, -12, 34, -12, -38, -7, 42, -6, -61, -95, -11, 59, 79, 83, -89, 77, 52, 124, -26, -103, -113, 73, 23, -79, 117, -92, -32, 74, -65, 105, 51, 63, -69, 17, -21, 78, 64, -85, -109, 125, 63, -64, -36, -53, 44, 64, 104, -27, -15, 76, 115, 109, -82, -116, 28, -120, 112, -88, 77, -70, 56, -78, 81, 124, 4, -96, 110, 74, 78, -60, -78, -113, 76, -100, -70, 77, -47, -105, -26, 107, 70, 29, 17, -113, -94, 8, 81, -35, -52, 109, 49, -9, -6, 56, -43, 65, -21, 43, 117, -107, 7, 89, 109, -101, -69, 124, -1, -20, 30};
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
    msg.setTimeStamp(0.386507202927);
    msg.setSource(64294U);
    msg.setSourceEntity(200U);
    msg.setDestination(57163U);
    msg.setDestinationEntity(71U);
    msg.base_lat = 0.490650797773;
    msg.base_lon = 0.985498311193;
    msg.base_time = 0.918768235907;
    const char tmp_msg_0[] = {31, -112, -1, 20, 61, 62, -13, -17, -14, -34, 52, 123, 115, 11, -49, 74, 62, -17};
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
    msg.setTimeStamp(0.530319400466);
    msg.setSource(41758U);
    msg.setSourceEntity(71U);
    msg.setDestination(5075U);
    msg.setDestinationEntity(247U);
    msg.base_lat = 0.947718231281;
    msg.base_lon = 0.777150039448;
    msg.base_time = 0.231976171393;
    const char tmp_msg_0[] = {-30, 91, 122, 52, -64, 124, -46, -106, 74, 90, 89, 121, -105, -95, 73, -101, -37, 25, -58, 7, -107, -17, 108, -35, -101, -45, -59, -24, -96, 97, -60, 89, -41, -64, 102, 60, -54, 50, 27, -100, 77, -18, -40, -85, 36, 117, 61, -21, 42, -19, 79, -4, 119, -99, -8, -58, -99, -27, -89, -82, 43, -45, 88, 56, -72, -50, 122, -123, -55, -38, -93, 16, 8, 12, -55, 115, -16, 126, 21, 65, 73, -35, -105, -85, -93, 33, 50, -61, 7, 116, -63, -81, -120, -111, 58, 39, 59, -62, -113, 19, 120, -119, -83, 8, 86, -109, -63, -15, 48, 30, -77, 126, -123, -58, 55, 54, 92, 85, 20, -120, 65, 30, -13, -107, 60, -94, -1, -59, 78, -56, 111, 109, -40, 111, 97, -128, -72, -122, -6, -12, 92, 55, 121, -127, 112, 62, -48, -113, 5, 75, -86, -77, -2, -25, -11, -66, 104};
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
    msg.setTimeStamp(0.512303213144);
    msg.setSource(14394U);
    msg.setSourceEntity(130U);
    msg.setDestination(48896U);
    msg.setDestinationEntity(205U);
    msg.sys_id = 1714U;
    msg.priority = 6;
    msg.x = -22321;
    msg.y = 27508;
    msg.z = 32747;
    msg.t = -22816;
    IMC::DesiredVelocity tmp_msg_0;
    tmp_msg_0.u = 0.268262217378;
    tmp_msg_0.v = 0.741499466777;
    tmp_msg_0.w = 0.437721932703;
    tmp_msg_0.p = 0.215266471941;
    tmp_msg_0.q = 0.768829148597;
    tmp_msg_0.r = 0.0306907280323;
    tmp_msg_0.flags = 174U;
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
    msg.setTimeStamp(0.230396458114);
    msg.setSource(52601U);
    msg.setSourceEntity(11U);
    msg.setDestination(21503U);
    msg.setDestinationEntity(252U);
    msg.sys_id = 28911U;
    msg.priority = 83;
    msg.x = 29168;
    msg.y = 27261;
    msg.z = -5349;
    msg.t = 9051;
    IMC::Land tmp_msg_0;
    tmp_msg_0.lat = 0.35756146202;
    tmp_msg_0.lon = 0.576593924401;
    tmp_msg_0.z = 0.174136064922;
    tmp_msg_0.z_units = 56U;
    tmp_msg_0.speed = 0.994969555305;
    tmp_msg_0.speed_units = 28U;
    tmp_msg_0.abort_z = 0.102256129065;
    tmp_msg_0.bearing = 0.393704142891;
    tmp_msg_0.glide_slope = 180U;
    tmp_msg_0.glide_slope_alt = 0.478710919916;
    tmp_msg_0.custom.assign("IECYKUKNXMBUESSVFVHWWHGUEGGRNLNWGTEDKVULMCVQQXPXACVXUYQTOMORHZZURTSYLOVSOHWYFKZJKKTDKHMZMZORNBBUDANJWPXEQHBNJNLTLSCDDJFXPPPMRXSQTJEGVGAIYTZAXQIIIBZIAYSIWCADWMLYLVIPEPYPVZKIFRACCELKVXGODQGJNEQFMCDQUYFBAONSBFFPTJMRHZSKMOFZGWUHAERXULONWCIFHBTPHJJLTQG");
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
    msg.setTimeStamp(0.815599564297);
    msg.setSource(8395U);
    msg.setSourceEntity(159U);
    msg.setDestination(56379U);
    msg.setDestinationEntity(32U);
    msg.sys_id = 58938U;
    msg.priority = 104;
    msg.x = 29726;
    msg.y = 4848;
    msg.z = -5941;
    msg.t = -13910;
    IMC::YoYo tmp_msg_0;
    tmp_msg_0.timeout = 26738U;
    tmp_msg_0.lat = 0.915409328627;
    tmp_msg_0.lon = 0.703289303792;
    tmp_msg_0.z = 0.259344069485;
    tmp_msg_0.z_units = 144U;
    tmp_msg_0.amplitude = 0.0428881076184;
    tmp_msg_0.pitch = 0.389924224421;
    tmp_msg_0.speed = 0.380169815626;
    tmp_msg_0.speed_units = 217U;
    tmp_msg_0.custom.assign("BZLPINHTEDLBVKMZTSKREQVFMCWKHCEBAOJGGBFBMNUYQYEXQYYPVVSXLOTMPUIAUVXMMZXXUBBAQWOJLKQLYJAWHKGJWGIPNVWLFDISDOUCOWCFNEGHDSHCNXPFUYWRSITUISXHCGIUKKCWZNGDROGJQQBPQEKNCL");
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
    msg.setTimeStamp(0.107295230366);
    msg.setSource(10612U);
    msg.setSourceEntity(106U);
    msg.setDestination(24306U);
    msg.setDestinationEntity(241U);
    msg.req_id = 8427U;
    msg.type = 105U;
    msg.max_size = 64679U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.259881451027;
    tmp_msg_0.base_lon = 0.611070446112;
    tmp_msg_0.base_time = 0.277137705515;
    IMC::HistoricSample tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.sys_id = 47373U;
    tmp_tmp_msg_0_0.priority = 97;
    tmp_tmp_msg_0_0.x = 16461;
    tmp_tmp_msg_0_0.y = -2802;
    tmp_tmp_msg_0_0.z = -2652;
    tmp_tmp_msg_0_0.t = 9730;
    IMC::VerticalProfile tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.parameter = 36U;
    tmp_tmp_tmp_msg_0_0_0.numsamples = 24U;
    IMC::ProfileSample tmp_tmp_tmp_tmp_msg_0_0_0_0;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.depth = 11321U;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.avg = 0.037062585748;
    tmp_tmp_tmp_msg_0_0_0.samples.push_back(tmp_tmp_tmp_tmp_msg_0_0_0_0);
    tmp_tmp_tmp_msg_0_0_0.lat = 0.652770020811;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.542145887806;
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
    msg.setTimeStamp(0.39209248028);
    msg.setSource(9490U);
    msg.setSourceEntity(27U);
    msg.setDestination(23435U);
    msg.setDestinationEntity(218U);
    msg.req_id = 40775U;
    msg.type = 197U;
    msg.max_size = 2605U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.530408636316;
    tmp_msg_0.base_lon = 0.675567369967;
    tmp_msg_0.base_time = 0.991250731461;
    IMC::HistoricSample tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.sys_id = 59512U;
    tmp_tmp_msg_0_0.priority = -21;
    tmp_tmp_msg_0_0.x = -26899;
    tmp_tmp_msg_0_0.y = 16251;
    tmp_tmp_msg_0_0.z = -32748;
    tmp_tmp_msg_0_0.t = -2242;
    IMC::RhodamineDye tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.value = 0.0190496425418;
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
    msg.setTimeStamp(0.579618657023);
    msg.setSource(135U);
    msg.setSourceEntity(180U);
    msg.setDestination(42938U);
    msg.setDestinationEntity(165U);
    msg.req_id = 44448U;
    msg.type = 112U;
    msg.max_size = 40089U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.627024843035;
    tmp_msg_0.base_lon = 0.230646927588;
    tmp_msg_0.base_time = 0.957386889709;
    IMC::RemoteCommand tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.original_source = 6439U;
    tmp_tmp_msg_0_0.destination = 22647U;
    tmp_tmp_msg_0_0.timeout = 0.27349445122;
    IMC::LblConfig tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.op = 176U;
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
    msg.setTimeStamp(0.700014043984);
    msg.setSource(35369U);
    msg.setSourceEntity(34U);
    msg.setDestination(59497U);
    msg.setDestinationEntity(213U);
    msg.original_source = 40642U;
    msg.destination = 54412U;
    msg.timeout = 0.883140644741;
    IMC::CacheControl tmp_msg_0;
    tmp_msg_0.op = 146U;
    tmp_msg_0.snapshot.assign("ATEYDGUMNHCHXSFNQCCABPDQLWAUEUJJHNSKDQRBEHAIWZCPZVMMEPGYMVHEGVEKJONMGHNXZBXFYIUUWDNOMSUGALYTJVBWDCTYGCLUBHZQPITHXFXGCIYKLRMAWK");
    IMC::SoiPlan tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.plan_id = 12769U;
    tmp_msg_0.message.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.156374713664);
    msg.setSource(65295U);
    msg.setSourceEntity(145U);
    msg.setDestination(9469U);
    msg.setDestinationEntity(61U);
    msg.original_source = 30214U;
    msg.destination = 58005U;
    msg.timeout = 0.460807873998;
    IMC::AcousticSystemsQuery tmp_msg_0;
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
    msg.setTimeStamp(0.529800113368);
    msg.setSource(31504U);
    msg.setSourceEntity(38U);
    msg.setDestination(2859U);
    msg.setDestinationEntity(16U);
    msg.original_source = 42748U;
    msg.destination = 35288U;
    msg.timeout = 0.109937949081;
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("SSEAWZEXDOBZKMTTIJPLLCCDWMJTRHMQNXERVJEHYWNAPORVHPBAGHZNCVJMZRETXQOPQBRFVIJDPHQKHZUMFGOWXLBCIUWXAFDURQSIOSNVDCLGIJIRSDDKXQTYPDXQWWNMWA");
    tmp_msg_0.value.assign("ZSVVWZJHTDTVAPDXIUHTLXBQAATJMGHAMIHUZNYOWMOKAQRGZKVOSXXNPWRAUXHFGYBOFLQCQJLEQYNMCFEURVKDEWGOIQWJDJWLXNIKPQBHAEFUZHOCKLGRDYRAOCXWMSPDDLSXYIUXNDECRZJZGKLSUTHIGVPBMTZRMFHBREFJWDBSATTSJUKYFIQSYOEQWCOBPCBKLSMPRMFYNCYELWUGQNVTSEDMPJIFEVNI");
    tmp_msg_0.type = 133U;
    tmp_msg_0.access = 181U;
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
    msg.setTimeStamp(0.709010585601);
    msg.setSource(35073U);
    msg.setSourceEntity(243U);
    msg.setDestination(12307U);
    msg.setDestinationEntity(8U);
    msg.type = 252U;
    msg.comm_interface = 63977U;
    msg.model = 39450U;
    msg.list.assign("FHUMJDJISIMWGYTQYATH");

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
    msg.setTimeStamp(0.795404495817);
    msg.setSource(42937U);
    msg.setSourceEntity(199U);
    msg.setDestination(53820U);
    msg.setDestinationEntity(12U);
    msg.type = 225U;
    msg.comm_interface = 58225U;
    msg.model = 23577U;
    msg.list.assign("XTRITLGTRTEGTPHIGRCYDFERGKBALLDSQEZYNWXBYADPNTTCMIETIJHWGFXJEOOATJKPGKJYAUBYFIYMSIYWXWCPELPNVMBJZUUALFLQZRCRVXKWQMUHPMOUDLDQKMBMNXOXUBCLSIHPPIVPQMRSOVKDEKKCYNZAEZUZDFSZVWJSDSNTFHVGXLPQDEEWBJIKLAQUNGHWMJUQGWYONHWVQFARQIXHVVRNHFRZYCAJDBSGBCOSOXBUHOCNZS");

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
    msg.setTimeStamp(0.0629881677299);
    msg.setSource(28403U);
    msg.setSourceEntity(240U);
    msg.setDestination(35910U);
    msg.setDestinationEntity(221U);
    msg.type = 105U;
    msg.comm_interface = 10744U;
    msg.model = 21542U;
    msg.list.assign("MHPBEBUEQIDMYJLBSXYQNIMNELKQCCIAZQWETWNZJAOTCM");

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
    msg.setTimeStamp(0.504130384689);
    msg.setSource(33536U);
    msg.setSourceEntity(166U);
    msg.setDestination(39286U);
    msg.setDestinationEntity(230U);
    msg.type = 203U;
    msg.req_id = 2965455645U;
    msg.ttl = 19534U;
    msg.code = 13U;
    msg.destination.assign("WQLWZFDCMFBCIHGYHZAOKIIKOYQTFCPEONMPGDXDCEZSHFBFJQTUTZRRENOGIYUFHYDBBHJTXLKNAVYXSRHIODPXHMZMBMXMQFGERURWXXHQLHWPLOTJGRVZWUJJSJEACXSTVUKBFJRPKK");
    msg.source.assign("CBNUZNDMMVAZCEAMKBITQDYXJBHGIDEPZYRTXCTQHOVSJZPRVWHJQZBYGNOXKVHZNRWXWJIBGYLWCJELYRLLVUXCBKQWIFQFOLCJUTLKYUSTGEMXYFEFXFLEUCMWICOACYSLEFKOCSHAOVDXSBKGSHSUPSPDWEMDNTNUPHZOVZQVYMUHJZBKYWPXOAJGABQKFRJWEKPNFEGSTXNFDZSGMQF");
    msg.acknowledge = 131U;
    msg.status = 218U;
    const char tmp_msg_0[] = {126, 33, 52, -63, -77, 62, -78, -68, 62, 50, 4, -84, 95, 123, -6, -63, 63, 37, 51, -103, 4, 101, 57, 68, -113, 101, -5, -71, 72, -19, 95, -95, 20, 100, 122, 71, 108, 27, -49, 54, 35, 100, 116, -11, -75, 90, -100, -7, 117, -102, -108, 80, 51, -8, -63, -115, -125, -102, -76, -121, -103, 99, -122, -63, -104, -7, -62, -98, -19, 60, -66, 50, 91, 65, 84, -10, 85, -22, 36, 8, 51, 3, 39, 57, -73, 80, 99, -63, 58, 21, -33, -19, 72, -72, -36, 105, 95, -29, 106, 90, -35, -82, 28, -76, -36, 121, -101, -11, 63, -58, 75, 60, -27, 28, -89, -17, 100, 105, -11, -110, -120, 71, 57, 71, 120, -74, -22, 120, 14, 3, 124, 116, -44, 3, 110, -76, -30, 82, 27, 1, 50, -72, 122, 58, 20, 38, -113, -72, -49, 79, -98, -119, 96, -127, 99, -89, -37, -80, -1, -75, 94, -32, 95, 119, 76, -82, -102, -86, -75, -50, -103, 79, -11, -75, 16, 28, 8, 71, -98, -40, -70, -60, 2, -4, -119, 88, -103, 109, 121, 86, 54, 83, -23, -127, 125, -48, -39, 108, -116, -88, -105, -127, -36, 46, -99, -59, 83, -72, -93, -108, 14, -45, -74, 84, 8, 44, -95, 48, -84, -70, 64, -128, 27, 113, 5, 91, 121, -36, 118, -119, 28, -2, 70, -127, -37, -96, -14, -107, -109, 23};
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
    msg.setTimeStamp(0.155880778863);
    msg.setSource(10485U);
    msg.setSourceEntity(10U);
    msg.setDestination(48660U);
    msg.setDestinationEntity(229U);
    msg.type = 68U;
    msg.req_id = 3940109406U;
    msg.ttl = 39217U;
    msg.code = 48U;
    msg.destination.assign("ZDKNPOVFYGHIUKMBYBYXR");
    msg.source.assign("OGFZBLUNOOSJECQYSAPTHKTAKVTYQSLMAVXUTKPKTQZVXRONFWIXRMVCYGMCOEPGICJQBUCRPZSIPHLXFTFETJZYORLNHNLHFDLDJWXZBUBNVOGTYEMWQKBBGJCEFLIOGGKBOHQNXJSPRUDFUYCHIIDMSMKCQTZVWRAXSBATKNDDSJJYWLOGVXIVAHDZIERNYMBWGUEHXIFUKZUWHMWAPQEAPYDWHZCRPUWYBZCMQSMRNDGFEVXFELVALJKQIR");
    msg.acknowledge = 40U;
    msg.status = 159U;
    const char tmp_msg_0[] = {27, 66, 50, 8, 124, 10, 16, -94, -4, -60, 77, 7, 55, -49, -14, -28, 81, 67, 14};
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
    msg.setTimeStamp(0.95099160601);
    msg.setSource(32294U);
    msg.setSourceEntity(233U);
    msg.setDestination(24162U);
    msg.setDestinationEntity(132U);
    msg.type = 246U;
    msg.req_id = 1649190752U;
    msg.ttl = 47679U;
    msg.code = 120U;
    msg.destination.assign("KYEPSBMASDGAROXRVWDKSHNBNEPKPDIPZXFXYGHGJXEIZVKIOMNKKHX");
    msg.source.assign("VFMOFKUABZLAJDGZILGCWHAEKKGAZASSCYVYBPEAOUNWRCPNGHPPWPFXICNTVZKCENMDRZGTOARHLESVJQTTHJXDMPXQNEJFUILYGLKWIDBWYHVEYMEWMZOFQZLJJCFSVZOWMIUEZMHHNCUJHULMLBISLFEKSBKTQBWJYNXSRRKTFNWQQRUFSPAADLYCUYVTQDPSBMVNYJTUAORSJFXQITQ");
    msg.acknowledge = 41U;
    msg.status = 176U;
    const char tmp_msg_0[] = {69, 106, -29, -38, -42, -14, 58, -61, -67, 71, 36, 19, 115, 84, 73, 113, -79, -76, -92, 24, 34, -120, 99, 108, 63, 92, 16, 21, 53, -96, -22, -117, -127, -35, -4, 57, 38, -68, 117, 1, 125, 25, 24, 20, 29, -103, 12, 70, 7, 118, -113, 119, -47, -109, -115, 115, 39, 107, 125, -77, -94, 12, 126, -110, 97, 33, -27, 104, 58, -111, -10, 12, 124, -15, 14, 49, 56, -25, -89, 124, -115, -1, -24, -124, -50, 91, -56, -67, 39, -43, -16, 106, -119, -127, -6, 98, 56, 113, -101, 11, -31, 9, 119, 80, -113, -30, 20, 79, 6, -61, 2, -17, -95, -77, -58, -49, -32, -48, -97, 78, -93, 49, 32, -72, 33, -98, 11, -83, 53, -13, 40, -3, 62, -3, 23, -76, -84, 107};
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
    msg.setTimeStamp(0.0561113662671);
    msg.setSource(25182U);
    msg.setSourceEntity(121U);
    msg.setDestination(49001U);
    msg.setDestinationEntity(81U);
    msg.id = 237U;
    msg.range = 0.0370772839792;

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
    msg.setTimeStamp(0.433193650276);
    msg.setSource(15595U);
    msg.setSourceEntity(28U);
    msg.setDestination(14647U);
    msg.setDestinationEntity(142U);
    msg.id = 29U;
    msg.range = 0.499282139455;

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
    msg.setTimeStamp(0.456019945469);
    msg.setSource(63820U);
    msg.setSourceEntity(145U);
    msg.setDestination(63874U);
    msg.setDestinationEntity(202U);
    msg.id = 26U;
    msg.range = 0.00323082186192;

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
    msg.setTimeStamp(0.705672615456);
    msg.setSource(13709U);
    msg.setSourceEntity(207U);
    msg.setDestination(27136U);
    msg.setDestinationEntity(53U);
    msg.beacon.assign("OENADZHVLIIIDUNLZNQHBHSMCURXJLHZWRTBSJHKAJGABQLVVVJHGCYYXZJOIZMXQQALKNGPFSHYRLCTODPWWDQAMSMXZBPOXFMOKPYEQFHGEGNTETFFDOUTUXUUBPTZLKEHRIIWNWOJRDUUCDWIAADCQSKCGGDMSCBKAEJJIEOYTPHWAOCVWNRQVCSLYGTYBZFFZFKUYBLTRPVRVBIMINWUXPREDNBFXEYVPNVEFPTXLAGSSMSMQKKRXQOJYZ");
    msg.lat = 0.660574263985;
    msg.lon = 0.571330235186;
    msg.depth = 0.605099648501;
    msg.query_channel = 227U;
    msg.reply_channel = 143U;
    msg.transponder_delay = 115U;

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
    msg.setTimeStamp(0.890282371701);
    msg.setSource(51147U);
    msg.setSourceEntity(220U);
    msg.setDestination(44243U);
    msg.setDestinationEntity(149U);
    msg.beacon.assign("QDIDCVKNPNCXGGQEVBDXZIIEVBUDZGPKMFZSKGBZFOFHQDVKLISDMMXAYHJBMJKAVQOWFSZMFMELDQSZOYUMTCYQUGPESFWTYNAUXSUTMWSZHOLUNEIXIHRCVPACGNBMYHGONQYYZ");
    msg.lat = 0.855964410905;
    msg.lon = 0.739419563268;
    msg.depth = 0.31167727566;
    msg.query_channel = 110U;
    msg.reply_channel = 250U;
    msg.transponder_delay = 83U;

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
    msg.setTimeStamp(0.851613059154);
    msg.setSource(47228U);
    msg.setSourceEntity(167U);
    msg.setDestination(37299U);
    msg.setDestinationEntity(236U);
    msg.beacon.assign("GJXHFTICKDLZTQZASKBOIIHKVQQEZNKVOWSWPECDQNLFHBLUJTYHGN");
    msg.lat = 0.463474500716;
    msg.lon = 0.292345395857;
    msg.depth = 0.386608621855;
    msg.query_channel = 107U;
    msg.reply_channel = 3U;
    msg.transponder_delay = 221U;

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
    msg.setTimeStamp(0.973923839834);
    msg.setSource(61358U);
    msg.setSourceEntity(148U);
    msg.setDestination(502U);
    msg.setDestinationEntity(162U);
    msg.op = 158U;

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
    msg.setTimeStamp(0.500223746336);
    msg.setSource(63943U);
    msg.setSourceEntity(85U);
    msg.setDestination(50830U);
    msg.setDestinationEntity(133U);
    msg.op = 77U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("PZQEYIEETKQRFUBKXRWSZBPULBGFKCLGNEWVNNGPCNJIUDQGMOJNVQTOCLREBMZAXVWNFYIFTJSOXEFEUBOHIRPYYNTXDGCFZKASGMKWAGWXFJXUDPTPDDWMVHTGBIXCJTOHOULUCKRJSHHUERFARAQKIQYHVIVYIWYEZOVLRPLJJOFKQMYSMTZAVNPQZHKHMATDSWGYXBNECSQWPIDDLOGRKJLRBNUQUYSLAVAZJICZWBMPSOVCM");
    tmp_msg_0.lat = 0.730681072418;
    tmp_msg_0.lon = 0.894547998668;
    tmp_msg_0.depth = 0.0801138171292;
    tmp_msg_0.query_channel = 142U;
    tmp_msg_0.reply_channel = 40U;
    tmp_msg_0.transponder_delay = 111U;
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
    msg.setTimeStamp(0.349034480512);
    msg.setSource(54474U);
    msg.setSourceEntity(154U);
    msg.setDestination(9218U);
    msg.setDestinationEntity(149U);
    msg.op = 19U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("ZPLNKBWRQPKDWQSQMOAFSIEEHKFINUETZPVLQMZFYIUZNACSALHYS");
    tmp_msg_0.lat = 0.413926718457;
    tmp_msg_0.lon = 0.950336365527;
    tmp_msg_0.depth = 0.44726564006;
    tmp_msg_0.query_channel = 147U;
    tmp_msg_0.reply_channel = 54U;
    tmp_msg_0.transponder_delay = 253U;
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
    msg.setTimeStamp(0.81303979129);
    msg.setSource(6203U);
    msg.setSourceEntity(119U);
    msg.setDestination(26222U);
    msg.setDestinationEntity(89U);
    IMC::ExternalNavData tmp_msg_0;
    IMC::EstimatedState tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.809312040214;
    tmp_tmp_msg_0_0.lon = 0.330648748891;
    tmp_tmp_msg_0_0.height = 0.984273073831;
    tmp_tmp_msg_0_0.x = 0.979584513339;
    tmp_tmp_msg_0_0.y = 0.858082825628;
    tmp_tmp_msg_0_0.z = 0.293343121368;
    tmp_tmp_msg_0_0.phi = 0.792955265736;
    tmp_tmp_msg_0_0.theta = 0.680575382085;
    tmp_tmp_msg_0_0.psi = 0.0159003594964;
    tmp_tmp_msg_0_0.u = 0.172188970003;
    tmp_tmp_msg_0_0.v = 0.553395718799;
    tmp_tmp_msg_0_0.w = 0.0710210519639;
    tmp_tmp_msg_0_0.vx = 0.99506997243;
    tmp_tmp_msg_0_0.vy = 0.563249790581;
    tmp_tmp_msg_0_0.vz = 0.188444721989;
    tmp_tmp_msg_0_0.p = 0.244918680167;
    tmp_tmp_msg_0_0.q = 0.050911336786;
    tmp_tmp_msg_0_0.r = 0.568499531841;
    tmp_tmp_msg_0_0.depth = 0.627771443873;
    tmp_tmp_msg_0_0.alt = 0.104565583367;
    tmp_msg_0.state.set(tmp_tmp_msg_0_0);
    tmp_msg_0.type = 184U;
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
    msg.setTimeStamp(0.583813637941);
    msg.setSource(55467U);
    msg.setSourceEntity(123U);
    msg.setDestination(13226U);
    msg.setDestinationEntity(195U);
    IMC::DesiredPitch tmp_msg_0;
    tmp_msg_0.value = 0.378132027383;
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
    msg.setTimeStamp(0.937026489425);
    msg.setSource(25837U);
    msg.setSourceEntity(166U);
    msg.setDestination(42743U);
    msg.setDestinationEntity(178U);
    IMC::Magnetometer tmp_msg_0;
    tmp_msg_0.timeout = 57946U;
    tmp_msg_0.lat = 0.462706344575;
    tmp_msg_0.lon = 0.237196252813;
    tmp_msg_0.z = 0.221018342797;
    tmp_msg_0.z_units = 202U;
    tmp_msg_0.speed = 0.199420307493;
    tmp_msg_0.speed_units = 39U;
    tmp_msg_0.bearing = 0.877699694466;
    tmp_msg_0.width = 0.267110753119;
    tmp_msg_0.direction = 158U;
    tmp_msg_0.custom.assign("GCTGQJZZJMJNCZSHPKYUSLBFBPVLJFFRXXKHVDGAEXGIBQHEXBPMAPUZIFPTFYLRIGEKGWUHDKWQZSSVAITPOOXAYDBMOUONTQWCNHVEVPEDZLYRKYJQCRZDHRJIMKKSWWBSCVRRGBXWJCLHTNGIFKOTLAIYUXARYSCUPDMLFBCQTNBUULJZWNUTAVLJPYXXOFAIEYHEQWLCHOCVGWIOVZNFJNVXTAGDH");
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
    msg.setTimeStamp(0.864721941972);
    msg.setSource(20971U);
    msg.setSourceEntity(84U);
    msg.setDestination(35062U);
    msg.setDestinationEntity(249U);
    msg.op = 114U;
    msg.system.assign("SWCNFLKLHKQQGWNIXVBMYUPIZECSNBQUUAHYRZDOWGYITHWIXLEBJDIXODYRBRDKWSZXPOPTUKKCHTXLDREPETLOETXVZXBIISTSAKFLMHCORMMANCOTMZJJIGACHYLZXASPWJPSYUQYOMCZYGJNGTKUZNMSPQPBVJLICNFXWLBBJKNDFPVWSPFF");
    msg.range = 0.23498862832;
    IMC::SmsState tmp_msg_0;
    tmp_msg_0.seq = 4160356406U;
    tmp_msg_0.state = 96U;
    tmp_msg_0.error.assign("SQRYHICGELTPZVCIPVAXCNQUEKASMETXGTYXURDJGMXQBTTOGXKDFHUZGMOKBFCLJPORDVAQJIMSRBOUYYDHZHBULOFBZVMQIFNYFDVWPRLAOHGFYNHSRMTDGLRJBXFECSTKGHHUWWJPQXTGLYGMWVPPUKQSTAVIVLOOEXEHNZFZDACMVNSNEEBAJWIWQANPFIZDSKLANILYUIBKSVJRPUNKZBYZJWWYPFQXRBDWLZJKCECAWMUKJCHXSCORT");
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
    msg.setTimeStamp(0.21157575098);
    msg.setSource(8679U);
    msg.setSourceEntity(149U);
    msg.setDestination(32650U);
    msg.setDestinationEntity(204U);
    msg.op = 94U;
    msg.system.assign("JPHAAWDEMEGBOKKBW");
    msg.range = 0.89332272915;
    IMC::FormCtrlParam tmp_msg_0;
    tmp_msg_0.action = 211U;
    tmp_msg_0.longain = 0.706669309647;
    tmp_msg_0.latgain = 0.423320537405;
    tmp_msg_0.bondthick = 2590894770U;
    tmp_msg_0.leadgain = 0.500329965808;
    tmp_msg_0.deconflgain = 0.261258654243;
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
    msg.setTimeStamp(0.411016164378);
    msg.setSource(48799U);
    msg.setSourceEntity(138U);
    msg.setDestination(27927U);
    msg.setDestinationEntity(215U);
    msg.op = 138U;
    msg.system.assign("DHUHPGFPAJVIDCRMRAVCJQHIPKQMEVSPFDYTHWDNHAHXMHRCMYDWTGZEQNJMOSPGJYMLBEHLZKFEECAFQNEUTDORACEVQSPGQQKZZNSGLNGCGRBRFOUIXFBRFTQU");
    msg.range = 0.403447355722;
    IMC::TextMessage tmp_msg_0;
    tmp_msg_0.origin.assign("IKKPSGUADUDYCNFGESERDRXDEVWQSVHHYGREFBAFJSKHVQIHUSSMRTJZOCNELTTDQTPCHXFTNLDJEWQAIGKWUPZJTVLGVHKLDTTZNOMOBNABAYCXBOKNIHXSBOLIBCGNBWVBDEUMREISCEQUXLJ");
    tmp_msg_0.text.assign("WTCRMHKUOMACRAQBSVWMXJAQRMPSQJASIENPJXCBNPCTQDYUP");
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
    msg.setTimeStamp(0.968323848137);
    msg.setSource(13382U);
    msg.setSourceEntity(22U);
    msg.setDestination(22277U);
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
    msg.setTimeStamp(0.48067397607);
    msg.setSource(24649U);
    msg.setSourceEntity(46U);
    msg.setDestination(14407U);
    msg.setDestinationEntity(212U);

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
    msg.setTimeStamp(0.202405599596);
    msg.setSource(22198U);
    msg.setSourceEntity(93U);
    msg.setDestination(39465U);
    msg.setDestinationEntity(79U);

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
    msg.setTimeStamp(0.787731819259);
    msg.setSource(31214U);
    msg.setSourceEntity(23U);
    msg.setDestination(47855U);
    msg.setDestinationEntity(197U);
    msg.list.assign("WSGAKSIFQILTUSKIGHSZFTKGZKLGUAMARCY");

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
    msg.setTimeStamp(0.171033666489);
    msg.setSource(52337U);
    msg.setSourceEntity(101U);
    msg.setDestination(49022U);
    msg.setDestinationEntity(182U);
    msg.list.assign("KIVZMAXDSYNCEDVNQGQZLPJTKZSTRYKYFFFUQTMMTAAHLZMZXLUGCTCBOOXVZWCAPIGGFPDSKR");

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
    msg.setTimeStamp(0.089528672751);
    msg.setSource(4873U);
    msg.setSourceEntity(73U);
    msg.setDestination(3989U);
    msg.setDestinationEntity(75U);
    msg.list.assign("HBBQMKXDIPILYEBURNPZONAUMTQRKABANXAJFUJMWPVNGEJHDPOHDUSDFDUKUOSYCNTLFQDGIIMCQMTBTHPOCLQUZHZTGIFESGYEWOSCIVKMAYBYQAWZFUXLEQMFHXRZMCCKCNXGXXDPYRPCWVTOBUHJDRDSKXEPYEUVJOJGJFJGTVNFGOLVVCNOTDSRVHKEWJKRSTZYIIZPNBCOKLQFGBEQYSIMVZBWPVAWILATJXRNRKXYLMSEZALWR");

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
    msg.setTimeStamp(0.587513500695);
    msg.setSource(29308U);
    msg.setSourceEntity(37U);
    msg.setDestination(3019U);
    msg.setDestinationEntity(213U);
    msg.peer.assign("YWIKYMKMVBUONXDIGATJNQJZZVWFVPGHFFKCBUVRLHBKHFCFSWTKECOYAGOUULUNOUXHCXTJHDAKCXOFZXEHXIZDVGPMQDVLMMFXWQIGSOAEQVWWRYZCRIWQCQFAAYIEEPDZVBQRELAUTGTLPUIWSNOZTBZAICXEQSYHGKBODDJFBIASJLN");
    msg.rssi = 0.790651353132;
    msg.integrity = 42173U;

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
    msg.setTimeStamp(0.00248912830912);
    msg.setSource(43064U);
    msg.setSourceEntity(66U);
    msg.setDestination(34989U);
    msg.setDestinationEntity(121U);
    msg.peer.assign("TRVJLDGHHNZUZSXKZUONPWKCXKQHZFZWFDUDDYNXHBFEGMBRSNHSBUCSUTVSCUGUPLDGLOOYJXSWFQSRETXKXJRAZOYEFPMTFTCJHHQMWIUVRELTLXIQSYDVELTDWOMBIDFBVMEQKZRTXAXQ");
    msg.rssi = 0.0836293755679;
    msg.integrity = 34317U;

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
    msg.setTimeStamp(0.342757150159);
    msg.setSource(23057U);
    msg.setSourceEntity(9U);
    msg.setDestination(53096U);
    msg.setDestinationEntity(42U);
    msg.peer.assign("WWBHQPQXQRYTFFFUWGCZKAXCJAJQRDNYUPURTQMTCZBDW");
    msg.rssi = 0.966255397333;
    msg.integrity = 36674U;

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
    msg.setTimeStamp(0.61072289301);
    msg.setSource(15425U);
    msg.setSourceEntity(119U);
    msg.setDestination(45670U);
    msg.setDestinationEntity(14U);
    msg.value = 27294;

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
    msg.setTimeStamp(0.26849826593);
    msg.setSource(34198U);
    msg.setSourceEntity(63U);
    msg.setDestination(2639U);
    msg.setDestinationEntity(81U);
    msg.value = 28860;

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
    msg.setTimeStamp(0.99416189342);
    msg.setSource(57838U);
    msg.setSourceEntity(112U);
    msg.setDestination(35194U);
    msg.setDestinationEntity(153U);
    msg.value = -22488;

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
    msg.setTimeStamp(0.68874974676);
    msg.setSource(29638U);
    msg.setSourceEntity(192U);
    msg.setDestination(5163U);
    msg.setDestinationEntity(101U);
    msg.value = 0.610981395875;

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
    msg.setTimeStamp(0.819597104176);
    msg.setSource(22589U);
    msg.setSourceEntity(168U);
    msg.setDestination(27415U);
    msg.setDestinationEntity(211U);
    msg.value = 0.559494398933;

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
    msg.setTimeStamp(0.12280851333);
    msg.setSource(9569U);
    msg.setSourceEntity(76U);
    msg.setDestination(35146U);
    msg.setDestinationEntity(27U);
    msg.value = 0.929388973006;

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
    msg.setTimeStamp(0.690310561687);
    msg.setSource(10765U);
    msg.setSourceEntity(63U);
    msg.setDestination(46954U);
    msg.setDestinationEntity(67U);
    msg.value = 0.104569525755;

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
    msg.setTimeStamp(0.796495703634);
    msg.setSource(6427U);
    msg.setSourceEntity(27U);
    msg.setDestination(1198U);
    msg.setDestinationEntity(105U);
    msg.value = 0.43591570152;

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
    msg.setTimeStamp(0.785335823215);
    msg.setSource(27206U);
    msg.setSourceEntity(37U);
    msg.setDestination(3372U);
    msg.setDestinationEntity(58U);
    msg.value = 0.925442140901;

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
    msg.setTimeStamp(0.863969663732);
    msg.setSource(16791U);
    msg.setSourceEntity(142U);
    msg.setDestination(36565U);
    msg.setDestinationEntity(153U);
    msg.validity = 44523U;
    msg.type = 183U;
    msg.utc_year = 44475U;
    msg.utc_month = 99U;
    msg.utc_day = 149U;
    msg.utc_time = 0.635864236392;
    msg.lat = 0.918451148969;
    msg.lon = 0.118699717689;
    msg.height = 0.0213503823037;
    msg.satellites = 198U;
    msg.cog = 0.519215904084;
    msg.sog = 0.631842211424;
    msg.hdop = 0.135223659695;
    msg.vdop = 0.711364260098;
    msg.hacc = 0.31643236281;
    msg.vacc = 0.434736365968;

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
    msg.setTimeStamp(0.353278373731);
    msg.setSource(45611U);
    msg.setSourceEntity(194U);
    msg.setDestination(2430U);
    msg.setDestinationEntity(252U);
    msg.validity = 45665U;
    msg.type = 30U;
    msg.utc_year = 52748U;
    msg.utc_month = 193U;
    msg.utc_day = 128U;
    msg.utc_time = 0.803727389302;
    msg.lat = 0.494076214684;
    msg.lon = 0.0813782489813;
    msg.height = 0.352105658104;
    msg.satellites = 246U;
    msg.cog = 0.22624641492;
    msg.sog = 0.928877819505;
    msg.hdop = 0.620508552538;
    msg.vdop = 0.430683016832;
    msg.hacc = 0.428246446007;
    msg.vacc = 0.347357626925;

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
    msg.setTimeStamp(0.103962802281);
    msg.setSource(46167U);
    msg.setSourceEntity(95U);
    msg.setDestination(59801U);
    msg.setDestinationEntity(85U);
    msg.validity = 33366U;
    msg.type = 111U;
    msg.utc_year = 19577U;
    msg.utc_month = 48U;
    msg.utc_day = 24U;
    msg.utc_time = 0.636786861478;
    msg.lat = 0.905202425433;
    msg.lon = 0.417744999433;
    msg.height = 0.701351758891;
    msg.satellites = 26U;
    msg.cog = 0.858306134711;
    msg.sog = 0.984657189346;
    msg.hdop = 0.376874830066;
    msg.vdop = 0.251065002953;
    msg.hacc = 0.220383496044;
    msg.vacc = 0.645536606434;

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
    msg.setTimeStamp(0.72846867418);
    msg.setSource(54387U);
    msg.setSourceEntity(132U);
    msg.setDestination(28487U);
    msg.setDestinationEntity(57U);
    msg.time = 0.152049350242;
    msg.phi = 0.657386380318;
    msg.theta = 0.0661619246406;
    msg.psi = 0.648158395003;
    msg.psi_magnetic = 0.0807455557437;

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
    msg.setTimeStamp(0.281604263083);
    msg.setSource(62854U);
    msg.setSourceEntity(253U);
    msg.setDestination(40654U);
    msg.setDestinationEntity(199U);
    msg.time = 0.0526490756622;
    msg.phi = 0.0638629787416;
    msg.theta = 0.404098795162;
    msg.psi = 0.163548909597;
    msg.psi_magnetic = 0.150896832158;

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
    msg.setTimeStamp(0.364217105919);
    msg.setSource(12681U);
    msg.setSourceEntity(165U);
    msg.setDestination(4132U);
    msg.setDestinationEntity(77U);
    msg.time = 0.265874969043;
    msg.phi = 0.749027338215;
    msg.theta = 0.130241068871;
    msg.psi = 0.183477753521;
    msg.psi_magnetic = 0.730748433345;

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
    msg.setTimeStamp(0.800523612685);
    msg.setSource(61430U);
    msg.setSourceEntity(57U);
    msg.setDestination(53362U);
    msg.setDestinationEntity(207U);
    msg.time = 0.646450350841;
    msg.x = 0.874993751735;
    msg.y = 0.0820555088109;
    msg.z = 0.22389022578;
    msg.timestep = 0.227971182456;

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
    msg.setTimeStamp(0.908143307863);
    msg.setSource(35070U);
    msg.setSourceEntity(209U);
    msg.setDestination(39295U);
    msg.setDestinationEntity(47U);
    msg.time = 0.771185262138;
    msg.x = 0.063148897343;
    msg.y = 0.309781286515;
    msg.z = 0.0982633475813;
    msg.timestep = 0.0951017038411;

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
    msg.setTimeStamp(0.501780648235);
    msg.setSource(57118U);
    msg.setSourceEntity(223U);
    msg.setDestination(47987U);
    msg.setDestinationEntity(143U);
    msg.time = 0.901258417049;
    msg.x = 0.447382414614;
    msg.y = 0.140694930229;
    msg.z = 0.474992524215;
    msg.timestep = 0.225290868793;

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
    msg.setTimeStamp(0.959844690657);
    msg.setSource(37675U);
    msg.setSourceEntity(45U);
    msg.setDestination(50030U);
    msg.setDestinationEntity(97U);
    msg.time = 0.473194786416;
    msg.x = 0.889763417902;
    msg.y = 0.0290970120788;
    msg.z = 0.034476047387;

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
    msg.setTimeStamp(0.718686863654);
    msg.setSource(15019U);
    msg.setSourceEntity(141U);
    msg.setDestination(54849U);
    msg.setDestinationEntity(6U);
    msg.time = 0.357571255302;
    msg.x = 0.191770094522;
    msg.y = 0.018285505511;
    msg.z = 0.86372457135;

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
    msg.setTimeStamp(0.944077998205);
    msg.setSource(12828U);
    msg.setSourceEntity(68U);
    msg.setDestination(13092U);
    msg.setDestinationEntity(92U);
    msg.time = 0.694695160731;
    msg.x = 0.429550082776;
    msg.y = 0.902308000529;
    msg.z = 0.292090365278;

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
    msg.setTimeStamp(0.562025608683);
    msg.setSource(49287U);
    msg.setSourceEntity(169U);
    msg.setDestination(52673U);
    msg.setDestinationEntity(185U);
    msg.time = 0.252853658539;
    msg.x = 0.934536281006;
    msg.y = 0.286878888201;
    msg.z = 0.326140093117;

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
    msg.setTimeStamp(0.151401027201);
    msg.setSource(43264U);
    msg.setSourceEntity(65U);
    msg.setDestination(22658U);
    msg.setDestinationEntity(86U);
    msg.time = 0.437351925795;
    msg.x = 0.877668828951;
    msg.y = 0.0794488692487;
    msg.z = 0.614234529234;

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
    msg.setTimeStamp(0.255600280049);
    msg.setSource(37102U);
    msg.setSourceEntity(169U);
    msg.setDestination(46464U);
    msg.setDestinationEntity(153U);
    msg.time = 0.436221510694;
    msg.x = 0.0826234190492;
    msg.y = 0.805191640857;
    msg.z = 0.683903581334;

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
    msg.setTimeStamp(0.343052473528);
    msg.setSource(62418U);
    msg.setSourceEntity(111U);
    msg.setDestination(40802U);
    msg.setDestinationEntity(93U);
    msg.time = 0.672202629275;
    msg.x = 0.224934619149;
    msg.y = 0.697096968542;
    msg.z = 0.785557155205;

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
    msg.setTimeStamp(0.361639252783);
    msg.setSource(47362U);
    msg.setSourceEntity(138U);
    msg.setDestination(22395U);
    msg.setDestinationEntity(216U);
    msg.time = 0.102785090727;
    msg.x = 0.246824695182;
    msg.y = 0.371196377538;
    msg.z = 0.679911287791;

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
    msg.setTimeStamp(0.450706600727);
    msg.setSource(13507U);
    msg.setSourceEntity(71U);
    msg.setDestination(61502U);
    msg.setDestinationEntity(178U);
    msg.time = 0.904830188915;
    msg.x = 0.856728997879;
    msg.y = 0.927718589121;
    msg.z = 0.0421083631587;

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
    msg.setTimeStamp(0.372813040683);
    msg.setSource(11577U);
    msg.setSourceEntity(141U);
    msg.setDestination(25625U);
    msg.setDestinationEntity(106U);
    msg.validity = 145U;
    msg.x = 0.199631254212;
    msg.y = 0.37826602754;
    msg.z = 0.612026715635;

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
    msg.setTimeStamp(0.162229824386);
    msg.setSource(52542U);
    msg.setSourceEntity(159U);
    msg.setDestination(13156U);
    msg.setDestinationEntity(33U);
    msg.validity = 178U;
    msg.x = 0.649615663578;
    msg.y = 0.549643157047;
    msg.z = 0.240586517907;

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
    msg.setTimeStamp(0.0271329330842);
    msg.setSource(727U);
    msg.setSourceEntity(168U);
    msg.setDestination(24588U);
    msg.setDestinationEntity(81U);
    msg.validity = 86U;
    msg.x = 0.377693286799;
    msg.y = 0.892818263439;
    msg.z = 0.185781063518;

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
    msg.setTimeStamp(0.74555643388);
    msg.setSource(56199U);
    msg.setSourceEntity(246U);
    msg.setDestination(26882U);
    msg.setDestinationEntity(28U);
    msg.validity = 234U;
    msg.x = 0.32324608921;
    msg.y = 0.307435052188;
    msg.z = 0.542339312658;

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
    msg.setTimeStamp(0.680131335773);
    msg.setSource(57431U);
    msg.setSourceEntity(156U);
    msg.setDestination(60471U);
    msg.setDestinationEntity(221U);
    msg.validity = 228U;
    msg.x = 0.340519410721;
    msg.y = 0.287363368405;
    msg.z = 0.758427875316;

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
    msg.setTimeStamp(0.994256181865);
    msg.setSource(13962U);
    msg.setSourceEntity(22U);
    msg.setDestination(8201U);
    msg.setDestinationEntity(140U);
    msg.validity = 227U;
    msg.x = 0.491693758364;
    msg.y = 0.684603576313;
    msg.z = 0.171340631836;

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
    msg.setTimeStamp(0.612060503757);
    msg.setSource(8957U);
    msg.setSourceEntity(74U);
    msg.setDestination(8829U);
    msg.setDestinationEntity(75U);
    msg.time = 0.197648657755;
    msg.x = 0.50360465316;
    msg.y = 0.507257963044;
    msg.z = 0.832987136718;

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
    msg.setTimeStamp(0.957028757101);
    msg.setSource(24065U);
    msg.setSourceEntity(0U);
    msg.setDestination(45574U);
    msg.setDestinationEntity(138U);
    msg.time = 0.153864686704;
    msg.x = 0.560595583454;
    msg.y = 0.267197754803;
    msg.z = 0.757770654996;

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
    msg.setTimeStamp(0.59572101236);
    msg.setSource(13242U);
    msg.setSourceEntity(254U);
    msg.setDestination(17731U);
    msg.setDestinationEntity(157U);
    msg.time = 0.702885368414;
    msg.x = 0.173356597761;
    msg.y = 0.407733609657;
    msg.z = 0.678693351822;

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
    msg.setTimeStamp(0.957847233991);
    msg.setSource(51834U);
    msg.setSourceEntity(253U);
    msg.setDestination(47630U);
    msg.setDestinationEntity(158U);
    msg.validity = 154U;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.531790175553;
    tmp_msg_0.beam_height = 0.643275901953;
    msg.beam_config.push_back(tmp_msg_0);
    msg.value = 0.108819847156;

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
    msg.setTimeStamp(0.843032889424);
    msg.setSource(61447U);
    msg.setSourceEntity(56U);
    msg.setDestination(38676U);
    msg.setDestinationEntity(167U);
    msg.validity = 78U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.74988713773;
    tmp_msg_0.y = 0.724641998336;
    tmp_msg_0.z = 0.878483438247;
    tmp_msg_0.phi = 0.918938723515;
    tmp_msg_0.theta = 0.398943520717;
    tmp_msg_0.psi = 0.0537681171875;
    msg.location.push_back(tmp_msg_0);
    msg.value = 0.259688574491;

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
    msg.setTimeStamp(0.0325028280526);
    msg.setSource(49712U);
    msg.setSourceEntity(74U);
    msg.setDestination(64859U);
    msg.setDestinationEntity(135U);
    msg.validity = 83U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.773885656861;
    tmp_msg_0.y = 0.52296916873;
    tmp_msg_0.z = 0.338520862029;
    tmp_msg_0.phi = 0.897682048943;
    tmp_msg_0.theta = 0.116371188153;
    tmp_msg_0.psi = 0.35696297448;
    msg.location.push_back(tmp_msg_0);
    IMC::BeamConfig tmp_msg_1;
    tmp_msg_1.beam_width = 0.909567557029;
    tmp_msg_1.beam_height = 0.61822868368;
    msg.beam_config.push_back(tmp_msg_1);
    msg.value = 0.158297584985;

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
    msg.setTimeStamp(0.0626786676874);
    msg.setSource(12828U);
    msg.setSourceEntity(201U);
    msg.setDestination(30769U);
    msg.setDestinationEntity(50U);
    msg.value = 0.691029255822;

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
    msg.setTimeStamp(0.659427073443);
    msg.setSource(50394U);
    msg.setSourceEntity(38U);
    msg.setDestination(21235U);
    msg.setDestinationEntity(224U);
    msg.value = 0.000967880409399;

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
    msg.setTimeStamp(0.727927062432);
    msg.setSource(5009U);
    msg.setSourceEntity(71U);
    msg.setDestination(49562U);
    msg.setDestinationEntity(171U);
    msg.value = 0.0596919582223;

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
    msg.setTimeStamp(0.295342753172);
    msg.setSource(57620U);
    msg.setSourceEntity(87U);
    msg.setDestination(50355U);
    msg.setDestinationEntity(104U);
    msg.value = 0.623659377321;

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
    msg.setTimeStamp(0.636482857773);
    msg.setSource(62351U);
    msg.setSourceEntity(40U);
    msg.setDestination(1705U);
    msg.setDestinationEntity(68U);
    msg.value = 0.527647280511;

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
    msg.setTimeStamp(0.445946099014);
    msg.setSource(18939U);
    msg.setSourceEntity(156U);
    msg.setDestination(57730U);
    msg.setDestinationEntity(99U);
    msg.value = 0.371353837696;

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
    msg.setTimeStamp(0.414111906375);
    msg.setSource(59718U);
    msg.setSourceEntity(62U);
    msg.setDestination(59325U);
    msg.setDestinationEntity(145U);
    msg.value = 0.0432132122884;

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
    msg.setTimeStamp(0.476704544455);
    msg.setSource(13241U);
    msg.setSourceEntity(143U);
    msg.setDestination(16886U);
    msg.setDestinationEntity(84U);
    msg.value = 0.321915706987;

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
    msg.setTimeStamp(0.262678083472);
    msg.setSource(52110U);
    msg.setSourceEntity(163U);
    msg.setDestination(24977U);
    msg.setDestinationEntity(135U);
    msg.value = 0.065239710908;

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
    msg.setTimeStamp(0.992383219862);
    msg.setSource(62248U);
    msg.setSourceEntity(127U);
    msg.setDestination(5165U);
    msg.setDestinationEntity(122U);
    msg.value = 0.772908782572;

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
    msg.setTimeStamp(0.425127338217);
    msg.setSource(59113U);
    msg.setSourceEntity(117U);
    msg.setDestination(58628U);
    msg.setDestinationEntity(172U);
    msg.value = 0.642136620711;

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
    msg.setTimeStamp(0.22372201485);
    msg.setSource(1934U);
    msg.setSourceEntity(120U);
    msg.setDestination(19863U);
    msg.setDestinationEntity(1U);
    msg.value = 0.503671877425;

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
    msg.setTimeStamp(0.584562700813);
    msg.setSource(4728U);
    msg.setSourceEntity(52U);
    msg.setDestination(21625U);
    msg.setDestinationEntity(68U);
    msg.value = 0.109787498109;

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
    msg.setTimeStamp(0.800304906435);
    msg.setSource(55156U);
    msg.setSourceEntity(22U);
    msg.setDestination(14281U);
    msg.setDestinationEntity(190U);
    msg.value = 0.360364141982;

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
    msg.setTimeStamp(0.92005615042);
    msg.setSource(27044U);
    msg.setSourceEntity(199U);
    msg.setDestination(49914U);
    msg.setDestinationEntity(79U);
    msg.value = 0.796744670703;

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
    msg.setTimeStamp(0.171822969972);
    msg.setSource(21971U);
    msg.setSourceEntity(124U);
    msg.setDestination(46838U);
    msg.setDestinationEntity(158U);
    msg.value = 0.104521881437;

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
    msg.setTimeStamp(0.587671405947);
    msg.setSource(54560U);
    msg.setSourceEntity(56U);
    msg.setDestination(388U);
    msg.setDestinationEntity(226U);
    msg.value = 0.217916100913;

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
    msg.setTimeStamp(0.0598719272577);
    msg.setSource(62773U);
    msg.setSourceEntity(201U);
    msg.setDestination(57356U);
    msg.setDestinationEntity(172U);
    msg.value = 0.825318061774;

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
    msg.setTimeStamp(0.504468031115);
    msg.setSource(8900U);
    msg.setSourceEntity(222U);
    msg.setDestination(51985U);
    msg.setDestinationEntity(132U);
    msg.value = 0.156540992089;

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
    msg.setTimeStamp(0.937428678485);
    msg.setSource(33012U);
    msg.setSourceEntity(53U);
    msg.setDestination(24358U);
    msg.setDestinationEntity(116U);
    msg.value = 0.949890024397;

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
    msg.setTimeStamp(0.259440604925);
    msg.setSource(47737U);
    msg.setSourceEntity(215U);
    msg.setDestination(37323U);
    msg.setDestinationEntity(250U);
    msg.value = 0.987063149534;

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
    msg.setTimeStamp(0.256440502262);
    msg.setSource(10620U);
    msg.setSourceEntity(15U);
    msg.setDestination(55838U);
    msg.setDestinationEntity(218U);
    msg.value = 0.701433340327;

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
    msg.setTimeStamp(0.563620610393);
    msg.setSource(17868U);
    msg.setSourceEntity(29U);
    msg.setDestination(35516U);
    msg.setDestinationEntity(141U);
    msg.value = 0.586448367698;

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
    msg.setTimeStamp(0.752207387078);
    msg.setSource(16893U);
    msg.setSourceEntity(219U);
    msg.setDestination(61778U);
    msg.setDestinationEntity(83U);
    msg.value = 0.000696042962155;

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
    msg.setTimeStamp(0.142718500433);
    msg.setSource(9123U);
    msg.setSourceEntity(154U);
    msg.setDestination(39054U);
    msg.setDestinationEntity(242U);
    msg.direction = 0.681894055316;
    msg.speed = 0.686324499358;
    msg.turbulence = 0.587115014095;

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
    msg.setTimeStamp(0.309920633494);
    msg.setSource(343U);
    msg.setSourceEntity(11U);
    msg.setDestination(26966U);
    msg.setDestinationEntity(221U);
    msg.direction = 0.723356889312;
    msg.speed = 0.525603671471;
    msg.turbulence = 0.157072979614;

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
    msg.setTimeStamp(0.402036542727);
    msg.setSource(25213U);
    msg.setSourceEntity(55U);
    msg.setDestination(16954U);
    msg.setDestinationEntity(30U);
    msg.direction = 0.909914003205;
    msg.speed = 0.124084889684;
    msg.turbulence = 0.464558721466;

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
    msg.setTimeStamp(0.163342185661);
    msg.setSource(36822U);
    msg.setSourceEntity(4U);
    msg.setDestination(49801U);
    msg.setDestinationEntity(47U);
    msg.value = 0.00931099314609;

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
    msg.setTimeStamp(0.60910758245);
    msg.setSource(56138U);
    msg.setSourceEntity(76U);
    msg.setDestination(55295U);
    msg.setDestinationEntity(155U);
    msg.value = 0.784079866957;

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
    msg.setTimeStamp(0.48373263319);
    msg.setSource(31289U);
    msg.setSourceEntity(183U);
    msg.setDestination(2158U);
    msg.setDestinationEntity(151U);
    msg.value = 0.870777244748;

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
    msg.setTimeStamp(0.197009425637);
    msg.setSource(52697U);
    msg.setSourceEntity(189U);
    msg.setDestination(5763U);
    msg.setDestinationEntity(105U);
    msg.value.assign("KLOFOGVBWRERSTLMZGGSSHALPQIGXYMYMEGKGACURQAOHDJHTRBPZOBYBQOXFIODDFHEIICUUUNEOIZQDGQTXVPPZMSIQKKYFZGZAQ");

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
    msg.setTimeStamp(0.0274667387448);
    msg.setSource(63417U);
    msg.setSourceEntity(56U);
    msg.setDestination(2238U);
    msg.setDestinationEntity(221U);
    msg.value.assign("SGFFLZRYPPIWYBODXEYUGPPCCYPJTLPFSSBFIDCNEGCJWXNOQEOOCIMXZHTVIPKXTEDVKYHDBUCXOUARVQENQIHVMWSOGKDFNSXBFJAMKHKURGQQENAASMAJCJTQMWAJDPDSRSBMEGQFPDSYDZURSLGTLCQOWCRIQGZ");

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
    msg.setTimeStamp(0.440766547148);
    msg.setSource(23118U);
    msg.setSourceEntity(153U);
    msg.setDestination(20393U);
    msg.setDestinationEntity(34U);
    msg.value.assign("YJMHJZTJAIWZMJWVYPGHCEDYOMQXIRHKRPYOBJGKXLDIFOGKEYKMRDQLFLEMVFGMSMEIOVPRADCVSTJOUZGQNXYUKIPTPVJFCKRHVEVITWUBNIWWTZAGBYPDSQSHCDLECBAADNBETZDFEQAHNURCABWDLSCMUQZEUOMVZXFUHOERQXHKPCQKLFNTWNGFUJBRJKS");

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
    msg.setTimeStamp(0.178644206616);
    msg.setSource(6994U);
    msg.setSourceEntity(225U);
    msg.setDestination(45443U);
    msg.setDestinationEntity(173U);
    const char tmp_msg_0[] = {-71, 51, -40, -2, -87, -117, -39, 117, -56, 15, -36, -86, 93, -35, 113, 109, -51, 40, -76, 64, -6, 48, -25, -44, 85, 39, 10, 59, 63, -25, 8, 68, -30, -90, 80, 78, 77, -33, 107, 45, -18, 94, 40, -70, 72, 32, 40, -56, 38, -100, -118, -86, 6, -2, 58, -103, -43, 40, -6, -17, -114, -58, -79, 1, 43, 126, 89, -48, -22, -57, -102, -53, 82, -57, 27, -95, 88, 125, 49, 3, -103, 108, 123, 75, 2, -86, -30, -12, -24, 3, -93, 44, 43, -49, -60, 40, -18, 11, 16, 33, -78, -11, -75, 23, 45, -92, -12, -97, 46, 61, 87, 104, 3, 27, 80, -2, -22, -125, -76, -8, -10, -40, -46, -128, -61, -83, -116, 30, -11, -127, 101, -35, -115, 51, 94, -22, 45, -91, 77, -38, 9, -42, 36, 61, 92, -17, -107, -71, 91, -16, -43, -103, -54, -117, -16, -114, 43, 26, -88, -64, -19, 23, 44, 79, 40, 121, -99, -112, 70, -116, 44, 100, 56, -40, 95, 107, -47, -39, 28, -118, 77, 17, -100, -66, -12, -69, -15, -51, -107, 16, 125, -94, -93, -106, -10, 68, -63, -58, -17, -28, -48, 20, 67, 75, -85, -82, 57, -19, -44, 93, -35, -127, -24, -36, -103, -56, 65, -114, 48, 103, 92, -5, 65, 71, -128};
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
    msg.setTimeStamp(0.788506510425);
    msg.setSource(32845U);
    msg.setSourceEntity(124U);
    msg.setDestination(40820U);
    msg.setDestinationEntity(125U);
    const char tmp_msg_0[] = {-63, 42, -4, 121, -17, 103, 24, -87, -32, 42, 19, 48, 74, -15, 16, 95, 82, 121, -17, 119, -33, 49, -83, -31, -115, -86, -71, 77, -98, 99, -26, -64, -54, -48, 37, -29, -82, -67, -32, 51, 95, 31, 82, -75, 76, -24, -107, -47, -5, 56, -108, 116, -28};
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
    msg.setTimeStamp(0.785421648154);
    msg.setSource(51705U);
    msg.setSourceEntity(159U);
    msg.setDestination(54648U);
    msg.setDestinationEntity(76U);
    const char tmp_msg_0[] = {-81, -56, -43, 35, -53, 44, 6, 29, 45, -78, -93, 47, 73, -8, 58};
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
    msg.setTimeStamp(0.101501424775);
    msg.setSource(6315U);
    msg.setSourceEntity(31U);
    msg.setDestination(24602U);
    msg.setDestinationEntity(101U);
    msg.value = 0.512789704835;

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
    msg.setTimeStamp(0.614803889686);
    msg.setSource(32757U);
    msg.setSourceEntity(252U);
    msg.setDestination(45176U);
    msg.setDestinationEntity(241U);
    msg.value = 0.732387734879;

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
    msg.setTimeStamp(0.329293573046);
    msg.setSource(30564U);
    msg.setSourceEntity(35U);
    msg.setDestination(5074U);
    msg.setDestinationEntity(47U);
    msg.value = 0.232000406623;

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
    msg.setTimeStamp(0.609473997597);
    msg.setSource(32979U);
    msg.setSourceEntity(161U);
    msg.setDestination(52666U);
    msg.setDestinationEntity(251U);
    msg.type = 168U;
    msg.frequency = 3416949957U;
    msg.min_range = 5700U;
    msg.max_range = 1226U;
    msg.bits_per_point = 82U;
    msg.scale_factor = 0.125795858458;
    const char tmp_msg_0[] = {1, -9, -64, 108, -55, -111, -128, -128, 12, -83, -96, -97, -54, 8, -97, -90, 22, -85, -46, 117, -4, 110, 26, 125, -29, -87, 90, 115, 101, 34, -72, -123, -39, -103, 78, 114, 84, 76, 47, 43, 112, -33, 45, -11, -115, 30, 98, -78, -77, -36, -99, -119, 24, 32, -82, 27, -108, -99, -22, -102, 113, 6, 77, 81, -75, -54, -19, 126, 117, 4, -75, -122, 60, 120, 85, 83, -46, 15, -79, 43, -111, 58, 17, -116, 44, -117, 104, -28, 34, -4, 22, -32, 55, -90, 94, 125, -82, 68, 2, 44, -47, -127, 19, -47, -64, -32, 84, 59, 11, 99, 9, -23, -97, -4};
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
    msg.setTimeStamp(0.834115126471);
    msg.setSource(40721U);
    msg.setSourceEntity(230U);
    msg.setDestination(16819U);
    msg.setDestinationEntity(90U);
    msg.type = 88U;
    msg.frequency = 3716799587U;
    msg.min_range = 14640U;
    msg.max_range = 59518U;
    msg.bits_per_point = 162U;
    msg.scale_factor = 0.346894057169;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.418212096614;
    tmp_msg_0.beam_height = 0.77861161357;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {58, -18, -27, -105, 88, 116, -86, -122, -75, -71, -122, -118, 114, 76, 11, 23, 9, -56, -95, -127, -54, -35, -13, 37, 17, 14, -118, -46, -61, -126, -45, 45, 84, 1, -91, 37, -76, 7, 69, 104, -79, 53, -105, 17, -89, -14, 88, -60, -76, -92, 113, 121, 45, 12, -10, -63, -18, 3, -68, 98, -29, -111, -33, -123, -60, -7, 112, -126, 99, -67, -113, 75, -111, 113, 44, -1, 121, 120, 75, 15, 85, 62, -28, 91, 94, -87, -20, -101, -15, -8, 28, 108, 83, -108, 27, 37, -120, -111, -85, -26, 106, -50, 6, -77, -123, -89, -94, -3, -19, 45, 86, 66, -39, -76, -30, 2, 115, -87, -72, -113, 47, -118, 86, -39, -79, 72, -115, 88, 79, 109, 45, 94, -40, -43, 78, 97, 52, -13, 83, 29, 83, 8, -30, 55, 16, -81, -1, 67, -64};
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
    msg.setTimeStamp(0.851458738798);
    msg.setSource(40322U);
    msg.setSourceEntity(232U);
    msg.setDestination(15928U);
    msg.setDestinationEntity(127U);
    msg.type = 251U;
    msg.frequency = 1957885657U;
    msg.min_range = 4604U;
    msg.max_range = 50252U;
    msg.bits_per_point = 170U;
    msg.scale_factor = 0.228252882475;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.40842778187;
    tmp_msg_0.beam_height = 0.338293785063;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {-27, -29, -55, 59, 60, -107, -35, 7, 114, -80, 14, -125, -80, -62, 113, 19, 93, -122, 1, -74, -10, 77, 17, -84, 90, -117, -108, -62, 83, 41, 71, -9, 4, -96, -42, 111, -118, -25, -110, 35, 71, 41, 35, -89, 41, 53, 119, 100, -113, -72, -107, 62, -108, -76, -97, -98, 78, -60, 74, -52, -57, 105, 96, -40, -102, -5, 60, -110, -60, 33, -15, 29, -12, 81, 2, -99, -103, 73, -100, -8, 79, -113, -30, 48, -89, 5, 1, 119, -116, -6, -108, 34, -18, -83, -13, -100, 76, -91, 65, 63, 8, 112, 87, 98, 53, -41, -87, -113, -79};
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
    msg.setTimeStamp(0.84557218928);
    msg.setSource(24519U);
    msg.setSourceEntity(162U);
    msg.setDestination(38580U);
    msg.setDestinationEntity(14U);

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
    msg.setTimeStamp(0.37192337314);
    msg.setSource(53746U);
    msg.setSourceEntity(189U);
    msg.setDestination(2964U);
    msg.setDestinationEntity(195U);

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
    msg.setTimeStamp(0.953909319536);
    msg.setSource(24316U);
    msg.setSourceEntity(13U);
    msg.setDestination(4922U);
    msg.setDestinationEntity(98U);

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
    msg.setTimeStamp(0.0873177616263);
    msg.setSource(34417U);
    msg.setSourceEntity(42U);
    msg.setDestination(11618U);
    msg.setDestinationEntity(144U);
    msg.op = 6U;

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
    msg.setTimeStamp(0.480741008983);
    msg.setSource(63805U);
    msg.setSourceEntity(70U);
    msg.setDestination(26375U);
    msg.setDestinationEntity(114U);
    msg.op = 211U;

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
    msg.setTimeStamp(0.0670190379214);
    msg.setSource(12241U);
    msg.setSourceEntity(130U);
    msg.setDestination(30422U);
    msg.setDestinationEntity(68U);
    msg.op = 67U;

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
    msg.setTimeStamp(0.549474693714);
    msg.setSource(61198U);
    msg.setSourceEntity(173U);
    msg.setDestination(51070U);
    msg.setDestinationEntity(61U);
    msg.value = 0.0117081777372;
    msg.confidence = 0.990042683165;
    msg.opmodes.assign("NHPDQHCUDGTSWCAZUHXYDGYURMGFBWGOGEJYQVMTXVGUCYJVJSIXDUJJTMQQROKEKMZWKAQMDADEFIIRWNIHPONUFVHVAKLYIKLFYPCLLBOPOSPEHCTRNXSMUSIKZLGILCWWEFVLDRUHBOKAPCBKDEEAPGSQPWVQHGBNHSRAQBQXNXMBZVPJNIPGFZRUMBMYSEIOWWUXAEZMTNDZKLSFNHFZQZOOWXSTYLBTOYCVJCENRAKXBLITR");

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
    msg.setTimeStamp(0.844298791661);
    msg.setSource(8895U);
    msg.setSourceEntity(227U);
    msg.setDestination(64521U);
    msg.setDestinationEntity(105U);
    msg.value = 0.510983910449;
    msg.confidence = 0.70223089714;
    msg.opmodes.assign("MVOJZIHVNIHHXCYDIBTLJANMACGBHWMHVMRIETIKAPSUZKLJHZERZIAMVHYBZXQDJODRXGSPOHXQYXEXZWPNUNOWOYBHERYGERVURNGSJAOGYLSCMXFPJTCUJMULGCOMMIGEBEQFBNKQKSRNBGZUIUKBFYQEIWEDPTKWUSEZKBFWNZYLCXNWNTSVFISKQZPLBDFRPPAAOLLCYUQJKRQGVYTKQDMTDFJXGOHWQARDVODUPFDJXSLACTVCFVPSFL");

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
    msg.setTimeStamp(0.0436503823376);
    msg.setSource(34006U);
    msg.setSourceEntity(175U);
    msg.setDestination(54306U);
    msg.setDestinationEntity(11U);
    msg.value = 0.55369995325;
    msg.confidence = 0.785035482728;
    msg.opmodes.assign("FSHARAWNDWSORIWYGPIMIBHUAJZTYZGAFETZYWFAQLXVOGKMQKZTRYIYYGBOLPMSXUOKQAZWSFHQHSXJYZBQLMXDDCRQVGXUXHNNFCTCGPKBDORZWTPJDCDQUKDXIOCMOROATLWMAEVZEDXEQLUGPENNRCTIBUPSCEFLC");

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
    msg.setTimeStamp(0.149179204668);
    msg.setSource(14110U);
    msg.setSourceEntity(65U);
    msg.setDestination(64618U);
    msg.setDestinationEntity(136U);
    msg.itow = 4063207753U;
    msg.lat = 0.41005354958;
    msg.lon = 0.242543183218;
    msg.height_ell = 0.728154650914;
    msg.height_sea = 0.346349831173;
    msg.hacc = 0.555057702686;
    msg.vacc = 0.552221518998;
    msg.vel_n = 0.2199378359;
    msg.vel_e = 0.202614428567;
    msg.vel_d = 0.599587937244;
    msg.speed = 0.591991562379;
    msg.gspeed = 0.287180275123;
    msg.heading = 0.694577480285;
    msg.sacc = 0.429604533737;
    msg.cacc = 0.145987613479;

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
    msg.setTimeStamp(0.485136328582);
    msg.setSource(56524U);
    msg.setSourceEntity(9U);
    msg.setDestination(19464U);
    msg.setDestinationEntity(7U);
    msg.itow = 2424889638U;
    msg.lat = 0.429677594815;
    msg.lon = 0.348489462464;
    msg.height_ell = 0.814379617346;
    msg.height_sea = 0.668828787528;
    msg.hacc = 0.507562475074;
    msg.vacc = 0.391978641927;
    msg.vel_n = 0.0810396155745;
    msg.vel_e = 0.982914804382;
    msg.vel_d = 0.821741262196;
    msg.speed = 0.899361820037;
    msg.gspeed = 0.495470385386;
    msg.heading = 0.00636924451612;
    msg.sacc = 0.68362514773;
    msg.cacc = 0.425436855214;

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
    msg.setTimeStamp(0.522159194984);
    msg.setSource(28998U);
    msg.setSourceEntity(105U);
    msg.setDestination(65251U);
    msg.setDestinationEntity(171U);
    msg.itow = 1617428742U;
    msg.lat = 0.891102331138;
    msg.lon = 0.085735295337;
    msg.height_ell = 0.846232693293;
    msg.height_sea = 0.285103841614;
    msg.hacc = 0.0302772399155;
    msg.vacc = 0.496555895362;
    msg.vel_n = 0.415706960508;
    msg.vel_e = 0.446435011091;
    msg.vel_d = 0.0687204019251;
    msg.speed = 0.820579500806;
    msg.gspeed = 0.273316620892;
    msg.heading = 0.0399577591161;
    msg.sacc = 0.16509238464;
    msg.cacc = 0.885162501001;

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
    msg.setTimeStamp(0.286601814067);
    msg.setSource(38013U);
    msg.setSourceEntity(176U);
    msg.setDestination(49043U);
    msg.setDestinationEntity(118U);
    msg.id = 70U;
    msg.value = 0.561945608305;

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
    msg.setTimeStamp(0.536139014883);
    msg.setSource(32042U);
    msg.setSourceEntity(111U);
    msg.setDestination(36064U);
    msg.setDestinationEntity(35U);
    msg.id = 168U;
    msg.value = 0.381562637103;

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
    msg.setTimeStamp(0.155219244211);
    msg.setSource(56539U);
    msg.setSourceEntity(126U);
    msg.setDestination(53975U);
    msg.setDestinationEntity(21U);
    msg.id = 48U;
    msg.value = 0.446179984323;

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
    msg.setTimeStamp(0.307418742402);
    msg.setSource(24196U);
    msg.setSourceEntity(189U);
    msg.setDestination(24358U);
    msg.setDestinationEntity(145U);
    msg.x = 0.542128789983;
    msg.y = 0.814206832364;
    msg.z = 0.399020719296;
    msg.phi = 0.877901637261;
    msg.theta = 0.311000789757;
    msg.psi = 0.628776368856;

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
    msg.setTimeStamp(0.020142226207);
    msg.setSource(60699U);
    msg.setSourceEntity(71U);
    msg.setDestination(26823U);
    msg.setDestinationEntity(140U);
    msg.x = 0.26565636752;
    msg.y = 0.4756535039;
    msg.z = 0.710518627622;
    msg.phi = 0.758001040793;
    msg.theta = 0.754530981717;
    msg.psi = 0.766202517437;

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
    msg.setTimeStamp(0.445965779266);
    msg.setSource(23354U);
    msg.setSourceEntity(79U);
    msg.setDestination(57233U);
    msg.setDestinationEntity(77U);
    msg.x = 0.258209921222;
    msg.y = 0.0204564671779;
    msg.z = 0.699052140096;
    msg.phi = 0.591669370615;
    msg.theta = 0.918958580264;
    msg.psi = 0.0528304419039;

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
    msg.setTimeStamp(0.796238256523);
    msg.setSource(62516U);
    msg.setSourceEntity(237U);
    msg.setDestination(59761U);
    msg.setDestinationEntity(138U);
    msg.beam_width = 0.155937526733;
    msg.beam_height = 0.649114576663;

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
    msg.setTimeStamp(0.104746890314);
    msg.setSource(24150U);
    msg.setSourceEntity(220U);
    msg.setDestination(55915U);
    msg.setDestinationEntity(68U);
    msg.beam_width = 0.501382451343;
    msg.beam_height = 0.390267553131;

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
    msg.setTimeStamp(0.0829338772563);
    msg.setSource(45173U);
    msg.setSourceEntity(205U);
    msg.setDestination(57530U);
    msg.setDestinationEntity(195U);
    msg.beam_width = 0.773017501248;
    msg.beam_height = 0.581794252594;

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
    msg.setTimeStamp(0.000498740374992);
    msg.setSource(24458U);
    msg.setSourceEntity(93U);
    msg.setDestination(55436U);
    msg.setDestinationEntity(29U);
    msg.sane = 254U;

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
    msg.setTimeStamp(0.843456504458);
    msg.setSource(64196U);
    msg.setSourceEntity(111U);
    msg.setDestination(39993U);
    msg.setDestinationEntity(25U);
    msg.sane = 229U;

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
    msg.setTimeStamp(0.314357133379);
    msg.setSource(52607U);
    msg.setSourceEntity(234U);
    msg.setDestination(23387U);
    msg.setDestinationEntity(17U);
    msg.sane = 166U;

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
    msg.setTimeStamp(0.114737729305);
    msg.setSource(24306U);
    msg.setSourceEntity(182U);
    msg.setDestination(23192U);
    msg.setDestinationEntity(48U);
    msg.value = 0.47466337217;

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
    msg.setTimeStamp(0.269525332052);
    msg.setSource(62243U);
    msg.setSourceEntity(179U);
    msg.setDestination(17245U);
    msg.setDestinationEntity(128U);
    msg.value = 0.526319360107;

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
    msg.setTimeStamp(0.924441932088);
    msg.setSource(1073U);
    msg.setSourceEntity(148U);
    msg.setDestination(27274U);
    msg.setDestinationEntity(181U);
    msg.value = 0.73436571085;

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
    msg.setTimeStamp(0.781238720155);
    msg.setSource(14122U);
    msg.setSourceEntity(90U);
    msg.setDestination(10194U);
    msg.setDestinationEntity(121U);
    msg.value = 0.878099735786;

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
    msg.setTimeStamp(0.111048774401);
    msg.setSource(59515U);
    msg.setSourceEntity(155U);
    msg.setDestination(28809U);
    msg.setDestinationEntity(170U);
    msg.value = 0.999215318433;

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
    msg.setTimeStamp(0.711745266098);
    msg.setSource(17774U);
    msg.setSourceEntity(183U);
    msg.setDestination(44545U);
    msg.setDestinationEntity(32U);
    msg.value = 0.294171963531;

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
    msg.setTimeStamp(0.500026043081);
    msg.setSource(15507U);
    msg.setSourceEntity(129U);
    msg.setDestination(33621U);
    msg.setDestinationEntity(218U);
    msg.value = 0.933013421427;

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
    msg.setTimeStamp(0.871903209644);
    msg.setSource(52494U);
    msg.setSourceEntity(67U);
    msg.setDestination(28405U);
    msg.setDestinationEntity(188U);
    msg.value = 0.310200441902;

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
    msg.setTimeStamp(0.231281754913);
    msg.setSource(26503U);
    msg.setSourceEntity(66U);
    msg.setDestination(59022U);
    msg.setDestinationEntity(125U);
    msg.value = 0.647605606556;

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
    msg.setTimeStamp(0.383896103161);
    msg.setSource(42894U);
    msg.setSourceEntity(25U);
    msg.setDestination(64329U);
    msg.setDestinationEntity(201U);
    msg.value = 0.19923706681;

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
    msg.setTimeStamp(0.213660239434);
    msg.setSource(11193U);
    msg.setSourceEntity(191U);
    msg.setDestination(22814U);
    msg.setDestinationEntity(166U);
    msg.value = 0.340823330618;

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
    msg.setTimeStamp(0.829710954586);
    msg.setSource(11086U);
    msg.setSourceEntity(226U);
    msg.setDestination(53220U);
    msg.setDestinationEntity(35U);
    msg.value = 0.418556004689;

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
    msg.setTimeStamp(0.38529747904);
    msg.setSource(15197U);
    msg.setSourceEntity(227U);
    msg.setDestination(32825U);
    msg.setDestinationEntity(42U);
    msg.value = 0.722633478529;

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
    msg.setTimeStamp(0.251684207591);
    msg.setSource(6053U);
    msg.setSourceEntity(183U);
    msg.setDestination(58269U);
    msg.setDestinationEntity(95U);
    msg.value = 0.449146862516;

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
    msg.setTimeStamp(0.780341968546);
    msg.setSource(53472U);
    msg.setSourceEntity(73U);
    msg.setDestination(55469U);
    msg.setDestinationEntity(229U);
    msg.value = 0.0349328374646;

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
    msg.setTimeStamp(0.875381884876);
    msg.setSource(13256U);
    msg.setSourceEntity(198U);
    msg.setDestination(40459U);
    msg.setDestinationEntity(141U);
    msg.value = 0.0690809300397;

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
    msg.setTimeStamp(0.157080127412);
    msg.setSource(5514U);
    msg.setSourceEntity(130U);
    msg.setDestination(15161U);
    msg.setDestinationEntity(46U);
    msg.value = 0.235094539116;

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
    msg.setTimeStamp(0.200452272374);
    msg.setSource(4000U);
    msg.setSourceEntity(78U);
    msg.setDestination(65105U);
    msg.setDestinationEntity(54U);
    msg.value = 0.755209771121;

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
    msg.setTimeStamp(0.327177262568);
    msg.setSource(37880U);
    msg.setSourceEntity(34U);
    msg.setDestination(23589U);
    msg.setDestinationEntity(146U);
    msg.value = 0.365325983962;

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
    msg.setTimeStamp(0.995678657126);
    msg.setSource(55755U);
    msg.setSourceEntity(27U);
    msg.setDestination(7993U);
    msg.setDestinationEntity(9U);
    msg.value = 0.028379073189;

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
    msg.setTimeStamp(0.456510110419);
    msg.setSource(10171U);
    msg.setSourceEntity(197U);
    msg.setDestination(65249U);
    msg.setDestinationEntity(16U);
    msg.value = 0.938746586813;

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
    msg.setTimeStamp(0.196592676081);
    msg.setSource(55271U);
    msg.setSourceEntity(182U);
    msg.setDestination(45004U);
    msg.setDestinationEntity(53U);
    msg.value = 0.739350149497;

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
    msg.setTimeStamp(0.91987246064);
    msg.setSource(45489U);
    msg.setSourceEntity(82U);
    msg.setDestination(1362U);
    msg.setDestinationEntity(98U);
    msg.value = 0.998882275284;

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
    msg.setTimeStamp(0.147907082042);
    msg.setSource(12608U);
    msg.setSourceEntity(205U);
    msg.setDestination(59751U);
    msg.setDestinationEntity(159U);
    msg.value = 0.168072307989;

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
    msg.setTimeStamp(0.0330435676445);
    msg.setSource(21496U);
    msg.setSourceEntity(143U);
    msg.setDestination(47080U);
    msg.setDestinationEntity(23U);
    msg.validity = 3789U;
    msg.type = 56U;
    msg.tow = 3157791695U;
    msg.base_lat = 0.27241446242;
    msg.base_lon = 0.763502363589;
    msg.base_height = 0.443824604821;
    msg.n = 0.290759572446;
    msg.e = 0.4375639363;
    msg.d = 0.804714169724;
    msg.v_n = 0.821481387933;
    msg.v_e = 0.739212111879;
    msg.v_d = 0.123843467622;
    msg.satellites = 236U;
    msg.iar_hyp = 27192U;
    msg.iar_ratio = 0.984113652072;

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
    msg.setTimeStamp(0.82286850211);
    msg.setSource(22446U);
    msg.setSourceEntity(66U);
    msg.setDestination(47012U);
    msg.setDestinationEntity(253U);
    msg.validity = 47367U;
    msg.type = 154U;
    msg.tow = 3368205196U;
    msg.base_lat = 0.736466082813;
    msg.base_lon = 0.823951018477;
    msg.base_height = 0.607575960515;
    msg.n = 0.768440955769;
    msg.e = 0.117542356865;
    msg.d = 0.559987438091;
    msg.v_n = 0.631474328893;
    msg.v_e = 0.189520691352;
    msg.v_d = 0.369701490805;
    msg.satellites = 25U;
    msg.iar_hyp = 3345U;
    msg.iar_ratio = 0.499373030734;

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
    msg.setTimeStamp(0.878800869438);
    msg.setSource(54384U);
    msg.setSourceEntity(162U);
    msg.setDestination(10601U);
    msg.setDestinationEntity(145U);
    msg.validity = 55241U;
    msg.type = 20U;
    msg.tow = 17416576U;
    msg.base_lat = 0.441707098209;
    msg.base_lon = 0.77836638487;
    msg.base_height = 0.609027043137;
    msg.n = 0.488762246121;
    msg.e = 0.141451672003;
    msg.d = 0.297111996324;
    msg.v_n = 0.0211090151284;
    msg.v_e = 0.854656781867;
    msg.v_d = 0.947887186826;
    msg.satellites = 88U;
    msg.iar_hyp = 40832U;
    msg.iar_ratio = 0.54295474204;

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
    msg.setTimeStamp(0.791570147066);
    msg.setSource(36390U);
    msg.setSourceEntity(174U);
    msg.setDestination(32838U);
    msg.setDestinationEntity(154U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.453620706799;
    tmp_msg_0.lon = 0.526147109197;
    tmp_msg_0.height = 0.104112084424;
    tmp_msg_0.x = 0.315308728741;
    tmp_msg_0.y = 0.994651677805;
    tmp_msg_0.z = 0.708464924798;
    tmp_msg_0.phi = 0.258887185309;
    tmp_msg_0.theta = 0.751262920621;
    tmp_msg_0.psi = 0.132752814417;
    tmp_msg_0.u = 0.938623230926;
    tmp_msg_0.v = 0.441328484072;
    tmp_msg_0.w = 0.252626560651;
    tmp_msg_0.vx = 0.872182292756;
    tmp_msg_0.vy = 0.328164473817;
    tmp_msg_0.vz = 0.210498201898;
    tmp_msg_0.p = 0.314823622987;
    tmp_msg_0.q = 0.242759811532;
    tmp_msg_0.r = 0.63339235537;
    tmp_msg_0.depth = 0.644144674633;
    tmp_msg_0.alt = 0.657521429929;
    msg.state.set(tmp_msg_0);
    msg.type = 72U;

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
    msg.setTimeStamp(0.938402745334);
    msg.setSource(31513U);
    msg.setSourceEntity(138U);
    msg.setDestination(61274U);
    msg.setDestinationEntity(73U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.338260176281;
    tmp_msg_0.lon = 0.419683721344;
    tmp_msg_0.height = 0.280581283075;
    tmp_msg_0.x = 0.857056967523;
    tmp_msg_0.y = 0.755811203056;
    tmp_msg_0.z = 0.582349473841;
    tmp_msg_0.phi = 0.592318418082;
    tmp_msg_0.theta = 0.481536970017;
    tmp_msg_0.psi = 0.412102868485;
    tmp_msg_0.u = 0.239006566695;
    tmp_msg_0.v = 0.677638586973;
    tmp_msg_0.w = 0.58136489596;
    tmp_msg_0.vx = 0.194607059796;
    tmp_msg_0.vy = 0.895984948845;
    tmp_msg_0.vz = 0.0171402063826;
    tmp_msg_0.p = 0.304262263031;
    tmp_msg_0.q = 0.342801232977;
    tmp_msg_0.r = 0.147811456827;
    tmp_msg_0.depth = 0.870789474383;
    tmp_msg_0.alt = 0.795908569462;
    msg.state.set(tmp_msg_0);
    msg.type = 52U;

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
    msg.setTimeStamp(0.26538360213);
    msg.setSource(64811U);
    msg.setSourceEntity(169U);
    msg.setDestination(10023U);
    msg.setDestinationEntity(164U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.818456400668;
    tmp_msg_0.lon = 0.402188689149;
    tmp_msg_0.height = 0.889680925899;
    tmp_msg_0.x = 0.41769053229;
    tmp_msg_0.y = 0.39830088273;
    tmp_msg_0.z = 0.951408071051;
    tmp_msg_0.phi = 0.141901122226;
    tmp_msg_0.theta = 0.00119156853641;
    tmp_msg_0.psi = 0.534135340982;
    tmp_msg_0.u = 0.783805529136;
    tmp_msg_0.v = 0.791688343757;
    tmp_msg_0.w = 0.39092524395;
    tmp_msg_0.vx = 0.243065961892;
    tmp_msg_0.vy = 0.0130672649813;
    tmp_msg_0.vz = 0.0710859076876;
    tmp_msg_0.p = 0.390331600808;
    tmp_msg_0.q = 0.517099384158;
    tmp_msg_0.r = 0.00337143118447;
    tmp_msg_0.depth = 0.308007228766;
    tmp_msg_0.alt = 0.440507827275;
    msg.state.set(tmp_msg_0);
    msg.type = 25U;

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
    msg.setTimeStamp(0.228110457566);
    msg.setSource(10179U);
    msg.setSourceEntity(143U);
    msg.setDestination(10677U);
    msg.setDestinationEntity(60U);
    msg.value = 0.90862820771;

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
    msg.setTimeStamp(0.261012025946);
    msg.setSource(56198U);
    msg.setSourceEntity(5U);
    msg.setDestination(32502U);
    msg.setDestinationEntity(251U);
    msg.value = 0.433543715687;

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
    msg.setTimeStamp(0.145995457066);
    msg.setSource(62936U);
    msg.setSourceEntity(18U);
    msg.setDestination(2173U);
    msg.setDestinationEntity(170U);
    msg.value = 0.0287545264109;

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
    msg.setTimeStamp(0.367886415182);
    msg.setSource(10688U);
    msg.setSourceEntity(30U);
    msg.setDestination(22168U);
    msg.setDestinationEntity(132U);
    msg.value = 0.79202303286;

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
    msg.setTimeStamp(0.620278514501);
    msg.setSource(43745U);
    msg.setSourceEntity(148U);
    msg.setDestination(57986U);
    msg.setDestinationEntity(132U);
    msg.value = 0.407927188359;

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
    msg.setTimeStamp(0.189008165049);
    msg.setSource(50066U);
    msg.setSourceEntity(11U);
    msg.setDestination(59104U);
    msg.setDestinationEntity(150U);
    msg.value = 0.26279190079;

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
    msg.setTimeStamp(0.220105533499);
    msg.setSource(13562U);
    msg.setSourceEntity(198U);
    msg.setDestination(40273U);
    msg.setDestinationEntity(46U);
    msg.value = 0.234747680675;

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
    msg.setTimeStamp(0.0350201333299);
    msg.setSource(32028U);
    msg.setSourceEntity(30U);
    msg.setDestination(9438U);
    msg.setDestinationEntity(136U);
    msg.value = 0.836977802045;

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
    msg.setTimeStamp(0.915991237965);
    msg.setSource(8912U);
    msg.setSourceEntity(61U);
    msg.setDestination(61673U);
    msg.setDestinationEntity(141U);
    msg.value = 0.409410237436;

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
    msg.setTimeStamp(0.975561839644);
    msg.setSource(13714U);
    msg.setSourceEntity(198U);
    msg.setDestination(31505U);
    msg.setDestinationEntity(37U);
    msg.value = 0.376451464705;

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
    msg.setTimeStamp(0.633506308906);
    msg.setSource(30828U);
    msg.setSourceEntity(177U);
    msg.setDestination(6306U);
    msg.setDestinationEntity(194U);
    msg.value = 0.344215879746;

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
    msg.setTimeStamp(0.937154179696);
    msg.setSource(20402U);
    msg.setSourceEntity(243U);
    msg.setDestination(59467U);
    msg.setDestinationEntity(253U);
    msg.value = 0.633562698755;

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
    msg.setTimeStamp(0.453350754634);
    msg.setSource(31406U);
    msg.setSourceEntity(9U);
    msg.setDestination(59832U);
    msg.setDestinationEntity(30U);
    msg.value = 0.658901491504;

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
    msg.setTimeStamp(0.400329117043);
    msg.setSource(25621U);
    msg.setSourceEntity(66U);
    msg.setDestination(58125U);
    msg.setDestinationEntity(74U);
    msg.value = 0.465890845835;

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
    msg.setTimeStamp(0.669377060489);
    msg.setSource(55755U);
    msg.setSourceEntity(114U);
    msg.setDestination(5697U);
    msg.setDestinationEntity(199U);
    msg.value = 0.369486109757;

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
    msg.setTimeStamp(0.337317195006);
    msg.setSource(32107U);
    msg.setSourceEntity(235U);
    msg.setDestination(58535U);
    msg.setDestinationEntity(76U);
    msg.id = 147U;
    msg.zoom = 152U;
    msg.action = 98U;

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
    msg.setTimeStamp(0.274934413242);
    msg.setSource(17148U);
    msg.setSourceEntity(32U);
    msg.setDestination(3332U);
    msg.setDestinationEntity(130U);
    msg.id = 250U;
    msg.zoom = 76U;
    msg.action = 244U;

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
    msg.setTimeStamp(0.145853470203);
    msg.setSource(16024U);
    msg.setSourceEntity(50U);
    msg.setDestination(59761U);
    msg.setDestinationEntity(150U);
    msg.id = 239U;
    msg.zoom = 243U;
    msg.action = 36U;

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
    msg.setTimeStamp(0.0259279369113);
    msg.setSource(11530U);
    msg.setSourceEntity(234U);
    msg.setDestination(40127U);
    msg.setDestinationEntity(10U);
    msg.id = 246U;
    msg.value = 0.347472651131;

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
    msg.setTimeStamp(0.18434644772);
    msg.setSource(43600U);
    msg.setSourceEntity(179U);
    msg.setDestination(3573U);
    msg.setDestinationEntity(46U);
    msg.id = 249U;
    msg.value = 0.740870524975;

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
    msg.setTimeStamp(0.920630091242);
    msg.setSource(59742U);
    msg.setSourceEntity(232U);
    msg.setDestination(51658U);
    msg.setDestinationEntity(182U);
    msg.id = 128U;
    msg.value = 0.830129909164;

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
    msg.setTimeStamp(0.0957145568668);
    msg.setSource(50326U);
    msg.setSourceEntity(84U);
    msg.setDestination(62671U);
    msg.setDestinationEntity(211U);
    msg.id = 35U;
    msg.value = 0.389301568941;

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
    msg.setTimeStamp(0.000522647593693);
    msg.setSource(24066U);
    msg.setSourceEntity(239U);
    msg.setDestination(49178U);
    msg.setDestinationEntity(209U);
    msg.id = 128U;
    msg.value = 0.761543444398;

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
    msg.setTimeStamp(0.993807528826);
    msg.setSource(34715U);
    msg.setSourceEntity(61U);
    msg.setDestination(63825U);
    msg.setDestinationEntity(10U);
    msg.id = 149U;
    msg.value = 0.227212552498;

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
    msg.setTimeStamp(0.969524352773);
    msg.setSource(57196U);
    msg.setSourceEntity(55U);
    msg.setDestination(52659U);
    msg.setDestinationEntity(80U);
    msg.id = 78U;
    msg.angle = 0.377310691425;

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
    msg.setTimeStamp(0.220575704806);
    msg.setSource(7526U);
    msg.setSourceEntity(3U);
    msg.setDestination(41166U);
    msg.setDestinationEntity(187U);
    msg.id = 140U;
    msg.angle = 0.351388337367;

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
    msg.setTimeStamp(0.664116946538);
    msg.setSource(26602U);
    msg.setSourceEntity(112U);
    msg.setDestination(39849U);
    msg.setDestinationEntity(131U);
    msg.id = 109U;
    msg.angle = 0.842934939204;

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
    msg.setTimeStamp(0.794631668894);
    msg.setSource(31121U);
    msg.setSourceEntity(75U);
    msg.setDestination(18460U);
    msg.setDestinationEntity(217U);
    msg.op = 83U;
    msg.actions.assign("NQBCHKEQAISXGKEZFZPLUIDJKHBCMGSGLVCOLJSHBCWBZSKJUXMYFTROGNBTTEYWXHIBGZUPOBTFXZROACXMYUXFPXLVQEXZHSDQWUHCGWAELEARHEYVCTQKOPKWDAADLINDKTSXFMHCQFUQRROQQBOZIRWZHSIRJIRLTMXUMFHKZ");

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
    msg.setTimeStamp(0.884674445507);
    msg.setSource(65503U);
    msg.setSourceEntity(78U);
    msg.setDestination(59418U);
    msg.setDestinationEntity(219U);
    msg.op = 102U;
    msg.actions.assign("GIOYQYDTPNYXDQHRZHGIQVGTLIZYTTFTCEHXWSFLVPDRQGQUBWHNIXCCKWFBRKJHYFHJCLSLIODJUSGBXIOQUCZZESAQXJMBTQMAGUMMIKOAAGBGFKXIRBFWHRDYJBYOMDGUWPTDVPUKMBRRMEVLNZFEPFGOJLZZPATKSERAZAUOXVUUAONCTKIMEPBSNLDCFKSEBCUCWNSTVJSJYXEFRQA");

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
    msg.setTimeStamp(0.295246024592);
    msg.setSource(35425U);
    msg.setSourceEntity(160U);
    msg.setDestination(36768U);
    msg.setDestinationEntity(154U);
    msg.op = 0U;
    msg.actions.assign("OPUZPNDYMQYJUKQOXASCLGWICBMDHWWSNECMYUCYOGUKWSUYRXLFUGPAFOHSJHWHDTSKEWDZXVNCKKHSDGIQTZBAXMEVOHOYRELFQJCBPTZKPYYVIPAKURFBVJBZMRATJFSBZSVQMHAVRKDIWEZBAEINLXRMXOGDQUPEERANUXCKIFYZIGQNLNIOEGVWTVGNWDQLDTPMUXPGATSCSKQ");

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
    msg.setTimeStamp(0.350440127958);
    msg.setSource(3174U);
    msg.setSourceEntity(138U);
    msg.setDestination(3899U);
    msg.setDestinationEntity(151U);
    msg.actions.assign("CRSOZHTAJVCAHSDVKIZYWEAZQNUIXSDFBPPWOEVLUQUPEDSGUGSFLFVIDUTKCEQGYRJIMDRDJWCVXUJPBLLGLNRTOGCKXLLGXYRBMFOBMVKJ");

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
    msg.setTimeStamp(0.836736211548);
    msg.setSource(17387U);
    msg.setSourceEntity(94U);
    msg.setDestination(39825U);
    msg.setDestinationEntity(168U);
    msg.actions.assign("ZPJJFGAMZBKWEAGNEVTWOHIRONJXTTRQTEHGANOCUBVBGIRZDYQMLGSZHMLEFJNQSYLDZMDMYMEGFJGDHRLUROYKHCSXVUYILVLTCFKWXCOUUQYBOLIPLGVXAFBXMHQXHUDPAKGBDQPVEQRUPCHZUKAVMIJPWXJRWUZWASJZPFVKBLLBXVNQCVGOXUANKEKJFROTCIBPE");

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
    msg.setTimeStamp(0.23944291832);
    msg.setSource(40797U);
    msg.setSourceEntity(248U);
    msg.setDestination(53101U);
    msg.setDestinationEntity(231U);
    msg.actions.assign("PEVMNXMNTEXDLDOVLWAABHEVR");

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
    msg.setTimeStamp(0.970861034611);
    msg.setSource(26495U);
    msg.setSourceEntity(84U);
    msg.setDestination(4180U);
    msg.setDestinationEntity(137U);
    msg.button = 166U;
    msg.value = 64U;

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
    msg.setTimeStamp(0.776331224243);
    msg.setSource(42179U);
    msg.setSourceEntity(241U);
    msg.setDestination(46934U);
    msg.setDestinationEntity(109U);
    msg.button = 29U;
    msg.value = 189U;

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
    msg.setTimeStamp(0.715329330451);
    msg.setSource(17206U);
    msg.setSourceEntity(12U);
    msg.setDestination(5422U);
    msg.setDestinationEntity(237U);
    msg.button = 68U;
    msg.value = 100U;

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
    msg.setTimeStamp(0.32280334254);
    msg.setSource(22463U);
    msg.setSourceEntity(96U);
    msg.setDestination(15570U);
    msg.setDestinationEntity(230U);
    msg.op = 178U;
    msg.text.assign("EWQFBXJUXYMCPWUVOEOFOIVNKDOZNJWGZMKKWUFZXKQSLISGX");

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
    msg.setTimeStamp(0.308409688878);
    msg.setSource(46331U);
    msg.setSourceEntity(183U);
    msg.setDestination(19137U);
    msg.setDestinationEntity(210U);
    msg.op = 122U;
    msg.text.assign("KSWMDKFHKMHMYCVWLECSKACNORQKPBLTJWTAVJXGPIERMBOHPSJVAASFOUQYLCTUIABVYHCYTXHOLCZLDJQPMRUZCONNHGIBPSSWDNYYGOUJDBOFZGBIEFAURSZGIUNXTXIIVRWN");

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
    msg.setTimeStamp(0.0416691047804);
    msg.setSource(30028U);
    msg.setSourceEntity(233U);
    msg.setDestination(50242U);
    msg.setDestinationEntity(1U);
    msg.op = 35U;
    msg.text.assign("XCXPWOZGYAFPKDVISJDJFSDCUZKXZKLTPNFQOWKBWXJVQERLPVLFIROUZFZLQVIVIIG");

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
    msg.setTimeStamp(0.0575677436851);
    msg.setSource(20973U);
    msg.setSourceEntity(54U);
    msg.setDestination(21191U);
    msg.setDestinationEntity(53U);
    msg.op = 54U;
    msg.time_remain = 0.964174310791;
    msg.sched_time = 0.744509313412;

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
    msg.setTimeStamp(0.0239799380396);
    msg.setSource(33978U);
    msg.setSourceEntity(121U);
    msg.setDestination(49788U);
    msg.setDestinationEntity(226U);
    msg.op = 6U;
    msg.time_remain = 0.719509936669;
    msg.sched_time = 0.831040685711;

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
    msg.setTimeStamp(0.989334181219);
    msg.setSource(12486U);
    msg.setSourceEntity(154U);
    msg.setDestination(31657U);
    msg.setDestinationEntity(147U);
    msg.op = 18U;
    msg.time_remain = 0.940032529071;
    msg.sched_time = 0.4070252627;

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
    msg.setTimeStamp(0.0881855391394);
    msg.setSource(62679U);
    msg.setSourceEntity(233U);
    msg.setDestination(42251U);
    msg.setDestinationEntity(254U);
    msg.name.assign("GWDOUYXOWXJHCEJSHTILULYAPULMEGGWLQVRQYYOQDKLPAAAVSNFWOSGOQVNTWNKMXJTHJHTFXAPITBOLBUHIDWSCQZVEDBHTYDVIPRIMUNAKFQODQZJWZEDKGHGYSXRFFSBQFICHHXNCMCPDMYKTMQIFOSVZJLBKXEEDICJCGJCKUMKSNRWNVEDCZBTZRPURERAAFKPGRWAOZSJFPRSZNYZTXEWLVBBLK");
    msg.op = 189U;
    msg.sched_time = 0.142904505855;

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
    msg.setTimeStamp(0.565930164306);
    msg.setSource(58726U);
    msg.setSourceEntity(129U);
    msg.setDestination(52995U);
    msg.setDestinationEntity(250U);
    msg.name.assign("UHXQMKAQCLDCAUZMGRLACSKYTLMLFMEGUHTVUGBAVNJIMCWOTNKYCPTITBLOENLNZBYIGRSEDOXBJWCNILRFDXUG");
    msg.op = 50U;
    msg.sched_time = 0.639967334504;

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
    msg.setTimeStamp(0.227135491597);
    msg.setSource(36018U);
    msg.setSourceEntity(7U);
    msg.setDestination(36171U);
    msg.setDestinationEntity(128U);
    msg.name.assign("HDZELYLEGKLIDLRQYOXFAJEZIPBINGYIJNLQUZEFDMAPIUNTOKBPHDVHNBTQHVJEJCDSACKVUMRXXOMTP");
    msg.op = 113U;
    msg.sched_time = 0.679612880529;

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
    msg.setTimeStamp(0.0154070055639);
    msg.setSource(35613U);
    msg.setSourceEntity(121U);
    msg.setDestination(41955U);
    msg.setDestinationEntity(76U);

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
    msg.setTimeStamp(0.111308758546);
    msg.setSource(47698U);
    msg.setSourceEntity(64U);
    msg.setDestination(11166U);
    msg.setDestinationEntity(76U);

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
    msg.setTimeStamp(0.81892414542);
    msg.setSource(48850U);
    msg.setSourceEntity(49U);
    msg.setDestination(39920U);
    msg.setDestinationEntity(160U);

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
    msg.setTimeStamp(0.718256992179);
    msg.setSource(40625U);
    msg.setSourceEntity(201U);
    msg.setDestination(47487U);
    msg.setDestinationEntity(227U);
    msg.name.assign("KHSHPJPYPVKORNMILVKDARYYXZQJWEOHQROOIVFYTHDTDKGBSTLZFSZBLUSBYSWCBDJNXHDEBQTECXFQBIANEIZLYNRQDBUCVORCQFQFATJZFGMKFREESUGCAOWUPJAGECOGGPTTISGPXAMLWQGUVCYS");
    msg.state = 44U;

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
    msg.setTimeStamp(0.723107562555);
    msg.setSource(42578U);
    msg.setSourceEntity(203U);
    msg.setDestination(7074U);
    msg.setDestinationEntity(186U);
    msg.name.assign("TRMBOGROXMEGETKWUXRPIFHYHQCBBEFCVXJNSZJZFLAVEURYEYVSUCBWYFWCODQCWTEZQKIWELZZGP");
    msg.state = 16U;

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
    msg.setTimeStamp(0.674822807444);
    msg.setSource(34276U);
    msg.setSourceEntity(69U);
    msg.setDestination(49769U);
    msg.setDestinationEntity(225U);
    msg.name.assign("BWNFXMIUWNPLRTHKCOQLNOCQZXJXMVPGDATPWWOFJQLLIQPPJRJUJSUXRZMJGOUDCVTSNFVGIOHBSAOYKRFILATKAFZSNXMFBGPTBKJTUMZVUWEKIEBIPWZYPCKGVX");
    msg.state = 240U;

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
    msg.setTimeStamp(0.788560914525);
    msg.setSource(26189U);
    msg.setSourceEntity(88U);
    msg.setDestination(45896U);
    msg.setDestinationEntity(64U);
    msg.name.assign("OCQKHJCAPUEAYHOFOXNSIFWGXIMOOCGRIHWNNWMTVRAVGGJMMZLXNGJGYGJFHDLWYKKURLSYZOGIYFHMUBSMQKTTCJINPHCEBOCSKDSVIQPQUQZLQUWPWWRZTHGDNBASYBKPNBISVMIUDTUCOGQKLJHFRPTAWDTPZKLJAZEECKDCRLVJTYKRXFVDXRFEZFABTQRHNIBAOJLY");
    msg.value = 104U;

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
    msg.setTimeStamp(0.53465291905);
    msg.setSource(31338U);
    msg.setSourceEntity(198U);
    msg.setDestination(58484U);
    msg.setDestinationEntity(101U);
    msg.name.assign("LZHAFFEKKXYYDHOWBJQNJQHHWPVIRPUJQGQNOCBDNXSXCDDYEQACQWRIPTRLHVOBTZGYFELBUSNMWONATZCDDVGQQNPUMKVSWOWPCGSRVXUSZNCLVMYMBHTZJWVUGBHIABAJKUEZEFI");
    msg.value = 86U;

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
    msg.setTimeStamp(0.556820016002);
    msg.setSource(25097U);
    msg.setSourceEntity(167U);
    msg.setDestination(36444U);
    msg.setDestinationEntity(181U);
    msg.name.assign("WZEKVYPWNRRXHSVKXBMMCYDOFXOILSYSARAYJIHQEPCYBXSJWWDMEQECQRNCJAXUMFUGLVUWHCLFYOPBFXBTIMFDNFRTLHPVHOHCTZDRSDLEIPBLQRJGBCKSFSSMXZQDBALZKFNFEXJGOENHKGWVUZJVJUMKOBTXLDENATNIVJCWTQAYISTUTRPAKOWDACIQYKRQNHKZUOGUBOYHGGSPQFXZYVBINGEAZU");
    msg.value = 114U;

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
    msg.setTimeStamp(0.969798285005);
    msg.setSource(6785U);
    msg.setSourceEntity(51U);
    msg.setDestination(31225U);
    msg.setDestinationEntity(9U);
    msg.name.assign("TKVEFMQXJVNYTDKQRZNRONWBKREGVSCGXZPYYWGKSYFHIAVRQMRXOYMZHCOIDWBUXBEFNBKSGAFGPMNBUGGKVVLPBXKRLJLIQZXXIDOMOTPENPRJCLIYJTWJUHVCESEKWDGNXTMIBDOTQANIMAHZGRODGVZUKMVOSFIHCBDTE");

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
    msg.setTimeStamp(0.937512355791);
    msg.setSource(45728U);
    msg.setSourceEntity(75U);
    msg.setDestination(48011U);
    msg.setDestinationEntity(244U);
    msg.name.assign("DXIASTLGOTQMGONVKBMFEORVQEUHDVYNBBADJKZYPYYYRVSJNBWEMWBPOLPFVBZRGQZIWJDYSZJNMCYHJOPEKLUCSHKOTTXTNJTDIMGVLFWWXHKZLRSRKMGBSSQQHPFTIFXTUFX");

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
    msg.setTimeStamp(0.0761030920928);
    msg.setSource(61448U);
    msg.setSourceEntity(172U);
    msg.setDestination(29367U);
    msg.setDestinationEntity(212U);
    msg.name.assign("GHQOTMJSGVPUBOYZHNOEXRHUPCVRCUROOPUJONDRVQLDEGSKXGKAFEMFKMKLSGZDRXWOYOBTLYXHWYZTTULKTZZLVCQZQFQWZAGPBJOIJIKJTEHGCKDSUCFNDHXYFCWQLNRCYMCSYPQLVIQABRXJMNUDDPIIIBBKWFYAYRWVXM");

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
    msg.setTimeStamp(0.984296485061);
    msg.setSource(35751U);
    msg.setSourceEntity(178U);
    msg.setDestination(5153U);
    msg.setDestinationEntity(251U);
    msg.name.assign("VTGUHGSFVVNUZOCLCGDYIZWQHEXLLZVFANZSRFFMSAEEKJTQHIDCWOWFJIJFEEUBHYXMQYTZALKOVUJKNXRNDENEZQLTIPGDWQXSHPIYYEDGBXQLVZZTPTTDDOZYTKBUJGORCOSRMCPQOMOYBFDCNDZAHERWQUBVHTIWCHAPKNICUBBPLAPXBFVYYVAIPSBMTKMUESRXMNJKGFVSAFCKHLGJDJQJGMPXAKWSULRUNIGWXSWNORAHYWQLMR");
    msg.value = 112U;

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
    msg.setTimeStamp(0.777050243844);
    msg.setSource(52379U);
    msg.setSourceEntity(205U);
    msg.setDestination(50509U);
    msg.setDestinationEntity(174U);
    msg.name.assign("ANXRXGXZFVWJEYCVKFIFBHSKLGNBWSWPMPZZSUZNMBWKKVYTSOWCNKAESIUOHBBVMBMJBX");
    msg.value = 166U;

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
    msg.setTimeStamp(0.146438375035);
    msg.setSource(27393U);
    msg.setSourceEntity(189U);
    msg.setDestination(46377U);
    msg.setDestinationEntity(146U);
    msg.name.assign("MEBAGOQZGBLEPAQHIYRNKDJAMVWNTZHLLEPLVRWUDYBWKZEMFNVZPJXXYVUFONTPOXRDCOQCOAFEDJNJIFUYOPRKPXGQENFXYYRSVHAKUHNIKELDCULQIHAAVPCWFPFEMFMGVKLGSONDZCMBJIRVXUMTPFQYSHSDRBWMLJKTASQSIJETLXRTQ");
    msg.value = 92U;

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
    msg.setTimeStamp(0.776893667699);
    msg.setSource(57131U);
    msg.setSourceEntity(120U);
    msg.setDestination(48227U);
    msg.setDestinationEntity(251U);
    msg.id = 87U;
    msg.period = 2654296343U;
    msg.duty_cycle = 2838779517U;

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
    msg.setTimeStamp(0.860187591359);
    msg.setSource(27564U);
    msg.setSourceEntity(248U);
    msg.setDestination(40580U);
    msg.setDestinationEntity(211U);
    msg.id = 37U;
    msg.period = 3183072555U;
    msg.duty_cycle = 2477335876U;

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
    msg.setTimeStamp(0.563988706057);
    msg.setSource(15470U);
    msg.setSourceEntity(22U);
    msg.setDestination(38398U);
    msg.setDestinationEntity(253U);
    msg.id = 242U;
    msg.period = 2182560782U;
    msg.duty_cycle = 4264113217U;

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
    msg.setTimeStamp(0.733701082558);
    msg.setSource(13080U);
    msg.setSourceEntity(88U);
    msg.setDestination(9871U);
    msg.setDestinationEntity(47U);
    msg.id = 135U;
    msg.period = 2268599121U;
    msg.duty_cycle = 2233655489U;

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
    msg.setTimeStamp(0.769944242091);
    msg.setSource(55347U);
    msg.setSourceEntity(71U);
    msg.setDestination(37269U);
    msg.setDestinationEntity(168U);
    msg.id = 151U;
    msg.period = 444612363U;
    msg.duty_cycle = 3479432292U;

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
    msg.setTimeStamp(0.348578827921);
    msg.setSource(49517U);
    msg.setSourceEntity(25U);
    msg.setDestination(29241U);
    msg.setDestinationEntity(171U);
    msg.id = 242U;
    msg.period = 3861480255U;
    msg.duty_cycle = 2661662345U;

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
    msg.setTimeStamp(0.260408985029);
    msg.setSource(30956U);
    msg.setSourceEntity(2U);
    msg.setDestination(46786U);
    msg.setDestinationEntity(179U);
    msg.lat = 0.586528281209;
    msg.lon = 0.846797287378;
    msg.height = 0.018643932807;
    msg.x = 0.617077267732;
    msg.y = 0.00840161621558;
    msg.z = 0.498774452967;
    msg.phi = 0.198875674111;
    msg.theta = 0.895601963849;
    msg.psi = 0.524799531216;
    msg.u = 0.53322744722;
    msg.v = 0.265562537629;
    msg.w = 0.568812501132;
    msg.vx = 0.368810634729;
    msg.vy = 0.603440933234;
    msg.vz = 0.216227593584;
    msg.p = 0.26249056223;
    msg.q = 0.584574294883;
    msg.r = 0.731338107097;
    msg.depth = 0.874362393128;
    msg.alt = 0.988944691267;

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
    msg.setTimeStamp(0.247090055259);
    msg.setSource(33741U);
    msg.setSourceEntity(186U);
    msg.setDestination(35732U);
    msg.setDestinationEntity(192U);
    msg.lat = 0.207714895838;
    msg.lon = 0.519024215773;
    msg.height = 0.464257204337;
    msg.x = 0.745143287048;
    msg.y = 0.127883112026;
    msg.z = 0.154004947277;
    msg.phi = 0.754501321471;
    msg.theta = 0.572638006654;
    msg.psi = 0.267887215994;
    msg.u = 0.791970498104;
    msg.v = 0.850587107707;
    msg.w = 0.81974420447;
    msg.vx = 0.858443367103;
    msg.vy = 0.074478767375;
    msg.vz = 0.0884906524463;
    msg.p = 0.839331993336;
    msg.q = 0.663418153149;
    msg.r = 0.333465944229;
    msg.depth = 0.711658469464;
    msg.alt = 0.359918777689;

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
    msg.setTimeStamp(0.536672750343);
    msg.setSource(2668U);
    msg.setSourceEntity(89U);
    msg.setDestination(30113U);
    msg.setDestinationEntity(43U);
    msg.lat = 0.138993143;
    msg.lon = 0.698317434529;
    msg.height = 0.272016894391;
    msg.x = 0.842505509277;
    msg.y = 0.847002438972;
    msg.z = 0.659673985348;
    msg.phi = 0.711297297843;
    msg.theta = 0.733611667894;
    msg.psi = 0.898285463981;
    msg.u = 0.428959507595;
    msg.v = 0.0360546609585;
    msg.w = 0.132801959167;
    msg.vx = 0.59753169838;
    msg.vy = 0.751419786944;
    msg.vz = 0.422479844686;
    msg.p = 0.650968905381;
    msg.q = 0.0858261117171;
    msg.r = 0.104882219361;
    msg.depth = 0.465039341093;
    msg.alt = 0.353829864047;

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
    msg.setTimeStamp(0.474506592087);
    msg.setSource(6537U);
    msg.setSourceEntity(213U);
    msg.setDestination(47833U);
    msg.setDestinationEntity(196U);
    msg.x = 0.992168499273;
    msg.y = 0.054529874263;
    msg.z = 0.328271928186;

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
    msg.setTimeStamp(0.501300904757);
    msg.setSource(42351U);
    msg.setSourceEntity(87U);
    msg.setDestination(65350U);
    msg.setDestinationEntity(3U);
    msg.x = 0.441194415997;
    msg.y = 0.0505183461439;
    msg.z = 0.774670338425;

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
    msg.setTimeStamp(0.123265189754);
    msg.setSource(48608U);
    msg.setSourceEntity(118U);
    msg.setDestination(20036U);
    msg.setDestinationEntity(138U);
    msg.x = 0.826354303791;
    msg.y = 0.825845505884;
    msg.z = 0.0860283795071;

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
    msg.setTimeStamp(0.617997441739);
    msg.setSource(57418U);
    msg.setSourceEntity(158U);
    msg.setDestination(24953U);
    msg.setDestinationEntity(219U);
    msg.value = 0.41388192111;

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
    msg.setTimeStamp(0.424585056173);
    msg.setSource(33533U);
    msg.setSourceEntity(134U);
    msg.setDestination(14801U);
    msg.setDestinationEntity(218U);
    msg.value = 0.0246333580456;

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
    msg.setTimeStamp(0.271016876511);
    msg.setSource(58580U);
    msg.setSourceEntity(3U);
    msg.setDestination(29575U);
    msg.setDestinationEntity(217U);
    msg.value = 0.930408676892;

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
    msg.setTimeStamp(0.721696122562);
    msg.setSource(59052U);
    msg.setSourceEntity(14U);
    msg.setDestination(48764U);
    msg.setDestinationEntity(178U);
    msg.value = 0.738414711443;

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
    msg.setTimeStamp(0.677965533891);
    msg.setSource(16035U);
    msg.setSourceEntity(109U);
    msg.setDestination(40394U);
    msg.setDestinationEntity(95U);
    msg.value = 0.917897961081;

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
    msg.setTimeStamp(0.483682478702);
    msg.setSource(14040U);
    msg.setSourceEntity(209U);
    msg.setDestination(50823U);
    msg.setDestinationEntity(73U);
    msg.value = 0.646297423835;

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
    msg.setTimeStamp(0.54574535423);
    msg.setSource(11388U);
    msg.setSourceEntity(127U);
    msg.setDestination(50129U);
    msg.setDestinationEntity(39U);
    msg.x = 0.410046873152;
    msg.y = 0.528985363553;
    msg.z = 0.077578599168;
    msg.phi = 0.203800841795;
    msg.theta = 0.331843884617;
    msg.psi = 0.666643300391;
    msg.p = 0.0705017276672;
    msg.q = 0.477922079412;
    msg.r = 0.416775279419;
    msg.u = 0.498927893207;
    msg.v = 0.676735905308;
    msg.w = 0.827805852511;
    msg.bias_psi = 0.422682169481;
    msg.bias_r = 0.338635230364;

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
    msg.setTimeStamp(0.529246998703);
    msg.setSource(13872U);
    msg.setSourceEntity(162U);
    msg.setDestination(15113U);
    msg.setDestinationEntity(201U);
    msg.x = 0.159240174716;
    msg.y = 0.670533033321;
    msg.z = 0.89190505573;
    msg.phi = 0.660623847925;
    msg.theta = 0.834510975198;
    msg.psi = 0.487187606219;
    msg.p = 0.894758343393;
    msg.q = 0.702947265656;
    msg.r = 0.428646110114;
    msg.u = 0.745954865081;
    msg.v = 0.692092994481;
    msg.w = 0.0944316968707;
    msg.bias_psi = 0.235262467235;
    msg.bias_r = 0.504856908035;

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
    msg.setTimeStamp(0.102333683634);
    msg.setSource(38634U);
    msg.setSourceEntity(51U);
    msg.setDestination(5375U);
    msg.setDestinationEntity(177U);
    msg.x = 0.256812295819;
    msg.y = 0.195431489247;
    msg.z = 0.17768503785;
    msg.phi = 0.276507051661;
    msg.theta = 0.941767147531;
    msg.psi = 0.217887037511;
    msg.p = 0.709505756017;
    msg.q = 0.136678351355;
    msg.r = 0.307275658599;
    msg.u = 0.124340461246;
    msg.v = 0.696398721514;
    msg.w = 0.652996060729;
    msg.bias_psi = 0.469982760315;
    msg.bias_r = 0.156219023972;

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
    msg.setTimeStamp(0.780611110398);
    msg.setSource(37001U);
    msg.setSourceEntity(75U);
    msg.setDestination(33409U);
    msg.setDestinationEntity(214U);
    msg.bias_psi = 0.995609647071;
    msg.bias_r = 0.133000194369;
    msg.cog = 0.395042091215;
    msg.cyaw = 0.628461022771;
    msg.gps_rej_level = 0.464144426981;
    msg.lbl_rej_level = 0.772867896931;
    msg.custom_x = 0.567881543467;
    msg.custom_y = 0.881151985529;
    msg.custom_z = 0.125959288258;

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
    msg.setTimeStamp(0.546187771412);
    msg.setSource(62301U);
    msg.setSourceEntity(155U);
    msg.setDestination(19140U);
    msg.setDestinationEntity(79U);
    msg.bias_psi = 0.0934440663366;
    msg.bias_r = 0.0761910452045;
    msg.cog = 0.407318166642;
    msg.cyaw = 0.998848351474;
    msg.gps_rej_level = 0.607764988791;
    msg.lbl_rej_level = 0.510296290901;
    msg.custom_x = 0.864910542645;
    msg.custom_y = 0.877290585069;
    msg.custom_z = 0.531489574456;

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
    msg.setTimeStamp(0.114763116703);
    msg.setSource(64355U);
    msg.setSourceEntity(215U);
    msg.setDestination(43603U);
    msg.setDestinationEntity(168U);
    msg.bias_psi = 0.450049430113;
    msg.bias_r = 0.342451619903;
    msg.cog = 0.0632832741287;
    msg.cyaw = 0.219356895314;
    msg.gps_rej_level = 0.809916982317;
    msg.lbl_rej_level = 0.712038225263;
    msg.custom_x = 0.635478425742;
    msg.custom_y = 0.36025270619;
    msg.custom_z = 0.254272220284;

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
    msg.setTimeStamp(0.0529547076103);
    msg.setSource(20383U);
    msg.setSourceEntity(123U);
    msg.setDestination(47383U);
    msg.setDestinationEntity(12U);
    msg.utc_time = 0.725400034312;
    msg.reason = 1U;

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
    msg.setTimeStamp(0.0311096589696);
    msg.setSource(35548U);
    msg.setSourceEntity(22U);
    msg.setDestination(17676U);
    msg.setDestinationEntity(87U);
    msg.utc_time = 0.320244730815;
    msg.reason = 85U;

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
    msg.setTimeStamp(0.932704869039);
    msg.setSource(24672U);
    msg.setSourceEntity(85U);
    msg.setDestination(7298U);
    msg.setDestinationEntity(241U);
    msg.utc_time = 0.898532824736;
    msg.reason = 100U;

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
    msg.setTimeStamp(0.091069586776);
    msg.setSource(26095U);
    msg.setSourceEntity(220U);
    msg.setDestination(12675U);
    msg.setDestinationEntity(168U);
    msg.id = 210U;
    msg.range = 0.113431047691;
    msg.acceptance = 185U;

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
    msg.setTimeStamp(0.651628639759);
    msg.setSource(32321U);
    msg.setSourceEntity(84U);
    msg.setDestination(13515U);
    msg.setDestinationEntity(53U);
    msg.id = 97U;
    msg.range = 0.157840291778;
    msg.acceptance = 91U;

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
    msg.setTimeStamp(0.560607407142);
    msg.setSource(28855U);
    msg.setSourceEntity(213U);
    msg.setDestination(44819U);
    msg.setDestinationEntity(189U);
    msg.id = 11U;
    msg.range = 0.437737467074;
    msg.acceptance = 31U;

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
    msg.setTimeStamp(0.0369541565294);
    msg.setSource(7778U);
    msg.setSourceEntity(192U);
    msg.setDestination(39844U);
    msg.setDestinationEntity(32U);
    msg.type = 25U;
    msg.reason = 83U;
    msg.value = 0.953183378074;
    msg.timestep = 0.790785189158;

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
    msg.setTimeStamp(0.904413153886);
    msg.setSource(35992U);
    msg.setSourceEntity(213U);
    msg.setDestination(41103U);
    msg.setDestinationEntity(148U);
    msg.type = 72U;
    msg.reason = 99U;
    msg.value = 0.423258254791;
    msg.timestep = 0.575131103185;

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
    msg.setTimeStamp(0.902911460183);
    msg.setSource(27148U);
    msg.setSourceEntity(198U);
    msg.setDestination(28655U);
    msg.setDestinationEntity(246U);
    msg.type = 12U;
    msg.reason = 5U;
    msg.value = 0.364738591026;
    msg.timestep = 0.98356159545;

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
    msg.setTimeStamp(0.0675887194111);
    msg.setSource(11364U);
    msg.setSourceEntity(205U);
    msg.setDestination(16440U);
    msg.setDestinationEntity(24U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("JSNFXPOLOSRKJPXKHQQBOOVVEGUYMAEBYJGAJDMEVCRHIHCNKPQVLWFQIASDAPKTIWHJXWSHFGOPCTDWXCGIJCVDLEMKMKLACTYQYMJWBXUNWKADZGLLEMYBZIEAYAZRISQMFILVTUOXMHQCOORMNRNHKUCOXYGITKIZNUZSRCWPTPFHZJBZSTTNVUBVDFTFQGGWINDFD");
    tmp_msg_0.lat = 0.0118123721739;
    tmp_msg_0.lon = 0.907993582459;
    tmp_msg_0.depth = 0.135968339361;
    tmp_msg_0.query_channel = 96U;
    tmp_msg_0.reply_channel = 6U;
    tmp_msg_0.transponder_delay = 61U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.493577647335;
    msg.y = 0.590847588093;
    msg.var_x = 0.069567678468;
    msg.var_y = 0.359687678049;
    msg.distance = 0.619294904367;

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
    msg.setTimeStamp(0.504481174841);
    msg.setSource(36809U);
    msg.setSourceEntity(8U);
    msg.setDestination(46683U);
    msg.setDestinationEntity(92U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("JNHYGGPPJDTPTYCNFRFQKIDLXSYQVDTISWQKNIDCZJXMSFYZTIGPNKLLSAEPNJUHNGAPILUEKYXWVBWEVOXXQMZBCIFLSFQUWJKNAMHXFLKVMJPZDDBRFUJVCPAOHVMYYQGDJMENRDRYBWUBRLIBHCOAHHEMBDAFWGOHOBKWZSIGLXMEMDQLCIUKHCOQRFSJFPGCHUJRTGZYXAUGOZCSUERTUKWRACWZSBEVAN");
    tmp_msg_0.lat = 0.683856990287;
    tmp_msg_0.lon = 0.786388177278;
    tmp_msg_0.depth = 0.834791436827;
    tmp_msg_0.query_channel = 172U;
    tmp_msg_0.reply_channel = 80U;
    tmp_msg_0.transponder_delay = 35U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.846041438741;
    msg.y = 0.409221745497;
    msg.var_x = 0.228910092463;
    msg.var_y = 0.696673081842;
    msg.distance = 0.203686330334;

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
    msg.setTimeStamp(0.320324201099);
    msg.setSource(62809U);
    msg.setSourceEntity(30U);
    msg.setDestination(17007U);
    msg.setDestinationEntity(234U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("LOJSOMKSGGDOEGRLUMUDJMXATMYCONEOBARPWGJZYRCJCCTOODPBQTUPJXQIIFBKDSVRNYFQYJMIAAQLWIBHHUQEGXSNKXPADAMZUZMVFHVDLPGHTUNZTWHWXATLVCVXXNKSBFPTFSWWFURCKYDMYNVCNJEYMZJGODGADLSASKFTQBSQWBDBWHRXKCRVZVFEFPLWIJKNHIEIYNZKQOIEKFIZHOBXZTNLRYEZEUQQREIUXVGMPSVJCC");
    tmp_msg_0.lat = 0.614541588621;
    tmp_msg_0.lon = 0.915150700466;
    tmp_msg_0.depth = 0.541855246969;
    tmp_msg_0.query_channel = 225U;
    tmp_msg_0.reply_channel = 52U;
    tmp_msg_0.transponder_delay = 228U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.221914614035;
    msg.y = 0.539726244971;
    msg.var_x = 0.781312463959;
    msg.var_y = 0.475383020342;
    msg.distance = 0.812479471963;

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
    msg.setTimeStamp(0.424957518743);
    msg.setSource(20660U);
    msg.setSourceEntity(252U);
    msg.setDestination(10579U);
    msg.setDestinationEntity(239U);
    msg.state = 153U;

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
    msg.setTimeStamp(0.701103871847);
    msg.setSource(13957U);
    msg.setSourceEntity(217U);
    msg.setDestination(45165U);
    msg.setDestinationEntity(55U);
    msg.state = 9U;

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
    msg.setTimeStamp(0.0780165935258);
    msg.setSource(34762U);
    msg.setSourceEntity(249U);
    msg.setDestination(45847U);
    msg.setDestinationEntity(230U);
    msg.state = 118U;

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
    msg.setTimeStamp(0.541251457247);
    msg.setSource(18601U);
    msg.setSourceEntity(168U);
    msg.setDestination(60341U);
    msg.setDestinationEntity(216U);
    msg.x = 0.356752401795;
    msg.y = 0.00947191351667;
    msg.z = 0.249520558786;

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
    msg.setTimeStamp(0.972119098312);
    msg.setSource(65465U);
    msg.setSourceEntity(133U);
    msg.setDestination(16648U);
    msg.setDestinationEntity(36U);
    msg.x = 0.985171109707;
    msg.y = 0.919878627396;
    msg.z = 0.364222102786;

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
    msg.setTimeStamp(0.65520679645);
    msg.setSource(24341U);
    msg.setSourceEntity(210U);
    msg.setDestination(2086U);
    msg.setDestinationEntity(33U);
    msg.x = 0.0827528265055;
    msg.y = 0.966066984069;
    msg.z = 0.0712882453129;

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
    msg.setTimeStamp(0.829003986283);
    msg.setSource(18130U);
    msg.setSourceEntity(154U);
    msg.setDestination(43389U);
    msg.setDestinationEntity(203U);
    msg.va = 0.173989502081;
    msg.aoa = 0.0279213650433;
    msg.ssa = 0.422471822972;

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
    msg.setTimeStamp(0.726487384827);
    msg.setSource(59371U);
    msg.setSourceEntity(194U);
    msg.setDestination(48306U);
    msg.setDestinationEntity(24U);
    msg.va = 0.0461532371859;
    msg.aoa = 0.30140227007;
    msg.ssa = 0.172508691713;

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
    msg.setTimeStamp(0.364290851299);
    msg.setSource(41018U);
    msg.setSourceEntity(240U);
    msg.setDestination(63207U);
    msg.setDestinationEntity(225U);
    msg.va = 0.442555367552;
    msg.aoa = 0.583224502249;
    msg.ssa = 0.237350083892;

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
    msg.setTimeStamp(0.505478046602);
    msg.setSource(39161U);
    msg.setSourceEntity(21U);
    msg.setDestination(41636U);
    msg.setDestinationEntity(140U);
    msg.mmsi = 4083445456U;
    msg.lon = 0.931865536551;
    msg.lat = 0.764738637151;
    msg.x = 0.884507223217;
    msg.y = 0.434645781276;
    msg.psi = 0.987090665252;
    msg.u = 0.26442367315;
    msg.v = 0.178778937668;
    msg.a = 0.304831702372;
    msg.b = 0.83274400104;
    msg.c = 0.602491687759;
    msg.d = 0.742383097955;

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
    msg.setTimeStamp(0.162969343052);
    msg.setSource(38193U);
    msg.setSourceEntity(216U);
    msg.setDestination(8452U);
    msg.setDestinationEntity(121U);
    msg.mmsi = 1822053996U;
    msg.lon = 0.748967771081;
    msg.lat = 0.38759232863;
    msg.x = 0.785836362361;
    msg.y = 0.221704481974;
    msg.psi = 0.0302588244771;
    msg.u = 0.575025936071;
    msg.v = 0.845533479074;
    msg.a = 0.809551723759;
    msg.b = 0.497572717783;
    msg.c = 0.63618118038;
    msg.d = 0.541437115916;

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
    msg.setTimeStamp(0.25709936901);
    msg.setSource(10781U);
    msg.setSourceEntity(1U);
    msg.setDestination(28098U);
    msg.setDestinationEntity(225U);
    msg.mmsi = 314316350U;
    msg.lon = 0.050382627662;
    msg.lat = 0.906283222603;
    msg.x = 0.578827607615;
    msg.y = 0.912741378342;
    msg.psi = 0.951331594792;
    msg.u = 0.920874323464;
    msg.v = 0.771320043296;
    msg.a = 0.924443918566;
    msg.b = 0.0066745833941;
    msg.c = 0.930712944395;
    msg.d = 0.40721787578;

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
    msg.setTimeStamp(0.425174064382);
    msg.setSource(9192U);
    msg.setSourceEntity(209U);
    msg.setDestination(51150U);
    msg.setDestinationEntity(95U);
    msg.value = 0.555654513692;

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
    msg.setTimeStamp(0.130276790314);
    msg.setSource(2450U);
    msg.setSourceEntity(168U);
    msg.setDestination(48389U);
    msg.setDestinationEntity(202U);
    msg.value = 0.301658294899;

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
    msg.setTimeStamp(0.022307337628);
    msg.setSource(19918U);
    msg.setSourceEntity(110U);
    msg.setDestination(29527U);
    msg.setDestinationEntity(181U);
    msg.value = 0.165272373267;

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
    msg.setTimeStamp(0.978390067401);
    msg.setSource(43248U);
    msg.setSourceEntity(40U);
    msg.setDestination(6602U);
    msg.setDestinationEntity(0U);
    msg.value = 0.91861159621;
    msg.z_units = 163U;

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
    msg.setTimeStamp(0.240632609193);
    msg.setSource(26790U);
    msg.setSourceEntity(95U);
    msg.setDestination(31524U);
    msg.setDestinationEntity(204U);
    msg.value = 0.837333570268;
    msg.z_units = 105U;

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
    msg.setTimeStamp(0.737253882782);
    msg.setSource(30077U);
    msg.setSourceEntity(0U);
    msg.setDestination(20887U);
    msg.setDestinationEntity(252U);
    msg.value = 0.247206243305;
    msg.z_units = 118U;

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
    msg.setTimeStamp(0.549784371154);
    msg.setSource(5696U);
    msg.setSourceEntity(14U);
    msg.setDestination(11650U);
    msg.setDestinationEntity(197U);
    msg.value = 0.455919996395;
    msg.speed_units = 21U;

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
    msg.setTimeStamp(0.508034197994);
    msg.setSource(62141U);
    msg.setSourceEntity(178U);
    msg.setDestination(54911U);
    msg.setDestinationEntity(166U);
    msg.value = 0.93124124173;
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
    msg.setTimeStamp(0.975983629106);
    msg.setSource(58243U);
    msg.setSourceEntity(76U);
    msg.setDestination(27127U);
    msg.setDestinationEntity(43U);
    msg.value = 0.775739436821;
    msg.speed_units = 84U;

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
    msg.setTimeStamp(0.864694452826);
    msg.setSource(735U);
    msg.setSourceEntity(170U);
    msg.setDestination(40387U);
    msg.setDestinationEntity(121U);
    msg.value = 0.743313368981;

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
    msg.setTimeStamp(0.405617240749);
    msg.setSource(14337U);
    msg.setSourceEntity(98U);
    msg.setDestination(25651U);
    msg.setDestinationEntity(33U);
    msg.value = 0.254333359872;

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
    msg.setTimeStamp(0.107435608357);
    msg.setSource(12487U);
    msg.setSourceEntity(50U);
    msg.setDestination(11150U);
    msg.setDestinationEntity(33U);
    msg.value = 0.392894899625;

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
    msg.setTimeStamp(0.445143404496);
    msg.setSource(56770U);
    msg.setSourceEntity(83U);
    msg.setDestination(61156U);
    msg.setDestinationEntity(200U);
    msg.value = 0.324815035097;

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
    msg.setTimeStamp(0.38664748131);
    msg.setSource(37566U);
    msg.setSourceEntity(21U);
    msg.setDestination(60687U);
    msg.setDestinationEntity(192U);
    msg.value = 0.0996338712938;

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
    msg.setTimeStamp(0.540009624469);
    msg.setSource(49648U);
    msg.setSourceEntity(168U);
    msg.setDestination(21134U);
    msg.setDestinationEntity(176U);
    msg.value = 0.349356410993;

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
    msg.setTimeStamp(0.499919106674);
    msg.setSource(14377U);
    msg.setSourceEntity(36U);
    msg.setDestination(38455U);
    msg.setDestinationEntity(37U);
    msg.value = 0.94291796619;

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
    msg.setTimeStamp(0.8333747946);
    msg.setSource(26883U);
    msg.setSourceEntity(115U);
    msg.setDestination(49054U);
    msg.setDestinationEntity(109U);
    msg.value = 0.50464388404;

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
    msg.setTimeStamp(0.320134801516);
    msg.setSource(57814U);
    msg.setSourceEntity(123U);
    msg.setDestination(60448U);
    msg.setDestinationEntity(36U);
    msg.value = 0.0551204746638;

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
    msg.setTimeStamp(0.220249688175);
    msg.setSource(61062U);
    msg.setSourceEntity(195U);
    msg.setDestination(15526U);
    msg.setDestinationEntity(40U);
    msg.path_ref = 1809736160U;
    msg.start_lat = 0.813011411747;
    msg.start_lon = 0.835102669632;
    msg.start_z = 0.94850349111;
    msg.start_z_units = 136U;
    msg.end_lat = 0.268828319353;
    msg.end_lon = 0.439547646981;
    msg.end_z = 0.937443412096;
    msg.end_z_units = 219U;
    msg.speed = 0.89621528853;
    msg.speed_units = 244U;
    msg.lradius = 0.875414043135;
    msg.flags = 40U;

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
    msg.setTimeStamp(0.578695655556);
    msg.setSource(14636U);
    msg.setSourceEntity(235U);
    msg.setDestination(254U);
    msg.setDestinationEntity(28U);
    msg.path_ref = 696200760U;
    msg.start_lat = 0.570181936373;
    msg.start_lon = 0.563295827669;
    msg.start_z = 0.893460289603;
    msg.start_z_units = 56U;
    msg.end_lat = 0.149306970163;
    msg.end_lon = 0.93768573491;
    msg.end_z = 0.731154731931;
    msg.end_z_units = 23U;
    msg.speed = 0.90896094161;
    msg.speed_units = 130U;
    msg.lradius = 0.862978847252;
    msg.flags = 10U;

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
    msg.setTimeStamp(0.113932813353);
    msg.setSource(30493U);
    msg.setSourceEntity(100U);
    msg.setDestination(17340U);
    msg.setDestinationEntity(250U);
    msg.path_ref = 534253383U;
    msg.start_lat = 0.192850880735;
    msg.start_lon = 0.317431452485;
    msg.start_z = 0.295785552478;
    msg.start_z_units = 105U;
    msg.end_lat = 0.105230059533;
    msg.end_lon = 0.764106998509;
    msg.end_z = 0.851696918901;
    msg.end_z_units = 235U;
    msg.speed = 0.0163790270313;
    msg.speed_units = 164U;
    msg.lradius = 0.0361415009371;
    msg.flags = 5U;

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
    msg.setTimeStamp(0.738757408664);
    msg.setSource(20137U);
    msg.setSourceEntity(30U);
    msg.setDestination(29652U);
    msg.setDestinationEntity(190U);
    msg.x = 0.52181841016;
    msg.y = 0.567394964007;
    msg.z = 0.673411894814;
    msg.k = 0.606451652331;
    msg.m = 0.523521857971;
    msg.n = 0.549916335888;
    msg.flags = 60U;

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
    msg.setTimeStamp(0.410219301881);
    msg.setSource(33320U);
    msg.setSourceEntity(163U);
    msg.setDestination(52072U);
    msg.setDestinationEntity(74U);
    msg.x = 0.777899927717;
    msg.y = 0.0961126822384;
    msg.z = 0.508117207416;
    msg.k = 0.170217579012;
    msg.m = 0.495091649608;
    msg.n = 0.245154057602;
    msg.flags = 235U;

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
    msg.setTimeStamp(0.514525325279);
    msg.setSource(4028U);
    msg.setSourceEntity(158U);
    msg.setDestination(18880U);
    msg.setDestinationEntity(62U);
    msg.x = 0.464172746247;
    msg.y = 0.846506935878;
    msg.z = 0.040754526256;
    msg.k = 0.389782598722;
    msg.m = 0.0698050204235;
    msg.n = 0.546772429571;
    msg.flags = 51U;

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
    msg.setTimeStamp(0.749473764034);
    msg.setSource(15945U);
    msg.setSourceEntity(20U);
    msg.setDestination(53155U);
    msg.setDestinationEntity(104U);
    msg.value = 0.706943004632;

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
    msg.setTimeStamp(0.427810028472);
    msg.setSource(10238U);
    msg.setSourceEntity(25U);
    msg.setDestination(47961U);
    msg.setDestinationEntity(223U);
    msg.value = 0.304880387149;

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
    msg.setTimeStamp(0.935975132584);
    msg.setSource(17547U);
    msg.setSourceEntity(254U);
    msg.setDestination(24517U);
    msg.setDestinationEntity(198U);
    msg.value = 0.382987662182;

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
    msg.setTimeStamp(0.616544876806);
    msg.setSource(58676U);
    msg.setSourceEntity(115U);
    msg.setDestination(54902U);
    msg.setDestinationEntity(49U);
    msg.u = 0.0175857035774;
    msg.v = 0.812244884485;
    msg.w = 0.745220885704;
    msg.p = 0.984692672628;
    msg.q = 0.932602884264;
    msg.r = 0.0136951144201;
    msg.flags = 120U;

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
    msg.setTimeStamp(0.430807701825);
    msg.setSource(53729U);
    msg.setSourceEntity(59U);
    msg.setDestination(30548U);
    msg.setDestinationEntity(197U);
    msg.u = 0.977965021612;
    msg.v = 0.459153547831;
    msg.w = 0.104620466098;
    msg.p = 0.396270649469;
    msg.q = 0.012403066707;
    msg.r = 0.900268844434;
    msg.flags = 76U;

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
    msg.setTimeStamp(0.780063647441);
    msg.setSource(61938U);
    msg.setSourceEntity(8U);
    msg.setDestination(18461U);
    msg.setDestinationEntity(51U);
    msg.u = 0.217128721429;
    msg.v = 0.710915349463;
    msg.w = 0.353183039606;
    msg.p = 0.988228137803;
    msg.q = 0.451283026109;
    msg.r = 0.580597946977;
    msg.flags = 150U;

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
    msg.setTimeStamp(0.86659931168);
    msg.setSource(22787U);
    msg.setSourceEntity(80U);
    msg.setDestination(24420U);
    msg.setDestinationEntity(244U);
    msg.path_ref = 2310682734U;
    msg.start_lat = 0.042176219193;
    msg.start_lon = 0.24028223469;
    msg.start_z = 0.357293648136;
    msg.start_z_units = 58U;
    msg.end_lat = 0.229465591042;
    msg.end_lon = 0.389750273481;
    msg.end_z = 0.906481526426;
    msg.end_z_units = 134U;
    msg.lradius = 0.876565572037;
    msg.flags = 144U;
    msg.x = 0.553856085804;
    msg.y = 0.319294726732;
    msg.z = 0.915981909949;
    msg.vx = 0.233036377986;
    msg.vy = 0.952775090563;
    msg.vz = 0.483216550682;
    msg.course_error = 0.806318143056;
    msg.eta = 22047U;

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
    msg.setTimeStamp(0.999047724324);
    msg.setSource(40495U);
    msg.setSourceEntity(234U);
    msg.setDestination(57037U);
    msg.setDestinationEntity(76U);
    msg.path_ref = 3177258912U;
    msg.start_lat = 0.524124168773;
    msg.start_lon = 0.281291641651;
    msg.start_z = 0.756335064809;
    msg.start_z_units = 80U;
    msg.end_lat = 0.979792996021;
    msg.end_lon = 0.382821944691;
    msg.end_z = 0.987043532328;
    msg.end_z_units = 52U;
    msg.lradius = 0.195929351976;
    msg.flags = 77U;
    msg.x = 0.0965432947107;
    msg.y = 0.2480686268;
    msg.z = 0.74631709911;
    msg.vx = 0.476133657964;
    msg.vy = 0.385898933959;
    msg.vz = 0.978180138163;
    msg.course_error = 0.458660469834;
    msg.eta = 54440U;

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
    msg.setTimeStamp(0.219852458362);
    msg.setSource(5128U);
    msg.setSourceEntity(76U);
    msg.setDestination(1163U);
    msg.setDestinationEntity(132U);
    msg.path_ref = 4061487368U;
    msg.start_lat = 0.200642493107;
    msg.start_lon = 0.0449028389625;
    msg.start_z = 0.336441933958;
    msg.start_z_units = 156U;
    msg.end_lat = 0.526811993781;
    msg.end_lon = 0.727251540161;
    msg.end_z = 0.67121693543;
    msg.end_z_units = 6U;
    msg.lradius = 0.949801326157;
    msg.flags = 67U;
    msg.x = 0.572774807505;
    msg.y = 0.44576699264;
    msg.z = 0.641559524799;
    msg.vx = 0.983082109092;
    msg.vy = 0.585413131412;
    msg.vz = 0.303832399113;
    msg.course_error = 0.553266916614;
    msg.eta = 40287U;

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
    msg.setTimeStamp(0.139507075326);
    msg.setSource(54829U);
    msg.setSourceEntity(250U);
    msg.setDestination(63242U);
    msg.setDestinationEntity(152U);
    msg.k = 0.888028551349;
    msg.m = 0.394824572051;
    msg.n = 0.022701830521;

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
    msg.setTimeStamp(0.946154952455);
    msg.setSource(8264U);
    msg.setSourceEntity(7U);
    msg.setDestination(54489U);
    msg.setDestinationEntity(149U);
    msg.k = 0.634910771247;
    msg.m = 0.027013681404;
    msg.n = 0.378729011101;

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
    msg.setTimeStamp(0.362706806143);
    msg.setSource(10345U);
    msg.setSourceEntity(2U);
    msg.setDestination(54162U);
    msg.setDestinationEntity(139U);
    msg.k = 0.683144158293;
    msg.m = 0.0526304511588;
    msg.n = 0.525068550579;

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
    msg.setTimeStamp(0.46878400511);
    msg.setSource(36416U);
    msg.setSourceEntity(226U);
    msg.setDestination(12347U);
    msg.setDestinationEntity(221U);
    msg.p = 0.369651057961;
    msg.i = 0.878802892395;
    msg.d = 0.190438402032;
    msg.a = 0.630101737325;

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
    msg.setTimeStamp(0.195103783403);
    msg.setSource(7457U);
    msg.setSourceEntity(203U);
    msg.setDestination(20278U);
    msg.setDestinationEntity(154U);
    msg.p = 0.295249340377;
    msg.i = 0.278935711014;
    msg.d = 0.90044772851;
    msg.a = 0.862185335077;

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
    msg.setTimeStamp(0.531953159264);
    msg.setSource(52873U);
    msg.setSourceEntity(67U);
    msg.setDestination(32155U);
    msg.setDestinationEntity(240U);
    msg.p = 0.597014349499;
    msg.i = 0.491401678936;
    msg.d = 0.0568512229331;
    msg.a = 0.426633964544;

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
    msg.setTimeStamp(0.188548822879);
    msg.setSource(5323U);
    msg.setSourceEntity(155U);
    msg.setDestination(5594U);
    msg.setDestinationEntity(37U);
    msg.op = 254U;

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
    msg.setTimeStamp(0.931046373952);
    msg.setSource(57849U);
    msg.setSourceEntity(56U);
    msg.setDestination(9354U);
    msg.setDestinationEntity(68U);
    msg.op = 80U;

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
    msg.setTimeStamp(0.560228137439);
    msg.setSource(57616U);
    msg.setSourceEntity(226U);
    msg.setDestination(7398U);
    msg.setDestinationEntity(32U);
    msg.op = 195U;

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
    msg.setTimeStamp(0.468853809445);
    msg.setSource(44868U);
    msg.setSourceEntity(36U);
    msg.setDestination(57913U);
    msg.setDestinationEntity(12U);
    msg.x = 0.173937043855;
    msg.y = 0.925574122432;
    msg.z = 0.971432755172;
    msg.vx = 0.0498378353135;
    msg.vy = 0.528757122604;
    msg.vz = 0.919592061445;
    msg.ax = 0.215556386328;
    msg.ay = 0.205984512883;
    msg.az = 0.0852495349897;
    msg.flags = 9698U;

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
    msg.setTimeStamp(0.433404704708);
    msg.setSource(29077U);
    msg.setSourceEntity(5U);
    msg.setDestination(49843U);
    msg.setDestinationEntity(184U);
    msg.x = 0.677084863617;
    msg.y = 0.67183808012;
    msg.z = 0.433476452143;
    msg.vx = 0.564076493671;
    msg.vy = 0.736390815398;
    msg.vz = 0.311286379806;
    msg.ax = 0.5593731349;
    msg.ay = 0.354963892296;
    msg.az = 0.281033086416;
    msg.flags = 10478U;

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
    msg.setTimeStamp(0.184920399625);
    msg.setSource(11561U);
    msg.setSourceEntity(204U);
    msg.setDestination(56641U);
    msg.setDestinationEntity(4U);
    msg.x = 0.0766153702604;
    msg.y = 0.910109913089;
    msg.z = 0.828551955489;
    msg.vx = 0.673275870817;
    msg.vy = 0.680775727366;
    msg.vz = 0.975750477341;
    msg.ax = 0.531079280396;
    msg.ay = 0.56625658991;
    msg.az = 0.682523371644;
    msg.flags = 47204U;

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
    msg.setTimeStamp(0.776998990316);
    msg.setSource(8401U);
    msg.setSourceEntity(79U);
    msg.setDestination(2023U);
    msg.setDestinationEntity(11U);
    msg.value = 0.253891808316;

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
    msg.setTimeStamp(0.335243808498);
    msg.setSource(60812U);
    msg.setSourceEntity(58U);
    msg.setDestination(2753U);
    msg.setDestinationEntity(112U);
    msg.value = 0.0354902941278;

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
    msg.setTimeStamp(0.98213875563);
    msg.setSource(14124U);
    msg.setSourceEntity(133U);
    msg.setDestination(39639U);
    msg.setDestinationEntity(195U);
    msg.value = 0.146797392704;

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
    msg.setTimeStamp(0.590151016091);
    msg.setSource(53202U);
    msg.setSourceEntity(204U);
    msg.setDestination(18121U);
    msg.setDestinationEntity(60U);
    msg.timeout = 15497U;
    msg.lat = 0.741274293824;
    msg.lon = 0.919748588297;
    msg.z = 0.0962775741716;
    msg.z_units = 2U;
    msg.speed = 0.463421235374;
    msg.speed_units = 61U;
    msg.roll = 0.691207367042;
    msg.pitch = 0.390993502495;
    msg.yaw = 0.552121489544;
    msg.custom.assign("ZIWFMQFPSABESNZQWBGKEQVRUPXBXFCIXCPQWDMZKOOFCYBVKXZGNMCUJTOVELZTGARMMNPDVEIIYKFUJANWIEWGTDJMFHSFXMCRSBIKFEQWJYDHKOHUGZCBVSLYPTTKAQTYPXCFZNVVONYCELEOHZAELKVQDLYQTNRLOUKDIADCJGWOJMHBMUHHRPNPTGHRSRSLBGADGWPIVA");

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
    msg.setTimeStamp(0.471036285459);
    msg.setSource(40335U);
    msg.setSourceEntity(134U);
    msg.setDestination(40465U);
    msg.setDestinationEntity(248U);
    msg.timeout = 63962U;
    msg.lat = 0.236929575894;
    msg.lon = 0.399240263017;
    msg.z = 0.882109626359;
    msg.z_units = 106U;
    msg.speed = 0.509667500592;
    msg.speed_units = 109U;
    msg.roll = 0.659668666044;
    msg.pitch = 0.140188130226;
    msg.yaw = 0.659872729556;
    msg.custom.assign("FTBGETSOCXGCZFLKLVWNBJNXVJAQMMZXZXPDJGKLTXSFKOCXITKGYJGNHTOZYQWPKUAQSJUFNHHQFFRFQWURVBNANQXGCMIWTYMUMSOWDDBCSULBERFGGNZGYXLVECUJEARZGRAOZNYMIIUVSLDNVPOHIRMVQDEEVKHFQATSJAWQTLJWXZRHYKKRODIOLTDYJHPYUNASEOHBVEFTPVKSCJYOLAKBDZXEMIUPCREBMBDCHCPPIP");

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
    msg.setTimeStamp(0.30774703689);
    msg.setSource(32623U);
    msg.setSourceEntity(107U);
    msg.setDestination(37774U);
    msg.setDestinationEntity(103U);
    msg.timeout = 17421U;
    msg.lat = 0.0861410389301;
    msg.lon = 0.928586281472;
    msg.z = 0.0729269364348;
    msg.z_units = 136U;
    msg.speed = 0.179925675094;
    msg.speed_units = 231U;
    msg.roll = 0.76002901573;
    msg.pitch = 0.844615234268;
    msg.yaw = 0.155029749041;
    msg.custom.assign("FILHIXBEHWYWXCCCLFLSENGHNFDEYUZMGPQAUSXIGLIGWONPCJCACKNOHRFOVTLBFUPSOSOIBVHCWJKJXPWTMQNDOLHJTDDRDJTEQYFXFTWSVUCBANPAYOZA");

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
    msg.setTimeStamp(0.391393235319);
    msg.setSource(2922U);
    msg.setSourceEntity(196U);
    msg.setDestination(20255U);
    msg.setDestinationEntity(219U);
    msg.timeout = 57249U;
    msg.lat = 0.671610081495;
    msg.lon = 0.48580272343;
    msg.z = 0.353857216071;
    msg.z_units = 188U;
    msg.speed = 0.314365555887;
    msg.speed_units = 56U;
    msg.duration = 57590U;
    msg.radius = 0.705734077768;
    msg.flags = 18U;
    msg.custom.assign("DGQAPNBQDLDVZPEJCQBOUMSOZAYAWKPKJTKLYIEYQVVDSRZXVBWFGVAOQRJZRUJGTQZIIECOIKIMDKLEUUTKXDOUFHQOCZFFRCINMYUDUJNCTDALPTPXRGKRTXHHHBNSGNXXUNBSPFVWDKATOMNMEWHNEHJLHEWGJYGBIUALYIWZNWBKYVTBMFUCVBBFGOWGPVQALICSMRRPRHJPXFLOM");

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
    msg.setTimeStamp(0.872447495553);
    msg.setSource(609U);
    msg.setSourceEntity(212U);
    msg.setDestination(21563U);
    msg.setDestinationEntity(87U);
    msg.timeout = 36546U;
    msg.lat = 0.402273354459;
    msg.lon = 0.809156125005;
    msg.z = 0.256439077051;
    msg.z_units = 170U;
    msg.speed = 0.685763814141;
    msg.speed_units = 184U;
    msg.duration = 33650U;
    msg.radius = 0.628777905226;
    msg.flags = 186U;
    msg.custom.assign("DZOOXOHDPIQCAEQHHXKYSE");

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
    msg.setTimeStamp(0.82212511471);
    msg.setSource(18341U);
    msg.setSourceEntity(235U);
    msg.setDestination(33567U);
    msg.setDestinationEntity(22U);
    msg.timeout = 12261U;
    msg.lat = 0.920029393036;
    msg.lon = 0.0756677516622;
    msg.z = 0.39358025921;
    msg.z_units = 60U;
    msg.speed = 0.0896996106126;
    msg.speed_units = 129U;
    msg.duration = 20920U;
    msg.radius = 0.513247154296;
    msg.flags = 159U;
    msg.custom.assign("CBABIIPANJDATPQKGWXUVYOZUETYHNGVSPTRZJEDNWCJDKOWEYAXLNIWIXNJBASUZFLYGOYTPUFBADCKQMDCXQQAKLDOUXGRSLCBPBRLLSWCVJAGPTCFFSFUBIVOKOJXXTRUGEMMMORNOZNIFVWSQTDFPMRDGBHNUMZHMVDYHSLGKNFQJEVKOUPTQZISMOFWBZIYYTBQ");

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
    msg.setTimeStamp(0.165072644863);
    msg.setSource(17764U);
    msg.setSourceEntity(45U);
    msg.setDestination(20947U);
    msg.setDestinationEntity(241U);
    msg.custom.assign("YOOZOWKPPDXALWFSKJKUEGUYOICBFEEIMDNWZGBHKCCZUVHQIWZFCUAWJDTLQYJTYAHSZCDTAMQIJXT");

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
    msg.setTimeStamp(0.0397174099091);
    msg.setSource(39350U);
    msg.setSourceEntity(33U);
    msg.setDestination(20237U);
    msg.setDestinationEntity(254U);
    msg.custom.assign("AWAMRPWZINVFKMHZVGEMXLISCPALKGHTRQOLXLYCKXMQQFTZVCNUCEZOUSGUAIHFYOPWEMXFJWJDYUQCURPTEVCDWVNMGBYNBCQNJJZYRHLFXLYABUEOLXDHHUGAKDLGX");

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
    msg.setTimeStamp(0.0471404218888);
    msg.setSource(32742U);
    msg.setSourceEntity(136U);
    msg.setDestination(15673U);
    msg.setDestinationEntity(63U);
    msg.custom.assign("LKVXMFKHPTMARSTTXYDNUWIXTEFBMPVBEBDYRJXHQYRGXL");

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
    msg.setTimeStamp(0.58915531349);
    msg.setSource(36961U);
    msg.setSourceEntity(95U);
    msg.setDestination(58351U);
    msg.setDestinationEntity(241U);
    msg.timeout = 39808U;
    msg.lat = 0.500489660677;
    msg.lon = 0.7732630367;
    msg.z = 0.961355177633;
    msg.z_units = 183U;
    msg.duration = 42732U;
    msg.speed = 0.983489473161;
    msg.speed_units = 241U;
    msg.type = 188U;
    msg.radius = 0.69240319014;
    msg.length = 0.0210047362621;
    msg.bearing = 0.312133945653;
    msg.direction = 179U;
    msg.custom.assign("BPWVYBAOXVEPCKNLXWIPMITDMNDSMQSTTDMTNXEWLQUKZOLAEPYRYIWVLZDXCEFXUPEHAJCMJWAKRDVXJGYDKQSJBQNTCRZYRRZEQWFFHBOHMMJXIIEKQVOPASIVERZRUCZFOKDSHQCHAGTFECQLWGFVKINOUIJGRBFVJXMOYGHKNZHUL");

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
    msg.setTimeStamp(0.205605448268);
    msg.setSource(31700U);
    msg.setSourceEntity(134U);
    msg.setDestination(51016U);
    msg.setDestinationEntity(142U);
    msg.timeout = 53745U;
    msg.lat = 0.979052235845;
    msg.lon = 0.0220475022186;
    msg.z = 0.765906807437;
    msg.z_units = 148U;
    msg.duration = 61225U;
    msg.speed = 0.176781105896;
    msg.speed_units = 196U;
    msg.type = 139U;
    msg.radius = 0.804135331471;
    msg.length = 0.75340668679;
    msg.bearing = 0.326864674003;
    msg.direction = 247U;
    msg.custom.assign("NTECNZEVOIMPQJMMWQQYFFWQYAGLOHFMKPJBJEJWFUKLHNSKFYBPRVGPWQCTOBKAPEIIJLTPXPCWSHK");

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
    msg.setTimeStamp(0.0695271598568);
    msg.setSource(42623U);
    msg.setSourceEntity(201U);
    msg.setDestination(5235U);
    msg.setDestinationEntity(180U);
    msg.timeout = 56457U;
    msg.lat = 0.585971065112;
    msg.lon = 0.257320302451;
    msg.z = 0.272322615357;
    msg.z_units = 250U;
    msg.duration = 55273U;
    msg.speed = 0.33289909857;
    msg.speed_units = 124U;
    msg.type = 254U;
    msg.radius = 0.603961527795;
    msg.length = 0.532035647808;
    msg.bearing = 0.472129648447;
    msg.direction = 74U;
    msg.custom.assign("HKECZXHJNVSWGFPDALSE");

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
    msg.setTimeStamp(0.90434422433);
    msg.setSource(61388U);
    msg.setSourceEntity(20U);
    msg.setDestination(58714U);
    msg.setDestinationEntity(79U);
    msg.duration = 60366U;
    msg.custom.assign("HAKHXCTQKRNJUJWCLYBQBWRSMYDRRTMHFTIICVPFVOEXNUMNEGCEBZFZUMFFQZQTHPWNDJRGAPEOPDAXCEBSIFDYBLZUMAKRTUATMWMVDYYABVHURGOZDXRXDXWLQIIJISCDPANVJKLLCXQPLOGZENHSRWEKEPBTLKUTWPSHABAZAOGQYQHXDONFTWEILJZIJXDITPMMNSNFGWSK");

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
    msg.setTimeStamp(0.167061455238);
    msg.setSource(59780U);
    msg.setSourceEntity(12U);
    msg.setDestination(36064U);
    msg.setDestinationEntity(253U);
    msg.duration = 49234U;
    msg.custom.assign("ZBJNOQRUQTTRAVJMWYFMFXUNAYMPXKMLSTUQDOSKNRTKZEYYSW");

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
    msg.setTimeStamp(0.608385918642);
    msg.setSource(1876U);
    msg.setSourceEntity(186U);
    msg.setDestination(7338U);
    msg.setDestinationEntity(168U);
    msg.duration = 15435U;
    msg.custom.assign("NNVMMIBZFVOVDCEGGIXNNBSPVQDKWBYRDJFLWNLHGZGWLILLXPGGTDEIZFTTUXXYVUXYKJHFKSV");

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
    msg.setTimeStamp(0.3139501477);
    msg.setSource(44577U);
    msg.setSourceEntity(147U);
    msg.setDestination(2270U);
    msg.setDestinationEntity(56U);
    IMC::DesiredThrottle tmp_msg_0;
    tmp_msg_0.value = 0.591725041052;
    msg.control.set(tmp_msg_0);
    msg.duration = 62682U;
    msg.custom.assign("ORPNFZTIZSIXBWWNNFZPJBCPMLUAQCITORHDOFUMGWJRRGVUYMSEWQUXIHJGNRVBSZLXLCABFBHTKNFCWTCYBDUNXHDWRGZUPVHRQJLJLEFMVVFQYJEJUKICDPYKGKKHOEACEQJKGYMIBFRNPSEHBDOTILWX");

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
    msg.setTimeStamp(0.469676251568);
    msg.setSource(43897U);
    msg.setSourceEntity(176U);
    msg.setDestination(44435U);
    msg.setDestinationEntity(114U);
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.454711197931;
    tmp_msg_0.speed_units = 119U;
    msg.control.set(tmp_msg_0);
    msg.duration = 36216U;
    msg.custom.assign("VAQUIYGNKKEKXPTNYRZ");

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
    msg.setTimeStamp(0.0173533538547);
    msg.setSource(62988U);
    msg.setSourceEntity(199U);
    msg.setDestination(60733U);
    msg.setDestinationEntity(107U);
    IMC::DesiredHeading tmp_msg_0;
    tmp_msg_0.value = 0.77725678603;
    msg.control.set(tmp_msg_0);
    msg.duration = 43686U;
    msg.custom.assign("RNFNKVGPNKZHOVJJWMOZHRHLJSOIXEDCFQWILWZSUXMVJAZZNFAHPLBHPTLAKDXCDUOWCYELAUTEKKWCCCJMXJEGKSGWCXZUDHJNQTICGSREDFPVIMKFOOOQHQHEUGYBNWIZBTRDJQLQZIEGPKTBPFROMJFBCBASGESRYALNIPSUPQPNDSBRLVYHBYLEVYUKIYMADDRUQCHUYQVGSTPAERNRXQNXOMMBIDTTFTYUGIVATMF");

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
    msg.setTimeStamp(0.868662482514);
    msg.setSource(34264U);
    msg.setSourceEntity(51U);
    msg.setDestination(44149U);
    msg.setDestinationEntity(68U);
    msg.timeout = 59937U;
    msg.lat = 0.963042036859;
    msg.lon = 0.157966189888;
    msg.z = 0.301978222382;
    msg.z_units = 53U;
    msg.speed = 0.688570218499;
    msg.speed_units = 88U;
    msg.bearing = 0.262224515173;
    msg.cross_angle = 0.00291390168593;
    msg.width = 0.285673128404;
    msg.length = 0.220258854872;
    msg.hstep = 0.0295608454555;
    msg.coff = 19U;
    msg.alternation = 102U;
    msg.flags = 38U;
    msg.custom.assign("FAEBMXAKGOYLAXYDACIPCJTGVTEJVDWUVILQXSHZKJOKJQXHMPNCVMVZITNTROMYRVYSQPHLMMPBBP");

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
    msg.setTimeStamp(0.570445556063);
    msg.setSource(54245U);
    msg.setSourceEntity(184U);
    msg.setDestination(28311U);
    msg.setDestinationEntity(72U);
    msg.timeout = 39082U;
    msg.lat = 0.0111855590061;
    msg.lon = 0.301313723161;
    msg.z = 0.95626677415;
    msg.z_units = 169U;
    msg.speed = 0.104096296458;
    msg.speed_units = 148U;
    msg.bearing = 0.492309925961;
    msg.cross_angle = 0.219671544616;
    msg.width = 0.866374898025;
    msg.length = 0.571962443971;
    msg.hstep = 0.331638294244;
    msg.coff = 179U;
    msg.alternation = 250U;
    msg.flags = 160U;
    msg.custom.assign("RJXMWNDDZXPRYERJPCEACBHRYNGMYTNSQLWYKVYKICINDOPYAUUBHWBOTKLEPTQEKANTMSQNWBADKXWJGATPJESEEVFOIUKBIGLBBPMVWWPMJLTDEAHZGJZXSWDJHIBULPHOPAGQOIYZILGTFSYUBUMSNZRTIFDSFOHSLKOHTNXFYZKIUCVGAOCZUKVSOHMDL");

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
    msg.setTimeStamp(0.0347084666874);
    msg.setSource(21518U);
    msg.setSourceEntity(15U);
    msg.setDestination(2642U);
    msg.setDestinationEntity(40U);
    msg.timeout = 22815U;
    msg.lat = 0.536639971975;
    msg.lon = 0.187910438197;
    msg.z = 0.566634599436;
    msg.z_units = 233U;
    msg.speed = 0.724458953802;
    msg.speed_units = 191U;
    msg.bearing = 0.121634040822;
    msg.cross_angle = 0.942673449698;
    msg.width = 0.623956815478;
    msg.length = 0.841474527579;
    msg.hstep = 0.384351430579;
    msg.coff = 18U;
    msg.alternation = 19U;
    msg.flags = 200U;
    msg.custom.assign("EVWGLBZGVZTDXWAJGDGNTNACKKITYPPZLDEBVEZJTMUZPCGTXNPOBMNMGNZWHVNVIIDDOCUBRLLVAQLSKTEQRCPDIWPMKOMUHRHSXJQIFRVFQROJEJBQBRUBYVHXOHKQGZLAJEFRDZLWALCWTBFOPRCTPJRXAHEUINIXDEKXCDKYYACKSKAIDMAUYXZZJWFOFQMNYUQWPCHSYLFGFXHMUOHNSBIETNYO");

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
    msg.setTimeStamp(0.241051029698);
    msg.setSource(64909U);
    msg.setSourceEntity(91U);
    msg.setDestination(10715U);
    msg.setDestinationEntity(2U);
    msg.timeout = 40791U;
    msg.lat = 0.0873814561482;
    msg.lon = 0.954520333169;
    msg.z = 0.569102724284;
    msg.z_units = 161U;
    msg.speed = 0.428542419288;
    msg.speed_units = 186U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.685719349236;
    tmp_msg_0.y = 0.202080257058;
    tmp_msg_0.z = 0.0395566766474;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("HCVFHIMRTOUIDYFHOGJJZLSUWZMXBMFIVDPVJRNRGEWFPCWCWSKYDCIFASRMTGPNSSSDHTJAONVEEQOYXGKPCLTJBWAXHUBXOIJLBTQKPYIIRNXFALQVACQDOCMBBW");

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
    msg.setTimeStamp(0.102425239003);
    msg.setSource(29216U);
    msg.setSourceEntity(223U);
    msg.setDestination(12328U);
    msg.setDestinationEntity(197U);
    msg.timeout = 2688U;
    msg.lat = 0.0995927438392;
    msg.lon = 0.447034720348;
    msg.z = 0.867153946309;
    msg.z_units = 242U;
    msg.speed = 0.503313682272;
    msg.speed_units = 242U;
    msg.custom.assign("GUWYRPUATMUKYKEIWYFXCLWSQJNFUSB");

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
    msg.setTimeStamp(0.162723614116);
    msg.setSource(56026U);
    msg.setSourceEntity(114U);
    msg.setDestination(29095U);
    msg.setDestinationEntity(164U);
    msg.timeout = 48505U;
    msg.lat = 0.619552745309;
    msg.lon = 0.114698747273;
    msg.z = 0.539790932177;
    msg.z_units = 67U;
    msg.speed = 0.552646279943;
    msg.speed_units = 172U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.82120787233;
    tmp_msg_0.y = 0.987090382649;
    tmp_msg_0.z = 0.88307757717;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("PUVUSPYHJGLRLBUEQSNNYVMLHIHDASUCQQNYMJGQLTTCICCVTDRGVQBBJNOWYWZEWIYYIOMXMNEMBZFWGDKDEXRRACLZVXHIXOAGJWWAFKHVDXNAPKUWPCMSNAKFIKWSOMPZRXUOCSZFISEHPEYURRFLUTRMBUVCCSKLPJLZHAPTDDZVEJJHOJDPBRVTBGJMNKCEGAYEFPNY");

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
    msg.setTimeStamp(0.322460405793);
    msg.setSource(33521U);
    msg.setSourceEntity(177U);
    msg.setDestination(32880U);
    msg.setDestinationEntity(62U);
    msg.x = 0.509383084555;
    msg.y = 0.757169184675;
    msg.z = 0.116174696161;

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
    msg.setTimeStamp(0.622521992181);
    msg.setSource(46277U);
    msg.setSourceEntity(158U);
    msg.setDestination(5065U);
    msg.setDestinationEntity(219U);
    msg.x = 0.0912942194033;
    msg.y = 0.130848166405;
    msg.z = 0.610150262679;

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
    msg.setTimeStamp(0.870941043385);
    msg.setSource(61426U);
    msg.setSourceEntity(138U);
    msg.setDestination(20751U);
    msg.setDestinationEntity(239U);
    msg.x = 0.31501164759;
    msg.y = 0.403309619767;
    msg.z = 0.716630040234;

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
    msg.setTimeStamp(0.61309518365);
    msg.setSource(11303U);
    msg.setSourceEntity(138U);
    msg.setDestination(19609U);
    msg.setDestinationEntity(220U);
    msg.timeout = 3675U;
    msg.lat = 0.999601747484;
    msg.lon = 0.427103221327;
    msg.z = 0.898544170021;
    msg.z_units = 153U;
    msg.amplitude = 0.05677076393;
    msg.pitch = 0.219973484446;
    msg.speed = 0.117254721424;
    msg.speed_units = 61U;
    msg.custom.assign("INVBUYAKANLFIZYLEZKQKKVTEKPNODVXDBELAFPWCJPBXXULRZBEOTWMJGPGQXTZTBOYXADNQRMQWNOEFGLXWQXJHQAUJGNDCEDVZDCGECGHJICLETYIXNVFSUKYPOQSOFDYMDLWZSBSEMAXNWAHGLVUVVDRMJIZSJVBUKTQAWJRIRYBFSHHQARUHMYWUFOAORRQICIFJ");

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
    msg.setTimeStamp(0.303820385619);
    msg.setSource(64238U);
    msg.setSourceEntity(207U);
    msg.setDestination(27848U);
    msg.setDestinationEntity(58U);
    msg.timeout = 46201U;
    msg.lat = 0.478104290976;
    msg.lon = 0.27601681979;
    msg.z = 0.998158701978;
    msg.z_units = 58U;
    msg.amplitude = 0.0705606480105;
    msg.pitch = 0.351947184786;
    msg.speed = 0.350547944548;
    msg.speed_units = 252U;
    msg.custom.assign("FPBCPQZPANXPZSGSEQQQVJNTUGQIBVKZGMLFXJMMMVCETALBOMDBXCRILSRYETFZFJCRMAZVZLQJZTAGRKHSPRSTVURBVKUKPFIDQAGYKCHURWSOYEXJWANMDUHOOJPSFEVDBG");

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
    msg.setTimeStamp(0.695361576856);
    msg.setSource(53509U);
    msg.setSourceEntity(11U);
    msg.setDestination(13847U);
    msg.setDestinationEntity(122U);
    msg.timeout = 9533U;
    msg.lat = 0.30901525315;
    msg.lon = 0.498646738459;
    msg.z = 0.885065795505;
    msg.z_units = 254U;
    msg.amplitude = 0.521912476287;
    msg.pitch = 0.684760797649;
    msg.speed = 0.415190921482;
    msg.speed_units = 131U;
    msg.custom.assign("WWJPDYCFUKOXULNNFDBVEUEKXPGRXZOUPNTFNPTCYWCKBDODGQTQKVGKDLUUHJHEFJIMIZISBGZBLAVLRXNSPLVTAWNHTQRYZAKLVPMIMVSCGAEUPBRGTXTHYDMEEHWMWDQIEIGTKJBWKEJAQFLSSZLNDZQZAALCSVDBMWBOHNYRHXPAJEGIRCRRIMGHMGUCZQXOSKFINJHXQPYYFWDOYSKCBATVYSXA");

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
    msg.setTimeStamp(0.141876614534);
    msg.setSource(29349U);
    msg.setSourceEntity(115U);
    msg.setDestination(31317U);
    msg.setDestinationEntity(12U);

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
    msg.setTimeStamp(0.857351994062);
    msg.setSource(50632U);
    msg.setSourceEntity(189U);
    msg.setDestination(43825U);
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
    msg.setTimeStamp(0.718978041368);
    msg.setSource(12532U);
    msg.setSourceEntity(79U);
    msg.setDestination(2925U);
    msg.setDestinationEntity(199U);

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
    msg.setTimeStamp(0.242160789491);
    msg.setSource(17452U);
    msg.setSourceEntity(232U);
    msg.setDestination(63645U);
    msg.setDestinationEntity(219U);
    msg.lat = 0.98759303922;
    msg.lon = 0.376825531053;
    msg.z = 0.839356762997;
    msg.z_units = 48U;
    msg.radius = 0.384245041763;
    msg.duration = 35586U;
    msg.speed = 0.534876490011;
    msg.speed_units = 65U;
    msg.custom.assign("RZMLDAFMHZKZIWITRBDSFUINUVCOEAZXXIDHHHYLTFVSWIDZFBJNEJSPQHPLIMJWUIRYAEEAUBLSGVQAGWQNVSXYXBUAPACMKJMQKUPJRRDCIWMKTHBWELIWMOVPYKYVTGYFGFTVMKQXXJZGGZZQPNGLYFURRVSXZUNABQLJSPCXOCDNVJOKSTCJSTKFQPSJHGBMLDCRPTR");

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
    msg.setTimeStamp(0.0496783488147);
    msg.setSource(11179U);
    msg.setSourceEntity(171U);
    msg.setDestination(43702U);
    msg.setDestinationEntity(210U);
    msg.lat = 0.436751439527;
    msg.lon = 0.0447552398321;
    msg.z = 0.909901511575;
    msg.z_units = 41U;
    msg.radius = 0.745392777581;
    msg.duration = 56499U;
    msg.speed = 0.927299052183;
    msg.speed_units = 245U;
    msg.custom.assign("QEUSKWQPXNMYFZWXLDTGQIIBCOQKZSUZDUZCOBTYDRAFDIZNPJSVISBPQWEFELMGASXUTWKZORFKMGHMHAEAOIRYGPJSSPBSLLYZGYYBPWNCKXIIUDWDWDJIOJEEYJRXLTYKZZETVRBVAUJKFUGTNYHMDDLJOFOCPOTCRLUCAVHLQAQCGVGFTJQKTQJNHDXVRWCXBPBEECXCNGAIHBVKJNXHEFNVUMMPGLW");

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
    msg.setTimeStamp(0.129636878595);
    msg.setSource(9443U);
    msg.setSourceEntity(215U);
    msg.setDestination(17320U);
    msg.setDestinationEntity(16U);
    msg.lat = 0.922520163104;
    msg.lon = 0.833635619697;
    msg.z = 0.426670984529;
    msg.z_units = 225U;
    msg.radius = 0.931320530549;
    msg.duration = 54413U;
    msg.speed = 0.541696013685;
    msg.speed_units = 245U;
    msg.custom.assign("KKAOLXQMENZCSS");

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
    msg.setTimeStamp(0.314188919509);
    msg.setSource(23894U);
    msg.setSourceEntity(89U);
    msg.setDestination(19138U);
    msg.setDestinationEntity(95U);
    msg.timeout = 6036U;
    msg.flags = 136U;
    msg.lat = 0.95273194122;
    msg.lon = 0.981428509213;
    msg.start_z = 0.500719683259;
    msg.start_z_units = 67U;
    msg.end_z = 0.615111523;
    msg.end_z_units = 147U;
    msg.radius = 0.471706656647;
    msg.speed = 0.486864958667;
    msg.speed_units = 32U;
    msg.custom.assign("RWCVEDWMPLZLCLEKTYFJHDZQUITFIYUKKROEESCKQAQMZBXBLLDFTBVWQMITZEAFGUCXXMCUXBSUJOSZWNBNIDLAMPOVPXRMGNOTRNNDQPJTRGCGNYUWJUGQFAYFVEDHVSHJAASJPWFIVTTVHRCA");

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
    msg.setTimeStamp(0.301587718736);
    msg.setSource(9622U);
    msg.setSourceEntity(202U);
    msg.setDestination(61348U);
    msg.setDestinationEntity(37U);
    msg.timeout = 47580U;
    msg.flags = 169U;
    msg.lat = 0.647590828266;
    msg.lon = 0.829546396385;
    msg.start_z = 0.303720388971;
    msg.start_z_units = 23U;
    msg.end_z = 0.0347132380343;
    msg.end_z_units = 109U;
    msg.radius = 0.642740443962;
    msg.speed = 0.70849532164;
    msg.speed_units = 77U;
    msg.custom.assign("EUCMGXBZFRUBFTDSXPUQWHKJVFZSDYCLYZVJPZLAWOEIKYFIECRXKJOTHCEFHCKRTCJYTLFJIGDMBXQEOJQYRIXGHGYOWPOLIVNAHOIDILCRQOTDAHZQNJKTMZSANRNDSHGWKWOUMFIJKFSIVVZPNLHQJIOOMMABUQ");

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
    msg.setTimeStamp(0.713776244166);
    msg.setSource(57451U);
    msg.setSourceEntity(119U);
    msg.setDestination(35984U);
    msg.setDestinationEntity(102U);
    msg.timeout = 36768U;
    msg.flags = 99U;
    msg.lat = 0.84956567218;
    msg.lon = 0.946104030058;
    msg.start_z = 0.114835987836;
    msg.start_z_units = 173U;
    msg.end_z = 0.648370509047;
    msg.end_z_units = 97U;
    msg.radius = 0.987725362751;
    msg.speed = 0.303986997852;
    msg.speed_units = 105U;
    msg.custom.assign("WHTYGUBRIYIFZUWMRCVDXUNCMWOT");

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
    msg.setTimeStamp(0.81526897337);
    msg.setSource(18670U);
    msg.setSourceEntity(171U);
    msg.setDestination(47059U);
    msg.setDestinationEntity(37U);
    msg.timeout = 37057U;
    msg.lat = 0.637819289092;
    msg.lon = 0.00350171466885;
    msg.z = 0.332667571234;
    msg.z_units = 7U;
    msg.speed = 0.317902865819;
    msg.speed_units = 204U;
    msg.custom.assign("ZZKYXUJHXTCBEYYWTLWUDZPQHKJJXENSAGSGMAOLBOSREQFNQWNSGLCPTMWIHOOLIBTIPPVUWICFMIPOHJZOWZEVQQFKDNAYKDCFIKHQBPGRPXRXQFSRVYCUKADABNSLSLMNFDEGRYDWYKJLMJXNHXGWEVQOKDJJDBMSJSBOIZRMAVGLBGDKXRTVUGTRCOVRVQVIANUPLXUTOEFXZJCAUYZ");

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
    msg.setTimeStamp(0.139696421678);
    msg.setSource(27962U);
    msg.setSourceEntity(85U);
    msg.setDestination(54435U);
    msg.setDestinationEntity(85U);
    msg.timeout = 25375U;
    msg.lat = 0.0816472042978;
    msg.lon = 0.653566974619;
    msg.z = 0.254502145554;
    msg.z_units = 67U;
    msg.speed = 0.14106034885;
    msg.speed_units = 65U;
    msg.custom.assign("KCVCMGYIPHYYICJWCIDVYQUEQYNDEOKBVDOZBEKRWJNUXKPAMMOJLFFZQANKJTIIPANSUGHUPMDUPLMXGRZVARXHDGSHBPTWXPREZZENNHDGFLPTUJNSJJGURCZZVIASBTQJFZYT");

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
    msg.setTimeStamp(0.568950212622);
    msg.setSource(56744U);
    msg.setSourceEntity(80U);
    msg.setDestination(11091U);
    msg.setDestinationEntity(84U);
    msg.timeout = 52205U;
    msg.lat = 0.367903382856;
    msg.lon = 0.539105508034;
    msg.z = 0.27963436667;
    msg.z_units = 31U;
    msg.speed = 0.745865720948;
    msg.speed_units = 151U;
    msg.custom.assign("LSFYJMMVEUGQWELRUODMBVBZZTAIHZHCCKDXBPNQMWIXOQPWSPLGXJWCYRUPZUCIDKZFCNPGFDHXJUROWTUABKVFEWCGBSJCJNMRZFKPEHVATIHLBQNGPTALFFGZVYQUIKUURRQOYNKNYCHYRIAASVNLXOTZEDGFEGIITWTJYQOLWQSKBNELYUGKSJBMPBTJKHDSGQYXOVXDEMXJCFWPAWMOVNEXOBJHRSDHZIQNRYMTCAAPA");

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
    msg.setTimeStamp(0.234120661775);
    msg.setSource(17892U);
    msg.setSourceEntity(147U);
    msg.setDestination(20667U);
    msg.setDestinationEntity(124U);
    msg.x = 0.422402604067;
    msg.y = 0.694153085957;
    msg.z = 0.138409009191;
    msg.t = 0.614959559553;

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
    msg.setTimeStamp(0.171092712374);
    msg.setSource(1963U);
    msg.setSourceEntity(130U);
    msg.setDestination(3529U);
    msg.setDestinationEntity(227U);
    msg.x = 0.813109383745;
    msg.y = 0.427290788742;
    msg.z = 0.291700274875;
    msg.t = 0.654113693221;

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
    msg.setTimeStamp(0.871596082462);
    msg.setSource(28588U);
    msg.setSourceEntity(52U);
    msg.setDestination(33153U);
    msg.setDestinationEntity(118U);
    msg.x = 0.0563021452054;
    msg.y = 0.302480117196;
    msg.z = 0.0202208716389;
    msg.t = 0.0196589791687;

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
    msg.setTimeStamp(0.78703394598);
    msg.setSource(18429U);
    msg.setSourceEntity(130U);
    msg.setDestination(63483U);
    msg.setDestinationEntity(177U);
    msg.timeout = 21782U;
    msg.name.assign("VZFDZPQOSAGTSHGYIXMGO");
    msg.custom.assign("QBQJSDPNJNMHKXCCXFBRYWPQAYOGAVCRLOZPUKJGSLUSPEXNSULVETEONMRRLULFQCYYDBRMOPYWMDWLQWKMTMEMOFJBVCKOFUYTTIMRYTZLIFUDCUTFWBIZWSBFTXHVJXNZJFHSDGZHVAKEJREIXQH");

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
    msg.setTimeStamp(0.613842120364);
    msg.setSource(37130U);
    msg.setSourceEntity(163U);
    msg.setDestination(42061U);
    msg.setDestinationEntity(168U);
    msg.timeout = 61385U;
    msg.name.assign("ROVCPWLXEJNHINQHCLFEHSBYXIMTQWSGZAKZBADQEMZJPLKMOFBPIBXHPQNRMCHQFRQR");
    msg.custom.assign("PLWILRTDVAWPUSHDPIHGGROLLDEINMFFUSQKMVZZVIHKFZUPRTJIVQFKKZQ");

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
    msg.setTimeStamp(0.207580129206);
    msg.setSource(62759U);
    msg.setSourceEntity(2U);
    msg.setDestination(65176U);
    msg.setDestinationEntity(74U);
    msg.timeout = 43761U;
    msg.name.assign("JRPUACUOWHSLKEYJZNEQQVUTMJAZDUUDAGARMWUHHXOYLBPIXBNEOHVLIWZBFSCFLSHSNJXFOPHJRDQNOVIQIDUFORYXDXZUPYTANDEVEMQVCBGJTXXWYIVBXHRVBDQKMISZZOTTCZKFGDLNFKKSKKFCEJQSQIMYGPPOTJCYCZFJLQPYEMRGIWRWVYCGRPWILXNMTKDMAEAUTDAUNBGIGLHFHVAWSLNYTR");
    msg.custom.assign("MGALEFIQZMJDAKZUSPAURLFHQIKSGUDJSNHRPOZULGVIBIBTCYCYHPDGFMNJHVEGMWQLBAXRZARWKRGFTFTVXWZWUQVBTOYMDZFGLXOEQJBSGZDUVBUHYTPPVEWUDTJIMPBLVCMWXMDXOYZXAQFJLBBKFYY");

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
    msg.setTimeStamp(0.200291745837);
    msg.setSource(1906U);
    msg.setSourceEntity(126U);
    msg.setDestination(31700U);
    msg.setDestinationEntity(157U);
    msg.lat = 0.0250452565495;
    msg.lon = 0.990917613164;
    msg.z = 0.716451087335;
    msg.z_units = 223U;
    msg.speed = 0.609624356576;
    msg.speed_units = 115U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 16010U;
    tmp_msg_0.off_x = 0.0995710164296;
    tmp_msg_0.off_y = 0.34249255226;
    tmp_msg_0.off_z = 0.603661222227;
    msg.participants.push_back(tmp_msg_0);
    msg.start_time = 0.308129666179;
    msg.custom.assign("XFLDRBPFBXREBDQLRSJDTGTX");

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
    msg.setTimeStamp(0.272807596725);
    msg.setSource(32331U);
    msg.setSourceEntity(163U);
    msg.setDestination(14817U);
    msg.setDestinationEntity(95U);
    msg.lat = 0.773471301079;
    msg.lon = 0.940188222731;
    msg.z = 0.675689040341;
    msg.z_units = 118U;
    msg.speed = 0.678182816265;
    msg.speed_units = 87U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.397505697968;
    tmp_msg_0.y = 0.962090536298;
    tmp_msg_0.z = 0.579293583982;
    tmp_msg_0.t = 0.205806753399;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.555251923353;
    msg.custom.assign("KAJCMXQUHJRWZYODJNIXZV");

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
    msg.setTimeStamp(0.676626595126);
    msg.setSource(19694U);
    msg.setSourceEntity(238U);
    msg.setDestination(12898U);
    msg.setDestinationEntity(208U);
    msg.lat = 0.79595328151;
    msg.lon = 0.504162550124;
    msg.z = 0.480853517082;
    msg.z_units = 34U;
    msg.speed = 0.187306381581;
    msg.speed_units = 173U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.164525201896;
    tmp_msg_0.y = 0.46218952857;
    tmp_msg_0.z = 0.687198046285;
    tmp_msg_0.t = 0.179391111713;
    msg.points.push_back(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 36112U;
    tmp_msg_1.off_x = 0.358641793641;
    tmp_msg_1.off_y = 0.817685844279;
    tmp_msg_1.off_z = 0.0906216108531;
    msg.participants.push_back(tmp_msg_1);
    msg.start_time = 0.323558172292;
    msg.custom.assign("HUDFVQZSUALAHFVBJBPGMAECHFZCYKVLJKLXPWKUMTPDRRGLXHEBSHNGYIRRQGRYKUSPJMTF");

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
    msg.setTimeStamp(0.722546305661);
    msg.setSource(36149U);
    msg.setSourceEntity(188U);
    msg.setDestination(48545U);
    msg.setDestinationEntity(98U);
    msg.vid = 2139U;
    msg.off_x = 0.477970531612;
    msg.off_y = 0.526650503338;
    msg.off_z = 0.0719617037138;

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
    msg.setTimeStamp(0.357810266937);
    msg.setSource(39385U);
    msg.setSourceEntity(111U);
    msg.setDestination(46787U);
    msg.setDestinationEntity(3U);
    msg.vid = 24136U;
    msg.off_x = 0.450390246977;
    msg.off_y = 0.321447177651;
    msg.off_z = 0.608026940746;

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
    msg.setTimeStamp(0.83050376825);
    msg.setSource(3442U);
    msg.setSourceEntity(74U);
    msg.setDestination(54172U);
    msg.setDestinationEntity(98U);
    msg.vid = 44463U;
    msg.off_x = 0.352545195865;
    msg.off_y = 0.096128616189;
    msg.off_z = 0.868497882118;

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
    msg.setTimeStamp(0.059503299952);
    msg.setSource(3817U);
    msg.setSourceEntity(216U);
    msg.setDestination(1099U);
    msg.setDestinationEntity(17U);

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
    msg.setTimeStamp(0.293358276497);
    msg.setSource(39249U);
    msg.setSourceEntity(36U);
    msg.setDestination(7920U);
    msg.setDestinationEntity(201U);

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
    msg.setTimeStamp(0.040470574905);
    msg.setSource(50604U);
    msg.setSourceEntity(66U);
    msg.setDestination(49756U);
    msg.setDestinationEntity(14U);

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
    msg.setTimeStamp(0.699811022455);
    msg.setSource(20123U);
    msg.setSourceEntity(226U);
    msg.setDestination(46572U);
    msg.setDestinationEntity(177U);
    msg.mid = 50656U;

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
    msg.setTimeStamp(0.68962610616);
    msg.setSource(44001U);
    msg.setSourceEntity(144U);
    msg.setDestination(60903U);
    msg.setDestinationEntity(219U);
    msg.mid = 21320U;

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
    msg.setTimeStamp(0.39124089668);
    msg.setSource(44077U);
    msg.setSourceEntity(81U);
    msg.setDestination(24743U);
    msg.setDestinationEntity(229U);
    msg.mid = 3798U;

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
    msg.setTimeStamp(0.0624689990293);
    msg.setSource(38994U);
    msg.setSourceEntity(104U);
    msg.setDestination(27272U);
    msg.setDestinationEntity(224U);
    msg.state = 210U;
    msg.eta = 45601U;
    msg.info.assign("YYAEXUFEKXTGNOBWUACCRMGZJHGDTIOWDUJNRENYVLVRYBMKSVHQUJGXQJOVJCSZVZDLJESMGMQOLVXCCGSRQAXVAJWBHIFZRFKUJTKMGSTYHLFYNTHUGAVKDBENFPNCDEBMTCKBNGLABIBIRICISSWWWEKO");

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
    msg.setTimeStamp(0.0977841564903);
    msg.setSource(30193U);
    msg.setSourceEntity(144U);
    msg.setDestination(46985U);
    msg.setDestinationEntity(86U);
    msg.state = 4U;
    msg.eta = 20536U;
    msg.info.assign("LYAKHPUNLMZQZCTSUQZGWGWFDNYYOGFJCTLVSFJSKBLFAMISOMMIIHBDQUEAESECEPRTDXQZHWPXAEKHTVOZQEKWGIACRLDQIKSBPXJXIQAQOZUWVJPOBOBUTPGILFRKVABWZNCHOYGMAJLZCTTUVNLSMHCRPBIXPWYALUGOJCNMJDRYKNGREKYFRSFDCPHRWTTODEBIJNEG");

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
    msg.setTimeStamp(0.177227899571);
    msg.setSource(24079U);
    msg.setSourceEntity(98U);
    msg.setDestination(65380U);
    msg.setDestinationEntity(75U);
    msg.state = 87U;
    msg.eta = 53417U;
    msg.info.assign("XPGRJVAZPNUUULQWOTCINKIKSWQFDWAUGSXRCVIEMZZKIB");

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
    msg.setTimeStamp(0.640732363903);
    msg.setSource(2599U);
    msg.setSourceEntity(90U);
    msg.setDestination(15345U);
    msg.setDestinationEntity(130U);
    msg.system = 50971U;
    msg.duration = 44152U;
    msg.speed = 0.620907738257;
    msg.speed_units = 35U;
    msg.x = 0.559795810266;
    msg.y = 0.77859461376;
    msg.z = 0.713988842344;
    msg.z_units = 222U;

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
    msg.setTimeStamp(0.0449463804924);
    msg.setSource(41949U);
    msg.setSourceEntity(12U);
    msg.setDestination(4074U);
    msg.setDestinationEntity(171U);
    msg.system = 23315U;
    msg.duration = 56693U;
    msg.speed = 0.45277796287;
    msg.speed_units = 63U;
    msg.x = 0.962722592831;
    msg.y = 0.287552486567;
    msg.z = 0.0246757030135;
    msg.z_units = 185U;

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
    msg.setTimeStamp(0.748286132261);
    msg.setSource(65530U);
    msg.setSourceEntity(23U);
    msg.setDestination(10892U);
    msg.setDestinationEntity(231U);
    msg.system = 18859U;
    msg.duration = 34663U;
    msg.speed = 0.613516892998;
    msg.speed_units = 90U;
    msg.x = 0.604745987347;
    msg.y = 0.925819798435;
    msg.z = 0.884013934011;
    msg.z_units = 170U;

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
    msg.setTimeStamp(0.209765983354);
    msg.setSource(18556U);
    msg.setSourceEntity(192U);
    msg.setDestination(54883U);
    msg.setDestinationEntity(170U);
    msg.lat = 0.467563141389;
    msg.lon = 0.951852404282;
    msg.speed = 0.759850674321;
    msg.speed_units = 77U;
    msg.duration = 21425U;
    msg.sys_a = 1134U;
    msg.sys_b = 41084U;
    msg.move_threshold = 0.305633334728;

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
    msg.setTimeStamp(0.0537884914027);
    msg.setSource(51129U);
    msg.setSourceEntity(47U);
    msg.setDestination(49364U);
    msg.setDestinationEntity(70U);
    msg.lat = 0.952954903672;
    msg.lon = 0.15109910303;
    msg.speed = 0.53108769561;
    msg.speed_units = 102U;
    msg.duration = 58229U;
    msg.sys_a = 37152U;
    msg.sys_b = 20649U;
    msg.move_threshold = 0.0276368560748;

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
    msg.setTimeStamp(0.821652834);
    msg.setSource(30091U);
    msg.setSourceEntity(82U);
    msg.setDestination(26368U);
    msg.setDestinationEntity(164U);
    msg.lat = 0.661151629417;
    msg.lon = 0.615248892321;
    msg.speed = 0.34803362108;
    msg.speed_units = 171U;
    msg.duration = 41921U;
    msg.sys_a = 15734U;
    msg.sys_b = 53257U;
    msg.move_threshold = 0.226818329903;

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
    msg.setTimeStamp(0.0483707554249);
    msg.setSource(5616U);
    msg.setSourceEntity(142U);
    msg.setDestination(40617U);
    msg.setDestinationEntity(105U);
    msg.lat = 0.353481068943;
    msg.lon = 0.562502201924;
    msg.z = 0.0174173803955;
    msg.z_units = 242U;
    msg.speed = 0.983860642589;
    msg.speed_units = 85U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.951164340105;
    tmp_msg_0.lon = 0.397991531634;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("DMJIBHWSKYTDVKUDCGIFZYLKJNQVEULZFISGVXZAVLNFKCZBQRPXVCMGLICOHOWFFDHAHKYALJRYMLCFOBCHGMIAOLFRWJVLQZNXWYRZJHGTSIMIUNVUMWOAUFJ");

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
    msg.setTimeStamp(0.482595364145);
    msg.setSource(18375U);
    msg.setSourceEntity(113U);
    msg.setDestination(39303U);
    msg.setDestinationEntity(235U);
    msg.lat = 0.297032163649;
    msg.lon = 0.328577023196;
    msg.z = 0.701216882818;
    msg.z_units = 115U;
    msg.speed = 0.281675269707;
    msg.speed_units = 37U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.804545005751;
    tmp_msg_0.lon = 0.358581496957;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("AOLOPOMIWPDVNVLEYZJNLDSFDWIVWIJGJVCCYMQNKEJTHVNIFFEWGBBWUTBZNMFWXXPCDUHKYAOVJGEKGTINNARBYLNKEZMMKJULQNOZYIHPSSGETRQBUQXXBUBFOILRLORSTHGHTDLMAPURSAOCCTZHSICRZZHMEZDKFCUQQCIKJLYEOV");

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
    msg.setTimeStamp(0.0657629805219);
    msg.setSource(2610U);
    msg.setSourceEntity(211U);
    msg.setDestination(30664U);
    msg.setDestinationEntity(78U);
    msg.lat = 0.421300396348;
    msg.lon = 0.921806106119;
    msg.z = 0.293197793572;
    msg.z_units = 27U;
    msg.speed = 0.634423473846;
    msg.speed_units = 91U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.138304955962;
    tmp_msg_0.lon = 0.631458554802;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("KNEOQTHHVDAXIWMYCWZRASKSYJNJGRHQSVLTPEDSPDAKVQDSYDPBEXBUUMMJEWGPLXSPDAZUXVLWFUNINGLJTYJFOJRCOAOZBLZZUXFVTHXNVCZGALEZPV");

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
    msg.setTimeStamp(0.716593533804);
    msg.setSource(2374U);
    msg.setSourceEntity(71U);
    msg.setDestination(44459U);
    msg.setDestinationEntity(197U);
    msg.lat = 0.840992882788;
    msg.lon = 0.381108298198;

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
    msg.setTimeStamp(0.811723794117);
    msg.setSource(28918U);
    msg.setSourceEntity(227U);
    msg.setDestination(61800U);
    msg.setDestinationEntity(8U);
    msg.lat = 0.100999042912;
    msg.lon = 0.0846749041384;

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
    msg.setTimeStamp(0.396105560002);
    msg.setSource(34780U);
    msg.setSourceEntity(166U);
    msg.setDestination(13903U);
    msg.setDestinationEntity(82U);
    msg.lat = 0.24089647147;
    msg.lon = 0.450387006698;

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
    msg.setTimeStamp(0.55212549209);
    msg.setSource(767U);
    msg.setSourceEntity(210U);
    msg.setDestination(16445U);
    msg.setDestinationEntity(203U);
    msg.timeout = 33276U;
    msg.lat = 0.840585954261;
    msg.lon = 0.318528630907;
    msg.z = 0.218281362153;
    msg.z_units = 171U;
    msg.pitch = 0.560347921704;
    msg.amplitude = 0.213478482338;
    msg.duration = 182U;
    msg.speed = 0.993124913669;
    msg.speed_units = 7U;
    msg.radius = 0.806512498381;
    msg.direction = 111U;
    msg.custom.assign("GAVHFVRZLJUJLNPIZNJSUJOGIGXQQSERTXNWSSURGISZYTRIKFCKLSWBIFWZCUINMBXLTAJVHDGSTWWKXGKWXUGBZOYSHVHCBQXZDVDOUYZPDJFYRQYOQSBWLPEURKFFVBTHOWEJMKTLXMPFDXXGZMCYNNFPMAOTNOBYLYZMQVCHWEZMDONJHAVIHVCEQYFQINBPYMREKQXMREJARCEEOIT");

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
    msg.setTimeStamp(0.0320709080421);
    msg.setSource(14342U);
    msg.setSourceEntity(155U);
    msg.setDestination(18584U);
    msg.setDestinationEntity(153U);
    msg.timeout = 39192U;
    msg.lat = 0.509322057522;
    msg.lon = 0.784257567518;
    msg.z = 0.553815179623;
    msg.z_units = 107U;
    msg.pitch = 0.144409155733;
    msg.amplitude = 0.0705680607954;
    msg.duration = 2888U;
    msg.speed = 0.769104180909;
    msg.speed_units = 11U;
    msg.radius = 0.857139883656;
    msg.direction = 160U;
    msg.custom.assign("RGZEHLXNYOHMWLCMDBNGNRMTGVMSTPVBKUVIXCUPRQULBKCSMWIOCDZFKYVJICDYQTUGGQKYEZRZUNWWBEMJQDTCJZRHZEEGVEAJUFCWQAUDBNWS");

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
    msg.setTimeStamp(0.852042466121);
    msg.setSource(13232U);
    msg.setSourceEntity(195U);
    msg.setDestination(44218U);
    msg.setDestinationEntity(113U);
    msg.timeout = 38628U;
    msg.lat = 0.208924730284;
    msg.lon = 0.767920148542;
    msg.z = 0.458440011453;
    msg.z_units = 78U;
    msg.pitch = 0.0172720312187;
    msg.amplitude = 0.448765301369;
    msg.duration = 40489U;
    msg.speed = 0.156543177286;
    msg.speed_units = 107U;
    msg.radius = 0.280790120992;
    msg.direction = 253U;
    msg.custom.assign("QHFRFOODQZEMHBDMLIWPXOTUXVAVYZNEICUUTIJMRRFZXLESCXZYQSHLPTKADWYSGCRTYVYPWMBUOKLJFEESBBPOXGULBOAWWGXNKVFECMVBFEWIHNXFSJVBRFTHIVHZKJZCIGCZYGZJQDTMAGUYAAKBNSZAKNJKHXKNHUZVANWQGIJQUUKXDPWHMRQQNSIHNCIQOUMDEWTLLATNPCPSMMYAGSBLDRFOG");

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
    msg.setTimeStamp(0.336509268762);
    msg.setSource(30205U);
    msg.setSourceEntity(252U);
    msg.setDestination(65503U);
    msg.setDestinationEntity(198U);
    msg.formation_name.assign("IDWUTCDMRRLPPLRYPWVJKIOLTWIAPPMLUCHHDSKAUVHHILTAXZGLHXORHQNUBTRFUVMAFXQGWSNVRCYNOXDGTGBCFGDYEAGISQRCBZBJXYOAQRBYRBERHKNTHJJSEPSDZNBBKFDWUIQQOMMXPCEWXUHYFYSVWCVZSTTOJGXTKNHIMEEXAPZ");
    msg.reference_frame = 218U;
    msg.custom.assign("XAKJFFFUOHJHWNTGXTMSELITUVOUCAZIBZMULJJLKXLRJNYYMXNYHKGUANRXCLBHLBWPTSACXSDMVISCERCONQSYQEEMPFOXOCYURJTOMRFNZEKGIQKHIZXABVKMNB");

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
    msg.setTimeStamp(0.146464215175);
    msg.setSource(33724U);
    msg.setSourceEntity(126U);
    msg.setDestination(17946U);
    msg.setDestinationEntity(232U);
    msg.formation_name.assign("FZVSBXKCTFWDCUADJMTMQVIUPHOXEVCLMJLVRRQCQFJEIGPGOJIRAVNYGUZTBXXVAGSRRWTNBSDVOPLXOQIWBFQKGUUJPLCTMHMETYRXHNXFQSSWTUTUQEFLBYWIYJYSQMSTKRCOIPVNKREZPAPWJLXMRGWHFYDMHZUEYCHZASWJGV");
    msg.reference_frame = 214U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 47489U;
    tmp_msg_0.off_x = 0.32889397485;
    tmp_msg_0.off_y = 0.298608546453;
    tmp_msg_0.off_z = 0.940883019309;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("JAZZOVGGWKSVANSKLLXCHYNCXRQHKRTNBQJFHYAZYKLRQNKQETJKTEYCTYMLKVBFWBDWQKDIDZWPZICSWCLTJWJJNECDFJXSXSMOQIOFHEMGJUZOVICUZZBGPXWAXQFSCAATDFVXHHUEFSILQGBZLHLHOUDEMDMNAEKASPRQPUIMPORNUGXZKGMPDTYINEQYUUPCHSRRERLEUJDYVOPCAPXFVMYGOIMGVTUBGNPYORRLWBFMAJNIXH");

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
    msg.setTimeStamp(0.540705798834);
    msg.setSource(39023U);
    msg.setSourceEntity(158U);
    msg.setDestination(53638U);
    msg.setDestinationEntity(195U);
    msg.formation_name.assign("WJYLMOSHVVCNIELEAUPGMTCEGBRDDHVYYXZGFGKTHMTRAIBKBLDYQKIGBZQPXFVAXDPRQVUHKNJNWCGJVPRYLKBFELGGZJATZWQOJFSIDPDWSTJTPOSAEK");
    msg.reference_frame = 164U;
    msg.custom.assign("LUNOGEMFRCEIPJQLNGXZQCABXJVEZJRJNYOHQDYFAJKGJVKSIXWJUMKLEZWYZXQDDSXVHBGMTBSDIHAKKALWSGGLHKBYTSY");

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
    msg.setTimeStamp(0.948378837088);
    msg.setSource(60445U);
    msg.setSourceEntity(19U);
    msg.setDestination(6635U);
    msg.setDestinationEntity(169U);
    msg.group_name.assign("BQVQLVSCIDBTVWYJJRCEPMGOLJRBOYHKPIVKZSHGVFYWEZAIMYNHOVYCVXPWOFRTHGTDUHKKXKXFCMKINYHRBUDWOOFUZUEAPMASINQLLTQEMEXSFNQHZKBDAAXLWJRQFCBFRYSWOSKEGJEEVMEPWPFNSUGNRZJLGDLCXBPATOBUJVZSYQUVDJGIZYKQPJSITLANCGMHRXIBUQFEKCXNTWIWWLGXPBIFLQCUYDUN");
    msg.formation_name.assign("UHGCFHHUXAKSKXYXLVNZGREHOFZPSQIDMWOIKNISRONYHWQQXZNHUYYTKTMUOTUHGJPBTAGBCSFAGDWNRJOTIAEAKXJEMSDIEYIEFMMBCGVBNZMLOHJQKVGTVYYNJXCPWTCJAMEKZLDBLMPBPBJUU");
    msg.plan_id.assign("BGEDODZVZJMHHGIJKFJMHLNARQQXRCMJEWXWXNNGNZFPYHYQHYDILTTKFAKQKVUIBNMISMMKJHSZSQBTSMEHZUIXDMVFKSPGLGSGILBAQXPPAUZEYKSFIYXUAVBPJGVRFPTYWOWJDDGFOODQUUDGWXQXZLOLCZICAKFOHCBZOTKVEILNBYHYUWGCQVAWTFNSDTLNECYJCXIEVS");
    msg.description.assign("BZQRUVRSSQRMMBORXAGQEUXUDWZPJWVKZCTBHAOILALITDQYZIGPIGOFTNWHCHCBXRVMJPFLEVSJLKJSLUFIRDPIFQBGTGBAWNKYKAPKDLNAZRTFGSJOCICKMHBYPWEHIODUDFMVHDUO");
    msg.leader_speed = 0.112049309368;
    msg.leader_bank_lim = 0.762713164043;
    msg.pos_sim_err_lim = 0.501552550882;
    msg.pos_sim_err_wrn = 0.0870481633694;
    msg.pos_sim_err_timeout = 34534U;
    msg.converg_max = 0.292723524853;
    msg.converg_timeout = 29629U;
    msg.comms_timeout = 57045U;
    msg.turb_lim = 0.161632030439;
    msg.custom.assign("ZIZCKZIEGCGOFSEQXBYESUTHLMAFDAVMBLZFRXMUTCIVNQGFBOTAYRKHHEACWFQAFYPPILPLMKDXJLXVKDSXKKSYLNORSZKHPNHYWAJNEIBAJORYUQYZDXKRDVBUPUVHFMQBPMUWXGLRPTWDPJKIZGNJGSTANIBOROCCMEWUHVJRZRYQQSDVAZCKHDVEIECTOSVJGLOPUFESVYCXMJWGLNSTWLMWHHG");

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
    msg.setTimeStamp(0.523256943904);
    msg.setSource(6159U);
    msg.setSourceEntity(41U);
    msg.setDestination(22146U);
    msg.setDestinationEntity(81U);
    msg.group_name.assign("DGTOFHVKRJG");
    msg.formation_name.assign("SPCOHUIWKUXJXDMQPIVIMUOITPEKZGQFSAVSPYFEMBKPVZGDRFUSYMNIJURPEDFSELCTAHOVOXTQDMNGZFYHCKDWXGQFJPBDATUKESGCJNLEGGRTICCZHKOXDLLCJKYWRXNXJNLBAFYYTRRHDKIZIKYIULMOYLXASBAXZBKDQQGJENSFJWOLQMDNBTQCTANMPWFV");
    msg.plan_id.assign("BXPHRLIDJWZLHKXKCVGIGKDOQSWSXKDGHMUTPNWXCGGOUAUTCBBLOGEBG");
    msg.description.assign("WGPDJKOREXPPYYXQNIIJIKYAUQNMKBAJYDEKTBNWMHLGSTYHWZWEWOJXSHWJUFFLQUMZESYJAEDVASDSLMFICNDHOVHUOCUYQXGLKXCWAFHBPCXRHMXRZJYSQNRAFLGQDWZIRTVZNEDSOOEZZCCSEBNBFWAQVTMKUBMMGLGCVVEHLFOBGSIVJUHJPAMLKQBIMQGGOITPIRTFLRCTPVXJ");
    msg.leader_speed = 0.679543551913;
    msg.leader_bank_lim = 0.771802659687;
    msg.pos_sim_err_lim = 0.298990564713;
    msg.pos_sim_err_wrn = 0.931075153604;
    msg.pos_sim_err_timeout = 6933U;
    msg.converg_max = 0.680267410212;
    msg.converg_timeout = 34278U;
    msg.comms_timeout = 13109U;
    msg.turb_lim = 0.464238952796;
    msg.custom.assign("WCNEKHQQLHIGMMBFTPSWAHDXQP");

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
    msg.setTimeStamp(0.705897998239);
    msg.setSource(54041U);
    msg.setSourceEntity(164U);
    msg.setDestination(56220U);
    msg.setDestinationEntity(36U);
    msg.group_name.assign("IMEYGXEXXZUBRGDWSYXPICNEGFSLALKWQFKWEZSOIQOPDSGBWVQWRUHDDVEYKSQPUXGBJAWUMKVHNGTOFJBMHFCKHYMMBGIHFCOAOZIXVIUJDOXZXADSFRKJATPYRWEZVJNOTYZZQTJUYMVULKORF");
    msg.formation_name.assign("DGOCVDLDOJVGFDRXDUJJBYXHZPYAVSBDRNHGKRGEKUCDQPZEEKHPFQTUPWARYHWLJAIEZCTAGBIVVLTSXBWRPSJGIGFMOKUJSSNMLMJYXYKRMFJNVPADHGNLQWQKUYOVEUEVGMAKXQY");
    msg.plan_id.assign("OILICNTSKDLLELTMVLMOEODTXAFPRNZEHRQMLRMYBJNFEPFIXDUVVMHGOBVBKZKJNHARPTAZJJYVWOWBYSPWCQPCUWSHFROFYIABBDKWYKTUFIOVANMGUIYYDNGDSAJAEMRUX");
    msg.description.assign("YOWRFMFVNTOKTKDAPJWCHZIFTTBEAKHUYFKUQPDSTSIUMDMGNLHWIMCXGRDXYPZESFSLTIRNEUEHABNXMWKCLIQZVLRKSKNCEBQIEUHYLQRENCEFZXJZLEBCKEBFRCTMWSGOFDKBTVQDJJCNUXBRXLHPPJJXVMBWPDIVWQVXHIUOSYJJNHLGPQLGRVPUWQNZOBAQDOGVASCIAHFYYZIAKYROPDPZZJFVUSRMNTVA");
    msg.leader_speed = 0.953188500101;
    msg.leader_bank_lim = 0.285262157168;
    msg.pos_sim_err_lim = 0.110201896206;
    msg.pos_sim_err_wrn = 0.732593992849;
    msg.pos_sim_err_timeout = 37227U;
    msg.converg_max = 0.427913383934;
    msg.converg_timeout = 38949U;
    msg.comms_timeout = 48936U;
    msg.turb_lim = 0.359288556028;
    msg.custom.assign("JMNNABTGZJFIUBOOECSHIMHIGBAHGDCVHYJHYZRXXQOPXLEJDRZDHMCYCFCFGMVHWWUVZKHAGLLSXKVHNVVPNKNLAQKCOCRUUZSANOIZEJTFSJFYMCSPTRTZELKJBBYGCBGWAPEWSNIQDKGTWULOC");

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
    msg.setTimeStamp(0.278689151444);
    msg.setSource(41878U);
    msg.setSourceEntity(226U);
    msg.setDestination(11867U);
    msg.setDestinationEntity(9U);
    msg.control_src = 16422U;
    msg.control_ent = 67U;
    msg.timeout = 0.87057284043;
    msg.loiter_radius = 0.426268423096;
    msg.altitude_interval = 0.00367207106286;

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
    msg.setTimeStamp(0.12996936924);
    msg.setSource(10553U);
    msg.setSourceEntity(218U);
    msg.setDestination(41962U);
    msg.setDestinationEntity(111U);
    msg.control_src = 29060U;
    msg.control_ent = 181U;
    msg.timeout = 0.0594453815552;
    msg.loiter_radius = 0.7078807433;
    msg.altitude_interval = 0.387088746366;

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
    msg.setTimeStamp(0.608474186281);
    msg.setSource(15828U);
    msg.setSourceEntity(240U);
    msg.setDestination(22247U);
    msg.setDestinationEntity(211U);
    msg.control_src = 28166U;
    msg.control_ent = 67U;
    msg.timeout = 0.766646112047;
    msg.loiter_radius = 0.956198882787;
    msg.altitude_interval = 0.935514291102;

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
    msg.setTimeStamp(0.116642660566);
    msg.setSource(61387U);
    msg.setSourceEntity(98U);
    msg.setDestination(61980U);
    msg.setDestinationEntity(116U);
    msg.flags = 115U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.948096336098;
    tmp_msg_0.speed_units = 198U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.704455477245;
    tmp_msg_1.z_units = 176U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.501203546939;
    msg.lon = 0.266938273715;
    msg.radius = 0.093599837284;

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
    msg.setTimeStamp(0.00640643081217);
    msg.setSource(46898U);
    msg.setSourceEntity(76U);
    msg.setDestination(42770U);
    msg.setDestinationEntity(68U);
    msg.flags = 47U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.101053567685;
    tmp_msg_0.speed_units = 145U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.571529567841;
    tmp_msg_1.z_units = 152U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.727640380936;
    msg.lon = 0.773751025389;
    msg.radius = 0.655160784179;

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
    msg.setTimeStamp(0.799151202421);
    msg.setSource(48665U);
    msg.setSourceEntity(234U);
    msg.setDestination(61902U);
    msg.setDestinationEntity(31U);
    msg.flags = 54U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.284019734088;
    tmp_msg_0.speed_units = 71U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.973473616509;
    tmp_msg_1.z_units = 203U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.414080805218;
    msg.lon = 0.679154094093;
    msg.radius = 0.901115190656;

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
    msg.setTimeStamp(0.972184659664);
    msg.setSource(48580U);
    msg.setSourceEntity(80U);
    msg.setDestination(50666U);
    msg.setDestinationEntity(81U);
    msg.control_src = 61968U;
    msg.control_ent = 111U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 196U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.324486766972;
    tmp_tmp_msg_0_0.speed_units = 189U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.984112278502;
    tmp_tmp_msg_0_1.z_units = 143U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.645004752685;
    tmp_msg_0.lon = 0.738884927009;
    tmp_msg_0.radius = 0.819861378486;
    msg.reference.set(tmp_msg_0);
    msg.state = 66U;
    msg.proximity = 30U;

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
    msg.setTimeStamp(0.141439121459);
    msg.setSource(40704U);
    msg.setSourceEntity(14U);
    msg.setDestination(30493U);
    msg.setDestinationEntity(235U);
    msg.control_src = 43534U;
    msg.control_ent = 17U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 70U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.295516642904;
    tmp_tmp_msg_0_0.speed_units = 115U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.429135632816;
    tmp_tmp_msg_0_1.z_units = 252U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.143454376654;
    tmp_msg_0.lon = 0.600441266732;
    tmp_msg_0.radius = 0.150798672155;
    msg.reference.set(tmp_msg_0);
    msg.state = 138U;
    msg.proximity = 191U;

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
    msg.setTimeStamp(0.214379484382);
    msg.setSource(17923U);
    msg.setSourceEntity(244U);
    msg.setDestination(31381U);
    msg.setDestinationEntity(162U);
    msg.control_src = 64584U;
    msg.control_ent = 84U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 59U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.72676127649;
    tmp_tmp_msg_0_0.speed_units = 244U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.350886936779;
    tmp_tmp_msg_0_1.z_units = 102U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.802463038683;
    tmp_msg_0.lon = 0.0786336539458;
    tmp_msg_0.radius = 0.0248873225279;
    msg.reference.set(tmp_msg_0);
    msg.state = 163U;
    msg.proximity = 184U;

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
    msg.setTimeStamp(0.782302905902);
    msg.setSource(16169U);
    msg.setSourceEntity(91U);
    msg.setDestination(19311U);
    msg.setDestinationEntity(22U);
    msg.ax_cmd = 0.536053849178;
    msg.ay_cmd = 0.483558158527;
    msg.az_cmd = 0.858139642831;
    msg.ax_des = 0.852448206795;
    msg.ay_des = 0.273255579376;
    msg.az_des = 0.461407860575;
    msg.virt_err_x = 0.0125230365167;
    msg.virt_err_y = 0.455901755673;
    msg.virt_err_z = 0.479158581571;
    msg.surf_fdbk_x = 0.139880194166;
    msg.surf_fdbk_y = 0.980878234366;
    msg.surf_fdbk_z = 0.606130340989;
    msg.surf_unkn_x = 0.859004997686;
    msg.surf_unkn_y = 0.218610820223;
    msg.surf_unkn_z = 0.544901337164;
    msg.ss_x = 0.34143720704;
    msg.ss_y = 0.0715354743769;
    msg.ss_z = 0.860168078291;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("AWLCMANHAHHGDYVIKYKSWEOXXODFEFUCIMGQNGTYAZJAYZJWNPDJBZQRPOYZGKITLZBRJWDEPNXDU");
    tmp_msg_0.dist = 0.88752188363;
    tmp_msg_0.err = 0.954100258414;
    tmp_msg_0.ctrl_imp = 0.904014172318;
    tmp_msg_0.rel_dir_x = 0.793254168996;
    tmp_msg_0.rel_dir_y = 0.598764339837;
    tmp_msg_0.rel_dir_z = 0.302281388224;
    tmp_msg_0.err_x = 0.228080642078;
    tmp_msg_0.err_y = 0.182182864963;
    tmp_msg_0.err_z = 0.0101120457847;
    tmp_msg_0.rf_err_x = 0.241300662065;
    tmp_msg_0.rf_err_y = 0.514984457197;
    tmp_msg_0.rf_err_z = 0.292838540372;
    tmp_msg_0.rf_err_vx = 0.760494532881;
    tmp_msg_0.rf_err_vy = 0.938769011527;
    tmp_msg_0.rf_err_vz = 0.75527513952;
    tmp_msg_0.ss_x = 0.756547482712;
    tmp_msg_0.ss_y = 0.889277211791;
    tmp_msg_0.ss_z = 0.632651330769;
    tmp_msg_0.virt_err_x = 0.121459808279;
    tmp_msg_0.virt_err_y = 0.934339012509;
    tmp_msg_0.virt_err_z = 0.584241247476;
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
    msg.setTimeStamp(0.699417303396);
    msg.setSource(15539U);
    msg.setSourceEntity(115U);
    msg.setDestination(23639U);
    msg.setDestinationEntity(190U);
    msg.ax_cmd = 0.831765853905;
    msg.ay_cmd = 0.1893649799;
    msg.az_cmd = 0.995672412303;
    msg.ax_des = 0.0412928763294;
    msg.ay_des = 0.468047241065;
    msg.az_des = 0.116312707335;
    msg.virt_err_x = 0.587119222094;
    msg.virt_err_y = 0.629593373193;
    msg.virt_err_z = 0.890748080234;
    msg.surf_fdbk_x = 0.251969323983;
    msg.surf_fdbk_y = 0.62241980605;
    msg.surf_fdbk_z = 0.90149619326;
    msg.surf_unkn_x = 0.698702400765;
    msg.surf_unkn_y = 0.247640294133;
    msg.surf_unkn_z = 0.416480753194;
    msg.ss_x = 0.159922404601;
    msg.ss_y = 0.877971922659;
    msg.ss_z = 0.138301063245;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("GJEMCCASIKLTSEUZSQBPHQRWABYJSBLBRQYHIHC");
    tmp_msg_0.dist = 0.549713184694;
    tmp_msg_0.err = 0.402237646997;
    tmp_msg_0.ctrl_imp = 0.0434171240786;
    tmp_msg_0.rel_dir_x = 0.55749187649;
    tmp_msg_0.rel_dir_y = 0.930100017445;
    tmp_msg_0.rel_dir_z = 0.857343244455;
    tmp_msg_0.err_x = 0.873698437793;
    tmp_msg_0.err_y = 0.702342271063;
    tmp_msg_0.err_z = 0.567539298657;
    tmp_msg_0.rf_err_x = 0.812293271952;
    tmp_msg_0.rf_err_y = 0.0113092992923;
    tmp_msg_0.rf_err_z = 0.746175170674;
    tmp_msg_0.rf_err_vx = 0.862660718193;
    tmp_msg_0.rf_err_vy = 0.466072153159;
    tmp_msg_0.rf_err_vz = 0.788607570006;
    tmp_msg_0.ss_x = 0.0296735509262;
    tmp_msg_0.ss_y = 0.433058071368;
    tmp_msg_0.ss_z = 0.809172905643;
    tmp_msg_0.virt_err_x = 0.281287122539;
    tmp_msg_0.virt_err_y = 0.00373241176589;
    tmp_msg_0.virt_err_z = 0.0976008019432;
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
    msg.setTimeStamp(0.491789843325);
    msg.setSource(43260U);
    msg.setSourceEntity(42U);
    msg.setDestination(43415U);
    msg.setDestinationEntity(149U);
    msg.ax_cmd = 0.462263064823;
    msg.ay_cmd = 0.0077275539426;
    msg.az_cmd = 0.713002388488;
    msg.ax_des = 0.642360321468;
    msg.ay_des = 0.133603526437;
    msg.az_des = 0.786188448931;
    msg.virt_err_x = 0.0337770960283;
    msg.virt_err_y = 0.515786335083;
    msg.virt_err_z = 0.786895609341;
    msg.surf_fdbk_x = 0.576208873247;
    msg.surf_fdbk_y = 0.803321456663;
    msg.surf_fdbk_z = 0.421768862126;
    msg.surf_unkn_x = 0.426917793008;
    msg.surf_unkn_y = 0.432597004528;
    msg.surf_unkn_z = 0.699211957874;
    msg.ss_x = 0.971749634283;
    msg.ss_y = 0.534528951831;
    msg.ss_z = 0.309592523181;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("QPUHHSGTDZHAGXLEJGGVTEHTVQQBWXVNQCDNAIUVYUAWLEPRDTILAOMKTBIGKGAOCIYFNXPUDRVQQQOUBKCJMFFMDGJSEVOOBWCORVFGWDMWILLHJTSFFJZLUDWZQVJDHXBYLXWQYPBQZKSWZRNKKSULMZBOLSPEJHHOUKNMRPICENZYTSAGXXRNYRHBIESFYPMKIEDXTACVJBLNFPWZYOCNYNTPSIMSJCJMFROZKUPGVWTXHKDZCAARAYIE");
    tmp_msg_0.dist = 0.0852542255421;
    tmp_msg_0.err = 0.542465036188;
    tmp_msg_0.ctrl_imp = 0.162374232304;
    tmp_msg_0.rel_dir_x = 0.493607269;
    tmp_msg_0.rel_dir_y = 0.459183597664;
    tmp_msg_0.rel_dir_z = 0.49147452017;
    tmp_msg_0.err_x = 0.168941407637;
    tmp_msg_0.err_y = 0.445909905547;
    tmp_msg_0.err_z = 0.519879306231;
    tmp_msg_0.rf_err_x = 0.802074238403;
    tmp_msg_0.rf_err_y = 0.794959911423;
    tmp_msg_0.rf_err_z = 0.362504375829;
    tmp_msg_0.rf_err_vx = 0.260609956935;
    tmp_msg_0.rf_err_vy = 0.881454521708;
    tmp_msg_0.rf_err_vz = 0.939727424406;
    tmp_msg_0.ss_x = 0.392436818069;
    tmp_msg_0.ss_y = 0.600279819523;
    tmp_msg_0.ss_z = 0.776301487172;
    tmp_msg_0.virt_err_x = 0.913453851788;
    tmp_msg_0.virt_err_y = 0.0703981277294;
    tmp_msg_0.virt_err_z = 0.177440536697;
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
    msg.setTimeStamp(0.531194870299);
    msg.setSource(31402U);
    msg.setSourceEntity(205U);
    msg.setDestination(55632U);
    msg.setDestinationEntity(201U);
    msg.s_id.assign("OQJZXOWYKATPUUHIDAGGCJNG");
    msg.dist = 0.790547491839;
    msg.err = 0.328896806053;
    msg.ctrl_imp = 0.660313441935;
    msg.rel_dir_x = 0.759609256311;
    msg.rel_dir_y = 0.227675132068;
    msg.rel_dir_z = 0.501619793185;
    msg.err_x = 0.167759489433;
    msg.err_y = 0.528693662451;
    msg.err_z = 0.450378913291;
    msg.rf_err_x = 0.258724259693;
    msg.rf_err_y = 0.556708625596;
    msg.rf_err_z = 0.625456822205;
    msg.rf_err_vx = 0.756347026853;
    msg.rf_err_vy = 0.803566730133;
    msg.rf_err_vz = 0.710380807051;
    msg.ss_x = 0.922126921536;
    msg.ss_y = 0.6149570245;
    msg.ss_z = 0.0709394348139;
    msg.virt_err_x = 0.79734366144;
    msg.virt_err_y = 0.553150819694;
    msg.virt_err_z = 0.937090761839;

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
    msg.setTimeStamp(0.351741263756);
    msg.setSource(27565U);
    msg.setSourceEntity(37U);
    msg.setDestination(55328U);
    msg.setDestinationEntity(91U);
    msg.s_id.assign("CGUWARIPTWIZDTPBMGFYTHEAMMCKAEEITDVHMEVFGWZDYRNZUKXVMJ");
    msg.dist = 0.205766254652;
    msg.err = 0.369971380452;
    msg.ctrl_imp = 0.705132489091;
    msg.rel_dir_x = 0.253862470202;
    msg.rel_dir_y = 0.449616753528;
    msg.rel_dir_z = 0.296982672964;
    msg.err_x = 0.731176183922;
    msg.err_y = 0.400200488964;
    msg.err_z = 0.885855107169;
    msg.rf_err_x = 0.174683829752;
    msg.rf_err_y = 0.820441729106;
    msg.rf_err_z = 0.254920531117;
    msg.rf_err_vx = 0.673133333242;
    msg.rf_err_vy = 0.533528594902;
    msg.rf_err_vz = 0.53196568987;
    msg.ss_x = 0.133872538887;
    msg.ss_y = 0.417370417736;
    msg.ss_z = 0.623912052234;
    msg.virt_err_x = 0.32165473503;
    msg.virt_err_y = 0.946804516033;
    msg.virt_err_z = 0.87580178809;

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
    msg.setTimeStamp(0.787254413683);
    msg.setSource(22380U);
    msg.setSourceEntity(245U);
    msg.setDestination(64938U);
    msg.setDestinationEntity(174U);
    msg.s_id.assign("GSJJJKZYVAYHODXFZKFPNUUDHHQADMEZRTCQAGHCXSIJVKIJSURLCQSIVWLCKYFLLTBODFHLYOJJDNXKBRLPHBVCJKCDEWYSWMIPNTCLGDAGYZNIDXCAKJLOGZUHEZTZQHYNIDDXQRPEUQTVKFIXEBAFCBOPYTMVNMXGVTWZRVQWEWMPILTGQZOXTCRNWLEAR");
    msg.dist = 0.964110976099;
    msg.err = 0.00846899894349;
    msg.ctrl_imp = 0.997842830032;
    msg.rel_dir_x = 0.102814388666;
    msg.rel_dir_y = 0.271858545822;
    msg.rel_dir_z = 0.490603155235;
    msg.err_x = 0.853214034433;
    msg.err_y = 0.246948700219;
    msg.err_z = 0.0788561708436;
    msg.rf_err_x = 0.924499713341;
    msg.rf_err_y = 0.365992686347;
    msg.rf_err_z = 0.762825859281;
    msg.rf_err_vx = 0.986642760597;
    msg.rf_err_vy = 0.444973333108;
    msg.rf_err_vz = 0.551434933406;
    msg.ss_x = 0.466958019995;
    msg.ss_y = 0.920986799299;
    msg.ss_z = 0.159091400179;
    msg.virt_err_x = 0.202624530247;
    msg.virt_err_y = 0.624535558263;
    msg.virt_err_z = 0.700707517742;

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
    msg.setTimeStamp(0.568775140667);
    msg.setSource(36489U);
    msg.setSourceEntity(217U);
    msg.setDestination(39876U);
    msg.setDestinationEntity(103U);
    msg.timeout = 17687U;
    msg.rpm = 0.0602850265921;
    msg.direction = 217U;
    msg.custom.assign("ZQGDEJTIXFWZTEOMBQWVSIFPCWCJCPRLSPFDNDYPDRRSSNXUS");

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
    msg.setTimeStamp(0.260839017224);
    msg.setSource(24196U);
    msg.setSourceEntity(19U);
    msg.setDestination(31513U);
    msg.setDestinationEntity(52U);
    msg.timeout = 55911U;
    msg.rpm = 0.325049171568;
    msg.direction = 148U;
    msg.custom.assign("CEMDJJJEXLDPJBXHVNFWWTYULYWLNIHUHKNYNWQJNDRKBFARONKYFAHTJIHXQUMNGGCIRZQTRSZVYCTPTZEGOEFQWYCZUEQLOYBIEQRKXIODFFFAPUVVHAAAUPHOSVHBLQJLPMKBMZPGCQBBDAZOLMUBVWKYSAZMUCTLNPM");

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
    msg.setTimeStamp(0.631785143516);
    msg.setSource(43878U);
    msg.setSourceEntity(224U);
    msg.setDestination(36196U);
    msg.setDestinationEntity(128U);
    msg.timeout = 19053U;
    msg.rpm = 0.13694626596;
    msg.direction = 96U;
    msg.custom.assign("HMISDVMVMTOLBBUALSADJTPVBCKNZKYXCQNEUGYUIBGQLWOFKWOAXYSCOYCVAVKIWDHNTURYYWRIPDUJHDNPGLFAXWDPKHRJNXPBDOOCZNLULIAMCEXVAWIAHEKMECBYXTSGFLKCYUSXSPJSBXDLIQNMGDWKEHRQUHZQQGJVHVDIZXRRWISHYRFJORCNGYFEMKNZJZELOTTZFMHFGTEFVLBNOAUPIJTGZRBVMEZBJTGSZPPSCWFFQPQMOQ");

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
    msg.setTimeStamp(0.82341362005);
    msg.setSource(19234U);
    msg.setSourceEntity(217U);
    msg.setDestination(2423U);
    msg.setDestinationEntity(136U);
    msg.formation_name.assign("ZFAUWSSUCBDLRPGWGFRALLMINNTRZUNKKHHCQALGNMBANOHMQLSVFKTBICCGDTKZEJCDEVTIQWCPDMDNXHTWHIUTDQHEFPRIJWKIBJM");
    msg.type = 233U;
    msg.op = 104U;
    msg.group_name.assign("QFJGHJLZLJFFDR");
    msg.plan_id.assign("ZCWCRJGNKRVYFNBUNKCNTKLLPJPXIPQXTWYFJFVFBMYBTXUTXGRKOGAYSOQITLGLHBSVSZMZVUVOBZDYFCRAJYA");
    msg.description.assign("OLFWICBODPRIYNT");
    msg.reference_frame = 92U;
    msg.leader_bank_lim = 0.189397231018;
    msg.leader_speed_min = 0.528867477668;
    msg.leader_speed_max = 0.585103018672;
    msg.leader_alt_min = 0.266553931769;
    msg.leader_alt_max = 0.878835557246;
    msg.pos_sim_err_lim = 0.244156774863;
    msg.pos_sim_err_wrn = 0.0767386332313;
    msg.pos_sim_err_timeout = 38113U;
    msg.converg_max = 0.401326254585;
    msg.converg_timeout = 49137U;
    msg.comms_timeout = 58054U;
    msg.turb_lim = 0.0571213251308;
    msg.custom.assign("ZSNLHOOYJMDIOIZOFITELTJFELYPXBMOZFJDLVZRBUKYLVCYBQAQHOAAEZQGQSXNSQHVTRUYCIXGGRXWMJPFYBQWSIKRKWCRAEFLIEUWKDUIFKKXJKIYXMEGOKBPVQUREZSIVHJREPGNPCTFOVNBQUTZWCLMLMAQLPZ");

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
    msg.setTimeStamp(0.528264556378);
    msg.setSource(46900U);
    msg.setSourceEntity(190U);
    msg.setDestination(62716U);
    msg.setDestinationEntity(95U);
    msg.formation_name.assign("WUTPXTIJNFZOALFRDVSRGJHUKXAPVBEXPLQUTVWNOGQIVHQODECYMZWMGYKCJOTSBIRUFHTDNNNBJZXJKJYLFLGEYANSTXFXMIVOKGYLFBTDNDBYEEZQKKVSKCPFJDUBHIXQLMSHSHO");
    msg.type = 204U;
    msg.op = 209U;
    msg.group_name.assign("SVGERAEXKBCIRHWWQYPELALJGFCGLUQKHU");
    msg.plan_id.assign("MEHLWRACOYYXLOJRNQFNDZLMMGISQZGNXPDLCKBMCGFRXCOJXOBXXUKKOFVJLRKEDYMGFHTWASZTLJOQQGFVOKQHDIDMUDGAPCYUOEFQJPBAUAYXIDVQSSWZMVXSLIICYXZOPNFCEWNYVEBTGBIUMFPWSNAYQTFRJLKVNMRPRZNEIGSUPBZWTVLBJEAJPICAWDHDANKXUCFIEHBHTZRSHMH");
    msg.description.assign("NJIMSPKIAWKNEJDNBFWKGJGHQSDKCJGENXHDUZZLQSETKABDZFZHXQZFSSBHRQVDSZDJAMIEZLEZCGWZCDKAWKBGFDTHUYVYNHFJOUQIFISXTHFOCXPPKOPFWTXYPAILMDGQOOSWGPMCQTVRSQYNUCJLSNHUGWYITMUXLROLZFBYMFUJROXYBEJGNPYGCKBEBBWIVRVRTVLHNOVXIR");
    msg.reference_frame = 21U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 36055U;
    tmp_msg_0.off_x = 0.910003961703;
    tmp_msg_0.off_y = 0.658546240403;
    tmp_msg_0.off_z = 0.995262436782;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.470115369814;
    msg.leader_speed_min = 0.319151956646;
    msg.leader_speed_max = 0.0681520654292;
    msg.leader_alt_min = 0.275953780241;
    msg.leader_alt_max = 0.447198061724;
    msg.pos_sim_err_lim = 0.879323374061;
    msg.pos_sim_err_wrn = 0.1210172722;
    msg.pos_sim_err_timeout = 57605U;
    msg.converg_max = 0.0410917226557;
    msg.converg_timeout = 61645U;
    msg.comms_timeout = 33324U;
    msg.turb_lim = 0.527121538889;
    msg.custom.assign("YPSMPOVGZVRJJCRLCOAFZSHWYRHOY");

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
    msg.setTimeStamp(0.931233734212);
    msg.setSource(60562U);
    msg.setSourceEntity(107U);
    msg.setDestination(56424U);
    msg.setDestinationEntity(214U);
    msg.formation_name.assign("EFWSUDHPCPMNTQZFRNIISPLNJGMACIVQCUHRQSNEFWOOQAAFMWCQJYXYFJOYJIVAFSPVHEWEIWMYCQXFEGWFXZKATFZQIQMNDVJLHMERJDODCOOTVRRMUKTZMWHJ");
    msg.type = 41U;
    msg.op = 176U;
    msg.group_name.assign("RFECIOQZFSXHAWEHYEWZJPXRQFNLMFRDIQWJOHDUQTWLYEOFYGWIMDEZCQWXACKRVWHYNOHRFVUHIGTZTXBMKIXVBPNDSWKNIBOUUOPVKMVXTKUX");
    msg.plan_id.assign("BPJUCJWIHZTWFFFXKKBGJZVOYBACSXIDMLONKCHEHFIVUAGRZZNSIRQQWTODKJSRDABGNHWNMRPHRMYDAVCCYILCQCACWFQXTTSZOTDLVLUPUGRDLBLVTMUPGOJGIUWEAKLRPWHBIUIQWZKRMLGNKXQSMCOEYQEARXSPXJSPOSNFVQEETDYEPFXVKRMFHBOXWWOFT");
    msg.description.assign("NMHTLHSGJLNNXXAZAOTIIWJRKQNMEFYITCFPIQBCEUBAIBDQVPDHMDNHOTILLMKOPXWAHDROEYLNVUGPIVKEGRUGVPCXJKXWDFPOBCZMUBCPVMUSRFJAPDWKVWNSADZFUNKWKYYGTASGOJYJQZUEWQUHJTFXIHMIYWODRKZLFRBKZXSRLEIL");
    msg.reference_frame = 194U;
    msg.leader_bank_lim = 0.781708291923;
    msg.leader_speed_min = 0.0267901151032;
    msg.leader_speed_max = 0.594887845687;
    msg.leader_alt_min = 0.668530285485;
    msg.leader_alt_max = 0.670388396146;
    msg.pos_sim_err_lim = 0.32499670801;
    msg.pos_sim_err_wrn = 0.151393751994;
    msg.pos_sim_err_timeout = 11427U;
    msg.converg_max = 0.918783097194;
    msg.converg_timeout = 28855U;
    msg.comms_timeout = 29359U;
    msg.turb_lim = 0.587497673705;
    msg.custom.assign("YAMZWTEJOLBOTQFIGLBHSUWCBPKGDSMDQQSZXRSDTJOBDGEKSLNXGHGCILOCRPNKORCAEAKDYTJHCAPNTMFVUZQNPPJYEZRDXCFWBBPOASTJSMEQVBKUKYZFBUTEFJPMFOYGHJHVDINKJYFYHEPCHGCXNMPUAYDRMXJKXXFDMXVYKNSZCRETZAGINAQGVZWBIZFSHWL");

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
    msg.setTimeStamp(0.899349023456);
    msg.setSource(59039U);
    msg.setSourceEntity(41U);
    msg.setDestination(49932U);
    msg.setDestinationEntity(57U);
    msg.timeout = 42769U;
    msg.lat = 0.238504913042;
    msg.lon = 0.471578770677;
    msg.z = 0.54305566801;
    msg.z_units = 219U;
    msg.speed = 0.801495018613;
    msg.speed_units = 244U;
    msg.custom.assign("QXBJMCUPDKPKBEMIWPXXHOYBJVLFVIBAZRIRLFLDNCRGALNHUGNVYPTOJIPMFMGQVDAFLOQDWYJMT");

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
    msg.setTimeStamp(0.659137813485);
    msg.setSource(25430U);
    msg.setSourceEntity(91U);
    msg.setDestination(176U);
    msg.setDestinationEntity(46U);
    msg.timeout = 4227U;
    msg.lat = 0.0984249333217;
    msg.lon = 0.77864962687;
    msg.z = 0.315161485064;
    msg.z_units = 108U;
    msg.speed = 0.658359745167;
    msg.speed_units = 95U;
    msg.custom.assign("BLZBBSXDSLDJJMAPZXKTCIGRWEQJUTKDCXTRJEJBSNENMONWOBIYCHRTXFHMGLLKGZZHDITMMQDJRWYMWQWKULENBBSYITFEQLFAIRGLVLFFGSCRCMQQOIYOLFHHHVNWJWOAITPAXWE");

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
    msg.setTimeStamp(0.293768016764);
    msg.setSource(56960U);
    msg.setSourceEntity(142U);
    msg.setDestination(26539U);
    msg.setDestinationEntity(209U);
    msg.timeout = 38136U;
    msg.lat = 0.0619732746084;
    msg.lon = 0.662807642685;
    msg.z = 0.368736075773;
    msg.z_units = 34U;
    msg.speed = 0.998590792745;
    msg.speed_units = 69U;
    msg.custom.assign("YOKIUEBVLGZVPAEPQTEFSSAQUBDDRGSKANBNVVVQAGOYFSFHRWFXLJLOFGLWJRFHFDKHDMWRBQNCIEJMKT");

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
    msg.setTimeStamp(0.218453706123);
    msg.setSource(13995U);
    msg.setSourceEntity(34U);
    msg.setDestination(52667U);
    msg.setDestinationEntity(232U);
    msg.timeout = 51699U;
    msg.lat = 0.267990324856;
    msg.lon = 0.464132670279;
    msg.z = 0.969379490785;
    msg.z_units = 41U;
    msg.speed = 0.46568347279;
    msg.speed_units = 69U;
    msg.custom.assign("VMXSCITTSOGMLSBHSRRFNRLVQPBVWPCZTNSGGGCHSFJKRIWRUYRPQCJYIOMGZEWLVSOHXTDMKCUJUFUUFBBDDAXNEPAM");

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
    msg.setTimeStamp(0.981033620216);
    msg.setSource(20990U);
    msg.setSourceEntity(170U);
    msg.setDestination(57914U);
    msg.setDestinationEntity(107U);
    msg.timeout = 61994U;
    msg.lat = 0.524603401446;
    msg.lon = 0.281794249439;
    msg.z = 0.907102929081;
    msg.z_units = 210U;
    msg.speed = 0.127879817986;
    msg.speed_units = 183U;
    msg.custom.assign("XAFKWRTZPQAKHVXEFBYXYPDDDYOEWNPDQGFHQFUPJLIANNBGJUEGQPIXTEOMNVYHYMGQQPSVICIYSRUDEKLSMTKJUNRZBZXMUZVTMJSCRXRTASCZBRQQVAMSAWWBJNGQHPIUOSCIKROFYLSZWNBCKVOZLEVONVAFTECUUKMIULUEODIHBDFXGBAGDWKZPAJOCSJ");

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
    msg.setTimeStamp(0.0321781466529);
    msg.setSource(28849U);
    msg.setSourceEntity(205U);
    msg.setDestination(1585U);
    msg.setDestinationEntity(100U);
    msg.timeout = 46300U;
    msg.lat = 0.243861496569;
    msg.lon = 0.260254360736;
    msg.z = 0.360400283566;
    msg.z_units = 242U;
    msg.speed = 0.774245278094;
    msg.speed_units = 13U;
    msg.custom.assign("BSQBTGLWINKYAJWGIICVZZXATJIFMDTTPTNFFXRLNUDFCAHNVWVCLYSVYOPGUWEDIYJTZEHXCMIUPZZGDCKEPFTQUYTHCZCVYXSKAGLXNKQLBBSHMWKSLFXAOHVPOKXLIHHDZMRPNMSEMWOARFRJAVPV");

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
    msg.setTimeStamp(0.428608338603);
    msg.setSource(32344U);
    msg.setSourceEntity(230U);
    msg.setDestination(30576U);
    msg.setDestinationEntity(169U);
    msg.arrival_time = 0.200468377832;
    msg.lat = 0.0978693902414;
    msg.lon = 0.0450725658713;
    msg.z = 0.656459057956;
    msg.z_units = 20U;
    msg.travel_z = 0.590921560715;
    msg.travel_z_units = 76U;
    msg.delayed = 16U;

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
    msg.setTimeStamp(0.577879128625);
    msg.setSource(64375U);
    msg.setSourceEntity(17U);
    msg.setDestination(60414U);
    msg.setDestinationEntity(212U);
    msg.arrival_time = 0.894736060788;
    msg.lat = 0.65085120317;
    msg.lon = 0.363606759962;
    msg.z = 0.127688501289;
    msg.z_units = 178U;
    msg.travel_z = 0.589785858584;
    msg.travel_z_units = 120U;
    msg.delayed = 193U;

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
    msg.setTimeStamp(0.629742984943);
    msg.setSource(7409U);
    msg.setSourceEntity(200U);
    msg.setDestination(5046U);
    msg.setDestinationEntity(228U);
    msg.arrival_time = 0.410490728438;
    msg.lat = 0.0350623577245;
    msg.lon = 0.606271177271;
    msg.z = 0.415364135586;
    msg.z_units = 188U;
    msg.travel_z = 0.316567676039;
    msg.travel_z_units = 240U;
    msg.delayed = 253U;

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
    msg.setTimeStamp(0.807675158927);
    msg.setSource(19226U);
    msg.setSourceEntity(17U);
    msg.setDestination(28574U);
    msg.setDestinationEntity(20U);
    msg.lat = 0.0972207100823;
    msg.lon = 0.946878262183;
    msg.z = 0.787274898063;
    msg.z_units = 130U;
    msg.speed = 0.370535632789;
    msg.speed_units = 103U;
    msg.bearing = 0.914475066403;
    msg.cross_angle = 0.946333317975;
    msg.width = 0.128356355627;
    msg.length = 0.115256721293;
    msg.coff = 93U;
    msg.angaperture = 0.426142227313;
    msg.range = 16005U;
    msg.overlap = 242U;
    msg.flags = 56U;
    msg.custom.assign("MNBSQMWWDWZBHCZTKKQETIYYXRJONPBUOZPKXPREPKPPNRTEPHFMWEJVILXSBLYTHVJJMNVRWXIBFVEFGGRCKZUPJFBAUBQNLMQLQXTIZGKXUGFGOLWYJUUKKHXDQHSIDASNAVCCDGONLDTWVIF");

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
    msg.setTimeStamp(0.476526244864);
    msg.setSource(31208U);
    msg.setSourceEntity(145U);
    msg.setDestination(27674U);
    msg.setDestinationEntity(237U);
    msg.lat = 0.945925681841;
    msg.lon = 0.550085907155;
    msg.z = 0.453576136361;
    msg.z_units = 214U;
    msg.speed = 0.317088491577;
    msg.speed_units = 168U;
    msg.bearing = 0.276919900259;
    msg.cross_angle = 0.593398715194;
    msg.width = 0.21581721074;
    msg.length = 0.341693949246;
    msg.coff = 131U;
    msg.angaperture = 0.586789586126;
    msg.range = 41209U;
    msg.overlap = 248U;
    msg.flags = 208U;
    msg.custom.assign("WQZOJDUSNEOSYWGFZQLJBSIFABPDNTFTOVTYRZQKWYOHXZWLDGINOKGHRJDIZGTZJGPRAXCPFQTHNCLHQHZVGIRPJUIKRVNAYRAEVPHIFBJUB");

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
    msg.setTimeStamp(0.156871511769);
    msg.setSource(5850U);
    msg.setSourceEntity(249U);
    msg.setDestination(30198U);
    msg.setDestinationEntity(109U);
    msg.lat = 0.442440616477;
    msg.lon = 0.622481204299;
    msg.z = 0.772717771353;
    msg.z_units = 253U;
    msg.speed = 0.652073121725;
    msg.speed_units = 66U;
    msg.bearing = 0.446977888163;
    msg.cross_angle = 0.289763240398;
    msg.width = 0.291354121151;
    msg.length = 0.20599864175;
    msg.coff = 143U;
    msg.angaperture = 0.0229870819652;
    msg.range = 44049U;
    msg.overlap = 23U;
    msg.flags = 55U;
    msg.custom.assign("QSEKAEBYNASIKQARAQQBPSXIBLVWGVFEPAFQLOMTZGTTFPFXKLBZZNVCFIHSXDDOPNZANOSHODUYZQBXYORLPLYCDJRKKJAAUMIXLMKLWCOMJOSAJGPIBFZDEMDQGKVNMECESFRQVIYXRGGVKTWNEGWAURUBTUFJHURWOXSJYZYDIWYPKVRDGZQTXJHZTNPXIEJHXMRJNHPQSBEBBLICYHHUCURWFCCVZHFNWWLLKEIWJVMNGUPDOYCDOMGUT");

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
    msg.setTimeStamp(0.368659972081);
    msg.setSource(54980U);
    msg.setSourceEntity(241U);
    msg.setDestination(26066U);
    msg.setDestinationEntity(51U);
    msg.timeout = 52052U;
    msg.lat = 0.128838080404;
    msg.lon = 0.663281137315;
    msg.z = 0.347844433932;
    msg.z_units = 78U;
    msg.speed = 0.700902037072;
    msg.speed_units = 22U;
    msg.syringe0 = 102U;
    msg.syringe1 = 133U;
    msg.syringe2 = 171U;
    msg.custom.assign("RRALMXGWSBLLOPGJDZDKFIXYOOBFYJMAYTQNIBICZNYLRQOAEDJSIXZNEJTVQWPJNKSAHQPUBDBYKTDWUFTSTKQSOHJLVEBBZEXFDNBATMNRQVRYPPHWSAXTVYHCXIZ");

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
    msg.setTimeStamp(0.338508709141);
    msg.setSource(4511U);
    msg.setSourceEntity(161U);
    msg.setDestination(25190U);
    msg.setDestinationEntity(65U);
    msg.timeout = 61960U;
    msg.lat = 0.489174789211;
    msg.lon = 0.982792877945;
    msg.z = 0.721809624765;
    msg.z_units = 152U;
    msg.speed = 0.976372907084;
    msg.speed_units = 226U;
    msg.syringe0 = 215U;
    msg.syringe1 = 78U;
    msg.syringe2 = 104U;
    msg.custom.assign("ENFRQZLCGCDEUUNDTZMUHQJGNCCJIBKLWQAJDWXMEKCEXZDZPYGMKYXCWMCVAWBUTORYKDNTVBXRFVLSAABZKEPJAHSWEGQGDBNHPAWLKXQCPIXPCVYTBFMBNFSQRRNLEUNVTGBARZSSJQXQNBDXYRORS");

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
    msg.setTimeStamp(0.677610342746);
    msg.setSource(7730U);
    msg.setSourceEntity(191U);
    msg.setDestination(47803U);
    msg.setDestinationEntity(82U);
    msg.timeout = 65484U;
    msg.lat = 0.818644304522;
    msg.lon = 0.655638263276;
    msg.z = 0.967565933098;
    msg.z_units = 115U;
    msg.speed = 0.802930685801;
    msg.speed_units = 157U;
    msg.syringe0 = 199U;
    msg.syringe1 = 6U;
    msg.syringe2 = 5U;
    msg.custom.assign("KNWVIZYBKFXLJNTZIDOBLADEZWZCBHSIQYTTBACQKIIWASFKKKYLPGFWRQFEJNXFCDQIPQUXHHDYPVGGHNUYCZYTVJUDPOOVISWSPBCBQOSCVHFFVHLOUQMPZGEAWAXQFSEMDVNUPTBQXEJLUKMRKPKARMCDVUOENNWLHHYOOGXORGNRHSJO");

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
    msg.setTimeStamp(0.329439611434);
    msg.setSource(51204U);
    msg.setSourceEntity(126U);
    msg.setDestination(48691U);
    msg.setDestinationEntity(24U);

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
    msg.setTimeStamp(0.898247267722);
    msg.setSource(26649U);
    msg.setSourceEntity(62U);
    msg.setDestination(39416U);
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
    msg.setTimeStamp(0.148453141288);
    msg.setSource(64285U);
    msg.setSourceEntity(51U);
    msg.setDestination(36515U);
    msg.setDestinationEntity(186U);

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
    msg.setTimeStamp(0.772662223652);
    msg.setSource(28334U);
    msg.setSourceEntity(161U);
    msg.setDestination(50001U);
    msg.setDestinationEntity(16U);
    msg.lat = 0.171775249298;
    msg.lon = 0.0772322067883;
    msg.z = 0.298275457633;
    msg.z_units = 75U;
    msg.speed = 0.104436107788;
    msg.speed_units = 191U;
    msg.takeoff_pitch = 0.0417049134238;
    msg.custom.assign("EVRGDUCKFIRHDVLBYBUTGNNZYDAMBDIZTXUIQIMBZKHWZHUZTSYTEJSWGVDGZIRWMHKTLQSBNOUWVNQXDJLSKUABRLDSSPSSRIKXHXXPTFQFHNMYPVETAVQQACLWRKMMADPHMOCGJUANMGLGITNYCLOFYKXJKHCZCLGOOLJJEVWFNZAPVYPEGBEJZICGFXCISWDUOXACNJPYTLIYFKW");

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
    msg.setTimeStamp(0.850314081273);
    msg.setSource(58275U);
    msg.setSourceEntity(163U);
    msg.setDestination(2453U);
    msg.setDestinationEntity(198U);
    msg.lat = 0.553101640882;
    msg.lon = 0.810246113096;
    msg.z = 0.803529729806;
    msg.z_units = 149U;
    msg.speed = 0.745398299465;
    msg.speed_units = 223U;
    msg.takeoff_pitch = 0.496772180868;
    msg.custom.assign("UTWZFWRNFCFEJBNNLPJGRKJPCHWGKOZULYNAVGWIPMEDKWOXXURYCCPTWDQCQXQTQJTMSXIISKBAPEDUHJZGFERT");

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
    msg.setTimeStamp(0.49362083328);
    msg.setSource(23316U);
    msg.setSourceEntity(237U);
    msg.setDestination(1137U);
    msg.setDestinationEntity(100U);
    msg.lat = 0.0187104459705;
    msg.lon = 0.577645312553;
    msg.z = 0.97620738966;
    msg.z_units = 237U;
    msg.speed = 0.806811430513;
    msg.speed_units = 90U;
    msg.takeoff_pitch = 0.469229856692;
    msg.custom.assign("MQKNCIBCDQBAXSMDEMOFCSWXKQYICVVSDJCEPDENSHEWDNGBOQNKJNXBAMXGGZLQSKNTQWEGXXUOYMVHYRPUBLJDTNZNCXABYWHCBFUSUIOHGDNYTPFFKKTOPTZKWODEFHZVLJJYORPRCLUPRATYUGZGHYPSJUWKIGPLMAOZIRDFQVEXKAPGUSDXWAZATVAMRHTTYOHBMVMQILJLICJFFQIIYAZKQWVCSHRZW");

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
    msg.setTimeStamp(0.761647003015);
    msg.setSource(53227U);
    msg.setSourceEntity(207U);
    msg.setDestination(35648U);
    msg.setDestinationEntity(241U);
    msg.lat = 0.259624578169;
    msg.lon = 0.808979593416;
    msg.z = 0.625296969276;
    msg.z_units = 13U;
    msg.speed = 0.869485941396;
    msg.speed_units = 80U;
    msg.abort_z = 0.526928104248;
    msg.bearing = 0.225853579652;
    msg.glide_slope = 222U;
    msg.glide_slope_alt = 0.252134584234;
    msg.custom.assign("SIGOXBUAQVUEKWXMBQVLMYLGMNYWDEGKOYMMKSAWYUNYOBBNVPDIVISZAMJYSNFWHLHBTTHRJPPXDWLYWEJJFUUERKQOSTSNTNEKYIGTZJRQUFZAQAOFZBKJNAJPTCGHCUQRUFGEOTWICWDLPHQCEXRSRVBYIRGKWNCAFGEPHLGPQDJIHFVACZSXTKVKIPKHBSZMBDJEXUPPFUON");

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
    msg.setTimeStamp(0.0551447921395);
    msg.setSource(3442U);
    msg.setSourceEntity(93U);
    msg.setDestination(64080U);
    msg.setDestinationEntity(173U);
    msg.lat = 0.468902556766;
    msg.lon = 0.0245020568661;
    msg.z = 0.590216579488;
    msg.z_units = 14U;
    msg.speed = 0.478707569181;
    msg.speed_units = 132U;
    msg.abort_z = 0.21375927407;
    msg.bearing = 0.954998818713;
    msg.glide_slope = 151U;
    msg.glide_slope_alt = 0.538517243179;
    msg.custom.assign("KLCIEEKDHJFXVSQATPGNOPIAETVFHINOURLUVHNDPMQMXWXZTPRBDFAFOBCYLZAJGQWIGGRPAKQIQRJUWEYNVAAZYOXFNYBFXBOQWKLJZTITTJCHVCWFYGOLJKPRXRWMNEJSCBVZBEMWQUDAPUHQMYMOHNHEJKYMVVNFLUBAVRPMA");

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
    msg.setTimeStamp(0.0358786797347);
    msg.setSource(16134U);
    msg.setSourceEntity(250U);
    msg.setDestination(29102U);
    msg.setDestinationEntity(157U);
    msg.lat = 0.12686948045;
    msg.lon = 0.875016664988;
    msg.z = 0.396428164596;
    msg.z_units = 138U;
    msg.speed = 0.170263220972;
    msg.speed_units = 207U;
    msg.abort_z = 0.824191795148;
    msg.bearing = 0.218739365957;
    msg.glide_slope = 229U;
    msg.glide_slope_alt = 0.519750165735;
    msg.custom.assign("ZCGRUACKWTDMZYQZXSGNVIMCABOOROTCLXRTGAVSMUGTSHLLJDWONQUBJYQUKHZZIBWYRMJRTJ");

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
    msg.setTimeStamp(0.972376883996);
    msg.setSource(58573U);
    msg.setSourceEntity(191U);
    msg.setDestination(843U);
    msg.setDestinationEntity(57U);
    msg.lat = 0.825085293248;
    msg.lon = 0.117586367707;
    msg.speed = 0.51206409801;
    msg.speed_units = 231U;
    msg.limits = 220U;
    msg.max_depth = 0.698787293096;
    msg.min_alt = 0.484938313234;
    msg.time_limit = 0.101094536012;
    msg.controller.assign("FIZTGEZGDKLEPLZLYXYAQUSNNLVSCNCWZBUDTSVIQLWRDDHLWXKEHFDMCZDTWEWPJGPIHNSNGWUAEJVNCGPVMSBSJOEHOBLRAQBUKKPBUMEZKXYORQXTXNEARRRDQCOZASHOFYMEJBQIMZNBYZTYVTYIAJBMQAKIYWUCLHRHCDFXUQGOTIHIQSVWTKGLJHRXSNADPGLCJMFJZOKWORBTFMFXDRAMUXKPYXBAJVUMWJOEPFPVGNHVKCPIGO");
    msg.custom.assign("GBZASTUFOSUHALIJYEXYEPFYTNANADRHBZYBMVCXSYALJBRMKUYCSTHEPFRIGTHZZDIGGHPMJVAMPKEQXQUMJSUWUGNHKLLDWTIONAPXQCDTHTLSFBDPPKMSWPLDCWSLUEJBFAMOWTRNXVQVWLNQJTJPCOKFQXAMQQDOFBDVYLILXUONOYGOEJHHJKUMIVWZRSBRTPIEBCQEGIKNZZORNFIEVFENHGVGQUCIWYACRBZYKKXRFZDZOVVM");

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
    msg.setTimeStamp(0.134670144443);
    msg.setSource(33754U);
    msg.setSourceEntity(40U);
    msg.setDestination(58263U);
    msg.setDestinationEntity(134U);
    msg.lat = 0.96479385738;
    msg.lon = 0.666188301328;
    msg.speed = 0.99937697432;
    msg.speed_units = 11U;
    msg.limits = 163U;
    msg.max_depth = 0.332714840697;
    msg.min_alt = 0.869306869503;
    msg.time_limit = 0.347293984209;
    msg.controller.assign("LZYUAIWFUMIHUVCYFGQQSWGPAISMTOPJKYMCINFGNYXEEDFOOTNMUTNCAREBAGEKVBSCKXGWFRUXLQSHSKEYSFCSPXOGRSXQDYBHJQUKZVZJHMDJRTXUEODBKTLWPVLNUDEFPAHJKUZTIWKCEVVBOCZHZNNTVPZWXWIJGAWEPTYBYRRLPAYDSOXKPYNUMONVLMRQABQHLVLDROZQVXJIKMRTXGCQDITJMCBSIDIWLRZJPALEDHOHBJBMFQWHFA");
    msg.custom.assign("HJPDKRXCNYRDOBZZQJPJSLQXIQCJZIZLODAMXWV");

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
    msg.setTimeStamp(0.911559244307);
    msg.setSource(55515U);
    msg.setSourceEntity(228U);
    msg.setDestination(44096U);
    msg.setDestinationEntity(142U);
    msg.lat = 0.690622130334;
    msg.lon = 0.96595959561;
    msg.speed = 0.0990651644206;
    msg.speed_units = 42U;
    msg.limits = 35U;
    msg.max_depth = 0.937016771608;
    msg.min_alt = 0.465686931425;
    msg.time_limit = 0.944798561235;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.565584251421;
    tmp_msg_0.lon = 0.0477374017822;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("MTWXEMOHJNPZAYJUPVTMYGQTVYBIXHHALNZSIROBSLKOJYKPXGEKFIDAFXKFOPMZNYJQQVGIEYCPLDLTPUJDHTNMUIHGDJQZLFYOZTJCHSCZVCEZULDVYKVWBJUXQWKLACRSKLHIKTOMCBSAJFWGJVUEGYGSLHBFW");
    msg.custom.assign("YYAWEBQVMEZYOGBCIKSMEDKBQOZJYGVMIAVMSVUPEXCDXFJLPUHIDMZYQXMWUREQOWYHAFSALNPYWRGNLHFFMGAUIOSAJRCKRTLMGNQRREXOEJXGUGDKCTDQKPSNZJYRUATQQVAYBCQETCWIREXKZJNFMIBSMZSOLUHCCLZNWTXJTBBGJLTUOKPJF");

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
    msg.setTimeStamp(0.754260120975);
    msg.setSource(12946U);
    msg.setSourceEntity(59U);
    msg.setDestination(4454U);
    msg.setDestinationEntity(131U);
    msg.target.assign("LTMQGYOSWJTGNNJBCFHEKYKELHXWQAJEBOMKYFMFFDMPNKZZAWSXWCDECPBLQODUTKPKRRGIRWBVTFITEEDSUIAWLPVMZZOLVDPHQWRSBUKEKCDYHCIMNFIVVPLNIZOZQENNHWVOBUPRINZYUNJFBQHJPHYJIUOAJQXMXZLXXAMYEOWHAHRCTDJESGHYRSYIBLFURDSCCGQPCJFSJUWXOSMXANQDZOSGPVDGBVRVUBIYGGTLAZKAMATVGUCTRK");
    msg.max_speed = 0.0948535916745;
    msg.speed_units = 1U;
    msg.lat = 0.8572257369;
    msg.lon = 0.0929847106602;
    msg.z = 0.452431045967;
    msg.z_units = 123U;
    msg.custom.assign("BOCPLYOFIWNEHROLXMFDSGDITQXYCFISDJUFDCYIBETULXOMGTOBAXXLYRKEQVNDSOAKJMQWMNG");

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
    msg.setTimeStamp(0.297905540652);
    msg.setSource(14308U);
    msg.setSourceEntity(103U);
    msg.setDestination(7286U);
    msg.setDestinationEntity(150U);
    msg.target.assign("AMYNJVYRIALOWPLWLNA");
    msg.max_speed = 0.193291570382;
    msg.speed_units = 207U;
    msg.lat = 0.782526003273;
    msg.lon = 0.211012444796;
    msg.z = 0.600561586441;
    msg.z_units = 69U;
    msg.custom.assign("ZWXGBPTOKZWBPTMBDPTQKAJYEGHMVGIXQSADZSJYSSOVVPEIKNLBHRAZSXGJXOLQMLVNVCXFDIHETWGCFOURMPGPRTRCBBPLRJQWOGHUVTLSEWYOFYFVHCMJNAMEKCWFUZWINXWZZJYNJJXKT");

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
    msg.setTimeStamp(0.342923262407);
    msg.setSource(63144U);
    msg.setSourceEntity(87U);
    msg.setDestination(36264U);
    msg.setDestinationEntity(131U);
    msg.target.assign("IESBMCVRUVETJOWVAJQKFZXRHUTLGSZLUWJINMWIPBQQEMSHWQKPDRIGPWXIENDSJDPFUZQDZPCNUFXTPWCYWNLEQAROFFLASBTFMXHSJANOEECWLCAULDWHRJOPVVZJKMTNBIFWOZDHYFIDVMKSQVGIQTRZMPGBHGJTEGRYPXCUDVSYKYBAOZAHXBUGNYLGKIHQZBUXLCYCXNSSBZFYEKMPDXHHAJIRJFYMKOO");
    msg.max_speed = 0.983880843633;
    msg.speed_units = 209U;
    msg.lat = 0.857943663653;
    msg.lon = 0.651714943748;
    msg.z = 0.664736500552;
    msg.z_units = 232U;
    msg.custom.assign("WGINJHBIILNUWZEELNOZOBBGJQVEVIFZWZQJOOZGBPHHDKJSWIXZXDMWBRIUKVVIQJOCUXSEHNHWMGSXEAAVTSTDZKOWCMBLVUJ");

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
    msg.setTimeStamp(0.958545229756);
    msg.setSource(56228U);
    msg.setSourceEntity(216U);
    msg.setDestination(35086U);
    msg.setDestinationEntity(148U);
    msg.timeout = 52852U;
    msg.lat = 0.811742126032;
    msg.lon = 0.876838301247;
    msg.speed = 0.462756896827;
    msg.speed_units = 18U;
    msg.custom.assign("WNCZTKNFDKUOAGUFSQLZAUMXBZXWALBZTVHZMKAHVHBZTCYUELNPWEINVR");

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
    msg.setTimeStamp(0.319153401358);
    msg.setSource(4918U);
    msg.setSourceEntity(169U);
    msg.setDestination(54672U);
    msg.setDestinationEntity(162U);
    msg.timeout = 42398U;
    msg.lat = 0.845950944339;
    msg.lon = 0.430000105042;
    msg.speed = 0.374893103442;
    msg.speed_units = 136U;
    msg.custom.assign("FBGTYMULCQJWTVNGGGEYFCIFSCYQDOPRMNDGVBSULDEASFKMWCWVKZEEOATABPZNLSQDPKQKLXHNOIIZIBLAATVYTYBISLQOYYXJHFRWWBDJMPYNJEXYWKCRRXFGKA");

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
    msg.setTimeStamp(0.174959846624);
    msg.setSource(24379U);
    msg.setSourceEntity(234U);
    msg.setDestination(1098U);
    msg.setDestinationEntity(7U);
    msg.timeout = 27509U;
    msg.lat = 0.638080052132;
    msg.lon = 0.0450283646649;
    msg.speed = 0.564050730525;
    msg.speed_units = 139U;
    msg.custom.assign("SLOCOYIFAWFICOKGJWOXBCNIEYGLTNDPAGOADAIDZBQDTPWKNDXOSVSOFKLAZMFSERWZUMMAQKQPLSFXTYGRHSDNBLELLCFCUJRBVZUUUHIJPSK");

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
    msg.setTimeStamp(0.0998306030279);
    msg.setSource(4412U);
    msg.setSourceEntity(212U);
    msg.setDestination(35979U);
    msg.setDestinationEntity(162U);
    msg.lat = 0.541408545697;
    msg.lon = 0.826098131541;
    msg.z = 0.385452689571;
    msg.z_units = 29U;
    msg.radius = 0.855278992032;
    msg.duration = 47581U;
    msg.speed = 0.869008459103;
    msg.speed_units = 176U;
    msg.popup_period = 15619U;
    msg.popup_duration = 60311U;
    msg.flags = 132U;
    msg.custom.assign("WNCVVYVPKKHMGZRBSBYHOQDHLOAVSUSJACFRUHSLRPZPWSTEQNYVKQWNLUEIMWKSJIOCGKEDMWPOCWAJATYZXJHQGRWDCEQLKEPPJNAWIQLXTLMFNTCOGIVUURYNZBXQFSGGATJKOBWSCNUPKPBJRGIMXFYIDBXNJCUNBJMBQLXIMUORDYEUCZFSZFAHQMEAEZKMVOHIGREPLDZHGBGTDIBXXZX");

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
    msg.setTimeStamp(0.327726096262);
    msg.setSource(44712U);
    msg.setSourceEntity(139U);
    msg.setDestination(47565U);
    msg.setDestinationEntity(209U);
    msg.lat = 0.174681535265;
    msg.lon = 0.794144931568;
    msg.z = 0.30994735974;
    msg.z_units = 58U;
    msg.radius = 0.83109463667;
    msg.duration = 60884U;
    msg.speed = 0.388816296599;
    msg.speed_units = 58U;
    msg.popup_period = 29576U;
    msg.popup_duration = 62328U;
    msg.flags = 176U;
    msg.custom.assign("DMOOBYPOLRINZGXYMCDFEABEICLSMMEQYHLHXUFTICMRLEKIEVVZNDIYQVSKVPUJQRGSHMDSABPOKKVPQRUAGHAWCWBXCPJWNKIODWAZBWZRSXTALYETMMERYHVWTLYQNDDXOQDHXWQFKQSQRGBOMAVWKJGZHYESUF");

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
    msg.setTimeStamp(0.565899939532);
    msg.setSource(64488U);
    msg.setSourceEntity(167U);
    msg.setDestination(6449U);
    msg.setDestinationEntity(248U);
    msg.lat = 0.167469335128;
    msg.lon = 0.217614597132;
    msg.z = 0.512025134751;
    msg.z_units = 172U;
    msg.radius = 0.119590953515;
    msg.duration = 36100U;
    msg.speed = 0.0686394696801;
    msg.speed_units = 200U;
    msg.popup_period = 26114U;
    msg.popup_duration = 26215U;
    msg.flags = 57U;
    msg.custom.assign("EGXXRCGAYVEWFCDJCAOTHCUMLBXAQMPZSUAZJRBQQTYMVQEJRDPCQZZBCRXK");

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
    msg.setTimeStamp(0.479914548376);
    msg.setSource(30213U);
    msg.setSourceEntity(67U);
    msg.setDestination(64333U);
    msg.setDestinationEntity(174U);
    msg.timeout = 50202U;
    msg.lat = 0.593426242088;
    msg.lon = 0.0706217718163;
    msg.z = 0.0071280354549;
    msg.z_units = 119U;
    msg.speed = 0.949141833269;
    msg.speed_units = 104U;
    msg.bearing = 0.406051146238;
    msg.width = 0.439655113059;
    msg.direction = 11U;
    msg.custom.assign("TIWOYMOECWLXPTPVVXCKGPVASJUYEYAGAIUKQVHWAOKYVAKZMTPICP");

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
    msg.setTimeStamp(0.577479137095);
    msg.setSource(11053U);
    msg.setSourceEntity(253U);
    msg.setDestination(58068U);
    msg.setDestinationEntity(206U);
    msg.timeout = 8967U;
    msg.lat = 0.91952381155;
    msg.lon = 0.51760907421;
    msg.z = 0.975460201487;
    msg.z_units = 31U;
    msg.speed = 0.340563692604;
    msg.speed_units = 196U;
    msg.bearing = 0.380545248556;
    msg.width = 0.659853177432;
    msg.direction = 144U;
    msg.custom.assign("QWZVATSFRFOTDHPFLKYPOHGLXQILSGNWLKKJJTAAWPYTNUSLKSUDEECXREMSGQVVOTNJMUKWYGAYPVJGAZQPKCSBBILIECYDXLBKVDERIMUXKUCRENSCGJLGPJHZPLIYIYYSYIUNIMBXCLPRORPFOVZMCTXWGXX");

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
    msg.setTimeStamp(0.988914940294);
    msg.setSource(5071U);
    msg.setSourceEntity(67U);
    msg.setDestination(60799U);
    msg.setDestinationEntity(66U);
    msg.timeout = 5131U;
    msg.lat = 0.353657060367;
    msg.lon = 0.391530074528;
    msg.z = 0.63273347751;
    msg.z_units = 216U;
    msg.speed = 0.472414786965;
    msg.speed_units = 134U;
    msg.bearing = 0.668723872517;
    msg.width = 0.899707084369;
    msg.direction = 133U;
    msg.custom.assign("HZUXQDSMKZQZWNCWTYEZSXVTIJFWEVCYSAPGVPD");

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
    msg.setTimeStamp(0.555555086419);
    msg.setSource(54936U);
    msg.setSourceEntity(77U);
    msg.setDestination(44873U);
    msg.setDestinationEntity(232U);
    msg.op_mode = 83U;
    msg.error_count = 231U;
    msg.error_ents.assign("IXGVSWRBDIOTCLFHKQRFHLLNQTXZBBMPFDPETCNFZEGJTIHVIJDEIQXMZQKRDDMCKUUYCLOIDCOWHJWG");
    msg.maneuver_type = 21511U;
    msg.maneuver_stime = 0.354535761015;
    msg.maneuver_eta = 25976U;
    msg.control_loops = 372484971U;
    msg.flags = 20U;
    msg.last_error.assign("GRKWNLVYLROFCTWTUSERPLXVGVFBNXQBJVUISSDYVWIDBCZSIORXFRXQWFNUELDIDMVOUHAZVTPARQBRKTYPBKGAMSEJQGNPLFZKCOHYORUPYTDMOLXIOUNTCWVYTNBOCAZBPIDNTFGUSWHZABCJMOSSGWPMEKCSPQLIYKKDJEVXDYCJDVULPSCXKG");
    msg.last_error_time = 0.410710457541;

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
    msg.setTimeStamp(0.0363794960231);
    msg.setSource(40636U);
    msg.setSourceEntity(130U);
    msg.setDestination(46070U);
    msg.setDestinationEntity(89U);
    msg.op_mode = 156U;
    msg.error_count = 235U;
    msg.error_ents.assign("OAUMQASCWHCFWZXLISIQDYQYKHWCUXBGHJPUFCDFGPRNTYEDUVOLAZPNDUOWMYEKOQZMLGJPWXR");
    msg.maneuver_type = 38722U;
    msg.maneuver_stime = 0.316869349079;
    msg.maneuver_eta = 23488U;
    msg.control_loops = 196209903U;
    msg.flags = 227U;
    msg.last_error.assign("KNYKAKSLTHWAUBDEVRPESIOZFZZINDZIHEFQXICNFLJWQNDARTGAGWBDYRRRZOEAMQSXCTLUTMCXQCGOIFUBRHXJ");
    msg.last_error_time = 0.946523169988;

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
    msg.setTimeStamp(0.775362424423);
    msg.setSource(60461U);
    msg.setSourceEntity(90U);
    msg.setDestination(61141U);
    msg.setDestinationEntity(241U);
    msg.op_mode = 59U;
    msg.error_count = 211U;
    msg.error_ents.assign("PJNQXQRUFEVXUUNQQITDHVZWFDSHTSJBTFDTVDBWWDLBOSWKMCFGRMBYGHTQXKADJMJKNOHVUSTLVSVBMRCPFDIFDYKOYGYPJPHDHYRGZLUYKECZREVRLNPYZJIFDBOMURAKROIEUSQSJCCQWPPICAWONOOZVXIPILUWBNRXMFLGGT");
    msg.maneuver_type = 42361U;
    msg.maneuver_stime = 0.0976226904451;
    msg.maneuver_eta = 967U;
    msg.control_loops = 4026965114U;
    msg.flags = 78U;
    msg.last_error.assign("WKZFEJSNDKQWLCKVNIEVRQXGBAINJTNRLWTQVMUJGMHQYRVYTYONZWIYHVJROYVZZOCYTCYHPPWFQESL");
    msg.last_error_time = 0.919289620465;

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
    msg.setTimeStamp(0.377357510693);
    msg.setSource(54052U);
    msg.setSourceEntity(220U);
    msg.setDestination(14640U);
    msg.setDestinationEntity(122U);
    msg.type = 36U;
    msg.request_id = 9165U;
    msg.command = 12U;
    IMC::Launch tmp_msg_0;
    tmp_msg_0.timeout = 19060U;
    tmp_msg_0.lat = 0.967150156271;
    tmp_msg_0.lon = 0.527546369665;
    tmp_msg_0.z = 0.185283154158;
    tmp_msg_0.z_units = 75U;
    tmp_msg_0.speed = 0.211505356589;
    tmp_msg_0.speed_units = 41U;
    tmp_msg_0.custom.assign("FOATMRPADQGKUYVVNCYZYTODHPHEGSYDYERMJWTVWGOLH");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 44333U;
    msg.info.assign("SUGFIEZVREVALYEIWLWIMBJSQAMPZYWHCXCSORABNBYMOZZGLYWKYACFUPHQFHPEXCGWKQRPONWYSOFDBWJFIFFADBDOBA");

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
    msg.setTimeStamp(0.945546033814);
    msg.setSource(8835U);
    msg.setSourceEntity(251U);
    msg.setDestination(38414U);
    msg.setDestinationEntity(178U);
    msg.type = 206U;
    msg.request_id = 55880U;
    msg.command = 244U;
    IMC::CommsRelay tmp_msg_0;
    tmp_msg_0.lat = 0.201963306705;
    tmp_msg_0.lon = 0.393763417274;
    tmp_msg_0.speed = 0.587273423342;
    tmp_msg_0.speed_units = 36U;
    tmp_msg_0.duration = 1263U;
    tmp_msg_0.sys_a = 38184U;
    tmp_msg_0.sys_b = 44370U;
    tmp_msg_0.move_threshold = 0.590678551742;
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 33581U;
    msg.info.assign("AVUNZCRGBQSYWUBHJTMZWBCSPQLDLAAYMBEFKUGDFTGSMMDNMEUBKSAHDHOPTXOKAZDMHDYWWYYQPTGTRXSISZWJFGHTMMXQOLPEKFTIJZAKLNIPFRGKSLCE");

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
    msg.setTimeStamp(0.747552976203);
    msg.setSource(19387U);
    msg.setSourceEntity(204U);
    msg.setDestination(39960U);
    msg.setDestinationEntity(10U);
    msg.type = 177U;
    msg.request_id = 31676U;
    msg.command = 162U;
    IMC::FollowPath tmp_msg_0;
    tmp_msg_0.timeout = 61155U;
    tmp_msg_0.lat = 0.0198478956539;
    tmp_msg_0.lon = 0.0980645056331;
    tmp_msg_0.z = 0.2952614912;
    tmp_msg_0.z_units = 44U;
    tmp_msg_0.speed = 0.0145553876437;
    tmp_msg_0.speed_units = 33U;
    tmp_msg_0.custom.assign("RTKWCUAFPJKWIGEZMENWXHLNIHYBUAMQVRKJPVUIEQSTZWNTYXHVSBJQZCMZLPQZJGDLHCDFUKORXXBUKFYNONLSRFTGCSBDRTCVACMUCVNESFULKQDWXOMVNKPPZQMEEHCEWEXDUNFCRYIGDSRGIAWJXGPOLIWHSAZYZJIOXSTDYP");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 47131U;
    msg.info.assign("JEBCZADDMKZZRIDFBTHFUCRLMHGLXUFTTPNPWZKSYRDJQDLWULXTWHVJKHYPLYKMEGXZBOIWNVPAYVQWBQVOJFEXZA");

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
    msg.setTimeStamp(0.644158436467);
    msg.setSource(51337U);
    msg.setSourceEntity(183U);
    msg.setDestination(7114U);
    msg.setDestinationEntity(217U);
    msg.command = 232U;
    msg.entities.assign("CGOXZVPFPRJHVYJFOBTUIIVIAWGHGQUWTGXGLUTOHWYYAJBYATZSKBORIFJESUXMVSQKLHPLNBNKPILVTKVCGTFUXQLPEPTJYIAEBXPDJJVFKFJLARZTOUWWFTECMKYOAXGXOYXCDADYRDMERZQKAFNHWZSRELCNMHNCKWUMVGSWDPLYUUGNZZEDISY");

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
    msg.setTimeStamp(0.686616177378);
    msg.setSource(27352U);
    msg.setSourceEntity(153U);
    msg.setDestination(56814U);
    msg.setDestinationEntity(244U);
    msg.command = 117U;
    msg.entities.assign("AJJZOVBKHFFZWZHFRIEZQRWISZIVDKQHECHEVYKHJIWLKLUKFEZRNUFARTVOLCRHFUSAMFRPZWSXUZNPPBCEMYGEJLMOQXTHNXMGPKYDGYBKCICNXXBLYBHQVPECDGNGPDBETQWBDXDIGCBAWJRUGSOBTIVFJLPCOIHEOARUHNSLYGMDQNSAVAPYWXFOPCTKVGSQTTQAAWTLRDXNOMDSMU");

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
    msg.setTimeStamp(0.704220975211);
    msg.setSource(24114U);
    msg.setSourceEntity(18U);
    msg.setDestination(42306U);
    msg.setDestinationEntity(136U);
    msg.command = 40U;
    msg.entities.assign("TYCEMAJPRUISPEDGAQHNGOKBRYTBLUCLJGKLYZZQEVUPSWVSYNODPQCWMNIRWYBTXXFEOPMABEUICTMFHX");

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
    msg.setTimeStamp(0.806323901256);
    msg.setSource(30211U);
    msg.setSourceEntity(90U);
    msg.setDestination(51386U);
    msg.setDestinationEntity(127U);
    msg.mcount = 36U;
    msg.mnames.assign("MCOLNQFABWRXHTDWJFPEYOXEPQTOORCFAUVISORILLVWANZCFLWWUBLYBECPFIJALALSRBKKUILUHOAWMIDSTGTLIOWOYJNJGAMWTJBTKJEQCNVYSKTDVGHSFBSMQRUXHNXPISEQXKHUJHGVQCBPJMPGKDAIKGRCNPNZGNAWUFSYEHYRZZZUCWBHPZYUIBRFMKPZHAIXCQLSEDQRVBSPDDMYGGONKXJFJGMXXMTXRZVMDZDYQ");
    msg.ecount = 72U;
    msg.enames.assign("GXQRWRKGMBEOEOWAEANLYBRAHWFOWNUBXUQMXSPLOHNDBXSGIMKMXLZFLETTKQIVYCTUAESZO");
    msg.ccount = 4U;
    msg.cnames.assign("YZYQIBJPTCVZTSTGTY");
    msg.last_error.assign("WYXKIDWEFBAGCYGDRCMPCTXWYBKNGVJASJKUZVAGYIMTXDWLLJZMAXKFMP");
    msg.last_error_time = 0.664797977316;

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
    msg.setTimeStamp(0.429457474701);
    msg.setSource(7258U);
    msg.setSourceEntity(78U);
    msg.setDestination(30348U);
    msg.setDestinationEntity(76U);
    msg.mcount = 239U;
    msg.mnames.assign("PUUQLONJZWSIPPBOVPPSDHXDYYLHQLHNLKOIRDALGYSSFXYCWWEJCVVLDSQQPJPIYTNHPRUQMWIRSFVANKGAHJFUOVEUABGGIZOQHQZFFCABEUPCSIEUEHAMTVTOZJVMBUCJGLZCBNUKZTOFKSJTEQNOQZDYRMJYZTMBCKWSGYOGMRRECXHGETATHXWIRSRJXONPWMKZXXYDKX");
    msg.ecount = 251U;
    msg.enames.assign("TGJSSZNXZESREDKVRXVTGJYHCRQVQZVHBHSGOJFTFCNYIRFKEPXDDWRVIEMBYGCNNAYIOUQSAQXFLHYIBUMAMJGEWAFLIAWBEUQPRTPEMVTCMNJPZOWWGBBYKDXRDFRCKBNYURMZLXKIFPQJXZSFJIGWRCOLPMEAPOJPOSWVWDMZEQLTCHDMINZBLXNUZVOINIYWXSVNKTCHLTHBSLYUQWSVKFAXGYOGHPLDBQPECCUKDTFAJMALQ");
    msg.ccount = 110U;
    msg.cnames.assign("UCWNJWULNWCWBGIAAXJUKMHIJPLPQZFWOGCGRAAEFVQRXHVIVHGRCOYLPHGSRHJBIWLPSINBRFTCDAWJZNULTYBAZEDYKSEFSKBUAHBDYBIZJFNOSHQRDIUOEQCPGLXDFGKNEMHKKZJIAVSQCWLQRVPTMLYRMMTM");
    msg.last_error.assign("PZOCFCEEJENPWYTBPXTRBTKVQSDHIBAHUPBFNZHCZCOBATDNIVWFUCNFOAUHIRDBCQJIQWISGZVBS");
    msg.last_error_time = 0.579275078171;

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
    msg.setTimeStamp(0.857278734573);
    msg.setSource(60391U);
    msg.setSourceEntity(238U);
    msg.setDestination(4477U);
    msg.setDestinationEntity(198U);
    msg.mcount = 177U;
    msg.mnames.assign("OQOXXMGDCTSOINISKFJTCIMNEPSQSRQKFJIRBDOZNWFAILYASVOH");
    msg.ecount = 125U;
    msg.enames.assign("LJIOVMYPWZNAKUEAHUIROYZASJCOBIKYCUOLXSUENRCRFBVSPOSMPBGTTGGNZQWAFJZJGOJZHB");
    msg.ccount = 2U;
    msg.cnames.assign("OUJGPIAMFSAYWMLNKSSLGVPOIHWSPZDGXFTKNBEZETFYPWVCXGXMDKMXCOLSXQHOSOZUXIQYOKCHQMIAYHWZIHMNGJDYRLRWJIMVVZSRULKVADILEUAKWYZNSDRKETDIUQPCBVZGFBXGGZVEFDRRHKFRURIWQUEHLBNOHGACPSMCJLOWMTNKQENBPYNJQZTAAFOJKAVQFWNLNQDEFCJLBRFBJMETPRTHZTOVBJEJXIHPA");
    msg.last_error.assign("YDEKUHVHEHJBLVUAEYDAGJREQWCRJCIDNCSZMXPIMXACJGPMDNOVRBVUNGMWFZKCTJTDRZGAMNMDHAPLQVBUCLJQXMAGCTOGQYZPVDFHPAXNNQWTXUBFQITRPSNITKLTFWNWBHTHFZFLBH");
    msg.last_error_time = 0.207618450183;

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
    msg.setTimeStamp(0.0409695192786);
    msg.setSource(25187U);
    msg.setSourceEntity(207U);
    msg.setDestination(57493U);
    msg.setDestinationEntity(218U);
    msg.mask = 225U;
    msg.max_depth = 0.0347503541971;
    msg.min_altitude = 0.772183201289;
    msg.max_altitude = 0.510790198957;
    msg.min_speed = 0.819414360021;
    msg.max_speed = 0.922729370244;
    msg.max_vrate = 0.874646250095;
    msg.lat = 0.495027311623;
    msg.lon = 0.171586497928;
    msg.orientation = 0.452510766785;
    msg.width = 0.0741635955755;
    msg.length = 0.189173222534;

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
    msg.setTimeStamp(0.936283806445);
    msg.setSource(21841U);
    msg.setSourceEntity(25U);
    msg.setDestination(38915U);
    msg.setDestinationEntity(122U);
    msg.mask = 87U;
    msg.max_depth = 0.647574270376;
    msg.min_altitude = 0.797214895531;
    msg.max_altitude = 0.239938302669;
    msg.min_speed = 0.975322908324;
    msg.max_speed = 0.120114109708;
    msg.max_vrate = 0.273846140933;
    msg.lat = 0.646497506114;
    msg.lon = 0.302494377751;
    msg.orientation = 0.951588526746;
    msg.width = 0.965458686939;
    msg.length = 0.859205501924;

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
    msg.setTimeStamp(0.260037526903);
    msg.setSource(42826U);
    msg.setSourceEntity(6U);
    msg.setDestination(63622U);
    msg.setDestinationEntity(132U);
    msg.mask = 70U;
    msg.max_depth = 0.52609819269;
    msg.min_altitude = 0.535481109178;
    msg.max_altitude = 0.0632232814257;
    msg.min_speed = 0.394704813829;
    msg.max_speed = 0.875827382741;
    msg.max_vrate = 0.71476785809;
    msg.lat = 0.694263047716;
    msg.lon = 0.270155902376;
    msg.orientation = 0.440958815454;
    msg.width = 0.994243962492;
    msg.length = 0.0870906920872;

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
    msg.setTimeStamp(0.502238056617);
    msg.setSource(5836U);
    msg.setSourceEntity(108U);
    msg.setDestination(28437U);
    msg.setDestinationEntity(59U);

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
    msg.setTimeStamp(0.702061781538);
    msg.setSource(35734U);
    msg.setSourceEntity(127U);
    msg.setDestination(1291U);
    msg.setDestinationEntity(230U);

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
    msg.setTimeStamp(0.864965021033);
    msg.setSource(45506U);
    msg.setSourceEntity(152U);
    msg.setDestination(15896U);
    msg.setDestinationEntity(12U);

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
    msg.setTimeStamp(0.869689994971);
    msg.setSource(24240U);
    msg.setSourceEntity(126U);
    msg.setDestination(23842U);
    msg.setDestinationEntity(248U);
    msg.duration = 24811U;

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
    msg.setTimeStamp(0.767361229844);
    msg.setSource(32924U);
    msg.setSourceEntity(13U);
    msg.setDestination(62485U);
    msg.setDestinationEntity(42U);
    msg.duration = 1005U;

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
    msg.setTimeStamp(0.539930699334);
    msg.setSource(3334U);
    msg.setSourceEntity(222U);
    msg.setDestination(62602U);
    msg.setDestinationEntity(249U);
    msg.duration = 61794U;

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
    msg.setTimeStamp(0.79205906227);
    msg.setSource(30142U);
    msg.setSourceEntity(109U);
    msg.setDestination(35308U);
    msg.setDestinationEntity(63U);
    msg.enable = 145U;
    msg.mask = 3585965082U;
    msg.scope_ref = 2784061330U;

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
    msg.setTimeStamp(0.208614907923);
    msg.setSource(38794U);
    msg.setSourceEntity(82U);
    msg.setDestination(8053U);
    msg.setDestinationEntity(64U);
    msg.enable = 124U;
    msg.mask = 3348375496U;
    msg.scope_ref = 431921399U;

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
    msg.setTimeStamp(0.515974639612);
    msg.setSource(43218U);
    msg.setSourceEntity(108U);
    msg.setDestination(65301U);
    msg.setDestinationEntity(126U);
    msg.enable = 183U;
    msg.mask = 2086774334U;
    msg.scope_ref = 3110014553U;

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
    msg.setTimeStamp(0.107026299959);
    msg.setSource(57644U);
    msg.setSourceEntity(229U);
    msg.setDestination(13659U);
    msg.setDestinationEntity(37U);
    msg.medium = 139U;

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
    msg.setTimeStamp(0.199086071508);
    msg.setSource(297U);
    msg.setSourceEntity(77U);
    msg.setDestination(32217U);
    msg.setDestinationEntity(72U);
    msg.medium = 58U;

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
    msg.setTimeStamp(0.202400052122);
    msg.setSource(43338U);
    msg.setSourceEntity(116U);
    msg.setDestination(28275U);
    msg.setDestinationEntity(0U);
    msg.medium = 247U;

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
    msg.setTimeStamp(0.177599963774);
    msg.setSource(12877U);
    msg.setSourceEntity(172U);
    msg.setDestination(34540U);
    msg.setDestinationEntity(117U);
    msg.value = 0.240176459809;
    msg.type = 112U;

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
    msg.setTimeStamp(0.0135156476995);
    msg.setSource(47844U);
    msg.setSourceEntity(146U);
    msg.setDestination(13860U);
    msg.setDestinationEntity(103U);
    msg.value = 0.907317276575;
    msg.type = 216U;

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
    msg.setTimeStamp(0.994134659818);
    msg.setSource(47843U);
    msg.setSourceEntity(236U);
    msg.setDestination(25962U);
    msg.setDestinationEntity(106U);
    msg.value = 0.86312554996;
    msg.type = 151U;

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
    msg.setTimeStamp(0.630817229514);
    msg.setSource(15614U);
    msg.setSourceEntity(236U);
    msg.setDestination(32560U);
    msg.setDestinationEntity(249U);
    msg.possimerr = 0.134849785123;
    msg.converg = 0.622082067538;
    msg.turbulence = 0.613829194675;
    msg.possimmon = 213U;
    msg.commmon = 119U;
    msg.convergmon = 248U;

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
    msg.setTimeStamp(0.505263005849);
    msg.setSource(54192U);
    msg.setSourceEntity(98U);
    msg.setDestination(18436U);
    msg.setDestinationEntity(23U);
    msg.possimerr = 0.0593532690772;
    msg.converg = 0.620286841198;
    msg.turbulence = 0.81700089628;
    msg.possimmon = 192U;
    msg.commmon = 22U;
    msg.convergmon = 245U;

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
    msg.setTimeStamp(0.262904497025);
    msg.setSource(25564U);
    msg.setSourceEntity(39U);
    msg.setDestination(3475U);
    msg.setDestinationEntity(78U);
    msg.possimerr = 0.0325161576552;
    msg.converg = 0.702852963634;
    msg.turbulence = 0.78716100459;
    msg.possimmon = 211U;
    msg.commmon = 154U;
    msg.convergmon = 85U;

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
    msg.setTimeStamp(0.61488653579);
    msg.setSource(30237U);
    msg.setSourceEntity(87U);
    msg.setDestination(54540U);
    msg.setDestinationEntity(220U);
    msg.autonomy = 180U;
    msg.mode.assign("JHBNWZFVCPCXYJQOKBFYGTPKMLILCCRPGYWDIIWHCDVUELICDFKAIXTTIGNEOKZUMRIG");

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
    msg.setTimeStamp(0.766649389486);
    msg.setSource(46231U);
    msg.setSourceEntity(98U);
    msg.setDestination(35540U);
    msg.setDestinationEntity(127U);
    msg.autonomy = 169U;
    msg.mode.assign("NOTTYRCADKMJHSDDYKPGFVIJLIPNPYZUFKHTOVGPFMJV");

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
    msg.setTimeStamp(0.79857218553);
    msg.setSource(20292U);
    msg.setSourceEntity(47U);
    msg.setDestination(61362U);
    msg.setDestinationEntity(185U);
    msg.autonomy = 251U;
    msg.mode.assign("USAPMMULUXGGYPALWMYLVJZGOLQOWMCJBBMIPDHNLOZBTBPVTOAEDDLHONREWYPCUWFRFQVGQOYVWVHGJNPIMIEUZNHYUZJQCIASFLLRSQDSBDTFWFHZVRVTNRUXZBEHOXZQPQGPECGDFQSKMJXCGVDRMEWZESNPKUBBXNATJOHBNKFAJXHXSXAVDU");

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
    msg.setTimeStamp(0.993244337666);
    msg.setSource(19493U);
    msg.setSourceEntity(210U);
    msg.setDestination(6664U);
    msg.setDestinationEntity(209U);
    msg.type = 209U;
    msg.op = 31U;
    msg.possimerr = 0.757237617514;
    msg.converg = 0.248636437108;
    msg.turbulence = 0.998591390706;
    msg.possimmon = 108U;
    msg.commmon = 140U;
    msg.convergmon = 239U;

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
    msg.setTimeStamp(0.0480312134933);
    msg.setSource(22412U);
    msg.setSourceEntity(45U);
    msg.setDestination(56409U);
    msg.setDestinationEntity(138U);
    msg.type = 162U;
    msg.op = 119U;
    msg.possimerr = 0.515872259045;
    msg.converg = 0.820546800235;
    msg.turbulence = 0.5933275656;
    msg.possimmon = 37U;
    msg.commmon = 33U;
    msg.convergmon = 173U;

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
    msg.setTimeStamp(0.0706659805228);
    msg.setSource(10207U);
    msg.setSourceEntity(217U);
    msg.setDestination(37748U);
    msg.setDestinationEntity(90U);
    msg.type = 238U;
    msg.op = 63U;
    msg.possimerr = 0.32727540459;
    msg.converg = 0.212161275343;
    msg.turbulence = 0.195237798607;
    msg.possimmon = 27U;
    msg.commmon = 164U;
    msg.convergmon = 46U;

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
    msg.setTimeStamp(0.26209200124);
    msg.setSource(42861U);
    msg.setSourceEntity(44U);
    msg.setDestination(46124U);
    msg.setDestinationEntity(82U);
    msg.op = 93U;
    msg.comm_interface = 97U;
    msg.period = 26830U;
    msg.sys_dst.assign("EIEWTJKHCYZKUFQNDWNLEPLIHSMUWVTRHCXCSOZNIDQXIBNKEKVACDIAKHJXJJGUXMXLSHFUJHFAJHDPWXIMTBMOLTFIUAQUSLCMZQMVWJNSEOXLITATGFYZTVYKXPBXFSGGNVQWHELIPNYRSGUCLFFACORIOFOWERVBAYGMKDZPOHZYUPLQQPOARDMXPTYKSBCZBLVZPGQDJMRRWKGYZRCTNVGVWDERJSWBOHZYK");

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
    msg.setTimeStamp(0.542622227543);
    msg.setSource(21133U);
    msg.setSourceEntity(27U);
    msg.setDestination(2778U);
    msg.setDestinationEntity(239U);
    msg.op = 6U;
    msg.comm_interface = 170U;
    msg.period = 41013U;
    msg.sys_dst.assign("CYSWOJADGLHNUIAMVHYRLPVARTZBQUSNLXNHUUJARDSNLKGQJBBPFHJCQBKTWPVCHXBHKAOZVUZUJKROLGTUEYJMITEEPFOFEGRUBEPBOFHXLJQXFYKPGTEMLAIPYAQIZTDEQHESNWNBMYKCMCUVTAIVWDZTWPMDGZFFMGDVBMHDPECUFCXJJDZMZXTSSSWKWYEONCS");

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
    msg.setTimeStamp(0.813018623427);
    msg.setSource(37986U);
    msg.setSourceEntity(56U);
    msg.setDestination(54095U);
    msg.setDestinationEntity(158U);
    msg.op = 71U;
    msg.comm_interface = 104U;
    msg.period = 64421U;
    msg.sys_dst.assign("BQYAWNEGWJHAYRTXSLGVPUWUMXROFNIYTRKSQVGHEFRZUWXTRGOWCJLZDEPKULZXCIZDNJBOIIFKCKRZBQNSOLLBJZARMQTUPUTLCXXYMOUZPTPUESQRDKMVBTWFMFBVPUIVMRCVGKZNXREVQFIYJZGVNKLIVFMQWTFOAADGGVHOHJO");

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
    msg.setTimeStamp(0.242489321505);
    msg.setSource(55133U);
    msg.setSourceEntity(13U);
    msg.setDestination(58861U);
    msg.setDestinationEntity(71U);
    msg.stime = 136248336U;
    msg.latitude = 0.257554627055;
    msg.longitude = 0.632542348709;
    msg.altitude = 54754U;
    msg.depth = 35062U;
    msg.heading = 50727U;
    msg.speed = -4848;
    msg.fuel = -29;
    msg.exec_state = 42;
    msg.plan_checksum = 55805U;

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
    msg.setTimeStamp(0.88930991355);
    msg.setSource(53006U);
    msg.setSourceEntity(189U);
    msg.setDestination(4419U);
    msg.setDestinationEntity(193U);
    msg.stime = 3946560091U;
    msg.latitude = 0.648630135453;
    msg.longitude = 0.761723473278;
    msg.altitude = 33512U;
    msg.depth = 60788U;
    msg.heading = 44053U;
    msg.speed = -27183;
    msg.fuel = -1;
    msg.exec_state = -25;
    msg.plan_checksum = 15700U;

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
    msg.setTimeStamp(0.633164069827);
    msg.setSource(8152U);
    msg.setSourceEntity(16U);
    msg.setDestination(2062U);
    msg.setDestinationEntity(220U);
    msg.stime = 1279547484U;
    msg.latitude = 0.00717844974974;
    msg.longitude = 0.952671880347;
    msg.altitude = 7004U;
    msg.depth = 21055U;
    msg.heading = 35638U;
    msg.speed = -1948;
    msg.fuel = -14;
    msg.exec_state = 88;
    msg.plan_checksum = 10581U;

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
    msg.setTimeStamp(0.151504174032);
    msg.setSource(20897U);
    msg.setSourceEntity(179U);
    msg.setDestination(40539U);
    msg.setDestinationEntity(155U);
    msg.req_id = 42035U;
    msg.comm_mean = 78U;
    msg.destination.assign("LEIDWIZHIXLJRPLGOMPARSEQNCIVLMCTTCGLSNBRZHDAVUBNCRFWGVQXYMTCPFEAJBUMVUTPAGXZUROSMKGDGWKCAKXJUNIFKDZIOICXWVQCQWPKTJTCELBBCYHYRTZNFXHVTLGQYRQKDHDJEEYFULOOFHKSXHZFEOMWSGOSXAMWTDZYRNQFJZZHDR");
    msg.deadline = 0.54325092021;
    msg.data_mode = 37U;
    IMC::StationKeepingExtended tmp_msg_0;
    tmp_msg_0.lat = 0.751468691007;
    tmp_msg_0.lon = 0.849007395542;
    tmp_msg_0.z = 0.636376709191;
    tmp_msg_0.z_units = 187U;
    tmp_msg_0.radius = 0.133177531032;
    tmp_msg_0.duration = 40532U;
    tmp_msg_0.speed = 0.383471800012;
    tmp_msg_0.speed_units = 37U;
    tmp_msg_0.popup_period = 60664U;
    tmp_msg_0.popup_duration = 8356U;
    tmp_msg_0.flags = 122U;
    tmp_msg_0.custom.assign("VJJWJKXYKDUPNVMPBMDWRCBYEWTABIHFGNUNOVWVVYULXCFHOEPIXYNZXHXVLNDRGZWCNWMSOSKYZUBNDEZQXDVSHCHSWXFMQCAJHJBNXSQEKLYIDAHIQFIASEVCOPGWOPUUMTJFPYOCIDABEYCLMPIVJETUZWPAQIKRSLATOR");
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("INIHJYGQFRYZRVBKVESXIAQERJHWSNDWKODSLOHYSAKWKZFMVLJUTLHAPUFGZVUWWCBVTBYTCGCTEUAVOYDFWVTDEBQAUGQQEMMWXRMMDYNIKXJKUXYPHKLNWAAIDJMPWSLSIQCZNMBEXUUTAPIFVKPGTIPGRDWJKOCFSGYRGOUFFPVDQNHTMBMCCEZOELNAMLHZRXXGPLHXQOTRNSXODCILVIEJZXCOQGBHURKAOZFLFZ");
    const char tmp_msg_1[] = {-48, -112, -87, 28, 80, 97, 73, -51, 84, 121, 40, -90, -99, 105, 116, -43, 116, 59, 23, 20, 50, -79, 75, 86, -119, -59, 50, 98, 74, -25, -118, 114, 47, 27, -14, 55, 4, 56, 4, 83, -27, 85, -26, -50, -22, 112, 58, 87, 32, -79, -33, -62, 82, 75, -63, -33, 53};
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
    msg.setTimeStamp(0.226418694457);
    msg.setSource(8663U);
    msg.setSourceEntity(47U);
    msg.setDestination(52870U);
    msg.setDestinationEntity(99U);
    msg.req_id = 48596U;
    msg.comm_mean = 220U;
    msg.destination.assign("IUWRGOVXQPPEZCFYLUROMOFINJBGDHFGLSDMGWZFXKWDYJKGBNQKDPAAANCYTKLYVIMJJQAVHJHIQSTLHLHLKECWNGDSCWUIOJ");
    msg.deadline = 0.534294810782;
    msg.data_mode = 54U;
    IMC::AisStaticInfo tmp_msg_0;
    tmp_msg_0.id.assign("HTLYMUKNGHRWMNCTFIPXOFSEXIBBUKNNZZWVRJIFONKSVSIYQEPSRTQZZSZNLDPIHOXRACUSBQFHUDESVLYXKEVQTGAQVWGROZGZQ");
    tmp_msg_0.callsign.assign("ZSWUNTBWGRFPARKHFHDGXVNKREGYFRWTEUWIUNMQKWSMNOXQDKJEIJBRXTZVADQYKPQTGZYLIALLLRDHMYJVDSUSVOJXZSBDBOASXINLTLT");
    tmp_msg_0.name.assign("LINDTPFBAFDJYVVEGZSPDPKDVAUGIESJKLZODSFYGCCXPIQTXMGNDUCMRTHBGYYHWTCH");
    tmp_msg_0.type_and_cargo = 214U;
    tmp_msg_0.a = 0.804818852128;
    tmp_msg_0.b = 0.409419822757;
    tmp_msg_0.c = 0.421238412955;
    tmp_msg_0.d = 0.93907717722;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("ZUSLJMCEIKFROCIZSORWMKTDUXGVWYMQXIPNLGTEEFDCUTNAWHBPYKPFPTVBRAMVZAIHGQYVQTOMKOYILMEUL");
    const char tmp_msg_1[] = {72, -79, -14, 40, 40, 116, 21, -117, 92, -41, 47, 67, 59, 72, 89, 49, 24, -12, 59, 99, -68, -112, 10, -17, -29, 35, -32, 93, 67, -109, -59, 99, 93, -11, -111, -127, 25, -112, -92, 10, -39, 35, -13, -127, -18, -69, 93, 54, 4, 109, -22, 26, 112, -60, 78, 51, 72, -108, -21, -64, 37, 56, 74, 109, -75, 67, 0, 61, -81, -123, -36, -17, 48, 31, 93, 107, -92, -89, 34, -113, 84, 44, 123, 23, 4, 21, -25, -75, 36, -47, -39, 8, -40, -88, 37, 9, -49, -48, 114, -102, -99, 22, -36, -37, 20, 110, -53, 35, -16, 62, 71, -77, 25, -30, -28, -89, -53, -122, -73, -17, -64, 117, -62, -19, 88, 47, -66, -21, 115, 89, 125, 109, -66, 16, 9, 93, 108, 110, -67, 73, 104, -18, 26, 98, 92, 34, 91, -53, -125, -49, 117, 38, -120, 55, -95, 2, -68, -65, -46, -40, -1, 11, -105, 8, -125, 61, -116, 75, 118, 60, -5, 15, 1, 45, -90, 36, 97, -49, 58, 18, 2, -126, 115, -75, 81, 34, 12, 23, 92, -105, 21, 117, -77, -68, -79, 119, 24, 119, 92, -4, -104, 87, 9, 57, 26, 76, -30, -34, 18, 17, -120, -96, -23, -117, -82, 39, 109, -45, -107, 1, 63, -118, 3, -18, 80, 40, 19, -113, 52, -53, -57, 115, 109, -96, -83, -92, 45, -117, -62};
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
    msg.setTimeStamp(0.996470406622);
    msg.setSource(7468U);
    msg.setSourceEntity(225U);
    msg.setDestination(21566U);
    msg.setDestinationEntity(153U);
    msg.req_id = 12481U;
    msg.comm_mean = 153U;
    msg.destination.assign("KINVKVNRRHLXBWAMSQHKBIEVTZCXCIGMDJEZWJOYEWFRVRXO");
    msg.deadline = 0.728245398671;
    msg.data_mode = 86U;
    IMC::RemoteSensorInfo tmp_msg_0;
    tmp_msg_0.id.assign("UEZVYGILNAOTZLLMGUXSJKCQHAJRTZETFNTSPCIHXUQFZOWIKRLUFMBOOQXPVXOMWPKFLZGSYYJBHNFBQRGTMYOPBJVWDKWKMUYWMRJIEDNCRHDPRFXYTEEBAJUJFKAJKVQIHQAQAUTYIGBPQNCXIYYGDSBTLUFEORJNOWCPZKWZBJTHHBLEXIUSSOVXMVGDDMCYNXWAEZILX");
    tmp_msg_0.sensor_class.assign("WPSCLBIESXTWKVNURFADDVNYJHHULOFVVHTIUYIWPHXKFSBMGCBYEXNZGYCJMQVESRJIQGMWASZYEPJGSTUFWSHGOWHZYUOZBPTPKUYCKDCADPNRDDOKGLWLIKMBVVYORQQEIPXZIPHFCTFSEEAQMQXVOHAGLRMNBTSMIDUWFCXXBZIDWGNKXYAEFNJMVHTRJORMFDVZPLUOXKKJAWQCAZMJTB");
    tmp_msg_0.lat = 0.69228545021;
    tmp_msg_0.lon = 0.894166513789;
    tmp_msg_0.alt = 0.101255987955;
    tmp_msg_0.heading = 0.583321438574;
    tmp_msg_0.data.assign("OULZQJOPLSPCXJZWGQQCXZBGWSUKWQWGMBTDRMSIZKMUHLDWYHBTSFITCVMEQAVINJRRIFHYHVAOCSJOIHDUEFADXTZGBCOONMLFXPNFLTEMAKOIUDDJZXCYLHOQWPPSNTOTFREAYBZGHRNHQGAFOZDRMEKAUAXGJECELVL");
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("AXHYRGTWCMAXJUPVEJBLVMMCFIFFPESYXGPSFWXENIOUCOLJRDOCIQHWQBRTPDGWZUDJZZKNFHJZNOGBDRYNLTBDXKOGFBEBHYGSJUQTMNAIHTQBGWRCZLOHSFTIVKMRQWTUP");
    const char tmp_msg_1[] = {74, -71, 53, -2, 90, -48, -88, 8, 83, 96, -13, 30, 110, -13, -62, -102, 1, 98, -13, -45, -97, -56, 14, 66, -82, -34, -80, -27, -1, -42, 11, -55, 70, -33, -99, -67, -116, 5, 38, 61, -29, -3, -76, -127, -108, -18, 55, 107, 9, -1, -12, -128, 74, 104, 90, -24, -1, 57, 23, 28, -19, 54, -24, -34, -36, -12, 26, -116, -79, -89, -81, -87, -97, -94, -58, -88, 24, -53, 89, -80, 54, 1, 26, 44, 39, 39, -3, -41, -109, 23, -125, -88, 94, -35, 71, 58, 15, -3, 88, 44, -93, -27, -70, -60, -78, -85, 112, -42, -92, 120, -41, 62, -29, -113, -80, -2, 30, 99, -66, -123, -73, 25, -68};
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
    msg.setTimeStamp(0.427965213073);
    msg.setSource(53130U);
    msg.setSourceEntity(16U);
    msg.setDestination(22287U);
    msg.setDestinationEntity(204U);
    msg.req_id = 30441U;
    msg.status = 99U;
    msg.info.assign("TJCDQMZFSJSJKCACNPMIWXIKTGBSFVDVTYOYBZWYLNWOCOREKBUYPCFWRYVIROHRAGIHBXUXRUKAKMUEBHMLPSIDEUAWPDHLFQQJNIBLGBASZYSTHIFNVEOAJXRZZLWIDHMEDGGQVWXXORLTGKVBVPWQVSOOYHAKXKCGMJHCPZMERRPFDCAWAUZHXUFEQXJINSEMTGIJNNMJNOCQLLOGEQZWTDUDSHNPVTUBVQXJYLKAGZCKPFTFNBRZTPQS");

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
    msg.setTimeStamp(0.866886739221);
    msg.setSource(11357U);
    msg.setSourceEntity(217U);
    msg.setDestination(7396U);
    msg.setDestinationEntity(227U);
    msg.req_id = 43589U;
    msg.status = 121U;
    msg.info.assign("QREXHOIILGJPHLACPDYGAQMUCOTSLSEBLROWWPNQSACPZRWVFFHNRAVNQDZEJMBENVXGRWUSFUDZTZDSFLXWFWVUBEGZTFYBUHBSCZBRHDWNITULLOVIMXEKCQYOEODZDVMQXMKIDWUZOTAVWFGJQYTYORYKXQIOJWXLKPCXNAKAIJRCEYGUUFPCTSHQXQPDGHPIXAJBJDZTGNUCJ");

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
    msg.setTimeStamp(0.18133735875);
    msg.setSource(33509U);
    msg.setSourceEntity(208U);
    msg.setDestination(25835U);
    msg.setDestinationEntity(197U);
    msg.req_id = 50050U;
    msg.status = 221U;
    msg.info.assign("YKYJEQONVAVHBJRZMKIDYQGQGNFWCPGJWFHEVHRVNKJJLOPRDPBAXHXRNOCIPGLBWBWYLAKMRCDTGLBVHKMVTIWTZJMXZUUNFTGMPGOUYZRDVACSUFFODKLNMFSLLXNQIOCRUJWEBWIZYFORTKBTQENCETLKIUBYUSZQZDMISWHAHQPCOSSUEYXQWJCGRDPMU");

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
    msg.setTimeStamp(0.568217904294);
    msg.setSource(54069U);
    msg.setSourceEntity(66U);
    msg.setDestination(63735U);
    msg.setDestinationEntity(98U);
    msg.req_id = 7426U;
    msg.destination.assign("CUENZMYMKGYNPVFPNKSBCGAPBLLGTXOJEKNYTRNQVFLLXZAHEPUYOWAICYIGQIUHGCCXUWE");
    msg.timeout = 0.452384723508;
    msg.sms_text.assign("UECYHZYSJMCUXVYHWZGRBWLOMMAVLUCRXQUPMYUADGOKPNLHKHPXTNTARQPWDUIZHOIFNBCTXWFDTAGMSNRTHERLSSPKJKNUONJOJHAOPDBCGBTLOBWGRFMSEQXEFEDMFIJABSSIPYDLAENOVNVZVYEBDHXJROIFBBKQIRSDVTKKFGYJFXIGJQFYKZQTBGXMADL");

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
    msg.setTimeStamp(0.244625766216);
    msg.setSource(45685U);
    msg.setSourceEntity(116U);
    msg.setDestination(59898U);
    msg.setDestinationEntity(248U);
    msg.req_id = 23957U;
    msg.destination.assign("ECZODZQREOQ");
    msg.timeout = 0.0903775248194;
    msg.sms_text.assign("TVEBCKOKCBQGZWARUIZIGFFIGIGUMPUVXNUHKHHAHDONVAKBJNUOCPEQOIDLDAWVXESGBTFZQTUYXDCTVSFUEFSIJQTZJLQPOAKCZVIQHUWGEWSBTA");

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
    msg.setTimeStamp(0.894179345937);
    msg.setSource(63187U);
    msg.setSourceEntity(14U);
    msg.setDestination(21835U);
    msg.setDestinationEntity(87U);
    msg.req_id = 48843U;
    msg.destination.assign("PHWWMBWTYPYDHIAGFDOBUEZKWXJLRWTNFXE");
    msg.timeout = 0.461785422893;
    msg.sms_text.assign("ANGQDSVURFACBVPRHUQCIHNND");

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
    msg.setTimeStamp(0.821257587227);
    msg.setSource(58922U);
    msg.setSourceEntity(87U);
    msg.setDestination(44011U);
    msg.setDestinationEntity(61U);
    msg.req_id = 13565U;
    msg.status = 92U;
    msg.info.assign("DXVTIWZNFRNXNEZJGUWWBYVZPTEXYCDFGXBQAUTHSORMBAKASDYJJCTHKAOTVYUSRPBFEROWRKQFPXCYIFZJBFWSRLMECQNWZVLRSIYGTOHULRUMSUIGUPPXJKIQHPLFZDEB");

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
    msg.setTimeStamp(0.568194770882);
    msg.setSource(63862U);
    msg.setSourceEntity(80U);
    msg.setDestination(394U);
    msg.setDestinationEntity(112U);
    msg.req_id = 39740U;
    msg.status = 30U;
    msg.info.assign("EWIYSJRVBGOSATOKCHWHLTYURWPDMNHRCHIQ");

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
    msg.setTimeStamp(0.410215681152);
    msg.setSource(28930U);
    msg.setSourceEntity(149U);
    msg.setDestination(53199U);
    msg.setDestinationEntity(161U);
    msg.req_id = 43510U;
    msg.status = 89U;
    msg.info.assign("YQVVINUPWTHAEABZEOKECLFHMRTLSDDAFDJSQYTPVBCGQMRCXOWEOXARJSJGBZ");

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
    msg.setTimeStamp(0.181441648805);
    msg.setSource(20160U);
    msg.setSourceEntity(168U);
    msg.setDestination(7281U);
    msg.setDestinationEntity(76U);
    msg.state = 152U;

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
    msg.setTimeStamp(0.180202782041);
    msg.setSource(10909U);
    msg.setSourceEntity(253U);
    msg.setDestination(49815U);
    msg.setDestinationEntity(72U);
    msg.state = 250U;

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
    msg.setTimeStamp(0.838693452978);
    msg.setSource(60357U);
    msg.setSourceEntity(140U);
    msg.setDestination(30386U);
    msg.setDestinationEntity(114U);
    msg.state = 112U;

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
    msg.setTimeStamp(0.680931868317);
    msg.setSource(10030U);
    msg.setSourceEntity(142U);
    msg.setDestination(71U);
    msg.setDestinationEntity(204U);
    msg.state = 229U;

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
    msg.setTimeStamp(0.963125840166);
    msg.setSource(8173U);
    msg.setSourceEntity(142U);
    msg.setDestination(48155U);
    msg.setDestinationEntity(178U);
    msg.state = 48U;

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
    msg.setTimeStamp(0.0040325996023);
    msg.setSource(45121U);
    msg.setSourceEntity(85U);
    msg.setDestination(26495U);
    msg.setDestinationEntity(34U);
    msg.state = 30U;

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
    msg.setTimeStamp(0.372673137018);
    msg.setSource(7619U);
    msg.setSourceEntity(137U);
    msg.setDestination(22799U);
    msg.setDestinationEntity(254U);

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
    msg.setTimeStamp(0.593639218332);
    msg.setSource(57164U);
    msg.setSourceEntity(177U);
    msg.setDestination(64594U);
    msg.setDestinationEntity(219U);

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
    msg.setTimeStamp(0.572975492228);
    msg.setSource(4453U);
    msg.setSourceEntity(162U);
    msg.setDestination(9554U);
    msg.setDestinationEntity(240U);

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
    msg.setTimeStamp(0.408355007379);
    msg.setSource(36666U);
    msg.setSourceEntity(225U);
    msg.setDestination(61799U);
    msg.setDestinationEntity(1U);
    msg.plan_id.assign("KFOQHGNMSRTMWSWUGAMXOONFCORPISXRIPZUMBPNNNXBEEDQFJJJMLQWCDCHFJQQHYKZULTDBPIPVHAFLTQXUCZLGVDNYQVWDKROSLQUDJGNVBYS");
    msg.description.assign("ORKYUYYPWUNXUUSPQCDKHMBHDKDLLYVFLXKMSSKJMQAVOKBXYEOQSOZNFHTDIQJKDVRNUZZGHAIFHOYFQWUOREWTNTLCOURVPRAPKBHAVJGXCUZGVZEBIFHOHEQUAXPJIXSNZZGNQIMIFGMKINWXGCVDLTWCSTCGSEOTYZBFHCWWNYLIAZXQLJDBCRVTUJEGTEPCAJBGIREMAWOFMDATLDJMEXQRYJNBMGPNVMDESRVSPFTSPCXZLRWKFJYPB");
    msg.vnamespace.assign("EBUHIXOAKPEDVWYQFTNWSXRLKWUCPCOPNIBLANXRICVTGMPOCWMHDIVBHYJLYFMQFQQJDJFPIMGJTDOATRGWUYKGVMRVYVKEFXQOCXUZNKMDVHOEUPIHTUPMNDSHMPXXGGEYRKSFBBFDFUJCXNBSQKAVRZUHIIUGPZVINREYGRLSHBQBJNZZGTXEWWOKJ");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("SUAITRZLOGRUXJEHCSDNXOVIICFVELBXATCZODEVPOBITRWMLAVQWWLFKDDYYAZZVKXNRKGKQFHZYMILDCDNQHQOERKTNDQNUIGLPWJIOPXQEDJTKAOMSFAGMFNTDVRSCMJPQZLLKQQSRJWRVGAOGXEHSUYNLSYTVKBFEIGPWFBIH");
    tmp_msg_0.value.assign("ACIVJUCRTUOITRAQMETFZCWXXVRJIISLJKRBKEUEVKPMWYPMMOZLJYAUPFCILCAQGUIBCPMXBPKXFEHOSQUTAHULKBQFSATRHDMBEFSLIZPQPTKEXGZNHGLFNVDRVNZTLWNGDYIGQSQEPOXMWYDETAFFTHMOHKSYEWBPQVDZXAJGMVJHOOHWNZZJCGLPBDQVWCAVIOJSSIYWHW");
    tmp_msg_0.type = 214U;
    tmp_msg_0.access = 157U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("QRASCFSMUCRRQZNJVETXJJHZIUOKTFJFKGGRYQHGWIHFXDLEGWVDKOTSTNFMESBHCSNYCATNOJYSQYNLDFQLLEZCKZCQAKPXBKYEOZZRLXJXVYVMAEPCNUVMZNDDBSHAIAVLLIBTTSEFMAKCNTVIGWGBSXRRJBAMG");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("BSOPRRLRXJELQCIGYMSYEGAIOCXQFAOIWQBHAOBQLXPNFZJSPSEUPGCKNILFSSFHQVZNKGDGXHRBOCUMCRQVSDWWCXHAMEGKRQZTZVJURTODLBDASWCDTJPFAANHLURUBMNKBKTEELWREPJGNQFWWKYVACLYLPUKNMA");
    IMC::StationKeepingExtended tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.lat = 0.973079719062;
    tmp_tmp_msg_1_0.lon = 0.41767657491;
    tmp_tmp_msg_1_0.z = 0.390829838013;
    tmp_tmp_msg_1_0.z_units = 107U;
    tmp_tmp_msg_1_0.radius = 0.329896524278;
    tmp_tmp_msg_1_0.duration = 3470U;
    tmp_tmp_msg_1_0.speed = 0.396574652597;
    tmp_tmp_msg_1_0.speed_units = 126U;
    tmp_tmp_msg_1_0.popup_period = 33258U;
    tmp_tmp_msg_1_0.popup_duration = 62244U;
    tmp_tmp_msg_1_0.flags = 221U;
    tmp_tmp_msg_1_0.custom.assign("FKBLMONZTIMUIUHCDOPFGVPOMJLCYQZSXPNSXGOGQIFINYVJBGKWOTKHWHWGHRLKDA");
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    IMC::CommsRelay tmp_tmp_msg_1_1;
    tmp_tmp_msg_1_1.lat = 0.356720319524;
    tmp_tmp_msg_1_1.lon = 0.398984843994;
    tmp_tmp_msg_1_1.speed = 0.652088989273;
    tmp_tmp_msg_1_1.speed_units = 20U;
    tmp_tmp_msg_1_1.duration = 50093U;
    tmp_tmp_msg_1_1.sys_a = 5386U;
    tmp_tmp_msg_1_1.sys_b = 60915U;
    tmp_tmp_msg_1_1.move_threshold = 0.611861493416;
    tmp_msg_1.end_actions.push_back(tmp_tmp_msg_1_1);
    msg.maneuvers.push_back(tmp_msg_1);
    IMC::PlanTransition tmp_msg_2;
    tmp_msg_2.source_man.assign("SQNCMPZBABUOSBPEVJUGLAIMDOTRTUEQMLKHSTTNQQSRRJNOCXKVUZMAFRKIAHYTRMN");
    tmp_msg_2.dest_man.assign("UHHUBTZOMPJXNJFWMZTOWBGHBNLTFMLKFDOAYASAFGESOLWZTIYECRDVOKKGQYNVSOINJMTAANQEUFZHAULYMS");
    tmp_msg_2.conditions.assign("QXDQDFPREOSWBDQINYYYCBBRQWDKXKUXZHUCLZZWBKLHVFAGSVAXPSQRILLWUAAIKRESQNMPJVLTNWYSIXMYBDAOZCGGLH");
    msg.transitions.push_back(tmp_msg_2);
    IMC::PowerSettings tmp_msg_3;
    tmp_msg_3.l2 = -40;
    tmp_msg_3.l3 = 95;
    tmp_msg_3.iridium = -23;
    tmp_msg_3.modem = -90;
    tmp_msg_3.pumps = 113;
    tmp_msg_3.vhf = 14;
    msg.start_actions.push_back(tmp_msg_3);

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
    msg.setTimeStamp(0.00784479148991);
    msg.setSource(29274U);
    msg.setSourceEntity(111U);
    msg.setDestination(47651U);
    msg.setDestinationEntity(0U);
    msg.plan_id.assign("BVYQIDSRWZHJLOYTVRWZZHURDETRJGLMKWFSUBJBVDEMKJXZPZFZCFTAIMUPXNZCHOURXRAILBQFXQBBYOZKSYLPFJYCHNSKPHPUQUBOXHYGBHAAVERAAIOTNAIPMTTSVMFWIBSNUJCGHCSKUWQBLSGLKGPACDNMZIXLEDMLQXHNXQJIENFKWNUCKOMOFWXVIGDVUMCFJGWJMCXZEYL");
    msg.description.assign("JZVUDDRYXCENMWUPWVZKAJQPAAPMQBQG");
    msg.vnamespace.assign("HNVAIJGYOVBRXGWDVQGGMZUCAFLSVZXBHDPYTJLKQKWHPLVMKLRRLIKVHTETLZOUFUIEGUDMKZC");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("LUVIGSAPUEAPBHYFXBQYZMMLBYTSZOAQQAXFLFHNKOFFTXWRWNXDWMEKAGTBRUZJRYOOBAXNHMYBGOUJCAQKEGNWRIHFDZESPAUXRSQKEZYYPTMNGAITVEPORUZPQLLLWDJEIQQMUGHXHSTRGJJDHWKDBILBVENORCDJJWMCHZSSLITSJONIAJCQNNRKGWVZVEPEVTVOWXYLRNSDFTCUQVBFIWYIKC");
    tmp_msg_0.value.assign("IBYKIREVVCSABSOEWRMSPHUZLDCTICKIYAZLYQFCZLUEDTGZFKDUONNQALTPWFIMVMZGRYRFDTBAUJQXMUQBBJVRVQWBTZQHNEJXLAOYSXSHQLUDDEGFTJVOQYTAZGPEMDXXCSAHFKFDGFPPZNMDCFWOHYUIOVPEVAJVRNWLKAJSNTPMECTOBWNAERYDPPRGBGIQJJGBBHOUNLCZHOKWKGFWXXZJLNYXWWJIUHKGSQRRHKMKVCXSYOMHISCXP");
    tmp_msg_0.type = 17U;
    tmp_msg_0.access = 229U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("OPJSBOAQEIDQZWURPIRLCOJUPHYRKWOQBGYANFTHJXCSQEGRDVWVUSGRTIVWFYHGMIBLAOXPTXDNVRCCANKMZUHGKDBOILODTSCRSKYSYGEZGRJUEWLVMBKUAVEUMDNPIVDFWJJIIMFTZKEM");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("PCKHMKGXLOAQSZREGYMXHVPDQMXZMFOBWLSAICJEFLQNXJINZNTTFMBNBLYIBSZODEOQVH");
    IMC::ImageTracking tmp_tmp_msg_1_0;
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    IMC::FollowPoint tmp_tmp_msg_1_1;
    tmp_tmp_msg_1_1.target.assign("ZSZSXDUBWRDSDXYOYBIDNPFQFHCHQOAGTVPQROEBJTPRDPAYUNAMBVLHKYZAMNFOCLQO");
    tmp_tmp_msg_1_1.max_speed = 0.845052314686;
    tmp_tmp_msg_1_1.speed_units = 158U;
    tmp_tmp_msg_1_1.lat = 0.160380111716;
    tmp_tmp_msg_1_1.lon = 0.663010931569;
    tmp_tmp_msg_1_1.z = 0.352190887865;
    tmp_tmp_msg_1_1.z_units = 185U;
    tmp_tmp_msg_1_1.custom.assign("GIXCNCOCQJOJYUJNSSRAZDFLFPQTWUHLSPGEPWBOONEWCJLJOSVADZKSNAIOXHFIVFHXMMLACLBVIAHKBJKWEUTRNDIQKXLUEHFIPNGSXVAXYGBBSAMTRVEAKBNBQZ");
    tmp_msg_1.end_actions.push_back(tmp_tmp_msg_1_1);
    msg.maneuvers.push_back(tmp_msg_1);
    IMC::CoverArea tmp_msg_2;
    tmp_msg_2.lat = 0.500658123231;
    tmp_msg_2.lon = 0.0704737130964;
    tmp_msg_2.z = 0.292360313371;
    tmp_msg_2.z_units = 21U;
    tmp_msg_2.speed = 0.369518303702;
    tmp_msg_2.speed_units = 242U;
    IMC::PolygonVertex tmp_tmp_msg_2_0;
    tmp_tmp_msg_2_0.lat = 0.886227724213;
    tmp_tmp_msg_2_0.lon = 0.931061205154;
    tmp_msg_2.polygon.push_back(tmp_tmp_msg_2_0);
    tmp_msg_2.custom.assign("FGOOMVNAXZFFGBRCEQHMROTOUYLUQWCXMOUIGLOEYLKYMPWKLVJYG");
    msg.end_actions.push_back(tmp_msg_2);

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
    msg.setTimeStamp(0.639444324311);
    msg.setSource(24566U);
    msg.setSourceEntity(81U);
    msg.setDestination(8592U);
    msg.setDestinationEntity(239U);
    msg.plan_id.assign("LZGHHTSDXMIHKEAFERYWHCIMDBDTWIQTUOGSYBLMBWKMKHGNRMRLGGRATHZCPFQTYXPGYT");
    msg.description.assign("PJATMGPDOVOGZHCTJDKCNYOLCNOYNKSBLUJAAYSLAGYJXTRXJPKAAQCFWYJLEWTWNMHNIBFUVTNDCFHCGTODXFSPIGNZOXWHWQQFPZUGRQJWORBSHLMIXCZUZLCUGUDWAJUIXWSBBUZEEOFHPDPVHRMXFYSNABKMYQVYDQVILLMEVAMOREPLWHWQTSXFRBVTCVKBKPDBKOUGHIQXREJMVIUJSQGZRLSKTZGE");
    msg.vnamespace.assign("JFJRZWZKUIVJMXLEXWALGLDNBOZDVKAIDUASQWAIKMJAWHJLPSSMBZSKASFTNTFYLQXKKTSYMYYVKVLOYHQYEYHPCCHNAXWRQSXEEWGYVUZRKFDXRGOQXDFIHBPCWFYPUKCUIJOZTJTZOUOZFZROGEJLTMPPQIPHSIDCUBNIPCDMWMVRCDNFOQHTIN");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("EXNEHJBBYGECSKPDZWJSWKLEIVDBXURUZJYTZOIRNSHUAVVJKCSAOCYNORLHEIBVVIFTEMFLKYQPPIBMWRXUKLHZQJLAQWYZRRIVDRYXGXDURMVQFUAMWFGKSPSUGJNQNLODTB");
    tmp_msg_0.value.assign("UUDRGKAEXEEWHKWVGAVTWVVUVADBDZHKFKPXYECXDESTPLBGZLNTZSYRZOSQULKDIHJYXONXLGZBNCRMGJYCXYWFSTVPAZXCRWTFGQZHRBZIGFSFJZNHNBIPIEU");
    tmp_msg_0.type = 54U;
    tmp_msg_0.access = 214U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("JHVQMVBNBSFPEEOCVRNJVWLQTVDZAZXREINQTMZVYWWRLDNWKRHNUYLPGTOCYMLIDDAGRVHKYBLLDPOPHCSGKMAQFFWXCILPURWRNHGZAAQZMUMHWHLUEYMBFKEQJXUZXFXYXZKSKZTIBUQPDUGUBPXCAKSCIY");
    IMC::FormationParameters tmp_msg_1;
    tmp_msg_1.formation_name.assign("NOZWVGUDYVNNIJQYBOVMGASATWDCAXTRWGCOXTKHEZNNFGNFRHV");
    tmp_msg_1.reference_frame = 215U;
    IMC::VehicleFormationParticipant tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.vid = 36055U;
    tmp_tmp_msg_1_0.off_x = 0.322487737109;
    tmp_tmp_msg_1_0.off_y = 0.377404379598;
    tmp_tmp_msg_1_0.off_z = 0.945399735724;
    tmp_msg_1.participants.push_back(tmp_tmp_msg_1_0);
    tmp_msg_1.custom.assign("QRMZEXSVPGUVTUTSUSSDSXYOGXCJZERRDXQJWIQPUUYLAVZGKYLYHHDDXKOFTKLMDMYWNSTMPVMPSCIRAJWSOUCVAGWEBNZALLBQDNYJIQVUTWHQDTEPCRBUEMLMKGFZCWROVGYRUXGNILDHLHATIIOWKYPRH");
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
    msg.setTimeStamp(0.393225067076);
    msg.setSource(19759U);
    msg.setSourceEntity(19U);
    msg.setDestination(23479U);
    msg.setDestinationEntity(53U);
    msg.maneuver_id.assign("VSWUYUXLMVJFHRQUAQAHOHZMVIMXBBSNYPERGYNYXYKSJFSDMZZGCCYIYAFTELQUVPGNQDQUSIPRIZYLDCUCVJTBJBEWMWDZEKXCIENSOPLDTHAOFGBGGPJRVVCVJZKKL");
    IMC::CoverArea tmp_msg_0;
    tmp_msg_0.lat = 0.333732936889;
    tmp_msg_0.lon = 0.323987351679;
    tmp_msg_0.z = 0.654198950358;
    tmp_msg_0.z_units = 78U;
    tmp_msg_0.speed = 0.214849197706;
    tmp_msg_0.speed_units = 88U;
    tmp_msg_0.custom.assign("AECWOPNJQGRORSISDQEHRPUDKPLLXUXHSGYCXBQZFWRBPRMNRRVXWMQDHTEISXSVGHFNXYBJFWNUCPOVSBWSLRHNHLLYJAMTEEYTPEEJKIAMMPTXKBVCJIMVDWVGGZ");
    msg.data.set(tmp_msg_0);
    IMC::Announce tmp_msg_1;
    tmp_msg_1.sys_name.assign("NOZSZIQLESQYFOGHDWIPFCNDSRPGLSYXXEQGCQLBMUSNCZYZCZUSLMVDAATNYSOJEKXSPBWNPEAWNIREUHZGLXJMABFEFXFQZTVKKWKYETQVGPNBUWBWCHRJCUAWNR");
    tmp_msg_1.sys_type = 186U;
    tmp_msg_1.owner = 31156U;
    tmp_msg_1.lat = 0.449878405487;
    tmp_msg_1.lon = 0.502625409094;
    tmp_msg_1.height = 0.881345645661;
    tmp_msg_1.services.assign("JWVYVKOQVTMUORHTHXGHJXXZQHAXIFZRIRGULDTOJITWBLBCNXNFTBZNEESDKU");
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
    msg.setTimeStamp(0.241826768125);
    msg.setSource(50689U);
    msg.setSourceEntity(234U);
    msg.setDestination(5736U);
    msg.setDestinationEntity(182U);
    msg.maneuver_id.assign("XHPIPTXVLOLINFXLRQBAAJADWLCYKMKJSRGWGDVY");
    IMC::Launch tmp_msg_0;
    tmp_msg_0.timeout = 10271U;
    tmp_msg_0.lat = 0.477437636066;
    tmp_msg_0.lon = 0.831277189825;
    tmp_msg_0.z = 0.627729536769;
    tmp_msg_0.z_units = 140U;
    tmp_msg_0.speed = 0.988954726129;
    tmp_msg_0.speed_units = 91U;
    tmp_msg_0.custom.assign("YQLLSPUDLTXVQOKCEWFNKZBASBODQGKUNFOAOUZVTZQKWSERQROXLMFXEJDMACMAYYGTACMEHVYIHVHIOOTCGZVREIZXVNBURMYDPWFUPRUUNCUDTGCJOPFIXQNSMPDNPIGKFHTKNAFHTKDGBZSWRZODVSSQNFAZJAGRJHQYTOKLPLPWEZYHXQNHDSCUGPJBAYIKRYCZAWBEENJIMWW");
    msg.data.set(tmp_msg_0);
    IMC::PopUp tmp_msg_1;
    tmp_msg_1.timeout = 20450U;
    tmp_msg_1.lat = 0.176779057603;
    tmp_msg_1.lon = 0.744899649772;
    tmp_msg_1.z = 0.155208595472;
    tmp_msg_1.z_units = 209U;
    tmp_msg_1.speed = 0.130340670329;
    tmp_msg_1.speed_units = 192U;
    tmp_msg_1.duration = 1730U;
    tmp_msg_1.radius = 0.427123139964;
    tmp_msg_1.flags = 26U;
    tmp_msg_1.custom.assign("MYEXYHPTDSOQLZBHVYM");
    msg.start_actions.push_back(tmp_msg_1);
    IMC::SoiWaypoint tmp_msg_2;
    tmp_msg_2.lat = 0.241408835107;
    tmp_msg_2.lon = 0.140296871464;
    tmp_msg_2.eta = 1110897423U;
    tmp_msg_2.duration = 51744U;
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
    msg.setTimeStamp(0.475042801682);
    msg.setSource(25715U);
    msg.setSourceEntity(147U);
    msg.setDestination(2112U);
    msg.setDestinationEntity(242U);
    msg.maneuver_id.assign("FXUXMSXBJNZEOQAMFVITUNMGZRHEFIUYLKWTZPMLWSCHUFJGDBNSVHCQGEGYZHBSSMNPZTAOLQHSOLPDXFKABCHYMGLBD");
    IMC::Dislodge tmp_msg_0;
    tmp_msg_0.timeout = 13437U;
    tmp_msg_0.rpm = 0.868650573173;
    tmp_msg_0.direction = 129U;
    tmp_msg_0.custom.assign("EIAKLRXHRWMFBFXKDTZRABXSIHCTIZJYOJHUFDLSFDDJ");
    msg.data.set(tmp_msg_0);
    IMC::LinkLevel tmp_msg_1;
    tmp_msg_1.value = 0.48882814953;
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
    msg.setTimeStamp(0.421757031906);
    msg.setSource(42115U);
    msg.setSourceEntity(152U);
    msg.setDestination(1804U);
    msg.setDestinationEntity(75U);
    msg.source_man.assign("IKKAJMUDUDBSKNRDIYILVJVOGCYLMMNSJMNOFVWTTPQWZRJAHWWHAFBONZFDRLIXTXFOATF");
    msg.dest_man.assign("ASIUXJGQDPWNHPRKZWJRVJLFHVWLUTFNQDJBAZREMIBTILIKEDZAHJFGQQYUCOFAPPDQEUOXEGAFYPRXMNMQHWHTXCITMWOOSOZJRKSAFOONDKPDTWMHRMGCBMEVLNQKBHCXYEDBCYQGRIIIIZTXBERBDTKKFELCZCSNUTVNSRROTZJVKLVGWHYBYLSAHMXWPCLTQZYYOZWLGXFCSUHYUWPS");
    msg.conditions.assign("FRORGFWASCBMEAHHQYYLPXKBJVOSCIDYPOEKVMHDYFZTKUIHNKUUTPRQJEFLRWXBNGGLAZULFOCGEHAEQQZFMGKMQFPRYBDPTCQNSMZJWEUGNWZOTBTTEMKLCOINQUBRBSLADDMYPXSSYKAGMTINDKJNCSFLVZIPCIHOFJZUXNQRJULNHSTCEEXZBXCGUHVAWWINJIBKJLYMITQM");
    IMC::DissolvedOxygen tmp_msg_0;
    tmp_msg_0.value = 0.030743957308;
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
    msg.setTimeStamp(0.419873894411);
    msg.setSource(9833U);
    msg.setSourceEntity(132U);
    msg.setDestination(43327U);
    msg.setDestinationEntity(192U);
    msg.source_man.assign("PZDTHHLMQRPCYXDRVNFLZUWQJSJDBJCHCPZKDVJXHQLGCYPJXSCBXOYRVAXTRMYZBSFQYZEPMGDCHXGOILARKSBSOIFJBTGLAMLKHDGCIEDJDSEPXUGEYZWUUFNRTBVQNHEPHDFQVRTIAADZKESIXTMMFKYKUXYGSEOLZSSTWAGWZLVFIPWGCNANWWWJJRWJMMXVUVOQNYAGVYNHKRNCKUBIWVFOFETNEAOIOTTL");
    msg.dest_man.assign("CSRVYHLUBGQJQFUDXCBIIFDVSN");
    msg.conditions.assign("PWBNQVJGFFKISYOAEWPCKMWNYSA");
    IMC::Event tmp_msg_0;
    tmp_msg_0.topic.assign("XMVIVHLZPSYZUBGIWSLIRCLWNJBTXQKFUFJRNAFGSY");
    tmp_msg_0.data.assign("RUQIMIDYJKRUJOROBMCMWFNMTAGOT");
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
    msg.setTimeStamp(0.513401330656);
    msg.setSource(34496U);
    msg.setSourceEntity(129U);
    msg.setDestination(35294U);
    msg.setDestinationEntity(87U);
    msg.source_man.assign("IUVGSQXKYNPUHZGDGFSXVLMEDYUTNQDCPKWCWBWZCHFAEBSOKJFSHKAMJXYVCHCRIJ");
    msg.dest_man.assign("EVFORHBBAHOOATIBGWXPYQEPMYWIBMGRZXUFGNJLOYJSCSNJGWXQDTIENCWSITRLPKHWMBIOYASUKVDFMPAKRULEPMQPARQLHLYSNXOXWDJTKLGEUYCIZCBPTLPWGIEFYOWLEBTQDXUDGUHKHQQFRDZXECQYNMOCSUNPKAZMGUSNVVMS");
    msg.conditions.assign("XDYIMFXKGUWNNORBKFUXWTNFGJHTVPMCYHEKSDCLAXKANPZPWEYPVKFDBIDBNQFRKPLSFLWDAWTYSUQVOAVLXCNKMJQTZBMCLYHLIEMANMFUDRRKHBPWMBWAAVXAGJXOGSNPJOXZSWRQTTBDUSOGPGCE");
    IMC::EntityInfo tmp_msg_0;
    tmp_msg_0.id = 144U;
    tmp_msg_0.label.assign("XSLYBCPRKKUBIUJYAHP");
    tmp_msg_0.component.assign("CRPLFJUKWLXUEEOCNSOTDAVHNWIHJFSIEXIGARRKKPZ");
    tmp_msg_0.act_time = 26357U;
    tmp_msg_0.deact_time = 54461U;
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
    msg.setTimeStamp(0.0393703326035);
    msg.setSource(27187U);
    msg.setSourceEntity(51U);
    msg.setDestination(4894U);
    msg.setDestinationEntity(122U);
    msg.command = 29U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("ROZIGAJYEHZRRTVEMEWVIXAOHOQYDTHWUQPWUBNDWHJBJGJBGTQUZGDVERUHEFSPRDXRPCMMKKSCMJQQZNVQQNRPFWPRHNMBYL");
    tmp_msg_0.description.assign("UZBCIYDXHAQVBXVTIOZLWUUWUTFXEMNLHPFZSRJALCNYQKERLZNGSTPJGYIQTQMMVXXWFPQMDLSORVOYPMDFBUGXCBYRITJJGLQIBFALWSRHQHCOKKVQYVFJWMV");
    tmp_msg_0.vnamespace.assign("GIZYYMULPBYFRCDCJRUPPQTDBXTPVTWXDZLFHPLWJBUEZMO");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("GEJEPMJEIGZSVAJSIGUBGKRYHAZVHNCSMDXFDQAOMYNHQWBJYQTKUPXEQAFEZKSBLEBNAAKNIVPRD");
    tmp_tmp_msg_0_0.value.assign("QBTFAGIIFJPRUHXYBFYSC");
    tmp_tmp_msg_0_0.type = 58U;
    tmp_tmp_msg_0_0.access = 210U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("IRCLTSSTBWOHPAITPRFPQKQTYGJBEWEZMWQGHQHBZPFNMEDTJXGYKZPHXWNYMZFXCJDNFMPIXIEUDWYDILWHMCWCKRELMHSYZJAKEVPIGFAZYNRUBQCCKVJXHGAMKCWEUFCBQZNQVTXSVOQSPBAVTUMLMSEHABFHTYBOLXALUKZFTVHSEJAKDOFNUQDORGMBOALXSWIVBYZNFUVPODJYLPZLRJRTGGCKUVODIVLSNIJYWOER");
    IMC::PlanManeuver tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.maneuver_id.assign("YBKUIUEPQKODGOLGOQHYINDGNKLJXRKSFDYWXRJYSOUUMOHFFGGHSXRAVSNJCMACRFEECNBXTWAWSWCRBPRZMXTGNICBJUZVOZOCYABIYYOADLLMJZXGUETIXLMJQQPWTKDKEHAMLZHTGKNMUTHHYSEEFKSXBHXDTHMWFJSPSIHQPDXNUCQWVJVPJFEIIUTDZWDAWGFCARILBJVLQRMFRPSNBKDNZVLPPEALOAFQUVTWCNVBE");
    IMC::FollowReference tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.control_src = 34810U;
    tmp_tmp_tmp_msg_0_1_0.control_ent = 203U;
    tmp_tmp_tmp_msg_0_1_0.timeout = 0.926288290062;
    tmp_tmp_tmp_msg_0_1_0.loiter_radius = 0.503821324395;
    tmp_tmp_tmp_msg_0_1_0.altitude_interval = 0.518507446184;
    tmp_tmp_msg_0_1.data.set(tmp_tmp_tmp_msg_0_1_0);
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
    msg.setTimeStamp(0.446153752209);
    msg.setSource(7550U);
    msg.setSourceEntity(186U);
    msg.setDestination(20201U);
    msg.setDestinationEntity(137U);
    msg.command = 148U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("ARKKNDONEXMWWCOYVDSFIFKMRCIQWUWNUDBXIXEQDDPVZEWJNPCEZGBSCCJMZGPVWMSEBRVGPIYOXVTGKHUWTYSUZRNKSSVMVNOIFFRJOQSCREGPHJNMZIXMRGNMHQPUCUFJZIBMNE");
    tmp_msg_0.description.assign("IPLQHMPFHALRZABKEXZNDYHXNCLGVNAHCNWBKOYREOVFQEADCKPQRZK");
    tmp_msg_0.vnamespace.assign("EEXLWAASMQBWAKZWRELHTJNRONPOEQNTOAJFDWCDELCKPFHPFNBDIQQYCKMRVEUQZKGGWCHUTUYRQCLWRVXZRRHKSETIGXBQXKCXZGDMLVD");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("SDKYFBBCZBUTPNGOPFJWESQEXTMHOUETQZWEARROEDINTBLNWEFLKBDKRGMHMZBAUNHNQSOULOISCPTRGKIBJPI");
    tmp_tmp_msg_0_0.value.assign("DAUSVQDZLJWFIAPKIKXDJTWXQRHDGWNTSZYNPMUOQIBFZNZGCBUGNPPCOPLUDMXYQHQVPDVZRZLVYOEMSYHJJNHEOXRZTTGJEMQYJKFRLMVEXABHELGKUIVMALPYFBHRCXWSLEAMACPTA");
    tmp_tmp_msg_0_0.type = 164U;
    tmp_tmp_msg_0_0.access = 174U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("BQKHVUTGDQVWPDBPASWNIYNUEXBQILZRWNVSWLRFQXGOTGEURQIUXYNHKAKPIDGMNJEWIXHFCHSIMECJTBSLJGORAMPPRYSOLJSRLMXPKGJUKMUAAVTIQWXBERBXSYOYQEQNZWDIVYSBAFNGZDIHFMMLJCC");
    IMC::PlanManeuver tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.maneuver_id.assign("REOFCGMDVLMMBVIGYXYXIGGOZETIKXBGAGHJFAHACXU");
    IMC::ScheduledGoto tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.arrival_time = 0.799925871967;
    tmp_tmp_tmp_msg_0_1_0.lat = 0.831137765164;
    tmp_tmp_tmp_msg_0_1_0.lon = 0.689306638672;
    tmp_tmp_tmp_msg_0_1_0.z = 0.861885719919;
    tmp_tmp_tmp_msg_0_1_0.z_units = 161U;
    tmp_tmp_tmp_msg_0_1_0.travel_z = 0.787951069808;
    tmp_tmp_tmp_msg_0_1_0.travel_z_units = 3U;
    tmp_tmp_tmp_msg_0_1_0.delayed = 148U;
    tmp_tmp_msg_0_1.data.set(tmp_tmp_tmp_msg_0_1_0);
    IMC::GetImageCoords tmp_tmp_tmp_msg_0_1_1;
    tmp_tmp_tmp_msg_0_1_1.camid = 231U;
    tmp_tmp_tmp_msg_0_1_1.x = 27965U;
    tmp_tmp_tmp_msg_0_1_1.y = 43039U;
    tmp_tmp_msg_0_1.end_actions.push_back(tmp_tmp_tmp_msg_0_1_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_1);
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
    msg.setTimeStamp(0.199844049764);
    msg.setSource(39448U);
    msg.setSourceEntity(69U);
    msg.setDestination(6884U);
    msg.setDestinationEntity(205U);
    msg.command = 132U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("PQYBKGSIDJSVPEKHNLDLGQCBEXFJBVZKXIFXQWIWDHHVRTTGJVAFEXJAQFCMUMROHTASFSOUDUSLKHCSIFORNNQMDYZZEOSXOXRJHUVVJOYWBVPEZNRIHSZGRLDGOIWC");
    tmp_msg_0.description.assign("EKAICYMUVSWXBBVKBZQKURVDUCFCQRGIROLNGRDFHRYJUIRLDSTBHISMATMAYEMDVKUQKGJKGAHPYLDEGUXGLMWMNAJAJBXWVBQZPYISNUXWYRCXIQASTZTHPYTLQSPOCUWROSYJBQZUCEPIXVLKWEFSVRJNHJYAFDNOMDKXGEPGTNHCLXZNBONQRCKYPELBFEHMHDIALZTMZGZBPJIJOFQSHHIFZZCPOWFOUCXEVDOWFTQJTWAVTKXNO");
    tmp_msg_0.vnamespace.assign("YRBSLPHFHQIEXCLFLFYNJEMQWTRMWIBJLYYOUWGIYUJPALHMCENADGAUOBDSZWEREHPDNJKWBDWRZUUAPXXGROVILVCCFJFVLXSBAZTTQIGTHLXKBBZFRCNKFONVSZZQXBDSHVXFIDTQCGSSDNUOZVPKMNXIQRHCOZUPAVGIQGEPVDOASOMETJPECYEQLKPJJMWYXYAGCVKIUKBHTMWBLQSUWKMKSKOARMZEJTPVXHAUWINYFFNTRGCDN");
    tmp_msg_0.start_man_id.assign("WCKWNKTVPJMNV");
    IMC::Sms tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.number.assign("KNXAVGMNVBSDPZCLIBDIWXMOJQHIDPCENWUPCKFFGZQQQKZGNULLUDJYXUIFWMEFTOAFWJBYWELAHZENEKPVRQQTDHCTJKNGHRVXGFCCTRYIZCSYSRMFLTPWGAFBLDWVGHBOHOMNYXDZNOJCOPVUCVZSATDYEEUMVPI");
    tmp_tmp_msg_0_0.timeout = 44775U;
    tmp_tmp_msg_0_0.contents.assign("KNLZJNDKNSNIPJDCCXQRJMYMRAVAIJORIEFGJDAYFUWDBITPUULMBAP");
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
    msg.setTimeStamp(0.933881853559);
    msg.setSource(53970U);
    msg.setSourceEntity(3U);
    msg.setDestination(21108U);
    msg.setDestinationEntity(140U);
    msg.state = 150U;
    msg.plan_id.assign("ZHBBKDBGKAUQORFVTTUUDNULMVAWBHDUAMBIFWLKVSGIDXOVPHOFXKQPZZCEJSWXQIZYQCKU");
    msg.comm_level = 163U;

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
    msg.setTimeStamp(0.24289187681);
    msg.setSource(13891U);
    msg.setSourceEntity(33U);
    msg.setDestination(53341U);
    msg.setDestinationEntity(230U);
    msg.state = 198U;
    msg.plan_id.assign("MMFSBPQHWYIIKGYTEXGNJYOOYDZRLMZOPWVAAHPXLACYRIHSNQUZHRKRVCIOFCSOHIRVPTHOINZBXNWJDXAGPSSXYTEUZYTZSXNJCWOQMWCUTINVBOFHYFVKQTCZCNGRQIQWMEJIIGRXLLFBUMDHGFHGNNAKAKENMJOAWKJJARUETXEPUTD");
    msg.comm_level = 141U;

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
    msg.setTimeStamp(0.1102440213);
    msg.setSource(9159U);
    msg.setSourceEntity(185U);
    msg.setDestination(60532U);
    msg.setDestinationEntity(212U);
    msg.state = 222U;
    msg.plan_id.assign("PZXJKAJLDUBXINWOXPFMMSYBRJQDFWOJVUNXMBDSTEUTGRHNPAXIJSLLWEBPJRHYOUTZVEGLEPEOVFZGKNVOVHQXQMUFONMGCOEOJIYRUAGMUGFVPDNTEJRDXRWZFAMKJSTOVEIRPUGMYALSNCRFK");
    msg.comm_level = 53U;

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
    msg.setTimeStamp(0.663793555863);
    msg.setSource(42199U);
    msg.setSourceEntity(19U);
    msg.setDestination(46838U);
    msg.setDestinationEntity(220U);
    msg.type = 226U;
    msg.op = 105U;
    msg.request_id = 8377U;
    msg.plan_id.assign("JORYVRCXTGHBMETXQICSMPFMHTHBGHRHKUNXUVSXDLRVDGJOZBZAODMYNJIBPEWYWVDKBBQKJE");
    IMC::TrexCommand tmp_msg_0;
    tmp_msg_0.command = 245U;
    tmp_msg_0.goal_id.assign("LHACECMQZRZNIDRIFRWXHROSNLXKSPNRWWKVCIRNTGIPYPNTISYXTAPGNBIZATUCAPRFMOKKXKNHOGVMOCCAJDCNKZLBPPYEZBGRHQBSYWDEBJKDWNMUSWF");
    tmp_msg_0.goal_xml.assign("TCUXJJALPJREALOGYGJPDVMSQRCVYBVPOLFFFEXCCWYDLYZBCUWYNQQOFTEJGHAKOAGIWXDJVBPYKZUBFKSXNGLSNSSMHBEDMBUZZIPFGHJVJF");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("TCSLDVQHYWTHMOPJDWNXJXFFNGVPJEDEOGOFUENSAWIWRIHAMRSALCMUNSFQEMGKQRYURIDYGQEBJYWEHROKUDZTMCRMQZTZYMFCAQMBQILBNZGEBWZJFIGZGVHULHXRVLYOJQOJUKRCZWSKLZLYGKYHSUUHRNTEUVPXKDKOWBFABNZTWZEV");

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
    msg.setTimeStamp(0.612270641984);
    msg.setSource(2850U);
    msg.setSourceEntity(119U);
    msg.setDestination(7905U);
    msg.setDestinationEntity(77U);
    msg.type = 219U;
    msg.op = 249U;
    msg.request_id = 40750U;
    msg.plan_id.assign("FUJTIZULRUTWFGPHHKGSNZTQSMTLYPRIKJYZDEAJPDRLHTMTQGQQUCFIVDFGYINXUVVTBBYYRCDWXXHXCVPQOIEEWNMZCAJCUDCOSOAEGARZCAZIDHKKDZFLWJKPUWSOVNIMMVZLLUEOWQNYYQFMIHRFHSTLHVWUNQEPQOIMDMRWOKAEASXRPLCJPFMAKEXESYDLLWGZKEFB");
    IMC::LblConfig tmp_msg_0;
    tmp_msg_0.op = 99U;
    IMC::LblBeacon tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.beacon.assign("FHLCJOUIBAMOMONEQPYAOTVTFVQIQGTFLSJFUIACCDWIVHHPFHDAIUNFZZWJBXWLATNDWPXKVJRNZEPLJJZRTRHBGFSTRZBOWCZWRVVUQNFQXEJLZGBGLWMBCXPMPEWIYJJUSPYLNXQ");
    tmp_tmp_msg_0_0.lat = 0.346010327341;
    tmp_tmp_msg_0_0.lon = 0.046861564553;
    tmp_tmp_msg_0_0.depth = 0.447462149535;
    tmp_tmp_msg_0_0.query_channel = 86U;
    tmp_tmp_msg_0_0.reply_channel = 94U;
    tmp_tmp_msg_0_0.transponder_delay = 142U;
    tmp_msg_0.beacons.push_back(tmp_tmp_msg_0_0);
    msg.arg.set(tmp_msg_0);
    msg.info.assign("EPYLRMNKHJOICOKOFHOOVIBBMLAZPPMTTRHKNYXBQVUFWFHFBGDXDVNGTLQZTIBDFZCEPSNNIOIRUGPMSBHUGZWAAELELQXJOKXCRMGZNAVUDHTRLMEJWGYHJDBLEZRPTUFPRREAAWMHIQZQDU");

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
    msg.setTimeStamp(0.548533015186);
    msg.setSource(47182U);
    msg.setSourceEntity(230U);
    msg.setDestination(37040U);
    msg.setDestinationEntity(186U);
    msg.type = 33U;
    msg.op = 222U;
    msg.request_id = 22246U;
    msg.plan_id.assign("IQYZQXMPELEFWCBNAFRDZXYPRDSXFIUR");
    IMC::CcuEvent tmp_msg_0;
    tmp_msg_0.type = 69U;
    tmp_msg_0.id.assign("NJYOWFCSKPIIWXNYDUWDRIZGWAHRYKDAUMMTRFLWYEJTVQOSBFDUNFYFUIVRLEVJXNHDZXKQPPHEQPZXMTXMAXMCHAOPOYQIWEDEJKLHTRGCUBJDLQGKHBEZUTKBRANABMBSUMVFHHOVRTGTJZKSBSSME");
    IMC::SetEntityParameters tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("PBQYUTBBFGEDMLGXJACYWTDSSLGFEKBNDBDZFOCHAZZYSCHWGYJPZTIMNDXMEZJQTMAKHVIWJJLXCQIEILKPBJRNRSULPXCVSOARYHWXJLIOZJTQEOYMIVUYUFTTSSWUXKG");
    tmp_msg_0.arg.set(tmp_tmp_msg_0_0);
    msg.arg.set(tmp_msg_0);
    msg.info.assign("DINTQJCGBXDACTIKWBAOZPFFMNPUHDDCUMESGGBLSZZOOIIPXORVYJWNAKBTUTDQFOERUKLFSVPAFGTOQOHPEQNGNNTSRZZWSVNLJUCRBMYYSXZLCJXKAWMLVZCBJLGAXGT");

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
    msg.setTimeStamp(0.10299448901);
    msg.setSource(56838U);
    msg.setSourceEntity(187U);
    msg.setDestination(62469U);
    msg.setDestinationEntity(127U);
    msg.plan_count = 28760U;
    msg.plan_size = 381427256U;
    msg.change_time = 0.200314492101;
    msg.change_sid = 8126U;
    msg.change_sname.assign("FVGWHGOUSZUGCHIQHUXPNNAHDUTRDMODGVYKFXPLEMNYQJIEGBJPPASYFGGEWDISLHIJEIHJKWJIRJXDCPGVDSICBQILKUSMIF");
    const char tmp_msg_0[] = {-125, 41, -58, -73, 104, 88, 37, -16, 27, -125, 92, 57, -116, -23, -54, 110, -96, 80, -53, -82, 19, 113, -102, -39, -25, 64, -20, 50, -100, 23, 108, 109, -3, -8, 116, -14, 45, 89, 23, 122, -83, -108, -17, 37, 57, 36, 108, 96, 54, 17, 76, 29, -67, -81, 121, 123, -81, -76, -75, -126, 97, -54, 28, 78, -26, -68, -20, 88, 48, -12, -72, 78, -5, -124, -99, 43, 65, 107};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("ZUTTFIUBBAKQGEWILJEDCWXCSNBAZSEZFTQFGRXATJESWNORETQEUUKQGPHHLSFQEOLCBSNVIVMOPNHMJVKAUBMYWAGJPPGSVLXJFCVJYVUCPIPGXCKERH");
    tmp_msg_1.plan_size = 57261U;
    tmp_msg_1.change_time = 0.394957778377;
    tmp_msg_1.change_sid = 32395U;
    tmp_msg_1.change_sname.assign("LIWICJFQOLYZSLTFUVVRDGOYFNXRWPQWAGJJPHBGHFWUZXXTAZWGVYFAPZXNHIZCGSXFNGEWHGROSHCRVFOMKRBEMWMHYNDDQVAZMOTOBHXAAETDKKROVSNYULWICUCSJNLMFBIUPUATMVDZRRBXMUCNTIHQPFJGVPDVBHAJJLTSBNIQEUKSGQXDXOIAQHSPSBCREQYDPPNYWOTJCDCKQIKTLZJKUKDEYTMMZKR");
    const char tmp_tmp_msg_1_0[] = {108, -102, -106, 94, -105, 30, -12, -56, 46, 121, 34, -80, -62, -85, 124, -58, 121, -61, 23, 87, 5, -109, -98, -45, -42, -73, 55, -93, 123, 117, 62, -84, -87, 26, -66, -50, 71, 17, 2, -109, -14, 14, -68, -26, -48, 98, 43, -18, 104, -15, 76, 22, -43, -102, -118, -6, -21, 14, 36, 22, 46, -74, 78, -49, -114, 11, -98, 26, -12, -105, -22, -22, -2, 9, 38, -111, 96, -98, 121, -18, -47, -24, -80, -65, 22, -57, 110, -19, -39, -106, 59, 123};
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
    msg.setTimeStamp(0.461585254705);
    msg.setSource(46352U);
    msg.setSourceEntity(145U);
    msg.setDestination(15458U);
    msg.setDestinationEntity(7U);
    msg.plan_count = 28774U;
    msg.plan_size = 1234647835U;
    msg.change_time = 0.243646498055;
    msg.change_sid = 27020U;
    msg.change_sname.assign("CYDBQAGDMRXMNCZUAOZVSXDILSWTLSVPIGKZKMYUEJYENYVPZLNBPUQWRINHFWCCBSVQUAWANUMATGLJYIXKFUIBCXCTFFFIBFDZOLCRQDHIAENDEMWRPSYWJEBULNHLWGGRTGXEMZBJZQXBOBOYQYDVXPPSIHXJMFZKSDUXYCQGCJVMDJGMRJLEFSDZKZABINRLSWKFSIQWOVKKJUOTYV");
    const char tmp_msg_0[] = {-119, 60, 60, -6, 89, -85, -16, 50, -69, -9, -7, 24, -51, 13, -25, 44, -86, -79, -76, -115, -65, -14, 97, 126, 54, 21, 83, 75, 55, 13, 97, -43, -124, -98, 90, -52, 49, 56, 112, 21, -125, 80, 27, 80, 91, -69, -93, -30, 16, 11, -62, -113, 50, -1, -2, -13, -62, 102, -120, -59, 80, 122, -117, 88, 98, -43, 41, 101, -100, 96, -14, 38, 50, -102, 64};
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
    msg.setTimeStamp(0.824363780202);
    msg.setSource(53933U);
    msg.setSourceEntity(128U);
    msg.setDestination(41375U);
    msg.setDestinationEntity(172U);
    msg.plan_count = 42980U;
    msg.plan_size = 1944532502U;
    msg.change_time = 0.477340644202;
    msg.change_sid = 43302U;
    msg.change_sname.assign("CVTVHMKGUGJFHBKRIQWNGULLVTJAMXXWKZZPHNZOSITYXVLYIPCNAQMUSFQOTRDSKGWLXBRFBJAQCWGTWYTILDZNXDKWWLCRNLCBPSYDGBUDMQPFHEAQXQQAYISHEHTTEKBLCFYGPXFCMJJOSY");
    const char tmp_msg_0[] = {5, -5, -83, -77, -111, -26, -57, -73, 60, -104, 62, -65, -22, 22, 113, 87, -120, 70, -110, 101, 60, -1, -109, 70, -118, 55, 24, 109, -25, 117, 25, 105, 116, 61, 76, 125, -75, 1, -49, 45, 27, -7, -24, 68, -19, -48, 77, 46, -59, 113, 24, 124, -70, 23, 121, -81, 75, 64, -3, 83, 29, 60, 125, 20, 25, -65, -44, -110, -34, -52, -111, 102, -44, -19, -82, 92, -81, 34, 80, -35, 123, 107, -107, 0, -10, -1};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("OEYVWESXLWRRFNKELYGJYLBXUZUPRVYIZMDAFKSKMYGHEILCGHBBSAVSMAZDLWBDGAHKJRSOOFHBCQQNBDHUPJTKCSKGMHATZIPZKVECPIRPQTUNTZKVWSFLHJMVIJCZMNMYQJFEJWZRNJBGMLYPAYHPXOJGIPDGMWRMFLOANOUBYCPTDIFEWSTNEXCBZZGUURPXTXXVOFKARBSTTAUNQQWXCSVOERXWXOOLHDIQVU");
    tmp_msg_1.plan_size = 40198U;
    tmp_msg_1.change_time = 0.00490456229713;
    tmp_msg_1.change_sid = 43250U;
    tmp_msg_1.change_sname.assign("BMMTCEONVYXQZAXKTPQJXQVNUJZEFQQCUNLGPRFFLIPFSRUBVEXGCBWOXJKMBSIMMWDHBSAYLHQHGNPXIZFEWJWUHRNIUEOVAIYTTAMCXNGGFZCRQCRJZDVKTGWNWJGRWHABLJENDKAYW");
    const char tmp_tmp_msg_1_0[] = {-54, 75, 72, 93, 18, 108, 24, -49, 4, -94, -37, 3, -69, -17, -79, 20, -16, -42, -68, 25, -28, 23, -6, -103, 50, -111, 66, 46, 89, 125};
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
    msg.setTimeStamp(0.351319329198);
    msg.setSource(39066U);
    msg.setSourceEntity(237U);
    msg.setDestination(64374U);
    msg.setDestinationEntity(68U);
    msg.plan_id.assign("CNYEYHQXAJJRFJFMAUCRMZDKBRROIWSESDFKLKYDVFALCNBZXESWZOKVBYUVFMAJKZDKDOSQMSVOCYULCQWXBZIPHREHRWORPSHHADQLZZFQRAIVPGDUXRPTYHTT");
    msg.plan_size = 57618U;
    msg.change_time = 0.171336198642;
    msg.change_sid = 19424U;
    msg.change_sname.assign("VCNMFIORBIDNVYNERMSDXVDCUFGQLYOSXNAUHSSRDIMAAUXKUHKGRAHJGIKWTHDMBENTGOXBQWBEEASZUHQFKJSGBHJTLZOAEHMP");
    const char tmp_msg_0[] = {-105, -86, 76, -19, 53, -118, 118, -81, 121, 18, -119, 14, 102, 14, 91, -64, 81, 62, -53, -77, -10, 11, -115, -101, 124, 52, 82, -41, -56, -91, 68, -20, -113, 74, -128, 25, -109, -121, -82, -108, -26, -15, 87, -45, 122, 13, -96, -61, 87, 37, -96, 21, -31, 39, -43, 89, 28, 9, 2, 126, -21, -9, 83, 62, -55, 70, 72, -56, 111, 46, 41, 122, 39, -107, 106, -5, 6, 126, -30, -124, -99, -98, 55, 42, 41, -79, -67, -31, 76, -119, -126, 56, -62, 80, -115, -109, 39, -18, -110, 11, -112, -8, 94, 103, -112, -8, -126, -86, -72, -87, -113, 110, -66, 23, 79, 92, -103, 27, 97, -112, 54, -45, 82, -52, -14, -54, 0, -79, -120, -74, 40, 15, 39, 87, 22, -123, -13, 13, -122, 91, -84, 29};
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
    msg.setTimeStamp(0.316744541713);
    msg.setSource(9921U);
    msg.setSourceEntity(112U);
    msg.setDestination(40889U);
    msg.setDestinationEntity(136U);
    msg.plan_id.assign("ANJDWLTMSTHGDMWXHTUNHHQSBHPDTNFBJXRYCAFIMOLXBVYVFYVEPWAJWIHWHYAQIJGHOZZSBGCXCYS");
    msg.plan_size = 16222U;
    msg.change_time = 0.102342696679;
    msg.change_sid = 812U;
    msg.change_sname.assign("BYUFKVCFNZHYFYFTJUEENNYNCOGCVOPTBOXJWYSMMAHRCWILFSCOVIJKEKNAWBHJYDMQJBRRKKLGFUXNCOSZXWZKISIJPMBD");
    const char tmp_msg_0[] = {37, 101, 86, 115, 94, 74, 19, -84, -18, 9, -61, -40, -13, -114, 110, -103, -10, 31, -15, -123, -54, -21, 81, 49, 121, -61, 56, 48, 38, 17, -39, -109, 116, -94, -79, 50, -50, 38, 17, 42, 41, 40, -127, -52, -31, 106, -26, 103, -63, -73, -88, 96, -57, -31, -113, -56, 116, -74, 119, -126, -5, 72, -58, 95, -63, -15, -50, -100, 115, 70, -103, -64, 77, 125, 84, -38, -110, 41, -4, 56, -118, -35, 103, 70, -75, 88, 75, -3, -47, -44, -18, -55, -36, -35, -91, -90, 0, -95, -71, -114, 50, -24, -42, 95, 34, 29, -12, -75, -66, 82, 63, 58, -35, 17, -98, -4, 6, 106, -62, -119, 0, -86, -10, -6, 115, 110, 74, 46, 52, 5, -25, 61, 53, 47, -44, -76, -120, 83, 33, -104, -25, 11, -127, -2, 121, 3, -37, -8, 125, -118, -94, 24, 32, 9, -8, -49, -66, -39, 59, 118, -24, 109, -24, 77, 21, 11, 109, 57, 66, -108, 115, 14, 58, -101, -27, 21, 97, -89, 9, 62, -84, -115, 66, -79, 110, 111, 63, 86, 111, 51, 18, 81, -63, -16, -105, 69, -72, -34, -46, 109, 95, 61, 0, 70, -28, 32, -54, -1, 92, -110, 59, 17, -65, -94, 105, -57, -117, 82, -122, -98, -87, 16, 63, -57, 88, -42, -86, -106, 35, -15, -11, -35, 63, 28, -40, 22, -10, -76, 24, -60, -49};
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
    msg.setTimeStamp(0.898263466223);
    msg.setSource(23418U);
    msg.setSourceEntity(34U);
    msg.setDestination(62311U);
    msg.setDestinationEntity(105U);
    msg.plan_id.assign("LLQPWNTOMIKMPTLVSQOKCHSANQAIFANRAVNZQZJXTFCYBQZAXNLUXUVKMDDWHSARZLCDUDGOEKUFJRPZBTXZCDLBZBEYFGDVIBYFKTEXIHRPIFYABXGMSUHJWYOCEQGWURCDCMHVSNDEHBXOCMCTLXYSRNPJPZIVVVKVFIFXBWJM");
    msg.plan_size = 267U;
    msg.change_time = 0.0310518537;
    msg.change_sid = 37251U;
    msg.change_sname.assign("DEQHKXAJBYUVBMRFNGCIMBUEOUPMYSNQEACVPOJDSIBLDCROWPWCNFONZGUCTZHDBYXZLEZZYVGSTNYPJBLISVOGXQAEECVOGTIT");
    const char tmp_msg_0[] = {-21, -28, -66, -5, 65, 125, 67, 116, 68, -124, 82, 68, -101, 89, -81, 118, 96, 68, 76, 120, 44, -59, -6, 113, -93, 98, 80, -110, 34, -94, 91, -18, -78, -95, 67, -53, 3, 21, 107, -97, -21, -104, 100, 40, 60, 25, 43, -50, 6, -36, -24, 68, -2, 101, 10, -104, 125, 47, 88, 69, 38, 49, 27, -113, -79, 75, -111, 24, 67, -126, -41, 104, 14, 98, 108, -20, -69, 82, 95, -50, -88, -61, -49, 111, -121, 57, -18, -113, 62, 105, 69, -43, -35, -56, -97, 69, 72, -7, -70, 55, 73, -72, -66, 91, 46, 119, -84, 21, 100, -71, -32, -125, 78, 85, -116, 100, 16, -62, 18, 29, -18, -104, 26, 107, 17, 119, 115, -4, 121, -105, 35, 121, 40, -61, -62, 118, 93, 125, -125, 70, 32, -35, -117, -116, -103, -43, 6, 112, 119, -84, 101, 7, 83, -18, 31, -31, 16, 16, 21, -7, -109, -115, -95, -68, -72, 13, 6, 7, -50, -97, -15, 25, 80, -88, -28, -13, 9, 69, 5, -103, -108, -111, -64, -52, -7, 56, 7};
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
    msg.setTimeStamp(0.906942116027);
    msg.setSource(42050U);
    msg.setSourceEntity(43U);
    msg.setDestination(52188U);
    msg.setDestinationEntity(62U);
    msg.type = 37U;
    msg.op = 128U;
    msg.request_id = 14549U;
    msg.plan_id.assign("RNIXHAHOYHWESYVUTVQHWSPKYRKTCVNLUBXWKNZDCHXUPTLDOAFBTTDAENAFJGIDJZQIDYJCEWGVVQEZBIMEGPTIEWEZLRTGJBAXQZFMMZPRROKUJIIWZXXSHYDOGFCLQDSBKZGYCPLKWHQLYZUIHSRVPXRNSSFNTJJOOGJGVCMUMY");
    msg.flags = 54740U;
    IMC::LowLevelControl tmp_msg_0;
    IMC::DesiredPath tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.path_ref = 3166184742U;
    tmp_tmp_msg_0_0.start_lat = 0.938883149818;
    tmp_tmp_msg_0_0.start_lon = 0.154047732783;
    tmp_tmp_msg_0_0.start_z = 0.954129285921;
    tmp_tmp_msg_0_0.start_z_units = 164U;
    tmp_tmp_msg_0_0.end_lat = 0.547239286298;
    tmp_tmp_msg_0_0.end_lon = 0.0666329209087;
    tmp_tmp_msg_0_0.end_z = 0.696180494732;
    tmp_tmp_msg_0_0.end_z_units = 235U;
    tmp_tmp_msg_0_0.speed = 0.31209866228;
    tmp_tmp_msg_0_0.speed_units = 56U;
    tmp_tmp_msg_0_0.lradius = 0.469365061255;
    tmp_tmp_msg_0_0.flags = 50U;
    tmp_msg_0.control.set(tmp_tmp_msg_0_0);
    tmp_msg_0.duration = 28761U;
    tmp_msg_0.custom.assign("BNDFLFOHNLZHTFOQPPGVFWXVZFSBMDSQSUFPTWILFKYOMFOIDWDIENAXKCAYCAZMLURYDISTARVHTZWDPHDRNWGCMTERMYWIBKDGWACPGAYBNEVUGJOACEWMRTHUKLIQGHGJXLTJNJUZOTCHRBLKGXZXNPLCKQMXOIQPWIPIFZSOQQRZSCYVSJSHMXHGSHELKCEVJQPRUNUKDTZBBCOXVUEJTPQAJADEKYXRMVRKMBAO");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("JHCDMUQCGXWSBZEHIPUZFCABCVXXRZUNCTVSTXCJWANIALAUNSILOMRLJHRDLGYLFHDSNTTNMFMJKPQUMYOGKZVNCLKPJBEXPVDPAIVFQPYMYVWJHFOWNGGRBKYXAHHSUFQNPDLLDOQWZKZWIKEGAEMYIEAOF");

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
    msg.setTimeStamp(0.537319354559);
    msg.setSource(61101U);
    msg.setSourceEntity(162U);
    msg.setDestination(5105U);
    msg.setDestinationEntity(245U);
    msg.type = 66U;
    msg.op = 213U;
    msg.request_id = 52942U;
    msg.plan_id.assign("KMUUFZEGWNORONPHPRVTATJYHDCBHYLNKCZOSLXUEJNVIMKBWSPQICVBVDPUFOLCECGDKFEUDGPLJLIRZPIGVNWIVEJUNNUEGNJMYDOVCAWIXDTBQSRZFENETJKZPWSFVLTXJAKOWLRLXDQQACESAGZSRQMVCQSHTGYKHAEBMSZYZBFGBMNMTHWYXFCVRWLXDQZARAMRYBSXTMBIUIGTQITJRDLYYZGHKAOJWWBPPYODJQFSXHFKQUKOXUX");
    msg.flags = 12116U;
    IMC::Land tmp_msg_0;
    tmp_msg_0.lat = 0.476325801288;
    tmp_msg_0.lon = 0.0610550937906;
    tmp_msg_0.z = 0.675380392439;
    tmp_msg_0.z_units = 12U;
    tmp_msg_0.speed = 0.745410460241;
    tmp_msg_0.speed_units = 87U;
    tmp_msg_0.abort_z = 0.94976580671;
    tmp_msg_0.bearing = 0.96735834448;
    tmp_msg_0.glide_slope = 129U;
    tmp_msg_0.glide_slope_alt = 0.957113935654;
    tmp_msg_0.custom.assign("NEZWPMXUPEEEPSAEBKRQHLBRGAWEQOSGKCXBLEHWJNJFBGDYDOTOLSNSVWFGWDTKXHATYAXUTUGDDLPDOLKYYJFNVAZBCUWCRVQUGJWSITORHGERDGBTMCNIXJFOLNJLTYPCGIMLQRZAHPFJXSKWNSZXUIUQYJTHKCCHDFWAOKQDIHIIFXVMVWDMMOPMPSBSQKZZINYQVTLBZRKKEYOLAVURVZQBIVECHRPMXGMUFROMZYJFCV");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("WSMWDZGUURFFCHFTAZNLIQYTKNHGXVEUXMRLJOBNMVOHGMMBBKECQFIIZSHTKYCRMLSPDQEAXWUTMROWAZJIFBWEQPQSWXXCRRMGSYFCXCPQNONDSQBFLLYLUGODNKKZZWVMUWJYQQEHNUDIGBUJGCGIHVTZLBGIJDASHHYQRKRKCKAVLOARCYYKEXZYTDXTJXBOUFS");

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
    msg.setTimeStamp(0.203882760498);
    msg.setSource(27421U);
    msg.setSourceEntity(208U);
    msg.setDestination(46194U);
    msg.setDestinationEntity(81U);
    msg.type = 232U;
    msg.op = 98U;
    msg.request_id = 35991U;
    msg.plan_id.assign("ZNUVXMAVIHWAQQPFHTHPGIXWGNTXPCGSUSMYXJVBKTNMLHPKBUASQNKRBUZFXCFZKKJLIVWQDDEMRZLMKBVOPSQAUOJUGUEPHBQHMLJXEHLECCOSNZFDYDWAGD");
    msg.flags = 51208U;
    IMC::Calibration tmp_msg_0;
    tmp_msg_0.duration = 45518U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("VRQBQHPNTNBGRXCNUYQZPIFIJNFOWOULAAKZXBXWMHXWXKZWHWFXTEYKZSLQVSDFPTDTTBQJITRVVSFAQIBDAJYCPRLCVUGDI");

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
    msg.setTimeStamp(0.548740196937);
    msg.setSource(32119U);
    msg.setSourceEntity(119U);
    msg.setDestination(5585U);
    msg.setDestinationEntity(55U);
    msg.state = 204U;
    msg.plan_id.assign("RRHPTLAIYSXUVIHLOORHAHLBVNFXBZHDOXEYNQEGUAKGUDNVAJTAVWSRFEQJYJZUHESVLO");
    msg.plan_eta = 1068929207;
    msg.plan_progress = 0.433114826539;
    msg.man_id.assign("XGTRNBPXDCKLGCJUTPSGFGNOISZHPWEVMDSKWJL");
    msg.man_type = 42422U;
    msg.man_eta = -901912677;
    msg.last_outcome = 116U;

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
    msg.setTimeStamp(0.733922048247);
    msg.setSource(62395U);
    msg.setSourceEntity(71U);
    msg.setDestination(63914U);
    msg.setDestinationEntity(104U);
    msg.state = 163U;
    msg.plan_id.assign("YDOVPTKVEUOBJQZABWEHGZWBFUEWGJSMGYMFYQNYKSTBKTZFZTHCCNEARPRIGEUDQTRBPDQJXSIULLXCX");
    msg.plan_eta = -1777405426;
    msg.plan_progress = 0.929282833353;
    msg.man_id.assign("UVMQUPWRTPFZSQOXNMVZXFRJRJDROCOXNXTVFNXZALZATDFGGCJDQPQJSGQLYFEAYBDCVMRIBWFEHHGLCENSFAWEBUCTUBOCNGKOGCGPQPAHUVFTHNIIKHJZWBAGUHMPDSXEQHY");
    msg.man_type = 25440U;
    msg.man_eta = 1329150828;
    msg.last_outcome = 31U;

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
    msg.setTimeStamp(0.92462384334);
    msg.setSource(48195U);
    msg.setSourceEntity(254U);
    msg.setDestination(11275U);
    msg.setDestinationEntity(156U);
    msg.state = 174U;
    msg.plan_id.assign("RBKKIROMWRLTYPBMXRCQWXHJCYLMSJZACKYEUBLZNDWMHQWEGXLJTNSECPLQMRSJXVPCOFHGKLVJEWCUFHHZUUIENTEUUYDAVHMBGBTVBGP");
    msg.plan_eta = 2097839494;
    msg.plan_progress = 0.0806886482735;
    msg.man_id.assign("VMEXVODJOQABDVEMGSVURDAMFCAIYZEBJNSUBBRSYHELMOOHKCTNLFWWBFXXVTWKPRFULPHGEKRHZGLY");
    msg.man_type = 47862U;
    msg.man_eta = 182152059;
    msg.last_outcome = 196U;

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
    msg.setTimeStamp(0.3143017278);
    msg.setSource(29092U);
    msg.setSourceEntity(245U);
    msg.setDestination(22879U);
    msg.setDestinationEntity(53U);
    msg.name.assign("ZQZMXTCXPBDUMADMSRGORBVOXVFWUQQQPAJIDYTHJKKEFRODSRILHPLDZHKJLNUHBBJTFEYMABTNNCPUFYCUGLWGCVXVYKLCFZKNOVCTUXVOIVAZSITRSYCWLWZGKELZXCLEOFUJBBIJSFSSJAVPMAIOPPNMJWDTYSNMXHFJI");
    msg.value.assign("BRHKHPABOATPPWCPUCTJTXFJIWMNYUQPOWZRYECYNDMOBUNFHONOVYTAALBLGXZWREPWIXOWYHJ");
    msg.type = 181U;
    msg.access = 208U;

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
    msg.setTimeStamp(0.430455017088);
    msg.setSource(3828U);
    msg.setSourceEntity(115U);
    msg.setDestination(8956U);
    msg.setDestinationEntity(209U);
    msg.name.assign("KLZPNQYZXJYVOQWZLRGONSHFJCAEUIGZJMZEPCMLCKUTWOOATJKDXJDVMRBYEGWIRCKRNMEZDFSNMWVUGQTBJXECBTOZXPXHYBEMTUKYEFVYQSSBDBRDVATJXRAALWPDLHGJNFANGKFPYKWKRZLDSQDEB");
    msg.value.assign("YWPTVOUBAMXPQKRBQGSOOSULWXNCDWJGDPYOLXVHBPOIJLNV");
    msg.type = 3U;
    msg.access = 226U;

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
    msg.setTimeStamp(0.976404548327);
    msg.setSource(61624U);
    msg.setSourceEntity(137U);
    msg.setDestination(7220U);
    msg.setDestinationEntity(44U);
    msg.name.assign("GFAEHHVHLPBZTNLLWSCXNDAROWJGUSYKSSGCQEQCDWZQJGEWZFMKOZHWDFFOPAATIZXOITVCBWUUMSRMCJFFIYKASQWSVDGMNENKLK");
    msg.value.assign("URWNEQFEAPVIREUMBLZSIOPCSHFJKKEQPLGTCXHZONFWETCGSIIIGWHJIUWGEXKWXMATPJDOPPQVLGNQAGCTMOBJABLVXDJDDKIOKVFSHZTKSKWXUMBAOMCKHAFNUZARUGJHSQXRMVCCEKLUJSQZYYKAUFCTAXETXEQXLMHRNIESYVLRA");
    msg.type = 55U;
    msg.access = 4U;

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
    msg.setTimeStamp(0.226926306156);
    msg.setSource(16790U);
    msg.setSourceEntity(13U);
    msg.setDestination(37022U);
    msg.setDestinationEntity(207U);
    msg.cmd = 114U;
    msg.op = 182U;
    msg.plan_id.assign("BAPKYDSZQTAPEBFPWBSXDFHTUQSMVATTLFKAXMCWYISA");
    msg.params.assign("YWLSHGTEJYXTTBPVDCNMOIBRCQDXBMOJVBRHUZOYJNQCPUATEFSALYHMNAHFWRDCSJJDAICGWKPLKOEWLKFISLBZADRKOBBZDGUXIRNFKTUFIWFHKMVYLMQIEEDQUKDBHMOGJMISEYZCRXDRKWVSHIPAWKENVFOPVROMTCHPGTXSPHJNNSZVZNWGCYYJVXALYGPYVD");

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
    msg.setTimeStamp(0.893266243451);
    msg.setSource(8617U);
    msg.setSourceEntity(164U);
    msg.setDestination(9159U);
    msg.setDestinationEntity(79U);
    msg.cmd = 49U;
    msg.op = 32U;
    msg.plan_id.assign("DSMASNHHCBPBCDCVPJRBGESEFVOGKCLEYXEATGDOFWVRAOONLFMJICFBSMZJCGEFPGLQXHBOUMPXZYBNDIBNFESHJVJHRCKERQLAKXNLUXLAAIGDURMOJSWSYQ");
    msg.params.assign("HSGBVDYIGOLSCVSKUAFWYHDSWYRJOGZHDNYWJRJBYNXKZESQCIVBXAOTGSPPILITKMWQOJMDUDYWDJLFJCRAFNXONLTJEMOEIWSQQHOTBUNLPKJUHLFPZTAAESVVCVQXUEANYOPLXWQXECBUGIEHBLVZG");

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
    msg.setTimeStamp(0.889743347371);
    msg.setSource(15288U);
    msg.setSourceEntity(127U);
    msg.setDestination(50362U);
    msg.setDestinationEntity(193U);
    msg.cmd = 100U;
    msg.op = 110U;
    msg.plan_id.assign("XMZDUVGOJRBZBGYNELPGVSHMYEEINXGINITZNRFKPUWKXHWAKTQEGDAXFSQJDQOADCRADDMUWJWUKJLCRKHZKMKOAEVHVLUOCXCLLHVFUETLANQUCPSJXCCGSFGNRWFZOFPZRETVJVR");
    msg.params.assign("ISHWYVFDQWZTHDUVEVIIQVKVEUASFFJSPAQIEPEQSACIRCSNBLXMGLWDRYPEZJFUVSSSNQKWZZXYITKPGIRYHKEPRYYAZEZTKVIRECGAJLXHBMMGXGPMUFNZDQHLLAPIGDGMNXYNNHAUZQOCGORTNWWZBOPOEVHQCBUFTTWQLXKCJOHLATOTCLTYNCOMFRGXCNHPFODLWHVJMIBJSDX");

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
    msg.setTimeStamp(0.638925050757);
    msg.setSource(49786U);
    msg.setSourceEntity(222U);
    msg.setDestination(1176U);
    msg.setDestinationEntity(175U);
    msg.group_name.assign("JUTDPFRCXSTNKGKNNSIELXFSVAGLWQZEJJHPQEEYIZAVCKSCBQPHGHTZNYOBMPXWKGC");
    msg.op = 64U;
    msg.lat = 0.820463799134;
    msg.lon = 0.828746544407;
    msg.height = 0.914739735667;
    msg.x = 0.841056162816;
    msg.y = 0.135791183298;
    msg.z = 0.189829901183;
    msg.phi = 0.322895159805;
    msg.theta = 0.624254684924;
    msg.psi = 0.791958104914;
    msg.vx = 0.245648694863;
    msg.vy = 0.661051523283;
    msg.vz = 0.24770404015;
    msg.p = 0.547095654186;
    msg.q = 0.521692386135;
    msg.r = 0.923109359703;
    msg.svx = 0.127243894112;
    msg.svy = 0.43718070856;
    msg.svz = 0.477599465289;

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
    msg.setTimeStamp(0.938088614782);
    msg.setSource(20219U);
    msg.setSourceEntity(205U);
    msg.setDestination(8574U);
    msg.setDestinationEntity(78U);
    msg.group_name.assign("FCUUPEKRVPYARLTTAZDLUIZMRGGHCKMHHPFKOIWEIKZNQROKQOGKIAXHBCRUHXHHUHOVYXLJJQFKBBLGIBWEVJABSTTNDPQCOCTYTCFXCMPWWPMQHMW");
    msg.op = 35U;
    msg.lat = 0.895971993753;
    msg.lon = 0.682107451632;
    msg.height = 0.809314215683;
    msg.x = 0.538422248343;
    msg.y = 0.569219504318;
    msg.z = 0.780238543558;
    msg.phi = 0.809663529887;
    msg.theta = 0.347801269819;
    msg.psi = 0.896029865695;
    msg.vx = 0.184723728996;
    msg.vy = 0.416042006049;
    msg.vz = 0.275320144897;
    msg.p = 0.01766458725;
    msg.q = 0.157131077467;
    msg.r = 0.819308147257;
    msg.svx = 0.369040306891;
    msg.svy = 0.43498160492;
    msg.svz = 0.132215324469;

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
    msg.setTimeStamp(0.0816440747638);
    msg.setSource(9146U);
    msg.setSourceEntity(205U);
    msg.setDestination(59869U);
    msg.setDestinationEntity(2U);
    msg.group_name.assign("FSVUIEULHJZSKAWLJSLQNMJYPUSRWIDSVKZYGVRXMBELP");
    msg.op = 27U;
    msg.lat = 0.929841773737;
    msg.lon = 0.187820605254;
    msg.height = 0.0640606304795;
    msg.x = 0.460127347102;
    msg.y = 0.586961804659;
    msg.z = 0.830243430871;
    msg.phi = 0.861154196243;
    msg.theta = 0.362543673338;
    msg.psi = 0.907496980611;
    msg.vx = 0.0867485777246;
    msg.vy = 0.935713681674;
    msg.vz = 0.918535838419;
    msg.p = 0.413644848434;
    msg.q = 0.300518660278;
    msg.r = 0.0395722084681;
    msg.svx = 0.322270583483;
    msg.svy = 0.724290929204;
    msg.svz = 0.400685453994;

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
    msg.setTimeStamp(0.784968719167);
    msg.setSource(92U);
    msg.setSourceEntity(169U);
    msg.setDestination(13456U);
    msg.setDestinationEntity(204U);
    msg.plan_id.assign("QLIFYMSCNEYXCNYSPCSNTMDRKTPVLARLNHQWOKRBULUFJVWQWQTGGESFWRDEPUJRUYUYBMFZMOPGQNHNHHWZNEOLPRLZAAJUBVTTSFUKAOEM");
    msg.type = 142U;
    msg.properties = 97U;
    msg.durations.assign("XBEVATDTNZKGNGULVSKUMPXHIEWSFYDTKBPMOULKOOHIJTFTVXVNWXTGCLLRNUMEUFCVJMMUFBQMTYXJSPWBKJYRQZNQTRBCSUOVOCBJSYOCEHIWRBDWHLREDMQKFIZQQVAZASJGQEGGV");
    msg.distances.assign("LYFSAZKTOBALEFQWLFIHEWFCJRRHGSFJQLDIDZGKBPOVGVMHJAYKLEPELUDCKBRUTBNDMSJYWCJPANZNLGGXGDLCXVFGGVYXTNXQRWWOJEXSCIVZBOHPEICVUTQAAUXZHAJMKRTONBRPMMRBMFHVGZBNJHXDSSIPGFVKDWWRUFJZVYBPCCTCHKMTLSWUOQYPKTSYPTNFEZKHIUDQIAQIQYIUOVYCYRUOUWEMKSNIMXJHORMAXXNNQLZBZTDDO");
    msg.actions.assign("GDTDJHJIMNEORXYRAWLXXRQDPYLBYENWIXOECXYOLDATWMQRYIGFEUCY");
    msg.fuel.assign("XMVEYURGRLIBDSPGPPAYXHMVHSWEYILMNGQUBGIRZPOFMUTVTYZARPYEJCCZUPDBHLPSKKQIORXQSQXFWKZWGCO");

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
    msg.setTimeStamp(0.692576513609);
    msg.setSource(22077U);
    msg.setSourceEntity(215U);
    msg.setDestination(52371U);
    msg.setDestinationEntity(243U);
    msg.plan_id.assign("PIITCPLZBQOOERFRGVYAYUJKSUPTMYXVWXVMTWBYLFLWNHAEBLAURJYSTDEUMNDDXGAMDLLENBUFSQXCKRSQUCFCYHHGKFVGJMKNSVCWCHFHRBBZYYSYDTGXUJMJXJTTDOOSVLWILLQBEGRZIKAUJPJIDIPHNXOORBBKEAJMELVGXTKBEPNFQAHOHIQHUCWQERACIDFCVNNVZNMDWKSZQFKWMRGPDIHMXSGGYPPAWVZTAWZCFZZQ");
    msg.type = 186U;
    msg.properties = 202U;
    msg.durations.assign("ICWBMFJPKMVRVZSSGMPSCFMCVFVCCDNQPAUXYYHNQOZH");
    msg.distances.assign("SUAVNJAXSBOOMUJNGYLIRKMXKUXTDYAMISJHHHGKICATETICBETPVALIOTBCTZENGNCBEWQGQBMSGFGICBOYGVLGODHMNDUWRSPBBFERVFSJXJEKRXPVJLPUWDYMYSDAUKOLDJVLLUVYMKKPBWYAWVDJJXAEGKRACSUAQTCJQNNFHOZ");
    msg.actions.assign("WYXMKLVBNWVJBUSAPYGTATMQSQIBLKQNCTHXFERJDOZTWICLQFSEQW");
    msg.fuel.assign("VXRSEWHOHQUZFURBUUNYNOIHVNIHEXMFLAOSYDVXDPVJDZWBKWARBUCHCPGJTJRGREBODAUZQBEARJMXQBMRKKXVKBYFKLKPGDPJXHCHPQSZCIYDTMOUVIZYIYKI");

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
    msg.setTimeStamp(0.617928050653);
    msg.setSource(26601U);
    msg.setSourceEntity(185U);
    msg.setDestination(26156U);
    msg.setDestinationEntity(41U);
    msg.plan_id.assign("SCCCRRWIASNIKMUKVAKCTMGBLOREEHRBARVWKJIWUCCHJKVQQTJPUYABGBDHFLYLOMUPOIYCMTRTSGDSRNQVYAGFVLGSGBTVKZESPQAVFJEUOXDGFWLPBZLKWDZVWEQLOXZXHJHMOIUGETQSMHQHBZTYXO");
    msg.type = 169U;
    msg.properties = 105U;
    msg.durations.assign("VGJSXZVQKANERSZXMUFAGDKALPOVMAEGPFMSFRWUARDOHUQJZPAEUOYLKCZIA");
    msg.distances.assign("XJOWIMCLAHSBNBNGATDGSTXVQIKUVVZODJOGFZFDIHXBZSRMTPKEPTFBMVMABKYGXRAFRVRVUMRYCMSKOLWBHYJUDQRXIQFCJKDRMJICSKPEIXMGYWAEXDAHXBVIHWCIHQGFSPWZSQNJBNW");
    msg.actions.assign("WWRCSELVINFANTBJINOUUQLHRHBBDVAUPLFWPXYKHDIDSJNHUXZHSRGYRZJQRROFOJHEMQFMTWBEVBQQZMISCUEBTJEDNEFSIGUDQQAVBXRQZBVJPKYUJAJYUFELLLDZXSBRXZTPTDSWHMAAYTQMYIWOCLRMHWYSZCAOVGTUPKMKOVFFJZPAFLCOEMMGVIKGXTLDGWNKTWPOXIONUGIGYCXNNJQHDVACEHNCSKBPGLKTXC");
    msg.fuel.assign("NDTURZGZIBNTZMVDBQXQJAOSZRJFAKLTIIRWSQLPDZQKOROUZDOWCNLJMNDDSTKWYWHVTFOJYFUGZCXYSEWJYNAGAMVENLILICGWOPHKFOGAHGCXCRTUSCIODVQDWGHEKBVTVDBWXBFGXUEPMPSLZHTFXQXHBHCSBBCXMSNEWRYMAYVRAJPUFHFXRLEPYHEKWPJJKBMNYCHAMMGUXAFUJRNQNGQPQDFLCTIIE");

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
    msg.setTimeStamp(0.0493244305031);
    msg.setSource(9953U);
    msg.setSourceEntity(78U);
    msg.setDestination(45184U);
    msg.setDestinationEntity(218U);
    msg.lat = 0.677471165479;
    msg.lon = 0.477675538372;
    msg.depth = 0.795771498844;
    msg.roll = 0.0803727297874;
    msg.pitch = 0.646053208632;
    msg.yaw = 0.850600448378;
    msg.rcp_time = 0.81220983658;
    msg.sid.assign("TOQFXHBSMUTVRQSLGBOBMRNLXCDDYVXVDIUFLZHZWPIDSCCEFAEWKTRIHQGULCYIN");
    msg.s_type = 82U;

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
    msg.setTimeStamp(0.613191439642);
    msg.setSource(58484U);
    msg.setSourceEntity(60U);
    msg.setDestination(30641U);
    msg.setDestinationEntity(127U);
    msg.lat = 0.384936018271;
    msg.lon = 0.479251883822;
    msg.depth = 0.397182985249;
    msg.roll = 0.83695236208;
    msg.pitch = 0.0416287810449;
    msg.yaw = 0.745260123057;
    msg.rcp_time = 0.357079994306;
    msg.sid.assign("NVERNWAWCPTTYZABTIJRNTBJVIEFUBXXSDDGZUNVIIPJLDPVUGGKQVSWCEOOQXKTNFFYBGZRMPRSVIHZBTSFRFAZYBHKXYLMIGSMLDGGQIXKNMUGAHMWSJOFPTLZOLZQQOUCWMOYNUCGNDJSHXKJKDEIUZRFVERKHCXKALJNCYVAMELEXSDQEQCCAKRPYHAOURHZWSANPWIXYRXWUTGPHTJAQYSVCQTIBLEMMOPFFOKCFVJWJBBUWZPMH");
    msg.s_type = 98U;

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
    msg.setTimeStamp(0.381319445873);
    msg.setSource(38194U);
    msg.setSourceEntity(204U);
    msg.setDestination(12624U);
    msg.setDestinationEntity(184U);
    msg.lat = 0.879178758279;
    msg.lon = 0.411215997424;
    msg.depth = 0.838410068874;
    msg.roll = 0.796494990766;
    msg.pitch = 0.265591127981;
    msg.yaw = 0.151768898833;
    msg.rcp_time = 0.610435979934;
    msg.sid.assign("VOZQTYVHXIIXCUIYDSONKYHOAJACBXWFGLSATDUDHZSRLDYTOHTGJXUQHGOQJGCCXRABARAMOEYBALGKCBNTFQAJRWBXLBXIEOZEBKPLVHFVGKMWMWKNEJWYNVIZMPCREMNVGCSWGFJPDFHTPHQRQTDPALMIITZJNRZBOVNQZWCDPREDRWUTPUQJHCMQGFLUQITSNSIESI");
    msg.s_type = 222U;

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
    msg.setTimeStamp(0.490647666723);
    msg.setSource(39296U);
    msg.setSourceEntity(94U);
    msg.setDestination(5085U);
    msg.setDestinationEntity(109U);
    msg.id.assign("WNJCNFRSVPRQWJKFCULRGKBMQOPTGTAMCDSUYHDJWXWBPCHXQOGJFKVNZCKJAMEUFIGCELJAXHOLTFYAEMMYIDBVBVUEXENKDIWPKOKXFRPNLNYCBSVWPTSSBUHUELPDLSQXIPURNKAGPERYIQFJAQLTGQVIPIMMHGBNYJZAJZVQYUZIZNERXOOALHTZFCDH");
    msg.sensor_class.assign("SYKICIVESFWUDJKUUNSSCXWZGTYVQFGASOQEXJGLKBMCRVEVGAALXX");
    msg.lat = 0.598697545032;
    msg.lon = 0.475089330197;
    msg.alt = 0.364199690877;
    msg.heading = 0.605123645105;
    msg.data.assign("MHVOFEWWNXCKKMHRBAFXIBPILVLIAVDIXOZCANFOPSYYIVAQOLPRTTVVNHGPRXLIOFZXSCHWIZPUTGZYMHECPDLPHTGEIDKZJQMQMCVQYKKKAOBWYHCLJJUWIEDYOTUWNAGLBGELXWOPMGHKCYRCXSEURHZNYWBUJKUBNFWMRURYNETNKQZBTXJSXSIA");

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
    msg.setTimeStamp(0.787566048365);
    msg.setSource(62406U);
    msg.setSourceEntity(126U);
    msg.setDestination(10236U);
    msg.setDestinationEntity(7U);
    msg.id.assign("CBRFUMWVTFTWJCUH");
    msg.sensor_class.assign("NPHCIHVOGCVGDELQPIVZVMTAJVKBEBWUPKPPZJDKJTMXACHNKUYJJERTHQZBNWSJWXOYQMBBCZORBSNTXDNLXULTRTEDEYJBFUXZTOAFLLFTRMMFWBVUAIFXZRDHNYDVJBRCMGLASKDFRUCXHGVNEGFMPIYWXSQDAJWD");
    msg.lat = 0.369460967754;
    msg.lon = 0.00718184535165;
    msg.alt = 0.476602472326;
    msg.heading = 0.876809238882;
    msg.data.assign("XHCYXQZBZSSROZQEIIZBSCHMYOGZKJLADKSPCUYFMSUJTJVTMLTAN");

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
    msg.setTimeStamp(0.290677145908);
    msg.setSource(14132U);
    msg.setSourceEntity(62U);
    msg.setDestination(60194U);
    msg.setDestinationEntity(86U);
    msg.id.assign("FBKBWDPCRUJXWYDBFFZEEAMPLHFKEJQVHMZLKDSMLNIGICCQITNDGQJDIMFEDKAZCLSTRQXSHJERNSVYCJMKOYVVYYVQPQLEGCXKBKMFGBHRAIRGZEDWWHHAVRIEPGLEQRTCTJJNOSHAXGGUNOVPZTBPXTUWMMZOV");
    msg.sensor_class.assign("WMOTPPEOBUQQJGUOJKERNYJSZCFJOSGGRSCUMFKHTCZZLHIJVWKKVILUVITXRZUTSVGPBHXLHSMFYJBQPWRBJAQEOJAWGFZWFUIPDRENVNVMYWCNPREPDKDYAOXPKHJYNLCLSIMZHWVXBZABWUBXYACNXFRTQRCNBMHOYYVFUSEKGRBEAEOESJMDCTKOCALLULNMPDMEUPXDIQZQFTTKVFQIYMLRSNQDX");
    msg.lat = 0.837247070277;
    msg.lon = 0.475455798571;
    msg.alt = 0.887337044091;
    msg.heading = 0.316141993375;
    msg.data.assign("PKRWOPNBETBCCJJTLODYRGOZQWTFHDBNCGIXZMKMGASUHDDQUEOEVSFZQGHMZJIEYUUQQLNOIWHITAWZYDFPWQXRTSILQBKPWYGAONYYOSVOSRRFVSY");

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
    msg.setTimeStamp(0.832205915887);
    msg.setSource(13974U);
    msg.setSourceEntity(88U);
    msg.setDestination(10748U);
    msg.setDestinationEntity(24U);
    msg.id.assign("TLJRXVUBWUVRCQOPIDDFPQJISFWLLHVIXBXSGELRCKJDZFNOJEMKFXRUEPQVHJHCAEAPOQNSSXMMWYLRLEOGPUEOZOWSBNAMATABFKSUYXJTKXMCWCHQGSHRJGVTZMOZOKFEHDGWHWC");

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
    msg.setTimeStamp(0.212250765858);
    msg.setSource(60471U);
    msg.setSourceEntity(181U);
    msg.setDestination(51858U);
    msg.setDestinationEntity(51U);
    msg.id.assign("UYGDCWRFZQTIFZSAWYFLVPUNQMELJDBQ");

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
    msg.setTimeStamp(0.367894717726);
    msg.setSource(34062U);
    msg.setSourceEntity(182U);
    msg.setDestination(28991U);
    msg.setDestinationEntity(181U);
    msg.id.assign("MAZIFKRIYGLPMBYOTPNJXTVVHEQXSHNHFPRJFDEJILNTYECOWIWBDUBURJBRVXZSDSSVLSXQFOJJXFSPLZMOYAECSPEKHCRZHGREZXHAOXCKKOSTAACMWAZKIZAEULDOQWEQPMWFPDQJNWHXFOFYBIMOBKQTEQDKMQTCAUDQNSUTWWVGPCCZRGNICLARVPZIBSVPGLMXTJYV");

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
    msg.setTimeStamp(0.254663525245);
    msg.setSource(38977U);
    msg.setSourceEntity(193U);
    msg.setDestination(53458U);
    msg.setDestinationEntity(30U);
    msg.id.assign("TKGWAVTWRBUOZPLRVLGBIMHQEAWQVOLKGJXBNKREMWSEHMMJHLOQQDOKUKXCRPHHIZCCYEPEVIIRZICMHFKLGTDYMPLFPGWUYEOJEBGITESQNRSTNTPTXKCYIGYSNHNCJDQ");
    msg.feature_type = 67U;
    msg.rgb_red = 132U;
    msg.rgb_green = 72U;
    msg.rgb_blue = 40U;

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
    msg.setTimeStamp(0.113628695824);
    msg.setSource(26364U);
    msg.setSourceEntity(123U);
    msg.setDestination(54404U);
    msg.setDestinationEntity(54U);
    msg.id.assign("LSJWGNOKBBQYTTQZDHPGCDMIAPCPIEMIQTSXJFNTTWMJNJZAFYBGGZTLPPLAGJHZDILJIWDKRRLPZDBENEXHQWUSYBUZTUIRYNUUKMECFWXEUDPAQHCNXCWNJZFXMOMCJUCCMSLVQPAFISWHOLNOLRRXSEHZIYKHVNLOEEVTVFDHWECA");
    msg.feature_type = 226U;
    msg.rgb_red = 32U;
    msg.rgb_green = 15U;
    msg.rgb_blue = 42U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.259135680405;
    tmp_msg_0.lon = 0.805148239371;
    tmp_msg_0.alt = 0.470242558308;
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
    msg.setTimeStamp(0.326988829007);
    msg.setSource(63880U);
    msg.setSourceEntity(105U);
    msg.setDestination(15614U);
    msg.setDestinationEntity(202U);
    msg.id.assign("UHRPKWZGEZTUOFYEBIFJ");
    msg.feature_type = 141U;
    msg.rgb_red = 98U;
    msg.rgb_green = 156U;
    msg.rgb_blue = 221U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.354722472033;
    tmp_msg_0.lon = 0.228587217461;
    tmp_msg_0.alt = 0.445359301582;
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
    msg.setTimeStamp(0.0481428411439);
    msg.setSource(44763U);
    msg.setSourceEntity(189U);
    msg.setDestination(53705U);
    msg.setDestinationEntity(46U);
    msg.lat = 0.745650642903;
    msg.lon = 0.716416551276;
    msg.alt = 0.866111304073;

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
    msg.setTimeStamp(0.763829482454);
    msg.setSource(53745U);
    msg.setSourceEntity(88U);
    msg.setDestination(11118U);
    msg.setDestinationEntity(46U);
    msg.lat = 0.396942359983;
    msg.lon = 0.173452926613;
    msg.alt = 0.659610362487;

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
    msg.setTimeStamp(0.354623619871);
    msg.setSource(25047U);
    msg.setSourceEntity(19U);
    msg.setDestination(58325U);
    msg.setDestinationEntity(224U);
    msg.lat = 0.398410855882;
    msg.lon = 0.459051116338;
    msg.alt = 0.205914761736;

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
    msg.setTimeStamp(0.635203315094);
    msg.setSource(60195U);
    msg.setSourceEntity(52U);
    msg.setDestination(58215U);
    msg.setDestinationEntity(250U);
    msg.type = 135U;
    msg.id.assign("KEYMPPGFMSNQQVCZXYH");
    IMC::DvlRejection tmp_msg_0;
    tmp_msg_0.type = 240U;
    tmp_msg_0.reason = 93U;
    tmp_msg_0.value = 0.0768590083169;
    tmp_msg_0.timestep = 0.837398852994;
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
    msg.setTimeStamp(0.069133314);
    msg.setSource(24467U);
    msg.setSourceEntity(126U);
    msg.setDestination(20292U);
    msg.setDestinationEntity(234U);
    msg.type = 133U;
    msg.id.assign("EZXMNJJWYKKTADXMHTFUDHWBCDXHOMCLQWFCOZRVSCPVIKHSIATYKKOXQYRDTBZGPWOEGULHMENUMFGUKCZYERWJUIDQGKGUPXLZGJRVIUBYYZZJDZVAEHENHTYVCDRALFWQBHXFWLVIJNSQJKKTBTQRFMVSTCEFAPNAOGFDMBTCPCVVHIAXFGPGPRSWZML");
    IMC::PowerSettings tmp_msg_0;
    tmp_msg_0.l2 = -111;
    tmp_msg_0.l3 = 69;
    tmp_msg_0.iridium = 94;
    tmp_msg_0.modem = -82;
    tmp_msg_0.pumps = 89;
    tmp_msg_0.vhf = -100;
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
    msg.setTimeStamp(0.471783095175);
    msg.setSource(41109U);
    msg.setSourceEntity(100U);
    msg.setDestination(9649U);
    msg.setDestinationEntity(149U);
    msg.type = 228U;
    msg.id.assign("OPKYSPOMBBJYGHQCZVANSCRUPLNBLFTWTKCGMIGFNALDYIJNHJSTKGHYEDHSCJTZQMPKZYTDIVUUSUOFZNQRMNOIRCRXBWRXIXUFYBESAZNMETEVZMGANGGUFARMAWAVPNUDHXHORYDEJQCPCGIWJJMKCVZYIWKDXJQEULEPQYBZMOGTWNBEWXCKOSHLQABIDGFDXFRTYDUVFBOJXUQSLOVZSEWVPQXHMWOTBRLTHJPALKPLRKQFFLEWKX");
    IMC::LblConfig tmp_msg_0;
    tmp_msg_0.op = 57U;
    IMC::LblBeacon tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.beacon.assign("FWLUOCSZZTGVQUBDSWEFTIJAFLWFGRKKMOPGOCYMZLSCZRBREXEWSQVDKFKKYTHXBHWMOMGKCYCLLFVPUBGAQHJXAJNQPTLUNJIPFUAUCHQHWMQGOAECDEQENCSFVKYVBLWWROKBDPAJWKZLDVTRTTCEURGDYSA");
    tmp_tmp_msg_0_0.lat = 0.127778541694;
    tmp_tmp_msg_0_0.lon = 0.881546573932;
    tmp_tmp_msg_0_0.depth = 0.186475340736;
    tmp_tmp_msg_0_0.query_channel = 12U;
    tmp_tmp_msg_0_0.reply_channel = 50U;
    tmp_tmp_msg_0_0.transponder_delay = 11U;
    tmp_msg_0.beacons.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.643681220592);
    msg.setSource(35226U);
    msg.setSourceEntity(145U);
    msg.setDestination(23556U);
    msg.setDestinationEntity(74U);
    msg.id.assign("BIBVEFFZWWLYSINECRNZHGSPOMSUBOXHTDUKLUYWRFJFHBVHTQAJDGMXQYQMARAYEUTCNJEGKPVBIDISTXEQPLGSHGAMCDYIXTROTCLAFMGJOKLCATNUWSUSZPGSYUELWAXFCRPSJPVHWTPWJOWPQMVLELMZVDQDAAOZDQUIKFOIBXNDISLUXLRVNYJKCJIFKHQNYGXMZZDKFEOEXOHWHACBNKTONVRXJBZZTMVPYC");
    msg.callsign.assign("JCWGLZLGPDADOCYXYILWJHRXGHTAJMVGETLBUTKEYVBUQWTCHZRODIBHQFDMFXGFVNFIPXFAJSVHALOLRISKTPADQCCJLVAWKRPMNUDPSHGSYGSHDZEMYNBRHBZPLLIQEUVSXJHBVVXTJJEKWNKCOHNKFFIJDNSQZUYQOBDTMEZONUQIYPMZGRTKFSUEBNWMWAVBXDAPNGECZWXLFQXKTUIXOOMEUYRKJCRGZPNZAQCBEAYCUWTQFIOOSRP");
    msg.name.assign("PQDIJBFJAMIAVWPTXEEWGHIMHYBUVTBSDYQCXXMMNTGZGSDYPPUQVGHLQCWUDAOZJLPLKQPGPTOJMZTNUKKMYIWUEAIGUORCLGVYJRLAEEFOKFTFPHZEQRCWXPAOHUCCGSBUQLVYSFSBXOLISIGHFNQVWKYYNNFODFHKBVCZLCCJIFNEDJRMRBBFNTEHRXJXWXDODJRCNJAERLRMSZZWWWNVQVVKKSIS");
    msg.type_and_cargo = 58U;
    msg.a = 0.56348515469;
    msg.b = 0.863910715296;
    msg.c = 0.270742584676;
    msg.d = 0.798400613957;

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
    msg.setTimeStamp(0.768334512845);
    msg.setSource(61967U);
    msg.setSourceEntity(111U);
    msg.setDestination(18197U);
    msg.setDestinationEntity(179U);
    msg.id.assign("KTKNMLXOAKDWWUEHEOCJJPTNOIVHJUEKBTULVXZKVVLRMIRZLFUYIDFVSBFYWSQQPSQOOBNVCHBONQYXFMDXFGVEASCIBHOUSQEBDZMETRRIHCPVJQKTZMPDHLYTCFJLPIMYSRHGQXSAMLDTNMJELITRXUQOBZKCMH");
    msg.callsign.assign("YQIJZNTFXEHEREHVNFI");
    msg.name.assign("EOVPLFQBZAUNLTTKQCVHNDY");
    msg.type_and_cargo = 47U;
    msg.a = 0.815828474585;
    msg.b = 0.809990721529;
    msg.c = 0.32343426836;
    msg.d = 0.402870225972;

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
    msg.setTimeStamp(0.85640632446);
    msg.setSource(57225U);
    msg.setSourceEntity(238U);
    msg.setDestination(24737U);
    msg.setDestinationEntity(82U);
    msg.id.assign("CSVMZYEIMKGHCCVHGOSSPBJJWGDDBLPGATSPPRTVCWSCUNNKYCXZMHIKDXYYMEDUEKFUTJAPWOMIHGFLUDKKLZVNNKRCIBFGUJOAKHWEWZMRTZQAZFXFHNALIHKNVOYPDRESIJZHDUULFBSONSVLVYTQUQLQGGSDUZ");
    msg.callsign.assign("JPAVWBUSOFMSPMCPRIURTKULBIGZVKYZAVCKHFNHSWWVJSFGOKBXJKEEGCNEQUIDTNLXMWJFZDCSVDSUAKICARTVICHJYLCTROYENMTRNKLOUWOBYBASUHAZZQYXQEOLRRCBNXDGLBXMHKPQMPQDESJPZKAMZJNTYTDH");
    msg.name.assign("HESGIBALUIRLFBRSQAXCLSAXSQZBRBFIBXEXIGIQUODQUJNKSYMTOIEPHWWSU");
    msg.type_and_cargo = 36U;
    msg.a = 0.606250077711;
    msg.b = 0.346900885887;
    msg.c = 0.56718783915;
    msg.d = 0.923343757991;

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
    msg.setTimeStamp(0.854444121831);
    msg.setSource(1210U);
    msg.setSourceEntity(142U);
    msg.setDestination(27345U);
    msg.setDestinationEntity(5U);
    msg.localname.assign("TKRKJESGFNGIYKBWGGVGQSXHHIESYBQQEBTIXIGWZGEFAEIXLHNPQJWVCJPQDDVMLUOKXPRHTYFASZHSTROSQDACZQWUEZIPHIAAMIRDEZRYOMTNNSYUDRXUNSLJETTXVJPUKURPLQLGOKDBZWKJGCJCCLVMXAUAA");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("VSKZPMCSXYIHKYVBTGAJUQUGYHZPHHGOVIKNMXBTNZJFJDAXBYSVCMBKRAQOJGAFYCXWTHMZJQXLZTQENCLWULTVTLJMIJNSZWFCPRVWNLGJQEFHXNRR");
    tmp_msg_0.sys_type = 195U;
    tmp_msg_0.owner = 3222U;
    tmp_msg_0.lat = 0.394831112619;
    tmp_msg_0.lon = 0.196838387702;
    tmp_msg_0.height = 0.149718252442;
    tmp_msg_0.services.assign("LWCOFLOJUIXAXZYBUCRTGERAKDKTPTJBSVRQIBOLLUMMORKERTBOVDLCHFZXVCXHMYIUZZYABFJYXKXSTNNMFUNNLOEVDAHSFHSVVGUUEERMGVLXWJIWJFCNFLPIUCVEZCICTNEITJMORJDTGFQIYLSYYPPKDPRQDZWNNHAZHDWSPSOOAQFIWKZKACXKUPDHHYHPMGEQMRAUDANNWMTWQDSJZKJIBOQGXYEQGA");
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
    msg.setTimeStamp(0.573504413117);
    msg.setSource(3403U);
    msg.setSourceEntity(205U);
    msg.setDestination(18908U);
    msg.setDestinationEntity(161U);
    msg.localname.assign("SXHWOLSBBSANAHYKECIUYERD");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("NLSPYFTXSSCGZOHRIWVLBPACSLAUHNDJWQRYHQJOJVIHKDIXYQZUEOTQBTMYKWAYNMQSPMRWCZJWNMVZMVUKBTRUIMSKIVUJYHELXMGPQWFOLFUBSICXREZEVSEKABRGGHGHUYYMYOCZUZIGNWQNEWUTQPFIQBREKDCDMWAFRXXHJMAYPIBVFPAJLCDZTQDLECLLTAEOPVSKNVVJPTUWKFEZGFZOXXGOGSTDNJAXXA");
    tmp_msg_0.sys_type = 82U;
    tmp_msg_0.owner = 26089U;
    tmp_msg_0.lat = 0.974877597006;
    tmp_msg_0.lon = 0.439578879543;
    tmp_msg_0.height = 0.42535282884;
    tmp_msg_0.services.assign("RNHLZRIFUUYYRZOLRUJOUAHENLIYSJIBDYGBPAXVPMDSRNVUFKSBFWJYBMCOGKCMINFTBTQADJUMMFEZVEIFXCCXOLQRDBBATCPFHFAEJWXNSWMRIGZCNQWMOCSSWSYKLUVCOAJVKZW");
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
    msg.setTimeStamp(0.901792785657);
    msg.setSource(65044U);
    msg.setSourceEntity(176U);
    msg.setDestination(41065U);
    msg.setDestinationEntity(96U);
    msg.localname.assign("BUBPMLFJUZTKFXCZYDHGGSKFW");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("QSBQSCFBBVYFLPSJFULXZSYVVYGOMHMDZLPZNYMZWKN");
    tmp_msg_0.sys_type = 90U;
    tmp_msg_0.owner = 6798U;
    tmp_msg_0.lat = 0.675563979648;
    tmp_msg_0.lon = 0.91531669288;
    tmp_msg_0.height = 0.772676065492;
    tmp_msg_0.services.assign("ZDATVXTDAMHIRRYBBXGBHRXGUVIZIIGQQYEQPYNJWWRBCSD");
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
    msg.setTimeStamp(0.186119560387);
    msg.setSource(45228U);
    msg.setSourceEntity(44U);
    msg.setDestination(33824U);
    msg.setDestinationEntity(145U);
    msg.timeline.assign("MRNKKTEYAENTMKZVBBFYHUZUNZPSXBZFGLJBVEHXC");
    msg.predicate.assign("ICXXFTJPOYRBIXZBSFVRTKMSNOBVQKPCYALTRNJDOSYMMWQNAICDBAUXAODBGMCBKIVQZHMTMGDGNNPNW");
    msg.attributes.assign("JDGMMWKSXIVDUFAGWYAEVFXKHHXQNRPUMJZYGTNUBEAVJOWCHJVYWOCRWJYXDCZKNINJZTOKWPTDINZWZEAEDLXSZGDYFFRBLYMMRCLRGVIVELYEUAKYNXXEBKHPXTWZOIKBCQUQDVPAIVB");

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
    msg.setTimeStamp(0.469159158975);
    msg.setSource(31090U);
    msg.setSourceEntity(185U);
    msg.setDestination(37464U);
    msg.setDestinationEntity(148U);
    msg.timeline.assign("TLCVGHWZCYIRVSFNRZBACCEMBXARTMBXEYDKCZRQTJSTCWPXNJDRLSAPGQWDGWYVYJCWQPTUJFOOEFHIDNKUZSIHXNYSEPMMKGPQVINCIGAGETTOPFKFRPSPKGBHDAUZYHOREEYBQBWZWUNLQUXMRXAXLSQLGZMFLO");
    msg.predicate.assign("TETBAAHTAXYBDMSLPUDJDZVSGFGVZYYBFUKRQZESLOHPFSFWOQPEEKGVBDAAUSTPWOIZSZLWLUJCTTQDFMAWWYKLSNBFHYJOWZHWOVZYSKXMAQMNGKJYQMCGIJITCXPWUJNPOBOGXCHIPMZRRBKNSGDNRRJXJVKQXDPRLVFOTZYCCINTLAVEKIMEEGWDURLRQHLXUOVVSYCHVNUMJNDIKBQLRXXEHUDBQPTIEIGMKUH");
    msg.attributes.assign("FFFRNEJRXQBVHDSCOBHMDMYXGWENMJZOJVXTBRKHPELTZZMUKYVGYEZQDLYQCLAKNMPKHKCYQJVDVJAFQHALVBTVWZRJKXNPDXAOWKWRUHGONWYZCTXUKGFSLAYRSQDMBGSHURHWCUEUOWIITTOEXYWETHRGIATLUCDNWQYBESQBIJUKKEPBSFCCLRSSRAXVOCQFNTIJZZMSGPMUEFSWIHJLVGBDZDBMAPXYDIFXC");

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
    msg.setTimeStamp(0.56384489592);
    msg.setSource(6322U);
    msg.setSourceEntity(99U);
    msg.setDestination(14683U);
    msg.setDestinationEntity(185U);
    msg.timeline.assign("EHDPAZCXVQEXFBRFOYLQNCRXBQKZWUWQBXCYGKMRHRLSOTRIBJAIEWMUYSZCNSUEQEQCQNFOTWPNUXELMKDAZDWNTAS");
    msg.predicate.assign("JUHXILQGRMZVYNTWTLIEEAQXVUXUINSNTFBHTGGSJTJNFSIZRBLNSXKODUAEQDQZWHOBJBZRKHARPDJQRTCEYWFNVQGVITYHZWPPEIDCAVZMVRVPKKCNPEUYMRSEKBBEYOMQCZFYBWAJJONYKYLMXKEMJMAIHFACICAOLLHGHWIOQPKSLFBJRCFTWKVNCUBVFSXUZGOKRRUFMNMPLZWPSWODXXPXGDMDFDDJHHI");
    msg.attributes.assign("ONECMPDBDFPLCPZZCTDMISDRJJUNWYSDRENPMYGNNUHYNDNUTDGLCCCQEOAWVJGUJBOQVLYUUUSSRLITAMGOGWGPEAYHGWEAXKLEIXRTICKSWQOXFZMBQEDVRXHHIBUSAJZFQPQVBLKZQBWSQDKYOMPOWGFIZEJJWZYRHCXKBATUIGHOTYESZKLBVVBJQJNLREAMVKHZFNKRTMXRXFXASWKMYQOT");

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
    msg.setTimeStamp(0.441376926078);
    msg.setSource(45448U);
    msg.setSourceEntity(240U);
    msg.setDestination(51395U);
    msg.setDestinationEntity(49U);
    msg.command = 249U;
    msg.goal_id.assign("PTGZNWSXCACHJQPZEQJEXAQSZITSTDNKQJYVYRQJXRLMCLKRMIDSKLZJ");
    msg.goal_xml.assign("YNUMCEWXJDNERDKYLDXYDCJCXPHJFSTDJZMXHGXMFVSTQIEOBYHZPRPJCTGLLICSLWBLPHBWITYKEXEGOKMZTIBCFASJQWJGHQWNQOXQSAWYBMVJGFUREVUWFLSYLVAPWGKEAZTPARIZAFITEQGFHRT");

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
    msg.setTimeStamp(0.186208348783);
    msg.setSource(19486U);
    msg.setSourceEntity(74U);
    msg.setDestination(47423U);
    msg.setDestinationEntity(141U);
    msg.command = 241U;
    msg.goal_id.assign("FLGICLSKKTADVGJFRNETMKSKQECBZJSMLSBBEJRPYNSLRNVFAXZSCVZXSGAWYPBTQHMVCZDFMHPMMWWHNBKOHSADIWCUHESKNYGQAZRECWFCBBGBHAXQAELTUHIVFOLPLMGGUVPUDNZXZEEZNEKBJIJACUFYYLRPWVVPRYPGPVIXFDOGCWBHZXTRIXQYUOTWHHQVNQEIOXRUJOJWYDUDLPRKTMCQTMOTDJJLAJFIOQOXWDKNKDRYTYFUQAMGZU");
    msg.goal_xml.assign("FJKXTGEVSUYRMPFWKRASZQQDBDTXKKUCTGLMGYMCLULEOAMEQICFMSDDNJHZWVKPYFCIYEEGLGJHDDWSKLVXFFMYZERTZSNXBMIQXLHBXPJSZXJHOVLDNOJKOOMSBUCRCVDOPJ");

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
    msg.setTimeStamp(0.561032131558);
    msg.setSource(65422U);
    msg.setSourceEntity(131U);
    msg.setDestination(12178U);
    msg.setDestinationEntity(24U);
    msg.command = 214U;
    msg.goal_id.assign("BRGKQXYOTVAOJEKSPDMQCFNHVYTYPWXO");
    msg.goal_xml.assign("AFCJRKZUQSXQLTPRYFGXKRZDDEYLOSRTUXHPNXBMHVEYPBNCLJYVAVWODQUIWWACGATRZYMSXNBPFIOYKWINJFWHVQJAHUMHKZFNNWQVSKTLQPDZROBZDGGJPDJAEIBIIQEJZDVISGMTREOJQGR");

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
    msg.setTimeStamp(0.202709660851);
    msg.setSource(44511U);
    msg.setSourceEntity(0U);
    msg.setDestination(25510U);
    msg.setDestinationEntity(57U);
    msg.op = 147U;
    msg.goal_id.assign("NIMQEJIKZCKMJFGQAFUNPTQOSCYBHLFTBJJWMUCXTNWKWEYKGZUFOZQAAZDLRXQKJDISEWNCPBTVWZZTOAFATBTLRPSMUVMPQEPZCOKSVHBWXBDZPJDVMPGMGYLFPJRONMHENESQOLTYIXDAOYCSZLIIGBSSHXGZHAXEBOVXDHIRLUVXVCYRSCJNQWQIHUKYFKJEHCCDBRGBEXYHLRMUUUDRNPWKFVOPNWVHTJYGLRRSDFGYINU");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("FHZBFRAIQXJAINZUDQSEQJNVZOBPPAMMWJYOWSUPNVUPGWSIRICYBCSMJETZLOPOZSEFOEWJXPHNZUCHULNBRFQKBLVDVOFCFBLHGNUOIXMVOTPGBDAKRKVIGNNJVYQNYRHLFLVHEUDLZAAMRAGSFYBWTJBATBWSLMPXJIUYKNGQTXXOCXQYWPERKOTMHLUTI");
    tmp_msg_0.predicate.assign("QAZASLAPLXAGVLCTZDTAUSGRVZEHWZRPKWXCMXQEIEYVSXKYQFLMHBKTIEYIEJYFSMJYDLCYHHZNJXPPUPXNDQGBNDRWFOGWRCOSJQRKKAIGZGHEAHZGGCKZVMNOADHFYUYWLMRTPLDHJUUWOXTOFUMCNSJOOWFXTCHSJRJRINMFSXTNZS");
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
    msg.setTimeStamp(0.526569078431);
    msg.setSource(2749U);
    msg.setSourceEntity(160U);
    msg.setDestination(1508U);
    msg.setDestinationEntity(103U);
    msg.op = 19U;
    msg.goal_id.assign("NBLCGQYBUAMDTKAHEAAJKHHWEFXLRDVKDYFCPICKBUUWNWVCAPKISITDLECRTUWVQVNSLOTBIMXSHGPAWXFUTDXMPRYQOPBJNSTZBJEGEJGZSFNLZZOFVCIXURUWHSOPCMHLFCEMLGGWPSJNVFJAQYCKHKUGSEFNDZUZSJYTJZGVYEOMTYAVRORIXKNRQLEGVOQ");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("ORCWTSNFHOLKWUYFUPHVVXZSPFWBEDYGTJUSORSCBVLCWCIYULNWKHYGAKMDQVIEOATKXGLMCVJRBMKXOVNAXTQNHNHZDOVLWOVAANDWGKNZAQEQJYPYBJPASJKRZIIEKTHMISDPBDPSFDACBCNGFUKCMLZSDPBXCLZMMOXTXGPFLNEQIUFXSEUTQTORANGHTGMRQIEY");
    tmp_msg_0.predicate.assign("IZNTJMRHCQWMDBTAFTXWASPLFIBUSKUXVFIHRWAOSHJWUTZOQDANLBXNIWQNDVKOKCXGEHMQYKUBTSEPWWNOVKPHKPCPJQCJXNLRSZJMYCQYOOGBDSKRRLBCHVHNNMBTRJKPRMGEVREKUTPCSXIFUGPIZAXDMGUAACULYOHXDTJDLHJRNDTYMMMNXWDKVVAYWVPZEHFZYEEGIQFLZOARXIGQVFAZLGSEDQGUWSOYGCLFIBTOFJIFPUSBBJLZZ");
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
    msg.setTimeStamp(0.194866031555);
    msg.setSource(6772U);
    msg.setSourceEntity(176U);
    msg.setDestination(21791U);
    msg.setDestinationEntity(62U);
    msg.op = 236U;
    msg.goal_id.assign("QMEXIQXLNXPBNCBFOFDJHETMJQKTZRPUWASMZFLLPSHYEYJRMKICBZFHBCIPJYKLOBOSJSPAGLWDYQXVDDNAFZRCWYRFSHXHVWOEQTWIWNPPCLVVUMYFMIOIZLQEIGJNKBGNDRCKKEDMGQJUUHVNKTIWUWXMYTKSCVHXUZYBOFQUXYAHRVLCNTSXSDVZSTERAXYCAMOKBGTOEATDA");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("NXVQFIHZKBK");
    tmp_msg_0.predicate.assign("EZBXFKYVFSRCTXNIZZDBBXECPRIAMZDWBEKWGXNKZNAASMRXCQDMEFBJUFEXLSMFKEDNBPJTHZFFJVKSJCKRPUVGXQTJSORETRLL");
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
    msg.setTimeStamp(0.897241277583);
    msg.setSource(39343U);
    msg.setSourceEntity(220U);
    msg.setDestination(24994U);
    msg.setDestinationEntity(88U);
    msg.name.assign("PZDJFIXQXLAIDWTDZEBJTKFOZUPGKFLCZNGKKRGZTNSUVRBIAUBQEOWSHSYIZQLCEFCPWLMQPONHYX");
    msg.attr_type = 171U;
    msg.min.assign("BMRUYWWKNEBYDFOCDEIFJCSNVQRFKAWDMLSTAYOAZGOYSVEGQDJNQABVHKNSLCJVIVCLLGEPSKLAVTWVHAXATGKZQNIAYMEUWSRW");
    msg.max.assign("WPTYRYKLFJXCZMVMJRGSDBEXVGGYZYALYGMMAEDJBEDSQPCRKMWSDFHZYFZIUEWZHLXUIHEBKYOHYGOBFIHPJFVTQMJTIFHKJPRXNWIUTKOMZGMSMTFWRSKUBFNEQJOAWTQWZCVCEAUCLDDZRVYOUCNOBVXILSCDLHBIPJLDFNTHSPDTQPBAEUPUB");

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
    msg.setTimeStamp(0.29480101752);
    msg.setSource(45245U);
    msg.setSourceEntity(205U);
    msg.setDestination(16031U);
    msg.setDestinationEntity(31U);
    msg.name.assign("EICCXTDIUQPRNEPAVEHCMDIJBWQPYYOASRNUAZTVVALQFUSTKTROLRZNNMXHMQFPQTNLUAHFHAGAJFIFBBRYLXTBYLYWMSYKPCWIZQVLZDGENNBFVKJZCWKNVXZKHVOWRGLSVDKHHREIXCMMSCXAJIOVPTIMFNXZPQAVXIEEDLSFBLUBUDOJGWSETCJYUWHZKQWJDSSUFGTOCPMTWYMKSWCRAXPGBOIYJOBBQJGHPLKORRGUDZJYQHEO");
    msg.attr_type = 61U;
    msg.min.assign("ZXTYHVIMCTUZSMLOBEAHGTNJKVYCGPPOACFPFIFWCPLNEHNEKZKOYJMCLCBUQVQQDWXKSYIKZPNEAFWKJCMDTNMXWZSZZLUJUEWOSKJYTVGRBFSEOHOQILTLUTDYPFXDMBEXITNYPLQUXXWDUGYAMZGLROXVJABCRHGPXNRFYDHFSIOSUHWWBSGVRJVQAUQSDJMSBMEFBWLBIRQOQPGCLJVCNWNDPKEHBZDAKAAHRDRIRXQIGGORHNV");
    msg.max.assign("MJAWKWQMYJEBPGFCTBDUWSEQUCPKTVAXNPBCDKLINTVTYRBUZZIKYUAYLIOGIRYGAANLQQCFRPGVRHQOUHPFJGDZGBFSYSHNFCNPTLESZTVOAMGOYHDIXZWEEMROLXPIIUFELGZNJOJKVMZSNKMIHOKQKMXWDUVFRXHRSRZHJSYVHZFUHVEDMABRDNWBJPWDXTV");

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
    msg.setTimeStamp(0.905476092507);
    msg.setSource(24574U);
    msg.setSourceEntity(229U);
    msg.setDestination(5294U);
    msg.setDestinationEntity(143U);
    msg.name.assign("GNCZENAVIQWUFTPFLMUDSEJKWHQUQCDKKLUFHPXQGDOXXYBNAAXHEPHMMRJUBJIVTWFCLGUZWDNILUWLBUESYSZLQKXGTZHOPNFPJSPOVAUSWVMKMSBTTENDGFMYAZMFGCBNSKMEVVZRROHSXFCUKYLHXZIYHLQ");
    msg.attr_type = 129U;
    msg.min.assign("VFLRUOABQXYHXCLEZUBHAWCLGYUCGGFTNZFACXYQJKIQVBAQNMZOOWMTLGABQOAOYEYQWQXNSTNULENFEHBRMSLPXSTHQPHGIPKFHDKPIVOICP");
    msg.max.assign("YLVFMAFYRFZTERDQAVVAPFHXYDBNFJMTUKHIRGWILIKGFYJHCVXCWIDSSQLSOOWZWZZLNHZASKFPRXVIFLSGLHFTUMMTSRETKZI");

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
    msg.setTimeStamp(0.757693289689);
    msg.setSource(9664U);
    msg.setSourceEntity(179U);
    msg.setDestination(34098U);
    msg.setDestinationEntity(158U);
    msg.timeline.assign("REGUSBCAQNHUVBFNPKHSOECOEHQDBVHGJHENSSGVOLGUKFISFPZNJLNWZEXWMMCDQDHZCG");
    msg.predicate.assign("JPPQBUFYOZCCGWPUVACMNNTUEDSJGJIGXEXOMLGBIWNCXXODVIRUCWFLXISZVFYLLTVTEYAHWWOBNSVIMJTDPXJIVJCYK");

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
    msg.setTimeStamp(0.462169409932);
    msg.setSource(37119U);
    msg.setSourceEntity(216U);
    msg.setDestination(57413U);
    msg.setDestinationEntity(182U);
    msg.timeline.assign("LGELJSIXFIYRGOQRVSXOHKADRFMCXMTUJVKQNYFXDPOSZEBTNXUSHBLEAQHFHWVWPQDEIPHISCXXNHRIGSYGGAEZOITMYYVKETAXLTZPVBUAVEOIFWCNZMPRHPGQZFZSNDVORQENIWDQCJILBKOJNHFUDMNOPWTDKWJMBLUDGMZDBCJXUUUCGHSSMTLVAYEZYQPLNFKCJBJLMLTAOAAKROGGNXWRK");
    msg.predicate.assign("LBMHYYEMDBALUXOOVTPNIQEKGQKZGVGOQUBSEZMGLDHZQAHPNENSPYIIERYQTBHBDDKWQNZNJZDKJYKSKXUSYRORAPRDWLAMJSCNIUGWQDMURKOSIVEFDCEPDXTBCQJWVGFOMNFJMVKUPGUVPWIUQIUSYZJFXXXTZLYPVRGXVDYEUHOEFWBKRWJLHBHCLLQFAXFPCSHCAYMFGZJFCZC");

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
    msg.setTimeStamp(0.655661688779);
    msg.setSource(45906U);
    msg.setSourceEntity(227U);
    msg.setDestination(32547U);
    msg.setDestinationEntity(26U);
    msg.timeline.assign("JPBZRWMXBULIEDCULIRPBQUSSWAZYNSWREJVFNKKWMQSVQLHGYADVRPZWEMAUL");
    msg.predicate.assign("CSMVQWQIZATXVIBUJPWCJOZXETXWIBLIPCKFWQXKXLQASIPRFFZOMJATBBGQRYEPAVPOCUAODADSZVYKXYNNWJIDSNWCVLZSVPHRNZJUKHIGYGWDYKRSFZPOLKCGFSBPSEMGLDMWTXFMTYBVL");

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
    msg.setTimeStamp(0.207072370866);
    msg.setSource(4081U);
    msg.setSourceEntity(38U);
    msg.setDestination(61545U);
    msg.setDestinationEntity(58U);
    msg.reactor.assign("KMUNXMHSLLMXAQXAILQJENIOVSXENPOWYSIIZBDCJQYCJALKHLRGKFNAKNDXFPTGYWTBZHGMRZHYHWATQDFXGBCNLDYVMADSRCJHMJSLRMKINRMUAPFMUGQOJEBCOBIUSWUWZGLUHIHGVDNVJFODEEXOKTPFVHRJGDPWWJNWLEBVTNYLVXPOEFSSRGERZTFDQJFDRAPYVCVOYZXCUUPYZZKBFBETYUZBWRIQQSCGMIQEQOPTBHWZKTCVAUPCS");

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
    msg.setTimeStamp(0.376549682588);
    msg.setSource(15471U);
    msg.setSourceEntity(35U);
    msg.setDestination(1051U);
    msg.setDestinationEntity(104U);
    msg.reactor.assign("VCSZROLFDNDJXEUKNGVXTLCAFGWZQKDLPPRIYGMWDIEOSTEHWPEPOADIHEHAXAVYWUUXVUVHGZSLFLLXNKNEMMQHRAUUYKZFBCKHBYPEIBDBVAQVQRYLCCQWFAXJPQWPMYFWOPCSYDJKEREVBMHXT");

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
    msg.setTimeStamp(0.830597400629);
    msg.setSource(7141U);
    msg.setSourceEntity(1U);
    msg.setDestination(12257U);
    msg.setDestinationEntity(10U);
    msg.reactor.assign("IVJSJADJUCTERXYKKTWJAVYZFTZNBKZVJINUWQCXZCBSIYXEGHRHNHOMRRNPTMPZJEWDEUZQXIVTWPDQCCGEERLFTVXVDQHOYIADVCFGCBKYZRVCIEEPBGNGNZJLOMUAEUUSOXLIOYJHVASMQIMNBPXSOHUPJSWNAZT");

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
    msg.setTimeStamp(0.232773020446);
    msg.setSource(57612U);
    msg.setSourceEntity(222U);
    msg.setDestination(19405U);
    msg.setDestinationEntity(25U);
    msg.topic.assign("NTKQZWPNQCCLPHWRYWMTOUANZVEGZWIISTOHOQEFPNGIRPVDPJURERCFJAYCNYYYUOXKHJFLFXZWQXRXQBLUBFLKGTJJQSGUAOKMDBZBRGMMMIRCQQUSTXFWIOFIWRJAVHEHHNWZDDXNSELSBMSLLKKXZFIVAFGZADEDPWKICDEOSVALOYVPOZKMXCYXVRFCKTHVGVHPSYDIYBBYBLTUJCHAAJBHVMSZWQNTURJEKDNTCANEGGXPPUMI");
    msg.data.assign("MXZQMERHWXTNGFUAGRSQJFJHFKQAGWWMILLOUNSXCGUHBXFDKYLTTFOUHCYJDOMNQJDAPIONVFMSJLDHRNWODICZCWTINBDJBXRRSDZKMAZAVPCPQMJVQRHAWIDODLNLBJKSYGCWSIKVUPMLEEQWCOPPBURKGNNEXXXTTFHVTEEQCYEVEIUJOSBZRCVUXUKI");

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
    msg.setTimeStamp(0.585386596651);
    msg.setSource(22140U);
    msg.setSourceEntity(190U);
    msg.setDestination(32393U);
    msg.setDestinationEntity(177U);
    msg.topic.assign("HLYJRIPENBZKEGIZJMNJHOGQQSVTIXKLACVKOOOIMRFYTWXPDQNHWLTAGFUXSRUFUIHECRENCJJKCXVIAVRNCERYMTCGRWWMRZWQDVZZMZUDMZVFKCSCSQENDRBGWLFEFYGDTHTPGDUQZHBBXGPVBSOSHPUOEUJWHJXKMAAZKQXGULKPEEYQIMAVXPHLAIAYAYFNFVIDPQJYHDCOSCTBLBYQWTTMLNASSODPMKBJNBBNOLXWJTVR");
    msg.data.assign("HGSVCGTJVEUDWZMLSIHQLWDXVBPELYXHVSHMMOCGETAEZBBCLKSDZAGAMHNSUDMIKOYXMZGRPAVTHJPRHPNJXXUEEZFULBJRBZFHIHILVOMKDSRRJKWCIGQHYJYUEVDWKZQKSKVAQIPONUOFGNNDGTXTDNIKEFYXRGBVCBWTE");

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
    msg.setTimeStamp(0.874589880654);
    msg.setSource(40833U);
    msg.setSourceEntity(128U);
    msg.setDestination(28572U);
    msg.setDestinationEntity(17U);
    msg.topic.assign("NDDSYLHNXJOJCQGYKRKDZAMBXFFLAJUNBEBQFSKGLTFUCCHQXXEILRWSYAHKNKLYRZBIWQCYBOWDEVMSFZZNIJLXDGZQAUPWIEZIWPWUHMDNKZMIGERNHAXU");
    msg.data.assign("KXVLPWUIIUDIJYVWVHKTMNYYKBWTCHHWEAVEGKNJOOCGNVKSFGIHCPVYABRPGQBWTGXWPLORKKWAYDEJSQFNBYUXUIEGMSDRZVNNDWHPRAADXMQKZQLEOTVWHUSKMELFYDNHOBYXIZUOLXOISGXFFEDHSTFZCNFRDXQWPMPDMAYXUSLZJMMSDNRZCPXZOVGZCALJJGFUFBPPTJEAJV");

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
    msg.setTimeStamp(0.311451270864);
    msg.setSource(28810U);
    msg.setSourceEntity(136U);
    msg.setDestination(23522U);
    msg.setDestinationEntity(146U);
    msg.frameid = 94U;
    const char tmp_msg_0[] = {67, 12, -61, 118, 95, -101, 120, 6, 92, -10, 51, 95, -27, 123, 30, 91, 63, -113, 41, 111, -14, -121, -48, 124, 68, -6, -6, -1, 99, 92, 51, 106, 30, -109, -25, -2, 0, 108, 27, 0, 28, -97, -73, 74, 7, 90, 24, -107, -126, -76, -109, -127, -6, 34, 57, 32, -53, 31, -128, -61, -106, 107, -38, 53, -64, -87, -3, 24, -102, -16, -6, 59, -32, 55, -103, -105, -38, -105, 77, 2, 96, -94, -28, 126, 73, -82, -72, 62, -54, 88, -101, -13, -16, 36, 48, 18, -51, -23, -53, 65, -81, -59, 28, -32, 7, -1, 106, 118, 122, -49, 0, -37, 97, -61, 79, 11, -2, 105, 35, -52, 28, 61, -126, -3, -102, -38, 24, 74, -42, 67, 70, -127, 12, -69, 70, 91, -11, 31, -74, -47, -83, 101, 103, -67, -62, 59, 23, -20, -106, 27, 60, -54, -32, 32, 48, -124, -3, -101, 110, -54, 81, 36, 98, -25, 9, -32, 3, 126, 113, 15, 101, 112, -57, -57, -96, -92, -73, 31, -22, -50, 84, -102, 109, 51, 62, 68, -122, -1, 41, 18, -126, 80, 124, 0, 75, 74, -12, 6};
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
    msg.setTimeStamp(0.947760812822);
    msg.setSource(46735U);
    msg.setSourceEntity(176U);
    msg.setDestination(13277U);
    msg.setDestinationEntity(113U);
    msg.frameid = 224U;
    const char tmp_msg_0[] = {86, -68, -78, 11, -38, 20, -8, 100, 36, -86, 47, 48, -59, 20, 122, -14, -115, -93, 40, 116, 44, 49, -6, 7, -25, -112, 99, 15, 124, 15, 79, 25, -64, -21, 105, 70, 26, -102, 48, 121, 74, 78, 99, 80, -59, 110, 28, 101, -1, -111, -6, 99, -47, 100, -33, 58, 123, -111, -18, -15, 78, 88, 19, -3, -73, -36, 95, 68, 69, -69, -102};
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
    msg.setTimeStamp(0.827507588679);
    msg.setSource(20308U);
    msg.setSourceEntity(110U);
    msg.setDestination(6329U);
    msg.setDestinationEntity(250U);
    msg.frameid = 13U;
    const char tmp_msg_0[] = {98, 5, 80, -87, 30, -95, 99, 29, -67, 99, 48, -61, 122, -68, -54, 47, 90, 28, -51, 64, 114, -25, 103, 25, 32, -85, 92, 88, 33, -52, -121, -33, 96, -10, -33, -79, 117, 3, -37, -44, -83, -20, -120, -62, 97, 50, 34, -12, 120, 34, -23, -99, 56, -70, 64, -120, 0, 10, -21, 15, -90, -123, 81, -107, -67, 11, -45, -52, 4, -39, 71, -100, -40, -24, 8, -3, -71, -118, -115, 120, 36, 11, 106, 97, -30, -118, 85, -21, -46, 98, 111, 116};
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
    msg.setTimeStamp(0.081542596846);
    msg.setSource(61101U);
    msg.setSourceEntity(130U);
    msg.setDestination(62696U);
    msg.setDestinationEntity(173U);
    msg.fps = 244U;
    msg.quality = 229U;
    msg.reps = 217U;
    msg.tsize = 192U;

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
    msg.setTimeStamp(0.493301272306);
    msg.setSource(20180U);
    msg.setSourceEntity(19U);
    msg.setDestination(48299U);
    msg.setDestinationEntity(158U);
    msg.fps = 114U;
    msg.quality = 72U;
    msg.reps = 135U;
    msg.tsize = 29U;

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
    msg.setTimeStamp(0.878058552081);
    msg.setSource(18356U);
    msg.setSourceEntity(104U);
    msg.setDestination(3636U);
    msg.setDestinationEntity(169U);
    msg.fps = 75U;
    msg.quality = 238U;
    msg.reps = 121U;
    msg.tsize = 13U;

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
    msg.setTimeStamp(0.86575712699);
    msg.setSource(61064U);
    msg.setSourceEntity(37U);
    msg.setDestination(63338U);
    msg.setDestinationEntity(88U);
    msg.lat = 0.770536207597;
    msg.lon = 0.537118209428;
    msg.depth = 159U;
    msg.speed = 0.764333920995;
    msg.psi = 0.473882932073;

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
    msg.setTimeStamp(0.913880549997);
    msg.setSource(50133U);
    msg.setSourceEntity(239U);
    msg.setDestination(63824U);
    msg.setDestinationEntity(35U);
    msg.lat = 0.668257879756;
    msg.lon = 0.296672740673;
    msg.depth = 164U;
    msg.speed = 0.456396520403;
    msg.psi = 0.832007007541;

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
    msg.setTimeStamp(0.917715787707);
    msg.setSource(3637U);
    msg.setSourceEntity(36U);
    msg.setDestination(50518U);
    msg.setDestinationEntity(3U);
    msg.lat = 0.00730690316253;
    msg.lon = 0.941385177438;
    msg.depth = 244U;
    msg.speed = 0.215737650427;
    msg.psi = 0.786769925493;

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
    msg.setTimeStamp(0.00343727438574);
    msg.setSource(9614U);
    msg.setSourceEntity(55U);
    msg.setDestination(57348U);
    msg.setDestinationEntity(88U);
    msg.label.assign("EWTHYLCOXILAFJLXSYTRVTKYAXKMGOIQLNNMWVSRWGGRGDTEAUKILUJVWYLNSCQVNITBTQNUQGRYKPZBLHFDHCYCCLOFXXSHUNPAPORJRJBHJGBOAQDETPAMGBHPZMYVOLZHKZAKDMEGJOOGDJOBQKDTJKRMCVZNARIBEBPVVZDCEBMZZSFQSSNWQRDPUCXZPEWVIQZVSUMPMFSSFEHCYWDDGUM");
    msg.lat = 0.893191488402;
    msg.lon = 0.273023322881;
    msg.z = 0.253057872654;
    msg.z_units = 119U;
    msg.cog = 0.935932188182;
    msg.sog = 0.575317090428;

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
    msg.setTimeStamp(0.826242444232);
    msg.setSource(34957U);
    msg.setSourceEntity(198U);
    msg.setDestination(40403U);
    msg.setDestinationEntity(78U);
    msg.label.assign("OICUJMAIFJTAVGUQRMNTRIQPMTUOCXJUJMHQQMAGHWZAPXISUHRYYYKIETGOKWKKBUALCNNFOKXRPBVJONWBRSOBPEVWCLYZDOFDURDFPGOYPLPJCSTNDZYZDQEOWHHDGNXLDWHTXUHWIJBTKMVILSEJSCEBWLPYZGCCQJTYATMNOIBXWIMHNSGEKHVDEVESRVIYLVQYWNRAQSXPFMXAKUSZGZJPFEMLQUZLAGHFZDTVBBCZV");
    msg.lat = 0.201460348733;
    msg.lon = 0.849597757682;
    msg.z = 0.472928397381;
    msg.z_units = 103U;
    msg.cog = 0.878846047119;
    msg.sog = 0.93086175689;

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
    msg.setTimeStamp(0.986068598181);
    msg.setSource(33093U);
    msg.setSourceEntity(232U);
    msg.setDestination(12227U);
    msg.setDestinationEntity(4U);
    msg.label.assign("ZMRTKCHVURRJPIDARHOOGNPWSXOKDMEKOYXCJMWPTTWRSQWZLSPAAVHSGQREJJOSPDUYTDNONSBHZALUCABMHJ");
    msg.lat = 0.127049933341;
    msg.lon = 0.365396432337;
    msg.z = 0.340451813157;
    msg.z_units = 117U;
    msg.cog = 0.216225805266;
    msg.sog = 0.469491157983;

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
    msg.setTimeStamp(0.525062890361);
    msg.setSource(11995U);
    msg.setSourceEntity(93U);
    msg.setDestination(65520U);
    msg.setDestinationEntity(74U);
    msg.name.assign("UAZKHVGZIVHYRFZQFKCRSCPORILPUSLVHXMMXMDYEFQAOYQI");
    msg.value.assign("EWRRCEKCHUKTRGJGDZFWSKQUWMDEFTAQZDAGUZRNWEFPFILWUQMYJGBUGUXOXQVJQKQRNLJBECVPZKVIPEEHSZFZLBJYIWJAUJBGDN");

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
    msg.setTimeStamp(0.756736848513);
    msg.setSource(2687U);
    msg.setSourceEntity(160U);
    msg.setDestination(56926U);
    msg.setDestinationEntity(65U);
    msg.name.assign("XDEZIFHINCNHQOBFLWPLFGOJSKGOUXJAOVDWPYDOFXZPZSCAPZATJAKIZASUUTGQJYZCPDTGHSEGRORPGEMNEFXDRULQVBXSNBWCIMCIWMHAPJFLIRZLVTSUUZQYGQXMMGVJAVAUKLRKBKOYSTLSFVYIDRYCHROKHNBVMPHKHJSTLXDTCYGLZMVBPWXCUWJWVWKEEHQHTMDARMIXUODBBRWQVFITCRTZLWFGYDJQKNYEFEMQIYNJNEUPONBQ");
    msg.value.assign("GMQHSNMZUEKOAHKJBYAFPCFBZYEVMATRPCQWGTTXZDGCVOZGYNWLUGJUHSMISZIQJSPKCJLIKRIAPLXDWWDUXFZYRVOFVMXY");

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
    msg.setTimeStamp(0.471125302558);
    msg.setSource(13646U);
    msg.setSourceEntity(178U);
    msg.setDestination(64591U);
    msg.setDestinationEntity(5U);
    msg.name.assign("UDPZNGYQOJJPWLHT");
    msg.value.assign("KVJSGJCEJRUVXDJITSUXGYELQOMHVLNQYKHNYMTBUCABOFSYFNDDXODCYMEELTLWRTWJELPAUNYDZGMBYS");

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
    msg.setTimeStamp(0.363354884848);
    msg.setSource(4412U);
    msg.setSourceEntity(61U);
    msg.setDestination(64153U);
    msg.setDestinationEntity(129U);
    msg.name.assign("WZPHITFSIBMMSZSTCNQDISRQKUCNEGBVVKQSIRDNMKGMNWUVLUIRQJHLOAJEEUJCILOPFLKUDZOFCGPDZLCCWHEBVJUNSGVYEWFDBXBKYTXKCPNZP");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("LMIUYMNEDOXNJPDBOWFCGUIQSWHYQUZGQFPXGEVDFEBLOXRTICHNMAZJZKCZVLYLQICHIBOMLPJERUQGYYKTQZVPSJHIKAOCNAGHPFILCQWBNRDHVFYNJUACBGNELTESVBROLEXVSDSAHSRHWHWESWGVTZBJTZZZFKURDFWGQBFDJEKSOKRADSKCKMXNWVTXWXPGFYAAIM");
    tmp_msg_0.value.assign("RMUXJDWVAMBNHGFLACDONYBNGZRQQFCITDKWCMQTOQBELLESKXYQTEGLUSMPZOKMOTFLXMGUBQXIPTCXTEPNAHNUWBGVKAROCQWPMPEDUFHADNTJBJVVDTKLCPVGUCRYHHKIAIWSZODOVWRHPMQIXFRRMGBYCSN");
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
    msg.setTimeStamp(0.421109393131);
    msg.setSource(38123U);
    msg.setSourceEntity(194U);
    msg.setDestination(4045U);
    msg.setDestinationEntity(147U);
    msg.name.assign("VHEGFNPVZQOVIGJBBQHOEPTOFEOJMULFDSCKURNRBDAOEUNVPIOPHSWOAOTMTPIVSWAWGXVXSBWQQBYFOLJTHYFSIKQGLPDNCEWRLMDZJXXYAIHAWGXITDCTTAIHEKZZGEBJTRYUAFLWZZZFPRYVIFMVNHRWQGXCMDSQMLCSVAHZIUKEUQJMBLDLACPGMOJBMUVLSGPKURKXZYJFYKUKQGXXHE");

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
    msg.setTimeStamp(0.595842054119);
    msg.setSource(65417U);
    msg.setSourceEntity(133U);
    msg.setDestination(30912U);
    msg.setDestinationEntity(41U);
    msg.name.assign("YNJOCQRPMFXZYUAJLOVQKQWNLCUNGQZIAOCSCOSNVPMGIRGIZVWBXMYEMRSZKFKYDVJRVAGC");

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
    msg.setTimeStamp(0.268922501913);
    msg.setSource(11899U);
    msg.setSourceEntity(17U);
    msg.setDestination(17251U);
    msg.setDestinationEntity(105U);
    msg.name.assign("KOMBTAUJAJITQSKWEUCBZGGBPDNRPVCUYCRIYPYWQOJWHJTNBWXNDAJWHPXHECLHUBMRXRFGROPVTO");
    msg.visibility.assign("ZOXWYONIUFHNXLJHBFRADYCQMXJALBNTDZOCWICBRLGWISJAWLUUQNWVWHFZXOJWKSSUAKQFMIMEDIWHPWHFNKQQLZLYJDIXRCKRTFATDUIZAKTEEEQPSGUGBXYEJAMPCARNJVGVMMJJTRDOXJZ");
    msg.scope.assign("MUOCQQETAQUMRPJWRKBVCPHNVIJFCBCVECHYZ");

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
    msg.setTimeStamp(0.392057547342);
    msg.setSource(55902U);
    msg.setSourceEntity(197U);
    msg.setDestination(32288U);
    msg.setDestinationEntity(232U);
    msg.name.assign("GJUAEZKYEUTLPNHFPOOWZZPNKMSQYRHCMWBXNQUHZQZSFLVVEFATHSQAPGWYRGLAWHVBLYLEVCQHDWSTQRQLYDTBJNRIDBICGFBKFB");
    msg.visibility.assign("HONHXCHCLURCEOYKDOLHKOYVBESEPXKZXHRLUZDHZGSKWUSFJVYBDNERWKIKEVYKASUWWVYIMQFLXQSPAPEROTDMDIKDCHHQTGUJFDBMAVCQDOKQJYTXLYITVIRFQRLJAPYFOEBDACZDZUPJI");
    msg.scope.assign("MVNLTNGNAAYPTPGVBCQNNPATVHWQBURXBIOPFMAEQDQTSSRQBIMVDAROYFXRGKSEDXNUJJNEXYIWHISXPTFEKQSKVGHCKFCQHIMJVZZBEGAWEXJLKPVGZJKCWKJRIOSCFUQJLDHNEBNRZUPRDRULBO");

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
    msg.setTimeStamp(0.417580133581);
    msg.setSource(42283U);
    msg.setSourceEntity(165U);
    msg.setDestination(44266U);
    msg.setDestinationEntity(210U);
    msg.name.assign("DRDHSZBUBEUTIZHTMRGNDUKAOMYBUICEEDVGKTKOMYVJIBGIAEPKXGVZLRYJMUHZUIWYSCCPNRGXQNFGNTFXQMHNSFZPCFLBNPAEWLFZPKEMWRCCIJOQLNBWSIURDFRBVJZLLYOMQGNAONWFXLENV");
    msg.visibility.assign("FDGJBNXVXQWYLYOZHHTVGBMFVLTQIRUKUXBHEBOLANDGQSBPCLNKPPGHEUSAPEJYHDWMIFPKCVKIMMBBKDJVIJXTCZPAOULYOZJYGRWOHTNSOOAUOZIKQCCAUDUNDTYCGNKNSGRFYLHKSGGZPNKIOHSIETPZSYBMKXLMFEDTCRMXZRRIFQAIFGVSTQVHMEENLQOURMXARQJURF");
    msg.scope.assign("URECTYTKPNFGNXSQHNWMXZLLORTGJKWGDJPXVTSGBCOYGBJLYPJUMOCDDWXGAUPQDIKAENBABMIFRKZZVVRTANKMZMTAPVSLEGUFQWCIWPBI");

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
    msg.setTimeStamp(0.0290964753946);
    msg.setSource(49901U);
    msg.setSourceEntity(162U);
    msg.setDestination(5064U);
    msg.setDestinationEntity(60U);
    msg.name.assign("DFYOZUQGRVCWTAJRJRYHLEKCWWPBPOPDPREHBHKAITGPZONWZAFSXBWEXAGKNVBWHCOTZNWYXGAPDLHAVFCLTPZIERNXYJRYA");

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
    msg.setTimeStamp(0.584017685127);
    msg.setSource(59258U);
    msg.setSourceEntity(254U);
    msg.setDestination(3374U);
    msg.setDestinationEntity(3U);
    msg.name.assign("PESIACPQDXOVLNBHUITKFYBKWVHJWCLDSJHBLDNPTTFBZLMWIDOCTGDSVZEEMCNETPFKMYIZIERUPFBGSSFKMHGRLFRBKAOMHDZSWZKYANEEXQZLMQCCITOJWSFWUBXRBZXLYHTQGQUFLSOVYWRXCUNOAINVMXUSMVYFVGQWZOEVHACHILAKJG");

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
    msg.setTimeStamp(0.723029824247);
    msg.setSource(26537U);
    msg.setSourceEntity(18U);
    msg.setDestination(2217U);
    msg.setDestinationEntity(171U);
    msg.name.assign("YVQYBEOVCWXLSHITJCGUVAFNGYVXUMJWQFIVEFBFRZHSZTRBQRIBGAPBZEYETKALRXEAFGIGNROITCAPEZTIHURCMLOSPSFOPZKFDUQYSWUWLUNSMFTQBWTYLHGVHSPPKQYSOIVNHGUEVMXLXVJFTIJNADLZVKNNADQGZLOJJQGXEESMROJHEOCWBJZWUDIYXKZYWBTKKXXKMCIRXNPFUMJUNDBK");

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
    msg.setTimeStamp(0.253712005006);
    msg.setSource(3896U);
    msg.setSourceEntity(171U);
    msg.setDestination(65130U);
    msg.setDestinationEntity(72U);
    msg.name.assign("VAAXMPBOMLOJUIARMKUCJMVXGPUMERZYXNXOYCYGYKHPCNDQEHKJZDYYESOIKEIPMCRTOLZIFGRDXCPWTYQVOUDDESMSNFTZEBVDSAHUDWBVLFEOJLUHCRIRSWPIOZFPHALTWXNUIQXBQJEBUYLBQSYVITNXNATXPQVFFZWWEKJVSRLRBOCBHKMHVK");

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
    msg.setTimeStamp(0.505724211018);
    msg.setSource(18428U);
    msg.setSourceEntity(183U);
    msg.setDestination(98U);
    msg.setDestinationEntity(245U);
    msg.name.assign("BIBHOLGXUWFJJYUISRMDBEPABQYRMARSOIANADAEOJCTTITHVMZFNSXGHRQVBNDBFRTLYZWLELCQYVVKGL");

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
    msg.setTimeStamp(0.410833381814);
    msg.setSource(13417U);
    msg.setSourceEntity(108U);
    msg.setDestination(13236U);
    msg.setDestinationEntity(49U);
    msg.name.assign("ACUIDXSJDGSXGVLYIOMZETYMASYPUCPDOSETXRJQWDFANIWQEELVWWOXDKFXFBDXTPPRTBIDFBQIWCGFHNTJTWDZPLFAXTYGLAIGEKJKIVVPCZLBRELQGBUFHOIMPNHELPYOOICZUNKHBNFGZSSYJZAMBRHOYYSKRZVMVHK");

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
    msg.setTimeStamp(0.830826225681);
    msg.setSource(34872U);
    msg.setSourceEntity(18U);
    msg.setDestination(26717U);
    msg.setDestinationEntity(250U);
    msg.timeout = 1303490429U;

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
    msg.setTimeStamp(0.869053960509);
    msg.setSource(31618U);
    msg.setSourceEntity(178U);
    msg.setDestination(23398U);
    msg.setDestinationEntity(78U);
    msg.timeout = 3289391765U;

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
    msg.setTimeStamp(0.711592744606);
    msg.setSource(12910U);
    msg.setSourceEntity(15U);
    msg.setDestination(59047U);
    msg.setDestinationEntity(126U);
    msg.timeout = 4033905040U;

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
    msg.setTimeStamp(0.84917366626);
    msg.setSource(39290U);
    msg.setSourceEntity(233U);
    msg.setDestination(30237U);
    msg.setDestinationEntity(117U);
    msg.sessid = 3068697170U;

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
    msg.setTimeStamp(0.361183498778);
    msg.setSource(58548U);
    msg.setSourceEntity(66U);
    msg.setDestination(30301U);
    msg.setDestinationEntity(42U);
    msg.sessid = 1187647032U;

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
    msg.setTimeStamp(0.938243077442);
    msg.setSource(26511U);
    msg.setSourceEntity(200U);
    msg.setDestination(23422U);
    msg.setDestinationEntity(96U);
    msg.sessid = 912075797U;

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
    msg.setTimeStamp(0.854843143932);
    msg.setSource(5334U);
    msg.setSourceEntity(20U);
    msg.setDestination(35332U);
    msg.setDestinationEntity(47U);
    msg.sessid = 3742880894U;
    msg.messages.assign("JWYKOZJXFHCVUZEPQYFIKECVVMPZIDEXCUSVMRJBTSBNOAHIPRGJXEHQKRCPUBDQSLXAIMLPEAKXT");

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
    msg.setTimeStamp(0.971598632785);
    msg.setSource(37891U);
    msg.setSourceEntity(69U);
    msg.setDestination(28467U);
    msg.setDestinationEntity(153U);
    msg.sessid = 1083444671U;
    msg.messages.assign("KLZOFDOWHBNAVQSCIUWMBYMMMYYYNPSQVKUPKZJQWIAZYLWUNUXQYJAVGOCYECRMSOKHVESPTIJHFOCANTDUCMGL");

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
    msg.setTimeStamp(0.0454809346836);
    msg.setSource(12271U);
    msg.setSourceEntity(217U);
    msg.setDestination(53592U);
    msg.setDestinationEntity(236U);
    msg.sessid = 2682644128U;
    msg.messages.assign("UMKIGSEPRTQGCNTBGYOSYLXMCYOBUCXIHUMKWFFZAXXJNTGIHSQREIDSHCQJGNKZWTBJAJMJVFJLMYRJNOSRQDDWUBDAUYVQGNWFCFREEFCISZKVBSZLZHRKCZZMIQWNMONYHPPYEHLODNESAWOTWPTEVXAQHKIUTGTVIFEIOJBACPXGFODXOGBVPMLSKXSFR");

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
    msg.setTimeStamp(0.832443991884);
    msg.setSource(1340U);
    msg.setSourceEntity(34U);
    msg.setDestination(35202U);
    msg.setDestinationEntity(2U);
    msg.sessid = 3944555590U;

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
    msg.setTimeStamp(0.33976011885);
    msg.setSource(7491U);
    msg.setSourceEntity(214U);
    msg.setDestination(33692U);
    msg.setDestinationEntity(164U);
    msg.sessid = 1864344305U;

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
    msg.setTimeStamp(0.209745555364);
    msg.setSource(47779U);
    msg.setSourceEntity(157U);
    msg.setDestination(53388U);
    msg.setDestinationEntity(134U);
    msg.sessid = 1352281691U;

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
    msg.setTimeStamp(0.723688369264);
    msg.setSource(31740U);
    msg.setSourceEntity(66U);
    msg.setDestination(41006U);
    msg.setDestinationEntity(225U);
    msg.sessid = 3089889279U;
    msg.status = 181U;

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
    msg.setTimeStamp(0.821791647354);
    msg.setSource(59830U);
    msg.setSourceEntity(114U);
    msg.setDestination(56613U);
    msg.setDestinationEntity(203U);
    msg.sessid = 2675363973U;
    msg.status = 193U;

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
    msg.setTimeStamp(0.409395522823);
    msg.setSource(44732U);
    msg.setSourceEntity(143U);
    msg.setDestination(17944U);
    msg.setDestinationEntity(44U);
    msg.sessid = 3816823360U;
    msg.status = 109U;

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
    msg.setTimeStamp(0.580342331577);
    msg.setSource(17487U);
    msg.setSourceEntity(214U);
    msg.setDestination(52484U);
    msg.setDestinationEntity(9U);
    msg.name.assign("FEWCIGSOZLUXLVWXRYYEJMOWGGEJHVOQHVHPRKIGLLXVBZZSQZXRZIVRTNVHNEKYDMEQNCZCTQMENFDWBUUAKIWAUIBXQQJPOESYLRYYSGAZEXXCGCLAULXDZMIFPOSRTJWJRAPLSTVKZXXBZATNTCJLDQSHYFKQWDFUKYD");

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
    msg.setTimeStamp(0.139260125916);
    msg.setSource(45097U);
    msg.setSourceEntity(176U);
    msg.setDestination(11525U);
    msg.setDestinationEntity(191U);
    msg.name.assign("GDCQJAHXFMTXWIJHHCSNQPPLRDGGPW");

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
    msg.setTimeStamp(0.861499844051);
    msg.setSource(25013U);
    msg.setSourceEntity(218U);
    msg.setDestination(25608U);
    msg.setDestinationEntity(117U);
    msg.name.assign("UKEZVWUCCGCDVPFILRKEKOIEATUCOPHYLXMMBNAURZARZLTLCQKYVHVZYPXMYMGRJWCZTEHMCWEANUDJVTKTXETRDKEBRVUJIPNFROBXNCNGQVHWNVBORZXHPSMYGFESKJLJTAGDXAMSBFPVNUWEHXBWHQUSQIGUAUGSCCQNFXJZBZSDRNDJLAATQKJLDQFQYBSZWGDOPBBSIWMFINOLTMHLSEIFIRMPPYVOWTHJILD");

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
    msg.setTimeStamp(0.0505116213589);
    msg.setSource(50090U);
    msg.setSourceEntity(72U);
    msg.setDestination(18016U);
    msg.setDestinationEntity(31U);
    msg.name.assign("OZFZRNANZNJCQDDZPIUZWGQXXJIVKXWVGRRWTQSAMTPGBHNFVBLVSFVSCUFSTPMCEWLSRATDUJXSOPHOMXQJTULFEVJJQKHWKREMIDPACZLGEQIKYLHONYEQLMZONXIOVAOWMU");

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
    msg.setTimeStamp(0.249287624036);
    msg.setSource(39694U);
    msg.setSourceEntity(239U);
    msg.setDestination(49418U);
    msg.setDestinationEntity(244U);
    msg.name.assign("NOLOECQIRRZPPCSWWTVMCYNVMJEFYQFHMSEAJTLXJLKDPHDGEHFOMOVQMNYOTLAANQXNWFYIOLUNZLUYHSWBBRFUXTSJIWHAKZXSBVMOYGCAPZRITMCOFMDHVPZBUFLBOXKJRZALRAIDKDUBSJCAJXFJPTPBQDTUUZIWWKVGQDWEHUNEXGGWLKTVXDKQICIJYM");

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
    msg.setTimeStamp(0.971290970269);
    msg.setSource(53753U);
    msg.setSourceEntity(14U);
    msg.setDestination(47999U);
    msg.setDestinationEntity(157U);
    msg.name.assign("JHBVPQZVSYFGBUVJYNKYSIFAOSQAPWQFKHBKUTDJTVSKTLSAGIGBPCILOSCAYWVAOMMKOQEWILRHDIHCXOJWVXVHELNNFSJMGJNTNICYNATFAVLRRNITXDE");

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
    msg.setTimeStamp(0.243218941463);
    msg.setSource(5365U);
    msg.setSourceEntity(191U);
    msg.setDestination(5889U);
    msg.setDestinationEntity(18U);
    msg.type = 208U;
    msg.error.assign("ZVFIFTFAMYWTJBBDIZUYXEOPSRBNUCDZJWZYJYCUCNPRVXUMVDAGAMBUFILVZCMNEQEVSYLOBWYCITNHNYNRSOIQQZGAYDEKJXALTSDHUPHZRPZHKSQAVIKUDVIHBAYKJEPSWWABWDILIZFXLJXALGQWKQBFNRPFDEYRERUGE");

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
    msg.setTimeStamp(0.30242898086);
    msg.setSource(38541U);
    msg.setSourceEntity(61U);
    msg.setDestination(53061U);
    msg.setDestinationEntity(211U);
    msg.type = 56U;
    msg.error.assign("QRDXXFHFUYCQWGNQNAKVSTJBMRSEIDRWQBDFANRIZULYCDNAOYFSOGZUBYSUIWVWELFRTTLFQPSPXLYKBFFAYYNUVFKJCQWAXIGPHOICNDJAXOBKWRLEKIMPACDMDZJJLMJVVXBPGKSKJTUBOJRGCHPUZCDRLDASIFKCJWILATZQMQGUKYODJUBSAKZETUHNH");

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
    msg.setTimeStamp(0.918954988258);
    msg.setSource(37441U);
    msg.setSourceEntity(146U);
    msg.setDestination(12569U);
    msg.setDestinationEntity(253U);
    msg.type = 150U;
    msg.error.assign("HVZUJKGJANPIYIPZOVOBQWTRVVMEFZDQVRZGCNPZLOXPGFADMECLUYEIFCKSJVYUTSDJOQPWEUACKYBTTHKXABLKFRKYOVRFALQYKLMHPHXLPXQHWJFRJDNOQCVBXWUZBFRPOZBWVPTCYN");

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
    msg.setTimeStamp(0.773713711522);
    msg.setSource(15052U);
    msg.setSourceEntity(145U);
    msg.setDestination(64889U);
    msg.setDestinationEntity(45U);
    msg.seq = 14662U;
    msg.sys_dst.assign("EHQNFXIQYVFWTOOMKIZEYVKYTWQKRVYPIUGAVAGCXYAZAPRYXUHUENXVR");
    msg.flags = 123U;
    const char tmp_msg_0[] = {15, -103, 49, -115, 69, -50, 21, -15, -10, 49, -104, 61, -119, 38, 121, 55, -91, -96, -46, -128, -87, 60, -52, 101, -110, 20, -17, 23, -26, -86, 100, 39, 92, 94, 46, -57, -110, 12, -82, 12, 8, -61};
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
    msg.setTimeStamp(0.0805701272606);
    msg.setSource(65389U);
    msg.setSourceEntity(114U);
    msg.setDestination(52398U);
    msg.setDestinationEntity(129U);
    msg.seq = 36126U;
    msg.sys_dst.assign("WUYXGPLPDORBSLSMVTUAZJMYPRYNDYAIXDMNNUPOBJWALEKHEULDXGATEFDKPCCZVOTBNMRRFJUXRWEWUTGBBOIARDFUKKMVZIBBLBRLFGDGXQGDDCMEODXRLVVNVCFKPZUZLISHFOSXAQEVPCWGMJARQKKQCVZBGTJCYHNGHTIHQQOWJYFTSJWBOZQUIQJW");
    msg.flags = 38U;
    const char tmp_msg_0[] = {-118, 38, 90, 122, -1, 17, -113, 114, -59, -87, 124, 87, -92, 114, 94, 75, 7, -44, -29, -101, -90, 21, 122, 75, 100, 49, -11, -110, 114, -77, -116, -23, 92, -77, -99, 62, 72, -43, 100, -99, 49, 58, -118, -114, -41, -63, -53, -74, 53, -14, 41, 17, 112, -111, 28, -17, -36, 18, 6, -58, -102, 5, 19, -59, -71, 104, -106, 58, 12, 51, 31, 25, 75, 70, 93, -17, 76, 118, -55, 62, 6, 110, 124, 80, 43, 58, 66, -103, -91, -10, 26, -53, -116, -2, -20, 106, 80, -94, -28, -76, -53, 8, 56, -75, 23, -25, 41, 6, 40, -30, 94, 86, 6, -107, 43, -24, 0, -52, 3, 38, -105, 24, -10, 32, -63, 70, 77, -100, -22, -56, 105, 1, -90, 73, 34, -29, 117, 121, -73, 102, -65, -19, -33, 81, -56, -99, 112, 17, -69, 27, -33, -27, -25, 74, -43, -27, -11, 49, -61, 4, -37, 23, 46, -16, -71, -92, 4, 96, 32, 124, 8, -82, 63, -68, -126, -19, -49, 2, 65, 120, 53, 119, -5, 41, 57, -10, 73, -113, -1, 8, 114, 66, 111, 27, -110, 124};
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
    msg.setTimeStamp(0.629092805219);
    msg.setSource(43375U);
    msg.setSourceEntity(19U);
    msg.setDestination(17614U);
    msg.setDestinationEntity(231U);
    msg.seq = 58669U;
    msg.sys_dst.assign("BEEMOGXJOZJUTVSCGGWCIAWCYULQNDXFYQLDOUNXVAJXPHKVEREJHDTXHJFMNZGQMQSQWEPAGOLWYTBWDSNLINLGRKQCBYDPTHFDWUZQWAEKDUMUWUFMIZIVAFDNKBJECCFRTRRJRHXOJAGUHK");
    msg.flags = 30U;
    const char tmp_msg_0[] = {12, -14, 51, 89, 3, -104, 12, 5, 102, -82, 8, 94, -52, -94, 70, 92, 21, -15, 60, 84, 14, -42, 27, 2, 87, -35, 44, 126, 37, 72, 93, -109, 103, 10, -108, -93, 74, 80, 96, 47, -54, 72, 25, -47, -33, -110, 0, 58, 16, 11, -38, -109, 94, -86, 3, -66, 99, 107, -26};
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
    msg.setTimeStamp(0.275117398021);
    msg.setSource(43825U);
    msg.setSourceEntity(149U);
    msg.setDestination(57936U);
    msg.setDestinationEntity(19U);
    msg.sys_src.assign("BLGUPKQDLCABIVZUFHEYMCINWGXNSFXPRLDFGNETZLFTQGSTCSHAMBKQPJWAXIXYTNFXDBWWUVRCYWLQIBGJRRJDQQGETMMHLOHROEADUACZPAJMUTUUXRGBYQK");
    msg.sys_dst.assign("AMQWWILNQNRVRDURCXIZOFEUVUIMOVWGUBPWCZIOPFDASKPFFEESPHAUQANNIUEYPKTYIGODJGGIYVJCJTLNCJXTSXYTBFJVDOLOMHNN");
    msg.flags = 249U;
    const char tmp_msg_0[] = {61, 47, -71, 7, 62, 7, -21, 17, 124, 69, 60, -32, 83, 4, 87, 99, -52, -96, -105, 45, -45, -35, 87, 97, -79, 66, -60, -110, -76, 101, -55, -117, 119, 63, 11, 100, -7, 51, -89, -109, -88, -123, 94, -8, -5, 64, -76, 85, 85, 76, 23, 76, 41, 89, 54, 97, -5, -20, 73, 47, 95, 21, -44, -99, 10, 8, 90, 47, 111, -20, -29, 37, -51, -39, -91, -83, -56, 40, 73, 71, -96, 65, -127, -118, 74, -111, -48, -30, -45, 105, -123, -40, 126, 100, -75, 110, 27, -102, -55, -94, -15, 86, -119, 90, 66, -115, -14, -9, 61, 40, -52, -27, -63, -45, -107, -55, -51, 74, 29, -15, -31, -122, 22, 2, 52, -89, 98, 21, -60, 77, -78, -120, 12, -126, -82, -104, 59, -12, -44, -35, -33, 84, -128, -52, -17, -28, -84, -66, 51, 78, -60, 17, -56, -56, -112, 93, 21, -112, -78, 86, -51, 116, 100, -17, 42, -121, 114, -120, -4, -42, 81, 1, 98, 102, -37, -81, -98, 105, -65, -111, 120, 14, -127, 46, 20, 79, -71, 78, 104, 3, 105, -66, -97, 52};
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
    msg.setTimeStamp(0.585962136976);
    msg.setSource(49977U);
    msg.setSourceEntity(20U);
    msg.setDestination(49105U);
    msg.setDestinationEntity(64U);
    msg.sys_src.assign("SSVKZHZICRKWOLDYFOHMWGSPZTXLWWUGOAKWDWNEXAAIAAQLZMGOTBOJFKMRBTFJBQREYRQEVETKMHZIHNVVRAPNTVHOOABRGVZQPBDHKIHVSCGYUPGSXCPYUEF");
    msg.sys_dst.assign("QJWMKWKXKYHOSTNJPVRVVHGMKWELLUHDQNIZUQUFRYATIZQMCICSTZFXFYYSWSDEVZDBFWXKSBUHBCGCYPDNDCMGCMUEPZPWVNNRJXEEBKSIIVFGFIEDXKMSPZUPNLKFJFAEJVLJFPBXBDUJOYNNSDAGOLQOVWMQHJRLLCZCYEXWYSJEQT");
    msg.flags = 113U;
    const char tmp_msg_0[] = {85, 102, -38, -45, 89, -12, 81, 93, 118, 101, -71, -92, 93, 7, -4, 85, 24, 17, 1, 110, 37, -120, 44, 74, 110, 94, 67, -82, 32, 16, 87};
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
    msg.setTimeStamp(0.486797969426);
    msg.setSource(898U);
    msg.setSourceEntity(68U);
    msg.setDestination(5683U);
    msg.setDestinationEntity(15U);
    msg.sys_src.assign("YNSTXGPXOTQTNGKHOCDYYZZIDZHEJNPAWDHBFJPEUZCAHSIEKBVUMZETHFPOQHNVVXVFLKYCCUNUJWLTGTVAGMKQQUQHIBCIQSLRUJVLBEFLHZGTRMXQCAPOSLOFOMEHRPCFJRNVESWLBWAPOIEGTJKGUIBAYCRJDXJNSFXNWFREADMUINSJMKPXDKBODZCQUBRKCZPTORWMVIWIMSZYVVEFJSDRMLRAWGHONBGYYGYWBZLAXXT");
    msg.sys_dst.assign("TUZVPWCETZUCZSWVQT");
    msg.flags = 247U;
    const char tmp_msg_0[] = {83, -128, -87, -30, -12, 72, -31, -34, 38, -80, -54, -104, -99, 105, 96, 10, -39, -33, -58, 107, -21, -38, 5, 2, 105, 115, 73, 22, -55, 20, 61, 93, -122, 106, 45, 98, 65, 122, -115, 113, -93, 44, -112, -23, 100, 28, 86, 27, 45, -29, 61, -46, -88, 74, 112, -9, 13, -122, -12, -124, -81, 94, -31, -67, 38, 69, -41, 60, -18, 51, -103, 112, 51, 12};
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
    msg.setTimeStamp(0.603650209403);
    msg.setSource(65524U);
    msg.setSourceEntity(79U);
    msg.setDestination(12749U);
    msg.setDestinationEntity(199U);
    msg.seq = 30700U;
    msg.value = 68U;
    msg.error.assign("ETAJAOIFKZJVROMHHVEPZASKVCGBILDXXIOSBMREXCDZSCTXCGTEWWLPGFTPOSQQFNUATT");

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
    msg.setTimeStamp(0.259827327551);
    msg.setSource(13560U);
    msg.setSourceEntity(6U);
    msg.setDestination(10714U);
    msg.setDestinationEntity(241U);
    msg.seq = 30939U;
    msg.value = 38U;
    msg.error.assign("XFHAWAWHWCPDPCVPZLQUJZAFVMHKAGUEBUMKKSSPSBDHUPDPOJTXTFKLLGXZORHYTVYDYTELDFBIYPQRZVKBOQECNWFZGOZHOQWIFIWVEACRRCNBITLNDXESGMTQTJYEFDBEV");

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
    msg.setTimeStamp(0.105646139815);
    msg.setSource(31335U);
    msg.setSourceEntity(29U);
    msg.setDestination(21171U);
    msg.setDestinationEntity(84U);
    msg.seq = 25146U;
    msg.value = 27U;
    msg.error.assign("KBKVSEODUBZTFQWRCSHRWHSNQIONPRMLITYTXITJAMQYEGBDTDVQFCHNDZKOQAPUYGZLPTKPTLSCVCVMNZPXHWGBEKEFFGLNIJDZYFZNAQOJDBLVFGICMKKKSAEDPNOJWKQZLUGXBQHPSROIUWTIAXHMUKCJWFGUHMFRPNIUXJZVODTVJMMCUBNSCIWJDDAOHGAUOWAHETWQJELPZAOYRBRWMSEXRIXYQF");

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
    msg.setTimeStamp(0.256355423808);
    msg.setSource(52329U);
    msg.setSourceEntity(240U);
    msg.setDestination(31929U);
    msg.setDestinationEntity(184U);
    msg.seq = 24318U;
    msg.sys.assign("CCHWOFCVVBFIAEIQWNZOTQSBYBKTLPHUNOXSNHCSKOLDLMGWUCTBROGEMYYYZEXKVOSTCDUAMUWOCXRJUGZTPWJFPXXCGJOMOAGTRDYYGKLFRFKQYHKPMQCKZLVNFYEAUPENISW");
    msg.value = 0.700143533791;

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
    msg.setTimeStamp(0.85419904488);
    msg.setSource(54039U);
    msg.setSourceEntity(246U);
    msg.setDestination(63651U);
    msg.setDestinationEntity(8U);
    msg.seq = 24873U;
    msg.sys.assign("AXAIYXTETJVXHBCPPQVCBOCJUGNASHWCTLMXYHLZSYJYXOJBKSBDXUCRIRYEUNARPAFLGWPUFMFQHTFMENJZTBBCUNYXGIZHWYOIQMICKJPGLXLAVZMWHZDVNIPENDSCSEBQKEFCQKBPNTOOQHEUAVQVFVMZFVCORWWDDISADJMLKLDNKLKESRS");
    msg.value = 0.45277248289;

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
    msg.setTimeStamp(0.487397264367);
    msg.setSource(13088U);
    msg.setSourceEntity(119U);
    msg.setDestination(54349U);
    msg.setDestinationEntity(212U);
    msg.seq = 26869U;
    msg.sys.assign("WPKLZAMJNFBKCJGABZSLRTSBOLMGXVKFFBMBVDBRKMYXPEAAXQZJIFVKDFEUTPKPCIQFXETHRYQTMWHXZIVUDHUJTOQXWUEWFWUCCOUMSJPTAOLZNBQGWDCNYYCRRCSMNWNDDQGCHHXUGIIEGZYKORUZGEZVXZOYQRHUIJNJWOCEMSFKDANVTAONHSDIEPJRGIBNYITQSFLPPILQHDPDGKWXBKHULSTNLSORVVOHMAYE");
    msg.value = 0.500349908372;

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
    msg.setTimeStamp(0.451155331771);
    msg.setSource(29931U);
    msg.setSourceEntity(193U);
    msg.setDestination(22905U);
    msg.setDestinationEntity(233U);
    msg.action = 48U;
    msg.longain = 0.842372337717;
    msg.latgain = 0.164210346255;
    msg.bondthick = 1147522926U;
    msg.leadgain = 0.972260925936;
    msg.deconflgain = 0.197636787837;

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
    msg.setTimeStamp(0.746195063168);
    msg.setSource(5641U);
    msg.setSourceEntity(148U);
    msg.setDestination(46617U);
    msg.setDestinationEntity(83U);
    msg.action = 140U;
    msg.longain = 0.834086686322;
    msg.latgain = 0.205598240444;
    msg.bondthick = 2284665100U;
    msg.leadgain = 0.515534507299;
    msg.deconflgain = 0.0227736549684;

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
    msg.setTimeStamp(0.277519908082);
    msg.setSource(51498U);
    msg.setSourceEntity(17U);
    msg.setDestination(16576U);
    msg.setDestinationEntity(11U);
    msg.action = 147U;
    msg.longain = 0.204687630377;
    msg.latgain = 0.660707348316;
    msg.bondthick = 3141456198U;
    msg.leadgain = 0.556537786597;
    msg.deconflgain = 0.174550925775;

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
    msg.setTimeStamp(0.571086814452);
    msg.setSource(17595U);
    msg.setSourceEntity(190U);
    msg.setDestination(15429U);
    msg.setDestinationEntity(132U);
    msg.err_mean = 0.399839919706;
    msg.dist_min_abs = 0.815635829891;
    msg.dist_min_mean = 0.749398292326;

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
    msg.setTimeStamp(0.802303367378);
    msg.setSource(57394U);
    msg.setSourceEntity(68U);
    msg.setDestination(19759U);
    msg.setDestinationEntity(168U);
    msg.err_mean = 0.363675804876;
    msg.dist_min_abs = 0.0706700816779;
    msg.dist_min_mean = 0.0577051934688;

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
    msg.setTimeStamp(0.023807333639);
    msg.setSource(51411U);
    msg.setSourceEntity(211U);
    msg.setDestination(4059U);
    msg.setDestinationEntity(89U);
    msg.err_mean = 0.777566984815;
    msg.dist_min_abs = 0.0177080897365;
    msg.dist_min_mean = 0.918182757747;

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
    msg.setTimeStamp(0.0415262706681);
    msg.setSource(27244U);
    msg.setSourceEntity(7U);
    msg.setDestination(10491U);
    msg.setDestinationEntity(109U);
    msg.action = 202U;
    msg.lon_gain = 0.161403577699;
    msg.lat_gain = 0.795749361965;
    msg.bond_thick = 0.585073195878;
    msg.lead_gain = 0.927685509053;
    msg.deconfl_gain = 0.360451362447;
    msg.accel_switch_gain = 0.553720730089;
    msg.safe_dist = 0.898710441558;
    msg.deconflict_offset = 0.162036218277;
    msg.accel_safe_margin = 0.865987716211;
    msg.accel_lim_x = 0.509366643819;

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
    msg.setTimeStamp(0.298007690083);
    msg.setSource(39494U);
    msg.setSourceEntity(19U);
    msg.setDestination(47967U);
    msg.setDestinationEntity(170U);
    msg.action = 205U;
    msg.lon_gain = 0.200737313551;
    msg.lat_gain = 0.647401167644;
    msg.bond_thick = 0.367983377833;
    msg.lead_gain = 0.743317559376;
    msg.deconfl_gain = 0.574795216263;
    msg.accel_switch_gain = 0.861571004963;
    msg.safe_dist = 0.127511646437;
    msg.deconflict_offset = 0.0170699737649;
    msg.accel_safe_margin = 0.967418066131;
    msg.accel_lim_x = 0.803059478024;

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
    msg.setTimeStamp(0.937963852516);
    msg.setSource(60054U);
    msg.setSourceEntity(207U);
    msg.setDestination(21076U);
    msg.setDestinationEntity(49U);
    msg.action = 47U;
    msg.lon_gain = 0.137813042316;
    msg.lat_gain = 0.730054669209;
    msg.bond_thick = 0.872136314187;
    msg.lead_gain = 0.46131000018;
    msg.deconfl_gain = 0.657124341693;
    msg.accel_switch_gain = 0.363691491625;
    msg.safe_dist = 0.718537352532;
    msg.deconflict_offset = 0.771961393819;
    msg.accel_safe_margin = 0.713959501466;
    msg.accel_lim_x = 0.622664071892;

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
    msg.setTimeStamp(0.179046057446);
    msg.setSource(58983U);
    msg.setSourceEntity(122U);
    msg.setDestination(50678U);
    msg.setDestinationEntity(152U);
    msg.type = 186U;
    msg.op = 84U;
    msg.err_mean = 0.428213410153;
    msg.dist_min_abs = 0.673450679654;
    msg.dist_min_mean = 0.029304724102;
    msg.roll_rate_mean = 0.00909083102388;
    msg.time = 0.0944482185646;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 91U;
    tmp_msg_0.lon_gain = 0.114766176647;
    tmp_msg_0.lat_gain = 0.214825713708;
    tmp_msg_0.bond_thick = 0.902835206096;
    tmp_msg_0.lead_gain = 0.250535978205;
    tmp_msg_0.deconfl_gain = 0.509422806105;
    tmp_msg_0.accel_switch_gain = 0.417764156388;
    tmp_msg_0.safe_dist = 0.0697950589072;
    tmp_msg_0.deconflict_offset = 0.0713548127076;
    tmp_msg_0.accel_safe_margin = 0.823577109275;
    tmp_msg_0.accel_lim_x = 0.623744684782;
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
    msg.setTimeStamp(0.769394010745);
    msg.setSource(35839U);
    msg.setSourceEntity(88U);
    msg.setDestination(45090U);
    msg.setDestinationEntity(50U);
    msg.type = 94U;
    msg.op = 129U;
    msg.err_mean = 0.120254156664;
    msg.dist_min_abs = 0.884395304879;
    msg.dist_min_mean = 0.755865624661;
    msg.roll_rate_mean = 0.790173450933;
    msg.time = 0.348632845703;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 114U;
    tmp_msg_0.lon_gain = 0.457364974641;
    tmp_msg_0.lat_gain = 0.487115829954;
    tmp_msg_0.bond_thick = 0.500406537244;
    tmp_msg_0.lead_gain = 0.298228824613;
    tmp_msg_0.deconfl_gain = 0.884907425908;
    tmp_msg_0.accel_switch_gain = 0.0100824698291;
    tmp_msg_0.safe_dist = 0.97957329785;
    tmp_msg_0.deconflict_offset = 0.705765072726;
    tmp_msg_0.accel_safe_margin = 0.826285686506;
    tmp_msg_0.accel_lim_x = 0.699164230365;
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
    msg.setTimeStamp(0.790490351079);
    msg.setSource(60167U);
    msg.setSourceEntity(192U);
    msg.setDestination(3141U);
    msg.setDestinationEntity(191U);
    msg.type = 6U;
    msg.op = 22U;
    msg.err_mean = 0.877227485913;
    msg.dist_min_abs = 0.0837910764563;
    msg.dist_min_mean = 0.712658079664;
    msg.roll_rate_mean = 0.56717187898;
    msg.time = 0.258988478343;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 146U;
    tmp_msg_0.lon_gain = 0.801975987263;
    tmp_msg_0.lat_gain = 0.510027554344;
    tmp_msg_0.bond_thick = 0.227438665207;
    tmp_msg_0.lead_gain = 0.667304539932;
    tmp_msg_0.deconfl_gain = 0.749075682338;
    tmp_msg_0.accel_switch_gain = 0.727579594898;
    tmp_msg_0.safe_dist = 0.450061271771;
    tmp_msg_0.deconflict_offset = 0.869019909781;
    tmp_msg_0.accel_safe_margin = 0.443868564818;
    tmp_msg_0.accel_lim_x = 0.419952120686;
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
    msg.setTimeStamp(0.211121503768);
    msg.setSource(930U);
    msg.setSourceEntity(106U);
    msg.setDestination(34686U);
    msg.setDestinationEntity(214U);
    msg.lat = 0.970325368678;
    msg.lon = 0.222638087433;
    msg.eta = 832737030U;
    msg.duration = 32257U;

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
    msg.setTimeStamp(0.721160959075);
    msg.setSource(35110U);
    msg.setSourceEntity(235U);
    msg.setDestination(12873U);
    msg.setDestinationEntity(44U);
    msg.lat = 0.44937989816;
    msg.lon = 0.943367497268;
    msg.eta = 1516892821U;
    msg.duration = 63291U;

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
    msg.setTimeStamp(0.133584169019);
    msg.setSource(24127U);
    msg.setSourceEntity(178U);
    msg.setDestination(46955U);
    msg.setDestinationEntity(151U);
    msg.lat = 0.0765607553809;
    msg.lon = 0.315779743377;
    msg.eta = 942289158U;
    msg.duration = 16451U;

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
    msg.setTimeStamp(0.380382301168);
    msg.setSource(58725U);
    msg.setSourceEntity(222U);
    msg.setDestination(35487U);
    msg.setDestinationEntity(193U);
    msg.plan_id = 9525U;

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
    msg.setTimeStamp(0.469972433168);
    msg.setSource(56215U);
    msg.setSourceEntity(48U);
    msg.setDestination(43301U);
    msg.setDestinationEntity(194U);
    msg.plan_id = 39215U;
    IMC::SoiWaypoint tmp_msg_0;
    tmp_msg_0.lat = 0.360681526973;
    tmp_msg_0.lon = 0.0695886086139;
    tmp_msg_0.eta = 2440687645U;
    tmp_msg_0.duration = 19563U;
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
    msg.setTimeStamp(0.960307220484);
    msg.setSource(20851U);
    msg.setSourceEntity(237U);
    msg.setDestination(15213U);
    msg.setDestinationEntity(127U);
    msg.plan_id = 3836U;

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
    msg.setTimeStamp(0.920706742804);
    msg.setSource(63821U);
    msg.setSourceEntity(53U);
    msg.setDestination(29199U);
    msg.setDestinationEntity(0U);
    msg.type = 19U;
    msg.command = 138U;
    msg.settings.assign("RFANUSZSMDHZADEQYOWLYH");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 51968U;
    msg.plan.set(tmp_msg_0);
    msg.info.assign("JSAIFZXTYNOYGHDCFLNWKOGBSPSEIFTTXQSYNGWOMKVCZXUXPMEZWEGJTMYWUB");

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
    msg.setTimeStamp(0.362948280861);
    msg.setSource(19348U);
    msg.setSourceEntity(240U);
    msg.setDestination(48321U);
    msg.setDestinationEntity(60U);
    msg.type = 40U;
    msg.command = 68U;
    msg.settings.assign("ZMELKEAFOTSJWIFOSPSYXJZTHGABFBVTEEZHGNOCJHKTWPVNDAPCFGXYBSNWQKOQNBJMXDHWLLSPALKBBOPDMWWCZQIFZNQVRBAXUZXCOXFIQZFYBAMXPRH");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 11549U;
    msg.plan.set(tmp_msg_0);
    msg.info.assign("LEHLFNOKSQBQKHUORTQIRBOEAVRAEKJNZLZGMZLNBDWXVBWQYPJNHZQPEQYFWDDVXRNBVGHWSSPZIYI");

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
    msg.setTimeStamp(0.276031088339);
    msg.setSource(48304U);
    msg.setSourceEntity(218U);
    msg.setDestination(12740U);
    msg.setDestinationEntity(139U);
    msg.type = 117U;
    msg.command = 214U;
    msg.settings.assign("EMVEHRRYEMOSYRKBYMJLWUDQHKEQYRPPFATYWNGXUROJBFJEXTXTBGKYTEPSCPVBLGYPMTWGMEKPBKNBITLHWFPDARZCLDSQIPKJHHIEG");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 52140U;
    IMC::SoiWaypoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.658827090081;
    tmp_tmp_msg_0_0.lon = 0.450587416602;
    tmp_tmp_msg_0_0.eta = 76746199U;
    tmp_tmp_msg_0_0.duration = 28973U;
    tmp_msg_0.waypoints.push_back(tmp_tmp_msg_0_0);
    msg.plan.set(tmp_msg_0);
    msg.info.assign("XAIIKBKSJBJBCFJTXQDDCSSAHBZWLJPOKPPBRALTTCFLMRZSFSTOMFMGVGVRQDVGGFRZGIKOIUDEZHUHQWQYAVQTYNKNTMUFEKAOKNJXLBGXHIOVWXYEYPXTAETRODEDMHZLNJVUDYQJTWMXNCCCQVEFESFPAUUWMUGRUBXODPBGKVXOOKTSPVDYNBYSWCHBZCEWYZHPWWHCYLHIKJQRQLFFZ");

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
    msg.setTimeStamp(0.699109845956);
    msg.setSource(21579U);
    msg.setSourceEntity(76U);
    msg.setDestination(27567U);
    msg.setDestinationEntity(113U);
    msg.state = 1U;
    msg.plan_id = 60427U;
    msg.wpt_id = 128U;
    msg.settings_chk = 26558U;

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
    msg.setTimeStamp(0.509119149185);
    msg.setSource(32930U);
    msg.setSourceEntity(91U);
    msg.setDestination(24546U);
    msg.setDestinationEntity(193U);
    msg.state = 1U;
    msg.plan_id = 5610U;
    msg.wpt_id = 22U;
    msg.settings_chk = 47714U;

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
    msg.setTimeStamp(0.174775788083);
    msg.setSource(45619U);
    msg.setSourceEntity(111U);
    msg.setDestination(37149U);
    msg.setDestinationEntity(95U);
    msg.state = 157U;
    msg.plan_id = 406U;
    msg.wpt_id = 119U;
    msg.settings_chk = 50593U;

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
    msg.setTimeStamp(0.479337191216);
    msg.setSource(15632U);
    msg.setSourceEntity(192U);
    msg.setDestination(44956U);
    msg.setDestinationEntity(132U);
    msg.uid = 101U;
    msg.frag_number = 111U;
    msg.num_frags = 67U;
    const char tmp_msg_0[] = {51, 123, -106, -52, 65, -72, 85, 42, 107, -120, 2, -22, 77, -66, 73, 77, -21, 125, 124, -2, -41, -106, -10, 17, 89, 62, -1, -118, -50, -26, -99, 53, -55, -102, 96, 17, -8, 90, 86, -16, 30, 15, -33, -3, -93, -47, -93, -41, -9, -18, -85, 19, 87, -59, 57, 11, 66, -107, 26, -127, 64, -27, -14, 121, 42, 68, -79, -112, 37, 103, -85, -100, 46, -46, -59, 84, 69, -64, 68, -121, -17, -50, -78, 64, -127, 59, -107, 0, 70, -122, -112, -40, 1, 33, 15, -61, -65, -100, 11, -60, 101, 106, 123, -52, 112, -49, 72, 66, 105, -82, -18, -106, 56, -34, -99, -75, 34, -37, 60, -112, -117, -33, -45, -10, -100, -60, -66, 21, 103, -112, -126, 17, -118, -55, -20, 79, 122, -95, 8, 87, -42, -109, -127, -51, -111, 56, -5, 111, -56, 39, 85, 61, 35, -88, -74, 58, 43, -83, 78, 95, 88, 85, -91, -77, 10, 24, -62, -41, -100, -59, -94, -58, -35, 54, -103, 61, 67, 77, 27, 65, 79, -49, 42, -34, -47, -68, 43, 72, 27, -118, 39, -72, 17, -71, 115, 42, 106, -34, -64, -40, -57, -117, -7, -14, 90, 60, -121, -99, -53, -122, -13, 70, 109, -5, 39};
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
    msg.setTimeStamp(0.843719495594);
    msg.setSource(8776U);
    msg.setSourceEntity(33U);
    msg.setDestination(13084U);
    msg.setDestinationEntity(139U);
    msg.uid = 0U;
    msg.frag_number = 73U;
    msg.num_frags = 221U;
    const char tmp_msg_0[] = {-110, -107, 35, 113, -81, 113, 78, -24, -87, -100, 56, -105, 13, -95, 81, 55, -54, -123, -88, -93, 70, -111, -28, 8, -79, 38, -71, -95, 86, 20, 107, -49, -52, -125, 87, 60, -54, 63, 105, 25, 87, 123, 119, 49, 97, 44, -16, 3, -1, -39, 114, -84, 20, -115, -92, 107, -18, -100, -80, -7, -110, 4, 112, 105, -86, 83, 90, -91, 110, -67, -32, 26, -34, 47, 102, -81, 99, 57, 16, 19, -14, 3, 76, 6, -53, 45, 91, 27, 116, 33, 5, 46, -84, 77, 101, 40, -54, 40, 63, -74, -25, -113, 100, -86, 62, 115, -60, -119, 31, -47, 51, 108, -86, 94, 12, 112, -68, -68, 53, 26, -89, -42, 109, 96, -76, -111, 63, -28, -122, -20, -113, -92, -127, -5, -90, -112, 37, -122, 57, 125, 34, -125, 108, 11, 38, 62, -101, -62, 111, -61, 12, -103, 110, -8, 106, 123, 3, 70, -81, 39, -60, -9, 125, -87, -104, 105, 49, -103, -81, -117, 32, -118, 63, 80, 16, 86, 17, 40, -61, 90, 90, 52, -67, -91, 14, 15, 102, -100, 8, -12, 126, -74, -111, -52, 3, 115, -33, 63, -12, -101, 60, 64, -35, -82, -26};
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
    msg.setTimeStamp(0.266302119357);
    msg.setSource(12804U);
    msg.setSourceEntity(238U);
    msg.setDestination(57652U);
    msg.setDestinationEntity(249U);
    msg.uid = 48U;
    msg.frag_number = 86U;
    msg.num_frags = 61U;
    const char tmp_msg_0[] = {71, -105, 14, 89, -63, 69, -78, -46, 61, -98, 15, -38, 85, -74, 53, -24, -74, -77, -111, 118, -36, 36, 4, 52, 46, 53, -82, -31, 102, -90, 53, -26, 120, 1, 2, 110, -123, 19, -24, 54, -21, 126, 52, 115, 39, 82, -24, -74, -37, -11, -96, -110, -117, 53, 7, 95, 45, 43, -88, 27, 48, -83, 89, 32, 72, -116, 71, 30, 117, -49, -62, 16, -124, 10, 31, -85, 65, -54, -69, 42, -55, -91, -125, -92, 124, 115, 85, 125, 126, -125, 93, 94, 120, -20, 23, -51, -36, -84, -20, -24, 96, -23, -7, -55, 101, 46, 47, -73, -106, -75, -20, 48, 88, -107, -48, -57, -127, -57, -94, -116, 117, 124, 35, 72, -27, 65, 98, -128, -80, 21, -31, 91, -77, 87, -92, -47, -33, -76, 92, -107, 7, -1, -71, -86, 1, 94, 73, 79, -23, 120, -21, 29, -124, -48, 24, -40, -97, 33, 77, -31, 104, -80, 90, 14, -80, -110, -115, -9, 55, -26, -20, 23, -48, 112, -29, 83, 32, 26, -124, -11, -63, -4, -50, -117, -54, 89, -51, -123, 77, -127, -61, -8, 83, -50, -91, -44, -17, 100, -109, 19, -76, -74, 110, -61, 39, 52, -46, -99, -115, 117, -120, 118, -123, 43, 59, -50, 82, 10, 121, -120, -3, 68, -75, -100, -45, -90, 62};
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
    msg.setTimeStamp(0.167131930741);
    msg.setSource(60009U);
    msg.setSourceEntity(231U);
    msg.setDestination(31466U);
    msg.setDestinationEntity(149U);
    msg.content_type.assign("NWXCVHVNZPWFGYZEKGWDIOSBRCGWLBDMAKRRULCONLPSPTQZLDSYTRLOLPCSNYXOJAGGTKNHBTHSJWUPYNXHJQGSPNHYJEAHGCVQIBIKMUOHKXCZVTLBYAMVEWFFRMFPNSQPFWCVEXUZDIAQTQVSENJHIETITGGZJUEKRCPKDAIOUFJYWZBGUZ");
    const char tmp_msg_0[] = {81, -28, -21, 1, -28, -92, -13, 74, -12, -62, 35, -16, 96, 72, -51, -103, -90, -26, 21, 50, 52, 45, 53, 16, -10, -112, -33, 1, -79, -116, -21, -70, -126, -104, -8, 50, 122, -83, -63, 31, -80, -122, -74, 64, 76, -37, 91, 27, 13, -40, 124, -106, 49, 59, -93, -108, -60, 1, 10, 65, -31, -17, -32, 106, -33, 27, 95, 105, -77, -17, 115, 17, -54, 32, -77, -72, 55, -4, 1, -61, -53, 90, 75, -45, -73, -71, -42, -37, 9, -96, 104, -115, 94, -95, 109, 65, -56, -73, 61, 109, -10, 15, 83, -67, 126, -83, 122, -41, 10, 112, -8, 50, 91, 54, 107, 16, -27, -75, -20, 115, -93, -108, -123, 2, 35, 43, -87, -5, -84, 92, 112, -77, 26, -100, 26, 21, -49, -64, 75, -95, -3, -54, -35, -22, -2, -55, 54, -19, -61, -119, 41, 33, 83, 69, 87, 14, -95, 121, 36, -89, -85, 51, 114, 83, 34, 41, 108, 118, -1, 74, 29, -94, 66, -97, -110, -49, 64, 6, -51, 26, -116, 59, 114, -61, -111, -16, -104, -82, 89, 47, 72, -20, 14, -62, -46, 78, 100, 101, -127, -22, -12, 44, 103, -117, -103, -65, -87, -104, -12, -24, 61, -110, 17, -111, -47, -94, 8, 68, -128, -58, 81, -15, 103, 6};
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
    msg.setTimeStamp(0.310854440612);
    msg.setSource(52650U);
    msg.setSourceEntity(237U);
    msg.setDestination(42442U);
    msg.setDestinationEntity(8U);
    msg.content_type.assign("ESOJHUUMERULBUPQCASNSAOWCAZ");
    const char tmp_msg_0[] = {87, -24, -65, -58, 88, 5, -27, 75, -6, 124, -77, 90, -63, 116, 14, -85, 42, -69, 93, -103, 90, 10, 53, -104, -55, 31, 5, -60, 100, -65, -115, -68, 50, 57, 126, 46, 71, -92, -100, -118, 114, -94, -125, -20, 101, -77, -26, 51, -7, 19, 117, -46, -92, 3, -58, -18, 65, 92, 0, 91, -45, 42, -76, -94};
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
    msg.setTimeStamp(0.287909436606);
    msg.setSource(19355U);
    msg.setSourceEntity(161U);
    msg.setDestination(57492U);
    msg.setDestinationEntity(173U);
    msg.content_type.assign("ZZMSVUCXRWYNBHRPHUBAGEPJNUQKOMRPOQDXDIZWDJHMXCBICZ");
    const char tmp_msg_0[] = {-95, 100, 97, -26, 51, 82, -11, -94, -101, 94, 3, 92, -51, 92, -64, -115, 68, 116, 91, 99, -24, -34, -70, 52, -116, -46, -15, -54, 78, 8, 94, -65, 1, -5, -88, 53, 123, 28, 11, -77, 42, -119, -80, -80, -106, 64, -20, 49, -26, -8, 75, -124, -126, -89, 63, 16, 108, -3, -127, 126, 51, -82, -42, 98, 5, 105, -37, 40, 75, -62, 121, -8, 83, 122, -94, -54, 8, 11, 2, 110, 110, -65, -128, -99, 17, -72, 94, 72, -123};
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
    msg.setTimeStamp(0.0203412339503);
    msg.setSource(27864U);
    msg.setSourceEntity(168U);
    msg.setDestination(39124U);
    msg.setDestinationEntity(1U);

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
    msg.setTimeStamp(0.515229624344);
    msg.setSource(65024U);
    msg.setSourceEntity(5U);
    msg.setDestination(22667U);
    msg.setDestinationEntity(12U);

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
    msg.setTimeStamp(0.208052463038);
    msg.setSource(55232U);
    msg.setSourceEntity(130U);
    msg.setDestination(46619U);
    msg.setDestinationEntity(35U);

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
    msg.setTimeStamp(0.0185309293828);
    msg.setSource(33586U);
    msg.setSourceEntity(237U);
    msg.setDestination(30452U);
    msg.setDestinationEntity(134U);
    msg.target = 63406U;
    msg.bearing = 0.623448832881;
    msg.elevation = 0.0999076191318;

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
    msg.setTimeStamp(0.852162673267);
    msg.setSource(37582U);
    msg.setSourceEntity(46U);
    msg.setDestination(46334U);
    msg.setDestinationEntity(36U);
    msg.target = 57567U;
    msg.bearing = 0.798346077548;
    msg.elevation = 0.795676502398;

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
    msg.setTimeStamp(0.392640635707);
    msg.setSource(47006U);
    msg.setSourceEntity(134U);
    msg.setDestination(64224U);
    msg.setDestinationEntity(48U);
    msg.target = 49556U;
    msg.bearing = 0.902649413332;
    msg.elevation = 0.914308236607;

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
    msg.setTimeStamp(0.149836510653);
    msg.setSource(49241U);
    msg.setSourceEntity(115U);
    msg.setDestination(30190U);
    msg.setDestinationEntity(195U);
    msg.target = 8976U;
    msg.x = 0.980723814695;
    msg.y = 0.0395689682898;
    msg.z = 0.161847584702;

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
    msg.setTimeStamp(0.38539967593);
    msg.setSource(24107U);
    msg.setSourceEntity(37U);
    msg.setDestination(10749U);
    msg.setDestinationEntity(108U);
    msg.target = 21685U;
    msg.x = 0.548685511574;
    msg.y = 0.901115598623;
    msg.z = 0.807088067821;

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
    msg.setTimeStamp(0.842075329178);
    msg.setSource(7268U);
    msg.setSourceEntity(206U);
    msg.setDestination(47887U);
    msg.setDestinationEntity(106U);
    msg.target = 63078U;
    msg.x = 0.655712982313;
    msg.y = 0.572003734428;
    msg.z = 0.415137963054;

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
    msg.setTimeStamp(0.962433034042);
    msg.setSource(13780U);
    msg.setSourceEntity(0U);
    msg.setDestination(53112U);
    msg.setDestinationEntity(49U);
    msg.target = 30854U;
    msg.lat = 0.796959141824;
    msg.lon = 0.0579434227025;
    msg.z_units = 9U;
    msg.z = 0.0537718321748;

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
    msg.setTimeStamp(0.932508330107);
    msg.setSource(36848U);
    msg.setSourceEntity(69U);
    msg.setDestination(14376U);
    msg.setDestinationEntity(22U);
    msg.target = 41200U;
    msg.lat = 0.567938075758;
    msg.lon = 0.121814353946;
    msg.z_units = 139U;
    msg.z = 0.343729556612;

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
    msg.setTimeStamp(0.35109949669);
    msg.setSource(31750U);
    msg.setSourceEntity(65U);
    msg.setDestination(13984U);
    msg.setDestinationEntity(193U);
    msg.target = 6183U;
    msg.lat = 0.734728505668;
    msg.lon = 0.508979559726;
    msg.z_units = 204U;
    msg.z = 0.617787851214;

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
    msg.setTimeStamp(0.531021330011);
    msg.setSource(55904U);
    msg.setSourceEntity(129U);
    msg.setDestination(20485U);
    msg.setDestinationEntity(162U);
    msg.locale.assign("JKXOLXTZAMYCEZEASNUHJIBWNECHKSTFIDBCQEDRVKROYMASLXUYFDYWTWVNOHYDCGKMKJWHJGLYX");
    const char tmp_msg_0[] = {67, -53, 0, 15, 74, 115, -9, 69, 1, -74, 81, -118, 57, -75, 110, 15, 103, 75, -25, 6, 126, 35, 56, 46, -10, 17, 82, -120, 0, 2, -98, 2, -37, 83, -40, 0, -94, 45, 91, -126, -15, 2, -63, -58, 118, -24, -106, 6, 42, 5, -75, 119, -24, -116, -57, -11, -27, -6, 50, 2, -78, 75, -75, 117, 30, -49, -56, 36, -25, -114, -23, 123, -44, 0, -20, 58, -11, -54, -72, -73, 122, 51, 15, -106, -1, -10, 63, -96, 21, 112, 29, 100, 32, 53, -50, 12, -118, -127, -55, 42, -69, -102, -62, -70, 88, 27, 65, 74, -47, 1, 104, -7, 101, -18, -93, -96, 12, 48, -65, 65, -65, 76, -109, -101, 70, -4, -51, 20, 50};
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
    msg.setTimeStamp(0.669324535906);
    msg.setSource(50960U);
    msg.setSourceEntity(73U);
    msg.setDestination(28181U);
    msg.setDestinationEntity(183U);
    msg.locale.assign("YVMSNGBAZRUACEKDGOICHFYBMOJLNMLPIHWZEKAYEZDRTFKJLZTZRSSWKZAVPLUXDHJHTQCVHXNGSDZVWQAMYQRVZWGOCXUCNXPJROMQNNWPPAZHFHNBGQOTYUEBMXRRQDARKVFDFFFESWYBFAPYOEMXJEXVWKYBJSDTSIPAUDTEBGMRVKILIOPCHGYQIWSUKBSKNPVWLJFOGTCJQDF");
    const char tmp_msg_0[] = {40, 95, 92, 22, 82, 101, -32, 81, -89, -112, 12, -126, -77, 55, 48, -12, -53, -70, -91, 63, -101, 102, -69, -125, -4, -26, 84, 35, -108, -57, 104, 31, -47, 93, 40, 33, -15, 118, 56, -96, -33, -80, 126, 75, -28, -1, 34, -126, 97, -87, -72, -44, 109, 123, 47, -5, 125, -54, -121, 48, -123, 118, -100, 88, -116, 103, -63, 89, -86, 57, -11, -42, -93, -31, 40, -71, -115, 41, -20, -41, -58, -56, 74, -47, 17, -18, -66, 10, 115, -111, -54, -109, 10, -53, -117, 42, 92, 98, -12, 53, -112, -102, 52, -28, 16, 6};
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
    msg.setTimeStamp(0.840203323011);
    msg.setSource(50473U);
    msg.setSourceEntity(75U);
    msg.setDestination(63454U);
    msg.setDestinationEntity(134U);
    msg.locale.assign("JBNCIULRJYUYPTZNONEABGADGYHBDCALTLVXBQIEYGDIFPCOSFZRRCTXYEHXTWUQBUVHKGOJZDYDNBMDMYAVPMCVIKHXJLNGIJITXYEPOYZHPUKWMSWHHMWFQZAVVNJLGQKUKF");
    const char tmp_msg_0[] = {80, -67, -51, 109, 97, 42, -94, 82, 48, -102, 114, 121, -61, 102, -29, 118, 78, -82, -81, 16, 66, 92, -100, -83, -26, -113, -101, -40, -30, -10, -88, 70, -30, 113, -53, -9, 51, 36, -33, -127, 55, -110, 124, 121, 83, 85, 108, 108, 26, 54, -128, -18, -26, 105, -125, 80, 5, 18, -125, 107, -113, -115, -30, 21, -84, 96, -13, 26, -23, -54, -109, -127, 31, 62, -115, -15, -27, -52, -113, -93, -82, 83, 24, 109, 43, 17, 57, 115, -21, 67, 37, -20, 2, -121, 88, -114, 126, -74, 116, -46, 44, 80, -64, -77, -49, -52, -127, 73, 20, 49, -117, -43, 39, 125, 63, 55, 99, 25, 7, -25, 24, 105, 6, -14, -2, 88, 43, -76, 34, -81, 13, -47, -94, -101, 58, -88, 49, 50, 61, 35, -64, -53, -80, 63, -20, -44, 64, -104, -23, 80, -26, -117, 35, 99, 103, 12, 14, 7, -114, 101, 63, -119, 34, 11, -77, 97, 96, -17, -31, 38};
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
    msg.setTimeStamp(0.0483821398907);
    msg.setSource(25542U);
    msg.setSourceEntity(19U);
    msg.setDestination(58945U);
    msg.setDestinationEntity(245U);

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
    msg.setTimeStamp(0.307577181236);
    msg.setSource(37755U);
    msg.setSourceEntity(149U);
    msg.setDestination(11142U);
    msg.setDestinationEntity(246U);

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
    msg.setTimeStamp(0.703447301862);
    msg.setSource(61888U);
    msg.setSourceEntity(222U);
    msg.setDestination(6935U);
    msg.setDestinationEntity(59U);

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
    msg.setTimeStamp(0.74079383351);
    msg.setSource(59786U);
    msg.setSourceEntity(196U);
    msg.setDestination(53351U);
    msg.setDestinationEntity(96U);
    msg.camid = 221U;
    msg.x = 64258U;
    msg.y = 49503U;

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
    msg.setTimeStamp(0.782114302728);
    msg.setSource(53896U);
    msg.setSourceEntity(203U);
    msg.setDestination(16963U);
    msg.setDestinationEntity(241U);
    msg.camid = 108U;
    msg.x = 28785U;
    msg.y = 41740U;

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
    msg.setTimeStamp(0.0959692674443);
    msg.setSource(39609U);
    msg.setSourceEntity(50U);
    msg.setDestination(17862U);
    msg.setDestinationEntity(250U);
    msg.camid = 1U;
    msg.x = 57743U;
    msg.y = 12827U;

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
    msg.setTimeStamp(0.616870058876);
    msg.setSource(27944U);
    msg.setSourceEntity(82U);
    msg.setDestination(50781U);
    msg.setDestinationEntity(69U);
    msg.camid = 145U;
    msg.x = 61982U;
    msg.y = 8217U;

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
    msg.setTimeStamp(0.0179661534665);
    msg.setSource(49663U);
    msg.setSourceEntity(67U);
    msg.setDestination(893U);
    msg.setDestinationEntity(149U);
    msg.camid = 17U;
    msg.x = 29005U;
    msg.y = 44050U;

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
    msg.setTimeStamp(0.647840529261);
    msg.setSource(27423U);
    msg.setSourceEntity(213U);
    msg.setDestination(53591U);
    msg.setDestinationEntity(118U);
    msg.camid = 20U;
    msg.x = 26083U;
    msg.y = 30840U;

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
    msg.setTimeStamp(0.128191574909);
    msg.setSource(54169U);
    msg.setSourceEntity(224U);
    msg.setDestination(5264U);
    msg.setDestinationEntity(175U);
    msg.tracking = 116U;
    msg.lat = 0.878388503663;
    msg.lon = 0.696274971197;
    msg.x = 0.41984876569;
    msg.y = 0.802284030202;
    msg.z = 0.735330143428;

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
    msg.setTimeStamp(0.65560355586);
    msg.setSource(61746U);
    msg.setSourceEntity(225U);
    msg.setDestination(61668U);
    msg.setDestinationEntity(161U);
    msg.tracking = 59U;
    msg.lat = 0.242209835243;
    msg.lon = 0.626077434016;
    msg.x = 0.772451665814;
    msg.y = 0.878098006667;
    msg.z = 0.0351016983103;

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
    msg.setTimeStamp(0.0337213755641);
    msg.setSource(33784U);
    msg.setSourceEntity(221U);
    msg.setDestination(39848U);
    msg.setDestinationEntity(107U);
    msg.tracking = 234U;
    msg.lat = 0.769130913389;
    msg.lon = 0.466673055116;
    msg.x = 0.239412607668;
    msg.y = 0.648376697948;
    msg.z = 0.59404132219;

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
    msg.setTimeStamp(0.148592608179);
    msg.setSource(13446U);
    msg.setSourceEntity(209U);
    msg.setDestination(43162U);
    msg.setDestinationEntity(213U);
    msg.target.assign("DUZEVLXVZRIMWIMEFMADQLMKKSNYSAHWQRBKIUSSEXFFXWYHZCTTYTGIDMWDHJSPRBNBPQAITTQAFOJCUNCKFRVAMOYDKAHSNRQGLZQDTAVDBNOM");
    msg.lbearing = 0.469052228223;
    msg.lelevation = 0.872144418553;
    msg.bearing = 0.0427287139729;
    msg.elevation = 0.550477110681;
    msg.phi = 0.911333965578;
    msg.theta = 0.0618429357211;
    msg.psi = 0.104745461696;
    msg.accuracy = 0.615898755046;

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
    msg.setTimeStamp(0.622467124849);
    msg.setSource(64379U);
    msg.setSourceEntity(36U);
    msg.setDestination(44567U);
    msg.setDestinationEntity(142U);
    msg.target.assign("IWQJXNGHEWQXOLPGPGOBBDWGKNZBXTNBGCSLUTFAVTKLTBTUINVSMZMRMFMPNRMEOSZAWFJTMDPROXEILSRXKHJPIPLXRKAJNDBUEKNHSFFZWXIUWYQCPQIOHFRHGDBLVUYITYHVIMVBTLZGZSNMZDZCDCKUVORUOQBWEAQJYBIFMKUXZFVTKOLVPEYXDCCGJEYSWDIOKFAJDOJPTFE");
    msg.lbearing = 0.197269908863;
    msg.lelevation = 0.54753851799;
    msg.bearing = 0.157836179957;
    msg.elevation = 0.740120295188;
    msg.phi = 0.817138307982;
    msg.theta = 0.125763107242;
    msg.psi = 0.904725733476;
    msg.accuracy = 0.398652014537;

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
    msg.setTimeStamp(0.227070002018);
    msg.setSource(17032U);
    msg.setSourceEntity(245U);
    msg.setDestination(38718U);
    msg.setDestinationEntity(76U);
    msg.target.assign("XNDQLIJPEEKNYLKFUFSVBPTNUSSZDJVSINKQYGRIMBPJYIEVUMRHMIUZINVOQQDXPVKT");
    msg.lbearing = 0.791063224353;
    msg.lelevation = 0.551299662113;
    msg.bearing = 0.387027837431;
    msg.elevation = 0.0948515456221;
    msg.phi = 0.414168518489;
    msg.theta = 0.123897506214;
    msg.psi = 0.663862972624;
    msg.accuracy = 0.559108276511;

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
    msg.setTimeStamp(0.654913868009);
    msg.setSource(2350U);
    msg.setSourceEntity(177U);
    msg.setDestination(59346U);
    msg.setDestinationEntity(112U);
    msg.target.assign("PHUOAKPZMXNFHRGJZLCPJXEVINRIUUDJNIUPXYHHWHROQGCWXLZNZBLAZNIQKDHYGBVWFTUMOUEBFWQBDRBAEDMCIKPRJCGQOGALBANEFIUSEBGSLTCXKXZYJSRUFKKHAXEPOZFJMWCMMNOSRWQOQKTQRDXTWEQZVCISUGYNVBYOFHATVFJ");
    msg.x = 0.227048304509;
    msg.y = 0.911699008072;
    msg.z = 0.429614908491;
    msg.n = 0.263386931299;
    msg.e = 0.79501712915;
    msg.d = 0.286805883918;
    msg.phi = 0.741433670782;
    msg.theta = 0.161478924623;
    msg.psi = 0.402748945507;
    msg.accuracy = 0.437638737739;

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
    msg.setTimeStamp(0.331690522956);
    msg.setSource(3191U);
    msg.setSourceEntity(199U);
    msg.setDestination(64552U);
    msg.setDestinationEntity(59U);
    msg.target.assign("YOIMYCSOAXPHNDMPRSDMMRCNKNBLFGDEALFHWZAVZBTYOJRXFLNFARCSHLUQGWUCIMQIBFGANJQYPBHXKCOFWZZCUKBJVQIG");
    msg.x = 0.582598278774;
    msg.y = 0.938221811568;
    msg.z = 0.488774215359;
    msg.n = 0.570957633428;
    msg.e = 0.0391226972185;
    msg.d = 0.941991176695;
    msg.phi = 0.373353850889;
    msg.theta = 0.413571395347;
    msg.psi = 0.0619742043089;
    msg.accuracy = 0.672656589567;

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
    msg.setTimeStamp(0.194066989233);
    msg.setSource(51177U);
    msg.setSourceEntity(209U);
    msg.setDestination(4396U);
    msg.setDestinationEntity(163U);
    msg.target.assign("GZFOOEYKRAMZZTQOITDSJWQYLIEOO");
    msg.x = 0.992754067055;
    msg.y = 0.0451202734827;
    msg.z = 0.263080790849;
    msg.n = 0.963355738057;
    msg.e = 0.101344180928;
    msg.d = 0.174603657706;
    msg.phi = 0.422873782973;
    msg.theta = 0.34081114645;
    msg.psi = 0.606241837867;
    msg.accuracy = 0.317075903874;

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
    msg.setTimeStamp(0.853374679436);
    msg.setSource(61773U);
    msg.setSourceEntity(106U);
    msg.setDestination(2809U);
    msg.setDestinationEntity(39U);
    msg.target.assign("WGYVCJNULZKSCANBBBQGZPHAUBZBYCNHLFCVXBMKYCQHBLSNBNEJKPZRFDRAQEGCDRNVOTQFBFIGKASKPKYBSWUZQMHTSTJPPWUJHYJNHSGYRIYCNFQCRRQOMPZXMTTOILWIXEUFWIMTGPDMQXEUEKUGDUIMZQYAEODDOXLKPSLDRTXFRDZVTJWGDKVVAGLWOHXXLTXJFAYOIHNHRIQAOEZSIJMWUMJARCKTCDWEJUMZFWVLSXVGPSEYP");
    msg.lat = 0.594740869489;
    msg.lon = 0.538673784086;
    msg.z_units = 12U;
    msg.z = 0.64811855221;
    msg.accuracy = 0.302095306478;

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
    msg.setTimeStamp(0.032341661581);
    msg.setSource(44846U);
    msg.setSourceEntity(46U);
    msg.setDestination(24519U);
    msg.setDestinationEntity(0U);
    msg.target.assign("IVHZAHVVEDRTQNLZSEFK");
    msg.lat = 0.278184248316;
    msg.lon = 0.127585347863;
    msg.z_units = 114U;
    msg.z = 0.643929080671;
    msg.accuracy = 0.195716434985;

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
    msg.setTimeStamp(0.487480095157);
    msg.setSource(3883U);
    msg.setSourceEntity(147U);
    msg.setDestination(17899U);
    msg.setDestinationEntity(142U);
    msg.target.assign("RMIXFHDHLWEFHOUUEIAREBPRULSLDAPCSWPXUMCPOFRGGPWV");
    msg.lat = 0.483364194299;
    msg.lon = 0.100898659571;
    msg.z_units = 53U;
    msg.z = 0.703480809025;
    msg.accuracy = 0.240142222101;

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
    msg.setTimeStamp(0.532579680023);
    msg.setSource(64551U);
    msg.setSourceEntity(8U);
    msg.setDestination(9419U);
    msg.setDestinationEntity(1U);
    msg.name.assign("YUQSZXXYASKSDTOZIJRJWLPAGBHWPOKNWLQXPTOYBZXGGYTUNFNHMMZCDFTFURSPOBQDHHCKTYAHYGJUICIKWBWLDMLUQLSOSNDQKHJIKEVGDEVHRKWJTTCVPDHNJFJBUGIEMWASPNPGDICXOOLPMNFHAIKFCQEASUBCEERFNVDLBYLVSRMQMIKIVEHVRYGULZOXRXCRGTWEFUXVQYFAVCIZGAERLUQYPDZBWVPJCXOJEN");
    msg.lat = 0.291935309609;
    msg.lon = 0.263589365643;
    msg.z = 0.657456512572;
    msg.z_units = 194U;

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
    msg.setTimeStamp(0.00520987867424);
    msg.setSource(59641U);
    msg.setSourceEntity(9U);
    msg.setDestination(2168U);
    msg.setDestinationEntity(161U);
    msg.name.assign("FNOCIEITOBJVWLOOGNABVLUTHIWFLUHHILBUTYMWCRQPAKUNXCMGCRUSQKUJKFJGRLCXFPNIECJTENQQRVMQSHHKKSJBVYWWH");
    msg.lat = 0.865730539188;
    msg.lon = 0.708306591051;
    msg.z = 0.183292230473;
    msg.z_units = 90U;

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
    msg.setTimeStamp(0.368757650357);
    msg.setSource(11215U);
    msg.setSourceEntity(50U);
    msg.setDestination(51061U);
    msg.setDestinationEntity(146U);
    msg.name.assign("OIXCBYOEWKKWNEKAFABDAZPVINRNUPHHKBFKREGXNCAJSOGIYZNFTWRTGTKLSHLZWREFYVITBTEITYGUWZMLEJLCAOMJFRJXOCINGIDDPFLYXBOVZVOKVHKTLDYTCJQHF");
    msg.lat = 0.0150153969509;
    msg.lon = 0.337105907497;
    msg.z = 0.393034762016;
    msg.z_units = 194U;

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
    msg.setTimeStamp(0.580753579771);
    msg.setSource(57012U);
    msg.setSourceEntity(48U);
    msg.setDestination(2274U);
    msg.setDestinationEntity(71U);
    msg.op = 166U;

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
    msg.setTimeStamp(0.675684368043);
    msg.setSource(17860U);
    msg.setSourceEntity(149U);
    msg.setDestination(10718U);
    msg.setDestinationEntity(51U);
    msg.op = 142U;

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
    msg.setTimeStamp(0.198559490124);
    msg.setSource(27857U);
    msg.setSourceEntity(140U);
    msg.setDestination(28115U);
    msg.setDestinationEntity(110U);
    msg.op = 197U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("RZGTEGACEKVCYQVUXBVXNXUZGVLDAQSOFHJVLPFDONPSODZYOLWUPYXQMJIVICVDOPHEDAARMGBRNUDYNIEUFJOKWTTODPHYTBCAULQBJWEFGISUSEPFGSAKIMCNMSMKZFSRXSHOJEKZBFSTXJEUMVHQWJABLKPXXKMFHZGRYGRAYOZLABYDCMXRNTHPLPREIZTKWGI");
    tmp_msg_0.lat = 0.621652861229;
    tmp_msg_0.lon = 0.4123382246;
    tmp_msg_0.z = 0.170984393102;
    tmp_msg_0.z_units = 80U;
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
    msg.setTimeStamp(0.667393044674);
    msg.setSource(3771U);
    msg.setSourceEntity(64U);
    msg.setDestination(10210U);
    msg.setDestinationEntity(109U);
    msg.value = 0.847240558941;
    msg.type = 134U;

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
    msg.setTimeStamp(0.511852890141);
    msg.setSource(56930U);
    msg.setSourceEntity(129U);
    msg.setDestination(25932U);
    msg.setDestinationEntity(247U);
    msg.value = 0.344854576638;
    msg.type = 238U;

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
    msg.setTimeStamp(0.535800245991);
    msg.setSource(36502U);
    msg.setSourceEntity(66U);
    msg.setDestination(37275U);
    msg.setDestinationEntity(124U);
    msg.value = 0.690504830458;
    msg.type = 6U;

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
    msg.setTimeStamp(0.331666268995);
    msg.setSource(64430U);
    msg.setSourceEntity(74U);
    msg.setDestination(21429U);
    msg.setDestinationEntity(94U);
    msg.value = 0.183262708995;

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
    msg.setTimeStamp(0.825782835759);
    msg.setSource(34353U);
    msg.setSourceEntity(26U);
    msg.setDestination(4767U);
    msg.setDestinationEntity(178U);
    msg.value = 0.00083679864752;

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
    msg.setTimeStamp(0.366478576913);
    msg.setSource(51451U);
    msg.setSourceEntity(133U);
    msg.setDestination(21421U);
    msg.setDestinationEntity(77U);
    msg.value = 0.975532488586;

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
    msg.setTimeStamp(0.810196522515);
    msg.setSource(4258U);
    msg.setSourceEntity(14U);
    msg.setDestination(64441U);
    msg.setDestinationEntity(233U);
    msg.timestamp_last_service = 0.15548276714;
    msg.time_next_service = 0.0267293760798;
    msg.time_motor_next_service = 0.686015424627;
    msg.time_idle_ground = 0.206125144969;
    msg.time_idle_air = 0.619884196865;
    msg.time_idle_water = 0.593484512601;
    msg.time_idle_underwater = 0.914288227975;
    msg.time_idle_unknown = 0.0370999931844;
    msg.time_motor_ground = 0.278321223738;
    msg.time_motor_air = 0.212463968238;
    msg.time_motor_water = 0.862150763903;
    msg.time_motor_underwater = 0.105487340505;
    msg.time_motor_unknown = 0.323319339212;
    msg.rpm_min = 21751;
    msg.rpm_max = 3017;
    msg.depth_max = 0.863422933423;

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
    msg.setTimeStamp(0.39663809821);
    msg.setSource(20187U);
    msg.setSourceEntity(69U);
    msg.setDestination(174U);
    msg.setDestinationEntity(157U);
    msg.timestamp_last_service = 0.0504145087896;
    msg.time_next_service = 0.603339463164;
    msg.time_motor_next_service = 0.821880494484;
    msg.time_idle_ground = 0.385762657191;
    msg.time_idle_air = 0.424172446302;
    msg.time_idle_water = 0.108201879096;
    msg.time_idle_underwater = 0.842772650782;
    msg.time_idle_unknown = 0.0202346014364;
    msg.time_motor_ground = 0.893884956159;
    msg.time_motor_air = 0.413224529378;
    msg.time_motor_water = 0.0123342313879;
    msg.time_motor_underwater = 0.768211024344;
    msg.time_motor_unknown = 0.976307188467;
    msg.rpm_min = -25594;
    msg.rpm_max = -5581;
    msg.depth_max = 0.255067414383;

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
    msg.setTimeStamp(0.215521845145);
    msg.setSource(53185U);
    msg.setSourceEntity(133U);
    msg.setDestination(43686U);
    msg.setDestinationEntity(41U);
    msg.timestamp_last_service = 0.817911056224;
    msg.time_next_service = 0.876141387619;
    msg.time_motor_next_service = 0.514742344589;
    msg.time_idle_ground = 0.191262016647;
    msg.time_idle_air = 0.671318293119;
    msg.time_idle_water = 0.988522739616;
    msg.time_idle_underwater = 0.70371242489;
    msg.time_idle_unknown = 0.616750981849;
    msg.time_motor_ground = 0.775112302956;
    msg.time_motor_air = 0.806589381937;
    msg.time_motor_water = 0.739628380306;
    msg.time_motor_underwater = 0.706948183995;
    msg.time_motor_unknown = 0.498361392146;
    msg.rpm_min = 13507;
    msg.rpm_max = 16608;
    msg.depth_max = 0.210004270676;

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
    msg.setTimeStamp(0.979982348309);
    msg.setSource(47376U);
    msg.setSourceEntity(172U);
    msg.setDestination(24601U);
    msg.setDestinationEntity(117U);
    msg.severity = 5U;
    msg.text.assign("RIRYPYHVMNOJCQQGTFURWNOQMIXWWLHTKLADDSTGIWBSVU");

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
    msg.setTimeStamp(0.0778896419323);
    msg.setSource(28025U);
    msg.setSourceEntity(189U);
    msg.setDestination(27692U);
    msg.setDestinationEntity(231U);
    msg.severity = 127U;
    msg.text.assign("YNEDIUXAMQRLBWYIBCGEVJLTKSWZUNIZBKWABGBWOWNSDEYVXULEECHLHFRKJQRDIEQVPDSHXSLFKBANEFYZVIPGTXTCHRERTCTOGPBAWEQKXDJCMDWRVPPKZRMQCFLVTHVXPMNMQCKDZPOGHQVTUOOXYXVOLMNOSIJXL");

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
    msg.setTimeStamp(0.46152561813);
    msg.setSource(1559U);
    msg.setSourceEntity(243U);
    msg.setDestination(5468U);
    msg.setDestinationEntity(180U);
    msg.severity = 54U;
    msg.text.assign("GQEBCCYDPMKJZKEDDUVMWCUNAOKIJHZQWYWHRIJHZCFLUWBLPDAYREGGYXEGCBSQSNHTQFZNYGUFNZEVFZQESMWXXHISNDVDOOZKBOQFCSAOCIPODLMJBRGQWIITPKZNCUAMATSXSOAMINZBSTTYEDMNEHGMFKHFHXVUVPPKUAJIRVIQHJPJRMGDXNRTULOPKYMPNLLWXZWAUJXLJFTRTEOOEVBVKAVURCWPJCTXRFRSVBIYKQL");

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
    msg.setTimeStamp(0.134587622823);
    msg.setSource(23608U);
    msg.setSourceEntity(135U);
    msg.setDestination(25892U);
    msg.setDestinationEntity(107U);
    msg.channel = -72;
    msg.value = 1220792070;
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
    msg.setTimeStamp(0.362529139547);
    msg.setSource(44720U);
    msg.setSourceEntity(92U);
    msg.setDestination(27099U);
    msg.setDestinationEntity(147U);
    msg.channel = 91;
    msg.value = -1449027454;
    msg.gain = 62U;

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
    msg.setTimeStamp(0.629518550054);
    msg.setSource(30710U);
    msg.setSourceEntity(243U);
    msg.setDestination(14206U);
    msg.setDestinationEntity(210U);
    msg.channel = 76;
    msg.value = -368024128;
    msg.gain = 7U;

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
    msg.setTimeStamp(0.297289466199);
    msg.setSource(14853U);
    msg.setSourceEntity(124U);
    msg.setDestination(55348U);
    msg.setDestinationEntity(212U);
    msg.ch01 = 0.758098650614;
    msg.ch02 = 0.579936889481;
    msg.ch03 = 0.831658638297;
    msg.ch04 = 0.630801622255;
    msg.ch05 = 0.341586304073;
    msg.ch06 = 0.941206529016;
    msg.ch07 = 0.921811252125;
    msg.ch08 = 0.341224673448;
    msg.ch09 = 0.543092498091;
    msg.ch10 = 0.0524749753109;
    msg.ch11 = 0.0147285667231;
    msg.ch12 = 0.793771504215;
    msg.ch13 = 0.256783173016;
    msg.ch14 = 0.101440145944;
    msg.ch15 = 0.851642676584;
    msg.ch16 = 0.312514562821;

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
    msg.setTimeStamp(0.0485244229772);
    msg.setSource(53322U);
    msg.setSourceEntity(227U);
    msg.setDestination(46895U);
    msg.setDestinationEntity(116U);
    msg.ch01 = 0.306063239935;
    msg.ch02 = 0.779275982853;
    msg.ch03 = 0.707244963808;
    msg.ch04 = 0.898197298389;
    msg.ch05 = 0.440957414118;
    msg.ch06 = 0.516251359432;
    msg.ch07 = 0.0649590744609;
    msg.ch08 = 0.59076392353;
    msg.ch09 = 0.84612061136;
    msg.ch10 = 0.455553214819;
    msg.ch11 = 0.00173050235556;
    msg.ch12 = 0.262861894048;
    msg.ch13 = 0.245274073565;
    msg.ch14 = 0.278467447663;
    msg.ch15 = 0.824439898762;
    msg.ch16 = 0.251723728522;

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
    msg.setTimeStamp(0.509204927574);
    msg.setSource(11633U);
    msg.setSourceEntity(130U);
    msg.setDestination(16568U);
    msg.setDestinationEntity(2U);
    msg.ch01 = 0.319441770003;
    msg.ch02 = 0.802400535026;
    msg.ch03 = 0.280438204384;
    msg.ch04 = 0.600477490328;
    msg.ch05 = 0.795544423694;
    msg.ch06 = 0.89415884541;
    msg.ch07 = 0.870407547824;
    msg.ch08 = 0.573657758557;
    msg.ch09 = 0.603311015;
    msg.ch10 = 0.524421533058;
    msg.ch11 = 0.363451378381;
    msg.ch12 = 0.858371476255;
    msg.ch13 = 0.231552925357;
    msg.ch14 = 0.871915925366;
    msg.ch15 = 0.634570955463;
    msg.ch16 = 0.61906586997;

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
    msg.setTimeStamp(0.978629541425);
    msg.setSource(38942U);
    msg.setSourceEntity(65U);
    msg.setDestination(9099U);
    msg.setDestinationEntity(113U);
    msg.time = 0.356474634551;
    msg.ang = 0.804767495994;

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
    msg.setTimeStamp(0.118854491521);
    msg.setSource(5826U);
    msg.setSourceEntity(117U);
    msg.setDestination(10983U);
    msg.setDestinationEntity(241U);
    msg.time = 0.0933091657402;
    msg.ang = 0.668015025306;

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
    msg.setTimeStamp(0.869579381467);
    msg.setSource(19160U);
    msg.setSourceEntity(125U);
    msg.setDestination(39662U);
    msg.setDestinationEntity(209U);
    msg.time = 0.815883506062;
    msg.ang = 0.473880970472;

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
    msg.setTimeStamp(0.146646592195);
    msg.setSource(56465U);
    msg.setSourceEntity(134U);
    msg.setDestination(60514U);
    msg.setDestinationEntity(88U);
    msg.value = 0.726862463936;

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
    msg.setTimeStamp(0.47325624473);
    msg.setSource(21793U);
    msg.setSourceEntity(107U);
    msg.setDestination(393U);
    msg.setDestinationEntity(42U);
    msg.value = 0.580971169898;

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
    msg.setTimeStamp(0.308867391048);
    msg.setSource(22644U);
    msg.setSourceEntity(149U);
    msg.setDestination(54286U);
    msg.setDestinationEntity(24U);
    msg.value = 0.817622782409;

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
    msg.setTimeStamp(0.177597281785);
    msg.setSource(62006U);
    msg.setSourceEntity(136U);
    msg.setDestination(4265U);
    msg.setDestinationEntity(160U);
    msg.value = 0.098313452346;

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
    msg.setTimeStamp(0.973223798301);
    msg.setSource(16163U);
    msg.setSourceEntity(212U);
    msg.setDestination(40768U);
    msg.setDestinationEntity(111U);
    msg.value = 0.413006695398;

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
    msg.setTimeStamp(0.642594286983);
    msg.setSource(3646U);
    msg.setSourceEntity(45U);
    msg.setDestination(12057U);
    msg.setDestinationEntity(184U);
    msg.value = 0.345895281581;

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
    msg.setTimeStamp(0.398079861497);
    msg.setSource(19061U);
    msg.setSourceEntity(88U);
    msg.setDestination(1377U);
    msg.setDestinationEntity(72U);
    msg.value = 0.164351694742;

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
    msg.setTimeStamp(0.939317556377);
    msg.setSource(17815U);
    msg.setSourceEntity(164U);
    msg.setDestination(51365U);
    msg.setDestinationEntity(212U);
    msg.value = 0.290632173499;

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
    msg.setTimeStamp(0.204345536495);
    msg.setSource(47527U);
    msg.setSourceEntity(111U);
    msg.setDestination(54760U);
    msg.setDestinationEntity(66U);
    msg.value = 0.119274624798;

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
    msg.setTimeStamp(0.722208253642);
    msg.setSource(2869U);
    msg.setSourceEntity(209U);
    msg.setDestination(12519U);
    msg.setDestinationEntity(242U);
    msg.l2 = -87;
    msg.l3 = 20;
    msg.iridium = 33;
    msg.modem = -80;
    msg.pumps = 96;
    msg.vhf = -115;

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
    msg.setTimeStamp(0.438658335557);
    msg.setSource(24803U);
    msg.setSourceEntity(59U);
    msg.setDestination(16046U);
    msg.setDestinationEntity(225U);
    msg.l2 = -57;
    msg.l3 = -85;
    msg.iridium = -61;
    msg.modem = 9;
    msg.pumps = -33;
    msg.vhf = 59;

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
    msg.setTimeStamp(0.292440083236);
    msg.setSource(48785U);
    msg.setSourceEntity(62U);
    msg.setDestination(5309U);
    msg.setDestinationEntity(39U);
    msg.l2 = 54;
    msg.l3 = -29;
    msg.iridium = -12;
    msg.modem = -104;
    msg.pumps = -4;
    msg.vhf = 96;

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

  return test.getReturnValue();
}

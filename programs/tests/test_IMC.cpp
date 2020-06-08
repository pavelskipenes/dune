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
// IMC XML MD5: f03569c742b632df430f37f79f94d0ad                            *
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
    msg.setTimeStamp(0.760613574204);
    msg.setSource(32198U);
    msg.setSourceEntity(29U);
    msg.setDestination(64759U);
    msg.setDestinationEntity(227U);
    msg.state = 252U;
    msg.flags = 12U;
    msg.description.assign("XCWQKVWOUREALYOFYSSLFCENIBVOCUEMIOT");

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
    msg.setTimeStamp(0.918616843738);
    msg.setSource(42891U);
    msg.setSourceEntity(18U);
    msg.setDestination(15907U);
    msg.setDestinationEntity(230U);
    msg.state = 185U;
    msg.flags = 31U;
    msg.description.assign("IKWBJZYIOWPZHTPKDLNQYKDGIFJPMMSDPUBIADJIHYENKUETWSXKNWZRSCCQVZVQZLDPLMRIUSAFMEHLMVLOJALMPBHFEJCRZWDCCANRBFIDSGROAFSIVZGCGXSPRENQOEJNYZJBLRAUMCLYYCHTQWWGUFDOUXVBDBHCARTGYUQTFEEGKUIUWBPSTXOIFDGMCGJTMGENXVXYHQSHEFOVMVBXXUTVKLRQPKKZYVAXTHOPJJWLO");

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
    msg.setTimeStamp(0.333752325018);
    msg.setSource(51537U);
    msg.setSourceEntity(143U);
    msg.setDestination(65436U);
    msg.setDestinationEntity(247U);
    msg.state = 41U;
    msg.flags = 233U;
    msg.description.assign("ZGIEBNNOSNVOPARGSGEUQEZTIJGXILKZWXEOMKCXFCNWLDJXRFVVVKYLBRLQYNYGJEYSDOLWYJYGMKUPHYCWIAFUBXCZMRLSHCMWSZVZPWWIQABPOAMLDCODFJDJAXUXPWGROLHSB");

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
    msg.setTimeStamp(0.115686985434);
    msg.setSource(65475U);
    msg.setSourceEntity(122U);
    msg.setDestination(59462U);
    msg.setDestinationEntity(15U);

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
    msg.setTimeStamp(0.976482460486);
    msg.setSource(9335U);
    msg.setSourceEntity(216U);
    msg.setDestination(62489U);
    msg.setDestinationEntity(67U);

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
    msg.setTimeStamp(0.173914875136);
    msg.setSource(563U);
    msg.setSourceEntity(39U);
    msg.setDestination(49776U);
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
    msg.setTimeStamp(0.328170280271);
    msg.setSource(53330U);
    msg.setSourceEntity(151U);
    msg.setDestination(54798U);
    msg.setDestinationEntity(170U);
    msg.id = 8U;
    msg.label.assign("CVPAQLVCPCRFOPVFDTMEFDBIZFZIDQIVTZBCQSHGRLRUOMARUUCVKDLYNXMYAABWGENTDHALDYLTNYQUWVUNDJXYPWYMIIKJPFXSOBKSLWZKHQUGZSECUCJKBDVJF");
    msg.component.assign("GXYEYMDPMLIYJZFCXELEUOKLWOHVMDNRHOUIITSIOOVVBBKIDJBFMUESANCACMWGDDGLBSZSFQHRLSKTHEHWSHVVKYIBJMVLUGNQBPTEGGXXTJPKVLCYLVQGQFIPCRZAGRKYOOSONRZMICMGZTXXWNWGKZJXNZYAFJYDSJBIEHPUNAWHUPTRBWEOBDIQCCRECHFMSAKFQCWQZPODAEJJ");
    msg.act_time = 63761U;
    msg.deact_time = 31147U;

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
    msg.setTimeStamp(0.0633721938846);
    msg.setSource(50809U);
    msg.setSourceEntity(161U);
    msg.setDestination(8746U);
    msg.setDestinationEntity(122U);
    msg.id = 117U;
    msg.label.assign("WDINPWVUEIMIRKZEZXJXVCGFQHPFANPZQGBPIUXUEZNTWSVYBCKEJBPSAWDAUUVMZXLYRJSBWTVOBYITYWCACXXHYDRUABPNMWCIUHOGNSYZIDFPXLZMQCINJANU");
    msg.component.assign("XTGBMUJYKPUIRWLMMJRBTIGFJHTYIEEEKYSZCOWVFGRZYZCLMSLRKDVPCAFUNZBRXXVUQXNGYVAWMEITYJHENYFKSJHTOLNAKVOLKQHOHCZANWDNBCOAQSOQKEJRTZBCGLYYXQOEBEFDGNJRGNEVUAFGNIDPMWLTDHJBAXIZVGWWFHSLPAXDQIVPMSOQWQDPUM");
    msg.act_time = 44272U;
    msg.deact_time = 30669U;

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
    msg.setTimeStamp(0.271458103599);
    msg.setSource(26549U);
    msg.setSourceEntity(8U);
    msg.setDestination(15997U);
    msg.setDestinationEntity(252U);
    msg.id = 0U;
    msg.label.assign("KLUGMYHEQIJKWJDCZNAQPTGKDXIQYZROAGCIHVYCRUBKLNVILGLMWUCYHISFAIFBKZUCEIBAYPGMNPQOGVVFXYDUYGESDJJPTMREDPERQ");
    msg.component.assign("AZKUZBJYHZAWURVAEFVBDDEUSNJGMORWLCLEIQTILNVASMZVAKOIJTXBYNHMNYFFKYTHXUTZRLTUEDDIF");
    msg.act_time = 13303U;
    msg.deact_time = 43485U;

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
    msg.setTimeStamp(0.177251238976);
    msg.setSource(37058U);
    msg.setSourceEntity(140U);
    msg.setDestination(16505U);
    msg.setDestinationEntity(89U);
    msg.id = 229U;

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
    msg.setTimeStamp(0.0686166686885);
    msg.setSource(14973U);
    msg.setSourceEntity(98U);
    msg.setDestination(27764U);
    msg.setDestinationEntity(37U);
    msg.id = 126U;

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
    msg.setTimeStamp(0.276293600616);
    msg.setSource(52981U);
    msg.setSourceEntity(96U);
    msg.setDestination(40123U);
    msg.setDestinationEntity(215U);
    msg.id = 84U;

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
    msg.setTimeStamp(0.195076745154);
    msg.setSource(9654U);
    msg.setSourceEntity(62U);
    msg.setDestination(27504U);
    msg.setDestinationEntity(108U);
    msg.op = 14U;
    msg.list.assign("CTXPGWLJWBQIGYFIOCUCOTOHSILFAXAMEAWHESISPNQYPDQRTHUASFCZVBOEORDRGQAPVRZOUKPUKTVGNYXFBDVBEZKPGZPXCMUID");

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
    msg.setTimeStamp(0.522424259598);
    msg.setSource(21468U);
    msg.setSourceEntity(59U);
    msg.setDestination(1169U);
    msg.setDestinationEntity(73U);
    msg.op = 105U;
    msg.list.assign("YAHBKJAUHNNVXQRNRSNLSHYCHPAYNZFOMRBBOLFCJPTNQXKGAEGYQFEDABJLXJNTQBSRTVTDRIKFTZUMCOJWSKIODHSDMUXRXEMCGYUMMDLFCOIPRBSUVQEAPWTEGPLAJZZHKSJEVJUGGXGLZDKKISGPBHDDMSWQOYJWIITYCCAYEVCOCXGTNTIWKPILOYZVASWARPVNIUUBWFJKFNLQIQEEXHB");

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
    msg.setTimeStamp(0.0607809885423);
    msg.setSource(32706U);
    msg.setSourceEntity(156U);
    msg.setDestination(18475U);
    msg.setDestinationEntity(46U);
    msg.op = 235U;
    msg.list.assign("QYQXVLKABHDLHTSUFXQIVWBYYXLTUBIGEDMDAEXVXAJVMYIBLQMMAEGBGEUOXQWZWHRJIMVIJGXRQSRYCLBZBTMAWEPURPOTYZKDIMOETUPARNFZVDDPENGLPRSOCZZNWUVTA");

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
    msg.setTimeStamp(0.279377393662);
    msg.setSource(21164U);
    msg.setSourceEntity(89U);
    msg.setDestination(6192U);
    msg.setDestinationEntity(22U);
    msg.value = 64U;

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
    msg.setTimeStamp(0.984560072332);
    msg.setSource(7387U);
    msg.setSourceEntity(196U);
    msg.setDestination(53830U);
    msg.setDestinationEntity(223U);
    msg.value = 43U;

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
    msg.setTimeStamp(0.971193122355);
    msg.setSource(3108U);
    msg.setSourceEntity(248U);
    msg.setDestination(63629U);
    msg.setDestinationEntity(49U);
    msg.value = 31U;

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
    msg.setTimeStamp(0.343651896947);
    msg.setSource(10539U);
    msg.setSourceEntity(80U);
    msg.setDestination(41011U);
    msg.setDestinationEntity(206U);
    msg.consumer.assign("CTMJSNLDMHCKKUCJQKCFVVWQCEAIDFUWIOJQEKMAMXLTPHOUMIAFRAHMRCMZBUXFUHTPBSGFZQQOKYRHY");
    msg.message_id = 10885U;

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
    msg.setTimeStamp(0.560977421211);
    msg.setSource(56135U);
    msg.setSourceEntity(48U);
    msg.setDestination(48118U);
    msg.setDestinationEntity(207U);
    msg.consumer.assign("EYMNNJVMWWFMQQEUYJSVDXRHMTTBIWCYAQICUXTVQSSHWSHNICCECDGUBNLQFKUPLCTUDIDEOXTUBLJGSGKHKVKMDOFROGQCCYZSQAAPSWFKEAZTSEIRPEOFGZG");
    msg.message_id = 8232U;

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
    msg.setTimeStamp(0.0788382290996);
    msg.setSource(59747U);
    msg.setSourceEntity(215U);
    msg.setDestination(32002U);
    msg.setDestinationEntity(89U);
    msg.consumer.assign("HJUFRWWLPZUXSLNDMMWDIGLDEYRAWSUORUEHENELVSAS");
    msg.message_id = 4950U;

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
    msg.setTimeStamp(0.57036950076);
    msg.setSource(49640U);
    msg.setSourceEntity(20U);
    msg.setDestination(50343U);
    msg.setDestinationEntity(74U);
    msg.type = 43U;

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
    msg.setTimeStamp(0.649195593351);
    msg.setSource(19107U);
    msg.setSourceEntity(236U);
    msg.setDestination(6054U);
    msg.setDestinationEntity(106U);
    msg.type = 251U;

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
    msg.setTimeStamp(0.545184862268);
    msg.setSource(5286U);
    msg.setSourceEntity(232U);
    msg.setDestination(17341U);
    msg.setDestinationEntity(144U);
    msg.type = 239U;

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
    msg.setTimeStamp(0.150428639585);
    msg.setSource(16713U);
    msg.setSourceEntity(217U);
    msg.setDestination(38061U);
    msg.setDestinationEntity(241U);
    msg.op = 180U;

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
    msg.setTimeStamp(0.686196549703);
    msg.setSource(764U);
    msg.setSourceEntity(195U);
    msg.setDestination(46728U);
    msg.setDestinationEntity(36U);
    msg.op = 238U;

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
    msg.setTimeStamp(0.545934496109);
    msg.setSource(3757U);
    msg.setSourceEntity(137U);
    msg.setDestination(1978U);
    msg.setDestinationEntity(147U);
    msg.op = 150U;

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
    msg.setTimeStamp(0.229577755307);
    msg.setSource(10397U);
    msg.setSourceEntity(91U);
    msg.setDestination(31266U);
    msg.setDestinationEntity(21U);
    msg.total_steps = 14U;
    msg.step_number = 26U;
    msg.step.assign("FVQXLFPVXLGHLOZRWWVVDGNTYTPLMGDVMPQGEPXTDBMZRECGHSDLAHVYVDSPTEONDWCOWLCNDVWTTCKHYFFKBMIITNSOQYYOZSJSOQKJJZFLIZJQBZIXUHUEMOJTKIKRHMRWCVJSQKFENPUEILGHJAXUBUGFPTECKAMGMYAOEHQXWPJBBTWSNAROPECNXZHRKSXBRUDBCAIZACIMDXGUFSFQZYAZUJNNBXRJ");
    msg.flags = 197U;

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
    msg.setTimeStamp(0.814795986807);
    msg.setSource(36412U);
    msg.setSourceEntity(56U);
    msg.setDestination(38615U);
    msg.setDestinationEntity(49U);
    msg.total_steps = 175U;
    msg.step_number = 38U;
    msg.step.assign("OLODIAKLAZXCSGNXRFWHTFTTYBJMSKLMQETDYWTGURHBSPNEBFUDMKQNHDOCVCQJIJKKXJBGVFLYXBVAZNOYNJCKOCOAEZPRATAWOBRWJTANOMZTCGLYSPCFKDWMDCUYQDJJWQMSAGMZIOR");
    msg.flags = 23U;

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
    msg.setTimeStamp(0.897514545147);
    msg.setSource(36024U);
    msg.setSourceEntity(227U);
    msg.setDestination(62370U);
    msg.setDestinationEntity(32U);
    msg.total_steps = 185U;
    msg.step_number = 88U;
    msg.step.assign("XVCCDLNQIRSYKBVPEPKMCTRTMDJZEOQDBSONURTFYVBGZRUDSZRNHRAUGTCANYHIQTVQKFLAWDEKXHIWKJNCGQLXLWGWSHONKJXBWWPPGFCUFSMYTPQEVQWALLBULZIORURJMYSVSTWXFZGBCZBHQPCHENMLZUMOYHIIAEUDPWVOGDXJSMHVBZBYYYRIMTUVMEIEFFSKAG");
    msg.flags = 217U;

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
    msg.setTimeStamp(0.233094018642);
    msg.setSource(44515U);
    msg.setSourceEntity(123U);
    msg.setDestination(48052U);
    msg.setDestinationEntity(12U);
    msg.state = 175U;
    msg.error.assign("VSAGRJYRSZMOPPVPSJQPZUFXJUEVASPAQTFBDYOWERTBWPLVDIRUGDHMGNLNHMQLTEHKFLAUWFBE");

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
    msg.setTimeStamp(0.602981681065);
    msg.setSource(17862U);
    msg.setSourceEntity(63U);
    msg.setDestination(17719U);
    msg.setDestinationEntity(244U);
    msg.state = 47U;
    msg.error.assign("MBYSHEIUHDMBSWHIKNUTZKRVJMSUNYXZEHFTJCCSQILYOXUK");

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
    msg.setTimeStamp(0.211519804316);
    msg.setSource(54967U);
    msg.setSourceEntity(228U);
    msg.setDestination(60918U);
    msg.setDestinationEntity(185U);
    msg.state = 59U;
    msg.error.assign("JELHGLMQBSGORNQUMKFWYDLANRPYSFHUSGQBNJCLNSXPRUPNWHCANMPIWIETQVPULHDBOMPCZOLXJLDUFQOSGRATSRLHCEAHKIKXZDMGKGTAFOQRRNBNXZGPZESNIYGGQKAUNHDJVTXBMWFDWISZIBIKKJ");

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
    msg.setTimeStamp(0.746497307226);
    msg.setSource(8272U);
    msg.setSourceEntity(137U);
    msg.setDestination(26945U);
    msg.setDestinationEntity(60U);

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
    msg.setTimeStamp(0.62042114359);
    msg.setSource(14998U);
    msg.setSourceEntity(207U);
    msg.setDestination(21691U);
    msg.setDestinationEntity(190U);

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
    msg.setTimeStamp(0.798671433138);
    msg.setSource(64438U);
    msg.setSourceEntity(183U);
    msg.setDestination(62447U);
    msg.setDestinationEntity(18U);

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
    msg.setTimeStamp(0.806752698313);
    msg.setSource(36427U);
    msg.setSourceEntity(39U);
    msg.setDestination(34075U);
    msg.setDestinationEntity(151U);
    msg.op = 153U;
    msg.speed_min = 0.0294244113347;
    msg.speed_max = 0.729081073732;
    msg.long_accel = 0.0617585725119;
    msg.alt_max_msl = 0.230206973714;
    msg.dive_fraction_max = 0.0337401789849;
    msg.climb_fraction_max = 0.451213196992;
    msg.bank_max = 0.628420036382;
    msg.p_max = 0.809360419387;
    msg.pitch_min = 0.730127209084;
    msg.pitch_max = 0.659002293518;
    msg.q_max = 0.181693544633;
    msg.g_min = 0.117309037803;
    msg.g_max = 0.234399115402;
    msg.g_lat_max = 0.91781936617;
    msg.rpm_min = 0.0382631923968;
    msg.rpm_max = 0.0705131641047;
    msg.rpm_rate_max = 0.370957507025;

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
    msg.setTimeStamp(0.718978671658);
    msg.setSource(57120U);
    msg.setSourceEntity(54U);
    msg.setDestination(17749U);
    msg.setDestinationEntity(158U);
    msg.op = 181U;
    msg.speed_min = 0.747002270678;
    msg.speed_max = 0.415530117287;
    msg.long_accel = 0.520718772723;
    msg.alt_max_msl = 0.278778848456;
    msg.dive_fraction_max = 0.2406521687;
    msg.climb_fraction_max = 0.544402864878;
    msg.bank_max = 0.849766764493;
    msg.p_max = 0.485819795144;
    msg.pitch_min = 0.805060639434;
    msg.pitch_max = 0.585159990179;
    msg.q_max = 0.262538572105;
    msg.g_min = 0.298860435562;
    msg.g_max = 0.590126502774;
    msg.g_lat_max = 0.122471134192;
    msg.rpm_min = 0.516202380142;
    msg.rpm_max = 0.518870678213;
    msg.rpm_rate_max = 0.727102085146;

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
    msg.setTimeStamp(0.916967878959);
    msg.setSource(9955U);
    msg.setSourceEntity(168U);
    msg.setDestination(48684U);
    msg.setDestinationEntity(201U);
    msg.op = 36U;
    msg.speed_min = 0.440695529959;
    msg.speed_max = 0.422663537335;
    msg.long_accel = 0.555362143584;
    msg.alt_max_msl = 0.300684629521;
    msg.dive_fraction_max = 0.749159310921;
    msg.climb_fraction_max = 0.49874597971;
    msg.bank_max = 0.809221309903;
    msg.p_max = 0.180785366081;
    msg.pitch_min = 0.844442838986;
    msg.pitch_max = 0.678421830275;
    msg.q_max = 0.752008135401;
    msg.g_min = 0.0676013794651;
    msg.g_max = 0.450498187816;
    msg.g_lat_max = 0.226208652458;
    msg.rpm_min = 0.816617460148;
    msg.rpm_max = 0.345526699222;
    msg.rpm_rate_max = 0.86409853016;

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
    msg.setTimeStamp(0.823090721721);
    msg.setSource(40781U);
    msg.setSourceEntity(82U);
    msg.setDestination(44512U);
    msg.setDestinationEntity(92U);
    IMC::EulerAnglesDelta tmp_msg_0;
    tmp_msg_0.time = 0.39488905469;
    tmp_msg_0.x = 0.00202993547404;
    tmp_msg_0.y = 0.40341965961;
    tmp_msg_0.z = 0.836893798328;
    tmp_msg_0.timestep = 0.541263473837;
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
    msg.setTimeStamp(0.305734401502);
    msg.setSource(37343U);
    msg.setSourceEntity(62U);
    msg.setDestination(60862U);
    msg.setDestinationEntity(59U);

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
    msg.setTimeStamp(0.526585061546);
    msg.setSource(6844U);
    msg.setSourceEntity(49U);
    msg.setDestination(22138U);
    msg.setDestinationEntity(146U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.998857946312;
    tmp_msg_0.lon = 0.895560889501;
    tmp_msg_0.height = 0.431394455639;
    tmp_msg_0.x = 0.808751841428;
    tmp_msg_0.y = 0.0965843872115;
    tmp_msg_0.z = 0.199525934465;
    tmp_msg_0.phi = 0.213805397539;
    tmp_msg_0.theta = 0.551766786815;
    tmp_msg_0.psi = 0.697217487273;
    tmp_msg_0.u = 0.520112653061;
    tmp_msg_0.v = 0.302831175367;
    tmp_msg_0.w = 0.880143858064;
    tmp_msg_0.vx = 0.803086825376;
    tmp_msg_0.vy = 0.0348012891042;
    tmp_msg_0.vz = 0.546417833771;
    tmp_msg_0.p = 0.0988004791777;
    tmp_msg_0.q = 0.0488033384962;
    tmp_msg_0.r = 0.841868134852;
    tmp_msg_0.depth = 0.039180687788;
    tmp_msg_0.alt = 0.52225230315;
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
    msg.setTimeStamp(0.998100535367);
    msg.setSource(29344U);
    msg.setSourceEntity(38U);
    msg.setDestination(18553U);
    msg.setDestinationEntity(169U);
    msg.lat = 0.424201552019;
    msg.lon = 0.222806134365;
    msg.height = 0.61806013702;
    msg.x = 0.807652213659;
    msg.y = 0.729807405339;
    msg.z = 0.861142110263;
    msg.phi = 0.881373320984;
    msg.theta = 0.257463907269;
    msg.psi = 0.786234506746;
    msg.u = 0.359296450881;
    msg.v = 0.695459786918;
    msg.w = 0.131231871264;
    msg.p = 0.330495507381;
    msg.q = 0.345715137693;
    msg.r = 0.0187241528631;
    msg.svx = 0.259332830675;
    msg.svy = 0.0523338758947;
    msg.svz = 0.472089127166;

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
    msg.setTimeStamp(0.42496970792);
    msg.setSource(61347U);
    msg.setSourceEntity(148U);
    msg.setDestination(23836U);
    msg.setDestinationEntity(136U);
    msg.lat = 0.69241277682;
    msg.lon = 0.225131145297;
    msg.height = 0.976685925802;
    msg.x = 0.765340897541;
    msg.y = 0.855146461007;
    msg.z = 0.576987558023;
    msg.phi = 0.106083762023;
    msg.theta = 0.0520881113899;
    msg.psi = 0.612996246656;
    msg.u = 0.28650267572;
    msg.v = 0.4203952737;
    msg.w = 0.0714989322402;
    msg.p = 0.256582294174;
    msg.q = 0.176492681092;
    msg.r = 0.513131746045;
    msg.svx = 0.960660346303;
    msg.svy = 0.571446333637;
    msg.svz = 0.535402850686;

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
    msg.setTimeStamp(0.611961080727);
    msg.setSource(7410U);
    msg.setSourceEntity(187U);
    msg.setDestination(46341U);
    msg.setDestinationEntity(246U);
    msg.lat = 0.798513914032;
    msg.lon = 0.555848292951;
    msg.height = 0.243945506108;
    msg.x = 0.131526329749;
    msg.y = 0.168343467129;
    msg.z = 0.37339296165;
    msg.phi = 0.404280090068;
    msg.theta = 0.842774221229;
    msg.psi = 0.614951674613;
    msg.u = 0.0128285187398;
    msg.v = 0.584566028684;
    msg.w = 0.698488103742;
    msg.p = 0.0269021955171;
    msg.q = 0.698434257429;
    msg.r = 0.361484409124;
    msg.svx = 0.0758689700988;
    msg.svy = 0.23749296207;
    msg.svz = 0.220418094666;

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
    msg.setTimeStamp(0.00518074327687);
    msg.setSource(3189U);
    msg.setSourceEntity(177U);
    msg.setDestination(64857U);
    msg.setDestinationEntity(215U);
    msg.op = 82U;
    msg.entities.assign("ZQNJMYGNYNQJPPWCEBDWXCZLIXMTRYMKEBYQVNKISHDAVTOTNDPAOXLKGNMBVHUOSDVIWPXEVCTEAWAIPTLFMYVSZOMGGGVCWPCKDTZHEVCIOEEJF");

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
    msg.setTimeStamp(0.863376009738);
    msg.setSource(21305U);
    msg.setSourceEntity(176U);
    msg.setDestination(13424U);
    msg.setDestinationEntity(90U);
    msg.op = 3U;
    msg.entities.assign("WTWKIYQPLPPUTUSEOZOKMVQIUCOJJFRRRUVWCHVODCTRRLVYZQPXBIDJRUNGOIABJZSEGGKIYNFYVLXMCHIEFQSGNYTBZZUNHIOSNHJPOCQIQYFLKPAMDPMVKLLKJJRWXDSOXMZKQEPHDLBCVQASMHCXBWXAUDBMBJSNTFTAACSANFYTDYWHBFZVEEWLGSOWUMVKGQLZJTCQLDENEATFCAKNHEUYFGXPBMIDRPGGEWIXZGDMAHY");

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
    msg.setTimeStamp(0.835926468062);
    msg.setSource(6996U);
    msg.setSourceEntity(60U);
    msg.setDestination(3871U);
    msg.setDestinationEntity(154U);
    msg.op = 228U;
    msg.entities.assign("UZQQHTTJRWAIQATELAIPHYNGJHQXZWLWDVMVORPBPORPDYKSVGCNBLCSOGIWUGDEBYBORGCTGRRUSBMEPHFMNBDWFKMOJLOTXWXPODWVUHVJYSXCIZYIINIZFVFFTKDPSAONVDFZHCULASRWTJXUFKBKTUPKTEYYZLJAEBPPEXETDJKSKKSEWBJZZDVNILACQLQHMOUMLAYYFN");

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
    msg.setTimeStamp(0.906437502712);
    msg.setSource(49652U);
    msg.setSourceEntity(128U);
    msg.setDestination(37715U);
    msg.setDestinationEntity(222U);
    msg.type = 21U;
    msg.speed = 18825U;
    const char tmp_msg_0[] = {-94, 28, -48, 15, 78, -93, -22, 53, 17, -125, -39, -74, 16, 22, -110, 11, -111, 6, -125, -42, -110, 73, -39, 51, -57, 115, -9, -7, -38, -122, -21, -66, 27, -118, 86, -108, 7, -16, 63, -88, 35, 50, -10, -29, -64, -95, 71, -100, -88, 100, 47, 12, 33, 87, -52, 77, -47, -7, -29, 124, -125, -13, -24, 121, -69, -91, -103, -38, -110, -98, -85, -97, -21, -66, -3, 79, -4, -107, -2, -82, 125, 60, 29, -77, -43, -52, 62, 86, 67, 56, 81, -20, -10, 43, -78, -22, 1, -114, -83, -56, 77, 100, -31, 45, -24, 4, -72, -110, 88, 106, 70, 3, 84, -121, 45, -45, -15, -113, 119, -98, 92, -73, -89, 38, -108, -87, -124, 76, -38, -85, 8, -25, 5, 92, -116, -77, 31, 3, -118, -66, 39, 56, -52, 13, -23, -123, -122, -98, -27, -25, 69, 100, -55, 63, -32, 35, 67, 32, 74, 52, -38, -118, 124, 9, -49, 101, 90, 103, 58, -64, -9, -58, 29, -89, -35, 107, 70, 24, -9, 100, 39, 61, -105, 78, 32, -92, 66, 81, -64, 4, -62, -91, 57, 88, 47, 61, 106, 94, 69, -53, -56, -128, -60, -111, -127, -78, -81, 119, -112, 4, -86, -113, 28, 66, -52, 109, 58, 74, 72, 104, -128, 81};
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
    msg.setTimeStamp(0.208798473284);
    msg.setSource(59060U);
    msg.setSourceEntity(135U);
    msg.setDestination(4765U);
    msg.setDestinationEntity(203U);
    msg.type = 127U;
    msg.speed = 5571U;
    const char tmp_msg_0[] = {22, 101, -95, -7, -58, 0, 117, 12, 43, -116, 43, 114, -101, 22, 17, 40, -14, 43, 64, 72, 82, -119, 101, 57, 36, -94, 109, -87, -53, -101, 30, 95, 85, 23, 28, 8, 3, 126, -75, -48, 85, -79, 75, 115, -27, -101, 104, 58, -106, 103, -31, 71, -36, 79, -102, 95, 57, -126, 75, -97, -108, -103, -98, -8, -75, 3, -104, 48, 126, -16, -110, -99, -2, -64, -18, -63, 126, 51, 60, 22, 1, 115, 18, -43, 44, -12, -12, 97, -116, -18, 28, -41, 16};
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
    msg.setTimeStamp(0.138068728417);
    msg.setSource(29811U);
    msg.setSourceEntity(56U);
    msg.setDestination(8050U);
    msg.setDestinationEntity(178U);
    msg.type = 239U;
    msg.speed = 13819U;
    const char tmp_msg_0[] = {-88, 8, -125, 4, -84, 49, -78, -79, -56, 65, 32, 98, -59, -38, -78, 101, -107, 55, -109, -11, -61, -17, 124, 4, -74, -116, 109, -93, -50, 29, -25, 28, 36, -60, 70, 12, -85, -106, 74, -102, 18, -118, 57, -117, 95, -102, -42, 110, -41, 75, 11, 35, -92, 102, -29, -41, -117, -113, 71, 77, -82, -125, -121, -49, 15, -99, -80, -110, 80, 124, -107, 37, -10, 28, -15, -58, -126, -95, 23, 34, 75, -127, 107, 52, 112, 115, 64, -52, -57, -44, -43, 106, -64, -77, 10, 59, -51, -1, -14, -7, -39, 85, -110, -65, -92, 96, 105, -128, 67, -19, -50, -23, 58, -39, -4, 28, 88, 116, -84, -84, 6, 121, -47, -69, -79, -126, 124, 118, 91, -98, 125, -98, -69, -43, 72, 122, -18, -46, 94, 9, 13, -60, -69, 87, -91, 35, -39, -121, -39};
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
    msg.setTimeStamp(0.0101098812267);
    msg.setSource(50388U);
    msg.setSourceEntity(131U);
    msg.setDestination(26480U);
    msg.setDestinationEntity(102U);
    msg.op = 193U;
    msg.tas2acc_pgain = 0.0164892584755;
    msg.bank2p_pgain = 0.0155877078955;

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
    msg.setTimeStamp(0.784729067322);
    msg.setSource(58605U);
    msg.setSourceEntity(97U);
    msg.setDestination(52417U);
    msg.setDestinationEntity(98U);
    msg.op = 1U;
    msg.tas2acc_pgain = 0.642115979608;
    msg.bank2p_pgain = 0.356315433928;

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
    msg.setTimeStamp(0.379412548474);
    msg.setSource(7724U);
    msg.setSourceEntity(1U);
    msg.setDestination(32702U);
    msg.setDestinationEntity(101U);
    msg.op = 149U;
    msg.tas2acc_pgain = 0.857504968219;
    msg.bank2p_pgain = 0.335366464251;

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
    msg.setTimeStamp(0.80849263367);
    msg.setSource(22096U);
    msg.setSourceEntity(2U);
    msg.setDestination(56239U);
    msg.setDestinationEntity(250U);
    msg.available = 3517710596U;
    msg.value = 97U;

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
    msg.setTimeStamp(0.806878581761);
    msg.setSource(60616U);
    msg.setSourceEntity(102U);
    msg.setDestination(13819U);
    msg.setDestinationEntity(208U);
    msg.available = 2781715711U;
    msg.value = 38U;

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
    msg.setTimeStamp(0.413645991608);
    msg.setSource(51985U);
    msg.setSourceEntity(61U);
    msg.setDestination(24865U);
    msg.setDestinationEntity(119U);
    msg.available = 1817225143U;
    msg.value = 26U;

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
    msg.setTimeStamp(0.0833234472479);
    msg.setSource(38379U);
    msg.setSourceEntity(220U);
    msg.setDestination(39723U);
    msg.setDestinationEntity(252U);
    msg.op = 110U;
    msg.snapshot.assign("WLAXJNUGGEJJPNIGGSCKZVQCDRHOUDHZBMFBKKFWMCJNPHZZDLKRKPVLNGZQHWPEQACDTIKYOPFHTJTDPAOIVSUJQL");
    IMC::Phycoerythrin tmp_msg_0;
    tmp_msg_0.value = 0.840942298796;
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
    msg.setTimeStamp(0.354680584653);
    msg.setSource(4772U);
    msg.setSourceEntity(56U);
    msg.setDestination(18644U);
    msg.setDestinationEntity(84U);
    msg.op = 141U;
    msg.snapshot.assign("JGZKVBKTKWQYFBSMJVOAJWXEICPONJPJGATFRSCHLBGMSENZRZOYA");
    IMC::QueryPowerChannelState tmp_msg_0;
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
    msg.setTimeStamp(0.560016559326);
    msg.setSource(41797U);
    msg.setSourceEntity(111U);
    msg.setDestination(57538U);
    msg.setDestinationEntity(16U);
    msg.op = 182U;
    msg.snapshot.assign("ELZECEBUSMSRYPCKXFZZHVPUUZHNERLWPAIPXDNTYQGCUTPHRTJJHIOAPTJYCWHBOEVFVMPKYVPDTIMIXNRAQMHLEKHPFMTGYZIKGXWXUIEZYPNTZCQBRJZFWAVULCDNCOKFVWDULOMTQOXTKHVWQROXKIETFVVWNEGLRDSLMDSHXRACSWAFQBJAMSJQSLZDOQSBIDGBFE");
    IMC::IridiumMsgTx tmp_msg_0;
    tmp_msg_0.req_id = 25719U;
    tmp_msg_0.ttl = 39756U;
    tmp_msg_0.destination.assign("OOKBFVBHBMHQVGOGBZSTSWDMXRLSXRUFMNKGSBTJCKAVECDNHDVTNJLRNAOYOZJ");
    const char tmp_tmp_msg_0_0[] = {124, -2, 18, 13, -82, -35, 114, 15, -85, 52, 50, 25, -3, -97, -52, -68, 91, 28, -123, -40, 93, 49, -14, -81, -24, 27, -52, 74, 35, 88, -12, -91, -110, -100, -105};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.320818359906);
    msg.setSource(59128U);
    msg.setSourceEntity(129U);
    msg.setDestination(52923U);
    msg.setDestinationEntity(191U);
    msg.op = 88U;
    msg.name.assign("FSYIUWCYVNDEAZDLYAIPEXQTQYKSGRFLJBAZUIYNJYHFSIFGSNQSMKMWBK");

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
    msg.setTimeStamp(0.979803406903);
    msg.setSource(44158U);
    msg.setSourceEntity(226U);
    msg.setDestination(14829U);
    msg.setDestinationEntity(48U);
    msg.op = 16U;
    msg.name.assign("TNUKETDENRMYK");

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
    msg.setTimeStamp(0.458747709994);
    msg.setSource(13777U);
    msg.setSourceEntity(130U);
    msg.setDestination(29809U);
    msg.setDestinationEntity(202U);
    msg.op = 26U;
    msg.name.assign("RBXNUFFLSFGTZVGCDYCPZRXQHNEYMJZWBZTUEAUXJJRWYEMMZAXCDNASNPALKALIOMEHOVKHJLNSGSDSVRXSFAQATOKCBCXFCUEQYQBPDVWPDTSKKHNRBJCOOIRBOJLGJJGIMLUUWRGRJAVMTEKKUELO");

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
    msg.setTimeStamp(0.809183966371);
    msg.setSource(28852U);
    msg.setSourceEntity(251U);
    msg.setDestination(30700U);
    msg.setDestinationEntity(216U);
    msg.type = 242U;
    msg.htime = 0.7794406825;
    msg.context.assign("XXQMCOCESDEGCOLXIQAAUBEVINFRZKZBUSLKAJMPLTSRQTVQMWHJBKVFXTHSIVJGKGWMLCJWNPYOFCSXMYEBMVSFQAHNKPVUEUXYPWTBOHIRYBWZZQXXSJUKIYTWGAFDNBCQTXDNNEWASKKZNLFZINCTAIZBGPPVVRONJOIYFDAGS");
    msg.text.assign("XSKOVWOBZHPRYCPKKVXDCUIJUBMZBRORSARZWQYOQNFZFSZXMAQUADYTFAEGBIYGNWXBDEAUYXIHHTEJRXPLNKMBVPQTNEKDSQJJLSVOWEZAQCFOHRBHZRPHJVKVCJJUVLGINXJIR");

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
    msg.setTimeStamp(0.567807915737);
    msg.setSource(11493U);
    msg.setSourceEntity(43U);
    msg.setDestination(58038U);
    msg.setDestinationEntity(214U);
    msg.type = 249U;
    msg.htime = 0.146543657073;
    msg.context.assign("NUXFKTILLNSHOXHLIEINZMEAZWZZOTYKGDQMTNCVFYPAHQWCKUSFHBXHPJUIGUXLHTOIKSWUFGTVVNQCBUMHMDDPZLQKMQER");
    msg.text.assign("SPSHSNMLZBLKTN");

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
    msg.setTimeStamp(0.500801326791);
    msg.setSource(34837U);
    msg.setSourceEntity(74U);
    msg.setDestination(7698U);
    msg.setDestinationEntity(204U);
    msg.type = 28U;
    msg.htime = 0.586929823216;
    msg.context.assign("XKDOLGWYUNJETFQZOHWUINQCBEPUOFKZJTCGOKXJLLLCGVDAKFLXEUDVRAAURCBWZLHLRYTBKAUEBFMMQYTNQWTCPIVBSAGPKIYDEJVVSFYLNRNMHDQZRFVNBXIQPCXRVMNAAGSJDVOZYHIHDIRSINJXQPKPYYCGVJOFFWMGEPXHQEAUEJSKBZBTPRSHJIUOBMDXPHORKWEZYSXAUMMGTHSZEYZNHSOQ");
    msg.text.assign("FZYHQLJYXQATEWYIBDLFUWRUWPTBLZZHUHGNSXOPCKHKEZVDMCNGPVBWRRGKBNBQUSDUJOHLPLTERCSOUCPWNZVIREXCAJOOXPRGDFMJAVGICXROAASGJLRIFAUMUOHJXAUQSQW");

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
    msg.setTimeStamp(0.751904241192);
    msg.setSource(49411U);
    msg.setSourceEntity(219U);
    msg.setDestination(3087U);
    msg.setDestinationEntity(1U);
    msg.command = 100U;
    msg.htime = 0.235263116121;

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
    msg.setTimeStamp(0.6863338829);
    msg.setSource(19085U);
    msg.setSourceEntity(190U);
    msg.setDestination(19276U);
    msg.setDestinationEntity(74U);
    msg.command = 18U;
    msg.htime = 0.139753374588;

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
    msg.setTimeStamp(0.610208968035);
    msg.setSource(16545U);
    msg.setSourceEntity(66U);
    msg.setDestination(64128U);
    msg.setDestinationEntity(64U);
    msg.command = 66U;
    msg.htime = 0.280845108766;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 32U;
    tmp_msg_0.htime = 0.83138459372;
    tmp_msg_0.context.assign("MMTCCMTQGCOEKNGXJPOBGISSJVWJTZNQNIIULMMA");
    tmp_msg_0.text.assign("ZSVQFXUAEGANVMAWWXJTIMQDZNBELESQCNXOTKBSYHXJPWZMBTAXSLJSSWMSRURBXDKUMEU");
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
    msg.setTimeStamp(0.825342131474);
    msg.setSource(51231U);
    msg.setSourceEntity(223U);
    msg.setDestination(4479U);
    msg.setDestinationEntity(212U);
    msg.op = 45U;
    msg.file.assign("TRDPUFNGJPMVLKAEPBFNKBACHPQDVTEW");

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
    msg.setTimeStamp(0.92249591608);
    msg.setSource(40402U);
    msg.setSourceEntity(149U);
    msg.setDestination(23459U);
    msg.setDestinationEntity(44U);
    msg.op = 1U;
    msg.file.assign("AULWIWDSTGLMHJZQEYIVVRNJ");

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
    msg.setTimeStamp(0.150489530088);
    msg.setSource(50281U);
    msg.setSourceEntity(223U);
    msg.setDestination(45257U);
    msg.setDestinationEntity(168U);
    msg.op = 119U;
    msg.file.assign("ULJXKOBPBYQFUQRSGZEPNGNTOZCCDSHGLUMWOYBDJBDETMQSFOSDWTFWZPMZZXRXMAVUTGWRHRCJPMJDRESYY");

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
    msg.setTimeStamp(0.728429198969);
    msg.setSource(28344U);
    msg.setSourceEntity(233U);
    msg.setDestination(36534U);
    msg.setDestinationEntity(97U);
    msg.op = 64U;
    msg.clock = 0.763174449797;
    msg.tz = -99;

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
    msg.setTimeStamp(0.267971190621);
    msg.setSource(50442U);
    msg.setSourceEntity(79U);
    msg.setDestination(44890U);
    msg.setDestinationEntity(150U);
    msg.op = 232U;
    msg.clock = 0.131435545536;
    msg.tz = -42;

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
    msg.setTimeStamp(0.455282264513);
    msg.setSource(11651U);
    msg.setSourceEntity(235U);
    msg.setDestination(18818U);
    msg.setDestinationEntity(252U);
    msg.op = 237U;
    msg.clock = 0.124663021406;
    msg.tz = 45;

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
    msg.setTimeStamp(0.56076051573);
    msg.setSource(32544U);
    msg.setSourceEntity(28U);
    msg.setDestination(10568U);
    msg.setDestinationEntity(244U);
    msg.conductivity = 0.565402026288;
    msg.temperature = 0.684672374576;
    msg.depth = 0.287756980437;

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
    msg.setTimeStamp(0.677005637474);
    msg.setSource(33824U);
    msg.setSourceEntity(158U);
    msg.setDestination(51203U);
    msg.setDestinationEntity(32U);
    msg.conductivity = 0.928673000131;
    msg.temperature = 0.553321578652;
    msg.depth = 0.353306253796;

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
    msg.setTimeStamp(0.84889807788);
    msg.setSource(22602U);
    msg.setSourceEntity(34U);
    msg.setDestination(36267U);
    msg.setDestinationEntity(141U);
    msg.conductivity = 0.394115174597;
    msg.temperature = 0.841939663202;
    msg.depth = 0.766892059619;

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
    msg.setTimeStamp(0.973229876743);
    msg.setSource(3505U);
    msg.setSourceEntity(187U);
    msg.setDestination(26785U);
    msg.setDestinationEntity(172U);
    msg.altitude = 0.855814138713;
    msg.roll = 53401U;
    msg.pitch = 54865U;
    msg.yaw = 21489U;
    msg.speed = -27234;

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
    msg.setTimeStamp(0.344384567015);
    msg.setSource(54915U);
    msg.setSourceEntity(42U);
    msg.setDestination(14936U);
    msg.setDestinationEntity(237U);
    msg.altitude = 0.0535271983315;
    msg.roll = 11434U;
    msg.pitch = 12966U;
    msg.yaw = 45367U;
    msg.speed = 16946;

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
    msg.setTimeStamp(0.726733580949);
    msg.setSource(824U);
    msg.setSourceEntity(30U);
    msg.setDestination(16798U);
    msg.setDestinationEntity(224U);
    msg.altitude = 0.40536465061;
    msg.roll = 16694U;
    msg.pitch = 11125U;
    msg.yaw = 33045U;
    msg.speed = -11682;

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
    msg.setTimeStamp(0.211294154136);
    msg.setSource(57484U);
    msg.setSourceEntity(29U);
    msg.setDestination(55907U);
    msg.setDestinationEntity(42U);
    msg.altitude = 0.450457275613;
    msg.width = 0.054990403094;
    msg.length = 0.759816883665;
    msg.bearing = 0.60357871896;
    msg.pxl = -3721;
    msg.encoding = 87U;
    const char tmp_msg_0[] = {57, 125, -125, 38, 37, -118, 83, 56, -91, 78, 28, 14, -124, -121, -116, -90, -19, 107, 50, -101, 65, -93, 23, -80, 115, -93, -111, -52, -34, 60, -33, -2, -33, 126, -71, -33, -28, -88, 106, -90, 74, 78, -54, 120, 21, -62, 112, -3, 87, 20, -107, -46, 6, -10, -128, -81, 106, -76, -53, 18, -115, 58, -106, -118, 6, -56, -84, 86, -101, 102, -9, -66, -126, -5, -67, -9, 102, -80, -87, 21, 52, 120, 37, 96, 9, 77, 0, -98, -39, -5, 111, -113, -66, 118, -33, 39, 111, -14, 42, -49, -91, 66, -56, -60, 70, 118, -104, -126, -32, 94, -48, -58, -66, -3, 46, 12, 103, 124, -34, -90, 40, 3, 52, 58, -4, 123, -114, 66, -64, 68, -20, -19, 9, 82, -13, 99, -22, 126, 60, 111, 116, 7, -81, -11, 106, -110, -5, -86, 94, -52, 14, 0, 59, -113, -117, 42, -41, 74, -114, -120, 42, 94, -108, -59, 86, 29, 73, 39, -99, 50, 12, 96, 75, -70, -31, 96, 121, -124, 12, -40, -76, 33, -42, 57, -12, -112, 76, 112, -80, -46, -11, 14, 126, 16, -99, -105, -88, -2, -77, 13, -88, 44, 13, 107, -120, -60, 28, -112, 126, -38, 36};
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
    msg.setTimeStamp(0.398248628661);
    msg.setSource(46990U);
    msg.setSourceEntity(68U);
    msg.setDestination(46684U);
    msg.setDestinationEntity(99U);
    msg.altitude = 0.000757061364643;
    msg.width = 0.288403414749;
    msg.length = 0.688109899362;
    msg.bearing = 0.242076065096;
    msg.pxl = -7837;
    msg.encoding = 170U;
    const char tmp_msg_0[] = {19, 16, -93, 25, 7, 106, -125, -66, -108, 18, 90, -66, 55, -127, 89, -51, -73, 20, -32, -35, 103, -65, 8, -65, -28, -69, -16, 96, -41, 76, 54, -25, -92, 22, -93, 24, 30, -86, -102, -49, -89, -71, 27, -100, -6, 108, 103, -55, 81, -76, 58, -44, 77, -62, 4, 29, -103, -91, -9, 118, -81, -62, 62, 6, 99, -55, -13, 60, 123, 5, -65, -121, -40, -45, 42, -108, 64, -69, 111, 68, -26, 96, -47, -94, -76, 38, -91, 14, 106, 43, 12, 19, -69, 83, 125, 35, 125, -6, -38, 121, 85, 10, -66, -9, 76, 14, 19, 70, 30, -105, -6, 83, 113, 107, -75, 118, 94, -19, 103, 86, -11, -81, 75, 27, -25, 33, -97, -50, 109, -95, -36, -35, 124, 103, 1, 8, -44, -97, -121, 113, 118, 125, 22, -15, -48, -88, 63, -125, -60, 66, 17, -94, 34, 47, 38, -44, -13, 96, 39, 58, 19, 6, -32, -18, -118, -78, 9, 54, 23, 72, 45, 97, 100, 83, -24, 51, -128, -40, -92, -45, 11, -20, 97, -79, 71, 98, 21, -83, -68, -122, -8, 3, 75, -77, -30, -124, -110, -117, 121, 82, 13, -50, -2, -79};
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
    msg.setTimeStamp(0.09178478665);
    msg.setSource(59304U);
    msg.setSourceEntity(90U);
    msg.setDestination(12739U);
    msg.setDestinationEntity(238U);
    msg.altitude = 0.474119995358;
    msg.width = 0.554274404769;
    msg.length = 0.761122320592;
    msg.bearing = 0.967436895576;
    msg.pxl = 21768;
    msg.encoding = 42U;
    const char tmp_msg_0[] = {47, -1, 98, 98, -86, -69, -63, -122, 49, 72, -60, -94, -17, -98, 69, -27, -6, 66, 4, -118, -88, 64, -44, -78, 95, -28, -78, -45, 93, -66, 49, 100, -55, 124, -120, 53, 46, 120, -76, 59, -82, 113, 120, 67, 54, -9, -4, -123, 64, 110, -66, 67, 63, -15, 42, 52, 116, 108, 53, -47, -123, 38, 28, 25, -82, 20, -54, 84, -37, -51, -57, 102, -82, -25, -89, 103, -59, 44, -68, -87, -97, -21, -28, 61, -77, -29, 109, -6, 2, -92, -20, -31, -82, -77, 46, -6, -18, -2, -76, 89, 113, -117, -97, 41, 50, -68, -65, -106, 57, 93, 10, 65, -59, 43, -1, 65, 119, -88, -41, -51, -79, 126, 38, -122, -68, -103, 121, -91, -60, -80, 115, -8, 47, -51, 68, -110, 85, -124, -34, 5, -66, -113, 111, 25, 6, 3, 21, 16, 59, 5, -98, 20, 123, -44, 48, -89, 107, -128, 121, -126, -26, 104, 100, 66, -110, 43, -116, -27, -46, 65, -3, -106, -88, -8, 117, 35, -83, -26, -5, -21, 94, 39, -103, -70, -114, 86, 64, -119, -77, -33, -113, -25, -9, 60, -40, 96, 90, 118, 11, 111, 97, 81, 0, -67, 119, -24, 80, -128, -18, -50, -24, -70, -10, 19, -87, -67, -11, -35, -46, 51, -109, -13, 72, 63, -36, -22, 45, -125, -114, 22, 68, -95, -47, 32, 33, 43, 3, 28, 82, -52, 87, 87, -118};
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
    msg.setTimeStamp(0.516303806132);
    msg.setSource(14850U);
    msg.setSourceEntity(143U);
    msg.setDestination(55518U);
    msg.setDestinationEntity(18U);
    msg.text.assign("XWMNIXWAFHCVDNJRKGSJCLUJHHYVPIINNOIIHULBRXBWWSUWEAREYSLGHAASYZXVAIBWKJGTTURMMUJBKDEGQOXDXDGAZFTQCQLEDMZQAAYQVTTCNCOMVYSNQLFNZKPWOESOFH");
    msg.type = 123U;

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
    msg.setTimeStamp(0.300805944741);
    msg.setSource(39432U);
    msg.setSourceEntity(222U);
    msg.setDestination(37167U);
    msg.setDestinationEntity(168U);
    msg.text.assign("BYOCLNBZGWFQBOUZHZWBORNXRREIZJGMODPVWYVDSSPTRDMZHBTQZJDEGEVYSOUHCCSLPCVBHZIAAIOXUQXCKHXMNWCKKINXTHRIAROYRXAWKFPTFENAMNQPRSSFVCMMODKIUPUCFUJHUDMTDMKJEGEWVAMKDCXPTVKROTMVUQZBLOIYJFXZPNLWGHLU");
    msg.type = 7U;

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
    msg.setTimeStamp(0.39890386148);
    msg.setSource(26438U);
    msg.setSourceEntity(63U);
    msg.setDestination(50385U);
    msg.setDestinationEntity(112U);
    msg.text.assign("WMJCZTZOVDIXGUQOLEYYMKZVWTCBYLZEJVKXEZIEDPCCNAWHVQBRMYTXBAQPOSULGNSKKPUBGGZQHROKICFGMTIYIAFZROKSPNDRQQLCJOLVPENSVEIYQBMUBSAGAHPBYMNNLHJZWHMWKKNCWVTOUGYBZJFTFW");
    msg.type = 32U;

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
    msg.setTimeStamp(0.0559080465629);
    msg.setSource(48092U);
    msg.setSourceEntity(72U);
    msg.setDestination(2089U);
    msg.setDestinationEntity(81U);
    msg.parameter = 165U;
    msg.numsamples = 154U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 3050U;
    tmp_msg_0.avg = 0.647360837822;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.986072106685;
    msg.lon = 0.135214970006;

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
    msg.setTimeStamp(0.402931822279);
    msg.setSource(43112U);
    msg.setSourceEntity(220U);
    msg.setDestination(12989U);
    msg.setDestinationEntity(29U);
    msg.parameter = 148U;
    msg.numsamples = 19U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 16440U;
    tmp_msg_0.avg = 0.0281706609734;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.230880703632;
    msg.lon = 0.950191054581;

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
    msg.setTimeStamp(0.990690387846);
    msg.setSource(21939U);
    msg.setSourceEntity(82U);
    msg.setDestination(33676U);
    msg.setDestinationEntity(11U);
    msg.parameter = 190U;
    msg.numsamples = 254U;
    msg.lat = 0.122287486254;
    msg.lon = 0.00450265372658;

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
    msg.setTimeStamp(0.408121845178);
    msg.setSource(64796U);
    msg.setSourceEntity(180U);
    msg.setDestination(2815U);
    msg.setDestinationEntity(162U);
    msg.depth = 7241U;
    msg.avg = 0.675878056342;

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
    msg.setTimeStamp(0.99865749633);
    msg.setSource(52937U);
    msg.setSourceEntity(225U);
    msg.setDestination(2533U);
    msg.setDestinationEntity(163U);
    msg.depth = 65085U;
    msg.avg = 0.350683805077;

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
    msg.setTimeStamp(0.418464393823);
    msg.setSource(25077U);
    msg.setSourceEntity(128U);
    msg.setDestination(9938U);
    msg.setDestinationEntity(76U);
    msg.depth = 10788U;
    msg.avg = 0.597798544604;

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
    msg.setTimeStamp(0.130773312648);
    msg.setSource(1367U);
    msg.setSourceEntity(143U);
    msg.setDestination(41507U);
    msg.setDestinationEntity(156U);

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
    msg.setTimeStamp(0.853786271318);
    msg.setSource(7376U);
    msg.setSourceEntity(3U);
    msg.setDestination(12405U);
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
    msg.setTimeStamp(0.620355920489);
    msg.setSource(38764U);
    msg.setSourceEntity(182U);
    msg.setDestination(32770U);
    msg.setDestinationEntity(41U);

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
    msg.setTimeStamp(0.645441900328);
    msg.setSource(39001U);
    msg.setSourceEntity(206U);
    msg.setDestination(1939U);
    msg.setDestinationEntity(114U);
    msg.sys_name.assign("DDAEFEMTYNNGYGHYVDPWRNMPDGVXDSLLE");
    msg.sys_type = 246U;
    msg.owner = 60081U;
    msg.lat = 0.615193487081;
    msg.lon = 0.797312910863;
    msg.height = 0.711788372416;
    msg.services.assign("GJDTKYDIKBPHHKHSWICCUKBWEINRYGCHELYQVSYNOSZZRZECOUNVAIFDEVWDQAYBVONCXGKLHBTPFFEBGOAKWABAUWQQEPMRMTHBUIJYAJPBYXRXZLUPNQAIGJJVURPNAMFNWDCLMDUFTHNVGQJTZNUMOTZCKXSFIPRPIXVNVILOUCIJTHBMSGMRXMUVLFJPYSASGDWSWKZTERLHOAX");

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
    msg.setTimeStamp(0.480539324342);
    msg.setSource(55650U);
    msg.setSourceEntity(185U);
    msg.setDestination(21395U);
    msg.setDestinationEntity(91U);
    msg.sys_name.assign("IZYATIOVJKHYSNDJSPQEETWTFQFDTDBLAQWLQTNNNHZWXPWNLRGCWZJEZFUEYHLBLKMICOPEITZJPBMSWXFTTBIOAGBLSOXYCOSAKXKVQAGPAVAEWSRZUKFHFLB");
    msg.sys_type = 13U;
    msg.owner = 15033U;
    msg.lat = 0.0119802551096;
    msg.lon = 0.732486797758;
    msg.height = 0.0371462251635;
    msg.services.assign("PVLMWDPSOQHWGNEPZMBYEAEAHSZRKBNPQHWJIPZEXGMNXZVSMSBKFLZQTVHOSRIVJCMQYYLWLWFZACDMAZFOHBDNUXZDKMDLJTIYTLFNOQJQFROVBJCJANNCGBCKTDDXBEWVEKFUJMAHDHCIFJLKYADWQHEFETFARYPUYTUPEQWGFGXBDSOUPNKGGCOVVXAMIKPXNGGSJS");

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
    msg.setTimeStamp(0.0215786070925);
    msg.setSource(33386U);
    msg.setSourceEntity(170U);
    msg.setDestination(47031U);
    msg.setDestinationEntity(192U);
    msg.sys_name.assign("DNUYSFJVIZJHZVWMOZBZLXEXDVFYEA");
    msg.sys_type = 209U;
    msg.owner = 20678U;
    msg.lat = 0.847288652081;
    msg.lon = 0.692203177448;
    msg.height = 0.182092694352;
    msg.services.assign("RHJKOIVATPHLGEKMICNPXYJSROGTQVUSUBOBUNIXTXZQVGQZDRJBWJI");

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
    msg.setTimeStamp(0.220571131029);
    msg.setSource(51798U);
    msg.setSourceEntity(215U);
    msg.setDestination(48938U);
    msg.setDestinationEntity(199U);
    msg.service.assign("DVPABFBKGLYUDWHFSVQALDVEWFRMGVVDWQCBWRHVNAULMRTGHNBMWBDYTKRLUPOMNUESCYGOXNBSQIRNMGVFWMFPBKDNEOCEUNPLUJMQFEJEXXZKSESFTGUIATCDIPWNUBKQIYRSOTRHCRKCKDYJVJBITAXZTEHIHPTHYVVGXJ");
    msg.service_type = 157U;

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
    msg.setTimeStamp(0.881833793017);
    msg.setSource(35127U);
    msg.setSourceEntity(182U);
    msg.setDestination(13564U);
    msg.setDestinationEntity(184U);
    msg.service.assign("BPZBQKHNEPDLCJJKHYVGIGDAAMCGDTXWIYMUHETCLJERLOUBWNQMKYXZWVGPKQOARIAFTIRYZBSXUONEDVHXSXGFKDYRCZJZWAFQKWZMKSNPTKUTHUPCASDUYSXCZIKBMCNFVZJEAHQUVJGSASOWEMPVOAXBWEQRD");
    msg.service_type = 33U;

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
    msg.setTimeStamp(0.787099063993);
    msg.setSource(28535U);
    msg.setSourceEntity(226U);
    msg.setDestination(2681U);
    msg.setDestinationEntity(30U);
    msg.service.assign("ODEDRFRZXG");
    msg.service_type = 2U;

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
    msg.setTimeStamp(0.965050046823);
    msg.setSource(12940U);
    msg.setSourceEntity(139U);
    msg.setDestination(48928U);
    msg.setDestinationEntity(14U);
    msg.value = 0.704933186362;

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
    msg.setTimeStamp(0.139170396278);
    msg.setSource(60641U);
    msg.setSourceEntity(59U);
    msg.setDestination(24325U);
    msg.setDestinationEntity(121U);
    msg.value = 0.352242504695;

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
    msg.setTimeStamp(0.516383562607);
    msg.setSource(61038U);
    msg.setSourceEntity(17U);
    msg.setDestination(1524U);
    msg.setDestinationEntity(167U);
    msg.value = 0.75534693932;

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
    msg.setTimeStamp(0.997090393986);
    msg.setSource(60825U);
    msg.setSourceEntity(140U);
    msg.setDestination(63409U);
    msg.setDestinationEntity(153U);
    msg.value = 0.401347623242;

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
    msg.setTimeStamp(0.381014227083);
    msg.setSource(44676U);
    msg.setSourceEntity(110U);
    msg.setDestination(5751U);
    msg.setDestinationEntity(76U);
    msg.value = 0.632353025748;

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
    msg.setTimeStamp(0.968543381573);
    msg.setSource(6600U);
    msg.setSourceEntity(227U);
    msg.setDestination(1139U);
    msg.setDestinationEntity(220U);
    msg.value = 0.525928249726;

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
    msg.setTimeStamp(0.190220117857);
    msg.setSource(6583U);
    msg.setSourceEntity(163U);
    msg.setDestination(62810U);
    msg.setDestinationEntity(143U);
    msg.value = 0.847965968657;

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
    msg.setTimeStamp(0.45071630803);
    msg.setSource(11053U);
    msg.setSourceEntity(253U);
    msg.setDestination(48866U);
    msg.setDestinationEntity(164U);
    msg.value = 0.499589104715;

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
    msg.setTimeStamp(0.39717320931);
    msg.setSource(28522U);
    msg.setSourceEntity(34U);
    msg.setDestination(28637U);
    msg.setDestinationEntity(250U);
    msg.value = 0.979426915842;

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
    msg.setTimeStamp(0.841889138109);
    msg.setSource(13158U);
    msg.setSourceEntity(120U);
    msg.setDestination(60856U);
    msg.setDestinationEntity(148U);
    msg.number.assign("NIYZOTLGIRDHJDTPRKHINNFTFOUKESMNWSPCHPHDMQVEVZLEEXQVLTHWUJZGUZCJCDDPGIAKNBMQATGKABSPRVLUDYYYLWNHNOMGCKFTIPG");
    msg.timeout = 36082U;
    msg.contents.assign("KTDEHSAUMDOVPFTNDEBBSJMNZLBSNASFXITZUIXLZUGRQPDQOMRFBSVYRJARMYDOOWHIFWWKEFKYWEMROOJGJMDKXAUBBCVIYZPGCLCQBGXRIV");

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
    msg.setTimeStamp(0.611935225993);
    msg.setSource(19211U);
    msg.setSourceEntity(105U);
    msg.setDestination(63742U);
    msg.setDestinationEntity(87U);
    msg.number.assign("UKMZSLOAWEZSTOMPBLUNPMONYDBKUFHKCTEZXLRXIXQYSIPNSLHNPHLBSBZZQAUOUGJHOCEROIWRDUVQFHHIWNWAYEGFPYUITAMIDLQQCBNKWIEQKTADRMXKKXFJFFJYDMNNCJTTPKZHUCASYPXLYWVDXGFRXTYJIQOVFSVLRNQATWVSMKWBACULEPSHVJVRGDVBJMI");
    msg.timeout = 65123U;
    msg.contents.assign("YLOPQYOIUGDRLSPESTSUBEOGVNCEWNXKXSETDEMKCUXLXSVNCJRTLIHMBJQAVKMZI");

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
    msg.setTimeStamp(0.213018646175);
    msg.setSource(53223U);
    msg.setSourceEntity(229U);
    msg.setDestination(34565U);
    msg.setDestinationEntity(148U);
    msg.number.assign("WFMQPKBAMDSSCWRTGWFMQBIDZDIOFLDPXUQGPPBLLREVUZHBPJENYDFBZTSAATGHTZBNCWHPHHMKXVCEWFUAKBHVSEURGCRBINONNHAUJWFONJOTKAFUIALYIJST");
    msg.timeout = 9359U;
    msg.contents.assign("WOFMVSNGBDXTIJOZWMPTJSANRQKPCQZWAEANCGHUVY");

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
    msg.setTimeStamp(0.235957838989);
    msg.setSource(58931U);
    msg.setSourceEntity(139U);
    msg.setDestination(11642U);
    msg.setDestinationEntity(90U);
    msg.seq = 2085587626U;
    msg.destination.assign("HXLIXJCDTKBYMHAZVCJKZDICLRPNSVOSZGNMSIGWUSEPOUWULBMQHSSJPCBUHWGVAKCDVEDKXLWKBRDEBNHAAFOOYYMTWWRZGJPWCLRRGXEPJLYQNLFQCCLFR");
    msg.timeout = 37738U;
    const char tmp_msg_0[] = {4, 88, 0, 47, 20, 26, -2, 123, 26, -78, 117, 25, -89, 105, 40, -9, -100, 38, 88, -39, 19, 49, 59, 34, 6, -95, 67, -71, 53, -6, 77, 40, -128, 92, -33, -65, 11, -43, 34, 15, -53, 93, -66, -109, -34, 22, -56, 44, -27, 98, -117, 118, 49, -59, -80, -79, 35, 20, 53, 120, 31, 14, -123, -71, 8, -58, -78, 69, -122, 123, 94, -103, 109, 91, 14, 121, -112, 49, -18, -58, -92, -119, -12, 34, -15, -60, -82, -34, -96, 123, -120, 122, 36, 57, 82, -3, 58, 84, 48, -56, 120, -19, 100, 105, -91};
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
    msg.setTimeStamp(0.41947394546);
    msg.setSource(1678U);
    msg.setSourceEntity(128U);
    msg.setDestination(23756U);
    msg.setDestinationEntity(192U);
    msg.seq = 2219915668U;
    msg.destination.assign("HVHAXMIWJMLCRGJPFZWZEHWCRTGOCGQVMUAOEJXBXDZTZNEHVQLTGKLSCCEGWLMHXOZCVKDNZIGOOTGQMCYFTIWTBMXLSJPUAJAYUM");
    msg.timeout = 1966U;
    const char tmp_msg_0[] = {-101, 85, -4, 86, 105, -105, -65, -110, 79, 94, -111, 96, 87, -23, 0, 62, -123, -105, -31, 124, -31, 115, -6, -28, -2, -89, 113, -104, 26, 52, -75, 17, -104, -46, 42, 11, -61, 50, 9, 49, -67, -113, -105, -42, 3, 32, -51, -45, 122, -13, 46, 93, -26, -98, 98, -48, 22, 27, -54, 104, -38, 74, -72, 61, -40, -35, -113, -12, 32, 53, -40, 80, -124, -7, 67, 113, -50, -23, -14, -117, -83, 62, 25, 110, 126, -57, -22, -106, -58, 43, 26, 71, 29, -112, -22, 114, -73, 122, 32};
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
    msg.setTimeStamp(0.778441528045);
    msg.setSource(8015U);
    msg.setSourceEntity(248U);
    msg.setDestination(9604U);
    msg.setDestinationEntity(166U);
    msg.seq = 3434609357U;
    msg.destination.assign("XCPAPTQRVCNZTSPGSWGXQEOWQXAVQLOITJCMZBSALMBLDNJRSGEJFCHJEOUQBGUIKFNFUIMLRZORWFVNPYGLCJDBKJBNWJXLPYIWZFADYKODAUSKEKVEUBSAPRABESBOLPLJF");
    msg.timeout = 58309U;
    const char tmp_msg_0[] = {82, -57, -101, 29, 37, -127, -48, -80, -30, 11, -55, 12, -69, 86, -99, 42, 123, -22, -14, 84, 121, 25, -59, -119, 82, 38, 104, -12, 8, -22, -31, -72, 35, 56, -102, 108, -21, 24, -6, 36, 65, -113, -106, 70, -109, 44, 6, 115, -24, -31, 86, 107, -118, 99, 65, 35, 93, 35, 44, 29, 18, 124, 31, 18, -42, -112, 18, 63, 106, -93, 59, 28, -36, -116, 0, -26, -70, 94, -13, 47, -46, 39, -76, 95, 17, 112, 39, -68, 56, -17, 63, -113, 94, 3, 101, 82, 100, 27, 2, -53, -35, -5, -105, 72, 77, -79, 54, 101, -121, -97, -63, 17, 89, 53, -92, -41, 37, 26, 8, -50, 96, 52, -105, -59, 99, -71, -103, 84, 59, -123, 54, 21, -105, 80, -108, -32, 110, 58, -6, -81, 69, -4, -98, 73, -86, 20, 17, -65, 30, -58, -89, -29, 14, 85, 113, -11, 49, -38, 47, -91, 12, 112, -57, 104, 50, -10, -68, 44, -62, -77, -104, 125, -71, 99, 33, -91, 1, 49, 41, 60, -96, -66, -71, -122, 121, -51, -37, -7, -56, -98, -110, 25, 32, -73, -38, -76, 5, -64, -39, -86, 120, 101, 0, 86, -67, -63, 108, 126, -75, -47, -61, 45, 59, 107, -19, 83, 47, 59, 108, 37, -124, -16, -50, -126, 46, 55, 93, -26, 21, -96, -5, 86, -4};
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
    msg.setTimeStamp(0.7471277832);
    msg.setSource(15177U);
    msg.setSourceEntity(77U);
    msg.setDestination(22757U);
    msg.setDestinationEntity(64U);
    msg.source.assign("DHNBMAEVWGMDIEZXBMXWDOOTMGVKQTHUEVTPCACMNFFAKJNGOVCXVLMZTUYYRPZCOHOYWICPWREGVXGZAFNRFRCPKKAGNYCXBTJPRYQLNOMFECUOWBISIFLKWCTMYJZQQLISDXANUVXAQEDGFYBSHQWGGJWNJQWPKOFSSEQJHDRYOHJURICTKRXJYBOAUWAZKDEHAURZLPZIU");
    const char tmp_msg_0[] = {86, 94, -80, 108, 116, -128, 106, 110, 69, -98, 2, -8, -16, -27, -82, -10, 77, 80, -65, -13, -62, -69, -95, 27, -46, 62, 17, 79, 71, 95, 111, -49, 123, 9, -70, 123, 90, 39, 42, -67, 122, 121, -84, -25, -11, 116, -78, -73, 119, 51, 39, 50, 108, 9, 102, -125, 71, -63, 62, 8, 43, -38, 28, -66, 87, -128, -21, 10, -99, -66, 75, -58, -21, 50, -94, -67, -37, 63, 115, 59, 25, -119, 72, 88, -44, -48};
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
    msg.setTimeStamp(0.11374945236);
    msg.setSource(64280U);
    msg.setSourceEntity(101U);
    msg.setDestination(63231U);
    msg.setDestinationEntity(223U);
    msg.source.assign("MKQJQMRPRWINOQNNBKJWIWCZUZNVRUPADBUKSYYDXKZVHIUCILJFRMXHIBHKQBSEXVAWZEWSQCKSCBBATKYWMYAXNGS");
    const char tmp_msg_0[] = {88, 98, -41, -3, 122, 104, 38, -17, -75, 24, -125, -80, 50, 115, 65, 99, 107, 53, -105, 95, 64, -24, 1, -98, 103, -32, 47, -5, 83, -25, -41, 4, 34, -15, 41, -34, -93, -94, 35, -125, -1, 115, 79, -13, 24, 33, -12, -65, 74, -64, -108, 57, 35, 37, -102, 31, -22, -13, 89, -46, 104, 4, -89, 16, 9, 87, -92, -111, -30, 103, -22, 123, 113, 66, -46, 31, 67, 74, 60, 2, 119, 29, 125, -38, -42, -118, 88, -92, 114, -31, -5, -40, -27, -40, -76, 65, 25, 37, -16, -110, -16, 112, -7, -126, 103, 56, 51, -126, -96, 112, 7, 116, 38, -115, 22, 34, 45, 9, -32, 13, 61, -80, 75, 94, 75, -13, 70, 105, 11, -9, -118, -78, 121, -22, -49, 74, 41, 109, -28, -16, 3, -71, -105, 82, 121, -13, 63, -73, -53, 8, -128, 17, -76, -53, -75, -32, 14, 119, -103, -37, -15, 49, 36, -74, 27, 34, -56, -30, -59, -89, -34, 67, 72, 87, -50, 34, -87, 5, -103, -74, 67, 2, 22, 98, 53, 41, 54, -40, 109, -94, -76, 92, 26, -75, -128, -95, 87, -7, -94, -70, 105, -112, 36, -125};
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
    msg.setTimeStamp(0.0417584407267);
    msg.setSource(15931U);
    msg.setSourceEntity(110U);
    msg.setDestination(45059U);
    msg.setDestinationEntity(131U);
    msg.source.assign("XQPUZZWNIVDAIMJUGVRKHSGOOOZAEFOXYVNEFFWTLKFPDRUQUAAWRMPXEFQHADHTWIMCFSDNJCOTHYNZBWMQSAINYIMUASSCSGDYSGZKJXZGXGJMYLXSTXIVFCHZDIAXEBVBTLBBECESKPWKLEQJYCCBGMPOYKVHXWRCFJJMQRAMT");
    const char tmp_msg_0[] = {87, -109, 44, 125, -85, -117, 116, 24, 96, -88, 113, 83, -51, -26, 120, 55, 72, 45, 103, -77, 0, 71, 1, -63, 14, -36, -14, -63, -91, -80, 55, 33, -28, 74, 120, -20, 45, 10, 97, 46, 76, -25, 114, -2, -85, 24, 11, -73, -77, -32, -10, -103, -88, 50, -45, -51, 81, -101, 71, -6, 15, 124, 81, -72, -79, 121, -122, -67, 59, -3, -103, -81, -30, 7, -73, 10, 77, -71, 113, -17, 76, 56, 50, 42, 79, 24, -52, 29, 93, 44, -34, -99, -67, -22, -3, -112, 73, -64, -41, -84, -23, -118, -18, -110, -117, 46};
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
    msg.setTimeStamp(0.07317231286);
    msg.setSource(5447U);
    msg.setSourceEntity(19U);
    msg.setDestination(29877U);
    msg.setDestinationEntity(99U);
    msg.seq = 1957562356U;
    msg.state = 227U;
    msg.error.assign("STUPKVIVIQQFMVVRPVSDOEFD");

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
    msg.setTimeStamp(0.726574185235);
    msg.setSource(8289U);
    msg.setSourceEntity(130U);
    msg.setDestination(5138U);
    msg.setDestinationEntity(248U);
    msg.seq = 1752349947U;
    msg.state = 121U;
    msg.error.assign("LBYNRYSPQZJISMNDOEQVSSZFUZGQFGWBQDXLGZJATTMJXEFAHUQWNIXM");

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
    msg.setTimeStamp(0.395264746172);
    msg.setSource(8234U);
    msg.setSourceEntity(246U);
    msg.setDestination(1951U);
    msg.setDestinationEntity(33U);
    msg.seq = 533271386U;
    msg.state = 105U;
    msg.error.assign("FNIKNFEYVGJPOUCGKVXOWSTKRIDHKAIVWGTNRBKOGWNHIWEGEZSISJYBVGAHNRCDZYLIEZXGHIKAJJQSMWLDWZMHHDDCLAOBNLLXJXVSEHHDGADSCOUUTTOBYFCDXYNTMAQUQFVQGOXPHSURWYUYDMBKAVRWRFWBXKLMLBRVITETANPTUAYPLAZCJZFHC");

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
    msg.setTimeStamp(0.216552160179);
    msg.setSource(51193U);
    msg.setSourceEntity(217U);
    msg.setDestination(29759U);
    msg.setDestinationEntity(186U);
    msg.origin.assign("DCCHNUTSBBMOZEIDYUSPCGDNEZCHFNPAEORMDBHVRWGLPOZGKNAJSGOZI");
    msg.text.assign("ITRVUCGOPCTJHUHNSYPMHNOPNNRBSFMXRGVJIJJABJBCILZWWTVMUVTOFGZWGMELTFFULQQCICEZVYKWSIKPIBSJSCRDWMEDQXGVDGETWYCORAXAPKBRYOLWNKDXYWGYKAFIMOBIHSNBKHAGWCVPOJGKAUNYMUDPCGKBTOZLHJRXFVMDUADKHRLXXQWTXSDLQFSLZQKYELH");

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
    msg.setTimeStamp(0.35437184552);
    msg.setSource(37422U);
    msg.setSourceEntity(138U);
    msg.setDestination(44277U);
    msg.setDestinationEntity(134U);
    msg.origin.assign("HNGJNOJEKUQFVNZXNICSAQTHEPSFHQYFWTGQZQRYBIKZLMJZDMLNVZHDKFEYK");
    msg.text.assign("KXMABDMKZVPFINFJOJSQVVXJWGQDHYXOYQTAFSCNUZPOIGNPTIIFKBVZGVRUSBROHZRQSWEBTQPFTKXWJSJYLFEYHJLSONNYDQZDNWUEKNM");

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
    msg.setTimeStamp(0.574148555236);
    msg.setSource(29615U);
    msg.setSourceEntity(124U);
    msg.setDestination(22569U);
    msg.setDestinationEntity(160U);
    msg.origin.assign("OWJLXUTIGRFDVGKAIIOJAMNYJLOZEJOMGUUVDNW");
    msg.text.assign("UOCVHDCUNXIDTUDQICGWXYFRANJSJMQSVGESVTBUFEZEAXSSNVSJYXWZUFMJDPICHNVCFEAAFQPYIMLRQLSIPGTNGONWXWTBJRHAUYVHHLOKEJZBYVNLQKLAOWOWJEZFZKPADMZRPKIXRAQKFQOBZJBFNPXMRENBHHDPGDM");

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
    msg.setTimeStamp(0.516136462442);
    msg.setSource(670U);
    msg.setSourceEntity(42U);
    msg.setDestination(16474U);
    msg.setDestinationEntity(150U);
    msg.origin.assign("TSDBQIQWKAFORNKLWAAFWZFEDZJERJYMPSMOSRXBPYYKZSGPVHRWCSLPNBXOXGCOVYZBJQMHEYIMUJLCUDYUXXXFNETVUBWFQAWKGCTTCVPMSDTO");
    msg.htime = 0.0795752320106;
    msg.lat = 0.391914247933;
    msg.lon = 0.564699364743;
    const char tmp_msg_0[] = {74, -109, -17, 91, -37, -89, 5, 21, -25, -14, 9, 75, -110, -109, -93, 28, -125, 65, -76, 104, 84, 88, 40, -75, -89, -81, 72, -56, 95, 50, 59, 0, -106, 30, -21, 68, 20, -128, -11, 50, -50, 30, 98, -51, 59, 101, 43, 98, -1, -66, -89, -46, 113, -30, -111, -78, -114, 73, 88, 105, -76, -79, -94, -124, -105, 103, -9, 85, 24, 54, 95, -116, -118, -69, -63, -13, 3, 0, -31, -84, -104, -60, 96, -54, 31, 91, 31, -86, 80, -65, 25, 65, -127, -17, -99, -62, -30, 79, 43, -59, 42, -101, -75, 35, -39, -56, 79, 5, -29, -4, 98, -120, -101, -107, 41, -51, 120, 38, 91, -72, 17, -68, 33, 118, 11, 125, 101, -40, 7, 22, -56, -113, -52, -71, -82, 109, -97, -89, 107, -42, 39, -39, -47, 2, -25, 10, -114, -17, 125, 1, 58, -104, -97};
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
    msg.setTimeStamp(0.673092861388);
    msg.setSource(60677U);
    msg.setSourceEntity(68U);
    msg.setDestination(19212U);
    msg.setDestinationEntity(82U);
    msg.origin.assign("GQCBJSXIOSKLNRPECWLZRFIVXHLUMOWWJRKTMDWGANAIQHZVCMCAVPJRVFZOJSHOVQDULKSGQYZJTYQAXDYNVGGCEAYNKQBPTNVURIWMPYFUVNQCJZHRZTAZFWUBLCXRSZM");
    msg.htime = 0.21830010105;
    msg.lat = 0.0668038831116;
    msg.lon = 0.771388771172;
    const char tmp_msg_0[] = {-61, 58, 90, 105, -41, 91, -63, -78, -85, 96, 115, -77, -99, -69, 41, -45, -36, 66, 6, 70, 114, -34, -86, 8, -18, 78, 84, -4, -110, -79, -14, -6, 48, -109, -59, -110, -106, 68, 45, 123, -65, -126, 13, 87, -88, -7, -80, -122, 14, 65, 98, 124, -34, -76, 52, -62, -121, 58, -5, 118, -9, -107, 57, -15, -19, -5, 17, -35, -37, -4, -54, 38, 95, -60, -94, 84, 115, -94, 53, 52, -69, 57};
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
    msg.setTimeStamp(0.838193428992);
    msg.setSource(40547U);
    msg.setSourceEntity(126U);
    msg.setDestination(60117U);
    msg.setDestinationEntity(222U);
    msg.origin.assign("BSGHQAQVDJYXCATJJIEAVJURMTHHSRXEPDFFLZVFOFZNKKGNLVUTEFUSBMEZLRZPLPJHKBKWNPONOWGMYLMJIWVQCTIRVUFZWDKBPYLANYYFCJHIJCJPCZYYBQKSNMXBEQXHVOSBDMCHOUGMXIWUTNTURGGWUSDOAVMAVSDBGUFCCYTTOKQISXGJWMEBATYHGDEQLFBTDHZLX");
    msg.htime = 0.828114271284;
    msg.lat = 0.490791101974;
    msg.lon = 0.14785057701;
    const char tmp_msg_0[] = {-125, -27, 101, -95, 76, 110, 67, 67, -71, -2, -83, -8, -100, -107, 11, 35, 8, 57, 1, 51, 36, 10, -87, 20, 119, 77, 32, 107, -87, 29, -64, 2, -65, 45, -45, 77, -35, -113, -47, 56, 73, -8, 73, 10, 6, 63, 18, 47, 40, 3, 50, 97, 65, -127, -79, 116, -56, -9, 121, -56, -58, 123, -80, -2, -2, -120, -86, 28, 67, 21, 26, 110, -2, -105, -8, -118, 110, -27, 52, 41, 68, -18, -75, -16, -115, 76, -125, -15, -38, 126, -111, 18, -98, -17, -60, 52, -69, 123, 84, 5, 4, 94, 13, -68, 119, -67, 2, -112, -37, -61, 88, -81, 64, -16, 102, 1, 6, 83, -79, -113, 32, -95, 64, 90, 113, 57, 58, -64, -7, 110, -21, -113, 111, 53, -127, -45, -44, -126, 112, -96, 118};
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
    msg.setTimeStamp(0.538010301106);
    msg.setSource(53513U);
    msg.setSourceEntity(42U);
    msg.setDestination(53913U);
    msg.setDestinationEntity(64U);
    msg.req_id = 41880U;
    msg.ttl = 8277U;
    msg.destination.assign("AQUKQGYTQPOAGLDDICSYESYELVZHZKBMIGTTZHXEERGBXVTVSAEJCEYHRHLYVFDRLICKPCIREUVZQZJWOH");
    const char tmp_msg_0[] = {-100, 117, 55, 65, -100, -111, -34, -34, 93, -119, 45, -73, -43, -34, 115, -42, 41, -18, 75, 80, 83, 38, 0, 87, -54, 80, -4, 104, 43, -41, 73, -83, 17, -61, -58, -109};
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
    msg.setTimeStamp(0.596307113515);
    msg.setSource(10928U);
    msg.setSourceEntity(213U);
    msg.setDestination(8374U);
    msg.setDestinationEntity(40U);
    msg.req_id = 41012U;
    msg.ttl = 23515U;
    msg.destination.assign("QWCRNHSAYUHLMJFMKMFOBWTHHBPYDBWPBSYRBHVRZQYWFHLJEHWXLZAKDTRSKGLIUIVUMGGSBBEKXPZANDHGLTVVBQTPRMEJEXKCTRCOMEGPSFTNUJUSSX");
    const char tmp_msg_0[] = {-28, -47, 98, -98, -98, -72, 122, -66, 84, 44, 24, 14, -49, 83, -86, 9, 35, 49, -96, -82, -105, 37, 40, -33, -121, 22, -4, -13, -97, -89, 27, -34, 4, -22, 33, -27, 77, -55, -109, 27, -42, 9, -27, -10, -119, 109, 30, -41, 106, -4, 126, -21, 0, -121, -112, -11, 121, -45, 0, 124, 49, 21, -69, 25, -66, -101, -67, -42, -95, -90, 93, -31, 65, -100, 80, -48, 7, -122, -65, 87, 13, -13, 63, 61, 59, 30, -125, 100, -61};
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
    msg.setTimeStamp(0.631864582848);
    msg.setSource(22320U);
    msg.setSourceEntity(55U);
    msg.setDestination(15900U);
    msg.setDestinationEntity(179U);
    msg.req_id = 16021U;
    msg.ttl = 56699U;
    msg.destination.assign("BQPNHFGPMZNMSAMWJYQTWPLLVPAPERMGBBUECNJULIEHYFADVONVCJZNDGMLKHHJRNVDALHCKYIIQXZRYFAYRKHBVKDJOEBTKNUPVCBIOCYZBZMLHPUEXSHEYIGOVDITOMJCCTFRXUSAAXIQXSKRAAEGQGJZYXSCSWRWTLWTXFTFZKYWUEGXVTDXUFDORAOSMUJPJGUDGCLDOQKQRLTNRFWBDVQCGMBPIXZHENJBQN");
    const char tmp_msg_0[] = {85, 80, 5, -16, 97, 46, -47, 33, 18, -128, 35, -96, -19, -106, 13, 126, -124, -60, 78, 82, 52, -58, 70, -3, -54, -112, 98, 7, 31, 23, -78, -111, -99, 38, 58, -2, -11, 37, 49, 60, -89, 76, -77, 27, 76, -10, 24, -1, 121, -116, 13, -46, 31, -128, 58, 30, 108, 4, -77, 114, -55, -111, 25, 33, 40, -105, 94, 96, 74, 114, 104, -5, -12, 50, 106, 118, 65, 110, -47, 67, -52, 27, -3, 70, -25, 33, -47, -54, -108, -9, 3, 119, -128, -123, -123, 94, 38, 109, -28, -9, 24, 33, 14, 11, 108, -89, 97};
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
    msg.setTimeStamp(0.186544266668);
    msg.setSource(39190U);
    msg.setSourceEntity(166U);
    msg.setDestination(18941U);
    msg.setDestinationEntity(229U);
    msg.req_id = 65290U;
    msg.status = 50U;
    msg.text.assign("RVHIADBSLEUYCRXYRLCHTFAYFQLKWHGIIAMDPNORWVIAGNUDUBLMZWOJCIIHVACOQOZKGQWBOGUMRKBNYGK");

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
    msg.setTimeStamp(0.697796393346);
    msg.setSource(32297U);
    msg.setSourceEntity(63U);
    msg.setDestination(5755U);
    msg.setDestinationEntity(207U);
    msg.req_id = 8739U;
    msg.status = 10U;
    msg.text.assign("JLJOBEAXFCLKLDDVHRNLIUYQUQNSHESQIOUPLSHGLYOZMGTMVVEGJAISOTABPEYDOSTDCXUBZFFCSJUVXFGVTRN");

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
    msg.setTimeStamp(0.0825273191493);
    msg.setSource(44792U);
    msg.setSourceEntity(193U);
    msg.setDestination(11047U);
    msg.setDestinationEntity(216U);
    msg.req_id = 58564U;
    msg.status = 169U;
    msg.text.assign("VORJTJCXMNRNLVSNYCDHCKUJTGDGGNDRPKYTZH");

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
    msg.setTimeStamp(0.0368683939256);
    msg.setSource(50562U);
    msg.setSourceEntity(92U);
    msg.setDestination(22131U);
    msg.setDestinationEntity(217U);
    msg.group_name.assign("VABJYGOUYGEVYNZENEAKXDBWEHPSNATTFWXRNEJACBPZHPJAUIFRTGJIYROEMTGCQMVHHIHDDXFCZXIUOKNFFLXMDPDKSRWKFSOAEHGNMUNNZQEXPRNNQJYFKAZGDDOSKGJMYSBMQMDTOBZBILXAQIJISQQILLKCCAHJWKHGFOKSULZBTWHPVWFICTWIQWUWLEVYYURBUYJAEHZBVDQVOMZSLBTC");
    msg.links = 2410524277U;

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
    msg.setTimeStamp(0.614085267621);
    msg.setSource(21344U);
    msg.setSourceEntity(174U);
    msg.setDestination(37697U);
    msg.setDestinationEntity(94U);
    msg.group_name.assign("YKROCAYSRROIQIGMDKPHBECGPNXOCYIJQNBMPHFWFWGTSXOSMXNINFXPDQVMUCHOTXLLJUJNLUBGUGVEIGQXRGZPVLGWZKRBWAQJNUYNRVCERVCRUQRJXTCLKGPVVOVIMQZTZLDYLZMHFSDJASBQBEZLAEAZNFSOFZXHHDPAIBNYPHMKTWFEDPWBRZY");
    msg.links = 1729245561U;

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
    msg.setTimeStamp(0.318893088815);
    msg.setSource(50490U);
    msg.setSourceEntity(87U);
    msg.setDestination(46861U);
    msg.setDestinationEntity(37U);
    msg.group_name.assign("FGSOOTEOTQOSWAUKPUKGWBYHQHVGSACHSJNCADJAGBUTDGYXTVVONCPNWZNQEHIPLHTRAGGFHQDYCDMMACIWRKLIXNXZOWELTDJMHSMHSQWLXHPKZQFCMJNPSWRWINTMXXTXROMIGRPJIWEIVGKBBLTECRCPSVHYVDUKEFZQBFJIXZCFEQRUBQSEZFNLZUJKNVKAFBVKYULFXNBVRUJQYA");
    msg.links = 3388172406U;

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
    msg.setTimeStamp(0.393283139218);
    msg.setSource(38984U);
    msg.setSourceEntity(72U);
    msg.setDestination(7761U);
    msg.setDestinationEntity(17U);
    msg.groupname.assign("EMCKMUXHMEBAOHFWPFMRRISHXOXPAYASEWWEMIXPKOASVSXWJIJZSVVQBZNXIUTFRPDFFPHBUKFDIGOZUEHJDRZTLJCVNGCPLMRNGUHFMPDBLLVLSRCUTANJOIIRNTQCWB");
    msg.action = 183U;
    msg.grouplist.assign("WZVWETJGYEHTFFCRFHCWXRNUPLKYNKYRDEQJPIAFELGRSWRQENLXYDVOVNAPDZMKMEHVSHHNRZPHXVJBFGHMZPFZASGJADIQCAUBIKBRVDUZBAXKDEBXQLWTPUTQJLGSPVSXMJBPLDGJAJNQRCMSHGWGYWCWUIITSXLADUYNAWBYS");

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
    msg.setTimeStamp(0.898300219324);
    msg.setSource(48680U);
    msg.setSourceEntity(7U);
    msg.setDestination(6577U);
    msg.setDestinationEntity(60U);
    msg.groupname.assign("OMLWVGNHJHROIRMVFKHZIMMGS");
    msg.action = 3U;
    msg.grouplist.assign("OSHMLYJVDPILSWZMFQMUJLUIUARYERCXYDOJEYLTXMVRYIQBRFWNPHR");

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
    msg.setTimeStamp(0.491223913748);
    msg.setSource(34792U);
    msg.setSourceEntity(236U);
    msg.setDestination(16482U);
    msg.setDestinationEntity(102U);
    msg.groupname.assign("OLPMXYYBDAMAUISOVMRKJXVUJNWKPFJRHCMLEDPENFZKZKGRVUACRWSTSSWZTWSOBVJAWZAXZKCLHUXTVARMYICGDOCPQQLJUONVDFQLNBVPNXXCJRXHLMIGLQKZDSMJDDPHTPRGFU");
    msg.action = 133U;
    msg.grouplist.assign("YTKLBTOUVSGXTJFULSYWCAVSFDQEAFCWMRIHDVKBLPBNASNYIZJEOCOQUGDXNNPHOUHPAGKSFMNWLTOXVLWDOYXCKPDEVJSBKPZDOTMUMMHGCPWCWLQEBPIZYEJIJZOIVHDJLEWABHRLXAGMQZZIJRJSORZXUYFUMLENVGE");

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
    msg.setTimeStamp(0.0997648716861);
    msg.setSource(35819U);
    msg.setSourceEntity(35U);
    msg.setDestination(60442U);
    msg.setDestinationEntity(86U);
    msg.value = 0.334972187298;
    msg.sys_src = 63787U;

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
    msg.setTimeStamp(0.00260973775615);
    msg.setSource(14026U);
    msg.setSourceEntity(42U);
    msg.setDestination(6135U);
    msg.setDestinationEntity(76U);
    msg.value = 0.723012812557;
    msg.sys_src = 52457U;

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
    msg.setTimeStamp(0.595421683465);
    msg.setSource(14455U);
    msg.setSourceEntity(231U);
    msg.setDestination(56842U);
    msg.setDestinationEntity(240U);
    msg.value = 0.857586705566;
    msg.sys_src = 4275U;

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
    msg.setTimeStamp(0.244473400557);
    msg.setSource(49684U);
    msg.setSourceEntity(40U);
    msg.setDestination(27281U);
    msg.setDestinationEntity(145U);
    msg.value = 0.29802672497;
    msg.units = 124U;

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
    msg.setTimeStamp(0.421393689533);
    msg.setSource(13458U);
    msg.setSourceEntity(139U);
    msg.setDestination(48909U);
    msg.setDestinationEntity(2U);
    msg.value = 0.692567702655;
    msg.units = 115U;

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
    msg.setTimeStamp(0.244427187379);
    msg.setSource(60569U);
    msg.setSourceEntity(129U);
    msg.setDestination(6494U);
    msg.setDestinationEntity(169U);
    msg.value = 0.00935884563709;
    msg.units = 159U;

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
    msg.setTimeStamp(0.212581982698);
    msg.setSource(33319U);
    msg.setSourceEntity(198U);
    msg.setDestination(50736U);
    msg.setDestinationEntity(167U);
    msg.base_lat = 0.663859009238;
    msg.base_lon = 0.95659222253;
    msg.base_time = 0.206222400038;
    IMC::RemoteCommand tmp_msg_0;
    tmp_msg_0.original_source = 40617U;
    tmp_msg_0.destination = 53462U;
    tmp_msg_0.timeout = 0.15513486026;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.259972315856;
    tmp_tmp_msg_0_0.speed_units = 48U;
    tmp_msg_0.cmd.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.0168128998239);
    msg.setSource(16009U);
    msg.setSourceEntity(212U);
    msg.setDestination(31931U);
    msg.setDestinationEntity(176U);
    msg.base_lat = 0.667351598955;
    msg.base_lon = 0.0643649286514;
    msg.base_time = 0.307851682467;
    IMC::HistoricSample tmp_msg_0;
    tmp_msg_0.sys_id = 7071U;
    tmp_msg_0.priority = -81;
    tmp_msg_0.x = -8110;
    tmp_msg_0.y = 17510;
    tmp_msg_0.z = -13921;
    tmp_msg_0.t = 10797;
    IMC::WaterDensity tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.181068556902;
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
    msg.setTimeStamp(0.590298972077);
    msg.setSource(47204U);
    msg.setSourceEntity(128U);
    msg.setDestination(64274U);
    msg.setDestinationEntity(85U);
    msg.base_lat = 0.250512567881;
    msg.base_lon = 0.920405834396;
    msg.base_time = 0.875343559495;

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
    msg.setTimeStamp(0.738123239691);
    msg.setSource(39991U);
    msg.setSourceEntity(192U);
    msg.setDestination(40419U);
    msg.setDestinationEntity(92U);
    msg.base_lat = 0.529161135368;
    msg.base_lon = 0.0677805527634;
    msg.base_time = 0.801184532045;
    const char tmp_msg_0[] = {-3, -17, 2, -103, 43, -60, 123, 83, -20, 41, -84, 67, 97, -87, -120, 78, -30, 12, 34, 119, 115, 75, 79, -111, -58, -109, -124, -117, 99, -67, -83, 41, 124, 27, -48, 38, -104, 38, 98, -115, 120, -44, -59, -109, -64, -19, -117, 45, 68, -72, 8, -28, -9, 24, 69, -80, 16, -100, 109, 77, -31, 22, -76, 8, -102, -42, -3, 120, 34, -65, -60, -104, -108, 49, 9, 6, -29, 32, 1, -87, -71, 90, 58, -106, -95, 18, 123, 1, 38, 105, 10, 85, 96, -59, -108, -114, 46, -81, -27, -46, 80, -104, -34, -19, -51, -95, -126, -15, 21, 20, -128, -70, -104, 86, 24, 58, -53, 1, 53, 113, 126, 90, 50, -33, -79, -60, -20, -37, 49, 21, -93, -85, -10, 3, 37, -112, 23, -113, -62, 32, -59, -63, 58, 11, 59, 110, 49, 16, -128, -47, -14, 44, -33, -89, -115, 39, 75, -15, 112, -72, -15, -42, 67, 89, 39, -23, 91, 11, -44, 72, -124, -82, -32, -91, 82, 57, -44, -38, -49};
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
    msg.setTimeStamp(0.294077237992);
    msg.setSource(10740U);
    msg.setSourceEntity(14U);
    msg.setDestination(17006U);
    msg.setDestinationEntity(3U);
    msg.base_lat = 0.598108658889;
    msg.base_lon = 0.87133063663;
    msg.base_time = 0.21901983273;
    const char tmp_msg_0[] = {-65, 126, -70, 109, 107, 11, 110, 17, 64, -25, 76, 65, -70, -98, 69, 107, -92, 26, 120, 106, -40, -76, 36, 124, 39, -21, 43, 100, -123, 108, -104, -104, 54, 5, 97, -48, 82, -25, 68, 126};
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
    msg.setTimeStamp(0.855937445901);
    msg.setSource(19111U);
    msg.setSourceEntity(53U);
    msg.setDestination(22624U);
    msg.setDestinationEntity(18U);
    msg.base_lat = 0.726146409748;
    msg.base_lon = 0.270510660781;
    msg.base_time = 0.969774550263;
    const char tmp_msg_0[] = {-58, 2, -29, 11, 60, -47, -101, 118, -110, -33, -96, 125, 115, 68, -108, 89, -7, 4, 88, -47, 12, -92, -115, 63, -48, 112, 115, 42, 55, 124, -24, -46, -14};
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
    msg.setTimeStamp(0.562131237408);
    msg.setSource(18052U);
    msg.setSourceEntity(55U);
    msg.setDestination(8539U);
    msg.setDestinationEntity(188U);
    msg.sys_id = 56650U;
    msg.priority = 86;
    msg.x = -25819;
    msg.y = 5453;
    msg.z = 14351;
    msg.t = 8163;
    IMC::CompassCalibration tmp_msg_0;
    tmp_msg_0.timeout = 4798U;
    tmp_msg_0.lat = 0.0668562702008;
    tmp_msg_0.lon = 0.398318693028;
    tmp_msg_0.z = 0.875095861103;
    tmp_msg_0.z_units = 230U;
    tmp_msg_0.pitch = 0.639367203335;
    tmp_msg_0.amplitude = 0.780936656749;
    tmp_msg_0.duration = 62528U;
    tmp_msg_0.speed = 0.633343909198;
    tmp_msg_0.speed_units = 221U;
    tmp_msg_0.radius = 0.852863138132;
    tmp_msg_0.direction = 107U;
    tmp_msg_0.custom.assign("ARQQNQIBHEMRCJAVSHE");
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
    msg.setTimeStamp(0.292037327089);
    msg.setSource(16090U);
    msg.setSourceEntity(175U);
    msg.setDestination(19622U);
    msg.setDestinationEntity(95U);
    msg.sys_id = 42733U;
    msg.priority = -42;
    msg.x = -22773;
    msg.y = -13547;
    msg.z = -30939;
    msg.t = 11456;
    IMC::Map tmp_msg_0;
    tmp_msg_0.id.assign("EXBXXESXTCCNVTEINYBIMARHFPQMTMNDNQGUSCQCFHGGNQOJSHUTGXBCXJJDHFPXKHPRDZVJTKHPJTBJDWTVOGVDYQQIJOFMILWZRNWSFUYFHWLLY");
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
    msg.setTimeStamp(0.333901539937);
    msg.setSource(44416U);
    msg.setSourceEntity(110U);
    msg.setDestination(30995U);
    msg.setDestinationEntity(57U);
    msg.sys_id = 63152U;
    msg.priority = -105;
    msg.x = -21744;
    msg.y = 24883;
    msg.z = 14884;
    msg.t = 13101;
    IMC::PlanTransition tmp_msg_0;
    tmp_msg_0.source_man.assign("PBBLSGPTENATCHUOYUZZSQPXONAFCHCXJLSUWFGBXWIYRDYBDXQIMBHWTEKOMNMEPWIEANKDSDAHCXULTBOKKFZQSAHLMROPJTZRYDWTUXSJSMICEUDKMEDANJCRTYLVICKTWQHWZVZRPZEWVXPQVJLCAEHCTOQNIFLVFZGFVQKNYWLHRVBPVWBFVMXGOSAIKFPBUUMJHPUBHJXQKEOYRQJVYYZKGMQDU");
    tmp_msg_0.dest_man.assign("VYQYXPFCSUPJIOHOSKGAGDEKTFPQVLEFDVRAYPJIUAQEQZSTIZWUQJAFXTBGGVYPTADIGYVURRCEFRIZFAZMRA");
    tmp_msg_0.conditions.assign("CVTPFCTUPTGXBJNWEWZOOIJZGTQECXMVZKJRKHXLSKFONOAVSDNRVISBNENOXDPYXETRLELEZBRQHDQJUBSMQGULQWLTMVIOOQSCYGSMRDMHDPAALCOTGAVYSWXVMJR");
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
    msg.setTimeStamp(0.0760153046757);
    msg.setSource(5656U);
    msg.setSourceEntity(73U);
    msg.setDestination(62860U);
    msg.setDestinationEntity(22U);
    msg.req_id = 46325U;
    msg.type = 206U;
    msg.max_size = 7387U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.185126739418;
    tmp_msg_0.base_lon = 0.409341307025;
    tmp_msg_0.base_time = 0.590060466764;
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
    msg.setTimeStamp(0.344226305571);
    msg.setSource(58217U);
    msg.setSourceEntity(131U);
    msg.setDestination(20906U);
    msg.setDestinationEntity(215U);
    msg.req_id = 43606U;
    msg.type = 64U;
    msg.max_size = 1411U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.149220685398;
    tmp_msg_0.base_lon = 0.119975658962;
    tmp_msg_0.base_time = 0.656321359161;
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
    msg.setTimeStamp(0.826461688994);
    msg.setSource(58099U);
    msg.setSourceEntity(55U);
    msg.setDestination(46457U);
    msg.setDestinationEntity(251U);
    msg.req_id = 26561U;
    msg.type = 243U;
    msg.max_size = 14675U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.575238838447;
    tmp_msg_0.base_lon = 0.504287033867;
    tmp_msg_0.base_time = 0.3779670218;
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
    msg.setTimeStamp(0.230023270113);
    msg.setSource(39345U);
    msg.setSourceEntity(246U);
    msg.setDestination(53285U);
    msg.setDestinationEntity(140U);
    msg.original_source = 10304U;
    msg.destination = 38461U;
    msg.timeout = 0.404675286569;
    IMC::SmsStatus tmp_msg_0;
    tmp_msg_0.req_id = 3122U;
    tmp_msg_0.status = 132U;
    tmp_msg_0.info.assign("EKLUCSYWMOIILIHCOMJYYCGSQUFMESPRMERFQELFGCUCTJWTKUUVQLQPGAJYKHOKHOBPXNGYPVCGXXTGJZSCSZZLRVNONWKVDBNGZWWASPMQNAVRAMZHPAMBUUYFPBK");
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
    msg.setTimeStamp(0.920933077839);
    msg.setSource(10370U);
    msg.setSourceEntity(253U);
    msg.setDestination(26235U);
    msg.setDestinationEntity(98U);
    msg.original_source = 2293U;
    msg.destination = 47833U;
    msg.timeout = 0.133718965013;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.782986150215;
    tmp_msg_0.speed_units = 219U;
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
    msg.setTimeStamp(0.347160820822);
    msg.setSource(4804U);
    msg.setSourceEntity(58U);
    msg.setDestination(49563U);
    msg.setDestinationEntity(1U);
    msg.original_source = 26734U;
    msg.destination = 30839U;
    msg.timeout = 0.187587267735;
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("QXKGMJGWHOGPRXFCCZNTFQMCSKEGUEIRZKIQVUPEZBJHFNJOWJYKFEJBKJAWIAUWGXPBPKDTTCZEVXHTLBY");
    tmp_msg_0.feature_type = 233U;
    tmp_msg_0.rgb_red = 96U;
    tmp_msg_0.rgb_green = 103U;
    tmp_msg_0.rgb_blue = 40U;
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
    msg.setTimeStamp(0.285827647163);
    msg.setSource(12321U);
    msg.setSourceEntity(139U);
    msg.setDestination(31606U);
    msg.setDestinationEntity(120U);
    msg.type = 88U;
    msg.comm_interface = 34296U;
    msg.model = 2032U;
    msg.list.assign("BCGDOCZZLIVJCNHZMZBDOYRIKYSRYIPIIQSSXKNQIEAGURXGPXLGNAOTTCVTMGRBFFWHSGOVFFSWTOKDUZYFVTRWMVYLHYLUPHGPOBEPQQHWDXJPBACFEYQGEXJZNVHPBFSUCXBERONECKHOIUIQNLWMOPAJANNTRKMJZCLJPJHGPVVDXNQTMQMZFDNIFWYSOITAZDLGTBULKJHXEXWJRRQTWRXSUBMFUSKKLHALABMKCZEYVEWAACJVYUKSEQ");

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
    msg.setTimeStamp(0.849795580883);
    msg.setSource(59420U);
    msg.setSourceEntity(15U);
    msg.setDestination(38204U);
    msg.setDestinationEntity(106U);
    msg.type = 207U;
    msg.comm_interface = 51081U;
    msg.model = 60529U;
    msg.list.assign("BMIZBVDOASSOMKBWSZWOVWEJRCAONHKDCRJQJZFWROUVJZPHRWCOYFWPMAJXJIQPDDRIYQYYPGTPYNFUHFRNYFBRQ");

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
    msg.setTimeStamp(0.537739584978);
    msg.setSource(22986U);
    msg.setSourceEntity(218U);
    msg.setDestination(20000U);
    msg.setDestinationEntity(194U);
    msg.type = 204U;
    msg.comm_interface = 27387U;
    msg.model = 8637U;
    msg.list.assign("IJPOAYHHAZLELDQKFKEHFEFYLTPUHURKFZAICSMOFBOYUPDHXCBPXRUKGRPTNVFKEEBXGQJVPSZYXUNWYDGIRPWEVJNCNLOBVNQFBBJMVTSUVLWRQJCSIMEGQLOHDGWD");

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
    msg.setTimeStamp(0.0210942581774);
    msg.setSource(33164U);
    msg.setSourceEntity(128U);
    msg.setDestination(63386U);
    msg.setDestinationEntity(101U);
    msg.type = 39U;
    msg.req_id = 3674483130U;
    msg.ttl = 43311U;
    msg.code = 98U;
    msg.destination.assign("BTFCQKCYXVWFEJPVGAZCYIQMEGQVBEEHVAASPOUCDGJOLRBUSUXDECYAIQTWTOWQEGKCXSZDITQLJRHXJZBFDZNMRFJPSAJHNIGDVOKEBOVQNIYDWNUGHORDNLDTRPOEAWAKWMQJYSLUIMJFKRPBYXNSYPADTDMKZAMVPJNNFYVLOQFLRXUQXMSOMGELPGUHNTHRBZOBWLAZIFUPGWFBSCKXTIZYHKBIUSIURTEWSH");
    msg.source.assign("RKTERPDFYFBQDKRHPXJLHDOOHGBSQEJMMNQWLVJYZGXCTNBNITC");
    msg.acknowledge = 45U;
    msg.status = 240U;
    const char tmp_msg_0[] = {-113, -106, -42, 109, 108, 19, -103, 42, -18, -19, 83, 16, -38, 52, 125, 54, 17, -79, -14, -127, -106, 15, -7, -6, -95, -99, 78, 105, -115, 39, -44, -37, 36, 16, 30, -37, -127, -72, 88};
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
    msg.setTimeStamp(0.132552126957);
    msg.setSource(215U);
    msg.setSourceEntity(79U);
    msg.setDestination(17226U);
    msg.setDestinationEntity(215U);
    msg.type = 123U;
    msg.req_id = 86369493U;
    msg.ttl = 44266U;
    msg.code = 128U;
    msg.destination.assign("HGQDPZARONRRDGIPIBUWMGQCKXZPWJIQYCMWMWKFIZNLOTECNDUBTVVSACJUEANTHLOWXBFGMQROZBCYCSDZIXIXFBPIVKPLSF");
    msg.source.assign("CHLOETIHNQTQALCLDEJMNOUADDRBRXGWNKSTFXKVJBVUMAWUMCOCLRCDWYXWMUFTASVUNSSOXGIMNDYOQTRNKMECLPNIZOYYGVZVXMHKRMWAPSRYBSQEABIGFZDCJWJHJANBVLFFQCGBYGWQSDCRXPZEHCLZWHXKPDTHRFEIUTDJGFIEBGPPYOSIFOFEKUNEPMOTGFPWPBQBKSSWNYQLYK");
    msg.acknowledge = 60U;
    msg.status = 70U;
    const char tmp_msg_0[] = {44, -106, -90, 106, -13, 29, 33, 1, 73, 67, -71, 120, -40, -103, 87, -33, 100, -67, 122, 19, 68, -4, 101, 117, 41, 68, 81, -38, -63, 63, -67, 95, -32, 23, -39, 26, -28, 73, 10, 4, 87, -87, -102, 24, 91, 9, -65, 51, 0, -61, 35, 72, 83, 17, 75, 93, -60, -103, -77, 0, 58, 65, 72, 94, 58, 17, 94, -20, -107, 104, -83, 112, -45, -83, 20, 68, 72, 23, -106, 86, 81, -95, -114, -121, -18, 26, -8, -80, 36, 109, 39, -68, -52, 84, -44, 79, 57, -36, 23, 44, -75, 100, 47, 8, -85, 99, 107, 24, 71, -38, -86, 119, 41, 100, 125, 113, 23, 98, 23, 4, 106, -60, 39};
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
    msg.setTimeStamp(0.679334562943);
    msg.setSource(57036U);
    msg.setSourceEntity(42U);
    msg.setDestination(64057U);
    msg.setDestinationEntity(1U);
    msg.type = 38U;
    msg.req_id = 2642513029U;
    msg.ttl = 1576U;
    msg.code = 179U;
    msg.destination.assign("GPJSPLKAQXVHFWNPETQQVNAGPXRTPLGXUGXSFMUOHCMWLCEEFZCWOBNXEGOK");
    msg.source.assign("XIAQLOJVGNGZDXXUYDUYKAEYQPKUYXHZMCDRHQNUTXQCNKUAFWLJNBOHOFXCTAIIOMCNBPKBGTPSEFVSVJEPNHEEDQOSHZWQWADMYZEHOPRAJMTMHQYPEIKWLXCUOGLWASVWJFXTPFWSUNQMKZTMZOGIKIFDCELMRHJBTUBJPAVZNRDPFFASVBSPGZXLGRKFYMVJWDJCEST");
    msg.acknowledge = 84U;
    msg.status = 14U;
    const char tmp_msg_0[] = {-88, 66, 96, 84, -125, -26, -20, -70, -46, -4, 93, -103, 56, 107, -75, -128, 75, -12, 12, -103, 15, -28, -116, 55, -74, -127, -78, -102, -45, -81, -18, -64, -100, 109, 30, 86, -70, 102, 110, -15, 4, -19, -118, -118, -12, -112, -31, -105, 19, 101, 107, 27, -70, -83, -32, 63, 105, 87, -74, 25, -122, -68, -95, 79, -39, 71, 111, -4, -79, 102, 75, -60, -95, -17, -127, 95, -45, 52, 112, 26, -117, -6, 97, -5, 63, -25, -92, 29, -68, 37, 125, -12, 96, 13, 118, 121, -122, 123, 45, 99, -105, 107, 29, 100, 114, -92, 57, -6, 89, 56, 113, 97, -20, 39, -23, 27, 77, -47, -78, 64, 34, -99, 60, 86, 81, -30, -116, -31, 9, -24, 9, 6, -70, 26, 3, -63, 67, -55, 109, 64, 112, 97, -81, 34, -2, 72, 38, 30, -34, 39, 77, 93, -94, -65, -66, 118, 100, -44, 58, 76, 58, 62, 32, -36, -18, 2, -50, -20, 9, 9, -8, 76, -86, 35, -80, -6, 83, -12, 100, 0, -9, 9, -2, 23, 45, 104, -8, 108, 110, 29, 122, 26, 29, 47, 87, -4, 54, -86, -66, -39, 125, 25, 53, 119, 25, -50, 9, 20, 62, -75, 45, 29, -40, 88, 92, -8, -104, 15, 101, 125};
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
    msg.setTimeStamp(0.225155790643);
    msg.setSource(48619U);
    msg.setSourceEntity(174U);
    msg.setDestination(36586U);
    msg.setDestinationEntity(136U);
    msg.id = 24U;
    msg.range = 0.209836848103;

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
    msg.setTimeStamp(0.239887996118);
    msg.setSource(8396U);
    msg.setSourceEntity(129U);
    msg.setDestination(49920U);
    msg.setDestinationEntity(0U);
    msg.id = 225U;
    msg.range = 0.617647889124;

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
    msg.setTimeStamp(0.508835604138);
    msg.setSource(7558U);
    msg.setSourceEntity(84U);
    msg.setDestination(43718U);
    msg.setDestinationEntity(239U);
    msg.id = 157U;
    msg.range = 0.654340330599;

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
    msg.setTimeStamp(0.222976771654);
    msg.setSource(63156U);
    msg.setSourceEntity(210U);
    msg.setDestination(47774U);
    msg.setDestinationEntity(197U);
    msg.beacon.assign("HWAMLPNTXJGOJKMADIIDUNSWDWIIHSKLZOTIJSSAQALFJTHNQRKXXXUHBIKNNEMDUJUO");
    msg.lat = 0.43450646366;
    msg.lon = 0.613546607021;
    msg.depth = 0.141432307987;
    msg.query_channel = 30U;
    msg.reply_channel = 147U;
    msg.transponder_delay = 59U;

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
    msg.setTimeStamp(0.227687800879);
    msg.setSource(17080U);
    msg.setSourceEntity(184U);
    msg.setDestination(60333U);
    msg.setDestinationEntity(169U);
    msg.beacon.assign("FSZMMXULIBLPWVAAJGYCSOZTUWRAVEROBNYLJOKRPAIWHDQGPSMKVYGDVKFUNDBKJIHJJYZUVLJTNBTDDVPELUTMZQADPVECLGICUPTTD");
    msg.lat = 0.853597566478;
    msg.lon = 0.994359677222;
    msg.depth = 0.769923474385;
    msg.query_channel = 58U;
    msg.reply_channel = 38U;
    msg.transponder_delay = 114U;

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
    msg.setTimeStamp(0.310870878073);
    msg.setSource(32711U);
    msg.setSourceEntity(240U);
    msg.setDestination(17843U);
    msg.setDestinationEntity(0U);
    msg.beacon.assign("OIZQXFBFAXDXPZHYKNBIIPLZOPTEGOLEPEGSAFRZWCSXJCAMUKUPDQKLJNGPMVZVQNXOUNUQKUSMFNQWFMDEIVYFSVTTMEVCWFYGKVHZWLXALECLPMLOTVAHYGJSKFWZDABQLSTCBSYIJUNIWRVSRWERMASKIERBYDXKXYJCJOBQBMYKHTDZJVRBPCDYMZNWHRDHCHWJPQUNOUTFBBHSNURRYNATVXGLORPGEDHXAELDGWCKTIGFGOJHCIITJQ");
    msg.lat = 0.935606221171;
    msg.lon = 0.0265002660782;
    msg.depth = 0.107772260008;
    msg.query_channel = 15U;
    msg.reply_channel = 240U;
    msg.transponder_delay = 112U;

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
    msg.setTimeStamp(0.491438472028);
    msg.setSource(28747U);
    msg.setSourceEntity(32U);
    msg.setDestination(12480U);
    msg.setDestinationEntity(20U);
    msg.op = 173U;

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
    msg.setTimeStamp(0.967333375447);
    msg.setSource(43503U);
    msg.setSourceEntity(68U);
    msg.setDestination(12835U);
    msg.setDestinationEntity(148U);
    msg.op = 173U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("VWKPLPCOKQCEQAKLHACCRKFADNQIUZIOMDNRIYRZNMXFFQZUHCGBEIROFVILBYAVFHPTCNTTDQEADVAGUJOYHTNPUSKGHXETQXUGENWNHCWJFSRGBUOOXYCFBVPRGPU");
    tmp_msg_0.lat = 0.915426754163;
    tmp_msg_0.lon = 0.0765421061971;
    tmp_msg_0.depth = 0.0780128206599;
    tmp_msg_0.query_channel = 211U;
    tmp_msg_0.reply_channel = 186U;
    tmp_msg_0.transponder_delay = 170U;
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
    msg.setTimeStamp(0.334082677427);
    msg.setSource(43679U);
    msg.setSourceEntity(117U);
    msg.setDestination(19156U);
    msg.setDestinationEntity(215U);
    msg.op = 245U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("EKKBCNYLZPNWOQBGFNUCTYHNVAPDCMUVLTGQGWBDHYSCJJESBZULSLHFMKKCTWXTZMVESNRHXVUYAIGROJHYOJSUAPRPIROZYRLUETJXRZPWFXVLWMANEYXRFPYJJWQBMWLKVFGKICCYTWFIKJXTUQGIFQEMPHDMDEIQSZEVENDEICLPPGBDAXUKBVQDLTAHOLOHJAOSUZOFHIGSDJRPWZRBMIASNVQFCMDAMWUZRYTVXGHQN");
    tmp_msg_0.lat = 0.722534574167;
    tmp_msg_0.lon = 0.238336957516;
    tmp_msg_0.depth = 0.745599726595;
    tmp_msg_0.query_channel = 184U;
    tmp_msg_0.reply_channel = 134U;
    tmp_msg_0.transponder_delay = 135U;
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
    msg.setTimeStamp(0.161990928271);
    msg.setSource(14837U);
    msg.setSourceEntity(101U);
    msg.setDestination(38620U);
    msg.setDestinationEntity(30U);
    IMC::FollowRefState tmp_msg_0;
    tmp_msg_0.control_src = 44575U;
    tmp_msg_0.control_ent = 85U;
    IMC::Reference tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.flags = 152U;
    IMC::DesiredSpeed tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.value = 0.523762587248;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 7U;
    tmp_tmp_msg_0_0.speed.set(tmp_tmp_tmp_msg_0_0_0);
    IMC::DesiredZ tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.value = 0.530214329106;
    tmp_tmp_tmp_msg_0_0_1.z_units = 197U;
    tmp_tmp_msg_0_0.z.set(tmp_tmp_tmp_msg_0_0_1);
    tmp_tmp_msg_0_0.lat = 0.470240425892;
    tmp_tmp_msg_0_0.lon = 0.31070971153;
    tmp_tmp_msg_0_0.radius = 0.29117123947;
    tmp_msg_0.reference.set(tmp_tmp_msg_0_0);
    tmp_msg_0.state = 235U;
    tmp_msg_0.proximity = 19U;
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
    msg.setTimeStamp(0.0845705551948);
    msg.setSource(21752U);
    msg.setSourceEntity(19U);
    msg.setDestination(24891U);
    msg.setDestinationEntity(98U);
    IMC::CurrentVelocity tmp_msg_0;
    tmp_msg_0.x = 0.941527176482;
    tmp_msg_0.y = 0.693676158668;
    tmp_msg_0.z1 = 0.282465100121;
    tmp_msg_0.z2 = 0.538663544278;
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
    msg.setTimeStamp(0.0307273800734);
    msg.setSource(39099U);
    msg.setSourceEntity(188U);
    msg.setDestination(36297U);
    msg.setDestinationEntity(9U);
    IMC::GetOperationalLimits tmp_msg_0;
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
    msg.setTimeStamp(0.686543684626);
    msg.setSource(54857U);
    msg.setSourceEntity(177U);
    msg.setDestination(48751U);
    msg.setDestinationEntity(205U);
    msg.op = 35U;
    msg.system.assign("JYQATENLOBDMSERMTBHKBFFTJCLMMXEVHQCKPFSJVFCZCVIPRAKEAUITJNXAMUEYARVQFKIGAQXPEFSOVFXGOHGAJZWCOZWYDYPIYIWITZLLLQYVRHZTOYAJRFWT");
    msg.range = 0.414934156344;
    IMC::RelativeHumidity tmp_msg_0;
    tmp_msg_0.value = 0.748523629893;
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
    msg.setTimeStamp(0.473002139159);
    msg.setSource(16920U);
    msg.setSourceEntity(163U);
    msg.setDestination(52992U);
    msg.setDestinationEntity(85U);
    msg.op = 148U;
    msg.system.assign("BLUNTOTQZLLFHGJGEUMSBDNNMABCYCFMXAKYMFIWCTHGMSQACLALWHTPDRIVTSWESVOJXZOCBCBFIKPSHUOIIBDYIRDJQQRYQYPUCWLANYXTWPJPAVZMKCZEEKWVJNZFOVOBKRJKMNUREIDDGSEOXKJMPQXRUOHXVYLTVOHHURDBQJQWANEDYJZVEGZUZSZDPSFQ");
    msg.range = 0.467918090348;
    IMC::QueryLedBrightness tmp_msg_0;
    tmp_msg_0.name.assign("MZDBVHEOFSHIZYVIZIKJULYQVQFHJWMQFTGNLSPCGWJPGNKLZQQIVVARXSKGUKPURJBXRZTLQGYWMWTGBCWEEXSMROMURSODJBBNFQYGAFNZPCDFCCEUWLPIJOUDJNIBSARDGUCLQZFTIT");
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
    msg.setTimeStamp(0.950992792782);
    msg.setSource(9518U);
    msg.setSourceEntity(61U);
    msg.setDestination(45738U);
    msg.setDestinationEntity(40U);
    msg.op = 85U;
    msg.system.assign("YZPLQOUDUUIBLOUVIBQYRMPZPYSTAGIMNAJONMZASVXMJYGYBRFUDVTNAOJVECDFSUCBAQLLTTNCORPCBBWWRGNDWAFCNFPKDXSHPMEIGLPHBULCFDBKKHJRGPQYMWVJDDAVHXGWVHWXZJCEEBLQEVQYBRSZCIGAOSTJQNCSDTEPZXOLJZNIFLKGKSMXGISZMHYWUOVRROPGZIMIOFTXEUHRFAKMHUTSERYQJKY");
    msg.range = 0.908356684457;
    IMC::PWM tmp_msg_0;
    tmp_msg_0.id = 237U;
    tmp_msg_0.period = 2529775941U;
    tmp_msg_0.duty_cycle = 1875516404U;
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
    msg.setTimeStamp(0.748132040052);
    msg.setSource(59507U);
    msg.setSourceEntity(189U);
    msg.setDestination(17364U);
    msg.setDestinationEntity(240U);

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
    msg.setTimeStamp(0.352591508989);
    msg.setSource(35564U);
    msg.setSourceEntity(18U);
    msg.setDestination(8965U);
    msg.setDestinationEntity(163U);

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
    msg.setTimeStamp(0.0238268136215);
    msg.setSource(28317U);
    msg.setSourceEntity(210U);
    msg.setDestination(64867U);
    msg.setDestinationEntity(80U);

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
    msg.setTimeStamp(0.0343998190254);
    msg.setSource(49766U);
    msg.setSourceEntity(235U);
    msg.setDestination(24111U);
    msg.setDestinationEntity(190U);
    msg.list.assign("HRRDUKGTXDVTSUTZILLRBAHSYNOHPLDRQWDO");

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
    msg.setTimeStamp(0.96358892369);
    msg.setSource(61246U);
    msg.setSourceEntity(109U);
    msg.setDestination(4279U);
    msg.setDestinationEntity(252U);
    msg.list.assign("AFIIVDORWJQTZCDNKBOZGQICRUPURFYSNKTAEFRVKKXNLKATYVOVVHEOGNXIZXDCZYJYVFGHYPFAGDRHKA");

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
    msg.setTimeStamp(0.727520742606);
    msg.setSource(30262U);
    msg.setSourceEntity(109U);
    msg.setDestination(54747U);
    msg.setDestinationEntity(196U);
    msg.list.assign("PFPQPWHDVJUENINDWQWOJDMIRVCOUZLYQRGMDGLBODPZUHLMGQLZVXPNKECLRHMXTRKBMQGZSYOTCXUCAWLBKGJNDTHUPVUUHEPOFSFJXBDEUMHJEDMMXJWDOVXCVGYKFKATFFCWAJTATLWBNSLQBODRRPHZYECECNYSIAPGKREUWYBAGHK");

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
    msg.setTimeStamp(0.786130747768);
    msg.setSource(63340U);
    msg.setSourceEntity(252U);
    msg.setDestination(15427U);
    msg.setDestinationEntity(226U);
    msg.peer.assign("WMBLZDICZAJYTBXJETLADQAHMLNPZYJJCQOOPCNKFOXEHSUKTTQYQSONXONXSGFAUPBKYJRXQKPBVQWNSBUDXRTSZUGYSGUKHQZWKTFYAURRSDMHWOAEMLNMBWCTKDGEMIKVJVGZYHBRPDXGCMUXDFJUFSNFNIRTLZEVJLRVLCIPYBATQJXFKYYZRRZ");
    msg.rssi = 0.566086086641;
    msg.integrity = 40152U;

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
    msg.setTimeStamp(0.133984907949);
    msg.setSource(58302U);
    msg.setSourceEntity(203U);
    msg.setDestination(47377U);
    msg.setDestinationEntity(12U);
    msg.peer.assign("CUSAVQHSICWXVDTOUJKPQUKXSSUNSJUJDVBSERHVODWPOXORRYKOJEJFUIZRNIMADUHLPLTVWVXGHAW");
    msg.rssi = 0.405132902286;
    msg.integrity = 59780U;

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
    msg.setTimeStamp(0.905115803595);
    msg.setSource(38758U);
    msg.setSourceEntity(171U);
    msg.setDestination(4072U);
    msg.setDestinationEntity(233U);
    msg.peer.assign("ODZRWWHWKPRGSQLXFKARAUUKBCNNSACZKVDSIOHUTTCNHTIFMIRMOAEGPVOEBOILCWQLJPJZAJYCDRSNABOAVNTKQGJQIPTKBYUXQTVGJEWONQJSZBGXVXYVCXMRXAJMHEHCNIYYQPWHEBQRFWEXSNPKLUMJDZNMMBYZRKOAHYTWJSHDDOUFUQSZPFL");
    msg.rssi = 0.160767600468;
    msg.integrity = 42003U;

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
    msg.setTimeStamp(0.162227533332);
    msg.setSource(42679U);
    msg.setSourceEntity(214U);
    msg.setDestination(62020U);
    msg.setDestinationEntity(150U);
    msg.req_id = 36426U;
    msg.destination.assign("LWGKOVKFWFHXSOASMYQEBNSVSMNAIKHIWHTFCERERXZVZEFBTVXWNJQFOZKYCXJUBUBZCURLEMZIEGMLLSQAPDEAWCQUDTPZGHLRWCQDAVNJBTUPLQBLRMPZSAIMBBTQUUZSARRASDUSEQMDGGHXNQYMTHHNIWRAIJGYYVWLKXFGJTYICOKPGWYCMURFZDQHJTFOPYGBWNLILNENJKIJYCPHHUOPDXVORCESONPVBPFFITXXGKZYAJD");
    msg.timeout = 0.931575091883;
    msg.range = 0.775787410563;
    msg.type = 137U;
    IMC::QueryEntityParameters tmp_msg_0;
    tmp_msg_0.name.assign("UEBMFKXBWYQULFEDOTSZSPZVRABBKTWANEPYEMFVFVROIMACJWNJYOXNJVZDEHGLCMHLZDWUPMOVUIRGFNIXMQJCPGPKZQQEEMEWHMXTRVBCQYELQPWKGZJHBYGCJDUQNUARIWMLWXNQASIVNYFDKZGNKJGRXGBF");
    tmp_msg_0.visibility.assign("PURHPSBLUCGHFIKCWJTPSVEHKVIUGPYPNGERYCWSZEXBWOHFCVUKOVASLIZMYKUZLFRSYGMQYDNFBXBQQPKNQDULYK");
    tmp_msg_0.scope.assign("KDUPQWXNOYGOWLNAUEXCZZSUPKGMGFDROQEAHQFRGTCNAQKSDBWQTINFRUNYMVLBBBBHRFIHSHNQZDBTGVMQHPE");
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
    msg.setTimeStamp(0.118750783331);
    msg.setSource(22585U);
    msg.setSourceEntity(246U);
    msg.setDestination(17496U);
    msg.setDestinationEntity(89U);
    msg.req_id = 30996U;
    msg.destination.assign("OCQIGEWGXUQCUYAKHLQECIWISNIZWPFHEIPGVYBDOFRFUYTMKNTMPBOMALXHCDTCIZJIJMMRWTTJTLRYCCFBSKXUZEDFZWDGILHCLVSVJGDURFBATRILKCQGYLGLHSFVUSKZESOWZQNFJBHJTUXQT");
    msg.timeout = 0.975349806919;
    msg.range = 0.0449656736952;
    msg.type = 23U;
    IMC::UamTxStatus tmp_msg_0;
    tmp_msg_0.seq = 54204U;
    tmp_msg_0.value = 216U;
    tmp_msg_0.error.assign("ZZINGBCLFMDPUXAEWJSVRUMMHBBSBWYWU");
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
    msg.setTimeStamp(0.543031059818);
    msg.setSource(20368U);
    msg.setSourceEntity(179U);
    msg.setDestination(12164U);
    msg.setDestinationEntity(177U);
    msg.req_id = 20739U;
    msg.destination.assign("VFLKSQUSLUQUOAQONPRYHCEHMCKCHLBOLWWVXXTOUQZPQTPFMBNHSDNWMJKU");
    msg.timeout = 0.665612785981;
    msg.range = 0.915183417016;
    msg.type = 139U;
    IMC::Rows tmp_msg_0;
    tmp_msg_0.timeout = 42049U;
    tmp_msg_0.lat = 0.0598365315886;
    tmp_msg_0.lon = 0.166934960113;
    tmp_msg_0.z = 0.841663224174;
    tmp_msg_0.z_units = 71U;
    tmp_msg_0.speed = 0.25371662636;
    tmp_msg_0.speed_units = 79U;
    tmp_msg_0.bearing = 0.130153776958;
    tmp_msg_0.cross_angle = 0.932556305985;
    tmp_msg_0.width = 0.958673401746;
    tmp_msg_0.length = 0.442611312804;
    tmp_msg_0.hstep = 0.428656902995;
    tmp_msg_0.coff = 237U;
    tmp_msg_0.alternation = 194U;
    tmp_msg_0.flags = 169U;
    tmp_msg_0.custom.assign("TXTKODQRZKWUVZALNXQBMOPXQHYWCOSPKEVCVLSHTCSUBBRIDIJEYWUJLQMKWNYRIZDHOJJTOAVG");
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
    msg.setTimeStamp(0.243210031429);
    msg.setSource(20086U);
    msg.setSourceEntity(196U);
    msg.setDestination(55796U);
    msg.setDestinationEntity(188U);
    msg.req_id = 53784U;
    msg.type = 105U;
    msg.status = 79U;
    msg.info.assign("QIGLUZCRCLMVFRMXYWTEUTZCKSTDHQHQPYEVWRUALMBMDCIOTBSGEONDVCYBTDYGSACRTKENZLYPJXRMPQNGUAQOQPCMZKSKHNIEOYQUTVJFVEAXUPFPVFHCBXXPBMVSRDUTKOBOJIZHUJHZJZKPOSESABQCGIOUKEDKHSYIDKWFJGWQAYLQJNPWACZXVMILYGLTUIXZVZGWJNGGKDBAMVHDWLFHAFWLJERWSEPNLXNROBONRAHNXXT");
    msg.range = 0.329299616692;

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
    msg.setTimeStamp(0.598497052217);
    msg.setSource(618U);
    msg.setSourceEntity(209U);
    msg.setDestination(54050U);
    msg.setDestinationEntity(155U);
    msg.req_id = 5649U;
    msg.type = 247U;
    msg.status = 254U;
    msg.info.assign("QDEKYLPXYJTJNDLBPCBQ");
    msg.range = 0.698847906153;

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
    msg.setTimeStamp(0.516163217133);
    msg.setSource(49315U);
    msg.setSourceEntity(229U);
    msg.setDestination(27850U);
    msg.setDestinationEntity(199U);
    msg.req_id = 26518U;
    msg.type = 170U;
    msg.status = 156U;
    msg.info.assign("OCAQOQGNZJXVNUMUJOWEKIJQBLVPKELDNBHLSGWAVWFVFUDHWB");
    msg.range = 0.895661752536;

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
    msg.setTimeStamp(0.831778633566);
    msg.setSource(40296U);
    msg.setSourceEntity(231U);
    msg.setDestination(40938U);
    msg.setDestinationEntity(226U);
    msg.value = 19605;

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
    msg.setTimeStamp(0.227746787623);
    msg.setSource(13936U);
    msg.setSourceEntity(76U);
    msg.setDestination(23508U);
    msg.setDestinationEntity(143U);
    msg.value = -6491;

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
    msg.setTimeStamp(0.52626551866);
    msg.setSource(30889U);
    msg.setSourceEntity(244U);
    msg.setDestination(50717U);
    msg.setDestinationEntity(94U);
    msg.value = 22721;

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
    msg.setTimeStamp(0.426909799503);
    msg.setSource(45864U);
    msg.setSourceEntity(193U);
    msg.setDestination(55459U);
    msg.setDestinationEntity(70U);
    msg.value = 0.827572808495;

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
    msg.setTimeStamp(0.490305967943);
    msg.setSource(37978U);
    msg.setSourceEntity(206U);
    msg.setDestination(18342U);
    msg.setDestinationEntity(232U);
    msg.value = 0.36686958063;

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
    msg.setTimeStamp(0.655106065825);
    msg.setSource(39154U);
    msg.setSourceEntity(49U);
    msg.setDestination(25854U);
    msg.setDestinationEntity(30U);
    msg.value = 0.482415713433;

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
    msg.setTimeStamp(0.967801057923);
    msg.setSource(30913U);
    msg.setSourceEntity(3U);
    msg.setDestination(33566U);
    msg.setDestinationEntity(118U);
    msg.value = 0.233060075084;

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
    msg.setTimeStamp(0.80810421308);
    msg.setSource(43644U);
    msg.setSourceEntity(0U);
    msg.setDestination(6235U);
    msg.setDestinationEntity(52U);
    msg.value = 0.719589576872;

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
    msg.setTimeStamp(0.811469895404);
    msg.setSource(59981U);
    msg.setSourceEntity(219U);
    msg.setDestination(59979U);
    msg.setDestinationEntity(31U);
    msg.value = 0.513140662776;

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
    msg.setTimeStamp(0.889106328424);
    msg.setSource(47931U);
    msg.setSourceEntity(185U);
    msg.setDestination(51267U);
    msg.setDestinationEntity(224U);
    msg.validity = 51974U;
    msg.type = 209U;
    msg.utc_year = 52008U;
    msg.utc_month = 91U;
    msg.utc_day = 41U;
    msg.utc_time = 0.21525920079;
    msg.lat = 0.382474214071;
    msg.lon = 0.636712638675;
    msg.height = 0.636629959241;
    msg.satellites = 212U;
    msg.cog = 0.540309409535;
    msg.sog = 0.373357045368;
    msg.hdop = 0.257720414134;
    msg.vdop = 0.187636995726;
    msg.hacc = 0.199201308381;
    msg.vacc = 0.250916226228;

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
    msg.setTimeStamp(0.927768779603);
    msg.setSource(14281U);
    msg.setSourceEntity(107U);
    msg.setDestination(52643U);
    msg.setDestinationEntity(88U);
    msg.validity = 18399U;
    msg.type = 233U;
    msg.utc_year = 3312U;
    msg.utc_month = 24U;
    msg.utc_day = 216U;
    msg.utc_time = 0.089452530606;
    msg.lat = 0.6473876426;
    msg.lon = 0.826483296091;
    msg.height = 0.401933738522;
    msg.satellites = 246U;
    msg.cog = 0.515472413587;
    msg.sog = 0.886274898075;
    msg.hdop = 0.0197131766128;
    msg.vdop = 0.535998184138;
    msg.hacc = 0.379962651715;
    msg.vacc = 0.915574644455;

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
    msg.setTimeStamp(0.62781656136);
    msg.setSource(43899U);
    msg.setSourceEntity(78U);
    msg.setDestination(31685U);
    msg.setDestinationEntity(156U);
    msg.validity = 61230U;
    msg.type = 94U;
    msg.utc_year = 31872U;
    msg.utc_month = 201U;
    msg.utc_day = 7U;
    msg.utc_time = 0.975274418851;
    msg.lat = 0.405425727468;
    msg.lon = 0.75718601482;
    msg.height = 0.995568588492;
    msg.satellites = 101U;
    msg.cog = 0.991963071933;
    msg.sog = 0.670396341445;
    msg.hdop = 0.34799305255;
    msg.vdop = 0.406360430768;
    msg.hacc = 0.078690520838;
    msg.vacc = 0.583922174457;

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
    msg.setTimeStamp(0.00616495678106);
    msg.setSource(289U);
    msg.setSourceEntity(95U);
    msg.setDestination(23385U);
    msg.setDestinationEntity(204U);
    msg.time = 0.731610887434;
    msg.phi = 0.501682550221;
    msg.theta = 0.724719791902;
    msg.psi = 0.800731562652;
    msg.psi_magnetic = 0.84143239852;

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
    msg.setTimeStamp(0.0701450350307);
    msg.setSource(2790U);
    msg.setSourceEntity(202U);
    msg.setDestination(26531U);
    msg.setDestinationEntity(128U);
    msg.time = 0.297928164987;
    msg.phi = 0.477191324257;
    msg.theta = 0.139472749399;
    msg.psi = 0.271722016327;
    msg.psi_magnetic = 0.361648480297;

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
    msg.setTimeStamp(0.619962884195);
    msg.setSource(24831U);
    msg.setSourceEntity(184U);
    msg.setDestination(17828U);
    msg.setDestinationEntity(178U);
    msg.time = 0.929094852467;
    msg.phi = 0.511713877512;
    msg.theta = 0.584942198141;
    msg.psi = 0.536442029347;
    msg.psi_magnetic = 0.446225310418;

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
    msg.setTimeStamp(0.872159083389);
    msg.setSource(27022U);
    msg.setSourceEntity(145U);
    msg.setDestination(44921U);
    msg.setDestinationEntity(209U);
    msg.time = 0.55056985402;
    msg.x = 0.461221540523;
    msg.y = 0.0901135462241;
    msg.z = 0.457187049643;
    msg.timestep = 0.386669589474;

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
    msg.setTimeStamp(0.972342195028);
    msg.setSource(43295U);
    msg.setSourceEntity(24U);
    msg.setDestination(9977U);
    msg.setDestinationEntity(221U);
    msg.time = 0.873163527182;
    msg.x = 0.253025624308;
    msg.y = 0.945114231512;
    msg.z = 0.534593460705;
    msg.timestep = 0.602216444466;

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
    msg.setTimeStamp(0.659614817327);
    msg.setSource(4914U);
    msg.setSourceEntity(43U);
    msg.setDestination(49677U);
    msg.setDestinationEntity(24U);
    msg.time = 0.357788231883;
    msg.x = 0.300408431177;
    msg.y = 0.226464606872;
    msg.z = 0.69401825017;
    msg.timestep = 0.346321579573;

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
    msg.setTimeStamp(0.0790935914204);
    msg.setSource(16544U);
    msg.setSourceEntity(203U);
    msg.setDestination(1418U);
    msg.setDestinationEntity(193U);
    msg.time = 0.932445907017;
    msg.x = 0.743019121727;
    msg.y = 0.910323238448;
    msg.z = 0.530539059634;

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
    msg.setTimeStamp(0.403792772843);
    msg.setSource(2174U);
    msg.setSourceEntity(149U);
    msg.setDestination(42309U);
    msg.setDestinationEntity(160U);
    msg.time = 0.143291491663;
    msg.x = 0.77646807345;
    msg.y = 0.720387077525;
    msg.z = 0.330156647637;

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
    msg.setTimeStamp(0.263214176179);
    msg.setSource(42834U);
    msg.setSourceEntity(62U);
    msg.setDestination(31236U);
    msg.setDestinationEntity(120U);
    msg.time = 0.746252174662;
    msg.x = 0.869188100808;
    msg.y = 0.211082050062;
    msg.z = 0.889111275188;

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
    msg.setTimeStamp(0.434591018234);
    msg.setSource(1608U);
    msg.setSourceEntity(213U);
    msg.setDestination(31402U);
    msg.setDestinationEntity(79U);
    msg.time = 0.501161912136;
    msg.x = 0.998628662026;
    msg.y = 0.0877152213853;
    msg.z = 0.17045975526;

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
    msg.setTimeStamp(0.294487478808);
    msg.setSource(63777U);
    msg.setSourceEntity(120U);
    msg.setDestination(46319U);
    msg.setDestinationEntity(5U);
    msg.time = 0.613455858592;
    msg.x = 0.490646515837;
    msg.y = 0.673656663909;
    msg.z = 0.562205568306;

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
    msg.setTimeStamp(0.832952177062);
    msg.setSource(52081U);
    msg.setSourceEntity(72U);
    msg.setDestination(7944U);
    msg.setDestinationEntity(154U);
    msg.time = 0.387464205838;
    msg.x = 0.62621012602;
    msg.y = 0.499739391676;
    msg.z = 0.784257058061;

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
    msg.setTimeStamp(0.858291905399);
    msg.setSource(40184U);
    msg.setSourceEntity(43U);
    msg.setDestination(11714U);
    msg.setDestinationEntity(223U);
    msg.time = 0.758523279244;
    msg.x = 0.398795064865;
    msg.y = 0.0611991325579;
    msg.z = 0.983410324432;

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
    msg.setTimeStamp(0.762991327337);
    msg.setSource(64191U);
    msg.setSourceEntity(152U);
    msg.setDestination(35287U);
    msg.setDestinationEntity(37U);
    msg.time = 0.689872969506;
    msg.x = 0.799290441756;
    msg.y = 0.816296105355;
    msg.z = 0.0455485133643;

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
    msg.setTimeStamp(0.248628166175);
    msg.setSource(11890U);
    msg.setSourceEntity(153U);
    msg.setDestination(60006U);
    msg.setDestinationEntity(117U);
    msg.time = 0.100664537177;
    msg.x = 0.990380585984;
    msg.y = 0.991185445752;
    msg.z = 0.483034886314;

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
    msg.setTimeStamp(0.0196566651667);
    msg.setSource(27598U);
    msg.setSourceEntity(33U);
    msg.setDestination(2779U);
    msg.setDestinationEntity(202U);
    msg.validity = 59U;
    msg.x = 0.807089561686;
    msg.y = 0.0220498053371;
    msg.z = 0.767440647338;

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
    msg.setTimeStamp(0.178246119803);
    msg.setSource(11769U);
    msg.setSourceEntity(15U);
    msg.setDestination(64936U);
    msg.setDestinationEntity(120U);
    msg.validity = 120U;
    msg.x = 0.645940290316;
    msg.y = 0.464011302988;
    msg.z = 0.495729353742;

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
    msg.setTimeStamp(0.669157020024);
    msg.setSource(14158U);
    msg.setSourceEntity(84U);
    msg.setDestination(55038U);
    msg.setDestinationEntity(243U);
    msg.validity = 209U;
    msg.x = 0.41334110715;
    msg.y = 0.850443805487;
    msg.z = 0.252358242641;

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
    msg.setTimeStamp(0.494512376263);
    msg.setSource(41916U);
    msg.setSourceEntity(191U);
    msg.setDestination(26339U);
    msg.setDestinationEntity(12U);
    msg.validity = 70U;
    msg.x = 0.118163370072;
    msg.y = 0.574649806358;
    msg.z = 0.515932813877;

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
    msg.setTimeStamp(0.0869019333419);
    msg.setSource(22572U);
    msg.setSourceEntity(149U);
    msg.setDestination(33391U);
    msg.setDestinationEntity(140U);
    msg.validity = 137U;
    msg.x = 0.716248248217;
    msg.y = 0.749425443632;
    msg.z = 0.38644684342;

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
    msg.setTimeStamp(0.0973830832439);
    msg.setSource(49359U);
    msg.setSourceEntity(230U);
    msg.setDestination(49957U);
    msg.setDestinationEntity(165U);
    msg.validity = 237U;
    msg.x = 0.265515173772;
    msg.y = 0.187415764372;
    msg.z = 0.624748669881;

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
    msg.setTimeStamp(0.0804905803316);
    msg.setSource(59907U);
    msg.setSourceEntity(129U);
    msg.setDestination(19490U);
    msg.setDestinationEntity(161U);
    msg.time = 0.924335660884;
    msg.x = 0.238399604754;
    msg.y = 0.730233436397;
    msg.z = 0.0996948188459;

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
    msg.setTimeStamp(0.0895756442957);
    msg.setSource(21513U);
    msg.setSourceEntity(41U);
    msg.setDestination(34444U);
    msg.setDestinationEntity(14U);
    msg.time = 0.269519443908;
    msg.x = 0.347140170281;
    msg.y = 0.0605194565202;
    msg.z = 0.297571820062;

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
    msg.setTimeStamp(0.0426061529556);
    msg.setSource(65355U);
    msg.setSourceEntity(177U);
    msg.setDestination(5783U);
    msg.setDestinationEntity(37U);
    msg.time = 0.208567632837;
    msg.x = 0.0426958251034;
    msg.y = 0.192750873183;
    msg.z = 0.535911311326;

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
    msg.setTimeStamp(0.183024417434);
    msg.setSource(19355U);
    msg.setSourceEntity(191U);
    msg.setDestination(45487U);
    msg.setDestinationEntity(181U);
    msg.validity = 212U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.369490569907;
    tmp_msg_0.y = 0.996834104148;
    tmp_msg_0.z = 0.88226737952;
    tmp_msg_0.phi = 0.784731738693;
    tmp_msg_0.theta = 0.270516957082;
    tmp_msg_0.psi = 0.534053670006;
    msg.location.push_back(tmp_msg_0);
    IMC::BeamConfig tmp_msg_1;
    tmp_msg_1.beam_width = 0.00165909767497;
    tmp_msg_1.beam_height = 0.148118090595;
    msg.beam_config.push_back(tmp_msg_1);
    msg.value = 0.164985534042;

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
    msg.setTimeStamp(0.0264870868263);
    msg.setSource(64541U);
    msg.setSourceEntity(173U);
    msg.setDestination(15642U);
    msg.setDestinationEntity(5U);
    msg.validity = 9U;
    msg.value = 0.472310302102;

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
    msg.setTimeStamp(0.29779612024);
    msg.setSource(3062U);
    msg.setSourceEntity(161U);
    msg.setDestination(25572U);
    msg.setDestinationEntity(200U);
    msg.validity = 226U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.692533915078;
    tmp_msg_0.y = 0.488763459626;
    tmp_msg_0.z = 0.811151705573;
    tmp_msg_0.phi = 0.29869902205;
    tmp_msg_0.theta = 0.325740458043;
    tmp_msg_0.psi = 0.670015518487;
    msg.location.push_back(tmp_msg_0);
    IMC::BeamConfig tmp_msg_1;
    tmp_msg_1.beam_width = 0.820979851905;
    tmp_msg_1.beam_height = 0.987012484281;
    msg.beam_config.push_back(tmp_msg_1);
    msg.value = 0.876629519547;

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
    msg.setTimeStamp(0.387192940211);
    msg.setSource(14402U);
    msg.setSourceEntity(103U);
    msg.setDestination(47924U);
    msg.setDestinationEntity(125U);
    msg.value = 0.52267251943;

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
    msg.setTimeStamp(0.0422562887377);
    msg.setSource(42434U);
    msg.setSourceEntity(171U);
    msg.setDestination(29467U);
    msg.setDestinationEntity(226U);
    msg.value = 0.247083835604;

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
    msg.setTimeStamp(0.919667921811);
    msg.setSource(64262U);
    msg.setSourceEntity(92U);
    msg.setDestination(44058U);
    msg.setDestinationEntity(136U);
    msg.value = 0.0143746159856;

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
    msg.setTimeStamp(0.483085000697);
    msg.setSource(56182U);
    msg.setSourceEntity(38U);
    msg.setDestination(15396U);
    msg.setDestinationEntity(73U);
    msg.value = 0.154532934065;

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
    msg.setTimeStamp(0.578061139244);
    msg.setSource(20130U);
    msg.setSourceEntity(78U);
    msg.setDestination(23613U);
    msg.setDestinationEntity(89U);
    msg.value = 0.0785239790143;

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
    msg.setTimeStamp(0.513899127387);
    msg.setSource(63749U);
    msg.setSourceEntity(90U);
    msg.setDestination(28257U);
    msg.setDestinationEntity(100U);
    msg.value = 0.324870066641;

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
    msg.setTimeStamp(0.645181410398);
    msg.setSource(39048U);
    msg.setSourceEntity(121U);
    msg.setDestination(43743U);
    msg.setDestinationEntity(101U);
    msg.value = 0.836660571999;

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
    msg.setTimeStamp(0.650750699417);
    msg.setSource(63004U);
    msg.setSourceEntity(177U);
    msg.setDestination(59306U);
    msg.setDestinationEntity(163U);
    msg.value = 0.736767716226;

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
    msg.setTimeStamp(0.7217680014);
    msg.setSource(4199U);
    msg.setSourceEntity(66U);
    msg.setDestination(19291U);
    msg.setDestinationEntity(33U);
    msg.value = 0.166210253082;

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
    msg.setTimeStamp(0.902799746901);
    msg.setSource(13881U);
    msg.setSourceEntity(25U);
    msg.setDestination(24024U);
    msg.setDestinationEntity(72U);
    msg.value = 0.306748963274;

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
    msg.setTimeStamp(0.434951672194);
    msg.setSource(37834U);
    msg.setSourceEntity(220U);
    msg.setDestination(21255U);
    msg.setDestinationEntity(157U);
    msg.value = 0.560194788972;

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
    msg.setTimeStamp(0.173919544447);
    msg.setSource(11853U);
    msg.setSourceEntity(124U);
    msg.setDestination(15600U);
    msg.setDestinationEntity(65U);
    msg.value = 0.923885549418;

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
    msg.setTimeStamp(0.911355505639);
    msg.setSource(48822U);
    msg.setSourceEntity(180U);
    msg.setDestination(46752U);
    msg.setDestinationEntity(108U);
    msg.value = 0.230353092238;

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
    msg.setTimeStamp(0.982394845336);
    msg.setSource(63010U);
    msg.setSourceEntity(81U);
    msg.setDestination(16171U);
    msg.setDestinationEntity(59U);
    msg.value = 0.125381681284;

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
    msg.setTimeStamp(0.633090540405);
    msg.setSource(54832U);
    msg.setSourceEntity(21U);
    msg.setDestination(36530U);
    msg.setDestinationEntity(108U);
    msg.value = 0.583855888859;

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
    msg.setTimeStamp(0.432372960613);
    msg.setSource(12836U);
    msg.setSourceEntity(193U);
    msg.setDestination(16680U);
    msg.setDestinationEntity(18U);
    msg.value = 0.48635634383;

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
    msg.setTimeStamp(0.839679273522);
    msg.setSource(861U);
    msg.setSourceEntity(139U);
    msg.setDestination(31190U);
    msg.setDestinationEntity(53U);
    msg.value = 0.940292120456;

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
    msg.setTimeStamp(0.397310804325);
    msg.setSource(23848U);
    msg.setSourceEntity(56U);
    msg.setDestination(9653U);
    msg.setDestinationEntity(26U);
    msg.value = 0.866822453401;

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
    msg.setTimeStamp(0.0739392081437);
    msg.setSource(24874U);
    msg.setSourceEntity(9U);
    msg.setDestination(50741U);
    msg.setDestinationEntity(68U);
    msg.value = 0.0697405487614;

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
    msg.setTimeStamp(0.340116281838);
    msg.setSource(17416U);
    msg.setSourceEntity(245U);
    msg.setDestination(47372U);
    msg.setDestinationEntity(25U);
    msg.value = 0.643998046626;

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
    msg.setTimeStamp(0.945455551825);
    msg.setSource(39292U);
    msg.setSourceEntity(40U);
    msg.setDestination(41920U);
    msg.setDestinationEntity(202U);
    msg.value = 0.450097407183;

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
    msg.setTimeStamp(0.811920752599);
    msg.setSource(54522U);
    msg.setSourceEntity(165U);
    msg.setDestination(57524U);
    msg.setDestinationEntity(189U);
    msg.value = 0.501954292504;

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
    msg.setTimeStamp(0.0147431875279);
    msg.setSource(17892U);
    msg.setSourceEntity(243U);
    msg.setDestination(4741U);
    msg.setDestinationEntity(25U);
    msg.value = 0.696501044922;

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
    msg.setTimeStamp(0.824962551534);
    msg.setSource(38589U);
    msg.setSourceEntity(16U);
    msg.setDestination(4205U);
    msg.setDestinationEntity(219U);
    msg.value = 0.43508121282;

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
    msg.setTimeStamp(0.264068946446);
    msg.setSource(2705U);
    msg.setSourceEntity(123U);
    msg.setDestination(25445U);
    msg.setDestinationEntity(154U);
    msg.direction = 0.795479698031;
    msg.speed = 0.409731614019;
    msg.turbulence = 0.615579604329;

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
    msg.setTimeStamp(0.0605042149332);
    msg.setSource(17645U);
    msg.setSourceEntity(107U);
    msg.setDestination(36687U);
    msg.setDestinationEntity(160U);
    msg.direction = 0.0745114539086;
    msg.speed = 0.97213100926;
    msg.turbulence = 0.830191016031;

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
    msg.setTimeStamp(0.00691534121198);
    msg.setSource(1450U);
    msg.setSourceEntity(243U);
    msg.setDestination(23824U);
    msg.setDestinationEntity(178U);
    msg.direction = 0.975229704084;
    msg.speed = 0.674431609552;
    msg.turbulence = 0.563218690758;

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
    msg.setTimeStamp(0.0643810719723);
    msg.setSource(40776U);
    msg.setSourceEntity(99U);
    msg.setDestination(23858U);
    msg.setDestinationEntity(124U);
    msg.value = 0.656320347834;

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
    msg.setTimeStamp(0.567142397011);
    msg.setSource(55689U);
    msg.setSourceEntity(6U);
    msg.setDestination(827U);
    msg.setDestinationEntity(190U);
    msg.value = 0.517855142312;

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
    msg.setTimeStamp(0.12772255136);
    msg.setSource(45774U);
    msg.setSourceEntity(241U);
    msg.setDestination(20054U);
    msg.setDestinationEntity(195U);
    msg.value = 0.281332367818;

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
    msg.setTimeStamp(0.158708284203);
    msg.setSource(56173U);
    msg.setSourceEntity(69U);
    msg.setDestination(2233U);
    msg.setDestinationEntity(106U);
    msg.value.assign("HYJGXCVSVGWPRGJLBFZSIKVWYKTJZNNXRZKRYWBUFPXLIEGGTNRTOBAFZOWCLTTKACHSKUSBYNH");

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
    msg.setTimeStamp(0.276175005586);
    msg.setSource(6623U);
    msg.setSourceEntity(205U);
    msg.setDestination(17989U);
    msg.setDestinationEntity(180U);
    msg.value.assign("PSJTLVCVSNSXISPVPIRRAQHYAUPLTWOLQQCANIVHDFKKGRHXXHBCXTKTAXTEDZNFMDJ");

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
    msg.setTimeStamp(0.0980612359247);
    msg.setSource(29304U);
    msg.setSourceEntity(11U);
    msg.setDestination(3956U);
    msg.setDestinationEntity(192U);
    msg.value.assign("DNMURIVAOWYLDCXLAIVQSMOGHCNRYWHMRGDZCJVHCBHFBHRYGTYSRUBKBGNQAVRTKTBZKMDFOGRPWMQQINXXRYZOIEABEZJUSVKKWJIDYFEPHPNQLSMDYWLZHFKSZJNSLFOAGDTIMCCOMFQKUTDY");

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
    msg.setTimeStamp(0.945973130967);
    msg.setSource(22343U);
    msg.setSourceEntity(116U);
    msg.setDestination(23872U);
    msg.setDestinationEntity(30U);
    const char tmp_msg_0[] = {121, 124, -35, 17, 20, -82, 26, -127, -8, -113, -35, 76, 44, -91, 19, -55, 69, -103, -31, -24, 117, -39, 113, -3, 20, 96, -81, 89, -82, 37, -2, -14, 31, -55, -75, -70, 77, -36, -25, 42, -12, 28, 90, 47, -15, 30, 0, -4, -112, -59, -46, 57, 50, -104, 79, -86, -51, 55, -96, 49, 34, 97, 99, 28, -19, -68, -62, -104, 20, 113, -27, 20, 43, 4, -84, -122, -65, -29, -120, -111, -99, 26, -99, 0, 69, -3, -93, -20, 27, -126, 9, -110, 57, 91, 4, -113, -59, 103, 110, -63, -120, -83, -78, 117, -11, -59, -58, 6, 111, 46, -124, -127, -57, 64, 66, -2, 39, 98, 75, -8, 112, -47, 45, 89, -101, 1, 122, -127, -23, 3, 104, -128, 14, -43, 88, -114, 17, 20, -37, 112, -128, 0, 25, -96, -70, 41, 68, -39, -46, -84, 95, -6, 26, 75, -26, -104, -13, 41, -69, 19, -2, -69, -109, 57, -31, -52, -103, 119, 52, -109, -124, -30, 61, 101, -87, 102, -93, 96, 66, -128, 58, -76, -44, -121, -16, -81, -74, -115, 17, -104, -89, -108, 66};
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
    msg.setTimeStamp(0.0988422885239);
    msg.setSource(8420U);
    msg.setSourceEntity(72U);
    msg.setDestination(1107U);
    msg.setDestinationEntity(44U);
    const char tmp_msg_0[] = {-60, 64, 29, -35, 54, 126, -86, 11, 91, 97, 67, -75, 58, 19, 45, 117, 38, -90, 76, -12, 114, -10, 73, 43, 44, -122, 49, -28, 83, 91, -104, -114, -107, -59, 96, -82, -98, -63, -40, 119, 101, 29, 71, 52, -15, 93, -44, 89, 105, 75, -95, 100, 25, 22, 99, -85, -100, -77, -5, 18, 31, -13, -45, 0, -116, 66, -30, -18, -4, -121, -43, 43, 11, 7, -101, 106, -98, 71, 3, -62, -93, -92, 101, -121, 16, 16, 82, -49, 9, -54, -51, -3, 51, -82, 100, 60, -67, 11, -30, 59, -30, 86, 78, -4, -119, 109, -57, 80, 57, 112, 55, -52, 3, 78, 58, -104, -116, 39, -128, 52, -96, -99, 4, 26, -69, 10, -85, 78, -102, 61, 4, -4, -41, -43, -42, -120, 117, -33, -49, 11, -17, 4, -25, 36, -62, -13, 34, -63, -110, 106, -58, -33, -88};
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
    msg.setTimeStamp(0.15827890501);
    msg.setSource(5375U);
    msg.setSourceEntity(144U);
    msg.setDestination(22313U);
    msg.setDestinationEntity(166U);
    const char tmp_msg_0[] = {-74, -86, 61, 118, -96, -20, 2, 13, -16, -29, -4, 66, -9, -74, 120, -101, -81, -6, -97, -95, 108, -121, 83, -102, -51, 82, -72, 78, 108, 35, 25, 124, 89, 25, -26, 44, -119, 104, 86, 54, -96, -73, 11, 55, -42, 15, 88, -124, -29, 27, 74, 52, -85, 113, -91, 118, 27, -9, 62, -90, -46, 113, 83, 20, 106, 56, 3, -106, 60, 58, 32, 18, -95, -2, -118, 110, -126, -73, -64, -65, -63, -8, 9, -74, -62, -45, 10, -127, -83, -116, -17, 119, -4, 47, 2, 13, -123, 57, 32, 49, -10, -68, -102, 39, -63, 70, -70, -104, 36, -84, -30, -125, -22, 90, 34, -19, 81, -77, 79, -27, 73, -21, 22, 114, -42, 50, -100, -20, -18, -75, 89, 114, 35, -123, -29, 0, -119, 124, -60, 52, 36, 54, 96, 63, -68, 11, -74, -83, -111, -121, 126, -57, -115, -76, -61, -26, -66, -17, 116, 69, -72, -123, 20, 103, -102, 82, 54, -85, 112, -50, 64, 54, -25, 110, -53};
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
    msg.setTimeStamp(0.863644407347);
    msg.setSource(53392U);
    msg.setSourceEntity(172U);
    msg.setDestination(37546U);
    msg.setDestinationEntity(207U);
    msg.value = 0.442546847342;

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
    msg.setTimeStamp(0.657696727629);
    msg.setSource(13034U);
    msg.setSourceEntity(19U);
    msg.setDestination(47317U);
    msg.setDestinationEntity(226U);
    msg.value = 0.723770152406;

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
    msg.setTimeStamp(0.887537075466);
    msg.setSource(18912U);
    msg.setSourceEntity(61U);
    msg.setDestination(21963U);
    msg.setDestinationEntity(24U);
    msg.value = 0.494362480391;

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
    msg.setTimeStamp(0.0651733049078);
    msg.setSource(21694U);
    msg.setSourceEntity(82U);
    msg.setDestination(18412U);
    msg.setDestinationEntity(9U);
    msg.type = 7U;
    msg.frequency = 3920334220U;
    msg.min_range = 36889U;
    msg.max_range = 23761U;
    msg.bits_per_point = 245U;
    msg.scale_factor = 0.684427435433;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.399893952271;
    tmp_msg_0.beam_height = 0.0306113373207;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {78, 126, 105, 122, 94, 4, -6, -122, -63, -118, 30, -98, -112, -37, -115, 52, -54, 5, 69, 3, 90, 31, 54, -29, 70, -86, 38, 68, -99, -113, 51, -71, 94, 102, -60, -86, 80, -123, 82, -56, 16, -9, 106, -10, 109, 87, 69, 42, 40, -6, 75, 19, -15, 1, 110, -112, 88, -11, -25, -25, 105, 108, -32, -85, -36, 9, -29, -60, -30, -4, -35, 5, -104, 109, 26, -116, -71, -64, 29, -22, -33, -126, 9, -117, -109, -38, 0, -113, 8, -40, -21, -1, -100, 114, -87, 66, 6, 99, 73, 88, 94, 41, -89, 95, -50, 13, 115, -14, -5, -57, 51, -66, -121, 79, -122, -72, -16, -57, 118, 72, 81, -62, 25, -38, 105, 41, -20, 33, 13};
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
    msg.setTimeStamp(0.566436020246);
    msg.setSource(45838U);
    msg.setSourceEntity(228U);
    msg.setDestination(18489U);
    msg.setDestinationEntity(19U);
    msg.type = 160U;
    msg.frequency = 1582048535U;
    msg.min_range = 60100U;
    msg.max_range = 4274U;
    msg.bits_per_point = 122U;
    msg.scale_factor = 0.482769922212;
    const char tmp_msg_0[] = {34, 42, 25, -38, 30, -24, -52, -77, -65, -6, 32, -43, -14, 84, 112, -32, -126, 94, -113, -20, -124, 92, -12, -26, 43, -82, -24, 125, 51, 56, -121, -11, -49, 37, -122, -121, -38, 52, -43, 15, 30, -19, -118, 74, 39, -92, -25, 121, 30, -48, -9, -17, 7, -96, -92, -77, 102, -45, -128, -49, 57, 35, 92, 94, 123, 100, 62, 31, 103, 110, 109, -103, -37, 106, 31, -43, -99, 75, -69, -45, -8, -66, -83, -27, 90, 53, 121, 113, 114, 33, 54, 22, 102, 4, -76, 124, 73, -27, 5, -107, -116, 51, 55, 93, 88};
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
    msg.setTimeStamp(0.890665111148);
    msg.setSource(20640U);
    msg.setSourceEntity(150U);
    msg.setDestination(56361U);
    msg.setDestinationEntity(74U);
    msg.type = 89U;
    msg.frequency = 156567309U;
    msg.min_range = 55442U;
    msg.max_range = 26556U;
    msg.bits_per_point = 44U;
    msg.scale_factor = 0.669125221374;
    const char tmp_msg_0[] = {-56, 106, -11, -32, -16, 35, 9, 65, 68, 82, -119, -69, 81, 34, 78, 94, -46, 36, -50, -48, -6, 16, 73, -20, 15, -62, -91, -55, 39, -33, 49, -98, -2, -51};
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
    msg.setTimeStamp(0.018630309925);
    msg.setSource(45678U);
    msg.setSourceEntity(198U);
    msg.setDestination(14590U);
    msg.setDestinationEntity(184U);

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
    msg.setTimeStamp(0.179204258502);
    msg.setSource(55588U);
    msg.setSourceEntity(204U);
    msg.setDestination(32795U);
    msg.setDestinationEntity(51U);

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
    msg.setTimeStamp(0.48826571531);
    msg.setSource(58636U);
    msg.setSourceEntity(170U);
    msg.setDestination(51556U);
    msg.setDestinationEntity(20U);

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
    msg.setTimeStamp(0.619651759973);
    msg.setSource(34166U);
    msg.setSourceEntity(147U);
    msg.setDestination(60935U);
    msg.setDestinationEntity(50U);
    msg.op = 245U;

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
    msg.setTimeStamp(0.192252502883);
    msg.setSource(21081U);
    msg.setSourceEntity(110U);
    msg.setDestination(11100U);
    msg.setDestinationEntity(95U);
    msg.op = 37U;

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
    msg.setTimeStamp(0.301161953687);
    msg.setSource(53203U);
    msg.setSourceEntity(191U);
    msg.setDestination(47352U);
    msg.setDestinationEntity(123U);
    msg.op = 91U;

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
    msg.setTimeStamp(0.0471702000565);
    msg.setSource(50418U);
    msg.setSourceEntity(249U);
    msg.setDestination(3008U);
    msg.setDestinationEntity(164U);
    msg.value = 0.647577072618;
    msg.confidence = 0.561286004437;
    msg.opmodes.assign("JPNRFBDKDOWJBGVMZPTWIFGLTUVCUXLBZEJTRFTSIFZRVIEMXJGJAJDOINMJNNZLOVQFCUKQMRIYAYSZMVZHYLHAFQAZJQDQTNFCGKEWBPRFXMECURPSIEVIAXFNTNYEHXACUJGSGKSDQMHYYNYXETIKQAHYOYCZNGHSOWZRKMLXSDHTSCJTUXVPBTWDMEBWAHIBAKRXLGQQPUCGAVPKMLE");

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
    msg.setTimeStamp(0.692440270504);
    msg.setSource(2990U);
    msg.setSourceEntity(27U);
    msg.setDestination(18789U);
    msg.setDestinationEntity(183U);
    msg.value = 0.904379990715;
    msg.confidence = 0.50475773386;
    msg.opmodes.assign("KKBTBFVEQOXPNNASFTOKAXRPEWSSWXSNPHMKLUWEQOURQTCBGAVYEXYDRPOFPLGWHZJJBDGRCST");

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
    msg.setTimeStamp(0.229439593679);
    msg.setSource(60445U);
    msg.setSourceEntity(81U);
    msg.setDestination(11578U);
    msg.setDestinationEntity(29U);
    msg.value = 0.561490318824;
    msg.confidence = 0.398391630721;
    msg.opmodes.assign("SAKNJLQSDIAFUBQHMYHRWROGWQFUDOGYVLBYTURXDOLYAZOBBJRIVKIQMLETPMMEYRLNEAYJAAGFPBXXTCDODNODGXMRSKGSHVCRAQIWTRTBNVYLEYPWHIHVCQMSTOMSOCPWIUWPKFQSMHELVKSJZVJPFNGKEWNVDABIQEWDLNCVCILGRNCGMWRKXGTDJJJWCTMOEZUCAPZUN");

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
    msg.setTimeStamp(0.687060301273);
    msg.setSource(17944U);
    msg.setSourceEntity(168U);
    msg.setDestination(12147U);
    msg.setDestinationEntity(214U);
    msg.itow = 3352085287U;
    msg.lat = 0.163405827418;
    msg.lon = 0.416072165643;
    msg.height_ell = 0.943613008092;
    msg.height_sea = 0.0380382141387;
    msg.hacc = 0.731657702655;
    msg.vacc = 0.0256749048543;
    msg.vel_n = 0.428714526448;
    msg.vel_e = 0.177936507583;
    msg.vel_d = 0.738319734804;
    msg.speed = 0.695990675334;
    msg.gspeed = 0.754261045807;
    msg.heading = 0.512886538028;
    msg.sacc = 0.321523031021;
    msg.cacc = 0.730806441363;

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
    msg.setTimeStamp(0.180112394211);
    msg.setSource(15156U);
    msg.setSourceEntity(31U);
    msg.setDestination(4528U);
    msg.setDestinationEntity(179U);
    msg.itow = 3962640383U;
    msg.lat = 0.674386301127;
    msg.lon = 0.720735797979;
    msg.height_ell = 0.104801326394;
    msg.height_sea = 0.828700200068;
    msg.hacc = 0.604853990496;
    msg.vacc = 0.281425967027;
    msg.vel_n = 0.313968994015;
    msg.vel_e = 0.224311434837;
    msg.vel_d = 0.44291539036;
    msg.speed = 0.644568534915;
    msg.gspeed = 0.395903635718;
    msg.heading = 0.490461080185;
    msg.sacc = 0.108113893639;
    msg.cacc = 0.271092125612;

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
    msg.setTimeStamp(0.950976907571);
    msg.setSource(53962U);
    msg.setSourceEntity(125U);
    msg.setDestination(24589U);
    msg.setDestinationEntity(52U);
    msg.itow = 569636355U;
    msg.lat = 0.560088842657;
    msg.lon = 0.877705012259;
    msg.height_ell = 0.0312676860444;
    msg.height_sea = 0.383643237297;
    msg.hacc = 0.82787701214;
    msg.vacc = 0.18927133694;
    msg.vel_n = 0.648883891126;
    msg.vel_e = 0.127373520617;
    msg.vel_d = 0.40951029683;
    msg.speed = 0.826314227162;
    msg.gspeed = 0.657483590221;
    msg.heading = 0.253444483711;
    msg.sacc = 0.223301486468;
    msg.cacc = 0.464816723197;

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
    msg.setTimeStamp(0.0147277214777);
    msg.setSource(17030U);
    msg.setSourceEntity(22U);
    msg.setDestination(25083U);
    msg.setDestinationEntity(193U);
    msg.id = 166U;
    msg.value = 0.341500580518;

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
    msg.setTimeStamp(0.0119033983593);
    msg.setSource(4739U);
    msg.setSourceEntity(133U);
    msg.setDestination(12430U);
    msg.setDestinationEntity(124U);
    msg.id = 188U;
    msg.value = 0.289510214375;

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
    msg.setTimeStamp(0.782591830572);
    msg.setSource(32914U);
    msg.setSourceEntity(24U);
    msg.setDestination(47754U);
    msg.setDestinationEntity(102U);
    msg.id = 219U;
    msg.value = 0.433432559827;

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
    msg.setTimeStamp(0.45648847755);
    msg.setSource(51095U);
    msg.setSourceEntity(28U);
    msg.setDestination(13676U);
    msg.setDestinationEntity(29U);
    msg.x = 0.171384434634;
    msg.y = 0.781852043467;
    msg.z = 0.228450417175;
    msg.phi = 0.0386870857199;
    msg.theta = 0.406421256141;
    msg.psi = 0.993893759632;

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
    msg.setTimeStamp(0.0292028464045);
    msg.setSource(61503U);
    msg.setSourceEntity(160U);
    msg.setDestination(14258U);
    msg.setDestinationEntity(144U);
    msg.x = 0.361837394523;
    msg.y = 0.468876475331;
    msg.z = 0.321156464565;
    msg.phi = 0.395705846269;
    msg.theta = 0.70484055931;
    msg.psi = 0.872201754691;

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
    msg.setTimeStamp(0.567904709352);
    msg.setSource(60845U);
    msg.setSourceEntity(61U);
    msg.setDestination(37077U);
    msg.setDestinationEntity(166U);
    msg.x = 0.174188066048;
    msg.y = 0.994829763343;
    msg.z = 0.0579055016774;
    msg.phi = 0.494125685958;
    msg.theta = 0.670059304006;
    msg.psi = 0.654505267429;

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
    msg.setTimeStamp(0.253264406557);
    msg.setSource(1524U);
    msg.setSourceEntity(25U);
    msg.setDestination(50943U);
    msg.setDestinationEntity(191U);
    msg.beam_width = 0.186696848345;
    msg.beam_height = 0.0819527153221;

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
    msg.setTimeStamp(0.162521435595);
    msg.setSource(54084U);
    msg.setSourceEntity(149U);
    msg.setDestination(38775U);
    msg.setDestinationEntity(16U);
    msg.beam_width = 0.861394566847;
    msg.beam_height = 0.162405974621;

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
    msg.setTimeStamp(0.392607780744);
    msg.setSource(64488U);
    msg.setSourceEntity(196U);
    msg.setDestination(28879U);
    msg.setDestinationEntity(72U);
    msg.beam_width = 0.844909035292;
    msg.beam_height = 0.260417438484;

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
    msg.setTimeStamp(0.303495311183);
    msg.setSource(50154U);
    msg.setSourceEntity(154U);
    msg.setDestination(44592U);
    msg.setDestinationEntity(132U);
    msg.sane = 83U;

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
    msg.setTimeStamp(0.928293095528);
    msg.setSource(53893U);
    msg.setSourceEntity(218U);
    msg.setDestination(9404U);
    msg.setDestinationEntity(146U);
    msg.sane = 142U;

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
    msg.setTimeStamp(0.0458662034255);
    msg.setSource(49090U);
    msg.setSourceEntity(127U);
    msg.setDestination(34341U);
    msg.setDestinationEntity(211U);
    msg.sane = 24U;

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
    msg.setTimeStamp(0.360393311469);
    msg.setSource(41526U);
    msg.setSourceEntity(181U);
    msg.setDestination(32058U);
    msg.setDestinationEntity(111U);
    msg.value = 0.459140968493;

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
    msg.setTimeStamp(0.848521956318);
    msg.setSource(30645U);
    msg.setSourceEntity(139U);
    msg.setDestination(6752U);
    msg.setDestinationEntity(1U);
    msg.value = 0.448553734264;

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
    msg.setTimeStamp(0.760493600859);
    msg.setSource(53564U);
    msg.setSourceEntity(1U);
    msg.setDestination(48959U);
    msg.setDestinationEntity(57U);
    msg.value = 0.594971231235;

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
    msg.setTimeStamp(0.108843095617);
    msg.setSource(9345U);
    msg.setSourceEntity(40U);
    msg.setDestination(50050U);
    msg.setDestinationEntity(207U);
    msg.value = 0.549630760984;

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
    msg.setTimeStamp(0.699297525667);
    msg.setSource(51026U);
    msg.setSourceEntity(9U);
    msg.setDestination(20861U);
    msg.setDestinationEntity(216U);
    msg.value = 0.0517336208972;

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
    msg.setTimeStamp(0.145177170592);
    msg.setSource(54715U);
    msg.setSourceEntity(210U);
    msg.setDestination(46850U);
    msg.setDestinationEntity(103U);
    msg.value = 0.749092469182;

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
    msg.setTimeStamp(0.879410580515);
    msg.setSource(47749U);
    msg.setSourceEntity(183U);
    msg.setDestination(45498U);
    msg.setDestinationEntity(64U);
    msg.value = 0.0463858506552;

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
    msg.setTimeStamp(0.0626873205068);
    msg.setSource(19149U);
    msg.setSourceEntity(19U);
    msg.setDestination(60596U);
    msg.setDestinationEntity(130U);
    msg.value = 0.247718785124;

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
    msg.setTimeStamp(0.505071845457);
    msg.setSource(35140U);
    msg.setSourceEntity(98U);
    msg.setDestination(44965U);
    msg.setDestinationEntity(137U);
    msg.value = 0.0225190352532;

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
    msg.setTimeStamp(0.187707328507);
    msg.setSource(22844U);
    msg.setSourceEntity(14U);
    msg.setDestination(50439U);
    msg.setDestinationEntity(228U);
    msg.value = 0.825558707534;

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
    msg.setTimeStamp(0.979453488806);
    msg.setSource(34934U);
    msg.setSourceEntity(181U);
    msg.setDestination(1645U);
    msg.setDestinationEntity(110U);
    msg.value = 0.997536219533;

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
    msg.setTimeStamp(0.619520726837);
    msg.setSource(51064U);
    msg.setSourceEntity(189U);
    msg.setDestination(41237U);
    msg.setDestinationEntity(13U);
    msg.value = 0.599998082605;

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
    msg.setTimeStamp(0.00191303406731);
    msg.setSource(13854U);
    msg.setSourceEntity(152U);
    msg.setDestination(24942U);
    msg.setDestinationEntity(59U);
    msg.value = 0.71395175918;

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
    msg.setTimeStamp(0.362885224442);
    msg.setSource(8886U);
    msg.setSourceEntity(197U);
    msg.setDestination(41574U);
    msg.setDestinationEntity(82U);
    msg.value = 0.591892001898;

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
    msg.setTimeStamp(0.329602967349);
    msg.setSource(6078U);
    msg.setSourceEntity(121U);
    msg.setDestination(44265U);
    msg.setDestinationEntity(253U);
    msg.value = 0.306606431441;

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
    msg.setTimeStamp(0.695975134477);
    msg.setSource(22417U);
    msg.setSourceEntity(125U);
    msg.setDestination(18263U);
    msg.setDestinationEntity(212U);
    msg.value = 0.867607262907;

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
    msg.setTimeStamp(0.58408062066);
    msg.setSource(45373U);
    msg.setSourceEntity(244U);
    msg.setDestination(47162U);
    msg.setDestinationEntity(10U);
    msg.value = 0.054881186819;

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
    msg.setTimeStamp(0.353625498139);
    msg.setSource(53660U);
    msg.setSourceEntity(24U);
    msg.setDestination(12389U);
    msg.setDestinationEntity(80U);
    msg.value = 0.845776010825;

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
    msg.setTimeStamp(0.464212793011);
    msg.setSource(35314U);
    msg.setSourceEntity(182U);
    msg.setDestination(61713U);
    msg.setDestinationEntity(64U);
    msg.value = 0.900034509418;

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
    msg.setTimeStamp(0.313207741292);
    msg.setSource(22721U);
    msg.setSourceEntity(198U);
    msg.setDestination(62280U);
    msg.setDestinationEntity(222U);
    msg.value = 0.990822690332;

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
    msg.setTimeStamp(0.534171900972);
    msg.setSource(46339U);
    msg.setSourceEntity(84U);
    msg.setDestination(48473U);
    msg.setDestinationEntity(235U);
    msg.value = 0.172078869632;

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
    msg.setTimeStamp(0.172702053268);
    msg.setSource(12534U);
    msg.setSourceEntity(103U);
    msg.setDestination(32792U);
    msg.setDestinationEntity(83U);
    msg.value = 0.748767801191;

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
    msg.setTimeStamp(0.656084289598);
    msg.setSource(41287U);
    msg.setSourceEntity(68U);
    msg.setDestination(34758U);
    msg.setDestinationEntity(219U);
    msg.value = 0.872707535644;

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
    msg.setTimeStamp(0.482152647911);
    msg.setSource(3902U);
    msg.setSourceEntity(200U);
    msg.setDestination(15566U);
    msg.setDestinationEntity(168U);
    msg.value = 0.776080098531;

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
    msg.setTimeStamp(0.727872249835);
    msg.setSource(1944U);
    msg.setSourceEntity(178U);
    msg.setDestination(56513U);
    msg.setDestinationEntity(34U);
    msg.validity = 46905U;
    msg.type = 197U;
    msg.tow = 3120186382U;
    msg.base_lat = 0.522817599473;
    msg.base_lon = 0.473647525466;
    msg.base_height = 0.810471138027;
    msg.n = 0.158734465366;
    msg.e = 0.00488060761501;
    msg.d = 0.530554746548;
    msg.v_n = 0.107760134734;
    msg.v_e = 0.74576931317;
    msg.v_d = 0.997300754682;
    msg.satellites = 165U;
    msg.iar_hyp = 2155U;
    msg.iar_ratio = 0.0670522681288;

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
    msg.setTimeStamp(0.587190533831);
    msg.setSource(21962U);
    msg.setSourceEntity(191U);
    msg.setDestination(7469U);
    msg.setDestinationEntity(189U);
    msg.validity = 33603U;
    msg.type = 102U;
    msg.tow = 2705290753U;
    msg.base_lat = 0.00434741289829;
    msg.base_lon = 0.524343551264;
    msg.base_height = 0.413120484356;
    msg.n = 0.1902419885;
    msg.e = 0.119707739465;
    msg.d = 0.731719345567;
    msg.v_n = 0.0920299224565;
    msg.v_e = 0.822446366665;
    msg.v_d = 0.879387644827;
    msg.satellites = 162U;
    msg.iar_hyp = 29788U;
    msg.iar_ratio = 0.712988409474;

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
    msg.setTimeStamp(0.649173540575);
    msg.setSource(35715U);
    msg.setSourceEntity(204U);
    msg.setDestination(51033U);
    msg.setDestinationEntity(103U);
    msg.validity = 35543U;
    msg.type = 95U;
    msg.tow = 1356197217U;
    msg.base_lat = 0.412850253255;
    msg.base_lon = 0.452205055407;
    msg.base_height = 0.553705087545;
    msg.n = 0.599396483983;
    msg.e = 0.561343608961;
    msg.d = 0.976694539263;
    msg.v_n = 0.154811227515;
    msg.v_e = 0.120295671573;
    msg.v_d = 0.114473575033;
    msg.satellites = 61U;
    msg.iar_hyp = 53698U;
    msg.iar_ratio = 0.828062453152;

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
    msg.setTimeStamp(0.104998400376);
    msg.setSource(47570U);
    msg.setSourceEntity(199U);
    msg.setDestination(7890U);
    msg.setDestinationEntity(73U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.571247377158;
    tmp_msg_0.lon = 0.0136559085766;
    tmp_msg_0.height = 0.197244889991;
    tmp_msg_0.x = 0.616695352521;
    tmp_msg_0.y = 0.833757237212;
    tmp_msg_0.z = 0.203392880029;
    tmp_msg_0.phi = 0.981091376434;
    tmp_msg_0.theta = 0.98814179275;
    tmp_msg_0.psi = 0.790711650332;
    tmp_msg_0.u = 0.546424866136;
    tmp_msg_0.v = 0.58721519549;
    tmp_msg_0.w = 0.897833478585;
    tmp_msg_0.vx = 0.440381893817;
    tmp_msg_0.vy = 0.834452602402;
    tmp_msg_0.vz = 0.354290701942;
    tmp_msg_0.p = 0.410837859807;
    tmp_msg_0.q = 0.363304620417;
    tmp_msg_0.r = 0.320756300376;
    tmp_msg_0.depth = 0.575037634163;
    tmp_msg_0.alt = 0.361335766856;
    msg.state.set(tmp_msg_0);
    msg.type = 84U;

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
    msg.setTimeStamp(0.117365880596);
    msg.setSource(59320U);
    msg.setSourceEntity(182U);
    msg.setDestination(54241U);
    msg.setDestinationEntity(159U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.345132842293;
    tmp_msg_0.lon = 0.266967403963;
    tmp_msg_0.height = 0.45963313632;
    tmp_msg_0.x = 0.116581745326;
    tmp_msg_0.y = 0.222001991622;
    tmp_msg_0.z = 0.152047500136;
    tmp_msg_0.phi = 0.73439638481;
    tmp_msg_0.theta = 0.900895671894;
    tmp_msg_0.psi = 0.469683390325;
    tmp_msg_0.u = 0.0361722425156;
    tmp_msg_0.v = 0.989719841165;
    tmp_msg_0.w = 0.823709023346;
    tmp_msg_0.vx = 0.249095416899;
    tmp_msg_0.vy = 0.0599608731227;
    tmp_msg_0.vz = 0.519973055995;
    tmp_msg_0.p = 0.332610330213;
    tmp_msg_0.q = 0.296366249863;
    tmp_msg_0.r = 0.793014711873;
    tmp_msg_0.depth = 0.27243369818;
    tmp_msg_0.alt = 0.418911332747;
    msg.state.set(tmp_msg_0);
    msg.type = 2U;

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
    msg.setTimeStamp(0.978799617684);
    msg.setSource(15563U);
    msg.setSourceEntity(145U);
    msg.setDestination(31321U);
    msg.setDestinationEntity(183U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.969289452202;
    tmp_msg_0.lon = 0.822581453874;
    tmp_msg_0.height = 0.263669585142;
    tmp_msg_0.x = 0.862153485466;
    tmp_msg_0.y = 0.438363322676;
    tmp_msg_0.z = 0.626370850599;
    tmp_msg_0.phi = 0.494534268684;
    tmp_msg_0.theta = 0.920612960802;
    tmp_msg_0.psi = 0.0510191906962;
    tmp_msg_0.u = 0.110540214485;
    tmp_msg_0.v = 0.839795097626;
    tmp_msg_0.w = 0.977412752246;
    tmp_msg_0.vx = 0.535844822116;
    tmp_msg_0.vy = 0.665474745753;
    tmp_msg_0.vz = 0.969963778058;
    tmp_msg_0.p = 0.56207043286;
    tmp_msg_0.q = 0.409433857942;
    tmp_msg_0.r = 0.658478083656;
    tmp_msg_0.depth = 0.199868958416;
    tmp_msg_0.alt = 0.961091815627;
    msg.state.set(tmp_msg_0);
    msg.type = 223U;

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
    msg.setTimeStamp(0.628705302409);
    msg.setSource(14224U);
    msg.setSourceEntity(12U);
    msg.setDestination(13000U);
    msg.setDestinationEntity(194U);
    msg.value = 0.403023072739;

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
    msg.setTimeStamp(0.888605845619);
    msg.setSource(56545U);
    msg.setSourceEntity(139U);
    msg.setDestination(30702U);
    msg.setDestinationEntity(215U);
    msg.value = 0.750447125277;

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
    msg.setTimeStamp(0.635681973002);
    msg.setSource(38298U);
    msg.setSourceEntity(1U);
    msg.setDestination(41034U);
    msg.setDestinationEntity(63U);
    msg.value = 0.614933756732;

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
    msg.setTimeStamp(0.748120408997);
    msg.setSource(40089U);
    msg.setSourceEntity(233U);
    msg.setDestination(3053U);
    msg.setDestinationEntity(185U);
    msg.value = 0.768208708635;

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
    msg.setTimeStamp(0.177888805127);
    msg.setSource(33595U);
    msg.setSourceEntity(12U);
    msg.setDestination(48079U);
    msg.setDestinationEntity(125U);
    msg.value = 0.100625359229;

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
    msg.setTimeStamp(0.0930502007052);
    msg.setSource(28480U);
    msg.setSourceEntity(174U);
    msg.setDestination(34914U);
    msg.setDestinationEntity(52U);
    msg.value = 0.648010890488;

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
    msg.setTimeStamp(0.402628203449);
    msg.setSource(63254U);
    msg.setSourceEntity(197U);
    msg.setDestination(17903U);
    msg.setDestinationEntity(22U);
    msg.value = 0.465530294406;

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
    msg.setTimeStamp(0.959990645646);
    msg.setSource(28749U);
    msg.setSourceEntity(166U);
    msg.setDestination(27138U);
    msg.setDestinationEntity(94U);
    msg.value = 0.0868090975881;

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
    msg.setTimeStamp(0.280129256975);
    msg.setSource(9577U);
    msg.setSourceEntity(144U);
    msg.setDestination(7227U);
    msg.setDestinationEntity(176U);
    msg.value = 0.210897481583;

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
    msg.setTimeStamp(0.347866343967);
    msg.setSource(7492U);
    msg.setSourceEntity(148U);
    msg.setDestination(50583U);
    msg.setDestinationEntity(165U);
    msg.value = 0.225854013576;

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
    msg.setTimeStamp(0.962838800702);
    msg.setSource(22562U);
    msg.setSourceEntity(162U);
    msg.setDestination(39538U);
    msg.setDestinationEntity(170U);
    msg.value = 0.330100383884;

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
    msg.setTimeStamp(0.862264823138);
    msg.setSource(30662U);
    msg.setSourceEntity(101U);
    msg.setDestination(15759U);
    msg.setDestinationEntity(32U);
    msg.value = 0.463107581071;

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
    msg.setTimeStamp(0.320717178665);
    msg.setSource(6310U);
    msg.setSourceEntity(131U);
    msg.setDestination(51546U);
    msg.setDestinationEntity(51U);
    msg.value = 0.440181251139;

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
    msg.setTimeStamp(0.588933265569);
    msg.setSource(41012U);
    msg.setSourceEntity(68U);
    msg.setDestination(24071U);
    msg.setDestinationEntity(14U);
    msg.value = 0.849735514648;

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
    msg.setTimeStamp(0.926945126061);
    msg.setSource(51461U);
    msg.setSourceEntity(212U);
    msg.setDestination(13238U);
    msg.setDestinationEntity(41U);
    msg.value = 0.329847693821;

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
    msg.setTimeStamp(0.790922266495);
    msg.setSource(14771U);
    msg.setSourceEntity(179U);
    msg.setDestination(62563U);
    msg.setDestinationEntity(113U);
    msg.id = 85U;
    msg.zoom = 80U;
    msg.action = 167U;

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
    msg.setTimeStamp(0.185076312402);
    msg.setSource(53416U);
    msg.setSourceEntity(6U);
    msg.setDestination(57317U);
    msg.setDestinationEntity(7U);
    msg.id = 243U;
    msg.zoom = 110U;
    msg.action = 95U;

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
    msg.setTimeStamp(0.199433755324);
    msg.setSource(55777U);
    msg.setSourceEntity(43U);
    msg.setDestination(25865U);
    msg.setDestinationEntity(182U);
    msg.id = 121U;
    msg.zoom = 162U;
    msg.action = 65U;

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
    msg.setTimeStamp(0.0879019081517);
    msg.setSource(41474U);
    msg.setSourceEntity(135U);
    msg.setDestination(25706U);
    msg.setDestinationEntity(223U);
    msg.id = 120U;
    msg.value = 0.0609373376273;

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
    msg.setTimeStamp(0.711793577769);
    msg.setSource(46999U);
    msg.setSourceEntity(242U);
    msg.setDestination(18836U);
    msg.setDestinationEntity(248U);
    msg.id = 33U;
    msg.value = 0.594947120554;

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
    msg.setTimeStamp(0.0817003157912);
    msg.setSource(49120U);
    msg.setSourceEntity(49U);
    msg.setDestination(17235U);
    msg.setDestinationEntity(77U);
    msg.id = 147U;
    msg.value = 0.873523180832;

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
    msg.setTimeStamp(0.594731328927);
    msg.setSource(31574U);
    msg.setSourceEntity(250U);
    msg.setDestination(62480U);
    msg.setDestinationEntity(16U);
    msg.id = 9U;
    msg.value = 0.0934018816073;

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
    msg.setTimeStamp(0.714634443506);
    msg.setSource(63987U);
    msg.setSourceEntity(123U);
    msg.setDestination(12199U);
    msg.setDestinationEntity(248U);
    msg.id = 200U;
    msg.value = 0.778871297797;

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
    msg.setTimeStamp(0.999682750168);
    msg.setSource(21541U);
    msg.setSourceEntity(186U);
    msg.setDestination(23092U);
    msg.setDestinationEntity(150U);
    msg.id = 169U;
    msg.value = 0.445786074531;

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
    msg.setTimeStamp(0.434121712657);
    msg.setSource(61402U);
    msg.setSourceEntity(147U);
    msg.setDestination(9459U);
    msg.setDestinationEntity(213U);
    msg.id = 162U;
    msg.angle = 0.116300818782;

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
    msg.setTimeStamp(0.159943550287);
    msg.setSource(21969U);
    msg.setSourceEntity(185U);
    msg.setDestination(29557U);
    msg.setDestinationEntity(123U);
    msg.id = 245U;
    msg.angle = 0.589850425024;

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
    msg.setTimeStamp(0.424474412577);
    msg.setSource(58417U);
    msg.setSourceEntity(88U);
    msg.setDestination(14792U);
    msg.setDestinationEntity(149U);
    msg.id = 250U;
    msg.angle = 0.0213491330717;

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
    msg.setTimeStamp(0.704613087431);
    msg.setSource(20494U);
    msg.setSourceEntity(199U);
    msg.setDestination(31286U);
    msg.setDestinationEntity(180U);
    msg.op = 150U;
    msg.actions.assign("CIYWLIDOPGLAKQQCBBHDJSXTECMUJEWOEDNEWYZTVJVZFQZUTRKSLZTXZNGZHFUNRUQDKIDARJITHNCADKOXROBJFDXSMIAKXDCIXMHAUVOYTPCVFGWYAWQTIYBRMGJXVIMPLEUONYHGDZRHLTPKYNBGVGYOVMSTJNOZRZECTQHBXHMVJSVLILNFUGKWDKBEYW");

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
    msg.setTimeStamp(0.860152167378);
    msg.setSource(12609U);
    msg.setSourceEntity(5U);
    msg.setDestination(30961U);
    msg.setDestinationEntity(77U);
    msg.op = 18U;
    msg.actions.assign("CZBQLYMSPLARGFKYLMZBOHAECGPRLSFBTEFSPHMZUZUEIFRKYMKCAUVOEQVVYOFJVBVHVTMCQYKJONITZTKBPCAXJBHEOKPAKJCNSQGKFPBLMGOQGTRLXWDDUXRJDLZFQNP");

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
    msg.setTimeStamp(0.942530080543);
    msg.setSource(34768U);
    msg.setSourceEntity(30U);
    msg.setDestination(53892U);
    msg.setDestinationEntity(64U);
    msg.op = 169U;
    msg.actions.assign("LESYWWJBDGEHBGQHXBNUCUFYXLNZCJPCVSPOMRZRJBWQTTIIZDRLYJFIURALTJXXWBHNBIPYEWCKJMRYFATWOCVKQVZRSOTYMQFPMDRHOKQNLOTUAHWZZPJRSVYHQKKQKVGPJQLOMBKECAYFNIECKMCHTEFNHDZDBKOFAVRSFASCODAPGIGFITLGIBIWJXXCRJLZE");

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
    msg.setTimeStamp(0.346224728193);
    msg.setSource(52871U);
    msg.setSourceEntity(185U);
    msg.setDestination(25744U);
    msg.setDestinationEntity(0U);
    msg.actions.assign("KEGGWXEQWGVRARFJLVAQDULVPNDAUOPKVQHCHJUNOEILUFOKQQMDXWPDGIPCHGNJYHRMPCSSEZDYGVHRJBMPZZKNQTWXNBBPFZLJDZRYECJAVSIMOOFVEMQSNXBMYSRUCNUKNDIAQHFXGPKADACIBLBTWSMTAKXLTICNHLWQNUSWZOYEHCRGOUYRBYFEFXMLXWJTOMPTQADZJKHWUWPEIFDLJYZLIISVTYMAKXXIHGCOT");

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
    msg.setTimeStamp(0.902630705966);
    msg.setSource(31974U);
    msg.setSourceEntity(82U);
    msg.setDestination(24076U);
    msg.setDestinationEntity(85U);
    msg.actions.assign("UAPWLTYVAIKQFTNRXIPEKHUHBTKPFZLCIOMCOORITEIWHVHXOTDYVFVCTMBLNUIKXQGJKJIRWCAJJASBMQESFZ");

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
    msg.setTimeStamp(0.514239684702);
    msg.setSource(3456U);
    msg.setSourceEntity(224U);
    msg.setDestination(20289U);
    msg.setDestinationEntity(166U);
    msg.actions.assign("MOFTLEGIYPOTWSVBCHEJJIAKMZGTSVGCUYUWLSRKWJOEJLQZIFQRQGYDPDWGJQYVSKXBLBDDFMFADQXWONJZKQXXDITAPMTXYLXHHZIRNBAWUVHXUPGOFVMRPEVLCYCJSETUOXSFZGTOKZRGPHQUCHRIRXO");

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
    msg.setTimeStamp(0.133616679674);
    msg.setSource(33963U);
    msg.setSourceEntity(223U);
    msg.setDestination(31492U);
    msg.setDestinationEntity(23U);
    msg.button = 127U;
    msg.value = 164U;

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
    msg.setTimeStamp(0.839922449361);
    msg.setSource(9101U);
    msg.setSourceEntity(242U);
    msg.setDestination(47600U);
    msg.setDestinationEntity(159U);
    msg.button = 32U;
    msg.value = 44U;

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
    msg.setTimeStamp(0.855068821622);
    msg.setSource(54816U);
    msg.setSourceEntity(237U);
    msg.setDestination(15936U);
    msg.setDestinationEntity(223U);
    msg.button = 1U;
    msg.value = 207U;

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
    msg.setTimeStamp(0.504011850664);
    msg.setSource(27920U);
    msg.setSourceEntity(229U);
    msg.setDestination(3598U);
    msg.setDestinationEntity(50U);
    msg.op = 85U;
    msg.text.assign("QGOAICGPDUPHYFEZCAJVIFMEIIAUENSNAWXBAYALMXNVHXJFHXNUAIPJZFCLBIRHHSBOEZZKIMHURRBGVJKPNZTDHGQCUTLKUOGJVYZBKCVNPENLRWFQQBQKLEODTY");

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
    msg.setTimeStamp(0.536702831062);
    msg.setSource(42219U);
    msg.setSourceEntity(43U);
    msg.setDestination(35522U);
    msg.setDestinationEntity(40U);
    msg.op = 154U;
    msg.text.assign("BAGHHVUIWCXDAGJIUHXPXGARFLMXULJOHLWYETBRTZIBCKNOLCVQJVPH");

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
    msg.setTimeStamp(0.465753454778);
    msg.setSource(35271U);
    msg.setSourceEntity(44U);
    msg.setDestination(58555U);
    msg.setDestinationEntity(217U);
    msg.op = 41U;
    msg.text.assign("MWDWHDZDVNPAMJNKVHPQCERTMBLGHBSKFXKJAXLPEOWKUFQGHOJRZAGMILWXAGZYAQXHDILGSLXNCQVEJUAEHBTVWZIQBBBUETPHNIYOUZJQJSCBFYRKEQCRYUZ");

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
    msg.setTimeStamp(0.876209444297);
    msg.setSource(32395U);
    msg.setSourceEntity(242U);
    msg.setDestination(18030U);
    msg.setDestinationEntity(219U);
    msg.op = 139U;
    msg.time_remain = 0.288975533078;
    msg.sched_time = 0.194267414187;

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
    msg.setTimeStamp(0.837899843631);
    msg.setSource(65157U);
    msg.setSourceEntity(221U);
    msg.setDestination(35000U);
    msg.setDestinationEntity(61U);
    msg.op = 205U;
    msg.time_remain = 0.401938550812;
    msg.sched_time = 0.978215107375;

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
    msg.setTimeStamp(0.688787435597);
    msg.setSource(63052U);
    msg.setSourceEntity(244U);
    msg.setDestination(12391U);
    msg.setDestinationEntity(196U);
    msg.op = 48U;
    msg.time_remain = 0.572803622354;
    msg.sched_time = 0.388637575123;

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
    msg.setTimeStamp(0.698660013491);
    msg.setSource(5945U);
    msg.setSourceEntity(129U);
    msg.setDestination(64557U);
    msg.setDestinationEntity(33U);
    msg.name.assign("ZJNONCVJSZPJPJVASGQGHZ");
    msg.op = 34U;
    msg.sched_time = 0.668578254519;

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
    msg.setTimeStamp(0.271011125775);
    msg.setSource(58540U);
    msg.setSourceEntity(62U);
    msg.setDestination(2405U);
    msg.setDestinationEntity(178U);
    msg.name.assign("EJTPITHICHVRGGEXQRGGJOWMNUELOJINPATDDDSRYVQXWKOZCNQONKNAGJAXKFBBLACYXZSWUXMSJVUFSOCV");
    msg.op = 166U;
    msg.sched_time = 0.138387655908;

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
    msg.setTimeStamp(0.0771564624253);
    msg.setSource(62644U);
    msg.setSourceEntity(209U);
    msg.setDestination(49800U);
    msg.setDestinationEntity(171U);
    msg.name.assign("VGUSMPJVEEXJSMHHZDDCUJVHGXOREVBUIXBLVXWIRHTZWDPAZYWRSARNXWQTALVQNTXTSKBTQPKVELGXUFNKBFNVKOOPQSKRB");
    msg.op = 30U;
    msg.sched_time = 0.243693888602;

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
    msg.setTimeStamp(0.986416185076);
    msg.setSource(23980U);
    msg.setSourceEntity(205U);
    msg.setDestination(12001U);
    msg.setDestinationEntity(93U);

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
    msg.setTimeStamp(0.101398259215);
    msg.setSource(19236U);
    msg.setSourceEntity(100U);
    msg.setDestination(2471U);
    msg.setDestinationEntity(216U);

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
    msg.setTimeStamp(0.358604280195);
    msg.setSource(3377U);
    msg.setSourceEntity(208U);
    msg.setDestination(46048U);
    msg.setDestinationEntity(196U);

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
    msg.setTimeStamp(0.729583336534);
    msg.setSource(60674U);
    msg.setSourceEntity(54U);
    msg.setDestination(51861U);
    msg.setDestinationEntity(46U);
    msg.name.assign("HAULPCGBMNMNQHZBLOYGMFSEOMRYPJHKWHPBMTCRIZHPZNBZUZGOVOPXOLGUMMLKWHGJYMBFDINWVUTVFKWTFEXSVCZFDLANSOJKQSPVYPIFWCCDQAUTJVRRIBTACXCYUXTDKFGSWRBQREEILQZEXCAVEOLYPHSBNTLWOXYNLYUHSJPSAQQLGHUVKIRAFGGZRAVJZIDD");
    msg.state = 166U;

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
    msg.setTimeStamp(0.157316352789);
    msg.setSource(1529U);
    msg.setSourceEntity(80U);
    msg.setDestination(33985U);
    msg.setDestinationEntity(72U);
    msg.name.assign("HOSGSORTSUIKNAGFORQQMHCWIGDBJFLUWRVPUDQLHQHJUZNIWEEKETFBXKYIOCMKXBOTUQJPPUHFZEDILXGQCBFQKMCICVOVJGYWNHQUJXZWWLANXFFYYAVUGDLYBNVVANHEHSBECARGGJRDKYBHVDMSZTXTEPZHJEOKBLMLTOMRSRISAQSAXWZZXDASYGUPVZAUMBFXEMPNCVNJPWPILJASRTFWCFNTWLMZPJDYYNOVG");
    msg.state = 204U;

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
    msg.setTimeStamp(0.833677722914);
    msg.setSource(15870U);
    msg.setSourceEntity(120U);
    msg.setDestination(27940U);
    msg.setDestinationEntity(198U);
    msg.name.assign("SDSGIEOTRCEHOIABTKKVEFJPPYTTROYNKCLLOOXJWLQBVCVTGBTSAMWGEWYMJBZYFWQSPPLMBLUSVRMZDKETNJUDNQHQFGUVOXMIMNXWGUJRHOMF");
    msg.state = 197U;

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
    msg.setTimeStamp(0.931126182679);
    msg.setSource(39750U);
    msg.setSourceEntity(120U);
    msg.setDestination(14900U);
    msg.setDestinationEntity(64U);
    msg.name.assign("STKRNVOPGAXYNFBLGQIIEYUOLQDFILMKIJHUBPPBGBANRHRBAYP");
    msg.value = 73U;

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
    msg.setTimeStamp(0.0900436735271);
    msg.setSource(4601U);
    msg.setSourceEntity(155U);
    msg.setDestination(24062U);
    msg.setDestinationEntity(67U);
    msg.name.assign("MXVGJPQVHUFWXVPQBWZTDBFAABJMMPACTHESSGCTRJOMULEXGEHYHNFYBHRIMDQFVPJZFLTCINXALYZIRPVAMUWSXOQGSHOPYFGOYCVMGRLDZAIETOPRCIKXYONTHHYBSFAKJESJKNREYUAAHPFRKUJZVBDNCZVGQFNQQDKOGEQKJIXDRKNWANWWYVWZEUOCWLLUULDCTQDLGSPCHBWIFURETEVSIZZBGYBIMKPTOTQLMOLNKZKWX");
    msg.value = 89U;

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
    msg.setTimeStamp(0.0198793598707);
    msg.setSource(43591U);
    msg.setSourceEntity(234U);
    msg.setDestination(4234U);
    msg.setDestinationEntity(22U);
    msg.name.assign("VUORVPTCQGIQXMBWYVVOESJKVPOUULHKRKWDCMPTLZTAAROCYDHZXYAWHPNDDAHZDDMTHHIJMZTJXJQVXHKCJIOGNIUFLSTDAGXRTMUXIYLGZNFWEGEIZIOOFGFKEUFSSMVCYXPQKDTB");
    msg.value = 160U;

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
    msg.setTimeStamp(0.788512410486);
    msg.setSource(63286U);
    msg.setSourceEntity(167U);
    msg.setDestination(60105U);
    msg.setDestinationEntity(16U);
    msg.name.assign("RZDYJIZLBJXJMVSZJIBHHPQLYTTYUOOHLTCGKCGQWJSVZSSLZOFYNQADUKUYPHFFMAWPDBPDEARMZNCABCQBVUZEKXFRJYOQTTTIWZKAUVIRINITMYHMBIVDHLKXPEOVXBSHGOQKIQHEOAYUIGMXQFCWYKXRWRVJEGLELEWNDDCBKBKSKJFNZAFJWMIEOUAFDUPEUZYXNTLNFHDOACEGVUOVGL");

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
    msg.setTimeStamp(0.965325894744);
    msg.setSource(52804U);
    msg.setSourceEntity(104U);
    msg.setDestination(40310U);
    msg.setDestinationEntity(221U);
    msg.name.assign("OHWXDFKQECIRKRHOTIHGSYGYXBLHCQPCFLPMCSVYBPAWHCXTGVXNIUHNJXLRUZBEDRSVSBUFJVAEGPXDAPWTBTLPINLDMFOEUEMYKCBMAYNDJTDUWKSGNPFQWGKESZWMZYOUDQFVVOHCJZMJLEZVBQPGOCSXNWLWMRQOVTJUYVKOUJWEHLAQJTXGNSDSL");

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
    msg.setTimeStamp(0.970880760063);
    msg.setSource(10630U);
    msg.setSourceEntity(153U);
    msg.setDestination(423U);
    msg.setDestinationEntity(143U);
    msg.name.assign("OTGQLLUPSJCIQTTVCBHNLKYBHQRUIUAFITYLJZMEE");

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
    msg.setTimeStamp(0.742082611465);
    msg.setSource(56966U);
    msg.setSourceEntity(222U);
    msg.setDestination(30779U);
    msg.setDestinationEntity(62U);
    msg.name.assign("YXHMXHDRUFDADRMSJWUQLQZPNMJMOKKGXLRYLTYZWTIQWAODEUAXLTJBLZWCOKOTBILRFQNACPFY");
    msg.value = 82U;

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
    msg.setTimeStamp(0.278084858622);
    msg.setSource(12984U);
    msg.setSourceEntity(204U);
    msg.setDestination(6297U);
    msg.setDestinationEntity(133U);
    msg.name.assign("YBCJFHJSSBJWNEWXOCTTBFENSTOGSBZZNGFGZFRIWXMEYAAPPNTRJVQRBRICCVYYWZHBTYHADUWZSTXNVSFKLIKSXQPJEMKOKQFFABAZACOMPNBHHUXZGCBRMMPVXSJKCWCGKVDQKOEIVYYZCDIWMHTNILWIAMGEOSELYUJYEMUVLPQOXDJUHXKPGLZERKLUFLMHDYJRAANRGXQCTGZILPSUQIUNKXUDBQOWGFVRRIFTNDAVVQHQHDLEWPT");
    msg.value = 27U;

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
    msg.setTimeStamp(0.520415561197);
    msg.setSource(24962U);
    msg.setSourceEntity(241U);
    msg.setDestination(59763U);
    msg.setDestinationEntity(127U);
    msg.name.assign("AOAZALVCZRVUSOWEHTRTLANHVFOISOABTDSOVUMERXWHLWHXYATWESTRKIAPNNWEZLHFFQNCZPHNZJIDXOYSZSSTDBNOBTDVAGQDYFDIQKAWJVCCGUXPGKDGDIATBBZUXJXPEJQPGJKXXFFGVYWKGWDNRLMUPBFBRULMQMZLEKN");
    msg.value = 131U;

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
    msg.setTimeStamp(0.180930957042);
    msg.setSource(50408U);
    msg.setSourceEntity(176U);
    msg.setDestination(51651U);
    msg.setDestinationEntity(250U);
    msg.id = 3U;
    msg.period = 22088312U;
    msg.duty_cycle = 211324704U;

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
    msg.setTimeStamp(0.337775348937);
    msg.setSource(25742U);
    msg.setSourceEntity(64U);
    msg.setDestination(60165U);
    msg.setDestinationEntity(216U);
    msg.id = 1U;
    msg.period = 3048569197U;
    msg.duty_cycle = 2009190179U;

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
    msg.setTimeStamp(0.835394495909);
    msg.setSource(17487U);
    msg.setSourceEntity(125U);
    msg.setDestination(34106U);
    msg.setDestinationEntity(66U);
    msg.id = 229U;
    msg.period = 1248024272U;
    msg.duty_cycle = 3509472249U;

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
    msg.setTimeStamp(0.756998962945);
    msg.setSource(39907U);
    msg.setSourceEntity(177U);
    msg.setDestination(40400U);
    msg.setDestinationEntity(150U);
    msg.id = 233U;
    msg.period = 564960354U;
    msg.duty_cycle = 1046457005U;

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
    msg.setTimeStamp(0.99566235736);
    msg.setSource(20452U);
    msg.setSourceEntity(52U);
    msg.setDestination(9845U);
    msg.setDestinationEntity(115U);
    msg.id = 240U;
    msg.period = 3411740404U;
    msg.duty_cycle = 2248164464U;

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
    msg.setTimeStamp(0.498526852949);
    msg.setSource(53185U);
    msg.setSourceEntity(13U);
    msg.setDestination(24226U);
    msg.setDestinationEntity(133U);
    msg.id = 19U;
    msg.period = 3378324225U;
    msg.duty_cycle = 1930277909U;

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
    msg.setTimeStamp(0.00131727499968);
    msg.setSource(42529U);
    msg.setSourceEntity(101U);
    msg.setDestination(4669U);
    msg.setDestinationEntity(10U);
    msg.lat = 0.0309420531392;
    msg.lon = 0.774805073303;
    msg.height = 0.143748801864;
    msg.x = 0.170581465455;
    msg.y = 0.22765855663;
    msg.z = 0.265998407945;
    msg.phi = 0.542339229659;
    msg.theta = 0.272104831132;
    msg.psi = 0.346404485402;
    msg.u = 0.60175724974;
    msg.v = 0.573503255487;
    msg.w = 0.815399192191;
    msg.vx = 0.228348710106;
    msg.vy = 0.41469010601;
    msg.vz = 0.0843749732586;
    msg.p = 0.962256683259;
    msg.q = 0.0510026087581;
    msg.r = 0.0367492761794;
    msg.depth = 0.556205608664;
    msg.alt = 0.0358370379648;

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
    msg.setTimeStamp(0.841518660985);
    msg.setSource(49856U);
    msg.setSourceEntity(200U);
    msg.setDestination(24533U);
    msg.setDestinationEntity(74U);
    msg.lat = 0.490253820493;
    msg.lon = 0.680480374848;
    msg.height = 0.030831284551;
    msg.x = 0.398256527245;
    msg.y = 0.669702279569;
    msg.z = 0.79762095959;
    msg.phi = 0.498058410729;
    msg.theta = 0.446588724663;
    msg.psi = 0.138544572756;
    msg.u = 0.718610228272;
    msg.v = 0.194554466558;
    msg.w = 0.77574634934;
    msg.vx = 0.964636618831;
    msg.vy = 0.92479906295;
    msg.vz = 0.64512232178;
    msg.p = 0.0353914067523;
    msg.q = 0.60530311015;
    msg.r = 0.366453625557;
    msg.depth = 0.457558516579;
    msg.alt = 0.339640968367;

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
    msg.setTimeStamp(0.601722690619);
    msg.setSource(61159U);
    msg.setSourceEntity(241U);
    msg.setDestination(21538U);
    msg.setDestinationEntity(134U);
    msg.lat = 0.821448299588;
    msg.lon = 0.228026293227;
    msg.height = 0.737597307335;
    msg.x = 0.302758411722;
    msg.y = 0.824770130726;
    msg.z = 0.317572591741;
    msg.phi = 0.278024763115;
    msg.theta = 0.821537806499;
    msg.psi = 0.679828843132;
    msg.u = 0.419380640594;
    msg.v = 0.516262874538;
    msg.w = 0.144399015423;
    msg.vx = 0.941329743388;
    msg.vy = 0.385296845515;
    msg.vz = 0.741843505514;
    msg.p = 0.933629043209;
    msg.q = 0.405850585342;
    msg.r = 0.149282617182;
    msg.depth = 0.869689262073;
    msg.alt = 0.744987119301;

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
    msg.setTimeStamp(0.744774850398);
    msg.setSource(57436U);
    msg.setSourceEntity(149U);
    msg.setDestination(39956U);
    msg.setDestinationEntity(145U);
    msg.x = 0.303184624303;
    msg.y = 0.331847519002;
    msg.z = 0.664628116176;

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
    msg.setTimeStamp(0.806239401605);
    msg.setSource(63999U);
    msg.setSourceEntity(190U);
    msg.setDestination(35815U);
    msg.setDestinationEntity(188U);
    msg.x = 0.278251073868;
    msg.y = 0.51089740747;
    msg.z = 0.707959166402;

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
    msg.setTimeStamp(0.719413164601);
    msg.setSource(14456U);
    msg.setSourceEntity(157U);
    msg.setDestination(18077U);
    msg.setDestinationEntity(162U);
    msg.x = 0.826738033334;
    msg.y = 0.985722466226;
    msg.z = 0.752264141872;

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
    msg.setTimeStamp(0.443174779051);
    msg.setSource(16104U);
    msg.setSourceEntity(116U);
    msg.setDestination(10600U);
    msg.setDestinationEntity(55U);
    msg.value = 0.383180663908;

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
    msg.setTimeStamp(0.481737496725);
    msg.setSource(48377U);
    msg.setSourceEntity(141U);
    msg.setDestination(19664U);
    msg.setDestinationEntity(253U);
    msg.value = 0.211183852974;

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
    msg.setTimeStamp(0.00469514133506);
    msg.setSource(20468U);
    msg.setSourceEntity(161U);
    msg.setDestination(23199U);
    msg.setDestinationEntity(89U);
    msg.value = 0.464019958329;

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
    msg.setTimeStamp(0.662693841571);
    msg.setSource(42508U);
    msg.setSourceEntity(39U);
    msg.setDestination(38016U);
    msg.setDestinationEntity(25U);
    msg.value = 0.85268156097;

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
    msg.setTimeStamp(0.697997971194);
    msg.setSource(59528U);
    msg.setSourceEntity(110U);
    msg.setDestination(37035U);
    msg.setDestinationEntity(95U);
    msg.value = 0.250805220083;

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
    msg.setTimeStamp(0.685167154891);
    msg.setSource(49510U);
    msg.setSourceEntity(181U);
    msg.setDestination(55394U);
    msg.setDestinationEntity(223U);
    msg.value = 0.640968617816;

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
    msg.setTimeStamp(0.476001144172);
    msg.setSource(50192U);
    msg.setSourceEntity(224U);
    msg.setDestination(29964U);
    msg.setDestinationEntity(160U);
    msg.x = 0.659942681442;
    msg.y = 0.0725655459147;
    msg.z = 0.554336822871;
    msg.phi = 0.746589822445;
    msg.theta = 0.721938590861;
    msg.psi = 0.644805846599;
    msg.p = 0.530020289643;
    msg.q = 0.491680315137;
    msg.r = 0.166795000994;
    msg.u = 0.724027420339;
    msg.v = 0.60418831804;
    msg.w = 0.503170845725;
    msg.bias_psi = 0.884803634908;
    msg.bias_r = 0.287041286666;

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
    msg.setTimeStamp(0.140069615403);
    msg.setSource(8601U);
    msg.setSourceEntity(152U);
    msg.setDestination(64730U);
    msg.setDestinationEntity(238U);
    msg.x = 0.0263709750854;
    msg.y = 0.840411803282;
    msg.z = 0.468908970137;
    msg.phi = 0.916400459481;
    msg.theta = 0.596192572058;
    msg.psi = 0.701882915774;
    msg.p = 0.26795805301;
    msg.q = 0.908838809996;
    msg.r = 0.144132529904;
    msg.u = 0.970697987665;
    msg.v = 0.733806929078;
    msg.w = 0.840381108657;
    msg.bias_psi = 0.0769470563801;
    msg.bias_r = 0.531162525722;

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
    msg.setTimeStamp(0.164745288232);
    msg.setSource(28798U);
    msg.setSourceEntity(209U);
    msg.setDestination(33295U);
    msg.setDestinationEntity(107U);
    msg.x = 0.217324636873;
    msg.y = 0.199828721983;
    msg.z = 0.578147232225;
    msg.phi = 0.725958410669;
    msg.theta = 0.560665965077;
    msg.psi = 0.760889555476;
    msg.p = 0.609019709888;
    msg.q = 0.395967322328;
    msg.r = 0.53124556755;
    msg.u = 0.508840484839;
    msg.v = 0.511577716394;
    msg.w = 0.409108553545;
    msg.bias_psi = 0.138738304833;
    msg.bias_r = 0.479360014734;

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
    msg.setTimeStamp(0.934807102455);
    msg.setSource(6743U);
    msg.setSourceEntity(254U);
    msg.setDestination(16937U);
    msg.setDestinationEntity(9U);
    msg.bias_psi = 0.899801566519;
    msg.bias_r = 0.269563257155;
    msg.cog = 0.728834916992;
    msg.cyaw = 0.179457028085;
    msg.gps_rej_level = 0.057009395018;
    msg.lbl_rej_level = 0.521478154325;
    msg.custom_x = 0.439634670546;
    msg.custom_y = 0.426490222326;
    msg.custom_z = 0.620853721204;

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
    msg.setTimeStamp(0.217995407647);
    msg.setSource(35668U);
    msg.setSourceEntity(244U);
    msg.setDestination(42236U);
    msg.setDestinationEntity(137U);
    msg.bias_psi = 0.488466691006;
    msg.bias_r = 0.371955463171;
    msg.cog = 0.0454779494146;
    msg.cyaw = 0.724786343547;
    msg.gps_rej_level = 0.700296427445;
    msg.lbl_rej_level = 0.954274284621;
    msg.custom_x = 0.12358970659;
    msg.custom_y = 0.7665946932;
    msg.custom_z = 0.530127410838;

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
    msg.setTimeStamp(0.266755391637);
    msg.setSource(7108U);
    msg.setSourceEntity(42U);
    msg.setDestination(14437U);
    msg.setDestinationEntity(222U);
    msg.bias_psi = 0.811900824574;
    msg.bias_r = 0.621156051096;
    msg.cog = 0.987879790472;
    msg.cyaw = 0.653252694986;
    msg.gps_rej_level = 0.299874721103;
    msg.lbl_rej_level = 0.0409354170272;
    msg.custom_x = 0.857642280576;
    msg.custom_y = 0.920702353708;
    msg.custom_z = 0.785389113931;

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
    msg.setTimeStamp(0.155792863555);
    msg.setSource(23086U);
    msg.setSourceEntity(142U);
    msg.setDestination(41070U);
    msg.setDestinationEntity(124U);
    msg.utc_time = 0.563034064978;
    msg.reason = 201U;

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
    msg.setTimeStamp(0.657877327115);
    msg.setSource(58783U);
    msg.setSourceEntity(240U);
    msg.setDestination(9793U);
    msg.setDestinationEntity(91U);
    msg.utc_time = 0.152938941674;
    msg.reason = 174U;

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
    msg.setTimeStamp(0.398639178774);
    msg.setSource(44207U);
    msg.setSourceEntity(68U);
    msg.setDestination(62159U);
    msg.setDestinationEntity(86U);
    msg.utc_time = 0.807515599866;
    msg.reason = 69U;

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
    msg.setTimeStamp(0.926445472356);
    msg.setSource(48587U);
    msg.setSourceEntity(175U);
    msg.setDestination(61499U);
    msg.setDestinationEntity(226U);
    msg.id = 8U;
    msg.range = 0.176125051736;
    msg.acceptance = 116U;

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
    msg.setTimeStamp(0.805786388134);
    msg.setSource(53062U);
    msg.setSourceEntity(186U);
    msg.setDestination(20083U);
    msg.setDestinationEntity(145U);
    msg.id = 142U;
    msg.range = 0.624521753096;
    msg.acceptance = 221U;

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
    msg.setTimeStamp(0.467915674482);
    msg.setSource(28397U);
    msg.setSourceEntity(26U);
    msg.setDestination(29669U);
    msg.setDestinationEntity(240U);
    msg.id = 237U;
    msg.range = 0.543995676458;
    msg.acceptance = 233U;

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
    msg.setTimeStamp(0.956451995894);
    msg.setSource(53055U);
    msg.setSourceEntity(83U);
    msg.setDestination(55388U);
    msg.setDestinationEntity(85U);
    msg.type = 197U;
    msg.reason = 18U;
    msg.value = 0.0996420116387;
    msg.timestep = 0.411896717385;

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
    msg.setTimeStamp(0.964910367292);
    msg.setSource(63673U);
    msg.setSourceEntity(222U);
    msg.setDestination(8475U);
    msg.setDestinationEntity(240U);
    msg.type = 182U;
    msg.reason = 39U;
    msg.value = 0.925555792686;
    msg.timestep = 0.394004135151;

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
    msg.setTimeStamp(0.852685692636);
    msg.setSource(14491U);
    msg.setSourceEntity(30U);
    msg.setDestination(49295U);
    msg.setDestinationEntity(209U);
    msg.type = 140U;
    msg.reason = 249U;
    msg.value = 0.977038179418;
    msg.timestep = 0.980911055674;

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
    msg.setTimeStamp(0.5403670858);
    msg.setSource(54476U);
    msg.setSourceEntity(113U);
    msg.setDestination(58652U);
    msg.setDestinationEntity(21U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("FOBYBKJBFDFJUGJWPYPTWRXBIKDBKEQNJZDOVMKUHSALLHVKIDNQTJOARVVNVLWFPAR");
    tmp_msg_0.lat = 0.0263042203206;
    tmp_msg_0.lon = 0.402813716696;
    tmp_msg_0.depth = 0.537089636961;
    tmp_msg_0.query_channel = 6U;
    tmp_msg_0.reply_channel = 18U;
    tmp_msg_0.transponder_delay = 237U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.991263826739;
    msg.y = 0.589682160412;
    msg.var_x = 0.688913418005;
    msg.var_y = 0.537021677821;
    msg.distance = 0.428118637123;

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
    msg.setTimeStamp(0.878336026407);
    msg.setSource(49308U);
    msg.setSourceEntity(173U);
    msg.setDestination(25988U);
    msg.setDestinationEntity(111U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("ABJOUOYXBVGSGXOWLVIJQGHYBIZNYFMHMSPFSZQAPIKMUWBQMRGHBFTZFQYALOOZXKWEOKIYTFWJZUWHWQPXXEXILNSFKUPPXKPULFBECBTJNPDMNDZEPOURUNSGELCFOLGPZYXYUTWQJDHSLTXSIEHGTMRTHFMAJRFTDKOENRSOMBDRIHNAYNJVARVUKVDHWWVTQZDVDRAC");
    tmp_msg_0.lat = 0.333401536389;
    tmp_msg_0.lon = 0.65495511327;
    tmp_msg_0.depth = 0.331951272018;
    tmp_msg_0.query_channel = 36U;
    tmp_msg_0.reply_channel = 190U;
    tmp_msg_0.transponder_delay = 236U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.692771966427;
    msg.y = 0.0424975623662;
    msg.var_x = 0.2875749445;
    msg.var_y = 0.0451107730119;
    msg.distance = 0.404545028803;

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
    msg.setTimeStamp(0.853713821921);
    msg.setSource(28621U);
    msg.setSourceEntity(51U);
    msg.setDestination(36940U);
    msg.setDestinationEntity(26U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("PFVHRPCXZJRFCYOFHJNHEPXZFKGCGMSSWOLSZQLRLIOHFMKUYSDYLVTCQMEVEWZQVOIVWSTBNQLH");
    tmp_msg_0.lat = 0.445314562704;
    tmp_msg_0.lon = 0.599183550319;
    tmp_msg_0.depth = 0.497571931527;
    tmp_msg_0.query_channel = 242U;
    tmp_msg_0.reply_channel = 196U;
    tmp_msg_0.transponder_delay = 49U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.209898010633;
    msg.y = 0.331007062398;
    msg.var_x = 0.567475628531;
    msg.var_y = 0.586639793359;
    msg.distance = 0.0943494369623;

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
    msg.setTimeStamp(0.919496857415);
    msg.setSource(58069U);
    msg.setSourceEntity(17U);
    msg.setDestination(31513U);
    msg.setDestinationEntity(108U);
    msg.state = 133U;

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
    msg.setTimeStamp(0.728287280427);
    msg.setSource(22558U);
    msg.setSourceEntity(129U);
    msg.setDestination(37271U);
    msg.setDestinationEntity(214U);
    msg.state = 176U;

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
    msg.setTimeStamp(0.584065968465);
    msg.setSource(13643U);
    msg.setSourceEntity(138U);
    msg.setDestination(13865U);
    msg.setDestinationEntity(251U);
    msg.state = 108U;

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
    msg.setTimeStamp(0.261479317241);
    msg.setSource(23674U);
    msg.setSourceEntity(94U);
    msg.setDestination(47217U);
    msg.setDestinationEntity(69U);
    msg.x = 0.894635122322;
    msg.y = 0.274879462803;
    msg.z = 0.514400322742;

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
    msg.setTimeStamp(0.986508124715);
    msg.setSource(7616U);
    msg.setSourceEntity(75U);
    msg.setDestination(54050U);
    msg.setDestinationEntity(89U);
    msg.x = 0.888210722422;
    msg.y = 0.00452848172823;
    msg.z = 0.140801828235;

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
    msg.setTimeStamp(0.145260787692);
    msg.setSource(52357U);
    msg.setSourceEntity(181U);
    msg.setDestination(54113U);
    msg.setDestinationEntity(170U);
    msg.x = 0.806654720696;
    msg.y = 0.686257459256;
    msg.z = 0.508469495077;

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
    msg.setTimeStamp(0.57216905068);
    msg.setSource(15354U);
    msg.setSourceEntity(108U);
    msg.setDestination(5227U);
    msg.setDestinationEntity(135U);
    msg.va = 0.226259331141;
    msg.aoa = 0.769984310428;
    msg.ssa = 0.0480076454352;

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
    msg.setTimeStamp(0.347282871316);
    msg.setSource(37864U);
    msg.setSourceEntity(234U);
    msg.setDestination(30451U);
    msg.setDestinationEntity(118U);
    msg.va = 0.0953569631961;
    msg.aoa = 0.416233813888;
    msg.ssa = 0.401531275274;

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
    msg.setTimeStamp(0.349550333774);
    msg.setSource(15801U);
    msg.setSourceEntity(39U);
    msg.setDestination(41827U);
    msg.setDestinationEntity(242U);
    msg.va = 0.0268179198797;
    msg.aoa = 0.461793759486;
    msg.ssa = 0.820690083914;

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
    msg.setTimeStamp(0.20298869549);
    msg.setSource(19172U);
    msg.setSourceEntity(237U);
    msg.setDestination(44019U);
    msg.setDestinationEntity(217U);
    msg.value = 0.422975045012;
    msg.off = 0.915112192467;

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
    msg.setTimeStamp(0.00591023339677);
    msg.setSource(15900U);
    msg.setSourceEntity(149U);
    msg.setDestination(51591U);
    msg.setDestinationEntity(69U);
    msg.value = 0.511833083815;
    msg.off = 0.0572975915682;

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
    msg.setTimeStamp(0.53685504782);
    msg.setSource(35780U);
    msg.setSourceEntity(86U);
    msg.setDestination(21220U);
    msg.setDestinationEntity(17U);
    msg.value = 0.434773423465;
    msg.off = 0.0113303584551;

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
    msg.setTimeStamp(0.7379983651);
    msg.setSource(62187U);
    msg.setSourceEntity(251U);
    msg.setDestination(35231U);
    msg.setDestinationEntity(107U);
    msg.value = 0.301712476253;
    msg.z_units = 14U;

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
    msg.setTimeStamp(0.23092398505);
    msg.setSource(12171U);
    msg.setSourceEntity(118U);
    msg.setDestination(55693U);
    msg.setDestinationEntity(155U);
    msg.value = 0.313919054163;
    msg.z_units = 8U;

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
    msg.setTimeStamp(0.790619064802);
    msg.setSource(29372U);
    msg.setSourceEntity(153U);
    msg.setDestination(22633U);
    msg.setDestinationEntity(21U);
    msg.value = 0.252888958643;
    msg.z_units = 248U;

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
    msg.setTimeStamp(0.385017416868);
    msg.setSource(17284U);
    msg.setSourceEntity(7U);
    msg.setDestination(19901U);
    msg.setDestinationEntity(196U);
    msg.value = 0.158545043635;
    msg.speed_units = 247U;

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
    msg.setTimeStamp(0.99668308602);
    msg.setSource(467U);
    msg.setSourceEntity(194U);
    msg.setDestination(17022U);
    msg.setDestinationEntity(249U);
    msg.value = 0.478203341549;
    msg.speed_units = 118U;

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
    msg.setTimeStamp(0.533157493158);
    msg.setSource(30081U);
    msg.setSourceEntity(101U);
    msg.setDestination(17115U);
    msg.setDestinationEntity(4U);
    msg.value = 0.57404404907;
    msg.speed_units = 22U;

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
    msg.setTimeStamp(0.881675467117);
    msg.setSource(44525U);
    msg.setSourceEntity(233U);
    msg.setDestination(40996U);
    msg.setDestinationEntity(138U);
    msg.value = 0.580002290021;

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
    msg.setTimeStamp(0.276573971504);
    msg.setSource(61742U);
    msg.setSourceEntity(72U);
    msg.setDestination(22718U);
    msg.setDestinationEntity(150U);
    msg.value = 0.334582589583;

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
    msg.setTimeStamp(0.433968583157);
    msg.setSource(57795U);
    msg.setSourceEntity(192U);
    msg.setDestination(15926U);
    msg.setDestinationEntity(122U);
    msg.value = 0.858355129377;

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
    msg.setTimeStamp(0.964486326006);
    msg.setSource(30626U);
    msg.setSourceEntity(162U);
    msg.setDestination(48951U);
    msg.setDestinationEntity(93U);
    msg.value = 0.665730966652;

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
    msg.setTimeStamp(0.367515574441);
    msg.setSource(45614U);
    msg.setSourceEntity(161U);
    msg.setDestination(23445U);
    msg.setDestinationEntity(69U);
    msg.value = 0.63205160884;

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
    msg.setTimeStamp(0.569449478174);
    msg.setSource(43356U);
    msg.setSourceEntity(108U);
    msg.setDestination(39285U);
    msg.setDestinationEntity(33U);
    msg.value = 0.665063729047;

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
    msg.setTimeStamp(0.660612763231);
    msg.setSource(5452U);
    msg.setSourceEntity(208U);
    msg.setDestination(65273U);
    msg.setDestinationEntity(52U);
    msg.value = 0.063972763288;

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
    msg.setTimeStamp(0.94809267756);
    msg.setSource(34848U);
    msg.setSourceEntity(199U);
    msg.setDestination(39348U);
    msg.setDestinationEntity(145U);
    msg.value = 0.840294934114;

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
    msg.setTimeStamp(0.729529982097);
    msg.setSource(38429U);
    msg.setSourceEntity(90U);
    msg.setDestination(17584U);
    msg.setDestinationEntity(7U);
    msg.value = 0.583032363244;

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
    msg.setTimeStamp(0.530051560715);
    msg.setSource(22543U);
    msg.setSourceEntity(94U);
    msg.setDestination(20669U);
    msg.setDestinationEntity(208U);
    msg.path_ref = 2703925946U;
    msg.start_lat = 0.73432196554;
    msg.start_lon = 0.0415745931995;
    msg.start_z = 0.232065472725;
    msg.start_z_units = 106U;
    msg.end_lat = 0.578509036638;
    msg.end_lon = 0.447397398453;
    msg.end_z = 0.341668810715;
    msg.end_z_units = 84U;
    msg.speed = 0.218847004809;
    msg.speed_units = 193U;
    msg.lradius = 0.660765326375;
    msg.flags = 209U;

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
    msg.setTimeStamp(0.651745232275);
    msg.setSource(21699U);
    msg.setSourceEntity(209U);
    msg.setDestination(63885U);
    msg.setDestinationEntity(229U);
    msg.path_ref = 998386719U;
    msg.start_lat = 0.251667104893;
    msg.start_lon = 0.600860527566;
    msg.start_z = 0.97717063752;
    msg.start_z_units = 237U;
    msg.end_lat = 0.160843450182;
    msg.end_lon = 0.810658709917;
    msg.end_z = 0.920689234023;
    msg.end_z_units = 43U;
    msg.speed = 0.243528398316;
    msg.speed_units = 16U;
    msg.lradius = 0.100260424854;
    msg.flags = 244U;

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
    msg.setTimeStamp(0.787962364543);
    msg.setSource(9203U);
    msg.setSourceEntity(252U);
    msg.setDestination(42392U);
    msg.setDestinationEntity(24U);
    msg.path_ref = 2063813334U;
    msg.start_lat = 0.318132854177;
    msg.start_lon = 0.290070858069;
    msg.start_z = 0.948360922506;
    msg.start_z_units = 46U;
    msg.end_lat = 0.107120481625;
    msg.end_lon = 0.272198289606;
    msg.end_z = 0.319254787992;
    msg.end_z_units = 32U;
    msg.speed = 0.618928334346;
    msg.speed_units = 126U;
    msg.lradius = 0.705208045805;
    msg.flags = 216U;

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
    msg.setTimeStamp(0.84659246671);
    msg.setSource(64828U);
    msg.setSourceEntity(239U);
    msg.setDestination(5269U);
    msg.setDestinationEntity(243U);
    msg.x = 0.160932364413;
    msg.y = 0.310155595146;
    msg.z = 0.522514691516;
    msg.k = 0.552222497246;
    msg.m = 0.0800977725069;
    msg.n = 0.988849691923;
    msg.flags = 99U;

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
    msg.setTimeStamp(0.660239121883);
    msg.setSource(43868U);
    msg.setSourceEntity(84U);
    msg.setDestination(32148U);
    msg.setDestinationEntity(165U);
    msg.x = 0.766970811302;
    msg.y = 0.826277846923;
    msg.z = 0.119498190262;
    msg.k = 0.459363002701;
    msg.m = 0.314335746594;
    msg.n = 0.0107227231544;
    msg.flags = 144U;

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
    msg.setTimeStamp(0.412262566936);
    msg.setSource(59670U);
    msg.setSourceEntity(234U);
    msg.setDestination(25361U);
    msg.setDestinationEntity(76U);
    msg.x = 0.77412273411;
    msg.y = 0.060779407543;
    msg.z = 0.133805885225;
    msg.k = 0.0772692482559;
    msg.m = 0.0952604024381;
    msg.n = 0.960875688492;
    msg.flags = 57U;

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
    msg.setTimeStamp(0.893711532436);
    msg.setSource(8417U);
    msg.setSourceEntity(89U);
    msg.setDestination(13174U);
    msg.setDestinationEntity(154U);
    msg.value = 0.16264748024;

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
    msg.setTimeStamp(0.88110180458);
    msg.setSource(16551U);
    msg.setSourceEntity(131U);
    msg.setDestination(36695U);
    msg.setDestinationEntity(26U);
    msg.value = 0.264035409794;

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
    msg.setTimeStamp(0.572944250914);
    msg.setSource(28721U);
    msg.setSourceEntity(245U);
    msg.setDestination(39633U);
    msg.setDestinationEntity(165U);
    msg.value = 0.959266388309;

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
    msg.setTimeStamp(0.718086671829);
    msg.setSource(46832U);
    msg.setSourceEntity(43U);
    msg.setDestination(54894U);
    msg.setDestinationEntity(175U);
    msg.u = 0.571813791949;
    msg.v = 0.131392556526;
    msg.w = 0.265449012871;
    msg.p = 0.202621621535;
    msg.q = 0.728799626968;
    msg.r = 0.217585831994;
    msg.flags = 137U;

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
    msg.setTimeStamp(0.984393107001);
    msg.setSource(49186U);
    msg.setSourceEntity(125U);
    msg.setDestination(49183U);
    msg.setDestinationEntity(169U);
    msg.u = 0.192741165601;
    msg.v = 0.535552384717;
    msg.w = 0.907728647725;
    msg.p = 0.761428083684;
    msg.q = 0.237663393929;
    msg.r = 0.292825314681;
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
    msg.setTimeStamp(0.921854680394);
    msg.setSource(64810U);
    msg.setSourceEntity(102U);
    msg.setDestination(44622U);
    msg.setDestinationEntity(38U);
    msg.u = 0.940265038919;
    msg.v = 0.789593694646;
    msg.w = 0.351948194274;
    msg.p = 0.188111307548;
    msg.q = 0.793294557254;
    msg.r = 0.810486722595;
    msg.flags = 43U;

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
    msg.setTimeStamp(0.827939533385);
    msg.setSource(15701U);
    msg.setSourceEntity(27U);
    msg.setDestination(44132U);
    msg.setDestinationEntity(111U);
    msg.path_ref = 3207099759U;
    msg.start_lat = 0.213827563016;
    msg.start_lon = 0.636701319899;
    msg.start_z = 0.324640125782;
    msg.start_z_units = 170U;
    msg.end_lat = 0.855584392488;
    msg.end_lon = 0.497235489735;
    msg.end_z = 0.455376441623;
    msg.end_z_units = 18U;
    msg.lradius = 0.633532705708;
    msg.flags = 64U;
    msg.x = 0.15807486167;
    msg.y = 0.459658360484;
    msg.z = 0.566837808172;
    msg.vx = 0.34467132027;
    msg.vy = 0.523029762002;
    msg.vz = 0.0392514803835;
    msg.course_error = 0.707839412273;
    msg.eta = 34634U;

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
    msg.setTimeStamp(0.667367375124);
    msg.setSource(26606U);
    msg.setSourceEntity(109U);
    msg.setDestination(58528U);
    msg.setDestinationEntity(245U);
    msg.path_ref = 3017173876U;
    msg.start_lat = 0.42851504827;
    msg.start_lon = 0.141672042862;
    msg.start_z = 0.828642135513;
    msg.start_z_units = 151U;
    msg.end_lat = 0.956761111248;
    msg.end_lon = 0.0397396483875;
    msg.end_z = 0.344634201203;
    msg.end_z_units = 114U;
    msg.lradius = 0.959182412446;
    msg.flags = 174U;
    msg.x = 0.284227623495;
    msg.y = 0.301553776928;
    msg.z = 0.120221828597;
    msg.vx = 0.206793807326;
    msg.vy = 0.114543331784;
    msg.vz = 0.0473406202912;
    msg.course_error = 0.0624128065818;
    msg.eta = 14146U;

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
    msg.setTimeStamp(0.0788771645823);
    msg.setSource(29435U);
    msg.setSourceEntity(249U);
    msg.setDestination(35111U);
    msg.setDestinationEntity(174U);
    msg.path_ref = 3102617345U;
    msg.start_lat = 0.358465772259;
    msg.start_lon = 0.645135711028;
    msg.start_z = 0.767491934338;
    msg.start_z_units = 49U;
    msg.end_lat = 0.308414952533;
    msg.end_lon = 0.165745777742;
    msg.end_z = 0.44822202308;
    msg.end_z_units = 206U;
    msg.lradius = 0.544001085883;
    msg.flags = 29U;
    msg.x = 0.159906812444;
    msg.y = 0.559459109205;
    msg.z = 0.968886196676;
    msg.vx = 0.817891645096;
    msg.vy = 0.163171703268;
    msg.vz = 0.861754541233;
    msg.course_error = 0.240404512654;
    msg.eta = 53932U;

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
    msg.setTimeStamp(0.829775157223);
    msg.setSource(24769U);
    msg.setSourceEntity(60U);
    msg.setDestination(6650U);
    msg.setDestinationEntity(36U);
    msg.k = 0.540763098911;
    msg.m = 0.620125363241;
    msg.n = 0.158158333337;

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
    msg.setTimeStamp(0.988537414142);
    msg.setSource(10534U);
    msg.setSourceEntity(167U);
    msg.setDestination(41583U);
    msg.setDestinationEntity(174U);
    msg.k = 0.156644193361;
    msg.m = 0.839982319359;
    msg.n = 0.468245055574;

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
    msg.setTimeStamp(0.74207141094);
    msg.setSource(31348U);
    msg.setSourceEntity(13U);
    msg.setDestination(34434U);
    msg.setDestinationEntity(12U);
    msg.k = 0.371072450082;
    msg.m = 0.150469224773;
    msg.n = 0.181771213806;

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
    msg.setTimeStamp(0.981751509719);
    msg.setSource(36762U);
    msg.setSourceEntity(203U);
    msg.setDestination(31683U);
    msg.setDestinationEntity(101U);
    msg.p = 0.474576358039;
    msg.i = 0.279558015856;
    msg.d = 0.658951614067;
    msg.a = 0.673915596418;

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
    msg.setTimeStamp(0.143727221927);
    msg.setSource(6113U);
    msg.setSourceEntity(80U);
    msg.setDestination(17906U);
    msg.setDestinationEntity(238U);
    msg.p = 0.0506204864827;
    msg.i = 0.0407612522837;
    msg.d = 0.377773750032;
    msg.a = 0.767600771188;

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
    msg.setTimeStamp(0.408743480872);
    msg.setSource(52550U);
    msg.setSourceEntity(6U);
    msg.setDestination(17389U);
    msg.setDestinationEntity(130U);
    msg.p = 0.865280757624;
    msg.i = 0.125916213019;
    msg.d = 0.648539822949;
    msg.a = 0.281996918224;

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
    msg.setTimeStamp(0.685797344366);
    msg.setSource(38150U);
    msg.setSourceEntity(3U);
    msg.setDestination(5851U);
    msg.setDestinationEntity(108U);
    msg.op = 77U;

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
    msg.setTimeStamp(0.302478078005);
    msg.setSource(35497U);
    msg.setSourceEntity(136U);
    msg.setDestination(26619U);
    msg.setDestinationEntity(60U);
    msg.op = 48U;

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
    msg.setTimeStamp(0.0622768170942);
    msg.setSource(48419U);
    msg.setSourceEntity(182U);
    msg.setDestination(51933U);
    msg.setDestinationEntity(66U);
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
    msg.setTimeStamp(0.314782122294);
    msg.setSource(58442U);
    msg.setSourceEntity(209U);
    msg.setDestination(44357U);
    msg.setDestinationEntity(233U);
    msg.x = 0.69723080859;
    msg.y = 0.167992366694;
    msg.z = 0.621674055874;
    msg.vx = 0.349795405113;
    msg.vy = 0.0329298854775;
    msg.vz = 0.82625786213;
    msg.ax = 0.792392857218;
    msg.ay = 0.688279870817;
    msg.az = 0.998732080985;
    msg.flags = 30786U;

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
    msg.setTimeStamp(0.74600233411);
    msg.setSource(7041U);
    msg.setSourceEntity(111U);
    msg.setDestination(35927U);
    msg.setDestinationEntity(241U);
    msg.x = 0.461157922697;
    msg.y = 0.625324093776;
    msg.z = 0.510215189147;
    msg.vx = 0.93195260523;
    msg.vy = 0.171835626017;
    msg.vz = 0.565904885699;
    msg.ax = 0.0315874367014;
    msg.ay = 0.445269268446;
    msg.az = 0.728047558175;
    msg.flags = 37990U;

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
    msg.setTimeStamp(0.64574615079);
    msg.setSource(42503U);
    msg.setSourceEntity(66U);
    msg.setDestination(28462U);
    msg.setDestinationEntity(232U);
    msg.x = 0.124035599274;
    msg.y = 0.57878494734;
    msg.z = 0.216080857863;
    msg.vx = 0.906113946161;
    msg.vy = 0.313138849777;
    msg.vz = 0.273551361195;
    msg.ax = 0.93978600964;
    msg.ay = 0.710920480299;
    msg.az = 0.405908637832;
    msg.flags = 10583U;

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
    msg.setTimeStamp(0.742094444154);
    msg.setSource(21533U);
    msg.setSourceEntity(219U);
    msg.setDestination(9734U);
    msg.setDestinationEntity(75U);
    msg.value = 0.794570526719;

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
    msg.setTimeStamp(0.0147017236385);
    msg.setSource(49482U);
    msg.setSourceEntity(125U);
    msg.setDestination(39385U);
    msg.setDestinationEntity(71U);
    msg.value = 0.244827644143;

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
    msg.setTimeStamp(0.651802520416);
    msg.setSource(20566U);
    msg.setSourceEntity(49U);
    msg.setDestination(45101U);
    msg.setDestinationEntity(57U);
    msg.value = 0.169331460002;

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
    msg.setTimeStamp(0.25230402172);
    msg.setSource(98U);
    msg.setSourceEntity(249U);
    msg.setDestination(64284U);
    msg.setDestinationEntity(209U);
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.path_ref = 2275585982U;
    tmp_msg_0.start_lat = 0.429363562354;
    tmp_msg_0.start_lon = 0.638584051391;
    tmp_msg_0.start_z = 0.170444371167;
    tmp_msg_0.start_z_units = 123U;
    tmp_msg_0.end_lat = 0.901062118016;
    tmp_msg_0.end_lon = 0.391996165809;
    tmp_msg_0.end_z = 0.629631075965;
    tmp_msg_0.end_z_units = 74U;
    tmp_msg_0.speed = 0.548176013448;
    tmp_msg_0.speed_units = 90U;
    tmp_msg_0.lradius = 0.206022969477;
    tmp_msg_0.flags = 231U;
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
    msg.setTimeStamp(0.132021066114);
    msg.setSource(12093U);
    msg.setSourceEntity(164U);
    msg.setDestination(16942U);
    msg.setDestinationEntity(5U);
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.path_ref = 3004435249U;
    tmp_msg_0.start_lat = 0.889563245984;
    tmp_msg_0.start_lon = 0.249035854483;
    tmp_msg_0.start_z = 0.994123829043;
    tmp_msg_0.start_z_units = 55U;
    tmp_msg_0.end_lat = 0.21868944875;
    tmp_msg_0.end_lon = 0.398873079115;
    tmp_msg_0.end_z = 0.628281093626;
    tmp_msg_0.end_z_units = 193U;
    tmp_msg_0.speed = 0.0395354756116;
    tmp_msg_0.speed_units = 249U;
    tmp_msg_0.lradius = 0.624662318726;
    tmp_msg_0.flags = 219U;
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
    msg.setTimeStamp(0.24897130238);
    msg.setSource(53454U);
    msg.setSourceEntity(72U);
    msg.setDestination(40309U);
    msg.setDestinationEntity(33U);
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.path_ref = 2866929644U;
    tmp_msg_0.start_lat = 0.735083113309;
    tmp_msg_0.start_lon = 0.469332328066;
    tmp_msg_0.start_z = 0.855415831136;
    tmp_msg_0.start_z_units = 123U;
    tmp_msg_0.end_lat = 0.365191865632;
    tmp_msg_0.end_lon = 0.0913061231428;
    tmp_msg_0.end_z = 0.111611625758;
    tmp_msg_0.end_z_units = 139U;
    tmp_msg_0.speed = 0.46223598819;
    tmp_msg_0.speed_units = 35U;
    tmp_msg_0.lradius = 0.686148588963;
    tmp_msg_0.flags = 177U;
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
    msg.setTimeStamp(0.649363885357);
    msg.setSource(30445U);
    msg.setSourceEntity(138U);
    msg.setDestination(29308U);
    msg.setDestinationEntity(190U);
    msg.timeout = 10038U;
    msg.lat = 0.29600715141;
    msg.lon = 0.1464111727;
    msg.z = 0.729011204836;
    msg.z_units = 58U;
    msg.speed = 0.224342449825;
    msg.speed_units = 29U;
    msg.roll = 0.615908152955;
    msg.pitch = 0.762674362177;
    msg.yaw = 0.012628314833;
    msg.custom.assign("QVOETNNUCSVSPTPTWQPRDPIAMUXFBZWIKEZFNDFNOHFNGHMPUBFUXDBJTBLBQMOLCSLTYSSSJXVHXXRGFWFSFBYRNLAMYXVRYWYDEQZSCYVQLZJTQNTORLDZIUACCUCGSAWLJHGDGK");

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
    msg.setTimeStamp(0.463011058093);
    msg.setSource(31424U);
    msg.setSourceEntity(163U);
    msg.setDestination(26231U);
    msg.setDestinationEntity(249U);
    msg.timeout = 8415U;
    msg.lat = 0.0547993710968;
    msg.lon = 0.952191033492;
    msg.z = 0.626357027904;
    msg.z_units = 124U;
    msg.speed = 0.79176856278;
    msg.speed_units = 167U;
    msg.roll = 0.250283817507;
    msg.pitch = 0.000783152206717;
    msg.yaw = 0.480657160956;
    msg.custom.assign("YTLDVVSUYDZACYBKZIOJWMWGOAGVNBBOOHDEJXZOCILTDDLRWKRQLCMUZPQDCJQKMHXMIZGWEHYERGZPVJEZNPNC");

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
    msg.setTimeStamp(0.124348741295);
    msg.setSource(6674U);
    msg.setSourceEntity(124U);
    msg.setDestination(16100U);
    msg.setDestinationEntity(207U);
    msg.timeout = 61322U;
    msg.lat = 0.5000855064;
    msg.lon = 0.270400113177;
    msg.z = 0.133553146223;
    msg.z_units = 93U;
    msg.speed = 0.18180332172;
    msg.speed_units = 251U;
    msg.roll = 0.929972300239;
    msg.pitch = 0.484412235281;
    msg.yaw = 0.0215096021045;
    msg.custom.assign("WVZIVOFSQZSIHMBRHLJEOBRGFYSIAKQRRGUACJYCQGFADIUTZFTZLEBPKAKNTHEMDUFN");

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
    msg.setTimeStamp(0.0471870286617);
    msg.setSource(17256U);
    msg.setSourceEntity(74U);
    msg.setDestination(45394U);
    msg.setDestinationEntity(87U);
    msg.timeout = 14474U;
    msg.lat = 0.967626156528;
    msg.lon = 0.531691304192;
    msg.z = 0.000250053222702;
    msg.z_units = 54U;
    msg.speed = 0.0931576745996;
    msg.speed_units = 125U;
    msg.duration = 48296U;
    msg.radius = 0.581072831801;
    msg.flags = 162U;
    msg.custom.assign("XERZIAQLPZUSATTNWKYIFDATGARCNKXPDJIWSNMXQLQUPGSEZFSBTPSRUOBGNKUJMWOVXAUYIYDTJTUMDJRZWYLIACYOBHHXCESFRFPFQMVQOGFZMSMJDRVZLKPOEIZCCBTOVKIGXUYFVVRNMMSJHXENEHVWWTTHCJNICVDPAYACXPQZLZBNERZLXJYOBEKYLKHHWEBVQLGGNCKFKHCPFQOQVBSDYUDLQUGFRBOWIGJWHT");

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
    msg.setTimeStamp(0.224390051057);
    msg.setSource(450U);
    msg.setSourceEntity(141U);
    msg.setDestination(48778U);
    msg.setDestinationEntity(153U);
    msg.timeout = 53869U;
    msg.lat = 0.875228278946;
    msg.lon = 0.123140425721;
    msg.z = 0.445805017741;
    msg.z_units = 16U;
    msg.speed = 0.425481855074;
    msg.speed_units = 122U;
    msg.duration = 48160U;
    msg.radius = 0.900451839036;
    msg.flags = 106U;
    msg.custom.assign("TCIDLPLUXCPFLYONNOVMSQKKJRXXMKGYOXQFOLPTCFIF");

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
    msg.setTimeStamp(0.577083343601);
    msg.setSource(12616U);
    msg.setSourceEntity(103U);
    msg.setDestination(46086U);
    msg.setDestinationEntity(98U);
    msg.timeout = 64319U;
    msg.lat = 0.951858123678;
    msg.lon = 0.955725192151;
    msg.z = 0.516826605963;
    msg.z_units = 32U;
    msg.speed = 0.906655070095;
    msg.speed_units = 11U;
    msg.duration = 53966U;
    msg.radius = 0.490424865634;
    msg.flags = 0U;
    msg.custom.assign("VSLDAZYHYMSLMXKUJIUAWKNBKDCFZDGSDHYKVLWLFAJASEMCFEDFYEQFXKVEVHWKOVIRVQTKEPRLHIXFCGIJOLXNTZULHOYXBPENKISIRGPIGFSRXGWKA");

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
    msg.setTimeStamp(0.906713571604);
    msg.setSource(32327U);
    msg.setSourceEntity(151U);
    msg.setDestination(35746U);
    msg.setDestinationEntity(81U);
    msg.custom.assign("KGODMMELMHPGVBDXBOQIUFWATCZXJGHVVJUXXNJNZNQQRMAOIIIHUDWGYVNZIJRSQQUTFEZWUKLSSQHCURLRCFOOTAUPRDXWQBGLYCKNXAYBJVQTJFQSYJBCKHVEDUFGAOMXNXKTCOMSCEDTUJSPMSSAFIRRRWDGDZVZTLXVNOAEHPFBLJLSYHWYFYABIFZWCTDEHNYTIEJPYCBANP");

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
    msg.setTimeStamp(0.359993160526);
    msg.setSource(5920U);
    msg.setSourceEntity(176U);
    msg.setDestination(61198U);
    msg.setDestinationEntity(252U);
    msg.custom.assign("OJVDTMVOQIOBXEZCWKGMXRLDDSZMWVTPQXPHKFJTPXJELIOBNWDKAOBRGNYHEUMIGIASOKEXFMYAESCLECCQKJPFUWYYVDVRSYL");

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
    msg.setTimeStamp(0.163251344308);
    msg.setSource(52927U);
    msg.setSourceEntity(150U);
    msg.setDestination(20209U);
    msg.setDestinationEntity(30U);
    msg.custom.assign("JRAHPJZKRAWVTVYMJXITPGBNETKPHGSOSJFJLUYZHKHPSRYVWKEVEKEWSIHXQYLXCOCXVIZPINCXTUADDODQMGTEZJLIMPILBUWSAFTBBJVLFZWLZVQBDWUDVXLRFFWRAWYFZTKBNAWFHQVOLMNMOEYIBBNEDSMSIUCZIKQCUFWXUBBHTRYSPOGGNQUFUGGJZNOPAOQIUKQDPHHYCMTCRXLDMSQXGYEG");

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
    msg.setTimeStamp(0.0748833474949);
    msg.setSource(48716U);
    msg.setSourceEntity(238U);
    msg.setDestination(61350U);
    msg.setDestinationEntity(145U);
    msg.timeout = 7480U;
    msg.lat = 0.93776015415;
    msg.lon = 0.81668620482;
    msg.z = 0.56711722436;
    msg.z_units = 183U;
    msg.duration = 32326U;
    msg.speed = 0.337404205531;
    msg.speed_units = 45U;
    msg.type = 65U;
    msg.radius = 0.294894208504;
    msg.length = 0.146303275952;
    msg.bearing = 0.95051935741;
    msg.direction = 135U;
    msg.custom.assign("CBIQHFTOYLQWRVGKAEWJURQANVFIORINSQRLWQNBXMMIXSICNWGJTIFOBUNI");

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
    msg.setTimeStamp(0.163690672112);
    msg.setSource(60410U);
    msg.setSourceEntity(236U);
    msg.setDestination(57325U);
    msg.setDestinationEntity(253U);
    msg.timeout = 26664U;
    msg.lat = 0.0139805087046;
    msg.lon = 0.50466235244;
    msg.z = 0.859010628286;
    msg.z_units = 254U;
    msg.duration = 21297U;
    msg.speed = 0.679669449995;
    msg.speed_units = 209U;
    msg.type = 165U;
    msg.radius = 0.115258834338;
    msg.length = 0.918493872515;
    msg.bearing = 0.478259812525;
    msg.direction = 183U;
    msg.custom.assign("AWVBJGNFIJGMLEKYDFYCVSTLJFKGWOENIRYDXFPEZREQKSXPVVDFTWHLKIBQQKTOPUFINNRVLLUUFNVHBDORWVBRBCOTOGXRKSJGGIZIPCARQSOXDHMEKYZUVALNXDG");

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
    msg.setTimeStamp(0.929463233588);
    msg.setSource(56290U);
    msg.setSourceEntity(223U);
    msg.setDestination(2904U);
    msg.setDestinationEntity(92U);
    msg.timeout = 39195U;
    msg.lat = 0.622047210856;
    msg.lon = 0.765620246078;
    msg.z = 0.678550606332;
    msg.z_units = 20U;
    msg.duration = 38967U;
    msg.speed = 0.602727884837;
    msg.speed_units = 146U;
    msg.type = 96U;
    msg.radius = 0.615336237299;
    msg.length = 0.380367506961;
    msg.bearing = 0.116891864181;
    msg.direction = 61U;
    msg.custom.assign("ZECLLIQFPRBFZXUOBMKDGKIEWYGFAUDSQCSDGCKDNZCGREATQLEJVMHEQVBXOUKVCOSJSQMMGJASCKGMAUOSDEIKNYFJUAYWJMXGQWHINJTPTOSIXUORGKBSKUIKZMBLEOWFYVNUYLDBQBWTCLXHYPBIMVVTA");

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
    msg.setTimeStamp(0.16506429779);
    msg.setSource(49751U);
    msg.setSourceEntity(46U);
    msg.setDestination(59794U);
    msg.setDestinationEntity(129U);
    msg.duration = 1741U;
    msg.custom.assign("XZUYQNAOXUPFPSHIDKGZJNSBEMCRFLMXNZUMSZJQYEVOKHWHWTHBOHFJJLEDQDXKFKAOUMPNFEOSZMRVLXRHYHO");

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
    msg.setTimeStamp(0.148841953899);
    msg.setSource(7923U);
    msg.setSourceEntity(21U);
    msg.setDestination(29964U);
    msg.setDestinationEntity(148U);
    msg.duration = 19331U;
    msg.custom.assign("PITBQTSLUAGXRVPNDMBBZKPWRBFKVIFDMOJYODCVUCPQNKYVWTPCSESHGEUSIRSNKKHIYOOQRALGYBXEYFLSRCLFTACWCTUNQQKEOZRJNBDJZNDBXYXXFTDFMZMGYWZGKMLRMEGICWAUAGLPDSHWTQJCJW");

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
    msg.setTimeStamp(0.0365682343229);
    msg.setSource(9196U);
    msg.setSourceEntity(235U);
    msg.setDestination(8965U);
    msg.setDestinationEntity(90U);
    msg.duration = 3132U;
    msg.custom.assign("GHFUYERPVYQHDEGLWEOBNNJZFXPUWOAJFQCOXRDIQRHXQCKNDKWHPZJQXJIEWVSBFMHXGLWOBKKPNPOWVDAMANNSHOCRHLMSTKPYMONMSJZHBLYZBLZUAXVBLIKYRRXEYQTUFYPGEKNAQRAMGIFNPZLJUGWJDCDDHDFVZWEMSBVGRTLKTWCUMFFS");

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
    msg.setTimeStamp(0.328044394438);
    msg.setSource(18748U);
    msg.setSourceEntity(148U);
    msg.setDestination(57352U);
    msg.setDestinationEntity(29U);
    IMC::DesiredZ tmp_msg_0;
    tmp_msg_0.value = 0.158345118794;
    tmp_msg_0.z_units = 78U;
    msg.control.set(tmp_msg_0);
    msg.duration = 46325U;
    msg.custom.assign("FALVUWSBPWGAEZCHLGISJRYBAIHGJHSDBDCQBNKFQEAMILXRQKOCGTSINKCCHVSFMPWLAISPAGTELIASFEFELTKPUZETYYNJMPGWOLQHCBMDEVLTORILPKGTGNJYOKZDUZTNWXMXZUDDXPFZDZWMOQSDURQDERHKLRNAZQYYMZBJZMCMFSTVRIXNSXKWYEHPOCBY");

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
    msg.setTimeStamp(0.476749934553);
    msg.setSource(44733U);
    msg.setSourceEntity(125U);
    msg.setDestination(12693U);
    msg.setDestinationEntity(173U);
    IMC::DesiredThrottle tmp_msg_0;
    tmp_msg_0.value = 0.343719569478;
    msg.control.set(tmp_msg_0);
    msg.duration = 44614U;
    msg.custom.assign("TJGOIWTTVWHFTVORYUMXOHCRXNHWPPOK");

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
    msg.setTimeStamp(0.648655755879);
    msg.setSource(63438U);
    msg.setSourceEntity(148U);
    msg.setDestination(42003U);
    msg.setDestinationEntity(223U);
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.path_ref = 2980706228U;
    tmp_msg_0.start_lat = 0.488726824801;
    tmp_msg_0.start_lon = 0.0452627234252;
    tmp_msg_0.start_z = 0.419028935766;
    tmp_msg_0.start_z_units = 191U;
    tmp_msg_0.end_lat = 0.932752443551;
    tmp_msg_0.end_lon = 0.880320337486;
    tmp_msg_0.end_z = 0.104163158213;
    tmp_msg_0.end_z_units = 160U;
    tmp_msg_0.speed = 0.450678933892;
    tmp_msg_0.speed_units = 155U;
    tmp_msg_0.lradius = 0.544304196328;
    tmp_msg_0.flags = 137U;
    msg.control.set(tmp_msg_0);
    msg.duration = 17622U;
    msg.custom.assign("GDPWGJUYTBHPLAZORBIJXAFPECDK");

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
    msg.setTimeStamp(0.00800141683391);
    msg.setSource(45276U);
    msg.setSourceEntity(24U);
    msg.setDestination(58439U);
    msg.setDestinationEntity(142U);
    msg.timeout = 14651U;
    msg.lat = 0.409872353556;
    msg.lon = 0.934510593138;
    msg.z = 0.383137128237;
    msg.z_units = 39U;
    msg.speed = 0.153990574568;
    msg.speed_units = 209U;
    msg.bearing = 0.0329807354408;
    msg.cross_angle = 0.282601252449;
    msg.width = 0.34139195392;
    msg.length = 0.87017343996;
    msg.hstep = 0.668827680066;
    msg.coff = 159U;
    msg.alternation = 251U;
    msg.flags = 199U;
    msg.custom.assign("VCHWVWWIXDXGDANLTMJUEKCFBKCWJCESKRBNDCPQFYUXTTDVKVMGUCXZVYNXANDZJFQFZDHHUNDAGGQCXBZXMYJAOWKJOIINEQZWAGNKAQPBITLGZVINPFELKEBSYCHUYROSDLAHYMVWRAMKMMELCTVQLIOAHWLGINRYESCYPUSGERRBILBYVRGMZOMU");

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
    msg.setTimeStamp(0.72776642522);
    msg.setSource(42313U);
    msg.setSourceEntity(95U);
    msg.setDestination(48624U);
    msg.setDestinationEntity(138U);
    msg.timeout = 23872U;
    msg.lat = 0.999936217187;
    msg.lon = 0.774546256618;
    msg.z = 0.264929277383;
    msg.z_units = 84U;
    msg.speed = 0.5226589615;
    msg.speed_units = 30U;
    msg.bearing = 0.194255873253;
    msg.cross_angle = 0.596895524876;
    msg.width = 0.582927278894;
    msg.length = 0.676375769628;
    msg.hstep = 0.473789212758;
    msg.coff = 0U;
    msg.alternation = 97U;
    msg.flags = 58U;
    msg.custom.assign("YUDPGCKJFHYZZWFZ");

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
    msg.setTimeStamp(0.745584700555);
    msg.setSource(39474U);
    msg.setSourceEntity(251U);
    msg.setDestination(56815U);
    msg.setDestinationEntity(128U);
    msg.timeout = 19796U;
    msg.lat = 0.159726709837;
    msg.lon = 0.150933040617;
    msg.z = 0.908435671412;
    msg.z_units = 109U;
    msg.speed = 0.528537112337;
    msg.speed_units = 207U;
    msg.bearing = 0.607244065092;
    msg.cross_angle = 0.652438923577;
    msg.width = 0.595786910587;
    msg.length = 0.399108211861;
    msg.hstep = 0.483835276507;
    msg.coff = 180U;
    msg.alternation = 102U;
    msg.flags = 244U;
    msg.custom.assign("ZEXEGDYRJKDSQDDWXAKAQCRHLWNLOJOYMOUVZPOBAGXMILORPWGUMYXYZKVGFG");

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
    msg.setTimeStamp(0.375145387879);
    msg.setSource(25131U);
    msg.setSourceEntity(34U);
    msg.setDestination(40618U);
    msg.setDestinationEntity(100U);
    msg.timeout = 43060U;
    msg.lat = 0.109215873457;
    msg.lon = 0.209085363501;
    msg.z = 0.744997842118;
    msg.z_units = 234U;
    msg.speed = 0.496903597152;
    msg.speed_units = 234U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.768325047854;
    tmp_msg_0.y = 0.935997383749;
    tmp_msg_0.z = 0.3862401656;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("BUJHCSRWGMEEIKBLBNKTUGVHNXEAHTDEWZVLGFAMDWRMEYXWLCDNSQONYWHZLQYQKRUPKUWJMVFJSGDZOSUEJBODTZFGTPVYPJMLPEIGZRJVKK");

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
    msg.setTimeStamp(0.329664155478);
    msg.setSource(33293U);
    msg.setSourceEntity(236U);
    msg.setDestination(42019U);
    msg.setDestinationEntity(85U);
    msg.timeout = 44415U;
    msg.lat = 0.418753281974;
    msg.lon = 0.383369676375;
    msg.z = 0.724556414512;
    msg.z_units = 188U;
    msg.speed = 0.0275873661612;
    msg.speed_units = 49U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.272344828126;
    tmp_msg_0.y = 0.858020128203;
    tmp_msg_0.z = 0.17431785297;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("UFWPTIXHNSWUZOUFJPTLNMDGWARDGSEULWBICTHCSKBOYRPZMQYBWBORRVISLCSEITXDEGHWJNULXCBJJIRJISNSFCGEBCCFPUVYOWOLXDDZUR");

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
    msg.setTimeStamp(0.574063253962);
    msg.setSource(65352U);
    msg.setSourceEntity(233U);
    msg.setDestination(46909U);
    msg.setDestinationEntity(89U);
    msg.timeout = 842U;
    msg.lat = 0.742583525788;
    msg.lon = 0.20762985624;
    msg.z = 0.0204715691165;
    msg.z_units = 105U;
    msg.speed = 0.546704120888;
    msg.speed_units = 225U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.0683997632309;
    tmp_msg_0.y = 0.604470848553;
    tmp_msg_0.z = 0.422623565827;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("ZQSEEVWNSYAAUTRSJGTTQSCOQBVBUWLKPIUDPEFMASHGZGEVSRLFBIEWAXHNCVYAYNVHDNTUWDCRDMBTCKPHTXXCIQUMXPSWPHUJWKSMANJYGLN");

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
    msg.setTimeStamp(0.343494686902);
    msg.setSource(60150U);
    msg.setSourceEntity(221U);
    msg.setDestination(50984U);
    msg.setDestinationEntity(26U);
    msg.x = 0.251234212375;
    msg.y = 0.406707135435;
    msg.z = 0.296031916062;

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
    msg.setTimeStamp(0.286158268431);
    msg.setSource(46344U);
    msg.setSourceEntity(45U);
    msg.setDestination(63504U);
    msg.setDestinationEntity(44U);
    msg.x = 0.50127535255;
    msg.y = 0.538611256156;
    msg.z = 0.476598883376;

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
    msg.setTimeStamp(0.758021172237);
    msg.setSource(55028U);
    msg.setSourceEntity(249U);
    msg.setDestination(16478U);
    msg.setDestinationEntity(114U);
    msg.x = 0.427754686184;
    msg.y = 0.479254184993;
    msg.z = 0.530053179617;

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
    msg.setTimeStamp(0.433337026755);
    msg.setSource(3225U);
    msg.setSourceEntity(185U);
    msg.setDestination(61150U);
    msg.setDestinationEntity(78U);
    msg.timeout = 38524U;
    msg.lat = 0.429301164445;
    msg.lon = 0.578143125821;
    msg.z = 0.598516995053;
    msg.z_units = 97U;
    msg.amplitude = 0.889957962806;
    msg.pitch = 0.580680186646;
    msg.speed = 0.456480797025;
    msg.speed_units = 200U;
    msg.custom.assign("PTLIETHMFDRQDWZBWQGXWWVWGZTYKIJYOXAZFJPMBIBEQJADHN");

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
    msg.setTimeStamp(0.458818082288);
    msg.setSource(9064U);
    msg.setSourceEntity(161U);
    msg.setDestination(3653U);
    msg.setDestinationEntity(180U);
    msg.timeout = 57768U;
    msg.lat = 0.795384950762;
    msg.lon = 0.726950241883;
    msg.z = 0.0192587321304;
    msg.z_units = 175U;
    msg.amplitude = 0.148111065393;
    msg.pitch = 0.29964492989;
    msg.speed = 0.657114424382;
    msg.speed_units = 2U;
    msg.custom.assign("IWRDEQEMYHHIYKGBOUHZNAQMAMPBYDFTCLW");

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
    msg.setTimeStamp(0.509905609795);
    msg.setSource(26098U);
    msg.setSourceEntity(16U);
    msg.setDestination(22356U);
    msg.setDestinationEntity(17U);
    msg.timeout = 53373U;
    msg.lat = 0.233203755395;
    msg.lon = 0.0189082813428;
    msg.z = 0.93460868496;
    msg.z_units = 113U;
    msg.amplitude = 0.912300930958;
    msg.pitch = 0.564724682653;
    msg.speed = 0.28803029023;
    msg.speed_units = 119U;
    msg.custom.assign("NWJLURGERTAQXXMLHNLDGHQYNWFMAESFIQUFBEUNPTWIFBCMGBVEXMZZHVUDGDLLRSCTQSWPXPQNKTTZQNTJVEAUYPVVOJYPODBZROESDUVBSNWHUTWQPYDQEVLKCSJRIIFAAQAKAJOXGUCXRKHJVFDMCDJ");

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
    msg.setTimeStamp(0.840760109782);
    msg.setSource(61762U);
    msg.setSourceEntity(6U);
    msg.setDestination(7300U);
    msg.setDestinationEntity(113U);

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
    msg.setTimeStamp(0.772766592854);
    msg.setSource(23368U);
    msg.setSourceEntity(179U);
    msg.setDestination(22790U);
    msg.setDestinationEntity(11U);

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
    msg.setTimeStamp(0.810941635045);
    msg.setSource(616U);
    msg.setSourceEntity(130U);
    msg.setDestination(55393U);
    msg.setDestinationEntity(3U);

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
    msg.setTimeStamp(0.741251637454);
    msg.setSource(26561U);
    msg.setSourceEntity(98U);
    msg.setDestination(27638U);
    msg.setDestinationEntity(99U);
    msg.lat = 0.325503412935;
    msg.lon = 0.717233738436;
    msg.z = 0.00058605676449;
    msg.z_units = 55U;
    msg.radius = 0.352669393257;
    msg.duration = 53287U;
    msg.speed = 0.940649504965;
    msg.speed_units = 19U;
    msg.popup_period = 11772U;
    msg.popup_duration = 6735U;
    msg.flags = 165U;
    msg.custom.assign("BHUMXSEYEVRWAODPJGUIOFEBWFYDJLHCDEBCZJHMYSRZTNLURWHCZJJJHSQNCYRKEFMVYRZAEOOCTSJGIMANOZZDVJPTCXFJBKOIVOJIQGQAIKPISKIIHMZLECKNHGPMTNVPLIWWQQQXCTMXUXFUYXZNHYSVEMAFBAUNAWLSMTVRUGRVPVWRASNQRXCTYBGDPKLKNEPGFKYZTDWHRXFDAKA");

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
    msg.setTimeStamp(0.650848457561);
    msg.setSource(39440U);
    msg.setSourceEntity(122U);
    msg.setDestination(63311U);
    msg.setDestinationEntity(36U);
    msg.lat = 0.109180291716;
    msg.lon = 0.797141288235;
    msg.z = 0.456112234994;
    msg.z_units = 69U;
    msg.radius = 0.00838542679986;
    msg.duration = 59411U;
    msg.speed = 0.274772038616;
    msg.speed_units = 241U;
    msg.popup_period = 608U;
    msg.popup_duration = 52139U;
    msg.flags = 21U;
    msg.custom.assign("QYAMPAUKSWYW");

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
    msg.setTimeStamp(0.61389671918);
    msg.setSource(46209U);
    msg.setSourceEntity(202U);
    msg.setDestination(15112U);
    msg.setDestinationEntity(95U);
    msg.lat = 0.855913454137;
    msg.lon = 0.252960099367;
    msg.z = 0.154615406056;
    msg.z_units = 175U;
    msg.radius = 0.619134572058;
    msg.duration = 61474U;
    msg.speed = 0.908692454966;
    msg.speed_units = 34U;
    msg.popup_period = 25826U;
    msg.popup_duration = 11701U;
    msg.flags = 77U;
    msg.custom.assign("DHUMQVTESIYOYRGABDVUIIJWPGPWTYHNOKLHJHKZWOCSQFWRGXMNMKFGMKUJLZKRSYTYHABHKWXFBBGJMXMRZPHBUCESAXEKTDFLJXKPXFJBLZUZVYHCSKOEIDIJQGCEIMYIQGEQBTLXDWXNJVCCFOLOOUNFALARCMMQFNTVGSNZYNORNJHEBUU");

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
    msg.setTimeStamp(0.425072197392);
    msg.setSource(16628U);
    msg.setSourceEntity(208U);
    msg.setDestination(4340U);
    msg.setDestinationEntity(191U);
    msg.timeout = 14928U;
    msg.flags = 9U;
    msg.lat = 0.420389742807;
    msg.lon = 0.972569247684;
    msg.start_z = 0.935951500359;
    msg.start_z_units = 1U;
    msg.end_z = 0.879312978978;
    msg.end_z_units = 76U;
    msg.radius = 0.652613412768;
    msg.speed = 0.166341156445;
    msg.speed_units = 82U;
    msg.custom.assign("LKBTRNDIOPPEJCHUXXXB");

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
    msg.setTimeStamp(0.104488955619);
    msg.setSource(5304U);
    msg.setSourceEntity(20U);
    msg.setDestination(3612U);
    msg.setDestinationEntity(242U);
    msg.timeout = 15256U;
    msg.flags = 228U;
    msg.lat = 0.72190090969;
    msg.lon = 0.312483953803;
    msg.start_z = 0.622503574279;
    msg.start_z_units = 124U;
    msg.end_z = 0.835088736166;
    msg.end_z_units = 231U;
    msg.radius = 0.961350850343;
    msg.speed = 0.809647209366;
    msg.speed_units = 110U;
    msg.custom.assign("BFRDZYAMPAOTVZZTXRNJSPHPKGRDCUPLGUYOFQXLHAOMWLIEHEWBANEJSTNIDZVMCJXAOYZDYPWFFXPSKSWELFUVBAGMUGNICEGIRXDMJILHQTOAFVIXIYLRJROLPQIYBGFTPWVNYBJWRPKZFTJIDOBNTTOHMWWTDBFAZXWKKSKEVKHHVMSQRYEBDLQRCHNOUJYRCGS");

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
    msg.setTimeStamp(0.000225965860602);
    msg.setSource(43625U);
    msg.setSourceEntity(210U);
    msg.setDestination(44347U);
    msg.setDestinationEntity(149U);
    msg.timeout = 15075U;
    msg.flags = 202U;
    msg.lat = 0.233657057006;
    msg.lon = 0.656293730626;
    msg.start_z = 0.127058510703;
    msg.start_z_units = 30U;
    msg.end_z = 0.901446005782;
    msg.end_z_units = 82U;
    msg.radius = 0.297859555352;
    msg.speed = 0.350613809448;
    msg.speed_units = 126U;
    msg.custom.assign("UUDPFYPOKHVELLDKXBGHAPMBYXUAOSTDMRQMNJSXOCMZQNXQFCKJEMMFBEZRESTQUVRBAWFQAZXUJYRNYVRINDMOIA");

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
    msg.setTimeStamp(0.655903644913);
    msg.setSource(12059U);
    msg.setSourceEntity(18U);
    msg.setDestination(38277U);
    msg.setDestinationEntity(30U);
    msg.timeout = 46316U;
    msg.lat = 0.975760828949;
    msg.lon = 0.940370266617;
    msg.z = 0.920460320449;
    msg.z_units = 244U;
    msg.speed = 0.242130431546;
    msg.speed_units = 104U;
    msg.custom.assign("MGWCPBNWSWOH");

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
    msg.setTimeStamp(0.193450578522);
    msg.setSource(5711U);
    msg.setSourceEntity(208U);
    msg.setDestination(61087U);
    msg.setDestinationEntity(194U);
    msg.timeout = 15359U;
    msg.lat = 0.545993149998;
    msg.lon = 0.825727040195;
    msg.z = 0.329465943422;
    msg.z_units = 223U;
    msg.speed = 0.112123105457;
    msg.speed_units = 199U;
    msg.custom.assign("HXXAUMNEOXCTRTSNLJCRQPWTHLMJFUXBIWABZDLQXJAIEV");

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
    msg.setTimeStamp(0.318754908839);
    msg.setSource(59565U);
    msg.setSourceEntity(32U);
    msg.setDestination(62917U);
    msg.setDestinationEntity(3U);
    msg.timeout = 35268U;
    msg.lat = 0.43360172451;
    msg.lon = 0.417664214369;
    msg.z = 0.0445339327217;
    msg.z_units = 124U;
    msg.speed = 0.137311987715;
    msg.speed_units = 173U;
    msg.custom.assign("LAZVNWIRIEXHSTRGFSFIZMUIDBPEMSCKKTRKPXHWLNWYKNYJNQYILZVUPKILXFKMYPDLEHRTSOSPKNOMCWMNDBCGNPHPCSXGTUUIHQQDFHJLNWEODUWUQODXWPLXEKZMMGAAVPWSVIBGDMZTHGRJICSHVANEYHTQLDOQMJIJXBFFZEUOXRDGRTXHLXYBCZCWKAQDZVEAYRTAVZLGUBFQAEYAVFS");

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
    msg.setTimeStamp(0.324855473308);
    msg.setSource(6U);
    msg.setSourceEntity(58U);
    msg.setDestination(36333U);
    msg.setDestinationEntity(13U);
    msg.x = 0.10025980642;
    msg.y = 0.0763262401454;
    msg.z = 0.320984191514;
    msg.t = 0.555018886161;

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
    msg.setTimeStamp(0.225344224469);
    msg.setSource(39810U);
    msg.setSourceEntity(190U);
    msg.setDestination(49107U);
    msg.setDestinationEntity(114U);
    msg.x = 0.430018489548;
    msg.y = 0.0658601684934;
    msg.z = 0.44429595055;
    msg.t = 0.00266657644798;

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
    msg.setTimeStamp(0.703207280517);
    msg.setSource(14805U);
    msg.setSourceEntity(131U);
    msg.setDestination(47918U);
    msg.setDestinationEntity(47U);
    msg.x = 0.00577663479408;
    msg.y = 0.954447256697;
    msg.z = 0.181912956721;
    msg.t = 0.510315532585;

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
    msg.setTimeStamp(0.485033075958);
    msg.setSource(52134U);
    msg.setSourceEntity(254U);
    msg.setDestination(62280U);
    msg.setDestinationEntity(221U);
    msg.timeout = 33444U;
    msg.name.assign("BVZHXWPKMYCHVXKFMGTBOXPARLFZWBYGMKSDGYXZNPGHEGQZQVDLGZXOASRCXEVORRSFWZNTJXKUBBFOFVLIIVHHSAUETRKVSYBQONFKWYHUTGL");
    msg.custom.assign("XRZAWCNAPYWGOTDUFVXWMEBARZCRZVTAECWVGYLQVKSOQAUKLDVFEDGPEBECTPNSZGHACAEBJOYLIUZBTPBMCODMAXWLZRNHYQFUPXXZFKGMYPTOUQUHDXPCBIZFGURTTJQZOQSKRNQJLXIPEQSJOKKGVMLRWIJWVVLMZYWUHYNMPLHWPVWTIJKNNHCYDQKSAREIAUGNHLMBXQBINJ");

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
    msg.setTimeStamp(0.543574003153);
    msg.setSource(26105U);
    msg.setSourceEntity(110U);
    msg.setDestination(53317U);
    msg.setDestinationEntity(227U);
    msg.timeout = 31509U;
    msg.name.assign("NZCWWWHUVRXKQTXYFVUQMRRMAPGVVBFGQVLMKXZNHCCDMSIKQFCATYHCVOZBWPOGQLYUTTDFVIMLYJSZAJPZHTSDUTGOWYEDLEURHSMNMPFUQAOKRELFJNOADNGL");
    msg.custom.assign("EHJWOVBIUFMCWZJFXEMBUTOFLKCZXOJSKUICKEPBECKRLOCYNGUSSFPXLQJKAAYLNXZZXKDWEHYHYQGMSVGVMRUAKITXKQBCGIIRVFVLVJGATOKBMPXTJZAONLRDWMFCRPUDGPXCTEZGBYJZSECSIDAWTHBFWYLZXXBSFHIPOASAYPIUYNMJQDEUQLNHERWSLTQHZAUDJNMTINKVZDRMWDHLHHTYOI");

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
    msg.setTimeStamp(0.987308055152);
    msg.setSource(54267U);
    msg.setSourceEntity(253U);
    msg.setDestination(63409U);
    msg.setDestinationEntity(55U);
    msg.timeout = 38398U;
    msg.name.assign("SFSVCIAZDKJMVHOUKBVCLTTFJVMICZYZFAJAOKIWTZFGDSCPQTGLPXEQXFJMXDRRAIXILRVPYDPPBULZZVNQSLWXTDHWRETWJNJDNBQLXGOUVHQQZZWRSNCOCTNKAYWENEAKERCRHQGMNUBEUFEZWRWGGGIVDVYLSJLKEFUNXOTMHDXSYMCQK");
    msg.custom.assign("EOBGHVAICIDWMQSFMPQKISAAN");

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
    msg.setTimeStamp(0.477233092609);
    msg.setSource(40164U);
    msg.setSourceEntity(78U);
    msg.setDestination(21952U);
    msg.setDestinationEntity(253U);
    msg.lat = 0.153378618356;
    msg.lon = 0.00928659420951;
    msg.z = 0.0359963553898;
    msg.z_units = 51U;
    msg.speed = 0.0880696469653;
    msg.speed_units = 81U;
    msg.start_time = 0.631264106896;
    msg.custom.assign("PTIAYNIBHFVRKHGHGGEYFGNYZZWJUEVIFLTRCAWCJRWZPJVEFRTGZKEOSPTAAOMIMPXINJRKUIUZWEKTWSMQYSONUZIESQGJSQXDRFFRKPHUBX");

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
    msg.setTimeStamp(0.85035470246);
    msg.setSource(27307U);
    msg.setSourceEntity(86U);
    msg.setDestination(17315U);
    msg.setDestinationEntity(92U);
    msg.lat = 0.632254567497;
    msg.lon = 0.173963911446;
    msg.z = 0.715027947038;
    msg.z_units = 164U;
    msg.speed = 0.401996696658;
    msg.speed_units = 120U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 685U;
    tmp_msg_0.off_x = 0.483201673823;
    tmp_msg_0.off_y = 0.542851215142;
    tmp_msg_0.off_z = 0.248587029716;
    msg.participants.push_back(tmp_msg_0);
    msg.start_time = 0.683564033564;
    msg.custom.assign("SLPDOKZTQUFKVBXFLFJRCRLQMOQYVBBFZIBWIQGMCOHCBHEVSVBDKZNTIPCRIMAABRYWGMOJNBCUATRYSWOJYSGVPKIECXDKM");

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
    msg.setTimeStamp(0.221002191953);
    msg.setSource(30286U);
    msg.setSourceEntity(233U);
    msg.setDestination(56101U);
    msg.setDestinationEntity(225U);
    msg.lat = 0.374913910538;
    msg.lon = 0.0705890485694;
    msg.z = 0.494431164924;
    msg.z_units = 147U;
    msg.speed = 0.615706782111;
    msg.speed_units = 254U;
    msg.start_time = 0.291024715493;
    msg.custom.assign("YFSAOQGTQJUBICGTJKIESEOVSYJRHRIMCJVQHYTILSNMZXNEXHBWMCVHDBEKZOCDRESYGPQQTXTAZEGEHVKBRHVOMPLNBKGCZLADTYDSUMRIXVPMYPINICJGWQZRGXOUDWANQATDZLDIWYERHCSKQBYMPPVAMOFVUDOLXNFXFIFZEXNJOKXPLLUZGZQVXLERYSFWBHPFFJKLHNAQDNTTUUMSUMUBJS");

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
    msg.setTimeStamp(0.436267596678);
    msg.setSource(58253U);
    msg.setSourceEntity(193U);
    msg.setDestination(22524U);
    msg.setDestinationEntity(84U);
    msg.vid = 38941U;
    msg.off_x = 0.867012272753;
    msg.off_y = 0.70169401461;
    msg.off_z = 0.14042782024;

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
    msg.setTimeStamp(0.680855949738);
    msg.setSource(59282U);
    msg.setSourceEntity(41U);
    msg.setDestination(63030U);
    msg.setDestinationEntity(87U);
    msg.vid = 3400U;
    msg.off_x = 0.84447040193;
    msg.off_y = 0.798853682656;
    msg.off_z = 0.948957050606;

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
    msg.setTimeStamp(0.724310372401);
    msg.setSource(16911U);
    msg.setSourceEntity(4U);
    msg.setDestination(311U);
    msg.setDestinationEntity(154U);
    msg.vid = 55611U;
    msg.off_x = 0.787461114844;
    msg.off_y = 0.728859188678;
    msg.off_z = 0.668473550649;

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
    msg.setTimeStamp(0.938283706334);
    msg.setSource(32605U);
    msg.setSourceEntity(107U);
    msg.setDestination(48825U);
    msg.setDestinationEntity(108U);

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
    msg.setTimeStamp(0.598201660447);
    msg.setSource(2160U);
    msg.setSourceEntity(68U);
    msg.setDestination(34298U);
    msg.setDestinationEntity(62U);

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
    msg.setTimeStamp(0.528260502444);
    msg.setSource(40261U);
    msg.setSourceEntity(179U);
    msg.setDestination(65480U);
    msg.setDestinationEntity(24U);

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
    msg.setTimeStamp(0.413945843683);
    msg.setSource(41440U);
    msg.setSourceEntity(145U);
    msg.setDestination(10935U);
    msg.setDestinationEntity(189U);
    msg.mid = 36530U;

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
    msg.setTimeStamp(0.72544714152);
    msg.setSource(34724U);
    msg.setSourceEntity(219U);
    msg.setDestination(47222U);
    msg.setDestinationEntity(140U);
    msg.mid = 55958U;

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
    msg.setTimeStamp(0.64159753165);
    msg.setSource(61436U);
    msg.setSourceEntity(156U);
    msg.setDestination(10157U);
    msg.setDestinationEntity(36U);
    msg.mid = 18606U;

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
    msg.setTimeStamp(0.493516058887);
    msg.setSource(1604U);
    msg.setSourceEntity(120U);
    msg.setDestination(21271U);
    msg.setDestinationEntity(144U);
    msg.state = 218U;
    msg.eta = 47719U;
    msg.info.assign("UGRSIWYTJCNFHKCVPTBEQJWCKZLYIXORIGWTPZTBLFROXNQNLYMAAFZEXEUWOWNWHENWBZKXCRZMJAGOUGXSMUHNJGFTOBJFYPCBJTJLVKCASEQLFHHJDB");

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
    msg.setTimeStamp(0.650565308127);
    msg.setSource(27589U);
    msg.setSourceEntity(157U);
    msg.setDestination(60418U);
    msg.setDestinationEntity(47U);
    msg.state = 101U;
    msg.eta = 25722U;
    msg.info.assign("YXYCYTINOCFJBRQTPNARYDFTJSMIBJKEGFEEZAHKJVMURYDNZZYZJSCUMPUMDBKTMFRWDQYPWFLZJFTCGBGBGOXNRJTLDZZILVMDLSSKFNEXHTSIWEYWLCCNPOQDSAPHGIGNROCTRACNLGRQUVJZKEMGPBJOHWXAIKWWMXFMAQQVPSWTKDESEKATPOKVVOUHHVLQBJPZEVHYUCBKNE");

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
    msg.setTimeStamp(0.0517221151638);
    msg.setSource(24516U);
    msg.setSourceEntity(241U);
    msg.setDestination(56564U);
    msg.setDestinationEntity(181U);
    msg.state = 61U;
    msg.eta = 39035U;
    msg.info.assign("JVQOAINMEDYMHBDWBCDSPMXCPVZFOYDNSCHZXNIWCYSATENYWMWBRVFSMKTEQCWWTGQYZWUGNALBAHWPRJJUKIJXBFAFJIAGAERPKZWPDNKPLQAULMQSIERGSICZYQXECYDGQNJTPEQVCRL");

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
    msg.setTimeStamp(0.627081638002);
    msg.setSource(43257U);
    msg.setSourceEntity(110U);
    msg.setDestination(59429U);
    msg.setDestinationEntity(122U);
    msg.system = 6286U;
    msg.duration = 53872U;
    msg.speed = 0.0868256631928;
    msg.speed_units = 213U;
    msg.x = 0.109957209552;
    msg.y = 0.999497653602;
    msg.z = 0.0506428051896;
    msg.z_units = 168U;

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
    msg.setTimeStamp(0.765825046703);
    msg.setSource(61599U);
    msg.setSourceEntity(17U);
    msg.setDestination(28577U);
    msg.setDestinationEntity(239U);
    msg.system = 26657U;
    msg.duration = 46727U;
    msg.speed = 0.444985734504;
    msg.speed_units = 18U;
    msg.x = 0.0632105309239;
    msg.y = 0.827471415865;
    msg.z = 0.291784213881;
    msg.z_units = 163U;

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
    msg.setTimeStamp(0.022231338789);
    msg.setSource(11461U);
    msg.setSourceEntity(183U);
    msg.setDestination(60904U);
    msg.setDestinationEntity(50U);
    msg.system = 48363U;
    msg.duration = 61255U;
    msg.speed = 0.613332471322;
    msg.speed_units = 116U;
    msg.x = 0.049528022593;
    msg.y = 0.461493438855;
    msg.z = 0.196319245584;
    msg.z_units = 245U;

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
    msg.setTimeStamp(0.381014670568);
    msg.setSource(832U);
    msg.setSourceEntity(218U);
    msg.setDestination(52568U);
    msg.setDestinationEntity(150U);
    msg.lat = 0.223453479884;
    msg.lon = 0.122143606607;
    msg.speed = 0.989797214336;
    msg.speed_units = 150U;
    msg.duration = 9146U;
    msg.sys_a = 8562U;
    msg.sys_b = 65463U;
    msg.move_threshold = 0.262750288395;

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
    msg.setTimeStamp(0.0460314433051);
    msg.setSource(22801U);
    msg.setSourceEntity(133U);
    msg.setDestination(40286U);
    msg.setDestinationEntity(41U);
    msg.lat = 0.0595580271464;
    msg.lon = 0.279960632749;
    msg.speed = 0.573886937226;
    msg.speed_units = 128U;
    msg.duration = 54990U;
    msg.sys_a = 16577U;
    msg.sys_b = 33356U;
    msg.move_threshold = 0.985618891781;

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
    msg.setTimeStamp(0.210243895358);
    msg.setSource(12763U);
    msg.setSourceEntity(41U);
    msg.setDestination(59203U);
    msg.setDestinationEntity(14U);
    msg.lat = 0.645819558677;
    msg.lon = 0.176276679364;
    msg.speed = 0.775588214303;
    msg.speed_units = 121U;
    msg.duration = 38969U;
    msg.sys_a = 28883U;
    msg.sys_b = 12256U;
    msg.move_threshold = 0.772202608644;

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
    msg.setTimeStamp(0.0991139591715);
    msg.setSource(14015U);
    msg.setSourceEntity(4U);
    msg.setDestination(22203U);
    msg.setDestinationEntity(29U);
    msg.lat = 0.990001742347;
    msg.lon = 0.255955233648;
    msg.z = 0.17080077769;
    msg.z_units = 245U;
    msg.speed = 0.172871649958;
    msg.speed_units = 102U;
    msg.custom.assign("BFIPDWMJVYNUUOXOUVVWFZPVISWRKIFXTQMJHRUDHAIJBMABUKEKWIEUZVCJGLIPLFCMHRHKKQGTJKGFZLRTDYXCTTWGKTMQMERBNTXFFYCRPWPKDLXTCVYZHQLOLCERYOAMXFYQSGPDUQJSZHALSQEKSQHEBMYGVBDTSNWZTPIADXSVPOZNOOIEIJDJNMKPROUWXGWJRZUGCXYAHINCASOSEFRXCLUBYYNHBNLAPBCNOZHAJVQE");

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
    msg.setTimeStamp(0.390375328066);
    msg.setSource(4540U);
    msg.setSourceEntity(233U);
    msg.setDestination(9847U);
    msg.setDestinationEntity(9U);
    msg.lat = 0.940818410411;
    msg.lon = 0.199463214541;
    msg.z = 0.573947743464;
    msg.z_units = 76U;
    msg.speed = 0.261218959717;
    msg.speed_units = 161U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.930838029005;
    tmp_msg_0.lon = 0.840007318662;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("VPWURXIZNIUHUKXTWYYBD");

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
    msg.setTimeStamp(0.48816240776);
    msg.setSource(54586U);
    msg.setSourceEntity(107U);
    msg.setDestination(39287U);
    msg.setDestinationEntity(113U);
    msg.lat = 0.991768001755;
    msg.lon = 0.758050966202;
    msg.z = 0.312827812537;
    msg.z_units = 46U;
    msg.speed = 0.372565394211;
    msg.speed_units = 33U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.616397661449;
    tmp_msg_0.lon = 0.297794440972;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("KZVENGSEBWCQKQAJSBGJPRHKAJYYOVQWNXYCNOWVZBMAEXDXNALOQRIMBLRKTOGLFDJNCOGQSKEFCZWIMZTTIMVWHZXREOPAASMYZQXEFIAPLFXIEEYESDSKTDXVCUSCOXHVWOSJCJMMPTLUVPHYFHBXUZVISRXSAINLULIBZBWWWEOTTB");

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
    msg.setTimeStamp(0.0131132393271);
    msg.setSource(8203U);
    msg.setSourceEntity(5U);
    msg.setDestination(22181U);
    msg.setDestinationEntity(21U);
    msg.lat = 0.0486689356654;
    msg.lon = 0.640214658385;

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
    msg.setTimeStamp(0.597574820482);
    msg.setSource(12336U);
    msg.setSourceEntity(19U);
    msg.setDestination(64828U);
    msg.setDestinationEntity(180U);
    msg.lat = 0.24955894533;
    msg.lon = 0.31747338965;

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
    msg.setTimeStamp(0.876854842885);
    msg.setSource(54803U);
    msg.setSourceEntity(249U);
    msg.setDestination(9357U);
    msg.setDestinationEntity(210U);
    msg.lat = 0.417140649576;
    msg.lon = 0.949914747594;

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
    msg.setTimeStamp(0.257685185579);
    msg.setSource(15982U);
    msg.setSourceEntity(211U);
    msg.setDestination(65423U);
    msg.setDestinationEntity(174U);
    msg.timeout = 87U;
    msg.lat = 0.490961880963;
    msg.lon = 0.692253903809;
    msg.z = 0.310260145172;
    msg.z_units = 225U;
    msg.pitch = 0.83571994989;
    msg.amplitude = 0.26193572744;
    msg.duration = 12378U;
    msg.speed = 0.422116578863;
    msg.speed_units = 48U;
    msg.radius = 0.989949470519;
    msg.direction = 140U;
    msg.custom.assign("VVOWRUJLSYWPUELRHVEZSHDSHLOZOVUJUTNKBOTGFWPTVKIHSTWROIRQCBDODLHAXZBQGGACFAVMYFYFAGFSMBRXNCWAPFPKUAVLYKZASTMBLFBMFXJMMZPKUOUUNLALUBICCNKMWDACDWIXQQMSGPRFRNXNNIXSNGTJJIJCQPHNLJTDEQEKHPCXUJVSZRNXBEKPQGRKESOVDEHZACHZZDEBETBXGHJYTVKQOWFLIDJIYY");

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
    msg.setTimeStamp(0.0958160768326);
    msg.setSource(28261U);
    msg.setSourceEntity(61U);
    msg.setDestination(57570U);
    msg.setDestinationEntity(16U);
    msg.timeout = 9064U;
    msg.lat = 0.661079843984;
    msg.lon = 0.490133938652;
    msg.z = 0.762341115454;
    msg.z_units = 198U;
    msg.pitch = 0.924349268784;
    msg.amplitude = 0.110392088498;
    msg.duration = 34611U;
    msg.speed = 0.892062520488;
    msg.speed_units = 142U;
    msg.radius = 0.780688310841;
    msg.direction = 70U;
    msg.custom.assign("MHJTQAFDBVSBCYPVHPMQBLROCCLGXHPKMOYEUEQEHTYUKHOITQXZEYLZGJAYRSQFVCLWTYRNQJSZMXOJZXOXKVEXLEEPSVKXRNSSKDNIRMZDFDIBQFTIROMLAOGPGUSWKHUPGZLKABBACUEJKHNVIIDRFRGMXUR");

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
    msg.setTimeStamp(0.944539534498);
    msg.setSource(16843U);
    msg.setSourceEntity(242U);
    msg.setDestination(54592U);
    msg.setDestinationEntity(141U);
    msg.timeout = 39323U;
    msg.lat = 0.520076831161;
    msg.lon = 0.181925238269;
    msg.z = 0.538379995321;
    msg.z_units = 183U;
    msg.pitch = 0.842098999592;
    msg.amplitude = 0.517402971543;
    msg.duration = 6552U;
    msg.speed = 0.736967595348;
    msg.speed_units = 108U;
    msg.radius = 0.384897164603;
    msg.direction = 172U;
    msg.custom.assign("HTINHJJBFWROUWZVHOFYRAIXLCHGIBDOBMAJBGVTKWGNCESPPZTQIVKLETNHA");

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
    msg.setTimeStamp(0.817100445571);
    msg.setSource(64390U);
    msg.setSourceEntity(136U);
    msg.setDestination(20799U);
    msg.setDestinationEntity(101U);
    msg.formation_name.assign("OJKHPOGIWXJUYORTXEWFHGHHNGMVBQUWZRVDDIZIFKFPQVUPNUZHGFEXOBAVJGMKQCQFTJTNVWGMAPJUBFKRLMUNNRSLFNZEVZDCLBDEAXEWQSLZCJJVSKUBOPSTUASIDFWMA");
    msg.reference_frame = 186U;
    msg.custom.assign("RHWKMGRXTPENUOLTTIVMMRIHUMABKEXTFSVHNRLSLCCTQLTAEJNPSQJKEJUHKDPAAWDJGMRJIUDKDRLUNDCBJVNRBGCE");

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
    msg.setTimeStamp(0.604343070914);
    msg.setSource(21904U);
    msg.setSourceEntity(60U);
    msg.setDestination(27620U);
    msg.setDestinationEntity(104U);
    msg.formation_name.assign("GYHXDWPGRCKMXLBDKRWFBPIMVZDPBQCFUGVSBALWMTCOJFIHLMAQQWIFZWULXVVIBUFZVIOTUZAJHQTFBWDYRUXJNJNSEOH");
    msg.reference_frame = 130U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 5175U;
    tmp_msg_0.off_x = 0.15601703695;
    tmp_msg_0.off_y = 0.703311803651;
    tmp_msg_0.off_z = 0.00694707858491;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("EMVOWXDCQXUISMZUZJHEAMNQEYTQNHFTRGDRBTCYJXYRGHLINRZNQFJOBGBOWWKNMRGPQGBLPACQHEPUNVTSEFMKWCKQXPCTBGCKIRNBPMIKYQOFSKDYAGOTYYVXTHWYUQCZWPDVMWOIBHLSTAVLLXBPEEPWVOONIFSTU");

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
    msg.setTimeStamp(0.658229720762);
    msg.setSource(9065U);
    msg.setSourceEntity(63U);
    msg.setDestination(24897U);
    msg.setDestinationEntity(235U);
    msg.formation_name.assign("PASFBIHJVIEGWDBWPGVWDHZWCYSGYNGDVLVMQTVAFCXLQZFTOUBPRXCAPXCOKRLBEPOBPJCHEIENREDALKZXRSKJXDZCGYAJSLRCXVTYQPNOCFNAIWKEYJARKMRQGFELULSOQDGVUBJNMRXCNOTRJNFZPOTUTNTEGBHYJDMVAFZBTHOAWVDMMQNQFRWUNUJBHWKKSYBHLITZGSJUYVI");
    msg.reference_frame = 187U;
    msg.custom.assign("WECHMWVIDXFAVWPPLLFJKRZNE");

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
    msg.setTimeStamp(0.814729901492);
    msg.setSource(29373U);
    msg.setSourceEntity(233U);
    msg.setDestination(31317U);
    msg.setDestinationEntity(208U);
    msg.group_name.assign("SDPIFOTKWQZYJYZQSIXLLBYLHTKHWVJQWYEJFINIXNMHEOEVJAOSUBNSOCCCHLXJJQXAPWSZZMAESUFRIWUVZJPFMCOZTHCDVAEMYMVTEDEGSXEYPQTOSZVRZQUBNFHFKYUDRDKRXAL");
    msg.formation_name.assign("PGPJKPIRCEXFDAEFZJYTEEKZVCEBWKIQRYYDVQOOMBHJNQGHNNFZZACNRBIOYUIUFAKLCGLCZHYDBAUPHSJUVNZXSPSJVRPTZOWGCTOOVLWNQAWITKHCKBBYWRSJNDBMJGKZYCJFLHEQDMELYZVTXKPIPIOAVSINQMDGHSNQVOWRTULMEWXAIXYHRJQEDFFTGW");
    msg.plan_id.assign("GDAWQEOWYBBZSBSCZADLHIXEVZNAASMLUOTUZUKEY");
    msg.description.assign("ZXKEDYENMAFBGBPMSYWIKDCODIFUWKQREAURRVDMXPFYXEWJRIUZQFBIVYVNODJLTCHFGEOOGRPGLEUNZMZCZHZWGZQNOLHXKXTWYDIUHTCJUMCHGHEDBCHLPVJJVJBAXAACCLNFVCROWXFFRGNQOQAMUVTVS");
    msg.leader_speed = 0.676038350159;
    msg.leader_bank_lim = 0.236244448734;
    msg.pos_sim_err_lim = 0.219970341013;
    msg.pos_sim_err_wrn = 0.0600767724118;
    msg.pos_sim_err_timeout = 61109U;
    msg.converg_max = 0.14206966426;
    msg.converg_timeout = 29314U;
    msg.comms_timeout = 44241U;
    msg.turb_lim = 0.926750451728;
    msg.custom.assign("BBXADWHJKLBPUEICCOFPSTGWCZBVYMGQSQUZSJDQDPCGGVVLHVPGLNBVQNLKDAGYUVJFNVZXGDETLFYORLBBNTMNEZQGCKZSHJ");

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
    msg.setTimeStamp(0.808411527507);
    msg.setSource(4995U);
    msg.setSourceEntity(4U);
    msg.setDestination(58527U);
    msg.setDestinationEntity(122U);
    msg.group_name.assign("DEPSGYTGTUZMNNLWMJFWUUXDQDHBTUBFEFLBWAITHZPNWEKEPJNDGIUJIYYPPJLGOOMXXNSBIJEAEXSFTTMTFSCRZQQVGOGQCGCFLHXPIPABKBSUCKNIMJOVUPAZWDHKAZNSKGWHMSXQHDVCOGUCXSYHXZVYKQLRO");
    msg.formation_name.assign("UVHHSTEZSCJYQKEQMLJXIUMPAPUPMGSGIDCAPOUAHFRVMYNYKBOVHNDLWMB");
    msg.plan_id.assign("MZVLQDSOJHRDCPUBPRBPYOQMZKLSFVOMGLDXNJZTNVSQRGGJXVRVMEUWUGHUAFRJMIEWYAEGLIKWCHQYDPHGUTTLZFNOQURDDPSLVDKBLMRAPIOFXDOYNIPUZQTGEXTANLTAXLPZHSOZSJIH");
    msg.description.assign("LAAZHSSNJNBOIYGJMKZGPISEOMGDDFJTWWXMKZRZZHLZLUHZVFVCSBPIUTGQAIWVVPSEYIJHMDNUDKXNWWLCBARIYPRXHONJYBYUNBVLMYEYXDFTBSVAJFWXASNICRUYYFLPURFOCQXGDXSLBFMQDPKTGEEOKOQCSRGNCPYAITTHPNO");
    msg.leader_speed = 0.702171655343;
    msg.leader_bank_lim = 0.0727024725163;
    msg.pos_sim_err_lim = 0.934794030672;
    msg.pos_sim_err_wrn = 0.702876304788;
    msg.pos_sim_err_timeout = 58844U;
    msg.converg_max = 0.861544607766;
    msg.converg_timeout = 52867U;
    msg.comms_timeout = 12539U;
    msg.turb_lim = 0.433586242648;
    msg.custom.assign("PQIEBEORWPIVXGSENFTXMOGWWOPTVMLNLZPITMUDSJCZQMUSFPOVSHUJJWCLBCZPQAVQAPBLCJRVEZZYGVKLQLYWAXD");

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
    msg.setTimeStamp(0.996600480175);
    msg.setSource(7390U);
    msg.setSourceEntity(182U);
    msg.setDestination(39069U);
    msg.setDestinationEntity(81U);
    msg.group_name.assign("TBKZANBPVYDG");
    msg.formation_name.assign("WHROGSFOWJJW");
    msg.plan_id.assign("VQUOJGUJGMHSSZEWUHBIZOLFIRDDGWTKQIRBMIWFMOVHJNLKDECWSIKRQVPTHRZDCUXQVRGLOZHOMYLUGVIYFOTSFWCGJRNYUPILXWLAWKYRQTBXEPFOBKWSTZYYWHEKVXKGZEHTXJBHMXBDDYEGUATJXQSEQNCJYVVMSFELRSVAADPAAAMJTNRNMSMDONNHZALAICPNKCFXAWHCLZYFZBVQGUPJNPIZKBGDEUOQBC");
    msg.description.assign("RGUFISEQWATBXAEVUJZPXIGGDVNQBBRSSWNRFBXLCTQMMOHWATQSGKBVSYJTIEGCYGLTNHKQCMISRUIFRUSYUKHBPJDOGAZMUHQXXHMTOXUVYVCYQUKHTYOEDNFMCCWPXWQWKDVPONYRQNRZYXOVLZZ");
    msg.leader_speed = 0.388782327009;
    msg.leader_bank_lim = 0.607547099368;
    msg.pos_sim_err_lim = 0.891327133592;
    msg.pos_sim_err_wrn = 0.926684902195;
    msg.pos_sim_err_timeout = 4796U;
    msg.converg_max = 0.871785908224;
    msg.converg_timeout = 43255U;
    msg.comms_timeout = 45865U;
    msg.turb_lim = 0.825642224187;
    msg.custom.assign("XNHPZRWBCSTXEOGQRKQGFNLFMTISBAPITKTBFBFDQASFLMJBJOHQQYANXHIJUYMYJABGSVOMGQTWAKSVDQYFHWIOBDMCWONGEKLJBTZNEOUYGEQRIIZJOZASGODCGCVZPVRRNRNPALZUVWYTAJHTJVYUWNMDNFHAQMUDYXCCKKZLIVLLCFHBDUEJMWXPMSUPPZEEVVIWCGOSOLEDKKCTRUYZLRPPVAJMP");

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
    msg.setTimeStamp(0.256360178604);
    msg.setSource(53718U);
    msg.setSourceEntity(149U);
    msg.setDestination(33797U);
    msg.setDestinationEntity(145U);
    msg.control_src = 39371U;
    msg.control_ent = 4U;
    msg.timeout = 0.403509306482;
    msg.loiter_radius = 0.305385528348;
    msg.altitude_interval = 0.88668699991;

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
    msg.setTimeStamp(0.277181812409);
    msg.setSource(46372U);
    msg.setSourceEntity(135U);
    msg.setDestination(58970U);
    msg.setDestinationEntity(71U);
    msg.control_src = 2537U;
    msg.control_ent = 50U;
    msg.timeout = 0.765493149999;
    msg.loiter_radius = 0.746426646238;
    msg.altitude_interval = 0.306133800708;

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
    msg.setTimeStamp(0.349798753526);
    msg.setSource(6197U);
    msg.setSourceEntity(46U);
    msg.setDestination(61429U);
    msg.setDestinationEntity(127U);
    msg.control_src = 45961U;
    msg.control_ent = 71U;
    msg.timeout = 0.770696387584;
    msg.loiter_radius = 0.285983032119;
    msg.altitude_interval = 0.618957533759;

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
    msg.setTimeStamp(0.978546356085);
    msg.setSource(41052U);
    msg.setSourceEntity(207U);
    msg.setDestination(59511U);
    msg.setDestinationEntity(190U);
    msg.flags = 13U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.604307368215;
    tmp_msg_0.speed_units = 147U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.768244185933;
    tmp_msg_1.z_units = 177U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.271701855939;
    msg.lon = 0.799855981286;
    msg.radius = 0.740529198022;

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
    msg.setTimeStamp(0.685525565137);
    msg.setSource(16580U);
    msg.setSourceEntity(12U);
    msg.setDestination(51797U);
    msg.setDestinationEntity(7U);
    msg.flags = 0U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.84094788647;
    tmp_msg_0.speed_units = 95U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.553497301535;
    tmp_msg_1.z_units = 43U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.665225939021;
    msg.lon = 0.227556084325;
    msg.radius = 0.585616049592;

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
    msg.setTimeStamp(0.275227631064);
    msg.setSource(8159U);
    msg.setSourceEntity(230U);
    msg.setDestination(43249U);
    msg.setDestinationEntity(208U);
    msg.flags = 161U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.735253904409;
    tmp_msg_0.speed_units = 123U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.771132774719;
    tmp_msg_1.z_units = 140U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.844306873821;
    msg.lon = 0.421377605971;
    msg.radius = 0.947590732955;

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
    msg.setTimeStamp(0.455974411174);
    msg.setSource(47145U);
    msg.setSourceEntity(11U);
    msg.setDestination(39581U);
    msg.setDestinationEntity(55U);
    msg.control_src = 59386U;
    msg.control_ent = 111U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 172U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.633028128177;
    tmp_tmp_msg_0_0.speed_units = 16U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.926370731408;
    tmp_tmp_msg_0_1.z_units = 226U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.482829059349;
    tmp_msg_0.lon = 0.832029877606;
    tmp_msg_0.radius = 0.187281878965;
    msg.reference.set(tmp_msg_0);
    msg.state = 140U;
    msg.proximity = 187U;

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
    msg.setTimeStamp(0.883989143537);
    msg.setSource(33862U);
    msg.setSourceEntity(98U);
    msg.setDestination(20455U);
    msg.setDestinationEntity(102U);
    msg.control_src = 4943U;
    msg.control_ent = 104U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 39U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.0346009815361;
    tmp_tmp_msg_0_0.speed_units = 145U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.185781614173;
    tmp_tmp_msg_0_1.z_units = 253U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.905296626646;
    tmp_msg_0.lon = 0.644581879067;
    tmp_msg_0.radius = 0.78740978795;
    msg.reference.set(tmp_msg_0);
    msg.state = 201U;
    msg.proximity = 226U;

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
    msg.setTimeStamp(0.0587498722487);
    msg.setSource(19819U);
    msg.setSourceEntity(7U);
    msg.setDestination(36761U);
    msg.setDestinationEntity(147U);
    msg.control_src = 44597U;
    msg.control_ent = 20U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 66U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.504322841417;
    tmp_tmp_msg_0_0.speed_units = 118U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.377128751502;
    tmp_tmp_msg_0_1.z_units = 37U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.922113817295;
    tmp_msg_0.lon = 0.698770999247;
    tmp_msg_0.radius = 0.875146478502;
    msg.reference.set(tmp_msg_0);
    msg.state = 61U;
    msg.proximity = 12U;

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
    msg.setTimeStamp(0.00864288948056);
    msg.setSource(26046U);
    msg.setSourceEntity(100U);
    msg.setDestination(38945U);
    msg.setDestinationEntity(226U);
    msg.ax_cmd = 0.291643811646;
    msg.ay_cmd = 0.371696993499;
    msg.az_cmd = 0.760726904476;
    msg.ax_des = 0.114783557621;
    msg.ay_des = 0.990453849074;
    msg.az_des = 0.269711431012;
    msg.virt_err_x = 0.274313080229;
    msg.virt_err_y = 0.580697686262;
    msg.virt_err_z = 0.0647934650771;
    msg.surf_fdbk_x = 0.841191575285;
    msg.surf_fdbk_y = 0.61082871579;
    msg.surf_fdbk_z = 0.786270136137;
    msg.surf_unkn_x = 0.374501097847;
    msg.surf_unkn_y = 0.0909355702313;
    msg.surf_unkn_z = 0.491527986413;
    msg.ss_x = 0.549256655501;
    msg.ss_y = 0.754405193151;
    msg.ss_z = 0.372667814525;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("TQQWJNFYARLBBNYOOCSQSIHPGFMSSKNEAXLFIMLFQJYEOQHIAWEKEEXPGVNGSCHGOPJMQWWZKKYFZZIFJTCWLUDGVCPZCTNRVBPORLSUMHIRMWJEIURGFAKJISADPPZBZXOXHRXYDNQMAPLOEXVOOWFCXLDZCUBAZLGTSQDYBNBKJGHGDMXJHXGVXUVSRJTMKKWTUTATLKCBBFVQOHKDZCR");
    tmp_msg_0.dist = 0.438769004186;
    tmp_msg_0.err = 0.25028662115;
    tmp_msg_0.ctrl_imp = 0.941721666399;
    tmp_msg_0.rel_dir_x = 0.263902711719;
    tmp_msg_0.rel_dir_y = 0.114065119078;
    tmp_msg_0.rel_dir_z = 0.0035319745272;
    tmp_msg_0.err_x = 0.0998777517331;
    tmp_msg_0.err_y = 0.174424302543;
    tmp_msg_0.err_z = 0.64519110169;
    tmp_msg_0.rf_err_x = 0.0815475151781;
    tmp_msg_0.rf_err_y = 0.328149988355;
    tmp_msg_0.rf_err_z = 0.353510392699;
    tmp_msg_0.rf_err_vx = 0.715648143664;
    tmp_msg_0.rf_err_vy = 0.0572006608447;
    tmp_msg_0.rf_err_vz = 0.571019290448;
    tmp_msg_0.ss_x = 0.620509797057;
    tmp_msg_0.ss_y = 0.95022174583;
    tmp_msg_0.ss_z = 0.637694228484;
    tmp_msg_0.virt_err_x = 0.368348796758;
    tmp_msg_0.virt_err_y = 0.375034218728;
    tmp_msg_0.virt_err_z = 0.293456619922;
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
    msg.setTimeStamp(0.00229893886667);
    msg.setSource(10528U);
    msg.setSourceEntity(106U);
    msg.setDestination(13158U);
    msg.setDestinationEntity(140U);
    msg.ax_cmd = 0.0980260175889;
    msg.ay_cmd = 0.197951334016;
    msg.az_cmd = 0.895102040531;
    msg.ax_des = 0.773940453917;
    msg.ay_des = 0.424650039767;
    msg.az_des = 0.788386394181;
    msg.virt_err_x = 0.960501502203;
    msg.virt_err_y = 0.617785085308;
    msg.virt_err_z = 0.316944200226;
    msg.surf_fdbk_x = 0.263292932612;
    msg.surf_fdbk_y = 0.679951474946;
    msg.surf_fdbk_z = 0.196351572766;
    msg.surf_unkn_x = 0.122366172018;
    msg.surf_unkn_y = 0.869452525811;
    msg.surf_unkn_z = 0.571193039484;
    msg.ss_x = 0.923832131378;
    msg.ss_y = 0.497438833734;
    msg.ss_z = 0.655025639884;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("FWZAHDAXIASZPAYFWZVENYQRTDLBKJCTBGIWEERJOOLUEXMGKIJBAIPLSFZAMTWZRIJEOMJBYKLOIIPLKVCNFCLNJVNGHVPHMXRMCKSNZBHGWBETHZUMSTLHQCKNVQPDVFQDQXNXQIEQZMHJRDXOBUOODFBAGBWWKCCUPFEJTROSARSSUYHFTHBXWGVUUI");
    tmp_msg_0.dist = 0.214683622892;
    tmp_msg_0.err = 0.859799597694;
    tmp_msg_0.ctrl_imp = 0.192957167996;
    tmp_msg_0.rel_dir_x = 0.870855079061;
    tmp_msg_0.rel_dir_y = 0.351328767194;
    tmp_msg_0.rel_dir_z = 0.89135355616;
    tmp_msg_0.err_x = 0.674660610836;
    tmp_msg_0.err_y = 0.373669283536;
    tmp_msg_0.err_z = 0.146841813515;
    tmp_msg_0.rf_err_x = 0.728502202128;
    tmp_msg_0.rf_err_y = 0.642111070032;
    tmp_msg_0.rf_err_z = 0.344807667356;
    tmp_msg_0.rf_err_vx = 0.00130234676882;
    tmp_msg_0.rf_err_vy = 0.190435525769;
    tmp_msg_0.rf_err_vz = 0.312284817727;
    tmp_msg_0.ss_x = 0.900336919676;
    tmp_msg_0.ss_y = 0.424597941416;
    tmp_msg_0.ss_z = 0.913804337407;
    tmp_msg_0.virt_err_x = 0.324378276498;
    tmp_msg_0.virt_err_y = 0.42204149442;
    tmp_msg_0.virt_err_z = 0.582644222176;
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
    msg.setTimeStamp(0.337288176424);
    msg.setSource(50082U);
    msg.setSourceEntity(110U);
    msg.setDestination(41001U);
    msg.setDestinationEntity(91U);
    msg.ax_cmd = 0.106477088123;
    msg.ay_cmd = 0.0753939564841;
    msg.az_cmd = 0.580504622438;
    msg.ax_des = 0.721550511704;
    msg.ay_des = 0.87738696337;
    msg.az_des = 0.278197866305;
    msg.virt_err_x = 0.372204014393;
    msg.virt_err_y = 0.404559380266;
    msg.virt_err_z = 0.759492833351;
    msg.surf_fdbk_x = 0.49752223386;
    msg.surf_fdbk_y = 0.480241900326;
    msg.surf_fdbk_z = 0.502703413942;
    msg.surf_unkn_x = 0.436105454079;
    msg.surf_unkn_y = 0.041935496716;
    msg.surf_unkn_z = 0.5971123011;
    msg.ss_x = 0.0051462146465;
    msg.ss_y = 0.818214852529;
    msg.ss_z = 0.871401557985;

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
    msg.setTimeStamp(0.586266022933);
    msg.setSource(12081U);
    msg.setSourceEntity(243U);
    msg.setDestination(62115U);
    msg.setDestinationEntity(33U);
    msg.s_id.assign("LVCDTGLKWEVMADBUHDJZUMVRSTDFRYGMMSBPXUPYOTSNCBYDIAZAJFPRZLPWFOKIKZBQKKIQIUBMPVYVTUBRLHQBTEOVBJYOUVELWKBPYGNRIRKFTSRXARHWCAODMGCMVZIGMFYPYYCGJGVOLKMEAHCLXPEWFXUNJJKIXERNEEXLRQNYTQCNCHWJPXSQOOAJSUDFGEK");
    msg.dist = 0.145316839657;
    msg.err = 0.642437603093;
    msg.ctrl_imp = 0.30469979836;
    msg.rel_dir_x = 0.269251289113;
    msg.rel_dir_y = 0.919613099035;
    msg.rel_dir_z = 0.402915848078;
    msg.err_x = 0.908447029254;
    msg.err_y = 0.185380089789;
    msg.err_z = 0.252591903356;
    msg.rf_err_x = 0.0287120621846;
    msg.rf_err_y = 0.571300547279;
    msg.rf_err_z = 0.0354036829014;
    msg.rf_err_vx = 0.461853944127;
    msg.rf_err_vy = 0.246277057217;
    msg.rf_err_vz = 0.0413931303568;
    msg.ss_x = 0.0834297728915;
    msg.ss_y = 0.731744818873;
    msg.ss_z = 0.603023759454;
    msg.virt_err_x = 0.333005813565;
    msg.virt_err_y = 0.678112256768;
    msg.virt_err_z = 0.203484121315;

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
    msg.setTimeStamp(0.0769201037372);
    msg.setSource(32054U);
    msg.setSourceEntity(143U);
    msg.setDestination(53874U);
    msg.setDestinationEntity(102U);
    msg.s_id.assign("WPYPBHUDLEOKUWPOSQIAALWGMCREGMQQRPQRIADCRXZYCKZJDZYDLVCOCNNVHFITXDMWHFPHZJJQSYMMUJKPTHQLUSYNFIQXAZCVYMBWZUKOMRDWSBDVBXKCOOBLJEXFNASSUEEKRIYDABRMXZUHCJAFNWAWSFKRI");
    msg.dist = 0.25195310491;
    msg.err = 0.172926957899;
    msg.ctrl_imp = 0.851933500031;
    msg.rel_dir_x = 0.276722731676;
    msg.rel_dir_y = 0.456800519543;
    msg.rel_dir_z = 0.441261904256;
    msg.err_x = 0.814715377867;
    msg.err_y = 0.434099780937;
    msg.err_z = 0.938635968734;
    msg.rf_err_x = 0.763723308945;
    msg.rf_err_y = 0.69714084826;
    msg.rf_err_z = 0.360123727013;
    msg.rf_err_vx = 0.0504401318209;
    msg.rf_err_vy = 0.255200196413;
    msg.rf_err_vz = 0.0141411383364;
    msg.ss_x = 0.319885481049;
    msg.ss_y = 0.304151825168;
    msg.ss_z = 0.889172445364;
    msg.virt_err_x = 0.714925525996;
    msg.virt_err_y = 0.325865711454;
    msg.virt_err_z = 0.592950269625;

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
    msg.setTimeStamp(0.473429321374);
    msg.setSource(12843U);
    msg.setSourceEntity(44U);
    msg.setDestination(46875U);
    msg.setDestinationEntity(83U);
    msg.s_id.assign("CTDJVEATAQIFMBFTUDFXPBHNRWBPEEUZKJLCSRFDWFJUAEXZOWPOYATVQAIFCZNBSLKOOWHBXJYDYVIXBTGKFQFRNLSVWSXMEAMYDYJEIQQBOVHZTVGIHYMSZMHO");
    msg.dist = 0.562015464907;
    msg.err = 0.637339430136;
    msg.ctrl_imp = 0.475169703274;
    msg.rel_dir_x = 0.574301351548;
    msg.rel_dir_y = 0.219245121915;
    msg.rel_dir_z = 0.704460607682;
    msg.err_x = 0.995766957816;
    msg.err_y = 0.800393935423;
    msg.err_z = 0.453002037671;
    msg.rf_err_x = 0.431005022704;
    msg.rf_err_y = 0.0668000959571;
    msg.rf_err_z = 0.396747897654;
    msg.rf_err_vx = 0.0683987565386;
    msg.rf_err_vy = 0.924291506432;
    msg.rf_err_vz = 0.071215749515;
    msg.ss_x = 0.683868538829;
    msg.ss_y = 0.855014406087;
    msg.ss_z = 0.0288949613428;
    msg.virt_err_x = 0.721277737021;
    msg.virt_err_y = 0.66314841469;
    msg.virt_err_z = 0.665095812484;

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
    msg.setTimeStamp(0.469338506916);
    msg.setSource(9139U);
    msg.setSourceEntity(25U);
    msg.setDestination(57400U);
    msg.setDestinationEntity(80U);
    msg.timeout = 13821U;
    msg.rpm = 0.276120519703;
    msg.direction = 237U;
    msg.custom.assign("URGUITYBUYJVONDKAAZIYNSDLZMFJUUXJ");

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
    msg.setTimeStamp(0.233730087354);
    msg.setSource(62366U);
    msg.setSourceEntity(163U);
    msg.setDestination(36801U);
    msg.setDestinationEntity(114U);
    msg.timeout = 59280U;
    msg.rpm = 0.155215883149;
    msg.direction = 162U;
    msg.custom.assign("JGJRYKPULILTCBFGKROANOIZKFCQKGVSTLQFMTISVYFWYIERZJTUFYOZQWBILMVAAYQRKPNHLYPEYHZMGYZDHNPXHNMKQKCRXWWELCRSBJOKDNQGRQSTNJASFCDJOHXWZGAEHUCIPJLNVDVOTUAEUVTJPSAUWDSPPVHONWMBXDUCAQVBMJBAUZPBHXIUSXDDXNDUTGLEQCEIXNYWPIAGBVOWOMXOFXMZBSKQZZSFELMFRDWRMIEJEHVCHC");

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
    msg.setTimeStamp(0.845002657349);
    msg.setSource(32152U);
    msg.setSourceEntity(28U);
    msg.setDestination(41920U);
    msg.setDestinationEntity(74U);
    msg.timeout = 2533U;
    msg.rpm = 0.935750319148;
    msg.direction = 30U;
    msg.custom.assign("PYYBXESCJMQKCESQPLGUUPULJSMBHLWRELIJUQDIEQFVRQCCLKBWRNKVLDBZPADGAQZKMSYZRQOOERUGEQHHGYVZSWGBBATOYEIUFEUOTSKSGVDKAGFIAKXSZYMUTIDBZNJA");

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
    msg.setTimeStamp(0.700696638083);
    msg.setSource(52554U);
    msg.setSourceEntity(47U);
    msg.setDestination(3321U);
    msg.setDestinationEntity(187U);
    msg.formation_name.assign("NYVTUPSARMIYFJDGURIPZBPNOEZPONUDJXOIWCSTOSFLRWMKEDLUVVCFIZXAKHLCMHAEGMRXBV");
    msg.type = 228U;
    msg.op = 246U;
    msg.group_name.assign("PKMMZIYCTIUSDGYMCLKSPDNZYDRNZCVNAFOOTWVXZNLMPDEOHVCBJIMZXUCZTCGRYBARHSAKUVJEAHZBXAGARYCVIWFATFTLNBVODOQSVCICDJWMMTPQBJSWIIEYXYJEFWGLUYDSGDFJPKSXXQMWTKTXSRHHNKDXRHEQLBIRFUIGVQJOUNPHSFHLLUWAPWEGRPPFSEZBVNZLOUQEITQNBJTOQFUOHQHMGGEJRXBFRYUBAOEMZKWAXKQ");
    msg.plan_id.assign("VKFWQVTUBNZSMRRDUOOEQCSSOLZOGGUSIXSERBPZVXHNUCWSAHTNHZAVFXQFGQITOTDNSMNJFHMDHQHTKQGDXIDKVABYGIKCQBFPRHPPJQNLAXPW");
    msg.description.assign("FRRTRZVYRWPHWYPKMFLSGDTUKHAVVJOGURHEDSGNXCSIHKCQODIMQFENUZPYNRLJNNQNCYIB");
    msg.reference_frame = 96U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 2558U;
    tmp_msg_0.off_x = 0.379541130105;
    tmp_msg_0.off_y = 0.616265757106;
    tmp_msg_0.off_z = 0.829264556777;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.318996760126;
    msg.leader_speed_min = 0.637564394175;
    msg.leader_speed_max = 0.247532211887;
    msg.leader_alt_min = 0.0031614487739;
    msg.leader_alt_max = 0.484836443779;
    msg.pos_sim_err_lim = 0.282506809307;
    msg.pos_sim_err_wrn = 0.74158526486;
    msg.pos_sim_err_timeout = 23761U;
    msg.converg_max = 0.384387314292;
    msg.converg_timeout = 26073U;
    msg.comms_timeout = 2649U;
    msg.turb_lim = 0.586348668223;
    msg.custom.assign("LJMLGCKVVQMACOWQAAXKPDLATFYCOVIXFYNHDKWQIPNMQFGTJWXLHXEYRRCEBZBSZSGRRMHVEFSQEDONKHRRMFCLDPIPVUVNBOITDGYGUYIIMNAKLTMHBJFYTMBJUKZGDDRCNCULPHZRISPHWQWQNYGMHHIIWAEWKKJUBLXGSPTNEYJRJSOCTFQUVCAWBFUJOVYVGWCMUPBOPEQXZN");

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
    msg.setTimeStamp(0.143421237363);
    msg.setSource(35171U);
    msg.setSourceEntity(182U);
    msg.setDestination(11616U);
    msg.setDestinationEntity(87U);
    msg.formation_name.assign("FQFVATDCMHENHD");
    msg.type = 179U;
    msg.op = 183U;
    msg.group_name.assign("DANKWXHOTZXMBNSMZDRMJ");
    msg.plan_id.assign("LWTWYJCEZOHTFYVTDZIZKPOIXXFQLCNEHWQHGRVORX");
    msg.description.assign("FGPYUYNHXFPRCTXWFXXJBKWELMGGKTLEHMCQHOUFIDALNVEYPTQXWMJBAQIVZJYVBZOIPMOIUGSLRNZIOFZWPOMDFEBCUBGPCMRHJGYTBOXOHPQKEUYAJUSVRIBFZUMCVKJJLRPVVSGLCZRZDDWTNZTUODPTETIOXRQBSRUUKHVAAAHSXITAMJBCLHQNLKXIOCSWKCKDWSWFESFAHLDHSZCAGVVXDQWNKMYESGZNRYEQQ");
    msg.reference_frame = 154U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 44770U;
    tmp_msg_0.off_x = 0.879597769078;
    tmp_msg_0.off_y = 0.377466605047;
    tmp_msg_0.off_z = 0.0657024932679;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.107564686762;
    msg.leader_speed_min = 0.756167809473;
    msg.leader_speed_max = 0.268304435128;
    msg.leader_alt_min = 0.195042274227;
    msg.leader_alt_max = 0.10330390612;
    msg.pos_sim_err_lim = 0.893908381757;
    msg.pos_sim_err_wrn = 0.0748621113679;
    msg.pos_sim_err_timeout = 47529U;
    msg.converg_max = 0.137017515975;
    msg.converg_timeout = 21878U;
    msg.comms_timeout = 38564U;
    msg.turb_lim = 0.043113030233;
    msg.custom.assign("XHECJNVVRYXGKSDTCIDQUZDFHJATDSGSRLNZIGGCBWLFDWLMIFVUSAGHUJDKZWJTCGBHNEXCGANMKNCBVTVIUPDWIFZPMHOEKVOSPIYLLSKYKXMESMZYRPUMODIOPXJZEDZAZBU");

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
    msg.setTimeStamp(0.747625911088);
    msg.setSource(30610U);
    msg.setSourceEntity(219U);
    msg.setDestination(30603U);
    msg.setDestinationEntity(92U);
    msg.formation_name.assign("GFPOMYPSHCVNPQZYNCYRPIUKTFVPCAKKIYFDVWALERNTYXMLLKCMKOEGAHODJJAXWLXDOFURLXSGHCAXDX");
    msg.type = 168U;
    msg.op = 133U;
    msg.group_name.assign("XWQPGJXMBSBXZSRMULPVTQMKGGFLJOZVAVWMIPDBVIILYXRYOAKGFGYIAASOPJYXWXTOTNZHSBFTWITRFJFFHAUBTIRQNGHHLSHARRMUEWJNUSKSQLHPGQHVBXZEIVSUJNTGUUEYERNZWBUECTSYWCONUAHQCLDNDKZJENIGVLYWOCNWSEYEPCIFFMQTHXGDPUXNDRDJZ");
    msg.plan_id.assign("HNIIWUILCANDTHJTTDMMLVUWGDWEBTKYQVTWEYEEDSFQOLPETPMJWBN");
    msg.description.assign("LWENUKXJLGVUJJQDAXBKMFIJHVPATEDFDKGBQAFQEKAOYRKQAVZPRBNVKUDUQHFBYVWKHZMXLSIZTBIZOPLIRXYRRMBSBNZSMPPSDEFEIOXJCTWSWAFOJKHUPNDGWGUCBIUMROSQYJNBXZJRAJGSLNTSCRACMZPUFTEWICAOHVWOLQZKGMHKWNSZVYTLUORDTSI");
    msg.reference_frame = 216U;
    msg.leader_bank_lim = 0.103503925172;
    msg.leader_speed_min = 0.518760418073;
    msg.leader_speed_max = 0.331629042699;
    msg.leader_alt_min = 0.0171692290571;
    msg.leader_alt_max = 0.651363849358;
    msg.pos_sim_err_lim = 0.454214203396;
    msg.pos_sim_err_wrn = 0.619075914041;
    msg.pos_sim_err_timeout = 14322U;
    msg.converg_max = 0.0399797007402;
    msg.converg_timeout = 32519U;
    msg.comms_timeout = 58471U;
    msg.turb_lim = 0.962166455466;
    msg.custom.assign("BGBCGWAOFEUKQIGAIWKJSDDWOFVQQYNJSZUJTDOKPRMWMXPKYPRVHSELBYFKFSXCUMHPNILAUYMEYKCTECSCUWNQTOZACPSEYVHEBGRMLYZLZDKZXNUFQQPCIOOIUITJBXAZPAMIANXDJWAPJRUVBSGHEKBDTRJVNRHWLGIMNHPMOQHSSRWTICMZBIFUFGLFCVBLVCGWPGBJOEWM");

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
    msg.setTimeStamp(0.971879820566);
    msg.setSource(62172U);
    msg.setSourceEntity(64U);
    msg.setDestination(4131U);
    msg.setDestinationEntity(115U);
    msg.timeout = 44481U;
    msg.lat = 0.787921219598;
    msg.lon = 0.442709244377;
    msg.z = 0.633644794465;
    msg.z_units = 35U;
    msg.speed = 0.017906988373;
    msg.speed_units = 198U;
    msg.custom.assign("LNHJTGLFHHBOPDMUZIZWLYLIRJQXQOCFMGCUKKRLGPDVYELRJIZCMRUOEBSOPANCWWLCNMAOEPVKFNRXAFHISVMKVYBTKQDPCOWAAWIJJWQUBYS");

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
    msg.setTimeStamp(0.880925940948);
    msg.setSource(10628U);
    msg.setSourceEntity(244U);
    msg.setDestination(31250U);
    msg.setDestinationEntity(82U);
    msg.timeout = 56658U;
    msg.lat = 0.384134864493;
    msg.lon = 0.19433799418;
    msg.z = 0.329954132137;
    msg.z_units = 220U;
    msg.speed = 0.651544191032;
    msg.speed_units = 227U;
    msg.custom.assign("CPJGIRJDOWBZIGLIAZBQZENQQQQWVFEDAQFYKSGNOUGHSDDOTBECZYCR");

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
    msg.setTimeStamp(0.838544878466);
    msg.setSource(2155U);
    msg.setSourceEntity(58U);
    msg.setDestination(11045U);
    msg.setDestinationEntity(27U);
    msg.timeout = 38168U;
    msg.lat = 0.154759777384;
    msg.lon = 0.275923737788;
    msg.z = 0.871617646041;
    msg.z_units = 181U;
    msg.speed = 0.0604681550204;
    msg.speed_units = 208U;
    msg.custom.assign("HMHQBCPMKIVQRDDXUUKLPORYUSTAJQLSFHBXVGTVFKNVOBVECUFAWLQPIDQNRLQHJOBYOMXJRMXZVHTPMACSXJMZBJTPZBGSKONLBWYPKTAMWXKNYAUDWCNCCOAJKG");

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
    msg.setTimeStamp(0.190908579244);
    msg.setSource(42399U);
    msg.setSourceEntity(241U);
    msg.setDestination(26075U);
    msg.setDestinationEntity(70U);
    msg.timeout = 48944U;
    msg.lat = 0.731724714604;
    msg.lon = 0.336747915781;
    msg.z = 0.192217380428;
    msg.z_units = 67U;
    msg.speed = 0.835958824836;
    msg.speed_units = 182U;
    msg.custom.assign("VQDIZUUGCSIYONDLRCOPTKMHOAFBRXVTUOKGQJQQDLSKTRNIGJLNIZHLFZERNEOBBCYMTTSWNSGBISXWVQJXYUGPFWYHBUPAGDSUZGBHFVHLMLUAUBJVVBLUFKATPQECHDIIXLMOGEITZESC");

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
    msg.setTimeStamp(0.800249925813);
    msg.setSource(5323U);
    msg.setSourceEntity(87U);
    msg.setDestination(45218U);
    msg.setDestinationEntity(201U);
    msg.timeout = 30733U;
    msg.lat = 0.0412559359536;
    msg.lon = 0.106843580012;
    msg.z = 0.265266811735;
    msg.z_units = 253U;
    msg.speed = 0.316285290853;
    msg.speed_units = 69U;
    msg.custom.assign("SCSFIYKKBWNBPWPPHKJBUPAALXYIVGYXQSXOZCQFEUMHXQBYFNXUVIEPGDBHCDZZMNCKTMSONJPMRAUCAEYIGTLFJKEGYTTKLFHRFWUWOF");

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
    msg.setTimeStamp(0.414175820169);
    msg.setSource(13778U);
    msg.setSourceEntity(48U);
    msg.setDestination(14107U);
    msg.setDestinationEntity(137U);
    msg.timeout = 10153U;
    msg.lat = 0.669554390498;
    msg.lon = 0.199315250046;
    msg.z = 0.31520472699;
    msg.z_units = 202U;
    msg.speed = 0.0179798378487;
    msg.speed_units = 156U;
    msg.custom.assign("FIXDGPDQVUWCGWFQXERTEZHFUZVEWBJWGTHXAXNMGHNOQGEELLHMVLDSMUWUMATPVJCLEOPJNIIBXZAETKDJVACYCZHTLPASCZYIRMJMBPGEOVYYFPOPBONRY");

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
    msg.setTimeStamp(0.808364717018);
    msg.setSource(51097U);
    msg.setSourceEntity(1U);
    msg.setDestination(55855U);
    msg.setDestinationEntity(198U);
    msg.arrival_time = 0.52562615018;
    msg.lat = 0.797577203065;
    msg.lon = 0.585201398185;
    msg.z = 0.760273696623;
    msg.z_units = 210U;
    msg.travel_z = 0.24479837996;
    msg.travel_z_units = 147U;
    msg.delayed = 44U;

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
    msg.setTimeStamp(0.64955344804);
    msg.setSource(13901U);
    msg.setSourceEntity(124U);
    msg.setDestination(17762U);
    msg.setDestinationEntity(223U);
    msg.arrival_time = 0.730137833098;
    msg.lat = 0.919981537943;
    msg.lon = 0.61675011088;
    msg.z = 0.797161849509;
    msg.z_units = 206U;
    msg.travel_z = 0.830399559708;
    msg.travel_z_units = 183U;
    msg.delayed = 126U;

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
    msg.setTimeStamp(0.605065983079);
    msg.setSource(45948U);
    msg.setSourceEntity(197U);
    msg.setDestination(6682U);
    msg.setDestinationEntity(127U);
    msg.arrival_time = 0.918312829537;
    msg.lat = 0.101556169216;
    msg.lon = 0.792753859895;
    msg.z = 0.799660558378;
    msg.z_units = 56U;
    msg.travel_z = 0.79030498235;
    msg.travel_z_units = 45U;
    msg.delayed = 239U;

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
    msg.setTimeStamp(0.551379197843);
    msg.setSource(54296U);
    msg.setSourceEntity(236U);
    msg.setDestination(25135U);
    msg.setDestinationEntity(111U);
    msg.lat = 0.834424584894;
    msg.lon = 0.499538426251;
    msg.z = 0.347290310588;
    msg.z_units = 23U;
    msg.speed = 0.836395986988;
    msg.speed_units = 97U;
    msg.bearing = 0.688118831693;
    msg.cross_angle = 0.168165547797;
    msg.width = 0.726244215524;
    msg.length = 0.0175661845785;
    msg.coff = 223U;
    msg.angaperture = 0.804119443435;
    msg.range = 15923U;
    msg.overlap = 106U;
    msg.flags = 104U;
    msg.custom.assign("DMXXTGMJKZTBPFARUKNEZXUJAQWBEOMTJJRBFRLKICSTDFPJZGNVQJNTBXGAAWRHPQFQIOYLYMQHMEDDSOSHFNQPSTCKHRSCDLZSYDEKLMOC");

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
    msg.setTimeStamp(0.863530241849);
    msg.setSource(43092U);
    msg.setSourceEntity(187U);
    msg.setDestination(49869U);
    msg.setDestinationEntity(113U);
    msg.lat = 0.123287447374;
    msg.lon = 0.990570984957;
    msg.z = 0.457888319525;
    msg.z_units = 195U;
    msg.speed = 0.470012182463;
    msg.speed_units = 219U;
    msg.bearing = 0.568972656094;
    msg.cross_angle = 0.380806890147;
    msg.width = 0.808525033671;
    msg.length = 0.385387994635;
    msg.coff = 141U;
    msg.angaperture = 0.218868184536;
    msg.range = 63083U;
    msg.overlap = 149U;
    msg.flags = 14U;
    msg.custom.assign("GVRSRLFCQIVNNGSBJBCFNUFHAKYGATDBQPEKQWXGPXYFFJOSCENWJQPZAMUANJILLFOAEBTKLNMAZXLQHEPDSJTRXKYOXJVWDSSIHQYMHZYTQUMUZUWUWCCRYVIYWRBAAIYDWGGTXBSTJLIYJVJFVGEAUDDGXPFMNTKPMCOCLCKNHSEWUZBMQLHKIGTZBRHFDNUGIJDUDWVBVPR");

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
    msg.setTimeStamp(0.752990639551);
    msg.setSource(10208U);
    msg.setSourceEntity(200U);
    msg.setDestination(6258U);
    msg.setDestinationEntity(147U);
    msg.lat = 0.478898514078;
    msg.lon = 0.735927471209;
    msg.z = 0.923601555936;
    msg.z_units = 244U;
    msg.speed = 0.877515601988;
    msg.speed_units = 242U;
    msg.bearing = 0.414890158066;
    msg.cross_angle = 0.689972314286;
    msg.width = 0.570272176136;
    msg.length = 0.938741463852;
    msg.coff = 246U;
    msg.angaperture = 0.819057431199;
    msg.range = 48025U;
    msg.overlap = 139U;
    msg.flags = 72U;
    msg.custom.assign("LXNZIVGALZVDJLFNQEBVYNRABLPFCUYEXBINOBDESXINXZJSOUUGWEMWBFDAVXCOJDWNWTBBNYULKTFQOPDAPXUFIUHU");

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
    msg.setTimeStamp(0.484962468035);
    msg.setSource(20185U);
    msg.setSourceEntity(20U);
    msg.setDestination(29109U);
    msg.setDestinationEntity(249U);
    msg.timeout = 43701U;
    msg.lat = 0.94191257834;
    msg.lon = 0.934270260125;
    msg.z = 0.103179740819;
    msg.z_units = 55U;
    msg.speed = 0.571260648368;
    msg.speed_units = 131U;
    msg.syringe0 = 55U;
    msg.syringe1 = 102U;
    msg.syringe2 = 229U;
    msg.custom.assign("AYEWTWXDWBPJOXMLQLJLROKKIHMDFCBCWCCNFZMIXQKVRPHHSBSOQEGCZPXBIDIUODACTFAXBUWPVDVYEETVZFTXFSDUUGMDOQGTNEJPPWAGZNUVAAGIH");

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
    msg.setTimeStamp(0.781874935444);
    msg.setSource(64998U);
    msg.setSourceEntity(197U);
    msg.setDestination(65016U);
    msg.setDestinationEntity(137U);
    msg.timeout = 41149U;
    msg.lat = 0.213191453577;
    msg.lon = 0.178281825196;
    msg.z = 0.316146048044;
    msg.z_units = 44U;
    msg.speed = 0.977993257985;
    msg.speed_units = 242U;
    msg.syringe0 = 84U;
    msg.syringe1 = 210U;
    msg.syringe2 = 93U;
    msg.custom.assign("WGRFSMXWOKJIPOWCXZLYLIYDRJXGJTTBRXHCTKSXVOXPQTFZMCIFQCIMHOUMBWLIKKASBB");

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
    msg.setTimeStamp(0.700329880722);
    msg.setSource(14066U);
    msg.setSourceEntity(220U);
    msg.setDestination(26091U);
    msg.setDestinationEntity(176U);
    msg.timeout = 57683U;
    msg.lat = 0.357443957448;
    msg.lon = 0.0271208253661;
    msg.z = 0.940333316703;
    msg.z_units = 14U;
    msg.speed = 0.990859742212;
    msg.speed_units = 197U;
    msg.syringe0 = 26U;
    msg.syringe1 = 178U;
    msg.syringe2 = 73U;
    msg.custom.assign("BNBPRSHJYEWWOGXIWCPJFIPJQOUYKKGPDDDWDWAMROHSQHWREJBUYEGINMFKKVPEDDXSCAUXUXANEQARFMALKUTIMOPSXNIJSHIICHHVMEGTAEUHJVZJCNBNFXBACQYDZQZCWKSTRLYVVMFXFZVUSDCQEOQWDBJOXQBLZLVQVUWIJXYKC");

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
    msg.setTimeStamp(0.504923821409);
    msg.setSource(38054U);
    msg.setSourceEntity(26U);
    msg.setDestination(62106U);
    msg.setDestinationEntity(230U);

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
    msg.setTimeStamp(0.680968673074);
    msg.setSource(11350U);
    msg.setSourceEntity(18U);
    msg.setDestination(56906U);
    msg.setDestinationEntity(98U);

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
    msg.setTimeStamp(0.783241336422);
    msg.setSource(16520U);
    msg.setSourceEntity(88U);
    msg.setDestination(11967U);
    msg.setDestinationEntity(174U);

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
    msg.setTimeStamp(0.676900784908);
    msg.setSource(6958U);
    msg.setSourceEntity(199U);
    msg.setDestination(3625U);
    msg.setDestinationEntity(123U);
    msg.lat = 0.048924131186;
    msg.lon = 0.0245963925257;
    msg.z = 0.935119234521;
    msg.z_units = 88U;
    msg.speed = 0.176863267403;
    msg.speed_units = 109U;
    msg.takeoff_pitch = 0.579083990938;
    msg.custom.assign("GCQOISEPDJJRGPCKCSWUYYYBGDG");

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
    msg.setTimeStamp(0.374773915905);
    msg.setSource(35207U);
    msg.setSourceEntity(229U);
    msg.setDestination(10327U);
    msg.setDestinationEntity(37U);
    msg.lat = 0.65219915892;
    msg.lon = 0.940140604206;
    msg.z = 0.709724487529;
    msg.z_units = 232U;
    msg.speed = 0.567633987997;
    msg.speed_units = 115U;
    msg.takeoff_pitch = 0.00329697506438;
    msg.custom.assign("VGILSYSIVBPZXSWWSPYQNLZXUIUTYBXYRGUAMDGLNTFFGUVOEJKLTUBURWQZRJPLMMJLMBVKDCEWKJVKLHGQJJXKPHYXIMDQVOCLNBFKCMPUUAHUDYGFSLRENSKOXQBEFMVTXYTADWZHWOQSCQEEA");

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
    msg.setTimeStamp(0.71108155656);
    msg.setSource(17233U);
    msg.setSourceEntity(158U);
    msg.setDestination(40118U);
    msg.setDestinationEntity(94U);
    msg.lat = 0.590005485339;
    msg.lon = 0.758756495228;
    msg.z = 0.955167013988;
    msg.z_units = 7U;
    msg.speed = 0.456484124354;
    msg.speed_units = 35U;
    msg.takeoff_pitch = 0.191133932983;
    msg.custom.assign("AOTJPIVKURHHQFWTACAEDUBRQXLDOXBDAZRRVOLNOZXMJTMQYFKLHVSZSFL");

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
    msg.setTimeStamp(0.929329177357);
    msg.setSource(18600U);
    msg.setSourceEntity(241U);
    msg.setDestination(17118U);
    msg.setDestinationEntity(181U);
    msg.lat = 0.322277404375;
    msg.lon = 0.170350434278;
    msg.z = 0.229452932667;
    msg.z_units = 153U;
    msg.speed = 0.325709161761;
    msg.speed_units = 167U;
    msg.abort_z = 0.000644432018134;
    msg.bearing = 0.45290076372;
    msg.glide_slope = 213U;
    msg.glide_slope_alt = 0.673697441184;
    msg.custom.assign("RLDPGPOOQCSABVIMNKRODFYWKEYVWWHWZXUQWVOGQNQTJGKSATLCRWSVJMQFZUPOCCJAKFXXZBBURHHTJJOLDCADJXSSKNVFINNYNLNTZGZHQBLSEBVSWXFTRMMFZANVPDEVZIJEHCKGURG");

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
    msg.setTimeStamp(0.172271635868);
    msg.setSource(4572U);
    msg.setSourceEntity(25U);
    msg.setDestination(53191U);
    msg.setDestinationEntity(184U);
    msg.lat = 0.77531604619;
    msg.lon = 0.577320456444;
    msg.z = 0.338532015121;
    msg.z_units = 114U;
    msg.speed = 0.362642187862;
    msg.speed_units = 65U;
    msg.abort_z = 0.590606140077;
    msg.bearing = 0.121092282972;
    msg.glide_slope = 219U;
    msg.glide_slope_alt = 0.4359178107;
    msg.custom.assign("BHJXTHRJZVXUOWGIORQOWMYNHXBSMVBKFMAGFKWUIUDIDFJTSZZQNWJLLUYBLMEOASEMJXYUIUWLQYJLNFVZCKPBRPKTHUXVXVVTEYPQDASNHEQAAICCIBUREFECGSUGVWDJENAMREKBCXIBJASOFRKGAWMTCGXPEGFKDRTROTCTSYPOIRJZTHPCFDOVZIMOSPQYDNWZZLVINQBMSMZHWNPNDQAKPGGYCPJXBCLTAVKXWQFQLNLZLHDHHGYURE");

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
    msg.setTimeStamp(0.315561251942);
    msg.setSource(6572U);
    msg.setSourceEntity(70U);
    msg.setDestination(8463U);
    msg.setDestinationEntity(218U);
    msg.lat = 0.758791375055;
    msg.lon = 0.481278623518;
    msg.z = 0.444765679507;
    msg.z_units = 210U;
    msg.speed = 0.375825498533;
    msg.speed_units = 18U;
    msg.abort_z = 0.742427431341;
    msg.bearing = 0.83187090658;
    msg.glide_slope = 136U;
    msg.glide_slope_alt = 0.869052516676;
    msg.custom.assign("PSAJJOKXGNWLVECGZAUHVFLCMFHHLKPIDQMBKKIGSWWTTKTHNQOJAUQJJUYYAQNAVDAGOXCVSGUHUGFIVVDMRSHNIEPYLXCXYEKERSPSEURDOVZZOZXZIJQDIXDKTQZDAGRRBKXL");

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
    msg.setTimeStamp(0.435559876017);
    msg.setSource(62549U);
    msg.setSourceEntity(52U);
    msg.setDestination(24970U);
    msg.setDestinationEntity(63U);
    msg.lat = 0.020564999976;
    msg.lon = 0.894887720928;
    msg.speed = 0.167693920446;
    msg.speed_units = 159U;
    msg.limits = 228U;
    msg.max_depth = 0.966592811162;
    msg.min_alt = 0.260286573847;
    msg.time_limit = 0.634176223491;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.0406354635399;
    tmp_msg_0.lon = 0.107608667641;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("SOOVSNTLPPZITDLPRLVGBHNCSYKZRKNZTWKPUNHEJWJACUBZHUEIKICLWSESGAXJWLBUGQBRLULYQANOEBRVKQDZPDPRICDCYKRPCCUMZQYUJAVGJJRYISOEVMFFZDDXTYNLRWLBEHOZFMXWXANICESBEKTGOXWQPUDFUMSSGMYEGVIOJBTJAMGLHOQORSQDIJOUNVIEIFAVYXNADMTFTFZRFWHQMNBYFYZPJHVMTVHHKXDXMCKGTXX");
    msg.custom.assign("ABVMUVTXYOIRGMQHEYUQJCQFQWOTXYRNWOYREPIABDYYDIEFSGJDCQASGBRYLKJIUXEXJMABMRTNOWPCMENZSKXEUDILZKBQNNPHVYVHWSROVELKNCSHXCUTUJRVNJKBLZNOYSVLHLGAHKACOXBWTFBRZWQEPFK");

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
    msg.setTimeStamp(0.31330929055);
    msg.setSource(53692U);
    msg.setSourceEntity(63U);
    msg.setDestination(4835U);
    msg.setDestinationEntity(12U);
    msg.lat = 0.198035538286;
    msg.lon = 0.000495175999181;
    msg.speed = 0.0727225122405;
    msg.speed_units = 56U;
    msg.limits = 95U;
    msg.max_depth = 0.502487608688;
    msg.min_alt = 0.253210108678;
    msg.time_limit = 0.80970930034;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.602048815016;
    tmp_msg_0.lon = 0.123608418824;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("BUQWGOIZEZZJQLQDCMZWJKZOGEYIRORACCREWQXVCVQAYBXSDIYORYWXKBPUKPLSGOSEPYVLBKPABEYLFVULTNCXMVHINXTDJANJICFNUZWWGHKTNCHRWQZMNTTXAIDYTSVRIHMKLFDXUBTQTSSGDMVWOUZWJGPFBBHDHPOCMAMPKUTRLCNJWDKYVMXZEFEGO");
    msg.custom.assign("ZLDQCJJWECWBYRUZILJOKSSYJCUBBVQLSUN");

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
    msg.setTimeStamp(0.427129497221);
    msg.setSource(19014U);
    msg.setSourceEntity(78U);
    msg.setDestination(5737U);
    msg.setDestinationEntity(239U);
    msg.lat = 0.315257001782;
    msg.lon = 0.216096216153;
    msg.speed = 0.716948494342;
    msg.speed_units = 188U;
    msg.limits = 15U;
    msg.max_depth = 0.636217077512;
    msg.min_alt = 0.84931509022;
    msg.time_limit = 0.0361176207746;
    msg.controller.assign("HQZZKEOFUXDHCEYDIXZHCWZORXBSAKJEMKXBARYWKMCQAITOFWFXPOYOGKYGSLFDTJVMRJCFWABZMLXUTNNPWBZWCHZJUGNHYEVANHXDREPUEFMVJEOTLRFPLLMHYAMVPEMSDALENUSPNUTNGKGQDPSGTRSRL");
    msg.custom.assign("NEZSLEMAZIPKPIPJWUQRUCSBWSNQIVEIKNPOWHOYHGCBKFBCEUHOWZBBXXXHOZXPLNJVTBMFLWQEEQPSORHRVTXYGYNYKILTAZRFHUANVMXDCSG");

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
    msg.setTimeStamp(0.608605549385);
    msg.setSource(36979U);
    msg.setSourceEntity(10U);
    msg.setDestination(21773U);
    msg.setDestinationEntity(196U);
    msg.target.assign("MTWNFOSKQLGRGLWPUCCJSGIIRPYNXLCOUYJLLIEVEFNSYZKMYJGONNJTXPEWNYLMDZXATZWZDMFCSFMACBYED");
    msg.max_speed = 0.200911373444;
    msg.speed_units = 229U;
    msg.lat = 0.66542757183;
    msg.lon = 0.577985830842;
    msg.z = 0.403504817271;
    msg.z_units = 37U;
    msg.custom.assign("PGWHCGVYDCBZNJYLJEWCVYNAJQDOWMIH");

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
    msg.setTimeStamp(0.866746176472);
    msg.setSource(64352U);
    msg.setSourceEntity(10U);
    msg.setDestination(16712U);
    msg.setDestinationEntity(167U);
    msg.target.assign("DKKJQFEUMPVQUHMFHPBOTAGUHQUSAMKSSOXSPXESDHHSQKEOMPUMFFVCIOJOYFESLIWPRJJTECHFWYBAVBAKWYHCBQRBGVMUWCOTGGTIYIBTITIJWZTEWDRYNLEDLMXMGCMRYTKPLCDJXDEOHOJANAZFQEAUYZNLGBYGXFCYDDYBCRZWLQJUJVXPRZTMGOHLVSDPXUBRWXSNNZARCNVKQQWTZRHXVRZKNSZINKADANI");
    msg.max_speed = 0.943093241145;
    msg.speed_units = 230U;
    msg.lat = 0.475144445638;
    msg.lon = 0.315380492943;
    msg.z = 0.963438879923;
    msg.z_units = 125U;
    msg.custom.assign("KNEYEZIMAMSLQGBNIMHLWXGAELKAJJCMAG");

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
    msg.setTimeStamp(0.4942347935);
    msg.setSource(23798U);
    msg.setSourceEntity(148U);
    msg.setDestination(5840U);
    msg.setDestinationEntity(134U);
    msg.target.assign("AATNJFJCITZPYASROEUZWABQGVUTEAXGXQAHPBBFCELGXUVDFTUZSRCUNMHCVHLPVROXGWIHDPUQVHRJLTHCWLVQWZKHGMYRBUMTQDRIGVAKCVFJDYMJPIJFKEKIJKNDUKNQCNMUUMEBZJTRIMLQBYYZOTPXRVAK");
    msg.max_speed = 0.450784810867;
    msg.speed_units = 154U;
    msg.lat = 0.259476105714;
    msg.lon = 0.506458708383;
    msg.z = 0.918169591869;
    msg.z_units = 210U;
    msg.custom.assign("DVMUFVGNVYCPUWCXBSXGZPZDAHANSVOKVTKAITLGNSXNUILYNFYOSYOLEPRLMIATOLGEEWHWRLDNTIZAYJCFYVIVJDHXCHFKQCXKOZUPIPMRESWFALGCITBQVWEYDTHAZHMVF");

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
    msg.setTimeStamp(0.645035559732);
    msg.setSource(2935U);
    msg.setSourceEntity(120U);
    msg.setDestination(16733U);
    msg.setDestinationEntity(110U);
    msg.timeout = 35253U;
    msg.lat = 0.215832928868;
    msg.lon = 0.380486995578;
    msg.speed = 0.430809987348;
    msg.speed_units = 160U;
    msg.custom.assign("KSRQOQCIEIAFMBTMFDADZCOFHTAXLIWWLHQPDMXSBEBRLTCWIFDMVPHYOROXQKDQCDNYYOMLHLQHMTRLBV");

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
    msg.setTimeStamp(0.625643312809);
    msg.setSource(6224U);
    msg.setSourceEntity(107U);
    msg.setDestination(61849U);
    msg.setDestinationEntity(101U);
    msg.timeout = 9268U;
    msg.lat = 0.291130487937;
    msg.lon = 0.196346754016;
    msg.speed = 0.480947949448;
    msg.speed_units = 237U;
    msg.custom.assign("JJVTDXAEXLUNJWEKMIHUWLFDCEEYEAADRXRKZUBQOIYESJQSFOWYHNZJICRVELBRPCHMWHLCDOGGBOZILGODQVSOAMTUIEYRSTFNVMPMAVFHWLKKKBLVTGYAEWPXKDBLBCLFFBXTSHY");

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
    msg.setTimeStamp(0.276461707652);
    msg.setSource(21861U);
    msg.setSourceEntity(35U);
    msg.setDestination(1394U);
    msg.setDestinationEntity(165U);
    msg.timeout = 3477U;
    msg.lat = 0.28075860623;
    msg.lon = 0.98621567489;
    msg.speed = 0.611204100773;
    msg.speed_units = 178U;
    msg.custom.assign("JZKTEYEREDUWVWLXCVIYHYXKSMHANKOPUDBEBTCDIIYAUUPROIQFCIZDNVRRNBIYQPQSDJMNTLXQAHSHWUAVMTNSVLLGLGJSBXOZFQHVOYRU");

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
    msg.setTimeStamp(0.0535311900572);
    msg.setSource(7460U);
    msg.setSourceEntity(90U);
    msg.setDestination(16374U);
    msg.setDestinationEntity(134U);
    msg.lat = 0.0442324401795;
    msg.lon = 0.556113329827;
    msg.z = 0.534494364237;
    msg.z_units = 150U;
    msg.radius = 0.0675548668871;
    msg.duration = 25275U;
    msg.speed = 0.27584507572;
    msg.speed_units = 220U;
    msg.popup_period = 20328U;
    msg.popup_duration = 43823U;
    msg.flags = 187U;
    msg.custom.assign("LMZZSWXAEUQQCQLABEJYWWIKLQKYFVAIMSVSNGMLSRCJAUUCAXSJTLRDWXZNYZCJJGUMIBLCSBPPRKFHVMFLYKBPFVUDFGZZEGXBGBXFHBDATFOIIV");

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
    msg.setTimeStamp(0.638215639629);
    msg.setSource(32345U);
    msg.setSourceEntity(65U);
    msg.setDestination(42863U);
    msg.setDestinationEntity(216U);
    msg.lat = 0.977317870616;
    msg.lon = 0.21690009755;
    msg.z = 0.673416236401;
    msg.z_units = 196U;
    msg.radius = 0.427102388496;
    msg.duration = 15119U;
    msg.speed = 0.903190284816;
    msg.speed_units = 18U;
    msg.popup_period = 10123U;
    msg.popup_duration = 11405U;
    msg.flags = 216U;
    msg.custom.assign("IBGOLECZHDKHGPDZYSAYODXAYWQXYXPMMFNMZXBYLIAWYDGTYHLWUJJCRVTHMFYRPHSXGTSURJEKQXVCWDPFOTZAUMTMQKVRRPOUASKBVZOGZNAOJHTCOULBXJAIFDIAUYMRZBPVLTGRBAVLVGLZCJQHKQXGDIDXRCHEZSVBQJQUKKJEEJLSMIWCFFIHP");

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
    msg.setTimeStamp(0.638944672399);
    msg.setSource(56562U);
    msg.setSourceEntity(92U);
    msg.setDestination(41246U);
    msg.setDestinationEntity(1U);
    msg.lat = 0.219888578583;
    msg.lon = 0.550242342595;
    msg.z = 0.621645814801;
    msg.z_units = 231U;
    msg.radius = 0.735402551405;
    msg.duration = 35868U;
    msg.speed = 0.206990095987;
    msg.speed_units = 19U;
    msg.popup_period = 3389U;
    msg.popup_duration = 24471U;
    msg.flags = 194U;
    msg.custom.assign("YJQZDODZUDPLGVIAWPJYJE");

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
    msg.setTimeStamp(0.410889271973);
    msg.setSource(842U);
    msg.setSourceEntity(103U);
    msg.setDestination(54164U);
    msg.setDestinationEntity(234U);
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("CTNASQWZROTVIUWVYWGGVDKSQLPRXLIUGQOMSYHRZXFVPCELTWDSAHBVPIMWXEITRYKTJWGQSCTSBPGCTAPNOGKIFRNDUDQVDAOZMWAHEMYGJUFONQOZGCDOYHEUCLFZMNBYWJANMYAUWFXBVAPXYPLLLBLKPXUFHEPRUXZIYKJSNIBKUKXCDBKHZKNQOFMCBASZOBVUXDLPJJRXIQSRGFAFEETTMOJFJREWHHDVMVZTQKZEHR");
    IMC::Launch tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeout = 10168U;
    tmp_tmp_msg_0_0.lat = 0.0951239803193;
    tmp_tmp_msg_0_0.lon = 0.761308908772;
    tmp_tmp_msg_0_0.z = 0.0681590145595;
    tmp_tmp_msg_0_0.z_units = 125U;
    tmp_tmp_msg_0_0.speed = 0.512970126903;
    tmp_tmp_msg_0_0.speed_units = 190U;
    tmp_tmp_msg_0_0.custom.assign("XKMHZOGENARAQLZHMJMIGXDQNYKFNPPDZYMGLSYXCCZSCYQRTUKPSFOQONABSCVXQMGESXAISBGMKBCEJIZTRPUWZPDIUZTIDCXCCFTGLWBHZQRJQYAKMXIDIUTTTAUJQXBUXJFVQBUMKNUWEGVJPROZVZVKILTDKUDWYSOMEWOOETDRFYLQAHSYVRANLDEHHWEEJPWIGGOGRHBOSNDBKOBPYCRVNAUJPIWLHARF");
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
    msg.setTimeStamp(0.157517834322);
    msg.setSource(52269U);
    msg.setSourceEntity(25U);
    msg.setDestination(12276U);
    msg.setDestinationEntity(235U);
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("MJSFPSYGYAQAUZNEDASVMXDEMELDRAONPUKXKWBVFRVGKGVPKXWDLBNZIEYMTAOLFYWXHOYRSQITVQCUZAJXPSHQVVDPYYKOBDSSADMXTQULLGNFDHIUVFUEBXQKSTIHRODBPLKZPFWGRLTHYOHWJWZDYPYZGZJSRHRWJWXTBSNMQWICZCCHNCTVJXRJ");
    IMC::RowsCoverage tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.0962162598183;
    tmp_tmp_msg_0_0.lon = 0.575871778144;
    tmp_tmp_msg_0_0.z = 0.00330116925885;
    tmp_tmp_msg_0_0.z_units = 224U;
    tmp_tmp_msg_0_0.speed = 0.449639092518;
    tmp_tmp_msg_0_0.speed_units = 80U;
    tmp_tmp_msg_0_0.bearing = 0.588325722238;
    tmp_tmp_msg_0_0.cross_angle = 0.20343434323;
    tmp_tmp_msg_0_0.width = 0.977637698519;
    tmp_tmp_msg_0_0.length = 0.273335985441;
    tmp_tmp_msg_0_0.coff = 15U;
    tmp_tmp_msg_0_0.angaperture = 0.947577342691;
    tmp_tmp_msg_0_0.range = 25673U;
    tmp_tmp_msg_0_0.overlap = 125U;
    tmp_tmp_msg_0_0.flags = 5U;
    tmp_tmp_msg_0_0.custom.assign("PNUIJSLLOYCHVEIPHQABWKSKLWYSVILONZHUXXRYJGEGUAVMMCDAKBGIIUBDPIEIDLBCODJOZZQUYWNFSYWMBVRTLNAVZWEKOHMHBTJBXGRTZSKPSCFFAEYTAHZUPNLDGVXKEFTNQFMRIWIMVCUHAJGUCAQDNAEBQCNODIHNFQCJEDRPDQFCBPXHTETRUWGTJPSWZSLKRXMOZZVVRQGDHXNXMBFLXYKQOPFYQCJYL");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::FuelLevel tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.845614289991;
    tmp_tmp_msg_0_1.confidence = 0.340068807901;
    tmp_tmp_msg_0_1.opmodes.assign("FTNABGKJNYXVRLWUVKJZEQSUANTPZMNXDEOHLWBDTZCMNHPSIHOCOWLTOJGLUFWKRZBQJNSGMLWAKMXYFXVTEKTPXYVJEITGESOBGQZJSVHCHQBEXRDAWUZICUUWBMTSBQLHCJOYKDUNQGAFGPFPPYKSBWILCJCMVGJVPPUGSCRXQUXUMRIOLZNIRYBMFRCQARYDHM");
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
    msg.setTimeStamp(0.133894451572);
    msg.setSource(7505U);
    msg.setSourceEntity(10U);
    msg.setDestination(1475U);
    msg.setDestinationEntity(206U);
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("SSGYRIGWNLTDKMDEWNCWJAQXJRBXCSJUJYKLMJCYQMILSKHGBVHUXFMZKQCRNTIRCGEPDXFQMCTOYHEEJHHYSOZIIGMWUSWZDAUWJCMOQPZ");
    IMC::CoverArea tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.865835362864;
    tmp_tmp_msg_0_0.lon = 0.088340760753;
    tmp_tmp_msg_0_0.z = 0.117578288777;
    tmp_tmp_msg_0_0.z_units = 144U;
    tmp_tmp_msg_0_0.speed = 0.876419894786;
    tmp_tmp_msg_0_0.speed_units = 193U;
    tmp_tmp_msg_0_0.custom.assign("PBZDZWITYUFCLHCWZIMXULRLTWHFUEPJPMKHVUUASQCDGLQEXIMVHJXFIHAPQEGASLNSEISTCGPHOZVYOEQFAFTUBNYWKXIHFLQCISOZGWRXKENJPFXYCVMPTPBRHXJKDOYBERWGZKJZDYQYDAVHSRECNNRVBD");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::TrajectoryPoint tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.x = 0.900352148239;
    tmp_tmp_msg_0_1.y = 0.552497701452;
    tmp_tmp_msg_0_1.z = 0.758496242711;
    tmp_tmp_msg_0_1.t = 0.687650670158;
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
    msg.setTimeStamp(0.667731703372);
    msg.setSource(5188U);
    msg.setSourceEntity(2U);
    msg.setDestination(22180U);
    msg.setDestinationEntity(234U);
    msg.timeout = 3727U;
    msg.lat = 0.918985528659;
    msg.lon = 0.90108499034;
    msg.z = 0.462466815245;
    msg.z_units = 28U;
    msg.speed = 0.145545736369;
    msg.speed_units = 9U;
    msg.bearing = 0.852112140939;
    msg.width = 0.272918830895;
    msg.direction = 129U;
    msg.custom.assign("ARXGZIUCIXCMDMQVNVCWOSQBEOWEBQWXZWHGSPNBSKXKIWRHDLNUVTUGXJZLMRRSVWOITGRHWJYYVOCARCWTAFQDGGJUJOFELMKLPSODEIYNDNZXSFGEZPKTLMBRBLDZFDVVPPHYMZXXHLQYBANGAMENAIOTYCIKBKHFT");

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
    msg.setTimeStamp(0.740601619739);
    msg.setSource(6899U);
    msg.setSourceEntity(60U);
    msg.setDestination(65158U);
    msg.setDestinationEntity(35U);
    msg.timeout = 33416U;
    msg.lat = 0.399255642462;
    msg.lon = 0.26307578432;
    msg.z = 0.74904936561;
    msg.z_units = 120U;
    msg.speed = 0.278448735083;
    msg.speed_units = 10U;
    msg.bearing = 0.00228508029806;
    msg.width = 0.343697210679;
    msg.direction = 223U;
    msg.custom.assign("EKMRBDFPVBBKJAHJOM");

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
    msg.setTimeStamp(0.981273695947);
    msg.setSource(5843U);
    msg.setSourceEntity(21U);
    msg.setDestination(13509U);
    msg.setDestinationEntity(174U);
    msg.timeout = 31568U;
    msg.lat = 0.65652859328;
    msg.lon = 0.866504740863;
    msg.z = 0.954689632159;
    msg.z_units = 243U;
    msg.speed = 0.324651134782;
    msg.speed_units = 2U;
    msg.bearing = 0.810512507701;
    msg.width = 0.7628330417;
    msg.direction = 131U;
    msg.custom.assign("WONSYBFTXFYXLRIYLDJLLOSVHGSAYZBMPUPAHHCMUYDOWQHEKQARVWDLPNVMVOIFJRGCCEJVWX");

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
    msg.setTimeStamp(0.46814717946);
    msg.setSource(26958U);
    msg.setSourceEntity(73U);
    msg.setDestination(35019U);
    msg.setDestinationEntity(42U);
    msg.op_mode = 178U;
    msg.error_count = 124U;
    msg.error_ents.assign("KYXVDPWOKORICNMKFIPOKBWFSJMNCAHPLHLAYQEJGCZDVUDWQZXWPQEEFTODRYEZRZCEBPJCWQXHVHYGTIKKNNDYUVMDETCTHAQSUYMJLEBVXSBKMUOIXTOBLLNOAHRGATFRXQFNDMCZDJVTGCUFGPTBSGXURDRNULVZWXUPKIMGNTWSLPBGJGXFWOVOFEKJZAAYSYQWAUQ");
    msg.maneuver_type = 21466U;
    msg.maneuver_stime = 0.572926052035;
    msg.maneuver_eta = 60342U;
    msg.control_loops = 3500843639U;
    msg.flags = 5U;
    msg.last_error.assign("DRVUWRXHWTMAZZAVEQVGPBQQJOJPGWPJEFQTFNTCLKWZRACLWEDXEABDADJKMDNZNFGEOAHNCICLCXTHTPJMSTSRUHHAVZFXYEZUSDQNUXVHWCIQBSRN");
    msg.last_error_time = 0.643439769641;

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
    msg.setTimeStamp(0.336139581638);
    msg.setSource(27365U);
    msg.setSourceEntity(188U);
    msg.setDestination(61937U);
    msg.setDestinationEntity(161U);
    msg.op_mode = 53U;
    msg.error_count = 249U;
    msg.error_ents.assign("MMLCRESNUHRTXCOZZWPRZCDCNJAOOOYFBBLUAEFFBSTQEIYUBPDQWOODIILBNUGOGVUWBQKVHWZATJCXNRXCJPXEILRIPLMZTGUVFTWITEWSEYZQZYKUDJIZKOKHRBNASMRBGSXHQFENMAQFVEAEYHLGTIYMMDPGHIOYAAJNQVYAZLMPJUVTSBBPSIKLKDUXRPYPODXKWFJJGNCTNGDZSGCSTVGVHVWQXFKFDJKKCYFLXAH");
    msg.maneuver_type = 17332U;
    msg.maneuver_stime = 0.168417181164;
    msg.maneuver_eta = 21112U;
    msg.control_loops = 22155406U;
    msg.flags = 22U;
    msg.last_error.assign("JEQSENSVQXCXYOLKCKRCCAZUKFPZMOSZVBKRJGAYXLHPFHGAGILOXCWTYJPDWMWEPBWUOMSMEMCIHDDTEUNZGFAMRYFJVZOJEGAPBRNOKZCDJMVBRIIYWRTBXQDLPTMKDWCGEWRJWVBTVTSPIHGKQWLQTGITROALJWXEHPQYNFDVEQCAUOQPVFSHHNSUXYVJPFZGHYROVFL");
    msg.last_error_time = 0.104520108327;

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
    msg.setTimeStamp(0.306834077997);
    msg.setSource(41717U);
    msg.setSourceEntity(170U);
    msg.setDestination(44503U);
    msg.setDestinationEntity(123U);
    msg.op_mode = 185U;
    msg.error_count = 148U;
    msg.error_ents.assign("TEXPGSBGOAROLVIKEJAEYDSLBYUUFJZJILLXYBKGFZTQQJIJSXYXHUMMCHSLSNNLRKNFTHSOZVHWDZEWYFTVOINKGUPNQOXCNIYVRWCZOXPENCAWDRHLXCKTWPJXDJDCQRWMWKUICRXVP");
    msg.maneuver_type = 22513U;
    msg.maneuver_stime = 0.882196588532;
    msg.maneuver_eta = 43330U;
    msg.control_loops = 1788162670U;
    msg.flags = 152U;
    msg.last_error.assign("OMNUMKMODVTSVKPFRXXFUOZORYRSCAJUBWTFLYJZQLCJNCEQTYF");
    msg.last_error_time = 0.863918941472;

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
    msg.setTimeStamp(0.698372537623);
    msg.setSource(24824U);
    msg.setSourceEntity(83U);
    msg.setDestination(28978U);
    msg.setDestinationEntity(140U);
    msg.type = 0U;
    msg.request_id = 34346U;
    msg.command = 60U;
    IMC::LowLevelControl tmp_msg_0;
    IMC::DesiredThrottle tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.85812121316;
    tmp_msg_0.control.set(tmp_tmp_msg_0_0);
    tmp_msg_0.duration = 55551U;
    tmp_msg_0.custom.assign("IVAQYUKNHXWWJRRPFQJEWGAAOSEREMWSDSPILECHYESHZSWGRUFDCSCTFUDEGMYFVCLYXEASHNCDUGDGJDMJARNFMZYOLZJPLTEOZIXTIOKR");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 14082U;
    msg.info.assign("FWVCEEHZNBCAMXIFDLNZWWXRNERSFCPCHOAIOAEIYYPVGQQHIPHSMIJGJMKSXVSBYKNLRPHBZJGDEXSUBKJQLNQJUCMTKFKLDPAAGGLRVKACRBMBJDUHPPGTXWRDIMUTFDPWRTKWYQFMDXWQJMEWLBZNFZBNVVLZCZRAQMHVHOKFTBWXSGOCANFYXSOOAOXAKTNJIZVJQRSEPHVGLUNXUYGD");

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
    msg.setTimeStamp(0.285205239483);
    msg.setSource(57000U);
    msg.setSourceEntity(195U);
    msg.setDestination(51531U);
    msg.setDestinationEntity(124U);
    msg.type = 201U;
    msg.request_id = 37892U;
    msg.command = 219U;
    IMC::Goto tmp_msg_0;
    tmp_msg_0.timeout = 40702U;
    tmp_msg_0.lat = 0.374460381086;
    tmp_msg_0.lon = 0.101239406748;
    tmp_msg_0.z = 0.25883704489;
    tmp_msg_0.z_units = 163U;
    tmp_msg_0.speed = 0.474143800548;
    tmp_msg_0.speed_units = 31U;
    tmp_msg_0.roll = 0.674005983405;
    tmp_msg_0.pitch = 0.850882683662;
    tmp_msg_0.yaw = 0.569163909577;
    tmp_msg_0.custom.assign("ACEJCZVECMHGOKPUWFLYIORKHKLAIUTQXJFNJBGVAYBWSDHAFZJJXNUBHXLCTHZWGBXCJBEZDCRUQCNESDTNOEAYYZVBSQTIVPDPHJQIMJMEEQRGKWLNFGFIMVNVBPYFTXFNCHGILHSDGCJPHRPCFTXOTEQTZSZKPEWAMUYTKWDIKWVLLVAGQYIRSVZLRXDYZUUIXONHIGOBZKNYWPDSNOMPOPRFAOEFS");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 45202U;
    msg.info.assign("MEZZFJKTLPVNRIOZVIAFVQNSJTEJQATPXRLCMOBFYNMBOXMHELGNDSWHTFJVIUKEFDUUHWDJDKDMFVRTEXOMLPQUKOOJXSHNUSQLNIMWYKHBYHTHAPJCAAUUHXTIDQQNAEPZVWMGDWORPBLB");

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
    msg.setTimeStamp(0.0877616766876);
    msg.setSource(16446U);
    msg.setSourceEntity(152U);
    msg.setDestination(9247U);
    msg.setDestinationEntity(94U);
    msg.type = 15U;
    msg.request_id = 53931U;
    msg.command = 78U;
    IMC::CommsRelay tmp_msg_0;
    tmp_msg_0.lat = 0.583545716578;
    tmp_msg_0.lon = 0.47748056916;
    tmp_msg_0.speed = 0.069307458363;
    tmp_msg_0.speed_units = 145U;
    tmp_msg_0.duration = 36343U;
    tmp_msg_0.sys_a = 56499U;
    tmp_msg_0.sys_b = 5021U;
    tmp_msg_0.move_threshold = 0.26235629824;
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 24316U;
    msg.info.assign("FCFOEZYIJTOGVITADBFEGBTMGJFIHSKKWMWQLEHPQXEXAOZVWLAPVNWEJKHLRYDPALWADQOCHPSAAWSKOZJENCUIUKVMBQPFYHRMDGYZXDWICKMMHYZSRQJMNDYJGQLJLRPEBMBBCOVRIJQZSTIGCCSVTVVAMAHGNYHZPBMSKDPSOQWZRNUFLNOEQTDNFTUXJBXPCDGKLNFDFBPLNIXTYRRYOTGFCRSSZZLYUHVUWKUHRAWUETIGXVNCUUIXX");

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
    msg.setTimeStamp(0.986714589639);
    msg.setSource(34800U);
    msg.setSourceEntity(250U);
    msg.setDestination(30083U);
    msg.setDestinationEntity(23U);
    msg.command = 42U;
    msg.entities.assign("FQSIYMSVEUUHMYLBYMWZHSXMGDOKTWHWFCGCZKGDZFI");

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
    msg.setTimeStamp(0.631014225424);
    msg.setSource(46945U);
    msg.setSourceEntity(94U);
    msg.setDestination(58993U);
    msg.setDestinationEntity(69U);
    msg.command = 228U;
    msg.entities.assign("TKWLUZSBQANRVSGHRZDJIGGPFCNWZMOCUDYEIGEHUYTSAQTFBXRPKZPDIOYUWYBHXOEMTRSXRNAVPGKQDAJVPBUPNPBCSNJFJOOMMDGFKILKZORICZAGSKVVHEGHQHMWXSLREBCCGYKWTLMMWRGZVDQINQDPDCXXTJFJVNELECFTJUJYQUK");

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
    msg.setTimeStamp(0.67805427213);
    msg.setSource(27050U);
    msg.setSourceEntity(46U);
    msg.setDestination(6316U);
    msg.setDestinationEntity(134U);
    msg.command = 67U;
    msg.entities.assign("FECMBFPJUXFKLWEBODBWOTMHQBYXQZDXAPZHV");

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
    msg.setTimeStamp(0.602698943638);
    msg.setSource(53003U);
    msg.setSourceEntity(192U);
    msg.setDestination(7052U);
    msg.setDestinationEntity(77U);
    msg.mcount = 121U;
    msg.mnames.assign("ZDKGQEMCHQPZDEVPHPKRZLWBQFLJQVTBLAFQJKTNFIBRALIBOWSUOAFVFYUXYMNVHKJIULCEYGHIVKCTOPYOIWTKEJVWYUEDDCSQEXCRXEFGNISROLSRRTAEWDCHEJGIBGZJHFHZXDHGKIPKUTMWYZXZAASQOIEHTNMOSPTBRGTXOPUMLMSDYDIWSAXNMDZBRLGQBDCZVXNHNBYUXWJJPZVQFRALJMUAJFCCOGBKM");
    msg.ecount = 252U;
    msg.enames.assign("HTKQXUDDXOMRGUVQMMJUBRDQVJPAEYIWIILPGRSBLTLFFSEQVINKKMKNFCHZFFHFAHIZWTPLPDBWIXSDPEXTOGUNLCMGQCQLJZJCDWJZOSWVXMSCUMWARIPVCOVECPNZOYTLPEXGAMPSAIQ");
    msg.ccount = 180U;
    msg.cnames.assign("KKERGOXQIMMFNB");
    msg.last_error.assign("XCVPYQPVIPHNXWFLOZHMTYGCMSZSULXH");
    msg.last_error_time = 0.899364100377;

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
    msg.setTimeStamp(0.182043832978);
    msg.setSource(24540U);
    msg.setSourceEntity(75U);
    msg.setDestination(19317U);
    msg.setDestinationEntity(123U);
    msg.mcount = 208U;
    msg.mnames.assign("KFPUWLOMCHTIGJZIJBJTTQJEACYCLPGRQDLIBZHTXSDLDHJXSBZJPIBNUYFSBZHLOLWAQFIBVRRCMNZTKFRPXZMSSXKCGSVGJNWMFALMQUTSMJVEWVYNFLUYLXWQGDUKDIYE");
    msg.ecount = 2U;
    msg.enames.assign("RRLTQFIZUXVECMLSCHMUMNHLQVHJTHIYSPQGBYQVOCTPCY");
    msg.ccount = 191U;
    msg.cnames.assign("MSKERWEPKUHBNRNTNKUCEFEXBOXQMBDQYPZDTMOFHHZXGWHWTQXOUANDWOLINBMMLHGKSPICIVAMYXIGGPQWBDGGQGPBPTQDKVEFVERCLDYPTL");
    msg.last_error.assign("NYRPRYOSWBIPLGQKVIZMUNYXBYNPXCEMHLFDNPKBSEFZELZ");
    msg.last_error_time = 0.459006551542;

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
    msg.setTimeStamp(0.885287711317);
    msg.setSource(31618U);
    msg.setSourceEntity(56U);
    msg.setDestination(36078U);
    msg.setDestinationEntity(44U);
    msg.mcount = 111U;
    msg.mnames.assign("ZIFGXIOXZZKLUHDNDNBGVFNERPGXJVUCPVDETJFDSCENADBSOPCNDDEZQHTYVPQLQWWSKXALRJTZFBFLHVMGARYDNVYWYACMSDBIUFHILEQUGTVSLXXKSABYGWIWHWMCJOICKUPUNQTTSTVRMGORFKILIRWQXQCLZMMPFZDFIQLOOEHBJRHGPJJEWEUSUXCAYPFHNBOOMTZRJMYTOHXQUKSCJBZQTRBWYMAPKKXPUMVZGKGBKANAEH");
    msg.ecount = 203U;
    msg.enames.assign("DVRAYIWZFIMFJSVNBIIZNCPYVWTCWQOTPTLJEBRUOJBHFSHHFSEBEKGXFSTENBSODPLAQVPGDGLFNQRUPEGWJCZNKJHQPXXJUOEQPMCWZYTKMLSCZWKFRARDNFAKYKCLDUOEDPSWPAJIBUDJTSZVPMRAVNGOVEOMZXUOXV");
    msg.ccount = 242U;
    msg.cnames.assign("YUEQNZENCYIPMPVGKWXCWQMVRLJZSYVRKQKGSWKITDDISYFTIBRASKJEPELZXXXAHVHFNGHBHOKZSJSUVULPZVTAIYJWXOGBNFLSBWDJZPSCWTRJRZTADQEEFIIMUTOPCRFVHNLKGPLRDMCUFQOBBMTE");
    msg.last_error.assign("WEIOVJINDOTZHXBKRDXBCVJVUYQWFTSRNJTJICMTEVDSCGUBUUEABXDCCCOJIBJ");
    msg.last_error_time = 0.204168933816;

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
    msg.setTimeStamp(0.307820042966);
    msg.setSource(4075U);
    msg.setSourceEntity(189U);
    msg.setDestination(30195U);
    msg.setDestinationEntity(160U);
    msg.mask = 207U;
    msg.max_depth = 0.779819790043;
    msg.min_altitude = 0.898265774254;
    msg.max_altitude = 0.377886526519;
    msg.min_speed = 0.0986364813578;
    msg.max_speed = 0.976770190112;
    msg.max_vrate = 0.688064006508;
    msg.lat = 0.839136074483;
    msg.lon = 0.166342172479;
    msg.orientation = 0.748198337392;
    msg.width = 0.96836094732;
    msg.length = 0.888727102157;

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
    msg.setTimeStamp(0.0924004597148);
    msg.setSource(53476U);
    msg.setSourceEntity(123U);
    msg.setDestination(48229U);
    msg.setDestinationEntity(108U);
    msg.mask = 101U;
    msg.max_depth = 0.0231754899148;
    msg.min_altitude = 0.12354157919;
    msg.max_altitude = 0.316382908887;
    msg.min_speed = 0.293271174594;
    msg.max_speed = 0.923273029239;
    msg.max_vrate = 0.100408216231;
    msg.lat = 0.980164040141;
    msg.lon = 0.818465475355;
    msg.orientation = 0.225671648301;
    msg.width = 0.820691736344;
    msg.length = 0.752078521693;

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
    msg.setTimeStamp(0.121799628299);
    msg.setSource(7536U);
    msg.setSourceEntity(55U);
    msg.setDestination(20466U);
    msg.setDestinationEntity(91U);
    msg.mask = 115U;
    msg.max_depth = 0.144864027892;
    msg.min_altitude = 0.00667872353074;
    msg.max_altitude = 0.43811266167;
    msg.min_speed = 0.539104296212;
    msg.max_speed = 0.0839679282044;
    msg.max_vrate = 0.37169218743;
    msg.lat = 0.660738939051;
    msg.lon = 0.529099973403;
    msg.orientation = 0.428112451877;
    msg.width = 0.039198679498;
    msg.length = 0.811641925707;

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
    msg.setTimeStamp(0.915280246161);
    msg.setSource(35181U);
    msg.setSourceEntity(52U);
    msg.setDestination(64913U);
    msg.setDestinationEntity(22U);

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
    msg.setTimeStamp(0.878788387873);
    msg.setSource(24418U);
    msg.setSourceEntity(114U);
    msg.setDestination(58856U);
    msg.setDestinationEntity(37U);

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
    msg.setTimeStamp(0.186237254196);
    msg.setSource(26925U);
    msg.setSourceEntity(2U);
    msg.setDestination(57794U);
    msg.setDestinationEntity(114U);

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
    msg.setTimeStamp(0.557619897984);
    msg.setSource(41239U);
    msg.setSourceEntity(71U);
    msg.setDestination(55033U);
    msg.setDestinationEntity(208U);
    msg.duration = 52168U;

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
    msg.setTimeStamp(0.255294896965);
    msg.setSource(38495U);
    msg.setSourceEntity(68U);
    msg.setDestination(46612U);
    msg.setDestinationEntity(45U);
    msg.duration = 56868U;

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
    msg.setTimeStamp(0.522458898292);
    msg.setSource(34177U);
    msg.setSourceEntity(78U);
    msg.setDestination(50896U);
    msg.setDestinationEntity(203U);
    msg.duration = 61717U;

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
    msg.setTimeStamp(0.354788141993);
    msg.setSource(55507U);
    msg.setSourceEntity(193U);
    msg.setDestination(15231U);
    msg.setDestinationEntity(244U);
    msg.enable = 160U;
    msg.mask = 3852407294U;
    msg.scope_ref = 2747809006U;

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
    msg.setTimeStamp(0.688324770335);
    msg.setSource(3929U);
    msg.setSourceEntity(214U);
    msg.setDestination(40016U);
    msg.setDestinationEntity(200U);
    msg.enable = 95U;
    msg.mask = 2595563688U;
    msg.scope_ref = 720164406U;

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
    msg.setTimeStamp(0.263206433203);
    msg.setSource(359U);
    msg.setSourceEntity(170U);
    msg.setDestination(56175U);
    msg.setDestinationEntity(242U);
    msg.enable = 134U;
    msg.mask = 3304162942U;
    msg.scope_ref = 969023387U;

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
    msg.setTimeStamp(0.594382311297);
    msg.setSource(63479U);
    msg.setSourceEntity(21U);
    msg.setDestination(14056U);
    msg.setDestinationEntity(222U);
    msg.medium = 117U;

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
    msg.setTimeStamp(0.132329917344);
    msg.setSource(30384U);
    msg.setSourceEntity(187U);
    msg.setDestination(42218U);
    msg.setDestinationEntity(187U);
    msg.medium = 254U;

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
    msg.setTimeStamp(0.135093439426);
    msg.setSource(48610U);
    msg.setSourceEntity(62U);
    msg.setDestination(27979U);
    msg.setDestinationEntity(226U);
    msg.medium = 27U;

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
    msg.setTimeStamp(0.0931466295427);
    msg.setSource(27232U);
    msg.setSourceEntity(80U);
    msg.setDestination(37382U);
    msg.setDestinationEntity(60U);
    msg.value = 0.297382904874;
    msg.type = 238U;

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
    msg.setTimeStamp(0.131878822045);
    msg.setSource(8225U);
    msg.setSourceEntity(27U);
    msg.setDestination(22407U);
    msg.setDestinationEntity(191U);
    msg.value = 0.372746168795;
    msg.type = 36U;

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
    msg.setTimeStamp(0.910139740203);
    msg.setSource(25280U);
    msg.setSourceEntity(76U);
    msg.setDestination(40902U);
    msg.setDestinationEntity(208U);
    msg.value = 0.201434833932;
    msg.type = 107U;

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
    msg.setTimeStamp(0.48634826576);
    msg.setSource(22025U);
    msg.setSourceEntity(27U);
    msg.setDestination(20881U);
    msg.setDestinationEntity(36U);
    msg.possimerr = 0.686258815655;
    msg.converg = 0.46318864897;
    msg.turbulence = 0.704533030655;
    msg.possimmon = 104U;
    msg.commmon = 63U;
    msg.convergmon = 192U;

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
    msg.setTimeStamp(0.327872794648);
    msg.setSource(63097U);
    msg.setSourceEntity(65U);
    msg.setDestination(40820U);
    msg.setDestinationEntity(154U);
    msg.possimerr = 0.975944351167;
    msg.converg = 0.3824493262;
    msg.turbulence = 0.442845644991;
    msg.possimmon = 46U;
    msg.commmon = 132U;
    msg.convergmon = 220U;

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
    msg.setTimeStamp(0.247296102378);
    msg.setSource(64854U);
    msg.setSourceEntity(247U);
    msg.setDestination(63274U);
    msg.setDestinationEntity(205U);
    msg.possimerr = 0.441165317155;
    msg.converg = 0.690535717496;
    msg.turbulence = 0.610144183729;
    msg.possimmon = 84U;
    msg.commmon = 237U;
    msg.convergmon = 240U;

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
    msg.setTimeStamp(0.635744102659);
    msg.setSource(65321U);
    msg.setSourceEntity(3U);
    msg.setDestination(16262U);
    msg.setDestinationEntity(20U);
    msg.autonomy = 78U;
    msg.mode.assign("NQCYFHWFNDHMLBBJLFOUEZXNQNXIBKBEQCJDVFODXDFTDVIOKTPCMFRVXIWWCMHKMTRHPCEXTRYITEMYTUWPRSGBLWAFTYSFGQYKWFIYJITSLRPYOPAUDZPECLWQYZGJKSXOBUXVJXQGJUMGRPJQKCGZOCAHKNASLSNKHOMNBQZVEQIVUWMYLUAULEVCISEGGDUAXHGLAEFXJNOOSE");

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
    msg.setTimeStamp(0.36868680351);
    msg.setSource(31005U);
    msg.setSourceEntity(219U);
    msg.setDestination(1179U);
    msg.setDestinationEntity(25U);
    msg.autonomy = 249U;
    msg.mode.assign("UZGBYLMMRPSKCZSRPDXEQSIMVFVSRZJGAJSRACHVWDNWIAG");

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
    msg.setTimeStamp(0.305594752951);
    msg.setSource(25691U);
    msg.setSourceEntity(82U);
    msg.setDestination(13321U);
    msg.setDestinationEntity(182U);
    msg.autonomy = 63U;
    msg.mode.assign("QDRJCRDECNSQLYCZDCLQFWQASKWGIHPKXMZKVXTDTCPAHIHMUAPMRJUBANRYIASZWVRCBEXDO");

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
    msg.setTimeStamp(0.931617587889);
    msg.setSource(49769U);
    msg.setSourceEntity(232U);
    msg.setDestination(10153U);
    msg.setDestinationEntity(105U);
    msg.type = 179U;
    msg.op = 77U;
    msg.possimerr = 0.57464955493;
    msg.converg = 0.124456459211;
    msg.turbulence = 0.399277199424;
    msg.possimmon = 9U;
    msg.commmon = 201U;
    msg.convergmon = 92U;

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
    msg.setTimeStamp(0.722287427987);
    msg.setSource(63031U);
    msg.setSourceEntity(86U);
    msg.setDestination(49912U);
    msg.setDestinationEntity(95U);
    msg.type = 235U;
    msg.op = 151U;
    msg.possimerr = 0.439287475926;
    msg.converg = 0.222056165534;
    msg.turbulence = 0.774007110838;
    msg.possimmon = 111U;
    msg.commmon = 205U;
    msg.convergmon = 42U;

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
    msg.setTimeStamp(0.92344918983);
    msg.setSource(43775U);
    msg.setSourceEntity(100U);
    msg.setDestination(20487U);
    msg.setDestinationEntity(15U);
    msg.type = 211U;
    msg.op = 132U;
    msg.possimerr = 0.256695326202;
    msg.converg = 0.143362071753;
    msg.turbulence = 0.103561693618;
    msg.possimmon = 235U;
    msg.commmon = 171U;
    msg.convergmon = 147U;

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
    msg.setTimeStamp(0.0697131973135);
    msg.setSource(33543U);
    msg.setSourceEntity(15U);
    msg.setDestination(15372U);
    msg.setDestinationEntity(236U);
    msg.op = 85U;
    msg.comm_interface = 187U;
    msg.period = 38947U;
    msg.sys_dst.assign("SPAUKXTEYJVNDMELBCUPHJWFORDRTDCPSTNDADXLNUKQXCRGZSHTMUAQGLQCJBPDPRPHENJIQROJERAAJYHTIJMZWLYWTIVHNCKZFYKEIGIDAFLXCRGJPKUWYIZPTKSBEUOSAIGSUJXQYFQVLKKMWVBRPYOXONNLFIZFDCMNTQISMUVVKXCFZHVAB");

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
    msg.setTimeStamp(0.217671525419);
    msg.setSource(11137U);
    msg.setSourceEntity(9U);
    msg.setDestination(12374U);
    msg.setDestinationEntity(151U);
    msg.op = 124U;
    msg.comm_interface = 227U;
    msg.period = 26479U;
    msg.sys_dst.assign("JTHCMFQGUYVETNZYLDURGVYSQNAKIIOMJCBJDNVAAAOCFSEYCOTOZJJWKIJWPIHZVNBIBZKANKGVQFXNWWJLISNMOMYFBFOEZEZZQHARRCMBGSFTIHMGNDPREFSQBJPPZMUPMGUGODGKHGYOPGKDAQWSKVYVHKEXAQUUYLHHZWTDLBBAEPXBXVEFDEDDSIMVLTAQYOEYHRLWLXIFRRUIWBJNPCNWLCDXXPTR");

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
    msg.setTimeStamp(0.725388520826);
    msg.setSource(63183U);
    msg.setSourceEntity(80U);
    msg.setDestination(24712U);
    msg.setDestinationEntity(26U);
    msg.op = 158U;
    msg.comm_interface = 106U;
    msg.period = 58949U;
    msg.sys_dst.assign("COUTTHXZOAKNTBTPNHBYFVXVTOBONZUCBGOKCNWRYWPOIOACKBFRLFVFYPVVWQDJQGCEJESHJAJTQGRSUXIOSPZWGDXAPKCIKPCDEGHCCLOWRZVBEJNYLRGQKAVVFFZZDPPNTSUWHSYAWXPLDMIMUDTWDYUFHFMKSEXWBBQXMZMXYMQEMHMISHYUJVAZLEFKDG");

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
    msg.setTimeStamp(0.816134016042);
    msg.setSource(43402U);
    msg.setSourceEntity(138U);
    msg.setDestination(40154U);
    msg.setDestinationEntity(23U);
    msg.stime = 40074370U;
    msg.latitude = 0.022297121651;
    msg.longitude = 0.551904431305;
    msg.altitude = 43211U;
    msg.depth = 49208U;
    msg.heading = 38693U;
    msg.speed = -27098;
    msg.fuel = 116;
    msg.exec_state = -71;
    msg.plan_checksum = 64196U;

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
    msg.setTimeStamp(0.548526792237);
    msg.setSource(1650U);
    msg.setSourceEntity(101U);
    msg.setDestination(53358U);
    msg.setDestinationEntity(150U);
    msg.stime = 2878892822U;
    msg.latitude = 0.667017651498;
    msg.longitude = 0.00265869419671;
    msg.altitude = 43083U;
    msg.depth = 24744U;
    msg.heading = 51431U;
    msg.speed = -25679;
    msg.fuel = 91;
    msg.exec_state = -49;
    msg.plan_checksum = 18838U;

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
    msg.setTimeStamp(0.920147153296);
    msg.setSource(20779U);
    msg.setSourceEntity(107U);
    msg.setDestination(26462U);
    msg.setDestinationEntity(184U);
    msg.stime = 1689078191U;
    msg.latitude = 0.330195500479;
    msg.longitude = 0.855129403419;
    msg.altitude = 9493U;
    msg.depth = 16643U;
    msg.heading = 12411U;
    msg.speed = -14956;
    msg.fuel = 118;
    msg.exec_state = 122;
    msg.plan_checksum = 65143U;

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
    msg.setTimeStamp(0.0273105132257);
    msg.setSource(34738U);
    msg.setSourceEntity(52U);
    msg.setDestination(39310U);
    msg.setDestinationEntity(8U);
    msg.req_id = 38417U;
    msg.comm_mean = 254U;
    msg.destination.assign("HQYZIDBBPMFONRMZMVPTHLSMDLSWRSTOPNHAQCJAJJOGKEVYBVXZTDOHUGIXSPACEXMTIQPOTDJUHATKZZSLYRPDVSFMBMGUCAUNYEXKITZSAJEPRQIWGUBKQPIUWVNLFABFKEYPAVWFWNCVKGOTVGLDZRXLUIEHTMHOOVEXWSFBYWYREHBFXHARKICVN");
    msg.deadline = 0.158439310697;
    msg.range = 0.544264966621;
    msg.data_mode = 251U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.21574107261;
    tmp_msg_0.y = 0.407184189009;
    tmp_msg_0.z = 0.0293992843538;
    tmp_msg_0.phi = 0.384940583263;
    tmp_msg_0.theta = 0.0574284034043;
    tmp_msg_0.psi = 0.971202552882;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("DNDMFXLEPKSHZIXZYZLFGDAJHXTQGPLZYFBVLJJGZZHXQHSIGSPKTUSUWJBROCDNWPQHDBRCIAMNPOEYAYOOQAYSBWZXCVKWRUEWQETRFTRJMACXDKTEBKNNYCIKUVKKJ");
    const char tmp_msg_1[] = {-88, 103, -128, -46, -29, 94, 46, -59, -17, 26, -46, 72, -9, 54, -61, 126, -98, 66, 74, -69, -9, -110, -77, -60, 12, -92, -109, 46, 56, 14, -30, 100, -17, 14, 7, -29, -41, 9, -124, 104, 4, -101, -1, 39, -38, 54, -91, 3, 42, -22, -67, 23, 98, -125, 40, -83, 11, 11, -13, 0, 59, -40, -22, 31, 16, -91, -90, -86, 45, -21, 51, 122, 78, 43, 25, -65, -104, 25, 54, -40, -63, -17, -56, -119, -52, 11, -69, -118, -102, -89, 4, 18, -104, -62, -49, -118, -49, 50, 19, -128, 80, 122, -77, 16, -17, -8, 101, -125, 66, -109, 56, 14, 20, -101, -112, 103, -34, -1, -5, -37, -68, 86, 77, 108, -51, -107, -109, 112, 102, -18, 48, 23, -75, -69, -111, -52, 100, 88, -123, 54, 86, 73, -122, -122, 55, 57, -89, 27, 74, 105, -8, -105, -18, 88, 12, 105, -39, 11, -33, 78, -39, -109, 38, 30, -54, 120, 22, -94, -23, 96, 48, -11, -61, -103, -41, -102, 114, -2, 6, 84, 46, -52, 2, 8, -95, 35, 122, -45, -95, -6, 58, 90, -73, 66, -4, -22, 31, -117, -58, -109, 42, -117, 3, 16, 70, 1, -36, 107, -88, -72, -18, 19, -95, -20, 9, 104, 85, 99, 108, -57, 91, -18, 118, 79, -23, 107, 18, 12, -122, -87, 126, -87, -115, -2, 96, -59};
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
    msg.setTimeStamp(0.831203808397);
    msg.setSource(58657U);
    msg.setSourceEntity(156U);
    msg.setDestination(27814U);
    msg.setDestinationEntity(45U);
    msg.req_id = 64425U;
    msg.comm_mean = 252U;
    msg.destination.assign("HQEWGYJKKSSBRUPQCYGJXSLSHHAFGUNVGKJZJXHYBIHMNMBYKROHFQGWLNTTMCZSDDXBFEWOMUGPPHWNBMDKRWFJPCVOEZKQEILORGTAQBQTAXTMSKGKIHMCFYOLVMWCDJTWFMSKEIVIAHRPCCAVLGBJNRZUSANOBPY");
    msg.deadline = 0.465633841362;
    msg.range = 0.0972327136951;
    msg.data_mode = 111U;
    IMC::TrexPlan tmp_msg_0;
    tmp_msg_0.reactor.assign("PBUBSNNXVJKUTJOWORVIRKALPJXNDLDWSNFQOHQSQPUUBVLQDHHIMZCGOPDKYPWGILBAAXVYCJCSXHQDUJABLTYAIGZOJFRFFRMGPCMMSUCPOXZNDXYUNCHNRTPZYFFPGWIRXHZSUZLKEVTWLQKJERJCMEONKCFBJM");
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("WYSRTFDFCUOSRLZZGBEWJTYQVBBWFUOLXMTTDEMHRFWQMROWNOZNCSHAENNJKZPJUBHZIAJZERHXKIYGWKCQAADLQDPSKOAMHPUNOBXXNRUHDYZAOMPZGXZSLSTXYIKNBVXFIXVEIMSJCQGGUDNTHGRICXFGPKEDVEQIVUWGIFEDYMAWBUSUJTLXOAMHZAVCVURMTETYBJBJBCPGSLLQDYKIOIQGPNAHLJP");
    const char tmp_msg_1[] = {67, -113, 23, 35, 59, 52, -70, -15, -27, -112, -39, 12, 35, -26, -14, 64, 26, -96, -94, 109};
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
    msg.setTimeStamp(0.544408957625);
    msg.setSource(54316U);
    msg.setSourceEntity(191U);
    msg.setDestination(35044U);
    msg.setDestinationEntity(228U);
    msg.req_id = 42283U;
    msg.comm_mean = 117U;
    msg.destination.assign("NCEMQVBNMYPEEHGSERTIVFFBKVFGNBQIQTGDXPGOSHFZFQUXZGLLNAKSSHHYCWKTLXZBSJAXBLBQMIVXLMRZRTSDUSECEAONPRCSKLHQICDOUTVKDJJFAIFQUZTYYKCRJORPTHOVYNJLPJMJGOJQIZFJMOPMWPEVAMXKWBUHQVYWYUOWPDNYQBFTZGKJXTEDRCWAUIPZHMGA");
    msg.deadline = 0.244417139629;
    msg.range = 0.0260904032914;
    msg.data_mode = 81U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.774403465952;
    tmp_msg_0.lon = 0.961370890408;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("JWSOSFISCIPMDXHRFGNEAYNOXHVZXDIBGELBGXAIPLVSUHDUDZKDYZPFRUONCMNAEQELKVLCXXVEQYEGHLVWJBWTMUWWASRWJFYNFVRXIJNRYGSKYPWGEFZUGMOOIIMLRHDNRHAJLWJASUHNNSGQJTZTPIEZEDGPUTMQZVNZPQPDMMXGUBJCMYHCBYKOEFOKKTCJY");
    const char tmp_msg_1[] = {123, 38, 12, -50, -92, -35, -104, 9, 0, -92, 6, 59, 121, -122, 122, -64, 108, -67, 73, -3, -86, 126, -128, 9, -10, -22, 84, -48, -79, 120, 14, 16, 39, 50, -18, -28, -83, 7, 23, -2, -93, -116, 29, -58, -85, 10, -52, 107, 46, -121, -5, -113, -94, -29, -47, 66, -55, 82, -27, 107, 0, -91, -111, 78, 43, -48, 52, -89, -55, 17, 64, -50, -11, -103, 60, 7, -109, -9, -119, -66, -116, -108, -51, -18, -46, -43, -81, -21, -45, 63, -93, -16, -126, -69, -122, -21, 6, -105, 12, -22, 82, 29, -72, 84, 92, 13, -23, -52, -95, 51, -118, 17, -9, -51, 106, -57, 57, 45, 62, -124, 39, -10, -104, 13, 45, -118, 97, -128, -119, -109, 97, 63, -90, -107, 98, 0, 7, -46, 57, -50, 105, 85, -76, 72, 39, -39, 80, 76, -112, 105, -91, -2, -92, 71, 11, -39, 70, 67, 55, -41, 125, -120, 9, -11, 95, 118, 100, 126, -29, 16, -45, 105, 115, -50, 95, -108, 115, -102, -96, -98, 54, -28, 20, -62, 4, -73, 43, -126, -119, 10, 48, 44, 26, -55, 41, -87, -53, -120, -19, 13, 90, 42, -44, 61, -123, -36, 49, 93, -50, -76, 126, -113, -18, -109, -80, -29, 14, 61, 32, -67, 126, 58, -82, -92, 73, 95, 61, -69, 16, 58, -104, 66, 58, 126, 58, -20, -115, 112, -65, -106, 93, 61, 29, 43, -38, -95, 3, -114, -22, -49};
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
    msg.setTimeStamp(0.108648535146);
    msg.setSource(63922U);
    msg.setSourceEntity(123U);
    msg.setDestination(64030U);
    msg.setDestinationEntity(49U);
    msg.req_id = 3902U;
    msg.status = 199U;
    msg.range = 0.0255809728877;
    msg.info.assign("SHSEMVYWMCBGISXDWWXFCRPUEYNRTQQQHQWGUZUHPISNGPGPPMMFJIQRKHHFKRRNMGPRCITKGAMSVEEFEUKVLFNTZUSCWKDZ");

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
    msg.setTimeStamp(0.02712835184);
    msg.setSource(23585U);
    msg.setSourceEntity(238U);
    msg.setDestination(17052U);
    msg.setDestinationEntity(236U);
    msg.req_id = 52640U;
    msg.status = 201U;
    msg.range = 0.0116419203531;
    msg.info.assign("HIFPKAVSJFVQYFZJZBKYNJQT");

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
    msg.setTimeStamp(0.511982650851);
    msg.setSource(1592U);
    msg.setSourceEntity(171U);
    msg.setDestination(25124U);
    msg.setDestinationEntity(43U);
    msg.req_id = 6456U;
    msg.status = 74U;
    msg.range = 0.61647193288;
    msg.info.assign("GLTRIMZBKRGJAENKZRRSHDDKFQWQAUXSXFMJMUFDPCCEVRYFYBCCLBVYGSSAESOTOCFUWOCSDNJJIUIKDVQHIXIHDXEAT");

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
    msg.setTimeStamp(0.0669590501863);
    msg.setSource(36517U);
    msg.setSourceEntity(241U);
    msg.setDestination(14422U);
    msg.setDestinationEntity(243U);
    msg.req_id = 19321U;
    msg.destination.assign("BEYZAMQSIIFHQNMBYTEQSUDGSBUSJDLAITQEVGVIVKLYPMGHVMAIXJKODJCPMPLNWYXIJWRTCNRDTUKRTJPNBULIHVYMNDZEDRBPREHASBDQKNXWEKSYSNUPUKNOVYRG");
    msg.timeout = 0.254762582946;
    msg.sms_text.assign("WQOFUIGZYVYMXBTDQTDQHOZRNRFWWQPLUPIESNQXYJMQRJZGSCAUVDEOSHCIITRENLYDAYIHABEWRGBAZBSPCFULWODVRJCTQBRCXLFTMIPDWCKFUXLSHCWLAXUOGYBHNFZEWYNTJEDHKJGXZMMGOUKEMDRZVDKAAFXYQIPFIPLRDTSOCHAVZBXBIUVZNPLTWKWKGVIFSVHLSGMYZMRJLHUQMSPPVONBMXKJEBP");

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
    msg.setTimeStamp(0.361032447585);
    msg.setSource(19968U);
    msg.setSourceEntity(89U);
    msg.setDestination(59382U);
    msg.setDestinationEntity(39U);
    msg.req_id = 15450U;
    msg.destination.assign("ONNCADWCEIIMXJLPXTVYZTQVADKFCVPQTHMPIGGIKWLWTRWFDXBYNOSYYROUFRHPDVQUDLOXRXXHDHSKBPDNPICJE");
    msg.timeout = 0.189960903092;
    msg.sms_text.assign("YUOQUEFRVZONBWRPWCZKHHOOALWWPIMXVMVYEBDHVJRTCSXSRKROUZFWYNRGLANXFJITDTKGOYRSNSLJVKEQMGELBBMRZIWSHSDSAOBUTSGFKYIPTUHJFLNBEDXECPXHNUHGMIJPALFAJMNHQCDMQRDYMXDCJEUPFTGOSQXLINZXKGOEBVCZJUPQWALYDAV");

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
    msg.setTimeStamp(0.96580793798);
    msg.setSource(30574U);
    msg.setSourceEntity(39U);
    msg.setDestination(62893U);
    msg.setDestinationEntity(38U);
    msg.req_id = 4513U;
    msg.destination.assign("MMZEROKZFRASJOZDWTTIXEJPIPJCPXLFQHAFYRZTVZUFGKNSDFJOCQSNCGSZBVCQNYONEKQEOIBMATPMYJPXPYUMFQGWMBCWCBNEIRJXWIMHYUQOVGGXHOWARUEZRFYHLVVTKXAGTOBKFNXAPJXSGEMWDWWPLQS");
    msg.timeout = 0.497421466916;
    msg.sms_text.assign("FOZBRWPTJDMOSNQYXKGHBGRLLEOSZVZSFAXMUXXKTBIABCIIRGNXEHEOKBOSMOUJYLLNIUQCZBLOVNYNRCPDAIFWVTPQIFAPHWURSPMCEINTUCJTP");

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
    msg.setTimeStamp(0.434724685458);
    msg.setSource(16214U);
    msg.setSourceEntity(154U);
    msg.setDestination(48664U);
    msg.setDestinationEntity(170U);
    msg.req_id = 62707U;
    msg.status = 154U;
    msg.info.assign("TKYIEZYPAUTHJYYBMPLSYSPUGUIXNIFTLWWCDSIODXURACFXHKPVLQNDCZGXJCMHVGWBFGCQWFELATCUKMRCNIRKHFRBZGJRWOEYZTQMZAOUNVGVCVUTWXDIFBKHPNPLARPBDQEYXNXWKNTKSLFXKXRBHVQJSRODJOO");

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
    msg.setTimeStamp(0.614558528688);
    msg.setSource(47335U);
    msg.setSourceEntity(105U);
    msg.setDestination(34598U);
    msg.setDestinationEntity(193U);
    msg.req_id = 50855U;
    msg.status = 169U;
    msg.info.assign("FXNFZHZJOEERRLISSKNVAUMSVPCKEVZAMQEMZYTGXMJVYDRQGJWHKWCJQXIEHQUGOLONRRWDPYMNTCCFFOTCJTPZ");

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
    msg.setTimeStamp(0.392402646426);
    msg.setSource(27686U);
    msg.setSourceEntity(136U);
    msg.setDestination(50763U);
    msg.setDestinationEntity(223U);
    msg.req_id = 29051U;
    msg.status = 80U;
    msg.info.assign("JYJRCXBIRMPLFLNZLCIOQOMMFSMDNGOQGHYTJXGDFTILCCKNBAZJNIHLAOGDTDXXJUEWWSAXRE");

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
    msg.setTimeStamp(0.836825297488);
    msg.setSource(61606U);
    msg.setSourceEntity(194U);
    msg.setDestination(16795U);
    msg.setDestinationEntity(75U);
    msg.state = 236U;

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
    msg.setTimeStamp(0.939802935696);
    msg.setSource(8931U);
    msg.setSourceEntity(25U);
    msg.setDestination(33326U);
    msg.setDestinationEntity(172U);
    msg.state = 64U;

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
    msg.setTimeStamp(0.995915637889);
    msg.setSource(25863U);
    msg.setSourceEntity(54U);
    msg.setDestination(37618U);
    msg.setDestinationEntity(211U);
    msg.state = 188U;

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
    msg.setTimeStamp(0.776912059882);
    msg.setSource(15753U);
    msg.setSourceEntity(136U);
    msg.setDestination(58113U);
    msg.setDestinationEntity(252U);
    msg.state = 153U;

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
    msg.setTimeStamp(0.48921130673);
    msg.setSource(38682U);
    msg.setSourceEntity(204U);
    msg.setDestination(43108U);
    msg.setDestinationEntity(14U);
    msg.state = 239U;

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
    msg.setTimeStamp(0.794691298865);
    msg.setSource(51092U);
    msg.setSourceEntity(131U);
    msg.setDestination(27777U);
    msg.setDestinationEntity(230U);
    msg.state = 74U;

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
    msg.setTimeStamp(0.307227578219);
    msg.setSource(38817U);
    msg.setSourceEntity(24U);
    msg.setDestination(43672U);
    msg.setDestinationEntity(21U);
    msg.req_id = 41990U;
    msg.destination.assign("DEKTHRZLJWWVHPOMCBMYIIISTQTOOGGSWGMLQCWGXDKAUNCLFAMQFIMHVGUATCLFKCZERVEYUBYYGKWFYJRIYMHETELJXORRIHJBVPYMLZQHQHSQWTAQEFXZEAFONDPSJFLIGMLHTVCWEVNNUWPORRWYDNPUEKLKUVDBKNXCASU");
    msg.timeout = 0.929128455477;
    IMC::StationKeepingExtended tmp_msg_0;
    tmp_msg_0.lat = 0.500494711879;
    tmp_msg_0.lon = 0.21342450055;
    tmp_msg_0.z = 0.99627490584;
    tmp_msg_0.z_units = 252U;
    tmp_msg_0.radius = 0.622378049314;
    tmp_msg_0.duration = 8686U;
    tmp_msg_0.speed = 0.580617214363;
    tmp_msg_0.speed_units = 232U;
    tmp_msg_0.popup_period = 42855U;
    tmp_msg_0.popup_duration = 43239U;
    tmp_msg_0.flags = 202U;
    tmp_msg_0.custom.assign("BJZFYOZGJJVDRILKNFBWGILGSEMEDDKJEPKAVSAGEZMCILVCHQTWHCLREBORNUTWUNATYWPOKDSXUMYWNAOIUDQCRPSJMTXTJSAVWLNPCCEQVXPYHTUICIZXNKBHVPPBGEZKPDJDCYKWJQYDMHRXUHFGFUSCABFXGHQLRZFKOFAJNFWCEYQNQZQYSMIPVUIUXGZHROBRZYAOBLG");
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
    msg.setTimeStamp(0.173964710453);
    msg.setSource(44164U);
    msg.setSourceEntity(196U);
    msg.setDestination(54047U);
    msg.setDestinationEntity(89U);
    msg.req_id = 19529U;
    msg.destination.assign("EPEJUHCRAYRHIXLGQYWNZQUXMRNJEABUHPDKAEQBNDKIBJGAYTIPBVRWVDDMZCJKDIBFVMHW");
    msg.timeout = 0.0156049506804;
    IMC::RelativeWind tmp_msg_0;
    tmp_msg_0.angle = 0.345238492328;
    tmp_msg_0.speed = 0.250050969385;
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
    msg.setTimeStamp(0.395870977803);
    msg.setSource(5719U);
    msg.setSourceEntity(100U);
    msg.setDestination(41877U);
    msg.setDestinationEntity(254U);
    msg.req_id = 6675U;
    msg.destination.assign("RDXSIUGRANBQDYOFJGEMFEDCYHMLTQZWDBUJAJOOKTXHOXZNZYBZGIPRHZYLFHYCWVAVWWZNTLTUJMQH");
    msg.timeout = 0.897137154389;
    IMC::TCPStatus tmp_msg_0;
    tmp_msg_0.req_id = 41524U;
    tmp_msg_0.status = 55U;
    tmp_msg_0.info.assign("SGYCAPXSNRXFAZMNWIURJDKHAMSQFKPSFLUKSVITVUYOHSEPZVZOTYZRJPMVCVCZCEICTITZLGHYPDGEUNAXNOBOFTBLWQARHAWXOEBQFYVRGPNQDTMGAUHIZYXEFJCZHIXUWISGURETXNGOLWVJCBLGNDWNEKKTRSDPVEAYRKIQKOQHKNYCYQHDMVALFBGKPCZGEUDEDRMIFOTX");
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
    msg.setTimeStamp(0.739904733417);
    msg.setSource(9500U);
    msg.setSourceEntity(147U);
    msg.setDestination(23424U);
    msg.setDestinationEntity(24U);
    msg.req_id = 52783U;
    msg.status = 9U;
    msg.info.assign("YNICLKXKHXSPIIUALYALWSBVRDHFQUAGUWOFXYVPJQNAYCRTFFVIDUUDQOQKTVHSVFBYYTWSOTAFMEOXPZHAPOIZEFYSBSAWKZXHPIERTOKNNCGPTMZOQRNDEVFWOEYDLLKGMJKCXJQGXXCECRRJDAZOBWMMINJGVHZCEHPLDBGYCZNQKXNRJIGBPSBLMGEISCTJEFGWSHYMDSXZREWABVUWMFVHTWDBNLTZZQLUJK");

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
    msg.setTimeStamp(0.745758402137);
    msg.setSource(11483U);
    msg.setSourceEntity(108U);
    msg.setDestination(44210U);
    msg.setDestinationEntity(216U);
    msg.req_id = 35289U;
    msg.status = 76U;
    msg.info.assign("PDPAQWHFWRKOQCGCESIRRTPNNHOHFPSEZPFNEZGNEQYLTCGTZTXEYLAWYGYJJPJKUEDMTGRKQAAGEZXAIUZQLKYVJJIIYRWVMZNHZQNGJAFFGHMMIOKTAIUVAFDVLLBPDLNCSTESHKPBICMCVRBDLPDRZTDXHYUVPKCKXSRWDCNBXBOCLNWMOOFQ");

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
    msg.setTimeStamp(0.331464684353);
    msg.setSource(22634U);
    msg.setSourceEntity(224U);
    msg.setDestination(1722U);
    msg.setDestinationEntity(22U);
    msg.req_id = 45757U;
    msg.status = 245U;
    msg.info.assign("NELCFQLTPBNTDIFIKZTJGUUSHREYIXEZRCQFSHZQHQIBPVARJMMBDQPEEWKMFVMASOERHTBFOMCCVYJGRZZIBJNKVVSCELOGUIDMKDUXKVOLQYFVSENGWJULCGZYO");

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
    msg.setTimeStamp(0.96372055253);
    msg.setSource(47465U);
    msg.setSourceEntity(27U);
    msg.setDestination(42234U);
    msg.setDestinationEntity(194U);

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
    msg.setTimeStamp(0.318370317182);
    msg.setSource(24784U);
    msg.setSourceEntity(166U);
    msg.setDestination(26856U);
    msg.setDestinationEntity(61U);

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
    msg.setTimeStamp(0.559605243967);
    msg.setSource(6608U);
    msg.setSourceEntity(2U);
    msg.setDestination(15241U);
    msg.setDestinationEntity(15U);

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
    msg.setTimeStamp(0.476783084045);
    msg.setSource(5152U);
    msg.setSourceEntity(75U);
    msg.setDestination(20588U);
    msg.setDestinationEntity(138U);
    msg.plan_id.assign("FWIDVHFPEBXSJMUCWZFGQOOLAYVDMNDZRGPXJHNCWSINUHSTQSITGHPGDOVQXZARLMKRUSWJQTMLHAEGBWDUSYCBDBZSXVHTEFQMQLCCBWYUTRDPCYKZOFFYEUONASVAZYPWDZQJUAYGXYPQKNZOVWVPHETNGBGXCJKO");
    msg.description.assign("ARMJGQNKAKNLMLMCBZHWIOEIKULFDEYDIFDSSZZODFKQWOYMWGDQHEALVPOGMNONEVBYPTCUHZENACSCVVCPEKOPJYPGRSOJGNOKTTWBNNWLDYBCZFZUFJXKYFTQTDOPVGVZAXUCNPZRUGVKVSRTHSBWPDJBMXHSKSRANLCAIMOWXMGJ");
    msg.vnamespace.assign("VIBTJKYIJGN");
    msg.start_man_id.assign("YNSRUQTRLUUZWXMERDBMAQOOJXTMYTJKMPFOXXSVWDISLVBXIXEISOCMLKOLBESPLTGQNWLIOVYRBRPPUGKAAEQABXHMHFVDSDLXQWUMFJFFHMQGMAKTCGVCINERLDNHKXKKECSVWPQQBYPBHZIBCKAYGTAWJTNECFRRUHP");
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("OUYLVWATQVTCVPIRJXBBFGAQQHSHRLHUUOGQHXRIRTTLPXWIWMGPCOZKPEKKRPHPIBKJNFJXFMYMPTERHOXNNWLSCYITGTZZXWOTKZABJASLZZAZVLSFQHEKULHSNBRTYUMHQIUNJKGWIFIDLYZYVKFEDMVDENBHBEQCECYCIOKDERJDWRLXZAESBPNOMBCDACUUDDDNQVSSOAYJNMUBVVALOW");
    IMC::Teleoperation tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.custom.assign("ROUUXQQIYBPKKDGCKYVRKWLTVHYVIJHTJXLPQNTXZDEHFZXYOELFGBGBHMGNBVN");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::HistoricSonarData tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.altitude = 0.877988559789;
    tmp_tmp_msg_0_1.width = 0.544461958792;
    tmp_tmp_msg_0_1.length = 0.878070020753;
    tmp_tmp_msg_0_1.bearing = 0.622765065303;
    tmp_tmp_msg_0_1.pxl = -30102;
    tmp_tmp_msg_0_1.encoding = 51U;
    const char tmp_tmp_tmp_msg_0_1_0[] = {-28, -30, -32, -64, -48, 37, 89, -55, 28, 28, 75, 51, -101, -17, -121, -81, -85, 121, -35, -16, 125, 124, 120, -54, -9, -34, 98, 99, 101, 7, -64, 110, -43, 114, 36, 94, 86, 84, 57, 116, 4, 21, -81, -113, 57, -78, 106, -17, 32, -87, -91, 112, 9, 11, 42, 42, 81, 17, -21, 123, -40, 91, 71, -18, -27, -42, 98, 77, 112, -32, -108, 88, -120, -105, -121, -21, 106, 15, -92, 41, -81, 34, -62, -102, 48, -54, -44, -56, 121, 123, -89, 17, -116, -6, 99, 29, -118, 69, 85, 37, 17, 51, 111, 81, 65, 69, -81, 84, -17, -43, -21, 126, -58, 12, 70, 85, 39, 115, -88, -28, 5, -55, -62, -67, 31, 22, 51, -109, 3, 79, -6, 112, -80, 89, -30, 1, 13, 89, 105, -21, -8, 51, -49, -20, 93, -54, -60, -92, 0, 126, 105, -23, 42, -117, 74, -22, -13, -84, 45, 100, -24, -16, 15, 109, 38, -119, 99, -96, 76, -19, 68, 59, 5, 2, 39, 51, 14, -79, 30, 0, -27, -7, -125, -96, -69, -85, -126, 71, 77, -72, -95};
    tmp_tmp_msg_0_1.sonar_data.assign(tmp_tmp_tmp_msg_0_1_0, tmp_tmp_tmp_msg_0_1_0 + sizeof(tmp_tmp_tmp_msg_0_1_0));
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    IMC::DesiredThrottle tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.value = 0.445419726873;
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_2);
    msg.maneuvers.push_back(tmp_msg_0);
    IMC::PlanTransition tmp_msg_1;
    tmp_msg_1.source_man.assign("KUOCQIVPZEYSDVWMORXVQWDYYCLCUITYPCEDGQNCOJLMRYLJSPKINAETHSHEHXQRXGMKIHUBUETRQPFTFRLWNOESEXNHQKLIVPVGFJUZLKCJHTQEWRUMGWJWKASUTIJZHMOMNNBDBJQUCTADZDAIRHFAZDBYXHKAYJOWXFATVPFSCGFNYBPYGAMUFGBONIGHBQGPS");
    tmp_msg_1.dest_man.assign("ICTCYEGWXCBVUTETQBZFFATBRRBZALWSQWAXKZYKMNVBWTTPOXMLRKCNAWWDKSIWSAOLSFOCIYDCPQRHLBYOHSKKRPDQPTIJBMRHRIAMOPYUURFDXJLJLEGVKAGHREEAPLECCZYGDZUDKXWIHBUMPJJFHVNNMDZDNWYIKFGZVAMBGUYPNXWLZTZXIHJENCMQRUHUBCMFVXUXVQGNZIKGAMJYFLVEXHSJGPQHJNUEQSOJPQQDOSENDIVOFV");
    tmp_msg_1.conditions.assign("SUZOEAAHHHIVZLHOXQXBJFGSYASFJNWWIUPQIJLNEDKIURWBPABFLGLRZOIHBKHPVWVCXMTUKJHSGYPLNMJGEYHCELKOKSSJJSWARDULWCZDVOJGEFJFVENZWODTQXNBSQDAWBUNTTTKMTWFQYR");
    msg.transitions.push_back(tmp_msg_1);
    IMC::LblRange tmp_msg_2;
    tmp_msg_2.id = 142U;
    tmp_msg_2.range = 0.85491249004;
    msg.start_actions.push_back(tmp_msg_2);
    IMC::Rows tmp_msg_3;
    tmp_msg_3.timeout = 57522U;
    tmp_msg_3.lat = 0.00919270123071;
    tmp_msg_3.lon = 0.805735254238;
    tmp_msg_3.z = 0.524480412839;
    tmp_msg_3.z_units = 249U;
    tmp_msg_3.speed = 0.0193633305888;
    tmp_msg_3.speed_units = 90U;
    tmp_msg_3.bearing = 0.00240915503088;
    tmp_msg_3.cross_angle = 0.204044064292;
    tmp_msg_3.width = 0.691504734303;
    tmp_msg_3.length = 0.647778004956;
    tmp_msg_3.hstep = 0.710181298496;
    tmp_msg_3.coff = 185U;
    tmp_msg_3.alternation = 205U;
    tmp_msg_3.flags = 165U;
    tmp_msg_3.custom.assign("GEPSMQIFJZOFRXGDSTGFIQXNTYZDLYTGMEFMKAMEHQRJZIGOPPNIOKTBMQUDSWMYXSLIYPVSEPNUXLDADCRECXQZIAYBHNUHBTQTXSFOMELNIPYZOCJNDGWHRJULOJCKTXKYHHBUVZRCCPTMVXFKAGAWSSP");
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
    msg.setTimeStamp(0.418722054392);
    msg.setSource(53488U);
    msg.setSourceEntity(22U);
    msg.setDestination(5977U);
    msg.setDestinationEntity(177U);
    msg.plan_id.assign("GMWSATEBDYFMMTNJWMCAUXGXRRLFKZVPULIPANWKRHUMDDQQMIYELATZHB");
    msg.description.assign("IUPOPXDRFCMQWBKILBQIZELAEPJQWVZAKLBNJUNBSBUFLNMCFYVPLISFFJHYRQJDWAMR");
    msg.vnamespace.assign("QBKCHHEFRTBMWNHWOWESOWYJHXGPQINXHFUZJBJVULNDVQRBZHFTMOSKCXGDUIPVAOLPIUXLJGXBVORWJLPQCTKCUQUMRSFQYZCVGWIKTSEEPALMNIJAYLMDEGNJNIHXDONFHKTRBYGZLYZZGUKMXXZLOASASN");
    msg.start_man_id.assign("QYMAEHVCSTAQKVJFRCJJEMCGQGJTTJZZJBROGVCCKBPP");
    IMC::AcousticOperation tmp_msg_0;
    tmp_msg_0.op = 34U;
    tmp_msg_0.system.assign("GCMZUKBXJLNLRZFCZWZHSLDPGUQDWKKJZBPFRXVBIBIYRAVHFNILUTFX");
    tmp_msg_0.range = 0.187742033018;
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("GUWTJPHJOKXYXYRISLKDFWYGVCKPMIFQNYTBFMJQOKQKCWLYSFJCAHTVLESLRTOPEDBJJAVDZWZOOU");
    IMC::Goto tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.timeout = 5039U;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.811500361579;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.635698897802;
    tmp_tmp_tmp_msg_0_0_0.z = 0.942879153146;
    tmp_tmp_tmp_msg_0_0_0.z_units = 11U;
    tmp_tmp_tmp_msg_0_0_0.speed = 0.204860673986;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 44U;
    tmp_tmp_tmp_msg_0_0_0.roll = 0.387018034122;
    tmp_tmp_tmp_msg_0_0_0.pitch = 0.722143488786;
    tmp_tmp_tmp_msg_0_0_0.yaw = 0.449947245315;
    tmp_tmp_tmp_msg_0_0_0.custom.assign("TMLLHWOVDLGKFQHRTNPFGNMRJYFUGEQCVCNXYAOEDMMETGOMKSYVXTUEEQUJLAGCIACQUWZSPWRWUHTISASVBZXTTLTPYZRCHHYKHRCSMUGZDMYXJZPAOLPETDFLPEFOKKRFMPHKJYLHPRWBJFQCGYVUIN");
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    IMC::Map tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.id.assign("CUZXYWGEKIDRHAJNQRVYCDJLUFEGPQPHXNNQATQMCFNDYCCETVQYHXMGIIMIFZIWKXHNSUTALVXDSYABTPNJGOPGSBNEXBGPZXWYZTVGPLZMETPZOIDHJUIMFCRSIRSZUFYSCBFGZUVDTWPXKCDKDALYUUGFFBVVWWIDCXWNCFOQOBOYTAQKU");
    tmp_tmp_msg_0_0.start_actions.push_back(tmp_tmp_tmp_msg_0_0_1);
    tmp_msg_0.msg.set(tmp_tmp_msg_0_0);
    msg.start_actions.push_back(tmp_msg_0);
    IMC::PopEntityParameters tmp_msg_1;
    tmp_msg_1.name.assign("HEJAUADUITDVRVYOXPHYASCSCDQXJNEKRSRMLGDXRBIITZFEAIJCWEOWTNDZLNKVBBNHPHWEQWLQRGYKPZAUJIKFVMVLBUMBNWLE");
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
    msg.setTimeStamp(0.866533196129);
    msg.setSource(18418U);
    msg.setSourceEntity(254U);
    msg.setDestination(21725U);
    msg.setDestinationEntity(251U);
    msg.plan_id.assign("GYJOBVTINHSEFRGAFKQIUYQUNSZKNACVJNONYFGSEEKBWVHKBHPHMWMIDSMRZXKBYXPETDGSZW");
    msg.description.assign("KBDVDBUAYAUNFZOIEPDSULYUWWXHXYIMVBXSEVUHCAPIXQFBMAXKDJQBOJMNYJXESGOWRKXUVZSBPGXJFPFGHBNJJKEWAJLKITTQISCWRWIEKGAILVZGGKEDANPZSLJNURJADWOCMSQDCTWLIOFTERHNBZZFWBONCBIVOUMRCGZFLQGQLEGTFVQVTXETRK");
    msg.vnamespace.assign("YABSPAFANUPAFRIKZQWXPNWLSHSMFWYGCSFBOTUFGCSMBHOXLVBUIRAWWTKCENNZJBPITGTLAZPDFJWHZBGTAJGTLLRDICMPEKYUUXVBJKFSHOXYIIDISBVDQYCEJDRFTMRALMBQHUVHNRAYGLAVXHYUMMCFGYNRZJJKNJRQEDQNPECDPEOPMOTIQSVENHWKYEYZGRQOLJLOIFVOKQMDONZXWCILUJTEGCRVKWUS");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("JDSSIBPRZPJNVKCMPOYIVOMVMSALMAXNQVIVPBDYFBZMGNTOFFTFIXOOGCRZGWPXRQRCMK");
    tmp_msg_0.value.assign("XSAIKUAVFOKZHHKIYEYXZBODFODCAWXCGGNCRVQLNKTYFNLNVBJMOZIMEODGXFDLSDLKCSCTUUKWORTVMMZIYRJNEOCHVHDOUSIHFUQBDIUPIEBBGFYZKBKLGEOYKBLWCRAYYNPZXRAQPVPLQVUAJGSGRETXILEMXNQBPLZHQXCCGVHPTKTRJXANHSMNTWO");
    tmp_msg_0.type = 74U;
    tmp_msg_0.access = 188U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("HSUTXSQBWMEGVNSRDKCVJQIZAHXXYHFSEDKZNMUVFJZOYLAZXJRTHAOYZPJIJLAXJTIUNEOMYYBMPQCQWYBOGQCDLLLWURTNCAVQUDTBWALBREJHCEABLZKUGHWBPSUHGRNCZGFCEHMOMTGGZDNKSTYYXSEMMJFQPSZXEJKISYRKPGFUPIVDWDGBQBNRTOFPVVCANCHOFMIWFINAWPLMXPRSIRKTOHPELOXKG");
    IMC::PlanTransition tmp_msg_1;
    tmp_msg_1.source_man.assign("OCLMWFFDLLIJYSSVVOLIXMGIMOROYEIWTXNAEQBVCZORHQNYRRTDNYPQJRIOVWGAFVRBGSTIXSTRNNIKVZGFWXDMMLNAXZHBIPXGWUU");
    tmp_msg_1.dest_man.assign("XAMIOLJFKPNVBAVUGNDRNWQEKOLFUJOGTOAVORJQABWDMDVKSLEUCXBSWSMKDHQBPREZIYTRHWFAPQIGXHXETCWQDHUAXXYEPPFPEM");
    tmp_msg_1.conditions.assign("GFKUHVRTLJDKAJLATBNVCNOUTWYBQQUDPERASBUCRSPEENXVHTEMFMIAOKLJPCSVLAOBDYLAKVEUXOKFKHMYQYEWMJXFYJUDXRZUHROSGREJXIZJIFZLSREJG");
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
    msg.setTimeStamp(0.592189660144);
    msg.setSource(9124U);
    msg.setSourceEntity(48U);
    msg.setDestination(40184U);
    msg.setDestinationEntity(22U);
    msg.maneuver_id.assign("RALKDHCMIDUUALPJWSJYZNRVMPRDKXFBKHYZJCIYFMGNBEXTQETTRURWFPOLANDQRJQCUUSMZPXAVLKUZ");
    IMC::Sample tmp_msg_0;
    tmp_msg_0.timeout = 63054U;
    tmp_msg_0.lat = 0.0845125489328;
    tmp_msg_0.lon = 0.146854819489;
    tmp_msg_0.z = 0.72992299039;
    tmp_msg_0.z_units = 168U;
    tmp_msg_0.speed = 0.721974490312;
    tmp_msg_0.speed_units = 230U;
    tmp_msg_0.syringe0 = 43U;
    tmp_msg_0.syringe1 = 136U;
    tmp_msg_0.syringe2 = 242U;
    tmp_msg_0.custom.assign("FXTETECZZMQQQDDTLRIIQVKHFXZJMSWMBPPLTULCODQPTPPIXBRRRAAVUOWJKGKVOLHOYCRIFCIKANQBSVJMDFBEGXFHMBFGRWMUJIDFIAYTJWIUQASVTEMTKNCODOPESHQHXWBHICAGUOBZOJLDVHAGDUVHECNLLNGGYNVKGIYNFKSS");
    msg.data.set(tmp_msg_0);
    IMC::Collision tmp_msg_1;
    tmp_msg_1.value = 0.759305255739;
    tmp_msg_1.type = 212U;
    msg.start_actions.push_back(tmp_msg_1);
    IMC::TrexAttribute tmp_msg_2;
    tmp_msg_2.name.assign("AVMPJAIJTMYXJKDNHDIVWHVGQKQJRQGXQWKJSHPRLTZQXFUDEFMEMXKFIYCVFLAPGMSOJCUUALJDONRZISTLLIHOPKCPRLEOKE");
    tmp_msg_2.attr_type = 60U;
    tmp_msg_2.min.assign("KBBJCKZSUJOZZCGQCDMXJHDOHETYBLBRUUDNZVEIZMELUZQFJBXWKHALBNCXIBYIZXAAXELEMPOLGRWTKFWHRQDCTEYFIDXFKDFVBTSY");
    tmp_msg_2.max.assign("BVQCXBPVZFUQEOULOKVYOWOLLMTQSOHQCZSAAJNNVSCVWQBISBGGFYXYTZDJHEIDKXRDAGZUUBDWRYWWXMGAQXINMBWLDDHPETKT");
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
    msg.setTimeStamp(0.0747938729126);
    msg.setSource(36420U);
    msg.setSourceEntity(139U);
    msg.setDestination(52067U);
    msg.setDestinationEntity(102U);
    msg.maneuver_id.assign("ZPBQYOQXSJIDDVVCGVXWLBLUIUKJQNQKXGYLGQDEOCSZLAXENRHFFYQGEZWRMAMTEJDBKSTYBGXVSWIMNZJMASHIPCWDOADRTWAJRHYICJNDCMNHFRCQTYG");
    IMC::ImageTracking tmp_msg_0;
    msg.data.set(tmp_msg_0);
    IMC::SetPWM tmp_msg_1;
    tmp_msg_1.id = 53U;
    tmp_msg_1.period = 3269410503U;
    tmp_msg_1.duty_cycle = 4214362350U;
    msg.start_actions.push_back(tmp_msg_1);

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
    msg.setTimeStamp(0.463541276682);
    msg.setSource(25379U);
    msg.setSourceEntity(193U);
    msg.setDestination(49013U);
    msg.setDestinationEntity(250U);
    msg.maneuver_id.assign("ZAKSUHIXIARNOVZNTVOZZHBDSEJMAGMNGIQZRFAYRIUIYSFHUFNBHPPLMKVMYNUAKLUTEGIGFILGHEZQCBGNOVQRZMYKHPYJUJZXCKQXNZWZPMPTCRUSMCBGWAHDLQHTYOEKMNRVSOJWLWLBGVPBJVHUDEXRQWKPJDSLXJBQKRDKMQIFLTFCFBSNKTTPFEOAGYWCDDOTIOBALDWXEIBVWOQERUGAETJX");
    IMC::ImageTracking tmp_msg_0;
    msg.data.set(tmp_msg_0);
    IMC::NavigationData tmp_msg_1;
    tmp_msg_1.bias_psi = 0.800028356969;
    tmp_msg_1.bias_r = 0.625406832036;
    tmp_msg_1.cog = 0.23819745411;
    tmp_msg_1.cyaw = 0.29165374774;
    tmp_msg_1.gps_rej_level = 0.11915337792;
    tmp_msg_1.lbl_rej_level = 0.826585321868;
    tmp_msg_1.custom_x = 0.898654861443;
    tmp_msg_1.custom_y = 0.911725738429;
    tmp_msg_1.custom_z = 0.396711204945;
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
    msg.setTimeStamp(0.833241711749);
    msg.setSource(64977U);
    msg.setSourceEntity(101U);
    msg.setDestination(2774U);
    msg.setDestinationEntity(113U);
    msg.source_man.assign("LKBATDEKLDDWWHTRJGZHIPWXFVKIZKNLEGBLWZNLCXLHZMWCNXNBVWCKKMQEGDHESFKCASTOMQYIJZTUJJAASQJEJF");
    msg.dest_man.assign("BUFJTHPYQCDHCVPTIUDKDJNIOPORVTPJENOZVMRKTXGHYCYDSPBDJUISULVVMKW");
    msg.conditions.assign("ROSCTXLSJGJPMHOKOYYPQFYXRIUXHTSTUXRTBXGVXADODCNGSEKYPFZ");

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
    msg.setTimeStamp(0.762181854184);
    msg.setSource(57220U);
    msg.setSourceEntity(39U);
    msg.setDestination(62907U);
    msg.setDestinationEntity(193U);
    msg.source_man.assign("SIZVHGNKEWGLVPYCGWCTBJPMMIOKHMMJWPEXKJVHCLQKJTDZRINHCWUNGAOIVXAIKZMVFQYIZXFXPADWDRPOS");
    msg.dest_man.assign("ZXFSAWLZTHIGOUHWHSJETBYYMSNRPNLIDGGVRAMBLRCXUPBJCJWUDJVWHMXOVLFKMUENAQJVUTVRMKBZCMBKIBSHBWPILTBMPZUXOVCVAIHEWEKRFYJQLXYKDHWSZDEZDJTNQQGPAYMDHLJDYIWUAVYRSZOGKCWSCGCHECFBQOTHYQZUODFXAIWQITRUAOXOFGCKXINF");
    msg.conditions.assign("PYTBYCXGAURVYWDARUEJQFHCWCWAVYOBUNWANL");
    IMC::NeptusBlob tmp_msg_0;
    tmp_msg_0.content_type.assign("YJMQUNWZOSARURUQFBORHBCFKZ");
    const char tmp_tmp_msg_0_0[] = {-51, -93, -4, -28, 67, -86, 72, 114, 1, 72, -107, -104, -32, -47, -19, -56, 104, 3, -32, -44, -16, 14, -96, 39, -70, -110, -113, 59, 26, -31, 54, 55, -2, -10, 39, -49, 21, 87, 112, -114, -14, -110, -109, -10, 58, -116, -24, -91, 114, 57, 120, 97, 13, -101, -60, -53, -89, -91, -100, -71, -108, 106, 33, 7, 45, -90, 87, 3, -79, 77, -103, -106, 63, -106, 73, 94, -100, 74, 86, 114, 104, 12, 13, 45, -83, -126, 10, -2, -61, 54, 18, 125, 47, -90, -62, -82, -111, 56, 96, -22, -117, -15, -123, 45, 14, 77, 33, 118, 61, -101, -65, -120, 11, 70, -1, -63, 80, -99, -49, 23, 78, -42, 113, -53, -102, 76, 123, -40, 21, -77, -111, -111, 110, -128, -125, -127, 41, 93, 8, -24, -90, 4, -126, 4, 18, 35, -60, 125, 79, -1, 70, 100, 94, -21, -97, -110, -99, -75, -63, 40, -74, 125, -118, -57, -71, 107, -61, 117, 97, -113, 104, -87, 79, -110};
    tmp_msg_0.content.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.775887657911);
    msg.setSource(57024U);
    msg.setSourceEntity(247U);
    msg.setDestination(18443U);
    msg.setDestinationEntity(238U);
    msg.source_man.assign("CIPIOOWPSAZTOSUUJOFHZ");
    msg.dest_man.assign("NDQZGHXYMPJVDGLXSFSKMIELSYJCJVDJWYLTHEIUBCDYLJCHNIXBZUURESSWKCPBIYPFCMZHTXKSMFIAVAOAVTNFAGKLWGKETYBFHSNUWQJXRCZDSMZIWXUWRZVEIZLUFOUPN");
    msg.conditions.assign("LKNAHAYQEINWDWUVSLWFQFLVBVEZUSUNMECKDQMBKBFOTEQYCDVQOARVLQAUXMDLBNVOQJKFANNKKGNLIUIOOXXGSIADDGYJGQFMICJBIZRRHGBUDVLKTXJPWRMVWHCPWZIXUCXMYJZJZDUHXPHRZGKBMRFTXTNOEZ");

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
    msg.setTimeStamp(0.268299227927);
    msg.setSource(43625U);
    msg.setSourceEntity(156U);
    msg.setDestination(1337U);
    msg.setDestinationEntity(234U);
    msg.command = 34U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("YSXLLJXSHCWBUCESVGUDEUEOTGFGZZFFLUXOBJZFBRPEMMJBYTQRGZVQYSXRMZPLGFVHSMMPIFLRBNGXWJOMVWHXNQL");
    tmp_msg_0.description.assign("BJLOQGVQIAOCVDFXRXOZEDYUVWRTDHF");
    tmp_msg_0.vnamespace.assign("NYKBXYTCSZESWUIGWGLARCSQRUOLSLYBDIOGLXQLYEMVPWTDJXDHQLPNWGRRRIJIFIHSZHUJTTVPGEUMIVWHUDARMZSHVLJNZJQTRGXTD");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("GJIKECMDNCBKXT");
    tmp_tmp_msg_0_0.value.assign("SEXBFHCMUJUQVLFGLYVBWRUZBHFCDLKAIPOHCRQXGFLQVKWHJHPYEIMKDCUCVJXAXZBDNJDZYUI");
    tmp_tmp_msg_0_0.type = 234U;
    tmp_tmp_msg_0_0.access = 75U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("DHSVEJQBJTNWACSTXKQXQZEYAZCJPOTDSIWKUQRSMFMLRJEOEBAAMYPWKWHLDIRAGCGDDCUNVXVUVKJZUFEQCWYVMPTSIRAGYAZ");
    IMC::ClockControl tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.op = 161U;
    tmp_tmp_msg_0_1.clock = 0.0147129824882;
    tmp_tmp_msg_0_1.tz = 16;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    IMC::EulerAnglesDelta tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.time = 0.510674235458;
    tmp_tmp_msg_0_2.x = 0.141176511479;
    tmp_tmp_msg_0_2.y = 0.815256013496;
    tmp_tmp_msg_0_2.z = 0.748313978103;
    tmp_tmp_msg_0_2.timestep = 0.394761065152;
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
    msg.setTimeStamp(0.169931348674);
    msg.setSource(56284U);
    msg.setSourceEntity(79U);
    msg.setDestination(53082U);
    msg.setDestinationEntity(132U);
    msg.command = 165U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("VSJSDSMOMILUJSRXYXLUPJUQXGKNUZGDZWVQTHFFQZUCKOGKOAADNUZLTFIKWYHV");
    tmp_msg_0.description.assign("TQORNDPCDJZELSAWRPNNXMDUZVHRKPBWRJDNJXEPESLWXKAMHFXPEUSCBZGGLTFRQWMVEZISFQXKTOOPDFHMWUTAIAAJHTQPBPDCWIH");
    tmp_msg_0.vnamespace.assign("EGVYEKPQECADBYFKQHZJABNLVVWLOVWINHXTZXHXABQGNNESQHWTPRSKPPIFRHSVQUKIVMAONCLDZDZKOKMWENJJUXAAIPSMSYSGNHTFDFMKPFWHPMIRIJBHYTJRFFFXVLSDDXUULZYTZWWGABBOLAOCWVGVUPORYUTOTMBTRNIBMXADOFEGEGCQDULZSQYMCJERKJHONSKCVMXGQWLCEDGFURLPLISHKJPUYCMRT");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("MPRTIHKNRAGMGHYNSXWOCXFEXKJZEEWIAFTZCNIRFWIU");
    tmp_tmp_msg_0_0.value.assign("BCRFKDDBQPSWYXOCAMVKDHNRTPIGGXGYGSAVMVWTQDTRXSOEAWZCUJSLSJXLLNBEJFVTRGHNJQJXKPAEKLMMYONJUABIUIGPZJVAKNDDBIVYEJEEVUXLPZ");
    tmp_tmp_msg_0_0.type = 175U;
    tmp_tmp_msg_0_0.access = 194U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("DVLMAUUKHHPORSMHAWBTLCTKBPWYTRQWQPTDHFJPFBIQHYKAOWKANRGJGJEEVEVBVGIJNICKXFWTKG");
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("RDAECQYJCDWKQXFNUUGSDASNUJYEPRPFGNMDOIWATSNBEWOMALUQICCQPWJMMWJTZUGH");
    tmp_tmp_msg_0_1.dest_man.assign("GQMNHQQSCEPVRBFFNZXIPKJCNDKHSKILJUYDWKOCWBAHLFBDSBENYUFSYUKOIREBGWGOKSZGGLUWYKCTPFBZHTEPOTUKXYUYKA");
    tmp_tmp_msg_0_1.conditions.assign("ABWEIDDALUGTRPEORDXWONZMZBYYFMXUZKSHRIYVVMK");
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_1);
    IMC::LblEstimate tmp_tmp_msg_0_2;
    IMC::LblBeacon tmp_tmp_tmp_msg_0_2_0;
    tmp_tmp_tmp_msg_0_2_0.beacon.assign("GSSJMBGYABOVVGCAEYLZLDOHLQFDXYFICBJFRTSQZOSLHAQVJMTATODUJZIQNMWDXUNQAXZTKMKKUFYERSMUTBUSTENEZDAFIVXGIWJMZHKDJCOHBTRCLSXUWIUNIMBIVPPLDMPGWAZYWJXMKURECKNWFQMKKRGCNXYDKDRVVPQHNOPHJCTTIDSLBAHHEEWPIPBCPFUSZVXEL");
    tmp_tmp_tmp_msg_0_2_0.lat = 0.201411566883;
    tmp_tmp_tmp_msg_0_2_0.lon = 0.366395175218;
    tmp_tmp_tmp_msg_0_2_0.depth = 0.022810686742;
    tmp_tmp_tmp_msg_0_2_0.query_channel = 64U;
    tmp_tmp_tmp_msg_0_2_0.reply_channel = 191U;
    tmp_tmp_tmp_msg_0_2_0.transponder_delay = 228U;
    tmp_tmp_msg_0_2.beacon.set(tmp_tmp_tmp_msg_0_2_0);
    tmp_tmp_msg_0_2.x = 0.858809642983;
    tmp_tmp_msg_0_2.y = 0.581417506809;
    tmp_tmp_msg_0_2.var_x = 0.211330147487;
    tmp_tmp_msg_0_2.var_y = 0.317216927371;
    tmp_tmp_msg_0_2.distance = 0.292047706938;
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
    msg.setTimeStamp(0.758563264353);
    msg.setSource(20769U);
    msg.setSourceEntity(102U);
    msg.setDestination(21313U);
    msg.setDestinationEntity(220U);
    msg.command = 155U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("QYCXXAJVRWFMJUEFKNAKJTDBHWXBMVGOPQDMHJAIJZUDBULLVMSUWISZQSZPEFQKYNCTKF");
    tmp_msg_0.description.assign("DBZNICNHGNQLTHRIHPCTJNWVIXJVYWJBDPPAKASQGCGJVPMJSSTQGTQBOJJFFMSADELXJUKWZQYNIAFRYOWHZOENUEIFVRLEMUIUBWMREXFOBCPOHVCLUGKMAQOCMCTDHKLKSBMUAXOPSCUUHGABVKLPFYRAPWXP");
    tmp_msg_0.vnamespace.assign("HAHLSQEKESZJPMUPDEMBUMYBLXKYXXJPKJUVSLFNNTJHVUTFVGTJRNCHNBDKPITQFUSXFGBRNLOZQCPEOSALVWTAVINIOTFEITQBCIKLSPZVPRMXMHBCZLMOEHQIQGGFHUVZWCCFEMNRAEFNUWOWDOOXQMDWVIRGWDBHEAZBJKTYABYWQXGQYGPDKYGGDDXOJNXPBVKC");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("VHDMIWEFECMYYRHPEMFUIMSEPGDQKKJAIVFHRDSWLVHXYWTAGILRAJLYQEEIFOABTVGUKHDKVNCOOTKYAWEWPUUIACLLCXZKOTFJGOBKYQUZBHNARXWHICBTPPTYCFSUBNRPDTOPWNMOGPQZMPG");
    tmp_tmp_msg_0_0.value.assign("GOYOICLGIYLWTTYPJGDUQBISHAALJQEVMPRWZ");
    tmp_tmp_msg_0_0.type = 57U;
    tmp_tmp_msg_0_0.access = 244U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("ABGLELMNEIKFFBAFGYQLJPRJJFPERZDUAESCFNBDHNVOSFOPDJHEKNAANRPHIFZSXLBHJOZATPAHGBDBHVXXKWSWZJUAPCUUVYAOMQUOKMOLVFQUICUNDJTJCG");
    IMC::PlanManeuver tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.maneuver_id.assign("UOKPUKDFPLRSTOCZJVMQFDQTGNMRMDGGFBHWVZSXLAXDZYQWEDCYXHWDFMGRCVJXODASSJOXPOEUKITCRNJZTYHOCEKNRYPJYLNVEWBDIZKUBLAIQGENFCJVBJNITSIXUDQGNBRCZNEGOBXCPLLCVFUWTRLWXQFJLBHUKHSEFT");
    IMC::Loiter tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.timeout = 6357U;
    tmp_tmp_tmp_msg_0_1_0.lat = 0.566228861408;
    tmp_tmp_tmp_msg_0_1_0.lon = 0.383021906369;
    tmp_tmp_tmp_msg_0_1_0.z = 0.270795805344;
    tmp_tmp_tmp_msg_0_1_0.z_units = 3U;
    tmp_tmp_tmp_msg_0_1_0.duration = 45087U;
    tmp_tmp_tmp_msg_0_1_0.speed = 0.990900494901;
    tmp_tmp_tmp_msg_0_1_0.speed_units = 139U;
    tmp_tmp_tmp_msg_0_1_0.type = 153U;
    tmp_tmp_tmp_msg_0_1_0.radius = 0.360505655628;
    tmp_tmp_tmp_msg_0_1_0.length = 0.743665402823;
    tmp_tmp_tmp_msg_0_1_0.bearing = 0.899671722377;
    tmp_tmp_tmp_msg_0_1_0.direction = 147U;
    tmp_tmp_tmp_msg_0_1_0.custom.assign("EHMTAFNKVBDVUTGAIRYVTGWKUBTWJJMZPWTXTXOZLXMWDXDGWAHJFRBFOBZANRPQEEDFQMZCTDOQQBGTLCIUFQMVKYDEHMUSPVRZYXYIMQALFANANRLHYSNTOGYCHSBEPJHHAIC");
    tmp_tmp_msg_0_1.data.set(tmp_tmp_tmp_msg_0_1_0);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_1);
    IMC::PlanTransition tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.source_man.assign("AWHYZKYSSWUWXCZMVQQQPRLAEFLBDHHYFZJEEUXBTRAXOQIFMGXBQUTOMHPHKRCDZPGIUXGFAXQBVLKUHSILHDJEPGPGNW");
    tmp_tmp_msg_0_2.dest_man.assign("WPNGCTEXLKYOFMAHMBAVDCKINHYLWUPAVJBDIQGJOGRRRSSMNUOCGWWHCXTEHJANPPXRBVJYAZREOEGNJMFIMKBAWQWAPXBTRWKJNVWHZBNXLNJVRAFBYITCLIFHTOIPXIAFSDYSBGUDZTZZXFTPXSCCEYPPSDNKLJJFNVOGQSMVLRPMMKQSDOHZOGUKEVCDM");
    tmp_tmp_msg_0_2.conditions.assign("MQPIPTRLCSBVAKPHUAPOAYDCEFBXWVMQOAKFIDGSJNNSGSXUUTZFTXBSWFONMLRHUDOIPBAZBMYMABVLICDMYJULQOBVGQKNCQKGVGREJYWWFAWVCDHPLSBXXQNKJIACDWGNRXNOJXWUHTIRTWJEOZETGMIZAYBVFRLHWYVZPSPGMSOPURKLLRJGNZQDEKRXZJUCHHTDSFZNYUKOYSTVLKP");
    IMC::LeakSimulation tmp_tmp_tmp_msg_0_2_0;
    tmp_tmp_tmp_msg_0_2_0.op = 20U;
    tmp_tmp_tmp_msg_0_2_0.entities.assign("HEDZJTHVXMKUEPKYKVNADU");
    tmp_tmp_msg_0_2.actions.push_back(tmp_tmp_tmp_msg_0_2_0);
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_2);
    IMC::PopUp tmp_tmp_msg_0_3;
    tmp_tmp_msg_0_3.timeout = 43825U;
    tmp_tmp_msg_0_3.lat = 0.151923184806;
    tmp_tmp_msg_0_3.lon = 0.700490015917;
    tmp_tmp_msg_0_3.z = 0.666583874324;
    tmp_tmp_msg_0_3.z_units = 167U;
    tmp_tmp_msg_0_3.speed = 0.621196412984;
    tmp_tmp_msg_0_3.speed_units = 231U;
    tmp_tmp_msg_0_3.duration = 8642U;
    tmp_tmp_msg_0_3.radius = 0.688127940828;
    tmp_tmp_msg_0_3.flags = 207U;
    tmp_tmp_msg_0_3.custom.assign("FINYLJOQYGYKXZFXHMOABAVEBJTWOHKYLMXEODZGVSYGINMFUARSAUHKRTUAKZGHKPECSDYXERFMBQDFGAGTCZQNLBILWZUIIPEDTRUSZURIPNBKHMVEHQACWYVRVCRCRGCBKXJVBUIQRAWGPJTNYTKNMIAEXKNLOFYJXEXCNIVCKZFLDPSSMBDTOWJFWQWGFLRUPMSDLPOHNTQDUDSAZHGNJMTVJQXPJDXWSLQOSBJZTHPCHBIVMYUOQFE");
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_3);
    IMC::Turbidity tmp_tmp_msg_0_4;
    tmp_tmp_msg_0_4.value = 0.275896708566;
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
    msg.setTimeStamp(0.689863043184);
    msg.setSource(12198U);
    msg.setSourceEntity(112U);
    msg.setDestination(30820U);
    msg.setDestinationEntity(184U);
    msg.state = 113U;
    msg.plan_id.assign("SUYGAMKOZICNOKSZUMEZLCTBGCRSRKPLVCPUGQSHZKTVDKUBYPCRQHBYRNAZXMJRGFSGEQNXIIDSUXOKECCDJLBDYRRPCCLYMGJDAGUBAWDTTUNNEZIVOFYTRZUFSNJAOCOZGFWTWOSLMVDTHA");
    msg.comm_level = 121U;

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
    msg.setTimeStamp(0.945225456365);
    msg.setSource(5335U);
    msg.setSourceEntity(104U);
    msg.setDestination(44997U);
    msg.setDestinationEntity(223U);
    msg.state = 194U;
    msg.plan_id.assign("KIDPTMFHETSLVUUDBBXKYCFOCZDJREFSQVAFIXRNRMJORQOZNMACDSTBEPWWDMLBONFZOUVBJQIJZPDLIATIDVKPXQRYSALRHSPUDKHEPMLSCNJEJLWELWZWQXGBTVIKFXLMWCDZCWMMYHGMWFLIPDORVYGBEETLOUKZOQGFTNAAJQKQRRYHCOOVANQGAFUEXHBMGGGCHXWZJYSYXPBVRHTNKUIYBJIUVSUCNNZHYIJKAPXCGVYPFWQT");
    msg.comm_level = 228U;

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
    msg.setTimeStamp(0.0274750430509);
    msg.setSource(58223U);
    msg.setSourceEntity(224U);
    msg.setDestination(39893U);
    msg.setDestinationEntity(53U);
    msg.state = 170U;
    msg.plan_id.assign("ETYZDBZUFOQIEUXJIYLMECGIFLJWHXAWCIZWMTRXEBETWHNODIIKAGJIAL");
    msg.comm_level = 30U;

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
    msg.setTimeStamp(0.825824059742);
    msg.setSource(4028U);
    msg.setSourceEntity(127U);
    msg.setDestination(32337U);
    msg.setDestinationEntity(51U);
    msg.type = 121U;
    msg.op = 117U;
    msg.request_id = 14814U;
    msg.plan_id.assign("MXHTAHGMMFSJVMUBCZKQXANDYNNAGFXAEIOLMTSUXCRSEDHZIGVETYOSYLHYUOWLNAPKXJQLQYBPOPTSHPVQQJUAIFGEMZRQOCPIRVNEADUYLFPBBWCRPZCLWODKJEZKLKQVWJEQRFITDWJFCVREROVGINBWQHGPBUVYCANZUFSVGJCHQXTYLWNWHKKTNUJIFB");
    IMC::FormState tmp_msg_0;
    tmp_msg_0.possimerr = 0.362506041683;
    tmp_msg_0.converg = 0.79459849646;
    tmp_msg_0.turbulence = 0.402291708607;
    tmp_msg_0.possimmon = 143U;
    tmp_msg_0.commmon = 185U;
    tmp_msg_0.convergmon = 126U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("SLIGIYCAAFUIQSJYEMTUDETXJOQJDVUMEUMXZOCZFAIGUWMNIOXVIOFHFZRDRNUNOHJFWQGTTRNSKBYPOKSMVWLMWYPRKLHBABGNFMXYCDWMLEEEXCDVLKULTBGOHADAGYRJPHHBTQWAFQFEJQYBCPSRMINREIIKHDTVPJVCTEDDJYXPOHZPRGLQLZVLZNNZHZQCUKVJRFQGYKEGLVASTWWRCUUFPIBZZSNCMKAOWGDQB");

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
    msg.setTimeStamp(0.129435805723);
    msg.setSource(24027U);
    msg.setSourceEntity(45U);
    msg.setDestination(53590U);
    msg.setDestinationEntity(192U);
    msg.type = 237U;
    msg.op = 33U;
    msg.request_id = 61307U;
    msg.plan_id.assign("GBYAURMHDPEUXPRDFSGNMZKUDMMHTUTLCUCXMOAAEEPWLLKJGLFRRAFBAQSLWXMVUSMBSIGFZTYHTQOBWXLNAQVBKMEKJXPCFYXWYYINQZJZQRLBRWTDIZOKNVPPFNUMLHHWHSCDOZESQAOJDETCDVZIJTTACIJPXOEOIVTYBYWGIUIMLWXBCNKNCVLYYZWHJXNAFVFKCJPRAQBIEDSQKHCPHQZRIGOOSNKOSKVGTUJVFHBSRWFPYDGEDX");
    IMC::Distance tmp_msg_0;
    tmp_msg_0.validity = 240U;
    IMC::BeamConfig tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.beam_width = 0.0035869517308;
    tmp_tmp_msg_0_0.beam_height = 0.371023800809;
    tmp_msg_0.beam_config.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.value = 0.336171388903;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("RQRGMIJGZTXTLXKXNGXVNJAWHSSOTEYHTBHIDYCPRYPVPYOBZQVTFXEAIYAEDBSKFCPPTCHBSGUUICZIPBKWTIJAJUKNCQXQOGDJKNVWKKFWCBOLJWDDTPFYZMYQJDARDBSBXJLJUOVIHXOHNLOOCWUARTQRCQWJWYMXEHZLSFONSZQEXCPZCRHIUMFQGRGQVKNDUEZGYFOFNTAVUEGSDILNWPFEVNSWMAKLLLMZRG");

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
    msg.setTimeStamp(0.303041904855);
    msg.setSource(52161U);
    msg.setSourceEntity(86U);
    msg.setDestination(35398U);
    msg.setDestinationEntity(59U);
    msg.type = 235U;
    msg.op = 28U;
    msg.request_id = 63375U;
    msg.plan_id.assign("QXRAVRWWYZADSCBETGRVSNEZXCWDPOWVXHNZTEPAUVBWOOKIDYFAPKYOMGERSMFKQHFRVHGNITKFULVQYBQHNXJHGCYPKWPDLDYLBRMBFGFCRPPSIWBHJEVQXVPSLYZIQQXLMKIMFEELTBFUZITBGOOAONXA");
    IMC::AutopilotMode tmp_msg_0;
    tmp_msg_0.autonomy = 157U;
    tmp_msg_0.mode.assign("SNSDNTMBPYBCIYFGCSFANKLFEFUKWWCTVHONXPBTTHMVGZGBCLSNUKMQPAUQRGMXANRJEGELJORJTYWPAUXBDLVWOBABKOKKNFFQHVNIKZIMFAYTZOMRCFXVESDXWTXCJDVHTGXOIRZALDHDPUFTKILRQJJHEZVVMWHUEUZPZBCWYIZODEU");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("ETSKXJAUPMCNJAWHTNMVWOYRMJQNTVLSQBXETGUPZJOWMKSSKNKLIUFHHDSUGPUWZIUZCBIYSXCJFBTSMBLQFVYEGYTOUHDCEXNGALLYIHPVIDGSDAKGHLNHBIPKBWRPGGIEQCMMVQDZUC");

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
    msg.setTimeStamp(0.36966837044);
    msg.setSource(46039U);
    msg.setSourceEntity(109U);
    msg.setDestination(2360U);
    msg.setDestinationEntity(25U);
    msg.plan_count = 3098U;
    msg.plan_size = 3333699998U;
    msg.change_time = 0.228836107542;
    msg.change_sid = 22786U;
    msg.change_sname.assign("TCKLAXUHUNEGTXQFZVZDAXPNVHSQPDNDYBWRINOZWEMUPZLKMRDRRQBRCGBEGKLWOFLQCPPHDYJSJMSAKLRPAANMTRHHYAUWDQGFTVEVKCUSXPDFJNGHVCNSXTGZELJGTWMMBQXRTPKCCBKFIKUODGTIWOIOAHBSVZJAQECYIIBWXVIUTBSYOZRVOSSEDNNTAIEMHYLVFXXAE");
    const char tmp_msg_0[] = {-77, 12, -61, -50, 117, 120, -28, -56, -35, 118, 80, 107, 7, 49, -13, -61, -1, -39, 28, -55, 56, 107, 95, 97, -59, 19, -113, 68, -27, -125, -102, -56, 34, 68, 28, -112, 22, -51, -10, 29, 22, -128, 37, -82, 42, 51, 82, -113, -11, 67, -85, -59, -63, 63, 16, -73, -24, 46, -49, -62, -40, -102, -65, 45, 123, -94, 70, 5, -59, 51, -95, -70, 16, -15, -51, 96, 29, -34, -16, -109, 92, 104, 37, -16, 23, 36, -75, 90, 73, -46, -18, 32, 87, 110, 43, 90, 28, 57, 114, 60, 110, -4, 37, 86, -17, -113, -122, 95, -120, 124, -25, -12, -86, -56, 5, -117, 31, -102, 79, 34, 115, -88, 40, -53, -49, -126, -124, 49, -65, 48, 7, 21, -99, 34, -71, -113, 73, 96, -120, 43, -70, -108, 110, 7, 18, 111, -60, -44, 70, -128, 126, -68, 88, -12, -87, 16, -81, -65, -1, -79, -32, 37, 16, -20, -38, -33, 74, 27, 126, -33, 38, 39, -93, -105, 72, 53, -66, 68, 78, -39, -82, 106, 28, -72, 11, 45, 91, -115, -24, 19, 51, -74, 104, -4, -91, 66, 74, -5, 39, -108, 60, 117, -125, -70, -30, 55, -16, -90, 124, -78, -106, -23, -5, -37, -57, -22, -55, 49, -124, 30, -116, -34, 61, 101, -79, 97, -27, 37, 13, 79, -65, 96};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("EDMSXWOVCZGMPIVHMVZKLICXNNRTPCHGSQMVAUUQQQYQMHANCSBWYMQEANPSTNPDIJQRLBYCGTTPLHBGADPUYBNFVJXOGUZBTROFPHVKAKWIFZUDXDYJRPKSEIXDVKCHSGLQLTRQHBYFBEDLLJFLIDAUUEFKXJROYVNTMIISWRXOJGEZZZDWXKTTQNBFIEGJOUZLAW");
    tmp_msg_1.plan_size = 22015U;
    tmp_msg_1.change_time = 0.664751621953;
    tmp_msg_1.change_sid = 2318U;
    tmp_msg_1.change_sname.assign("JBZGBEFQMTLJXMPCKWNIBQTTCEYVMBEGJOQJVQERCRYTSJFAGTVRFDUHSEXRKXNRIOUBHXLLYKXMPPARLFAKYKOQZJNOFGTDHTAOUYDMXVWVBEZENJKNMWZZVHDFBNTGGMRYQNRHAUYNDASEUZPGLRVDWHHDXDQIDNKHBLLAWMASCXHQAUVJW");
    const char tmp_tmp_msg_1_0[] = {99, -53, 77, -108, 23, -105, -17, 124, -6, -53, 83, -92, 53, 5, -49, -32, 4, -39, 27, 47, 50, -71, -99, -70, 33, 31, 108, -119, -17, -122, -26, -121, -76, -1, 50, 80, 16, -125, -122, -19, 36, 116, 20, 59, 55, 50, -65, -76, 14, 104, -15, 11, 73, -72, -120, -116, -66, 100, 33, 26, -61, -62, 55, -77, -88, -88, -74, -15, 91, 11, 41, -58, 64, -100, 44, 93, 51, 126, -30, 87, -113, 99, 48, -22, -114, -1, 107, 7, -106, -116, -5, -32, 33, -53, 108, 110, 105, 103, -47, -102, 98, -90, 58, -88, 77, -64, 10, 24, -113, -107, -1, 9, -87, 121, 65, -112, -113, 113, 31, 98, -58, -99, -56, -1, -76, 95, -90, -126, 36};
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
    msg.setTimeStamp(0.367334539116);
    msg.setSource(56524U);
    msg.setSourceEntity(19U);
    msg.setDestination(61168U);
    msg.setDestinationEntity(174U);
    msg.plan_count = 58157U;
    msg.plan_size = 423926882U;
    msg.change_time = 0.190217115275;
    msg.change_sid = 9061U;
    msg.change_sname.assign("KGAKZHXKYQPAYUODFLBJRKXQNRZUAJSAETNEEBWOAYKPJJSLIVOKRZOSDGCSYFKYNLJGANVDXWBYMTGHIZOHKYIMVLPWPLCNJLWEGCVRTTQBLHHQZVODIWCRRWUFUUBVUQNIHUVNKCMXOJGPBLTTEREBHCQNDIDMPJKVDXDBTOQIRZPHXMLRTFJPQSAFAYFZMMTWQOSSSXWNQMXDWIGYYDLVUEUOGCZEV");
    const char tmp_msg_0[] = {-126, 35, 10, -105, 96, 63, 74, 29, -58, 112, -15, 109, 99, -66, 117, 32, 40, -36, 12, -20, 33, 37, 15, 35, 54, -77, -38, -8, 23, -9, 105, 16, -58, -65, 87, -47};
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
    msg.setTimeStamp(0.593488944325);
    msg.setSource(1040U);
    msg.setSourceEntity(67U);
    msg.setDestination(64389U);
    msg.setDestinationEntity(229U);
    msg.plan_count = 952U;
    msg.plan_size = 2636432323U;
    msg.change_time = 0.883425288909;
    msg.change_sid = 8312U;
    msg.change_sname.assign("FLYTBYGHKWIFTYGDKVOWFQUSKZKIBSVMBPOJBNBAMDLWGXLOSNDRPOHPMXHDFNUQXNBJUGWFOEIACNTRTQBCZHFEFJOTJMAPHZFAWPZYXNYAHSSGGJFRZUTZBVKIPZZOPMLRWHUEYXKLHSMCNTAZQZKTIXVYEVDJUUJYISQGABOWOXDTXLRGNEAASMVCILXT");
    const char tmp_msg_0[] = {75, 99, -19, -37, 41, -68, 79, 81, -48, -23, 106, -39, -112, -13, -54, -31, -38, 104, 59, 124, -86, 34, 25, 12, 115, 0, 94, -123, -68, -88, -115};
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
    msg.setTimeStamp(0.721232706622);
    msg.setSource(45668U);
    msg.setSourceEntity(155U);
    msg.setDestination(6248U);
    msg.setDestinationEntity(163U);
    msg.plan_id.assign("RMKYIQZUMQEILAJOMJKCBZICXNDNQVLGLUGSFXTRKWCDPNTYDBPNXFPJONHEGGQAJJKENBSTGWMADSELBFMFEPHUDTYNCOZU");
    msg.plan_size = 2904U;
    msg.change_time = 0.813821097055;
    msg.change_sid = 48493U;
    msg.change_sname.assign("YNARMBHIKKRWMSCLNSRUWSDKSYXWJDTBEBLGCIOVWRPQUZSUNPFHLRWMAJRYRFTVJCUDJLFWNHYQZUVXYOTGXLDEVXKDTAYFDEPQXUKEDTJHBHBZZAQZTMEWKH");
    const char tmp_msg_0[] = {-69, 98, -79, 13, 122, -47, -32, 104, -4, 95, 0, -127, -92, -54, -90, -115, 74, -93, -102, 47, 77, 41, -1, 94, -99, 41, 100, -97, 3, -121, -45, -28, 41, 93, 84, -37, -15, 112, 40, 98, 33, -109, 84, -14, 70, 1, -21, -15, 67, 54, 73, 92, -26, 52, 10, -80, -118, 67, -75, -58, 22, 104, -13, 22, 79, -103, 69, -68, -107, -111, 1, 100, 15, 34, -22, -78, -96, 28, -112, 12, -79, -21, -79, 56, 71, 44, -101, 122, 16, 7, 114, -60, 77, -21, -86, -98, 100, 84, -55, 106, -123, -49, -97, 73, 125, 122, 56, 55, 65, -74, 33, -29, -61, 47, -13, -77, 45, 85, -7, -7, 48, 55, 120, -24, 115, 113, 80, -34, -82, -81, -117, -105, -116, -70, 26, 102, -52, -122, 23};
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
    msg.setTimeStamp(0.289141237104);
    msg.setSource(56577U);
    msg.setSourceEntity(18U);
    msg.setDestination(57518U);
    msg.setDestinationEntity(214U);
    msg.plan_id.assign("DEYODCPTGZTGXVTARNRWNPJFLECKLMRBQUOUMDXSPWEWSIZVRTWAUJYOUDVNFGYYSIJBQYIEGB");
    msg.plan_size = 43758U;
    msg.change_time = 0.794126044747;
    msg.change_sid = 57022U;
    msg.change_sname.assign("IQZKLHKPPIKMSJCRBEZNJUOIWDXNAIAFCHSKQFPJFGSXDOFNLGVCEWJXYTFRGVVZBVBEBOTWVJYLVBRHUCI");
    const char tmp_msg_0[] = {-74, 18, -57, -3, 24, 5, 31, 104, 121, 99, -124, -21, 106, 57, 106, -12, 53, 38, 75, 45, 95, -103, -104, -127, -81};
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
    msg.setTimeStamp(0.931003106843);
    msg.setSource(15437U);
    msg.setSourceEntity(41U);
    msg.setDestination(46U);
    msg.setDestinationEntity(251U);
    msg.plan_id.assign("YZINOTWXZWF");
    msg.plan_size = 46891U;
    msg.change_time = 0.937462076177;
    msg.change_sid = 41007U;
    msg.change_sname.assign("KZKYHBWVIZACTZELBEKYAJCIEWGXVDCVYRIKYKLXVVGJICJAMYMCJOWEPLJULIWVGOEZUDARGUXLMWEPURGQXNDAZRQJLTXNIBYFMHQJRLGUBPVYQHVPRHFOLWAFPDXCPHOTCMHDNOKIBNOXYDWSFBNSUHFIDHVYNMZTYKFFEXAJ");
    const char tmp_msg_0[] = {-128, -32, -6, 53, 118, -65, -90, -54, 47, 8, -68, 18, -55, -121, 29, 81, 93, -114, 69, -32, 111, 75, -49, -54, -78, 93, 99, -105, 107, 119, 31, -106, -87, 88, 84, -50, 20, -90, -117, -114, -100, 52, 31, 49, -52, 113, 84, 40, 111, -98, -28, -122, -126, 118, -103, -20, 90, 22, -63, 3, -118, 107, 27, -61, -82, -61, 65, 122, 91, 21, 71, -127, 12, -35, -105, -49, 2, -70, -47, -31, -99, -120, 84, 94, 45, -59, -116, 51, -8, 29, -51, 100, 106, 65, -80, 35, -36, -74, -23, -65, 107, 17, 114, 74, 77, -112, -76, -89, -90, -60, 75, 87, -103, -49, 35, -46, 5, 94, -15, -100, 104, 33, -68, -55, -86, -117, 114, 112, -116, -56, 89, -54, 92, -25, 126, -79, 99, -36, -50, -32, 72, 108, -35, 83, 18, 58, 41, 52, -100, -116, -82, 72, -1, -9, 117, 2, -7, -9, -39, -26, -64, -59, 17, -8, 91, 11, 24, 17, 106, -104, 55, 38, -48, -10, -77, -76, -26, 124, 27, -41, 124, 75, 49, 65, -60, 91, -78, -45, 11, 16, -79, -56, -73, -1, 119, -69, -33, 125, -46, -115, -36, -87, -99, -115, -124, 83, 62, -81, 74, 122, 0, -25, 13, -53, -90, -46, 125, 89, -97};
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
    msg.setTimeStamp(0.50842051919);
    msg.setSource(30465U);
    msg.setSourceEntity(55U);
    msg.setDestination(38920U);
    msg.setDestinationEntity(246U);
    msg.type = 142U;
    msg.op = 221U;
    msg.request_id = 37772U;
    msg.plan_id.assign("DJJPNQIAKZDYKFQGUSOSNGRNLOYAWFMZUHLIAZYIMLVNKJXWQHINIFJBCJXWWLRPYEBSEUBBUZGRYOFAQMGUVJVZXZSCTTRVVAKLVCNXANZDGLYUJLWXRHLDLPWUIRHREZHOSXKBSVQKPCDTAOQRFFIGPTETSWQVDJKIJUCMMCGXCLTWBPIMEED");
    msg.flags = 22621U;
    IMC::PowerOperation tmp_msg_0;
    tmp_msg_0.op = 242U;
    tmp_msg_0.time_remain = 0.605555509814;
    tmp_msg_0.sched_time = 0.226221819759;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("EFGXCKDOBUVJYNPIYVQRLHWLNGLKQPKJEKSTCCYQFFTOPHGRMDIRATKJOPFVKUCMCNFFWDYPOGKETHSWSBGJJWEVHRIBGLVTCMIRBCWALLODQXDVAQPTBCTUBFERVEYLSFCLGVOZRUJPULBTIXDZTJUFN");

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
    msg.setTimeStamp(0.621893360441);
    msg.setSource(60597U);
    msg.setSourceEntity(248U);
    msg.setDestination(41264U);
    msg.setDestinationEntity(135U);
    msg.type = 60U;
    msg.op = 6U;
    msg.request_id = 10304U;
    msg.plan_id.assign("GANIMRGQPEPRQBEJTEAMLGZKJHSSHYHEZFUZNXJGYTIJ");
    msg.flags = 23364U;
    IMC::LblEstimate tmp_msg_0;
    IMC::LblBeacon tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.beacon.assign("YJIXYOBNAPRDZNFHVWTLKUGBVDNHPCSUZWRNDXAYKKZFQDROQJYZMMW");
    tmp_tmp_msg_0_0.lat = 0.939268891488;
    tmp_tmp_msg_0_0.lon = 0.830441477541;
    tmp_tmp_msg_0_0.depth = 0.658722896226;
    tmp_tmp_msg_0_0.query_channel = 37U;
    tmp_tmp_msg_0_0.reply_channel = 214U;
    tmp_tmp_msg_0_0.transponder_delay = 84U;
    tmp_msg_0.beacon.set(tmp_tmp_msg_0_0);
    tmp_msg_0.x = 0.759460348135;
    tmp_msg_0.y = 0.188209083655;
    tmp_msg_0.var_x = 0.892706716709;
    tmp_msg_0.var_y = 0.683491279925;
    tmp_msg_0.distance = 0.258745545959;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("XVHFUWRBSWNLUKJFDCGMIQZCHXLIBSKHSIJZWAQEQIPTQWQPRAGXWNNTWERDTXIN");

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
    msg.setTimeStamp(0.792709225513);
    msg.setSource(56289U);
    msg.setSourceEntity(233U);
    msg.setDestination(10526U);
    msg.setDestinationEntity(235U);
    msg.type = 217U;
    msg.op = 219U;
    msg.request_id = 61375U;
    msg.plan_id.assign("VBJNVHIGXSYNDHDWMTGPBVHXZYAZNLOUIOUFDFANBRYWTVSRJSYTUMGUUUEPNRPAMKDHJGORFCVMYMCQPKACKOKSSUQVTXCWKM");
    msg.flags = 35530U;
    IMC::TransmissionStatus tmp_msg_0;
    tmp_msg_0.req_id = 33120U;
    tmp_msg_0.status = 113U;
    tmp_msg_0.range = 0.850833169209;
    tmp_msg_0.info.assign("IAZDFEDINYEVXMLPBKHSXTLFZALGSXAYHPJJUAYLJKKCYJGFRCBN");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("MCDLVSZTHGVTBUMSGRLZTWQZHKLUUERCNKWHREQTYUPSCNLNHBAGPMIDCYCDAIGXWHXFLDWEQ");

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
    msg.setTimeStamp(0.0435551922604);
    msg.setSource(58959U);
    msg.setSourceEntity(206U);
    msg.setDestination(40927U);
    msg.setDestinationEntity(80U);
    msg.state = 149U;
    msg.plan_id.assign("IQYCVJDHNZEUADLFHMNOJOTIRDTLZMAPADEMWIMOCOOBCWUSEJBIMLMQYBWSQVORVZWZJUXIXKLBXRPEVEMPVIYXGTKUHCZFLFDUGTDWQFPBTSPZKXEG");
    msg.plan_eta = -215973816;
    msg.plan_progress = 0.439253491858;
    msg.man_id.assign("GIQTAWPAHKQCOFEVIRRSPZIACNBIVBOJFFSJU");
    msg.man_type = 28909U;
    msg.man_eta = 415506458;
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
    msg.setTimeStamp(0.811252753666);
    msg.setSource(29376U);
    msg.setSourceEntity(51U);
    msg.setDestination(50099U);
    msg.setDestinationEntity(159U);
    msg.state = 227U;
    msg.plan_id.assign("ISQKTSKKADYIAOLVYASTUWXSAYIRXRFILHJSWPHDHORFMGRZMGLETWEZPUQGSQZBKLAFMIZHYTWCEJXEQFFNTYNNCAJNMVCNSEFPBPJGEOCIZHRWVORPIWXZBVXOEFJIUXEYGQPCJLUKQYEBXJPPQGTHTLVFRPGDNUBUMZVYZWJCWOYTGMDVHNCGDZNBQQDKOZKAWUDSSRJTXOLMBHTRVXHDHKMQ");
    msg.plan_eta = 1594571736;
    msg.plan_progress = 0.721971851235;
    msg.man_id.assign("EYOUFVTQOLE");
    msg.man_type = 47219U;
    msg.man_eta = -1602918463;
    msg.last_outcome = 93U;

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
    msg.setTimeStamp(0.220001387539);
    msg.setSource(49294U);
    msg.setSourceEntity(213U);
    msg.setDestination(35527U);
    msg.setDestinationEntity(224U);
    msg.state = 232U;
    msg.plan_id.assign("UFZSIEDVNYVGXCITCXHCWPURZTIJXSJYIEZJNKYPINUGJWKZNATRPDQQBRACBFISPYTSSTNBVXPMZGBJWOBLPXWLBDMYNUCQDLOVAMWOGXOVOIEZEYRUVHLHIVJOHSPKDWKRZGMCCOWUOFNLJDYGRLTLEUIHZTQJTPYKNIKWDNQAQFPFHQBFAGH");
    msg.plan_eta = 1110950974;
    msg.plan_progress = 0.455411419146;
    msg.man_id.assign("QFWNEMSFJLBUBMREHEOKFYDQRINHZCONTGGYCGVBKQAWMUWPNGJAETGTLIAXUNXPUEDFNSSCYIZRHKDVJZDABWDZLIWKCPEODUKKBOSHODFFYQRMOVEBFWXXKUMWZLNORPKPLVFJUSN");
    msg.man_type = 10844U;
    msg.man_eta = 1685882609;
    msg.last_outcome = 226U;

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
    msg.setTimeStamp(0.398702109703);
    msg.setSource(34821U);
    msg.setSourceEntity(90U);
    msg.setDestination(54736U);
    msg.setDestinationEntity(128U);
    msg.name.assign("FNGOPXMAODDXGHVKOPSKBXMTRKDVFLSBEBTEOUHNQTCDUDTTHXMJKLMRGAOXUKPFTKCUYVGBYJFQKXABWZGZMCNVWG");
    msg.value.assign("OPMPVHSLRYEWAXWLPUXJKCTZDXTBVXNWYICDUTAIQDLPXZAKFZJOSESHBEQRDIIOVHGIFQIGGKNZYNAKRMCKOPZNQLMUIXVCKWLEDZRNYUORXSLIKFRTSBFOLFGGMUBSHCJMRTPJQJOSFOSTCQACEEYYCUNIYZBWTEVGWEFQNMUJJVLJBGDNOKEFZLHHIRUQBRYBTOAVFWXZYSVNGZGPNAQJPWUMPVTEHDFRCHMGDCMXJVL");
    msg.type = 99U;
    msg.access = 245U;

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
    msg.setTimeStamp(0.770035867072);
    msg.setSource(21392U);
    msg.setSourceEntity(189U);
    msg.setDestination(64060U);
    msg.setDestinationEntity(88U);
    msg.name.assign("YUXDFXUWVDXAOINOJMOTKOYHBKKWKPCMCLQFXHZHQTGLEENVSBAOIVFQVXIBJAWVFBFFOZVROQUPGHDXDCSEQVLJCHZTYAGKHWYKGQEIMUCAMXNFCQPUWARRPAZAIMPDPLJGYNBZBUTTLGPPONWWZSJWPRNCLJFKSABNWDRZQQMGDXWDJFXRQHBNHILZCYGKBRTHDYEMXZVTFSUYEBNGVJISITMNOLMPYEGDRJRMSU");
    msg.value.assign("QIDTLTUHATBYRXCQFUONNHSNKYOWSKWMKCWYRMDXJUGBVGKSQPDVDPDPBOOTAZFOD");
    msg.type = 234U;
    msg.access = 133U;

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
    msg.setTimeStamp(0.790593002743);
    msg.setSource(39195U);
    msg.setSourceEntity(132U);
    msg.setDestination(15226U);
    msg.setDestinationEntity(242U);
    msg.name.assign("BZAMJFPKZHPHOXXBQYHGQDXRPCJRXVIIGKRZPHWQLEDWDMQLTRUUPCWCSQXBSTRITWAYQSJWNVINCYUBAEANDCMEJSQVWOYUKJMBERXZHSGBAFIZHFPOHYVAUVJDSLZTKKUVFZNQLFLFGFYWFCWGUYCMLOTMDMVTGOBZNCXEIMRCPONXMLYVLAOSYDFEKNDFRPBWEENBHGCTRTTOKQSNGJUSUIPETVXRWNABAEHIGUZVJIYLIJLDKKO");
    msg.value.assign("NUGMJDUYDEAHYENKHBKWGLSUZSOACSZLVZBAZVIHNAWPTMRNRKBXPSUUYNXQGECREVIFNNPWRLPBIWVAYZLLMRXHWDSTLWJKLKQFFYLZPKCENKFDDUFDZIGIYIYVLKYHWJCOVTGQDOPWCXOUDQUXTETBVEAMSS");
    msg.type = 43U;
    msg.access = 143U;

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
    msg.setTimeStamp(0.387666665608);
    msg.setSource(20717U);
    msg.setSourceEntity(196U);
    msg.setDestination(24198U);
    msg.setDestinationEntity(18U);
    msg.cmd = 66U;
    msg.op = 36U;
    msg.plan_id.assign("ZIBPDKCXBNGVMVYSAFHNKOWVJHWEWGHQURDFUCGKMQBRXXSIASXOUGOYPPTTRMICHQRNNUVDAJECOWNULRROIFHQOTPLLLMMSTVBVECDJTEEFNWFZIWDEJPEYMLSMCZAWQLUTGHNGMANMIQLBJABVVYXXTUSFZ");
    msg.params.assign("PRMKYNLNHVCXLBPISLHTRYHDBARXWKUURNZUQTZQCQYIAOVOWZVOBUFMDVWJDUMFYLXMULBDWXQUDIXFMEIDZCGGHNFJFYGY");

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
    msg.setTimeStamp(0.325760005735);
    msg.setSource(50394U);
    msg.setSourceEntity(137U);
    msg.setDestination(52651U);
    msg.setDestinationEntity(218U);
    msg.cmd = 177U;
    msg.op = 13U;
    msg.plan_id.assign("EJEMQWMYQGOJGGIBKCTEOCMBNOKROSOVFWRVGZVFJBYAGHTTXFIDLQXMFISUWAGNDQIVCDTAWSPATZNOICZRIJBXZEEVUIDPHPMFTODPZYDSHHRCGLTYZUYJBOKCIQJSMEUAYKUPKPKIKQAWEDNXZOFDMJCHLLYWPNOMZTLXUNRYXAHLJXVWSSQEKBW");
    msg.params.assign("QCLSWWEEXIRMMSDZEHVFMDKVAIHNVWVBXKJAUADEXMAGMSEDTMIXPPXGOIITCHXFXHIZAGNHRYZCSPYWCJEYZOFTKTVFIORZNUSWPMKJLKBWDFLN");

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
    msg.setTimeStamp(0.264883294337);
    msg.setSource(50362U);
    msg.setSourceEntity(26U);
    msg.setDestination(31816U);
    msg.setDestinationEntity(42U);
    msg.cmd = 110U;
    msg.op = 150U;
    msg.plan_id.assign("CCQENFJGUURPZQGBILSVTZBDXAUMPMTBMZVZHIQEMDVTKBWQXDEKRPCJTZASFMCHINNCIXGNOHTAQPH");
    msg.params.assign("TVTKIXEZVFYUXNYXRDPCSHTEQKDXYPBPAGUDIQKVDHCHYRWTVMKWMDIAYUCKSRXGDQKKGWVZCNGRFLJRGCTUXIEEMCGWLWZEMXMHQLHQEIPYDKHZOJZGBSQZJUFWOIAHJSTBEDAVZVGEEHUXOAWCKVLSSRPMTYYPLUMYIQMBNIBXQROZJPRNBYBMCJMFZLFBTHOEDBKDAPNLGOAGVFFJUJWNQWOUS");

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
    msg.setTimeStamp(0.929098640428);
    msg.setSource(23219U);
    msg.setSourceEntity(253U);
    msg.setDestination(45106U);
    msg.setDestinationEntity(195U);
    msg.group_name.assign("AZKJOBVWSHQYBKLKZRLKXRLFAXHYEIGUBICFPT");
    msg.op = 133U;
    msg.lat = 0.124806385532;
    msg.lon = 0.875914946935;
    msg.height = 0.8280858262;
    msg.x = 0.955656442577;
    msg.y = 0.693603265435;
    msg.z = 0.430146413815;
    msg.phi = 0.68048998791;
    msg.theta = 0.966783638098;
    msg.psi = 0.823007283474;
    msg.vx = 0.102954394181;
    msg.vy = 0.240091539501;
    msg.vz = 0.87926586195;
    msg.p = 0.289254063927;
    msg.q = 0.707761215643;
    msg.r = 0.887803852512;
    msg.svx = 0.639971962228;
    msg.svy = 0.221253301006;
    msg.svz = 0.105429827575;

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
    msg.setTimeStamp(0.58320102719);
    msg.setSource(10860U);
    msg.setSourceEntity(143U);
    msg.setDestination(58897U);
    msg.setDestinationEntity(31U);
    msg.group_name.assign("MMTRPRQUQCALVTGUEOOMYKFRTN");
    msg.op = 46U;
    msg.lat = 0.729050619004;
    msg.lon = 0.629154114049;
    msg.height = 0.735045436637;
    msg.x = 0.741109743768;
    msg.y = 0.0768326308115;
    msg.z = 0.598236021889;
    msg.phi = 0.622101510986;
    msg.theta = 0.982306409001;
    msg.psi = 0.0676406147304;
    msg.vx = 0.962715824614;
    msg.vy = 0.244408765348;
    msg.vz = 0.83589407942;
    msg.p = 0.0935313252416;
    msg.q = 0.753247210604;
    msg.r = 0.710144421025;
    msg.svx = 0.90567511907;
    msg.svy = 0.43735137961;
    msg.svz = 0.485531189068;

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
    msg.setTimeStamp(0.484966083051);
    msg.setSource(28174U);
    msg.setSourceEntity(50U);
    msg.setDestination(18377U);
    msg.setDestinationEntity(197U);
    msg.group_name.assign("ZBXMKUUVQIWQTUECIIKSVGQSSFMYDDXIZSKXFZCYWONDDKQRXEAYAJJLYKHOYGRHDNTPGHYTLVOHXNPGTHAJRWEMAFLHPTZGEVLFXAINPLNWUJIGELDCFWVFVHFUHTPRVBYIECN");
    msg.op = 201U;
    msg.lat = 0.64844448106;
    msg.lon = 0.9161541169;
    msg.height = 0.616758300181;
    msg.x = 0.97840966442;
    msg.y = 0.665079206198;
    msg.z = 0.84919504422;
    msg.phi = 0.429204488326;
    msg.theta = 0.909251249296;
    msg.psi = 0.337140798511;
    msg.vx = 0.319020890541;
    msg.vy = 0.730614578709;
    msg.vz = 0.519486861325;
    msg.p = 0.204947165422;
    msg.q = 0.4926264039;
    msg.r = 0.819347902316;
    msg.svx = 0.843498542753;
    msg.svy = 0.455211092711;
    msg.svz = 0.0701581078494;

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
    msg.setTimeStamp(0.289697906309);
    msg.setSource(47937U);
    msg.setSourceEntity(167U);
    msg.setDestination(39439U);
    msg.setDestinationEntity(130U);
    msg.plan_id.assign("TNBLWNGOWEHTIQLHRNKCHYUTTIFEATZZHLFITSJKHI");
    msg.type = 158U;
    msg.properties = 203U;
    msg.durations.assign("RNKZVZWXNKAQFLCJHSRAACOBUTGSNEDYEBZXKKTYOHPENYOUUJLDXFHGBSLTWVWXJWHAFKARNXQIEMRYGGMEPDMJWCYBGLUOQPLGPXYZRSHJTCDGOSXOFSUBHFZNETDCCDSCICUUDWZQITARTJEV");
    msg.distances.assign("UCRNMHNOZFXHZKOJGBHFHTWBZLNEAYQZKIFXUESHQXLUWCUXWNTABRUDRBYLZLFAQMJOUCIRSCLPSZRJTEBVQDDSYTVZVGRWSYKZKRWHUFNQIOQBDGLUPARBGACIBLCOORDBHKPFPCTTPMLWZQJKWVEOFXYKJWKFESPGVOS");
    msg.actions.assign("NCPPXWNJCQDYGHBWNTMGQHGRESZNABSOEKFJHHNFGLUHLGECYLVILNOFAFDHVJKWCXYVNTRMOIXDOBBUTDMSURQUSIQZSUJKYTDRRIYLFPVCQQRMVQXLIDACICLWZPWOYIDHRKGCLOVHSJJGOUMARFSNEXEYZ");
    msg.fuel.assign("JNVQVLUYORAUTFYHMCGVWUKLXKQKQXFECONCHFPIFEBDHYKMXTWSQYXYSIXTIJHPISFLZCGRJKFSGNMTYFYPWIKJCEMPENQHJESUYACMPRFPAGIRBUNMNBLSRDVJDDLXVNVNIJDMOJPZWOFHXSYMBUSJOHBNIU");

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
    msg.setTimeStamp(0.919129595775);
    msg.setSource(17782U);
    msg.setSourceEntity(229U);
    msg.setDestination(51093U);
    msg.setDestinationEntity(86U);
    msg.plan_id.assign("QDBSRRNZIWLRJMONAEHMVVJJEHRQHMAJFYTAFZJTOFRVZHQVIPPKAZQHPBMEESCYSRXSZZWHXKNCTWJGOGYHGILSMYPAKWXDVZWBDCCDKVCNBRBWBSISIYYUOUXLLQMGTSNOGMMDAFUZYLBXILUYEQDDGNNUJCFKFVOOECCIWUKOYJWPYWIFMBTUDLQTEOH");
    msg.type = 156U;
    msg.properties = 217U;
    msg.durations.assign("SMOTFYNBCAOWLSHXTZGQAFZGGAMMKGQAFICFKWLDHJMENHVQNQUROJESFFVMWCNIGVCNUFYXPEVFDKOPBHBDKROKKTPAWIDOHLNMOUZPPAGQJILSKJKXUUHWTWLGRRMGEDZUVXJYWSCVBCOYIYMHYATLTARPYPBBJRSHLYOLTJSCNUGQDCLBVUXXURAAZYPNZIPSDWMZCQPZNBLQEXREWJRXIEDJVEDHBUIFEIEZYXVTMOTQBGKTIQSS");
    msg.distances.assign("BANEWBATSQXOBOPIYVSIDWBJTFJMXHVRCYGMPCEFASURZFUCMHVSZVQTGHLQHABNZMDOXHOAKDWXJLSZIHQXGOHYPUACYPJUUQLRJQDKSUAICSKCRLNWELNLFMZWACYPXMISQEYGJZXVHVDGRRWMTKJBEFTYETPFYVWLKOOLTWQZKPULZXNI");
    msg.actions.assign("OFGFLAMKUZISBZBGCJIECALRXVHMYLFAZXGWPXERHXXNOVVBHXKMRSYWUDZYYOJPLEQLXLZVZCMCIIOBASCGDMKATTMPHGKIYMPOPFJNXLZDBQFQGGHGIUKYOHUNQEDJRUDNBVUPOKXYQLYCMPHQTSTGTCJOAIAPUWNVFRNKORUBEJXSNTRSPSTJWMEJTKOZGZDRNVZSYDFIEQCWRFQWSWTFER");
    msg.fuel.assign("WQVDDTPHQLHTRHETUTNSMMKKXBOPHQERFJAGMIKMUSQNFCFCGYJDURFJUDYCZQLEZLWZUOJFKNHGBBLYIOYDZFICIXAGYOGOTGIYPLWUWAXXMRAIUIPCSZDZGANNEGSFFTLBAELABCZWJYPYURWXRQVXVXQOHGGRLNVHZMVVKHNMEVKJSRPBZMQLFKXXQOAHCNUPTQHDSPWRWFEWJATKMECSDSWNTCIASEVDJYUORBBPOIEPDISJOTJKCZB");

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
    msg.setTimeStamp(0.651391560693);
    msg.setSource(1566U);
    msg.setSourceEntity(169U);
    msg.setDestination(9866U);
    msg.setDestinationEntity(235U);
    msg.plan_id.assign("XTEFZHGHTLULGJQIGQFAXVIENTXTYSSCPPIGAZMKBWJBHUHLZFRPBFNNNSOPCNGYJKAUXBWFTSYLEPMVCXDT");
    msg.type = 52U;
    msg.properties = 82U;
    msg.durations.assign("OXEZAQUSXNWPQWVAHVFKSYGOYJIEPQBKEIFACYBJPPYVEXXBLNPGCEDPIRZHRDCOWMWHSGVITT");
    msg.distances.assign("XAEFXDQOSMAWGVHKPBNKANXEXNAVHSGZICOMG");
    msg.actions.assign("JICQKDBRIWGMAFZIVQTYUIYJXPOJMFYWHPYBXGBAAXZMQYXHZWFKPXDETVDMNESMIXVOGBLCAJBHYPTYRVZJNFWSLHCHCWJUUUZHAUHANMDWPXMHQTZDKPRWKFCPSQGZEROCLUKLTTELARFEPGLBCDBHSDTMAGJTAOVCYVFDUNJXTSEVKGWBOIRQNGODSETSKXBYEKLEOGUYSWIJCZZFFNLSXMOVRNKVSQVCQBHIPRNPRNLDIMIJUEUFARZNQ");
    msg.fuel.assign("QNJFTVSHFOHQRWIGKVSHRWJIDMIOUOXYDDMCJCNHPQBXWQRQMBNQFIRYHHCMFSBLMDMVLZDZWRURGIUCASJPVXJJYLSYFLYNALYEUTUDOTZSOIJYQJECRGDHTHF");

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
    msg.setTimeStamp(0.251603050013);
    msg.setSource(26537U);
    msg.setSourceEntity(121U);
    msg.setDestination(51685U);
    msg.setDestinationEntity(112U);
    msg.lat = 0.925122203092;
    msg.lon = 0.409531779077;
    msg.depth = 0.827444326651;
    msg.roll = 0.0169688133944;
    msg.pitch = 0.163532940192;
    msg.yaw = 0.932458785295;
    msg.rcp_time = 0.9502021415;
    msg.sid.assign("NACZHFUEWPWKBFLUDQFTBBSPPOWVRZUOKQKTJZJGSXLIAMZGAAVTYDCMEAZQMYYZKKJLJNXMVLHMVDEXIPLBJCWPIROYSRCGHHLIVGAKVVIEBBSHDTACFSENZDNUBLLNRIDCKQGQXAVZOGIUEMJJOGPNCWYBUHOZUQTATWDDVETPDFHSEYITYC");
    msg.s_type = 48U;

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
    msg.setTimeStamp(0.254345487199);
    msg.setSource(25942U);
    msg.setSourceEntity(53U);
    msg.setDestination(7242U);
    msg.setDestinationEntity(231U);
    msg.lat = 0.369568149495;
    msg.lon = 0.846607096892;
    msg.depth = 0.375414413869;
    msg.roll = 0.30295972359;
    msg.pitch = 0.383794851563;
    msg.yaw = 0.962707732462;
    msg.rcp_time = 0.301491463641;
    msg.sid.assign("CHYQGNQSOHXZBVJOTDRFLYQIOAUCTLDSJWKIRMFQSMLHEOTAGEGEDAESKFBDJARBIVITLPOAFYWVUKUNPQXVKNZZMMQCVSODJJDEFNDEQMIXKSKVWCWMGORRWYKUEJBQHCYCEFGCXIGXIGJADWRBZOLENVVBPKPIPPZCYOPUZFRDYYEPSHRMUNFTUJAGTTAWBUIGWXHQZMXPNLBLHITOGZWXUMKWZNVFQBPALJRLYA");
    msg.s_type = 49U;

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
    msg.setTimeStamp(0.732258406398);
    msg.setSource(63557U);
    msg.setSourceEntity(61U);
    msg.setDestination(9272U);
    msg.setDestinationEntity(209U);
    msg.lat = 0.119077710461;
    msg.lon = 0.915038126094;
    msg.depth = 0.133897087448;
    msg.roll = 0.0728850607295;
    msg.pitch = 0.224040139951;
    msg.yaw = 0.343935887535;
    msg.rcp_time = 0.253926752889;
    msg.sid.assign("UUEQQBEGSMONLIYMMLNHNAEBWMWUICSJGANIKQCRKTRVHJHDPQTXPHKWYOB");
    msg.s_type = 108U;

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
    msg.setTimeStamp(0.21660614928);
    msg.setSource(3930U);
    msg.setSourceEntity(209U);
    msg.setDestination(28194U);
    msg.setDestinationEntity(34U);
    msg.id.assign("LAKSWBMNVQFFDQOVZMOLAGOQHRCUKQREEGBSNXSYXYAFYPXJCJWSYXALSITRKILGUVLKMPNMHRYEFKAGPVDNIDLIMMWMFASRBJRDHTBZLDFBYIXCLXTVOQYTAEUEZKCGCAIBVPHMQJZUZSZTOIHYCPUTKUUIHEDZGVYWKCPZXQSRJDEJOAWXNNPBJGXOVLPXFJRINVWGNZGPMENWVWFOSQOSJABJBECDDYUWELHFIFHGRKBOUZKQPDWUH");
    msg.sensor_class.assign("WFEQAHRLMYRTIXBSOHERJZGAKSVIWONGYCPNCFXFYATQVMBZNWDLPNCMSAQMZCBVP");
    msg.lat = 0.35298189537;
    msg.lon = 0.611833967028;
    msg.alt = 0.315017814629;
    msg.heading = 0.684342400221;
    msg.data.assign("DEAEPIWIMTXGVHFHVAOTCVBMSDZAXCIPUJQGZLFJJPVCRXSVFUCVAEXZRBLFJQTKCRKQUJQNVLYHEIQCZWYRCLUETFQRZTZAWQYKMLEWFHRZZOUMBRSJOOWOY");

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
    msg.setTimeStamp(0.0378983769605);
    msg.setSource(11935U);
    msg.setSourceEntity(202U);
    msg.setDestination(61436U);
    msg.setDestinationEntity(107U);
    msg.id.assign("BHIJDPDYYFIMVHGJPDIZRRPXVQWYVMXSWGKQIXHXBCZUEYKNRHSEGAQZEGIFNRQBJFLWFICODLUORLKUGZPJEGTYNZSQPPFDNBRBTLSNWNYAOJCHNGTTMIYQJQMHEPZKAASIRASMOCFVJCJAYPTXEC");
    msg.sensor_class.assign("PUVFCUMUQETVPQDFXNURXCFKHWJEDOMYLQLHATLJRRNNOYFMOMGZOBYQEVQJTWHGHMAEVWFCWIIQSBYNHUVLJSUECDPACUIIQSZMGSENWYXA");
    msg.lat = 0.449971141116;
    msg.lon = 0.479581508031;
    msg.alt = 0.452325692674;
    msg.heading = 0.963024884434;
    msg.data.assign("DJYBQBAVGAEBLPNYONAUACQISSVBETTPZCPUGMDTDQCFILCBNISICZZHUOPZWUQRRYKTFXMOHMQQODIFNZSEHZWKSTCXVAROMVSFCLBKXFWRENFIYGVGRHFXHJQOEJHYRVMYKWEGDVUIULBUOIYZWJPJCXDZBOLRFJDSGDUOCTZVPTNNJKPTAGDPLHLHAKXQKYXIUSWTMPNMH");

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
    msg.setTimeStamp(0.00437484076025);
    msg.setSource(6514U);
    msg.setSourceEntity(214U);
    msg.setDestination(43964U);
    msg.setDestinationEntity(108U);
    msg.id.assign("RYBCNPZUCJIUWQITWIAVVNCCGAVCCNBEAJNQUOBFHCVOFYGWEYTPLGBFBYTOZWFBDDETEVFXPMKVOYACIPHUUENVKXNSNHUCEVBRIRZGHYDKLSMGHQMMWQNFUSEPMXASRAXWBMXPSRRCLPKDFMMMSOSULKNJTOJDAHBDPGJKLRRKGKXTWEQLZQGYPDXVREZTFZQTAAZKIGBMIOLJZUZRYQFNOGI");
    msg.sensor_class.assign("EOLLSAZIJPGEKYM");
    msg.lat = 0.26647921725;
    msg.lon = 0.792913340718;
    msg.alt = 0.898257069314;
    msg.heading = 0.518169040535;
    msg.data.assign("SRREAVDXMEFFXNNO");

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
    msg.setTimeStamp(0.363386226365);
    msg.setSource(10109U);
    msg.setSourceEntity(74U);
    msg.setDestination(32240U);
    msg.setDestinationEntity(127U);
    msg.msg_type.assign("JFAIFWHMSCZPDDFABOVJMTPPACMQMVYZUHFIYKRXSNVKYXIOXJSPISKTDGQVBGCJZXYBPBXOWDMTUGKUPQPSELNRMHZFEIRVHQWEBQVLGBYYGOCLZRKODLJVWFAGZGZTQCWARBNSSTITRRLJCAZNQDUBTQYMDDDCWYNQUUUTFEWVKOLZLFGSVMSKNHXMIPUAEHNPIXJZDUF");
    msg.sensor_class.assign("NJXYTZKNKGIBIPMMGNACNGPWCZWXBQGOKAFSANEPXEDVTTMQQZATFHKOEVCSJXQIMQPOZAHRAVKAWFLLWLXLTJLZSPPXMUVLHIBRAMKWWTVQY");
    msg.mmsi.assign("XMQLUMBWXLMWKTUWLVVJPNQNBXVPVZFGJZHAWDVBKKINCIEMUYQXRLNWEJQOJAGHRYYYZSPITDLSNDDFABXXAGFLUIJYOODVEEGTMHPKBYSIPRFZGQLKQJDNHDBWOHIZMEF");
    msg.callsign.assign("APZCBGJQNGLOTFAVPLQGFIRGSDWQPAUVMZLIGXAAOEJHADXQJJHIGOWQUMDTYTWBZKPPWIQCHLXVKACYGRSHPZZEDRRUYBOOC");
    msg.name.assign("GNEPUQGNWGZFSNMACTKVLIBLUAVZRRSFRBTTPNYAPRTFVRDJXEFHAWGFMHDEVHDHVRZUQCXSNKSQVUGDQ");
    msg.nav_status = 63U;
    msg.type_and_cargo = 157U;
    msg.lat = 0.799909784368;
    msg.lon = 0.893229841109;
    msg.course = 0.744548880324;
    msg.speed = 0.541201143602;
    msg.a = 0.859932873619;
    msg.b = 0.4533225002;
    msg.c = 0.772708404218;
    msg.d = 0.329142667604;
    msg.draught = 0.614973734174;

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
    msg.setTimeStamp(0.939147529495);
    msg.setSource(39454U);
    msg.setSourceEntity(201U);
    msg.setDestination(15116U);
    msg.setDestinationEntity(143U);
    msg.msg_type.assign("JNUMTIZDMETBWFDRHRQJQBCDGGIUSUCXUZHYQMYXMCDPLXKUNFYEMEGXUPSDZRSMJCEOCGQQTTAIBNYLMAYTVOETZWATLYDCDBSXJRPKVFGIFYWCGIPVHHTUAXXHKDJZVUHPIOKDITABGNMEZOEPWHATWZOQLBOGKYZARLONLQFHOKLSSWNESAUF");
    msg.sensor_class.assign("TEAXLSFGVXYDDUIQZRKNYMJCIYQLVOVZSCOOASPTOSHXLZYJUTEEVVKWHQOXAKZOECUOFFVCYPBBWCBLCDLMIMUPGAKNMKMCTNQURGMPQDZR");
    msg.mmsi.assign("EIENAUJPHPPJPZFWTYKVNHQMKWHIJPKDECYUQOJAVDZCLUKBWAFNPYWREYOVRFBMHWVIUQWGOSLWLUHBDACARKEJYRYNEDXMJLRHGXSOUINOJSPHAROLRNTCZLIMCEFAUFPTBASXCHISASGNSSTLVQGVVOMZVDKYYBDGGKRQZTLYLFKBC");
    msg.callsign.assign("STCXCCKREDLPZYMYFXGNASSPXZIRJSNUTYIVJYVAJFYCLDTHWXMPCHKWPBVDLYEONUKXXVQOJLBASFLISUDPEVMZXUVENRLOTEWUWFCSYHQDEUHGHQRVEDHQZDMNFRZJKSVUGDXTNEHYPMNWKCBDBUPTKMJOGBIXTLKGUQJBOFZDJEAQWHLCOKKNAAQSBMCIKWJFBRCRBIOPMUNIPGAZNAWMVTZWA");
    msg.name.assign("NCFKFDTVCVRQYLEXUUHXVFPJETCBSNBAWPAXZWNRSZHFILCSGJNHQARQKNJJVYTRMLXPEZLGIHJJBKZOWSDGETDFQJQ");
    msg.nav_status = 42U;
    msg.type_and_cargo = 111U;
    msg.lat = 0.564561816708;
    msg.lon = 0.308768414542;
    msg.course = 0.49518337277;
    msg.speed = 0.332940923333;
    msg.a = 0.373927971967;
    msg.b = 0.685117019286;
    msg.c = 0.406436018957;
    msg.d = 0.447031779999;
    msg.draught = 0.745074555878;

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
    msg.setTimeStamp(0.91316642031);
    msg.setSource(29172U);
    msg.setSourceEntity(12U);
    msg.setDestination(59120U);
    msg.setDestinationEntity(118U);
    msg.msg_type.assign("GNYSWHCFPBIOKRMORBICWXKPHZYALORNZFYXCPBMYLVDXWTQXHSQDCDAQLJNPVBAPDPDFCSZOUCAPLQONSTHEQMCWOBZKUSJEHSNERLCBGEDUXKIKYZDZUQZATQXMVEFHIBRAYJDFHUZLFLLXBPBEDTGBTVSNTLHINVTUXXENCRYAGIISOEHPJGUIXJWQSAFWZAJNGVM");
    msg.sensor_class.assign("OVULWFZOJWJOFPZXKSZJNPDXMNBRGWMOHYKEIUAARPE");
    msg.mmsi.assign("UPXRWOAFZAID");
    msg.callsign.assign("GSOHMSGRHWSZJQAGAXFDONIYKVAKYVKVALGEPNQTRFLMZXJLCUNXWKRNJUHPFMXUWZFQUQDEWTRGMVLIFEFPCHOYFKIOOVAQXRNBGDNTQJEMRYOHIUHPTJGFPYQKXZIZPCOQDJLCAZTQNUWHLGDBDKCIVFLVYSAUASCXNEOMEMICLWSXBJGRDIMGVEFTDCTM");
    msg.name.assign("DHLGMTRJUVFJMRGFZJKYCRMKNJAZFLTMCFPODKBBOZKJVPSOTHPCNDIQHWRWFXKPBBNRPLQJCIEYHJACS");
    msg.nav_status = 149U;
    msg.type_and_cargo = 173U;
    msg.lat = 0.463236876261;
    msg.lon = 0.4989673733;
    msg.course = 0.845446046396;
    msg.speed = 0.389857998323;
    msg.a = 0.0974942987157;
    msg.b = 0.378961121661;
    msg.c = 0.317606527876;
    msg.d = 0.53253561007;
    msg.draught = 0.358832006205;

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
    msg.setTimeStamp(0.386010335245);
    msg.setSource(2335U);
    msg.setSourceEntity(164U);
    msg.setDestination(64132U);
    msg.setDestinationEntity(81U);
    msg.id.assign("OLFWKDFTSXUFPFNGYVCVUPEWQDOREWJXCJMAMZIZPLSUPUUBSPDSNBNTFPUYBWVAUIOBLCPSIFEOUWDRZRTHGMXUZSROQDTCCJNQTRJIZRQGEMDGBHDCYWFMMGLDZKNJTKEVKVYWESKRTOCSHLGXUFZFGHBNQNLKNILRVISJAZAXGMYXICWHKVARCXPTHMQFCYQXKAHIRBWYSQIJPGKEVLHTLJBBAGNOEAXZQDZXAYVKMDQLHENWAIOOMJVYY");

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
    msg.setTimeStamp(0.18517952384);
    msg.setSource(44952U);
    msg.setSourceEntity(227U);
    msg.setDestination(56155U);
    msg.setDestinationEntity(127U);
    msg.id.assign("KFPOMPZOKEJZQGHTMAFCQATSHZQIPXVDFEBBSJXAJWBARDHCPTIWSDBGQYVMDMIYNYYFSZCFOXOACJRHQIBPKRZONHJNTIHBSUOQIVLESANUICHVTGWEGEKSYPUTDM");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("MNXTSRCTSUDYOEWFXBVVFJJYGLOKICFFGFEOPVIJPQQRMBPNZXZLNWPZMCAWFDTLJZQDNNUPBFYKWOQPNHXKAODAGTGBRLDHXYKQOCZSWVSDHEIGJBOCTHJIREAIEBYVVLNFWKHWOARDGXARJLDEGBBOHCFUJQKYMKSPKYUPSMLVESBVRUMKIXY");
    tmp_msg_0.feature_type = 64U;
    tmp_msg_0.rgb_red = 51U;
    tmp_msg_0.rgb_green = 169U;
    tmp_msg_0.rgb_blue = 106U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.858719906288;
    tmp_tmp_msg_0_0.lon = 0.15516079777;
    tmp_tmp_msg_0_0.alt = 0.984803848177;
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
    msg.setTimeStamp(0.868384298194);
    msg.setSource(45874U);
    msg.setSourceEntity(22U);
    msg.setDestination(30182U);
    msg.setDestinationEntity(203U);
    msg.id.assign("XBEOWDDWXRYLIPGWX");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("STRJEOZRYYIWEILNXALLDNUCTOZSBJEUPELQDCQOAHBGXIVDGBKRVRNBRGTAYGEGVZDJRKASEVEPFCHFAVUHOLFTHVTSSQQPMWKHUWVNWDLQJPZCYZJKFBWXHSYTDNXCETNXPOAZBMIMHUXOYROTRSMXCQKSWRFXICXAYFMEOBGTMULLCACGLWDWHDJGVKDAFEZPCR");
    tmp_msg_0.feature_type = 221U;
    tmp_msg_0.rgb_red = 110U;
    tmp_msg_0.rgb_green = 156U;
    tmp_msg_0.rgb_blue = 60U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.484032435768;
    tmp_tmp_msg_0_0.lon = 0.0328263757685;
    tmp_tmp_msg_0_0.alt = 0.701725677395;
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
    msg.setTimeStamp(0.73179333052);
    msg.setSource(57475U);
    msg.setSourceEntity(98U);
    msg.setDestination(29883U);
    msg.setDestinationEntity(180U);
    msg.id.assign("DETEGYBRMJDARHJIUVCXOEOFKUDMSPNUFVJHCRHAOCGWITLVTQQZHQMVFTYCVRAIBOLJLTRXFXJJGPZSIULAROBWTEXNRIJLUFEBEUZZVXKNHAWEPLUJYARZJC");
    msg.feature_type = 79U;
    msg.rgb_red = 178U;
    msg.rgb_green = 230U;
    msg.rgb_blue = 109U;

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
    msg.setTimeStamp(0.24985577904);
    msg.setSource(53857U);
    msg.setSourceEntity(172U);
    msg.setDestination(60084U);
    msg.setDestinationEntity(158U);
    msg.id.assign("ISRNPETBOBM");
    msg.feature_type = 125U;
    msg.rgb_red = 194U;
    msg.rgb_green = 86U;
    msg.rgb_blue = 145U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.687916260044;
    tmp_msg_0.lon = 0.180208868722;
    tmp_msg_0.alt = 0.383766243365;
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
    msg.setTimeStamp(0.354458721269);
    msg.setSource(35372U);
    msg.setSourceEntity(224U);
    msg.setDestination(45841U);
    msg.setDestinationEntity(38U);
    msg.id.assign("IEZCOAHGGHKJGMZOTHLNCCLDPGTB");
    msg.feature_type = 186U;
    msg.rgb_red = 217U;
    msg.rgb_green = 104U;
    msg.rgb_blue = 79U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.200677505981;
    tmp_msg_0.lon = 0.706371490518;
    tmp_msg_0.alt = 0.652448727187;
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
    msg.setTimeStamp(0.344470352487);
    msg.setSource(12546U);
    msg.setSourceEntity(209U);
    msg.setDestination(14802U);
    msg.setDestinationEntity(19U);
    msg.lat = 0.319310028809;
    msg.lon = 0.995957060008;
    msg.alt = 0.381689147954;

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
    msg.setTimeStamp(0.58445253096);
    msg.setSource(39665U);
    msg.setSourceEntity(104U);
    msg.setDestination(62724U);
    msg.setDestinationEntity(61U);
    msg.lat = 0.661069885236;
    msg.lon = 0.46778786908;
    msg.alt = 0.0957177906176;

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
    msg.setTimeStamp(0.968253591399);
    msg.setSource(49331U);
    msg.setSourceEntity(243U);
    msg.setDestination(23480U);
    msg.setDestinationEntity(162U);
    msg.lat = 0.451739982933;
    msg.lon = 0.622721807619;
    msg.alt = 0.0890531857033;

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
    msg.setTimeStamp(0.811112471341);
    msg.setSource(57625U);
    msg.setSourceEntity(182U);
    msg.setDestination(19328U);
    msg.setDestinationEntity(177U);
    msg.type = 32U;
    msg.id.assign("HJCACYMBAVMESGXAMCIOAWTTTDJTKSPZNXCQLQJPUBTCPZBRFECBEVXGHEUTFVYICFYNHSNQZOXSOPXUBBBPJRUIRIYJWRLYPIUEFNSEDZTOHVVFCXECGVFRLOGPLOLKIWEZJWHMLQXLEWZKMHRPYHWSQMOJQZLGQGDUYFAHQYKGNAQDBFDVTNJPTRXK");
    IMC::VtolState tmp_msg_0;
    tmp_msg_0.state = 43U;
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
    msg.setTimeStamp(0.705592140142);
    msg.setSource(36742U);
    msg.setSourceEntity(207U);
    msg.setDestination(29710U);
    msg.setDestinationEntity(216U);
    msg.type = 90U;
    msg.id.assign("VGFNOINRIECSJWSNAVOSYLBLYFMDHCGVJSYWTDMQDKWXBWYUMIGPRHVIKCLNKGEBVZZSMKJVQYGWCVTRFDKNPDAIDUMLLKCAFYBKPMZNXUXTHOLXYVPQFQHEGPWCPHRQDIULRARZMCETMGWEXWIIPQZOBUGNUUJ");
    IMC::RemoteState tmp_msg_0;
    tmp_msg_0.lat = 0.455209321545;
    tmp_msg_0.lon = 0.338259545053;
    tmp_msg_0.depth = 164U;
    tmp_msg_0.speed = 0.142364195766;
    tmp_msg_0.psi = 0.722433169981;
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
    msg.setTimeStamp(0.456638325787);
    msg.setSource(6730U);
    msg.setSourceEntity(183U);
    msg.setDestination(11564U);
    msg.setDestinationEntity(164U);
    msg.type = 37U;
    msg.id.assign("LUNVUBOKMLTJQKEPUMJOPTCPCEKDXAVHVKFPOGBSPJTZMTFOUPXIVCXXRGUJWNSDTZNKXCNRVGYOFGNIVGBCNCPTOZWTIEYUUQQIZSQFPPBKBMELIFNAZEXYLLRQFSSVJXKEGWGIJSTJMHQQWYOJFLGBGKDSXCRLJZAABBDDIDWAHUOMVFWMHKA");
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.409437912557;
    tmp_msg_0.base_lon = 0.368053226423;
    tmp_msg_0.base_time = 0.491468289391;
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
    msg.setTimeStamp(0.527013896224);
    msg.setSource(19715U);
    msg.setSourceEntity(239U);
    msg.setDestination(58750U);
    msg.setDestinationEntity(220U);
    msg.localname.assign("YFDKOHQAGXEQMECHMRKWVUSYJVDRGBMNPRTWZMPSDXBTZLLZSYHLKONTIRGADVFKRYSDHGRXNPAUEHXUEXLGEODQRUPBIPTUPFTXIZJIIURHWKQUTSEXXWTCBBLVALGEJAQVDLWQAVYYFNLEHRGIKMYOUGKMWEZPCNFVJHJSGJNOOJQMRJEK");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("YUKIFCSZWZETCQAOGNJZLZ");
    tmp_msg_0.sys_type = 155U;
    tmp_msg_0.owner = 16213U;
    tmp_msg_0.lat = 0.209032472384;
    tmp_msg_0.lon = 0.430789911705;
    tmp_msg_0.height = 0.0125338786398;
    tmp_msg_0.services.assign("MESQRZFUAXJBAHURUCGPISPKBJVRKDBIWBCVTRAGQCQFAOXWBVZVVSLGNWIBJFZIMNTSJCQWD");
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
    msg.setTimeStamp(0.989331261723);
    msg.setSource(2175U);
    msg.setSourceEntity(42U);
    msg.setDestination(24826U);
    msg.setDestinationEntity(16U);
    msg.localname.assign("QEORCUWCHXHGSYDVHXOUTDWDFDLJPNLJXERKRQUREJUGUWHVDQBPFWVYABEUHSDQAGYZGNECXOVAWACQJJMBOTTAJSLKICSONCKQBOZMIHLEQJAQHCYCZAEAXLSXUKTPPRFNWTGBZNVFBMGM");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("ZKSPECHFCSRRLLABPPTXPOXKFJVOOTZBEDWGJEVMJXHCDVXYCNIFENKVINDYPTDVHASKHQZWBWKWMTYOPUICGNQOCGSSXFUEWBMRFRZHXZWRLENVAJZDIKZIFAAZOBWFQDMIJKACYRNQMOOTSZHUBYNULXFRATEQPIQLGPA");
    tmp_msg_0.sys_type = 207U;
    tmp_msg_0.owner = 50240U;
    tmp_msg_0.lat = 0.105717923052;
    tmp_msg_0.lon = 0.621033410864;
    tmp_msg_0.height = 0.425225880637;
    tmp_msg_0.services.assign("IVIRKDUNVLJMYJZCVGRAZKGGCJNQBOIPVSAMHYZLWKUPGHWAOBRPWGTYLFTPJXXDFRONCGTBIMTAFFODSQXZIFSBUFGHA");
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
    msg.setTimeStamp(0.241192773788);
    msg.setSource(48112U);
    msg.setSourceEntity(248U);
    msg.setDestination(22213U);
    msg.setDestinationEntity(73U);
    msg.localname.assign("ZWSHJXSOVIZGOQUIISZVGKZTSUJWMXMVCRLMYWXVXKMGKWOQCDEOAVCQXQAKRESPTHPEYIELRQASZRPKDWTYNUFDFD");

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
    msg.setTimeStamp(0.615029375503);
    msg.setSource(20836U);
    msg.setSourceEntity(124U);
    msg.setDestination(31182U);
    msg.setDestinationEntity(215U);
    msg.timeline.assign("HVNSOYKRNIEXJVCGEYOGBTMDSYLQBBEDTWNXKYBYKEBJPKLKRFGVEIOKGMJIZBZJOYMSJCOHFLAVPFHDXOKZNNLEWGDTSRFQRCTHMFYUWWXTEWLIHRFNQZLJVRWVOQGPUYUSHXCLZKUHUMDG");
    msg.predicate.assign("NPEYXDQVGHZQWSNKAULXBLVIXSMQTCOCFUUYNPTOJTCGNIASWJYVZNDZBYPPKAJHAATLBFNOVNQBOYJQUYHUXNLHORXRFJYLBWKWGIOFURWZYXLKPHBFCSHISEAHPEWZJDGACRHXKTPIFTSAHUHRMOKIQGFSJUCQFQYTJDRVCIWLKTZGDRZIVZSOYLGSABCFLDPUKSZTGRJXCZPXA");
    msg.attributes.assign("GHWGGODDBKMKPVUMECCFAXRBFAREMOWQSRFBEHLHBJMUJKFIVDHZRBXLZOJHYCZHUQQXNCMRRMVMHDASZAPCIKYWTKGAPMQLEGJCVZUYSOWRGQINYNZCLEWVCTEGOUWNRJTHQBPHFBAVKXFPFBLQDUIIDXJNCWWTXYYAXUYIYEPFZBXOBNTHYZIAVQUVMOWVLSELZMTXTGIDGNDIGSROSSLADTSKPJKNYUVSOPNLEE");

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
    msg.setTimeStamp(0.226687226127);
    msg.setSource(30622U);
    msg.setSourceEntity(231U);
    msg.setDestination(17517U);
    msg.setDestinationEntity(168U);
    msg.timeline.assign("WOPMQGEHVXYJETZSDAYBPLDSZNBZQYEEFJAAPUNCHDIICORLQKSWGLNNOIXZPSWBBMOJJEFCVITJFYUZUTZGECWCIJAMAVKQXCCPQRBGHFX");
    msg.predicate.assign("KVZJTCFBCVXRSGOLSPSDOMSNAUIMAHRTMFQKEYWNZNIREEJHXOBVAGQWCAMCQZOEQVNYBVLPKFNQV");
    msg.attributes.assign("YHLTGEZKZXPSIGGXHCKFIP");

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
    msg.setTimeStamp(0.472064215667);
    msg.setSource(46182U);
    msg.setSourceEntity(244U);
    msg.setDestination(31564U);
    msg.setDestinationEntity(216U);
    msg.timeline.assign("AJBCWKRRDHMQFYGRHNCNWINLXGMUZELESXDRYIX");
    msg.predicate.assign("XVCQFQZMOYTUZABJSFWBVWCPPODGOHDQFLXEVMYZFKUMVOUWVJIASAWKDONROVWZRGQQLNQGALRRJBGRIPOODBMTAAYCKYCYULGGCHKJGUZNLBXTLXJMCFHGUAJCHEMBFVKIILISCRRUPEYHHPPHEYXCBJMDXTWNKTKMJPDHFSFWEDZYAXTPDNZBAENKGQHESJINLELSNI");
    msg.attributes.assign("IHBDGOEPJYGKNLAZXNLVYDAPOLWRWBOHVLVJUMNFANDHRQJRCSEQQCGUHHEXQSJWCFYZJGKIAZUISLULQRNKTWHAPOHFOSUMZZZOCGCEBJWSMSKGSAJSRTAEDANP");

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
    msg.setTimeStamp(0.979476675026);
    msg.setSource(53114U);
    msg.setSourceEntity(94U);
    msg.setDestination(37472U);
    msg.setDestinationEntity(124U);
    msg.command = 44U;
    msg.goal_id.assign("WLGPKOKDLOBHDGWRRXRXXRPRCCYWUQUNOKTDKFONEUCWVFKIRZEHGMBYYTZMSKSLWZIDRSLGGXEBUFSJOGVYCAEP");
    msg.goal_xml.assign("ZVOXDLEMHXKPQFJDUNVRMROIMTAMXVZIXRMMAQAGQHRUFCAWDOZBYAEEPUSDGFDJXINBWNPWCIREYZGFGBCYKXCQYBAGQPSTRNWJVDNJHMLZOKDRQZQWBOWKOMKNTLSNTETEXWDTPHRXZHFSSBUHJHDNWTSWVACAPZOWSCETVPUCRYBUOFZJO");

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
    msg.setTimeStamp(0.400847089618);
    msg.setSource(37790U);
    msg.setSourceEntity(216U);
    msg.setDestination(63053U);
    msg.setDestinationEntity(32U);
    msg.command = 207U;
    msg.goal_id.assign("WAGKFEYVKZXBMFOPLLWCNTNMKDYWDCSOYDDWQPTVMTTHBRXWEAXBBWGSIXJGXEYBFNVCDAPQFUGWVCSMORLGJQZCYMRNWRQRIIVRTOJADHKQZLIPGNRNJZUYRWEHJFQUPEJAUGYSKAFSDXUEPCYYXVCBSTOUBAZMZKCJIPLFIMSSETRODGJ");
    msg.goal_xml.assign("GGDPCWYGQFKSDVFMJRQSMLKCUTEAUTVIXZWBMRILHKYJIESOVZZOLZWTNBOBAGNHIGNVHTJITFRVGZCKMPQGIFSUKESRRJHPQSQIUTIXGXCTXXYWNQQ");

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
    msg.setTimeStamp(0.289303121835);
    msg.setSource(45503U);
    msg.setSourceEntity(96U);
    msg.setDestination(11575U);
    msg.setDestinationEntity(22U);
    msg.command = 235U;
    msg.goal_id.assign("XVFOEPBRJFDLOLIUGWPOTDWBTGINQFPGOIWWABYXJYLCXVQEYMBUNZYCOPBNYOMUHLKAQRKWSUVDHJAZVUZSZTIRZZRBYFDLFTDRVCILYEZWNDRIKFLHXXKOIZKLYSVSQVSEMXLNDIXIBMHQAWXGJGHXGHKSTRWMQHGSYKHVCWZCTRFBPLAFUCNCKOZSJUMTNUOBJBQSP");
    msg.goal_xml.assign("QFSWERCLUMUQZXEGTZYOWEBNCZRUAADNNHSCJUOKTMFIQRBWYHGZKHBZRITZPCLFJQJPEEXSGPIJDXAHFKHVMVZTAWVOFOBGVCIKYSBBHJTWZXSNDNYQYIAYMYXCLXTGNXVLSMDDDNLELKPEFLHAESIBJ");

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
    msg.setTimeStamp(0.823425743382);
    msg.setSource(55043U);
    msg.setSourceEntity(12U);
    msg.setDestination(20574U);
    msg.setDestinationEntity(228U);
    msg.op = 56U;
    msg.goal_id.assign("RAULPWFLSHUJZQZNRCCAXTKMEDYGDYIBTBSANGRZNEQQZAISGYLFXUHGJAJCIGMZESHWXOBUQIYBZVXHFWVNXDXIVLONMAZSGDJRFAMNSPYIBEJZWTF");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("QMGPLAJAFIFJIESVYRFWMHDFWHLKIZBNAXUVVXNUEHNQZPFGDRPQTBQVKZKAGZOSSXBRLWDJXTZJBCYJQIJPUFYARYTCDPOZIKEZVJOWATTCGSRJBWYLKQBOICDHBGUTZOQEYACFXLZSHUVXWVLPDCNUWHCPVYIMGGMTLETIGNLTAGXOOQELMMNOGWBUQSEVEOYKPEUMWFSRPXETQHCRPSC");
    tmp_msg_0.predicate.assign("YRCORCJCVGXVYVPCKESMGWIXBNRRXARYKLBCJOAXDUTZFYXEHSMPGJGJSOFJVPLFBPCZBBHHUMYNGKHXWQSNVIXFQDUBGUYIRWZAGAUTKDQZZSMQBYNQNGOTHDFZWCSNPEWDBTKYLTNAIEBZIYIRPKPNEFKFWCUN");
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
    msg.setTimeStamp(0.191969479744);
    msg.setSource(51337U);
    msg.setSourceEntity(86U);
    msg.setDestination(63263U);
    msg.setDestinationEntity(52U);
    msg.op = 182U;
    msg.goal_id.assign("KUWJJSMTNHKXNKEOZZVKLDBIXXIPALIRPYQQWERGYDWIJMXNHOBLZBKYVSURCHMUTGWNGGVFMXDLZADBYQOPIAWGGSASLMMBMULSYTYZFIAFNCRJSZPTRNJPMEQDGGBHOWOWPQFWDERUFMTRZOEXUTDFTKDHIQOPCSQVPKZAOFX");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("ABAYHWKGJTDNTYUDYKXYURUWPXCTDQYGFEDJNOTRASBFNI");
    tmp_msg_0.predicate.assign("DYWRTUJELCAKUZLMNIHTVIIREAVLAWJZMWYNOKWHSKUVMCXHQSEFWRHIPUVBFZMQVFBNZOJUX");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("CLRWCYUXHWQPXDGKWONFHNGQPPZTQFPOQJQHNFSNIDBFNERZCKBCEROXOBIMYPVSMAGAOIAVQWVMOOQKJTXDVMJYLDULRVOSPDZSQHFYJTBWSKRAIDPUBVNKYZJTHLWTHBCFBVRAUSLTOWPHPCHLJBBUCUKBTEZMJFSTFSICZTFVA");
    tmp_tmp_msg_0_0.attr_type = 98U;
    tmp_tmp_msg_0_0.min.assign("DETJQQDNEVWCOAJELAOHGCCUIKZSZKGWSUGAPQHFIFBMNQYHZDKRFONBCILTYXQMRLRIGGDBPISVPNMHRCJVZYEBOJTNLAYWOFSSMWCALREXZREQDTRWUGSRCTJYXVEIHXPYCCBVMADKJFZXUAZFKYTXZGKVIOLVDQDLNSVJNFASWLHTLVQXAREPJNYMGQWUVHWEHMOETQDBOKKUWBFPUDAZPYKX");
    tmp_tmp_msg_0_0.max.assign("XYYDFADAJRF");
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
    msg.setTimeStamp(0.452183384117);
    msg.setSource(30203U);
    msg.setSourceEntity(158U);
    msg.setDestination(36200U);
    msg.setDestinationEntity(32U);
    msg.op = 118U;
    msg.goal_id.assign("DEWITFHGDIHZWSEFMYNGASMN");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("WFTYSTKRCUZEFFSLNPLMMWIDTPGFWKEODFPVHZOQVQNSCICCTWAVRQYQYNSBDYSVLIMHDNXSXJJFEGLHNXVJMAOKLUHURFGMZMBXHWCGSBUUHWJUTOSQHYELELKOJ");
    tmp_msg_0.predicate.assign("XESMNQDDTIEOHJSFYYWGHAHYDVSDVZRDOJOTQAKEUXPQZZZWRHMUXGCJDMPXOUICOINWXNHFEMJMUKVJBXJWBZJSIWYWGWSTYICBOGJIMTVPTHXKSEPUFAVHPPKWQNGLLAYHVCXMRVIBLZEKITMYPDNSCFNZJEKDNTXQYWWOAZKUHFEGNLFAPBSRYUELAAJRNQMBNIZOQLRFFBLBCZKLLRBVBSPYUDUQASTFHIKLDFMOTCKCRCCTPV");
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
    msg.setTimeStamp(0.46262576825);
    msg.setSource(49826U);
    msg.setSourceEntity(163U);
    msg.setDestination(33643U);
    msg.setDestinationEntity(233U);
    msg.name.assign("JMBTJEKNOADYMANEGEFETCJGJBQSCNSWYXNCZFUBPKGKWMYOROUNCBBEBYXYTIWKJCGDEP");
    msg.attr_type = 164U;
    msg.min.assign("KFIDCFEDWQCNYHMXXIKZUXJATCKYGZJTNBHLTJEPTZKSCIPXARODIVVDSWXIKEKYGRRPVMBLBBSQUUQMMDVQCUPYITPHMFJUDANVSYC");
    msg.max.assign("OSOTZZETTTCVXHZWQFRZMTZPRGTQGMFEBFBGCEQLZCFQGPIYWWMVYMCDOOXOPHEPRIPJBUXKSBVFDCUSNYPWIHRQRKHDUZFYNTWNBOPSKHVYJLLKSVTTLVXCGBBKAMMRJJXAIGJBPHXXPYXGADRFVUBSCSEIEDLWNWNVOZQJKNAUNIMRNGOQKIQBGDXMIULITWDAUFUZAI");

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
    msg.setTimeStamp(0.510442090457);
    msg.setSource(56288U);
    msg.setSourceEntity(208U);
    msg.setDestination(6613U);
    msg.setDestinationEntity(92U);
    msg.name.assign("GJLRCWCRJBKWRKKRENBOQHDRNCWCOUMQZWGCNSGPBAEXICDWQRNSWLYAATMNLELATZZOTELEFAWMGHQBVQJNHHUEVGAIDOIJPJCCUHOSIHX");
    msg.attr_type = 19U;
    msg.min.assign("RPQSABXWSHISZJQIDZQOQKFNWUYMBIXRRCITRKOEWUNQMXUETMBYOCHFMDPQILTDVKWGRJGARXMQGUCKMUPXWPMESLFWGXNZQYTVZGAGQUHLEVKWPKFXDJAVMDLLYABRONCFIHESOAQRKZSBUFSLSAXXOLGGTTTLNTOVDYYIPBYCEYJPPOJEISHJDJRUFNHZEYIAHCDWADMZRNOOTFHVWVUZBGKPJBDZVPNLKHEMF");
    msg.max.assign("COPCJJDJLKAUSVGBFUYGLBOZRGNDWWEKSFZTEFDHBZPEYCPBSXHWPVHYZLHNOKAAMRMJNCQRKYRLNMXLGVVRJVBBSNQQAUBQIGFJIHLYYYKBMFEPRHEGCCBDI");

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
    msg.setTimeStamp(0.334572388815);
    msg.setSource(2221U);
    msg.setSourceEntity(241U);
    msg.setDestination(36868U);
    msg.setDestinationEntity(11U);
    msg.name.assign("OHIQTEPMNYO");
    msg.attr_type = 207U;
    msg.min.assign("CMEUJSJRIRGDISBPHSADAFKPTSVRDAZXHOJWAYWCLFFNMJPOTMKJLNQOYFVCXFFIOJAUSHWZRDIQJHBBQJDEVUEVUDZPYGNDMBDMOMQGRNCVDPAARKVULXQVGIBUMRKOELYYKTLNWYCZIUZIBYLQATYNNMLZVLHBOWKENTKMYEGXZSLGQHXZTBGCSXPHWCAEF");
    msg.max.assign("WQTDWZPDPZQFYKRXSGCWYDVGMCMYYPMLATLFXBCEDJBRKFGBWHNAGKCUSHQNKOYMPKIEKXLXXMNCDEPZJRIWNETSHLJBAQYAHGDSHJDCCEXAHADAOEINZBPYUU");

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
    msg.setTimeStamp(0.14730431851);
    msg.setSource(7209U);
    msg.setSourceEntity(87U);
    msg.setDestination(44246U);
    msg.setDestinationEntity(86U);
    msg.timeline.assign("YQGGZVUPEOYKLUEVOPNFMILAIQHRFGOLUIIYJKETMXGDTVNZQYPDDVGQAOGRURRAOBLKUNQCPBLEK");
    msg.predicate.assign("RQTSAQGBCLDNKW");

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
    msg.setTimeStamp(0.44450646975);
    msg.setSource(61699U);
    msg.setSourceEntity(223U);
    msg.setDestination(4482U);
    msg.setDestinationEntity(62U);
    msg.timeline.assign("SAHABDFKDYICUMHHGIPCCSTFIYLGCHLJFLMUNVYROCJSWTIHZXVPQLXITEBMJDEUEOYRDIFLGEYJKGTNNNPYWVWKLJVMZGDZQWOUDDTQPAKXUMJBNIVTLZBDJVCFZAICEGOUBAHKZEKCQQVESFPOVMBKMSWPRGYRCWSXNNHFQQSFZHXU");
    msg.predicate.assign("VTIVGHBOHBKKVE");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("WBYKCFYTVNLMRTXSUEIPIWFFQJUUQXGKDDLRFCDMZQHGLXIWEUERBSVFJOEBWVSXBVMVGKJPSPWCRYDECVOMZHFXYSGFJSBLCVTSNPFOYOWHNHENCYYKEIQTKHSAKQQOXDTGIJ");
    tmp_msg_0.attr_type = 24U;
    tmp_msg_0.min.assign("QYCMNIEEAOTVJJBYHZQUXKFJUGTLDKDOCSKPTOIHKEVAJHSAXZTONGLGYIBBIPNNVAEWFHZBRWZZTTLQXFKGC");
    tmp_msg_0.max.assign("XNGFGWFJBSMUYQKXATEV");
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
    msg.setTimeStamp(0.617277886182);
    msg.setSource(29681U);
    msg.setSourceEntity(149U);
    msg.setDestination(16202U);
    msg.setDestinationEntity(249U);
    msg.timeline.assign("UEZTTTOFNMYQMYKZQUNRBUOMSDPINOANYKXZXWGFGKBJNZGEUTZIUBURGHJEYFTEDZGIVTXRUPJSEQEBSQXQEKDMRDJALNGLVRSEUFYWYGADQOBOKVCSLJFPLXYQYZKIWUOJQBFBBMXDOXPVSFCTZACUASLTJ");
    msg.predicate.assign("BGVPVBUVYPUFJUTJRESIDEQCCATJSBMJQDXWMCOLRZNDIVXUOCPZJHKRYTZFVGIXYFKSXHJIHSFMEAGIFSHOVEBLWSCUNYJBTRHPWYXMAYAHJXGENRKBEFHNGMRYKHAZKPKIGELMWCXLKTXUWDCQALRGEMKIRIYADKUOQOFOWGZWOMAWCLBKEFJNPZELSXDQTQZVNSNDOXSUQMGLAWMPNQIFRYBFSHPOVJUCRQPTCPBDBALNVDWDVYLZUTG");

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
    msg.setTimeStamp(0.236192677281);
    msg.setSource(26100U);
    msg.setSourceEntity(189U);
    msg.setDestination(17149U);
    msg.setDestinationEntity(98U);
    msg.reactor.assign("SICWVXYGYQFVQDYDPQEMOLCXNOMBGYFAJZLABDWKEGMQKPNVMPIHLCOE");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("ZCEKMRTRQWXCGMMWIVXNZKNSTSHJYZFRNNUPIPTXIWCOYROIHSHZKGGPQMGJXPYXAJIDBJLNNBHWFYDKNACIBBLGGOROGZESLOXHP");
    tmp_msg_0.predicate.assign("OFQHHITUVXNQKAGWFNRCSJMUSDRQESLCHLYMJANVFCPNIPMGFDIDJBTWJZBOZBCYMQIWCEBZXGTDWKDQLMQLSCVYXOL");
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
    msg.setTimeStamp(0.803470963457);
    msg.setSource(18760U);
    msg.setSourceEntity(194U);
    msg.setDestination(59312U);
    msg.setDestinationEntity(38U);
    msg.reactor.assign("RODMINQQKHZKJOPKFYQAFLFCBWSWHDPSYTBERAJBIUBVVCGIRHTWVXWAGKTRYJLDVAHLXVITRFMPHEGLRYJRWEVPBGA");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("LHMARZIYOQFCAVEUMOBVCEGSEJIRDRBCTIDGOUSJIDZOHXFWTBYPKWJQAPLDXXNDSWAISHSLLNTZAIKLBHXOKGVPZUTGJMVBTFGLSXYOTUYLTCARLHCEGNSQEDIBMMKZEMKVDEQZFFQPWXSRBOPEJNVPVETCGRRALXGRWNPUKFJHNMZLJUWJWSSFKVUIWFCPQHPVTOTOVDOJFZXQMCAGKBMNQPMEKYCQBGYHCQIZUDRZXHNYJRIYA");
    tmp_msg_0.predicate.assign("HJHAHISPQMJYXJHLUBGGXIAYJBQWLPQZSBOWVSZFAJKZDURFRYBRNYQAEXUCZOKWBRTXUQIWCVTCWGOIUKNXYWBDRCMLDHVFMABIEYPDPANIZXEFSWYIXMVGESQVTNDFC");
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
    msg.setTimeStamp(0.796084649688);
    msg.setSource(23792U);
    msg.setSourceEntity(151U);
    msg.setDestination(55346U);
    msg.setDestinationEntity(8U);
    msg.reactor.assign("XWGFPJTJNGXDENWWKLEXLAHYAMWUAPKYTZOYKJHXFEIGHUVASATRBRBLBWCBMVXMUPNDXQTCFRFUWOHJLCEJP");

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
    msg.setTimeStamp(0.840358173139);
    msg.setSource(11854U);
    msg.setSourceEntity(108U);
    msg.setDestination(51816U);
    msg.setDestinationEntity(67U);
    msg.topic.assign("UKZORPBFNTYGQSUSZEDUVBJCBCDIJBGABXIAEWJTHDUMNUTANRVDGOFWNNECQYSCMTWQTNXVYWYQGHPLMOLVVWOUQZTLCHNDEKCCCZLPQFSFLXQNRFSTHTIPBJJKYDTUAIHGZRELASFGUMAEPMSYSBDVWUFKYCPKGTJLPDRXWMHSOCIOKPGGQNLZDFYIERWIJ");
    msg.data.assign("ZRNQKONOJMDLEHDFPORMIMZYINDSEDSRYTJEOQEILBTPFXABYPYELIXWZVUZUFOMISUMRYRVZCURNYTISNNQZAJRKGXIHPCZPGRDGAGJNFE");

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
    msg.setTimeStamp(0.27593707471);
    msg.setSource(19439U);
    msg.setSourceEntity(14U);
    msg.setDestination(31901U);
    msg.setDestinationEntity(200U);
    msg.topic.assign("NFPCMQDQOHCUWBALZSCXDHOMFNTJAUUHELBWAWEZSEKPXPUGVP");
    msg.data.assign("GCUALJGAKPJMFVJMNBXJRZWUYETCWRWGNZZYCVAQONXZQNODHIDUSXMNFPYMWWGQNTXPKALYISWYCQTPRIBKBKPLZXTTHGGBQCDFOOGMEIHUIFVPNGPWAVCEFUSGBQVEOYZSXJHUHIFLKS");

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
    msg.setTimeStamp(0.231311822406);
    msg.setSource(16196U);
    msg.setSourceEntity(20U);
    msg.setDestination(50525U);
    msg.setDestinationEntity(175U);
    msg.topic.assign("LSCATYWNCITUVHBVNKGMFHORDFZXRCTSZFFRBOYTISIJUJFEN");
    msg.data.assign("LRVFTMZKHRFSIXUAFPXGXRWHGVEGTQEDJSRYNDXVYCJFCRSXOZLECIGOBWKOTIMWWSHLEBEOUFCNVJHVSMDTHQASYPYIOBGYSEBBNBPSKLCJZQZMKHOXXZAZAEJJZUNAWSHCJRDVBYMIUEINLTYIMPWLPWIJZAOBKKZXTUNTCIYRKQOQFOGUXJQLDDRVGYPCWTGAPASCHNKA");

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
    msg.setTimeStamp(0.199428599603);
    msg.setSource(20336U);
    msg.setSourceEntity(209U);
    msg.setDestination(44349U);
    msg.setDestinationEntity(203U);
    msg.frameid = 227U;
    const char tmp_msg_0[] = {-60, -39, 71, -9, 31, 97, -58, 58, 102, -73, -21, -87, 64, 59, -28, 70, 4, 102, 87, 76, -41, -84, -98, 109, -34, 16, -108, 57, -23, -62, -68, -95, 43, -88, 2, -45, 87, 47, 81, -34, -92, 84, 98, -71, 47, -51, 7, -48, 78, 25, -128, 63, -102, -77, 115, 19, 38, -1, 73, 91, 98};
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
    msg.setTimeStamp(0.663170541875);
    msg.setSource(22156U);
    msg.setSourceEntity(135U);
    msg.setDestination(12426U);
    msg.setDestinationEntity(231U);
    msg.frameid = 143U;
    const char tmp_msg_0[] = {-91, 49, 104, 96, -122, 19, -81, -33, -108, 60, -86, -96, 19, -125, 113, 31, 85, 124, -112, 39, -23, 60, -82, -76, 101, -121, 53, -17, 73, 105, 59, -67, -39, -94, 110, 60, 78, 41, 9, 25, -52, -77, -114, -44, 89, -96, 7, 110, 27, -19, -99, -62, 22, -61, 79, -113, -78, 65, -12, -40, -39, 4, -5, 61, -98, -113, -116, -48, -31, -36, -16, 23, -99, 67, 83, -19, -118, -65, 85, -3, 33, -31, -71, -70, 112, 39, -95, -44, 27, 105, 0, -102, -62, -33, -35, 115, -41, -121, 57, -87, -62, 26, -90, -62, -9, -76, 62, 54, -33, 67, -73, -95, -61, 63, -68, -6, 95, 120, 17, 0, -127, -110, -2, -124, 121, 102, -79, -55, -65, 86, -59, 95, 24, 26, 25, 116, -80, 108, 113, 69, -121, 43, -34, 66, -72, -96, -98, -33, 60, 18, -69, -63, -23, 43, 63, -27, -76, -64, -112, -61, -6, -13, -95, 92, -108, -69, -84, -107, -126, -95, 95, -65, 107, 107, -46, -125, -112, 13, 35, 50, -77, -70, -31, -12, 4, -64, 76, 98, -11, -42, 112, 62, -104, 19, 45, -14, 26, 15, -125, 123, 112, 36, 89, -68, 2, 56, 77, 42, 45, 120, 121, -70, 25, 123, -127, -52, -50, 100, -8, -102, 106, -57, -123, -87, -15, 74, 86, 59, -73, 61, -96, 119, 28, 17, 20, -4, 113, 65, 22, -110, -16, -100, 117, -61};
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
    msg.setTimeStamp(0.953492106258);
    msg.setSource(37407U);
    msg.setSourceEntity(14U);
    msg.setDestination(39460U);
    msg.setDestinationEntity(146U);
    msg.frameid = 16U;
    const char tmp_msg_0[] = {-5, -123, -111, -21, -23, -80, -119, 7, 87, -105, 71, 4, -54, -96, -37, -32, -78, 74, 112, -52, 125, 32, -22, 83, -64, -26, -23, -64, -108, -3, -25, -82, 67, 66, -32, -111, 28, -65, 76, 42, -43, -53, -29, 47, -64, 62, 109, 44, -70, -10, -113, 20, -123, -25, 120, -66, -121, 18, 109, -97, -85, 23, -36, 38, 56, -54, 7, 120, 118, 26, 79, 34, 118, 116, 73, -29, 66, -125, 39, -19, -108, -92, -86, -52, -67, 72, 7, 106, 9, 69, 55, -109, -95, -106, 116, -108, -122, -61, 84, -2, 13, -20, 70, 33, -73, -77, -52, -126, -109, -13, 79, 24, 42, 104, 12, 44, -124, 118, -32, -15, -59, 88, 47, 4, 15, 39, -104, -125, -92, -97, -93, -84, -44, 27, 111, 39, -86, 3, -2, -44, 75, 23, 67, -125, 80, 92, 93, -62, -8, 101, 85, 87, 43, 93, -90, -105, -34, 122, -128, 55, 51, -120, 67, -15, -45, -113, -93, 79, -47, -114, -68, 116, 35, 8, -39, 74, -13, 41, -33, -62, 126};
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
    msg.setTimeStamp(0.683006631611);
    msg.setSource(23865U);
    msg.setSourceEntity(229U);
    msg.setDestination(49068U);
    msg.setDestinationEntity(157U);
    msg.fps = 203U;
    msg.quality = 49U;
    msg.reps = 192U;
    msg.tsize = 133U;

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
    msg.setTimeStamp(0.0741556014895);
    msg.setSource(46730U);
    msg.setSourceEntity(83U);
    msg.setDestination(28277U);
    msg.setDestinationEntity(20U);
    msg.fps = 49U;
    msg.quality = 54U;
    msg.reps = 196U;
    msg.tsize = 145U;

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
    msg.setTimeStamp(0.403029116459);
    msg.setSource(31528U);
    msg.setSourceEntity(157U);
    msg.setDestination(33357U);
    msg.setDestinationEntity(18U);
    msg.fps = 237U;
    msg.quality = 106U;
    msg.reps = 161U;
    msg.tsize = 75U;

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
    msg.setTimeStamp(0.613134845684);
    msg.setSource(47078U);
    msg.setSourceEntity(105U);
    msg.setDestination(593U);
    msg.setDestinationEntity(105U);
    msg.lat = 0.9556175962;
    msg.lon = 0.25947031857;
    msg.depth = 48U;
    msg.speed = 0.776277228891;
    msg.psi = 0.666550703238;

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
    msg.setTimeStamp(0.836240443454);
    msg.setSource(23688U);
    msg.setSourceEntity(34U);
    msg.setDestination(46835U);
    msg.setDestinationEntity(132U);
    msg.lat = 0.617242202283;
    msg.lon = 0.804515776206;
    msg.depth = 38U;
    msg.speed = 0.320307412624;
    msg.psi = 0.346618188081;

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
    msg.setTimeStamp(0.267477299009);
    msg.setSource(42574U);
    msg.setSourceEntity(252U);
    msg.setDestination(1402U);
    msg.setDestinationEntity(57U);
    msg.lat = 0.0508732773464;
    msg.lon = 0.776060655679;
    msg.depth = 236U;
    msg.speed = 0.436351543747;
    msg.psi = 0.763195217518;

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
    msg.setTimeStamp(0.91709882223);
    msg.setSource(57503U);
    msg.setSourceEntity(31U);
    msg.setDestination(44392U);
    msg.setDestinationEntity(21U);
    msg.label.assign("CXLTAATNCVUEIJBSYSMXHFLYGSDMOYOJQBXIQOQAOIBKOVWIUIUUWHGKNENFWKXLDDPEJFTLOJVGBPLZWSWNAHBHJAZVEBL");
    msg.lat = 0.226626099805;
    msg.lon = 0.547624509107;
    msg.z = 0.284925861148;
    msg.z_units = 207U;
    msg.cog = 0.0737591098034;
    msg.sog = 0.0836476354627;

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
    msg.setTimeStamp(0.0716489382461);
    msg.setSource(59051U);
    msg.setSourceEntity(169U);
    msg.setDestination(40253U);
    msg.setDestinationEntity(24U);
    msg.label.assign("HEOFLITVSKGEBIPHPFSZZYMOQZJXHKWNC");
    msg.lat = 0.690470517354;
    msg.lon = 0.867053891766;
    msg.z = 0.574527665786;
    msg.z_units = 94U;
    msg.cog = 0.324650192912;
    msg.sog = 0.81851695431;

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
    msg.setTimeStamp(0.62709028016);
    msg.setSource(51424U);
    msg.setSourceEntity(143U);
    msg.setDestination(36997U);
    msg.setDestinationEntity(153U);
    msg.label.assign("IZHUZZEPSNIVZTKQLSAXHFYURMASHODYUDWACTTZBTKRHQDPEIUSHPIEVOEKVJJBFFQNNBNOZIDEYXZMEFYYDOJIYOXGFYBXVGQRAYWL");
    msg.lat = 0.868316489874;
    msg.lon = 0.209513612952;
    msg.z = 0.564891313596;
    msg.z_units = 124U;
    msg.cog = 0.696584884811;
    msg.sog = 0.179267541527;

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
    msg.setTimeStamp(0.950020569497);
    msg.setSource(62405U);
    msg.setSourceEntity(225U);
    msg.setDestination(11854U);
    msg.setDestinationEntity(152U);
    msg.name.assign("OYUBMLHNLGZGDAXANMQLEDTZYWZECSBJYHIDBEQRULBBXIVFTFIEXVIHNEIREAMTWQCCQATWWFLKSUKDKXXNGKJROYVKMVBVJRIQMOFZZGXWTLQCZCYWINWKOUSURCKZEUBVEUOTJDAMGCNTRDY");
    msg.value.assign("UXVWWISOHKNOIRTSFXVXGQLRCBMUBXVJADAAVLVOXDWTYKLCOMBUWFMNLECKRRAQGNQBUGQUI");

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
    msg.setTimeStamp(0.280598890377);
    msg.setSource(60053U);
    msg.setSourceEntity(27U);
    msg.setDestination(48093U);
    msg.setDestinationEntity(20U);
    msg.name.assign("ZCZQBLBPEHIYAIRSGHLRKWGGNBFOEUGKDTTLZQKUXBOROUOMCDWVH");
    msg.value.assign("DIRXPHMLAZRDBOYSTLKQOMNKPOSUORDFPQLJJEEJCCLJMWTFVGBQUZSIADUNHWVTEOQXHKHTVGCPZRBGRUIPGTZNXYUEODVXMMRAYTYGUHCOREAKLXGAVESRBYVFQDPPLMFEUWXBFDCENCPBOSLLTQRHWHJAXHFKWDOIZFYYSGICTXMIDWIKMY");

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
    msg.setTimeStamp(0.397423598887);
    msg.setSource(59224U);
    msg.setSourceEntity(170U);
    msg.setDestination(31022U);
    msg.setDestinationEntity(45U);
    msg.name.assign("FRTAERXDESMXEQREBINJWWLQWHJORQSPBVLOFLBRJQNPFVTRXOHYKPVVORZDDTJVJHTMEBYOYYGQCMHAGSOHTIMPGABJXILMAALWQAZOOCTKRWKSXJCXIDDIGHEMSCZAWGAKEYDEPBYDFKPCYHLVEPUQFGUGUNVRZLFNKHPQIQDMFTLXLZCGJRGSJWMGYDFXLWKUYSIYBPTKATZTCNWZUXSNISINMC");
    msg.value.assign("MOMECNEQDTJOACSXTNJERQVGTXPPRPGZFQWHAEECPIDVZJWZUBKYXDKZLDPYWOBNPLXLSSXJIEPNHRGXGGBVYLLBOGJSRKMZVCHISUTTRQAQBBIKRBGPWMZOFAJSHUAFAEKVKMFTDXYLQZNMIINRLEODDOWXKDECHBZLTWNJDRSQCUTOVJLYNHQJOL");

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
    msg.setTimeStamp(0.214319603665);
    msg.setSource(31343U);
    msg.setSourceEntity(74U);
    msg.setDestination(2682U);
    msg.setDestinationEntity(236U);
    msg.name.assign("QKWBZTZXUQTAIUSTBIMWOVDYCVDFS");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("VROIBQFWRDLQQPKMHGNZKSXXRECUZHFOEVWRRKRDJYGSCVPGLPJSMTVNYHVX");
    tmp_msg_0.value.assign("HPVINAYBWUWDPGFUXPHWUMKORAPCXQCALXGXDUSBSGONZSQOEGYGVLPVEWKEKJRSYNLNRSNBLWBFHFMZTSKHBIRAQPBCHATTPGXOVLEMTTCGMAECZYUHLNQWVCLQYWTZYHHCZVXKINATOFHQBFJFUCLCJMDOKPYQWQXDJMDTVRKDVIARFZDJOZNRDIJPEEUELZXAIKLMISXBWOQUHUMNTYUZYBSJOQCZJKRFPOERDMDGRBEYJXFKIJVSWNI");
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
    msg.setTimeStamp(0.777436847131);
    msg.setSource(24136U);
    msg.setSourceEntity(178U);
    msg.setDestination(60398U);
    msg.setDestinationEntity(111U);
    msg.name.assign("SEFRKGYFUNJUTQOHAPXKPLPJIGMQXNYQLRHWOMTVSWYMILCDFBPVNAZFBBDFYLQIYVNZNOGYCXGIIOOJJCZRZQKLEAHNPXVQRPYGAMKAHSZNDFOUUAYGVYKQVLBNCSSIJUKLBTRERWAVTQGWAJTUMXJ");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("YTYROOWMKYLUDMLMLNGGRHTPWICZWVORVBDUJQGZQWEFNTMBFDMJDVRMREABATYDOVB");
    tmp_msg_0.value.assign("PTGOCLLSZKUHZPRVOPJBICYKCDSEMZRYNUZBCYRWDLTKUIBAQQOSDAQDMFWFXNMERNIBPGKYQSJLHFKWYYKLEXPOAHBZMXWQFZLAOASLRUIGFATFVBYQBUJGSOSMAICYLHMDSQGCKMPJXGXJNJGBWJPQUNHKTCIWTDFRPCVDTRDUWMEEHOZJJAKONIXLQUYTCX");
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
    msg.setTimeStamp(0.884052830291);
    msg.setSource(27255U);
    msg.setSourceEntity(131U);
    msg.setDestination(64386U);
    msg.setDestinationEntity(184U);
    msg.name.assign("BVZYKRCVCKOYHXIJYVPZKGPJPWBGWDNBAEUHBEOHIPYMBEERFFAUGPFNHTFUMJJEWMEYDLUQONBVZQMWATLQRKCZTXJAXZLDGMULKZYNCZQQEXQWKOHQRQMCRLDQKSXISUXMUXPPYAMBIFCZVOTVNSHNMNJHERCWNAQEILTPSDVJFDFVFCPIWXTLVYDJMUNTIPGOBAWFCJGBZOJHTSCXYNTKUSADAYGDGWIGVWSAZRRIISLGRKEORLT");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("MUPEGYYUXBNGNOAMPIVNMFQEPBZYCCZFAQQGTHYLRAMGSKUVJLLQADDOOCPECESHIKFTRXKQPXXCDRTYJVKLTRKJOSUNZNSBWEENWOONCRFPFNMIVYLIUQFVYZGDBFJVWTPSUZRBGZBBLHZSWSDRXKDKIJITAVHXZVMGHEABXAQDUJJJXAWLTMZHLFIWUSOATDEGBJRF");
    tmp_msg_0.value.assign("UGWJDSRXOKMPTCGEYAOOOHYZDCYWBXQPUDEDJYYMCNXJTFSUGLRMCFWELGSCGEFXRZZXRWDQPWRFUJVSQTWHYQYIUFEXNCUNFHDDSORKVHTVVBJKTZJIAEPZSOAGZMLNOTLRKMBBQDHLWI");
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
    msg.setTimeStamp(0.37274880054);
    msg.setSource(52146U);
    msg.setSourceEntity(106U);
    msg.setDestination(41577U);
    msg.setDestinationEntity(74U);
    msg.name.assign("KFONJZZGQLSWJSZQTILMIKCKUCDSOLHWVNOEHZLDRTHJESTVMUUIOMLUQXIJTAQJCRVIYHWDUYEAPUFMCHVATCGBTQNGXEFRFVDEPCSKAZPEKLPBPSLSDKZIIGWBMVGPMJBUJFHBDRMVZMJ");
    msg.visibility.assign("GBIVAASKXSHURRBELZTLFSMLEBGELUFKPEJWHYDMWKFVRBSEXGQDQYGNIQRAWJOSUAOAPNHTRNKZZGJUSUBVOZLZFTXGWGWLMGZPQZIEPJPCKLXBRWAUEBNAECZNMHDPGILCCDMWYKVXKQXKPYJNMDRTKHYQ");
    msg.scope.assign("GFYPRGQOPZVTUIWVJAIJBGGGYYPRVSBCRHTXFCVMLDDZYMQJFCLNXQWKPFIPILRCFXRMHLQUHHLOUPWFZFNLJORTWMGIHRTPMYSWXBDNOJEWSJXIOSIDHKIZTQUUUHYZIUVNAAZAEAAKARUASBSHFBCDZTKVEEXBGGXNWUYLBRTAIBBTDKKGNOEJEQKPCQLYMVCNQCJNNKXACVSUODDOFOEHLMXXEE");

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
    msg.setTimeStamp(0.75424112454);
    msg.setSource(61761U);
    msg.setSourceEntity(151U);
    msg.setDestination(18383U);
    msg.setDestinationEntity(234U);
    msg.name.assign("LQWWLKJZXYUVAGIDQZBBIMHQMISCEXKXRFJDEKNJGARAKNTUKGIBNONTHSLOQLKIGXVGAGFYHXMORODELAZPGVCODFBZTJMPEPWEFXHBQJ");
    msg.visibility.assign("ISFMULRZYTELZZIARSVCNNMAAPJUZBBOATNYWYFVBKWLCRJQRCUMNTYPWYCXAMPWPZAKOSMJGNITGHQKHLKVYSQKLDVEYQBIXQRJXNWEEAGGTZCFLPUZKXMGRQSHFXI");
    msg.scope.assign("SKDLWAUGPMCENTWODXJLATIYIZHPEAHLVPBFDMDINQBVTWHZYGSTACYRBNWWXMDCLJRFDACPFGTEBW");

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
    msg.setTimeStamp(0.329212122592);
    msg.setSource(28038U);
    msg.setSourceEntity(14U);
    msg.setDestination(38855U);
    msg.setDestinationEntity(43U);
    msg.name.assign("ULEZBESIRGYKHGPCCIORPJBSUFMDBGWIXRBLZOVJYFXWMQRHWZAUICNWKKHHMBUTJIACGXPJDUTQLAZAEQVAOZSMCCAENKVUGDRBYLYXPCOKYZT");
    msg.visibility.assign("FYDBMIOLAGHQKTSBRBBWREKJQCAXXPIMTNLXDWCZEHETSTMIIJVCUEARZYSBTGDSJUXLXNJIJYXUWAHYHLERIYZAQWVRE");
    msg.scope.assign("VJMCNNJXRGFQTRFNBPLEHYLFTPMMUQELXKAFCMLJUBCBMBODFWWEQHSIMOSTKIKDLIXANRRFUGPLYKWACVAHFGKRYKIIMIAGZCAHGIGWAFTAGYZFJGBJQSJHUVSEFUXVGNPYASEQYELSBMUSVPISTAVZBCOH");

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
    msg.setTimeStamp(0.671541749629);
    msg.setSource(34155U);
    msg.setSourceEntity(84U);
    msg.setDestination(3296U);
    msg.setDestinationEntity(194U);
    msg.name.assign("JRVITCZYRQJEIYKXSDAHLMLAISKCQIGCQZIEYBYTEPKRBBKHSDJPOGNEXHWPVICWOVPNTCFFFW");

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
    msg.setTimeStamp(0.362112360628);
    msg.setSource(19296U);
    msg.setSourceEntity(185U);
    msg.setDestination(11500U);
    msg.setDestinationEntity(152U);
    msg.name.assign("EDBRINQVDEPITGGGFRYFQMVENZGISHXQNIVYEMKEEUPWXKWPIACJBFQLFRYZCUSZHJLRGTJTUGBZFOYLPUWJNLDJFGXMLMASORNCLANCRANGQXCPOYWAHEXKDSSBUMKRSVGCRDMCSEEVOMFICDPBBYYQQDOYLKAOVVTFBKSTBTJN");

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
    msg.setTimeStamp(0.802547113999);
    msg.setSource(24024U);
    msg.setSourceEntity(108U);
    msg.setDestination(59450U);
    msg.setDestinationEntity(22U);
    msg.name.assign("HIZNWJFFWFGRFCYVDDZJMEQLBYUKYFYISCSXAYTLVNEDAQRGDDF");

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
    msg.setTimeStamp(0.629996519743);
    msg.setSource(53724U);
    msg.setSourceEntity(56U);
    msg.setDestination(32732U);
    msg.setDestinationEntity(113U);
    msg.name.assign("WUZXUKBWCLIBPGWOWWVTOEFDKQGLOIYNGQDBVSFQRMSAVSXXNAFNMRDNJFNQHERRMJNGXXMSGREBZMWVJEAXOODTKMFBCCQDFQUOPRITJEXLEKHDSYSGCMYKEZQARPKCLWAWYGRYOPYSISPUPOVMEUACZCDPAGTHUNM");

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
    msg.setTimeStamp(0.250521485333);
    msg.setSource(23886U);
    msg.setSourceEntity(247U);
    msg.setDestination(17458U);
    msg.setDestinationEntity(50U);
    msg.name.assign("TJQDPYFHNBIMKGPGHJUINYNPPCQIZTLHSUOSNGZQFUCMAFCVFUZXQYWBBCJXHKICGXKOZTIOLBNAZRLWOJIZKFQRFHDLVNOFJ");

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
    msg.setTimeStamp(0.311960672281);
    msg.setSource(17718U);
    msg.setSourceEntity(209U);
    msg.setDestination(53572U);
    msg.setDestinationEntity(195U);
    msg.name.assign("IZHRLQJQGCYUCNLQBZQNWTOTDKIREAZBLMEJVPWOGPAIKJVMPMFNSBPKOWTJGKHPEBSOERSKHXGAXSUEFCFTJZURJBTGTYHGKBCILAIVJTQDVXYPJBVNXOYSPVTMAXU");

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
    msg.setTimeStamp(0.972099437978);
    msg.setSource(19853U);
    msg.setSourceEntity(128U);
    msg.setDestination(34139U);
    msg.setDestinationEntity(103U);
    msg.timeout = 2368679494U;

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
    msg.setTimeStamp(0.918041718841);
    msg.setSource(13133U);
    msg.setSourceEntity(141U);
    msg.setDestination(11382U);
    msg.setDestinationEntity(18U);
    msg.timeout = 2322790788U;

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
    msg.setTimeStamp(0.429121415859);
    msg.setSource(15669U);
    msg.setSourceEntity(168U);
    msg.setDestination(25833U);
    msg.setDestinationEntity(252U);
    msg.timeout = 1218809684U;

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
    msg.setTimeStamp(0.0328687917824);
    msg.setSource(6599U);
    msg.setSourceEntity(149U);
    msg.setDestination(5605U);
    msg.setDestinationEntity(156U);
    msg.sessid = 3681411091U;

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
    msg.setTimeStamp(0.731650843327);
    msg.setSource(41727U);
    msg.setSourceEntity(218U);
    msg.setDestination(62269U);
    msg.setDestinationEntity(185U);
    msg.sessid = 1106017689U;

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
    msg.setTimeStamp(0.511609422288);
    msg.setSource(60212U);
    msg.setSourceEntity(220U);
    msg.setDestination(61978U);
    msg.setDestinationEntity(99U);
    msg.sessid = 2289196231U;

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
    msg.setTimeStamp(0.0020669952389);
    msg.setSource(64112U);
    msg.setSourceEntity(220U);
    msg.setDestination(53160U);
    msg.setDestinationEntity(124U);
    msg.sessid = 2857363160U;
    msg.messages.assign("SKMSDWJAEYKITNABGBVCTQYEQGBNUOFWILTRLPMTUFYQOKIYWFHXPL");

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
    msg.setTimeStamp(0.304145918873);
    msg.setSource(14344U);
    msg.setSourceEntity(65U);
    msg.setDestination(4373U);
    msg.setDestinationEntity(238U);
    msg.sessid = 2696187242U;
    msg.messages.assign("TTFJUDEPIQESOUHVSODAVQIJPUCKBDAPNJESIHUVPNRSJMTCPGGHFMMMKCUWGIYVNLZRILXOBRXCHAPMQYAWQTTHWYEYEQHRQIQYBFJJPRKNYVCCBOMVZUQWVKVLTRFOMTZGJZCEIOGDXEXKZJSWXVDLYHURZIDSEUNKKZMABKONDOTGCFHGNDWOCVOLFGAREAUZFDIFFBJHAXXSNLKMCKEYTNZBNLISAPYXULLRGXQBWWWYLMTSQJDXPR");

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
    msg.setTimeStamp(0.839940326585);
    msg.setSource(3829U);
    msg.setSourceEntity(254U);
    msg.setDestination(35603U);
    msg.setDestinationEntity(103U);
    msg.sessid = 3398796076U;
    msg.messages.assign("KGTXUSGXYSLOIOFXZZHUNPSCEDMMTVNUCGFGBVIZVGWRKFPJEATEXYTVLRDHSHMCNIVDVVOMQCYDDUTFTPWMLQTYJHSIFCZKDRSBQOVRWGABKUHDMSSYJLPGYQXJEORLENZBRNHNTCMUWOSUUQFKEWPQYKGBCHXXNWXAOPNIMYIJWALXBFO");

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
    msg.setTimeStamp(0.0225750244956);
    msg.setSource(25911U);
    msg.setSourceEntity(57U);
    msg.setDestination(32345U);
    msg.setDestinationEntity(188U);
    msg.sessid = 2527885052U;

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
    msg.setTimeStamp(0.991262336634);
    msg.setSource(1665U);
    msg.setSourceEntity(149U);
    msg.setDestination(22815U);
    msg.setDestinationEntity(129U);
    msg.sessid = 3634572621U;

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
    msg.setTimeStamp(0.41157540702);
    msg.setSource(45312U);
    msg.setSourceEntity(71U);
    msg.setDestination(34376U);
    msg.setDestinationEntity(253U);
    msg.sessid = 3838389129U;

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
    msg.setTimeStamp(0.634834989285);
    msg.setSource(13892U);
    msg.setSourceEntity(152U);
    msg.setDestination(30646U);
    msg.setDestinationEntity(200U);
    msg.sessid = 3270038223U;
    msg.status = 250U;

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
    msg.setTimeStamp(0.688627238804);
    msg.setSource(28680U);
    msg.setSourceEntity(208U);
    msg.setDestination(11255U);
    msg.setDestinationEntity(173U);
    msg.sessid = 3168354461U;
    msg.status = 175U;

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
    msg.setTimeStamp(0.32435888511);
    msg.setSource(58609U);
    msg.setSourceEntity(207U);
    msg.setDestination(65238U);
    msg.setDestinationEntity(167U);
    msg.sessid = 3292407632U;
    msg.status = 207U;

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
    msg.setTimeStamp(0.410212875355);
    msg.setSource(48654U);
    msg.setSourceEntity(72U);
    msg.setDestination(25283U);
    msg.setDestinationEntity(182U);
    msg.name.assign("POKTALKYBDGMQFYJUHRXKNIHZPTBJEIRBVDYSXSCJONTQXLFLTCQXPXVWHHMPLIMHWXDZUFGJNTSHLTAIYCVKDVRNJPRVJAUKKHBWDSZQWIBIGSOCIMEUWREOFEVZLKLKGYZQBZJQWOAMCACGHCZXYOGWVIDULMUEOXMOBDPRDNAIHNEMBUAVRTBYWGPPZVUSSQXFAWKRMSTQCFHGBSPEFIGDEQNWLURCZYOM");

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
    msg.setTimeStamp(0.616980549168);
    msg.setSource(56467U);
    msg.setSourceEntity(18U);
    msg.setDestination(14630U);
    msg.setDestinationEntity(243U);
    msg.name.assign("QPHNIPTZNUGTEYBQRQTXMIWWGECPPLVPCSXLHYKBRMZXSKNFGGOYQYREURVJBAOVUFKJZQACVVJSBNOBMHMHLAWTXVCJPDLKGXYSIECREAJGFATJHPHCGZAWUEVOKHDJZGJTNXLNAGYKWDBSSSTJHJTVNAVYCWZPADRUQXIIFYDMFNMAPMNWFWWGIUSFRFQKDNXZFUECDLYIKXORSTTUVPBXDKLLQIOWUMQKROLBOISZ");

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
    msg.setTimeStamp(0.267134907014);
    msg.setSource(42117U);
    msg.setSourceEntity(87U);
    msg.setDestination(49003U);
    msg.setDestinationEntity(120U);
    msg.name.assign("SXFWRCUVGJZNPIUWOVFRRVSKQFYDMMKOQSIGVDTOWPHOZYZSFQHYLUKFMQXQRWIWVAYCEOZCOPDANBXUNUMKUHBPMMREYPYGFXOQBETOPCGFOXCPLZGWWQXJCHYMWBUEYLGQHLIEWPWZHBHJLDHNALJPVNNIALNIAEXLBRYTAMOJCVZMFMGNTZFGXIUBQLS");

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
    msg.setTimeStamp(0.00455264652332);
    msg.setSource(5164U);
    msg.setSourceEntity(185U);
    msg.setDestination(57122U);
    msg.setDestinationEntity(104U);
    msg.name.assign("HQDVXJPLCSJTVKBCVVWQFODHIGPCTFGHAKJIWPFTNWMYSEDPFQDBISYRGEXIONKQCWSGYQXBPBRCMVZCVDOMUIOBLILBRDNTAUREVMPN");

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
    msg.setTimeStamp(0.623155240098);
    msg.setSource(60542U);
    msg.setSourceEntity(73U);
    msg.setDestination(56769U);
    msg.setDestinationEntity(132U);
    msg.name.assign("NNIUCNBJFEZSPYCIVATKIFFSZUMVUAKHVEYQCVXKRNIIDPPOUUJZLGBKDXIKTGZMMMALWDZEWCSLAIYOHOKGVPEANUHRGQOSYWPEQTUQGCGTUIRMJLGMLFUTFEOJZLKFQKOQZTJDXA");

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
    msg.setTimeStamp(0.950847107215);
    msg.setSource(33729U);
    msg.setSourceEntity(32U);
    msg.setDestination(2924U);
    msg.setDestinationEntity(0U);
    msg.name.assign("VQVOYKGGESQNJVSRCOGNHJXDHHVRSWSAJYOFCOGKVSFFHBNDLYJNOAPERCYEZXMKQTCCZZYQBDYAJTWXQVLUWCAYMBNUZFFLPQMWCUOSLUCOCXRYLKDUDCBKLFEJSEDVJDZEJWHLT");

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
    msg.setTimeStamp(0.78496711034);
    msg.setSource(63909U);
    msg.setSourceEntity(229U);
    msg.setDestination(57333U);
    msg.setDestinationEntity(238U);
    msg.type = 159U;
    msg.error.assign("DIJBBNSWDHSFNVNXSGWTFIBKDWVTZRCZWZMTMTFKWOYSTCESDZGKFZIFIGUGVLFVUNLDPQYOUCJHQTHRHPWPORVMHXBQIXLSBCPCPEYGAGXXFBJXYJKIHZNFEQRGDYOMJLQXKAQDEUQBSPEODEMIBHYTMCQYRFRZNBHSNDENQEXJZYHUJVKOJVAJGIBXMRCAWY");

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
    msg.setTimeStamp(0.148151682383);
    msg.setSource(5538U);
    msg.setSourceEntity(19U);
    msg.setDestination(12784U);
    msg.setDestinationEntity(231U);
    msg.type = 160U;
    msg.error.assign("SCGQFLWSVNYMXGUFFSUOEMCDKJUXKYLZZCOAKWVJOILZMEWTUKJRLRTMGXEANGFVDXIELGOMRNETAWDVHYLZSNRZBAO");

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
    msg.setTimeStamp(0.996700667515);
    msg.setSource(48785U);
    msg.setSourceEntity(136U);
    msg.setDestination(58436U);
    msg.setDestinationEntity(248U);
    msg.type = 232U;
    msg.error.assign("YKZQZFWJIKNLXJDGVWMCTBCSKQSIZKJLSGAJZYBHKQZXTHXNJSFFLBOAKRDMYOAMAZUUWFHVZEKFRCPYNWBRMMYWCCQSCOACGESVLDFJWOHUQUGUVTAPTACJDWYORRB");

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
    msg.setTimeStamp(0.720835330075);
    msg.setSource(40358U);
    msg.setSourceEntity(239U);
    msg.setDestination(18798U);
    msg.setDestinationEntity(134U);
    msg.seq = 9946U;
    msg.sys_dst.assign("XYZKRGWOQIQIALNQQJIFCYCYDAILJPYCLXWXDQZPIZLWCRHYQCALLRBURFKKQUXDBCPBEFLHDYWUPBHGAFWQEXEENZJGGJGJWRFHONYURHRBAOVBZPNS");
    msg.flags = 59U;
    const char tmp_msg_0[] = {-53, -37, 45, 115, -53, -103, 97, -22, -95, -77, -68, 17, -39, -4, -126, -117, 66, 36, -48, -14, 29, 121, 120, -66, 98, -91, 60, -115, -29, 29, -88, 27, -32, 107, -29, 56, 1, 51, -75, -64, -125, 63, 48, 28, 73, 56, -53, -77, -46, -76, -44, -126, -36, 52, -61, -28, 126, -10, -88, -34, 3, -100, -33, -23, 59, 4, -13, 57, 33, -100, -123, 34, 66, -2, 36, 46, 11, -18, 104, 77, 47, -51, -111, -16, -41, -26, 32, -6, 36, -85, -73, 105, -107, -125, -58, -44, 22, -75, 105, 103, -58, -57, 0, 68, -115, 56, 40, -83, -107, 101};
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
    msg.setTimeStamp(0.0565000219374);
    msg.setSource(57854U);
    msg.setSourceEntity(189U);
    msg.setDestination(36701U);
    msg.setDestinationEntity(201U);
    msg.seq = 52072U;
    msg.sys_dst.assign("HZYQQDORAYBWTKMIPWSHKAGSMWONRVWYIUDXQGEYIHUCJPOAGFUZLYTNWCHFOMOCNCSFTYXZSJIVVQNWGZLRXOVSHQTFFVMQRFMCHJECIEJLODFLJXDWJZVDTEMPNEZZTHSMKBKKFXORBDJMYJEPINACNKQLATRKFWNQKYLGOGBVRHPUXBGREIGDEGXZPUDHIGUBELRUTPBSSZAUJPWAVDXXBSPQJ");
    msg.flags = 101U;
    const char tmp_msg_0[] = {114, 48, 49, 73, -72, 72, -120, 83, -38, 111, -115, 23, -81, -101, 112, -2, -55, 125, 21};
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
    msg.setTimeStamp(0.240593900068);
    msg.setSource(6886U);
    msg.setSourceEntity(41U);
    msg.setDestination(13938U);
    msg.setDestinationEntity(161U);
    msg.seq = 42250U;
    msg.sys_dst.assign("DIFKBJEWQVCNYUFAUOJSHZZBQKEAJATONYUHJVVBQKZGTESMTFYJOZIYPHXMNOICCFABZRLEXPSPYDGNNSPGBHTLYUXPELXKWAYVNWDLSDBXASF");
    msg.flags = 225U;
    const char tmp_msg_0[] = {0, -66, 81, 56, -73, 73, -92, -4, -8, 48, -15, 44, -2, 14, -71, -17, -6, 75, -87, -23, 32, -107, -116, -31, 62, -11, -59, 13, -60, 17, 17, -69, -31, -120, -47, -56, -88, -114, -2, 77, -1, 107, -19, 96, 96, -1, 11, 25, 106, 126, 23, 75, -11, 93, -79, -95, 1, -16, 34, -10, 96, 0, -55, -44, 117, 98, -114, -80, -122, -41, 76, -5, -10, 60, -24, 92, -96, -16, -111, 119, -105, -60, -113, 120, 4, -47, -76, -46, 38, -71, -46, -17, -38, -26, 0, -3, -80, -4, 73, -118, -1, 54, 25, -47, -49, -123, 0, -61, -106, -7, 107, 63, -83, 49, -123, -104, -125, 102, -2, -114, -36, -96, -24, -11, 53, -92, -70, 88, -47, -110, -75, 11, -26, 52, -69, 30, 63, -36, -127, -64, -114, -82, 62, -110, -54, -30, 113, 73, -7, 68, -102, 93, -121, -60, 73, -93, -73, 2, -6, 10, 18, -87, -3, -126, -98, -8, -35, -62, 85, 82, -44, 35, 35, -79, 64, -124, 51, 70, -44, 90, -113, -93, 126, 97, 54, -39, 32, 73, 65, -81, -89, 92, 71, -55, 121, -113, -117, -118, 122, 117, -31, 126, 102, 60, 74, 48, 66, 116, -116, -55, 44, -29, 112, 101, 43, 100, 45, 94, -54, -94, -73, -39, 43, -49, 119, 34, -22, -82, 72, -94, -45, 98, -47, -1, -14, -93, -20, -26, 30, 10};
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
    msg.setTimeStamp(0.808765605314);
    msg.setSource(51520U);
    msg.setSourceEntity(69U);
    msg.setDestination(43745U);
    msg.setDestinationEntity(205U);
    msg.sys_src.assign("VTCFJIMKBTISGGALFGWIZXLMQPSHDZCEEZGBDFXLCJKBTZGODRNYEBTWUDRPRRKNVLTGAQOUXZKFNCDRJPWZQJXOMKRUMMMFYCUEPBFEWBQGSNKXPJDTLHAXIEDWEHIXNUVVSSPY");
    msg.sys_dst.assign("UFJWXQGLVLEYEXATQBREBPYSGKKTQXKCCYFRNTIIYTXZHJUKCSODXDWNEMOGSOQUVQKCMWEOQSUUAVZMBOUNQDVZSUDDFBHRHGPSIUODTHJRHFHLFCMVBRPWMVHHBYRZADFWI");
    msg.flags = 90U;
    const char tmp_msg_0[] = {31, 106, 111, -113, 35, -38, -78, 19, 123, -93, -23, 72, 77, 96, -10, -62, 92, 108, 58, -110, -18, 72, 76, 58, -95, 57, 46, -55, 73, 16, -38, 56, -104, -70, -6, -117, -35, -11, -75, 80, 114, -66, 103, -91, -35, -67, -69, -59, -97, -89, -44, 94, 57, 119, 113, -69, -106, 69, -30, 5, -17, -31, -21, 46, -18, -106, 5, 65, -105, -83, -30, -27, 29, -28, 50, -85, 122, -76, -85, -16, -97, 40, -91, 10, 33, 3, 119, 91, 97, -37, 41, -57, -16, 110, 111, 48, -98, -56, -54, -126, -18, 83, -5, 20, -113, -120, -5, 33, 64, 9, -19, 2, 91, 119, -1, 56, 2, 71, 83, 90, -17, 8, 107, 42, -84, -19, -106, 69, 1, -26, 72, 98, -47, 60, -104, -47, 79, 83, -29, 47, 29};
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
    msg.setTimeStamp(0.485908879105);
    msg.setSource(54991U);
    msg.setSourceEntity(113U);
    msg.setDestination(44296U);
    msg.setDestinationEntity(8U);
    msg.sys_src.assign("FDBLIAGPXASIZECMUQESTLYBDFDUFMXOJIWFJLVNAJOYSBMIVGURSWZTWKOQTAYJFQGELBX");
    msg.sys_dst.assign("QJYEJCPZRFQIRMDXMFMVDHYNIVRKBNLFOTXZAXAOCIZDKGOYYEQAJEEJWGGLNDNUNALWDUAZGITTPKIAMPRWTRFVBPSPUVSEODWMLLSXULVVWZBIOTNKTDCPTDRRNLQSFHZRUHZJSBWFXSISWNXUPQQFCBJLVQOGIOAZYPHCBTYTAWWZSKFGCOJ");
    msg.flags = 64U;
    const char tmp_msg_0[] = {12, 87, -84, -20, 12, 92, -54, 35, 4, 58, -18, -58, 121, 26, 126, 42, -24, 61, -109, -90, 28, -127, -22, -118, 79, -16, 0, -36, -113, 113, -12, -100, 95, -33, 35, 51, -32, 108, 44, 7, 80, 40, -34, 79, 43, 60, -47, 123, 63, 90, 123, -117, 6, -97, -95, -39, 23, 41, -65, -63, 101, -20, -89, -123, -124, 45, 43, 16, 90, -52, -61, -57, -98, -6, -123, -7, -35, -15, 29, 90, 64, 25, -56, 22, -115, 25, -128, -99, -99, 27, 4, -70, 12, 108, 55, 27, -99, -105, -79, 31, -123, -72, 88, 18, 109, -41, 82, 59, 50, -43, -61, -3, -51, -85, 111, -128, 103, -78, 95, 24, -57, -12, -65, 105, -39, -91, 63, 6, 117, -63, -109, -109, 5, -110, 31, 110, 51, 67, 65, 32, -42, 120, -108, -123, -52, 27, -49, -95, -16, 30, -112, -99, 23, 42, 96, 92, 44, -103};
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
    msg.setTimeStamp(0.880475558714);
    msg.setSource(57611U);
    msg.setSourceEntity(213U);
    msg.setDestination(40523U);
    msg.setDestinationEntity(112U);
    msg.sys_src.assign("YRTYFNZILJCEEMAWXVVQRHRUJWTONLFCHZFYUVEUBBJGTEMJBTSYVWSIQOMCXAXDNLLPAUWMAINIJWRUJMHUHVIHTRHLGELUTJDZIEMUOMWNXQSKASKFPHLCBZSNHSPNCKWCYJHPCDIMOAQWYDKDEMVGBGEULZOGARAEIVKKPZFKGNEQRYAAOPQ");
    msg.sys_dst.assign("JUSUTKLKHFRPJPMAVAWUHVQLNQIFTVJEZHODPHOVFGYRBYBTZPBLQSORVEXPTKRKZCAITEAPXOSNSCZQUFBOBHIGCYKQAXUCGGXLSOZTROMTNCJMDHDQYCDGPXDPNCRWEKOEVVSIWUORDMVCTUFORTKUWFTLJIMUAASYNQJZQGGXAQBANNWCNJM");
    msg.flags = 138U;
    const char tmp_msg_0[] = {-112, -8, -5, -21, 52, -24, -126, 91, -61, 19, -25, -79, 49, 53, -3, -82, 34, -88, -44, -81, 105, -7, 111, -94, -104, -105, -125, -26, -79, -4, -42, 8, 2, -122, 15, -38, -31, -5, 57};
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
    msg.setTimeStamp(0.657708906682);
    msg.setSource(19584U);
    msg.setSourceEntity(137U);
    msg.setDestination(53539U);
    msg.setDestinationEntity(149U);
    msg.seq = 64001U;
    msg.value = 186U;
    msg.error.assign("LALYUNALDHINPGWHEGJPVTYZXLZUTXWWSHWRPCERXMMNSAZPMIBSQKHMMUFGCCRTDJAKFIBJFVLKHOONXAXBFVQFISRRCAWMQOKVUVYTFBBFODUWCMOMONWNROCBGUTDXKEJTQWPPDKYIZINNQZETHJCLDJUEIMTPAEHCQLVEFMSYZPDOKJRRGDYQNBJ");

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
    msg.setTimeStamp(0.34299680785);
    msg.setSource(13003U);
    msg.setSourceEntity(23U);
    msg.setDestination(13098U);
    msg.setDestinationEntity(235U);
    msg.seq = 37778U;
    msg.value = 224U;
    msg.error.assign("OQADAHSFKEOAMSZQZGHDPASEWXTPTOCXCDJVHLRMODNJRWGZVPWMPGZRTVRXDTEQMWIKZBZVGEUEXOHCJWVBFVJDNSRLSPWDBLHTBLTETGOBIIYFIENAKQKNAUWMUXIVTIFLQRFJRUNJPGFJJCNSYJOQWZFTBSKFV");

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
    msg.setTimeStamp(0.867878310681);
    msg.setSource(63269U);
    msg.setSourceEntity(100U);
    msg.setDestination(8998U);
    msg.setDestinationEntity(68U);
    msg.seq = 12022U;
    msg.value = 208U;
    msg.error.assign("GXIMHGGCUUSICLYPYBXMLIFYKNXZXTBWJQTMVEKLYOBCLFTVNH");

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
    msg.setTimeStamp(0.756976570953);
    msg.setSource(46889U);
    msg.setSourceEntity(242U);
    msg.setDestination(52744U);
    msg.setDestinationEntity(62U);
    msg.seq = 39003U;
    msg.sys.assign("WWETSITDQMZWVGHDJAJPWTRBHGXKIKMNBNYATVIFJJUODPUZUQMCPUEBXFMQUFUNAQLODHKFRCXARZEELIQBUWPSPJVYEPSJ");
    msg.value = 0.251148965427;

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
    msg.setTimeStamp(0.866203839679);
    msg.setSource(8344U);
    msg.setSourceEntity(229U);
    msg.setDestination(55988U);
    msg.setDestinationEntity(10U);
    msg.seq = 35937U;
    msg.sys.assign("EHUMRJFGZRQSSCHMLXEQINIBQNDWEYZTMIZLSVGFVJBXRTMYFXNTLSOEMPUNKLOOJRVBGWXQLXUOHEIJJATCWKA");
    msg.value = 0.917477081199;

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
    msg.setTimeStamp(0.412455357456);
    msg.setSource(50771U);
    msg.setSourceEntity(159U);
    msg.setDestination(25158U);
    msg.setDestinationEntity(58U);
    msg.seq = 18243U;
    msg.sys.assign("XGBODOUEMRLISSYFSHPAJDGRGUDULFZWTQUZEMWNWIANFCGNRRTQHDFTVAAAMNPMXVQVHZUKLBFLIYXGCBPSPHZMUIXXCJKDZCJZOADSDTMIEKBXUBNYOKWQLDBBG");
    msg.value = 0.343948366593;

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
    msg.setTimeStamp(0.957719636655);
    msg.setSource(14857U);
    msg.setSourceEntity(249U);
    msg.setDestination(32040U);
    msg.setDestinationEntity(197U);
    msg.action = 150U;
    msg.longain = 0.590505565509;
    msg.latgain = 0.653210522546;
    msg.bondthick = 2559484297U;
    msg.leadgain = 0.0528939037386;
    msg.deconflgain = 0.736840581737;

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
    msg.setTimeStamp(0.587050515055);
    msg.setSource(52255U);
    msg.setSourceEntity(69U);
    msg.setDestination(55381U);
    msg.setDestinationEntity(241U);
    msg.action = 44U;
    msg.longain = 0.533930552036;
    msg.latgain = 0.216398604909;
    msg.bondthick = 3513708469U;
    msg.leadgain = 0.960204422392;
    msg.deconflgain = 0.353388485027;

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
    msg.setTimeStamp(0.983863333617);
    msg.setSource(36903U);
    msg.setSourceEntity(238U);
    msg.setDestination(5770U);
    msg.setDestinationEntity(191U);
    msg.action = 78U;
    msg.longain = 0.1037352036;
    msg.latgain = 0.704544392676;
    msg.bondthick = 1428049166U;
    msg.leadgain = 0.323242445643;
    msg.deconflgain = 0.379263095561;

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
    msg.setTimeStamp(0.939672899416);
    msg.setSource(42948U);
    msg.setSourceEntity(168U);
    msg.setDestination(53782U);
    msg.setDestinationEntity(118U);
    msg.err_mean = 0.879543269111;
    msg.dist_min_abs = 0.592964358857;
    msg.dist_min_mean = 0.0334462728531;

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
    msg.setTimeStamp(0.679428744018);
    msg.setSource(33405U);
    msg.setSourceEntity(249U);
    msg.setDestination(5169U);
    msg.setDestinationEntity(251U);
    msg.err_mean = 0.676929646627;
    msg.dist_min_abs = 0.25567577676;
    msg.dist_min_mean = 0.14866796005;

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
    msg.setTimeStamp(0.674145425078);
    msg.setSource(19360U);
    msg.setSourceEntity(91U);
    msg.setDestination(50757U);
    msg.setDestinationEntity(23U);
    msg.err_mean = 0.211961850525;
    msg.dist_min_abs = 0.860172033286;
    msg.dist_min_mean = 0.896090500965;

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
    msg.setTimeStamp(0.913733686);
    msg.setSource(183U);
    msg.setSourceEntity(17U);
    msg.setDestination(9551U);
    msg.setDestinationEntity(37U);
    msg.action = 198U;
    msg.lon_gain = 0.391180955563;
    msg.lat_gain = 0.500871702324;
    msg.bond_thick = 0.429852022645;
    msg.lead_gain = 0.406988702887;
    msg.deconfl_gain = 0.973913801253;
    msg.accel_switch_gain = 0.928763653938;
    msg.safe_dist = 0.264587945051;
    msg.deconflict_offset = 0.188673484837;
    msg.accel_safe_margin = 0.943920735893;
    msg.accel_lim_x = 0.108906138939;

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
    msg.setTimeStamp(0.918760013296);
    msg.setSource(11890U);
    msg.setSourceEntity(162U);
    msg.setDestination(30318U);
    msg.setDestinationEntity(39U);
    msg.action = 26U;
    msg.lon_gain = 0.344525214193;
    msg.lat_gain = 0.360208845087;
    msg.bond_thick = 0.454310846983;
    msg.lead_gain = 0.120793320468;
    msg.deconfl_gain = 0.765073457582;
    msg.accel_switch_gain = 0.790163327427;
    msg.safe_dist = 0.790837602347;
    msg.deconflict_offset = 0.387833051879;
    msg.accel_safe_margin = 0.50945832569;
    msg.accel_lim_x = 0.0868876333217;

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
    msg.setTimeStamp(0.424617422011);
    msg.setSource(22074U);
    msg.setSourceEntity(16U);
    msg.setDestination(6761U);
    msg.setDestinationEntity(35U);
    msg.action = 247U;
    msg.lon_gain = 0.966925799235;
    msg.lat_gain = 0.502531368652;
    msg.bond_thick = 0.333102995828;
    msg.lead_gain = 0.438423361047;
    msg.deconfl_gain = 0.0804442788078;
    msg.accel_switch_gain = 0.891323771616;
    msg.safe_dist = 0.340715865176;
    msg.deconflict_offset = 0.0426462024192;
    msg.accel_safe_margin = 0.254210449075;
    msg.accel_lim_x = 0.350723009165;

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
    msg.setTimeStamp(0.382699916315);
    msg.setSource(16039U);
    msg.setSourceEntity(129U);
    msg.setDestination(5577U);
    msg.setDestinationEntity(227U);
    msg.type = 49U;
    msg.op = 79U;
    msg.err_mean = 0.920816995096;
    msg.dist_min_abs = 0.442253849865;
    msg.dist_min_mean = 0.0629179644512;
    msg.roll_rate_mean = 0.468576444603;
    msg.time = 0.119139679354;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 216U;
    tmp_msg_0.lon_gain = 0.86392858708;
    tmp_msg_0.lat_gain = 0.170730208595;
    tmp_msg_0.bond_thick = 0.328958924718;
    tmp_msg_0.lead_gain = 0.246906974265;
    tmp_msg_0.deconfl_gain = 0.109695099739;
    tmp_msg_0.accel_switch_gain = 0.931283631507;
    tmp_msg_0.safe_dist = 0.0358399445645;
    tmp_msg_0.deconflict_offset = 0.979021156781;
    tmp_msg_0.accel_safe_margin = 0.822412240863;
    tmp_msg_0.accel_lim_x = 0.759090960678;
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
    msg.setTimeStamp(0.498847776935);
    msg.setSource(31034U);
    msg.setSourceEntity(87U);
    msg.setDestination(21080U);
    msg.setDestinationEntity(69U);
    msg.type = 201U;
    msg.op = 70U;
    msg.err_mean = 0.809049927237;
    msg.dist_min_abs = 0.188876370704;
    msg.dist_min_mean = 0.0508952068503;
    msg.roll_rate_mean = 0.430109152361;
    msg.time = 0.115229646391;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 233U;
    tmp_msg_0.lon_gain = 0.077725306421;
    tmp_msg_0.lat_gain = 0.30273120076;
    tmp_msg_0.bond_thick = 0.659902881973;
    tmp_msg_0.lead_gain = 0.704315592896;
    tmp_msg_0.deconfl_gain = 0.508513725193;
    tmp_msg_0.accel_switch_gain = 0.456133589202;
    tmp_msg_0.safe_dist = 0.774250379295;
    tmp_msg_0.deconflict_offset = 0.932454493711;
    tmp_msg_0.accel_safe_margin = 0.840879808186;
    tmp_msg_0.accel_lim_x = 0.561393029784;
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
    msg.setTimeStamp(0.0755075878097);
    msg.setSource(25378U);
    msg.setSourceEntity(74U);
    msg.setDestination(38808U);
    msg.setDestinationEntity(142U);
    msg.type = 40U;
    msg.op = 140U;
    msg.err_mean = 0.754874843568;
    msg.dist_min_abs = 0.331971902682;
    msg.dist_min_mean = 0.270867333138;
    msg.roll_rate_mean = 0.83524113756;
    msg.time = 0.66463962867;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 150U;
    tmp_msg_0.lon_gain = 0.434483965769;
    tmp_msg_0.lat_gain = 0.611995722939;
    tmp_msg_0.bond_thick = 0.515349664987;
    tmp_msg_0.lead_gain = 0.0518529767657;
    tmp_msg_0.deconfl_gain = 0.962151112205;
    tmp_msg_0.accel_switch_gain = 0.585017110558;
    tmp_msg_0.safe_dist = 0.167003135688;
    tmp_msg_0.deconflict_offset = 0.376036260464;
    tmp_msg_0.accel_safe_margin = 0.908796280389;
    tmp_msg_0.accel_lim_x = 0.486098715858;
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
    msg.setTimeStamp(0.463192951182);
    msg.setSource(50580U);
    msg.setSourceEntity(145U);
    msg.setDestination(47474U);
    msg.setDestinationEntity(112U);
    msg.lat = 0.934909098504;
    msg.lon = 0.404946033141;
    msg.eta = 2899031990U;
    msg.duration = 7664U;

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
    msg.setTimeStamp(0.953712575881);
    msg.setSource(48033U);
    msg.setSourceEntity(52U);
    msg.setDestination(13073U);
    msg.setDestinationEntity(9U);
    msg.lat = 0.623008351215;
    msg.lon = 0.964770810732;
    msg.eta = 3516144150U;
    msg.duration = 47982U;

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
    msg.setTimeStamp(0.10478827834);
    msg.setSource(54792U);
    msg.setSourceEntity(141U);
    msg.setDestination(19787U);
    msg.setDestinationEntity(177U);
    msg.lat = 0.0559284745657;
    msg.lon = 0.00474458822626;
    msg.eta = 2223105760U;
    msg.duration = 61303U;

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
    msg.setTimeStamp(0.85500121418);
    msg.setSource(15224U);
    msg.setSourceEntity(4U);
    msg.setDestination(9140U);
    msg.setDestinationEntity(58U);
    msg.plan_id = 23364U;

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
    msg.setTimeStamp(0.604195480694);
    msg.setSource(47144U);
    msg.setSourceEntity(103U);
    msg.setDestination(63640U);
    msg.setDestinationEntity(180U);
    msg.plan_id = 49965U;

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
    msg.setTimeStamp(0.23531702827);
    msg.setSource(25239U);
    msg.setSourceEntity(148U);
    msg.setDestination(35226U);
    msg.setDestinationEntity(103U);
    msg.plan_id = 1802U;
    IMC::SoiWaypoint tmp_msg_0;
    tmp_msg_0.lat = 0.0868285869401;
    tmp_msg_0.lon = 0.77305615685;
    tmp_msg_0.eta = 2191189300U;
    tmp_msg_0.duration = 29748U;
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
    msg.setTimeStamp(0.293054633858);
    msg.setSource(19008U);
    msg.setSourceEntity(87U);
    msg.setDestination(49196U);
    msg.setDestinationEntity(199U);
    msg.type = 49U;
    msg.command = 174U;
    msg.settings.assign("CNQYURXBWWMEAIYPQEINBWXKTGLDXPLMEKMUVKCSADHXWEBITLSICIPGLYUBDXOSQTBCHVGFXMFAZJCSWSRNVWMJVQVTNPAFOROHVNYFFMIECGYTFZZOQYKAUXFGPUZPRSNCJDOLJRLQ");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 50748U;
    msg.plan.set(tmp_msg_0);
    msg.info.assign("BUWWAFVMTBMVACHLEJFDCQPUPRMWYTUGSDBIJHEYRMJZQOPUJWSJXCWXTQMCIKNNIYIESQGPUNAFCVLOEWYSREGEKBZXLWDXTJSFUTNFVHQXRDPKDGPHQOSXTVCHJDQBTMFNYLUZSOBCCQXRZDY");

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
    msg.setTimeStamp(0.93988326309);
    msg.setSource(11935U);
    msg.setSourceEntity(3U);
    msg.setDestination(35725U);
    msg.setDestinationEntity(70U);
    msg.type = 142U;
    msg.command = 20U;
    msg.settings.assign("IIKXABQWBXZGOGAYSRLLWLATYUOPUXGPTEGIXBEYVYXAZOOLSABJVGAFQTBPTKEQIPLHHWDUTQSUNJZERYDMJCJENZWILH");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 9081U;
    IMC::SoiWaypoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.471385479778;
    tmp_tmp_msg_0_0.lon = 0.465440004764;
    tmp_tmp_msg_0_0.eta = 429599695U;
    tmp_tmp_msg_0_0.duration = 22457U;
    tmp_msg_0.waypoints.push_back(tmp_tmp_msg_0_0);
    msg.plan.set(tmp_msg_0);
    msg.info.assign("VVRYJRZXULIWZNOTPVJSECCBNLARFKGVGCRCCHENQYQAEOJCFGSRISUVBMOPNMQUFGNRMELXHFQAPPXOJCTAHZEEIYKNUJWYHJOZOCSBQMISYLIHQOGXJZZFHTOQKFNDYXKHLTYTATCXVKEGYUEAZGDLQWJBXSAWDJGFBBMJUKUXMFUSRSTDVWNEQNITOOMWVLYZZLKVPDBPXDMMTCKQPIFPRH");

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
    msg.setTimeStamp(0.477523145895);
    msg.setSource(45832U);
    msg.setSourceEntity(142U);
    msg.setDestination(52639U);
    msg.setDestinationEntity(160U);
    msg.type = 154U;
    msg.command = 56U;
    msg.settings.assign("KROHTIIVAWWGSZZUBGFNKDWKETYSPFHGTAGBCJRNDCJWWVVEXSKYWFPBESLYQGBWXRNRNVVIQNNIBDSHUFUCBTZKKPRXJRPHDXOCEBTSYPSNKB");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 56998U;
    IMC::SoiWaypoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.962828371796;
    tmp_tmp_msg_0_0.lon = 0.488329806682;
    tmp_tmp_msg_0_0.eta = 2098990848U;
    tmp_tmp_msg_0_0.duration = 45103U;
    tmp_msg_0.waypoints.push_back(tmp_tmp_msg_0_0);
    msg.plan.set(tmp_msg_0);
    msg.info.assign("WTPIWDTLUKQMPSRTQBAHXYVKUYSNNIVISOJCROFHJCRR");

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
    msg.setTimeStamp(0.956115173999);
    msg.setSource(39453U);
    msg.setSourceEntity(104U);
    msg.setDestination(27349U);
    msg.setDestinationEntity(104U);
    msg.state = 139U;
    msg.plan_id = 6669U;
    msg.wpt_id = 190U;
    msg.settings_chk = 41748U;

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
    msg.setTimeStamp(0.545272082691);
    msg.setSource(18720U);
    msg.setSourceEntity(195U);
    msg.setDestination(17936U);
    msg.setDestinationEntity(194U);
    msg.state = 121U;
    msg.plan_id = 30513U;
    msg.wpt_id = 90U;
    msg.settings_chk = 10918U;

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
    msg.setTimeStamp(0.234002986902);
    msg.setSource(28767U);
    msg.setSourceEntity(234U);
    msg.setDestination(32257U);
    msg.setDestinationEntity(233U);
    msg.state = 91U;
    msg.plan_id = 1419U;
    msg.wpt_id = 186U;
    msg.settings_chk = 38814U;

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
    msg.setTimeStamp(0.033131830239);
    msg.setSource(22448U);
    msg.setSourceEntity(198U);
    msg.setDestination(52288U);
    msg.setDestinationEntity(177U);
    msg.uid = 148U;
    msg.frag_number = 4U;
    msg.num_frags = 136U;
    const char tmp_msg_0[] = {-55, -88, -30, -120, -72, -106, -39, -36, -90, -17, -3, -11, -68, 92, -40, -71, -88, -37, -56, 11, 28, -32, -128};
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
    msg.setTimeStamp(0.128185385079);
    msg.setSource(32539U);
    msg.setSourceEntity(41U);
    msg.setDestination(15266U);
    msg.setDestinationEntity(212U);
    msg.uid = 205U;
    msg.frag_number = 154U;
    msg.num_frags = 66U;
    const char tmp_msg_0[] = {4, -103, -84, -24, 80, -109, 92, 52, 72, 110, -102, 53, 76, -11, 91, -59, -34, -12, -111, -21, -121, -29, 90, -103, -103, 55, -35, -103, -20, 19, -82, -37, -100, -94, -58, -109, -47, 48, -43, -113, 102, -103, 92, -49, -30, 83, 45, -77, -23, -104, -36, 71, -19, 8, 16, 60, 15, -97, -19, -59, -29, -22, 125, -8, 31, 96, -31, 19, -128, 109, -88, -81, -46, 41, 74, 109, 5, 1, -14, -117, -83, -35, -93, -96, -17, 34, -123, 109, 26, 23, 113, -118, -88, -63, 75, -92, -87, 73, 7, -118, 9, 50, 110, -28, 89, -65, 61, 96, -91, 23, 16, -78, 115, -110, 125, 96, 110, -63, -24, -61, 107, 105, -21, -33, -73, 23, 113, -47, 98, -26, -66, 41, -11, -32, 20, 124, 18, 81, -124, 121, 42, -116, 54, 11, -91, -112, -57, 59, 15, -121, 56, -15, 94, 97, -21, 84, 33, -42, -3, -63, -66, 76, 94, 90, 80, 73, -67, -125, -59, -72, -10, 58, 36, -107, 60, -34, -86, -7, -52, -23, -47, -35, -94, -94, 18, -119, -54, 92, 42, -11, -128, -29, -126, 35, 85};
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
    msg.setTimeStamp(0.183716085485);
    msg.setSource(31274U);
    msg.setSourceEntity(36U);
    msg.setDestination(57825U);
    msg.setDestinationEntity(248U);
    msg.uid = 210U;
    msg.frag_number = 192U;
    msg.num_frags = 213U;
    const char tmp_msg_0[] = {-88, 7, -41, -18, 2, 40, -29, -44, 15, -46, 86, -126, -13, 101, 75, -56, 106, -9, 41, -122, 125, -45, 100, -10, 65, -13, 22, 108, -83, 114, -100, 44, 82, -11, 6, 115, -77, -4, 82, -54, 42, -42, -119, 54, 125, -64, -103, 13, -75, -21, 53, 96, 123, -75, -6, -53, 53, -47, -17, 90, -107, -32, -16, -111, -47, 86, 80, -112, 115, 64, -128, 117, -109, -92, -35, 1, 110, 69, -128, -122, -118, 59, -4, 123, -60, -47, 90, -49, -109, 4, 19, 60, -100, -9, -88, -55, 3, 106, 20, 30, -16, 110, -32, -52, 115, 78, -77, 65, -11, 11, 97, 123, 49, 121, 52, 117, 117, -94, 22, -5, -58, 38, 59, 61, 6, 103, -89, -115, -26, 16, -21, 67, -81, -71, -90, -104, -114, 85, -81, 67, 43, 112, -77, 107, 64, -85, 63, 48, 81, 69, 98, -12, -5, -66, -19, -7, -83, 91, -13, 38, 115, 14, 79, 126, 57, -45, 16, -98, 88, -60, -94, 105, 112, 61, 109};
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
    msg.setTimeStamp(0.672903799571);
    msg.setSource(24077U);
    msg.setSourceEntity(108U);
    msg.setDestination(49258U);
    msg.setDestinationEntity(18U);
    msg.content_type.assign("BWWWTVQTYQE");
    const char tmp_msg_0[] = {-11, 0, 24, 17, 77, -83, -83, 56, 125, 5, 70, -13, 7, -48, 123, 74, 84, -41, -10, -120, 88, 41, 96, -17, 52, -127, 119, -10, -105, -128, -57, -56, -13, -78, 88, 116, 38, -13, 76, 30, -22, -104, -56, 34, -99, -63, -23, -127, 10, -40, 67, 86, -121, 31, -50, -60, 52, 7, 104, 125, -71, 107, -30, -89, -127, -54, -21, -122, 64, -118, -9, -120, -63, 116, 8, 91, 34, 82, 123, -113, 39, 104, 110, -87, 65, -82, 14, 27, -26, 74, 53, 86, -28, 73, 48, 17, -99, -98, -28, -19, -9, 6, 72, -119, 90, 61, 38, -94, 45, 7, 44, -64, -25, 62, -18, -14, -70, 4, 40, -8, 17, -120, 50, 74, 73, 53, -89, -27, -44, 109, -11, 99, 30, -100, 104, -24, -93, -61, 2, -98, -27, -73, 114, 6, -66, 101, 111, 119, -54, 67, -44, 34, -37, 93, -121, -76, 111, 36, -82, 90, -94, -90, 72, 98, -68, 85, -97, -119, 20, -115, 59, -76, -110, 65, -73, -15, -42, -89, -90, 35, -12, -15, 56, 66, -36, -101, 99, -121, -48, -10, -33, -22, -90, -115, 84, -88, -46, 11, -65, 43, -117, -122, 48, -114, 99, 7, 88, 22, -48, -45, 43, 114, -92, -87, 115, -120, 13, 119, 101, 110, 109, -4, 112, 62, -118, -32, 41, 63, -78, -21, 4, -44, -86, -51, 109, -112, -100, -26, -87, -61, -28, 74, -107, -9, 57, -12};
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
    msg.setTimeStamp(0.460452687926);
    msg.setSource(35470U);
    msg.setSourceEntity(218U);
    msg.setDestination(45317U);
    msg.setDestinationEntity(92U);
    msg.content_type.assign("AHBAYBTFSZDESJYZMXIHHUWMIMVEJJOQSGKSEKCLPPITRIWDMMXKNEFPNQLHNXMHCTGPFSOLNERDTHWINROGQAKISFUOCPAUODURABWMWJYDQAGJRLZVEGWKZZYTRIBYAYFCKSHPBXFCQZBQOVXQBCDEYCXMURYUETYDHUGSCRRLUOWOGJPIVBNVNNJUCLQZVQLBJYWBTLZDKHVPVOGINSEAATDQAFZTXFWEXCRKPNVMLJ");
    const char tmp_msg_0[] = {75, -100, 41, 59, -51, -55, 45, -51, -93, -95, -8, 31, 87, -62, -45, -73, 102, 37, 27, 15, -85, 71, -22, -35, -35, -11, 11, -25, 42, -25, -110, -93, -3, -47, 71, 77, 1, 16, 1, -95, 4, -95, 48, -121, 105, 36, 36, 119, -95, -116, 107, -65, -118, -41, -30, -51, -81, 89, 106, 34, 84, -15, 74, 23, -35, 93, 39, -100, 46, 49, -72, -55, -111, -120, -63, -39, -63, -57, 115, 25, 36, 44, -92, 116, -30, 99, 125, 19, 110, 100, 70, 4, -54, -112, -4, 125, -30, -40, -54, 75, 46, -79, -71, 103, -72, -74, -115, 71, -128, -100, -57, 24, -83, 84, 34, -2, -107, 14, 71, -73, 72, -25, -103, -62, 104, 27, 32, 46, -19, 114, -4, 114, -3};
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
    msg.setTimeStamp(0.00742062663317);
    msg.setSource(33849U);
    msg.setSourceEntity(233U);
    msg.setDestination(42082U);
    msg.setDestinationEntity(157U);
    msg.content_type.assign("KYVBFALJSARFHCSYMJNALISHSSOEJRMWTIZEGCRONMQGAWLGWMUEUIVKS");
    const char tmp_msg_0[] = {-87, 95, 33, -20, -23, -27, 42, 108, -68, 77, 77, 71, -61, 63, -27, 24, 93, -47, -44, -50, 2, -57, -100, 97, -121, -87, 93, 64, 87, 101, -59, -24, -21, -114, -74, 37, -14, -125, -91, 31, -82, 5, 84, 37, -127, -63, 62, 23, -78, 126, 33, -26, -127, 62, 101, 68, 18, -12, -48, -46, 29, 98, 109, -70, 92, 46, -52, -3, 82, -80, -110, 20, 121, -78, -85};
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
    msg.setTimeStamp(0.222409678596);
    msg.setSource(5507U);
    msg.setSourceEntity(143U);
    msg.setDestination(14580U);
    msg.setDestinationEntity(36U);

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
    msg.setTimeStamp(0.957328094351);
    msg.setSource(34305U);
    msg.setSourceEntity(3U);
    msg.setDestination(29305U);
    msg.setDestinationEntity(199U);

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
    msg.setTimeStamp(0.58905067514);
    msg.setSource(61748U);
    msg.setSourceEntity(239U);
    msg.setDestination(22563U);
    msg.setDestinationEntity(196U);

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
    msg.setTimeStamp(0.444904253672);
    msg.setSource(43478U);
    msg.setSourceEntity(163U);
    msg.setDestination(54969U);
    msg.setDestinationEntity(199U);
    msg.target = 697U;
    msg.bearing = 0.716504463525;
    msg.elevation = 0.717519342318;

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
    msg.setTimeStamp(0.693515662688);
    msg.setSource(25893U);
    msg.setSourceEntity(12U);
    msg.setDestination(46238U);
    msg.setDestinationEntity(233U);
    msg.target = 54616U;
    msg.bearing = 0.938876332901;
    msg.elevation = 0.0122161278307;

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
    msg.setTimeStamp(0.925466307403);
    msg.setSource(18989U);
    msg.setSourceEntity(36U);
    msg.setDestination(18713U);
    msg.setDestinationEntity(175U);
    msg.target = 46362U;
    msg.bearing = 0.626187420511;
    msg.elevation = 0.453239946586;

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
    msg.setTimeStamp(0.446794852923);
    msg.setSource(16637U);
    msg.setSourceEntity(211U);
    msg.setDestination(44761U);
    msg.setDestinationEntity(208U);
    msg.target = 35309U;
    msg.x = 0.420251563333;
    msg.y = 0.882233399931;
    msg.z = 0.456749203666;

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
    msg.setTimeStamp(0.195504641484);
    msg.setSource(62670U);
    msg.setSourceEntity(166U);
    msg.setDestination(33778U);
    msg.setDestinationEntity(36U);
    msg.target = 41312U;
    msg.x = 0.527332085551;
    msg.y = 0.595444374549;
    msg.z = 0.668139453792;

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
    msg.setTimeStamp(0.883048062803);
    msg.setSource(31830U);
    msg.setSourceEntity(197U);
    msg.setDestination(21487U);
    msg.setDestinationEntity(212U);
    msg.target = 31588U;
    msg.x = 0.252980531384;
    msg.y = 0.887607815614;
    msg.z = 0.503106135837;

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
    msg.setTimeStamp(0.374147281963);
    msg.setSource(9735U);
    msg.setSourceEntity(152U);
    msg.setDestination(28283U);
    msg.setDestinationEntity(109U);
    msg.target = 39464U;
    msg.lat = 0.973007962218;
    msg.lon = 0.793136814592;
    msg.z_units = 24U;
    msg.z = 0.425831618863;

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
    msg.setTimeStamp(0.408974673288);
    msg.setSource(12717U);
    msg.setSourceEntity(181U);
    msg.setDestination(64608U);
    msg.setDestinationEntity(182U);
    msg.target = 17687U;
    msg.lat = 0.851852414462;
    msg.lon = 0.369006086647;
    msg.z_units = 156U;
    msg.z = 0.265859951131;

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
    msg.setTimeStamp(0.046382948002);
    msg.setSource(30036U);
    msg.setSourceEntity(2U);
    msg.setDestination(28746U);
    msg.setDestinationEntity(111U);
    msg.target = 6645U;
    msg.lat = 0.768082843386;
    msg.lon = 0.953394461791;
    msg.z_units = 83U;
    msg.z = 0.916782561484;

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
    msg.setTimeStamp(0.161365833152);
    msg.setSource(23367U);
    msg.setSourceEntity(97U);
    msg.setDestination(25227U);
    msg.setDestinationEntity(142U);
    msg.locale.assign("XNVEPAXQSMPYBOETNRHDALJZTBABJXGFIYJWQDMVYSJIUUCTBWIZRFZUHOUNAREXLXQFJBMKFFEESRHTYCWHPTOTDIDKMPOVUZYKDBLCYUHNVMOAJJNGRGQEWYBLWSGZLKHDGIXJZHWRSOPFRCXAGUVIVDGMQISLDUGZSPIFOOJXASEHDLRYMRCVWKFNBVXLCEWNTDAWIYGUMZFSPPKKJQQCEOIPZEHCTUYSGARNLQFVWTMOATKQXLKVPNCZQ");
    const char tmp_msg_0[] = {-45, 73, -15, 31, -79, -13, -36, 125, -117, 125, -82, -100, 122, 104, -113, -38, 30, 43, 119, -128, 83, 63, -48, -11, -30, 98, -90, 82, 38, -67, 78, -94, -11, -96, 119, -105, 49, -47, 22, -102, -16, -7, 82, 64, 111, 107, 73, 8, 33, -4, -85, -71, 82, -67, -46, 3, -122, -12, -18, -31, -51, -27, -77, -15, -91, -104, -77, 58, 16, 7, -23, -101, -62, -74, 63, 88, -107, -114, 13, 118, 20, -84, 53, -109, -74, 43, 68, 11, 60, 124, -85, -60, -29, -35, 8, 100, 76, 65, 121, -104, 16, -67, 32, -81, -51, -65, 123, -2, 16, 100, -37, 27, -22, -67, 31, 124, -24, 74, -69, 69, 74, 124, -77, 111, 33, -8, -111, 69, 10, -74, 49, 111, 115, -48, 17, 18, -80, 78, 80, -95, -58, -99, -40, -74, -101, 79, -126, 51, -10, -12, -15, 42, -72, 3, -26, -65};
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
    msg.setTimeStamp(0.927896269838);
    msg.setSource(45523U);
    msg.setSourceEntity(249U);
    msg.setDestination(62389U);
    msg.setDestinationEntity(106U);
    msg.locale.assign("YXJRORECARWBKTNYHAPNCUHTURBVSWKVEDWKMUXZPDFBMVSSFNRWZFCIXCXQEYMAEXFLUWCSUGUIQUHQ");
    const char tmp_msg_0[] = {-105, 52, -49, -79, -86, 100, -116, -24, 34, 47, 116, 27, 108, 113, 51, -10, 71, -108, -89, -117, -16, -28, -32, 51, -91, 105, 90, 109, 47, 65, -123, 65, 63, -38, 51, 73, -16, 102, -67, -23, -49, 109, -29, -19, 39, 83, -123, 82, -122, 62, -70, 32, -56, 62, 1, -89, 116, 81, -68, 84, -126, 124, 53, -11, -48, 29, 77, 97, 20, -13, -125, -10, -17, -9, 12, -10, 120, -31, 105, -100, 12, -80, 100, 22, -77, -97, -86, -41, -29, 53, 72, -48, 124, -9, 107, 67, 100, -102, -62, -104, -54, 60, -20, -43, -23, -79, -98, -94, 55, -66, 5, 114, -121, -26, 71, -85, 120, -57, 9, 119, 27, 96, -88, -98, -121, 5, -79, -49, -77, 95, -97, 126, 40, 22, -75, 89, -29, -73, -73, 20, -119};
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
    msg.setTimeStamp(0.584058615594);
    msg.setSource(33057U);
    msg.setSourceEntity(208U);
    msg.setDestination(22676U);
    msg.setDestinationEntity(134U);
    msg.locale.assign("DDTNIREWBDBCSMWXHHQKITMLAZOWVOFDPUKUCVYMUPLEEQCNOISREDGLVOSZHHPQJUHQWTYEQMWIBYPRIEDXJGFGOEAUXSUFSYQNZPTTVPRJMURXCLJVNVYUTBAPYFHDBSMKFLFABRSAPIVQBHNRJUWZGQINZGZFNO");
    const char tmp_msg_0[] = {-119, -121, -67, 104, 71, -6, -5, 44, -63, -60, -124, -54, -115, 62, 126, 113, 1, 27, 72, -108, -125, 25, 12, 44, 30, -59, -9, -107, -23, -102, 104, 11, -42, 70, -85, 35, 20, 114, -56, -92, 108, 4, -18, -123, 109, -88, 87, 66, -99, 39, 53, -106, -99, 47, 49, 93, -55, 80, -70, 14, -66, 125, 26, 105, 102, 2, 27, -49, 111, -23, -116, 107, 53, -116, -4, 64, 19, 53, -35, -49, -98, -110, 17, 17, 9, 78, -42, -59, 122, -37, 55, -28, -39, 31, -36, 82, 28, -84, -124, 92, -101, 79, -66, 27, 72, -94, -112, -84, -108, -59, -66, 64, 84, -111, -87, 113, -96, -36, 99, 85, 44, -106, -2, -29, -79, 2, -30, 93, -65, -31, 118, 71, 70, 63, -112, 121, 108, -42, 13, 124, 34, 8, 100, -37, 52, 86, 58, -78, 15, -62, 4, 120, -109, -54, -62, -89, -1, 71, 41, -124, 84, -3, -71, -29, -18, -83, 38, 37, -17, 26, 104, -119, 58, 124, -8, 44, 90, 21, 121, -95, -3, 5, 112, -34, 124, 26, 70, -50, 29, -119, -16, 9, -3, 123, 16, -14, -106, -4, -38, 68, -82, 1, -60, -49, -51, 88, -2, 112, -69, 35, -113, -31, -26, 13, -128, -33, -15, -42, -26, 107, -77, -3, -86, -115, 50, -4, 7, 3, 62, 53, -117, 79, 48, 92, 13, -66};
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
    msg.setTimeStamp(0.543221025958);
    msg.setSource(60675U);
    msg.setSourceEntity(132U);
    msg.setDestination(60002U);
    msg.setDestinationEntity(124U);

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
    msg.setTimeStamp(0.799748885969);
    msg.setSource(55026U);
    msg.setSourceEntity(104U);
    msg.setDestination(49041U);
    msg.setDestinationEntity(116U);

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
    msg.setTimeStamp(0.231466331254);
    msg.setSource(11238U);
    msg.setSourceEntity(21U);
    msg.setDestination(23968U);
    msg.setDestinationEntity(28U);

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
    msg.setTimeStamp(0.217973929735);
    msg.setSource(57092U);
    msg.setSourceEntity(31U);
    msg.setDestination(38406U);
    msg.setDestinationEntity(79U);
    msg.camid = 224U;
    msg.x = 53957U;
    msg.y = 7729U;

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
    msg.setTimeStamp(0.249736157494);
    msg.setSource(22390U);
    msg.setSourceEntity(40U);
    msg.setDestination(59105U);
    msg.setDestinationEntity(112U);
    msg.camid = 117U;
    msg.x = 19338U;
    msg.y = 45749U;

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
    msg.setTimeStamp(0.428948355767);
    msg.setSource(14858U);
    msg.setSourceEntity(26U);
    msg.setDestination(27487U);
    msg.setDestinationEntity(82U);
    msg.camid = 201U;
    msg.x = 17775U;
    msg.y = 17948U;

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
    msg.setTimeStamp(0.538027292224);
    msg.setSource(53632U);
    msg.setSourceEntity(58U);
    msg.setDestination(17160U);
    msg.setDestinationEntity(32U);
    msg.camid = 77U;
    msg.x = 37927U;
    msg.y = 64031U;

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
    msg.setTimeStamp(0.384925976207);
    msg.setSource(4563U);
    msg.setSourceEntity(28U);
    msg.setDestination(15430U);
    msg.setDestinationEntity(5U);
    msg.camid = 55U;
    msg.x = 51972U;
    msg.y = 13300U;

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
    msg.setTimeStamp(0.602752736591);
    msg.setSource(24778U);
    msg.setSourceEntity(187U);
    msg.setDestination(56388U);
    msg.setDestinationEntity(44U);
    msg.camid = 246U;
    msg.x = 37279U;
    msg.y = 34024U;

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
    msg.setTimeStamp(0.437068205775);
    msg.setSource(4974U);
    msg.setSourceEntity(7U);
    msg.setDestination(63671U);
    msg.setDestinationEntity(135U);
    msg.tracking = 85U;
    msg.lat = 0.622175354699;
    msg.lon = 0.422213091509;
    msg.x = 0.221318237444;
    msg.y = 0.676955355779;
    msg.z = 0.0371570725515;

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
    msg.setTimeStamp(0.755671616515);
    msg.setSource(43033U);
    msg.setSourceEntity(6U);
    msg.setDestination(47282U);
    msg.setDestinationEntity(101U);
    msg.tracking = 79U;
    msg.lat = 0.696132691132;
    msg.lon = 0.958858609884;
    msg.x = 0.588407545886;
    msg.y = 0.813851375677;
    msg.z = 0.765851769921;

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
    msg.setTimeStamp(0.96617599521);
    msg.setSource(8448U);
    msg.setSourceEntity(35U);
    msg.setDestination(10060U);
    msg.setDestinationEntity(225U);
    msg.tracking = 200U;
    msg.lat = 0.845867579625;
    msg.lon = 0.479986410854;
    msg.x = 0.820356975765;
    msg.y = 0.280677249797;
    msg.z = 0.0104288518091;

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
    msg.setTimeStamp(0.658715035911);
    msg.setSource(12815U);
    msg.setSourceEntity(175U);
    msg.setDestination(778U);
    msg.setDestinationEntity(194U);
    msg.target.assign("BVOFUXRNEWUEAIYSWTVTGJSQNKQK");
    msg.lbearing = 0.930517652729;
    msg.lelevation = 0.352522156963;
    msg.bearing = 0.386619109841;
    msg.elevation = 0.479100097691;
    msg.phi = 0.851475199033;
    msg.theta = 0.747558238163;
    msg.psi = 0.0992154188615;
    msg.accuracy = 0.727759168016;

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
    msg.setTimeStamp(0.592317519311);
    msg.setSource(31897U);
    msg.setSourceEntity(128U);
    msg.setDestination(14858U);
    msg.setDestinationEntity(135U);
    msg.target.assign("JCYVOEMYRBTOZVMRUVJZYELBABNEROKXKORUHCNLWOWIFSPRJHUEZTBTLKAITXJWNXPSDCHYHYPYRNWAKYXTEZONGSETGGNQCSLRGDXILTSUJYJPIKPGAYIKDXNQAQDBBCJCJU");
    msg.lbearing = 0.786321484689;
    msg.lelevation = 0.854805383005;
    msg.bearing = 0.344441367885;
    msg.elevation = 0.0367836884641;
    msg.phi = 0.908554717896;
    msg.theta = 0.244097565478;
    msg.psi = 0.294915848979;
    msg.accuracy = 0.401082190749;

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
    msg.setTimeStamp(0.959434448799);
    msg.setSource(44890U);
    msg.setSourceEntity(174U);
    msg.setDestination(14733U);
    msg.setDestinationEntity(160U);
    msg.target.assign("SXBLCPBIKNJLDXJEFQMWKUUOGRSVWXOPSZRVQLUDPZHTGHEDZYVVBMTMFNWMOHDHPOHYPYMAQOBYUKTZNLPAIXLOHAVDEEPIWGEFBWVPTXUMHQURZMNFUQFEFLGKDVN");
    msg.lbearing = 0.140641613642;
    msg.lelevation = 0.403738897782;
    msg.bearing = 0.481119049749;
    msg.elevation = 0.65760217807;
    msg.phi = 0.862813813288;
    msg.theta = 0.660861386272;
    msg.psi = 0.434385577481;
    msg.accuracy = 0.536460122598;

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
    msg.setTimeStamp(0.684370458623);
    msg.setSource(15551U);
    msg.setSourceEntity(163U);
    msg.setDestination(17975U);
    msg.setDestinationEntity(43U);
    msg.target.assign("QOZUCTRECNKLMPHJNVNZQTKEGSDZSHXJBITPEFTWTNZDIBEMSFWYGROAWUEDMVWQBIHZIBAM");
    msg.x = 0.94840485822;
    msg.y = 0.622463255928;
    msg.z = 0.21196033841;
    msg.n = 0.211361108416;
    msg.e = 0.634168223697;
    msg.d = 0.472704642328;
    msg.phi = 0.830456280141;
    msg.theta = 0.211440213148;
    msg.psi = 0.104752453731;
    msg.accuracy = 0.662521889936;

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
    msg.setTimeStamp(0.981160701557);
    msg.setSource(10177U);
    msg.setSourceEntity(242U);
    msg.setDestination(62782U);
    msg.setDestinationEntity(207U);
    msg.target.assign("PSSVDDIUGNRQAWIAGJODKNOLPHMRWYJDTCOAQQBZXDCFDCIVPXMIEXYJOFUTAOBZFKQVXLIXYPIJEAQQNXSYVVILNOHYXULVBHHAURSUSOJSGYYGVRHDCFLOTTKCGGDFKPWYJMJTUGKJZHJNEFZIWXBZLYNNRKGWBZQFMLGWWTCOTSUKLLSRKBWTMEWQERB");
    msg.x = 0.818077580093;
    msg.y = 0.69263635352;
    msg.z = 0.589341584913;
    msg.n = 0.833349907946;
    msg.e = 0.0863047334466;
    msg.d = 0.873728083888;
    msg.phi = 0.636676877527;
    msg.theta = 0.61450899472;
    msg.psi = 0.150946338339;
    msg.accuracy = 0.88754215747;

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
    msg.setTimeStamp(0.852610423726);
    msg.setSource(5718U);
    msg.setSourceEntity(123U);
    msg.setDestination(1981U);
    msg.setDestinationEntity(92U);
    msg.target.assign("JVAUOXUELWRWYFORHUEMVOLLECCDRJOPLGSGYZPXYYQ");
    msg.x = 0.46964747775;
    msg.y = 0.0890320968006;
    msg.z = 0.0194930185233;
    msg.n = 0.509809420974;
    msg.e = 0.522363847402;
    msg.d = 0.277795935898;
    msg.phi = 0.082165271671;
    msg.theta = 0.452409086595;
    msg.psi = 0.103477842615;
    msg.accuracy = 0.0681119241671;

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
    msg.setTimeStamp(0.484025411015);
    msg.setSource(6293U);
    msg.setSourceEntity(241U);
    msg.setDestination(18130U);
    msg.setDestinationEntity(13U);
    msg.target.assign("ZFWVFXGNMPAABXVERJWWBHOFEEMJRCZAVPCSTQIZKYXYJBVJLJXSMBMCCEAFUCBGPYKQGTKGWNHLD");
    msg.lat = 0.191957773004;
    msg.lon = 0.535923757379;
    msg.z_units = 23U;
    msg.z = 0.629663345423;
    msg.accuracy = 0.192613232338;

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
    msg.setTimeStamp(0.755178724438);
    msg.setSource(14226U);
    msg.setSourceEntity(80U);
    msg.setDestination(30520U);
    msg.setDestinationEntity(49U);
    msg.target.assign("NGEAOEVGOSKFKXQZRMZADVHSIDZACBNEWKPBXGNNDMBYPZUANUUUPOIKJRRYSVIVITLGYMAHDKVEVOASKZQEXEVDWNFSKFCBRYMGYBBHUOFAHSLNKOCGEMECQWSXFPCMYXDJJCXXMABPZKXYPTRFLZELDIJTVDHJVQHNIUOJQSPCIHOSTFWCRNYWYGYJQTJJNGZ");
    msg.lat = 0.750834135785;
    msg.lon = 0.985040273457;
    msg.z_units = 81U;
    msg.z = 0.867579856952;
    msg.accuracy = 0.0871803905914;

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
    msg.setTimeStamp(0.162910017087);
    msg.setSource(54065U);
    msg.setSourceEntity(3U);
    msg.setDestination(975U);
    msg.setDestinationEntity(74U);
    msg.target.assign("DPYBIQKGVLMTSFHRMAOSUDLJMOKZJAUHDKFZCBBJQUHNSNVVODFKLNGWAWHSNPOZLUCAPTRXXIUKEPPNDEZVTQDVDXTIWTYPRCZRJTIITFURCACBOHMGLZUIQZNAEWWWLQFBFYPEHIRBEVMWZSBAGZVXKWJRXLMXJRYSLQJBTHAXCYUPGDTGLKNKEPGSCOGSAXVOD");
    msg.lat = 0.0339437221657;
    msg.lon = 0.20986067378;
    msg.z_units = 14U;
    msg.z = 0.857537305031;
    msg.accuracy = 0.639599472236;

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
    msg.setTimeStamp(0.180316778028);
    msg.setSource(17769U);
    msg.setSourceEntity(156U);
    msg.setDestination(64199U);
    msg.setDestinationEntity(252U);
    msg.name.assign("DRMXXGILFWTNEQUJPYKRQOQGZXHKBESMBKDJYWKJQQFFYEUZAWBKSNUQGBKNU");
    msg.lat = 0.834350127894;
    msg.lon = 0.728878679791;
    msg.z = 0.637218773117;
    msg.z_units = 100U;

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
    msg.setTimeStamp(0.568643706142);
    msg.setSource(22885U);
    msg.setSourceEntity(35U);
    msg.setDestination(19184U);
    msg.setDestinationEntity(193U);
    msg.name.assign("TYWRNMFIABTRUQNVNYYRELFXWVGFJPURDAJFNMBLKFXTRIUVQANFNDQBQDPGYBSZGAOJULAKSQKVEYMZNHRWPTHIHBJSMZDMQMIOXJACIKIJVPMSFACKZSDTGFNDGCLWKIDOGUKYWALCJKWHSTEUJXSQONZLEFBJZOZSBVUOVXHGWWYAVZEXXJEYWYUIGPEBTWBGNEGTPPCHTBLCDICHQL");
    msg.lat = 0.0512428462818;
    msg.lon = 0.892696904974;
    msg.z = 0.832685393089;
    msg.z_units = 134U;

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
    msg.setTimeStamp(0.652576074349);
    msg.setSource(18277U);
    msg.setSourceEntity(156U);
    msg.setDestination(49359U);
    msg.setDestinationEntity(110U);
    msg.name.assign("ROOESHUMNAOXFUBLWAHQBJWDAEHFKSORVHDPTOARPXJCADDR");
    msg.lat = 0.273707048958;
    msg.lon = 0.558806086509;
    msg.z = 0.807006459223;
    msg.z_units = 251U;

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
    msg.setTimeStamp(0.284865456093);
    msg.setSource(25525U);
    msg.setSourceEntity(98U);
    msg.setDestination(12313U);
    msg.setDestinationEntity(0U);
    msg.op = 28U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("OGSQSRXDDGJOQMUBADRNCSZZLXVDQIMWHO");
    tmp_msg_0.lat = 0.69957443114;
    tmp_msg_0.lon = 0.886234690285;
    tmp_msg_0.z = 0.452305800728;
    tmp_msg_0.z_units = 138U;
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
    msg.setTimeStamp(0.380336227753);
    msg.setSource(50425U);
    msg.setSourceEntity(50U);
    msg.setDestination(33382U);
    msg.setDestinationEntity(13U);
    msg.op = 244U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("GPDJILOWTMYJOKWEIYQSVXRKEDCJAVIGTWRREOHZDTPNMBYFZTYANNHBREDFXLLVRDNVKIFDQNEPRMIXUKBUTZOADAZCLVCTNYYPBUQHMSSBPAXCQAHUDEWMJKIVMFRMUWMWT");
    tmp_msg_0.lat = 0.61064626312;
    tmp_msg_0.lon = 0.668332630539;
    tmp_msg_0.z = 0.158744605884;
    tmp_msg_0.z_units = 96U;
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
    msg.setTimeStamp(0.586483408547);
    msg.setSource(32539U);
    msg.setSourceEntity(132U);
    msg.setDestination(36030U);
    msg.setDestinationEntity(146U);
    msg.op = 87U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("XLXODNZDGVTJBEO");
    tmp_msg_0.lat = 0.567462815111;
    tmp_msg_0.lon = 0.391062035074;
    tmp_msg_0.z = 0.193831500477;
    tmp_msg_0.z_units = 160U;
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
    msg.setTimeStamp(0.728091362219);
    msg.setSource(58051U);
    msg.setSourceEntity(21U);
    msg.setDestination(24381U);
    msg.setDestinationEntity(169U);
    msg.value = 0.746056357464;
    msg.type = 246U;

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
    msg.setTimeStamp(0.718122048977);
    msg.setSource(48094U);
    msg.setSourceEntity(83U);
    msg.setDestination(62307U);
    msg.setDestinationEntity(59U);
    msg.value = 0.357554966457;
    msg.type = 241U;

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
    msg.setTimeStamp(0.562629486859);
    msg.setSource(61984U);
    msg.setSourceEntity(181U);
    msg.setDestination(43501U);
    msg.setDestinationEntity(75U);
    msg.value = 0.650271851499;
    msg.type = 215U;

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
    msg.setTimeStamp(0.645849668626);
    msg.setSource(59423U);
    msg.setSourceEntity(239U);
    msg.setDestination(45238U);
    msg.setDestinationEntity(194U);
    msg.value = 0.870807684769;

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
    msg.setTimeStamp(0.629146956453);
    msg.setSource(19197U);
    msg.setSourceEntity(119U);
    msg.setDestination(20252U);
    msg.setDestinationEntity(243U);
    msg.value = 0.497123979367;

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
    msg.setTimeStamp(0.190293452693);
    msg.setSource(59357U);
    msg.setSourceEntity(198U);
    msg.setDestination(40366U);
    msg.setDestinationEntity(109U);
    msg.value = 0.823600131554;

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
    msg.setTimeStamp(0.870855680257);
    msg.setSource(32725U);
    msg.setSourceEntity(70U);
    msg.setDestination(51245U);
    msg.setDestinationEntity(160U);
    msg.timestamp_last_service = 0.600209533443;
    msg.time_next_service = 0.691767762413;
    msg.time_motor_next_service = 0.215646289311;
    msg.time_idle_ground = 0.117335699667;
    msg.time_idle_air = 0.710992451109;
    msg.time_idle_water = 0.63834104398;
    msg.time_idle_underwater = 0.443465854417;
    msg.time_idle_unknown = 0.648045422975;
    msg.time_motor_ground = 0.420390886217;
    msg.time_motor_air = 0.66842541297;
    msg.time_motor_water = 0.597023240938;
    msg.time_motor_underwater = 0.887102898039;
    msg.time_motor_unknown = 0.404913511502;
    msg.rpm_min = -20258;
    msg.rpm_max = 19846;
    msg.depth_max = 0.00367311485093;

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
    msg.setTimeStamp(0.824259999843);
    msg.setSource(57381U);
    msg.setSourceEntity(211U);
    msg.setDestination(54711U);
    msg.setDestinationEntity(83U);
    msg.timestamp_last_service = 0.839222032191;
    msg.time_next_service = 0.609789259742;
    msg.time_motor_next_service = 0.626320620677;
    msg.time_idle_ground = 0.515439711818;
    msg.time_idle_air = 0.341657540336;
    msg.time_idle_water = 0.318848675897;
    msg.time_idle_underwater = 0.428881414191;
    msg.time_idle_unknown = 0.894985275688;
    msg.time_motor_ground = 0.758713633994;
    msg.time_motor_air = 0.583512807828;
    msg.time_motor_water = 0.854920705422;
    msg.time_motor_underwater = 0.0861604649707;
    msg.time_motor_unknown = 0.99802592045;
    msg.rpm_min = -6835;
    msg.rpm_max = 7682;
    msg.depth_max = 0.701473475163;

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
    msg.setTimeStamp(0.15946409487);
    msg.setSource(7730U);
    msg.setSourceEntity(81U);
    msg.setDestination(43115U);
    msg.setDestinationEntity(239U);
    msg.timestamp_last_service = 0.600664456784;
    msg.time_next_service = 0.841628306421;
    msg.time_motor_next_service = 0.56790008031;
    msg.time_idle_ground = 0.780545239529;
    msg.time_idle_air = 0.368952901398;
    msg.time_idle_water = 0.727701719826;
    msg.time_idle_underwater = 0.771585072272;
    msg.time_idle_unknown = 0.282396897408;
    msg.time_motor_ground = 0.416822325776;
    msg.time_motor_air = 0.182357851027;
    msg.time_motor_water = 0.780981068939;
    msg.time_motor_underwater = 0.635630911287;
    msg.time_motor_unknown = 0.452174367766;
    msg.rpm_min = 18258;
    msg.rpm_max = 15409;
    msg.depth_max = 0.191468022503;

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
    msg.setTimeStamp(0.507643600386);
    msg.setSource(21826U);
    msg.setSourceEntity(88U);
    msg.setDestination(3683U);
    msg.setDestinationEntity(25U);
    msg.severity = 65U;
    msg.text.assign("EKGXXLCLEJVOUTEIFECOWZWYXTVBGGTKQOYKHSWFHURVQFBXCMOELZAFHXGNFIWJGUJBPZYHGWOIPIVUCRCPDGPRGJLQVNMOBQSMPEWFEXKAVPYTDAIHIMJMUSQUBZBVZ");

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
    msg.setTimeStamp(0.572437514322);
    msg.setSource(17870U);
    msg.setSourceEntity(113U);
    msg.setDestination(35657U);
    msg.setDestinationEntity(197U);
    msg.severity = 218U;
    msg.text.assign("DJYGBLBHNCTHARPFAIPZXQHJXMDQRRMMTRCEDSKEDQAVWRVXHOCHUVKNIRNWYFRPZBQUGUPECIJMKXXILGMRWTQZPMBMWZCDUYZBIYYVSPOWKQHCVFVLTYECEWUMUHILEYVBXDMHYKPNVFXNSJAUUOLJFWQOEKTKUXQJOCOTSSNAZLANYSSEOMDEURQFOTNWJPGGDFZSGPFAKJVILWSPGLS");

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
    msg.setTimeStamp(0.221462995032);
    msg.setSource(16883U);
    msg.setSourceEntity(44U);
    msg.setDestination(3556U);
    msg.setDestinationEntity(34U);
    msg.severity = 205U;
    msg.text.assign("MXZOPLAJLLAQWYTOKEJBPBWLEUQAFPVQSFWKXCNQGFNPGWLIKZSZFJAVOOOVWYCIYKYRGHUXWXSINDSWBKQ");

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
    msg.setTimeStamp(0.697779907001);
    msg.setSource(13938U);
    msg.setSourceEntity(244U);
    msg.setDestination(30223U);
    msg.setDestinationEntity(116U);
    msg.channel = -80;
    msg.value = -1806181838;
    msg.gain = 76U;

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
    msg.setTimeStamp(0.687454266923);
    msg.setSource(10986U);
    msg.setSourceEntity(123U);
    msg.setDestination(18872U);
    msg.setDestinationEntity(69U);
    msg.channel = 17;
    msg.value = -549786387;
    msg.gain = 180U;

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
    msg.setTimeStamp(0.0578013345946);
    msg.setSource(9465U);
    msg.setSourceEntity(202U);
    msg.setDestination(64116U);
    msg.setDestinationEntity(155U);
    msg.channel = 65;
    msg.value = -1123090046;
    msg.gain = 33U;

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
    msg.setTimeStamp(0.773311875635);
    msg.setSource(38693U);
    msg.setSourceEntity(141U);
    msg.setDestination(19219U);
    msg.setDestinationEntity(214U);
    msg.ch01 = 0.964475990449;
    msg.ch02 = 0.716452963287;
    msg.ch03 = 0.139386411401;
    msg.ch04 = 0.612246276516;
    msg.ch05 = 0.336778557695;
    msg.ch06 = 0.0184261121668;
    msg.ch07 = 0.499002339528;
    msg.ch08 = 0.799718171141;
    msg.ch09 = 0.829991154379;
    msg.ch10 = 0.252632646697;
    msg.ch11 = 0.898344487311;
    msg.ch12 = 0.322032955439;
    msg.ch13 = 0.110366671184;
    msg.ch14 = 0.0345412260798;
    msg.ch15 = 0.430282543102;
    msg.ch16 = 0.394236850265;

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
    msg.setTimeStamp(0.737299846394);
    msg.setSource(7100U);
    msg.setSourceEntity(80U);
    msg.setDestination(15242U);
    msg.setDestinationEntity(47U);
    msg.ch01 = 0.942397431441;
    msg.ch02 = 0.2536466066;
    msg.ch03 = 0.230290431421;
    msg.ch04 = 0.464875630879;
    msg.ch05 = 0.221575000645;
    msg.ch06 = 0.93353296027;
    msg.ch07 = 0.835232420634;
    msg.ch08 = 0.756549349667;
    msg.ch09 = 0.633205793875;
    msg.ch10 = 0.162089217205;
    msg.ch11 = 0.152868720608;
    msg.ch12 = 0.457438061686;
    msg.ch13 = 0.849337532802;
    msg.ch14 = 0.0787973621195;
    msg.ch15 = 0.0230744737271;
    msg.ch16 = 0.0890968297923;

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
    msg.setTimeStamp(0.922557381329);
    msg.setSource(437U);
    msg.setSourceEntity(197U);
    msg.setDestination(30420U);
    msg.setDestinationEntity(204U);
    msg.ch01 = 0.385635551916;
    msg.ch02 = 0.491181640703;
    msg.ch03 = 0.566461183274;
    msg.ch04 = 0.314484345608;
    msg.ch05 = 0.121909505974;
    msg.ch06 = 0.734587550179;
    msg.ch07 = 0.355687684744;
    msg.ch08 = 0.116722351991;
    msg.ch09 = 0.425201492318;
    msg.ch10 = 0.16495058227;
    msg.ch11 = 0.987233811226;
    msg.ch12 = 0.904886880973;
    msg.ch13 = 0.855042191456;
    msg.ch14 = 0.110808424128;
    msg.ch15 = 0.159435028202;
    msg.ch16 = 0.899285981674;

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
    msg.setTimeStamp(0.215694651722);
    msg.setSource(1625U);
    msg.setSourceEntity(120U);
    msg.setDestination(31418U);
    msg.setDestinationEntity(55U);
    msg.time = 0.673588238171;
    msg.ang = 0.374059092791;

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
    msg.setTimeStamp(0.380421863858);
    msg.setSource(1822U);
    msg.setSourceEntity(240U);
    msg.setDestination(32199U);
    msg.setDestinationEntity(108U);
    msg.time = 0.46163794914;
    msg.ang = 0.905039021676;

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
    msg.setTimeStamp(0.0599607653473);
    msg.setSource(14913U);
    msg.setSourceEntity(5U);
    msg.setDestination(16504U);
    msg.setDestinationEntity(96U);
    msg.time = 0.149105990935;
    msg.ang = 0.206656733096;

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
    msg.setTimeStamp(0.138223308414);
    msg.setSource(17909U);
    msg.setSourceEntity(153U);
    msg.setDestination(28939U);
    msg.setDestinationEntity(158U);
    msg.value = 0.0217831357905;

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
    msg.setTimeStamp(0.804189407137);
    msg.setSource(33870U);
    msg.setSourceEntity(109U);
    msg.setDestination(54696U);
    msg.setDestinationEntity(62U);
    msg.value = 0.414270998403;

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
    msg.setTimeStamp(0.107936212871);
    msg.setSource(43036U);
    msg.setSourceEntity(42U);
    msg.setDestination(46946U);
    msg.setDestinationEntity(123U);
    msg.value = 0.196140713835;

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
    msg.setTimeStamp(0.462410210317);
    msg.setSource(23347U);
    msg.setSourceEntity(50U);
    msg.setDestination(36960U);
    msg.setDestinationEntity(5U);
    msg.value = 0.560198263658;

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
    msg.setTimeStamp(0.530474071498);
    msg.setSource(64182U);
    msg.setSourceEntity(20U);
    msg.setDestination(60932U);
    msg.setDestinationEntity(201U);
    msg.value = 0.999493093938;

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
    msg.setTimeStamp(0.359448018115);
    msg.setSource(34643U);
    msg.setSourceEntity(128U);
    msg.setDestination(27147U);
    msg.setDestinationEntity(229U);
    msg.value = 0.383997794293;

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
    msg.setTimeStamp(0.871614003548);
    msg.setSource(42116U);
    msg.setSourceEntity(171U);
    msg.setDestination(32270U);
    msg.setDestinationEntity(2U);
    msg.value = 0.0349174882703;

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
    msg.setTimeStamp(0.0228071357178);
    msg.setSource(56020U);
    msg.setSourceEntity(24U);
    msg.setDestination(50573U);
    msg.setDestinationEntity(162U);
    msg.value = 0.738871988745;

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
    msg.setTimeStamp(0.124261971963);
    msg.setSource(25337U);
    msg.setSourceEntity(126U);
    msg.setDestination(23891U);
    msg.setDestinationEntity(164U);
    msg.value = 0.171003143054;

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
    msg.setTimeStamp(0.92578433798);
    msg.setSource(42544U);
    msg.setSourceEntity(140U);
    msg.setDestination(34225U);
    msg.setDestinationEntity(74U);
    msg.l2 = -106;
    msg.l3 = 18;
    msg.iridium = -107;
    msg.modem = -86;
    msg.pumps = 9;
    msg.vhf = 74;

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
    msg.setTimeStamp(0.4849142007);
    msg.setSource(23974U);
    msg.setSourceEntity(197U);
    msg.setDestination(26124U);
    msg.setDestinationEntity(209U);
    msg.l2 = 33;
    msg.l3 = 41;
    msg.iridium = -5;
    msg.modem = -63;
    msg.pumps = -125;
    msg.vhf = 104;

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
    msg.setTimeStamp(0.508079239816);
    msg.setSource(45843U);
    msg.setSourceEntity(221U);
    msg.setDestination(51682U);
    msg.setDestinationEntity(111U);
    msg.l2 = 3;
    msg.l3 = 50;
    msg.iridium = 34;
    msg.modem = 120;
    msg.pumps = 8;
    msg.vhf = -47;

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
    msg.setTimeStamp(0.146464706388);
    msg.setSource(22510U);
    msg.setSourceEntity(72U);
    msg.setDestination(41528U);
    msg.setDestinationEntity(46U);
    msg.angle = 0.256643926297;
    msg.reference.assign("GRFPVMTPDQTKPOCSSNBJMBFWARWBDFOZGJZJWXKALXGPRMILAATQWMPOAROVHSUXXUTFWVXVOAUENEOCAIXDIGURIPNYSKUAYNBTQNWQELCQE");
    msg.speed = 0.6107913168;

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
    msg.setTimeStamp(0.336472337895);
    msg.setSource(41994U);
    msg.setSourceEntity(84U);
    msg.setDestination(27118U);
    msg.setDestinationEntity(54U);
    msg.angle = 0.824280345891;
    msg.reference.assign("CIXXCMVJDLBRSECYTJLPGGEIKHYBVPTQIMGFFBLRDWZXQYJXIRZRIHCUIWXSVUNYUNZJDKIRU");
    msg.speed = 0.742912487245;

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
    msg.setTimeStamp(0.804907798964);
    msg.setSource(49816U);
    msg.setSourceEntity(253U);
    msg.setDestination(51624U);
    msg.setDestinationEntity(54U);
    msg.angle = 0.276676329997;
    msg.reference.assign("SSKDEZVZUKRCPQMMQMRMIUIKYPBTZQUTLNNNKKKFIWEGCDENIEVPSTWIFXEURKZAILZQIVZAZZUMYVBNODDDYCFYU");
    msg.speed = 0.724964224827;

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
    msg.setTimeStamp(0.887611394883);
    msg.setSource(45579U);
    msg.setSourceEntity(178U);
    msg.setDestination(28726U);
    msg.setDestinationEntity(100U);
    msg.angle = 0.395392127703;
    msg.speed = 0.955153120387;

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
    msg.setTimeStamp(0.257673128435);
    msg.setSource(63082U);
    msg.setSourceEntity(58U);
    msg.setDestination(57513U);
    msg.setDestinationEntity(50U);
    msg.angle = 0.238346848306;
    msg.speed = 0.424851881183;

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
    msg.setTimeStamp(0.709883833258);
    msg.setSource(8141U);
    msg.setSourceEntity(126U);
    msg.setDestination(39913U);
    msg.setDestinationEntity(206U);
    msg.angle = 0.904113343019;
    msg.speed = 0.514320039985;

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
    msg.setTimeStamp(0.834581871536);
    msg.setSource(27946U);
    msg.setSourceEntity(13U);
    msg.setDestination(16170U);
    msg.setDestinationEntity(103U);
    msg.dir = 0.522644754993;
    msg.speed = 0.16724396582;

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
    msg.setTimeStamp(0.700187587224);
    msg.setSource(16378U);
    msg.setSourceEntity(23U);
    msg.setDestination(20819U);
    msg.setDestinationEntity(49U);
    msg.dir = 0.547728164148;
    msg.speed = 0.0897229921712;

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
    msg.setTimeStamp(0.79843792006);
    msg.setSource(27363U);
    msg.setSourceEntity(122U);
    msg.setDestination(37302U);
    msg.setDestinationEntity(113U);
    msg.dir = 0.463708743663;
    msg.speed = 0.399165602704;

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
    msg.setTimeStamp(0.614038296474);
    msg.setSource(61634U);
    msg.setSourceEntity(35U);
    msg.setDestination(12369U);
    msg.setDestinationEntity(211U);
    msg.x = 0.332448021277;
    msg.y = 0.551631784269;
    msg.z1 = 0.112164539168;
    msg.z2 = 0.468877753841;

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
    msg.setTimeStamp(0.32462120411);
    msg.setSource(15009U);
    msg.setSourceEntity(192U);
    msg.setDestination(19620U);
    msg.setDestinationEntity(96U);
    msg.x = 0.473059012817;
    msg.y = 0.0955573246778;
    msg.z1 = 0.746521947973;
    msg.z2 = 0.167577317285;

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
    msg.setTimeStamp(0.8196615454);
    msg.setSource(10004U);
    msg.setSourceEntity(73U);
    msg.setDestination(25911U);
    msg.setDestinationEntity(152U);
    msg.x = 0.932886195157;
    msg.y = 0.748909544636;
    msg.z1 = 0.686319379973;
    msg.z2 = 0.167748094526;

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
    msg.setTimeStamp(0.208863700283);
    msg.setSource(39066U);
    msg.setSourceEntity(254U);
    msg.setDestination(12744U);
    msg.setDestinationEntity(209U);
    msg.mmsi = 0.257155188624;
    msg.lat = 0.897453336981;
    msg.lon = 0.387233108045;
    msg.x = 0.0828554779178;
    msg.y = 0.75867965405;
    msg.speed = 0.824656779937;
    msg.course = 0.920001867298;
    msg.dist = 0.952558470227;
    msg.length = 0.846380262488;
    msg.width = 0.37855826965;
    msg.o_vect = 0.177521733225;

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
    msg.setTimeStamp(0.816953204008);
    msg.setSource(1824U);
    msg.setSourceEntity(250U);
    msg.setDestination(14755U);
    msg.setDestinationEntity(152U);
    msg.mmsi = 0.0846720068052;
    msg.lat = 0.746220713992;
    msg.lon = 0.68261764049;
    msg.x = 0.809221613645;
    msg.y = 0.385615891525;
    msg.speed = 0.875365165596;
    msg.course = 0.0453983619429;
    msg.dist = 0.0905165232686;
    msg.length = 0.876663998127;
    msg.width = 0.511702756464;
    msg.o_vect = 0.329246142595;

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
    msg.setTimeStamp(0.997087070128);
    msg.setSource(34866U);
    msg.setSourceEntity(68U);
    msg.setDestination(7544U);
    msg.setDestinationEntity(22U);
    msg.mmsi = 0.0108420581666;
    msg.lat = 0.821596233384;
    msg.lon = 0.0451899560946;
    msg.x = 0.32551562625;
    msg.y = 0.134696014773;
    msg.speed = 0.156660447421;
    msg.course = 0.07227768763;
    msg.dist = 0.665061681753;
    msg.length = 0.602305420065;
    msg.width = 0.471567013823;
    msg.o_vect = 0.0550731922122;

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
    msg.setTimeStamp(0.714220529401);
    msg.setSource(11654U);
    msg.setSourceEntity(115U);
    msg.setDestination(60727U);
    msg.setDestinationEntity(6U);
    msg.locations.assign("ZBLGVQITZYHDDYSCURJYCEVYVAQOHPNZJYNAGUPZRBOAOJVFGBXAXBNISWIKGGVKKKFFGBMVETLQUOYOBRODILCAWDRZMRQKNZTF");

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
    msg.setTimeStamp(0.0233915738612);
    msg.setSource(38568U);
    msg.setSourceEntity(58U);
    msg.setDestination(36593U);
    msg.setDestinationEntity(11U);
    msg.locations.assign("YYINJJGMAWRENBMSOQGZQUDWETOBTBWITVTKGKWXIEASKSJSUMIDQCATFHYWMLURWHQYWTBTFAVRZYNGAQRVSBQELHJGFRUTXRKEBHAO");

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
    msg.setTimeStamp(0.202389667392);
    msg.setSource(27646U);
    msg.setSourceEntity(172U);
    msg.setDestination(10793U);
    msg.setDestinationEntity(124U);
    msg.locations.assign("SMWHTNQTCOFBTAPEZLBZBWAYVHQPDNMXTXEZAJGKHWMSXOVWNEUCNRVFKQUYRAPBTVYYBUKKUYCMXXCYXWJFCRHHIBRJSAKEHBVMSFDKSHGNADRPMGTWTUDQZPHSDURKXVEZZIJ");

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
    msg.setTimeStamp(0.0816186568111);
    msg.setSource(4910U);
    msg.setSourceEntity(74U);
    msg.setDestination(33756U);
    msg.setDestinationEntity(199U);
    msg.value = 0.521460761235;

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
    msg.setTimeStamp(0.462529357787);
    msg.setSource(45025U);
    msg.setSourceEntity(250U);
    msg.setDestination(24160U);
    msg.setDestinationEntity(35U);
    msg.value = 0.185303251679;

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
    msg.setTimeStamp(0.601875832958);
    msg.setSource(17498U);
    msg.setSourceEntity(244U);
    msg.setDestination(17175U);
    msg.setDestinationEntity(110U);
    msg.value = 0.668811689451;

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
    msg.setTimeStamp(0.36991871879);
    msg.setSource(14258U);
    msg.setSourceEntity(202U);
    msg.setDestination(64440U);
    msg.setDestinationEntity(208U);
    msg.beam1 = 0.404795629955;
    msg.beam2 = 0.636962847135;
    msg.beam3 = 0.877671424043;
    msg.beam4 = 0.969961128152;

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
    msg.setTimeStamp(0.0523495505869);
    msg.setSource(50855U);
    msg.setSourceEntity(54U);
    msg.setDestination(32472U);
    msg.setDestinationEntity(12U);
    msg.beam1 = 0.141749537334;
    msg.beam2 = 0.828024992905;
    msg.beam3 = 0.893040990361;
    msg.beam4 = 0.183891223605;

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
    msg.setTimeStamp(0.780129508435);
    msg.setSource(65061U);
    msg.setSourceEntity(115U);
    msg.setDestination(22132U);
    msg.setDestinationEntity(61U);
    msg.beam1 = 0.907576501595;
    msg.beam2 = 0.0726352386768;
    msg.beam3 = 0.532397156226;
    msg.beam4 = 0.886376818495;

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
    msg.setTimeStamp(0.24161383833);
    msg.setSource(7141U);
    msg.setSourceEntity(87U);
    msg.setDestination(50344U);
    msg.setDestinationEntity(150U);
    msg.beam1 = 104U;
    msg.beam2 = 149U;
    msg.beam3 = 24U;
    msg.beam4 = 151U;

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
    msg.setTimeStamp(0.884384902053);
    msg.setSource(19146U);
    msg.setSourceEntity(244U);
    msg.setDestination(5310U);
    msg.setDestinationEntity(221U);
    msg.beam1 = 134U;
    msg.beam2 = 49U;
    msg.beam3 = 214U;
    msg.beam4 = 105U;

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
    msg.setTimeStamp(0.506400902918);
    msg.setSource(62335U);
    msg.setSourceEntity(184U);
    msg.setDestination(46512U);
    msg.setDestinationEntity(160U);
    msg.beam1 = 143U;
    msg.beam2 = 252U;
    msg.beam3 = 63U;
    msg.beam4 = 135U;

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
    msg.setTimeStamp(0.5040420006);
    msg.setSource(12601U);
    msg.setSourceEntity(74U);
    msg.setDestination(866U);
    msg.setDestinationEntity(1U);
    msg.cellposition = 0.883575274269;
    msg.x = 0.703270735023;
    msg.y = 0.123318423028;
    msg.z1 = 0.666722458594;
    msg.z2 = 0.567084824171;
    msg.amp0 = 0.286585443856;
    msg.amp1 = 0.345162570968;
    msg.amp2 = 0.582487719694;
    msg.amp3 = 0.516342883304;
    msg.cor0 = 37U;
    msg.cor1 = 200U;
    msg.cor2 = 9U;
    msg.cor3 = 163U;

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
    msg.setTimeStamp(0.513326151455);
    msg.setSource(65138U);
    msg.setSourceEntity(242U);
    msg.setDestination(19758U);
    msg.setDestinationEntity(136U);
    msg.cellposition = 0.365556989619;
    msg.x = 0.535891165547;
    msg.y = 0.0630482274259;
    msg.z1 = 0.180997244417;
    msg.z2 = 0.226226345871;
    msg.amp0 = 0.439646254192;
    msg.amp1 = 0.887834601318;
    msg.amp2 = 0.427720355324;
    msg.amp3 = 0.576843561829;
    msg.cor0 = 129U;
    msg.cor1 = 105U;
    msg.cor2 = 135U;
    msg.cor3 = 58U;

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
    msg.setTimeStamp(0.160120798711);
    msg.setSource(3955U);
    msg.setSourceEntity(140U);
    msg.setDestination(50177U);
    msg.setDestinationEntity(157U);
    msg.cellposition = 0.384614935606;
    msg.x = 0.800844101814;
    msg.y = 0.258013744295;
    msg.z1 = 0.0702769895515;
    msg.z2 = 0.137003097327;
    msg.amp0 = 0.374087845593;
    msg.amp1 = 0.57439318607;
    msg.amp2 = 0.0425103749468;
    msg.amp3 = 0.924124274965;
    msg.cor0 = 3U;
    msg.cor1 = 132U;
    msg.cor2 = 189U;
    msg.cor3 = 65U;

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
    msg.setTimeStamp(0.275132690492);
    msg.setSource(19271U);
    msg.setSourceEntity(225U);
    msg.setDestination(3289U);
    msg.setDestinationEntity(184U);

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
    msg.setTimeStamp(0.0352473245968);
    msg.setSource(16741U);
    msg.setSourceEntity(176U);
    msg.setDestination(6934U);
    msg.setDestinationEntity(13U);

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
    msg.setTimeStamp(0.972424575727);
    msg.setSource(21513U);
    msg.setSourceEntity(107U);
    msg.setDestination(30694U);
    msg.setDestinationEntity(235U);

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
    msg.setTimeStamp(0.303441110037);
    msg.setSource(44435U);
    msg.setSourceEntity(12U);
    msg.setDestination(30393U);
    msg.setDestinationEntity(156U);
    msg.serial_no = 20197228U;
    msg.unix_timestamp = 3288148788U;
    msg.millis = 54088U;
    msg.trans_protocol = 134U;
    msg.trans_id = 3269281339U;
    msg.trans_data = 50471U;
    msg.snr = 252U;
    msg.trans_freq = 230U;
    msg.recv_mem_addr = 6502U;
    msg.lat = 0.555831689438;
    msg.lon = 0.225809967346;

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
    msg.setTimeStamp(0.152366063334);
    msg.setSource(63794U);
    msg.setSourceEntity(32U);
    msg.setDestination(36439U);
    msg.setDestinationEntity(72U);
    msg.serial_no = 3561743361U;
    msg.unix_timestamp = 2592640420U;
    msg.millis = 41119U;
    msg.trans_protocol = 50U;
    msg.trans_id = 1109031413U;
    msg.trans_data = 26657U;
    msg.snr = 81U;
    msg.trans_freq = 104U;
    msg.recv_mem_addr = 43040U;
    msg.lat = 0.0108406280773;
    msg.lon = 0.0109116497045;

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
    msg.setTimeStamp(0.101402030473);
    msg.setSource(6545U);
    msg.setSourceEntity(94U);
    msg.setDestination(13700U);
    msg.setDestinationEntity(208U);
    msg.serial_no = 1145619498U;
    msg.unix_timestamp = 1227950610U;
    msg.millis = 54284U;
    msg.trans_protocol = 253U;
    msg.trans_id = 1815741665U;
    msg.trans_data = 41453U;
    msg.snr = 68U;
    msg.trans_freq = 41U;
    msg.recv_mem_addr = 22571U;
    msg.lat = 0.44707744825;
    msg.lon = 0.025692062248;

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
    msg.setTimeStamp(0.249567912099);
    msg.setSource(64825U);
    msg.setSourceEntity(38U);
    msg.setDestination(21022U);
    msg.setDestinationEntity(173U);
    msg.serial_no = 3764344184U;
    msg.unix_timestamp = 3049468487U;
    msg.temperature = 0.355754315453;
    msg.avg_noise_level = 45U;
    msg.peak_noise_level = 237U;
    msg.recv_listen_freq = 188U;
    msg.recv_mem_addr = 35566U;

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
    msg.setTimeStamp(0.558336024791);
    msg.setSource(63853U);
    msg.setSourceEntity(12U);
    msg.setDestination(26454U);
    msg.setDestinationEntity(66U);
    msg.serial_no = 507210686U;
    msg.unix_timestamp = 1368455661U;
    msg.temperature = 0.8244211284;
    msg.avg_noise_level = 139U;
    msg.peak_noise_level = 105U;
    msg.recv_listen_freq = 175U;
    msg.recv_mem_addr = 42057U;

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
    msg.setTimeStamp(0.136306476157);
    msg.setSource(64185U);
    msg.setSourceEntity(121U);
    msg.setDestination(25581U);
    msg.setDestinationEntity(107U);
    msg.serial_no = 20260273U;
    msg.unix_timestamp = 421924481U;
    msg.temperature = 0.646819071177;
    msg.avg_noise_level = 91U;
    msg.peak_noise_level = 108U;
    msg.recv_listen_freq = 16U;
    msg.recv_mem_addr = 41440U;

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
    msg.setTimeStamp(0.290497566093);
    msg.setSource(43416U);
    msg.setSourceEntity(232U);
    msg.setDestination(32434U);
    msg.setDestinationEntity(219U);
    msg.frequency = 4245398194U;
    msg.info.assign("TISGCBURJODFPLSEQAUBEXQP");

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
    msg.setTimeStamp(0.458300968595);
    msg.setSource(35537U);
    msg.setSourceEntity(136U);
    msg.setDestination(11947U);
    msg.setDestinationEntity(250U);
    msg.frequency = 2699286134U;
    msg.info.assign("RNNEWGGDJPEODILZTMZRMBSTZXVVTOSXXCKUFLOTKRJHFWKFQUNBBYPEIGZITCDOIOEOMHTYSKYCSDXJVVCBPERRHVADFS");

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
    msg.setTimeStamp(0.892516467039);
    msg.setSource(26454U);
    msg.setSourceEntity(35U);
    msg.setDestination(21943U);
    msg.setDestinationEntity(63U);
    msg.frequency = 2695960687U;
    msg.info.assign("KRRMWMLPZCQTWNDPUDVEVKRZRNFLCGAGG");

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
    msg.setTimeStamp(0.894815719145);
    msg.setSource(36383U);
    msg.setSourceEntity(202U);
    msg.setDestination(11529U);
    msg.setDestinationEntity(153U);
    msg.adcp = 23;
    msg.adcp_dur = 2682777153U;
    msg.adcp_fr = 3918843350U;
    msg.ctd = 116;
    msg.ctd_dur = 1759539976U;
    msg.ctd_fr = 1688227727U;
    msg.opt = 114;
    msg.opt_dur = 2238007613U;
    msg.opt_fr = 3670053484U;
    msg.tbl = 114;
    msg.tbl_dur = 3189015636U;
    msg.tbl_fr = 3492201732U;
    msg.eco = 27;
    msg.eco_dur = 3318407056U;
    msg.eco_fr = 2037556918U;

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
    msg.setTimeStamp(0.307838217392);
    msg.setSource(48881U);
    msg.setSourceEntity(95U);
    msg.setDestination(20842U);
    msg.setDestinationEntity(51U);
    msg.adcp = -128;
    msg.adcp_dur = 688972526U;
    msg.adcp_fr = 2711343509U;
    msg.ctd = -89;
    msg.ctd_dur = 1212977161U;
    msg.ctd_fr = 1354259497U;
    msg.opt = -120;
    msg.opt_dur = 2988912673U;
    msg.opt_fr = 1409614090U;
    msg.tbl = 28;
    msg.tbl_dur = 4178333597U;
    msg.tbl_fr = 3330177173U;
    msg.eco = -88;
    msg.eco_dur = 3522566324U;
    msg.eco_fr = 2641070164U;

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
    msg.setTimeStamp(0.705910330349);
    msg.setSource(11040U);
    msg.setSourceEntity(12U);
    msg.setDestination(57994U);
    msg.setDestinationEntity(207U);
    msg.adcp = -77;
    msg.adcp_dur = 3264916037U;
    msg.adcp_fr = 4103870189U;
    msg.ctd = 46;
    msg.ctd_dur = 3571552092U;
    msg.ctd_fr = 2370588472U;
    msg.opt = -7;
    msg.opt_dur = 1088307732U;
    msg.opt_fr = 1130411656U;
    msg.tbl = -62;
    msg.tbl_dur = 2019463239U;
    msg.tbl_fr = 2852644378U;
    msg.eco = 58;
    msg.eco_dur = 4252484610U;
    msg.eco_fr = 123929285U;

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
    IMC::AisGpsFix msg;
    msg.setTimeStamp(0.0681297164046);
    msg.setSource(55973U);
    msg.setSourceEntity(41U);
    msg.setDestination(20089U);
    msg.setDestinationEntity(35U);
    msg.validity = 57490U;
    msg.type = 124U;
    msg.utc_year = 38407U;
    msg.utc_month = 226U;
    msg.utc_day = 235U;
    msg.utc_time = 0.603720809666;
    msg.lat = 0.696107471022;
    msg.lon = 0.589671851239;
    msg.height = 0.616215756148;
    msg.satellites = 187U;
    msg.cog = 0.612075264849;
    msg.sog = 0.667964835824;
    msg.hdop = 0.120358458805;
    msg.vdop = 0.541631944941;
    msg.hacc = 0.35513008622;
    msg.vacc = 0.622882074653;

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
    msg.setTimeStamp(0.13421111286);
    msg.setSource(48366U);
    msg.setSourceEntity(126U);
    msg.setDestination(49847U);
    msg.setDestinationEntity(52U);
    msg.validity = 5474U;
    msg.type = 39U;
    msg.utc_year = 49278U;
    msg.utc_month = 180U;
    msg.utc_day = 108U;
    msg.utc_time = 0.966671197668;
    msg.lat = 0.884846172149;
    msg.lon = 0.336839183401;
    msg.height = 0.60271237542;
    msg.satellites = 160U;
    msg.cog = 0.985835549463;
    msg.sog = 0.305229708793;
    msg.hdop = 0.197267496961;
    msg.vdop = 0.16733027557;
    msg.hacc = 0.367847692849;
    msg.vacc = 0.243736446496;

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
    msg.setTimeStamp(0.985291671055);
    msg.setSource(58471U);
    msg.setSourceEntity(136U);
    msg.setDestination(9049U);
    msg.setDestinationEntity(46U);
    msg.validity = 1667U;
    msg.type = 28U;
    msg.utc_year = 5702U;
    msg.utc_month = 245U;
    msg.utc_day = 58U;
    msg.utc_time = 0.794957420652;
    msg.lat = 0.626189188833;
    msg.lon = 0.177721901774;
    msg.height = 0.624870277067;
    msg.satellites = 99U;
    msg.cog = 0.0575013209977;
    msg.sog = 0.255223666916;
    msg.hdop = 0.451004348639;
    msg.vdop = 0.465666974009;
    msg.hacc = 0.154051120955;
    msg.vacc = 0.315818927545;

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

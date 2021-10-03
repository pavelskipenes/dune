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
// IMC XML MD5: c756834414c77941d0284c7a239957ac                            *
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
    msg.setTimeStamp(0.898380896858);
    msg.setSource(63221U);
    msg.setSourceEntity(41U);
    msg.setDestination(44524U);
    msg.setDestinationEntity(6U);
    msg.state = 189U;
    msg.flags = 31U;
    msg.description.assign("DATESGZUSLBFNQCTXGFWLPTBXGNNPCQASDAOOCXXYWNMDZFAHZCKNJWOZGPZIBWSCBVFNZHMVZVTYWNM");

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
    msg.setTimeStamp(0.888809056422);
    msg.setSource(15357U);
    msg.setSourceEntity(130U);
    msg.setDestination(34824U);
    msg.setDestinationEntity(221U);
    msg.state = 46U;
    msg.flags = 185U;
    msg.description.assign("VZRROSNTQWNYQLUKZGGSCWACKIXPBFMCXXJFZLSCQJKSBJZVEGPRLKGITGDFBXEXOHKQUCAUGEAVDXDUTEIXSDIEN");

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
    msg.setTimeStamp(0.254381855756);
    msg.setSource(55201U);
    msg.setSourceEntity(140U);
    msg.setDestination(30618U);
    msg.setDestinationEntity(38U);
    msg.state = 222U;
    msg.flags = 164U;
    msg.description.assign("DWBPNKUXLXJVHNMCMECCBIJFALMHW");

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
    msg.setTimeStamp(0.295544831866);
    msg.setSource(42191U);
    msg.setSourceEntity(57U);
    msg.setDestination(14905U);
    msg.setDestinationEntity(85U);

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
    msg.setTimeStamp(0.730019917882);
    msg.setSource(40574U);
    msg.setSourceEntity(178U);
    msg.setDestination(31241U);
    msg.setDestinationEntity(129U);

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
    msg.setTimeStamp(0.749913610638);
    msg.setSource(9916U);
    msg.setSourceEntity(162U);
    msg.setDestination(49363U);
    msg.setDestinationEntity(101U);

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
    msg.setTimeStamp(0.622847233142);
    msg.setSource(32855U);
    msg.setSourceEntity(214U);
    msg.setDestination(40395U);
    msg.setDestinationEntity(123U);
    msg.id = 229U;
    msg.label.assign("LAXSVRIJEZWAKJEBKODJDZPJGHWPSVSOHVQGLHTQPELMIDKDTDTKWUOZXAZSQYYANMTWTEULCWJQWQZXGIMOGRARYIMCGLKYWYVYTGPEJMJSNYEHDPXZGQBVQDXJGV");
    msg.component.assign("CBWQXORTMNPFNJIIAPHZYZIJLOVUSZBOHRIPENEOJUWFIAOJKKXUXWSALZOMKGVWDCLDYEBEJFJGYRXMNMFQGOBQUKTSMSANFVUQJAQKRPTKSHRTQBYQRZUJGAOMUUFPYEEVLTXL");
    msg.act_time = 60941U;
    msg.deact_time = 4595U;

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
    msg.setTimeStamp(0.140284022898);
    msg.setSource(41736U);
    msg.setSourceEntity(41U);
    msg.setDestination(17312U);
    msg.setDestinationEntity(5U);
    msg.id = 211U;
    msg.label.assign("JWPGIQZMFEOZYUDBVNOJSJWOITITSKFVSHDKHNDLOWCQVHIJYZFMASKBAXPUBRBBXKGQJJTMKWSVMQUYDAZXYGCFASXMVULTPRNRZGQEPXWTAGMUKSGGLRFKXPIMMNRWTPDKIJYTFLNHCDVCSUDZWFOLBKIQHYPHMLVAWZLKSRJANNERAECZNCQPX");
    msg.component.assign("RFSGXTSQLPYADXIMASUQJIXXLZAXUUHLOMREXTMIIZNJBSFTHDVCAAFOTKTYVWDYMBSPXJCPIRROCHZKOOWSSHTVVQIQCWGEBLZEVPPKPKMDQDUYPDSKCPCDERINMLPVMZGUASYCWHWUKBQKFGAQHJWXTBWLITJNTXQOYFHZXCCRNUILFYARGDVPMUISUR");
    msg.act_time = 33755U;
    msg.deact_time = 49401U;

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
    msg.setTimeStamp(0.191920852993);
    msg.setSource(50697U);
    msg.setSourceEntity(156U);
    msg.setDestination(4463U);
    msg.setDestinationEntity(203U);
    msg.id = 53U;
    msg.label.assign("SJVLKKCDSCGWIXKHIPGQMMAXWEKOZPDWFACENSGXXHCYZUZXRSQEMDPDQVMVPVANAISJAUFSGKCBRXRHYFBSZNLRIJDLVGVQAAMWNRPMBOMPHOBQYPGNBXBLBOLYDOFEFTWDMRJRYKONQOILYJIDFTKWTEHOCNCOVKZLZKLXVNHIUCREKNTHIZEGWUFYGHEZRCUHOBJUTDFCWYGFWPGPPSTZDQUTUQTJVBUQFJYAEJILAXBVWJYQTHEAN");
    msg.component.assign("LCWOGOZNNNUWBHZZGWRSODGHYEFFCSNMPAEBVDFJVCENGVYGQMAVGTZPCYUHEMDLBEIMRVOTITCXUFIHAXZQNFDLGIUENPHSIBJMDVWHFQOFDUBLNYDPTVEQSIWDKYAVGPMNECXCSAGRLZKAHRHJQSJYSYQIPRXLKPJFGDXUAMRBUALMXHKTXDXUKTIKNPVJRPJRUTBCQYWMZLOJEOWPSBBECKOMWKKTI");
    msg.act_time = 2254U;
    msg.deact_time = 30711U;

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
    msg.setTimeStamp(0.0838250458534);
    msg.setSource(56237U);
    msg.setSourceEntity(109U);
    msg.setDestination(45255U);
    msg.setDestinationEntity(172U);
    msg.id = 118U;

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
    msg.setTimeStamp(0.451084077727);
    msg.setSource(30835U);
    msg.setSourceEntity(98U);
    msg.setDestination(42614U);
    msg.setDestinationEntity(168U);
    msg.id = 210U;

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
    msg.setTimeStamp(0.97545214904);
    msg.setSource(36920U);
    msg.setSourceEntity(148U);
    msg.setDestination(37145U);
    msg.setDestinationEntity(10U);
    msg.id = 3U;

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
    msg.setTimeStamp(0.633645285897);
    msg.setSource(47618U);
    msg.setSourceEntity(96U);
    msg.setDestination(39943U);
    msg.setDestinationEntity(53U);
    msg.op = 92U;
    msg.list.assign("CKRUQDSVHERUZTHZEYULVSADCPVBUEXOGKNYWETLWEIQNKRPPAIXGPIJGMEOFZPXFBGWTOHZLCEJNMFFLFLBNNQASOHNZJXOAOMGGTDRVVDIQJZBMQNURSQYKXWWBGQPUARCRBPAKBGCPVMZAIYFPLWMNZCNLUVWIYCWYGYKLIZKMFDRDUMWFJTLJTHYFSSEQBYHYVAIWJHJQEHSOP");

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
    msg.setTimeStamp(0.890345054206);
    msg.setSource(29975U);
    msg.setSourceEntity(198U);
    msg.setDestination(23572U);
    msg.setDestinationEntity(92U);
    msg.op = 196U;
    msg.list.assign("WHVNHBFXRQOMESKTMTHKDCUOMGMCENVRHSLQUSKTEENGXAPJOI");

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
    msg.setTimeStamp(0.825074277782);
    msg.setSource(54776U);
    msg.setSourceEntity(52U);
    msg.setDestination(39011U);
    msg.setDestinationEntity(141U);
    msg.op = 4U;
    msg.list.assign("QWHNFEEIJYLRXWZBHGOUZXZPRGIDCTASUGMBCUVPUKKQNTVCOHLMLPLHDCWTRXKEPJRHQRKJHJADYWPFXFESCYASTBUSLMVGSRBGSPQXJUZXNDAUCHOMLIW");

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
    msg.setTimeStamp(0.915946676885);
    msg.setSource(42754U);
    msg.setSourceEntity(29U);
    msg.setDestination(65256U);
    msg.setDestinationEntity(4U);
    msg.value = 141U;

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
    msg.setTimeStamp(0.930982952435);
    msg.setSource(884U);
    msg.setSourceEntity(226U);
    msg.setDestination(64022U);
    msg.setDestinationEntity(109U);
    msg.value = 62U;

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
    msg.setTimeStamp(0.463070728944);
    msg.setSource(3481U);
    msg.setSourceEntity(167U);
    msg.setDestination(58954U);
    msg.setDestinationEntity(169U);
    msg.value = 144U;

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
    msg.setTimeStamp(0.263208238691);
    msg.setSource(62720U);
    msg.setSourceEntity(229U);
    msg.setDestination(19921U);
    msg.setDestinationEntity(235U);
    msg.consumer.assign("HETIDKINNWUGIJBXIQAPOAJLBXGKFRDGYBSTVXSNEZPMWOBWGACYSTITDCBXTNCQNELSKCYDIFYUJKBTTBJSFZARECVVHMYQMJPGMZHVSEDXFFRGRLOVNAJMFFDKQRHZFGHUYYTAOACAZILHXTDQDDNINGUOWCLUUOJUJPELPCSWCRLUSZBHVYRSOPEXWHQWLVGWTJULKDYVVNRUMZAPNP");
    msg.message_id = 18716U;

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
    msg.setTimeStamp(0.191055629711);
    msg.setSource(41068U);
    msg.setSourceEntity(51U);
    msg.setDestination(13013U);
    msg.setDestinationEntity(199U);
    msg.consumer.assign("THAYASFELJIELJVRFUBXRVKRCXTKEJMPIXCYWTFIJZPCJFVTKEYLQZK");
    msg.message_id = 13105U;

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
    msg.setTimeStamp(0.953379262632);
    msg.setSource(29708U);
    msg.setSourceEntity(153U);
    msg.setDestination(39323U);
    msg.setDestinationEntity(230U);
    msg.consumer.assign("LASGEYALIKBRSMHTOHMTLHABKUVWVUHEQWUXVIMEGCCHJPLNNCBFMLZEFPRTYQKXRYVMDGODIJTQULNNGADKOTONTECUYUBKZVMUCUODVIARXXDNEGTIQXINSPGEHFJHWPGNNSEKAQSOUZSSBVQSSPTQFLXCQBWJGVCZHFP");
    msg.message_id = 1633U;

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
    msg.setTimeStamp(0.903202738582);
    msg.setSource(39831U);
    msg.setSourceEntity(43U);
    msg.setDestination(22523U);
    msg.setDestinationEntity(39U);
    msg.type = 179U;

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
    msg.setTimeStamp(0.449409259775);
    msg.setSource(32099U);
    msg.setSourceEntity(36U);
    msg.setDestination(64443U);
    msg.setDestinationEntity(113U);
    msg.type = 167U;

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
    msg.setTimeStamp(0.44703440863);
    msg.setSource(40174U);
    msg.setSourceEntity(68U);
    msg.setDestination(55127U);
    msg.setDestinationEntity(97U);
    msg.type = 44U;

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
    msg.setTimeStamp(0.321890573395);
    msg.setSource(2219U);
    msg.setSourceEntity(68U);
    msg.setDestination(46982U);
    msg.setDestinationEntity(74U);
    msg.op = 1U;

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
    msg.setTimeStamp(0.973991473701);
    msg.setSource(45343U);
    msg.setSourceEntity(138U);
    msg.setDestination(31527U);
    msg.setDestinationEntity(3U);
    msg.op = 130U;

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
    msg.setTimeStamp(0.312492863781);
    msg.setSource(62237U);
    msg.setSourceEntity(190U);
    msg.setDestination(21657U);
    msg.setDestinationEntity(119U);
    msg.op = 163U;

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
    msg.setTimeStamp(0.518821910762);
    msg.setSource(10525U);
    msg.setSourceEntity(54U);
    msg.setDestination(10378U);
    msg.setDestinationEntity(199U);
    msg.total_steps = 209U;
    msg.step_number = 80U;
    msg.step.assign("TGBIJTAVEGSVQFNTLQMRC");
    msg.flags = 231U;

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
    msg.setTimeStamp(0.142124791949);
    msg.setSource(28777U);
    msg.setSourceEntity(221U);
    msg.setDestination(1783U);
    msg.setDestinationEntity(242U);
    msg.total_steps = 154U;
    msg.step_number = 5U;
    msg.step.assign("NJKYKHURMCOPRVCRJCSEPDRJJVXDYJAIWOTLUHWHOXWMZDWLFUYWZOEEKGTMXZZUSUSPJYTBOGWRAANVZRGXBIIRFQJOKUCJFKOPFQVBNCGEBA");
    msg.flags = 106U;

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
    msg.setTimeStamp(0.918867510626);
    msg.setSource(19590U);
    msg.setSourceEntity(228U);
    msg.setDestination(13608U);
    msg.setDestinationEntity(246U);
    msg.total_steps = 10U;
    msg.step_number = 200U;
    msg.step.assign("URXYLDSPXAIMYVFGBLUBNMJOKOPIHRXNEEGTBEHICGSZVIYWSMNJLHRBTFHSLQOXZLPXFQMBDUZDSFVQVQETB");
    msg.flags = 147U;

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
    msg.setTimeStamp(0.119476514525);
    msg.setSource(36805U);
    msg.setSourceEntity(61U);
    msg.setDestination(59357U);
    msg.setDestinationEntity(234U);
    msg.state = 93U;
    msg.error.assign("KQSFFMRFTLAINNZGINSXABOYZMLQDPDOBYOSJGXRHWYRFOVVAGCWDJVXDWSKZUDGMNFSAJLXQCRNLSHGHVINDLEUMFISCVYACUEYAQNWUOTRZZIVFMBMYIZUBRBKZCEXNHZKUPPJJTLWPWQHCIKQHMTOKTLGXRWEAQTHMXJLYXQKAPBEHPGKENEVQSDPYRPDIGWJOLJBULYTWEZWMSTQDKUHFETRAVYMSBGIJCUCCEONTAPIFBJHZVOCGPXODK");

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
    msg.setTimeStamp(0.961462127504);
    msg.setSource(48254U);
    msg.setSourceEntity(47U);
    msg.setDestination(9206U);
    msg.setDestinationEntity(200U);
    msg.state = 251U;
    msg.error.assign("HIOVYERDQFNFCAAXOGGPCUSIZGQRQALIQFFWJKZAZDKBJLMMTHKZOMPBZGSCGWQEALAVYNCFTIVVFRCBKDLSZJSRQVMIZKRRJNIYSJAORCELPOOOQWZUZVNWMYTPYJWBEMUOAEJXPWWFBWLYNDHBKSERKHUNIJLKUUXQUIRTENNYEDHPFMPVTPUMSSHNWCFBDMICSXDDTJVPOOQYJVPUBXCXDCXSXFG");

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
    msg.setTimeStamp(0.625607734217);
    msg.setSource(15213U);
    msg.setSourceEntity(254U);
    msg.setDestination(31624U);
    msg.setDestinationEntity(246U);
    msg.state = 104U;
    msg.error.assign("DPIFRPJFGWJIBBUYXJFHOLSTTGCGMINTUHAMHUNOHCOPUIECOXUJIVLKDBUAAVVSOURXLKTSBBWVMOENPMZYCAPQSLUCEDZYQLJGXZDMRSFKNEYLKTWTWORITQPHAEHGMXSHOAAPLIZSAKBTVCZNXRGYFESYWPRGQUXJDWFLZDQWQKZHHJGQKEDYKFNCR");

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
    msg.setTimeStamp(0.913071943506);
    msg.setSource(44176U);
    msg.setSourceEntity(75U);
    msg.setDestination(33405U);
    msg.setDestinationEntity(155U);

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
    msg.setTimeStamp(0.929588088055);
    msg.setSource(42068U);
    msg.setSourceEntity(11U);
    msg.setDestination(57191U);
    msg.setDestinationEntity(99U);

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
    msg.setTimeStamp(0.219969972951);
    msg.setSource(59737U);
    msg.setSourceEntity(113U);
    msg.setDestination(54171U);
    msg.setDestinationEntity(0U);

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
    msg.setTimeStamp(0.527644393175);
    msg.setSource(41350U);
    msg.setSourceEntity(165U);
    msg.setDestination(39955U);
    msg.setDestinationEntity(101U);
    msg.op = 12U;
    msg.speed_min = 0.382450905685;
    msg.speed_max = 0.890902627977;
    msg.long_accel = 0.718697286464;
    msg.alt_max_msl = 0.549078627964;
    msg.dive_fraction_max = 0.534648626942;
    msg.climb_fraction_max = 0.769259970895;
    msg.bank_max = 0.374720286297;
    msg.p_max = 0.246689874431;
    msg.pitch_min = 0.736011231729;
    msg.pitch_max = 0.566948276293;
    msg.q_max = 0.606320808144;
    msg.g_min = 0.559666979683;
    msg.g_max = 0.960477103254;
    msg.g_lat_max = 0.544190833343;
    msg.rpm_min = 0.154798546609;
    msg.rpm_max = 0.315590834752;
    msg.rpm_rate_max = 0.545368375775;

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
    msg.setTimeStamp(0.887992235345);
    msg.setSource(43959U);
    msg.setSourceEntity(90U);
    msg.setDestination(51070U);
    msg.setDestinationEntity(233U);
    msg.op = 63U;
    msg.speed_min = 0.067717596453;
    msg.speed_max = 0.672986078142;
    msg.long_accel = 0.910985868027;
    msg.alt_max_msl = 0.101270515904;
    msg.dive_fraction_max = 0.90413398809;
    msg.climb_fraction_max = 0.11451261803;
    msg.bank_max = 0.468382001876;
    msg.p_max = 0.345039764952;
    msg.pitch_min = 0.739424351959;
    msg.pitch_max = 0.835473995946;
    msg.q_max = 0.0183858592827;
    msg.g_min = 0.88287534412;
    msg.g_max = 0.538284701752;
    msg.g_lat_max = 0.0342491856418;
    msg.rpm_min = 0.519931744328;
    msg.rpm_max = 0.851921170328;
    msg.rpm_rate_max = 0.790639776019;

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
    msg.setTimeStamp(0.28223125503);
    msg.setSource(6930U);
    msg.setSourceEntity(239U);
    msg.setDestination(25100U);
    msg.setDestinationEntity(181U);
    msg.op = 200U;
    msg.speed_min = 0.474035094129;
    msg.speed_max = 0.0302395866732;
    msg.long_accel = 0.0898008898773;
    msg.alt_max_msl = 0.98708901922;
    msg.dive_fraction_max = 0.295891127248;
    msg.climb_fraction_max = 0.787702494963;
    msg.bank_max = 0.973165645308;
    msg.p_max = 0.202726089248;
    msg.pitch_min = 0.576478779583;
    msg.pitch_max = 0.928648694054;
    msg.q_max = 0.880217788915;
    msg.g_min = 0.729570828929;
    msg.g_max = 0.86620143377;
    msg.g_lat_max = 0.84537717587;
    msg.rpm_min = 0.183718218533;
    msg.rpm_max = 0.947252989838;
    msg.rpm_rate_max = 0.234368207511;

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
    msg.setTimeStamp(0.082779425451);
    msg.setSource(33698U);
    msg.setSourceEntity(18U);
    msg.setDestination(11856U);
    msg.setDestinationEntity(2U);
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.89466771641;
    tmp_msg_0.speed_units = 71U;
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
    msg.setTimeStamp(0.326210469266);
    msg.setSource(4984U);
    msg.setSourceEntity(138U);
    msg.setDestination(9255U);
    msg.setDestinationEntity(69U);
    IMC::AirSaturation tmp_msg_0;
    tmp_msg_0.value = 0.029845648129;
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
    msg.setTimeStamp(0.0630185060405);
    msg.setSource(22830U);
    msg.setSourceEntity(153U);
    msg.setDestination(61878U);
    msg.setDestinationEntity(94U);

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
    msg.setTimeStamp(0.52239377339);
    msg.setSource(10236U);
    msg.setSourceEntity(246U);
    msg.setDestination(19879U);
    msg.setDestinationEntity(169U);
    msg.lat = 0.0227354747321;
    msg.lon = 0.492036497575;
    msg.height = 0.782179689488;
    msg.x = 0.94605438966;
    msg.y = 0.78459697453;
    msg.z = 0.693490082738;
    msg.phi = 0.131891325098;
    msg.theta = 0.172969476227;
    msg.psi = 0.484276843636;
    msg.u = 0.524081108074;
    msg.v = 0.114588536593;
    msg.w = 0.120293644587;
    msg.p = 0.711063570938;
    msg.q = 0.133516519055;
    msg.r = 0.132026878027;
    msg.svx = 0.593623039306;
    msg.svy = 0.669608320429;
    msg.svz = 0.403872088193;

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
    msg.setTimeStamp(0.741578287091);
    msg.setSource(56181U);
    msg.setSourceEntity(122U);
    msg.setDestination(14586U);
    msg.setDestinationEntity(45U);
    msg.lat = 0.569517385559;
    msg.lon = 0.0111725937184;
    msg.height = 0.445916062148;
    msg.x = 0.0960435031295;
    msg.y = 0.101464658172;
    msg.z = 0.352782286062;
    msg.phi = 0.620293979071;
    msg.theta = 0.154773738471;
    msg.psi = 0.0578675254301;
    msg.u = 0.426984211445;
    msg.v = 0.963379977953;
    msg.w = 0.575702976899;
    msg.p = 0.0259034561623;
    msg.q = 0.156699943941;
    msg.r = 0.0172493550503;
    msg.svx = 0.684625832998;
    msg.svy = 0.902056547895;
    msg.svz = 0.181368881943;

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
    msg.setTimeStamp(0.418237529691);
    msg.setSource(22406U);
    msg.setSourceEntity(191U);
    msg.setDestination(59627U);
    msg.setDestinationEntity(59U);
    msg.lat = 0.890686312508;
    msg.lon = 0.798595958118;
    msg.height = 0.176539891299;
    msg.x = 0.414308776352;
    msg.y = 0.824312488889;
    msg.z = 0.610239230647;
    msg.phi = 0.953675096467;
    msg.theta = 0.0400488424438;
    msg.psi = 0.00765948335753;
    msg.u = 0.529088677243;
    msg.v = 0.275706344987;
    msg.w = 0.289109685683;
    msg.p = 0.218014342794;
    msg.q = 0.666083672962;
    msg.r = 0.0331963562713;
    msg.svx = 0.152645306993;
    msg.svy = 0.0457258929778;
    msg.svz = 0.577952069193;

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
    msg.setTimeStamp(0.892904433098);
    msg.setSource(47276U);
    msg.setSourceEntity(135U);
    msg.setDestination(5808U);
    msg.setDestinationEntity(250U);
    msg.op = 66U;
    msg.entities.assign("TRECRPTERTYKVDPBZOWODGKBPGMFGLMWTIHPTNBLFAJLAKUNCWCXUPSZUXOQSEIMWLKZXNKDHQAGSQIVKTWKJCHDGVQEN");

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
    msg.setTimeStamp(0.749849650455);
    msg.setSource(23967U);
    msg.setSourceEntity(109U);
    msg.setDestination(26859U);
    msg.setDestinationEntity(125U);
    msg.op = 170U;
    msg.entities.assign("HTFIYPJQSJXDXNYOQLBRLPDYUBSWNGOFGJLHOWKGLTMXQNBWACHNLMTCFMPAZOFHUGKJNFZRXEIYSDPMFDJVIKJVYVKTLCZY");

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
    msg.setTimeStamp(0.736747681105);
    msg.setSource(28667U);
    msg.setSourceEntity(146U);
    msg.setDestination(45002U);
    msg.setDestinationEntity(198U);
    msg.op = 71U;
    msg.entities.assign("LIUSQSBYAIURWSPEPHSTZFJJMNLAKIYDQTGTVMMOWZGDWRFDWAVDCJQHGFEINNTAGSFQKODKVNRURHSQGEPCZZKTZXBOSHEYUNLMZHFPCMVMLDODASORYPIQXIFYUHLMXSAEPKZQYTFKJUMLQERVRHRJQUKVPBGNOJIDJSBFHMGWVRBAGWXLATWYNMYXWXKFCNCOFUZJOIWXAXNPCTOQZYETYBRCPLLVCXJVBBTXZUJIC");

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
    msg.setTimeStamp(0.0750029866589);
    msg.setSource(55233U);
    msg.setSourceEntity(12U);
    msg.setDestination(10212U);
    msg.setDestinationEntity(131U);
    msg.type = 18U;
    msg.speed = 52061U;
    const char tmp_msg_0[] = {71, 29, 64, 91, -21, 51, 86, 115, 122, 45, -72, -50, 31, -20, 118, 106, -12, 10, -4, 54, -49, 19, -57, 8, 109, 30, 15, 103, -71, 107, -128, 18, 78, -45, 8, -111, 99, -5, -73, -42, 6, -74, 98, -21, -26, 112, 116, -114, 35, -14, -25, 61, 43, 15, -74, -9, -27, 4, -27, -48, 1, -51, -125, 121, -3, -114, 105, -55, 54, 19, -44, 51, 72, 101, -86, -8, -35, 83, 73, 89, -91, 67, -119, 54, 83, -93, 110, -107, -94, 23, -19, -65, 88, -59, 78, -31, 124, -49, 56, 35, 95, 83, 22, -59, -87, 95, -115, -60, 48, -76, -65, 69, 44, 23, -23, -94, 90, 7, 102, -79, -13, 83, 43, -64, -104, -6, 6, -55, 111, 11, 1, 95, -72, -5, -119, -94, 87, 51, -35, -17, -91, -48, -120, -31, -43, -127, 60, -44, -44, -73, 77, 40, 116, -127, 86, -125, 67, -62, -92, -33, -4, 109, 89, -96, -48, -66, -114, 40, 65, 6, -55, -24, 9, 110, 102, -26, 98, -117, -51, -125, -66, 73, -40, 121, 68, -8, 45, -55, 52, 61, -128, -53, 7, -58, -112, -49, 68, 106, -28, 70, -41, 50, 94, 75, -27, 67, 82, -49, 117, -62, 48, -38, 76, 12, 1, -126, -114, -125, 90, 39, 27, 124};
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
    msg.setTimeStamp(0.177439205078);
    msg.setSource(24469U);
    msg.setSourceEntity(36U);
    msg.setDestination(6898U);
    msg.setDestinationEntity(55U);
    msg.type = 63U;
    msg.speed = 58153U;
    const char tmp_msg_0[] = {90, 34, 78, 80, 29, -53, 98, -116, -12, -50, -117, -57, 14, -4, 20, -57, 102, -31, 103, 102, 64, -60, 120, -87, 73, -128, -99, 8, -13, -68, -47, -10, -56, 83, 3, 93, -98, 111, -40, -39, -44, -17, 98, 115, -2, -44, 15, -19, -22, 88, 74, 63, 41, 38, -127, -91, 78, -60, 75, -16, 78, 112, 61, 50, 73, 56, 103, 4, -122, 120, -20, 84, -110, 21, 104, 89, -31, -39, -2, 3, 73, 19, 111, -20, -80, 75, 19, -37, -96, 24, 41, 2, 50, 37, 80, 119, 97, -76, -96, 22, 83, -61, 119, 34, -16, -69, -101, -1, -45, 53, 21, 4, -58, -109, 41, 41, -66, -5, 58, 34, 124, -32, 121, -2, 70, -27, -125, 72, 10, 12, 24, 39};
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
    msg.setTimeStamp(0.15513073544);
    msg.setSource(14769U);
    msg.setSourceEntity(28U);
    msg.setDestination(50535U);
    msg.setDestinationEntity(169U);
    msg.type = 73U;
    msg.speed = 57373U;
    const char tmp_msg_0[] = {0, 46, -2, 107, -60, -71, 118, 122, -111, -67, 52, -126, -82, -36, 55, -18, 39, -4, 8, -80, -15, 66, 114, -124, 53, 30, 91, -67, 10, 13, 15, 80, 27, 83, -22, 119, -14, -5, -10, -9, 91, -58, 44, -34, -48, 77, 29, -61, 84, -76, 92, 30, 71, 113, 79, -90, -48, 78, -78, -6, -78, 7, -79, -4, 32, 70, -40, 2, 5, 117, -78, 124, -65, -97, 73, -88, 18, -121, -112, 26, 100, -18, -26, 101, -80, 26, 120, 94, -55, -98, -11, -87, 2, -97, -23, -75, 9, -86, 71, -80, -47, 26, 68, -43, 98, -112, 54, 108, 118, -22, -40, -69, 66, -126, 37, 37, 73, -15, -78, 103, 56, 5, -123, 125, -57, 94, -82, -69, -65, -109, -48, -125, 74, 101, -94, -127, -109, -125, 74, -1, -91, -45, -28, -95, 38, 13, 96, -82, -123, 121, 111, -58, -87, -24, 5, -20, -18, 89, 23, 92, 25, -57, 107, -9, -126, 94, 44, -13, -49, -93, 125, 14, 67, 69, 95, -17, -66, -99, -47, -99, -61, 12, 14, 61, -72, 2, -104, -115, -54, -114, -10, 118, -105, 105, -55, 96, -17, -78, 14, 68, 7, -35, 22, -10, 71, -48, 64, 43, -9, -107, 14, 73, -13, 0, -81, 57, -30, 97, -82, 119, 26, -104, -89, -22, 8, -43, -15, 92, 59, -56, -99, 46, -106, -87, -1, -11, 113, -122, -117, 20, -97, -101, 118, 28};
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
    msg.setTimeStamp(0.660230657073);
    msg.setSource(14290U);
    msg.setSourceEntity(104U);
    msg.setDestination(4334U);
    msg.setDestinationEntity(250U);
    msg.op = 40U;
    msg.tas2acc_pgain = 0.444840523126;
    msg.bank2p_pgain = 0.542701125536;

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
    msg.setTimeStamp(0.906832559495);
    msg.setSource(11969U);
    msg.setSourceEntity(2U);
    msg.setDestination(43922U);
    msg.setDestinationEntity(136U);
    msg.op = 5U;
    msg.tas2acc_pgain = 0.706561697233;
    msg.bank2p_pgain = 0.971459369502;

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
    msg.setTimeStamp(0.436426453773);
    msg.setSource(19013U);
    msg.setSourceEntity(186U);
    msg.setDestination(30952U);
    msg.setDestinationEntity(152U);
    msg.op = 57U;
    msg.tas2acc_pgain = 0.639124402038;
    msg.bank2p_pgain = 0.166465393584;

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
    msg.setTimeStamp(0.97462753852);
    msg.setSource(53550U);
    msg.setSourceEntity(68U);
    msg.setDestination(61404U);
    msg.setDestinationEntity(87U);
    msg.available = 1404264087U;
    msg.value = 37U;

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
    msg.setTimeStamp(0.223747954446);
    msg.setSource(30894U);
    msg.setSourceEntity(129U);
    msg.setDestination(39332U);
    msg.setDestinationEntity(244U);
    msg.available = 1176705652U;
    msg.value = 251U;

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
    msg.setTimeStamp(0.459002954126);
    msg.setSource(27782U);
    msg.setSourceEntity(172U);
    msg.setDestination(6674U);
    msg.setDestinationEntity(73U);
    msg.available = 2503839791U;
    msg.value = 116U;

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
    msg.setTimeStamp(0.175427401908);
    msg.setSource(17669U);
    msg.setSourceEntity(184U);
    msg.setDestination(3431U);
    msg.setDestinationEntity(40U);
    msg.op = 227U;
    msg.snapshot.assign("GEJGZKIPFEQLLRHVRVTFZPGUEHMGADXTJPQWVOAWUXDZJMAPJKWMWDBPHMZTJ");
    IMC::DesiredVelocity tmp_msg_0;
    tmp_msg_0.u = 0.357884173048;
    tmp_msg_0.v = 0.839181496601;
    tmp_msg_0.w = 0.394326212801;
    tmp_msg_0.p = 0.618550616157;
    tmp_msg_0.q = 0.497706883799;
    tmp_msg_0.r = 0.264345702028;
    tmp_msg_0.flags = 130U;
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
    msg.setTimeStamp(0.958323254551);
    msg.setSource(40161U);
    msg.setSourceEntity(160U);
    msg.setDestination(51852U);
    msg.setDestinationEntity(39U);
    msg.op = 94U;
    msg.snapshot.assign("TYRDXSZTDNYLXNMPFHFPNKMIMWNFCQUJITYENMPFRREJBHYAWBVXGYUSCLDYLOCDVPCQDSSFQYLHBQYAIAGKMGOZWMCSANXZQOBEXOUUTXGQUXIHEPLYIADMZKOKASCPSUJWJPMLBUGUZIPKZAZHJETBVJOFFCTLPWDRPLCRKEAVVJ");
    IMC::AcousticLink tmp_msg_0;
    tmp_msg_0.peer.assign("JBYZTEODCZDAGYYVYUNVNFXSQIRHMXUVPIQLTRCKHCRWZJBIHIHPSEAFOMBLCRVIVWLZXOMUFAGAVFEWWLJNCGEVWMKFJKSBDHQPIDUJZYNKPK");
    tmp_msg_0.rssi = 0.735343698535;
    tmp_msg_0.integrity = 64810U;
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
    msg.setTimeStamp(0.879524501907);
    msg.setSource(32182U);
    msg.setSourceEntity(57U);
    msg.setDestination(28109U);
    msg.setDestinationEntity(113U);
    msg.op = 95U;
    msg.snapshot.assign("BNCNYXHPRJTYTKNLMIDAQXQTDTGVPIOVZFVJEWOJBBCMAFVDRVUCSKONTRJPKNCTOPQNAUGVIWANWFGLUHSYDPZIZOAGBBRRMBVHIUYNLLJAFATIHSTZSCBURDSKJJWOISZXORTKCYNLUGFMBGZYJICHSWHKUEXWATDYRXWBVZISOLFRMEKFPHPEZLYJEFKUGZWOPLXDYDGXQDFHAJEOAXKVMCKHCSXYQ");
    IMC::UsblFixExtended tmp_msg_0;
    tmp_msg_0.target.assign("DDNZVOYIKAECABXLJHGVVOHLQSESDTKZNNTOMEOSZQQJDJEJNFFYDFYEVOZYCMWZRJBRAYAMYBCFZYDEKCIHBTVPAMUGWJTNRRBICEMEZSQCIHWOOIQUDXWTSXFKUACNPXDSINXTIPGCQVFBFJUZLNRGMTOSURHKOJPJBLW");
    tmp_msg_0.lat = 0.917797286427;
    tmp_msg_0.lon = 0.112204187092;
    tmp_msg_0.z_units = 108U;
    tmp_msg_0.z = 0.992636662248;
    tmp_msg_0.accuracy = 0.992355474529;
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
    msg.setTimeStamp(0.824388206912);
    msg.setSource(62843U);
    msg.setSourceEntity(146U);
    msg.setDestination(6677U);
    msg.setDestinationEntity(27U);
    msg.op = 156U;
    msg.name.assign("QRIIXJMSBWXBPJAANDBGKHNOIESLAKRFZGPJIKUMUDIOABTCFOCRITTXZMWQOLCILDKQBFOSACPVVFHVUYUGXEPLXKSEQVEKJPPEJMIADNAELSSWBADVZBTGGROKIZOWQSUJRMXHULVWQGJDBYECULDQLZPMVINNHMNR");

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
    msg.setTimeStamp(0.879568945163);
    msg.setSource(50396U);
    msg.setSourceEntity(43U);
    msg.setDestination(27015U);
    msg.setDestinationEntity(182U);
    msg.op = 175U;
    msg.name.assign("HNFSKCMFXPKNFTLZEFFKUCWYYXMQZRRMOJZNVABOKAXSDVTCLPGKVJVMXXLDXFJEPLPNDKYWWTLYXFGCJWRRPZQESGDJJIBOCYDGHZXYGEYNKISTWIKHIOECIHHJAJEKWNDCEHBMTAUZ");

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
    msg.setTimeStamp(0.864775260378);
    msg.setSource(44519U);
    msg.setSourceEntity(117U);
    msg.setDestination(27356U);
    msg.setDestinationEntity(25U);
    msg.op = 26U;
    msg.name.assign("NRNFGVUEPIHISBZRLIZLEWMWHXDQBQLDWJUZJGHCEPRITXKTDGKJVNETYZWAOLUVNVTSTGOWOZBAJCMDZJXDDHUUWOOJEJGFESGTKNHRZBRXFIYLKFKCPWGPMLOMBSRE");

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
    msg.setTimeStamp(0.197768146686);
    msg.setSource(4992U);
    msg.setSourceEntity(243U);
    msg.setDestination(25542U);
    msg.setDestinationEntity(174U);
    msg.type = 61U;
    msg.htime = 0.83819994677;
    msg.context.assign("ORKIOCAGIANXONUUBLHMEGPXMORSWZFEJWQNZNLPJSIWNYOKIOJRPOKEUGYDXWTUBTUYCLMBBOUMZEQTBDOSPKASHZISGZHSZMHHUKACKWQVCE");
    msg.text.assign("GUEHFADMWUYSJDRRCBRGYBXLGHGTVOIXWZGDMWQDUMVBCYUNZHHLSTTPVOVNRJRARKHASAZKEITCKPAFBXPLUMTCHYMTPELSWDLEZLFONHIZDYUCCIXNZMEMOKAJCYZAQIIEEDYRRVBKQBJGOKVTNMXSCOXPWJWBNSPWIZLERLIOFPAJNUPFXZKIXSAQHYQIK");

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
    msg.setTimeStamp(0.76002680043);
    msg.setSource(41390U);
    msg.setSourceEntity(12U);
    msg.setDestination(45898U);
    msg.setDestinationEntity(42U);
    msg.type = 109U;
    msg.htime = 0.698316027183;
    msg.context.assign("XZNUBFKWLQRVGSPLYPPSHTEBAZYJLPQJTSZDOQMHFUGJZRNDTCEMEEYHXYICMIVACXFAEOITEMPKUQVSCJTBMDGSIYESXUTJTBNYGDJHFPAJHLGXWFAMHSAWWCNRASWICFWWBBOLHOGGULJDTDUNCUKHCZKICLUAEAVXBNVKTDRORQDXPZKEWIZIAXGZRKUHHRSZIPMTQUBGYVNFDQERKKXPWQOZNCDLVFMMYFYKGWNRSXYI");
    msg.text.assign("VOUIUJJGVGGEMUQDDJZQBDWBEMWLLAVFZGBVWCFTHXUVAYGCSAWMLKIMSWFJXDRRUTSDTTGYRYANRFJTZKSQVOWQLSQETOKTKGKQNCFCDRMDGZPPQQUHSNBPYEYZYMZWPHOXRR");

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
    msg.setTimeStamp(0.574147321617);
    msg.setSource(51390U);
    msg.setSourceEntity(63U);
    msg.setDestination(41139U);
    msg.setDestinationEntity(247U);
    msg.type = 74U;
    msg.htime = 0.824018427457;
    msg.context.assign("LOVZDJAURYASUHXVFZTCYBRJNFJVPDCIIDWEMQYVWWYBRKLWCTRXRFNM");
    msg.text.assign("BQZBUMBWANTCIXJGWDCLCINJZTKXSQIYOEKTSKUCG");

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
    msg.setTimeStamp(0.277475499413);
    msg.setSource(46444U);
    msg.setSourceEntity(154U);
    msg.setDestination(7024U);
    msg.setDestinationEntity(225U);
    msg.command = 4U;
    msg.htime = 0.624167690608;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 164U;
    tmp_msg_0.htime = 0.771254048458;
    tmp_msg_0.context.assign("ZSFZFKAUNSUZMJAKKVYCARPPQHICIXEBZNOBTCAOSDUGVBFRIQIHETYLATETKCOKGCHCPDQLRLRSENAYSXJ");
    tmp_msg_0.text.assign("BFWQUQGMRCOUMKGEWABPXLTDJUHNIMFKTTFTSQRNQYHESNISVLUHZWQMOGWZQEDGZYNXTVRUYKKHQDYWLXSBWJJVCOUOGPEJSVQVPRTIBBBPKVTFZNKBMZECFRIRYPGODOMCMFOMIIYDVLHUECLHPSGRXFEXYHEPSMTLWZAKVNBJSUFZZWYOVKJJXNW");
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
    msg.setTimeStamp(0.727734769296);
    msg.setSource(14382U);
    msg.setSourceEntity(254U);
    msg.setDestination(58675U);
    msg.setDestinationEntity(0U);
    msg.command = 248U;
    msg.htime = 0.400558214996;

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
    msg.setTimeStamp(0.345879116479);
    msg.setSource(38010U);
    msg.setSourceEntity(110U);
    msg.setDestination(19230U);
    msg.setDestinationEntity(92U);
    msg.command = 111U;
    msg.htime = 0.661905842132;

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
    msg.setTimeStamp(0.403531067962);
    msg.setSource(49539U);
    msg.setSourceEntity(23U);
    msg.setDestination(61753U);
    msg.setDestinationEntity(103U);
    msg.op = 38U;
    msg.file.assign("ZKVJJXLTIQIGNIXMKGRRRATKXELJXEMTMMHYEFEXLQHHCQFIASSEUKUPNDMKLLJMAFLKBZNSGDV");

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
    msg.setTimeStamp(0.216407958843);
    msg.setSource(65531U);
    msg.setSourceEntity(174U);
    msg.setDestination(8065U);
    msg.setDestinationEntity(59U);
    msg.op = 216U;
    msg.file.assign("PCSAPIIZHMZPRROLHUGDEVCVMEDVTVFFKJULOWUADHNTCJYZVSFXCKVONFNMRTRIDELDUXWPFOHJXJBCDHMMYIMLOZQQQBXGYSFFCCHIGQNIBWKTDDSKTTFLXETSUAYQOAAEWRK");

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
    msg.setTimeStamp(0.554621544588);
    msg.setSource(60007U);
    msg.setSourceEntity(68U);
    msg.setDestination(48885U);
    msg.setDestinationEntity(112U);
    msg.op = 5U;
    msg.file.assign("DCVXXJEJPLGHLEMATLDRGOBUVKVPNANAOMIRHUWICOMTNJXAEEAFICNVBKIYZOHLGVUTYNTGWKEOZQAVKNSQUVLBSECZEYKPUQBZBKHUMPXKJFEOQWMTFFDHSTKNKFOCLPCJTQXWUTMMCCSSRGAJGNQYWDSZGOWMXQZSUQIZRFTOHIDRDCYRTFRYFPEWQIPXIBHBSBLGE");

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
    msg.setTimeStamp(0.821622693545);
    msg.setSource(18233U);
    msg.setSourceEntity(128U);
    msg.setDestination(8508U);
    msg.setDestinationEntity(121U);
    msg.op = 58U;
    msg.clock = 0.353093896655;
    msg.tz = -40;

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
    msg.setTimeStamp(0.0133334726021);
    msg.setSource(28712U);
    msg.setSourceEntity(40U);
    msg.setDestination(39738U);
    msg.setDestinationEntity(173U);
    msg.op = 250U;
    msg.clock = 0.557411303226;
    msg.tz = -30;

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
    msg.setTimeStamp(0.0577929394147);
    msg.setSource(29374U);
    msg.setSourceEntity(192U);
    msg.setDestination(31682U);
    msg.setDestinationEntity(244U);
    msg.op = 195U;
    msg.clock = 0.271526895254;
    msg.tz = 44;

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
    msg.setTimeStamp(0.590724659507);
    msg.setSource(58690U);
    msg.setSourceEntity(159U);
    msg.setDestination(16144U);
    msg.setDestinationEntity(51U);
    msg.conductivity = 0.405879267066;
    msg.temperature = 0.112448781181;
    msg.depth = 0.612743720844;

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
    msg.setTimeStamp(0.283441259797);
    msg.setSource(385U);
    msg.setSourceEntity(158U);
    msg.setDestination(41852U);
    msg.setDestinationEntity(1U);
    msg.conductivity = 0.255776598056;
    msg.temperature = 0.533372740041;
    msg.depth = 0.805400410893;

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
    msg.setTimeStamp(0.449394018914);
    msg.setSource(23809U);
    msg.setSourceEntity(210U);
    msg.setDestination(3061U);
    msg.setDestinationEntity(39U);
    msg.conductivity = 0.946698165545;
    msg.temperature = 0.111685197792;
    msg.depth = 0.511167921301;

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
    msg.setTimeStamp(0.2442108066);
    msg.setSource(826U);
    msg.setSourceEntity(149U);
    msg.setDestination(59648U);
    msg.setDestinationEntity(2U);
    msg.altitude = 0.172970001136;
    msg.roll = 49682U;
    msg.pitch = 14313U;
    msg.yaw = 39676U;
    msg.speed = 27392;

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
    msg.setTimeStamp(0.603603753138);
    msg.setSource(34537U);
    msg.setSourceEntity(220U);
    msg.setDestination(63720U);
    msg.setDestinationEntity(104U);
    msg.altitude = 0.151314465877;
    msg.roll = 8667U;
    msg.pitch = 36424U;
    msg.yaw = 15227U;
    msg.speed = 585;

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
    msg.setTimeStamp(0.757032110527);
    msg.setSource(33688U);
    msg.setSourceEntity(110U);
    msg.setDestination(30301U);
    msg.setDestinationEntity(230U);
    msg.altitude = 0.0772547367222;
    msg.roll = 35490U;
    msg.pitch = 40260U;
    msg.yaw = 25640U;
    msg.speed = 16584;

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
    msg.setTimeStamp(0.306944682382);
    msg.setSource(42862U);
    msg.setSourceEntity(239U);
    msg.setDestination(42114U);
    msg.setDestinationEntity(26U);
    msg.altitude = 0.566420062137;
    msg.width = 0.518570324877;
    msg.length = 0.0326188566141;
    msg.bearing = 0.849113564911;
    msg.pxl = -26002;
    msg.encoding = 16U;
    const char tmp_msg_0[] = {31, 71, 21, -87, -26, 83, -72, 34, 116, -4, -71, -37, 2, 11, -9, 65, 34, 76, -120, -38, 12, 121, 69, -121, -19, -119, -3, 93, -43, -24, -9, -102, -33, 56, 126, 99, -34, 125, -36, -16, 43, 40, 0, 49, 78, -85, -31, -54, -39, -128, 22, 73, -66, -53, -67, -28, 40, -75, -85, -94, 126, 102, 32, 120, -125, 22, -90, -29, -42, -53, -110, -121, 111, 79, -88, 65, 126, 1, 89, -82, 90, -101, -58, -90, 126, 56, -94, -87, 44, -58, -54, -7, -5, -32, -32, -71, 30, -97, -47, 68, 47, -8, -28, 72, 109, -119, -45, 55, 78, -27, -17, 105, -75, -4, 86, -72, -89, 0, 55, -92, 1, 53, -102, -15, 11, 9, -52, 43, -40, 104, 10, 52, 91, 55, 52, -117, -89, -28, -110, -51, -100, -18, 90, -52, 75, 58, 81, -70, -107, 95, -47, 110, -2, 10, 120, 84, 76, 6, -112, 64, 126, 52, 73, -6, -103, 42, -9, 31, 23, -8, 37, -1, -113, 72, -90, -64, -6, -66, 111, 48, -120, -45, -37, 26, -32, -87, -29, -85, -119, 111, 18, 8, 14, -23, -7, -57, -54, 90, -71, -100, -73, -39, -17, 18, -114, 56, -73, 98, -76, -33, -71, -26, -37, -29, -8, 43, 64, 76, -27, 73, -17, -32, -21, 78, -39, 61, -101, 39, -93, -115, 39, 28, 98, -81, 77, -103, -120, 53, 88, -83, -43};
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
    msg.setTimeStamp(0.229659824848);
    msg.setSource(176U);
    msg.setSourceEntity(31U);
    msg.setDestination(58739U);
    msg.setDestinationEntity(183U);
    msg.altitude = 0.9147236181;
    msg.width = 0.542513642407;
    msg.length = 0.681590447358;
    msg.bearing = 0.14425500575;
    msg.pxl = -7237;
    msg.encoding = 162U;
    const char tmp_msg_0[] = {-7, -13, 123, 26, 87, 69, 13, -111, -73, -32, 30, 66, 57, -113, 44, 84, 56, -109, 45, 25, -120, 48, 48, -104, 92, -120, 43, 96, 95, -125, 107, -17, 109, -5, -10, 126, -87, -66, -28, -39, -100, 80, -60, 3, 12, -17, 103, -88, -98, -6, 11, -39, -26, 117, -92, -70, 4, 30, -77, 70, 79, -124, 72, -70, -10, 109, 83, 70, -55, -14, -100, -31, 34, 1, -50, 78, -102, -114, 69, 110, 121, -1, 50, 16, -84, 108, 58, -19, -120, 1, -36, -73, 33, 31, -96, 44, -114, -53, 35, 126, -33, -5, 52, -48, -70, 17, 16, 32, -121, -22, -86, 123, -67, -65, 98, 13, -118, -47, -120, -31, 41, -92, -65, 37, -25, -56, -45, -18, 70, -1, 6, -115, -83, -62, -77, 4, 60, -39, 115, -19, 117, -25, 125, -4, -105, 80, 34, 17, 40, 82, 4, 40, -37, 71, -17, -17, 73, 123, -44, -108, 72, 86, -49, 8, -85, -7, -99};
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
    msg.setTimeStamp(0.331030999467);
    msg.setSource(52245U);
    msg.setSourceEntity(215U);
    msg.setDestination(5006U);
    msg.setDestinationEntity(34U);
    msg.altitude = 0.625971362834;
    msg.width = 0.133667048086;
    msg.length = 0.914525767226;
    msg.bearing = 0.822537392947;
    msg.pxl = -11954;
    msg.encoding = 131U;
    const char tmp_msg_0[] = {3, -126, -52, -48, -7, 26, -114, 70, 17, -100, -18, -64, 106, -99, -73, -5, 81, 62, -49, 77, -47, -84, -29, -104, 34, -37, 45, 38, -89, -78, -10, 52, -105, -34, -28, -67, -41, 102};
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
    msg.setTimeStamp(0.852317165198);
    msg.setSource(48989U);
    msg.setSourceEntity(75U);
    msg.setDestination(5235U);
    msg.setDestinationEntity(3U);
    msg.text.assign("AUPEHDOEGFHQFJCIGWAJQSGYVXQYOPKHZXICYHDCELLTGUJUTAAYVLDNBARWWEIZQTTUZDIUJHMEAVQWNLLUXCZKWOZUTRNIJHZKNLXSPDVIMAURQPWYMKGXTWJXGQLNBAVCFBVSZCBOETERZVWQDAEOMHOZZVSHAJMKCSMJVWKKSPDRPBIRMFMYFHIQKVXCNDBSFJOXOKXWYPYFMI");
    msg.type = 63U;

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
    msg.setTimeStamp(0.312888820496);
    msg.setSource(31037U);
    msg.setSourceEntity(127U);
    msg.setDestination(8452U);
    msg.setDestinationEntity(48U);
    msg.text.assign("NJUHVODOGSNSFTEEAKVYAIGPWDBIQJRKXGKRPXKCQZSGPKIS");
    msg.type = 139U;

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
    msg.setTimeStamp(0.0563533300798);
    msg.setSource(7516U);
    msg.setSourceEntity(226U);
    msg.setDestination(19086U);
    msg.setDestinationEntity(77U);
    msg.text.assign("SAZEFIQJDRGKEYMWLSXNWJYEHRXVHUTNIQUPWVYNL");
    msg.type = 151U;

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
    msg.setTimeStamp(0.349793057323);
    msg.setSource(61733U);
    msg.setSourceEntity(168U);
    msg.setDestination(2428U);
    msg.setDestinationEntity(41U);
    msg.parameter = 148U;
    msg.numsamples = 149U;
    msg.lat = 0.756898347262;
    msg.lon = 0.622494475967;

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
    msg.setTimeStamp(0.778192958494);
    msg.setSource(60093U);
    msg.setSourceEntity(174U);
    msg.setDestination(48412U);
    msg.setDestinationEntity(187U);
    msg.parameter = 217U;
    msg.numsamples = 215U;
    msg.lat = 0.314853801828;
    msg.lon = 0.828177910242;

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
    msg.setTimeStamp(0.979002625114);
    msg.setSource(29566U);
    msg.setSourceEntity(33U);
    msg.setDestination(17726U);
    msg.setDestinationEntity(133U);
    msg.parameter = 111U;
    msg.numsamples = 19U;
    msg.lat = 0.194340948585;
    msg.lon = 0.393861229178;

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
    msg.setTimeStamp(0.525575129902);
    msg.setSource(14321U);
    msg.setSourceEntity(149U);
    msg.setDestination(58122U);
    msg.setDestinationEntity(28U);
    msg.depth = 40573U;
    msg.avg = 0.584789302138;

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
    msg.setTimeStamp(0.390703493944);
    msg.setSource(37639U);
    msg.setSourceEntity(19U);
    msg.setDestination(44003U);
    msg.setDestinationEntity(246U);
    msg.depth = 43191U;
    msg.avg = 0.528122955172;

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
    msg.setTimeStamp(0.0186338893698);
    msg.setSource(41481U);
    msg.setSourceEntity(31U);
    msg.setDestination(30309U);
    msg.setDestinationEntity(234U);
    msg.depth = 26120U;
    msg.avg = 0.450222201253;

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
    msg.setTimeStamp(0.36246276716);
    msg.setSource(46734U);
    msg.setSourceEntity(195U);
    msg.setDestination(44367U);
    msg.setDestinationEntity(155U);

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
    msg.setTimeStamp(0.467559856544);
    msg.setSource(55356U);
    msg.setSourceEntity(24U);
    msg.setDestination(56304U);
    msg.setDestinationEntity(62U);

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
    msg.setTimeStamp(0.105761935836);
    msg.setSource(23893U);
    msg.setSourceEntity(116U);
    msg.setDestination(41921U);
    msg.setDestinationEntity(149U);

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
    msg.setTimeStamp(0.110299283327);
    msg.setSource(58296U);
    msg.setSourceEntity(17U);
    msg.setDestination(5623U);
    msg.setDestinationEntity(69U);
    msg.sys_name.assign("HKNXLHSQIDVOLISPTXQELKBVEAQBRTMLBROOCQUNNTPUBOWYGJSQWCUYMXINJKWFIVUFHUKWLKORWFTZOATPIDMUSGDKDXTIPEWVIHJKQGAFDYVOBCEMFYBDBOMEHFGUEAYCXRHRXCSJGNBTRGTLZWO");
    msg.sys_type = 206U;
    msg.owner = 10810U;
    msg.lat = 0.165793429379;
    msg.lon = 0.33473778597;
    msg.height = 0.853308829164;
    msg.services.assign("QONEZNFIFDLIWSKLAQEISCQDSB");

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
    msg.setTimeStamp(0.285920034851);
    msg.setSource(39501U);
    msg.setSourceEntity(125U);
    msg.setDestination(25772U);
    msg.setDestinationEntity(226U);
    msg.sys_name.assign("YPZYZHKRBRXWSGNDN");
    msg.sys_type = 218U;
    msg.owner = 54515U;
    msg.lat = 0.0826851193232;
    msg.lon = 0.474964007012;
    msg.height = 0.708407879374;
    msg.services.assign("NKFSAGFUFQGKCJSQMSATFABENZUBQHVAKGGDGHAEVPWXAFXTLXRKIGJOQNYQDFIUBMXZMDRNPUJEOSYCWLCPNEVQIBLMBOXXLTILMMTEKYWLS");

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
    msg.setTimeStamp(0.276974879273);
    msg.setSource(32801U);
    msg.setSourceEntity(70U);
    msg.setDestination(45876U);
    msg.setDestinationEntity(201U);
    msg.sys_name.assign("TPAOZMMOTAWOLIDMJPWJDBUHSUDSUZRJPWFDTMDHBCAITBAFFOGUQRQVEAQTSWIIEUC");
    msg.sys_type = 194U;
    msg.owner = 1276U;
    msg.lat = 0.477060723147;
    msg.lon = 0.574838482495;
    msg.height = 0.386664189592;
    msg.services.assign("WSJIDLBAVEZGOMCITLSAKPPLTMHNREOYMQJPKALLVYYEMHCIYWPSATDGNXGCXCIUHETQEQTUPUUMVOYTPDZOQXFXKDHBTBKVUCLUFINTENBFRTXURULAXRNYSPGDGXSLYZEBJRKDVRJUIVFSQMPKCVGZIHNBPDMQFVZAWQEZHGIBDZEOFUGBWYASI");

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
    msg.setTimeStamp(0.89379724268);
    msg.setSource(36832U);
    msg.setSourceEntity(172U);
    msg.setDestination(28595U);
    msg.setDestinationEntity(227U);
    msg.service.assign("OZUTMYPQYOYMSKNBNXPEJPMEMZPNVJLFDUKJBXZWQBKLXERVHVNKZPHWHYYGMSDVDDCTWPMDJCAZGEIOBEEXRQZNFDZOCKVDXIXJFHCXQRYHYXGTIABNEBAAGFQUHTCELSITFHZSOEOVCULYOLLTLZVXDIBQPFPZNOEAWKARVSOSIKBIIGGTQKAGUHMCKWRRQSMFDFLJTCJMUF");
    msg.service_type = 77U;

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
    msg.setTimeStamp(0.598803106876);
    msg.setSource(19633U);
    msg.setSourceEntity(42U);
    msg.setDestination(28934U);
    msg.setDestinationEntity(177U);
    msg.service.assign("YFVKTIFIUHCPQKANVXOAZERWIBXCXVZKZUJLVZGVDGBVOBFQATTQFWFHLNJFHXLOYYNUYNTPIGABKAVXSLLJRROHLEYCCIHVXEMUBGLJ");
    msg.service_type = 88U;

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
    msg.setTimeStamp(0.716777218126);
    msg.setSource(16757U);
    msg.setSourceEntity(242U);
    msg.setDestination(60024U);
    msg.setDestinationEntity(33U);
    msg.service.assign("LRRMFXCJWCVRDTHIRDXKXDLKFOVVDFJSPPBCHPZXDJWQIEIOAYAQEBSULQJUELIKHAAQCSHQPBOAMXBUSHMLWMSHYUGTINEUYMZFECULQMAWKEIRYPHTNVEOCGJLJIOFCHWAWVBSPGUWZOBMGILONXXDHRFHNKZKPCRGJQGIIKRATVAYOPVZTDYZNMFKBUWZKFPEZTONMTWVFJMRGTJCGCNVNLOSSJLYDUYDXDQQSWEBGBZPNUFZ");
    msg.service_type = 11U;

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
    msg.setTimeStamp(0.95705115529);
    msg.setSource(55410U);
    msg.setSourceEntity(215U);
    msg.setDestination(51140U);
    msg.setDestinationEntity(41U);
    msg.value = 0.980429566633;

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
    msg.setTimeStamp(0.904043091938);
    msg.setSource(24230U);
    msg.setSourceEntity(120U);
    msg.setDestination(55148U);
    msg.setDestinationEntity(130U);
    msg.value = 0.913735812587;

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
    msg.setTimeStamp(0.495031005912);
    msg.setSource(19666U);
    msg.setSourceEntity(194U);
    msg.setDestination(47290U);
    msg.setDestinationEntity(80U);
    msg.value = 0.552412758353;

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
    msg.setTimeStamp(0.956362275468);
    msg.setSource(23401U);
    msg.setSourceEntity(181U);
    msg.setDestination(5994U);
    msg.setDestinationEntity(98U);
    msg.value = 0.206596527845;

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
    msg.setTimeStamp(0.128755240703);
    msg.setSource(37144U);
    msg.setSourceEntity(43U);
    msg.setDestination(44522U);
    msg.setDestinationEntity(234U);
    msg.value = 0.526969198503;

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
    msg.setTimeStamp(0.0108342917203);
    msg.setSource(23140U);
    msg.setSourceEntity(4U);
    msg.setDestination(53763U);
    msg.setDestinationEntity(140U);
    msg.value = 0.428120800285;

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
    msg.setTimeStamp(0.412632343264);
    msg.setSource(62309U);
    msg.setSourceEntity(179U);
    msg.setDestination(28401U);
    msg.setDestinationEntity(141U);
    msg.value = 0.539908046473;

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
    msg.setTimeStamp(0.126631732091);
    msg.setSource(14795U);
    msg.setSourceEntity(15U);
    msg.setDestination(6538U);
    msg.setDestinationEntity(162U);
    msg.value = 0.483694289836;

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
    msg.setTimeStamp(0.263174213115);
    msg.setSource(58258U);
    msg.setSourceEntity(114U);
    msg.setDestination(49812U);
    msg.setDestinationEntity(159U);
    msg.value = 0.650178376597;

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
    msg.setTimeStamp(0.991009121287);
    msg.setSource(36945U);
    msg.setSourceEntity(26U);
    msg.setDestination(58514U);
    msg.setDestinationEntity(251U);
    msg.number.assign("HKOPKJBURIBBHTHXNJJPQEDSDMSRRBVYLHNDQXOPLWITVVTULYTWJZBTNIEFEVCGSFEHSXOUXKHFZIQBFCHANJRPLQASQXUCRKPERNCCBSDDTZJNJODPULTVIKECQGCKZFKPDAAZYPGAJLWROYMIVRZWJMGBXPKFHGQDWQYIMACAHELMTMZSMLVGOGTQCKSAXI");
    msg.timeout = 10641U;
    msg.contents.assign("LNRLVVQONRRTWDMUPMWPINHLKQMQZKHDVGHWDGLOZZEYHDNXWZGSCCRHSPFVFNCFSLFCHUGKYBMCCZJPTNUZKLWXMIXUPYYNJMCBAFYYFBEJVRBJAZDAJJAXDISKWBEUOOXDIWFZNVEUPQQVXCAXHUKYYGNLHIKAOIAZCPOPFBV");

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
    msg.setTimeStamp(0.549063405625);
    msg.setSource(45465U);
    msg.setSourceEntity(198U);
    msg.setDestination(5378U);
    msg.setDestinationEntity(64U);
    msg.number.assign("QFIRAMMBLAZJFFYNMNRIBLIIVNFKNXOPZCKOJQEJYJEQSOATQALYYZRDHMLGYPJCGGUZWFUXKVHNGVUYMDLNGRFUCFERVRAEWAZPQCTUZJIDDEJBKDGZKPLK");
    msg.timeout = 22441U;
    msg.contents.assign("JPPGMKLYUCCVHXXFZDVUCKOLQUETFKXDCQVYGVWZTWVOVMHZRIKYF");

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
    msg.setTimeStamp(0.891760505216);
    msg.setSource(27160U);
    msg.setSourceEntity(93U);
    msg.setDestination(621U);
    msg.setDestinationEntity(200U);
    msg.number.assign("CKCOXMAIJFIKPFGRKKHUFXLGQEGPOIXHSLNEWTQTHEWSQYBDHJDJKAAKBVNOLMBKAZCGVTRFFLQGZAEYREISDFITUDZEBNJOYZXGNPPMHWVCWERPVKLRZDSPMAXUBOTWSVPSIFNOQVDQYBSLXURELCMIQJTYRUWQIQVDLHOYBFAEJQEKXLYLOHAJUGRMTXTMJIMDRYYICFBMZPMOAFGUCWNUOVDGSCHZVPZWSNZWNXNVJBPCNRAUCXDTG");
    msg.timeout = 54711U;
    msg.contents.assign("ZUDDQWIOTYQNIUWEUVKDGPGCVPBHXTIGWKVTSZBEERAEGHVJYTQUWBYRNVWIFHLILUYZONRMMMJNACYACSRUZMF");

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
    msg.setTimeStamp(0.111121769967);
    msg.setSource(62609U);
    msg.setSourceEntity(205U);
    msg.setDestination(60681U);
    msg.setDestinationEntity(15U);
    msg.seq = 1110266880U;
    msg.destination.assign("KIDVXMRLQOMDIXUVHZNVOKBCNARWQHRJYSEXPFRATFXCWAWTVIKLFJHUAWUZYCVCMDVBXNOALLLVGNPXNILQHVDTEFWHFSNYZVXUTDTOKHCSBZLKLTRYYHMKGOWIGZFDFWB");
    msg.timeout = 33802U;
    const char tmp_msg_0[] = {96, -94, 87, -64, 123, 28, -113, -81, -5, -60, -69, 86, -69, -40, 42};
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
    msg.setTimeStamp(0.747658719987);
    msg.setSource(60207U);
    msg.setSourceEntity(110U);
    msg.setDestination(21078U);
    msg.setDestinationEntity(17U);
    msg.seq = 3563753961U;
    msg.destination.assign("AAQFACYFMHIYGTJYPENNSHEWJBMSHPWMTCCLRZVEKEKIUSQFTCAKOMBFUGHREFNKINKCBDWVFEH");
    msg.timeout = 26566U;
    const char tmp_msg_0[] = {-1, -2, -65, -113, 82, 67, -46, 20, 77, -76, 75, 96, -33, 87, 51, -101, 89, 59, -28, -115, -125, 52, 68, -104, 24, -29, 85, 56, 78, -2, -90, -24, -13, 60, 83, -3, 74, -68, -18, 81, 87, -85, 13, -81, -53, -46, 59, 94, -28, 61, 1, 25, 39, 6, 77, -112, 63, 101, -7, -15, 12, -5, -52, 117, 30, -80, -97, 68, -128, -11, -27, 57, -50, -70, -84, -122, -108, -22, -126, -20, 14, -14, -125, 60, -108, 21, -47, 97, 69, 112, 78, 76, -74, -84, 38, -97, 53, 31, 114, -92, 15, 6, 11, -39, 59, 53, -125, 115, -32, 98, -66, -35, 82, -28, -82, -128, 112, -33, -46, -101, -67, -49, -118, -117, 44, 85, -105, -80, 1, -112, -2, -53, 14, -59, 25, 78, 96, 14, 47, -120, -54, 84, -64, 55, -53, -60, 81, 106, 36, 26, -81, 69, 15, 35, 75, -22, 41, 59, -71, 25, 16, -51, -27, -13, 61, 104, -14, -106, -99, 43, -111, -52, -117, 9, -125, 119, -38, 95, -23, -10, -41, 119, 118, 11, -69, 77, 121, 67, 114, 96, -102, 0, 126, -92, -37, -13, -114, -103, -87, -109, 60, -64, 42, -35, 7, 116, 14, -22, 81, 124, 113, 49, -55, 23, 120, 47, 55, -17, 62, 95, -116, -119, 111, 86, 61, 112, 112, -32, 81, 33, 36, 95, 100, -114, -80, 49, -69, -85, -38, 125, -14, -72, -125, 48, -20, -93, -57, -30, 122, 96, -128, -113, 52};
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
    msg.setTimeStamp(0.402265409926);
    msg.setSource(63463U);
    msg.setSourceEntity(139U);
    msg.setDestination(59772U);
    msg.setDestinationEntity(203U);
    msg.seq = 3538186779U;
    msg.destination.assign("CKGXUGLIVYSOAEALSSSLRFJNJBBHMPFVXOOSBBGQIIIZEFIKDLTQUXEUZLZVMFMYAONHKQQWZOVNJUCLWASQDXTNEIKTVVGCUPBYFPREIONRYHKVUCHAAOFXKSRRMWNTWADPDFLHOQYSIWGKNMWMLTCCTFLWEQJVYPLRDRDYJPGHEJGYAXOZZGTOAXSEJJYPBMBHEFXBDTMQTWZUMH");
    msg.timeout = 970U;
    const char tmp_msg_0[] = {61, 100, -90, 111, 63, 117, -15, -111, 77, 64, -81, -125, -113, -62, -77, -1, -61, -61, 2, 58, 113, 119, -67, 50, 15, -41, 26, -126, -109, 119, -49, 16, 31, -114, -110, -12, -119, 4, 88, -46, -86, -34, -27, -32, 16, -42, -78, -43, -56, 76, 34, -112, -16, 78, 113, -48, -87, -122, 0, 23, -25, -18, -93, -123, -35, -76, -1, 73, 45, 86, 117, -48, 16, -29, -7, -8, -3, -97, -14, -48, 44, 70, 68, -76, -23, 119, -72, 0, 9, 106, 80, 52, -47, -56, -39, -33, 88, 61, -68, -95, 98, 30, -83, 33, 29, 17, -37, 122, -116, 89, 74, -86, -71, -128, -75, 76, 56, -30, 2, -29, -40, 60, -11, -16, -83, -55, -41, -23, -120, 109, 63, 38, -22, 33, 75, 41, 19, -27, -92, -87, -121, -126, -50, -54, -115, 93, -57, 87, 93, 43, -2, 122, 17, -112, 15, 115, -101, -39, -11, 90, -9, -54, 72, -14, -45, -59, -43, -95, 36, -4, -94, -92, -120, 34, -122, -34, -92, 102, -118, 0, 85, -97, -120, -58, -56, -20, 56, 43, 67, -107, 85, 37, -60, -61, -107, 26, -124, -28, 91, -84, -59, -5, 99, -64, -5, 104, -14, -19, -112, 12, 99, -44, -33, -72, -95, -79, -95, 105, -53, 69, 25, -85, 58, -68, 107, -45};
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
    msg.setTimeStamp(0.972006587702);
    msg.setSource(29960U);
    msg.setSourceEntity(32U);
    msg.setDestination(26237U);
    msg.setDestinationEntity(233U);
    msg.source.assign("KPTYZBLOLULUNVPCMPFRLFTQNDJMPUKEGXJSPJVGSINHBTMDXESKQTNVSBGYESZWJDCIXHFTMEFIXYHQCAFBYJAUOPNYMNXCUMPNXOIYGLNKUAPDAODXDCZGCGNOWLCUNXXLKQRSPZLLRZZKOTHYTRUMRIJIRVDWQQZVOKHYBJEBGOKHHIVETFCAEBAWWBFJTVLIRHVBODWYAUZWVWZOMKYHGIFUCRCFDAH");
    const char tmp_msg_0[] = {-37, 125, 106, -103, 98, 117, 120, 82, -87, 85, -76, -86, -109, -117, -37, -46, -3, 2, 84, -116, -106, -107, -45, -47, 66, -96, 68, -79, 44, -94, 68, 26, -12, 103, 13, -86, 30, 98, -11, 111, 100, 89, 115, 27, -96, -42, -23, 107, 19, -123, -110, -112, 95, -95, -51, 40, -46, -124, -61, 58, 97, -120, 62, -8, -52, -8, 76, -12, -117, 118, 47, 95, -20, -83, 65, 52, -11, -49, -115, 72, 68, -14, -3, 4, -87, -6, 16, -102, -6, -20, 76, 54, 48, -84, 35, 47, 38, 110, 32, -5, -83, -113, -47, -11, -109, -109, 11, -9, -4, 46, 8, -82, -100, -51, -31, -75, -67, 31, -77, 7, -19, -70, 64, 61, -124, -100, -50, 9, -58, 62, -17, -64, -5, 63, -8, 84, -99, 91, 36, 124, 76, -67, -66, 124, -74, -63, 88, -47, -76, 58, 102, 82, -80, 46, 46, -33, -50, 20, 114, 115, 118, -69, -97, 39, -24, -96, -45, -40, 89, 13, 105, -125, 0, 123, 45, 83, -8, -126, -104, 123, -10, -69, -3, -81, 0, 84, 49, -109, 15, -49, 28, 121, 96, 80, -55, 61};
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
    msg.setTimeStamp(0.062352214232);
    msg.setSource(42325U);
    msg.setSourceEntity(111U);
    msg.setDestination(15590U);
    msg.setDestinationEntity(80U);
    msg.source.assign("TGHUUOCLVZDWNPNCGRIERMQZOQBHPTSCENTQCBOMGQNPTZIHUPSVVGCOKGTRWETVIACYJYLVJXIUMDUJTSVEINGDTQ");
    const char tmp_msg_0[] = {-91, -73, 10, -103, -22, 124, -54, 116, -28, -126, 60, -30, 62, -80, -107, 73, -32, -44};
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
    msg.setTimeStamp(0.0393471532428);
    msg.setSource(65339U);
    msg.setSourceEntity(180U);
    msg.setDestination(59075U);
    msg.setDestinationEntity(165U);
    msg.source.assign("DZUWYSQXLABHCDYKVUDHEZJJGEOABFGMTKLKWCHUXJVNNNUZJPOTQHCMVAKSO");
    const char tmp_msg_0[] = {-126, 29, -24, 41, 46, 99, -44, 7, -22, 37, 95, -46, -34, -71, -67, -40, 0, 121, -100, -28, 12, -91, 59, -10, -3, 9, 67, 6, -60, -122, 42, -118, 43, 123, -102, 119, -126, -128, 54, 69, 60, 3, 2, 67, -67, 50, 55, 40, 62, -49, 115, 98, 25, -127, -77, -62, 24, -22, -102, -110, -39, -44, -53, -123, -39, -74, 86, -2, -92, -92, 124, 80, 118, -39, 81, 126, -103, -10, 13, -21, 103, 89, -31, 0, 82, 17, -120, 102, -80, 7, 88, -119, -62, 66, -109, -110, 42};
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
    msg.setTimeStamp(0.475365070641);
    msg.setSource(25477U);
    msg.setSourceEntity(2U);
    msg.setDestination(16014U);
    msg.setDestinationEntity(108U);
    msg.seq = 557832882U;
    msg.state = 181U;
    msg.error.assign("AMECYJFTQUBGHYSLDJGZEENMINRLUEHXRJHCUPTUEOGTFFIKWXZGGVERKONTLVCZNLIJOKYFUXABYXYXACHMIRYLEZKNKAJKKNYDGKDHUIPSYCBOJIDVRWCQDPHTOQYLBIHYNQQVOWDWLPHALTELXZPBQJAWRUJMQZVMMB");

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
    msg.setTimeStamp(0.135502521253);
    msg.setSource(53726U);
    msg.setSourceEntity(108U);
    msg.setDestination(12054U);
    msg.setDestinationEntity(37U);
    msg.seq = 3837306681U;
    msg.state = 74U;
    msg.error.assign("XRBCKCUDPXCAKSBTZTOEJFNTQHGLHGSGBGVOKFZWQSXJ");

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
    msg.setTimeStamp(0.120236055198);
    msg.setSource(20242U);
    msg.setSourceEntity(207U);
    msg.setDestination(9956U);
    msg.setDestinationEntity(132U);
    msg.seq = 487022084U;
    msg.state = 174U;
    msg.error.assign("URRWITTBQIZIEHWRSOFTMFDQSVGPLRGVNSUNENZLBFEYVLZMVB");

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
    msg.setTimeStamp(0.353325351742);
    msg.setSource(26882U);
    msg.setSourceEntity(85U);
    msg.setDestination(47178U);
    msg.setDestinationEntity(64U);
    msg.origin.assign("SEMGSZOHCADNFATTSBVWRIOBHWZQQYVSBUPHXDDUPDTOMOKFKLSRBFCZYQFYAQBGEXEELN");
    msg.text.assign("OLCDQPCXTYICZIMBNVKCLORSWDUZWQEIKAVDWIVKNJEBSATOLIQSRTEKGGYAWGGSCXKYPCEFLUFZKFOBMQBXEV");

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
    msg.setTimeStamp(0.39017310892);
    msg.setSource(38156U);
    msg.setSourceEntity(88U);
    msg.setDestination(45069U);
    msg.setDestinationEntity(129U);
    msg.origin.assign("MZJVBDNUIXXXEDSPSQJKESNLOMGRHEIRBSRCNEXWQGOHFPPGPLV");
    msg.text.assign("QVYMOMWTQKUVDBWSQRRUCDQTIXUYYCSIXENGKMFOXVCWOQJZGGMLHJPFHUCLFNMZCTYPCYXZKSAEKJZMVLWVDTTWQPYGMDLBDPENHBQAVGZERHNBAXOLJJBKTEYWXRIIOXVLFQWJRALSFJSNAEANCHPULUXWOMCPWVUBCPQTROOFHOHUGDZIJARCDLEVSMOUZEFPYSGQSDFVHTKGZRYTK");

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
    msg.setTimeStamp(0.596034072109);
    msg.setSource(47808U);
    msg.setSourceEntity(46U);
    msg.setDestination(10836U);
    msg.setDestinationEntity(61U);
    msg.origin.assign("MZHOXIDVJCQEDKXLEOKWNAPEVQPEYUKSYJYILDCDHXZOUNRSOCBUTEDSBEDQOAFRCWSWMJYXZNGVLQKIRGBWAOSCPVTMIJTVLZREIU");
    msg.text.assign("MNSHVEJFHVOCPTHJIEGREECYTJAFWQHZJMSRWEZUXEQRKUCOROGQATXPWWXNBNSKLGVIKCRAULGXZDSQFHTTENPDFXPCFLLTSHSTYOGPIHYIZCSLDOKFJZJLMMPBIIQAEPATIWVNTGPAJIKOUWSMWOQKPOWXUNWDGMCUR");

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
    msg.setTimeStamp(0.815485017084);
    msg.setSource(35621U);
    msg.setSourceEntity(140U);
    msg.setDestination(36996U);
    msg.setDestinationEntity(180U);
    msg.origin.assign("AUOHCSYHVPEUPYFHRXOUAHRJPTBCLTCTGMOBPWWMDGZFHLAOGALQSLNUWATJVMBKGHIDMAFPUGWVMVVBBSZHBKPIQJEVJCVFNPOKZZWICLYBGDZKRGEEQSPLSJTIYMXZRNWMQL");
    msg.htime = 0.649051269702;
    msg.lat = 0.778762251751;
    msg.lon = 0.1796644199;
    const char tmp_msg_0[] = {32, -100, -53, 7, 87, -84, 80, 84, -8, -115};
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
    msg.setTimeStamp(0.974884153028);
    msg.setSource(14172U);
    msg.setSourceEntity(13U);
    msg.setDestination(5955U);
    msg.setDestinationEntity(131U);
    msg.origin.assign("ZMXVSNFIHYGPXCWKIZLBZCKEQSONLVXBJGQYJRCBCTCHGANBEUQNEJFSAWSOTVHTRUXLJSAIJAJHLMICPHSTVYZBKWUQZYOKCZPXWNLKT");
    msg.htime = 0.811037093446;
    msg.lat = 0.772471463683;
    msg.lon = 0.231752027845;
    const char tmp_msg_0[] = {38, -80, 63, 31, 68, 22, 57, -46, 33, -117, -126, -108, -110, 62, 47, -29, -59, -112, -15, 11, -60, -77, 96, 16, -96, -8, -79, -58, 107, 27, 90, -111, -87, -27, 42, 125, 108, -10, -100, -18, 116, -67, 84, -30, -26, -98, -94, 61, 79, 98, 116, 94, 61, -105, -72, 99, -31, -5, 103, -18, -89, 64, 112, -115, -125, 74, -68, -34, 78, -126, 25, -98, -5, 30, 61, -76, -41, 55, 12, 36, 6, -101, 9, 40, -77, 29, -15, -20, -113, 109, -100, -123, 54, -19, 27, -103, -95, 98, -93, 54, -107, -58, -62, 15, 56, 12, 111, -66, 83, -6, -101, 12, 13, 61, -119, 116, 32, 4, -25, -74, -23, 66, 96, 117, -30, 118, -97, -128, 7, -48, 7, 41, -70, -5, 93, 88, 6, -77, -84, -41, 20, 96, 25, -78, 78, 34, 13, -40, -32, 83, 8, 21, 96, 51, 120, 98, -19, -72, 123, -103, -120, -121, -24, -103, 9, -36, -73, -15, -55, 26, 68};
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
    msg.setTimeStamp(0.570736573747);
    msg.setSource(64929U);
    msg.setSourceEntity(127U);
    msg.setDestination(52108U);
    msg.setDestinationEntity(151U);
    msg.origin.assign("SAETFUAXPHEFWBVJNNUUASTVOSKKBJZSVCHRKUXPEFUZBDLRVXAQLDOJRPJCPCKKFZYWMVPHFXOV");
    msg.htime = 0.727960942904;
    msg.lat = 0.085829765711;
    msg.lon = 0.80880110041;
    const char tmp_msg_0[] = {116, 85, 3, -4, 106, 50, 85, 106, -47, -65, -78, -112, -98, -32, -124, -121, -94, 12, 18, -42, 103, -99, -119, 117, 123, -43, -68, 16, 68, -36, 6, 77, -101, 61, 24, -68, -108, 92, 49, -63, -23, 16, -128, 34, 102, -84, -18, -75, 13, 106, -60, 82, -70, -81, 10, 86, 65, 97, 1, 35, 74, -122, -102, 20, 5, 107, 76, -71, -57, -17, -5, 4, 78, -114, -2, -58, -111, -88, 78, 116, -87, 101, 66, -71, -99, 6, -36, 120, -59, 28, -63, 16, 87, 31, 66, 112, 70, -99, -22, 33, -91, -84, -26, 59, -48, -84, 115, -36, 100, 102, -2, 109, 120, -68, -122, 25, -86, -72, -64, -93, 36, -127, 77, 74, -31, 115, 26, -1, -53, -102, 35, 90, 89, 89, 122, 57, 42, -53, -55, -120, -41, 80, -47, -93, 113, -100, 117, 100, -10, 114, 63, 77, -92, 41, 67, -40, 62, 123, 77, -26, -79, -111, 1, -8, 46, -99, -98, -10, -66, -16, 42, 36, 18, -63, 66, -58, -12, 92, 22, -51, -9, 72, 85, 82, -128, 43, 28, 3, -26, 45, 74, 83, 111, 29, 100, 64, 65, -27, -33, -57, 81, -41, -87, -80, 109, 30, 5, 27, 54, 122, 83, 50, 7, -64, 77, 100, 1, -6, 105, 99, -108, -85, 49, -89, -68, 110, 35, -39, 101, 97, 54, 52, -116, -85, -36, -126, 29, -120, -54, -115, 79, 3, -79, 9, 93, -66, 35, 3, -85, 124};
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
    msg.setTimeStamp(0.94392023539);
    msg.setSource(12377U);
    msg.setSourceEntity(76U);
    msg.setDestination(51529U);
    msg.setDestinationEntity(217U);
    msg.req_id = 16875U;
    msg.ttl = 26767U;
    msg.destination.assign("KQGVSLKFFNZYNDFQCICQNEAXRDSGCEAADRBKOYLLZAWUWPXGNFEQCKMUDGDOOS");
    const char tmp_msg_0[] = {-92, -44, 16, 75, 73, 16, 18, 46, -92, 120, -97, 112, 82, -112, -60, -18, -27, -122, -69, 69, -116, -5, -30, -105, -77, 120, 89, -46, -17, 71, 2, 107, -91, -106, -125, -73, -112, 106, -42, -112, 30, 49, -79, 26, 42, -111, -80, -28, 31, 109, -83, 34, 95, 44, 46, 102, 89, 48, 50, -121, 15, -91, -90, -107, -103, 38, -16, -57, -80, -107, 0, 1, 119, -96, -125, -21, -30, -88, -91, -7, -47, -67, -46, -31, 126, 85, 4, -5, 103, 17, -47, 4, -5, 30, 111, 33, -53, 91, 92, 90, -45, 80, 52, 41, 64, 79, 75, -21, -38, 78, 52, -17, -69, 60, 18, 101, 29, 18, -88, 89, -112, -4, 59, 113, 20, -100, -80, 0, -37, 70, -33, 72, 45, -17, -44, 126, -121, 94, -37, -120, 105, 45, -101, 18, 7, -81, -1, -118, 102, -117, -57, -5, 12, -56, 64, -85, 64, -80, -81, -1, 3, -6, 21, -10, -46, 30, -14, 26, 46, -37, 117, -89, -88, 122, 20, 43, 26, -115, -59, 57, -108, 24, 17, -16, 105, -108, 14, 108, -46, 56, -87, -44, -67, 41, -28, -93, 38, 70, 117, 97, -48, 72, -42, 52, 86, 60, 2, -80, 53, 25, -96, -21, 48, 68, 79, -27, -47, 79, 20, -123, -117, 15, -55, 110, 3, 27, 103, 99, -17, -10, -99, 44, 99, -47};
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
    msg.setTimeStamp(0.231640877178);
    msg.setSource(45215U);
    msg.setSourceEntity(90U);
    msg.setDestination(54685U);
    msg.setDestinationEntity(7U);
    msg.req_id = 16005U;
    msg.ttl = 48481U;
    msg.destination.assign("ZNUGRLDODHFKYQRJGWOXRCGXNXYBUERQCTCXQYGSEAOQMKGKWWIPMNITDFRAJLPNPNFPFXXZAATEOBXADLCYLZIOHIEHDRCYODDNTYUVKAREGNPOKSPVMSFKEBYYHSUFUTISRATIUGZCBMKBVIUTCZVLHHZOGQIPNJWRASJOJSMAHNPZVBSGKEWTQPVMHLFWCMLBXVJCASQGITWBQXMKYQVUJBCVUDLPEDNZOZFLXHLFESDVFTJM");
    const char tmp_msg_0[] = {-44, 96, 86, 32, -31, -109, 87, -20, -5, 68, 35, -37, 72, -12, -83, -102, -49, -70, 66, 33, 30, 49, 50, -85, -60, -126, 28, -39, -115, -101, -15, -34, -49, 115, -7, -19, 126, -94, -77, -103, 104, -100, -116, -51, -2, 23, 42, 52, 108, -105, -21, -14, 123, 45, 35, 35, 75, -80, -122, 81, -100, -43, 62, 13, -106, 32, -13, 106, 109, 23, 39, 8, 117, -96, 20, -49, -4, -112, 116, 108, 95, -85, -44, -47, -63, -123, -91, -62, -96, 107, -82, 93, -6, 108, -127, -125, 38, -71, -2, 35, -43, -51, 69, -71, 48, 37, 52, 91, 48, 10, -101, 124, -34, 61, -86, 29, 112, 53, -84, 87, 75, 25, -34, -78, -122, 32, 93, -80, -112, 69, 67, -122, -103, -96, 114, -42, 37, -57, -60, -80, -92, 45, -74, -126, -87, 113, -120, 52, -83, 109, 103, 20, -12, 118, 103, -29, 26, -15, 123, -123, -104, -110, 61, -54, -96, -117, 0, -26, -117, 30, 81, -31, -53, 122, -125, -42, 113, -61, -106, 70, 48, 65, -114, -92, -7, 97, -70, -37, 86, -20, -9};
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
    msg.setTimeStamp(0.349125069783);
    msg.setSource(17951U);
    msg.setSourceEntity(254U);
    msg.setDestination(18416U);
    msg.setDestinationEntity(115U);
    msg.req_id = 59645U;
    msg.ttl = 10365U;
    msg.destination.assign("YQCJYHSUWCOYXRWYKWWLLMJDLSOHDHGUDZNIPEXLQPJHYGWKHAPGMGQBJLJQQFXDYUUBKYGRNNNPTIRDRGOHIFZHHWLQABMKVVUKPVMRZK");
    const char tmp_msg_0[] = {19, -2, 111, 0, 85, 9, 98, 50, 18, 120, -5, 2, -18, 119, -12, -47, -67, 39, 122, 49, 118, -39, 68, -5, -119, -84, 109, -58, -96};
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
    msg.setTimeStamp(0.627511168525);
    msg.setSource(8186U);
    msg.setSourceEntity(201U);
    msg.setDestination(21229U);
    msg.setDestinationEntity(113U);
    msg.req_id = 24627U;
    msg.status = 180U;
    msg.text.assign("TCEVNZIIRSCMVWGHPOTIRJOVTRKFWYMODKPXESDFPPMBVXSQBITDGGSUYFMMPNZDEFWCZSDMFLCZOIDQGBELGGELRHKESQJUXELBEAARKALQPYCRHYOBDRUHZMQLHIRJJPJMAFIQHZNOEPY");

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
    msg.setTimeStamp(0.986751984105);
    msg.setSource(13427U);
    msg.setSourceEntity(229U);
    msg.setDestination(38035U);
    msg.setDestinationEntity(27U);
    msg.req_id = 50435U;
    msg.status = 169U;
    msg.text.assign("VEPEKHTOOBZXWXNOAFTECALBJJDNCHPTQPDVRMRYUKLEJMYPYNHNFRRCFYFHHITKUTQGUVXYDVCVTDBESIMGVDVVCQJPILHYFQLFPSKZIAREBMLVGJNXODCMNMWBLQOTPCYRWFYIEWPYQQJFMZYANAGZGAHRTDUTVQMQGDXWJZCWBZWNIQUHODKLXOIGSUGAOLUBOEWSLDOIRLAHZECMZXKPJKZAIWJKERNMBAGKSUKXGUUCHX");

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
    msg.setTimeStamp(0.799958558786);
    msg.setSource(44528U);
    msg.setSourceEntity(95U);
    msg.setDestination(29933U);
    msg.setDestinationEntity(204U);
    msg.req_id = 31770U;
    msg.status = 71U;
    msg.text.assign("SZEEXCRHIUXESGGTCJFFHAMIUSNVVXCRQLOJQOBLBOJYDQWFAVTEOIUDIBWZDDMZAGNPXCDSPDAVPBCRNBLWGPWWKPZWGCJVDTCH");

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
    msg.setTimeStamp(0.705369539574);
    msg.setSource(34986U);
    msg.setSourceEntity(42U);
    msg.setDestination(64055U);
    msg.setDestinationEntity(187U);
    msg.group_name.assign("ZYXFQLNKYQSGLDZHIHCBI");
    msg.links = 4227511225U;

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
    msg.setTimeStamp(0.760208293802);
    msg.setSource(40182U);
    msg.setSourceEntity(226U);
    msg.setDestination(64410U);
    msg.setDestinationEntity(184U);
    msg.group_name.assign("YPSBYGSHSTSEKGAJVKNEMRZCXSQBHYWUOGHOWEHHBOOFQSSELIPQZCPITKFWMIYDAPUCGPCUDZUNTJQXOCGOUGJHLGGDXVNJGEVYDUHAEVYBLFEFCQUYRZXNVCMKNXJ");
    msg.links = 3148482135U;

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
    msg.setTimeStamp(0.870249779071);
    msg.setSource(21591U);
    msg.setSourceEntity(254U);
    msg.setDestination(29545U);
    msg.setDestinationEntity(214U);
    msg.group_name.assign("OXTBUAELRQACIHKJAJSOPDBMPSDYVVALLGUKZENYHIURDFPYBBUEVUJVSYZWYHRPMEPCHULQFNKMETQCBCPZMOOFNVQRWITXCTIHIRLNZXXFMHIGUYFYZBXYPMQEDWJCWWSLQEURFLVOKCFAOGNGAEEJZAMZRTXT");
    msg.links = 740977846U;

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
    msg.setTimeStamp(0.772302114699);
    msg.setSource(4590U);
    msg.setSourceEntity(46U);
    msg.setDestination(64780U);
    msg.setDestinationEntity(42U);
    msg.groupname.assign("CPSRJZTSUYXKOOKNSVCRBNKJNOOXNPMWCSQETGTPXAWYZDELDNAYWGIUSSQJNKXFUFMVOJZHBMRCUHLAIFTQEAWTHSBWVPYVMTLMUIHQICVWYOZJACGXTRJCYNFWKKEDAOITPCGZPINKQPVRKPXFJVNLUDVJBZLXYQDLVLGBXLAXBPMKLFMAEEGORPGDJUHUBYHYHQMIICFNQIWXDBUKUZBMQESMBEFWAIGEEVRZ");
    msg.action = 186U;
    msg.grouplist.assign("QNPYDJNYERSWQEVOMMYOKKIMTQFGYGJGRUNBYUXJMSIFOYJHLAEFZVGLOQSZJWHSDOKNBCGSABBHJOMUOHYQWDWLWIYXCPDPXWEQDTNFVKCCKVALEAXEGDZZRTEBKRRAERLTLLHUMRZXMOBUCNHFIQTTRXUIPVWWEUKKLJKAEYSPHZ");

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
    msg.setTimeStamp(0.347064162217);
    msg.setSource(36533U);
    msg.setSourceEntity(248U);
    msg.setDestination(49605U);
    msg.setDestinationEntity(102U);
    msg.groupname.assign("UGBBDPRUDNIULUOBKPDXOYFRFQEKLPTOIHURXTJYJAVVVZHIWGLGDSZGFZRBHKTAQCMPINOBYBCWUSVPYKMRNDILVHESUUDHPCTCZGPHCBWVNXMQUQAHEZOBKORDMRRWQXDXZWXEPGRJOJBLMSZKSMHLZAXYEVPJFNTQMYCANNTIFHTTWFOFYKNVIKTDTXGKQQJKRQDWJZEWZJGPIEAYIS");
    msg.action = 40U;
    msg.grouplist.assign("BNINWWJCEEIIDFLAFFJAJEFGWQXYVVWIQFEYUCJMTDFLONCPMKPOLHXJUXIZQAPZQIVLUNRTTAXRUBGPOWRDHNMKGLKMIHKXGZMEZK");

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
    msg.setTimeStamp(0.510123876036);
    msg.setSource(5112U);
    msg.setSourceEntity(4U);
    msg.setDestination(11116U);
    msg.setDestinationEntity(110U);
    msg.groupname.assign("ZUSKROXZMMDTAKPMOZNNWITQSOKXGLYZMJRLQIBVUSPXZYVPPOBIQSWPJUHEKJYPWIELFLAULECDXAQQJOBAFGIDFRTPCAEDWWTUSNVEHORTMYBQXGTHEMAFRID");
    msg.action = 29U;
    msg.grouplist.assign("XGKBOXVAPO");

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
    msg.setTimeStamp(0.105297290269);
    msg.setSource(26984U);
    msg.setSourceEntity(182U);
    msg.setDestination(51445U);
    msg.setDestinationEntity(45U);
    msg.value = 0.383964149463;
    msg.sys_src = 4455U;

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
    msg.setTimeStamp(0.764328044266);
    msg.setSource(43445U);
    msg.setSourceEntity(65U);
    msg.setDestination(37119U);
    msg.setDestinationEntity(250U);
    msg.value = 0.652611835123;
    msg.sys_src = 61941U;

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
    msg.setTimeStamp(0.478043273199);
    msg.setSource(8398U);
    msg.setSourceEntity(74U);
    msg.setDestination(40742U);
    msg.setDestinationEntity(79U);
    msg.value = 0.152262781031;
    msg.sys_src = 59776U;

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
    msg.setTimeStamp(0.71646871256);
    msg.setSource(46510U);
    msg.setSourceEntity(128U);
    msg.setDestination(6071U);
    msg.setDestinationEntity(183U);
    msg.value = 0.6733882539;
    msg.units = 95U;

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
    msg.setTimeStamp(0.68387910939);
    msg.setSource(48210U);
    msg.setSourceEntity(219U);
    msg.setDestination(3429U);
    msg.setDestinationEntity(81U);
    msg.value = 0.315248712776;
    msg.units = 210U;

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
    msg.setTimeStamp(0.068391087974);
    msg.setSource(62836U);
    msg.setSourceEntity(241U);
    msg.setDestination(14715U);
    msg.setDestinationEntity(61U);
    msg.value = 0.223663650669;
    msg.units = 201U;

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
    msg.setTimeStamp(0.671441983524);
    msg.setSource(25763U);
    msg.setSourceEntity(65U);
    msg.setDestination(39120U);
    msg.setDestinationEntity(175U);
    msg.base_lat = 0.954925079849;
    msg.base_lon = 0.627731654428;
    msg.base_time = 0.678209294381;
    IMC::RemoteCommand tmp_msg_0;
    tmp_msg_0.original_source = 14014U;
    tmp_msg_0.destination = 20526U;
    tmp_msg_0.timeout = 0.745396020073;
    IMC::Turbidity tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.792348818684;
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
    msg.setTimeStamp(0.451128559793);
    msg.setSource(13183U);
    msg.setSourceEntity(145U);
    msg.setDestination(25949U);
    msg.setDestinationEntity(41U);
    msg.base_lat = 0.396311785204;
    msg.base_lon = 0.666998480622;
    msg.base_time = 0.112163293492;

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
    msg.setTimeStamp(0.0912545782);
    msg.setSource(1929U);
    msg.setSourceEntity(203U);
    msg.setDestination(8515U);
    msg.setDestinationEntity(131U);
    msg.base_lat = 0.102121395509;
    msg.base_lon = 0.926821660427;
    msg.base_time = 0.483122838764;
    IMC::RemoteCommand tmp_msg_0;
    tmp_msg_0.original_source = 43222U;
    tmp_msg_0.destination = 57698U;
    tmp_msg_0.timeout = 0.118930663741;
    IMC::Formation tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.formation_name.assign("LNMFDBMHTAAYLOMXVZJIROKBOLGVSFSKPOVHXHQYICKBXCVPDJWQHZNEQDILGPEMDLNMHIBERXYXJEZKWKXNSPXRPMTTEYYNUZASQLJTHNVVWGRBILC");
    tmp_tmp_msg_0_0.type = 197U;
    tmp_tmp_msg_0_0.op = 80U;
    tmp_tmp_msg_0_0.group_name.assign("KQYMRTVYNIPZWVJQVFEEGKNJKUUTWSJAHLTUOCBVMOVVEXIPQKHJDEZHBIFBASUOCBLOJQFPOMPPMZIMUXXMQCHQSTIMVVSRZCFDEIHNJTHQDRRRJGUQELTZPDNBBQXEBCGDHYKWAVAONSAALYDROGFLTBEXYRPLXWISEGXWUKEGZMAXXCLYUVTOJSIIJDYTDNSCWWNCPTHNRLFYDCZO");
    tmp_tmp_msg_0_0.plan_id.assign("YSRHMSPVWAERVTGDBDOTIUKSYROZWGNBFFSECOIOHYSKLSWIFRMIWFPVOIAEGJRBAFTXHTGAHLNPSVQDIZLNILGJIFWBYVYECFLYUDM");
    tmp_tmp_msg_0_0.description.assign("RNRVVISCFJKYMFVPDYXXIFIAFKNRLAVSZMTFGSILOEXGYKPCSRAEVJOZHBEHPVYUAMZWMTQPDJGKOPMILMEGKNFXCCZLWUAOTPXPUDHTKLHMRUJQQPOUYSCLBPGWSVCYTBYUOIKRITMVSKTEGCOHWFWBBKBNDFQWAQBEXRGQUMZELTKXTAXWNRBDEJDZTCZSOGIZUYEJBAAMWLQLHQGJGONAYSPXWJIDNHHWVZQR");
    tmp_tmp_msg_0_0.reference_frame = 150U;
    IMC::VehicleFormationParticipant tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.vid = 54937U;
    tmp_tmp_tmp_msg_0_0_0.off_x = 0.295833600563;
    tmp_tmp_tmp_msg_0_0_0.off_y = 0.182607646897;
    tmp_tmp_tmp_msg_0_0_0.off_z = 0.719320900973;
    tmp_tmp_msg_0_0.participants.push_back(tmp_tmp_tmp_msg_0_0_0);
    tmp_tmp_msg_0_0.leader_bank_lim = 0.900342036809;
    tmp_tmp_msg_0_0.leader_speed_min = 0.729670832342;
    tmp_tmp_msg_0_0.leader_speed_max = 0.884237858416;
    tmp_tmp_msg_0_0.leader_alt_min = 0.108443203588;
    tmp_tmp_msg_0_0.leader_alt_max = 0.263461856668;
    tmp_tmp_msg_0_0.pos_sim_err_lim = 0.0323551612576;
    tmp_tmp_msg_0_0.pos_sim_err_wrn = 0.452944764516;
    tmp_tmp_msg_0_0.pos_sim_err_timeout = 64181U;
    tmp_tmp_msg_0_0.converg_max = 0.321560945029;
    tmp_tmp_msg_0_0.converg_timeout = 57482U;
    tmp_tmp_msg_0_0.comms_timeout = 59176U;
    tmp_tmp_msg_0_0.turb_lim = 0.798642152141;
    tmp_tmp_msg_0_0.custom.assign("WHJQFMQXCXLQKSTUZXIJVXLJDFNASEZAOEKJVWUZMUXLOPBYARTAGARDMIZTUDQILEKDBYZOQJUYRPMTPBCNOWJKIEYWAXZVMNBPCQJSWXNGFPSKMRTTYKBVGKTU");
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
    msg.setTimeStamp(0.728091425723);
    msg.setSource(35744U);
    msg.setSourceEntity(106U);
    msg.setDestination(60321U);
    msg.setDestinationEntity(173U);
    msg.base_lat = 0.353152697775;
    msg.base_lon = 0.439041732511;
    msg.base_time = 0.911824012339;
    const char tmp_msg_0[] = {53, -101, 65, 43, -115, 107, -34, -69, 94, -84, 119, 112, -32, 68, -21, -54, -27, 119, 23, -44, 58, 107, 107, 51, -32, -31, 11, 47, -83, -13};
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
    msg.setTimeStamp(0.256883883741);
    msg.setSource(34129U);
    msg.setSourceEntity(244U);
    msg.setDestination(854U);
    msg.setDestinationEntity(245U);
    msg.base_lat = 0.346703859085;
    msg.base_lon = 0.33856226954;
    msg.base_time = 0.292158098129;
    const char tmp_msg_0[] = {-120, -6, -88, 98, 117, -69, 29, -92, -111, 13, -83, 32, -6, 114, 23, -106, -32, -47, -105, 47, -23, -60, 92, -120, -74, -80, -97, -30, 65, -96, 123, 115, 78, -116, 98, 23, -123, -7, -16, 38, -69, 18, -74, 121, 75, 114, 12, 62, 93, -91, 123, 46, 7, 66, 126, -127, 63, -50, 79, -82, -126, -122, 51, -56, -93, -1, -38, -51, 20, 121, -5, -99, -79, -34, -4, 58, -73, 2, 77, -40, 96, -71, 45, 59, -46, -24, -75, -100, 41, -8, -128, -103, -22, -125, -75, -36, -122, 82, 75, -58, -75, -65, 27, 115, -51, 101, -127, -53, 17, 13, 8, -115, 72, 48, 85, -18, -9, 124, 27, -46, 95, 124, 36, 92, -110, 9, 92, 113, 17, 91, 97, 0, 42, 43, 53, 84, 52, 117, 71, -50, -113, -109, 99, -21, 80, -80, 108, -115, -120, 45, 34, 115, -50, -89, -80, 26, 17, 43, -12, 78, -48, 22, -115, 23, -79, 73, -25, -98, -111, 48, -30, 14, -23, 16, -88, 54, 8, -29, 65, 42, 70, 50, -14, 100, -13, -51, -89, -71, -50, 98, 47, 84, 112, -63, -107, 79, 75, 21, 75, -22, 105, 99, -86, 75, -125, -5, 75, 8, 48, -28, -89, 119, -121, -85, 36, -72, 96, -60, 26, -27, -53, 82, 10, -22, 116, 9, -103, -7, -121, -124, 56, -124, 80, 124};
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
    msg.setTimeStamp(0.413435680909);
    msg.setSource(53517U);
    msg.setSourceEntity(189U);
    msg.setDestination(47368U);
    msg.setDestinationEntity(254U);
    msg.base_lat = 0.558492980047;
    msg.base_lon = 0.560335721101;
    msg.base_time = 0.020910581659;
    const char tmp_msg_0[] = {92, -56, -8, -52, -1, -73, 12, 25, -108, 61, -96, -40, -32, -81, -26, -95, 68, -123, -107, -78, -93, 56, -13, -14, -5, 40, 103, -119, -34, 106, -120, -58, -25, 34, 16, -114, -60, -16, 111, 110, -62, -20, 59, 106, -24, 19, 85, -119, -88, 30, 37, -51, -60, -111, 122, -120, -76, -48, 94, -61, 114, -11, -67, -61, -78, -21, -86, 17, 109, 110, 84, 25, 4, 28, 19, -30, -74, -106, 103};
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
    msg.setTimeStamp(0.732814163909);
    msg.setSource(40522U);
    msg.setSourceEntity(120U);
    msg.setDestination(61948U);
    msg.setDestinationEntity(180U);
    msg.sys_id = 19685U;
    msg.priority = 70;
    msg.x = 23232;
    msg.y = -21949;
    msg.z = 23645;
    msg.t = 13349;
    IMC::EntityList tmp_msg_0;
    tmp_msg_0.op = 154U;
    tmp_msg_0.list.assign("UYKWSLCWFKRHGQVMGKLSTYAPCPNGMMEICOFXQAZZOAPLJLJNCPEHGMZAXONNKBVVGVPFCUGAWWKKHVDJOLEZWCXSHINBDRQPZNPDDBGFTEPWEFDXSCWHRVQZADRFTNC");
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
    msg.setTimeStamp(0.563719081201);
    msg.setSource(29862U);
    msg.setSourceEntity(60U);
    msg.setDestination(52611U);
    msg.setDestinationEntity(79U);
    msg.sys_id = 5273U;
    msg.priority = -107;
    msg.x = 25753;
    msg.y = 28075;
    msg.z = 28657;
    msg.t = -9628;
    IMC::EntityInfo tmp_msg_0;
    tmp_msg_0.id = 237U;
    tmp_msg_0.label.assign("OIGZMRLSAWKYUFPBRHSZEWBQYJUUXGWOILUITOFNXJVGAFBDINZKBSRIOEHVMNURXPRTNXXZIXCHHAXQFCKLNNOCJTCSADYWDQAVOMJDTQUACMCWJPCEEWJKLTSHMHGBDSLHOEWYZEMEZYPTUNNPVGQQO");
    tmp_msg_0.component.assign("NYEHXDZHJJOBULTKCHZNGOONHMRFWJLEGBVSIEUJXGFCKWDFWBRMGZXBPMUFVZTOWYMXOTTEZXWWSPMUHQNTCWEMFJVCOTQINGHLJBIJTVCZVPPPGRCCLHMYPMJCDPXEAEISR");
    tmp_msg_0.act_time = 2332U;
    tmp_msg_0.deact_time = 3560U;
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
    msg.setTimeStamp(0.111033016406);
    msg.setSource(40987U);
    msg.setSourceEntity(94U);
    msg.setDestination(13597U);
    msg.setDestinationEntity(144U);
    msg.sys_id = 13617U;
    msg.priority = -53;
    msg.x = 8144;
    msg.y = -24491;
    msg.z = -10075;
    msg.t = 21442;
    IMC::ArmingState tmp_msg_0;
    tmp_msg_0.state = 179U;
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
    msg.setTimeStamp(0.191437833403);
    msg.setSource(34740U);
    msg.setSourceEntity(28U);
    msg.setDestination(2667U);
    msg.setDestinationEntity(241U);
    msg.req_id = 62656U;
    msg.type = 210U;
    msg.max_size = 15066U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.0451371239537;
    tmp_msg_0.base_lon = 0.774850280488;
    tmp_msg_0.base_time = 0.279989876842;
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
    msg.setTimeStamp(0.778372214276);
    msg.setSource(16897U);
    msg.setSourceEntity(62U);
    msg.setDestination(308U);
    msg.setDestinationEntity(157U);
    msg.req_id = 3356U;
    msg.type = 72U;
    msg.max_size = 50352U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.404634462456;
    tmp_msg_0.base_lon = 0.988495606696;
    tmp_msg_0.base_time = 0.91908494477;
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
    msg.setTimeStamp(0.500209092526);
    msg.setSource(37537U);
    msg.setSourceEntity(205U);
    msg.setDestination(1245U);
    msg.setDestinationEntity(55U);
    msg.req_id = 19256U;
    msg.type = 99U;
    msg.max_size = 15084U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.360858806485;
    tmp_msg_0.base_lon = 0.83140109742;
    tmp_msg_0.base_time = 0.160284716031;
    IMC::HistoricSample tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.sys_id = 64821U;
    tmp_tmp_msg_0_0.priority = -46;
    tmp_tmp_msg_0_0.x = -732;
    tmp_tmp_msg_0_0.y = -2410;
    tmp_tmp_msg_0_0.z = -6630;
    tmp_tmp_msg_0_0.t = -28768;
    IMC::SetThrusterActuation tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.id = 25U;
    tmp_tmp_tmp_msg_0_0_0.value = 0.708569961522;
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
    msg.setTimeStamp(0.317973601261);
    msg.setSource(24467U);
    msg.setSourceEntity(6U);
    msg.setDestination(55979U);
    msg.setDestinationEntity(63U);
    msg.original_source = 36094U;
    msg.destination = 43589U;
    msg.timeout = 0.827050388138;
    IMC::SmsTx tmp_msg_0;
    tmp_msg_0.seq = 2598160041U;
    tmp_msg_0.destination.assign("USCZVKZVFBEQOWHUMXSYDDPICATZSHISRMVAKPEASCQWLIGUCKFTPICBXMTDSCORZBHTQZNNAGDWLIJWMIBRNOPZ");
    tmp_msg_0.timeout = 841U;
    const char tmp_tmp_msg_0_0[] = {-55, 75, -82, 46, -28, 92, -82, 116, 86, -80, 90, 6, -59, -27, 92, -115, -86, 123, -38, 37, 53, -4, -31, -108, 57, -56, -45, 67, 98, -113, -109, -66, 70, 108, -102, 81, -84, 85, 103, 78, -104, 121, 7, 8, 19, -97, -7, -84, -72, -109, -82, 69, 122, -17, -26, 106, 111};
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
    msg.setTimeStamp(0.598066576741);
    msg.setSource(52399U);
    msg.setSourceEntity(112U);
    msg.setDestination(22830U);
    msg.setDestinationEntity(252U);
    msg.original_source = 2904U;
    msg.destination = 48363U;
    msg.timeout = 0.194496624212;
    IMC::QueryEntityActivationState tmp_msg_0;
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
    msg.setTimeStamp(0.414728819039);
    msg.setSource(44936U);
    msg.setSourceEntity(221U);
    msg.setDestination(58710U);
    msg.setDestinationEntity(62U);
    msg.original_source = 59977U;
    msg.destination = 22176U;
    msg.timeout = 0.327093467789;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.659345142279;
    tmp_msg_0.lon = 0.209883337406;
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
    msg.setTimeStamp(0.279127529436);
    msg.setSource(27690U);
    msg.setSourceEntity(45U);
    msg.setDestination(48326U);
    msg.setDestinationEntity(69U);
    msg.type = 221U;
    msg.comm_interface = 19144U;
    msg.model = 62101U;
    msg.list.assign("VUGOXODLQUHKHUZDWGAISCLJVMXEZKWITSXQZYSEMGNGSFOCFOZPYRVXTJDJCNOJHGWHQEXKQVBVWOKSEBVZHRTRCOWFRNQXGXLFAIBDWTHIARMHQEUTXWLPAPWHAIFKU");

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
    msg.setTimeStamp(0.30969336415);
    msg.setSource(54992U);
    msg.setSourceEntity(89U);
    msg.setDestination(59835U);
    msg.setDestinationEntity(184U);
    msg.type = 119U;
    msg.comm_interface = 57205U;
    msg.model = 54818U;
    msg.list.assign("DKQWEASUFMGWUJLHQSCMXQWHVCCMHXYYKPYCOIZUQHSURZEIZGPSCETSPSDRKYUKCWNOXIXGUNHNFWTDWIUDAKGWLRORJOVFTPTODPJFIRZFQACVCTLQBUEQIDFQYERBFMOMN");

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
    msg.setTimeStamp(0.438181535823);
    msg.setSource(37742U);
    msg.setSourceEntity(147U);
    msg.setDestination(6346U);
    msg.setDestinationEntity(84U);
    msg.type = 113U;
    msg.comm_interface = 27900U;
    msg.model = 50632U;
    msg.list.assign("DXBANWKOCLDHVODASRKIQPZKYDYNWCEHPTEALCZGQMYNHPLOMDDZGCJIGIOWKCJPCRYJJMNMREUIOHPYQXMEKDMWRTIVEANFKFFSBPUBTTUFNPXUZCWZGKSGGJUBMSAFJNWIZGCLZSVYHLFRUDQVJLHFWWVXYVJITVCORBXTBQLPBASAX");

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
    msg.setTimeStamp(0.549695936146);
    msg.setSource(13077U);
    msg.setSourceEntity(167U);
    msg.setDestination(64504U);
    msg.setDestinationEntity(180U);
    msg.type = 37U;
    msg.req_id = 2244105146U;
    msg.ttl = 10413U;
    msg.code = 240U;
    msg.destination.assign("YSXTNOBZLIEJCAVRUNIWVPUMXUGQHHEBFJSUZBICAAEFJJSHFVOVENG");
    msg.source.assign("RUXBWTIQRXQKPZVZIFDZSYLUGDSMLOEKLJZDPRFURMWONIHYJHKOKOWPLDEHYSGDWFBBYMEI");
    msg.acknowledge = 72U;
    msg.status = 2U;
    const char tmp_msg_0[] = {123, 102, -60, 106, -80, 115, 45, 101, -98, -106, 90, 3, -24, 29, -45, 19, 103, -54, -22, -85, 89, -8, 56, 33, -43, -43, -127, -83, -22, 122, 115, 59, 13, -84, 108, -101, -54, -23, 34, -5, -40, 16, -78, 64, -74, -75, 10, 104, 96, 43, -88, 28, 49, 67, 118, -81, 74, 57, 74, -53, 17, -55, -52, 16, 0, 97, 123, -24, 88, -28, -7, 60, 10, -83, -106, 109, -55, -3, 90, 120, 3, 97, 46, -61, 98, -3, -6, -95, 90, 106, 75, 14, 94, -100, -56, -106, -97, 117, -33, 60, -8, -3, 78, 41, 101, -88, -36, -42, -53, -104, 45, 30, -105, -76, 35, -61, 122, -83, -86, 50, -86, 4, -44, 42, 67, 115, 31, 14, 111, 87, -67, -55, -77, 81, -26, -3, -88, -90, 115, -104, -10, 89, -126, -56, -76, -17, 42, -32, 46, 82, 101, 31, 89, -42, -84, 49, -45, -128, 73, 90, -128, 3, 6, -52, -51, 88, 106, -2, -127, -126, -53, 102, -79, -76, -91, 65, -124, -37, 16, -23, 13, -69, -67, 77, -47, -57, -49, 13, -81, -74, -6, -109, 106, -119, -100, -72, 125, -91, 51, -15, 107, 51, -115, -4, 88, 31, 35, -91, 48, 46, 23, 69, 93, -31, -30, -118, 63, -123, -34, -62, -109, -38, 18, 95, -42, -71, 123, 0, -110, -33, -23, 4, 1, -47, 64, 100, 67, 47, 29, -62, -115, -91, -3, 80, -55, -116, -32, -36, -19, 29, -103, -117, 80};
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
    msg.setTimeStamp(0.393951899271);
    msg.setSource(35280U);
    msg.setSourceEntity(173U);
    msg.setDestination(30603U);
    msg.setDestinationEntity(45U);
    msg.type = 121U;
    msg.req_id = 3147846810U;
    msg.ttl = 45249U;
    msg.code = 237U;
    msg.destination.assign("KZSRTLZXYJSFMAABLAVAQHCHBQBTUCXNFXLBOUDRGYYLIJUBTXCZFJGQNZSLGHEOAJEGEEOJGPNYPDVORBUYEZFOKINELRVBAJHUPYRMTUILWPIKNKJFYWRNKLWVJGRMDNHWEDIMJNOCTZK");
    msg.source.assign("TXCAKASCQTJEDOSEMJHVQMPJDHERTVVPLVLYAIHQQMSYRAUVYZNKCKEPNDYTKMPGXWRGFFTRSWUIYCXYPOGMBNAVWOKLKPQOANBUGTZOJJIQGIIXLKRBPFDHVPHNFIGNMWIKYMHRWJCBHQKTOGBRXTYJFZUDWCZJSIDWCHXBLZXDLSRWZYMBPRX");
    msg.acknowledge = 226U;
    msg.status = 53U;
    const char tmp_msg_0[] = {36, -88, -58, 34, 46, -27, -65, 81, 67, -33, 43, 121, -24, -34, 18, -21, -12, 9, -127, 117, 22, -15, 99, -17, 31, -79, -63, 90, 87, -71, -41, -72, -47, -95, -21, 34, 115, -82, -35, 20, -93, 81, -110, 26, 90, -13, 74, -84, 116, -38, -97, -65, -126, 60, -83, -74, -97, -14, 90, -25, -109, 65, 70, 3, -31, -70, -74, -61, -2, 90, -23, -99, 76, 58, 36, 43, 50, 118, 91, -100, 73, -41, -123, -113, -93, -121, -124, 13, 103, -80, 31, 80, -128, 84, -73, 75, -61, 10, -60, 43, 76, -54, 42, 30, 13, -103, -115, 38, -36, 93, -110, 116, 72, -26, 13, 12, 33, 107, -47, -12, 46, -40, -103, -66, -106, -24, 116, 69, 93, -17, 51, 111, -84, -112, 69};
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
    msg.setTimeStamp(0.921491714482);
    msg.setSource(621U);
    msg.setSourceEntity(162U);
    msg.setDestination(5666U);
    msg.setDestinationEntity(39U);
    msg.type = 67U;
    msg.req_id = 1455898381U;
    msg.ttl = 44747U;
    msg.code = 159U;
    msg.destination.assign("NSPRPHKMXAIMYJ");
    msg.source.assign("MSBQIEJGSEWORXAMLAZYSCWLPODAFZSMZFLCHOITUNGVTUDRQEUHLDHWJARNMLBBOCRKPOXVSFWDBYVLCLNPQUWUFQJUVYXVAG");
    msg.acknowledge = 13U;
    msg.status = 86U;
    const char tmp_msg_0[] = {-73, -15, -125, 82, -60, 115, -62, 54, 10, -38, 4, 70, -62, -9, 108, 21, -112, -59, -14, -53, 104, 77};
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
    msg.setTimeStamp(0.425523966853);
    msg.setSource(5744U);
    msg.setSourceEntity(193U);
    msg.setDestination(33355U);
    msg.setDestinationEntity(20U);
    msg.id = 184U;
    msg.range = 0.0937066472355;

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
    msg.setTimeStamp(0.621114833678);
    msg.setSource(5323U);
    msg.setSourceEntity(58U);
    msg.setDestination(43951U);
    msg.setDestinationEntity(47U);
    msg.id = 254U;
    msg.range = 0.761768970302;

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
    msg.setTimeStamp(0.589788285559);
    msg.setSource(32310U);
    msg.setSourceEntity(124U);
    msg.setDestination(38672U);
    msg.setDestinationEntity(236U);
    msg.id = 10U;
    msg.range = 0.607393002227;

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
    msg.setTimeStamp(0.322358408243);
    msg.setSource(62852U);
    msg.setSourceEntity(99U);
    msg.setDestination(45809U);
    msg.setDestinationEntity(76U);
    msg.beacon.assign("GEIBMAVJEAZPOBCZCKEOQEDGZVUHVTB");
    msg.lat = 0.804006707518;
    msg.lon = 0.259462274561;
    msg.depth = 0.754880710591;
    msg.query_channel = 166U;
    msg.reply_channel = 170U;
    msg.transponder_delay = 95U;

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
    msg.setTimeStamp(0.153637203196);
    msg.setSource(45814U);
    msg.setSourceEntity(75U);
    msg.setDestination(49964U);
    msg.setDestinationEntity(32U);
    msg.beacon.assign("LTTYVWUHDBWFLZYNOXPSVQOSBUSLWINEUUUYXPPPGWICKBTQZFAKKHYEFKZFACYFMEYUZKWV");
    msg.lat = 0.880590781305;
    msg.lon = 0.667712217768;
    msg.depth = 0.204205154605;
    msg.query_channel = 97U;
    msg.reply_channel = 216U;
    msg.transponder_delay = 64U;

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
    msg.setTimeStamp(0.477015972153);
    msg.setSource(9132U);
    msg.setSourceEntity(181U);
    msg.setDestination(60822U);
    msg.setDestinationEntity(197U);
    msg.beacon.assign("RJIMYOCDKLESUVBLEANYEXKHVIIWQKJXRYZJXCZFGQFPGAILAOFTDNCOAQCRXAAQKDQFTGNLPDGSDOSHMBXQRVQZULOTFENMGUJZJBUBHHUMBLPATIPBAJSRVCZHTDXSUTCHYVHODNCHHWIW");
    msg.lat = 0.329690593443;
    msg.lon = 0.188669241203;
    msg.depth = 0.394358851359;
    msg.query_channel = 236U;
    msg.reply_channel = 178U;
    msg.transponder_delay = 246U;

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
    msg.setTimeStamp(0.0437091322481);
    msg.setSource(32682U);
    msg.setSourceEntity(250U);
    msg.setDestination(63591U);
    msg.setDestinationEntity(217U);
    msg.op = 209U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("NFSRXGIVURYLOCIDGBFQQLISYXLUQXBZNLHVKMCSADAHOGBAFJSVZCZLFKYKFSHIQSLCAVUNOWNQFHEMIQNGMMJHBMYVPDRKODDCKCXWUCWNXSHDKWAACYUECXIXSYPHTLYVKQAMZNWYULHWTZEDVEZTWBJTWRBOMARFPATGJGWXEXGFQXOEJJHUBBGJJPBFNMMESRWQOOEVRUROAKRPPZTIPLSTKUNDEYVIIHVPFBIGZZO");
    tmp_msg_0.lat = 0.286949155255;
    tmp_msg_0.lon = 0.634838052777;
    tmp_msg_0.depth = 0.711482044007;
    tmp_msg_0.query_channel = 177U;
    tmp_msg_0.reply_channel = 0U;
    tmp_msg_0.transponder_delay = 179U;
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
    msg.setTimeStamp(0.222936417999);
    msg.setSource(16525U);
    msg.setSourceEntity(15U);
    msg.setDestination(14678U);
    msg.setDestinationEntity(209U);
    msg.op = 73U;

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
    msg.setTimeStamp(0.233707248972);
    msg.setSource(10830U);
    msg.setSourceEntity(131U);
    msg.setDestination(61132U);
    msg.setDestinationEntity(193U);
    msg.op = 67U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("WMLRKZKFDDLWCPAFQASZCHDXJEAJSJIGYEAMIPQKVORACLOUEPFBFSCGIRDCLVXBQSUGEMOFIXIMJXYYAHTKCWYUQKHAZRRZSTGDCTGUJXWTVWYQLAAVRLLYQEUPPYYBUMDKVVVIFBSBKJPEQDDXJVNPMNFENGMRFNRQNSEQUHHXOTUNFHZMTMKSJ");
    tmp_msg_0.lat = 0.560959185737;
    tmp_msg_0.lon = 0.449737109449;
    tmp_msg_0.depth = 0.230091044372;
    tmp_msg_0.query_channel = 137U;
    tmp_msg_0.reply_channel = 132U;
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
    msg.setTimeStamp(0.668325365003);
    msg.setSource(49395U);
    msg.setSourceEntity(115U);
    msg.setDestination(32951U);
    msg.setDestinationEntity(119U);
    IMC::TextMessage tmp_msg_0;
    tmp_msg_0.origin.assign("XXGHCXJJHQENOYOBCDLBMMPTFNMNMNNWMCFLMDGEBQLKXQVRQTOPHQTLVVVTMSZIIIJWYVYDLKUTXSSMFYEJTLKJYUFABBIRSPBPWGEEJUECREEXSRZOQZUVPMRXVIWJCAGIQABTKQGZKGWXHLUZCO");
    tmp_msg_0.text.assign("AXARRNHCISHWAFJQXULDJXQWWDNHZDFGKLWNNSSFPPGKSOPGEF");
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
    msg.setTimeStamp(0.425577802847);
    msg.setSource(8385U);
    msg.setSourceEntity(34U);
    msg.setDestination(34242U);
    msg.setDestinationEntity(36U);
    IMC::GroundVelocity tmp_msg_0;
    tmp_msg_0.validity = 211U;
    tmp_msg_0.x = 0.614575634925;
    tmp_msg_0.y = 0.332854018113;
    tmp_msg_0.z = 0.293430988033;
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
    msg.setTimeStamp(0.845742653739);
    msg.setSource(65029U);
    msg.setSourceEntity(100U);
    msg.setDestination(61248U);
    msg.setDestinationEntity(238U);
    IMC::Temperature tmp_msg_0;
    tmp_msg_0.value = 0.82321512375;
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
    msg.setTimeStamp(0.248173958574);
    msg.setSource(14338U);
    msg.setSourceEntity(102U);
    msg.setDestination(58748U);
    msg.setDestinationEntity(143U);
    msg.op = 145U;
    msg.system.assign("QEIDBTNMBGOLCQBWFBAKDOAHPXSTMTPAHTHSFRUJELMHMBRWZJMXCQWSDTCSWCUPRFTVEYMUSEANTGQLJMDHXZRJELGUD");
    msg.range = 0.251642674913;
    IMC::ParametersXml tmp_msg_0;
    tmp_msg_0.locale.assign("JPBZDRGDVEYRPVOAGSTKHGRPLMWZCXJPSEXDBJYFQIHOVJMUOUMLQGUZNHADBBSFFXZMGVWVUQZNVZUZUBVSSGLODDKRAJMFRCUBYWSSQALEOTIMLUITBKXYTQFQEDMRNHRPUDQSMXAIGIYOLYQAGSECJCWQIEYCJXFKKNLKPNWFRONDZBGVMHWELCIACIXVGOEBKBFTHTHLORT");
    const char tmp_tmp_msg_0_0[] = {43, -117, -84, 78, 39, -73, -39, -86, 71, -60, 116, -104, -120, -38, 89, -25, -70, -49, -71, 91, -121, 93, 76, 33, 70, -33, 46, -24, 60, -46, 110, 120, 56, 5, 18, 22, -12, 115, 58, -80, 124, 10, -84, 96, -96, 104, 44, 73, -122, 40, -19, 86, -33, -81, 31, -76, -100, -26, 41, 8, -16, -22, -30, -119, -35, 62, 122, 98, 45, -58, 75, 120, 45, -1, 59, 38, -102, 48, -27, -70};
    tmp_msg_0.config.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.466368966191);
    msg.setSource(8907U);
    msg.setSourceEntity(222U);
    msg.setDestination(34453U);
    msg.setDestinationEntity(40U);
    msg.op = 230U;
    msg.system.assign("ZUFVBUPJCGQMZMLLUTRYZIOZBQAJCPABNAYNBDNGDKTQHKVDWNBEIOTXRXRGKNWXFMLFXWUUUNJJQDONHRECSOIGADTSRMSXHYAJTGCJQEYFRHSBWHTWRLTJQIYXBALEBPMEUCSXTWIFIFSRVDFNKHHLKZELROQIHZJXPQZKMUOPIMMM");
    msg.range = 0.760307478966;
    IMC::ClockControl tmp_msg_0;
    tmp_msg_0.op = 50U;
    tmp_msg_0.clock = 0.249164564107;
    tmp_msg_0.tz = 118;
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
    msg.setTimeStamp(0.203824661306);
    msg.setSource(10722U);
    msg.setSourceEntity(39U);
    msg.setDestination(5326U);
    msg.setDestinationEntity(14U);
    msg.op = 31U;
    msg.system.assign("VVVWHJQLRGYKNFJGHOSRSTWFMDNBTOUUJKJULEGGWJVJTJFKTMXWYUADCIZLNDOUBCPCTURGBLPJSFKTVKMFNP");
    msg.range = 0.933948341233;
    IMC::VehicleState tmp_msg_0;
    tmp_msg_0.op_mode = 30U;
    tmp_msg_0.error_count = 54U;
    tmp_msg_0.error_ents.assign("DPLVWHBZPLTMOLQQHPEKWEQZYDBCXIRPFHCQIQOUDKJITLNUGBGCDTU");
    tmp_msg_0.maneuver_type = 5603U;
    tmp_msg_0.maneuver_stime = 0.147963355471;
    tmp_msg_0.maneuver_eta = 61312U;
    tmp_msg_0.control_loops = 3268335748U;
    tmp_msg_0.flags = 207U;
    tmp_msg_0.last_error.assign("WGOQYTDOBZHAODUBOFMNJDFCPKGSUICKPSFYTYHDYMZUESCFJATUTYXRCJNJIAWEEWLVMLHIFLQWRPZJCUNNYQJHLOZAVKGRXWVMVQOWUKSXNWJEWRNGHBXHXWNSYDZMVH");
    tmp_msg_0.last_error_time = 0.553426882164;
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
    msg.setTimeStamp(0.89444336089);
    msg.setSource(19034U);
    msg.setSourceEntity(78U);
    msg.setDestination(39939U);
    msg.setDestinationEntity(48U);

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
    msg.setTimeStamp(0.0661425423009);
    msg.setSource(9220U);
    msg.setSourceEntity(239U);
    msg.setDestination(8496U);
    msg.setDestinationEntity(70U);

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
    msg.setTimeStamp(0.478711718236);
    msg.setSource(30643U);
    msg.setSourceEntity(203U);
    msg.setDestination(14339U);
    msg.setDestinationEntity(71U);

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
    msg.setTimeStamp(0.511981084697);
    msg.setSource(52125U);
    msg.setSourceEntity(15U);
    msg.setDestination(26203U);
    msg.setDestinationEntity(11U);
    msg.list.assign("KZNCFWZLHYDRGTUVGRPCNCRHHBYACJDOMAINTGRXJIMIYDVGQPBEYUHAQNVMPOMIEQRWJYARQVYFLDNWLQOEDHRCJOVUIESZFVXQTBZEQOBSDOVSUELWPKLWXWBNIMKUNABYMCOXLPIVSIPSCPJSKSEHDJXZSTCRROTGYEDATKGFFGTQBRNMSSXEZUXUFUOBHHDXONWFUAJQLLMKGUWLAWFAPGKHTGZBNHA");

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
    msg.setTimeStamp(0.237590429957);
    msg.setSource(42204U);
    msg.setSourceEntity(178U);
    msg.setDestination(41355U);
    msg.setDestinationEntity(51U);
    msg.list.assign("PFAYCNUUXKRHWVNXSCGEYQFINBMKEFU");

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
    msg.setTimeStamp(0.839704324619);
    msg.setSource(58793U);
    msg.setSourceEntity(161U);
    msg.setDestination(38663U);
    msg.setDestinationEntity(170U);
    msg.list.assign("AEDCTPZXUIOYQMGBKNYQXZBSYMMHMXHCTNHCWHTAXIBLZPQMPGDOKWLAQZJMBQWVFSIOFAIZWVNOKROMOVWYN");

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
    msg.setTimeStamp(0.246067296504);
    msg.setSource(46296U);
    msg.setSourceEntity(226U);
    msg.setDestination(51377U);
    msg.setDestinationEntity(220U);
    msg.peer.assign("XNOISFKGLIVKKJZRTKCFEUAVNUYJDHMEGPILFTBXLPDQBMKXFBEVJVAFNFRZNICXNHOSUOHKHECHZWWVRMMHJTVUTACXTMYPE");
    msg.rssi = 0.941645990014;
    msg.integrity = 16288U;

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
    msg.setTimeStamp(0.549062588747);
    msg.setSource(46138U);
    msg.setSourceEntity(112U);
    msg.setDestination(50833U);
    msg.setDestinationEntity(221U);
    msg.peer.assign("BNFFLPWSJMTMZPAMNGHKTDVVLTCJSHGMVUXEKRVLVWTPFZHCHPCHCBYNNVEPUGYKVXSTZWAEWVM");
    msg.rssi = 0.312144311569;
    msg.integrity = 3375U;

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
    msg.setTimeStamp(0.618510077815);
    msg.setSource(7271U);
    msg.setSourceEntity(134U);
    msg.setDestination(44769U);
    msg.setDestinationEntity(44U);
    msg.peer.assign("PUCAVSHYWKQOYKYHHLCPOOLHDSXGMAVVUOIPANQWBTPKEWNVXLGPXBUMAEJSBFZCUOJYPFYUHXEKQFFGTEKZHHNYZBUMQE");
    msg.rssi = 0.326044427743;
    msg.integrity = 28246U;

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
    msg.setTimeStamp(0.320279008457);
    msg.setSource(11799U);
    msg.setSourceEntity(5U);
    msg.setDestination(41856U);
    msg.setDestinationEntity(3U);
    msg.req_id = 31949U;
    msg.destination.assign("OWRZLICAJQGUYOPARTGCSQFUPMDUXPNAQNUVCFFIBVWDXAYOOYBNHQJHRYFEOIYDUSJHZVJHGTKAXMJVVMODNLJCRRCTNULEQVBPZGYKECHWBCMTQG");
    msg.timeout = 0.0585776920277;
    msg.range = 0.571826946955;
    msg.type = 179U;
    IMC::SimulatedState tmp_msg_0;
    tmp_msg_0.lat = 0.446950335759;
    tmp_msg_0.lon = 0.898231678266;
    tmp_msg_0.height = 0.383029682665;
    tmp_msg_0.x = 0.557969998323;
    tmp_msg_0.y = 0.511530928894;
    tmp_msg_0.z = 0.00523895957423;
    tmp_msg_0.phi = 0.396834820891;
    tmp_msg_0.theta = 0.456526866836;
    tmp_msg_0.psi = 0.889362072917;
    tmp_msg_0.u = 0.734717192994;
    tmp_msg_0.v = 0.51806283991;
    tmp_msg_0.w = 0.0164087518657;
    tmp_msg_0.p = 0.614906453838;
    tmp_msg_0.q = 0.600355537128;
    tmp_msg_0.r = 0.977042991369;
    tmp_msg_0.svx = 0.726566834701;
    tmp_msg_0.svy = 0.783544057745;
    tmp_msg_0.svz = 0.173822703405;
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
    msg.setTimeStamp(0.0359079764502);
    msg.setSource(46747U);
    msg.setSourceEntity(48U);
    msg.setDestination(48411U);
    msg.setDestinationEntity(5U);
    msg.req_id = 40618U;
    msg.destination.assign("YUVORXEYGNTSDZKESFAKITFTBSRDZNHVQWYGXXFKDMKLTHUADONTPSIANPHGBPMUGZDMDMZVJLKPPRQOAGCQLBDZMOSNEQAWFXTJTUYPKQJJNJPNBOCLNANXWXGCWFHRLUUHVWGPOFEYCWZUGILSIZBEKIZGYSMDEORVEFBJRQWYOCPMYTAZCRVIVLSCXFJXJUSEVBUFMAEGVWZALXTQOHWQVMWEDLHNCMHAYLQPQSHCJRRICHXDJIUKYOKRB");
    msg.timeout = 0.518215993905;
    msg.range = 0.721507512187;
    msg.type = 95U;
    IMC::RhodamineDye tmp_msg_0;
    tmp_msg_0.value = 0.621772080281;
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
    msg.setTimeStamp(0.41178123779);
    msg.setSource(42209U);
    msg.setSourceEntity(87U);
    msg.setDestination(41141U);
    msg.setDestinationEntity(136U);
    msg.req_id = 37844U;
    msg.destination.assign("EGGPIBWWAWRDFEBNIHLLFXGUTRXGFDMLJMZJVERDPYYNZWSLADLMPCCXFULMLFVXYNJSHXGSZCHREMPGEVXCXGIDUFHGBJNUKYJNPIPPCWVSGHKVTBSROUCPQIHSOFLJNMBTUAZUDLBXIZOYKVEPAMWDAZNKOOJPUFHBESKTWQAYTTKRRMYUOQJGQVHFSOLOWWKQKIXCQEJZOERQAAMTRSXKBQNQADEZZOYTHRYVZNJKSIMCQAICDIVB");
    msg.timeout = 0.416541577314;
    msg.range = 0.344155158855;
    msg.type = 196U;
    IMC::EntityState tmp_msg_0;
    tmp_msg_0.state = 55U;
    tmp_msg_0.flags = 46U;
    tmp_msg_0.description.assign("RHUCBQNKTUWHXSNTHPJUNFQOXSFPQYEBKDWRIOTXSQQTTRMXLCGDXWPXNNZZMJYPCDNRUMCVISOLXLFQCLSIYLQHMCHFUMZDGYTUAMBKJIYOKGVXCFUEBDAPFTHRVAWOGHZZVHIVHEYOUNZAYF");
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
    msg.setTimeStamp(0.407945196953);
    msg.setSource(51582U);
    msg.setSourceEntity(167U);
    msg.setDestination(26757U);
    msg.setDestinationEntity(85U);
    msg.req_id = 43585U;
    msg.type = 61U;
    msg.status = 158U;
    msg.info.assign("UHNUQEFBNABGBPEKCVTVARTREDWZGSKIQZCAJZPWGMDBYJLIOABOUHPMQSFDXTJJLOJLEJWOGVOVRPKKMAYWSTREKYEFYRXXOVOYFFLXN");
    msg.range = 0.986575329092;

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
    msg.setTimeStamp(0.858517002609);
    msg.setSource(52810U);
    msg.setSourceEntity(147U);
    msg.setDestination(52072U);
    msg.setDestinationEntity(190U);
    msg.req_id = 59626U;
    msg.type = 125U;
    msg.status = 205U;
    msg.info.assign("UDSAASZAQWHLWYBIKGMJZXPETJDNXNYKDVQOYIHJXFBRWPOCGSPSRXNEFCAIOFRVOCQSATHEZIFWEMUJVYZAVSWOIWCZMPPTXZMLUGHGAPCHLUTKRLCGFLUPYDEEYCUHBPDVQQDEWDBCIHGMDSVRWCQXNOPFIQKKDITTTPMQFUAKKWGKEYYCJMRMJMJGVLNFIJQBXVBWLXZFMUOH");
    msg.range = 0.175517371354;

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
    msg.setTimeStamp(0.618195832463);
    msg.setSource(55100U);
    msg.setSourceEntity(126U);
    msg.setDestination(11052U);
    msg.setDestinationEntity(98U);
    msg.req_id = 3301U;
    msg.type = 206U;
    msg.status = 125U;
    msg.info.assign("SYWJHYGPBLDUISJRIKISOGAMDIVDLGTQBGNKEPVUSQBGDZFFEDCTDKEYNZHFEXKLVWVKJZIIVFAAXNMSDZFEPBDKQSGTORUSFZBMCZRQGTXZYMORFTJZAHRBBREPLMCCAR");
    msg.range = 0.475474288234;

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
    msg.setTimeStamp(0.767007017309);
    msg.setSource(55717U);
    msg.setSourceEntity(142U);
    msg.setDestination(3242U);
    msg.setDestinationEntity(185U);
    msg.value = 7783;

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
    msg.setTimeStamp(0.0743615814604);
    msg.setSource(26803U);
    msg.setSourceEntity(179U);
    msg.setDestination(63986U);
    msg.setDestinationEntity(167U);
    msg.value = -651;

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
    msg.setTimeStamp(0.503524105891);
    msg.setSource(36160U);
    msg.setSourceEntity(208U);
    msg.setDestination(44984U);
    msg.setDestinationEntity(235U);
    msg.value = -10272;

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
    msg.setTimeStamp(0.654761193449);
    msg.setSource(31525U);
    msg.setSourceEntity(99U);
    msg.setDestination(12236U);
    msg.setDestinationEntity(115U);
    msg.value = 0.48232199149;

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
    msg.setTimeStamp(0.778092519964);
    msg.setSource(13765U);
    msg.setSourceEntity(239U);
    msg.setDestination(41212U);
    msg.setDestinationEntity(139U);
    msg.value = 0.169954345661;

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
    msg.setTimeStamp(0.947255609952);
    msg.setSource(10351U);
    msg.setSourceEntity(175U);
    msg.setDestination(12096U);
    msg.setDestinationEntity(247U);
    msg.value = 0.276534349484;

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
    msg.setTimeStamp(0.0559435638331);
    msg.setSource(60616U);
    msg.setSourceEntity(30U);
    msg.setDestination(48541U);
    msg.setDestinationEntity(50U);
    msg.value = 0.456228221353;

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
    msg.setTimeStamp(0.294600357876);
    msg.setSource(23365U);
    msg.setSourceEntity(195U);
    msg.setDestination(20248U);
    msg.setDestinationEntity(19U);
    msg.value = 0.29875004964;

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
    msg.setTimeStamp(0.481656054251);
    msg.setSource(38983U);
    msg.setSourceEntity(102U);
    msg.setDestination(62797U);
    msg.setDestinationEntity(61U);
    msg.value = 0.773851382574;

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
    msg.setTimeStamp(0.903504221467);
    msg.setSource(25498U);
    msg.setSourceEntity(250U);
    msg.setDestination(42743U);
    msg.setDestinationEntity(63U);
    msg.validity = 10363U;
    msg.type = 170U;
    msg.utc_year = 48023U;
    msg.utc_month = 178U;
    msg.utc_day = 50U;
    msg.utc_time = 0.915949687724;
    msg.lat = 0.356440786127;
    msg.lon = 0.709409142648;
    msg.height = 0.879692190437;
    msg.satellites = 177U;
    msg.cog = 0.330560464443;
    msg.sog = 0.342262816933;
    msg.hdop = 0.699156013232;
    msg.vdop = 0.894143072452;
    msg.hacc = 0.23890374742;
    msg.vacc = 0.47501429638;

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
    msg.setTimeStamp(0.130932534585);
    msg.setSource(38873U);
    msg.setSourceEntity(250U);
    msg.setDestination(12823U);
    msg.setDestinationEntity(21U);
    msg.validity = 35935U;
    msg.type = 196U;
    msg.utc_year = 50121U;
    msg.utc_month = 88U;
    msg.utc_day = 62U;
    msg.utc_time = 0.149990463382;
    msg.lat = 0.977400880436;
    msg.lon = 0.256488513129;
    msg.height = 0.74624854687;
    msg.satellites = 161U;
    msg.cog = 0.0451893066009;
    msg.sog = 0.591433912441;
    msg.hdop = 0.79249266892;
    msg.vdop = 0.05238840943;
    msg.hacc = 0.0853013577205;
    msg.vacc = 0.117007159252;

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
    msg.setTimeStamp(0.0967418717697);
    msg.setSource(12242U);
    msg.setSourceEntity(75U);
    msg.setDestination(7681U);
    msg.setDestinationEntity(0U);
    msg.validity = 55005U;
    msg.type = 100U;
    msg.utc_year = 15900U;
    msg.utc_month = 70U;
    msg.utc_day = 98U;
    msg.utc_time = 0.303837326204;
    msg.lat = 0.850984452851;
    msg.lon = 0.51279758587;
    msg.height = 0.337821240424;
    msg.satellites = 138U;
    msg.cog = 0.483804272996;
    msg.sog = 0.829275123141;
    msg.hdop = 0.0937987817786;
    msg.vdop = 0.274060328875;
    msg.hacc = 0.0832229178896;
    msg.vacc = 0.560354341043;

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
    msg.setTimeStamp(0.603431918958);
    msg.setSource(46255U);
    msg.setSourceEntity(108U);
    msg.setDestination(42191U);
    msg.setDestinationEntity(37U);
    msg.time = 0.566832528595;
    msg.phi = 0.836382742693;
    msg.theta = 0.61754543917;
    msg.psi = 0.478351467832;
    msg.psi_magnetic = 0.548988121565;

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
    msg.setTimeStamp(0.43184679649);
    msg.setSource(16736U);
    msg.setSourceEntity(50U);
    msg.setDestination(58464U);
    msg.setDestinationEntity(245U);
    msg.time = 0.355911604841;
    msg.phi = 0.384803398115;
    msg.theta = 0.350117158569;
    msg.psi = 0.10681628183;
    msg.psi_magnetic = 0.937897402728;

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
    msg.setTimeStamp(0.715208102037);
    msg.setSource(40575U);
    msg.setSourceEntity(111U);
    msg.setDestination(49087U);
    msg.setDestinationEntity(108U);
    msg.time = 0.00732820132147;
    msg.phi = 0.621293713221;
    msg.theta = 0.676832148044;
    msg.psi = 0.543452985861;
    msg.psi_magnetic = 0.898821017757;

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
    msg.setTimeStamp(0.734898340752);
    msg.setSource(10172U);
    msg.setSourceEntity(206U);
    msg.setDestination(41674U);
    msg.setDestinationEntity(63U);
    msg.time = 0.241848979073;
    msg.x = 0.130614490385;
    msg.y = 0.874409056495;
    msg.z = 0.0610160354124;
    msg.timestep = 0.78815647153;

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
    msg.setTimeStamp(0.0905536565312);
    msg.setSource(3978U);
    msg.setSourceEntity(159U);
    msg.setDestination(41772U);
    msg.setDestinationEntity(6U);
    msg.time = 0.792743694567;
    msg.x = 0.081948846393;
    msg.y = 0.235483603297;
    msg.z = 0.577411517823;
    msg.timestep = 0.635949980595;

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
    msg.setTimeStamp(0.72874943999);
    msg.setSource(9786U);
    msg.setSourceEntity(63U);
    msg.setDestination(15807U);
    msg.setDestinationEntity(195U);
    msg.time = 0.666908982921;
    msg.x = 0.178101438741;
    msg.y = 0.714860211001;
    msg.z = 0.752859238397;
    msg.timestep = 0.0942705337743;

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
    msg.setTimeStamp(0.326744368337);
    msg.setSource(47048U);
    msg.setSourceEntity(132U);
    msg.setDestination(24144U);
    msg.setDestinationEntity(106U);
    msg.time = 0.843184189616;
    msg.x = 0.923886251062;
    msg.y = 0.784388901805;
    msg.z = 0.394475303152;

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
    msg.setTimeStamp(0.909975631711);
    msg.setSource(43735U);
    msg.setSourceEntity(157U);
    msg.setDestination(40947U);
    msg.setDestinationEntity(254U);
    msg.time = 0.231023893808;
    msg.x = 0.647560515956;
    msg.y = 0.829018650896;
    msg.z = 0.930977202559;

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
    msg.setTimeStamp(0.480965694453);
    msg.setSource(37561U);
    msg.setSourceEntity(52U);
    msg.setDestination(28576U);
    msg.setDestinationEntity(252U);
    msg.time = 0.0729754223671;
    msg.x = 0.939175343842;
    msg.y = 0.725589084688;
    msg.z = 0.641857461259;

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
    msg.setTimeStamp(0.458803580532);
    msg.setSource(739U);
    msg.setSourceEntity(111U);
    msg.setDestination(65089U);
    msg.setDestinationEntity(10U);
    msg.time = 0.399511982381;
    msg.x = 0.666443620955;
    msg.y = 0.821898619927;
    msg.z = 0.477021190308;

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
    msg.setTimeStamp(0.502278257692);
    msg.setSource(18720U);
    msg.setSourceEntity(7U);
    msg.setDestination(108U);
    msg.setDestinationEntity(171U);
    msg.time = 0.0703363541984;
    msg.x = 0.517074012122;
    msg.y = 0.54388417836;
    msg.z = 0.0739584576989;

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
    msg.setTimeStamp(0.867066468652);
    msg.setSource(42937U);
    msg.setSourceEntity(154U);
    msg.setDestination(41894U);
    msg.setDestinationEntity(214U);
    msg.time = 0.535780102198;
    msg.x = 0.73195716331;
    msg.y = 0.623584487274;
    msg.z = 0.309319238875;

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
    msg.setTimeStamp(0.151802794578);
    msg.setSource(23781U);
    msg.setSourceEntity(168U);
    msg.setDestination(49277U);
    msg.setDestinationEntity(170U);
    msg.time = 0.226528126571;
    msg.x = 0.0256322731335;
    msg.y = 0.324311746984;
    msg.z = 0.158761101419;

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
    msg.setTimeStamp(0.13989843354);
    msg.setSource(7245U);
    msg.setSourceEntity(68U);
    msg.setDestination(22732U);
    msg.setDestinationEntity(198U);
    msg.time = 0.475837756733;
    msg.x = 0.421715116144;
    msg.y = 0.991808594586;
    msg.z = 0.813460449455;

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
    msg.setTimeStamp(0.60576825521);
    msg.setSource(19657U);
    msg.setSourceEntity(179U);
    msg.setDestination(9429U);
    msg.setDestinationEntity(65U);
    msg.time = 0.803930582357;
    msg.x = 0.179119731597;
    msg.y = 0.324410283173;
    msg.z = 0.0737902547337;

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
    msg.setTimeStamp(0.778954475369);
    msg.setSource(65039U);
    msg.setSourceEntity(136U);
    msg.setDestination(37389U);
    msg.setDestinationEntity(10U);
    msg.validity = 236U;
    msg.x = 0.618597035687;
    msg.y = 0.525791436573;
    msg.z = 0.66891551614;

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
    msg.setTimeStamp(0.634577108969);
    msg.setSource(64663U);
    msg.setSourceEntity(37U);
    msg.setDestination(879U);
    msg.setDestinationEntity(27U);
    msg.validity = 178U;
    msg.x = 0.555125859535;
    msg.y = 0.362372126392;
    msg.z = 0.929009192075;

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
    msg.setTimeStamp(0.969308132949);
    msg.setSource(17015U);
    msg.setSourceEntity(11U);
    msg.setDestination(27611U);
    msg.setDestinationEntity(247U);
    msg.validity = 118U;
    msg.x = 0.191606872116;
    msg.y = 0.674273597752;
    msg.z = 0.268313305054;

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
    msg.setTimeStamp(0.488122922806);
    msg.setSource(53910U);
    msg.setSourceEntity(187U);
    msg.setDestination(61548U);
    msg.setDestinationEntity(56U);
    msg.validity = 200U;
    msg.x = 0.950626376347;
    msg.y = 0.748358401119;
    msg.z = 0.787302410901;

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
    msg.setTimeStamp(0.631090983139);
    msg.setSource(60254U);
    msg.setSourceEntity(169U);
    msg.setDestination(16024U);
    msg.setDestinationEntity(183U);
    msg.validity = 188U;
    msg.x = 0.722166754523;
    msg.y = 0.983510886526;
    msg.z = 0.963315490443;

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
    msg.setTimeStamp(0.0978150609429);
    msg.setSource(31390U);
    msg.setSourceEntity(131U);
    msg.setDestination(15048U);
    msg.setDestinationEntity(233U);
    msg.validity = 192U;
    msg.x = 0.65762531689;
    msg.y = 0.715222947844;
    msg.z = 0.122903598282;

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
    msg.setTimeStamp(0.0318788474649);
    msg.setSource(46504U);
    msg.setSourceEntity(71U);
    msg.setDestination(5798U);
    msg.setDestinationEntity(113U);
    msg.time = 0.304612170893;
    msg.x = 0.0357303327416;
    msg.y = 0.290963276232;
    msg.z = 0.866897602272;

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
    msg.setTimeStamp(0.344360934445);
    msg.setSource(38620U);
    msg.setSourceEntity(69U);
    msg.setDestination(4682U);
    msg.setDestinationEntity(234U);
    msg.time = 0.717872721618;
    msg.x = 0.338251448054;
    msg.y = 0.0608068211678;
    msg.z = 0.595527941513;

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
    msg.setTimeStamp(0.675875680415);
    msg.setSource(32118U);
    msg.setSourceEntity(5U);
    msg.setDestination(58706U);
    msg.setDestinationEntity(157U);
    msg.time = 0.583278985752;
    msg.x = 0.964066671308;
    msg.y = 0.580345245627;
    msg.z = 0.438316702762;

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
    msg.setTimeStamp(0.889747430237);
    msg.setSource(39408U);
    msg.setSourceEntity(27U);
    msg.setDestination(56834U);
    msg.setDestinationEntity(246U);
    msg.validity = 218U;
    msg.value = 0.300163064908;

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
    msg.setTimeStamp(0.500884349338);
    msg.setSource(28621U);
    msg.setSourceEntity(109U);
    msg.setDestination(32441U);
    msg.setDestinationEntity(24U);
    msg.validity = 45U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.539474487649;
    tmp_msg_0.y = 0.863580774855;
    tmp_msg_0.z = 0.552633470384;
    tmp_msg_0.phi = 0.953763741831;
    tmp_msg_0.theta = 0.945439584579;
    tmp_msg_0.psi = 0.540836513898;
    msg.location.push_back(tmp_msg_0);
    IMC::BeamConfig tmp_msg_1;
    tmp_msg_1.beam_width = 0.276433945255;
    tmp_msg_1.beam_height = 0.106656336001;
    msg.beam_config.push_back(tmp_msg_1);
    msg.value = 0.118918042032;

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
    msg.setTimeStamp(0.140111037245);
    msg.setSource(21253U);
    msg.setSourceEntity(224U);
    msg.setDestination(14688U);
    msg.setDestinationEntity(210U);
    msg.validity = 20U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.652094889507;
    tmp_msg_0.y = 0.302519930042;
    tmp_msg_0.z = 0.0374825074244;
    tmp_msg_0.phi = 0.925473055302;
    tmp_msg_0.theta = 0.0451639179492;
    tmp_msg_0.psi = 0.161535923167;
    msg.location.push_back(tmp_msg_0);
    msg.value = 0.646567800877;

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
    msg.setTimeStamp(0.385459373789);
    msg.setSource(33619U);
    msg.setSourceEntity(233U);
    msg.setDestination(24950U);
    msg.setDestinationEntity(175U);
    msg.value = 0.553712057503;

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
    msg.setTimeStamp(0.393007490167);
    msg.setSource(49315U);
    msg.setSourceEntity(118U);
    msg.setDestination(38082U);
    msg.setDestinationEntity(200U);
    msg.value = 0.767830440375;

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
    msg.setTimeStamp(0.893632362996);
    msg.setSource(57523U);
    msg.setSourceEntity(117U);
    msg.setDestination(25713U);
    msg.setDestinationEntity(66U);
    msg.value = 0.024337308577;

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
    msg.setTimeStamp(0.353761881264);
    msg.setSource(540U);
    msg.setSourceEntity(180U);
    msg.setDestination(26044U);
    msg.setDestinationEntity(180U);
    msg.value = 0.118351940094;

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
    msg.setTimeStamp(0.143078001884);
    msg.setSource(9830U);
    msg.setSourceEntity(194U);
    msg.setDestination(40540U);
    msg.setDestinationEntity(53U);
    msg.value = 0.514400116123;

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
    msg.setTimeStamp(0.46813144391);
    msg.setSource(56535U);
    msg.setSourceEntity(107U);
    msg.setDestination(41018U);
    msg.setDestinationEntity(43U);
    msg.value = 0.914013005566;

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
    msg.setTimeStamp(0.034404816567);
    msg.setSource(59032U);
    msg.setSourceEntity(218U);
    msg.setDestination(48044U);
    msg.setDestinationEntity(150U);
    msg.value = 0.880545308121;

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
    msg.setTimeStamp(0.917602638726);
    msg.setSource(35238U);
    msg.setSourceEntity(142U);
    msg.setDestination(61879U);
    msg.setDestinationEntity(201U);
    msg.value = 0.467534306458;

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
    msg.setTimeStamp(0.911500334363);
    msg.setSource(36864U);
    msg.setSourceEntity(106U);
    msg.setDestination(2750U);
    msg.setDestinationEntity(110U);
    msg.value = 0.305300046202;

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
    msg.setTimeStamp(0.711247072156);
    msg.setSource(7520U);
    msg.setSourceEntity(68U);
    msg.setDestination(49690U);
    msg.setDestinationEntity(22U);
    msg.value = 0.911367327821;

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
    msg.setTimeStamp(0.314843932865);
    msg.setSource(35746U);
    msg.setSourceEntity(204U);
    msg.setDestination(4013U);
    msg.setDestinationEntity(198U);
    msg.value = 0.845433654285;

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
    msg.setTimeStamp(0.00912245294961);
    msg.setSource(13108U);
    msg.setSourceEntity(111U);
    msg.setDestination(54731U);
    msg.setDestinationEntity(184U);
    msg.value = 0.390887001502;

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
    msg.setTimeStamp(0.874572227238);
    msg.setSource(43968U);
    msg.setSourceEntity(231U);
    msg.setDestination(5100U);
    msg.setDestinationEntity(12U);
    msg.value = 0.224243285037;

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
    msg.setTimeStamp(0.929734672003);
    msg.setSource(3907U);
    msg.setSourceEntity(195U);
    msg.setDestination(54026U);
    msg.setDestinationEntity(214U);
    msg.value = 0.28786565564;

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
    msg.setTimeStamp(0.0380430733029);
    msg.setSource(28024U);
    msg.setSourceEntity(27U);
    msg.setDestination(45495U);
    msg.setDestinationEntity(147U);
    msg.value = 0.169063980261;

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
    msg.setTimeStamp(0.881650608422);
    msg.setSource(20943U);
    msg.setSourceEntity(243U);
    msg.setDestination(13349U);
    msg.setDestinationEntity(220U);
    msg.value = 0.873043340187;

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
    msg.setTimeStamp(0.449146644189);
    msg.setSource(19781U);
    msg.setSourceEntity(38U);
    msg.setDestination(21008U);
    msg.setDestinationEntity(106U);
    msg.value = 0.643216687458;

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
    msg.setTimeStamp(0.707827406194);
    msg.setSource(15139U);
    msg.setSourceEntity(34U);
    msg.setDestination(40637U);
    msg.setDestinationEntity(60U);
    msg.value = 0.0439436179002;

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
    msg.setTimeStamp(0.0387073508077);
    msg.setSource(45888U);
    msg.setSourceEntity(125U);
    msg.setDestination(38175U);
    msg.setDestinationEntity(201U);
    msg.value = 0.222729767878;

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
    msg.setTimeStamp(0.499837328341);
    msg.setSource(40494U);
    msg.setSourceEntity(17U);
    msg.setDestination(12089U);
    msg.setDestinationEntity(84U);
    msg.value = 0.897974515392;

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
    msg.setTimeStamp(0.82997269588);
    msg.setSource(61900U);
    msg.setSourceEntity(28U);
    msg.setDestination(43525U);
    msg.setDestinationEntity(75U);
    msg.value = 0.113173839085;

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
    msg.setTimeStamp(0.418479041655);
    msg.setSource(22495U);
    msg.setSourceEntity(184U);
    msg.setDestination(36175U);
    msg.setDestinationEntity(198U);
    msg.value = 0.443704515326;

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
    msg.setTimeStamp(0.536358116712);
    msg.setSource(23722U);
    msg.setSourceEntity(13U);
    msg.setDestination(53967U);
    msg.setDestinationEntity(199U);
    msg.value = 0.345995593358;

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
    msg.setTimeStamp(0.119520070168);
    msg.setSource(44076U);
    msg.setSourceEntity(21U);
    msg.setDestination(35037U);
    msg.setDestinationEntity(188U);
    msg.value = 0.68494501202;

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
    msg.setTimeStamp(0.886776529573);
    msg.setSource(15U);
    msg.setSourceEntity(97U);
    msg.setDestination(9648U);
    msg.setDestinationEntity(3U);
    msg.direction = 0.789541901947;
    msg.speed = 0.0725082313653;
    msg.turbulence = 0.104176807775;

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
    msg.setTimeStamp(0.583962626127);
    msg.setSource(3082U);
    msg.setSourceEntity(141U);
    msg.setDestination(61725U);
    msg.setDestinationEntity(243U);
    msg.direction = 0.966250063461;
    msg.speed = 0.909996504898;
    msg.turbulence = 0.57400387369;

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
    msg.setTimeStamp(0.113223225325);
    msg.setSource(44198U);
    msg.setSourceEntity(89U);
    msg.setDestination(8894U);
    msg.setDestinationEntity(245U);
    msg.direction = 0.826619448474;
    msg.speed = 0.373588074045;
    msg.turbulence = 0.0747259163471;

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
    msg.setTimeStamp(0.241068954491);
    msg.setSource(22503U);
    msg.setSourceEntity(116U);
    msg.setDestination(55397U);
    msg.setDestinationEntity(39U);
    msg.value = 0.699977696551;

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
    msg.setTimeStamp(0.203365793574);
    msg.setSource(9282U);
    msg.setSourceEntity(54U);
    msg.setDestination(64892U);
    msg.setDestinationEntity(8U);
    msg.value = 0.974831224228;

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
    msg.setTimeStamp(0.958483129514);
    msg.setSource(56879U);
    msg.setSourceEntity(44U);
    msg.setDestination(33891U);
    msg.setDestinationEntity(107U);
    msg.value = 0.387039473761;

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
    msg.setTimeStamp(0.402075836289);
    msg.setSource(12430U);
    msg.setSourceEntity(245U);
    msg.setDestination(12461U);
    msg.setDestinationEntity(56U);
    msg.value.assign("QTMFTXCUVIEYIQISJOYOFYAPRAJUGGIG");

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
    msg.setTimeStamp(0.093857244899);
    msg.setSource(21539U);
    msg.setSourceEntity(54U);
    msg.setDestination(7215U);
    msg.setDestinationEntity(3U);
    msg.value.assign("VYVCERYHQFGSMTHHPDIZFGQIBYLDZFTXMXLZSJGRNLOTKTLZKAWKEUZDRPUWSXOLQQERPGCEMUQACRBNKVBALVIWZUTIIONXWPYBAYGXXPRUVNHMEVCIJAURTRSYTJJTJWFMOMFXDFHFKUEBYTHEQZDOLJNX");

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
    msg.setTimeStamp(0.835108104872);
    msg.setSource(63808U);
    msg.setSourceEntity(127U);
    msg.setDestination(47259U);
    msg.setDestinationEntity(71U);
    msg.value.assign("KYJMRFBUFGGLXVUMNZUXZYMKRDEARQJHQQUPACRMTUQIJLNOUEERKAQBDNTKAIZMECLYKXX");

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
    msg.setTimeStamp(0.317862323529);
    msg.setSource(47847U);
    msg.setSourceEntity(155U);
    msg.setDestination(59758U);
    msg.setDestinationEntity(160U);
    const char tmp_msg_0[] = {13, -21, 106, 116, 79, -28, 33, 40, -65, 122, -71, 30, -17, -5, -2, -28, -127, -122, -48, 14, 45, 118, -69, 58, 93, -105, 106, -41, 121, 22, 46, -39, -89, -79, -25, 43, 51, 57, -107, -24, 27, 107, 26, -48, -61, -126, 93, 9, 3, 96, -81, -72, -104, -92, 126, 40, 63, 51, 82, 63, -111, 9, -23, -18, -44, -9, -27, 27, -106, 63, 55, -112, -128, -46, -94, -58, -54, 18, 109, -104, -122, 89, 69, -106, -118, 32, -57, -121, -58, 119, 89, 68, 122, -124, 12, -2, -4, -33, 96, 36, -88, -86, 124, 54, 69, 72, -81, -42};
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
    msg.setTimeStamp(0.944245502209);
    msg.setSource(55007U);
    msg.setSourceEntity(242U);
    msg.setDestination(45393U);
    msg.setDestinationEntity(216U);
    const char tmp_msg_0[] = {-77, -100, -120, 107, 99, 101, -102, 26, -40, -87, -31, 17, -116, 42, -117, -44, -37, 75, 69, 123, 86, 86, 56, -119, -39, -58, 110, 71, 7, -55, -4, 26, 51, 68, -110, 103, 77, -29, -106, 35, 108, -55, 37, 44, -23, -97, -61, 64, 123, -13, 100, 60, 64, 95, -81, -70, 108, -33, 59, 25, -41, -96, -107, -57, 43, 55, -27, 112, 11, -84, -42, -91, -40, -109, 13, -25, 115, 100, 10, -20, -68, -24, 33, 19, 50, 44, 74, -122, -2, -70, 33, -36, -117, 58, -11, 27, 107, 47, -70, -3, 11, -93, -118, 6, -122, 89, -23, 43, -64, 24, -3, -14, -80, 124, 14, 107, 84, -106, 114, -39, 111, -73, -63};
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
    msg.setTimeStamp(0.446245574177);
    msg.setSource(63784U);
    msg.setSourceEntity(202U);
    msg.setDestination(25882U);
    msg.setDestinationEntity(235U);
    const char tmp_msg_0[] = {-109, -17, 31, -124, -3, -4, -91, -18, -52, -23, 64, -79, 19, 124, -86, -54, -82, -20, 71, 94, 100, -94, 70, 76, -113, 24, -56, 83, -19, 12, -27, 22, 12, 86, 90, 87, -9, 70, 14, 88, 71, -39, -20, -35, -71, 52, -36, 113, 56, -23, 102, -37, 82, -100, -45, 96, 74, -103, -126, 119, 35, -98, 24, -122, -75, 19, 97, -101, 126, -106, -51, 34, 32, 77, -102, -109, 125, -71, 107, 93, -102, -52, 20, 68, -76, -69, -24, -5, 108, 111};
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
    msg.setTimeStamp(0.289598906397);
    msg.setSource(12754U);
    msg.setSourceEntity(223U);
    msg.setDestination(30885U);
    msg.setDestinationEntity(120U);
    msg.value = 0.468428102052;

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
    msg.setTimeStamp(0.51189716287);
    msg.setSource(23486U);
    msg.setSourceEntity(107U);
    msg.setDestination(25689U);
    msg.setDestinationEntity(251U);
    msg.value = 0.0844511378709;

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
    msg.setTimeStamp(0.266725122342);
    msg.setSource(11127U);
    msg.setSourceEntity(15U);
    msg.setDestination(19256U);
    msg.setDestinationEntity(88U);
    msg.value = 0.163486935282;

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
    msg.setTimeStamp(0.0519181419169);
    msg.setSource(50075U);
    msg.setSourceEntity(127U);
    msg.setDestination(37124U);
    msg.setDestinationEntity(3U);
    msg.type = 181U;
    msg.frequency = 140838125U;
    msg.min_range = 19099U;
    msg.max_range = 4910U;
    msg.bits_per_point = 80U;
    msg.scale_factor = 0.658573904948;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.171159983728;
    tmp_msg_0.beam_height = 0.350032305661;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {87, 44, 81, 88, 79, 30, -67, -83, 91, -78, 37, 85, -13, 59, -45, -107, 119, -106, -119, 120, -108, -122, 8, 78, -89, 98, 97, 32, -41, -127, -126, 87, 68, -30, -72, -51, -57, -41, 91, -52, 78, 52, 86, 41, 106, -52, -28, 64, -91, 18, -12, 17, -78, -65, 113, 112, -17, 56, -99, 49, 61, -45, 62, -26, 71, -38, 109, -3, 44, 10, -80, -43, -99, -87, -100, 69, 0, 29, -34, -22, 96, -107, -17, -76, 47, -100, -62, 41, -9, 58, -86, 30, -20, -58, 88, -90, 110, 42, 57, 0, -18, 46, 13, -61, 80, 114, -104, 84, 5};
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
    msg.setTimeStamp(0.415582442669);
    msg.setSource(45800U);
    msg.setSourceEntity(168U);
    msg.setDestination(40703U);
    msg.setDestinationEntity(102U);
    msg.type = 7U;
    msg.frequency = 1936565263U;
    msg.min_range = 49598U;
    msg.max_range = 60055U;
    msg.bits_per_point = 152U;
    msg.scale_factor = 0.705375824871;
    const char tmp_msg_0[] = {71, -57, 33, 17, 91, -15, 33, -29, 93, -109, -21, -43, 126, -82, -83, 70, -34, -80, -102, 96, 82, -21, 101, 48, -17, 24, 83, -59, -98, -68, 84, -87, 44, -63, 19, 10, 38, 93, 14, -110, -20, 110, 7, -45, -67, -47, -53, -100, 98, -90, 87, -111, 4, 126, -38, 90, -84, -1, 122, 124, -32, 82, 29, -34, -40, -8, 83, -39, -74, -103, -4, 79, 91, 61, 69, 40, 24, -44, -105, 2, -127, -87, -112, 51, 94, -81, 55, -10, -35, -57, 27, -117, 115, -93, -112, -72, 92, 73, -105, -1, 18, 19, -48, -127, -32, -102, -98, 89, -47, 114, 94, 27, 33, -71, -126, 73, 22, -3, 31, 124, 96, 90, -45, -53, 1, -57, 105, -72, -8, -127, -106, 16, 35, 69, -80, -109, 40, 31, 101, 86, -74, -17, -34, -103, 95, 71, -78, 55, -125, -94, 99, -106, 54, -61, 26, -12, 8, 126, -110, 36, 25, 43, -79, 20, 6, 60, -90, 95, 77, 104, 102, -23, 83, 125, 66, 79, -64, 15, -25, 30, 12, -127, -40, 2, 53, -54, -120, -37, 71, 97, -12, -53, 33, -104, 11, 69, -103, 97, 56, -61, 99, 115, 19, -18, -42, 126, 16, -32, 6, 98, -48, 58, -97, -93, 40, -49, -53, 58, 68, 30, 126, 72, -31, -87, -72, -18, -60, 20, -3, 20, 103};
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
    msg.setTimeStamp(0.416672193762);
    msg.setSource(37924U);
    msg.setSourceEntity(184U);
    msg.setDestination(31856U);
    msg.setDestinationEntity(215U);
    msg.type = 145U;
    msg.frequency = 1749636821U;
    msg.min_range = 34640U;
    msg.max_range = 36469U;
    msg.bits_per_point = 215U;
    msg.scale_factor = 0.581043715834;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.76363031496;
    tmp_msg_0.beam_height = 0.321435687126;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {42, -26, -120, -14, -69, 68, -114, 35, 3, 122, -71, 113, 105, -40, -117, 13, 19, -21, -22, 80, -26, -107, -24, 108, 77, -115, 89, 36, -107, -97, -123, 88, 97, 123, 126, -30, 93, -45, -29, -96, 68, 14, -57, -72, 76, -10, -124, 100, -29, -45, 79, -53, -16, 51, -62, 27, -74, 110, 107, -34, -52, -66, -63, -1, 85, 18, -33, -114, 17, 85, 83, -11, -9, -22, 47, -70, 84, -40, -122, 0, 22, -88, 31, -80, 53, -51, -120, 62, 19, 27, -26, -50, 3, -54, -117, 12, 62, -9, 78, 99, -118, -93, -100, -29, 53, 48, -115, 70, 63, -31, -114, 98, -97, 3, -33, 118, 48, 33, -52, 98, -44, 113, -107, 104, 43, -34, -55, 12, 125, 66, -9, -4, 95, -111, -78, 0, 67, -49, -49, -102, -114, -92, -102, -23, 20, -34, -128, 10, 15, 51, -105, 10, -49, 87, 19, 50, -100, 80, -112, 118, 83, -19, 32, -9, 18, 81, 70, 89, -4, -64};
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
    msg.setTimeStamp(0.10146880434);
    msg.setSource(25661U);
    msg.setSourceEntity(30U);
    msg.setDestination(29539U);
    msg.setDestinationEntity(86U);

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
    msg.setTimeStamp(0.280956450746);
    msg.setSource(28053U);
    msg.setSourceEntity(254U);
    msg.setDestination(4472U);
    msg.setDestinationEntity(117U);

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
    msg.setTimeStamp(0.401986707077);
    msg.setSource(15637U);
    msg.setSourceEntity(25U);
    msg.setDestination(8125U);
    msg.setDestinationEntity(235U);

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
    msg.setTimeStamp(0.178628311892);
    msg.setSource(4526U);
    msg.setSourceEntity(0U);
    msg.setDestination(61413U);
    msg.setDestinationEntity(78U);
    msg.op = 101U;

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
    msg.setTimeStamp(0.510637874534);
    msg.setSource(45011U);
    msg.setSourceEntity(19U);
    msg.setDestination(12992U);
    msg.setDestinationEntity(90U);
    msg.op = 13U;

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
    msg.setTimeStamp(0.178063212042);
    msg.setSource(51886U);
    msg.setSourceEntity(176U);
    msg.setDestination(24306U);
    msg.setDestinationEntity(90U);
    msg.op = 147U;

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
    msg.setTimeStamp(0.87640111815);
    msg.setSource(43723U);
    msg.setSourceEntity(23U);
    msg.setDestination(27433U);
    msg.setDestinationEntity(48U);
    msg.value = 0.431983886358;
    msg.confidence = 0.383881486948;
    msg.opmodes.assign("BDFNGRJEHNQKTLRCTPUFGOTYKSVSBADCXEUGEIVXQNOASPROOJLKKXFXMGGICNTMHFKQBMNVUZZRVHBECQHRWYMVAAGWIOACYDPQTUHEQUHZUDNWJQWFNBYQVGZLZEZVSFZSCIUXVTANLGESVWKYFMKQCSOFTJXSWEOPICZLBIJDMALRJYKYZPDZFXHXVJQLCMDOAPIXABCMALJIEKGKHDLIRLPWTRYBSTWSHDODPWO");

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
    msg.setTimeStamp(0.0316263688842);
    msg.setSource(8882U);
    msg.setSourceEntity(229U);
    msg.setDestination(61520U);
    msg.setDestinationEntity(227U);
    msg.value = 0.942685201237;
    msg.confidence = 0.400316343625;
    msg.opmodes.assign("NSZTRWUXDKOHFEENPCAJNBQFVIJDBZSOGCSIFPSXMRIJLBMQKXOCEGKQRWQGUIQADQSFLGLUAVXRYZFEWJKKROUVYZUOOVRVNUHTTLRWGWPONAWMCMAXKXXQGUYDCIWVPTITEVHYSOSEQTVBPDCGGVTRMPLWHRZDJZBZLUAPHPDBGJUXKLAEMGPHNVJBEERAKWSALYLYHCKIUFNTFHTIJLCXZPYTJF");

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
    msg.setTimeStamp(0.599041037123);
    msg.setSource(6401U);
    msg.setSourceEntity(235U);
    msg.setDestination(61518U);
    msg.setDestinationEntity(200U);
    msg.value = 0.170845982371;
    msg.confidence = 0.711703528762;
    msg.opmodes.assign("EGBUPJCXBMNLXSUQYUXWKWGGDFCXEATOVZMHEARIDEVAQAKCRPMWKULRHSDITNBHJOISLGVRGXFEPKDSGQMNKCMAIIZUVBFQCXUYITBHPHZWCWNYMFPJVDKOFCENGNLOVDDFHZORHJTBFWKUAJRJVYQROTEILXCHZZTHQZTJBMFUNOQGLTMKOXLCIQPKLCVJZSWSRIRALFGSQDXBJXYSNTIDO");

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
    msg.setTimeStamp(0.000515969491367);
    msg.setSource(54793U);
    msg.setSourceEntity(64U);
    msg.setDestination(61046U);
    msg.setDestinationEntity(178U);
    msg.itow = 2065519861U;
    msg.lat = 0.649261647004;
    msg.lon = 0.395457375195;
    msg.height_ell = 0.806430841931;
    msg.height_sea = 0.737748096828;
    msg.hacc = 0.334786097178;
    msg.vacc = 0.643878858173;
    msg.vel_n = 0.10211793533;
    msg.vel_e = 0.896203553722;
    msg.vel_d = 0.750946528901;
    msg.speed = 0.710068626892;
    msg.gspeed = 0.446981940172;
    msg.heading = 0.0256668541814;
    msg.sacc = 0.387419192596;
    msg.cacc = 0.868045856061;

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
    msg.setTimeStamp(0.0374987336346);
    msg.setSource(27842U);
    msg.setSourceEntity(52U);
    msg.setDestination(28346U);
    msg.setDestinationEntity(102U);
    msg.itow = 3575847388U;
    msg.lat = 0.823021300391;
    msg.lon = 0.205168870442;
    msg.height_ell = 0.872270718565;
    msg.height_sea = 0.803960054939;
    msg.hacc = 0.927510811704;
    msg.vacc = 0.672107091898;
    msg.vel_n = 0.950014914074;
    msg.vel_e = 0.394706585166;
    msg.vel_d = 0.249131623262;
    msg.speed = 0.43509566027;
    msg.gspeed = 0.553136126873;
    msg.heading = 0.358380797619;
    msg.sacc = 0.964353217985;
    msg.cacc = 0.0606361096475;

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
    msg.setTimeStamp(0.190626391852);
    msg.setSource(53061U);
    msg.setSourceEntity(27U);
    msg.setDestination(58781U);
    msg.setDestinationEntity(34U);
    msg.itow = 1564763916U;
    msg.lat = 0.53279642303;
    msg.lon = 0.129997276485;
    msg.height_ell = 0.364228856062;
    msg.height_sea = 0.610376071378;
    msg.hacc = 0.581217235658;
    msg.vacc = 0.647272579296;
    msg.vel_n = 0.471767864943;
    msg.vel_e = 0.157569597942;
    msg.vel_d = 0.543878969676;
    msg.speed = 0.188410890345;
    msg.gspeed = 0.0816064410416;
    msg.heading = 0.299533511681;
    msg.sacc = 0.711329811208;
    msg.cacc = 0.578296280723;

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
    msg.setTimeStamp(0.855509376493);
    msg.setSource(52081U);
    msg.setSourceEntity(235U);
    msg.setDestination(44930U);
    msg.setDestinationEntity(207U);
    msg.id = 30U;
    msg.value = 0.394860670462;

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
    msg.setTimeStamp(0.0720403993381);
    msg.setSource(34618U);
    msg.setSourceEntity(241U);
    msg.setDestination(61598U);
    msg.setDestinationEntity(156U);
    msg.id = 177U;
    msg.value = 0.0544996912585;

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
    msg.setTimeStamp(0.216371526316);
    msg.setSource(57655U);
    msg.setSourceEntity(173U);
    msg.setDestination(64858U);
    msg.setDestinationEntity(71U);
    msg.id = 176U;
    msg.value = 0.339649010382;

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
    msg.setTimeStamp(0.281067842135);
    msg.setSource(43513U);
    msg.setSourceEntity(77U);
    msg.setDestination(23980U);
    msg.setDestinationEntity(15U);
    msg.x = 0.425162610073;
    msg.y = 0.362588632326;
    msg.z = 0.203147250555;
    msg.phi = 0.208758445275;
    msg.theta = 0.758994191502;
    msg.psi = 0.62664288456;

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
    msg.setTimeStamp(0.752298896792);
    msg.setSource(57460U);
    msg.setSourceEntity(184U);
    msg.setDestination(35734U);
    msg.setDestinationEntity(179U);
    msg.x = 0.420142020018;
    msg.y = 0.570079270264;
    msg.z = 0.339642497299;
    msg.phi = 0.0334165458382;
    msg.theta = 0.550215359792;
    msg.psi = 0.113253019543;

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
    msg.setTimeStamp(0.478823879357);
    msg.setSource(65050U);
    msg.setSourceEntity(32U);
    msg.setDestination(28822U);
    msg.setDestinationEntity(168U);
    msg.x = 0.500102426059;
    msg.y = 0.343277376079;
    msg.z = 0.295182014295;
    msg.phi = 0.0554658023636;
    msg.theta = 0.609610819686;
    msg.psi = 0.988812051651;

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
    msg.setTimeStamp(0.363107226722);
    msg.setSource(45278U);
    msg.setSourceEntity(0U);
    msg.setDestination(16650U);
    msg.setDestinationEntity(81U);
    msg.beam_width = 0.581248435669;
    msg.beam_height = 0.050227783008;

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
    msg.setTimeStamp(0.770883664826);
    msg.setSource(10818U);
    msg.setSourceEntity(65U);
    msg.setDestination(12260U);
    msg.setDestinationEntity(60U);
    msg.beam_width = 0.107041047458;
    msg.beam_height = 0.283224575269;

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
    msg.setTimeStamp(0.0682312025626);
    msg.setSource(47339U);
    msg.setSourceEntity(250U);
    msg.setDestination(14281U);
    msg.setDestinationEntity(251U);
    msg.beam_width = 0.885185307993;
    msg.beam_height = 0.959565005833;

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
    msg.setTimeStamp(0.559703828409);
    msg.setSource(30765U);
    msg.setSourceEntity(191U);
    msg.setDestination(42396U);
    msg.setDestinationEntity(238U);
    msg.sane = 130U;

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
    msg.setTimeStamp(0.49099553743);
    msg.setSource(12421U);
    msg.setSourceEntity(77U);
    msg.setDestination(41287U);
    msg.setDestinationEntity(165U);
    msg.sane = 114U;

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
    msg.setTimeStamp(0.425354308124);
    msg.setSource(38985U);
    msg.setSourceEntity(147U);
    msg.setDestination(27714U);
    msg.setDestinationEntity(1U);
    msg.sane = 132U;

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
    msg.setTimeStamp(0.698886360119);
    msg.setSource(19104U);
    msg.setSourceEntity(153U);
    msg.setDestination(20184U);
    msg.setDestinationEntity(29U);
    msg.value = 0.0366230004865;

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
    msg.setTimeStamp(0.0251454472711);
    msg.setSource(14270U);
    msg.setSourceEntity(249U);
    msg.setDestination(39852U);
    msg.setDestinationEntity(242U);
    msg.value = 0.404658873996;

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
    msg.setTimeStamp(0.887961900282);
    msg.setSource(22661U);
    msg.setSourceEntity(155U);
    msg.setDestination(40642U);
    msg.setDestinationEntity(189U);
    msg.value = 0.743056346992;

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
    msg.setTimeStamp(0.968177415995);
    msg.setSource(48863U);
    msg.setSourceEntity(176U);
    msg.setDestination(14830U);
    msg.setDestinationEntity(214U);
    msg.value = 0.431465342262;

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
    msg.setTimeStamp(0.954361062667);
    msg.setSource(58842U);
    msg.setSourceEntity(115U);
    msg.setDestination(42445U);
    msg.setDestinationEntity(60U);
    msg.value = 0.0393755741644;

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
    msg.setTimeStamp(0.478179902188);
    msg.setSource(4587U);
    msg.setSourceEntity(110U);
    msg.setDestination(10661U);
    msg.setDestinationEntity(210U);
    msg.value = 0.230039017869;

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
    msg.setTimeStamp(0.290147886082);
    msg.setSource(7578U);
    msg.setSourceEntity(226U);
    msg.setDestination(21105U);
    msg.setDestinationEntity(65U);
    msg.value = 0.874545451336;

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
    msg.setTimeStamp(0.259554529024);
    msg.setSource(54528U);
    msg.setSourceEntity(70U);
    msg.setDestination(6841U);
    msg.setDestinationEntity(80U);
    msg.value = 0.703232499709;

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
    msg.setTimeStamp(0.475345785565);
    msg.setSource(51372U);
    msg.setSourceEntity(4U);
    msg.setDestination(4479U);
    msg.setDestinationEntity(0U);
    msg.value = 0.887941408473;

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
    msg.setTimeStamp(0.495967378215);
    msg.setSource(45884U);
    msg.setSourceEntity(244U);
    msg.setDestination(36522U);
    msg.setDestinationEntity(60U);
    msg.value = 0.511060534515;

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
    msg.setTimeStamp(0.0211643391633);
    msg.setSource(26745U);
    msg.setSourceEntity(218U);
    msg.setDestination(37609U);
    msg.setDestinationEntity(167U);
    msg.value = 0.441673743433;

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
    msg.setTimeStamp(0.0987119193888);
    msg.setSource(43452U);
    msg.setSourceEntity(54U);
    msg.setDestination(11640U);
    msg.setDestinationEntity(239U);
    msg.value = 0.192742112025;

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
    msg.setTimeStamp(0.452607390089);
    msg.setSource(24323U);
    msg.setSourceEntity(191U);
    msg.setDestination(62800U);
    msg.setDestinationEntity(141U);
    msg.value = 0.816374911151;

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
    msg.setTimeStamp(0.125300708982);
    msg.setSource(13753U);
    msg.setSourceEntity(165U);
    msg.setDestination(19773U);
    msg.setDestinationEntity(169U);
    msg.value = 0.377608951044;

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
    msg.setTimeStamp(0.0437690907058);
    msg.setSource(53122U);
    msg.setSourceEntity(8U);
    msg.setDestination(24025U);
    msg.setDestinationEntity(146U);
    msg.value = 0.27983140711;

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
    msg.setTimeStamp(0.583216402107);
    msg.setSource(16190U);
    msg.setSourceEntity(249U);
    msg.setDestination(63600U);
    msg.setDestinationEntity(41U);
    msg.value = 0.182874326854;

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
    msg.setTimeStamp(0.194930159646);
    msg.setSource(34607U);
    msg.setSourceEntity(62U);
    msg.setDestination(43235U);
    msg.setDestinationEntity(245U);
    msg.value = 0.899771174441;

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
    msg.setTimeStamp(0.324404108206);
    msg.setSource(26894U);
    msg.setSourceEntity(176U);
    msg.setDestination(47482U);
    msg.setDestinationEntity(247U);
    msg.value = 0.604572502825;

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
    msg.setTimeStamp(0.120282927381);
    msg.setSource(16667U);
    msg.setSourceEntity(16U);
    msg.setDestination(58155U);
    msg.setDestinationEntity(219U);
    msg.value = 0.958357578669;

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
    msg.setTimeStamp(0.603348722505);
    msg.setSource(44485U);
    msg.setSourceEntity(133U);
    msg.setDestination(64355U);
    msg.setDestinationEntity(90U);
    msg.value = 0.469512228197;

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
    msg.setTimeStamp(0.00844874195084);
    msg.setSource(61621U);
    msg.setSourceEntity(116U);
    msg.setDestination(58005U);
    msg.setDestinationEntity(4U);
    msg.value = 0.277932229473;

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
    msg.setTimeStamp(0.531301796744);
    msg.setSource(55963U);
    msg.setSourceEntity(153U);
    msg.setDestination(19126U);
    msg.setDestinationEntity(107U);
    msg.value = 0.427833136303;

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
    msg.setTimeStamp(0.15971996974);
    msg.setSource(14864U);
    msg.setSourceEntity(24U);
    msg.setDestination(29753U);
    msg.setDestinationEntity(187U);
    msg.value = 0.764824458039;

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
    msg.setTimeStamp(0.510486634126);
    msg.setSource(55242U);
    msg.setSourceEntity(155U);
    msg.setDestination(54973U);
    msg.setDestinationEntity(172U);
    msg.value = 0.856279785582;

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
    msg.setTimeStamp(0.540252756063);
    msg.setSource(20358U);
    msg.setSourceEntity(91U);
    msg.setDestination(40722U);
    msg.setDestinationEntity(178U);
    msg.validity = 56103U;
    msg.type = 10U;
    msg.tow = 483162510U;
    msg.base_lat = 0.0170268976806;
    msg.base_lon = 0.581577756712;
    msg.base_height = 0.46998175036;
    msg.n = 0.869178584366;
    msg.e = 0.146028000159;
    msg.d = 0.500659368829;
    msg.v_n = 0.640611435388;
    msg.v_e = 0.862717975887;
    msg.v_d = 0.124154437413;
    msg.satellites = 33U;
    msg.iar_hyp = 7729U;
    msg.iar_ratio = 0.132594020388;

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
    msg.setTimeStamp(0.489517430643);
    msg.setSource(12040U);
    msg.setSourceEntity(123U);
    msg.setDestination(43542U);
    msg.setDestinationEntity(128U);
    msg.validity = 2981U;
    msg.type = 85U;
    msg.tow = 4016247370U;
    msg.base_lat = 0.612767095317;
    msg.base_lon = 0.465482968814;
    msg.base_height = 0.518136267325;
    msg.n = 0.856794445593;
    msg.e = 0.247427633279;
    msg.d = 0.185567496086;
    msg.v_n = 0.586871234401;
    msg.v_e = 0.650325900637;
    msg.v_d = 0.608823505127;
    msg.satellites = 223U;
    msg.iar_hyp = 58447U;
    msg.iar_ratio = 0.119974888984;

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
    msg.setTimeStamp(0.685308452689);
    msg.setSource(33451U);
    msg.setSourceEntity(139U);
    msg.setDestination(14017U);
    msg.setDestinationEntity(207U);
    msg.validity = 23019U;
    msg.type = 190U;
    msg.tow = 3104477826U;
    msg.base_lat = 0.862261212205;
    msg.base_lon = 0.991732935592;
    msg.base_height = 0.113600849643;
    msg.n = 0.396582012741;
    msg.e = 0.522280010454;
    msg.d = 0.567303970688;
    msg.v_n = 0.389337466131;
    msg.v_e = 0.683443810625;
    msg.v_d = 0.220708432362;
    msg.satellites = 159U;
    msg.iar_hyp = 12826U;
    msg.iar_ratio = 0.47724585806;

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
    msg.setTimeStamp(0.050543815682);
    msg.setSource(42822U);
    msg.setSourceEntity(83U);
    msg.setDestination(13740U);
    msg.setDestinationEntity(166U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.582803650365;
    tmp_msg_0.lon = 0.543255414887;
    tmp_msg_0.height = 0.222645198245;
    tmp_msg_0.x = 0.778413335953;
    tmp_msg_0.y = 0.861952264213;
    tmp_msg_0.z = 0.384397515476;
    tmp_msg_0.phi = 0.960362525713;
    tmp_msg_0.theta = 0.335779004363;
    tmp_msg_0.psi = 0.104189505824;
    tmp_msg_0.u = 0.00277929754218;
    tmp_msg_0.v = 0.994385875773;
    tmp_msg_0.w = 0.897592316248;
    tmp_msg_0.vx = 0.234440523171;
    tmp_msg_0.vy = 0.646228382305;
    tmp_msg_0.vz = 0.845984854517;
    tmp_msg_0.p = 0.30663828703;
    tmp_msg_0.q = 0.531615546597;
    tmp_msg_0.r = 0.942420339653;
    tmp_msg_0.depth = 0.585839162743;
    tmp_msg_0.alt = 0.712046501286;
    msg.state.set(tmp_msg_0);
    msg.type = 23U;

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
    msg.setTimeStamp(0.240070069542);
    msg.setSource(41678U);
    msg.setSourceEntity(123U);
    msg.setDestination(6301U);
    msg.setDestinationEntity(140U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.0712207891468;
    tmp_msg_0.lon = 0.637663009485;
    tmp_msg_0.height = 0.426601288716;
    tmp_msg_0.x = 0.232603399085;
    tmp_msg_0.y = 0.777859081096;
    tmp_msg_0.z = 0.231496508687;
    tmp_msg_0.phi = 0.472187002684;
    tmp_msg_0.theta = 0.567375757291;
    tmp_msg_0.psi = 0.386581337487;
    tmp_msg_0.u = 0.132703622551;
    tmp_msg_0.v = 0.432341961276;
    tmp_msg_0.w = 0.0832472959654;
    tmp_msg_0.vx = 0.866472698029;
    tmp_msg_0.vy = 0.961891498576;
    tmp_msg_0.vz = 0.729439642478;
    tmp_msg_0.p = 0.940777887984;
    tmp_msg_0.q = 0.328299477892;
    tmp_msg_0.r = 0.663168648033;
    tmp_msg_0.depth = 0.314928163301;
    tmp_msg_0.alt = 0.873820255881;
    msg.state.set(tmp_msg_0);
    msg.type = 136U;

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
    msg.setTimeStamp(0.0489869898093);
    msg.setSource(33625U);
    msg.setSourceEntity(108U);
    msg.setDestination(3747U);
    msg.setDestinationEntity(151U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.0592805601547;
    tmp_msg_0.lon = 0.262475443643;
    tmp_msg_0.height = 0.595272458356;
    tmp_msg_0.x = 0.0928361260067;
    tmp_msg_0.y = 0.512385589425;
    tmp_msg_0.z = 0.450205611893;
    tmp_msg_0.phi = 0.113956369785;
    tmp_msg_0.theta = 0.890954025012;
    tmp_msg_0.psi = 0.771659226623;
    tmp_msg_0.u = 0.277944332044;
    tmp_msg_0.v = 0.102326420994;
    tmp_msg_0.w = 0.574466598293;
    tmp_msg_0.vx = 0.21758827086;
    tmp_msg_0.vy = 0.515613806723;
    tmp_msg_0.vz = 0.144312220808;
    tmp_msg_0.p = 0.718358474853;
    tmp_msg_0.q = 0.502984970095;
    tmp_msg_0.r = 0.243856142782;
    tmp_msg_0.depth = 0.949525221865;
    tmp_msg_0.alt = 0.617499922675;
    msg.state.set(tmp_msg_0);
    msg.type = 126U;

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
    msg.setTimeStamp(0.995050149873);
    msg.setSource(17812U);
    msg.setSourceEntity(6U);
    msg.setDestination(32349U);
    msg.setDestinationEntity(13U);
    msg.value = 0.825903160155;

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
    msg.setTimeStamp(0.981106218668);
    msg.setSource(64668U);
    msg.setSourceEntity(36U);
    msg.setDestination(26726U);
    msg.setDestinationEntity(189U);
    msg.value = 0.310193108181;

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
    msg.setTimeStamp(0.0294475243962);
    msg.setSource(21649U);
    msg.setSourceEntity(160U);
    msg.setDestination(33176U);
    msg.setDestinationEntity(197U);
    msg.value = 0.342419046944;

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
    msg.setTimeStamp(0.465135012818);
    msg.setSource(2471U);
    msg.setSourceEntity(7U);
    msg.setDestination(26889U);
    msg.setDestinationEntity(136U);
    msg.value = 0.864717716221;

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
    msg.setTimeStamp(0.57088695047);
    msg.setSource(32489U);
    msg.setSourceEntity(202U);
    msg.setDestination(16354U);
    msg.setDestinationEntity(53U);
    msg.value = 0.536267797619;

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
    msg.setTimeStamp(0.501021060806);
    msg.setSource(37325U);
    msg.setSourceEntity(194U);
    msg.setDestination(14692U);
    msg.setDestinationEntity(213U);
    msg.value = 0.425997286933;

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
    msg.setTimeStamp(0.0743554677876);
    msg.setSource(18499U);
    msg.setSourceEntity(116U);
    msg.setDestination(18583U);
    msg.setDestinationEntity(187U);
    msg.value = 0.323839667324;

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
    msg.setTimeStamp(0.579762098792);
    msg.setSource(57822U);
    msg.setSourceEntity(143U);
    msg.setDestination(58525U);
    msg.setDestinationEntity(144U);
    msg.value = 0.766946757006;

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
    msg.setTimeStamp(0.503612237175);
    msg.setSource(11669U);
    msg.setSourceEntity(91U);
    msg.setDestination(34131U);
    msg.setDestinationEntity(54U);
    msg.value = 0.486691308602;

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
    msg.setTimeStamp(0.766104301868);
    msg.setSource(4695U);
    msg.setSourceEntity(123U);
    msg.setDestination(53207U);
    msg.setDestinationEntity(86U);
    msg.value = 0.0348486801305;

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
    msg.setTimeStamp(0.961978421157);
    msg.setSource(55323U);
    msg.setSourceEntity(73U);
    msg.setDestination(24723U);
    msg.setDestinationEntity(184U);
    msg.value = 0.0101070379158;

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
    msg.setTimeStamp(0.0862727626934);
    msg.setSource(25593U);
    msg.setSourceEntity(92U);
    msg.setDestination(34017U);
    msg.setDestinationEntity(106U);
    msg.value = 0.791838293739;

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
    msg.setTimeStamp(0.610015839358);
    msg.setSource(19294U);
    msg.setSourceEntity(248U);
    msg.setDestination(48378U);
    msg.setDestinationEntity(135U);
    msg.value = 0.693570361058;

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
    msg.setTimeStamp(0.096882512277);
    msg.setSource(19004U);
    msg.setSourceEntity(46U);
    msg.setDestination(17660U);
    msg.setDestinationEntity(112U);
    msg.value = 0.654267285058;

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
    msg.setTimeStamp(0.565273061816);
    msg.setSource(35716U);
    msg.setSourceEntity(52U);
    msg.setDestination(2331U);
    msg.setDestinationEntity(225U);
    msg.value = 0.916211071772;

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
    msg.setTimeStamp(0.765548400186);
    msg.setSource(26019U);
    msg.setSourceEntity(75U);
    msg.setDestination(40873U);
    msg.setDestinationEntity(182U);
    msg.id = 144U;
    msg.zoom = 54U;
    msg.action = 108U;

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
    msg.setTimeStamp(0.345251695595);
    msg.setSource(60858U);
    msg.setSourceEntity(156U);
    msg.setDestination(1075U);
    msg.setDestinationEntity(68U);
    msg.id = 190U;
    msg.zoom = 83U;
    msg.action = 159U;

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
    msg.setTimeStamp(0.528024215188);
    msg.setSource(18273U);
    msg.setSourceEntity(155U);
    msg.setDestination(43464U);
    msg.setDestinationEntity(89U);
    msg.id = 245U;
    msg.zoom = 37U;
    msg.action = 218U;

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
    msg.setTimeStamp(0.33643703033);
    msg.setSource(13206U);
    msg.setSourceEntity(204U);
    msg.setDestination(41944U);
    msg.setDestinationEntity(10U);
    msg.id = 98U;
    msg.value = 0.945670625762;

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
    msg.setTimeStamp(0.107853971538);
    msg.setSource(6255U);
    msg.setSourceEntity(166U);
    msg.setDestination(48869U);
    msg.setDestinationEntity(154U);
    msg.id = 183U;
    msg.value = 0.294205858886;

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
    msg.setTimeStamp(0.933244992006);
    msg.setSource(54914U);
    msg.setSourceEntity(224U);
    msg.setDestination(52738U);
    msg.setDestinationEntity(251U);
    msg.id = 33U;
    msg.value = 0.139008639426;

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
    msg.setTimeStamp(0.462404900161);
    msg.setSource(28646U);
    msg.setSourceEntity(3U);
    msg.setDestination(61458U);
    msg.setDestinationEntity(51U);
    msg.id = 109U;
    msg.value = 0.290066464217;

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
    msg.setTimeStamp(0.850508164218);
    msg.setSource(41685U);
    msg.setSourceEntity(77U);
    msg.setDestination(40213U);
    msg.setDestinationEntity(219U);
    msg.id = 99U;
    msg.value = 0.704614763175;

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
    msg.setTimeStamp(0.379226035243);
    msg.setSource(38523U);
    msg.setSourceEntity(91U);
    msg.setDestination(50817U);
    msg.setDestinationEntity(238U);
    msg.id = 198U;
    msg.value = 0.207889936784;

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
    msg.setTimeStamp(0.0337572702152);
    msg.setSource(13901U);
    msg.setSourceEntity(198U);
    msg.setDestination(7492U);
    msg.setDestinationEntity(64U);
    msg.id = 117U;
    msg.angle = 0.135623208056;

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
    msg.setTimeStamp(0.423729376146);
    msg.setSource(43555U);
    msg.setSourceEntity(33U);
    msg.setDestination(29757U);
    msg.setDestinationEntity(247U);
    msg.id = 112U;
    msg.angle = 0.544146603443;

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
    msg.setTimeStamp(0.421068890946);
    msg.setSource(645U);
    msg.setSourceEntity(10U);
    msg.setDestination(8762U);
    msg.setDestinationEntity(35U);
    msg.id = 216U;
    msg.angle = 0.991428231756;

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
    msg.setTimeStamp(0.448870849502);
    msg.setSource(50029U);
    msg.setSourceEntity(99U);
    msg.setDestination(52732U);
    msg.setDestinationEntity(49U);
    msg.op = 58U;
    msg.actions.assign("MUKHDFSBCKONCRIFBILEBAQKAHGKPJCMOXRQDWXZJHENCCAMJXGPETANBUPUSRHNYHWTGXQYSORLOCEDBOUCNCBTWWKHSMSDMMDTFG");

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
    msg.setTimeStamp(0.590813531081);
    msg.setSource(16062U);
    msg.setSourceEntity(37U);
    msg.setDestination(65303U);
    msg.setDestinationEntity(194U);
    msg.op = 211U;
    msg.actions.assign("XGHRDPDODMRJJTVTXLDIWIRBVXPBIDJDEKEQNZNFSBGYLWHYSFBNZPCHJNACUGNLPZKQRKIJZHTOYWCVPRBCFYOGQURZLYVBJYSBACYTRRQAZPUBWKTSMBYODOJVFSACVQSHNXTWLOJGMXQRRMPHVEASOFEQZGEAMKPAFEGWZWILUGOYMDPUEOWEUKZXHLFQXMVICJYDCKIQXHNDSMLHBAPNSIWFHMCLTEUSTLXXKVGJZWAACNUTT");

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
    msg.setTimeStamp(0.0442062710818);
    msg.setSource(10517U);
    msg.setSourceEntity(84U);
    msg.setDestination(26972U);
    msg.setDestinationEntity(122U);
    msg.op = 52U;
    msg.actions.assign("HFVJDFATZXWDXWTILSHBLATCYDQKKPSEPJVQZBJAZDYGUWMWNWZONWKVCKFEEOMBZETGHHOANOYSJWCETRIKMCPWGGFVIESNNSFVPQGLYUJACQYPVPIGIMJUBGTGFDORYRPQRLSDKNLXUHDUZINYEAKOBCUTDJXORIHECIOVYRMHPHTG");

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
    msg.setTimeStamp(0.102761951883);
    msg.setSource(30553U);
    msg.setSourceEntity(96U);
    msg.setDestination(25103U);
    msg.setDestinationEntity(221U);
    msg.actions.assign("SYDZPFECGDALVNPOMQPSGTRCHVULGJHODUPEBYIISJBSNETHBYAG");

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
    msg.setTimeStamp(0.462667071007);
    msg.setSource(7593U);
    msg.setSourceEntity(133U);
    msg.setDestination(25686U);
    msg.setDestinationEntity(80U);
    msg.actions.assign("EZCJNZDKAMPPBSBTMOVJWSSKQDJAYHWGVHUXNIEPKRQRY");

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
    msg.setTimeStamp(0.994743492429);
    msg.setSource(24210U);
    msg.setSourceEntity(114U);
    msg.setDestination(44520U);
    msg.setDestinationEntity(236U);
    msg.actions.assign("PQZPEYPZGABOOIUOJBFNINHZQTASHFKWEDKMYPZVOBUBXPSFREGUCALTNSLSXQRXYXWRYNZZXSCTYQOKLLJHCVXFKANITVFHRMOZFHKWNCMAEYQZLDOSHYUTPSJXNRBBRERMOZPBVTKUYPDZHXKLVESEV");

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
    msg.setTimeStamp(0.942055490445);
    msg.setSource(10555U);
    msg.setSourceEntity(180U);
    msg.setDestination(61768U);
    msg.setDestinationEntity(137U);
    msg.button = 116U;
    msg.value = 148U;

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
    msg.setTimeStamp(0.597717009063);
    msg.setSource(39369U);
    msg.setSourceEntity(26U);
    msg.setDestination(24047U);
    msg.setDestinationEntity(41U);
    msg.button = 166U;
    msg.value = 229U;

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
    msg.setTimeStamp(0.67485102028);
    msg.setSource(47921U);
    msg.setSourceEntity(148U);
    msg.setDestination(39915U);
    msg.setDestinationEntity(204U);
    msg.button = 250U;
    msg.value = 81U;

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
    msg.setTimeStamp(0.982796984509);
    msg.setSource(62486U);
    msg.setSourceEntity(9U);
    msg.setDestination(46029U);
    msg.setDestinationEntity(113U);
    msg.op = 6U;
    msg.text.assign("RHJCBUGSDXKMWMECBORDEXRXPKTEQMSKCIQWWOHCXDOSFCQFXCBYQQMPPPLETQPRXFSGAZNVZJVOJNYIPUVBWATJRUMUITZBWUJIVAOZRYGJANNLSA");

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
    msg.setTimeStamp(0.587286987372);
    msg.setSource(728U);
    msg.setSourceEntity(214U);
    msg.setDestination(29402U);
    msg.setDestinationEntity(103U);
    msg.op = 14U;
    msg.text.assign("TJYGSRIKEBQCUNEXHMAPQFRBGZVFPGGGDHHSBILLRIJRTIPDNBRTHPVJXPCYYMGDSNSQWXRTIDEAWAWUPZQHLTFECRGXCEFSALWJTKFGSQMBPWXNOWKROXCQIIRWONHVRXZMG");

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
    msg.setTimeStamp(0.827538952327);
    msg.setSource(10269U);
    msg.setSourceEntity(242U);
    msg.setDestination(12754U);
    msg.setDestinationEntity(70U);
    msg.op = 100U;
    msg.text.assign("ITTWJMWPHZXBSPHSKSNRDNMGKTAQZJEIPERQTDLOVFDLIRQIUOCBRFJLEOZZFUON");

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
    msg.setTimeStamp(0.279444620537);
    msg.setSource(7032U);
    msg.setSourceEntity(252U);
    msg.setDestination(22971U);
    msg.setDestinationEntity(165U);
    msg.op = 64U;
    msg.time_remain = 0.701863298127;
    msg.sched_time = 0.0768304428327;

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
    msg.setTimeStamp(0.562774696337);
    msg.setSource(54409U);
    msg.setSourceEntity(227U);
    msg.setDestination(32795U);
    msg.setDestinationEntity(245U);
    msg.op = 252U;
    msg.time_remain = 0.987304902413;
    msg.sched_time = 0.397798384882;

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
    msg.setTimeStamp(0.063860795158);
    msg.setSource(18294U);
    msg.setSourceEntity(207U);
    msg.setDestination(10223U);
    msg.setDestinationEntity(59U);
    msg.op = 70U;
    msg.time_remain = 0.82765396139;
    msg.sched_time = 0.168841614551;

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
    msg.setTimeStamp(0.932984928796);
    msg.setSource(27926U);
    msg.setSourceEntity(63U);
    msg.setDestination(57456U);
    msg.setDestinationEntity(97U);
    msg.name.assign("CJWUYVZBMMRTXQDTLMZVEDQUSXNFDJOGYLFXPHAAFKTXPPNNJGXPUKCLBETVJBBIBFGFKDPFNLNNFOPMAXCIWFKWUZEVVEAFAFUWYBCRM");
    msg.op = 111U;
    msg.sched_time = 0.864332725111;

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
    msg.setTimeStamp(0.523802867013);
    msg.setSource(57602U);
    msg.setSourceEntity(161U);
    msg.setDestination(49129U);
    msg.setDestinationEntity(240U);
    msg.name.assign("IMTDLGOWOBHSNIRCKJWKUNODTKUHNCBPFSLJGXOBXVAFSJSXGXCNUPGBAYEPOIGHSCZHMNKSMZEYGQOCWDOFLRBJHVJVEWXVMIXMZTQGNLGLKSQNNEZOTNCKCROVZYRYKIFFEETFQQOUDQPWIAYSJSHZLZJHVUVLGRVVQUXZJDCKNTFWUWLRDKAEVUAIMQEWZRPK");
    msg.op = 141U;
    msg.sched_time = 0.113929133679;

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
    msg.setTimeStamp(0.206132781389);
    msg.setSource(37986U);
    msg.setSourceEntity(68U);
    msg.setDestination(63200U);
    msg.setDestinationEntity(92U);
    msg.name.assign("AKIQSFMSNTWHBCDJCEURUDLOCZABAWHTBJNXCGNZMWDQVXBTRX");
    msg.op = 7U;
    msg.sched_time = 0.593391106014;

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
    msg.setTimeStamp(0.478879017858);
    msg.setSource(8789U);
    msg.setSourceEntity(175U);
    msg.setDestination(12277U);
    msg.setDestinationEntity(162U);

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
    msg.setTimeStamp(0.656373798084);
    msg.setSource(3978U);
    msg.setSourceEntity(74U);
    msg.setDestination(9313U);
    msg.setDestinationEntity(185U);

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
    msg.setTimeStamp(0.35258747516);
    msg.setSource(11113U);
    msg.setSourceEntity(84U);
    msg.setDestination(31825U);
    msg.setDestinationEntity(209U);

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
    msg.setTimeStamp(0.633590611202);
    msg.setSource(59958U);
    msg.setSourceEntity(167U);
    msg.setDestination(41923U);
    msg.setDestinationEntity(102U);
    msg.name.assign("FNBGTEGRKRVX");
    msg.state = 169U;

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
    msg.setTimeStamp(0.220996856742);
    msg.setSource(7550U);
    msg.setSourceEntity(120U);
    msg.setDestination(16638U);
    msg.setDestinationEntity(197U);
    msg.name.assign("ABTZAUZJBGZIDXEXWFQJPWADLUKABCGLUMPUMCFSQMYANRGHRMZHHYNMNHRN");
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
    msg.setTimeStamp(0.571366649535);
    msg.setSource(55116U);
    msg.setSourceEntity(126U);
    msg.setDestination(40997U);
    msg.setDestinationEntity(211U);
    msg.name.assign("RTPFEOIPCGUTOOFJXRTLUMSPFUJJMJJYMVAUKEOPKKOZSYAKUMGYEDCQXHIBKAEIMPFUFYBYTIAWGXRBBWAEDQZVXFRIMQWAVHDNSKKLDTFUQARRYSLKMQDLGWFRMQJANBWSVTLNVCBNWVCYYRZXYCZHDEZIRSWPHXXIGZTXVTVELGSNIDSWBPLHGNJQDERGNQJUIXGOKPCYHCZTIZNVOBNFHMLCCJWACXZ");
    msg.state = 100U;

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
    msg.setTimeStamp(0.173742496095);
    msg.setSource(37734U);
    msg.setSourceEntity(158U);
    msg.setDestination(55425U);
    msg.setDestinationEntity(233U);
    msg.name.assign("EYUOSMRFVDHEDXTWKJEBSIBPJFBC");
    msg.value = 223U;

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
    msg.setTimeStamp(0.302570535724);
    msg.setSource(4040U);
    msg.setSourceEntity(235U);
    msg.setDestination(11692U);
    msg.setDestinationEntity(206U);
    msg.name.assign("BJUEMBROVGIFLJYDAWCLHQGCXOEQHDREWEWSGDNDLKJVKQVRVIOKQOBXULYWKLSTNPHPRJGXGIZJUOHFMAZPMZLTYEECDJTDJBXILQKBZPUZAGPSNGPVBFXEFMUQQUYABGYNDSAFTNVWXX");
    msg.value = 23U;

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
    msg.setTimeStamp(0.935503505713);
    msg.setSource(6242U);
    msg.setSourceEntity(212U);
    msg.setDestination(64199U);
    msg.setDestinationEntity(232U);
    msg.name.assign("VZKFILVGGWLOKICZJACVZMRWMFZHMSBDQSPORNLJUZYNSQTNOPLFWTEAFPLTUFIXILDNBOFSHAUYTQEPPMNRTLLKWOBVDMSMOHRQSACNHWODYDTETOEGDJDTYUXKVQKYBVGLTSULFTPPRZXADIYPFDZBYWHJAVQCKORSGXUJCYGINXUVCWXIYXMBUEBCHJMXGQQBKNBAYEEJSADQNRW");
    msg.value = 64U;

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
    msg.setTimeStamp(0.333886008169);
    msg.setSource(60085U);
    msg.setSourceEntity(9U);
    msg.setDestination(51242U);
    msg.setDestinationEntity(135U);
    msg.name.assign("JLOKQAGWKRWAXYXPADRQAJZFXXPJGINNVYMLYWWFTFDTXWUXTCMEGCPIQWMYZKFZREPNECRTSOYLECVRALQDSHQUDTPNDUIMHUBQBTZOKPOCNNRVMTKH");

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
    msg.setTimeStamp(0.342127018254);
    msg.setSource(26397U);
    msg.setSourceEntity(245U);
    msg.setDestination(19574U);
    msg.setDestinationEntity(65U);
    msg.name.assign("XDZAPNBJTDVNFSSWEDXAVUNOARBVJONGFSSPPWEOSNUTQDCEPRFRKZQQSELSIBXAQSKQWCDITKRVCLWYMZDDZPYSZBXUQLGGKILHVZKOACUXPAIHOFWTRNGLAMIJBTUKGIJD");

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
    msg.setTimeStamp(0.90995195473);
    msg.setSource(23998U);
    msg.setSourceEntity(51U);
    msg.setDestination(30785U);
    msg.setDestinationEntity(239U);
    msg.name.assign("MKJSDDPTXOZCFUYWMIGCDTIPNAHZMXEKJFEDYYLJ");

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
    msg.setTimeStamp(0.125587741315);
    msg.setSource(26313U);
    msg.setSourceEntity(106U);
    msg.setDestination(3908U);
    msg.setDestinationEntity(59U);
    msg.name.assign("MLIFZRTVYXHCOMICTLDKJSDNSAVROQWNRHTTMEHWMBZYZITEUVIATZZPRLCGQZELBYHCERQBIUXJJJPSQHUPDDOONM");
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
    msg.setTimeStamp(0.317763310193);
    msg.setSource(52582U);
    msg.setSourceEntity(40U);
    msg.setDestination(44072U);
    msg.setDestinationEntity(188U);
    msg.name.assign("AJUNTVLGSKLOBNMXSCLWCCICYOZSYPJLBVMJFYUNKVQYGGWHJJTIZSLIGQIEXXHACWCXYTQJEHLEJQGXPAAFMHACMWFHINOCYJVDKAUKXEPTMGWYFYVNBRLTZFFERXNCJMSBXYDAPWRGUZVRUWQPDGSASQKSZOZDOHNPONPDXLHPDQZKFIKGZRKEFMUNRALCSJZHERTO");
    msg.value = 175U;

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
    msg.setTimeStamp(0.0457653732725);
    msg.setSource(23894U);
    msg.setSourceEntity(175U);
    msg.setDestination(34216U);
    msg.setDestinationEntity(66U);
    msg.name.assign("FRACWHGUAGHGILTSXNUXRJTCXALDUGETKZITXWDUYNZPAFORQKFRSNGYBHYFEKBVRNZQMRTWWWGMIODNRQKTYYEFJYDMFPCPKVLQZEHTPOIIXCHYBLROZFSMUJVAJSMMBUETMLLWWQSYYDUPZPJHBCNAKJWJIIVCCHWLVPTOPXQKZBMNOPSQJOALKCRGVADEXCTVQZZDVAMUDDGOXBFOSEEFJLOMNYHBSXKQWBUJCPSQZHFG");
    msg.value = 11U;

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
    msg.setTimeStamp(0.934967223002);
    msg.setSource(6332U);
    msg.setSourceEntity(154U);
    msg.setDestination(54277U);
    msg.setDestinationEntity(70U);
    msg.id = 36U;
    msg.period = 24712465U;
    msg.duty_cycle = 3602067344U;

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
    msg.setTimeStamp(0.0730950936881);
    msg.setSource(6141U);
    msg.setSourceEntity(149U);
    msg.setDestination(33469U);
    msg.setDestinationEntity(157U);
    msg.id = 242U;
    msg.period = 2207526916U;
    msg.duty_cycle = 3823177881U;

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
    msg.setTimeStamp(0.0698651747497);
    msg.setSource(39795U);
    msg.setSourceEntity(126U);
    msg.setDestination(14829U);
    msg.setDestinationEntity(11U);
    msg.id = 203U;
    msg.period = 1600481506U;
    msg.duty_cycle = 2901724607U;

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
    msg.setTimeStamp(0.249426782712);
    msg.setSource(41856U);
    msg.setSourceEntity(37U);
    msg.setDestination(52294U);
    msg.setDestinationEntity(122U);
    msg.id = 26U;
    msg.period = 1275293664U;
    msg.duty_cycle = 3269603045U;

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
    msg.setTimeStamp(0.292416479984);
    msg.setSource(8014U);
    msg.setSourceEntity(131U);
    msg.setDestination(11755U);
    msg.setDestinationEntity(110U);
    msg.id = 139U;
    msg.period = 943257538U;
    msg.duty_cycle = 3113616538U;

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
    msg.setTimeStamp(0.536369408286);
    msg.setSource(42623U);
    msg.setSourceEntity(205U);
    msg.setDestination(12153U);
    msg.setDestinationEntity(113U);
    msg.id = 226U;
    msg.period = 2306805957U;
    msg.duty_cycle = 672858162U;

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
    msg.setTimeStamp(0.508275835858);
    msg.setSource(14903U);
    msg.setSourceEntity(238U);
    msg.setDestination(55401U);
    msg.setDestinationEntity(123U);
    msg.lat = 0.0141660176237;
    msg.lon = 0.727733230928;
    msg.height = 0.0728781080629;
    msg.x = 0.187370586743;
    msg.y = 0.464478674704;
    msg.z = 0.945119146374;
    msg.phi = 0.651279427178;
    msg.theta = 0.304965962952;
    msg.psi = 0.530375676165;
    msg.u = 0.0406353012476;
    msg.v = 0.932983225681;
    msg.w = 0.0391763895975;
    msg.vx = 0.826267117303;
    msg.vy = 0.549674591924;
    msg.vz = 0.131786782933;
    msg.p = 0.797373259049;
    msg.q = 0.879354232802;
    msg.r = 0.927161581383;
    msg.depth = 0.394295652938;
    msg.alt = 0.818466529023;

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
    msg.setTimeStamp(0.100800251709);
    msg.setSource(34355U);
    msg.setSourceEntity(111U);
    msg.setDestination(59475U);
    msg.setDestinationEntity(84U);
    msg.lat = 0.249844479699;
    msg.lon = 0.0549754746498;
    msg.height = 0.696395728246;
    msg.x = 0.0861532151781;
    msg.y = 0.988669322145;
    msg.z = 0.745907212055;
    msg.phi = 0.296415020964;
    msg.theta = 0.800607015171;
    msg.psi = 0.378207465906;
    msg.u = 0.199688120562;
    msg.v = 0.967361525497;
    msg.w = 0.577592409488;
    msg.vx = 0.186222730107;
    msg.vy = 0.97905466556;
    msg.vz = 0.993031789166;
    msg.p = 0.00332943030326;
    msg.q = 0.554513503293;
    msg.r = 0.817818772493;
    msg.depth = 0.708528278535;
    msg.alt = 0.662320996938;

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
    msg.setTimeStamp(0.816711951991);
    msg.setSource(4260U);
    msg.setSourceEntity(169U);
    msg.setDestination(60070U);
    msg.setDestinationEntity(98U);
    msg.lat = 0.458628255487;
    msg.lon = 0.523396259454;
    msg.height = 0.785991973195;
    msg.x = 0.987677012444;
    msg.y = 0.221406552983;
    msg.z = 0.728632174513;
    msg.phi = 0.695679132729;
    msg.theta = 0.140236037739;
    msg.psi = 0.340206538941;
    msg.u = 0.434049621086;
    msg.v = 0.842860385521;
    msg.w = 0.69862663918;
    msg.vx = 0.992017155144;
    msg.vy = 0.261502216168;
    msg.vz = 0.604628825489;
    msg.p = 0.195003239925;
    msg.q = 0.939747640962;
    msg.r = 0.203199485731;
    msg.depth = 0.760055929604;
    msg.alt = 0.137077811946;

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
    msg.setTimeStamp(0.650111851986);
    msg.setSource(3768U);
    msg.setSourceEntity(5U);
    msg.setDestination(38592U);
    msg.setDestinationEntity(208U);
    msg.x = 0.248966756791;
    msg.y = 0.543180128035;
    msg.z = 0.13486909363;

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
    msg.setTimeStamp(0.702636687745);
    msg.setSource(55203U);
    msg.setSourceEntity(13U);
    msg.setDestination(24385U);
    msg.setDestinationEntity(97U);
    msg.x = 0.299005719305;
    msg.y = 0.991555559618;
    msg.z = 0.0558435397488;

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
    msg.setTimeStamp(0.738504901107);
    msg.setSource(62568U);
    msg.setSourceEntity(187U);
    msg.setDestination(65468U);
    msg.setDestinationEntity(24U);
    msg.x = 0.661291060122;
    msg.y = 0.281217796911;
    msg.z = 0.579484162597;

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
    msg.setTimeStamp(0.692986938829);
    msg.setSource(61880U);
    msg.setSourceEntity(222U);
    msg.setDestination(40187U);
    msg.setDestinationEntity(162U);
    msg.value = 0.343729949589;

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
    msg.setTimeStamp(0.437193809595);
    msg.setSource(25431U);
    msg.setSourceEntity(122U);
    msg.setDestination(1444U);
    msg.setDestinationEntity(228U);
    msg.value = 0.872289708735;

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
    msg.setTimeStamp(0.756035713269);
    msg.setSource(14025U);
    msg.setSourceEntity(50U);
    msg.setDestination(34022U);
    msg.setDestinationEntity(201U);
    msg.value = 0.610850798312;

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
    msg.setTimeStamp(0.189142881094);
    msg.setSource(29696U);
    msg.setSourceEntity(52U);
    msg.setDestination(51073U);
    msg.setDestinationEntity(130U);
    msg.value = 0.392900427541;

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
    msg.setTimeStamp(0.486039202272);
    msg.setSource(43139U);
    msg.setSourceEntity(241U);
    msg.setDestination(51611U);
    msg.setDestinationEntity(32U);
    msg.value = 0.75843317052;

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
    msg.setTimeStamp(0.418555334727);
    msg.setSource(42960U);
    msg.setSourceEntity(2U);
    msg.setDestination(64607U);
    msg.setDestinationEntity(127U);
    msg.value = 0.179378875351;

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
    msg.setTimeStamp(0.768338497045);
    msg.setSource(51507U);
    msg.setSourceEntity(213U);
    msg.setDestination(42881U);
    msg.setDestinationEntity(137U);
    msg.x = 0.58402273327;
    msg.y = 0.222212636739;
    msg.z = 0.0889768622269;
    msg.phi = 0.542655596378;
    msg.theta = 0.557293792863;
    msg.psi = 0.174948372653;
    msg.p = 0.0230419023053;
    msg.q = 0.720993710582;
    msg.r = 0.740897163521;
    msg.u = 0.111318934695;
    msg.v = 0.978390302992;
    msg.w = 0.185134420523;
    msg.bias_psi = 0.0221615931904;
    msg.bias_r = 0.059874981393;

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
    msg.setTimeStamp(0.899615487307);
    msg.setSource(6700U);
    msg.setSourceEntity(187U);
    msg.setDestination(21838U);
    msg.setDestinationEntity(122U);
    msg.x = 0.540999816212;
    msg.y = 0.644089263617;
    msg.z = 0.539814258329;
    msg.phi = 0.508905701943;
    msg.theta = 0.290595078787;
    msg.psi = 0.668065236855;
    msg.p = 0.843225524483;
    msg.q = 0.722956569458;
    msg.r = 0.926184719358;
    msg.u = 0.96882702506;
    msg.v = 0.641424117119;
    msg.w = 0.822651335163;
    msg.bias_psi = 0.215670937144;
    msg.bias_r = 0.457340848393;

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
    msg.setTimeStamp(0.687833418208);
    msg.setSource(28095U);
    msg.setSourceEntity(183U);
    msg.setDestination(16691U);
    msg.setDestinationEntity(137U);
    msg.x = 0.692553458404;
    msg.y = 0.897613794733;
    msg.z = 0.0577349187858;
    msg.phi = 0.137756416145;
    msg.theta = 0.814791368826;
    msg.psi = 0.587742739803;
    msg.p = 0.371559177614;
    msg.q = 0.565187987032;
    msg.r = 0.684863649165;
    msg.u = 0.0249017823926;
    msg.v = 0.346531482411;
    msg.w = 0.805048465306;
    msg.bias_psi = 0.476993330938;
    msg.bias_r = 0.96826562201;

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
    msg.setTimeStamp(0.341552095242);
    msg.setSource(57031U);
    msg.setSourceEntity(97U);
    msg.setDestination(41939U);
    msg.setDestinationEntity(47U);
    msg.bias_psi = 0.0886263452952;
    msg.bias_r = 0.131813138946;
    msg.cog = 0.702080957972;
    msg.cyaw = 0.330305506379;
    msg.gps_rej_level = 0.524883938037;
    msg.lbl_rej_level = 0.806268667277;
    msg.custom_x = 0.650086416437;
    msg.custom_y = 0.420584301081;
    msg.custom_z = 0.113210246188;

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
    msg.setTimeStamp(0.847213207041);
    msg.setSource(33648U);
    msg.setSourceEntity(92U);
    msg.setDestination(63674U);
    msg.setDestinationEntity(84U);
    msg.bias_psi = 0.288417341776;
    msg.bias_r = 0.535598274186;
    msg.cog = 0.466115735723;
    msg.cyaw = 0.418134270602;
    msg.gps_rej_level = 0.54414258151;
    msg.lbl_rej_level = 0.697469433526;
    msg.custom_x = 0.0264995588857;
    msg.custom_y = 0.430320244714;
    msg.custom_z = 0.252350818791;

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
    msg.setTimeStamp(0.673291231422);
    msg.setSource(39552U);
    msg.setSourceEntity(208U);
    msg.setDestination(20442U);
    msg.setDestinationEntity(41U);
    msg.bias_psi = 0.0809260492317;
    msg.bias_r = 0.479784200048;
    msg.cog = 0.736632974354;
    msg.cyaw = 0.312949098273;
    msg.gps_rej_level = 0.553945274105;
    msg.lbl_rej_level = 0.50001012987;
    msg.custom_x = 0.792761484087;
    msg.custom_y = 0.803512883507;
    msg.custom_z = 0.673075487519;

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
    msg.setTimeStamp(0.655140615048);
    msg.setSource(28683U);
    msg.setSourceEntity(162U);
    msg.setDestination(53413U);
    msg.setDestinationEntity(238U);
    msg.utc_time = 0.893511201762;
    msg.reason = 112U;

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
    msg.setTimeStamp(0.0902290522763);
    msg.setSource(38408U);
    msg.setSourceEntity(184U);
    msg.setDestination(46884U);
    msg.setDestinationEntity(174U);
    msg.utc_time = 0.406914077018;
    msg.reason = 247U;

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
    msg.setTimeStamp(0.909385058269);
    msg.setSource(22334U);
    msg.setSourceEntity(63U);
    msg.setDestination(46295U);
    msg.setDestinationEntity(107U);
    msg.utc_time = 0.892032113568;
    msg.reason = 38U;

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
    msg.setTimeStamp(0.683543063782);
    msg.setSource(24334U);
    msg.setSourceEntity(182U);
    msg.setDestination(46366U);
    msg.setDestinationEntity(205U);
    msg.id = 187U;
    msg.range = 0.411649202288;
    msg.acceptance = 78U;

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
    msg.setTimeStamp(0.370911441503);
    msg.setSource(65210U);
    msg.setSourceEntity(150U);
    msg.setDestination(4484U);
    msg.setDestinationEntity(43U);
    msg.id = 248U;
    msg.range = 0.12959246156;
    msg.acceptance = 108U;

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
    msg.setTimeStamp(0.771501283772);
    msg.setSource(37126U);
    msg.setSourceEntity(253U);
    msg.setDestination(58451U);
    msg.setDestinationEntity(242U);
    msg.id = 181U;
    msg.range = 0.745110867841;
    msg.acceptance = 87U;

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
    msg.setTimeStamp(0.303476355818);
    msg.setSource(10897U);
    msg.setSourceEntity(219U);
    msg.setDestination(43566U);
    msg.setDestinationEntity(94U);
    msg.type = 7U;
    msg.reason = 196U;
    msg.value = 0.585925771299;
    msg.timestep = 0.605245069629;

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
    msg.setTimeStamp(0.627584874498);
    msg.setSource(19190U);
    msg.setSourceEntity(185U);
    msg.setDestination(64526U);
    msg.setDestinationEntity(237U);
    msg.type = 232U;
    msg.reason = 218U;
    msg.value = 0.166841505668;
    msg.timestep = 0.214015131593;

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
    msg.setTimeStamp(0.68933891976);
    msg.setSource(32528U);
    msg.setSourceEntity(216U);
    msg.setDestination(49162U);
    msg.setDestinationEntity(128U);
    msg.type = 77U;
    msg.reason = 190U;
    msg.value = 0.331519051243;
    msg.timestep = 0.899427706149;

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
    msg.setTimeStamp(0.905035250032);
    msg.setSource(22511U);
    msg.setSourceEntity(96U);
    msg.setDestination(4940U);
    msg.setDestinationEntity(64U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("LATKMSRODBDDTKDFSGEEQDFTIQUWPINDPYBMFXFUIXMOQECRWXMPCNNWIQMLMGZYJFGVJRJDYJGEYNUEHKOVGNQBBAUBERGPJPHZQNFIVNHZOSCQVQYUAPULQWFOPLXTLVZWWHTOJALOLGBJSYLEXKAAZFWYKYWMSBTUZLGDNSOHKGCARKEAJXHWTIZCVISONMMYIVJKJSLFRQXCYHSAEPWDZPAXKRNOKPCXUT");
    tmp_msg_0.lat = 0.0590572378713;
    tmp_msg_0.lon = 0.354811730802;
    tmp_msg_0.depth = 0.323110445395;
    tmp_msg_0.query_channel = 122U;
    tmp_msg_0.reply_channel = 151U;
    tmp_msg_0.transponder_delay = 227U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.235384411885;
    msg.y = 0.61857287404;
    msg.var_x = 0.601688140125;
    msg.var_y = 0.151935110606;
    msg.distance = 0.361236701476;

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
    msg.setTimeStamp(0.419530064161);
    msg.setSource(60501U);
    msg.setSourceEntity(214U);
    msg.setDestination(63035U);
    msg.setDestinationEntity(249U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("OUIIJFRSVVVXHIAJZELFBVFATAKHYNNBIZBVWCNGUZBHQDVIAOKGQYQUFWFVEGPUUQOEQZSGMMJIRJWOHQJJBBNHHRZKEEDGLRPSDYP");
    tmp_msg_0.lat = 0.999222159591;
    tmp_msg_0.lon = 0.53708478744;
    tmp_msg_0.depth = 0.537877993687;
    tmp_msg_0.query_channel = 230U;
    tmp_msg_0.reply_channel = 7U;
    tmp_msg_0.transponder_delay = 228U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.451201023003;
    msg.y = 0.7526669428;
    msg.var_x = 0.232396069879;
    msg.var_y = 0.713101371075;
    msg.distance = 0.828596189168;

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
    msg.setTimeStamp(0.124816968503);
    msg.setSource(43921U);
    msg.setSourceEntity(208U);
    msg.setDestination(62824U);
    msg.setDestinationEntity(47U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("OWACSZLJZGNLOBFCQQJSROFYBMCQYHXXZVYMJYPOYALNGLZTKYFXDCPFEPXDUAMGLDWWMUUACWNZGFFBIDRANCIKIRWTXVNLEUIBLMXSESDUBERYNAPQZFNGJQMWHVOMRXGJAKJQZWO");
    tmp_msg_0.lat = 0.52814279288;
    tmp_msg_0.lon = 0.315003116822;
    tmp_msg_0.depth = 0.519997633177;
    tmp_msg_0.query_channel = 131U;
    tmp_msg_0.reply_channel = 178U;
    tmp_msg_0.transponder_delay = 47U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.751361738363;
    msg.y = 0.0817237571974;
    msg.var_x = 0.813543652726;
    msg.var_y = 0.520127246743;
    msg.distance = 0.79720963081;

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
    msg.setTimeStamp(0.81455301728);
    msg.setSource(50408U);
    msg.setSourceEntity(44U);
    msg.setDestination(11883U);
    msg.setDestinationEntity(145U);
    msg.state = 27U;

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
    msg.setTimeStamp(0.721416947139);
    msg.setSource(32159U);
    msg.setSourceEntity(51U);
    msg.setDestination(32975U);
    msg.setDestinationEntity(227U);
    msg.state = 133U;

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
    msg.setTimeStamp(0.144984600472);
    msg.setSource(23769U);
    msg.setSourceEntity(222U);
    msg.setDestination(1529U);
    msg.setDestinationEntity(164U);
    msg.state = 201U;

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
    msg.setTimeStamp(0.398777028908);
    msg.setSource(32029U);
    msg.setSourceEntity(85U);
    msg.setDestination(3430U);
    msg.setDestinationEntity(211U);
    msg.x = 0.796173703333;
    msg.y = 0.313795822947;
    msg.z = 0.907275444091;

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
    msg.setTimeStamp(0.967694074814);
    msg.setSource(11476U);
    msg.setSourceEntity(116U);
    msg.setDestination(32332U);
    msg.setDestinationEntity(215U);
    msg.x = 0.287742125025;
    msg.y = 0.543730007527;
    msg.z = 0.0577596713295;

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
    msg.setTimeStamp(0.774723623751);
    msg.setSource(62050U);
    msg.setSourceEntity(93U);
    msg.setDestination(14636U);
    msg.setDestinationEntity(168U);
    msg.x = 0.0221835071995;
    msg.y = 0.733679703119;
    msg.z = 0.140370780507;

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
    msg.setTimeStamp(0.178079531023);
    msg.setSource(54241U);
    msg.setSourceEntity(51U);
    msg.setDestination(27845U);
    msg.setDestinationEntity(92U);
    msg.va = 0.260791532161;
    msg.aoa = 0.614831468898;
    msg.ssa = 0.442362379992;

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
    msg.setTimeStamp(0.226261676508);
    msg.setSource(40970U);
    msg.setSourceEntity(246U);
    msg.setDestination(17089U);
    msg.setDestinationEntity(88U);
    msg.va = 0.974554043686;
    msg.aoa = 0.896215769329;
    msg.ssa = 0.993684300536;

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
    msg.setTimeStamp(0.875847235106);
    msg.setSource(27925U);
    msg.setSourceEntity(252U);
    msg.setDestination(48714U);
    msg.setDestinationEntity(81U);
    msg.va = 0.0559184242493;
    msg.aoa = 0.1291111276;
    msg.ssa = 0.0913047672898;

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
    msg.setTimeStamp(0.742307501491);
    msg.setSource(43555U);
    msg.setSourceEntity(159U);
    msg.setDestination(48773U);
    msg.setDestinationEntity(90U);
    msg.value = 0.184761910369;
    msg.off = 0.195496798998;

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
    msg.setTimeStamp(0.652659499184);
    msg.setSource(12355U);
    msg.setSourceEntity(143U);
    msg.setDestination(12847U);
    msg.setDestinationEntity(132U);
    msg.value = 0.878898486859;
    msg.off = 0.733967846048;

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
    msg.setTimeStamp(0.121282624149);
    msg.setSource(29993U);
    msg.setSourceEntity(140U);
    msg.setDestination(54495U);
    msg.setDestinationEntity(48U);
    msg.value = 0.0703068774414;
    msg.off = 0.705807666945;

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
    msg.setTimeStamp(0.751519780973);
    msg.setSource(2128U);
    msg.setSourceEntity(121U);
    msg.setDestination(4796U);
    msg.setDestinationEntity(7U);
    msg.value = 0.882115011056;
    msg.z_units = 106U;

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
    msg.setTimeStamp(0.547997924978);
    msg.setSource(21047U);
    msg.setSourceEntity(200U);
    msg.setDestination(49822U);
    msg.setDestinationEntity(135U);
    msg.value = 0.764743459813;
    msg.z_units = 170U;

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
    msg.setTimeStamp(0.595565483328);
    msg.setSource(1215U);
    msg.setSourceEntity(11U);
    msg.setDestination(38406U);
    msg.setDestinationEntity(234U);
    msg.value = 0.917606737867;
    msg.z_units = 251U;

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
    msg.setTimeStamp(0.170966716485);
    msg.setSource(58820U);
    msg.setSourceEntity(31U);
    msg.setDestination(47515U);
    msg.setDestinationEntity(85U);
    msg.value = 0.709839400397;
    msg.speed_units = 101U;

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
    msg.setTimeStamp(0.0206704643761);
    msg.setSource(52751U);
    msg.setSourceEntity(190U);
    msg.setDestination(57143U);
    msg.setDestinationEntity(201U);
    msg.value = 0.224319060942;
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
    msg.setTimeStamp(0.0158537405346);
    msg.setSource(46384U);
    msg.setSourceEntity(88U);
    msg.setDestination(1740U);
    msg.setDestinationEntity(198U);
    msg.value = 0.275651575836;
    msg.speed_units = 243U;

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
    msg.setTimeStamp(0.971058528901);
    msg.setSource(25382U);
    msg.setSourceEntity(32U);
    msg.setDestination(10265U);
    msg.setDestinationEntity(235U);
    msg.value = 0.816548473372;

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
    msg.setTimeStamp(0.154019708574);
    msg.setSource(62277U);
    msg.setSourceEntity(22U);
    msg.setDestination(33766U);
    msg.setDestinationEntity(230U);
    msg.value = 0.528407594523;

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
    msg.setTimeStamp(0.709666403858);
    msg.setSource(24327U);
    msg.setSourceEntity(77U);
    msg.setDestination(43820U);
    msg.setDestinationEntity(161U);
    msg.value = 0.959556295482;

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
    msg.setTimeStamp(0.920046012791);
    msg.setSource(25632U);
    msg.setSourceEntity(38U);
    msg.setDestination(7763U);
    msg.setDestinationEntity(116U);
    msg.value = 0.966347227101;

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
    msg.setTimeStamp(0.391615048012);
    msg.setSource(8040U);
    msg.setSourceEntity(169U);
    msg.setDestination(58209U);
    msg.setDestinationEntity(180U);
    msg.value = 0.891336025363;

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
    msg.setTimeStamp(0.419073037597);
    msg.setSource(4973U);
    msg.setSourceEntity(240U);
    msg.setDestination(16578U);
    msg.setDestinationEntity(237U);
    msg.value = 0.238923879087;

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
    msg.setTimeStamp(0.0274699892467);
    msg.setSource(54525U);
    msg.setSourceEntity(165U);
    msg.setDestination(37788U);
    msg.setDestinationEntity(174U);
    msg.value = 0.802513660025;

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
    msg.setTimeStamp(0.113641992586);
    msg.setSource(16006U);
    msg.setSourceEntity(226U);
    msg.setDestination(8595U);
    msg.setDestinationEntity(178U);
    msg.value = 0.707568257117;

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
    msg.setTimeStamp(0.654774228495);
    msg.setSource(55106U);
    msg.setSourceEntity(47U);
    msg.setDestination(28115U);
    msg.setDestinationEntity(9U);
    msg.value = 0.952768060869;

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
    msg.setTimeStamp(0.317624272124);
    msg.setSource(10708U);
    msg.setSourceEntity(153U);
    msg.setDestination(34676U);
    msg.setDestinationEntity(29U);
    msg.path_ref = 1886896485U;
    msg.start_lat = 0.745766613833;
    msg.start_lon = 0.996404309212;
    msg.start_z = 0.768011592941;
    msg.start_z_units = 54U;
    msg.end_lat = 0.685753065743;
    msg.end_lon = 0.172674089008;
    msg.end_z = 0.021302123033;
    msg.end_z_units = 91U;
    msg.speed = 0.786217038028;
    msg.speed_units = 237U;
    msg.lradius = 0.360862549796;
    msg.flags = 8U;

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
    msg.setTimeStamp(0.247082844169);
    msg.setSource(32775U);
    msg.setSourceEntity(114U);
    msg.setDestination(53697U);
    msg.setDestinationEntity(57U);
    msg.path_ref = 1051453924U;
    msg.start_lat = 0.264168551908;
    msg.start_lon = 0.439344212392;
    msg.start_z = 0.650490518472;
    msg.start_z_units = 251U;
    msg.end_lat = 0.390878234323;
    msg.end_lon = 0.564676005136;
    msg.end_z = 0.330606353529;
    msg.end_z_units = 214U;
    msg.speed = 0.899274295988;
    msg.speed_units = 156U;
    msg.lradius = 0.771463536145;
    msg.flags = 215U;

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
    msg.setTimeStamp(0.564504898843);
    msg.setSource(34413U);
    msg.setSourceEntity(55U);
    msg.setDestination(37370U);
    msg.setDestinationEntity(24U);
    msg.path_ref = 1947992528U;
    msg.start_lat = 0.217572151845;
    msg.start_lon = 0.680053081393;
    msg.start_z = 0.172680342536;
    msg.start_z_units = 105U;
    msg.end_lat = 0.721272258919;
    msg.end_lon = 0.851095639005;
    msg.end_z = 0.844457002359;
    msg.end_z_units = 83U;
    msg.speed = 0.963936645716;
    msg.speed_units = 133U;
    msg.lradius = 0.81151490178;
    msg.flags = 86U;

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
    msg.setTimeStamp(0.871584167883);
    msg.setSource(31826U);
    msg.setSourceEntity(233U);
    msg.setDestination(52137U);
    msg.setDestinationEntity(3U);
    msg.x = 0.334695042823;
    msg.y = 0.0931990201624;
    msg.z = 0.18351588106;
    msg.k = 0.489487790954;
    msg.m = 0.333628669415;
    msg.n = 0.148502148915;
    msg.flags = 219U;

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
    msg.setTimeStamp(0.73902262526);
    msg.setSource(60895U);
    msg.setSourceEntity(145U);
    msg.setDestination(63424U);
    msg.setDestinationEntity(99U);
    msg.x = 0.834680277277;
    msg.y = 0.245603256723;
    msg.z = 0.110740640708;
    msg.k = 0.862593627267;
    msg.m = 0.969499702588;
    msg.n = 0.105754162557;
    msg.flags = 204U;

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
    msg.setTimeStamp(0.211719127872);
    msg.setSource(21347U);
    msg.setSourceEntity(215U);
    msg.setDestination(46322U);
    msg.setDestinationEntity(205U);
    msg.x = 0.579976533362;
    msg.y = 0.964619981015;
    msg.z = 0.780801492082;
    msg.k = 0.500224894954;
    msg.m = 0.693518578337;
    msg.n = 0.28542385645;
    msg.flags = 185U;

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
    msg.setTimeStamp(0.0141663026834);
    msg.setSource(17275U);
    msg.setSourceEntity(32U);
    msg.setDestination(63588U);
    msg.setDestinationEntity(46U);
    msg.value = 0.303883608168;

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
    msg.setTimeStamp(0.823848482065);
    msg.setSource(42261U);
    msg.setSourceEntity(30U);
    msg.setDestination(31137U);
    msg.setDestinationEntity(0U);
    msg.value = 0.915368713546;

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
    msg.setTimeStamp(0.59756612104);
    msg.setSource(58803U);
    msg.setSourceEntity(69U);
    msg.setDestination(34957U);
    msg.setDestinationEntity(211U);
    msg.value = 0.918191912837;

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
    msg.setTimeStamp(0.227965513069);
    msg.setSource(31288U);
    msg.setSourceEntity(193U);
    msg.setDestination(51123U);
    msg.setDestinationEntity(35U);
    msg.u = 0.864584143518;
    msg.v = 0.765173937732;
    msg.w = 0.461716057789;
    msg.p = 0.616287343758;
    msg.q = 0.281267399423;
    msg.r = 0.413982509082;
    msg.flags = 183U;

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
    msg.setTimeStamp(0.411374136263);
    msg.setSource(31249U);
    msg.setSourceEntity(115U);
    msg.setDestination(46587U);
    msg.setDestinationEntity(254U);
    msg.u = 0.355657450068;
    msg.v = 0.0172964621101;
    msg.w = 0.0228632660768;
    msg.p = 0.365857397859;
    msg.q = 0.659971252331;
    msg.r = 0.296812781967;
    msg.flags = 149U;

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
    msg.setTimeStamp(0.772262308588);
    msg.setSource(38835U);
    msg.setSourceEntity(105U);
    msg.setDestination(29995U);
    msg.setDestinationEntity(233U);
    msg.u = 0.580907380429;
    msg.v = 0.196192105125;
    msg.w = 0.443632666161;
    msg.p = 0.667368735865;
    msg.q = 0.137385084733;
    msg.r = 0.728128238303;
    msg.flags = 136U;

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
    msg.setTimeStamp(0.437699505545);
    msg.setSource(11845U);
    msg.setSourceEntity(225U);
    msg.setDestination(38789U);
    msg.setDestinationEntity(213U);
    msg.path_ref = 528681230U;
    msg.start_lat = 0.248151059461;
    msg.start_lon = 0.631775696734;
    msg.start_z = 0.435230765373;
    msg.start_z_units = 200U;
    msg.end_lat = 0.720243686926;
    msg.end_lon = 0.819855748976;
    msg.end_z = 0.750006531013;
    msg.end_z_units = 200U;
    msg.lradius = 0.795580719211;
    msg.flags = 113U;
    msg.x = 0.366984527043;
    msg.y = 0.823197941365;
    msg.z = 0.0739837700125;
    msg.vx = 0.434906561339;
    msg.vy = 0.663641775608;
    msg.vz = 0.380071426676;
    msg.course_error = 0.606042397934;
    msg.eta = 36612U;

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
    msg.setTimeStamp(0.254487441103);
    msg.setSource(29561U);
    msg.setSourceEntity(227U);
    msg.setDestination(57680U);
    msg.setDestinationEntity(200U);
    msg.path_ref = 3612499824U;
    msg.start_lat = 0.926753066978;
    msg.start_lon = 0.802800798226;
    msg.start_z = 0.341957355965;
    msg.start_z_units = 103U;
    msg.end_lat = 0.863117928247;
    msg.end_lon = 0.889469028525;
    msg.end_z = 0.548206925214;
    msg.end_z_units = 57U;
    msg.lradius = 0.99838765184;
    msg.flags = 183U;
    msg.x = 0.825254091866;
    msg.y = 0.154268149974;
    msg.z = 0.96216363344;
    msg.vx = 0.108190773772;
    msg.vy = 0.682993057572;
    msg.vz = 0.740091620566;
    msg.course_error = 0.325290076758;
    msg.eta = 60520U;

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
    msg.setTimeStamp(0.510326553019);
    msg.setSource(34429U);
    msg.setSourceEntity(201U);
    msg.setDestination(39556U);
    msg.setDestinationEntity(232U);
    msg.path_ref = 2129275328U;
    msg.start_lat = 0.589824093434;
    msg.start_lon = 0.485026426977;
    msg.start_z = 0.479616040153;
    msg.start_z_units = 26U;
    msg.end_lat = 0.195400273447;
    msg.end_lon = 0.76658636749;
    msg.end_z = 0.33432823206;
    msg.end_z_units = 82U;
    msg.lradius = 0.230745141917;
    msg.flags = 76U;
    msg.x = 0.483700400273;
    msg.y = 0.496699505229;
    msg.z = 0.285469858963;
    msg.vx = 0.751492991718;
    msg.vy = 0.706401993011;
    msg.vz = 0.144003814674;
    msg.course_error = 0.171504918481;
    msg.eta = 60528U;

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
    msg.setTimeStamp(0.342220197148);
    msg.setSource(26888U);
    msg.setSourceEntity(237U);
    msg.setDestination(37864U);
    msg.setDestinationEntity(138U);
    msg.k = 0.361339817117;
    msg.m = 0.343745534985;
    msg.n = 0.891576456603;

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
    msg.setTimeStamp(0.389561107013);
    msg.setSource(13487U);
    msg.setSourceEntity(63U);
    msg.setDestination(47603U);
    msg.setDestinationEntity(32U);
    msg.k = 0.17044366367;
    msg.m = 0.546600187928;
    msg.n = 0.661719788816;

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
    msg.setTimeStamp(0.220107097933);
    msg.setSource(23054U);
    msg.setSourceEntity(218U);
    msg.setDestination(61993U);
    msg.setDestinationEntity(178U);
    msg.k = 0.921763949382;
    msg.m = 0.910869980845;
    msg.n = 0.864870319577;

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
    msg.setTimeStamp(0.841471804291);
    msg.setSource(5935U);
    msg.setSourceEntity(248U);
    msg.setDestination(37715U);
    msg.setDestinationEntity(34U);
    msg.p = 0.784176513864;
    msg.i = 0.80701982836;
    msg.d = 0.0825763010794;
    msg.a = 0.0101034342719;

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
    msg.setTimeStamp(0.585561304877);
    msg.setSource(63438U);
    msg.setSourceEntity(2U);
    msg.setDestination(13861U);
    msg.setDestinationEntity(6U);
    msg.p = 0.0986169792582;
    msg.i = 0.535845092194;
    msg.d = 0.834537666497;
    msg.a = 0.223781749532;

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
    msg.setTimeStamp(0.192849867037);
    msg.setSource(52863U);
    msg.setSourceEntity(251U);
    msg.setDestination(57114U);
    msg.setDestinationEntity(175U);
    msg.p = 0.0148489245929;
    msg.i = 0.0981452115139;
    msg.d = 0.590323072607;
    msg.a = 0.271451528263;

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
    msg.setTimeStamp(0.341297464409);
    msg.setSource(48679U);
    msg.setSourceEntity(172U);
    msg.setDestination(7531U);
    msg.setDestinationEntity(30U);
    msg.op = 144U;

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
    msg.setTimeStamp(0.8918615685);
    msg.setSource(42997U);
    msg.setSourceEntity(142U);
    msg.setDestination(37925U);
    msg.setDestinationEntity(161U);
    msg.op = 158U;

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
    msg.setTimeStamp(0.649129175934);
    msg.setSource(61150U);
    msg.setSourceEntity(200U);
    msg.setDestination(7092U);
    msg.setDestinationEntity(62U);
    msg.op = 89U;

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
    msg.setTimeStamp(0.751878978144);
    msg.setSource(61630U);
    msg.setSourceEntity(204U);
    msg.setDestination(56007U);
    msg.setDestinationEntity(129U);
    msg.x = 0.257037354253;
    msg.y = 0.0347416451051;
    msg.z = 0.496742001539;
    msg.vx = 0.263033269724;
    msg.vy = 0.669410325651;
    msg.vz = 0.435865131212;
    msg.ax = 0.729483428868;
    msg.ay = 0.421418452904;
    msg.az = 0.598896455512;
    msg.flags = 59338U;

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
    msg.setTimeStamp(0.159890221994);
    msg.setSource(21261U);
    msg.setSourceEntity(170U);
    msg.setDestination(61061U);
    msg.setDestinationEntity(24U);
    msg.x = 0.764929509706;
    msg.y = 0.603593929733;
    msg.z = 0.267251800099;
    msg.vx = 0.0324158818289;
    msg.vy = 0.468293812828;
    msg.vz = 0.583290285901;
    msg.ax = 0.0721174559944;
    msg.ay = 0.36913051203;
    msg.az = 0.176700898912;
    msg.flags = 3406U;

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
    msg.setTimeStamp(0.950407034883);
    msg.setSource(18964U);
    msg.setSourceEntity(249U);
    msg.setDestination(37065U);
    msg.setDestinationEntity(34U);
    msg.x = 0.790711540478;
    msg.y = 0.137706838121;
    msg.z = 0.425950377501;
    msg.vx = 0.422562973426;
    msg.vy = 0.937406919124;
    msg.vz = 0.316141641823;
    msg.ax = 0.36817767583;
    msg.ay = 0.590438436358;
    msg.az = 0.7236018007;
    msg.flags = 14954U;

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
    msg.setTimeStamp(0.844303983483);
    msg.setSource(41196U);
    msg.setSourceEntity(241U);
    msg.setDestination(31752U);
    msg.setDestinationEntity(55U);
    msg.value = 0.411150310497;

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
    msg.setTimeStamp(0.239416157413);
    msg.setSource(5732U);
    msg.setSourceEntity(246U);
    msg.setDestination(52905U);
    msg.setDestinationEntity(67U);
    msg.value = 0.31022049979;

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
    msg.setTimeStamp(0.351548977144);
    msg.setSource(55559U);
    msg.setSourceEntity(199U);
    msg.setDestination(37537U);
    msg.setDestinationEntity(127U);
    msg.value = 0.991076857396;

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
    msg.setTimeStamp(0.0569203970055);
    msg.setSource(60351U);
    msg.setSourceEntity(5U);
    msg.setDestination(63678U);
    msg.setDestinationEntity(172U);
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.path_ref = 1892800246U;
    tmp_msg_0.start_lat = 0.178897443766;
    tmp_msg_0.start_lon = 0.807947954434;
    tmp_msg_0.start_z = 0.742040316253;
    tmp_msg_0.start_z_units = 208U;
    tmp_msg_0.end_lat = 0.654133667783;
    tmp_msg_0.end_lon = 0.55409080736;
    tmp_msg_0.end_z = 0.0833485330114;
    tmp_msg_0.end_z_units = 92U;
    tmp_msg_0.speed = 0.0271293100754;
    tmp_msg_0.speed_units = 67U;
    tmp_msg_0.lradius = 0.415287877476;
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
    msg.setTimeStamp(0.131968237338);
    msg.setSource(60085U);
    msg.setSourceEntity(121U);
    msg.setDestination(42417U);
    msg.setDestinationEntity(116U);
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.path_ref = 3197932873U;
    tmp_msg_0.start_lat = 0.672509224658;
    tmp_msg_0.start_lon = 0.76564195415;
    tmp_msg_0.start_z = 0.633514408969;
    tmp_msg_0.start_z_units = 220U;
    tmp_msg_0.end_lat = 0.136397314783;
    tmp_msg_0.end_lon = 0.563208766298;
    tmp_msg_0.end_z = 0.966846173377;
    tmp_msg_0.end_z_units = 213U;
    tmp_msg_0.speed = 0.786590974487;
    tmp_msg_0.speed_units = 193U;
    tmp_msg_0.lradius = 0.0700067128255;
    tmp_msg_0.flags = 60U;
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
    msg.setTimeStamp(0.933367426718);
    msg.setSource(47367U);
    msg.setSourceEntity(37U);
    msg.setDestination(2436U);
    msg.setDestinationEntity(41U);
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.path_ref = 3735361583U;
    tmp_msg_0.start_lat = 0.336693866326;
    tmp_msg_0.start_lon = 0.417860240476;
    tmp_msg_0.start_z = 0.968497193187;
    tmp_msg_0.start_z_units = 37U;
    tmp_msg_0.end_lat = 0.984817197315;
    tmp_msg_0.end_lon = 0.442985291456;
    tmp_msg_0.end_z = 0.536824848996;
    tmp_msg_0.end_z_units = 204U;
    tmp_msg_0.speed = 0.396354876506;
    tmp_msg_0.speed_units = 219U;
    tmp_msg_0.lradius = 0.589184571109;
    tmp_msg_0.flags = 15U;
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
    msg.setTimeStamp(0.427752922779);
    msg.setSource(7688U);
    msg.setSourceEntity(94U);
    msg.setDestination(2876U);
    msg.setDestinationEntity(87U);
    msg.timeout = 8020U;
    msg.lat = 0.273088149892;
    msg.lon = 0.477287693411;
    msg.z = 0.796403432474;
    msg.z_units = 226U;
    msg.speed = 0.551373685606;
    msg.speed_units = 240U;
    msg.roll = 0.605745054304;
    msg.pitch = 0.46267593965;
    msg.yaw = 0.489992233228;
    msg.custom.assign("JCOAJMIGCVFJSNBGZDYCYBYDAIVPJEPEOMQGLYWXFPKCX");

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
    msg.setTimeStamp(0.913423226668);
    msg.setSource(60774U);
    msg.setSourceEntity(35U);
    msg.setDestination(27612U);
    msg.setDestinationEntity(151U);
    msg.timeout = 51195U;
    msg.lat = 0.218358163663;
    msg.lon = 0.0913495202341;
    msg.z = 0.935970485961;
    msg.z_units = 48U;
    msg.speed = 0.268123237106;
    msg.speed_units = 106U;
    msg.roll = 0.690896542871;
    msg.pitch = 0.461089995967;
    msg.yaw = 0.214244949543;
    msg.custom.assign("JWCFVRUKABIZQMOBUXXGWLUMRSPVUPUPUAMZDSLYSFTSEWNKESDBPUZKHVBIOAFJCYYDBTWFJCBOJJHNHZQ");

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
    msg.setTimeStamp(0.466828682968);
    msg.setSource(2723U);
    msg.setSourceEntity(125U);
    msg.setDestination(46981U);
    msg.setDestinationEntity(66U);
    msg.timeout = 52561U;
    msg.lat = 0.981566951535;
    msg.lon = 0.340800635765;
    msg.z = 0.643830009849;
    msg.z_units = 109U;
    msg.speed = 0.602093099776;
    msg.speed_units = 143U;
    msg.roll = 0.133051094063;
    msg.pitch = 0.977416651236;
    msg.yaw = 0.2123828316;
    msg.custom.assign("SKLUHIPBWDFGAKULFGBQJCWHKOGMSVTXTSVPXOBVNPSJYLAYIMZODJPIXEFBBCRUIPLXQOKNWVXUJUTZKPHNAPYHAQKJHTWQEWJQWOYCBHUPBZMDMBZJNRAZJNHRLFQUYYTHSWTDSOGWIXNERSHCAQJMVFNTFRCGMYVNCZYGVVDCXEIWCXTCXPAZRLUDEIUGETGDAIIZKDNOLAELQOAKKVGQDYZFCRWRREMYLMFSEJKDE");

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
    msg.setTimeStamp(0.568508307829);
    msg.setSource(22960U);
    msg.setSourceEntity(16U);
    msg.setDestination(6049U);
    msg.setDestinationEntity(149U);
    msg.timeout = 53745U;
    msg.lat = 0.647559712622;
    msg.lon = 0.755642880491;
    msg.z = 0.00331461670967;
    msg.z_units = 0U;
    msg.speed = 0.76859585995;
    msg.speed_units = 87U;
    msg.duration = 52681U;
    msg.radius = 0.151734626166;
    msg.flags = 134U;
    msg.custom.assign("ADRUAHCXNBOOIPWSGOVFKVMRPFSIEITKBYCRQOTFCVAZUDQVJKIDWWLMESTSPXUWSGJUUOY");

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
    msg.setTimeStamp(0.885298491918);
    msg.setSource(44608U);
    msg.setSourceEntity(165U);
    msg.setDestination(17892U);
    msg.setDestinationEntity(4U);
    msg.timeout = 54918U;
    msg.lat = 0.985298805561;
    msg.lon = 0.158294125895;
    msg.z = 0.275653359635;
    msg.z_units = 12U;
    msg.speed = 0.58178117366;
    msg.speed_units = 171U;
    msg.duration = 8982U;
    msg.radius = 0.00576762454881;
    msg.flags = 57U;
    msg.custom.assign("KWVJJIABAOWUTBHEJVEPWEIOZJJQSOLKEVGUJRSNGXKOIOTHZEEDHEPTAHRBZLYSQOAPQQAOEWFCRHDCGKURNKGTOFTCFZWLNYVLVCBFVLRQZMKEQWHLJYMYMTOSHWUCJRLSGRNZMOXMFAEDHSABRNWPGVHJDSQYXU");

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
    msg.setTimeStamp(0.414652155418);
    msg.setSource(24054U);
    msg.setSourceEntity(230U);
    msg.setDestination(32901U);
    msg.setDestinationEntity(198U);
    msg.timeout = 14594U;
    msg.lat = 0.201137097706;
    msg.lon = 0.216720099905;
    msg.z = 0.272727668616;
    msg.z_units = 49U;
    msg.speed = 0.913776357391;
    msg.speed_units = 151U;
    msg.duration = 51016U;
    msg.radius = 0.640889892851;
    msg.flags = 181U;
    msg.custom.assign("PQYZIOWFFOPXGINLZNOSPWHNXHAAOWANBKMRQKQUXZDGNYVCIKPLDQSFUOOJMUERDQAPJCMHGBG");

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
    msg.setTimeStamp(0.855978467676);
    msg.setSource(7610U);
    msg.setSourceEntity(35U);
    msg.setDestination(26547U);
    msg.setDestinationEntity(114U);
    msg.custom.assign("OHQGLWQKGFFTONKWUFYCXBMXGVPOWADMUOBYBVGSZHWFYUJVXNVJLKLVYASQCCNDRUCXYKQIIKNNMLALIXMDRTANPJEPMCPZHYFUIRKRMDXSGFZIBYEJZGDXORACFAEBJVZERCAXNDSTGCCVPAZUVSNKKQEPBMJDSNTWQOLWBWLUIWKPTIZPSEAOGXUXRELRQYTWCGMSIOBQTFSURK");

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
    msg.setTimeStamp(0.641261527458);
    msg.setSource(3279U);
    msg.setSourceEntity(161U);
    msg.setDestination(31282U);
    msg.setDestinationEntity(19U);
    msg.custom.assign("HZDWWYXXLCAGKEFNEIUVPULFQYQPZXSPGVGRXZEFVXHLGHUZPOWSPJOIXZETWKGLGOKKRBIMFBLNTRCTVIRXNUJBCTDYYFTOJNVUWAEKLADNKCMWRHEDTNXZQCMSZUSBYYASMMYFMDCOTOAEKBDGX");

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
    msg.setTimeStamp(0.854204557235);
    msg.setSource(59603U);
    msg.setSourceEntity(172U);
    msg.setDestination(48376U);
    msg.setDestinationEntity(90U);
    msg.custom.assign("PILOJAOTUBOOAPVFJPU");

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
    msg.setTimeStamp(0.214325634156);
    msg.setSource(48976U);
    msg.setSourceEntity(30U);
    msg.setDestination(27383U);
    msg.setDestinationEntity(185U);
    msg.timeout = 6056U;
    msg.lat = 0.958455430075;
    msg.lon = 0.820472572158;
    msg.z = 0.603160662778;
    msg.z_units = 69U;
    msg.duration = 58138U;
    msg.speed = 0.616696306531;
    msg.speed_units = 78U;
    msg.type = 37U;
    msg.radius = 0.877400411866;
    msg.length = 0.496937599955;
    msg.bearing = 0.980881016267;
    msg.direction = 160U;
    msg.custom.assign("DJNZAHBTCMROMRJLXNUVKNJOEYJRMYYSHEWGVNGBKIHJZBIGQSQDLGLYXSFHOKKZXSMWRYHUBSDSABDRZAEDXLTVUAJROICCZNHJJFAVYPVSPILBZGMGXDTDOCXXIFWXJCTURTNQYOCXYSMOMWQLUMHPZZGKTBTMWDIXWPPRFZECFAFKCDYWVPAWEFGP");

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
    msg.setTimeStamp(0.991804930386);
    msg.setSource(52275U);
    msg.setSourceEntity(46U);
    msg.setDestination(2331U);
    msg.setDestinationEntity(34U);
    msg.timeout = 22134U;
    msg.lat = 0.988014944676;
    msg.lon = 0.421387519506;
    msg.z = 0.144142176048;
    msg.z_units = 8U;
    msg.duration = 50116U;
    msg.speed = 0.210812417918;
    msg.speed_units = 139U;
    msg.type = 21U;
    msg.radius = 0.543033704068;
    msg.length = 0.679644682551;
    msg.bearing = 0.221057076273;
    msg.direction = 213U;
    msg.custom.assign("PSRXXSBRTZUMHUJWZBUFTPURFFZIHRQOGQYJEDGAZCDLXAZIFBOFJAUSRDBEULIQLVLUFKWCXBTROBZPGHWYBWJENMKOPSAOWHGDXVOJGJKFPKYINEQLPJXVDZRHQIZUGLKYMAFNKUTOTVMNOESCSVWXDJQDQMUWHYSFRYIKKLAWSCPTQIBHMFBYHVCVTXMPXISNJNBYRM");

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
    msg.setTimeStamp(0.392234510071);
    msg.setSource(22724U);
    msg.setSourceEntity(18U);
    msg.setDestination(1339U);
    msg.setDestinationEntity(49U);
    msg.timeout = 42785U;
    msg.lat = 0.561136776926;
    msg.lon = 0.797587764094;
    msg.z = 0.129208222531;
    msg.z_units = 27U;
    msg.duration = 5912U;
    msg.speed = 0.428856285361;
    msg.speed_units = 29U;
    msg.type = 161U;
    msg.radius = 0.0425039355689;
    msg.length = 0.164696597545;
    msg.bearing = 0.385927141089;
    msg.direction = 185U;
    msg.custom.assign("BAILFJIKBPVPHZOQKPEIYOOZRRBHGTPAQCGKXLQDZRMNGSHWGHUOEYUFZXSMDGFLJQMKFYYSZZYBTDJBGUEOLQCUHWWVRICSMV");

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
    msg.setTimeStamp(0.75076714358);
    msg.setSource(16158U);
    msg.setSourceEntity(33U);
    msg.setDestination(21476U);
    msg.setDestinationEntity(251U);
    msg.duration = 12592U;
    msg.custom.assign("LOIBNJDZIPHEFFOVKRNBKFOJKIBSELZKISJPBPLJWBRATUVEYKQOYSAROFWESLZSUCABGJQJVHOMGVQCNLSZNGOSXCHKXXWAQIAWHFMRUAPNQCTZEJAFPYGMIYIVDAXBXPSOUYJRKXGGEWCXZQA");

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
    msg.setTimeStamp(0.149926459554);
    msg.setSource(587U);
    msg.setSourceEntity(61U);
    msg.setDestination(37979U);
    msg.setDestinationEntity(133U);
    msg.duration = 45314U;
    msg.custom.assign("DVXCRLRYQLTQNRGDBGNGUDHSTPUSATOKOUJVMVJXH");

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
    msg.setTimeStamp(0.643878763007);
    msg.setSource(31220U);
    msg.setSourceEntity(181U);
    msg.setDestination(30658U);
    msg.setDestinationEntity(243U);
    msg.duration = 2800U;
    msg.custom.assign("ENBKXTKARJOXTCZCQBDVWTEDIRLQMHOAFXQJEEACVJPPVHUIIACCCSGGCMCSNDEUYVM");

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
    msg.setTimeStamp(0.897800680831);
    msg.setSource(36706U);
    msg.setSourceEntity(8U);
    msg.setDestination(53920U);
    msg.setDestinationEntity(131U);
    IMC::DesiredZ tmp_msg_0;
    tmp_msg_0.value = 0.785310829308;
    tmp_msg_0.z_units = 56U;
    msg.control.set(tmp_msg_0);
    msg.duration = 39493U;
    msg.custom.assign("ZAPHGTIXPTYHAMDQHCLRVFCYVXIJYORAGQVFHDHSJTVMFLDWLZKPFNYNMRDKWBUHEARPQNDAXZQMTHOWDPOIPSOVXXSHYCAMKJKMSWZLFEPIBKSBNILBRGVTVDAGCSXOYEKACZILTNDINGNJCLBUSCRJ");

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
    msg.setTimeStamp(0.71894299271);
    msg.setSource(27763U);
    msg.setSourceEntity(162U);
    msg.setDestination(7994U);
    msg.setDestinationEntity(104U);
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.path_ref = 3629352110U;
    tmp_msg_0.start_lat = 0.473230276224;
    tmp_msg_0.start_lon = 0.71806324931;
    tmp_msg_0.start_z = 0.613571104736;
    tmp_msg_0.start_z_units = 84U;
    tmp_msg_0.end_lat = 0.0908535274278;
    tmp_msg_0.end_lon = 0.69637608964;
    tmp_msg_0.end_z = 0.95009177827;
    tmp_msg_0.end_z_units = 61U;
    tmp_msg_0.speed = 0.0883278537692;
    tmp_msg_0.speed_units = 181U;
    tmp_msg_0.lradius = 0.326546708557;
    tmp_msg_0.flags = 188U;
    msg.control.set(tmp_msg_0);
    msg.duration = 60474U;
    msg.custom.assign("EGEFPCEZANGAVDHQHFBLRQINHMFQDWWTIFDTEZNR");

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
    msg.setTimeStamp(0.158419367166);
    msg.setSource(54874U);
    msg.setSourceEntity(153U);
    msg.setDestination(60944U);
    msg.setDestinationEntity(174U);
    IMC::DesiredRoll tmp_msg_0;
    tmp_msg_0.value = 0.636005451821;
    msg.control.set(tmp_msg_0);
    msg.duration = 47242U;
    msg.custom.assign("MZZGYDVRYPSOGBUOKQBOTHZCCBYKKJBPLYMJJILLJCKAELXFJQZBZSOUISEACIQYPTABPWVWIQEGHPJTKZURGVHFENESHKZORKAQIUYFRXWKSRDNFSAJRFVPHCHLFNSFMCYMMDUBXWJNQZMGDXMNRTDCSWKHNRQUVLNFWAVMNUVTGLEEGXLWFXWPTURSGEMKHUXXTXFDCDQIGPTJPSBIRTQWEYDPVOMYLVZA");

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
    msg.setTimeStamp(0.919946728953);
    msg.setSource(56473U);
    msg.setSourceEntity(166U);
    msg.setDestination(31497U);
    msg.setDestinationEntity(152U);
    msg.timeout = 5584U;
    msg.lat = 0.897464820751;
    msg.lon = 0.631766262313;
    msg.z = 0.437144842129;
    msg.z_units = 178U;
    msg.speed = 0.140601801181;
    msg.speed_units = 242U;
    msg.bearing = 0.0259319807102;
    msg.cross_angle = 0.479995192397;
    msg.width = 0.344837774868;
    msg.length = 0.558303416272;
    msg.hstep = 0.111682315008;
    msg.coff = 101U;
    msg.alternation = 137U;
    msg.flags = 117U;
    msg.custom.assign("QUJZGPXMOZUJHTVDDXBZBKHCNQGSWXIUKEFIPWFDUVAZBRAYTXTJNPLKKMMFPGMCPVREQYANRRWVPAWYFTDDVPYMY");

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
    msg.setTimeStamp(0.48323938685);
    msg.setSource(43198U);
    msg.setSourceEntity(132U);
    msg.setDestination(37204U);
    msg.setDestinationEntity(96U);
    msg.timeout = 36250U;
    msg.lat = 0.634598116227;
    msg.lon = 0.00112167961702;
    msg.z = 0.0791737634107;
    msg.z_units = 238U;
    msg.speed = 0.971771276701;
    msg.speed_units = 72U;
    msg.bearing = 0.970437853038;
    msg.cross_angle = 0.438441872239;
    msg.width = 0.119541048063;
    msg.length = 0.439619759063;
    msg.hstep = 0.756941371537;
    msg.coff = 209U;
    msg.alternation = 52U;
    msg.flags = 126U;
    msg.custom.assign("VHJKQYGNXCJSGUMHNXPQRCXGBPZRXUEQZKACSWPIHUXBIZNFJPVQOKJBYJKBTDAMPVIIRVNDVPSLIDCGTGSUKDAEMEYDWOMFQZYRVTGSTIAWHJSNJTKEPYMRBWAUNUUEOFGUOAOLWQIGAFLTVDMTFQBCQJONHIHGK");

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
    msg.setTimeStamp(0.0497591506281);
    msg.setSource(1315U);
    msg.setSourceEntity(111U);
    msg.setDestination(13801U);
    msg.setDestinationEntity(106U);
    msg.timeout = 14415U;
    msg.lat = 0.879022240602;
    msg.lon = 0.520482305472;
    msg.z = 0.692998956194;
    msg.z_units = 209U;
    msg.speed = 0.33408947009;
    msg.speed_units = 23U;
    msg.bearing = 0.959268879698;
    msg.cross_angle = 0.00744047429266;
    msg.width = 0.166808605309;
    msg.length = 0.704029088259;
    msg.hstep = 0.143595008193;
    msg.coff = 174U;
    msg.alternation = 186U;
    msg.flags = 105U;
    msg.custom.assign("QHOGYPGVNOCXOBHGESOVEOEHJBXCJFVYRJNIUDFWRQRZLHHWNGZMCVMDOSDEZEJMLFVJANZGRXRNNMXQVXAULHTGWAWTZGOZFYZUDSQQRGZJYMMCFFLLYKAIUYHNTSQPWWYBEDVXCLUYBUBKXOYGMLQOFXKIRKRITPJBIVAUUQAGFYCCLLDTKILAHQBSIPOPKNBPRPTIFV");

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
    msg.setTimeStamp(0.276766254423);
    msg.setSource(61154U);
    msg.setSourceEntity(193U);
    msg.setDestination(39788U);
    msg.setDestinationEntity(194U);
    msg.timeout = 50890U;
    msg.lat = 0.960958914461;
    msg.lon = 0.075549035186;
    msg.z = 0.899454620831;
    msg.z_units = 207U;
    msg.speed = 0.66214819376;
    msg.speed_units = 214U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.12556433496;
    tmp_msg_0.y = 0.826618804336;
    tmp_msg_0.z = 0.201980602738;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("KWYQBLALLDDKAAVFYCMOJJPFWMVQUEJSPWKBNBHALEYXNISLLHSXXFTDHVOZWZHPEYROGAURMHINSDRWQLTCYZLHTAVRBTKKISMOTXHSWZVNJVUJWOPPSPZTRNZMCKZQNUJNNAGVFFPIDPKMREQIRKXJWVXQAXETOGFXORUAAMGYYHYLQIMJIXCEOTCSCVGILHQGKCJSYUBEHFPUKEZIUBBTIGBVBFWPNCDMUUGBGZQDGCDZRNOOEFSTWDQM");

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
    msg.setTimeStamp(0.435695520136);
    msg.setSource(49386U);
    msg.setSourceEntity(12U);
    msg.setDestination(43948U);
    msg.setDestinationEntity(104U);
    msg.timeout = 61583U;
    msg.lat = 0.483353392718;
    msg.lon = 0.0646734782178;
    msg.z = 0.781612332343;
    msg.z_units = 100U;
    msg.speed = 0.53863495352;
    msg.speed_units = 186U;
    msg.custom.assign("IKENAXCSKFGLCSRKKUPQEUXBODVDOQEOTKNFTZIYLADTHSHZMCEKMFXQEBACTHXLSBECFVMTGQKIBJGCZVPRLYOCHWGDPNWWYXDJRIGLBARVGNOSRMCGKIIMUUTSFPJHYGZJNDRWQIWSPYFVCLPZLZEQNUXDSPTMVLEYXOLJRTIRHR");

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
    msg.setTimeStamp(0.559991167858);
    msg.setSource(7597U);
    msg.setSourceEntity(237U);
    msg.setDestination(34815U);
    msg.setDestinationEntity(173U);
    msg.timeout = 34175U;
    msg.lat = 0.950655375102;
    msg.lon = 0.897735708834;
    msg.z = 0.581918874851;
    msg.z_units = 66U;
    msg.speed = 0.924022424958;
    msg.speed_units = 105U;
    msg.custom.assign("SZLPDDLMNCFVSODDPJJAGDKQWCUNNOJZEUQXTBCSXIMPUJRSZEJQUXBVYGTFBVSBKDAVRXKRJKFGXRYVFFALXIHOGGKJRTMWRSHQOOJCYQLWBCZYCPUJEWLNUGIETUPNXDNPBKZMYYWMBAEGHALEXSDLVRMJDS");

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
    msg.setTimeStamp(0.30545814721);
    msg.setSource(54172U);
    msg.setSourceEntity(10U);
    msg.setDestination(6931U);
    msg.setDestinationEntity(198U);
    msg.x = 0.884696385552;
    msg.y = 0.414897174521;
    msg.z = 0.31626231819;

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
    msg.setTimeStamp(0.125799561512);
    msg.setSource(10184U);
    msg.setSourceEntity(14U);
    msg.setDestination(58433U);
    msg.setDestinationEntity(168U);
    msg.x = 0.350634372961;
    msg.y = 0.324767602042;
    msg.z = 0.842065166076;

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
    msg.setTimeStamp(0.616965084088);
    msg.setSource(3478U);
    msg.setSourceEntity(141U);
    msg.setDestination(9255U);
    msg.setDestinationEntity(14U);
    msg.x = 0.841180927477;
    msg.y = 0.637064608589;
    msg.z = 0.224003371806;

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
    msg.setTimeStamp(0.256103281771);
    msg.setSource(38961U);
    msg.setSourceEntity(3U);
    msg.setDestination(17204U);
    msg.setDestinationEntity(241U);
    msg.timeout = 35655U;
    msg.lat = 0.253111983417;
    msg.lon = 0.856966415492;
    msg.z = 0.745202494851;
    msg.z_units = 5U;
    msg.amplitude = 0.542669413676;
    msg.pitch = 0.668765351447;
    msg.speed = 0.613448295629;
    msg.speed_units = 184U;
    msg.custom.assign("XWHGRWDGPMJMTSDWXMLGDMOXTCSZIIIPEZTZXWYVZCCZDYFMUQHSJKBECHWYPBBPPXOZNFIAYUVBYYBIUKOUQDD");

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
    msg.setTimeStamp(0.820481646794);
    msg.setSource(16828U);
    msg.setSourceEntity(4U);
    msg.setDestination(17676U);
    msg.setDestinationEntity(111U);
    msg.timeout = 32456U;
    msg.lat = 0.345152397357;
    msg.lon = 0.308944280435;
    msg.z = 0.185886523942;
    msg.z_units = 134U;
    msg.amplitude = 0.565337566892;
    msg.pitch = 0.00456637797374;
    msg.speed = 0.986128559983;
    msg.speed_units = 33U;
    msg.custom.assign("NVEGLJUIBROQIJOFIUVREVVQSASQVJTKEWZSEQKRIHHFPOKHLRFMHTTROACSMDPYIIAQYDQKLGSCBXWWYNRHDYUJVAJHFTNAMLAHCGEVMXWQDUWQCBRNBHNHVZEUWZBYBY");

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
    msg.setTimeStamp(0.483553256547);
    msg.setSource(38335U);
    msg.setSourceEntity(39U);
    msg.setDestination(60135U);
    msg.setDestinationEntity(66U);
    msg.timeout = 17153U;
    msg.lat = 0.293635226495;
    msg.lon = 0.946457426609;
    msg.z = 0.236113090625;
    msg.z_units = 42U;
    msg.amplitude = 0.739373376252;
    msg.pitch = 0.334458042834;
    msg.speed = 0.946033763231;
    msg.speed_units = 199U;
    msg.custom.assign("WRMTAGIQYELYQDMHQWPPQXZYLBSRDYJIOLUCBURRAAFMHEPRLZGFEIOTSAFFKUBIKVQUEGXVWKLIDLDOTGUNVIRFSZCKZLJB");

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
    msg.setTimeStamp(0.440954076775);
    msg.setSource(6158U);
    msg.setSourceEntity(54U);
    msg.setDestination(25494U);
    msg.setDestinationEntity(83U);

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
    msg.setTimeStamp(0.925469684725);
    msg.setSource(60532U);
    msg.setSourceEntity(230U);
    msg.setDestination(35667U);
    msg.setDestinationEntity(23U);

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
    msg.setTimeStamp(0.374710797702);
    msg.setSource(12519U);
    msg.setSourceEntity(53U);
    msg.setDestination(8645U);
    msg.setDestinationEntity(28U);

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
    msg.setTimeStamp(0.876959848683);
    msg.setSource(47406U);
    msg.setSourceEntity(131U);
    msg.setDestination(55635U);
    msg.setDestinationEntity(163U);
    msg.lat = 0.890221212782;
    msg.lon = 0.428254571451;
    msg.z = 0.522252170768;
    msg.z_units = 203U;
    msg.radius = 0.232357935941;
    msg.duration = 57061U;
    msg.speed = 0.58771397517;
    msg.speed_units = 50U;
    msg.popup_period = 58132U;
    msg.popup_duration = 57007U;
    msg.flags = 249U;
    msg.custom.assign("YXEUSTLVDDJVQIJBTOJISNCMRGSNAXGIHBQSZRXVTHEQJKSKJPCTWBLDPBNZQDPYUBAJNEXRHUACTZBVBVOQWEWLGCDFMKHHBFIGEPXNGCHCDTJSUKMMP");

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
    msg.setTimeStamp(0.152481558293);
    msg.setSource(21311U);
    msg.setSourceEntity(209U);
    msg.setDestination(6110U);
    msg.setDestinationEntity(64U);
    msg.lat = 0.318219759978;
    msg.lon = 0.18360592826;
    msg.z = 0.527227135634;
    msg.z_units = 139U;
    msg.radius = 0.268637634019;
    msg.duration = 34501U;
    msg.speed = 0.850041459851;
    msg.speed_units = 115U;
    msg.popup_period = 64513U;
    msg.popup_duration = 38351U;
    msg.flags = 96U;
    msg.custom.assign("GZYYBERUMILYFDQDYTPAIXTSXYLPDMRWUMCSQVPKCYID");

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
    msg.setTimeStamp(0.463644687301);
    msg.setSource(32279U);
    msg.setSourceEntity(227U);
    msg.setDestination(7361U);
    msg.setDestinationEntity(233U);
    msg.lat = 0.623552709638;
    msg.lon = 0.712587798797;
    msg.z = 0.480972842117;
    msg.z_units = 65U;
    msg.radius = 0.386116154429;
    msg.duration = 20892U;
    msg.speed = 0.478904793075;
    msg.speed_units = 242U;
    msg.popup_period = 45571U;
    msg.popup_duration = 46639U;
    msg.flags = 245U;
    msg.custom.assign("OVMLRLSCLFHDIJRMBAWCVETZUNKGOPQGYDTVLTXFXPFGSILVIUWIWULAFQENONDQCHEOHUMEYJCULCABTMCBHPSLKZIKZVOSBDMSXPEURHMAGGVGSPBAWNMKQBAPCUAFISBQXPCKNKNAYZTZCWVFZYWNDWRXJYTDQHFGYZSREULGXYKNHNONUQRLRFTIBPZMOJVHUEXTJSAPEQQ");

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
    msg.setTimeStamp(0.38394753813);
    msg.setSource(44821U);
    msg.setSourceEntity(251U);
    msg.setDestination(20971U);
    msg.setDestinationEntity(193U);
    msg.timeout = 35296U;
    msg.flags = 116U;
    msg.lat = 0.739354977462;
    msg.lon = 0.892649270871;
    msg.start_z = 0.709661258573;
    msg.start_z_units = 179U;
    msg.end_z = 0.841373744033;
    msg.end_z_units = 139U;
    msg.radius = 0.938952732248;
    msg.speed = 0.903587011235;
    msg.speed_units = 24U;
    msg.custom.assign("LCXVBYUPZYARPOYLWQOPUZBSYMMCWAIADAEWNGHGYXQUTEWJDUOFLJLMRMIRXCIVQSGTTLGHFECJMNQXYHHDGKOXLZHUENQFEBLVNRBPSLEISFKHCJDDIZKXLVCZDLZIUCOCJMPIWVVCRCJMOTVSBDIBVZXFSOMWIQKAFWGSDFXKAZBZJIGPKPGYRUGWTTAYFHZMPRTQDE");

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
    msg.setTimeStamp(0.38082454606);
    msg.setSource(9711U);
    msg.setSourceEntity(231U);
    msg.setDestination(29732U);
    msg.setDestinationEntity(84U);
    msg.timeout = 51095U;
    msg.flags = 214U;
    msg.lat = 0.156668459979;
    msg.lon = 0.387308943765;
    msg.start_z = 0.633858190301;
    msg.start_z_units = 127U;
    msg.end_z = 0.102537713171;
    msg.end_z_units = 37U;
    msg.radius = 0.394931035122;
    msg.speed = 0.0824632244246;
    msg.speed_units = 91U;
    msg.custom.assign("NHKCCCDKTHTAHROIHCZSWGUJWYBQGUFAFQNDQHPKERFDFSLBWZRXZROYUN");

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
    msg.setTimeStamp(0.394337894331);
    msg.setSource(51577U);
    msg.setSourceEntity(199U);
    msg.setDestination(15594U);
    msg.setDestinationEntity(164U);
    msg.timeout = 37229U;
    msg.flags = 186U;
    msg.lat = 0.439114705586;
    msg.lon = 0.647068282316;
    msg.start_z = 0.953377140161;
    msg.start_z_units = 139U;
    msg.end_z = 0.846231574328;
    msg.end_z_units = 57U;
    msg.radius = 0.510953914737;
    msg.speed = 0.969543103443;
    msg.speed_units = 159U;
    msg.custom.assign("YOIMJYJBTSIDFMXJFDRSSYWPTHKNLAYNQOKUAWDPDKQYZFQMXPFKACPIIHGSXQZBKEWVUGUMZRYDWNEBIBCQTBCZGVRLAQGRHPUHEKEXQTJAKJPKJFUVZPOTISYVSEBVVPLIXTUAC");

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
    msg.setTimeStamp(0.0285763098741);
    msg.setSource(47856U);
    msg.setSourceEntity(167U);
    msg.setDestination(34325U);
    msg.setDestinationEntity(21U);
    msg.timeout = 26930U;
    msg.lat = 0.526535056457;
    msg.lon = 0.359781806861;
    msg.z = 0.754715038181;
    msg.z_units = 35U;
    msg.speed = 0.161199888769;
    msg.speed_units = 189U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.898131472665;
    tmp_msg_0.y = 0.193747708062;
    tmp_msg_0.z = 0.549216845892;
    tmp_msg_0.t = 0.213862136526;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("XVVFMGANNJKEWZONURFUVAMFBAOCIXBPDEQVNSOMHZZHSGIMBKSIOWKRMWDXCRJJFUYQLTNHDEGZNNQKXDFBCUIQKJUYTJYMEUHJZBDNKPEOEEULJVMMPXHGIWXPPATHVSXGCBZEPLCTO");

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
    msg.setTimeStamp(0.0136580350333);
    msg.setSource(361U);
    msg.setSourceEntity(178U);
    msg.setDestination(22651U);
    msg.setDestinationEntity(239U);
    msg.timeout = 3517U;
    msg.lat = 0.404426043338;
    msg.lon = 0.900458402498;
    msg.z = 0.728824118612;
    msg.z_units = 241U;
    msg.speed = 0.694791679054;
    msg.speed_units = 217U;
    msg.custom.assign("MCYBLCZIOZDILROBZIHDPZKLMMNMSOKXQKGWPHEACMGGUPXXSDNGRHPROZXJBWNFMFFVQTGEUYAFXRHEWUWYJCLVWULPAOAHJDDKUKSWNZQKQZTLINVUYRVTNOEYVEFTGCRAMYWVRFWDJPCSYBAINTDSQNM");

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
    msg.setTimeStamp(0.70036052116);
    msg.setSource(58692U);
    msg.setSourceEntity(166U);
    msg.setDestination(25868U);
    msg.setDestinationEntity(133U);
    msg.timeout = 29199U;
    msg.lat = 0.143442034387;
    msg.lon = 0.0998643704473;
    msg.z = 0.0625250639932;
    msg.z_units = 143U;
    msg.speed = 0.511219318707;
    msg.speed_units = 124U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.28122737937;
    tmp_msg_0.y = 0.103648548211;
    tmp_msg_0.z = 0.487842273254;
    tmp_msg_0.t = 0.456507080139;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("QRXNPFUHWSRGB");

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
    msg.setTimeStamp(0.908251655676);
    msg.setSource(50061U);
    msg.setSourceEntity(208U);
    msg.setDestination(61376U);
    msg.setDestinationEntity(75U);
    msg.x = 0.248563203395;
    msg.y = 0.577480802643;
    msg.z = 0.476286044326;
    msg.t = 0.53922375283;

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
    msg.setTimeStamp(0.227569941258);
    msg.setSource(53853U);
    msg.setSourceEntity(226U);
    msg.setDestination(17325U);
    msg.setDestinationEntity(183U);
    msg.x = 0.25789831463;
    msg.y = 0.670736654547;
    msg.z = 0.444755767062;
    msg.t = 0.107737383307;

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
    msg.setTimeStamp(0.208775080034);
    msg.setSource(40853U);
    msg.setSourceEntity(69U);
    msg.setDestination(23836U);
    msg.setDestinationEntity(175U);
    msg.x = 0.252283887107;
    msg.y = 0.507554510807;
    msg.z = 0.134249516757;
    msg.t = 0.0620172059247;

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
    msg.setTimeStamp(0.301784075967);
    msg.setSource(51808U);
    msg.setSourceEntity(146U);
    msg.setDestination(48910U);
    msg.setDestinationEntity(252U);
    msg.timeout = 55795U;
    msg.name.assign("ANBJRHCBMFKUVKGZHPEORTYUWJEXYHLCYNYJYTWNGFQRELINIRCSMLSPUFFPDPMQQLOLFLMOZBQNKBSTIKHYKPIZWDDVUNCGYQO");
    msg.custom.assign("YAUPOIWEJPFKCJZZWJUOFMHPSVBWVRMXXCRQJEKBPDRNZKUTMSQIPQUECFTANRDUDAOX");

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
    msg.setTimeStamp(0.526807387504);
    msg.setSource(57822U);
    msg.setSourceEntity(59U);
    msg.setDestination(36345U);
    msg.setDestinationEntity(248U);
    msg.timeout = 8222U;
    msg.name.assign("JGAXDKYOTMFCQOPTDQWSSEEBPBEKSZCYPZFFMHUXTPIFDMGZJWGOUWYKDZRWHDXLIIVJX");
    msg.custom.assign("ZCKQFDTDWNADOQBXLGRHTZMBEPBQUQKWLKVOINOVXDECLYGSXMWHSULMPEQYRATSCNSMAPGPJYVLXUURRFSELTUQORENISJGTJLWQBATKAKHIOHZIOUHRVVSLPXNVMWUHCHZZKGMBNKZDWCYFJUHFYFEHRLNEFOABN");

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
    msg.setTimeStamp(0.05635557274);
    msg.setSource(18216U);
    msg.setSourceEntity(185U);
    msg.setDestination(43908U);
    msg.setDestinationEntity(83U);
    msg.timeout = 51930U;
    msg.name.assign("LBASDABFNSJCRNLHJXWWOHTEHXXLMWAKQDOKPWAQKQYOIVFRETEFFVHKCLODQPVVLBOGYVEMEQAW");
    msg.custom.assign("QYPVQJDTSNHXFRRLKNAMUHXONJKUTZQTLODVKJIZPMHPQBXISKONUBUFCEMTQKAJZACPDBPVFOYKSHSAOUVCSORWSRDCBMZTRGYARMGFNDYIIOMLCCCDEKEVIWDTLPYTZBSYIDMTEXAFTYYNGPBPAUUZBJABZJIVRQEGHFEXYQJWMWDWEVOHJUIIWQHGXLNEZZVFQO");

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
    msg.setTimeStamp(0.558225347663);
    msg.setSource(48813U);
    msg.setSourceEntity(92U);
    msg.setDestination(19279U);
    msg.setDestinationEntity(215U);
    msg.lat = 0.747391582166;
    msg.lon = 0.139030463702;
    msg.z = 0.271482262289;
    msg.z_units = 218U;
    msg.speed = 0.564285345173;
    msg.speed_units = 80U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 35553U;
    tmp_msg_0.off_x = 0.105452453464;
    tmp_msg_0.off_y = 0.643241230104;
    tmp_msg_0.off_z = 0.967649912138;
    msg.participants.push_back(tmp_msg_0);
    msg.start_time = 0.161072313683;
    msg.custom.assign("RTBAAHOORIIGRNCVLUSFVWXJTOQIMHCWINOHSWAGKKMWPCIZQUWHQBCMKVSRMKHMYSJABJVYRKHDTGKUPYVTGBOFMOVCPLGYOEEEFAWBOUHLDNIQSCSJQZWYBLQUPSZYZFALLPTYJCVFAPTGBFNNJTUPQYVFNSMGLCZPFPVDNDHWLBARIDJNUKHEOKZXESRJEESCUIWMXDBIAQLFMYPKHNUDEGMZXFJDJGXTXERZDDEXURVTGQKXO");

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
    msg.setTimeStamp(0.699581597894);
    msg.setSource(155U);
    msg.setSourceEntity(115U);
    msg.setDestination(61048U);
    msg.setDestinationEntity(250U);
    msg.lat = 0.700807683421;
    msg.lon = 0.0300129597036;
    msg.z = 0.368539753128;
    msg.z_units = 16U;
    msg.speed = 0.701847174154;
    msg.speed_units = 99U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.370653891162;
    tmp_msg_0.y = 0.0390010658255;
    tmp_msg_0.z = 0.520439926633;
    tmp_msg_0.t = 0.832220358603;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.936428296242;
    msg.custom.assign("LAUBEQZIMWTSLQUCYGQUZALZJHXNXGISXTDWEXJJFBGMJYYYVSFMJQFWPFQIOULCFALOMKSRIWLNSJPUPSZXQHORNFVBBVTYTEWNCWHTBQVFREMHDKIDCPLDKCDMRNPABAKVWHERAXNDEXKAAPRPKYCWROGDQORHOTJZXFPICBHFKYVYUZLGVGNNJLHBBHKGIGLNVAOSMURTNCOTUIEZDPEMZTRZSYAMOUBKCEIDFY");

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
    msg.setTimeStamp(0.0671602711356);
    msg.setSource(40629U);
    msg.setSourceEntity(36U);
    msg.setDestination(51337U);
    msg.setDestinationEntity(224U);
    msg.lat = 0.32395833287;
    msg.lon = 0.405125597436;
    msg.z = 0.757593156713;
    msg.z_units = 219U;
    msg.speed = 0.274616023115;
    msg.speed_units = 188U;
    msg.start_time = 0.461757322509;
    msg.custom.assign("XGNWIFSUQDFIRNIFTCUPTFXZYYREACOYDTFGBCGOYSLVAHGQCIUBREXXGSMBPMUMDXRTIDVXFZSOMCPOBTAZSJUSJNZZBOJWZMDFQJKLCQKKXJWUHRADMXVLECCEAVJIAPXXDNQZPNMTJBYLLLFKEIVNPWWAMGSQQOULGVLKETOTZUEWLNHKADPHHTYRLIWEHQAVVYOKADEJBDNFZRSWPHSSBJNMNIGHGUY");

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
    msg.setTimeStamp(0.502167152977);
    msg.setSource(21789U);
    msg.setSourceEntity(13U);
    msg.setDestination(29888U);
    msg.setDestinationEntity(195U);
    msg.vid = 42113U;
    msg.off_x = 0.216890714543;
    msg.off_y = 0.751900643384;
    msg.off_z = 0.940515118006;

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
    msg.setTimeStamp(0.270297821368);
    msg.setSource(28528U);
    msg.setSourceEntity(165U);
    msg.setDestination(12069U);
    msg.setDestinationEntity(47U);
    msg.vid = 58403U;
    msg.off_x = 0.218599336056;
    msg.off_y = 0.708447701089;
    msg.off_z = 0.607754519695;

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
    msg.setTimeStamp(0.55802618792);
    msg.setSource(36156U);
    msg.setSourceEntity(208U);
    msg.setDestination(39775U);
    msg.setDestinationEntity(44U);
    msg.vid = 50468U;
    msg.off_x = 0.320488928326;
    msg.off_y = 0.942653083949;
    msg.off_z = 0.0653902228688;

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
    msg.setTimeStamp(0.221332268799);
    msg.setSource(28801U);
    msg.setSourceEntity(90U);
    msg.setDestination(28585U);
    msg.setDestinationEntity(210U);

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
    msg.setTimeStamp(0.994260669083);
    msg.setSource(61877U);
    msg.setSourceEntity(157U);
    msg.setDestination(36502U);
    msg.setDestinationEntity(78U);

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
    msg.setTimeStamp(0.541738023678);
    msg.setSource(30115U);
    msg.setSourceEntity(132U);
    msg.setDestination(21793U);
    msg.setDestinationEntity(141U);

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
    msg.setTimeStamp(0.389469863437);
    msg.setSource(29701U);
    msg.setSourceEntity(179U);
    msg.setDestination(47404U);
    msg.setDestinationEntity(224U);
    msg.mid = 52023U;

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
    msg.setTimeStamp(0.728103160379);
    msg.setSource(50648U);
    msg.setSourceEntity(194U);
    msg.setDestination(44302U);
    msg.setDestinationEntity(52U);
    msg.mid = 53558U;

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
    msg.setTimeStamp(0.980232478045);
    msg.setSource(16772U);
    msg.setSourceEntity(38U);
    msg.setDestination(17746U);
    msg.setDestinationEntity(34U);
    msg.mid = 24933U;

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
    msg.setTimeStamp(0.762162875364);
    msg.setSource(48301U);
    msg.setSourceEntity(32U);
    msg.setDestination(16482U);
    msg.setDestinationEntity(201U);
    msg.state = 42U;
    msg.eta = 37477U;
    msg.info.assign("MYZRZJBHSUMGDPGFNEAITXUASICTJLHWBGRRQNEQCFIYIFBNSXNISXHBXRBFJSXDGLUFQIKNMDPRPLWLRPYRZEJSYEKPZCJTMTNZCOQGCTWCKRCAMFHJDBSZWAYGEMWYDHBWVQQSQXTRRNVKHEDGBUPODNUOEEPHADDOQNVVPMIKCDWTAGMPEBJXOOTHYILIKQCFZHKCVUMKTFJFFBZGVLKVSYXU");

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
    msg.setTimeStamp(0.879853127591);
    msg.setSource(11891U);
    msg.setSourceEntity(80U);
    msg.setDestination(54454U);
    msg.setDestinationEntity(14U);
    msg.state = 90U;
    msg.eta = 52428U;
    msg.info.assign("OXEQQNANZYZIJMBVYWCAWGLADEJRUCPWKGWDIXCLEQGEFKRDPFBOKVRTXVLFHSRMZZMUFUCHIVLBLIOJHXOOVPRPXSFRWCTDUBMXDTMQQPLYSPYTMXTBCYDIRWLOEEAKVEHQJGICHHPYSXRNHOLLZDSNFUMHLSPYWSTZBMBIIOJVNKKGMQHOPVGCDWUGQSVKUEWIRFXYNBAFZAFIDNNYXVAGJECTOUBHBJYZKRQDCAKZNJTTGJGSNAAUFW");

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
    msg.setTimeStamp(0.182697500373);
    msg.setSource(39471U);
    msg.setSourceEntity(199U);
    msg.setDestination(40869U);
    msg.setDestinationEntity(20U);
    msg.state = 5U;
    msg.eta = 52002U;
    msg.info.assign("SDCVGDJIGWDORGOGCVPRGUDWXIVPQCGDVCZBLOMOSMLYUSEAAVBTSXFUIKOAXTJRJLFFRCBCNMRVXUFWZUMPKRYELOSHMQLDHKZRJAHYDMGPSNJILXYJBYMNIHWZYMCPZRKZHJNIFWAZHKMGOGNXP");

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
    msg.setTimeStamp(0.200395277688);
    msg.setSource(30831U);
    msg.setSourceEntity(195U);
    msg.setDestination(365U);
    msg.setDestinationEntity(47U);
    msg.system = 22231U;
    msg.duration = 12962U;
    msg.speed = 0.670287966097;
    msg.speed_units = 151U;
    msg.x = 0.103468727849;
    msg.y = 0.272537137267;
    msg.z = 0.902163601158;
    msg.z_units = 165U;

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
    msg.setTimeStamp(0.932168738963);
    msg.setSource(56298U);
    msg.setSourceEntity(136U);
    msg.setDestination(4982U);
    msg.setDestinationEntity(174U);
    msg.system = 6275U;
    msg.duration = 63061U;
    msg.speed = 0.329359150847;
    msg.speed_units = 122U;
    msg.x = 0.782863392425;
    msg.y = 0.757526938523;
    msg.z = 0.204609924735;
    msg.z_units = 232U;

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
    msg.setTimeStamp(0.967747265916);
    msg.setSource(2079U);
    msg.setSourceEntity(57U);
    msg.setDestination(940U);
    msg.setDestinationEntity(149U);
    msg.system = 26914U;
    msg.duration = 22751U;
    msg.speed = 0.797762100843;
    msg.speed_units = 51U;
    msg.x = 0.283513326968;
    msg.y = 0.792157199023;
    msg.z = 0.435479178253;
    msg.z_units = 199U;

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
    msg.setTimeStamp(0.19658587365);
    msg.setSource(33962U);
    msg.setSourceEntity(40U);
    msg.setDestination(63893U);
    msg.setDestinationEntity(117U);
    msg.lat = 0.615968264747;
    msg.lon = 0.586365877495;
    msg.speed = 0.954915947094;
    msg.speed_units = 225U;
    msg.duration = 42044U;
    msg.sys_a = 44931U;
    msg.sys_b = 32112U;
    msg.move_threshold = 0.874254357703;

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
    msg.setTimeStamp(0.0531198908483);
    msg.setSource(65151U);
    msg.setSourceEntity(75U);
    msg.setDestination(18827U);
    msg.setDestinationEntity(251U);
    msg.lat = 0.815605748637;
    msg.lon = 0.177905461768;
    msg.speed = 0.557877187329;
    msg.speed_units = 221U;
    msg.duration = 2488U;
    msg.sys_a = 33526U;
    msg.sys_b = 31184U;
    msg.move_threshold = 0.569899300559;

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
    msg.setTimeStamp(0.199377098003);
    msg.setSource(1547U);
    msg.setSourceEntity(150U);
    msg.setDestination(8975U);
    msg.setDestinationEntity(113U);
    msg.lat = 0.207907432388;
    msg.lon = 0.293192093031;
    msg.speed = 0.402430954587;
    msg.speed_units = 65U;
    msg.duration = 56791U;
    msg.sys_a = 19393U;
    msg.sys_b = 18085U;
    msg.move_threshold = 0.429540306115;

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
    msg.setTimeStamp(0.0774777094022);
    msg.setSource(63781U);
    msg.setSourceEntity(128U);
    msg.setDestination(7764U);
    msg.setDestinationEntity(78U);
    msg.lat = 0.186594119688;
    msg.lon = 0.430759897204;
    msg.z = 0.116138585407;
    msg.z_units = 170U;
    msg.speed = 0.859164302186;
    msg.speed_units = 66U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.605444403713;
    tmp_msg_0.lon = 0.854384361503;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("AEOZKWOTASQBSZBRZSSXCEVAIJQYQERXUGEGISUMYTNOXZGKFFQSTZKBNWBTTIICYRITIAZXUZWNBUSYUFXIKFNQJAEKLHVQHCXNVDQQWJBKGNDLAYRENFWQAIVGNPVWRKJLHPMQXOPYLXKRALYTRLVYTMKSBSWWFZMKOYGCIDVJNW");

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
    msg.setTimeStamp(0.624111737522);
    msg.setSource(53675U);
    msg.setSourceEntity(210U);
    msg.setDestination(12796U);
    msg.setDestinationEntity(83U);
    msg.lat = 0.892197040001;
    msg.lon = 0.0557056613773;
    msg.z = 0.423913557447;
    msg.z_units = 49U;
    msg.speed = 0.235112496821;
    msg.speed_units = 75U;
    msg.custom.assign("NODBGOLWAAPXFYDUFIFWLTEAJPGJBWMPVKSTVQLEZRHIMRQCKSWSWAITOCEZDXSHZJOIAYLRXVYHKDJYRYKAQTOOUNXSMTUZHQNUGBVEOCEMUBSJBYYUGFDYQFKYCSNGCDXHPTRIOFEXHKKUBD");

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
    msg.setTimeStamp(0.331662668056);
    msg.setSource(2356U);
    msg.setSourceEntity(220U);
    msg.setDestination(53066U);
    msg.setDestinationEntity(52U);
    msg.lat = 0.76782490144;
    msg.lon = 0.864152832115;
    msg.z = 0.977090538843;
    msg.z_units = 19U;
    msg.speed = 0.418478335277;
    msg.speed_units = 31U;
    msg.custom.assign("NGXEWOCELRHDYCLEDXSMXKEXBAOKURCNYJTADMOOCGYVSCEGIEHMAAKSVWAGQPTIJYMSUNTTSHNXROCKJDPLREQTVBKYYDEHUQKJVFUHRRGGWZHVRLGQPSVWQZWGBYZNFIDTGF");

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
    msg.setTimeStamp(0.720561567393);
    msg.setSource(48248U);
    msg.setSourceEntity(186U);
    msg.setDestination(44127U);
    msg.setDestinationEntity(30U);
    msg.lat = 0.941851399175;
    msg.lon = 0.793405282353;

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
    msg.setTimeStamp(0.549772509009);
    msg.setSource(26857U);
    msg.setSourceEntity(41U);
    msg.setDestination(36637U);
    msg.setDestinationEntity(136U);
    msg.lat = 0.359975670538;
    msg.lon = 0.960853072557;

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
    msg.setTimeStamp(0.523540518985);
    msg.setSource(64981U);
    msg.setSourceEntity(115U);
    msg.setDestination(56903U);
    msg.setDestinationEntity(145U);
    msg.lat = 0.912195672312;
    msg.lon = 0.541138622451;

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
    msg.setTimeStamp(0.328595217859);
    msg.setSource(28952U);
    msg.setSourceEntity(222U);
    msg.setDestination(21368U);
    msg.setDestinationEntity(253U);
    msg.timeout = 24652U;
    msg.lat = 0.390953558054;
    msg.lon = 0.447111650191;
    msg.z = 0.896493834042;
    msg.z_units = 230U;
    msg.pitch = 0.473605975254;
    msg.amplitude = 0.816364989142;
    msg.duration = 19541U;
    msg.speed = 0.765764057989;
    msg.speed_units = 208U;
    msg.radius = 0.885032388108;
    msg.direction = 73U;
    msg.custom.assign("ECHPRZTAAPPUKGYRWYHNLWISOBRGHZSAWNKWDGOZQUDN");

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
    msg.setTimeStamp(0.116985967169);
    msg.setSource(37339U);
    msg.setSourceEntity(204U);
    msg.setDestination(40712U);
    msg.setDestinationEntity(15U);
    msg.timeout = 50247U;
    msg.lat = 0.144333460547;
    msg.lon = 0.208361416236;
    msg.z = 0.923740781172;
    msg.z_units = 231U;
    msg.pitch = 0.535174027843;
    msg.amplitude = 0.544387907987;
    msg.duration = 6462U;
    msg.speed = 0.689006198102;
    msg.speed_units = 164U;
    msg.radius = 0.913420282571;
    msg.direction = 82U;
    msg.custom.assign("SJFEIYEQXUAOPIXYSZXPTGUHUVSQCTKWEKKXLRDXPIGSHUFDBCFJMYCONXUTWNPNKTAFZGASCGSIZVOHJBMGAZPQYYNLXPHAIYAIUIJQNDTWKTFVQNBMJZBKLTHBJEMRLWBAKBCNRQFWXFLYKBMSEOYHR");

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
    msg.setTimeStamp(0.149665372354);
    msg.setSource(4796U);
    msg.setSourceEntity(68U);
    msg.setDestination(39535U);
    msg.setDestinationEntity(240U);
    msg.timeout = 27698U;
    msg.lat = 0.241556345597;
    msg.lon = 0.794082460999;
    msg.z = 0.189793144587;
    msg.z_units = 104U;
    msg.pitch = 0.859025773075;
    msg.amplitude = 0.0971413986107;
    msg.duration = 23665U;
    msg.speed = 0.108330770114;
    msg.speed_units = 141U;
    msg.radius = 0.74493217416;
    msg.direction = 117U;
    msg.custom.assign("QEMNKDBDTTVEUXPJEAOAVWBNOSGXGXYEVBWZHCHCOVOWIUBSFUHMQPVZMSPJQJKZWFIZRWPISPVDHDGSWGLFLTECIXQVDLRZ");

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
    msg.setTimeStamp(0.173001212397);
    msg.setSource(16841U);
    msg.setSourceEntity(238U);
    msg.setDestination(40970U);
    msg.setDestinationEntity(13U);
    msg.formation_name.assign("WDFWXTHJVEFCPVBTWTYHGLDEHHGCOUHXDXDGFTROQMIDQQXYMSTMVFWWZLECEUQZUNSBQTYKQOBBUTDUSXMIRZIEEPLIUOEANSYPKDLVQGDKSNFLASKAAOKYINOSUGXOXNPRCSFKBOPMVVZWMWNZBNYTARKDZSEJPIWZWVMAFVJGYQHVJHNNGPLBQCERPUFAYQMLCESORHJUBOYXHCJIBRPZARDJJYZBZUJRVKRPKCG");
    msg.reference_frame = 172U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 20441U;
    tmp_msg_0.off_x = 0.961707855938;
    tmp_msg_0.off_y = 0.456899817809;
    tmp_msg_0.off_z = 0.147411272939;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("CXMLCBCHRFJHPVCPBEAROAUTOSSONQKODOOSZHVSVZNFUKRCAAWYIWCWVOXOXXXRWGHPYEMXZLFIEQQEUDKCZTJE");

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
    msg.setTimeStamp(0.292175205775);
    msg.setSource(10840U);
    msg.setSourceEntity(35U);
    msg.setDestination(63444U);
    msg.setDestinationEntity(132U);
    msg.formation_name.assign("OARSQGSDUURWEKZIIBJUV");
    msg.reference_frame = 38U;
    msg.custom.assign("HQHBEBURIQKHFCWUQYBCHJOGNDESXTRVYWMQFAIXZLFDVWGMZULPZRWZRRPILHJVKQGXIWLSSYBXDLTYRTPNMGOFMSNFJODBDLPIEMARHBQFUJHTAVMPKMN");

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
    msg.setTimeStamp(0.127082805375);
    msg.setSource(39707U);
    msg.setSourceEntity(117U);
    msg.setDestination(10382U);
    msg.setDestinationEntity(18U);
    msg.formation_name.assign("ANELADWBPJRGQPYDKVFPOCEXKMFSRGZOWPGHINXFXQHJRNAOBYKDKEESOMFXHBXTOZTNUBZZCCZPEMFBLQYDUCTMAWSOLYDMVUMSVAGVCFOEIALSQYQFRGHDLIHUXIRGXGNSCJEBMNKFQNZKTARJDRBRYZCYTKLJQAVJHZOLHNNIIZKYJMJSVGXEWDRDFTDSKIYHTVTHVHUSEUQRPXZUGPUIJWFCWOAVTEXPOJBAQGWMPSP");
    msg.reference_frame = 87U;
    msg.custom.assign("SBGRPPPALLOBITHOEWCPXUZJCBLCGYJHFZIOFRJGQYPWWLAOVAWDXMDTHOWOXPLIPIEVGLDRDEXQOCKUWAXUXDZJIBYRFLTYFEKLBKNWQTHUVCYCASWRHMEGQRVLUOIBZCXOKZFBFNGNJNBNWKVTGZZI");

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
    msg.setTimeStamp(0.267335047797);
    msg.setSource(34296U);
    msg.setSourceEntity(6U);
    msg.setDestination(4903U);
    msg.setDestinationEntity(235U);
    msg.group_name.assign("KGZSWXBZMFGNOLABZXMPIJZHREEZRBERTMPUAWQDQZIXTSVAYCYGRMTFMCOBZDJLOSGNLOUMZBTKRQKSIYJNPTJRCMNMYIIBFEJHUGBWRSYKCPYEUGDCLSXNIENLLCEGQXFUDHJIQRVCVEOTFSNKFWCMOLCDKNQAQOUATKQUBXKLJYDKFDWZGJWXIPJEHWYCVLHVSARADHOU");
    msg.formation_name.assign("QANDLQPVHXSSWVQEIUDNVSXSCGRUKQRNJOFZWNIYXFDMITKCORMLYZBRGYPOWINVKOKQEFXXBRRGXBZLPWVJGWOQCZZYTATFRMRVPWVGNAIBJOJFEROIVPLSTFQBAHAOLDYNWYDJMPFTJDGHNZKOWAAMUENSSCPBCAIVJEMVYXBYDAQAPKISEFCIELEUKTHEBUYJYGHEKBUMTHTDTCHUMILHMMZPSDG");
    msg.plan_id.assign("KLRTJAIMAQSEXESTELGNHNTNPBUNGWXXQSTDPRAHLICHIIHRJVWDPEOIONPCUDSLWNEQHCSAMUIGACNREUWMWKRYZDYBLSJYVFZFPKPBGNFKY");
    msg.description.assign("BNJZTBYYZALR");
    msg.leader_speed = 0.876225246215;
    msg.leader_bank_lim = 0.593002409015;
    msg.pos_sim_err_lim = 0.760198407648;
    msg.pos_sim_err_wrn = 0.911568269754;
    msg.pos_sim_err_timeout = 50372U;
    msg.converg_max = 0.0187343629213;
    msg.converg_timeout = 30111U;
    msg.comms_timeout = 33847U;
    msg.turb_lim = 0.653495981862;
    msg.custom.assign("LLRKBKCMOGXONTARUUCDVYMVRLCQTLRPBHDBYXFOTZKJWBXKQWOA");

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
    msg.setTimeStamp(0.915031632258);
    msg.setSource(9883U);
    msg.setSourceEntity(231U);
    msg.setDestination(13619U);
    msg.setDestinationEntity(33U);
    msg.group_name.assign("EMADSNREFPRZXBIUTMRZUPSUKOUGUEHJVLDRJIGMSMKHAQUTFBIMZHRSMGDLGLFJZHZQFTIKNVKUEQAOAWGUJLQYJVNM");
    msg.formation_name.assign("YAGMRXOKIRHUSHFUYTABOUSJLAPFHOTIXRREVZOZEUOYPHIKLYEDCUVDDDYZVPVVBGHORZNLHXPJSQDMSWGWIKKLBLQVQQYBWTHNCYZLDIPFMFAXMKPUEPNQGCIBBHDQXUHFWBJWTVQSWSTLCYMWSFKLJZOMSEZGJCPALXGWUCEKBMWTMOAABFOMGPQWJIVNDNHFEKOVCTJCZUNXSDNFTRQGXJYIZBCGGJZIKERYK");
    msg.plan_id.assign("HAMLVNGFTOCOSSTDGDDYIZZRFLUHKCO");
    msg.description.assign("SEFBPOCBMNLCRCFXZLNADYBGYHQYOHDXIAQTRUOUXSILNXRAHKHGWPQFWGQXWLJVBDTMFOEEWITAVODJPNXKEATSLBFZNJA");
    msg.leader_speed = 0.626801112367;
    msg.leader_bank_lim = 0.962686033542;
    msg.pos_sim_err_lim = 0.550067853371;
    msg.pos_sim_err_wrn = 0.6521782513;
    msg.pos_sim_err_timeout = 7295U;
    msg.converg_max = 0.424870085091;
    msg.converg_timeout = 16741U;
    msg.comms_timeout = 44574U;
    msg.turb_lim = 0.700869105831;
    msg.custom.assign("JFQGDFHQHDFKNZLYQOCYAIRBXUYIGGKQWROHPSBNIQBALRNATWHEKNEZOKACMXSVPREJWSBEREVCRZHAYXBXIRFNMENDJTAFENZTELVWDAHPIULMHGBDQPLUQPUMFTGMPUIISHOAVZESCTJTO");

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
    msg.setTimeStamp(0.180383965797);
    msg.setSource(12173U);
    msg.setSourceEntity(181U);
    msg.setDestination(35480U);
    msg.setDestinationEntity(160U);
    msg.group_name.assign("BOKWRIXHDZBTDQZNTCRPLKUNVEJXCDFFZAGHDSSMJWHTWBYSQDVYKWUPDNJVXIBFPRRAOUBADFHYONKJPWESYHPYIOINLEBMACCUHENCJAIOIQSMIFRKMKVTTELBLATVWCXAXCZOGVASZJIUOZBSNSAYXIE");
    msg.formation_name.assign("SNFIEWXLVBPNALMMFIPVBEZGOXABLXOENASKCVZNNXRLOXTSKIJZDEZASHLNRIKBKRETJZGEJOJGQADLUFOOZMHQDQACVPBFNARORYLWIPHWXCNWVDUGIYQFEFEOCFJYHKYJFYBRMVDMWORDCQRMKFYWQHCUYTWXSAVLNMPUVTCIMUGKBCNZGQKCHFSQJQHGIPJZLTVRYYEDTQTBBDHGVPMTZEUUS");
    msg.plan_id.assign("TPTFSGCPKVGEEVHWCECFEOQJRLIMBJDWZVRREDRQBXJVZMOGWTTIXHIKCVOCBYVWZFFFHPUVEMLGBQSTGIWLCOCPZQLEWTHOJLBJHJXFAYKDZVJNCMMQLRABFOBEXMMAIUSDLXXATKMHOZXACNSYKAZGYNKMPUNEQZKGQLIDWWWHAPTR");
    msg.description.assign("LFXDVVFVOEYF");
    msg.leader_speed = 0.0942338609659;
    msg.leader_bank_lim = 0.278812007568;
    msg.pos_sim_err_lim = 0.423709369795;
    msg.pos_sim_err_wrn = 0.479966444377;
    msg.pos_sim_err_timeout = 35066U;
    msg.converg_max = 0.391415253704;
    msg.converg_timeout = 47647U;
    msg.comms_timeout = 21626U;
    msg.turb_lim = 0.678441217806;
    msg.custom.assign("EGGHYFPXDORJFIMGUUEQRKLVHQPNTNCOOAFIGLBBZQAZCWYTFRIJATVTWYUIKPDYUSUXLVSXBJYYTHZXVYRTOQHHCNIPQVSUXMZHDEBRSOTNIJVPKZWAFSCOZDCFOJMRLZCBYMKBAIEDELXFMEIBVSADKTMPWWMAANWJTOLRPMUGXAHKVQEEZOGNAHJSTGWQDJBECIJVLO");

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
    msg.setTimeStamp(0.35231334816);
    msg.setSource(39711U);
    msg.setSourceEntity(199U);
    msg.setDestination(26350U);
    msg.setDestinationEntity(105U);
    msg.control_src = 18503U;
    msg.control_ent = 199U;
    msg.timeout = 0.47218023733;
    msg.loiter_radius = 0.403478414546;
    msg.altitude_interval = 0.817014769037;

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
    msg.setTimeStamp(0.30341054238);
    msg.setSource(37546U);
    msg.setSourceEntity(82U);
    msg.setDestination(38432U);
    msg.setDestinationEntity(72U);
    msg.control_src = 13407U;
    msg.control_ent = 218U;
    msg.timeout = 0.56409904418;
    msg.loiter_radius = 0.580073671192;
    msg.altitude_interval = 0.386539348958;

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
    msg.setTimeStamp(0.66393800747);
    msg.setSource(33271U);
    msg.setSourceEntity(244U);
    msg.setDestination(9508U);
    msg.setDestinationEntity(163U);
    msg.control_src = 58856U;
    msg.control_ent = 126U;
    msg.timeout = 0.451951258193;
    msg.loiter_radius = 0.619695204051;
    msg.altitude_interval = 0.00888306400502;

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
    msg.setTimeStamp(0.738861237144);
    msg.setSource(54607U);
    msg.setSourceEntity(250U);
    msg.setDestination(29969U);
    msg.setDestinationEntity(48U);
    msg.flags = 238U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.12688580503;
    tmp_msg_0.speed_units = 237U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.831330121593;
    tmp_msg_1.z_units = 194U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.98619803704;
    msg.lon = 0.708504602824;
    msg.radius = 0.503849616144;

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
    msg.setTimeStamp(0.0778109170749);
    msg.setSource(57631U);
    msg.setSourceEntity(243U);
    msg.setDestination(27480U);
    msg.setDestinationEntity(161U);
    msg.flags = 61U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.783859635059;
    tmp_msg_0.speed_units = 228U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.285894772709;
    tmp_msg_1.z_units = 57U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.247556670848;
    msg.lon = 0.250870233842;
    msg.radius = 0.984009387516;

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
    msg.setTimeStamp(0.872397197213);
    msg.setSource(33544U);
    msg.setSourceEntity(92U);
    msg.setDestination(64004U);
    msg.setDestinationEntity(209U);
    msg.flags = 182U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.331891338176;
    tmp_msg_0.speed_units = 251U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.165174456813;
    tmp_msg_1.z_units = 134U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.0461302927354;
    msg.lon = 0.159176198647;
    msg.radius = 0.225353572473;

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
    msg.setTimeStamp(0.0802080725407);
    msg.setSource(10265U);
    msg.setSourceEntity(161U);
    msg.setDestination(52968U);
    msg.setDestinationEntity(142U);
    msg.control_src = 64765U;
    msg.control_ent = 158U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 154U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.650586997187;
    tmp_tmp_msg_0_0.speed_units = 6U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.629812024096;
    tmp_tmp_msg_0_1.z_units = 234U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.123107894615;
    tmp_msg_0.lon = 0.897069024691;
    tmp_msg_0.radius = 0.859864722709;
    msg.reference.set(tmp_msg_0);
    msg.state = 151U;
    msg.proximity = 117U;

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
    msg.setTimeStamp(0.395830730579);
    msg.setSource(35324U);
    msg.setSourceEntity(200U);
    msg.setDestination(40936U);
    msg.setDestinationEntity(188U);
    msg.control_src = 55541U;
    msg.control_ent = 222U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 168U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.476890004552;
    tmp_tmp_msg_0_0.speed_units = 229U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.302595097184;
    tmp_tmp_msg_0_1.z_units = 66U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.378382970618;
    tmp_msg_0.lon = 0.170748025381;
    tmp_msg_0.radius = 0.0314040748022;
    msg.reference.set(tmp_msg_0);
    msg.state = 196U;
    msg.proximity = 209U;

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
    msg.setTimeStamp(0.510847596948);
    msg.setSource(23387U);
    msg.setSourceEntity(109U);
    msg.setDestination(59272U);
    msg.setDestinationEntity(127U);
    msg.control_src = 37384U;
    msg.control_ent = 202U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 110U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.223993414863;
    tmp_tmp_msg_0_0.speed_units = 32U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.217954483455;
    tmp_tmp_msg_0_1.z_units = 177U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.329771315416;
    tmp_msg_0.lon = 0.669533394383;
    tmp_msg_0.radius = 0.529441844299;
    msg.reference.set(tmp_msg_0);
    msg.state = 46U;
    msg.proximity = 245U;

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
    msg.setTimeStamp(0.371323853041);
    msg.setSource(57714U);
    msg.setSourceEntity(254U);
    msg.setDestination(37503U);
    msg.setDestinationEntity(171U);
    msg.ax_cmd = 0.199438832229;
    msg.ay_cmd = 0.81003293491;
    msg.az_cmd = 0.664605917656;
    msg.ax_des = 0.872452468054;
    msg.ay_des = 0.552097827811;
    msg.az_des = 0.0318607007348;
    msg.virt_err_x = 0.0833524093566;
    msg.virt_err_y = 0.150820623845;
    msg.virt_err_z = 0.703640268546;
    msg.surf_fdbk_x = 0.400541524722;
    msg.surf_fdbk_y = 0.713846587647;
    msg.surf_fdbk_z = 0.55703400415;
    msg.surf_unkn_x = 0.00862272909494;
    msg.surf_unkn_y = 0.69613545422;
    msg.surf_unkn_z = 0.657380481176;
    msg.ss_x = 0.196972441529;
    msg.ss_y = 0.249148533353;
    msg.ss_z = 0.248283565873;

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
    msg.setTimeStamp(0.0378776981549);
    msg.setSource(61665U);
    msg.setSourceEntity(44U);
    msg.setDestination(18859U);
    msg.setDestinationEntity(119U);
    msg.ax_cmd = 0.975155613305;
    msg.ay_cmd = 0.680682906429;
    msg.az_cmd = 0.302222798548;
    msg.ax_des = 0.637461055527;
    msg.ay_des = 0.249265842927;
    msg.az_des = 0.297974279733;
    msg.virt_err_x = 0.590752818268;
    msg.virt_err_y = 0.859126652997;
    msg.virt_err_z = 0.330011669851;
    msg.surf_fdbk_x = 0.0704097316916;
    msg.surf_fdbk_y = 0.753970428626;
    msg.surf_fdbk_z = 0.308921569648;
    msg.surf_unkn_x = 0.488048852565;
    msg.surf_unkn_y = 0.0493090824306;
    msg.surf_unkn_z = 0.935237699153;
    msg.ss_x = 0.921459521399;
    msg.ss_y = 0.426769357759;
    msg.ss_z = 0.622477732689;

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
    msg.setTimeStamp(0.711871851497);
    msg.setSource(21066U);
    msg.setSourceEntity(169U);
    msg.setDestination(55478U);
    msg.setDestinationEntity(136U);
    msg.ax_cmd = 0.788504400532;
    msg.ay_cmd = 0.573728004528;
    msg.az_cmd = 0.767733452027;
    msg.ax_des = 0.617475210715;
    msg.ay_des = 0.507674829568;
    msg.az_des = 0.492665021569;
    msg.virt_err_x = 0.978140615187;
    msg.virt_err_y = 0.292651722653;
    msg.virt_err_z = 0.952799243788;
    msg.surf_fdbk_x = 0.62942223217;
    msg.surf_fdbk_y = 0.204836196141;
    msg.surf_fdbk_z = 0.531129185799;
    msg.surf_unkn_x = 0.787953764785;
    msg.surf_unkn_y = 0.399783482934;
    msg.surf_unkn_z = 0.460479970151;
    msg.ss_x = 0.0880529411815;
    msg.ss_y = 0.508020361484;
    msg.ss_z = 0.189329984977;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("PNFKTBDAMOPMLBBFXENDUARZTXJYILQEBREGRCNADSBEQIEUOMUVLWPFQBJJXDZEAAFAIJYJLFHFXIOLXEPLVUUWBVJQSECRMPZPLCGSXNIUNOQULQXDPJSGODQKGZFQFIOHNHPZZHACVQHTYHKKVVAYYWSIJWRDFYMJPHUWRNPYCSOHWCHXRTZKCTCGNMCRVGMX");
    tmp_msg_0.dist = 0.560402432788;
    tmp_msg_0.err = 0.890641446123;
    tmp_msg_0.ctrl_imp = 0.251469052231;
    tmp_msg_0.rel_dir_x = 0.694300307091;
    tmp_msg_0.rel_dir_y = 0.428121418936;
    tmp_msg_0.rel_dir_z = 0.436969985408;
    tmp_msg_0.err_x = 0.629452162843;
    tmp_msg_0.err_y = 0.113801047812;
    tmp_msg_0.err_z = 0.12218992186;
    tmp_msg_0.rf_err_x = 0.302523353233;
    tmp_msg_0.rf_err_y = 0.982748111554;
    tmp_msg_0.rf_err_z = 0.592406194299;
    tmp_msg_0.rf_err_vx = 0.158779798103;
    tmp_msg_0.rf_err_vy = 0.443429828211;
    tmp_msg_0.rf_err_vz = 0.236664234466;
    tmp_msg_0.ss_x = 0.35883625512;
    tmp_msg_0.ss_y = 0.263112678296;
    tmp_msg_0.ss_z = 0.41888023547;
    tmp_msg_0.virt_err_x = 0.268218005672;
    tmp_msg_0.virt_err_y = 0.0309078202036;
    tmp_msg_0.virt_err_z = 0.586888866834;
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
    msg.setTimeStamp(0.400767423055);
    msg.setSource(49832U);
    msg.setSourceEntity(15U);
    msg.setDestination(51277U);
    msg.setDestinationEntity(94U);
    msg.s_id.assign("LXRMZSPSLTKLXOTIFNERRXSPPYMNZEJGDMOWXQFVMXODULDMVXIFZDQFNUCEHJLOQOEVRFPSQARHVAKSUOTXAQAFEVYHNGBPIIHAZOTLWKNQZBZFBXKUQTGYDVLZHKAJCCWEIGUESIPUTGDCDUWLPHUYGNUCRIBWAHFNAMDHWTVCJKNBVQNVCBAEPBSQNIJJUOMWXCWJTJYLZDYVIWZPXYFMYSRP");
    msg.dist = 0.386638164418;
    msg.err = 0.817094208941;
    msg.ctrl_imp = 0.176186465612;
    msg.rel_dir_x = 0.840073744025;
    msg.rel_dir_y = 0.169898221056;
    msg.rel_dir_z = 0.184636274258;
    msg.err_x = 0.431450898925;
    msg.err_y = 0.996753841674;
    msg.err_z = 0.143929566512;
    msg.rf_err_x = 0.137552537086;
    msg.rf_err_y = 0.336473689362;
    msg.rf_err_z = 0.452149544326;
    msg.rf_err_vx = 0.130477006572;
    msg.rf_err_vy = 0.846396849638;
    msg.rf_err_vz = 0.5410876058;
    msg.ss_x = 0.606889739805;
    msg.ss_y = 0.234167906815;
    msg.ss_z = 0.773224198897;
    msg.virt_err_x = 0.185970996919;
    msg.virt_err_y = 0.31532705698;
    msg.virt_err_z = 0.108112981286;

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
    msg.setTimeStamp(0.379733355879);
    msg.setSource(36654U);
    msg.setSourceEntity(121U);
    msg.setDestination(34896U);
    msg.setDestinationEntity(22U);
    msg.s_id.assign("IRZSRZDBCKUVOVAGUTIKPYAYNUMAJTEQVCNBESLMOSBRLUXPJYBVXGKWKBCFMVXTEYLMFWOQFHEOBZPLUSAHXIBCNMZQZPWCPGFFNMAARVROXMFEVOBTKICPDNQUSJJNWLPOWJJOUUDFRGQZNKHJATBNXEOQKILPWEZYKVISWKRGIWCYHSZHFSDMYXZKGDXTTINEYRQJCDGTQMJUIHEIWFHPCHDRPJLGXTAHMUDYDVDEALBSGTQOVYQSCN");
    msg.dist = 0.307304050076;
    msg.err = 0.987272423138;
    msg.ctrl_imp = 0.750023432742;
    msg.rel_dir_x = 0.0877154706749;
    msg.rel_dir_y = 0.284667692823;
    msg.rel_dir_z = 0.175807658723;
    msg.err_x = 0.932891569917;
    msg.err_y = 0.859690584866;
    msg.err_z = 0.623795254277;
    msg.rf_err_x = 0.577293148801;
    msg.rf_err_y = 0.624313612044;
    msg.rf_err_z = 0.0110308751861;
    msg.rf_err_vx = 0.680182853731;
    msg.rf_err_vy = 0.914735281818;
    msg.rf_err_vz = 0.327595007257;
    msg.ss_x = 0.265553986952;
    msg.ss_y = 0.360272605248;
    msg.ss_z = 0.640838878896;
    msg.virt_err_x = 0.575884999741;
    msg.virt_err_y = 0.149719523725;
    msg.virt_err_z = 0.142650030981;

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
    msg.setTimeStamp(0.437604777057);
    msg.setSource(45084U);
    msg.setSourceEntity(181U);
    msg.setDestination(22024U);
    msg.setDestinationEntity(55U);
    msg.s_id.assign("JOCXLPFMGDZFHKPCYNRVZYNPIYXUGCCXUSGLSLTUPISJBAATSJODPMQIZEZRFWEVWCTMGUTMMIRPKURSDSQKN");
    msg.dist = 0.12506812088;
    msg.err = 0.467966037951;
    msg.ctrl_imp = 0.195339171755;
    msg.rel_dir_x = 0.826923188767;
    msg.rel_dir_y = 0.36488745418;
    msg.rel_dir_z = 0.900316986149;
    msg.err_x = 0.66618230375;
    msg.err_y = 0.262861069732;
    msg.err_z = 0.892186649178;
    msg.rf_err_x = 0.969385129587;
    msg.rf_err_y = 0.152919312619;
    msg.rf_err_z = 0.229873538273;
    msg.rf_err_vx = 0.419364374988;
    msg.rf_err_vy = 0.571450983852;
    msg.rf_err_vz = 0.0156605980403;
    msg.ss_x = 0.970965625812;
    msg.ss_y = 0.774839994593;
    msg.ss_z = 0.588222118087;
    msg.virt_err_x = 0.653689319019;
    msg.virt_err_y = 0.92598194399;
    msg.virt_err_z = 0.264355373257;

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
    msg.setTimeStamp(0.385453765907);
    msg.setSource(62643U);
    msg.setSourceEntity(2U);
    msg.setDestination(47332U);
    msg.setDestinationEntity(218U);
    msg.timeout = 40901U;
    msg.rpm = 0.752970605785;
    msg.direction = 208U;
    msg.custom.assign("MRUJGXQAKGPMYFCMVOHLUKYMSTBYZYGESTDALHJJBSUTMEQZDIEXBRZPYOUASNEHNBTGEHLICHOCITGNVBTAWSPOWLUIFTUQHFRKOVZKAPWIDVRBAJLMELDEOJNGOFDOJF");

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
    msg.setTimeStamp(0.107062217811);
    msg.setSource(24316U);
    msg.setSourceEntity(182U);
    msg.setDestination(39815U);
    msg.setDestinationEntity(38U);
    msg.timeout = 28406U;
    msg.rpm = 0.284192823688;
    msg.direction = 67U;
    msg.custom.assign("ZDDWYBHYZVGTNIHMYJVPFVYUMOTMPVGNJRTOYYCKNUJSLTFMDWTVSPEMNFHDPKCSGUGXWQTIOAWDRSLZHEQBQAKDD");

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
    msg.setTimeStamp(0.317841967209);
    msg.setSource(29468U);
    msg.setSourceEntity(216U);
    msg.setDestination(34266U);
    msg.setDestinationEntity(211U);
    msg.timeout = 51424U;
    msg.rpm = 0.75689336293;
    msg.direction = 131U;
    msg.custom.assign("ZIZASGHGPFNRPASSIHDFCDTBKXQKKBTFYVRPAHUPRCILFGEHCYYWZTJTOJVMBIUJNNGJRLXTCHKVSXFCDPKJTDVOAYZLJDACOWFWOGCWGPXYERBPVSQLUIYXSWGMTMCMQOOMQIPAANYZTIOUUHBLRUDLBXVWKMGJMEVPUOZHKZKECHTMSVLCJVENUFXQFNFDZXJSQEGHGQMUDILOWPWWDSEAXYQKDBLRBVIMSXBYAZLBFRZHN");

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
    msg.setTimeStamp(0.563855382174);
    msg.setSource(33322U);
    msg.setSourceEntity(52U);
    msg.setDestination(21652U);
    msg.setDestinationEntity(139U);
    msg.formation_name.assign("PKUZTYOJIAUGVNSVRGOXMXGVQPPPOJLMFECABKRPLMKFFARZEVABOBYKCJNAXXYQCMWQOYJKAEVIIJIUKOIGHFJUMEDUCFFMPUPHWTSWCTYWZPHBQSOQISEQLDOCMCZGDOREVDEXFCJLWBQLTHGRAZLQUJJLRNTTRVDAGVKLNZMHFGNMWQTWZUAWYYMSTYNKUICRRLQDXLWEXSBNHSHXNBPYDNZKDZVEAJZIESCXGFXD");
    msg.type = 168U;
    msg.op = 167U;
    msg.group_name.assign("SRFQNGZCSTRPMAYAKOBBZQZDVJGFIXVCYETXSNRZDEOUSOMMPDXQGYWJFTLALIRNQJSUHBVTMHHEJXMWAX");
    msg.plan_id.assign("AUUXOMYFCSOQKQIIXWJPBPZEACLMQVZSDNNCQHDYRDJLRVRIIDYONFZFGURHFASMEOODILNUWEXJFGVJ");
    msg.description.assign("YYXHQNTKXTJRPVEASKBAOGQYSKFWQEOXWOCHKBJFLKLTRDVRPBRZMJECMQIUVQNHXTVUUVIDNZXTQNTZKTKGICXLWBGHPQIBEGHAEOWFHHZRFBYLHKUFRFLSMXGCMPMIOWOJNIXADFARGLGJXNGQDGRARJNPIZVHPSOJPAWEUAWRQXWLMDDGQCCCHMZSPECNDESZYOSJMUNJZPVZYEKSOMUSYWBJLIFAZIIAWOCKBBLDDMTYVCYYBVFVEFTPSD");
    msg.reference_frame = 147U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 43771U;
    tmp_msg_0.off_x = 0.878199528957;
    tmp_msg_0.off_y = 0.125556525932;
    tmp_msg_0.off_z = 0.872358952914;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.34826697805;
    msg.leader_speed_min = 0.360421640741;
    msg.leader_speed_max = 0.158970403103;
    msg.leader_alt_min = 0.880737296666;
    msg.leader_alt_max = 0.102617281888;
    msg.pos_sim_err_lim = 0.945551143037;
    msg.pos_sim_err_wrn = 0.461435347843;
    msg.pos_sim_err_timeout = 60655U;
    msg.converg_max = 0.687987967136;
    msg.converg_timeout = 54635U;
    msg.comms_timeout = 26140U;
    msg.turb_lim = 0.271604750938;
    msg.custom.assign("KHNMGRWWQPZTLFZEQOVGBYKOYSEINOBEPVHHGKGOJIQSZFRCKBLV");

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
    msg.setTimeStamp(0.436897584967);
    msg.setSource(41989U);
    msg.setSourceEntity(232U);
    msg.setDestination(8898U);
    msg.setDestinationEntity(247U);
    msg.formation_name.assign("BCQYCUOANBWJZKEXQTZONDLAUMFVKRZEIWTXPGQGFCNVAPOHYDVHBMRPSSBSBGNRRJELJLIMCZYKORILEX");
    msg.type = 17U;
    msg.op = 180U;
    msg.group_name.assign("GTEZGTCNPKCCWFUMRUEJXSFYGKOUIXDAWSGVBOOQPDFQBHMHZXOSRMTMLRLLZNLJSUVLQTHMKIDULCZMGDTVAWXSRQZEJJHSBIADHLYWCUCRBDPYNMA");
    msg.plan_id.assign("UMDOMBXXRZPYXAKH");
    msg.description.assign("SDEIQXQJXRAISDNFKNQEIJEPGZVDUFEPFSOMRPRDJUVSBAONYSFIBTNMEATAQHQZWMELOXQSLVRFIQIUOCW");
    msg.reference_frame = 147U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 50855U;
    tmp_msg_0.off_x = 0.615444700462;
    tmp_msg_0.off_y = 0.91268873513;
    tmp_msg_0.off_z = 0.687188768764;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.618312411841;
    msg.leader_speed_min = 0.851864024782;
    msg.leader_speed_max = 0.137172070719;
    msg.leader_alt_min = 0.13241805433;
    msg.leader_alt_max = 0.323182620722;
    msg.pos_sim_err_lim = 0.0510451005055;
    msg.pos_sim_err_wrn = 0.809521827077;
    msg.pos_sim_err_timeout = 62990U;
    msg.converg_max = 0.0982703899305;
    msg.converg_timeout = 43751U;
    msg.comms_timeout = 62108U;
    msg.turb_lim = 0.403718116146;
    msg.custom.assign("LSSECZCUKLIZFBYEOFNNSARTUSZSEVILGNMWLHOMXEVFAYNQGEYOITXZJGJTKHDUSTRQFPTHIMSPAOXEZOGMFBADKQPZBXKZJGONTADLIROHHPGRWFNEADAPTZOWVQDUMN");

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
    msg.setTimeStamp(0.943359824435);
    msg.setSource(53823U);
    msg.setSourceEntity(215U);
    msg.setDestination(35087U);
    msg.setDestinationEntity(110U);
    msg.formation_name.assign("NHMYMOBMGIHDLISJG");
    msg.type = 48U;
    msg.op = 174U;
    msg.group_name.assign("GRHLMIDCAQAXWEIXINFGCHWQGZHKUONSNLXEJROYYKJZRRZMQCVALJFHALVUYQUSJUQUFDDBRNWCRDHOMWHLDLIOSSXJPEVNQUSVOOCWEUWBPVBGHFZCJARAIBIIEG");
    msg.plan_id.assign("EFQLRWNZYDOQRHNAENFTLLIEERJDSJWGPLXPKWIURQYAWXAXIKKVVUTQMHRSUDCTNFOPDWOGVIOJNBCLHXRZSXQSSTHFTGXMDFTFULJIKMOAHJWGBYWHZYZXUBCCTCMDELRPUVOWYMBKCDYIPJEAKMWBVZBYUZOZXGQKYHP");
    msg.description.assign("NEVZTEBYLBNWWIUUJFOPWCWOKWKBMXKNDHSPLPFEPIRCGZMAVTYJDZOJYMNFHKMAMQDQCUNZHXEBAQTOHHPKMROQOXTQACBUJDRSJBQTFQKSVDUVFRLTKG");
    msg.reference_frame = 38U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 65167U;
    tmp_msg_0.off_x = 0.333051080047;
    tmp_msg_0.off_y = 0.991612423768;
    tmp_msg_0.off_z = 0.835564590311;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.500658500165;
    msg.leader_speed_min = 0.315233687959;
    msg.leader_speed_max = 0.931831501734;
    msg.leader_alt_min = 0.814809564562;
    msg.leader_alt_max = 0.582877530321;
    msg.pos_sim_err_lim = 0.564842478352;
    msg.pos_sim_err_wrn = 0.879641339307;
    msg.pos_sim_err_timeout = 412U;
    msg.converg_max = 0.502556521355;
    msg.converg_timeout = 11721U;
    msg.comms_timeout = 52188U;
    msg.turb_lim = 0.956782560791;
    msg.custom.assign("DZXNLQJXUGLLBTMHUOUREFGEPTOUWOHLDOJKYXRVSNWYHFIYLQNTPDMWNXZMGWVEHQGDCNMQYSPSLWKSRDRIBCICPSHFPYMRZMKQOAEVDRFOVXDKNUNKWIVZHUASJSRBZQHIWHZXEPATTFXLJOVZAPFXHJEJFILPAMCEYCNFONDFVBMIFQQGAGTEPIDUCYKJMIRUW");

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
    msg.setTimeStamp(0.101432734182);
    msg.setSource(65010U);
    msg.setSourceEntity(6U);
    msg.setDestination(2828U);
    msg.setDestinationEntity(86U);
    msg.timeout = 17745U;
    msg.lat = 0.985797430417;
    msg.lon = 0.184373351776;
    msg.z = 0.737495748316;
    msg.z_units = 233U;
    msg.speed = 0.60009444896;
    msg.speed_units = 29U;
    msg.custom.assign("HDQJUVSECPLYHERCFCOOFCAZTFZHIWJATFZIYXGWMXVMVVOHIGXDXFHCTTNVNKYAIEOQLYWVWLPJDURPAFQOJDLKKCSZMTNRFWMBDLKZBBBKZVCRHGJJMRNUYUGVDMQRTEQLPORCVAUGPIRLAKAYRTXEIPOTRWFNSAABJKDDMKSSBYHQWENIJBTUXEJQNHWGPCZBXVEFSSNE");

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
    msg.setTimeStamp(0.129123678289);
    msg.setSource(30908U);
    msg.setSourceEntity(129U);
    msg.setDestination(8961U);
    msg.setDestinationEntity(209U);
    msg.timeout = 65298U;
    msg.lat = 0.844879604174;
    msg.lon = 0.63890577185;
    msg.z = 0.0918375642638;
    msg.z_units = 158U;
    msg.speed = 0.240558858401;
    msg.speed_units = 209U;
    msg.custom.assign("PZIUPMVEMOASLFRXEHZKJFLXFHOGZJMYGQQLIBIULTUMQYCPSZVMRZFLAZAEYAQLOYBHDYGWHKHSPJCKRHFZGCOAUNJLPQZCWTVTJHZDFRVTRQBERDSCPAWIVGARMEIUSFBUNXWWFNM");

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
    msg.setTimeStamp(0.123311115945);
    msg.setSource(39592U);
    msg.setSourceEntity(131U);
    msg.setDestination(53610U);
    msg.setDestinationEntity(87U);
    msg.timeout = 30348U;
    msg.lat = 0.752969205166;
    msg.lon = 0.427533969507;
    msg.z = 0.0687104716018;
    msg.z_units = 242U;
    msg.speed = 0.0796517103235;
    msg.speed_units = 8U;
    msg.custom.assign("DHVYTVMZGBCJCAIRQRHDACLZZTPIYDPUBUS");

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
    msg.setTimeStamp(0.169491188404);
    msg.setSource(54441U);
    msg.setSourceEntity(30U);
    msg.setDestination(36901U);
    msg.setDestinationEntity(249U);
    msg.timeout = 34473U;
    msg.lat = 0.640108462189;
    msg.lon = 0.510363312852;
    msg.z = 0.383619193163;
    msg.z_units = 99U;
    msg.speed = 0.00982659406581;
    msg.speed_units = 206U;
    msg.custom.assign("PZRDCWCCXAGGHCHEIPXXQEZIIPTHWDYXWTZRFHYLQGBEKCTQGRUBZUDQGBDSPPNESPHIGKNOEUSCPEKYSLWTVUXSATJFKNOQHTIQLBZUUDFWBTAJLWIVBREANMULKOMXMRTLHTJPLKKIXVBRNVMACSVPAEZMXWVONFZLPFNFHKJYYSYSOTGOQINFAMYVMAVODQDBHJUOFGCBAWGNBLMJREMJSQMYV");

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
    msg.setTimeStamp(0.961668002619);
    msg.setSource(1940U);
    msg.setSourceEntity(113U);
    msg.setDestination(30651U);
    msg.setDestinationEntity(189U);
    msg.timeout = 24962U;
    msg.lat = 0.654112683516;
    msg.lon = 0.573413785796;
    msg.z = 0.791105485233;
    msg.z_units = 79U;
    msg.speed = 0.910934826384;
    msg.speed_units = 123U;
    msg.custom.assign("ZIFGRQFOMRLQBSOVJUBKCKVIHCXKCCYAQIZLPYOTFLWWGWKMIHGEPT");

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
    msg.setTimeStamp(0.901139768235);
    msg.setSource(2346U);
    msg.setSourceEntity(247U);
    msg.setDestination(60455U);
    msg.setDestinationEntity(12U);
    msg.timeout = 28371U;
    msg.lat = 0.60388305105;
    msg.lon = 0.140518889953;
    msg.z = 0.424389669042;
    msg.z_units = 239U;
    msg.speed = 0.300170486674;
    msg.speed_units = 27U;
    msg.custom.assign("QAMMIGIUEHXPOUOZACUJPGDARVTNHKMPLRDRJWZRWCVGWPCPZGBSKPHUFISLHABDBIJJOOMQELTINBBCWKYVZJNGWUFBNMJYEDFFCQG");

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
    msg.setTimeStamp(0.762460157244);
    msg.setSource(35673U);
    msg.setSourceEntity(178U);
    msg.setDestination(9482U);
    msg.setDestinationEntity(204U);
    msg.arrival_time = 0.565155988236;
    msg.lat = 0.0261533379565;
    msg.lon = 0.001689220461;
    msg.z = 0.600181557743;
    msg.z_units = 218U;
    msg.travel_z = 0.460380539898;
    msg.travel_z_units = 247U;
    msg.delayed = 6U;

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
    msg.setTimeStamp(0.393740727831);
    msg.setSource(23201U);
    msg.setSourceEntity(43U);
    msg.setDestination(21975U);
    msg.setDestinationEntity(227U);
    msg.arrival_time = 0.106558633108;
    msg.lat = 0.29203908557;
    msg.lon = 0.979258788029;
    msg.z = 0.924264206261;
    msg.z_units = 82U;
    msg.travel_z = 0.0154835355247;
    msg.travel_z_units = 236U;
    msg.delayed = 18U;

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
    msg.setTimeStamp(0.274219368833);
    msg.setSource(30023U);
    msg.setSourceEntity(11U);
    msg.setDestination(23771U);
    msg.setDestinationEntity(47U);
    msg.arrival_time = 0.332769294063;
    msg.lat = 0.693454646475;
    msg.lon = 0.0886947120354;
    msg.z = 0.0361217615574;
    msg.z_units = 159U;
    msg.travel_z = 0.497774118087;
    msg.travel_z_units = 232U;
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
    msg.setTimeStamp(0.592951842947);
    msg.setSource(49252U);
    msg.setSourceEntity(62U);
    msg.setDestination(27605U);
    msg.setDestinationEntity(108U);
    msg.lat = 0.0468641461677;
    msg.lon = 0.427896757435;
    msg.z = 0.343629844537;
    msg.z_units = 80U;
    msg.speed = 0.954652116909;
    msg.speed_units = 229U;
    msg.bearing = 0.462690752713;
    msg.cross_angle = 0.922956586272;
    msg.width = 0.311422070653;
    msg.length = 0.702172829723;
    msg.coff = 116U;
    msg.angaperture = 0.578716518688;
    msg.range = 32672U;
    msg.overlap = 84U;
    msg.flags = 164U;
    msg.custom.assign("WHDJHCDOHLVCBKHKCARMVDELSTNISYPAUJPBKASOAQANVFRRTWJFIXPPRQIZVZF");

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
    msg.setTimeStamp(0.454263411812);
    msg.setSource(54000U);
    msg.setSourceEntity(57U);
    msg.setDestination(44107U);
    msg.setDestinationEntity(244U);
    msg.lat = 0.443541886164;
    msg.lon = 0.376033322642;
    msg.z = 0.27946071226;
    msg.z_units = 68U;
    msg.speed = 0.93105856448;
    msg.speed_units = 191U;
    msg.bearing = 0.265281610118;
    msg.cross_angle = 0.958222970302;
    msg.width = 0.285728133633;
    msg.length = 0.47209819859;
    msg.coff = 206U;
    msg.angaperture = 0.0199691752998;
    msg.range = 30022U;
    msg.overlap = 45U;
    msg.flags = 43U;
    msg.custom.assign("CVXFXHVEGIUOUJZUUMNVCBLZFEJZWMTPZOQNHZEBGWJQQZYAE");

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
    msg.setTimeStamp(0.970955166969);
    msg.setSource(8219U);
    msg.setSourceEntity(128U);
    msg.setDestination(58751U);
    msg.setDestinationEntity(28U);
    msg.lat = 0.205260693136;
    msg.lon = 0.161269607112;
    msg.z = 0.886536536572;
    msg.z_units = 252U;
    msg.speed = 0.0305845310536;
    msg.speed_units = 90U;
    msg.bearing = 0.569597939861;
    msg.cross_angle = 0.503526008627;
    msg.width = 0.788565603763;
    msg.length = 0.196192070963;
    msg.coff = 69U;
    msg.angaperture = 0.721086216544;
    msg.range = 24002U;
    msg.overlap = 250U;
    msg.flags = 157U;
    msg.custom.assign("HHMRMZMBBWGFVEUUJZRPHJOPEPOUNZTXQOBTETEDUNSGYNRMBCNVVMHPFTHAXOECSVCLKFYOPGXGAYJBWXYLCBPTFAUONXDXKHLGPUSROCEHAXTGNIVIBHIRKKAPOFLLEUQKILKNBFDQQQFRPKDDQRZUR");

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
    msg.setTimeStamp(0.613454976021);
    msg.setSource(61974U);
    msg.setSourceEntity(116U);
    msg.setDestination(40241U);
    msg.setDestinationEntity(45U);
    msg.timeout = 38509U;
    msg.lat = 0.897810151721;
    msg.lon = 0.284434912182;
    msg.z = 0.88737769725;
    msg.z_units = 96U;
    msg.speed = 0.766725925309;
    msg.speed_units = 114U;
    msg.syringe0 = 96U;
    msg.syringe1 = 100U;
    msg.syringe2 = 131U;
    msg.custom.assign("KLJHKQMUCBVAUVRCQC");

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
    msg.setTimeStamp(0.211886405549);
    msg.setSource(10635U);
    msg.setSourceEntity(246U);
    msg.setDestination(3272U);
    msg.setDestinationEntity(212U);
    msg.timeout = 5503U;
    msg.lat = 0.457769286411;
    msg.lon = 0.220380581212;
    msg.z = 0.962978453712;
    msg.z_units = 82U;
    msg.speed = 0.511003174481;
    msg.speed_units = 75U;
    msg.syringe0 = 248U;
    msg.syringe1 = 230U;
    msg.syringe2 = 251U;
    msg.custom.assign("HEVRRJVVQYPEGXDFGTUOWQBYNNZRQPFZZPKCEAJMVTIK");

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
    msg.setTimeStamp(0.0571517304411);
    msg.setSource(16691U);
    msg.setSourceEntity(38U);
    msg.setDestination(54896U);
    msg.setDestinationEntity(129U);
    msg.timeout = 48058U;
    msg.lat = 0.00391040752011;
    msg.lon = 0.874195539387;
    msg.z = 0.288871953421;
    msg.z_units = 226U;
    msg.speed = 0.857999761531;
    msg.speed_units = 149U;
    msg.syringe0 = 70U;
    msg.syringe1 = 109U;
    msg.syringe2 = 23U;
    msg.custom.assign("KPDGAZCTJRIUXGHAPOLATEDWWBRYHKJRROFLPUQUQCBDRHJEBKXJOCXZNEDGZSIACNBJDBNWWKIZMJTUYDAUWAMXHTMNVQZXNFUECELTODKQOCMMHBKWYTUFJI");

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
    msg.setTimeStamp(0.543549554928);
    msg.setSource(13831U);
    msg.setSourceEntity(195U);
    msg.setDestination(33199U);
    msg.setDestinationEntity(73U);

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
    msg.setTimeStamp(0.00907653340095);
    msg.setSource(654U);
    msg.setSourceEntity(17U);
    msg.setDestination(58827U);
    msg.setDestinationEntity(62U);

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
    msg.setTimeStamp(0.978190276717);
    msg.setSource(13027U);
    msg.setSourceEntity(38U);
    msg.setDestination(27065U);
    msg.setDestinationEntity(117U);

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
    msg.setTimeStamp(0.640688652969);
    msg.setSource(17265U);
    msg.setSourceEntity(8U);
    msg.setDestination(21533U);
    msg.setDestinationEntity(162U);
    msg.lat = 0.116097040344;
    msg.lon = 0.348143252043;
    msg.z = 0.080616728292;
    msg.z_units = 43U;
    msg.speed = 0.797529723169;
    msg.speed_units = 126U;
    msg.takeoff_pitch = 0.0923980236323;
    msg.custom.assign("SJCHXDXYEIDNWAUGMOPPTVRSNQZHDVCKNSAMBZYHBQXZCZYROMXYRODVJEZWTAZULILUJPGRUUFQQCSKKZWUFPOBV");

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
    msg.setTimeStamp(0.29408628852);
    msg.setSource(16872U);
    msg.setSourceEntity(230U);
    msg.setDestination(24556U);
    msg.setDestinationEntity(137U);
    msg.lat = 0.220705490494;
    msg.lon = 0.297311655123;
    msg.z = 0.157843390789;
    msg.z_units = 7U;
    msg.speed = 0.395890208817;
    msg.speed_units = 106U;
    msg.takeoff_pitch = 0.485410624134;
    msg.custom.assign("NTXIKYYAPECMKEIQCQKAKGAAIHPANYDUSHONTMCGXVOLTSMQZCZXHCZGYJUILVOHZVTDWVHJBWFVHBPSMXGLPORQNGCIUSWFWOWVEJDTYKDGXPRBQRDLTLZUNLRUXUPJTOCLGUABABFSOIUAIOZIBOTPZNFKRFLRXEJEQMBHSOTGEBNAFNJJQCHVJBKIQCGBZLFVYJDFXCERPXEMSDW");

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
    msg.setTimeStamp(0.0116366903143);
    msg.setSource(54912U);
    msg.setSourceEntity(16U);
    msg.setDestination(50705U);
    msg.setDestinationEntity(171U);
    msg.lat = 0.338628961997;
    msg.lon = 0.0276899913976;
    msg.z = 0.733378086656;
    msg.z_units = 133U;
    msg.speed = 0.846764577441;
    msg.speed_units = 143U;
    msg.takeoff_pitch = 0.305628209836;
    msg.custom.assign("YIPABONHFSUTFDWZNYHOHOTEHQXWOJMPAJGKYPEQLWIKMCAMGFXBTJPYWPNXHFBLNEZMKLKXBZCVNQUVUMGOUPQMJJJRNTBUWSQJETVECOHVTYIBQVAFPCRAFEMNZHAUFSRAYRBDDSVUBRMMTLPDERSXRNFHSDNLCILJXQZESRXBLKDIJCZKDMAZGDOEZTYOYGLWTUGGAIOXIVHKFQRQCYSIPSQUEZOGTXKGAWFCNDSWHLJXKLVPCUZCYGIKRW");

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
    msg.setTimeStamp(0.542408668809);
    msg.setSource(4112U);
    msg.setSourceEntity(198U);
    msg.setDestination(58481U);
    msg.setDestinationEntity(149U);
    msg.lat = 0.258937189183;
    msg.lon = 0.711518520042;
    msg.z = 0.796557209793;
    msg.z_units = 254U;
    msg.speed = 0.672757140749;
    msg.speed_units = 149U;
    msg.abort_z = 0.392547727539;
    msg.bearing = 0.271878651806;
    msg.glide_slope = 161U;
    msg.glide_slope_alt = 0.582038521005;
    msg.custom.assign("ZGJJHQASREDYBVLPOMGKHRWCGSUVDPGIOWXEDBJAZXAYKGBJUZMKOTYHHSWRQNYUVOXAYOQSXVXMUECDPTEJXIFFLORRGKLLRJWDNQFAPRWYNXFCFAPHUTFEVRHEZABPOHQSNTGCACZCGNWBBITTSMFZYIIQPXJFTKQFDOKWNUAJIUAVKZRVSOMDSZPBLEHHFVDYMEWU");

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
    msg.setTimeStamp(0.597834165324);
    msg.setSource(21470U);
    msg.setSourceEntity(178U);
    msg.setDestination(34701U);
    msg.setDestinationEntity(11U);
    msg.lat = 0.667685451046;
    msg.lon = 0.765683849888;
    msg.z = 0.537728499155;
    msg.z_units = 239U;
    msg.speed = 0.369400912406;
    msg.speed_units = 202U;
    msg.abort_z = 0.884335256676;
    msg.bearing = 0.605064383739;
    msg.glide_slope = 20U;
    msg.glide_slope_alt = 0.745832174025;
    msg.custom.assign("RSRKBINJMQYVKQQOUKFPEZGPEVVUTSXRIQEGQLAJWHYSPIKUIXTYBDEZTOKRMCHVKVXPSLVOOPZADNCENBNADBWVTMJMCZJCPIZHGAFLUJAFV");

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
    msg.setTimeStamp(0.392094198991);
    msg.setSource(16027U);
    msg.setSourceEntity(93U);
    msg.setDestination(41906U);
    msg.setDestinationEntity(156U);
    msg.lat = 0.571428428244;
    msg.lon = 0.448803618183;
    msg.z = 0.888361454468;
    msg.z_units = 221U;
    msg.speed = 0.711471648118;
    msg.speed_units = 81U;
    msg.abort_z = 0.118301138689;
    msg.bearing = 0.639307251637;
    msg.glide_slope = 245U;
    msg.glide_slope_alt = 0.900986681994;
    msg.custom.assign("VKSEDBFLNTSLAUCDXFFSSYSQWVJWKZYARNQXLDQRKJAIKBBOBJYJPGOACBDBPYJSBURELHIFHXYIITUHMGGUMGUDENZOUKZICCKGPCXHPGQLUQFUUAFILKMFMAIEFPUNRZCXQDOVZJYWSFLMNEVQJZZWDEMNZVHQMMYDDDCGTMBJOAPPSXNNTYHSEPTARTOOQLWHGYHWPRMWKXPVEOFVJJTKWARZEXOSXCAGRYHIGWXCL");

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
    msg.setTimeStamp(0.695378212617);
    msg.setSource(40495U);
    msg.setSourceEntity(66U);
    msg.setDestination(26903U);
    msg.setDestinationEntity(242U);
    msg.lat = 0.142242616672;
    msg.lon = 0.696972099191;
    msg.speed = 0.151166513674;
    msg.speed_units = 161U;
    msg.limits = 240U;
    msg.max_depth = 0.197397903107;
    msg.min_alt = 0.438170481684;
    msg.time_limit = 0.134599050243;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.149061181036;
    tmp_msg_0.lon = 0.529906635402;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("MBJVIOVOKXDWDBTMXTWICGRLHMQYVNGAKDCTGQMGBXYZFWOLXPLQMXYTWRWVDMOG");
    msg.custom.assign("KBHFJVCUMDQXZNVUPKVBJNUOYEZBLVRQYHTLQCMXYHQZMRNRPJQUK");

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
    msg.setTimeStamp(0.399474619305);
    msg.setSource(44648U);
    msg.setSourceEntity(136U);
    msg.setDestination(22363U);
    msg.setDestinationEntity(119U);
    msg.lat = 0.952249630027;
    msg.lon = 0.410349228208;
    msg.speed = 0.163402146326;
    msg.speed_units = 135U;
    msg.limits = 94U;
    msg.max_depth = 0.0747337359273;
    msg.min_alt = 0.195027886981;
    msg.time_limit = 0.611339446683;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.953510213419;
    tmp_msg_0.lon = 0.866357764348;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("HDMZGMAGVITIVUHQLYLDUCIAAYTGIENXYUJZJPECMBOBOIHKMDZRGPOHFWYUXXZZKHRWUFAFCKWURIBSRBGWFIKPPANUXSNPBOYSXRVDRACJLQOLTTKTKZSAYOHGTSWNLCRWCFSLNCNZEINIGBNFSRPVMOQWXEUQTQYHPUCVBBFVXXPJSMVLSWTDNEAQJMEKQQEHJIFWTOFZOOQJESNCAGKGJFCMQW");
    msg.custom.assign("JKDGJSOHYWJFUATNEDOSTDHKZSOCPNFQZFXBJNQTQKVPACUCZNTAKPGBLTEMRRMWCQCTIBGIDJPZPRRONSZRQPNTEUBMGFEXNAFYUBWULMRXANPWYAJETHWKIBDVSFEEUOWTNSVXIBHAQHIMTAQUZOWZRMKECW");

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
    msg.setTimeStamp(0.672619625797);
    msg.setSource(24179U);
    msg.setSourceEntity(116U);
    msg.setDestination(8110U);
    msg.setDestinationEntity(86U);
    msg.lat = 0.112974451667;
    msg.lon = 0.667196177877;
    msg.speed = 0.403498627556;
    msg.speed_units = 174U;
    msg.limits = 109U;
    msg.max_depth = 0.54748300074;
    msg.min_alt = 0.820389881572;
    msg.time_limit = 0.186348320817;
    msg.controller.assign("WXHZMWVFXDDODACQLQPHDEDEKPVARTWQFGSGUJVVBHFTDTNATGIIWZDPOTQMHMVKUPAOGAKCLXLBFZEQUUZDZSTQWBESEXQIHBRSUAKSLYEZXBRNATWQKBMIPLAHVYWBUZGONETCPQMCPXYTNJKRIHMCSUFECRDMCLGFBXQKUJFMIRKOSLUNDNYCVZVYGYNYOHRVIGZPNBSXNCNVWFMBXJMPXLEORFOHWG");
    msg.custom.assign("VCUSVPVSNMUNBEJWJJBNPMXCOWZUEKDPYANVQRWQFGJXEDUQRSKNSMFZVSBOFSOCMGBOGCFPZEITAYBREIWTRXKGASFZOEHCZYDMUHWTLKVZPDWGTILXZHMRAATVQGBNXXBLPJJWPILTCTVQTBKFUTYPIAACSLSDWWJZJRBURHOPQKYDIRYV");

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
    msg.setTimeStamp(0.506520154414);
    msg.setSource(17577U);
    msg.setSourceEntity(124U);
    msg.setDestination(50154U);
    msg.setDestinationEntity(161U);
    msg.target.assign("VFSLZOKNZJNTTHREDCWUICJCCWQZDLPOGA");
    msg.max_speed = 0.467592971865;
    msg.speed_units = 119U;
    msg.lat = 0.0419939018451;
    msg.lon = 0.757743115195;
    msg.z = 0.451846498146;
    msg.z_units = 105U;
    msg.custom.assign("CYXIXOZCZKJJTIGDNBIKHRQZJBDAOBLUOGEUWORRZBYTCDAMWJFCLLBXBXSWZDCPKFCONTRPGHSOKHTNTNDQTIEDZYEIWCELHMVVNZCDMSZTAEAVXJMLBAYITDANGMPLYOJKIYFMAEGQXQRPEBFNQEERNBUUIYGYHWHGLBWQAUVXKFXPAIUXFVFWTOKEZVARHGUQQHYRUTSJMSPKVMOMFXLRFHNWGQL");

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
    msg.setTimeStamp(0.423142541545);
    msg.setSource(58991U);
    msg.setSourceEntity(196U);
    msg.setDestination(64727U);
    msg.setDestinationEntity(65U);
    msg.target.assign("KLLVDNGNNRNMBTZVSVANKSOPEUFEZFDTZRHVRCXMOITMTNHZBBIUGINZEADGXFEPMJKALGPGUADODEURISEYTKJHTVVMKQEZIAWSATSWXLYCKLYCSLHCURWCWGAVUPGQNUZNBIKQJPXQHLQRTPYOJXOJWBRFXAHVSXMWBGPHCUIORJGPTWBRLVWMMK");
    msg.max_speed = 0.515085118218;
    msg.speed_units = 217U;
    msg.lat = 0.21454288973;
    msg.lon = 0.782047135735;
    msg.z = 0.576710415959;
    msg.z_units = 182U;
    msg.custom.assign("TLHWNYVPZXEKTRSEWJCVLBKRWJMKJEILEGYOUMTKOUQLNNDNANSCHMFJLSHRZTMRFFAQWLOABDVWFPNGDLBIPRUTQGLDGWDHADCZQMZQCXNUXACYOWZITOVZJSGOKJMFYRVJPEQTVSRJKCPOBDQYGVMWYTCIADENRRFDUGSKPOACAPAEIUMTVBXFBIUUWCVNHONWXJVQYBHPSPHZXIHHIKSSBFFQDEPGUKYHA");

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
    msg.setTimeStamp(0.0787900648586);
    msg.setSource(51223U);
    msg.setSourceEntity(82U);
    msg.setDestination(61759U);
    msg.setDestinationEntity(63U);
    msg.target.assign("SVTQPWHNTBVBTORTINZYZWXTZOAOLJLCSIHYFVGRCITCWFOBFMWRLSIPCYPAHDQDYCKPNRBPDZMUAKRFGH");
    msg.max_speed = 0.670878793141;
    msg.speed_units = 123U;
    msg.lat = 0.806346864237;
    msg.lon = 0.944490243846;
    msg.z = 0.641947137654;
    msg.z_units = 200U;
    msg.custom.assign("DGQTQIYEVKXVUKUDDRFWBMMJRERKCWXYMDOACOVMQ");

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
    msg.setTimeStamp(0.0166240072233);
    msg.setSource(25525U);
    msg.setSourceEntity(178U);
    msg.setDestination(55068U);
    msg.setDestinationEntity(233U);
    msg.timeout = 34245U;
    msg.lat = 0.600302083471;
    msg.lon = 0.353231619711;
    msg.speed = 0.268433775586;
    msg.speed_units = 200U;
    msg.custom.assign("SPWJIELJWPLBBTPNMGGYCMNLEZUIRZJGQWSEICDUNBASYBGLOWHXXKTRSOVQDZLEVWSDSVAXVOGIKPGXHANXJQYWCTNZVU");

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
    msg.setTimeStamp(0.0528991164019);
    msg.setSource(27983U);
    msg.setSourceEntity(180U);
    msg.setDestination(49713U);
    msg.setDestinationEntity(17U);
    msg.timeout = 27346U;
    msg.lat = 0.635295304204;
    msg.lon = 0.671796906369;
    msg.speed = 0.950900065578;
    msg.speed_units = 25U;
    msg.custom.assign("LHLLGTZAYZLWNDMNDYQOH");

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
    msg.setTimeStamp(0.4170005776);
    msg.setSource(569U);
    msg.setSourceEntity(113U);
    msg.setDestination(62174U);
    msg.setDestinationEntity(1U);
    msg.timeout = 39976U;
    msg.lat = 0.675515428373;
    msg.lon = 0.24106384457;
    msg.speed = 0.029047100398;
    msg.speed_units = 45U;
    msg.custom.assign("QNTXDXCYLIITAALRZVGVNBUYDVNICARCCRZWVAFMJUJQUIQAZNZRJXPAXKJNWWNOYNZTZTTGPWNLFQHJUGGTGKSRHXBKCHEYSVVPYMUEYKMDMVOAKJHOEJCBTBRCIHEPIACFQSBFMSFEGWHNLDMOQJPEPKDGDAOXECLCOUDFHHJLDXZGJYBPTRYMBBDYPRFEI");

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
    msg.setTimeStamp(0.522806795172);
    msg.setSource(60226U);
    msg.setSourceEntity(142U);
    msg.setDestination(44810U);
    msg.setDestinationEntity(188U);
    msg.lat = 0.666243805153;
    msg.lon = 0.40674433187;
    msg.z = 0.00365626152614;
    msg.z_units = 181U;
    msg.radius = 0.112533066632;
    msg.duration = 8216U;
    msg.speed = 0.474178040134;
    msg.speed_units = 201U;
    msg.popup_period = 62807U;
    msg.popup_duration = 18509U;
    msg.flags = 140U;
    msg.custom.assign("ZZSTBAERQJSZFELBTPYXKGIVSKACHBWZNEJCBGHVRPPMKUPCQCONMIVYMIRTUKTJKHILVWMCVYDFYAGYYSSGPMIYETQNOEHWQNLFCJSZAQQZUPNBXUSUMNOKRSMDRCLALDXOHNJARPXHUWBQLFDFTKDPHCDJXSFELTGZWXHUGWXJTPWXTRKCXVLFEMYBFXGOJEUIAV");

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
    msg.setTimeStamp(0.155381549272);
    msg.setSource(20010U);
    msg.setSourceEntity(174U);
    msg.setDestination(40721U);
    msg.setDestinationEntity(232U);
    msg.lat = 0.893339132085;
    msg.lon = 0.420425102654;
    msg.z = 0.717647561738;
    msg.z_units = 234U;
    msg.radius = 0.461743230076;
    msg.duration = 30223U;
    msg.speed = 0.362221945695;
    msg.speed_units = 166U;
    msg.popup_period = 62281U;
    msg.popup_duration = 31926U;
    msg.flags = 49U;
    msg.custom.assign("BVOHFFIXNZOTUFOSJHJKNAWGJUOXCCKMZQCKLDAEGIRYVQRPHCYNQOYMUADXAGOJJVHSQFTDXMRTRTVSTKXRPVZCAPFZBEYDUUZVIWMNRFHSIUKCWCUBWRLJUNZNKNOPXZUIHSLOKPEGESADXCOEPPLTCCGAWNVXZVBLZWMYFVWXIBWQDRFLNSABJNAHFITYTGTIGFZHDLMQJGPL");

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
    msg.setTimeStamp(0.0671452537325);
    msg.setSource(37846U);
    msg.setSourceEntity(77U);
    msg.setDestination(9963U);
    msg.setDestinationEntity(159U);
    msg.lat = 0.567716965052;
    msg.lon = 0.323165710831;
    msg.z = 0.893693865125;
    msg.z_units = 78U;
    msg.radius = 0.0348155829329;
    msg.duration = 64933U;
    msg.speed = 0.666092147475;
    msg.speed_units = 1U;
    msg.popup_period = 18616U;
    msg.popup_duration = 17269U;
    msg.flags = 254U;
    msg.custom.assign("AJONNLTVHWCLCPQALZFDHYEYLGQRSFLVVNFJDTJVIXUFGDRXDGEDZNLEMIBIPPZQYKRJNPZFIHHMWGPIYJOPXEIYAVBYKTEIBPAQNUECPBYCUAUZDFZMWSFCJCCKSTYAXXEDFBHSTZMNEKWARXAXBEKWMOLMLYMBRDT");

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
    msg.setTimeStamp(0.112580397722);
    msg.setSource(51402U);
    msg.setSourceEntity(201U);
    msg.setDestination(53893U);
    msg.setDestinationEntity(170U);
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("EFPTKFSQMWNKAMNGNRZTCEMXLOCYMEFHOJUOTQCJTVSPRLNTKJVXOWQEDMPUCMR");
    IMC::FollowTrajectory tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeout = 39061U;
    tmp_tmp_msg_0_0.lat = 0.427928410291;
    tmp_tmp_msg_0_0.lon = 0.818421978753;
    tmp_tmp_msg_0_0.z = 0.407298040379;
    tmp_tmp_msg_0_0.z_units = 40U;
    tmp_tmp_msg_0_0.speed = 0.145380139733;
    tmp_tmp_msg_0_0.speed_units = 236U;
    IMC::TrajectoryPoint tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.x = 0.643893856094;
    tmp_tmp_tmp_msg_0_0_0.y = 0.521169090413;
    tmp_tmp_tmp_msg_0_0_0.z = 0.461703240952;
    tmp_tmp_tmp_msg_0_0_0.t = 0.666587330364;
    tmp_tmp_msg_0_0.points.push_back(tmp_tmp_tmp_msg_0_0_0);
    tmp_tmp_msg_0_0.custom.assign("CUCLMBGVVFUFVTTCEPAFQHJBRQBKRSVKBPORIDEZZBXWAYEGVJXYAYMJPTBQPKUSPOWZQXNNDZUOMCXJKNAVKTMGEYIWZJMVAHSWNFVDJLSGQUCQOXOTAAPDKSBTPEUKLCCMYXQSJQERVCKNVXLDIJLPGNTZWRHUNLIFAOBMNEHJDFUETHWFICEZOISOSAORKRZUHLDPGXINSZNDTDMQWIRFYMTYQEHZMIO");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::MsgList tmp_tmp_msg_0_1;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    IMC::GroupStreamVelocity tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.x = 0.900147311105;
    tmp_tmp_msg_0_2.y = 0.374314776991;
    tmp_tmp_msg_0_2.z = 0.519289479444;
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_2);
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
    msg.setTimeStamp(0.389466876566);
    msg.setSource(46769U);
    msg.setSourceEntity(94U);
    msg.setDestination(15891U);
    msg.setDestinationEntity(38U);
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("RSALPVFJAYQMDPLCSLLZSNKRMUGAWYRBMHYWVMLIUJFSDOIYGWPDGDQJOJDXTETXGKOGVZJPVKQXNSNFGFNQOMXUZVUTKMZOTRAZBIDYBHYEYPLVMBFRWLWFJZXXRQEOACFSHDUAKRJKPDYIXCN");
    IMC::FollowReference tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.control_src = 30809U;
    tmp_tmp_msg_0_0.control_ent = 164U;
    tmp_tmp_msg_0_0.timeout = 0.894489938304;
    tmp_tmp_msg_0_0.loiter_radius = 0.343921649284;
    tmp_tmp_msg_0_0.altitude_interval = 0.527332010416;
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::LoggingControl tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.op = 105U;
    tmp_tmp_msg_0_1.name.assign("LJHCFGOENRYQPOEJUZUFUUDWFVPLSPYITTSAEWXQAOQDHHDGLANLYCBVJWYXUHDHQPKQKXVFADCHZDNFDVMEJZAZJSEWRRKKVSNHCBEOHBGUXFOTJROTELXMPUFMPLRRBTOEFDBGZBSXJMBRISDWSNUYCCZJYEIMGKQGBLMRMNXYSCPKGITGNBWOKWNZQVNGGK");
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    IMC::EntityActivationState tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.state = 4U;
    tmp_tmp_msg_0_2.error.assign("VRLAVPXBADCZAVBLNOOKLYOFIEDZLFZMXTBHGDDMZSNEVUWNVRIVPEZTCUPMBCWFZUGPSOOWCMXGALGQUNIBBURYSTKIQGFYJHRKPCCBQUVOPKQIVKJKFSOVXJMLQTFKYATGSPZMQSACWEGTWMMYXULLWOGIDKHQNYYLHAHTIJREWXHUGFJCINFURDZBHJDHDKPTDFQZORWLYREYNOMFHSRBQSNQAHWEUXEJAXNE");
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_2);
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
    msg.setTimeStamp(0.513210107157);
    msg.setSource(28670U);
    msg.setSourceEntity(18U);
    msg.setDestination(17000U);
    msg.setDestinationEntity(52U);
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("YEZMEMCGAXHRTVIOHXKEKDVGSFSAUDXGVMLIIQKHJOPKKHZAODYICQAVNQRRWWTDSKRJSJRPUALHJTWCDNBMZEPKRJGSWMXKLYAWMLJMJFHPBYBUHQEYNCWCUYVCLNWZRZFZHPPBTNGLRCNPTYXAZQOJBUOUMUCDWYDINTDHNVZEGBLOQXUAESZCQVIFWTYJSDPQLPWFEARIIOMY");
    IMC::IdleManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.duration = 59211U;
    tmp_tmp_msg_0_0.custom.assign("TLYNUWHKNTDIUZGQFCXYZEYOBLNQAKYPMPXQIXPFYCKBIEPSKSUIWDLWETUEBYQNMOIIORUSADXOJXZDWHRKXSJQBBFSFFQLEZTZEKSUJGIVHNQLYATBVCVTOUNDOCXRONVDXTFEMUTZZJRMQP");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::VehicleOperationalLimits tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.op = 90U;
    tmp_tmp_msg_0_1.speed_min = 0.3118598978;
    tmp_tmp_msg_0_1.speed_max = 0.473032477809;
    tmp_tmp_msg_0_1.long_accel = 0.325770750581;
    tmp_tmp_msg_0_1.alt_max_msl = 0.300586284722;
    tmp_tmp_msg_0_1.dive_fraction_max = 0.174779128325;
    tmp_tmp_msg_0_1.climb_fraction_max = 0.184013164876;
    tmp_tmp_msg_0_1.bank_max = 0.0693888128823;
    tmp_tmp_msg_0_1.p_max = 0.73379080468;
    tmp_tmp_msg_0_1.pitch_min = 0.768509685344;
    tmp_tmp_msg_0_1.pitch_max = 0.519574356146;
    tmp_tmp_msg_0_1.q_max = 0.764233937835;
    tmp_tmp_msg_0_1.g_min = 0.271160199279;
    tmp_tmp_msg_0_1.g_max = 0.252143356615;
    tmp_tmp_msg_0_1.g_lat_max = 0.0333699000803;
    tmp_tmp_msg_0_1.rpm_min = 0.694491001885;
    tmp_tmp_msg_0_1.rpm_max = 0.141593052194;
    tmp_tmp_msg_0_1.rpm_rate_max = 0.132105756442;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    IMC::DissolvedOxygen tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.value = 0.42453751481;
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
    msg.setTimeStamp(0.182880889602);
    msg.setSource(16283U);
    msg.setSourceEntity(118U);
    msg.setDestination(41046U);
    msg.setDestinationEntity(204U);
    msg.timeout = 9727U;
    msg.lat = 0.587171346332;
    msg.lon = 0.426078686343;
    msg.z = 0.810655950484;
    msg.z_units = 139U;
    msg.speed = 0.117659692608;
    msg.speed_units = 149U;
    msg.bearing = 0.872383187974;
    msg.width = 0.83014941605;
    msg.direction = 88U;
    msg.custom.assign("LIIRSUBCWVPFXJLDVPFWNTIDBMWOBXPUOPYUSUSK");

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
    msg.setTimeStamp(0.650859778604);
    msg.setSource(18287U);
    msg.setSourceEntity(5U);
    msg.setDestination(19371U);
    msg.setDestinationEntity(253U);
    msg.timeout = 65180U;
    msg.lat = 0.791381933113;
    msg.lon = 0.000722297090281;
    msg.z = 0.344078356624;
    msg.z_units = 40U;
    msg.speed = 0.767412906696;
    msg.speed_units = 111U;
    msg.bearing = 0.708626590048;
    msg.width = 0.31284598301;
    msg.direction = 117U;
    msg.custom.assign("KIEHXULDIHJTWTLLFDHAXVVGWPRVETKGICQPTTNBZKYZQMVSOFRYUUUPTALKIMVDGECAWICPWOLNCLJFZRUYXBRSHSPGECTEBFXOKYNFMSOYBHROAILWLMBJLMBMNXFQFWAHWDJWSBCVUWIXDGGDKPUYEJWEQKY");

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
    msg.setTimeStamp(0.0377068469694);
    msg.setSource(40520U);
    msg.setSourceEntity(186U);
    msg.setDestination(64993U);
    msg.setDestinationEntity(1U);
    msg.timeout = 4673U;
    msg.lat = 0.347880303852;
    msg.lon = 0.927862889209;
    msg.z = 0.396109314451;
    msg.z_units = 109U;
    msg.speed = 0.112502806034;
    msg.speed_units = 95U;
    msg.bearing = 0.130169424645;
    msg.width = 0.221380135441;
    msg.direction = 152U;
    msg.custom.assign("KRNQHFVCHEDEZTINRVJNJACBWNMCUFDKOOZYSMMJLHUUVWPQCEXGJFTWLXWKTPZYLOARAGYESYEXFFCDHBEMVOBSVOALPSYQLQSSDVZIBGLHJTTKGUZGSPLVOXTDDKRWIZQMQBAWBUINAAKRRYGPEBOIDPCQPIPHCBVZHRXLINTSJOHFLGPOWJUIXRFXNKOJDGMCT");

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
    msg.setTimeStamp(0.294228400389);
    msg.setSource(13721U);
    msg.setSourceEntity(194U);
    msg.setDestination(52980U);
    msg.setDestinationEntity(34U);
    msg.op_mode = 1U;
    msg.error_count = 13U;
    msg.error_ents.assign("DKHLZOEHVYFFEOFYWXMRVPAGLBXROQTHGWHZEUWJDU");
    msg.maneuver_type = 15740U;
    msg.maneuver_stime = 0.314639431417;
    msg.maneuver_eta = 149U;
    msg.control_loops = 3861140817U;
    msg.flags = 91U;
    msg.last_error.assign("VPLYCBLOKGXDFCNGIMZOEJAKVNGZHHEVSVZQTRLBXAIFPJIGLDMXQMUFNAWAOUYNUJPTGCDWFAUDQZLWOJHGPQZN");
    msg.last_error_time = 0.740307669668;

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
    msg.setTimeStamp(0.433148586789);
    msg.setSource(64806U);
    msg.setSourceEntity(227U);
    msg.setDestination(41836U);
    msg.setDestinationEntity(18U);
    msg.op_mode = 180U;
    msg.error_count = 120U;
    msg.error_ents.assign("BPLBVZCAHLRLGRJOOVKLAVGDKBIPTQEKQQLPRYFKOHAGUFSFCHMDGTRUFGSVCPZVXQYPLZSJMURNOSUJUINYHWXPFZHCSNDADOIHHRXEDNKNAJYEXAXHRZBOANDIZMLPQBYKJHKYNKTMVWKCIJGXNYPQEAFCNSBAITJVXWFUGZXTMFJOXEJZSEMXTNRYBLOTQIKISTWCMAYWWD");
    msg.maneuver_type = 27170U;
    msg.maneuver_stime = 0.00830203799217;
    msg.maneuver_eta = 58923U;
    msg.control_loops = 2456842534U;
    msg.flags = 30U;
    msg.last_error.assign("WFOMBXCCPPMXGNKHNOFDOWRIACAIGUZYMPQBJBIDFJQFLWFAMZOXVWDQUTOXZOVETKUOQKUFJYFIDEMLMRZKCJYRBNUBDKCTPYJLFGRQFNZPTYSNPPCMRQRYOJGHSKUZHLSKNOJOUZWVGSHTHIHSAXZGSIEDIHMBJETVCSVLDKPUXHATYASXRJCRGTEYAQWRYVIJGPMVEVBPBWLEGLDWTULCSHBAAXTBLHYKGAWNQECDLWSZUNZERFNDXVI");
    msg.last_error_time = 0.614918551029;

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
    msg.setTimeStamp(0.0683841341237);
    msg.setSource(5976U);
    msg.setSourceEntity(106U);
    msg.setDestination(160U);
    msg.setDestinationEntity(54U);
    msg.op_mode = 199U;
    msg.error_count = 58U;
    msg.error_ents.assign("JMJTQDDOXDRIPSPFGCNTRUMRZXAKAPRATALFCQBUHBIGMLWETYLGQSRQTMOTNQENDRLOEVMEVHVAMSVGFJGCEZVYJTJNDLZUFHUXBVVALNFJGBSIHXJXYKULZNIPWICXQOOQGMULXHOPKDAVIFSZKPTDYMDWCKV");
    msg.maneuver_type = 16012U;
    msg.maneuver_stime = 0.397165179519;
    msg.maneuver_eta = 12003U;
    msg.control_loops = 1867965730U;
    msg.flags = 120U;
    msg.last_error.assign("ZLEXXROCGFPVDPRSPFEHMAGMQUXVURASZBXMWJMXDKOHIGESMH");
    msg.last_error_time = 0.307771229718;

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
    msg.setTimeStamp(0.5740133035);
    msg.setSource(52336U);
    msg.setSourceEntity(94U);
    msg.setDestination(56206U);
    msg.setDestinationEntity(20U);
    msg.type = 177U;
    msg.request_id = 46244U;
    msg.command = 91U;
    IMC::Launch tmp_msg_0;
    tmp_msg_0.timeout = 52640U;
    tmp_msg_0.lat = 0.525442032399;
    tmp_msg_0.lon = 0.399577197579;
    tmp_msg_0.z = 0.359918830723;
    tmp_msg_0.z_units = 98U;
    tmp_msg_0.speed = 0.289977723597;
    tmp_msg_0.speed_units = 123U;
    tmp_msg_0.custom.assign("OBMDZTDNROTNKKDVSCZFPZNTEBPNTSSPUFQKRBVQPXAXGTMZXYVUOXLBUFVQJCIFNCLPOJODFJMQHYKIRIELAOIKLYENBHGMXBWORPZDMRDGGCRNJYWQNALELCERTWRBXHCCJVTPOIFBUHFWSMHNMZWEH");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 52822U;
    msg.info.assign("QKGDBZVICBXMJBYNGPLJCFIQRHOKUPAXTOLGHTGTPSZYOUBLFQJKFWQIWYHZURNKRNGLIWPWCHDEHESJBPSCUQLGZLTRVZEFUEIMVUEYIFFUKYEVXAQOMMPSXRJGBJCRTMSCJUCATMLZCVKOYDEATXMAFXOVSHZQTUDZPDKDNDIWAKH");

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
    msg.setTimeStamp(0.78727871076);
    msg.setSource(39347U);
    msg.setSourceEntity(134U);
    msg.setDestination(59850U);
    msg.setDestinationEntity(146U);
    msg.type = 11U;
    msg.request_id = 18237U;
    msg.command = 26U;
    IMC::Launch tmp_msg_0;
    tmp_msg_0.timeout = 47000U;
    tmp_msg_0.lat = 0.0709121495619;
    tmp_msg_0.lon = 0.43710531679;
    tmp_msg_0.z = 0.573831310945;
    tmp_msg_0.z_units = 7U;
    tmp_msg_0.speed = 0.448374786956;
    tmp_msg_0.speed_units = 19U;
    tmp_msg_0.custom.assign("WICXUKOQEXTNVAMVPTMVCHTGPAAQSEGRTOHIXILDYYJDXLWYYPYMGQFIITLRCLNZRKQGKSUFOCFWZNRZCQHLWLOBMHMEAKRPMOTIFIPXQXERFTPKZBCVQSHVDQFPRFHBGBCKXRPF");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 41706U;
    msg.info.assign("UWHFLSUXVPKKNPCREBBGKIEHGZQVZKQLEWPZMVOXMXNPQETYXOQNORCFPIZRDNYDJNWMUETCHIAQRGICUVIDNSSSXWJSLNLPPUTXAUXBKFVVEBLTOWHGXBNIWSOLDHS");

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
    msg.setTimeStamp(0.309966229392);
    msg.setSource(17707U);
    msg.setSourceEntity(97U);
    msg.setDestination(6989U);
    msg.setDestinationEntity(40U);
    msg.type = 138U;
    msg.request_id = 18433U;
    msg.command = 179U;
    IMC::Magnetometer tmp_msg_0;
    tmp_msg_0.timeout = 788U;
    tmp_msg_0.lat = 0.288575368512;
    tmp_msg_0.lon = 0.415277097865;
    tmp_msg_0.z = 0.817099774378;
    tmp_msg_0.z_units = 194U;
    tmp_msg_0.speed = 0.12733026814;
    tmp_msg_0.speed_units = 63U;
    tmp_msg_0.bearing = 0.459513953058;
    tmp_msg_0.width = 0.806063216604;
    tmp_msg_0.direction = 124U;
    tmp_msg_0.custom.assign("HLMTSQGUQZZXAIRVLGTEHZMIXAIXOAOAFGSCUDSPEIAHEZIGKCLSVJUSMSZFACYOPPUKVPPJRLHJMQGCDFTNRJENHBVWTLORCKZGSBJIVPPVYESAWZNCXWQDPCHSBVYACLOKKYGNFWEYMBDUHDZYJYMGKRIRZYU");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 21955U;
    msg.info.assign("XUTXLDRNMDAZILJPBNRRWEYLSMMYDOCLQQIFEMDORBAVJDJQWKZIMDUWESHNPMEPFQESQXUGMGLZTLBINUKXKXCFVNPZPGAYKTHTNVMZAJXUSLJHHDAMGQYNXGCYZUUYHCVRHEECOZ");

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
    msg.setTimeStamp(0.00752271035491);
    msg.setSource(43349U);
    msg.setSourceEntity(91U);
    msg.setDestination(56645U);
    msg.setDestinationEntity(58U);
    msg.command = 84U;
    msg.entities.assign("RQANOGPGGWNQUXHDEIAMSNTIOQWVAICDPBFHHYTGBEGCEJPFRYLXSHYDZUEZTVZLYYQIPDXOYIXVSKMWJUNKOHQRCQLRJVBGRQFVYXWXCPARDIGFYAHOOZCCWUHUVESCBBFOKBFHGTFTABMDJCIWUOMYTDZMIKIXVKECNIGTJEJTCJUPZWJRMPENFULNLSZVWWDOMENMKFSZKPWABVFZJPAPHEZ");

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
    msg.setTimeStamp(0.505011618898);
    msg.setSource(2307U);
    msg.setSourceEntity(96U);
    msg.setDestination(45665U);
    msg.setDestinationEntity(183U);
    msg.command = 104U;
    msg.entities.assign("PPPWUBLEQQOFKCWVIDXGTNGBWHTXMQVEAXSHQRYJAKTOWONWUDMMCFUBIYGXPHCNEVOTRASABYLEDLBNHPRKOGCVADPUCJAGNRICLVSQLIDNFOEKYVMGZPEMOFRUADSTSAHOCKIPPWPHIMYBJCKYJZJRLXELAXZJJMNDITVJWDBKZGQHXRNQYTHKWYLRKE");

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
    msg.setTimeStamp(0.137549035376);
    msg.setSource(1778U);
    msg.setSourceEntity(183U);
    msg.setDestination(63699U);
    msg.setDestinationEntity(19U);
    msg.command = 102U;
    msg.entities.assign("XMMODBLUCHZZNWVDJFKYQBVQOORANAMSWTVAFJDSVDSLWVTNKGYUSFSXDLDNOTERNPUUVNDFIZFUTZTYDJGQPAOCIWXAH");

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
    msg.setTimeStamp(0.129542189858);
    msg.setSource(1873U);
    msg.setSourceEntity(28U);
    msg.setDestination(14014U);
    msg.setDestinationEntity(218U);
    msg.mcount = 129U;
    msg.mnames.assign("FPNXCCIJEEXVDGGSOBELDOTTKVXJSTMAASKEKZVSDXWCCQYQCHCQMRIZGHRVCYQNLJZLJABBWFOGVFFAKGPIXNUDAPNLMEVDGNSYZSBTYREUIGFWGKRKOKCZVEBPRNYWFUJMQFIXDODBP");
    msg.ecount = 193U;
    msg.enames.assign("QNWZHKKEBWEQ");
    msg.ccount = 245U;
    msg.cnames.assign("AZMXVDVVHDNRCBMUFHOXSAGULHLPFAYSEPBHQEJLQKMAOIKUKSCKQYCXXKOOIMIPASFALOWJENZENVXBNBJYCJAYNEMSPBJWTGGEJCGRFOCZXOMKQLQUUHIJYNQUCRJDC");
    msg.last_error.assign("OZULJODNNZRCYPPODMSC");
    msg.last_error_time = 0.36571002199;

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
    msg.setTimeStamp(0.527042268165);
    msg.setSource(37430U);
    msg.setSourceEntity(32U);
    msg.setDestination(46078U);
    msg.setDestinationEntity(194U);
    msg.mcount = 142U;
    msg.mnames.assign("TOECQMVUDVWPQQNGTACCEORTHCXRUWTVRPYZIEXNKJOYJNSRKMCAOXUMRMJUX");
    msg.ecount = 13U;
    msg.enames.assign("ADRLBAKONCMRRFDTUWFVHMCNYTJPUTTBVYMGQXGAGKVTPXUZZOSNJIMXDSJHGIJFYXZKPOBOVRQMGGYHIMRGIOUEPCVQWQEWCZONZPXIZXOBQJURWCJETLSAWSUFMHZEGSQIFPOIFREFPEYKAOLUYPCNIJZADWADRNLWDVBWTMHITYVKWAHQQ");
    msg.ccount = 43U;
    msg.cnames.assign("DMWXNHIYARKWRCRIGGQDCIDIWXSTLESMTYPFJKCXMAJSWYKBOGZYBSQZWAGIVYSQPMGFGEXFECUDJOSWJEDLYCVIOSKUZYQHMZRMFSVAFXZBPJHHCDKFCZFKBBBVFMNBAGVPRZYKUIRWUTXHQCUVTINHSEVQVPPOTEJEOFPNMEDDLTCPVNRHJMUXJBODT");
    msg.last_error.assign("HKXMMZWPLWDMSCWNPDDUDJRLDWZNFGOKVDOTVI");
    msg.last_error_time = 0.46313127024;

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
    msg.setTimeStamp(0.610299741812);
    msg.setSource(34561U);
    msg.setSourceEntity(107U);
    msg.setDestination(59861U);
    msg.setDestinationEntity(142U);
    msg.mcount = 35U;
    msg.mnames.assign("MTRXLVGZLICRDQGOLSVVBJTRGGOBACYJCNJNNKCKDHHWDHXMZAMCDVZDUZIAJZLPUEQGDSWSFBBLXCWTAYKURSPTSQEHLVQPUNVJWTWSNGHIETXYCFOUQFRAHZNPYGEBTYXJWXIFRSHRPHRAGISKVSQJMKERJDPZXI");
    msg.ecount = 170U;
    msg.enames.assign("OWSPNNZOUSASAXJNFWSGLHEJJNKVYMBHPBHHBROFWVPSTVSPIEWEIUUKYMBDITKQRZGEIORXUXGABDTTVZBITNXVLWGKKZCRLCYYKTJQNNLCFSBOUXLIEHHHFAZRRGELVHQWGCJEPZMSSMMDDCIHNJYJFTCRQOVZBVWGWUYDDMARADMYEFALQVFSQIFQPWKXFIJIBKUC");
    msg.ccount = 110U;
    msg.cnames.assign("ZTKGQVWKTJXYUISVYVQJBRUJLTTIUZUTCXXKAJEIMDHIJOAUNUKRESIGLBRXMPNLMIVGAXCOJNISYFSLOOJDQYEDAXOLEGUYWDDHEBTMDBPFZPZDBBWOQGWKKGYTFGQAWCKSSEQPJLWGWFZREOPLRZPFHAVFTDYNQQAWVCVBILOMQZZYYSAVCFFMRGHONNTKZVBNNBRCXHPACQCP");
    msg.last_error.assign("NGPESEERFVFAIUCFCHUVBMWRCQBEGQXHWZPQRZKAEEEJPZABKYTOAAQAVVWMWOLOCGNOODTTRBFPMINTLXNDPFRQRHLZ");
    msg.last_error_time = 0.351251356883;

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
    msg.setTimeStamp(0.446215997974);
    msg.setSource(6098U);
    msg.setSourceEntity(85U);
    msg.setDestination(61329U);
    msg.setDestinationEntity(113U);
    msg.mask = 110U;
    msg.max_depth = 0.132302736939;
    msg.min_altitude = 0.855322896587;
    msg.max_altitude = 0.36988421051;
    msg.min_speed = 0.495625451171;
    msg.max_speed = 0.891150826414;
    msg.max_vrate = 0.482687200234;
    msg.lat = 0.294807225635;
    msg.lon = 0.0696704636044;
    msg.orientation = 0.743454704246;
    msg.width = 0.626743984917;
    msg.length = 0.875218520542;

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
    msg.setTimeStamp(0.918253457436);
    msg.setSource(7063U);
    msg.setSourceEntity(37U);
    msg.setDestination(63703U);
    msg.setDestinationEntity(223U);
    msg.mask = 82U;
    msg.max_depth = 0.964541421395;
    msg.min_altitude = 0.980676370367;
    msg.max_altitude = 0.585482551899;
    msg.min_speed = 0.421268296832;
    msg.max_speed = 0.226771557774;
    msg.max_vrate = 0.938987540848;
    msg.lat = 0.74543812066;
    msg.lon = 0.0411853047697;
    msg.orientation = 0.979168378332;
    msg.width = 0.249826258054;
    msg.length = 0.664575481199;

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
    msg.setTimeStamp(0.608081383526);
    msg.setSource(32750U);
    msg.setSourceEntity(213U);
    msg.setDestination(37409U);
    msg.setDestinationEntity(41U);
    msg.mask = 149U;
    msg.max_depth = 0.454768646661;
    msg.min_altitude = 0.763680904862;
    msg.max_altitude = 0.0413995596645;
    msg.min_speed = 0.58699202559;
    msg.max_speed = 0.584980180307;
    msg.max_vrate = 0.377600619976;
    msg.lat = 0.379368150616;
    msg.lon = 0.183588700334;
    msg.orientation = 0.24986132518;
    msg.width = 0.212830106168;
    msg.length = 0.897448912388;

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
    msg.setTimeStamp(0.910593024132);
    msg.setSource(19740U);
    msg.setSourceEntity(191U);
    msg.setDestination(8388U);
    msg.setDestinationEntity(133U);

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
    msg.setTimeStamp(0.189218479224);
    msg.setSource(36938U);
    msg.setSourceEntity(145U);
    msg.setDestination(34022U);
    msg.setDestinationEntity(29U);

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
    msg.setTimeStamp(0.119135725204);
    msg.setSource(56629U);
    msg.setSourceEntity(92U);
    msg.setDestination(6799U);
    msg.setDestinationEntity(120U);

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
    msg.setTimeStamp(0.743828514324);
    msg.setSource(52226U);
    msg.setSourceEntity(172U);
    msg.setDestination(56389U);
    msg.setDestinationEntity(164U);
    msg.duration = 41512U;

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
    msg.setTimeStamp(0.533879601463);
    msg.setSource(16285U);
    msg.setSourceEntity(111U);
    msg.setDestination(20656U);
    msg.setDestinationEntity(135U);
    msg.duration = 55787U;

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
    msg.setTimeStamp(0.33562947101);
    msg.setSource(10607U);
    msg.setSourceEntity(32U);
    msg.setDestination(22347U);
    msg.setDestinationEntity(145U);
    msg.duration = 46336U;

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
    msg.setTimeStamp(0.481357802022);
    msg.setSource(14782U);
    msg.setSourceEntity(66U);
    msg.setDestination(33812U);
    msg.setDestinationEntity(152U);
    msg.enable = 84U;
    msg.mask = 2837940081U;
    msg.scope_ref = 2184832896U;

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
    msg.setTimeStamp(0.840939278267);
    msg.setSource(30991U);
    msg.setSourceEntity(229U);
    msg.setDestination(44047U);
    msg.setDestinationEntity(250U);
    msg.enable = 54U;
    msg.mask = 3116901301U;
    msg.scope_ref = 1621943112U;

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
    msg.setTimeStamp(0.29214571157);
    msg.setSource(10846U);
    msg.setSourceEntity(251U);
    msg.setDestination(7746U);
    msg.setDestinationEntity(41U);
    msg.enable = 236U;
    msg.mask = 162765892U;
    msg.scope_ref = 2201418269U;

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
    msg.setTimeStamp(0.76117739694);
    msg.setSource(31231U);
    msg.setSourceEntity(243U);
    msg.setDestination(53133U);
    msg.setDestinationEntity(69U);
    msg.medium = 133U;

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
    msg.setTimeStamp(0.685735442091);
    msg.setSource(65194U);
    msg.setSourceEntity(193U);
    msg.setDestination(38722U);
    msg.setDestinationEntity(238U);
    msg.medium = 18U;

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
    msg.setTimeStamp(0.914973911633);
    msg.setSource(45228U);
    msg.setSourceEntity(191U);
    msg.setDestination(12670U);
    msg.setDestinationEntity(64U);
    msg.medium = 183U;

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
    msg.setTimeStamp(0.673772603747);
    msg.setSource(33786U);
    msg.setSourceEntity(230U);
    msg.setDestination(32730U);
    msg.setDestinationEntity(61U);
    msg.value = 0.452564160201;
    msg.type = 108U;

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
    msg.setTimeStamp(0.14494626348);
    msg.setSource(49616U);
    msg.setSourceEntity(28U);
    msg.setDestination(13573U);
    msg.setDestinationEntity(245U);
    msg.value = 0.0886827016879;
    msg.type = 103U;

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
    msg.setTimeStamp(0.172020921472);
    msg.setSource(32705U);
    msg.setSourceEntity(60U);
    msg.setDestination(5772U);
    msg.setDestinationEntity(27U);
    msg.value = 0.135041561671;
    msg.type = 101U;

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
    msg.setTimeStamp(0.633632538381);
    msg.setSource(17884U);
    msg.setSourceEntity(195U);
    msg.setDestination(109U);
    msg.setDestinationEntity(131U);
    msg.possimerr = 0.663769383333;
    msg.converg = 0.718531917278;
    msg.turbulence = 0.924001408136;
    msg.possimmon = 126U;
    msg.commmon = 100U;
    msg.convergmon = 241U;

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
    msg.setTimeStamp(0.554763057805);
    msg.setSource(57611U);
    msg.setSourceEntity(106U);
    msg.setDestination(43269U);
    msg.setDestinationEntity(84U);
    msg.possimerr = 0.84238716903;
    msg.converg = 0.757783771984;
    msg.turbulence = 0.935032627696;
    msg.possimmon = 185U;
    msg.commmon = 55U;
    msg.convergmon = 107U;

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
    msg.setTimeStamp(0.571100411946);
    msg.setSource(49077U);
    msg.setSourceEntity(201U);
    msg.setDestination(29596U);
    msg.setDestinationEntity(222U);
    msg.possimerr = 0.469217189428;
    msg.converg = 0.0860035173437;
    msg.turbulence = 0.779958057477;
    msg.possimmon = 108U;
    msg.commmon = 59U;
    msg.convergmon = 143U;

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
    msg.setTimeStamp(0.612864503052);
    msg.setSource(58813U);
    msg.setSourceEntity(213U);
    msg.setDestination(58741U);
    msg.setDestinationEntity(156U);
    msg.autonomy = 203U;
    msg.mode.assign("JXMQFASINAADMEUTIVGMRQZOWRYIFGHPAFUZQNDVZHHVQDSRBYURFKIFXCXGZPKXNKHKETZKRILEHXBGYJGGMHWDEOFBYMDCNOBWNAMCMJAIFOZSXJPGVNCMUVDSDOASYLLKVQNTDILCJUBCYCU");

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
    msg.setTimeStamp(0.125187832511);
    msg.setSource(6409U);
    msg.setSourceEntity(145U);
    msg.setDestination(63623U);
    msg.setDestinationEntity(101U);
    msg.autonomy = 110U;
    msg.mode.assign("DAQJZXIITOQXEMFKNPCHDSFXWCQBQRGPBTHCHEMGVLOUWLSAGSPZRLCWWDCKMFQPQAWWJXFJTWDPBPAGFZWTMJWNXMHKIPG");

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
    msg.setTimeStamp(0.918239176107);
    msg.setSource(25396U);
    msg.setSourceEntity(82U);
    msg.setDestination(48939U);
    msg.setDestinationEntity(208U);
    msg.autonomy = 93U;
    msg.mode.assign("MJMVTXONWOALXKJAZPSFXWYGKDAJSFZSHPCGUWACBJVNLVDOTPYHWYNTEMQWXAOIXXGEZVRWRVZDKUSBCMRYQHFFFYVCHFADHPBOBDTRSHLPZPJXOWETEQVUFDWQKNGPKIOKVZIJMUQOBTPHLLRNEEHIJROEMUPBIINICXJAJEBNWTNGAIDUK");

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
    msg.setTimeStamp(0.422009980134);
    msg.setSource(44418U);
    msg.setSourceEntity(18U);
    msg.setDestination(7712U);
    msg.setDestinationEntity(91U);
    msg.type = 44U;
    msg.op = 186U;
    msg.possimerr = 0.783656665825;
    msg.converg = 0.397582392418;
    msg.turbulence = 0.292964338002;
    msg.possimmon = 114U;
    msg.commmon = 79U;
    msg.convergmon = 193U;

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
    msg.setTimeStamp(0.472376324474);
    msg.setSource(42075U);
    msg.setSourceEntity(56U);
    msg.setDestination(37634U);
    msg.setDestinationEntity(134U);
    msg.type = 139U;
    msg.op = 209U;
    msg.possimerr = 0.646231944622;
    msg.converg = 0.0744956744576;
    msg.turbulence = 0.51672180725;
    msg.possimmon = 57U;
    msg.commmon = 21U;
    msg.convergmon = 141U;

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
    msg.setTimeStamp(0.842092887938);
    msg.setSource(45527U);
    msg.setSourceEntity(182U);
    msg.setDestination(27081U);
    msg.setDestinationEntity(37U);
    msg.type = 221U;
    msg.op = 56U;
    msg.possimerr = 0.793181445322;
    msg.converg = 0.219879924051;
    msg.turbulence = 0.0562727897396;
    msg.possimmon = 58U;
    msg.commmon = 186U;
    msg.convergmon = 146U;

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
    msg.setTimeStamp(0.487943816735);
    msg.setSource(53091U);
    msg.setSourceEntity(228U);
    msg.setDestination(51747U);
    msg.setDestinationEntity(240U);
    msg.op = 227U;
    msg.comm_interface = 183U;
    msg.period = 44185U;
    msg.sys_dst.assign("TALUSTPZCVKGBNTPYFEBJVXURGBARHVRMVNEGASFGEHDDWIUELIJRAQONZHUKWXUORGDJZBINDWQIDVWLZHXJYYCSGLKEHGMLPSJYMMAORTHGJEQBERTUDNHCREYPIXVYIUXGFDWOCZAYFKRPTMFXLTWZCJICPPDSOZSTMOOYBATVCULEIKYBLXXSQBAJOBZNRSMQHNHWQWDXGQINJNPQPHYQWKCFVONWOAPDXEBSUKLKUVKMAKMJ");

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
    msg.setTimeStamp(0.735480396899);
    msg.setSource(51942U);
    msg.setSourceEntity(144U);
    msg.setDestination(54334U);
    msg.setDestinationEntity(100U);
    msg.op = 84U;
    msg.comm_interface = 240U;
    msg.period = 38721U;
    msg.sys_dst.assign("PUYIFMODFVFSTOLUYFFXEVNEGYNKBDRMMPZSAIGMZKFYEODXWJYKTJAZBAKHUZWGVBDVJCZBMXYOFWPLRGLHRQREQOHTGQWQKTJXRPVWLLNGBVABOCQIPSPSEHQXILAPGNTBYZVWGZANLHYHGOORKPUSXIVEEVNAJLXKM");

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
    msg.setTimeStamp(0.245836831431);
    msg.setSource(11176U);
    msg.setSourceEntity(67U);
    msg.setDestination(48488U);
    msg.setDestinationEntity(84U);
    msg.op = 5U;
    msg.comm_interface = 99U;
    msg.period = 5397U;
    msg.sys_dst.assign("RMRJSKAQVYXCYUFBISSHGTTPGONGDCCBQPVQBXRKYTXGHRJQ");

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
    msg.setTimeStamp(0.152931822877);
    msg.setSource(42138U);
    msg.setSourceEntity(191U);
    msg.setDestination(13137U);
    msg.setDestinationEntity(69U);
    msg.stime = 2663387927U;
    msg.latitude = 0.463972298819;
    msg.longitude = 0.722202257899;
    msg.altitude = 20963U;
    msg.depth = 4928U;
    msg.heading = 40629U;
    msg.speed = -27338;
    msg.fuel = 74;
    msg.exec_state = 33;
    msg.plan_checksum = 32842U;

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
    msg.setTimeStamp(0.691373592303);
    msg.setSource(2512U);
    msg.setSourceEntity(77U);
    msg.setDestination(17430U);
    msg.setDestinationEntity(167U);
    msg.stime = 849839053U;
    msg.latitude = 0.279793574984;
    msg.longitude = 0.216136376664;
    msg.altitude = 43780U;
    msg.depth = 39984U;
    msg.heading = 5484U;
    msg.speed = -7587;
    msg.fuel = -85;
    msg.exec_state = -72;
    msg.plan_checksum = 35778U;

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
    msg.setTimeStamp(0.951293161709);
    msg.setSource(995U);
    msg.setSourceEntity(151U);
    msg.setDestination(32288U);
    msg.setDestinationEntity(116U);
    msg.stime = 1466040751U;
    msg.latitude = 0.803486385378;
    msg.longitude = 0.388507760236;
    msg.altitude = 54659U;
    msg.depth = 28690U;
    msg.heading = 35926U;
    msg.speed = 16268;
    msg.fuel = 35;
    msg.exec_state = -48;
    msg.plan_checksum = 33830U;

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
    msg.setTimeStamp(0.831027215672);
    msg.setSource(10756U);
    msg.setSourceEntity(223U);
    msg.setDestination(54519U);
    msg.setDestinationEntity(132U);
    msg.req_id = 59043U;
    msg.comm_mean = 16U;
    msg.destination.assign("LLANQMEVUHKJOVZDYWXGYHFPLEZMKXXNIJBTZCFLELDFBKJEIKSOETFURNPDGMPLJEWZPAZVKBFKFQICWEOIXCSXIGXVRZYHOJLRWTCQOMDDPNBDSVZVSSHWSDIBEXNNYMPUUGWJENQLAWJULTYRJR");
    msg.deadline = 0.15693303104;
    msg.range = 0.199261161536;
    msg.data_mode = 108U;
    IMC::EmergencyControlState tmp_msg_0;
    tmp_msg_0.state = 185U;
    tmp_msg_0.plan_id.assign("ZMEOPAHQZGVIXFFQZJFXKNZSWJNUFYMUCICDLAWACWJBVVPOMNSBTMDSRKNJEIOAASLGHDWFWLTIANBWLGCLZDLEYEPPQAQURTCKLEMQXLGINMWVKGVCDQZSFYXRQBDRXEKJHIEJNSIDYKDRGKPFMIOP");
    tmp_msg_0.comm_level = 242U;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("ZHWWXJZLFYDIMVIDVQTUZGQJRDTTVNWSNSSIRPOCWGXNGZRTVWRRUGBCAEWIYOCSMYFBGHQHKAMKDFXIIFOLLOXMQMODBYOCLSCLJHLFMTNVUZOALRKVPPIXBMMYMNJFUCJJHPDXSGQKBAEKHCXFKNETRUXFDBQYQNTYUGATEGBZYIDLQPIPAPEEERBKFAVWUSZNDCRKMOGTJXZEALOFBEGDQZHZPQWKJUPHWUHLPXJSKHTRNNJVBCSUA");
    const char tmp_msg_1[] = {112, -126, 14, 34, 101, 124, 63, -48, -46, -49, 31, -99, -125, -100, 124, 98, -48, -91, -97, 2, 33, 35, -36, -48, -26, 58, -20, -120, -69, 3, 101, -123, -71, -73, 29, 116, 78, -34, -112, 80, -33, -95, 112, 50, 47, -60, 72, 58, 23, 60, -122, 101, 7, -115, -40, -20, -32, -24, -100, -58, -117, -18, -40, -66, 55, 113, -5, 59, -2, -110, -5, -3, -110, 103, 112, 105, 71, -36, -89, -88, 20, -39, -48, -115, 86, -6, -1, -101, -112, 104, 89, 49, 100, 2, -18, 7, 29, 81, 54, -78, -33, -126, 17, 62, 112, 62, 64, -84, -127, 109, 66, -45, 16, -84, -103, 62, 40, -15, -110, 16, -32, -39, -52, -89, -113, 122, -122, 8, -5, 19, 29, 24, -104, -60, 7, 59, 52, -85, -88, -118, -70, 30, 23, 57, 53, -19, 61, 94, 56, 57, -101, -102, -70, 124, 64, 85, 23, -109, -72, 111, 120, -102, 99, -80, 17, 81, -25, -14, 11, 22, -47, 112, -70, 74, 97, -87, 43, 57, -123, 7, -106, -38, 77, -76, 116, -74, 36, -112, -51, 115, 116, -57, 100, 60, -113, 41, 98, -55, -15, 12, 33, 39, -39, 54, -38, 92, -9, -25, 106, -27, -12, 101, -117, 100, -121, -2, -7, -103, -38, 92, -42, -99, 2, -62, -39, 28};
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
    msg.setTimeStamp(0.339342366064);
    msg.setSource(8110U);
    msg.setSourceEntity(34U);
    msg.setDestination(33218U);
    msg.setDestinationEntity(108U);
    msg.req_id = 64582U;
    msg.comm_mean = 17U;
    msg.destination.assign("NOYJUFUSXYZNTAPSRURPCLHDLOLAAWXDFENEGJLNHLGXBQFWKZADVRRZEYKYXMNIGOVHVYAESUYMVMARDZVJBUMZVMMWYVTICEGKHUFSGERNDAATWZCTOPZZUIUTRBVKKIKQCDDEFGDXXLIFQOQIYPPJPFSEXBDSNJTPOGKPIFIGRJSQGQNBSWMNJDCQBHCJRVCIHLCOWXELIAMFCKWHWYUZSXLFPPQK");
    msg.deadline = 0.373983994471;
    msg.range = 0.471157779194;
    msg.data_mode = 207U;
    IMC::CpuUsage tmp_msg_0;
    tmp_msg_0.value = 164U;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("UAKOUWHCRIKDGOSZXRPJCJKQBXKZFQMLNTROTEHZZUMAIKYOQJWOMSLWUAQLDSCTDSWXVRIVGLYWINERAVHUNBQEVMTEWHCJOPBWTFLPHYYTIHARYPSSHRRAGTJVXORNKVJEPFAVZYEJPTXWBAVYXPIFUDCFSQZZSOGXPWDHCJEQNEICLHDOBNISFFUBZDYZFUYXLXJRBDQMWZYNKBFTSIULVCOMLM");
    const char tmp_msg_1[] = {117, -113, -64, 60, 71, 56, -72, 38, 84, -17, -41, 105, 10, -105, -121, -68, -9, -104, 32, 15, 125, -18, -36, 104, -85, 99, -52, -119, -97, -11, 45, -43, 82, 40, 53, 23, 32, 77, 98, -88, 44, -36, 115, 71, 123, 22, 80, 28, -28, 47, -34, 106, -54, -25, -66, 30, -3, -2, 15, -113, 46, 55, -61, -61, 110, 63, -126, -115, 11, 67, -49, -127, -110, 73, -106, -20, -71, -76, -48, 31, 54, -24, -95, -75, 51, -100, -68, 39, -78, 5, -123, -86, -36, 24, -92, -15, -107, 72, -68, -11, 44, -94, 33, -101, 11, -62, -72, -33, 89, -79, 121, -66, -18, 121, 37, -3, -54, -73, -87, -125, -77, 71, 6, -8, -12, 112, 3, -94, 18, 13, -125, -34, 36, 119, -79, -37, -104, -7, -44, -28, -51, -78};
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
    msg.setTimeStamp(0.922395769864);
    msg.setSource(57156U);
    msg.setSourceEntity(248U);
    msg.setDestination(13750U);
    msg.setDestinationEntity(110U);
    msg.req_id = 54790U;
    msg.comm_mean = 174U;
    msg.destination.assign("WZJFRMVAULMIGOHUDOTTESRXCQMOGFNLDLVSCDJKXOKADXILFFVOGUNIJTKUYMHZQOEXLEZFUXWRXGRYJGOAWRBIRNMHNVSTNNMEXWADQLQJMLTNCYIITCTSBGYIUXEZKZPKBESUHKFAFNQZIRGQVD");
    msg.deadline = 0.458559268801;
    msg.range = 0.4340691966;
    msg.data_mode = 176U;
    IMC::HistoricCTD tmp_msg_0;
    tmp_msg_0.conductivity = 0.707592046806;
    tmp_msg_0.temperature = 0.769238999204;
    tmp_msg_0.depth = 0.945763201969;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("JUEWWSLEJWMOQYQSYXJPMZJDPIFLMAPUVKAUWSZYGHYBGICDRQUAVAIXRCGRBIDFBPKVFSXHSCBXZTJCKZOSNOLGLPNZMWWOIITXBCHLMBMHVDUGFMRRHYLQDVZUZKRUAPZRKDWFLEVQGBEBQHFVPKOGXOASNRZKXYBWVJRAKETCIBHEFYTVKGCONRWONTFCMXOCGXIWHQOVSTZTHUYKPFQDLTD");
    const char tmp_msg_1[] = {47, 116, 97, 20, 79, 73, -56, -124, 35, -106, -50, -10, -91, 58, -30, -87, -126, 4, -118, 32, 19, 23, 19, 53, 75, -119, -45, -50, 33, -6, 93, 58, -73, 82, -41, 34, -70, 39, 81, -105, 100, -57, 7, -50, -1, -83, 34, -68, 1, 23, 97, -66, 89, 88, 8, 79, -47, 103, 64, 64, -105, -22, -46, 49, -71, -57, 55, 102, 21, 84, -41, -93, -13, 53, -89, -53, -101, 47, 2, -61, 82, -38, 111, -75, -24, -62, 117, -113, -98, -75, 46, -107, 6, -17, 17, -121, 92, -49, -60, 125, 46, -102, 93, 29, 109, 78, -102, 70, 75, -46, 14, -32, -109, -57, -124, -63, -63, 101, 26, 122, 126, 59, 92, -49, -9, -60, 117, 21, -49, -110, 112, -40, -82, -112, -65, -67, -110, 91, -22, 45, -48};
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
    msg.setTimeStamp(0.0450019617054);
    msg.setSource(13959U);
    msg.setSourceEntity(65U);
    msg.setDestination(51350U);
    msg.setDestinationEntity(113U);
    msg.req_id = 6749U;
    msg.status = 134U;
    msg.range = 0.54406220387;
    msg.info.assign("BHJXXXLJLSUQYBBPEKRXJWFQCUHCZPECLCORIILVAWQKEUMTEZJMGQKBPASYDXQYKZBYGXXLUNTMZMLQLEWFWGEQGRUHRMISONATHQRIKDBNVWPYPCVZHYSVMSOTDCUNZSPHDPPVZBRNWXHAFIIKFSIGFOJNMVJVIHWZGNDPFG");

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
    msg.setTimeStamp(0.798973734901);
    msg.setSource(16627U);
    msg.setSourceEntity(14U);
    msg.setDestination(43388U);
    msg.setDestinationEntity(158U);
    msg.req_id = 61577U;
    msg.status = 100U;
    msg.range = 0.968876464878;
    msg.info.assign("WYZMWCZVLVZREJDRXIXLFIJFHJXHBABXAKEDKASUXCPVGRZVAYPYCLSDRQTWRQKRKEYIMAENRBEFQTULHWQGOIUIAH");

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
    msg.setTimeStamp(0.881749742398);
    msg.setSource(4295U);
    msg.setSourceEntity(180U);
    msg.setDestination(64184U);
    msg.setDestinationEntity(12U);
    msg.req_id = 52781U;
    msg.status = 96U;
    msg.range = 0.203995929882;
    msg.info.assign("WJBISFCHOGGKXPMUBNAEKTWKZRQDMEYHNJHOUKQBKNCVSTIEZAZTRGSLSRKYYHKSMYJTMPRIYECCPLEAWQRIAFPMMLQVRTSZTODXSPDYRFTIJTVZIXQULVOCWCJEENLNLMJMSGVLBXMNXPDERXZIVGLUFVJNUSWLQBFOGWAJIXAHNNHSOFUVBCPZOEPCUHVTUMDWH");

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
    msg.setTimeStamp(0.175774595359);
    msg.setSource(37744U);
    msg.setSourceEntity(55U);
    msg.setDestination(39539U);
    msg.setDestinationEntity(84U);
    msg.req_id = 39447U;
    msg.destination.assign("RISCXHCNNGQHNDNTHUECTUWHMKVRBQILAQFWGUUNMAHWEDIQXVSYPDTPOODQFTMBFCRLEKUNPYVZIHSEYHXOGQFTLVIFLBAKKAEHMBDQARPZYXOHRFRYPTXGRZPQNSZDBEKITYDBMMJWKTSLGWJEXCWLZKGIIVCNFYWYUQALOJZLOMBPOBSDICRSUBZZXMMZETUJLPCHKFAKOEPGJXVWGJJPVEIVXSSTGCWOFDQXRRSVJVBFYUZANJOLANG");
    msg.timeout = 0.236955308002;
    msg.sms_text.assign("WWODEEVBKPRCEZIUIZMHVBVCUGFDJNDRIWEGEIOAYMIAXPGTDORFRQQMSAFPXUJTHIUONSBOVZMIA");

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
    msg.setTimeStamp(0.822797272215);
    msg.setSource(62569U);
    msg.setSourceEntity(74U);
    msg.setDestination(16341U);
    msg.setDestinationEntity(106U);
    msg.req_id = 42879U;
    msg.destination.assign("CZWPDETSWIPPZJRAPENZUNCUPXSQAQUVUAAGZTWWSSTQMUBLDBNBDFZNJYVVNNZGIMLIVFHBTTMJKAFTIYEQUCXZNBGSOMKODQJXVHEOKCSVXKEFQOSBPPCWRJBPJZAEDHQSMCGTXNXRRRGYPDBKUJIKQJHUFTMFYGYEUNOTMSCLILKXJZXXVVTLYLNZFC");
    msg.timeout = 0.242209323623;
    msg.sms_text.assign("NCJLPWUGJLIXLVKUFODSBCASKJYUCVRIYPWJZXCMPELHIEPUEECIERWMERHDZBDUAKXYIFDBJYJBEASZVVNWVKQSKYGPBQDMJYFRHKEUAXXLTGPSNGOVKTRIBULBQTMNOZJZOKFMBXTHHAONSFNOXGZRU");

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
    msg.setTimeStamp(0.48690951078);
    msg.setSource(56634U);
    msg.setSourceEntity(46U);
    msg.setDestination(64295U);
    msg.setDestinationEntity(29U);
    msg.req_id = 31043U;
    msg.destination.assign("PSVRGPURNEVEQCDWMJICOEREUPTSMKMYHLYKDYPOQQXGEHRSJRXDIICDUZJLFBRNNPBJCOLQFXIWVCHQWFTXGSCZOTHAMVNAUCUTSASWKNPLHB");
    msg.timeout = 0.318587797659;
    msg.sms_text.assign("LYUNTVHNNRYQTJBOXVCCGUOHQELOCRWNFZPDFOWMETHUIOGCLMYOUYUMLAAVVCDCXDRYKMEBFASIGZPNVTYGSEVQKEAMUIKIJJQPZFGDSWCSKLJPLASTJDFKSBGIQLNOXXWTPPMTURDYWGPABKKBZXAZQI");

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
    msg.setTimeStamp(0.280302281836);
    msg.setSource(3990U);
    msg.setSourceEntity(227U);
    msg.setDestination(42681U);
    msg.setDestinationEntity(237U);
    msg.req_id = 42624U;
    msg.status = 205U;
    msg.info.assign("ZXRJIMHSJMHOFEYEIBNPJBFPLJDGOKPXSANLYCEAVRTPOLWGEWSKRYSMOZHNOTJWHBSCDUGRYPXTFWQUVZAPQRGODFKMLTRCCVOKFQDKGLVYBZSLNSTCWXCUJPMEICPMPUKWBGNJAUYRLAQOWHICSZRL");

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
    msg.setTimeStamp(0.0685826066264);
    msg.setSource(34950U);
    msg.setSourceEntity(157U);
    msg.setDestination(64201U);
    msg.setDestinationEntity(10U);
    msg.req_id = 44768U;
    msg.status = 102U;
    msg.info.assign("ZYJIMPOLPIMASXMHOZNKJZXCORLNJWQGSDLCNJEETRCCFGCEKNCPHWJRGEJDZIUDDSSYPKCNSKBAFUBCHDAMWVMFAJAMRWNPANRQWEFVKQNLIBRMSULTYETKRLXDQOSXQEABUBZJJSLKEDITTOBPPYPMOLHXIUF");

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
    msg.setTimeStamp(0.0220933378573);
    msg.setSource(49487U);
    msg.setSourceEntity(117U);
    msg.setDestination(13418U);
    msg.setDestinationEntity(127U);
    msg.req_id = 64926U;
    msg.status = 39U;
    msg.info.assign("GEFDUEKHQZXDJHFOWNXHFESTWDPFXPIZDGLLJAZCXQREAQQTIIZJMLXNYEFTPSZTIVRPBROEQCCJWRFGHYMZBARWCOXEUSKCEYRMPJOZNWAHUVAAVBMKAKVCPJK");

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
    msg.setTimeStamp(0.569965038601);
    msg.setSource(47676U);
    msg.setSourceEntity(48U);
    msg.setDestination(26435U);
    msg.setDestinationEntity(92U);
    msg.state = 198U;

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
    msg.setTimeStamp(0.19672979683);
    msg.setSource(36608U);
    msg.setSourceEntity(226U);
    msg.setDestination(27974U);
    msg.setDestinationEntity(74U);
    msg.state = 245U;

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
    msg.setTimeStamp(0.229206112139);
    msg.setSource(49470U);
    msg.setSourceEntity(34U);
    msg.setDestination(32406U);
    msg.setDestinationEntity(53U);
    msg.state = 62U;

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
    msg.setTimeStamp(0.845267216886);
    msg.setSource(24604U);
    msg.setSourceEntity(49U);
    msg.setDestination(43657U);
    msg.setDestinationEntity(125U);
    msg.state = 68U;

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
    msg.setTimeStamp(0.613005151042);
    msg.setSource(33649U);
    msg.setSourceEntity(20U);
    msg.setDestination(31646U);
    msg.setDestinationEntity(77U);
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
    msg.setTimeStamp(0.898304047067);
    msg.setSource(63342U);
    msg.setSourceEntity(160U);
    msg.setDestination(59252U);
    msg.setDestinationEntity(156U);
    msg.state = 183U;

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
    msg.setTimeStamp(0.692669105476);
    msg.setSource(15494U);
    msg.setSourceEntity(19U);
    msg.setDestination(21657U);
    msg.setDestinationEntity(227U);
    msg.req_id = 12327U;
    msg.destination.assign("YIEBJZJTUEHWWRCWMSKZPRTURGVZUHXVMBAGUTCQOAUIFNGMCBLZJSDRYCEVHLXVFCBOVUMSEFPQYDOVKAPBCMJKJDQGKSVJAIOUEBNSQQFTJLIDHKNDXYLCSNJUQYWHDEQAINPXCPZMMGX");
    msg.timeout = 0.778921066128;
    IMC::PeekManeuver tmp_msg_0;
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("UMZAXYXCBCBKQLNXVOOPIWZKJUBBDHDAAFYYFZISWFBJJTAIAZRCTTSRDZTYILKIMZQMGXNEPSTPMSHRIYINJJQUMQRBVZJKOTEQDYDQKPWKFFNWVJFHXB");
    IMC::FollowPath tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.timeout = 11525U;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.136117086546;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.143112186246;
    tmp_tmp_tmp_msg_0_0_0.z = 0.539677819028;
    tmp_tmp_tmp_msg_0_0_0.z_units = 135U;
    tmp_tmp_tmp_msg_0_0_0.speed = 0.656248742136;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 70U;
    tmp_tmp_tmp_msg_0_0_0.custom.assign("UBWODYFBVZNWZLPHJEJPPVMQNUQZGZOTAOTIQTYINDNUHSHCCJWMXFFMCRCLHJCNKGOASDTXBSVTKDKYJVFOEUVASTOUSJJJFYSBKYVJAPPWROWRIQIMYVKAOFIQYKMEMZQWAQGDCXOSIQOHHUYIPLXKLRMRDBPTGNZVWNUWBWPHHYZREUAFDIQMGAGEIDPSRTLRHDX");
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    IMC::EmergencyControl tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.command = 208U;
    IMC::PlanSpecification tmp_tmp_tmp_tmp_msg_0_0_1_0;
    tmp_tmp_tmp_tmp_msg_0_0_1_0.plan_id.assign("HDZPSULHYBXWMZQDCZRFNPBNTICQYTEUGJWSJHVSSAPOZFFBQCMIXUJPTYNSRGGUOLRQADDACCZFAWMEROGPZMOHVBFKKVQNPHVJXCJOZSKBXSEFTVPIOOL");
    tmp_tmp_tmp_tmp_msg_0_0_1_0.description.assign("HUUHPTOEOLPMDHBBXWTOGZRUZZCFVZWJRHFUBNLGACMIBNDKIQLEAADWWJCZNPKEYOSCCFLMNDSVIFRQQTOXPCJZPFGUOGEUAZCADOPXSKWKFGYAJGCAXISEOZRSVCQSDHBVPMQPMJGYTTRIBNMCHREJXVYIHJPTDWHVZMAEVGLKVIMMIKNLLWVMQRBNTBUUKEOLBTGFHQYDKFOWBQAIPZNVYSKRLNYXSXEEHJYSRAGQUT");
    tmp_tmp_tmp_tmp_msg_0_0_1_0.vnamespace.assign("UMYLOIDEHITVFZNGKUPSVLTYXKEGAIRMRRMEHFBETERDLAUZKKDSRGBCQYFYGIVQEXMAAWQVZGNHUHEUOCMZQPXGKWXDPCLJMGLVTJDUQQKWOSBVHNCOSLNMEJUJTXCMRDEUWONNXCYBGZSKXWCUJRKZIBZOHRHXYTFPBHSDICNIPLJRP");
    tmp_tmp_tmp_tmp_msg_0_0_1_0.start_man_id.assign("RJYFQDTJZFHWQIRLTRCNSPYRKBDYLUSQRDDTVFLJPEZVYKKUHRETANYOGJWMVIZJUXVILXENNOHZIDCWE");
    IMC::PlanTransition tmp_tmp_tmp_tmp_tmp_msg_0_0_1_0_0;
    tmp_tmp_tmp_tmp_tmp_msg_0_0_1_0_0.source_man.assign("APNWDITHSNSSCZMIVGXODXFRUIKPYQMTDLUHWNFGBOAZRBRKCWKFGLXMCVGRMYPABRPKHWCPEKMBWSJIEVJJBRMPEKCXLOCTFNNOZYZXINEVPTUTQQSUPHDYAJFAEBIQUTEWJVFHRXOLUBAHCFYUDXTT");
    tmp_tmp_tmp_tmp_tmp_msg_0_0_1_0_0.dest_man.assign("BMQRCTLPXSLSJIHPHSDQDGPSDDDEAXTHKHUQFKSMWIQG");
    tmp_tmp_tmp_tmp_tmp_msg_0_0_1_0_0.conditions.assign("EKMHAJETBLXICURSMNWEQFHHVONUXJAWIGHNQQOHGLBFDMBWUOVPRJDXDSKJDKPAVTRTOKFQFFRWLHAISHFJQKZXPRPRNGYNBPYTJBDOTGBBAXW");
    IMC::EntityMonitoringState tmp_tmp_tmp_tmp_tmp_tmp_msg_0_0_1_0_0_0;
    tmp_tmp_tmp_tmp_tmp_tmp_msg_0_0_1_0_0_0.mcount = 8U;
    tmp_tmp_tmp_tmp_tmp_tmp_msg_0_0_1_0_0_0.mnames.assign("GBFZKXGXYUDZOEWGTMHULJCSAAQGIRZLLEXCCIMCPFINQFVVMOFOKMUBNWPARWVXIWJUMTYLQYIFRXALWDOZLBJKCDRHSEATEEEOTMHNCZJHYYBHXRNCGTVLWVBHTGSHURKIUJYJPTIXWFADBGRJZSAQPNQEVDYXDGEMZISNITWPDTTBOPDARZXUKSPZJYWUVHNNKJQCFKG");
    tmp_tmp_tmp_tmp_tmp_tmp_msg_0_0_1_0_0_0.ecount = 201U;
    tmp_tmp_tmp_tmp_tmp_tmp_msg_0_0_1_0_0_0.enames.assign("PEGXZBAJCIFCZAOEBRLQWZPHGCHLAKDADRTPEYNPJTNVFDOOFQQIIRBQSFYCULNSQZSCTNIYVOEMMRFNSRWAYLXJHQJHPSGIMHNUQWABBDEIQADLCKTMIXPEVNFIGBKNJZMUGWOLLCCXETYQVXKMXEHBKUHKGVAVHKXTJWWMOWZ");
    tmp_tmp_tmp_tmp_tmp_tmp_msg_0_0_1_0_0_0.ccount = 195U;
    tmp_tmp_tmp_tmp_tmp_tmp_msg_0_0_1_0_0_0.cnames.assign("YRUWEHNEVOZJZSYCKOCWMOVGBFRJLOIFFCMLXDUNSUDIZDWTDHLCUBYXDWBIPFYTLNHOSWPUAWVEEHGQJGJDYKWSGGNCPQCPKBZVTRHCKFIXWTGEINXEBZWETXUDJRCHBWHNOKRKISEJXNAVOMMMYBNGLCYXASDASYXRZJXMLUQGLQYAKIOELCPFFMGTKIPNAAJRZR");
    tmp_tmp_tmp_tmp_tmp_tmp_msg_0_0_1_0_0_0.last_error.assign("LDEAQABKWFTGPKQFNYXLGTZGEJWLYSDHIUVSTCFPEDOWJWGOUMMOXIRRAQKWHQBQRURDHHPYIAUZXBDRSNPUSDBVIZMMFEWKCVAYEXIGBVWJFXVNDVCJNYFURGGMKLJELTBKOKTXNMYCCKKGTPVHPLJETADU");
    tmp_tmp_tmp_tmp_tmp_tmp_msg_0_0_1_0_0_0.last_error_time = 0.161337557765;
    tmp_tmp_tmp_tmp_tmp_msg_0_0_1_0_0.actions.push_back(tmp_tmp_tmp_tmp_tmp_tmp_msg_0_0_1_0_0_0);
    tmp_tmp_tmp_tmp_msg_0_0_1_0.transitions.push_back(tmp_tmp_tmp_tmp_tmp_msg_0_0_1_0_0);
    tmp_tmp_tmp_msg_0_0_1.plan.set(tmp_tmp_tmp_tmp_msg_0_0_1_0);
    tmp_tmp_msg_0_0.start_actions.push_back(tmp_tmp_tmp_msg_0_0_1);
    tmp_msg_0.man.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.153369592895);
    msg.setSource(64248U);
    msg.setSourceEntity(98U);
    msg.setDestination(61956U);
    msg.setDestinationEntity(8U);
    msg.req_id = 19619U;
    msg.destination.assign("FQEOBSGEAGYFIANCUQQMTOSHINQXBGNBZOHESRSVWJBTRIIAXREFVDGIGMMWLUZVYXMTDJP");
    msg.timeout = 0.24105142485;
    IMC::IdleManeuver tmp_msg_0;
    tmp_msg_0.duration = 60717U;
    tmp_msg_0.custom.assign("ZFJOYHACNGQDTNMHMBHMUWVRKJASBJNIYNXSIDKYTOMDIMFKARKZGPTDLREZQXDGBTTSWAYJAYXFRMJYIOSCOOGTQPGZBGSW");
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
    msg.setTimeStamp(0.205180717606);
    msg.setSource(1488U);
    msg.setSourceEntity(204U);
    msg.setDestination(11266U);
    msg.setDestinationEntity(9U);
    msg.req_id = 44409U;
    msg.destination.assign("CBILADLWZACRVRAIMJTPFIWADECZSYFAXPHGXWNYQBBDSQOXFTAJENUBUKSTOGWZMXMKWBINRHLKFYLWJLRTPHOESNJZELCUVYJFGFKKGARJZGPZXVVMSDHVLEJMODKPQPMTYYNICPKXDBJQEVRWUSHJWFLZYNRFMBGZJRXVIABKNUCGGNLUYHTCOOUTADQXCVEEXPMTDQQBOBLKISHUZZXDNUUOOTCFVQGEIVISFGCYAORMYDIQHMKH");
    msg.timeout = 0.393269731127;
    IMC::DvlRejection tmp_msg_0;
    tmp_msg_0.type = 0U;
    tmp_msg_0.reason = 39U;
    tmp_msg_0.value = 0.644488278975;
    tmp_msg_0.timestep = 0.965634835241;
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
    msg.setTimeStamp(0.00852502378746);
    msg.setSource(54961U);
    msg.setSourceEntity(51U);
    msg.setDestination(27605U);
    msg.setDestinationEntity(217U);
    msg.req_id = 1358U;
    msg.status = 117U;
    msg.info.assign("PUYPCZITSUTXLHARDKTTABSOPOCASXINCYZXZBHJCHMQXYEXPLKSFPHKKXHGQWBTZINAIVUQLCHALNBAQVUGPDMGFIQUUODSJDUJLWSIEEGRKQEFZCVDJENLIJZJHVDAAHMDYTSLEXEGTJTWRYWMLTGMWMDMFOZVZGQRKLYMDFZXNFOEDIKVREFWCOLSYUBRS");

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
    msg.setTimeStamp(0.624869825154);
    msg.setSource(50207U);
    msg.setSourceEntity(248U);
    msg.setDestination(64008U);
    msg.setDestinationEntity(110U);
    msg.req_id = 38862U;
    msg.status = 23U;
    msg.info.assign("WFTCUCGCZUZWIJNEMAVMRSPBSDTYAEPZAWBBYJPQCJEVJKUUBQEURHRRLOEJKAIEVNXXWAZITGNIINEFFXRMMMQVFKLFAHQWYKSPRDNLFDFSULTHVNKQUEYDIMQEFJSGBRZZ");

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
    msg.setTimeStamp(0.442802962107);
    msg.setSource(61407U);
    msg.setSourceEntity(168U);
    msg.setDestination(3447U);
    msg.setDestinationEntity(120U);
    msg.req_id = 46265U;
    msg.status = 189U;
    msg.info.assign("AJRUMGVWZEHOFBXZONTMGMHYDKXTXESKJFLUNMEIVETAJBGKUEXIMVHPJOQHLGRZTQADCBNELDTHURKRCHRDZFZEXKCBNABFLWRPXYBWOWKCQLYUVKRSQTTSOYRGNDTPQGSNLLPMUSCNIYTGNPIJWVRIVSXQO");

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
    msg.setTimeStamp(0.313231225561);
    msg.setSource(47244U);
    msg.setSourceEntity(67U);
    msg.setDestination(49080U);
    msg.setDestinationEntity(177U);

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
    msg.setTimeStamp(0.506287793622);
    msg.setSource(37163U);
    msg.setSourceEntity(3U);
    msg.setDestination(13158U);
    msg.setDestinationEntity(215U);

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
    msg.setTimeStamp(0.465552689911);
    msg.setSource(18200U);
    msg.setSourceEntity(137U);
    msg.setDestination(43480U);
    msg.setDestinationEntity(251U);

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
    msg.setTimeStamp(0.353635677772);
    msg.setSource(42332U);
    msg.setSourceEntity(97U);
    msg.setDestination(16211U);
    msg.setDestinationEntity(32U);
    msg.plan_id.assign("IEPKOZQFVDMVNBLEQASYFGFVCVPJUWKJUXYJRNNXMPRCQFYYLQOZIGLHFBHMJVTXZEANTUMSPALBQMIHGMQYBBPQJFBOBGNTHZIZMJSYYKZKLDCCKGAWUHMDCIURHLNFXCNRLRTSAVCHLRCWWEOFETDKHQOENRSTSIDG");
    msg.description.assign("LDLTBCPOFVSWCHENXSJOVYMUCYBQOKAEMHYPQCLBUC");
    msg.vnamespace.assign("WEAKOIRPFJQWVAQTBCEHMFARGHYWUJVIUXZRZZEBFFPJCJOUHOQVYCSGGDZPVUGLVUKEGBYJZJIFOIMMISQGNZJBGWGYRRAHEJWKQJAIKKWORRDESWSOEFXKLICBVYQHOLCDMXTDOAEYGCWPDRZQKHY");
    msg.start_man_id.assign("LSWPAGOFRTEWZQACRDMTODMXFWWCIMIPSOSAHMPNRFPIXBPZEGSVYBKMTNEWSVBRTJYGQZBERHQNXNTCUVJFPWXLNKFRXYQMPYCJXAVIYOZWDOHFVRUYDSXIVFHFULHLULQZTTKGANSWZDDSNDEEJQGRLFAKQHRTQOYJZBVNMBWOZKTQMRASCJFLDLBOEUAXCNGTUBSKKDHJYKKCUJACWHHCNPGQLLMUIAXKEPP");
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("KEIROBXCCFILUQQFQPLXCZAOESGFABJDSNLVYBGRFAJJTTGAPGKSBTZHSSOVRAKMNRXPOVDZSBFFHPMYMMZOBPDTPRLMUYJKDRQOPAUWINTGRJTINSUEGMVRNLALCQMQOHYHVZEFFCONZVJJJGIXDYILUUNUXHQWAQMDWIKLPVBNIHJCWDIBPNYEXCXLWVTHAJKBFOMOUTUNWXFEIYK");
    IMC::VehicleFormation tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.631056651501;
    tmp_tmp_msg_0_0.lon = 0.534038232075;
    tmp_tmp_msg_0_0.z = 0.899071784206;
    tmp_tmp_msg_0_0.z_units = 219U;
    tmp_tmp_msg_0_0.speed = 0.55946965948;
    tmp_tmp_msg_0_0.speed_units = 112U;
    IMC::TrajectoryPoint tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.x = 0.214699214902;
    tmp_tmp_tmp_msg_0_0_0.y = 0.0740549517411;
    tmp_tmp_tmp_msg_0_0_0.z = 0.945116541612;
    tmp_tmp_tmp_msg_0_0_0.t = 0.30241147014;
    tmp_tmp_msg_0_0.points.push_back(tmp_tmp_tmp_msg_0_0_0);
    IMC::VehicleFormationParticipant tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.vid = 13827U;
    tmp_tmp_tmp_msg_0_0_1.off_x = 0.182040173521;
    tmp_tmp_tmp_msg_0_0_1.off_y = 0.29833338207;
    tmp_tmp_tmp_msg_0_0_1.off_z = 0.553821261181;
    tmp_tmp_msg_0_0.participants.push_back(tmp_tmp_tmp_msg_0_0_1);
    tmp_tmp_msg_0_0.start_time = 0.150199290498;
    tmp_tmp_msg_0_0.custom.assign("MRQVDGKNIFUTEQKIUROULWPFDZCXLFITGHYIOOFARGPHQYNVZGNNNOBTEWKVMHWMXLWSBGEZLBFMTVOARMVXODGNSWKCQTLDAICATYQICHDZKCHBZXCKJJRQAWPWPWPVXAQLUYTKUDXAISTHZDGJPUMUJFJQCXPCRSTKYFLSISORYBFVEDRX");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    msg.maneuvers.push_back(tmp_msg_0);
    IMC::PlanTransition tmp_msg_1;
    tmp_msg_1.source_man.assign("BVAFOZFSESSDTKFHWCFUWDKPLPLAORJBUGIXZGPIMYHCKQDNFKWPNOIGJAVGXRJCOZFHWGXLVEQAWGGTQTMNTDEJCLYZKTQGONLZMVJAWVXDHDTJYRZDZPRERFOYYEVZINUSKZSMQISBQCSIERIRONVGFNVTBWWFMEHMJVCZALBYOXPTBKTHSARLXUYCIUYKXSERQ");
    tmp_msg_1.dest_man.assign("IKRYIYWVIQLZVWXNNOWKQMHTODBSWHNHDHRKOYSPOTLGZDGYVCSEMJNCYUKWMFIXZJFSQEUGKXAIEJCLCZTTVTBELWZRTQZKSBDFEOQMAMQKPJGFVOVHAJMHWIGCFIIRLEAEFBJSPVORUFJNLCAYDXKALPBXNYKPTOODGSHAPSMBZUXTDGJPFRUUXGIOUXYPFDCDUNFKDYBWBBQBAAREZPRYGWLSNRUXGIMSLCAHTNQRNHZJVVE");
    tmp_msg_1.conditions.assign("QSSZBHWCTRTNKORIEDSRVAKNZOHPIZYVXKNRGHKEYWJVTEHFSGNPSVJXUPGBVDQPNQAFQTSRWOYHGDIBBAKXFMUGHSOKMSBUMHZENPKSCVLEGZATBRQZTPONQFCTKALCVLYLXYQNUXMCPEWJIYDODITMHJACLDWULPLCDGEUWJPIBDQJ");
    msg.transitions.push_back(tmp_msg_1);
    IMC::FollowRefState tmp_msg_2;
    tmp_msg_2.control_src = 63724U;
    tmp_msg_2.control_ent = 201U;
    IMC::Reference tmp_tmp_msg_2_0;
    tmp_tmp_msg_2_0.flags = 227U;
    IMC::DesiredSpeed tmp_tmp_tmp_msg_2_0_0;
    tmp_tmp_tmp_msg_2_0_0.value = 0.8593360583;
    tmp_tmp_tmp_msg_2_0_0.speed_units = 253U;
    tmp_tmp_msg_2_0.speed.set(tmp_tmp_tmp_msg_2_0_0);
    IMC::DesiredZ tmp_tmp_tmp_msg_2_0_1;
    tmp_tmp_tmp_msg_2_0_1.value = 0.856572437648;
    tmp_tmp_tmp_msg_2_0_1.z_units = 119U;
    tmp_tmp_msg_2_0.z.set(tmp_tmp_tmp_msg_2_0_1);
    tmp_tmp_msg_2_0.lat = 0.358519851895;
    tmp_tmp_msg_2_0.lon = 0.365856072261;
    tmp_tmp_msg_2_0.radius = 0.438577191154;
    tmp_msg_2.reference.set(tmp_tmp_msg_2_0);
    tmp_msg_2.state = 91U;
    tmp_msg_2.proximity = 52U;
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
    msg.setTimeStamp(0.210399598039);
    msg.setSource(29368U);
    msg.setSourceEntity(30U);
    msg.setDestination(55761U);
    msg.setDestinationEntity(86U);
    msg.plan_id.assign("KJCWYQVRNTMAEXSAYQMCYOQSQSEXLKWKBHFPYHBPUPFWNDUWVDVNQSNKMQFIJTPZWXORJOIIRQXIWACXYTBCCMUTTWAOANFXVPUQONHZGSNSNZJAXSEHIUHJEHHRDQBZGBKSAVKTVGOWYUGIEULFOCBDTNRPJZCJZGOVTFMPXHUBRFOMFYBDEMUSYKOMGWDJTCMEYDVAZVL");
    msg.description.assign("YSQZWEEWPVICNXLEINMZECKDDFROUQXVOIFQDHFGFQPNCGCKYLPRUEAHNGDNUUQKBYGVCITDXDBQHLARCHYRNZCJUWJPSIUFVXTIVIFDPOEXTOASSVBOWOMYGELPPVGZGWZJDZYJOATYRHCWHJUWTXRZMBFRKRYXABOLULDJJUVHDVJZAPGSKXSXBELTHLIWTZPNBHLENKFOCSIIBMYKMAKPSMNTEKYUFRAQMCHJXBTQVO");
    msg.vnamespace.assign("YCFVNNWPHC");
    msg.start_man_id.assign("UDSAWXUYFNXKUAFTTGIOTIUHQXBABMKDGMMOCESQFWWYJECYRUXALJGBLEMAFZXQZSOMHNPCJOMBLSHGPSZBARKSJUDZWDLTDSNKUABHQCJKVILQGVNFLTHFDVMKHWYEGT");
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("TSPOKECLCHFEMTKDQZVWLWPFWEQNPJNDKBFJCXTBOFQXLXTPB");
    IMC::FollowPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.target.assign("ZUHHZBUTNEDEYJHWRVQXKTHJFYIOZJZDABHACDOWGBDWCIVUAJWMXSGWJMFLUPIZXGREOBLWXQTNHXXVLQYKMINKEOGHITGUMLTETLKVYUMPESDVFPAQPANTVQMBLKFRLEWUGPCKDCHPTIORNNPOXRBSFPOSLWKZUAIVGJJTFADCFMQHYVZCVXWIZMRBWCODCRZSSGRBTIPQESXYSUG");
    tmp_tmp_msg_0_0.max_speed = 0.455085320591;
    tmp_tmp_msg_0_0.speed_units = 206U;
    tmp_tmp_msg_0_0.lat = 0.893224676186;
    tmp_tmp_msg_0_0.lon = 0.307761862549;
    tmp_tmp_msg_0_0.z = 0.485298774034;
    tmp_tmp_msg_0_0.z_units = 192U;
    tmp_tmp_msg_0_0.custom.assign("LPEQKOUGKMJXPBPXSYYKUTBVUOIHEFFAEZIDYAMYINXBDVYTUQTHHZWOYAIOPIHFWMZAQGBLQWIBCQCNNXJWCMTTEYDDNWJJAHEUGPXLZSLOGVMDINU");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::GetParametersXml tmp_tmp_msg_0_1;
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_1);
    msg.maneuvers.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.325474705288);
    msg.setSource(38596U);
    msg.setSourceEntity(223U);
    msg.setDestination(60293U);
    msg.setDestinationEntity(14U);
    msg.plan_id.assign("OGULEQINHKBOXUHCAHZAGFANHPXAOBSUOIXWADFNUFVFSQETEP");
    msg.description.assign("WGTCKLOLARCLCFDWFUTUKUNRMDSOZST");
    msg.vnamespace.assign("NXWBVBMVMJXJQHEILONEQDBMMMUKKFFFYBLTIGKJGDVZEWGPXRKKQXOQFCEZEAUNMPCUENBPMVHWDLQOIONVJACKTLHYKQKFGXGEICTJBDVADYLKIGRWWBZQSCGAYDICLNWSCXPGRRTQWAPBSIWSSYHWFVZOOOJRJLAMUFCHHMIHTPPUTFDSZOXNUDZZPQKUGRQHETDARXYJPVUSXNMLYUWVXZAIRGTYLEZYSCSHYNAOO");
    msg.start_man_id.assign("FAYUAPUDYXRUTANZQXPUFVRJULWAIXBUQCXVTFSDGGIENYGWBZYVPLFQFLHHYNVTFAEXNPIDMBSTTWJEYQDECIQTOWSOZWMKLXYXONPXHEFKUCIBDHDNGVELGFKCSDYKCWSFXMGKKZPGORPURIBBGZEOODHTXDGQYEQSKLSMCBHRMBOPNMJMKVQLTKJHINOVJC");
    IMC::PlanTransition tmp_msg_0;
    tmp_msg_0.source_man.assign("SHXELDEYCCVSLAPAWDREWREIKRIFNKAUHVJNXNWADXVXRMQMVYZFRZOWJXNQYAWOPQYUFNHEIFZHRYVXMUGLOELFKJZZZCVDTAUIQORDTCPKPBBBEYOASDLJKMUJKNTKDUMUWBILUIXQDGGOOKSESMRZJCTMSLNLAPPHCRQPZDIIOYYGGKMSJNHCCHWT");
    tmp_msg_0.dest_man.assign("AXVNIMJKVUVNBKQQDWBFOBXVEFAERDHURFDNSPPTSTGPSYCPERGZWBCCVQSIALFDNCXJBEOZHTC");
    tmp_msg_0.conditions.assign("BNSPWSAVYDJGDMZDJUZLYKMLVJXPPKCYWLFNBNCH");
    IMC::VelocityDelta tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.time = 0.15418342342;
    tmp_tmp_msg_0_0.x = 0.681389786644;
    tmp_tmp_msg_0_0.y = 0.507600667384;
    tmp_tmp_msg_0_0.z = 0.609894727668;
    tmp_msg_0.actions.push_back(tmp_tmp_msg_0_0);
    msg.transitions.push_back(tmp_msg_0);
    IMC::QueryEntityInfo tmp_msg_1;
    tmp_msg_1.id = 40U;
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
    msg.setTimeStamp(0.0629040953535);
    msg.setSource(30431U);
    msg.setSourceEntity(132U);
    msg.setDestination(55323U);
    msg.setDestinationEntity(102U);
    msg.maneuver_id.assign("HYOSWVJPPRYXYRVDNCYCEKZJZXSPTIKZOXUXDKGIRFVJMZQVTJLRCUMXAZIFNCUFNFROIRASOLHWGSZNNBEPMWTHEEDWCQMYCDQHNQYRCIJBQXFIURZEIVVFELOJSTUXXBPFMPDFTBBLTQUPDENWNTAALJUWYFQKLPTYVCYBOUGGHOLQXRXSUDWOGEBIMAHGG");
    IMC::Takeoff tmp_msg_0;
    tmp_msg_0.lat = 0.100124617956;
    tmp_msg_0.lon = 0.0552175181237;
    tmp_msg_0.z = 0.166329000981;
    tmp_msg_0.z_units = 159U;
    tmp_msg_0.speed = 0.774365159615;
    tmp_msg_0.speed_units = 194U;
    tmp_msg_0.takeoff_pitch = 0.743192887649;
    tmp_msg_0.custom.assign("WFNIBPVPQHPRBJFULECJSSJMEVVRMORKVQYCIOYTPCCMKDEJOKWAJGZXRBYTUNTPWVBWFDMIBDOJJZXDCHDGYROPVLYWSSQVCCZIXGUEGLTWTVKJPOWKJPTRVHLRGFGYPHFOJYSKUAMDXWEMUIININTCHCLIZDX");
    msg.data.set(tmp_msg_0);
    IMC::SoiState tmp_msg_1;
    tmp_msg_1.state = 235U;
    tmp_msg_1.plan_id = 14223U;
    tmp_msg_1.wpt_id = 238U;
    tmp_msg_1.settings_chk = 14936U;
    msg.start_actions.push_back(tmp_msg_1);
    IMC::Drop tmp_msg_2;
    tmp_msg_2.timeout = 60934U;
    tmp_msg_2.lat = 0.480916758452;
    tmp_msg_2.lon = 0.297545630153;
    tmp_msg_2.z = 0.0557808091581;
    tmp_msg_2.z_units = 119U;
    tmp_msg_2.speed = 0.0613097720857;
    tmp_msg_2.speed_units = 147U;
    tmp_msg_2.custom.assign("PSSPTEXYQKCDXEASWJMMIIRBIBTJPEASAEGURYVWKOCAXNWIIKOIOSHPNKQVTCXQBXTMWZTVHRQDVYYYEZNDUZNIKMHHXZZHCWSQLPRUSOCFUYMKRZCTFDNBQBMJJVSKONMPYNJGMBIDGU");
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
    msg.setTimeStamp(0.185155089143);
    msg.setSource(22610U);
    msg.setSourceEntity(147U);
    msg.setDestination(40500U);
    msg.setDestinationEntity(129U);
    msg.maneuver_id.assign("OZVJVBMTUCINEPXQGUQPGGYHYOISQNJTUE");
    IMC::ImageTracking tmp_msg_0;
    msg.data.set(tmp_msg_0);
    IMC::RestartSystem tmp_msg_1;
    tmp_msg_1.type = 225U;
    msg.start_actions.push_back(tmp_msg_1);
    IMC::DesiredHeading tmp_msg_2;
    tmp_msg_2.value = 0.514771434049;
    tmp_msg_2.off = 0.854519947811;
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
    msg.setTimeStamp(0.553535611106);
    msg.setSource(64723U);
    msg.setSourceEntity(23U);
    msg.setDestination(35813U);
    msg.setDestinationEntity(122U);
    msg.maneuver_id.assign("IIOUUSMBDEXIJZPFXWYCULJYWDZQOQHSTKRCJKYHEYMDBKDSKSHOVTOKXYCGBAEV");
    IMC::VehicleFormation tmp_msg_0;
    tmp_msg_0.lat = 0.792033270876;
    tmp_msg_0.lon = 0.598855538197;
    tmp_msg_0.z = 0.421963210641;
    tmp_msg_0.z_units = 110U;
    tmp_msg_0.speed = 0.0281762030644;
    tmp_msg_0.speed_units = 46U;
    tmp_msg_0.start_time = 0.0116881166815;
    tmp_msg_0.custom.assign("JUSXITFYHYKENKXKSGQMIUPEVX");
    msg.data.set(tmp_msg_0);
    IMC::AirSaturation tmp_msg_1;
    tmp_msg_1.value = 0.765223668196;
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
    msg.setTimeStamp(0.449069473778);
    msg.setSource(53689U);
    msg.setSourceEntity(167U);
    msg.setDestination(63334U);
    msg.setDestinationEntity(59U);
    msg.source_man.assign("KBKWCFEFZLMQXCAOSTNIWNAXGBBAERMBITZHEGIHIJBFNVMVVHCNBCJPSNEOUNPLQPBNJIZWAKIOKSQKKMZWLGZQYOUCHQGLXSDTZYXEICFYXTDDVAHWEHDHODPKPPRQAFVADKUAJDJBMYGSEUVYJRXZHQMWMIWV");
    msg.dest_man.assign("CUCFORGPCOPVJOLXTUYYTKFHEXVURSIMLGIKQQBKTIECENVWLGWMYGTDTLAQELCKGGAMJMOJGRNRAYEYYRXXRFBKPWWYXJUVFJZOTZLIUBNMCYUSFDUSMEECHEDWWLAXNFNMJPJHBZHSAEQTJTZQKQVKAKDPFLRHARYQNSQFZWDOFQOCXBBBCVIWPZUMRIXDDVSLSLV");
    msg.conditions.assign("RYYSTYKYETDFZWLMLBABDSHQODNGHWWXCEPTBZZCDGGNSPSRAWWBLLD");
    IMC::QueryEntityState tmp_msg_0;
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
    msg.setTimeStamp(0.728016395825);
    msg.setSource(64006U);
    msg.setSourceEntity(69U);
    msg.setDestination(18474U);
    msg.setDestinationEntity(107U);
    msg.source_man.assign("DVBZOXDJKFARKRNZCCQGUBSPTLILYKRMWWELMUREOH");
    msg.dest_man.assign("BMAKISGITZZTODXVHOOPMDHUQSQL");
    msg.conditions.assign("DQLTNKLKBXPDG");

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
    msg.setTimeStamp(0.245122733058);
    msg.setSource(32225U);
    msg.setSourceEntity(247U);
    msg.setDestination(3800U);
    msg.setDestinationEntity(51U);
    msg.source_man.assign("QKAMJFWKSLYGTUNBGLTBYDDOJBGKUIASHJGNPRDYHBDZUCSVEKPDRBMAHNBRXGFXDFZFKCACOIHPMCEOSXSSLJZEPHOQVTBMJJLZUQEMYZKFFPQURAGUATQZSNRDOBWVPWRVOFOEYXWGLTMMZCAXYUQPI");
    msg.dest_man.assign("FHBMWPKHABLAKTCKPKSFOLHCXVQQNJVPZAHMQTRUAAHUAEEBGQCDXTNCISMZEPMOINOYLWTQVWFNMDSDTLVNYGQTONJVTUIIXLDCDIOECINRDJII");
    msg.conditions.assign("IPTQDIQYBKPASHRDNNUGVHDKCLQAVAZMQRTGEZBTKLOFGZKRNBKGDYBPVZSSSWRZSFMWVOY");

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
    msg.setTimeStamp(0.858346830961);
    msg.setSource(34398U);
    msg.setSourceEntity(187U);
    msg.setDestination(37870U);
    msg.setDestinationEntity(187U);
    msg.command = 253U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("HIMWIDFEPEGOBMLIOIRWYDNOJWAUTWDEGCZNUJADXBAMTBQCFMORXNGLRPPYGMXRCXUINYVULLIXSHHULWCHLKHHBTKKPJVBEQZQPWTYRVZFWXGADOKKBQSZTNOEFNHMUSMYJDAPAYSVSEZYRRWRKITZVFNZDQ");
    tmp_msg_0.description.assign("SJBUNMFWSADNTORCAYYUKWJN");
    tmp_msg_0.vnamespace.assign("CMJEYDRAMVKFFOPJSAASNNOIGSDZAOVDHTIKIPLCKOFYHIERTDXSUUBBQGLWKXYJIHUDTYC");
    tmp_msg_0.start_man_id.assign("CRAEKDXIXRRKGHWQJEXIXPKUNHEGBITXCTGRFNTELOXUVWHNBOQUXSUFULWKUFIZEJZYGUAJJHAVWHTSZFDLVFPQWJMGPKVMVBDQSLMSOUPPTALWSQBGCEWVIEAKZVMCVFBZCGTLGPNXBZNROPMKYTTAXRIRAOYHQZQWLCGDDCQOANDPRMGRCSIZJECQZDNLKBEUYFAEMHOKHBYQOSHLIFJNMJ");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("VFDGIEHVYTIFZUVWZZIILMDZLODVSTTNRUHCQOTGHTBCLCWPZKOVJAFZCGZQSQBIJREUCDGOOCYWYLFKBPTESMRJXHGRRZYKDDAXWLMVYREEKXBRMUQRMXPXYUFMENCQMAKFJLVLYGCLWZQKSSAKXIBFDWRSEQKSVLHNYEHJVACPKYTEXSOXHGPPN");
    IMC::Goto tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.timeout = 40241U;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.0847049730938;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.210929491833;
    tmp_tmp_tmp_msg_0_0_0.z = 0.2424107162;
    tmp_tmp_tmp_msg_0_0_0.z_units = 185U;
    tmp_tmp_tmp_msg_0_0_0.speed = 0.628615093413;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 61U;
    tmp_tmp_tmp_msg_0_0_0.roll = 0.145140362899;
    tmp_tmp_tmp_msg_0_0_0.pitch = 0.889461427894;
    tmp_tmp_tmp_msg_0_0_0.yaw = 0.888056935864;
    tmp_tmp_tmp_msg_0_0_0.custom.assign("MCSDRHXWEBCDMFBPILQYENRRICEFJQSMFTRHYDJWBLGMAUTWFDCZWLUZXEXRCKKLHESSKIECYJBDGQGTVXAKDNSVYSFLNPHERNZYYWPGGUMHBQKOEWKCRRKQGZMKALJPNDPTPIHVAQWX");
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    IMC::QueryLedBrightness tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.name.assign("YTUIQPFQGMBDXFEGTUKNPRCLADJOBFYGVZKXDTYTEERAZLUWFEHNSRGTSXVWEUKOSTAIUFICCNKFXQYHOGLPABTJQFPTHUIGRVRXPFZENGILGROJNWLZINFEJIHVPMASJSWYLNRODAPHNBHZCRXBRACQNRMEAVAMPWWIBWJPSMZDJDWLKDOZLVCJFEVBBWIOTSXYCWGHYKDVUCXLMPQIQSJSZKQKTHEVAZOOHGSLXBMDUUYNBDQKXYMHCKJVYM");
    tmp_tmp_msg_0_0.start_actions.push_back(tmp_tmp_tmp_msg_0_0_1);
    IMC::Aborted tmp_tmp_tmp_msg_0_0_2;
    tmp_tmp_msg_0_0.end_actions.push_back(tmp_tmp_tmp_msg_0_0_2);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
    IMC::SetPWM tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.id = 149U;
    tmp_tmp_msg_0_1.period = 3767342124U;
    tmp_tmp_msg_0_1.duty_cycle = 3729962509U;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
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
    msg.setTimeStamp(0.68471802346);
    msg.setSource(50099U);
    msg.setSourceEntity(86U);
    msg.setDestination(61726U);
    msg.setDestinationEntity(235U);
    msg.command = 13U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("XALLASYCHTMMQGJZEWOGVBRNRDREKKKEOVCTAJZTJHPBPHBIUBSDWFTCRTQMMVXXVDHHAFBUQCXRFNEQOOEDMZFZAWMCYOMPPJPLLVUFKPZIWWUPIKBEHYQOFHUCCUYJNISHGHNYJSSSPWKQYAZWJOBISSKHSWILYAGVXGP");
    tmp_msg_0.description.assign("QEHWPUWHZIIUCUABHAFICOAWNACSGQNTQMTIXPOFHKDDMYAVCCJPHRCOWZZWFJBBYSJSJTTORCYQWBMZASORXHVEYNHEPQDUBCUGZEIFIEEBBUGKDYGXYSWKAKVELATQIMWRMRSGFIZLMJYROYEUQDSGWTRZKBQNRDPMUDLJHSZRG");
    tmp_msg_0.vnamespace.assign("OJQDOPZYHDVAWMOQUGAEYLWASRORTUOINLERDGUNHYCJBDFPJPFTVOJJSADUBIJKICTP");
    tmp_msg_0.start_man_id.assign("BHCNBQUQAWSNUDHCVAOKSFVNOELXRDQQFFMXJSPOXGLQEEDFCCFBDUFRSHQKTVGBSYKGPWOUNTVXIYNHIOSCDERZRJHFPWTAZTQXYILQEYHZJLVFJGURPSMRAZWMAUCXAVSWNLCATHQCKLKBDOEVGPRTZMPNWMDMMOOYJUKKRGHIZEHWBLUKMTZOJRGGWZGXLVPVVILZMRAPDJWJTDCDSGXPECATSHOIBJKQWLYUJPIMKNFEIUTBYNYBYXFIA");
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
    msg.setTimeStamp(0.876935499613);
    msg.setSource(27198U);
    msg.setSourceEntity(109U);
    msg.setDestination(35521U);
    msg.setDestinationEntity(126U);
    msg.command = 46U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("OLHKKPHMXHDXJNIZMVWICOEYWCXORYFOUJEJDIOLLNUTKERDGZGTTSLDINLHKNEVHRCZIYHUCQWWSVAIAUZBSGUEQZCMNNQBGAQAOUMMPKDWTXTS");
    tmp_msg_0.description.assign("HPQTBLYXPBSZLVJSAMYCXDQUQMLOLSDIETJKYEMABIAUDRPM");
    tmp_msg_0.vnamespace.assign("TWQQFWJUMHYUPJVVVDJPZOFAKEJPVVGYXOQTDPUDIOLFFRZZLMVIMLKPKSMJDERRHOSBKOHBXDOTCOBDGMFXUHGTJGSICINHKLJ");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("MZPFZOBUFLNYKXLDOKXYUURJQPKCYNQHDSTRISWEGNCLJDEPHQTPMCXOVIAXM");
    tmp_tmp_msg_0_0.value.assign("HGMPBUFFHSUGULNWSNQRMBZDMYMLITNMOSGOBLPNHLJQQWOAKPIAOFCBXDMRKQYYUCGMOOFXQIEQEEKBFCUIPLTTVADCRSJASZFYHINCOASZGXDXPLHWEOPTRHDOAJSIARZYSZUHADVLQCVJJZZCPKKDJMGKTMWBVTBIEVHQJFBBXWKCNTIVNJHIEFEJCSEWAUDXUNEHUTXLYNNGVZPWGUMTRYYDZKSVXWKIWRVQRTKOYADPXRVPGQFWLZXCR");
    tmp_tmp_msg_0_0.type = 110U;
    tmp_tmp_msg_0_0.access = 59U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("YFNDGXLWSQWCYCNTZJFEIMPNAAMMGBQIWLWTZOGVYJBPCXIFOJQNLMFLOBNYAALEEMMYVFZIHSDJOITTBSKDFTKPDURRHQTNYZRXCRVRORMXDUZSYGRVJXBPDFUOHGXVW");
    IMC::PlanManeuver tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.maneuver_id.assign("MBWWQHVOPDYHBTKKWSYYSQEZPAEMIGQWWKAURTKNMEDNVPPSUZXOTOR");
    IMC::Alignment tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.timeout = 16960U;
    tmp_tmp_tmp_msg_0_1_0.lat = 0.993438252274;
    tmp_tmp_tmp_msg_0_1_0.lon = 0.220911789811;
    tmp_tmp_tmp_msg_0_1_0.speed = 0.11550536201;
    tmp_tmp_tmp_msg_0_1_0.speed_units = 183U;
    tmp_tmp_tmp_msg_0_1_0.custom.assign("VSPGWOIAEPCYZJNKWBZSFZEKXDYQKHPNIMRQARHPFONGQQLMRAEJLUXGBMMXVBBNERWDOIBVJGUDBHRCJURTBCDYOSYMTWSDLUBBYNLNMFSTLYQYFNLHPVTNRHIIVSKJBAFOAJAPNOQJXPHSKOILCCCDWHPKZACLJTUYFDHIXCITKEEGSGGFPUTMXEYCTZNDWTUEWYEAMVVFHPZEXLDOGRHIVJAOZMWUWQLZQUO");
    tmp_tmp_msg_0_1.data.set(tmp_tmp_tmp_msg_0_1_0);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_1);
    IMC::CompressedHistory tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.base_lat = 0.892025363403;
    tmp_tmp_msg_0_2.base_lon = 0.596173819362;
    tmp_tmp_msg_0_2.base_time = 0.543504256354;
    const char tmp_tmp_tmp_msg_0_2_0[] = {-20, 21, 4, -70, 76, -106, -40, 73, -126, 37, -96, 10, 78, -78, -68, 45, 90, -114, 126};
    tmp_tmp_msg_0_2.data.assign(tmp_tmp_tmp_msg_0_2_0, tmp_tmp_tmp_msg_0_2_0 + sizeof(tmp_tmp_tmp_msg_0_2_0));
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_2);
    IMC::FormationEvaluation tmp_tmp_msg_0_3;
    tmp_tmp_msg_0_3.type = 197U;
    tmp_tmp_msg_0_3.op = 8U;
    tmp_tmp_msg_0_3.err_mean = 0.260632473024;
    tmp_tmp_msg_0_3.dist_min_abs = 0.115139650846;
    tmp_tmp_msg_0_3.dist_min_mean = 0.0183707647491;
    tmp_tmp_msg_0_3.roll_rate_mean = 0.145477798457;
    tmp_tmp_msg_0_3.time = 0.932314470917;
    IMC::FormationControlParams tmp_tmp_tmp_msg_0_3_0;
    tmp_tmp_tmp_msg_0_3_0.action = 134U;
    tmp_tmp_tmp_msg_0_3_0.lon_gain = 0.263925805525;
    tmp_tmp_tmp_msg_0_3_0.lat_gain = 0.684815655977;
    tmp_tmp_tmp_msg_0_3_0.bond_thick = 0.994282051256;
    tmp_tmp_tmp_msg_0_3_0.lead_gain = 0.237698417446;
    tmp_tmp_tmp_msg_0_3_0.deconfl_gain = 0.758104207541;
    tmp_tmp_tmp_msg_0_3_0.accel_switch_gain = 0.843171261775;
    tmp_tmp_tmp_msg_0_3_0.safe_dist = 0.529170959347;
    tmp_tmp_tmp_msg_0_3_0.deconflict_offset = 0.368414130517;
    tmp_tmp_tmp_msg_0_3_0.accel_safe_margin = 0.380222593829;
    tmp_tmp_tmp_msg_0_3_0.accel_lim_x = 0.974713323673;
    tmp_tmp_msg_0_3.controlparams.set(tmp_tmp_tmp_msg_0_3_0);
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
    msg.setTimeStamp(0.0260703042858);
    msg.setSource(562U);
    msg.setSourceEntity(122U);
    msg.setDestination(37881U);
    msg.setDestinationEntity(140U);
    msg.state = 246U;
    msg.plan_id.assign("YVSBCYPOQXQHVRWJJLPOUALGZDDIWVLMBJSKHZGNKXERFVMGOZPMPKVCUGTWBMQPSJZCRIBBBTBIMESFXOAZVOWLARURQYNRFMCYHSDIZYSYBCKTFCSBMPXXIBRMIYLUJNDDRF");
    msg.comm_level = 252U;

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
    msg.setTimeStamp(0.930895878651);
    msg.setSource(19230U);
    msg.setSourceEntity(253U);
    msg.setDestination(62900U);
    msg.setDestinationEntity(3U);
    msg.state = 174U;
    msg.plan_id.assign("MUEHHLRAHXLQHMTZKJCQWVJPFIFQJYXHPNNUDJBZUPNDJDSYSEEMYWIQQGFWWQVCSPSGLXIFDHRSLKSFMGKYAUEHBTNRANMFGNRJQIILURHOYZHTEOEQBRYBIVANKSZSXIIDPLYAGJEBXLWCOXXPYUUXGIGROMMYOQAKRTCMCPONXGWORWIUVWOTTB");
    msg.comm_level = 23U;

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
    msg.setTimeStamp(0.646876738053);
    msg.setSource(58604U);
    msg.setSourceEntity(56U);
    msg.setDestination(52169U);
    msg.setDestinationEntity(198U);
    msg.state = 47U;
    msg.plan_id.assign("ZEZGZUHUKQYVJIXUDDTQFSTKHWXFXADESWUNLRKVJPEABWQPBIQZRACEDYISMJWNIRPYQTOCRBTPIBHAKIWFDYBPFUTFFOTIJCKIOGOGLVNWTKDJCMFVBGWGSNZXKTDNZQVCFDIRNHEGAYYHLAXRKPPZTQWQEQLDKAYXBVUHLHJVSPMMEFAOWLYFYOEPMPMISXVLMNVGORUZHXOJNKUBQDAZZMARBOUBSCG");
    msg.comm_level = 140U;

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
    msg.setTimeStamp(0.06901520672);
    msg.setSource(62167U);
    msg.setSourceEntity(63U);
    msg.setDestination(14277U);
    msg.setDestinationEntity(236U);
    msg.type = 139U;
    msg.op = 115U;
    msg.request_id = 3628U;
    msg.plan_id.assign("FISOXUCYFULQIDFZNDKWOTBTKDUIVQQGSMINPRQXHGITGUGRZPPRZNXFDSJBLJJEEJMZBAHCEYHCGSVYSCMHHYBLXZPGFAFNAGAOOMKBRTQZBSWENBDWRWHWSOOYPVQBZGTFHPDJJZZQWWOKUEPNIVECCYXLSOUNRLPACUYUXVMFTFXTDVDHLKOPAQYVTTTSLRNXCENDMXLMCSCWIMVBKMANEWEYJZHVIKLXBA");
    IMC::TelemetryMsg tmp_msg_0;
    tmp_msg_0.type = 164U;
    tmp_msg_0.req_id = 1292097605U;
    tmp_msg_0.ttl = 3361U;
    tmp_msg_0.code = 22U;
    tmp_msg_0.destination.assign("VYAPZMZDOHKINRWGYORDCWHNSFTFTPUKIDJQVZACXPNJJEBHQUHLETRMKFFIYFECYVDCPYMZUKCJLCJKOLUMEIVLQWWGPGLATYLASKQYHDBJKGVDXRGDCFFPYUNPTNNVNWTJUIIMORZ");
    tmp_msg_0.source.assign("QIQWPFPAAFFMVARRHALHTJQGYSJPJNUXBNKRLSFTSLKEMMDNGJMTEXPDENLXWDJBGGZBJSBTDWCUWIMIQXMLATANGKKWAQPDHQYODLCNAZSFRVTVQXESUAVYVODEQKCU");
    tmp_msg_0.acknowledge = 116U;
    tmp_msg_0.status = 154U;
    const char tmp_tmp_msg_0_0[] = {31, 52, -113, -101, 78, -36, 74, -12, -72, -63, 93, 20, 50, 14, -1, -110, -8, 48, 32, 31, 5, -38, -3, -81, 74, -32, -38, 107, -46, -79, -115, 42, 112, -46, 92, -69, -14, -25, 20, -123, -120, -18, -50, 116, -45, 2, 56, 107, -80, 24, 48, -38, 49, 81, -66, -6, 78, -109, -116, 52, -79, 46, 120, 70, 25, 90, -33, 101, 75, 54, 62, 15, 4, -119, -107, 85, -22, -99, -40, 42, -76, 110, 123, 35, -10, -113, 12, 49, 52, -35, -108, 5, -96, -33, -26, 46, -78, -73, 57, -122, -77, 83, 99, -93, 111, -82, -79, 73, -13, -67, -85};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
    msg.arg.set(tmp_msg_0);
    msg.info.assign("DNQSSXQZGPWHRDETTHOJDJTZPOLBHNOZTBVGREKPOVSUPIUAWEIYCHGGUEYDVZUXXEPMJFACMYHPPLBJDLXIVGDNGQSKYFUVRYNFLWTURXQKKDR");

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
    msg.setTimeStamp(0.58726015077);
    msg.setSource(61113U);
    msg.setSourceEntity(240U);
    msg.setDestination(33197U);
    msg.setDestinationEntity(234U);
    msg.type = 117U;
    msg.op = 218U;
    msg.request_id = 43326U;
    msg.plan_id.assign("PAPAOXLYMPRGHAAYFLJVWBXMGNODRALPEWXYKRDERDBLDSYHRGHWFWFTUPTXZOVNOISSIGOYZWINTRBZUBABTGIQCLVDXSKTUFTJKPXAXHGEJIQJRHFKVNHXUJEMLACGJYPFBISVUDNMJPEHKJLONGWPOIZEVNZQQHCLUOSJVKKYXMDPCUZUTEOCQJS");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("LQBBUHZKNSFAZQIKMQERTCREIGFMOKZMMZJVOWIPEAUSSKTZJXPGVRFZHADEQCKORETPKBQDSZMTHAZSNHDOGXLMSBJRUAFUHIDPAJLCSYPLTPCYVCNIXLGNXCWDOYALRCAKVTPONOZCVRNPLEUPXEAINYLOOGTBCYRRVWUSFLFBFWJCJBKHUPGGYXDVYUXWGGWNTAGX");
    tmp_msg_0.feature_type = 195U;
    tmp_msg_0.rgb_red = 59U;
    tmp_msg_0.rgb_green = 195U;
    tmp_msg_0.rgb_blue = 223U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("BHHBHNRAGYYWWNCWZIUPSDFXGHUOSVEQXUDOYQIBAPIQAKJKTBRAGIEPTCARSMUVMSECZETTKMBIAHOVSMBYSWTUXCRLZAZXBEELTRCDGJIKWLBQLQELMPHNVVC");

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
    msg.setTimeStamp(0.17370180761);
    msg.setSource(792U);
    msg.setSourceEntity(205U);
    msg.setDestination(1240U);
    msg.setDestinationEntity(229U);
    msg.type = 64U;
    msg.op = 246U;
    msg.request_id = 6381U;
    msg.plan_id.assign("QCLPIJLFDNFNMBMKWUAJVXUIZFVHSGNTLKLGKPLOBKDNPWRHQZAORQOWXNSOCEWERCDEROFDSTQSDVKHJLIRALWQGGKMUIMRQHCWPYVUVUFYMIGCRTRXGGKPWSJFMFBALULAYYJMQBQBWIYKNPJOJUCHIVVEFBBJYNWCKPCXMZA");
    IMC::Force tmp_msg_0;
    tmp_msg_0.value = 0.662409290434;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("XYWQZCVLZZXMWRDTOBWWRYKVDJEXAGTNIOIVJAKBAHUISKLSQYXNCKSECOGOPRPUTQZNTXZILLMRWQUXURQRTVFGNPRUJEIJHVKTQTMQUJMHHLJJRZCAEFVSDSBMVPVDENMDGFYDDFJDESBRICGTYOSJRQKXLKLVWMNYUEDBGWNPTOXFHLPFPQJBXEBHSNZPUKSAYHZTC");

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
    msg.setTimeStamp(0.0334934713494);
    msg.setSource(508U);
    msg.setSourceEntity(52U);
    msg.setDestination(44752U);
    msg.setDestinationEntity(159U);
    msg.plan_count = 49500U;
    msg.plan_size = 1498631159U;
    msg.change_time = 0.0959939666033;
    msg.change_sid = 23348U;
    msg.change_sname.assign("AKMNJGFHPBRKNBZJOLSJDCFXUGPFITUTGSJUKRACZXYSBLYYUHPCYORZRIQEKHHLDEUJCEMFISOXWDNWWAALRRFBOYSQVRZYOXZKLMHCEUD");
    const char tmp_msg_0[] = {-63, 28, -102, -63, 12, -8, -8, -107, 113, -58, 16, -20, -62, -3, -23, -92, 7, -18, 59, 79, 116, -29, 20, 54, -76, -83, -1, 16, 10, 94, -86, -11, 61, 25, 116, 12, 83, -96, 95, -89, 24, -108, 88, -18, 122, -60, 78, -84, 75, -10, 91, 45, -22, 107, 79, 54, -70, -19, -85, -79, 36, 103, -105, 85, -8, -31, -112, -33, 20, 119, 53, 47, -125, 72, 71, -120, -104, -36, 65, -30, -120, -96, -126, -23, -59, 64, -128, 39, 77, 2, -2, 37, -25, 52, -41, -10, -119, -2, -88, 79, 73, 44, 67, -84, 47, -110, 91, 9, -56, 16, -101, 37, -114, -63, -96, 54, -124, 125, -5, -74, -28, -100, -105, 4, -15, 113, 123, 85, 120, -7, 53, -35, -1, -128, -114, -29, -123, -125, 0, 123, 17, 57, 69, 124, -114, -24, 111, -55, -86, -18, 41, -44, -62, 117, -40, 5, -60, 46, 114, -103, -77, 67, 32, 18, 90, -103, 99, -61, 56, 24, -28, 9, 116, -78, 88, -28, 109, 51, 101, 43, 55, -88, 116, -81, -74, 120, -116, -15, -47, 100, 74, 2, -75, -27, -78, 77, 55, -99, -124, 98, -107};
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
    msg.setTimeStamp(0.787819098671);
    msg.setSource(24715U);
    msg.setSourceEntity(223U);
    msg.setDestination(64015U);
    msg.setDestinationEntity(29U);
    msg.plan_count = 46832U;
    msg.plan_size = 1394618110U;
    msg.change_time = 0.0688828992533;
    msg.change_sid = 42791U;
    msg.change_sname.assign("SBOZWIYGKMRBODZIKRUUWCIEGPQKNBJJAPSEMASAFDYMTHDTMNWQHLBEVONOXPOHPNHISOXZPLOMC");
    const char tmp_msg_0[] = {52, 44, 61, -67, -38, 23, -47, -113, -102, -81, -110, 90, -71, -66, -39, 14, 63, 3, -44, -101, -28, -82, 82, 68, 89, -6, 69, -65, -28, 28, 21, -127, -3, 99, 73, -31, 115, -71, 98, -57, 101};
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
    msg.setTimeStamp(0.244942395414);
    msg.setSource(41968U);
    msg.setSourceEntity(93U);
    msg.setDestination(31313U);
    msg.setDestinationEntity(99U);
    msg.plan_count = 60462U;
    msg.plan_size = 2941816441U;
    msg.change_time = 0.600677782773;
    msg.change_sid = 59857U;
    msg.change_sname.assign("ZFXBDDUOMVODMTDLSCCFDBQPWOKRHNXWKEQLOJWCAYXNSVLOGCRKSERVULTAXOIVTKAUNXFTFSPBZYLIDSITWFPMMRIDOBZTUICXRPTBIECMJRAUSFJTMSKZQDYPLUUQQNHVZHPHJNATKZTBVLYGP");
    const char tmp_msg_0[] = {24, 1, 64, 27, 19, -105, 47, 94, -107, 13, 122, 66, 28, 45, 42, -56, 84, 106, 84, -127, 28, -54, -70, 120, 28, 55, -10, 67, 18, -119, -2, -4, 10, 93, -84, -89, 48, 40, 37, -32, 98, -12, 54, -24, -49, -122, -97, 22, 51};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("PMXMXYYDDAFPNHOABGLZDIIXMETLAJIMWMCFOWYTJWEBNBCWLUSYVEWJCUNHIUFVUTOMKRBNJJSGWYRPUKTBLRFIBJUBUSFYLRUPGJGZBHLHVCSGKFBOGGPDGPLDCZZFPKUTVAMVVHBAQRKMXZROYQRSPWLARMEAQKXKOXCZXIHQNFPIXRSDQGEORYKTZWCNSDSLQDZAOHS");
    tmp_msg_1.plan_size = 16831U;
    tmp_msg_1.change_time = 0.932624599125;
    tmp_msg_1.change_sid = 29592U;
    tmp_msg_1.change_sname.assign("TOOYVQFPVIJNRQLASUDTAZM");
    const char tmp_tmp_msg_1_0[] = {-91, 14, -63, -21, -118, 23, 112, -10, 43, -92, 35, -62, 109, -28, 93, 37, -11, -5, -39, 33, 77, -32, -123, -26, -84, -11, 12, 12, 124, -58, -30, 29, -95, -56, -51, -52, -24, 84, -121, 4, -91, -77, 71, 29, -31, -17, 28, -60, 27, -12, -102, -16, -17, 84, 2, 62, -38, -61, -30, -11, -51, 72, 60, 67, 23, 121, 60, -88, -77, -85, -59, 17, 98, -6, 115, 9, 84, -35, -99, -36, -75, 76, -111, 88, -88, -96, 85, 95, -121, 37, 11, -73, 107, -86, 110, 56, 123, 61, -19, -59, 101, -97, 55, -48, -94, 10, 20, -49, -100, -116, -34, -41, 108};
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
    msg.setTimeStamp(0.915671739922);
    msg.setSource(26020U);
    msg.setSourceEntity(197U);
    msg.setDestination(36567U);
    msg.setDestinationEntity(240U);
    msg.plan_id.assign("VKWWCPQDKZFPGCKOUJLZAGSHXIQNTYZGOYQYYKPJBRVMHUSQLAEXLMIFHPPHEHFYQZSNREENFNZDEHADSEIDMIGWHSJZXJVXMHNLOCJWWBFAXWSSVCYVGEVWIBXBJLVTEGPRYCNGMIOTKECVNLPLSZQBTFKBXQQAUMQTUJJASTUVJKIWOFAVAYDOPGCCRTFJMYUDTBGKOMRMYDRRSBPIWWORAUIUZRTBZX");
    msg.plan_size = 63516U;
    msg.change_time = 0.878126748612;
    msg.change_sid = 14609U;
    msg.change_sname.assign("UQUYZHUJBIFZTJSUSGRNJYAFPTUVEXNXCKPIZBWKIEHZBGHDFRVWOOWOCVGZTVHTXBTCNJJVTCCCESUH");
    const char tmp_msg_0[] = {-31, 111, 56, -72, -42, 21, 113, 103, 10, -1, 101, -109, 110, -54, 123, -31, 70, -25, 112, -98};
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
    msg.setTimeStamp(0.313787556095);
    msg.setSource(45334U);
    msg.setSourceEntity(204U);
    msg.setDestination(64020U);
    msg.setDestinationEntity(229U);
    msg.plan_id.assign("XHQIYVCUCCXQVSKVUWEMEYNRJXVTZGHAIKLXRVNZDRAUPNNZYHUCDIOLGDFJGPTBBDGUEEISFIDOREOSIBDNOZWNY");
    msg.plan_size = 37652U;
    msg.change_time = 0.0490893733851;
    msg.change_sid = 42709U;
    msg.change_sname.assign("BIITSKZKSFRNRGWBVJCNGSHXWLLMSMCQZVQDHPOEAMSDYDHEWYOSSVKEZNNOGPMTDYXMNEBRIIWXUHAZBTGKTUTOSQCFWTCUMQMZSZYXOVHJNDEKMHWUGIQFRPFTJRHGEDXJOEASEKAX");
    const char tmp_msg_0[] = {54, 94, 37, -36, 114, -104, -111, 42, -39, 120, 43, -123, 49, 55, -38, 75, 45, -30, 46, 1, -32, -127, -115, 37, -84, -24, -77, 70, 3, -116, 41, -103, 95, 11, 110, 113, -65, 17, -26, -64, 58, 48, 78, -82, -105, 92, 57, -102, -16, -100, -36, -110, -1, 64, -124, -35, 99, 87, 108, -5, 46, -35, -82, 89, 18, 14, 40, -98, -90, -44, 15, 78, 35, 0, -103, 36, -61, -102, 11, -32, -29, 87, -126, -104, -48, -8, 102, -14, 51, 35, 87, -48, 111, 91, -96, 102, -76, -42, -72, 91, 73, -10, 67, -9, -87, 78, -116, -58, 119, 10, -19, 20, -35, 66, -108, 110, 12, 86, -76, -13, -113, 75, 20, -62, 45, 15, 19, -128, -20, 110, -47, -72, -93, 19, -51, -70, 110, -87, 67, -30, -49, -2, -103, 58, -10, -121};
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
    msg.setTimeStamp(0.304824995386);
    msg.setSource(38103U);
    msg.setSourceEntity(154U);
    msg.setDestination(35429U);
    msg.setDestinationEntity(148U);
    msg.plan_id.assign("PUPWUUWEBHFSIROGTIYICDHEDNAXCKXKVGFGKJUFXDVLGTWVQADSIQCBJDBZVFOURQYYDNETHDEJEEWXGNNQZZTHCQPWVLHVQCXNCFHJUBVCSYMGFFOTOYYMWPATCTKXHAQIFNAJFV");
    msg.plan_size = 17773U;
    msg.change_time = 0.611970990138;
    msg.change_sid = 17550U;
    msg.change_sname.assign("WLBUVCMUYMIOPQYXMOHJRHYNAMOUVCWZXXCYVRLOEWFOBWNTSXRMFGMZRCBETVZEJOIQPUZYKGZILQKFVEBAYGNTGTSEJZSXOOMDFUQJUDPCERNLIXGWGRJWNADLCKLFUQUNRLRQDTGZQGJEBEHIAJPHSTFMPO");
    const char tmp_msg_0[] = {-101, 103, -96, 97, -121, 68, -51, 7, -15, -87, -35, -56, 109, 47, -21, -82, -71, 49, -104, 119, -41, -45, -70, -87, 109, -40, -29, 30, 115, -48, 107, -106, 25, 80, 102, 60, -82, 4, -126, -52, 113};
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
    msg.setTimeStamp(0.00809536283244);
    msg.setSource(44922U);
    msg.setSourceEntity(22U);
    msg.setDestination(49572U);
    msg.setDestinationEntity(110U);
    msg.type = 65U;
    msg.op = 44U;
    msg.request_id = 18170U;
    msg.plan_id.assign("MYTPMDPFVCBDOEOMHSRQXKBOINYNKCJZTGXKSPCIIUK");
    msg.flags = 23094U;
    IMC::DesiredThrottle tmp_msg_0;
    tmp_msg_0.value = 0.960257917515;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("UKWHRKOTWIJUDETIAOQXQNHEFKHLIYXPTNELOKRJDVITXYHSJGMZFSQKFPOYACTDBVTQMCKNXBLJURQAFSXQOBACBEBJLNMZZGKXVSUGWKYWUWBRIQOLLNCPDZNOOHLXDCHAMNNTYVBZSFPHZNSBPEAZCSCEEIFWRJWPTMPY");

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
    msg.setTimeStamp(0.660214362573);
    msg.setSource(2390U);
    msg.setSourceEntity(119U);
    msg.setDestination(46688U);
    msg.setDestinationEntity(56U);
    msg.type = 234U;
    msg.op = 42U;
    msg.request_id = 13145U;
    msg.plan_id.assign("HSNQPUNLSXDTLAEXEUAAUVIVWWGZOVUWGAAERNYVMQZOTHJFOGWQIZNROZVHKXPHPCBCKLUISUEXCCLFJJBKDRST");
    msg.flags = 46460U;
    IMC::VehicleLinks tmp_msg_0;
    tmp_msg_0.localname.assign("EXWWKLIYRYQCUDMKOXLHFYBXATQCDIUQHRSVNEOXBDLOVHCIMYZWZKNSARJGAMVVSGSZUESQIFOTVRBBLZWTUTHRPCZCXEGNGDDXCPOZIKSUYKPGDYQJKMVCMBKRFWGZWNXHUAPJJWJMDYTLNFNMVKZUAGSWBJSLKFVPQDZDRETJETJXAKIMOFAXSPOBGEFFSWTOMENLNNFVPCLHVGAJRQEHFYIBUIWHBYOIMLCHRPYQXULAPJDRTUZQGN");
    IMC::Announce tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.sys_name.assign("NHQJANEOQOLCURL");
    tmp_tmp_msg_0_0.sys_type = 69U;
    tmp_tmp_msg_0_0.owner = 6510U;
    tmp_tmp_msg_0_0.lat = 0.637982927947;
    tmp_tmp_msg_0_0.lon = 0.719666493329;
    tmp_tmp_msg_0_0.height = 0.893167818253;
    tmp_tmp_msg_0_0.services.assign("HNWSVJCEDUMAIWWFH");
    tmp_msg_0.links.push_back(tmp_tmp_msg_0_0);
    msg.arg.set(tmp_msg_0);
    msg.info.assign("YGLTIYZKPEIBEIVVLKHQXBNFWTPQJKGEHOTAGXBMUWGQZERIJBTUSQLHSCMIM");

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
    msg.setTimeStamp(0.455253800827);
    msg.setSource(11533U);
    msg.setSourceEntity(143U);
    msg.setDestination(38616U);
    msg.setDestinationEntity(51U);
    msg.type = 144U;
    msg.op = 100U;
    msg.request_id = 31521U;
    msg.plan_id.assign("XXIQWZDHKDHDQTBTJFMLIEVZNNAMUSKSYKDSCOTRFEKWZHPRGWVEDADNOWINLUORBPRZGHBAIYLFHFCMQXLPEXBTJANNXWHHYSTMVPUCVRKHQLIPVOGYLWWMJAECWOGAFIYTECMPJJJSFZIQTXUSCCGVZESNMEABVXOUOKJSYRXONNGDOTUCTBPFJYHUXZQLTQKPGKLGKSPAEDBVHBZRWRULUMYGZKAVFMQVQAL");
    msg.flags = 34491U;
    IMC::AutonomousSection tmp_msg_0;
    tmp_msg_0.lat = 0.697730789069;
    tmp_msg_0.lon = 0.933950831347;
    tmp_msg_0.speed = 0.891106998075;
    tmp_msg_0.speed_units = 99U;
    tmp_msg_0.limits = 220U;
    tmp_msg_0.max_depth = 0.0456329396812;
    tmp_msg_0.min_alt = 0.984040839135;
    tmp_msg_0.time_limit = 0.515616061862;
    IMC::PolygonVertex tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.149141179297;
    tmp_tmp_msg_0_0.lon = 0.691343361731;
    tmp_msg_0.area_limits.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.controller.assign("KSHODRFJBMSNKDRTBUPKIXGALFJMXSLBHDCUMAERMGWEWGTXCEALIXRTDBUVCAYBPSVBEOHWXRMGFZUIJFHIBALZYQGIMGYFO");
    tmp_msg_0.custom.assign("AUSHGACOPZGJCWHKQAPPFUPDRNFKHMLJQJVUK");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("GXCQCRXJHJIRWJVOJJLXBZTORFDZACOKVTSUPVWEZDPGQPITFMQCXBUKMYHGEIZAZQLILHUEQOJCSXPXOFMVZNNGFDKO");

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
    msg.setTimeStamp(0.197378403505);
    msg.setSource(57818U);
    msg.setSourceEntity(20U);
    msg.setDestination(36084U);
    msg.setDestinationEntity(60U);
    msg.state = 213U;
    msg.plan_id.assign("KIDAJYPCMUKXAQPOEQAUDUCFI");
    msg.plan_eta = 1518926157;
    msg.plan_progress = 0.333979019688;
    msg.man_id.assign("TOHLAVTEFMYSPRLPZLLIHHUNETFDCPTHNKPOXIRSTOSCCPOZHUIAEMZWPIIVDQMDXLNWUEEGQJWCBJCMVZWTBBXSUAXWZDPRRVDVUITLIGBKEVYUZYMKXKPBCLRAQXFINZVCTYSGYNOYKNUJVWQXMQBTMADLJGJASQRSKEHJMSWJIPKSJZDXUNKDFRBHAWSFALWEKABOFGRFPOKRMRLFOYFGJGH");
    msg.man_type = 10894U;
    msg.man_eta = 500511464;
    msg.last_outcome = 64U;

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
    msg.setTimeStamp(0.236486965374);
    msg.setSource(13475U);
    msg.setSourceEntity(33U);
    msg.setDestination(56991U);
    msg.setDestinationEntity(89U);
    msg.state = 216U;
    msg.plan_id.assign("ZRKZHFDFMJZGXRZBIVNGYONJKLCFRNEE");
    msg.plan_eta = -628690758;
    msg.plan_progress = 0.514293211332;
    msg.man_id.assign("WJXHODXTOUHOKIEWPTDJVOSINLIEYRVKFLVHZNVZAYEAQXVTMMVIBUUUQAMJASLHVSLROPYGZEZWQNGPWKRPHPFHJITGNLFFPIGRIKYFZQETJRALOXNJCZBKECSMYBABNSXQFMUGIWCHBPADIUCLZXEJFPOEMWZQQGXHUKKFUCMJVDRSSBUYORSKQFCBYTYLBUMJT");
    msg.man_type = 47227U;
    msg.man_eta = 1097954133;
    msg.last_outcome = 134U;

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
    msg.setTimeStamp(0.360746551078);
    msg.setSource(10579U);
    msg.setSourceEntity(135U);
    msg.setDestination(39813U);
    msg.setDestinationEntity(151U);
    msg.state = 11U;
    msg.plan_id.assign("ZRESIUFALDALAMNOTWKWNQTHDISONPPCPWXPRGELKZELFWFAQQBCQUWINRNLNCZFJMGMHSKICTIDBEOJKUGDTGZIKORBHVXQXFKHZWQBVZLORHSJPCNBYVEXOYGTE");
    msg.plan_eta = 383058616;
    msg.plan_progress = 0.56932346623;
    msg.man_id.assign("RHJXQMSCPIROKVGRXGCWGIPQEDXUDDKPKKJAYAQTHVCONREUQEYWXJNKIFEVBANNWTQOWIZCJADJSVLEYHZUBZBCTYWFOXGEMLFAPFHSMADDAPNWZWLPZGMZPTRBSJYYCKOQARUNOOSUEZVBHDLLGIBTFJPXFAVRSTCYSHRNCQYRQIWSGLJGHFXXXNMMSGNOCQFBLFCDNZWKDELIJDKYVJBEHUBUVXRFTPMTKITUZLBHPMEMUGLAITUSKVIV");
    msg.man_type = 16514U;
    msg.man_eta = -1438158321;
    msg.last_outcome = 160U;

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
    msg.setTimeStamp(0.993892306995);
    msg.setSource(11231U);
    msg.setSourceEntity(54U);
    msg.setDestination(54004U);
    msg.setDestinationEntity(17U);
    msg.name.assign("MPRLPFHIDVTLMDHNXHQXQXGQAAQXQXFJBRGOJVWHAKCCJBVZNGIVSGKEPRYTVURMLEZWZHRZKPWLNSTRHNLUVFVOUVCZTSUUBIGYLUWKXIYMNKSXBDNBRKCIOYTMOYYCBTZGBVNXAGQJSFODMFHEROSWLDQYJCRQATKZOYVEXPXCSNIGINE");
    msg.value.assign("EUXVHWNNRKKPNLWEQFBCVSNWOHQXFOIFXYJZXCQUTOKWYBEVFWCQOUXSGGETDRZVPRJXLDBALZVOJFQSTUQQJNMGZDTETJHRKRLEBWIEDBIYXXRPFLAGYQOJNMGKUEAGYEBHLPVVAOMMDAJSYGIFPEMLWUSPHNVYXYTZITLJYMZKZA");
    msg.type = 34U;
    msg.access = 29U;

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
    msg.setTimeStamp(0.385678812292);
    msg.setSource(33138U);
    msg.setSourceEntity(86U);
    msg.setDestination(12798U);
    msg.setDestinationEntity(149U);
    msg.name.assign("HNOOTXGGCGSNUSNXSIZKHZQHXOHLRAXKCXKPLUYLMRSNLZIKRMNPIBWDEZGBAVHGLHVQNREIWTYXQBRJIKCFQZLOYTJRUORRDVJMJFU");
    msg.value.assign("IIEZUYYMRXJPCLOZLPPMHGGTNWTLIBLECAAJMRGZWXNDZSABYDVVQWOLNXQEHTAQCQ");
    msg.type = 79U;
    msg.access = 139U;

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
    msg.setTimeStamp(0.374462482798);
    msg.setSource(8341U);
    msg.setSourceEntity(52U);
    msg.setDestination(2428U);
    msg.setDestinationEntity(234U);
    msg.name.assign("FWIWOLOGVBFDKEZZRPQDYOFSUGCEYIAZACHGRNHVCPDSJQNEOBUZIRPPXLGKKFFYITNJBWSGXGACVQBUDBKGRMJGJGATSTCBRMAOTMPYLXXVRNXQC");
    msg.value.assign("GDFDUPTSRHDSZDSIRZLAQ");
    msg.type = 233U;
    msg.access = 172U;

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
    msg.setTimeStamp(0.973956988585);
    msg.setSource(60955U);
    msg.setSourceEntity(132U);
    msg.setDestination(23376U);
    msg.setDestinationEntity(14U);
    msg.cmd = 72U;
    msg.op = 214U;
    msg.plan_id.assign("JSYXEVSUNGYIVFKZUTSEIOUCLKMTBJOSBGKWNUCYJGBGQWOKMAFPZCTOOTHULTXSMKLEQBKYZISMPWSQYJCDWPLBIYVCHMAPFLXNMWDEPQUZAQQFIDPDT");
    msg.params.assign("XOTVTWEWIEUNFYGHQBCTCMDTHBWYGPNMJYKPPFBZIGGSAOCEYERYWNYVMUHRFHCBXFDPKKYJTLGDBAXZCRQSZAMWMOQZRVLIPCRVULJVTGVSHCGCSVBJINNMZWHORSEGWCMEZINSJFUADLLEYOEGOFFYNXNKXKJQWVBWZQADNUDPQXZIDRWTSEIIUYXUFOSFBBLVOZDLBPOUQRXUPLQAROACDFJRJQNKHHGMSVHKSPIZEXQKL");

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
    msg.setTimeStamp(0.559660734902);
    msg.setSource(10993U);
    msg.setSourceEntity(226U);
    msg.setDestination(15371U);
    msg.setDestinationEntity(73U);
    msg.cmd = 110U;
    msg.op = 106U;
    msg.plan_id.assign("RXKOHKNOCEYLEMFGUDQUYYEZDPVTHWEQGWESAEVDVTBSXRIJAMXPCHXFTIWTFUMYAYHISJZVVBXOOQEZSDNMUSUNJZJVLBKEMHZOVVIHCBGKHBAGLPWSSPVZYSBHNTFJAFSTJF");
    msg.params.assign("JHOMOZBJXVAPDGYKDFBONNMPXDPISSAAYTHBGOXXOFWEACTGKIYAIEFRKRRWMHQFVIAMFFMTRMPXPNDVBEHXASQNQSSOKNUGWQLZAUJECZWDFKNHTPRUCTTEGTPMKHQVJJEYLKNBQUWZFHLORYOXS");

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
    msg.setTimeStamp(0.706749367126);
    msg.setSource(64567U);
    msg.setSourceEntity(202U);
    msg.setDestination(13042U);
    msg.setDestinationEntity(94U);
    msg.cmd = 199U;
    msg.op = 106U;
    msg.plan_id.assign("QLATPQQPRRNDZQJTHMRHUJIRDUGHMOEXVIPXSNZAQYSNDXUFULXYCELLIBAEXUMKOZIMJBPSCTHYLFBTFNILMFRSGRZHSINVHZCBTYEJWJFWR");
    msg.params.assign("OEXNXATHDHWQPPGSGLHQRZKTNNCKMEWY");

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
    msg.setTimeStamp(0.220203367882);
    msg.setSource(23169U);
    msg.setSourceEntity(240U);
    msg.setDestination(58796U);
    msg.setDestinationEntity(128U);
    msg.group_name.assign("ZQXWPOBIGXJDOOUULNVRPIWZCJCVZBSWKTBHGPUQKLXEHGZHTFYVKZXRJZLKAZFSKXYNSTCGJXSBILUHIAW");
    msg.op = 225U;
    msg.lat = 0.721924159122;
    msg.lon = 0.880668945637;
    msg.height = 0.846121498344;
    msg.x = 0.76252025209;
    msg.y = 0.151383491742;
    msg.z = 0.0237753306388;
    msg.phi = 0.360005984086;
    msg.theta = 0.125627779239;
    msg.psi = 0.38979302047;
    msg.vx = 0.630992634923;
    msg.vy = 0.719407351905;
    msg.vz = 0.588226537259;
    msg.p = 0.0875248849536;
    msg.q = 0.966666248695;
    msg.r = 0.972252156225;
    msg.svx = 0.605304806888;
    msg.svy = 0.824673009761;
    msg.svz = 0.255133673513;

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
    msg.setTimeStamp(0.998884887598);
    msg.setSource(9546U);
    msg.setSourceEntity(137U);
    msg.setDestination(60981U);
    msg.setDestinationEntity(61U);
    msg.group_name.assign("SBOOJVNJQZZCWBQDAKKFGHFXJDSVLRXGQBUFDMGZEVKDDUTZUUGRTVCXFJVEMRRZLVSXCGTPPHYOERFEUDQIRPSSMCFZSMHOALIDZGTYNIYPYQJQYVRTBQUNNBAKSIOJINPTYWNUJABLMBLOHRFSCXSDXWJJINWQGDIEFVIYLAAQ");
    msg.op = 159U;
    msg.lat = 0.557176838449;
    msg.lon = 0.641354236344;
    msg.height = 0.686068273199;
    msg.x = 0.798654627826;
    msg.y = 0.01419573686;
    msg.z = 0.991800549107;
    msg.phi = 0.923419240287;
    msg.theta = 0.837593589456;
    msg.psi = 0.511688273558;
    msg.vx = 0.652495525269;
    msg.vy = 0.161062269524;
    msg.vz = 0.0573519394784;
    msg.p = 0.269088213836;
    msg.q = 0.381168174426;
    msg.r = 0.210714349964;
    msg.svx = 0.712059055067;
    msg.svy = 0.839535756185;
    msg.svz = 0.942349396277;

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
    msg.setTimeStamp(0.0821074653928);
    msg.setSource(32366U);
    msg.setSourceEntity(41U);
    msg.setDestination(21738U);
    msg.setDestinationEntity(218U);
    msg.group_name.assign("KRIRAMBJTTOFUCBAHADWNITWXGXMTBAMXUUIPQHTJSQQJCSRCUPPGNQGKFEWSVENDYTPZSUXFYGSNJDWAQKO");
    msg.op = 165U;
    msg.lat = 0.376938614383;
    msg.lon = 0.097330516703;
    msg.height = 0.666522127436;
    msg.x = 0.340163158665;
    msg.y = 0.598304238609;
    msg.z = 0.997204887343;
    msg.phi = 0.339492596044;
    msg.theta = 0.369340556978;
    msg.psi = 0.949416293518;
    msg.vx = 0.506041009191;
    msg.vy = 0.813716070192;
    msg.vz = 0.408469410976;
    msg.p = 0.707923258276;
    msg.q = 0.427559642483;
    msg.r = 0.517436295972;
    msg.svx = 0.523535307055;
    msg.svy = 0.72317494806;
    msg.svz = 0.487758820605;

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
    msg.setTimeStamp(0.3466242758);
    msg.setSource(43269U);
    msg.setSourceEntity(44U);
    msg.setDestination(7378U);
    msg.setDestinationEntity(35U);
    msg.plan_id.assign("TZUDODCMHJJWMLKFTEMDSTVCGCIBBNHVVWMTFNRQKUTRFIYAXRCUWLLLBIZIIQMKHBDXAIDAPSDDNPV");
    msg.type = 107U;
    msg.properties = 242U;
    msg.durations.assign("LRGSXJAWXGZBDVWUVVNWBQEGZKXSZJQWQCNVBDEKGZVJHSOJZMIZRHPYKNSJAIMRLXLOGVMXYQDEMEEBEWPVNARUFUOEUTFVDBTHQIWLJNMNJXEKTYCMOAYCPKUQKHSNLOIFOQKBEXLIAIMRLGYXTYSBSYTNHWPVHZDHGYCUFZEJUGWTMGPPDMDUNQQIHTDOUKVRLRRPHANKZTSDAPHPFACXQUDJAAOTPJWFKFZFCIXSMOTLC");
    msg.distances.assign("KHUXNPYKJVIXPWPNFFJDXURNDCXKIPMFSEGGJGJWFOWWHMBBOZLNHIZJTSTAZMVSZVHKZPZKOZYUVCZXOFJRWEELNRIDEHMCIEIQOSVOTTSSABLSAHWFUAAIBMETMXMWIZLXAONRIGYKOBDDPKHBPHCLMQQEXBPKDTMHBGTCPJRSAN");
    msg.actions.assign("CHAUUQPXRMFRGZHQGQUOWKWACHWOMOBGWKPPORRZPCFXQTESCGPMYZUATDNRMNZPPIKTVSWLLUASUKVZJNQKBALNHOVIGNDIOELYJOIRJSKXLJFCHOBCBBKPVBPUCLMABQDXVKUTGYFIMRMTZCELJLDXCYEWAWXJRJUYOIZYNNSHZBXFQITHFJSDEADKJHFBEV");
    msg.fuel.assign("OJYOQUMGWNTUHURSVGVHWRNPEPTFEFIOUYWMNMADUJNDYDUVRCBOLZPKNWTCSCRCEEBAEIIFMYYZQAMKTWJQLFDTIGPGL");

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
    msg.setTimeStamp(0.264899498688);
    msg.setSource(32364U);
    msg.setSourceEntity(91U);
    msg.setDestination(8264U);
    msg.setDestinationEntity(216U);
    msg.plan_id.assign("THNPHDDMOSJASJFLYNMQYAOBTLIJDZFGURGWJXIHNGDCYKAP");
    msg.type = 226U;
    msg.properties = 168U;
    msg.durations.assign("LMZCOTMYFIBFWNMYJWAHEEFPEJGH");
    msg.distances.assign("IGHLJLEWMCZFNJZBMKUATRIOLCRUKHUTEIVPFTLHKQGIEOHGKHCFRJLRXNVUJRRAEXYBBJFWXGWRSYWKHTCAUMYFPUZRDQAQYPLQSMGQOLSKMDWRZJOBNVYIVQENSZ");
    msg.actions.assign("YRWLMRESPSREVNLIQFWTQFVIWWSXAEMUOBHIKXYZWHQHLNHKXCPAIDQUTOLDDZEPUTFOLWOSIGKLCEITSJBQCIAUODBGRWKDEGNGKBFVONAHSNBPYMZSGRDEQUTLCOGBMNRHTGYPXARFZJLFOWHJNQSCKJYVUTCDXVJACSDUMEWYYZGIVEIGHQKAVPMAJEMYTVYNWUJXKBSLMZANVDIHJCRPLKQYCVOJZZPZTFFDXBTXK");
    msg.fuel.assign("KZEOGFTKDPVDRPRTOFNSGHTLCQMWCWQXTFXWNUZOAQTPRONHCSMBYRTQKVBUZQBBLRMYULFEGJGEFZZNIJUXPJZMDLDAJJPYUFDSHBKGOURLAIZJSYOXACEEYBMENHHGZICZFDDIIXLRVPO");

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
    msg.setTimeStamp(0.822582156442);
    msg.setSource(58245U);
    msg.setSourceEntity(173U);
    msg.setDestination(2508U);
    msg.setDestinationEntity(161U);
    msg.plan_id.assign("JFRTEPCKWHNUCIHGUHYSNTDPXFZXBAXIHKLXQXDJQKOYGIKNJ");
    msg.type = 23U;
    msg.properties = 98U;
    msg.durations.assign("WLEZXPLVMCTEJSWRYZLYJZC");
    msg.distances.assign("WCVCIUIBKUYRUPHYLZAFKTIEFDKEZJYUYUZQXOURMJBGAXPIQOEYLXMXBVL");
    msg.actions.assign("JDFODLNORYALWDKWUAGAHFLTHVCPMRQSFZNPMDPNAUZXMDOWTXFVKBMKEYDCNVYXLACBEKYCRSFEUZFGDUTQZGRBQNUFAIREVBSNCMZGYLPIXWEMLZPEXGGIPACTWWIUOKJRHXMYJRWERVPBHWXZOZTQK");
    msg.fuel.assign("RCNFVPLQZYYSAFCEWBQQQMUFYXOFIHQYNDCNNEIJMUWGATHYGXHTBQWTVEMBRCBKHBVMQLHWLPUAEUDGQHDJJXWXRUSGLZJKDKTPHKICGZBJQGNQOLNRSLIAEXRAVDH");

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
    msg.setTimeStamp(0.87026528652);
    msg.setSource(49132U);
    msg.setSourceEntity(10U);
    msg.setDestination(5088U);
    msg.setDestinationEntity(97U);
    msg.lat = 0.507597623256;
    msg.lon = 0.156726028794;
    msg.depth = 0.349864778893;
    msg.roll = 0.990469281327;
    msg.pitch = 0.843623131787;
    msg.yaw = 0.995710195555;
    msg.rcp_time = 0.0243679932452;
    msg.sid.assign("RJYREEMUKBSQCKDZXCEEFMOGMTZBTRLSYWFPKXHCXRDLYTYEBVJWPJNPTGTSFYZEXSVZJULMTHHITLQLYZOPTXNKOVRRKQDNKWSAVZXTEAGCFSKUIIFTRAFFYSOMXAMUVURJDYWIUPQBUVKHBOQAWDJGZCEGWILHNO");
    msg.s_type = 137U;

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
    msg.setTimeStamp(0.442678070029);
    msg.setSource(30543U);
    msg.setSourceEntity(241U);
    msg.setDestination(22937U);
    msg.setDestinationEntity(91U);
    msg.lat = 0.898385624378;
    msg.lon = 0.762233223777;
    msg.depth = 0.254923566224;
    msg.roll = 0.561609408709;
    msg.pitch = 0.34374303115;
    msg.yaw = 0.120880854889;
    msg.rcp_time = 0.900180617293;
    msg.sid.assign("XIJTRUEUORVWGPAOOEXYVQYZKKMOBLGTLGCREBLBJCMYBFCGYUUHNQKUXYNILHRBXXWOXQKZMIRMEGOGJXSWOTVCPQYFZJTCUHTEMRPFHDMDFURJTUSKVWDSCDUFFRLBQBFKBGMADAPKCOAPSHVTSQAZRZYTWAOAHGXILMIHQVDEGSQLIRKKZWSCSTIHXZHNYVEWNSSOFVNEAWBXIWGTPDZNAUJQZPFVZNNBFHCLPDMJWP");
    msg.s_type = 73U;

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
    msg.setTimeStamp(0.464644903606);
    msg.setSource(15354U);
    msg.setSourceEntity(197U);
    msg.setDestination(38731U);
    msg.setDestinationEntity(45U);
    msg.lat = 0.200247055751;
    msg.lon = 0.123749921356;
    msg.depth = 0.302940228876;
    msg.roll = 0.375672372029;
    msg.pitch = 0.0306256637809;
    msg.yaw = 0.641968022704;
    msg.rcp_time = 0.604965688469;
    msg.sid.assign("TYLOPQJYZYPLONBLORHYBNAWORJPXJSWBKMLPDFNFFNZMZUDDCBPYGUXDNYIBFNVNAUZQTFMAKIIEJJCHNXGVTDYKSBHSJCMRWTGKQQORXJMNCTXVOTAXUWKPRFLYSCLWKO");
    msg.s_type = 66U;

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
    msg.setTimeStamp(0.932424269573);
    msg.setSource(53261U);
    msg.setSourceEntity(47U);
    msg.setDestination(25476U);
    msg.setDestinationEntity(126U);
    msg.id.assign("YKDENRZTJWSICCXLOSKXZSSIOCOFHVEFLBMAGWPALUVUXDHBFVNMARXYFABXUVZIRAFYIBQMFPOPGTNLXMZQFHKUUZDRUF");
    msg.sensor_class.assign("EUQBEYDJKWPALOLHHWOQTCBFGTLCLPTMCQBAGCQEUY");
    msg.lat = 0.284547836647;
    msg.lon = 0.471768636685;
    msg.alt = 0.13196702444;
    msg.heading = 0.939793367773;
    msg.data.assign("VYHAHJIFSPUARRZHGT");

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
    msg.setTimeStamp(0.315130362129);
    msg.setSource(12779U);
    msg.setSourceEntity(82U);
    msg.setDestination(55363U);
    msg.setDestinationEntity(216U);
    msg.id.assign("LJVQTNCHKUBUFNXGGYIDUJTXAVFHKCPLRZXLPWQOQLXTNZFYSMXYKDGRUDYHBZACDEXVQNVZWRXKGQZOEVGDJIPMEBYNUFUMAZJLOPEVUYWGKXBOSZDQVCGMITNVEDEBJZDJIHDMFZB");
    msg.sensor_class.assign("IYQSPMJCRJZSRMCWPUUEQTJZEWBTLIAXMHVOWENKWVPGASTTYAXZCGWPMIFGXETOW");
    msg.lat = 0.842888756488;
    msg.lon = 0.475762183761;
    msg.alt = 0.711100678969;
    msg.heading = 0.0352897178499;
    msg.data.assign("FFGYQQVGPVHNIQASPWFZXRLSBIEOCLNLQXNUCHQJAKKKDBFVOHTPONUHCIAS");

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
    msg.setTimeStamp(0.0682205627333);
    msg.setSource(590U);
    msg.setSourceEntity(183U);
    msg.setDestination(41485U);
    msg.setDestinationEntity(224U);
    msg.id.assign("GQFPENYOFLGPNJUWCOCHKALNNVGUSKBBVSJYAKKSQNSDEPMJXLCTOTAEEBEFJFMBWRMJOLNTBSZ");
    msg.sensor_class.assign("FAWSUUCNIWAZBLXUPZRDHGMACKYCRABSRXEJNZJVQMEIGVOZNKEHLGUTEYGOBCBBXYJWODVKQKWJBBID");
    msg.lat = 0.54737198304;
    msg.lon = 0.274274066331;
    msg.alt = 0.108193345649;
    msg.heading = 0.672544313622;
    msg.data.assign("OXALHSJLULEHBGOYFVVQWNWFXYPQUTMXJNIFZPEUBNSTXDPYGZLCQIREWKTHZXRNJITFDBGDQMACKGGPBKNJACARNCQGZLAYURLEVZSVTYIKVGSQUNTBCEOJSVGFHTLRWZIDQFDLJNEVEFCLKPWOYTCOUYMKHEMXNHSMVJHOCRXAPIBBDYOKP");

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
    msg.setTimeStamp(0.077414084707);
    msg.setSource(51149U);
    msg.setSourceEntity(214U);
    msg.setDestination(58000U);
    msg.setDestinationEntity(154U);
    msg.msg_type.assign("LYUBPHYNOYDIBUPUUIKDSBGNHQSQAFMRG");
    msg.sensor_class.assign("ENBFMYOQHVC");
    msg.mmsi.assign("WJZNLVPFCOTFXDJBRSDCBNYELISYOCJWHMKTTWBATXWZZKOOTNVQXGEXTCKCSLIIHMSHMH");
    msg.callsign.assign("OOWCKXTNCZELLUNRIQDMZBZAAFMVTIBGPXEKENVNUPQWKFVLTKIXQNTDPDIACKLHECRZUEZDQSFBHYYOCQMVFESRMDMWMAKXESAWWMZAGQXHJTUQYWORUZXIJRDCOKYQKBPVFXDXFYVPNFLYIYBLIREXEZSKJGHHPHSVHBPTFOJCIIKFYUWPSVRSIBOBUVJYGZATGOSOLMVBNJMDZWGTSPBLRJUDNFAADJNROWCRPQXALT");
    msg.name.assign("WDEBWEGGPZTZEADHEUMNEJPLGJPYRVNZLMPEUSSAYCKKYYDKOHSCBLBOAQLWURFNKJDIPNDWXUGGMHAVGZREFTVCBLYTEHVHCTIOOSBDCTVJNTVMXQWDMVPPDGFHTRLFCUINPETHMXHZFKXLKOZRMGMJRWSTS");
    msg.nav_status = 155U;
    msg.type_and_cargo = 170U;
    msg.lat = 0.0903946961241;
    msg.lon = 0.121539820958;
    msg.course = 0.129627647662;
    msg.speed = 0.116419996959;
    msg.a = 0.866373643831;
    msg.b = 0.642498062578;
    msg.c = 0.722782635465;
    msg.d = 0.194757188777;
    msg.draught = 0.0569569240708;

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
    msg.setTimeStamp(0.426714218224);
    msg.setSource(45528U);
    msg.setSourceEntity(223U);
    msg.setDestination(49502U);
    msg.setDestinationEntity(123U);
    msg.msg_type.assign("IZSNMEIUPKEBLWZJSDEIHMJUBBLZIFJBIRXNXPGAHWFWMJVLTAGXACOGVCTL");
    msg.sensor_class.assign("CRBPQTEINTBWGAIRPFSNEZZRKOZDQQUVFIUNTDKVSSEXRQLCXYYUDWYAZNCRPSUMKHLCMBLDYQUWXCINAHKPRMLLYSKSDLXCKWGEQUTZBTSXREPX");
    msg.mmsi.assign("CQHOIVXCXMCYTRXLUHMXOXAUEIKVFTFWVYIRMMLQVXAVXYQWNZCDSRZQAWZRAAZBPLJJRBZTYGMKHZTQFINFZBNGYLFKECILPCKYDPSQNWOVG");
    msg.callsign.assign("SCWYIVHBMIAMEKVQECFPFMXLZFQMIUANXKTUXBNGJSZWOYQUEXGKSBGGRYMZFXYKQFCSBKJPQIIDJLBKZPURSSHLTSBVEDPLVPHNZSBQWETBXAPLATNBYKWAPVUGILMWXEEEZXQOICQHSRWTINNCNPCKWDZTUMIMDNALEBUPOTUJEORHVLZORDUHOUKYGDAVX");
    msg.name.assign("ISEUKKPKWJNOEMDH");
    msg.nav_status = 38U;
    msg.type_and_cargo = 178U;
    msg.lat = 0.536332639434;
    msg.lon = 0.531456290996;
    msg.course = 0.828771964878;
    msg.speed = 0.169591023653;
    msg.a = 0.297412995624;
    msg.b = 0.114396136664;
    msg.c = 0.932776835055;
    msg.d = 0.30688867608;
    msg.draught = 0.17621164187;

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
    msg.setTimeStamp(0.525648464809);
    msg.setSource(17419U);
    msg.setSourceEntity(72U);
    msg.setDestination(30437U);
    msg.setDestinationEntity(164U);
    msg.msg_type.assign("SWJYYOJJELFVPMHIGMTIYCWGHYYIKAFUBITCEFCOIRROJZLBRAZSZOJOQZQIDADGIVBVHKXUXDRDTMEUNNELMHPGTOGAWQOMRFFJCUUXSDVTZSOVGANLEKCXXJNUFUPEKWMSBBTDWIARTDLDHFXUKFKALFPUKGOEQJAOHCTLPWRDGPI");
    msg.sensor_class.assign("QZWKJSATXWJWZZHHTGEACFJSKOOHNCZUGRQUUHKHCYLJWBJMAUSPQXEEVAJATEIPNPSOCBMYRZS");
    msg.mmsi.assign("PMSOOKQSJZDPOVUNLUHTEUENYCYSLTZCBJNFIUZPKJHPHBSYIESLIRWEYCYHZLCOZZTWIVAUDQMRLQHSPAQQQXQGFTPAFRSAKAVVRQKBVXKOYLNMIXFBEGBMXTKEDVJNDMHLDVEOXPWNAXFAUOUTAUGHYFDEAQGBLNLCUZDMRNQRTFJYDMRFIWRKIE");
    msg.callsign.assign("ZNBLPKYWLHMSMKZDPCZUYKFNXQQBDUOTGRU");
    msg.name.assign("WQFIFPFPTMNDUGYHIAIZGQPBWJCNOWQJWJDSBCXSNREUDEJNCOMKCRBNZMBFZAAMSAHYPTTPTURDSLKSYSMCAKYGIEULLKNWJDWMLLFTBHSHUIENGXNGXVFHERXWFQJHAVICUTDVZQDMUGHDJBRGCHYVZOKCAQTIWOIEKIFCYTREZAUGRKBQOFAGWOMOYDLSOIPKJOKGMVEPXEEHVZVBJQBTLLLDAYNXPZRVRRUYTXCY");
    msg.nav_status = 228U;
    msg.type_and_cargo = 162U;
    msg.lat = 0.240419667643;
    msg.lon = 0.633645869124;
    msg.course = 0.776023942626;
    msg.speed = 0.913748718191;
    msg.a = 0.857721495295;
    msg.b = 0.048049163188;
    msg.c = 0.780370842236;
    msg.d = 0.637688928299;
    msg.draught = 0.458061992064;

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
    msg.setTimeStamp(0.113333386806);
    msg.setSource(24312U);
    msg.setSourceEntity(124U);
    msg.setDestination(33389U);
    msg.setDestinationEntity(246U);
    msg.id.assign("XEZSMTXRUEBRDXKGCNKVBWDCXGRSAYUWDLZYRSIFMOXGNUPYSPXMIEGLVJOEISQHNUHIPQLPZBXWBZBRZIQFYLPDJKSUNWBBMETJHNGCOUIMKCXVKDEOKFVSRNFRTZFFHZBXDHJJFWAOPLFMEUBMJNCNWYAGZUYLWEMWO");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("HGRFFJURVNFZMSWVTCURACQYVPGPXQKFACUIBNCGLBPHZJTYJDUQZGPSDCQTGNLFQXZIIUAWEQYKBGCXQJUJPMKAMSZKRYYQNWAHSSKVWQOIHOZWRZFBJLDEFOJLYFMIXHSOEICBKWSATLKDLVCCLTXKNZEBUEXPAJTGMXFXKWVYIGYKDMEUVEIUDDTEMHBHXEDNEDLRBMGRTYSCPYRA");
    tmp_msg_0.feature_type = 90U;
    tmp_msg_0.rgb_red = 20U;
    tmp_msg_0.rgb_green = 54U;
    tmp_msg_0.rgb_blue = 79U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.334463743442;
    tmp_tmp_msg_0_0.lon = 0.954372409125;
    tmp_tmp_msg_0_0.alt = 0.458975486081;
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
    msg.setTimeStamp(0.641186652395);
    msg.setSource(57695U);
    msg.setSourceEntity(161U);
    msg.setDestination(59941U);
    msg.setDestinationEntity(231U);
    msg.id.assign("MCYARLFZHPOGNBAHREYVGCENKPNJUEDJLEQUQVZXHRMECPBNKTZDTDKSSBHVFQXWRWWVTUMLTDRGFVJOGCSPJPSUYTGHINWAGFMVSLYHSGWBFXVDFNNQTXKQMWUBUFEHHLJIIRLTARSZJUDOORBMWCNYWDRWKVQKPXOECLTKJIXVEGASYOBSUJLKUXQCFPGOIMZZAQAOPOPQNDEIMZFPYDBGWYCTCJFMOALL");

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
    msg.setTimeStamp(0.933143084014);
    msg.setSource(20567U);
    msg.setSourceEntity(28U);
    msg.setDestination(46594U);
    msg.setDestinationEntity(20U);
    msg.id.assign("XCENXSONETHOSCRYLAJLBMIKXVPCXSCTTGVFLIVDGZIUIJDFICEHWRXENBDDINFVBGHNUNXUJIAZKZAXXLQBLOKMJVDVQUJZZFWNNZTLPFPMMCFVSIEFGLROHGPARJEVXYSUINBPIDKWKYOHFJPMAGZAVPTZSEGQAMWUGLYEYULSWBWEROVQRYUTCBTZDMACPJTFBQUOGSJOHAHRQYOKCJTK");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("ULVFGRRAYHXJYDYKAOHGOCNDEMZWODWOICTBBKHRLEROMLNCWDLLGJGMWSXHPRQWJCXNGAKOCAIFPRDEOGSVUZCLTFXPQGVJMAZZBEWZEXSMRENJAIHAIHFTTEOFJPHT");
    tmp_msg_0.feature_type = 243U;
    tmp_msg_0.rgb_red = 180U;
    tmp_msg_0.rgb_green = 10U;
    tmp_msg_0.rgb_blue = 247U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.474904962596;
    tmp_tmp_msg_0_0.lon = 0.427000261596;
    tmp_tmp_msg_0_0.alt = 0.604986547006;
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
    msg.setTimeStamp(0.540523282047);
    msg.setSource(28706U);
    msg.setSourceEntity(1U);
    msg.setDestination(24551U);
    msg.setDestinationEntity(190U);
    msg.id.assign("PUHJDGNLTVZEXFIRSHAYBDEUVALDYRUNIBDABQWTMRJWSRUXMZCCZMULHICYJZJWSXJHHEWRXV");
    msg.feature_type = 57U;
    msg.rgb_red = 77U;
    msg.rgb_green = 74U;
    msg.rgb_blue = 137U;

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
    msg.setTimeStamp(0.613378591125);
    msg.setSource(61333U);
    msg.setSourceEntity(169U);
    msg.setDestination(47978U);
    msg.setDestinationEntity(174U);
    msg.id.assign("DQDDQTGZEJSTFGXUUDKWEOYPWBSHRAMVRRKKJWETXXG");
    msg.feature_type = 6U;
    msg.rgb_red = 53U;
    msg.rgb_green = 115U;
    msg.rgb_blue = 210U;

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
    msg.setTimeStamp(0.734207012898);
    msg.setSource(453U);
    msg.setSourceEntity(71U);
    msg.setDestination(37023U);
    msg.setDestinationEntity(249U);
    msg.id.assign("ZNKVSLDEZNAFKOIKVUCQFXJDIVMBHRWJBCKCJAAZUVVQEVXLDPVBQEZUQDIUHBFNJXPGYWPGPTKPUTODFNRSWHNYMKTYHNXMSGEZMGCARQFTYETCSTOJJNYOWREGILNLJMLYBUGSXXOIAEWPCDGWCRTZOPWWHPNZVSNKLEIFYLAKMAXGMFYSELRZGRQZXHHDFPBVBXUOJPAQOJQW");
    msg.feature_type = 120U;
    msg.rgb_red = 157U;
    msg.rgb_green = 117U;
    msg.rgb_blue = 173U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.532544884282;
    tmp_msg_0.lon = 0.133183472796;
    tmp_msg_0.alt = 0.437694920396;
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
    msg.setTimeStamp(0.0152577349153);
    msg.setSource(63329U);
    msg.setSourceEntity(141U);
    msg.setDestination(50499U);
    msg.setDestinationEntity(122U);
    msg.lat = 0.271322935451;
    msg.lon = 0.423093812243;
    msg.alt = 0.5771738793;

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
    msg.setTimeStamp(0.505058277938);
    msg.setSource(27136U);
    msg.setSourceEntity(188U);
    msg.setDestination(30280U);
    msg.setDestinationEntity(133U);
    msg.lat = 0.398825192481;
    msg.lon = 0.779476500282;
    msg.alt = 0.848853683816;

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
    msg.setTimeStamp(0.650395616914);
    msg.setSource(45130U);
    msg.setSourceEntity(89U);
    msg.setDestination(1852U);
    msg.setDestinationEntity(136U);
    msg.lat = 0.225824497967;
    msg.lon = 0.882365887813;
    msg.alt = 0.185596431265;

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
    msg.setTimeStamp(0.530937930341);
    msg.setSource(3079U);
    msg.setSourceEntity(140U);
    msg.setDestination(41690U);
    msg.setDestinationEntity(43U);
    msg.type = 168U;
    msg.id.assign("HPHQGUQCDTSDTWJRYNMXRZHVAJAHBEZFLJKSTQJVZGHKYCVDXNKOEKBIXQRMIEARBNMIESKFVLZXZMLYAWUBSOQLYBOFEZRFKJLGVVCOPXRFEDNZFLEJSOGCUMTSFOZIJNUGQOYWYAAWHVCRDDHXXYJKMFXYDYQBJISMGVJKRAWHWZPIWUCUOUSVGAUTDVDGFIMEPXBWKNTBCCNSDTPMAZOGLUPRXLEPCIAS");
    IMC::SystemGroup tmp_msg_0;
    tmp_msg_0.groupname.assign("ZPXLOSJVKHBNJIHMXHUQYLEMMQZEKGFOWFROSULPNZLGNKCSVNEGGKIBHRIJDWASOCATPVTWMFZRYQKYEFGZRGWUBDCWPTSZMTDGLCJBAECAVRGUDQPOBVXHXATHSIII");
    tmp_msg_0.action = 191U;
    tmp_msg_0.grouplist.assign("XQVMBHMKQVLXBSNGIGAKGPQOWJEZPXNBSTBYFOIDREHTUCYFPDUDEHJENZCGSPZS");
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
    msg.setTimeStamp(0.545337365133);
    msg.setSource(56478U);
    msg.setSourceEntity(235U);
    msg.setDestination(26335U);
    msg.setDestinationEntity(146U);
    msg.type = 107U;
    msg.id.assign("EQMCHCFSTDBKVCONWBZTBJKUWLVSPSPCLKMUZNDTADCHJEFNIROZXGHVAFYJRIDXYTQBMSRGUGZLIRMU");
    IMC::DissolvedOrganicMatter tmp_msg_0;
    tmp_msg_0.value = 0.0706950671926;
    tmp_msg_0.type = 205U;
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
    msg.setTimeStamp(0.840765644507);
    msg.setSource(54099U);
    msg.setSourceEntity(215U);
    msg.setDestination(39715U);
    msg.setDestinationEntity(64U);
    msg.type = 60U;
    msg.id.assign("ABHWCNLJDIMHNKWYDRUZQYGHIXFAICNLBCVXGBSSNAUSKHDPPAJBOGRHVOKXWOWQMHTKOTTIVREZLFRRQQGHQXLAVCEDBFQVODSBFVCJRIUJSTRMEWNCQBIJEWOIHZKDTRWULXUDSOWXYTRCMLYMIZEHAWUSL");
    IMC::RSSI tmp_msg_0;
    tmp_msg_0.value = 0.969597261612;
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
    msg.setTimeStamp(0.241999066276);
    msg.setSource(16853U);
    msg.setSourceEntity(120U);
    msg.setDestination(26966U);
    msg.setDestinationEntity(165U);
    msg.localname.assign("VZIZQNIBZOLGMGPLNFBZBAQJNZWOYKALVFCKJDDUYOYVTRCDFHUFQPVSMRDJEOUNKGKT");

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
    msg.setTimeStamp(0.213011505307);
    msg.setSource(1909U);
    msg.setSourceEntity(168U);
    msg.setDestination(54106U);
    msg.setDestinationEntity(111U);
    msg.localname.assign("UFKTFSMOIFRJJQKHXPDXKHPMUSVCAAXRHOMCYFLLSPGTKZSNQLUPGDMGWZVXCXHKCUTOYZBRFJUBTOUFBUEQDNYPWXQNKYKVLQDUIAXBXCERGMILLKGDZCLGVPMYYNENFQ");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("QXGPLPGNJFEFYJUMWUZIORZLSEUTBPGYUHONCZFTLQGJBXIQREDSLCZIGQFXDVTFDQBLZVHVTCKNJUNJDORJQUBMPWXMHPWRBSSNJLVTWKYSLAOKQIYAVWR");
    tmp_msg_0.sys_type = 125U;
    tmp_msg_0.owner = 59454U;
    tmp_msg_0.lat = 0.643225744951;
    tmp_msg_0.lon = 0.123686152166;
    tmp_msg_0.height = 0.0297156782334;
    tmp_msg_0.services.assign("ZZQYGFIEYQOKVJUWRNMRDCVZCBKLFTOGYHJTUASJMUXFKMXPOYWWOOJJIFPATDOUGUBWPMJANPSBIWVLNBSA");
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
    msg.setTimeStamp(0.0504069085945);
    msg.setSource(58067U);
    msg.setSourceEntity(40U);
    msg.setDestination(43521U);
    msg.setDestinationEntity(117U);
    msg.localname.assign("DLSRQZIECZPGNOSHXQBMRXXPJHNOCENHWYUHPTTMEJWJSOIYGA");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("LMZFDPHHRWIVJFNYKUXBRDBTNFUQBWRPCMSSKKJYFEQEBGBKHABTWWEYGUSAUHOAEGMYXSWDDRJBTXIBUDNISMWPGHJMEFMXGTTWCJARXJVXOSHYGZDSXMCOUIN");
    tmp_msg_0.sys_type = 71U;
    tmp_msg_0.owner = 19735U;
    tmp_msg_0.lat = 0.548779869061;
    tmp_msg_0.lon = 0.833383299688;
    tmp_msg_0.height = 0.263979195308;
    tmp_msg_0.services.assign("MBPUDPZCFRKXLUYUTIVNDZYRDJPYZMNEODTILZBYVNTKOQMFHWJBBXGXEXQBPLQFWADGRKSOOVRIWEPJNNYQPUAXASARZEHLSPSXKJHMUMXOJJHIVADUPHYYCZCWKZMONFCRKXCEEFJWVMLDTBDCOCBNSQFEQIQVOMMNQGBEWKFRKUTVSCKGQNCJRRGCWISVFJSYIAMZGJKATHOPEDAITGWGA");
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
    msg.setTimeStamp(0.158796114509);
    msg.setSource(31762U);
    msg.setSourceEntity(232U);
    msg.setDestination(51086U);
    msg.setDestinationEntity(198U);
    msg.timeline.assign("XLOVEDUJLIUWYNOJOPAMSTCQWETHNALRMROMSCHBGZGKJMAQXDKESHYLPOPHABCRYOXAKYMWMERRDEXHHRGTLHUIZPXFKURODUGFQEGBDRIVBQNBVZANJXUQZPWYIUSADHYKVBIREEDLCGBTVJJJVCZYNYIDTQVDMEJXKCFMQMGFWCSUGTPUHSHJPJGOYLXBPINAWSQNAFSF");
    msg.predicate.assign("BREVKHCQROGZRXIMJFNPUORMUXCSYQOYXI");
    msg.attributes.assign("GJFMBGEKMRHLOEZRIHRTASAKMBBHXDSDSFXCWUDTUVXCOPGTGDNBIWEXXEYJLZSYSUNNISUMX");

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
    msg.setTimeStamp(0.188797611143);
    msg.setSource(63677U);
    msg.setSourceEntity(132U);
    msg.setDestination(13425U);
    msg.setDestinationEntity(75U);
    msg.timeline.assign("YWPDSYTSMUUNNBQEUGNXYKTQQFGNHRWZDINOHLOEEWLFBKVCMUXYDQRFYRPJGXWCMWMDQUJQFTFRLPVBCP");
    msg.predicate.assign("NBGVJECCLLGKOPFIWRSBHDHDGXMXYZDISCJPFQODNOFRDSTQFVUWNMMGYGBDYUQPBRWJIAPZNIXWCRHLUJVERORCOEXRYEFMZXQBOHJHKAQLYDXVDUDTHKXVNKSGVCZTFZAFGHCNHNYQUIQWFMVOKNAWBTJYE");
    msg.attributes.assign("KZMPUQEYSCRSQVKNWNPHDKQJMAFZCZOAIFKAWXMTJEOKMBOUVRNUQPSACQKNZWLFUADZVSCPJVGXIZPHOENIVFUI");

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
    msg.setTimeStamp(0.822692677055);
    msg.setSource(54483U);
    msg.setSourceEntity(11U);
    msg.setDestination(33400U);
    msg.setDestinationEntity(95U);
    msg.timeline.assign("ZCNUCYDOVOCWRBITWVQJJTIYPUARRCTWQZLBLAFZBBZIQOTMBFWLVZPOHPIDCDEVMRTTSNJJAKKCMXHPPEEGHRXQQDLKSSEXWJJEMQXJVHJSFLCYMNEJXDINKOHYFMPQECMXVHORGYRUNAELCLANSXHJYBLXBIWOBGZTFCGERZUIGIUQFLYSGTAWSKYRHO");
    msg.predicate.assign("CAZAKHXWIUCNMJHLSQZWPKRXPDMWDSCBREFXUVRKHOYRFGFGQIYDCNAGSDSSDUHXPMIULYQYOAMQWIMVUMOPJRYFNSYBNYQPVFYAAPQVLWEKCKZRNVNEMUZFKZYWTSTNLIQMTFGRXCCEQKBOXJVVXOZBVIDBIUPOIEGTDUVBEFJPKHDTWHJOHTVGSLOBLFFNQIAEZJCJLIWHLCLSXBMWZJRBGJEONURTXEAGUTOQJWXSPHMDKYBTGLDREZANG");
    msg.attributes.assign("RAKHMZPEPRWNRGLYDMOCLRJIIJXJVIQPEWBBCCDHFSZNYGXBNNZDZPVTYTQTIOERFEJHMVDPUBMWICXIILYKVULBRKPRFNXAXCKZVLJQTMNOXVESATQPHHBFYJVMWAJUQVSZIOQTVNULROGZWRFHPDBOUNEUYOAGYSLHFMYIMDODWTZXKS");

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
    msg.setTimeStamp(0.344605428537);
    msg.setSource(49758U);
    msg.setSourceEntity(63U);
    msg.setDestination(61861U);
    msg.setDestinationEntity(134U);
    msg.command = 83U;
    msg.goal_id.assign("VBAZMJFMVEFXLRJUYWDFBLRFCWNKQ");
    msg.goal_xml.assign("MCYPNLQJZEWALVZLAJFXDCEQDJCQGXMOQLAXQXZFFXZCDLRDXLUBXQKSIVRHNBNVFLNTAWPHEKFYHHOZUNXNWTIIQUYFOREHIVDWPHCACRPRPBPZRRTCBINPWKZIYVGJ");

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
    msg.setTimeStamp(0.0327604191202);
    msg.setSource(19530U);
    msg.setSourceEntity(80U);
    msg.setDestination(34900U);
    msg.setDestinationEntity(145U);
    msg.command = 165U;
    msg.goal_id.assign("WIHYLCMGHUSFRISJKYFRTEMGQJDBCOXFWDZDXPTXTMNGLEBFAWFKLPHSPJYXCKYZOJVIEVPNEDKJAYTSXZFWHMLJTMMRPHRWWZRMPQWICVNGQBOFFEDNXGHCOMYDHWKOVSSKUUQHUKUYVZCDLCLNQMHLOZSRIQXXROAWJUGDQQVAQIQBGIAAGNLNUPIUULSTRKBZJCTZVDNBVESPXOTYFIJERZMXNOA");
    msg.goal_xml.assign("SUPVRTNDHFAUYXCHAPFAGLONAEOFVDBWFGGEL");

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
    msg.setTimeStamp(0.285447258962);
    msg.setSource(47698U);
    msg.setSourceEntity(165U);
    msg.setDestination(59306U);
    msg.setDestinationEntity(218U);
    msg.command = 190U;
    msg.goal_id.assign("IOVSPWIOZZUAVKXKDQZFXJPHYBCJQXVPMYIABMMLKLKJNRZBOMEQRQXULCMGPCEFIOLFISTSHOYSECHWWPWHNNMKJENUAHDZNBWRWFEVROTSFKMYPGSMLJZCQDQYRQANFKQNTVQVOAYWJCZMCGUXZDJVIPBWLHKTJVNTSEKCGUYCFXEADBSYADRZGUWRZITBEBSCENGSUHPRUHGNWUJQVEIPOGDHXODDATRIBAVGFMJFUATXL");
    msg.goal_xml.assign("CNSNFHWVRYSCCRAEVNFLAGOJZBBXMQXPMWLAJSULIUKOHLLQXQGYLIZZXCXBPGLGEFDTBHPBBPTDUMHXUKZNQGVBSACYMGUCYTJZTZYEOUPISWARRKOWOAJDDXTVDJAEMDORFNNKQWTISIZCRPPHTNVMBCREIVWPNJHOVWKRHJGEMEUILTPJFRKOSMRUVWJXIJMKVWOONFUSQDEVTZSAQKAFFYGPHYCEXLAKXWBGINY");

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
    msg.setTimeStamp(0.0181515649901);
    msg.setSource(17098U);
    msg.setSourceEntity(97U);
    msg.setDestination(39872U);
    msg.setDestinationEntity(65U);
    msg.op = 21U;
    msg.goal_id.assign("SHAAPIYZKDSFKBUCKJKTXCACSKUIIVKMTGDDEOWTNJPPSHPLKOTTBHJPQJZF");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("NAIZDROENDKGIXUHUAVTFWXDTSRSWLKGMFJQYSBUNVRGLTVVKMSETRTPJTSYCMMB");
    tmp_msg_0.predicate.assign("QIMJCJALNGMHGRTLZY");
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
    msg.setTimeStamp(0.907063708717);
    msg.setSource(59772U);
    msg.setSourceEntity(94U);
    msg.setDestination(46454U);
    msg.setDestinationEntity(187U);
    msg.op = 46U;
    msg.goal_id.assign("XMLNFPTHJRHZRBUOXPAKJWIVCJXTKBYLKJHYLTRXEURBVBLUQVDDDQPTZGUHPHVBSILZRMFJAHSVINAYBFUSIGEPVRXAQAETFYQGCTGJWXVXOGTOOYZIDQYOQEJPUFTPBNECPIKENFPYKADCIYOZWHRCGOYSQZSSVNMWWHNKQQDJWOXMGEFMZMYUVUNDLWSQOLENUKUBFBAMTBZDCJWIGCWTKPIHMXAOCCRMHSWR");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("QMPZITGKYCJOARRECHKDZTNBOBOYFZJMDZHOERNNYDPLEWAMFLTBBUUWKONFWFRSRCTHVMHPVQOLRIDKGSJIHBNEGYDUNAAVMJEPWGCCXGJJMECTSLHHITXUXKKYSYNLDQMLFCOYMVQAIQDAXUWNXFUPYVSMIWGFUISSTWROXAXOX");
    tmp_msg_0.predicate.assign("WTFWJVOOVKTBOOYAQMGAKJTDGUOVPQYXRYMRAJYXRZXZMJEBVGZWPVUXAYXHEOCNNRCKKTPAIVCDGCLVGHUYZEZ");
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
    msg.setTimeStamp(0.676676005371);
    msg.setSource(51138U);
    msg.setSourceEntity(94U);
    msg.setDestination(28934U);
    msg.setDestinationEntity(45U);
    msg.op = 69U;
    msg.goal_id.assign("XKRUKLDQDZLDMYFMQSLIDOKJBLMVQAQPPHWCSXRPBWHYFENYGTBMTXAMGVVGBZKRJOBPAJDYOYMVTFUNKJKHSHYGBTCNUXDOHXAJDDRSERNIAXOBZKOFVNMYWAYDBWKCCEVXPZUOAWIEAJNHMPIPMQGVBCZIGMNR");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("MQQFNIHTGZCFRJTEDTLZZSMVMSORMLSZUDEHPCBDWDXCUHIHKVOAJLTNGRRLWSGYEPHSYYXWVUXJNOOXTGXKACYRI");
    tmp_msg_0.predicate.assign("SEINJOWAPCLUQUCAYNKLCKRXMHHVHDANDEAELTOFHJQEKCYJGTGQSFDKZSFVQBRCOTGPUEXFOZSRZHNZWUTVGSYXTBYBMQSBXINKOAFDJGYIJFVHCBWZEVPDGBRGLJMJSTZDONDGUWXPLSQYBVCHFZTYPXUEFYADNHCRMTQMZDFSACZMPVXHRGKPFEUVWTWPUMXWDSNLIJQRBIVPLZYLINIVUOJIMWNQIXGRL");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("HYIAWZGNPZZRXXCKWBQDHPTYKSLACCNRRFFLXYZTOSNFNHXUEIMMMEAEHOEUORQZLHCUNDBLOACPJYKVRWKANPBVTUPFSOLFPVYMMAPLKYCVGOMLSBGKQNSXIYIDUJBOCZWEUONFZWLAJDAOTSQCBYCESRSMV");
    tmp_tmp_msg_0_0.attr_type = 123U;
    tmp_tmp_msg_0_0.min.assign("BXUJPLWWUXRXPUEFLNXOFVLBSMOTNBNCYZZODAJCLUYXJAVYAMEKFHAKOCUOEBCTBQNSMUPCHQJKEMAHXUJYRSVKWGZNPDAIJYTJHEGZZKCLIHWKPSWEIIQFRQRJSZMYMTLGNGFQY");
    tmp_tmp_msg_0_0.max.assign("EDIAMUXZJOLPFVGJOJV");
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
    msg.setTimeStamp(0.259224123927);
    msg.setSource(31998U);
    msg.setSourceEntity(151U);
    msg.setDestination(54913U);
    msg.setDestinationEntity(116U);
    msg.name.assign("RASAHADJUVZIOOMKHJHZFCFENHHLPVISTLGRLUTOHGJKSLDNEQQHAMYOKOZNSXSBYZXGNBAUDOGHKPQYJBXVYBTLPCPQRDMEKMAZRJWGIOFKYRVDPDWEQJFLZBSOQSICRVJVITSCRMPGLXYWWMJIOPXANDCYWBYADXRXQTEYEAEBBTUXIZZMFQUMPUKCTBWU");
    msg.attr_type = 207U;
    msg.min.assign("ADTGPIIJKNWWZUFQREKNKJLHGTVWTWDROQFYZHUWOJUBAWHABERPDMHKCMFQHOFYXTUUUFPOYSQXXVFQYNTLCEXJWLARCKASCZVPMV");
    msg.max.assign("FIJMNMXBHWZVBIYJFKEUCZNKEWRLRMDJPVAEBROCXJPZWQHTVLZWDPWASHUOVAXNHABXOGOBHYQOYOTAXCYZDGMHPQWUSUKKNCHBQSTHLYCTYNIBFDFEQISBEDDGOMYVUEPIFTCXOSUOUXJRBLLXXEAKWROCVFDPKFKNQCUJ");

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
    msg.setTimeStamp(0.998896587127);
    msg.setSource(22781U);
    msg.setSourceEntity(66U);
    msg.setDestination(33448U);
    msg.setDestinationEntity(166U);
    msg.name.assign("RRYLRBLVHMWODDEZSRSAAMQNRCSTGCPHLVRWTIKXQZKZFVDBHLBWNUHTBCIPCYAIKIONCRGAXDMEWWMDAUNTXJFAHMYDJEBMYGSCWYVBKBEKMMMWULZFXQPUNSSJPZYVOKXHOPBTKNLDUTOAOCYQEQLZVUVWJGYXQNLJFPEBQIGMLJTUCATPURYIISKIJGHFGIOF");
    msg.attr_type = 41U;
    msg.min.assign("IPTIIFHYXIIKEMWCOVQMWOCDCWDCLETCXYPVKBHAOWVXMAGFHUNXKLHUTVNGCXTPJYVTGZUKOLXZBJPDNOLYFJAUQMPCMWFJNWJRMZZHJZLAMFAZDLDXENEXAFGBDSUMJSPVQOUENZNEVBOSSJWJHIQEOKRBEPPQQIAFTCRYXFSZVIYRSBTGCHUBLJATQLUGKBUSFEYIARCKLBOSDHRWZGPRYSVGFDKNM");
    msg.max.assign("JHTZTOARBFNJJCLNRIWUWBGPNYLYHMWIQCKBYBVFMZNUDOPXORQWKEZVXQXTNJYBJAEHGVDGKEBPLYZQHDZWGTQJENZRBJHYDASMIVMLOKMIQPDIETENYDOSSKBIAMCRMZMWXQPFFLXDFKAICUHKTHCOIMFPCEOUCUJZICFFNVPFWKPMLHCVVSQKRGSXNVOBLLUGGZAEUARWYTABRPSATSYAR");

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
    msg.setTimeStamp(0.934194895807);
    msg.setSource(39473U);
    msg.setSourceEntity(132U);
    msg.setDestination(60977U);
    msg.setDestinationEntity(224U);
    msg.name.assign("UOYVFBPWAXKZNLCBCHHISGGRGUTFQENEEFWRINRAZXGPYJHQNCNOPUAXQPUCMZBGCKYCQVQGTRSPRNAJAXFOXEDPVUTENZBWWSVEZHTSABXQBDREFZGMKRAZFGLYJHDVOSSWUOZMYIRAYWJQWJMDX");
    msg.attr_type = 239U;
    msg.min.assign("XLQNHHXIMOGRYMGHGTVJGBQHERPJZWCIDXJXCAKQPSLRKZUKFBZCKPAFCGCIADHBIWCTQEKJXAHHTJQPBNTEEABEKUVYDSJD");
    msg.max.assign("XUQSVUJQHPOBGMBVQQVDMWWYPFSDSETEDBASKRBYRATCHNEUFAXNSRBS");

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
    msg.setTimeStamp(0.470312302121);
    msg.setSource(5241U);
    msg.setSourceEntity(16U);
    msg.setDestination(36580U);
    msg.setDestinationEntity(26U);
    msg.timeline.assign("ZALDTAMFJTRNBQQRAFSUSYTQOUHPPJPXADBLCVW");
    msg.predicate.assign("LBSZSHRPZOXESGDQYVNTIQFQXFGDMKWCZORKSTXRTEUYXGFKHIHBMWMNDEHZMKSJAFVBMVOIDPXWVATUDPOUPNCZNEZUYTDNYQCKPFGSSVVELOBYQKTQVEJRQUPMLGYUPAJMCBNJDRLLSUFATBEYHLOIGWQMJJPVIUABSKYBCIDFGDKKNEWSLNXQRWAYCGUJAXGVRKPTHXIOYHWCPWLZAXWWCANOTTZHZRGIUNXFFJQROEL");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("SKPEYKJYZCXPPAHNMSBULQHZVGCZKPIDELVMANJFSXOIFDDEQLTNJBHVCGMGWDQLRMKCXYNOGOBXAUFLVECPPZYORNRXEQSSGTRAWKHJIWTGNPEATQYPCMMBHZRVBWMTRBRLPYRFIMYSRVIXUHXQTYJVUOGMUXFILXZKBUDCVGWUKFSTMIOKOBAAZWQUZKWCENSLVZSHAERLEFNSVCNIWWQQTE");
    tmp_msg_0.attr_type = 134U;
    tmp_msg_0.min.assign("CMPBZGMBAFDNVKLKEPWNWRGHYWEKKWQTNZXDYESEKZIQCAWJCCAIBOAMVCBZJZKHDUUTQEXZDAFOHUZNXWUIUZEEKOBRTVSZNFUPVAWTLUFUKCLTULALNIJQDNUPHYTOGYBFSSJVWRSLEA");
    tmp_msg_0.max.assign("YCLWVNGCLUEUYYUFJNHYQMSUWBZNKXBUWDTKAIILKGMTCRMDLEMAPTYQHZRVCVZJRAOWILWGKOPBGBSCYXMZIVBGCSCNSVRTDRYJHIYZXDEXBRXCTOPMZRHNOKKRXDAGYBLHBLIQQFPITJSKMTTXSDBVGISKOZMWLXFVJWZGVHNVVNQWOUGQQSDFIFEHAASPJFKFPMRQIKEADJEUAPPZLTXWNCJBAFPXUON");
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
    msg.setTimeStamp(0.643442259002);
    msg.setSource(56642U);
    msg.setSourceEntity(160U);
    msg.setDestination(14479U);
    msg.setDestinationEntity(140U);
    msg.timeline.assign("XKETJSIKFWIVQSMLWXQZQRQANFTTUHOWHFAMYYPLWDFBFCLFIKOYAXIHAPTHSGLVGPHHMYOOSDYRNVNRTUTPITWBCSSAQCJEPKWNPSKBDJLLKEZCNUPOQBXDCODVQJMZIAQGXFFCWPZIYPEJWHZRUGHVCWNGQRKRBMROENJREDURVBYANJZUPNCFBMFXGGZDIZKZVIAUUSVLYDREJTDYMKXEEOMILQUNVHGGS");
    msg.predicate.assign("BDNVUNLLGFKGVRKZPHLFJYBATYQWWDFKFKBTAEJPKZTHWBMLOVCZHGPNFBVASDQSMIBQSXOZGKITXQCJROXNEWUJLWYVC");

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
    msg.setTimeStamp(0.451800216899);
    msg.setSource(49308U);
    msg.setSourceEntity(189U);
    msg.setDestination(62400U);
    msg.setDestinationEntity(125U);
    msg.timeline.assign("MIEAJGVNKZPRBFDGQUHKZDWIBBNCPKFYOP");
    msg.predicate.assign("UOJXKYJEOKAIUQGGCFKRYSYRJTCJYKDVYNSWHIMLAEOPWXPFCNTDHSVXMPACQNZREVWREOGDBBCUEHHYBUQHSTFXTFQLMUCCXI");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("CNFUKHDWFHOIMBQXVHMMSFWSQJYPZGAZKUXUZPLEWXNVVYLEEYJKPBXLNJALHEJSCQBJVFDPLZOCAPKJNFUYWRBDOFJMRLYGSWRMPMPNUSCQEJGAHCHKNXCBIRIDJTHBLSTYEANBMWXOONVRIADFSVCGRCOSYKUDGQTRBRSUHDVDFBOYGITMOZKWMHW");
    tmp_msg_0.attr_type = 207U;
    tmp_msg_0.min.assign("PLBCRVTBSDAZSCQULUFEUCERTUBXWDLJLMWZZFXMKMRBYJYLPUN");
    tmp_msg_0.max.assign("ZGAOWBLZOEPQWSQBJFSCDGLJUJGRBKSFYNJERGTZJGRRALPHIEIONIMURHTRBOXICTBHRBOCUAOKPHDNNEYXHLXZZFAXYLQQJIKSNWXDLAWNQBEVCVCCFULQNDYHMCWYQBFCWJWVOHORSMGXEMAVLNHGKIUMFSZUSQIDITSNXYH");
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
    msg.setTimeStamp(0.138006607745);
    msg.setSource(39569U);
    msg.setSourceEntity(54U);
    msg.setDestination(19281U);
    msg.setDestinationEntity(156U);
    msg.reactor.assign("CRLTTDSDUDCQMYXQYIFMZBEVBUOIPQDGNIPTDNFNXRKOLTECYWWPYUJBHMHKFP");

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
    msg.setTimeStamp(0.975426778048);
    msg.setSource(6470U);
    msg.setSourceEntity(119U);
    msg.setDestination(35948U);
    msg.setDestinationEntity(210U);
    msg.reactor.assign("YKXDCGFUUXMSWHHXJRVELKSTNNJBKRSEEIQGAGZXPTZFDHXFKBJUFFSPWYTQAVPMKVIZZATWYLJIQPYDXVKIDOGFSPUONDUEVBWZWRPMC");

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
    msg.setTimeStamp(0.633881927059);
    msg.setSource(1606U);
    msg.setSourceEntity(50U);
    msg.setDestination(37506U);
    msg.setDestinationEntity(233U);
    msg.reactor.assign("CVCCUUGLWQXSNQBSCWPKHXPXDQMZOVUYUYPZHMXRXRRHLEVPAFOKRIXGMANJYJISIEXPMXIRSFOATXQMFWWWLBTEZSWFNCAKCLSKGTBHYZVVGTQDBHSRLFATQPAYRCJWUZACLCDNSJMIUBIPUTOIJLKNVKNJGWOALPDZDEFAOGJDQUEHMPBUONGBQHOJIKMYTRJADDVVCHRQKTFFFLTKVMWEFYDZEEBNSVOQSDTKZHPBLRUI");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("ODMJNZXZXPBXYPAQJHOSHWWDPJDQVEBGMTOQLWUVLSDHVYKCSASNHKBFFYZQRDEIKHNELKFYHNNCTERHDMBBUCTHAAJPFTJGLMUWEDRTCZFFILRJXVBNSRIZEPLJSIVMFCIHXWMLHNAYWEBZSZSIURCEGKMUOXFBKTWAZJCAGPNIRVYXBFJZQMVLYQCIUONRKPTUPIUKCOVZAYWYAGGNMKSBKUJVRDSODQGEXXOLQIFQUGOE");
    tmp_msg_0.predicate.assign("QHMKQGXWHAVJBEWFNYQEWLYZIKGDNJQVANECLOWADSRIEXOXOCYOSAJFZUTAMKFFTMDTTU");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("MCIFGMCVYZJZUNSAFAHUBPHKXMDAMUYEGCDWOLYLRMJNZNDXBKYVDFSZUOXSQCCOKRBNDBRBGI");
    tmp_tmp_msg_0_0.attr_type = 154U;
    tmp_tmp_msg_0_0.min.assign("OLGBLZGASDYDETLSTGAGFPJFWZRWPVYGJQLUOAARRFUOQGYVYQPVAQCOXSBTEZMXNLEFMMZZBOYNOHPPMENXUTNTNEGXJSFIUJLXZSKWCGH");
    tmp_tmp_msg_0_0.max.assign("HDEUZJNKLKBMSNZWCEPUDMQHWEAGDYPEUJYVUJMTVNBRAZWBRIQHSOOJYTCPQRLGUQZGPUMOFEVBPICIDFOLGQBEGTHFXQWEHXZDDTLBPIKOPA");
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
    msg.setTimeStamp(0.604711796383);
    msg.setSource(38075U);
    msg.setSourceEntity(204U);
    msg.setDestination(7026U);
    msg.setDestinationEntity(217U);
    msg.topic.assign("SVTLMXWGNSZBZRDDFYPOOXTMSVJNDFYQCANRCXMPTXUCRBQEGEWCIKEKYJDHFGLFSRDUGWAPRZEEHMIILCCVLGBHKUQFEQGJWTKXFQFWCUPASOBYSTHVRZPJJJUCBHRCJDENLGXLJSAXNMFVYPZDNZHQURBU");
    msg.data.assign("HRXFUNUCEEMBIVOMH");

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
    msg.setTimeStamp(0.130153786435);
    msg.setSource(44423U);
    msg.setSourceEntity(224U);
    msg.setDestination(31787U);
    msg.setDestinationEntity(223U);
    msg.topic.assign("TABNQCFBOWSBBOEKXYYEGTHRFPKTISYGBINFJEUFLAZOJHHVDVHYIFZRZWCPQZQJW");
    msg.data.assign("WUGWRYYFRQCMCVZGBIXTONO");

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
    msg.setTimeStamp(0.438323655107);
    msg.setSource(48718U);
    msg.setSourceEntity(251U);
    msg.setDestination(20731U);
    msg.setDestinationEntity(84U);
    msg.topic.assign("PYHVKZZSJPJUDBKPFRJVMYXUSIZWMHEOKHJQWASGUDEIEMRYHLCKXAISDBXWF");
    msg.data.assign("DYEHVIQKZDGFGWHBYVPXEKETQJZBBFLUMRUUUGTVOLXAJWFLCHIZAHNYESHVXOHSANBDXJHYHUQAFASEDTKKZVWSMDJFSSOVTCMVNWDDISZEJFFNTTBAPMOWBRLMZQIUKIZGMOOUFUYMLBKOWOWGZFIURTMAEFLGUGHOVNSPPBBAXIGJJKWLLAYXXEYQNPJGRCICSRR");

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
    msg.setTimeStamp(0.896579136724);
    msg.setSource(11878U);
    msg.setSourceEntity(39U);
    msg.setDestination(65465U);
    msg.setDestinationEntity(71U);
    msg.frameid = 226U;
    const char tmp_msg_0[] = {74, -29, -31, 112, -84, -84, -8, 52, -29, -112, 88, 106, -117, 24, -29, 12, 93, -94, -100, 8, -98, 48, -63, -12, -53, 125, 31, 9, -21, 2, 121, 22, 113, 37, 56, 124, -33, -119, 81, -12, 99, -63, 12, 55, -25, 109, 74, 94, 22, -76, -102, 103, 102, 90, 43, -106, -21, 94, 121, -94, -62, 1, -89, 37, -57, 65, 111, 89, -125, -74, 72, -62, 38, -49, -128, 41, 112, 57, -118, -29, -51, 117, 37, 80, -87, 97, 74, -105, -8, -31, -111, 124, 5, -127, 19, 59, -8, -108, -76, -90, 93, 61, -92, -40, -82, 42, -30, -88, 90, 62, -75, -65, 73, 36, -104, 60, -112, -51, 62, 5, 53, 102, -15, -116, -94, -27, 121, 85, -16, 124, 75, -45, -18, -83, -67, -98, 32, -127, 72, -28, -29, -38, 75, 53, 19, 117, 117, -27, -70, 86, 120, 71, 25, -18, -91, 70, 102, -5, -6, -96, 107, 52, 101, -65, 108, -23, 89, -109, -8, 12, -19, -12, 43, 33, -102, 33, 84, -128, 66, -125, -36, 39, -39, -15, -112, -63, -125, -88, -23, 34, 20, -15, 80, -62, 14, 15, -26, -76, 40, 80, -67, -72, 20, 81, -125, 89, 68, 112, -38, -91, -27, 40, -29, 61};
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
    msg.setTimeStamp(0.151040495661);
    msg.setSource(34853U);
    msg.setSourceEntity(113U);
    msg.setDestination(35571U);
    msg.setDestinationEntity(86U);
    msg.frameid = 96U;
    const char tmp_msg_0[] = {3, 17, -41, 17, 19, -65, 107, -104, -85, 68, -49, -38, 49, -15, -125, -70, 59, 111, -81, 47, -37, 19, -107, -32, 104, -111, 28, -105, 115, 122, -105};
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
    msg.setTimeStamp(0.611286943559);
    msg.setSource(14025U);
    msg.setSourceEntity(185U);
    msg.setDestination(12858U);
    msg.setDestinationEntity(67U);
    msg.frameid = 132U;
    const char tmp_msg_0[] = {-31, -77, -70, -120, 120, -120, 86, -92, 96, -43, 105, -123, -125, 107, 76, -9, 69, -47, -8, -125, -104, -52, -1, -99, 97, 90, -70, 55, 120, 9, -22, 94, -52, -123, -101, -44, 52, -51, 45, -106, 24, 93, -114, 43, 44, -103, 28, -46, -53, 98, -22, 94, -115, 19, -128, -49, -116, -15, 64, -79, -127, 59, 49, 2, -2, 11, -122, -112, 7, 119, 3, 95, 120, -92, 117, 67, 5, 92};
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
    msg.setTimeStamp(0.53402500153);
    msg.setSource(32873U);
    msg.setSourceEntity(131U);
    msg.setDestination(23115U);
    msg.setDestinationEntity(95U);
    msg.fps = 252U;
    msg.quality = 208U;
    msg.reps = 231U;
    msg.tsize = 124U;

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
    msg.setTimeStamp(0.672577999201);
    msg.setSource(21507U);
    msg.setSourceEntity(240U);
    msg.setDestination(22030U);
    msg.setDestinationEntity(46U);
    msg.fps = 175U;
    msg.quality = 238U;
    msg.reps = 214U;
    msg.tsize = 65U;

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
    msg.setTimeStamp(0.286500575842);
    msg.setSource(50638U);
    msg.setSourceEntity(235U);
    msg.setDestination(15010U);
    msg.setDestinationEntity(167U);
    msg.fps = 47U;
    msg.quality = 248U;
    msg.reps = 21U;
    msg.tsize = 128U;

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
    msg.setTimeStamp(0.494374125882);
    msg.setSource(23534U);
    msg.setSourceEntity(33U);
    msg.setDestination(22160U);
    msg.setDestinationEntity(59U);
    msg.lat = 0.971627354154;
    msg.lon = 0.163022524079;
    msg.depth = 64U;
    msg.speed = 0.238609631131;
    msg.psi = 0.169333513684;

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
    msg.setTimeStamp(0.396040474775);
    msg.setSource(36462U);
    msg.setSourceEntity(92U);
    msg.setDestination(28196U);
    msg.setDestinationEntity(46U);
    msg.lat = 0.473182103766;
    msg.lon = 0.64696275904;
    msg.depth = 111U;
    msg.speed = 0.790261988586;
    msg.psi = 0.543608951679;

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
    msg.setTimeStamp(0.488066392807);
    msg.setSource(4512U);
    msg.setSourceEntity(205U);
    msg.setDestination(21789U);
    msg.setDestinationEntity(101U);
    msg.lat = 0.838774603971;
    msg.lon = 0.925654785423;
    msg.depth = 93U;
    msg.speed = 0.863387650316;
    msg.psi = 0.294606505701;

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
    msg.setTimeStamp(0.666006714397);
    msg.setSource(46425U);
    msg.setSourceEntity(183U);
    msg.setDestination(31444U);
    msg.setDestinationEntity(108U);
    msg.label.assign("PCPWZDCEQBHSELUYWMADJAWONVFEKRRSQMAZNAKIVTVMRSGTENYZNYXEBFSBMHVWFYJCKBVLSOHOXFZRRQYXDTRMLVHPIOKXYBG");
    msg.lat = 0.455319457209;
    msg.lon = 0.858583990346;
    msg.z = 0.226478311596;
    msg.z_units = 226U;
    msg.cog = 0.245344876991;
    msg.sog = 0.104245410533;

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
    msg.setTimeStamp(0.0472994861651);
    msg.setSource(4666U);
    msg.setSourceEntity(177U);
    msg.setDestination(2727U);
    msg.setDestinationEntity(185U);
    msg.label.assign("QFCOKYYVJNBORRIZITUGQWLPLCYRSIWCJITTPGFLTEOUSZXYZZDBBZAREWJLAQVLAYOPQKPFIMIYMGKOYGDBQHPKCSUAQYEANZVTDNVTDBTNEQXMMHHUGWBUFMHENQVOQCXTVR");
    msg.lat = 0.334760628828;
    msg.lon = 0.127090790864;
    msg.z = 0.378369246128;
    msg.z_units = 42U;
    msg.cog = 0.695489778505;
    msg.sog = 0.650669737001;

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
    msg.setTimeStamp(0.342878786755);
    msg.setSource(30426U);
    msg.setSourceEntity(155U);
    msg.setDestination(929U);
    msg.setDestinationEntity(158U);
    msg.label.assign("ZPELHTWDFVRPXDMKMUCWYAUYZJJVIFFJTNLAOISAWPZVSCNIKVEPDXIHITSYMKTTDKGVSGJMAKRKCTLXSNQPOBXUZMMEZYMPSPDCPOLORXRQQUWZRJ");
    msg.lat = 0.179082223639;
    msg.lon = 0.288097437948;
    msg.z = 0.645844318618;
    msg.z_units = 244U;
    msg.cog = 0.280144906349;
    msg.sog = 0.649379292318;

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
    msg.setTimeStamp(0.78119523901);
    msg.setSource(48976U);
    msg.setSourceEntity(122U);
    msg.setDestination(33319U);
    msg.setDestinationEntity(20U);
    msg.name.assign("XEPTGLKAXGCPKDCCKMPKJUUIYDYFBILANZRQJAZXOEHTUQZJTRLIHDMYXXSNRIWILYLXKJT");
    msg.value.assign("MOHCUBSPSDDTFPUNLLSKNIEGDRGIUTQNHGJZGQJLBSQQLFNWJYHKLQVWJDLECFWLRTRPGNVCTWNOWPXYSBAUSFSRFGESUZBNOTIFFROVEOGPGJYTVGXUQEMBYYVAZTRCVACBIEOHOICZIHZWMPMBMSPZEXJZVOYSDVWOBAJRITJHUQUMGLLYKPJQDJAFEKFQAZMYIKACBAMWWYXVCMCKNXNCODWXABPZHRZXMTXHKXNUPKDXT");

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
    msg.setTimeStamp(0.397860519323);
    msg.setSource(53719U);
    msg.setSourceEntity(128U);
    msg.setDestination(45266U);
    msg.setDestinationEntity(81U);
    msg.name.assign("EXLRDZIERHOTJHWDIYNWLXYMBEMVRHJ");
    msg.value.assign("HEQQTYPCMXGIBELSQRRPWEMZXRJMJLKVLGAZJYHWUNGFEDBYJ");

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
    msg.setTimeStamp(0.859788386024);
    msg.setSource(16182U);
    msg.setSourceEntity(25U);
    msg.setDestination(7209U);
    msg.setDestinationEntity(114U);
    msg.name.assign("DNHZLNKZWWYYEVWALBHCNSJYYXRDPSBUESTQEDISIZQPQFYTOXHKLJBVYKIFRKGANAQHKZTCGPBYMAAKXBGVUOUT");
    msg.value.assign("UFLWQGHIUXEABPXGWQPXBDESUSDOOYJFICAFUJZRMTJKJEOLJXRAIWDFBBOKLXPYHOMRKGCTGRJMVCLTZLMHBADYHWIRPU");

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
    msg.setTimeStamp(0.739344044066);
    msg.setSource(40251U);
    msg.setSourceEntity(227U);
    msg.setDestination(46831U);
    msg.setDestinationEntity(200U);
    msg.name.assign("SHDNTNHDRAPGBL");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("DKMGLRSOCDUORXDTUXJKMSRWRNHWDHEIFBNDOLWHIFRTDJNLPBTOZYLLZEBVWODRYUGMVWNKJZKMSPTSPTRFGGBCGIKHNMVKXKJNQSIZUYVPGUQZJAYLDIEGSKSTBVNCIXZPLCLXGQQCQHALZHNWUFARIEFUIQEQWDVFUBFLQBHAYXUOOWHGAEHOFMPCXDXXWIQFEBFPYZAAVMOSJTOJTMCNTZCRIMTYAVSEMKHYKXZBJEAYJ");
    tmp_msg_0.value.assign("GFNGZHVBGBRDAPNBCFRZHNBVITUJQDFSTEIQYRHTGBDFYRTPXPLEOAFXUYWXPPOSLBZHXZZQBUMKLZIJJEVYOAFRVKHSPEIMOHLJYPECCNFKEDOUQECWXCMLRKSFJIWZXWMONVZYQHVKGXPZSPOWBDXLNCSKJNNUFRTJKZJEMVRAPGIQTGSNISMWTOQYURE");
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
    msg.setTimeStamp(0.386192688792);
    msg.setSource(10654U);
    msg.setSourceEntity(212U);
    msg.setDestination(45616U);
    msg.setDestinationEntity(177U);
    msg.name.assign("ACERNVXJZRLYOYIJIPUQAOOMSMYDUVLVPTBQNBVICRFACFVMIJLABQXEHBGZVGASXKILQDHPNE");

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
    msg.setTimeStamp(0.621327997032);
    msg.setSource(4279U);
    msg.setSourceEntity(244U);
    msg.setDestination(51242U);
    msg.setDestinationEntity(188U);
    msg.name.assign("RGKIKNYZBRRJNINLTGIAYORWXTUKDYFVIVKMJUXJEFZRCKVHVPGPSNYLLFHPZANBDLWGJUSTCVQBHXUMYYHWJMWEFTRAWMYICISJUVEOGDZWCGLFHKXLEXQTGCOTJECLQZWMNOQPSDUPHNIATPBAWZNDQYLLPRGYNQEBFRPLEMSSQKVXCGSBKCIUUAA");

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
    msg.setTimeStamp(0.0902989156935);
    msg.setSource(24547U);
    msg.setSourceEntity(40U);
    msg.setDestination(36018U);
    msg.setDestinationEntity(87U);
    msg.name.assign("XYDYKRNLUOKEBCECWKMPMKWJWQLNCZJWUIYVHRUGIBFQABDERJAJQHOHANWXVQTRQSXBPMJEJVIOOYXRJFRXGOEKDLDDNYNZIZBWHZFSYCYKHVXVWAIKIUPNGQCYDVNSZTFDFNAIJOUIASBZXTMMBMPMCCDALFGWTARMPPCQNMLUSDQVTPTGBSJWJ");
    msg.visibility.assign("SVBNMJNCPIXITHLCKVFGVXMZZDNPLOAVQBHHPREAQLXVYAAKOKRLTWGCZDMBNHAFYYFTSPCKIELXJBSINOTLZQDHAOLUJOJMYDESDVSBEIOWGIWJNUOKGZRGRMMQFQBWCYIJJWURZGYGSEAFTOUQHXTYKLVDWNEUTG");
    msg.scope.assign("MPAHQQYCESOXJLMOGWZRAGLCRST");

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
    msg.setTimeStamp(0.985176684987);
    msg.setSource(4710U);
    msg.setSourceEntity(217U);
    msg.setDestination(23646U);
    msg.setDestinationEntity(182U);
    msg.name.assign("SXFQPUUBHIMCDBFGRWZPTNGOTICLUNPCZZORBQAKYJPTAPEJOKSTQYINHFCJTWREDKMEYXKGBTEKNXUHUHORBCYUGESFWWZIVSMRYHTDRFYHDOCOSPCBGVMMCAAFLRNILVMILWMPDXXPRITADEKSWPANQEYSQWVLMSFSKAUUTJHKTIWMLZXGBNQAVZPOJJVJJJXHDNLKVXDSQDCLAIWRUHQBFNJHR");
    msg.visibility.assign("LTHOEAHKCVDJSVCKIWHGCQOWLEEUPARXJMNEBABWFCXZMTMSAIKMFYZNZGPSUMGZVNUTQYWQBSSUGWCKLYQVNBEQNUFQLXQJFTIODGCTGXULVUPQDPSJOFXEAUKWRNVZJDRQJYHONPQBPCIHLPOCGYKTJJZNMDVDDELHZEFBYHMPWRMYTMGZORNYSHHKINHRKYIKLRABGSLYEWFZCJASCIRO");
    msg.scope.assign("SMTRHYJKEAGHHHBZUQVEYKOTHEJYRKOMHWWQVYTQQVGNOMRPOVDFSMUYJKZZRYBQOAMEQTQNZNGEHCVFLTEMAPGUVZPJILPGWAGASXDHXIIIWRSUXOGOCDFYLNNWAFKGKDFNECUJDFGKHCOZQTFEMPXNPPMTBBISOVJNUNUKSJDATPGKYRCIWQTSALULCIFCVDJNVYCCLBLQZYR");

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
    msg.setTimeStamp(0.650387700289);
    msg.setSource(42078U);
    msg.setSourceEntity(203U);
    msg.setDestination(10898U);
    msg.setDestinationEntity(179U);
    msg.name.assign("ZDDLAXVGHQCQTJFUXHDVXZMOOMRYXWRVWJBVBXVHPSGCDAQKYFDDILTRKKRDOSGSESDLOCQVSZFNENRFSLYXYXXLGQFWPEEBLWWVIMUUWDMWEUFVQNZFPIOQDRYKHVCLZZAGJZUONCCYQTBJNECYULMXZYAJKVHHJCZBKSLTWMANUOASQPFEBMHMOBJBTITOBGMKYSAHI");
    msg.visibility.assign("UUQLGKMEBPBLDCYFANTXEIVWQLZHPBIFOMCZCWQRNRWYUKXLXCNZSVMMRCGOJSYIEUSXPSVABGQLWQEDYRWZDOEIOHRTAIAEAKJQRTSHUJYFTQPRPUZBNVVHCVZALFECAWSUVBFYHGEWMBTQMDAVSIHIJGDJBZJYKINKPWUXQRHYDZKGDHTFAJPNPYOHEFMLJPTXXHVLGSPKMOKNZXDICIXUAJBOOSLKOFGCGGTYQDLVNK");
    msg.scope.assign("KATTVXOGYBYEKRCFVYUJQPIFNOGC");

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
    msg.setTimeStamp(0.655427108991);
    msg.setSource(32728U);
    msg.setSourceEntity(60U);
    msg.setDestination(58137U);
    msg.setDestinationEntity(104U);
    msg.name.assign("ZZYNAGUTBNGIEFFIUHPECVEHYTXSJUTQLRCFMVNJMSIBDFPNJVCAKXDSWGCLGRVJACCKJDESREMUHLZAHBXILWXKHAJROYGBQEGQEGDHYMVHIOSRZOXDSEHUXKWSJTAPXEHPPLZRBYFNPLQLBBRILKTHYWOWJQPUTJWUZDQAVPKXACBFKUVLMUEVYDKKTQQIMIFJNOXIIOWSMQOZWMUFCRAPOWGGNBRNWCNMYSXZOFQBST");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("HPJTPHEADJRZMMZQHGRVWATWIFTTAQHTVXNZQFYRKTPVFVXLIINOXMCLMJHGSEKVVODPYSLFRWDCPGPLEPFXDIUVQFOKWDNKSUBIKRKALLRZGYMOIBRXFHNECQNQOHJQMXGQMMECUANUDMZVWUDYKIZORQWGEWUTJAYONGOVYWPBATJERBFEDSAABRWJBIGVPDHACYETZBFESBYJIPZUXCKMLFBCSYXCNOHYJO");
    tmp_msg_0.value.assign("HIBFGOGVNYVMNYZDRSWCAPJDEAXIFCIJYLKFTAMRAZXXNERUMYPMAQDSLFMZJOHESUTVISTOHGBGTIZEAHWNCGPXBLTFQNTVCHQLDUVBXEPPJUBXKHNXZWHWOAEJDDMNTSRZYWYIQOHLILNMKTOQVSVWPYPBCRKIYUGMBPAGKTHSUCZVAJDLWBJWOYSQCKDEZILUDAPXCXYEBNJNQTGUKRRQLMEUJPOZ");
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
    msg.setTimeStamp(0.683445912081);
    msg.setSource(34247U);
    msg.setSourceEntity(129U);
    msg.setDestination(21706U);
    msg.setDestinationEntity(5U);
    msg.name.assign("TMCLSWVOAPUXXIXWAMXQ");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("TKUOXVLFDOKOVADRWTXWIKZBMZMQNIFUGSYKCXGJSYVXSNAVBNOAEFTYJBHYDFMIA");
    tmp_msg_0.value.assign("PLQSNKMNURITVLRNEWNADNGJKZJRXKECOEGGAVJYHWRCKAMLMDYJZYEMRMXQQACBWGXNVUJCJONVZVCGTFWFYVUHTLLKQIFBEKTIXEZQPUXRZXSLMHFDIZFZWSEIIAUOYMCYCLBPYUGXQZHTAQUDSODABREIOYDPWBIUTTGBUJDCLRDJYFNXVXGPA");
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
    msg.setTimeStamp(0.511073508756);
    msg.setSource(57944U);
    msg.setSourceEntity(137U);
    msg.setDestination(32478U);
    msg.setDestinationEntity(130U);
    msg.name.assign("XYLBUWUBQVBLISHHSHXJXBKPNLAWWJRHZYAVQKWYQZCQEINAXHNAOWDDJVJCRRQIPHCOVHWORIVGQNFUFDOE");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("BHPUUVHYEGPTARRBMFQDVRFRNOWZIRYXAPWAFBYSJUQPISSHXGTQAZXKSWFQVGREHMVIJLELIAXDKNRUUVWQIRACJVPSABKIETBGSSYQDTJJFCNMEFCLCHVQCUZEMNWOBRPYBGMMTNWOGXNBHKYFZAOXXCKFELD");
    tmp_msg_0.value.assign("RTABLOPFUNBSZBYWNGDXOPWROTIEWWAPGNDJFYXELJ");
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
    msg.setTimeStamp(0.732046857316);
    msg.setSource(25491U);
    msg.setSourceEntity(120U);
    msg.setDestination(60312U);
    msg.setDestinationEntity(172U);
    msg.name.assign("QMLNLCJYRSIKBOMVOWDQJMIFP");

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
    msg.setTimeStamp(0.698178012105);
    msg.setSource(20328U);
    msg.setSourceEntity(18U);
    msg.setDestination(15353U);
    msg.setDestinationEntity(182U);
    msg.name.assign("AGPWXDOLSZJDXRRQHZJYCPBRXGHZ");

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
    msg.setTimeStamp(0.610944906797);
    msg.setSource(51555U);
    msg.setSourceEntity(196U);
    msg.setDestination(12168U);
    msg.setDestinationEntity(33U);
    msg.name.assign("NFVHWCGHARYOOOZOBSWPGHYWPEQQSLPDJKAESIBWCRFUJTGRNLIEWGXNJDQDQASKZMNBWSHIKEFJDDTXRBULEEIYPJDTFAHEVNWIFQURKTXZYGSDIKBXOUECVLFMUDFVKLXPOXHKYJKMMIWTAZXKTPQMBCRXIHVIMSD");

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
    msg.setTimeStamp(0.823778176132);
    msg.setSource(34123U);
    msg.setSourceEntity(163U);
    msg.setDestination(799U);
    msg.setDestinationEntity(253U);
    msg.timeout = 3188869965U;

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
    msg.setTimeStamp(0.183140499345);
    msg.setSource(2560U);
    msg.setSourceEntity(141U);
    msg.setDestination(58571U);
    msg.setDestinationEntity(172U);
    msg.timeout = 3284787909U;

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
    msg.setTimeStamp(0.870018181358);
    msg.setSource(60961U);
    msg.setSourceEntity(12U);
    msg.setDestination(63143U);
    msg.setDestinationEntity(129U);
    msg.timeout = 1098544947U;

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
    msg.setTimeStamp(0.12382093104);
    msg.setSource(18551U);
    msg.setSourceEntity(209U);
    msg.setDestination(59303U);
    msg.setDestinationEntity(204U);
    msg.sessid = 3455046139U;

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
    msg.setTimeStamp(0.104329838367);
    msg.setSource(11445U);
    msg.setSourceEntity(217U);
    msg.setDestination(36255U);
    msg.setDestinationEntity(26U);
    msg.sessid = 323964795U;

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
    msg.setTimeStamp(0.684161161048);
    msg.setSource(13175U);
    msg.setSourceEntity(243U);
    msg.setDestination(18162U);
    msg.setDestinationEntity(145U);
    msg.sessid = 3218956594U;

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
    msg.setTimeStamp(0.368936246282);
    msg.setSource(14110U);
    msg.setSourceEntity(28U);
    msg.setDestination(60944U);
    msg.setDestinationEntity(141U);
    msg.sessid = 3709548781U;
    msg.messages.assign("JMRKSJQIHVRVGSOWRQXCIQKXNZEEOEKPBZFTWAZENAZTDYJHFELKMEXFSXIGGTGTDEAERGXZXJFABBLRKIYRJINZXANBWYSWQQDSVPOZFUKPJAUWHPYVMRMIRBDG");

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
    msg.setTimeStamp(0.598327446622);
    msg.setSource(33650U);
    msg.setSourceEntity(68U);
    msg.setDestination(44456U);
    msg.setDestinationEntity(166U);
    msg.sessid = 1465428167U;
    msg.messages.assign("MRQNTLMGLJLVDAFATQKSBGQTWTFRIWVAJUUGNMBLHOFMUBTTUYBOICWZQRAOPBDJDNOKXEMPWAAGXEAQEOEVBUEDRVJZWPPLMOYNSVMBJGICOHKSEEJIBDSEYCJSFSDUYRMYZZZKFQFAEPWUCOVGXINKAGKPDLJVRKVOWNPHIJHKTQCIFVHKGTLCWCNSXLRLZAGPF");

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
    msg.setTimeStamp(0.310525778159);
    msg.setSource(52611U);
    msg.setSourceEntity(114U);
    msg.setDestination(44384U);
    msg.setDestinationEntity(99U);
    msg.sessid = 2757501096U;
    msg.messages.assign("VQDSMQIASTBCGGXYORLBSEULOVATVIERQEQMBGTHTCIOHEZRYFKMQBDNIUIBJHLMFQMCHUVWIBPFJ");

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
    msg.setTimeStamp(0.810481856166);
    msg.setSource(14839U);
    msg.setSourceEntity(196U);
    msg.setDestination(26442U);
    msg.setDestinationEntity(1U);
    msg.sessid = 2515482653U;

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
    msg.setTimeStamp(0.822660535352);
    msg.setSource(35165U);
    msg.setSourceEntity(235U);
    msg.setDestination(19008U);
    msg.setDestinationEntity(176U);
    msg.sessid = 2063610202U;

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
    msg.setTimeStamp(0.355148907809);
    msg.setSource(32628U);
    msg.setSourceEntity(193U);
    msg.setDestination(37716U);
    msg.setDestinationEntity(128U);
    msg.sessid = 3416732124U;

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
    msg.setTimeStamp(0.88706801063);
    msg.setSource(18137U);
    msg.setSourceEntity(253U);
    msg.setDestination(15149U);
    msg.setDestinationEntity(231U);
    msg.sessid = 982396244U;
    msg.status = 58U;

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
    msg.setTimeStamp(0.311736345991);
    msg.setSource(26922U);
    msg.setSourceEntity(146U);
    msg.setDestination(32074U);
    msg.setDestinationEntity(66U);
    msg.sessid = 1709274876U;
    msg.status = 185U;

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
    msg.setTimeStamp(0.623716204686);
    msg.setSource(12284U);
    msg.setSourceEntity(16U);
    msg.setDestination(22696U);
    msg.setDestinationEntity(51U);
    msg.sessid = 4176079139U;
    msg.status = 166U;

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
    msg.setTimeStamp(0.348293246408);
    msg.setSource(61324U);
    msg.setSourceEntity(230U);
    msg.setDestination(1019U);
    msg.setDestinationEntity(240U);
    msg.name.assign("BZTVTWSFYXASHNRHLTM");

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
    msg.setTimeStamp(0.345752836732);
    msg.setSource(60134U);
    msg.setSourceEntity(124U);
    msg.setDestination(45628U);
    msg.setDestinationEntity(111U);
    msg.name.assign("FBDHXCJIASAIXPYSNPBECTJWWZSEAAZKPDELEJWNKFWMDZKINZGJSVMAHHLOXBHLYXGZPQHIFUGMJOBEUBRQYADCWFYEIFZUKKLBDUDJOQLDKCUINPOR");

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
    msg.setTimeStamp(0.42802946819);
    msg.setSource(63503U);
    msg.setSourceEntity(43U);
    msg.setDestination(41320U);
    msg.setDestinationEntity(163U);
    msg.name.assign("MFMWLSYJPAZPKNBIQEYZUXLBCOMHOIWETEJLVFRCYCRVHVTDSHCNQTVKILBDZUVLJCUOOZTTEGUYJJTRATTUKNUCKZRGIWZSUBVGDPVAXZICANXWQLPJYRXMOHPGWGNHPIFYSFTMWSJKFNSYXBALRKVDFMAGOXLUFYWIEDJEZJOLHAHMNCHESYTWNIROKIQPSGZKQSNVRDQPBZFQLAGMEOSPXDQBABAQNCCBXDYFMU");

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
    msg.setTimeStamp(0.331341546688);
    msg.setSource(46549U);
    msg.setSourceEntity(54U);
    msg.setDestination(26966U);
    msg.setDestinationEntity(165U);
    msg.name.assign("MWWFCSYTJWWGHXFMFBDMRSIZHXCAJIGBGYTIBPQQSOHLZ");

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
    msg.setTimeStamp(0.143037554794);
    msg.setSource(5944U);
    msg.setSourceEntity(111U);
    msg.setDestination(29390U);
    msg.setDestinationEntity(179U);
    msg.name.assign("PNQINQMKNHILC");

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
    msg.setTimeStamp(0.718725248503);
    msg.setSource(55309U);
    msg.setSourceEntity(100U);
    msg.setDestination(5352U);
    msg.setDestinationEntity(66U);
    msg.name.assign("OYWNWZGMHUHROQSKHZYDYZSGRPLXCDCHLFNFUXVMBRYSVEHBILUBJRPXUTQTCCHTNLIMNJNPIDGEMZTRWOGKEPXUMNKVFSCUIHWKAAKQFDWMMGKRATVSZOJLFZFFMLJVSAVDDODRPVJTBYIEZWMSDOIWNQMQFYIEJJTRSEKCZLKHKNGYABPOTXUGBQXUXXLUNIF");

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
    msg.setTimeStamp(0.352019666611);
    msg.setSource(6982U);
    msg.setSourceEntity(11U);
    msg.setDestination(3687U);
    msg.setDestinationEntity(72U);
    msg.type = 42U;
    msg.error.assign("AFNRKATVQGKGFGGLZIWIMFRXBCJUTHCCVEGFPTKASLPHUIXURTZHNLGNVWGJYQMAPWYZESBBKXIMDSTKMVTGSQDFQETFOTEANSLBFJMXEXINMPIWCEHVZSOLJRMEXCOQYMSURGJVQONPQHPCUDZOWNOEIXYXREZUIPTUKNUOSMQENBQYDZYBJOSZVRIKDNACDJRJBWARLOCCFSWFPDPRQYKPHWYXV");

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
    msg.setTimeStamp(0.389402721617);
    msg.setSource(26601U);
    msg.setSourceEntity(66U);
    msg.setDestination(13760U);
    msg.setDestinationEntity(48U);
    msg.type = 74U;
    msg.error.assign("YVRWMNPQRLXJUJOCLLBBXOLVMYFAGHMDSDIVZXZENMWZIHQTCNXFGKCYAUMVHYHYUFLDFPHVWMUAUAVDMTKYPVALLEEFXWUNCEQCMRNTCOWKJNJFWBEJGZGJMDCRFQG");

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
    msg.setTimeStamp(0.231084104722);
    msg.setSource(23488U);
    msg.setSourceEntity(248U);
    msg.setDestination(39961U);
    msg.setDestinationEntity(249U);
    msg.type = 252U;
    msg.error.assign("IUJSRBPUXGWDPMFNVBNORBRFDZGNPMCFNANGKZXDLNSKQUKMTRTWIVOCVBOOCYEISAMJXRGGKIWSBQCXFYUPQJELVWYFUMLLZQCWTMYAXCDESEYEGOWSTFKVBAZFPEHJIKSKJDGVPHTKCZJFHYQZCTODRJOWIDMFCREBPISINGTBFDOHAVUQGVQRHKODRYALLSXYXHPNXDLXAMPTXCUUWTBHAKMMJPIQQWHYBREZNALQUIAGUJNWL");

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
    msg.setTimeStamp(0.419454595035);
    msg.setSource(34243U);
    msg.setSourceEntity(167U);
    msg.setDestination(2572U);
    msg.setDestinationEntity(196U);
    msg.seq = 8074U;
    msg.sys_dst.assign("HDPYPRALBKTMFZLTSFQVMEIRYKZNSBNIJLPUKOHHWLQUUBYXKYXDZQWBGKFBXUZXFTAGMNECKQISREJWAEJCGEVRUAQUTPJJNHWMLVGLZD");
    msg.flags = 35U;
    const char tmp_msg_0[] = {-53, 80, 69, 19, 104, -32, 112, -14, -39, 82, -44, -56, -105, -119, -121, 116, -93, -77, 1, 69, -113, 52, -45, 95, -92, 47, 34, 125, 10, -84, -125, 126, -26, -50, -85, -33, -16, 109, -5, 63, 60, -30, -95, 26, 56, 2, 61, 54, 117, 33, 3, 83, 37, -122, -65, -100, -127, -64, -111, 19, 95, -118, -97, -115, -91, -77, -75, -74, 103, 80, 60, 43, -57, 94, 42, -1, -37, -48, 30, 26, -114, 126, 64, 29, -58, -125, -76, -73, 26, -16, 66, 110, 39, -123, -13, 92, 27, 103, 40, -54, -25, 11, 1, -41, 108, 17, 2, -42, 102, -28, 14, -94, -1, 93, 59, -17, -125, 59, -17, 49, 89, -35, 42, 17, 64, -80, 48, -58, -107, -28, -53, -93, 74, -53, 98, 59, -106, 75, -51, 89, 10, -96, 31, 41, -64, 30, 76, 14, 84, -51, 59, 5, 60, 11, -51, 69, 7, 38, 5, -55, -53, 67};
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
    msg.setTimeStamp(0.622183287705);
    msg.setSource(2983U);
    msg.setSourceEntity(77U);
    msg.setDestination(9477U);
    msg.setDestinationEntity(230U);
    msg.seq = 6217U;
    msg.sys_dst.assign("AGAUWQPHVSFPZZULTJVLVUBMOHMOBEXTCUDGZZKKTZGEN");
    msg.flags = 135U;
    const char tmp_msg_0[] = {98, -79, -81, 97, -54, 2, 41, 65, -17, 96, 106, -61, -70, -27, 76, -30, -22, 70, -22, -42, -128, 2, 97, 91, -38, 110, -51, -27, 108, -59, -101, 47, 43, 43, -55, -73, 18, 100, -2, -38, -46, -78, -92, 108, -91, 67, 64, 7, 115, 27, 66, 75, -64, 117, -44, -73, 125, -108, 69, -126, 123, 31, -52, -50, 69, -7, -71, 67, 65, 57, -94, -14, -127, -68, 20, -16, -120, 117, -102, 35, -89, -118, -17, -74, -29, -22, -97, 123, -113, -105, 119, 4, -78, 12, 46, 11, 39, 16, 18, -128, 112, -98, -54, -65, 89, -72, 29, 67, 18, -99, 88, -104, -33, -86, 54, -36, -53, -125, 14, -99, -87, -89, 40, 70, -80, -108, -126, -51, 7, 50, -127, 17, 3, -100, -40, 30, -14, 90, -74, -45, -38, 86, -17, 37, -101, -68, 112, -29, 27};
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
    msg.setTimeStamp(0.308450267107);
    msg.setSource(15672U);
    msg.setSourceEntity(96U);
    msg.setDestination(54077U);
    msg.setDestinationEntity(145U);
    msg.seq = 48306U;
    msg.sys_dst.assign("VGVIWGUKCQPXAFCESAMTZYCKXFEIYSJNCNWNUJADRYKPPVAKIRGKQKIPBZLUKNFFSIMVDMEXESICGXVNOZSTGARVAWYBSLMCQNRQXXTFGDKTVECLUHQOZDYTYUAKLIMMRLHYTCGEXRJHWHCHBAGOZGWJRYQOJXBWEFFQFNEIBWTTMLLHBWLBBVXOUPUZZJIUTOZLJJYHUMTQMRDVOQOWDDQCSPR");
    msg.flags = 89U;
    const char tmp_msg_0[] = {37, 104, -54, -26, -85, 24, -44, 98, -78, 33, -20, -37, 6, 42, -105, 106, -115, 11, 63, 121, 112, 25, -109, 113, 0, -59, 44, 60, 19, 18, 112, -73, -9, -5, -84, -88, -6, 82, 55, 95, 90, -13, 5, -90, -66, -25, 18, -85, 108, 49, -67, 21, -121, 30, 45, -80, -1, 23, 115, 83, -29, -116, -81, 63, -51, -44, 16, -29, -24, 73, -92, 126, -70, -66, -72, -37, 83, -97, -87, 35, -71, -15, -121, 77, -53, 75, -44, 18, 110, 78, 53, -11, -68, 99, 18, -74, -56, -106, -31, 103, 24, 7, 112, -2, -86, -98, 55, 80, -99, 18, -89, -84, 37, -117, -120, 93, -104, 87, 74, -121, 99, -29, -78, -38, 98, 0, 114, -63, -27, -85, -24, -52, -124, 11, 97, 4, -2, 101, 61, 46, -69, 6, -86, 68};
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
    msg.setTimeStamp(0.368877178819);
    msg.setSource(33624U);
    msg.setSourceEntity(129U);
    msg.setDestination(29335U);
    msg.setDestinationEntity(204U);
    msg.sys_src.assign("COHNGGIAJPUKZBRXEOPZEAWCPYWCFISRQYUPKNMCHSWTADZETTNBQIFZIARXCKQCLTOHOXVTYCPNVWDHQVLUCEZUAVPHYUVRUKSKQOGSUTBWZYFXUGZNIBGQZPRJLDEESDLDJFHZAEXMLFFNJHXUBOUKSLKXXQJXWLYXGAWOBZMAAM");
    msg.sys_dst.assign("PKVOZHSBUMW");
    msg.flags = 222U;
    const char tmp_msg_0[] = {-53, 62, 84, 70, -28, -3, 105, -44, 109, 108, 81, 93, -112, 71, -126, -46, -65, -96, -19, 113, 38, 31, -57, -82, -27, -32, 42, -53, 69, -42, -6, 28, 121, -51, 36, 117, -5, -103, -2, 1, -87, -96, -76, -84, -58, -32, -17, 48, 67, -92, -74, -76, 108, -100, 51, -114, 33, 80, -74, -25, -103, 71, -26, 107, 60, 124, -63, 0, 62, -49};
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
    msg.setTimeStamp(0.174247956138);
    msg.setSource(47506U);
    msg.setSourceEntity(240U);
    msg.setDestination(13748U);
    msg.setDestinationEntity(64U);
    msg.sys_src.assign("QXNUQCODAMOUEPHLFPGYBQOZF");
    msg.sys_dst.assign("RSRRDBMRSAFUJKCJBGHPJWQZBMAYIWVDEXLIYBONBPVRGAQSODDQQLHSJCAFDXMRTXZQWHFJLLXSDZPZAGBIEUYVQZAVCUNTKUOXOHOLGMJXTOVJGCWURALXIIKORMMKWGWHYTCEADLPSTPGNQENOFVMHVKQJUCNAZWLEBAPSBOIMMUXEJNZDEIRCXXUFGGIWOSSTHYKKIRUYIZLMTDFYVVNVKWTKBNHFZKPQFENHTPHBCYJECLQSWD");
    msg.flags = 31U;
    const char tmp_msg_0[] = {-124, -42, 52, 122, 26, 23, -97, -31, 67, -60, -73, -103, -31, -9, 7, -78, 41, 37, -56, 25, -76, -25, -56, -66, 124, -3, 73, -37, -23, -60, -37, 17, -127, -82, 18, 62, 81, 123, -39, 44, 26, -38, -96, -35, 32};
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
    msg.setTimeStamp(0.410315845016);
    msg.setSource(52495U);
    msg.setSourceEntity(168U);
    msg.setDestination(59342U);
    msg.setDestinationEntity(179U);
    msg.sys_src.assign("UQFCQGIQPJZVFNPRATEUEZSKWTYUOATAOANMBXTHFRTNLSFHZMKQDMFVGAHVCCKWNGREGSZMSETZIWPQQDPRYAJTZDOLDXDMPCIKCYXLLPLYVTCTVBFGAJEZNECQURRYRNNNBRUYWHDMBBNZLSYFXKXXGKOFBKSUHHEDDBUJJQWVIJYSEGJXDIMMBPVTMPUSEHOGEOBWIKOYJILOSOORPRZIGDLCWLGVYA");
    msg.sys_dst.assign("PRUPWTKYVUZJNPSVEWXYPPSBNJWYEGXOWDHPXAFVSGYJRXMIDCYWMQAZTOVVQFLXBQGKPBOHQICHYLMPLBDQZKWORTLWHAGMUOSJUTJTHKXVCDPFHKBVNHCYETZYFXTCUGODKCYPDAFDWTUFTLVVCSFJMQBZEHZOKKAANOTIBNIGRELUSDQZNCBQNBQXBRGOHIRJSKGLURRIXMSJNNNVFE");
    msg.flags = 77U;
    const char tmp_msg_0[] = {-77, 75, -41, 102, 46, -78, 4, -99, 106, -59, -97, 85, 32, -84, 23, -10, 18, 95, 89, -117, 87, 44, 24, -58, 47, -105, -37, 97, 15, -83, 84, 19, -103, -12, -38, -4, -45, 13, 51, -24, -103, -93, 117, 17, -50, 89, -66};
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
    msg.setTimeStamp(0.409074712671);
    msg.setSource(45423U);
    msg.setSourceEntity(58U);
    msg.setDestination(57401U);
    msg.setDestinationEntity(246U);
    msg.seq = 29724U;
    msg.value = 31U;
    msg.error.assign("WKCDAVRCKALDBQHILTNBBZWBXESTCUTVRLRNRFHTVFFBDLNXOSXCULXHSPLCVJZF");

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
    msg.setTimeStamp(0.838691834002);
    msg.setSource(54700U);
    msg.setSourceEntity(175U);
    msg.setDestination(57627U);
    msg.setDestinationEntity(56U);
    msg.seq = 26774U;
    msg.value = 174U;
    msg.error.assign("WEYLUVBPJRIGJWAKCTCLGAZMOUZXLVEHYYRNSOUXRJDFFQNWBSWKOUMZUZNEGFLBIEDMAGFFKIIAOXUTKKGCATBTBGEFNHRBJHJJLNVZMLNMUMMOVVOQRDTSEUHZMKLLQOBJCPLIPVJPTHZXYKFGCQIYDHKFRHOXSVXXECIHXVRUFDSY");

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
    msg.setTimeStamp(0.103848821555);
    msg.setSource(35476U);
    msg.setSourceEntity(21U);
    msg.setDestination(36903U);
    msg.setDestinationEntity(75U);
    msg.seq = 47113U;
    msg.value = 247U;
    msg.error.assign("SMYBJZCRVHJUCVGNBEHFUCKYVAVKGFPOSDHKBWTNQWJETYGMGWAAWSLIXXMATPNZDJGDCCXJDRMOXRPEGRDBXHWZRLKMDUMXZDOYZQEFPOTIDKXTUMFIYKSSJUHNVPPBONZEYWQITLERWQICKSBZIPMTSJLSKEOYEIGMVHPUVAIGQPXYSGTBYBVOQHRLJKIOBHJHFSQCZUAWLFNJXKCALFRULBWTREYNOIMPUOLQDRWXCZQAACVD");

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
    msg.setTimeStamp(0.315580547687);
    msg.setSource(21694U);
    msg.setSourceEntity(116U);
    msg.setDestination(19688U);
    msg.setDestinationEntity(230U);
    msg.seq = 32378U;
    msg.sys.assign("AEGCWEFBMBKDJVNYSRMABCWRIFOHXYVHGSMYPFDDXNKUAFOTLNITTOLBGURLRGGOAELUWXUPNANCQITXQLMUFHMXDQCDPRZWEPNOYFCBWJPBHLCZDZFMAZYSUNVBSAGTMYRKGFMCJQYHMUOPNVXFZFEIWIGZZITWSWVQKVBJRHXPDJPMTLKYQJVTOB");
    msg.value = 0.755965197002;

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
    msg.setTimeStamp(0.429971917568);
    msg.setSource(64126U);
    msg.setSourceEntity(241U);
    msg.setDestination(54405U);
    msg.setDestinationEntity(160U);
    msg.seq = 15371U;
    msg.sys.assign("EEEAUCUSBESQMGIR");
    msg.value = 0.479702366299;

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
    msg.setTimeStamp(0.166878764517);
    msg.setSource(9969U);
    msg.setSourceEntity(219U);
    msg.setDestination(58393U);
    msg.setDestinationEntity(120U);
    msg.seq = 34118U;
    msg.sys.assign("MBOXJSOPNYWDAOKKAHTMRJLBCLVQXUMDGTDUBDOUENGSQNAOGBISWBFBDZZIKSLPQPMBMDQEOGHPBPLGATAGCPFUIJWQSAVEPRSTLOPIXCKIHSXEOLHCTEJYTTRZKZSK");
    msg.value = 0.807842700852;

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
    msg.setTimeStamp(0.0147147905215);
    msg.setSource(63720U);
    msg.setSourceEntity(130U);
    msg.setDestination(2659U);
    msg.setDestinationEntity(147U);
    msg.action = 216U;
    msg.longain = 0.29908052079;
    msg.latgain = 0.380989064344;
    msg.bondthick = 3440866569U;
    msg.leadgain = 0.692247985073;
    msg.deconflgain = 0.966386276606;

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
    msg.setTimeStamp(0.827514305544);
    msg.setSource(60668U);
    msg.setSourceEntity(175U);
    msg.setDestination(22072U);
    msg.setDestinationEntity(52U);
    msg.action = 2U;
    msg.longain = 0.348263417225;
    msg.latgain = 0.407240918847;
    msg.bondthick = 4220245378U;
    msg.leadgain = 0.80418903099;
    msg.deconflgain = 0.570583823335;

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
    msg.setTimeStamp(0.927021239419);
    msg.setSource(48U);
    msg.setSourceEntity(199U);
    msg.setDestination(48195U);
    msg.setDestinationEntity(236U);
    msg.action = 7U;
    msg.longain = 0.69592986116;
    msg.latgain = 0.143448121416;
    msg.bondthick = 3700580794U;
    msg.leadgain = 0.395594150205;
    msg.deconflgain = 0.450106423298;

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
    msg.setTimeStamp(0.211696232615);
    msg.setSource(21990U);
    msg.setSourceEntity(177U);
    msg.setDestination(10203U);
    msg.setDestinationEntity(63U);
    msg.err_mean = 0.555753277172;
    msg.dist_min_abs = 0.795402436947;
    msg.dist_min_mean = 0.695974288484;

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
    msg.setTimeStamp(0.397414735647);
    msg.setSource(58850U);
    msg.setSourceEntity(102U);
    msg.setDestination(43419U);
    msg.setDestinationEntity(250U);
    msg.err_mean = 0.882344226258;
    msg.dist_min_abs = 0.17511773875;
    msg.dist_min_mean = 0.362108105575;

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
    msg.setTimeStamp(0.910759113642);
    msg.setSource(65464U);
    msg.setSourceEntity(9U);
    msg.setDestination(31944U);
    msg.setDestinationEntity(55U);
    msg.err_mean = 0.301732107355;
    msg.dist_min_abs = 0.0176808876741;
    msg.dist_min_mean = 0.318446980354;

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
    msg.setTimeStamp(0.0191343715235);
    msg.setSource(47251U);
    msg.setSourceEntity(120U);
    msg.setDestination(23196U);
    msg.setDestinationEntity(113U);
    msg.action = 39U;
    msg.lon_gain = 0.293651886404;
    msg.lat_gain = 0.587717498227;
    msg.bond_thick = 0.428226306207;
    msg.lead_gain = 0.261742041647;
    msg.deconfl_gain = 0.0610929828699;
    msg.accel_switch_gain = 0.237209964321;
    msg.safe_dist = 0.432762281273;
    msg.deconflict_offset = 0.740831482951;
    msg.accel_safe_margin = 0.27268954516;
    msg.accel_lim_x = 0.368221914833;

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
    msg.setTimeStamp(0.75196117946);
    msg.setSource(53438U);
    msg.setSourceEntity(147U);
    msg.setDestination(24177U);
    msg.setDestinationEntity(139U);
    msg.action = 63U;
    msg.lon_gain = 0.529138861067;
    msg.lat_gain = 0.331941656994;
    msg.bond_thick = 0.435953256236;
    msg.lead_gain = 0.533898235377;
    msg.deconfl_gain = 0.89347104017;
    msg.accel_switch_gain = 0.34600614142;
    msg.safe_dist = 0.444051459199;
    msg.deconflict_offset = 0.0101941331503;
    msg.accel_safe_margin = 0.62305527029;
    msg.accel_lim_x = 0.498479532024;

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
    msg.setTimeStamp(0.237036423911);
    msg.setSource(34681U);
    msg.setSourceEntity(30U);
    msg.setDestination(47604U);
    msg.setDestinationEntity(232U);
    msg.action = 107U;
    msg.lon_gain = 0.705678464022;
    msg.lat_gain = 0.634869347547;
    msg.bond_thick = 0.490467389049;
    msg.lead_gain = 0.955565415727;
    msg.deconfl_gain = 0.687872116082;
    msg.accel_switch_gain = 0.810224234734;
    msg.safe_dist = 0.74967627766;
    msg.deconflict_offset = 0.234947587018;
    msg.accel_safe_margin = 0.0387807962449;
    msg.accel_lim_x = 0.368876139849;

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
    msg.setTimeStamp(0.652941262357);
    msg.setSource(48897U);
    msg.setSourceEntity(196U);
    msg.setDestination(27631U);
    msg.setDestinationEntity(207U);
    msg.type = 157U;
    msg.op = 238U;
    msg.err_mean = 0.815717121163;
    msg.dist_min_abs = 0.528136327902;
    msg.dist_min_mean = 0.261276865219;
    msg.roll_rate_mean = 0.980940492205;
    msg.time = 0.382047258714;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 37U;
    tmp_msg_0.lon_gain = 0.960476822054;
    tmp_msg_0.lat_gain = 0.779427416679;
    tmp_msg_0.bond_thick = 0.929789528026;
    tmp_msg_0.lead_gain = 0.303195716228;
    tmp_msg_0.deconfl_gain = 0.900820328612;
    tmp_msg_0.accel_switch_gain = 0.725068673667;
    tmp_msg_0.safe_dist = 0.835601765841;
    tmp_msg_0.deconflict_offset = 0.176327100722;
    tmp_msg_0.accel_safe_margin = 0.82891980539;
    tmp_msg_0.accel_lim_x = 0.14454267441;
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
    msg.setTimeStamp(0.604105565541);
    msg.setSource(2574U);
    msg.setSourceEntity(254U);
    msg.setDestination(27770U);
    msg.setDestinationEntity(117U);
    msg.type = 76U;
    msg.op = 103U;
    msg.err_mean = 0.823913035611;
    msg.dist_min_abs = 0.314807351756;
    msg.dist_min_mean = 0.132705977188;
    msg.roll_rate_mean = 0.11012935769;
    msg.time = 0.129107580838;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 229U;
    tmp_msg_0.lon_gain = 0.852441093106;
    tmp_msg_0.lat_gain = 0.522156550329;
    tmp_msg_0.bond_thick = 0.81922891836;
    tmp_msg_0.lead_gain = 0.757991053758;
    tmp_msg_0.deconfl_gain = 0.197377888103;
    tmp_msg_0.accel_switch_gain = 0.603575046038;
    tmp_msg_0.safe_dist = 0.503627135484;
    tmp_msg_0.deconflict_offset = 0.156257513437;
    tmp_msg_0.accel_safe_margin = 0.642513294194;
    tmp_msg_0.accel_lim_x = 0.171582549131;
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
    msg.setTimeStamp(0.390365697535);
    msg.setSource(28190U);
    msg.setSourceEntity(52U);
    msg.setDestination(5000U);
    msg.setDestinationEntity(67U);
    msg.type = 45U;
    msg.op = 136U;
    msg.err_mean = 0.938996679766;
    msg.dist_min_abs = 0.339136875234;
    msg.dist_min_mean = 0.618235844896;
    msg.roll_rate_mean = 0.339709936414;
    msg.time = 0.0959995020176;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 231U;
    tmp_msg_0.lon_gain = 0.710434431465;
    tmp_msg_0.lat_gain = 0.641215540778;
    tmp_msg_0.bond_thick = 0.824479207426;
    tmp_msg_0.lead_gain = 0.835147203649;
    tmp_msg_0.deconfl_gain = 0.870525578808;
    tmp_msg_0.accel_switch_gain = 0.878687296307;
    tmp_msg_0.safe_dist = 0.467764071057;
    tmp_msg_0.deconflict_offset = 0.0986942004243;
    tmp_msg_0.accel_safe_margin = 0.0146489535611;
    tmp_msg_0.accel_lim_x = 0.116695587127;
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
    msg.setTimeStamp(0.110948312554);
    msg.setSource(33829U);
    msg.setSourceEntity(137U);
    msg.setDestination(50940U);
    msg.setDestinationEntity(171U);
    msg.lat = 0.289929524191;
    msg.lon = 0.301335372835;
    msg.eta = 3780573104U;
    msg.duration = 43329U;

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
    msg.setTimeStamp(0.945739925155);
    msg.setSource(27657U);
    msg.setSourceEntity(151U);
    msg.setDestination(8129U);
    msg.setDestinationEntity(180U);
    msg.lat = 0.777699220788;
    msg.lon = 0.575127845397;
    msg.eta = 3718979880U;
    msg.duration = 40401U;

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
    msg.setTimeStamp(0.630767940161);
    msg.setSource(31915U);
    msg.setSourceEntity(50U);
    msg.setDestination(47914U);
    msg.setDestinationEntity(72U);
    msg.lat = 0.304496135207;
    msg.lon = 0.785738267478;
    msg.eta = 1156340056U;
    msg.duration = 19731U;

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
    msg.setTimeStamp(0.331666986209);
    msg.setSource(55695U);
    msg.setSourceEntity(179U);
    msg.setDestination(51015U);
    msg.setDestinationEntity(89U);
    msg.plan_id = 49444U;

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
    msg.setTimeStamp(0.560753710445);
    msg.setSource(14294U);
    msg.setSourceEntity(218U);
    msg.setDestination(19911U);
    msg.setDestinationEntity(250U);
    msg.plan_id = 33309U;
    IMC::SoiWaypoint tmp_msg_0;
    tmp_msg_0.lat = 0.15274000776;
    tmp_msg_0.lon = 0.945783322067;
    tmp_msg_0.eta = 2646061019U;
    tmp_msg_0.duration = 10162U;
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
    msg.setTimeStamp(0.947123942525);
    msg.setSource(2942U);
    msg.setSourceEntity(52U);
    msg.setDestination(5942U);
    msg.setDestinationEntity(190U);
    msg.plan_id = 4219U;

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
    msg.setTimeStamp(0.195282949106);
    msg.setSource(27980U);
    msg.setSourceEntity(228U);
    msg.setDestination(63941U);
    msg.setDestinationEntity(107U);
    msg.type = 27U;
    msg.command = 19U;
    msg.settings.assign("YBXHMFHEGSAXKONMCWRHYSMZFJXNFZUZNQFHZJUIEHOXEVLESSNBDQOEVDGBHJEIPFMWTNQRZDTSMJDYRYUGGLYVKYBBVRAXLLNPRIXPOURDLLAACDEOLLBYXNKJJGJWRCGEJMUXNTFFVSNEMAW");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 30347U;
    msg.plan.set(tmp_msg_0);
    msg.info.assign("ZIBTUSSTDDGMMXWZSUJJHORNQWFLELFHKGKEIKBEYPHFNWOQJO");

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
    msg.setTimeStamp(0.236173572677);
    msg.setSource(56553U);
    msg.setSourceEntity(130U);
    msg.setDestination(14540U);
    msg.setDestinationEntity(199U);
    msg.type = 71U;
    msg.command = 135U;
    msg.settings.assign("GYOMJLCIXMGYIXHXKPNFWMBWGUPOZKYOLFRQRJLCQJPXIFWSXQYXMROCHHVVCGTJMJUNMZJTLWETKWIRLVOGAICBAZCNEPUOHEDEDDRLJCCSERXWBDDCSUFNXMKRIRWPZMWDTVGZSQKFIYDEBZBTYSGGYOHAUSLZVJVZOLUWEABALZFQUTQEOWVBDMLHKFMFUSYQNXVQKTTBSNFHPBTHERNJNPSGS");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 65529U;
    IMC::SoiWaypoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.225890903539;
    tmp_tmp_msg_0_0.lon = 0.942428535935;
    tmp_tmp_msg_0_0.eta = 1952468881U;
    tmp_tmp_msg_0_0.duration = 27253U;
    tmp_msg_0.waypoints.push_back(tmp_tmp_msg_0_0);
    msg.plan.set(tmp_msg_0);
    msg.info.assign("FWPTHYCULJXKSZZAJKNTTOEIIQUGMMTRANWAZVVCYKBVLQPRPARQAMOBDHGAIHEGTHVQLLFKUKLKERPJIMSRAOUCDEAWBBXKTWNVPXVMFNJLNVFNGYDMOCHJJIZFOWUNIJPIZZWOJLIEZGYZYBPJDUPZXUALHSTSVEEZGEILNSGXFWSJKHWFLPCWCBBBOQCSQYOVCABDTUDXYHXYRBMEGNNTOSMFKQIWDKRR");

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
    msg.setTimeStamp(0.548362706079);
    msg.setSource(56431U);
    msg.setSourceEntity(238U);
    msg.setDestination(16182U);
    msg.setDestinationEntity(81U);
    msg.type = 120U;
    msg.command = 172U;
    msg.settings.assign("NOJCBVSNIBXNMICVVEEMRYXAUULURYMMRWIYAYTDNXLLEFBMCQMAMFSNAWCFRDZXVOAEZPBYGNWJPJVOIWHGMOXHMTRITWZZTPBYLFXBHYTVUKCVZKKJAZEFTHQFYUCJSIAMUNNZZLREBKHOJDGPUESRADAJGGJCLPISELRCQFWCGGIHICXEYXXHPDSIOYQSOJQRUEKFBOK");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 50496U;
    msg.plan.set(tmp_msg_0);
    msg.info.assign("QQKZUZFDCVLEGZDFTZRIJUPKOSNOBLLXJWMYBESTBRDWJBWEAGSHPEJPUNOIVBFXPMENQJUOEKTYAPOAGOVHLBJGLWFMUMTNKKQLRPXNOIPCCOQLFRNLXECLJIKJHZJPSQXYBVEHNGSGASDYFBYSGKMMYBWZTZBFWHSAGUANWKACICIKTDVYNMMHXRMLIQFYRQDNHAWEDVSWTVTXIFAPEROCDV");

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
    msg.setTimeStamp(0.403661083794);
    msg.setSource(40377U);
    msg.setSourceEntity(220U);
    msg.setDestination(24347U);
    msg.setDestinationEntity(246U);
    msg.state = 141U;
    msg.plan_id = 49128U;
    msg.wpt_id = 70U;
    msg.settings_chk = 33235U;

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
    msg.setTimeStamp(0.098239685828);
    msg.setSource(13740U);
    msg.setSourceEntity(170U);
    msg.setDestination(605U);
    msg.setDestinationEntity(142U);
    msg.state = 43U;
    msg.plan_id = 29639U;
    msg.wpt_id = 37U;
    msg.settings_chk = 11565U;

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
    msg.setTimeStamp(0.351251442501);
    msg.setSource(59436U);
    msg.setSourceEntity(174U);
    msg.setDestination(57204U);
    msg.setDestinationEntity(42U);
    msg.state = 242U;
    msg.plan_id = 24430U;
    msg.wpt_id = 169U;
    msg.settings_chk = 18914U;

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
    msg.setTimeStamp(0.854507063124);
    msg.setSource(22844U);
    msg.setSourceEntity(163U);
    msg.setDestination(35534U);
    msg.setDestinationEntity(230U);
    msg.uid = 23U;
    msg.frag_number = 79U;
    msg.num_frags = 246U;
    const char tmp_msg_0[] = {-128, -28, 88, -120, -18, -12, -19, -55, -74, -34, 108, -95, -33, -122, 126, -112, 17, 75, -55, 69, -22, 49, -6, 99, -124, -105, -1, 123, -16, 66, -51, 23, 100, 63, 85, -108, 67, -64, -28, -36, -106, -73, -8, -85, -108, 47, 59, -31, 1, 104, -9, 118, -16, -40, -65, -18, -29, 68, 22, -125, 1, 46, -57, 92, -84, -103, 19, -37, 51, -97, 124, -9, -85, -105, -57, 111, 111, 89, -73, -26, 114, -6, 89, -34, 7, 15, -110, 21, 67, -35, 58, 49, -101, -71, -35, 72, 62, -40, -30, -58, 110, 70, 86, -90, 7, -104, -60, 100, 57, -98, 1, 51, 84, -35, 95, -94, 41, -9, -124, 56, 54, -2, -53, 44, 81, 47, -37, 25, -126, -41, -3, 103, -33, -121, 125, -104, -61, -55, -127, -38, -121, 108, -19, -21, -102, 11, 125, -68, -112, 6, 92, 109, -29, -67, -38, -5, -76, -8, 9, -70, 109, 16, -107, -28, -46, 23, 21, -8, -89, -54, 70, 119, 122, -106, 23, 13, 7, 51, 70, -122, -38, -101, 107, -19, -79, 126, -101, 4, 36, 7, 14, 27, -95, -100, -100, -20, 26, 99, 103, 48, -47, 113, 2, -120, 1, 28, -75, -115, 120, -35, -22, 87, 103, -64, -4, 117, 69, -47, 100, -58, 75, -26, 49, 112, 45, -92, -17, -98, -56, -9, -107, -15, -83, 91, -8, 50, -31, -106, -18, -51, 33, 84, 117, 74, 89, -109, 71, 106, 97};
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
    msg.setTimeStamp(0.954097229884);
    msg.setSource(61654U);
    msg.setSourceEntity(38U);
    msg.setDestination(15264U);
    msg.setDestinationEntity(43U);
    msg.uid = 102U;
    msg.frag_number = 53U;
    msg.num_frags = 23U;
    const char tmp_msg_0[] = {55, -97, 84, 115, 37, 111, -39, 12, -74, -103, 6, -57, 6, -92, -107, 74, 65, -115, 17, -70, -55, 62, 99, -120, -57, -79, -16, -103, -122, -91, -89, 35, -72, 114, 41, 31, 41, -76, 18, 93, 32, 35, 10, -103, -119, 116, 1, 101, 63, -33, 39, -117, -8, 111, -113, -97, 95, 47, 28, -84, 77, 89, 103, -117, -29, -16, 60, 0, 57, -90, -90, -93, 94, 109, 67, 57, 11, -84, 5, -85, -30, 106, 71, 47, 16, 56, 83, -87, 6, 84, 84, 92, -50, -32, 2, -78, 90, -10, -101, -101, 94, -65, 39, -47, -102, -18, -56, 32, -64, -34, 52, -124, 50, 38, -70, 93, 59, 70, 48, -41, -14, -3, 113, 71, -72, 87, 110, 123, -98, 124, 83, -5, -87, -101, -112, 126, 75, -27, 47, -102, -14, 85, -114, -33, 38, -121, -26, 126, -29, 65, 124, -96, 11, 66, 83, 93, 85, 24, -62, 57, -27, -7, 61, -68, -17, 101, 92, 92, -118, -112, -117, 38, 94, 52, -61, -54, 110, 53, 31, 18, 3, 33, -88, -106, -23, -58, 13, -65, -93, -55, -66, -100, 117, -4, -41, -35, -36, 39, -105, 76, 98, 35, 108, -86, 70, 126, 80, -122, -1, 82, -5, -30, -30, 43, -73, -127, -58, 100, 82, -51, 103, -51, -120, -88, -30, 126, 26, -82, 68, -50, -89, -128, -90, -43, 8, 116, -128, -26, -112, 67, -76, 104, -51, -96, 106, 101, -17, -116, -124, -37};
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
    msg.setTimeStamp(0.0160399567835);
    msg.setSource(58156U);
    msg.setSourceEntity(72U);
    msg.setDestination(37619U);
    msg.setDestinationEntity(68U);
    msg.uid = 83U;
    msg.frag_number = 70U;
    msg.num_frags = 34U;
    const char tmp_msg_0[] = {44, 18, 85, -14, -66, -11, -65, 36, 125, -54, -33, -6, 78, 90, -65, 83, 1, -72, 109, 84, 63, 90, 45, 20, -66, -25, -28, 104, 113, 103, 65, -117, 71, -97, 111, -83, -120, 10, -97, 28, 97, 30, -3, -89, 10, 18, 45, 28, -32, 41, 8, -107, 20, 24, -42, -111, -28, -34, 12, -60, 11, -97, -74, 37, -38, -49, -75, 49, -26, 39, -10, 17, 61, 62, 92, 25, -74, 77, 38, -9, 103, 7, 34, 92, 22, -63, -126, 0, -25, 31, 64, -15, 1, 4, 100, -44, -69, -56, -123, -88, -49, -103, 23, 76, -80, 15, -110, -91, 50, -3, -15, 93, -48, -74, -87, -122, -96, 94, -48, -52};
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
    msg.setTimeStamp(0.601433636349);
    msg.setSource(16415U);
    msg.setSourceEntity(76U);
    msg.setDestination(42216U);
    msg.setDestinationEntity(230U);
    msg.content_type.assign("XVLTSRSNOAYKZIZGASMCDQJKZICND");
    const char tmp_msg_0[] = {-102, 34, -37, -66, -30, -8, -14, 19, 100, -63, -29, -71, -26, -52, -95, 83, -37, 4, -46, 86, -11, -6, 117, -103, 118, -16, 52, -73, 51, 25, 121, -38, 46, 39, 89, -51, -127, -96, -27, 36, -127, -80, 111, -89, 22, -57, -3, 37, 98, 14, 81, -124, 96, -106, -5, -30, -40, -42, 116, 4, -90, -118, 118, -84, -57, -8, 58, 100, 44, 75, 86, 104, 72, 38, 23, -73, 90, 4, 86, 8, -33, -118, -87, 64, -91, 48, -116, 22, 51, 43, 87, -95, -63, -68, -64, 33, -77, -56, 79, 51, 32, -58, -69, -24, 26, 33, -109, -53, -19, -126, -4, -30, 119, 124, -67, 80, -7, -53, -11, -36, -73, 59, -109, 94, -15, 111, 13, 28, 9, 123, 45, 101, -59, 42, -110, 5, 39, 98, -91, 111, 18, -11, 63, 55, -97, 37, -119, 61, 75, -42, 50, -123, -118, -99, 89, 48, -104, 22, -84, -27, -16, -18, -47, -67, 78, 81, -85, -43, -34, 119, 19, 82, -61, 2, 47, -101, -98, 47, -121, 1, -111, -123, -111, 29, 105, -19, -93, -32, -6, -120, 90, 111, -39, 20, -99, -124, 111, 31, 95, -54, -85, -121, 25, 39, 97, 79, 2, -6, -60, -39, -1, -71, -124, 18, 21, 40, 13, 102, -86, -33, -103, -119, -106, 84, -58, -75, -60, 62, 20, 68, 1, -93, -55, -71, 26, -86, -43, -19, 45};
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
    msg.setTimeStamp(0.746561866508);
    msg.setSource(6586U);
    msg.setSourceEntity(113U);
    msg.setDestination(55326U);
    msg.setDestinationEntity(205U);
    msg.content_type.assign("VZBWFLKNKSVOQWYEXKHVHIEQOZFFWOQZVZGWHYJDUGTYRRRMCPVOINDFMV");
    const char tmp_msg_0[] = {-111, 50, 58, -48, -35, -125, 4, -115, -12, -5, 23, -92, -23, -47, -62, -46, -123, -123, -114, -77, 8, -56, -118, -75, -8, -126, 31, 73, 96, 30, -48, 104, -2, -108, -87, 22, 29, -27, 41, 119, 125, 37, 22, -24, 25, -64, -33, 114, -2, 18, -42, 25, -117, -94, 15, -79, 18, -26, -121, -4, -60, -29, -93, -64, 125, -68, 96, -20, -69, 77, -73, 24, -64, 17, -74, -90, -55, 120, -41, -45, -57, -14, -10, 93, -80, -101, -74, 52, -82, -57, -69, 87, 42, -113, -110, 98, 62, -44, 121, -11, 52, -100, 26, 70, -2, 42, 64, 49, -5, 126, -29, 45, 50, 114, -121, 113, -16, -97, -86, 37, -97, 30, 119, -60, 120, 40, 57, 45, -44, -70, 65, 81, 57, 34, 68, -43, -103, 122, -49, 45, 51, 75, -45, -33, 48, 87, -67, 43, -116, 60, -124, -46, -121, -9, 12, 58, -4, 116, -59, -97, -57, -70, -58, -5, 20, 95, 58, -79, -34, 58, 52, -19, -107, -34};
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
    msg.setTimeStamp(0.0713112526028);
    msg.setSource(52840U);
    msg.setSourceEntity(181U);
    msg.setDestination(3353U);
    msg.setDestinationEntity(139U);
    msg.content_type.assign("NHZWROETSZJAXKRFTGATMZPUCFCVKZTWDKUOFIDOGXNLSBXBPMCRXZOIVGGXTUYWILHGPEYUOIDJKLMAFVHPPKZHYKJAMEJKAZRLEHPQTWCASXTVFDYUBSLNIFQOKQRFYJCWFJLBVENIQTNIAQLBMBSNJQUXXHQODXOBNWLCYAUGUPYSMHEIVNWDPRRWSKGXEJGFHCLN");
    const char tmp_msg_0[] = {68, 93, -125, 36, -44, -75, 86, -74, -35, 55, 106, -4, -9, -74, 10, -128, -110, 20, -124, -96, 90, 115, -97, -36, -125, -58, -85, 83, -62, -80, 34, 1, 12, -41, 18, 17, -1};
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
    msg.setTimeStamp(0.776528060817);
    msg.setSource(45416U);
    msg.setSourceEntity(119U);
    msg.setDestination(27142U);
    msg.setDestinationEntity(209U);

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
    msg.setTimeStamp(0.365739101867);
    msg.setSource(16179U);
    msg.setSourceEntity(235U);
    msg.setDestination(48553U);
    msg.setDestinationEntity(31U);

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
    msg.setTimeStamp(0.482122839041);
    msg.setSource(29528U);
    msg.setSourceEntity(96U);
    msg.setDestination(11492U);
    msg.setDestinationEntity(209U);

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
    msg.setTimeStamp(0.432552981453);
    msg.setSource(45255U);
    msg.setSourceEntity(74U);
    msg.setDestination(53357U);
    msg.setDestinationEntity(8U);
    msg.target = 17171U;
    msg.bearing = 0.945500821825;
    msg.elevation = 0.977685075347;

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
    msg.setTimeStamp(0.503190502885);
    msg.setSource(6591U);
    msg.setSourceEntity(62U);
    msg.setDestination(51873U);
    msg.setDestinationEntity(122U);
    msg.target = 62530U;
    msg.bearing = 0.736190017829;
    msg.elevation = 0.253518451441;

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
    msg.setTimeStamp(0.486775153972);
    msg.setSource(47620U);
    msg.setSourceEntity(24U);
    msg.setDestination(57808U);
    msg.setDestinationEntity(253U);
    msg.target = 35359U;
    msg.bearing = 0.711238260507;
    msg.elevation = 0.053137429924;

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
    msg.setTimeStamp(0.581452593895);
    msg.setSource(25784U);
    msg.setSourceEntity(53U);
    msg.setDestination(22536U);
    msg.setDestinationEntity(225U);
    msg.target = 37880U;
    msg.x = 0.66757826318;
    msg.y = 0.852444319496;
    msg.z = 0.767145716453;

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
    msg.setTimeStamp(0.0921462542635);
    msg.setSource(55608U);
    msg.setSourceEntity(136U);
    msg.setDestination(4887U);
    msg.setDestinationEntity(231U);
    msg.target = 29570U;
    msg.x = 0.726599492293;
    msg.y = 0.979577226252;
    msg.z = 0.119944587174;

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
    msg.setTimeStamp(0.81039868688);
    msg.setSource(38447U);
    msg.setSourceEntity(227U);
    msg.setDestination(51243U);
    msg.setDestinationEntity(147U);
    msg.target = 6963U;
    msg.x = 0.391046976486;
    msg.y = 0.27225955413;
    msg.z = 0.19369407079;

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
    msg.setTimeStamp(0.934382344073);
    msg.setSource(25552U);
    msg.setSourceEntity(141U);
    msg.setDestination(59255U);
    msg.setDestinationEntity(54U);
    msg.target = 29726U;
    msg.lat = 0.406369796938;
    msg.lon = 0.582188818599;
    msg.z_units = 63U;
    msg.z = 0.376538661131;

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
    msg.setTimeStamp(0.978891999874);
    msg.setSource(45277U);
    msg.setSourceEntity(132U);
    msg.setDestination(19683U);
    msg.setDestinationEntity(52U);
    msg.target = 175U;
    msg.lat = 0.285501814878;
    msg.lon = 0.866759533519;
    msg.z_units = 121U;
    msg.z = 0.553043588349;

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
    msg.setTimeStamp(0.36289494374);
    msg.setSource(52627U);
    msg.setSourceEntity(92U);
    msg.setDestination(46524U);
    msg.setDestinationEntity(26U);
    msg.target = 3475U;
    msg.lat = 0.774612000723;
    msg.lon = 0.799964847075;
    msg.z_units = 157U;
    msg.z = 0.399885527043;

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
    msg.setTimeStamp(0.37418416196);
    msg.setSource(13483U);
    msg.setSourceEntity(84U);
    msg.setDestination(23425U);
    msg.setDestinationEntity(129U);
    msg.locale.assign("VGSQSOEIRINFRUCQWUFRRWSNCAVUUXVPSBW");
    const char tmp_msg_0[] = {61, 28, 99, -113, 70, 35, 82, 115, 125, 30, -54, -110, -45, 95, -115, 100, -11, -36, -108, -23, -106, 105, -5, -29, 92, -7, 104, -112, -100, -48, -55, -87, 4, -56, -124, -108, 37, -89, 86, 87, 81, -53, 67, -91, 29, 64, -66, -38, -34, -38, -90, -127, 25, 84, 101, 59, 0, -122, 102, 105, 62, 4, -18, 30, 68, 45, -64, 91, -1, -77, 99, 2, 1, 13, -83, -59, -40, -43, 109, 112, -40, 64, 117, 57, -119, 119, -44, 30, -51, -34, -49, -106, -86, 16, 56};
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
    msg.setTimeStamp(0.849803239603);
    msg.setSource(40435U);
    msg.setSourceEntity(130U);
    msg.setDestination(11836U);
    msg.setDestinationEntity(116U);
    msg.locale.assign("WWOLDEYCGBNRULCIPWIFVFHOWXOTQJJWYSUFYWVSTDFDMWDBNVJRSEXNNCQYGXGISKACLLXRDTDIQDYBJPPBMCYKZMMLHAPHOMOIVNDBEUVNLJZQCUXYKEAKJBPFFUZQMHNMAEEUSRSPITZIOUAQFISFTCWYHRNOBJAOKSGFMSUXHNVJICZMZRJKZQPPLAKXFRXVBVTGZLRJGKIEUGCHYWVHCURB");
    const char tmp_msg_0[] = {46, 85, -30, -40, 34, -76, -114, -96, -20, -48, -88, 2, 111, 58, 92, -99, -15, -13, -102, -51, 21, -71, -9, -82, -13, -112, 97, -105, 82, 23, -63, -124, 65, -38, -114, 84, 70, -101, 97, -9, -77, 93, -19, 40, -7, 116, -3, 11, -44, 1, -126, 88, 70, -73, -35, -10, -126, 83, 42, 77, 96, -5, 17, 3, -94, 90, 2, 81, 114, 53, -105, 108, 42, 64, -94, 54, 37, -87, -122, -88, 101, -17, -90, 27, -75, 100, 52, 89, 64, -92, -93, 91, -115, 15, -77, 19, -29, 9, 31, -128, 122, -6, 91, -84, -34, 44, -83, -118, 95, -97, 59, -21, 56, 78, 66, 107, 55, 68, 24, -103, 60, 123, -71, 56, -85, 14, -50, -52, -114, 71, 39, -106, -88, 79, -21, 80, -85, -56, -38};
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
    msg.setTimeStamp(0.807187536309);
    msg.setSource(30816U);
    msg.setSourceEntity(20U);
    msg.setDestination(53375U);
    msg.setDestinationEntity(198U);
    msg.locale.assign("CXSNDXQFMKDQOEJYMRWILWLXKGNFFEUXHWGCJNZPNVLBYQJJVPZJASUGBGKUOUJJUAXCZKUAHCDATNEOOAYFPICWFTOQLYDSECIXHXVHXVSHBGWYQYVOADKBZIPKYAMOYUDSFKNZQPZHIBERMQMGRNREOFNQEXSRUIPWVWGIKRSCHQMVZVPAJPFNRFUIHCEJKDRZHCWEBTYAVBLDGLBPMOJQ");
    const char tmp_msg_0[] = {4, -121, -107, -116, -67, -9, 11, -64, 38, 96, 97, -94, -110, 105, -52, 126, 52, -97, 120, 77, 118, -61, -128, -31, -14, 117, 56, 104, -8, -39, -99, 9, -42, -85, 87, 116, -89, -54, -89, 110, -43, -72, 93, -31, 118, -85, 39, 93, -79, -110};
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
    msg.setTimeStamp(0.525839211505);
    msg.setSource(1493U);
    msg.setSourceEntity(163U);
    msg.setDestination(59915U);
    msg.setDestinationEntity(99U);

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
    msg.setTimeStamp(0.107039772224);
    msg.setSource(34678U);
    msg.setSourceEntity(82U);
    msg.setDestination(52242U);
    msg.setDestinationEntity(184U);

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
    msg.setTimeStamp(0.858397370417);
    msg.setSource(23490U);
    msg.setSourceEntity(144U);
    msg.setDestination(40970U);
    msg.setDestinationEntity(84U);

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
    msg.setTimeStamp(0.0196782042969);
    msg.setSource(43068U);
    msg.setSourceEntity(144U);
    msg.setDestination(50581U);
    msg.setDestinationEntity(73U);
    msg.camid = 177U;
    msg.x = 3836U;
    msg.y = 51816U;

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
    msg.setTimeStamp(0.000137697326008);
    msg.setSource(44886U);
    msg.setSourceEntity(173U);
    msg.setDestination(42001U);
    msg.setDestinationEntity(7U);
    msg.camid = 58U;
    msg.x = 32533U;
    msg.y = 38800U;

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
    msg.setTimeStamp(0.491051744243);
    msg.setSource(35427U);
    msg.setSourceEntity(53U);
    msg.setDestination(27283U);
    msg.setDestinationEntity(47U);
    msg.camid = 155U;
    msg.x = 41381U;
    msg.y = 17574U;

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
    msg.setTimeStamp(0.525140684107);
    msg.setSource(20884U);
    msg.setSourceEntity(179U);
    msg.setDestination(13973U);
    msg.setDestinationEntity(87U);
    msg.camid = 209U;
    msg.x = 36515U;
    msg.y = 22257U;

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
    msg.setTimeStamp(0.320684033876);
    msg.setSource(21044U);
    msg.setSourceEntity(150U);
    msg.setDestination(1221U);
    msg.setDestinationEntity(183U);
    msg.camid = 3U;
    msg.x = 18253U;
    msg.y = 9728U;

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
    msg.setTimeStamp(0.479474988661);
    msg.setSource(45884U);
    msg.setSourceEntity(49U);
    msg.setDestination(17958U);
    msg.setDestinationEntity(168U);
    msg.camid = 30U;
    msg.x = 28236U;
    msg.y = 25131U;

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
    msg.setTimeStamp(0.530559362011);
    msg.setSource(44353U);
    msg.setSourceEntity(180U);
    msg.setDestination(1786U);
    msg.setDestinationEntity(254U);
    msg.tracking = 248U;
    msg.lat = 0.382311331922;
    msg.lon = 0.373961841147;
    msg.x = 0.905112757868;
    msg.y = 0.707272764592;
    msg.z = 0.625170699949;

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
    msg.setTimeStamp(0.155217343747);
    msg.setSource(4680U);
    msg.setSourceEntity(117U);
    msg.setDestination(55322U);
    msg.setDestinationEntity(144U);
    msg.tracking = 30U;
    msg.lat = 0.705317924067;
    msg.lon = 0.554893713018;
    msg.x = 0.237022974567;
    msg.y = 0.215564989758;
    msg.z = 0.772716269093;

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
    msg.setTimeStamp(0.699347441157);
    msg.setSource(55329U);
    msg.setSourceEntity(64U);
    msg.setDestination(55858U);
    msg.setDestinationEntity(92U);
    msg.tracking = 203U;
    msg.lat = 0.203801001652;
    msg.lon = 0.32277137481;
    msg.x = 0.503452653021;
    msg.y = 0.145017480761;
    msg.z = 0.331055887182;

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
    msg.setTimeStamp(0.714111006194);
    msg.setSource(10783U);
    msg.setSourceEntity(143U);
    msg.setDestination(15599U);
    msg.setDestinationEntity(217U);
    msg.target.assign("XTLYDVKGOISQQJKGVBAEWGUCIEYRLTYLFVDLKEJNJVKUZHAHCRFSATZDDCIXRLOPPVEBHONCAREJESNQKGJDZMWNRZAUOVEGJPDBFYQAMVXXUXUPSBLNRENCYBWGJKNTUSSZVGWARMQKIQNPZTWTFTHYCBYCZBUTTXBNOHFWEDBLIBLSQWHZEMPRIKIFKAY");
    msg.lbearing = 0.0690221166845;
    msg.lelevation = 0.647302119686;
    msg.bearing = 0.8129104877;
    msg.elevation = 0.0210531301257;
    msg.phi = 0.688282337713;
    msg.theta = 0.67503850736;
    msg.psi = 0.482905792727;
    msg.accuracy = 0.647823167641;

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
    msg.setTimeStamp(0.37288860328);
    msg.setSource(28051U);
    msg.setSourceEntity(178U);
    msg.setDestination(9922U);
    msg.setDestinationEntity(200U);
    msg.target.assign("WIYHLOETVHNKSCVUPAIJGXAKWCBWOUPYHLOADRKIBDMSZWFFQJQIVQYJVBOOBOUKFBVBHYPSNIWGFH");
    msg.lbearing = 0.779608468267;
    msg.lelevation = 0.661385240787;
    msg.bearing = 0.912728228939;
    msg.elevation = 0.218977012016;
    msg.phi = 0.532803516826;
    msg.theta = 0.756136927635;
    msg.psi = 0.683274244471;
    msg.accuracy = 0.248884906599;

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
    msg.setTimeStamp(0.204255618487);
    msg.setSource(63329U);
    msg.setSourceEntity(10U);
    msg.setDestination(11651U);
    msg.setDestinationEntity(113U);
    msg.target.assign("TNNFYCOGHJHRPSFDLPAXDIZIJKEIMWLFVKYQJBJWPVVRWWWUIWMGATVHXKURMPKJFTFARZUHYNPAQTCCEBNXUHQCCZCOYSWDWSDEWGBKGUSAYUXZNJST");
    msg.lbearing = 0.634131086443;
    msg.lelevation = 0.213708223812;
    msg.bearing = 0.428103230537;
    msg.elevation = 0.78121579036;
    msg.phi = 0.824590683369;
    msg.theta = 0.142021889772;
    msg.psi = 0.895128798555;
    msg.accuracy = 0.316001009731;

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
    msg.setTimeStamp(0.554170246715);
    msg.setSource(57407U);
    msg.setSourceEntity(19U);
    msg.setDestination(46589U);
    msg.setDestinationEntity(141U);
    msg.target.assign("NJAYMIKNNDPCCJFCBPUXCXJFZVUAMVGKWRTGTCGOAWVBNMWUHAUFUNSHAOWUDMIFAHTZYOHEALKBQQRIPSHIWTLFGDICLXSUE");
    msg.x = 0.773707163885;
    msg.y = 0.383063464047;
    msg.z = 0.591985040011;
    msg.n = 0.741137197691;
    msg.e = 0.578578324545;
    msg.d = 0.973084315581;
    msg.phi = 0.336294951013;
    msg.theta = 0.347388898372;
    msg.psi = 0.534626471701;
    msg.accuracy = 0.643355745456;

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
    msg.setTimeStamp(0.922253196458);
    msg.setSource(33638U);
    msg.setSourceEntity(135U);
    msg.setDestination(23729U);
    msg.setDestinationEntity(239U);
    msg.target.assign("QMHCYVNXRCCTELJLBPPHBXGPWGQPZPOLVNZYYZV");
    msg.x = 0.00754262509227;
    msg.y = 0.325258650538;
    msg.z = 0.789494977103;
    msg.n = 0.599176700497;
    msg.e = 0.738236605195;
    msg.d = 0.88751900396;
    msg.phi = 0.542206581143;
    msg.theta = 0.814896824487;
    msg.psi = 0.0599629811039;
    msg.accuracy = 0.705285220274;

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
    msg.setTimeStamp(0.129737209592);
    msg.setSource(19620U);
    msg.setSourceEntity(62U);
    msg.setDestination(38552U);
    msg.setDestinationEntity(110U);
    msg.target.assign("QDICAENPJXWNVAHGKCAZYJKUPUVLDRSOWDMFUSDQROAMOQPTCIUEEGJIRXWKFRDRKFOFWGFBKNLFKODJGVSWEKZHDZUSFAJYZXPALHZKBTHRJMTLBNYPWNTJECMIHBUQJGYHSJGVNDKXBZLWVCRFAXYITCYACQDNXNFWQVETBQPSVXSCMIAPTVYLBRP");
    msg.x = 0.911357964049;
    msg.y = 0.413272842392;
    msg.z = 0.944831505227;
    msg.n = 0.60801969404;
    msg.e = 0.634976956692;
    msg.d = 0.0946367620391;
    msg.phi = 0.921404398466;
    msg.theta = 0.290279011713;
    msg.psi = 0.773618068639;
    msg.accuracy = 0.73546147323;

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
    msg.setTimeStamp(0.507666011735);
    msg.setSource(57972U);
    msg.setSourceEntity(186U);
    msg.setDestination(65249U);
    msg.setDestinationEntity(92U);
    msg.target.assign("PIHCYHLVTIXIGPAQTUBHWEYFGMTACZPCKSZIIQZDHQBNOQTKLFXJUGEDEUVMUGDDRGQVOSXLIVQKWGNDOOOAULZEYASDPLCTRWFKW");
    msg.lat = 0.886652804161;
    msg.lon = 0.087480721825;
    msg.z_units = 162U;
    msg.z = 0.889345447892;
    msg.accuracy = 0.973584330071;

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
    msg.setTimeStamp(0.473566863846);
    msg.setSource(37675U);
    msg.setSourceEntity(174U);
    msg.setDestination(3795U);
    msg.setDestinationEntity(228U);
    msg.target.assign("USQOMGUYFLJKSGDXEQCCLTBHIZNURWYAOPGNKZIBAZHBZEYMDPGTMJSSYJWEKIYPKUTPZWTKVSHOIWIZCCVIMGARKDXONEULEQFPJFEVPCEGNNWMHWMYNQSULXPMDCHJSKYIHCQGYKXHDCLHBFVDIUAXLFWZIWDVIEXJHFGLXUKDVONGVFSFUVTQJCOJNMXATNZFT");
    msg.lat = 0.0734745999326;
    msg.lon = 0.941363915915;
    msg.z_units = 113U;
    msg.z = 0.10687738913;
    msg.accuracy = 0.781663203484;

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
    msg.setTimeStamp(0.731145089235);
    msg.setSource(17639U);
    msg.setSourceEntity(47U);
    msg.setDestination(45740U);
    msg.setDestinationEntity(77U);
    msg.target.assign("BNECANNRPDPJZIRWQTATFBXIHWHLURAHMRTAGYXMJKSNERWPIUXSFHVYBMOCIEVGKMILBWPDTOPUONAMEKVUCHOEODVLRYFURFBTVWJXIKYQHCZYYJSW");
    msg.lat = 0.0904651238502;
    msg.lon = 0.6370520848;
    msg.z_units = 41U;
    msg.z = 0.0291933859182;
    msg.accuracy = 0.135504663726;

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
    msg.setTimeStamp(0.777818977711);
    msg.setSource(15168U);
    msg.setSourceEntity(236U);
    msg.setDestination(61813U);
    msg.setDestinationEntity(184U);
    msg.name.assign("VIZEQSMIORBQHNPYYRVMOQRGXQKXFFXXAQOGCUZUXIWZISGXFCBOZJSNNBEPKVSATJIUFOWTWKZWAHTRR");
    msg.lat = 0.448622509492;
    msg.lon = 0.243354126186;
    msg.z = 0.452178642101;
    msg.z_units = 197U;

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
    msg.setTimeStamp(0.66572350798);
    msg.setSource(40804U);
    msg.setSourceEntity(140U);
    msg.setDestination(15953U);
    msg.setDestinationEntity(199U);
    msg.name.assign("IPGHWBBCTHLAEAZOPYGPAWSPTSKKGUZCFCQIXLQGNDUXYBSYQSMXRUCBSVDKBJYPVFLEPLJTWFOZMSMTTZLUVZAVEPANUGYOVZ");
    msg.lat = 0.563072858013;
    msg.lon = 0.146961750901;
    msg.z = 0.948973444879;
    msg.z_units = 153U;

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
    msg.setTimeStamp(0.119673248959);
    msg.setSource(14570U);
    msg.setSourceEntity(65U);
    msg.setDestination(35330U);
    msg.setDestinationEntity(182U);
    msg.name.assign("BNSQENYPMWGOJEWEVPYCDOSYWTMEVPIORIRUSDDQCVFFEWRRIIQJNFJTWAONPJQSWHHDLJCHZIXLKHQTVMNCGSGERQUZFFYJDCDMJSKHFKWAIPLTBZBOWYXGUSPLMLZMOBGIFZAUXBDGCQVTXBIXVPHECDKAIUMGHORTLYWAXSRFTTRLYZOKEFOAQHXUJJKLSSLUMBNZIKTBNCKNHQEVMURAOVYXZGKFCNNBVGAVPW");
    msg.lat = 0.722521399407;
    msg.lon = 0.650520145632;
    msg.z = 0.809310907233;
    msg.z_units = 202U;

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
    msg.setTimeStamp(0.36302474114);
    msg.setSource(199U);
    msg.setSourceEntity(179U);
    msg.setDestination(9770U);
    msg.setDestinationEntity(166U);
    msg.op = 132U;

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
    msg.setTimeStamp(0.415649183595);
    msg.setSource(65371U);
    msg.setSourceEntity(233U);
    msg.setDestination(556U);
    msg.setDestinationEntity(174U);
    msg.op = 31U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("MYOGHBBXPOVOXJTNLJCZEJNKZPDJQVLNSSVVS");
    tmp_msg_0.lat = 0.167317452588;
    tmp_msg_0.lon = 0.80168262699;
    tmp_msg_0.z = 0.0505766273586;
    tmp_msg_0.z_units = 147U;
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
    msg.setTimeStamp(0.33753351576);
    msg.setSource(59482U);
    msg.setSourceEntity(156U);
    msg.setDestination(5253U);
    msg.setDestinationEntity(173U);
    msg.op = 125U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("OVPRYTIRGFHOXNQHLTMKCQPXNUOXRBRWFUDGIMICPVIBYYJWFANSXTCEWINOUEJSZLMLJQQHCZLKDABLXAKA");
    tmp_msg_0.lat = 0.723448474552;
    tmp_msg_0.lon = 0.941595077228;
    tmp_msg_0.z = 0.249712539257;
    tmp_msg_0.z_units = 71U;
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
    msg.setTimeStamp(0.0475126693145);
    msg.setSource(25284U);
    msg.setSourceEntity(121U);
    msg.setDestination(55504U);
    msg.setDestinationEntity(145U);
    msg.value = 0.816312466826;
    msg.type = 188U;

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
    msg.setTimeStamp(0.92841090791);
    msg.setSource(64555U);
    msg.setSourceEntity(223U);
    msg.setDestination(5829U);
    msg.setDestinationEntity(203U);
    msg.value = 0.31554170325;
    msg.type = 131U;

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
    msg.setTimeStamp(0.886618426772);
    msg.setSource(6187U);
    msg.setSourceEntity(244U);
    msg.setDestination(3067U);
    msg.setDestinationEntity(196U);
    msg.value = 0.34580440534;
    msg.type = 52U;

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
    msg.setTimeStamp(0.575635642641);
    msg.setSource(42085U);
    msg.setSourceEntity(253U);
    msg.setDestination(18127U);
    msg.setDestinationEntity(82U);
    msg.value = 0.424192581166;

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
    msg.setTimeStamp(0.683152375571);
    msg.setSource(1655U);
    msg.setSourceEntity(71U);
    msg.setDestination(52716U);
    msg.setDestinationEntity(61U);
    msg.value = 0.504383694144;

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
    msg.setTimeStamp(0.822157838279);
    msg.setSource(48543U);
    msg.setSourceEntity(106U);
    msg.setDestination(13040U);
    msg.setDestinationEntity(56U);
    msg.value = 0.645801685038;

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
    msg.setTimeStamp(0.570939167405);
    msg.setSource(21983U);
    msg.setSourceEntity(49U);
    msg.setDestination(27210U);
    msg.setDestinationEntity(245U);
    msg.timestamp_last_service = 0.0262919073928;
    msg.time_next_service = 0.936023525853;
    msg.time_motor_next_service = 0.859688181905;
    msg.time_idle_ground = 0.593309856568;
    msg.time_idle_air = 0.549997855807;
    msg.time_idle_water = 0.217316115781;
    msg.time_idle_underwater = 0.328405592228;
    msg.time_idle_unknown = 0.120774857011;
    msg.time_motor_ground = 0.634746758417;
    msg.time_motor_air = 0.87030065388;
    msg.time_motor_water = 0.773436577803;
    msg.time_motor_underwater = 0.306156387031;
    msg.time_motor_unknown = 0.0640489643348;
    msg.rpm_min = 13422;
    msg.rpm_max = -11941;
    msg.depth_max = 0.269555826557;

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
    msg.setTimeStamp(0.877570187665);
    msg.setSource(17541U);
    msg.setSourceEntity(44U);
    msg.setDestination(56775U);
    msg.setDestinationEntity(73U);
    msg.timestamp_last_service = 0.414886281058;
    msg.time_next_service = 0.36104937061;
    msg.time_motor_next_service = 0.0256343738259;
    msg.time_idle_ground = 0.177684395672;
    msg.time_idle_air = 0.538491062325;
    msg.time_idle_water = 0.450816190038;
    msg.time_idle_underwater = 0.874259125383;
    msg.time_idle_unknown = 0.0368547638098;
    msg.time_motor_ground = 0.0958721630942;
    msg.time_motor_air = 0.279224661613;
    msg.time_motor_water = 0.487500487;
    msg.time_motor_underwater = 0.065040470693;
    msg.time_motor_unknown = 0.247020715275;
    msg.rpm_min = -11802;
    msg.rpm_max = 345;
    msg.depth_max = 0.141295555711;

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
    msg.setTimeStamp(0.0358536415076);
    msg.setSource(8294U);
    msg.setSourceEntity(98U);
    msg.setDestination(64378U);
    msg.setDestinationEntity(223U);
    msg.timestamp_last_service = 0.335385118214;
    msg.time_next_service = 0.906977268749;
    msg.time_motor_next_service = 0.320842004934;
    msg.time_idle_ground = 0.0137943800933;
    msg.time_idle_air = 0.146122922577;
    msg.time_idle_water = 0.288720003592;
    msg.time_idle_underwater = 0.622608614018;
    msg.time_idle_unknown = 0.18598861452;
    msg.time_motor_ground = 0.982607609521;
    msg.time_motor_air = 0.852393146928;
    msg.time_motor_water = 0.824268089845;
    msg.time_motor_underwater = 0.894041780092;
    msg.time_motor_unknown = 0.806501730325;
    msg.rpm_min = -25627;
    msg.rpm_max = 10346;
    msg.depth_max = 0.460429661863;

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
    msg.setTimeStamp(0.79397075114);
    msg.setSource(3386U);
    msg.setSourceEntity(231U);
    msg.setDestination(28700U);
    msg.setDestinationEntity(177U);
    msg.severity = 131U;
    msg.text.assign("NHUPDLKJHCEKLEQDDIBKDMV");

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
    msg.setTimeStamp(0.246687073135);
    msg.setSource(26343U);
    msg.setSourceEntity(235U);
    msg.setDestination(41389U);
    msg.setDestinationEntity(193U);
    msg.severity = 161U;
    msg.text.assign("BHWRCBERYKKIODLXUAAKQXIPSSMZDKJXSQUYO");

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
    msg.setTimeStamp(0.817436955695);
    msg.setSource(41581U);
    msg.setSourceEntity(222U);
    msg.setDestination(51273U);
    msg.setDestinationEntity(55U);
    msg.severity = 108U;
    msg.text.assign("XWHGLDFUZMPIDLATIGPGEYUXQKJCLVUIRPLWXAHJJJYSKTT");

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
    msg.setTimeStamp(0.275357429341);
    msg.setSource(2222U);
    msg.setSourceEntity(100U);
    msg.setDestination(5609U);
    msg.setDestinationEntity(155U);
    msg.channel = -30;
    msg.value = 1014808236;
    msg.gain = 231U;

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
    msg.setTimeStamp(0.297833596982);
    msg.setSource(29328U);
    msg.setSourceEntity(45U);
    msg.setDestination(46698U);
    msg.setDestinationEntity(220U);
    msg.channel = -85;
    msg.value = 1817499251;
    msg.gain = 2U;

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
    msg.setTimeStamp(0.604155817911);
    msg.setSource(23573U);
    msg.setSourceEntity(85U);
    msg.setDestination(23416U);
    msg.setDestinationEntity(39U);
    msg.channel = -58;
    msg.value = -1233301103;
    msg.gain = 247U;

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
    msg.setTimeStamp(0.120971068378);
    msg.setSource(38849U);
    msg.setSourceEntity(147U);
    msg.setDestination(49855U);
    msg.setDestinationEntity(126U);
    msg.ch01 = 0.257992019847;
    msg.ch02 = 0.951052949678;
    msg.ch03 = 0.856710054175;
    msg.ch04 = 0.167749460804;
    msg.ch05 = 0.817103509446;
    msg.ch06 = 0.802157586294;
    msg.ch07 = 0.1345619674;
    msg.ch08 = 0.326570271177;
    msg.ch09 = 0.00396734279775;
    msg.ch10 = 0.211638470949;
    msg.ch11 = 0.825165157746;
    msg.ch12 = 0.241064409131;
    msg.ch13 = 0.732919477742;
    msg.ch14 = 0.805466648147;
    msg.ch15 = 0.579615691069;
    msg.ch16 = 0.371177108889;

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
    msg.setTimeStamp(0.0986025241217);
    msg.setSource(17098U);
    msg.setSourceEntity(15U);
    msg.setDestination(65136U);
    msg.setDestinationEntity(36U);
    msg.ch01 = 0.379003874514;
    msg.ch02 = 0.394473049485;
    msg.ch03 = 0.603506294025;
    msg.ch04 = 0.25719121132;
    msg.ch05 = 0.726095538818;
    msg.ch06 = 0.185869367913;
    msg.ch07 = 0.440805766476;
    msg.ch08 = 0.428697368027;
    msg.ch09 = 0.887221260469;
    msg.ch10 = 0.250488756177;
    msg.ch11 = 0.401837509734;
    msg.ch12 = 0.971899488659;
    msg.ch13 = 0.227738744217;
    msg.ch14 = 0.36645608799;
    msg.ch15 = 0.330754378212;
    msg.ch16 = 0.76035322649;

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
    msg.setTimeStamp(0.856903232717);
    msg.setSource(11536U);
    msg.setSourceEntity(28U);
    msg.setDestination(62323U);
    msg.setDestinationEntity(62U);
    msg.ch01 = 0.250214572602;
    msg.ch02 = 0.65784660718;
    msg.ch03 = 0.23264437793;
    msg.ch04 = 0.441352966753;
    msg.ch05 = 0.910133532431;
    msg.ch06 = 0.644827877146;
    msg.ch07 = 0.294409888993;
    msg.ch08 = 0.408685247454;
    msg.ch09 = 0.826927873625;
    msg.ch10 = 0.0730518646988;
    msg.ch11 = 0.318195401575;
    msg.ch12 = 0.0603753217497;
    msg.ch13 = 0.54946458325;
    msg.ch14 = 0.493869699068;
    msg.ch15 = 0.555228459164;
    msg.ch16 = 0.999951916125;

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
    msg.setTimeStamp(0.398809621278);
    msg.setSource(59946U);
    msg.setSourceEntity(120U);
    msg.setDestination(24442U);
    msg.setDestinationEntity(237U);
    msg.time = 0.485578645477;
    msg.ang = 0.418610699178;

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
    msg.setTimeStamp(0.670222487428);
    msg.setSource(504U);
    msg.setSourceEntity(137U);
    msg.setDestination(17037U);
    msg.setDestinationEntity(148U);
    msg.time = 0.0524695343842;
    msg.ang = 0.0333214123495;

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
    msg.setTimeStamp(0.488977004398);
    msg.setSource(22660U);
    msg.setSourceEntity(214U);
    msg.setDestination(41634U);
    msg.setDestinationEntity(56U);
    msg.time = 0.854451789961;
    msg.ang = 0.19513706592;

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
    msg.setTimeStamp(0.335765221887);
    msg.setSource(15331U);
    msg.setSourceEntity(113U);
    msg.setDestination(58492U);
    msg.setDestinationEntity(135U);
    msg.value = 0.0126261259423;

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
    msg.setTimeStamp(0.795536104761);
    msg.setSource(62774U);
    msg.setSourceEntity(202U);
    msg.setDestination(38290U);
    msg.setDestinationEntity(36U);
    msg.value = 0.369986131599;

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
    msg.setTimeStamp(0.555911533771);
    msg.setSource(34209U);
    msg.setSourceEntity(42U);
    msg.setDestination(15236U);
    msg.setDestinationEntity(173U);
    msg.value = 0.0771200765995;

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
    msg.setTimeStamp(0.589973014055);
    msg.setSource(49803U);
    msg.setSourceEntity(120U);
    msg.setDestination(9854U);
    msg.setDestinationEntity(94U);
    msg.value = 0.204410678237;

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
    msg.setTimeStamp(0.41514943565);
    msg.setSource(56197U);
    msg.setSourceEntity(53U);
    msg.setDestination(19801U);
    msg.setDestinationEntity(169U);
    msg.value = 0.253945815638;

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
    msg.setTimeStamp(0.853276972655);
    msg.setSource(36322U);
    msg.setSourceEntity(134U);
    msg.setDestination(2436U);
    msg.setDestinationEntity(187U);
    msg.value = 0.438368576556;

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
    msg.setTimeStamp(0.527512643573);
    msg.setSource(7605U);
    msg.setSourceEntity(206U);
    msg.setDestination(39892U);
    msg.setDestinationEntity(254U);
    msg.value = 0.225725363172;

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
    msg.setTimeStamp(0.162400422913);
    msg.setSource(14296U);
    msg.setSourceEntity(184U);
    msg.setDestination(46384U);
    msg.setDestinationEntity(117U);
    msg.value = 0.158796456814;

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
    msg.setTimeStamp(0.543102110455);
    msg.setSource(11760U);
    msg.setSourceEntity(8U);
    msg.setDestination(44174U);
    msg.setDestinationEntity(14U);
    msg.value = 0.88475330305;

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
    msg.setTimeStamp(0.660224174484);
    msg.setSource(5478U);
    msg.setSourceEntity(151U);
    msg.setDestination(17574U);
    msg.setDestinationEntity(156U);
    msg.l2 = 57;
    msg.l3 = 68;
    msg.iridium = 33;
    msg.modem = -20;
    msg.pumps = -56;
    msg.vhf = 24;

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
    msg.setTimeStamp(0.269215995563);
    msg.setSource(16478U);
    msg.setSourceEntity(96U);
    msg.setDestination(42905U);
    msg.setDestinationEntity(117U);
    msg.l2 = -11;
    msg.l3 = -127;
    msg.iridium = -73;
    msg.modem = 18;
    msg.pumps = -56;
    msg.vhf = 91;

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
    msg.setTimeStamp(0.350403853179);
    msg.setSource(6591U);
    msg.setSourceEntity(194U);
    msg.setDestination(18216U);
    msg.setDestinationEntity(89U);
    msg.l2 = 65;
    msg.l3 = 61;
    msg.iridium = -50;
    msg.modem = 87;
    msg.pumps = 68;
    msg.vhf = -52;

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
    msg.setTimeStamp(0.635005054113);
    msg.setSource(41165U);
    msg.setSourceEntity(193U);
    msg.setDestination(34357U);
    msg.setDestinationEntity(19U);
    msg.angle = 0.778564604755;
    msg.reference.assign("XUXWTRMPYHBRKJQUGLTNNZXTTPXZCSSNHFIVJOYDWXOVJVEAINKXFAAEYOREZIRVLMKULOIVGWMQAZANHPDYHHUEBFEFWTHQNAAKPZNLV");
    msg.speed = 0.902798996329;

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
    msg.setTimeStamp(0.391642948546);
    msg.setSource(26821U);
    msg.setSourceEntity(49U);
    msg.setDestination(6681U);
    msg.setDestinationEntity(63U);
    msg.angle = 0.227483991219;
    msg.reference.assign("PRQLDNISWOZNCJQCUSSFGPAXUHALQUNKVJWWXJESIYLELOGANJCTXVJSHODMPOLAOUKFBHIEMHOTPYTKXNRDZTZBRHBBNTMIPVJQHRNVIZZPAFGALHIICDEDEQFGUXWEVMJAKEDGOSXMTSQVBTFGWSHTKDMYLQP");
    msg.speed = 0.794632040839;

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
    msg.setTimeStamp(0.273107288423);
    msg.setSource(35828U);
    msg.setSourceEntity(189U);
    msg.setDestination(50077U);
    msg.setDestinationEntity(72U);
    msg.angle = 0.834076140014;
    msg.reference.assign("QHXSHXBWLXGSJCOHPAUKWZMNDQZRJEHSGAVIUJKEKNIMXZUNFETSTQPTFZGIBCDQTYDHQRJOHYBMZPITSEKYPBKETJGEBQDORBDWHECLUDRZOJVQMZFRGXWFXDLFTLLCAQJGVWVMOCJFVUVROFSWZNKYAMXLGFLRKYVCGPFWBXPLEWQUBYDKTXLEZUIMUNANKNNABMTCJSDMDIPXOSYGFGYAIWHAQICVSONHCHLJIYBO");
    msg.speed = 0.685420701033;

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
    msg.setTimeStamp(0.507622633568);
    msg.setSource(44644U);
    msg.setSourceEntity(121U);
    msg.setDestination(52844U);
    msg.setDestinationEntity(134U);
    msg.angle = 0.315574846489;
    msg.speed = 0.76175823688;

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
    msg.setTimeStamp(0.314443798729);
    msg.setSource(43411U);
    msg.setSourceEntity(227U);
    msg.setDestination(39611U);
    msg.setDestinationEntity(83U);
    msg.angle = 0.720708423612;
    msg.speed = 0.774971429136;

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
    msg.setTimeStamp(0.0260037501704);
    msg.setSource(1312U);
    msg.setSourceEntity(72U);
    msg.setDestination(199U);
    msg.setDestinationEntity(10U);
    msg.angle = 0.894661029626;
    msg.speed = 0.164938460238;

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
    msg.setTimeStamp(0.0678433042328);
    msg.setSource(1925U);
    msg.setSourceEntity(200U);
    msg.setDestination(1555U);
    msg.setDestinationEntity(182U);
    msg.dir = 0.285147406998;
    msg.speed = 0.607979067982;

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
    msg.setTimeStamp(0.0797019557158);
    msg.setSource(57053U);
    msg.setSourceEntity(177U);
    msg.setDestination(56674U);
    msg.setDestinationEntity(69U);
    msg.dir = 0.588118670074;
    msg.speed = 0.143658607073;

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
    msg.setTimeStamp(0.948437159217);
    msg.setSource(18676U);
    msg.setSourceEntity(53U);
    msg.setDestination(27621U);
    msg.setDestinationEntity(6U);
    msg.dir = 0.352166970556;
    msg.speed = 0.418389700746;

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
    msg.setTimeStamp(0.76342799179);
    msg.setSource(42371U);
    msg.setSourceEntity(48U);
    msg.setDestination(44614U);
    msg.setDestinationEntity(61U);
    msg.x = 0.012512288374;
    msg.y = 0.907030746018;
    msg.z1 = 0.780839446778;
    msg.z2 = 0.392186755911;

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
    msg.setTimeStamp(0.829255446847);
    msg.setSource(24492U);
    msg.setSourceEntity(222U);
    msg.setDestination(35760U);
    msg.setDestinationEntity(93U);
    msg.x = 0.0632365168815;
    msg.y = 0.0791680979351;
    msg.z1 = 0.223336202548;
    msg.z2 = 0.457990163875;

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
    msg.setTimeStamp(0.972572045741);
    msg.setSource(35604U);
    msg.setSourceEntity(219U);
    msg.setDestination(62754U);
    msg.setDestinationEntity(231U);
    msg.x = 0.799004849968;
    msg.y = 0.639024863172;
    msg.z1 = 0.661774239344;
    msg.z2 = 0.869747259206;

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
    msg.setTimeStamp(0.241233283664);
    msg.setSource(26405U);
    msg.setSourceEntity(130U);
    msg.setDestination(43792U);
    msg.setDestinationEntity(179U);
    msg.mmsi = 0.877150609901;
    msg.lat = 0.518022200618;
    msg.lon = 0.665456814148;
    msg.x = 0.829829293826;
    msg.y = 0.370655395851;
    msg.speed = 0.63233464586;
    msg.course = 0.0143522082029;
    msg.dist = 0.548239812092;
    msg.length = 0.753701298451;
    msg.width = 0.196117321402;
    msg.o_vect = 0.0367442278091;

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
    msg.setTimeStamp(0.712427878067);
    msg.setSource(398U);
    msg.setSourceEntity(1U);
    msg.setDestination(47786U);
    msg.setDestinationEntity(115U);
    msg.mmsi = 0.959763057038;
    msg.lat = 0.353644470432;
    msg.lon = 0.90080681957;
    msg.x = 0.0200717355749;
    msg.y = 0.542902868857;
    msg.speed = 0.659202624057;
    msg.course = 0.989651627001;
    msg.dist = 0.731463674722;
    msg.length = 0.349141331798;
    msg.width = 0.211287104738;
    msg.o_vect = 0.633009245035;

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
    msg.setTimeStamp(0.312235332784);
    msg.setSource(33354U);
    msg.setSourceEntity(166U);
    msg.setDestination(18360U);
    msg.setDestinationEntity(71U);
    msg.mmsi = 0.196300286198;
    msg.lat = 0.299987355643;
    msg.lon = 0.036748742411;
    msg.x = 0.214193015747;
    msg.y = 0.407888490033;
    msg.speed = 0.673856197422;
    msg.course = 0.195203514435;
    msg.dist = 0.3777626968;
    msg.length = 0.60823218762;
    msg.width = 0.441509673791;
    msg.o_vect = 0.207503583512;

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
    msg.setTimeStamp(0.400805917453);
    msg.setSource(10044U);
    msg.setSourceEntity(182U);
    msg.setDestination(45211U);
    msg.setDestinationEntity(19U);
    msg.locations.assign("KCCENIMYFGOSSBLMUKLAQ");

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
    msg.setTimeStamp(0.938216021754);
    msg.setSource(55805U);
    msg.setSourceEntity(60U);
    msg.setDestination(49649U);
    msg.setDestinationEntity(116U);
    msg.locations.assign("XYLYDYWMLYQOCYSGUEFELWJRZHB");

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
    msg.setTimeStamp(0.602810145308);
    msg.setSource(62689U);
    msg.setSourceEntity(59U);
    msg.setDestination(11226U);
    msg.setDestinationEntity(13U);
    msg.locations.assign("FSQLPBBLJGFPYQQ");

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
    msg.setTimeStamp(0.934270451218);
    msg.setSource(24404U);
    msg.setSourceEntity(2U);
    msg.setDestination(29858U);
    msg.setDestinationEntity(160U);
    msg.value = 0.644788024534;

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
    msg.setTimeStamp(0.826747145986);
    msg.setSource(1157U);
    msg.setSourceEntity(212U);
    msg.setDestination(15837U);
    msg.setDestinationEntity(49U);
    msg.value = 0.476124817677;

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
    msg.setTimeStamp(0.40515549983);
    msg.setSource(45632U);
    msg.setSourceEntity(82U);
    msg.setDestination(61784U);
    msg.setDestinationEntity(117U);
    msg.value = 0.917447027843;

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
    msg.setTimeStamp(0.512595008237);
    msg.setSource(45969U);
    msg.setSourceEntity(54U);
    msg.setDestination(58412U);
    msg.setDestinationEntity(0U);
    msg.beam1 = 0.858874445005;
    msg.beam2 = 0.564845406334;
    msg.beam3 = 0.702173338196;
    msg.beam4 = 0.546114116874;

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
    msg.setTimeStamp(0.20921141626);
    msg.setSource(42633U);
    msg.setSourceEntity(56U);
    msg.setDestination(37408U);
    msg.setDestinationEntity(113U);
    msg.beam1 = 0.242070128546;
    msg.beam2 = 0.440221754921;
    msg.beam3 = 0.437410875464;
    msg.beam4 = 0.611586087631;

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
    msg.setTimeStamp(0.619602173834);
    msg.setSource(720U);
    msg.setSourceEntity(65U);
    msg.setDestination(32396U);
    msg.setDestinationEntity(132U);
    msg.beam1 = 0.527873713139;
    msg.beam2 = 0.90417353376;
    msg.beam3 = 0.418940329987;
    msg.beam4 = 0.304415364996;

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
    msg.setTimeStamp(0.674403800853);
    msg.setSource(37236U);
    msg.setSourceEntity(173U);
    msg.setDestination(32611U);
    msg.setDestinationEntity(38U);
    msg.beam1 = 59U;
    msg.beam2 = 188U;
    msg.beam3 = 50U;
    msg.beam4 = 179U;

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
    msg.setTimeStamp(0.51638692928);
    msg.setSource(64355U);
    msg.setSourceEntity(121U);
    msg.setDestination(5691U);
    msg.setDestinationEntity(89U);
    msg.beam1 = 94U;
    msg.beam2 = 69U;
    msg.beam3 = 95U;
    msg.beam4 = 147U;

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
    msg.setTimeStamp(0.438316325591);
    msg.setSource(14454U);
    msg.setSourceEntity(63U);
    msg.setDestination(40210U);
    msg.setDestinationEntity(12U);
    msg.beam1 = 34U;
    msg.beam2 = 199U;
    msg.beam3 = 153U;
    msg.beam4 = 80U;

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
    msg.setTimeStamp(0.742707173471);
    msg.setSource(3888U);
    msg.setSourceEntity(48U);
    msg.setDestination(11391U);
    msg.setDestinationEntity(184U);
    msg.pos = 0.74877459528;
    IMC::ADCPBeam tmp_msg_0;
    tmp_msg_0.vel = 0.870180162372;
    tmp_msg_0.amp = 0.286557631474;
    tmp_msg_0.cor = 55U;
    msg.beams.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.333672203834);
    msg.setSource(19845U);
    msg.setSourceEntity(208U);
    msg.setDestination(3696U);
    msg.setDestinationEntity(47U);
    msg.pos = 0.948552141636;

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
    msg.setTimeStamp(0.798564919341);
    msg.setSource(63021U);
    msg.setSourceEntity(193U);
    msg.setDestination(34618U);
    msg.setDestinationEntity(113U);
    msg.pos = 0.199966003772;

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
    msg.setTimeStamp(0.815274843434);
    msg.setSource(25687U);
    msg.setSourceEntity(43U);
    msg.setDestination(8951U);
    msg.setDestinationEntity(189U);
    msg.beams = 47U;
    msg.cells = 185U;
    msg.coord_sys = 215U;

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
    msg.setTimeStamp(0.579192609232);
    msg.setSource(5538U);
    msg.setSourceEntity(80U);
    msg.setDestination(27244U);
    msg.setDestinationEntity(187U);
    msg.beams = 249U;
    msg.cells = 244U;
    msg.coord_sys = 212U;
    IMC::CurrentProfileCell tmp_msg_0;
    tmp_msg_0.pos = 0.560651984952;
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
    msg.setTimeStamp(0.035902764372);
    msg.setSource(49238U);
    msg.setSourceEntity(92U);
    msg.setDestination(13429U);
    msg.setDestinationEntity(222U);
    msg.beams = 65U;
    msg.cells = 91U;
    msg.coord_sys = 237U;
    IMC::CurrentProfileCell tmp_msg_0;
    tmp_msg_0.pos = 0.092972178433;
    IMC::ADCPBeam tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.vel = 0.987925800353;
    tmp_tmp_msg_0_0.amp = 0.527098162619;
    tmp_tmp_msg_0_0.cor = 120U;
    tmp_msg_0.beams.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.816976251981);
    msg.setSource(19831U);
    msg.setSourceEntity(77U);
    msg.setDestination(39310U);
    msg.setDestinationEntity(63U);
    msg.vel = 0.647672966175;
    msg.amp = 0.186152088016;
    msg.cor = 155U;

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
    msg.setTimeStamp(0.239191565323);
    msg.setSource(31830U);
    msg.setSourceEntity(72U);
    msg.setDestination(45976U);
    msg.setDestinationEntity(78U);
    msg.vel = 0.590333711432;
    msg.amp = 0.718940082225;
    msg.cor = 121U;

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
    msg.setTimeStamp(0.381485875553);
    msg.setSource(13496U);
    msg.setSourceEntity(61U);
    msg.setDestination(47088U);
    msg.setDestinationEntity(22U);
    msg.vel = 0.522524659994;
    msg.amp = 0.843312992079;
    msg.cor = 189U;

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
    msg.setTimeStamp(0.749688153238);
    msg.setSource(64699U);
    msg.setSourceEntity(182U);
    msg.setDestination(7891U);
    msg.setDestinationEntity(172U);
    msg.serial_no = 2840064316U;
    msg.unix_timestamp = 4064433863U;
    msg.millis = 57299U;
    msg.trans_protocol = 12U;
    msg.trans_id = 3991175176U;
    msg.trans_data = 17175U;
    msg.snr = 243U;
    msg.trans_freq = 114U;
    msg.recv_mem_addr = 45188U;
    msg.lat = 0.487060660671;
    msg.lon = 0.689079305702;

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
    msg.setTimeStamp(0.289683586091);
    msg.setSource(48698U);
    msg.setSourceEntity(174U);
    msg.setDestination(38878U);
    msg.setDestinationEntity(172U);
    msg.serial_no = 553836962U;
    msg.unix_timestamp = 1258845785U;
    msg.millis = 37591U;
    msg.trans_protocol = 158U;
    msg.trans_id = 76295635U;
    msg.trans_data = 4268U;
    msg.snr = 155U;
    msg.trans_freq = 201U;
    msg.recv_mem_addr = 24350U;
    msg.lat = 0.310674375949;
    msg.lon = 0.762575344608;

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
    msg.setTimeStamp(0.578131501179);
    msg.setSource(25821U);
    msg.setSourceEntity(67U);
    msg.setDestination(34U);
    msg.setDestinationEntity(25U);
    msg.serial_no = 2033775965U;
    msg.unix_timestamp = 294738395U;
    msg.millis = 37661U;
    msg.trans_protocol = 52U;
    msg.trans_id = 3976768345U;
    msg.trans_data = 6031U;
    msg.snr = 243U;
    msg.trans_freq = 73U;
    msg.recv_mem_addr = 8487U;
    msg.lat = 0.861192759326;
    msg.lon = 0.986111705539;

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
    msg.setTimeStamp(0.163818124066);
    msg.setSource(56913U);
    msg.setSourceEntity(61U);
    msg.setDestination(45049U);
    msg.setDestinationEntity(127U);
    msg.serial_no = 1875255257U;
    msg.unix_timestamp = 3725352250U;
    msg.temperature = 0.938510429232;
    msg.avg_noise_level = 54U;
    msg.peak_noise_level = 112U;
    msg.recv_listen_freq = 193U;
    msg.recv_mem_addr = 36193U;

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
    msg.setTimeStamp(0.839131808003);
    msg.setSource(50364U);
    msg.setSourceEntity(69U);
    msg.setDestination(29114U);
    msg.setDestinationEntity(234U);
    msg.serial_no = 1807461979U;
    msg.unix_timestamp = 1343026863U;
    msg.temperature = 0.532561363395;
    msg.avg_noise_level = 143U;
    msg.peak_noise_level = 32U;
    msg.recv_listen_freq = 82U;
    msg.recv_mem_addr = 54424U;

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
    msg.setTimeStamp(0.366864688404);
    msg.setSource(56195U);
    msg.setSourceEntity(234U);
    msg.setDestination(55125U);
    msg.setDestinationEntity(250U);
    msg.serial_no = 914975728U;
    msg.unix_timestamp = 4264393849U;
    msg.temperature = 0.99270794906;
    msg.avg_noise_level = 62U;
    msg.peak_noise_level = 52U;
    msg.recv_listen_freq = 21U;
    msg.recv_mem_addr = 51071U;

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
    msg.setTimeStamp(0.677507053924);
    msg.setSource(33709U);
    msg.setSourceEntity(80U);
    msg.setDestination(43338U);
    msg.setDestinationEntity(110U);
    msg.frequency = 4232412061U;
    msg.info.assign("ICFHLVWNKTJDLXNPFXAIFDNFQRBPHZPUUMZUPFGOGEXSIAYGCLUSCUGYEMX");

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
    msg.setTimeStamp(0.0965860445189);
    msg.setSource(63549U);
    msg.setSourceEntity(157U);
    msg.setDestination(15182U);
    msg.setDestinationEntity(173U);
    msg.frequency = 339752523U;
    msg.info.assign("IDMDJYHWDMJZIWYSXZGUMFFBNSYJCONIAYOQPOUABDURVKMCR");

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
    msg.setTimeStamp(0.399952912228);
    msg.setSource(34314U);
    msg.setSourceEntity(176U);
    msg.setDestination(39647U);
    msg.setDestinationEntity(64U);
    msg.frequency = 894835390U;
    msg.info.assign("TCOAOSSEMPEYBLJYLKYDKUJTPSOGJLHFHDQDGHCQRXWGGQPAYHXW");

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
    msg.setTimeStamp(0.172972349749);
    msg.setSource(27230U);
    msg.setSourceEntity(73U);
    msg.setDestination(63356U);
    msg.setDestinationEntity(32U);
    msg.adcp = -62;
    msg.adcp_dur = 618373262U;
    msg.adcp_fr = 3324265958U;
    msg.ctd = -102;
    msg.ctd_dur = 2956665458U;
    msg.ctd_fr = 1796204226U;
    msg.opt = -111;
    msg.opt_dur = 2928978170U;
    msg.opt_fr = 2508467665U;
    msg.tbl = 100;
    msg.tbl_dur = 957329834U;
    msg.tbl_fr = 1302884899U;
    msg.eco = 11;
    msg.eco_dur = 3787462513U;
    msg.eco_fr = 4177129368U;
    msg.par = 55;
    msg.par_dur = 3674990582U;
    msg.par_fr = 499872911U;

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
    msg.setTimeStamp(0.306319396282);
    msg.setSource(53439U);
    msg.setSourceEntity(165U);
    msg.setDestination(48089U);
    msg.setDestinationEntity(159U);
    msg.adcp = 33;
    msg.adcp_dur = 2425046830U;
    msg.adcp_fr = 3077687025U;
    msg.ctd = -21;
    msg.ctd_dur = 514201139U;
    msg.ctd_fr = 2856627831U;
    msg.opt = -62;
    msg.opt_dur = 3967179086U;
    msg.opt_fr = 3244412357U;
    msg.tbl = -99;
    msg.tbl_dur = 1158574912U;
    msg.tbl_fr = 3243025285U;
    msg.eco = -101;
    msg.eco_dur = 2162535073U;
    msg.eco_fr = 1307613662U;
    msg.par = -91;
    msg.par_dur = 3822678302U;
    msg.par_fr = 4110416465U;

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
    msg.setTimeStamp(0.490806097236);
    msg.setSource(1572U);
    msg.setSourceEntity(69U);
    msg.setDestination(56419U);
    msg.setDestinationEntity(41U);
    msg.adcp = -42;
    msg.adcp_dur = 2654293883U;
    msg.adcp_fr = 3853836123U;
    msg.ctd = 66;
    msg.ctd_dur = 1378940992U;
    msg.ctd_fr = 561275435U;
    msg.opt = -31;
    msg.opt_dur = 110026565U;
    msg.opt_fr = 1202025123U;
    msg.tbl = -87;
    msg.tbl_dur = 3547990525U;
    msg.tbl_fr = 3208827593U;
    msg.eco = 84;
    msg.eco_dur = 741141791U;
    msg.eco_fr = 971212738U;
    msg.par = 12;
    msg.par_dur = 1621076739U;
    msg.par_fr = 4032006475U;

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
    msg.setTimeStamp(0.443135131474);
    msg.setSource(10361U);
    msg.setSourceEntity(237U);
    msg.setDestination(50892U);
    msg.setDestinationEntity(142U);
    msg.adcp = -114;
    msg.adcp_dur = 2989942109U;
    msg.adcp_fr = 69497978U;
    msg.ctd = 53;
    msg.ctd_dur = 2799836977U;
    msg.ctd_fr = 3832365487U;
    msg.opt = -93;
    msg.opt_dur = 459139927U;
    msg.opt_fr = 3774341210U;
    msg.tbl = -92;
    msg.tbl_dur = 1914784931U;
    msg.tbl_fr = 1019225374U;
    msg.eco = 36;
    msg.eco_dur = 1878391288U;
    msg.eco_fr = 3097539009U;
    msg.par = -85;
    msg.par_dur = 41277216U;
    msg.par_fr = 1041758149U;

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
    msg.setTimeStamp(0.901822535247);
    msg.setSource(52806U);
    msg.setSourceEntity(182U);
    msg.setDestination(43875U);
    msg.setDestinationEntity(47U);
    msg.adcp = -87;
    msg.adcp_dur = 4196350648U;
    msg.adcp_fr = 881447291U;
    msg.ctd = 26;
    msg.ctd_dur = 3129706854U;
    msg.ctd_fr = 1235528050U;
    msg.opt = 16;
    msg.opt_dur = 1799879623U;
    msg.opt_fr = 175198403U;
    msg.tbl = 2;
    msg.tbl_dur = 2415613623U;
    msg.tbl_fr = 557066800U;
    msg.eco = -52;
    msg.eco_dur = 1400512374U;
    msg.eco_fr = 222500510U;
    msg.par = 91;
    msg.par_dur = 1377001161U;
    msg.par_fr = 2339421953U;

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
    msg.setTimeStamp(0.973512120868);
    msg.setSource(16858U);
    msg.setSourceEntity(182U);
    msg.setDestination(27491U);
    msg.setDestinationEntity(57U);
    msg.adcp = -64;
    msg.adcp_dur = 2332849093U;
    msg.adcp_fr = 2532390969U;
    msg.ctd = -60;
    msg.ctd_dur = 2294920384U;
    msg.ctd_fr = 1819765251U;
    msg.opt = 24;
    msg.opt_dur = 1504982628U;
    msg.opt_fr = 60519862U;
    msg.tbl = -22;
    msg.tbl_dur = 1891109625U;
    msg.tbl_fr = 3354006699U;
    msg.eco = 53;
    msg.eco_dur = 2332260520U;
    msg.eco_fr = 2169794707U;
    msg.par = -107;
    msg.par_dur = 162938703U;
    msg.par_fr = 2927314311U;

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
    msg.setTimeStamp(0.73175201543);
    msg.setSource(56977U);
    msg.setSourceEntity(176U);
    msg.setDestination(6456U);
    msg.setDestinationEntity(24U);
    msg.value = 0.871015561805;

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
    msg.setTimeStamp(0.68299481221);
    msg.setSource(32666U);
    msg.setSourceEntity(109U);
    msg.setDestination(38639U);
    msg.setDestinationEntity(208U);
    msg.value = 0.592424693476;

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
    msg.setTimeStamp(0.362420198458);
    msg.setSource(2106U);
    msg.setSourceEntity(177U);
    msg.setDestination(51371U);
    msg.setDestinationEntity(194U);
    msg.value = 0.406113458383;

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
    msg.setTimeStamp(0.957085324583);
    msg.setSource(2387U);
    msg.setSourceEntity(45U);
    msg.setDestination(10065U);
    msg.setDestinationEntity(54U);
    msg.lat = 0.160292480019;
    msg.lon = 0.217761023235;
    msg.depth.assign("RDQZAEQKNTJZPWUESJZXBQ");
    msg.vel.assign("YQLXRBVNKDOTSSHLCIQIHIITKJZFWNMNGECXRFWZEVLGDPCWRYM");
    msg.dir.assign("NXCVWUYWJHKSBEKKMMKCHBTXLNBVRSNANOFEITRNYEJIOPEUPLQRGGELFIQHMSHUQMQGPYOQVZZGLARIXDLMZZXODAIJTTBPAWJBRQVLCNXPFNBQFWODITWCSHXWGAJIRZOMSSYHWTDZAWHLGKTVUU");

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
    msg.setTimeStamp(0.721326021032);
    msg.setSource(4968U);
    msg.setSourceEntity(242U);
    msg.setDestination(31309U);
    msg.setDestinationEntity(165U);
    msg.lat = 0.365353299105;
    msg.lon = 0.21555098462;
    msg.depth.assign("WIRBCJGPWYLKDAZREPXVEOATPWKLZEBJTCXWYZCDLNBTEIWTHJWDAKWAYFHIPEHFOYQUIQAZBVZUCUMVPGWMXJHNDCNIVMUXDOKXJRMJHNRNFGXTH");
    msg.vel.assign("ILSMMVTDXYKYABMGPHKYEYBMWIEAQBCQBQWLTUHBWOYRHENFATOMLJEWPFIXDSFHSVTKLGJILPACUANCQGFWQREQPXMVDSIVAPPMQNZCOFLTZTSLUGIQJEYLHKTRJKXAZDYDNGDUKRRRONOZUCIHPVFWUFEBZKDNVXZRUOPQHZNCWFXKIMRCZBGVQLGWXAJH");
    msg.dir.assign("NIANANWCHJJQYVRGEWAQOTDNDRUKTESEALUBHSDRMSIIENSGKVRUVCQTLGMQWWWUPJYGMHZSOSWUVAILDEFAZQBMZDOPOIXNJLUTBFGTUCQCCYXWIJUVAYRXELDOGXSOSVVUDQFRXOITYCPMGGCKYTBMLONFECJKLZPXFPHCAVKYHKDPK");

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
    msg.setTimeStamp(0.755288336835);
    msg.setSource(64757U);
    msg.setSourceEntity(58U);
    msg.setDestination(22841U);
    msg.setDestinationEntity(136U);
    msg.lat = 0.091726331384;
    msg.lon = 0.209395384949;
    msg.depth.assign("IKYUXNSCPLPAMHXYIKKRMGKRLAPJPYJHMJRVOWVVCZLFNEXVXOHAZAGSYFOVEW");
    msg.vel.assign("IBQPJMFRXRKLSPZZITIULSERMJATUAGEZKMWXPKPXNVPORGZKCVCHCQNLBJZKLMJHHALCETYKWYTYCMUDHRJAFTCPRVXLEGHWWWGPDLUDJSDQNYNBOEBCSAIFXPTSEXENPBBUDZMGLOVKIDHHYAEINAUFZTFTZFMKJTDCQAN");
    msg.dir.assign("ZLDCFSEADHYLQJBWKOWCKSEMPDNGVZTUFTBCQTXGXOUVDKNRYDSBPVGLEDBRJATZAEPQABJBWAZNIVUURCJQGNMCDCPXPXYRJCAJSZKJMKOHZFLOSJKQGIXLHVBQHIFPYENNUUXKTWIHUVHGXMIANYLIGYVANDBEHYSWMKPRFSHONEEHVQZWGTWPNOGBJCZRZQBKXUHFQTGX");

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
    msg.setTimeStamp(0.12738010467);
    msg.setSource(43991U);
    msg.setSourceEntity(164U);
    msg.setDestination(43632U);
    msg.setDestinationEntity(10U);
    msg.source.assign("BLVDZJIZPQMMCUBHQTJLGOEZMNRFKWLIREDCQQXVXSNWDVKUVJWALDRISVMFXANURFWNJDSACSXVPMIYGPKPWVWABKNUNMBOZPBPDYFHIEWFZOMKKCHASGDZQTGJKYXHYHGWPCSILBYAQZUJBLOCTXNDTEELFUKHJGIGHFHEWBNSPCCTYXYJZGSYMEULGSHRLJSKOTW");
    msg.lat = 0.618119149385;
    msg.lon = 0.770478998671;
    msg.sog = 0.836207243166;
    msg.uc = 0.383924614287;
    msg.depth = 0.745695167064;
    msg.value = 0.0901046691819;

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
    msg.setTimeStamp(0.313593495073);
    msg.setSource(18804U);
    msg.setSourceEntity(101U);
    msg.setDestination(44111U);
    msg.setDestinationEntity(71U);
    msg.source.assign("KKYTAYREMFTRFZABTZEYWTXQGFIKMMMPLBFVQYSOVSHTRQHKCVKYIPCUOBTMIAONUTJOHRPURQ");
    msg.lat = 0.919168880442;
    msg.lon = 0.419184661397;
    msg.sog = 0.506338077533;
    msg.uc = 0.418153510286;
    msg.depth = 0.472165414877;
    msg.value = 0.71100038845;

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
    msg.setTimeStamp(0.265678827929);
    msg.setSource(19186U);
    msg.setSourceEntity(232U);
    msg.setDestination(40374U);
    msg.setDestinationEntity(254U);
    msg.source.assign("NQEGSHIXAGAWQOSHZGLVVXGUZBSQQTUZDYIKHJCEQPRODQOKBLNUMKVJLWIFJJBTRWRIXDMMPDUACSHPRLPXCASLIPIZPXQYMTBUPSYTDWKYOAWTWYBCUWENMFKPANNSKOOUJMZ");
    msg.lat = 0.86216909627;
    msg.lon = 0.444933292461;
    msg.sog = 0.415267366606;
    msg.uc = 0.704598442175;
    msg.depth = 0.767029438939;
    msg.value = 0.815708233747;

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

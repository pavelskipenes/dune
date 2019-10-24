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
// IMC XML MD5: bd256527da3a36707af54bca6d01ac1d                            *
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
    msg.setTimeStamp(0.892445086046);
    msg.setSource(14924U);
    msg.setSourceEntity(90U);
    msg.setDestination(22323U);
    msg.setDestinationEntity(97U);
    msg.state = 118U;
    msg.flags = 12U;
    msg.description.assign("JHOUWTNWRTGIHTIIMLGVLGDHCJIXTZQAPLIPEAAZEIXAYEFZDEMIBYLTEYKPDFZBLGPUVQJJSKNAVXOLZSWYJLMNVRSBFKNTBMQEQKBUHXFJEFCONSGZWRTKMWQWKPVNPNONUNZMKZYCFDYGACBLOJUUUVAODVRVLIQHTYMOTWSVQCSSCRJGYQIPSHXFWEUBKMXPDHFQHIYMBBPWYZOCKMPUXGESRXDSRAG");

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
    msg.setTimeStamp(0.830338637145);
    msg.setSource(46291U);
    msg.setSourceEntity(162U);
    msg.setDestination(4952U);
    msg.setDestinationEntity(212U);
    msg.state = 145U;
    msg.flags = 186U;
    msg.description.assign("INDOQWDSGBMARFLBIQSHJBJCXWTGXDPKHICNMVUDZTNDYRDRBNCKCQAXPRBSCFDHLMKLBESZJOAWHHZFUCIHBZVZWLLKYVWAITXEXE");

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
    msg.setTimeStamp(0.634417653218);
    msg.setSource(48503U);
    msg.setSourceEntity(89U);
    msg.setDestination(22451U);
    msg.setDestinationEntity(22U);
    msg.state = 124U;
    msg.flags = 232U;
    msg.description.assign("NFMKNTFNJJIHIEPOOZDOFCQWWNVDFXQVWEABBGSSXNRAIBLPUVJWAODFBBHPEIFWZCMSDVAIHOJTRWKOTMHSCCJHDYGQJKLBLTZHQHQVURIYQAETRUYSRTGCCSYXMMQIEFRFOHSRRLMPYJNFDSKOMUDAGTVZJPRKKMGXPUJUKWBXZVXAYNCBKILRKGPYTLXPH");

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
    msg.setTimeStamp(0.764002570245);
    msg.setSource(10375U);
    msg.setSourceEntity(95U);
    msg.setDestination(57601U);
    msg.setDestinationEntity(55U);

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
    msg.setTimeStamp(0.0307160899426);
    msg.setSource(30816U);
    msg.setSourceEntity(231U);
    msg.setDestination(56486U);
    msg.setDestinationEntity(110U);

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
    msg.setTimeStamp(0.320104533863);
    msg.setSource(35959U);
    msg.setSourceEntity(138U);
    msg.setDestination(5010U);
    msg.setDestinationEntity(45U);

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
    msg.setTimeStamp(0.419054240288);
    msg.setSource(47669U);
    msg.setSourceEntity(220U);
    msg.setDestination(10528U);
    msg.setDestinationEntity(21U);
    msg.id = 116U;
    msg.label.assign("WUUGIVXTOSEADYXMCCIIYIITE");
    msg.component.assign("QIPLOBJFLEVYBDMVWGDASGMTQNXFFURCXELIBXVFMFQMMXQSUJUDICLDCBEKPYMVFZPYXAJGIBHYVLQOYSLNQTRKQSZETHZTNXJOBFEZKCRSHDTVWBWRNOTJKEKEPGHYULUGJRKTPJGZZWPWRMHUPQZAILOIWZVOAVUDLKOHJYECST");
    msg.act_time = 15823U;
    msg.deact_time = 27890U;

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
    msg.setTimeStamp(0.738350848966);
    msg.setSource(26021U);
    msg.setSourceEntity(238U);
    msg.setDestination(63326U);
    msg.setDestinationEntity(45U);
    msg.id = 222U;
    msg.label.assign("JDOTUYWSBZDNJJLGRINIKBVESKLENQUAOTFKREMGADPPSLZFBOLQZWAVLPVGHMIGWWRVSUWCPKPPPTTNQHWMXQUKRCXZCBIFMLJEHDOLIXVQ");
    msg.component.assign("FAJNOTQSOBLUUHWHHHVROCKSCLRDADANOAZIJEAJLTIPEJPZRPLCFYWUNUAM");
    msg.act_time = 8216U;
    msg.deact_time = 14222U;

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
    msg.setTimeStamp(0.882672914381);
    msg.setSource(36642U);
    msg.setSourceEntity(184U);
    msg.setDestination(1296U);
    msg.setDestinationEntity(96U);
    msg.id = 19U;
    msg.label.assign("TVRTPAGKWMWTZQJEKAIVBDGJDYVBBMFHPMOFIKZMTTJOKPYIBFWVNDCLGQ");
    msg.component.assign("OGXCFQYQKCRZGIBPZNKIZAVWXDBFQSMNIFEDOIIMKLSGSMJZHPEVOIGHXSGKKYNIRXUVSESRORGDBGVUEDFYAXHHUHYMQVIPALYJCNOBXEGWOJCCHTVJLOZNGPCHXWUWWFCBBRFCXXQZUYXCUTULTELEQTAQKBAZFKTVFJPFLVFLJCDMTWIBNHZMERGRYWAQLJRSMASKWRTELHPZATUU");
    msg.act_time = 54609U;
    msg.deact_time = 271U;

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
    msg.setTimeStamp(0.803764408422);
    msg.setSource(6855U);
    msg.setSourceEntity(250U);
    msg.setDestination(32840U);
    msg.setDestinationEntity(11U);
    msg.id = 204U;

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
    msg.setTimeStamp(0.0841845697041);
    msg.setSource(56440U);
    msg.setSourceEntity(106U);
    msg.setDestination(21021U);
    msg.setDestinationEntity(221U);
    msg.id = 212U;

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
    msg.setTimeStamp(0.37935261047);
    msg.setSource(50097U);
    msg.setSourceEntity(229U);
    msg.setDestination(60603U);
    msg.setDestinationEntity(137U);
    msg.id = 11U;

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
    msg.setTimeStamp(0.862111513648);
    msg.setSource(26019U);
    msg.setSourceEntity(103U);
    msg.setDestination(18155U);
    msg.setDestinationEntity(154U);
    msg.op = 185U;
    msg.list.assign("CQFLVPMOTHGJPTCNBQNFGUZTJDDMJTDLDBOHIYUGHKVRLBBQSQGZKRPYSBAZNDBNWUWJEZDKCRLJPEXQMFFBSHNYIMRIVJNNAXBPKBPMYXRGZNYSPYHTTOQLBLHJWEEKMIFAYGECRXLUQPOAZZURQEVONLL");

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
    msg.setTimeStamp(0.783682956778);
    msg.setSource(12506U);
    msg.setSourceEntity(241U);
    msg.setDestination(19622U);
    msg.setDestinationEntity(167U);
    msg.op = 118U;
    msg.list.assign("XCTSXXZUFYTYNEJWOXTHCJLVVUHSKPIAMUZNDIFGPMKBDJQGMISNOBCDAHZEYAUABIRJBUAZEMJSVHEYQXGCMPYMPVUFGKPQVNQSMWXMCSNZUNJHIBPPINFMXAOLEGOKQLSPTNVEGWVZPHLYONQFTWWDTMTDQKEVEFAZDFBKJCDOJOFXYXHLDTLSZDAGXWCOSOBQYL");

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
    msg.setTimeStamp(0.455306338797);
    msg.setSource(63612U);
    msg.setSourceEntity(68U);
    msg.setDestination(9198U);
    msg.setDestinationEntity(156U);
    msg.op = 248U;
    msg.list.assign("DUTGRJCMNTKMADYDVMGAYPWNWEEWEEIKBMNSVZLRHJYWNQXUBRLTDJGOEDYLRFNHVDBTYNMGDUMCTUHAMBXYYKFQOSIZSEHXYLZQVIHHDPONRFCFWHFCOAJKIGABWOQCNIPSVCHRPDIOQQLLZTKONLBEXVFLFXJYSISUKLQNQVBJRJOJZEUHZJ");

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
    msg.setTimeStamp(0.318577318767);
    msg.setSource(16808U);
    msg.setSourceEntity(21U);
    msg.setDestination(57127U);
    msg.setDestinationEntity(23U);
    msg.value = 65U;

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
    msg.setTimeStamp(0.0478816472001);
    msg.setSource(55609U);
    msg.setSourceEntity(31U);
    msg.setDestination(63955U);
    msg.setDestinationEntity(14U);
    msg.value = 35U;

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
    msg.setTimeStamp(0.345115160326);
    msg.setSource(10425U);
    msg.setSourceEntity(183U);
    msg.setDestination(32056U);
    msg.setDestinationEntity(246U);
    msg.value = 204U;

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
    msg.setTimeStamp(0.143520739854);
    msg.setSource(53001U);
    msg.setSourceEntity(237U);
    msg.setDestination(8255U);
    msg.setDestinationEntity(9U);
    msg.consumer.assign("RLYUIBQQHVUUMXAGGCTLRPTSIBDAJYEWTEKGMARXPBEFJEQJNXKPWFKIPRYTQXXOVIRNMBZQLDFVNBUNHTTOZOWVIWSDHVLYNIYZXNBXMO");
    msg.message_id = 41093U;

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
    msg.setTimeStamp(0.135101053484);
    msg.setSource(4545U);
    msg.setSourceEntity(72U);
    msg.setDestination(22989U);
    msg.setDestinationEntity(179U);
    msg.consumer.assign("BGBSPAGZIUGOWKGBMWDUDYLDLYJZJORNXDVMXJTLJETYOKJMHMFPUEQZPQEWBQFXRYVUYTNJWICXUDOWCDQELSOKUEATEPRINVHRNFFB");
    msg.message_id = 48833U;

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
    msg.setTimeStamp(0.966526170869);
    msg.setSource(2993U);
    msg.setSourceEntity(227U);
    msg.setDestination(40270U);
    msg.setDestinationEntity(43U);
    msg.consumer.assign("DAZSIWBMDERQTDLWIBGRIKUGVSIZPTPSZNUFDWEZNQFEFG");
    msg.message_id = 20070U;

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
    msg.setTimeStamp(0.662147101015);
    msg.setSource(64967U);
    msg.setSourceEntity(127U);
    msg.setDestination(27577U);
    msg.setDestinationEntity(156U);
    msg.type = 161U;

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
    msg.setTimeStamp(0.492182290535);
    msg.setSource(41190U);
    msg.setSourceEntity(110U);
    msg.setDestination(65106U);
    msg.setDestinationEntity(110U);
    msg.type = 214U;

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
    msg.setTimeStamp(0.680355330446);
    msg.setSource(49552U);
    msg.setSourceEntity(91U);
    msg.setDestination(7261U);
    msg.setDestinationEntity(106U);
    msg.type = 180U;

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
    msg.setTimeStamp(0.984311901395);
    msg.setSource(6616U);
    msg.setSourceEntity(45U);
    msg.setDestination(34830U);
    msg.setDestinationEntity(182U);
    msg.op = 50U;

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
    msg.setTimeStamp(0.0142177773118);
    msg.setSource(35200U);
    msg.setSourceEntity(81U);
    msg.setDestination(31598U);
    msg.setDestinationEntity(92U);
    msg.op = 173U;

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
    msg.setTimeStamp(0.871403830615);
    msg.setSource(44825U);
    msg.setSourceEntity(98U);
    msg.setDestination(29940U);
    msg.setDestinationEntity(124U);
    msg.op = 62U;

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
    msg.setTimeStamp(0.763945165674);
    msg.setSource(15625U);
    msg.setSourceEntity(142U);
    msg.setDestination(26497U);
    msg.setDestinationEntity(40U);
    msg.total_steps = 199U;
    msg.step_number = 173U;
    msg.step.assign("GSTHYJVYTUGDMIMKQSVBAXADNOCDLCGPGFZBPWOUYBKJTMPXUKSAAWPIQQTLTMKOJFMTPBTCERRYKUIVFBSDOZZSAZGTXUPAUVPFWLNUWKXBZAJYGSHXOZEFACIGRRVSSUWIXLWHHBQDBPW");
    msg.flags = 155U;

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
    msg.setTimeStamp(0.768413759003);
    msg.setSource(27636U);
    msg.setSourceEntity(169U);
    msg.setDestination(49089U);
    msg.setDestinationEntity(229U);
    msg.total_steps = 182U;
    msg.step_number = 160U;
    msg.step.assign("GCIUHAGKITVBPLTVFWNMMJRFWNUKDIEABLIZFXNQODWZSIRWYMNSTBEDKRGQKTJQNBECEQU");
    msg.flags = 212U;

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
    msg.setTimeStamp(0.379086302402);
    msg.setSource(15230U);
    msg.setSourceEntity(144U);
    msg.setDestination(11060U);
    msg.setDestinationEntity(167U);
    msg.total_steps = 18U;
    msg.step_number = 47U;
    msg.step.assign("KLUYRJZHVRHOIQXUJSVOQZSJIQLKPFNRSGOJHEITKRYYQDFPBRPBXEZPWOLBFPUPLYRAQEKSBPUKAWATQAEMPXZOCDIZIUYMJNXZTJDCMCLUFQKUKVTGFWEBZDOFCHTBLXZWFTHGNCNMQMWXWYJSQYGFGSNGOHVKAUICEXZHBJARFRTIDXYECDYNOYGDCWIADCHGSMOJFGKTMECKUHVIMAZVRSQJPRVXOTBLS");
    msg.flags = 200U;

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
    msg.setTimeStamp(0.795976622254);
    msg.setSource(47577U);
    msg.setSourceEntity(122U);
    msg.setDestination(6372U);
    msg.setDestinationEntity(177U);
    msg.state = 88U;
    msg.error.assign("NHAYXBDKUHMFDRYLTZUTPEJUXXKTYNCPWIOAQBWYQUROGMSBBWXABZICTSGGHDCTDZZBVIFPVZWLRJTOVQYZGZWPXOPSCIPKQKMEVCJBVUWEKWVHKNLWJPTKYJBZJXRHHFCOSULFHNSIQXDGYUDXXEDLPSAURNPAOIILACLJBQUI");

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
    msg.setTimeStamp(0.713909875726);
    msg.setSource(58433U);
    msg.setSourceEntity(196U);
    msg.setDestination(18871U);
    msg.setDestinationEntity(95U);
    msg.state = 71U;
    msg.error.assign("HOQZRMIYWQLNCGJIFUSONAIMZHZLKBEAPTXEPQUPNKWJGFZBQVDUNEOREQPTKDLWDRSLFWJIOFSDICAGJNOLJMVVFLT");

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
    msg.setTimeStamp(0.298830917687);
    msg.setSource(59787U);
    msg.setSourceEntity(56U);
    msg.setDestination(34337U);
    msg.setDestinationEntity(146U);
    msg.state = 186U;
    msg.error.assign("YNZGXXZJVBWKIUOQQTSMCMLUONNXGEPRLFFERGUNDOLXEEOBIJKUNWKYRJWVSCDTJVSMPTSHPVTWAMEAKTECFUYGUNLTPQJDRIVCSKUKUQHNOTLXXHMWRZBRZBHERPIHICCAWDTLCPPCFDK");

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
    msg.setTimeStamp(0.178330611115);
    msg.setSource(61322U);
    msg.setSourceEntity(150U);
    msg.setDestination(12951U);
    msg.setDestinationEntity(98U);

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
    msg.setTimeStamp(0.084576253129);
    msg.setSource(2115U);
    msg.setSourceEntity(237U);
    msg.setDestination(25666U);
    msg.setDestinationEntity(130U);

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
    msg.setTimeStamp(0.358109061559);
    msg.setSource(54421U);
    msg.setSourceEntity(26U);
    msg.setDestination(13688U);
    msg.setDestinationEntity(148U);

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
    msg.setTimeStamp(0.0276026374696);
    msg.setSource(54817U);
    msg.setSourceEntity(175U);
    msg.setDestination(48136U);
    msg.setDestinationEntity(200U);
    msg.op = 183U;
    msg.speed_min = 0.745777085187;
    msg.speed_max = 0.951180841635;
    msg.long_accel = 0.60908955682;
    msg.alt_max_msl = 0.409666670396;
    msg.dive_fraction_max = 0.529326246572;
    msg.climb_fraction_max = 0.420688771796;
    msg.bank_max = 0.415684531293;
    msg.p_max = 0.0464828176714;
    msg.pitch_min = 0.104851702417;
    msg.pitch_max = 0.418077593929;
    msg.q_max = 0.37360039041;
    msg.g_min = 0.839424337962;
    msg.g_max = 0.109114454917;
    msg.g_lat_max = 0.175676365496;
    msg.rpm_min = 0.877033619354;
    msg.rpm_max = 0.589895875493;
    msg.rpm_rate_max = 0.701033019578;

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
    msg.setTimeStamp(0.375254096955);
    msg.setSource(23208U);
    msg.setSourceEntity(18U);
    msg.setDestination(53684U);
    msg.setDestinationEntity(34U);
    msg.op = 181U;
    msg.speed_min = 0.58350071182;
    msg.speed_max = 0.450373550502;
    msg.long_accel = 0.955190380458;
    msg.alt_max_msl = 0.343984381225;
    msg.dive_fraction_max = 0.559468981839;
    msg.climb_fraction_max = 0.802564273486;
    msg.bank_max = 0.749830900594;
    msg.p_max = 0.822505584686;
    msg.pitch_min = 0.445817664904;
    msg.pitch_max = 0.068689164075;
    msg.q_max = 0.164324178838;
    msg.g_min = 0.106257023159;
    msg.g_max = 0.815366028708;
    msg.g_lat_max = 0.0170639317813;
    msg.rpm_min = 0.0323793439332;
    msg.rpm_max = 0.601982591463;
    msg.rpm_rate_max = 0.828315938213;

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
    msg.setTimeStamp(0.803674675886);
    msg.setSource(4183U);
    msg.setSourceEntity(76U);
    msg.setDestination(59392U);
    msg.setDestinationEntity(95U);
    msg.op = 147U;
    msg.speed_min = 0.252064319364;
    msg.speed_max = 0.370068866228;
    msg.long_accel = 0.646971281364;
    msg.alt_max_msl = 0.737863812714;
    msg.dive_fraction_max = 0.807204319949;
    msg.climb_fraction_max = 0.400750120091;
    msg.bank_max = 0.670271578065;
    msg.p_max = 0.157350347443;
    msg.pitch_min = 0.572815953272;
    msg.pitch_max = 0.727496245988;
    msg.q_max = 0.883074499618;
    msg.g_min = 0.513342417524;
    msg.g_max = 0.192912516494;
    msg.g_lat_max = 0.753465820157;
    msg.rpm_min = 0.746027722702;
    msg.rpm_max = 0.234450835884;
    msg.rpm_rate_max = 0.733773501332;

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
    msg.setTimeStamp(0.0879982666718);
    msg.setSource(64197U);
    msg.setSourceEntity(246U);
    msg.setDestination(56868U);
    msg.setDestinationEntity(93U);

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
    msg.setTimeStamp(0.440075346707);
    msg.setSource(50199U);
    msg.setSourceEntity(209U);
    msg.setDestination(50478U);
    msg.setDestinationEntity(120U);
    IMC::LblEstimate tmp_msg_0;
    IMC::LblBeacon tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.beacon.assign("HIVAPSMJJNJKTOXKIXSGQUYGFIGKTTLRWCWZRBRFVKWWDDRVIIZBSOHYZJJEAHMCPAQEOILZXXUFTEACCIWHEWNLR");
    tmp_tmp_msg_0_0.lat = 0.259396702028;
    tmp_tmp_msg_0_0.lon = 0.754282286869;
    tmp_tmp_msg_0_0.depth = 0.841346811295;
    tmp_tmp_msg_0_0.query_channel = 153U;
    tmp_tmp_msg_0_0.reply_channel = 221U;
    tmp_tmp_msg_0_0.transponder_delay = 89U;
    tmp_msg_0.beacon.set(tmp_tmp_msg_0_0);
    tmp_msg_0.x = 0.0113228535833;
    tmp_msg_0.y = 0.549217798341;
    tmp_msg_0.var_x = 0.258465131471;
    tmp_msg_0.var_y = 0.741994570019;
    tmp_msg_0.distance = 0.676637038218;
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
    msg.setTimeStamp(0.781613218142);
    msg.setSource(58872U);
    msg.setSourceEntity(94U);
    msg.setDestination(1296U);
    msg.setDestinationEntity(29U);

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
    msg.setTimeStamp(0.972581898791);
    msg.setSource(3641U);
    msg.setSourceEntity(30U);
    msg.setDestination(32581U);
    msg.setDestinationEntity(227U);
    msg.lat = 0.281270256962;
    msg.lon = 0.668022642692;
    msg.height = 0.141839631692;
    msg.x = 0.801722584835;
    msg.y = 0.547754222286;
    msg.z = 0.619642949892;
    msg.phi = 0.0450089463552;
    msg.theta = 0.280685204902;
    msg.psi = 0.0562035204532;
    msg.u = 0.0736060777861;
    msg.v = 0.881648548603;
    msg.w = 0.692319254076;
    msg.p = 0.645249243694;
    msg.q = 0.177204332174;
    msg.r = 0.999444884782;
    msg.svx = 0.189270582616;
    msg.svy = 0.532603636802;
    msg.svz = 0.243978579745;

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
    msg.setTimeStamp(0.543656630976);
    msg.setSource(45870U);
    msg.setSourceEntity(154U);
    msg.setDestination(15038U);
    msg.setDestinationEntity(55U);
    msg.lat = 0.0974462900059;
    msg.lon = 0.545094953992;
    msg.height = 0.905801573646;
    msg.x = 0.918564437271;
    msg.y = 0.581305086982;
    msg.z = 0.211212566449;
    msg.phi = 0.538195250528;
    msg.theta = 0.544715949615;
    msg.psi = 0.505382837633;
    msg.u = 0.320368778785;
    msg.v = 0.890150654188;
    msg.w = 0.313501303857;
    msg.p = 0.886429377385;
    msg.q = 0.673965116908;
    msg.r = 0.365705190111;
    msg.svx = 0.410613010968;
    msg.svy = 0.607626076864;
    msg.svz = 0.83067881825;

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
    msg.setTimeStamp(0.180385923738);
    msg.setSource(36074U);
    msg.setSourceEntity(157U);
    msg.setDestination(4809U);
    msg.setDestinationEntity(165U);
    msg.lat = 0.672204782682;
    msg.lon = 0.975431115286;
    msg.height = 0.509463289837;
    msg.x = 0.440875805169;
    msg.y = 0.279100787189;
    msg.z = 0.907307530636;
    msg.phi = 0.376360209641;
    msg.theta = 0.430780291593;
    msg.psi = 0.216730312362;
    msg.u = 0.57142535133;
    msg.v = 0.507254602976;
    msg.w = 0.306074723837;
    msg.p = 0.472316864654;
    msg.q = 0.942305511675;
    msg.r = 0.222335959981;
    msg.svx = 0.519487107667;
    msg.svy = 0.0336203126706;
    msg.svz = 0.953586680397;

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
    msg.setTimeStamp(0.364231767804);
    msg.setSource(51435U);
    msg.setSourceEntity(13U);
    msg.setDestination(54434U);
    msg.setDestinationEntity(80U);
    msg.op = 198U;
    msg.entities.assign("UHVLKXPJWIRWZUMLOEQVVSTTFCCHHJCJASBIYRRWOJONFABWYGSXYTGXGNUINQPTANVFZMPMHBBJQLVXPRMSHWDRYXCQTNKWIMUMXCRHLDTIPAZIOXQZZKTKYQHEDUPRYBLFJYDMEGOKGEKFAGKFBMQKVCSGCYDRSNCUXFHQVNGGJPEIRBKPINSEYIDBGHZDDAPWL");

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
    msg.setTimeStamp(0.573470418695);
    msg.setSource(20032U);
    msg.setSourceEntity(131U);
    msg.setDestination(65114U);
    msg.setDestinationEntity(20U);
    msg.op = 95U;
    msg.entities.assign("CISMXWDEISVGMBNDBJHGZOHIKWNQVYZTBOTPUXHPPGJKCOPNLJODFIGCEBXEHUFUFGVVFTCSGMVETAXMLWWKEZZRZOCBATQFPKABNSMXNQZWJYASVHDORTAHLMMNRMALCEXZXOOTRHIXPILLWZFIQNXRXLIYRQQKADYDWJVLGUDQUSLVLJTKGYHETJJGRERSAFDPAECPYNYCYIJH");

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
    msg.setTimeStamp(0.566797123955);
    msg.setSource(47069U);
    msg.setSourceEntity(112U);
    msg.setDestination(7432U);
    msg.setDestinationEntity(77U);
    msg.op = 80U;
    msg.entities.assign("ETZLYPUKMHWIVCTEXBTZKBYVFHFXSDNOLIXIJTTDCAGBQLKZEPLDXSZBXWSIKVQAFJKCGMLZTRRXZVPOLYZHYDZGKTPMSAHAUTJSGBJRWLRJQWVRMOMVWUPOIWNDOPWDORPXWHMFECDNBFEVQUMOYDQCECSFLGKNJFJ");

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
    msg.setTimeStamp(0.606617390601);
    msg.setSource(49428U);
    msg.setSourceEntity(6U);
    msg.setDestination(26364U);
    msg.setDestinationEntity(188U);
    msg.type = 84U;
    msg.speed = 50495U;
    const char tmp_msg_0[] = {-87, -121, 26, -15, -126, -80, 105, 74, -121, -21, -91, 53, 108, -55, 70, -60, 111, 122, -116, -95, 54, 90, -80, 61, 27, 121, -83, -40, -121, -65, 78, 79, 85, 94, 36, 97, -64, 49, 27, -42, -102, -83, 95, 29, -79, 102, -46, -80, -68, 124, 87, 53, 108, -57, 105, 89, -103, -96, 1, 82, 45, -121, 51, -46, 120, 19, -112, 17, 69};
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
    msg.setTimeStamp(0.964506075683);
    msg.setSource(52342U);
    msg.setSourceEntity(118U);
    msg.setDestination(36178U);
    msg.setDestinationEntity(192U);
    msg.type = 83U;
    msg.speed = 7952U;
    const char tmp_msg_0[] = {-79, 96, 50, 88, 101, -46, 3, -33, -77, -79, -77, -3, -87, -58, -69, -53, -11, -51, -11, -48, -35, -101, -96, -14, -47, -103, -100, 102, -44, -63, -106, 41, -27, -52, 18, -54, -18, -56, 88, -28, 85, -95, -55, 117, 14, -22, 6, -2, 93, -13, -118};
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
    msg.setTimeStamp(0.362594103982);
    msg.setSource(54100U);
    msg.setSourceEntity(48U);
    msg.setDestination(19717U);
    msg.setDestinationEntity(13U);
    msg.type = 90U;
    msg.speed = 63114U;
    const char tmp_msg_0[] = {106, -127, -56, 7, -41, -20, 71, 120, 101, 46, 32, -96, 113, -48, -24, -8, 83, -57, 125, -43, -120, 76, -9, 102, 72, 3, 70, 17, 64, -62, 60, 55, -36, 82, -1, 119, -113, 12, -85, -81, 44, -124, 95, 80, 70, 46, -1, -110, 30, -12, -115, 86, -87, 114, -42, -61, 120, 117, 87, -36, 112, 106, 105, 44, -48, -26, -48, -5, -110, 83, 17, 46, -37, -5, 125, 93, -54, 67, 69, 37, -128, 116, 8, 89, -24, -28, -81, 62, -51, -64, 41, -77, -55, 84, 87, -87, -63, 114, 35, -5, 65, 61, -85, -94, 120, 111, 52, -11, 101, 47, -109, -36, -123, 66, 85, 112, -72, 45, -114, 100, 104, -50, 26, 41, 68, 100, -30, -92, 39, -120, 126, -72, -26, 73, 78, -98, -128, -52, -50, -24, 84, 15, 114, -80, -107, 105};
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
    msg.setTimeStamp(0.234415512949);
    msg.setSource(933U);
    msg.setSourceEntity(117U);
    msg.setDestination(3299U);
    msg.setDestinationEntity(158U);
    msg.op = 65U;
    msg.tas2acc_pgain = 0.894204824043;
    msg.bank2p_pgain = 0.99677305037;

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
    msg.setTimeStamp(0.80007265839);
    msg.setSource(46620U);
    msg.setSourceEntity(49U);
    msg.setDestination(1201U);
    msg.setDestinationEntity(215U);
    msg.op = 242U;
    msg.tas2acc_pgain = 0.774695870106;
    msg.bank2p_pgain = 0.187139193277;

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
    msg.setTimeStamp(0.967600580984);
    msg.setSource(3435U);
    msg.setSourceEntity(152U);
    msg.setDestination(39957U);
    msg.setDestinationEntity(98U);
    msg.op = 182U;
    msg.tas2acc_pgain = 0.0733091684677;
    msg.bank2p_pgain = 0.657250808579;

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
    msg.setTimeStamp(0.466808003964);
    msg.setSource(11736U);
    msg.setSourceEntity(88U);
    msg.setDestination(7561U);
    msg.setDestinationEntity(39U);
    msg.available = 4179987194U;
    msg.value = 26U;

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
    msg.setTimeStamp(0.718807034103);
    msg.setSource(28730U);
    msg.setSourceEntity(125U);
    msg.setDestination(15666U);
    msg.setDestinationEntity(127U);
    msg.available = 2929259033U;
    msg.value = 76U;

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
    msg.setTimeStamp(0.339118631885);
    msg.setSource(50963U);
    msg.setSourceEntity(205U);
    msg.setDestination(16039U);
    msg.setDestinationEntity(1U);
    msg.available = 3621449808U;
    msg.value = 115U;

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
    msg.setTimeStamp(0.934888033192);
    msg.setSource(58831U);
    msg.setSourceEntity(31U);
    msg.setDestination(57017U);
    msg.setDestinationEntity(170U);
    msg.op = 22U;
    msg.snapshot.assign("BRAUDRRSTNWDZFJQMZRTDKGWSCLMENQJFWMIAQUBGWYXGFZPEYJRDTQGPHQMHYCBGQYNNGTTUYRTNRVABPAJMJZSKPSOLALCKOCVWLAOXMJEEFHUGLILVZKSAHXVTUSVIEM");
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.049221261229;
    tmp_msg_0.speed_units = 93U;
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
    msg.setTimeStamp(0.621928855563);
    msg.setSource(30048U);
    msg.setSourceEntity(55U);
    msg.setDestination(8131U);
    msg.setDestinationEntity(189U);
    msg.op = 159U;
    msg.snapshot.assign("RYFAEKYPNQZWYIMITONXOCHFSXXZNLJJWAQBGKLPJXVGDCPTVVXUFKHIEXENOBBGOLHSIICVOGOZDGXUNSUZEQQOMCDPSWTIOWIHMKYKXTMRYMWTLAJJTDKEULHZZIHQUJGLRNCXVRCQMTGMRUASSQELNRBXMRTRCCHZKGSPAJYDFYIFBBKDULQBDAASS");
    IMC::StateReport tmp_msg_0;
    tmp_msg_0.stime = 1878839514U;
    tmp_msg_0.latitude = 0.171046246544;
    tmp_msg_0.longitude = 0.513011732097;
    tmp_msg_0.altitude = 25232U;
    tmp_msg_0.depth = 28832U;
    tmp_msg_0.heading = 38466U;
    tmp_msg_0.speed = 1892;
    tmp_msg_0.fuel = 33;
    tmp_msg_0.exec_state = 93;
    tmp_msg_0.plan_checksum = 20680U;
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
    msg.setTimeStamp(0.588905637974);
    msg.setSource(16001U);
    msg.setSourceEntity(61U);
    msg.setDestination(36151U);
    msg.setDestinationEntity(238U);
    msg.op = 249U;
    msg.snapshot.assign("TYZZWKAQCMWAJBGJFOKYUTVVGLDWXFOWGVJUFJVEVJKNCQQCVSLAKPABUAMTYBTAHZNGMBRLUULWGEXIPBONZDJIQKXRFCGVCCMUIIFKRSJDKXEDOYTBLDELWXRNLFOJQMAQESNWINBCXEIHMUPNZQFHPOWMAKXERCPLXVWOTDDRFHLSZCOQSVIGISBERIXWJGZIDSPTVEUZSMPHAZSPYRUGSDATHRQYLRYCHFUBHHQBXZFOHGNONY");
    IMC::Magnetometer tmp_msg_0;
    tmp_msg_0.timeout = 11648U;
    tmp_msg_0.lat = 0.179990867429;
    tmp_msg_0.lon = 0.799730285625;
    tmp_msg_0.z = 0.390049101921;
    tmp_msg_0.z_units = 186U;
    tmp_msg_0.speed = 0.444805858751;
    tmp_msg_0.speed_units = 152U;
    tmp_msg_0.bearing = 0.81199632012;
    tmp_msg_0.width = 0.0892586412467;
    tmp_msg_0.direction = 45U;
    tmp_msg_0.custom.assign("XODFKVTYHKVOQQTIKFFBYDJJWBREAAVADCCVSLQCAXRAZRQTHCHPQFKZLMEMBRMZLFUWJMCNHEGFUXSEKEKJGIUYPO");
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
    msg.setTimeStamp(0.948826106088);
    msg.setSource(29043U);
    msg.setSourceEntity(147U);
    msg.setDestination(24601U);
    msg.setDestinationEntity(93U);
    msg.op = 158U;
    msg.name.assign("DQIVNHTYCNOAFEIQOXFVWBBRDASRZUMJWMRPZBGUDPBZRNUZXXNGRFUUQNSLELKITZLSPLLUSXQBELQPKRDKDBAEFOMFFYHUKY");

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
    msg.setTimeStamp(0.490587692545);
    msg.setSource(36741U);
    msg.setSourceEntity(73U);
    msg.setDestination(26133U);
    msg.setDestinationEntity(126U);
    msg.op = 241U;
    msg.name.assign("BDHOWFAGNICTOOUBNFGSLKKMDBPRUKGVLLLOCZFABUDMEHQLAYSFMUFUXXIAAVLXQFHZXSPMKYRBXEZJPPNWTKPLIIOTJIEOQSJGNNVYKJVCOPQMVWWRJSSHVED");

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
    msg.setTimeStamp(0.382632161955);
    msg.setSource(62703U);
    msg.setSourceEntity(108U);
    msg.setDestination(36996U);
    msg.setDestinationEntity(158U);
    msg.op = 137U;
    msg.name.assign("YEIRARPCFNZMFKOEYCNGOQDMTONVEISFDBKXOGWZRYANMXSUYRWZKTULXODLZ");

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
    msg.setTimeStamp(0.465629022364);
    msg.setSource(35115U);
    msg.setSourceEntity(32U);
    msg.setDestination(9884U);
    msg.setDestinationEntity(89U);
    msg.type = 227U;
    msg.htime = 0.472490505003;
    msg.context.assign("OMICXNJUFGIXPLYQBLLVLUSLHNGJQYMJYXWMKTSRFDVXTVUIUBZIOEBSDJITXTSOPBYNBCGKZZZRDFNN");
    msg.text.assign("BVMAQPNXFJPCKLUSBOWSFVTGGTACKIYFPNFYEQEBAVNENIWPLLRUCSWNPRTDFXPELZGXRDIOWZDTKHYXVMEWCEAFCAHHHQBBHATNZAURBBAOUDIYLUEVIWWHZCUXCRZBHNSWJQPDFNSIOWIXLGJKVZDVMHCZTSNJUTLKUACBIHJVUOVAUHRTOGMTBMJPMYR");

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
    msg.setTimeStamp(0.153486677436);
    msg.setSource(55899U);
    msg.setSourceEntity(55U);
    msg.setDestination(46535U);
    msg.setDestinationEntity(114U);
    msg.type = 129U;
    msg.htime = 0.0962469771325;
    msg.context.assign("HSEEJGITAMUQVOGSYIDFUGHRKWDJTKCBSQDRYNCGAPTRNBCNYWAOPNQSUYMBQZUJXPLXUMOHYXCFOFOZJUGEZLDXJEBMXNARPAFJVLBOWHEAIXDWVF");
    msg.text.assign("OEGPPCUOZQBMXCSXRBWWGUKZKGNJAKOXTIDHEAMIHWNUHYJZQEZPAUICVITEJYMMSWYSLIABHIQNXEPMYHNDDVVJFJDDJPDURLJCEUNGFNRABTLWFLBPZDYYIIMVOSLXOWCHRKNSDSTQVLLSOQCAZZLXPEXBJUXFWRITJVWFTSKGEVJGMKUB");

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
    msg.setTimeStamp(0.538828831445);
    msg.setSource(56411U);
    msg.setSourceEntity(142U);
    msg.setDestination(55451U);
    msg.setDestinationEntity(130U);
    msg.type = 168U;
    msg.htime = 0.153560948082;
    msg.context.assign("RGEJZMTWFXSQYUPKILVAVPOIHFPWLMUAWMNKDZGNJHXNBTYAEULLHYOJLESCKKJXDZNCJMWGTGDIATQCESTBLMJUSMDASLGYHDFBYHGRUQOFZXMOFQOUFCWIFMIUHDTQNNIHUBAVPCOUKOLSXPKPSRNMAGZZGPKNCSTJXCJQLFDHVEYBDEUAWIFGKVYZEEPQXIBBRXSOQCVPYEKXRTRCKOCR");
    msg.text.assign("KQWIYGTMBQFYXOYQPZNECLYZTFGPIXUPTHNLUHSIKBWFDMJULRJRCDAFDAKVQFOECOMPRCNBARXRGMUXJYWPNHSUYQACWVAOVKHPNMQZWVLGFLPQLENTRBDNERODISJSUNEEKCVZIOTYJGIECSMKTLBASHDVOFSKXFBUHOIKMHQZJMYKSEWXHUZWGCOGNEJHMXRAZVDZZBRPGOBIDWBYQRJCUDFLIGQALTIABZXLWKNYAM");

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
    msg.setTimeStamp(0.950247290046);
    msg.setSource(59000U);
    msg.setSourceEntity(164U);
    msg.setDestination(39126U);
    msg.setDestinationEntity(216U);
    msg.command = 85U;
    msg.htime = 0.358678007405;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 76U;
    tmp_msg_0.htime = 0.813863885136;
    tmp_msg_0.context.assign("TCSRIRGFZHXTVXKBQVQBICGRFLUOFUILDNLJWFZOBYUQIEXMLGGNXHMPKCYIKMSRAJJRGOADQSODUQKCJWYQDINPYOVNMPEDDSBXXZHHYHGZHJIHKOBMWQCDSVFTZQDFAMOSWKYGWWDVZPOVUEUGRGKLJLALJNJEUYOROBMWZTPCNERBFUUJAMPSCYNTHNPRTXLDEXPYSAWAQBNMGTCTEZVEKKRSFIAXPVBVAFEZJ");
    tmp_msg_0.text.assign("WHCJFJKIZXCQKOZOMLXCLIRVNIDEIDOATXMRBFGZQWYVLXFVRQKEWGNVFJUPQGQSLJBENI");
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
    msg.setTimeStamp(0.925226748952);
    msg.setSource(44956U);
    msg.setSourceEntity(45U);
    msg.setDestination(52229U);
    msg.setDestinationEntity(253U);
    msg.command = 102U;
    msg.htime = 0.47576884264;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 125U;
    tmp_msg_0.htime = 0.542758022393;
    tmp_msg_0.context.assign("MWPNOQHPXTZRJORNHIAAGELTGQJRQDHDRSCPFHUXLKUJZKMMZTFTNOSZAGCBWWFSXOSWKAXBNIFPTLKGBWNVJHSSRADGSCXUHCVDWDJQUUQIEBOFYHTYJAVQEPYOJADGFCKVSUFKZEELUZWIBDVQYMLFZPQPUBLIQLHWPMVZJHPNYTFRTVKDSGYGBPAWVXUXEDIYBEALCQXVHGUCETZLROVMXMYIKYNLZOAJINKOCN");
    tmp_msg_0.text.assign("PMGRBSSQVWSRPZOJXGYLXPPLFUCWXQQALJDWTPFILQJCHQIGKLOLDXYV");
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
    msg.setTimeStamp(0.596936755882);
    msg.setSource(22989U);
    msg.setSourceEntity(140U);
    msg.setDestination(8057U);
    msg.setDestinationEntity(90U);
    msg.command = 76U;
    msg.htime = 0.27195931514;

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
    msg.setTimeStamp(0.0674261482678);
    msg.setSource(40418U);
    msg.setSourceEntity(7U);
    msg.setDestination(10200U);
    msg.setDestinationEntity(219U);
    msg.op = 71U;
    msg.file.assign("AZDFQWXOPQKDXGRUCGNZGYELVNSQJHSQZXTDXFFRGLANLQTWZNOILMSFRDLSTHBIWXTPIHJSMCATUCFQVRNNPYZFIHKUEBHWASOYPJDCZTNVRQPGAERIDSOISKHWCEWEVAIZOPWUCBJAOKFKHNCIOUXZVPBAGDJBIYFMSLYUVLUWMHUCAQJMXNMSTVJYZGKGUOZYYIDEEHGURCJWMYMBVF");

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
    msg.setTimeStamp(0.942307119011);
    msg.setSource(7386U);
    msg.setSourceEntity(94U);
    msg.setDestination(3317U);
    msg.setDestinationEntity(228U);
    msg.op = 36U;
    msg.file.assign("HZTCLDNIJJAJBGLPDWVFEBFOKVDRXPBPITKQOUVB");

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
    msg.setTimeStamp(0.997787159405);
    msg.setSource(60385U);
    msg.setSourceEntity(211U);
    msg.setDestination(15349U);
    msg.setDestinationEntity(9U);
    msg.op = 73U;
    msg.file.assign("ARQVCZXBONWJMBWCEQGSFWZXJKLXIGCIUYGDLKDBEYYNAGNSDWZTADYVARGQUSFTXDQSLTQAEGTPRQQFZPPSWUOSDBRJQEHHRPGYMQZVIVUCIMMHYCJBOKIOMRYUMNXJINHFLASDLFLITXZFRCUPLJCDTMYVPQJNEWHNSWRKCABMOFUEEUJWZXXIMPG");

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
    msg.setTimeStamp(0.863719689065);
    msg.setSource(50032U);
    msg.setSourceEntity(29U);
    msg.setDestination(4222U);
    msg.setDestinationEntity(45U);
    msg.op = 75U;
    msg.clock = 0.951392752781;
    msg.tz = 56;

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
    msg.setTimeStamp(0.803730908882);
    msg.setSource(40893U);
    msg.setSourceEntity(11U);
    msg.setDestination(39097U);
    msg.setDestinationEntity(172U);
    msg.op = 142U;
    msg.clock = 0.497046555183;
    msg.tz = 50;

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
    msg.setTimeStamp(0.188531613621);
    msg.setSource(50381U);
    msg.setSourceEntity(239U);
    msg.setDestination(20589U);
    msg.setDestinationEntity(65U);
    msg.op = 23U;
    msg.clock = 0.499678759257;
    msg.tz = 72;

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
    msg.setTimeStamp(0.592149486104);
    msg.setSource(27548U);
    msg.setSourceEntity(249U);
    msg.setDestination(11808U);
    msg.setDestinationEntity(106U);
    msg.conductivity = 0.60457936862;
    msg.temperature = 0.782244721896;
    msg.depth = 0.748208075344;

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
    msg.setTimeStamp(0.052878368024);
    msg.setSource(47764U);
    msg.setSourceEntity(103U);
    msg.setDestination(47651U);
    msg.setDestinationEntity(17U);
    msg.conductivity = 0.0667987048184;
    msg.temperature = 0.172986046085;
    msg.depth = 0.461287823213;

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
    msg.setTimeStamp(0.262725910462);
    msg.setSource(40380U);
    msg.setSourceEntity(142U);
    msg.setDestination(8517U);
    msg.setDestinationEntity(87U);
    msg.conductivity = 0.193447522498;
    msg.temperature = 0.646143061691;
    msg.depth = 0.75604079948;

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
    msg.setTimeStamp(0.582477110075);
    msg.setSource(31487U);
    msg.setSourceEntity(131U);
    msg.setDestination(3690U);
    msg.setDestinationEntity(100U);
    msg.altitude = 0.857372601011;
    msg.roll = 38488U;
    msg.pitch = 6202U;
    msg.yaw = 20213U;
    msg.speed = 1535;

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
    msg.setTimeStamp(0.350485697571);
    msg.setSource(56260U);
    msg.setSourceEntity(229U);
    msg.setDestination(36370U);
    msg.setDestinationEntity(6U);
    msg.altitude = 0.285710724086;
    msg.roll = 23163U;
    msg.pitch = 40186U;
    msg.yaw = 15307U;
    msg.speed = 15258;

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
    msg.setTimeStamp(0.623497511825);
    msg.setSource(51093U);
    msg.setSourceEntity(214U);
    msg.setDestination(29735U);
    msg.setDestinationEntity(102U);
    msg.altitude = 0.245060717525;
    msg.roll = 38532U;
    msg.pitch = 35522U;
    msg.yaw = 57809U;
    msg.speed = 3213;

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
    msg.setTimeStamp(0.791512651455);
    msg.setSource(11391U);
    msg.setSourceEntity(154U);
    msg.setDestination(879U);
    msg.setDestinationEntity(73U);
    msg.altitude = 0.878646305532;
    msg.width = 0.968083616224;
    msg.length = 0.119995736156;
    msg.bearing = 0.275308992139;
    msg.pxl = -19186;
    msg.encoding = 103U;
    const char tmp_msg_0[] = {87, 120, 15, -91, -30, -110, 4, -83, -83, -80, 48, 105, -101, -50, -52, -41, 89, 13, -53, -21, 35, -87, -65, 22, -112, -96, 14, 19, -41, -116, 116, 59, -103, -50, 88, -28, 58, 84, -75, 78, -96, 106, -79, 1, 108, 110, 107, 3, 87, -108, -24, -36, -22, 120, 101, -26, 77, 89, 48, -31, -53, -48, 6, 72, -53, -60, 46, -7, -75, -92, -41, -60, 93, 69, -117, 100, 126, 100, 83, 59, -123, 100, -17, -35, 15, -54, -78, 126, 116, -91, 34, 52, 91, 5, 69, -98, 37, 26, 57, 106, -19, 91, -120, -70, 93, 57, -56, -69, 62, 109, 10, -74, 38, 35, -12, 90, -9, 65, 119, 111};
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
    msg.setTimeStamp(0.361523597592);
    msg.setSource(10859U);
    msg.setSourceEntity(165U);
    msg.setDestination(32290U);
    msg.setDestinationEntity(148U);
    msg.altitude = 0.814862143993;
    msg.width = 0.127934826982;
    msg.length = 0.340099274827;
    msg.bearing = 0.533844743411;
    msg.pxl = -7147;
    msg.encoding = 75U;
    const char tmp_msg_0[] = {-107, 104, -62, 119, -3, -46, -126, -69, -81, 120, -126, -88, 64, -54, -45, -25, -112, -97, -32, -29, 100, 81, 24, 75, -36, 24, 1, 103, 71, 94, -30, 87, 63, -127, 103, -17, 40, -122, 0, 73, 29, -4, -66, 46, -19, -2, 23, -115, -87, -120, -6, 61, -15, 36, 72, -24, 120, -125, 14, 41, 45, -14, 77, -11, -90, 109, -50, -78, 0, -68, -50, -78, -23, -17, -91, -96, -82, 78, 72, -92, -118, -128, -109, -74, 115, -33, -44, -15, 42, -67, 62, 15, -57, -37, -102, 54, -19, 92, -66, -27, -68, -66, 82, -37, 22, 71, 15, -17, -91, 82, -8, 106, 25, 100, 28, 46, 114, 14, 21, -69, 107, 76, -79, -38, -3, 110, -39, -10, 37, 72, -116, 115, -56, 122, -67, 114, -49, 119, -73, -6, 22, 51, -85, 68, -71, -117, -121, 13, -106, -105, 55, 104, -62, 18, -121, -3, -61, 95, -121, -95, -123, 7, 41, -111, 52, -86, 53, -102, 69, -23, -15, -95, -66, -72, 34, 106, 16, -80, -123, 49, 5, -111, 110, 41, 36, -40, -16, 20, 120, -47, 18, 34, -96, -53, -73, -35, 63, -4, 65, -72, 64, -84, 115, 23, -75, 126, -109, 110, -30, 76, 71, -118};
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
    msg.setTimeStamp(0.977548660395);
    msg.setSource(55374U);
    msg.setSourceEntity(161U);
    msg.setDestination(58270U);
    msg.setDestinationEntity(240U);
    msg.altitude = 0.621888628693;
    msg.width = 0.0988541145856;
    msg.length = 0.59981488426;
    msg.bearing = 0.0429941510758;
    msg.pxl = -16686;
    msg.encoding = 199U;
    const char tmp_msg_0[] = {10, 27, -128, -24, -23, -40, 1, -74, 92, -61, -101, 5, -75, -82, 117, 124, -83, -56, 33, 118, -44, 15, -5, 42, 97, -104, 107, -116, -24, -22, 28};
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
    msg.setTimeStamp(0.654680517186);
    msg.setSource(42315U);
    msg.setSourceEntity(61U);
    msg.setDestination(14880U);
    msg.setDestinationEntity(246U);
    msg.text.assign("NDSYURJKUXRKWQXSTGMKFLYAVMTSUAFJZQXATHURUKCBNWCKNDHMOIIEXPYTZXUOZRYTWSTROTCDLDUCGGOJDZEYBSCMNJCQXYWZHGOWIHMPPYJMJBUQECBXLOOQWQIJZMKIGDAGFHJCLEPLNTHQVPHPEVIFLYSNIBTGHIPXASQAZR");
    msg.type = 80U;

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
    msg.setTimeStamp(0.748402725729);
    msg.setSource(61331U);
    msg.setSourceEntity(71U);
    msg.setDestination(40444U);
    msg.setDestinationEntity(254U);
    msg.text.assign("QIVQNEZMIOKJHHLLKMRBSSESTDKENOOMGZPVBXYVEVDACDXZAMRFYJCZFJWXOMIXXKDDLVCGPSNTXOFYQXJFGLUGPPRCYOWYIILYLWCBEGMZCTUJNNWYBUPTSBIKFMCUGWDSQAKTYREZWUVXZVHDFRNGFQQFHVPWMSCRIASRKGLVONUQPLZYAHPUHDIEYJDJRDQEMZKBT");
    msg.type = 161U;

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
    msg.setTimeStamp(0.135747574141);
    msg.setSource(15134U);
    msg.setSourceEntity(3U);
    msg.setDestination(15039U);
    msg.setDestinationEntity(205U);
    msg.text.assign("GPORGDJYSZXWXZTEYETPOAJZVTREPTXOXKKRHLWVZQQDWCWCBSQPGBBOFCHHDNBCYXMZNGPAFUQQYJENRNKUJBRCSYLSCIQCGWYMUUNZYSBOHXEFTSPXGQVKWOFWIZUVTSWNRABLDCJNMKZERMAPMDEBPCQHAXHLSVFDPFIHKBAUJMO");
    msg.type = 205U;

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
    msg.setTimeStamp(0.261586147735);
    msg.setSource(42031U);
    msg.setSourceEntity(74U);
    msg.setDestination(61807U);
    msg.setDestinationEntity(172U);
    msg.parameter = 85U;
    msg.numsamples = 170U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 60839U;
    tmp_msg_0.avg = 0.942894497611;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.237672945122;
    msg.lon = 0.479725430934;

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
    msg.setTimeStamp(0.353596959173);
    msg.setSource(3236U);
    msg.setSourceEntity(229U);
    msg.setDestination(16730U);
    msg.setDestinationEntity(175U);
    msg.parameter = 131U;
    msg.numsamples = 241U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 50639U;
    tmp_msg_0.avg = 0.255964477351;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.78020141581;
    msg.lon = 0.218924073746;

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
    msg.setTimeStamp(0.157312126659);
    msg.setSource(44999U);
    msg.setSourceEntity(30U);
    msg.setDestination(5947U);
    msg.setDestinationEntity(222U);
    msg.parameter = 140U;
    msg.numsamples = 187U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 18870U;
    tmp_msg_0.avg = 0.369140749563;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.975675208441;
    msg.lon = 0.733286625687;

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
    msg.setTimeStamp(0.97936427946);
    msg.setSource(16595U);
    msg.setSourceEntity(212U);
    msg.setDestination(30473U);
    msg.setDestinationEntity(237U);
    msg.depth = 49630U;
    msg.avg = 0.998119519128;

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
    msg.setTimeStamp(0.789538471774);
    msg.setSource(33746U);
    msg.setSourceEntity(145U);
    msg.setDestination(48716U);
    msg.setDestinationEntity(68U);
    msg.depth = 42056U;
    msg.avg = 0.791210498968;

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
    msg.setTimeStamp(0.427902666805);
    msg.setSource(57578U);
    msg.setSourceEntity(73U);
    msg.setDestination(15703U);
    msg.setDestinationEntity(86U);
    msg.depth = 23793U;
    msg.avg = 0.892818598305;

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
    msg.setTimeStamp(0.678491117181);
    msg.setSource(21001U);
    msg.setSourceEntity(112U);
    msg.setDestination(31050U);
    msg.setDestinationEntity(235U);

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
    msg.setTimeStamp(0.0740429204437);
    msg.setSource(4979U);
    msg.setSourceEntity(1U);
    msg.setDestination(46982U);
    msg.setDestinationEntity(179U);

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
    msg.setTimeStamp(0.0632836903251);
    msg.setSource(3556U);
    msg.setSourceEntity(111U);
    msg.setDestination(26470U);
    msg.setDestinationEntity(176U);

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
    msg.setTimeStamp(0.524945190981);
    msg.setSource(12506U);
    msg.setSourceEntity(251U);
    msg.setDestination(17750U);
    msg.setDestinationEntity(183U);
    msg.sys_name.assign("ZOLFFLSYRUQCSDAIDNRPMUQIHZWDUEOZNERPGUKTBMGXCZZZOZFUXSFIIJJJVYOPCNHRFSVAWEUPPYZDHBEJQXGRLIQFVWVTJQNETEVSXQDKWSFUGWCWSMOTLQNCEFBYXQRLOJHCPXBBKONZMCKIRSLKJH");
    msg.sys_type = 226U;
    msg.owner = 222U;
    msg.lat = 0.296935619868;
    msg.lon = 0.100572915159;
    msg.height = 0.248574922253;
    msg.services.assign("VNCCQENJOHJZWGQIAAYHVUZPYHSKUZZICUKRKAIJZLJXMUJOUUHLYXZDWDBMIOWVPAVESVSEEBQWAAPRMVITCHITHPGYNCSDRSSOXQWBJNLWNDMCLORNWYRZVMHTFUPJFESGBJZORRMGGIJTEBWDFOTDFNWVAIKLKAZAED");

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
    msg.setTimeStamp(0.820710104383);
    msg.setSource(30836U);
    msg.setSourceEntity(253U);
    msg.setDestination(44983U);
    msg.setDestinationEntity(220U);
    msg.sys_name.assign("URGFKSZCZINXOZNTMDSMVDTWQCUGKIVBRYZEYEGMHLOKCAKMEUFMGOIISLFYJUFTAGDJAEMDDKLSAFPBBCIJNFQCVXNBDVPUVKEFZVQSCKPLUERHIMHWGNDWEFNDWYUIBKAHYQHRYFXJMAZPJCLXMJYJMAXXUTW");
    msg.sys_type = 147U;
    msg.owner = 18789U;
    msg.lat = 0.179177837552;
    msg.lon = 0.838809536196;
    msg.height = 0.68571834331;
    msg.services.assign("PUEQGMZSAOLSS");

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
    msg.setTimeStamp(0.5067603212);
    msg.setSource(49510U);
    msg.setSourceEntity(120U);
    msg.setDestination(19123U);
    msg.setDestinationEntity(40U);
    msg.sys_name.assign("ABILCGLCFKNABQKERSDYKRTICIUBQYMPWXYTDZHZJWJUVZGGRJYXPFDWWYLCMQBXSXMJPNXKBGYUIHLRFBEJRJHDWYKDECVLWEHHSRQEMWFNLDEZZUJOTBCYANEMVKZOLB");
    msg.sys_type = 253U;
    msg.owner = 18226U;
    msg.lat = 0.756938334399;
    msg.lon = 0.300151828117;
    msg.height = 0.303180142044;
    msg.services.assign("NWCGEKLXTHLYLARYDOGLIYPUWLNGGJCNEKJWCPKSSHYNYEHRBBLKHWRCOWECIHHODEJHFYZYUROVEVMBMFVQMPVZHWKANDW");

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
    msg.setTimeStamp(0.492321612161);
    msg.setSource(59251U);
    msg.setSourceEntity(189U);
    msg.setDestination(42334U);
    msg.setDestinationEntity(91U);
    msg.service.assign("TJDDQOHWNKUXYCVV");
    msg.service_type = 195U;

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
    msg.setTimeStamp(0.029096983528);
    msg.setSource(3146U);
    msg.setSourceEntity(237U);
    msg.setDestination(53593U);
    msg.setDestinationEntity(122U);
    msg.service.assign("OKXUENPYLDIDLCKTGCKPDTDFGSGQWBCINZSTQRBFPJWMTWUPZCJAZPZVIWVTWAWFAYUHIHZMFBSQNOCOESXUXTE");
    msg.service_type = 147U;

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
    msg.setTimeStamp(0.632621860028);
    msg.setSource(4977U);
    msg.setSourceEntity(191U);
    msg.setDestination(23477U);
    msg.setDestinationEntity(116U);
    msg.service.assign("SMBWBFTOLMHHVCWGYXNBZTEPUIDYUULWCQXXRNMAYRWYZQLUEONSJYVGVJHDNNMSTFGAZUGZ");
    msg.service_type = 108U;

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
    msg.setTimeStamp(0.217229001981);
    msg.setSource(26191U);
    msg.setSourceEntity(247U);
    msg.setDestination(61052U);
    msg.setDestinationEntity(110U);
    msg.value = 0.411952484941;

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
    msg.setTimeStamp(0.767422070952);
    msg.setSource(38482U);
    msg.setSourceEntity(23U);
    msg.setDestination(39192U);
    msg.setDestinationEntity(153U);
    msg.value = 0.571924309774;

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
    msg.setTimeStamp(0.0344241578491);
    msg.setSource(41426U);
    msg.setSourceEntity(109U);
    msg.setDestination(51764U);
    msg.setDestinationEntity(79U);
    msg.value = 0.226903360756;

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
    msg.setTimeStamp(0.0917201348911);
    msg.setSource(54471U);
    msg.setSourceEntity(81U);
    msg.setDestination(5335U);
    msg.setDestinationEntity(197U);
    msg.value = 0.712816808739;

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
    msg.setTimeStamp(0.505650400363);
    msg.setSource(53502U);
    msg.setSourceEntity(122U);
    msg.setDestination(26789U);
    msg.setDestinationEntity(227U);
    msg.value = 0.718175387905;

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
    msg.setTimeStamp(0.87775197258);
    msg.setSource(51323U);
    msg.setSourceEntity(89U);
    msg.setDestination(64108U);
    msg.setDestinationEntity(217U);
    msg.value = 0.582473135537;

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
    msg.setTimeStamp(0.967708829061);
    msg.setSource(32934U);
    msg.setSourceEntity(34U);
    msg.setDestination(63597U);
    msg.setDestinationEntity(197U);
    msg.value = 0.00950186112354;

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
    msg.setTimeStamp(0.140838390575);
    msg.setSource(5916U);
    msg.setSourceEntity(163U);
    msg.setDestination(54105U);
    msg.setDestinationEntity(212U);
    msg.value = 0.544525783013;

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
    msg.setTimeStamp(0.320404332018);
    msg.setSource(41274U);
    msg.setSourceEntity(50U);
    msg.setDestination(25972U);
    msg.setDestinationEntity(158U);
    msg.value = 0.545156221028;

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
    msg.setTimeStamp(0.560058106748);
    msg.setSource(21480U);
    msg.setSourceEntity(164U);
    msg.setDestination(16210U);
    msg.setDestinationEntity(206U);
    msg.number.assign("KCUOEYQUSFWJLXFVNVLQPLRYIAECMUTQNLUASNTVYFZFGOUCTCH");
    msg.timeout = 52873U;
    msg.contents.assign("CACTSJEHVJMBALMMVZXOEDUVNGLAWPVTNFJBVXHSBFSXDSHJNGDSHYONMEFBQJGPPZFTTEGQQDMHPGUSTEURBOKHUQDWBBBZLZKFYIDXVMIIKKLPKZAFMHCIGKDVTXOAUJHYPQOLNIZUNWGGUACFKNCVKIMFVXEWYTQRAROFR");

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
    msg.setTimeStamp(0.0947176696195);
    msg.setSource(63459U);
    msg.setSourceEntity(161U);
    msg.setDestination(41947U);
    msg.setDestinationEntity(185U);
    msg.number.assign("BXTSYWYLULMFMFYVMGXUTAEDXMDFGSEHYVRLLEKMARBHBDHCPBILUZADIKMORDJAGKKSGJTQJKFUYNIOXOIFCJIPFNQPFZOKJMZNETTZBHMRHZH");
    msg.timeout = 49183U;
    msg.contents.assign("CTAUGAMQJQFGYGOVLFZKEVJEMQSIGBKUMBEBNPVIIDMXQLRYXDMYXPNSWQTWKFUDVULUIJMPRGCMTNOZYGWPCUJLHEXLBWOAEZAHKIYKGSAXWTIDAOCKWAZPTVRPMXCGRAGPRNTTHSSNELLQPBWCRWDSBZFGDWDPHUISQNBQBJCBSFHQBLKNHUHHKFFARYJCYEDHZVSYVMZDNZOJQJKFCZFTEOILCUTNRWYDIRMJVPYTZXOOONFRHJVL");

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
    msg.setTimeStamp(0.937668134924);
    msg.setSource(34280U);
    msg.setSourceEntity(118U);
    msg.setDestination(1329U);
    msg.setDestinationEntity(205U);
    msg.number.assign("USEQDDIYJFKPNYMFSBUDNVLUSRYRORZSTKVKHMTVNIJCGXIMXKNZZEJYPFHAWOFM");
    msg.timeout = 14187U;
    msg.contents.assign("XXQAAEYRQSLFTMZJTLJYQEOBMZBDWKQKHVSISOUMAOQDJDUDRWXJPFXWQWLPPFUTPAEELTUPBAGGNYVMGXKZKDZKFZHQLCFRNDIYDMDSCFWXLUAFGWHFPKYIAVCGOVJITRZBGBSUQOIJHWNPROCZPCGHGRLU");

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
    msg.setTimeStamp(0.208198262391);
    msg.setSource(11993U);
    msg.setSourceEntity(224U);
    msg.setDestination(22933U);
    msg.setDestinationEntity(0U);
    msg.seq = 736800405U;
    msg.destination.assign("PDIAQSRUZJZUFMQUNPLCRLAGJDYOELHEMWJWXFRDXDFNBWVTUBQVCGYWGADPJSADPAXZIDFYKSNCTZZIGWKRBGSJQXTROXNUYRJFSKWNJXLICHUEGGEBKWZSXVMPVYCFEEVMTHAUKOOBFVTSCSBFNDVLANPEZEJMFIOYHYOKRDKDUCUHHCFHHQTPPAZECZAOJBIUNSGMTTGSLLTXROMWQTLKICKLVOMV");
    msg.timeout = 45050U;
    const char tmp_msg_0[] = {-41, -87, 120, 24, -91, -42, 22, 105, -80, -22, -29, 107, 104, -95, -44, -105, -21, -61, 48, -5, 32, 20, 50, -71, 70, 83, -30, -63, 42, 117, -36, -35, -52, 81, -115, -76, 87, 57, -6, 112, -68, 71, -23, -30, -86, 48, -124, -22, -23, 12, -119, -96, 19, 101, 77, 17, 121, 11, 57, 113, 65, 48, -14, -118, 63, 114, -65, -24, -20, -120, -11, 13, 81, 102, 8, -2, -72, 58, 43, -124, 25, -47, -61, -98, -9, 120, 68, -52, 126, 81, -49, 4, -56, 43, -84, 121, 64, -127, -23, 9, 25, 90, -2, -95, -23, -95, -114, 32, 125, -108, 118, 12, -1, -42, -100, -51, 112, -11, 52, -36, -105, -28, 102, 18, 27, -77, -85, 23, 104, 106, 4, 83, 49, -47, 4, -86, -79, 98, 70, -96, -47, 85, -92, -37, 91, 102, 75, -10, 126, 43, 44, 49, -7, 67, -104, 118, 69, -19, 57, -60, 94, 93, 11, 126, -125, 66, -62, -38, -38, -75, -40, 55, -11, 73, 4, 50, 113, -119, -48, -76, -40, 101, 26, -125, 83, 111, 99};
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
    msg.setTimeStamp(0.642972402912);
    msg.setSource(16398U);
    msg.setSourceEntity(31U);
    msg.setDestination(57742U);
    msg.setDestinationEntity(5U);
    msg.seq = 728844353U;
    msg.destination.assign("TRLPTNAXZINOMTVRBRKQTHLWGOBBWIQYSATZLKYAJBIFGKQGMDCCBOOCZ");
    msg.timeout = 13135U;
    const char tmp_msg_0[] = {-92, -27, -43, -5, 40, 56, -119, 102, 94, 109, -88, 69, -105, -87, 46, 125, 44, 92, 19, 42, -43, -126, 106, -58, 50, -56, 87, -47, -74, -67, -54, 119, -100, -57, -19, 45, 55, -38, 17, -49, 19, 59, 80, -103, -55, 102, 74, -50, 83, -65, 119, -116, -38, -3, -72, -125, 9, 53, 22, 21, 37, 83, -19, 84, 36, -48, -112, 19, -80, -100, 3, -108, 17, -13, -88, 85, -18, -102, -106, 60, -104, 104, -36, 47, -29, -95, -24, -24, -67, 41, -87, 27, 81, -52, 93, 60, 55, -35, -117, -116, 110, 31, 54, 61, -14, 110, -34, 102, 119, -62, 65, 77, -97, 16, 56, -71, 3, 94, 12, 49, -2, -95, -23, -72, -2, 122, 80, 65, 102, -74, -122, 70, 82, -63, 72, 14, -22, -70, -116, 118, 101, 125, 23, 16, 30, -39, 68, -103, 12, 53, 117, -64, 122, -41, 57, 7, -76, 18, 110, 32, -1, 86, -34, 6, -37, 47, -2, 45, 17, 51, 46, -121, -7, 39, -4, 34, 124, -119, -76, 72, -121, -22, -106, 96, -84, -92, -8, 83, -50, 33, -18, 71, -127, -93, -33, -112, 2, -11, 57, -73, -113, -71, -73, -95, -67, 112, 54, 125, 85, 70, 4, -3, 36, -12, -120, -63, -68, -51, 117, 96, -94, -62, 75, -11, -98, 120, 14, 116, 125, -20, -84, 76, 2, -21, 100};
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
    msg.setTimeStamp(0.0181825157766);
    msg.setSource(28019U);
    msg.setSourceEntity(42U);
    msg.setDestination(2427U);
    msg.setDestinationEntity(174U);
    msg.seq = 3165391868U;
    msg.destination.assign("PTEBGEJVBKAGFNUDVFUIOMFPNJEPROLQYZAPKCHLOBBKUHAAZAXOEVVZRAURM");
    msg.timeout = 17436U;
    const char tmp_msg_0[] = {28, -37, 106, 122, -111, -88, 104, 61, 85, 75, 89, 33, -55, 118, 40, 119, 39, 90, -12, -89, -26, 101, 11, 32, -116, 3, 19, 94, 86, 48, -59, -25, 8, 35, 95, 19, -94, -98, -63, -4, 82, 50, 28, 8, 99, 27, -25, 94, 14, 113, 117, 24, -7, -104, -1, 28, -108, 95, -27, -77, -81, -14, 62, -112, 40, -26, 120, -79, -10, 74, 19, 100, -124, 114, 49, -86, 84, -121, -85, -99, 88, -86, 45, 81, -86, 7, 106, 7, 58, 5, 94, 14, 15, 102, 84, 40, 16, -8, -113, -12, 125, 14, 67, 125, 22, -27, 38, 63, -112, 71, 42, 6, 13, 120, -106, -102, -24, -117, -74, 123, -83, -26, 68, 119, 12, -50, 102, -66};
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
    msg.setTimeStamp(0.785424181441);
    msg.setSource(28240U);
    msg.setSourceEntity(216U);
    msg.setDestination(24573U);
    msg.setDestinationEntity(230U);
    msg.source.assign("KDGHVECIOCZI");
    const char tmp_msg_0[] = {-62, 67, -19, 120, 13, -9, 58, 94, -62, 64, -37, -104, 39, -60, -92, -6, -95, -98, 29, -84, -25, 45, -25, 29, 87, 27, 122, -21, 122, -98, -67, -26, -112, 28, -126, -110, -35, -4, 102, -78, 35, 119, 77};
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
    msg.setTimeStamp(0.992057258429);
    msg.setSource(8000U);
    msg.setSourceEntity(165U);
    msg.setDestination(12533U);
    msg.setDestinationEntity(193U);
    msg.source.assign("DTHODOWNHBJRVSEFTHHXHKOPQFKV");
    const char tmp_msg_0[] = {-41, 43, -121, 33, 15, 64, -71, 74, -11, 53, 42, -46, 104, -58, 6, 88, 96, 117, -60, -30, -57, -117, 17, 113, -116, 33, -79, 86, -47, 66, -3, -10, 18, 100, -25, 110, -13, -28, -61, 117, -73, 49, -108, -46, -127, 86, -102, -119, -87, 46, 33, 112, -47, 24, -31, 69, -109, -66, -82, 20, -114, 111, 72, -24, -123, 111, -23, -116, -112, 9, -114, -23, -21, -19, -31, -16, 81, 54, 9, 94, 45, -126, 126, 16, 30, -70, -73, -50, 109, 106, -128, -53, -33, 62, -20, -70, -22, -11, 22, -41, 68, 44, -115, 74, 30, 17, 36, 113, 80, -54, 97, 98, 88, 94, 70, -94, -18, 67, -101, -82, -78, -50, 124, -113, 69, 100, 69};
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
    msg.setTimeStamp(0.95948286954);
    msg.setSource(33407U);
    msg.setSourceEntity(53U);
    msg.setDestination(1320U);
    msg.setDestinationEntity(174U);
    msg.source.assign("OFUACFASNYTQLOJNRMPBTSMJYUWQAGRFSTLAXLESCVBCGHYUNCXRBZJRYGQDLDJVPKRZVACEPCOTMXSLYBMFBLDTGZWPHTLPQOUJQDJRMQHCEAGFWKIBEMWMENUODXPAAYAHDLHDQZMYKWNKUVPYNWYVMIUGWHMXVDXXIZOSRNZWCIQVKNKHGCTFRJNOIRIJJEUTUHLZWIHBEWP");
    const char tmp_msg_0[] = {113, 78, -24, -70, 87, 43, 65, -101, 64, 109, -77, -87, -99, -122, -31, 125, 67, 125, -44, 45, 110, 40, 4, 59, -49, -122, 31, -123, -72, -11, -124, 61, -102, -107, -24, 21, -14, -33, -88, 26, 91, -82, 8, -56, -127, 116, -71, -39, 30, -7, 109, -87, 18, -22, 23, -90, 41, -70, -93, 30, 81, -85, 89, 19, -50, 124, -104, 57, 61, -31, -26, -38, 57, -63, -44, -99, -96, 5, 54, -15, -79, -73, 76, -37, -92, -51, 64, 99, -93, 40, -40, -108, -123, -119, 47, 113, -43, -29, -8, -21, -47, 30, -44, -38, 4, -92, 48, -82, -25, -80, 40, 78, -48, 19, -49, 56, 113, 104, 61, -102, -73, -110, 31, 1, 47, 19, 76, 69, -46, -69, 59, 31, 7, 45, -71, 99, 53, -76, 26, -42, -89, -68, -91, -84, 62, 113, -128, 50, 79, -51, -88, -112, 112, 122, 3, 35, 25, -64, -60, 38, 45, 23, 103, -38, -3, -13, -82, 44, 10, 104, 38, 103, -9, 64, 85, 37, 45, -124, 45, -113, 112, 109, 38, -32, -70, 28, 72, 95};
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
    msg.setTimeStamp(0.945732287468);
    msg.setSource(41051U);
    msg.setSourceEntity(88U);
    msg.setDestination(7699U);
    msg.setDestinationEntity(127U);
    msg.seq = 3856322681U;
    msg.state = 33U;
    msg.error.assign("TZBJHMTHEEWKPLJKAVOVKFMXKNPCPYQRLGYNJLUSRKHXOIRTCPTZSSABDEN");

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
    msg.setTimeStamp(0.467541261976);
    msg.setSource(40466U);
    msg.setSourceEntity(37U);
    msg.setDestination(46243U);
    msg.setDestinationEntity(168U);
    msg.seq = 792630016U;
    msg.state = 162U;
    msg.error.assign("WNPVZJQRTALPCNZPGVBWKZBRCQLGEQHMVQOPLZRYDNBGCFHHIZUXLXEXQDSQB");

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
    msg.setTimeStamp(0.274730217071);
    msg.setSource(37246U);
    msg.setSourceEntity(38U);
    msg.setDestination(50518U);
    msg.setDestinationEntity(5U);
    msg.seq = 3454860378U;
    msg.state = 226U;
    msg.error.assign("YDVRGTUXKWA");

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
    msg.setTimeStamp(0.540164427192);
    msg.setSource(37765U);
    msg.setSourceEntity(42U);
    msg.setDestination(60351U);
    msg.setDestinationEntity(115U);
    msg.origin.assign("JMXRBDVGSGHCTIBKOHPKFTPQUURB");
    msg.text.assign("XTYAPOVKSNRRPBKFREZNGPWXBEPDCWNMQQBIPJYZAAXYKYALCHSOSXCVJRENEIBZJBVPJWQUHCDEJEYIMKS");

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
    msg.setTimeStamp(0.904838105164);
    msg.setSource(7810U);
    msg.setSourceEntity(60U);
    msg.setDestination(17423U);
    msg.setDestinationEntity(217U);
    msg.origin.assign("HDBYNSUXIBOOTNZHFBHFTVEHOWUXDQKKNLJZJGYQWIXBKVEQPFCDOUASZRVPAMPDGVBEXC");
    msg.text.assign("GLNMJSTYCVXFFVOKSEPXZMTQDKKRMPEIBFLVFFYYCAHUBKSAUZNXTZZINTQDNCJKCRPEDQOMDJPZMEXUAFXKRYMILSNVFIYIGIBVYINUAVAGWHSLKJOVTLHBOQZEWFTQUPEVO");

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
    msg.setTimeStamp(0.680742745436);
    msg.setSource(21255U);
    msg.setSourceEntity(18U);
    msg.setDestination(25472U);
    msg.setDestinationEntity(71U);
    msg.origin.assign("GVEOSSRHWMUDBYSTTCNWRYRDQIYUHTMFARUDUHXDFATOHVIZNUNMMDKSLVYQIGNIXMFKBBOEEIIKPCIETQQZYSSRLRNFIVXXIQEAOJSUSQHZPQZOTZTTAWBUJKPCJZAXFWWYHWPGECBXVFRTKXLOANMWVBGXWGZLJZYVYMIJDOQBNODQGPQNAZZRYCAABCHEDJJEVFXMAVELULTOLJLHDCOPYEGG");
    msg.text.assign("EGYPAJBKSNWSFORHQBLKUCTAZ");

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
    msg.setTimeStamp(0.0924200874885);
    msg.setSource(39826U);
    msg.setSourceEntity(50U);
    msg.setDestination(1253U);
    msg.setDestinationEntity(26U);
    msg.origin.assign("UDWABDKXUWSDSTAEPGGTOMLQTKNTIYVAHGYHPCVIAQNTVTWSWVXHMEBQNBJIRNVELQAVPOLEIYCZXXQNGMHYIANZXRCCQFFKKXIDWGTNFUHHMUPHIXDZROYMY");
    msg.htime = 0.581164846044;
    msg.lat = 0.32560172394;
    msg.lon = 0.741238880339;
    const char tmp_msg_0[] = {32, -95, 60, 70, 69, 62, -41, 32, 66, -40, -86, 99, -3, 116, -96, 23, 45, -56, -128, -63, 40, 110, -46, 82, -52, -109, 66, 114, -55, -16, 62, 107, -85, 20, 104, 125, -91, -55, 110, 100, -75, -123, 124, 81, 103, 99, 106, 43, -62, -107, 105, -30, -111, 93, 65, 15, 100, 61, 110, -113, -23, -90, 31, 102, 34, -123, -41, -15, -26, -126, 32, 69, -82};
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
    msg.setTimeStamp(0.561487583949);
    msg.setSource(50041U);
    msg.setSourceEntity(115U);
    msg.setDestination(43378U);
    msg.setDestinationEntity(163U);
    msg.origin.assign("GITBNDWBMZRMYLLHKCGWOZXROVPCIEHFSNUUGAFLYCHAXYJBLOMTUHGXUOTUYNYJPVBQERMYUSBJZIZDPFKRQWBFIZIYKIVJDLQGWXENFFNJWHVBNMACJIDEHMKMLPPDVOCBMTEQCSGXPHDTPZVOJTFEYVAQQMKCSFZLNXKAQVSMYTRKKPBRTCBOXUPVSSUAROIRKODGEGAFZE");
    msg.htime = 0.93994443125;
    msg.lat = 0.187045094236;
    msg.lon = 0.964129142132;
    const char tmp_msg_0[] = {-3, 53, -1, -1, -22, 86, 57, -67, -117, 103, -121, 37, 21, -74, 68, 32, 116, 41, 7, -79, 120, 42, -88, 39, 16, -85, 118, -1, 32, -127, -44, -84, -47, 117, -115, 19, 26, -40, -70, 63, -20, -80, 58, -8, 104, -96, -42, 121, -46, 17, -67, 71, 93, 36, -55, 73, 41, -21, 96, -44, -59, -15, -68, -36, 20, -106, -36, -20, 107, -26, 65, 80, 112, -123, 110, -19, 32, -36, -73, -119, -19, 91, 89, -95, 54, -33, -96, -30, 113, 74, 65, 102, -30, 111, 123, 84, -22, -11, 41, -17, -93, -79, -19, -48, -11, -79, -105, 84, 67, -101, 0, 126, 63, -88, -102, -119, 113, 121, 43, -108, 32, -20, 2, 99, 10, 82, 85, 118, 116, -59, -64, -105, -74, 68, 84, 86, 88, -61, 98, 126, -56, -38, 24, -110, 73, -45, -97, -115, -53, 75, -110, -102, 89, 36, 12, -71, 6, 24, -46, 25, -122, -118, 124, -62, 20, -65, 77, -115, 124, 29, 34, 91, 125, -33, 2, -78, 73, -104, 76, -33, -105, -41, -15, 124, 75, -78, 63, -91, -57, -28, 43, -81, -123, 82, 93, -111, 25, 15, -56};
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
    msg.setTimeStamp(0.279601197019);
    msg.setSource(64358U);
    msg.setSourceEntity(127U);
    msg.setDestination(47613U);
    msg.setDestinationEntity(111U);
    msg.origin.assign("NMHWLMMQWFCRBYQLUBLSJVBSKRLXVSZYODPZYXCABPFRKNEMTRARXLJTSUDGDRPUMQKOIJAUVOPYXQZCEMDOTFHEBBJIMCSWRKCINIQCJWQVBGLUISYDDMBAEOWRJAEDEDQTNHKKAYPMOVZALDTHDYXGXFFKPIHGWXAGRHQVFBGHYIVWIGNBPWISILETN");
    msg.htime = 0.859843618107;
    msg.lat = 0.956085531158;
    msg.lon = 0.75012113654;
    const char tmp_msg_0[] = {-46, -115, -10, 98, 65, -4, -17, -32, -1, 112, 36, -44, -34, 40, 98, -3, 77, -30, -106, -16, -87, 69, 28, -87, -111, -93, -4, 93, 20, 64, 108, -122, -118, 49, 25, 54, -30, 114, -10, -75, -128, -102, 59, -58, -5, 51, -91, -1, 126, 26, 56, -52, -36, 70, 65, 73, 26, 42, 20, 29, -30, -70, 103, -51, 126, -33, 81, 119, -107, 61, -33, 36, -127, 10, 112, 35, -33, -90, -19, 78, 60, 84, 90, -60, 54, 121, 5, 67, 60, -91, 58, -68, -21, 96, -18, 73, -1, -11, -18, -108, 69, -11, -98, -59, 47, -66, -39, -75, 110, 55, -75, -41, -53, 106, -114, 82, -10, 71, -99, 54, -45, 65, -82, 1, -117, 126, -111, -27, 97, 89, -82, -14, -90, -122, -70, 43, -43, 8, -27, -39, -23, -50, 103, -64, -110, -122, 88, -80, -103, -107, -66, -24, -60, 99, -119, -94, 75, 90, -50, 0, -5, 22, -24, 18, -21, -9, -79, 96, -49, 4, -86, -69};
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
    msg.setTimeStamp(0.129044869329);
    msg.setSource(4532U);
    msg.setSourceEntity(204U);
    msg.setDestination(16887U);
    msg.setDestinationEntity(186U);
    msg.req_id = 29194U;
    msg.ttl = 50580U;
    msg.destination.assign("UUQCDLROPHAELFPUMKNXEBZRXNZOWARASGOAJHSZYZBQGAGVGDHBZHZNJDHOXNKPLWSMUBIHDYDJWNOEMGRTWXUYPCXAQEBPHVLZTCMFARVUPIEVKLEKRFXMIRKQYMSKINBKIPFLYYCIYFSJTGXFYQDIWFKCIADUWUXBNJOZVQGIYNMZQOFGJTRVJGDYWXHMJFSWQKJICQTHLDHBASPVTEOTLQ");
    const char tmp_msg_0[] = {-120, -27, -95, 106, -77, 25, -30, 107, 66, -24, 40, -102, 90, 31, -54, 99, -112, 38, 69, 39, 62, -21, 15, -21, 106, 10, 97, -105, -112, 0, -21, -18, -9, -115, 109, 113, -126, 83, 113, -11, -50, -94, 65, 125, -121, -3, -13, -72, -88, -126, 10, -68, 92, 117, 84, 63, -48, 90, -84, 43, -111, 54, 124, 58, -115, -7, -123, 32, 40, 70, 12, -34, -63, 77, -116, 33, 40, -62, 33, 31, -77, -41, -81, -77, -24, 83, 78, 1, 14, 109, -53, 39, -87, 36, -127, 35, 3, 71, 36, -35, 52, 44, 75, 56, -111, 51, -22, -44, 98, -128, -120, 1, 1, 47, -80, -55, 65, 80, -18, 42, 38, -111, 51, 115, 24, -109, -74, 109, 40};
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
    msg.setTimeStamp(0.836157158199);
    msg.setSource(61643U);
    msg.setSourceEntity(235U);
    msg.setDestination(65255U);
    msg.setDestinationEntity(213U);
    msg.req_id = 2446U;
    msg.ttl = 21849U;
    msg.destination.assign("NUMXQRDEAHBKCMPKYTYMOTZCZMVLSUANBOPWHYDHLVROTRDMTNUGZQUJYMFNQVXMRHDBAXLJRPKGWYICQQVABINRSGKECEIAGQLVSPBFEJHOHCOJZWXICOHSLJQPJGFJFZJTETGMPUOKXAGNQQXXNKPUYWCVFHADSCOLSDMTBAJZSDHEVNFWJPQUN");
    const char tmp_msg_0[] = {34, -66, -105, 10, -7, 56, -28, 55, 57, 57, 86, -87, 99, -79, 108, -1, -34, 87, 67, 108, -45, 35, -66, -45, -27, 104, -76, 78, -20, -49, -16, 107, -15, 49, 8, -30, -75, -39, -80, -71, 14, -108};
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
    msg.setTimeStamp(0.432037059533);
    msg.setSource(37982U);
    msg.setSourceEntity(62U);
    msg.setDestination(21274U);
    msg.setDestinationEntity(26U);
    msg.req_id = 54042U;
    msg.ttl = 8851U;
    msg.destination.assign("ZSRVGYECOOLQLZNUDUNGSKEXKABBTUPMKLZXCSVOFTMUEJOYWZCUQMDFWCUZGNBKEXWESXQMVNACDTPDQMSYBBBHLGWBICVWJPOJHTWOXCHJVHPIGKKDIUJNENXUIQQGGCWLRPSRKBSNMVPRGCPKYQRTJRALSXHZDKTUHINFOFLFZHFHYSBOMXLWXTQIONEAIVBEYYTRCYIRNRIFZEGMMJAUPFFKAIADZJPDYHGVTAAVJQZRWDWYTDLHOPFJAQ");
    const char tmp_msg_0[] = {107, 34, -15, 84, -28, -128, -5, 6, -79, -101, -44, -93, -90, 103, -126, 2, -118, 108, 15, -13, -85, 117, 103, -109, -84, 102, -95, -7, 38, -12, 10, -126, 49, 89, 74, -24, -88, -45, -110, 102, -105, -39, -44, -29, 19, -32, 114, -17, -124, -62, 109, 22, -8, 66, 20, -32, -49, -5, -61, -5, -97, -70, 20, 120, 65, -59, 111, -89, -41, -25, 44, 68, -30, -105, 22, -34, -119, 97, -26, -96, -7, -46, 9, -83, -104, 92, -67, -3, 87, -21, 37, -58, 105, -28, -117, -87, -38, 39, -97, -113, -69, 108, -35, -119, 26, -14, 96, -123, -17, 74, -45, 70, 36, -60, 17, 42, 83, -90, 49, 100, -112, -70, -105, 66, 108, 101, 1, 7, 18, -19, 103, -97, 20, -96, -107, 105, -11, 47, 107, 44, -34, 62, -28, -39, 77, 6, -49, -56, 112, 33, 124, -113, -81, -7, 4, -80, 126, 52, -128, 19, -25, -90, 17, -6, 77, 125, 0, -117, -7, 119, -97, 84, -50, -74, -6, -73, 23, -84};
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
    msg.setTimeStamp(0.56789325877);
    msg.setSource(61135U);
    msg.setSourceEntity(191U);
    msg.setDestination(36189U);
    msg.setDestinationEntity(73U);
    msg.req_id = 2486U;
    msg.status = 202U;
    msg.text.assign("JIXYUIYFMRBXCMTVIUADLSQNORJXFVPCTTBXDGSJBGKTAOOEPAWVEUVDRKAFKPTANYNIEHMCCLASYRXGUVFPFMOXNEUDYJEIMXQBMGWNOUZNVPCQAHKTFWRIZODDWCRPBRHYOYJMTPJHLZZFBZIHBZXPLRQLDHWY");

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
    msg.setTimeStamp(0.0293532092487);
    msg.setSource(3189U);
    msg.setSourceEntity(93U);
    msg.setDestination(56433U);
    msg.setDestinationEntity(240U);
    msg.req_id = 58884U;
    msg.status = 22U;
    msg.text.assign("CBZHFDCOJXLAKWGIXWYOBISISRDXGTKPNKWQZZOBPEYERUGSTUHTQBGWICFEWUQAQLILRZMIJGNMYKBSAKNAJOYXMUVPGBHNIHCRPHUSRVMCJYERA");

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
    msg.setTimeStamp(0.471015598079);
    msg.setSource(11166U);
    msg.setSourceEntity(121U);
    msg.setDestination(32403U);
    msg.setDestinationEntity(247U);
    msg.req_id = 48828U;
    msg.status = 111U;
    msg.text.assign("JWNIIVHDEABRZAWQBFIRRYRSGUYAPHCUJFTVLLLZPQIDNLGURPHTOSVXYOELMYPDASCJGVQEOZBHDCGONVWPZHRXKXFKJNVPVDBFJPZTKQMNXZRUIBSXGOAMOYBKULHPJAGZUZYMTWUSSMDIOJODVHWXTTCWTAJGARKFJBVXAQSCPSEZGDHCTDMFDKVCSYUHBKKFHQBCYERAMWWCNN");

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
    msg.setTimeStamp(0.148634336737);
    msg.setSource(60545U);
    msg.setSourceEntity(62U);
    msg.setDestination(33579U);
    msg.setDestinationEntity(158U);
    msg.group_name.assign("DQPPTXRZYHBVVNWWUBZHVFRSFOVAQDVAGHMBIELLWNELUCTYKYOHBXWUCXDURJSCGXNADOJVELNPVTIFRQFLJCQTXKSTBMZATPRMGDEMWFQL");
    msg.links = 3635079107U;

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
    msg.setTimeStamp(0.797428990619);
    msg.setSource(65372U);
    msg.setSourceEntity(37U);
    msg.setDestination(37263U);
    msg.setDestinationEntity(106U);
    msg.group_name.assign("XUQEGNJXRZDGKNXEOREFYPKKXKEDXCNBXITBBRAOVBBGVMNSTFYNCEULUMMNVUNOSTLQLWJNAOVSPJGAIEWLCIGDBYMQPOXIWUEARSFHYYGYEPCCDSJWLSFAKHITVKPCWMZRTROYZWJUEZZUEFFVUDVLJMHJVKXBCDCVIPDBRDWTGNIRTUJTQQZSAFRCUTPWOFHLHOFQIBQNSVHAOAWKATDRXMBKLZHP");
    msg.links = 1787264265U;

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
    msg.setTimeStamp(0.943100242814);
    msg.setSource(41311U);
    msg.setSourceEntity(98U);
    msg.setDestination(7992U);
    msg.setDestinationEntity(147U);
    msg.group_name.assign("MUSEUAVCNGEXXUHHJYHCOPDDOOWWPZWUCGCZFHYRZKOLMTGRWLOVNEBJXVXPUYCWBAWSCZNUJQSYSBYOHNYUEDKPQBACDKDWGPLGFQGIIEFVZMLYYLVXIRYJJOLMZTAQCVLJIRQJBZMMSNGRQPAKBRTMPKCFMXOAFAZWTNRGTTGEVUXUFFOKSKVNKZSSJBPVDQCTTOQZDWJSHEPEFIAIWRXDBSMEADLBTQBIFIE");
    msg.links = 2160100670U;

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
    msg.setTimeStamp(0.468506122181);
    msg.setSource(39328U);
    msg.setSourceEntity(15U);
    msg.setDestination(35966U);
    msg.setDestinationEntity(193U);
    msg.groupname.assign("BQNOTPWMFMHTPURAVTRAVZHCIVCSMXHUKYYRCSGMNZZFFPLUABXBKNXAVHWSFCTYYWPIDVXLQMJGSATEXSJDNSIIEEEROJJOJCGBSOFJADPONDPUEUOIPBDSLEJCTNLKRAVEKNWXTWACNKGPXALZNKFRRHUZQYYQQGXERESSGHIWULFFHKLPUTMVUZRZQQQTDMG");
    msg.action = 138U;
    msg.grouplist.assign("VDQHWHAHJIUUJPMK");

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
    msg.setTimeStamp(0.0131271410864);
    msg.setSource(40235U);
    msg.setSourceEntity(10U);
    msg.setDestination(40994U);
    msg.setDestinationEntity(134U);
    msg.groupname.assign("PJLCZTJBKJNIUUDQWHWHRLOJTOSDTSHIWDWLLQQFUHQTCMFMXJWUHLTKPXWMPWDPYHFBXVGBVEHKNQSCPAVJUZXNNFLDUNWXFIRCDBMZYGLDCCEVOYBZMQEOTTOUIAXVI");
    msg.action = 197U;
    msg.grouplist.assign("LGRIMZLOTYSLRFGPZBOZIPDMGPSESZWWEFQD");

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
    msg.setTimeStamp(0.724141558155);
    msg.setSource(39200U);
    msg.setSourceEntity(118U);
    msg.setDestination(26887U);
    msg.setDestinationEntity(50U);
    msg.groupname.assign("ZQFKRFXYSYCPBYYGXJAEQYYLZIHSVDNZPINPFXMOAJNGLNXJLVJMJTQYMDTMTRLIZFHBKYDDRCPHSECSRJEMUCXWMWGNOLERUXLQHRHBNAIKOKJGHRYEEKO");
    msg.action = 85U;
    msg.grouplist.assign("XEGJFUWHEABQEZGQSHTXBSJKYZXDKGSWRINWMYQUWCDIICCSLOPUZVDAHGEGJEUSSEYGPHIVGNTHOTJMYHEYFGULFJOMWKJRZPODZIWXWRZVOZCIVCPIJQTHYWVLGMBCBKPROXVPQMDWAZPABMTNFQFZKYBNUBCNHFFORAFJSWOEMAUSHLNBUIXMDTTTDJGFOIBNVJAKTMRLVAVRDQMCVIBE");

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
    msg.setTimeStamp(0.616358738809);
    msg.setSource(41230U);
    msg.setSourceEntity(243U);
    msg.setDestination(41673U);
    msg.setDestinationEntity(138U);
    msg.value = 0.226729009016;
    msg.sys_src = 64721U;

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
    msg.setTimeStamp(0.34300634299);
    msg.setSource(37349U);
    msg.setSourceEntity(21U);
    msg.setDestination(43147U);
    msg.setDestinationEntity(148U);
    msg.value = 0.998932527184;
    msg.sys_src = 9961U;

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
    msg.setTimeStamp(0.200816721266);
    msg.setSource(31291U);
    msg.setSourceEntity(2U);
    msg.setDestination(58994U);
    msg.setDestinationEntity(18U);
    msg.value = 0.189077631405;
    msg.sys_src = 35209U;

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
    msg.setTimeStamp(0.202797078904);
    msg.setSource(4920U);
    msg.setSourceEntity(149U);
    msg.setDestination(13272U);
    msg.setDestinationEntity(174U);
    msg.value = 0.619045878958;
    msg.units = 235U;

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
    msg.setTimeStamp(0.50413822295);
    msg.setSource(61772U);
    msg.setSourceEntity(7U);
    msg.setDestination(23280U);
    msg.setDestinationEntity(114U);
    msg.value = 0.781971471684;
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
    msg.setTimeStamp(0.581826811091);
    msg.setSource(20226U);
    msg.setSourceEntity(11U);
    msg.setDestination(22831U);
    msg.setDestinationEntity(189U);
    msg.value = 0.434356730538;
    msg.units = 41U;

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
    msg.setTimeStamp(0.756696110569);
    msg.setSource(14271U);
    msg.setSourceEntity(213U);
    msg.setDestination(4937U);
    msg.setDestinationEntity(129U);
    msg.base_lat = 0.19753522988;
    msg.base_lon = 0.234410770981;
    msg.base_time = 0.196503334401;
    IMC::HistoricSample tmp_msg_0;
    tmp_msg_0.sys_id = 50300U;
    tmp_msg_0.priority = 98;
    tmp_msg_0.x = -17645;
    tmp_msg_0.y = -12715;
    tmp_msg_0.z = 30297;
    tmp_msg_0.t = 5957;
    IMC::StationKeepingExtended tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.435665094424;
    tmp_tmp_msg_0_0.lon = 0.170855255214;
    tmp_tmp_msg_0_0.z = 0.766557100952;
    tmp_tmp_msg_0_0.z_units = 119U;
    tmp_tmp_msg_0_0.radius = 0.139840276893;
    tmp_tmp_msg_0_0.duration = 12556U;
    tmp_tmp_msg_0_0.speed = 0.162609686619;
    tmp_tmp_msg_0_0.speed_units = 151U;
    tmp_tmp_msg_0_0.popup_period = 16538U;
    tmp_tmp_msg_0_0.popup_duration = 25325U;
    tmp_tmp_msg_0_0.flags = 161U;
    tmp_tmp_msg_0_0.custom.assign("CFJOXCZTVEQXCWMRASFAQVCBKDHEOHPRVNRAWCNQFNRVGAXUGJLSHZPXCUCPSDOJBP");
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
    msg.setTimeStamp(0.0720028224859);
    msg.setSource(43380U);
    msg.setSourceEntity(159U);
    msg.setDestination(41404U);
    msg.setDestinationEntity(163U);
    msg.base_lat = 0.0071476610578;
    msg.base_lon = 0.565515343127;
    msg.base_time = 0.108383688822;
    IMC::RemoteCommand tmp_msg_0;
    tmp_msg_0.original_source = 16777U;
    tmp_msg_0.destination = 23383U;
    tmp_msg_0.timeout = 0.867499636725;
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("CWIFOTGKYZXQPWZPNMLEUCRU");
    tmp_tmp_msg_0_0.value.assign("GOLZGTCDHTCBWFCIWGTEMGRIGLHQDIXNKOKKLLPBPYIWLKVEYJEYBWMCSMNSBFVPPVMEKWOL");
    tmp_tmp_msg_0_0.type = 16U;
    tmp_tmp_msg_0_0.access = 219U;
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
    msg.setTimeStamp(0.237531269201);
    msg.setSource(43187U);
    msg.setSourceEntity(55U);
    msg.setDestination(48251U);
    msg.setDestinationEntity(14U);
    msg.base_lat = 0.17145939356;
    msg.base_lon = 0.452901465709;
    msg.base_time = 0.742686719673;
    IMC::RemoteCommand tmp_msg_0;
    tmp_msg_0.original_source = 54066U;
    tmp_msg_0.destination = 685U;
    tmp_msg_0.timeout = 0.0797201982177;
    IMC::IridiumMsgRx tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.origin.assign("JRJZMGBMOGLXZUBARIZLDHRNAT");
    tmp_tmp_msg_0_0.htime = 0.311175356929;
    tmp_tmp_msg_0_0.lat = 0.542197343646;
    tmp_tmp_msg_0_0.lon = 0.196640328781;
    const char tmp_tmp_tmp_msg_0_0_0[] = {3, 57, -64, -119, 15, 101, 105, -86, 1, -108, 63, -121, 37, 18, 101, -66, -88, -119, 35, -125, -53, -6, -14, 95, 114, -35, -24, 78, -14, -113, -113, -20, 85, -56, -23, -22, -71, 16, -123, -1, -101, 72, -17, -23, 117, -70, 29, -112, -77, 16, -47, 40, -41, 22, 109, 16, -21, -22, -46, 35, 58, -66, -92, 23, -20, -126, 17, 79, -19, 115, 35, -38, -43, -85, -63, 95, 60, 25, -82, -47, 28, 90, -41, -9, 39, 1, -63, 11, 54, -104, -26, 27, 108, 117, -124, -110, -38, -61, 92, 102, 30, 12, 17, -79, -83, -31, 125, 90, -24, 45, -24, -75, -59, -61, -97, -4, -44, -45, 46, -44, 17, 20, 51, 4, 9, -50, 126, -90, -55, 102, -31, 12, -47, -17, 49, 98, -106, -42, -92, -114};
    tmp_tmp_msg_0_0.data.assign(tmp_tmp_tmp_msg_0_0_0, tmp_tmp_tmp_msg_0_0_0 + sizeof(tmp_tmp_tmp_msg_0_0_0));
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
    msg.setTimeStamp(0.60781175314);
    msg.setSource(11U);
    msg.setSourceEntity(4U);
    msg.setDestination(21492U);
    msg.setDestinationEntity(70U);
    msg.base_lat = 0.683185080683;
    msg.base_lon = 0.295980756721;
    msg.base_time = 0.831401976625;
    const char tmp_msg_0[] = {72, -42, -119, -116, -43, 119, -86, 18, -28, -50, 102, -107, -79, -125, -30, -32, 82, 19, -113, -84, 112, 54, 14, -51, -5, -76, 99, -32, 27, -11, 115, -41, 29, -94, 103, -39, 16, 19, -34, -84, -50, -121, -37, -120, 29, -31, -103, -50, 95, -80, 94, -37, 54, -47, 33, 90, 117, -100, -88, -18, -15, -52, 53, -53, 47, 101, -55, 92, 0, 56, 44, 120, 72, 57, -50, 103, -2, -15, -4, 89, 51, -3, 70, 107, -121, 54, 5, -71, 53, -85, -61, -112, -38, 84, -118, -112, 18, -68, 51, -94, 2, -118, -62, 22, 91, 38, 94, 57, -18, -106, 65, 60, -37, -121, -70, 1, 113, 115, -59, 110, 4, 56, -114, -128, -36, -61, 109, -28, 40, 88, -123, -108, -77, 94, 106, 0, 105, -116, -124, -123, -1, 72, 93, -104, -16, -75, 45, -85, -122, 104, -81, -91, -17, 14, 125, -11, 84, 105, 86, 19, -14, 46, -67, 45, 62, -38, 62, -28, -11, -71, 28, -13, -120, 117, 118, -74, -21, 50, -26, 54, 45, -61, 39, -105, -102, -53, -21, -91, 39, 19, -99, 4, -101, -73, -32, 100, 103, 116, 17, 29, -27, -80, 86, 18, -70, -54};
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
    msg.setTimeStamp(0.805691765369);
    msg.setSource(32961U);
    msg.setSourceEntity(55U);
    msg.setDestination(53120U);
    msg.setDestinationEntity(33U);
    msg.base_lat = 0.639073631945;
    msg.base_lon = 0.991829591031;
    msg.base_time = 0.137409660395;
    const char tmp_msg_0[] = {-45, 57, -112, 77, 115, 104, 102, 19, 52, 71, -103, -120, -13, 120, 106, -82, 105, 14, -91, 44, 96, -80, 112, 123, -83, 81, 35, 72, 125, -5, -118, 13, 3, 6, -120, 26, 83, -126, 28, 123, -107, -95, -40, 100, 101, 79, -89, 57, 123, -14, -31, -100, 55, -58, -69, 73, -114, -89, -117, -36, -68, -12, 49, -70, 55, -19, -60, -116, -90, 111, -62, -108, 88, 8, 99, 47, -12, -3, -2, -62, -87, -55, -61, -115, 33, 39, -109, -102, 113, -19, -100, -31, -111, 123, 30, -117, 87, 13, 67, -82, -79, -79, -50, -81, -17, -46, 103, 64, -79, 4, 47, -56, -125, -101, -109, -51, -24, -109, 81, 92, -107, -81, -123, 92, -14, -86, 84, 108, -111, 30, 45, 35, -111, 52, -39, -4, 51, 105, 21, 0, -6, -16, -7, 59, 101, -106, -125, 5, 78, 42, -63, -71, -10, 6, -106, -38, -4, 68, 5, -46, -107, -76, -110, 74, 0, -60, 7, 108, 64, -107, -32, 74, -107, 20, 102, 76, 18, 101, 36, -13, 2, -47, 103, 95, -32, -69, 80, -78, 116, -111, -13, -60, 65, 71, 82, 50, -58, -127, 92, -123, -92, 12, -111, 7, -53, 19, 52, -62, -64, -93, -7, 41, 122, 102, 111, -68, -126, -37, -113, 122, -102, -111, 68, 102, 108, -66, -62, -57, 67, -89, -76};
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
    msg.setTimeStamp(0.955659960627);
    msg.setSource(36536U);
    msg.setSourceEntity(22U);
    msg.setDestination(57578U);
    msg.setDestinationEntity(77U);
    msg.base_lat = 0.835848921509;
    msg.base_lon = 0.640161986384;
    msg.base_time = 0.860132664982;
    const char tmp_msg_0[] = {63, -63, 50, 119, -59, -10, -114, 67, 63, 118, -93, -110, 94, 74, 55, 65, -79, -80, -73, -6, -101, 99, 24, -91, -60, -72, 30, 116, -78, 78, -49, -92, -18, 46, 97, 33, 59, 5, 67, -28, 94, -53, 60, 117, -81, 60, 84, -24, 94, 49, 89, 87, 75, -91, 77, 88, -82, 110, 109, -47, 109, 18, -26, -31, 75, -96, -73, -24, -113, -109, -61, -15, -72, -46, -24, 83, 107, -30, 112, -68, 2, 33, -80, 72, -20, 109, -7, -12, 58, 30, 3, 89, 64, -49, 122, 37, 78, -18, -31, 31, 93, 92, 10, -124, 122, -113, -81, 111, -114, 4, 35, -97, 45, 13, -106, -122, 2, 73, -52, 52};
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
    msg.setTimeStamp(0.990619887196);
    msg.setSource(18287U);
    msg.setSourceEntity(134U);
    msg.setDestination(1214U);
    msg.setDestinationEntity(63U);
    msg.sys_id = 12142U;
    msg.priority = -83;
    msg.x = -4396;
    msg.y = 32693;
    msg.z = 14644;
    msg.t = -28709;
    IMC::DataSanity tmp_msg_0;
    tmp_msg_0.sane = 155U;
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
    msg.setTimeStamp(0.266472678641);
    msg.setSource(32536U);
    msg.setSourceEntity(233U);
    msg.setDestination(44433U);
    msg.setDestinationEntity(211U);
    msg.sys_id = 44583U;
    msg.priority = 21;
    msg.x = 23797;
    msg.y = 10661;
    msg.z = -6126;
    msg.t = 17971;
    IMC::DepthOffset tmp_msg_0;
    tmp_msg_0.value = 0.177147344431;
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
    msg.setTimeStamp(0.307188950249);
    msg.setSource(9484U);
    msg.setSourceEntity(93U);
    msg.setDestination(33947U);
    msg.setDestinationEntity(144U);
    msg.sys_id = 28266U;
    msg.priority = -99;
    msg.x = 8140;
    msg.y = -21888;
    msg.z = -8073;
    msg.t = 27480;
    IMC::VehicleLinks tmp_msg_0;
    tmp_msg_0.localname.assign("FRBZSMBBZJKPBSDXMWOHFQDZBMIIGDEWXTGZISYGKXQLWDRMYYCKFVLUYMSPGSEHRIOSIEDUUIATZVNBPVCJKTFHRAXYIOHBMCHWUKPVMLJZKXQGFGRCLXPCQVAFVWNFLMFNXYWNXTUSBSRVHOAJENENGIRAIJTWC");
    IMC::Announce tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.sys_name.assign("TQKFACUEHDOYUNQZMIPTIJBNEQNQOVSOTLRSGWHDZPRZQZRVDUABJYWKMIQBAHKRKAHXWCB");
    tmp_tmp_msg_0_0.sys_type = 194U;
    tmp_tmp_msg_0_0.owner = 1588U;
    tmp_tmp_msg_0_0.lat = 0.972159102765;
    tmp_tmp_msg_0_0.lon = 0.429561898997;
    tmp_tmp_msg_0_0.height = 0.719426604741;
    tmp_tmp_msg_0_0.services.assign("ZDYBUHHPDNXYVPGWKBXFQCPXREDYBZFFOGOUXHNYIAIOINFMALIMHQMLDTJIZVEBPDUIUQWHEHBA");
    tmp_msg_0.links.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.252681153474);
    msg.setSource(62429U);
    msg.setSourceEntity(160U);
    msg.setDestination(9699U);
    msg.setDestinationEntity(70U);
    msg.req_id = 47939U;
    msg.type = 35U;
    msg.max_size = 16932U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.0577999689636;
    tmp_msg_0.base_lon = 0.122364099455;
    tmp_msg_0.base_time = 0.220891696074;
    IMC::HistoricSample tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.sys_id = 20422U;
    tmp_tmp_msg_0_0.priority = 69;
    tmp_tmp_msg_0_0.x = -25480;
    tmp_tmp_msg_0_0.y = -15249;
    tmp_tmp_msg_0_0.z = -3517;
    tmp_tmp_msg_0_0.t = 28514;
    IMC::SadcReadings tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.channel = 111;
    tmp_tmp_tmp_msg_0_0_0.value = 762773243;
    tmp_tmp_tmp_msg_0_0_0.gain = 78U;
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
    msg.setTimeStamp(0.975036054667);
    msg.setSource(58257U);
    msg.setSourceEntity(18U);
    msg.setDestination(48876U);
    msg.setDestinationEntity(114U);
    msg.req_id = 54430U;
    msg.type = 146U;
    msg.max_size = 40227U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.0292417322718;
    tmp_msg_0.base_lon = 0.23917125544;
    tmp_msg_0.base_time = 0.574378251277;
    IMC::RemoteCommand tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.original_source = 4632U;
    tmp_tmp_msg_0_0.destination = 63845U;
    tmp_tmp_msg_0_0.timeout = 0.440840140497;
    IMC::DesiredVerticalRate tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.value = 0.806485605186;
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
    msg.setTimeStamp(0.672106438897);
    msg.setSource(10091U);
    msg.setSourceEntity(32U);
    msg.setDestination(40801U);
    msg.setDestinationEntity(181U);
    msg.req_id = 722U;
    msg.type = 28U;
    msg.max_size = 56789U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.557437249266;
    tmp_msg_0.base_lon = 0.252440933768;
    tmp_msg_0.base_time = 0.624485634219;
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
    msg.setTimeStamp(0.272262319027);
    msg.setSource(47432U);
    msg.setSourceEntity(155U);
    msg.setDestination(28744U);
    msg.setDestinationEntity(28U);
    msg.original_source = 63725U;
    msg.destination = 63141U;
    msg.timeout = 0.653548386936;
    IMC::Force tmp_msg_0;
    tmp_msg_0.value = 0.134493301061;
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
    msg.setTimeStamp(0.548286635283);
    msg.setSource(9706U);
    msg.setSourceEntity(218U);
    msg.setDestination(3634U);
    msg.setDestinationEntity(95U);
    msg.original_source = 7155U;
    msg.destination = 37484U;
    msg.timeout = 0.82228775245;
    IMC::TCPRequest tmp_msg_0;
    tmp_msg_0.req_id = 18617U;
    tmp_msg_0.destination.assign("HKRTOVMLANJLNLVOXNNEUSBLUKVBZBDQAXPRZIWCGOIMURSNEBPLSQPYIMDUBJLREOLIPCFWUTIGRMCKHCYBJZPPKGUURRMZIFIFCJVXGVFSYUODUHYDAYRRSEXFAYMBHQHEQOTVTFPXVJGZXFHGFACOVWQ");
    tmp_msg_0.timeout = 0.733230198771;
    IMC::StationKeeping tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.535651686852;
    tmp_tmp_msg_0_0.lon = 0.526149696566;
    tmp_tmp_msg_0_0.z = 0.0595902627343;
    tmp_tmp_msg_0_0.z_units = 10U;
    tmp_tmp_msg_0_0.radius = 0.187809221268;
    tmp_tmp_msg_0_0.duration = 31997U;
    tmp_tmp_msg_0_0.speed = 0.0619409793113;
    tmp_tmp_msg_0_0.speed_units = 19U;
    tmp_tmp_msg_0_0.popup_period = 27447U;
    tmp_tmp_msg_0_0.popup_duration = 32439U;
    tmp_tmp_msg_0_0.flags = 101U;
    tmp_tmp_msg_0_0.custom.assign("KBZEKORTRPGCNDKZHMRCLMHRBFNWSJREFMGAIXMEGBDYNWXXBYTAFTPYLUOUKUXZTMAKEYMRAUUXOEIGVWUQHZSZLXPCSCJPMLCKFUEQIVEKBLDEAYQSXZVXLTCNHOCRNBPTGBXBAWQYKOOQSMPGALAOZRGSHDFHBNYGDIEPJWJ");
    tmp_msg_0.msg_data.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.546035463908);
    msg.setSource(38966U);
    msg.setSourceEntity(141U);
    msg.setDestination(35066U);
    msg.setDestinationEntity(201U);
    msg.original_source = 29149U;
    msg.destination = 37225U;
    msg.timeout = 0.43039070372;
    IMC::CpuUsage tmp_msg_0;
    tmp_msg_0.value = 216U;
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
    msg.setTimeStamp(0.327941304994);
    msg.setSource(49405U);
    msg.setSourceEntity(175U);
    msg.setDestination(58334U);
    msg.setDestinationEntity(96U);
    msg.type = 151U;
    msg.comm_interface = 8729U;
    msg.model = 46189U;
    msg.list.assign("CXESWWIOMBCBRCDJWYXZOHRIGSPFNVTKBKTAGPAMPYRDJELEHIDIPWBZKHJBTGAHECDHFZQAXWLUMQQJUGOMKNIMHLSKUDYXDIXGSSRQADEJBAVFDIHSGALMMSQOYPNONHFUYWSVJFRETTVELPXXLCKCTBNZYTXLIWUPGRPW");

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
    msg.setTimeStamp(0.212092036541);
    msg.setSource(38131U);
    msg.setSourceEntity(235U);
    msg.setDestination(51259U);
    msg.setDestinationEntity(233U);
    msg.type = 169U;
    msg.comm_interface = 34079U;
    msg.model = 28929U;
    msg.list.assign("YHFURMGMGICCSOMRNESBUVIXYPAJZYGCPPQYNUKUZVHSAJWRBQXTTLKLEXXAQSLNMWCOJZHBFSZTDAIHOMNTZXCDCHSIVSBVEPEFNBLQPVVUKJZNKUPCCZKCSDRILLAPSRUIDGTNWFEFWOLMHYZVGHFYVXTKLKHIBFABOEIAOKMJYDXTWFDEIPAXOGHFJAVU");

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
    msg.setTimeStamp(0.910762837759);
    msg.setSource(60392U);
    msg.setSourceEntity(248U);
    msg.setDestination(47609U);
    msg.setDestinationEntity(178U);
    msg.type = 11U;
    msg.comm_interface = 3375U;
    msg.model = 25150U;
    msg.list.assign("ILHKWLXDUUDPORNICLDXPHZVEGUTDMAOMNZZHSABCFURGDCPWXHMHSRFZCPEPZQVPQDBBTOBEAWYCMNNSRMCJNN");

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
    msg.setTimeStamp(0.0479034205853);
    msg.setSource(49483U);
    msg.setSourceEntity(67U);
    msg.setDestination(15349U);
    msg.setDestinationEntity(32U);
    msg.type = 158U;
    msg.req_id = 3117675682U;
    msg.ttl = 63005U;
    msg.code = 159U;
    msg.destination.assign("OTJHPQCLSIWORRCBMRLDABLQKMFJAYMJALDCIRPVQGGRJKCXYNXSAEALTPSXYOEVPUKVDHWLNCVURYAHCVAZPYRYLKIXZHNICFDWHTGGFIJTBGDJNXUIHCHFQZEMOCXORNBTJKVAOZBRQOPZOSQEDMBMOJHMYTVZUWKFTNJGNILSAMDXIWLRXBQQYUKTFXNFEGWVISOFNGDGUYQCZKDHZXPVUYWDNESSUPZEGHTBITUFEUSWMKJWWFEVMLS");
    msg.source.assign("ZBYPONKMEJFNXWSRYRPZYUFESHTHUPGSXKGVMZBBWOONKNOVJEWVKRQLVVPJVCURUUBHFPANQJRXYSYALQYKASNCNRIPVEOHXCDTJFPOAWCUIUXMAPZDPOZLQCMIKENBKSSSZWWHJZEQXDBQMJLWGODTFJGHHFBNKODGLAZRPQLXLFMFQVWSAJIGXCAUFGIKDLIZMMRORYIKEAICDWVTXCHTBLHSMTCEBDG");
    msg.acknowledge = 67U;
    msg.status = 203U;
    const char tmp_msg_0[] = {-103, 116, 47, -38, -16, -10, -85, -2, -50, -44, 30, -122, 104, -43, -1, -127, 88, -80, 112, 119, 83, -33, -37, 11, 116, 72, 38, 18};
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
    msg.setTimeStamp(0.669489358993);
    msg.setSource(10731U);
    msg.setSourceEntity(212U);
    msg.setDestination(22414U);
    msg.setDestinationEntity(144U);
    msg.type = 218U;
    msg.req_id = 3837142358U;
    msg.ttl = 28677U;
    msg.code = 34U;
    msg.destination.assign("YRHKYVAAQYICAZPFNENZOEWXWKQZXMRPCLVFVBNEJLNUBBBHIUCSZFTGKJYXCAKLSBEDTWU");
    msg.source.assign("INRGMXOKVQZGMKAFSCGYUVBVJEMLBXOVNKVYDPNLLJQZHBRSYEWJNDXKPAXZCDLKESHKRGYLZFDSFCLPQEVUUOUCHFCFIDDKXTJVCTIWTWBIPTISQMBYYVZNIGOCIRARTABJUWHRHWGHPZJAWYBOEULJGYOEGFRNEXNLSRQDQKSDHQZMWTPHZAYXNM");
    msg.acknowledge = 179U;
    msg.status = 46U;
    const char tmp_msg_0[] = {71, -56, 48, -70, 91, 43, 55, -28, 119, 50, -97, -102, -41, 125, -31, -58, -55, -115, 73, -75, 8, -75, 91, -23, 76, -122, 0, 73, -80, -44, -109, 106, 123, -105, -71, -45, -33, -123, 22, -88, -8, 101, -49, 33, -59, -60, 60, 18, -78, -124, 88, -89, 42, 126, 102, 54, -107, -57, 40, 48, 65, -94, 30, 39, -50, 30, 20, -25, -60, -119, -94, 79, 55};
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
    msg.setTimeStamp(0.695130456773);
    msg.setSource(31334U);
    msg.setSourceEntity(134U);
    msg.setDestination(48060U);
    msg.setDestinationEntity(149U);
    msg.type = 125U;
    msg.req_id = 1908694846U;
    msg.ttl = 16227U;
    msg.code = 253U;
    msg.destination.assign("NPOQIJZUKYDGUZK");
    msg.source.assign("ZZRVIUQYGZEBVSKMULUUNMJXRQXJVAHIXUSGIEUXCAHMWWLNVQMZFWDSKEEDTPIZXYNGISRHLUIIIYUCYKPSWHFJRNYKTDXQLOPHWQVYVMDYDRCPJDZEEHJEMQFCPNTP");
    msg.acknowledge = 48U;
    msg.status = 77U;
    const char tmp_msg_0[] = {58, -119, 28, -46, 79, 30, 34, -31, 40, -89, -44, 76, -114, 92, 23, -30, 72, 8, 125, 92, 60, -125, -128, -42, -10, -128, -32, 75, 4, 24, 43, -30, 120, 96, -16, 35, -21, -98, -87, 73, 96, -50, 41, 15, -126, -113, 125, 68, -79, 52, -24, 58, -119, 123, -75, 120, -30, -67, -45, 24, -115, 78, 28, -49, 84, -18, 80, -73, -82, 116, 53, -108, -114, 8, -74, 28, 53, -45, -65, 31, 101, 56};
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
    msg.setTimeStamp(0.733655015414);
    msg.setSource(11094U);
    msg.setSourceEntity(114U);
    msg.setDestination(27453U);
    msg.setDestinationEntity(60U);
    msg.id = 59U;
    msg.range = 0.109134364183;

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
    msg.setTimeStamp(0.855148298879);
    msg.setSource(40551U);
    msg.setSourceEntity(137U);
    msg.setDestination(10829U);
    msg.setDestinationEntity(210U);
    msg.id = 142U;
    msg.range = 0.519219949236;

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
    msg.setTimeStamp(0.234490113043);
    msg.setSource(11717U);
    msg.setSourceEntity(26U);
    msg.setDestination(917U);
    msg.setDestinationEntity(243U);
    msg.id = 85U;
    msg.range = 0.67793096902;

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
    msg.setTimeStamp(0.66355834829);
    msg.setSource(3550U);
    msg.setSourceEntity(10U);
    msg.setDestination(35021U);
    msg.setDestinationEntity(28U);
    msg.beacon.assign("RKNHLTBTLEQWSQOUYDTCTWICIVDVHAIZJBYEFITGAGSQEJWQXOUPTEDQFEZBBNBVKCJAXLLHNGRRMHSALGKBFXCFPOYACENBFPGGWMLUJYGUJCHTKYUXUYQSIRMQUGNPDZFAAWCSMXGUROPGVKPCFXUKRACFZPOLCIPMZBA");
    msg.lat = 0.770470200062;
    msg.lon = 0.590635512029;
    msg.depth = 0.669131429297;
    msg.query_channel = 124U;
    msg.reply_channel = 109U;
    msg.transponder_delay = 250U;

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
    msg.setTimeStamp(0.410183089561);
    msg.setSource(64345U);
    msg.setSourceEntity(182U);
    msg.setDestination(49990U);
    msg.setDestinationEntity(199U);
    msg.beacon.assign("GMYUMVCXIWKKLHMGHLJCOSEPHEPZYNNJHLPMTIQFLDLWIVSXCXVALWWGQOSURCAAJAYSAKUHDUHFLXQBQQJQOEQDKANAUVSQXCRYZTRJMUSGENJNIGKTBDBZPNGOPODFAWDXOJGXFVMAEBFNFNXZCQMLCAWVVHBZICXIFCBBWCRVSZYIYHDWPOTZPSJN");
    msg.lat = 0.0804840190647;
    msg.lon = 0.866071273615;
    msg.depth = 0.361943846572;
    msg.query_channel = 200U;
    msg.reply_channel = 239U;
    msg.transponder_delay = 4U;

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
    msg.setTimeStamp(0.830538685902);
    msg.setSource(64780U);
    msg.setSourceEntity(20U);
    msg.setDestination(65244U);
    msg.setDestinationEntity(81U);
    msg.beacon.assign("LBJDFZIDPRBGMNCCHUAUVOSASMLLFIUOHFXZOPQZASINCYTCQJKHJXNHEGLIQNYXVWFTEMJACWNKMAKXTCPAKIVXAVDWDSEDGMZCDGFFZWLKWGXOVQTKMSRAYTNGJDLFRTUJSUDPWCYOYLUMOTSYNIRWYKXEQSMBZYLBXFEOPCWBXSTRBREITJKLHPBROXHANPVVPQUMYDGU");
    msg.lat = 0.859604811199;
    msg.lon = 0.80906228578;
    msg.depth = 0.962774892484;
    msg.query_channel = 73U;
    msg.reply_channel = 137U;
    msg.transponder_delay = 129U;

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
    msg.setTimeStamp(0.670935780772);
    msg.setSource(39717U);
    msg.setSourceEntity(128U);
    msg.setDestination(39252U);
    msg.setDestinationEntity(185U);
    msg.op = 68U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("EULRLVMHZJJCXBDQYSBJFCJOBEEVIXWFAQYJBWVDKNASZMYYTQCSXMLERNKDUABQVSHPZNTULZKDKXTOOQJPWWIRSTKXHEGPOHWTOGUGNZZDXLUDUBYPTIHGQUPKAWGCHZZDFMNVMWBSALSHRFCMYRVSKNRIBWPLRLFFWDMXVHGYYZEPQMJROOCAVGGDRTSJCIHMENTTUCV");
    tmp_msg_0.lat = 0.778268079081;
    tmp_msg_0.lon = 0.671447573801;
    tmp_msg_0.depth = 0.913234327955;
    tmp_msg_0.query_channel = 198U;
    tmp_msg_0.reply_channel = 17U;
    tmp_msg_0.transponder_delay = 72U;
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
    msg.setTimeStamp(0.725698505058);
    msg.setSource(11483U);
    msg.setSourceEntity(178U);
    msg.setDestination(52617U);
    msg.setDestinationEntity(203U);
    msg.op = 247U;

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
    msg.setTimeStamp(0.190004067045);
    msg.setSource(62911U);
    msg.setSourceEntity(52U);
    msg.setDestination(42317U);
    msg.setDestinationEntity(176U);
    msg.op = 41U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("IZCXTGGOVUYSFBIZOWJHGPPKLWODTNJLVLDEAMRUENKQECSZMQBNXBDSVYAYQTKJPUYMTIQOWHPINMDUZAZUHOXRDTVKVLMPBXVHAWQG");
    tmp_msg_0.lat = 0.398049669027;
    tmp_msg_0.lon = 0.894483504266;
    tmp_msg_0.depth = 0.372955697909;
    tmp_msg_0.query_channel = 210U;
    tmp_msg_0.reply_channel = 47U;
    tmp_msg_0.transponder_delay = 177U;
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
    msg.setTimeStamp(0.643179731809);
    msg.setSource(40721U);
    msg.setSourceEntity(233U);
    msg.setDestination(58688U);
    msg.setDestinationEntity(158U);
    IMC::PowerSettings tmp_msg_0;
    tmp_msg_0.l2 = 46;
    tmp_msg_0.l3 = 53;
    tmp_msg_0.iridium = 123;
    tmp_msg_0.modem = -72;
    tmp_msg_0.pumps = -66;
    tmp_msg_0.vhf = -28;
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
    msg.setTimeStamp(0.0351348661149);
    msg.setSource(22228U);
    msg.setSourceEntity(246U);
    msg.setDestination(62344U);
    msg.setDestinationEntity(225U);
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("NKMTMOEUVBZVPHJPEBEODZMMCXYCHCVYHSCMDPQYXDTXZLFJRNGPVSSUGBKURHUBSIWFFAILZHKIR");
    tmp_msg_0.value.assign("YBPGLPRVQAFJDCJBHYQBREKMVTIKSKIWGXHJKMDSEMSSXHWXUEANSDQOKYZCMFOWNCETNFDWUPBGUKARZUYMXKBKAZIJWJYLWNQUBPBQITGEAOORNNUZCYLLBQCQHNPYFATFUOGKRA");
    tmp_msg_0.type = 226U;
    tmp_msg_0.access = 174U;
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
    msg.setTimeStamp(0.837619720109);
    msg.setSource(18895U);
    msg.setSourceEntity(180U);
    msg.setDestination(39198U);
    msg.setDestinationEntity(30U);
    IMC::Target tmp_msg_0;
    tmp_msg_0.label.assign("XSCYNQBXUDCPWMRCGPEWTSATPMFDOEQDKQQHNAUNAYNKHKSEJHGNASUSUBAEIIUQELQPDBGGLBCOPKEBNMCGCIGVRHLMXQYOCXZLYSAHQZLAOQIILJGKWZVDTXMIKFUUYJOEWOUZJIBCRGUOGRMPVFDWDAXDFPQFETLSJYYWVBTZWKTNYXVKJOAFSJLNZVBXPEZDYWN");
    tmp_msg_0.lat = 0.89273477235;
    tmp_msg_0.lon = 0.732094707501;
    tmp_msg_0.z = 0.808858103928;
    tmp_msg_0.z_units = 131U;
    tmp_msg_0.cog = 0.179580906636;
    tmp_msg_0.sog = 0.178613550865;
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
    msg.setTimeStamp(0.755631456681);
    msg.setSource(58339U);
    msg.setSourceEntity(234U);
    msg.setDestination(47660U);
    msg.setDestinationEntity(214U);
    msg.op = 86U;
    msg.system.assign("BBUPMFIKDXJQHAFYDCJTZQAJMECWJDHUFQGTA");
    msg.range = 0.897977390714;
    IMC::Abort tmp_msg_0;
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
    msg.setTimeStamp(0.154592723349);
    msg.setSource(28264U);
    msg.setSourceEntity(239U);
    msg.setDestination(54107U);
    msg.setDestinationEntity(103U);
    msg.op = 160U;
    msg.system.assign("MJWPQHYTYJHOMTGVNVZXHYDSBVKYZPCPJTEEMYWSKIIIBOUTQHITKVINRYCFQUXAZHBCGNGCNHZOCHWUESHGIOKJAJGQOTURJALKKBBESRFDVFUMMZDESMGNSEZKBERIPIRVWBPORQXFXLZDLIWFQURFMGXXALQWDBRDELXTUSCWVAZZFENEOOAAHYDCYTXYYWDJTKULNOFJLMDZXCJLRUNWVPCVJODLBMPGFP");
    msg.range = 0.065657153438;
    IMC::SaveEntityParameters tmp_msg_0;
    tmp_msg_0.name.assign("ZVGWPYZHOVDMISBVRNACUMFVAWBYHSZPFGIJJLVENUOTYEAINTXHRCQSLDSLZCXOPKEQJOKLPOAMQPFKWWOKENOFDDNRNDQFLXEQVJCYSRXHSAXRIPKTKUETWKVVIFBBNGGDKYQZAHXMBYEPUMHQZABINIEELQMTDGDVWIBCXUUTLYSPIRJGUNSBL");
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
    msg.setTimeStamp(0.616701484752);
    msg.setSource(42572U);
    msg.setSourceEntity(206U);
    msg.setDestination(24784U);
    msg.setDestinationEntity(183U);
    msg.op = 57U;
    msg.system.assign("PVNBWFUGWEHUYQGVJHDOITHFDTREAXGQLLNZSIVMLAQCUB");
    msg.range = 0.126931608081;
    IMC::FineOil tmp_msg_0;
    tmp_msg_0.value = 0.2665533947;
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
    msg.setTimeStamp(0.510405453243);
    msg.setSource(50442U);
    msg.setSourceEntity(131U);
    msg.setDestination(7710U);
    msg.setDestinationEntity(91U);

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
    msg.setTimeStamp(0.46210282125);
    msg.setSource(46844U);
    msg.setSourceEntity(221U);
    msg.setDestination(11673U);
    msg.setDestinationEntity(213U);

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
    msg.setTimeStamp(0.810112453718);
    msg.setSource(50731U);
    msg.setSourceEntity(124U);
    msg.setDestination(6356U);
    msg.setDestinationEntity(64U);

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
    msg.setTimeStamp(0.928266277646);
    msg.setSource(63641U);
    msg.setSourceEntity(209U);
    msg.setDestination(26903U);
    msg.setDestinationEntity(113U);
    msg.list.assign("WMNXTAZAGCAAOXQWDLVLJRNQLCVSNVHYIERPSVIRFXUTVKSPXSFGSKFXLISQMRYQLARVBGUGXYGLWSQZICPKPBDQPYPEIHEZQMEVAOEZXUKBJRFLZCDHZJFHZFJDGARBSTFDYWYHBHGHSTQEHUPUTREOKODRHCCNNBBNMZYECKAZYVIKYMUNGMFVNN");

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
    msg.setTimeStamp(0.924249767416);
    msg.setSource(12683U);
    msg.setSourceEntity(101U);
    msg.setDestination(1091U);
    msg.setDestinationEntity(113U);
    msg.list.assign("MABQDLTYFOCOPIUDIIFMTVAPFBXWSSVNIRNREKIDYWOFYWCUEUADBOGYSVYRGCXYCJSBRGOGWCAHUTLNJKUSVIL");

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
    msg.setTimeStamp(0.674937649223);
    msg.setSource(18091U);
    msg.setSourceEntity(189U);
    msg.setDestination(27205U);
    msg.setDestinationEntity(123U);
    msg.list.assign("ALMCKUFXURGPPGJCXJUSTIWIVKKSJJIGTEVRIJFBHLYIMSWNHNBLYMDGSTHPCFNKLDYBDSWETPRIWHQQVIOCGKRVJWCNEXIVQLCPYUINXR");

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
    msg.setTimeStamp(0.942882715094);
    msg.setSource(40601U);
    msg.setSourceEntity(41U);
    msg.setDestination(55181U);
    msg.setDestinationEntity(252U);
    msg.peer.assign("ZAYBLLCRDBXQAOXJNGCEXMEFMKETCAKKYDPDFDXXRBFVQYKXKPBJJWWOXBQUUFFOCGMAXZBHONNMCQJKZAIPUNAHWOSNINUUCPYBGSCWHOKWRAJEIWRGPJSTDZPJWIIKVUIILLTWQQZDLFSJREJNQTTWVVQNFIUVVYYMBDMDWXVEHIAVPMYHHNZTTOSMMDJOSKPCHYGTGOZSAESUF");
    msg.rssi = 0.0907462635802;
    msg.integrity = 64378U;

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
    msg.setTimeStamp(0.941085910979);
    msg.setSource(30901U);
    msg.setSourceEntity(5U);
    msg.setDestination(35563U);
    msg.setDestinationEntity(254U);
    msg.peer.assign("DUPNELZDUJLVHOTHPVYBGYJEBHIQSSZARJIIXVTUJCDKLXFTFQJWWWVEBQHTKEZHJKCYFULTEAIGPVOJAFJDBBFGNMAVLZYDNIDGCUGKNMMAKMRYHACOOWSMFAZNRLKEEFIUWUZRYCHUSSMBDZFXZVMKPMBTPBZEETHBXCNVKARXNRGVRNPYSGDHCIHPCDCLCWLLRQQDAOGOINPQTTWYWOSJXEFPSYRUQWXKYQNTSOIBOFX");
    msg.rssi = 0.0552290257508;
    msg.integrity = 18999U;

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
    msg.setTimeStamp(0.897737745277);
    msg.setSource(64833U);
    msg.setSourceEntity(79U);
    msg.setDestination(22191U);
    msg.setDestinationEntity(219U);
    msg.peer.assign("TZNTSJTPLYJVEGZRVKUHRAKVWAWDKRSDCBKIAEPGHOOLABNXSDBYHVPXFKBWNTEWIQDOMGLRDTOZJWNJJDFGBAMQMMPNWTYCVXVUOGEEYOLLSTWZKJJLINYGDWUQXFIELAVRYBLNXZZZXYPUCSNARXZHGHFNCXJUDGRVSIBTJFZSLQTEKAMIQRUHFRLXEQMJQODCWCMHOSKNMWCQMHEGTSBVFUOPOYISMDFYUZKC");
    msg.rssi = 0.563526856795;
    msg.integrity = 55007U;

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
    msg.setTimeStamp(0.536218572564);
    msg.setSource(38828U);
    msg.setSourceEntity(238U);
    msg.setDestination(9458U);
    msg.setDestinationEntity(45U);
    msg.req_id = 61140U;
    msg.destination.assign("RQXBNYYZAZUVNPOHBRSTSUWCBPOZINIQECZOLMUSCUFARSKTNLCFOQCXZKVEMPHOYLEOGUVJXTJBYVUBFRDKWIWJPXLI");
    msg.timeout = 0.726574574741;
    msg.range = 0.224471218785;
    msg.type = 204U;
    IMC::LblRangeAcceptance tmp_msg_0;
    tmp_msg_0.id = 201U;
    tmp_msg_0.range = 0.0166008457622;
    tmp_msg_0.acceptance = 184U;
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
    msg.setTimeStamp(0.0607388938342);
    msg.setSource(12924U);
    msg.setSourceEntity(37U);
    msg.setDestination(64776U);
    msg.setDestinationEntity(105U);
    msg.req_id = 57625U;
    msg.destination.assign("CCVWTAWPRXLDSBTXELSJXVOQCTERGDTVKQBRDNGZNERHNMOINFAGPXZHXDJLKVJMSVUSOKQNWISEIDZHVLKPFLIMLREQRXWCUYUOKNFAJLZYYPFLZQFJWYJHASQRQBPZTKUXBOREPUZFDJMWPTJOMOYS");
    msg.timeout = 0.0512935433156;
    msg.range = 0.244688311046;
    msg.type = 108U;
    IMC::IridiumTxStatus tmp_msg_0;
    tmp_msg_0.req_id = 56818U;
    tmp_msg_0.status = 29U;
    tmp_msg_0.text.assign("IEXEHNQLHURFEUVPOXFRZXAGJPWDCVZWPOWUIKJHTGRXCJPTTDVDVXBBOTPAOPOAEGTEEMOSGGDXSHCXUOFHKMMUMBXQV");
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
    msg.setTimeStamp(0.607713265553);
    msg.setSource(42480U);
    msg.setSourceEntity(5U);
    msg.setDestination(42677U);
    msg.setDestinationEntity(206U);
    msg.req_id = 19691U;
    msg.destination.assign("JBWAWXQOOZJIFXELZVHYGUHJWIGWVOQFOXTZKAPHLJBNOADDQNRQTQHDCKBGSSXHJDBRGXNQAMPNNPEMLRJRIQVHNCTIOWDLYSMJVVGIENKPMUVOSCMSPEOAVTFLCZZRWMURTJVSZNFUDBREEJYAPABHDGUTNUCFGPZIIRKLLYMGYZAMKCIBXUTSUHDLRISWKFIYWUNWSQBPTFVKQCWLGBEGZJRXKDDAPEXEUMTF");
    msg.timeout = 0.988562239525;
    msg.range = 0.605361881399;
    msg.type = 137U;
    IMC::FineOil tmp_msg_0;
    tmp_msg_0.value = 0.432665616292;
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
    msg.setTimeStamp(0.979501944273);
    msg.setSource(40577U);
    msg.setSourceEntity(121U);
    msg.setDestination(64054U);
    msg.setDestinationEntity(48U);
    msg.req_id = 57710U;
    msg.type = 13U;
    msg.status = 251U;
    msg.info.assign("EYZVGXXNTSJOZNQSCGYSCEHLPMRIQICTPFHKCTLCNINPEHALUKPHBB");
    msg.range = 0.190441322093;

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
    msg.setTimeStamp(0.58310335968);
    msg.setSource(2150U);
    msg.setSourceEntity(82U);
    msg.setDestination(26293U);
    msg.setDestinationEntity(226U);
    msg.req_id = 55766U;
    msg.type = 196U;
    msg.status = 198U;
    msg.info.assign("CLUKQFECKGXMNNZQSXGXEIQSISGMFCKQBQVIQK");
    msg.range = 0.473128529005;

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
    msg.setTimeStamp(0.795059118923);
    msg.setSource(33986U);
    msg.setSourceEntity(210U);
    msg.setDestination(48587U);
    msg.setDestinationEntity(137U);
    msg.req_id = 51489U;
    msg.type = 177U;
    msg.status = 5U;
    msg.info.assign("UMUIYDJZYMAUQSCZJVUQAPGGVDXIBYCNFFITWUKRRSCIMJ");
    msg.range = 0.670416710753;

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
    msg.setTimeStamp(0.93136689095);
    msg.setSource(20467U);
    msg.setSourceEntity(144U);
    msg.setDestination(17026U);
    msg.setDestinationEntity(246U);
    msg.value = 30048;

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
    msg.setTimeStamp(0.908153421764);
    msg.setSource(40715U);
    msg.setSourceEntity(141U);
    msg.setDestination(16761U);
    msg.setDestinationEntity(185U);
    msg.value = 5255;

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
    msg.setTimeStamp(0.0409603957333);
    msg.setSource(30716U);
    msg.setSourceEntity(24U);
    msg.setDestination(13004U);
    msg.setDestinationEntity(245U);
    msg.value = 13023;

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
    msg.setTimeStamp(0.751937244304);
    msg.setSource(44865U);
    msg.setSourceEntity(170U);
    msg.setDestination(58894U);
    msg.setDestinationEntity(144U);
    msg.value = 0.460692064242;

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
    msg.setTimeStamp(0.275749880797);
    msg.setSource(27056U);
    msg.setSourceEntity(111U);
    msg.setDestination(49793U);
    msg.setDestinationEntity(158U);
    msg.value = 0.142209258005;

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
    msg.setTimeStamp(0.776616276374);
    msg.setSource(34216U);
    msg.setSourceEntity(18U);
    msg.setDestination(16540U);
    msg.setDestinationEntity(52U);
    msg.value = 0.053918551062;

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
    msg.setTimeStamp(0.323754768975);
    msg.setSource(51153U);
    msg.setSourceEntity(208U);
    msg.setDestination(52155U);
    msg.setDestinationEntity(243U);
    msg.value = 0.813270334924;

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
    msg.setTimeStamp(0.391581446294);
    msg.setSource(47225U);
    msg.setSourceEntity(117U);
    msg.setDestination(15896U);
    msg.setDestinationEntity(7U);
    msg.value = 0.958976527485;

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
    msg.setTimeStamp(0.544834688307);
    msg.setSource(783U);
    msg.setSourceEntity(120U);
    msg.setDestination(30504U);
    msg.setDestinationEntity(87U);
    msg.value = 0.899484245912;

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
    msg.setTimeStamp(0.0558132081325);
    msg.setSource(25714U);
    msg.setSourceEntity(88U);
    msg.setDestination(47850U);
    msg.setDestinationEntity(45U);
    msg.validity = 17605U;
    msg.type = 130U;
    msg.utc_year = 52850U;
    msg.utc_month = 199U;
    msg.utc_day = 206U;
    msg.utc_time = 0.963866451468;
    msg.lat = 0.600525800479;
    msg.lon = 0.759094380041;
    msg.height = 0.488290788033;
    msg.satellites = 76U;
    msg.cog = 0.57193488488;
    msg.sog = 0.806768075417;
    msg.hdop = 0.641840645526;
    msg.vdop = 0.0914305387338;
    msg.hacc = 0.754520630175;
    msg.vacc = 0.90081282482;

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
    msg.setTimeStamp(0.195637712848);
    msg.setSource(20437U);
    msg.setSourceEntity(34U);
    msg.setDestination(23655U);
    msg.setDestinationEntity(8U);
    msg.validity = 4157U;
    msg.type = 53U;
    msg.utc_year = 6125U;
    msg.utc_month = 140U;
    msg.utc_day = 245U;
    msg.utc_time = 0.634815687558;
    msg.lat = 0.580687790894;
    msg.lon = 0.75780056648;
    msg.height = 0.940731811812;
    msg.satellites = 165U;
    msg.cog = 0.810559332345;
    msg.sog = 0.825967118401;
    msg.hdop = 0.746644009665;
    msg.vdop = 0.426672987889;
    msg.hacc = 0.0749096702252;
    msg.vacc = 0.564670740338;

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
    msg.setTimeStamp(0.277340406518);
    msg.setSource(2294U);
    msg.setSourceEntity(110U);
    msg.setDestination(10381U);
    msg.setDestinationEntity(207U);
    msg.validity = 56857U;
    msg.type = 215U;
    msg.utc_year = 37432U;
    msg.utc_month = 48U;
    msg.utc_day = 65U;
    msg.utc_time = 0.729409136577;
    msg.lat = 0.0657963689184;
    msg.lon = 0.545684385637;
    msg.height = 0.474033519191;
    msg.satellites = 193U;
    msg.cog = 0.142798467208;
    msg.sog = 0.511694081047;
    msg.hdop = 0.396376086313;
    msg.vdop = 0.776650113209;
    msg.hacc = 0.87599005786;
    msg.vacc = 0.898464610577;

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
    msg.setTimeStamp(0.0600046049593);
    msg.setSource(48545U);
    msg.setSourceEntity(24U);
    msg.setDestination(24273U);
    msg.setDestinationEntity(154U);
    msg.time = 0.232616565078;
    msg.phi = 0.183695878379;
    msg.theta = 0.864572518522;
    msg.psi = 0.787551478727;
    msg.psi_magnetic = 0.0309257427571;

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
    msg.setTimeStamp(0.198210547611);
    msg.setSource(46694U);
    msg.setSourceEntity(8U);
    msg.setDestination(1856U);
    msg.setDestinationEntity(93U);
    msg.time = 0.283932815082;
    msg.phi = 0.651667317053;
    msg.theta = 0.578664171124;
    msg.psi = 0.998243104618;
    msg.psi_magnetic = 0.105358148103;

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
    msg.setTimeStamp(0.599360163465);
    msg.setSource(51598U);
    msg.setSourceEntity(211U);
    msg.setDestination(56838U);
    msg.setDestinationEntity(104U);
    msg.time = 0.444712578656;
    msg.phi = 0.250871134582;
    msg.theta = 0.403010325795;
    msg.psi = 0.0357738009529;
    msg.psi_magnetic = 0.635947462561;

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
    msg.setTimeStamp(0.283147150592);
    msg.setSource(11111U);
    msg.setSourceEntity(140U);
    msg.setDestination(12923U);
    msg.setDestinationEntity(213U);
    msg.time = 0.536850297154;
    msg.x = 0.595796508608;
    msg.y = 0.227381567726;
    msg.z = 0.902900217976;
    msg.timestep = 0.178592183523;

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
    msg.setTimeStamp(0.385401489946);
    msg.setSource(63679U);
    msg.setSourceEntity(228U);
    msg.setDestination(15552U);
    msg.setDestinationEntity(73U);
    msg.time = 0.923219373177;
    msg.x = 0.846191983689;
    msg.y = 0.756507539288;
    msg.z = 0.71078896208;
    msg.timestep = 0.78224549204;

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
    msg.setTimeStamp(0.0345302016405);
    msg.setSource(16416U);
    msg.setSourceEntity(203U);
    msg.setDestination(61124U);
    msg.setDestinationEntity(171U);
    msg.time = 0.0838472912165;
    msg.x = 0.927903784362;
    msg.y = 0.844889147378;
    msg.z = 0.684262938567;
    msg.timestep = 0.895830212359;

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
    msg.setTimeStamp(0.225242001173);
    msg.setSource(34649U);
    msg.setSourceEntity(61U);
    msg.setDestination(2837U);
    msg.setDestinationEntity(232U);
    msg.time = 0.583342402071;
    msg.x = 0.952613136708;
    msg.y = 0.888890293315;
    msg.z = 0.42736604309;

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
    msg.setTimeStamp(0.414573294941);
    msg.setSource(31810U);
    msg.setSourceEntity(44U);
    msg.setDestination(64449U);
    msg.setDestinationEntity(178U);
    msg.time = 0.686995238045;
    msg.x = 0.375511179631;
    msg.y = 0.448224367771;
    msg.z = 0.716625295342;

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
    msg.setTimeStamp(0.10196232967);
    msg.setSource(22157U);
    msg.setSourceEntity(8U);
    msg.setDestination(14069U);
    msg.setDestinationEntity(245U);
    msg.time = 0.0194658277931;
    msg.x = 0.144654722619;
    msg.y = 0.951748357464;
    msg.z = 0.82659198183;

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
    msg.setTimeStamp(0.653888340126);
    msg.setSource(14824U);
    msg.setSourceEntity(54U);
    msg.setDestination(30403U);
    msg.setDestinationEntity(17U);
    msg.time = 0.0710454349567;
    msg.x = 0.151203702448;
    msg.y = 0.339502036178;
    msg.z = 0.424445329483;

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
    msg.setTimeStamp(0.516392103976);
    msg.setSource(65322U);
    msg.setSourceEntity(181U);
    msg.setDestination(11683U);
    msg.setDestinationEntity(92U);
    msg.time = 0.695975058972;
    msg.x = 0.23529360665;
    msg.y = 0.315854432247;
    msg.z = 0.0163477835898;

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
    msg.setTimeStamp(0.295200509498);
    msg.setSource(48044U);
    msg.setSourceEntity(228U);
    msg.setDestination(28102U);
    msg.setDestinationEntity(13U);
    msg.time = 0.504083892249;
    msg.x = 0.115684130254;
    msg.y = 0.440761486913;
    msg.z = 0.363420608183;

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
    msg.setTimeStamp(0.22858810462);
    msg.setSource(12123U);
    msg.setSourceEntity(181U);
    msg.setDestination(5935U);
    msg.setDestinationEntity(196U);
    msg.time = 0.120193206505;
    msg.x = 0.178556523341;
    msg.y = 0.720450158845;
    msg.z = 0.133292729073;

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
    msg.setTimeStamp(0.449670439958);
    msg.setSource(52628U);
    msg.setSourceEntity(244U);
    msg.setDestination(8033U);
    msg.setDestinationEntity(150U);
    msg.time = 0.536953389234;
    msg.x = 0.642669237957;
    msg.y = 0.348334364317;
    msg.z = 0.743470029556;

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
    msg.setTimeStamp(0.579345090606);
    msg.setSource(22366U);
    msg.setSourceEntity(251U);
    msg.setDestination(30368U);
    msg.setDestinationEntity(153U);
    msg.time = 0.730312818953;
    msg.x = 0.627707641338;
    msg.y = 0.38131483126;
    msg.z = 0.173134712432;

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
    msg.setTimeStamp(0.631640345867);
    msg.setSource(14087U);
    msg.setSourceEntity(35U);
    msg.setDestination(40426U);
    msg.setDestinationEntity(229U);
    msg.validity = 184U;
    msg.x = 0.163807739264;
    msg.y = 0.542004242061;
    msg.z = 0.636064605695;

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
    msg.setTimeStamp(0.0776185374178);
    msg.setSource(46586U);
    msg.setSourceEntity(169U);
    msg.setDestination(48746U);
    msg.setDestinationEntity(207U);
    msg.validity = 181U;
    msg.x = 0.558604403518;
    msg.y = 0.667818160509;
    msg.z = 0.453271175414;

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
    msg.setTimeStamp(0.393823794025);
    msg.setSource(64036U);
    msg.setSourceEntity(207U);
    msg.setDestination(42519U);
    msg.setDestinationEntity(124U);
    msg.validity = 242U;
    msg.x = 0.206072725107;
    msg.y = 0.804721975012;
    msg.z = 0.706831061466;

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
    msg.setTimeStamp(0.738240049824);
    msg.setSource(7047U);
    msg.setSourceEntity(246U);
    msg.setDestination(46404U);
    msg.setDestinationEntity(66U);
    msg.validity = 166U;
    msg.x = 0.254310353875;
    msg.y = 0.259799271389;
    msg.z = 0.683719350434;

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
    msg.setTimeStamp(0.893371543152);
    msg.setSource(43379U);
    msg.setSourceEntity(129U);
    msg.setDestination(63975U);
    msg.setDestinationEntity(120U);
    msg.validity = 86U;
    msg.x = 0.350245202331;
    msg.y = 0.185292348509;
    msg.z = 0.215477389652;

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
    msg.setTimeStamp(0.79613489487);
    msg.setSource(39202U);
    msg.setSourceEntity(62U);
    msg.setDestination(19109U);
    msg.setDestinationEntity(91U);
    msg.validity = 194U;
    msg.x = 0.164758986545;
    msg.y = 0.8043957942;
    msg.z = 0.0984479218199;

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
    msg.setTimeStamp(0.578902292456);
    msg.setSource(43098U);
    msg.setSourceEntity(242U);
    msg.setDestination(50706U);
    msg.setDestinationEntity(0U);
    msg.time = 0.0496374013498;
    msg.x = 0.49804256103;
    msg.y = 0.242872142444;
    msg.z = 0.806646902276;

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
    msg.setTimeStamp(0.166807119001);
    msg.setSource(51694U);
    msg.setSourceEntity(65U);
    msg.setDestination(27446U);
    msg.setDestinationEntity(167U);
    msg.time = 0.422073435163;
    msg.x = 0.883966974044;
    msg.y = 0.185101626776;
    msg.z = 0.517811929613;

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
    msg.setTimeStamp(0.910349936373);
    msg.setSource(42042U);
    msg.setSourceEntity(17U);
    msg.setDestination(45594U);
    msg.setDestinationEntity(190U);
    msg.time = 0.836441686036;
    msg.x = 0.129881449501;
    msg.y = 0.352389487348;
    msg.z = 0.30354983098;

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
    msg.setTimeStamp(0.463305492128);
    msg.setSource(61580U);
    msg.setSourceEntity(174U);
    msg.setDestination(19481U);
    msg.setDestinationEntity(90U);
    msg.validity = 46U;
    msg.value = 0.150110592735;

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
    msg.setTimeStamp(0.0456345184335);
    msg.setSource(40891U);
    msg.setSourceEntity(245U);
    msg.setDestination(14580U);
    msg.setDestinationEntity(120U);
    msg.validity = 79U;
    msg.value = 0.241215336435;

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
    msg.setTimeStamp(0.554821751013);
    msg.setSource(39682U);
    msg.setSourceEntity(232U);
    msg.setDestination(26353U);
    msg.setDestinationEntity(87U);
    msg.validity = 223U;
    msg.value = 0.0623319929299;

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
    msg.setTimeStamp(0.419736698372);
    msg.setSource(61159U);
    msg.setSourceEntity(164U);
    msg.setDestination(38581U);
    msg.setDestinationEntity(111U);
    msg.value = 0.849000505363;

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
    msg.setTimeStamp(0.913858005292);
    msg.setSource(17148U);
    msg.setSourceEntity(241U);
    msg.setDestination(22964U);
    msg.setDestinationEntity(133U);
    msg.value = 0.793461218795;

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
    msg.setTimeStamp(0.860360542791);
    msg.setSource(16464U);
    msg.setSourceEntity(170U);
    msg.setDestination(22225U);
    msg.setDestinationEntity(109U);
    msg.value = 0.941339947201;

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
    msg.setTimeStamp(0.59312981684);
    msg.setSource(5760U);
    msg.setSourceEntity(40U);
    msg.setDestination(31525U);
    msg.setDestinationEntity(33U);
    msg.value = 0.0789350358181;

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
    msg.setTimeStamp(0.707605323411);
    msg.setSource(7337U);
    msg.setSourceEntity(35U);
    msg.setDestination(52213U);
    msg.setDestinationEntity(236U);
    msg.value = 0.536129219528;

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
    msg.setTimeStamp(0.894777164425);
    msg.setSource(51623U);
    msg.setSourceEntity(147U);
    msg.setDestination(21095U);
    msg.setDestinationEntity(154U);
    msg.value = 0.362529941433;

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
    msg.setTimeStamp(0.934426558824);
    msg.setSource(16995U);
    msg.setSourceEntity(74U);
    msg.setDestination(29375U);
    msg.setDestinationEntity(11U);
    msg.value = 0.789053750797;

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
    msg.setTimeStamp(0.0403904173293);
    msg.setSource(50935U);
    msg.setSourceEntity(97U);
    msg.setDestination(23934U);
    msg.setDestinationEntity(60U);
    msg.value = 0.628831457485;

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
    msg.setTimeStamp(0.473453126352);
    msg.setSource(34294U);
    msg.setSourceEntity(29U);
    msg.setDestination(37404U);
    msg.setDestinationEntity(82U);
    msg.value = 0.124812210709;

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
    msg.setTimeStamp(0.463173517814);
    msg.setSource(13285U);
    msg.setSourceEntity(102U);
    msg.setDestination(27543U);
    msg.setDestinationEntity(117U);
    msg.value = 0.539818601281;

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
    msg.setTimeStamp(0.38968653929);
    msg.setSource(44513U);
    msg.setSourceEntity(1U);
    msg.setDestination(22887U);
    msg.setDestinationEntity(194U);
    msg.value = 0.98528113556;

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
    msg.setTimeStamp(0.873977003923);
    msg.setSource(64376U);
    msg.setSourceEntity(70U);
    msg.setDestination(39980U);
    msg.setDestinationEntity(133U);
    msg.value = 0.0391341973703;

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
    msg.setTimeStamp(0.466763348126);
    msg.setSource(6839U);
    msg.setSourceEntity(66U);
    msg.setDestination(4051U);
    msg.setDestinationEntity(219U);
    msg.value = 0.670425108537;

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
    msg.setTimeStamp(0.37785075586);
    msg.setSource(1202U);
    msg.setSourceEntity(247U);
    msg.setDestination(62101U);
    msg.setDestinationEntity(23U);
    msg.value = 0.763087404675;

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
    msg.setTimeStamp(0.946293434022);
    msg.setSource(4489U);
    msg.setSourceEntity(227U);
    msg.setDestination(24135U);
    msg.setDestinationEntity(86U);
    msg.value = 0.504653231199;

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
    msg.setTimeStamp(0.355686419265);
    msg.setSource(14388U);
    msg.setSourceEntity(133U);
    msg.setDestination(3524U);
    msg.setDestinationEntity(43U);
    msg.value = 0.48090392073;

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
    msg.setTimeStamp(0.181553227934);
    msg.setSource(13574U);
    msg.setSourceEntity(138U);
    msg.setDestination(36369U);
    msg.setDestinationEntity(250U);
    msg.value = 0.196033038847;

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
    msg.setTimeStamp(0.388462918305);
    msg.setSource(51383U);
    msg.setSourceEntity(2U);
    msg.setDestination(40860U);
    msg.setDestinationEntity(49U);
    msg.value = 0.911708917205;

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
    msg.setTimeStamp(0.441676665235);
    msg.setSource(55417U);
    msg.setSourceEntity(253U);
    msg.setDestination(29466U);
    msg.setDestinationEntity(28U);
    msg.value = 0.31047400816;

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
    msg.setTimeStamp(0.200895878914);
    msg.setSource(47788U);
    msg.setSourceEntity(90U);
    msg.setDestination(4115U);
    msg.setDestinationEntity(157U);
    msg.value = 0.44196966746;

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
    msg.setTimeStamp(0.145687603725);
    msg.setSource(16431U);
    msg.setSourceEntity(168U);
    msg.setDestination(49981U);
    msg.setDestinationEntity(213U);
    msg.value = 0.87258023135;

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
    msg.setTimeStamp(0.533871216465);
    msg.setSource(38513U);
    msg.setSourceEntity(146U);
    msg.setDestination(45317U);
    msg.setDestinationEntity(209U);
    msg.value = 0.0326886875952;

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
    msg.setTimeStamp(0.678184959327);
    msg.setSource(55058U);
    msg.setSourceEntity(83U);
    msg.setDestination(32663U);
    msg.setDestinationEntity(142U);
    msg.value = 0.57836836594;

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
    msg.setTimeStamp(0.850900003533);
    msg.setSource(879U);
    msg.setSourceEntity(57U);
    msg.setDestination(57978U);
    msg.setDestinationEntity(81U);
    msg.value = 0.882700418502;

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
    msg.setTimeStamp(0.238545158477);
    msg.setSource(25833U);
    msg.setSourceEntity(7U);
    msg.setDestination(37144U);
    msg.setDestinationEntity(53U);
    msg.direction = 0.22528091504;
    msg.speed = 0.13031220985;
    msg.turbulence = 0.985931213067;

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
    msg.setTimeStamp(0.0792521949913);
    msg.setSource(3833U);
    msg.setSourceEntity(61U);
    msg.setDestination(30686U);
    msg.setDestinationEntity(84U);
    msg.direction = 0.169185655503;
    msg.speed = 0.894910133323;
    msg.turbulence = 0.586632529068;

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
    msg.setTimeStamp(0.677395253963);
    msg.setSource(61063U);
    msg.setSourceEntity(240U);
    msg.setDestination(25952U);
    msg.setDestinationEntity(217U);
    msg.direction = 0.124191885681;
    msg.speed = 0.749550503618;
    msg.turbulence = 0.738593217263;

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
    msg.setTimeStamp(0.788325962323);
    msg.setSource(3944U);
    msg.setSourceEntity(71U);
    msg.setDestination(22324U);
    msg.setDestinationEntity(54U);
    msg.value = 0.247477897025;

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
    msg.setTimeStamp(0.799210678069);
    msg.setSource(27893U);
    msg.setSourceEntity(223U);
    msg.setDestination(14977U);
    msg.setDestinationEntity(39U);
    msg.value = 0.176838672137;

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
    msg.setTimeStamp(0.910056956974);
    msg.setSource(19688U);
    msg.setSourceEntity(10U);
    msg.setDestination(38456U);
    msg.setDestinationEntity(18U);
    msg.value = 0.588951819932;

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
    msg.setTimeStamp(0.442524031878);
    msg.setSource(43157U);
    msg.setSourceEntity(85U);
    msg.setDestination(35724U);
    msg.setDestinationEntity(116U);
    msg.value.assign("EMSMRTSRCTGTUGZFLSWSOYHUSAUKWEQZVT");

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
    msg.setTimeStamp(0.426696574823);
    msg.setSource(56466U);
    msg.setSourceEntity(235U);
    msg.setDestination(39819U);
    msg.setDestinationEntity(139U);
    msg.value.assign("TQYSCKIODBAMNXFERLKIHASJYCSUXTJWXIYOKEYTXOCPKRAJDDRTGAZXPYFEQRIESQNZHOCDLAQVHVFBGDVVFMDLNUWCBTRPMPORHKJLBGBLDKFJZSQIMXNUMWUHXIUXEEJEGDPLWGBOFWNVZAQTHFQAEEKRJCHBGI");

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
    msg.setTimeStamp(0.418411174087);
    msg.setSource(58175U);
    msg.setSourceEntity(244U);
    msg.setDestination(34568U);
    msg.setDestinationEntity(84U);
    msg.value.assign("WTMXUUVJBGNZOPECGUNNGOKRCOJBFFEAVRLRLLARIGKNFZPTGZATULTTOMDWWELBOJPIUSBLQQFIYZNSRDRIXYTDLDKCUBQPZTSHMQSCETFHZJPZASVIVUHCYXIPYFAXYTVSFGGHABXWAPOP");

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
    msg.setTimeStamp(0.0191552592381);
    msg.setSource(5629U);
    msg.setSourceEntity(153U);
    msg.setDestination(61265U);
    msg.setDestinationEntity(61U);
    const char tmp_msg_0[] = {100, 47, 19, -76, -81, -82, 30, 91, -89, 14, 50, 50, -86, -17, -97, -59, 97, 45, -121, -121, 32, 23, -127, -24, -21, -111, -69, -52, -44, -60, -93, -79, -14, 80, 58, 78, 59, -52, 105, -11, 37, 96, -4, 11, 67, -72, 81, 25, 70, -49, 61, 22, 43, 45, -9, 118, -90, -68, 79, -111, -32, 105, 57, 27, 34, -107, 69, 13, -128, 80, 101, 11, -63, 17, 110, -120, -121, -93, 5, -122, 74, -73, -43, -45, -121, 50, -57, -59, -8, 5, 48, 74, 82, 94, -54, 77, 15, -49, -23, 16, -100, -65, -32, 38, -41, 84, -22, -75, -61, 110, 37, 38, -25, -37, 89, 49, -57, 97, -91, 42, -28, -15, -121, 59};
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
    msg.setTimeStamp(0.499320364037);
    msg.setSource(36926U);
    msg.setSourceEntity(195U);
    msg.setDestination(10132U);
    msg.setDestinationEntity(124U);
    const char tmp_msg_0[] = {-107, 71, -16, -105, 3, 34, -99, 16, -10, -35, 23, -116, -40, -80, -72, 126, 95, -39, -64, -60, -99, -65, -16, -103, -77, 111, 120, -18, 22, 31, 62, -83, 15, 14, 55, 104, 32, -54, -28, -51, -89, -13, 48, -98, -126, -70, -55, 12, -47, -120, -18, -107, -70, 95, -19, -35, -16, -51, 8, 1, 36, 60, -8, -25, -53, -18, -126, -101, 118, 126, -62, -8, -128, -77, 97, -112, 68, 83, 99, -85, -15, 65, 42, -7, 115, 21, -85, 116, 10, -88, -101, 103, 102, -25, -80, -34, -100, 9, -44, 102};
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
    msg.setTimeStamp(0.332937352677);
    msg.setSource(63693U);
    msg.setSourceEntity(83U);
    msg.setDestination(715U);
    msg.setDestinationEntity(135U);
    const char tmp_msg_0[] = {-5, -12, -54, -99, -108, 51, -27, 120, 102, 101, -22, 84, 94, 0, 51, -127, 84, 125, -45, -34, -78, 67, 31, -20, -99, 86, 109, -113, -64, -99, 27, 3, 102, 80, -106, -96, -3, 81, 117, 56, 29, 99, -72, 84, -5, 121, 17, 38, -40, -56, 33, 46, 36, 104, 105, -121, -48, -95, -49, -37, 71, -112, 87, 54, -88, -35, 124, 91, -70, -28, 81, -104, 42, 26, -52, 8, -119, 54, 14, 104, -63, 122, 90, 12, 16, -52, 110, 109, -117, 119, 11, 10, 26, -63, -78, -39, -42, -60, 55, -109, -6, 40, -14, 27, -126, 29, 33, 121, -15, -93, 9, 87, 4, 31, -9, 110, -37, -13, -61, -31, -78, -15, -117, 70, 95, -70, 74, -98, 63, 121, -27, 97, -24, -64, -60, 36, 106, 41, 93, 3, -113, -79, -70, -9, 84, 104, 72, 11, -31, -64, 111, -11, -64, -35, 62, -8, -41, 17, -90, -38, -32, -127, -27, 102, 10, -119, -16, 65, 86, 47, -71, -100, 94, 16, -127, -3, -18, -101, 31, -14, -77, -59, 4, -16, -113, 26, -24, -3, 93, -81, -73, -24, 5, 15, 125, -121, -11, 10, -39, -59, -126, 90, 98, -67, 21, -113, 113, 73, 119, -38, 53, 114, 99, -46, -24, 24, 8, 72, 114, -111, 17, 98, 116, -95, 17, 17, 15, -96, 99, -114, 102, -40, -20, 17, 55, 122, 117, 102, 34, 91, -77, -118, -110, 16, -117, -22, 126, 103, -103, 72, -3};
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
    msg.setTimeStamp(0.257370562111);
    msg.setSource(44751U);
    msg.setSourceEntity(91U);
    msg.setDestination(44483U);
    msg.setDestinationEntity(164U);
    msg.value = 0.270777514659;

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
    msg.setTimeStamp(0.36013794091);
    msg.setSource(4636U);
    msg.setSourceEntity(114U);
    msg.setDestination(44949U);
    msg.setDestinationEntity(145U);
    msg.value = 0.289990773266;

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
    msg.setTimeStamp(0.69645916171);
    msg.setSource(5776U);
    msg.setSourceEntity(11U);
    msg.setDestination(5404U);
    msg.setDestinationEntity(203U);
    msg.value = 0.85370955125;

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
    msg.setTimeStamp(0.442168325346);
    msg.setSource(7560U);
    msg.setSourceEntity(64U);
    msg.setDestination(6509U);
    msg.setDestinationEntity(112U);
    msg.type = 195U;
    msg.frequency = 3358206952U;
    msg.min_range = 50769U;
    msg.max_range = 2477U;
    msg.bits_per_point = 26U;
    msg.scale_factor = 0.477609150079;
    const char tmp_msg_0[] = {-57, -116, -122, 118, -55, 122, 84, 2, -86, 22, 22, -7, -43, 55, -88, -6, -125, 68, 87, 58, -38, 29, 14, -99, -79, 14, -121, 10, -44, 101, 18, 24, -87, 54, 87, 30, 23, 73, -38, 6, 124, 1, 48, 27, 39, -114, 14, 27, 84, 82, 109, -124, 119, -123, -107, 27, -50, -99, 118, 66, -113, 122, -110, -19, 14, -56, -36, -98, 120, 51, 80, -32, -81, 89, -2, -59, 11, -109, 51, 18, 3, -84, -5, 102, -39, 8, -17, 111, -86, 9, -78, 121, 67, 106, 70, 53, 31, -119, -17, -19, -58, -18};
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
    msg.setTimeStamp(0.415506793023);
    msg.setSource(54167U);
    msg.setSourceEntity(195U);
    msg.setDestination(50643U);
    msg.setDestinationEntity(97U);
    msg.type = 99U;
    msg.frequency = 4207525350U;
    msg.min_range = 18857U;
    msg.max_range = 2929U;
    msg.bits_per_point = 206U;
    msg.scale_factor = 0.268072667862;
    const char tmp_msg_0[] = {45, -112, 76, -21, -16, 111, -61, 118, 40, 66, -39, -58, -35, 101, 84, -116, 6, 56, 10, 80, -29, 6, -39, 4, -115, 14, 83, -4, 118, -66, 103, -101, 124, 25, -124, 68, -44, 62, -115, -71, -85, -10, 120, 68, 48, 45, 27, 111, 55, 20, 16, -101, -101, 75, 94, 1, -114, 35, 4, 22, 103, 35, -123, -108, -38, -114, -61, 117, -67, 110, -98, -83, -102, 120, 118, 99, 114, -7, -123, -13, 18, 51, -7, -96, -84, -1, 46, 9, 103, 87, 84, 93, 90, 60, 42, 98, -104, -81, -69, -58, -62, 4, -120, -17, 60};
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
    msg.setTimeStamp(0.985168387362);
    msg.setSource(16955U);
    msg.setSourceEntity(32U);
    msg.setDestination(4835U);
    msg.setDestinationEntity(156U);
    msg.type = 237U;
    msg.frequency = 217247565U;
    msg.min_range = 58736U;
    msg.max_range = 64067U;
    msg.bits_per_point = 3U;
    msg.scale_factor = 0.862785541131;
    const char tmp_msg_0[] = {-80, -123, 78, 74, 110, -23, 91, -27, 105, 18, -52, 25, -55, 40, -22, 100, -123, -15, 16, 24, 48, 71, -123, 86, -24, -36, 24, -73, 115, -6, 69, 31, -68, -71, -79, 14, 61, -44, -31, 14, -5, 108, 20, 68, 114, 56, -66, -74, -64, -58, -102, -4, -49, -95, -64, 36, 68, -49, -115, 67, -100, -65, 103, -27, 6, -82, 50, 77, 18, -111, -103, -23, -66, -76, -52, -117, 23, 102, 120, -26, -89, 0, -63, 10, 109, 47, 14, 125, 9, -21, 35, 47, 122, -70, 36, -27, -15, 96, 121, 51, 90, 74, -93, 42, -83, 36, 48, 99, -94, -46, 1, -37, -23, -108, -61, -31, 102, -63, -111, 83, 12, 40, 31, 33, 46, -12, 14, -52, 15, -31, -87, 83, 86, -13, 98, -51, -18, -18, -80, -64, 56, -2, 70, 98, -87, 2, 91, 81, -124, 108, -48, 84, 34, 116, 114, 6, 42, -14, 6, -105, 72, -38, 121, 69, -47, -67, 60, -71, -50, 87, 19, 3, 85, -20, -25, 0, 116, 91, -63, 71, 53, -88, -101, -90, 114};
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
    msg.setTimeStamp(0.869704410826);
    msg.setSource(3734U);
    msg.setSourceEntity(241U);
    msg.setDestination(51317U);
    msg.setDestinationEntity(138U);

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
    msg.setTimeStamp(0.312990143124);
    msg.setSource(22466U);
    msg.setSourceEntity(246U);
    msg.setDestination(8693U);
    msg.setDestinationEntity(18U);

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
    msg.setTimeStamp(0.292392918243);
    msg.setSource(35580U);
    msg.setSourceEntity(57U);
    msg.setDestination(37975U);
    msg.setDestinationEntity(24U);

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
    msg.setTimeStamp(0.0615411483303);
    msg.setSource(2502U);
    msg.setSourceEntity(7U);
    msg.setDestination(55003U);
    msg.setDestinationEntity(66U);
    msg.op = 198U;

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
    msg.setTimeStamp(0.145204097853);
    msg.setSource(25683U);
    msg.setSourceEntity(3U);
    msg.setDestination(48738U);
    msg.setDestinationEntity(144U);
    msg.op = 165U;

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
    msg.setTimeStamp(0.177552403527);
    msg.setSource(19068U);
    msg.setSourceEntity(193U);
    msg.setDestination(35703U);
    msg.setDestinationEntity(155U);
    msg.op = 23U;

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
    msg.setTimeStamp(0.0462512310383);
    msg.setSource(6711U);
    msg.setSourceEntity(1U);
    msg.setDestination(56395U);
    msg.setDestinationEntity(161U);
    msg.value = 0.218698633886;
    msg.confidence = 0.00894365557693;
    msg.opmodes.assign("THSEZMIWZSOADLUTVAZQCZLWFMPRHMANJQDCXZLWGUTHIOBQNVBFJEGGDAYRNXVURKVKKOHZUXWAJJRTOUZNHNWFRCHOKJMCOEJSOWTXDGESEXHMPPSEQGJPEYIZHSKLGIUEVJZYIPYLWQDGIANBLYLIUBYXPVQRCSSDQMRXGPBDPJBITBNXHJFURXNBGCFOTKQYLKWKIWPVHTFYRAWTVKFBUREYFCGVQ");

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
    msg.setTimeStamp(0.889918933315);
    msg.setSource(7895U);
    msg.setSourceEntity(15U);
    msg.setDestination(56880U);
    msg.setDestinationEntity(195U);
    msg.value = 0.721426174541;
    msg.confidence = 0.956562984936;
    msg.opmodes.assign("MLMDAHUXJOCHQQANUXWSTVRKLOFATSETCXDUCHWLZMZVR");

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
    msg.setTimeStamp(0.636109359866);
    msg.setSource(36923U);
    msg.setSourceEntity(48U);
    msg.setDestination(62432U);
    msg.setDestinationEntity(20U);
    msg.value = 0.204219852363;
    msg.confidence = 0.188543984832;
    msg.opmodes.assign("FMXUYTNQSZSFFLLAGGMNWKOINRACCJOCJAPVYVLJGISHTGZZNSCSXRHBDKMQALHCZUBOKLPYUPLASDDIEHUOLMLUQJRPWNNDVWGWJFJERFERANFOEYRLYGOXSVZYNDBYFETMWDGGOYVPOPRFIEPXCXQQOHNVITMJXIXTGUUVOQUECHMZCSMBZJBBVSD");

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
    msg.setTimeStamp(0.252657415455);
    msg.setSource(2606U);
    msg.setSourceEntity(90U);
    msg.setDestination(7014U);
    msg.setDestinationEntity(145U);
    msg.itow = 3599107350U;
    msg.lat = 0.975322540755;
    msg.lon = 0.517287516197;
    msg.height_ell = 0.543719539867;
    msg.height_sea = 0.0233888607834;
    msg.hacc = 0.330694527132;
    msg.vacc = 0.306123080715;
    msg.vel_n = 0.634294697877;
    msg.vel_e = 0.0105876962288;
    msg.vel_d = 0.0320817164967;
    msg.speed = 0.990496691139;
    msg.gspeed = 0.468241413856;
    msg.heading = 0.772686654742;
    msg.sacc = 0.896888415388;
    msg.cacc = 0.368125418062;

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
    msg.setTimeStamp(0.311151149497);
    msg.setSource(50639U);
    msg.setSourceEntity(111U);
    msg.setDestination(25499U);
    msg.setDestinationEntity(213U);
    msg.itow = 3931829269U;
    msg.lat = 0.367561828588;
    msg.lon = 0.967864590483;
    msg.height_ell = 0.0577025506828;
    msg.height_sea = 0.143932800098;
    msg.hacc = 0.389255613462;
    msg.vacc = 0.683661324828;
    msg.vel_n = 0.264829752182;
    msg.vel_e = 0.74142581942;
    msg.vel_d = 0.68148790955;
    msg.speed = 0.0410065477321;
    msg.gspeed = 0.836625968639;
    msg.heading = 0.421705273539;
    msg.sacc = 0.0733832262936;
    msg.cacc = 0.148059006303;

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
    msg.setTimeStamp(0.616003732341);
    msg.setSource(35531U);
    msg.setSourceEntity(121U);
    msg.setDestination(18461U);
    msg.setDestinationEntity(106U);
    msg.itow = 491659307U;
    msg.lat = 0.381118169125;
    msg.lon = 0.0290798932975;
    msg.height_ell = 0.134156808134;
    msg.height_sea = 0.0883841011139;
    msg.hacc = 0.0843837697201;
    msg.vacc = 0.711362645409;
    msg.vel_n = 0.64573348921;
    msg.vel_e = 0.207845378937;
    msg.vel_d = 0.658255330277;
    msg.speed = 0.316392195263;
    msg.gspeed = 0.910985957943;
    msg.heading = 0.554361430231;
    msg.sacc = 0.537582775388;
    msg.cacc = 0.613519104383;

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
    msg.setTimeStamp(0.990113035563);
    msg.setSource(6159U);
    msg.setSourceEntity(169U);
    msg.setDestination(60303U);
    msg.setDestinationEntity(15U);
    msg.id = 147U;
    msg.value = 0.344360004463;

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
    msg.setTimeStamp(0.659956865525);
    msg.setSource(1011U);
    msg.setSourceEntity(59U);
    msg.setDestination(62830U);
    msg.setDestinationEntity(89U);
    msg.id = 199U;
    msg.value = 0.907078196336;

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
    msg.setTimeStamp(0.180246876957);
    msg.setSource(24285U);
    msg.setSourceEntity(89U);
    msg.setDestination(30653U);
    msg.setDestinationEntity(131U);
    msg.id = 170U;
    msg.value = 0.36361400753;

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
    msg.setTimeStamp(0.76954153913);
    msg.setSource(59499U);
    msg.setSourceEntity(90U);
    msg.setDestination(45675U);
    msg.setDestinationEntity(75U);
    msg.x = 0.639842851536;
    msg.y = 0.635321208729;
    msg.z = 0.687338421357;
    msg.phi = 0.76733960584;
    msg.theta = 0.55103314567;
    msg.psi = 0.765220034623;

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
    msg.setTimeStamp(0.166756000899);
    msg.setSource(15506U);
    msg.setSourceEntity(115U);
    msg.setDestination(41248U);
    msg.setDestinationEntity(237U);
    msg.x = 0.099047661146;
    msg.y = 0.149435640547;
    msg.z = 0.324446803943;
    msg.phi = 0.221101217708;
    msg.theta = 0.0965292221993;
    msg.psi = 0.568794915736;

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
    msg.setTimeStamp(0.73399292413);
    msg.setSource(14837U);
    msg.setSourceEntity(88U);
    msg.setDestination(2381U);
    msg.setDestinationEntity(0U);
    msg.x = 0.274005443698;
    msg.y = 0.809941719081;
    msg.z = 0.276666850477;
    msg.phi = 0.871350542433;
    msg.theta = 0.0128826997594;
    msg.psi = 0.100331676172;

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
    msg.setTimeStamp(0.364237707485);
    msg.setSource(39529U);
    msg.setSourceEntity(47U);
    msg.setDestination(24019U);
    msg.setDestinationEntity(213U);
    msg.beam_width = 0.377288311668;
    msg.beam_height = 0.893174621316;

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
    msg.setTimeStamp(0.100664676117);
    msg.setSource(34224U);
    msg.setSourceEntity(222U);
    msg.setDestination(62157U);
    msg.setDestinationEntity(10U);
    msg.beam_width = 0.362202205121;
    msg.beam_height = 0.672049470806;

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
    msg.setTimeStamp(0.33632911152);
    msg.setSource(14478U);
    msg.setSourceEntity(135U);
    msg.setDestination(18392U);
    msg.setDestinationEntity(117U);
    msg.beam_width = 0.982454368578;
    msg.beam_height = 0.452600736842;

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
    msg.setTimeStamp(0.951877992089);
    msg.setSource(23169U);
    msg.setSourceEntity(34U);
    msg.setDestination(49327U);
    msg.setDestinationEntity(105U);
    msg.sane = 174U;

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
    msg.setTimeStamp(0.934257615737);
    msg.setSource(42864U);
    msg.setSourceEntity(174U);
    msg.setDestination(42434U);
    msg.setDestinationEntity(49U);
    msg.sane = 126U;

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
    msg.setTimeStamp(0.412451234497);
    msg.setSource(59998U);
    msg.setSourceEntity(242U);
    msg.setDestination(44771U);
    msg.setDestinationEntity(124U);
    msg.sane = 115U;

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
    msg.setTimeStamp(0.876802321878);
    msg.setSource(33848U);
    msg.setSourceEntity(62U);
    msg.setDestination(33220U);
    msg.setDestinationEntity(212U);
    msg.value = 0.880864436077;

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
    msg.setTimeStamp(0.526788126746);
    msg.setSource(64883U);
    msg.setSourceEntity(182U);
    msg.setDestination(28239U);
    msg.setDestinationEntity(87U);
    msg.value = 0.574157461084;

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
    msg.setTimeStamp(0.20855713995);
    msg.setSource(11624U);
    msg.setSourceEntity(133U);
    msg.setDestination(21105U);
    msg.setDestinationEntity(13U);
    msg.value = 0.736065903692;

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
    msg.setTimeStamp(0.921476719121);
    msg.setSource(6128U);
    msg.setSourceEntity(40U);
    msg.setDestination(7569U);
    msg.setDestinationEntity(132U);
    msg.value = 0.54633792457;

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
    msg.setTimeStamp(0.223522264241);
    msg.setSource(12536U);
    msg.setSourceEntity(58U);
    msg.setDestination(32904U);
    msg.setDestinationEntity(179U);
    msg.value = 0.795032612783;

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
    msg.setTimeStamp(0.904022985114);
    msg.setSource(64058U);
    msg.setSourceEntity(75U);
    msg.setDestination(5995U);
    msg.setDestinationEntity(139U);
    msg.value = 0.0750927766493;

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
    msg.setTimeStamp(0.321161209419);
    msg.setSource(41195U);
    msg.setSourceEntity(75U);
    msg.setDestination(63862U);
    msg.setDestinationEntity(121U);
    msg.value = 0.576485159683;

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
    msg.setTimeStamp(0.0323805053144);
    msg.setSource(44608U);
    msg.setSourceEntity(154U);
    msg.setDestination(8170U);
    msg.setDestinationEntity(244U);
    msg.value = 0.275404682163;

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
    msg.setTimeStamp(0.832497933476);
    msg.setSource(35779U);
    msg.setSourceEntity(216U);
    msg.setDestination(19125U);
    msg.setDestinationEntity(125U);
    msg.value = 0.672084523345;

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
    msg.setTimeStamp(0.875760444287);
    msg.setSource(21731U);
    msg.setSourceEntity(58U);
    msg.setDestination(4654U);
    msg.setDestinationEntity(14U);
    msg.value = 0.447356250768;

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
    msg.setTimeStamp(0.583889663419);
    msg.setSource(25400U);
    msg.setSourceEntity(100U);
    msg.setDestination(51947U);
    msg.setDestinationEntity(84U);
    msg.value = 0.00089001355752;

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
    msg.setTimeStamp(0.03203506063);
    msg.setSource(43545U);
    msg.setSourceEntity(194U);
    msg.setDestination(38219U);
    msg.setDestinationEntity(110U);
    msg.value = 0.584412611876;

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
    msg.setTimeStamp(0.135321272438);
    msg.setSource(29772U);
    msg.setSourceEntity(88U);
    msg.setDestination(35151U);
    msg.setDestinationEntity(6U);
    msg.value = 0.584497652124;

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
    msg.setTimeStamp(0.471238402346);
    msg.setSource(27024U);
    msg.setSourceEntity(136U);
    msg.setDestination(44070U);
    msg.setDestinationEntity(180U);
    msg.value = 0.714809181644;

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
    msg.setTimeStamp(0.23842325905);
    msg.setSource(47435U);
    msg.setSourceEntity(127U);
    msg.setDestination(32680U);
    msg.setDestinationEntity(112U);
    msg.value = 0.109555146147;

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
    msg.setTimeStamp(0.472781115336);
    msg.setSource(6284U);
    msg.setSourceEntity(220U);
    msg.setDestination(37351U);
    msg.setDestinationEntity(120U);
    msg.value = 0.491935818896;

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
    msg.setTimeStamp(0.981793934934);
    msg.setSource(48388U);
    msg.setSourceEntity(190U);
    msg.setDestination(60033U);
    msg.setDestinationEntity(227U);
    msg.value = 0.333595432222;

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
    msg.setTimeStamp(0.475993674334);
    msg.setSource(13602U);
    msg.setSourceEntity(208U);
    msg.setDestination(53732U);
    msg.setDestinationEntity(125U);
    msg.value = 0.603448562503;

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
    msg.setTimeStamp(0.593811690942);
    msg.setSource(13106U);
    msg.setSourceEntity(91U);
    msg.setDestination(42464U);
    msg.setDestinationEntity(227U);
    msg.value = 0.703892654545;

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
    msg.setTimeStamp(0.634520373052);
    msg.setSource(904U);
    msg.setSourceEntity(72U);
    msg.setDestination(10938U);
    msg.setDestinationEntity(32U);
    msg.value = 0.0922950250148;

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
    msg.setTimeStamp(0.566987868654);
    msg.setSource(62397U);
    msg.setSourceEntity(91U);
    msg.setDestination(36579U);
    msg.setDestinationEntity(12U);
    msg.value = 0.499718405444;

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
    msg.setTimeStamp(0.195937663793);
    msg.setSource(37363U);
    msg.setSourceEntity(203U);
    msg.setDestination(65100U);
    msg.setDestinationEntity(191U);
    msg.value = 0.951717481437;

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
    msg.setTimeStamp(0.278767760956);
    msg.setSource(40065U);
    msg.setSourceEntity(127U);
    msg.setDestination(5936U);
    msg.setDestinationEntity(201U);
    msg.value = 0.0630346839725;

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
    msg.setTimeStamp(0.853071577487);
    msg.setSource(60972U);
    msg.setSourceEntity(154U);
    msg.setDestination(54297U);
    msg.setDestinationEntity(80U);
    msg.value = 0.242882418911;

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
    msg.setTimeStamp(0.209787221981);
    msg.setSource(62426U);
    msg.setSourceEntity(34U);
    msg.setDestination(43543U);
    msg.setDestinationEntity(88U);
    msg.validity = 17667U;
    msg.type = 23U;
    msg.tow = 3392972663U;
    msg.base_lat = 0.0605399735723;
    msg.base_lon = 0.564698396539;
    msg.base_height = 0.267720416882;
    msg.n = 0.226407393443;
    msg.e = 0.871403595046;
    msg.d = 0.714507232881;
    msg.v_n = 0.976627206798;
    msg.v_e = 0.297806221914;
    msg.v_d = 0.179197344669;
    msg.satellites = 237U;
    msg.iar_hyp = 37493U;
    msg.iar_ratio = 0.633264023192;

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
    msg.setTimeStamp(0.944651321672);
    msg.setSource(4696U);
    msg.setSourceEntity(32U);
    msg.setDestination(64253U);
    msg.setDestinationEntity(165U);
    msg.validity = 51656U;
    msg.type = 74U;
    msg.tow = 918770496U;
    msg.base_lat = 0.733989488743;
    msg.base_lon = 0.920575245191;
    msg.base_height = 0.334357739027;
    msg.n = 0.692842185506;
    msg.e = 0.128982094505;
    msg.d = 0.0842097408859;
    msg.v_n = 0.832023442919;
    msg.v_e = 0.656260012874;
    msg.v_d = 0.443037373905;
    msg.satellites = 251U;
    msg.iar_hyp = 36224U;
    msg.iar_ratio = 0.122832137785;

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
    msg.setTimeStamp(0.746097531455);
    msg.setSource(52532U);
    msg.setSourceEntity(72U);
    msg.setDestination(37988U);
    msg.setDestinationEntity(8U);
    msg.validity = 24449U;
    msg.type = 116U;
    msg.tow = 572057710U;
    msg.base_lat = 0.91044415939;
    msg.base_lon = 0.329451002924;
    msg.base_height = 0.366809489865;
    msg.n = 0.0459389043688;
    msg.e = 0.49423455492;
    msg.d = 0.634357181532;
    msg.v_n = 0.146698236493;
    msg.v_e = 0.795305294631;
    msg.v_d = 0.628656356933;
    msg.satellites = 112U;
    msg.iar_hyp = 22699U;
    msg.iar_ratio = 0.948239376811;

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
    msg.setTimeStamp(0.122919677002);
    msg.setSource(21124U);
    msg.setSourceEntity(67U);
    msg.setDestination(58355U);
    msg.setDestinationEntity(137U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.819169777984;
    tmp_msg_0.lon = 0.0514011754135;
    tmp_msg_0.height = 0.760926737704;
    tmp_msg_0.x = 0.230512642265;
    tmp_msg_0.y = 0.220597397731;
    tmp_msg_0.z = 0.131221520368;
    tmp_msg_0.phi = 0.221888789737;
    tmp_msg_0.theta = 0.513567629533;
    tmp_msg_0.psi = 0.827659897973;
    tmp_msg_0.u = 0.714090735588;
    tmp_msg_0.v = 0.359759424113;
    tmp_msg_0.w = 0.523747182614;
    tmp_msg_0.vx = 0.565909454585;
    tmp_msg_0.vy = 0.324536374526;
    tmp_msg_0.vz = 0.816163415622;
    tmp_msg_0.p = 0.634036193179;
    tmp_msg_0.q = 0.999353059056;
    tmp_msg_0.r = 0.0861612890649;
    tmp_msg_0.depth = 0.211082693604;
    tmp_msg_0.alt = 0.654308753744;
    msg.state.set(tmp_msg_0);
    msg.type = 120U;

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
    msg.setTimeStamp(0.788875864134);
    msg.setSource(55925U);
    msg.setSourceEntity(76U);
    msg.setDestination(53786U);
    msg.setDestinationEntity(140U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.116532982297;
    tmp_msg_0.lon = 0.888811217567;
    tmp_msg_0.height = 0.993449209766;
    tmp_msg_0.x = 0.00693543340214;
    tmp_msg_0.y = 0.255875913199;
    tmp_msg_0.z = 0.584238375109;
    tmp_msg_0.phi = 0.946156728268;
    tmp_msg_0.theta = 0.641783441395;
    tmp_msg_0.psi = 0.761960701557;
    tmp_msg_0.u = 0.728417912996;
    tmp_msg_0.v = 0.22493581086;
    tmp_msg_0.w = 0.33147568114;
    tmp_msg_0.vx = 0.419984187623;
    tmp_msg_0.vy = 0.314470516384;
    tmp_msg_0.vz = 0.728013862392;
    tmp_msg_0.p = 0.404409418461;
    tmp_msg_0.q = 0.739862081228;
    tmp_msg_0.r = 0.194037703195;
    tmp_msg_0.depth = 0.0787167712697;
    tmp_msg_0.alt = 0.95727567437;
    msg.state.set(tmp_msg_0);
    msg.type = 110U;

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
    msg.setTimeStamp(0.752656625238);
    msg.setSource(8474U);
    msg.setSourceEntity(63U);
    msg.setDestination(51052U);
    msg.setDestinationEntity(105U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.985845604298;
    tmp_msg_0.lon = 0.476517728087;
    tmp_msg_0.height = 0.638565423988;
    tmp_msg_0.x = 0.817575953472;
    tmp_msg_0.y = 0.373645331614;
    tmp_msg_0.z = 0.673061198431;
    tmp_msg_0.phi = 0.259570247894;
    tmp_msg_0.theta = 0.35642895222;
    tmp_msg_0.psi = 0.570026225694;
    tmp_msg_0.u = 0.234085835521;
    tmp_msg_0.v = 0.0517902697473;
    tmp_msg_0.w = 0.690548734712;
    tmp_msg_0.vx = 0.626395406428;
    tmp_msg_0.vy = 0.841680893922;
    tmp_msg_0.vz = 0.192863607872;
    tmp_msg_0.p = 0.463028899377;
    tmp_msg_0.q = 0.2292501531;
    tmp_msg_0.r = 0.0569668522415;
    tmp_msg_0.depth = 0.351660727643;
    tmp_msg_0.alt = 0.736693840081;
    msg.state.set(tmp_msg_0);
    msg.type = 2U;

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
    msg.setTimeStamp(0.232854801993);
    msg.setSource(52153U);
    msg.setSourceEntity(137U);
    msg.setDestination(5850U);
    msg.setDestinationEntity(16U);
    msg.value = 0.0150707592408;

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
    msg.setTimeStamp(0.0468940504656);
    msg.setSource(13002U);
    msg.setSourceEntity(215U);
    msg.setDestination(49579U);
    msg.setDestinationEntity(48U);
    msg.value = 0.68255849312;

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
    msg.setTimeStamp(0.195847096638);
    msg.setSource(62429U);
    msg.setSourceEntity(14U);
    msg.setDestination(33720U);
    msg.setDestinationEntity(148U);
    msg.value = 0.00931808127912;

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
    msg.setTimeStamp(0.165949312252);
    msg.setSource(4333U);
    msg.setSourceEntity(62U);
    msg.setDestination(13951U);
    msg.setDestinationEntity(117U);
    msg.value = 0.822492861627;

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
    msg.setTimeStamp(0.194540380903);
    msg.setSource(12980U);
    msg.setSourceEntity(72U);
    msg.setDestination(53971U);
    msg.setDestinationEntity(101U);
    msg.value = 0.725798509379;

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
    msg.setTimeStamp(0.369114216471);
    msg.setSource(11667U);
    msg.setSourceEntity(58U);
    msg.setDestination(47274U);
    msg.setDestinationEntity(237U);
    msg.value = 0.00919037112804;

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
    msg.setTimeStamp(0.663796765005);
    msg.setSource(16393U);
    msg.setSourceEntity(19U);
    msg.setDestination(65171U);
    msg.setDestinationEntity(43U);
    msg.value = 0.661585778505;

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
    msg.setTimeStamp(0.837423619521);
    msg.setSource(65114U);
    msg.setSourceEntity(129U);
    msg.setDestination(53927U);
    msg.setDestinationEntity(88U);
    msg.value = 0.896840389643;

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
    msg.setTimeStamp(0.704530698576);
    msg.setSource(21606U);
    msg.setSourceEntity(4U);
    msg.setDestination(31786U);
    msg.setDestinationEntity(213U);
    msg.value = 0.726689759457;

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
    msg.setTimeStamp(0.393324508831);
    msg.setSource(56188U);
    msg.setSourceEntity(52U);
    msg.setDestination(21898U);
    msg.setDestinationEntity(206U);
    msg.value = 0.924189948965;

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
    msg.setTimeStamp(0.0217122231873);
    msg.setSource(38335U);
    msg.setSourceEntity(174U);
    msg.setDestination(54886U);
    msg.setDestinationEntity(109U);
    msg.value = 0.43031852288;

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
    msg.setTimeStamp(0.677479631788);
    msg.setSource(8994U);
    msg.setSourceEntity(43U);
    msg.setDestination(27070U);
    msg.setDestinationEntity(14U);
    msg.value = 0.824104572424;

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
    msg.setTimeStamp(0.780045239449);
    msg.setSource(15523U);
    msg.setSourceEntity(186U);
    msg.setDestination(49132U);
    msg.setDestinationEntity(48U);
    msg.value = 0.142236155641;

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
    msg.setTimeStamp(0.524671522712);
    msg.setSource(53927U);
    msg.setSourceEntity(70U);
    msg.setDestination(60214U);
    msg.setDestinationEntity(188U);
    msg.value = 0.544668868724;

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
    msg.setTimeStamp(0.33507741729);
    msg.setSource(43113U);
    msg.setSourceEntity(156U);
    msg.setDestination(21375U);
    msg.setDestinationEntity(31U);
    msg.value = 0.889994608312;

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
    msg.setTimeStamp(0.711014306733);
    msg.setSource(30611U);
    msg.setSourceEntity(246U);
    msg.setDestination(8522U);
    msg.setDestinationEntity(21U);
    msg.id = 60U;
    msg.zoom = 145U;
    msg.action = 38U;

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
    msg.setTimeStamp(0.717687693231);
    msg.setSource(46828U);
    msg.setSourceEntity(210U);
    msg.setDestination(21937U);
    msg.setDestinationEntity(79U);
    msg.id = 125U;
    msg.zoom = 187U;
    msg.action = 194U;

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
    msg.setTimeStamp(0.917762258535);
    msg.setSource(36477U);
    msg.setSourceEntity(238U);
    msg.setDestination(38471U);
    msg.setDestinationEntity(43U);
    msg.id = 250U;
    msg.zoom = 98U;
    msg.action = 250U;

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
    msg.setTimeStamp(0.727204219994);
    msg.setSource(25147U);
    msg.setSourceEntity(199U);
    msg.setDestination(760U);
    msg.setDestinationEntity(82U);
    msg.id = 115U;
    msg.value = 0.0247291053132;

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
    msg.setTimeStamp(0.462849307629);
    msg.setSource(31643U);
    msg.setSourceEntity(192U);
    msg.setDestination(45791U);
    msg.setDestinationEntity(82U);
    msg.id = 47U;
    msg.value = 0.208326311538;

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
    msg.setTimeStamp(0.874463064415);
    msg.setSource(8150U);
    msg.setSourceEntity(199U);
    msg.setDestination(59015U);
    msg.setDestinationEntity(201U);
    msg.id = 240U;
    msg.value = 0.000554404655053;

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
    msg.setTimeStamp(0.400318602488);
    msg.setSource(20101U);
    msg.setSourceEntity(218U);
    msg.setDestination(25638U);
    msg.setDestinationEntity(40U);
    msg.id = 17U;
    msg.value = 0.70240773049;

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
    msg.setTimeStamp(0.43719274713);
    msg.setSource(36792U);
    msg.setSourceEntity(118U);
    msg.setDestination(18750U);
    msg.setDestinationEntity(159U);
    msg.id = 70U;
    msg.value = 0.520336764346;

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
    msg.setTimeStamp(0.552614595153);
    msg.setSource(28661U);
    msg.setSourceEntity(245U);
    msg.setDestination(37196U);
    msg.setDestinationEntity(241U);
    msg.id = 140U;
    msg.value = 0.203196482586;

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
    msg.setTimeStamp(0.57374504272);
    msg.setSource(23802U);
    msg.setSourceEntity(199U);
    msg.setDestination(45509U);
    msg.setDestinationEntity(46U);
    msg.id = 136U;
    msg.angle = 0.0652317912176;

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
    msg.setTimeStamp(0.353988698799);
    msg.setSource(52488U);
    msg.setSourceEntity(204U);
    msg.setDestination(19417U);
    msg.setDestinationEntity(212U);
    msg.id = 217U;
    msg.angle = 0.479783920351;

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
    msg.setTimeStamp(0.434777070509);
    msg.setSource(27037U);
    msg.setSourceEntity(158U);
    msg.setDestination(43328U);
    msg.setDestinationEntity(53U);
    msg.id = 168U;
    msg.angle = 0.293906907773;

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
    msg.setTimeStamp(0.356733549844);
    msg.setSource(24416U);
    msg.setSourceEntity(80U);
    msg.setDestination(18816U);
    msg.setDestinationEntity(220U);
    msg.op = 18U;
    msg.actions.assign("FEEPXMSZTUFTILSJFKRWSREHDGYMXCPONJNALGYBMELUFITCZWRHNMAIDRKULKKMARBHTCEQHWGQTTUUBSCUENQDVKDJIOUZSPBTYLXTCFMJTEWCGQVRLNBPIJVX");

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
    msg.setTimeStamp(0.400557751516);
    msg.setSource(12550U);
    msg.setSourceEntity(209U);
    msg.setDestination(63405U);
    msg.setDestinationEntity(229U);
    msg.op = 56U;
    msg.actions.assign("PEIJDGKDXMZYPHYMPZDJLHQBDALCAYYOXQCVPZUBIACQMNLJSXZCVWWRMJMJUSBKWBFNNGTKJEPGEEVAKVVCULFGQEKLANZYQYNSGWEFQRDTBRZSGTTRVQHUHSXGEWBHAUYXAWDUXUVPYKJSJ");

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
    msg.setTimeStamp(0.551070529026);
    msg.setSource(37355U);
    msg.setSourceEntity(215U);
    msg.setDestination(705U);
    msg.setDestinationEntity(83U);
    msg.op = 107U;
    msg.actions.assign("JQMIKOZHKGTGLWUVDOQJOEJUWNVJBIBSBDUPLCIMANYFQQVMEGELSCWKJFSXHFWSLYYZVENMPOZGUEAQROTXOBXSXUCQITLFAHKLVPUYAHBURUMFJXNWCKALCKQCRAYERFWIPRGMVSXBGHONETAFIKHVNSGZMKPHRCTHBSXHRMYHLDPSDECFNMMZWDRZJOOITPJWJXTQYDIDQPLUNRVYDZGANDZBAULXSWWPJRTBACTVIT");

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
    msg.setTimeStamp(0.436229755111);
    msg.setSource(20240U);
    msg.setSourceEntity(4U);
    msg.setDestination(7742U);
    msg.setDestinationEntity(226U);
    msg.actions.assign("XDDQGVBSOFMYLZLWIRSOPYWYUODYPTACQYIMLOVWBTDFG");

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
    msg.setTimeStamp(0.223242616993);
    msg.setSource(11268U);
    msg.setSourceEntity(211U);
    msg.setDestination(46344U);
    msg.setDestinationEntity(183U);
    msg.actions.assign("CTTYOXGEJORCVAMSONFGIPWQRAUENBQNXRIXNFXEVXUIKVKCKPIZNLQGNBCEZYYJFFEJUNRORLDUVQFMFAHIGMKHSKWJUHLFBBZAEGHGCMSDKLOKLYWMGRJBDCBXTZYRWBOZQGNDDWPSQOPSYWTNPIEPUSYSEDWFJFTTGHZTVHYDOX");

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
    msg.setTimeStamp(0.185763304093);
    msg.setSource(8332U);
    msg.setSourceEntity(23U);
    msg.setDestination(3253U);
    msg.setDestinationEntity(9U);
    msg.actions.assign("AMHOVYKRRWZCCCRDBNHASRNTSKFCQTTIWQEVSPLMFZPJPLBKHMFVCUFVCGKDQVKDIMMGYNBLBMLCVPMBSYUVGXUZUWPLUHYZERWHVEWQIJXYXBKPZFJRAMIYRDKNAPLGMSXZGEXIQAXAVFRJBWQONZQHNIDJKACIO");

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
    msg.setTimeStamp(0.702656417142);
    msg.setSource(64529U);
    msg.setSourceEntity(135U);
    msg.setDestination(26159U);
    msg.setDestinationEntity(226U);
    msg.button = 32U;
    msg.value = 2U;

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
    msg.setTimeStamp(0.81217388443);
    msg.setSource(36647U);
    msg.setSourceEntity(115U);
    msg.setDestination(65449U);
    msg.setDestinationEntity(179U);
    msg.button = 106U;
    msg.value = 49U;

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
    msg.setTimeStamp(0.138558771201);
    msg.setSource(50624U);
    msg.setSourceEntity(73U);
    msg.setDestination(18073U);
    msg.setDestinationEntity(114U);
    msg.button = 17U;
    msg.value = 23U;

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
    msg.setTimeStamp(0.861667939032);
    msg.setSource(34732U);
    msg.setSourceEntity(122U);
    msg.setDestination(6620U);
    msg.setDestinationEntity(250U);
    msg.op = 159U;
    msg.text.assign("RXLZQCPKNLWNHEVGZPCLJMDQKJYIMXAWXOFJHZODQGVEGWTBPVUMRFECDTMXWQSLDCJRYDSOOATZLKHXBTOUXNGUTPZRGYUHVBOKWUMRVOUDUSJCBIQMTEPBPZZGJIKAWDKFPKALQHZBEUCGDXRFMLSRDORHYNJNBSMYHVBGLISCPXOFXNAAJDWIUCINFREWTQBGCMSJZSFOWBHNEJQAYUVNVHFNKRSQALYZHVLIFIPCTTIK");

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
    msg.setTimeStamp(0.474376444816);
    msg.setSource(6347U);
    msg.setSourceEntity(250U);
    msg.setDestination(2769U);
    msg.setDestinationEntity(246U);
    msg.op = 103U;
    msg.text.assign("KQRYDILZELEIATAZFEBYQEOHLBGPNSILVSWXIAVKXRBUDOMFNDEHKFLSCAHMGEKCLCRSWLOEZGLAIBXTLPDEJHSMTTTFXNXRVGXCHOMNDPHHAKQNQHBZWGUZVDAUWXSUYPYWUORBJEYOQZOUCCWWMAJSWRJZISQPZPUNXHISOKITPNVYEAYFJVMDRFOCYTGRQDBGDDJWCUNVORGJPKMJ");

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
    msg.setTimeStamp(0.251562780978);
    msg.setSource(60794U);
    msg.setSourceEntity(30U);
    msg.setDestination(62262U);
    msg.setDestinationEntity(29U);
    msg.op = 135U;
    msg.text.assign("JFVAWWUHCJIZBKQDVQXUJERIXHCRYNJUCCGYOUFYVUMNQNGOGSQBOSAFBTZYEAZIJHCAAKONTTKBHCIFNJNILPTYLEXGAVLVYLCKUKGDXLGYWWNAPGAHDDSJHTOIIUKSLKCPRMSXCMLPDFSKDMRQZQYQPRWSYBKSVVQVWBXDPZUXPBBGEFZEOOMNTADWZUKILHQWRUEGDFIZJEMMMHVTORXPETELZMFVYRZOOFLPPHRCSTRJ");

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
    msg.setTimeStamp(0.476199622611);
    msg.setSource(1539U);
    msg.setSourceEntity(189U);
    msg.setDestination(57994U);
    msg.setDestinationEntity(153U);
    msg.op = 152U;
    msg.time_remain = 0.2639006776;
    msg.sched_time = 0.544029107965;

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
    msg.setTimeStamp(0.0705772434171);
    msg.setSource(61316U);
    msg.setSourceEntity(231U);
    msg.setDestination(49285U);
    msg.setDestinationEntity(58U);
    msg.op = 202U;
    msg.time_remain = 0.767586600822;
    msg.sched_time = 0.54549901683;

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
    msg.setTimeStamp(0.934624965749);
    msg.setSource(64406U);
    msg.setSourceEntity(250U);
    msg.setDestination(41782U);
    msg.setDestinationEntity(186U);
    msg.op = 191U;
    msg.time_remain = 0.508887502648;
    msg.sched_time = 0.692212511995;

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
    msg.setTimeStamp(0.51311918986);
    msg.setSource(44401U);
    msg.setSourceEntity(67U);
    msg.setDestination(60546U);
    msg.setDestinationEntity(18U);
    msg.name.assign("WQNAJUUKVTZUNFTUQLLRTKFVFJFGHZWABUZ");
    msg.op = 188U;
    msg.sched_time = 0.898921002648;

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
    msg.setTimeStamp(0.897467054973);
    msg.setSource(12423U);
    msg.setSourceEntity(103U);
    msg.setDestination(48026U);
    msg.setDestinationEntity(158U);
    msg.name.assign("NRLROGLVQNAXXXTREMVOQSOVSGWFDGPTXBBPIDYOZ");
    msg.op = 215U;
    msg.sched_time = 0.357317022861;

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
    msg.setTimeStamp(0.0441207742884);
    msg.setSource(59446U);
    msg.setSourceEntity(13U);
    msg.setDestination(28461U);
    msg.setDestinationEntity(50U);
    msg.name.assign("EXEOZOXBBROSSXXMMUNQGIXIPFLPRNMUUOVPZQGFLSWOSVAVLDFCRPNCHGKYPYEWZAACUBVBOHNLTVSQMFGBEEZSDQRMTRBUCVLSNNLXOXGWFHYJJYTKORITIIHDAUVKMDCQKQGRGVJJRIOWQALXTHMJIZAYHJVDWEKERSPHKLWTWGZHAQLEYCKZ");
    msg.op = 175U;
    msg.sched_time = 0.63185912748;

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
    msg.setTimeStamp(0.871033056232);
    msg.setSource(3924U);
    msg.setSourceEntity(103U);
    msg.setDestination(41299U);
    msg.setDestinationEntity(84U);

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
    msg.setTimeStamp(0.4657172389);
    msg.setSource(24784U);
    msg.setSourceEntity(119U);
    msg.setDestination(38749U);
    msg.setDestinationEntity(27U);

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
    msg.setTimeStamp(0.104919695406);
    msg.setSource(20576U);
    msg.setSourceEntity(119U);
    msg.setDestination(9374U);
    msg.setDestinationEntity(197U);

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
    msg.setTimeStamp(0.177451574881);
    msg.setSource(38174U);
    msg.setSourceEntity(38U);
    msg.setDestination(34384U);
    msg.setDestinationEntity(168U);
    msg.name.assign("XZYJLTBTUOMJMJXRYPAQJTKDKENGNUACPQXBSHPGFZOICVHYWPSHKNIUBNRTWWXFBCNRSEDCLBQEVTIKWREAXZSXGCUKOMHBFEUEERMVVNLMSPHGWSHWDLMYFGKALKRFSDV");
    msg.state = 222U;

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
    msg.setTimeStamp(0.767406399188);
    msg.setSource(64042U);
    msg.setSourceEntity(116U);
    msg.setDestination(45679U);
    msg.setDestinationEntity(146U);
    msg.name.assign("BYKDGUCLQYPYBCYWRV");
    msg.state = 211U;

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
    msg.setTimeStamp(0.859187220859);
    msg.setSource(1728U);
    msg.setSourceEntity(25U);
    msg.setDestination(25661U);
    msg.setDestinationEntity(84U);
    msg.name.assign("GVDURHCITQQYXBYCBUVUWMLQNDIFSTS");
    msg.state = 185U;

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
    msg.setTimeStamp(0.92488737735);
    msg.setSource(1428U);
    msg.setSourceEntity(232U);
    msg.setDestination(36819U);
    msg.setDestinationEntity(27U);
    msg.name.assign("UHPHAUGRGMAKBZGPWHOKICZZYCKONPDWVDOXQTFIPYQUKWQWSPGQRCLJAVXNTDZUCNREMOWJQJVB");
    msg.value = 43U;

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
    msg.setTimeStamp(0.507810309423);
    msg.setSource(23561U);
    msg.setSourceEntity(59U);
    msg.setDestination(42985U);
    msg.setDestinationEntity(198U);
    msg.name.assign("VBWVGKKZOXAWSSIYLWRDFGDNIXPVLFUYYUHWOQJBCGYQQOQXBHLLRGZLAFRJZJWGIKSKNVVWUEVWJMCUBICARSFPNUYFOQFGLLLTDNUHUNAVRCJIEAXOODZEIMPMRJXJXOIXVKYCNDFPTXMLTCNTEGZEJUDSOXFMQEZBHKMRHYAKEZCHSROCUNIATRUQGAAPDSYYGTQTISIGZETBBMO");
    msg.value = 237U;

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
    msg.setTimeStamp(0.181042538801);
    msg.setSource(12464U);
    msg.setSourceEntity(123U);
    msg.setDestination(61569U);
    msg.setDestinationEntity(161U);
    msg.name.assign("BWFFVRULNKGNMQIYETCOQPBMVZPTICOENKJGMLXASIYTNVYEYWCEEZAJBBRQGIULKVXQBIMZAYXMNJZXJLHFGRQIRKTDYWEDFJXHRNOPOSZRISXPPXCBAJRLMAZEIWKBAWDNTHDDVHDYGFCYGCBOZTRLMPSVJFWLLXKPOLQGCHCTSVUCKJSRHEUHZFI");
    msg.value = 186U;

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
    msg.setTimeStamp(0.379430525743);
    msg.setSource(33457U);
    msg.setSourceEntity(169U);
    msg.setDestination(5523U);
    msg.setDestinationEntity(141U);
    msg.name.assign("JEUFKQAKLWIPNXUGHEMARVEBVRFZOGQGWNDYXJAIEFMXTHKTFLKHUHPZMDYZTUPWMXQWXZISZHOWXNFFIRFMSPMTSJIKWCOYYDYLUCVUFQOWPHOYJUNDZDXBVXZVCHOUHQSYJMCCKMROQOMACDBQBBBNUCAPIGAJXAJFWLDRBXESQERSEESTDESGTNTLRDFANKJTZOLQOGAZGSWJTATIBUPLVZLLLKYYPIRVBHNIGWG");

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
    msg.setTimeStamp(0.728225235321);
    msg.setSource(58926U);
    msg.setSourceEntity(250U);
    msg.setDestination(34807U);
    msg.setDestinationEntity(184U);
    msg.name.assign("EWUWGUXRJEKJZPRFZPZITXPDN");

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
    msg.setTimeStamp(0.0818600633857);
    msg.setSource(62665U);
    msg.setSourceEntity(17U);
    msg.setDestination(45001U);
    msg.setDestinationEntity(218U);
    msg.name.assign("MGCLZHCWIQBFWBTLSENICWFYDHCJNIHCOZHCTYXQJEERDPUPMKGQGESNPXCWCRLHYRRNPDIZTBFHMBUTWSAIDBTEWWKYKCOAXNWGMFVUYZBPATBATFSRGLPDIMVAYZPOCDVERKKJAXJEIFWLPJOYXIDZHVEBORTQDZKTNMJ");

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
    msg.setTimeStamp(0.897203575914);
    msg.setSource(49374U);
    msg.setSourceEntity(6U);
    msg.setDestination(50133U);
    msg.setDestinationEntity(8U);
    msg.name.assign("RBVLBPGNMRDHIQPUMEAARYTJDALUFTTDGHKDJXLNHSLPAWGSFILZUYAECSBUXVOFWBSGPWXNZVPMKRMD");
    msg.value = 218U;

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
    msg.setTimeStamp(0.932898160713);
    msg.setSource(55835U);
    msg.setSourceEntity(93U);
    msg.setDestination(45024U);
    msg.setDestinationEntity(53U);
    msg.name.assign("VBBIKUPFYCRIRSMNYJACNLBXQVBZJMTEMIRSBRLXGJQKDFCIZUNLVHSEWRRNKJPFVGSUFHNCSGCXJBTAYOZAEULMUFJPWPQUHDYNXPBYLOYLIEZZEDVTDXGTXYBIWTDEOAOQFEWAVALXKJUIJNNRORKEZFLBKJSYDOCQCGSCFHEGIWNQKDYZKJCTVMMPHFKRMMWGLPHYTHLOPDQKHAWGCGGIAEZTWMTARISBPNVDPWUQVXVSUMXD");
    msg.value = 59U;

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
    msg.setTimeStamp(0.393905859207);
    msg.setSource(32486U);
    msg.setSourceEntity(32U);
    msg.setDestination(61092U);
    msg.setDestinationEntity(240U);
    msg.name.assign("KNELWACSOEHJGNLXJM");
    msg.value = 208U;

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
    msg.setTimeStamp(0.61230003613);
    msg.setSource(37395U);
    msg.setSourceEntity(113U);
    msg.setDestination(20305U);
    msg.setDestinationEntity(207U);
    msg.id = 243U;
    msg.period = 96705201U;
    msg.duty_cycle = 2197776997U;

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
    msg.setTimeStamp(0.221964908298);
    msg.setSource(26122U);
    msg.setSourceEntity(143U);
    msg.setDestination(58772U);
    msg.setDestinationEntity(240U);
    msg.id = 21U;
    msg.period = 565962479U;
    msg.duty_cycle = 2044265265U;

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
    msg.setTimeStamp(0.601710828072);
    msg.setSource(59147U);
    msg.setSourceEntity(29U);
    msg.setDestination(53139U);
    msg.setDestinationEntity(127U);
    msg.id = 107U;
    msg.period = 3505544346U;
    msg.duty_cycle = 931957400U;

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
    msg.setTimeStamp(0.943473915077);
    msg.setSource(63740U);
    msg.setSourceEntity(71U);
    msg.setDestination(54868U);
    msg.setDestinationEntity(211U);
    msg.id = 214U;
    msg.period = 1636005226U;
    msg.duty_cycle = 1417273074U;

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
    msg.setTimeStamp(0.122917272179);
    msg.setSource(48458U);
    msg.setSourceEntity(228U);
    msg.setDestination(28807U);
    msg.setDestinationEntity(150U);
    msg.id = 106U;
    msg.period = 2967665402U;
    msg.duty_cycle = 2937976835U;

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
    msg.setTimeStamp(0.91507883923);
    msg.setSource(7981U);
    msg.setSourceEntity(143U);
    msg.setDestination(31398U);
    msg.setDestinationEntity(61U);
    msg.id = 28U;
    msg.period = 556454019U;
    msg.duty_cycle = 3721812595U;

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
    msg.setTimeStamp(0.204434552478);
    msg.setSource(57107U);
    msg.setSourceEntity(227U);
    msg.setDestination(27473U);
    msg.setDestinationEntity(144U);
    msg.lat = 0.130999110564;
    msg.lon = 0.365270100814;
    msg.height = 0.622214021575;
    msg.x = 0.0158332392637;
    msg.y = 0.538843638654;
    msg.z = 0.964978744369;
    msg.phi = 0.965190400036;
    msg.theta = 0.38783858689;
    msg.psi = 0.0761593543083;
    msg.u = 0.69153415313;
    msg.v = 0.981024681131;
    msg.w = 0.569021470916;
    msg.vx = 0.192120064799;
    msg.vy = 0.574032629612;
    msg.vz = 0.34298628564;
    msg.p = 0.0264758560527;
    msg.q = 0.0322322277135;
    msg.r = 0.226481406308;
    msg.depth = 0.334338397323;
    msg.alt = 0.481252125303;

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
    msg.setTimeStamp(0.593311351132);
    msg.setSource(1724U);
    msg.setSourceEntity(202U);
    msg.setDestination(31910U);
    msg.setDestinationEntity(186U);
    msg.lat = 0.235011821864;
    msg.lon = 0.571946764981;
    msg.height = 0.0548435542162;
    msg.x = 0.115645447125;
    msg.y = 0.0904268068419;
    msg.z = 0.0494464326258;
    msg.phi = 0.0388888108122;
    msg.theta = 0.505261617782;
    msg.psi = 0.265593236206;
    msg.u = 0.857133215637;
    msg.v = 0.425581272856;
    msg.w = 0.630976685441;
    msg.vx = 0.294300580101;
    msg.vy = 0.641399251896;
    msg.vz = 0.227267445889;
    msg.p = 0.575171310913;
    msg.q = 0.260742495876;
    msg.r = 0.509486098887;
    msg.depth = 0.152252097031;
    msg.alt = 0.758348729606;

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
    msg.setTimeStamp(0.142752531126);
    msg.setSource(45747U);
    msg.setSourceEntity(218U);
    msg.setDestination(25617U);
    msg.setDestinationEntity(249U);
    msg.lat = 0.116187528735;
    msg.lon = 0.98689581089;
    msg.height = 0.454371661152;
    msg.x = 0.32963040883;
    msg.y = 0.0856698394205;
    msg.z = 0.981663397246;
    msg.phi = 0.48112976043;
    msg.theta = 0.318343540056;
    msg.psi = 0.0495044246796;
    msg.u = 0.22244007919;
    msg.v = 0.771154659517;
    msg.w = 0.485775251338;
    msg.vx = 0.0123837673311;
    msg.vy = 0.06420405565;
    msg.vz = 0.464671123485;
    msg.p = 0.0224665178668;
    msg.q = 0.477440198366;
    msg.r = 0.442798003174;
    msg.depth = 0.27809525004;
    msg.alt = 0.534557525061;

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
    msg.setTimeStamp(0.833601269698);
    msg.setSource(59729U);
    msg.setSourceEntity(26U);
    msg.setDestination(1190U);
    msg.setDestinationEntity(167U);
    msg.x = 0.410945057417;
    msg.y = 0.28303107795;
    msg.z = 0.715361167202;

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
    msg.setTimeStamp(0.29503559199);
    msg.setSource(46087U);
    msg.setSourceEntity(81U);
    msg.setDestination(45370U);
    msg.setDestinationEntity(23U);
    msg.x = 0.630655427131;
    msg.y = 0.714360877101;
    msg.z = 0.789273470623;

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
    msg.setTimeStamp(0.575840049187);
    msg.setSource(4813U);
    msg.setSourceEntity(230U);
    msg.setDestination(30159U);
    msg.setDestinationEntity(84U);
    msg.x = 0.316826444128;
    msg.y = 0.0349094156026;
    msg.z = 0.155485806479;

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
    msg.setTimeStamp(0.832387696188);
    msg.setSource(65183U);
    msg.setSourceEntity(64U);
    msg.setDestination(63557U);
    msg.setDestinationEntity(203U);
    msg.value = 0.945498332599;

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
    msg.setTimeStamp(0.538041996373);
    msg.setSource(11919U);
    msg.setSourceEntity(153U);
    msg.setDestination(25439U);
    msg.setDestinationEntity(204U);
    msg.value = 0.0448366723191;

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
    msg.setTimeStamp(0.406340985984);
    msg.setSource(30665U);
    msg.setSourceEntity(164U);
    msg.setDestination(48237U);
    msg.setDestinationEntity(58U);
    msg.value = 0.0647821599785;

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
    msg.setTimeStamp(0.385778723673);
    msg.setSource(22815U);
    msg.setSourceEntity(120U);
    msg.setDestination(25215U);
    msg.setDestinationEntity(22U);
    msg.value = 0.809241678678;

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
    msg.setTimeStamp(0.186972382848);
    msg.setSource(16038U);
    msg.setSourceEntity(233U);
    msg.setDestination(60357U);
    msg.setDestinationEntity(146U);
    msg.value = 0.736744610683;

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
    msg.setTimeStamp(0.358223145093);
    msg.setSource(51494U);
    msg.setSourceEntity(202U);
    msg.setDestination(39866U);
    msg.setDestinationEntity(71U);
    msg.value = 0.576487337064;

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
    msg.setTimeStamp(0.190776013686);
    msg.setSource(4557U);
    msg.setSourceEntity(204U);
    msg.setDestination(10988U);
    msg.setDestinationEntity(42U);
    msg.x = 0.547849988576;
    msg.y = 0.740608467944;
    msg.z = 0.978508333065;
    msg.phi = 0.322861410146;
    msg.theta = 0.371904342711;
    msg.psi = 0.173549631778;
    msg.p = 0.593181598376;
    msg.q = 0.0791631044183;
    msg.r = 0.254712713698;
    msg.u = 0.49782757314;
    msg.v = 0.398756968417;
    msg.w = 0.569237657925;
    msg.bias_psi = 0.52597230162;
    msg.bias_r = 0.125681413721;

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
    msg.setTimeStamp(0.417645544259);
    msg.setSource(97U);
    msg.setSourceEntity(74U);
    msg.setDestination(47212U);
    msg.setDestinationEntity(16U);
    msg.x = 0.484562866473;
    msg.y = 0.835418475929;
    msg.z = 0.658790037018;
    msg.phi = 0.485883207519;
    msg.theta = 0.35453092729;
    msg.psi = 0.408531351898;
    msg.p = 0.81461783752;
    msg.q = 0.609222340419;
    msg.r = 0.799400233339;
    msg.u = 0.109142562415;
    msg.v = 0.397260330218;
    msg.w = 0.139546348381;
    msg.bias_psi = 0.176735444298;
    msg.bias_r = 0.529447720331;

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
    msg.setTimeStamp(0.99772814929);
    msg.setSource(61516U);
    msg.setSourceEntity(156U);
    msg.setDestination(62359U);
    msg.setDestinationEntity(20U);
    msg.x = 0.0935089690983;
    msg.y = 0.405572647598;
    msg.z = 0.321241959301;
    msg.phi = 0.690066533056;
    msg.theta = 0.437879729092;
    msg.psi = 0.575116921898;
    msg.p = 0.213418319451;
    msg.q = 0.917794943166;
    msg.r = 0.875084190001;
    msg.u = 0.956213075526;
    msg.v = 0.783226280855;
    msg.w = 0.549068720627;
    msg.bias_psi = 0.273407115818;
    msg.bias_r = 0.370324732422;

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
    msg.setTimeStamp(0.932159365246);
    msg.setSource(52443U);
    msg.setSourceEntity(182U);
    msg.setDestination(49621U);
    msg.setDestinationEntity(175U);
    msg.bias_psi = 0.601638460744;
    msg.bias_r = 0.796481083348;
    msg.cog = 0.673035790917;
    msg.cyaw = 0.349058168848;
    msg.gps_rej_level = 0.0109012103819;
    msg.lbl_rej_level = 0.282227209588;
    msg.custom_x = 0.119120522563;
    msg.custom_y = 0.844258591663;
    msg.custom_z = 0.522925086482;

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
    msg.setTimeStamp(0.201344394889);
    msg.setSource(45886U);
    msg.setSourceEntity(130U);
    msg.setDestination(16060U);
    msg.setDestinationEntity(68U);
    msg.bias_psi = 0.579570904397;
    msg.bias_r = 0.00744775831507;
    msg.cog = 0.0483917504739;
    msg.cyaw = 0.432056454584;
    msg.gps_rej_level = 0.303657352372;
    msg.lbl_rej_level = 0.159896246576;
    msg.custom_x = 0.957258570491;
    msg.custom_y = 0.808808019406;
    msg.custom_z = 0.797260935402;

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
    msg.setTimeStamp(0.731607987803);
    msg.setSource(39428U);
    msg.setSourceEntity(51U);
    msg.setDestination(15885U);
    msg.setDestinationEntity(68U);
    msg.bias_psi = 0.272681656412;
    msg.bias_r = 0.451009262874;
    msg.cog = 0.797031946516;
    msg.cyaw = 0.184335515549;
    msg.gps_rej_level = 0.633155957538;
    msg.lbl_rej_level = 0.876508500628;
    msg.custom_x = 0.676229793121;
    msg.custom_y = 0.147645420185;
    msg.custom_z = 0.576925870766;

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
    msg.setTimeStamp(0.317357210476);
    msg.setSource(39331U);
    msg.setSourceEntity(170U);
    msg.setDestination(62180U);
    msg.setDestinationEntity(227U);
    msg.utc_time = 0.372939186414;
    msg.reason = 42U;

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
    msg.setTimeStamp(0.111289939071);
    msg.setSource(909U);
    msg.setSourceEntity(159U);
    msg.setDestination(21966U);
    msg.setDestinationEntity(224U);
    msg.utc_time = 0.247781839353;
    msg.reason = 46U;

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
    msg.setTimeStamp(0.879595227417);
    msg.setSource(59455U);
    msg.setSourceEntity(152U);
    msg.setDestination(24782U);
    msg.setDestinationEntity(147U);
    msg.utc_time = 0.246758057672;
    msg.reason = 18U;

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
    msg.setTimeStamp(0.0629625535089);
    msg.setSource(10311U);
    msg.setSourceEntity(237U);
    msg.setDestination(40500U);
    msg.setDestinationEntity(222U);
    msg.id = 53U;
    msg.range = 0.050937175326;
    msg.acceptance = 58U;

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
    msg.setTimeStamp(0.703954683938);
    msg.setSource(31230U);
    msg.setSourceEntity(71U);
    msg.setDestination(22937U);
    msg.setDestinationEntity(78U);
    msg.id = 48U;
    msg.range = 0.528987701163;
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
    msg.setTimeStamp(0.931954657962);
    msg.setSource(53230U);
    msg.setSourceEntity(209U);
    msg.setDestination(15569U);
    msg.setDestinationEntity(21U);
    msg.id = 45U;
    msg.range = 0.94038222384;
    msg.acceptance = 119U;

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
    msg.setTimeStamp(0.155780191236);
    msg.setSource(92U);
    msg.setSourceEntity(103U);
    msg.setDestination(11387U);
    msg.setDestinationEntity(210U);
    msg.type = 227U;
    msg.reason = 17U;
    msg.value = 0.556874377282;
    msg.timestep = 0.263021679765;

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
    msg.setTimeStamp(0.58987912101);
    msg.setSource(38269U);
    msg.setSourceEntity(39U);
    msg.setDestination(47837U);
    msg.setDestinationEntity(70U);
    msg.type = 47U;
    msg.reason = 108U;
    msg.value = 0.884347663417;
    msg.timestep = 0.642205036979;

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
    msg.setTimeStamp(0.409646056312);
    msg.setSource(21574U);
    msg.setSourceEntity(111U);
    msg.setDestination(18269U);
    msg.setDestinationEntity(154U);
    msg.type = 233U;
    msg.reason = 58U;
    msg.value = 0.300853090743;
    msg.timestep = 0.18207552044;

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
    msg.setTimeStamp(0.635485989331);
    msg.setSource(31474U);
    msg.setSourceEntity(185U);
    msg.setDestination(59508U);
    msg.setDestinationEntity(127U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("JWJWEOJACLKSVNGOLGYYDFDFSIKOIHQBJRNTZAVXYDUAFSGG");
    tmp_msg_0.lat = 0.375841779292;
    tmp_msg_0.lon = 0.227557627636;
    tmp_msg_0.depth = 0.799292442164;
    tmp_msg_0.query_channel = 40U;
    tmp_msg_0.reply_channel = 46U;
    tmp_msg_0.transponder_delay = 85U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.248591437547;
    msg.y = 0.94273386595;
    msg.var_x = 0.893493459938;
    msg.var_y = 0.259927378278;
    msg.distance = 0.612981683162;

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
    msg.setTimeStamp(0.194616446839);
    msg.setSource(63810U);
    msg.setSourceEntity(22U);
    msg.setDestination(19554U);
    msg.setDestinationEntity(110U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("NIGYLGUXGTXTZTUJISYJUOJARWBWUWC");
    tmp_msg_0.lat = 0.851669704305;
    tmp_msg_0.lon = 0.698825519402;
    tmp_msg_0.depth = 0.933831266325;
    tmp_msg_0.query_channel = 59U;
    tmp_msg_0.reply_channel = 49U;
    tmp_msg_0.transponder_delay = 27U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.841694326279;
    msg.y = 0.518249807464;
    msg.var_x = 0.321137095265;
    msg.var_y = 0.598126275991;
    msg.distance = 0.986985882463;

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
    msg.setTimeStamp(0.638609654986);
    msg.setSource(63463U);
    msg.setSourceEntity(199U);
    msg.setDestination(23588U);
    msg.setDestinationEntity(106U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("HGEDOMWICYLZZSIYWDUVMANOAWGIVBOTWCJBQMKXIEACXUQNMNDSSKJLNDDQUFDFPFRZMYTUTZHWHUBMQTJSAWZJOKXUMEAKCVBRRPVLKKNIAXQEQPRYCSHDSTPAGQCXRZXQLZYWJJRCUNTVSDQPBJJLFSXARBYFR");
    tmp_msg_0.lat = 0.652876142593;
    tmp_msg_0.lon = 0.652250552536;
    tmp_msg_0.depth = 0.626598259936;
    tmp_msg_0.query_channel = 186U;
    tmp_msg_0.reply_channel = 187U;
    tmp_msg_0.transponder_delay = 77U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.0654157321549;
    msg.y = 0.801678067227;
    msg.var_x = 0.609342799033;
    msg.var_y = 0.99257903654;
    msg.distance = 0.929961452162;

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
    msg.setTimeStamp(0.794285976399);
    msg.setSource(58964U);
    msg.setSourceEntity(56U);
    msg.setDestination(41838U);
    msg.setDestinationEntity(242U);
    msg.state = 53U;

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
    msg.setTimeStamp(0.680192170331);
    msg.setSource(53816U);
    msg.setSourceEntity(89U);
    msg.setDestination(23412U);
    msg.setDestinationEntity(147U);
    msg.state = 189U;

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
    msg.setTimeStamp(0.801201360202);
    msg.setSource(12052U);
    msg.setSourceEntity(201U);
    msg.setDestination(47491U);
    msg.setDestinationEntity(136U);
    msg.state = 56U;

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
    msg.setTimeStamp(0.531866846239);
    msg.setSource(46476U);
    msg.setSourceEntity(151U);
    msg.setDestination(51065U);
    msg.setDestinationEntity(68U);
    msg.x = 0.742918281515;
    msg.y = 0.426138145625;
    msg.z = 0.602575858503;

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
    msg.setTimeStamp(0.493264150219);
    msg.setSource(21491U);
    msg.setSourceEntity(68U);
    msg.setDestination(58718U);
    msg.setDestinationEntity(173U);
    msg.x = 0.298809563096;
    msg.y = 0.375740645648;
    msg.z = 0.952462878649;

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
    msg.setTimeStamp(0.96212330857);
    msg.setSource(25231U);
    msg.setSourceEntity(53U);
    msg.setDestination(11130U);
    msg.setDestinationEntity(104U);
    msg.x = 0.644288817635;
    msg.y = 0.609173260192;
    msg.z = 0.992176581128;

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
    msg.setTimeStamp(0.576839731353);
    msg.setSource(48385U);
    msg.setSourceEntity(190U);
    msg.setDestination(34403U);
    msg.setDestinationEntity(72U);
    msg.va = 0.622356882644;
    msg.aoa = 0.918947485133;
    msg.ssa = 0.98481002359;

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
    msg.setTimeStamp(0.129293436631);
    msg.setSource(58531U);
    msg.setSourceEntity(126U);
    msg.setDestination(42924U);
    msg.setDestinationEntity(61U);
    msg.va = 0.396463105549;
    msg.aoa = 0.251546109239;
    msg.ssa = 0.490217752082;

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
    msg.setTimeStamp(0.286127242145);
    msg.setSource(18073U);
    msg.setSourceEntity(167U);
    msg.setDestination(53423U);
    msg.setDestinationEntity(213U);
    msg.va = 0.506186561063;
    msg.aoa = 0.394344604309;
    msg.ssa = 0.0627326679498;

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
    msg.setTimeStamp(0.471185917806);
    msg.setSource(3973U);
    msg.setSourceEntity(167U);
    msg.setDestination(55074U);
    msg.setDestinationEntity(200U);
    msg.mmsi = 4026605167U;
    msg.lon = 0.280524259763;
    msg.lat = 0.230334799837;
    msg.x = 0.350556505047;
    msg.y = 0.914869229357;
    msg.psi = 0.964388814212;
    msg.u = 0.42664562325;
    msg.v = 0.914626309634;
    msg.a = 0.6637280747;
    msg.b = 0.0315519723049;
    msg.c = 0.92523889049;
    msg.d = 0.62290972568;

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
    msg.setTimeStamp(0.278345802072);
    msg.setSource(49718U);
    msg.setSourceEntity(166U);
    msg.setDestination(13771U);
    msg.setDestinationEntity(221U);
    msg.mmsi = 1252146972U;
    msg.lon = 0.810141739182;
    msg.lat = 0.070303040846;
    msg.x = 0.222048815382;
    msg.y = 0.575433508293;
    msg.psi = 0.675951169811;
    msg.u = 0.244237463151;
    msg.v = 0.835981012844;
    msg.a = 0.459535882438;
    msg.b = 0.0839186805843;
    msg.c = 0.0470461272888;
    msg.d = 0.854063993672;

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
    msg.setTimeStamp(0.105747785813);
    msg.setSource(21584U);
    msg.setSourceEntity(89U);
    msg.setDestination(16463U);
    msg.setDestinationEntity(25U);
    msg.mmsi = 1860577335U;
    msg.lon = 0.863536268245;
    msg.lat = 0.088667211522;
    msg.x = 0.274151242511;
    msg.y = 0.418542755317;
    msg.psi = 0.423509748264;
    msg.u = 0.730655339575;
    msg.v = 0.614553135923;
    msg.a = 0.999006701836;
    msg.b = 0.812934421879;
    msg.c = 0.454804569568;
    msg.d = 0.177089887618;

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
    msg.setTimeStamp(0.528370408283);
    msg.setSource(27953U);
    msg.setSourceEntity(38U);
    msg.setDestination(19508U);
    msg.setDestinationEntity(229U);
    msg.value = 0.251727252503;

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
    msg.setTimeStamp(0.263851179095);
    msg.setSource(510U);
    msg.setSourceEntity(45U);
    msg.setDestination(64490U);
    msg.setDestinationEntity(173U);
    msg.value = 0.918602214732;

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
    msg.setTimeStamp(0.297798136156);
    msg.setSource(5360U);
    msg.setSourceEntity(9U);
    msg.setDestination(59510U);
    msg.setDestinationEntity(42U);
    msg.value = 0.0887064614939;

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
    msg.setTimeStamp(0.561346073987);
    msg.setSource(29887U);
    msg.setSourceEntity(150U);
    msg.setDestination(4327U);
    msg.setDestinationEntity(107U);
    msg.value = 0.613754647129;
    msg.z_units = 172U;

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
    msg.setTimeStamp(0.00762509318442);
    msg.setSource(40310U);
    msg.setSourceEntity(13U);
    msg.setDestination(14997U);
    msg.setDestinationEntity(20U);
    msg.value = 0.617647787981;
    msg.z_units = 161U;

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
    msg.setTimeStamp(0.245335189673);
    msg.setSource(51350U);
    msg.setSourceEntity(250U);
    msg.setDestination(29825U);
    msg.setDestinationEntity(12U);
    msg.value = 0.303921194939;
    msg.z_units = 16U;

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
    msg.setTimeStamp(0.0231420461531);
    msg.setSource(11009U);
    msg.setSourceEntity(175U);
    msg.setDestination(49166U);
    msg.setDestinationEntity(244U);
    msg.value = 0.209293204371;
    msg.speed_units = 96U;

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
    msg.setTimeStamp(0.00975868950121);
    msg.setSource(54670U);
    msg.setSourceEntity(143U);
    msg.setDestination(63474U);
    msg.setDestinationEntity(107U);
    msg.value = 0.117136029119;
    msg.speed_units = 45U;

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
    msg.setTimeStamp(0.625164637074);
    msg.setSource(11634U);
    msg.setSourceEntity(131U);
    msg.setDestination(22441U);
    msg.setDestinationEntity(19U);
    msg.value = 0.29141980533;
    msg.speed_units = 107U;

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
    msg.setTimeStamp(0.725310601597);
    msg.setSource(21559U);
    msg.setSourceEntity(176U);
    msg.setDestination(20970U);
    msg.setDestinationEntity(14U);
    msg.value = 0.917319499732;

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
    msg.setTimeStamp(0.652575566927);
    msg.setSource(61396U);
    msg.setSourceEntity(242U);
    msg.setDestination(52758U);
    msg.setDestinationEntity(77U);
    msg.value = 0.205103093621;

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
    msg.setTimeStamp(0.404523237674);
    msg.setSource(12366U);
    msg.setSourceEntity(50U);
    msg.setDestination(31121U);
    msg.setDestinationEntity(242U);
    msg.value = 0.0592792566389;

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
    msg.setTimeStamp(0.758098043335);
    msg.setSource(41976U);
    msg.setSourceEntity(232U);
    msg.setDestination(3737U);
    msg.setDestinationEntity(170U);
    msg.value = 0.887810349499;

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
    msg.setTimeStamp(0.726523100627);
    msg.setSource(29524U);
    msg.setSourceEntity(56U);
    msg.setDestination(6965U);
    msg.setDestinationEntity(78U);
    msg.value = 0.960182052449;

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
    msg.setTimeStamp(0.963856642659);
    msg.setSource(10856U);
    msg.setSourceEntity(217U);
    msg.setDestination(42925U);
    msg.setDestinationEntity(121U);
    msg.value = 0.374930036246;

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
    msg.setTimeStamp(0.184925183307);
    msg.setSource(21506U);
    msg.setSourceEntity(188U);
    msg.setDestination(23032U);
    msg.setDestinationEntity(204U);
    msg.value = 0.165350815982;

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
    msg.setTimeStamp(0.623943655348);
    msg.setSource(63857U);
    msg.setSourceEntity(128U);
    msg.setDestination(13697U);
    msg.setDestinationEntity(33U);
    msg.value = 0.422650497147;

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
    msg.setTimeStamp(0.160900173114);
    msg.setSource(22910U);
    msg.setSourceEntity(79U);
    msg.setDestination(33426U);
    msg.setDestinationEntity(18U);
    msg.value = 0.744292641051;

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
    msg.setTimeStamp(0.321883336638);
    msg.setSource(21380U);
    msg.setSourceEntity(44U);
    msg.setDestination(42907U);
    msg.setDestinationEntity(74U);
    msg.path_ref = 2533697965U;
    msg.start_lat = 0.886424529692;
    msg.start_lon = 0.721609284176;
    msg.start_z = 0.323101683135;
    msg.start_z_units = 239U;
    msg.end_lat = 0.549408351287;
    msg.end_lon = 0.542497471968;
    msg.end_z = 0.596463670846;
    msg.end_z_units = 127U;
    msg.speed = 0.706065531966;
    msg.speed_units = 236U;
    msg.lradius = 0.782553035454;
    msg.flags = 234U;

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
    msg.setTimeStamp(0.348117023988);
    msg.setSource(4753U);
    msg.setSourceEntity(32U);
    msg.setDestination(11732U);
    msg.setDestinationEntity(164U);
    msg.path_ref = 3838039666U;
    msg.start_lat = 0.309164790705;
    msg.start_lon = 0.109959041177;
    msg.start_z = 0.484362901785;
    msg.start_z_units = 56U;
    msg.end_lat = 0.348492133321;
    msg.end_lon = 0.207146297434;
    msg.end_z = 0.742411698548;
    msg.end_z_units = 247U;
    msg.speed = 0.252345573529;
    msg.speed_units = 226U;
    msg.lradius = 0.647847302154;
    msg.flags = 154U;

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
    msg.setTimeStamp(0.492613338465);
    msg.setSource(37623U);
    msg.setSourceEntity(210U);
    msg.setDestination(36339U);
    msg.setDestinationEntity(135U);
    msg.path_ref = 2927627948U;
    msg.start_lat = 0.330138269927;
    msg.start_lon = 0.0942814235756;
    msg.start_z = 0.364352873681;
    msg.start_z_units = 233U;
    msg.end_lat = 0.413111009803;
    msg.end_lon = 0.236693592193;
    msg.end_z = 0.200016893582;
    msg.end_z_units = 92U;
    msg.speed = 0.245450806327;
    msg.speed_units = 63U;
    msg.lradius = 0.487906351776;
    msg.flags = 140U;

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
    msg.setTimeStamp(0.112038613687);
    msg.setSource(64467U);
    msg.setSourceEntity(94U);
    msg.setDestination(42897U);
    msg.setDestinationEntity(39U);
    msg.x = 0.339649962074;
    msg.y = 0.292727066272;
    msg.z = 0.150390816867;
    msg.k = 0.0971640374779;
    msg.m = 0.594196000041;
    msg.n = 0.649235891879;
    msg.flags = 221U;

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
    msg.setTimeStamp(0.583964309635);
    msg.setSource(42280U);
    msg.setSourceEntity(215U);
    msg.setDestination(49912U);
    msg.setDestinationEntity(215U);
    msg.x = 0.752377784441;
    msg.y = 0.329670923455;
    msg.z = 0.836185859193;
    msg.k = 0.953170888141;
    msg.m = 0.699536913788;
    msg.n = 0.440860233161;
    msg.flags = 17U;

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
    msg.setTimeStamp(0.717380760539);
    msg.setSource(38660U);
    msg.setSourceEntity(147U);
    msg.setDestination(63991U);
    msg.setDestinationEntity(42U);
    msg.x = 0.162310175092;
    msg.y = 0.810621269992;
    msg.z = 0.88527999251;
    msg.k = 0.000181658883893;
    msg.m = 0.836905952462;
    msg.n = 0.257131028225;
    msg.flags = 225U;

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
    msg.setTimeStamp(0.0978808820261);
    msg.setSource(20387U);
    msg.setSourceEntity(182U);
    msg.setDestination(24976U);
    msg.setDestinationEntity(243U);
    msg.value = 0.401605067587;

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
    msg.setTimeStamp(0.149627440472);
    msg.setSource(58723U);
    msg.setSourceEntity(172U);
    msg.setDestination(44867U);
    msg.setDestinationEntity(15U);
    msg.value = 0.172126352276;

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
    msg.setTimeStamp(0.270516881225);
    msg.setSource(14595U);
    msg.setSourceEntity(51U);
    msg.setDestination(37123U);
    msg.setDestinationEntity(98U);
    msg.value = 0.947683266279;

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
    msg.setTimeStamp(0.00706277074178);
    msg.setSource(21728U);
    msg.setSourceEntity(74U);
    msg.setDestination(25739U);
    msg.setDestinationEntity(92U);
    msg.u = 0.816577196204;
    msg.v = 0.309232789123;
    msg.w = 0.203353502983;
    msg.p = 0.750167186947;
    msg.q = 0.314671222787;
    msg.r = 0.60756105337;
    msg.flags = 188U;

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
    msg.setTimeStamp(0.805738080744);
    msg.setSource(4870U);
    msg.setSourceEntity(218U);
    msg.setDestination(10418U);
    msg.setDestinationEntity(189U);
    msg.u = 0.120974082454;
    msg.v = 0.886111700989;
    msg.w = 0.3867349629;
    msg.p = 0.995995570936;
    msg.q = 0.727048625549;
    msg.r = 0.169773521796;
    msg.flags = 131U;

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
    msg.setTimeStamp(0.69809697684);
    msg.setSource(19859U);
    msg.setSourceEntity(95U);
    msg.setDestination(29665U);
    msg.setDestinationEntity(246U);
    msg.u = 0.580890672564;
    msg.v = 0.24724791148;
    msg.w = 0.685148589725;
    msg.p = 0.265554859176;
    msg.q = 0.71063107976;
    msg.r = 0.0575060471366;
    msg.flags = 188U;

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
    msg.setTimeStamp(0.306422714041);
    msg.setSource(57442U);
    msg.setSourceEntity(29U);
    msg.setDestination(64819U);
    msg.setDestinationEntity(209U);
    msg.path_ref = 33025909U;
    msg.start_lat = 0.295211404928;
    msg.start_lon = 0.307671487879;
    msg.start_z = 0.562756133068;
    msg.start_z_units = 92U;
    msg.end_lat = 0.667004160214;
    msg.end_lon = 0.0776464828648;
    msg.end_z = 0.993547649579;
    msg.end_z_units = 176U;
    msg.lradius = 0.931147763337;
    msg.flags = 14U;
    msg.x = 0.855574048116;
    msg.y = 0.925631852388;
    msg.z = 0.83771027501;
    msg.vx = 0.87443594108;
    msg.vy = 0.935182547385;
    msg.vz = 0.829184305357;
    msg.course_error = 0.912053066113;
    msg.eta = 20871U;

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
    msg.setTimeStamp(0.516386951144);
    msg.setSource(6208U);
    msg.setSourceEntity(244U);
    msg.setDestination(54779U);
    msg.setDestinationEntity(197U);
    msg.path_ref = 4241122108U;
    msg.start_lat = 0.0125245660346;
    msg.start_lon = 0.7439715702;
    msg.start_z = 0.176650861998;
    msg.start_z_units = 84U;
    msg.end_lat = 0.92997790193;
    msg.end_lon = 0.0691972487103;
    msg.end_z = 0.37205149002;
    msg.end_z_units = 236U;
    msg.lradius = 0.681462431826;
    msg.flags = 98U;
    msg.x = 0.690809659112;
    msg.y = 0.377258783604;
    msg.z = 0.821964575821;
    msg.vx = 0.23841864777;
    msg.vy = 0.0963183521812;
    msg.vz = 0.209811995818;
    msg.course_error = 0.747434240172;
    msg.eta = 27262U;

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
    msg.setTimeStamp(0.629755126999);
    msg.setSource(379U);
    msg.setSourceEntity(59U);
    msg.setDestination(56474U);
    msg.setDestinationEntity(28U);
    msg.path_ref = 3763623909U;
    msg.start_lat = 0.0549133736734;
    msg.start_lon = 0.480246007155;
    msg.start_z = 0.138636282994;
    msg.start_z_units = 49U;
    msg.end_lat = 0.775138812745;
    msg.end_lon = 0.488146105348;
    msg.end_z = 0.188976149161;
    msg.end_z_units = 62U;
    msg.lradius = 0.175865262094;
    msg.flags = 102U;
    msg.x = 0.500171745004;
    msg.y = 0.865127319884;
    msg.z = 0.329284718084;
    msg.vx = 0.941620482669;
    msg.vy = 0.325983216883;
    msg.vz = 0.785756750196;
    msg.course_error = 0.355486326675;
    msg.eta = 2806U;

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
    msg.setTimeStamp(0.00750152209043);
    msg.setSource(28866U);
    msg.setSourceEntity(44U);
    msg.setDestination(5708U);
    msg.setDestinationEntity(200U);
    msg.k = 0.962079911954;
    msg.m = 0.847610300401;
    msg.n = 0.832169799857;

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
    msg.setTimeStamp(0.44407421343);
    msg.setSource(17727U);
    msg.setSourceEntity(100U);
    msg.setDestination(58872U);
    msg.setDestinationEntity(140U);
    msg.k = 0.0369119719692;
    msg.m = 0.507274350171;
    msg.n = 0.00949364731732;

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
    msg.setTimeStamp(0.319489872529);
    msg.setSource(4291U);
    msg.setSourceEntity(147U);
    msg.setDestination(54042U);
    msg.setDestinationEntity(60U);
    msg.k = 0.452488459382;
    msg.m = 0.178931999013;
    msg.n = 0.312253894571;

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
    msg.setTimeStamp(0.762060757027);
    msg.setSource(6954U);
    msg.setSourceEntity(69U);
    msg.setDestination(4063U);
    msg.setDestinationEntity(77U);
    msg.p = 0.852040464955;
    msg.i = 0.865169737286;
    msg.d = 0.132660645101;
    msg.a = 0.291743721774;

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
    msg.setTimeStamp(0.969308192469);
    msg.setSource(38547U);
    msg.setSourceEntity(55U);
    msg.setDestination(27570U);
    msg.setDestinationEntity(140U);
    msg.p = 0.383639771284;
    msg.i = 0.303428350026;
    msg.d = 0.723173979527;
    msg.a = 0.627754087631;

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
    msg.setTimeStamp(0.546857220845);
    msg.setSource(8322U);
    msg.setSourceEntity(160U);
    msg.setDestination(12424U);
    msg.setDestinationEntity(239U);
    msg.p = 0.257054906256;
    msg.i = 0.875513966934;
    msg.d = 0.936300247644;
    msg.a = 0.051113751785;

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
    msg.setTimeStamp(0.84380534115);
    msg.setSource(41826U);
    msg.setSourceEntity(167U);
    msg.setDestination(8013U);
    msg.setDestinationEntity(234U);
    msg.op = 142U;

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
    msg.setTimeStamp(0.19890357458);
    msg.setSource(16780U);
    msg.setSourceEntity(218U);
    msg.setDestination(5616U);
    msg.setDestinationEntity(125U);
    msg.op = 251U;

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
    msg.setTimeStamp(0.838437530765);
    msg.setSource(16802U);
    msg.setSourceEntity(125U);
    msg.setDestination(56344U);
    msg.setDestinationEntity(34U);
    msg.op = 191U;

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
    msg.setTimeStamp(0.491052620448);
    msg.setSource(33109U);
    msg.setSourceEntity(12U);
    msg.setDestination(9525U);
    msg.setDestinationEntity(142U);
    msg.x = 0.461476249474;
    msg.y = 0.950922190273;
    msg.z = 0.251017295172;
    msg.vx = 0.217052966174;
    msg.vy = 0.127312796922;
    msg.vz = 0.84342304561;
    msg.ax = 0.938734820645;
    msg.ay = 0.757681559225;
    msg.az = 0.622874245924;
    msg.flags = 41675U;

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
    msg.setTimeStamp(0.143922529212);
    msg.setSource(38662U);
    msg.setSourceEntity(132U);
    msg.setDestination(30393U);
    msg.setDestinationEntity(208U);
    msg.x = 0.865133737765;
    msg.y = 0.250550606101;
    msg.z = 0.102422475004;
    msg.vx = 0.689463120095;
    msg.vy = 0.479029434736;
    msg.vz = 0.790028807303;
    msg.ax = 0.218698043135;
    msg.ay = 0.400219670643;
    msg.az = 0.0436699347357;
    msg.flags = 32784U;

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
    msg.setTimeStamp(0.602185464869);
    msg.setSource(65317U);
    msg.setSourceEntity(59U);
    msg.setDestination(10399U);
    msg.setDestinationEntity(208U);
    msg.x = 0.915482182359;
    msg.y = 0.347515230793;
    msg.z = 0.28408631891;
    msg.vx = 0.830923311305;
    msg.vy = 0.862834298186;
    msg.vz = 0.355317585202;
    msg.ax = 0.240362457608;
    msg.ay = 0.0828899493391;
    msg.az = 0.889598744418;
    msg.flags = 61894U;

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
    msg.setTimeStamp(0.885161075229);
    msg.setSource(26305U);
    msg.setSourceEntity(207U);
    msg.setDestination(55849U);
    msg.setDestinationEntity(88U);
    msg.value = 0.150198567071;

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
    msg.setTimeStamp(0.562894666419);
    msg.setSource(29679U);
    msg.setSourceEntity(27U);
    msg.setDestination(32065U);
    msg.setDestinationEntity(251U);
    msg.value = 0.860549290147;

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
    msg.setTimeStamp(0.653474547236);
    msg.setSource(16302U);
    msg.setSourceEntity(175U);
    msg.setDestination(14899U);
    msg.setDestinationEntity(78U);
    msg.value = 0.00733883448307;

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
    msg.setTimeStamp(0.475212543562);
    msg.setSource(12538U);
    msg.setSourceEntity(14U);
    msg.setDestination(47876U);
    msg.setDestinationEntity(147U);
    msg.timeout = 28554U;
    msg.lat = 0.0749146042988;
    msg.lon = 0.938887297916;
    msg.z = 0.324361294638;
    msg.z_units = 249U;
    msg.speed = 0.604208613095;
    msg.speed_units = 85U;
    msg.roll = 0.760150226079;
    msg.pitch = 0.245458667895;
    msg.yaw = 0.624970692447;
    msg.custom.assign("BAMMEALZOZKVILDRHCEWFEQSKXGQECXDTWAHJYOHACQDKNVZJVBYBREHIVPOPRXJWDQTATNSXUKOMILZKUFGVRCCKZCJWYSMSULTCDBRFCNRNSASBHONYVWFSYYNLHRVSEMXWVISOQREZXZ");

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
    msg.setTimeStamp(0.788677535604);
    msg.setSource(30063U);
    msg.setSourceEntity(113U);
    msg.setDestination(38293U);
    msg.setDestinationEntity(173U);
    msg.timeout = 34571U;
    msg.lat = 0.753092839435;
    msg.lon = 0.82602124844;
    msg.z = 0.280209658387;
    msg.z_units = 114U;
    msg.speed = 0.968187455676;
    msg.speed_units = 74U;
    msg.roll = 0.318358950498;
    msg.pitch = 0.674167856783;
    msg.yaw = 0.22169955833;
    msg.custom.assign("AHHGXZCLXEFWAYUZKMCNXFBNOQJEGICRTPLIGEUAGYADWLODSYSDCNEVJMIAWNWACRXHUTGPRMOZUCZJMGSLQHHPADDO");

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
    msg.setTimeStamp(0.382755863824);
    msg.setSource(55856U);
    msg.setSourceEntity(241U);
    msg.setDestination(33156U);
    msg.setDestinationEntity(53U);
    msg.timeout = 31746U;
    msg.lat = 0.893929447249;
    msg.lon = 0.0347518552128;
    msg.z = 0.446862573301;
    msg.z_units = 112U;
    msg.speed = 0.739418340238;
    msg.speed_units = 177U;
    msg.roll = 0.715266339068;
    msg.pitch = 0.093557168687;
    msg.yaw = 0.237474458657;
    msg.custom.assign("GYLTBIPBTUGJGFIYRSHRNPCJRHEOMHIZTSVTNKWQZDYWPVNJOPISLOQOLDYWNWHGUKOGVRMVVPMCKST");

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
    msg.setTimeStamp(0.281711686144);
    msg.setSource(55095U);
    msg.setSourceEntity(191U);
    msg.setDestination(28588U);
    msg.setDestinationEntity(149U);
    msg.timeout = 461U;
    msg.lat = 0.569987561587;
    msg.lon = 0.587712301891;
    msg.z = 0.107490736917;
    msg.z_units = 156U;
    msg.speed = 0.027263950399;
    msg.speed_units = 15U;
    msg.duration = 56172U;
    msg.radius = 0.169706618342;
    msg.flags = 75U;
    msg.custom.assign("TQLUQMGYUPEDQDMGUXPBSSZFLJNERIANGQGFYRRXOHKMFLIVJUOFCXIMNGAWNRTMOVEDPULFQCWNTZKBCPFNFVELPUYHKKMSXH");

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
    msg.setTimeStamp(0.603040061808);
    msg.setSource(36671U);
    msg.setSourceEntity(8U);
    msg.setDestination(44553U);
    msg.setDestinationEntity(126U);
    msg.timeout = 30452U;
    msg.lat = 0.870372415363;
    msg.lon = 0.918336404878;
    msg.z = 0.381612254977;
    msg.z_units = 16U;
    msg.speed = 0.283301213555;
    msg.speed_units = 184U;
    msg.duration = 2699U;
    msg.radius = 0.584218215793;
    msg.flags = 214U;
    msg.custom.assign("HYWALPFUICCETQREKLIBXKMWXTDZJDUSHZHWCGPCETNWCXLVFXOPXHQETQAZTDYSKITRANMORFJDNYMDBV");

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
    msg.setTimeStamp(0.775656894887);
    msg.setSource(36961U);
    msg.setSourceEntity(7U);
    msg.setDestination(43060U);
    msg.setDestinationEntity(136U);
    msg.timeout = 25936U;
    msg.lat = 0.0363848068835;
    msg.lon = 0.202096473599;
    msg.z = 0.720310016968;
    msg.z_units = 33U;
    msg.speed = 0.281280136214;
    msg.speed_units = 253U;
    msg.duration = 58246U;
    msg.radius = 0.241880927872;
    msg.flags = 150U;
    msg.custom.assign("KOFEXSKYVWDGPRCLIKURNKGRWBADWZZROEOEJFVI");

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
    msg.setTimeStamp(0.477787548267);
    msg.setSource(64757U);
    msg.setSourceEntity(64U);
    msg.setDestination(37758U);
    msg.setDestinationEntity(104U);
    msg.custom.assign("ZZNRXPALPCQXNPPSCKDEWTAODOHTEIFHDBMB");

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
    msg.setTimeStamp(0.8399829482);
    msg.setSource(39594U);
    msg.setSourceEntity(237U);
    msg.setDestination(45679U);
    msg.setDestinationEntity(57U);
    msg.custom.assign("IIVHEUFLHDVFJNHOTCQRXPHSAJYVGVTSEJQRDMZWVFABGHBYBPY");

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
    msg.setTimeStamp(0.999975757426);
    msg.setSource(55872U);
    msg.setSourceEntity(126U);
    msg.setDestination(6387U);
    msg.setDestinationEntity(249U);
    msg.custom.assign("ZRQGLBGYSXQPGNXRFSJTIKAVFOPAFVJJHLKLHYIRUUONCQNTTWNRVAYCSZXLS");

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
    msg.setTimeStamp(0.815352908618);
    msg.setSource(50098U);
    msg.setSourceEntity(208U);
    msg.setDestination(56624U);
    msg.setDestinationEntity(65U);
    msg.timeout = 8442U;
    msg.lat = 0.528234219044;
    msg.lon = 0.591969305278;
    msg.z = 0.643417382105;
    msg.z_units = 18U;
    msg.duration = 26941U;
    msg.speed = 0.772582905235;
    msg.speed_units = 111U;
    msg.type = 181U;
    msg.radius = 0.0803988082984;
    msg.length = 0.614268910321;
    msg.bearing = 0.504074727083;
    msg.direction = 113U;
    msg.custom.assign("ZCIQFJJXHGHQYCMXUPGPQVDMDZSDSORJXUFYLNTEVBHYUMVTHCWGKRYEDIFDIMWGRVFFZXHZRRTTZDDJQMMVFKSITYXVNMJTYYJCSIKWOBVFLKBPPOJDSMJZBJAKCUTVSNNABDKCIQMNFYOTYSLIGKAXHTAUGQDWOEALLOLSZWTOKNAIVJPYZRXEQAQCBNCMPWGGWWPLQPPHOBRBCHKEUBZQUNHOFXZCXULIEXWEBIRORELUHGLN");

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
    msg.setTimeStamp(0.14861789372);
    msg.setSource(13320U);
    msg.setSourceEntity(4U);
    msg.setDestination(43528U);
    msg.setDestinationEntity(87U);
    msg.timeout = 11412U;
    msg.lat = 0.383576289089;
    msg.lon = 0.561407886502;
    msg.z = 0.536036515336;
    msg.z_units = 217U;
    msg.duration = 46331U;
    msg.speed = 0.36577473236;
    msg.speed_units = 78U;
    msg.type = 195U;
    msg.radius = 0.913421038949;
    msg.length = 0.94715120918;
    msg.bearing = 0.955916689469;
    msg.direction = 139U;
    msg.custom.assign("VLALUUOMAHQGFBBDYANXYGJLOXBEOSHIYOYBMQCKCJPBSXUSJECYLQZDTEVNDQKESWHOAJHWQRBLMGPV");

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
    msg.setTimeStamp(0.595959067078);
    msg.setSource(2357U);
    msg.setSourceEntity(79U);
    msg.setDestination(18497U);
    msg.setDestinationEntity(134U);
    msg.timeout = 42185U;
    msg.lat = 0.71227100731;
    msg.lon = 0.249423020122;
    msg.z = 0.895470535771;
    msg.z_units = 165U;
    msg.duration = 47418U;
    msg.speed = 0.630610417158;
    msg.speed_units = 153U;
    msg.type = 213U;
    msg.radius = 0.882609086953;
    msg.length = 0.430318577902;
    msg.bearing = 0.759145451875;
    msg.direction = 187U;
    msg.custom.assign("DCLSLGZLQHAUNJRWPXKNCPYAOOQONHXYOEQAHAPAGOMURUDTKZDVLESHIKIXIULMQWPNJBPKFHIWRTSPZBPIMQDRUSXDWGFQVIWAR");

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
    msg.setTimeStamp(0.183188679736);
    msg.setSource(50012U);
    msg.setSourceEntity(80U);
    msg.setDestination(59526U);
    msg.setDestinationEntity(8U);
    msg.duration = 32559U;
    msg.custom.assign("VHAACEEEVKRITPPDWKRIZQJOKEYIFLESPYTXIUZCFHONZXLVVYRW");

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
    msg.setTimeStamp(0.194274850624);
    msg.setSource(9002U);
    msg.setSourceEntity(5U);
    msg.setDestination(16765U);
    msg.setDestinationEntity(167U);
    msg.duration = 50248U;
    msg.custom.assign("WVNRJIBHGLHSRRSJTMUPMUCSXWEFZTAHUVIDTREBTGEKCKFYWPIKPQBDRNHIOHLCCUZMCVHDJDPSKWGMIROPDVFSTNLQBUIXVYPEMCAXENOKUBQQNLJOXMQALFQVOCAFHAWKOICDBMWYILSDZGNEBNPSVUT");

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
    msg.setTimeStamp(0.984672742185);
    msg.setSource(53785U);
    msg.setSourceEntity(253U);
    msg.setDestination(14879U);
    msg.setDestinationEntity(59U);
    msg.duration = 59311U;
    msg.custom.assign("JURYXPVILEOMDBBAMBLVFQYJWXLSBOVIZRWOEQDLFRYFGHXAUHAIKONQRZCFLHCDPPETBPHSZJGXFDSFULYMAIJJQFQPENRMGUNQTHSAELUAIWQOIHMTXTSGZVBGDDKGZNCVFFRHKTICKNMWVXYEQYNKVWLRMYCSIGNPOOXKTWZWUV");

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
    msg.setTimeStamp(0.648163107632);
    msg.setSource(4805U);
    msg.setSourceEntity(167U);
    msg.setDestination(46238U);
    msg.setDestinationEntity(142U);
    IMC::DesiredPitch tmp_msg_0;
    tmp_msg_0.value = 0.324668950211;
    msg.control.set(tmp_msg_0);
    msg.duration = 1237U;
    msg.custom.assign("VLEIHCFGZSYNJVAVCLKUPDUWBDRJKAYLPNKUWGOFNHFZRVCEUQTYXFHTPBFMOVSRIYGKFDXRBVYDZGOWYBZLGZRNOJNEEFXPZ");

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
    msg.setTimeStamp(0.618905684827);
    msg.setSource(47783U);
    msg.setSourceEntity(167U);
    msg.setDestination(34082U);
    msg.setDestinationEntity(21U);
    IMC::DesiredHeading tmp_msg_0;
    tmp_msg_0.value = 0.555820585634;
    msg.control.set(tmp_msg_0);
    msg.duration = 39984U;
    msg.custom.assign("EBCMHDIWIHZYTHFRDRYBFQGZVRGRXKACNDLRQJPSCKGMCXGODGFSNMCKB");

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
    msg.setTimeStamp(0.229901763189);
    msg.setSource(17695U);
    msg.setSourceEntity(168U);
    msg.setDestination(4714U);
    msg.setDestinationEntity(15U);
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.path_ref = 2507900684U;
    tmp_msg_0.start_lat = 0.811942812188;
    tmp_msg_0.start_lon = 0.558395734353;
    tmp_msg_0.start_z = 0.176907892395;
    tmp_msg_0.start_z_units = 232U;
    tmp_msg_0.end_lat = 0.140081274309;
    tmp_msg_0.end_lon = 0.660284627189;
    tmp_msg_0.end_z = 0.515141583213;
    tmp_msg_0.end_z_units = 215U;
    tmp_msg_0.speed = 0.37358180416;
    tmp_msg_0.speed_units = 16U;
    tmp_msg_0.lradius = 0.108670068243;
    tmp_msg_0.flags = 104U;
    msg.control.set(tmp_msg_0);
    msg.duration = 55804U;
    msg.custom.assign("POLHKBVAHJFXYOGXTTGGJXNMRMWXXSDKKYIWSJSVEUMYMRHEPYBUXFZVAQKJGVGTGCGLWBETUBFFDXRVTSWJARIAUREKNVHMADYFBTSTUYRIZSZHLWIFULZNQQAIGLWNLDIXCKASHRBAVMFBLEEVUKJNQJNHWFRRPQOENJIQQUHTESWWPGOJDVMAPMQQFZSBTDJIWCLFOPHYZNYOIBCCCIMOOKHCDQXXUSZGKTKLZ");

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
    msg.setTimeStamp(0.257320716709);
    msg.setSource(50170U);
    msg.setSourceEntity(128U);
    msg.setDestination(44426U);
    msg.setDestinationEntity(152U);
    msg.timeout = 45602U;
    msg.lat = 0.435838806104;
    msg.lon = 0.972607914772;
    msg.z = 0.870266334922;
    msg.z_units = 165U;
    msg.speed = 0.287785656317;
    msg.speed_units = 33U;
    msg.bearing = 0.0569479443896;
    msg.cross_angle = 0.942261405477;
    msg.width = 0.785634758499;
    msg.length = 0.436651792574;
    msg.hstep = 0.500241018626;
    msg.coff = 209U;
    msg.alternation = 205U;
    msg.flags = 113U;
    msg.custom.assign("PILMMKMRBPPZCHYDIQQFDVXNEMFZRURBMNZSQJOBGQAGWRCICIJXRTGERNOSLQCSRJKCWWOKSPHZCYRDXMXPRPYWADVUUNJVTZGGSJHY");

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
    msg.setTimeStamp(0.47839081716);
    msg.setSource(52760U);
    msg.setSourceEntity(73U);
    msg.setDestination(2317U);
    msg.setDestinationEntity(135U);
    msg.timeout = 37628U;
    msg.lat = 0.804913713302;
    msg.lon = 0.529669699014;
    msg.z = 0.732514186942;
    msg.z_units = 151U;
    msg.speed = 0.363804314616;
    msg.speed_units = 188U;
    msg.bearing = 0.571076855539;
    msg.cross_angle = 0.698788954766;
    msg.width = 0.937996915198;
    msg.length = 0.906202210253;
    msg.hstep = 0.746713137762;
    msg.coff = 124U;
    msg.alternation = 18U;
    msg.flags = 119U;
    msg.custom.assign("ENZSDHBJAZSDFXXXQDBJPLUXEKZGZNBJCSRWGTJKUKNHLKPXSPMRWACVNCAVREYYTBPJOUFKSIBTDBMKOQUTRHCWKMRDGUOPQRWEOSOILAUELGJFNNLLSEBWMUJKOHUNCTMMFTUQXUBGOTQATQYCZREHMQMFELBEZOVBQPYHVHVIRXHXLFXVGOFPIPSJGRYAPDZGFKDMTGHICNAYIDWOKJNIRTVAA");

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
    msg.setTimeStamp(0.919123195274);
    msg.setSource(36000U);
    msg.setSourceEntity(12U);
    msg.setDestination(40642U);
    msg.setDestinationEntity(64U);
    msg.timeout = 15590U;
    msg.lat = 0.738420341554;
    msg.lon = 0.884906665615;
    msg.z = 0.765309940662;
    msg.z_units = 72U;
    msg.speed = 0.337228674447;
    msg.speed_units = 49U;
    msg.bearing = 0.210997785573;
    msg.cross_angle = 0.467002392193;
    msg.width = 0.717345605902;
    msg.length = 0.540630193472;
    msg.hstep = 0.321936191503;
    msg.coff = 3U;
    msg.alternation = 56U;
    msg.flags = 10U;
    msg.custom.assign("NDMCYKTRQQZZFIJTLFECUBWYOINPO");

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
    msg.setTimeStamp(0.350777289775);
    msg.setSource(23901U);
    msg.setSourceEntity(173U);
    msg.setDestination(14599U);
    msg.setDestinationEntity(107U);
    msg.timeout = 10904U;
    msg.lat = 0.389027724124;
    msg.lon = 0.192856129091;
    msg.z = 0.86999881332;
    msg.z_units = 31U;
    msg.speed = 0.73676057201;
    msg.speed_units = 31U;
    msg.custom.assign("HVTYLKGSQMQHPMVPSFOINOSBDXPYRUGBJDNZNRTBFKJFWNZFRQTWCHPLFCNXYFUUPEZQAJTLQJWKLLBOTMDLAEEZGXBDPDLIDPCAOQMKDZLIRSEMHXINMHFXUJWQDONRVAJRWAFEKIXBBHIVNBS");

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
    msg.setTimeStamp(0.662371109026);
    msg.setSource(57835U);
    msg.setSourceEntity(67U);
    msg.setDestination(53346U);
    msg.setDestinationEntity(30U);
    msg.timeout = 7650U;
    msg.lat = 0.722820702537;
    msg.lon = 0.538686440346;
    msg.z = 0.055994280156;
    msg.z_units = 21U;
    msg.speed = 0.385633801023;
    msg.speed_units = 116U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.496930923071;
    tmp_msg_0.y = 0.17535874154;
    tmp_msg_0.z = 0.110454955041;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("YOXZMYPRSKBUITZDYOFCLKKGZUICLEQRWEIAALVZQQCUTQYCHVIKURLESCBDEXXZUDCIJRPVEVTJYSTUNNWHNFXDHMMQLKCGMFQGQWUREVAYBZKJJCWSTRNYLPPHMXAQFDAUVFGJEYDYSNBUBHNFHBOIGGVKDISUWMJHIPOQTTKJBVMQHOPXOTMDRGAOFJTPZSXANSEGHZMHKXPGFDAMWZWNAONLRDRJBWOLVFEERTBOSFYXILZXJKCSWVW");

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
    msg.setTimeStamp(0.395423347499);
    msg.setSource(58253U);
    msg.setSourceEntity(181U);
    msg.setDestination(15059U);
    msg.setDestinationEntity(60U);
    msg.timeout = 32711U;
    msg.lat = 0.215493955598;
    msg.lon = 0.526461046289;
    msg.z = 0.489823490369;
    msg.z_units = 146U;
    msg.speed = 0.451610954699;
    msg.speed_units = 213U;
    msg.custom.assign("MGGJMIHAJTOUONQJFQISSJICTNEIJKHORBMONXBWCRDGTUATGUYKAADSQSMDEITBVOSUUDDVVYYPBWEVTZLXLUACEIYNHXGBKCVYWVZQSWHBAHHHPKWLVZCRYMNPLXZLZLSPOKQGPRYEZDQKJLSFUOZLQRCBMGJZLRQTLGBJBVISNDKMPIVFCOUERFXWJQNFRDWJENTKCWYFHF");

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
    msg.setTimeStamp(0.00409647889134);
    msg.setSource(13682U);
    msg.setSourceEntity(197U);
    msg.setDestination(37710U);
    msg.setDestinationEntity(139U);
    msg.x = 0.165041791953;
    msg.y = 0.00633168985909;
    msg.z = 0.521021546094;

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
    msg.setTimeStamp(0.289788565818);
    msg.setSource(62853U);
    msg.setSourceEntity(17U);
    msg.setDestination(39335U);
    msg.setDestinationEntity(94U);
    msg.x = 0.340585560697;
    msg.y = 0.833214644277;
    msg.z = 0.266801196708;

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
    msg.setTimeStamp(0.331050482439);
    msg.setSource(6041U);
    msg.setSourceEntity(236U);
    msg.setDestination(23403U);
    msg.setDestinationEntity(139U);
    msg.x = 0.0890923362118;
    msg.y = 0.257708728633;
    msg.z = 0.61109846056;

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
    msg.setTimeStamp(0.252404090561);
    msg.setSource(51629U);
    msg.setSourceEntity(113U);
    msg.setDestination(14462U);
    msg.setDestinationEntity(236U);
    msg.timeout = 31428U;
    msg.lat = 0.980764990415;
    msg.lon = 0.349446695251;
    msg.z = 0.844045441545;
    msg.z_units = 18U;
    msg.amplitude = 0.844545459669;
    msg.pitch = 0.250673778645;
    msg.speed = 0.308743159313;
    msg.speed_units = 188U;
    msg.custom.assign("ZFWRRHHGDLULRIWQGLPSDAVXBLMEDNCMCZIPKYJACIAWMVQPXMEGFLNKUOSQVKLIV");

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
    msg.setTimeStamp(0.0316438261941);
    msg.setSource(29402U);
    msg.setSourceEntity(22U);
    msg.setDestination(60312U);
    msg.setDestinationEntity(244U);
    msg.timeout = 3807U;
    msg.lat = 0.674782103903;
    msg.lon = 0.0863492941252;
    msg.z = 0.0851425615332;
    msg.z_units = 225U;
    msg.amplitude = 0.53464916447;
    msg.pitch = 0.420376233819;
    msg.speed = 0.92283640021;
    msg.speed_units = 183U;
    msg.custom.assign("HYYBGZNYNJBCAQWMWGCNFGOBQTVKTTFKQIDDSMVRVDWPGQSNGRNZKIGNBXEGBOFHEUFGITKPTKDIAAVLMDMYVCZAUEUTCMMPYOJXE");

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
    msg.setTimeStamp(0.564029912851);
    msg.setSource(11141U);
    msg.setSourceEntity(208U);
    msg.setDestination(7170U);
    msg.setDestinationEntity(205U);
    msg.timeout = 16649U;
    msg.lat = 0.266571206681;
    msg.lon = 0.658951593276;
    msg.z = 0.238584001094;
    msg.z_units = 117U;
    msg.amplitude = 0.856105423799;
    msg.pitch = 0.173129710625;
    msg.speed = 0.797042693775;
    msg.speed_units = 69U;
    msg.custom.assign("OGIFTHNVDUGUYBAJLBLSGSYGCPBXABOBCDBZNLQTCFKDXIPUXLERWVCZHKMDEDGSPFVVEHYVBLYGUNQBMZLSRZDKMJIWOWNKASGYDWRIQIYTRPVBWMLPZXQMPFKVHRSSAAZ");

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
    msg.setTimeStamp(0.840651452352);
    msg.setSource(38474U);
    msg.setSourceEntity(154U);
    msg.setDestination(54404U);
    msg.setDestinationEntity(235U);

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
    msg.setTimeStamp(0.555077506599);
    msg.setSource(24659U);
    msg.setSourceEntity(103U);
    msg.setDestination(44330U);
    msg.setDestinationEntity(193U);

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
    msg.setTimeStamp(0.703735042991);
    msg.setSource(26832U);
    msg.setSourceEntity(127U);
    msg.setDestination(36708U);
    msg.setDestinationEntity(200U);

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
    msg.setTimeStamp(0.481913015116);
    msg.setSource(23548U);
    msg.setSourceEntity(85U);
    msg.setDestination(59621U);
    msg.setDestinationEntity(65U);
    msg.lat = 0.300053452197;
    msg.lon = 0.819988433612;
    msg.z = 0.593837705709;
    msg.z_units = 50U;
    msg.radius = 0.148951715546;
    msg.duration = 9521U;
    msg.speed = 0.656425391629;
    msg.speed_units = 48U;
    msg.popup_period = 61085U;
    msg.popup_duration = 24526U;
    msg.flags = 121U;
    msg.custom.assign("JIQMCTUVREHJPMWPAPQKBGPWDVCXVZFOMBAGLHFNGNDZPLUDSYOMDXHSRTTZMCOTPFIMHEYMYRUJDROOUAPDTMCWZDSKJWITVRCESJLMJZBXGZRGVJVSSNDNYTCIGKYQVPFSEQONEWFTGZLPRFEACOH");

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
    msg.setTimeStamp(0.351927580533);
    msg.setSource(8573U);
    msg.setSourceEntity(168U);
    msg.setDestination(5382U);
    msg.setDestinationEntity(205U);
    msg.lat = 0.398369130272;
    msg.lon = 0.779236504839;
    msg.z = 0.379256552872;
    msg.z_units = 154U;
    msg.radius = 0.593829395357;
    msg.duration = 23084U;
    msg.speed = 0.910393492777;
    msg.speed_units = 53U;
    msg.popup_period = 58883U;
    msg.popup_duration = 40444U;
    msg.flags = 64U;
    msg.custom.assign("DRVBUYTHQYUANHEXEODFUWICDVJQZUNDYAQLEJMPFXEKBVGQIHYBKKYCHCORCDUJARGEFQWEIPTYIKQAOTUYOFXRPJMXFQJSIDNGHXCWNLWNJGOLTFPCVZAMLFZHROBYVKGZTEIPWTBMSNSKCSXNLPRIZGPIGSDKMLREQZRAXCKZQLLVJZMNAKJVIWYYBSMMXWODVEEBGOBWJGGHWNCAAAJMUBQTVTSTWDSPNOLOXFUMFPHVZXILHC");

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
    msg.setTimeStamp(0.962123146302);
    msg.setSource(31511U);
    msg.setSourceEntity(8U);
    msg.setDestination(2176U);
    msg.setDestinationEntity(201U);
    msg.lat = 0.597713057523;
    msg.lon = 0.207330615072;
    msg.z = 0.804684123748;
    msg.z_units = 198U;
    msg.radius = 0.171650460955;
    msg.duration = 56729U;
    msg.speed = 0.733005432674;
    msg.speed_units = 14U;
    msg.popup_period = 33499U;
    msg.popup_duration = 43399U;
    msg.flags = 137U;
    msg.custom.assign("GNKRTLZOGOPBENSAYTCDBFCUURQDUKRGWVYHTRKOCEAOSRBYDXCGZSARFQSOGBQFVIIAOJVLNJCTXPEDTWHAKOKWKEYHTJGMWBZLXPAXNHIFQMVMDQIIULAPPNYFAHDEZIXQLMEQNLVLNSLGKMCPWPKWIHXKDYWJRSEXQFHSMLZJVZYZJPDTV");

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
    msg.setTimeStamp(0.448554502246);
    msg.setSource(39414U);
    msg.setSourceEntity(84U);
    msg.setDestination(57579U);
    msg.setDestinationEntity(87U);
    msg.timeout = 12684U;
    msg.flags = 209U;
    msg.lat = 0.831641289386;
    msg.lon = 0.00147284310038;
    msg.start_z = 0.387514943668;
    msg.start_z_units = 242U;
    msg.end_z = 0.411038942104;
    msg.end_z_units = 219U;
    msg.radius = 0.162234977325;
    msg.speed = 0.897872043157;
    msg.speed_units = 159U;
    msg.custom.assign("ICVWPTURUPVEREFGGOWHHESDNYDCFFARFZMWHKRHUKJIAXRFBSDVCCKYALMZNGIOOMGQJXIWYNNLOIQHCXJGNJSQVEJSYNGOBPYQMXZVPVNFBTSLGNVDDYMPAKKOH");

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
    msg.setTimeStamp(0.426212874936);
    msg.setSource(5151U);
    msg.setSourceEntity(211U);
    msg.setDestination(48312U);
    msg.setDestinationEntity(101U);
    msg.timeout = 48435U;
    msg.flags = 105U;
    msg.lat = 0.0295286700079;
    msg.lon = 0.955421076945;
    msg.start_z = 0.900416918135;
    msg.start_z_units = 25U;
    msg.end_z = 0.13991375963;
    msg.end_z_units = 97U;
    msg.radius = 0.865606525661;
    msg.speed = 0.98179278482;
    msg.speed_units = 79U;
    msg.custom.assign("FRVEEKFHDSNXQXIEPOPDAIXHRAYFNCSTCMDUJUFRGPJCSGUWYWMSIVVVBVQYERTLRMALDHLJWHWHSVGESDPDGMUHLPYGJKGSKKZFREOQDYXYIIPCFDWKCOVMCFXMPTDULVAUOGOGIQBRLGWKWTHNNUAFKUOBZIEHBVKELLIQIS");

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
    msg.setTimeStamp(0.0109042998352);
    msg.setSource(20520U);
    msg.setSourceEntity(148U);
    msg.setDestination(14071U);
    msg.setDestinationEntity(219U);
    msg.timeout = 8580U;
    msg.flags = 17U;
    msg.lat = 0.894271474184;
    msg.lon = 0.782118873925;
    msg.start_z = 0.888585511153;
    msg.start_z_units = 31U;
    msg.end_z = 0.132159881989;
    msg.end_z_units = 53U;
    msg.radius = 0.923530975308;
    msg.speed = 0.940688717873;
    msg.speed_units = 174U;
    msg.custom.assign("NMRXHWUTZWGOCLVOWKFAYEZWHDTRFK");

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
    msg.setTimeStamp(0.584844135192);
    msg.setSource(50986U);
    msg.setSourceEntity(26U);
    msg.setDestination(26352U);
    msg.setDestinationEntity(89U);
    msg.timeout = 7963U;
    msg.lat = 0.248721289749;
    msg.lon = 0.127528534173;
    msg.z = 0.826074043077;
    msg.z_units = 131U;
    msg.speed = 0.340017514925;
    msg.speed_units = 52U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.600256213389;
    tmp_msg_0.y = 0.640166744982;
    tmp_msg_0.z = 0.462849781167;
    tmp_msg_0.t = 0.725722549969;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("PABUXLWRVRHBBFYPAHOKSSMLIIQZETUWCELNRRLMBIAJZBFUDVHOIT");

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
    msg.setTimeStamp(0.563343333483);
    msg.setSource(3831U);
    msg.setSourceEntity(223U);
    msg.setDestination(13217U);
    msg.setDestinationEntity(250U);
    msg.timeout = 55408U;
    msg.lat = 0.0755396597465;
    msg.lon = 0.887459174134;
    msg.z = 0.370755970137;
    msg.z_units = 45U;
    msg.speed = 0.642312445671;
    msg.speed_units = 206U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.898357560554;
    tmp_msg_0.y = 0.510021624491;
    tmp_msg_0.z = 0.210483066613;
    tmp_msg_0.t = 0.928108042799;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("GOGKXEUBQEBAYAUHNZBMSSGJIOCZWRWDYVLNOAKRCRYNZUMXLSBMPLIWUAETEWPKMLCZAENTSELZCDWZBQRWLNYRHLXEDOXHSEIINSPGVFMVTOOSOJFRVIZAQFMJKPMYASOMQMFMKRUKJJCOBUHHEWXXVBNYIVPHYZWI");

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
    msg.setTimeStamp(0.931229616592);
    msg.setSource(1846U);
    msg.setSourceEntity(179U);
    msg.setDestination(39870U);
    msg.setDestinationEntity(127U);
    msg.timeout = 42369U;
    msg.lat = 0.349450912403;
    msg.lon = 0.190792081673;
    msg.z = 0.395334121592;
    msg.z_units = 137U;
    msg.speed = 0.234688676219;
    msg.speed_units = 8U;
    msg.custom.assign("EHSNGQHVEJFKEETSLHPSJCMDIOFCCBSFXMUFFJWFJIUGXLYXDBLZTUAONPPDVBTYSINIFOQZI");

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
    msg.setTimeStamp(0.779729721879);
    msg.setSource(1975U);
    msg.setSourceEntity(94U);
    msg.setDestination(23256U);
    msg.setDestinationEntity(173U);
    msg.x = 0.454316415255;
    msg.y = 0.545739094197;
    msg.z = 0.8686021168;
    msg.t = 0.492628729226;

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
    msg.setTimeStamp(0.179919526871);
    msg.setSource(33290U);
    msg.setSourceEntity(221U);
    msg.setDestination(1410U);
    msg.setDestinationEntity(52U);
    msg.x = 0.360631213721;
    msg.y = 0.101458241738;
    msg.z = 0.754257381755;
    msg.t = 0.371096739815;

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
    msg.setTimeStamp(0.717030670501);
    msg.setSource(59162U);
    msg.setSourceEntity(118U);
    msg.setDestination(22497U);
    msg.setDestinationEntity(101U);
    msg.x = 0.41970392253;
    msg.y = 0.724632152638;
    msg.z = 0.892968653845;
    msg.t = 0.430162703542;

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
    msg.setTimeStamp(0.480969035456);
    msg.setSource(25163U);
    msg.setSourceEntity(181U);
    msg.setDestination(57669U);
    msg.setDestinationEntity(35U);
    msg.timeout = 3737U;
    msg.name.assign("ICZMFWEDGSVUDNVQZXCOYJYTWAGLAQUOLSSSCPFGAPUTDGAFZZLTIHMKVIEDFRGLIDARCQLNUTGRSYZZJJEONOHGTGGQHZBKFYURYLDRXJSIYWNPZYUMEPVGFEFUQWQBPWRQWAJHKTRYDMDNKIKPAPHXJBXMWDXRHXBBXCOVIFBHDYQNFXPXQWEYVP");
    msg.custom.assign("VQSZMTLKQBCPSECIXKQCNVFRRHPQEOADLTQACBYJSXUQXMFCWBRIDLEIKQWPTHIUJZECYXBPZETUNLIGPNUWGMVPSTZWHOJGIBMHSEBRBDOYTRNDMFYQGDKXSJXXENGOIEHUKVXWVLOCVDZWVFFPMFSRGLCKSWNBOSMEDHYUYZAKQLB");

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
    msg.setTimeStamp(0.276276568568);
    msg.setSource(49773U);
    msg.setSourceEntity(100U);
    msg.setDestination(54031U);
    msg.setDestinationEntity(160U);
    msg.timeout = 45474U;
    msg.name.assign("AFSIRLGUNJFTSZMRRUCHAYIBGOCGQPSSUSBVFTZRNBWGPLVXVGRJWN");
    msg.custom.assign("DYNVFAKHHPZQEDEDMCVVFJONHOGMWMNVQXPHWDEIAJKPUYSYYOVZELPQJOFAARTMSOBTGYJZLXYOIAJROIZWOUUXLBGTXFIOHXMTSYGKRQZPCIIDJVXFPFIZSCPVUCHEBMBZPMRJICLTTLVAIQQCFLGNGKDEQWSOHRZJBWCKUSSWWNRNECRUCIRSUQMTEBVTHDRUMADGYRNJKSYPUDFGGNCKXZLQKBEKFMNNFBBHDGXWJWEYBKALXHTV");

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
    msg.setTimeStamp(0.299060630626);
    msg.setSource(13959U);
    msg.setSourceEntity(91U);
    msg.setDestination(53040U);
    msg.setDestinationEntity(44U);
    msg.timeout = 3248U;
    msg.name.assign("QIZPZRKACGZATDQUYOELEWHZCN");
    msg.custom.assign("IQCWUFFRANGVEFNUDUGCSTVIQVBWQTJSCTYZSQKAUYPHRKAWOHJUICXAHKULDWKLYFMXWTLDKSXIRBGFZCVBFWVTQMZABBWTLPXACWBBOHZPJLHPABARMPCNFDEADEKCLOOGNQJNOIGSJXDONEURGBCDEJNSBFYIGMTLMXKQHMVMRUYLZUQSJRVLHVTM");

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
    msg.setTimeStamp(0.379257051209);
    msg.setSource(59214U);
    msg.setSourceEntity(220U);
    msg.setDestination(58827U);
    msg.setDestinationEntity(206U);
    msg.lat = 0.319706287847;
    msg.lon = 0.979253260043;
    msg.z = 0.574273607925;
    msg.z_units = 108U;
    msg.speed = 0.851763856489;
    msg.speed_units = 118U;
    msg.start_time = 0.454360695702;
    msg.custom.assign("KSACRQQRMJ");

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
    msg.setTimeStamp(0.487807947272);
    msg.setSource(13960U);
    msg.setSourceEntity(199U);
    msg.setDestination(65027U);
    msg.setDestinationEntity(22U);
    msg.lat = 0.195801550894;
    msg.lon = 0.237090502592;
    msg.z = 0.894972163354;
    msg.z_units = 245U;
    msg.speed = 0.4700797759;
    msg.speed_units = 55U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 391U;
    tmp_msg_0.off_x = 0.24361303383;
    tmp_msg_0.off_y = 0.403571710574;
    tmp_msg_0.off_z = 0.809149149296;
    msg.participants.push_back(tmp_msg_0);
    msg.start_time = 0.57928467476;
    msg.custom.assign("MNHZDBSLPYVDBMRWEOGFIDCWQVIZHSTHTNAGCWZMXAYVHEXELIBOEMDEZQDBJLKEAKPYFURLOPKKXFKYWHFPGAGRSNFIBZSUAJLGKXQEAULUPOXYBJCSGDISXRTUMXLNNFQEUCBVHGKBDCTNDVZOXTGTMO");

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
    msg.setTimeStamp(0.671929207579);
    msg.setSource(39372U);
    msg.setSourceEntity(88U);
    msg.setDestination(58112U);
    msg.setDestinationEntity(248U);
    msg.lat = 0.371185711706;
    msg.lon = 0.995198904256;
    msg.z = 0.811056957428;
    msg.z_units = 90U;
    msg.speed = 0.107930330588;
    msg.speed_units = 244U;
    msg.start_time = 0.399880774431;
    msg.custom.assign("EPKXMMYWGOTLIWDCGSWIUFFOQVSNXOMFEJLTRWQJZQGQUXTERYNKTRTSLBWNRETWFBMVXADZRGWHCLRLRVWOWIISCDKQYYIFABGGSRSKXMLMEIAPFNJPYFHCJHKCDOSVZUEOOPZCAXXPYVNPXAQZHHHPJLLPJOFZDPKNQQIXMGRUITKHQCHBVUAYDHRVEZZ");

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
    msg.setTimeStamp(0.698013397505);
    msg.setSource(63134U);
    msg.setSourceEntity(54U);
    msg.setDestination(4224U);
    msg.setDestinationEntity(159U);
    msg.vid = 16528U;
    msg.off_x = 0.679180682099;
    msg.off_y = 0.568761364828;
    msg.off_z = 0.406336147728;

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
    msg.setTimeStamp(0.60103849901);
    msg.setSource(39990U);
    msg.setSourceEntity(54U);
    msg.setDestination(29500U);
    msg.setDestinationEntity(64U);
    msg.vid = 7945U;
    msg.off_x = 0.665995268915;
    msg.off_y = 0.354158439279;
    msg.off_z = 0.526172815779;

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
    msg.setTimeStamp(0.798822655813);
    msg.setSource(3838U);
    msg.setSourceEntity(6U);
    msg.setDestination(60071U);
    msg.setDestinationEntity(213U);
    msg.vid = 15883U;
    msg.off_x = 0.203550491982;
    msg.off_y = 0.396921045172;
    msg.off_z = 0.0226698361603;

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
    msg.setTimeStamp(0.180462587595);
    msg.setSource(65111U);
    msg.setSourceEntity(8U);
    msg.setDestination(47242U);
    msg.setDestinationEntity(24U);

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
    msg.setTimeStamp(0.317360997138);
    msg.setSource(6815U);
    msg.setSourceEntity(185U);
    msg.setDestination(47260U);
    msg.setDestinationEntity(189U);

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
    msg.setTimeStamp(0.461947540082);
    msg.setSource(43931U);
    msg.setSourceEntity(31U);
    msg.setDestination(24974U);
    msg.setDestinationEntity(89U);

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
    msg.setTimeStamp(0.0693887656592);
    msg.setSource(8243U);
    msg.setSourceEntity(136U);
    msg.setDestination(18675U);
    msg.setDestinationEntity(143U);
    msg.mid = 30682U;

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
    msg.setTimeStamp(0.432909392765);
    msg.setSource(30427U);
    msg.setSourceEntity(83U);
    msg.setDestination(25288U);
    msg.setDestinationEntity(190U);
    msg.mid = 46969U;

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
    msg.setTimeStamp(0.440446243315);
    msg.setSource(8393U);
    msg.setSourceEntity(73U);
    msg.setDestination(38445U);
    msg.setDestinationEntity(221U);
    msg.mid = 5615U;

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
    msg.setTimeStamp(0.341434939755);
    msg.setSource(46001U);
    msg.setSourceEntity(50U);
    msg.setDestination(58498U);
    msg.setDestinationEntity(23U);
    msg.state = 1U;
    msg.eta = 57611U;
    msg.info.assign("NGMIZKMHOZWFKAVWBDBIKTPXTUBNNSMLJEKDYEFLA");

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
    msg.setTimeStamp(0.213623176104);
    msg.setSource(10979U);
    msg.setSourceEntity(119U);
    msg.setDestination(59199U);
    msg.setDestinationEntity(112U);
    msg.state = 148U;
    msg.eta = 1047U;
    msg.info.assign("CHLMBEPIITAWAJGWHLIVKMDBRDQYKKQARVLKFHPJIXXGULACJORGKSTFDSFWWYYOWMVIKWSUWOCBMHNAYTLTJFYNYODNNAHXEHVOZDZNDQNUBPDMFUHHJIQOZPTKSTUEIQMBZMGVATLJXSLRZRVPCVYULBXZLRQXRBKEGXMFIGJYENESCAFDIFRJHPSPUYXHWMRXAB");

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
    msg.setTimeStamp(0.454812677379);
    msg.setSource(45040U);
    msg.setSourceEntity(219U);
    msg.setDestination(41162U);
    msg.setDestinationEntity(19U);
    msg.state = 167U;
    msg.eta = 38595U;
    msg.info.assign("JXSRAPQGYCLHVGGMKIHHCAHMIRECUWPOMKWNFQOLBYKLBGPGIAEKQUKFYGAKIFEFMXNPXXMZJVBIMZEFAWUAIODWSVRZRQXUZZDQNUBBWYDYTZVYWDPGTYUZBJMJBQZMGLOLDOPRRNMOHTYATFEXXBPCUQSTTNHVEVMSRYQDCITXHXUCTPEUGBBCVUSRDKALLDJNNWEREY");

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
    msg.setTimeStamp(0.994536614919);
    msg.setSource(15596U);
    msg.setSourceEntity(44U);
    msg.setDestination(64753U);
    msg.setDestinationEntity(158U);
    msg.system = 62575U;
    msg.duration = 29878U;
    msg.speed = 0.569494867764;
    msg.speed_units = 228U;
    msg.x = 0.39585574153;
    msg.y = 0.679541596421;
    msg.z = 0.295292793808;
    msg.z_units = 218U;

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
    msg.setTimeStamp(0.260937449606);
    msg.setSource(43230U);
    msg.setSourceEntity(182U);
    msg.setDestination(22525U);
    msg.setDestinationEntity(120U);
    msg.system = 52667U;
    msg.duration = 45794U;
    msg.speed = 0.0682210336188;
    msg.speed_units = 85U;
    msg.x = 0.699827672065;
    msg.y = 0.759237721926;
    msg.z = 0.682473663933;
    msg.z_units = 93U;

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
    msg.setTimeStamp(0.348886187484);
    msg.setSource(48561U);
    msg.setSourceEntity(50U);
    msg.setDestination(63314U);
    msg.setDestinationEntity(41U);
    msg.system = 47443U;
    msg.duration = 13813U;
    msg.speed = 0.595970443721;
    msg.speed_units = 241U;
    msg.x = 0.733514268784;
    msg.y = 0.0687799459152;
    msg.z = 0.715864506508;
    msg.z_units = 108U;

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
    msg.setTimeStamp(0.573783539971);
    msg.setSource(11975U);
    msg.setSourceEntity(106U);
    msg.setDestination(4161U);
    msg.setDestinationEntity(96U);
    msg.lat = 0.399876787858;
    msg.lon = 0.418734913842;
    msg.speed = 0.713531316814;
    msg.speed_units = 210U;
    msg.duration = 16972U;
    msg.sys_a = 28883U;
    msg.sys_b = 39384U;
    msg.move_threshold = 0.99585553837;

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
    msg.setTimeStamp(0.520796810999);
    msg.setSource(25425U);
    msg.setSourceEntity(97U);
    msg.setDestination(29828U);
    msg.setDestinationEntity(101U);
    msg.lat = 0.222861313261;
    msg.lon = 0.639815730298;
    msg.speed = 0.207844569026;
    msg.speed_units = 207U;
    msg.duration = 59697U;
    msg.sys_a = 37652U;
    msg.sys_b = 52800U;
    msg.move_threshold = 0.597992467233;

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
    msg.setTimeStamp(0.202464067033);
    msg.setSource(48064U);
    msg.setSourceEntity(150U);
    msg.setDestination(53801U);
    msg.setDestinationEntity(177U);
    msg.lat = 0.219040603994;
    msg.lon = 0.398766273094;
    msg.speed = 0.610542708152;
    msg.speed_units = 237U;
    msg.duration = 29329U;
    msg.sys_a = 41988U;
    msg.sys_b = 60452U;
    msg.move_threshold = 0.708741569682;

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
    msg.setTimeStamp(0.662177826945);
    msg.setSource(21398U);
    msg.setSourceEntity(37U);
    msg.setDestination(62759U);
    msg.setDestinationEntity(64U);
    msg.lat = 0.905727726267;
    msg.lon = 0.92587189021;
    msg.z = 0.104369624224;
    msg.z_units = 103U;
    msg.speed = 0.649910644277;
    msg.speed_units = 173U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.436016615698;
    tmp_msg_0.lon = 0.690841937881;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("ZDNAKOGOZABLBMSQKYBLPKTPBWDMSYLVDVDEMUHFWQVKAGWSGQVAEWLQJLNKJSPGXTLYYLKQXNUOJQXARZTLZNVEGXQNKWXIVLUHZVYROECQJYXBRGUOJCZRVPDYRIES");

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
    msg.setTimeStamp(0.0616737917007);
    msg.setSource(13530U);
    msg.setSourceEntity(187U);
    msg.setDestination(15039U);
    msg.setDestinationEntity(20U);
    msg.lat = 0.454863215562;
    msg.lon = 0.755771368158;
    msg.z = 0.811196547124;
    msg.z_units = 203U;
    msg.speed = 0.880837464974;
    msg.speed_units = 127U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.7307905406;
    tmp_msg_0.lon = 0.897135871083;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("VONWEMZDBABSHRDGZTLWWUGTJQZDVPBJEKNXQCATFFKR");

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
    msg.setTimeStamp(0.0352714987306);
    msg.setSource(30823U);
    msg.setSourceEntity(1U);
    msg.setDestination(2212U);
    msg.setDestinationEntity(133U);
    msg.lat = 0.717467757797;
    msg.lon = 0.503948036539;
    msg.z = 0.191664244093;
    msg.z_units = 239U;
    msg.speed = 0.150338292947;
    msg.speed_units = 53U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.291173792516;
    tmp_msg_0.lon = 0.11117985929;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("SARGHXGHCVTFJ");

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
    msg.setTimeStamp(0.6549084336);
    msg.setSource(31013U);
    msg.setSourceEntity(81U);
    msg.setDestination(25992U);
    msg.setDestinationEntity(6U);
    msg.lat = 0.078820064515;
    msg.lon = 0.417572870902;

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
    msg.setTimeStamp(0.10099084897);
    msg.setSource(23308U);
    msg.setSourceEntity(53U);
    msg.setDestination(55822U);
    msg.setDestinationEntity(22U);
    msg.lat = 0.213901082536;
    msg.lon = 0.0222341583346;

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
    msg.setTimeStamp(0.780582908348);
    msg.setSource(43577U);
    msg.setSourceEntity(86U);
    msg.setDestination(52920U);
    msg.setDestinationEntity(86U);
    msg.lat = 0.733194538481;
    msg.lon = 0.954840061439;

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
    msg.setTimeStamp(0.641682940008);
    msg.setSource(44263U);
    msg.setSourceEntity(111U);
    msg.setDestination(49784U);
    msg.setDestinationEntity(200U);
    msg.timeout = 46078U;
    msg.lat = 0.673399659429;
    msg.lon = 0.337126355043;
    msg.z = 0.521187792488;
    msg.z_units = 13U;
    msg.pitch = 0.0647270547259;
    msg.amplitude = 0.0461609440314;
    msg.duration = 63174U;
    msg.speed = 0.325128653954;
    msg.speed_units = 167U;
    msg.radius = 0.371842518162;
    msg.direction = 130U;
    msg.custom.assign("PBGIEUBLTEIMVYRPPXGCQLWSEMUJSLDANHJZGPCSLXWFMMTYDLYZVXOFKHOBPVQSZWMFUUQJHJSNBPQIAZRMIXVFJBJDXRZ");

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
    msg.setTimeStamp(0.0207171500618);
    msg.setSource(41306U);
    msg.setSourceEntity(32U);
    msg.setDestination(33877U);
    msg.setDestinationEntity(55U);
    msg.timeout = 52745U;
    msg.lat = 0.0399481156107;
    msg.lon = 0.0223023329788;
    msg.z = 0.999492245927;
    msg.z_units = 222U;
    msg.pitch = 0.893442800424;
    msg.amplitude = 0.288194787729;
    msg.duration = 48628U;
    msg.speed = 0.0697314541926;
    msg.speed_units = 180U;
    msg.radius = 0.18650896633;
    msg.direction = 117U;
    msg.custom.assign("EGNOTUGFGQLZTWDDJWGCXLISCAOFQZYVIVSIDJVJWNGTKPTMEVGHQKSUMPAPDVONCILUZZIUBHTOKALZOBUMBCYBNUDZDDFLYIAMCZVYNZPNRMMOGRKSBVRDWOEEVARTAQLYXUFNSESEJUCBMPUFLAIXRLQFHRHPO");

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
    msg.setTimeStamp(0.425519984318);
    msg.setSource(51514U);
    msg.setSourceEntity(98U);
    msg.setDestination(49962U);
    msg.setDestinationEntity(149U);
    msg.timeout = 8916U;
    msg.lat = 0.598906892364;
    msg.lon = 0.0785738220774;
    msg.z = 0.274430604931;
    msg.z_units = 244U;
    msg.pitch = 0.495013932917;
    msg.amplitude = 0.859205473835;
    msg.duration = 17690U;
    msg.speed = 0.697224024642;
    msg.speed_units = 250U;
    msg.radius = 0.540395384513;
    msg.direction = 136U;
    msg.custom.assign("QTGMUZCRVOQOHXFJWYCFNPCTBHBLDLCNRGQPPELTDGITFRQBFZC");

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
    msg.setTimeStamp(0.56446281052);
    msg.setSource(5262U);
    msg.setSourceEntity(183U);
    msg.setDestination(48180U);
    msg.setDestinationEntity(234U);
    msg.formation_name.assign("YXUVVLBSTOXIHDZVDGJSVNOLGHEWIQPUYNMHFJKDFEFTLKQMBDYANRZCHWTZGEJROYARUXFGYHQDLMQXRJRWE");
    msg.reference_frame = 168U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 53860U;
    tmp_msg_0.off_x = 0.509443206007;
    tmp_msg_0.off_y = 0.432897789453;
    tmp_msg_0.off_z = 0.4626125447;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("WDCIAODSSLBQAQTUQECZMYQLJXJRNDHAHTFMZYUGEWWXRNGEDARRDECGAVOBFZLEYDUVLUILVJLGLQPYESWCUREYSJTWOTTXOPKXBIHCHPARUOYEJSOZWXSUVVBKLKFNQVSCAJZTNWVJGHZWHGSXHXMINFQZUXCBIBMTDYKKQCAQKSPASHMIEABPRNOFODENJMFBKMGYWPCMZRKGDUTDKGINMQHLVTNYRXV");

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
    msg.setTimeStamp(0.993813522435);
    msg.setSource(48622U);
    msg.setSourceEntity(55U);
    msg.setDestination(63701U);
    msg.setDestinationEntity(155U);
    msg.formation_name.assign("LMLULCDQURJNGLDYJNZUFHGAQANVVWHXEHCW");
    msg.reference_frame = 180U;
    msg.custom.assign("ANWFFJPEKVDTNNZGCBWSYZXGEIUKIQIQONWXUOTJKARFCMBLSJDDYDWMHLTZHVYASJUAOMHOJNVBKXKACRKZHUFUAVYCKOHTGQZCRTQHHJWPSUEOPCIUFGTMLCOTJAKXUDFMNPIVCXAIPRXZRXBRMNSRLEFBNJJJTEIZXLBAMDLUYUIPMTWGH");

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
    msg.setTimeStamp(0.645383969173);
    msg.setSource(19255U);
    msg.setSourceEntity(9U);
    msg.setDestination(42719U);
    msg.setDestinationEntity(24U);
    msg.formation_name.assign("XSUVJBDTFRSIJWBCLMJVUHKCRSIJZSDCQEGNRXFFOTGXPVUNNXTGVBNUGPBP");
    msg.reference_frame = 246U;
    msg.custom.assign("XYZXNPVVGAEGCNMBEUCRBLVSPKTMTGMDYSUICWEQRIBMFADYJGKFXBGJCDMQNESZIQNEOFJXQVMEWHAWYORUHIZEJJXGBVKJTGTYWPUOOLGQAZSWUFOTXZASFSBWHTNWQRVMZXVVSCBLQQTPIUNKPTTELAYJRLDRRROJDLDCUNYHYHERZUIMDIUFFBAVELIWOKBPACNITHKMDVOFGZPUALHHKCKIAKWMNXDLZQPQNOCZXG");

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
    msg.setTimeStamp(0.441584215487);
    msg.setSource(35322U);
    msg.setSourceEntity(70U);
    msg.setDestination(23282U);
    msg.setDestinationEntity(158U);
    msg.group_name.assign("HJMLXYGTEGLCFTRAVYDFLKQZDMQUSJNKPKTHSIHBLOAEUAULVACSXKDOZRKBRIQPJWVIFDJHKRBPYKPLUQGXJUGAVOEEOZYUHBSXMQWAQYQXCINVOINMPDWZXWRHSYNJOIIOTDPCSWYFXQHZCFERTPDILELZZYECTJMEFXYTNQISADMMKAQLCMJGNFBOJVVDAGBXMPZVIKDXTBRFB");
    msg.formation_name.assign("WGMRJLAOTETRGYOLYPVKXDTSKT");
    msg.plan_id.assign("ZUJRGNUOTLRFUBIGNBPRQNBPJTGAEYKGDBYMZD");
    msg.description.assign("OZXEBIDJGWFVWIOEMISETDIBULZTFQVXPZJRWL");
    msg.leader_speed = 0.381245640125;
    msg.leader_bank_lim = 0.737309076134;
    msg.pos_sim_err_lim = 0.217738124235;
    msg.pos_sim_err_wrn = 0.0357155094964;
    msg.pos_sim_err_timeout = 40982U;
    msg.converg_max = 0.345412359331;
    msg.converg_timeout = 41032U;
    msg.comms_timeout = 50776U;
    msg.turb_lim = 0.0115764649105;
    msg.custom.assign("FDREVNLKAKPLTHSOADOVKGZRSUUHLTXXFVNSZXUBYFMNKTJCQCJZKCQKDVYZYDMIEJCMFBJTWGXMJYGCALQIUPAVIXGPWQLYSNPEYHWTWISLNEMAFUENCVEZKXUZXRINLCEGORKXUPDUHJMEYBEWPKHNBZRSHYSLRJBRARTMQJHFOHLCCNZOTCQVGITGLAQEMFGZSZWQWBMYPBAIOISIFA");

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
    msg.setTimeStamp(0.598654090018);
    msg.setSource(64282U);
    msg.setSourceEntity(141U);
    msg.setDestination(34898U);
    msg.setDestinationEntity(52U);
    msg.group_name.assign("IYQRIRVEYUXAVETNOGIXCLKYTSMCDJSZSOZNSMYRHNNPZGRSMILPWYPKUNYOIOGWIJRJFLOQJKDJAWLXHFTNGXRHLKWXSSDZFVORRIJVEWVJANBUMTXVPCJBHNUQUTKZKBDIBOCLGAHJYOZGPBKUNFFRFOQALSLQCUCZEQCCEMHEYBPNDXBSEMTXAUMGWPQVCFLQHPBIUAUEDSW");
    msg.formation_name.assign("FOSFVQOWEMRRGGWMYXDWLZTTXJYKGUCCOOKDLZHDTRIYFWCFBTNNPHQMQCKRBWXAPKMCROXLOAQPLHFSYTDBFNKZYLQGMAVNMDNBOYHSSMMRXOBZDZIXNUDIEGIALXEIVZSHTWOJCZSJYKKQBCTIEGVTJEHVPBIFJWJHUIFNUVDKXWPGJHNSEAEAHSKDORTZYAJBRGXBUTGADEMJPVGQQVELSRUPMXZAFUHFVLBU");
    msg.plan_id.assign("FFLMPFVQFSTYEJGCMCVGLRWBCAGOVFILDRTNIYZALDRSBWFWGTQPARNSJDEVZKBQIVXDROHBCWGTMPXNVMUAIQVBPLDKCOGGGLZEBPAPWGQHNMIQ");
    msg.description.assign("JZYSFFUBQGLLQVBEIYZAPUIVOTCQQKYGJOIYQHAOYEVDUCIXIIPYIJ");
    msg.leader_speed = 0.80624551933;
    msg.leader_bank_lim = 0.966197069458;
    msg.pos_sim_err_lim = 0.78557048915;
    msg.pos_sim_err_wrn = 0.887824329756;
    msg.pos_sim_err_timeout = 25220U;
    msg.converg_max = 0.711161614347;
    msg.converg_timeout = 57735U;
    msg.comms_timeout = 25007U;
    msg.turb_lim = 0.474444974435;
    msg.custom.assign("BMHXZMHADINHLQLNFNPVYHCIRXOMUXTZKMKHOYJHJRVOJVMVAHEPWGAZZCQATXGBJFRWLXWCYYTUEYSPCMDUXZGDEGJSIBWIZBCPDOIQASINZQUMLEVXPKYSMJRVWWWPURLOTRITKJSASYKALRCKGWFGGTBVVUFAKDGFDZFCPQXFBNBKLQNMAORZINBFOZWWHUEJESOSXUQORVFQLKSIELUDEBMCYUNQCNOBNHDAQGKYLFJYTPSVPGDRCPT");

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
    msg.setTimeStamp(0.993191343633);
    msg.setSource(62512U);
    msg.setSourceEntity(242U);
    msg.setDestination(48804U);
    msg.setDestinationEntity(237U);
    msg.group_name.assign("KXLZRQMVHJZSSSOHMKYYIQXKVTLVRAGSHKDLHEIXDAZOCOTNGOEACFBNTSWOJQZNCISQQTLNKBGILTTFQUASFURPIOQNUPBZRTFJNYUDGXAQAYBFYQXKIGUEHTWBDFR");
    msg.formation_name.assign("HQIZPMEFDWTPNXNTODYBKXWVPSVHDUQZAGRNQJXCCHUOVUKKGAJUPMXYRCFSHQSINPXHAQGZFSVVPOFBE");
    msg.plan_id.assign("QBWINBJGFRRKMVGYNDRAUBYRJHKHYIHFNOKPZRRTTDPFJDBAGSTRNOYZRACMKUNFGOQSSZPQ");
    msg.description.assign("EBENXMQPPVYNGZEDVPJSXMLDBNOZJSFRSFXFWYQPGQXRCITNFLDKUEGKTCTEXKSYULOYUWYLDFHOOFIJQJKBGSGBNDWXARLKGVLKMTHUWAJBCUYVCPZXOKOSRNGMYJRXZETGCQPQPPJKQEHPZWFDVQUNTGFNDIQMIAETQHIAWSXVCOAKLSBNLHWCIFOJDMJHETAZZOZBCKVHTADZIRRWNBCHFSDAUHRRICAHRVVGLLWEUJBMSUMB");
    msg.leader_speed = 0.784161499715;
    msg.leader_bank_lim = 0.423729165529;
    msg.pos_sim_err_lim = 0.967210157214;
    msg.pos_sim_err_wrn = 0.53198027148;
    msg.pos_sim_err_timeout = 49130U;
    msg.converg_max = 0.209319499472;
    msg.converg_timeout = 27615U;
    msg.comms_timeout = 10806U;
    msg.turb_lim = 0.482598081633;
    msg.custom.assign("BZCSUZKGATETQNMXXTVGRKTGAJXJRQLRNSEFDWIAFTEIHREAHCHNSUCMXFFZDNVHBDYXEBJRPYOWYPZWGWTQKPOER");

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
    msg.setTimeStamp(0.152214632443);
    msg.setSource(30869U);
    msg.setSourceEntity(66U);
    msg.setDestination(56562U);
    msg.setDestinationEntity(153U);
    msg.control_src = 24264U;
    msg.control_ent = 175U;
    msg.timeout = 0.979680496847;
    msg.loiter_radius = 0.601988306942;
    msg.altitude_interval = 0.0729964061903;

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
    msg.setTimeStamp(0.536978322063);
    msg.setSource(7339U);
    msg.setSourceEntity(164U);
    msg.setDestination(11071U);
    msg.setDestinationEntity(67U);
    msg.control_src = 27711U;
    msg.control_ent = 147U;
    msg.timeout = 0.132962633123;
    msg.loiter_radius = 0.414679438514;
    msg.altitude_interval = 0.771582478894;

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
    msg.setTimeStamp(0.252735085412);
    msg.setSource(29072U);
    msg.setSourceEntity(207U);
    msg.setDestination(5249U);
    msg.setDestinationEntity(64U);
    msg.control_src = 25603U;
    msg.control_ent = 53U;
    msg.timeout = 0.0915946887278;
    msg.loiter_radius = 0.34009881419;
    msg.altitude_interval = 0.915172789472;

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
    msg.setTimeStamp(0.48654802306);
    msg.setSource(63554U);
    msg.setSourceEntity(173U);
    msg.setDestination(18791U);
    msg.setDestinationEntity(150U);
    msg.flags = 108U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.196667005275;
    tmp_msg_0.speed_units = 133U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.817051918806;
    tmp_msg_1.z_units = 245U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.417968033523;
    msg.lon = 0.0812894415682;
    msg.radius = 0.220797007643;

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
    msg.setTimeStamp(0.0846870913336);
    msg.setSource(23573U);
    msg.setSourceEntity(83U);
    msg.setDestination(56675U);
    msg.setDestinationEntity(131U);
    msg.flags = 189U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.414830169461;
    tmp_msg_0.speed_units = 93U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.609046003774;
    tmp_msg_1.z_units = 27U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.293259117915;
    msg.lon = 0.126648702061;
    msg.radius = 0.285747133733;

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
    msg.setTimeStamp(0.365100190213);
    msg.setSource(42325U);
    msg.setSourceEntity(66U);
    msg.setDestination(43632U);
    msg.setDestinationEntity(168U);
    msg.flags = 142U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.505203011634;
    tmp_msg_0.speed_units = 122U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.403573880485;
    tmp_msg_1.z_units = 170U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.359159396971;
    msg.lon = 0.446369909515;
    msg.radius = 0.918389390202;

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
    msg.setTimeStamp(0.588430849501);
    msg.setSource(4754U);
    msg.setSourceEntity(114U);
    msg.setDestination(21864U);
    msg.setDestinationEntity(245U);
    msg.control_src = 47283U;
    msg.control_ent = 199U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 178U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.307545878537;
    tmp_tmp_msg_0_0.speed_units = 195U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.446405321113;
    tmp_tmp_msg_0_1.z_units = 158U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.514039835838;
    tmp_msg_0.lon = 0.11478415529;
    tmp_msg_0.radius = 0.185418309677;
    msg.reference.set(tmp_msg_0);
    msg.state = 124U;
    msg.proximity = 69U;

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
    msg.setTimeStamp(0.80119983705);
    msg.setSource(13237U);
    msg.setSourceEntity(61U);
    msg.setDestination(1545U);
    msg.setDestinationEntity(167U);
    msg.control_src = 39111U;
    msg.control_ent = 21U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 66U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.274123618563;
    tmp_tmp_msg_0_0.speed_units = 185U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.170605529093;
    tmp_tmp_msg_0_1.z_units = 220U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.310826736588;
    tmp_msg_0.lon = 0.578434172952;
    tmp_msg_0.radius = 0.574402157279;
    msg.reference.set(tmp_msg_0);
    msg.state = 121U;
    msg.proximity = 159U;

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
    msg.setTimeStamp(0.307312847354);
    msg.setSource(35684U);
    msg.setSourceEntity(8U);
    msg.setDestination(36607U);
    msg.setDestinationEntity(150U);
    msg.control_src = 6003U;
    msg.control_ent = 206U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 45U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.853903360122;
    tmp_tmp_msg_0_0.speed_units = 181U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.595124481785;
    tmp_tmp_msg_0_1.z_units = 28U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.421608617638;
    tmp_msg_0.lon = 0.0260595884699;
    tmp_msg_0.radius = 0.329762193732;
    msg.reference.set(tmp_msg_0);
    msg.state = 54U;
    msg.proximity = 68U;

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
    msg.setTimeStamp(0.745298959173);
    msg.setSource(31858U);
    msg.setSourceEntity(239U);
    msg.setDestination(27383U);
    msg.setDestinationEntity(141U);
    msg.ax_cmd = 0.262545668077;
    msg.ay_cmd = 0.552728379507;
    msg.az_cmd = 0.265906468355;
    msg.ax_des = 0.893997431344;
    msg.ay_des = 0.457124988562;
    msg.az_des = 0.199581342148;
    msg.virt_err_x = 0.16934200911;
    msg.virt_err_y = 0.882136008463;
    msg.virt_err_z = 0.439684322314;
    msg.surf_fdbk_x = 0.404116970451;
    msg.surf_fdbk_y = 0.745170548546;
    msg.surf_fdbk_z = 0.902443534853;
    msg.surf_unkn_x = 0.423107918352;
    msg.surf_unkn_y = 0.461074080168;
    msg.surf_unkn_z = 0.0390063996616;
    msg.ss_x = 0.392760043968;
    msg.ss_y = 0.296729767332;
    msg.ss_z = 0.077030946969;

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
    msg.setTimeStamp(0.931270302736);
    msg.setSource(31299U);
    msg.setSourceEntity(10U);
    msg.setDestination(12169U);
    msg.setDestinationEntity(36U);
    msg.ax_cmd = 0.457270827418;
    msg.ay_cmd = 0.0285281902175;
    msg.az_cmd = 0.369239976588;
    msg.ax_des = 0.457569864556;
    msg.ay_des = 0.57611050167;
    msg.az_des = 0.320534359075;
    msg.virt_err_x = 0.424943256337;
    msg.virt_err_y = 0.919398453887;
    msg.virt_err_z = 0.544459343477;
    msg.surf_fdbk_x = 0.0801143296606;
    msg.surf_fdbk_y = 0.929590980071;
    msg.surf_fdbk_z = 0.827214042307;
    msg.surf_unkn_x = 0.255264998329;
    msg.surf_unkn_y = 0.473375138817;
    msg.surf_unkn_z = 0.765365783568;
    msg.ss_x = 0.105813758392;
    msg.ss_y = 0.700705789843;
    msg.ss_z = 0.183629942886;

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
    msg.setTimeStamp(0.448746078525);
    msg.setSource(15121U);
    msg.setSourceEntity(95U);
    msg.setDestination(31633U);
    msg.setDestinationEntity(63U);
    msg.ax_cmd = 0.46301314695;
    msg.ay_cmd = 0.923711268303;
    msg.az_cmd = 0.492370332321;
    msg.ax_des = 0.415091737216;
    msg.ay_des = 0.9237515471;
    msg.az_des = 0.451788972479;
    msg.virt_err_x = 0.511084833518;
    msg.virt_err_y = 0.109592641841;
    msg.virt_err_z = 0.913865588264;
    msg.surf_fdbk_x = 0.631300028433;
    msg.surf_fdbk_y = 0.59220150471;
    msg.surf_fdbk_z = 0.235091513304;
    msg.surf_unkn_x = 0.644208112357;
    msg.surf_unkn_y = 0.720429791943;
    msg.surf_unkn_z = 0.198466128503;
    msg.ss_x = 0.125607899237;
    msg.ss_y = 0.0367003568331;
    msg.ss_z = 0.538693808584;

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
    msg.setTimeStamp(0.843551096275);
    msg.setSource(53567U);
    msg.setSourceEntity(230U);
    msg.setDestination(61156U);
    msg.setDestinationEntity(45U);
    msg.s_id.assign("CRAWJWBRALCZCZWZQMCFXNOCEMEGQNPSVYDDKTCHUUUFGSAOZZIAHEIBRPRKHXMWSRVKPGWFDQXFMHIJKNKWZBKHRUQKLFVGCXEVVSBEGBOLBYKQVZPLQYTAOEUVRXPMWNIMHQDUKTEIQTOHQPFGMJBMALKEUALMNTWPFNJJIHGUFGVSASYTZGTEOOOHZGDDAEYLXRPWOXTRUPJ");
    msg.dist = 0.9925844769;
    msg.err = 0.705020592327;
    msg.ctrl_imp = 0.299768721578;
    msg.rel_dir_x = 0.544165023017;
    msg.rel_dir_y = 0.221668159547;
    msg.rel_dir_z = 0.477806346919;
    msg.err_x = 0.871924410076;
    msg.err_y = 0.568217384706;
    msg.err_z = 0.873367281855;
    msg.rf_err_x = 0.1236428123;
    msg.rf_err_y = 0.842398946132;
    msg.rf_err_z = 0.338418892019;
    msg.rf_err_vx = 0.569227766758;
    msg.rf_err_vy = 0.0889776850443;
    msg.rf_err_vz = 0.922129907206;
    msg.ss_x = 0.178418652728;
    msg.ss_y = 0.926255977073;
    msg.ss_z = 0.366659581581;
    msg.virt_err_x = 0.874662034367;
    msg.virt_err_y = 0.362425883883;
    msg.virt_err_z = 0.891079912571;

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
    msg.setTimeStamp(0.0842834405197);
    msg.setSource(29307U);
    msg.setSourceEntity(147U);
    msg.setDestination(25955U);
    msg.setDestinationEntity(48U);
    msg.s_id.assign("BFGONXVFIJWSKTTGSWPSRCVQSRMFYVQCDQXCKZOSDIBNSVBJMWKDPKMBUESUGPNRDDKWCKLNXAPTLBUFMEIFECQGFFAQIUJIAVRHBHOYARJWKCLPJLXHCWLXGYPCLDZEYAHITCXZQYVUOWYSDEOFAXAMUZAOZMPGQOPDRPMEYFVNHEZDWA");
    msg.dist = 0.0632622793013;
    msg.err = 0.696485633851;
    msg.ctrl_imp = 0.541605448285;
    msg.rel_dir_x = 0.290026867317;
    msg.rel_dir_y = 0.569079399539;
    msg.rel_dir_z = 0.700925265033;
    msg.err_x = 0.54786030029;
    msg.err_y = 0.0383037095874;
    msg.err_z = 0.603764016721;
    msg.rf_err_x = 0.780558192404;
    msg.rf_err_y = 0.529335852069;
    msg.rf_err_z = 0.521649895848;
    msg.rf_err_vx = 0.187081375708;
    msg.rf_err_vy = 0.211681906885;
    msg.rf_err_vz = 0.591901996378;
    msg.ss_x = 0.70760146011;
    msg.ss_y = 0.711392025632;
    msg.ss_z = 0.678045575423;
    msg.virt_err_x = 0.255605364523;
    msg.virt_err_y = 0.0109534007812;
    msg.virt_err_z = 0.484622192437;

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
    msg.setTimeStamp(0.702927498121);
    msg.setSource(54825U);
    msg.setSourceEntity(186U);
    msg.setDestination(56773U);
    msg.setDestinationEntity(201U);
    msg.s_id.assign("BNZMEVLCHDGFEEZDEIVPWHOOCGYQPLEHRTKNCKDSJQPDYFNKMIMQGACRQWRIAQZYWXDLYOAUSDLXTBTWKFBTXGFOLZFYHYGMAMKJRWBXJZLVTKKHGYOVMMBPNXVJLHPZKECAWUHTFSOAJTSCYWQSXAWLDVWREROSHZUUICNDBGXKUEQZMQTZRJFNHTBUIXPPGODVAUVPEA");
    msg.dist = 0.857721680078;
    msg.err = 0.590635489209;
    msg.ctrl_imp = 0.72513955502;
    msg.rel_dir_x = 0.886769484301;
    msg.rel_dir_y = 0.19579068223;
    msg.rel_dir_z = 0.386003629382;
    msg.err_x = 0.970603142399;
    msg.err_y = 0.526134486449;
    msg.err_z = 0.851710927529;
    msg.rf_err_x = 0.167821318993;
    msg.rf_err_y = 0.206862789998;
    msg.rf_err_z = 0.256442250647;
    msg.rf_err_vx = 0.467419910158;
    msg.rf_err_vy = 0.16314973447;
    msg.rf_err_vz = 0.22572607279;
    msg.ss_x = 0.134630095728;
    msg.ss_y = 0.085419647316;
    msg.ss_z = 0.301147720382;
    msg.virt_err_x = 0.432463756134;
    msg.virt_err_y = 0.1769140655;
    msg.virt_err_z = 0.443668588876;

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
    msg.setTimeStamp(0.792582857525);
    msg.setSource(17495U);
    msg.setSourceEntity(195U);
    msg.setDestination(35925U);
    msg.setDestinationEntity(80U);
    msg.timeout = 13755U;
    msg.rpm = 0.844968665632;
    msg.direction = 209U;
    msg.custom.assign("KRKQRSOAOIWZJQLSPSDPLTWOHNJNFBRGCSPQQXWEIDPYMXJUVELHFMMCQBOGTZXMYRVEHVHQJUBLWHMANFAXGKQQYMJYZDCEWRFWKZUGMLAUDCKZOLVTSDPCVPYCIYOWTCXBNXHFAFAULSNWOOGPGXCLVBKAZTBITCVXUNIHAKSBJEZBBUJERYHVYFKSDDWOMADIJTNYTTBFRSPAKGWRMDEEPEH");

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
    msg.setTimeStamp(0.108182724837);
    msg.setSource(25052U);
    msg.setSourceEntity(104U);
    msg.setDestination(11101U);
    msg.setDestinationEntity(230U);
    msg.timeout = 31U;
    msg.rpm = 0.177169792717;
    msg.direction = 247U;
    msg.custom.assign("RWTEGOVFEWLZOZGUPCNFUOCU");

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
    msg.setTimeStamp(0.266920479827);
    msg.setSource(2296U);
    msg.setSourceEntity(111U);
    msg.setDestination(54974U);
    msg.setDestinationEntity(148U);
    msg.timeout = 28553U;
    msg.rpm = 0.929287750272;
    msg.direction = 87U;
    msg.custom.assign("KKMHCIKBCDPOBDZYKZOPIDENCJLNAQVBXFCMGPYWHHVWVOLQPAZRDMNQBLGBAOQYSZNNGMFRSUERWMEDEBUKFUXMLQPPPYGJGTJJZFEXQOTIVFRWZWJUWYBBLLCSSCURUAPOXEXVVUDTQKEBSJYKQTRZAZDNXHWHRTQSVGJETNTMBXOXHGKOAYGAIIUZVUYNGPQHWVHTWCHALCPGWOJYKRCCFVXDMFRZFTSASID");

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
    msg.setTimeStamp(0.925815896516);
    msg.setSource(16957U);
    msg.setSourceEntity(115U);
    msg.setDestination(21728U);
    msg.setDestinationEntity(44U);
    msg.formation_name.assign("KHICKQUDFSVIJAYSAAWQOSTPDTPNLTMPIUHIQPIDOXTYLJZJGMNLIFDMVGRYJPECNOOJWUBQAVWJUAOQDXEJTWQUDLGUXPOUGVGYGVENYSKZYCECYESCHJBWFNCRXHZFKOMPWZKVFRRRTNNUMXVRWAZHBXLKLWHBQEEZRPJBUBTRMROMWAFYGBUGDB");
    msg.type = 91U;
    msg.op = 29U;
    msg.group_name.assign("LPFJKXKCMNEIELZVFUIRFIEPUYJCVARMMDHAATGVJBZKTHLSJQYBBROTJNKWDVTIHSLDGCRODBJDQLQZHCTOGEXDX");
    msg.plan_id.assign("IJQIVUIGPIEGJEXDUIYHSIKORNLZTUUFXPYKASZBBRULXJBQBOUTKQSWDJRAEJSXTTVGRLUTYKPXJJSNKZVWPFBBIAFETEMVOUIBXRSQNNNDNWSGIEULVQZCWFWYZZMTWORYPFGLXMKFMNHNZDZGVQJAWYBELSDDCFAEMMGHQDAYLVCAYHOCQACM");
    msg.description.assign("MHPEWIJYJASQZNZNSHWOFFTGJUHJSSQQQFZGXCRNRCOAAQULBBKTGMEFWYINHYKDOPSWLRDXEAEMLXCHIGDOZUZXLVLZSAGKOFVPHQ");
    msg.reference_frame = 171U;
    msg.leader_bank_lim = 0.505154292818;
    msg.leader_speed_min = 0.538621399034;
    msg.leader_speed_max = 0.322279152804;
    msg.leader_alt_min = 0.231814519247;
    msg.leader_alt_max = 0.760563938844;
    msg.pos_sim_err_lim = 0.669060598862;
    msg.pos_sim_err_wrn = 0.901768291032;
    msg.pos_sim_err_timeout = 24457U;
    msg.converg_max = 0.228204080672;
    msg.converg_timeout = 29977U;
    msg.comms_timeout = 18685U;
    msg.turb_lim = 0.0247223115347;
    msg.custom.assign("PFSLVOZVQRIRBIWMHQMXOICPHDCSIFYEQAKJHUWOOCZKYATIABESYQKHESMUBZSVVNFWFLEFBDJRHOGKVYZGUMAEUPXLPBCZCXQUNGMVPTWFLZLQRLBBQEDEJLHZSYCUPGDGUHRWVNWWHIYMLPG");

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
    msg.setTimeStamp(0.250584444661);
    msg.setSource(11012U);
    msg.setSourceEntity(160U);
    msg.setDestination(62884U);
    msg.setDestinationEntity(117U);
    msg.formation_name.assign("YDPIUQHGPBFXFIGANARAVNDLYUVQLICEKVLZMMTHJEIDCWZDBSVVNUFQSPURNHDCYVJTNIXVZUOLQXPLRHLZOJYSCHE");
    msg.type = 207U;
    msg.op = 118U;
    msg.group_name.assign("ZYHLVWXRDKVLUOWRPIKVEYYRXUQJHTNEXGKDAQOYEMA");
    msg.plan_id.assign("RXWHNKLPMYZGODMOZQQXVWDOLHTJSDTTVQURNMPYPOAQFWQXZBDLCJGBHXUCGGRMESUFELEEVNVPNWISIVDWRXRRNPAZXSCJEZMBYXHYYJCRAXZFGJAJFPQQCZOQHPIKVRAFMMAFYVMYLXUGJGTOOBUAIPUVETWHTHUMKXSZTNCIKUNEAJIDGWEWJTGBSUZHINYCHYCLPEIDUKYTLSZRFLDCKDSA");
    msg.description.assign("EYYZJNXQROINBZDUNSCDINRFKCFCXMQOGQQUUNGCESURYGVZRPPDAUZIKUVXHNJQJBVLOSULDCWTHKDVRLRFOMIRCJPJHPWDZXHAGVFKWGTENBCLITTYBFYGFYAYTGDBFXKSIQTSIMJNOWA");
    msg.reference_frame = 250U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 48433U;
    tmp_msg_0.off_x = 0.0840987867962;
    tmp_msg_0.off_y = 0.490168870094;
    tmp_msg_0.off_z = 0.904082431882;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.0819675901793;
    msg.leader_speed_min = 0.00777972088195;
    msg.leader_speed_max = 0.604720612779;
    msg.leader_alt_min = 0.293801373527;
    msg.leader_alt_max = 0.253527482447;
    msg.pos_sim_err_lim = 0.65027233839;
    msg.pos_sim_err_wrn = 0.393860708156;
    msg.pos_sim_err_timeout = 36440U;
    msg.converg_max = 0.0747634151191;
    msg.converg_timeout = 16935U;
    msg.comms_timeout = 49960U;
    msg.turb_lim = 0.791970811251;
    msg.custom.assign("EUWHQOICCTVNCHZIDPFLODNEBQJTIBCKELYVWKJCTYZMFHIJZQERHPOKDMOPCHFWGYLAQLUGSDSWUXQMAANCRMXXEWBUASKHXWGLBHYGTESRUXJKRCOFSKPRQJAWRUKYEVUDILTCUFVIQRYIJPXHYIUNRMIUXEOGOKZDXPPCGKMGSV");

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
    msg.setTimeStamp(0.00303001074054);
    msg.setSource(4839U);
    msg.setSourceEntity(174U);
    msg.setDestination(45568U);
    msg.setDestinationEntity(48U);
    msg.formation_name.assign("NGDTDSGYRXCRELGVPSVQXHDWKTPWWM");
    msg.type = 147U;
    msg.op = 10U;
    msg.group_name.assign("CHGFGYBQIBHEDJUBVPHRGIUJTZYPSRQDRJFAVOCZZKQVIQVANVOTZNU");
    msg.plan_id.assign("LPTRNVZLXQGFVHXVEOGFSOPMHLOPSYCUEKDPRFUCHFIDPCCOQVKLBGWJFODBGUBISZKWTTKOCJHCUPXVBWEFVULWXYVIDEZOTJLQFNJFRKSGSYRHIPKYQAGSMZQYRCWZRRMIQOURDHPLELXCWXDMPEQIAZVWCQGUDKIWUEBKTSNDONWLHINZABNKXJYTJJIAXOTKCMHEBHADFGMMVNBYYJNZYS");
    msg.description.assign("TCDOFTDZHPRUMIKWGNBYVUAHRGCNSTLWUJSODKTJAHOOQEUQIJEIQHUBCBMRVFJXSZVBPJWVEDIZBFVSSBLPPQKELNEAWMYETNYEHMNWYBSXZANEORPGTRXDIWYMIUQLBPXKRPHVGJPZLBMKCGYZHXPQDCKUTYEJTWUFYC");
    msg.reference_frame = 203U;
    msg.leader_bank_lim = 0.462333233257;
    msg.leader_speed_min = 0.919987406624;
    msg.leader_speed_max = 0.0109547491699;
    msg.leader_alt_min = 0.306692330012;
    msg.leader_alt_max = 0.234587605468;
    msg.pos_sim_err_lim = 0.888549683503;
    msg.pos_sim_err_wrn = 0.918731036494;
    msg.pos_sim_err_timeout = 46350U;
    msg.converg_max = 0.754860262413;
    msg.converg_timeout = 30039U;
    msg.comms_timeout = 37493U;
    msg.turb_lim = 0.210651219655;
    msg.custom.assign("IOCRJCVSSXLAUYLOVBQNDBYPTJADYPRKWHRJOXSJANXYFLWGRVPITCCIBFGNUKDGQXPAAMXONJEQKOMQZZBNVQFPLETPEKWVXZESCJEOKEETGVNBGNNKUPIQIUI");

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
    msg.setTimeStamp(0.609100464504);
    msg.setSource(14321U);
    msg.setSourceEntity(217U);
    msg.setDestination(56161U);
    msg.setDestinationEntity(85U);
    msg.timeout = 58201U;
    msg.lat = 0.602981281112;
    msg.lon = 0.933983778622;
    msg.z = 0.130802354885;
    msg.z_units = 92U;
    msg.speed = 0.077758669829;
    msg.speed_units = 165U;
    msg.custom.assign("ZYXGBBTDSURSFRKAVUBTHQHKENWIIJGTHMPVBSWIXFNSXYRBIIHRMAYSJOPIDOVPVVXIVDGPYTXNFQHURGMHEABWFLNJKEQLFZPSOFNQKICMWWNACXLQCJBHEEWJPPOSYXCPYUWWQTNCQZDPDJZFBNXALMERBEKMKDDLEGRZAZCUPGZVACWGSQZQNDYFGAYAOATXKSIJFCHBK");

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
    msg.setTimeStamp(0.0651658158054);
    msg.setSource(63063U);
    msg.setSourceEntity(171U);
    msg.setDestination(41570U);
    msg.setDestinationEntity(198U);
    msg.timeout = 46679U;
    msg.lat = 0.143252471819;
    msg.lon = 0.311859101711;
    msg.z = 0.705710653735;
    msg.z_units = 189U;
    msg.speed = 0.547381157996;
    msg.speed_units = 202U;
    msg.custom.assign("JRWQYQQYEFRTGCIYBDQNAWQPTYEZJ");

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
    msg.setTimeStamp(0.0100227053969);
    msg.setSource(60213U);
    msg.setSourceEntity(123U);
    msg.setDestination(28783U);
    msg.setDestinationEntity(134U);
    msg.timeout = 9743U;
    msg.lat = 0.0094032167304;
    msg.lon = 0.583943725778;
    msg.z = 0.189043225878;
    msg.z_units = 178U;
    msg.speed = 0.0280037880709;
    msg.speed_units = 151U;
    msg.custom.assign("KTYFECXWVVUHKPPDZEMXQXTSKOBVCRKKGACBITSNNNUMWLATRFHPFYGSTGCQCWRCLQHJXAFLMBXBEEGNISIULJWHFJPDNOYQBX");

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
    msg.setTimeStamp(0.713942685401);
    msg.setSource(56172U);
    msg.setSourceEntity(91U);
    msg.setDestination(16346U);
    msg.setDestinationEntity(90U);
    msg.timeout = 60603U;
    msg.lat = 0.0876099764104;
    msg.lon = 0.332105631865;
    msg.z = 0.55140544694;
    msg.z_units = 99U;
    msg.speed = 0.316016138226;
    msg.speed_units = 220U;
    msg.custom.assign("HPYFUWVVTOFDAQSTXCZIZEOJKLLWVBXMBMOSVSIZCNAYDRLHPTHTODQENDERWFBMVVCMIGDQENDZTPLJRCPKNUFIXARRBMGWIQFWUPUKIHGCNZVFPEKDQFWCXMDLRJEKSUJAHBLLSWOGACQEQRGAVWTNXOCHERAIZHHHJMLUFXRLUJYEDKOJGMMGSYOVVWWUTSXNZLYKJPUYOYUPXYINBIJBGQ");

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
    msg.setTimeStamp(0.444739034384);
    msg.setSource(4647U);
    msg.setSourceEntity(25U);
    msg.setDestination(33666U);
    msg.setDestinationEntity(79U);
    msg.timeout = 5134U;
    msg.lat = 0.213200109033;
    msg.lon = 0.716822384966;
    msg.z = 0.365685283916;
    msg.z_units = 77U;
    msg.speed = 0.176835515774;
    msg.speed_units = 163U;
    msg.custom.assign("OCWPVJEVQQUEHRGZTOFKZPWFAMPLPMFIBF");

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
    msg.setTimeStamp(0.180883725084);
    msg.setSource(49689U);
    msg.setSourceEntity(85U);
    msg.setDestination(46320U);
    msg.setDestinationEntity(178U);
    msg.timeout = 6903U;
    msg.lat = 0.674458144086;
    msg.lon = 0.434829710246;
    msg.z = 0.476138136708;
    msg.z_units = 151U;
    msg.speed = 0.613450912316;
    msg.speed_units = 203U;
    msg.custom.assign("BIIQAMQSIORUAHGSLZYGUVWYXJADPJWFEMSVRURYETKHKYIKJEKGKNKBVAXGLXHUNIQNYKHQPVSBKTKIPRXWFAQOQLCOEIGGOUEEABZYUSFDEDHTNOXVCAYWSRDZNNMOFDPXYUZDMCQV");

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
    msg.setTimeStamp(0.195356851033);
    msg.setSource(49673U);
    msg.setSourceEntity(156U);
    msg.setDestination(52988U);
    msg.setDestinationEntity(10U);
    msg.arrival_time = 0.177763679292;
    msg.lat = 0.632163659463;
    msg.lon = 0.629101964354;
    msg.z = 0.889964816798;
    msg.z_units = 162U;
    msg.travel_z = 0.286478353658;
    msg.travel_z_units = 191U;
    msg.delayed = 146U;

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
    msg.setTimeStamp(0.0381580041117);
    msg.setSource(41522U);
    msg.setSourceEntity(124U);
    msg.setDestination(23693U);
    msg.setDestinationEntity(189U);
    msg.arrival_time = 0.439313335156;
    msg.lat = 0.146260446761;
    msg.lon = 0.837348517319;
    msg.z = 0.000452667620674;
    msg.z_units = 181U;
    msg.travel_z = 0.942013906933;
    msg.travel_z_units = 175U;
    msg.delayed = 61U;

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
    msg.setTimeStamp(0.630927790033);
    msg.setSource(14064U);
    msg.setSourceEntity(131U);
    msg.setDestination(1544U);
    msg.setDestinationEntity(109U);
    msg.arrival_time = 0.811791350357;
    msg.lat = 0.0108608737111;
    msg.lon = 0.415154396487;
    msg.z = 0.895567126465;
    msg.z_units = 122U;
    msg.travel_z = 0.0159604656632;
    msg.travel_z_units = 50U;
    msg.delayed = 208U;

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
    msg.setTimeStamp(0.567455207742);
    msg.setSource(37454U);
    msg.setSourceEntity(14U);
    msg.setDestination(2888U);
    msg.setDestinationEntity(62U);
    msg.lat = 0.0673925777581;
    msg.lon = 0.454904844826;
    msg.z = 0.899628290895;
    msg.z_units = 94U;
    msg.speed = 0.429144472286;
    msg.speed_units = 174U;
    msg.bearing = 0.784940543818;
    msg.cross_angle = 0.624555327517;
    msg.width = 0.941258547527;
    msg.length = 0.584658010457;
    msg.coff = 237U;
    msg.angaperture = 0.422149358861;
    msg.range = 49456U;
    msg.overlap = 242U;
    msg.flags = 102U;
    msg.custom.assign("KVHGRWJPBYITXGAULGSXSDOQCCAVOJKIEKMVXQCFTEZXZLJAIJPHUHDWQHBBPAJKLUEWEVVMMQXWADNYDCRCQKWWEFTVNHAFWDGYKNBIMPBZFPWAIKXZTGVCFDRMNVQCEPGXMJGPNKQTQSOZNOUGR");

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
    msg.setTimeStamp(0.473081514228);
    msg.setSource(50065U);
    msg.setSourceEntity(44U);
    msg.setDestination(38646U);
    msg.setDestinationEntity(10U);
    msg.lat = 0.976806843944;
    msg.lon = 0.331147363123;
    msg.z = 0.515063895402;
    msg.z_units = 65U;
    msg.speed = 0.576623311843;
    msg.speed_units = 121U;
    msg.bearing = 0.0195419411406;
    msg.cross_angle = 0.644677296817;
    msg.width = 0.792639203529;
    msg.length = 0.900102608763;
    msg.coff = 16U;
    msg.angaperture = 0.254894388842;
    msg.range = 25536U;
    msg.overlap = 80U;
    msg.flags = 32U;
    msg.custom.assign("TDXERGBAYTJUGABUBNFXAHCOJEKZLEUPCNSQZWOP");

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
    msg.setTimeStamp(0.513321984927);
    msg.setSource(19975U);
    msg.setSourceEntity(148U);
    msg.setDestination(36956U);
    msg.setDestinationEntity(202U);
    msg.lat = 0.485481880383;
    msg.lon = 0.0446919191388;
    msg.z = 0.67174387765;
    msg.z_units = 6U;
    msg.speed = 0.588835633297;
    msg.speed_units = 45U;
    msg.bearing = 0.0289394669532;
    msg.cross_angle = 0.593887012851;
    msg.width = 0.139551738701;
    msg.length = 0.653190876768;
    msg.coff = 53U;
    msg.angaperture = 0.133209769451;
    msg.range = 12784U;
    msg.overlap = 160U;
    msg.flags = 29U;
    msg.custom.assign("JUTLQRNQQYOSTJUDHJWBBDIFFTOPGMCYADCCZZPRHZCIXKLFPMXGHUQKPDSPEPTQZIWSNDGVBZJGANIBCSPYGVFEKIUY");

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
    msg.setTimeStamp(0.867527534551);
    msg.setSource(29957U);
    msg.setSourceEntity(251U);
    msg.setDestination(54809U);
    msg.setDestinationEntity(155U);
    msg.timeout = 3048U;
    msg.lat = 0.0861818005856;
    msg.lon = 0.173813523693;
    msg.z = 0.88430124023;
    msg.z_units = 242U;
    msg.speed = 0.682841886537;
    msg.speed_units = 155U;
    msg.syringe0 = 42U;
    msg.syringe1 = 67U;
    msg.syringe2 = 188U;
    msg.custom.assign("JPSTLRLREAZZEHPCRIAWFPSQOVYRTVELGARPYPUDGJZOGLJZVESGTCXNZITFZHYCMWDQJGLDMCRWXRSCLIMXHTKPCOFDBTUOWDOFGKHVUBOAFRYZAHWOATPINXHVLIYQSRLDFSMMQBBAPCFYPDVBUXIHWUWFDGZSYNMJMIHJEQWXKKFTONVNAOEMNNU");

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
    msg.setTimeStamp(0.232098249062);
    msg.setSource(4253U);
    msg.setSourceEntity(15U);
    msg.setDestination(11948U);
    msg.setDestinationEntity(73U);
    msg.timeout = 55342U;
    msg.lat = 0.338935695107;
    msg.lon = 0.940379092416;
    msg.z = 0.77338871222;
    msg.z_units = 182U;
    msg.speed = 0.344158534969;
    msg.speed_units = 81U;
    msg.syringe0 = 100U;
    msg.syringe1 = 176U;
    msg.syringe2 = 128U;
    msg.custom.assign("OBWEXDOJXSVVBPSSKVSUIHNNUGHXWGEPMZYCNRPAPTZBLYDIMDABKYETBCOIWJKQLKQWZIAKRNHEZXATDHIWAJOFQURVENTUJNXXGAYCGYVPQJHRJSELAXDJKFMIUPYMMLNRZVEHWIEBTVYGAWSKUTFOCHALEAPDZVMRCLUCWGQRTZQJTGDZUZFIFRIFLCDSCISVMSXFQMRBUCEQHNBJOYHPGFHJXXYCQBRLTVGLU");

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
    msg.setTimeStamp(0.665125339894);
    msg.setSource(20596U);
    msg.setSourceEntity(61U);
    msg.setDestination(38801U);
    msg.setDestinationEntity(184U);
    msg.timeout = 48183U;
    msg.lat = 0.441758501017;
    msg.lon = 0.391100131841;
    msg.z = 0.159178157772;
    msg.z_units = 185U;
    msg.speed = 0.88409483999;
    msg.speed_units = 183U;
    msg.syringe0 = 113U;
    msg.syringe1 = 27U;
    msg.syringe2 = 132U;
    msg.custom.assign("NDCEEYLFIBNVUKHIZOGOSFWMBBJSHMXSAJXEBUFRXDUWCXTJRHQJKPOUKZTVEOAOKPZIDAGKLMMHYQDKYERNMWGRYCVWCDCHHTEFQUIPXRQPU");

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
    msg.setTimeStamp(0.258564391984);
    msg.setSource(24009U);
    msg.setSourceEntity(198U);
    msg.setDestination(48428U);
    msg.setDestinationEntity(145U);

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
    msg.setTimeStamp(0.220096145708);
    msg.setSource(35724U);
    msg.setSourceEntity(103U);
    msg.setDestination(4228U);
    msg.setDestinationEntity(18U);

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
    msg.setTimeStamp(0.668790856118);
    msg.setSource(51373U);
    msg.setSourceEntity(36U);
    msg.setDestination(28040U);
    msg.setDestinationEntity(213U);

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
    msg.setTimeStamp(0.750235886463);
    msg.setSource(55175U);
    msg.setSourceEntity(227U);
    msg.setDestination(25362U);
    msg.setDestinationEntity(183U);
    msg.lat = 0.634118786834;
    msg.lon = 0.756784927011;
    msg.z = 0.890917841007;
    msg.z_units = 160U;
    msg.speed = 0.896828792568;
    msg.speed_units = 212U;
    msg.takeoff_pitch = 0.595752665421;
    msg.custom.assign("ARDRXWOVUZOCJBYAIHSQRJJUPPYUNXCEWAGSFATQGRTDCBXKHKGRTQXWCNMYFFRTDVJRMKZPQEPHZNWLHLHUVCXYPGOZJXFDYNZNIQGKSZOCVJMLEEXIDQVXKSYTKNKUJQOSQIYMCYBDACIBXJHIFLKXAFGDPSFULHFMFMGLLESKMTSTUWZCUIEVPZMMUTUPLVWPTOBABYEZIWWBHSENNEVCJERMHAPQVAVBRKIYFAGSJHWIZQBNTDGDO");

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
    msg.setTimeStamp(0.853048947508);
    msg.setSource(50937U);
    msg.setSourceEntity(134U);
    msg.setDestination(1988U);
    msg.setDestinationEntity(17U);
    msg.lat = 0.961272968221;
    msg.lon = 0.223301945786;
    msg.z = 0.308923187395;
    msg.z_units = 100U;
    msg.speed = 0.919571490099;
    msg.speed_units = 176U;
    msg.takeoff_pitch = 0.943811455048;
    msg.custom.assign("KNIGPXMEVNILVPLLEUBYXVCPTOKHEIAWGBARWUBIIWEDZFRXRJXMDDHFBRKQXBZKKHIGAIXJMQKZFFUCCTPMQIKSVTUTQJCZSUGFGJNGMW");

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
    msg.setTimeStamp(0.414622267351);
    msg.setSource(12332U);
    msg.setSourceEntity(53U);
    msg.setDestination(34525U);
    msg.setDestinationEntity(53U);
    msg.lat = 0.295185800478;
    msg.lon = 0.0944109377108;
    msg.z = 0.284095243558;
    msg.z_units = 27U;
    msg.speed = 0.930184708759;
    msg.speed_units = 191U;
    msg.takeoff_pitch = 0.972341216541;
    msg.custom.assign("YIEBIJHVNKGOVJRNCNVLNYJEQEMXGZCTFCCMCALOFSINVOLDXQOSJOYUFVADSDFRFAREDIBIZDAPFHEEANLFSYHUTKRQLDFWTJIPPXBNYVHBQKWLFSPEMHBCHAXBBAGJCZXUBZNWQWSZYWHKWLDOUPGJZVMPOGZGAPKY");

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
    msg.setTimeStamp(0.144859195116);
    msg.setSource(46831U);
    msg.setSourceEntity(60U);
    msg.setDestination(14807U);
    msg.setDestinationEntity(236U);
    msg.lat = 0.952417353856;
    msg.lon = 0.121086609908;
    msg.z = 0.823897947631;
    msg.z_units = 168U;
    msg.speed = 0.974300482462;
    msg.speed_units = 99U;
    msg.abort_z = 0.991443418917;
    msg.bearing = 0.672768933754;
    msg.glide_slope = 25U;
    msg.glide_slope_alt = 0.0792189160287;
    msg.custom.assign("EJTFRHXDMBASAJCEQZYYKQLXYDICNDDWGYPIQQYGOBQOYRZRGBKVUMGMKIJYWWHPVZHVKFZHAEMNBNCVMWZFGPEAACFCESJXDMJOZLSUVHPRJERTLTHMKBKYISUEXWCOCKIQASRKUOFDAXTKCXSGRDKXGFMJPTHOLZSVNHWDFYITOOBDXNSGRILDPAWYHSU");

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
    msg.setTimeStamp(0.117528480551);
    msg.setSource(57142U);
    msg.setSourceEntity(44U);
    msg.setDestination(48624U);
    msg.setDestinationEntity(26U);
    msg.lat = 0.956009560412;
    msg.lon = 0.642051870115;
    msg.z = 0.0999659460423;
    msg.z_units = 2U;
    msg.speed = 0.211987642479;
    msg.speed_units = 89U;
    msg.abort_z = 0.534862009224;
    msg.bearing = 0.303307192762;
    msg.glide_slope = 242U;
    msg.glide_slope_alt = 0.250531908968;
    msg.custom.assign("FTNEJWDXAICKQULSMBDMNEJVPXINXTNGSSNQFADKMTMHUDMJFWKEYXWGHJNLEGPEOFYIWUPQLGFSCPATNXBWBXRIWCNABHPBHFOUYZIMZLDZVTHGACSQBHRDIZBVKSKLQCRIFAWGZONQDJMEDAOXWRGAVXEKZBHCGFKQKAQXTTSPMTZSQDBYONHILLLYVPYRAOZVRPJOMRVLJOV");

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
    msg.setTimeStamp(0.535092540444);
    msg.setSource(54782U);
    msg.setSourceEntity(25U);
    msg.setDestination(47887U);
    msg.setDestinationEntity(79U);
    msg.lat = 0.379274320011;
    msg.lon = 0.465691006179;
    msg.z = 0.906261815567;
    msg.z_units = 139U;
    msg.speed = 0.450324729558;
    msg.speed_units = 154U;
    msg.abort_z = 0.597448940033;
    msg.bearing = 0.588124443934;
    msg.glide_slope = 38U;
    msg.glide_slope_alt = 0.391273709523;
    msg.custom.assign("RXOCJRTBPSUJHKIZSLTJOOSCRATZSNGWEBDCNANIGUCXVQTOUILZTMLFUHHVYKIAZKYWGMBMDEBGSSDYZQYWVVEHWMHTSJPVDKERXSQOXKZYQIDPMEFBAJHUGJCTULNDHFWVKBBQLFMUACAI");

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
    msg.setTimeStamp(0.5322440763);
    msg.setSource(45382U);
    msg.setSourceEntity(245U);
    msg.setDestination(62749U);
    msg.setDestinationEntity(240U);
    msg.lat = 0.158697668138;
    msg.lon = 0.500926734213;
    msg.speed = 0.55956189716;
    msg.speed_units = 210U;
    msg.limits = 207U;
    msg.max_depth = 0.306391550438;
    msg.min_alt = 0.173856024232;
    msg.time_limit = 0.509119783377;
    msg.controller.assign("SDNNXXUWHZWQGLKDNGTXBRSFMLPNMWPHONLCVCCLTFAGUWOTJYIVFSVJQEDUIWWFMTESYRXUTSMNJFJODVADYSCTHZYZJPCKBIYJHXRXISCMEEYVEURCRDHUIBHUXKCKMOPNQVMPBAEPEWGZGQJAMMBVQB");
    msg.custom.assign("DJDYIFACLGHAVQMUNHKNFXQTIVTRPQQMEZVTHYAVVSVY");

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
    msg.setTimeStamp(0.862431535828);
    msg.setSource(43835U);
    msg.setSourceEntity(48U);
    msg.setDestination(46751U);
    msg.setDestinationEntity(9U);
    msg.lat = 0.280765873575;
    msg.lon = 0.259764547623;
    msg.speed = 0.467098869727;
    msg.speed_units = 75U;
    msg.limits = 20U;
    msg.max_depth = 0.823572082811;
    msg.min_alt = 0.736677473311;
    msg.time_limit = 0.0738796715838;
    msg.controller.assign("EWLDDCJXCYIQECTOVMASZJUHEFHFXNMGPZKOCAZMBSMXBZDIREWZLKABUNTHVTKRBHXAQMLFQYRPWPIYQJKMCDNNLFNZXIYUMQPTVCZMUTOYUCQPXVHDODGVIEABVSLHOGFSITGPZKVQNWHENRURJUFSCFHCDMQFOSPLSITRVCLJKPOFGBBLHYV");
    msg.custom.assign("ENGOTMYAIUJZCAVZTLLIPMDWPXNILKQMBXBSVXCVFEYJBBUJIUXHRNJSZYKQRDNHYQBDQPIPDSJVQJQGFDHZRFMJFTROMGARKXZQ");

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
    msg.setTimeStamp(0.639131389676);
    msg.setSource(50807U);
    msg.setSourceEntity(201U);
    msg.setDestination(29167U);
    msg.setDestinationEntity(213U);
    msg.lat = 0.105394006651;
    msg.lon = 0.170519501007;
    msg.speed = 0.261135684069;
    msg.speed_units = 3U;
    msg.limits = 167U;
    msg.max_depth = 0.770086257907;
    msg.min_alt = 0.926821117518;
    msg.time_limit = 0.769149667705;
    msg.controller.assign("KVESORVFHGXYEWQUERMORRPICKEJQGDAJRUCNORBASDJHVEPEZXDI");
    msg.custom.assign("FIXGRWAOBVSJRDPMUNNTHPJKCQDHXOAXLESXBPQZHWBQWCRKTYBMUQKEBGDADVKLWHZRHKZLFCOYPNMJZTMN");

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
    msg.setTimeStamp(0.370093043813);
    msg.setSource(43157U);
    msg.setSourceEntity(5U);
    msg.setDestination(39649U);
    msg.setDestinationEntity(232U);
    msg.target.assign("OTYJYTSPQLDJLYZAEUNCRSHAEGWPRIQNDGAQKVLBRYFYGETTLMNLQWEIBEMBYWOXZOTCSVLPWVHEGTKGMJAFZNSQMGVVBDIORUBLKCRKANZBOQPXXATCTFECYFNAUSJRZMZFNJPUXXVPXLJMKFGJKRCFPVHOAKZXDGWWEZOUCUYQPHBKBZOHIQVWUPHERIKHMUZRWSMGDYHLTODNDIAIIVJSNGUURIS");
    msg.max_speed = 0.545676472044;
    msg.speed_units = 144U;
    msg.lat = 0.757566559923;
    msg.lon = 0.703387707175;
    msg.z = 0.371984989832;
    msg.z_units = 105U;
    msg.custom.assign("FAWOVHSODBDLHVJPLSKYFLLB");

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
    msg.setTimeStamp(0.022103351455);
    msg.setSource(51617U);
    msg.setSourceEntity(30U);
    msg.setDestination(64073U);
    msg.setDestinationEntity(16U);
    msg.target.assign("UDYRZOIZTMGGTCEWWTEQVAYZRFSYBGBIQAQTLDBPNAVJZDSXPYJUWQAPGTGBGNIRKFPRXJJCOHZNKIZFKZQRXHXPXVNKMYTELXJOMRVABKZIIWKXWIKSYHAUUVVYYSGQWHABEKOUDRMRUJNIHDFX");
    msg.max_speed = 0.55697638222;
    msg.speed_units = 109U;
    msg.lat = 0.346957044477;
    msg.lon = 0.620618532921;
    msg.z = 0.514985201989;
    msg.z_units = 122U;
    msg.custom.assign("PZKFRHWJSQAMVHXYJMDERKAUZFYAAFCMOZTGCZFQCBUJTWQLXESJOHTZOBNWEEOGPFMNWEGTSODRGUVCILHZCSWPALMDKXSRDTFTIGPHILLNHEEMZQVUQHOVKBCVQLYUCKHEGDMJUPLVJBJZWPKXCMKUDXLCBZOWIKFNQQWLJVTYRHRYPINJVSKBHJBDOBRLPETUSGOPXITA");

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
    msg.setTimeStamp(0.913222943547);
    msg.setSource(12295U);
    msg.setSourceEntity(12U);
    msg.setDestination(43666U);
    msg.setDestinationEntity(53U);
    msg.target.assign("UCJQMELWHYIBNFHKOWQVRKKDQINQIDDTEBTDT");
    msg.max_speed = 0.860674107995;
    msg.speed_units = 46U;
    msg.lat = 0.0790801969449;
    msg.lon = 0.900812445771;
    msg.z = 0.079309691188;
    msg.z_units = 159U;
    msg.custom.assign("VLYIQQRNHSFWYBLAQEHJIZNWOVOJNNOAILCNOVGDUMBRMSIVZTNZERAFBZRFAETRBKTDHGSGAUQNAJWHGZFMSZQZHQCXDBWWYDRPSPOJMXTKEASPSV");

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
    msg.setTimeStamp(0.792329897504);
    msg.setSource(26813U);
    msg.setSourceEntity(244U);
    msg.setDestination(19367U);
    msg.setDestinationEntity(165U);
    msg.timeout = 41808U;
    msg.lat = 0.936652718848;
    msg.lon = 0.65375554593;
    msg.speed = 0.131552525138;
    msg.speed_units = 57U;
    msg.custom.assign("PTOXVIAKSCDHNKZGAQIIQPIICFYJXJACGREDWVUUJABRGDMVJOVBRVGZMNYTRZJCNMTTEEM");

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
    msg.setTimeStamp(0.570780522863);
    msg.setSource(2369U);
    msg.setSourceEntity(144U);
    msg.setDestination(8580U);
    msg.setDestinationEntity(36U);
    msg.timeout = 27073U;
    msg.lat = 0.41062962747;
    msg.lon = 0.0609393909598;
    msg.speed = 0.51542038095;
    msg.speed_units = 212U;
    msg.custom.assign("AXQRYPEXBTWIMYEPUTHHFIHLBMTGTENICYJQYQYFFBRFMTESBKVFOKPYRZKLNCNJPXHIAZDHGVGXEUFSMACWOZPURNMSLUXAAJNAMSYBZHKJGFUDEMPGCASWRGMLKQSLGSFVYAAOWZJTQOBIOFTDCPTDIJXZEWW");

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
    msg.setTimeStamp(0.574321335987);
    msg.setSource(60521U);
    msg.setSourceEntity(68U);
    msg.setDestination(56818U);
    msg.setDestinationEntity(160U);
    msg.timeout = 28750U;
    msg.lat = 0.261208413395;
    msg.lon = 0.696644408935;
    msg.speed = 0.907900314403;
    msg.speed_units = 209U;
    msg.custom.assign("WFCNWDBHZDPCCBBSIOEWSHYEVJGLTYORQURPYRXNCGPLJXEQTAHNDPRPVDIJMENKQMDOUXEFSKKKYRUILBLYQNSYGAQFTBVZWTTPRNGVMRSZDBATAP");

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
    msg.setTimeStamp(0.870292311878);
    msg.setSource(3898U);
    msg.setSourceEntity(15U);
    msg.setDestination(35152U);
    msg.setDestinationEntity(40U);
    msg.lat = 0.214529839815;
    msg.lon = 0.889471135379;
    msg.z = 0.0440525997635;
    msg.z_units = 78U;
    msg.radius = 0.599535629857;
    msg.duration = 374U;
    msg.speed = 0.196491134571;
    msg.speed_units = 105U;
    msg.popup_period = 37099U;
    msg.popup_duration = 51422U;
    msg.flags = 157U;
    msg.custom.assign("MZPARHROCIFSDDHSNJXQRPBADQMNDPOPJHJIFFWMTLKGSPBOVYJBXVNIKQGHQQEUDOTZYFFBOLHPEXSRG");

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
    msg.setTimeStamp(0.744908822196);
    msg.setSource(8486U);
    msg.setSourceEntity(95U);
    msg.setDestination(58668U);
    msg.setDestinationEntity(172U);
    msg.lat = 0.0531097503029;
    msg.lon = 0.360500383111;
    msg.z = 0.244819231391;
    msg.z_units = 138U;
    msg.radius = 0.908365988781;
    msg.duration = 5985U;
    msg.speed = 0.985627683698;
    msg.speed_units = 79U;
    msg.popup_period = 18114U;
    msg.popup_duration = 29298U;
    msg.flags = 243U;
    msg.custom.assign("OWSMYSPZLQWQPXSSDKZIMDNRLFHXYEXVJNNQRDAOVRVYVVLEUKDNTZIULASUNZBOTJUDSFPV");

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
    msg.setTimeStamp(0.539704381559);
    msg.setSource(63330U);
    msg.setSourceEntity(209U);
    msg.setDestination(39730U);
    msg.setDestinationEntity(82U);
    msg.lat = 0.0309718412271;
    msg.lon = 0.0569704172691;
    msg.z = 0.783169107582;
    msg.z_units = 105U;
    msg.radius = 0.792881445712;
    msg.duration = 7078U;
    msg.speed = 0.302610303141;
    msg.speed_units = 66U;
    msg.popup_period = 17410U;
    msg.popup_duration = 48046U;
    msg.flags = 91U;
    msg.custom.assign("PUICXULFSUYDEJUQSCLEZXKGJBLFLAZFIENTLQBAAIDTNTTQZJCITMMUJQVJANXFRMNPIGYDZHBSBKYABRIWRDVHAHMHXBKKMVJFNXQHUZMCGIPNTSVQIZZVDKIOUWYVXFSYCTGNYMVCVNCLKQ");

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
    msg.setTimeStamp(0.564103484446);
    msg.setSource(41571U);
    msg.setSourceEntity(220U);
    msg.setDestination(44365U);
    msg.setDestinationEntity(236U);
    msg.timeout = 37944U;
    msg.lat = 0.890108698686;
    msg.lon = 0.0832468490181;
    msg.z = 0.268455139862;
    msg.z_units = 107U;
    msg.speed = 0.065433395639;
    msg.speed_units = 108U;
    msg.bearing = 0.782081862111;
    msg.width = 0.50816981191;
    msg.direction = 194U;
    msg.custom.assign("GAFXIBICRATTKLBKWXGDHJGDYWFQYWPLZYZUMQAYOCFMZQXUQCENOIEUVYROWUYPMFHKCCWEJIRCBRXHYVOTHLFSIUZVLNPL");

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
    msg.setTimeStamp(0.438953873796);
    msg.setSource(15667U);
    msg.setSourceEntity(220U);
    msg.setDestination(29767U);
    msg.setDestinationEntity(103U);
    msg.timeout = 37551U;
    msg.lat = 0.834974299645;
    msg.lon = 0.576944768298;
    msg.z = 0.679917023101;
    msg.z_units = 105U;
    msg.speed = 0.20092121954;
    msg.speed_units = 56U;
    msg.bearing = 0.500863080632;
    msg.width = 0.834972564703;
    msg.direction = 161U;
    msg.custom.assign("AXKHAUSKJIYKBCVTQDABNVRJKUHRSDRETKZNLLNJLSGELRNQLHQYCSNUVBTS");

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
    msg.setTimeStamp(0.172541462873);
    msg.setSource(61546U);
    msg.setSourceEntity(26U);
    msg.setDestination(5500U);
    msg.setDestinationEntity(98U);
    msg.timeout = 36632U;
    msg.lat = 0.041447504406;
    msg.lon = 0.336664743442;
    msg.z = 0.10396025487;
    msg.z_units = 140U;
    msg.speed = 0.565623001797;
    msg.speed_units = 115U;
    msg.bearing = 0.363986041755;
    msg.width = 0.25543033704;
    msg.direction = 145U;
    msg.custom.assign("LJJOVCUSNGPPQTMYMSKVZOMXXHSHUIJIEVYCHHAGQITLWMGZQCEFOQFHEBGZFCRMMQWLYAYDNKGLPIYQZWFJDROJTBMUXGEPWABEGMCXUPCVYZTSOURBLYDQQFWVGNFZSTTBVSFJFWRCAXRTKUBPONPXWENKXXTVKKY");

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
    msg.setTimeStamp(0.315373085353);
    msg.setSource(31593U);
    msg.setSourceEntity(1U);
    msg.setDestination(49028U);
    msg.setDestinationEntity(11U);
    msg.op_mode = 74U;
    msg.error_count = 230U;
    msg.error_ents.assign("RXTGCJIMIGNDHLLROIVAKPOCBZCVITLFLPSUIEHSEFTWCXWKDMFXMWLMEJDPQLSXTSGUTQZFTVBRTWYIJFTSGKDWTLBBDMEQPXTKBKZAQELFHQHYPYZKNWZMPJBMJEFBVKNOQXNBZRWOXDJMHARQZONHWGCREEKYLHDAONRUVNRAMCHQOEGRDYUFNYPUVJKXAB");
    msg.maneuver_type = 4066U;
    msg.maneuver_stime = 0.440010203753;
    msg.maneuver_eta = 43444U;
    msg.control_loops = 911982085U;
    msg.flags = 61U;
    msg.last_error.assign("UPOIMPBQEXLXCPBVAXPDQZVYVBAMIWDQXBJKKVUSSQDMORYLNRGEFLMGDFHANZZWIIEINQHLLCMCNETKOHMUNHMZJGOEFWZYWSONKVOAOESMVXTDIRCAVWYYXBHPAPCPTFBTEFQ");
    msg.last_error_time = 0.18046744616;

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
    msg.setTimeStamp(0.828766688378);
    msg.setSource(59683U);
    msg.setSourceEntity(28U);
    msg.setDestination(26708U);
    msg.setDestinationEntity(113U);
    msg.op_mode = 4U;
    msg.error_count = 65U;
    msg.error_ents.assign("AIEEGJYUBJNDWWCYJUACLOWPLUJBQDRRANLQSBLPUNUFAOVCKTCZBQVDJHMPVUFESPBXTYNQZZOMSSICDKLSWKTLOESAPHNNGPAEPHYALRRKXWUXCFVOKRVQLWZOKHIYHQGGPEFZIVWKLSUDHMAWNXOTWZJFLGXQVVQHIGQTGEKXHFDMTSFYMARBGBDNTMMOACGTIEDIZNCWHMCBZGTRFE");
    msg.maneuver_type = 55501U;
    msg.maneuver_stime = 0.216052397667;
    msg.maneuver_eta = 52207U;
    msg.control_loops = 3227448968U;
    msg.flags = 96U;
    msg.last_error.assign("IPZCGPIFFRJEGQSXTNQLTMDMBXOBVMUBCESKMPNFLRPWHERAGNSUUWCSLAOUSQOXOPPMBZUJITWFDZALBJTTYOCVVQYNIZWMTZBXFHGQISAVJYGHCQRBEJCWGYAIJDOADTFVCAIHHWVGKWJKHJDORRWDSKLPQYQAAPYXBYQBMFKWEKZLMLTEVRKACFEEOXXUDHDXTGLNMCKSQHSRKZRYHPIUVCNMDBK");
    msg.last_error_time = 0.329404093082;

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
    msg.setTimeStamp(0.0854634551432);
    msg.setSource(26856U);
    msg.setSourceEntity(236U);
    msg.setDestination(8513U);
    msg.setDestinationEntity(99U);
    msg.op_mode = 64U;
    msg.error_count = 29U;
    msg.error_ents.assign("CQUTLVHXTLHJAKBDHONGQUSHTGBKJQNOXEGOGYCHBGBEUIXJOUVJYKWDVIILSAGNTVPSSCLXQKWLVY");
    msg.maneuver_type = 2821U;
    msg.maneuver_stime = 0.579686552486;
    msg.maneuver_eta = 38582U;
    msg.control_loops = 3224603139U;
    msg.flags = 242U;
    msg.last_error.assign("RMFRKWDWYDWQGAQXICOVNNEESLNKNMLDPAFDUV");
    msg.last_error_time = 0.517534415705;

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
    msg.setTimeStamp(0.650570049763);
    msg.setSource(16864U);
    msg.setSourceEntity(34U);
    msg.setDestination(23873U);
    msg.setDestinationEntity(197U);
    msg.type = 19U;
    msg.request_id = 14527U;
    msg.command = 26U;
    IMC::FollowTrajectory tmp_msg_0;
    tmp_msg_0.timeout = 61691U;
    tmp_msg_0.lat = 0.215777181849;
    tmp_msg_0.lon = 0.262633015366;
    tmp_msg_0.z = 0.757457166003;
    tmp_msg_0.z_units = 226U;
    tmp_msg_0.speed = 0.257117692821;
    tmp_msg_0.speed_units = 169U;
    tmp_msg_0.custom.assign("SFOJTOSOVWZQBEJFGQSPMFDEHNDYUYXBZGLEJRRGJJMUHKKAYVFQIKAUCARVYZISFJMLXUHIPOCUQMPHNQXXTXAKUXNTHLRJTTWRESHIGZNYAENHOIOAQLZEUIDYDLFWQ");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 13694U;
    msg.info.assign("OXFQVSFWBIASWYIUPIVLWEUCVMZRKJPYGFPWOEACKHHRBPOQQOIVTAJKRPLSOEGMPSEMUDJICFYFZRCQWDAHHEDDOWXUUPZDBRBEOTBWLKVLAHNWANIKKGHZMCQKZTLGYJMRCICDYJMMXYQDRXTFNAHGGTMHTXONTAGNNBWJLVEYNKOTMBGPTSEWJBBBQDDVSRKIVTFIXZXJQZZSCENQILFCULYLJSOXRVUGGMCYPRF");

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
    msg.setTimeStamp(0.291270686005);
    msg.setSource(432U);
    msg.setSourceEntity(59U);
    msg.setDestination(33673U);
    msg.setDestinationEntity(145U);
    msg.type = 193U;
    msg.request_id = 34413U;
    msg.command = 166U;
    IMC::FormationPlanExecution tmp_msg_0;
    tmp_msg_0.group_name.assign("AWTPFZCOOLBRVAIDHXDENOBEJXKRNVEFGHJERXDRJIFVTJURPSWAFDMZPEGSOILLCTQFKBMKZMXYYGZLSNPVAXTGLFZVCFYODIRJTHHYWKWZJCZBHPEFAWDSXZWUYAWIHBEOARXYSXINPUYEBKBYNNGCWMMUOLUBTSPNLJRIQVLQPNDCYGQ");
    tmp_msg_0.formation_name.assign("CRFNMLZXFTEKPPKNJCREKAHWLBIIDGBILALHHTQJTCOKBVOFSHSQJNLTZMSFBAIKUJNIQJUIMPDSCRATZQGCSSMVYEUYRVJNWJJGAQICESRUREACHJTWPLEOMBPHYHZYZNRLIEVGNGVBKMXPCZLLWGDZBPXMFLAWROQVABTXWDGOOVDYHVWIFQDRKTNZJYOXGXSPY");
    tmp_msg_0.plan_id.assign("YYRSKNDVIRVIFSKJEQJBHFHLEQPMLPORRQUJASXDHETKLPJDZHDWEBGVCTVUPMTIITPHLIFFZVCFJMWOJAYZGCGNIXZJTWKCSYDBUHMTZRYGYTARUKKBIGKNQAWPIBZFEOVZLRSNGBNQOKGMHOJWFFJNCUDFPOAALXGABMQXKVFXPL");
    tmp_msg_0.description.assign("OOJEUVFRBJIKJOCLOYTDQLTEOXSMWOIFUPFJPYIWXSWHLGBEOKSGEHMSUKCGDPNDVIMFQNNIGOVANDFBNTKBAQPRRGSMQXAMCCDIMLCRTXCMXBAOAGKWVVVFDYIXUWMRVKZJUWPJKBDIESQJAVACKRQEJVRRUJAYCPXEGLUQLLYQATGVTXEWQYXHZZUWEPQOTYGBKHNDSGBDYMHZYNCEFJZKFTZPISZPHYTHUZFZMRBBHAZL");
    tmp_msg_0.leader_speed = 0.269562621248;
    tmp_msg_0.leader_bank_lim = 0.758033084155;
    tmp_msg_0.pos_sim_err_lim = 0.697399944377;
    tmp_msg_0.pos_sim_err_wrn = 0.385152861909;
    tmp_msg_0.pos_sim_err_timeout = 39737U;
    tmp_msg_0.converg_max = 0.628446363707;
    tmp_msg_0.converg_timeout = 1569U;
    tmp_msg_0.comms_timeout = 8672U;
    tmp_msg_0.turb_lim = 0.300677055065;
    tmp_msg_0.custom.assign("EGUXBMVWAPCWATAXQZLOVVHUSFSRQJUNEANMECJHRCJTFUOVHOBDZMZRXRBAMPLFVTMQFKKZUSSIQNRIJUNEIKYRPHFFKIOLVKLUINWNPMJDDSBSPAZVJNITCPYWZLSODEHZDGHHWKCIWCGBBYCEUGCRQJXUPGZYWPTOAXNIXOGDHYCHSVJMKBGGQYDAPTLLMXSDOTEGRQEWFYTMQEMPYXKYWOJSGIFUKBQJHIWNFDYKFVL");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 6664U;
    msg.info.assign("VKPJFNXNASSHTMBMOWYUBHKKTXHSLPZGOSGJHEIFLRLQZXDABCIFIWHTAQCNEAMOGWLESGZZTLRMYJEYNPSYBLVTWROFOUPULXFGWHZUOHVAGKIDHAYE");

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
    msg.setTimeStamp(0.355040163264);
    msg.setSource(18851U);
    msg.setSourceEntity(181U);
    msg.setDestination(51251U);
    msg.setDestinationEntity(115U);
    msg.type = 17U;
    msg.request_id = 63080U;
    msg.command = 42U;
    IMC::LowLevelControl tmp_msg_0;
    IMC::DesiredHeading tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.0921127241052;
    tmp_msg_0.control.set(tmp_tmp_msg_0_0);
    tmp_msg_0.duration = 56789U;
    tmp_msg_0.custom.assign("ZXGUCVPUVRXZGCUMXWZXBZHGBPYQDNOGEFNYNAVAZYPQAMYGCKLPBQLZTLNSQYHWDETVWIIIHFEBLFIMPFAOJWVYMJAKFVHSCOLPQCKWJRGGREKHNSVBODL");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 53331U;
    msg.info.assign("CDMCKRMGWBHVWNJGBXMHATOKGCXAKZTFRLOBENFCKDAHPDQEWGENBUZCSVZZQGDYUOIRZVLYRRUFGGIROFHQKVPPICLTUAGJMSYAYCXHSONIIPTHULHRCXWOCWQFKJEHATVLBFQIYEQKNLDUKOMXERRSBUJITENJXEVWGDNUNMQVD");

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
    msg.setTimeStamp(0.126329835487);
    msg.setSource(63233U);
    msg.setSourceEntity(237U);
    msg.setDestination(13565U);
    msg.setDestinationEntity(163U);
    msg.command = 60U;
    msg.entities.assign("KIIOVVQVAJRNEIMWSNZXCSHOTUXDUGNBLETJJIHYAQNAZYLNOONQPQJEJTPMGTGALUNPCCUTAOUKIWIBROLKQPYPCYGJKSOWWLQKDHOVFVCZGHGGMJJCXUVQKHUUHKWAFJPZXPSXFDTCLFBELZRFBEDDNDUMQEHWYRSWGTZZTWSJLBDEDDN");

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
    msg.setTimeStamp(0.321162844235);
    msg.setSource(13139U);
    msg.setSourceEntity(214U);
    msg.setDestination(1244U);
    msg.setDestinationEntity(196U);
    msg.command = 208U;
    msg.entities.assign("TKWXLIJPSITZXHIQMTFYOROUIGPLMUNAHWVWGRXGBDPGFCUZVZSAELKKVZMDBSFVDMFCNSOGDRILMTEJVNPDKRTXNCAKEJUHSXMWOGKZLKACOWIHDEAGRVVRLDJQQYY");

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
    msg.setTimeStamp(0.191369136859);
    msg.setSource(16731U);
    msg.setSourceEntity(217U);
    msg.setDestination(31548U);
    msg.setDestinationEntity(158U);
    msg.command = 140U;
    msg.entities.assign("QAWPRAIECJXFQJABHLWFCEWAQEVUSKFKMTMUJLSHDDGGZYTHJEFOPCVSYFBPAYVDHMGNJGPSFRZGKQNYUSNLYERRDKQZUVZOYDMIOJNRPBBVBTIDWJKXPJPDQZBLSHPIRFZBKLMVDSTIAWXOEEONGNGKDGKEYWOVUUXBRQAWACOMICHCLUCIYXBK");

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
    msg.setTimeStamp(0.200270970668);
    msg.setSource(11284U);
    msg.setSourceEntity(252U);
    msg.setDestination(47557U);
    msg.setDestinationEntity(230U);
    msg.mcount = 129U;
    msg.mnames.assign("GSMQOSXMRHWJZSTGWZNFLLWVEHXUKQOWUBKPSOVYTNOBRIVPUECOXRFWXJZHUNTTYGHNBDXKPMPRIVEJJSCLFLFTDRKJYWNLCKWKSAAHOJGZSOECMDLMDCUVZJGWZRYKSDAOPDXGREMX");
    msg.ecount = 176U;
    msg.enames.assign("RCGNCBBPVGVDDOCUARWHMKLJIMWYMBZOLZKXLUNIQYNWJLOLVGEEJXSLDGJKCYSFBCF");
    msg.ccount = 224U;
    msg.cnames.assign("ZIMLAOBVIXFFRGFSXVCAYNERNYDNHJDZPIZZLVKRIYUCMDYWTNVKABHMGTYPCOSONEQVYQHAQAYOHFJXFTKUEMNJEAJWQPWTHPHFCLDETSSDEWZGQDMFOCPGKYNNXLBLORLRVORTUWWDKTXJBT");
    msg.last_error.assign("RZYFWZYUFCQIBTLFDJNESMECPQKGFESSVSGBDFLZGLZLMNAVYVVXYTKKSOSWJCGITKQZXYCUZPAPRQR");
    msg.last_error_time = 0.621130950448;

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
    msg.setTimeStamp(0.878065602434);
    msg.setSource(26375U);
    msg.setSourceEntity(168U);
    msg.setDestination(29278U);
    msg.setDestinationEntity(123U);
    msg.mcount = 253U;
    msg.mnames.assign("HQXJHFKAVJYUBIMGXQTEHHYAEBNVMOQZKMBYGDMNSGGFJLOTAXEKXMIHHDEIPWEVYQYAVJZPOWSFNWEYWNRSUJOUYKTOUBCJDZNFMIMVIBFXXYEOXYANNMVXISREPBUSKDZTCFLLEUEUBRSKLBFKWONALWLVIRPOTPCDFGYWRVDGHCQZFDHACIWQJGZRCRUASHIFGTCSUWPRNMXQUQVIKGB");
    msg.ecount = 177U;
    msg.enames.assign("DXEELOOLXPZWNYBWMEUEXZRSJVQRLFKECMDWWZ");
    msg.ccount = 181U;
    msg.cnames.assign("NOLMLEZSJGRXDQBLOJZQOYLUAGXYEFNYGYDKZUEFPKIWXHWKZBRCBANRGKUCYHSWWEEWRMTNELAMCBVIXMINUXDRGYVEXGIHRHOVOQHUCSVEDJTXGTJCDTUUKSLALBMVFIARCPKMCFJPBNNA");
    msg.last_error.assign("KBFGMRTRDLXAXEICMSUHVVWUXQGNRRWKJFPATNSBMKYRHOOYYZKWMSBDIEFPGTDKBTCVUCOUHTQJDNURQJRZOLMSJHEEHHAUDHNIEYUWXGVTDIJAVCBLKQXCMZNGJOERLIRBPLHGWSZKPVFYWPEXZRQXOXZNDNKLVOPUWTQQLYAAIFLQWTUWJABKBDDSIPYC");
    msg.last_error_time = 0.675665281847;

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
    msg.setTimeStamp(0.106455708077);
    msg.setSource(60088U);
    msg.setSourceEntity(217U);
    msg.setDestination(1304U);
    msg.setDestinationEntity(39U);
    msg.mcount = 161U;
    msg.mnames.assign("TXLGOFMLWLCJBASITSORETHMPTEJQLRBNEGPQAIOODZQNGPFRCDKS");
    msg.ecount = 45U;
    msg.enames.assign("SXPGGNDAQZVHFSJKDXLXPDCSMFNMQTBJHEYPAJAPTLOOFEXSSLWTPVKOSGYUIGJQWUQHMLMGCXIKXNYCWRRPONFKYXZTBNJTGYMRZLOAMLVEFPGBEFEAEKIRIIKQUN");
    msg.ccount = 74U;
    msg.cnames.assign("PGPGMMULAZIDFKNSTDXZQBUNBEKXUJEYZETNJNYOCYA");
    msg.last_error.assign("ZGQOAAWCWBPJZEXBBVPEDTGRSPBPZYWOEVRICBHTYNMHKHZPLPQHKKDKNCMUVIVUOQGAMLNIQFXOYPDXTGTSFIGHEQBSNVSYRSPLXLJEWVRUJJUORZWCNMIKVRSNRAEYVFKYFCFEPDLZUJCWRBIJKLMMNKGASEDQFALS");
    msg.last_error_time = 0.41980511136;

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
    msg.setTimeStamp(0.948481168491);
    msg.setSource(52431U);
    msg.setSourceEntity(229U);
    msg.setDestination(33152U);
    msg.setDestinationEntity(220U);
    msg.mask = 78U;
    msg.max_depth = 0.159961861199;
    msg.min_altitude = 0.0542909749604;
    msg.max_altitude = 0.734920220829;
    msg.min_speed = 0.554467542298;
    msg.max_speed = 0.0442289624505;
    msg.max_vrate = 0.0342303036576;
    msg.lat = 0.548809017118;
    msg.lon = 0.989261820796;
    msg.orientation = 0.574733492673;
    msg.width = 0.243557742843;
    msg.length = 0.0953594278011;

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
    msg.setTimeStamp(0.960959781229);
    msg.setSource(33638U);
    msg.setSourceEntity(174U);
    msg.setDestination(20585U);
    msg.setDestinationEntity(82U);
    msg.mask = 2U;
    msg.max_depth = 0.397072764324;
    msg.min_altitude = 0.315225215954;
    msg.max_altitude = 0.673448058328;
    msg.min_speed = 0.717802890453;
    msg.max_speed = 0.8524800298;
    msg.max_vrate = 0.458411221585;
    msg.lat = 0.643346582731;
    msg.lon = 0.905904987301;
    msg.orientation = 0.267279251398;
    msg.width = 0.195597224386;
    msg.length = 0.821574235629;

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
    msg.setTimeStamp(0.277408509187);
    msg.setSource(53189U);
    msg.setSourceEntity(65U);
    msg.setDestination(23444U);
    msg.setDestinationEntity(143U);
    msg.mask = 173U;
    msg.max_depth = 0.0572335941106;
    msg.min_altitude = 0.644119793248;
    msg.max_altitude = 0.605956927363;
    msg.min_speed = 0.143668827638;
    msg.max_speed = 0.586216989325;
    msg.max_vrate = 0.0100358730119;
    msg.lat = 0.95013940646;
    msg.lon = 0.941619793791;
    msg.orientation = 0.616003694185;
    msg.width = 0.062517920991;
    msg.length = 0.0334784438414;

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
    msg.setTimeStamp(0.306229037449);
    msg.setSource(35072U);
    msg.setSourceEntity(184U);
    msg.setDestination(22944U);
    msg.setDestinationEntity(173U);

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
    msg.setTimeStamp(0.0133062199277);
    msg.setSource(53333U);
    msg.setSourceEntity(18U);
    msg.setDestination(1266U);
    msg.setDestinationEntity(142U);

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
    msg.setTimeStamp(0.154465845506);
    msg.setSource(47765U);
    msg.setSourceEntity(6U);
    msg.setDestination(29996U);
    msg.setDestinationEntity(167U);

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
    msg.setTimeStamp(0.829471595863);
    msg.setSource(13973U);
    msg.setSourceEntity(151U);
    msg.setDestination(43280U);
    msg.setDestinationEntity(185U);
    msg.duration = 23451U;

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
    msg.setTimeStamp(0.805593469351);
    msg.setSource(24328U);
    msg.setSourceEntity(176U);
    msg.setDestination(19183U);
    msg.setDestinationEntity(126U);
    msg.duration = 64117U;

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
    msg.setTimeStamp(0.264412933043);
    msg.setSource(6704U);
    msg.setSourceEntity(31U);
    msg.setDestination(60952U);
    msg.setDestinationEntity(44U);
    msg.duration = 35041U;

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
    msg.setTimeStamp(0.546559809801);
    msg.setSource(30570U);
    msg.setSourceEntity(128U);
    msg.setDestination(24593U);
    msg.setDestinationEntity(86U);
    msg.enable = 201U;
    msg.mask = 2933228280U;
    msg.scope_ref = 2474424912U;

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
    msg.setTimeStamp(0.508501588618);
    msg.setSource(3311U);
    msg.setSourceEntity(118U);
    msg.setDestination(5159U);
    msg.setDestinationEntity(107U);
    msg.enable = 65U;
    msg.mask = 1771312083U;
    msg.scope_ref = 2645258991U;

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
    msg.setTimeStamp(0.920506868844);
    msg.setSource(52593U);
    msg.setSourceEntity(242U);
    msg.setDestination(38590U);
    msg.setDestinationEntity(93U);
    msg.enable = 244U;
    msg.mask = 3480010671U;
    msg.scope_ref = 2379823347U;

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
    msg.setTimeStamp(0.345452800792);
    msg.setSource(6415U);
    msg.setSourceEntity(224U);
    msg.setDestination(35466U);
    msg.setDestinationEntity(215U);
    msg.medium = 64U;

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
    msg.setTimeStamp(0.055729726983);
    msg.setSource(51240U);
    msg.setSourceEntity(250U);
    msg.setDestination(12080U);
    msg.setDestinationEntity(218U);
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
    msg.setTimeStamp(0.40227175228);
    msg.setSource(42185U);
    msg.setSourceEntity(165U);
    msg.setDestination(2850U);
    msg.setDestinationEntity(49U);
    msg.medium = 246U;

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
    msg.setTimeStamp(0.970501578964);
    msg.setSource(33717U);
    msg.setSourceEntity(221U);
    msg.setDestination(31577U);
    msg.setDestinationEntity(254U);
    msg.value = 0.220494224444;
    msg.type = 93U;

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
    msg.setTimeStamp(0.301740735978);
    msg.setSource(26843U);
    msg.setSourceEntity(75U);
    msg.setDestination(24992U);
    msg.setDestinationEntity(205U);
    msg.value = 0.844833548874;
    msg.type = 146U;

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
    msg.setTimeStamp(0.0715534370611);
    msg.setSource(55334U);
    msg.setSourceEntity(97U);
    msg.setDestination(13079U);
    msg.setDestinationEntity(185U);
    msg.value = 0.930509626086;
    msg.type = 177U;

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
    msg.setTimeStamp(0.386696705555);
    msg.setSource(48291U);
    msg.setSourceEntity(193U);
    msg.setDestination(1958U);
    msg.setDestinationEntity(77U);
    msg.possimerr = 0.106050065151;
    msg.converg = 0.676161693375;
    msg.turbulence = 0.791177667726;
    msg.possimmon = 73U;
    msg.commmon = 138U;
    msg.convergmon = 243U;

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
    msg.setTimeStamp(0.599266303036);
    msg.setSource(3797U);
    msg.setSourceEntity(18U);
    msg.setDestination(54479U);
    msg.setDestinationEntity(226U);
    msg.possimerr = 0.671966592755;
    msg.converg = 0.092241350916;
    msg.turbulence = 0.380087644306;
    msg.possimmon = 69U;
    msg.commmon = 186U;
    msg.convergmon = 48U;

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
    msg.setTimeStamp(0.333491101398);
    msg.setSource(10992U);
    msg.setSourceEntity(217U);
    msg.setDestination(44897U);
    msg.setDestinationEntity(31U);
    msg.possimerr = 0.81281661296;
    msg.converg = 0.124836308414;
    msg.turbulence = 0.16526344495;
    msg.possimmon = 141U;
    msg.commmon = 186U;
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
    msg.setTimeStamp(0.854094996631);
    msg.setSource(20400U);
    msg.setSourceEntity(249U);
    msg.setDestination(30191U);
    msg.setDestinationEntity(66U);
    msg.autonomy = 169U;
    msg.mode.assign("EXDAWRKVLDLBPSZCQROMHYPFJFUWLMQHZWJUXDBWPQTPUFAZRQNCHXHAYSMQPTIECRDQJYEPSXZTALBSRQWXZPOKTEXJSNHDAJAZOVINNNTGMIOXUHWXURFXKKVUCVBIGYGHJFBZBTOKYMYRSYAGVRQTIWWIKY");

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
    msg.setTimeStamp(0.0599554263324);
    msg.setSource(21361U);
    msg.setSourceEntity(93U);
    msg.setDestination(60254U);
    msg.setDestinationEntity(7U);
    msg.autonomy = 72U;
    msg.mode.assign("AOSVFNFGXZMFCFQPDSDLTKDFTNZWYAGJVVOAQHVADZWIEIERGBAJPJYNXNKNXXQRFLQMZKMDATNMLJIQHIOLIQPVGWZCYEKYHEDWNRHSGAPRBHYZPREKBIGUFCPRSMJQGOWTOBBOLUILUAGJMYPQCAJYCNPJIUXKHITEFVSOLFOVTBSMKREWNCMYMXCLJPEDUUOHLZBDSSQZVSWCTRBH");

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
    msg.setTimeStamp(0.296282586219);
    msg.setSource(13531U);
    msg.setSourceEntity(58U);
    msg.setDestination(60426U);
    msg.setDestinationEntity(243U);
    msg.autonomy = 202U;
    msg.mode.assign("UWYYNMMUJYDARPDTGCSOUMXVUCWVKCIMQXIKTWEWJFKBUXSJMUHNJYSHZXSJGTDEQYOVJPKMGDEEKOAHNMBTPCLBRX");

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
    msg.setTimeStamp(0.522305537781);
    msg.setSource(21497U);
    msg.setSourceEntity(152U);
    msg.setDestination(54642U);
    msg.setDestinationEntity(185U);
    msg.type = 32U;
    msg.op = 127U;
    msg.possimerr = 0.10365789495;
    msg.converg = 0.846659768346;
    msg.turbulence = 0.279285835241;
    msg.possimmon = 23U;
    msg.commmon = 33U;
    msg.convergmon = 117U;

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
    msg.setTimeStamp(0.209028901877);
    msg.setSource(56108U);
    msg.setSourceEntity(182U);
    msg.setDestination(18217U);
    msg.setDestinationEntity(52U);
    msg.type = 128U;
    msg.op = 33U;
    msg.possimerr = 0.591922982954;
    msg.converg = 0.991518286353;
    msg.turbulence = 0.216068382578;
    msg.possimmon = 91U;
    msg.commmon = 213U;
    msg.convergmon = 102U;

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
    msg.setTimeStamp(0.695853090768);
    msg.setSource(25705U);
    msg.setSourceEntity(23U);
    msg.setDestination(17389U);
    msg.setDestinationEntity(165U);
    msg.type = 103U;
    msg.op = 254U;
    msg.possimerr = 0.788022190061;
    msg.converg = 0.614734769063;
    msg.turbulence = 0.775559701904;
    msg.possimmon = 221U;
    msg.commmon = 101U;
    msg.convergmon = 41U;

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
    msg.setTimeStamp(0.988999091964);
    msg.setSource(17363U);
    msg.setSourceEntity(1U);
    msg.setDestination(10431U);
    msg.setDestinationEntity(253U);
    msg.op = 253U;
    msg.comm_interface = 201U;
    msg.period = 18173U;
    msg.sys_dst.assign("QNVHDWWAFHJNPKSEXVFPUDMBFJIWCIFNXZJUTSTDVTKQGEPRZJFVXWGOBVEYAUVXEBSLDIRTOMZAERPOKGNINYLTCRBMQWKATYSPLOMOYCONRLSXVKATBWCTCEQZACNQKIIYOQRHGXUZWSH");

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
    msg.setTimeStamp(0.940883960213);
    msg.setSource(58054U);
    msg.setSourceEntity(30U);
    msg.setDestination(63626U);
    msg.setDestinationEntity(105U);
    msg.op = 136U;
    msg.comm_interface = 158U;
    msg.period = 11817U;
    msg.sys_dst.assign("NDTHFSUYTAVXWRIRPEHQCQOGFQXSOEAIIFBGBUYGJTMMPEWPWPCIEANJNCWHYUYWHQSYZFFVQNCNCTHOGMULDVXMPHYZHVOOFSZXXNBRZREARAMNJDKJRLLEQXZZGAUSCLCGYFBNXPLKABVQBCWYPHPZDTQLKFLTZRDMVQAKGMDMDFJBJPUURJJWCDZCGSMUWXSKVHHUKZIBQIFES");

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
    msg.setTimeStamp(0.441376510068);
    msg.setSource(6117U);
    msg.setSourceEntity(184U);
    msg.setDestination(38481U);
    msg.setDestinationEntity(182U);
    msg.op = 31U;
    msg.comm_interface = 72U;
    msg.period = 2480U;
    msg.sys_dst.assign("MKLZGPNVTYCURAGMTOKOVTDGZHPLODWDUMUSD");

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
    msg.setTimeStamp(0.96501307331);
    msg.setSource(915U);
    msg.setSourceEntity(11U);
    msg.setDestination(45403U);
    msg.setDestinationEntity(102U);
    msg.stime = 2450473140U;
    msg.latitude = 0.256288523518;
    msg.longitude = 0.0882011505023;
    msg.altitude = 60181U;
    msg.depth = 39288U;
    msg.heading = 41277U;
    msg.speed = -11412;
    msg.fuel = 105;
    msg.exec_state = -103;
    msg.plan_checksum = 911U;

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
    msg.setTimeStamp(0.723228751928);
    msg.setSource(14331U);
    msg.setSourceEntity(22U);
    msg.setDestination(40999U);
    msg.setDestinationEntity(199U);
    msg.stime = 3744915669U;
    msg.latitude = 0.718283628379;
    msg.longitude = 0.0425736717885;
    msg.altitude = 47060U;
    msg.depth = 1821U;
    msg.heading = 37782U;
    msg.speed = 12025;
    msg.fuel = 92;
    msg.exec_state = -62;
    msg.plan_checksum = 4U;

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
    msg.setTimeStamp(0.768638877054);
    msg.setSource(13929U);
    msg.setSourceEntity(210U);
    msg.setDestination(19263U);
    msg.setDestinationEntity(220U);
    msg.stime = 4188376266U;
    msg.latitude = 0.415952221654;
    msg.longitude = 0.826191316868;
    msg.altitude = 27564U;
    msg.depth = 16668U;
    msg.heading = 12196U;
    msg.speed = -3729;
    msg.fuel = 1;
    msg.exec_state = 89;
    msg.plan_checksum = 41373U;

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
    msg.setTimeStamp(0.666068780898);
    msg.setSource(44962U);
    msg.setSourceEntity(84U);
    msg.setDestination(5727U);
    msg.setDestinationEntity(106U);
    msg.req_id = 54635U;
    msg.comm_mean = 64U;
    msg.destination.assign("JWISTNLADUJRQDWDAWATHIKUKKWNECMHJDEHLUGWBGLHESKANLYCPDCBGYHGOGIKRZKS");
    msg.deadline = 0.35095425784;
    msg.range = 0.203732772364;
    msg.data_mode = 10U;
    IMC::ReportControl tmp_msg_0;
    tmp_msg_0.op = 186U;
    tmp_msg_0.comm_interface = 16U;
    tmp_msg_0.period = 21082U;
    tmp_msg_0.sys_dst.assign("EVCHPAMKXAGCBOMUNJPBNDTBYLMHDQBDKJWELFVGLWRPGKKJIEJOGCQVTGKSOZDUEOITPWFNHRGSJSQYLYHACAZDNTSWWRLBPZASDABFEOUTJRNQVSXZTFLVQXPYQVIWGUPIIYNQOOIMMLQRNQCJKRMOGGXAMKHBSYOTCELPHJXETFCTBVIHLFKIXSXVXORTDEMAUURWJXZCHCVHYUUYCINPFWJDNFZZZYYRVZQMXHSKZGEBRDUAKNESD");
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("AHYRKDZVYPAPWMUXHNGRWQSEQNOJYZNZADHGIJIUMRCOWCNTJDGLRSJHBSYKVNOWIELQYFBIHIQTMWQCPFCEDMKEETUJTQRBXFGBXUMIXEGUOTWEIGZOZIFEFQXBLAVCHGWFEHVKMKVNIWKUHAI");
    const char tmp_msg_1[] = {-104, 107, 44, 86, 15, -124, 124, 105, -93, -22, 112, -17, -81, 95, -47, 55, 5, -98, 1, -76, -85, -66, -41, 14, 98, -49, 113, 15, -74, -29, -45, -10, -47, 52, 4, -8, 68, -126, 96, -49, 88, -96, -123, 106, 75, 123, -94, -125, -47, -9, 77, 40, -68, 8, -23, -41, 75, 52, 118, -64, 57, 53, 87, 76, 46, 86, -20, 125, -58, -63, 75, 76, 73, -101, 54, 73, 81, -3, -7, 22, -45, -100, -54, -76, 115, -32, 78, -112, -98, -70, 35, 83, 90, -29, 80, 117, -73, 108, 53, 0, 81, -23, -81, 108, 103, 44, -9, -29, 101, -58, -8, 36, -112, 97, 116, 14, 55, 84, 27, 24, -91, 81, -36};
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
    msg.setTimeStamp(0.551029981133);
    msg.setSource(29005U);
    msg.setSourceEntity(235U);
    msg.setDestination(14394U);
    msg.setDestinationEntity(34U);
    msg.req_id = 1123U;
    msg.comm_mean = 6U;
    msg.destination.assign("DLGOVHSNKQZKJAJWPLTQLERHIKWDYNZQJXPGHFISSFEKCOUMBRSWTQGERFNHQUMWSFGUHUCJJEOKVVXDZEENCTESDZABICIXZLBADEOOIDOZCXSKFPMUXAIJJANOLBWCRHVXATFRVMWPCXAHKUTDWYCFRHESYYCQQXPBAKOBBNVNRDIYWRQGUZIQJPINGTPVZMROXAFVGKBB");
    msg.deadline = 0.726224015093;
    msg.range = 0.96223911306;
    msg.data_mode = 120U;
    IMC::GpsFixRejection tmp_msg_0;
    tmp_msg_0.utc_time = 0.216003275244;
    tmp_msg_0.reason = 249U;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("HJOKLMFBCYLBVGMICVFQJTTFHNGLFTAWDPMNRNMKULEKFNKRRJWWSTQISUCNXCGESUWYRZVPCCIUDQFYRRYVYXSAXUXTGWSODPKIAFQBSTOIVUAHGHHCPOEZGRPPABBDRKLEJBXBZJELUEUWCDMOJOQYHPZOHXMSLEVMIVQYDCIVHNPLQJMJLGPUNW");
    const char tmp_msg_1[] = {37, 24, -41, -68, -38, -71, 125, 82, -102, -101, -22, -15, 68, -92, -106, -32, 78, -17, 91, 62, -48, 76, -46, 123, -104, -123, -124, 77, 105, -16, 106, 49, 81, 44, -11, -12, 109, -1, -59, 32, -68, 43, 90, 6, 46, -83, -50, -128, 16, 28, 5, -37, 67, 35, -6, -2, 0, -122, -120, -29, 101, -114, 16, 76, -112, 114, -23, -128, 26, 104, -64, 94, -26, -64, 32, 56, 23, -118, -73, 40, 60, -33, -55, -79, 111, -63, 93, 60, 110, 98, -117, -36, -1, 95, -22, 3, 39, 117, -82, -51, -83, 110, -6, -85, 5, -74, -41, 3, 72, 16, 103, 72, 28, -114, -92, -22, -77, -58, 7, -109, -73, -58, -50, -4, 31, -66};
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
    msg.setTimeStamp(0.913253365831);
    msg.setSource(37793U);
    msg.setSourceEntity(117U);
    msg.setDestination(38583U);
    msg.setDestinationEntity(23U);
    msg.req_id = 20123U;
    msg.comm_mean = 32U;
    msg.destination.assign("ESHDVFUZCBAXFNTHGKAWQEPTBZNBUUEAGDJSWLOTBNVNJJYKHRNXJDJFLSFAALRZXJXMBOZQULDGIHUNAXPDTSJRWBFHFZZMOTOELHKVSTWYPGOKMHTXVCCWYPAYGGBUVOHTUBJHQOZYXRVQTPPPRSEUW");
    msg.deadline = 0.18720403768;
    msg.range = 0.739860358964;
    msg.data_mode = 225U;
    IMC::EulerAnglesDelta tmp_msg_0;
    tmp_msg_0.time = 0.582979059969;
    tmp_msg_0.x = 0.789461531742;
    tmp_msg_0.y = 0.514727710533;
    tmp_msg_0.z = 0.685343138427;
    tmp_msg_0.timestep = 0.978125254357;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("IEZFBMZNMTKCOFVILF");
    const char tmp_msg_1[] = {100, 79, -70, 108, -60, -112, 51, 34, 95, 107, 112, -76, -1, 99, -100};
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
    msg.setTimeStamp(0.0495431572429);
    msg.setSource(57775U);
    msg.setSourceEntity(190U);
    msg.setDestination(33614U);
    msg.setDestinationEntity(203U);
    msg.req_id = 37993U;
    msg.status = 70U;
    msg.range = 0.189009821834;
    msg.info.assign("GLQZKRREFKPPPO");

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
    msg.setTimeStamp(0.394114857022);
    msg.setSource(4970U);
    msg.setSourceEntity(161U);
    msg.setDestination(52835U);
    msg.setDestinationEntity(167U);
    msg.req_id = 33540U;
    msg.status = 184U;
    msg.range = 0.151544122715;
    msg.info.assign("EZNGMXCPOEHFAXULAYHDBLRAQCSTRKOHJEACZDYUBGVYPSDIGFNIQDBTGOETSNVRZGVNMSOBUFJKAQYLHYASMWJ");

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
    msg.setTimeStamp(0.585763451224);
    msg.setSource(20277U);
    msg.setSourceEntity(89U);
    msg.setDestination(18108U);
    msg.setDestinationEntity(191U);
    msg.req_id = 18277U;
    msg.status = 66U;
    msg.range = 0.613761453318;
    msg.info.assign("CHPOZMCMJKAHSFALOFXIYDRXYBPUAHANSLZWLDBNPKBSSBSZTQJDAGMVICBOMHQFGCOZSYI");

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
    msg.setTimeStamp(0.446648916503);
    msg.setSource(7933U);
    msg.setSourceEntity(9U);
    msg.setDestination(22429U);
    msg.setDestinationEntity(146U);
    msg.req_id = 34866U;
    msg.destination.assign("UMUIHEZNJRLHPLSPABWXJTZMYNUBRJSZCOXAGEVWAVCSBPTONJHZUCQIOGPTUEDWWKJOZRLFNPYXEUAHQQNKUIBSLMKPKOLCXXMGBQNGETHFEVWJIXYSRGAXYWDMKFSGITAHYDHCOLQAILNZBNRYISGKTENGVSGKVXSIETRFCPMIRRAOLBZJIZWCMVFPDDHZJCBLJLFDEOFTORVAFXBXUVRMAPJVVYCYTZQHSCWH");
    msg.timeout = 0.8707125823;
    msg.sms_text.assign("RYDWSOYEKLAHXFBUWCMFLQKDZUGYLZVVUAQLMXTANRCSRXRKSJSKTWPFDZLJJJNFIYEXSFZZXIPGFMNVENJLRMWFYHUGHZSNCBYFECUJAOGJVPEHAGQBUCYNPLOWXWWO");

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
    msg.setTimeStamp(0.368368198296);
    msg.setSource(60176U);
    msg.setSourceEntity(197U);
    msg.setDestination(39990U);
    msg.setDestinationEntity(164U);
    msg.req_id = 30417U;
    msg.destination.assign("NGHMHNIGZKLSPYJODOUOQCLHYSBZZPXHBSRWEHDUIWLGKVNVXBHZVHITYUCYOVBDAPGZBALFBTWDWDPJMKXZQSSAXFRGMVREAMBCVLADFCQP");
    msg.timeout = 0.841240987616;
    msg.sms_text.assign("FOLWTXJWAUYSLJPRLXHIWNNOIRNOPHWGCYDQBPCDRWHZVAPJNQRAOKHQJKSDKGTLCDEBKYTIHMSISNSTGNFXYGBFKRUQNKBOFFHJMMDAMHLLHXXQKZMBZEIGGTMEUUXUVDPIGVFCUDMPGLAAECENIWCVOKAXJUVQZYYZBTSOMIQYMRQ");

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
    msg.setTimeStamp(0.603075822339);
    msg.setSource(51476U);
    msg.setSourceEntity(100U);
    msg.setDestination(51714U);
    msg.setDestinationEntity(36U);
    msg.req_id = 61169U;
    msg.destination.assign("RHBRZLIINZKKPUJMQKXBRBXCJPRUQOBFNKRPIJASJCAEDFETCANEUNSFF");
    msg.timeout = 0.978662676509;
    msg.sms_text.assign("DYQPOJZBEBHXYDFIGHMZKAZTFXINKIBTUETNLWVXYMFVQGGBJLYLPXBVDRYUNPRFPPQCMDRXI");

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
    msg.setTimeStamp(0.643702991656);
    msg.setSource(49645U);
    msg.setSourceEntity(214U);
    msg.setDestination(41056U);
    msg.setDestinationEntity(61U);
    msg.req_id = 56452U;
    msg.status = 154U;
    msg.info.assign("WAOVENEBEMHVCQEUVTMFSAJXASKUEJUEHARRBPGFIWMPCAYMHNEQHULQQSDOEJTZAGBKUHXMMTPPCTBOQNOLIABVWWCOSUKIYKKLKHWFIIZLVGDTFEDNXZZJBICWHGAPJLUIYZKLVQRDRSGRMDHXKRZBSYPSZJWCITDUNTGYNCLSCOPKZCFBYNFDJUWFPOCFXMJWEIHBBHYGJWZXGTDJVOXTRGZX");

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
    msg.setTimeStamp(0.231879096857);
    msg.setSource(18500U);
    msg.setSourceEntity(131U);
    msg.setDestination(23205U);
    msg.setDestinationEntity(161U);
    msg.req_id = 50283U;
    msg.status = 151U;
    msg.info.assign("YSKXFVWXIPJJNWBCRWATZQROCSUMRKKFACBJMZTNBHDZGFQUJCYHLXLZOGKQRJTCSPGMITSAJAIKAZLDYWSYLLQRSMCGEGIFTFHDCGSXICRBYNBVNFFDNAUVGVDXAVGPNVZEZKFKVZLDLFUEPDNULOBDIORUKPYOMXH");

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
    msg.setTimeStamp(0.860191529566);
    msg.setSource(61727U);
    msg.setSourceEntity(188U);
    msg.setDestination(22544U);
    msg.setDestinationEntity(74U);
    msg.req_id = 12552U;
    msg.status = 198U;
    msg.info.assign("MWWWELDVBLOTYTCSHQYMWQLDUVRFGKVOWWAJCZBEDFYILRZYZPXRHD");

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
    msg.setTimeStamp(0.870890685644);
    msg.setSource(49163U);
    msg.setSourceEntity(23U);
    msg.setDestination(23223U);
    msg.setDestinationEntity(153U);
    msg.state = 149U;

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
    msg.setTimeStamp(0.197852270828);
    msg.setSource(50827U);
    msg.setSourceEntity(128U);
    msg.setDestination(50214U);
    msg.setDestinationEntity(15U);
    msg.state = 143U;

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
    msg.setTimeStamp(0.313149982176);
    msg.setSource(11628U);
    msg.setSourceEntity(70U);
    msg.setDestination(5477U);
    msg.setDestinationEntity(119U);
    msg.state = 23U;

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
    msg.setTimeStamp(0.752955083471);
    msg.setSource(23544U);
    msg.setSourceEntity(209U);
    msg.setDestination(34693U);
    msg.setDestinationEntity(140U);
    msg.state = 178U;

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
    msg.setTimeStamp(0.687263167167);
    msg.setSource(18297U);
    msg.setSourceEntity(134U);
    msg.setDestination(23918U);
    msg.setDestinationEntity(62U);
    msg.state = 67U;

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
    msg.setTimeStamp(0.924078156054);
    msg.setSource(29708U);
    msg.setSourceEntity(181U);
    msg.setDestination(45221U);
    msg.setDestinationEntity(146U);
    msg.state = 151U;

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
    msg.setTimeStamp(0.30602008681);
    msg.setSource(5644U);
    msg.setSourceEntity(173U);
    msg.setDestination(41337U);
    msg.setDestinationEntity(161U);
    msg.req_id = 43792U;
    msg.destination.assign("XLBREMAXYAGNBUVPBUTZKVPVGPXIWYBEHSLQFMOQDPXTJXFWYYRVWYRHQDFBKUCCLLSNOBGIGONMOADVYUPKOQDHVNLSTXDXZYOCJNFZOZZCQIXWRKTAMZQR");
    msg.timeout = 0.116337755865;
    IMC::VesselWind tmp_msg_0;
    tmp_msg_0.angle = 0.31023943262;
    tmp_msg_0.reference.assign("IUTIHLPOFUZCRLVXSIIROTSOTWQFVTZIAEZDYWCQREMEHSAU");
    tmp_msg_0.speed = 0.121841907548;
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
    msg.setTimeStamp(0.463341081175);
    msg.setSource(42348U);
    msg.setSourceEntity(14U);
    msg.setDestination(22144U);
    msg.setDestinationEntity(10U);
    msg.req_id = 25168U;
    msg.destination.assign("KPGTSTFEGXUJFIZHCIXHXCLCGGSNBUTJMBLFIIRRLSHTZDJMIOWRQADKMLVTSQUSBEVOFZKSVRXMBKRJQDTOQAHWYVIVFDNUQBQEKGNPESGVHCSXLRDJIWVUJPKMYXWLBXSIYKQHDKXKUVGJQCJMOIGEBUDXWEPZAEWEHOPWYYAOZTZAOQNONZLJIUZYNFMLWOFRQRFAUCXFWOTYDA");
    msg.timeout = 0.171578288804;
    IMC::LblRangeAcceptance tmp_msg_0;
    tmp_msg_0.id = 219U;
    tmp_msg_0.range = 0.185993606949;
    tmp_msg_0.acceptance = 62U;
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
    msg.setTimeStamp(0.200111075226);
    msg.setSource(58330U);
    msg.setSourceEntity(188U);
    msg.setDestination(61052U);
    msg.setDestinationEntity(32U);
    msg.req_id = 62727U;
    msg.destination.assign("GDPXHFRQSDMLABZMMVQOSXOBXAPWVPFMAYAUZIITFEEPEQHAOLTOQHLTZJLJ");
    msg.timeout = 0.136248086031;
    IMC::VelocityDelta tmp_msg_0;
    tmp_msg_0.time = 0.337332891674;
    tmp_msg_0.x = 0.476903427461;
    tmp_msg_0.y = 0.497064566592;
    tmp_msg_0.z = 0.414487807144;
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
    msg.setTimeStamp(0.836244991361);
    msg.setSource(9947U);
    msg.setSourceEntity(202U);
    msg.setDestination(12671U);
    msg.setDestinationEntity(251U);
    msg.req_id = 40773U;
    msg.status = 47U;
    msg.info.assign("XAZMPLPQWLZRUJPAOBCJSBTRKZWCQIPHYWZTQMWALYCAJVFTJOWDEGGKJSRFYGBELBKZYNEMUMLFKYEG");

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
    msg.setTimeStamp(0.728364948833);
    msg.setSource(23948U);
    msg.setSourceEntity(190U);
    msg.setDestination(42879U);
    msg.setDestinationEntity(228U);
    msg.req_id = 3257U;
    msg.status = 9U;
    msg.info.assign("MLZVJPHHPDWLOJJOLOXAPURTBDGEHYBVNQYNFOMXXOGNJSSQSSKQDGVADZENVDPDLSQGLDUXTOIRPTSWUXKEYSMEJDWHCJYEUFQGGXKVOCFWCYFNOTZXZTWRSCHWGITBSLFIYWZWYGVMLANQRQGLQLEEIFMZRIFWBVMFRL");

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
    msg.setTimeStamp(0.523951608406);
    msg.setSource(27309U);
    msg.setSourceEntity(31U);
    msg.setDestination(41345U);
    msg.setDestinationEntity(74U);
    msg.req_id = 55046U;
    msg.status = 110U;
    msg.info.assign("MBBYTJXXVIOEXATIORCHRWDXHOSSFNNHXWBVUTUFUUIVIWAWRNQRLYKPSAOUYAPLUWZCPHVPFCEDKGNIPMHHNHMO");

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
    msg.setTimeStamp(0.0166156177444);
    msg.setSource(41931U);
    msg.setSourceEntity(230U);
    msg.setDestination(36549U);
    msg.setDestinationEntity(32U);

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
    msg.setTimeStamp(0.640668715985);
    msg.setSource(64431U);
    msg.setSourceEntity(157U);
    msg.setDestination(13504U);
    msg.setDestinationEntity(52U);

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
    msg.setTimeStamp(0.374255113291);
    msg.setSource(26255U);
    msg.setSourceEntity(235U);
    msg.setDestination(8304U);
    msg.setDestinationEntity(226U);

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
    msg.setTimeStamp(0.952831620754);
    msg.setSource(23017U);
    msg.setSourceEntity(200U);
    msg.setDestination(41642U);
    msg.setDestinationEntity(9U);
    msg.plan_id.assign("XUHGESIEQNGPWHK");
    msg.description.assign("MRQMCPKXUVLUYMSAKDXBOEIZWQDVPWOCQTPECNNMXHIPXGFZBTHSXWMGRUFGZJVHQHTWDBOHWEFLWRJZBYQTTIJFGBZRVNMYOKAYEKHWMGFXYLJZCNDLEIFOUEYEKINSZ");
    msg.vnamespace.assign("TDIVUXBCNLNDOMJLARDRDTVDUTGWYHHVLJPVOMGCZNEWEIQKHUHCSFFCQERVZPHFMSONBNMZFVNUITSGINAXQSZYWIGYZBMGKRACPRKPOQPUBOTWRXQUXFIPYOPUZTHKYUTXBGZLBSAMGXLNQRVCTQLWPWSBTWVQKKUYWAWBGDLAXUDKJCJDERHANEOJXJBCBGLMHK");
    msg.start_man_id.assign("JAQSQDPZINVLNPJWAUUBVFFBRMQTXGLFDJOWCFKCROERHVXSIMJJPMSXYKUOVROBDNMKXKFFLPRCNGJSXEOUPRDCOBMWWUGTEZWPRNIWSIXZBKGEGTKHAH");
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("NAXXGRRMFFOVNRQPTVCOMQYQALKZOEPIIKNRAIPKPCXJJHIYOEGYAMDI");
    IMC::CustomManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeout = 54162U;
    tmp_tmp_msg_0_0.name.assign("RUJSDLMYXZSPXHHMZKFIPRQZAEVHOGSSQKCNPODSHQTJIGNVAN");
    tmp_tmp_msg_0_0.custom.assign("JDPIUJUQQQXLGMGOGMNYVAOAEYZVTSNKSRCXCHFHLYEXJWNQDJWYXEVGFULDVBSQVRASGPCIICZFTWCPKDV");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    msg.maneuvers.push_back(tmp_msg_0);
    IMC::RemoteState tmp_msg_1;
    tmp_msg_1.lat = 0.420769523026;
    tmp_msg_1.lon = 0.458869247996;
    tmp_msg_1.depth = 252U;
    tmp_msg_1.speed = 0.526428777165;
    tmp_msg_1.psi = 0.95917165778;
    msg.start_actions.push_back(tmp_msg_1);

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
    msg.setTimeStamp(0.353725194525);
    msg.setSource(37687U);
    msg.setSourceEntity(94U);
    msg.setDestination(27440U);
    msg.setDestinationEntity(115U);
    msg.plan_id.assign("TYSMCKJYPCYQVDROVEFLITEYSXQIQIITDWGFAENNSDBHJPMSGRNSAWRSLGJVCGZLZKDZYXFUWEDZCNDYEZMUHUHGXVXVRFIBKFMOIQKSPPMCNVOFVIRXJULOQDPCSWMJAEZTMWFGVCBQQPKUQUKXOOTUAIJPARHWBNFJYFXUJXYDEXTZWB");
    msg.description.assign("JJQEECUDVIQAPILRPSEFKLVLRXIDDSVMLNNWZXZPPHPPIHURHW");
    msg.vnamespace.assign("EURSTECXLNDIAPBSVOJKSCVORCAKRMNVMNAOWYUJISDZUZQYGVKGFOMQPAWFNIXQSGXQAPSWXFHDO");
    msg.start_man_id.assign("MFMYSXZSHCOBRLFJWWWIKOGYEVJLOUVYXZDHEFIKHJCJOUUVORQWVRANHVUCPTEITKNBLKLIGRFXWLCCHEUELLJCUVRPUNQYVXKNNHEGBMXQKCIZZSBQFGJGESNPVQFWBOKUVOUVDGATMKXETLDJOSXATBNZWIQFIPMKSUAHNMJDBFAQZQBGMPLFTMRASTZAX");
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("FDKXSMHVBQVQRDNJJWOVWGWRWTXNWLEPBEDTUIUSGWFKJBCBEOSDWAVRZKYHSHSCDXMBNTVYTDCQRGPAUYPJKJGVSPYCGRDQHYLAZTELDXMCLNMAQBBLRRQPXXACOLERFFOURPWKEEQJLJGPINWVKNHPATCAXEGXJAZGTUMDFLHMYVYZNUIRBYBDSOSTHKCNOEAIZIUHWKPOLUZLHIJOSFJKNGE");
    IMC::CustomManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeout = 4991U;
    tmp_tmp_msg_0_0.name.assign("PVPFMOZFTUCGXHEQSBAISETYTWCGSHKZCSBKSWRXJXVNW");
    tmp_tmp_msg_0_0.custom.assign("TPLCISBIEVUCKLYEZQAPOVMJUNSGVLAXFMASNISFYWIRCIHYOWRJDPKEGKLDNCESLZOOLAFUXPCZAPNHBWMYQEWCBHFMHXDKZINYXYHHELCGORTUBJLQEVIKDMLBFGNVVVFWXYVEGZHZVRRONJUDKTOHZXUTPYYRFTQYTBUKNQRZGMBSJUDDDFJTTGSU");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::RemoteActions tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.actions.assign("IMSHJNGZGRSLMFTQIGHZCBDKKECHYRDHJNVSUQGCOBFVNOSJAYRTLEEZOEALULBHJOQTWXSXOV");
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
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
    msg.setTimeStamp(0.198094588516);
    msg.setSource(42028U);
    msg.setSourceEntity(214U);
    msg.setDestination(47528U);
    msg.setDestinationEntity(54U);
    msg.plan_id.assign("QRRGFDWFQCMFKIHLYZZZBYCRTXQZEWYOHYPOOHCVPVLBYKHLBTEKMTPEJGJXBSGSHOOIZCAAWCSCTGHPHPKPMDLIZOUFNYNOWEJFSMUAWNMRYXWEUBJPSANVVUQKDNXBCITVNMFZ");
    msg.description.assign("FYMRNCTBIAIQQKLHGWJEDLWXDIXUVSDZAXLLENXXDQKGUKHPCMQMVYAOHMTPAEAQZPWEKNKZCLXPVXFIZGJXIEUVYFADRBYJWFDUHZHTFJBNZMRBFRJPVUZJPOGCFESDSSIZOYAJBWNDPGQSTPTWJQYKVVCVMHSGQTRLOOAZRSLCTGURGCIBUU");
    msg.vnamespace.assign("KIFHHFBUDLXJRLPAGCSC");
    msg.start_man_id.assign("URXISZIPMBCDRFQTGRANSSEDXGEXPJTOQHMTFYIOHZHWIKYKZAWJYLCTQFZCSFYEJNTBKRXZRMCHOFZXYKPXAFRCVHGBIIPUYMLTWJRVCXJCYSWOXBGGBGYKRWMQPNUOKLZASBOQLLSOWOICJHVMJGANELDWLTZRJWGOSYJEULEBKVVQJMVSVGKPADZKTHHPEFMVNNQQNDEPUZWUFTRAUBNCECIQPMIDBSPYLOTDKDVGDUXAIUANFXFUH");
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("LXKUBXFDHECBNXMUTVUNSHO");
    tmp_msg_0.lat = 0.0136566057873;
    tmp_msg_0.lon = 0.992622096489;
    tmp_msg_0.depth = 0.944108020652;
    tmp_msg_0.query_channel = 213U;
    tmp_msg_0.reply_channel = 148U;
    tmp_msg_0.transponder_delay = 166U;
    msg.start_actions.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.323151358568);
    msg.setSource(56577U);
    msg.setSourceEntity(49U);
    msg.setDestination(5391U);
    msg.setDestinationEntity(15U);
    msg.maneuver_id.assign("FMOEWSPLBAYDRIDYOFUGPOHBCBQFPEHJHPBNZNVUJZMQTZUNMHKVRXGUHKHKXEWWCQZAUEORXYVKGATLYWRSJHDSRTCQJCODWIGFGPXALIJDFMBVLJDCELQLIGNZKOKNYFDLVXUIJKCYLXGSMWVNXTURAVTRSFTHVOLFDUODKSSNYEGRNTOQCHMBIBPIUHMMKTMCZSEGVSWPWTPGZQCJKIUFAEOEDPWCQRZQVPBIFJBMJZYNAEZIQWX");
    IMC::Goto tmp_msg_0;
    tmp_msg_0.timeout = 16172U;
    tmp_msg_0.lat = 0.627341984072;
    tmp_msg_0.lon = 0.50414857261;
    tmp_msg_0.z = 0.492920644714;
    tmp_msg_0.z_units = 55U;
    tmp_msg_0.speed = 0.0261082543416;
    tmp_msg_0.speed_units = 229U;
    tmp_msg_0.roll = 0.783758104115;
    tmp_msg_0.pitch = 0.911817745189;
    tmp_msg_0.yaw = 0.519706740914;
    tmp_msg_0.custom.assign("HDJTYPGIFXXMKJDHDDYRGSKGASROQBJBINVBYLLOWIVDESZVMYMBLEYGNMIYASBJTEHQGWHFCNEDDGDBBIIYTZRPXJFSFRPOZXXAQXVZUKTHTUKEVZKEKZUJMVHQMCWNWOCIMONUCCAKQPMVJKPAEHOREXNTASFIAVOCPALWIEBCRXUPGWZPWMSUUYTQPFCIHTRPTGEGSHJTNWLCWODRB");
    msg.data.set(tmp_msg_0);
    IMC::Force tmp_msg_1;
    tmp_msg_1.value = 0.30937114337;
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
    msg.setTimeStamp(0.220358398817);
    msg.setSource(50034U);
    msg.setSourceEntity(184U);
    msg.setDestination(58038U);
    msg.setDestinationEntity(231U);
    msg.maneuver_id.assign("WZMSJQREMKYCUPWRVOQBWCJSKLZXQSMNFXARLDMVCANJZHXEKXFUYSPEOXLXYCZJQGQWSKFOPWZGFMLNIVITHCZUVRKRNAHLHJJIYGWZFDZPLNHKQGHFWPVGRPRJRGNTLYORHOTEBDUDQVTLMNFUEFUBBUESJZXPDMGISJAUXLTC");
    IMC::Dislodge tmp_msg_0;
    tmp_msg_0.timeout = 6776U;
    tmp_msg_0.rpm = 0.895652073139;
    tmp_msg_0.direction = 34U;
    tmp_msg_0.custom.assign("CKPSJEXHIHZZTEASCFBNQWFBEJVGPDZBFQHFKDKWKTONPIXVORYWQMOTOEUCEIGRMCVIJSJMAXFLFZZRQZKRTUTQWCMRAOWUSQIWQKVUUDRZSROVIYXOOORDEDYNS");
    msg.data.set(tmp_msg_0);
    IMC::ExternalNavData tmp_msg_1;
    IMC::EstimatedState tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.lat = 0.113156130694;
    tmp_tmp_msg_1_0.lon = 0.205968533184;
    tmp_tmp_msg_1_0.height = 0.702194630151;
    tmp_tmp_msg_1_0.x = 0.00540482947925;
    tmp_tmp_msg_1_0.y = 0.689496832316;
    tmp_tmp_msg_1_0.z = 0.743206352656;
    tmp_tmp_msg_1_0.phi = 0.162430501021;
    tmp_tmp_msg_1_0.theta = 0.216363557523;
    tmp_tmp_msg_1_0.psi = 0.105891984177;
    tmp_tmp_msg_1_0.u = 0.267879286813;
    tmp_tmp_msg_1_0.v = 0.105961761456;
    tmp_tmp_msg_1_0.w = 0.66318997267;
    tmp_tmp_msg_1_0.vx = 0.284362881507;
    tmp_tmp_msg_1_0.vy = 0.460469689655;
    tmp_tmp_msg_1_0.vz = 0.944204968455;
    tmp_tmp_msg_1_0.p = 0.724777655086;
    tmp_tmp_msg_1_0.q = 0.152863353639;
    tmp_tmp_msg_1_0.r = 0.800811252812;
    tmp_tmp_msg_1_0.depth = 0.509224382983;
    tmp_tmp_msg_1_0.alt = 0.714037356579;
    tmp_msg_1.state.set(tmp_tmp_msg_1_0);
    tmp_msg_1.type = 237U;
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
    msg.setTimeStamp(0.413780106775);
    msg.setSource(38465U);
    msg.setSourceEntity(124U);
    msg.setDestination(22159U);
    msg.setDestinationEntity(35U);
    msg.maneuver_id.assign("AEJNTTDYUHJUFGWHSGNQDTAOWBZYPLOSERLMYKFRIEHYISXLGVAERIQYZDTNZCRBMKUNBKDDGREYKEDHKGJIQCASXOZQPVKBUOVWSCIJAQVQUIJZKWOQUBKQPMBXNSWYGXZVGRIVXNLPFCIVUGJQXNUHBJDMPHCLSCMMTWPEWKRPXGBZWRXXNOCAEFJJIO");
    IMC::Rows tmp_msg_0;
    tmp_msg_0.timeout = 1686U;
    tmp_msg_0.lat = 0.410307826008;
    tmp_msg_0.lon = 0.774135512153;
    tmp_msg_0.z = 0.473107632316;
    tmp_msg_0.z_units = 182U;
    tmp_msg_0.speed = 0.831612196249;
    tmp_msg_0.speed_units = 91U;
    tmp_msg_0.bearing = 0.381138405636;
    tmp_msg_0.cross_angle = 0.706272680573;
    tmp_msg_0.width = 0.658888317863;
    tmp_msg_0.length = 0.432259024091;
    tmp_msg_0.hstep = 0.22262733185;
    tmp_msg_0.coff = 114U;
    tmp_msg_0.alternation = 239U;
    tmp_msg_0.flags = 74U;
    tmp_msg_0.custom.assign("LHTKWFBLJAGVTFDPERGYCVTWVJEMPUOASBYXQFDSDERSYYMGIRWJSBLNWWRRXCJOYRKNXEWMUGEPZTHDBZDXVM");
    msg.data.set(tmp_msg_0);
    IMC::Rpm tmp_msg_1;
    tmp_msg_1.value = 6905;
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
    msg.setTimeStamp(0.721789289479);
    msg.setSource(35366U);
    msg.setSourceEntity(231U);
    msg.setDestination(43355U);
    msg.setDestinationEntity(156U);
    msg.source_man.assign("UNTLPXLLZCYAUMDRAHBBVDXVZVOPGXSPJXEFEOGMDDUUGB");
    msg.dest_man.assign("WRNAXRZJUALWQIKEIEFZXKAJFDMMIEBESWUZOEPNQGYBSLHGSSMNGRTHKOQUMRIDQVSPNATX");
    msg.conditions.assign("BRQTHVNGZNUBTAGCJJRRHBIPTIWFAZNAXOPIPBGLFZIZJXTPVAUDZWDLNZUWSJSONQGYIGZFMPNEXGUMLPULUPJFJAOFYSQXCZBWYECKH");
    IMC::VehicleCommand tmp_msg_0;
    tmp_msg_0.type = 114U;
    tmp_msg_0.request_id = 14633U;
    tmp_msg_0.command = 28U;
    IMC::Dislodge tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeout = 24183U;
    tmp_tmp_msg_0_0.rpm = 0.416120852582;
    tmp_tmp_msg_0_0.direction = 103U;
    tmp_tmp_msg_0_0.custom.assign("QBAHDDSZGYUQCBVLQXJKOSAEVTTTMNMCBNTURXWAPXFQYMUXISDBHBJDNIAVINVIKLI");
    tmp_msg_0.maneuver.set(tmp_tmp_msg_0_0);
    tmp_msg_0.calib_time = 10219U;
    tmp_msg_0.info.assign("FZFWYDGWPCTQWEREAOCYIERPNMVMVITQCZQDQXZTDHDVCOUXZIFMVYMUMSFUCAGBRHIRDLMNVLFBABHXGSSMBWJIXGWEPQOYYQZLESNTRCILJLPUFHSASBWENJFVWJDUOWEWJSBRHXVDCEPZEFQUIBKYNJZJKZNOARGSKNJVTTHJKUGTMT");
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
    msg.setTimeStamp(0.843600526947);
    msg.setSource(15223U);
    msg.setSourceEntity(83U);
    msg.setDestination(14070U);
    msg.setDestinationEntity(85U);
    msg.source_man.assign("HQDHTDXFXRUQNYZJ");
    msg.dest_man.assign("GDAXMPSQHVNUJVLSSNCJPHYVBFWYTKSPBFYHFOFSNTPAQGNYOFIXRGGWDTBFUZKHSLOOTKMEJFXBJRFBMCXKAMQTWWMEHNTIBOJWIMQUYARRJDIMPWOPAHRCLKZLWXURJKUVEZPSKENOVGDYPSUEJFNTQRULQLDZIQVDCVGTIXQJBYWCZALDIXEIRDCTLQMOHMGCIUAEYUXDZFPTESGYPXOVCBERKIWNHUZLKZHAECGONKMLABHGNZWVC");
    msg.conditions.assign("JRJBNDQXPDVCTGGNRDGWMHEAYVPSWSEAUWEBSYVYJVAPZTGQMQYAVFFHTOJPZSDCQMHKISPOFFGPSRRWCIWHUOHGZZYXGJXKECLSLAIVNQIALDPTFXMMIBBJYLOXZIDXHMUKPMPETWNBNBNABTWCCCLDUCFFZVZQJMWDOXQBNIXKHNFSRELHKKDYLUTEKHSUFAJSCJXQBMAY");
    IMC::ImageTracking tmp_msg_0;
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
    msg.setTimeStamp(0.478233377993);
    msg.setSource(43685U);
    msg.setSourceEntity(120U);
    msg.setDestination(14193U);
    msg.setDestinationEntity(70U);
    msg.source_man.assign("YAGVIWNHAJGKWXQNNCDLYHBWBJZFTOBOGIPUDFZDHKRNLRLYZQYXKQVYXWJJVRULOMTDJHISQLPYMVMRNFGZBXGSZBFHMZPWIVTTWQIVLODNUFFDWSECPKSDLXHEGHDOMQTSSJAFWMEEREJHCRNUVSZAASYTJGCRE");
    msg.dest_man.assign("RCFQCHYUNVESRUXWQJPAIOSTLPBCAKKJVJJWGHNSMLVQGKKUFYUORTMIPWFDUSZVZFJPSXJIHLWMZSHEUTHIDTDNQGYPJPOOUBIMKBNZKJHEXQWDOIAOYMWLRSCYFTNBCRQLWZEBVKCTIABGMCTPHDDDQLJXKXEMNNGNISORXAKYQQCPWZONEAKPWVOVVBGDRLGFTZQERDLZVSIBMAEMAMYXYRSFLXHCFZGJHU");
    msg.conditions.assign("TOOQUGPNGDRJFGMTQUMLYPZJJWUWGFMHHTLXTLVBGWOFRIVRDHZSXARJOCC");
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.282143959722;
    tmp_msg_0.lon = 0.749481387068;
    tmp_msg_0.alt = 0.624966668461;
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
    msg.setTimeStamp(0.439504632946);
    msg.setSource(47624U);
    msg.setSourceEntity(253U);
    msg.setDestination(2929U);
    msg.setDestinationEntity(99U);
    msg.command = 79U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("NZAMPSARRFXWFLPKINMLMOJWWUHEBOIPPZCQZHNJYALKDAUDWXBONJOOMBEHMWXFSO");
    tmp_msg_0.description.assign("NEXPWJUEWRFUQEWDZXOJLKJRLBYNWNYBBOCQHZRWTIFNJSFKNQMAXPHMWLBAUZAOIYHQFADVTEXXDYFDIRBZSCVWUODMYYPCFGSPUSAAFRYWSNDRXAXPNQOGJOXZBILBENCHQMSLMEPYUGRHLDTKTEIBKCJUEKFGHMPLUCZVXICUTIBCJSBLOQLTDPQKCZSVMAOKJNGKCWQTAZRIVVLWZXZ");
    tmp_msg_0.vnamespace.assign("RUEUHUTQQPMKFM");
    tmp_msg_0.start_man_id.assign("XZICBENYREMPUGSQINZPNMLTRGVYIMUSTOBZUYAULMANTRLBYSSDVJUKMWNVNXCLQRGOZARXSNYOTQPBOQYPEFXHJWXDIJBVFUPWSSLFATHVHGZMWEQRHCESGWAKUROSGFADMVKCWKCYFDQGPDIZXWQCHJIQXGGSKREYLTFOJAAAEODBWXIVYJPHRNDTMXKDVJQWEOKNGEZDIPHJNKZTVBEHBLOKDBHYFOFIPLVQCM");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("SJCRAHKCWMTHSYAGNJPTROIZXMYVBBYAABQEXVXIMFEKFRDZWFSCOCQJSKTWJHBGQEEKSWRUTBYPLEBDCHAQLZMYIKZXVNZZNKFCWEKBXUHFPW");
    IMC::Rows tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.timeout = 38557U;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.18716141522;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.244847012637;
    tmp_tmp_tmp_msg_0_0_0.z = 0.703430597935;
    tmp_tmp_tmp_msg_0_0_0.z_units = 139U;
    tmp_tmp_tmp_msg_0_0_0.speed = 0.957939131994;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 146U;
    tmp_tmp_tmp_msg_0_0_0.bearing = 0.336647634255;
    tmp_tmp_tmp_msg_0_0_0.cross_angle = 0.313726617957;
    tmp_tmp_tmp_msg_0_0_0.width = 0.0407172983355;
    tmp_tmp_tmp_msg_0_0_0.length = 0.041631806803;
    tmp_tmp_tmp_msg_0_0_0.hstep = 0.736937435943;
    tmp_tmp_tmp_msg_0_0_0.coff = 154U;
    tmp_tmp_tmp_msg_0_0_0.alternation = 226U;
    tmp_tmp_tmp_msg_0_0_0.flags = 131U;
    tmp_tmp_tmp_msg_0_0_0.custom.assign("COXTJAWIXESFPPPRHUABCYVVHJQLLLNZNXXAEZOSFUZLBMKGP");
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
    IMC::LblConfig tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.op = 124U;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    IMC::LcdControl tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.op = 64U;
    tmp_tmp_msg_0_2.text.assign("HFNECHHORKYQWYDRVVKEYLJDUNPQJOEXWBTSZWJGMEACZUVEKTMYXNGUTKMKYJDLQAMCRBMRBFAVSRNJWCXITFBMUNYSDJSEXVCXIRYQWBKYJUBZXAHLLTDSBZBGNPXYVOT");
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
    msg.setTimeStamp(0.962546759601);
    msg.setSource(45481U);
    msg.setSourceEntity(230U);
    msg.setDestination(2768U);
    msg.setDestinationEntity(174U);
    msg.command = 235U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("XXVGFPDPREFPACDIHKOISGBOLFRDENHLYQYTYUMEBMVCTWISEQBROCMDUZDBLSQNXJXTLEHHEKMVWGJZLZUWNSOKOMAKFYBMPPRIBZKOJNGXNOKZVNGFFNACQLPWTGLMADAYVGJATKUPGIUYNEDLHQPXTTDBMJCVAVYAQIHRQCRYIFYCPXKDIRQJYCBUISUZASFMWXKHERZQZHVESCTQUBTWHZWOZAXGVXJTNMCJRKBDS");
    tmp_msg_0.description.assign("JBRVZJXPCPFUHJHMITSBZZDFAUKHWZASNBCLTQXPQUGHMOYNNDDZORDFOZJUREOMCPKXGSHZUGVEFTGEBQSRWRNDUYKCNGWYRSDAXVQAGDMHJYIETRQCGSIIDBODXCRJALHOUWDRJKQISYEG");
    tmp_msg_0.vnamespace.assign("WATXGMCNAOKESOEULPJHJRN");
    tmp_msg_0.start_man_id.assign("HAPOSCNFGQDYOKPSVWFMRPHVOFQSVKLRUOSGFTHBNHIMQWLZUSVTEHFGIXEMWEYMTJDDWWRBJLGSBNUANXRVSTVNCHEMKXKDNBPURJPIRFLWYBADPFQIWLFDAIQCPZHHDQVXKCJAUBBMKZGLGRHRCXLICZUSOPHKEYEOTNLGWP");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("SVAJMUMRXIZXHVRBQHCRJZLAFWT");
    IMC::StationKeepingExtended tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.346141360996;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.65983340396;
    tmp_tmp_tmp_msg_0_0_0.z = 0.894719665948;
    tmp_tmp_tmp_msg_0_0_0.z_units = 140U;
    tmp_tmp_tmp_msg_0_0_0.radius = 0.344737470311;
    tmp_tmp_tmp_msg_0_0_0.duration = 9180U;
    tmp_tmp_tmp_msg_0_0_0.speed = 0.151543582578;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 203U;
    tmp_tmp_tmp_msg_0_0_0.popup_period = 28915U;
    tmp_tmp_tmp_msg_0_0_0.popup_duration = 56477U;
    tmp_tmp_tmp_msg_0_0_0.flags = 198U;
    tmp_tmp_tmp_msg_0_0_0.custom.assign("TJMZTOJUNNMGKXIMWWJPIX");
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    IMC::VehicleState tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.op_mode = 138U;
    tmp_tmp_tmp_msg_0_0_1.error_count = 102U;
    tmp_tmp_tmp_msg_0_0_1.error_ents.assign("EGWCFMSKEZKJTEIKQEMLDNJPAZQCXDGCKQUOMKAESQWHGBOR");
    tmp_tmp_tmp_msg_0_0_1.maneuver_type = 34666U;
    tmp_tmp_tmp_msg_0_0_1.maneuver_stime = 0.942457026098;
    tmp_tmp_tmp_msg_0_0_1.maneuver_eta = 51857U;
    tmp_tmp_tmp_msg_0_0_1.control_loops = 4268491861U;
    tmp_tmp_tmp_msg_0_0_1.flags = 195U;
    tmp_tmp_tmp_msg_0_0_1.last_error.assign("CICNSSDRQPVYEJKBWHPNCLWQJALKMXDDQMCHROQYUYNLABEAPHHCYOTFYBRUZNVJDXUODCLVIDLLCATMVHZRSJEWXMIHGPKNSHJUFIILXPPCHDPIVFZXALIQWFK");
    tmp_tmp_tmp_msg_0_0_1.last_error_time = 0.000451326599987;
    tmp_tmp_msg_0_0.start_actions.push_back(tmp_tmp_tmp_msg_0_0_1);
    IMC::AllocatedControlTorques tmp_tmp_tmp_msg_0_0_2;
    tmp_tmp_tmp_msg_0_0_2.k = 0.0197288847896;
    tmp_tmp_tmp_msg_0_0_2.m = 0.377415332908;
    tmp_tmp_tmp_msg_0_0_2.n = 0.414659567229;
    tmp_tmp_msg_0_0.end_actions.push_back(tmp_tmp_tmp_msg_0_0_2);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
    IMC::LeaderState tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.group_name.assign("DIKOURBCTXYLFGXEBWZCMRBUDLAOHTCZLVSGKQMFJOHTRGVYZEKESLABFRRHQOEQHUXNXPSQILGNDFSMGIPZDPDQABEMJVWUVFYSRBFOOMMRUVENBTKYARULTTHEYMSATIOHEXSHXENWVFIOPLMSMWNGQLNWYGWPVJUCYKSEPQZNBTWXIWXXAYYVGKAPXNAZONKUUJVBWFPQUPDGTCCZDCDJLZRAPWZKBJJYICOSIQDAMJCNKIVC");
    tmp_tmp_msg_0_1.op = 106U;
    tmp_tmp_msg_0_1.lat = 0.016341127826;
    tmp_tmp_msg_0_1.lon = 0.123288618972;
    tmp_tmp_msg_0_1.height = 0.590767172493;
    tmp_tmp_msg_0_1.x = 0.405273768446;
    tmp_tmp_msg_0_1.y = 0.407575103672;
    tmp_tmp_msg_0_1.z = 0.662485158473;
    tmp_tmp_msg_0_1.phi = 0.212721523077;
    tmp_tmp_msg_0_1.theta = 0.109866377016;
    tmp_tmp_msg_0_1.psi = 0.38985087359;
    tmp_tmp_msg_0_1.vx = 0.485061688178;
    tmp_tmp_msg_0_1.vy = 0.309730109723;
    tmp_tmp_msg_0_1.vz = 0.464112544442;
    tmp_tmp_msg_0_1.p = 0.501359844416;
    tmp_tmp_msg_0_1.q = 0.235699914593;
    tmp_tmp_msg_0_1.r = 0.670514740256;
    tmp_tmp_msg_0_1.svx = 0.195627190791;
    tmp_tmp_msg_0_1.svy = 0.824111815711;
    tmp_tmp_msg_0_1.svz = 0.162918532977;
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_1);
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
    msg.setTimeStamp(0.70327676818);
    msg.setSource(50901U);
    msg.setSourceEntity(244U);
    msg.setDestination(64410U);
    msg.setDestinationEntity(204U);
    msg.command = 85U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("PZTVQRKVYAJVOJVZPSIGCTPVNBHUYTOYNHWMQASBPRBWZQSPIOMIQJPFWHWPHXVRAQHUPEMLGHKIBDXGUDCJLHCOWLNYNCALLFLWDJBTVSXRAQYJRBXHWXDBNEMZTUSNWMXZXVCCMKZOLODCIYGFGVFFKECGDGRJGELQXVQMRYA");
    tmp_msg_0.description.assign("RPEWHFUBLHBMOQKHFOWGWIFTGIVCMTENCKYIAVFSAXUPOGKPAKVXSYAGRQFMLJGWPTSZXLFUMNINSASQEOBRTLPNLBMDQZKOYOXLPBYIVBXYELLGWNHKTJPBHJZ");
    tmp_msg_0.vnamespace.assign("GQSRQFJRJENFUXFAJKXBPQLCPBUALVGHBCAWTGNJLOVPCLKSRRXIAPIAUQDEHSALQTRDPCKXOHUXKSXBCUGNHTJEGNPDMSSHFZGOYJQIPHOZSWOAWMQOLBEVDLHCBUDEVQRFYCIKLCZMVJMGWIIYYUOKSEZIWAXSQXFJTMKJONVYFGOU");
    tmp_msg_0.start_man_id.assign("HEDWWEBQIWMVMVKOLVTPXXBQERTSAK");
    IMC::PlanTransition tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.source_man.assign("AFGMIWXBDTQOBQNNULEODHHTVHXFKHMQSGAFVOAGVLSTKYSPDIWUJCLYSOSLRDEJDYMDAPVNFFXWEPHWROSNQCNJIZELRWZUGQQFMRHJQKAUUYVKKMDFZXEPIDKOCRGJHALCLBDUMMECTGPIUJIZGBZXGKREYLHQVLJZYONWWHY");
    tmp_tmp_msg_0_0.dest_man.assign("WHIYEAVJOJDSQIXWHDOYUQFW");
    tmp_tmp_msg_0_0.conditions.assign("EOADPTBRXMGHWRJCKEJMZICVWLWOKMHSXYVYNXVGBRPZAFLNBNCEIOJQLQCHUWMCCBGIWYPQQZYGILOTTHRTTPJHUYKGDIMETUDWYBDSXZKMNIAUWBMQKUKQNLCVRZEXVKDJTYZOWPOSCUVPOZAXIYLFFNKXYWGPYSRAJOOSZSFDZRHSMNJLGGFRAUKJUR");
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
    msg.setTimeStamp(0.208756941835);
    msg.setSource(17180U);
    msg.setSourceEntity(26U);
    msg.setDestination(50115U);
    msg.setDestinationEntity(213U);
    msg.state = 248U;
    msg.plan_id.assign("ZDQLVLBGNZKFDTCJPBHRWYCOGBQJUWBANZGAYQLCQYQRHLPFPABCFSXNUOPJINCMVIKVWKNXZMYWILBDHIIEPWQOVCRDURAAIUFKIPSFMDELZQBDGESMMAJEXSRDJXXXIWLHTETSPVGLRPUSTZYVAHLSRGVKKOMBRJTNQDSNCZYXQCEYVEAUUDTWEZPGJU");
    msg.comm_level = 133U;

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
    msg.setTimeStamp(0.932341697888);
    msg.setSource(49883U);
    msg.setSourceEntity(165U);
    msg.setDestination(1883U);
    msg.setDestinationEntity(227U);
    msg.state = 63U;
    msg.plan_id.assign("ZGFJXWXDJUEERVIMKHRNZXCFMBWNACJJPTMNGMNZACPXHNHAGODBFMUYYBRRHLNSPGGUTPHSXKHPNKAWAWDUWVSFCRTJQKDGZIGFVYSFVJAYJEQUCEXQXZOWRXVIOPBEQOTGFERSBOIAIKKWCLZQMVWLTAKIINLDEZSACQOKZSCHHYTXBKYSDNEYXCTLURDPQZOBILFEYYQGTQFKMJUWDRGP");
    msg.comm_level = 55U;

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
    msg.setTimeStamp(0.513033227906);
    msg.setSource(14096U);
    msg.setSourceEntity(34U);
    msg.setDestination(29691U);
    msg.setDestinationEntity(44U);
    msg.state = 248U;
    msg.plan_id.assign("MNFKCIBVJTMLCGAKIVDXRHDPJVFKORHRDGJWZZWCHZQAIXNPXZGUFFCNKZBREHYPRYJJMPKCUMSUXJUHOGHLPTRYUALGSFWIKSZFPKSWOEVIBSZOOJWMOF");
    msg.comm_level = 223U;

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
    msg.setTimeStamp(0.882024231779);
    msg.setSource(18721U);
    msg.setSourceEntity(211U);
    msg.setDestination(11117U);
    msg.setDestinationEntity(56U);
    msg.type = 138U;
    msg.op = 45U;
    msg.request_id = 28775U;
    msg.plan_id.assign("SXRYQLPGZSXAVJKTWGLQVJWAGBCFOFJWKBPPJPIIFDNRNPTDNZDVCRFGXDTHOLTWQPBIFOYLUMFRBHVNKVEMVGVBQULSXDEFOITAWOQYFHEJXBUYFXHZJOSMQZKLABNUAA");
    IMC::SmsTx tmp_msg_0;
    tmp_msg_0.seq = 3872899630U;
    tmp_msg_0.destination.assign("TBWRHETLYLHBCLKAUXNCDNCVGPVJMRKLRHSZEEMEMSCMKAMANNCX");
    tmp_msg_0.timeout = 20949U;
    const char tmp_tmp_msg_0_0[] = {38, -91, 55, -114, 76, -122, 40, 77, 1, 40, 12, 34, -101, -89, 51, -5, -39, -35, 31, -25, 22, 12, -93, -48, -47, -4, 46, 95, -63, 15, 68, 4, 15, -76, -128, 8, -29, -43, -44, 7, -94, 81, -87, 87, -70, 122, -21, -96, 55, 9, -8, -123, 28, 79, 24, -96, -44, -17, 80, -83, -84, -88, -74, 102, -42, 111, 6, -118, -30, -105, 25, -36, 31, 103, 100, 45, 42, -57, 95, 91, 1, 125, -25, 8, -48, -50, -78, 11, -40, 106, -108, -37, 61, -14, 68, -103, -102, -98, -46, 98, 89, -108, -26, -123, 38, -13, -120, -28, -121, 38, 22, -43, -122, -61, -28, -82, -89, -125, 5, -128, -32, 82, -23, -102, -32, -37, -21, -2, -14, -111, 87, 112, 73, -43, 2, 0, 58, -49, -125, 84, 87, 26, 109, 108, -35, 41, 53, 15, 46, 62, -110, -26, 17, -8, 109, -20, -118, 77, 101, -39, 80, 28, 116, -119, 42, -11, 110, 17, -54, 84, -103, 102, -112, -117, 19, -34, 121, 80, -27, -12, 98, -37, -89, 80, -93, 19, 1, 90, -30, -64, -103, 100, -60, 19, 28, -73, 118, 27, 73, -100, -43};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
    msg.arg.set(tmp_msg_0);
    msg.info.assign("TJXWZERVSUALDHOOMKCWIFJRDHJWIVILERVJHGNNZDEBEZIJBELVUZGYBGFWUSNSVYEWHDZQADTGKQZUOQYYEFSDXJIZXSALCDEXUYUIUSYZQM");

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
    msg.setTimeStamp(0.500353325968);
    msg.setSource(44640U);
    msg.setSourceEntity(113U);
    msg.setDestination(47351U);
    msg.setDestinationEntity(130U);
    msg.type = 245U;
    msg.op = 174U;
    msg.request_id = 29446U;
    msg.plan_id.assign("WQWXCBDATHONBT");
    IMC::WaterVelocity tmp_msg_0;
    tmp_msg_0.validity = 214U;
    tmp_msg_0.x = 0.710141344117;
    tmp_msg_0.y = 0.498043956089;
    tmp_msg_0.z = 0.247008366242;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("HPNASZIGSBVUDAJTVTSCVLRXVMZBLSOIUOJMJIADTEKISRCJUSAAVYOJGWIUGMDIMZKFLJFTLEZHQUNUIANENEJAPWEFXBENWJDCMHDHADYYTGORRPFMKEWNTOKXYRBVGCNCXDVGKDQFOWLCKFBBZPHXOH");

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
    msg.setTimeStamp(0.280686858776);
    msg.setSource(50250U);
    msg.setSourceEntity(60U);
    msg.setDestination(27630U);
    msg.setDestinationEntity(120U);
    msg.type = 41U;
    msg.op = 236U;
    msg.request_id = 51952U;
    msg.plan_id.assign("BFBPNVQJXYBEUSTDHESTNBJURICYCFDJXGMHQDCORJDIBOAIOSIUYPEBDZWYJXYQYGQZGPYCQHSJHAIZPHTSGNE");
    IMC::DesiredControl tmp_msg_0;
    tmp_msg_0.x = 0.621667908671;
    tmp_msg_0.y = 0.585532333638;
    tmp_msg_0.z = 0.474973785811;
    tmp_msg_0.k = 0.0580525267381;
    tmp_msg_0.m = 0.60146289479;
    tmp_msg_0.n = 0.81156429251;
    tmp_msg_0.flags = 134U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("CXQZLGQQYVRKSLSUAAXJMETFIMEVKPGWJPOBP");

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
    msg.setTimeStamp(0.0967915057001);
    msg.setSource(42661U);
    msg.setSourceEntity(207U);
    msg.setDestination(49021U);
    msg.setDestinationEntity(186U);
    msg.plan_count = 28070U;
    msg.plan_size = 3004505150U;
    msg.change_time = 0.413729132424;
    msg.change_sid = 40158U;
    msg.change_sname.assign("YDIUTGJGIYXJTEMWTMFVTRFZGUYHTNNNVUKPDOZFIOROBNHBXHBZGQHXUPEGKQRJFO");
    const char tmp_msg_0[] = {24, 56, -26, -124, 17, 107, -40, 50, -26, 28, -127, 3, -45, 118, 106, 64, 77, 64, 89, 64, -54, 97, 5, 55, -33, 47, -73, 71, -29, 65, -65, -35, -38, 90, 12, 32, 10, 107, 88, 99, -63, 119, -91, 21, -58, 117, -74, -67, 95, -113, -59, -105, 35, -85, -103, 107, 0, 103, -125, 12};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("SRWAYMBJKUPCTYGVBUDWLKXLHKDGPUIZFCMBAOICWOZMNJNZWX");
    tmp_msg_1.plan_size = 5117U;
    tmp_msg_1.change_time = 0.752707931004;
    tmp_msg_1.change_sid = 7329U;
    tmp_msg_1.change_sname.assign("UVLSSLVNBYPNDRYJDSDQDTGYZFWITCVPTCSRBHRYIVBJJFVTLWVJENRMKXKEGOIBQQZFDBZCDHEWURXRO");
    const char tmp_tmp_msg_1_0[] = {108, 45, -51, 119, -117, 48, -97, 60, -13, -86, -8, 98, -29, -86, 74, 121, -26, 43, 88, -62, 125, 68, -75, -48, 34, -31, 41, 12, 45, 45, 51, -64, -110, -53, -101, -65, 100, -53, 30, 60, -19, -68, -109, 89, -10, 20, -100, -93, -36, 111, -8, -71, 123, 101, -27, 67, -107, -4, -84, -56, 110, 53, -99, 23, 78, 1, -118, 40, -116, -21, 12, -88, -26, 15, 47, -46, -3, 46, -15, 119, 33, -13, 65, 45, -52, -27, 126, 63, 69};
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
    msg.setTimeStamp(0.749644742924);
    msg.setSource(25576U);
    msg.setSourceEntity(170U);
    msg.setDestination(27004U);
    msg.setDestinationEntity(98U);
    msg.plan_count = 47340U;
    msg.plan_size = 2241837642U;
    msg.change_time = 0.848618883382;
    msg.change_sid = 42042U;
    msg.change_sname.assign("DPOJVROSGTFTXUEHKRYDDHJKMCRRSDPGQYVHAMCJOWYZRCXELGCWFGCDIFBMZKOGZZNNWRWFJMAFVSJHIFBMPOIMTPVBSTZPKIXRQKVDTNPUJYQABR");
    const char tmp_msg_0[] = {78, 35, 63, 97, -26, -96, 29, -71, 24, -13, 119, 119, 94, -44, -122, 42, 29, 65, 6, 78, -86, -76, 58, -89, -26, -104, -11, -101, 108, -97, -99, 125, -39, 121, 41, -127, 8, -86, -55, -62, -9, 41, 28, -41, 41, 76, -60, -105, 7, 89, 96, -69, -31, -28, -25, 22, -20, 19, -89, -48, -84, -27, 40, -40, 5, 22, -84, 40, 1, -120, 105, -25, -57, -85, -16, -78, -5, 8, -21, -11, -37, 23, 11, -97, 107, -4, 61, 58, 52, -23, -50, 58, -110, 7, -42, 50, 34, 24, -115, -62, 111, 37, -37, 46, -44, -126, -73, -20, -45, -86, -69, 76, 37, -110, 124, 95, -43, -39, 64, -2, 46, 105, -13, 82, 79, -93, -23, -123, 73, 104, -17, -57, -65, -118, 16, -12, 89, -26, 73, -68, 97, -104, 83, 32, 20, -49, -122, -106, -2, 13, 2, 93, -69, 38, -32, -90, 88, -119, 105, -71, 13, -41, -13, 102, 92, 38, -104, 5, 40, -31, 98, 14, -71, 65, 125, 25, 4, 43, -20, -18, 22, -70, -53, 24, -82, 79, 56};
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
    msg.setTimeStamp(0.673983335348);
    msg.setSource(27689U);
    msg.setSourceEntity(246U);
    msg.setDestination(22856U);
    msg.setDestinationEntity(219U);
    msg.plan_count = 18266U;
    msg.plan_size = 3096086536U;
    msg.change_time = 0.28362089789;
    msg.change_sid = 48006U;
    msg.change_sname.assign("AOKRIXDYFLQXEGFTRRQZNPUCKQWUAWRCJUOILOYYPWQEYBVIPCMMVGJTDXHYZUCQBQLVZPSYOEXHXDTWGWJBKOTMWSZVSXGLCVKTRLSYAISDGEGRGMWBZE");
    const char tmp_msg_0[] = {-39, -24, -27, 37, -65, 83, 96, 33, 23, -37, 54, -99, -23, -58, 120, 99, -48, 2, 46, 95, 99, -68, 111, 73, -66, 78, -14, -62, 82, -127, -101, 82, 60, 126, -79, 62, -83, 124, -112, -80, 16, 77, -118, -55, -2, 73, 9, 24, -29, -98, -38, -34, 123, -103, 124, -12, -77, 62, -9, 121, -127, -1, -121, -25, 89, 78, 15, -19, -1, 101, -21, -17, -124, -111, -90, -81, 22, -51, 91, -109, 66, 31, -43, -93, -14, 92, 24, -128, 25, 65, -125, 87, 119, 98, -124, -36, 45, -14, -86, -82, 21, 104, -127, 71, 92, -121, -32, -91, -52, -108, -123, -110, -21, -123, -89, -33, -32, -77, 51, -86, 31, 83, 17, -3, -107, 35, 9, 81, -40, -52, 24, -125, 53, 7, 25, 55, 70, 35, -19, -98, -115, -53, 72, -2, -40, 19, 58, 90, -1, 80, 116, 70, -64, -44, -103, 19, 93, -117, 68, -49, 29, -113, 95, 88, -81, 115, -79, -112, -17, 107, 15, -34, -110, -96, 3, -60, 41, 55, 22, 34, 97, -54, -68, 62, 74, -60, -87, 48, 108, 78, 7, 25};
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
    msg.setTimeStamp(0.42007646852);
    msg.setSource(41091U);
    msg.setSourceEntity(33U);
    msg.setDestination(1214U);
    msg.setDestinationEntity(153U);
    msg.plan_id.assign("KCYFVAMFWEBLCIYXGNIVJQPRUIIDG");
    msg.plan_size = 29360U;
    msg.change_time = 0.152490195779;
    msg.change_sid = 47950U;
    msg.change_sname.assign("VPKEGVBPYGKPCORMEDJVTCACLHKSEWIBXTWWXOMYWSNRGXDZGBJDHYAKCOWAEJGCESLAJARNJTJCQFDQUGHRRXXXSPTMHZNJTBTVIVXXIUSLZJZCULFFIHFQKTODPFNAYZEWGW");
    const char tmp_msg_0[] = {-70, -64, -57, 125, 89, 49, 79, 44, 60, 126, -77, -124, 117, 125, -76, 70, 106, -113, 86, -117, -70, -26, -116, 2, 49, 105, -1, 101, 59, 5, -10, -34, 60, 114, -67, -51, 8, 59, 86, -16, 11, 120, -79, 31, -77, -52, 12, -22, -53, 22, -3, -24, 68, -60, -48, -64, -65, 53, 119, -75, -9, 25, -61, -70, 59, 117, -92, -115, -51, -31, 120, 45, 15, -1, -7, -68, -77, -52, -103, -95, 105, 93, -38, 41, -91, 46, 2, 83, -67, 73, -125, -18, 47, 91, -50, -32, -120, 90, 77, 96, -106, 43, -35, -71, 41, 96, -74, -110, -25, -22, 22, -15, 65, -111, -52, 15, -79, -118, 23, -125, -114, 43, -71, -34, -3, -81, 105, 119, -55, 93, -21, 13, -77, 123, -83, -89, -19, 62, 121, 52, -35, -122, -62, 31, -117, -104, 99, 91, 112, 120, 54, 48, -108, 113, 81, -88, 84, -77, -86, -39, 45, 123, 80, -84, 3, 81, -78, 28, -37, 118, -109, 56, 98, -125, -75, 75, 91, -84, -25, 9, -95, 48, -26, 90, -55, 120, -123, -7, -94, -85, 73, 100, -87, 46, -30, 16, 54, 55, 55, 7, 28, -66, 84, 4, -40, 123, 54, 118, 28, 111, -107, -97};
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
    msg.setTimeStamp(0.216840302835);
    msg.setSource(10777U);
    msg.setSourceEntity(181U);
    msg.setDestination(51451U);
    msg.setDestinationEntity(218U);
    msg.plan_id.assign("AJUGDTZLFNYEWPLAUBHIGFMKCRTWKQDFBYAZBLZIFXIFZLDFUVEKFMKETUUVDYWWZQKPCJHBLSMJMBQANIRRULYAEHTIDIVJWBOEPDQULWQDHQYROSGNGNFVCTPXOOXVTBZLGRSZGKSPXOCNBMKXHQIUQRSGBUMSHLAJCKPJGJNEMARNYVOFDVTWXAZNLPVMZESCOXPEVKXTZCMOYOYYRMPJUCBHQJVTNHFXERGADACI");
    msg.plan_size = 57936U;
    msg.change_time = 0.35736252662;
    msg.change_sid = 30353U;
    msg.change_sname.assign("TBWRECQSSECOIOSKKUXWBAULLKIEPNWRXRMYRZWFXTHOATYXQNDXCUPIRDTZAYVGXQWYENLDJZPLCJWFK");
    const char tmp_msg_0[] = {48, -2, 79, -95, -19, -18, 75, 96, -73, 8, 123, 124, 13, -79, 91, -27, 82, -23, -42, 70, 60, -36, 23, 60, 2, -7, 70, 116, 15, -82, -56, 77, 107, -99, 23, -50, 126, 86, 65, -77, 112, -48, 17, 12, 5, -86, -120, 20, -92, -18, -7, 42, -127, 42, -31, -26, 22, -120, -117, -72, 97, -47, 48, -121, 105, -61, 80, -4, 103, -121, -106, 10, 13, -99, 17, 43, 116, -111, -125, -46, -122, -74, 102, 93, -61, -102, -17, -55, 31, -30, -58, 54, 2, 25, -103, -55, 70, -40, 124, -51, 108, 54, -9, 81, 119, -65, 51, -69, 95, -73, -10, -18, 57, 38, 30, -92, 58, -102, 73, -114, -22, 100, 76, -42, -66, 40, 44, 66, -55, 110, -20, -94, 11, -106, -115};
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
    msg.setTimeStamp(0.903256270888);
    msg.setSource(25211U);
    msg.setSourceEntity(94U);
    msg.setDestination(7631U);
    msg.setDestinationEntity(64U);
    msg.plan_id.assign("XABNPYYTXCJSKMMWPVZDVTFTSOWRCSQIGZLGVAAPLAGURXIJQ");
    msg.plan_size = 40835U;
    msg.change_time = 0.646855440929;
    msg.change_sid = 33191U;
    msg.change_sname.assign("XSOVBOOFSFOMFUNDHJSEIQLVHRQHZTWDDMEFTMRNDTXMFEFSUAPJYPFRMAEZTJPLKIMTLMUHG");
    const char tmp_msg_0[] = {-103, 26, -91, 14, 41, -64, -96, -80, -81, 69, 5, 85, 53, 40, 123, 78, 97, -42, -1, -112, 79, 114, 7, 33, 2, -12, 121, 13, -110, -51, -81, -5, -85, -84, -91, 103, -123, 114, -35, -8, 42, 102, 90, 92};
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
    msg.setTimeStamp(0.0632135266371);
    msg.setSource(64831U);
    msg.setSourceEntity(180U);
    msg.setDestination(39890U);
    msg.setDestinationEntity(45U);
    msg.type = 169U;
    msg.op = 234U;
    msg.request_id = 19191U;
    msg.plan_id.assign("RXHSIFVCPWIEF");
    msg.flags = 50643U;
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("HEGUPOQJHIYBHTJPLMXCQHISXPZ");
    tmp_msg_0.predicate.assign("ZPVWJEOBKKJDIMLUJDABBLTNIHXEBRDNLXIGNQHUBUYBKCEIQXPZEWLFEQNCLDCPWYLZGNIAYDBXPXYQCYLEASHQQRXCO");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("WITSXWAGXZOVPEBHDSOVYFNBUZPCRCPSXOFNMYZJTIPTRCADWFBLJSQMYTLICOKJBQGVYGLTIJPHQTDBWHGHDCXDKGWZNQWHOULEXZUFCHXSGQHDUVTFRENFAGWPNLSFJMRQESIEUEVYEJFXGRIMCGARNJHUDHMWLILNZJAKTCKCNOEKLUYAXDBIWJPPDUZUOZUTCSZKKYBALMEDEQQVVKSROXJMVFHZABPRVAYTVPIRNIQLMRBOKAYN");
    tmp_tmp_msg_0_0.attr_type = 174U;
    tmp_tmp_msg_0_0.min.assign("ODWYTTEGIASHCPXPLSPTVAPBRKUMHFHNTZMNQIWSSLZJQMEZFDHYNAVEHBUBECDQDOLCMBDWGJCWHIURJAOPRMMMBGCEZRGFHAILFJFKXIQZWYWHXODUBTNGC");
    tmp_tmp_msg_0_0.max.assign("FYRGPBJDWXZGHQQCBNLTLMAZWXGGANMRPNZAMPNCSKTKFBWWCQCPFFVSQQTDXEIUPNYXTNKRX");
    tmp_msg_0.attributes.push_back(tmp_tmp_msg_0_0);
    msg.arg.set(tmp_msg_0);
    msg.info.assign("LEWCVEYXPUJPOXZYEJXTHMPBHEQPDLQVMREYZJENYTLKVKWLPZZBABDXIQSOKNSCKVJKDWSQECFHTWWTKDMVRPSZNHJSGGXMFULNRQKTGPVIZOFKJWSNKLYAAFZJCJELDRUZCULQCTFGUHODDAGDQNXEUINPFMJLLWUGYYWBOAVYRBHTQOHIRTUWDUMIXFDCNCMHJAXCAMNBISBOFZRYNGUISV");

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
    msg.setTimeStamp(0.437596754863);
    msg.setSource(60057U);
    msg.setSourceEntity(98U);
    msg.setDestination(28806U);
    msg.setDestinationEntity(80U);
    msg.type = 164U;
    msg.op = 15U;
    msg.request_id = 44526U;
    msg.plan_id.assign("XADWFCRXHUXUAZXLARSJPKIHHWRBESOEHTGXZNEBQMIMSHYSSIHHWVIOWTFZMMKOOHTNMNECVKLQSXVFDWMDUAGPNFFXKAJTLTVPYFOIY");
    msg.flags = 46505U;
    IMC::Acceleration tmp_msg_0;
    tmp_msg_0.time = 0.518857198516;
    tmp_msg_0.x = 0.807722857209;
    tmp_msg_0.y = 0.42346039762;
    tmp_msg_0.z = 0.902479127587;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("INNPPSNTFDCWUWRLGGEMASFYRUKMRMDVDFTVTCDPMXHXOHETKOBAYXOIQBUKZPMEZTKTFNYSAWCHLGDZKGHHDVCWJFYZSZEOAPDBDUVRCWRQCFWNEXQGWLSVPPNEHBJKBIMRDIJYMJLUICYMLQVXZSSBXHLXNWJVCZZLOTSVCJEIXYEAPAICLKOJFLFSOUWBGYRUFIWJPQOSYMPYUHMZHATXQEDN");

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
    msg.setTimeStamp(0.035100040233);
    msg.setSource(53386U);
    msg.setSourceEntity(132U);
    msg.setDestination(47757U);
    msg.setDestinationEntity(28U);
    msg.type = 197U;
    msg.op = 48U;
    msg.request_id = 34150U;
    msg.plan_id.assign("SGMRYNQWJOEZHEPZGMFHUICQCGRATXLSDHLCKMTISLVUTSVELUMOUDUDISMVBLBRCRTCJKFRNWYKHQEEKIZWULGOAKSYHVNYXOACUZDOFXMNNFPFVZYDWBWRZXDPHVJYDTPBRGVXIHPNPGFTIOPLGWCYOJQQDPHJG");
    msg.flags = 54821U;
    IMC::CloseSession tmp_msg_0;
    tmp_msg_0.sessid = 3010398409U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("UUFMNHGWWRXYENULNGBEFIEQFDJUZEDGIHSJJEBEOAPTQSWAPPNPALX");

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
    msg.setTimeStamp(0.428239566725);
    msg.setSource(34730U);
    msg.setSourceEntity(130U);
    msg.setDestination(14568U);
    msg.setDestinationEntity(193U);
    msg.state = 105U;
    msg.plan_id.assign("BTPOUHBRLZKGYIRECTBPIDYJQLELQF");
    msg.plan_eta = -1823561403;
    msg.plan_progress = 0.225162481632;
    msg.man_id.assign("EYWGLNHQOBODZOHQDIXTZFPVAVDNAERCPAPWAICTFMYYXUSUUUMSWZZMAXYDJDFZEIAFEWISJOECKGQJFXGTPUUSAVZBVLRFFLYLBGPUTOJWBAKZPRCWEJTHXEYTZZOIWFBDIORCIBKONLQHRIDBWVPKXDCKELURJPYLVMWAIEHCXGOKHNGGMNXSKBMWUSQSVDALJRTFGHJKFVREJ");
    msg.man_type = 53611U;
    msg.man_eta = 1455678768;
    msg.last_outcome = 175U;

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
    msg.setTimeStamp(0.975458064945);
    msg.setSource(47855U);
    msg.setSourceEntity(185U);
    msg.setDestination(57686U);
    msg.setDestinationEntity(16U);
    msg.state = 187U;
    msg.plan_id.assign("TMRXNRBUPJNPXBAZYBJIRETUTRPWZRSFTSTXADBAFOJIYJGGTBKUYDNCBVCUOHPEDCOQVJXGCMYQEQGMGQCMLBYHJIPFZWSAPHJOHHPIVKMWQPXTANLSWCIEHGKRFWOSMQAOEYGYZBHNOIKVZOINUUCLRZUEBWFAINTHQLGXMEWLXXEKJWLUDHMDRAZJLVNGMXZCSFAEKLHOLNPNVCGVQYWWFKYRB");
    msg.plan_eta = -1716693655;
    msg.plan_progress = 0.887894734282;
    msg.man_id.assign("EKNTOUWRGXKSQPYPZEDXHPQAERZEZTYCWUJUSLLTLMXZVJFLJZYNLPIXTEESFVAMNRLVOUKXCOFXCDYHPICWXPZFADLVJMOSAVKSIWVJLQHDQCMRTJVYAHBGPDGOVTGMHVWPJRJKYMSRCBUHDECYSTOKOLEQTNNMBHYAWIPIYQKHQZEJNNS");
    msg.man_type = 1789U;
    msg.man_eta = -141105342;
    msg.last_outcome = 166U;

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
    msg.setTimeStamp(0.867400318737);
    msg.setSource(23951U);
    msg.setSourceEntity(243U);
    msg.setDestination(54152U);
    msg.setDestinationEntity(200U);
    msg.state = 96U;
    msg.plan_id.assign("PRYOVEFSERUDYDPGGPHYVRNIKXFCJEDXBUOVWVYQUKRARLXUFJOXWGGCYTIKFLDAVSPPQFVTHDJZUJGNMBDDQBBLNFLGEXKSBOTMEJAKRIMWKYTKRCFCEO");
    msg.plan_eta = -1638976407;
    msg.plan_progress = 0.75635053563;
    msg.man_id.assign("MBKSVAUIGUREZEVMRXQSDPFCNJLRBMCROGGFTUEKKPMJVDTASTZCVICRJOMRQDYZMRJXFWFYXTSGVWUNRPKJHWSIHHUNCWXVGJLNSQKTQQPYPFNWYQADWVLDJBOIIDEUIOEGTGYQGUHVYYQAWEDBBNWFSYAQICGKFWWOBHYZXITIXTTAJBMNOAKJHFAJZHLOMFDNXHCXVRUFKYTHPBLPXKENOLXSZSCZLUGOADM");
    msg.man_type = 21195U;
    msg.man_eta = 1950521731;
    msg.last_outcome = 181U;

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
    msg.setTimeStamp(0.505015067816);
    msg.setSource(30611U);
    msg.setSourceEntity(191U);
    msg.setDestination(21871U);
    msg.setDestinationEntity(32U);
    msg.name.assign("HABTJDOOTREJFGKNFVZMSYBQMUNBYEDETPDVOZYYCBDOEALNLFCMGXKFOPKLIMDBYADTXZMKTCRBSVGLXUIZAPPVEVXOINTWDLIHKWCFURHRDISIQJENZUTPKIGMBXLPKLHIGLCAXSFTHRRPUNUMKYOMGZEFEZQZQNUVHVZHVCYYSIJPWJYRSBFXAVBHXOQGKJKWNCREOQQJECWMFXQ");
    msg.value.assign("TWRWCSZQDNSPYKMXZUEWKBWWEEBREMEGGVUQEZJEHVBIPSTUSYDZAMTDZKDZRUPMOMDTFJKHTSFLLNPNORTVFGUGLXREQZMLJECVOCVYHLKURWNHADNCRGBQFBUMVQXAGTDHPIQUALPOFKRBITHILINFLALCWOQJSMGZJNCOMXZUCGJOJOYVHTDBXWYXXRIDJFPVAY");
    msg.type = 62U;
    msg.access = 14U;

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
    msg.setTimeStamp(0.943210819028);
    msg.setSource(39327U);
    msg.setSourceEntity(57U);
    msg.setDestination(8991U);
    msg.setDestinationEntity(38U);
    msg.name.assign("LUXTXCTRMEJKYCJMYQYXNWGYADVQDBPEUQHSMEENTAQYBZKTFVNIQHFXWWIHBZSKMGNHP");
    msg.value.assign("XMEDMFFSTSQLYHKERUVQGHAIMMRJOCIPSYUGRRDGSJTUWZYNULYZOKJDYPAEYKIURGWSOJABRIAWBRBMGXTUTKDPQ");
    msg.type = 147U;
    msg.access = 185U;

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
    msg.setTimeStamp(0.041225686891);
    msg.setSource(51567U);
    msg.setSourceEntity(114U);
    msg.setDestination(12872U);
    msg.setDestinationEntity(163U);
    msg.name.assign("RSZHCZJNABGXVWAWYDYHJWFGVJLMMJGIZFSPJQNXHCVUWFNWSEORUAHZUEFKYGQACKWITEEAZYITQFTMVYLZKUUQQSFKECBVPXEQOPHKIDPTZR");
    msg.value.assign("EKGYMVCJHUWZSSQEQELRJYTXMQIUOORABBTVFRNGLGXIKHCBSVLFZPNMVCQVGQIYIUAONJZDTJFKNKQJLVWSTQHXLYWIOGJXVYAFGBSHUDOKLOHLMKDYNSWCLJAOCCNWIQBIOXIPFIWEBJOFO");
    msg.type = 155U;
    msg.access = 17U;

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
    msg.setTimeStamp(0.00178971926531);
    msg.setSource(24132U);
    msg.setSourceEntity(16U);
    msg.setDestination(23356U);
    msg.setDestinationEntity(41U);
    msg.cmd = 68U;
    msg.op = 76U;
    msg.plan_id.assign("KMWOZWMJNTFUWHUQSUGARDQRXJZMHYVCYLWNNFUMEEUSCWADUKRXVBCGZGNYYLVOEEKPFRLTOBSPVQSLHMSJKLEZINZGDMSURQNCLJIJTVEAXTBTAEY");
    msg.params.assign("FEPIEXCXWRFVPMHAIVLQCMQAZXXJKJHZ");

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
    msg.setTimeStamp(0.0932330815611);
    msg.setSource(48217U);
    msg.setSourceEntity(90U);
    msg.setDestination(12021U);
    msg.setDestinationEntity(8U);
    msg.cmd = 20U;
    msg.op = 213U;
    msg.plan_id.assign("HRCVKJSIESWSJGDITGXUF");
    msg.params.assign("WETSIBGSYGHIXPBMTJIOSHDOCRFKOYGEFEOQUAOCSQORJSMQYMOZKEKPJNPVABKRMXXFAJBZAYIAJLZARMCGTNIDWPYFUMDRMUWZSBPCEPJDNLHXZNTVKZKGFNKRVWHTWOSHZDUZUBXLWQLRWAGNLWKVYBHDCEVGEFTVLLSFRXDFOACWKNEIVLQCNJASNLHAHIRQGYEJNWJQPVHXFTPITPFULRYYOMQDQGUBDXYZKVCGBDMQCXUTUPBIEI");

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
    msg.setTimeStamp(0.762180869431);
    msg.setSource(42907U);
    msg.setSourceEntity(95U);
    msg.setDestination(17249U);
    msg.setDestinationEntity(12U);
    msg.cmd = 75U;
    msg.op = 206U;
    msg.plan_id.assign("YUVZFFZHLYFVKZIQODJRSBPVWQNDPCAXYBVGYSEOZXNLRXHZJVNMYLTCNSJEQKWFQNNZUBIWLVXOUGCPHHMQATDLRNQSRWKPJMZMISVKZXVIXXTLFMYEGOMEKAJBFTXCNUFJAWBNUJZGGKDPOETQKJTCPBAEBOWSRGCUGJYHUHERJUDACBKSLPAQTDSUOWIIDYCUERFEDMFOPRPVCQLERAMWIGVPXWZHAHDMOWIISINHHBKRM");
    msg.params.assign("LHIPAIQBSHPORDAMGZYUWKENQBIVDYTDZWCDFNCHJDFGYLOAWUATCPTVRCENMETXYHNMTVFIMYNBJKIGSHRNEFNOLBDDRSDXZGFKWSMIVLXNIIUHCEOASXZCLPARMOJVWC");

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
    msg.setTimeStamp(0.790094395516);
    msg.setSource(53626U);
    msg.setSourceEntity(187U);
    msg.setDestination(3577U);
    msg.setDestinationEntity(45U);
    msg.group_name.assign("HEKGTWUSPYTLIBNTXJGFHDUSVWAWCNYDBMTIITFJJLAXKHVAQMBSWADIPJAVCZHUVOKKHROHQFAORALKK");
    msg.op = 195U;
    msg.lat = 0.29091155857;
    msg.lon = 0.553374780315;
    msg.height = 0.811446876109;
    msg.x = 0.0985831097369;
    msg.y = 0.590296845316;
    msg.z = 0.418985648758;
    msg.phi = 0.66195557367;
    msg.theta = 0.696464112196;
    msg.psi = 0.0553979969474;
    msg.vx = 0.550991444743;
    msg.vy = 0.123707368328;
    msg.vz = 0.491210906103;
    msg.p = 0.42096794261;
    msg.q = 0.593919616408;
    msg.r = 0.248667614954;
    msg.svx = 0.0895916303375;
    msg.svy = 0.381801494266;
    msg.svz = 0.0304992838295;

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
    msg.setTimeStamp(0.936879777387);
    msg.setSource(44444U);
    msg.setSourceEntity(213U);
    msg.setDestination(17291U);
    msg.setDestinationEntity(105U);
    msg.group_name.assign("VAGNYVDJRNEAIHIQXUWFDETLFKBQGJABIDESVPZBFPWTEQFXDEZDAWIZBKIHWRTUQSMNQIWGUKTQEMZFPSSRSAYBRCTHVNBWVOGLLDOFVGOJOEWNTFBEFQYPYNSMKZJMWUNAMTNWTLKCYALHCJALCAQPKVUBBGIPHDKMXSGLAMTEHRPYIOPXUUJULUVFIFJGXQVCCRJRHRJQGSXSHMZOVMZUEXXKCKLGTHMZSKYORCNDNOJBIDLOXOZCC");
    msg.op = 132U;
    msg.lat = 0.835655542763;
    msg.lon = 0.677222052902;
    msg.height = 0.100048789635;
    msg.x = 0.643662839063;
    msg.y = 0.534530304704;
    msg.z = 0.441511269271;
    msg.phi = 0.118205299744;
    msg.theta = 0.717092666013;
    msg.psi = 0.991922373048;
    msg.vx = 0.583022464177;
    msg.vy = 0.00407697883067;
    msg.vz = 0.572238019745;
    msg.p = 0.825881992284;
    msg.q = 0.742099252114;
    msg.r = 0.211243736786;
    msg.svx = 0.672528808314;
    msg.svy = 0.996170731124;
    msg.svz = 0.559238786346;

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
    msg.setTimeStamp(0.818381756808);
    msg.setSource(14646U);
    msg.setSourceEntity(194U);
    msg.setDestination(40189U);
    msg.setDestinationEntity(121U);
    msg.group_name.assign("CPGDWFKQGEGYFNWRYDUJ");
    msg.op = 135U;
    msg.lat = 0.624313581666;
    msg.lon = 0.421598516802;
    msg.height = 0.196518546504;
    msg.x = 0.430260086184;
    msg.y = 0.35162765711;
    msg.z = 0.595995914272;
    msg.phi = 0.855159139548;
    msg.theta = 0.858471335792;
    msg.psi = 0.404303586706;
    msg.vx = 0.707874847682;
    msg.vy = 0.973751337631;
    msg.vz = 0.205566257121;
    msg.p = 0.451940524511;
    msg.q = 0.43309204117;
    msg.r = 0.576460099377;
    msg.svx = 0.69243988566;
    msg.svy = 0.0825613399351;
    msg.svz = 0.991191000406;

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
    msg.setTimeStamp(0.840955511943);
    msg.setSource(36180U);
    msg.setSourceEntity(179U);
    msg.setDestination(33709U);
    msg.setDestinationEntity(203U);
    msg.plan_id.assign("JLNBHKJQFIRFRHWNWSGHEVUCYYSEKXBACAYJEDHQAMWOPKSLRTYYTDQXQORTJKYQXDTOKLXAGFNJBVBEFEAYGXNZPVQRPHWWVCMAHTBXGNFYKJACNTCVGOVOMUMGRBDZWFLIZFXHCQEZDSIJNLSIWDEJMBYEVGLMABKZZ");
    msg.type = 16U;
    msg.properties = 150U;
    msg.durations.assign("RJVASBHNSVGUCTIKAWPSDPCJFICBAWGCQDWOWZLUVHWRRMJGBCIYMQLAVQJWNBLUSSXWPEDRKUOZHENAUNFXJRZAAKGSMGEYXZNRGODQHMAPEYHFIVHNFNIYTRQWDEFJOGMMXBUVHXXIJTKIKPIBTHWYZOXZCOYKLDUQXLCVXQTBJMFOYLYKOMBTZZPMTSGKZFZPSBCLRHETPGMPWVOOQFTKUSE");
    msg.distances.assign("BOETMIVGKALKNOWZLMEUKEQBLHINTSDGDBPEQWHHAPLXORIKDMHTNFMAMFLQHUQGUCBSWJGLPPUZXWWMROZEEIKCEYJDCWNHFGJXOYCVZPUFRMJXKFUJQWBBVSARQBDIULXBOHYUJTISYHUCTRFSZZAYTRHIVZNGENIFDARPPVOMNCDPDFYTCQLSWTEGXKXDJMZKKAOSBVNTLYLKVJXRSGYFEVGWWZSMIPQAGXYBAJRSVCNQUQ");
    msg.actions.assign("KTOKWUZQCPIWNEBMOIKBFVNYKLGHDMYSTSZI");
    msg.fuel.assign("GBPCDGUQHHEZILFABWENPTYNIVQCIJQETDMXTDRATQCLNHOGBEKDAKCFYJDHWXXHYEFZDKRQDMXUSQAAHYRCPXSNRHTRSKECZRKYKZIMDYBVJ");

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
    msg.setTimeStamp(0.203276106461);
    msg.setSource(1866U);
    msg.setSourceEntity(241U);
    msg.setDestination(44257U);
    msg.setDestinationEntity(163U);
    msg.plan_id.assign("HJTDNACONQLUPEMXIHZRDYESICHXSAYOGWPPIUFNUUBTSQQZJRBBZOQAKNCNWTMSNLPDFRBZAEQKKERECQWLBJYTPXCRXWJISYLXOOGMQYFJSBRJGZGPUNNVSJIUHQLXFHPMBCZCWKCHNZEWOSLVLGITEXUAOODURLARZZMVPVQRDUIYTMLYFEPDCHBNQKDHTTDKMVA");
    msg.type = 73U;
    msg.properties = 141U;
    msg.durations.assign("TOFKBXPVNUMQYXJLICWVDFRKRVZWHSKDHXDWOVVFHWHZOTHILAOQER");
    msg.distances.assign("XGKCQJZFZZKKYHXUSPOWYOCJLVVAEPAULXDJPPAVLRSJMRDDBASYREQUKGNSLHOUWCAZNXXOTMYOFFGULFPHDYDJXTLZAJOWODDHKUW");
    msg.actions.assign("TROJOEDVNPNWUEDUNIVGMEGGHLIQZXJCIAJOCCFDMOIXPRLVWLCHVSNYZYKLSYBKKNXURAANNGIXBITYDQACRSGOPJJIGQHKFSBQYTGKNXRQUYAPNUOKIGRTFJLKLRWWQBSZXDQTKSMWZTWCHTMZZ");
    msg.fuel.assign("UQBADXRIFPUXMUAYOCXUVNCVGCMPMILKOSGYEDLMECZHZMTHRVXONOSWFPICEBQEXEYLEDTHJJHSQUPIWQZQILKAONUUBWGZGFCJTZZTFMHLEMJQGKGUKBHOFRMQNJIYXBTDOTSAVEJNVNCDBTSSJRKSIMKVDAPRRCJXAFHJLBDQUTEZNTWHDUNWGVIAYFOHXWDRKLKDLGPLOVXGSQBJOYRXASI");

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
    msg.setTimeStamp(0.57294431003);
    msg.setSource(60841U);
    msg.setSourceEntity(2U);
    msg.setDestination(42092U);
    msg.setDestinationEntity(110U);
    msg.plan_id.assign("KHVKPQXEFLADTLZYYYHGWRSVGPMPOEVXFTWBKJPYDGADWZUHTFGELBHUBOEOHNMPOYQIPJIAAFICDOMRUJIABVJBWYKRRRMCAZFJQSTCOSQIQHLDNPICVLPWDHGGETIJKTNYZMQNKJKQVOCOKMLCYGCBTSCYCWBZUKINSRXMFDNLEDEMVTWUERKVGYZEXGONIWFSBNXOXJLWUVNXSHATSDNLZZRSCDHJQATFERXSUXMIQMXHBV");
    msg.type = 224U;
    msg.properties = 186U;
    msg.durations.assign("SQBQOYXMYVEGGCRHPWJKJJZUESJTVQULXNSIKLYAPZWHCQYJWDYEDFZWKJZGOSCMZMIUAOASZVROKSCBCIUCAEGNOFEJTYIVMRIWKARYELBNOAPXLUDZIXKHWIHFJZADBSWRJHUDCKPCMAFOFTVWRVQYTDKPPMTBSNHBNOEUFSCQFGDQWRLQIXMEIFDTJQLWLGTHQARHCUSPNGLZUXVXOVOPG");
    msg.distances.assign("TMABUKBDSQBMLZZVILEEJZQORIMSDXDKJPVFZFVOZAAZQNIETGPHWYLBZKJP");
    msg.actions.assign("QHQNCUMAWAVGJYIMKYEMVKOKYOZHNEQALOSDQNSJZLGPRJLEJBKDVLUFEDWIATNOOFTECZGIJYYSWQFFBEFHIURIYPVGXLKEGMPBBOYZNTPOSZDAJXFRNPJKVYHCVOGWLMAZCPGJXYKINPMDURKQHTLUWCGXXDHLXHDCQWZFTDBMWTABKBITOSZTIWXDHURXLQXRTOGSMQMFXHSUEASIIZNYRVRATNBJNP");
    msg.fuel.assign("ZCTYDHECNBYCMWNVFVSUKLWTOQPTCRZBQNDIJSGUURFWOGIAEXIURKBQHBVVDSUGRRHEGIXPM");

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
    msg.setTimeStamp(0.894574899964);
    msg.setSource(56418U);
    msg.setSourceEntity(84U);
    msg.setDestination(57165U);
    msg.setDestinationEntity(186U);
    msg.lat = 0.0771648350245;
    msg.lon = 0.963030932732;
    msg.depth = 0.443645362192;
    msg.roll = 0.618156774732;
    msg.pitch = 0.282718445351;
    msg.yaw = 0.893981279501;
    msg.rcp_time = 0.329490904517;
    msg.sid.assign("RTNDAHFHVPYXGBRKJZBPXXDXGDUQQBOWALMPHBEOKPOZTDNGEWHAHXIVMUXYOIPSUHCDMFPVBTGBLZFDNGAMEUVAZUKYIHWSMSBCDCFRJKDQQJLWZCLIJHOSTROFYNVRTEZVYXYUSAQEMBGOERSILRZSNVOXTHPFRKIURMJMVYRLGCTGJIYQZNXQDMKIFAVCQGANKFWOZPPWBMDLUJ");
    msg.s_type = 88U;

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
    msg.setTimeStamp(0.586704365092);
    msg.setSource(8336U);
    msg.setSourceEntity(43U);
    msg.setDestination(16831U);
    msg.setDestinationEntity(87U);
    msg.lat = 0.440948312569;
    msg.lon = 0.889908801201;
    msg.depth = 0.866630092124;
    msg.roll = 0.582477717072;
    msg.pitch = 0.381085375633;
    msg.yaw = 0.301421190156;
    msg.rcp_time = 0.0913686799645;
    msg.sid.assign("PWMRTODMGMTJIFRNIWZIOQRHQANESJYGAVFBCMZQAXLUDRKWEXXNLZCHPNKOZOIYVQHRWHLSUQVEVCPDZKCTYOZDUQOAFILNDDLBEJTKNJSXCRYACLOUTNPESGEJBDJCJTHSCRWXZSVSVFRGTYBNPXHAXQEJVOSKDUMJHFWKTQRWBFIPGGPBAZVBFTGVUZLHMMAFUPIMNT");
    msg.s_type = 106U;

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
    msg.setTimeStamp(0.332954730975);
    msg.setSource(26576U);
    msg.setSourceEntity(93U);
    msg.setDestination(42948U);
    msg.setDestinationEntity(142U);
    msg.lat = 0.598029875304;
    msg.lon = 0.277047556233;
    msg.depth = 0.344048515815;
    msg.roll = 0.0565695144557;
    msg.pitch = 0.015695271891;
    msg.yaw = 0.0958083254401;
    msg.rcp_time = 0.252147810078;
    msg.sid.assign("NKRRSGKSVCCVSVLIMMAAYKPMCCFJARKOXNREBUNGTPJRCWFBTUNUATNTUWOMNLMRAZUQHPXHPBSLMBFLYWXHFIKKLCFAHTZMNPGIDVWIXOEDLDLZEUXDJCREZQDFXCOGPFBEEBTYQQJGQXGYTGOOZCZSVHPJWEWSWNPJUDXFQYHVVXLFWHJQJXQ");
    msg.s_type = 220U;

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
    msg.setTimeStamp(0.469534723977);
    msg.setSource(63542U);
    msg.setSourceEntity(108U);
    msg.setDestination(57793U);
    msg.setDestinationEntity(234U);
    msg.id.assign("EAXEEGQRFRGSBFEMMZFPNCQFLJOMCAZELRIZNSAUNGYNXGHPHOLOQIQFWVDVRDJQCJVWXGLUTKSWBVJXHSMRZKLYUDMBHICEQSTGJZTVRXACBNXWUCVUJJIXMAGPEDYSEGYSOHAYZZBHVRGLPFOPACC");
    msg.sensor_class.assign("IQOFZFJBGERXOJCIGRQXKUMULGNAHCSYLZFZGWOARFMSWCUGQABKMUVJQPDHXROAYVYSERIHOEZOUGXCIDEBYBKWSHZNPTUYUYVWBTLFPTIATD");
    msg.lat = 0.44423957791;
    msg.lon = 0.429408020598;
    msg.alt = 0.470576871094;
    msg.heading = 0.368523920971;
    msg.data.assign("JAWPOKDVAMFYCKU");

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
    msg.setTimeStamp(0.500436345558);
    msg.setSource(5958U);
    msg.setSourceEntity(252U);
    msg.setDestination(29869U);
    msg.setDestinationEntity(137U);
    msg.id.assign("MLYPOSNWUDGGFEJQUJNURKHSNBYLVLINIJJSDBLMUJPYAYBEWNBQBGHHPIVDCXKRTEXWPNCHMCCKZTMDRIQEYATMAPZBKZLYXRJRUYAUIOETYVSMFPERXNABGMVEUHRQTLIOFXLZHGBRKZZEDKXAWBLNQQCGIKCFKCFUWHPVIJDXSXFDWBCWFAGFSGYSFWHUSQATQSCCOEODVDYGQMHKONTRNEOOZMAJZVUS");
    msg.sensor_class.assign("LQKKLEQUAEZDPIZDZXJSUEFRTDLWIIBSMVUAEUAEYKYXYUVZRKWRENVYPODASSTCGGIJJIOHTM");
    msg.lat = 0.295511275807;
    msg.lon = 0.354207753287;
    msg.alt = 0.36558881309;
    msg.heading = 0.756198587312;
    msg.data.assign("HEUCTKNPCQZKNIZNUGAQGTOMLQJPAITXGTIZRWSCOUVSTQXFPJ");

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
    msg.setTimeStamp(0.172614046654);
    msg.setSource(55437U);
    msg.setSourceEntity(15U);
    msg.setDestination(3800U);
    msg.setDestinationEntity(90U);
    msg.id.assign("GZGIHNHLXPOPRDESDWBDDXLKBGPNHDPFHNCAGETKOMSEFHIRRNPAKFYVIDBZVGKRWHHEOQPEYBSZRFQRNCSWDWBSMOMCXJAKWYDFVVQOIUPLOJSWTVZVYJNFYZBLUGFFY");
    msg.sensor_class.assign("EZMNLWGEOOVMBVFKNADAQFRTCEVFGZACKSOJSPMZQURSJXUJOYAIJOWH");
    msg.lat = 0.216574652607;
    msg.lon = 0.277893806422;
    msg.alt = 0.720497122445;
    msg.heading = 0.314593135779;
    msg.data.assign("RXGAVESMOYVKTHLAXRDBTNQTKREAIRPEKLQZSVFLHUESZFMICOQQWJHPDBTJLYAPOKOKNVEASWJUKJFZYGVHRKQWQGLXUYFMWEXAUPGKDGXHTBSRFWCQCCZMCUUJNBBOVNLDMLTJGDYLHDHRHNRAIMBCPWZRQBOFJPXWCIMNXNUTPLNNOYSYIBWSAZUEFEFFOIEKZFJQHVGAZTCZNWVGMPIDYUSPHDPJLMYDTCCYDKGOSUG");

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
    msg.setTimeStamp(0.751242755151);
    msg.setSource(40625U);
    msg.setSourceEntity(220U);
    msg.setDestination(51360U);
    msg.setDestinationEntity(81U);
    msg.id.assign("FLVGVLSRWIEPARUVAIAHUIKSQJUJIDCOFNMUDYBWCNHOTXBYNFX");

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
    msg.setTimeStamp(0.155780543765);
    msg.setSource(41749U);
    msg.setSourceEntity(220U);
    msg.setDestination(29374U);
    msg.setDestinationEntity(1U);
    msg.id.assign("DHYQEBKAFAJEGGVNYXWBRNRJAXWTUPDNGOZQOAGORYSXMMVT");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("VKHFJTTYWZQBKDSXWCROVUBQAZWRRDJJSIOMQBUBKKAIDYVWFCBJNKTCYMKQECMGSECKEUNVBSRMHRRZAPGHMLHCXJJZXLLCMOHDTXVUIORHNSYLPZYPPAZCRNDDTVWMPTYULGWEJWAEEHPGKRFTLTNEGZATPOLIDZUGUYDODJSQGXSQYLGFKYFFWIPJNWABVMVIGFOSHUQMLQAFUNVACNQNEFPRSIAOQOXYINEISHB");
    tmp_msg_0.feature_type = 10U;
    tmp_msg_0.rgb_red = 188U;
    tmp_msg_0.rgb_green = 170U;
    tmp_msg_0.rgb_blue = 214U;
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
    msg.setTimeStamp(0.874033344748);
    msg.setSource(34134U);
    msg.setSourceEntity(171U);
    msg.setDestination(2508U);
    msg.setDestinationEntity(169U);
    msg.id.assign("XHURUSEIZFBMQMLPJJMETKEPBUFOUZPBFOXZSEPATSCSWPSPGTWVHLSDBYBWECDUAGVVYVAWFSTBYVPLNXXHOZPFNBOJRUMFFSTDQORY");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("WDUCXHGSJGPIKIEQDRFQIZRXEURDMDYIMODBRXWJTJAJLMJFBUNQRTVGRTZRNXAOCMTUCLQVCQBDOUVHERTYKKKBGSHX");
    tmp_msg_0.feature_type = 116U;
    tmp_msg_0.rgb_red = 129U;
    tmp_msg_0.rgb_green = 186U;
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
    msg.setTimeStamp(0.713798419702);
    msg.setSource(34398U);
    msg.setSourceEntity(157U);
    msg.setDestination(55948U);
    msg.setDestinationEntity(6U);
    msg.id.assign("XOKGKBNHTWBMOJCAWPOEWHLYERDERIXHLDMOKIIIMOYRXOUHWRJGAUHFJPTSDAWRCUFBTWBQVCSEEASOLUSXCKLAVGNYXVKIMSLAHFYPLOJUMGSXKPQYPQDZVMHUDHYKBLLFDLKTXFOYGKDDNZ");
    msg.feature_type = 78U;
    msg.rgb_red = 197U;
    msg.rgb_green = 66U;
    msg.rgb_blue = 43U;

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
    msg.setTimeStamp(0.475277484671);
    msg.setSource(63143U);
    msg.setSourceEntity(213U);
    msg.setDestination(38768U);
    msg.setDestinationEntity(208U);
    msg.id.assign("GPJYTVVYSETCUDTDRQRUERIUZPSYKZLWQXOQLCIAFLOLCKYKONACPFMZRVRSBSDNCMEHEZKGPMOVVTBIFGKFAKE");
    msg.feature_type = 131U;
    msg.rgb_red = 152U;
    msg.rgb_green = 161U;
    msg.rgb_blue = 241U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.026115712912;
    tmp_msg_0.lon = 0.33358332749;
    tmp_msg_0.alt = 0.257771056629;
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
    msg.setTimeStamp(0.881090322535);
    msg.setSource(40926U);
    msg.setSourceEntity(55U);
    msg.setDestination(63483U);
    msg.setDestinationEntity(233U);
    msg.id.assign("FJJHQAPBBONCSQVBPGGAIUQZAVTXIIGRGDBCSMZKEWVWTPCRIAKSNOBBROYJZWYHXNOMLXJNKHCGWI");
    msg.feature_type = 160U;
    msg.rgb_red = 191U;
    msg.rgb_green = 58U;
    msg.rgb_blue = 248U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.260224287656;
    tmp_msg_0.lon = 0.697725846695;
    tmp_msg_0.alt = 0.783958736471;
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
    msg.setTimeStamp(0.404122844922);
    msg.setSource(53321U);
    msg.setSourceEntity(175U);
    msg.setDestination(51626U);
    msg.setDestinationEntity(55U);
    msg.lat = 0.850956345534;
    msg.lon = 0.564097296186;
    msg.alt = 0.265521800065;

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
    msg.setTimeStamp(0.0317888355386);
    msg.setSource(41507U);
    msg.setSourceEntity(237U);
    msg.setDestination(30363U);
    msg.setDestinationEntity(96U);
    msg.lat = 0.117479086802;
    msg.lon = 0.387777434366;
    msg.alt = 0.989951984033;

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
    msg.setTimeStamp(0.159670756869);
    msg.setSource(42913U);
    msg.setSourceEntity(41U);
    msg.setDestination(29713U);
    msg.setDestinationEntity(135U);
    msg.lat = 0.209567554262;
    msg.lon = 0.832989082916;
    msg.alt = 0.703093130092;

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
    msg.setTimeStamp(0.0155006760785);
    msg.setSource(19171U);
    msg.setSourceEntity(145U);
    msg.setDestination(54494U);
    msg.setDestinationEntity(168U);
    msg.type = 171U;
    msg.id.assign("KUPFTVQYNJERRHQGIHMSODAHDEWTJLYCEGMWBOFCOYVWODUETTJFEIBWDGAXKTXKKLSZMSRXJUIQIOIEPXLAXFZLGKSCWHZPMBYXMWLNOGBICGZACYMMVRMVKNBKKYQEZAXJNBVDCEBLUJJBFMJGSTURJCRWPBSUVHPDXHLVLAEFQTZLNHRUOHNUZASUANIZQ");
    IMC::CommSystemsQuery tmp_msg_0;
    tmp_msg_0.type = 139U;
    tmp_msg_0.comm_interface = 26983U;
    tmp_msg_0.model = 59315U;
    tmp_msg_0.list.assign("HALKBZMIOFWKITIGRDBKJBQTDAZFHZVILOYLNURMQEAJHMBPVFHOVROSJNXJZEQGDHJGFUHSESOMXTGTNVFECPWISBMAYRUHUMBMVLEDWAJXZOPWFTWPXHOVNYWNLJFLRKZAQOLWUYYUQLSBERUZUTKNGKGSQPPTPDEIFTADXICNYQVXKVCDMXRLWGQBPOCIAUXHYQYSCTVSKBHFYXCCJE");
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
    msg.setTimeStamp(0.0993478618964);
    msg.setSource(50612U);
    msg.setSourceEntity(58U);
    msg.setDestination(34872U);
    msg.setDestinationEntity(50U);
    msg.type = 252U;
    msg.id.assign("HIVPLMAWTRQOJDUHTERJIAYVQCGBQNCSQEBKFRZUIVQADOZJJAYAMHLVYFLGGJCIEHGTMSORVBZGAKTXOTVGLKSPVNXFUIQMIKZEIYXHMOSJZFYKMVSWGQPMCBJFLSZCBXRNP");
    IMC::ClockControl tmp_msg_0;
    tmp_msg_0.op = 100U;
    tmp_msg_0.clock = 0.335572397476;
    tmp_msg_0.tz = 94;
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
    msg.setTimeStamp(0.196407652674);
    msg.setSource(51804U);
    msg.setSourceEntity(28U);
    msg.setDestination(51019U);
    msg.setDestinationEntity(31U);
    msg.type = 224U;
    msg.id.assign("UIYLHWMXKLYXSOAIDBHZAGXCJPIPVYCTUWGLRWDUHKBMHEUAGPRRXAKKUSVRFSBSCJTPOODQTBAETWZTJD");
    IMC::FineOil tmp_msg_0;
    tmp_msg_0.value = 0.257022219788;
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
    msg.setTimeStamp(0.42678530202);
    msg.setSource(42057U);
    msg.setSourceEntity(40U);
    msg.setDestination(6685U);
    msg.setDestinationEntity(124U);
    msg.id.assign("ALJOJWCTMONOFBANMUJWLDMGCUCNOGMYXNRKGZGWPEQTKZONZAESLUNLQGVMHFRWOKACKJEASUVCZSIZDHZXFHIMWPQRPVJHBQEOKIVWBZLEVIYAKNYFFNWQSHQYQBKXTSATZJXSJGYEDEYXTLOUIBALYPNAMPLPDFEKBXRLKVGPOJEXHZIYRUC");
    msg.callsign.assign("MXKQBAFHAPZOYMIZWGRYKVAESIFSYHXVLGURGTDJXWJGELDXXQLXKAOXUUECBDKIZNLLKBULYURM");
    msg.name.assign("VPXLHRZIESYXRTUYNBLDQYGOOSURWZJEOBFYNEAPF");
    msg.type_and_cargo = 91U;
    msg.a = 0.986965470217;
    msg.b = 0.965363302564;
    msg.c = 0.773287580146;
    msg.d = 0.815350456102;

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
    msg.setTimeStamp(0.343084281862);
    msg.setSource(48963U);
    msg.setSourceEntity(182U);
    msg.setDestination(65213U);
    msg.setDestinationEntity(79U);
    msg.id.assign("BOPLOHUWXSVZMPCFNSKTZYVDWZICBVMLBWURCNFZOUYMYHBGWNOIEDKZJEQFCWIZFDWKEHJALPJIOKYQASCYUENLURVEKGZICJYONPSKSDZASCQWXTWSKNG");
    msg.callsign.assign("SNBQLRUJEBSXCFKXKRBFOODDEVCIBXRNZAOFOBHVJNYKPUIMYELZHTGFSEODOMSZLNQQPDPFCUTORONRYLGXHRWPACUUXGXSMLZYXEATTSJLBQKWGFXZIDPIGYMRUWLAJKCTDKVADKTIDNIAAHYOBWCTZWMSOQGEJQBPFRKYPDENULVMGKXJPEYVFZQQQHFCMSVLJAG");
    msg.name.assign("QRCCJAQJAWCZLELRJNGOWFBKLFPJHNUSNQCXVEUTPIKYLGTUGVCOKWCDAZTDHDTPBZXIPCRWSHNTPLVABBSBKIZZZUWRGTRFQRDYPYQMOPIEEQWVVGRLVSFINSDKWMSQUXCKCSWAHMDRDORBNFHNSLVMFXIJIPQSDJEOEVRGXNLEHKKGXMNNMGYJHBAAFMZUYPBEG");
    msg.type_and_cargo = 116U;
    msg.a = 0.703659434428;
    msg.b = 0.822275123985;
    msg.c = 0.944707317993;
    msg.d = 0.138945224523;

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
    msg.setTimeStamp(0.507836970753);
    msg.setSource(11204U);
    msg.setSourceEntity(233U);
    msg.setDestination(15716U);
    msg.setDestinationEntity(97U);
    msg.id.assign("CRLDOWVEQAGJOLXASHYZOBGIMDCWTCDJGJMTAOXVZORCXEDESSHSSKED");
    msg.callsign.assign("DHNSQGOPVZLOQIREFPTDMNUKPIZSWCPXECJHIDITZAPPJSOGCZKFQJXBNCMLVUTMWARVSZIXFEXYQSRNVVWWLPZVRWMXRWGERTWFGNHCKCJGWDNDTLKUCNBUIYOAGANKXMQTCMXROGEKXVBBDPMAFUPHLTY");
    msg.name.assign("WEPRBMIFIGSQJQOEZVZWVLETGHJMKMUNAYNAVSQBCTMMKRKDAQIRVRSJSCEHYYRKUPLYWKUVPRQFOTVBNZOLFHEHWUMGGQLPONQLEDZBHGYCDITWXRXNXIGHNADROHMFAIUGREIFVKYYAVVZOUXMBDFHOXBLSFJJGXNKWJTPWCHYPDADCXLVWNLBYCTXC");
    msg.type_and_cargo = 165U;
    msg.a = 0.7281375664;
    msg.b = 0.435224843442;
    msg.c = 0.349601091096;
    msg.d = 0.509708764465;

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
    msg.setTimeStamp(0.890343597819);
    msg.setSource(65277U);
    msg.setSourceEntity(89U);
    msg.setDestination(46709U);
    msg.setDestinationEntity(48U);
    msg.localname.assign("BACEIXPZSMJWMKABKQZMXMOOAXIAPBZJENEBSQSELVJVGINVSAFDGWXJDCZNOBHATRHGKTWCRYNRYWYJDLCKTJESHLDFUQVYIUAFHFKUHISISZOZAPCOAGVACFBKLHYXRJMG");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("VHBMGDHYTILQSGMXRVULTKHWFKQDOEJYLFUPHTCROMONATMODRRLRXKDJGJFYKCFVVZIOQWIQEELGBPEACZTDCIYRUIAEWNOSDWUGXBVFAHWCKQXVXFBEKJYAIQUEMPRGNBLNYKJBJZDZUPPLMTIZWJSWNWGDTMYVCYOVRCKXHCQTSDKEPMXXMHIQLIAGZKSBNUCXAAJXCZOPZVUVNHRBFFPZSOBBTGNAHWYUJZOPJQHNNSP");
    tmp_msg_0.sys_type = 20U;
    tmp_msg_0.owner = 22203U;
    tmp_msg_0.lat = 0.0799418996968;
    tmp_msg_0.lon = 0.926620785252;
    tmp_msg_0.height = 0.177992795797;
    tmp_msg_0.services.assign("JXLXBDTEJETASGMBORWSPOLOUWWSITDHMCMHJPXTNCHDWVZFCBKZARZHCARSEAJHXLNMIUNJFOYVUAKQWYBQNEQVGTLIKQFSCYGPIPPTAZEZQDWPZIFJPUKFXYRUDOVFWPBVBNYPMTEIOVKM");
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
    msg.setTimeStamp(0.590260767805);
    msg.setSource(52201U);
    msg.setSourceEntity(59U);
    msg.setDestination(58259U);
    msg.setDestinationEntity(34U);
    msg.localname.assign("BMUCASOUGLOHDWAAWBHMZLX");

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
    msg.setTimeStamp(0.884240910579);
    msg.setSource(9779U);
    msg.setSourceEntity(94U);
    msg.setDestination(55041U);
    msg.setDestinationEntity(106U);
    msg.localname.assign("QVVIZGPGFQRCMPDWJNVAAHMIPIXLVYJBUENGBTYXHACELILXIKOPQOQTNZEGAKMFRHQPGRYUGWXNPLPZWABKEYMIOJMUUCKAT");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("CPFZKMBPTFJQBCEKZLCUP");
    tmp_msg_0.sys_type = 161U;
    tmp_msg_0.owner = 4812U;
    tmp_msg_0.lat = 0.55301387292;
    tmp_msg_0.lon = 0.124670759217;
    tmp_msg_0.height = 0.923922877809;
    tmp_msg_0.services.assign("JGETBFWAISLHPENSBIHPPMAGHTYAYSPMGFJKADMWJQVVHMCBTCKWDKXUZFOIAIFEVNOUNVXNMBJPXTKNBYLQKJFFGRWGQWKVRIILTUTERCUFQGQDEKIRSRYYXWNHHVZIGUZZTBZQCULDLFJYCHXYSISSWQAR");
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
    msg.setTimeStamp(0.899889066731);
    msg.setSource(63307U);
    msg.setSourceEntity(130U);
    msg.setDestination(25990U);
    msg.setDestinationEntity(166U);
    msg.timeline.assign("YZFGISRXCSRWDDQYJTQHPCZ");
    msg.predicate.assign("ENYZIYJGOVLWQNHDRYIAPYPUZGZJQLCBFFGMIQTVZDNJAFCLMJDPPSWCWSPORNKHZWAHNVXTTGVJQLUHBMYJJMCZKTVOSSDIBXKTDBUOYAFABEIFOISWYEKWVUXUMWGQJOSAMGDORALVKRXETRYLHXBOUNCMKUYEMUPQZZSFFBIXIVWWTVKOEFXNNNKIEJTKLWAMQRPZRTQTFPVHCCUBQGPE");
    msg.attributes.assign("CMPUMFBCLGUPBFZANKJVEAOTCGYOOJJVWJGWLGYRXNNKOADMDBBHCGVNZZLWFOWHUIXPUHJGJIWLQDRRMKYTTABOETLMQVJWDUHWVGQAQLCEUATQASYSXJHPJEINTTTXHDDHKKYKIRQDGEDLFACTVMYHYCMJOBHUSSZOIKIMAMXNFFBXLRZCIS");

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
    msg.setTimeStamp(0.623606534811);
    msg.setSource(53287U);
    msg.setSourceEntity(205U);
    msg.setDestination(19983U);
    msg.setDestinationEntity(59U);
    msg.timeline.assign("EENNKJGIVQNKKWNBGFICTCOLNMORPRBSAFXGZMNJJGPCZTXNJFRAQLCDJVSWFWBLKECYENVGLTTYZDPXJSXWZHXAAAHMSKAVEWSPFVOCXZBDVBUGHDKFEMHDGTYSOYACQXQVCZKIFTUSUQOIDLYJBPJIADUYUVVUXUYRRRKHOQCUROBQI");
    msg.predicate.assign("QYYJLULXYFNXPWMKHUDMJAGSGGVDGHLHUCDHETCRMYOVPSBKRFTLEMGTMZDTTIHSBIMPWUFKYVENGZWEPVNRQBF");
    msg.attributes.assign("YFHOQOVDBBEYCDAOCGFTHDKFEUSFKTCXGPGVBQYHJDJEMADFTIXOILPTHGZUMMNLALOXYVBWEPJODENQGKHZJAVWILTGETBUJNMGCUVSLZLVKRYQYV");

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
    msg.setTimeStamp(0.0279593734964);
    msg.setSource(8012U);
    msg.setSourceEntity(39U);
    msg.setDestination(29562U);
    msg.setDestinationEntity(56U);
    msg.timeline.assign("JXILYLQWFTWKDHPZQRSXCYXEPHLRCFFRPSDZONSPLYGAGIIXZOMLUJQOVMKJYDZUEEULCLFRKBH");
    msg.predicate.assign("NWSMMMDGIYVBWOWVMVCSROFFGFIVWUZRKGCJDMZLHLSAMXKFFUDPYWBVBETQUEBXJFLTWCNPXSTYIWPFPDNIGDTJDRDIEAQODQYCEZWXLMETOIUTHNBXRVRXOSNQOSDNPSMOFIWGQXKZHAARJXHNAKWBYJVHLEVPJGXQHNGHVZOTAECLIKTJ");
    msg.attributes.assign("RFYVPZMLCNLDRAYBSNYDXGGSXVSWTDIQARXVYENODRISWIJOXTOSVARTBGFUJTEHQVICHMCEZLIBKSKQT");

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
    msg.setTimeStamp(0.252854147626);
    msg.setSource(47530U);
    msg.setSourceEntity(113U);
    msg.setDestination(22335U);
    msg.setDestinationEntity(52U);
    msg.command = 44U;
    msg.goal_id.assign("RHCABHYKGKLGUCXSPOYLWAQAWBKIHYALJVBRQGDMKGWENNZENXMXZDZYWJCWHSCXMLIJQCDHERBPPSSVKSMESCPGAKFQFFILUKORVZISXBYBGQCFYJMDAJGDQIOWVEFMHZXSXTADTGLUPVITBUHVFEZNOXTZ");
    msg.goal_xml.assign("WDMPUIWBXDWZJNMYYUWBERVYKCNTCGLOUSIHPLGIKONLRKU");

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
    msg.setTimeStamp(0.431411583646);
    msg.setSource(20833U);
    msg.setSourceEntity(27U);
    msg.setDestination(30646U);
    msg.setDestinationEntity(61U);
    msg.command = 62U;
    msg.goal_id.assign("RKXEHGUYVWJKFQIBYHWWDNAJTZEDTFYWZTOGSKZIVNSKTTVURHADMGNRKISCYTLOAVGMMNPQAFJJXGZFEUOFQVXWKRDWSRFLMBCXCUJMASTZCLLQUQZPTORHOWDRUYGINSCUHLSXCXQQVIERVYNBKGVGESSDMHEGZKPFXPAVIINXMVOPBFCFMRJEPIOTMJNBHEDBHZL");
    msg.goal_xml.assign("PXMUGZYARAJESTSYWBGMOLPWERTQBKYRMVFZMCTAWCXLDHACGNLKUCZKHOVIRXTXOSUAKFRHABXIYDVLTCAKONKSYBQSHSJTQQDAOVDRFWYRFDIMJVWTRNF");

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
    msg.setTimeStamp(0.196208403197);
    msg.setSource(7054U);
    msg.setSourceEntity(78U);
    msg.setDestination(41732U);
    msg.setDestinationEntity(32U);
    msg.command = 125U;
    msg.goal_id.assign("HEXAIWEONGFPOPAWCFFYU");
    msg.goal_xml.assign("IWDYBAGBVJBGLQNRXYOQMKWSWFMJDUODCSFWKGHLQNEXHTVJVDDPQWZRMIRKWQSAREFWBTEAUANVIKVCJEUQPJHUAPVJJTHVIXFIPDJCIXOGOMBXDALHIOURCQODLGPNARHYXNWZABUFLUIPJXKBCGMZJYZHTFQLLK");

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
    msg.setTimeStamp(0.813052064914);
    msg.setSource(52495U);
    msg.setSourceEntity(6U);
    msg.setDestination(7661U);
    msg.setDestinationEntity(35U);
    msg.op = 118U;
    msg.goal_id.assign("CWAYCZPQVFPSMAQSTENIOLLJIGGPESEIWRODVXOYLRVGKHBYXJLPSMFPANBCNJZWZLSHZLJRWNQAEUVUXJKUMUFQONBKCVABZRCDSODFNOUPSTDUKWJGRTIAQYDGFTVOLCWXOFIIMHUUYMETOBADDYRZKEMGMGBFMVYEAJCBYJNJYYTQTXTELRXDZILKEXDWPWKMIKSDOKNHQPQXCAXTRVFELICUTVPBZRGHBFHICSHVAMQKSRN");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("ZSFRGPLSVWLFYNBKMNIAOQZRNCNCRTNRMWOIKZHLZGQIFJKBPCLWYMHNJQTDIFGTVKGSXJOLQAPPDTSRMIOJBNGTQXFJPKBHOJPNRHDYKECXNVCEIUXSJVBCZXBYLMMDSZXWDDVETEUKHNYABZQWFOUUZMCJKXIVXHQOEIUMOMUW");
    tmp_msg_0.predicate.assign("JPXWYIATLCFXQGKTIQNEQVGQMRMFNSMERKVNQVWNJIRKRHBXBABXKKXJYXVMHZTOSHDCBOZWEGQZXTMYCJDWWXYXPFBHRGFQDTCZWOBBOQYBSJSTJZMMFJPPDNEIHUDWUMCQRTTGBSLTUUKILLSZNOYIFKECTEFZNVDJPCEJUYZLIAFBXNANHLVUVLOWNRGSPOQPCHRIWLULUPAPDKVRIGHWSVODKI");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("BJNJOLOPESUTEXZDJSCWCNLYFDHQUMFTJVSIUPXZGGCCESQJUBSQQXHESHHSXDABIGORYDBOBZTMMRNSZFNIKFEPANWGDZHYIXMQAKAYVPNBFAHGGWAHHWRTUTBKABVKDEVMQCGXCJFXUK");
    tmp_tmp_msg_0_0.attr_type = 36U;
    tmp_tmp_msg_0_0.min.assign("GUSCTHMERAOLLWHWPTCQKHUFDPEJTBETQZICBQYDZMYAZEAOASYNQKFNSBLZHGTRVPGHICXALWNCXSKJIBISPJNHEMRUHRRSFSBLIUTTNVVUWCGCFNEJUXWAMSKPZBAXBXPXQNDOYMPKJGRAYYJMRUDMHKBFIKZIVJJXYXFRGZDVOODGKFPEWZCLFOELWSHNOIJNODYSTEOLETMZOCGTGBRUAFBMQVLIQKMIDHXWLVWAQYVQRUKVP");
    tmp_tmp_msg_0_0.max.assign("GSYUHFSHRQZWKBJTLOTNHLDMNVPMYBAJOKJUHHXYLROGPQABGPNSFXLGFTXDVBUIDTHACPSVTXXNDOCGWYZZSBCTFUOZQFWEP");
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
    msg.setTimeStamp(0.712940113824);
    msg.setSource(44734U);
    msg.setSourceEntity(92U);
    msg.setDestination(5862U);
    msg.setDestinationEntity(112U);
    msg.op = 139U;
    msg.goal_id.assign("ZXLUGQRQGAYJYRFVZFWUQDDJAQKTVWWAVXQRJLRVKJMNIOJDZHQSCLLFHYDRXGOBTORDVHUHYCAMPNSXDJCKUVKNHXYADSTZMYTMLIZEBYHHGOLBFPCPTEZTJSSNPPFNBWQNUGPRNDSRBATEATILPWNWMIPOXZEIKQPBKFCSPIOXSCJADNROZWTTRBZDEFHGIQLUBJWMEEFCUIYYMLCMC");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("SYNMQFODUZFTTWQROSPDVCGGAAFAVKNJAAKSBJRLKJBUIICTPCSAPYRBQBRFBTUYXSNPNOUTGNAPVXZCBLSDYYLLMCIHDOOWXGJDMJOGHQZUBCJQJKMSWHRLTOHDWGMHRKXVZUSWYQEQHHBXRCIZECLEUQNVBLGRLXEMDYVYHVCGPIZNKQW");
    tmp_msg_0.predicate.assign("ZTEFMPAJMNYSKARGTULAZIHJROUEMJWICPYDKXTARDFZOLZSGHLDANXBSWLTMSGDEXQCJZTXVEGUSHIICMGFBYLSEKBTDKQTPSHWRABNQPOKCBWPDINQUFHMOPNWSMRLUFFNKHHBDMGXCVIYKCHAOOWUAXTJFDRHWENUQQJXSJYVIWPGJUQZPLLNOYOPORAXYHJQXAZNFULOKPGZVWDYGTEITXNZRVEVBEFUQCJVDRVLBYBGMCMBWZY");
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
    msg.setTimeStamp(0.188145337925);
    msg.setSource(58596U);
    msg.setSourceEntity(161U);
    msg.setDestination(47950U);
    msg.setDestinationEntity(10U);
    msg.op = 135U;
    msg.goal_id.assign("FFZVIDZUQPGRIZZYRLIHBWFLJKUVACOQLCXYIBVJYYQGXXTMAPTIBWQGUXWNEDTFFCIE");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("ZOECMXGHTKFZMZJLZPASNIWJEKDASEKZHVGDLDFQDSFVRVWMNKEUXFIBVPPIGNRGPKXVYSVSMWJNJETQFSGBRURQXGUHYHIZDCMPBREQCEYVQBDYYCFFXLPMHNADMDUPIBRTQZCDOOWGPTFHJSOTEZBTCX");
    tmp_msg_0.predicate.assign("UJCJHEGZDPAAATAJBCEFKPNSWVQVCFMBOVOKQDKVALAXKUZBYGFOCBIXFHUWNBUUPXJCXYOENRPVOUOIHTEHWRSNGVQZP");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("HKROFFGJOAEQQIMVERBKPKVQSDCYLYNWEWGNYZJGSPMSKSWRTITQEYOWRNPMZOHLZQHCVEXNNPHFNMDGMILSNTFDZX");
    tmp_tmp_msg_0_0.attr_type = 230U;
    tmp_tmp_msg_0_0.min.assign("DSYRJQQPUBVBFHCIKDRYYDJEYAFNJMWPUFHQBXZFYQJDAZNWKHOWJYXBSPSVPDTDTCZSLLCRDIQAVLURBRWMLOOU");
    tmp_tmp_msg_0_0.max.assign("DJIBRTICAYNOHCHFWMVHWPAELKJZUBSQLBXVXPTBHESISNWPIJMXGKZCDYRFWPMRVQTGFTMYBQSFROULHCWZ");
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
    msg.setTimeStamp(0.0301539959033);
    msg.setSource(43198U);
    msg.setSourceEntity(230U);
    msg.setDestination(36520U);
    msg.setDestinationEntity(232U);
    msg.name.assign("PKNASZXASUFQVOCTYNGFLBGMPURUERKWJNMHFVQTUNHQIFBJHI");
    msg.attr_type = 143U;
    msg.min.assign("ZGRHZGFEON");
    msg.max.assign("DRLGANLDVOCAQQKZWHQLOCBCGTPCXWPFHIXCFWQGJVDNETEKOFFXDUXUDSLHRMRAHEWNZZUTMOBKAQJVZRPTYYKZVRRTTVIGDIHBKXTQYYESEGPBOQVLIYUJDCLQXFWOAFGEBUNNAIXHOKVSTXLPGQAFGGKCHHSMNMIVQTBWXYKONNMSJWERMJINPIBDWDRUJUYUPLZUFW");

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
    msg.setTimeStamp(0.547497702321);
    msg.setSource(57193U);
    msg.setSourceEntity(216U);
    msg.setDestination(24815U);
    msg.setDestinationEntity(124U);
    msg.name.assign("VTSXVFWPJOAUCJATCSXNGMKBQHZEUEVBMWPAISZRDZLKUQDPGFQELWMTTVE");
    msg.attr_type = 62U;
    msg.min.assign("CLLALQZMJFSWAKVOFDPOUOSGMJYKGJXLRXYYCRHDFJEEQKEJKDTHWTBQWNCNQQKEFZYPZEXVJCQAGVWSDNCDMTKSAMXXNLVZWXUIWYDLUNUSFVYMYRWRNTGYHGITHNXOKUSVRRUBIJWKDIZRZQUWIFPCGCLBHINATZJHSPTOJFUCEOAPXHTZWPOLBBSIOOGVGDSONZMEPGNPPAVRAMBLQYEICRUIIQAKJR");
    msg.max.assign("PTQHJDDXWPVCENGVMPBUHYVXXBILGGWYEQTQBESDRGITLQWFMWQMSZAWSAQTMFHPURVYRXGJSKFMZUJSOSNCCBGMGRFCOBBCNKY");

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
    msg.setTimeStamp(0.316309976712);
    msg.setSource(29454U);
    msg.setSourceEntity(42U);
    msg.setDestination(10842U);
    msg.setDestinationEntity(60U);
    msg.name.assign("QOZMRNIIECVAYZTBQRJKPFSNZIAZHTVDJSFUHOCXVKYOEYDYGAGWFBLXCZFSPHLCNHXIHHEPQYSXVTSHUADZNSTHYOTDJDGVDAMBPMPRKQMPMUKUMGJBKNJJBWJLKNTGCEXEWIYVEZWIPKXLLRHLAFQYPFLPSRQWESQJCMBATURAUPIKOXLQXBCBBXNNYFUDKVIUQTNSVOHOMUGOQVCGJLEXD");
    msg.attr_type = 95U;
    msg.min.assign("MNGFVENDQZUOULYPCYAXJHMZBDCSRPJMGHEKHNVWWBYOIGVUWZCRLKKUOWAZTQR");
    msg.max.assign("WJSWSFIGLJVZEKXKXEKRVZOQPPMGGWVIMARJGGKEBXGQQETYLICJLPNTUSDMPZHYQBNNSCUFFNUVCLCDXASXKVGMOTTMTPNYLTOUIYMLQBOVRKKMTHYRIAC");

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
    msg.setTimeStamp(0.924705109917);
    msg.setSource(53748U);
    msg.setSourceEntity(252U);
    msg.setDestination(4886U);
    msg.setDestinationEntity(13U);
    msg.timeline.assign("MWBXODVKSEZKTYABLASXHZCSPBIXRFLNHCFVYDZSVPOZOYWUSCJWQBLLZMGDEHJRRIWNCMXWELPKKMGCANTPIIGSUCGYDCRETJEQQQZJHQPFFRXJNMABTJKLGTUWNUFAILRWWGUDPGXOEBMSMEKGUCVXSXNDIFHGFYYVPZBTNZREOSYIVYHRAEXHDTKFFJUOM");
    msg.predicate.assign("BOGGNNEUWFADXROELUGXHNAMFXAOSHFTJUOAVZIRSJPKRZZUEGXWLDYKWCQHNNHDSMQGXTKICYOPWVNJGLHTHNFXQYIZQIKEPPKWCVBMKFJSJFRPTAUYLTBXSRLDMTAPERIGPZOYIIXTARKWVYUICCEISHZMGYOFFXXHHHUTDYVLNTVAJLMLBOYCKBVMJDQNJBDUQPZRBCAYIZLQZLDQCRUMBZWPFBDOVSMDSPJVC");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("EGFCDCFXVIGMEHFBMTQAEQSHTXJJONIWNEVIQGHFPZLWCCRAVYEUCNTLDBJWZMJRVUQ");
    tmp_msg_0.attr_type = 111U;
    tmp_msg_0.min.assign("HZNSBKVBAUYJBUOFSCMLXEYSEYRDGVTUJUPTTZVQEKEM");
    tmp_msg_0.max.assign("EITSGXJWOMNIGVHBDMWPLRGLPVAQYFNVRVHKDFYOGACHXEYAKHFLAKDUZOZJCWNWRAHEFJQYJBCHMJTKCZWCCVWUOSXQKRNYAIBYXREBZEBXYQDUXGMUSDUZMIRZPQJVJNSBBRIWFPTILGMHYSZDDMPGBOZU");
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
    msg.setTimeStamp(0.974667904689);
    msg.setSource(33919U);
    msg.setSourceEntity(72U);
    msg.setDestination(64210U);
    msg.setDestinationEntity(46U);
    msg.timeline.assign("XDBYZTQKZPTDNARAHXRTEQVRXDBKSKMZKJBSCIYNE");
    msg.predicate.assign("NYNUBKPBAFGOVTVYADAZDRTPKJISQJHKJOIZ");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("WHDCBXEBBRMDLPKQWPSMYYILBVSHNRGAKUQTMREIITYXSUQYXBAIMGXTJPPZKGGUPEHZNKFLZTEJFQESITGGEVFAJOXZCQIJHWDUONOIOEJRZNAJORURJAXQNPKHDVCZLGPQBBQGVNAFWKQCWKZOCMVNMNWTSQSFMFPLMOGENSADYIWXVJOADLADUATIOFTFPUHMKWRYHSHWJECYMLVUXLLHYCHKVZR");
    tmp_msg_0.attr_type = 79U;
    tmp_msg_0.min.assign("NPKWDRANTOVASACECVMEOJAHIOETFBRBJEXXWZRREEVKSVDFUDJOYWNUFEHOZGLFDJAGRVTZBTPILKCMRUYPTCLQDFWSGXQQCPADCTAHVVGTHHDGYIQKXERCYYRYMKIJFQBNESPDGLAXDIJMNZUMKAMAJFGKLJOSSZWXILUUHIBNKFVFPQLUOGILPBYWXNHIOZZNCTSZBYMWQDZNPVWSURFCHPXCSBPNTOZHBQLUMHMQBXGMLKOYKUQXJRYGJW");
    tmp_msg_0.max.assign("FMDJBNBHZKXZAGKBQGGNOUKLWNEMHZNURUCPIFFNWATCVYXNIHHKSWJGAHILVOLUIQRPKZWEGLGMB");
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
    msg.setTimeStamp(0.297098360596);
    msg.setSource(16977U);
    msg.setSourceEntity(119U);
    msg.setDestination(21509U);
    msg.setDestinationEntity(96U);
    msg.timeline.assign("RCEHRKSNYUTXYXXSYKPFKWPTANSVHVXASEEIWMZ");
    msg.predicate.assign("JUKVOZLEIITCWPAKBCQSRGQNZAJWRXXFEEYVKFKGPOVMHHKFJOWOXMXWIYDNJMKLSOCERWWOSOJCYHYPXEANNRIDZLJIWSYYZGQDBGJDRVVRMGMUVL");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("AQLZCTWSKBYEKMTRPDKHUCONCRQDUGQBZEJNUYIUIKBPJEDWHGZRAJCVSVVHUJAJVZAOEIEHEQEHNOWGFRWADYORFQXISDUGUWDPJZXKNYODPNRBKBFSXKJYWIJPNXWVBFOPADMYQEAIZVLFLBSKTMYVANKKNOCFDOPCNLTPJFXGRGTXNXCHIULUZTSFXIWVCTVHQMGRCIXTHRXTYWLGPLQZDQSBFEAVISCMEROYYMMHTSZLOGFAH");
    tmp_msg_0.attr_type = 48U;
    tmp_msg_0.min.assign("EDQTCCTZFZDGPECVEA");
    tmp_msg_0.max.assign("VYCXWCZSHAAIHGIRFDALDXYHJQVQAZQJVYTNBLONSKTORPYZVGZJZDHGGERIQWLVDWPEJHFCVEQJLZXBPRUDNTSAROXFGOFIQOCYBEDHTYUHYMCRIEASBZZVADTJGMSFMRZDJDMKLXXEQUIKHBBVVLZAIXNUUWGWJCBTKOSFLCFNMLUSITTEOMMNSLANUFQMJNBFRDBPIKGYEQSNAOPKIXGKMULPWHYYPKW");
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
    msg.setTimeStamp(0.661662256398);
    msg.setSource(28218U);
    msg.setSourceEntity(83U);
    msg.setDestination(49588U);
    msg.setDestinationEntity(16U);
    msg.reactor.assign("CNESIEESHSTSOYVLFCNXJUUYGPNWGJRQSKOULIWCUFEMCTONFLLYUZUBURRVCSZMMYMTBOIDKAQQTRVKRTVFPPKLLGUVIQREKVNMBKOEIESFVWTSJFKAAFANNGAHYZTZHITWQRJQCMVFQCQSKHWKSXZAPDDIEXMMRHQRDDCGJBBXOHYNOKLYDVJMGDXPCHWGGJAYCXLDGDVAQAZWTUEWMRZPIJBAEHBX");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("IBMMOPWWLLNPEGSQHFJEVFMYCHGFHFKOYEOURABBIKDUEGGQVHRXOIZLNOAQKBHLSXGFDRXHDQOPMSBTTTEVUZLCHDDPYNCKTIUVGUWGHBPJYWUZKLKJDACXWIEDQYPVXYPXSBLUERZGYVEAEKHQ");
    tmp_msg_0.predicate.assign("QIERGXBOAYDUCHYPHPCMDKMVCQQIAXGNUBETYMAQXMFTRFPJPRQKHDGIKECHOYLBGORBNGUUTHZNUBCCTRASJEZNVFBINKSCAJUYDKOAZKYNLNUSFSVSIFKEMFVQJMRGXBFPJSWXLTZGHEPLTUGNRDXHXDDDFZQDUTKLLLWOOAMZVKYIVHTCIWSEZACWOITUMBJEJSOOEHWPQTYWZVICXPGNGLPXXYLRJZVZRWFSDLHEYMKWNJROSVAMVPW");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("LZGYNWSDJIJHIFYBJGVGRMHXABUNKLAZGGEFBRZDKSJROFIOJNZBYHCVJSZVXQEQEOKQKFOAURVYETVUEHDJMNMQPDCNHUWZKTRPOTVZJLPXQXWEPUOGTWNTOKMTHWQFFTESYLSUZFXSVLTXCYYAVAQQCYKJWAURIISMPBNINXRCV");
    tmp_tmp_msg_0_0.attr_type = 146U;
    tmp_tmp_msg_0_0.min.assign("CMOQDZJIWYHBZRSUVNKTUXOPERABCVGUYWAPNNAOXENBFZODCRCVPBMOQTCLHDRDLHCMTWDZDFLJPIRENKIPVXEEHEYEWGTXCKLIAFILRTOQYPBVVSALRHKHXCXTKIZVUUYEUNGLBJJYKNOFYBQRESBYPOZVHKRBSQXTWBNMHFFGPSWILMTSUADQXMZ");
    tmp_tmp_msg_0_0.max.assign("IEDODQWZCAOKNQAKBIZAQEJRHOJDWCXOFLSDLVPUGFEIUKXOUFKBPYKXTJIMOBUDYGARANCUMTAQEEOVOFNNKGURSJLVVOLPUEMVZXVBBHACSZBFFSANLURKLPGNDWQGHMAFZLNVKDBYYRGPQIXWMHXP");
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
    msg.setTimeStamp(0.496128660263);
    msg.setSource(49556U);
    msg.setSourceEntity(44U);
    msg.setDestination(1219U);
    msg.setDestinationEntity(62U);
    msg.reactor.assign("TWKFZIRMEMLXEKJVYCKNTUHWRLLPIDMEGZFDXCXFNNVRIQTNYFTDAQKOBXHAAFSSOKHXHBHVUKDDHXZLABPJYZMIEVORTMKOVZPFASNUHKNRUMWNLAEGQRPYWCSQYEAJZGBLUOTEBQAHACIRZIPRGDMMBRGUEKVOUCUTCJWTSWXUIBKVPDZJVYEQYWFSBGGGPFYSTVOO");

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
    msg.setTimeStamp(0.396567496993);
    msg.setSource(43452U);
    msg.setSourceEntity(28U);
    msg.setDestination(62758U);
    msg.setDestinationEntity(107U);
    msg.reactor.assign("RAWPOFYIUHLGMSTOYDCZZSPUTHHDBKTBCRVRARZPRQVXNDSDEWBWDXNIQWXZUCAYUJCFQEBBXJCPUDLJZMLGBOMAWKTHQASGILCYYQGVNSCHKMJKVTEIQNFIATILBVCLMWYSZDQLEBZOLSPITZGEOJLXMGSFSMCBORYKYZAJAKNLWWURZMHIVSKGWXQDGJEXKPFNFEMVAKNFJNIEFPODJVUDP");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("HLSRQKEBJNJXXGDAGFBNJTZHMLNBTOSLBVQFHJKIPSVZTNZQYZEPMIVGOQNPWAVBDNDRCGNRIULENZEGDTGQXPYCKPREEYFEWDKRHCPLOSOCJKANRGQOHQ");
    tmp_msg_0.predicate.assign("TLDNRQSUERURONCYKPHJTNXXZZWFOGAYLRPXIFJQQLEOGEOPFGODDKXGNCMPSMEVMONXFFZSVJHWIIQCNAOUIISAPVERHNYPJXSWNEIVUCHUFGRQOIHLKENMBWTPAFP");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("PDJVWATYCVGIFSWMYTZBMTPVYGTIYZCAVQYHKECLXZOMWWZXZMADEQCVJUKGECSFHOQNJUKOKMCRWXCFBHNHKBSJPAUAIUVBGNWQZYLTISKEWTJOXANNXRLBCLGHVPXLRMGRRPKXZGHQBDEEJCSUADGJLZYFPUBZRXDXOFMYBEORKDTOSNFR");
    tmp_tmp_msg_0_0.attr_type = 1U;
    tmp_tmp_msg_0_0.min.assign("YROYJKJXSTDLDUVEGRYWMAYSIMZANGLDLJSQCCZDVBTCQBNIJBGGHTPOJJWFACLREFDOPZIRRQSXNHUUFASPPFZGNMLEHMRXVYXCUPGSKREOBBDUYUCPEAKZHUMYSILAYHPPAFIBXLSTRHTGFHDXRZIHBLFTQZSQCWBXCTTUAFHYKACDWCQNVJFIJXVVQSNGQUUVM");
    tmp_tmp_msg_0_0.max.assign("CSREEPHTXGDFKUCTALXFLUIEXMJYMBLFLBFVAKZHVIEWFCBJGWKEDXBIJUFYVCNTVJMAVZVGDYQDJWZWROIUBXKGCMUSROTPBGMPNENOSGPDSRAEPNHSJRKJXCVAFIPLBVOKZTWSQUZLIMWCBKGYQYWNZXDZOGCTLAJHQIKNMAYOZBHTZSYXFOUXUMBNNIFQYSDPYEWJDMCEYGWWROVOLHD");
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
    msg.setTimeStamp(0.8974935514);
    msg.setSource(6617U);
    msg.setSourceEntity(28U);
    msg.setDestination(7388U);
    msg.setDestinationEntity(210U);
    msg.topic.assign("OHOSHYMWKZIBGUUVZWOQCRITCAONSKATLEQCEHZBSVWVVCWGQTOTJTQZYXWXYGCPBUGMEHJTTEXLBZOZPFIDQFKVFCD");
    msg.data.assign("TWVPSWNMULOMKZXEJREXORFQKPBZXEGXLKNTSVFTAFXKYVXHRZQVDUQTBKIHZUIVWBOWTOQZNLBBCIOGCLJZIFWGADQDNALBZCFUSHGDQHWS");

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
    msg.setTimeStamp(0.343819459017);
    msg.setSource(40616U);
    msg.setSourceEntity(43U);
    msg.setDestination(21211U);
    msg.setDestinationEntity(7U);
    msg.topic.assign("SKPSEPXHCWQZQJMFNSWBATFUYHKVDLINMVCOISJTIP");
    msg.data.assign("CQCMKRWLKCKWLDAZPVXCHTDXQPIURCMFNHKMXSVQDMMZFAERFINKLZEHOCHTPAJGAGCKXSLJZXQXOCPUISSDKPTUTSJWGBQUQQJTPRNIPTIZUOZQKJWHVLNQUVOGHBURKMBWFGNMRIEBLEFBRLEGMUNIXZBQEENCOBOSXYJEGTWEKGZH");

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
    msg.setTimeStamp(0.00755092788923);
    msg.setSource(43141U);
    msg.setSourceEntity(204U);
    msg.setDestination(63235U);
    msg.setDestinationEntity(70U);
    msg.topic.assign("GASNNZWTPBLAPQKLFMBXDQVGMBSJFCYPPVUTSYNMZJQIFCXFRGHDVZAVEOKOERPMYZBESNQQXSBCYZIAZOJWJFOYNESJIMHFXYKENRAPBOS");
    msg.data.assign("YCIJLKDMTYEVNHSAMJWJHAWFUIXPLOUGVPPZRJYXQGTEUAKTNPYCKAXRR");

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
    msg.setTimeStamp(0.433872259678);
    msg.setSource(34308U);
    msg.setSourceEntity(37U);
    msg.setDestination(15087U);
    msg.setDestinationEntity(172U);
    msg.frameid = 74U;
    const char tmp_msg_0[] = {-87, 38, -19, 93, -25, -49, -43, -114, -63, 43, -56, 99, -78, -117, 117, -117, 97, -86, -59, 107, 86, -120, -67, -67, 41, -42, 109, 81, 25, -32, 29, 95, 13, 4, -5, -35, 1, 59, -75, 19, -101, -46, -10, 109, -127};
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
    msg.setTimeStamp(0.512365946882);
    msg.setSource(21504U);
    msg.setSourceEntity(245U);
    msg.setDestination(40330U);
    msg.setDestinationEntity(92U);
    msg.frameid = 247U;
    const char tmp_msg_0[] = {-16, 37, 93, 120, -26, -37, 41, -93, -73, 8, -91, 47, 118, 73, 87, 121, -126, -14, -66, 84, -120, 59, 101, -41, 52, 9, 49, -44, -120, 65, -124, -101, 59, 86, -33, -5, -125, 28, 6, -121, 50, 57, -67, 16, 30, 60, -30, -36, 27, 94, 84, 31, -26, -12, 94, 111, -119, 51, 94, 105, -15, 50, -113, 79, 48, 91, 113, 17, 57, 93, -59, -20, -115, 43, -82, -69, -72, 59, 15, 52, 12, 124, 45, -89, -74, -29, -81, -3, -46, -40, 47, 14, -93, -90, -76, 1, -108, -49, -58, 108, 62, 37, -108, 97, -22, 83, -37, -121, 9, 89, 11, 61, 37, 10, 0, 55, -91, 42, 78, -87, -121, 65, -19, -35, -5, 88, 71, 59, 97, -51, 65, -70, -56, 103, -20, -7, -32, -68, 108, -36, -78, 109, -43, -96, 50, -6, 117, -33, -74, -29, 3, 71, 32, 61, 33, 95, -81, 8, -24, -127, -106, 46, 60, 34, -91, -21, -117, 62, -91, 9, 42, 108, -67, 38, -26, -43, 103, 52, 29, 67, -16, 5, -119, 55, 79, -58, -49, -81, 100, 31, -119, 83, 74, 33, 47, 87, 71, 70, 75, -60, -128, -12, -59, -39, 21, -18, -108, 104, -26, -127, 24, -36, 73, 69, -51, -63, -123, 62, 81, -28, -104, -90, 25, 81, 15, -108, -50, 120, -128, -60, 53, 83};
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
    msg.setTimeStamp(0.164921464324);
    msg.setSource(3605U);
    msg.setSourceEntity(50U);
    msg.setDestination(27379U);
    msg.setDestinationEntity(7U);
    msg.frameid = 190U;
    const char tmp_msg_0[] = {-45, -71, 8, -107, -75, 17, -68, -24, 67, 34, -94, -100, 26, 23, 56, 60, 54, -13, -95, 74, -63, -15, -69, 118, -69, 19, 41, 55, -34, -90, -78, 105, 56, 89, -126, 125, -39, 108, -56, 71, -91, 69, 61, -54, 2, -106, -44, -27, -100, -69, 98, 122, 23, 3, -8, 29, 54, 98, -123, -62, -17, 3, -74, 50, 120, -18, -45, -79, 40, 76, -59, -73, 8, -7, -10, 70, -59, 98, -37, -112, 31, 9, 14, -88, 40, -43, -35, -21, -105, 84, 123};
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
    msg.setTimeStamp(0.126735067237);
    msg.setSource(32753U);
    msg.setSourceEntity(185U);
    msg.setDestination(24644U);
    msg.setDestinationEntity(166U);
    msg.fps = 32U;
    msg.quality = 16U;
    msg.reps = 136U;
    msg.tsize = 115U;

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
    msg.setTimeStamp(0.720972696244);
    msg.setSource(59137U);
    msg.setSourceEntity(50U);
    msg.setDestination(46680U);
    msg.setDestinationEntity(166U);
    msg.fps = 15U;
    msg.quality = 187U;
    msg.reps = 240U;
    msg.tsize = 33U;

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
    msg.setTimeStamp(0.42773791892);
    msg.setSource(42485U);
    msg.setSourceEntity(58U);
    msg.setDestination(31352U);
    msg.setDestinationEntity(202U);
    msg.fps = 10U;
    msg.quality = 165U;
    msg.reps = 174U;
    msg.tsize = 54U;

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
    msg.setTimeStamp(0.172927802936);
    msg.setSource(40778U);
    msg.setSourceEntity(162U);
    msg.setDestination(36610U);
    msg.setDestinationEntity(216U);
    msg.lat = 0.798654790852;
    msg.lon = 0.931367647259;
    msg.depth = 160U;
    msg.speed = 0.102643775284;
    msg.psi = 0.466281675486;

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
    msg.setTimeStamp(0.600315783539);
    msg.setSource(59463U);
    msg.setSourceEntity(78U);
    msg.setDestination(46912U);
    msg.setDestinationEntity(241U);
    msg.lat = 0.0340860467176;
    msg.lon = 0.984349881483;
    msg.depth = 108U;
    msg.speed = 0.216781892764;
    msg.psi = 0.975748078573;

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
    msg.setTimeStamp(0.181799532397);
    msg.setSource(39633U);
    msg.setSourceEntity(219U);
    msg.setDestination(57613U);
    msg.setDestinationEntity(71U);
    msg.lat = 0.645581780906;
    msg.lon = 0.994932196468;
    msg.depth = 61U;
    msg.speed = 0.192487402311;
    msg.psi = 0.44060715733;

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
    msg.setTimeStamp(0.746507259476);
    msg.setSource(47669U);
    msg.setSourceEntity(237U);
    msg.setDestination(37585U);
    msg.setDestinationEntity(2U);
    msg.label.assign("NAJNJOFKYGLZXQWVQUTMDIRLYRJYA");
    msg.lat = 0.840343759933;
    msg.lon = 0.822626939544;
    msg.z = 0.187081330954;
    msg.z_units = 4U;
    msg.cog = 0.756527722918;
    msg.sog = 0.635330240598;

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
    msg.setTimeStamp(0.337919293495);
    msg.setSource(24364U);
    msg.setSourceEntity(42U);
    msg.setDestination(39685U);
    msg.setDestinationEntity(167U);
    msg.label.assign("VSGYNTWGMUEBRDOGFBEBTDRIVPHOHXESBRWBCKUNHYOGGUZOASHHPYRWVWVKXOSADKS");
    msg.lat = 0.312311664813;
    msg.lon = 0.274018634412;
    msg.z = 0.835529227954;
    msg.z_units = 223U;
    msg.cog = 0.879670983135;
    msg.sog = 0.178478358098;

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
    msg.setTimeStamp(0.237698869623);
    msg.setSource(47698U);
    msg.setSourceEntity(113U);
    msg.setDestination(1643U);
    msg.setDestinationEntity(72U);
    msg.label.assign("FBXZQBOHLSYRMWPTLEWWMZNNKEGWNNTOFMSJIKTKKTSYYEZEYSMAJIVXZWWOGTXTLYVNIGBAQMFDYBCHYXPYHWCNPRTSJRMGIPBBCEGIAJPPCOSKLDDJICVXCGQMSCVFDEJQAEUGGRDAYSSGAXUHDBCQVLVBFPUQKQTEFXWVQQTHDOLWQVJIZRDFOUHPBVALFZKGEILMAYNIHM");
    msg.lat = 0.352864533172;
    msg.lon = 0.847365278518;
    msg.z = 0.815416514685;
    msg.z_units = 7U;
    msg.cog = 0.654292035529;
    msg.sog = 0.732899637077;

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
    msg.setTimeStamp(0.350387771916);
    msg.setSource(17185U);
    msg.setSourceEntity(40U);
    msg.setDestination(48723U);
    msg.setDestinationEntity(27U);
    msg.name.assign("IHZDLQIFMUIUSHRWDQAYHLGXGRZAHKMHKDWATAXPXIUOKAOEUYVMONCSIGLDYBKIOFAHQJVLGTEMWPEDPCXKWMVXAM");
    msg.value.assign("VYNANPMTOOOVPDJBPSRMMMFVLUREWGWCUCUDRWQASJHQCUWXSZJFGTGVCGADXKPTZLRMYEKLTWGYVYJSCAZGCIISBZDUHHFKPPZLROASGTNLQIMXURYSXELNWPNEULXYHXVNRBAOKSAODQZWDFIQNTTXHQBWKCAJXTNXBIJVFYZKHHAJQRUYSILZUBBFFPHZEEFPFYJOMOLNER");

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
    msg.setTimeStamp(0.577980365665);
    msg.setSource(9106U);
    msg.setSourceEntity(200U);
    msg.setDestination(51476U);
    msg.setDestinationEntity(56U);
    msg.name.assign("XYPWTEUEZQRXIBNMHZDZUMROESTCDSAPTUYKSUHNQRUMJUWKYTPVINDUDJYSZOLAJFSPWLVXQFVBYXMNHDOGGRPMLWTCQWVLSYHHAMAPJVQABEQXNSNFOFXLATMVVTPRADHKJEBXCWCAXERDZZRIHSNGUFEGDFVUXWCGTZIIWDSIGIRHBFWQXKFONBEYZBOLCNYLGIALCJVOJKOGPJPTFGPCCBLVH");
    msg.value.assign("QHCAGCYKTDRJMEBZZERPGTXKQKEIFZLINNNJCQULYOTHVEOXFKPCKVJLIMMKHALLGMSXYSDAWKVDNBHSL");

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
    msg.setTimeStamp(0.0724117508712);
    msg.setSource(50187U);
    msg.setSourceEntity(136U);
    msg.setDestination(61480U);
    msg.setDestinationEntity(166U);
    msg.name.assign("REGUMXVOPUVAVWFBAOCRMUXAMCPMUUAPBBLBERUPHTYCDCLACIWLGPGTLOPDLPGINVSJFWZYSYQJRXLMJQQPTTWIKIHQUZOMJZUNDDSARVNHFEXHVBQFSWROGIETVXFVNGZSXKEHTWYUP");
    msg.value.assign("KVNGVHCCQTMZMNSFTKQKCPOLJNNADLLZWEWWAUNDTCTMLLRPPQIPUAGGZOBRDSFAKIQBSUXCYPWYXXHVZOZIZEIRICNTDERYRFAIFCSDZUUWLEIBCFJULNWPFYXSGQPMOZLHMTBGEVY");

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
    msg.setTimeStamp(0.993735040464);
    msg.setSource(15987U);
    msg.setSourceEntity(210U);
    msg.setDestination(34283U);
    msg.setDestinationEntity(161U);
    msg.name.assign("NWWJKNPOPHXQQUUTFIKMDILLWMWONJBSGKMQOFBEDPJYRCIMGSQCTVIVCHKJZSSMHYVQPYJJNEUAECNQRQKEDLUIPPLBCHPDRAKTTHZKGCIQRDSCWWZRNAJMBFLQERRZBGLEVZFZFUUATRHIIEGKWXHYZXIASYLBKKWOOVOYMLNIXGWXFDJFOXOVDAAXTPPHUZVXBOFTBVPYXJMMOYDN");

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
    msg.setTimeStamp(0.711265428183);
    msg.setSource(43232U);
    msg.setSourceEntity(85U);
    msg.setDestination(40805U);
    msg.setDestinationEntity(45U);
    msg.name.assign("WLHYEETXPXIZKQGFBZNCYBOKYFGOGAKBOJEZRYPJMXJLBGHFANPCHUYOCSMJEUSNZOLSWPOEGHAURDQAZLBZSUFLFCKEFAVHLPROPMZJDEJTTQDGRKAEWEIXKUGOFGZKSDWICQFBWGLWSUQMMILJVIIMHYHMIBXTIVSFSWYMANDNAMBNRIDHTUZUXJDVQKKRNTQWUYCBHCR");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("RGIDIQIAKSWEGMFVFFHWWKIVLFPERXAUQREEKRYFQLDBRTVYJICOEMFCXCXYGGOHSZPUVMCQQKLMLTWZDPJDMDXUZWBYABSZDOJFHNSUHZYDKBXVEWTAIPURZZORENPWUURCXEXHOSBUSQHGNZXQMTMLWPOEBUNYRDSSCGYJJPYSONLATMDYFMQGKGHQAAFANCVBVNTBMJBJBTNVLK");
    tmp_msg_0.value.assign("IUEHHDRMXDIDOFRHAWVODRAUYQBOSLHZPGXQIJWXGUGVUHGXQNAATEIGYUJXZKTLABGAMDSZFGA");
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
    msg.setTimeStamp(0.874956625453);
    msg.setSource(31133U);
    msg.setSourceEntity(176U);
    msg.setDestination(10434U);
    msg.setDestinationEntity(34U);
    msg.name.assign("NXQHEZEAJWGVZZZAEWXCPOKQLMJWFHRRNRSWCKHEKEQPFBRVCVADKVUMBQPSRZFBLYEWYFGEJJVIDURQOSMKYUCFIYIPQKCGVQZXBVYTCNGDDGDPHAOOSUGLLFUSBVLXWTAZPNDQJTUAYTOXHJJDIYCHKMOLXYEOWXCNYKURPGAPIGBSMEUOWBXMTGJAHQTNVOUCHLNWWNJTENGOKFIIPLZXZ");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("MQSMVVCSAPAFETWWUGUPPGFQVJYZLEQFHYLQHDKMBLROMHCIPVUZTUZDSRWEQXTIVZODEAJPOKTAGJIJDGDDTGCHJKBSHOVATSVWWFLQXEKKCTATERMPXWOILQAMNVNIRLUBDKEXFJOPUIZCMDJFSIXWJHSERBLBNBKOUCBHN");
    tmp_msg_0.value.assign("PAXCKCVJORIFAHNPXNJSTUVDYANHYXWGPYIXQQZLESTQTAKSVMTAFSNWQWATWTRGUAECQTZMYKQQVENUEQPWBPWZCNIDYABVALYIFHKNGUWXJGMZOSHLYUCMCSKEEBRRVLICWQVBHCYBGRSEMI");
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
    msg.setTimeStamp(0.807415754921);
    msg.setSource(56072U);
    msg.setSourceEntity(11U);
    msg.setDestination(39993U);
    msg.setDestinationEntity(28U);
    msg.name.assign("EZSLOSUBENUQJCTWQSUGWIHDHOXURPBOIKOIIKBSEWGTTRLFCEAFFXKMTSXVNZAPRRNC");
    msg.visibility.assign("BCNVNPYODIBYAJDKZYRSWYLJDKWTOFAMGXMQYCDEFWLCHSRALVZMCSWSMNUFROBWYSRFEGQTTQTGTUFJNLHZAIMGPRJLVCKSLRQHAGPUXBUDOXRH");
    msg.scope.assign("MWLEUBZMDNTQDFLCXPCJOGWYOZBGCLX");

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
    msg.setTimeStamp(0.0227583910548);
    msg.setSource(35712U);
    msg.setSourceEntity(213U);
    msg.setDestination(29729U);
    msg.setDestinationEntity(41U);
    msg.name.assign("XKJRXMCNSOTPUKKUSDQOTJBJSZRWRAS");
    msg.visibility.assign("HOKUHKWVYRBNZGBKIFZUUNFYBBMTCYMHIVNJWYLMZXYGVDSTSYDATIOMHJHECKUVGWFTFBQUAEZ");
    msg.scope.assign("VYKXBYVGEJWBKPMURNASZUKLVPCYFIEYHXUTNUOAEJBDPWDFKNZTBPQTLADAKQWOOANBVDJHHNMHJMCNOVLSFRXQCZIKWMNMYFZWDUSSMADWCTEOHZDIJRWZUPQGCGTZOJGGEVOMRYGQRWCJSXPIRIEULMDXGTNYBASIIHVFTQJPKBQSAXLRAKWXT");

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
    msg.setTimeStamp(0.306224353676);
    msg.setSource(30807U);
    msg.setSourceEntity(76U);
    msg.setDestination(61746U);
    msg.setDestinationEntity(78U);
    msg.name.assign("YSIIJRXPXECJBDEHGWXQTOOFNBMTJODIRQPFDNPVEMFKPHYQEDYYVCJNPOVVSQWMUSCBNZFGBAJYWEVVBZSNHTOJAROJFZEOIUOKQTHKZIMZYXILNZHZHLGNHKYDAVUSXKDTMJEUMKHSCYGPDMBIBBQCQQCSRPLCIFOYHGSXEFVGQLNWTTARGWKLJCXIVEMSMVBGRYADUKWCAWFTTDWJ");
    msg.visibility.assign("WCJSFSMJQEFBSFRQQCGFZTIRVXBXJHKQLKAGXOUVLOJGEWV");
    msg.scope.assign("YVXMXRKUNEPFLNOIWVDV");

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
    msg.setTimeStamp(0.120766292661);
    msg.setSource(46525U);
    msg.setSourceEntity(71U);
    msg.setDestination(40621U);
    msg.setDestinationEntity(83U);
    msg.name.assign("RODKCBKLMORUPBKOEBRIDHSNIINXQIHGHANTNBSMDEVGLZYXMOQEMJWGXGFXEJUPGFJNIFNWHABFRAXTCHWJFADLCUYVURDLXKBECHCSUWWCZLPTDPAODYFSITTOZZEHQKYUOAMZVGTRQSMFQSEKYIOMZVUWJNQBTNMGQPJSZPBU");

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
    msg.setTimeStamp(0.274040618239);
    msg.setSource(11806U);
    msg.setSourceEntity(154U);
    msg.setDestination(10405U);
    msg.setDestinationEntity(41U);
    msg.name.assign("PMAGRSTNDPOJSVUCBJQSMWRNWJYFPOEIAHYKKKJVDAGSGDSZHKWNHOKDQWHAEXREFLDKWTGOEZKJLMNLQPQFCGNYQVMDOCYMVUJPQXKTXHVEEOZTOQPZEUTCINNDHNZFFIBSXFYRAVQTRFMRAUWVUUTSFIPRFTSHZLDBPLOWSZXMIUITXBCABULG");

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
    msg.setTimeStamp(0.591115116285);
    msg.setSource(62101U);
    msg.setSourceEntity(29U);
    msg.setDestination(7661U);
    msg.setDestinationEntity(82U);
    msg.name.assign("NHOTAJHWUYJMRJWORVIQRDEMKYDEJAHCGAEWXOVXOMAYPQPRLKKNGHVPBFECEIKDRSUVDWRYWSRTKQCNPFZPALNFEUFEITYHUDMMLHQYXOMBGKIYWJWUKNEOHYNZXSQBCCBGKBDVCSBFQPVRJ");

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
    msg.setTimeStamp(0.451270010667);
    msg.setSource(49208U);
    msg.setSourceEntity(215U);
    msg.setDestination(27801U);
    msg.setDestinationEntity(230U);
    msg.name.assign("WZIEQGKLPRDKJKHOHCLSLUXTQEQUBAGYMZCEIXGEBAYFRXFRTXMIQFNTBRNVPFMUOODMNRDYSCYAODQGVNFMZWJLDEKIQTRPIMEHQVAVNESBYXACPJSHZKGJBUXUQLXQBMIHIOHSGVKTNIXHTFLNQBPHUMUJYEZOFTMZWZPVGRGATWCKVVJHRJKJXTSBBNUPCVUFUSSOYLMCIAAAWWTLOICLEPZLH");

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
    msg.setTimeStamp(0.876283552832);
    msg.setSource(23510U);
    msg.setSourceEntity(195U);
    msg.setDestination(55697U);
    msg.setDestinationEntity(109U);
    msg.name.assign("XWHYJVJYEKSCGPNGFSETEHNPJRAZAHAQOYIRLUPMEVNHAIGNYNJMMSCJBPWUSCNFXBUGJHZXZQVOZGCRJZMGTWBSXHVOXOAYEOPQREWXSYDPZQLSXQQ");

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
    msg.setTimeStamp(0.31035969459);
    msg.setSource(58729U);
    msg.setSourceEntity(47U);
    msg.setDestination(24986U);
    msg.setDestinationEntity(234U);
    msg.name.assign("QGLOTNVHJTVVVRNNJUDPARTRFUWPHNEGNY");

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
    msg.setTimeStamp(0.211331811148);
    msg.setSource(54245U);
    msg.setSourceEntity(205U);
    msg.setDestination(32128U);
    msg.setDestinationEntity(246U);
    msg.timeout = 2604167935U;

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
    msg.setTimeStamp(0.459719832855);
    msg.setSource(11332U);
    msg.setSourceEntity(42U);
    msg.setDestination(44467U);
    msg.setDestinationEntity(149U);
    msg.timeout = 3090415092U;

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
    msg.setTimeStamp(0.411736720224);
    msg.setSource(47736U);
    msg.setSourceEntity(136U);
    msg.setDestination(34041U);
    msg.setDestinationEntity(23U);
    msg.timeout = 1669080666U;

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
    msg.setTimeStamp(0.398381451125);
    msg.setSource(6747U);
    msg.setSourceEntity(125U);
    msg.setDestination(17814U);
    msg.setDestinationEntity(221U);
    msg.sessid = 1321910164U;

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
    msg.setTimeStamp(0.742411866741);
    msg.setSource(51630U);
    msg.setSourceEntity(61U);
    msg.setDestination(39530U);
    msg.setDestinationEntity(58U);
    msg.sessid = 2148519324U;

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
    msg.setTimeStamp(0.153203682398);
    msg.setSource(54012U);
    msg.setSourceEntity(119U);
    msg.setDestination(10641U);
    msg.setDestinationEntity(17U);
    msg.sessid = 1455199309U;

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
    msg.setTimeStamp(0.572869811036);
    msg.setSource(34965U);
    msg.setSourceEntity(193U);
    msg.setDestination(64336U);
    msg.setDestinationEntity(153U);
    msg.sessid = 2580248602U;
    msg.messages.assign("ZXZIRBUHUNOFJIZMWYMOCNMBXLPHUABTPQBSSPMZXCVQCTFCLADYLDUMJRMBELGAWNOCQILBTQFBEASYQKGYHNOEXMXLBXODTCKCLKTGKMCVDKRNEQSVGGRUXDQIPIJDAWSCHZPQKZDBGDKPRJJAKWAFWEHIQZTVPTWFBREOPENLSHNXDNYOVJWKN");

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
    msg.setTimeStamp(0.169515502427);
    msg.setSource(25031U);
    msg.setSourceEntity(91U);
    msg.setDestination(41497U);
    msg.setDestinationEntity(82U);
    msg.sessid = 3048464850U;
    msg.messages.assign("IRNPGHUIRDBGBAEFCATSEUWHCMZHEYRNPWQZIJVLUCQNBQXYBRUMAJIAOVDFBQTDEFBPJFBXKUGGUZMZYOEGHNHXPWAVSKHUZOPIURKDHLYYRTRKOYMIAMESWFHYXKGEORCYCSVZ");

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
    msg.setTimeStamp(0.124304154861);
    msg.setSource(20082U);
    msg.setSourceEntity(233U);
    msg.setDestination(49160U);
    msg.setDestinationEntity(216U);
    msg.sessid = 1313622534U;
    msg.messages.assign("ITGMFWEVYRLEKYLNIJAAKBLCGNKXZIVQHGDSQDCABOUAMGCYHROZNZGGPRBRUKVUAFFCVWUAPUMLXXSIUEPJDOYVILYGTTMXRFCWESUTDPCQJSZHQLWGUKOJPMNLDFIWJKJNPDEXPMGSQUQWZOHWIXNKBBPDTODCODVOYAETHWMLZJMPMSMXFPYYZELCTSKTIHQ");

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
    msg.setTimeStamp(0.0825877567767);
    msg.setSource(59883U);
    msg.setSourceEntity(132U);
    msg.setDestination(62815U);
    msg.setDestinationEntity(173U);
    msg.sessid = 4120453833U;

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
    msg.setTimeStamp(0.813394560773);
    msg.setSource(31825U);
    msg.setSourceEntity(117U);
    msg.setDestination(51212U);
    msg.setDestinationEntity(151U);
    msg.sessid = 1565740682U;

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
    msg.setTimeStamp(0.496270622174);
    msg.setSource(30530U);
    msg.setSourceEntity(113U);
    msg.setDestination(24656U);
    msg.setDestinationEntity(86U);
    msg.sessid = 2890856104U;

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
    msg.setTimeStamp(0.566480468155);
    msg.setSource(19389U);
    msg.setSourceEntity(148U);
    msg.setDestination(9039U);
    msg.setDestinationEntity(3U);
    msg.sessid = 2306039313U;
    msg.status = 205U;

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
    msg.setTimeStamp(0.275605216153);
    msg.setSource(14799U);
    msg.setSourceEntity(213U);
    msg.setDestination(42055U);
    msg.setDestinationEntity(76U);
    msg.sessid = 1656122735U;
    msg.status = 3U;

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
    msg.setTimeStamp(0.797441199229);
    msg.setSource(16828U);
    msg.setSourceEntity(230U);
    msg.setDestination(20442U);
    msg.setDestinationEntity(166U);
    msg.sessid = 910498085U;
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
    msg.setTimeStamp(0.519709711051);
    msg.setSource(60873U);
    msg.setSourceEntity(155U);
    msg.setDestination(9635U);
    msg.setDestinationEntity(213U);
    msg.name.assign("RMGGXWFZJFEVWOFRPVREMGGWRAYDUHEIJXXNDZPXIUMDKABZQGFIALKSSHDAFPYQCSVLIQOBLVLZFWWIXSTYVEUGUPTMCIVMJVTTSGYAPJYZCMCKWIASRQVYJQILASPEHLKKQUFLOBOHBVUUIDMSZQQHFJHGEJTDCNKDPOOIOKCXTGXSLRPNYBDSTQBRDZZNXXKNHJPNAZLVKFWWUHNTQCTYRYONYM");

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
    msg.setTimeStamp(0.526233805267);
    msg.setSource(15649U);
    msg.setSourceEntity(95U);
    msg.setDestination(48087U);
    msg.setDestinationEntity(31U);
    msg.name.assign("VDEYQHTGWSNLXLBYMEPKSWPJUPHUGGONABFFTKBSLTIJNUTOQBWTPMQXVPOJDQVDKANIWHDLSGQR");

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
    msg.setTimeStamp(0.267372921855);
    msg.setSource(10027U);
    msg.setSourceEntity(84U);
    msg.setDestination(46705U);
    msg.setDestinationEntity(218U);
    msg.name.assign("BMAHUKGYLFFZLVEIFYZYXFHCQUCGMPBGTHVEOCWSXIJTIXVYDLROMNUNPXDRJYERNOQXPIKWPSNVKZALWRUJFVPMVASWLUQSYBIQFHESDTHEJ");

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
    msg.setTimeStamp(0.71870113518);
    msg.setSource(36603U);
    msg.setSourceEntity(180U);
    msg.setDestination(57284U);
    msg.setDestinationEntity(18U);
    msg.name.assign("ZBVVRANLKYOKSNDMVXHSJGLMLHNBUNXEGINAQIFQSXPVSTZZJTDDGOWAFULEELYCOV");

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
    msg.setTimeStamp(0.19189506194);
    msg.setSource(37110U);
    msg.setSourceEntity(176U);
    msg.setDestination(5021U);
    msg.setDestinationEntity(124U);
    msg.name.assign("DGAGZICWFDVVEXSIRSCRNYWCJEPMKZUPLTZVIROLPFDLTUMYEIRYKNADDSHTXKGYQDPVEWNOENOAMUYMYGOGBVWYSJEHDWJMMITXHFPBOJAZWAWZLJZFNCRVWQTUCSXNMIUAIBQXBQBHHLJELGUFHBYFBSZJRJQAIVGMKHRKTFXMQAKAHQPBEPTVZCYOLLTFUSSCCRNJCJA");

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
    msg.setTimeStamp(0.957236877039);
    msg.setSource(54796U);
    msg.setSourceEntity(7U);
    msg.setDestination(35904U);
    msg.setDestinationEntity(181U);
    msg.name.assign("HMSVIOHREONYNLSLIVYWNARZVXPJJCBKQZHEPWTSUDHFJGHFVOHTZMTDPOBQPYPYSRDXYRDNVZMQWIXMYBTHNOWCFJAAIMBUMLKNIFUXVBQPFFWQPMSWNKSGZUFXVPVJLAKLZAOJIGDGUVJFMZKCEXRDOCBONWBLKHBDAMRQZLKRAEOKXRCCEXCWEZMTWNJGUKIJNFGOCTYKGLGGSDQEQAWUAYSIVCXEQEZUTYHEGBS");

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
    msg.setTimeStamp(0.488860076339);
    msg.setSource(45587U);
    msg.setSourceEntity(203U);
    msg.setDestination(5171U);
    msg.setDestinationEntity(106U);
    msg.type = 249U;
    msg.error.assign("JTUQDJKEHLZZPKMTFGXPWDUJLHJUCCOILYHBDMTIYOHSKVHKDBRNFLWZXRDIDEKIEGQTEZ");

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
    msg.setTimeStamp(0.272122723778);
    msg.setSource(40328U);
    msg.setSourceEntity(99U);
    msg.setDestination(50431U);
    msg.setDestinationEntity(139U);
    msg.type = 163U;
    msg.error.assign("DVTJNLZYPFYAMCVSZGEOCCZCBEQSMKQNUJKWEWFDHIRPEOSEGWLCUMJQOPWNTJDFVTEVCULUJLMWHYAAKOQPRXZSPANHKLQROVXIGYOUWRIWMOQIINFMYUOOSSMLHFZYUARPJDZDRCGGLQACRDEBDDNKFBFLVVHZBACKJPRBGTNQTODVXTATUGHPSXKYXNWRDUFARAQETLHIWTSSSKXTYEWFIXXGBMJMBFHPIQVVUIBINZEGX");

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
    msg.setTimeStamp(0.662472507842);
    msg.setSource(50875U);
    msg.setSourceEntity(212U);
    msg.setDestination(63616U);
    msg.setDestinationEntity(16U);
    msg.type = 185U;
    msg.error.assign("LVAZTFBODRQOCCNIZIOWTJJKHHCKVNBVSLMZXLBYQPMYKWARJHMMLAWJGVUPJHZTALCDFPULSUBEYJQKXVZXCSFJPPRTZEWHOTKPXSGGBQFKIJEESJMQFHBOLIIHUBAZTGXMRXISWUWDQQGENEDON");

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
    msg.setTimeStamp(0.462979660378);
    msg.setSource(38551U);
    msg.setSourceEntity(159U);
    msg.setDestination(32043U);
    msg.setDestinationEntity(189U);
    msg.seq = 55225U;
    msg.sys_dst.assign("KHUSBIXIVCVJNIHVVMDFEHHQRSSQCFVXTSRTRVXAYWEUFRQKEGOCPXILEPYZWYOUSHGAGWNOLMBKXVGQDYCDCNJQBRRENJXTJTAGKIEKSJZUBLPUDHOCBMUXYKPRNKAWJDELKZJQELECAYDNXLSGWZWZCIKTPUFDZIITPPAMHHBFQEGKMW");
    msg.flags = 87U;
    const char tmp_msg_0[] = {-31, 108, 70, 59, 45, -65, -77, -72, 92, -55, 2, -91, 8, 83, 111, -94, -85, 44, 101, -99, 121, 77, -19, 38, 12, -102, 27, 79, 31, 33, -30, 112, 18, 83, -16, 39, 125, -85, -39, -77, -107, -80, 56, 34, 120, -89, -64, -74, 70, 28, -70, -53, 58, -9, -70, -94, -31, -70, 122, 61, -22, -35, 17, -9, -30, -112, -5, 38, -88, 116, 45, 45, -73, 118, -81, -39, 104, 37, -8, 106, -83, 26, 122, -32, 12, -26, 94, -6, 109, -70, -19, -1, 122, -87, -125, -122, -104, 93, 11, 78, -54, -70, 64, 78, 108, 93, 90, -117, -103, 67, -1, -30, 122, 18, -126, -11, 112, 5, -123, -11, 18, -127, 32, 96, -107, -79, 3, 23, 75, -122, 23, 0};
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
    msg.setTimeStamp(0.623894470183);
    msg.setSource(55415U);
    msg.setSourceEntity(24U);
    msg.setDestination(65064U);
    msg.setDestinationEntity(210U);
    msg.seq = 56945U;
    msg.sys_dst.assign("KYNGRLBQHNLYQVPPJKTCVXNEYEMMPJPSXSCAHLMHHOZFDOVFDMAQVFSQKOKLGIIJN");
    msg.flags = 101U;
    const char tmp_msg_0[] = {-5, 82, 14, -123, 1, -86, 9, 70, 117, 17, -125, 4, -18, -69, -67, 124, 55, -90, 61, 42, 35, 53, -63, 125, -77, 84, 86, 45, -96, -42, 47, -117, 63, -93, 47, 33, -13, 94, -104, -17, 40, 67, -86, -50, 36, 112, -45, -59, -85, -44, 117, 113, -8, -62, 30, -74, 9, -110, 79, -85, -79, 121, -122, -48, 46, 122, -2, 34, 93, -124, 33, -82, -75, 34, -101, 51, 42, -6, -107, -108, 107, -21, -113, 8, -119, 34, 90, -9, 109, 45, -93, -54, -127, -60, -102, -58, 4, -38, 105, 99, 33, 104, 91, 19, -112, -24, -9, 15, 53, 19, 45, 84, 2, 97, -125, -20, -59, -3, 17, 26, 88, 90, -42, 108, 35, 99, 74, 42, -13, -30, -10, -56, 102, 65, 119, 26, -127, 46, -17, -81, 14, 21, -41, 91, -42, -94, 72, 30, -51, 66, -28, 100, -111, -42, -19, -61, 28, 56, -19, -85, 91, -57, 78, -23, 15, 87, -44, 36, -27, -5, -53, 46, 1, 27, 68, -62, -77, 20, -21, 36, 5, 125, 15, -7, 75, 77, 61, -3, 89, -44, 122, -52, -107, 35, 75, 0, 69, 10, -60, 12, 106, -66, -72, 8, 118, -47, -100, -46, 22, -29, 25, 94, 41, -17, 4, 38, -40, 122, 115, 59, 122, -55, 17, 63, -87, 110, -54, -28, -113, -60, -9, 94, -95, 112, 89, -123, 28, -16, -101, -49, 100, -120, -3, 115};
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
    msg.setTimeStamp(0.502900828722);
    msg.setSource(30883U);
    msg.setSourceEntity(168U);
    msg.setDestination(57845U);
    msg.setDestinationEntity(221U);
    msg.seq = 53359U;
    msg.sys_dst.assign("FYHTQWTQIFCSLLBOJWUBEPVXUMKFUXOBYCNNZREXZQWPHORSZLVCUMQCKARHTEQPLK");
    msg.flags = 225U;
    const char tmp_msg_0[] = {120, 84, -19, -26, 83, 98, -112, 112, -41, -71, 98, -110, 8, 102, 80, 98, -108, 42, -91, -7, -6, 109, 0, -58, -118, 53, 86, 71, -88, 106, 125, 32, -109, -64, 58, 33, 105, -22, 81, 64, 8, 114, 26, 66, 74, 27, 50, -36, 55, -48, -111, -32, 25, 38, 114, 51, -64, -105, -120, -43, 122, 94, 120, 80, 35, -119, -106, 88, 0, 40, 32, -39, 31, 95, -16, -48, 126, -30, 95, 46, 74, 93, -62, -66, -34, -117, 10, -28, -113, 57, -103, 123, 126, -98, -127};
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
    msg.setTimeStamp(0.495928989786);
    msg.setSource(22551U);
    msg.setSourceEntity(123U);
    msg.setDestination(38925U);
    msg.setDestinationEntity(80U);
    msg.sys_src.assign("EEMZRLAJEOZUOLIWXMNCRVLNJTMCTNQXLURDUVTTJMGVNOHNAGGKWMLINTBJOMYHEZEWFENVHHPYQLNCZDCUZVHSHLNFSEPYYAJIWIDJTOLWSUTSPGDKYFBVFOMBPQAMVSKHBQGXBFQYZUSFCHKKNBXYEVLJE");
    msg.sys_dst.assign("GRVJJOWEAPATLCIBJHWSCXCGCVDBOYTAQZMRIAXKRPCFULDYASQEDMTZQKZGLNDGKYLLSQKNQYVWIEBJGOVYRFFNKRHUDHMDHSASXUSTRHOQPZVEIJXNPQDPKBEXIHIZPBXFCYQBBBTINEPRXHJNPORFOUVVQNXUGSKHPYSZZ");
    msg.flags = 93U;
    const char tmp_msg_0[] = {-58, 16, -120, -3, -122, 47, -71, -21, 8, -73, 8, 25, 69, 102, -98, -92, -65, 47, -102, 120, 9, -9, -118, 120, 108, 28, 9, 80, -119, 17, -97, -61, 110, -15, 24, 82, 85, -66, -3, -53, -36, 94, -33, 15, -3, -106, 32, 53, 99, -7, 57, -122, -47, -23, -84, -117, -59, -118, -102, 56, -122, 70, -9, 101, -42, 64, -33, -104, 66, -6, -121, -111, -97, 43, 66, -46, -14, -67, 90, -77, 52, -37, 4, 75, -3, -36, 97, -115, -36, 42, -44, -23, -41, 67, -77, -36, 111, 52, -107, -116, 76, -8, -42, 2, 35, -69, 84, -6, -81};
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
    msg.setTimeStamp(0.130339686181);
    msg.setSource(45936U);
    msg.setSourceEntity(136U);
    msg.setDestination(46746U);
    msg.setDestinationEntity(16U);
    msg.sys_src.assign("ICFYOLJIHTSXFJVOSOJNATJAGOGCFZZMHTNTLZBWAUDVYGSDQSSDFOFQYTVVRERIGLGSJDEMMDBBJVBJANLHPKAPOUNQFWJLPFXHEGWWKGVYYDNPRBCRHYNNZTKWMBNMKIYMAXWQUOPPRMMCCPTPXIIEAEXCZWWIEZIARHUPOXQNV");
    msg.sys_dst.assign("EZILLOGRZAVRKTEHGOWEIYLYUQFENFPDVCVWWMVQVJIPJHZJUAQILCJWFUHMEOZTXXAJHOMYMTOYTXYHAROKSVBUPADBSVKSVLNCTEFUHUCPKIGJNXMBYNRVGALGYQHFHMUAGOSIBIBVODWQDNETBJSHZMKZALRXGKKUKPDXIQKPYGNJJCYRMLSQWZIWNFIMHEU");
    msg.flags = 71U;
    const char tmp_msg_0[] = {-78, -105, 24, -78, -128, 71, 28, 87, -11, 91, 72, 20, 52, 51, -29, 87, 115, -22, -51, 110, -7, 78, 38, -81, 96, 93, 5, 12, 68, 89, 54, -110, -23, -58, -103, 74, -23, -62, -113, -92, -53, -45, 106, 96, -21, 17, 104, -57, -116, 12, -102, 22, 29, 48, -80, -88, -64, 38, -94, 101, 12, -52, 26, 48, 89, -113, 111, -22, 38, 33, 12, -106, 7, 46, 7, 105, -90, -84, 31, -55, -93, -125, 118, 69, -89, 53, 72, 48, -41, -3, 46, 98, 23, 18, 5, -51, -6, -45, 20, -52, -111, 104, -45, 66, -110, 10, 43, -99, -110, 41, 84, -48, -72, -37, -105, 56, 19, 78, -33, 47, -10, -50, 87, -29, 116, 37, -74, -36, 74, -33, 114, -28, -64, 29, -8, -115, -86, 73, 16, 18, -20, -35, -85, 104, -56, -46, -52, 62, -36, -122, -35, 103, -94, 110, 4, 51, 36, 79, 5, -47, 116, 1, 16, -117, -113, 74, 4, 10, 4, -6, 31, 43, -29, -115, 4, -100, -95, -20, -28, -55, -50, -90, -12, -21, 37, 120, 93, -13, -66, -121, -33, 47, -127, -56, -34, -64, -2, -41, 10, -65, 121, 46, -91, 32, -19, 116, 62, 116, 67, -128, -125, -114, -75, 66, -112, -74, -16, 61, 25, 39, 118, 11};
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
    msg.setTimeStamp(0.0336807865046);
    msg.setSource(35353U);
    msg.setSourceEntity(200U);
    msg.setDestination(45779U);
    msg.setDestinationEntity(182U);
    msg.sys_src.assign("NSBQWIXCVRXNVFUKOKFATHEXSGYRDJPDSPRBOJRNLYGTLYVGZXHVMGXBMYPKUKWINJHRYRMODATXSBPQQJLPEOTSZPDQUJRETZEWSYDAUYIMUPJTQSBLEEHEWIENQIGGNNKZCNKBMFWHZCZCFOLQTPFVBCALYQMJYZFTPJUPVXCLCKJRLSHGXHVYF");
    msg.sys_dst.assign("NPANRZXINQCKWCNILMDWDCHTGWQOEYBESIWPFYJKBSLYBTVEKMTZQTCWLMRGWFLUYUZVGAUSRKODXEKHDXFHJ");
    msg.flags = 97U;
    const char tmp_msg_0[] = {80, -14, -35, -103, 9, 67, 113, 45, -102, -3, -110, 40, -109, 126, -101, 12, 79, -108, -88, 43, 118, 36, 41, -102, -89, 74, -39, -4, 89, -55, -120, 111, 92, 32, 88, 121, 35, -19, -118, -46, 87, 13, -41, -65, -96, 89, 85, 86, 29, -43, 77, 47, 6, 76, 46, -2, 83, -5, -29, 31, -102, -62, 106, -126, 85, 15, -2, -64, -7, 115, 86, -115, -29, 72, -83, -52, -78, -24, 59, -126, -46, -85, -99, 5, 81, -65, -98, 95, -109, 105, -30, -95, -90, -18, 17, -59, -44, 77, 11};
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
    msg.setTimeStamp(0.403813530066);
    msg.setSource(41069U);
    msg.setSourceEntity(131U);
    msg.setDestination(34128U);
    msg.setDestinationEntity(94U);
    msg.seq = 10931U;
    msg.value = 193U;
    msg.error.assign("MBXPEHRGJPUMAYQFJXESDJCYBGEJXPSCATXDWVRTRMHYCHIETVQSZTZQARNMQUWHAFEFJBBEWKBHCBISQORABAPRIGRDIGCIOXUKHHGQYUUMZNIMGTGCLBPOFPKODR");

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
    msg.setTimeStamp(0.835509903589);
    msg.setSource(18182U);
    msg.setSourceEntity(53U);
    msg.setDestination(24832U);
    msg.setDestinationEntity(167U);
    msg.seq = 10574U;
    msg.value = 31U;
    msg.error.assign("UWLGSQUECETDETFGVQLLVEAHVYGIMZXCXJAJYPZNBAYEJDIXGIFKMJYXNSFIZJQKZQQSXBPBXWEXBXRWSOELMVCIHKBJLMF");

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
    msg.setTimeStamp(0.589341072537);
    msg.setSource(4200U);
    msg.setSourceEntity(87U);
    msg.setDestination(54729U);
    msg.setDestinationEntity(115U);
    msg.seq = 44807U;
    msg.value = 180U;
    msg.error.assign("QOJEQWQLUSMAECNEHFVYDZWIJHLIPJSARIFBTMMKDMFVQRPAGUXRNHTCBLTKHJDWWCRTPDTKYKVOGSKTQSXLOHFBJWGWPGAJXSUBBKBGUYVKOYVSODOUNGFVOZXNCWEMIWXTVULZYREZNPERCGMKZPAEIQZJ");

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
    msg.setTimeStamp(0.252896222093);
    msg.setSource(20768U);
    msg.setSourceEntity(178U);
    msg.setDestination(25284U);
    msg.setDestinationEntity(30U);
    msg.seq = 7595U;
    msg.sys.assign("JZBKOXVKGMYSLXNTAJCZUPWHFWTZXGRWGCJPCITFFPQVBIUNIZRRFNJPZQKCNXVBGDIOCBYJUJSGLEDMYBACXMQVDRZDDIBFEQGREQUKNNVJLWVWIGOMZCXZPKUEYTFNESAHADKOKLARWKQMRFDUSHYPNYTMULPYNMYBGKLSVZCRUAPRLAVGVHDJTWDXKEEW");
    msg.value = 0.25798705024;

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
    msg.setTimeStamp(0.642857386462);
    msg.setSource(8469U);
    msg.setSourceEntity(90U);
    msg.setDestination(7316U);
    msg.setDestinationEntity(59U);
    msg.seq = 35549U;
    msg.sys.assign("PWEIJPHKCYDAFWHDANFVNBSFVDNBHLFJVSMPPTDUMQSDYTGOUJUGWXUUSLQPBOQYIOVMNLRVHLHUJFUWHUFIPDQZSJAAODTZTOXMGCCCXXXSIPEJZUAWDWJCMZILCKHIOTRYXVKCOEKSSSGMMLNVLWZJLYNEQCIPZHITNBRWYGRBROBENYQAMKHGEDPFKGSNJURCDMBRXGZAAQJYTTFREQKPMRAZQLKWEFRAXHBZKVQTTYIBO");
    msg.value = 0.769907335305;

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
    msg.setTimeStamp(0.352081454441);
    msg.setSource(27404U);
    msg.setSourceEntity(156U);
    msg.setDestination(11839U);
    msg.setDestinationEntity(65U);
    msg.seq = 30275U;
    msg.sys.assign("FXJMBDKTJSYSBJZZWCQKVWCAQSRLHBZANZWYUFHIPNPXWVUPAYVZRWLAVIIBORETATZMDGKRXJJLZKKAXWSDODYNPGUUBNOMKRYMTMLLQSVEMJCVUYSYHZSQFXWEEJFRXXVGJTLQBSRQABSDTGBWYA");
    msg.value = 0.938295554582;

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
    msg.setTimeStamp(0.970838648777);
    msg.setSource(51508U);
    msg.setSourceEntity(208U);
    msg.setDestination(47683U);
    msg.setDestinationEntity(135U);
    msg.action = 146U;
    msg.longain = 0.677781191527;
    msg.latgain = 0.347150699195;
    msg.bondthick = 809464729U;
    msg.leadgain = 0.105192608269;
    msg.deconflgain = 0.50099736843;

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
    msg.setTimeStamp(0.302433487371);
    msg.setSource(57988U);
    msg.setSourceEntity(215U);
    msg.setDestination(50340U);
    msg.setDestinationEntity(208U);
    msg.action = 146U;
    msg.longain = 0.27507677193;
    msg.latgain = 0.103381664989;
    msg.bondthick = 2238847789U;
    msg.leadgain = 0.26594254447;
    msg.deconflgain = 0.691819036092;

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
    msg.setTimeStamp(0.65809975143);
    msg.setSource(35631U);
    msg.setSourceEntity(93U);
    msg.setDestination(64682U);
    msg.setDestinationEntity(3U);
    msg.action = 221U;
    msg.longain = 0.193623214434;
    msg.latgain = 0.780516316584;
    msg.bondthick = 919361862U;
    msg.leadgain = 0.632406266772;
    msg.deconflgain = 0.827338622614;

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
    msg.setTimeStamp(0.790393960803);
    msg.setSource(19680U);
    msg.setSourceEntity(183U);
    msg.setDestination(3904U);
    msg.setDestinationEntity(86U);
    msg.err_mean = 0.251883116006;
    msg.dist_min_abs = 0.393412229262;
    msg.dist_min_mean = 0.813464084784;

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
    msg.setTimeStamp(0.471921603484);
    msg.setSource(46679U);
    msg.setSourceEntity(55U);
    msg.setDestination(18752U);
    msg.setDestinationEntity(1U);
    msg.err_mean = 0.130431612796;
    msg.dist_min_abs = 0.700109018409;
    msg.dist_min_mean = 0.974581626294;

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
    msg.setTimeStamp(0.158262780679);
    msg.setSource(62062U);
    msg.setSourceEntity(158U);
    msg.setDestination(24364U);
    msg.setDestinationEntity(208U);
    msg.err_mean = 0.742185574695;
    msg.dist_min_abs = 0.771568678177;
    msg.dist_min_mean = 0.679848183606;

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
    msg.setTimeStamp(0.632532734896);
    msg.setSource(9821U);
    msg.setSourceEntity(161U);
    msg.setDestination(25093U);
    msg.setDestinationEntity(186U);
    msg.action = 187U;
    msg.lon_gain = 0.538488917717;
    msg.lat_gain = 0.964534481752;
    msg.bond_thick = 0.607431510209;
    msg.lead_gain = 0.989705683753;
    msg.deconfl_gain = 0.648933847795;
    msg.accel_switch_gain = 0.580943901956;
    msg.safe_dist = 0.423053950381;
    msg.deconflict_offset = 0.360605973457;
    msg.accel_safe_margin = 0.922379642663;
    msg.accel_lim_x = 0.161763506278;

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
    msg.setTimeStamp(0.959422412655);
    msg.setSource(42718U);
    msg.setSourceEntity(162U);
    msg.setDestination(13207U);
    msg.setDestinationEntity(246U);
    msg.action = 138U;
    msg.lon_gain = 0.529128194597;
    msg.lat_gain = 0.064813133155;
    msg.bond_thick = 0.487799184616;
    msg.lead_gain = 0.310051649911;
    msg.deconfl_gain = 0.215785015739;
    msg.accel_switch_gain = 0.740568256237;
    msg.safe_dist = 0.335551785196;
    msg.deconflict_offset = 0.905694190592;
    msg.accel_safe_margin = 0.313861004908;
    msg.accel_lim_x = 0.426846564262;

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
    msg.setTimeStamp(0.565164163999);
    msg.setSource(27675U);
    msg.setSourceEntity(152U);
    msg.setDestination(16430U);
    msg.setDestinationEntity(133U);
    msg.action = 136U;
    msg.lon_gain = 0.970790622993;
    msg.lat_gain = 0.498498992194;
    msg.bond_thick = 0.0889100146676;
    msg.lead_gain = 0.522734819761;
    msg.deconfl_gain = 0.675856202081;
    msg.accel_switch_gain = 0.961047126561;
    msg.safe_dist = 0.43458316667;
    msg.deconflict_offset = 0.252877975578;
    msg.accel_safe_margin = 0.330489564968;
    msg.accel_lim_x = 0.534712987366;

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
    msg.setTimeStamp(0.39863615996);
    msg.setSource(11000U);
    msg.setSourceEntity(157U);
    msg.setDestination(9159U);
    msg.setDestinationEntity(111U);
    msg.type = 1U;
    msg.op = 53U;
    msg.err_mean = 0.259829208816;
    msg.dist_min_abs = 0.525561971115;
    msg.dist_min_mean = 0.225289436731;
    msg.roll_rate_mean = 0.6402396685;
    msg.time = 0.488434721781;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 227U;
    tmp_msg_0.lon_gain = 0.985324697066;
    tmp_msg_0.lat_gain = 0.538433294931;
    tmp_msg_0.bond_thick = 0.0441335660904;
    tmp_msg_0.lead_gain = 0.762095100862;
    tmp_msg_0.deconfl_gain = 0.288313808102;
    tmp_msg_0.accel_switch_gain = 0.981510821872;
    tmp_msg_0.safe_dist = 0.241331783153;
    tmp_msg_0.deconflict_offset = 0.880885653886;
    tmp_msg_0.accel_safe_margin = 0.198887203592;
    tmp_msg_0.accel_lim_x = 0.452152162892;
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
    msg.setTimeStamp(0.853276878867);
    msg.setSource(47495U);
    msg.setSourceEntity(168U);
    msg.setDestination(57873U);
    msg.setDestinationEntity(172U);
    msg.type = 242U;
    msg.op = 120U;
    msg.err_mean = 0.291104865627;
    msg.dist_min_abs = 0.183811398493;
    msg.dist_min_mean = 0.654282172608;
    msg.roll_rate_mean = 0.199728110385;
    msg.time = 0.905693511398;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 154U;
    tmp_msg_0.lon_gain = 0.808021397437;
    tmp_msg_0.lat_gain = 0.564841300352;
    tmp_msg_0.bond_thick = 0.890400444209;
    tmp_msg_0.lead_gain = 0.111127985729;
    tmp_msg_0.deconfl_gain = 0.441398868436;
    tmp_msg_0.accel_switch_gain = 0.0203528530676;
    tmp_msg_0.safe_dist = 0.791018447831;
    tmp_msg_0.deconflict_offset = 0.443454699636;
    tmp_msg_0.accel_safe_margin = 0.32348130537;
    tmp_msg_0.accel_lim_x = 0.875398556679;
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
    msg.setTimeStamp(0.996931228973);
    msg.setSource(59409U);
    msg.setSourceEntity(95U);
    msg.setDestination(2843U);
    msg.setDestinationEntity(66U);
    msg.type = 253U;
    msg.op = 241U;
    msg.err_mean = 0.123408257728;
    msg.dist_min_abs = 0.0248711492378;
    msg.dist_min_mean = 0.727339652871;
    msg.roll_rate_mean = 0.212821878375;
    msg.time = 0.201659183435;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 85U;
    tmp_msg_0.lon_gain = 0.989295593;
    tmp_msg_0.lat_gain = 0.691093093391;
    tmp_msg_0.bond_thick = 0.0342280289409;
    tmp_msg_0.lead_gain = 0.108287405851;
    tmp_msg_0.deconfl_gain = 0.355216411624;
    tmp_msg_0.accel_switch_gain = 0.539102213874;
    tmp_msg_0.safe_dist = 0.156662738694;
    tmp_msg_0.deconflict_offset = 0.208037217708;
    tmp_msg_0.accel_safe_margin = 0.934571720826;
    tmp_msg_0.accel_lim_x = 0.730648075593;
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
    msg.setTimeStamp(0.595532484216);
    msg.setSource(17465U);
    msg.setSourceEntity(26U);
    msg.setDestination(37827U);
    msg.setDestinationEntity(46U);
    msg.lat = 0.522963920002;
    msg.lon = 0.270998355738;
    msg.eta = 327466119U;
    msg.duration = 51780U;

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
    msg.setTimeStamp(0.976581678461);
    msg.setSource(39326U);
    msg.setSourceEntity(2U);
    msg.setDestination(46285U);
    msg.setDestinationEntity(206U);
    msg.lat = 0.683182826842;
    msg.lon = 0.600452559602;
    msg.eta = 2212262686U;
    msg.duration = 41349U;

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
    msg.setTimeStamp(0.39556287868);
    msg.setSource(10755U);
    msg.setSourceEntity(144U);
    msg.setDestination(11478U);
    msg.setDestinationEntity(123U);
    msg.lat = 0.24040760277;
    msg.lon = 0.153899842407;
    msg.eta = 3675103398U;
    msg.duration = 60481U;

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
    msg.setTimeStamp(0.290233334001);
    msg.setSource(5454U);
    msg.setSourceEntity(108U);
    msg.setDestination(63399U);
    msg.setDestinationEntity(5U);
    msg.plan_id = 7420U;
    IMC::SoiWaypoint tmp_msg_0;
    tmp_msg_0.lat = 0.093930924295;
    tmp_msg_0.lon = 0.188919616972;
    tmp_msg_0.eta = 551317052U;
    tmp_msg_0.duration = 12514U;
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
    msg.setTimeStamp(0.856618504554);
    msg.setSource(8998U);
    msg.setSourceEntity(121U);
    msg.setDestination(55424U);
    msg.setDestinationEntity(167U);
    msg.plan_id = 26336U;
    IMC::SoiWaypoint tmp_msg_0;
    tmp_msg_0.lat = 0.290571643731;
    tmp_msg_0.lon = 0.304308061788;
    tmp_msg_0.eta = 3332183719U;
    tmp_msg_0.duration = 20750U;
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
    msg.setTimeStamp(0.523461766805);
    msg.setSource(23058U);
    msg.setSourceEntity(175U);
    msg.setDestination(2015U);
    msg.setDestinationEntity(208U);
    msg.plan_id = 23062U;

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
    msg.setTimeStamp(0.7812535984);
    msg.setSource(47334U);
    msg.setSourceEntity(250U);
    msg.setDestination(32705U);
    msg.setDestinationEntity(66U);
    msg.type = 195U;
    msg.command = 55U;
    msg.settings.assign("ZMKZNDPBMGNCLJKEHWNMVWAXJAOBGEKQZYRHRCQAHIXJQFLFHJQIIVGZYYLDWATWTPFUNCBCHQPIJVGLBWCVCYLJOVPUFFYVANDBFOCXMLZYOUQARFUSIBTINLEEXORNZRDUPBGKKCKFOGKHFMWSTCNLKPXWUYXDADSAGIVTXEAOQETHVEBWSIDRTMWTZKUPRHEVSZGUJGRZGMDISXVXLUSOMZJYPTODPRRTOUMPNJYSEDWHKBJIQNHMESYX");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 38585U;
    msg.plan.set(tmp_msg_0);
    msg.info.assign("SGPQQTNTZXNJNRCXMJSQURUMYGWMBZFILJSTXYJERIRINPMXTULFQTSKHKYNUVCALZWOPXLAZSFCHHJLPGQDNLYRQUPWVTFHMAMFXKEMLOKOKJDI");

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
    msg.setTimeStamp(0.380345589234);
    msg.setSource(4737U);
    msg.setSourceEntity(239U);
    msg.setDestination(38994U);
    msg.setDestinationEntity(220U);
    msg.type = 41U;
    msg.command = 73U;
    msg.settings.assign("HAJZGDRVSMNEIZWSUHOBUVHBBRPSEFPXDNRMLDYIRYZSNYEKBLZJXWTLQRSRYDUOUCYMONKTTKEQBLHGFJFZBOHLOCCUAPXRWGUAJGXCGGQSVAAZEIFEVVPQWPJX");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 34046U;
    IMC::SoiWaypoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.452455891869;
    tmp_tmp_msg_0_0.lon = 0.707231776167;
    tmp_tmp_msg_0_0.eta = 1228525415U;
    tmp_tmp_msg_0_0.duration = 27930U;
    tmp_msg_0.waypoints.push_back(tmp_tmp_msg_0_0);
    msg.plan.set(tmp_msg_0);
    msg.info.assign("ZJIPRDQQGJLOPATKJHFKMIOPSTHYOGOMXNPEOONLDMRVDCBCHUNUB");

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
    msg.setTimeStamp(0.020182307101);
    msg.setSource(10750U);
    msg.setSourceEntity(248U);
    msg.setDestination(14337U);
    msg.setDestinationEntity(106U);
    msg.type = 180U;
    msg.command = 89U;
    msg.settings.assign("MJNFXQSKEHUEOHTWNFSEDRGGAKZVOYMCCQTXRAYIMUHGGZPTIKVIOONYMLUIZPOSMCQHPUSMHOQVFWFSIGUKWXZTTBQLPCDGZHDGURDYLCFSDLKSAWQWJYDQKLTBNLIQKRTRBJG");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 34078U;
    msg.plan.set(tmp_msg_0);
    msg.info.assign("UZEAIIJUEHHVTBLORXRNWHJKJYEJVGSBEDNTHLHXQUYUEKYRCUBAWLQWMLCMISDIMQTACHBBFAICCTJZTPMIEZOALHVSONOGGYGZNKZAPXLWDZPNISPRUYNMWGUDCISKFJPRBTBFNRKOFNAWWLQXULHYQZJGVVGPJFZK");

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
    msg.setTimeStamp(0.770261205718);
    msg.setSource(63114U);
    msg.setSourceEntity(154U);
    msg.setDestination(35233U);
    msg.setDestinationEntity(250U);
    msg.state = 139U;
    msg.plan_id = 42159U;
    msg.wpt_id = 60U;
    msg.settings_chk = 18186U;

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
    msg.setTimeStamp(0.665283946906);
    msg.setSource(16148U);
    msg.setSourceEntity(194U);
    msg.setDestination(46827U);
    msg.setDestinationEntity(243U);
    msg.state = 220U;
    msg.plan_id = 42555U;
    msg.wpt_id = 58U;
    msg.settings_chk = 16344U;

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
    msg.setTimeStamp(0.333986162297);
    msg.setSource(6707U);
    msg.setSourceEntity(135U);
    msg.setDestination(30698U);
    msg.setDestinationEntity(239U);
    msg.state = 116U;
    msg.plan_id = 54130U;
    msg.wpt_id = 102U;
    msg.settings_chk = 47104U;

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
    msg.setTimeStamp(0.899408257007);
    msg.setSource(33979U);
    msg.setSourceEntity(74U);
    msg.setDestination(23619U);
    msg.setDestinationEntity(127U);
    msg.uid = 110U;
    msg.frag_number = 16U;
    msg.num_frags = 33U;
    const char tmp_msg_0[] = {-39, -71, -105, 52, 22, 68, 99, -23, -13, 10, -22, 52, 48, 25, 67, 53, -87, 103, 66, 40, 69, -128, 5, -88, -113, 25, 45, 84, -105, 70, 109, 6, 61, 22, 117, -57, 5, 8, 70, 82, -24, 122, 8, -27, 19, 92, -88, 33, 35, -85, -47, -58, -88, 46, -97, -103, 95, -41, 71, -124, 100, 117, -45, 82, 0, -42, 84, -40, 76, 106, 28, -93, 63, 121, 12, 18, 83, 86, -125, 102, -20, 37, 41, 10, -50, -116, -94, -86, 69, 0, 92, 108, -87, 117, 3, -27, 1, -28, -58, 77, 86, -126, 45, 46, -28, -118};
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
    msg.setTimeStamp(0.92582153885);
    msg.setSource(41976U);
    msg.setSourceEntity(81U);
    msg.setDestination(14247U);
    msg.setDestinationEntity(190U);
    msg.uid = 42U;
    msg.frag_number = 97U;
    msg.num_frags = 106U;
    const char tmp_msg_0[] = {27, 99, -115, 116, -97, 64, -121, 119, 76, -98, 72, -94, -53, 77, -110, 69, -48, 123, -124, 45, 72, 49, -19, -67, 41, 1, 92, -45, 112, -109, 79, 21, 26, 33, 90, -33, -39, -85, -38, 89, 124, -118, -66, -47, 64, -83, -103, -3, 58, 125, -119, 21, 112, 57, -68, 119, 79, -56, 110, 54, 115, 97, 81, -122, 80, 71, -2, 84, 99, 9, -15, 52, 28, 74, 96, 123, 92, 110, 25, -22, -68, -15, 87, -55, 121, -90, 61, -52, 47, 121, 34, -35, 50, 112, -79, -56, 21, 21, 68, 98, 120, 7, -63, -14, -103, -63, 119, 29, 106, -18, -42, 110, -90, 106, -44, -8, 48, -31, -73, 7, 9, 4, 86, -29, -20, 27, -3, 103, 115, -37, -106, -117, 99, 59, -89, 110, 21, 87, -116, 2, -43, 34, 101, -13, 35, -85, -53, 48, 113, 67, 81, 1, -59, -72, 106, 117, 48, 24, -94};
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
    msg.setTimeStamp(0.920333609239);
    msg.setSource(52525U);
    msg.setSourceEntity(224U);
    msg.setDestination(4517U);
    msg.setDestinationEntity(132U);
    msg.uid = 209U;
    msg.frag_number = 222U;
    msg.num_frags = 77U;
    const char tmp_msg_0[] = {57, -111, 12, 80, 21, -101, 51, -99, -95, -79, 9, -95};
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
    msg.setTimeStamp(0.20319632739);
    msg.setSource(14493U);
    msg.setSourceEntity(206U);
    msg.setDestination(29977U);
    msg.setDestinationEntity(179U);
    msg.content_type.assign("NRYFEXYTTIMPIBRGQJQDMRCZIZPZFWXZSWTABBXLXFUVJIHUEHAYOYDGEVGQKRSXGZSUMIDEVRMWFPSSLWTTCQFIRKCVKROCVMXABQCFJALAWHEAUWBCTLHSAPDVSJSCNDHPMBOGFNBOUTDIQIZROUWDJTFVIGVDWKTJOQPMFYENSEUXLHXMZITOWYYKUQFHOKKRLZUYPLQGGCHAEMVYGSENZPBJLVKEJDOWCPLAR");
    const char tmp_msg_0[] = {89, -13, 115, 91, 126, -124, -10, -85, -37, -72, -70, -85, 64, -57, -70, 11, 49, -91, -53, 81, 84, 24, -27, 124, 99, 22, 114, 62, -107, 110, -127, 12, -99, 79, -123, -28, -10, -101, -102, -4, 74, 123, 9, 94, 108, -48, 52, 87, 7, 27, 13, 114, -119, 100, 49, 3, -23, 47, 35, -48, -19, -46, -84, -68, 43, 76, 25, 23, -100, -25, 60, -39, 50, 3, 6, 96, -54, 0, -24, 83, 75, 18, -11, 87, 91, -89, 11, -113, -52, -88, -67, 17, -23, 40, -123, 14, 85, -26, -19, -26, 56, 81, -5, 89, 70, 123, 83, -22, 117, 30, -105, -91, 109, 25, 61, -128, 70, 47, 92, 82, 15, -104, 88, -54, -17, -69, 89, 45, -77, -11, -50, 122, 30, 25, -6, 58, 25, 21, 35, -71, 116, 45, 58, 58, 40, -122, -56, 117, 25, -38, 35, 75, 55, -123, 70, -47, 36, 15, 113, -33, 91, -52, -35, 125, -6, -50, -78, -127, 9, 3, -83, -18, -38, -30, -41, 41, -78, -128, -100, -78, -102, 31, 122, -50, 41, 57, 98, 23, -106, -112, 120, 105, 47, -46, 3, 91, -94, 96, 109, 81, -44, 108, -2, -124, -90, -20, -60, -40, 28, 79, -11, -12, 79, -85, 39, 48, 21, -27, 113, -40, -65, -42, -96, 15, 21, 106, 44, -128, -57, 77, 34};
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
    msg.setTimeStamp(0.357197313309);
    msg.setSource(31649U);
    msg.setSourceEntity(72U);
    msg.setDestination(4918U);
    msg.setDestinationEntity(124U);
    msg.content_type.assign("SGHFSSKEVQUZSJHPHPMGLAQQEFYFDOZWBZVWBOLSYQKPXJESZUXZZKJYTJVRVPPTLKTBDFRQOCUFRULEXADHPALMAUTGFITEHMTPDCOGX");
    const char tmp_msg_0[] = {113, -39, 11, -86, -126, -5, -127, 46, 23, -92, 41, -49, 83, 113, -27, 79, -34, 60, -55, 12, -100, -42, -72, -31, -124, 31, 101, 11, 101, 78, 18, 12, -15, -58, 112, 84, -62, 20, -108, 7, -101, -41, -107, -68, 65, 84, -97, -89, -37, -55, 116, -116, -65, 6, 75, 13, -28, 30, 59, -5, 71, -19, 78, -92, -6, 102, 8, -119, 54, 126, 116, -60, -14, 28, -95, 101, 97, -67, -68, 96, 26, -80, -11, -48, -106, 91, -6, 108, -70, 58, 111, 71, 90, 97, 0, 86, -112, 71, -72, -122, -50, 50, -57, 43, 14, -14, 37, -111, 26, -96, -96, -56, -44, -10, 61, 30, -18, 78, -128, 99, 98, 0, 73, -55, -16, 62, -56, 112, -74, -104, 13, 70, -83, 87, -108, -39, 112, 72, -116, -51, 109, 53, -28, 103, -15, 12, -93, -123, 51, -45, -57, -69, 117, 54, 7, 45, 89, 111};
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
    msg.setTimeStamp(0.718223327753);
    msg.setSource(9560U);
    msg.setSourceEntity(251U);
    msg.setDestination(46914U);
    msg.setDestinationEntity(210U);
    msg.content_type.assign("WRFPGTIILKLEOLYLRVKFVGJMYPPHZRNAWOSCVVJSXFBWTFOYIINJSADQJQWNSCNUHGXXDIARWTHJPXOEKUNGGKOTCWFNMKEHFNBEZUPIAJCXAXBXCCVTIZZQCMEDMBGGBFLYDSETKQJYMLFPGHJHHWCILDTEPPCVMHODFPZRZSXAQYKGKADUYYUMOXONOFIVJASQBORDBPMBAQISWZZTHDWLURNUSQCUSQVTZRYXYURGKDRVEMBUVJ");
    const char tmp_msg_0[] = {-32, -25, -95, 19, 57, 126, 46, 92, -66, 33, -101, 116, -75, 24, 88, -10, -30, -88, 87, 60, 99, -9, 9, 31, -93, -82, 80, 61, -53, -33, -110, 117, 113, -108, -51, 42, -116, -118, -72, 78, -66, -109, -38, 19, -110, 104, 80, 70, -38, 37, -84, 1, 58, -36, 81, -56, 50, -35, -67, -88, -5, -106, 96, -116, -82, 51, 66, 20, -45, 7, 94, -26, -105, 72, 5, -50, 113, -56, 42, 53, -8, 41, -75, 82, -107, 101, 15, -96, 12, 46, -94, 22, -71, 2};
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
    msg.setTimeStamp(0.564083262123);
    msg.setSource(35533U);
    msg.setSourceEntity(153U);
    msg.setDestination(53417U);
    msg.setDestinationEntity(2U);

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
    msg.setTimeStamp(0.875567838549);
    msg.setSource(60655U);
    msg.setSourceEntity(66U);
    msg.setDestination(8362U);
    msg.setDestinationEntity(230U);

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
    msg.setTimeStamp(0.325145191137);
    msg.setSource(55788U);
    msg.setSourceEntity(85U);
    msg.setDestination(42940U);
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
    msg.setTimeStamp(0.591014921129);
    msg.setSource(42104U);
    msg.setSourceEntity(237U);
    msg.setDestination(65270U);
    msg.setDestinationEntity(10U);
    msg.target = 64384U;
    msg.bearing = 0.859351568646;
    msg.elevation = 0.765896297268;

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
    msg.setTimeStamp(0.897020635465);
    msg.setSource(21789U);
    msg.setSourceEntity(168U);
    msg.setDestination(41806U);
    msg.setDestinationEntity(174U);
    msg.target = 14734U;
    msg.bearing = 0.465776711807;
    msg.elevation = 0.184033757962;

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
    msg.setTimeStamp(0.242655807277);
    msg.setSource(56498U);
    msg.setSourceEntity(115U);
    msg.setDestination(47977U);
    msg.setDestinationEntity(134U);
    msg.target = 8248U;
    msg.bearing = 0.850441292577;
    msg.elevation = 0.733874492023;

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
    msg.setTimeStamp(0.287430592624);
    msg.setSource(13836U);
    msg.setSourceEntity(93U);
    msg.setDestination(9837U);
    msg.setDestinationEntity(149U);
    msg.target = 37268U;
    msg.x = 0.553082087281;
    msg.y = 0.295613567432;
    msg.z = 0.143868339094;

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
    msg.setTimeStamp(0.809230170789);
    msg.setSource(41233U);
    msg.setSourceEntity(17U);
    msg.setDestination(33730U);
    msg.setDestinationEntity(223U);
    msg.target = 47133U;
    msg.x = 0.138068118925;
    msg.y = 0.618185996502;
    msg.z = 0.039527712299;

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
    msg.setTimeStamp(0.165848962735);
    msg.setSource(40827U);
    msg.setSourceEntity(85U);
    msg.setDestination(4582U);
    msg.setDestinationEntity(121U);
    msg.target = 28039U;
    msg.x = 0.215870954146;
    msg.y = 0.26693457015;
    msg.z = 0.161415678481;

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
    msg.setTimeStamp(0.520144627425);
    msg.setSource(48914U);
    msg.setSourceEntity(114U);
    msg.setDestination(27771U);
    msg.setDestinationEntity(144U);
    msg.target = 9300U;
    msg.lat = 0.870852254183;
    msg.lon = 0.284491062548;
    msg.z_units = 131U;
    msg.z = 0.182679002237;

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
    msg.setTimeStamp(0.275008550061);
    msg.setSource(26735U);
    msg.setSourceEntity(188U);
    msg.setDestination(31051U);
    msg.setDestinationEntity(154U);
    msg.target = 61592U;
    msg.lat = 0.0913407589839;
    msg.lon = 0.398637282328;
    msg.z_units = 152U;
    msg.z = 0.815824025676;

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
    msg.setTimeStamp(0.659541816647);
    msg.setSource(63608U);
    msg.setSourceEntity(154U);
    msg.setDestination(27018U);
    msg.setDestinationEntity(43U);
    msg.target = 60912U;
    msg.lat = 0.388280563358;
    msg.lon = 0.564534232852;
    msg.z_units = 225U;
    msg.z = 0.874902689189;

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
    msg.setTimeStamp(0.0555086230879);
    msg.setSource(59591U);
    msg.setSourceEntity(156U);
    msg.setDestination(12922U);
    msg.setDestinationEntity(95U);
    msg.locale.assign("THXUDZKOGZPZEFINVGWUXGKOVCZRGBASDMPENLFDQOIJBGDAGAAPKOQSYOEBAQMNMRIRZKYXGHNLXFFRTPKJWXMNCZBUCXJIRBVPYQPCSNCSSDKHKHSEBQJLQOX");
    const char tmp_msg_0[] = {-117, -127, 51, 56, -117, -30, 63, 57, 28, -85, -58, 109, 85, 17, 34, 4, 125, -25, 79, 57, -56, -54, 64, -33, 26, 105, 39, -41, -68, -74, 61, -101, -96, 34, 3, -51, 125, -89, -126, -12, 108, -105, 39, -112, 0, -72, 90, -36, 40, 97, 13, -57, 41, 90, 29, -90, -42, -122, -67, -35, 65, -52, 101, -34, -73, -13, 28, 44, -84, -106, 116, -58, -86, 108, 124, 64, 61, -102, 35, 30};
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
    msg.setTimeStamp(0.416945842219);
    msg.setSource(8196U);
    msg.setSourceEntity(124U);
    msg.setDestination(61750U);
    msg.setDestinationEntity(139U);
    msg.locale.assign("WDLSQZHTYPCIXJLIUD");
    const char tmp_msg_0[] = {-113, -9, -30, 115, -11, 43, -78, -56, -31, 33, -55, 106, -110, 12, 41, -45, -52, 108, 64, -100, 63, 84, -117, -34, 7, -44, 42, -50, -83, 38, 47, 38, -77, -21, -123, -3, -106, -46, 60, -38, -103, 103, -101, -114, -80, 59, 80, 6, -29, -88, -88, -104, 56, 64, 63, 102, 109, 10, -80, -96, -27, -105, -76, -25, 113, -21, 111, -63, 23, 94, 14, -73, -32, -74, 47, -7, 40, -11, 61, -19, -39, -57, -112, 66, 10, -63, 7, -57, -96, 124, 36, 23, -123, -12, 5, 82, 21, -98, -71, 50, -107, 51, 7, 106, 62, -24, -86, -122, -36, 41, -57, 55, -48, -67, -25, -54, -37, 122, 29, 106, -91, 23, 108, 96, 112, 38, 8, 53, -81, -67, 42, -87, 17, -67, 112, -67, -116, 111, 14, -71, 113, -61, 51, -108, 114, 1, -62, 114, 28, -106, 7, -58, -88, 96, 31, 124, 65, -9, 121, -81, 126, 100, 4, -61, -115, 22, -9, -14, 73, 126, -89, 6, 8, 40, 95, -57, 115, 95, -7, 20, -103, 67, 6, -121, -91, 28, 29, -22, 9, -60, 83, -122, -4, 111, 17, 64, 25, 10, -115, 96, -19, -61, -20, -6, 6, -17, 6, -122, 56, 92, 108, -89, 98, 47, 92, 39, -10};
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
    msg.setTimeStamp(0.203033498499);
    msg.setSource(3975U);
    msg.setSourceEntity(243U);
    msg.setDestination(46887U);
    msg.setDestinationEntity(207U);
    msg.locale.assign("JOGHKWJXXLUYNYFLZAHJXVF");
    const char tmp_msg_0[] = {-30, 50, -123, -85, -124, 52, -36, -101, 98, -100, 89, 32, 32, 10, -56, -91, 125, -40, 96, 61, -43, -21, -23, -36, 60, 14, 84, 100, 123, 121, -89, -57, -96, 113, 65, -120, -56, -103, 46, 91};
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
    msg.setTimeStamp(0.393715736341);
    msg.setSource(4142U);
    msg.setSourceEntity(234U);
    msg.setDestination(35799U);
    msg.setDestinationEntity(198U);

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
    msg.setTimeStamp(0.750528123658);
    msg.setSource(26779U);
    msg.setSourceEntity(120U);
    msg.setDestination(35511U);
    msg.setDestinationEntity(63U);

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
    msg.setTimeStamp(0.880632756542);
    msg.setSource(13795U);
    msg.setSourceEntity(228U);
    msg.setDestination(24341U);
    msg.setDestinationEntity(42U);

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
    msg.setTimeStamp(0.480339100431);
    msg.setSource(2688U);
    msg.setSourceEntity(129U);
    msg.setDestination(23207U);
    msg.setDestinationEntity(69U);
    msg.camid = 232U;
    msg.x = 30680U;
    msg.y = 29604U;

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
    msg.setTimeStamp(0.878424006418);
    msg.setSource(44767U);
    msg.setSourceEntity(86U);
    msg.setDestination(24651U);
    msg.setDestinationEntity(92U);
    msg.camid = 205U;
    msg.x = 6413U;
    msg.y = 61735U;

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
    msg.setTimeStamp(0.219166135691);
    msg.setSource(60554U);
    msg.setSourceEntity(130U);
    msg.setDestination(52845U);
    msg.setDestinationEntity(86U);
    msg.camid = 33U;
    msg.x = 12637U;
    msg.y = 24143U;

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
    msg.setTimeStamp(0.414066104068);
    msg.setSource(27523U);
    msg.setSourceEntity(92U);
    msg.setDestination(10195U);
    msg.setDestinationEntity(36U);
    msg.camid = 144U;
    msg.x = 38189U;
    msg.y = 60524U;

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
    msg.setTimeStamp(0.105685639511);
    msg.setSource(63704U);
    msg.setSourceEntity(238U);
    msg.setDestination(13737U);
    msg.setDestinationEntity(0U);
    msg.camid = 71U;
    msg.x = 22247U;
    msg.y = 43744U;

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
    msg.setTimeStamp(0.437986577385);
    msg.setSource(2103U);
    msg.setSourceEntity(225U);
    msg.setDestination(13287U);
    msg.setDestinationEntity(236U);
    msg.camid = 142U;
    msg.x = 49850U;
    msg.y = 32022U;

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
    msg.setTimeStamp(0.530010498058);
    msg.setSource(17446U);
    msg.setSourceEntity(35U);
    msg.setDestination(17722U);
    msg.setDestinationEntity(210U);
    msg.tracking = 9U;
    msg.lat = 0.5582132044;
    msg.lon = 0.0956342606283;
    msg.x = 0.332158039607;
    msg.y = 0.80598743173;
    msg.z = 0.177507910981;

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
    msg.setTimeStamp(0.273140290518);
    msg.setSource(36847U);
    msg.setSourceEntity(18U);
    msg.setDestination(184U);
    msg.setDestinationEntity(129U);
    msg.tracking = 210U;
    msg.lat = 0.797562773763;
    msg.lon = 0.0596415189271;
    msg.x = 0.47204390589;
    msg.y = 0.381122825447;
    msg.z = 0.445050664297;

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
    msg.setTimeStamp(0.699527830359);
    msg.setSource(50331U);
    msg.setSourceEntity(127U);
    msg.setDestination(17712U);
    msg.setDestinationEntity(249U);
    msg.tracking = 16U;
    msg.lat = 0.492206288769;
    msg.lon = 0.0218025275369;
    msg.x = 0.722808585089;
    msg.y = 0.631892644813;
    msg.z = 0.952641800888;

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
    msg.setTimeStamp(0.316060773725);
    msg.setSource(29425U);
    msg.setSourceEntity(187U);
    msg.setDestination(29680U);
    msg.setDestinationEntity(106U);
    msg.target.assign("XSUPLCNBOJVGWDJKGVMRMSXJHXDOZILEESFAXSHORQBYCUMTQJWTDUDUPYZOPHQASKVIDUKFNKWUGMVHKBFVZJYYEPSUIY");
    msg.lbearing = 0.207637518578;
    msg.lelevation = 0.484405699485;
    msg.bearing = 0.00183898060677;
    msg.elevation = 0.53906401038;
    msg.phi = 0.294444235608;
    msg.theta = 0.811066230452;
    msg.psi = 0.109560279551;
    msg.accuracy = 0.985422340992;

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
    msg.setTimeStamp(0.428598766793);
    msg.setSource(33130U);
    msg.setSourceEntity(203U);
    msg.setDestination(22454U);
    msg.setDestinationEntity(131U);
    msg.target.assign("OSWDPGOYCHHXURZHJTYICMYDLFKPTKRQ");
    msg.lbearing = 0.871629589883;
    msg.lelevation = 0.780703071074;
    msg.bearing = 0.718703798794;
    msg.elevation = 0.501075545795;
    msg.phi = 0.671042814545;
    msg.theta = 0.583433798004;
    msg.psi = 0.429197750219;
    msg.accuracy = 0.544913289435;

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
    msg.setTimeStamp(0.467276556418);
    msg.setSource(55059U);
    msg.setSourceEntity(200U);
    msg.setDestination(22873U);
    msg.setDestinationEntity(164U);
    msg.target.assign("DXKNZXOUTSXPIVZQBXAOYLDMDPECRIJLFQAUUMAFAFNYXETHPWZWHZJYFOT");
    msg.lbearing = 0.0184766161739;
    msg.lelevation = 0.994350356054;
    msg.bearing = 0.561951156717;
    msg.elevation = 0.616557320354;
    msg.phi = 0.370034603946;
    msg.theta = 0.444840340865;
    msg.psi = 0.660373164934;
    msg.accuracy = 0.738936735859;

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
    msg.setTimeStamp(0.467632760391);
    msg.setSource(18970U);
    msg.setSourceEntity(233U);
    msg.setDestination(43172U);
    msg.setDestinationEntity(99U);
    msg.target.assign("MYLDLOIQPJHEWONNREHTYUWZJNJUJDTCRCWYWLPEUYUGVQMXJMKQGLDAXXIMSUWRTYIMWNPRUSQHVKHEMVFQSFLGXVWLAODHWQRQZXPBXFZLDFPAFVNOLXSRBWIHPGOETBAJCABBWFEMCJNOU");
    msg.x = 0.87068069853;
    msg.y = 0.147796584443;
    msg.z = 0.519974236811;
    msg.n = 0.466734480514;
    msg.e = 0.230921983582;
    msg.d = 0.658835164042;
    msg.phi = 0.296116697027;
    msg.theta = 0.262256351553;
    msg.psi = 0.907444745704;
    msg.accuracy = 0.156907548786;

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
    msg.setTimeStamp(0.657918151225);
    msg.setSource(29505U);
    msg.setSourceEntity(6U);
    msg.setDestination(13004U);
    msg.setDestinationEntity(250U);
    msg.target.assign("FXTRDPIPMJRVGYELXRITXNBGTZWSEUPPHVNXRNGOTOVNZKILJLCVCIDUTSWZKHOJHQLDCPCAWAZDSBMIMQQMRGEQKJDQSTJNQDWSKZMDFMLCJFCKHQEFPCBFEISZAADRHN");
    msg.x = 0.985535602607;
    msg.y = 0.993649037298;
    msg.z = 0.0618199748922;
    msg.n = 0.727616062623;
    msg.e = 0.865635944385;
    msg.d = 0.959768467963;
    msg.phi = 0.312187777782;
    msg.theta = 0.186834330618;
    msg.psi = 0.619113636101;
    msg.accuracy = 0.0501464569429;

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
    msg.setTimeStamp(0.39453254723);
    msg.setSource(23987U);
    msg.setSourceEntity(106U);
    msg.setDestination(12484U);
    msg.setDestinationEntity(131U);
    msg.target.assign("BIPPFHAKBEUZGAISZXUMAKDWGWROTKSOEILNJENNXNYQUCBTWQHZIDTGDXWJWWIBLVSERCQJTEPCJDLASLRYDITUJTRXZVFLMBBFCACKOYKSGPHNXQXKRVPMSNRUCKWEJLGFBKHMHSFYWZDSUHZQIAPIEAARFLGHTITRLMMVVLQZTODFCMOZJUOXQUDUWHVMQRWCJPPVMGQKJNYB");
    msg.x = 0.376839267232;
    msg.y = 0.520665871024;
    msg.z = 0.884730753749;
    msg.n = 0.319256358553;
    msg.e = 0.940894799417;
    msg.d = 0.226401120476;
    msg.phi = 0.697393843751;
    msg.theta = 0.0918263324246;
    msg.psi = 0.676914229326;
    msg.accuracy = 0.691898020388;

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
    msg.setTimeStamp(0.121946224034);
    msg.setSource(8057U);
    msg.setSourceEntity(193U);
    msg.setDestination(10354U);
    msg.setDestinationEntity(236U);
    msg.target.assign("GFGJHNQNZILAUWHYWETFXBBUUJSAXWVFKGSLKUFCTRTAWSDBRXNPIBARLHVGPDTOQKOXKTRQNTKKMFRDKCCCCWNOCNANUXOEAFLZSIVDWXAMSMYPXJAEDHJJVFJCBHTHKYMIRBOTEBHDGORMI");
    msg.lat = 0.0555910758505;
    msg.lon = 0.293829122536;
    msg.z_units = 243U;
    msg.z = 0.132292344354;
    msg.accuracy = 0.788409299697;

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
    msg.setTimeStamp(0.0129234016228);
    msg.setSource(33764U);
    msg.setSourceEntity(42U);
    msg.setDestination(37669U);
    msg.setDestinationEntity(39U);
    msg.target.assign("JWPNDJCZYPTWZFWHRQIBAZHIOYEZOAAZETFXVMIG");
    msg.lat = 0.593377571783;
    msg.lon = 0.946703395235;
    msg.z_units = 219U;
    msg.z = 0.764819380901;
    msg.accuracy = 0.644265700812;

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
    msg.setTimeStamp(0.565213679327);
    msg.setSource(2226U);
    msg.setSourceEntity(203U);
    msg.setDestination(26239U);
    msg.setDestinationEntity(2U);
    msg.target.assign("RXAXPOJZCSYTPKPKBUKBNFKVWGFOPCTKKHQTBAPLNUIVADDPHIDUGDHRII");
    msg.lat = 0.914942361749;
    msg.lon = 0.590056291311;
    msg.z_units = 254U;
    msg.z = 0.138737102169;
    msg.accuracy = 0.523210487337;

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
    msg.setTimeStamp(0.853873002238);
    msg.setSource(63520U);
    msg.setSourceEntity(172U);
    msg.setDestination(58954U);
    msg.setDestinationEntity(51U);
    msg.name.assign("WZADPIXGYGFCMJCDXNPUJGZCOKRZTHIWNHALESVYAI");
    msg.lat = 0.0420463948806;
    msg.lon = 0.40586762477;
    msg.z = 0.389873921665;
    msg.z_units = 229U;

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
    msg.setTimeStamp(0.677058157196);
    msg.setSource(37968U);
    msg.setSourceEntity(57U);
    msg.setDestination(54392U);
    msg.setDestinationEntity(231U);
    msg.name.assign("QERKOLKLBQPKWMLYSZHQWWVYDTODSKAYUEOLHEAXYCXSGZGDFYWCUNPRFPTILUSCDCQDZGTMOAIONIJBZBGPAKKHVVSQGGWGCAMBSCEHZMDCHHVFDTIXNMFFTJHHUEFHNUAENZRPJEU");
    msg.lat = 0.302818393086;
    msg.lon = 0.541586505873;
    msg.z = 0.797560443414;
    msg.z_units = 240U;

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
    msg.setTimeStamp(0.276391919098);
    msg.setSource(19206U);
    msg.setSourceEntity(49U);
    msg.setDestination(42730U);
    msg.setDestinationEntity(176U);
    msg.name.assign("NZUVLBZPTHFBIDXNZGJTSYNNFYOEXHMJCHAFTOKQIHHKBLFYTKESGCCHYJIEORUQVMBYGBUEEYIWGXKAGOJWTAVMNUSKRECJMGAQIQFEOCLXVFQDRNYLLGQDRFSWDDCTEMEDQJAASKAYVRKBWPSCMWBNNIUXQ");
    msg.lat = 0.820459706892;
    msg.lon = 0.110783637407;
    msg.z = 0.00696904818231;
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
    msg.setTimeStamp(0.263518713899);
    msg.setSource(58979U);
    msg.setSourceEntity(100U);
    msg.setDestination(35968U);
    msg.setDestinationEntity(168U);
    msg.op = 155U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("JZBFUAVWLIIVIHKGOSSZMBNLJOGYMPMNKWEOBJ");
    tmp_msg_0.lat = 0.992443023089;
    tmp_msg_0.lon = 0.518802711156;
    tmp_msg_0.z = 0.663567820145;
    tmp_msg_0.z_units = 250U;
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
    msg.setTimeStamp(0.43338257131);
    msg.setSource(5634U);
    msg.setSourceEntity(11U);
    msg.setDestination(47792U);
    msg.setDestinationEntity(226U);
    msg.op = 235U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("ODYGINVGSFJCFYACZCPTIFDAUZZYYUDUTWSPFZIEYERUIQLVJRKGMWHMPRDROSMJCXAEMRPJLDSGMUBCSAVAXVTVKHOEUWXTQKTXRDOFVFEFKBNHGVAIPQPSRODDNGIDKNLGLNFYABMPEDKCWHXITOIMTNGNIOBQLOCRWHJYQUXVGWBNHWQQEAWVLTQMYCLSHZLAFKBZSPNXXCIOQBBMRZHHPHZBJJQB");
    tmp_msg_0.lat = 0.865144290782;
    tmp_msg_0.lon = 0.51457263846;
    tmp_msg_0.z = 0.167708590664;
    tmp_msg_0.z_units = 87U;
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
    msg.setTimeStamp(0.651885988465);
    msg.setSource(64849U);
    msg.setSourceEntity(147U);
    msg.setDestination(57043U);
    msg.setDestinationEntity(99U);
    msg.op = 63U;

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
    msg.setTimeStamp(0.0487440073097);
    msg.setSource(15780U);
    msg.setSourceEntity(6U);
    msg.setDestination(14579U);
    msg.setDestinationEntity(178U);
    msg.value = 0.50439618989;
    msg.type = 165U;

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
    msg.setTimeStamp(0.136660370696);
    msg.setSource(52737U);
    msg.setSourceEntity(52U);
    msg.setDestination(56056U);
    msg.setDestinationEntity(52U);
    msg.value = 0.453793904065;
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
    msg.setTimeStamp(0.492729977096);
    msg.setSource(24282U);
    msg.setSourceEntity(223U);
    msg.setDestination(49848U);
    msg.setDestinationEntity(59U);
    msg.value = 0.837827704492;
    msg.type = 35U;

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
    msg.setTimeStamp(0.360650552085);
    msg.setSource(64655U);
    msg.setSourceEntity(123U);
    msg.setDestination(18696U);
    msg.setDestinationEntity(212U);
    msg.value = 0.798173026788;

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
    msg.setTimeStamp(0.745854093361);
    msg.setSource(8829U);
    msg.setSourceEntity(149U);
    msg.setDestination(21707U);
    msg.setDestinationEntity(181U);
    msg.value = 0.0230312216144;

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
    msg.setTimeStamp(0.995669058252);
    msg.setSource(60023U);
    msg.setSourceEntity(176U);
    msg.setDestination(5089U);
    msg.setDestinationEntity(141U);
    msg.value = 0.946706618833;

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
    msg.setTimeStamp(0.706307737527);
    msg.setSource(15496U);
    msg.setSourceEntity(48U);
    msg.setDestination(61781U);
    msg.setDestinationEntity(238U);
    msg.timestamp_last_service = 0.865058640608;
    msg.time_next_service = 0.348930097043;
    msg.time_motor_next_service = 0.601603067961;
    msg.time_idle_ground = 0.663420482404;
    msg.time_idle_air = 0.0692479992241;
    msg.time_idle_water = 0.647100203702;
    msg.time_idle_underwater = 0.409422329813;
    msg.time_idle_unknown = 0.141992296247;
    msg.time_motor_ground = 0.228123655666;
    msg.time_motor_air = 0.244457347179;
    msg.time_motor_water = 0.127734775904;
    msg.time_motor_underwater = 0.719030671403;
    msg.time_motor_unknown = 0.554368419673;
    msg.rpm_min = 1876;
    msg.rpm_max = -32539;
    msg.depth_max = 0.18106014782;

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
    msg.setTimeStamp(0.813969182387);
    msg.setSource(38752U);
    msg.setSourceEntity(29U);
    msg.setDestination(51750U);
    msg.setDestinationEntity(252U);
    msg.timestamp_last_service = 0.479866167413;
    msg.time_next_service = 0.534860836061;
    msg.time_motor_next_service = 0.157685294319;
    msg.time_idle_ground = 0.855063362402;
    msg.time_idle_air = 0.953445191514;
    msg.time_idle_water = 0.311607353629;
    msg.time_idle_underwater = 0.741168970889;
    msg.time_idle_unknown = 0.83811849875;
    msg.time_motor_ground = 0.314700520087;
    msg.time_motor_air = 0.679476771911;
    msg.time_motor_water = 0.962447836334;
    msg.time_motor_underwater = 0.614312307548;
    msg.time_motor_unknown = 0.576041670003;
    msg.rpm_min = 19843;
    msg.rpm_max = 2546;
    msg.depth_max = 0.984773346557;

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
    msg.setTimeStamp(0.870628182131);
    msg.setSource(45264U);
    msg.setSourceEntity(157U);
    msg.setDestination(32422U);
    msg.setDestinationEntity(210U);
    msg.timestamp_last_service = 0.134900780094;
    msg.time_next_service = 0.483036196827;
    msg.time_motor_next_service = 0.779033723032;
    msg.time_idle_ground = 0.947037888285;
    msg.time_idle_air = 0.921526202753;
    msg.time_idle_water = 0.653257391994;
    msg.time_idle_underwater = 0.666466673082;
    msg.time_idle_unknown = 0.670570446877;
    msg.time_motor_ground = 0.341250962646;
    msg.time_motor_air = 0.0101226532825;
    msg.time_motor_water = 0.181664111851;
    msg.time_motor_underwater = 0.913299545565;
    msg.time_motor_unknown = 0.993468107253;
    msg.rpm_min = -17596;
    msg.rpm_max = -12882;
    msg.depth_max = 0.560686077836;

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
    msg.setTimeStamp(0.978428730003);
    msg.setSource(62454U);
    msg.setSourceEntity(12U);
    msg.setDestination(33437U);
    msg.setDestinationEntity(170U);
    msg.severity = 159U;
    msg.text.assign("GEAAQDUOVGYKCQJLYZAUNTGJXLIZBQCKJRJMYEMQNTBVHMDECBQYEHFRFAYKZGXYOIDRSWCUHWBZMKVOTQNYMMCHAKRHSZFCFBOTMVOFPJJLGDPDUTLKADIGUJ");

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
    msg.setTimeStamp(0.276960527882);
    msg.setSource(51034U);
    msg.setSourceEntity(52U);
    msg.setDestination(65055U);
    msg.setDestinationEntity(196U);
    msg.severity = 122U;
    msg.text.assign("OMZCIJHEBLXIDEAVVTEBSUKYZTPYQJMJQAALFLKAHCPNVSQKIKGWNGPUMEJEVECPMMUVZGBDDHSSQBZSNOSXFZBFITGIDRRFUKWHLAYSLKWCZWFHJDVU");

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
    msg.setTimeStamp(0.91980996859);
    msg.setSource(35964U);
    msg.setSourceEntity(165U);
    msg.setDestination(63581U);
    msg.setDestinationEntity(32U);
    msg.severity = 245U;
    msg.text.assign("BJHGOUEFSNZDYYCKBRXJNWVKULFYEATXJAI");

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
    msg.setTimeStamp(0.712137532326);
    msg.setSource(20019U);
    msg.setSourceEntity(63U);
    msg.setDestination(46388U);
    msg.setDestinationEntity(162U);
    msg.channel = 14;
    msg.value = 1497424297;
    msg.gain = 211U;

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
    msg.setTimeStamp(0.860503976925);
    msg.setSource(11610U);
    msg.setSourceEntity(147U);
    msg.setDestination(25443U);
    msg.setDestinationEntity(160U);
    msg.channel = -121;
    msg.value = -867858614;
    msg.gain = 127U;

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
    msg.setTimeStamp(0.205010623265);
    msg.setSource(8907U);
    msg.setSourceEntity(227U);
    msg.setDestination(8571U);
    msg.setDestinationEntity(248U);
    msg.channel = -93;
    msg.value = -814288035;
    msg.gain = 77U;

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
    msg.setTimeStamp(0.362591806321);
    msg.setSource(64903U);
    msg.setSourceEntity(205U);
    msg.setDestination(58889U);
    msg.setDestinationEntity(146U);
    msg.ch01 = 0.343105652329;
    msg.ch02 = 0.380474410803;
    msg.ch03 = 0.811984870294;
    msg.ch04 = 0.919672513663;
    msg.ch05 = 0.692142212743;
    msg.ch06 = 0.849438959276;
    msg.ch07 = 0.327746038585;
    msg.ch08 = 0.329716224312;
    msg.ch09 = 0.37045804336;
    msg.ch10 = 0.31005865061;
    msg.ch11 = 0.682213213912;
    msg.ch12 = 0.194844486904;
    msg.ch13 = 0.861870051967;
    msg.ch14 = 0.432926268119;
    msg.ch15 = 0.492653110647;
    msg.ch16 = 0.666606756102;

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
    msg.setTimeStamp(0.723552613099);
    msg.setSource(57592U);
    msg.setSourceEntity(93U);
    msg.setDestination(20215U);
    msg.setDestinationEntity(164U);
    msg.ch01 = 0.25866617736;
    msg.ch02 = 0.223889554623;
    msg.ch03 = 0.586964967384;
    msg.ch04 = 0.98920796167;
    msg.ch05 = 0.315054437272;
    msg.ch06 = 0.732935509537;
    msg.ch07 = 0.681976270629;
    msg.ch08 = 0.716445401766;
    msg.ch09 = 0.962863067573;
    msg.ch10 = 0.456582867226;
    msg.ch11 = 0.554817181848;
    msg.ch12 = 0.295701993164;
    msg.ch13 = 0.481829118109;
    msg.ch14 = 0.103299062685;
    msg.ch15 = 0.887163141994;
    msg.ch16 = 0.239455693258;

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
    msg.setTimeStamp(0.767237049225);
    msg.setSource(29188U);
    msg.setSourceEntity(174U);
    msg.setDestination(4302U);
    msg.setDestinationEntity(107U);
    msg.ch01 = 0.0545945847816;
    msg.ch02 = 0.701427021515;
    msg.ch03 = 0.143360436387;
    msg.ch04 = 0.0969514635329;
    msg.ch05 = 0.78128766015;
    msg.ch06 = 0.637715414985;
    msg.ch07 = 0.341007080985;
    msg.ch08 = 0.322691111321;
    msg.ch09 = 0.684648847512;
    msg.ch10 = 0.973356572495;
    msg.ch11 = 0.890303640131;
    msg.ch12 = 0.908265625088;
    msg.ch13 = 0.11579689373;
    msg.ch14 = 0.676213859931;
    msg.ch15 = 0.66612669215;
    msg.ch16 = 0.653432955435;

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
    msg.setTimeStamp(0.707720446996);
    msg.setSource(3391U);
    msg.setSourceEntity(253U);
    msg.setDestination(15832U);
    msg.setDestinationEntity(150U);
    msg.time = 0.900525509387;
    msg.ang = 0.319754690743;

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
    msg.setTimeStamp(0.0182145588907);
    msg.setSource(9585U);
    msg.setSourceEntity(32U);
    msg.setDestination(20423U);
    msg.setDestinationEntity(238U);
    msg.time = 0.712827078848;
    msg.ang = 0.401786007763;

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
    msg.setTimeStamp(0.1271050462);
    msg.setSource(43110U);
    msg.setSourceEntity(64U);
    msg.setDestination(6072U);
    msg.setDestinationEntity(7U);
    msg.time = 0.0302529355749;
    msg.ang = 0.371632484797;

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
    msg.setTimeStamp(0.750819860749);
    msg.setSource(39371U);
    msg.setSourceEntity(184U);
    msg.setDestination(20877U);
    msg.setDestinationEntity(195U);
    msg.value = 0.733019357957;

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
    msg.setTimeStamp(0.6076476736);
    msg.setSource(40754U);
    msg.setSourceEntity(76U);
    msg.setDestination(43140U);
    msg.setDestinationEntity(185U);
    msg.value = 0.0202024977557;

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
    msg.setTimeStamp(0.611264262702);
    msg.setSource(32562U);
    msg.setSourceEntity(165U);
    msg.setDestination(55571U);
    msg.setDestinationEntity(13U);
    msg.value = 0.595777743097;

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
    msg.setTimeStamp(0.874652319394);
    msg.setSource(37643U);
    msg.setSourceEntity(130U);
    msg.setDestination(34165U);
    msg.setDestinationEntity(222U);
    msg.value = 0.0217621014421;

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
    msg.setTimeStamp(0.289114742152);
    msg.setSource(56857U);
    msg.setSourceEntity(77U);
    msg.setDestination(58575U);
    msg.setDestinationEntity(41U);
    msg.value = 0.736803680532;

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
    msg.setTimeStamp(0.467157245808);
    msg.setSource(8024U);
    msg.setSourceEntity(137U);
    msg.setDestination(40900U);
    msg.setDestinationEntity(219U);
    msg.value = 0.808150445847;

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
    msg.setTimeStamp(0.0265934690861);
    msg.setSource(30282U);
    msg.setSourceEntity(157U);
    msg.setDestination(41146U);
    msg.setDestinationEntity(118U);
    msg.value = 0.0698249195233;

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
    msg.setTimeStamp(0.890104078053);
    msg.setSource(10297U);
    msg.setSourceEntity(254U);
    msg.setDestination(53470U);
    msg.setDestinationEntity(131U);
    msg.value = 0.154811402078;

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
    msg.setTimeStamp(0.432739718729);
    msg.setSource(40302U);
    msg.setSourceEntity(110U);
    msg.setDestination(63255U);
    msg.setDestinationEntity(201U);
    msg.value = 0.488881594653;

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
    msg.setTimeStamp(0.370481288111);
    msg.setSource(50808U);
    msg.setSourceEntity(192U);
    msg.setDestination(30670U);
    msg.setDestinationEntity(33U);
    msg.l2 = -66;
    msg.l3 = -103;
    msg.iridium = 38;
    msg.modem = 121;
    msg.pumps = -57;
    msg.vhf = -122;

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
    msg.setTimeStamp(0.177245289239);
    msg.setSource(62165U);
    msg.setSourceEntity(232U);
    msg.setDestination(62498U);
    msg.setDestinationEntity(38U);
    msg.l2 = -62;
    msg.l3 = 26;
    msg.iridium = 98;
    msg.modem = -50;
    msg.pumps = -25;
    msg.vhf = 124;

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
    msg.setTimeStamp(0.623514217489);
    msg.setSource(54814U);
    msg.setSourceEntity(174U);
    msg.setDestination(4635U);
    msg.setDestinationEntity(16U);
    msg.l2 = -35;
    msg.l3 = -20;
    msg.iridium = -19;
    msg.modem = 80;
    msg.pumps = -26;
    msg.vhf = -10;

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
    msg.setTimeStamp(0.708985969769);
    msg.setSource(5153U);
    msg.setSourceEntity(100U);
    msg.setDestination(27545U);
    msg.setDestinationEntity(170U);
    msg.angle = 0.0968088648382;
    msg.reference.assign("SGHDVROFANXVXUKDQZXHLKLHDTIYFNXOPQCGZJJVMIYNZQIEDVTHOAYQAVOPYKCAAODERWRSXWTBUMBGPGWYKRBDZSZOSKGSNNYALCOHPALUFREAFOUMJLUWZNPBYIMWY");
    msg.speed = 0.160793415058;

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
    msg.setTimeStamp(0.14896220106);
    msg.setSource(55408U);
    msg.setSourceEntity(140U);
    msg.setDestination(8751U);
    msg.setDestinationEntity(194U);
    msg.angle = 0.627776639182;
    msg.reference.assign("DEPZIKJABRDIEHLCVYGNVGGCECQXLQWAHLNLRVDFEQYHIPMZOROSSPCYOQQNF");
    msg.speed = 0.983598716193;

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
    msg.setTimeStamp(0.337036239054);
    msg.setSource(58274U);
    msg.setSourceEntity(157U);
    msg.setDestination(1868U);
    msg.setDestinationEntity(78U);
    msg.angle = 0.0917590524681;
    msg.reference.assign("AUXDKWIAIWVQMXQBIAOHNVHESUECCGYTGQRBWMKGIGGLCXOBFOCSRIUYNJHBMHQCETYDQTSXRCCERBOXBMZ");
    msg.speed = 0.261929612071;

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
    msg.setTimeStamp(0.601561444201);
    msg.setSource(4641U);
    msg.setSourceEntity(32U);
    msg.setDestination(62566U);
    msg.setDestinationEntity(6U);
    msg.angle = 0.101305744321;
    msg.direction.assign("HTIGFHXKAKXZKUJTEYIEGNOPPZJWRXSJTVNIJYPWGLDAVWLSQEALPHTVZISUKCFLBJHLWXSLPNYOYEHLJJZIPCIXFMNWCBDEAYARXRDQCGAWRZNHAREVMWQZUIZTHROYJUMQKMMFSVWQHRFOKXEFQBTNNSGV");
    msg.speed = 0.0845902338378;

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
    msg.setTimeStamp(0.824528264101);
    msg.setSource(14135U);
    msg.setSourceEntity(203U);
    msg.setDestination(23351U);
    msg.setDestinationEntity(39U);
    msg.angle = 0.170078111058;
    msg.direction.assign("KCJPUNMQVVNLYIDQYTSECMWYTEUIWHRBOLZHUQHKWQ");
    msg.speed = 0.765905732371;

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
    msg.setTimeStamp(0.617388315799);
    msg.setSource(65176U);
    msg.setSourceEntity(138U);
    msg.setDestination(37943U);
    msg.setDestinationEntity(72U);
    msg.angle = 0.679229829855;
    msg.direction.assign("OWXMJWIYVUKRSQXRRKGGEZPYEJHAZDPDPWUXMFLPBKNTSKXCNCPEKNIBJRFXZPGWFSIHYIAUYZYKFYFKWOXEPGABAUHHLSCQVYCZNEQLIMZBATLTHJQPJQBADPRGARKVDFHOQIBORWSLCRHEEFOXJJ");
    msg.speed = 0.951160089313;

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

  return test.getReturnValue();
}

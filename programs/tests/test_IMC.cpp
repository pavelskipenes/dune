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
    msg.setTimeStamp(0.239855181166);
    msg.setSource(43371U);
    msg.setSourceEntity(245U);
    msg.setDestination(11459U);
    msg.setDestinationEntity(33U);
    msg.state = 62U;
    msg.flags = 121U;
    msg.description.assign("KIPOOAGGZZRTHZOUJIGBQSIGKXLWSTAKMOYIRTFOXPCWSZUFWNKLVFURWOJXPNFVMCFDUSWVDNCCFTNNTBSJLEIPTGSHZMYYKQNXLCLQITHDBYVKBWCVHJXWRDBSJKYHGSPKMYMBMRAOHUQEQNJJXEXFOZILMZIEZXT");

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
    msg.setTimeStamp(0.568798899725);
    msg.setSource(56664U);
    msg.setSourceEntity(163U);
    msg.setDestination(13244U);
    msg.setDestinationEntity(234U);
    msg.state = 151U;
    msg.flags = 106U;
    msg.description.assign("PVCUDDMBBETUCQAQQKWKBWSMZPVDSPFLADRWLYMVSWAVLTZWGOGTRXYSXAUXEHFQGAPMQCUEDIFOVVTPTHZPFWYLSQF");

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
    msg.setTimeStamp(0.793765717522);
    msg.setSource(63151U);
    msg.setSourceEntity(242U);
    msg.setDestination(11471U);
    msg.setDestinationEntity(152U);
    msg.state = 37U;
    msg.flags = 40U;
    msg.description.assign("HDXRWPPFCVHNBQOICSWCWNIZDRIPJIULIKBOXAROYJFSYMAMMXTVSDEUTBGYUTSKZQJCXQNMJWC");

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
    msg.setTimeStamp(0.471163213549);
    msg.setSource(6625U);
    msg.setSourceEntity(123U);
    msg.setDestination(51042U);
    msg.setDestinationEntity(170U);

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
    msg.setTimeStamp(0.309846256748);
    msg.setSource(499U);
    msg.setSourceEntity(49U);
    msg.setDestination(39603U);
    msg.setDestinationEntity(5U);

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
    msg.setTimeStamp(0.71957780204);
    msg.setSource(64124U);
    msg.setSourceEntity(12U);
    msg.setDestination(25377U);
    msg.setDestinationEntity(16U);

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
    msg.setTimeStamp(0.320453865857);
    msg.setSource(8296U);
    msg.setSourceEntity(17U);
    msg.setDestination(64172U);
    msg.setDestinationEntity(179U);
    msg.id = 243U;
    msg.label.assign("DKWABWQFDNQGOQVPYWHVXJEDAJBBXQRXSBTEVHTMGTZXVLICGALFUPFEBWMGJWYCIYPXZTXJMHTRP");
    msg.component.assign("NLKAEFLWUAPTWSOIYFCRGMWOPJZLYBZVIIGKUCNPDBCKDXVEOSIQBGKYFFDTCZFXNAOQNXLOXPIZUMTDAUVAKROXRYVLQWZEL");
    msg.act_time = 19690U;
    msg.deact_time = 32134U;

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
    msg.setTimeStamp(0.75505462669);
    msg.setSource(32342U);
    msg.setSourceEntity(214U);
    msg.setDestination(5488U);
    msg.setDestinationEntity(19U);
    msg.id = 245U;
    msg.label.assign("QUFOFGKACQPYNSFZIBIVZTDLNBPUTCXBFVEEPGNRLWAMGBFHGTEZOTCLTAWWLSGQUHLVSJWVZIOIEHBHVSFFDVKYUCDOQJSSCARJWNROYCYMMWDXZHPQNAQTPICUFVDSBZANOEUJLDHXKKJYOOWFOWMNFPKYQEDRRVJPGRRZCLZUGIXCSQMBMXNMUYUBXRHGPQLXRRHTMJJDEEKNSKYIMIXETA");
    msg.component.assign("TPGPLZZNBISADCPEMOTDLEVXCUJXMLCUKYZTDTLCNWBASBJJHNSLXJENLHKOHSZBOGFTEPKUGKVBDPRBMNZYWEFNEVFKFGQQTSRILAGQRWHQHPEJOHVWRARAJPSHUOLFJLUACKXBQDRWUZAQPRVMOSRIWVEVGUYNMYDHJZNTIQKQBQDIOERTXVJCSZKPXXNYAXGYMXDGIBASBQMDWUYFODZXPKNKJICVCOHUCCOGHLFGSUM");
    msg.act_time = 52476U;
    msg.deact_time = 54777U;

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
    msg.setTimeStamp(0.684189934624);
    msg.setSource(47337U);
    msg.setSourceEntity(88U);
    msg.setDestination(65170U);
    msg.setDestinationEntity(20U);
    msg.id = 50U;
    msg.label.assign("DCYDHZGUPHOCMJQLGNKVHCSKTGYKKEFBUOHCBLWPKHWMUXLZEOPODXS");
    msg.component.assign("YGTCFSKBPYQNFAQUJVJKLNQZPQSKZJKFHRWHSELCXLEFUIERTIOXNBAVRGCGMYOOCFUJSYQXAKSEACIXDTHCWJVYLEOOWRJYNVIZSYTDPZRHYATMDZHNUOWWROPJZINEUSQZCXTVTSZODIHEGAOYSHIXBKXGIFSNIPVLHMPZMPCA");
    msg.act_time = 42554U;
    msg.deact_time = 45731U;

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
    msg.setTimeStamp(0.158526426318);
    msg.setSource(8033U);
    msg.setSourceEntity(242U);
    msg.setDestination(48458U);
    msg.setDestinationEntity(124U);
    msg.id = 225U;

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
    msg.setTimeStamp(0.402226756244);
    msg.setSource(48412U);
    msg.setSourceEntity(63U);
    msg.setDestination(5675U);
    msg.setDestinationEntity(102U);
    msg.id = 106U;

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
    msg.setTimeStamp(0.905279743988);
    msg.setSource(23761U);
    msg.setSourceEntity(65U);
    msg.setDestination(56546U);
    msg.setDestinationEntity(12U);
    msg.id = 160U;

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
    msg.setTimeStamp(0.609437698706);
    msg.setSource(50632U);
    msg.setSourceEntity(6U);
    msg.setDestination(54370U);
    msg.setDestinationEntity(234U);
    msg.op = 84U;
    msg.list.assign("JWRUNMEEQHILUYSIIDXWVVGYWTPVGFDPOKSDGQCZBMJAUTKSLJHCCEAWLSDZEPHONAAKKSOSPFOWRBCKGIDJXSMVQZBFPVLUHEJUXMHPTEGJNSWNDYDGLPG");

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
    msg.setTimeStamp(0.322038310331);
    msg.setSource(15574U);
    msg.setSourceEntity(115U);
    msg.setDestination(37198U);
    msg.setDestinationEntity(233U);
    msg.op = 74U;
    msg.list.assign("FOEJQASWBQWYHTFDFVHLGLIYUSYOQJENVALMKUOZKHNIGBDJUCNRMSCHJOVZLFEEMSBVZQANOOIPGDXHJIAHMLTVKYTJPOAXEHATLBFKZVYCJWKRTFRIWAQPWCXQUWDPQNPLMXRYTXTGISKDMCVKPPFSGRAVXGTDFWDVKJUWDENCRMEZPOULXXZNKCWDUMR");

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
    msg.setTimeStamp(0.465081832221);
    msg.setSource(20644U);
    msg.setSourceEntity(182U);
    msg.setDestination(26137U);
    msg.setDestinationEntity(67U);
    msg.op = 143U;
    msg.list.assign("BMBQIDWUPWPLRHSLYCUXQAAMFFTCCYPDGXOZTRNOYJDOHGLAWNYGKDFAEOGSRASNYIYFQIHLEDQRXMXWSCEMXPPUGSKOSKZJHAPJOIBJTYNSTEDLTQUSADBRQGKXNOCIBCVMVAUZHZNFMCGVRMRPN");

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
    msg.setTimeStamp(0.431218683394);
    msg.setSource(26064U);
    msg.setSourceEntity(95U);
    msg.setDestination(44170U);
    msg.setDestinationEntity(174U);
    msg.value = 146U;

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
    msg.setTimeStamp(0.647847610453);
    msg.setSource(62604U);
    msg.setSourceEntity(163U);
    msg.setDestination(24526U);
    msg.setDestinationEntity(138U);
    msg.value = 182U;

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
    msg.setTimeStamp(0.548924474737);
    msg.setSource(49254U);
    msg.setSourceEntity(134U);
    msg.setDestination(8367U);
    msg.setDestinationEntity(160U);
    msg.value = 134U;

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
    msg.setTimeStamp(0.92718222974);
    msg.setSource(50866U);
    msg.setSourceEntity(212U);
    msg.setDestination(37062U);
    msg.setDestinationEntity(46U);
    msg.consumer.assign("KFLKRNSAZOWNXPCXLQIOOUPXLKAMKGURHOXKWESZWGQANFLMCFIZRHTRBHDGLQYOCMWBSFGCXHTTKUYWOEYLEIELWEPMRXQEBDHUMSJQQTVGCVNI");
    msg.message_id = 16454U;

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
    msg.setTimeStamp(0.535169754032);
    msg.setSource(29680U);
    msg.setSourceEntity(99U);
    msg.setDestination(7238U);
    msg.setDestinationEntity(2U);
    msg.consumer.assign("OGEBEBJNZUOBZTZHMLRSODIIONAHXKPPBXTHQQQEHZSNTF");
    msg.message_id = 53169U;

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
    msg.setTimeStamp(0.710198046135);
    msg.setSource(12831U);
    msg.setSourceEntity(82U);
    msg.setDestination(8065U);
    msg.setDestinationEntity(129U);
    msg.consumer.assign("ZPCISTMWNKONRZUGT");
    msg.message_id = 27821U;

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
    msg.setTimeStamp(0.971380565707);
    msg.setSource(33970U);
    msg.setSourceEntity(203U);
    msg.setDestination(63992U);
    msg.setDestinationEntity(105U);
    msg.type = 16U;

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
    msg.setTimeStamp(0.641844694182);
    msg.setSource(23734U);
    msg.setSourceEntity(169U);
    msg.setDestination(64090U);
    msg.setDestinationEntity(134U);
    msg.type = 103U;

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
    msg.setTimeStamp(0.364297035441);
    msg.setSource(17119U);
    msg.setSourceEntity(9U);
    msg.setDestination(61584U);
    msg.setDestinationEntity(207U);
    msg.type = 11U;

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
    msg.setTimeStamp(0.971830509784);
    msg.setSource(59407U);
    msg.setSourceEntity(201U);
    msg.setDestination(20795U);
    msg.setDestinationEntity(220U);
    msg.op = 88U;

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
    msg.setTimeStamp(0.746414356309);
    msg.setSource(25058U);
    msg.setSourceEntity(232U);
    msg.setDestination(7291U);
    msg.setDestinationEntity(48U);
    msg.op = 67U;

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
    msg.setTimeStamp(0.0626153007728);
    msg.setSource(28367U);
    msg.setSourceEntity(242U);
    msg.setDestination(57830U);
    msg.setDestinationEntity(104U);
    msg.op = 60U;

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
    msg.setTimeStamp(0.985137538029);
    msg.setSource(15000U);
    msg.setSourceEntity(250U);
    msg.setDestination(57641U);
    msg.setDestinationEntity(49U);
    msg.total_steps = 65U;
    msg.step_number = 120U;
    msg.step.assign("RNXHWPBJQUNLHEMMRALGTHFBFUTKFPYABSXXPYWBNCINKROYIANTWZQGJQZCXFQYCRJGXYVOJMQWPCLMTBWORZHUKQZDSEJALVHYUMVCZOCONJWDYDFMECCTDOSWGXZKLQOKHOZBTLUVMXX");
    msg.flags = 63U;

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
    msg.setTimeStamp(0.0344065033239);
    msg.setSource(37284U);
    msg.setSourceEntity(114U);
    msg.setDestination(55132U);
    msg.setDestinationEntity(222U);
    msg.total_steps = 241U;
    msg.step_number = 96U;
    msg.step.assign("RWAKLDJSBTVRMULMCKCPYGESXTIQNYNERPKEHKGBEPOTURGDFAXOTBHINIDZCQZLJASZQYTIOKHTGAFGMYTMJXDENKDNXDNCPXBLVOLJAFNJVOJQJKUYMHWWMIGFFNBUWWOVCUWMDAHZIVYRGIZVMDTUXAURHRZENQSTQISDDECW");
    msg.flags = 223U;

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
    msg.setTimeStamp(0.116993769534);
    msg.setSource(4518U);
    msg.setSourceEntity(144U);
    msg.setDestination(52290U);
    msg.setDestinationEntity(107U);
    msg.total_steps = 92U;
    msg.step_number = 157U;
    msg.step.assign("YTVSHARUMOESMDEMOVWEGIKCCLHJMNIHJSXFXBDNZIZSAHVRJMLIDMIVEELQONTQJLKLCXOGEKTXSBUXWCMROBKTFKGJRCTPUMLGJGWUBJEKDZOFPKMGGLYPVFFSAFUTBPTIPFNZZGUDTPCVORUWQYQAHWQXRPZEBQYSTLMDKIBYHJYDUWDNTNUH");
    msg.flags = 78U;

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
    msg.setTimeStamp(0.867306042635);
    msg.setSource(5818U);
    msg.setSourceEntity(216U);
    msg.setDestination(53272U);
    msg.setDestinationEntity(70U);
    msg.state = 144U;
    msg.error.assign("RKDCTCFCOBFTVEVIOIQFSJPVLMRRJFQRAARBVXGPLXSRYYNISPGCROQHYWHBXHDZQZYAZHBZFALDPGMJJXPETUBIWXKVKHAWKDNOLSSDFUALLWUOWMRGOTDPPFBMQJUZJSNMUGZREKYGCZPTDWLGJNUNVKZWQKLGNJMSHLFDIZSRXXEFFBGEQQZYIVPQGHONTEPXT");

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
    msg.setTimeStamp(0.505150589792);
    msg.setSource(41037U);
    msg.setSourceEntity(219U);
    msg.setDestination(9888U);
    msg.setDestinationEntity(173U);
    msg.state = 110U;
    msg.error.assign("WXGONPJLFWBYNODYBAOALCTMHQTKUEFYTABCFIGJVYVOKAUUTKSEGMSIMUTRTJZKVITCPDIFRMBCEWLGOHMWXESXZJVBTWUIZRPRBHGUNHYMMQNLWWRWIGJJFGACZXPANOFBMMIWQNHXSIEWNPVPAHVKUADX");

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
    msg.setTimeStamp(0.591597476939);
    msg.setSource(26714U);
    msg.setSourceEntity(221U);
    msg.setDestination(51372U);
    msg.setDestinationEntity(21U);
    msg.state = 175U;
    msg.error.assign("GSUCNFWGBFYGPOLMVABJRURQHZFXPPMWWDVFYRMHCGOUWUQFGMHDHEOAXSNZEKYZUSWUISQFYUMALYTXPEPRCVQZBQYJDJABESYVRWFXXBTWVTKIOSITEEPAJCOLMECMQNFLDEDDYQDVFOLDXILQIGKDIIFOHHTIVMKRTJJAZYGBAULOZNZKKXBTAC");

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
    msg.setTimeStamp(0.785694858208);
    msg.setSource(940U);
    msg.setSourceEntity(149U);
    msg.setDestination(62698U);
    msg.setDestinationEntity(55U);

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
    msg.setTimeStamp(0.881889394556);
    msg.setSource(59008U);
    msg.setSourceEntity(82U);
    msg.setDestination(6822U);
    msg.setDestinationEntity(93U);

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
    msg.setTimeStamp(0.424874543228);
    msg.setSource(59558U);
    msg.setSourceEntity(205U);
    msg.setDestination(48658U);
    msg.setDestinationEntity(217U);

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
    msg.setTimeStamp(0.972420429283);
    msg.setSource(26861U);
    msg.setSourceEntity(184U);
    msg.setDestination(51260U);
    msg.setDestinationEntity(228U);
    msg.op = 111U;
    msg.speed_min = 0.171900733417;
    msg.speed_max = 0.529292885024;
    msg.long_accel = 0.0261486818622;
    msg.alt_max_msl = 0.648219125249;
    msg.dive_fraction_max = 0.445815342362;
    msg.climb_fraction_max = 0.830243716794;
    msg.bank_max = 0.344290221644;
    msg.p_max = 0.525802540938;
    msg.pitch_min = 0.598895415425;
    msg.pitch_max = 0.52413478269;
    msg.q_max = 0.828553740406;
    msg.g_min = 0.436839440857;
    msg.g_max = 0.571996963853;
    msg.g_lat_max = 0.219961706325;
    msg.rpm_min = 0.299384075512;
    msg.rpm_max = 0.224315816308;
    msg.rpm_rate_max = 0.148863167795;

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
    msg.setTimeStamp(0.313915215751);
    msg.setSource(52269U);
    msg.setSourceEntity(102U);
    msg.setDestination(9908U);
    msg.setDestinationEntity(222U);
    msg.op = 139U;
    msg.speed_min = 0.557440369983;
    msg.speed_max = 0.415617044129;
    msg.long_accel = 0.925584323453;
    msg.alt_max_msl = 0.693540380705;
    msg.dive_fraction_max = 0.630225522001;
    msg.climb_fraction_max = 0.980484748734;
    msg.bank_max = 0.26302559243;
    msg.p_max = 0.126127539803;
    msg.pitch_min = 0.539149937921;
    msg.pitch_max = 0.847042543778;
    msg.q_max = 0.0606607413533;
    msg.g_min = 0.321883109984;
    msg.g_max = 0.835263977059;
    msg.g_lat_max = 0.983252579596;
    msg.rpm_min = 0.543098658283;
    msg.rpm_max = 0.318555592386;
    msg.rpm_rate_max = 0.105587402161;

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
    msg.setTimeStamp(0.853638001517);
    msg.setSource(26966U);
    msg.setSourceEntity(64U);
    msg.setDestination(58145U);
    msg.setDestinationEntity(28U);
    msg.op = 89U;
    msg.speed_min = 0.839097471375;
    msg.speed_max = 0.919814858178;
    msg.long_accel = 0.426536344434;
    msg.alt_max_msl = 0.452679387483;
    msg.dive_fraction_max = 0.218013889342;
    msg.climb_fraction_max = 0.243405257438;
    msg.bank_max = 0.956813100053;
    msg.p_max = 0.447431503465;
    msg.pitch_min = 0.634196277873;
    msg.pitch_max = 0.942990261165;
    msg.q_max = 0.385037258698;
    msg.g_min = 0.6140383181;
    msg.g_max = 0.77160398236;
    msg.g_lat_max = 0.7207218811;
    msg.rpm_min = 0.0958091576767;
    msg.rpm_max = 0.543161722038;
    msg.rpm_rate_max = 0.304055588928;

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
    msg.setTimeStamp(0.489908217015);
    msg.setSource(28777U);
    msg.setSourceEntity(12U);
    msg.setDestination(15095U);
    msg.setDestinationEntity(23U);
    IMC::AnnounceService tmp_msg_0;
    tmp_msg_0.service.assign("HYJKHVFKFIMZEUJZYMOSQRGWWUBVDVIAYGCPNYHJNBWQMBRQELLTUFTAHNKLDIFQKXGFBCUOIBYPSD");
    tmp_msg_0.service_type = 80U;
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
    msg.setTimeStamp(0.426309768941);
    msg.setSource(60156U);
    msg.setSourceEntity(248U);
    msg.setDestination(43998U);
    msg.setDestinationEntity(56U);
    IMC::Magnetometer tmp_msg_0;
    tmp_msg_0.timeout = 58894U;
    tmp_msg_0.lat = 0.713873805921;
    tmp_msg_0.lon = 0.134618643344;
    tmp_msg_0.z = 0.605819177622;
    tmp_msg_0.z_units = 0U;
    tmp_msg_0.speed = 0.370303666344;
    tmp_msg_0.speed_units = 223U;
    tmp_msg_0.bearing = 0.665360730449;
    tmp_msg_0.width = 0.332973409624;
    tmp_msg_0.direction = 182U;
    tmp_msg_0.custom.assign("HSMCWHLZSLYTDFIIKSUGLLMCETJKXQSQAWFZYAYINOSMYPOUQQOFYFNIQHUEZEGQRQZNAVFZBGVTMTUUTTZNXNCJHBKJIQWWBRNTHGNXWZJSEQJPTVLPUWHYFWDPJGWRWAPUVXVWYKRCCBZ");
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
    msg.setTimeStamp(0.982006326021);
    msg.setSource(43562U);
    msg.setSourceEntity(218U);
    msg.setDestination(42297U);
    msg.setDestinationEntity(86U);

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
    msg.setTimeStamp(0.345380946164);
    msg.setSource(58853U);
    msg.setSourceEntity(51U);
    msg.setDestination(30978U);
    msg.setDestinationEntity(197U);
    msg.lat = 0.193208607334;
    msg.lon = 0.742798095542;
    msg.height = 0.877932644995;
    msg.x = 0.913038894291;
    msg.y = 0.948071834408;
    msg.z = 0.393324967645;
    msg.phi = 0.36119178906;
    msg.theta = 0.962055251204;
    msg.psi = 0.973093183632;
    msg.u = 0.00428355657573;
    msg.v = 0.0204100850472;
    msg.w = 0.906653464076;
    msg.p = 0.117660300534;
    msg.q = 0.481987138257;
    msg.r = 0.0828728835217;
    msg.svx = 0.106124583925;
    msg.svy = 0.244192298273;
    msg.svz = 0.903504708118;

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
    msg.setTimeStamp(0.824206657334);
    msg.setSource(11681U);
    msg.setSourceEntity(217U);
    msg.setDestination(33280U);
    msg.setDestinationEntity(229U);
    msg.lat = 0.504903142231;
    msg.lon = 0.371690020539;
    msg.height = 0.499862811233;
    msg.x = 0.371865479463;
    msg.y = 0.302945346049;
    msg.z = 0.943594556464;
    msg.phi = 0.101138143679;
    msg.theta = 0.207888166933;
    msg.psi = 0.256100109129;
    msg.u = 0.526735753968;
    msg.v = 0.460731070642;
    msg.w = 0.353057325978;
    msg.p = 0.744797761089;
    msg.q = 0.412353950722;
    msg.r = 0.646904881881;
    msg.svx = 0.193906882971;
    msg.svy = 0.923289579406;
    msg.svz = 0.662949590457;

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
    msg.setTimeStamp(0.856082003922);
    msg.setSource(8417U);
    msg.setSourceEntity(146U);
    msg.setDestination(20491U);
    msg.setDestinationEntity(136U);
    msg.lat = 0.85835187778;
    msg.lon = 0.70087472846;
    msg.height = 0.986443289336;
    msg.x = 0.595300752362;
    msg.y = 0.52233237879;
    msg.z = 0.162070538138;
    msg.phi = 0.553654327738;
    msg.theta = 0.496900867341;
    msg.psi = 0.410493686144;
    msg.u = 0.356220220928;
    msg.v = 0.941355981619;
    msg.w = 0.00373683303012;
    msg.p = 0.0737679486062;
    msg.q = 0.0286368354494;
    msg.r = 0.148905778231;
    msg.svx = 0.888123788107;
    msg.svy = 0.999686066704;
    msg.svz = 0.824524057206;

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
    msg.setTimeStamp(0.228848945117);
    msg.setSource(10935U);
    msg.setSourceEntity(212U);
    msg.setDestination(47434U);
    msg.setDestinationEntity(20U);
    msg.op = 6U;
    msg.entities.assign("FYPVXDCDKNJAKSBBKUZ");

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
    msg.setTimeStamp(0.497660840072);
    msg.setSource(42145U);
    msg.setSourceEntity(81U);
    msg.setDestination(39108U);
    msg.setDestinationEntity(108U);
    msg.op = 196U;
    msg.entities.assign("DSMUORSIQKPPWTYRNVBXU");

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
    msg.setTimeStamp(0.307755151523);
    msg.setSource(21256U);
    msg.setSourceEntity(16U);
    msg.setDestination(50705U);
    msg.setDestinationEntity(65U);
    msg.op = 187U;
    msg.entities.assign("HVYWXPODFGVDXVQRAYVZKKPJBMCCSJCOZKNBMXSHPHNTYHTRILGAYOSXEUPSWDRLSIMQHLVXOVBERYUMUECAJUTJMFMKETLKVQLBHOCDHMKCECWSICQCJMGFJPPNFGRVRADIEQZZDNZGPWSNMODIZVOLYLTQVWAZXBQDFEJNFTZWSGJSEQQFOFHAUIYIWTNDBLALKXQELZ");

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
    msg.setTimeStamp(0.378396007374);
    msg.setSource(43190U);
    msg.setSourceEntity(18U);
    msg.setDestination(16381U);
    msg.setDestinationEntity(2U);
    msg.type = 162U;
    msg.speed = 61586U;
    const char tmp_msg_0[] = {3, -92, 39, -29, 19, -39, -12, -49, 59, 3, 115, 122, -112, 14, -34, 5, 106, 7, 105, 23, 54, -76, 89, -51, 121, 20, 44, -70, 6, 50, 13, 70, 117, -75, -15, -101, -77, -119, 32, 53, -72, -74, 91, -41, -6, -119, 46, -20, 57, -115, -29, 55, -11, -48, 7, 0, -33, 11, 121, 14, -123, 55, 96, 15, -57, -111, -68, 75, -127, -122, 73, 45, 81, 71, -80, -14, 0, 91, 105, -65, 126, 30, -20, -1, -56, -12, -41, 67, 102, 113, 36, 79, 89, -25, -107, 44, -27, 88, 33, -48, 0, -29, -3, 63, -95, -22, 70, 6, -32, 22, 82, 83, 97, 106, -66, 18, -40, 43, -105, -75, -50, 122, 78, 63, -52, -13, 96, -51, -38, 38, 64, -125, -22, 113, 91, -59, 32, 56, 71, -4, -46, -121, 99, 60, -3, -92, -120, 15, 57, 42, -17, 5, 82, -89, -65, 117, -79, 46, 27, -80, -102, -32, -11, -65, 98, -7, 20, 28, -63, -76, 107, -22, -34, 55, -93, 31, 115, -86, 38, 31, 59, 62, -126, -7, 75, -116, 61, -123, -121, 13, -37, -45, -89, 120, 44, 26, -90, 13, 122, -111, -40, 71, 70, 54, 84, -11, 10, -36, -107, -46, -14, 63, 9, 40, 9, -52, -23, -115, 14, -10, -75, -2, 99, -74, -87, -90, -52, -18, 113, -59, 62, 77, 74, 103, 82, 62, -77, 71, 18, 125, 119, -85, -29, 17, 60, -100};
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
    msg.setTimeStamp(0.0778216633946);
    msg.setSource(11915U);
    msg.setSourceEntity(0U);
    msg.setDestination(30387U);
    msg.setDestinationEntity(195U);
    msg.type = 27U;
    msg.speed = 14000U;
    const char tmp_msg_0[] = {-6, 62, -93, -24, -64, 47, 36, -24, 98, 105, -127, 12, -12, 0, -44, -56, -20, -54, 42, -12, -66, 68, 31, 115, -104, -77, 52, 57, 33, -45, 33, -80, -87, -79, 11, -40, 27, -83, -71, 2, -51, 121, 81, 104, 58, 95, 87, -91, 28, 112, 78, 60, -37, -72, 121, -8, -125, 95, -74, 63, 93, -10, 8, -52, -43, 61, -9, 25, -7, -126, 111, -116, -115, -125, -19, -20, 22, 116, 122, 82, 40, 41, 7, -114, 79, -8, 20, 113, 17, 91, -125, -44, -55, 54, 8, -98, -35, -105, -41, 77, -71, -60, -6, -126, 59, -24, 117, -79, 125, 36, 126, -43, -72, -98, -111, -75, -39, 48, -122, 74, -29, 40, 81, 31, 112, -87, -18, 30, 96, -85, 31, 31, -126, 4, -21, -128, -91, 28, -78, 69, 108, -83, -63, -102, -51, -62, -20, 69, -5, -125, -42, -121, 4, -66, -6, -31, -61, -111, -90, 15, 114, -92, -50, 40, 104, -109, -74, -73, -5, -94, -88, -122, -45, 85, -62, 4, 17, -121, 105, -55, -67, -14, -127, -86, 17, -25, -79};
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
    msg.setTimeStamp(0.500190178973);
    msg.setSource(24488U);
    msg.setSourceEntity(251U);
    msg.setDestination(30937U);
    msg.setDestinationEntity(216U);
    msg.type = 160U;
    msg.speed = 899U;
    const char tmp_msg_0[] = {34, 113, 11, -90, -28, 111, -71, -2, -105, -86, -103, -64, -40, 40, -83, -16, -110, -37, 66, -123, -28, 103, -126, -93, -58, -92, -103, -113, -119, 32, -58, -72, 38, -33, -99, 21, -68};
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
    msg.setTimeStamp(0.236276395142);
    msg.setSource(48261U);
    msg.setSourceEntity(175U);
    msg.setDestination(57482U);
    msg.setDestinationEntity(51U);
    msg.op = 66U;
    msg.tas2acc_pgain = 0.717898416451;
    msg.bank2p_pgain = 0.0945616319094;

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
    msg.setTimeStamp(0.770403357038);
    msg.setSource(30837U);
    msg.setSourceEntity(181U);
    msg.setDestination(26153U);
    msg.setDestinationEntity(85U);
    msg.op = 184U;
    msg.tas2acc_pgain = 0.380197188475;
    msg.bank2p_pgain = 0.126300854483;

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
    msg.setTimeStamp(0.0544534793857);
    msg.setSource(34487U);
    msg.setSourceEntity(136U);
    msg.setDestination(7392U);
    msg.setDestinationEntity(5U);
    msg.op = 132U;
    msg.tas2acc_pgain = 0.709137443534;
    msg.bank2p_pgain = 0.923630768641;

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
    msg.setTimeStamp(0.934337016746);
    msg.setSource(15316U);
    msg.setSourceEntity(18U);
    msg.setDestination(2479U);
    msg.setDestinationEntity(6U);
    msg.available = 3016060279U;
    msg.value = 18U;

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
    msg.setTimeStamp(0.469259388022);
    msg.setSource(63013U);
    msg.setSourceEntity(226U);
    msg.setDestination(35827U);
    msg.setDestinationEntity(82U);
    msg.available = 3376682286U;
    msg.value = 225U;

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
    msg.setTimeStamp(0.297668336744);
    msg.setSource(33632U);
    msg.setSourceEntity(148U);
    msg.setDestination(4445U);
    msg.setDestinationEntity(124U);
    msg.available = 3124575844U;
    msg.value = 210U;

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
    msg.setTimeStamp(0.911465707024);
    msg.setSource(1992U);
    msg.setSourceEntity(172U);
    msg.setDestination(42041U);
    msg.setDestinationEntity(35U);
    msg.op = 117U;
    msg.snapshot.assign("FQESWRZLDPYODGRPOSFGPZARAQADXUJQSMZJUJMLUWYOERCVLZTDOJZGGHOIKPPYSMLUKIENRXKWQELJTZSYFNBQXBCVLKBMRHKZEMIXHEZAQCKXXKLXWBVNPQDTOAPHBAMHAJXHJAXUKRVEYBQWNCOLNTHIWEIFTYNCBTNBKVVPNIJLTVNZUISGOVYDHNVSGICQEKDGFYAPDFSXVMGWWBHJTCTSFOWW");
    IMC::Land tmp_msg_0;
    tmp_msg_0.lat = 0.807467864916;
    tmp_msg_0.lon = 0.773020784246;
    tmp_msg_0.z = 0.50025246174;
    tmp_msg_0.z_units = 0U;
    tmp_msg_0.speed = 0.338073839264;
    tmp_msg_0.speed_units = 36U;
    tmp_msg_0.abort_z = 0.658732831024;
    tmp_msg_0.bearing = 0.342259937391;
    tmp_msg_0.glide_slope = 119U;
    tmp_msg_0.glide_slope_alt = 0.0574226538056;
    tmp_msg_0.custom.assign("UOFUNBWGHXRSUHDLNLRYPVEEWBIWETHAVMQIWQMKZTYGCKWTJQUHKEIYTIYTGMSKOWVXCQBYSDRPZWUCJHBLSALGINJIZMOMRNJKEAQPIFYVLOYXOWFUGZJVXFXBNRCLUJHHBCDIBVOVNCFANRDCUPOTLCMPBTSJLOGWANMZCRZVQXZSTAKDEHSLCFSEERGNUFJGKIRWDPEJTUSXKE");
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
    msg.setTimeStamp(0.332247055677);
    msg.setSource(39424U);
    msg.setSourceEntity(190U);
    msg.setDestination(13298U);
    msg.setDestinationEntity(90U);
    msg.op = 182U;
    msg.snapshot.assign("RVRKNHCZIPWDCUQURZLGKCKPEEIGLYVZAAEGMTDMIIWGCIOEWHHBRJFWLGMYKTENEVFNENXYAVUKIFGARJEDSHDOYXKABGSDKKNOMLUXVJZJFSQWNGOQSWJSYDBXQAQOLTBPRXQSUPHLQLCTXOOEOSFIYCJPMCEBPHLYT");
    IMC::EulerAnglesDelta tmp_msg_0;
    tmp_msg_0.time = 0.785266634788;
    tmp_msg_0.x = 0.0375852322668;
    tmp_msg_0.y = 0.533729607484;
    tmp_msg_0.z = 0.171294158133;
    tmp_msg_0.timestep = 0.0867397418489;
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
    msg.setTimeStamp(0.395530651774);
    msg.setSource(13650U);
    msg.setSourceEntity(32U);
    msg.setDestination(8150U);
    msg.setDestinationEntity(102U);
    msg.op = 44U;
    msg.snapshot.assign("HHFKFNLELXQPIJDHPVSWNEZNBYKNIQCDPMZVCOMTGNLEWAVUQMMFSOKBOXZERAVRRXRXFAVTHQEZBILOVILJXOXQQAGKHRPBTAECCTFQWMPSRSJZBVUUSRIFSUHJROGBMWLJLDCKVXPGEJXCLPDJKKZOOQBZCGYTTWCNGHALUYUYGIJKQJSMWKHRADZNBAYFZNNEIWSYITU");
    IMC::EntityInfo tmp_msg_0;
    tmp_msg_0.id = 82U;
    tmp_msg_0.label.assign("NSCZZZGSJIVLIMVDVKUVJPUXKXNQKFWPVZATIAQANTVKYNCMAFEEXEORAZWDUMYGAETPQCXDC");
    tmp_msg_0.component.assign("TOGZLVPHKVWNKFMZAQHIRUZXEEBQGUCQ");
    tmp_msg_0.act_time = 26161U;
    tmp_msg_0.deact_time = 32345U;
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
    msg.setTimeStamp(0.559152139994);
    msg.setSource(18801U);
    msg.setSourceEntity(111U);
    msg.setDestination(43362U);
    msg.setDestinationEntity(110U);
    msg.op = 17U;
    msg.name.assign("LREQADJPTUVPFFNMKAEOBCHOPCFWTZZMBGSUOCOGEBEHBCWYDIANAQJAQPUGZYCIVKTDHIMPKELRIADCCMMXVHURVIXQJFEKHXLJXOMSDJSLUZCIWRBTTLFVJYVHLXODTKYTQCXURLUWQSFCELOSSLSEINJSDAYBKODKAGKWHUFFELSTJJBZXYWBNBNMIZQFRRPJNRIXXDHTVIGOG");

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
    msg.setTimeStamp(0.813174538079);
    msg.setSource(17936U);
    msg.setSourceEntity(159U);
    msg.setDestination(29195U);
    msg.setDestinationEntity(47U);
    msg.op = 207U;
    msg.name.assign("ZMQZQXAETAPBAQWBHTTDLA");

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
    msg.setTimeStamp(0.608043147214);
    msg.setSource(25937U);
    msg.setSourceEntity(19U);
    msg.setDestination(30205U);
    msg.setDestinationEntity(26U);
    msg.op = 90U;
    msg.name.assign("LWNSZIGNYWXKRZSZFEMJGOLYVLMITWKDDWYWQPBBTGBEACTJDJEDMIFGIJUHROZLBXHNTELCRXFYLPANROUWQVIALQOARQVSOELRIYUPUYBDFKLPOIUBSVMAS");

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
    msg.setTimeStamp(0.0394647509736);
    msg.setSource(58734U);
    msg.setSourceEntity(6U);
    msg.setDestination(18320U);
    msg.setDestinationEntity(181U);
    msg.type = 239U;
    msg.htime = 0.893865516004;
    msg.context.assign("XUTWZHJETWDEUDYBXKEXG");
    msg.text.assign("KNEEDQEQPTMINSACXQRPBYZXUJRINQJLTLCYKOUDHNGSX");

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
    msg.setTimeStamp(0.4255369993);
    msg.setSource(34464U);
    msg.setSourceEntity(8U);
    msg.setDestination(13972U);
    msg.setDestinationEntity(175U);
    msg.type = 86U;
    msg.htime = 0.0908659720518;
    msg.context.assign("VDLETDQFMNGREKHGZRZAQJFQBCVXZCWVILLHOSHFACIUYXVFGGZPBKMWYROXYIVBOSDISMXQSXRIAUSQGQVSAJHLOXFVUVAULIRAEMJQERZBRYMKNDZLGKBWPMUBZPHFKKDCKHEJNNTKAWBWYCWVCPFNRYPFUCEUSOLNIUPDHSLDMGIETNXLQASEZJYFIJTKPMCTOTDAHJDZXYHCYOXWIQOQPNJWZYFWJTVLTDGMROAPSPUWJTKRNGXEHG");
    msg.text.assign("GRDJEOLYUHJYNJYIVEMZVCCIIDDEQIAWRVDZRGZXYFZNAOWLPAZVEUVNPALGSDURSFZNJSTHUXREXFIBSFLNWTCHPXRXJMKQECBCFXWUGOENYPHZFKQNTMUTSQCXIKRI");

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
    msg.setTimeStamp(0.342750338939);
    msg.setSource(17350U);
    msg.setSourceEntity(150U);
    msg.setDestination(19439U);
    msg.setDestinationEntity(44U);
    msg.type = 24U;
    msg.htime = 0.401985686971;
    msg.context.assign("DSNVGYOKTHMYABHVOLNQDJYGFVIJRDGRCTKZGVCGAHPIISRUSBXNILCESJDDDBUFGLQNXVOSOJDWFPYXYPARIECYWLCHMTAWXRHETPKKKAUEKVUXVCEIYLUKPHFABRPITNQCUXZOOKRAPLZHEVOJBMUHZJBFSSNAZULZLESZUDOPCWMTZQRMBQVWIFDZESUGYMJJRDAFTEPYHQXIXSWFTQXCBXNVIPNQMWTEGMBMKLTFCRQWNLGYBONWM");
    msg.text.assign("LOWEICPNZKKKQKCRWTMOMFWKWWXJZHNMKXTGFARYP");

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
    msg.setTimeStamp(0.108506032613);
    msg.setSource(17441U);
    msg.setSourceEntity(189U);
    msg.setDestination(60381U);
    msg.setDestinationEntity(94U);
    msg.command = 106U;
    msg.htime = 0.521484662237;

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
    msg.setTimeStamp(0.19719963792);
    msg.setSource(48592U);
    msg.setSourceEntity(8U);
    msg.setDestination(2529U);
    msg.setDestinationEntity(180U);
    msg.command = 217U;
    msg.htime = 0.62781767176;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 140U;
    tmp_msg_0.htime = 0.857403206931;
    tmp_msg_0.context.assign("KZBULXZROFJYDJNHTVLZMAWCIBGSMNZNHNEKDFGEJYUIWORNVEFGRBDNPFJXKYVUJBHZWYIYGTAQLSAIYXTOYGABDFPXEULYXKDVQACCSRDJUUZPVKROHHLZFTMOVHEWTWGQCHHWIKXFZZQSGNGXXQFBMTXELIQIFPGNUNCHBCROBBWPAMVWTEDPOXPIPHVMKQLLSMDSBAQYTTCCPEIQLSWIDUYGMUAPOEARR");
    tmp_msg_0.text.assign("CNAOSJBESUSQXAUZQLPJFBSVDJTFAMPQDKWGXJFEOBQOCRNFKXGJAWYJFFYMBZTELEVDCPTFNQXOPMTTLZUXIEUZHTTGHARFFIKALRYIUZMYUPGTNNNRW");
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
    msg.setTimeStamp(0.73445203228);
    msg.setSource(51297U);
    msg.setSourceEntity(240U);
    msg.setDestination(914U);
    msg.setDestinationEntity(244U);
    msg.command = 189U;
    msg.htime = 0.993119901299;

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
    msg.setTimeStamp(0.725015239713);
    msg.setSource(46155U);
    msg.setSourceEntity(72U);
    msg.setDestination(5674U);
    msg.setDestinationEntity(16U);
    msg.op = 47U;
    msg.file.assign("ZVCUPDBDJQYQWUAPDEAYMYHOTTSAQLSQMIWNYWVBRTZVPWATBRDOMTKGDQDFXZLRTOHQNLTMYLXZVAXYSWVMSLBBECXUVIG");

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
    msg.setTimeStamp(0.769452964956);
    msg.setSource(43998U);
    msg.setSourceEntity(160U);
    msg.setDestination(34509U);
    msg.setDestinationEntity(140U);
    msg.op = 182U;
    msg.file.assign("XHAMGRHPTRAFXCSQFUVIZCDMQOSYCBPTCUJKXKIGLWDDYZPIVOKEFBZRIRRJFNNGGYVWKEWMNFYYYQPOWTPTOZDIBQVBSSUFNHVCIKTEJTRUDAJURPUZQWUHHBQLWAEWMROXMNXXLMPOYUEXTLTGEDOOAZNJWLVRLCMLAWGVKLEGDWEEDAXAZHFCKIFBZMBFHJSHFRHMQIBGSPCSAPKLNUQJCSOXYJKBPNJGDDYZE");

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
    msg.setTimeStamp(0.363695937265);
    msg.setSource(11512U);
    msg.setSourceEntity(132U);
    msg.setDestination(21309U);
    msg.setDestinationEntity(116U);
    msg.op = 69U;
    msg.file.assign("VTXSFFWCNSKIDALQYYPZWBSHZYHSQRDHKKIJBNMZTVCFCWLXTXKRDODVDNCRRJJAVIPVCGUGNSWZEUBPIEVOIBYTBOTGQMDVFOFAPYOFRQKYXLXMQUJJTMPZQAGCVHLNUHKTHRJLNIERPMUMWDJ");

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
    msg.setTimeStamp(0.728856968095);
    msg.setSource(16975U);
    msg.setSourceEntity(159U);
    msg.setDestination(36921U);
    msg.setDestinationEntity(143U);
    msg.op = 123U;
    msg.clock = 0.950335952149;
    msg.tz = -17;

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
    msg.setTimeStamp(0.395909534353);
    msg.setSource(614U);
    msg.setSourceEntity(198U);
    msg.setDestination(44942U);
    msg.setDestinationEntity(43U);
    msg.op = 109U;
    msg.clock = 0.872455626991;
    msg.tz = -4;

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
    msg.setTimeStamp(0.432723204614);
    msg.setSource(25952U);
    msg.setSourceEntity(53U);
    msg.setDestination(2597U);
    msg.setDestinationEntity(2U);
    msg.op = 62U;
    msg.clock = 0.972354390453;
    msg.tz = -24;

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
    msg.setTimeStamp(0.434143727417);
    msg.setSource(6362U);
    msg.setSourceEntity(198U);
    msg.setDestination(27072U);
    msg.setDestinationEntity(245U);
    msg.conductivity = 0.173313764584;
    msg.temperature = 0.219547523697;
    msg.depth = 0.0284772931866;

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
    msg.setTimeStamp(0.760763370189);
    msg.setSource(23712U);
    msg.setSourceEntity(211U);
    msg.setDestination(7576U);
    msg.setDestinationEntity(116U);
    msg.conductivity = 0.860665888201;
    msg.temperature = 0.614323405293;
    msg.depth = 0.605363994681;

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
    msg.setTimeStamp(0.162186274749);
    msg.setSource(53912U);
    msg.setSourceEntity(169U);
    msg.setDestination(47396U);
    msg.setDestinationEntity(218U);
    msg.conductivity = 0.25613268649;
    msg.temperature = 0.817670315365;
    msg.depth = 0.197872487495;

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
    msg.setTimeStamp(0.0526039686727);
    msg.setSource(19816U);
    msg.setSourceEntity(87U);
    msg.setDestination(12854U);
    msg.setDestinationEntity(182U);
    msg.altitude = 0.358485194763;
    msg.roll = 62061U;
    msg.pitch = 28245U;
    msg.yaw = 65021U;
    msg.speed = -9937;

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
    msg.setTimeStamp(0.327695270649);
    msg.setSource(1145U);
    msg.setSourceEntity(242U);
    msg.setDestination(36461U);
    msg.setDestinationEntity(165U);
    msg.altitude = 0.593680991574;
    msg.roll = 29556U;
    msg.pitch = 62752U;
    msg.yaw = 19663U;
    msg.speed = -29161;

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
    msg.setTimeStamp(0.424774109061);
    msg.setSource(37313U);
    msg.setSourceEntity(151U);
    msg.setDestination(55178U);
    msg.setDestinationEntity(239U);
    msg.altitude = 0.0348393858523;
    msg.roll = 5692U;
    msg.pitch = 15360U;
    msg.yaw = 21340U;
    msg.speed = 18589;

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
    msg.setTimeStamp(0.68877774879);
    msg.setSource(51932U);
    msg.setSourceEntity(55U);
    msg.setDestination(4582U);
    msg.setDestinationEntity(175U);
    msg.altitude = 0.0621843248067;
    msg.width = 0.347873233189;
    msg.length = 0.489302238172;
    msg.bearing = 0.98368252891;
    msg.pxl = -6885;
    msg.encoding = 229U;
    const char tmp_msg_0[] = {102, -78, -99, 40, 35, 103, -126, 30, 13, -93, -96};
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
    msg.setTimeStamp(0.678255963126);
    msg.setSource(7733U);
    msg.setSourceEntity(57U);
    msg.setDestination(30383U);
    msg.setDestinationEntity(88U);
    msg.altitude = 0.967847173155;
    msg.width = 0.0781036343283;
    msg.length = 0.236804276978;
    msg.bearing = 0.765686548291;
    msg.pxl = 22667;
    msg.encoding = 23U;
    const char tmp_msg_0[] = {-58, -51, 67, 80, -52, -92, -30, -27, 10, -39, 67, 59, -57, -33, 1, 4, 21, -67, 107, 84, 52, 17, 56, -1, -67, 68, 116, -72, -101, -118, -80, 21, -99, -36, 102, -38, 107, 5, -116, 56, -107, -95, 113, -19, 4, 121, -106, -48, -48, -30, -58, -118, -63, 42, 18, 30, -71, -54, -35, 61, -66, 35, 125, -70, 94, -23, 12, 70, -10, 23, 1, -125, 17, -10, -20, 40, 10, -122, 27, -53};
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
    msg.setTimeStamp(0.263993991057);
    msg.setSource(2271U);
    msg.setSourceEntity(61U);
    msg.setDestination(20103U);
    msg.setDestinationEntity(150U);
    msg.altitude = 0.285616401848;
    msg.width = 0.184806683926;
    msg.length = 0.100289545949;
    msg.bearing = 0.0455355414303;
    msg.pxl = 26181;
    msg.encoding = 63U;
    const char tmp_msg_0[] = {-18, -33, -116, -69, -73, 42, -26, 29, 64, 83, 42, 59, -50, -77, -43, 85, -113, -82, 65, -26, 61, -96, -92, -36, 101, 105, -2, 115, -18, -106, -72, 112, -54, -80, 104, 45, -74, 68, 93, 30, -3, 26, -72, -90, -85, 69, -114, 3, -65, -2, 2, 91, 56, -109, 39, 70, 108, 85, -40, -96, -31, 113, -43, 109, 102, 111, -17, -91, 96, -56, -29, 109, -14, -6, 117, -90, 104, 22, 53, 26, -79, -83, 96, -82, -84, 71, 85, 43, -71, 78, -52, -26, 49, 21};
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
    msg.setTimeStamp(0.712318651976);
    msg.setSource(47554U);
    msg.setSourceEntity(95U);
    msg.setDestination(47707U);
    msg.setDestinationEntity(214U);
    msg.text.assign("OJYRMCMHVBYUJASFGEGZZIRMDQPANGNVNTMUMHFLSJWIALXVEAKWFORMTNIFVAQCWPAKCKRCXJIALJYPBLCOTIDNPWGETEBPBMSDGYVLMZQBKEFQGINTZNNVXWAYXSBVKDZRDVZRLD");
    msg.type = 124U;

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
    msg.setTimeStamp(0.407866242897);
    msg.setSource(42976U);
    msg.setSourceEntity(102U);
    msg.setDestination(52220U);
    msg.setDestinationEntity(186U);
    msg.text.assign("FCMBKGFBPHDKSJVMYCGITTBDRQAHMMDMONSKDPGXGJNBXSXLUABRUKEEXLRVFHXPALQELYCBYZRLOGUDIOJZOFCGRJYWMKJQSEOATDQUBHFFOEQTLSYUOYFNLMJPQJVGPGKQZPWZRZMNYIQSVIXQECATDZEBANVJFBVRCNOBNWCDRXENTOSXJHMLSTCPMFSZZVARXVXULCTSFEHIWRYUDOAGCLHKKWIVZUHPEKNQPWIHYNGIZ");
    msg.type = 205U;

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
    msg.setTimeStamp(0.423412492802);
    msg.setSource(29160U);
    msg.setSourceEntity(37U);
    msg.setDestination(24285U);
    msg.setDestinationEntity(199U);
    msg.text.assign("ESXFUROQCNKBASRGDMERPHFFIBEOWMKVWJZIWKGDZL");
    msg.type = 238U;

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
    msg.setTimeStamp(0.644536657243);
    msg.setSource(7152U);
    msg.setSourceEntity(143U);
    msg.setDestination(17470U);
    msg.setDestinationEntity(29U);
    msg.parameter = 248U;
    msg.numsamples = 50U;
    msg.lat = 0.243585740865;
    msg.lon = 0.841713948425;

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
    msg.setTimeStamp(0.0505632315961);
    msg.setSource(31997U);
    msg.setSourceEntity(229U);
    msg.setDestination(2167U);
    msg.setDestinationEntity(185U);
    msg.parameter = 16U;
    msg.numsamples = 65U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 10096U;
    tmp_msg_0.avg = 0.731424554783;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.0404644516223;
    msg.lon = 0.176142801989;

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
    msg.setTimeStamp(0.225445499837);
    msg.setSource(12442U);
    msg.setSourceEntity(191U);
    msg.setDestination(10277U);
    msg.setDestinationEntity(121U);
    msg.parameter = 217U;
    msg.numsamples = 59U;
    msg.lat = 0.487256832958;
    msg.lon = 0.878871760361;

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
    msg.setTimeStamp(0.566278537505);
    msg.setSource(26358U);
    msg.setSourceEntity(198U);
    msg.setDestination(33333U);
    msg.setDestinationEntity(115U);
    msg.depth = 29586U;
    msg.avg = 0.192900995537;

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
    msg.setTimeStamp(0.293772703035);
    msg.setSource(47565U);
    msg.setSourceEntity(156U);
    msg.setDestination(25208U);
    msg.setDestinationEntity(180U);
    msg.depth = 5185U;
    msg.avg = 0.735763906063;

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
    msg.setTimeStamp(0.0432524000141);
    msg.setSource(47081U);
    msg.setSourceEntity(82U);
    msg.setDestination(65285U);
    msg.setDestinationEntity(68U);
    msg.depth = 26426U;
    msg.avg = 0.1685299709;

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
    msg.setTimeStamp(0.0159389659574);
    msg.setSource(50335U);
    msg.setSourceEntity(21U);
    msg.setDestination(53111U);
    msg.setDestinationEntity(123U);

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
    msg.setTimeStamp(0.954225808588);
    msg.setSource(62465U);
    msg.setSourceEntity(4U);
    msg.setDestination(35351U);
    msg.setDestinationEntity(232U);

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
    msg.setTimeStamp(0.826372647794);
    msg.setSource(7748U);
    msg.setSourceEntity(148U);
    msg.setDestination(41585U);
    msg.setDestinationEntity(102U);

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
    msg.setTimeStamp(0.400575231154);
    msg.setSource(5814U);
    msg.setSourceEntity(231U);
    msg.setDestination(27331U);
    msg.setDestinationEntity(55U);
    msg.sys_name.assign("XANNFILFZLJBTHXCLYXKZREJGWQDOWCEHAKDPXKBFVHATSNJYWUSMUMCOQKISOIUAYNZWTWKNLZBGWRBMOOCSPRWJHTLXUSZVOQDUAFDFVYGTDHPSZSQHE");
    msg.sys_type = 244U;
    msg.owner = 6743U;
    msg.lat = 0.903393837159;
    msg.lon = 0.984979376734;
    msg.height = 0.271589662631;
    msg.services.assign("NUIWHCGFRZBJMPDWSYKSWWRAKWNSGYDWTTFQROEGOCEKHNPQXXPVOBWBUNGWEMIQAJRMXZTOPSSVZVIKRQPLRQICUVHBPLFLSRZBUBQLVEEXEFQVTFUMCJTYQJKIAZZHCWYLCEKXLLAGAHIAJHANBGUQFKDETMPHYJBYADNPVGUYTYYLNTTSSVG");

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
    msg.setTimeStamp(0.289046495373);
    msg.setSource(18536U);
    msg.setSourceEntity(200U);
    msg.setDestination(6872U);
    msg.setDestinationEntity(67U);
    msg.sys_name.assign("GHIQOFZJTFYQIYHVOLMMWRCPEBDIGXDFYRQBXCQWUULSXNAHWZDRPPWJOSEOBSTNCEVDNSLNNBOTUZJPEDWWIMGBUCEKSKCMXVVGNKLYQVZHIABRLUAUJFGEWDOBIPONPVPFVQAQCCJSLDKTPFKTSDWUHKJYEHZMM");
    msg.sys_type = 33U;
    msg.owner = 22480U;
    msg.lat = 0.952920898501;
    msg.lon = 0.734677769551;
    msg.height = 0.0730934358258;
    msg.services.assign("VCMCHXPXUDXXALOOATILNAUXNGGXRPLWFQFQFQJUZBQWMAHQBJYNUKPBQYELCQGXIWGZTNRUYCITJEUOBCDYUFJPEVROZ");

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
    msg.setTimeStamp(0.8511152896);
    msg.setSource(45300U);
    msg.setSourceEntity(141U);
    msg.setDestination(60727U);
    msg.setDestinationEntity(158U);
    msg.sys_name.assign("ICOMRLSBHWXDJKBQKJPMHKDYJHZBLNSROUSCFVZAETIGIYZFGWTHBIAEODDQUSFBUTFYJVEGZBYVTUYRWTBJNUDNZFCILFAFKBOYQCNS");
    msg.sys_type = 136U;
    msg.owner = 14705U;
    msg.lat = 0.569028564955;
    msg.lon = 0.773759535902;
    msg.height = 0.434382548044;
    msg.services.assign("RDQCCOXJOZNAKCROXXNNCBDYKXAMNPRTLJOYLBQGJEFYLGETBWGTBHSHUAVNSZJKZLGDIFKFZQBDLRMYECOXFHWFSIKCASMMYWDHQURQAZLPMWBWFOQHJSIGBAXJMPJNZHETMVWQNHRYUVVLKWNIEGUP");

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
    msg.setTimeStamp(0.136040367399);
    msg.setSource(4680U);
    msg.setSourceEntity(134U);
    msg.setDestination(48972U);
    msg.setDestinationEntity(246U);
    msg.service.assign("TOJRGDRHYWMSRLCBMQVJZZIMJPYNIRBTFRRBFDCUNEFXQDHWGHPOTENKIPIWYDZBJLBP");
    msg.service_type = 165U;

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
    msg.setTimeStamp(0.326255636162);
    msg.setSource(21681U);
    msg.setSourceEntity(145U);
    msg.setDestination(31686U);
    msg.setDestinationEntity(186U);
    msg.service.assign("FZXJSYVHXPBLILEXSPWBKSIDIKAETHKSPBNTHMADIEQUDVUGYGSQYFPWYFULZKAGPMIPOUYILYTADBMKXDGDWRFXAVXZZNCXGMHBEWTQUWIWVGLVLNTJFESZCMMZSRGWRWRPNVLHNAFHOD");
    msg.service_type = 197U;

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
    msg.setTimeStamp(0.397039917138);
    msg.setSource(59402U);
    msg.setSourceEntity(189U);
    msg.setDestination(52655U);
    msg.setDestinationEntity(15U);
    msg.service.assign("SNTGDAGVFJYLRAJOFZUMWQKRTFJBWPNMXCWPCCPKCOGHAANGPAHRTNXJGTVEXCGLBDHOQXKUNMXRISJRTRDTQWZUVJPKQHETNEAJISJMZCNOLVBBUZYDQPHWDAVWFBUBBZQEIPKGNINQUPMQXWYWAYIOMTIHUCSWXHDSVYV");
    msg.service_type = 13U;

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
    msg.setTimeStamp(0.278070838618);
    msg.setSource(6692U);
    msg.setSourceEntity(52U);
    msg.setDestination(5989U);
    msg.setDestinationEntity(43U);
    msg.value = 0.513393248045;

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
    msg.setTimeStamp(0.163330097974);
    msg.setSource(16239U);
    msg.setSourceEntity(254U);
    msg.setDestination(48189U);
    msg.setDestinationEntity(82U);
    msg.value = 0.652361348855;

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
    msg.setTimeStamp(0.24541434573);
    msg.setSource(8403U);
    msg.setSourceEntity(174U);
    msg.setDestination(40266U);
    msg.setDestinationEntity(103U);
    msg.value = 0.160397639586;

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
    msg.setTimeStamp(0.290026010653);
    msg.setSource(47926U);
    msg.setSourceEntity(147U);
    msg.setDestination(18674U);
    msg.setDestinationEntity(208U);
    msg.value = 0.290599313172;

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
    msg.setTimeStamp(0.845071350866);
    msg.setSource(11500U);
    msg.setSourceEntity(232U);
    msg.setDestination(11725U);
    msg.setDestinationEntity(44U);
    msg.value = 0.472126064435;

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
    msg.setTimeStamp(0.676152485828);
    msg.setSource(26016U);
    msg.setSourceEntity(19U);
    msg.setDestination(51954U);
    msg.setDestinationEntity(142U);
    msg.value = 0.508180515192;

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
    msg.setTimeStamp(0.111131619989);
    msg.setSource(17398U);
    msg.setSourceEntity(235U);
    msg.setDestination(2430U);
    msg.setDestinationEntity(13U);
    msg.value = 0.478889398373;

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
    msg.setTimeStamp(0.732083367467);
    msg.setSource(56961U);
    msg.setSourceEntity(212U);
    msg.setDestination(21763U);
    msg.setDestinationEntity(163U);
    msg.value = 0.698260537047;

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
    msg.setTimeStamp(0.348383805575);
    msg.setSource(24611U);
    msg.setSourceEntity(15U);
    msg.setDestination(36410U);
    msg.setDestinationEntity(63U);
    msg.value = 0.518057889415;

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
    msg.setTimeStamp(0.828500389117);
    msg.setSource(7803U);
    msg.setSourceEntity(167U);
    msg.setDestination(19873U);
    msg.setDestinationEntity(148U);
    msg.number.assign("BSWBLAHCSJAGFVHREVOHCKTZWSDVWKCBXKMFVXUWAHTJAFCBVEYNSZO");
    msg.timeout = 46103U;
    msg.contents.assign("DUZKLQVQQGERIHVMCUPNLMNKVWVANGZ");

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
    msg.setTimeStamp(0.214291052793);
    msg.setSource(9869U);
    msg.setSourceEntity(89U);
    msg.setDestination(61579U);
    msg.setDestinationEntity(161U);
    msg.number.assign("YSHAEILUZMUXKWHGARXDYNQXIPVYRKQSPCREWHIHGWOBEMSNBBMVVATSCKCMXDOTZNOARWPMCZRCXXZMOJIEDVLITYVGQTROLPTRWBFMXQIZAFEHQJMWGJAYQPWHUTAKEFDQFSKOXANGLVGEGUPOFWUJPGYONKETWIUKBULRDZOYLLH");
    msg.timeout = 2826U;
    msg.contents.assign("YLQVXTRZRWTIXIHDTSZQALFYPKYSTTOITYIJVEXBEYJOAFUSEHDWZPIQMZIJECPEIXDTVKOSJBKGIVNNRMNKURNUOOXBSJOEZMCJZGOLFJFKYHNCXNLRNHLDCAJNUDPNRZBWBATBWKDWRLQJXPNZSHPQOCGFUCHZYCFGVVWQYAAHDEMRSGQDPGSUAMMAPWFBXBLPVLIFQPVMHDCBGCLYHFOXILSWKEKTTA");

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
    msg.setTimeStamp(0.0264616028992);
    msg.setSource(59203U);
    msg.setSourceEntity(233U);
    msg.setDestination(64132U);
    msg.setDestinationEntity(56U);
    msg.number.assign("YBXRVRNNTWBMDGLRHDSNXFQANXHADSKJYGIGQGORVFMIJLLCXYARSJYVK");
    msg.timeout = 1339U;
    msg.contents.assign("KUXNTKNJHLXEEUBIPTIAEIOZVEHJXYQIAXUKMRQALPTCXHMOJRCRSUWSFOVCAPTXYGEMHOOBBMFVLOGDTGMSWGVYWXIDWFSQZTCJDPHNFQTFRBAJHZMKUJ");

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
    msg.setTimeStamp(0.519925069892);
    msg.setSource(14664U);
    msg.setSourceEntity(235U);
    msg.setDestination(43723U);
    msg.setDestinationEntity(134U);
    msg.seq = 737695757U;
    msg.destination.assign("EPZOFADVOUFNQYIVGEMXJSMUIDWBRAEMSDIBHOXVJWTXZXQRSDTNANGFCWGUZUHHIMYLXEGXNWSZJAGIRJWMWFOEFRUOKQNCTGYQUNFMAYDTRUAEEFHDXPBPFHWZXCRQLZLHV");
    msg.timeout = 38831U;
    const char tmp_msg_0[] = {-90, -61, -59, -71, 55, 53, 118, 65, 73, -13, 89, 54, 79, -75, -78, 58, -79, -60, -72, 43, -112, 44, 121, -114, 46, 63, -102, 44, 8, 9, 80, -36, -86, 44, 95, 54, -71, -75, 60, -32, -105, 81, -8, 72, 56, 49, -105, 19, -86, -48, -12, 41, -6, -11, -121, 40, -55, -76, 84, 108, 123, 62, -92, -3, -42, -122, -77, 31, 83, 49, -20, -4, -109, 7, -72, -39, -52, -64, 41, 96, 27, -41, -75, -75, 67, 95, 40, -26, -70, -104, -52, 63, 14, -50, 10, -3, -82, 100, -34, 68, -92, 35, 115, -11, 122, -83, -2, -44, 79, 72, -22, 93, -83, -53, 88, -69, 12, -123, -29, -17, -122, 62, 84, -47, -104, -102, -121, -75, -104, 26, -93, -17, 106, -78, -118, 10, 27, 96, -74, -26, -99, -46, -5, -61, -66, -104, -122, 62, -87, 96, -113, -126, -42, -43, -3, 80, 17, 33, -32, 8, -79, 64, -98, 2, -104, 4, -88, 91, 89, 48, -107, 89, 17, 6, 116, -65, -61, -27, 27, 124, 12, -75, -119, -123, 9, 115, -56, 105, 15, 123, -126, -53, 9, 53, 48, -30, -26, -56, 24, -52, -52, 24, 30, 1, -46, 10, -116, 86, 19, -105, 108, 70};
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
    msg.setTimeStamp(0.291836515231);
    msg.setSource(554U);
    msg.setSourceEntity(233U);
    msg.setDestination(49704U);
    msg.setDestinationEntity(151U);
    msg.seq = 1048959819U;
    msg.destination.assign("XZZZDDGNTEVMLAWERRGBUTXXYDHOJFTHORMIMOUJHVCNQAQBKVHZEUEUKLPGNUTDBICZSNEHQIQWHJFAQBCBF");
    msg.timeout = 14094U;
    const char tmp_msg_0[] = {75, 55, -43, -20, -125, 107, -53, 33, 59, 7, 105, -29, -7, 70, 82, -116, -74, -36, 96, -2, -95, 35, -103, -27, -52, -19, 60, -73, -83, 62, 17, 122, 126, 74, 94, 68, 33, 83, -4, -93, -62, 58, 82, 97, -77, 74, -116, -120, 37, -125, -37, 37, 99, -44, 54, 105, 70, 54, 74, -61, -18, 49, 39, 112, 58, -92, -122, 9, 7, -33, -119, -67, -49, -114, -33, -76, -127, -26, 15, 76, 57, -95, 108, 48, -20, -65, 0, 32, 2, -124, -120, -20, -100, -56, 0, -13, 92, -90, -123, 122, 8, 37, 2, -109, 9, 30, 84, -16, 79, -97, -30, 44, -46, 50, 38, -65, -116, 126, 87, 63, 45, -103, 49, -119, 0, -34, -106, 118, -82, 18, -22, 126, 46, -40, -97, -87, 30, -112, 2, 74, 125, -113, -58, 92, 26, -58, 88, 119, 120, 17, -127, 102, -21, 26, -19, -63, -23, -37, -68, -92, -20, 107, -40, 4, 45, 50, -34, 50, -112, 26, -24, 16, 67, -51, 6, 76, 109, 42, 84, -79, 34, 21, 109, 21, -64, -101, -28, 34, 14, 5, -1, -121, 120, 105, -124, 86, 98, -69, -62, 27, -33, -101};
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
    msg.setTimeStamp(0.499694248462);
    msg.setSource(2177U);
    msg.setSourceEntity(82U);
    msg.setDestination(45463U);
    msg.setDestinationEntity(176U);
    msg.seq = 1187654942U;
    msg.destination.assign("FPUAZKHBCQFFNEYRMBHHZDGJQXGIMXEGKXTBLSREHGEPFJGHXIIPBGDKFWMVVCLENPYIDOWLZUH");
    msg.timeout = 27606U;
    const char tmp_msg_0[] = {16, -84, 10, 18, -107, -67, -25, -115, 30, 85, -74, -59, -58, -111, 10, -67, 107, 67, 59, 12, 44, -81, -54, 19, 78, -20, 92, 36, 120, 111, -97, -79, -6, -102, 17, 49, 70, 16, -67, -99, 72, -78, 92, -96, 10, 75, 96, 15, -105, 4, 29, -32, -122, -53, 16, -14, 115, 120, -101, 71, -88, 60, -57, -62, 57, -112, -48, -58, 45, 43, 7, -47, -58, -88, -38, 13, 37, 59, -32, -54, -21, 44, -74, 50, -85, 11, 122, -97, 116, -21, -88, -26, -100, -117, 11, -73, -125, 23, -45, 92, 47, 12, -124, 101, 13, -24, 118, 112, 27, -87, 81, 77, -30, -20, 46, 2, -38, -108, -57};
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
    msg.setTimeStamp(0.788019812223);
    msg.setSource(52747U);
    msg.setSourceEntity(118U);
    msg.setDestination(61466U);
    msg.setDestinationEntity(2U);
    msg.source.assign("AIAWTNMHNILRIYNGZWZTXGWTHACFLCVNCQOUADOGSTFAFEAHOOOBOSRTPJCCJNBJWNLKLMBNTDXSGRDEXEYKI");
    const char tmp_msg_0[] = {-4, -127, -43, 54, -41, -46, -81, -20, -90, -20, 84, 13, 34, -120, 110, -5, -35, -58, -81, -106, 42, 76, 100, -36, -64, 11, -83, -79, 35, -100, -61, -112, 20, -21, -117};
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
    msg.setTimeStamp(0.546263186235);
    msg.setSource(37167U);
    msg.setSourceEntity(213U);
    msg.setDestination(26907U);
    msg.setDestinationEntity(153U);
    msg.source.assign("TQOBXTSAWKWPPTILCNWBSMBOFKRLRAVGMXJZRDHXGMHFEZNBVUOOWPWDLOVJTSEKIEAVCKRAVIJUSDGUXENAUMBYBUGYIFFVVQRSQCJNGFOILEKRYDVQMTIZOYUARMGCYLDXNKXGQBNXOLXRU");
    const char tmp_msg_0[] = {69, 53, -20, 68, 121, 70, -98, -128, 3, -112, 22, -25, -53, 84, -112, 44, -43, -110, 47, -74, 101, 124, -26, -91, 6, -128, 92, -89, -24, 75, 5, 23, -17, -35, -68, -1, -83, -69, -87, 106, 110, -123, -32, -17, 83, -69, -12, 58, 2, 21, -10, -97, 115, 78, 115, -128, 108, 42, 19, -2, -55, -69, -95, 6, 110, -52, -104, -49, -78, 63, -15, 19, 118, -48, -57, -66, 21, 14, -27, 66, 114, -42, 125, -1, 1, 6, -27, 12, 60, 24, 24, 120, 18, -99, -96, 2, -25, 2, 40, -106, -18, -2, 45, -21, -52, -69, -74, -52, 99, -122, 54, -110, -49, -110, -76, -56, 51, -6, 4, -33, 50, 85, 81, -50, 72, 73, -106, -2, 88, -56, -33, 119, 102};
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
    msg.setTimeStamp(0.609880768325);
    msg.setSource(2336U);
    msg.setSourceEntity(238U);
    msg.setDestination(59061U);
    msg.setDestinationEntity(144U);
    msg.source.assign("UJCVVJKAPIADNVXKPGBDMBIECRWZBNFWNOYZFGOZEQBSFYHAWGIWAXJMHDTYKCDUKSHLDGTVGBPPCVHLXPSMJRMSKXAPUZMJMPYWXVLYNOXXZF");
    const char tmp_msg_0[] = {56, -54, 30, -4, 103, 9, -68, 16, -26, -52, -76, -55, 98, 30, -60, -3, 83, -16, 47, -10, 120, 14, -18, -74, 101, 120, -63, 99, -86, -76, -112, 17, 126, -91, -83, 6, 42, 100, 110, 15, -123, -81, 77, -73, 22, 90, 14, -11, -83, 63, -79, 81, -114, -18, 122, 15, -55, -92, 81, 33, 21, 108, 82, 71, -14, -48, 1, -111, -125, 31, 2, -46, 12, 87, 75, -74, 101, -106, 55, 5, 53, -79, -36, -55, -7, -102, 109, 110, -1, -49, -19, 119, -102, 108, -58, -128, 32, 98, -41, -120, 76, 55, 18, -85, 107, 23, -35, 40, -32, -26, 88, -110, -75, -30, -115, -98, -126, -76, -27, 103, -23, -69, 85, 90, 50, -16, 39, -30, -114, -119, 51, 16, -91, -81, 71, -119, -64, 104, -82, -106, -41, -85, -122, 34, -76, 36, -45, 1, 81, -52};
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
    msg.setTimeStamp(0.380057688906);
    msg.setSource(16173U);
    msg.setSourceEntity(77U);
    msg.setDestination(29601U);
    msg.setDestinationEntity(130U);
    msg.seq = 1722443813U;
    msg.state = 21U;
    msg.error.assign("ZIMDALJYZAXDYLZPXPMQKLTSEJUPWGNYFFGEAIASHSZTTNRNRTLRTBXHKJVKQZNQUSEUACOHKRJLASRVPPRTYFFROVNUBJSODCCDOHVYYFNQJYELBIIQDBOOKVTHORMCVRBZAVEINEJUIFJKMKZO");

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
    msg.setTimeStamp(0.126652598629);
    msg.setSource(2865U);
    msg.setSourceEntity(92U);
    msg.setDestination(55608U);
    msg.setDestinationEntity(35U);
    msg.seq = 3926917172U;
    msg.state = 247U;
    msg.error.assign("OVRKXCFWBSEDGOWSSKOGVLKHBXXUJMYLNZANNAHTSFVQLIELEKJMDFDRKQIVBGAAHEJYMFNFGWXOTCUUTOGFMTXLIYRIMZZZTFITAKZZYPYMCEKUVIESVTHNCNRHCMTNUWDNSOJWPWDCJHCIHQLQSWRPGARXLAMUKQULIGYFASZJOVOAZQOBDKJVQKTBYXGJPMDPJGYUCLRRRPQZZHOBNNS");

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
    msg.setTimeStamp(0.934852168529);
    msg.setSource(16382U);
    msg.setSourceEntity(114U);
    msg.setDestination(20562U);
    msg.setDestinationEntity(249U);
    msg.seq = 2525350700U;
    msg.state = 0U;
    msg.error.assign("LGMMGNQXKVWGIVRDWRKBCJYXEWHWXGNCIOHRIAWECNPKEKZPCKAQAJNFOBKLMCXIVPUQHXCMJGYBXFLWPUUFKGIZAPMJLLTHTQDUBDYSJBIFLITNLCKOCVXUUBUZDRPASPUSOETZYO");

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
    msg.setTimeStamp(0.298774337579);
    msg.setSource(64381U);
    msg.setSourceEntity(58U);
    msg.setDestination(40043U);
    msg.setDestinationEntity(155U);
    msg.origin.assign("TYIFABQNPSOBUMNYEJZFKVSDLKLOUEXOCVEKDUQNTXBHJTAGTBWMQGEYXJDWCISFHQRZIADWGMLTZKQSYEXTBQKKLRQYSTOCGRXHHHXUZDCYZRXCFYLWKOWIZPIBUDCBWPKPUUVSMCEZEUDLMWCQMAESVNQFGNMRMIIYHGGFHWILJPRWOORZJNSBQFLWHPTZISDANJX");
    msg.text.assign("HIQJGOQTVFQEADZPHQJMXDYJAUVLSKWYIFDATVGUZWRCNXJOSENAJEXNAVOJXPWUUTLFOMYIKPAHXPEYXZPNJBHZODBRGGDKYQSLHSOEHQWFJGUBCUFNOFRATSMJZLMWVLVBTIRTIRPYCEAINF");

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
    msg.setTimeStamp(0.386778650589);
    msg.setSource(24658U);
    msg.setSourceEntity(122U);
    msg.setDestination(18321U);
    msg.setDestinationEntity(251U);
    msg.origin.assign("ZHZLUTCFPSNOZIYFIPKWUQJVPRBLVFUEUZPCPQLUBZDVLJGQRLRMWOJLWQPYQNSJILKFDCAPOPUMCFXOVGYWBVEBVAHXEJMQDKXQDVDZXTYEYSEUWIVYTYNBTYYGXDCSSAHKTFUFKBAPWANMWFQERJXGVNWCFRGHOIAEBLKFSCRTWQGROXSDSZQTSDGJNGUGEMMIHYKXWIECNMARSLTCI");
    msg.text.assign("TMMVCLNCEYSWL");

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
    msg.setTimeStamp(0.0284689051925);
    msg.setSource(57624U);
    msg.setSourceEntity(133U);
    msg.setDestination(28744U);
    msg.setDestinationEntity(160U);
    msg.origin.assign("MFWKVYUFBZEPESWUMINIFXRBVZSTWTDNYQDUKXSZUEKRBUBOZZFHLTBMHMJNANVVWHVVJDZKCOOCHFFQWXBENOUEJDGADFCCLTOIPAQSGENYXTPLBATDORKIIPKYAIMQRSJVIQGGWPLIHZSOUNGYGQGTMJOXCTZLCOMGYGSRDGYXPHMJWLJHELTPHXXWAKUEWFAJIZCMAVOURRPDNQEVJAYL");
    msg.text.assign("FWRHGARRFO");

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
    msg.setTimeStamp(0.320236481049);
    msg.setSource(21967U);
    msg.setSourceEntity(207U);
    msg.setDestination(30938U);
    msg.setDestinationEntity(29U);
    msg.origin.assign("SHDSXSRIOMVJKLVSBPZRUTLEJWPCNALWXLCDZSAUPRYIPVGARVKAUEDQDSFCUCQFGNKPVNJZGUHLWOZENNZAQBODWMHUUWYHQ");
    msg.htime = 0.0396506815502;
    msg.lat = 0.827146446663;
    msg.lon = 0.00698270100761;
    const char tmp_msg_0[] = {10, -45, -58, 106, -62, 92, -3, -11, 23, 20, 39, -95, -63, -46, 54, -80, -91, -46, 36, -61, 58, 75, 10, 28, 8, 66, -78, 39, 65, -4, -122, 51, 20, -91, 53, 63, -122, -21, -72, 39, -124, -68, 121, 82, 119, -48, 98, -18, -17, -24, -59, 125, 72, 75, -19, -54, 38, -117, -56, 13, -84, 29, 96, 29, -125, 100, -108, -103, -52, 25, 34, -10, 34, 56, -81, 32, 44, -8, 95, 25, -90, -73, 41, -11, 112, -69, 25, -39, 47, -14};
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
    msg.setTimeStamp(0.741101846538);
    msg.setSource(35984U);
    msg.setSourceEntity(154U);
    msg.setDestination(51864U);
    msg.setDestinationEntity(148U);
    msg.origin.assign("SCFNOXZJJJDSUIEIKNRKPSLXKJILNHZYQYWZVMUQHDJZVZTGKSVVWBMFTYQXYMTGIJXPCBGNTWPWTOGMQIBQSTLVFYJRNFRPZQRTBZLUKOMNAWSQEWZDYABOVFAKGUWONLCKSHINCMFHBKRCBEGARDX");
    msg.htime = 0.201592182226;
    msg.lat = 0.264930587087;
    msg.lon = 0.882357216909;
    const char tmp_msg_0[] = {120, 13, -10, 118, -106, 48, 44, -39, -38, 15, -79, 77, 79, -47, -77, 55, 56, 44, -17, 42, -87, 121, -112, 116, 33, -12, 8, -57, -6, 115, 12, -62, 47, -2, 39, 114, -2, 46, -126, -23, -105, 109, 70, 117, -51, -28, 116, 37, 97, 108, 36, -61, -79, -83, 62, 24, 75, 113, 89, -94, -1, 96, 123, -60, 66, -40, 29, -72, 123, 8, 69, -45, 74, 35, 100, 79, -18, -107, 119, 52, -87, 24, -69, 50, -5, 44, -93, -30, -99, -82, -47, 119, 75, 109, -22, -61, -101, 52, -4, -83, -7, -106, 72, -7, -17, -74, 118, -92, 19, 76, -36, -10, 19, -38, 42, -123, 54, 119, 4, 103, -26, -99, -111, 72, 5, 115, 59, 82, -14, -76, -66, 7, 65, 117, -72, 81, 17, 84, 51, -120, 20, 18, -31, -10, 52, -111, 4, -33, -45, -88, -43, -5, 40, -84, -128, -42, 42, -100, -2, 31, 122, 100, 68, 99, -76, 18, 94, 86, 99, -102, -89, -4, -59, -20, -120, 78, -7, 107, 30, 94, 117, -23, -6, -40, -103, 30, 117, 18, 17, 123, -117, -62};
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
    msg.setTimeStamp(0.179734778843);
    msg.setSource(14930U);
    msg.setSourceEntity(64U);
    msg.setDestination(45091U);
    msg.setDestinationEntity(251U);
    msg.origin.assign("CACNKBPEMBRWTZARRIRPKGZRSDMCQZDHCITRPRBUVUWYTLPHIUSTAKWSXUSHELHYPJMLBDOJZXNEKNOFLPFEZVFMBDDOOPXLKTZCQTNWBVMCXAMXFVUQWEGYISJCXZAHDOHZAMTSOWWSJJAGKWH");
    msg.htime = 0.814172119367;
    msg.lat = 0.852317981724;
    msg.lon = 0.129800679519;
    const char tmp_msg_0[] = {-48, -7, 16, 46, 89, 29, -39, 64, 105, 5, -10, 65, 102, 122, -93, 69, 70, 25, 5, -115, -44, 68, 81, -107, -78, -34, 32, -94, -97, -21, -34, -98, 22, -89, 42, -68, 15, 78, 84, -51, -55, 41, 15, 66, 22, 11, 48, -42, -57, -109, 49, -115, -128, 14, -54, 63, -115, 17, 36, -64, 69, 14, 34, 35, 52, 5, -60, -43};
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
    msg.setTimeStamp(0.596679217023);
    msg.setSource(46878U);
    msg.setSourceEntity(131U);
    msg.setDestination(32044U);
    msg.setDestinationEntity(100U);
    msg.req_id = 39794U;
    msg.ttl = 41614U;
    msg.destination.assign("LEAAGAUHOUETVFJUSCSYZFZ");
    const char tmp_msg_0[] = {115, 115, -53, -34, 95, -15, 44, 46, 93, 50, 1, 83, 79, 115, -32, 87, -82, 6, -49, 92, -32, -63, -104, 69, -70, 56, -90, -15, 126, -71, 57, 40, -104, 39, -114, -110, 62, 82, 51, 74, 104, -27, -66, -118, 56, -115, 107, 47, 11, -65, 104, -8, 77, -92, 57, -83, 114, -33, 93, -105, -14, 91, -38, -40, -85, -126, 93, -127, 58, 62, -74, 3, -76, -43, 78, 102, 118, 4, -126, -119, 50, -102, -26, 120, 68, 21, 115, 11, -72, 88, -119, -10, 65, -118, 7, 88, -62, -83, 64, -6, -80, 114, 31, -56, -66, -59};
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
    msg.setTimeStamp(0.992183334458);
    msg.setSource(25759U);
    msg.setSourceEntity(70U);
    msg.setDestination(48190U);
    msg.setDestinationEntity(242U);
    msg.req_id = 58319U;
    msg.ttl = 5392U;
    msg.destination.assign("LMNCIZYMHHXCURVUDBNUIRWCLEGOUORZRPGPCYAJSEAVZJHLNKGYVUXTRQNNZKUHACFJFRILIBZWVUMWOKZVXXKMMSSHTKWYCAYVWYJEZEKDDQBVLQORVGJRPFCLEOLTPIVDAOQDATBHIJECHSWDGUZXYINLHYMGGQBQJKVOWJTGYLGKMGBPFBWIATWOLUUEFAFNZJXHMXQPKKFNSMZCFRSAEQSDEFNXDSFBTPIQMDTNOJS");
    const char tmp_msg_0[] = {-67, 119, 29, 4, 112, 2, 17, 18, 100, -28, 9, 62, 66, -88, 80, -38, -57, 63, 57, 20, -46, 18, -56, 1, -32, 111, 0, 49, 99, 98, 35, -17, -69, 39, -64, 35, 45, 97, -93, 114, 92, -39, -60, 20, -120, -16, 126, -128, 114, 31, 24, -126, 28, -8, -32, 49, -123, 10, -64, 89, -94, -99, 72, 82, -60, -6, 35, 39, -69, 63, -65, -43, 4, 62, -101, 23, 96, -52, 17, 22, -112, 105, -54, 41, -38, 50, 122, 49, -102, -103, 125, 67, -124, -95, 34, -85, 0, -71, 103, -26, -126, -111, -76, -86, 71, -77, -60, -50, -126, 35, 57, -15, 78, -112, -2, 81, -43, -7, -91, 13, -94, -11, 31, -35, 12, -20, 23, 55, -39, 81, -63, -127, -11, 114, -35, -41, -9, 66, 39, 58, 69, 75, -64, 71, 34, -128, -121, 17, 90, -19, 125, -127, -4, 48, 42, 73, 68, 87, 72, 63, 1, -119, -88, 95, -128, 117, 12, -92, 108, -17, 89, 78, -106, 102, -36, -22};
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
    msg.setTimeStamp(0.756694056438);
    msg.setSource(38826U);
    msg.setSourceEntity(234U);
    msg.setDestination(32988U);
    msg.setDestinationEntity(40U);
    msg.req_id = 34349U;
    msg.ttl = 57267U;
    msg.destination.assign("NTRVTLZWUGISJAAGDMSSTITAYXAOUYEGJBTTNHPYAOUBGFBIIUSUZEJDQPLHHMNNSXIBD");
    const char tmp_msg_0[] = {-76, -84, 109, -114, -67, 33, 85, 62, -117, -82, 16, -10, 103, 23, -57, -94, 40, -92, -73, -18, -77, 2, 4, -64, -12, 76, 31, -99, 86, 84, -62, 45, 9, -69, -1, 112, -48};
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
    msg.setTimeStamp(0.661497596851);
    msg.setSource(53511U);
    msg.setSourceEntity(184U);
    msg.setDestination(2300U);
    msg.setDestinationEntity(226U);
    msg.req_id = 18584U;
    msg.status = 243U;
    msg.text.assign("ZYIYDRYVLJNDFWECZNQSQTQMBEVIUFKSPONFOBBGJXRCWOXDKLBJOAFFVPNRVZIQLTXANGNWKAMSNHRHPPOTLFIBBEZKPTUPLRZDECFXSEVBCQHIRHDLPYKUHKXAMCWXVXMUJSWEDMKMXADVGWCJLRBYNZOIS");

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
    msg.setTimeStamp(0.949421295845);
    msg.setSource(3588U);
    msg.setSourceEntity(53U);
    msg.setDestination(29389U);
    msg.setDestinationEntity(26U);
    msg.req_id = 65375U;
    msg.status = 208U;
    msg.text.assign("JUXDLZESBMCKOKAEXGTVUPOYQKTAAFRLVDLNROBQHPAZDKGHXYZYQBJUDJNQYMJBQTGLFOKINXKNEAEAJVDQFETCNSJRSMOGGYZVWNKEPIBZIPJRZXFZWWHMDLWCCRNICHKXFHPTAIRVWBGWSGLFIJADTLGLWCQFTNYV");

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
    msg.setTimeStamp(0.366107567528);
    msg.setSource(39096U);
    msg.setSourceEntity(219U);
    msg.setDestination(14314U);
    msg.setDestinationEntity(95U);
    msg.req_id = 31237U;
    msg.status = 244U;
    msg.text.assign("LFOCCHLONTKXGAFADEDVRETZHWRAWLJTUEOIWWGMTGBKQONFWZKVNABYEZAWYAQKRQPPYETQZZUIAJJLHRIL");

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
    msg.setTimeStamp(0.880253035708);
    msg.setSource(36196U);
    msg.setSourceEntity(180U);
    msg.setDestination(31272U);
    msg.setDestinationEntity(78U);
    msg.group_name.assign("AGUVPYSYNMFPPLIVCDTCBLAWSVZVHKRDOUOXJDENOWWJMAHINASKRQQIJECPBPKTYMZDGUEKXQPDSIISCJXGMUHZWKMNTMNSNWVLNHEMWBFJAORYTHOCFUHBIOPZEUKLSFNRUIFUFHLAYVJQPRQ");
    msg.links = 612664483U;

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
    msg.setTimeStamp(0.381623113247);
    msg.setSource(37407U);
    msg.setSourceEntity(23U);
    msg.setDestination(3748U);
    msg.setDestinationEntity(240U);
    msg.group_name.assign("RASFVYCZOZHWWYRNVLDJDHQNUKRYZHRNOBGUSIFVJBGSJTMSMXADXBERIZAWBGNRNKQUVLZPPXIUDVKQTDNOLMMEZSLPIVONSZLOSPMWIGQYPPXEHWNIPJOPCDDUHVGLYTOZJGOKBGCVYXYNHYOGAWJKAZWUO");
    msg.links = 3778607298U;

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
    msg.setTimeStamp(0.467170458596);
    msg.setSource(4731U);
    msg.setSourceEntity(167U);
    msg.setDestination(7881U);
    msg.setDestinationEntity(35U);
    msg.group_name.assign("MJHXDVBSOHIKUZXNDNEPXGEPPKNIAGOAECXSPOCUZQVOMEMWLUJGRZPLJGTTJEKSINJHTFFUVQWTOVDYZBJYHRKGOIRFWVCDVHBCZYZRFJBERPKNSQQFHWW");
    msg.links = 1291360888U;

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
    msg.setTimeStamp(0.585956305859);
    msg.setSource(2264U);
    msg.setSourceEntity(2U);
    msg.setDestination(16030U);
    msg.setDestinationEntity(75U);
    msg.groupname.assign("QCHTUWMURDLSTZAMZVHGVGSZWLOROYGEPOEXAAXWSWJIHVEOIEJFWXSSIEEDIZZNPRCXFED");
    msg.action = 16U;
    msg.grouplist.assign("LFKZUWPKDSHLXYCIZITCQZIBUBKEVFHPRRJEANQOPJHIWSUJPPBRVZSAXQYMRSSMMGQFGTEOXVQQMDEUGONWKAHNYQJINZJTIDVUKIGTBJLMERGXTFSVPKFOKUUESBAIXTFFYVPRXDVH");

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
    msg.setTimeStamp(0.358088878252);
    msg.setSource(63648U);
    msg.setSourceEntity(85U);
    msg.setDestination(236U);
    msg.setDestinationEntity(214U);
    msg.groupname.assign("SOCRUIDNGRATCYUKQPSSERAHUVAZPIUYFSOFGVSWBPWZAVVGKFRLMDUDBRVYBQXMHWJQGSFWLZHUVAGTWKFFPESGTXGISFEBDBBEMONKCIDXRLECHKNPLOYJOCIBWCAHFRUYOMCYBCZLUZXE");
    msg.action = 135U;
    msg.grouplist.assign("RNRMRNFVACVSUTPEVEVAYLNAQRIUSPDHWZCTQSRRXFUAQWPMKACPHKYHZLCHJRFPQGDVMETMTPBGQVURKOMZQODN");

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
    msg.setTimeStamp(0.551417761989);
    msg.setSource(39393U);
    msg.setSourceEntity(185U);
    msg.setDestination(6211U);
    msg.setDestinationEntity(188U);
    msg.groupname.assign("UYBSERBPKQBQAWLAXDPJZZDSNLCVMLSHLWRIKEGVXLMCGYVTYHQJKIOEZJPNXTGMEDCFLQNCIAPROWEBTDFLYVHIUKOPDHSWSZAPBQNMURYZQQKTTVTIMAOWLSBWWFYNIIJYABMSJEKPRFTFNXGWCJVMYBQLJZEQZQKORSDUZMGCWROMFXGCAXHJVJUZDHUDXSNNHHOKURPVDITGHORKEFYCFFAPBPEADGVAK");
    msg.action = 114U;
    msg.grouplist.assign("MIGEHMHUFAJOQHOPLXBTHOBIKVPYHTHNXRTPZMIDCWLUEOPBNLIKJJRCQKJFFEYQGNKCTGEZCXJCGKWMGQXKBVUYDIKZWLUJP");

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
    msg.setTimeStamp(0.147806486375);
    msg.setSource(58204U);
    msg.setSourceEntity(114U);
    msg.setDestination(64349U);
    msg.setDestinationEntity(246U);
    msg.value = 0.678011429433;
    msg.sys_src = 11874U;

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
    msg.setTimeStamp(0.219073057014);
    msg.setSource(61701U);
    msg.setSourceEntity(217U);
    msg.setDestination(51698U);
    msg.setDestinationEntity(124U);
    msg.value = 0.373634718963;
    msg.sys_src = 52579U;

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
    msg.setTimeStamp(0.17384577294);
    msg.setSource(10229U);
    msg.setSourceEntity(201U);
    msg.setDestination(12918U);
    msg.setDestinationEntity(122U);
    msg.value = 0.658809671101;
    msg.sys_src = 20004U;

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
    msg.setTimeStamp(0.865691473771);
    msg.setSource(45402U);
    msg.setSourceEntity(78U);
    msg.setDestination(58337U);
    msg.setDestinationEntity(210U);
    msg.value = 0.478081605007;
    msg.units = 162U;

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
    msg.setTimeStamp(0.255290197949);
    msg.setSource(63994U);
    msg.setSourceEntity(249U);
    msg.setDestination(12822U);
    msg.setDestinationEntity(170U);
    msg.value = 0.629548821751;
    msg.units = 82U;

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
    msg.setTimeStamp(0.987301718559);
    msg.setSource(24504U);
    msg.setSourceEntity(23U);
    msg.setDestination(58000U);
    msg.setDestinationEntity(57U);
    msg.value = 0.555612127991;
    msg.units = 228U;

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
    msg.setTimeStamp(0.0398187843769);
    msg.setSource(55909U);
    msg.setSourceEntity(197U);
    msg.setDestination(16251U);
    msg.setDestinationEntity(201U);
    msg.base_lat = 0.838056323462;
    msg.base_lon = 0.709178379354;
    msg.base_time = 0.811469668586;
    IMC::HistoricSample tmp_msg_0;
    tmp_msg_0.sys_id = 9U;
    tmp_msg_0.priority = -76;
    tmp_msg_0.x = 6173;
    tmp_msg_0.y = 24331;
    tmp_msg_0.z = 20754;
    tmp_msg_0.t = 10478;
    IMC::HistoricEvent tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.text.assign("EZGZEKOJLQTOTOCIVKHZYSWJDMCXLLQPUFBQASNEPZIIPRHUSMOGBWZLKJUYWZHRQMBKEDGFFAOCMHGTCPLB");
    tmp_tmp_msg_0_0.type = 51U;
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
    msg.setTimeStamp(0.549390640948);
    msg.setSource(20168U);
    msg.setSourceEntity(170U);
    msg.setDestination(33219U);
    msg.setDestinationEntity(239U);
    msg.base_lat = 0.669661483029;
    msg.base_lon = 0.405311755887;
    msg.base_time = 0.0738485555491;

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
    msg.setTimeStamp(0.911119995057);
    msg.setSource(37412U);
    msg.setSourceEntity(58U);
    msg.setDestination(2732U);
    msg.setDestinationEntity(78U);
    msg.base_lat = 0.404959131552;
    msg.base_lon = 0.849384455891;
    msg.base_time = 0.947797138236;
    IMC::RemoteCommand tmp_msg_0;
    tmp_msg_0.original_source = 9427U;
    tmp_msg_0.destination = 16043U;
    tmp_msg_0.timeout = 0.724609203436;
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("BXEOBPPIFOJYKQEWHWSTIDZOBXVKJGXTFXIHXPFHHLSYEXEFFPRLFVHWCNEZMCIPTQBCFAALZRUEQTUBKKFNMOJCSZC");
    IMC::Sample tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.timeout = 43064U;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.0887140941358;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.207801568113;
    tmp_tmp_tmp_msg_0_0_0.z = 0.235031916094;
    tmp_tmp_tmp_msg_0_0_0.z_units = 6U;
    tmp_tmp_tmp_msg_0_0_0.speed = 0.271950639273;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 25U;
    tmp_tmp_tmp_msg_0_0_0.syringe0 = 22U;
    tmp_tmp_tmp_msg_0_0_0.syringe1 = 126U;
    tmp_tmp_tmp_msg_0_0_0.syringe2 = 125U;
    tmp_tmp_tmp_msg_0_0_0.custom.assign("DGYEVGUEBMJSJUQFZFMXNPSZMRVHGNPAYUOMHIEWOYGDZQPJADTBTTHMONWAJQZHJ");
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    IMC::RestartSystem tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.type = 139U;
    tmp_tmp_msg_0_0.start_actions.push_back(tmp_tmp_tmp_msg_0_0_1);
    IMC::Temperature tmp_tmp_tmp_msg_0_0_2;
    tmp_tmp_tmp_msg_0_0_2.value = 0.905748684446;
    tmp_tmp_msg_0_0.end_actions.push_back(tmp_tmp_tmp_msg_0_0_2);
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
    msg.setTimeStamp(0.0178359699249);
    msg.setSource(56328U);
    msg.setSourceEntity(116U);
    msg.setDestination(53169U);
    msg.setDestinationEntity(227U);
    msg.base_lat = 0.742799188385;
    msg.base_lon = 0.148336990653;
    msg.base_time = 0.767888564072;
    const char tmp_msg_0[] = {51, 32, -50, 119, 102, 48, -44, 109, -128, 119, -101, -107, -97, -1, 42, -45, 112, -121, 8, 48, -128, -70, 102, -79, -17, 50, -82, -101, 64, -15, 42, 79, 78, -14, -34, -125, -60, 99, 28, -102, 21, -112, 44, -7, 12};
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
    msg.setTimeStamp(0.0183257480935);
    msg.setSource(5348U);
    msg.setSourceEntity(133U);
    msg.setDestination(34036U);
    msg.setDestinationEntity(22U);
    msg.base_lat = 0.530757469371;
    msg.base_lon = 0.672861024061;
    msg.base_time = 0.852222837733;
    const char tmp_msg_0[] = {-85, -84, 5, -95, 44, 10, 88, -61, 98, 122, -23, 41, -125, -124, 2, -76, -6, 50, 57, -49, 53, -53, -117, -100, 48, -1, -117, 27, -55, -73, -94, 87, -107, -88, -114, -39, -27, -24};
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
    msg.setTimeStamp(0.251308883704);
    msg.setSource(57842U);
    msg.setSourceEntity(189U);
    msg.setDestination(62772U);
    msg.setDestinationEntity(71U);
    msg.base_lat = 0.313362202409;
    msg.base_lon = 0.735358213894;
    msg.base_time = 0.962511559868;
    const char tmp_msg_0[] = {-116, -70, 36, 43, -123, -105, 8, 56, 14, -41, 97, 68, 13, -38, 30, 119, 27, -54, 19, 91, 1, -76, 69, 15, 93, 104, -116, 50, 18, -35, 50, -60, -97, -63, -105, -118, 124, 97, -116, -1, -50, -13, 76, 36, -34, 107, -29, -97, 49, -70, -47, 26, -61, 81, -91, -91, -60, -3, -80, -100, 50, 54, 102, 10, -78, 122, 103, -92, -67, 71, 21, -98, 57, 68, 111, -47, 76, 29, 59, 11, 107, -43, -2, -17, 107, -29, 78, -93, 90, 119, 73, 88, 115, -15, -13, 114, -10, 30, -92, 49};
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
    msg.setTimeStamp(0.944066858976);
    msg.setSource(50507U);
    msg.setSourceEntity(208U);
    msg.setDestination(33741U);
    msg.setDestinationEntity(123U);
    msg.sys_id = 51389U;
    msg.priority = -111;
    msg.x = 18170;
    msg.y = -12824;
    msg.z = 16765;
    msg.t = -17192;
    IMC::RowsCoverage tmp_msg_0;
    tmp_msg_0.lat = 0.643165162975;
    tmp_msg_0.lon = 0.194176356249;
    tmp_msg_0.z = 0.624205424036;
    tmp_msg_0.z_units = 95U;
    tmp_msg_0.speed = 0.940585183083;
    tmp_msg_0.speed_units = 95U;
    tmp_msg_0.bearing = 0.932454485525;
    tmp_msg_0.cross_angle = 0.706951231452;
    tmp_msg_0.width = 0.970560607926;
    tmp_msg_0.length = 0.57989966035;
    tmp_msg_0.coff = 188U;
    tmp_msg_0.angaperture = 0.556565703823;
    tmp_msg_0.range = 38750U;
    tmp_msg_0.overlap = 206U;
    tmp_msg_0.flags = 39U;
    tmp_msg_0.custom.assign("BTGEGEDXHZOQKLZRSKGNJLEFBBWMPPWHBNCTUBMLRJJPZKFPAYKIVWO");
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
    msg.setTimeStamp(0.703427941988);
    msg.setSource(39086U);
    msg.setSourceEntity(68U);
    msg.setDestination(8534U);
    msg.setDestinationEntity(164U);
    msg.sys_id = 2614U;
    msg.priority = 78;
    msg.x = -31362;
    msg.y = -9998;
    msg.z = 25813;
    msg.t = 24346;
    IMC::FormationEvaluation tmp_msg_0;
    tmp_msg_0.type = 123U;
    tmp_msg_0.op = 111U;
    tmp_msg_0.err_mean = 0.896476291744;
    tmp_msg_0.dist_min_abs = 0.746624654644;
    tmp_msg_0.dist_min_mean = 0.515235051537;
    tmp_msg_0.roll_rate_mean = 0.462003432825;
    tmp_msg_0.time = 0.182597854219;
    IMC::FormationControlParams tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.action = 3U;
    tmp_tmp_msg_0_0.lon_gain = 0.544075461705;
    tmp_tmp_msg_0_0.lat_gain = 0.797455879314;
    tmp_tmp_msg_0_0.bond_thick = 0.709972209348;
    tmp_tmp_msg_0_0.lead_gain = 0.418789828552;
    tmp_tmp_msg_0_0.deconfl_gain = 0.230272854875;
    tmp_tmp_msg_0_0.accel_switch_gain = 0.477704779419;
    tmp_tmp_msg_0_0.safe_dist = 0.845150371114;
    tmp_tmp_msg_0_0.deconflict_offset = 0.381546624775;
    tmp_tmp_msg_0_0.accel_safe_margin = 0.831770575809;
    tmp_tmp_msg_0_0.accel_lim_x = 0.108331587788;
    tmp_msg_0.controlparams.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.24872719635);
    msg.setSource(20339U);
    msg.setSourceEntity(86U);
    msg.setDestination(6572U);
    msg.setDestinationEntity(234U);
    msg.sys_id = 41211U;
    msg.priority = 108;
    msg.x = -30980;
    msg.y = 604;
    msg.z = 25989;
    msg.t = -28037;
    IMC::VerticalProfile tmp_msg_0;
    tmp_msg_0.parameter = 75U;
    tmp_msg_0.numsamples = 70U;
    IMC::ProfileSample tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.depth = 28736U;
    tmp_tmp_msg_0_0.avg = 0.668391206084;
    tmp_msg_0.samples.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.lat = 0.207171796506;
    tmp_msg_0.lon = 0.57457286188;
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
    msg.setTimeStamp(0.887639600784);
    msg.setSource(30263U);
    msg.setSourceEntity(43U);
    msg.setDestination(48452U);
    msg.setDestinationEntity(190U);
    msg.req_id = 54180U;
    msg.type = 119U;
    msg.max_size = 45359U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.48681590976;
    tmp_msg_0.base_lon = 0.249077717927;
    tmp_msg_0.base_time = 0.0657638731588;
    IMC::HistoricSample tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.sys_id = 18735U;
    tmp_tmp_msg_0_0.priority = -86;
    tmp_tmp_msg_0_0.x = -7769;
    tmp_tmp_msg_0_0.y = 13837;
    tmp_tmp_msg_0_0.z = 30509;
    tmp_tmp_msg_0_0.t = 32351;
    IMC::QueryPowerChannelState tmp_tmp_tmp_msg_0_0_0;
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
    msg.setTimeStamp(0.564956018229);
    msg.setSource(7750U);
    msg.setSourceEntity(77U);
    msg.setDestination(28887U);
    msg.setDestinationEntity(84U);
    msg.req_id = 2506U;
    msg.type = 19U;
    msg.max_size = 21656U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.275309596152;
    tmp_msg_0.base_lon = 0.639575525719;
    tmp_msg_0.base_time = 0.948707711496;
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
    msg.setTimeStamp(0.25941098308);
    msg.setSource(14680U);
    msg.setSourceEntity(75U);
    msg.setDestination(24782U);
    msg.setDestinationEntity(147U);
    msg.req_id = 48699U;
    msg.type = 101U;
    msg.max_size = 24054U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.41042243847;
    tmp_msg_0.base_lon = 0.751099023807;
    tmp_msg_0.base_time = 0.271035843402;
    IMC::RemoteCommand tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.original_source = 52791U;
    tmp_tmp_msg_0_0.destination = 61072U;
    tmp_tmp_msg_0_0.timeout = 0.362928155247;
    IMC::IoEvent tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.type = 56U;
    tmp_tmp_tmp_msg_0_0_0.error.assign("MRAPOUQJKIFFYLZKPOGTAVLJGLXZHFUQGJKHOGXFLLSAHBTIEHSTPWHRNQYZELTSSZUOCBMTWYPHWYKJMWVCUSATKFQTUPNAVPFIIFUXUGXGLWZERFQRCBIWGUKIRBQTONXRXUS");
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
    msg.setTimeStamp(0.538057059742);
    msg.setSource(51439U);
    msg.setSourceEntity(0U);
    msg.setDestination(56427U);
    msg.setDestinationEntity(43U);
    msg.original_source = 42624U;
    msg.destination = 20223U;
    msg.timeout = 0.882582640258;
    IMC::SetLedBrightness tmp_msg_0;
    tmp_msg_0.name.assign("ALVKXJERFWOGBHTRRVWOCJXTKMVIINFEEGFLSGHDFYQUFWHBNXENNSCUNTKFPOCUHBZYZIPJNRLXGVOQQDXQVHIDSVWTTWBSXNKVYBWDMLQJZJAETKWBMWPJDBRKPKBJAPOOMNVBYQICSFLDJAC");
    tmp_msg_0.value = 108U;
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
    msg.setTimeStamp(0.195478940433);
    msg.setSource(47126U);
    msg.setSourceEntity(159U);
    msg.setDestination(61079U);
    msg.setDestinationEntity(160U);
    msg.original_source = 49772U;
    msg.destination = 46464U;
    msg.timeout = 0.888283361118;
    IMC::RestartSystem tmp_msg_0;
    tmp_msg_0.type = 148U;
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
    msg.setTimeStamp(0.992146960331);
    msg.setSource(10975U);
    msg.setSourceEntity(187U);
    msg.setDestination(56439U);
    msg.setDestinationEntity(197U);
    msg.original_source = 37681U;
    msg.destination = 59506U;
    msg.timeout = 0.415265708742;
    IMC::FineOil tmp_msg_0;
    tmp_msg_0.value = 0.0240782922068;
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
    msg.setTimeStamp(0.143629261787);
    msg.setSource(48645U);
    msg.setSourceEntity(67U);
    msg.setDestination(53745U);
    msg.setDestinationEntity(233U);
    msg.type = 118U;
    msg.comm_interface = 42212U;
    msg.model = 38529U;
    msg.list.assign("WHKHFYTBIVVDSKEVKEPIGJBOFADWGCNPNJWSNKUTTLMKEDN");

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
    msg.setTimeStamp(0.516068235899);
    msg.setSource(49349U);
    msg.setSourceEntity(238U);
    msg.setDestination(54733U);
    msg.setDestinationEntity(130U);
    msg.type = 21U;
    msg.comm_interface = 30856U;
    msg.model = 35941U;
    msg.list.assign("ZQDNZNRZONNWJA");

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
    msg.setTimeStamp(0.30046770851);
    msg.setSource(28148U);
    msg.setSourceEntity(121U);
    msg.setDestination(11921U);
    msg.setDestinationEntity(70U);
    msg.type = 203U;
    msg.comm_interface = 35857U;
    msg.model = 8295U;
    msg.list.assign("GMNFFXMIGQYUQ");

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
    msg.setTimeStamp(0.147338381498);
    msg.setSource(5367U);
    msg.setSourceEntity(251U);
    msg.setDestination(59314U);
    msg.setDestinationEntity(11U);
    msg.type = 235U;
    msg.req_id = 802872566U;
    msg.ttl = 51250U;
    msg.code = 6U;
    msg.destination.assign("JWSZZXQDINGSPCKRWQUNPOAMBLAXMGIFMUOKDVJRSSUBSHIFBRTDHPCNABCAC");
    msg.source.assign("IBYFDVCXTKSXYVBVYWHPQXSHQLMACXBILGSXJZRFSTM");
    msg.acknowledge = 192U;
    msg.status = 0U;
    const char tmp_msg_0[] = {-67, -54, -110, 30, -96, -109, 101, -52, 61, -29, -78, 101, -65, -101, -106, 107, -54, 70, 64, -79, 105, -50, -92, -124, 79, 123, -108, 14, -4, -18, 42, 29, 71, -88, 55, -59, 52, 75, 46, 72, -92, -64, -47, 108, 48, -39, -29, -59, 75, 83, 15, 56, 72, 97, -36, 81, -63, -97, 126, -62, -80, 81, -42, -44, 85, -65, 119, 9, 2, 13, -27, 113, 23, 62, -16, 8, -17, 43, 74, 102, 67, -89, -26, 4, 72, -124, 33, 39, -26, 39, -3, -56, -48, -98, -106, -125, -26, -82, -24, 100, -128, -82, 13, 123, 80, 47, -98, 117, -114, -120, 119, -36, 41, -41, -75, -68, 111, -97, -104, 34, 53, 55, 97, -24, -55, 29, -48, -104, -108, -116, 12, 35, 69, -74, -78, -49, 42, 112, 123, -1, -35, 10, 47, 110, 65, 0, 106, 99, -23, -105, 38, 98, 113, -79, -110, 71, 16, 51, -15};
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
    msg.setTimeStamp(0.80436663651);
    msg.setSource(24835U);
    msg.setSourceEntity(70U);
    msg.setDestination(46288U);
    msg.setDestinationEntity(230U);
    msg.type = 144U;
    msg.req_id = 79517977U;
    msg.ttl = 20234U;
    msg.code = 245U;
    msg.destination.assign("AQPCLTJLOCJBTDYWHIZCIQFZFSSHHWIHWVQCYAUFDEZPTIUM");
    msg.source.assign("JXGRUQTVVBJVPXMWWPRBOXZEVPNBJYCJLZPYBSCGTQOITS");
    msg.acknowledge = 31U;
    msg.status = 240U;
    const char tmp_msg_0[] = {-65, 115, -38, 42, -125, -3, 51, 121, -18, -50, -112, 92, 10, -101, -109, 67, 41, -13, -73, 59, 40, -115, 49, -78, 45, -3, 16, 44, 62, 17, -42, -75, -106, -101, -97, -52, -36, -81, -69, 16, -51, 121, -118, -110, 82, -25, 48, 94, 106, 38, 109, -83, -71, -124, 88, 33, 35, 72, -110, -44, -19, 41, -118, 119, -21, -70, -97, 33, -64, -38, -86, -81, -93, 105, 74, 23, 108, 125, 13, -105, -57, 20, 62, 76, 30, -29, -115, 52, 77};
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
    msg.setTimeStamp(0.033707930366);
    msg.setSource(10472U);
    msg.setSourceEntity(110U);
    msg.setDestination(9662U);
    msg.setDestinationEntity(49U);
    msg.type = 253U;
    msg.req_id = 2677121287U;
    msg.ttl = 13562U;
    msg.code = 35U;
    msg.destination.assign("UBGRLFTLYAMOVBJYENK");
    msg.source.assign("GUTSAMPPTBIWSIOGLUVQKBOB");
    msg.acknowledge = 4U;
    msg.status = 53U;
    const char tmp_msg_0[] = {-115, 73, 50, -75, -54, -5, -5, 7, -31, 14, 31, 37, -62, -16, -25, -12, 55, 97, 108, 56, -53, -88, 46, 85, -13, -58, -42, -47, 3, -50, -126, -38, 38, -33, -98, -119, -41, -2, -55, 14, -110, -106, 73, -13, -14, 81, -97, 52, -61, -102, -40, -44, 100, 82, 34, -114, -111, 43, 59, 36, 104, -30, -99, 105, -68, 86, 50, -10, 82, -55, 32, -111, -120, 37, 125, 81};
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
    msg.setTimeStamp(0.0131395371436);
    msg.setSource(45420U);
    msg.setSourceEntity(53U);
    msg.setDestination(58901U);
    msg.setDestinationEntity(134U);
    msg.id = 100U;
    msg.range = 0.577351179909;

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
    msg.setTimeStamp(0.185323170322);
    msg.setSource(10586U);
    msg.setSourceEntity(235U);
    msg.setDestination(22210U);
    msg.setDestinationEntity(195U);
    msg.id = 148U;
    msg.range = 0.626034233088;

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
    msg.setTimeStamp(0.210573474323);
    msg.setSource(47709U);
    msg.setSourceEntity(3U);
    msg.setDestination(19298U);
    msg.setDestinationEntity(225U);
    msg.id = 168U;
    msg.range = 0.369637059363;

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
    msg.setTimeStamp(0.980310080888);
    msg.setSource(24126U);
    msg.setSourceEntity(116U);
    msg.setDestination(33684U);
    msg.setDestinationEntity(241U);
    msg.beacon.assign("PEULMVOFOGSTCAKZBCCZTAEMYWOEBMZEQDGWFHXSHPGSYLAUXGXVMNPRTJNLMLJIRLKFUAVVAMOEGJIGMBSRDLPLJRXVVYMCPB");
    msg.lat = 0.400079555509;
    msg.lon = 0.837504105277;
    msg.depth = 0.812257329551;
    msg.query_channel = 200U;
    msg.reply_channel = 239U;
    msg.transponder_delay = 174U;

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
    msg.setTimeStamp(0.911039436743);
    msg.setSource(46396U);
    msg.setSourceEntity(195U);
    msg.setDestination(22929U);
    msg.setDestinationEntity(215U);
    msg.beacon.assign("WXESBABRZYLLGFVCZNKKRPPXEZJHMONMYHCCCDVWVHKLKTZEFZIMWSJAXQOSONRWGITYNOFQSYCTGQBXYDQREEBWSVMMQIMYPSIUCJOAMSADDVVBBJRJZITNWTJHLGOSAOEELFCWNWBPYXAZPLWPFBMONZCVNYGUFJUQSQOUKNFDYKDIUDXEAUPOXVGTGLRXTSPQXRVURDXEFYHHIEPZAUQAGTJAHJIFTZKHRTKB");
    msg.lat = 0.756304863974;
    msg.lon = 0.601459381618;
    msg.depth = 0.101738184941;
    msg.query_channel = 3U;
    msg.reply_channel = 246U;
    msg.transponder_delay = 142U;

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
    msg.setTimeStamp(0.63425059393);
    msg.setSource(63597U);
    msg.setSourceEntity(62U);
    msg.setDestination(37339U);
    msg.setDestinationEntity(199U);
    msg.beacon.assign("ILYHGWMYMNDCMNFRRECITXGDHIIHLRGYESNTHEDP");
    msg.lat = 0.729721992789;
    msg.lon = 0.531361615343;
    msg.depth = 0.70851936352;
    msg.query_channel = 175U;
    msg.reply_channel = 56U;
    msg.transponder_delay = 152U;

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
    msg.setTimeStamp(0.904170945102);
    msg.setSource(5908U);
    msg.setSourceEntity(191U);
    msg.setDestination(3309U);
    msg.setDestinationEntity(249U);
    msg.op = 90U;

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
    msg.setTimeStamp(0.987426241766);
    msg.setSource(6822U);
    msg.setSourceEntity(56U);
    msg.setDestination(3021U);
    msg.setDestinationEntity(50U);
    msg.op = 234U;

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
    msg.setTimeStamp(0.865659089651);
    msg.setSource(16231U);
    msg.setSourceEntity(8U);
    msg.setDestination(33974U);
    msg.setDestinationEntity(128U);
    msg.op = 91U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("TWBXCIOYMXGWOOAZXKQJZOPDQYJVPFJISYYMZWWOSWVGIGTRRGJNMZXPDIUOOQBYUVTRIXHRFWMMGBRLYCDTQLZKMZOAZHDMUVDFKAVLKQRKALATHWI");
    tmp_msg_0.lat = 0.657295909274;
    tmp_msg_0.lon = 0.979577813564;
    tmp_msg_0.depth = 0.348043935377;
    tmp_msg_0.query_channel = 239U;
    tmp_msg_0.reply_channel = 197U;
    tmp_msg_0.transponder_delay = 252U;
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
    msg.setTimeStamp(0.137549069359);
    msg.setSource(35580U);
    msg.setSourceEntity(117U);
    msg.setDestination(10960U);
    msg.setDestinationEntity(166U);
    IMC::AcousticStatus tmp_msg_0;
    tmp_msg_0.req_id = 47213U;
    tmp_msg_0.type = 173U;
    tmp_msg_0.status = 98U;
    tmp_msg_0.info.assign("SFKMDURDWKMPYAAMSNVKOCVOGYKHCPWLONBHMJCCPRHVTQOJMMJOABGWLFYMNJWCBXGPBEIAVVDEDONTHZTYVFRITEMJZEYIVRQRGLSWUAZQLRDQOHDEJXPSVRZJWNLPIUEHKCWZARQFKZBTVZFWLZJZINXYFWCJXPDXQXCALHNXASKUMSNAQWUJOSATGFRGTGGELINPQFYBIB");
    tmp_msg_0.range = 0.521796483876;
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
    msg.setTimeStamp(0.570943833165);
    msg.setSource(51208U);
    msg.setSourceEntity(242U);
    msg.setDestination(42102U);
    msg.setDestinationEntity(156U);
    IMC::ReplayControl tmp_msg_0;
    tmp_msg_0.op = 71U;
    tmp_msg_0.file.assign("OSKQRFXTFWLPCUYRABKYINTSKWKHJKMJQEPQ");
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
    msg.setTimeStamp(0.0997128898177);
    msg.setSource(13724U);
    msg.setSourceEntity(101U);
    msg.setDestination(9908U);
    msg.setDestinationEntity(241U);
    IMC::RowsCoverage tmp_msg_0;
    tmp_msg_0.lat = 0.556989164687;
    tmp_msg_0.lon = 0.00611364387633;
    tmp_msg_0.z = 0.233447493848;
    tmp_msg_0.z_units = 74U;
    tmp_msg_0.speed = 0.853291773942;
    tmp_msg_0.speed_units = 47U;
    tmp_msg_0.bearing = 0.852236661425;
    tmp_msg_0.cross_angle = 0.59224262919;
    tmp_msg_0.width = 0.236789735098;
    tmp_msg_0.length = 0.378924670845;
    tmp_msg_0.coff = 15U;
    tmp_msg_0.angaperture = 0.0735560279735;
    tmp_msg_0.range = 51586U;
    tmp_msg_0.overlap = 225U;
    tmp_msg_0.flags = 83U;
    tmp_msg_0.custom.assign("XIRWIXDSVXLUPRUEYHVELTWSJLPHOZCXGPYPDDOKOVIWBEVAFCIZZRTZ");
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
    msg.setTimeStamp(0.189219367779);
    msg.setSource(51410U);
    msg.setSourceEntity(72U);
    msg.setDestination(20018U);
    msg.setDestinationEntity(181U);
    msg.op = 76U;
    msg.system.assign("FPISHETCJNGPGPMVJMHBAGMFWRQNVSFSIAJUCPQPFCNPUDNKDFPDIQSTFNRHEBUVYVIHEYUWRNPRYCNX");
    msg.range = 0.755137640777;
    IMC::IridiumTxStatus tmp_msg_0;
    tmp_msg_0.req_id = 36890U;
    tmp_msg_0.status = 173U;
    tmp_msg_0.text.assign("GGHZVBBBTJJYXKXEVZGDJLPZMYCTZISDWHXRQUAYNKVSRIXAFMAPSIAGDAQEWFABKGSDFEYYZFNVQAWKMFLSZJMTXDZOLLEHQPWEBTBEJCROSSDICRZECNLNC");
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
    msg.setTimeStamp(0.155866865409);
    msg.setSource(50436U);
    msg.setSourceEntity(203U);
    msg.setDestination(6050U);
    msg.setDestinationEntity(254U);
    msg.op = 160U;
    msg.system.assign("YAHSAMQLVDVZCORGJOPAHCQEGZIFNODRGQSQAFYAPIHXQWVSHKMXCXSTDUKLWCNGMYVZHQLNKRBLYNZYRBEJXDXCNHIVPLTTJMJHZSODFVTFOFDKPLAE");
    msg.range = 0.101188070476;
    IMC::PlanGeneration tmp_msg_0;
    tmp_msg_0.cmd = 45U;
    tmp_msg_0.op = 107U;
    tmp_msg_0.plan_id.assign("OTLFIVRMYKMCCLMEARGDNONIBZAAWPXASXFTEUTRHHHYOPNVKVBMBBDSXJCPTOKYPQKGOUISJKUCVRUGENWMWPVHFCIQSASZDEWVMFIZQHDLOMXYQJGSSVRHQEGIEAXTF");
    tmp_msg_0.params.assign("CTLMDKUSZVMZPCJFAGUOENTFVGMJIRQFXSBEDSIMIRPTKPIQVYJGDHVPLCZXBWLZVTLYFFNWGQDYCWUGLYPGAEPXJWUUGJJHFYQBCKZKILPUEQOULUSRJLBWTXRRNHERYRYSOMJYMXWIOBBNZMDUKNNIQYLVDGZQTFCKTLXOWREUKCMOWEHVQGSACSPIJHAGIHFRMASNCBXONKQOJHTSSNKBKEXWRZQCZWADITVOHEBAPXOXHTZVADYFVAAB");
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
    msg.setTimeStamp(0.0320768336902);
    msg.setSource(20005U);
    msg.setSourceEntity(247U);
    msg.setDestination(41925U);
    msg.setDestinationEntity(31U);
    msg.op = 230U;
    msg.system.assign("QOKDUJFAXRSGVURPNXPQWOSYHTKFSAGLOJXDOLDEZZRYFYPJTPBTYJACAGWWOKAJNLQZHNGVNBSGUICIYUJOHQAMLAKHITQDHFIHOQKEXGFAUTJWLSKVVLHCZVLWBBTUEEKXCQCAMKISIKEEPCJZBKYTDCDXXRRIPGLLNMZTUDPMVYXEDUNSWVXBHOZWMNSZFSXEEBNNPWPFTZCQBIYYAFYMGJBTFQDMRWLJCSUWV");
    msg.range = 0.367751004155;
    IMC::IridiumMsgRx tmp_msg_0;
    tmp_msg_0.origin.assign("YVGSPQFXCCSAOATVRCBHUBPOZTMNDCVHGTQHTRAUMUUTNVMCPKYJXWJEDQEBVZIKPWSQISSOGTNOIJKHDKLAUREFAVXIZJGRSRAXLWDHLXLHIUOJDPMYHTB");
    tmp_msg_0.htime = 0.44821604088;
    tmp_msg_0.lat = 0.18067033769;
    tmp_msg_0.lon = 0.0715295345249;
    const char tmp_tmp_msg_0_0[] = {119, -86, -10, 82, 10, -79, -110, -95, -35, -107, 32, -62, 19, -15, 126, 122, -113, -39, 52, 7, -68, 86, -91, -118, 67, -7, -23, -3, 58, -97, -25, 27, 83, -67, -32, 84, 34, -30, -102, 89, 42, -12, 116, 62, -124, 65, 94, -114, 49, -32, -26, 21, 58, -102, 42, -24, 73, 107, 115, -23, -16, 1, -50, 40, -81, -107, 84, 85, 12, 61, -68, 80, 11, 74, 73, 42, 62, 21, -49, 3, 108, 100, -41, -34, -83, 53, -65, 90, 121, 13, -80, -67, 46, 0, -40, -88, 58, 104, 61, 9, -108, -123, 52, -18, -33, -37, 36, -40, -7, 95, 31, 110, -22, -47, -48, 119, -57, 91, 45, -124, 13, -124, -120, -58};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.133778933052);
    msg.setSource(44564U);
    msg.setSourceEntity(22U);
    msg.setDestination(46511U);
    msg.setDestinationEntity(21U);

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
    msg.setTimeStamp(0.115488241915);
    msg.setSource(64285U);
    msg.setSourceEntity(195U);
    msg.setDestination(22837U);
    msg.setDestinationEntity(137U);

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
    msg.setTimeStamp(0.143560949151);
    msg.setSource(39992U);
    msg.setSourceEntity(230U);
    msg.setDestination(5639U);
    msg.setDestinationEntity(126U);

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
    msg.setTimeStamp(0.479151303353);
    msg.setSource(35487U);
    msg.setSourceEntity(189U);
    msg.setDestination(23453U);
    msg.setDestinationEntity(18U);
    msg.list.assign("QHQJESUQMLTRCJHUXLRMVONHYPUTZGXVMRVHGQXZRJPBJCBWIVJAFDZPOUCYRBOGSFMKPDQYFNNLINCVPKTHYKNIEPTTHBRUIYCUIXFNRUAZKPIZMSXTMEMOKKVWSUFZNNWKHWMOZOGWBFFERNYWQJJCVAJTFCLSPRLDIALOFDCDOJWHVKNGVZDTGRSXYLTIADQAQKSPQBXMV");

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
    msg.setTimeStamp(0.756133645893);
    msg.setSource(8060U);
    msg.setSourceEntity(65U);
    msg.setDestination(13148U);
    msg.setDestinationEntity(156U);
    msg.list.assign("ODGVXKFWQTMTLHALVMMSERCTHWFDQPXXOTRHKLAEUTWELSJEXJUQERJLKZYMDIPUCALEBLWTWXVKDPOYZOIXQXRRSATYUONGEDJRCPSNWUNOFTYOSKYCZHQJWXQNRKIIJDNHLPGZBBG");

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
    msg.setTimeStamp(0.316241791312);
    msg.setSource(14677U);
    msg.setSourceEntity(132U);
    msg.setDestination(38849U);
    msg.setDestinationEntity(251U);
    msg.list.assign("ZMBNZJFQSKPQIKIZUMTDONTDJXFDGLYRPNBAMHGNVWZZFDBDPXYYRLREUIOUPEUDHFGWHSVEOJYWPHXQSZRFLDGEWAXTNMPQOBAZRWCCRFMOFTXYAFYEXPTSZJLVQUWILENUYNHKFSSBSHXSJLWBKED");

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
    msg.setTimeStamp(0.740958890042);
    msg.setSource(18626U);
    msg.setSourceEntity(81U);
    msg.setDestination(26044U);
    msg.setDestinationEntity(86U);
    msg.peer.assign("KAZROYTSXHTSCKUUWJYNVGXGRFBOOMFHDGIPKIUJZYQJWXEIEQEOCQFGNOVWPQKZMDLXWSZELIJAEYSLQQFAUWAHWMDJPWANPPBCJYLHAZPHDJSNDROHVUKTTZHYVIANBNQFCBVAONNJVTLMTUTMYPBYLZXFECIQCUIDPIZPRUYGLMGXSABBDXVLRDIFDWPBSHKTFUZGFOGSQOIHTLWRUFKGOLBCEACJNKSBVMCMMVVQXDNEEKEKC");
    msg.rssi = 0.215754672046;
    msg.integrity = 14152U;

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
    msg.setTimeStamp(0.596064909097);
    msg.setSource(33763U);
    msg.setSourceEntity(34U);
    msg.setDestination(44421U);
    msg.setDestinationEntity(50U);
    msg.peer.assign("BTOSURVZLWRXTZCMOIHSWJSHRIWGXWLFO");
    msg.rssi = 0.953170648805;
    msg.integrity = 53473U;

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
    msg.setTimeStamp(0.605625319682);
    msg.setSource(34183U);
    msg.setSourceEntity(22U);
    msg.setDestination(3700U);
    msg.setDestinationEntity(156U);
    msg.peer.assign("QMUTYXTLDAPAQPWJSEKWTKHHJZPVADCIRGQHOWDRXNEHOXNDVICUSBSBDEWHMRCNRFXNJSXBVDCCKUVGNQRIYEYZPMJHBNCROURTPGHIZOLRKSDVKYTOGFTCQLEEWSZFYUADKGFIFRQMJSYZBKJSNCVAPJNLYMLYJFDWMMOE");
    msg.rssi = 0.387891988944;
    msg.integrity = 45626U;

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
    msg.setTimeStamp(0.493223744283);
    msg.setSource(51156U);
    msg.setSourceEntity(247U);
    msg.setDestination(46656U);
    msg.setDestinationEntity(128U);
    msg.req_id = 3701U;
    msg.destination.assign("WLYPLTOVCBYAQURQHKCBEXKJCGCNHVGMQNLFHDFFFXTWXKE");
    msg.timeout = 0.742393697708;
    msg.range = 0.529800356988;
    msg.type = 254U;
    IMC::Goto tmp_msg_0;
    tmp_msg_0.timeout = 53790U;
    tmp_msg_0.lat = 0.481486394227;
    tmp_msg_0.lon = 0.3622506695;
    tmp_msg_0.z = 0.940667782674;
    tmp_msg_0.z_units = 200U;
    tmp_msg_0.speed = 0.257617452738;
    tmp_msg_0.speed_units = 10U;
    tmp_msg_0.roll = 0.509052286261;
    tmp_msg_0.pitch = 0.967781859442;
    tmp_msg_0.yaw = 0.616025861061;
    tmp_msg_0.custom.assign("CEMQHCITNZRMROOLQNENAGZAUSIWEOGSBBSRNXZTEYBAAJLVNHDFHSOWMFLTTXYHOEQVVWU");
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
    msg.setTimeStamp(0.531504489758);
    msg.setSource(6128U);
    msg.setSourceEntity(80U);
    msg.setDestination(55097U);
    msg.setDestinationEntity(243U);
    msg.req_id = 43708U;
    msg.destination.assign("FNYXUQSRCXNEOLLDMBBOHIMMWZUSQLOMAMUKMKBRSELUQEJPOZIEYHXVPPXPLVWIOYJGVHLRHTUCRUYAJZZGPVKRWBUYDBTWLDHGXCCWDSOTJFMRZLKSISSVGDWOVGJNEKVGAEYKQIAFBROHWIUFZPPEUJXTOWJXFBAKVNXFAFYCIN");
    msg.timeout = 0.0944649983282;
    msg.range = 0.821769472054;
    msg.type = 167U;
    IMC::DesiredVelocity tmp_msg_0;
    tmp_msg_0.u = 0.704489052594;
    tmp_msg_0.v = 0.802773089297;
    tmp_msg_0.w = 0.655303508562;
    tmp_msg_0.p = 0.28195460548;
    tmp_msg_0.q = 0.274256841319;
    tmp_msg_0.r = 0.593568583979;
    tmp_msg_0.flags = 81U;
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
    msg.setTimeStamp(0.768357510724);
    msg.setSource(62398U);
    msg.setSourceEntity(34U);
    msg.setDestination(42407U);
    msg.setDestinationEntity(174U);
    msg.req_id = 38262U;
    msg.destination.assign("BEEJNSURDJKDZBERKWWHETMUPBYAQYQQEFNAZQILHXRDJRYMKGRXFEKUAOCE");
    msg.timeout = 0.579855367068;
    msg.range = 0.964208096392;
    msg.type = 46U;
    IMC::AcousticSystemsQuery tmp_msg_0;
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
    msg.setTimeStamp(0.0392648713603);
    msg.setSource(60435U);
    msg.setSourceEntity(199U);
    msg.setDestination(47497U);
    msg.setDestinationEntity(14U);
    msg.req_id = 48580U;
    msg.type = 62U;
    msg.status = 16U;
    msg.info.assign("FRKFFSOWHHWYBDCGBQWYPYIEANRKXFNXFIIIUYCLDVSLTEESAGBTIJBZUFDMVZTJPORQGUXRLNJDPJRNBKIAGEMZCDLOVKXFTCTNAVRAZMGIOSHCADMTUJULJLHYXFHJAJJCKVVKDR");
    msg.range = 0.751063302442;

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
    msg.setTimeStamp(0.223333765595);
    msg.setSource(35540U);
    msg.setSourceEntity(82U);
    msg.setDestination(25985U);
    msg.setDestinationEntity(202U);
    msg.req_id = 24640U;
    msg.type = 120U;
    msg.status = 215U;
    msg.info.assign("UJEAOLHGVOOMKRQKLEO");
    msg.range = 0.296092040386;

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
    msg.setTimeStamp(0.400397443729);
    msg.setSource(47375U);
    msg.setSourceEntity(132U);
    msg.setDestination(20U);
    msg.setDestinationEntity(184U);
    msg.req_id = 51537U;
    msg.type = 211U;
    msg.status = 57U;
    msg.info.assign("WGIKUXNLUSAMBKMTMZGPCVXRPZJEILFGAESIHOGTJSPXDXZJYOQMZALXBYNHQTWDBWYSJYODGISKXFDNMNEFEUDIRLZHNTDXWCSKPVIHQOFEFZCYPNYXCCTVVCBSARVKFJRMHAWKXJ");
    msg.range = 0.54992349246;

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
    msg.setTimeStamp(0.580882254042);
    msg.setSource(14499U);
    msg.setSourceEntity(249U);
    msg.setDestination(6619U);
    msg.setDestinationEntity(246U);
    msg.value = 9396;

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
    msg.setTimeStamp(0.374269545681);
    msg.setSource(3977U);
    msg.setSourceEntity(138U);
    msg.setDestination(25049U);
    msg.setDestinationEntity(239U);
    msg.value = 19473;

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
    msg.setTimeStamp(0.0389048149194);
    msg.setSource(42343U);
    msg.setSourceEntity(250U);
    msg.setDestination(44753U);
    msg.setDestinationEntity(21U);
    msg.value = -11706;

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
    msg.setTimeStamp(0.0585912955757);
    msg.setSource(32015U);
    msg.setSourceEntity(185U);
    msg.setDestination(15170U);
    msg.setDestinationEntity(54U);
    msg.value = 0.810134020227;

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
    msg.setTimeStamp(0.147233151427);
    msg.setSource(22956U);
    msg.setSourceEntity(206U);
    msg.setDestination(53541U);
    msg.setDestinationEntity(250U);
    msg.value = 0.426076961411;

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
    msg.setTimeStamp(0.415912703458);
    msg.setSource(41931U);
    msg.setSourceEntity(42U);
    msg.setDestination(19549U);
    msg.setDestinationEntity(215U);
    msg.value = 0.192867116486;

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
    msg.setTimeStamp(0.523429204901);
    msg.setSource(59970U);
    msg.setSourceEntity(162U);
    msg.setDestination(21644U);
    msg.setDestinationEntity(225U);
    msg.value = 0.420729666957;

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
    msg.setTimeStamp(0.448045072097);
    msg.setSource(38088U);
    msg.setSourceEntity(39U);
    msg.setDestination(41474U);
    msg.setDestinationEntity(136U);
    msg.value = 0.577557570373;

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
    msg.setTimeStamp(0.720837309891);
    msg.setSource(34567U);
    msg.setSourceEntity(221U);
    msg.setDestination(23642U);
    msg.setDestinationEntity(200U);
    msg.value = 0.845313018835;

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
    msg.setTimeStamp(0.188593150025);
    msg.setSource(6959U);
    msg.setSourceEntity(135U);
    msg.setDestination(36261U);
    msg.setDestinationEntity(7U);
    msg.validity = 22873U;
    msg.type = 72U;
    msg.utc_year = 6740U;
    msg.utc_month = 106U;
    msg.utc_day = 10U;
    msg.utc_time = 0.205423141801;
    msg.lat = 0.257136331551;
    msg.lon = 0.861004738165;
    msg.height = 0.630152130858;
    msg.satellites = 160U;
    msg.cog = 0.400642760664;
    msg.sog = 0.406482736474;
    msg.hdop = 0.852440823944;
    msg.vdop = 0.843107238299;
    msg.hacc = 0.186237009709;
    msg.vacc = 0.773169393127;

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
    msg.setTimeStamp(0.411961506416);
    msg.setSource(907U);
    msg.setSourceEntity(146U);
    msg.setDestination(20603U);
    msg.setDestinationEntity(246U);
    msg.validity = 53293U;
    msg.type = 216U;
    msg.utc_year = 59503U;
    msg.utc_month = 87U;
    msg.utc_day = 244U;
    msg.utc_time = 0.418991336615;
    msg.lat = 0.570259721204;
    msg.lon = 0.240805351869;
    msg.height = 0.672595152592;
    msg.satellites = 180U;
    msg.cog = 0.758984485695;
    msg.sog = 0.0557515581643;
    msg.hdop = 0.479363692124;
    msg.vdop = 0.138377400207;
    msg.hacc = 0.0973647221203;
    msg.vacc = 0.318035023364;

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
    msg.setTimeStamp(0.0703178300208);
    msg.setSource(24966U);
    msg.setSourceEntity(167U);
    msg.setDestination(65104U);
    msg.setDestinationEntity(173U);
    msg.validity = 44465U;
    msg.type = 144U;
    msg.utc_year = 61810U;
    msg.utc_month = 190U;
    msg.utc_day = 138U;
    msg.utc_time = 0.854500416312;
    msg.lat = 0.555938657632;
    msg.lon = 0.523527599783;
    msg.height = 0.738733579539;
    msg.satellites = 235U;
    msg.cog = 0.427151583418;
    msg.sog = 0.119733328128;
    msg.hdop = 0.487618774657;
    msg.vdop = 0.384520285283;
    msg.hacc = 0.823010254448;
    msg.vacc = 0.565037984651;

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
    msg.setTimeStamp(0.114544230771);
    msg.setSource(16366U);
    msg.setSourceEntity(99U);
    msg.setDestination(54512U);
    msg.setDestinationEntity(124U);
    msg.time = 0.56924425927;
    msg.phi = 0.663512983797;
    msg.theta = 0.341755282335;
    msg.psi = 0.342821596623;
    msg.psi_magnetic = 0.547551495547;

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
    msg.setTimeStamp(0.797617125644);
    msg.setSource(54284U);
    msg.setSourceEntity(61U);
    msg.setDestination(49339U);
    msg.setDestinationEntity(171U);
    msg.time = 0.588402034581;
    msg.phi = 0.173414143956;
    msg.theta = 0.30949376287;
    msg.psi = 0.815913467101;
    msg.psi_magnetic = 0.898201007045;

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
    msg.setTimeStamp(0.0213091582203);
    msg.setSource(25392U);
    msg.setSourceEntity(214U);
    msg.setDestination(55437U);
    msg.setDestinationEntity(37U);
    msg.time = 0.639096476152;
    msg.phi = 0.676821111382;
    msg.theta = 0.341813134462;
    msg.psi = 0.833216596337;
    msg.psi_magnetic = 0.387267846708;

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
    msg.setTimeStamp(0.191627194242);
    msg.setSource(17430U);
    msg.setSourceEntity(136U);
    msg.setDestination(45999U);
    msg.setDestinationEntity(170U);
    msg.time = 0.0801457999506;
    msg.x = 0.269591886204;
    msg.y = 0.445560353662;
    msg.z = 0.586841919378;
    msg.timestep = 0.22188182322;

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
    msg.setTimeStamp(0.530243539027);
    msg.setSource(48995U);
    msg.setSourceEntity(10U);
    msg.setDestination(19217U);
    msg.setDestinationEntity(104U);
    msg.time = 0.654423701627;
    msg.x = 0.568043095671;
    msg.y = 0.0858758631917;
    msg.z = 0.433693859934;
    msg.timestep = 0.290863481576;

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
    msg.setTimeStamp(0.192601654783);
    msg.setSource(21827U);
    msg.setSourceEntity(8U);
    msg.setDestination(27281U);
    msg.setDestinationEntity(174U);
    msg.time = 0.377404971783;
    msg.x = 0.252669842897;
    msg.y = 0.607591049529;
    msg.z = 0.0945689919668;
    msg.timestep = 0.117928528635;

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
    msg.setTimeStamp(0.206967660063);
    msg.setSource(49935U);
    msg.setSourceEntity(131U);
    msg.setDestination(14080U);
    msg.setDestinationEntity(143U);
    msg.time = 0.298649321756;
    msg.x = 0.660178206878;
    msg.y = 0.152748274549;
    msg.z = 0.679866820468;

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
    msg.setTimeStamp(0.0281182056231);
    msg.setSource(3635U);
    msg.setSourceEntity(200U);
    msg.setDestination(13202U);
    msg.setDestinationEntity(111U);
    msg.time = 0.3285565678;
    msg.x = 0.394193053203;
    msg.y = 0.549411609326;
    msg.z = 0.771611211938;

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
    msg.setTimeStamp(0.558391569836);
    msg.setSource(52906U);
    msg.setSourceEntity(244U);
    msg.setDestination(2078U);
    msg.setDestinationEntity(231U);
    msg.time = 0.72539351024;
    msg.x = 0.553684697967;
    msg.y = 0.0839499136631;
    msg.z = 0.124431045179;

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
    msg.setTimeStamp(0.186850943666);
    msg.setSource(50153U);
    msg.setSourceEntity(216U);
    msg.setDestination(58490U);
    msg.setDestinationEntity(243U);
    msg.time = 0.217831831356;
    msg.x = 0.127910782902;
    msg.y = 0.125002382291;
    msg.z = 0.783100174733;

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
    msg.setTimeStamp(0.728925844494);
    msg.setSource(40317U);
    msg.setSourceEntity(216U);
    msg.setDestination(1971U);
    msg.setDestinationEntity(2U);
    msg.time = 0.727621930705;
    msg.x = 0.383771608779;
    msg.y = 0.641336861525;
    msg.z = 0.711837172454;

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
    msg.setTimeStamp(0.419101061918);
    msg.setSource(13000U);
    msg.setSourceEntity(23U);
    msg.setDestination(29884U);
    msg.setDestinationEntity(234U);
    msg.time = 0.504264021241;
    msg.x = 0.706640214068;
    msg.y = 0.290698975398;
    msg.z = 0.700099849074;

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
    msg.setTimeStamp(0.256039604696);
    msg.setSource(20605U);
    msg.setSourceEntity(144U);
    msg.setDestination(44920U);
    msg.setDestinationEntity(114U);
    msg.time = 0.96993568751;
    msg.x = 0.664387049819;
    msg.y = 0.190134603481;
    msg.z = 0.950169791451;

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
    msg.setTimeStamp(0.947379355971);
    msg.setSource(21618U);
    msg.setSourceEntity(173U);
    msg.setDestination(51982U);
    msg.setDestinationEntity(8U);
    msg.time = 0.258933486606;
    msg.x = 0.298499272265;
    msg.y = 0.688940749552;
    msg.z = 0.0859803411035;

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
    msg.setTimeStamp(0.314407096377);
    msg.setSource(26604U);
    msg.setSourceEntity(86U);
    msg.setDestination(62406U);
    msg.setDestinationEntity(17U);
    msg.time = 0.559973399552;
    msg.x = 0.573990029402;
    msg.y = 0.733091203839;
    msg.z = 0.906459894031;

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
    msg.setTimeStamp(0.456572282716);
    msg.setSource(12008U);
    msg.setSourceEntity(246U);
    msg.setDestination(53182U);
    msg.setDestinationEntity(36U);
    msg.validity = 182U;
    msg.x = 0.82655219581;
    msg.y = 0.816292864348;
    msg.z = 0.719464888351;

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
    msg.setTimeStamp(0.926727920903);
    msg.setSource(13249U);
    msg.setSourceEntity(247U);
    msg.setDestination(50464U);
    msg.setDestinationEntity(182U);
    msg.validity = 185U;
    msg.x = 0.837417240161;
    msg.y = 0.123586081032;
    msg.z = 0.548063221243;

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
    msg.setTimeStamp(0.429739385942);
    msg.setSource(13809U);
    msg.setSourceEntity(231U);
    msg.setDestination(18232U);
    msg.setDestinationEntity(241U);
    msg.validity = 20U;
    msg.x = 0.526728162399;
    msg.y = 0.536179150816;
    msg.z = 0.64051780636;

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
    msg.setTimeStamp(0.423993789114);
    msg.setSource(39660U);
    msg.setSourceEntity(206U);
    msg.setDestination(20319U);
    msg.setDestinationEntity(210U);
    msg.validity = 171U;
    msg.x = 0.300028888744;
    msg.y = 0.985135818856;
    msg.z = 0.976077140323;

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
    msg.setTimeStamp(0.911852543123);
    msg.setSource(16938U);
    msg.setSourceEntity(86U);
    msg.setDestination(42637U);
    msg.setDestinationEntity(30U);
    msg.validity = 224U;
    msg.x = 0.328392200812;
    msg.y = 0.844264749057;
    msg.z = 0.619004511456;

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
    msg.setTimeStamp(0.685165853927);
    msg.setSource(49474U);
    msg.setSourceEntity(123U);
    msg.setDestination(61730U);
    msg.setDestinationEntity(138U);
    msg.validity = 98U;
    msg.x = 0.638726833856;
    msg.y = 0.603129392658;
    msg.z = 0.0864534246697;

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
    msg.setTimeStamp(0.210117209976);
    msg.setSource(441U);
    msg.setSourceEntity(65U);
    msg.setDestination(25267U);
    msg.setDestinationEntity(15U);
    msg.time = 0.0234056432466;
    msg.x = 0.031471416507;
    msg.y = 0.877186557156;
    msg.z = 0.62108626075;

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
    msg.setTimeStamp(0.917049560717);
    msg.setSource(43988U);
    msg.setSourceEntity(243U);
    msg.setDestination(51780U);
    msg.setDestinationEntity(166U);
    msg.time = 0.873661486928;
    msg.x = 0.193086597236;
    msg.y = 0.976979499719;
    msg.z = 0.970774784194;

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
    msg.setTimeStamp(0.987633516982);
    msg.setSource(51162U);
    msg.setSourceEntity(212U);
    msg.setDestination(361U);
    msg.setDestinationEntity(37U);
    msg.time = 0.310907322164;
    msg.x = 0.774978783049;
    msg.y = 0.952304465528;
    msg.z = 0.0872963950866;

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
    msg.setTimeStamp(0.169500842354);
    msg.setSource(9904U);
    msg.setSourceEntity(125U);
    msg.setDestination(58584U);
    msg.setDestinationEntity(151U);
    msg.validity = 144U;
    msg.value = 0.526154085234;

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
    msg.setTimeStamp(0.362089498194);
    msg.setSource(23492U);
    msg.setSourceEntity(145U);
    msg.setDestination(8525U);
    msg.setDestinationEntity(208U);
    msg.validity = 200U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.894505237429;
    tmp_msg_0.y = 0.929768304744;
    tmp_msg_0.z = 0.191144044494;
    tmp_msg_0.phi = 0.991674264204;
    tmp_msg_0.theta = 0.0355463953878;
    tmp_msg_0.psi = 0.714486834363;
    msg.location.push_back(tmp_msg_0);
    IMC::BeamConfig tmp_msg_1;
    tmp_msg_1.beam_width = 0.450123279555;
    tmp_msg_1.beam_height = 0.0179470567975;
    msg.beam_config.push_back(tmp_msg_1);
    msg.value = 0.672611903802;

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
    msg.setTimeStamp(0.956074098843);
    msg.setSource(47582U);
    msg.setSourceEntity(165U);
    msg.setDestination(9965U);
    msg.setDestinationEntity(39U);
    msg.validity = 113U;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.626241385809;
    tmp_msg_0.beam_height = 0.535869582501;
    msg.beam_config.push_back(tmp_msg_0);
    msg.value = 0.378361018905;

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
    msg.setTimeStamp(0.760441791336);
    msg.setSource(54488U);
    msg.setSourceEntity(98U);
    msg.setDestination(16430U);
    msg.setDestinationEntity(252U);
    msg.value = 0.61573426963;

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
    msg.setTimeStamp(0.466549832751);
    msg.setSource(35736U);
    msg.setSourceEntity(100U);
    msg.setDestination(1671U);
    msg.setDestinationEntity(147U);
    msg.value = 0.0705101246996;

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
    msg.setTimeStamp(0.603273501801);
    msg.setSource(28745U);
    msg.setSourceEntity(127U);
    msg.setDestination(34579U);
    msg.setDestinationEntity(253U);
    msg.value = 0.774775473716;

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
    msg.setTimeStamp(0.210548650991);
    msg.setSource(30283U);
    msg.setSourceEntity(211U);
    msg.setDestination(24019U);
    msg.setDestinationEntity(177U);
    msg.value = 0.103807764134;

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
    msg.setTimeStamp(0.826483860547);
    msg.setSource(52985U);
    msg.setSourceEntity(172U);
    msg.setDestination(28475U);
    msg.setDestinationEntity(145U);
    msg.value = 0.919874471866;

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
    msg.setTimeStamp(0.449791884898);
    msg.setSource(49018U);
    msg.setSourceEntity(162U);
    msg.setDestination(16299U);
    msg.setDestinationEntity(132U);
    msg.value = 0.76812748992;

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
    msg.setTimeStamp(0.212814025708);
    msg.setSource(60821U);
    msg.setSourceEntity(175U);
    msg.setDestination(20722U);
    msg.setDestinationEntity(171U);
    msg.value = 0.608516252421;

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
    msg.setTimeStamp(0.754131811427);
    msg.setSource(9307U);
    msg.setSourceEntity(90U);
    msg.setDestination(16226U);
    msg.setDestinationEntity(191U);
    msg.value = 0.00405433597345;

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
    msg.setTimeStamp(0.659166897782);
    msg.setSource(64559U);
    msg.setSourceEntity(62U);
    msg.setDestination(57630U);
    msg.setDestinationEntity(17U);
    msg.value = 0.444766198242;

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
    msg.setTimeStamp(0.707156091526);
    msg.setSource(9269U);
    msg.setSourceEntity(158U);
    msg.setDestination(35026U);
    msg.setDestinationEntity(7U);
    msg.value = 0.48659870599;

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
    msg.setTimeStamp(0.750725666245);
    msg.setSource(40919U);
    msg.setSourceEntity(180U);
    msg.setDestination(1859U);
    msg.setDestinationEntity(1U);
    msg.value = 0.874056310557;

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
    msg.setTimeStamp(0.362375582636);
    msg.setSource(32564U);
    msg.setSourceEntity(95U);
    msg.setDestination(60680U);
    msg.setDestinationEntity(222U);
    msg.value = 0.148112210573;

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
    msg.setTimeStamp(0.0238125378754);
    msg.setSource(56888U);
    msg.setSourceEntity(133U);
    msg.setDestination(31820U);
    msg.setDestinationEntity(174U);
    msg.value = 0.893242110768;

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
    msg.setTimeStamp(0.927458147097);
    msg.setSource(17232U);
    msg.setSourceEntity(169U);
    msg.setDestination(23294U);
    msg.setDestinationEntity(72U);
    msg.value = 0.809089671518;

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
    msg.setTimeStamp(0.177328583269);
    msg.setSource(24359U);
    msg.setSourceEntity(207U);
    msg.setDestination(16156U);
    msg.setDestinationEntity(160U);
    msg.value = 0.664566033658;

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
    msg.setTimeStamp(0.376515484535);
    msg.setSource(24272U);
    msg.setSourceEntity(109U);
    msg.setDestination(34585U);
    msg.setDestinationEntity(186U);
    msg.value = 0.613874403445;

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
    msg.setTimeStamp(0.847410681017);
    msg.setSource(32992U);
    msg.setSourceEntity(111U);
    msg.setDestination(48064U);
    msg.setDestinationEntity(248U);
    msg.value = 0.93115076666;

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
    msg.setTimeStamp(0.796241100514);
    msg.setSource(55828U);
    msg.setSourceEntity(26U);
    msg.setDestination(34031U);
    msg.setDestinationEntity(90U);
    msg.value = 0.548652637753;

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
    msg.setTimeStamp(0.899960965097);
    msg.setSource(42707U);
    msg.setSourceEntity(154U);
    msg.setDestination(3196U);
    msg.setDestinationEntity(140U);
    msg.value = 0.744452973141;

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
    msg.setTimeStamp(0.621547239591);
    msg.setSource(44950U);
    msg.setSourceEntity(106U);
    msg.setDestination(52452U);
    msg.setDestinationEntity(126U);
    msg.value = 0.886240679225;

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
    msg.setTimeStamp(0.463230508154);
    msg.setSource(30329U);
    msg.setSourceEntity(44U);
    msg.setDestination(28097U);
    msg.setDestinationEntity(221U);
    msg.value = 0.403914309113;

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
    msg.setTimeStamp(0.305503441892);
    msg.setSource(49497U);
    msg.setSourceEntity(208U);
    msg.setDestination(41938U);
    msg.setDestinationEntity(230U);
    msg.value = 0.841040842346;

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
    msg.setTimeStamp(0.0251926816635);
    msg.setSource(32166U);
    msg.setSourceEntity(103U);
    msg.setDestination(8535U);
    msg.setDestinationEntity(27U);
    msg.value = 0.657163954618;

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
    msg.setTimeStamp(0.376578301141);
    msg.setSource(47819U);
    msg.setSourceEntity(184U);
    msg.setDestination(57129U);
    msg.setDestinationEntity(75U);
    msg.value = 0.166037942002;

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
    msg.setTimeStamp(0.837915934976);
    msg.setSource(19488U);
    msg.setSourceEntity(252U);
    msg.setDestination(11097U);
    msg.setDestinationEntity(9U);
    msg.direction = 0.548399817423;
    msg.speed = 0.0392166363625;
    msg.turbulence = 0.710286792538;

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
    msg.setTimeStamp(3.41627692956e-05);
    msg.setSource(1783U);
    msg.setSourceEntity(62U);
    msg.setDestination(4006U);
    msg.setDestinationEntity(150U);
    msg.direction = 0.248806016166;
    msg.speed = 0.294052715507;
    msg.turbulence = 0.432057361495;

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
    msg.setTimeStamp(0.640524486134);
    msg.setSource(5933U);
    msg.setSourceEntity(229U);
    msg.setDestination(58495U);
    msg.setDestinationEntity(219U);
    msg.direction = 0.878258386648;
    msg.speed = 0.926984251477;
    msg.turbulence = 0.963803617217;

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
    msg.setTimeStamp(0.40924540791);
    msg.setSource(44332U);
    msg.setSourceEntity(113U);
    msg.setDestination(38434U);
    msg.setDestinationEntity(163U);
    msg.value = 0.367282602337;

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
    msg.setTimeStamp(0.790023722389);
    msg.setSource(9011U);
    msg.setSourceEntity(246U);
    msg.setDestination(40875U);
    msg.setDestinationEntity(231U);
    msg.value = 0.0140804052147;

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
    msg.setTimeStamp(0.642693561002);
    msg.setSource(26050U);
    msg.setSourceEntity(44U);
    msg.setDestination(7565U);
    msg.setDestinationEntity(183U);
    msg.value = 0.732369792799;

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
    msg.setTimeStamp(0.501748534225);
    msg.setSource(65038U);
    msg.setSourceEntity(100U);
    msg.setDestination(10733U);
    msg.setDestinationEntity(227U);
    msg.value.assign("XWAPXMTYACCROXUZFNWLVMYMYKVBAOUGGOQMQPVSKOREFQXFSQRIYIQMPLSNAHEUDBAZGYPMHHRPNJAEHFVYTULXEXTVLTGWKNRKIDWNHZISFAFLEBQTBERYXOETHXTDZCOOTGIUAUMCWJSIQCJNCVVQZBTSFUCGFREYGAWNLHSLDBLIKJLZXQSZOAMZM");

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
    msg.setTimeStamp(0.414868116575);
    msg.setSource(19667U);
    msg.setSourceEntity(54U);
    msg.setDestination(2902U);
    msg.setDestinationEntity(34U);
    msg.value.assign("GNEYZRNYBTBFVPUEOMMUKVMGFYFWRVSIXQZSNGNKDIGDHCNKKJOZAHCHOSNVPIWTPWHJBPBUPWRYUFEQLUUXILPMWGVTLSNLZZXAVQDOHUMDDVQZAJLTATGXPNBFEYUJBTDEGFDUTEJJQOQWZCSBFHZM");

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
    msg.setTimeStamp(0.227394351303);
    msg.setSource(45333U);
    msg.setSourceEntity(47U);
    msg.setDestination(38657U);
    msg.setDestinationEntity(26U);
    msg.value.assign("RZRSNXIXBOIDKZDMHFITJACAZCKOFNTCHYCKPYLSLQUJHTRHMPBMXD");

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
    msg.setTimeStamp(0.356529447036);
    msg.setSource(12444U);
    msg.setSourceEntity(111U);
    msg.setDestination(58968U);
    msg.setDestinationEntity(17U);
    const char tmp_msg_0[] = {-86, 93, -114, -52, -42, -60, 57, 7, -34, -73, 85, -44, 89, -125, 124, 123, -29, 100, -80, 21, -88, -98};
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
    msg.setTimeStamp(0.274824960094);
    msg.setSource(48988U);
    msg.setSourceEntity(51U);
    msg.setDestination(39545U);
    msg.setDestinationEntity(86U);
    const char tmp_msg_0[] = {-97, -81, -66, 94, 123, 80, 64, 1, 9, -77, -91, 48, 113, -120, 15, 31, 15, -104, 35, -81, 66, -91, 95, 85, -65, 25, -30, -77, 122, 93, -105, -127, -70, 52, -106, -16, 40, 102, 44, -99, 98, 15, -31, -73, -28, -54, -79, -59, -28, -14, -88, -32, -45, 78, -26, 122, -51, -97, -92, 119, -7, -67, -103, 85, -110, -117, -51, -109, 70, 97, 18, -39, -16, 24, 105, 5, 119, 80, 61, 121, 17, -78, -120, 97, 83, -81, -122, 47, -4, 12, -37, -1, -124, 109, -100, 93, 8, -91};
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
    msg.setTimeStamp(0.773935923904);
    msg.setSource(3287U);
    msg.setSourceEntity(189U);
    msg.setDestination(44474U);
    msg.setDestinationEntity(31U);
    const char tmp_msg_0[] = {30, 21, 43, -5, -62, -23, -5, 23, 12, -54, 39, -42, -23, -47, -88, 95, -72, 9, -92, -1, 98, -56, -24, 108, -92, 71, 111, -112, 59, 81, -12, 82, 65, -54, -3, -23, -48, 93, -22, -64, 111, -123, -13, -66, 53, -96, 42, 12, 55, -71, 5, -73, 89, 11, 30, -34, -30, -55, 115, 102, 53, 120, -77, -112, 29, -73, 91, -95, 91, 110, -90, -80, -76, -17, 44, 90, 93, 8, -101, 84, -75, 45, 106, -58, -110, -40, -119, -79, 55, -80, 96, 90, 64, -36, -44, 38, 4, -25, -3, -56, 5, -63, 85, -127, -43, 101, 15, -121, -3, 66, -95, 36, -48, 35, 63, -11, 0, 82, 49, -105, 29, 80, 88, -41, -2, -28, 8, -78, 17, 50, -93, 121, -110, -79, -15, 124, 121, 32, -28, 119, -29, 17, -80, 104, -108, 75, 124, 109, -109, 46, -90, -26, 118, -67, 100, 10, 114, 120, -58, 18, -76, 120, -79, 58, -124, 62, 98, -87, 97, 15, 5, 8, 126, -87, 64, 10, -126, -96, -77, 51, 36, -68, 115, 107, 110};
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
    msg.setTimeStamp(0.959663792579);
    msg.setSource(653U);
    msg.setSourceEntity(226U);
    msg.setDestination(34319U);
    msg.setDestinationEntity(197U);
    msg.value = 0.519482571055;

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
    msg.setTimeStamp(0.293344021731);
    msg.setSource(49233U);
    msg.setSourceEntity(56U);
    msg.setDestination(37684U);
    msg.setDestinationEntity(17U);
    msg.value = 0.715740253299;

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
    msg.setTimeStamp(0.419076536556);
    msg.setSource(64853U);
    msg.setSourceEntity(238U);
    msg.setDestination(21660U);
    msg.setDestinationEntity(196U);
    msg.value = 0.0700305212823;

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
    msg.setTimeStamp(0.0306489011819);
    msg.setSource(56539U);
    msg.setSourceEntity(185U);
    msg.setDestination(26630U);
    msg.setDestinationEntity(155U);
    msg.type = 233U;
    msg.frequency = 4280283503U;
    msg.min_range = 820U;
    msg.max_range = 37474U;
    msg.bits_per_point = 7U;
    msg.scale_factor = 0.00884380719718;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.451280942013;
    tmp_msg_0.beam_height = 0.997720337329;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {40, 9, 97, -3, 11, 27, 124, -86, -23, 120};
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
    msg.setTimeStamp(0.544021195811);
    msg.setSource(35557U);
    msg.setSourceEntity(37U);
    msg.setDestination(3515U);
    msg.setDestinationEntity(8U);
    msg.type = 18U;
    msg.frequency = 1675638193U;
    msg.min_range = 49715U;
    msg.max_range = 51109U;
    msg.bits_per_point = 146U;
    msg.scale_factor = 0.36181129955;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.466207647771;
    tmp_msg_0.beam_height = 0.101844553906;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {97, -41, 32, -14, -97, -25, 78, 60, 96, 106, 84, 21, -41, -11, 75, 94, 34, -36, -51, -39, -109, 8, -79, -113, 110, 103, 65, 121, -77, -64, 32, -125, -55, -41, -37, 25, 117, 116, 4, 90, 67, -85, 72, -9, -74, -3, -124, -123, -17, 13, 23, -42, 126, -125, 34, 50, 92, 79, 43, 34, -57, -86, 104, -128, -117, 55, 38, -18, 39, -94, 72, 90, 73, -68, -94, -46, 49, 81, 19, 89, -79, -87, -45, -62, -26, 27, 103, -2, 121, -31, -36, -96, -119, 5, 111, 92, 39, -75, 88, 46, 24, -26, -72, -96, 123, 40, -105, -46, 27, 57, 69, -51, 28, -108, -4, 21, -115, -118, -100, -85, -15, -70, 44, 17, 40, -66, -124, -90, 87, -65, -5, 69, -83, -85, -93, 79, 32, -110, -17, -20, -43, -52, -1, -61, -56, 104, 79, -91, 19, -76, -25, 106, 13, -26, -23, 45};
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
    msg.setTimeStamp(0.596452982677);
    msg.setSource(56478U);
    msg.setSourceEntity(116U);
    msg.setDestination(52517U);
    msg.setDestinationEntity(3U);
    msg.type = 147U;
    msg.frequency = 69867812U;
    msg.min_range = 30386U;
    msg.max_range = 9130U;
    msg.bits_per_point = 26U;
    msg.scale_factor = 0.996450190024;
    const char tmp_msg_0[] = {78, -82, 103, 30, -59, 69, 16, 5, -105, -79, 77, -74, 60, -24, 121, 6, -116, 39, -100, 114, 27, 68, 90, -84, -61, -87, -49, 45, 57, -56, -69, 33, 126, 69, -118, -98, 13, 47, 89, 20, 47, 86, 23, 9, 12, 46, 123, 87, 104, 38, -13, 44, -24, -114, -68, 100, 69, 37, -63, -24, -96, 8, -107, 51, 48, -1, -43, 12, -14, 116, -62, -19, -98, -15, 24, 56, -11, 20, -118, 2, 111, -10, 57, 67, -125, -96, 22, -14, -5, 87, -36, 32, -105, 102, -112, -10, -4, 106, 117, -128, 66, -14, 66, 47, -47, 12, -16, -33, -20, 66, -71, -90, 81, 92, 31, 30, -90, -62, -74, -46, -117};
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
    msg.setTimeStamp(0.0461416291723);
    msg.setSource(26691U);
    msg.setSourceEntity(212U);
    msg.setDestination(13805U);
    msg.setDestinationEntity(254U);

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
    msg.setTimeStamp(0.580150959414);
    msg.setSource(8689U);
    msg.setSourceEntity(171U);
    msg.setDestination(41288U);
    msg.setDestinationEntity(177U);

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
    msg.setTimeStamp(0.00117693891018);
    msg.setSource(50287U);
    msg.setSourceEntity(140U);
    msg.setDestination(47563U);
    msg.setDestinationEntity(55U);

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
    msg.setTimeStamp(0.0935643603181);
    msg.setSource(56594U);
    msg.setSourceEntity(231U);
    msg.setDestination(45783U);
    msg.setDestinationEntity(121U);
    msg.op = 193U;

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
    msg.setTimeStamp(0.241980364197);
    msg.setSource(29905U);
    msg.setSourceEntity(108U);
    msg.setDestination(38810U);
    msg.setDestinationEntity(83U);
    msg.op = 106U;

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
    msg.setTimeStamp(0.351692819734);
    msg.setSource(44965U);
    msg.setSourceEntity(127U);
    msg.setDestination(1420U);
    msg.setDestinationEntity(61U);
    msg.op = 35U;

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
    msg.setTimeStamp(0.607627510263);
    msg.setSource(42613U);
    msg.setSourceEntity(202U);
    msg.setDestination(32684U);
    msg.setDestinationEntity(56U);
    msg.value = 0.683797823593;
    msg.confidence = 0.747359315627;
    msg.opmodes.assign("DGFKYJREPPLBUFUVRWIBXIDDTFTTNEBSLXQRYLYYIAOODLMUOMNEBJPCJWAORHXHEAZKGZCSPHFBVNIMMYIXUVNKJHKPRUMPQIDODTQAAXCRFRYRPDSCTXKEXNHMNILYIFBWLJTYSFKVVJVAQEMWZUNSFBWUJSKUOSSGGMEGURKAGMSUIEFHLHDCOWCKAWEQWZHCZNGQAGLYQABXOCTRWLFJJVQVJGZDPOZTLEQBBZZDWZVPNXTQSVOPYMHKCX");

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
    msg.setTimeStamp(0.753960330579);
    msg.setSource(27693U);
    msg.setSourceEntity(31U);
    msg.setDestination(43529U);
    msg.setDestinationEntity(171U);
    msg.value = 0.421842678508;
    msg.confidence = 0.30479204291;
    msg.opmodes.assign("JBHDVXLDRRWCILMNUXLQSZJTCXDSPMMHWRDKLLUVOGOPRPZDXAUIZGFZWJOEABNTVQTUZCKOKNWZJFSPLCFGIFAADRIOGHBGNYXQUPTMHTHPWTBKLHWKLIHEACORZBQUBVGZFPFOIYENVILWQPEITVNJBONSJHQFUQZEVYADGUJNDFLSVSGSREEIOPMQDPARMXSYCHKVXUHVQYTTJWIJCBAXEBOCKYYAYSNRE");

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
    msg.setTimeStamp(0.435846213777);
    msg.setSource(60093U);
    msg.setSourceEntity(107U);
    msg.setDestination(61433U);
    msg.setDestinationEntity(141U);
    msg.value = 0.200887982558;
    msg.confidence = 0.770114052154;
    msg.opmodes.assign("SXXJCCUCGPWVMLMRAIMQKNYPGMQCSBRXEGGSVIAXIHZERGBPMLVVOVOWNTYUFINTSWLCTQDIIBYBYLFXTWDFWRYKHROPLENBLSEAGBACGJZLHWAEOZQTFQLSNECPVRKVKNGUDFPJNWKHOTYAYQKDCUTLAQTAOZWDONYHVDCPQSFUSHZOODTJRQAABIMQLEUEHZKDHMZEVXUHCDUYZBHY");

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
    msg.setTimeStamp(0.779553207581);
    msg.setSource(43194U);
    msg.setSourceEntity(232U);
    msg.setDestination(28386U);
    msg.setDestinationEntity(155U);
    msg.itow = 2051551890U;
    msg.lat = 0.488108230178;
    msg.lon = 0.356499818216;
    msg.height_ell = 0.375908399303;
    msg.height_sea = 0.0985699763352;
    msg.hacc = 0.993361618923;
    msg.vacc = 0.53960565704;
    msg.vel_n = 0.703689590173;
    msg.vel_e = 0.730795091389;
    msg.vel_d = 0.50095481029;
    msg.speed = 0.93843933408;
    msg.gspeed = 0.973497184942;
    msg.heading = 0.166718740745;
    msg.sacc = 0.884370792811;
    msg.cacc = 0.61038004634;

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
    msg.setTimeStamp(0.0332763979117);
    msg.setSource(31227U);
    msg.setSourceEntity(213U);
    msg.setDestination(15421U);
    msg.setDestinationEntity(211U);
    msg.itow = 3701994569U;
    msg.lat = 0.688750881309;
    msg.lon = 0.40224343523;
    msg.height_ell = 0.586304530769;
    msg.height_sea = 0.893589979282;
    msg.hacc = 0.261084439843;
    msg.vacc = 0.0189072683903;
    msg.vel_n = 0.401648730632;
    msg.vel_e = 0.609150597252;
    msg.vel_d = 0.815766956037;
    msg.speed = 0.406201292128;
    msg.gspeed = 0.791397541971;
    msg.heading = 0.351670816954;
    msg.sacc = 0.301342917835;
    msg.cacc = 0.0971675778393;

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
    msg.setTimeStamp(0.082744495922);
    msg.setSource(8202U);
    msg.setSourceEntity(172U);
    msg.setDestination(29199U);
    msg.setDestinationEntity(16U);
    msg.itow = 862462295U;
    msg.lat = 0.586281978701;
    msg.lon = 0.91645882091;
    msg.height_ell = 0.900722805664;
    msg.height_sea = 0.415410791704;
    msg.hacc = 0.309461857245;
    msg.vacc = 0.545238273629;
    msg.vel_n = 0.618169749544;
    msg.vel_e = 0.715007379066;
    msg.vel_d = 0.981990500523;
    msg.speed = 0.817401513251;
    msg.gspeed = 0.678115310157;
    msg.heading = 0.559250361197;
    msg.sacc = 0.655972807698;
    msg.cacc = 0.984870226306;

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
    msg.setTimeStamp(0.129510756826);
    msg.setSource(23287U);
    msg.setSourceEntity(252U);
    msg.setDestination(438U);
    msg.setDestinationEntity(106U);
    msg.id = 170U;
    msg.value = 0.835312504578;

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
    msg.setTimeStamp(0.763771922417);
    msg.setSource(8038U);
    msg.setSourceEntity(117U);
    msg.setDestination(18557U);
    msg.setDestinationEntity(113U);
    msg.id = 92U;
    msg.value = 0.0785112741572;

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
    msg.setTimeStamp(0.59795311019);
    msg.setSource(110U);
    msg.setSourceEntity(113U);
    msg.setDestination(1937U);
    msg.setDestinationEntity(243U);
    msg.id = 244U;
    msg.value = 0.0771734406269;

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
    msg.setTimeStamp(0.626995016849);
    msg.setSource(7451U);
    msg.setSourceEntity(205U);
    msg.setDestination(24507U);
    msg.setDestinationEntity(57U);
    msg.x = 0.973346243081;
    msg.y = 0.860696442576;
    msg.z = 0.370718040414;
    msg.phi = 0.688425163624;
    msg.theta = 0.974577928488;
    msg.psi = 0.765602248899;

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
    msg.setTimeStamp(0.708007237027);
    msg.setSource(49600U);
    msg.setSourceEntity(14U);
    msg.setDestination(27239U);
    msg.setDestinationEntity(120U);
    msg.x = 0.499068646482;
    msg.y = 0.200402358263;
    msg.z = 0.0483625008554;
    msg.phi = 0.174040320704;
    msg.theta = 0.573615556623;
    msg.psi = 0.607933299563;

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
    msg.setTimeStamp(0.20937354856);
    msg.setSource(19759U);
    msg.setSourceEntity(45U);
    msg.setDestination(17374U);
    msg.setDestinationEntity(108U);
    msg.x = 0.901195808134;
    msg.y = 0.96591462472;
    msg.z = 0.197323134331;
    msg.phi = 0.747184194575;
    msg.theta = 0.895393172363;
    msg.psi = 0.0402661876956;

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
    msg.setTimeStamp(0.800562005865);
    msg.setSource(24596U);
    msg.setSourceEntity(209U);
    msg.setDestination(53276U);
    msg.setDestinationEntity(220U);
    msg.beam_width = 0.925820091299;
    msg.beam_height = 0.840525173379;

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
    msg.setTimeStamp(0.994120429402);
    msg.setSource(22693U);
    msg.setSourceEntity(193U);
    msg.setDestination(15459U);
    msg.setDestinationEntity(126U);
    msg.beam_width = 0.333272829462;
    msg.beam_height = 0.520552312778;

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
    msg.setTimeStamp(0.28461524721);
    msg.setSource(6032U);
    msg.setSourceEntity(209U);
    msg.setDestination(62674U);
    msg.setDestinationEntity(241U);
    msg.beam_width = 0.781441197645;
    msg.beam_height = 0.44693541378;

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
    msg.setTimeStamp(0.0495483217619);
    msg.setSource(23969U);
    msg.setSourceEntity(74U);
    msg.setDestination(18855U);
    msg.setDestinationEntity(144U);
    msg.sane = 209U;

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
    msg.setTimeStamp(0.444210556089);
    msg.setSource(52567U);
    msg.setSourceEntity(92U);
    msg.setDestination(55061U);
    msg.setDestinationEntity(225U);
    msg.sane = 5U;

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
    msg.setTimeStamp(0.299470589111);
    msg.setSource(17535U);
    msg.setSourceEntity(95U);
    msg.setDestination(50195U);
    msg.setDestinationEntity(218U);
    msg.sane = 88U;

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
    msg.setTimeStamp(0.728761705878);
    msg.setSource(17345U);
    msg.setSourceEntity(41U);
    msg.setDestination(54011U);
    msg.setDestinationEntity(134U);
    msg.value = 0.588231005779;

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
    msg.setTimeStamp(0.416236875069);
    msg.setSource(44234U);
    msg.setSourceEntity(7U);
    msg.setDestination(18712U);
    msg.setDestinationEntity(17U);
    msg.value = 0.9734962666;

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
    msg.setTimeStamp(0.276879879774);
    msg.setSource(549U);
    msg.setSourceEntity(212U);
    msg.setDestination(40078U);
    msg.setDestinationEntity(203U);
    msg.value = 0.914083079074;

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
    msg.setTimeStamp(0.566076708896);
    msg.setSource(45733U);
    msg.setSourceEntity(236U);
    msg.setDestination(55409U);
    msg.setDestinationEntity(56U);
    msg.value = 0.087972209365;

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
    msg.setTimeStamp(0.733409777178);
    msg.setSource(45662U);
    msg.setSourceEntity(115U);
    msg.setDestination(17451U);
    msg.setDestinationEntity(91U);
    msg.value = 0.453875425624;

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
    msg.setTimeStamp(0.871784723859);
    msg.setSource(26927U);
    msg.setSourceEntity(235U);
    msg.setDestination(8204U);
    msg.setDestinationEntity(174U);
    msg.value = 0.588098468878;

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
    msg.setTimeStamp(0.760284074801);
    msg.setSource(37696U);
    msg.setSourceEntity(115U);
    msg.setDestination(30586U);
    msg.setDestinationEntity(203U);
    msg.value = 0.610276236834;

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
    msg.setTimeStamp(0.414079624746);
    msg.setSource(59363U);
    msg.setSourceEntity(124U);
    msg.setDestination(63313U);
    msg.setDestinationEntity(193U);
    msg.value = 0.323311832649;

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
    msg.setTimeStamp(0.555322147994);
    msg.setSource(33896U);
    msg.setSourceEntity(47U);
    msg.setDestination(37192U);
    msg.setDestinationEntity(222U);
    msg.value = 0.480727770766;

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
    msg.setTimeStamp(0.175143834306);
    msg.setSource(7891U);
    msg.setSourceEntity(154U);
    msg.setDestination(33237U);
    msg.setDestinationEntity(63U);
    msg.value = 0.193094137614;

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
    msg.setTimeStamp(0.255642087544);
    msg.setSource(47448U);
    msg.setSourceEntity(219U);
    msg.setDestination(5873U);
    msg.setDestinationEntity(133U);
    msg.value = 0.858526646865;

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
    msg.setTimeStamp(0.0846240131961);
    msg.setSource(62669U);
    msg.setSourceEntity(84U);
    msg.setDestination(51588U);
    msg.setDestinationEntity(157U);
    msg.value = 0.0451918908489;

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
    msg.setTimeStamp(0.42236103296);
    msg.setSource(36862U);
    msg.setSourceEntity(127U);
    msg.setDestination(51269U);
    msg.setDestinationEntity(134U);
    msg.value = 0.181991322837;

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
    msg.setTimeStamp(0.793175213713);
    msg.setSource(64073U);
    msg.setSourceEntity(56U);
    msg.setDestination(54958U);
    msg.setDestinationEntity(183U);
    msg.value = 0.918013189769;

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
    msg.setTimeStamp(0.0779120560463);
    msg.setSource(26540U);
    msg.setSourceEntity(75U);
    msg.setDestination(47172U);
    msg.setDestinationEntity(82U);
    msg.value = 0.0947711136724;

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
    msg.setTimeStamp(0.0106386758196);
    msg.setSource(64253U);
    msg.setSourceEntity(209U);
    msg.setDestination(20239U);
    msg.setDestinationEntity(172U);
    msg.value = 0.237271426923;

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
    msg.setTimeStamp(0.882367360679);
    msg.setSource(51860U);
    msg.setSourceEntity(143U);
    msg.setDestination(64319U);
    msg.setDestinationEntity(45U);
    msg.value = 0.772062082145;

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
    msg.setTimeStamp(0.44590001645);
    msg.setSource(37672U);
    msg.setSourceEntity(90U);
    msg.setDestination(21695U);
    msg.setDestinationEntity(122U);
    msg.value = 0.350108547183;

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
    msg.setTimeStamp(0.485495222559);
    msg.setSource(40497U);
    msg.setSourceEntity(108U);
    msg.setDestination(6213U);
    msg.setDestinationEntity(44U);
    msg.value = 0.397186284214;

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
    msg.setTimeStamp(0.345913186539);
    msg.setSource(32913U);
    msg.setSourceEntity(8U);
    msg.setDestination(6898U);
    msg.setDestinationEntity(162U);
    msg.value = 0.918289743475;

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
    msg.setTimeStamp(0.782966018087);
    msg.setSource(17056U);
    msg.setSourceEntity(178U);
    msg.setDestination(62471U);
    msg.setDestinationEntity(169U);
    msg.value = 0.797865984473;

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
    msg.setTimeStamp(0.476666471878);
    msg.setSource(39595U);
    msg.setSourceEntity(231U);
    msg.setDestination(31743U);
    msg.setDestinationEntity(7U);
    msg.value = 0.312430510989;

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
    msg.setTimeStamp(0.740730098794);
    msg.setSource(4459U);
    msg.setSourceEntity(53U);
    msg.setDestination(61482U);
    msg.setDestinationEntity(199U);
    msg.value = 0.250640557945;

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
    msg.setTimeStamp(0.894336620787);
    msg.setSource(32003U);
    msg.setSourceEntity(241U);
    msg.setDestination(52089U);
    msg.setDestinationEntity(13U);
    msg.value = 0.221059098931;

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
    msg.setTimeStamp(0.38583244011);
    msg.setSource(32827U);
    msg.setSourceEntity(163U);
    msg.setDestination(38360U);
    msg.setDestinationEntity(19U);
    msg.validity = 61593U;
    msg.type = 177U;
    msg.tow = 4078826838U;
    msg.base_lat = 0.789129993763;
    msg.base_lon = 0.355553982831;
    msg.base_height = 0.671527469244;
    msg.n = 0.399303692499;
    msg.e = 0.195502311094;
    msg.d = 0.446552293951;
    msg.v_n = 0.923276742192;
    msg.v_e = 0.0409529507353;
    msg.v_d = 0.753207925767;
    msg.satellites = 199U;
    msg.iar_hyp = 52259U;
    msg.iar_ratio = 0.653361439437;

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
    msg.setTimeStamp(0.970858603251);
    msg.setSource(14019U);
    msg.setSourceEntity(187U);
    msg.setDestination(27783U);
    msg.setDestinationEntity(72U);
    msg.validity = 6636U;
    msg.type = 163U;
    msg.tow = 1725356185U;
    msg.base_lat = 0.128854938902;
    msg.base_lon = 0.97895502973;
    msg.base_height = 0.814234832859;
    msg.n = 0.106197678027;
    msg.e = 0.29665278023;
    msg.d = 0.645419939602;
    msg.v_n = 0.992360659923;
    msg.v_e = 0.173684740629;
    msg.v_d = 0.872927232842;
    msg.satellites = 58U;
    msg.iar_hyp = 19131U;
    msg.iar_ratio = 0.233378519792;

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
    msg.setTimeStamp(0.936863898338);
    msg.setSource(51792U);
    msg.setSourceEntity(195U);
    msg.setDestination(12797U);
    msg.setDestinationEntity(138U);
    msg.validity = 9278U;
    msg.type = 81U;
    msg.tow = 2979897304U;
    msg.base_lat = 0.343083817589;
    msg.base_lon = 0.892095843936;
    msg.base_height = 0.0400416337551;
    msg.n = 0.739316989876;
    msg.e = 0.588116026075;
    msg.d = 0.424499919656;
    msg.v_n = 0.743246156526;
    msg.v_e = 0.0445741677706;
    msg.v_d = 0.101665986612;
    msg.satellites = 100U;
    msg.iar_hyp = 38392U;
    msg.iar_ratio = 0.997104935695;

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
    msg.setTimeStamp(0.188521037743);
    msg.setSource(65358U);
    msg.setSourceEntity(61U);
    msg.setDestination(30817U);
    msg.setDestinationEntity(68U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.379225602949;
    tmp_msg_0.lon = 0.417493125931;
    tmp_msg_0.height = 0.401600049009;
    tmp_msg_0.x = 0.495909813182;
    tmp_msg_0.y = 0.60497241236;
    tmp_msg_0.z = 0.788912577396;
    tmp_msg_0.phi = 0.0324509489954;
    tmp_msg_0.theta = 0.576702302168;
    tmp_msg_0.psi = 0.0400896776582;
    tmp_msg_0.u = 0.0634987314452;
    tmp_msg_0.v = 0.039884310395;
    tmp_msg_0.w = 0.617484850836;
    tmp_msg_0.vx = 0.330924941914;
    tmp_msg_0.vy = 0.960612043122;
    tmp_msg_0.vz = 0.0851156584449;
    tmp_msg_0.p = 0.432803501994;
    tmp_msg_0.q = 0.889162479603;
    tmp_msg_0.r = 0.0462748812767;
    tmp_msg_0.depth = 0.706689925423;
    tmp_msg_0.alt = 0.634551771448;
    msg.state.set(tmp_msg_0);
    msg.type = 218U;

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
    msg.setTimeStamp(0.0738214704663);
    msg.setSource(15127U);
    msg.setSourceEntity(192U);
    msg.setDestination(64619U);
    msg.setDestinationEntity(191U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.342271563924;
    tmp_msg_0.lon = 0.714528818926;
    tmp_msg_0.height = 0.106775703347;
    tmp_msg_0.x = 0.2937220166;
    tmp_msg_0.y = 0.471429476286;
    tmp_msg_0.z = 0.227697661328;
    tmp_msg_0.phi = 0.781696413582;
    tmp_msg_0.theta = 0.729434166182;
    tmp_msg_0.psi = 0.148778106505;
    tmp_msg_0.u = 0.221736316273;
    tmp_msg_0.v = 0.0519776109505;
    tmp_msg_0.w = 0.199428060773;
    tmp_msg_0.vx = 0.914957949275;
    tmp_msg_0.vy = 0.196192901097;
    tmp_msg_0.vz = 0.18502439997;
    tmp_msg_0.p = 0.320403792771;
    tmp_msg_0.q = 0.276951866915;
    tmp_msg_0.r = 0.0980954831896;
    tmp_msg_0.depth = 0.111936526736;
    tmp_msg_0.alt = 0.445741656347;
    msg.state.set(tmp_msg_0);
    msg.type = 152U;

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
    msg.setTimeStamp(0.348696275847);
    msg.setSource(2618U);
    msg.setSourceEntity(137U);
    msg.setDestination(62502U);
    msg.setDestinationEntity(54U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.314332874925;
    tmp_msg_0.lon = 0.18436369917;
    tmp_msg_0.height = 0.408028496908;
    tmp_msg_0.x = 0.309606328853;
    tmp_msg_0.y = 0.89992167889;
    tmp_msg_0.z = 0.857537010895;
    tmp_msg_0.phi = 0.334886222554;
    tmp_msg_0.theta = 0.688551182904;
    tmp_msg_0.psi = 0.61208025976;
    tmp_msg_0.u = 0.208466627163;
    tmp_msg_0.v = 0.112878953381;
    tmp_msg_0.w = 0.159948002662;
    tmp_msg_0.vx = 0.238168128642;
    tmp_msg_0.vy = 0.347483736529;
    tmp_msg_0.vz = 0.722969726361;
    tmp_msg_0.p = 0.590314557762;
    tmp_msg_0.q = 0.5649653786;
    tmp_msg_0.r = 0.519902390133;
    tmp_msg_0.depth = 0.674137919889;
    tmp_msg_0.alt = 0.209196831572;
    msg.state.set(tmp_msg_0);
    msg.type = 152U;

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
    msg.setTimeStamp(0.310574778414);
    msg.setSource(41198U);
    msg.setSourceEntity(22U);
    msg.setDestination(12831U);
    msg.setDestinationEntity(211U);
    msg.value = 0.743615976624;

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
    msg.setTimeStamp(0.530231102661);
    msg.setSource(6809U);
    msg.setSourceEntity(38U);
    msg.setDestination(6490U);
    msg.setDestinationEntity(50U);
    msg.value = 0.135529772256;

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
    msg.setTimeStamp(0.845232177724);
    msg.setSource(34939U);
    msg.setSourceEntity(181U);
    msg.setDestination(8859U);
    msg.setDestinationEntity(228U);
    msg.value = 0.897524538931;

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
    msg.setTimeStamp(0.616647674026);
    msg.setSource(15665U);
    msg.setSourceEntity(212U);
    msg.setDestination(32606U);
    msg.setDestinationEntity(240U);
    msg.value = 0.00318804853592;

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
    msg.setTimeStamp(0.506164512021);
    msg.setSource(30774U);
    msg.setSourceEntity(81U);
    msg.setDestination(41140U);
    msg.setDestinationEntity(104U);
    msg.value = 0.732927784733;

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
    msg.setTimeStamp(0.236903502446);
    msg.setSource(2119U);
    msg.setSourceEntity(213U);
    msg.setDestination(13952U);
    msg.setDestinationEntity(153U);
    msg.value = 0.960971300832;

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
    msg.setTimeStamp(0.337928919295);
    msg.setSource(6350U);
    msg.setSourceEntity(109U);
    msg.setDestination(16046U);
    msg.setDestinationEntity(46U);
    msg.value = 0.990017209113;

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
    msg.setTimeStamp(0.238517486091);
    msg.setSource(12014U);
    msg.setSourceEntity(37U);
    msg.setDestination(566U);
    msg.setDestinationEntity(118U);
    msg.value = 0.0467853409311;

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
    msg.setTimeStamp(0.783895804203);
    msg.setSource(7759U);
    msg.setSourceEntity(181U);
    msg.setDestination(18137U);
    msg.setDestinationEntity(73U);
    msg.value = 0.254695584318;

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
    msg.setTimeStamp(0.0535354981076);
    msg.setSource(1276U);
    msg.setSourceEntity(33U);
    msg.setDestination(47442U);
    msg.setDestinationEntity(218U);
    msg.value = 0.364462664201;

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
    msg.setTimeStamp(0.130144119392);
    msg.setSource(57904U);
    msg.setSourceEntity(213U);
    msg.setDestination(20546U);
    msg.setDestinationEntity(185U);
    msg.value = 0.0729970707865;

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
    msg.setTimeStamp(0.0648414352582);
    msg.setSource(62315U);
    msg.setSourceEntity(120U);
    msg.setDestination(12853U);
    msg.setDestinationEntity(236U);
    msg.value = 0.72938758293;

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
    msg.setTimeStamp(0.733712366817);
    msg.setSource(49149U);
    msg.setSourceEntity(0U);
    msg.setDestination(42740U);
    msg.setDestinationEntity(193U);
    msg.value = 0.901652319342;

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
    msg.setTimeStamp(0.0189603448927);
    msg.setSource(55647U);
    msg.setSourceEntity(24U);
    msg.setDestination(19264U);
    msg.setDestinationEntity(252U);
    msg.value = 0.30880521114;

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
    msg.setTimeStamp(0.705884012526);
    msg.setSource(7999U);
    msg.setSourceEntity(95U);
    msg.setDestination(33839U);
    msg.setDestinationEntity(205U);
    msg.value = 0.209048104948;

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
    msg.setTimeStamp(0.951264296019);
    msg.setSource(3597U);
    msg.setSourceEntity(245U);
    msg.setDestination(19512U);
    msg.setDestinationEntity(129U);
    msg.id = 241U;
    msg.zoom = 67U;
    msg.action = 247U;

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
    msg.setTimeStamp(0.474245795094);
    msg.setSource(57417U);
    msg.setSourceEntity(159U);
    msg.setDestination(28672U);
    msg.setDestinationEntity(217U);
    msg.id = 225U;
    msg.zoom = 124U;
    msg.action = 167U;

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
    msg.setTimeStamp(0.0623469762448);
    msg.setSource(18194U);
    msg.setSourceEntity(234U);
    msg.setDestination(53105U);
    msg.setDestinationEntity(123U);
    msg.id = 224U;
    msg.zoom = 194U;
    msg.action = 188U;

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
    msg.setTimeStamp(0.788273521597);
    msg.setSource(57446U);
    msg.setSourceEntity(113U);
    msg.setDestination(9200U);
    msg.setDestinationEntity(126U);
    msg.id = 124U;
    msg.value = 0.321680016812;

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
    msg.setTimeStamp(0.520640538578);
    msg.setSource(17969U);
    msg.setSourceEntity(162U);
    msg.setDestination(36923U);
    msg.setDestinationEntity(12U);
    msg.id = 62U;
    msg.value = 0.218816401935;

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
    msg.setTimeStamp(0.0253316727602);
    msg.setSource(40857U);
    msg.setSourceEntity(158U);
    msg.setDestination(25490U);
    msg.setDestinationEntity(40U);
    msg.id = 182U;
    msg.value = 0.160009258811;

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
    msg.setTimeStamp(0.0612868959698);
    msg.setSource(17793U);
    msg.setSourceEntity(19U);
    msg.setDestination(3987U);
    msg.setDestinationEntity(92U);
    msg.id = 158U;
    msg.value = 0.0166146249529;

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
    msg.setTimeStamp(0.00097847977475);
    msg.setSource(31034U);
    msg.setSourceEntity(76U);
    msg.setDestination(39402U);
    msg.setDestinationEntity(136U);
    msg.id = 236U;
    msg.value = 0.0336581270636;

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
    msg.setTimeStamp(0.99803670861);
    msg.setSource(59784U);
    msg.setSourceEntity(56U);
    msg.setDestination(40344U);
    msg.setDestinationEntity(83U);
    msg.id = 34U;
    msg.value = 0.327538247583;

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
    msg.setTimeStamp(0.198831561075);
    msg.setSource(6348U);
    msg.setSourceEntity(244U);
    msg.setDestination(44705U);
    msg.setDestinationEntity(79U);
    msg.id = 95U;
    msg.angle = 0.13054647404;

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
    msg.setTimeStamp(0.906441223347);
    msg.setSource(52426U);
    msg.setSourceEntity(112U);
    msg.setDestination(39416U);
    msg.setDestinationEntity(132U);
    msg.id = 187U;
    msg.angle = 0.819026050188;

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
    msg.setTimeStamp(0.832628804724);
    msg.setSource(22944U);
    msg.setSourceEntity(128U);
    msg.setDestination(61209U);
    msg.setDestinationEntity(151U);
    msg.id = 204U;
    msg.angle = 0.142374908196;

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
    msg.setTimeStamp(0.229467469425);
    msg.setSource(13626U);
    msg.setSourceEntity(190U);
    msg.setDestination(45407U);
    msg.setDestinationEntity(104U);
    msg.op = 72U;
    msg.actions.assign("ZQVGRJEQKJUHZXKBHAHSJAFVLBYUOLSYXEPFOIHBSYXSVDTQYRTZBNSDSICSZTMAZACPGYTZXAGEPKLWEUCXTXYDDVKFRAQXREENCARJLSVPMOLXWJFTQXKDTREINBGCP");

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
    msg.setTimeStamp(0.65756769875);
    msg.setSource(5749U);
    msg.setSourceEntity(186U);
    msg.setDestination(63315U);
    msg.setDestinationEntity(181U);
    msg.op = 112U;
    msg.actions.assign("VXVNWPAGGFROJQJKXRCYKLYBGFGAUEPWZRFNWOINEIHMMARWCMGXWZIMZHARHYT");

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
    msg.setTimeStamp(0.0317939634103);
    msg.setSource(4722U);
    msg.setSourceEntity(217U);
    msg.setDestination(9949U);
    msg.setDestinationEntity(213U);
    msg.op = 200U;
    msg.actions.assign("OXMOFPYJSTOSSRLJTLQQVZWGRUHMMETGNCLSXBKQRWWZFYCJXZWSRBSTCAZBPMSOCCNQAJPHZIGEZCSNHIRZIDTVAASGDVWYNMMUEIFTAAYLMQPYPG");

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
    msg.setTimeStamp(0.377695973756);
    msg.setSource(11484U);
    msg.setSourceEntity(22U);
    msg.setDestination(38413U);
    msg.setDestinationEntity(69U);
    msg.actions.assign("TQWLMKVHLJKXDUDFOKRXNCPOURNYQNZYUSWOTGIPJDOCDTJMRFCV");

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
    msg.setTimeStamp(0.34274547525);
    msg.setSource(57748U);
    msg.setSourceEntity(36U);
    msg.setDestination(9276U);
    msg.setDestinationEntity(5U);
    msg.actions.assign("STUGQLIEPDDNIOOIHLMDVHATRSAYQOUFSXGEYKMRAFCNQTYUTHMPCVBWZVVDNTUAPXFUPYJWOHWCAQTOLSIEOUZABNJJZGIAAPGMIBBNLQHWGVQWZWXYZOHJDMLXHGCNEQMWVOXRRCUWGXIFQKBRNDSCLZPKNEVKTRUDIOJPPLCMMLFKTABVX");

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
    msg.setTimeStamp(0.331980362859);
    msg.setSource(8442U);
    msg.setSourceEntity(161U);
    msg.setDestination(34706U);
    msg.setDestinationEntity(54U);
    msg.actions.assign("LFBGKFAYIFHQYXPVWJTLVRLOJLOCEDSZXZAUCGTDVOQWOZBIBVGIJQMAJMNPCKIRHNHVGANCWBVFFLPMGDYWABPHHVKMOSRDMNUHATEFVTNIXKXNKJRIETXAGFBKZBEQCSJSL");

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
    msg.setTimeStamp(0.243796767915);
    msg.setSource(64966U);
    msg.setSourceEntity(226U);
    msg.setDestination(21379U);
    msg.setDestinationEntity(141U);
    msg.button = 43U;
    msg.value = 29U;

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
    msg.setTimeStamp(0.747551025601);
    msg.setSource(33570U);
    msg.setSourceEntity(40U);
    msg.setDestination(23268U);
    msg.setDestinationEntity(111U);
    msg.button = 0U;
    msg.value = 185U;

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
    msg.setTimeStamp(0.3375303866);
    msg.setSource(1049U);
    msg.setSourceEntity(78U);
    msg.setDestination(62607U);
    msg.setDestinationEntity(238U);
    msg.button = 59U;
    msg.value = 48U;

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
    msg.setTimeStamp(0.843327167488);
    msg.setSource(59968U);
    msg.setSourceEntity(205U);
    msg.setDestination(29513U);
    msg.setDestinationEntity(57U);
    msg.op = 22U;
    msg.text.assign("MRKYUGVXQBPALQMIDDWSXPREBYNNYLMQGXBZTHRCZFYVDLUWYBGQSFYCSAUEFTDVNYXSOTOJWENLITOQHLNSRNCBZAJHGUMHJGDEHIOXGFPVPAOHKGZAUWHKZMPOEAYCKZHMJIVFJTPZBAJKLUQISUNINAHVDQIRKCQODTOKCRWXPUEPBNFBEWHCMGUYFEMZQWLGTMTKVZWSKCIXDJURBSXRWNXWEGCDZIJMKDJSFX");

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
    msg.setTimeStamp(0.998061867261);
    msg.setSource(62915U);
    msg.setSourceEntity(123U);
    msg.setDestination(61959U);
    msg.setDestinationEntity(146U);
    msg.op = 23U;
    msg.text.assign("TBJPYQFOAPDIQMCUJ");

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
    msg.setTimeStamp(0.953789487764);
    msg.setSource(41441U);
    msg.setSourceEntity(182U);
    msg.setDestination(15486U);
    msg.setDestinationEntity(112U);
    msg.op = 58U;
    msg.text.assign("UOCLNVPEOAILHJTRTFYAWUDPQMSHGLSYNKMRJEQCDXNLYAJRXKZOIRCWPIMJAUNOGZIPVBFJIGSYWDPLHLXBZTCSNYFKGRCQAVMENDHFGKQSPPMESKZQGCGQIFMOJUKKCFETXZEFOENPQNBFTZFYWKPJYDJHJSIBDMRRIORULSBOUHBYSDVAXLGVHDAZWBAMETZIBCVIARTXBZWO");

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
    msg.setTimeStamp(0.653683591961);
    msg.setSource(56544U);
    msg.setSourceEntity(56U);
    msg.setDestination(61244U);
    msg.setDestinationEntity(87U);
    msg.op = 53U;
    msg.time_remain = 0.82000178308;
    msg.sched_time = 0.30565882698;

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
    msg.setTimeStamp(0.130545675602);
    msg.setSource(48733U);
    msg.setSourceEntity(181U);
    msg.setDestination(10583U);
    msg.setDestinationEntity(191U);
    msg.op = 104U;
    msg.time_remain = 0.704181352832;
    msg.sched_time = 0.329805524475;

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
    msg.setTimeStamp(0.672281022296);
    msg.setSource(58748U);
    msg.setSourceEntity(210U);
    msg.setDestination(42519U);
    msg.setDestinationEntity(48U);
    msg.op = 215U;
    msg.time_remain = 0.436380746065;
    msg.sched_time = 0.693202209311;

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
    msg.setTimeStamp(0.998179823515);
    msg.setSource(40005U);
    msg.setSourceEntity(251U);
    msg.setDestination(45291U);
    msg.setDestinationEntity(96U);
    msg.name.assign("URQCOUSERNZCLBMXMWNFJLJSFMKPLOBVNMAIJEJPBDECGPQTNBWSFPKHAXPXX");
    msg.op = 122U;
    msg.sched_time = 0.491306255678;

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
    msg.setTimeStamp(0.484795642173);
    msg.setSource(60766U);
    msg.setSourceEntity(72U);
    msg.setDestination(13836U);
    msg.setDestinationEntity(0U);
    msg.name.assign("NCBXLIJTQLJJGFNOREPVVGAFPSYQBNAGNSKURDOESADQUDOEYCLIUVALOLXJJMHWXFDUFWZFIDRKJXAAIHZNSCNSQJYPMTBMCOHYBQVYJXOKHMTZSNYGRGZUMDRWRXDVVGNLLHSQQELPCHF");
    msg.op = 236U;
    msg.sched_time = 0.253675721355;

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
    msg.setTimeStamp(0.793711011278);
    msg.setSource(21517U);
    msg.setSourceEntity(33U);
    msg.setDestination(22145U);
    msg.setDestinationEntity(162U);
    msg.name.assign("INRESCKGDNIXMWLUKYOZMJRKEPQQPMPONBXQDMRZLD");
    msg.op = 131U;
    msg.sched_time = 0.183558962821;

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
    msg.setTimeStamp(0.855895816665);
    msg.setSource(8365U);
    msg.setSourceEntity(116U);
    msg.setDestination(25552U);
    msg.setDestinationEntity(231U);

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
    msg.setTimeStamp(0.271359412946);
    msg.setSource(47432U);
    msg.setSourceEntity(36U);
    msg.setDestination(64405U);
    msg.setDestinationEntity(24U);

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
    msg.setTimeStamp(0.0432209166408);
    msg.setSource(57560U);
    msg.setSourceEntity(149U);
    msg.setDestination(32030U);
    msg.setDestinationEntity(12U);

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
    msg.setTimeStamp(0.208567044147);
    msg.setSource(27272U);
    msg.setSourceEntity(34U);
    msg.setDestination(20773U);
    msg.setDestinationEntity(16U);
    msg.name.assign("MAXIAPRLEUXZZHQBWCEMSXPYWRINNWB");
    msg.state = 161U;

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
    msg.setTimeStamp(0.755644092514);
    msg.setSource(26326U);
    msg.setSourceEntity(167U);
    msg.setDestination(64622U);
    msg.setDestinationEntity(176U);
    msg.name.assign("UCUYIXUALSFDZCICQTWEWRGRPVOXEMMMBOAEPNUOIEHDJBYSLUHDPQHEKCFAATVBLZVDVKIDOEHFHPAQS");
    msg.state = 9U;

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
    msg.setTimeStamp(0.320529659513);
    msg.setSource(1504U);
    msg.setSourceEntity(115U);
    msg.setDestination(24406U);
    msg.setDestinationEntity(123U);
    msg.name.assign("GMYOOAALOUUPYDWIWJ");
    msg.state = 203U;

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
    msg.setTimeStamp(0.540699509767);
    msg.setSource(9432U);
    msg.setSourceEntity(173U);
    msg.setDestination(19825U);
    msg.setDestinationEntity(177U);
    msg.name.assign("KYSADTPAQFTBHJDFSDGLUOVVJRWKVBAPVSUYEDCMSBFWIKORTLGIHZHACCLSZFAKCMFGDDNBWRMXVZEAUTKERWCIKCZLGIALLBOBYHJGSSERZNBEYRPMXTQMIHWSLFJDLJDPGQGVNHYXQNMMCAOYSYPWLZXQMXUKNWMJRPCIECTUQKZRKOIZGYJBNCUPTXMTQXEVZAIRODJFBOWFUJHPLDYPVNI");
    msg.value = 192U;

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
    msg.setTimeStamp(0.415941129484);
    msg.setSource(4457U);
    msg.setSourceEntity(218U);
    msg.setDestination(50914U);
    msg.setDestinationEntity(241U);
    msg.name.assign("YGCEIBIAPGIWYCPNOAWPQYEEMCQYIQNFGUZFMQBBGDUECBIHRTIY");
    msg.value = 116U;

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
    msg.setTimeStamp(0.242219994365);
    msg.setSource(53195U);
    msg.setSourceEntity(141U);
    msg.setDestination(35840U);
    msg.setDestinationEntity(165U);
    msg.name.assign("YVYNMBDMGLDIPWKNOLHICYDLXVBOPMSLXZWTKJTJNSMOTCOZIFGOAEIICZKAMRUWDONNMPHFKAMRDHSKXGNCGVWAXWNHTRZOQYAEBSAERRSCWJANLXGIUE");
    msg.value = 205U;

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
    msg.setTimeStamp(0.369404826454);
    msg.setSource(61854U);
    msg.setSourceEntity(253U);
    msg.setDestination(12168U);
    msg.setDestinationEntity(132U);
    msg.name.assign("FIOJNKRHHIEWXSQEZUH");

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
    msg.setTimeStamp(0.519605091123);
    msg.setSource(31350U);
    msg.setSourceEntity(134U);
    msg.setDestination(52703U);
    msg.setDestinationEntity(89U);
    msg.name.assign("HVPIXURFRMNLPYURIDNLBXJLGYFOKMVMDYNITQGBWHVPUEZHGQEZOUBVUHLNXKFODCNAJXFLVGXEHPTEOSAFGJYEQAJIBJQPQDKHWTIQEYNQFKPMJKUUJWEDGQFHWHZPRWLMDCHGLXSBSWUYBFTZKKATIDCSBQRANWSZUMIHOARTACV");

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
    msg.setTimeStamp(0.746916198461);
    msg.setSource(24639U);
    msg.setSourceEntity(226U);
    msg.setDestination(33928U);
    msg.setDestinationEntity(114U);
    msg.name.assign("QUGVLTYPORSQRBHDWRWLCSVONYQLYJYJUCZBDTUEKRFBHXUJTMABQJCWVXZIFKACMSHPEWGGINCPAWLMZO");

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
    msg.setTimeStamp(0.304655013507);
    msg.setSource(7816U);
    msg.setSourceEntity(155U);
    msg.setDestination(27918U);
    msg.setDestinationEntity(223U);
    msg.name.assign("RWVCCVRMKYPQKOUNTNKSHMJMSVQJCISASZYGIORMZIEWWBEJXXFITJAEHPDVVGFZMHWINKAFQATMNNOOQALPLXUSZNHPMBWIGWFHBHRIODPFXLUYUXRECLEAJHQDTSQKIWODVHPRQX");
    msg.value = 187U;

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
    msg.setTimeStamp(0.80547805997);
    msg.setSource(50787U);
    msg.setSourceEntity(44U);
    msg.setDestination(60385U);
    msg.setDestinationEntity(90U);
    msg.name.assign("VZFJLFDFLTQDMAKZBJVPWMRTXUFCKVXWBWPTRFOJYMYII");
    msg.value = 124U;

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
    msg.setTimeStamp(0.702655857479);
    msg.setSource(7735U);
    msg.setSourceEntity(82U);
    msg.setDestination(13063U);
    msg.setDestinationEntity(251U);
    msg.name.assign("XMIVIASLZQCABEUOLNWRYPLZBOMILQQTANJDRVDZZIKVTKQFENDZPOWBCJPKPPVMUGQBYHYHIXRMTNSQFMOJQATWZDEOGMCHSKSUHAOCVKLWOYANHCSBWCHEWMNVTDEYTAUEWYKGHTAXCLRBFFGGNSFCFZRXADTIURNMRSBJYEORHEQNRDBQJGXAIXFVFXJLVGTYSWPFJVYESMOPQOMFBVPZRZZKXKGIJKUWHHLUKULSXUDCWPPDG");
    msg.value = 246U;

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
    msg.setTimeStamp(0.930222547988);
    msg.setSource(12999U);
    msg.setSourceEntity(67U);
    msg.setDestination(35060U);
    msg.setDestinationEntity(30U);
    msg.id = 142U;
    msg.period = 3146578885U;
    msg.duty_cycle = 1825160029U;

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
    msg.setTimeStamp(0.0674550440716);
    msg.setSource(28986U);
    msg.setSourceEntity(68U);
    msg.setDestination(22375U);
    msg.setDestinationEntity(15U);
    msg.id = 198U;
    msg.period = 1430241294U;
    msg.duty_cycle = 754476084U;

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
    msg.setTimeStamp(0.685242859008);
    msg.setSource(63791U);
    msg.setSourceEntity(249U);
    msg.setDestination(33419U);
    msg.setDestinationEntity(189U);
    msg.id = 107U;
    msg.period = 4293076014U;
    msg.duty_cycle = 3100713032U;

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
    msg.setTimeStamp(0.870356437824);
    msg.setSource(44315U);
    msg.setSourceEntity(112U);
    msg.setDestination(22000U);
    msg.setDestinationEntity(6U);
    msg.id = 236U;
    msg.period = 3169346066U;
    msg.duty_cycle = 529832876U;

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
    msg.setTimeStamp(0.122644716705);
    msg.setSource(33409U);
    msg.setSourceEntity(221U);
    msg.setDestination(41496U);
    msg.setDestinationEntity(102U);
    msg.id = 34U;
    msg.period = 3631179076U;
    msg.duty_cycle = 2703917170U;

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
    msg.setTimeStamp(0.539294782057);
    msg.setSource(20117U);
    msg.setSourceEntity(48U);
    msg.setDestination(27977U);
    msg.setDestinationEntity(141U);
    msg.id = 178U;
    msg.period = 3152413925U;
    msg.duty_cycle = 362454274U;

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
    msg.setTimeStamp(0.456166093487);
    msg.setSource(23157U);
    msg.setSourceEntity(91U);
    msg.setDestination(52906U);
    msg.setDestinationEntity(195U);
    msg.lat = 0.663782402764;
    msg.lon = 0.62796040173;
    msg.height = 0.521078109964;
    msg.x = 0.591737792895;
    msg.y = 0.932230813564;
    msg.z = 0.732470446868;
    msg.phi = 0.270780876594;
    msg.theta = 0.986304708666;
    msg.psi = 0.143801530589;
    msg.u = 0.142503183176;
    msg.v = 0.731617595106;
    msg.w = 0.398669400548;
    msg.vx = 0.819631541716;
    msg.vy = 0.963800083221;
    msg.vz = 0.759199561487;
    msg.p = 0.569982848067;
    msg.q = 0.196558877264;
    msg.r = 0.646280801194;
    msg.depth = 0.83941431084;
    msg.alt = 0.28836001219;

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
    msg.setTimeStamp(0.383093596899);
    msg.setSource(35081U);
    msg.setSourceEntity(11U);
    msg.setDestination(14029U);
    msg.setDestinationEntity(30U);
    msg.lat = 0.121507764704;
    msg.lon = 0.864924700502;
    msg.height = 0.122224889676;
    msg.x = 0.13750874512;
    msg.y = 0.552091048;
    msg.z = 0.521810861861;
    msg.phi = 0.915976174842;
    msg.theta = 0.883778481781;
    msg.psi = 0.458000296462;
    msg.u = 0.783930578703;
    msg.v = 0.920615001369;
    msg.w = 0.549736013107;
    msg.vx = 0.867261057516;
    msg.vy = 0.158607663379;
    msg.vz = 0.702623505058;
    msg.p = 0.807033789911;
    msg.q = 0.812212587967;
    msg.r = 0.401620469106;
    msg.depth = 0.59853670588;
    msg.alt = 0.606306441572;

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
    msg.setTimeStamp(0.998687439102);
    msg.setSource(36870U);
    msg.setSourceEntity(62U);
    msg.setDestination(46739U);
    msg.setDestinationEntity(229U);
    msg.lat = 0.37090564915;
    msg.lon = 0.818367527509;
    msg.height = 0.477645175659;
    msg.x = 0.594251420415;
    msg.y = 0.412277278312;
    msg.z = 0.865059057411;
    msg.phi = 0.393532162904;
    msg.theta = 0.852888085368;
    msg.psi = 0.597150128573;
    msg.u = 0.527285635769;
    msg.v = 0.830555772499;
    msg.w = 0.111483262472;
    msg.vx = 0.21149106069;
    msg.vy = 0.284304941975;
    msg.vz = 0.902353227129;
    msg.p = 0.102797791107;
    msg.q = 0.938904339067;
    msg.r = 0.717987014191;
    msg.depth = 0.230607558607;
    msg.alt = 0.454278570651;

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
    msg.setTimeStamp(0.321786109811);
    msg.setSource(2146U);
    msg.setSourceEntity(43U);
    msg.setDestination(12263U);
    msg.setDestinationEntity(153U);
    msg.x = 0.616140058222;
    msg.y = 0.152058368542;
    msg.z = 0.39036644772;

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
    msg.setTimeStamp(0.625021829052);
    msg.setSource(57958U);
    msg.setSourceEntity(147U);
    msg.setDestination(23921U);
    msg.setDestinationEntity(101U);
    msg.x = 0.144062473889;
    msg.y = 0.312798989574;
    msg.z = 0.747639623333;

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
    msg.setTimeStamp(0.120720364072);
    msg.setSource(8886U);
    msg.setSourceEntity(26U);
    msg.setDestination(47084U);
    msg.setDestinationEntity(96U);
    msg.x = 0.423473713382;
    msg.y = 0.122676189602;
    msg.z = 0.187054389848;

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
    msg.setTimeStamp(0.704676749628);
    msg.setSource(61112U);
    msg.setSourceEntity(177U);
    msg.setDestination(34058U);
    msg.setDestinationEntity(251U);
    msg.value = 0.847145066144;

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
    msg.setTimeStamp(0.906081205271);
    msg.setSource(562U);
    msg.setSourceEntity(98U);
    msg.setDestination(2606U);
    msg.setDestinationEntity(149U);
    msg.value = 0.692609279685;

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
    msg.setTimeStamp(0.229048633724);
    msg.setSource(15186U);
    msg.setSourceEntity(139U);
    msg.setDestination(49237U);
    msg.setDestinationEntity(118U);
    msg.value = 0.989581653244;

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
    msg.setTimeStamp(0.219753128914);
    msg.setSource(58787U);
    msg.setSourceEntity(24U);
    msg.setDestination(30338U);
    msg.setDestinationEntity(14U);
    msg.value = 0.666625407072;

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
    msg.setTimeStamp(0.646250743116);
    msg.setSource(45345U);
    msg.setSourceEntity(23U);
    msg.setDestination(57013U);
    msg.setDestinationEntity(40U);
    msg.value = 0.00655421315776;

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
    msg.setTimeStamp(0.386869151191);
    msg.setSource(10624U);
    msg.setSourceEntity(116U);
    msg.setDestination(9862U);
    msg.setDestinationEntity(161U);
    msg.value = 0.347774495231;

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
    msg.setTimeStamp(0.542668596321);
    msg.setSource(61814U);
    msg.setSourceEntity(200U);
    msg.setDestination(49792U);
    msg.setDestinationEntity(17U);
    msg.x = 0.572974546719;
    msg.y = 0.599088813559;
    msg.z = 0.568589493851;
    msg.phi = 0.092044761763;
    msg.theta = 0.0322427234821;
    msg.psi = 0.0873166023895;
    msg.p = 0.577778867125;
    msg.q = 0.820305923102;
    msg.r = 0.371595147825;
    msg.u = 0.35659615876;
    msg.v = 0.69886798616;
    msg.w = 0.830403340292;
    msg.bias_psi = 0.537222062107;
    msg.bias_r = 0.152958629447;

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
    msg.setTimeStamp(0.223669137955);
    msg.setSource(57288U);
    msg.setSourceEntity(213U);
    msg.setDestination(28705U);
    msg.setDestinationEntity(223U);
    msg.x = 0.785012763952;
    msg.y = 0.227138950556;
    msg.z = 0.803703684598;
    msg.phi = 0.309727418869;
    msg.theta = 0.508771780767;
    msg.psi = 0.385649247393;
    msg.p = 0.484003449129;
    msg.q = 0.428096296086;
    msg.r = 0.74927628702;
    msg.u = 0.683354974491;
    msg.v = 0.702246966051;
    msg.w = 0.698752620929;
    msg.bias_psi = 0.961989036931;
    msg.bias_r = 0.472975141964;

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
    msg.setTimeStamp(0.371967713663);
    msg.setSource(64999U);
    msg.setSourceEntity(168U);
    msg.setDestination(33221U);
    msg.setDestinationEntity(77U);
    msg.x = 0.931243432053;
    msg.y = 0.800399169206;
    msg.z = 0.135098265667;
    msg.phi = 0.168229915269;
    msg.theta = 0.135934736895;
    msg.psi = 0.141979884905;
    msg.p = 0.726096558404;
    msg.q = 0.232320215392;
    msg.r = 0.960635968532;
    msg.u = 0.762547624036;
    msg.v = 0.398362197359;
    msg.w = 0.883218837045;
    msg.bias_psi = 0.198347348904;
    msg.bias_r = 0.499407306648;

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
    msg.setTimeStamp(0.922328412649);
    msg.setSource(14523U);
    msg.setSourceEntity(43U);
    msg.setDestination(65284U);
    msg.setDestinationEntity(150U);
    msg.bias_psi = 0.149245126841;
    msg.bias_r = 0.923255743169;
    msg.cog = 0.659621457836;
    msg.cyaw = 0.675418521496;
    msg.gps_rej_level = 0.565258789809;
    msg.lbl_rej_level = 0.729194565456;
    msg.custom_x = 0.474836494911;
    msg.custom_y = 0.961129914423;
    msg.custom_z = 0.922815916938;

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
    msg.setTimeStamp(0.671679524658);
    msg.setSource(3648U);
    msg.setSourceEntity(18U);
    msg.setDestination(21902U);
    msg.setDestinationEntity(30U);
    msg.bias_psi = 0.783926712277;
    msg.bias_r = 0.178282548236;
    msg.cog = 0.321667371656;
    msg.cyaw = 0.528202056225;
    msg.gps_rej_level = 0.568947488876;
    msg.lbl_rej_level = 0.821832419836;
    msg.custom_x = 0.59900413142;
    msg.custom_y = 0.928672606173;
    msg.custom_z = 0.42649808686;

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
    msg.setTimeStamp(0.380678360343);
    msg.setSource(21315U);
    msg.setSourceEntity(249U);
    msg.setDestination(17542U);
    msg.setDestinationEntity(168U);
    msg.bias_psi = 0.347717863665;
    msg.bias_r = 0.598790582711;
    msg.cog = 0.59561823536;
    msg.cyaw = 0.54699762413;
    msg.gps_rej_level = 0.425178978853;
    msg.lbl_rej_level = 0.981471310674;
    msg.custom_x = 0.449476234146;
    msg.custom_y = 0.388627938015;
    msg.custom_z = 0.863746747792;

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
    msg.setTimeStamp(0.553445463494);
    msg.setSource(46316U);
    msg.setSourceEntity(137U);
    msg.setDestination(60503U);
    msg.setDestinationEntity(29U);
    msg.utc_time = 0.112493648471;
    msg.reason = 197U;

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
    msg.setTimeStamp(0.960189068598);
    msg.setSource(49346U);
    msg.setSourceEntity(245U);
    msg.setDestination(43466U);
    msg.setDestinationEntity(230U);
    msg.utc_time = 0.15863868604;
    msg.reason = 154U;

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
    msg.setTimeStamp(0.923979189826);
    msg.setSource(46099U);
    msg.setSourceEntity(68U);
    msg.setDestination(9296U);
    msg.setDestinationEntity(36U);
    msg.utc_time = 0.42004932543;
    msg.reason = 171U;

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
    msg.setTimeStamp(0.497771955374);
    msg.setSource(37996U);
    msg.setSourceEntity(249U);
    msg.setDestination(10664U);
    msg.setDestinationEntity(87U);
    msg.id = 169U;
    msg.range = 0.420023251742;
    msg.acceptance = 91U;

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
    msg.setTimeStamp(0.189337623572);
    msg.setSource(17316U);
    msg.setSourceEntity(129U);
    msg.setDestination(45401U);
    msg.setDestinationEntity(148U);
    msg.id = 93U;
    msg.range = 0.602498153441;
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
    msg.setTimeStamp(0.00424947219335);
    msg.setSource(46914U);
    msg.setSourceEntity(39U);
    msg.setDestination(53240U);
    msg.setDestinationEntity(152U);
    msg.id = 48U;
    msg.range = 0.0620051843247;
    msg.acceptance = 163U;

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
    msg.setTimeStamp(0.851638552173);
    msg.setSource(65152U);
    msg.setSourceEntity(165U);
    msg.setDestination(29685U);
    msg.setDestinationEntity(24U);
    msg.type = 131U;
    msg.reason = 69U;
    msg.value = 0.990259590751;
    msg.timestep = 0.730139971191;

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
    msg.setTimeStamp(0.00441675295708);
    msg.setSource(42180U);
    msg.setSourceEntity(104U);
    msg.setDestination(63352U);
    msg.setDestinationEntity(111U);
    msg.type = 115U;
    msg.reason = 177U;
    msg.value = 0.110120665836;
    msg.timestep = 0.734772943907;

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
    msg.setTimeStamp(0.95278068972);
    msg.setSource(24746U);
    msg.setSourceEntity(182U);
    msg.setDestination(51887U);
    msg.setDestinationEntity(34U);
    msg.type = 135U;
    msg.reason = 248U;
    msg.value = 0.931648303948;
    msg.timestep = 0.632269290214;

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
    msg.setTimeStamp(0.567395856713);
    msg.setSource(49932U);
    msg.setSourceEntity(56U);
    msg.setDestination(46845U);
    msg.setDestinationEntity(219U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("OEZPXFCZHLPQOZTOJVHUAEQSNKPYOYTTJZKILTTCSHYPVABEQLJIINDSXDIGAGYQUKDMKNLNBLSBXVMUNHBGUVGAYQECYUCHGIMIOUFEUDROJESGXWXMONKWBASWETYWMWZCOFBPHFPIBDC");
    tmp_msg_0.lat = 0.208613031615;
    tmp_msg_0.lon = 0.849467759965;
    tmp_msg_0.depth = 0.698205732488;
    tmp_msg_0.query_channel = 160U;
    tmp_msg_0.reply_channel = 117U;
    tmp_msg_0.transponder_delay = 132U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.999075020794;
    msg.y = 0.000356940442498;
    msg.var_x = 0.470065913643;
    msg.var_y = 0.656660569068;
    msg.distance = 0.0978700096848;

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
    msg.setTimeStamp(0.799014698924);
    msg.setSource(54579U);
    msg.setSourceEntity(44U);
    msg.setDestination(14094U);
    msg.setDestinationEntity(93U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("RKLETURCSJLB");
    tmp_msg_0.lat = 0.236380577929;
    tmp_msg_0.lon = 0.265762021755;
    tmp_msg_0.depth = 0.493291902669;
    tmp_msg_0.query_channel = 174U;
    tmp_msg_0.reply_channel = 239U;
    tmp_msg_0.transponder_delay = 184U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.724390209341;
    msg.y = 0.0207504418968;
    msg.var_x = 0.595274323606;
    msg.var_y = 0.784427657994;
    msg.distance = 0.0484906600769;

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
    msg.setTimeStamp(0.424421921595);
    msg.setSource(10663U);
    msg.setSourceEntity(116U);
    msg.setDestination(28293U);
    msg.setDestinationEntity(32U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("OQAHBGDXFPUJMAVDRNQEECYBOBWXKNGXGLAMJMKYCLPZXQNFVFOLIDAUMYPSTREOGDXWSAUNBHOZQDRLWWRPUJGKDBXBVTSLYOTJYKBHWCHYSXUZZXSHJIEGYSUHCFFQTCIVMWKMLKANJRZHVARQCVOMDMJL");
    tmp_msg_0.lat = 0.0541703883261;
    tmp_msg_0.lon = 0.982010778335;
    tmp_msg_0.depth = 0.948896791035;
    tmp_msg_0.query_channel = 112U;
    tmp_msg_0.reply_channel = 190U;
    tmp_msg_0.transponder_delay = 59U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.591865763716;
    msg.y = 0.275612450001;
    msg.var_x = 0.847306048281;
    msg.var_y = 0.574193306002;
    msg.distance = 0.416983623699;

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
    msg.setTimeStamp(0.743585210227);
    msg.setSource(52129U);
    msg.setSourceEntity(136U);
    msg.setDestination(54228U);
    msg.setDestinationEntity(254U);
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
    msg.setTimeStamp(0.442910790644);
    msg.setSource(500U);
    msg.setSourceEntity(242U);
    msg.setDestination(12639U);
    msg.setDestinationEntity(92U);
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
    msg.setTimeStamp(0.497846219632);
    msg.setSource(62430U);
    msg.setSourceEntity(48U);
    msg.setDestination(64234U);
    msg.setDestinationEntity(29U);
    msg.state = 244U;

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
    msg.setTimeStamp(0.181824330281);
    msg.setSource(64414U);
    msg.setSourceEntity(197U);
    msg.setDestination(61681U);
    msg.setDestinationEntity(65U);
    msg.x = 0.464967428106;
    msg.y = 0.741635559849;
    msg.z = 0.0299663435076;

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
    msg.setTimeStamp(0.108062078968);
    msg.setSource(21292U);
    msg.setSourceEntity(57U);
    msg.setDestination(2004U);
    msg.setDestinationEntity(93U);
    msg.x = 0.630898672582;
    msg.y = 0.0284245253051;
    msg.z = 0.0563572135094;

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
    msg.setTimeStamp(0.934557561494);
    msg.setSource(34191U);
    msg.setSourceEntity(114U);
    msg.setDestination(15404U);
    msg.setDestinationEntity(134U);
    msg.x = 0.76284281682;
    msg.y = 0.819730255234;
    msg.z = 0.175838804116;

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
    msg.setTimeStamp(0.0762593237755);
    msg.setSource(45294U);
    msg.setSourceEntity(233U);
    msg.setDestination(1996U);
    msg.setDestinationEntity(129U);
    msg.va = 0.0119042852721;
    msg.aoa = 0.697247883457;
    msg.ssa = 0.541003308025;

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
    msg.setTimeStamp(0.500520545349);
    msg.setSource(37757U);
    msg.setSourceEntity(207U);
    msg.setDestination(27326U);
    msg.setDestinationEntity(120U);
    msg.va = 0.407197017966;
    msg.aoa = 0.270760146711;
    msg.ssa = 0.04578064173;

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
    msg.setTimeStamp(0.0691080112298);
    msg.setSource(55390U);
    msg.setSourceEntity(188U);
    msg.setDestination(50337U);
    msg.setDestinationEntity(2U);
    msg.va = 0.150960555072;
    msg.aoa = 0.125920949261;
    msg.ssa = 0.696297995287;

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
    msg.setTimeStamp(0.787888074083);
    msg.setSource(14642U);
    msg.setSourceEntity(2U);
    msg.setDestination(64125U);
    msg.setDestinationEntity(59U);
    msg.value = 0.457584631673;
    msg.off = 0.663245848372;

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
    msg.setTimeStamp(0.0905607386022);
    msg.setSource(5123U);
    msg.setSourceEntity(47U);
    msg.setDestination(61713U);
    msg.setDestinationEntity(108U);
    msg.value = 0.734794436326;
    msg.off = 0.83211051865;

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
    msg.setTimeStamp(0.422259541502);
    msg.setSource(23241U);
    msg.setSourceEntity(170U);
    msg.setDestination(10169U);
    msg.setDestinationEntity(52U);
    msg.value = 0.188952450795;
    msg.off = 0.814110270289;

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
    msg.setTimeStamp(0.284695802874);
    msg.setSource(15555U);
    msg.setSourceEntity(183U);
    msg.setDestination(35095U);
    msg.setDestinationEntity(159U);
    msg.value = 0.39966903477;
    msg.z_units = 237U;

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
    msg.setTimeStamp(0.534696756193);
    msg.setSource(59950U);
    msg.setSourceEntity(209U);
    msg.setDestination(41518U);
    msg.setDestinationEntity(1U);
    msg.value = 0.783011957544;
    msg.z_units = 117U;

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
    msg.setTimeStamp(0.00882156871987);
    msg.setSource(4294U);
    msg.setSourceEntity(213U);
    msg.setDestination(58045U);
    msg.setDestinationEntity(253U);
    msg.value = 0.0428897810215;
    msg.z_units = 234U;

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
    msg.setTimeStamp(0.829129807589);
    msg.setSource(6912U);
    msg.setSourceEntity(158U);
    msg.setDestination(50905U);
    msg.setDestinationEntity(232U);
    msg.value = 0.479347160253;
    msg.speed_units = 121U;

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
    msg.setTimeStamp(0.34671437666);
    msg.setSource(4453U);
    msg.setSourceEntity(97U);
    msg.setDestination(61088U);
    msg.setDestinationEntity(190U);
    msg.value = 0.0860269426322;
    msg.speed_units = 173U;

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
    msg.setTimeStamp(0.706270354936);
    msg.setSource(17588U);
    msg.setSourceEntity(100U);
    msg.setDestination(47689U);
    msg.setDestinationEntity(126U);
    msg.value = 0.103780885809;
    msg.speed_units = 219U;

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
    msg.setTimeStamp(0.762418118442);
    msg.setSource(41116U);
    msg.setSourceEntity(59U);
    msg.setDestination(20755U);
    msg.setDestinationEntity(240U);
    msg.value = 0.393738057647;

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
    msg.setTimeStamp(0.263872363385);
    msg.setSource(1559U);
    msg.setSourceEntity(178U);
    msg.setDestination(16599U);
    msg.setDestinationEntity(16U);
    msg.value = 0.388146245256;

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
    msg.setTimeStamp(0.739717117461);
    msg.setSource(11177U);
    msg.setSourceEntity(226U);
    msg.setDestination(39422U);
    msg.setDestinationEntity(25U);
    msg.value = 0.0580523475118;

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
    msg.setTimeStamp(0.181755406138);
    msg.setSource(63170U);
    msg.setSourceEntity(149U);
    msg.setDestination(57230U);
    msg.setDestinationEntity(32U);
    msg.value = 0.727337215659;

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
    msg.setTimeStamp(0.0550705217628);
    msg.setSource(42026U);
    msg.setSourceEntity(210U);
    msg.setDestination(38386U);
    msg.setDestinationEntity(73U);
    msg.value = 0.268941987796;

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
    msg.setTimeStamp(0.550674312939);
    msg.setSource(57169U);
    msg.setSourceEntity(196U);
    msg.setDestination(28558U);
    msg.setDestinationEntity(0U);
    msg.value = 0.579455336067;

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
    msg.setTimeStamp(0.994295059229);
    msg.setSource(34453U);
    msg.setSourceEntity(66U);
    msg.setDestination(43242U);
    msg.setDestinationEntity(52U);
    msg.value = 0.197480272518;

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
    msg.setTimeStamp(0.346422077366);
    msg.setSource(25208U);
    msg.setSourceEntity(103U);
    msg.setDestination(29493U);
    msg.setDestinationEntity(81U);
    msg.value = 0.138958045654;

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
    msg.setTimeStamp(0.286361282391);
    msg.setSource(11564U);
    msg.setSourceEntity(197U);
    msg.setDestination(52287U);
    msg.setDestinationEntity(162U);
    msg.value = 0.944222193792;

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
    msg.setTimeStamp(0.45279353996);
    msg.setSource(54431U);
    msg.setSourceEntity(132U);
    msg.setDestination(256U);
    msg.setDestinationEntity(132U);
    msg.path_ref = 1082145447U;
    msg.start_lat = 0.26624031527;
    msg.start_lon = 0.0560423767487;
    msg.start_z = 0.0962787906073;
    msg.start_z_units = 97U;
    msg.end_lat = 0.152870092591;
    msg.end_lon = 0.978438479639;
    msg.end_z = 0.130916909243;
    msg.end_z_units = 253U;
    msg.speed = 0.841738278888;
    msg.speed_units = 202U;
    msg.lradius = 0.589354997185;
    msg.flags = 244U;

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
    msg.setTimeStamp(0.155747631161);
    msg.setSource(8116U);
    msg.setSourceEntity(18U);
    msg.setDestination(32182U);
    msg.setDestinationEntity(163U);
    msg.path_ref = 3523377241U;
    msg.start_lat = 0.292531704204;
    msg.start_lon = 0.646340336356;
    msg.start_z = 0.864893345778;
    msg.start_z_units = 109U;
    msg.end_lat = 0.593072277075;
    msg.end_lon = 0.251912830703;
    msg.end_z = 0.797464396147;
    msg.end_z_units = 27U;
    msg.speed = 0.423761296457;
    msg.speed_units = 24U;
    msg.lradius = 0.249172994959;
    msg.flags = 0U;

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
    msg.setTimeStamp(0.606497194543);
    msg.setSource(40391U);
    msg.setSourceEntity(84U);
    msg.setDestination(38228U);
    msg.setDestinationEntity(164U);
    msg.path_ref = 3961326487U;
    msg.start_lat = 0.61561472534;
    msg.start_lon = 0.924566640946;
    msg.start_z = 0.995060293098;
    msg.start_z_units = 86U;
    msg.end_lat = 0.221966807088;
    msg.end_lon = 0.988075429925;
    msg.end_z = 0.176206957266;
    msg.end_z_units = 196U;
    msg.speed = 0.571669454645;
    msg.speed_units = 96U;
    msg.lradius = 0.525029672553;
    msg.flags = 61U;

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
    msg.setTimeStamp(0.708976674494);
    msg.setSource(659U);
    msg.setSourceEntity(99U);
    msg.setDestination(33041U);
    msg.setDestinationEntity(86U);
    msg.x = 0.44190201732;
    msg.y = 0.481308929264;
    msg.z = 0.426226920328;
    msg.k = 0.0181542978267;
    msg.m = 0.770804290433;
    msg.n = 0.488694075526;
    msg.flags = 13U;

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
    msg.setTimeStamp(0.725578495552);
    msg.setSource(15041U);
    msg.setSourceEntity(74U);
    msg.setDestination(50828U);
    msg.setDestinationEntity(140U);
    msg.x = 0.978838142295;
    msg.y = 0.847704284787;
    msg.z = 0.676255612491;
    msg.k = 0.678112761726;
    msg.m = 0.692942633803;
    msg.n = 0.63047299844;
    msg.flags = 85U;

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
    msg.setTimeStamp(0.913725044854);
    msg.setSource(36742U);
    msg.setSourceEntity(178U);
    msg.setDestination(58077U);
    msg.setDestinationEntity(228U);
    msg.x = 0.0427731919403;
    msg.y = 0.58471950604;
    msg.z = 0.551679500428;
    msg.k = 0.0836471255331;
    msg.m = 0.51292940452;
    msg.n = 0.400017627066;
    msg.flags = 3U;

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
    msg.setTimeStamp(0.48134153825);
    msg.setSource(51363U);
    msg.setSourceEntity(103U);
    msg.setDestination(6773U);
    msg.setDestinationEntity(107U);
    msg.value = 0.768763423552;

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
    msg.setTimeStamp(0.330768159723);
    msg.setSource(42028U);
    msg.setSourceEntity(24U);
    msg.setDestination(25058U);
    msg.setDestinationEntity(132U);
    msg.value = 0.986898518556;

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
    msg.setTimeStamp(0.124661724856);
    msg.setSource(46895U);
    msg.setSourceEntity(191U);
    msg.setDestination(20039U);
    msg.setDestinationEntity(218U);
    msg.value = 0.00281490365725;

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
    msg.setTimeStamp(0.709041026652);
    msg.setSource(51911U);
    msg.setSourceEntity(51U);
    msg.setDestination(29398U);
    msg.setDestinationEntity(25U);
    msg.u = 0.428683071083;
    msg.v = 0.432274450431;
    msg.w = 0.171506625762;
    msg.p = 0.549865911982;
    msg.q = 0.750177016051;
    msg.r = 0.345550327596;
    msg.flags = 77U;

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
    msg.setTimeStamp(0.909158808701);
    msg.setSource(41976U);
    msg.setSourceEntity(172U);
    msg.setDestination(38526U);
    msg.setDestinationEntity(162U);
    msg.u = 0.966850640168;
    msg.v = 0.146003801797;
    msg.w = 0.357718180043;
    msg.p = 0.348422587264;
    msg.q = 0.75158859053;
    msg.r = 0.703203490192;
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
    msg.setTimeStamp(0.682504926022);
    msg.setSource(43889U);
    msg.setSourceEntity(17U);
    msg.setDestination(14230U);
    msg.setDestinationEntity(120U);
    msg.u = 0.768084860213;
    msg.v = 0.11151612773;
    msg.w = 0.993430817237;
    msg.p = 0.548408084562;
    msg.q = 0.223466270075;
    msg.r = 0.073627518111;
    msg.flags = 101U;

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
    msg.setTimeStamp(0.0657609638704);
    msg.setSource(45299U);
    msg.setSourceEntity(102U);
    msg.setDestination(58059U);
    msg.setDestinationEntity(233U);
    msg.path_ref = 4151933575U;
    msg.start_lat = 0.821473212474;
    msg.start_lon = 0.52225725009;
    msg.start_z = 0.416059000974;
    msg.start_z_units = 140U;
    msg.end_lat = 0.669937100333;
    msg.end_lon = 0.268254333683;
    msg.end_z = 0.194836986486;
    msg.end_z_units = 46U;
    msg.lradius = 0.538649717254;
    msg.flags = 228U;
    msg.x = 0.758841979931;
    msg.y = 0.498865192468;
    msg.z = 0.191377196137;
    msg.vx = 0.862825259765;
    msg.vy = 0.0920012876932;
    msg.vz = 0.288230544977;
    msg.course_error = 0.196350294343;
    msg.eta = 15897U;

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
    msg.setTimeStamp(0.611911316379);
    msg.setSource(55809U);
    msg.setSourceEntity(79U);
    msg.setDestination(31075U);
    msg.setDestinationEntity(175U);
    msg.path_ref = 1234158833U;
    msg.start_lat = 0.451852319239;
    msg.start_lon = 0.852552093187;
    msg.start_z = 0.30796462816;
    msg.start_z_units = 128U;
    msg.end_lat = 0.241509664214;
    msg.end_lon = 0.860277269508;
    msg.end_z = 0.34536821399;
    msg.end_z_units = 248U;
    msg.lradius = 0.201231331356;
    msg.flags = 180U;
    msg.x = 0.427363659746;
    msg.y = 0.53902866434;
    msg.z = 0.38747136992;
    msg.vx = 0.17382999116;
    msg.vy = 0.0210828964499;
    msg.vz = 0.685403167537;
    msg.course_error = 0.444471596057;
    msg.eta = 28901U;

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
    msg.setTimeStamp(0.542947107378);
    msg.setSource(45910U);
    msg.setSourceEntity(131U);
    msg.setDestination(20204U);
    msg.setDestinationEntity(91U);
    msg.path_ref = 2038235051U;
    msg.start_lat = 0.168873191115;
    msg.start_lon = 0.0451193017129;
    msg.start_z = 0.105283208396;
    msg.start_z_units = 217U;
    msg.end_lat = 0.631986029987;
    msg.end_lon = 0.8743233554;
    msg.end_z = 0.0881194748044;
    msg.end_z_units = 213U;
    msg.lradius = 0.0244725155573;
    msg.flags = 203U;
    msg.x = 0.255401527035;
    msg.y = 0.564611666219;
    msg.z = 0.337165606558;
    msg.vx = 0.515469831583;
    msg.vy = 0.747881789731;
    msg.vz = 0.611486703307;
    msg.course_error = 0.427348481877;
    msg.eta = 898U;

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
    msg.setTimeStamp(0.950964212216);
    msg.setSource(11870U);
    msg.setSourceEntity(215U);
    msg.setDestination(19722U);
    msg.setDestinationEntity(25U);
    msg.k = 0.583190689421;
    msg.m = 0.0985236759136;
    msg.n = 0.988460288182;

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
    msg.setTimeStamp(0.140813709908);
    msg.setSource(25056U);
    msg.setSourceEntity(124U);
    msg.setDestination(43534U);
    msg.setDestinationEntity(30U);
    msg.k = 0.76274203457;
    msg.m = 0.162016405897;
    msg.n = 0.0447604841602;

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
    msg.setTimeStamp(0.594003262182);
    msg.setSource(17822U);
    msg.setSourceEntity(117U);
    msg.setDestination(438U);
    msg.setDestinationEntity(243U);
    msg.k = 0.777048986644;
    msg.m = 0.196652103903;
    msg.n = 0.114330079126;

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
    msg.setTimeStamp(0.501857282389);
    msg.setSource(32308U);
    msg.setSourceEntity(35U);
    msg.setDestination(37980U);
    msg.setDestinationEntity(150U);
    msg.p = 0.637202279251;
    msg.i = 0.808902194729;
    msg.d = 0.998639508156;
    msg.a = 0.722488807201;

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
    msg.setTimeStamp(0.170832584323);
    msg.setSource(55291U);
    msg.setSourceEntity(220U);
    msg.setDestination(14121U);
    msg.setDestinationEntity(167U);
    msg.p = 0.505978532721;
    msg.i = 0.739526399264;
    msg.d = 0.343763654469;
    msg.a = 0.193928561067;

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
    msg.setTimeStamp(0.0768997880339);
    msg.setSource(41460U);
    msg.setSourceEntity(13U);
    msg.setDestination(40538U);
    msg.setDestinationEntity(97U);
    msg.p = 0.473650817338;
    msg.i = 0.434810070101;
    msg.d = 0.607923784054;
    msg.a = 0.754400815188;

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
    msg.setTimeStamp(0.489832931519);
    msg.setSource(48108U);
    msg.setSourceEntity(242U);
    msg.setDestination(57492U);
    msg.setDestinationEntity(248U);
    msg.op = 67U;

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
    msg.setTimeStamp(0.661036246942);
    msg.setSource(8207U);
    msg.setSourceEntity(49U);
    msg.setDestination(64945U);
    msg.setDestinationEntity(106U);
    msg.op = 147U;

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
    msg.setTimeStamp(0.0102859757127);
    msg.setSource(51519U);
    msg.setSourceEntity(132U);
    msg.setDestination(35145U);
    msg.setDestinationEntity(131U);
    msg.op = 123U;

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
    msg.setTimeStamp(0.476700933229);
    msg.setSource(31414U);
    msg.setSourceEntity(106U);
    msg.setDestination(49909U);
    msg.setDestinationEntity(205U);
    msg.x = 0.623994961256;
    msg.y = 0.226524940471;
    msg.z = 0.465450307103;
    msg.vx = 0.876417152501;
    msg.vy = 0.691488540588;
    msg.vz = 0.523450834085;
    msg.ax = 0.763014177486;
    msg.ay = 0.846603991978;
    msg.az = 0.573927280393;
    msg.flags = 4712U;

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
    msg.setTimeStamp(0.742463057738);
    msg.setSource(32197U);
    msg.setSourceEntity(131U);
    msg.setDestination(56414U);
    msg.setDestinationEntity(9U);
    msg.x = 0.122561782254;
    msg.y = 0.540539412251;
    msg.z = 0.416850569745;
    msg.vx = 0.493226338375;
    msg.vy = 0.876066680749;
    msg.vz = 0.371431902383;
    msg.ax = 0.0836889495982;
    msg.ay = 0.976988877766;
    msg.az = 0.131834614919;
    msg.flags = 63023U;

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
    msg.setTimeStamp(0.328871777375);
    msg.setSource(24982U);
    msg.setSourceEntity(66U);
    msg.setDestination(28232U);
    msg.setDestinationEntity(79U);
    msg.x = 0.598729820999;
    msg.y = 0.267862313301;
    msg.z = 0.492894178701;
    msg.vx = 0.854040937963;
    msg.vy = 0.122803206606;
    msg.vz = 0.244033782911;
    msg.ax = 0.413092716275;
    msg.ay = 0.635671125212;
    msg.az = 0.0443144851885;
    msg.flags = 868U;

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
    msg.setTimeStamp(0.356398014095);
    msg.setSource(27643U);
    msg.setSourceEntity(143U);
    msg.setDestination(20005U);
    msg.setDestinationEntity(141U);
    msg.value = 0.858106636445;

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
    msg.setTimeStamp(0.49714205815);
    msg.setSource(31023U);
    msg.setSourceEntity(155U);
    msg.setDestination(37869U);
    msg.setDestinationEntity(210U);
    msg.value = 0.262159344281;

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
    msg.setTimeStamp(0.830098118908);
    msg.setSource(40429U);
    msg.setSourceEntity(55U);
    msg.setDestination(2254U);
    msg.setDestinationEntity(84U);
    msg.value = 0.457867233577;

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
    msg.setTimeStamp(0.403792159207);
    msg.setSource(58072U);
    msg.setSourceEntity(165U);
    msg.setDestination(38648U);
    msg.setDestinationEntity(206U);
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.path_ref = 2955069960U;
    tmp_msg_0.start_lat = 0.420595980063;
    tmp_msg_0.start_lon = 0.688792993684;
    tmp_msg_0.start_z = 0.169430054091;
    tmp_msg_0.start_z_units = 222U;
    tmp_msg_0.end_lat = 0.252884186264;
    tmp_msg_0.end_lon = 0.73883109254;
    tmp_msg_0.end_z = 0.441546605177;
    tmp_msg_0.end_z_units = 233U;
    tmp_msg_0.speed = 0.562094011001;
    tmp_msg_0.speed_units = 30U;
    tmp_msg_0.lradius = 0.720225096847;
    tmp_msg_0.flags = 216U;
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
    msg.setTimeStamp(0.38526625845);
    msg.setSource(19533U);
    msg.setSourceEntity(6U);
    msg.setDestination(21747U);
    msg.setDestinationEntity(69U);
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.path_ref = 844526517U;
    tmp_msg_0.start_lat = 0.257421450164;
    tmp_msg_0.start_lon = 0.627747390019;
    tmp_msg_0.start_z = 0.436344882936;
    tmp_msg_0.start_z_units = 228U;
    tmp_msg_0.end_lat = 0.164844224412;
    tmp_msg_0.end_lon = 0.830065793872;
    tmp_msg_0.end_z = 0.105617461308;
    tmp_msg_0.end_z_units = 58U;
    tmp_msg_0.speed = 0.274065261766;
    tmp_msg_0.speed_units = 153U;
    tmp_msg_0.lradius = 0.0922503601676;
    tmp_msg_0.flags = 165U;
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
    msg.setTimeStamp(0.682992379498);
    msg.setSource(34824U);
    msg.setSourceEntity(146U);
    msg.setDestination(19437U);
    msg.setDestinationEntity(118U);
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.path_ref = 605657726U;
    tmp_msg_0.start_lat = 0.246816861891;
    tmp_msg_0.start_lon = 0.631121872643;
    tmp_msg_0.start_z = 0.246985772401;
    tmp_msg_0.start_z_units = 153U;
    tmp_msg_0.end_lat = 0.375455161021;
    tmp_msg_0.end_lon = 0.492544639763;
    tmp_msg_0.end_z = 0.937721056255;
    tmp_msg_0.end_z_units = 240U;
    tmp_msg_0.speed = 0.98223705565;
    tmp_msg_0.speed_units = 202U;
    tmp_msg_0.lradius = 0.811222323912;
    tmp_msg_0.flags = 30U;
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
    msg.setTimeStamp(0.649054478291);
    msg.setSource(31199U);
    msg.setSourceEntity(254U);
    msg.setDestination(49914U);
    msg.setDestinationEntity(149U);
    msg.timeout = 50675U;
    msg.lat = 0.389732365156;
    msg.lon = 0.0811943174871;
    msg.z = 0.82101905979;
    msg.z_units = 184U;
    msg.speed = 0.14538047713;
    msg.speed_units = 97U;
    msg.roll = 0.456987584589;
    msg.pitch = 0.342846870465;
    msg.yaw = 0.951977385603;
    msg.custom.assign("XDUTSICLXTCQUJIFYZOMCEQRKDEPXTYKWVUAEFQLHBQRKGCKSASUSBKHXNAAECTJMGEZGGNWVNFRJLCVNTDYOIRDLKRSOHFZSIGRKJDAGNVFXUSJMOPWPUHJYZVQAAMUXLGRBZMWHBEJJBURFKBRDATOZPUTDMBEWEDIVVRHONFICJFYZLGEZLXIHSWVHMCMIPOSQUDCDMPYLVIFMNWBZKGPPQQXTOJLCVW");

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
    msg.setTimeStamp(0.977122123635);
    msg.setSource(21226U);
    msg.setSourceEntity(232U);
    msg.setDestination(345U);
    msg.setDestinationEntity(8U);
    msg.timeout = 15667U;
    msg.lat = 0.0791577347543;
    msg.lon = 0.565651627041;
    msg.z = 0.163053087702;
    msg.z_units = 130U;
    msg.speed = 0.653309462852;
    msg.speed_units = 35U;
    msg.roll = 0.073010072131;
    msg.pitch = 0.936703062872;
    msg.yaw = 0.774161297922;
    msg.custom.assign("HLQOVAIFPDSYTXSATVLKOBXDMIDAMVCNXKIMDWLTNYATSMTDZRRNWCJLYYIFZQPEJEEJXSPJSCCZVQCWKGUVQUUGTJUXMZGZUBBDCCZQAMZJKXKGPQGRSIFWNFBCRFJVSQKEIMGODZHRIEWBTNOHPLMTFBWAXYDJPRJN");

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
    msg.setTimeStamp(0.945925602208);
    msg.setSource(25506U);
    msg.setSourceEntity(3U);
    msg.setDestination(4286U);
    msg.setDestinationEntity(155U);
    msg.timeout = 1393U;
    msg.lat = 0.0539115278555;
    msg.lon = 0.0224672109514;
    msg.z = 0.0518890179388;
    msg.z_units = 150U;
    msg.speed = 0.231026876734;
    msg.speed_units = 41U;
    msg.roll = 0.0303512123036;
    msg.pitch = 0.801688694776;
    msg.yaw = 0.0755015614001;
    msg.custom.assign("GXLYEWDPPXVXIENRMODYMTZCRJAIIKFGSECYQBDEKGNULHDUFMIXROMNGWQMZQTACZACYHPGVKDUATQPZXZRKOGCWQXNFOIHOTVBNSSFSBTWFGMASFIONWOUGQKVFDJIKPCZIXVGPXFEOTARDFYDRETWJOHWAUZPEXUDLSBRJQLECFMRQKORMB");

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
    msg.setTimeStamp(0.156224784424);
    msg.setSource(54151U);
    msg.setSourceEntity(213U);
    msg.setDestination(27218U);
    msg.setDestinationEntity(143U);
    msg.timeout = 28851U;
    msg.lat = 0.428467600634;
    msg.lon = 0.0792989444303;
    msg.z = 0.223203954708;
    msg.z_units = 207U;
    msg.speed = 0.0332140356853;
    msg.speed_units = 56U;
    msg.duration = 2376U;
    msg.radius = 0.830332889837;
    msg.flags = 178U;
    msg.custom.assign("GQXDLHXNFAQJSGSVYQOWCVFFIKBWDBLAVWWNYPTNKFMJDKRXYLEKCIVJGPAIAUTUSQSFEKLCGMUOOWWZCEAXAPDMSXFJDCTZNQPPPROXZJNKUVZLJPQSH");

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
    msg.setTimeStamp(0.0756288693784);
    msg.setSource(23990U);
    msg.setSourceEntity(197U);
    msg.setDestination(23631U);
    msg.setDestinationEntity(174U);
    msg.timeout = 19840U;
    msg.lat = 0.162057270191;
    msg.lon = 0.719212408282;
    msg.z = 0.513405468821;
    msg.z_units = 242U;
    msg.speed = 0.84159995238;
    msg.speed_units = 43U;
    msg.duration = 7314U;
    msg.radius = 0.0532773108795;
    msg.flags = 55U;
    msg.custom.assign("RXMJQNGOESFMNIXYJSOFNBANGCSWNAHBD");

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
    msg.setTimeStamp(0.959357535565);
    msg.setSource(44970U);
    msg.setSourceEntity(222U);
    msg.setDestination(35471U);
    msg.setDestinationEntity(133U);
    msg.timeout = 60102U;
    msg.lat = 0.727542608824;
    msg.lon = 0.298974132857;
    msg.z = 0.339326534793;
    msg.z_units = 195U;
    msg.speed = 0.342673717504;
    msg.speed_units = 125U;
    msg.duration = 64302U;
    msg.radius = 0.345130474708;
    msg.flags = 129U;
    msg.custom.assign("ZCHJDFLUQXXCHBAUMPNEZXARAQCTOKSVXJMVFTLPZEARBLHIWTHMAUBYUDTEMIMUFQXRFONSTTBPHUNZVYDELWFZCH");

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
    msg.setTimeStamp(0.649712692842);
    msg.setSource(4081U);
    msg.setSourceEntity(232U);
    msg.setDestination(6273U);
    msg.setDestinationEntity(36U);
    msg.custom.assign("FRJEQRDMBTZDRLE");

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
    msg.setTimeStamp(0.709633598412);
    msg.setSource(13355U);
    msg.setSourceEntity(63U);
    msg.setDestination(29501U);
    msg.setDestinationEntity(240U);
    msg.custom.assign("TJDVKIOGKAELFGFJPCAYHGBWEWWKUWFOYETIXLFRAWHXNYXZFZMPCRTNVCBSNZJUPHDMFIPJQOSDSJHCNPVHKALGIJYOSDFZPDVRHNLVBMDXGLHWTXZVRYHSTKBGZETEGROBIPCONTMSPMCVNWEXFGRMKAEYQKNVAIJDLZSULGVLIRJULYZRXABFMOYVUICRZWDEBJHPXABACUUMUNQQOIQXZCPYGBELWQOHSKIRWQSOS");

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
    msg.setTimeStamp(0.0489108713439);
    msg.setSource(60640U);
    msg.setSourceEntity(127U);
    msg.setDestination(33286U);
    msg.setDestinationEntity(4U);
    msg.custom.assign("PPIMDNEZLLKWDFEAFZDCBKODWPXQHEJGNDKRHBULUMNJWVWTQAOIUSSFLAIHDHAQELDPBSTEUXHYKKXWVFJNMIFRCUBLHDIOTMUDVUVEPOGKOALYFTUWMYZRJWAQNYZSRNKPXBJSJACUZMOSMESBPFWLTKVGPRQOAIPMFGNGTOSBNJOVGWXFMZCKHZCXVYQQVIBSJCEIBWGLZNNCXZREBERFYJRQYKYPOGQTCTQZHYCAYJHRCTHMTIUXGV");

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
    msg.setTimeStamp(0.433697788761);
    msg.setSource(38472U);
    msg.setSourceEntity(137U);
    msg.setDestination(42674U);
    msg.setDestinationEntity(64U);
    msg.timeout = 12803U;
    msg.lat = 0.0770067876015;
    msg.lon = 0.530442944762;
    msg.z = 0.300123008505;
    msg.z_units = 149U;
    msg.duration = 61299U;
    msg.speed = 0.306953645456;
    msg.speed_units = 225U;
    msg.type = 222U;
    msg.radius = 0.693206750558;
    msg.length = 0.32165600858;
    msg.bearing = 0.198583148564;
    msg.direction = 223U;
    msg.custom.assign("VPRCOSHMCHYLRSQFRTNWZAMNJWYENXKTWDKUBAIEHOBPAAVPOTKEQWUTEYSIYIMOWBMPLAVGGQFLXCHTJNVCETOUCDZCNMEKXATELFYVFLLHSNWKJRGIYQFQQRCGNUPJPWADGMORBCDGZBSXJLLHMFDPMDXGRSAGDVPYAZMRITH");

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
    msg.setTimeStamp(0.0346057452458);
    msg.setSource(1711U);
    msg.setSourceEntity(90U);
    msg.setDestination(63784U);
    msg.setDestinationEntity(108U);
    msg.timeout = 57543U;
    msg.lat = 0.777538588924;
    msg.lon = 0.47635866572;
    msg.z = 0.0540840739628;
    msg.z_units = 201U;
    msg.duration = 25834U;
    msg.speed = 0.728656841776;
    msg.speed_units = 174U;
    msg.type = 143U;
    msg.radius = 0.822185201928;
    msg.length = 0.150475183275;
    msg.bearing = 0.534406200518;
    msg.direction = 197U;
    msg.custom.assign("NGSQAXPGKRVVXSFLAZJYALOVUCJFODYIDKSETJBCMIEETACKHDLTZZUCUEIKVNOTTPQXUYYWDWAMJBKJVPQESJBRHCKDNEHHYTWLQGWGQAQCPRFLOUKAFXZXGBIRBJPSNQIERYSRNCXHFFABNIWKTVZWXFGCTPHSPALIOOVGCVMORIZLAWHMRJMGSSZBQGHWRUHEFMYYQODF");

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
    msg.setTimeStamp(0.101930949894);
    msg.setSource(17725U);
    msg.setSourceEntity(69U);
    msg.setDestination(59079U);
    msg.setDestinationEntity(182U);
    msg.timeout = 7707U;
    msg.lat = 0.628103585001;
    msg.lon = 0.658838724536;
    msg.z = 0.0897065680629;
    msg.z_units = 89U;
    msg.duration = 3325U;
    msg.speed = 0.0289499658468;
    msg.speed_units = 84U;
    msg.type = 61U;
    msg.radius = 0.966123042038;
    msg.length = 0.27556085579;
    msg.bearing = 0.524582481421;
    msg.direction = 59U;
    msg.custom.assign("JOKQNYABMOYRIOMBQUVKNUGSSMPZVZWXINGZASKBCRXPOVNCVFWOWMTFOALQZPFHMRCKTKIEYGTCWCGXIURLZWUDUSFHMMZMLHBGWFADKLDBBNWWSJZREDQBHEUKUTEYJFJNM");

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
    msg.setTimeStamp(0.170172694174);
    msg.setSource(34885U);
    msg.setSourceEntity(82U);
    msg.setDestination(55406U);
    msg.setDestinationEntity(26U);
    msg.duration = 54291U;
    msg.custom.assign("STBFWVUUIBMNAPTUTRNHHVGTRZPQHWSMUQIZLGXGSDPJZVRNZGBKITOOQKPYXZ");

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
    msg.setTimeStamp(0.112833755326);
    msg.setSource(46101U);
    msg.setSourceEntity(237U);
    msg.setDestination(59175U);
    msg.setDestinationEntity(242U);
    msg.duration = 50197U;
    msg.custom.assign("RYCTSKBYQPISYSKWVTZRMDEOUQURYEMPXAMNHFYNVWEOEAMFNPJHYZNGLQQRDUZMOQXXNHMQFGDVXBVZBMFTABMKCOFXQSHJJBILAIPQRTVWLFWPRVDXUOSNTYDKGTAQIYXSFVCCCZCNJCUJCVRSQGGEJ");

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
    msg.setTimeStamp(0.407144837827);
    msg.setSource(41781U);
    msg.setSourceEntity(0U);
    msg.setDestination(59472U);
    msg.setDestinationEntity(91U);
    msg.duration = 36066U;
    msg.custom.assign("STNAVWZXLTSOWSCWGKHZDQQUEHGUANUEWQATZDAFYMUSXGKLXPHGRDXFTPFCEJPOTICLKIMOBSJS");

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
    msg.setTimeStamp(0.521456205184);
    msg.setSource(57526U);
    msg.setSourceEntity(23U);
    msg.setDestination(25513U);
    msg.setDestinationEntity(8U);
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.128425488966;
    tmp_msg_0.speed_units = 77U;
    msg.control.set(tmp_msg_0);
    msg.duration = 54436U;
    msg.custom.assign("NOYYWOXFTXETQBBKOBKFBZCMTPABFPPXMZOXRCWMZVTWGFVNRBMNGNXMSADLCHQRHDKFQAAUNODAEMRNSASWIESYWNTSVCTWCYRBIJMEAUJFVCSYWYNLSJBYCRTUZZJEIZLDZWVCGGHZBHLRPFMKHEITJGPHXFEVDTEYYLULSNKOIDJOPHDLMRUFVHPSJYRXVQRGGJPQWWFISVEQQPKTXGLKXDKJI");

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
    msg.setTimeStamp(0.230629400029);
    msg.setSource(24080U);
    msg.setSourceEntity(210U);
    msg.setDestination(61031U);
    msg.setDestinationEntity(2U);
    IMC::DesiredZ tmp_msg_0;
    tmp_msg_0.value = 0.113487295782;
    tmp_msg_0.z_units = 53U;
    msg.control.set(tmp_msg_0);
    msg.duration = 64667U;
    msg.custom.assign("JENHYLMCLOXMEKVQVTHXKYWYEZKCQAFIBELTMBDHJGTFJXZIUQMACOBAPUNNGMVKLDJZIQUUOHALWRBMJEXGYCLPLKQJEWDUHOKELRSSKMTTBPGZPRTYPGUDODWXBIVUNCJMVXJIQQAVAVHLQSRTBWWHIDYJZFGSCSZAQFVRYKSEKFSYEGFCYHNHAIWMRQIAFUTOHOWZWWXTCPZXGDGE");

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
    msg.setTimeStamp(0.85900729397);
    msg.setSource(11044U);
    msg.setSourceEntity(24U);
    msg.setDestination(32919U);
    msg.setDestinationEntity(42U);
    IMC::DesiredPitch tmp_msg_0;
    tmp_msg_0.value = 0.0167293798059;
    msg.control.set(tmp_msg_0);
    msg.duration = 2612U;
    msg.custom.assign("WKZDKAUJERHMIIXBSMVONRORSDLGHRIHXVZGGAQGCFDMEDXQKMBTIUNUBOPIRVFZWZFLUMBGAJBWLHOFMDFUTIPPACNBWAJUPGRNQCAJTYQQWLNYTJQSQCKXLZSXVNISZWNGYRHLCNODUDIREWFPTEFENEHUFHRHTXVVOGTSSZXIAXURVVVYMWAOLVOHNFYJKBYLYPZKEKKKXLBJSYDYCMCZKBEAAJTXGHPDLMSUMQCCO");

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
    msg.setTimeStamp(0.697099210194);
    msg.setSource(62751U);
    msg.setSourceEntity(130U);
    msg.setDestination(36378U);
    msg.setDestinationEntity(188U);
    msg.timeout = 16651U;
    msg.lat = 0.115658628448;
    msg.lon = 0.137654343596;
    msg.z = 0.0486107561402;
    msg.z_units = 191U;
    msg.speed = 0.514069158466;
    msg.speed_units = 114U;
    msg.bearing = 0.931996572541;
    msg.cross_angle = 0.802351267709;
    msg.width = 0.27555289967;
    msg.length = 0.958690791126;
    msg.hstep = 0.255587128455;
    msg.coff = 93U;
    msg.alternation = 233U;
    msg.flags = 202U;
    msg.custom.assign("UGFLETSFRXDZPPYDGPKHULGQVUHFJLXMTAQXYZBKPUMEEPYTHZSEHAYNZSAPSNGUQRRRMVZOTOQOCYBLBDCTJHFSGXOKONXMWORCXCUMIGGCJCVZHILBJBDRMPJKOYKJFMNVTTQCUFZBUMYXDETQHLIAEARLSKATXYEQVLVOHJCIWGSDNKLM");

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
    msg.setTimeStamp(0.76340347117);
    msg.setSource(20283U);
    msg.setSourceEntity(128U);
    msg.setDestination(31766U);
    msg.setDestinationEntity(66U);
    msg.timeout = 23179U;
    msg.lat = 0.363924991927;
    msg.lon = 0.817984981587;
    msg.z = 0.196313907099;
    msg.z_units = 47U;
    msg.speed = 0.417918489681;
    msg.speed_units = 221U;
    msg.bearing = 0.44901798422;
    msg.cross_angle = 0.171437079496;
    msg.width = 0.861008738577;
    msg.length = 0.852649312491;
    msg.hstep = 0.2631955369;
    msg.coff = 233U;
    msg.alternation = 58U;
    msg.flags = 65U;
    msg.custom.assign("BFFQGSVLZRQHOTAAQMCCHYNEAQPGWHXKFMLYWZZYSWYEGEJBPXCIAPDMHBTKPOYSLKRZSPGUZXDDYORIJXCNOHSODTFXWVRBJESXCQNZUDVOEORROFHNQKTIWFSMBNHHPJHNLKKGBMADGDCACIVQJMJYKZEMAKILWIGMUVCGQEBBMIPTKAJQCLNZQIJUUTUTEUVPSEEVFALGVFRXJITWDIUNDSSRWYBRZDNVHRYTFVYLXO");

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
    msg.setTimeStamp(0.412074368386);
    msg.setSource(41240U);
    msg.setSourceEntity(158U);
    msg.setDestination(11158U);
    msg.setDestinationEntity(141U);
    msg.timeout = 54202U;
    msg.lat = 0.339876756211;
    msg.lon = 0.899442560839;
    msg.z = 0.0805324670776;
    msg.z_units = 53U;
    msg.speed = 0.452184827742;
    msg.speed_units = 18U;
    msg.bearing = 0.591286748346;
    msg.cross_angle = 0.157369777658;
    msg.width = 0.241412423377;
    msg.length = 0.301694330759;
    msg.hstep = 0.876264948487;
    msg.coff = 25U;
    msg.alternation = 220U;
    msg.flags = 42U;
    msg.custom.assign("IOCXKNRYHDYKGTQSPNMBSCLWMQOFDTRCTPMKYYIJQYXWQFMXJXBPWVZRSSOAFHRUIBAFPJECDNOEV");

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
    msg.setTimeStamp(0.433042127326);
    msg.setSource(30360U);
    msg.setSourceEntity(204U);
    msg.setDestination(64524U);
    msg.setDestinationEntity(57U);
    msg.timeout = 142U;
    msg.lat = 0.165443116368;
    msg.lon = 0.099612697846;
    msg.z = 0.248027505285;
    msg.z_units = 59U;
    msg.speed = 0.424630333657;
    msg.speed_units = 191U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.72521116865;
    tmp_msg_0.y = 0.380389769554;
    tmp_msg_0.z = 0.329382344338;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("GRXKDFENPPWVUZPLMTKCQANPTFCJJWIZKZCYLAXETRCXQXSHVNRVEFUPHLQPQVYNRCBUIBMBTBQAVDMAOMWNAWUPRDITJDGHSTQNIPXKJBVGPFSRSFGOBJZCKUUOHDFHBHFEJHTYTIJVSER");

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
    msg.setTimeStamp(0.172669562681);
    msg.setSource(58847U);
    msg.setSourceEntity(10U);
    msg.setDestination(52853U);
    msg.setDestinationEntity(226U);
    msg.timeout = 4696U;
    msg.lat = 0.000265537192272;
    msg.lon = 0.824287391367;
    msg.z = 0.535265723501;
    msg.z_units = 166U;
    msg.speed = 0.515628306771;
    msg.speed_units = 206U;
    msg.custom.assign("NYKDYIDBRKQVJCBUQHZEOTTOKBNSGWUDPCRSVV");

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
    msg.setTimeStamp(0.590279971008);
    msg.setSource(29752U);
    msg.setSourceEntity(253U);
    msg.setDestination(38594U);
    msg.setDestinationEntity(112U);
    msg.timeout = 16129U;
    msg.lat = 0.985751725538;
    msg.lon = 0.420811298287;
    msg.z = 0.262328366505;
    msg.z_units = 73U;
    msg.speed = 0.440967133953;
    msg.speed_units = 205U;
    msg.custom.assign("HZRMTLICATWFOLBTMKQANXOYUNJGBGNKHCFCLQYMYASJVFXWTWMBRHKAWAUMRWJHISRXNESBGYTJQPTYBIZCKQBFCLVSPGVYBLMIZJCRJCVHTRDNRZPWOLVDPINCJOEQHMPMOQKCDJIWYGSYXLOEBDSEKURSINVYVUOFGJZPUDZIOWVUFOXPDTPSUAETUOMTZZVNAAZLSQEWDFBHNHFXWXKUGKQDRBEEQKIXHDFDVFGELNXRSL");

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
    msg.setTimeStamp(0.759319669721);
    msg.setSource(4563U);
    msg.setSourceEntity(20U);
    msg.setDestination(6849U);
    msg.setDestinationEntity(122U);
    msg.x = 0.375320300715;
    msg.y = 0.469090599423;
    msg.z = 0.944117670449;

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
    msg.setTimeStamp(0.104806372431);
    msg.setSource(13114U);
    msg.setSourceEntity(219U);
    msg.setDestination(5644U);
    msg.setDestinationEntity(143U);
    msg.x = 0.0923932700253;
    msg.y = 0.775456350648;
    msg.z = 0.107063709817;

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
    msg.setTimeStamp(0.470878186971);
    msg.setSource(12601U);
    msg.setSourceEntity(75U);
    msg.setDestination(3956U);
    msg.setDestinationEntity(93U);
    msg.x = 0.0117983495841;
    msg.y = 0.673737461334;
    msg.z = 0.394225588594;

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
    msg.setTimeStamp(0.733425184902);
    msg.setSource(44119U);
    msg.setSourceEntity(101U);
    msg.setDestination(15008U);
    msg.setDestinationEntity(66U);
    msg.timeout = 51378U;
    msg.lat = 0.544652141182;
    msg.lon = 0.482326433253;
    msg.z = 0.202724609089;
    msg.z_units = 116U;
    msg.amplitude = 0.150842993356;
    msg.pitch = 0.800898630984;
    msg.speed = 0.894368217277;
    msg.speed_units = 163U;
    msg.custom.assign("QWWZZPYPVFIXNHLGNVJLOQLYEIDCRWPAYPCKQFDLHCSUNOGJSTPYRJUHNQFVINMDZGBYAPRXOGBVUVIFUQGQXDVYK");

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
    msg.setTimeStamp(0.245562459752);
    msg.setSource(13430U);
    msg.setSourceEntity(19U);
    msg.setDestination(26147U);
    msg.setDestinationEntity(73U);
    msg.timeout = 49279U;
    msg.lat = 0.552420643086;
    msg.lon = 0.175219418625;
    msg.z = 0.501919299109;
    msg.z_units = 10U;
    msg.amplitude = 0.61113498148;
    msg.pitch = 0.734847133885;
    msg.speed = 0.877217947622;
    msg.speed_units = 83U;
    msg.custom.assign("CNVQJBQQLVKJRTXCDKKYWNSNZQFLEWFSSISBEDFRADOZXJCFUMHSMBBRTQOPGUOFEPCGGCIKCTJKLNHXEQUWMTGXKBXUARNCFOJJBFISZGYUCIVXJPYUTSKGDYIAHWVAUAHBZDVWMHYYSDYPCGVYOVVAIIDMKOBOOLKDRHMHPELUMPXEAEROTRFKGDMRLGLTFXBY");

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
    msg.setTimeStamp(0.152181473079);
    msg.setSource(56491U);
    msg.setSourceEntity(89U);
    msg.setDestination(51335U);
    msg.setDestinationEntity(88U);
    msg.timeout = 16358U;
    msg.lat = 0.456282813614;
    msg.lon = 0.624501057518;
    msg.z = 0.661664492365;
    msg.z_units = 205U;
    msg.amplitude = 0.160656857827;
    msg.pitch = 0.326002312969;
    msg.speed = 0.37763225521;
    msg.speed_units = 189U;
    msg.custom.assign("ZPNCQWKGVYINPCNOTTVZWLLEHTETLGLKJYMVDSMBQTSHNVTPCKNZDURVQWEIQWQDWOPCAQKHNKYMDOKAYAGTUCZDOLJGCBKULAMSDELRPXSJXOVXPAZUVMGVCNDFTGALFDJWWSVFGRXIBCGJGWPSSPKO");

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
    msg.setTimeStamp(0.821580248553);
    msg.setSource(48251U);
    msg.setSourceEntity(71U);
    msg.setDestination(8056U);
    msg.setDestinationEntity(175U);

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
    msg.setTimeStamp(0.0780683664517);
    msg.setSource(57106U);
    msg.setSourceEntity(220U);
    msg.setDestination(45604U);
    msg.setDestinationEntity(2U);

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
    msg.setTimeStamp(0.0792652106374);
    msg.setSource(40251U);
    msg.setSourceEntity(91U);
    msg.setDestination(54869U);
    msg.setDestinationEntity(123U);

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
    msg.setTimeStamp(0.749633972863);
    msg.setSource(20351U);
    msg.setSourceEntity(186U);
    msg.setDestination(14010U);
    msg.setDestinationEntity(201U);
    msg.lat = 0.261281243831;
    msg.lon = 0.486114462031;
    msg.z = 0.599637098157;
    msg.z_units = 20U;
    msg.radius = 0.462681988789;
    msg.duration = 5963U;
    msg.speed = 0.907847021517;
    msg.speed_units = 67U;
    msg.popup_period = 16620U;
    msg.popup_duration = 42784U;
    msg.flags = 49U;
    msg.custom.assign("KUMIQOUHKOXLDQUPWPHPNSPVCVRXVFYNFGCTZAMJMPUGTPRPVTQPNXMDBDIEIZBPBNPFQLZGITKYHNQOLERLEJAAIFEUBQHIKSOYIWGLARCACOXCWECSXFJBHJMTJTHWCKJUHLAEMQAVGDYRVDBGTCZAFYHKWEMLSTUOIKZSHBYZXBDRZJLWNJGMDQWSDZSSTEBOLEFNSSDXFMVRAJCYVRJNOBXOMGKWNKTFYZCEXYGRDUOVZRKWGXVHLY");

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
    msg.setTimeStamp(0.253049050076);
    msg.setSource(30927U);
    msg.setSourceEntity(36U);
    msg.setDestination(35719U);
    msg.setDestinationEntity(36U);
    msg.lat = 0.435184547709;
    msg.lon = 0.278555671745;
    msg.z = 0.320993889641;
    msg.z_units = 222U;
    msg.radius = 0.74572896136;
    msg.duration = 54003U;
    msg.speed = 0.810847090674;
    msg.speed_units = 109U;
    msg.popup_period = 29070U;
    msg.popup_duration = 44066U;
    msg.flags = 49U;
    msg.custom.assign("KQNEJYUPHPYVTJWPNZHJBYHKGUJIFAKZSUMBCJMHIDDVKKECIJUHQVSJZGBLYMEOLODVNHWBEUQEWNOSDVHOUKOLBEQRPNCIKATQXNMYWERFQBCSJXIAPRHATNFUMWDYIHCSDXLOYFV");

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
    msg.setTimeStamp(0.920771401709);
    msg.setSource(22724U);
    msg.setSourceEntity(125U);
    msg.setDestination(32065U);
    msg.setDestinationEntity(114U);
    msg.lat = 0.600739308915;
    msg.lon = 0.672712241377;
    msg.z = 0.554289669657;
    msg.z_units = 191U;
    msg.radius = 0.564313361006;
    msg.duration = 15319U;
    msg.speed = 0.31178039276;
    msg.speed_units = 154U;
    msg.popup_period = 34048U;
    msg.popup_duration = 14412U;
    msg.flags = 175U;
    msg.custom.assign("WVOPTULTLQCYEAXOXDBBLBQMECDNURWISKDDZGNACREWXLJUMHQANGFXTPMITMLZVSZSSJJHAKAFAAEZTIHGBSWRQZKCIQLAYUIBDCQTFQNVHMSPBJGUUHCIOCFOGKDMZDYWEDZJFXSKUSMVELYGXHKMHNUKVTVWRPXLLFFCXAZFRBXTSHVPNDOYJIJWKJEJABWKLIYQNORMHPCOMUOVWGQZPERGZDGSKROQOXG");

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
    msg.setTimeStamp(0.262485587057);
    msg.setSource(30868U);
    msg.setSourceEntity(203U);
    msg.setDestination(25112U);
    msg.setDestinationEntity(159U);
    msg.timeout = 1469U;
    msg.flags = 213U;
    msg.lat = 0.990791375328;
    msg.lon = 0.610819218873;
    msg.start_z = 0.754442987121;
    msg.start_z_units = 121U;
    msg.end_z = 0.970568587525;
    msg.end_z_units = 1U;
    msg.radius = 0.578214237535;
    msg.speed = 0.64556261229;
    msg.speed_units = 7U;
    msg.custom.assign("HFYBJFDUURSPTWKZLVQODBCQYBCZTUUTYNNNDEKPXFPCLDPESOQGUNSXBEBOPMKIZWHHSDMOANOJOGALYLMXKRZAPTKXRNWSGEXHOHUZYGVXYUVUTMDFRGIDKVSJSQZKQHHVRCWMHAXULYJGEAWFSMNAYD");

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
    msg.setTimeStamp(0.473663386252);
    msg.setSource(729U);
    msg.setSourceEntity(233U);
    msg.setDestination(56679U);
    msg.setDestinationEntity(52U);
    msg.timeout = 19328U;
    msg.flags = 134U;
    msg.lat = 0.264591739728;
    msg.lon = 0.185494923704;
    msg.start_z = 0.181484560161;
    msg.start_z_units = 218U;
    msg.end_z = 0.145546422041;
    msg.end_z_units = 243U;
    msg.radius = 0.856996104736;
    msg.speed = 0.442586383529;
    msg.speed_units = 171U;
    msg.custom.assign("CUCEWKUALDFQOORWDLLJYYIMETKKPGZQWESRUSUYVBIBFGROHTPKEJGDFPNWFVPKYDYZQTRLYHKUQKGMPVFREUXOVQSNEYCGZRHSMMYAIMDBSXBTVOJSXCSNNXMOZWNOP");

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
    msg.setTimeStamp(0.377449141461);
    msg.setSource(55204U);
    msg.setSourceEntity(157U);
    msg.setDestination(10705U);
    msg.setDestinationEntity(165U);
    msg.timeout = 50510U;
    msg.flags = 241U;
    msg.lat = 0.573508418366;
    msg.lon = 0.849721354435;
    msg.start_z = 0.939520485904;
    msg.start_z_units = 118U;
    msg.end_z = 0.471521425266;
    msg.end_z_units = 24U;
    msg.radius = 0.380209647176;
    msg.speed = 0.897106403399;
    msg.speed_units = 192U;
    msg.custom.assign("CQBTQOMDZBTCUOSSLXPQDDYHNQVVANNPIOAEMKNBEIQYAECXRXEICOKOJUJERWOGPVFQXZNSKLKZTVYBGVUZKKEMMYAIDMJUUTRUITVWFEHJKPYTQOZIHRCILJRZPWYNFXTBLFCYJFBSFRCMNSMFMMSZZHGFKWJUFKVPRWGVQJBNWLAODDSWHUPEXDPAJZXIDOHJTDXRLX");

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
    msg.setTimeStamp(0.911474542149);
    msg.setSource(4715U);
    msg.setSourceEntity(118U);
    msg.setDestination(16508U);
    msg.setDestinationEntity(178U);
    msg.timeout = 51989U;
    msg.lat = 0.641753122311;
    msg.lon = 0.824469960794;
    msg.z = 0.418781857453;
    msg.z_units = 254U;
    msg.speed = 0.774767295495;
    msg.speed_units = 83U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.448668447075;
    tmp_msg_0.y = 0.649652206486;
    tmp_msg_0.z = 0.94199908734;
    tmp_msg_0.t = 0.51499435172;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("GPCWMODTXEAWAVETPUJHRWEDJNLELXVIAQLWHIOUEXVXFURPWMVUPJPOLOFBNTQDBVFQZKSITHLCNRKZ");

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
    msg.setTimeStamp(0.874226288346);
    msg.setSource(15638U);
    msg.setSourceEntity(34U);
    msg.setDestination(53018U);
    msg.setDestinationEntity(15U);
    msg.timeout = 36497U;
    msg.lat = 0.138652344708;
    msg.lon = 0.637070695851;
    msg.z = 0.848510060067;
    msg.z_units = 234U;
    msg.speed = 0.991710004188;
    msg.speed_units = 180U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.232077852257;
    tmp_msg_0.y = 0.453778113279;
    tmp_msg_0.z = 0.332518345115;
    tmp_msg_0.t = 0.76548376104;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("HXUNUYAYCJEIYVKVCAERCSGCDDVYZYYOVCLYZLMILEPEDHVJQSFJBUDBVKHPPZFOQCUGROOAVFYCAGHRUIWNSMENZYIPNLTCKTUDQATTMSUGKDGLOKBTNODPQBTLMLMDIISR");

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
    msg.setTimeStamp(0.440165076222);
    msg.setSource(33291U);
    msg.setSourceEntity(169U);
    msg.setDestination(3501U);
    msg.setDestinationEntity(162U);
    msg.timeout = 25149U;
    msg.lat = 0.802359099407;
    msg.lon = 0.960702762856;
    msg.z = 0.628499603263;
    msg.z_units = 30U;
    msg.speed = 0.177749514158;
    msg.speed_units = 116U;
    msg.custom.assign("KPDQSELMSVZHWPPBMFGKCCTLAOMFNAGXXNIIVJEMCILPSBRVFIBSNHEBGBRK");

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
    msg.setTimeStamp(0.178300232304);
    msg.setSource(24019U);
    msg.setSourceEntity(170U);
    msg.setDestination(24976U);
    msg.setDestinationEntity(229U);
    msg.x = 0.86039369393;
    msg.y = 0.0619144748273;
    msg.z = 0.735513500537;
    msg.t = 0.999859413776;

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
    msg.setTimeStamp(0.0957000651343);
    msg.setSource(63766U);
    msg.setSourceEntity(52U);
    msg.setDestination(45950U);
    msg.setDestinationEntity(192U);
    msg.x = 0.900425326424;
    msg.y = 0.598309849939;
    msg.z = 0.829992562565;
    msg.t = 0.278222384892;

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
    msg.setTimeStamp(0.247710034862);
    msg.setSource(6515U);
    msg.setSourceEntity(234U);
    msg.setDestination(61398U);
    msg.setDestinationEntity(38U);
    msg.x = 0.022564228718;
    msg.y = 0.57287416101;
    msg.z = 0.758874622324;
    msg.t = 0.531859877715;

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
    msg.setTimeStamp(0.572238300031);
    msg.setSource(2451U);
    msg.setSourceEntity(203U);
    msg.setDestination(37506U);
    msg.setDestinationEntity(214U);
    msg.timeout = 27121U;
    msg.name.assign("YCKCWELPKKRLQSTYGAFRJIFIMXCNQJSDXNHBZOMHWGUEUKNTDVOVEUZXUAYFYVJIMMKNCDBDCHCZQGFJGOKLDCGWBCSBJBJDOZWBRHOXIMSPXZTPYAZIAQTKTHMPIQASWUPJRZVRHBOFYUXFSUJVXWJPXXEVPWPFLFUGODDMINQ");
    msg.custom.assign("LFYNZJNCWDINGKRHDDFDYAVDGTILQUPEOLFAUZDCHJVXESZHXVXQTZRVDSEKOMYNXHYSBTAGUQICGGHJKJPKNCDUAIIYHMKHNZCQAJRYFRRTOAMSSIHFDXLJUXZJBWIBCRSESTTLNJQUMIUGEOXFWHMPXLGOQYWREXFYZTMDPBCQOJABCBOSTWCXZWSVVCYKMWQUGFVPGORBKEAANPKLOMVREQBAHJVK");

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
    msg.setTimeStamp(0.309795020801);
    msg.setSource(45009U);
    msg.setSourceEntity(53U);
    msg.setDestination(35253U);
    msg.setDestinationEntity(207U);
    msg.timeout = 30248U;
    msg.name.assign("AIRCBANMNYOVQEECCYFXTLPZKTPGPXFKUMDDCTEOHJCPVAOSKVFHSDOCYNWRDPTLRMTNJDRWAIYKVRFPTTWDKBZAGHSJUMYWLKZXHHSJEYNTJLOQWZF");
    msg.custom.assign("XCCOKBNUNPZYRWUVSZFOBAQPFNTVGSQQGP");

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
    msg.setTimeStamp(0.329137641168);
    msg.setSource(6165U);
    msg.setSourceEntity(104U);
    msg.setDestination(7518U);
    msg.setDestinationEntity(26U);
    msg.timeout = 5310U;
    msg.name.assign("WMQXTCYRBRPKQWOEELTJHBEVVXCWPAFHSN");
    msg.custom.assign("AIWTUOVZEPAEZUQVJDPPSRQFPTLGXAKQCHNYYNCKAHSJOWNLAVFWGLGHVRCRPSAFEEXOHKWKFZYRZKGNTKPPXCLRUMFSCMOLSNKXDNITYZZPPHUDHE");

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
    msg.setTimeStamp(0.610571909751);
    msg.setSource(59104U);
    msg.setSourceEntity(154U);
    msg.setDestination(46860U);
    msg.setDestinationEntity(242U);
    msg.lat = 0.259728514025;
    msg.lon = 0.776237641732;
    msg.z = 0.565476847304;
    msg.z_units = 69U;
    msg.speed = 0.493771021743;
    msg.speed_units = 105U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.354769635772;
    tmp_msg_0.y = 0.485870796333;
    tmp_msg_0.z = 0.107238174661;
    tmp_msg_0.t = 0.403757995835;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.73419611841;
    msg.custom.assign("SOEADEECWSGGNLSPHDTPAWYGPRKZGXAIVQKMIRKUDSUUGHOEIPKVQOCURIYTJXCUQESJXWBXATXLNBQAZCVETOQMZXYIKHTBVMCPZIROPMWJJSJDUBXZZCCTQOQRJENBWOABHGPFLFDPGVM");

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
    msg.setTimeStamp(0.110327898303);
    msg.setSource(40185U);
    msg.setSourceEntity(109U);
    msg.setDestination(10031U);
    msg.setDestinationEntity(147U);
    msg.lat = 0.736191482905;
    msg.lon = 0.841641878801;
    msg.z = 0.540048278043;
    msg.z_units = 88U;
    msg.speed = 0.729140869065;
    msg.speed_units = 166U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.853123847058;
    tmp_msg_0.y = 0.865086750381;
    tmp_msg_0.z = 0.567912320629;
    tmp_msg_0.t = 0.145174228031;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.165496172186;
    msg.custom.assign("JDHFSKGQCOKXAYPHCXHTACQUDQZUGZTVSPRBZWLOBVKCOHBRQIKGZARLRYGEYVGVLPFUIEFUFRTWMLXIQBLNOJOYTXO");

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
    msg.setTimeStamp(0.375177695153);
    msg.setSource(56163U);
    msg.setSourceEntity(19U);
    msg.setDestination(16656U);
    msg.setDestinationEntity(7U);
    msg.lat = 0.590356786808;
    msg.lon = 0.942695096147;
    msg.z = 0.756187855695;
    msg.z_units = 53U;
    msg.speed = 0.00304425915862;
    msg.speed_units = 36U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.483679333811;
    tmp_msg_0.y = 0.471431212296;
    tmp_msg_0.z = 0.928566659769;
    tmp_msg_0.t = 0.2555414961;
    msg.points.push_back(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 61287U;
    tmp_msg_1.off_x = 0.565220109591;
    tmp_msg_1.off_y = 0.6332832329;
    tmp_msg_1.off_z = 0.575299873217;
    msg.participants.push_back(tmp_msg_1);
    msg.start_time = 0.543178497633;
    msg.custom.assign("UBBHGZRGVNDUTFNSNKGAQPOALKJPAOKIHLUPUDYLAQINEIOJHBAXEHJGMBBRCYTJKBVQVJGDCRAMFRTZTKFUAXTXGQRPOMEDNIKCDZJTZOPPITCAHYVXSMMIWMGDVHMZONJTFWUZSXHYMYETRSPWJZDLVYPRFWWLVUNUCSXXOEWWIXYVLLGFEFSHBONC");

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
    msg.setTimeStamp(0.545332725543);
    msg.setSource(39606U);
    msg.setSourceEntity(104U);
    msg.setDestination(4040U);
    msg.setDestinationEntity(5U);
    msg.vid = 50758U;
    msg.off_x = 0.856724488712;
    msg.off_y = 0.413262230236;
    msg.off_z = 0.397054782216;

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
    msg.setTimeStamp(0.207384369216);
    msg.setSource(59158U);
    msg.setSourceEntity(136U);
    msg.setDestination(62628U);
    msg.setDestinationEntity(58U);
    msg.vid = 46950U;
    msg.off_x = 0.0355977010802;
    msg.off_y = 0.620576842118;
    msg.off_z = 0.326887102328;

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
    msg.setTimeStamp(0.373888462576);
    msg.setSource(3576U);
    msg.setSourceEntity(204U);
    msg.setDestination(13613U);
    msg.setDestinationEntity(244U);
    msg.vid = 33995U;
    msg.off_x = 0.378948637746;
    msg.off_y = 0.0813568048372;
    msg.off_z = 0.5393096781;

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
    msg.setTimeStamp(0.653895449746);
    msg.setSource(7627U);
    msg.setSourceEntity(222U);
    msg.setDestination(55301U);
    msg.setDestinationEntity(180U);

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
    msg.setTimeStamp(0.87260416639);
    msg.setSource(18963U);
    msg.setSourceEntity(226U);
    msg.setDestination(60119U);
    msg.setDestinationEntity(105U);

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
    msg.setTimeStamp(0.766979203733);
    msg.setSource(51659U);
    msg.setSourceEntity(93U);
    msg.setDestination(57582U);
    msg.setDestinationEntity(209U);

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
    msg.setTimeStamp(0.400913150324);
    msg.setSource(43746U);
    msg.setSourceEntity(172U);
    msg.setDestination(2889U);
    msg.setDestinationEntity(15U);
    msg.mid = 3813U;

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
    msg.setTimeStamp(0.48413383034);
    msg.setSource(56914U);
    msg.setSourceEntity(182U);
    msg.setDestination(48853U);
    msg.setDestinationEntity(10U);
    msg.mid = 42269U;

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
    msg.setTimeStamp(0.94189354779);
    msg.setSource(15484U);
    msg.setSourceEntity(47U);
    msg.setDestination(33458U);
    msg.setDestinationEntity(119U);
    msg.mid = 40527U;

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
    msg.setTimeStamp(0.828748869515);
    msg.setSource(45183U);
    msg.setSourceEntity(238U);
    msg.setDestination(2405U);
    msg.setDestinationEntity(103U);
    msg.state = 107U;
    msg.eta = 28882U;
    msg.info.assign("QUOLGEVEOLPHZKXWGZOBAUNCDWAUWAYJWGAZSGJZEVXYONDSVGGIRRDVQCCJVXQJTRDQLCKVVZKXLQLWRAEFQMUUCAKEINTYYAJWIKQRWZCSVFSRXYIIYHNAFDLCOLHUAMJOMBBEYRKUABPWYBHEFKKVQKITUNOZP");

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
    msg.setTimeStamp(0.109052875182);
    msg.setSource(28749U);
    msg.setSourceEntity(74U);
    msg.setDestination(59982U);
    msg.setDestinationEntity(156U);
    msg.state = 250U;
    msg.eta = 4136U;
    msg.info.assign("ZRSIJBLZBINOCVZJELHTAEPNJIWTOXORQVLMYYNLCKOLGDFDOYPQYHSIEWDUISFTVYXZJEZWFVQODTQFGNVPIBPEWROKKQUOXHCSHMIMQIPTERTZHFWXCEJCHSPMVNAYGNYWRBKSHVNRQAGKVRRHCCPCMXFT");

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
    msg.setTimeStamp(0.899076064234);
    msg.setSource(31128U);
    msg.setSourceEntity(157U);
    msg.setDestination(39563U);
    msg.setDestinationEntity(215U);
    msg.state = 180U;
    msg.eta = 61861U;
    msg.info.assign("TTBKJWMZQMOCTXHCPFNQZFMUAGJXDFPQAICSGIQVDTJLLYUPNOJTLNLAWQSIEUMZGHMZNZLFECRXHMGRONEZWBHSEOYFPWYDBXTFCQRHRWOOLUUKJKSKDODGXVFIBTNLFVVDRJZPB");

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
    msg.setTimeStamp(0.198915644574);
    msg.setSource(43592U);
    msg.setSourceEntity(176U);
    msg.setDestination(20506U);
    msg.setDestinationEntity(180U);
    msg.system = 6729U;
    msg.duration = 24921U;
    msg.speed = 0.97797643987;
    msg.speed_units = 118U;
    msg.x = 0.804460337409;
    msg.y = 0.26913446355;
    msg.z = 0.70892390117;
    msg.z_units = 225U;

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
    msg.setTimeStamp(0.520666433364);
    msg.setSource(62081U);
    msg.setSourceEntity(75U);
    msg.setDestination(25841U);
    msg.setDestinationEntity(186U);
    msg.system = 42734U;
    msg.duration = 17343U;
    msg.speed = 0.47702464141;
    msg.speed_units = 208U;
    msg.x = 0.209942814402;
    msg.y = 0.865075335124;
    msg.z = 0.890419650176;
    msg.z_units = 212U;

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
    msg.setTimeStamp(0.545163520931);
    msg.setSource(39200U);
    msg.setSourceEntity(144U);
    msg.setDestination(62033U);
    msg.setDestinationEntity(213U);
    msg.system = 35698U;
    msg.duration = 4434U;
    msg.speed = 0.677377926933;
    msg.speed_units = 81U;
    msg.x = 0.221129681696;
    msg.y = 0.975293593866;
    msg.z = 0.861568843379;
    msg.z_units = 16U;

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
    msg.setTimeStamp(0.333475016365);
    msg.setSource(20476U);
    msg.setSourceEntity(178U);
    msg.setDestination(33205U);
    msg.setDestinationEntity(3U);
    msg.lat = 0.422548521845;
    msg.lon = 0.989163065409;
    msg.speed = 0.767651861968;
    msg.speed_units = 19U;
    msg.duration = 2838U;
    msg.sys_a = 34431U;
    msg.sys_b = 51585U;
    msg.move_threshold = 0.269954984332;

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
    msg.setTimeStamp(0.0119604230598);
    msg.setSource(3182U);
    msg.setSourceEntity(184U);
    msg.setDestination(20079U);
    msg.setDestinationEntity(247U);
    msg.lat = 0.404210001656;
    msg.lon = 0.130654850618;
    msg.speed = 0.0345580493728;
    msg.speed_units = 183U;
    msg.duration = 18890U;
    msg.sys_a = 59641U;
    msg.sys_b = 61074U;
    msg.move_threshold = 0.730931478488;

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
    msg.setTimeStamp(0.51272008556);
    msg.setSource(18444U);
    msg.setSourceEntity(16U);
    msg.setDestination(22065U);
    msg.setDestinationEntity(57U);
    msg.lat = 0.144343484633;
    msg.lon = 0.0393665246942;
    msg.speed = 0.162615552663;
    msg.speed_units = 200U;
    msg.duration = 41958U;
    msg.sys_a = 13136U;
    msg.sys_b = 589U;
    msg.move_threshold = 0.805876066917;

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
    msg.setTimeStamp(0.629444492639);
    msg.setSource(3715U);
    msg.setSourceEntity(210U);
    msg.setDestination(28954U);
    msg.setDestinationEntity(63U);
    msg.lat = 0.313893260149;
    msg.lon = 0.403066388467;
    msg.z = 0.228221017123;
    msg.z_units = 191U;
    msg.speed = 0.362784616446;
    msg.speed_units = 233U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.89354098261;
    tmp_msg_0.lon = 0.245033352223;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("MXBYCMACLWHWUVGCJXSOYONLYOQJPJOZIEALDJJRBXFFWESQEZCVCLDYMSFBTMQHAHMNWLAVTRVPRWUNXQYRBGIWIKOVUENBKGLPXBNUZTLPICFCZJFDVUQMRUIFXIZGUHQKOGGUMSGQXZRRCVFMEHNKDNCHIJTABSYWGKPPVVDSPOSLVDNJA");

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
    msg.setTimeStamp(0.0650678452085);
    msg.setSource(48425U);
    msg.setSourceEntity(229U);
    msg.setDestination(34665U);
    msg.setDestinationEntity(242U);
    msg.lat = 0.548919634798;
    msg.lon = 0.560696007296;
    msg.z = 0.127036881677;
    msg.z_units = 46U;
    msg.speed = 0.702390132702;
    msg.speed_units = 180U;
    msg.custom.assign("BAXNJPDMSVYKNYLECVELLOMRPGUXBYRGUWVJNQOULSYHQOIWEWTVSMXFULAKBNTTHA");

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
    msg.setTimeStamp(0.804346131918);
    msg.setSource(10377U);
    msg.setSourceEntity(128U);
    msg.setDestination(33701U);
    msg.setDestinationEntity(138U);
    msg.lat = 0.576442294249;
    msg.lon = 0.583751662999;
    msg.z = 0.424767449735;
    msg.z_units = 99U;
    msg.speed = 0.982314450385;
    msg.speed_units = 15U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.710272194455;
    tmp_msg_0.lon = 0.207106859129;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("WXOVZMTFROGENSTXVEGUFGBQPECJUICSXQNZYYWCVOGZLASCPOWSUOKIUXPEZKZMFISRAALTBNRAWTSQHIPXFAQDTXGFNKGVFJOLDHF");

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
    msg.setTimeStamp(0.567067426988);
    msg.setSource(16382U);
    msg.setSourceEntity(145U);
    msg.setDestination(5843U);
    msg.setDestinationEntity(124U);
    msg.lat = 0.576583374294;
    msg.lon = 0.818869033037;

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
    msg.setTimeStamp(0.162684584443);
    msg.setSource(16824U);
    msg.setSourceEntity(230U);
    msg.setDestination(36836U);
    msg.setDestinationEntity(68U);
    msg.lat = 0.572269838821;
    msg.lon = 0.121735008408;

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
    msg.setTimeStamp(0.493641287508);
    msg.setSource(16855U);
    msg.setSourceEntity(192U);
    msg.setDestination(45169U);
    msg.setDestinationEntity(36U);
    msg.lat = 0.178012709108;
    msg.lon = 0.328667324445;

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
    msg.setTimeStamp(0.894062008905);
    msg.setSource(38322U);
    msg.setSourceEntity(18U);
    msg.setDestination(50077U);
    msg.setDestinationEntity(107U);
    msg.timeout = 65504U;
    msg.lat = 0.173858796643;
    msg.lon = 0.0219537836643;
    msg.z = 0.507073124742;
    msg.z_units = 147U;
    msg.pitch = 0.274344636579;
    msg.amplitude = 0.76430536581;
    msg.duration = 2770U;
    msg.speed = 0.6936358294;
    msg.speed_units = 112U;
    msg.radius = 0.859061694643;
    msg.direction = 78U;
    msg.custom.assign("RVLKFDECSRMNIYJMGXXPVDYFQUZEPABBQHKCVNMEXZWNXRMPIBWTQE");

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
    msg.setTimeStamp(0.998646704418);
    msg.setSource(25371U);
    msg.setSourceEntity(7U);
    msg.setDestination(19845U);
    msg.setDestinationEntity(50U);
    msg.timeout = 10221U;
    msg.lat = 0.0398281076437;
    msg.lon = 0.500763180805;
    msg.z = 0.781247524621;
    msg.z_units = 205U;
    msg.pitch = 0.156611272441;
    msg.amplitude = 0.155285654746;
    msg.duration = 19322U;
    msg.speed = 0.898165634148;
    msg.speed_units = 202U;
    msg.radius = 0.567020079132;
    msg.direction = 138U;
    msg.custom.assign("MMYTJCFSHPFXFWBLQMVRNHGEZVLFXFKQXQBZTHSUJDYIQQFPTGRKOMOUXRJIEGHENIBTBHYALCUARYTXVDWDGMWTOEHOUWTQNBRDFNTNJCROKELTDKUPSYGXXBCLODUVXAT");

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
    msg.setTimeStamp(0.352517312823);
    msg.setSource(53596U);
    msg.setSourceEntity(176U);
    msg.setDestination(10313U);
    msg.setDestinationEntity(115U);
    msg.timeout = 6788U;
    msg.lat = 0.612121326111;
    msg.lon = 0.400294419387;
    msg.z = 0.435166739139;
    msg.z_units = 116U;
    msg.pitch = 0.883158269538;
    msg.amplitude = 0.556561255404;
    msg.duration = 17305U;
    msg.speed = 0.766946682249;
    msg.speed_units = 42U;
    msg.radius = 0.637040552488;
    msg.direction = 95U;
    msg.custom.assign("WARMXICSMLHDMMYIBDGXGWTQEGMPZZWUTUYWKNIIERJNEOBGNSZQUGIKRLQODYOXVXTTSLZEHQZNPNPFYKORZVFXHNP");

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
    msg.setTimeStamp(0.0984227646346);
    msg.setSource(46052U);
    msg.setSourceEntity(139U);
    msg.setDestination(39942U);
    msg.setDestinationEntity(143U);
    msg.formation_name.assign("ZULUCERGIVBGMEZJEGD");
    msg.reference_frame = 212U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 27656U;
    tmp_msg_0.off_x = 0.775457903167;
    tmp_msg_0.off_y = 0.148990984332;
    tmp_msg_0.off_z = 0.922271196251;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("BBWVVTGJVYAKNDTQWQMMQFCHGPWRJLNCEZURSQXRYHNZDMIDYOUBYTYXWNFRPCLLIRGGUWQSGZEFDQDJCITJBMACBEUBSNFRZBTDDPJLINROOXLEPNIULTEVXPEUGZFJKWQYSEWSQNVHEQISMABPACIFROHNVMZA");

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
    msg.setTimeStamp(0.867667612579);
    msg.setSource(31268U);
    msg.setSourceEntity(155U);
    msg.setDestination(45844U);
    msg.setDestinationEntity(55U);
    msg.formation_name.assign("OQKLSIRCLIQVRTFPXMTRALR");
    msg.reference_frame = 185U;
    msg.custom.assign("BCKIMHNTUTNYGUOBQTHOVWVMNHRMEUZFCCXFWKED");

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
    msg.setTimeStamp(0.195502469891);
    msg.setSource(55327U);
    msg.setSourceEntity(85U);
    msg.setDestination(51745U);
    msg.setDestinationEntity(95U);
    msg.formation_name.assign("BTQYGFEDGPTCVKSOHRWVGYKUIHFWMOGBDQQNMZEFJJXFKRBSWIEYQHODEABNWTVSUUZDIDOQVBHZYDNKFZXMLZQIKPCYJXJZHICZSLNUVLGJCVPHPAVKUKOPEELCPMXPQOUFSNLPTGYRGASIVXCTW");
    msg.reference_frame = 61U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 62386U;
    tmp_msg_0.off_x = 0.571754549096;
    tmp_msg_0.off_y = 0.312551555253;
    tmp_msg_0.off_z = 0.022715429472;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("MXWWIOVHUHJBXADDGYHZTRVINCTSBCZUHSBWTOGKGBNXHUBIKGYKTPCZWVOYTCFQGNMJCYVHMHWINZQFDJQRRRLEOXFZIFACQLOBWKCAXGBFTQYXGLPIDQKFKSMAZDMJOKFKEJJESUTXINVIJPDMNYCJRV");

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
    msg.setTimeStamp(0.603492618569);
    msg.setSource(36637U);
    msg.setSourceEntity(205U);
    msg.setDestination(31114U);
    msg.setDestinationEntity(231U);
    msg.group_name.assign("ONVQDXXLNOGAGCKEIJWUEMPYAPCROEZVFJNXJUXEREXAEYQTLTAVURPXNTLIRJNCYNDEGGBIQMRCOSIPVUMIWZICOFRMBSGWFH");
    msg.formation_name.assign("VKAEEOWFVYSPKENAZVMIFOPCPWILGKMZUPMRICBFQVPSNQPWQJAXZUVDNJUBWYXXEBTVZGMOLZGAONNHGDDDKPQSUOWRELCQABENRKQXRIIJOCLFFTBYSSDWJXRTUQJFCYLRHLIJFJBVC");
    msg.plan_id.assign("ZOZPUDMADLISHPQNUMVODVKQQPMKZNWZUABYHKWGFBPSRBNLBYZAEEJBURTUHAGGSCFYOYTQGTGDXXPEFSJWYWKJZWKCFVEAEXFUDSGWHNZHELZVPJKZSHROSGXCBLOHRZTXBNFRHKQEGDUCMRCDCQQPVAYCDHTAXIFCQRJTIBWXBOYMJRAKLPIVIMALVUSLSAEOTNFOTJSNMWPBQNMKDRCVXFELFOIMNMVJ");
    msg.description.assign("QZWXOHARAQSRKFLUYLNXVUKHWYSXNOTIXCYITRHOREUWJNVBIKRUWUCHWWS");
    msg.leader_speed = 0.456119272581;
    msg.leader_bank_lim = 0.181674465147;
    msg.pos_sim_err_lim = 0.23042577038;
    msg.pos_sim_err_wrn = 0.945502529587;
    msg.pos_sim_err_timeout = 30963U;
    msg.converg_max = 0.47016417354;
    msg.converg_timeout = 32648U;
    msg.comms_timeout = 5312U;
    msg.turb_lim = 0.0549781918393;
    msg.custom.assign("XPZVMZHLXVOZREFFKMHXZTNGOKPEWKEDVDFTRNHLBWNRMWBXCYFTQHAOEDCCOUBSGEQULIYOSPSIHSPBYWBLQXISKODFJMJLQYWYRZYYMJHXXTGRGGNWVKLXPILUMNBKHKMRCNNFYVGTIEJRBFLGZQAZIECTTOVJADSDUAIYUJQQUJIONHALOGAQWDSFFBMQUNIFBGSZULGNTEHREJORWKQWKHCA");

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
    msg.setTimeStamp(0.770770560285);
    msg.setSource(35050U);
    msg.setSourceEntity(214U);
    msg.setDestination(2804U);
    msg.setDestinationEntity(211U);
    msg.group_name.assign("ABCOZFKSSWQFDZYMBSHPAUEASUVFNNLJHRYEGTHF");
    msg.formation_name.assign("ELNZWANDQFGTIQLHSANYUIWKAFCVIZIV");
    msg.plan_id.assign("XULCEFMNXQEAHGTUIJNZTEPEFQAVVCFILMHHQZICWRZRWKZLWWBBUTIBGZKFJLTYDBYSVABTSTGNGJEKKSWDBDPPXMESOOQUPBCYPSPWUZDYHUJXWJOEHPRKG");
    msg.description.assign("PFEMSAJGBQOYLKWTTBUIPNXFOEMCLJONGAYCJTMWDPUIXQWEMZJWGNDLVUTWORMMCSHQWVEKRHYOALTHDYNYYHPVHEVNZIZXPFMHKQROLKADSNRZAFWBBAQZQDICKDWDXVMWMSVKQRSVJCKCTJQEGGVTJIXNLFZFCXCLAYUSBHU");
    msg.leader_speed = 0.316782810006;
    msg.leader_bank_lim = 0.970640235511;
    msg.pos_sim_err_lim = 0.754050325803;
    msg.pos_sim_err_wrn = 0.0215072377623;
    msg.pos_sim_err_timeout = 21500U;
    msg.converg_max = 0.707725231361;
    msg.converg_timeout = 57078U;
    msg.comms_timeout = 42198U;
    msg.turb_lim = 0.0849436412575;
    msg.custom.assign("IDQNRYDGQQEAGUSSVFTEZFPUJZGWPTXWBPJCRKZMVHAWAORPYTHFKZEQHTOKYEECKNBWKXRHWHVTEWYCUQQQVLUCJDZGIMHCYOTQDCIBWLEOUDIXGFXXNPAMJVUNFQPATPRPKDQZVOHASHNNYURVMXZLFZDUINCXROMBDENCXSBGEJBNMUOBOPNVICLFYGUJAVABYAHWSDRIIGYLMKKDIHMBCFASLFYVZGGJKKLRLZTWXXLTSSJLPFMEMJBWT");

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
    msg.setTimeStamp(0.735400457188);
    msg.setSource(20925U);
    msg.setSourceEntity(64U);
    msg.setDestination(18950U);
    msg.setDestinationEntity(33U);
    msg.group_name.assign("NSHJUWPKQXABEHFQYQWKIMYWWCOMZXBGJAATMSIGOZFIEUGDSOUBRHQVGQONLZP");
    msg.formation_name.assign("THCIDGSVKRGRPCLJJNMYXYHDBJVNUFKQRWKQHPFMIMPRMOFRTQUHFAAOQESXBOXWZZGUIKODQKASNALNHFTFZXLSUXYGPFDJRKLVXLQLFMSWIOOVMVVUUNNRZPGRIIWUFDETIDCPMTHCPXHGSKYQWZHMWYNEJOBBTXATQLLENJCEZWZZCYIJUNDKASTNYXQJEGRERBZSAMTHIHCYGCBWEOFKZCQGUOPVVDPBYUVBLYJDKLCGJWOMAD");
    msg.plan_id.assign("KLTCDEVAPOBCAETOULEURXHPCSCJHXJBHVMUTCEAWURVRDWPXODNTJQYWZPJDMHLJLTARYEWGLSAVPPWUFXNWDNAORUTISFVLVQLYZDYKGBXYNJWEMZFZYKOBUIVFOHXZZYKABWONIZDKXDXKRSEPVLFQOAISQBXIMGGHKBHCVBQMQYSIKCJWTNOTPFDJUSINETUTAQEMHGVIRZMSNQKUSJJORBPQPAYGCNMEYLLMRISIFKDCFZWBMQGR");
    msg.description.assign("XGZNFUSVEITXDUPKTYPSVOQKFGVAUETKYFUDYENGGX");
    msg.leader_speed = 0.409554761318;
    msg.leader_bank_lim = 0.255967208045;
    msg.pos_sim_err_lim = 0.414145302996;
    msg.pos_sim_err_wrn = 0.29422625564;
    msg.pos_sim_err_timeout = 59956U;
    msg.converg_max = 0.314322320535;
    msg.converg_timeout = 42891U;
    msg.comms_timeout = 58979U;
    msg.turb_lim = 0.202405153902;
    msg.custom.assign("PWPBQRXIPQVHPPZJIGFNVIWOMJSJAOEWTOSCXHNOUUTHRPCXZGJGIALLDZBZVRZATWTDDRMOXRRAFQVWKKYFDOTWMCFQCULPYSGYEJVPTDDPSTGNWTIYBELYQRSHMUZJFMQY");

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
    msg.setTimeStamp(0.926641958522);
    msg.setSource(47175U);
    msg.setSourceEntity(163U);
    msg.setDestination(33315U);
    msg.setDestinationEntity(125U);
    msg.control_src = 31691U;
    msg.control_ent = 178U;
    msg.timeout = 0.620624625721;
    msg.loiter_radius = 0.720087595897;
    msg.altitude_interval = 0.58869348834;

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
    msg.setTimeStamp(0.963450811211);
    msg.setSource(27788U);
    msg.setSourceEntity(236U);
    msg.setDestination(62335U);
    msg.setDestinationEntity(26U);
    msg.control_src = 44143U;
    msg.control_ent = 240U;
    msg.timeout = 0.859919893066;
    msg.loiter_radius = 0.77793336923;
    msg.altitude_interval = 0.925648888157;

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
    msg.setTimeStamp(0.283901764154);
    msg.setSource(41251U);
    msg.setSourceEntity(84U);
    msg.setDestination(48899U);
    msg.setDestinationEntity(168U);
    msg.control_src = 50077U;
    msg.control_ent = 248U;
    msg.timeout = 0.290232416908;
    msg.loiter_radius = 0.435321074275;
    msg.altitude_interval = 0.470420197281;

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
    msg.setTimeStamp(0.284095914862);
    msg.setSource(33909U);
    msg.setSourceEntity(118U);
    msg.setDestination(65141U);
    msg.setDestinationEntity(106U);
    msg.flags = 8U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.914127334865;
    tmp_msg_0.speed_units = 152U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.0884728675382;
    tmp_msg_1.z_units = 22U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.670060171814;
    msg.lon = 0.849809300929;
    msg.radius = 0.8168623298;

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
    msg.setTimeStamp(0.251417550566);
    msg.setSource(52859U);
    msg.setSourceEntity(70U);
    msg.setDestination(63978U);
    msg.setDestinationEntity(217U);
    msg.flags = 104U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.687970360526;
    tmp_msg_0.speed_units = 105U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.154656799508;
    tmp_msg_1.z_units = 198U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.778823072112;
    msg.lon = 0.961310584144;
    msg.radius = 0.392100730905;

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
    msg.setTimeStamp(0.117931675435);
    msg.setSource(8143U);
    msg.setSourceEntity(178U);
    msg.setDestination(21254U);
    msg.setDestinationEntity(17U);
    msg.flags = 240U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.020690532904;
    tmp_msg_0.speed_units = 99U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.240497325766;
    tmp_msg_1.z_units = 64U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.0396531073121;
    msg.lon = 0.436653957111;
    msg.radius = 0.277295318191;

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
    msg.setTimeStamp(0.84050998504);
    msg.setSource(50100U);
    msg.setSourceEntity(84U);
    msg.setDestination(7226U);
    msg.setDestinationEntity(120U);
    msg.control_src = 60139U;
    msg.control_ent = 154U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 212U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.677817967918;
    tmp_tmp_msg_0_0.speed_units = 204U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.127741178007;
    tmp_tmp_msg_0_1.z_units = 5U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.420345567988;
    tmp_msg_0.lon = 0.413449782834;
    tmp_msg_0.radius = 0.784354294205;
    msg.reference.set(tmp_msg_0);
    msg.state = 242U;
    msg.proximity = 63U;

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
    msg.setTimeStamp(0.715347845857);
    msg.setSource(44141U);
    msg.setSourceEntity(184U);
    msg.setDestination(49402U);
    msg.setDestinationEntity(164U);
    msg.control_src = 53375U;
    msg.control_ent = 89U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 196U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.759158670157;
    tmp_tmp_msg_0_0.speed_units = 161U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.721486018852;
    tmp_tmp_msg_0_1.z_units = 140U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.467138683671;
    tmp_msg_0.lon = 0.805219332663;
    tmp_msg_0.radius = 0.368568835811;
    msg.reference.set(tmp_msg_0);
    msg.state = 101U;
    msg.proximity = 202U;

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
    msg.setTimeStamp(0.651919578356);
    msg.setSource(16710U);
    msg.setSourceEntity(209U);
    msg.setDestination(22949U);
    msg.setDestinationEntity(106U);
    msg.control_src = 51149U;
    msg.control_ent = 173U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 118U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.825174858873;
    tmp_tmp_msg_0_0.speed_units = 208U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.853508587327;
    tmp_tmp_msg_0_1.z_units = 97U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.0889533733265;
    tmp_msg_0.lon = 0.941110798521;
    tmp_msg_0.radius = 0.75176788929;
    msg.reference.set(tmp_msg_0);
    msg.state = 170U;
    msg.proximity = 142U;

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
    msg.setTimeStamp(0.732421346699);
    msg.setSource(8413U);
    msg.setSourceEntity(75U);
    msg.setDestination(20652U);
    msg.setDestinationEntity(1U);
    msg.ax_cmd = 0.853327892533;
    msg.ay_cmd = 0.521865436365;
    msg.az_cmd = 0.116260070562;
    msg.ax_des = 0.193336094112;
    msg.ay_des = 0.422797132539;
    msg.az_des = 0.954737801762;
    msg.virt_err_x = 0.507905963303;
    msg.virt_err_y = 0.31261981575;
    msg.virt_err_z = 0.205410083556;
    msg.surf_fdbk_x = 0.331660295553;
    msg.surf_fdbk_y = 0.371371086221;
    msg.surf_fdbk_z = 0.298491463845;
    msg.surf_unkn_x = 0.332586250595;
    msg.surf_unkn_y = 0.0164077890957;
    msg.surf_unkn_z = 0.307954653818;
    msg.ss_x = 0.887865364161;
    msg.ss_y = 0.176786574904;
    msg.ss_z = 0.579889044401;

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
    msg.setTimeStamp(0.0678218077147);
    msg.setSource(65475U);
    msg.setSourceEntity(110U);
    msg.setDestination(45793U);
    msg.setDestinationEntity(40U);
    msg.ax_cmd = 0.319273554586;
    msg.ay_cmd = 0.501325191271;
    msg.az_cmd = 0.813245703658;
    msg.ax_des = 0.767723952739;
    msg.ay_des = 0.535961994374;
    msg.az_des = 0.119030118426;
    msg.virt_err_x = 0.390516551594;
    msg.virt_err_y = 0.735166722245;
    msg.virt_err_z = 0.258878774859;
    msg.surf_fdbk_x = 0.0333727688885;
    msg.surf_fdbk_y = 0.45721726729;
    msg.surf_fdbk_z = 0.965360395992;
    msg.surf_unkn_x = 0.54189536707;
    msg.surf_unkn_y = 0.326229890428;
    msg.surf_unkn_z = 0.691061068943;
    msg.ss_x = 0.799047910724;
    msg.ss_y = 0.324337311895;
    msg.ss_z = 0.0737741418383;

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
    msg.setTimeStamp(0.185537933808);
    msg.setSource(19233U);
    msg.setSourceEntity(157U);
    msg.setDestination(57625U);
    msg.setDestinationEntity(193U);
    msg.ax_cmd = 0.863685098536;
    msg.ay_cmd = 0.22754742903;
    msg.az_cmd = 0.351517327913;
    msg.ax_des = 0.415007966955;
    msg.ay_des = 0.807767375001;
    msg.az_des = 0.0719850959153;
    msg.virt_err_x = 0.0500859389595;
    msg.virt_err_y = 0.213625637986;
    msg.virt_err_z = 0.695175117659;
    msg.surf_fdbk_x = 0.342645594874;
    msg.surf_fdbk_y = 0.0103202800247;
    msg.surf_fdbk_z = 0.467089876548;
    msg.surf_unkn_x = 0.560405217794;
    msg.surf_unkn_y = 0.249333500245;
    msg.surf_unkn_z = 0.491333216044;
    msg.ss_x = 0.211120044914;
    msg.ss_y = 0.827422413795;
    msg.ss_z = 0.318629369734;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("OONBHTUUXLPBNDLKCYLYBSRKUZFLDBEGSJMOSKVLSAIWDIJRILURCAURZUEPPVKHMJYAHXSMYGVCLGMQNANEMCQSWEZQKVIORHZCDFNITPJMBVIJKSWAPMOAZHFZEQXHLPNNWFRJZPCGIHWFODRMYPUHQPMLYZQIYXSQXRWVRHXCTBEIULJVFDQJYGKENTOGKBDPWKXDAFUECBOSTMXYWDASUZEVGTQNAXJZVATIGTOOTEFHWBTDXQW");
    tmp_msg_0.dist = 0.512333060251;
    tmp_msg_0.err = 0.895081216285;
    tmp_msg_0.ctrl_imp = 0.317673976149;
    tmp_msg_0.rel_dir_x = 0.783441455489;
    tmp_msg_0.rel_dir_y = 0.653534515763;
    tmp_msg_0.rel_dir_z = 0.213726158912;
    tmp_msg_0.err_x = 0.718873703538;
    tmp_msg_0.err_y = 0.470607377339;
    tmp_msg_0.err_z = 0.48794653524;
    tmp_msg_0.rf_err_x = 0.00120348713311;
    tmp_msg_0.rf_err_y = 0.446301016465;
    tmp_msg_0.rf_err_z = 0.959038351855;
    tmp_msg_0.rf_err_vx = 0.504840761418;
    tmp_msg_0.rf_err_vy = 0.677963918717;
    tmp_msg_0.rf_err_vz = 0.762108504379;
    tmp_msg_0.ss_x = 0.739286539456;
    tmp_msg_0.ss_y = 0.534731678878;
    tmp_msg_0.ss_z = 0.379684393616;
    tmp_msg_0.virt_err_x = 0.426463939266;
    tmp_msg_0.virt_err_y = 0.243577347611;
    tmp_msg_0.virt_err_z = 0.319654203541;
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
    msg.setTimeStamp(0.699085682942);
    msg.setSource(61548U);
    msg.setSourceEntity(150U);
    msg.setDestination(8662U);
    msg.setDestinationEntity(247U);
    msg.s_id.assign("NLLXJELGQFWYOATRRCTXMVCKVKPHGMMUDKRZPBFKZWETBQCJDPKXHBNFZNTCTPMAEOKZWYXSLAHJOWELISHQHDRIYJGZULXZREPFNOFSBXHKRMTUQMCRBOTMNQYPFTVSALGDJDBCACVQUHBSOWDOEODNSMWIYVJLMQZPWIZUFUNVHMVOGQGJGINQOBGBKIIIXAKCUTEIXAGKEHSSEHXPURWZFLIJJANWVYPDECLCTBAYYFYNXSURDP");
    msg.dist = 0.971283852996;
    msg.err = 0.904801938806;
    msg.ctrl_imp = 0.141280582137;
    msg.rel_dir_x = 0.862465811268;
    msg.rel_dir_y = 0.841742772382;
    msg.rel_dir_z = 0.669988992235;
    msg.err_x = 0.522407202495;
    msg.err_y = 0.21846844274;
    msg.err_z = 0.611724027212;
    msg.rf_err_x = 0.886670349427;
    msg.rf_err_y = 0.716052547048;
    msg.rf_err_z = 0.0394028391957;
    msg.rf_err_vx = 0.115188058395;
    msg.rf_err_vy = 0.639602619587;
    msg.rf_err_vz = 0.984530265902;
    msg.ss_x = 0.925150450677;
    msg.ss_y = 0.0217935933616;
    msg.ss_z = 0.593526418692;
    msg.virt_err_x = 0.879450502345;
    msg.virt_err_y = 0.130595260278;
    msg.virt_err_z = 0.836980331198;

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
    msg.setTimeStamp(0.604982441309);
    msg.setSource(3694U);
    msg.setSourceEntity(186U);
    msg.setDestination(12168U);
    msg.setDestinationEntity(163U);
    msg.s_id.assign("PEWSNQAULTQQPVHVGQLKBNFXCHEWWPFRDSBTWAGSYOHOV");
    msg.dist = 0.0528995322421;
    msg.err = 0.878245617194;
    msg.ctrl_imp = 0.806535470467;
    msg.rel_dir_x = 0.0648887624378;
    msg.rel_dir_y = 0.873472872908;
    msg.rel_dir_z = 0.598346710296;
    msg.err_x = 0.423887172099;
    msg.err_y = 0.100424497578;
    msg.err_z = 0.676021838153;
    msg.rf_err_x = 0.104785499597;
    msg.rf_err_y = 0.75643100116;
    msg.rf_err_z = 0.105374930761;
    msg.rf_err_vx = 0.0678300685032;
    msg.rf_err_vy = 0.42501016606;
    msg.rf_err_vz = 0.182938301672;
    msg.ss_x = 0.121703574948;
    msg.ss_y = 0.172499460627;
    msg.ss_z = 0.860394973501;
    msg.virt_err_x = 0.0160693084626;
    msg.virt_err_y = 0.630037750131;
    msg.virt_err_z = 0.214431553846;

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
    msg.setTimeStamp(0.702387838681);
    msg.setSource(35429U);
    msg.setSourceEntity(208U);
    msg.setDestination(50754U);
    msg.setDestinationEntity(185U);
    msg.s_id.assign("ATFBJZMEPFXVUGPQXNKWQDEWUEIXKALXIRTZNFMSLYLWRWNZAFVOGDTOCWPQYIEESXFJMGYZSNWCPRIMNDIYYCDYNJZJGRKOHPHMZZHHAOVCUAJBKDJQUBMSSWORYGVHXLBDLGGSVBIEWEZNSNTRLAGIOXEBRPFAPCLATQCKULTOEUJMOFUHJDSOFVKQRAEYLMLRWGXHUUIPMTXZKPQKDNNKFZKBRYPYTDHXSWVAHQMCTVUVQB");
    msg.dist = 0.145866367543;
    msg.err = 0.5475348626;
    msg.ctrl_imp = 0.0498899772995;
    msg.rel_dir_x = 0.171373873411;
    msg.rel_dir_y = 0.280011846711;
    msg.rel_dir_z = 0.273441943577;
    msg.err_x = 0.864919972753;
    msg.err_y = 0.273214900536;
    msg.err_z = 0.282924430765;
    msg.rf_err_x = 0.127626343413;
    msg.rf_err_y = 0.19270696334;
    msg.rf_err_z = 0.552374565461;
    msg.rf_err_vx = 0.395527421574;
    msg.rf_err_vy = 0.336151528618;
    msg.rf_err_vz = 0.584251955587;
    msg.ss_x = 0.176239897777;
    msg.ss_y = 0.0110411912273;
    msg.ss_z = 0.361743714198;
    msg.virt_err_x = 0.273004691385;
    msg.virt_err_y = 0.162430859589;
    msg.virt_err_z = 0.541709486474;

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
    msg.setTimeStamp(0.583683149103);
    msg.setSource(11600U);
    msg.setSourceEntity(119U);
    msg.setDestination(44259U);
    msg.setDestinationEntity(160U);
    msg.timeout = 21743U;
    msg.rpm = 0.844822987711;
    msg.direction = 114U;
    msg.custom.assign("HREUCXJCWMDVDBPOJGIARXTNFBZYLWSPAGBDWNSECJMSFUXYVYYDZVZRFIACHBROZRWLSGUCKWIQTAUQQOOMXQDPMHFMOXSPKWRKXSWEKQRLDOKSHGNVATTEXPMLFECCVLDPIZQEYYVGIVKLTIMYUZXUSQW");

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
    msg.setTimeStamp(0.323381434679);
    msg.setSource(5949U);
    msg.setSourceEntity(246U);
    msg.setDestination(29608U);
    msg.setDestinationEntity(6U);
    msg.timeout = 64126U;
    msg.rpm = 0.230142654968;
    msg.direction = 164U;
    msg.custom.assign("ZNXDHGCFOHPLKDKCYIRLXHEFUMVWYCJDQSGENFDEOYXVNLROXSPEHBQJUIEMRUXGTY");

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
    msg.setTimeStamp(0.645051118268);
    msg.setSource(25340U);
    msg.setSourceEntity(253U);
    msg.setDestination(38380U);
    msg.setDestinationEntity(216U);
    msg.timeout = 57924U;
    msg.rpm = 0.764822539807;
    msg.direction = 23U;
    msg.custom.assign("GLQNKISXTCYLMYSGBDFUHTJVAQIFUHJXBYQGSNYSXDWROSLYJAREGVHIWAIJWWVKCGCXIRFVBZETDDVWLOKNFUUEEKCMRZUMWFTTQTBLNIHANNRJOMSVPZAUHOXGVMKVDPJMESCAJZMMIRFZYMXICGTDZPGWRQQHZOCUJXJCINRDIKHOSTLOPKBTOPAALBWRPLZMXKEVFYLUNHTYNFDQAHBXBPYENFDZQWBSKGSEPRPWXAJVCBEKUDUE");

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
    msg.setTimeStamp(0.613054115446);
    msg.setSource(44619U);
    msg.setSourceEntity(132U);
    msg.setDestination(7055U);
    msg.setDestinationEntity(120U);
    msg.formation_name.assign("CNGFNEVVNDOREEWYBMWFGZHJRKXZEGJWUWYSPQGROXANNVTHJWEEXVNJTVHQOQCFTOAWRFQRPOPIOBPRNZAMHPCKGQKIGOLZGSDSLLKZNXEAICGQTCTQJDFUUVLFBJAQBKZLCMACHFRPRUJTDIFFUSQJKSWBPYWSMHDOBWMWLISHCNUXDMSYKJ");
    msg.type = 103U;
    msg.op = 146U;
    msg.group_name.assign("EZJNNRNAFTUQXZGGZWAQHRNCOSMCNAOMPTPRPGILVMAMCZCEYXSMDJEOVSGZVPEP");
    msg.plan_id.assign("WZUWXREPFOUGNKUWHNDHZVYFMRAKPGWDBHFXOSKGTJQXRJRQNZLBLNBEGRDDFTPTFNCFHVYSUZQQZCMYCTNGLRDDZHKMDUQSWWUEXCCEBASXSYEYKQDKAYMDJQOSIWONMBJZPMVOJRYUNZGVIYCXLEIUHUYCXCXGBMHGSTKXJPZNDPBOSTPBLEKYQTRIAIIAVZEVFBAMIVIFTLLTMIAOKCHVOHEWQQFHLACWPMJNVSUWRJKJJAAVSLXBG");
    msg.description.assign("NLWARQHZUJDBXZUVBIAIJXXMNJOMOHSRNHXRVAGCXJYGZDMELWJEBOUPOVZAYTTFYHPULDOTFGADBZVYTDWKUGWSCTNLVUJKNSHASCGOMS");
    msg.reference_frame = 47U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 33720U;
    tmp_msg_0.off_x = 0.250026271776;
    tmp_msg_0.off_y = 0.507123754482;
    tmp_msg_0.off_z = 0.398687628218;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.451418345262;
    msg.leader_speed_min = 0.464593442795;
    msg.leader_speed_max = 0.34201365403;
    msg.leader_alt_min = 0.160895656729;
    msg.leader_alt_max = 0.25264504007;
    msg.pos_sim_err_lim = 0.859528418617;
    msg.pos_sim_err_wrn = 0.362008679459;
    msg.pos_sim_err_timeout = 51497U;
    msg.converg_max = 0.770845088364;
    msg.converg_timeout = 41744U;
    msg.comms_timeout = 11183U;
    msg.turb_lim = 0.732225734263;
    msg.custom.assign("QNHXSKLJIAPFDMOWPFXERJXWEPBLKMDYYGINJVNMDLJKZUZEBNAUUAUSWOGZIUH");

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
    msg.setTimeStamp(0.362173553814);
    msg.setSource(61521U);
    msg.setSourceEntity(169U);
    msg.setDestination(18891U);
    msg.setDestinationEntity(85U);
    msg.formation_name.assign("LWXLTLSRNDKICMKBMYAURJLXCDMIAVBGJTDHJVTQMXOHEPCGANFITHSSCRGOY");
    msg.type = 74U;
    msg.op = 69U;
    msg.group_name.assign("MELJJPQLDEKOOPZWHQEOPEUACMXGCHRLGXSWCJESBVXYCCXVMNQZHDUVIRJNIDTWJGIFTOTFDGYUEUMPKZGZXYKRYTROOWMWGRBITGWXPWSPJHUVECKADRPXD");
    msg.plan_id.assign("ITHLAKECWGEZRFUNSEZPZGDNYSHYKVRXXWRGATFMAGCXGODPPBDGQIYSHHPBISISFJMFLXQOYDBLUQWXZUAPVZLMRUJBKZWINVSRNMRWJCFRHYKCWUHCMEXNVTOOOYQZUVXQEICMBBEMISAOEAXBKZVNYHJCCMOEBGKUKJIPSEVJRRQTWTKVYRZAIBTGTGJQ");
    msg.description.assign("VJDMJWFYAZGQZFEYLSKTXDUOPJGNPVNBUTGBOASSFVUGBXYNJPLBBLYIIOHTKPOAYPMMNJWNCVFKLQFLDIADTRILPABEABELXLFPSYHIPXDTKNEEZTJKRLZMVNGVXYIWNTYTSCLKOTUZRSIISGXWHKDBTHDXGMVEWZKKMURYEOMMG");
    msg.reference_frame = 122U;
    msg.leader_bank_lim = 0.89063640528;
    msg.leader_speed_min = 0.252024572797;
    msg.leader_speed_max = 0.749368077399;
    msg.leader_alt_min = 0.28244264793;
    msg.leader_alt_max = 0.432605276966;
    msg.pos_sim_err_lim = 0.0792706489062;
    msg.pos_sim_err_wrn = 0.724035827194;
    msg.pos_sim_err_timeout = 1355U;
    msg.converg_max = 0.439395083311;
    msg.converg_timeout = 28259U;
    msg.comms_timeout = 34286U;
    msg.turb_lim = 0.274535999385;
    msg.custom.assign("IJHCDOYMLWHCDIHRJUESPATISQLTNTJETHAJMKNVBOKOIKOIEZIUXSLDHPHFPSRDEZGYQZJZUFCQTVPXVPBEGGKFWTKPGVMLOROGMVZZXBXRJFXBDWSDLLUNKHNNWNULEBEYZADQWUSBGSRLVKTQFARUXDTMQSTAOYAZMIAYWEZHCVPCSPVGWPYCJCMLKKAIWPMZCXORYOVHNBFBIKQRQ");

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
    msg.setTimeStamp(0.765263909369);
    msg.setSource(34869U);
    msg.setSourceEntity(236U);
    msg.setDestination(26139U);
    msg.setDestinationEntity(27U);
    msg.formation_name.assign("JPBGIZYDYXZVLQXGHBPJSOEJKUZETBGMRHVCESABOWRPAPLBVDMIFPJZDRZGAKOPCIJWWOIXCNZXOHAUTQCHSCLRYMENBLIFGGENQIVWGMCALYJSLOQXLZSKESUJNHRVUIZOLNWMMFKSIVYQUJTPAFDTYRUQWNMVTYPXNKECJDBVDCXNPG");
    msg.type = 172U;
    msg.op = 122U;
    msg.group_name.assign("QTGUTFKDOLSQHMACLSHFZYAWFOIRPYNDFDURGFHUWCJPAVFMKPGNVZUDMOOXJMPBXLCFAPRWJMWKXBZRZCKQETHWCRNLAZIQZMWIJEJWNELEGQBUKZRBOTSBTIHCRGNPACIKRJDEMIEWDQGNBFDJHCDXKBMGSVIYAOGLYMHLTBTD");
    msg.plan_id.assign("WGTKPSZMRLXDRFWQPXUKAJHHHHPWBFVOQKOXXLJZYASIWGECXBVVAOGTWOBNTXALQKDHXGTHCFDILVTUFKDHDECQPYJGPJBHIRIVMOPCESQGLOBABSWQYSFLMPCMBAAZSNJZJDJAGRHGUKECEBLYBN");
    msg.description.assign("SWSFAPXNGNCYWDQYEPGBVXOHFICNMAGBAZFABIFZMDEQSKDLCPFWIXAPWULSNOBBPELVLQZFW");
    msg.reference_frame = 6U;
    msg.leader_bank_lim = 0.111824814385;
    msg.leader_speed_min = 0.900611966531;
    msg.leader_speed_max = 0.114599298912;
    msg.leader_alt_min = 0.978187300275;
    msg.leader_alt_max = 0.17296018751;
    msg.pos_sim_err_lim = 0.444564113005;
    msg.pos_sim_err_wrn = 0.996739157237;
    msg.pos_sim_err_timeout = 18985U;
    msg.converg_max = 0.458203733428;
    msg.converg_timeout = 44339U;
    msg.comms_timeout = 54809U;
    msg.turb_lim = 0.550460568732;
    msg.custom.assign("KNZCKMQAYWHNMXLAUUMWPQQEDHHEWTLQACNCMRZYRDKGOVBAFJEYKHIHJSYDZHUDFJVEWAPFIGBRQZVPPPIZVKHNOBXIODIEWEXKOXAJOOOGISRLELTJFSECBRWDSFBMJSLIWUQIVZPVTUGGXWXOQWFQSLTGUXNTGSFBMYPLYNUSPTXMQJNCTCCUHNCTMBZFQIKVTHSKPYDDBXTLERMVGVRLZIOVYKBRJOJMFNBJWEUKDCZAA");

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
    msg.setTimeStamp(0.602000532827);
    msg.setSource(51112U);
    msg.setSourceEntity(119U);
    msg.setDestination(58230U);
    msg.setDestinationEntity(99U);
    msg.timeout = 7351U;
    msg.lat = 0.240694185923;
    msg.lon = 0.913324779474;
    msg.z = 0.102288850993;
    msg.z_units = 213U;
    msg.speed = 0.884929468692;
    msg.speed_units = 229U;
    msg.custom.assign("FRFOKQCLVGSRYKPIBZZBBRNVJSATPIIQWDEYKPBHTPEQTQJAPEMDTNIDKRUYOKXYPYIB");

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
    msg.setTimeStamp(0.0723348987751);
    msg.setSource(1967U);
    msg.setSourceEntity(43U);
    msg.setDestination(8971U);
    msg.setDestinationEntity(59U);
    msg.timeout = 51612U;
    msg.lat = 0.927958687883;
    msg.lon = 0.36838713823;
    msg.z = 0.0963834961239;
    msg.z_units = 20U;
    msg.speed = 0.177251554958;
    msg.speed_units = 75U;
    msg.custom.assign("GFXWFVJLIGSMANQRXKTJLO");

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
    msg.setTimeStamp(0.756536984545);
    msg.setSource(47278U);
    msg.setSourceEntity(134U);
    msg.setDestination(19978U);
    msg.setDestinationEntity(182U);
    msg.timeout = 774U;
    msg.lat = 0.156686736035;
    msg.lon = 0.889496579454;
    msg.z = 0.242046883367;
    msg.z_units = 192U;
    msg.speed = 0.0396031613684;
    msg.speed_units = 183U;
    msg.custom.assign("DMINGZLYZXOPQTYVGVMHDJWPGGBQQCLVYNLRTMWLLLBGYOCIXBUSTXRIRFVWKFKHPJOCZAODDKLREESYKFLXIGUCAKFERGGHJWIVUBBGHVFTKSEUIMQXBW");

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
    msg.setTimeStamp(0.572555053484);
    msg.setSource(37886U);
    msg.setSourceEntity(130U);
    msg.setDestination(53635U);
    msg.setDestinationEntity(156U);
    msg.timeout = 64648U;
    msg.lat = 0.0541240243076;
    msg.lon = 0.0193549486833;
    msg.z = 0.504705223289;
    msg.z_units = 243U;
    msg.speed = 0.466904988732;
    msg.speed_units = 235U;
    msg.custom.assign("PEWOWXMRRUAQOCDPDIFKZTRTTWKRTLHHWUJZGIKOLCUERSENGLAVSQXWICYOJWJHYPPSVAMTYQYNKQHPQK");

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
    msg.setTimeStamp(0.409155795436);
    msg.setSource(47391U);
    msg.setSourceEntity(68U);
    msg.setDestination(32726U);
    msg.setDestinationEntity(36U);
    msg.timeout = 23382U;
    msg.lat = 0.291735300257;
    msg.lon = 0.649061822847;
    msg.z = 0.449512776649;
    msg.z_units = 208U;
    msg.speed = 0.46133694797;
    msg.speed_units = 137U;
    msg.custom.assign("DUZLKMUUPMQPBVZAQPJFXTJAMDNPEZYSLJJSGNXLZUZIMFGQWLDZWYSFRSTURDRVTPWYTMGDHFTBEZRVASLBSYDOEW");

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
    msg.setTimeStamp(0.000773062294398);
    msg.setSource(15985U);
    msg.setSourceEntity(155U);
    msg.setDestination(23153U);
    msg.setDestinationEntity(18U);
    msg.timeout = 37929U;
    msg.lat = 0.343730581837;
    msg.lon = 0.658479493826;
    msg.z = 0.482944170995;
    msg.z_units = 30U;
    msg.speed = 0.26513747431;
    msg.speed_units = 46U;
    msg.custom.assign("OZFCFUVAIAECRVKAFUDPVFIKRPMBBKJSPNTZKHGSYYDRUOJONEGIYNZCJTEZRMIIJULZTHQAHVBOUPMHBRLNNPLQKGEYGQXIDBAXVSWLILZDBKKOXVXEFMQWZDJPAYOCLENOHCNTHFBURYEJCARSZNWJUZCSSCWDQVDLLCMNWGRJMFHOBPDOUEPSDDVGSWFVTFHYMOQYLGHSAEISQHYWUBGMXCGXXGXQKNWPBXKQTZFTPRTLTTQWEYKIJUAA");

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
    msg.setTimeStamp(0.00216930264654);
    msg.setSource(34096U);
    msg.setSourceEntity(43U);
    msg.setDestination(55694U);
    msg.setDestinationEntity(174U);
    msg.arrival_time = 0.175397503995;
    msg.lat = 0.62155949754;
    msg.lon = 0.309365295128;
    msg.z = 0.205408245013;
    msg.z_units = 57U;
    msg.travel_z = 0.175569424406;
    msg.travel_z_units = 129U;
    msg.delayed = 13U;

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
    msg.setTimeStamp(0.83299420807);
    msg.setSource(49126U);
    msg.setSourceEntity(179U);
    msg.setDestination(26934U);
    msg.setDestinationEntity(173U);
    msg.arrival_time = 0.566336403472;
    msg.lat = 0.484421570145;
    msg.lon = 0.587280893732;
    msg.z = 0.38735599573;
    msg.z_units = 197U;
    msg.travel_z = 0.712692562828;
    msg.travel_z_units = 137U;
    msg.delayed = 140U;

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
    msg.setTimeStamp(0.689722550565);
    msg.setSource(41901U);
    msg.setSourceEntity(81U);
    msg.setDestination(1521U);
    msg.setDestinationEntity(30U);
    msg.arrival_time = 0.241118623028;
    msg.lat = 0.817375175352;
    msg.lon = 0.658230571747;
    msg.z = 0.46893748635;
    msg.z_units = 84U;
    msg.travel_z = 0.967737870932;
    msg.travel_z_units = 216U;
    msg.delayed = 22U;

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
    msg.setTimeStamp(0.0843472422414);
    msg.setSource(50111U);
    msg.setSourceEntity(207U);
    msg.setDestination(53205U);
    msg.setDestinationEntity(17U);
    msg.lat = 0.0141556876638;
    msg.lon = 0.788543913315;
    msg.z = 0.507509097194;
    msg.z_units = 79U;
    msg.speed = 0.805301951079;
    msg.speed_units = 50U;
    msg.bearing = 0.869025247002;
    msg.cross_angle = 0.0789068102753;
    msg.width = 0.727569637824;
    msg.length = 0.117563232625;
    msg.coff = 109U;
    msg.angaperture = 0.999513919678;
    msg.range = 23010U;
    msg.overlap = 192U;
    msg.flags = 60U;
    msg.custom.assign("ECLMMSQHLVSSIYLIOHVQHUJFPHYXZCWVPMSESGXIBFNQWWRELDXDCWEWKJONM");

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
    msg.setTimeStamp(0.128257779055);
    msg.setSource(5480U);
    msg.setSourceEntity(48U);
    msg.setDestination(58648U);
    msg.setDestinationEntity(1U);
    msg.lat = 0.354865164323;
    msg.lon = 0.387313981733;
    msg.z = 0.161126307057;
    msg.z_units = 83U;
    msg.speed = 0.770733872924;
    msg.speed_units = 120U;
    msg.bearing = 0.783142708083;
    msg.cross_angle = 0.292880968258;
    msg.width = 0.400239819598;
    msg.length = 0.609961414999;
    msg.coff = 99U;
    msg.angaperture = 0.608419889186;
    msg.range = 40151U;
    msg.overlap = 107U;
    msg.flags = 165U;
    msg.custom.assign("RVVSVNESMMQMVZJSYMJNZPWRYKLTTHIAVYGFGQLDGFSNIUOGQIHVDCFEKSGDTTXORXGKLIFRXLXCNTUPZUHQQMNZWPIHLNCHZAAEOGKWSCLDZCKRDUCYEXAZAMNKCDBLINBXWHDQHZPTUWTBOAPJDIPAWEMBJWLGNSZJQWUVPAWMUMPYHJFOESBUYQVBUOWCTEOVGXPRSHBCBRABYF");

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
    msg.setTimeStamp(0.560451687294);
    msg.setSource(58616U);
    msg.setSourceEntity(151U);
    msg.setDestination(48599U);
    msg.setDestinationEntity(43U);
    msg.lat = 0.0314551697683;
    msg.lon = 0.782086893188;
    msg.z = 0.457438424395;
    msg.z_units = 8U;
    msg.speed = 0.123193418884;
    msg.speed_units = 3U;
    msg.bearing = 0.82194697748;
    msg.cross_angle = 0.741280002778;
    msg.width = 0.820574569306;
    msg.length = 0.349755887073;
    msg.coff = 220U;
    msg.angaperture = 0.491893021262;
    msg.range = 2929U;
    msg.overlap = 113U;
    msg.flags = 104U;
    msg.custom.assign("KDRDPYLHMHRHNFLCVDGOJOMGUYUPKMZTWMWIUFETLLHUZQPZIOAEPBLKJCKFZEXVDDWAWAPEVCNXSJJFKSOJAVZNCJJUPSXHVTATDNYXIGHPAVIGBMQORLHGBYWIYWYJLQNWHKKLXAIQNZFOYOUVGTNQFHYMCMGNR");

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
    msg.setTimeStamp(0.300400582562);
    msg.setSource(27365U);
    msg.setSourceEntity(112U);
    msg.setDestination(49951U);
    msg.setDestinationEntity(158U);
    msg.timeout = 41472U;
    msg.lat = 0.565198127938;
    msg.lon = 0.58627324712;
    msg.z = 0.986227743713;
    msg.z_units = 227U;
    msg.speed = 0.157504613845;
    msg.speed_units = 96U;
    msg.syringe0 = 85U;
    msg.syringe1 = 216U;
    msg.syringe2 = 117U;
    msg.custom.assign("MQUSDFYLJHKLEGYKOWJTUXNFVGUPXUQGIZUXDQBQZIWMPUQQHTSCEZVKYWSENKTOOFJLKLNZFYYIJFBAWAFQRVTIVXXAAICRONMBRMRCOLBN");

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
    msg.setTimeStamp(0.160155855538);
    msg.setSource(32388U);
    msg.setSourceEntity(193U);
    msg.setDestination(44359U);
    msg.setDestinationEntity(66U);
    msg.timeout = 26506U;
    msg.lat = 0.688668776809;
    msg.lon = 0.241649336249;
    msg.z = 0.505358610794;
    msg.z_units = 2U;
    msg.speed = 0.552678451776;
    msg.speed_units = 81U;
    msg.syringe0 = 59U;
    msg.syringe1 = 248U;
    msg.syringe2 = 237U;
    msg.custom.assign("IVWWEKIWXJNBVQVNZLZWIOYSMKTAEOVCZVLSGQOHYETEDZJPPGLPZEHFHFFYVJIVLTGJUVADYGETCBUUDAHFGROLSXOJTGKQUBNYEARNNLSHFIZQAIRQPXWQVVANJJKJYSBMABDZFMUPGYXOIQCCYCEJXEXTZOBAHUSIDGXQW");

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
    msg.setTimeStamp(0.560177334962);
    msg.setSource(13258U);
    msg.setSourceEntity(231U);
    msg.setDestination(48817U);
    msg.setDestinationEntity(144U);
    msg.timeout = 5263U;
    msg.lat = 0.826949824037;
    msg.lon = 0.534976988333;
    msg.z = 0.27427676471;
    msg.z_units = 248U;
    msg.speed = 0.147432331647;
    msg.speed_units = 120U;
    msg.syringe0 = 178U;
    msg.syringe1 = 35U;
    msg.syringe2 = 83U;
    msg.custom.assign("AGZMYJPWNDKCHXQFMJSVBHXQTNKMRWQZJBTALLBDSYUIIHTMYDUAIDKTPZROYGCIHVYSBWYVBNRMCUTXLEUMUAHZDCENTTUGGLWLMFXJLRNEJQKIFUKSCVGLFIKFVWROBXSOCZYNPPQPJGZOOJQKRBLVWHRYISEQWVDJC");

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
    msg.setTimeStamp(0.748099041775);
    msg.setSource(4830U);
    msg.setSourceEntity(210U);
    msg.setDestination(20311U);
    msg.setDestinationEntity(108U);

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
    msg.setTimeStamp(0.806714589483);
    msg.setSource(25759U);
    msg.setSourceEntity(91U);
    msg.setDestination(47216U);
    msg.setDestinationEntity(17U);

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
    msg.setTimeStamp(0.19144481653);
    msg.setSource(63782U);
    msg.setSourceEntity(203U);
    msg.setDestination(4623U);
    msg.setDestinationEntity(167U);

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
    msg.setTimeStamp(0.241730465649);
    msg.setSource(26274U);
    msg.setSourceEntity(220U);
    msg.setDestination(2245U);
    msg.setDestinationEntity(11U);
    msg.lat = 0.51237627308;
    msg.lon = 0.0385662790133;
    msg.z = 0.439354903708;
    msg.z_units = 23U;
    msg.speed = 0.901892896463;
    msg.speed_units = 46U;
    msg.takeoff_pitch = 0.921441309949;
    msg.custom.assign("CHYUKLFJYFRGDNLVJSIMWXXZWKHQGULFOZFWEXOPWOCLNSRRKOJVESBQLUAEWCRSJGBCKOBTAICHCJPYDEFHMSTWSGDKOGUUDTQDANKEWGLLTYXASMANZMDQBNOIMSGCUIAQRJYPWXJPUVULZXVZTLDHHUTIVJLHPPYVYZXUVQANCCVSJEIYYIDBNTHRHFIEHOG");

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
    msg.setTimeStamp(0.170581980009);
    msg.setSource(51027U);
    msg.setSourceEntity(218U);
    msg.setDestination(46948U);
    msg.setDestinationEntity(72U);
    msg.lat = 0.88076292801;
    msg.lon = 0.125466892402;
    msg.z = 0.138559303959;
    msg.z_units = 241U;
    msg.speed = 0.982711405212;
    msg.speed_units = 241U;
    msg.takeoff_pitch = 0.319994545106;
    msg.custom.assign("ZXLTPATWJLEWQGJXSATUHHEIQBFAXCZURNHOPGQGMUSMDPSKUYCMEQEXJSIWLYDZOKJVIDYWHDGDFBDBZECRXROEQHTTPUJGDJYQHKHQVMYNYZMIAQZXWOGHOTNDBUXCMVFRELEGFFWMSCTDOABUHKCJVVJJVAMVRYCUNKURAKPWEOPXSVLRKZRFTNXNKBPPIQLFWSZGIVBFONBAMIYRONODNYPIPLLSCIFZESNSKZTVAFHWUKXLBMLY");

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
    msg.setTimeStamp(0.709252713306);
    msg.setSource(8755U);
    msg.setSourceEntity(168U);
    msg.setDestination(43759U);
    msg.setDestinationEntity(79U);
    msg.lat = 0.853359431088;
    msg.lon = 0.922295851427;
    msg.z = 0.278582684934;
    msg.z_units = 17U;
    msg.speed = 0.851048550245;
    msg.speed_units = 196U;
    msg.takeoff_pitch = 0.0221020577911;
    msg.custom.assign("PRIMUNQXLYGCPSMFYXKXNGAUJHWUMPUBTUITWAEZLBPHSHDARDNPWJJGSZMUWABBLWYSVVMZYVUOONUFDOHWRHZPWZVJLSCTKBVHRHTAKQSCORITFOBPZZGNFGPCJHXDAO");

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
    msg.setTimeStamp(0.646416775416);
    msg.setSource(12772U);
    msg.setSourceEntity(137U);
    msg.setDestination(61912U);
    msg.setDestinationEntity(83U);
    msg.lat = 0.0726499191872;
    msg.lon = 0.501564420623;
    msg.z = 0.884606272594;
    msg.z_units = 0U;
    msg.speed = 0.887117878513;
    msg.speed_units = 138U;
    msg.abort_z = 0.148735820567;
    msg.bearing = 0.346956142491;
    msg.glide_slope = 197U;
    msg.glide_slope_alt = 0.186472625568;
    msg.custom.assign("EVNXNLJPCQGOKZOLDUBNGJBZDPFZDNOXUVTXLJUHIBDLFWGCXRJCWDHSZWBJWTOQKERPVSQCZOHARGRYILQEBXOZYNRSLPFEYMASXYUPTYXWCZAXMCZEYQMMNPXWLTBENIUMVVUATGGIZAJHTITWXDYGCPFPNQBBMVVRKQTJIUKTFKHEHIHELQQEIHOBWSFOJRYECIMFGAFGVKAMSLNOSSZWKIPUCYVAHMDUOAUVHFKJK");

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
    msg.setTimeStamp(0.45504352975);
    msg.setSource(33417U);
    msg.setSourceEntity(218U);
    msg.setDestination(57503U);
    msg.setDestinationEntity(47U);
    msg.lat = 0.192983478196;
    msg.lon = 0.901727093352;
    msg.z = 0.225416897996;
    msg.z_units = 39U;
    msg.speed = 0.420514447856;
    msg.speed_units = 177U;
    msg.abort_z = 0.0379770744202;
    msg.bearing = 0.128000395123;
    msg.glide_slope = 24U;
    msg.glide_slope_alt = 0.965249864143;
    msg.custom.assign("DDNTZZWLPQHEGWKPETRPQVUHVLQPHFBXALWUTYMEDUYMXZJICKWDU");

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
    msg.setTimeStamp(0.0568011137085);
    msg.setSource(22789U);
    msg.setSourceEntity(31U);
    msg.setDestination(13750U);
    msg.setDestinationEntity(56U);
    msg.lat = 0.249688118555;
    msg.lon = 0.653163902899;
    msg.z = 0.773019899302;
    msg.z_units = 6U;
    msg.speed = 0.158511911609;
    msg.speed_units = 155U;
    msg.abort_z = 0.0801118839277;
    msg.bearing = 0.972174122308;
    msg.glide_slope = 70U;
    msg.glide_slope_alt = 0.670840371224;
    msg.custom.assign("PJHXAWYCAGOSVEJTOEAFJMXZBTGCFPDMVCUDDOUFVUIKMETZEEEXLYAMKOIPBTXQLWGLECSCNZRNLZASKFRJOAIRXPVGUAQRTHDOSQLRUZRWHNFZWDCZJZDYVJMYVMSVNCCUWWZBQNLHHEBRNPQHABRSUDC");

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
    msg.setTimeStamp(0.423725400174);
    msg.setSource(4476U);
    msg.setSourceEntity(216U);
    msg.setDestination(12042U);
    msg.setDestinationEntity(254U);
    msg.lat = 0.816409986829;
    msg.lon = 0.626351633753;
    msg.speed = 0.666992670332;
    msg.speed_units = 64U;
    msg.limits = 209U;
    msg.max_depth = 0.837437696348;
    msg.min_alt = 0.758550613093;
    msg.time_limit = 0.611328590947;
    msg.controller.assign("WTLRYRLHPBAGZKWNURIEODPBAGPOSDPXTRIKWNYODRGYGXKNYNPJXWZMLBYDBIILQISZCVPVGJSDOJVQEQCKIVMKKTEQHICAWGWUZRVBTUTHUAZFMKDRYIRGTJUXFFAVZCFJJTBAGTJSVPPHLXWQL");
    msg.custom.assign("EYCKENWGKUVOCJSPCNFLFLHVNRGCYDSBCHLGVMBSHDQASEKOIKIQGHJWULHSODQCZQIDBVQSPVGZTOKGMXVQORHJA");

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
    msg.setTimeStamp(0.745241134643);
    msg.setSource(61409U);
    msg.setSourceEntity(252U);
    msg.setDestination(63523U);
    msg.setDestinationEntity(3U);
    msg.lat = 0.141167121401;
    msg.lon = 0.996268347009;
    msg.speed = 0.754194174019;
    msg.speed_units = 239U;
    msg.limits = 87U;
    msg.max_depth = 0.53542110056;
    msg.min_alt = 0.920732877581;
    msg.time_limit = 0.230239952375;
    msg.controller.assign("GFAZKXKZHRZCZTZVXYQFNBHPCNKWRPWTCTNQJGZMESDTQYACHPMDYCFKYJSZEJUPWDIAYDIGKJSIQRHVRIEOCKRBYRYJJLAYGJWUALMXRRMZOBDQXO");
    msg.custom.assign("ZOSEWDFUMTDVQOEGNYYXXVECQHXVTFQFQOJIVMYWRGATGHCRACQNWTZIAPJXVMWHRNTHOWVYHPFNWMPJSWYSUGLFPDFTLQDFJSABZAPGKQZLCBZOMIRKDWYMDICGAXYNYNBCBYJ");

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
    msg.setTimeStamp(0.838384139638);
    msg.setSource(18408U);
    msg.setSourceEntity(135U);
    msg.setDestination(58030U);
    msg.setDestinationEntity(114U);
    msg.lat = 0.669739949207;
    msg.lon = 0.963813843998;
    msg.speed = 0.237740818628;
    msg.speed_units = 123U;
    msg.limits = 250U;
    msg.max_depth = 0.228640187883;
    msg.min_alt = 0.559001506557;
    msg.time_limit = 0.0295743205138;
    msg.controller.assign("FQOXVDHFOGDTUIPWALFBFXINOCTHHPSSKJJTRROCSQKEZIHVLPCEYUBPLRRVVIJQJSKZNLUACTNMIFCHXFLORUVEQBKPMXMJBWAFZJBUHHMDNMUPZKMFYKCLESYSBKQOBROSWZXCSUQEAYIXXIOZJRAUYPEVZFWWJRDODGGGOMRZDWLAANHMTKEYWALGVWYNVGCTVGJJTTFXQGRIIY");
    msg.custom.assign("SABGONPYHFMAEVYVGLXIRGENESGQLKRQJFPQMNQPWRNJVWOWYQDDESCKJJJSUQWGILBVIFHZPVYDCIBPUJNNHCRXCHLGOWRAZIBIPZEMHVM");

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
    msg.setTimeStamp(0.823569739161);
    msg.setSource(45815U);
    msg.setSourceEntity(4U);
    msg.setDestination(5735U);
    msg.setDestinationEntity(13U);
    msg.target.assign("YAACTDRDGEVCGHNWFNJRBOGCHBPKSNALTFZVHHSPEAXJEMILWGLZEOTZJQPOLGGDPWCELWFWDUHWKFFUSMDOLUDNPJXOSRGEFRKVIIMOABMEVPJUMXRJBNLQRVJKFQNKTCIVZJATRX");
    msg.max_speed = 0.973381789244;
    msg.speed_units = 124U;
    msg.lat = 0.43900648425;
    msg.lon = 0.298947434167;
    msg.z = 0.133587544591;
    msg.z_units = 189U;
    msg.custom.assign("RXKUPYMNDZLTAUBESNEFAEBQSUJZIQXEZWYQBPYQSJBSRPLFIHRTFXSGJARQWIGSFFNGOCUUHKHW");

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
    msg.setTimeStamp(0.161010508009);
    msg.setSource(33231U);
    msg.setSourceEntity(37U);
    msg.setDestination(32451U);
    msg.setDestinationEntity(250U);
    msg.target.assign("KZFPOUBONPRTTPUNMZZFNKYUVRVBFPSGCLNJZYTMSPRAOOEJCTQBGHEHXCFKGDYGAIRFTFXLMWRQMQHJRJTJISXKTNWVEAEBPBPWBDDDLHILJONXDMWMCQIHERUOZRUVLXJSWJJTSCHIHQWCXQGGULNMOTJPXPQHCKUQAZZANDQDGTYWAZDYUWGRVPKMIVYVNIKIEXUCSSAESEBVXWGCLFLFYGFYSYOKXYCIKSDN");
    msg.max_speed = 0.649232976055;
    msg.speed_units = 227U;
    msg.lat = 0.905092926895;
    msg.lon = 0.627363416744;
    msg.z = 0.289192287954;
    msg.z_units = 111U;
    msg.custom.assign("ANBQFUNRTUXEMCILBXAIKJXUQLAQVDNZMNWLYRULCCRBUCKLIDZIHYVBGBEKZTNDFPJCWZZJSXKGTYFGZPDPYSNOHNTDUFKQGFHIRDTTABKRMEFBPEJJQRXMYHHVOWAWZTTSOMPOZEALSEFYQXDIZCWMBYRLBCUQVVKXAVZRVDSJFBSWNDOFVASGQKAYTSUPURIJHHEYT");

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
    msg.setTimeStamp(0.536396481603);
    msg.setSource(3448U);
    msg.setSourceEntity(193U);
    msg.setDestination(60221U);
    msg.setDestinationEntity(144U);
    msg.target.assign("GQTHHWLYPQJVVFNVMSPCONRWACZADYHOKMCGZJTWUZXPVNOLLWUHFMUNJLFRBWIBXXEZKGFQFAVVCJFDWWGHDXWNVOLSSHXIYFDMKPWUBPRIXUVLNLBRSSNYZIEKUTTAIMTEQYATRKCRYKXQOKYIZJPBEGZS");
    msg.max_speed = 0.69073902009;
    msg.speed_units = 114U;
    msg.lat = 0.577516815006;
    msg.lon = 0.860714402889;
    msg.z = 0.749049290254;
    msg.z_units = 64U;
    msg.custom.assign("NISMRZKYYJIWSVVJAGZHLDFGBMDKMXDIIOKXVNPUQWYUPNPTVEDPNMFGEUYCQVDT");

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
    msg.setTimeStamp(0.216939973236);
    msg.setSource(30355U);
    msg.setSourceEntity(35U);
    msg.setDestination(20336U);
    msg.setDestinationEntity(213U);
    msg.timeout = 5832U;
    msg.lat = 0.0641644438406;
    msg.lon = 0.214090767317;
    msg.speed = 0.490742379787;
    msg.speed_units = 13U;
    msg.custom.assign("BPFTWVKJUULOUIYJOCNMSYFINCPNYXYZOWXSPAWZEEAAWMMTKFBKJUQJHLLPRHQUEICRGGCVJRVBGRJOWFBVHQZPMFDDYODUTGUPYAAXIHNVXKIFQJNVUXHFGXECDPEWBMSBGLXTVOBSLIXNINCZZPDZHOPMKATLFRWXFRZCOQ");

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
    msg.setTimeStamp(0.124178328091);
    msg.setSource(931U);
    msg.setSourceEntity(13U);
    msg.setDestination(9338U);
    msg.setDestinationEntity(75U);
    msg.timeout = 59308U;
    msg.lat = 0.956082824513;
    msg.lon = 0.467369444539;
    msg.speed = 0.395910924457;
    msg.speed_units = 172U;
    msg.custom.assign("TUJYRLXXICHBARFGAGUOCFMRAXYWPDNJGHLIECOEACAJYGVBLKBLDBASVZLVAWZUBUVOHNTOLGUQLPWXHNOKHTQWMFKXYCPH");

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
    msg.setTimeStamp(0.293499996147);
    msg.setSource(17304U);
    msg.setSourceEntity(228U);
    msg.setDestination(55688U);
    msg.setDestinationEntity(2U);
    msg.timeout = 49011U;
    msg.lat = 0.135433417036;
    msg.lon = 0.997505629364;
    msg.speed = 0.170145428439;
    msg.speed_units = 57U;
    msg.custom.assign("HZNOYKVQRSFFQZIYSCJBRNPSFPJUSDFCWOTQDVXSNHOAGMECJTZJKFLCEGBDFPD");

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
    msg.setTimeStamp(0.649739543958);
    msg.setSource(56943U);
    msg.setSourceEntity(20U);
    msg.setDestination(29704U);
    msg.setDestinationEntity(253U);
    msg.lat = 0.744984283952;
    msg.lon = 0.510401411817;
    msg.z = 0.0798853227279;
    msg.z_units = 21U;
    msg.radius = 0.851939763578;
    msg.duration = 3180U;
    msg.speed = 0.477092869123;
    msg.speed_units = 181U;
    msg.popup_period = 61015U;
    msg.popup_duration = 45459U;
    msg.flags = 153U;
    msg.custom.assign("YCMJVWRWBJIVXCRMLOTQESBVAYXIDOLVAZQTQHIEZLSNIDGAEBBZCYHTSWPFAAKPJKNYNNKDOXLYSULPFJEEFIMMLXPCCBEZGWGSDWAZKSKLXVJGJGXSFFKYRGZBZREVRH");

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
    msg.setTimeStamp(0.265981322272);
    msg.setSource(2843U);
    msg.setSourceEntity(97U);
    msg.setDestination(43651U);
    msg.setDestinationEntity(114U);
    msg.lat = 0.217883821765;
    msg.lon = 0.0549626782747;
    msg.z = 0.0529080073974;
    msg.z_units = 157U;
    msg.radius = 0.0776406463692;
    msg.duration = 16548U;
    msg.speed = 0.57266559035;
    msg.speed_units = 126U;
    msg.popup_period = 63373U;
    msg.popup_duration = 48146U;
    msg.flags = 178U;
    msg.custom.assign("RYFAWSPKSYUNVDU");

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
    msg.setTimeStamp(0.952001403147);
    msg.setSource(2794U);
    msg.setSourceEntity(48U);
    msg.setDestination(46068U);
    msg.setDestinationEntity(147U);
    msg.lat = 0.969045790404;
    msg.lon = 0.994226870191;
    msg.z = 0.253984605334;
    msg.z_units = 86U;
    msg.radius = 0.460362924772;
    msg.duration = 29558U;
    msg.speed = 0.832464875952;
    msg.speed_units = 133U;
    msg.popup_period = 64380U;
    msg.popup_duration = 63468U;
    msg.flags = 63U;
    msg.custom.assign("VUUBEYKSGIKTLUZHGCXHCQDTCDNQDUNVVLOLOABLOKRJFULHXJMVSITZKZWEYPLXBCYPRVTDOWIJDYMYQRC");

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
    msg.setTimeStamp(0.168995442933);
    msg.setSource(35199U);
    msg.setSourceEntity(191U);
    msg.setDestination(20739U);
    msg.setDestinationEntity(166U);
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("XSYLQGVMDMTMTQWXLPNHDYSOLJEMSEHUDSGAYKHKQIHVERUDDTIKFBECPYWQYKXRBOWAEVDAOUVHARUWCWHOFMRQXNWUTUZVT");
    IMC::Alignment tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeout = 21140U;
    tmp_tmp_msg_0_0.lat = 0.281751381219;
    tmp_tmp_msg_0_0.lon = 0.899298963925;
    tmp_tmp_msg_0_0.speed = 0.702969694254;
    tmp_tmp_msg_0_0.speed_units = 66U;
    tmp_tmp_msg_0_0.custom.assign("TOMPAKSQJPURLHRPGUOMJIDZDAJLKDAPYQZWEMNTADNUAKPJFHSBCUCZHTNVFVYLPXOKLK");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::VehicleFormation tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.lat = 0.756432222223;
    tmp_tmp_msg_0_1.lon = 0.314635825615;
    tmp_tmp_msg_0_1.z = 0.160873253587;
    tmp_tmp_msg_0_1.z_units = 200U;
    tmp_tmp_msg_0_1.speed = 0.783792559855;
    tmp_tmp_msg_0_1.speed_units = 93U;
    IMC::TrajectoryPoint tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.x = 0.419347254627;
    tmp_tmp_tmp_msg_0_1_0.y = 0.57942963914;
    tmp_tmp_tmp_msg_0_1_0.z = 0.735433311459;
    tmp_tmp_tmp_msg_0_1_0.t = 0.167975678551;
    tmp_tmp_msg_0_1.points.push_back(tmp_tmp_tmp_msg_0_1_0);
    IMC::VehicleFormationParticipant tmp_tmp_tmp_msg_0_1_1;
    tmp_tmp_tmp_msg_0_1_1.vid = 58922U;
    tmp_tmp_tmp_msg_0_1_1.off_x = 0.417292850029;
    tmp_tmp_tmp_msg_0_1_1.off_y = 0.731581500361;
    tmp_tmp_tmp_msg_0_1_1.off_z = 0.69132993287;
    tmp_tmp_msg_0_1.participants.push_back(tmp_tmp_tmp_msg_0_1_1);
    tmp_tmp_msg_0_1.start_time = 0.0907040093438;
    tmp_tmp_msg_0_1.custom.assign("ZZPFZENJFLFXBNCDEBSOJSDSTDTKTPQQCBIIUWDNBPMXMWBNHDRREDHANULVQIXUGHU");
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    IMC::NeptusBlob tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.content_type.assign("XBSRVMWUJIANTKYRMFORAFJMDLFUTTYQDQWNMWKARPQBVUAQABNFJNTCHNSSKCXTHVREGILRJZ");
    const char tmp_tmp_tmp_msg_0_2_0[] = {17, 39, 75, -93, -119, -51, 53, -9, -55, -112, 44, -98, 109, -15, -106, -20, 13, 106, -15, -103, 112, -15, 115, -52, -108, -17, 95, -28, 110, 28, -30, 84, -92};
    tmp_tmp_msg_0_2.content.assign(tmp_tmp_tmp_msg_0_2_0, tmp_tmp_tmp_msg_0_2_0 + sizeof(tmp_tmp_tmp_msg_0_2_0));
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
    msg.setTimeStamp(0.47489055765);
    msg.setSource(2830U);
    msg.setSourceEntity(96U);
    msg.setDestination(46432U);
    msg.setDestinationEntity(47U);
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("WRTBZAIOHZNFDKOANEFXRJQFRWBBTKYLPZHCZRWOJJBXPHYXQBKFGKTPAMBEQAOIQQPFVFTSJKLDUVNFNITNJVLLMUDDHCMALUTXELDGUHSMBJHNWNEDCNSCAPQHOIZLMUATCOUCHKJGJECKMRPSWPRUUWGKVITZWHSTLJOMYJZGIDRIGVQBWEMEXKYXZVRXPGOCRUGINQYPVFOEEMBBQPGRAZOIXMQSVDDIEFYYFWSNSGYAHL");
    IMC::PopUp tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeout = 58843U;
    tmp_tmp_msg_0_0.lat = 0.788170461136;
    tmp_tmp_msg_0_0.lon = 0.465956704381;
    tmp_tmp_msg_0_0.z = 0.62719755943;
    tmp_tmp_msg_0_0.z_units = 76U;
    tmp_tmp_msg_0_0.speed = 0.0809070006414;
    tmp_tmp_msg_0_0.speed_units = 91U;
    tmp_tmp_msg_0_0.duration = 57003U;
    tmp_tmp_msg_0_0.radius = 0.967907599659;
    tmp_tmp_msg_0_0.flags = 248U;
    tmp_tmp_msg_0_0.custom.assign("MAHXVVTTYOJRGGYKUXQTAFTKSPBLHEBDSZIBWGGUEXHWPQGCZKOTPEAXXQCMSVVIAFRBDVXDIODXWRDRHKYYOMEOTAHCMTSBBESNUGZKADNGJDNYJOIWCHYMMEQLBZXZJLFLWHPLYWRZPECAZSQUVDFHWRECDPNROFRZOSPIHOHYNJVIOAUQFQQFWKNJPBWBSJNJLGIFTQ");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::PeekDesiredPath tmp_tmp_msg_0_1;
    IMC::DesiredPath tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.path_ref = 763562773U;
    tmp_tmp_tmp_msg_0_1_0.start_lat = 0.247477210545;
    tmp_tmp_tmp_msg_0_1_0.start_lon = 0.369562169451;
    tmp_tmp_tmp_msg_0_1_0.start_z = 0.71651642044;
    tmp_tmp_tmp_msg_0_1_0.start_z_units = 20U;
    tmp_tmp_tmp_msg_0_1_0.end_lat = 0.585096471003;
    tmp_tmp_tmp_msg_0_1_0.end_lon = 0.26870353547;
    tmp_tmp_tmp_msg_0_1_0.end_z = 0.206103972336;
    tmp_tmp_tmp_msg_0_1_0.end_z_units = 9U;
    tmp_tmp_tmp_msg_0_1_0.speed = 0.780103042426;
    tmp_tmp_tmp_msg_0_1_0.speed_units = 166U;
    tmp_tmp_tmp_msg_0_1_0.lradius = 0.338845894697;
    tmp_tmp_tmp_msg_0_1_0.flags = 185U;
    tmp_tmp_msg_0_1.dpath.set(tmp_tmp_tmp_msg_0_1_0);
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
    msg.setTimeStamp(0.279618146484);
    msg.setSource(20003U);
    msg.setSourceEntity(165U);
    msg.setDestination(32648U);
    msg.setDestinationEntity(165U);
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("UBRWKMTRVIVZLBOSBAZUEDMXGSBWCNCNFOKFFNWGYMHVEOBYRNJZPXIPFKTFPSIUIBWIFIUXQTGQPVJQLCAZYAQQKJHAWSVSZSQSFZLHFVLXEPDEY");
    IMC::Sample tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeout = 20630U;
    tmp_tmp_msg_0_0.lat = 0.139674768886;
    tmp_tmp_msg_0_0.lon = 0.398569051007;
    tmp_tmp_msg_0_0.z = 0.0114823256121;
    tmp_tmp_msg_0_0.z_units = 224U;
    tmp_tmp_msg_0_0.speed = 0.814854674774;
    tmp_tmp_msg_0_0.speed_units = 140U;
    tmp_tmp_msg_0_0.syringe0 = 177U;
    tmp_tmp_msg_0_0.syringe1 = 80U;
    tmp_tmp_msg_0_0.syringe2 = 118U;
    tmp_tmp_msg_0_0.custom.assign("BUPOIZWVJEEFYWCAETRWIJEOFKPZEWQHZLVZHXGCNUVQQQNGMZXEUNXALAZAJOHXXYIKXOBXDIDGETBPOOAUKHEVCUGFRBRBMTAOCWTKSVMUWLDUXVIZNRPLSGSTFQSNGXJCDOHIFAKVFUCIXUPSLBIDBLYHVWLUVMDZQSYNAKJQJNSCJNMSTVMMLSTHEKQGNP");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::CurrentProfileCell tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.cellposition = 0.65709986596;
    tmp_tmp_msg_0_1.x = 0.472609807993;
    tmp_tmp_msg_0_1.y = 0.683190203143;
    tmp_tmp_msg_0_1.z1 = 0.0917802062702;
    tmp_tmp_msg_0_1.z2 = 0.131809589691;
    tmp_tmp_msg_0_1.amp0 = 0.606237575294;
    tmp_tmp_msg_0_1.amp1 = 0.0979289620678;
    tmp_tmp_msg_0_1.amp2 = 0.155539354547;
    tmp_tmp_msg_0_1.amp3 = 0.456192663169;
    tmp_tmp_msg_0_1.cor0 = 211U;
    tmp_tmp_msg_0_1.cor1 = 201U;
    tmp_tmp_msg_0_1.cor2 = 107U;
    tmp_tmp_msg_0_1.cor3 = 110U;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    IMC::UamRxRange tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.seq = 27662U;
    tmp_tmp_msg_0_2.sys.assign("EOEWAEUZYNATPNDPDVHOYBLUJQZOGRWTJKPCBMKXFBXDRVKLOOFTAHDUPAMVDMHFJCMZIWWSESYLHLWCXDAJRKKLRECJSUOLOJQTPEYSQQVSHQWLKYAUPZVFXRHDQVNXBALCSYPDBXVMJGNWEGZWNCQISXOYAGBHOPWIFZLXPNRYT");
    tmp_tmp_msg_0_2.value = 0.0525514393568;
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
    msg.setTimeStamp(0.412636151386);
    msg.setSource(25020U);
    msg.setSourceEntity(100U);
    msg.setDestination(50137U);
    msg.setDestinationEntity(230U);
    msg.timeout = 40209U;
    msg.lat = 0.509158404958;
    msg.lon = 0.726508778287;
    msg.z = 0.972337483548;
    msg.z_units = 9U;
    msg.speed = 0.641000665933;
    msg.speed_units = 71U;
    msg.bearing = 0.222077599686;
    msg.width = 0.801308891259;
    msg.direction = 5U;
    msg.custom.assign("WSABTXMCCWKVGDPVVYFHPBEHLCOPUXPBTTNLYRFNPTUYLIQUKDHEIPSICSYORYKDOSTFFMRZZIFDYAVJVBLUGQATTNAETJMJNKLJLJPQXWCDCCZMEQXLVUEEZURAWZJWVFWKJYOQMNRAZKDOUIQDWFHOVFKVFEBGRDYWHYBHMQWUBQZZHTNMZOGXBGTUCSWGRGMJGDPJKJCSIQLIEVNPHOSAINUKX");

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
    msg.setTimeStamp(0.169404990927);
    msg.setSource(17840U);
    msg.setSourceEntity(133U);
    msg.setDestination(30075U);
    msg.setDestinationEntity(209U);
    msg.timeout = 22814U;
    msg.lat = 0.0233958997873;
    msg.lon = 0.55406172954;
    msg.z = 0.176507574326;
    msg.z_units = 112U;
    msg.speed = 0.747962031562;
    msg.speed_units = 9U;
    msg.bearing = 0.653048777478;
    msg.width = 0.908374434796;
    msg.direction = 185U;
    msg.custom.assign("ZDQAUDYXCAOHJHZGHMZTNNTUFRMGLISLYENQQLOHVWBZYDDXKGJLULMUQBPBBCOFUANPYTPWWKOBMSFMCWDXDCVFFFKJHIVHNNCPLWXJVPHWKWLZWERYGJTVUPSKOROVIIMRTROFOCJKRKEVPEUPIEJNOARVNTXSGTCFHTGZWADZKSZSDGSUJYEYHUXVMCLBDGCQTQKCQAISIJZLMASQY");

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
    msg.setTimeStamp(0.953359726153);
    msg.setSource(40018U);
    msg.setSourceEntity(186U);
    msg.setDestination(18242U);
    msg.setDestinationEntity(193U);
    msg.timeout = 48982U;
    msg.lat = 0.592276368938;
    msg.lon = 0.646211395939;
    msg.z = 0.476369819109;
    msg.z_units = 156U;
    msg.speed = 0.911534741538;
    msg.speed_units = 236U;
    msg.bearing = 0.959892414046;
    msg.width = 0.207778908112;
    msg.direction = 137U;
    msg.custom.assign("CJSDQAHOQXZWCYJOTWEPCRGMNNQFKTGGGHASMCAFGZLRUJPWN");

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
    msg.setTimeStamp(0.0845954381561);
    msg.setSource(24683U);
    msg.setSourceEntity(82U);
    msg.setDestination(56960U);
    msg.setDestinationEntity(196U);
    msg.op_mode = 17U;
    msg.error_count = 134U;
    msg.error_ents.assign("WPGRZMWEIYQSYNHAMFLOHWURINHBZGXIJTZRNZUDCBXOEVCSSFMKQFTTVSGUZGRFBFVWHLWIMIDVICLSTLLBKALVFJFOWODLAMDANTRCBNNEEQFAGEIIELQNDOAJNPZPUQSETOKQRPZHRVJCEBYUZIDCXJJUWGWCXYEQKVXYKABPUYZCTHOYPVUDDJTSBDRGXNYJQRKMWKZOTYMNLYSXKOWSFPEXSVQGXJK");
    msg.maneuver_type = 25469U;
    msg.maneuver_stime = 0.54625464889;
    msg.maneuver_eta = 46928U;
    msg.control_loops = 2621342583U;
    msg.flags = 231U;
    msg.last_error.assign("SIWNZVUFKLBOGOXCJVEJHXYITNNEWIVCOWDMDTHPDBHFZZFRSLROVRJJLNREJFYPOAKMTKYSYLQFKPHCBWSUCMXEIWXPARAZBUXHPTKFDGNQLBQQJCSFSAAESQSCRQSSNJ");
    msg.last_error_time = 0.27065771975;

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
    msg.setTimeStamp(0.183554012072);
    msg.setSource(36517U);
    msg.setSourceEntity(6U);
    msg.setDestination(24122U);
    msg.setDestinationEntity(11U);
    msg.op_mode = 83U;
    msg.error_count = 189U;
    msg.error_ents.assign("FFRPLFXCMWZDLDFZHJMRNACYAWPKHQVSTLOXXZPWTPOGBYFZBJDNRBACXQBHHVSKSXJLHCJW");
    msg.maneuver_type = 28400U;
    msg.maneuver_stime = 0.632975097559;
    msg.maneuver_eta = 57839U;
    msg.control_loops = 588138172U;
    msg.flags = 192U;
    msg.last_error.assign("PRFYNCJLUNEHHZPLQOMPRFCTAOWWNKBXNKMGEVMTANAIUZWPVLLFLFIUTSJKNUEMV");
    msg.last_error_time = 0.879422027436;

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
    msg.setTimeStamp(0.401186413712);
    msg.setSource(24052U);
    msg.setSourceEntity(126U);
    msg.setDestination(51844U);
    msg.setDestinationEntity(48U);
    msg.op_mode = 80U;
    msg.error_count = 108U;
    msg.error_ents.assign("WVXTTPZVETAHUKUDDVVODNMVPVVLKCUAKJZNLPCIPFJBHBZJBSRYTNUZTVXOENTYEGMGILKHQRASQPRSPABRSHAQPUXPSIZJYZAXIJWBTYYUHBHGKOJXJTYIVYKTQNCOKEMLFMHDBLSRFWCQLUXCUOPGMFWDNKHARDARQGCCIXDDZFJMLLRIBHZVOYANJPEOMXECHJWFSECYFO");
    msg.maneuver_type = 27095U;
    msg.maneuver_stime = 0.608335292705;
    msg.maneuver_eta = 20445U;
    msg.control_loops = 3395446120U;
    msg.flags = 144U;
    msg.last_error.assign("WPZYVHHUSJESJENZGSHNQWLJQOQZNCEHGTCEFXBOVDFMNZBGMBVVVHJQIMLSWBKOCIABDCQRRAKAOTMWRSKMZVBLXREWUFBBKRXNILMDUSJCXURAYVEDPIJSTYQQYZGQCKOIPGTMPNSBRHFKHAIFAMMTFFBWFZRAEHDZOIEHHNUXPJVTVIPWYERGXYAPKXNSUUJAJLFRNCODDGOSPLDXTPDKUTOIQCIKGMCTGZ");
    msg.last_error_time = 0.159485028428;

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
    msg.setTimeStamp(0.236042242388);
    msg.setSource(55611U);
    msg.setSourceEntity(21U);
    msg.setDestination(25869U);
    msg.setDestinationEntity(207U);
    msg.type = 41U;
    msg.request_id = 34782U;
    msg.command = 37U;
    IMC::RowsCoverage tmp_msg_0;
    tmp_msg_0.lat = 0.166432460857;
    tmp_msg_0.lon = 0.0278819048906;
    tmp_msg_0.z = 0.695910828696;
    tmp_msg_0.z_units = 130U;
    tmp_msg_0.speed = 0.51026766035;
    tmp_msg_0.speed_units = 146U;
    tmp_msg_0.bearing = 0.959650778144;
    tmp_msg_0.cross_angle = 0.521851737607;
    tmp_msg_0.width = 0.984339459397;
    tmp_msg_0.length = 0.910738955045;
    tmp_msg_0.coff = 151U;
    tmp_msg_0.angaperture = 0.578284810697;
    tmp_msg_0.range = 61770U;
    tmp_msg_0.overlap = 20U;
    tmp_msg_0.flags = 243U;
    tmp_msg_0.custom.assign("PYIDRRBZTZOYIJANQCQIWEDLRTTXFSKGBHFCRRKCXPUEQHTYMERGOPCPNFMHEHLHGGZYVOFBQQSNSWYUALMUKNQKKXGNDBTCFRWTFSWNTYNLOUJHPWEFECBTXEPBTFPSXOMYHKYBLPZGWDLRDJZXWVUWCABIMZJJVVIBIEEAIHKGURVGULABJKWVRCOXXJJDKDGAYNMZV");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 28797U;
    msg.info.assign("TAKUBOCIKVBDHMFYMUNGLGAKCIIZQBTUHKCWQROMFUYIDMRPBFQXKASQEGRMAMGPXTLFTZNHIBHZMTBUWCAOVRAEWWBCWYYPRXYMNNRWTFLVFPHNOPGDHNDUFCHEDERPUSFASJYTRQAVLZCZFJBPONZHYIXILQXNRDEJSZJTVVPUSLVXLGCO");

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
    msg.setTimeStamp(0.498701321436);
    msg.setSource(27393U);
    msg.setSourceEntity(91U);
    msg.setDestination(14385U);
    msg.setDestinationEntity(58U);
    msg.type = 203U;
    msg.request_id = 45672U;
    msg.command = 81U;
    IMC::CoverArea tmp_msg_0;
    tmp_msg_0.lat = 0.307681430148;
    tmp_msg_0.lon = 0.246728823738;
    tmp_msg_0.z = 0.289760684023;
    tmp_msg_0.z_units = 2U;
    tmp_msg_0.speed = 0.0236381125331;
    tmp_msg_0.speed_units = 210U;
    tmp_msg_0.custom.assign("IRHQMPGHKXUATPRKFPTIHIUTGZMVBRTSBEYVJPAKYWJUEUCQEELNZLKJCIDJQLSPVBAMEVUDWCAAHIEGUSDFCNUDHDXBHRFLJEIPODFJRLWRSSTOAQQWOKBQOWSMBSYRYCYYWXXJQCNAKIMZNNFQKDON");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 20724U;
    msg.info.assign("QWFQYJHXZRNRTYFBAXWXHVULYLYAPYHAQORYZBDCTNJSPFVOZRVCCKTZBLKIIFLQMCAUKDKMWZDXCOEWLNKIQIOEVRMJNSZMBMZSSAKTXDBUCIFNBAUOWIGDOFTJGQHSWQESRMRXJITELMPVMKNTHJBHJFZLKYAWBFVGAQEHQNEKBTPUSVEGXCXSHTFVQH");

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
    msg.setTimeStamp(0.966487767284);
    msg.setSource(18118U);
    msg.setSourceEntity(253U);
    msg.setDestination(33592U);
    msg.setDestinationEntity(202U);
    msg.type = 85U;
    msg.request_id = 28594U;
    msg.command = 193U;
    IMC::Drop tmp_msg_0;
    tmp_msg_0.timeout = 7302U;
    tmp_msg_0.lat = 0.577684908913;
    tmp_msg_0.lon = 0.84125739101;
    tmp_msg_0.z = 0.629644460462;
    tmp_msg_0.z_units = 133U;
    tmp_msg_0.speed = 0.158075880185;
    tmp_msg_0.speed_units = 154U;
    tmp_msg_0.custom.assign("MSYOFCZXFAVUTGLWXSTNEGQCMMKLQBJJJILLWQEUAWYHTNYISHPPWNDEPITPGNSGTDKMPBPWXVKO");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 33687U;
    msg.info.assign("GILHGIXTJCMKLWBCLLMWFGADMNDGYNUBQJXKEREDXFSVHSRRNMPAEEYSGYHSQBPDSQJEOAWZCGEJFYHDKILSKKXCOITMKZPIDGYIAJSPVGFTCHEAUTHAVJNUEUZHQPSCDQBIDRDMZXIYTCPBMYJWZXJYHFOQULHSTFVZREJFRFYWTPEKBIMMVCZQUZQWKRVBOPGDNVNOXTRZQPGACLBOQVUTFUAJZLOAWWOUNUYOXBNXRWAHLNP");

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
    msg.setTimeStamp(0.18055323813);
    msg.setSource(37781U);
    msg.setSourceEntity(7U);
    msg.setDestination(25904U);
    msg.setDestinationEntity(48U);
    msg.command = 195U;
    msg.entities.assign("DNQSSFDPYSWSYHVYZGEEXTKOSBCYLAQLHMRI");

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
    msg.setTimeStamp(0.551627050939);
    msg.setSource(56475U);
    msg.setSourceEntity(34U);
    msg.setDestination(51336U);
    msg.setDestinationEntity(101U);
    msg.command = 81U;
    msg.entities.assign("GCHEGAVLRVYBIXNTKJCKTSBDKPUWKBAKWMJLLKTMXRYDWFHQFQTERNVIJXQNDCWUHTIAUZSONZKZFSZUFDACCCBLEHHIUVXUZPUWSNGEPSRIXFSSRRTTQLDBDFBBYXO");

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
    msg.setTimeStamp(0.74559786267);
    msg.setSource(14658U);
    msg.setSourceEntity(109U);
    msg.setDestination(33883U);
    msg.setDestinationEntity(127U);
    msg.command = 192U;
    msg.entities.assign("XKZLHGIXEPLVIKTEQBZFKNTCJVOYTVTDVBPPIVWUCVOSSYNLNUYIYGAQOKNGQGDWDFSTXDPSXTQVGUWDTQFUAHFJEPMEYYRJBFLYBJHLMJRLXCWZIODAYQPM");

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
    msg.setTimeStamp(0.414588300009);
    msg.setSource(5916U);
    msg.setSourceEntity(52U);
    msg.setDestination(41665U);
    msg.setDestinationEntity(224U);
    msg.mcount = 245U;
    msg.mnames.assign("JFTZLYAAAJKHYYZIBKZADZEERQPBMASVQUDNOPDWHBRQBLLLDOIPRD");
    msg.ecount = 250U;
    msg.enames.assign("FBHKTNSPZDLKMGMURYTJASBUUROFPXANRJMQZACDBFVVYNOTFAJTVIDIEMXSGJCGCSFJLWLXVKNTDYKORESZMNXWFDXNTPRVHPNIVZWNAKARPGUSFULZCPKBXJUTYQITWJGGXNUKGYBRWLMEIEZQLUOYKMBEWSDHCPGDXAHDMFQPHQ");
    msg.ccount = 205U;
    msg.cnames.assign("OUYCTBEPKTQRKLQZBWLCEXZSNIJNGCVTTDKASGDQDUJWJLGKARLXRSEYGXIKBIZHYRCPRHTZSXZGXFCHYYLMHMGKPUYCHMPWQDHFZMWJVVVNRVLIZEOMSHGVQKTO");
    msg.last_error.assign("JAETAHJBEBICNKRIVWEWRUXIMGJBJRKMSEGAHWJSBCPWIXPUOVFVIRDKYANJSNKHDFUOLABJNKFCMQNAZPYYPYIZLNEFPWTHUGYCMSGTRLVOHEAVPSXTCRTELHZXDDFJWOV");
    msg.last_error_time = 0.298412738649;

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
    msg.setTimeStamp(0.122769229974);
    msg.setSource(21187U);
    msg.setSourceEntity(130U);
    msg.setDestination(43341U);
    msg.setDestinationEntity(9U);
    msg.mcount = 154U;
    msg.mnames.assign("ZQJOZYOMDNSRNFGGMVSOLQHIWWKLUYHBUNWITKXKDKGFDMSVTVTC");
    msg.ecount = 95U;
    msg.enames.assign("XDPHHPZHURUAWPMXFRQDQYFCQMRVXCVADMFXIIIPQQUTYSJGPASCIWNMGUR");
    msg.ccount = 204U;
    msg.cnames.assign("XETYNYGVEOCZCPIGJNAIUPIDXWMSKLQKGFZTLAXHLDTIWELRWJHQBSKIVMWUFHZSWVLLAYFNJSNGZJYPDUVRDMABFMAUXDBZLOOUMVFTURJJBRIHIUEMKYRCCGPSBRCJDPARJXTMHCKWHRHCQQOHIKQPRTHUNSRQYCDCQNLZFGBONYMZQCQTPSEPAEXEOPKDZSOBTSWXUIFAKZALWDVLYNANQXYBEKOJKFGV");
    msg.last_error.assign("EGMRSWFPDWPYNXLBOEXZFFECSSQIADOXEVALFPKCLFGJQHNIUVDJUZOTNNMEBZEAICPIHMXOBFKMZKWFIJRJ");
    msg.last_error_time = 0.867545703745;

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
    msg.setTimeStamp(0.405521827141);
    msg.setSource(38176U);
    msg.setSourceEntity(214U);
    msg.setDestination(13601U);
    msg.setDestinationEntity(213U);
    msg.mcount = 237U;
    msg.mnames.assign("MVLVTOERTIPFTVMSXYNCERNMIVSQXDYINCGQWHSUV");
    msg.ecount = 96U;
    msg.enames.assign("QJWIDDHZCLIPNIHIOLFTFRFKGGNCVYRNILGTCAHOYIEONQIKKJNTMHACJCUSSOESWBAJQGZDFARJYCEKRRPFKZYKWKEUXSGOLQCQRDXBYHCVGWDNUJVXNETPLTHSVVUWZZYALXMLAUXTIOEWLFZAKBTJVWUQRPMSFYRWTSBCAUSSNFJGSIPHAOMPMPVZMMLRXJWPBINOBKZTYFXWGDXKCZGDTDLEXYQQABEUMZBXPMG");
    msg.ccount = 226U;
    msg.cnames.assign("JWFGEZMATHEIXNUTAQVAAPYEIZXFKHSIOODYSCVPNZTJRZTBPTEYKABSNEHXAKNIZBRLRZMUOIRMVOOGSJ");
    msg.last_error.assign("DVXXJCBWKCHDDNXDWJZJPUVEOUSYKINBMVELFHUKAAYVPMEBCIKDGSNTSGHSBBRGQPLRUVPQUJAOIVTFULFZYZEMOVMFJLNTMMKUJGGWJYHEMPIQ");
    msg.last_error_time = 0.928317015286;

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
    msg.setTimeStamp(0.239171426067);
    msg.setSource(37162U);
    msg.setSourceEntity(229U);
    msg.setDestination(53234U);
    msg.setDestinationEntity(13U);
    msg.mask = 179U;
    msg.max_depth = 0.869886992064;
    msg.min_altitude = 0.743113645705;
    msg.max_altitude = 0.0882150745342;
    msg.min_speed = 0.760722574429;
    msg.max_speed = 0.486641071958;
    msg.max_vrate = 0.884763879968;
    msg.lat = 0.656872244743;
    msg.lon = 0.457110924377;
    msg.orientation = 0.0856970756182;
    msg.width = 0.62091311829;
    msg.length = 0.214731202278;

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
    msg.setTimeStamp(0.62612261993);
    msg.setSource(39248U);
    msg.setSourceEntity(96U);
    msg.setDestination(8922U);
    msg.setDestinationEntity(164U);
    msg.mask = 49U;
    msg.max_depth = 0.12369165127;
    msg.min_altitude = 0.36258049503;
    msg.max_altitude = 0.452017322425;
    msg.min_speed = 0.478076838532;
    msg.max_speed = 0.298118687397;
    msg.max_vrate = 0.0845134112777;
    msg.lat = 0.745951700771;
    msg.lon = 0.595505688837;
    msg.orientation = 0.643294360733;
    msg.width = 0.591745234521;
    msg.length = 0.2946353274;

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
    msg.setTimeStamp(0.262897470697);
    msg.setSource(20063U);
    msg.setSourceEntity(185U);
    msg.setDestination(32326U);
    msg.setDestinationEntity(246U);
    msg.mask = 156U;
    msg.max_depth = 0.618830301174;
    msg.min_altitude = 0.443907715899;
    msg.max_altitude = 0.773969619998;
    msg.min_speed = 0.102738477064;
    msg.max_speed = 0.562884768107;
    msg.max_vrate = 0.295475774699;
    msg.lat = 0.379106538371;
    msg.lon = 0.0329757879634;
    msg.orientation = 0.280692794626;
    msg.width = 0.590563333058;
    msg.length = 0.679969809554;

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
    msg.setTimeStamp(0.312521850131);
    msg.setSource(37364U);
    msg.setSourceEntity(3U);
    msg.setDestination(2773U);
    msg.setDestinationEntity(189U);

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
    msg.setTimeStamp(0.500587234618);
    msg.setSource(40172U);
    msg.setSourceEntity(93U);
    msg.setDestination(2789U);
    msg.setDestinationEntity(67U);

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
    msg.setTimeStamp(0.660937957984);
    msg.setSource(39075U);
    msg.setSourceEntity(226U);
    msg.setDestination(8147U);
    msg.setDestinationEntity(238U);

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
    msg.setTimeStamp(0.597248972018);
    msg.setSource(55222U);
    msg.setSourceEntity(121U);
    msg.setDestination(22302U);
    msg.setDestinationEntity(163U);
    msg.duration = 30454U;

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
    msg.setTimeStamp(0.149866459529);
    msg.setSource(19506U);
    msg.setSourceEntity(19U);
    msg.setDestination(33049U);
    msg.setDestinationEntity(46U);
    msg.duration = 22269U;

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
    msg.setTimeStamp(0.709690187762);
    msg.setSource(40103U);
    msg.setSourceEntity(24U);
    msg.setDestination(31579U);
    msg.setDestinationEntity(153U);
    msg.duration = 49661U;

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
    msg.setTimeStamp(0.49196786416);
    msg.setSource(52140U);
    msg.setSourceEntity(206U);
    msg.setDestination(52009U);
    msg.setDestinationEntity(191U);
    msg.enable = 143U;
    msg.mask = 2079633512U;
    msg.scope_ref = 2682427538U;

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
    msg.setTimeStamp(0.277208621395);
    msg.setSource(36371U);
    msg.setSourceEntity(30U);
    msg.setDestination(1473U);
    msg.setDestinationEntity(10U);
    msg.enable = 196U;
    msg.mask = 3653501577U;
    msg.scope_ref = 4235706783U;

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
    msg.setTimeStamp(0.363970887755);
    msg.setSource(38567U);
    msg.setSourceEntity(253U);
    msg.setDestination(61205U);
    msg.setDestinationEntity(27U);
    msg.enable = 168U;
    msg.mask = 4260555332U;
    msg.scope_ref = 2969708036U;

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
    msg.setTimeStamp(0.270543711597);
    msg.setSource(43701U);
    msg.setSourceEntity(172U);
    msg.setDestination(53724U);
    msg.setDestinationEntity(250U);
    msg.medium = 113U;

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
    msg.setTimeStamp(0.218236207285);
    msg.setSource(42020U);
    msg.setSourceEntity(60U);
    msg.setDestination(6075U);
    msg.setDestinationEntity(13U);
    msg.medium = 70U;

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
    msg.setTimeStamp(0.159994111251);
    msg.setSource(37371U);
    msg.setSourceEntity(208U);
    msg.setDestination(14044U);
    msg.setDestinationEntity(140U);
    msg.medium = 145U;

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
    msg.setTimeStamp(0.363422281384);
    msg.setSource(14360U);
    msg.setSourceEntity(219U);
    msg.setDestination(34483U);
    msg.setDestinationEntity(98U);
    msg.value = 0.224192387005;
    msg.type = 254U;

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
    msg.setTimeStamp(0.251827007056);
    msg.setSource(13883U);
    msg.setSourceEntity(88U);
    msg.setDestination(59356U);
    msg.setDestinationEntity(236U);
    msg.value = 0.894780391472;
    msg.type = 171U;

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
    msg.setTimeStamp(0.0519440174123);
    msg.setSource(57370U);
    msg.setSourceEntity(151U);
    msg.setDestination(38750U);
    msg.setDestinationEntity(25U);
    msg.value = 0.916870098548;
    msg.type = 114U;

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
    msg.setTimeStamp(0.105983866816);
    msg.setSource(63991U);
    msg.setSourceEntity(121U);
    msg.setDestination(64926U);
    msg.setDestinationEntity(65U);
    msg.possimerr = 0.637163382084;
    msg.converg = 0.198693224684;
    msg.turbulence = 0.0641687530438;
    msg.possimmon = 47U;
    msg.commmon = 135U;
    msg.convergmon = 230U;

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
    msg.setTimeStamp(0.949777625033);
    msg.setSource(4148U);
    msg.setSourceEntity(236U);
    msg.setDestination(52253U);
    msg.setDestinationEntity(130U);
    msg.possimerr = 0.605512405749;
    msg.converg = 0.359455381242;
    msg.turbulence = 0.625542648171;
    msg.possimmon = 9U;
    msg.commmon = 250U;
    msg.convergmon = 129U;

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
    msg.setTimeStamp(0.587427266267);
    msg.setSource(31181U);
    msg.setSourceEntity(92U);
    msg.setDestination(18588U);
    msg.setDestinationEntity(194U);
    msg.possimerr = 0.323357729306;
    msg.converg = 0.410264606136;
    msg.turbulence = 0.45122439369;
    msg.possimmon = 108U;
    msg.commmon = 16U;
    msg.convergmon = 187U;

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
    msg.setTimeStamp(0.0506618716607);
    msg.setSource(63747U);
    msg.setSourceEntity(235U);
    msg.setDestination(7918U);
    msg.setDestinationEntity(12U);
    msg.autonomy = 92U;
    msg.mode.assign("COUFPGUSALTMGXWSXSSDEJKCBQRKOYPIEWTJQUNEAMGOFCDGVILQBRFQKYHOYTPPJDCFHZWWMCQLPDJABQTQYNIJLFBFOGWICSLHROQRAJLHHYGRXTDO");

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
    msg.setTimeStamp(0.277068777661);
    msg.setSource(1955U);
    msg.setSourceEntity(13U);
    msg.setDestination(59387U);
    msg.setDestinationEntity(39U);
    msg.autonomy = 105U;
    msg.mode.assign("KADLVXJIGFZZWOHJMWMBRMKHOHVJVQYGUKBRDWDOOCEQDNMMXEQKZHXSMAJXLDGSANPUGYWFIDAHPIWYFTTFURCPZWHFAJEHEBRCLNJSXYPUTMVFQUNNQEJYSOOPGINHOQKDKAVSCUQSKVCZSHYQXIRIMACPWFJYANDKTRKZATXRYLPVBTTFCCPEMWSLIPZUZQNCLSEWBJECQAUGDYNVLTGGISBVLFRGWLXIYTHZBVTZRBI");

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
    msg.setTimeStamp(0.532335351286);
    msg.setSource(40281U);
    msg.setSourceEntity(172U);
    msg.setDestination(25246U);
    msg.setDestinationEntity(57U);
    msg.autonomy = 157U;
    msg.mode.assign("HORIWAZGCKSPKLLHAPFLIGCEMSYCENVYTJTZXOESNXGHBAPIGVFIZRKABQEQOQAIPSOXRUXMWHJLVEOFHLDVMZVNMPYRUYDLCTMHEUHAIUQFCQXUZVRSSKLANILQPGZYQW");

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
    msg.setTimeStamp(0.707909737653);
    msg.setSource(59427U);
    msg.setSourceEntity(1U);
    msg.setDestination(10441U);
    msg.setDestinationEntity(191U);
    msg.type = 92U;
    msg.op = 137U;
    msg.possimerr = 0.464763746256;
    msg.converg = 0.370630376532;
    msg.turbulence = 0.643533733145;
    msg.possimmon = 218U;
    msg.commmon = 19U;
    msg.convergmon = 160U;

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
    msg.setTimeStamp(0.156386727646);
    msg.setSource(43952U);
    msg.setSourceEntity(113U);
    msg.setDestination(49691U);
    msg.setDestinationEntity(64U);
    msg.type = 204U;
    msg.op = 187U;
    msg.possimerr = 0.756343984326;
    msg.converg = 0.74726660088;
    msg.turbulence = 0.57711967552;
    msg.possimmon = 81U;
    msg.commmon = 38U;
    msg.convergmon = 89U;

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
    msg.setTimeStamp(0.122761368354);
    msg.setSource(48417U);
    msg.setSourceEntity(57U);
    msg.setDestination(7037U);
    msg.setDestinationEntity(105U);
    msg.type = 90U;
    msg.op = 59U;
    msg.possimerr = 0.427953037681;
    msg.converg = 0.803886311432;
    msg.turbulence = 0.514831963247;
    msg.possimmon = 96U;
    msg.commmon = 252U;
    msg.convergmon = 40U;

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
    msg.setTimeStamp(0.432655982934);
    msg.setSource(32936U);
    msg.setSourceEntity(161U);
    msg.setDestination(53856U);
    msg.setDestinationEntity(126U);
    msg.op = 134U;
    msg.comm_interface = 153U;
    msg.period = 47052U;
    msg.sys_dst.assign("DJRJNWYMTNZNKJODFQVAUSZUUEKFGZBXKJRWTOBEOAUHFPCZSTYNHCFINMSVVCOROAXPARBLOVGDGYBEYOPDFNXKFPZAHEKOTJBQVSQYTBPLKYDSMTYGQFRLWEPKQEQMREHPIJDTXHUGXUQASLMKIVVXOHB");

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
    msg.setTimeStamp(0.0260184920867);
    msg.setSource(407U);
    msg.setSourceEntity(99U);
    msg.setDestination(6788U);
    msg.setDestinationEntity(219U);
    msg.op = 12U;
    msg.comm_interface = 139U;
    msg.period = 35896U;
    msg.sys_dst.assign("QGUHKSIBUEEUBVIOSMODPBYJLGQAUENGOXDXYWDKUCGHFVQPWEFUUBZEAOFEBXTVGSTNKBVLKBYWOZQRCDJCCPAHIYSYDPTATMMNYWFPVVNDRKROMIDSUINEYWQGCKVFGHKOIZFJAMLAHWCYJZJPCKBCAWRUSJZNSBPTNOOLCHKEMLWVJHXDTKWQJQZTWEFSQIIQGBRSHHTJHZZMLAXGNDGF");

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
    msg.setTimeStamp(0.354793699666);
    msg.setSource(57204U);
    msg.setSourceEntity(21U);
    msg.setDestination(50997U);
    msg.setDestinationEntity(90U);
    msg.op = 39U;
    msg.comm_interface = 165U;
    msg.period = 9325U;
    msg.sys_dst.assign("IRJHRUAOLZOXFDOTTKZPOIDQSWZXFQXTDURRCSFQLWSPNFESEAUMCZKMVYHEOIFYCUKQWKAGDVHSEXJAKHTXAYGRTNVPMEEVDNPUZZOBVIHNJUPDPSWYHYLXROPPWNDVWXOULHNNGSFWKVTKMVGPQZBSLHCNDCTVVBGOIXDWZJAMMCLBKFWCGHOJMLBACEMBKZYTENIASIBUQNQIQYZBF");

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
    msg.setTimeStamp(0.161250157717);
    msg.setSource(50991U);
    msg.setSourceEntity(54U);
    msg.setDestination(25732U);
    msg.setDestinationEntity(176U);
    msg.stime = 2611419691U;
    msg.latitude = 0.0764182293593;
    msg.longitude = 0.931311571583;
    msg.altitude = 31875U;
    msg.depth = 36109U;
    msg.heading = 52246U;
    msg.speed = 31250;
    msg.fuel = -7;
    msg.exec_state = 69;
    msg.plan_checksum = 33458U;

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
    msg.setTimeStamp(0.16578339579);
    msg.setSource(3494U);
    msg.setSourceEntity(87U);
    msg.setDestination(53838U);
    msg.setDestinationEntity(48U);
    msg.stime = 2593681325U;
    msg.latitude = 0.659197093387;
    msg.longitude = 0.222810231312;
    msg.altitude = 41158U;
    msg.depth = 16913U;
    msg.heading = 22168U;
    msg.speed = 3223;
    msg.fuel = -113;
    msg.exec_state = 39;
    msg.plan_checksum = 64225U;

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
    msg.setTimeStamp(0.157915760797);
    msg.setSource(48537U);
    msg.setSourceEntity(145U);
    msg.setDestination(17446U);
    msg.setDestinationEntity(107U);
    msg.stime = 1302873044U;
    msg.latitude = 0.480664104707;
    msg.longitude = 0.693067705304;
    msg.altitude = 17552U;
    msg.depth = 37984U;
    msg.heading = 22949U;
    msg.speed = -32241;
    msg.fuel = 106;
    msg.exec_state = 22;
    msg.plan_checksum = 9187U;

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
    msg.setTimeStamp(0.127018652313);
    msg.setSource(40571U);
    msg.setSourceEntity(152U);
    msg.setDestination(41158U);
    msg.setDestinationEntity(0U);
    msg.req_id = 43389U;
    msg.comm_mean = 59U;
    msg.destination.assign("LKOWLTCYUXWGKQLNAIJXIAZQOFXYSCNXUPEJUUSKAEYNQIIOLM");
    msg.deadline = 0.0515108254336;
    msg.range = 0.0744810162147;
    msg.data_mode = 162U;
    IMC::DevDataText tmp_msg_0;
    tmp_msg_0.value.assign("WBNCUCJEGZWEODTLYLDDXCLUBRZAVKOUCGHTIJVRMQHIEASWJTKRYUMDAVZZPIHDVEQPRJWLO");
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("DORQNRFYOWGAJKRSGFVYKZSTBIJEJBSIDNWXXFCMCNGVACUMKLUHOKNYWMFUIQKOXLLMJLEVXYBTIDSPWTJMVESPHSQ");
    const char tmp_msg_1[] = {11, 95, 7, 100, -64, 97, 11, -126, 23, -39, -82, -21, 23, 0, 99, -108, 24, -30, -26, 101, -8, -105, 68, 98, -110, 21, 24, -49, -22, 64, -125, 39, -83, 68, -58, 28, 126, -105, -56, -30, 0, -48, -72, -12, -5, -113, -100, -87, -99, 110, 114, -86, 61, 123, -119, -43, -36, 102, -10, -109, -103, 62, 113, 30, 87, 64, 94, 116, 109, -28, 28, 44, 103, 120, 33, -73, 108, 112, 4, -103, 34, -59, 112, 97, 118, -17, 31, 120, 41, 55, 63, 57, 44, 33, -29, 42, 25, -18, 6, 36, 48, -6, 4, 33, -109, -12, -2, 43, -69, 15, -48, -40, -94, 107, -13, -57, 68, 45, 56, 99, -22, 81, 53, 91, 5, -37, -49, 97, -30, -66, -82, 85, -81, 25, -106, -87, -83};
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
    msg.setTimeStamp(0.0544968638946);
    msg.setSource(41649U);
    msg.setSourceEntity(168U);
    msg.setDestination(11530U);
    msg.setDestinationEntity(242U);
    msg.req_id = 42593U;
    msg.comm_mean = 236U;
    msg.destination.assign("SMOTCYMAWZYFGHQIXMOQJIEEZQTQMLSEAUFRSHHOESKDFZRDFFKCZBKIHBZENAGNCYOARVDBELHUUT");
    msg.deadline = 0.807966003921;
    msg.range = 0.231781104439;
    msg.data_mode = 38U;
    IMC::IridiumMsgTx tmp_msg_0;
    tmp_msg_0.req_id = 2952U;
    tmp_msg_0.ttl = 45953U;
    tmp_msg_0.destination.assign("XPJVOQTCMBOBSRFNZCGILDHIETULFUPYEFSTJPGMGVWYNMPYDISQKKBFIWDOCRGOMNUOMJSHIIJUXFHYCWVNKTPWKEWVFTEDWJMKZOAGLFTMCLIQLJKHZEEFHXRZNZQQSQRAVYPIUNAXABBTDYALBOWPHKVSUDBWZCJKKMXEENQJPXRVESDVRGLADOZLSYJYMTYHWGGUHACBRRSVVE");
    const char tmp_tmp_msg_0_0[] = {93, 121, -12, -77, 23, 70, -41, -122, 72, -41, -124, 63, -82, -84, -109, 106, 75, 83, 15, -26, 21, -40, -96, 28, -95, -78, -107, 8, -119, 79, -49, -99, 31, 8, 104, 72, 123, -43, 43, 118, -77, -93, -115, 0, 81, 7, 56, 12, 44, 30, 92, -75, 59, -105, 20, 106, -89, 3, -35, 50, 104, 118, -73, 70, 9, -12, 97, -21, -111, 51, -16, 44, -13, -108, -93, 102, 55, 116, 48, 55, -118, -89, 54, 125, 5, 84, 90, 27, 7, -90, 30, 61, 111, -47, -72, -126, -59, -59, -91, 77, 80, 18, 71, -115, -56, 70, -81, 97, -96, 95, -61, -92, 1, -52, -70, 9, 84, 87, 102, -15, 15, -21, -31, -106, 19, -31, 25, -25, -102, -70, 19, -117, -92, 49, -65, 26, -55, -6, 101, -13, 115, 81, 73, 5, -104, 38, -21, 125, 83, -107, 0, -119, -120, -45, -124, 117, 126, -35, -22, 101, 59, -102, -106, 8, 11, 24, -115, -35, -45, 74, 119, 32, 87, 124, -22, -120, -60, 52, 3, -3, 122, -71, 10, -92, 90, -121, 122, -115, 58, 2, 25, -25, -115, -9, -88, -105};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("HRVFEODNGNHAXLMTPKWQYHFSIXNKTTBSMWZANMHVRWLVNVTYUDZGMBDYNSCCMFXCYYYBPGQPMVEODXDASFDCWIKFFLPISZFIJJHMUIAQZNXTDKWZTFSUVAOQLSHPBPVKLOUNZHFCEQXIFRPMTASHJLALGVDCVBE");
    const char tmp_msg_1[] = {64, -119, -22, -40, -4, -35, -83, 125, -57, 92, 69, -5, -121, 4, -96, -115, -108, 36, -43, 25, 50, -107, -3, 8, -26, 7, -70, 102, 6, 0, -18, 99, 124, 30, 12, 64, -104, 103, 98, 112, -16, 67, -57, 19, 53, -38, 52, -55, 26, -79, -69, 28, -114, 85, -8, -42, -119, 75, -48, -18, 68, -51, -113, -9, 41, 118, 92, 40, 4, -103, 108, -91, 95, -66, -26, -122, 16, 5, -21, 63, 12, -9, -1, 73, 6, 68, -84, 6, 23, -55, 115, 111, 18, 85, 107, -16, -3, 41, -20, -50, 32, 19, 82, 11, -40, 55, -126, -87, -115, -14, -101, -74, -115, -39, -70, -39, 39, 106, 57, -101, 74, 119, -73, -125, 119, 87, -74, -13, 42, 87, 35, -23, -80, -30, 44, -58, -9, -70, 30, -99, 89, 99, 114, 96, -45, 97, 66, 27, -105, 54, 67, 43, 39, -70, -105, -24, -114, 41, -127, -71, 96, -11, -30, 96, -83, 46, -128, -32, 33, 3, 8, -22, -37, -74, -105, -76, 92, 108, -119, 28, 110, -58, 99, -31, 43, -47, 96, -100, -72};
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
    msg.setTimeStamp(0.30623142639);
    msg.setSource(15839U);
    msg.setSourceEntity(68U);
    msg.setDestination(40368U);
    msg.setDestinationEntity(232U);
    msg.req_id = 31509U;
    msg.comm_mean = 85U;
    msg.destination.assign("ZJSKHUNESGLAOEXNYFTWYMFBQLZKBKAZCULSUGTWGOXBMINBIUGMGDNAMOMVSWJLRBLGOILRLIYWJOKFKZMPHCKXVPSCXRYYWHIFXIAWFVQUXGGYECRJAOZXEPEALIZUZHHFNUWZJPRWEGPTQINNPADJPETDODFIKBRQAJYHHBVBLTPDXXUEPTTDHGSNSDSWNBQQXMEECPVDVOHFLCFCCCQIQFMJTTR");
    msg.deadline = 0.363848396883;
    msg.range = 0.830483829573;
    msg.data_mode = 244U;
    IMC::ServoPosition tmp_msg_0;
    tmp_msg_0.id = 128U;
    tmp_msg_0.value = 0.362668915516;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("KZXVPLYCMYGTDBERQIWFEMGVMSWOHRJ");
    const char tmp_msg_1[] = {35, -28, -23, -86, -51, -26, 14, 74, -34, -106, 51, 85, 74, -79, -27, 83, 75};
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
    msg.setTimeStamp(0.239736032776);
    msg.setSource(11445U);
    msg.setSourceEntity(92U);
    msg.setDestination(23192U);
    msg.setDestinationEntity(151U);
    msg.req_id = 44324U;
    msg.status = 49U;
    msg.range = 0.513701935507;
    msg.info.assign("GHLFGIIHRTAJQMAHYKOTSDJHGWMIREMUGMUCSOQAYWCWJXHYKEDQKSNFEQKOLTRICXGTVRCMDCIUFDVDPRAG");

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
    msg.setTimeStamp(0.554041574261);
    msg.setSource(43784U);
    msg.setSourceEntity(220U);
    msg.setDestination(9017U);
    msg.setDestinationEntity(127U);
    msg.req_id = 48518U;
    msg.status = 102U;
    msg.range = 0.656486421905;
    msg.info.assign("NSIQCEHDCCARPBYTZUVRWAXBSNKTOCWXZRFQEBZYFJGTZMJTOIFADSLZMWKAGHTULIFVLWVQJKYDYLVDTSMFFXCKXVECIHZZWXRJHUPHHZXJDYCFOOFS");

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
    msg.setTimeStamp(0.774690463542);
    msg.setSource(51216U);
    msg.setSourceEntity(46U);
    msg.setDestination(64927U);
    msg.setDestinationEntity(167U);
    msg.req_id = 22146U;
    msg.status = 226U;
    msg.range = 0.361356513006;
    msg.info.assign("VETNIQZGDATBNYSPUCFVJAUKKS");

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
    msg.setTimeStamp(0.780846786665);
    msg.setSource(15324U);
    msg.setSourceEntity(30U);
    msg.setDestination(26179U);
    msg.setDestinationEntity(251U);
    msg.req_id = 55800U;
    msg.destination.assign("YDCPVHCBVVUJHKBSIMRNWEQXCIZGKLDRQRUJJQDCNQKJIXBKQWAERIFORPGAGPMHFOSVZJUDYNIYKUFFVLORUFZUICLMOJXPXXQLZSQFRGPWVWFJIGBLHRQYHKZJMCEOT");
    msg.timeout = 0.79468258335;
    msg.sms_text.assign("QQMWBLNBTDCZJECHLPLRNATXVNEMGWODALHCZSGHXBFYYPDKAUQCLFAJDOTPZPKWXVOYSSNSNFIPQJRKUBONWGCOJKLMRJWPEXDIIGYPZGHUYXHEFOTELIVDNMPOEOXTTXZJAPHMDUQWQEXHEBIBNGYBSQVSWCNOUUCGIATVRMSLFAWYHVFUCQMVRHDQYXIGZMRRASVQCEJZEZVCTBGFSKTLPKXMYOAAJDYKKBJUIWLMRZ");

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
    msg.setTimeStamp(0.49879185305);
    msg.setSource(46055U);
    msg.setSourceEntity(57U);
    msg.setDestination(59873U);
    msg.setDestinationEntity(20U);
    msg.req_id = 58384U;
    msg.destination.assign("HOMVLLEMLFKETUWRWYSFPNJDPWIONRIAMUMBEXAPZLCDAZMJXATKXMHXOOXNJBWVDUIOHGQEDEBABNWYSPHZXSGKQQGKYIVKVAPQLTGCJHZHYCCSRDFXJZUIAXMURZKNQZJDNNCNQTYELYCGTTFOK");
    msg.timeout = 0.181754787138;
    msg.sms_text.assign("TSDBLEYFLJYKOCKIAAMHPDBMEXJISZKFPPLAOQIJBVYIFFLIRMVUBHRCZSRGOYWNCFNYHMUNPNXIQOXDVQQEIU");

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
    msg.setTimeStamp(0.509613431067);
    msg.setSource(33485U);
    msg.setSourceEntity(21U);
    msg.setDestination(37547U);
    msg.setDestinationEntity(243U);
    msg.req_id = 30519U;
    msg.destination.assign("KYQRGHNADMIDJLBCCAFAKKLJCUDWGVWEJBHXUBFRIHBOTKRQSMFIRRPPFUTRZDIYDGNWGJCMSUVALDTEWRZKMZYAGYDPZAZQUUXVZERCGITJJQXABXHMTNFACJSYXDAMNPYGOOLIDOUFQTDTGVETLPJITYZKHTKCYWCQONHNLVKEMXOLYPKANWJLWVPGHPBSXOXQMEQFBWBCOUJNMV");
    msg.timeout = 0.917437983377;
    msg.sms_text.assign("GKXMWKFFEOCRWOYBACPUHFWKJFZFIOLHJDQMATIGMMHGBIQLWBUAYSZUAJSRZNTHIAOSMPXKQGTYPXVPCORDWHQSURXUFEHYEKMGKHSUIOEDIMHATPVUVNICLQZZKGZVEJYRZVZFHTOBEWQPIZEPDDSTUQEMULVIBSKDNWBCOTDMNDNLMSSRZVYGQRXYDFANJBTJSCJCAGLCHOEGRBPVNBAJLJRPVERPXKFWXBTLLXNWUWOAYIT");

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
    msg.setTimeStamp(0.893207480354);
    msg.setSource(30629U);
    msg.setSourceEntity(12U);
    msg.setDestination(27119U);
    msg.setDestinationEntity(82U);
    msg.req_id = 37027U;
    msg.status = 29U;
    msg.info.assign("QDPDTFORNWXRRGPVBVZQLUSNCGHRSXNHWILMCKTUAHLZGEWPFJVAFTOGDIXEYKBKYGDBTKGXESEAMNNKPREUHNULYDJVWPSZIKHASUMXUFQG");

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
    msg.setTimeStamp(0.237006569468);
    msg.setSource(62424U);
    msg.setSourceEntity(143U);
    msg.setDestination(46377U);
    msg.setDestinationEntity(156U);
    msg.req_id = 4565U;
    msg.status = 49U;
    msg.info.assign("PEJIXZUVGASWMISMFBDBVVLDZMDJUVTYZCIVIGNBCEOTKNKJSXODOIRZLQFUUEXFEHYBF");

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
    msg.setTimeStamp(0.240641411278);
    msg.setSource(44136U);
    msg.setSourceEntity(116U);
    msg.setDestination(36639U);
    msg.setDestinationEntity(245U);
    msg.req_id = 51680U;
    msg.status = 206U;
    msg.info.assign("XYRTBDNXZUMRQPRRSCHURZPQPQZWLWWGXQVXHETFEQVOAZHORXDEYLEIPNPAOAKAWJDSGJFUQTIMAFEZXJXUHOBLSITJGGZHNUDIQSKIKWMRSILEGBCTKCBCVOKEYGJVZFUDJASGYTYKNKZBYKBMVOFVRNYVWNJBDINRIICHJQGYDPJFZMUJAPODNXV");

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
    msg.setTimeStamp(0.287779710078);
    msg.setSource(38424U);
    msg.setSourceEntity(203U);
    msg.setDestination(35633U);
    msg.setDestinationEntity(149U);
    msg.state = 241U;

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
    msg.setTimeStamp(0.755503915078);
    msg.setSource(48796U);
    msg.setSourceEntity(231U);
    msg.setDestination(14656U);
    msg.setDestinationEntity(123U);
    msg.state = 25U;

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
    msg.setTimeStamp(0.459325720178);
    msg.setSource(4636U);
    msg.setSourceEntity(203U);
    msg.setDestination(1401U);
    msg.setDestinationEntity(7U);
    msg.state = 26U;

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
    msg.setTimeStamp(0.711267387613);
    msg.setSource(31474U);
    msg.setSourceEntity(49U);
    msg.setDestination(21801U);
    msg.setDestinationEntity(214U);
    msg.state = 169U;

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
    msg.setTimeStamp(0.554851158604);
    msg.setSource(54678U);
    msg.setSourceEntity(84U);
    msg.setDestination(3344U);
    msg.setDestinationEntity(50U);
    msg.state = 15U;

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
    msg.setTimeStamp(0.990713211428);
    msg.setSource(23424U);
    msg.setSourceEntity(123U);
    msg.setDestination(3412U);
    msg.setDestinationEntity(245U);
    msg.state = 11U;

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
    msg.setTimeStamp(0.597728100046);
    msg.setSource(37949U);
    msg.setSourceEntity(114U);
    msg.setDestination(16072U);
    msg.setDestinationEntity(176U);
    msg.req_id = 45219U;
    msg.destination.assign("SMKQZPFWITVPXJFDHMGMAWEAQCFEVPLCQOCAYISEUOKQTABIZJAST");
    msg.timeout = 0.752179764313;
    IMC::FormationMonitor tmp_msg_0;
    tmp_msg_0.ax_cmd = 0.369424805172;
    tmp_msg_0.ay_cmd = 0.455986105789;
    tmp_msg_0.az_cmd = 0.275228870071;
    tmp_msg_0.ax_des = 0.198628023523;
    tmp_msg_0.ay_des = 0.029596000997;
    tmp_msg_0.az_des = 0.213540370401;
    tmp_msg_0.virt_err_x = 0.813238854012;
    tmp_msg_0.virt_err_y = 0.286723055044;
    tmp_msg_0.virt_err_z = 0.241183950309;
    tmp_msg_0.surf_fdbk_x = 0.608051858548;
    tmp_msg_0.surf_fdbk_y = 0.14033417157;
    tmp_msg_0.surf_fdbk_z = 0.716074463676;
    tmp_msg_0.surf_unkn_x = 0.895625297702;
    tmp_msg_0.surf_unkn_y = 0.376016380241;
    tmp_msg_0.surf_unkn_z = 0.0753884031538;
    tmp_msg_0.ss_x = 0.481152574654;
    tmp_msg_0.ss_y = 0.805666484283;
    tmp_msg_0.ss_z = 0.30738573232;
    IMC::RelativeState tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.s_id.assign("YSOTISHOSNRVMANRFDNFFGXDUZEZ");
    tmp_tmp_msg_0_0.dist = 0.570964092937;
    tmp_tmp_msg_0_0.err = 0.949023328002;
    tmp_tmp_msg_0_0.ctrl_imp = 0.531637702253;
    tmp_tmp_msg_0_0.rel_dir_x = 0.817802069926;
    tmp_tmp_msg_0_0.rel_dir_y = 0.175289454611;
    tmp_tmp_msg_0_0.rel_dir_z = 0.928709882083;
    tmp_tmp_msg_0_0.err_x = 0.85265326134;
    tmp_tmp_msg_0_0.err_y = 0.795217414982;
    tmp_tmp_msg_0_0.err_z = 0.236453097023;
    tmp_tmp_msg_0_0.rf_err_x = 0.548173359535;
    tmp_tmp_msg_0_0.rf_err_y = 0.281307736098;
    tmp_tmp_msg_0_0.rf_err_z = 0.597085364051;
    tmp_tmp_msg_0_0.rf_err_vx = 0.192267406854;
    tmp_tmp_msg_0_0.rf_err_vy = 0.858350984185;
    tmp_tmp_msg_0_0.rf_err_vz = 0.21103408263;
    tmp_tmp_msg_0_0.ss_x = 0.501739036795;
    tmp_tmp_msg_0_0.ss_y = 0.00963395080445;
    tmp_tmp_msg_0_0.ss_z = 0.712300611659;
    tmp_tmp_msg_0_0.virt_err_x = 0.401162739165;
    tmp_tmp_msg_0_0.virt_err_y = 0.240632378595;
    tmp_tmp_msg_0_0.virt_err_z = 0.34710837423;
    tmp_msg_0.rel_state.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.454234531914);
    msg.setSource(39310U);
    msg.setSourceEntity(139U);
    msg.setDestination(18830U);
    msg.setDestinationEntity(137U);
    msg.req_id = 60975U;
    msg.destination.assign("LBYGRMTLRVYFCGJCDNATPUIKTPRSGCFDEZDBDIXPWKGQKDFZTHUVMLBPMEJARKZYAQYXXSMVLIOQUCBHIBLFXCWAEHPAJFXLWDWQVJHQIRQVOUXBHTMUKFAWMONLAJIOZMBXZVNUUQFSHZXYZTNSSV");
    msg.timeout = 0.204978408092;
    IMC::SetEntityParameters tmp_msg_0;
    tmp_msg_0.name.assign("TTTQMPGQNHRDQNWFJIHNFDABCEUOZHVKDAMIXBFIXRBUHLMXLOMWBDCPJMVNSGPZTMLGRXWXORSIQDCFGBVHKZEQZACTYLZPLAAEFMXKJGS");
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
    msg.setTimeStamp(0.914932942558);
    msg.setSource(45263U);
    msg.setSourceEntity(104U);
    msg.setDestination(61042U);
    msg.setDestinationEntity(248U);
    msg.req_id = 49443U;
    msg.destination.assign("NWZTBVLBCOOMKKYDCNAOBXTQIQRHOVKYFYAPUHOAYEWEPJVDRBKCABVISYGAVNHYCOZHJFRMULPELUFZFTQJDJFLCN");
    msg.timeout = 0.250937586567;
    IMC::SessionKeepAlive tmp_msg_0;
    tmp_msg_0.sessid = 4091929927U;
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
    msg.setTimeStamp(0.0699540745661);
    msg.setSource(23996U);
    msg.setSourceEntity(180U);
    msg.setDestination(18435U);
    msg.setDestinationEntity(224U);
    msg.req_id = 4673U;
    msg.status = 221U;
    msg.info.assign("TDVQCYWRBVWUPBNQXHPDNDEGUTCGYWOVPGISOEOCVUQVCPEFGKOCHMVAREXJTICKZKTONWIYRWXFEWPHLRAVQJGDCKFFUXLNYDKMOJIJPXTXZXQAGTHJMLRNGCMDFJW");

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
    msg.setTimeStamp(0.221924669382);
    msg.setSource(10234U);
    msg.setSourceEntity(164U);
    msg.setDestination(53997U);
    msg.setDestinationEntity(136U);
    msg.req_id = 6981U;
    msg.status = 244U;
    msg.info.assign("ZRYFEGWYPGUKHPWWZJTSIFOALOGBBXWMZTEMFVIXTCZFYHBHMSHKSFEHNBDQSTVAAWRWDNVRCZNQSMQDAVIRKHNNFNHHOKAMIAZVJOGPQVYXLCOIOYXYWJAJSTLIVHSFUZOLKUQOWVIPEPTKDQEGIDUUCYXNJATLZQLQVXMNPRAUNRCRYFECGQFLUWWECFGXRMDMVCDGIDJNEBZJXMBGDKUBJRBQJLOGUOBIPKHKXSYSLTP");

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
    msg.setTimeStamp(0.512035962376);
    msg.setSource(14103U);
    msg.setSourceEntity(151U);
    msg.setDestination(4978U);
    msg.setDestinationEntity(124U);
    msg.req_id = 22334U;
    msg.status = 107U;
    msg.info.assign("RSLJRHCHCPUOKOBGKUELEEXZHISZBGNNQNRJOPEYXSRYDSEVYLLSKYFMIUPVSTMKZXPXXJWYSJKOCGHLMEVXGLQTMAPDVYJ");

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
    msg.setTimeStamp(0.791294052359);
    msg.setSource(49921U);
    msg.setSourceEntity(129U);
    msg.setDestination(29698U);
    msg.setDestinationEntity(81U);

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
    msg.setTimeStamp(0.617195919369);
    msg.setSource(33202U);
    msg.setSourceEntity(119U);
    msg.setDestination(8743U);
    msg.setDestinationEntity(41U);

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
    msg.setTimeStamp(0.694030978616);
    msg.setSource(5503U);
    msg.setSourceEntity(118U);
    msg.setDestination(17694U);
    msg.setDestinationEntity(31U);

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
    msg.setTimeStamp(0.209012257898);
    msg.setSource(8206U);
    msg.setSourceEntity(115U);
    msg.setDestination(39746U);
    msg.setDestinationEntity(254U);
    msg.plan_id.assign("PLJYOKLEBXASBOVUMFYXUUORXRGUTWTGNGTKZABHMHJYEYKUSTRFDNDTOBWKZUIOIONLWMOGCDMIIGTICVJYRYLHHXLFQLWSITVHZJPVEEIYTOFRAICAOBCQXPRJDADZVDESCYUMKVRBWCKPZUSNUFGCQKHVMBWHRAXKDWVYXNXQLQPSAHNEHFLCPAJQHGCAWXBMPNQGLYMFMSVARTGPCZIDFFRTNKP");
    msg.description.assign("WQWJNJRQFAMSSJVNKOBTGXPFSDCOOTENMSPDIDQBFJLJRTYGFYIZBETXQMQMGQCDJSNITYROASDHZCLJKPKEDMWFZHTDOMITBXAYXLCVIALGUFVUUWYEEQISYUNCAYVLJJZXWQOKXUCNBGHXPRGVMXHRHNOZVURRVAHUFZWBLBITGIRUPNPPYHQSJOLKXCAWACNZKSEAISGV");
    msg.vnamespace.assign("HDXRIJROSDNWLVIBGMGPENZLFVWHJDVVDGGGMMYZLZWYRCQWOKUQLWHKFJLPSPPZAJQMRXHVBTRCAKSXSLBYNKBPUZJIHZGNQFKHOTZPEMUSNRDWXSYFVSKAMEYEKIERQCKTUIZQUDLBTECIGIWXOPGIV");
    msg.start_man_id.assign("LFEBVYQATTUMQLUDMEKZYOSNZEIADIOMUHHEFIIGKFKHBYGMFBUKNSPOMCEEUPBPVFZGRJTQCSFXYFGWOBUJZXQITYXCROCBNSPMLXVIRRGDXWJGQAENZEJWMCAKSVLHMUOAQQNPZTPQNHOPVCGMRKTZKYLHDOWXDVOJAVIQFTXBTZRWPVBEWSJCEHWDGTXPLBGLYRLJNJJBHWJQFHKUIOMSZSNZUCRNXDGDWSLDPTUYW");
    IMC::PlanTransition tmp_msg_0;
    tmp_msg_0.source_man.assign("FBANXOIOLYHSQSCUDQGBRZJFALETPNBJMVMZIUTKRMDXRDKVMPLGFBJNKYOQMUIGCTEBAZJHBSFKWOZQZOVUVYNWUFMVYMHFSPWFTLWBHRQVAGOLYSDRPZGHUZHVERQIVGZAJNMTNFKAPBXQTKCXTGUWKWTCUITPGPHSLANEAEQJNJWRDCDBUXSCZKCQIPAFYYJQIYVOMAESIXKLPN");
    tmp_msg_0.dest_man.assign("TKLVBBFZWBVNZHQSQLRAVKYCUIAFKQLJTKCRNKDUKKZIXWXEGGKMXIWNHOBFVCHPDASLFRXZBSFJNGWYYXFUORVDGQSPYSEKZCIHXLXGVOHAHXKQMTZFLHGVJWNGIJQOWEUEEZVEOJEUAPRSYQHSNIPDJYOBUOENCOPQLVWLJQPMCANIWYFRDMTNMAGXDQSMSDILJITGMTWZFIYHPOTYZVJEPTRENCX");
    tmp_msg_0.conditions.assign("PEYRYSHREMQRNEIPJFZAFOLHFYQAXOLYPWXYKDIBOXOPAOYMMZVBNCJLSNLSTOYVNNCMSDPNQVGCDYJIIKXVDGFLUNOMARWOWAOJDWKVLBMCJUGUEWDIJCQPRBXMTPZTZZEYDACWEZUNRKGYOAQQMSUWCTJIJIQHGHLSGNGSBRHEFUTBUHWUQPVVLTRHKDRKBBFFVAIFFWXSNKVCLVZSEBDMU");
    IMC::FollowPath tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeout = 13922U;
    tmp_tmp_msg_0_0.lat = 0.128240358546;
    tmp_tmp_msg_0_0.lon = 0.74074185772;
    tmp_tmp_msg_0_0.z = 0.486528248995;
    tmp_tmp_msg_0_0.z_units = 70U;
    tmp_tmp_msg_0_0.speed = 0.987159757577;
    tmp_tmp_msg_0_0.speed_units = 134U;
    IMC::PathPoint tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.x = 0.421375171567;
    tmp_tmp_tmp_msg_0_0_0.y = 0.142063957396;
    tmp_tmp_tmp_msg_0_0_0.z = 0.551278425324;
    tmp_tmp_msg_0_0.points.push_back(tmp_tmp_tmp_msg_0_0_0);
    tmp_tmp_msg_0_0.custom.assign("PSULAFRJWLIKNFHQTZBXTRZQNRGKIOUZAPVMKSHTSORHBRWSJJTJAGINIZQNMCPJHVPJUYAXCYPZKLFDDYFZGBLOKFTCIXGVSYRAXSGMQQULEWTZWHDOCCDCJILWVBFEEWMRMSCLJBD");
    tmp_msg_0.actions.push_back(tmp_tmp_msg_0_0);
    msg.transitions.push_back(tmp_msg_0);
    IMC::CacheControl tmp_msg_1;
    tmp_msg_1.op = 172U;
    tmp_msg_1.snapshot.assign("XUNQYQSPGGIMSVBJZSNBFXRURLMAGIMTEKTXEEYMXGIFTJUEXCCMDEAQHKTFZFTKJOQTPDCOLVWNBOKXGKOMVBSABTTMWEXMLKUUGYKPNSSBYECMZWJQUNVBKFOYVBEDDLINSCIAAVHPVFWNYUQAZKJRWJBMQASDHROZAEDT");
    IMC::Rows tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.timeout = 16732U;
    tmp_tmp_msg_1_0.lat = 0.306144415548;
    tmp_tmp_msg_1_0.lon = 0.318621824243;
    tmp_tmp_msg_1_0.z = 0.213005683836;
    tmp_tmp_msg_1_0.z_units = 151U;
    tmp_tmp_msg_1_0.speed = 0.309321788647;
    tmp_tmp_msg_1_0.speed_units = 57U;
    tmp_tmp_msg_1_0.bearing = 0.353955123726;
    tmp_tmp_msg_1_0.cross_angle = 0.000342019706919;
    tmp_tmp_msg_1_0.width = 0.0225153606739;
    tmp_tmp_msg_1_0.length = 0.760251027073;
    tmp_tmp_msg_1_0.hstep = 0.624155493294;
    tmp_tmp_msg_1_0.coff = 221U;
    tmp_tmp_msg_1_0.alternation = 6U;
    tmp_tmp_msg_1_0.flags = 38U;
    tmp_tmp_msg_1_0.custom.assign("IUEYYKYRXLKNRRAPXUXAWQAFPLBOVZERYHTHXDIJPYHLXSNBIHCNQBJUGJWZFTVAMGOZMDJSWIVPLVSWSOFYMLAJNXVQWUVZPLRBJSXTIQVGBVLXTXGGZGUHPSIHFGJJLBGJQWOBIKCMJCVUEAZIQUTFMSHDFFMNHOWNVMPNEIWAPEFYKARUKMSKOTQZZWLRCDYQSDAUPHENQBURNDKKGCDECODFDLTAHS");
    tmp_msg_1.message.set(tmp_tmp_msg_1_0);
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
    msg.setTimeStamp(0.0907167689905);
    msg.setSource(2518U);
    msg.setSourceEntity(149U);
    msg.setDestination(11189U);
    msg.setDestinationEntity(239U);
    msg.plan_id.assign("LKMLWBSFNPXIHBZDRJSACCILQRTBKMKURXJYADGKYVJZKHWYNAFGCEURYYUWWXMPQSVERVQIOXNZARANSXTBHJSBLRSEHMTGLHJBLILEEFBOUFFUZTDZAPSEZYXTVCQFJVGDDWCZEOOUEGORVNEPIQVWJTMSPUMIOBDCFIHNGUOCXRDXNADIMBGRKONDFYKYPWF");
    msg.description.assign("LXARWITPVETGGSXUWUHNCSQZYODSYTQHMYCULSWGYCCITFIZKMTLGBXOPMRDXRQSMDJXQPRBPFXKVZWLJDCHAFVUBIGARLCFQVHJIVUZOKJNZNFXHTPHGDUHOYHPLWMWSDGQEBFMAFIODPZLYBAXBEWSRKNQSHCYKIGIIBYRZGC");
    msg.vnamespace.assign("KZOERCLDMBLWKXOHNABLPHSRCHFVLSJHAJRRYVFOXUBXKTFBASJNQJEAIKPPGCXGXCCOIMVRPFKCKYXVSPFYVQCQWAJTFFMIGURTBWZQADUIDTISONZKWWZSMNUQZHNZATQIBWEJVETNJYNXDMFEAJHRZPRCRLTCBIDUUDDLNBGHGGSGPVOOMCMZGOZSFWMGYUSBNWPEWUYGJTPRYLAOQLYDHOIMYDLKEVQHBTTFAYKVKIWXMNQQEEEZIUXL");
    msg.start_man_id.assign("SJPZEUSLIMWNHJFIIMDFVVZZCKVJRYDRKJIVVUUZCHCZQKSBJDIFXHTLTBWRSALWNFGYAYCVAYEQHORQPKGZPTQUTTTOJGPHCOOMRALTOIQWBFDPXVSYLPFDEXWXDHIARDQOXCBBHXLNPQMAJGGZSBDVMNTCALNRFKIWGOFMLPRYKQGXJEFSVUPDXPRUQKSEOWBNOHHNLEKYNYMYGEMGMCALKOSWEHEUFZQSYCIIWVRJNBEXAB");
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("OUOIZUFHMXHPGELHUWYVUSQGHELSNCDTOZHZNFSPKLFMTPJPYBPBXZCVPCZGSVGQXJNBAQAFAJBVCZIJQFZWLATYFCJMAWR");
    IMC::YoYo tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeout = 26557U;
    tmp_tmp_msg_0_0.lat = 0.748782158272;
    tmp_tmp_msg_0_0.lon = 0.869398227982;
    tmp_tmp_msg_0_0.z = 0.339753308867;
    tmp_tmp_msg_0_0.z_units = 149U;
    tmp_tmp_msg_0_0.amplitude = 0.897514024393;
    tmp_tmp_msg_0_0.pitch = 0.779774507367;
    tmp_tmp_msg_0_0.speed = 0.489053953839;
    tmp_tmp_msg_0_0.speed_units = 150U;
    tmp_tmp_msg_0_0.custom.assign("FYNFNFJMSWUEZSQMYIZWODLCDGRULQSOQLFSHYFUAHCVHGYLQPPFMIOXCTCUWDLWZYKJNOEDVPVKWNBSJPVQXSWDJCRUHTOKALIIDWYOTTCITPXGMRSQWSYHMDVMDINXBKCGWUSNURRHEABXOFFEKGPZBOVAGOTHUSQYZOPRTNZIIWGUCAHBEJARMTBILAPYVHZELPXGFDMVXRFILJBRXPNEJKTETXJKQHAEUKJAJZ");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::Acceleration tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.time = 0.518753298481;
    tmp_tmp_msg_0_1.x = 0.105473395648;
    tmp_tmp_msg_0_1.y = 0.300235089241;
    tmp_tmp_msg_0_1.z = 0.745122019468;
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_1);
    msg.maneuvers.push_back(tmp_msg_0);
    IMC::PlanDBState tmp_msg_1;
    tmp_msg_1.plan_count = 56824U;
    tmp_msg_1.plan_size = 2243087032U;
    tmp_msg_1.change_time = 0.772878429996;
    tmp_msg_1.change_sid = 1380U;
    tmp_msg_1.change_sname.assign("BFIPVMYXBFUEVUEBBRGYABEWTOKPIDNXSERXJNVYDHWDBYUGVNUWYAJHRUSMTJTBLTVPCCCFIGIQVDONIHEXHIL");
    const char tmp_tmp_msg_1_0[] = {122, -40, -94, 63, 88, -111, 86, 121, 17, 71, 28, -15, -45, -23, -112, -17, 118, -16, -98, 32, -126, -52, 102, 5, 20, 47, -55, -104, 91, 84, -120, 113, -92, 2, 77, 126, 50, 95, 122, -105, 102, -108, 13, 24, 79, -111, 117, 96, -64, 65, 20, -81, 32, -125, 119, -31, -45, 65, 117, 24, 49, -13, -63, -11, -112, 111, -62, -93, 28, -119, 80, -85, -121, -89, -123, -8, 94, -70};
    tmp_msg_1.md5.assign(tmp_tmp_msg_1_0, tmp_tmp_msg_1_0 + sizeof(tmp_tmp_msg_1_0));
    IMC::PlanDBInformation tmp_tmp_msg_1_1;
    tmp_tmp_msg_1_1.plan_id.assign("MWNAWQNKMKKZWBVLSXPVRGPVEJMYNFCCDLOKQAJADFUULWOJLQHZXTMNOUVDFFNNIQJBICTIU");
    tmp_tmp_msg_1_1.plan_size = 36824U;
    tmp_tmp_msg_1_1.change_time = 0.290561884301;
    tmp_tmp_msg_1_1.change_sid = 53127U;
    tmp_tmp_msg_1_1.change_sname.assign("UKZQIFAVMMKWFVJBDGUIYOIMRGYXFCPQMHBGJKIQORZMZDAYS");
    const char tmp_tmp_tmp_msg_1_1_0[] = {60, -87, -123, -60, -94, -122, -38, -125, -90, -100, -69, 0, -27, 104, 42, 123, -88, -13, 73, -68, 84, -70, -70};
    tmp_tmp_msg_1_1.md5.assign(tmp_tmp_tmp_msg_1_1_0, tmp_tmp_tmp_msg_1_1_0 + sizeof(tmp_tmp_tmp_msg_1_1_0));
    tmp_msg_1.plans_info.push_back(tmp_tmp_msg_1_1);
    msg.start_actions.push_back(tmp_msg_1);

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
    msg.setTimeStamp(0.176650275002);
    msg.setSource(1649U);
    msg.setSourceEntity(59U);
    msg.setDestination(3689U);
    msg.setDestinationEntity(111U);
    msg.plan_id.assign("NBBQGFKRGPQKPXTBIBTJAZUJUTEUUDFWNYGPUBCSEBEWMIRTJSCHVAUDFXMIDYRJLIVWIWAO");
    msg.description.assign("MXUPPRRWIVKRHETDKNCCPYNEUQKGWUNECGOAFWOKUCHPTAMCKNGFQGJNNQRZLGXNRBYY");
    msg.vnamespace.assign("OKQWFDWYGVYVIGAPFBRELMQPAILDHMRHJPCRDJBFIUSHWVGUNHSRSDECFYHBSZTMUBFCGEUCFLQZOAPTCWVTKUKCZHJRSRIPGLGGTKIMPVYJMEGVCUMTBXYQKDKTFLIERXOABEOOWVNZFARIQWZBWQCSOMUPKYQHOIPXWZYCBALXDKVNK");
    msg.start_man_id.assign("HFHWUMTRPYGDCAWSMREWBDHOMXYFOQYTXWIIPWULUMLXHBZFOIPMQDDTPMQUNEMASIGRETNBTZUVOGZGGIMCOVKEKPDNFYFAUTULDKXBCIJAHXNESVJKJAPQMCSCLILYJSVZNJOMOLRZAKXBGTPUGWOTZAGWWKISRFVCXKQERZQEDEJAYPUJLLWQGVJHNSBODEBBUSSLANCJTTBAHNLCYHIXPBOZSYDXFGQCZXIRVDVKRZFPNJRYW");

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
    msg.setTimeStamp(0.57858450702);
    msg.setSource(61719U);
    msg.setSourceEntity(229U);
    msg.setDestination(11378U);
    msg.setDestinationEntity(129U);
    msg.maneuver_id.assign("ZHEQJRLXPLHUMHJOYHQZRNMQQUTDNUANGPVCPQXJQZECZLJFVDYGFPVJUXBXQLWSDZQPYSKBYTYRENWRIAYDBMGQDYITSKMOMBMSMHCSOEAEJVPCAYDFXMDIHWFOTFWGCVDOEGQFVUCMEGZGVBTKALTBHZONRUXCUINZLACDHWLJHRGSNSPJIJERXKFKPWARBRKKOELBKTZAERKVFLVXYUICMNPYISUHWFO");
    IMC::IdleManeuver tmp_msg_0;
    tmp_msg_0.duration = 53121U;
    tmp_msg_0.custom.assign("BSAOGTAMWERLWNHYVXTORGVYSBBRJFRPQYQEXLVVBAXVMMEIYZSPVRPYAUXHKZQLKQXRURTDVWNSHUELYADRHKFNUCQTPGXDOBIRRTTNSOIODXCDCZAAUFHINQKBXSVUCIWOFQMMZNWNOVMOCZHU");
    msg.data.set(tmp_msg_0);
    IMC::CameraZoom tmp_msg_1;
    tmp_msg_1.id = 237U;
    tmp_msg_1.zoom = 6U;
    tmp_msg_1.action = 247U;
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
    msg.setTimeStamp(0.383231973569);
    msg.setSource(12158U);
    msg.setSourceEntity(100U);
    msg.setDestination(53975U);
    msg.setDestinationEntity(149U);
    msg.maneuver_id.assign("FDJUCFBPHAUJRDXBQONHZLDJFPTJJUFNHFBOWSBJYVTWDMAEUTWERCXPYZNMNBGGOOMSCTWHPEYXCTZQIZIBAKLPNNSDMOKTQGUNEAQRUYCWOZWDGJCTVGLNLXPSYSITCUDYPMXOVVMZSNEQAVQXIULRRFIJXYZWKGTRXSAODKQZMBOVBEWFPKXYBGXYBEKSWHENPDFCIVRIUJEDKHRI");
    IMC::ImageTracking tmp_msg_0;
    msg.data.set(tmp_msg_0);
    IMC::PlanStatistics tmp_msg_1;
    tmp_msg_1.plan_id.assign("JIGCPGKIYXQANIARLRVXAPRIITFFDDUZRZQLXKQZENOXKUBXDCOFBJEFBRYHEGYLMUCMCOAJSTHPHYHKBRNEIWUXUMRYPYJVONGDHJGXLMDRHHZFMWHLSMIBVZYZNPWTTVKEMALIOQUWCOLQCBKHGA");
    tmp_msg_1.type = 168U;
    tmp_msg_1.properties = 35U;
    tmp_msg_1.durations.assign("SRAXCPGPPLISLHPGEOAFRVIZSGHMLUHKGVQQKBUTTYTFHMWTHYAFAXQRMYBNEWHKVWPCMUEUQQGQLSSVVWBTNDJBTXDJJAUOTOLSRZGLQYYSAZCDNUWFEZFIDTHEMNCWGCSHVAWMEENXRAZYVKYEGC");
    tmp_msg_1.distances.assign("CKVNEDBAAPXLLBFRJSRXDPFHKFIQOQLSGLEAWUVZTEOKDIALEJKUYTOOVNYTQQOVUFCHICIHXMELVACQGWKETDWCWGZZRJFOFP");
    tmp_msg_1.actions.assign("OIXWGSDJVVFWZOREBODEBZXNWNETSPVZPPPKRBITCAOORPFWVGFLFQJLUYQIPBPFSGIENVHCJMIEWDUHKLHQBWHKQGJXOD");
    tmp_msg_1.fuel.assign("LFITLVEQFXFPJXIZHXFBJFDMILIACTKWNMIUSYQISYKSVMDLKOZSWPXOPBGSXMUFHUZPLEKTJQDOFKSZJWLWQMCANCPOIOVMQLEPNGYVFNXYKWBUDXZGGUWHOCLZRSBSATJEGNDEYARXNQEQBMAP");
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
    msg.setTimeStamp(0.735573014588);
    msg.setSource(45471U);
    msg.setSourceEntity(196U);
    msg.setDestination(42916U);
    msg.setDestinationEntity(101U);
    msg.maneuver_id.assign("RXQQXWUGHSEEXSMLJVRCEBRJZLKDBCNNGMCZVSIBPNNHLWJLRSTAAMJUHCKBKYBGEFFBPRGOUHLFSWFPIHGLGVIFQGXJXUDJIHIVWCYIAJSTKKASYUYXGYNQQXDRTPZOGOOLNRMQRQSDJAZFNVEMFYMECWAGOZMXAQKDFMICNWKEBOITWUUCHDVUIBKQUDWJZWKULPHFKWOMNHTVTNDARYDMEOPPHPAJXZOYT");
    IMC::AutonomousSection tmp_msg_0;
    tmp_msg_0.lat = 0.422317971729;
    tmp_msg_0.lon = 0.350256051174;
    tmp_msg_0.speed = 0.718059420632;
    tmp_msg_0.speed_units = 142U;
    tmp_msg_0.limits = 250U;
    tmp_msg_0.max_depth = 0.526410067622;
    tmp_msg_0.min_alt = 0.00554767619736;
    tmp_msg_0.time_limit = 0.348977766663;
    tmp_msg_0.controller.assign("ZMNOWLVOIBFJGCCHBUXJDGPATETJSKYKRRDCHUMIOTYCWBRSHRHQFCCEZIUQRDSGTFKHFZTWOLKQVESWXWBAFQVDVQZMNTNNJIEYLVHJMVZUGOYMWWPDCOFCBNJACMLOPXRTSQBQFTGQPJBDWILNFIAEWYFGKPIYAGKBZSXLUNOJZVXMVIDMOD");
    tmp_msg_0.custom.assign("EPIGJIBLCNRIWIAIZFQBNBXHRIFWAMUDRYSMYKXLZUISASOCLGQDYRVFPNWMPXCWIQOUZVUKKYTRZNLJNPQKJTOTEAFFPEBRBDKRYOQHTBOTLBJTMMGGABYASVZJQKENQMMCFXMHJELFGZTTHZHUDLWCGGPVVNVEWRAWUPWVXYHLMEOXCVLFOIPKYYHZCLQSUQHBSVCAGSIJQODDEDXFX");
    msg.data.set(tmp_msg_0);
    IMC::IridiumReport tmp_msg_1;
    tmp_msg_1.frequency = 3990009709U;
    tmp_msg_1.info.assign("AKOTCMJSMZEYIQDCGCYWMUWASQKPQPOUHLQSBKAQNHUAVPWHYJB");
    msg.start_actions.push_back(tmp_msg_1);
    IMC::Voltage tmp_msg_2;
    tmp_msg_2.value = 0.885167792275;
    msg.end_actions.push_back(tmp_msg_2);

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
    msg.setTimeStamp(0.464506312791);
    msg.setSource(16139U);
    msg.setSourceEntity(190U);
    msg.setDestination(44584U);
    msg.setDestinationEntity(140U);
    msg.source_man.assign("NDAPOGOREFENHUYVDZEAYQ");
    msg.dest_man.assign("OEZGUMSYQDCOIEAXFTQXRFSNUARVSPWQKYKGWGRISHFIJUTTGVHSPUTDXJPVATVITSJBNZCOXXKIWKRQISXBMKXSVYEPAWJYXVLLNEOVIYQZPDHJKMRQODDWDHRQNXGCWHPL");
    msg.conditions.assign("BYJYQDASZDTIJOMKLWHDPCGVRMDGTTLCWPVDHU");
    IMC::ServoPosition tmp_msg_0;
    tmp_msg_0.id = 60U;
    tmp_msg_0.value = 0.159459264179;
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
    msg.setTimeStamp(0.57855522287);
    msg.setSource(44633U);
    msg.setSourceEntity(250U);
    msg.setDestination(44673U);
    msg.setDestinationEntity(43U);
    msg.source_man.assign("AWKFKZJEQDEMQBXIPCPTNMQBJKWSUTNXTODRWNMNIQIZOVIXEORLVG");
    msg.dest_man.assign("FRCNKASYILRBZCIEIPJWSOFNIDQUTCWQKNRTREFQLVPLLMYFGHQOXVGRUZZNQZWXWKUCZVXNFMWHYKTOGVFSXPPVWGETTVPWKSJKBWBHUSKLZBCMQCZXDUDBDSFUONRTEMBOMOGSAOZIHMTADSXIJPYJPYTDYZBNDVLEZRGNLHIUPRCTAJAUQIPJPBLFTNBOMXMCWFSHDYGEKDYNABJYHMASGQGOVREAHCJMEDEI");
    msg.conditions.assign("PIXWLWZCSJUQIGOFDKOKERWEDOOLONFFVNVPATUATACESHBMYALKPYHYSJIQXJXHTISIQGFSNZHXJAJJTMONLLKZLWDNFOBBZBJYNICIZCUIBOWRQAPGBKCBXJBSVFWVSUPXQEISZVEEYDMDQDTZMNRRBPTLNLTQYRYUAACMIVLRGCMPVT");

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
    msg.setTimeStamp(0.26432953193);
    msg.setSource(18100U);
    msg.setSourceEntity(208U);
    msg.setDestination(44042U);
    msg.setDestinationEntity(149U);
    msg.source_man.assign("ITGSPTOUAZMEDLGXBUNEXUQOBPZSCBWDJEXPNFJOPYLRNQOCVQKSWBSKLFAIQRSJLSMERVFRFWGCMHACEGKHIQVEJJGAOZDOUURGAG");
    msg.dest_man.assign("NFIFVOWGLJIQUQYWRCXFQDYHKDJWWUJ");
    msg.conditions.assign("FTNNCAHAECMXWSGLYYFVSIEJGXSVLDMXLCOKCTFHIECRWQYVYFLFEWOVARGAWHPOREGQXGPBBWKZDLFTWKOPPRYJSWMEXYXNWDOQKRGEPCBLOTIZIJHGPDMUSYDOLRHBFRBZGSZQMZVMYUKUISCUAJDBVEKQMFIZDYUDPWDTCIUT");

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
    msg.setTimeStamp(0.669883135514);
    msg.setSource(48737U);
    msg.setSourceEntity(145U);
    msg.setDestination(3790U);
    msg.setDestinationEntity(242U);
    msg.command = 21U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("HJRRKIQNCKSPKODNJTBLYGTVOEBAHQOONTIQCSBZRWXWCNDVRLMZIVKYJDYMGFGPLIJFVAVSWOUCGXEKHDEEAMLGJUEZMCWNPBXDNPJCGB");
    tmp_msg_0.description.assign("GZKJFYDJKLOWHTNSXDVHETSZTUEESGUGOVAGMNYVYXFIQBGQXMXBAVLEAJTBOXHVRZVT");
    tmp_msg_0.vnamespace.assign("AYAPZMFKHNOBABSJCJLNTUMRIHSOEVJLDCTROWZILJBXUWUINCUSKLHNECKMLRHJDGQGJDAYTAEKEPKHBXEOPWYVHVDTPZVAPHRSYGQXEPAUUGNSQWCRHZXKQOEZJSJVILFAVBHMRAQDLXSFWNNYXVQLYWNKQNWFZIBSOGCFJBFAGEWSBZCIIUIOLTFGTYVTGUCYMTRXDDJNLDZEC");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("MHAMMEELRSGVHFYNIESUIHJGMZOYXOY");
    tmp_tmp_msg_0_0.value.assign("IBEYZOPKIGLUWJVYSDXLSSDJKBWCXTORRRNIGNQZWPHAEPHEXGHTXZRGLCZOAIRIZLTJHPPFCPSRPSYDEGZXVZYQJAIXRXWKYKIQQAOGVTNUMVJDUGRMHNNNDHTFCZOIUOSZQBFHDTASFKWZEMEFYULSVGAEWAMMOBWUQVJCFKMFCMRSKKTJCYYHVIOLQAHELYIFHOCTXAMJNMDQQU");
    tmp_tmp_msg_0_0.type = 5U;
    tmp_tmp_msg_0_0.access = 183U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("KKVNAHACCGVYMRTCRNNYGYQFLDKNPUPLDPJGTJVPBMENHAFYVLSEYFVBGMOCBJUJBJYSGODNHZEXFADCICQAUMMCOAZTSJIJLWZPZJIFXOUXHTTDGIXQMQVEHSKVPSFWTNEZBOQLQSTGMWTLINXWCRVXHYIFHMRBBYWONNVECEKR");
    IMC::VehicleLinks tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.localname.assign("QQSABIDOTKNNNEYOFZFYIUMBFBBRECLKAJDEKPKRBFPUAMIILZDTUTWVGTJDIRVXSYQYXGCVQXWHKXFRUGWPZHXJWYTNPNRKMOHLTUCOLXZQJVPFZDQALRMNUDNITVWAMLIYMUR");
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
    msg.setTimeStamp(0.442558911929);
    msg.setSource(30921U);
    msg.setSourceEntity(215U);
    msg.setDestination(50777U);
    msg.setDestinationEntity(134U);
    msg.command = 63U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("RSFYDNBMNOSDCYDNQAWBWGFHMADVM");
    tmp_msg_0.description.assign("XSPTMHICKCLYZFFJGQHDZUDVVOWPBURKBGKTGEPHACJLLVZHWLSBVKYWAWIAAXXFRBRUCAMITJOYPSTIMJMFVHLYGRNLQGHDFW");
    tmp_msg_0.vnamespace.assign("ZZTLCIARLKFBFYJVIZEFKBWEVWMWBRYDWBMROUDVQETQHKPTHXLJXIMGCNBMNJGHJFKTVUDYRHUAIJYBKZTLAMTOONDPBCUQCUIRNNJMLQYGXGSTWMBDOVALXSZGSEZGAMYVLCQGOEOZMAPDZHIRHFEWYPUOGHGXSJOFZNDEWYLQWHQNCUBFPEVJFLKIRCBTNCJPITKXNIRWTPXDOKOAAHQSPMSVCFVUQAXFSZRWIS");
    tmp_msg_0.start_man_id.assign("PEBACXYBLUHRKITTOZWFYCZJVNYXAVITQVOZZPOWUTQSYXBNHMMUABPPJRCXLOLZRTHQDMAFMGLFKJOFSWRQYHUYGXHMECKSOPPWEKAQBVDUSBKJGICPXYCZNFDQCSLKNVXVSUVOWKSGMEDJYUDINENARUARFJPSRREFPZZENNIHEDDHLILBKQDTWTJYJFSQMHAGIODBWCUKJZQNMLBCMFXGVITWXUESINEVXRQLLG");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("CJLKQAFIYNMHTCXCDYPOTIGZFRJBWGERIHPHOTYKDHYQNSTUFDODWCAOTPQUVYFEYFHQZYBBGX");
    IMC::FollowTrajectory tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.timeout = 5170U;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.277606525506;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.0513270392828;
    tmp_tmp_tmp_msg_0_0_0.z = 0.739816269182;
    tmp_tmp_tmp_msg_0_0_0.z_units = 128U;
    tmp_tmp_tmp_msg_0_0_0.speed = 0.132248296705;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 67U;
    tmp_tmp_tmp_msg_0_0_0.custom.assign("SQHIOQMPDLYJGMIMVUISBOANQOXZGUFWSXTWHDOLEKGHTPSJNGLDZYZYXZREGHUTUUPMZRDHUVFQHOEXUVXTHWLAAPWMIRRKEMFZCOLBNCCCAAJCNBSXBIEVZBNIRFZUDVMBNFQEVESLPGYMXTPCIOKWNVUPLYKXGPCTAQJ");
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("FCEUZFNYFEHPODADOJHJSAWERKCWEQXPQGOHALZIQRPMQMFICTMCUVVPIBXWVWNCUFLLVTUN");
    tmp_tmp_msg_0_1.dest_man.assign("HKWSPCQFWFCPLMHJABYOCDY");
    tmp_tmp_msg_0_1.conditions.assign("NDRMSXPTZBHQWTOLJVMBOEBTKBEPUOWMQIDZUKOBAEEFPAHMAORSFNMNTVXWVCIOPVUQTLVSQOKKDJROYNWJUJJDWVANTDZULDOHFATLJQFFPTKYXVXIJLOISLKEHNCDUWZPQRYZHIFGUIGVRGASXRIQZFDT");
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_1);
    IMC::LogBookControl tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.command = 92U;
    tmp_tmp_msg_0_2.htime = 0.748592916378;
    IMC::LogBookEntry tmp_tmp_tmp_msg_0_2_0;
    tmp_tmp_tmp_msg_0_2_0.type = 133U;
    tmp_tmp_tmp_msg_0_2_0.htime = 0.813819927548;
    tmp_tmp_tmp_msg_0_2_0.context.assign("RNYXEAITUKVXBIOZMKUINOXEBPYSGZPMYTSZFWHJLXBCMMYUWEGUNUTJVIONKQTRJCOFCQLLXZBVJZKDGQINALWWWAHLPOQFQCIUKFZSFGVKYQUYRCDZTHFDHIRJTLWOJMJLXHCZTNEIPINBCNVEDBWSFRYQPBDXVGGKGJJASAQMLDTYBKAMPZGSDEHVA");
    tmp_tmp_tmp_msg_0_2_0.text.assign("OLCISYIGJCBLVKXLNLWXKXZUNONMIQGIQEITHVBKHMATCIYAUEBPDOBBJUTOCNRRKCNRDFMZWFZVNPDQKKMARXVVDLABGSIRSEWVQQWAJEXHEYYXUQUJEDWZ");
    tmp_tmp_msg_0_2.msg.push_back(tmp_tmp_tmp_msg_0_2_0);
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
    msg.setTimeStamp(0.0124842125293);
    msg.setSource(1165U);
    msg.setSourceEntity(72U);
    msg.setDestination(45430U);
    msg.setDestinationEntity(226U);
    msg.command = 52U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("ENZRONCDIAGOJAETOKHEQTNPYTUKGPXYQDZDWTVBMPQOMOBVZEQAXUGUOUHNZHLWTIJWKFKVTQMYJFYWPAZULRMXJYFFRDGNHPRJLJCBSPXMICMBCCSFIJDIKAOZODQJRLKMXDRHJPXAHCPLSIUYSMVOABNSZWFRT");
    tmp_msg_0.description.assign("VXDOCKSCZYZMAZVVYGOTSTYJLTGHQZWWFIQEBJKWXTXYVWSJSPIXIRIFAOYIHQHUPONIEUGEJOOHVNNGNNELSTYWFCKKQUAAZXVHFMRBVLQVQQ");
    tmp_msg_0.vnamespace.assign("FNGJVYPQRQZFUUHEGULNAFAQARMNJKSBOBLEXLYERUYPGVRWFJQERJRJFVTBIXDWQFMQROPXWJLTWNF");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("APBPFUICIDCBPGMIRYFUMTKDTLSOTFKTVFLPXVVNVRZXJKXEDNADQGALRTPNZSJPUNFAIQBGOSCQUWBJNZNNHGGVQVTWJHOGMALOBDKWJDTCBHZJNQFVUMUYEOMRSAEPXRWYWLOMLMQTBXRZFIRHZLASEGHEZSYMJJYAKHPONRGBOIAFNDMHKZIBKCISIYLQTWRUYHWVCCQSOQKXTUZDWXECISXME");
    tmp_tmp_msg_0_0.value.assign("YUGEMSKMLYBFGXRJKVIXNBYDBFZLVFOERZDCQWAUZ");
    tmp_tmp_msg_0_0.type = 254U;
    tmp_tmp_msg_0_0.access = 119U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("HMPJYRKZRPXNTRHSQGAVRDFXOWVFNBAFQMTUONZAYNMSKVHCDCFBADLFCQAWEYFROGYMSCEAUCNEIUGZKXXBPFIKOIBLSSQTCGQFIMBASLSKORDUKJXUMYTVAXANZYDUZGUDQELHTHVDKJLMSLRJNOLJNQWOJWZJSUKHTXACULVTWDZEYIZKICWWQQJZVTNEIHHWRPEGXYMGEXVOYTLPTFGB");
    IMC::PlanManeuver tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.maneuver_id.assign("ZDRYVCISMQLSSGHUUFFEFKCKOQHARVSIRVLWAWEAGTXJTINJMQAUOACPRKPMZJBMBPECXIECDIVZF");
    IMC::FollowReference tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.control_src = 7875U;
    tmp_tmp_tmp_msg_0_1_0.control_ent = 143U;
    tmp_tmp_tmp_msg_0_1_0.timeout = 0.741904069114;
    tmp_tmp_tmp_msg_0_1_0.loiter_radius = 0.162980034168;
    tmp_tmp_tmp_msg_0_1_0.altitude_interval = 0.440695061897;
    tmp_tmp_msg_0_1.data.set(tmp_tmp_tmp_msg_0_1_0);
    IMC::RemoteActionsRequest tmp_tmp_tmp_msg_0_1_1;
    tmp_tmp_tmp_msg_0_1_1.op = 83U;
    tmp_tmp_tmp_msg_0_1_1.actions.assign("KJLWRQYUQWPYNHUGNTPKWAZCEBNSRZGJCIOTIPVALSNLXYMKXFRJHHWMZHWUFZXLVMELQSXUUFWAOVZFBQKJXUBDCCPOMGBQRRFRHYGINVEVDXSLLRYUJEAMJNLEIPTXBYROTCTVFQUKANHPZKISBDNZFMQBZLSGOTYFDVPKAHOWKHMJVA");
    tmp_tmp_msg_0_1.start_actions.push_back(tmp_tmp_tmp_msg_0_1_1);
    IMC::SonarData tmp_tmp_tmp_msg_0_1_2;
    tmp_tmp_tmp_msg_0_1_2.type = 78U;
    tmp_tmp_tmp_msg_0_1_2.frequency = 3174416957U;
    tmp_tmp_tmp_msg_0_1_2.min_range = 56168U;
    tmp_tmp_tmp_msg_0_1_2.max_range = 58812U;
    tmp_tmp_tmp_msg_0_1_2.bits_per_point = 80U;
    tmp_tmp_tmp_msg_0_1_2.scale_factor = 0.512264236398;
    const char tmp_tmp_tmp_tmp_msg_0_1_2_0[] = {83, 30, -33, 111, -112, -23, -120, -82, 50, -51, -29, -44, -69, -109, -60};
    tmp_tmp_tmp_msg_0_1_2.data.assign(tmp_tmp_tmp_tmp_msg_0_1_2_0, tmp_tmp_tmp_tmp_msg_0_1_2_0 + sizeof(tmp_tmp_tmp_tmp_msg_0_1_2_0));
    tmp_tmp_msg_0_1.end_actions.push_back(tmp_tmp_tmp_msg_0_1_2);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_1);
    IMC::RemoteActionsRequest tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.op = 243U;
    tmp_tmp_msg_0_2.actions.assign("ZYECTTNPBLOCDMGGFIXJQPSFEESZITVUXHQXWRIVJMLALGHJDXWRGIUNPZMAEVAXAYZGJUFYTZDOFQBYBDXWVENGMUTZYYIWHRTKYMVTBZPAJSUODIJLBHHOIAENBGCKYVUFKIEKHGRKKTSWLJHWVOQFSPHUUWXSQDRMLQVLWOKJBEPLRSWXGNSKJIRBQWNIMDBDMAOAZMORURUCPKXSFAADORYTNCKNHQQCPFFZEEC");
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_2);
    IMC::Alignment tmp_tmp_msg_0_3;
    tmp_tmp_msg_0_3.timeout = 40851U;
    tmp_tmp_msg_0_3.lat = 0.0428947966686;
    tmp_tmp_msg_0_3.lon = 0.23378738231;
    tmp_tmp_msg_0_3.speed = 0.747973407893;
    tmp_tmp_msg_0_3.speed_units = 159U;
    tmp_tmp_msg_0_3.custom.assign("BTNNUMOKSVQSVKPXWBESHNXATTSVGLLPYHLBXSQUXVOLHKJGLQPCBBCZQDTREEZOHEJZJGYXKEYYQVSJQWEOYAENMIWXKJTMFRXXZFJXICFNZTZKAKAHMMUOFWHYGIIUPRLCFUJDOYCWLHIQWYRBCVNDDSJZIVKEQAUGZNFTLHDVBTBRFGIFMGPYIJLWKEDPRAZBRGTAPDTESVOPASROSIQMOWWDNNRFGHXZUURPIHNCMOPCM");
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
    msg.setTimeStamp(0.230041644484);
    msg.setSource(29008U);
    msg.setSourceEntity(23U);
    msg.setDestination(58625U);
    msg.setDestinationEntity(76U);
    msg.state = 249U;
    msg.plan_id.assign("ROFIMZMTIEBJXEHFXTHOOWMQZCMKLVCWWKQAUZEJRED");
    msg.comm_level = 52U;

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
    msg.setTimeStamp(0.406173986794);
    msg.setSource(58608U);
    msg.setSourceEntity(155U);
    msg.setDestination(57567U);
    msg.setDestinationEntity(76U);
    msg.state = 197U;
    msg.plan_id.assign("LMXSQVBKXWHIBPLYIRWHWGOAFMSAQDENRYADVKPWPHOXNYGNNNVSNFUPRUMJARDTAFZAVJZAGAEDCKMUNDQCHYGRJEPDOGHJLYKEOUTRZUZMQTOTATZTMILFKBMWOEVUBXISGCLFIRBNEITJMKEIXSSJJVUWDLSQBSQVFXFYCPIIZL");
    msg.comm_level = 4U;

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
    msg.setTimeStamp(0.822386524891);
    msg.setSource(27296U);
    msg.setSourceEntity(243U);
    msg.setDestination(17349U);
    msg.setDestinationEntity(102U);
    msg.state = 36U;
    msg.plan_id.assign("CSIWSSTUIXNKZEEAVQLJMWFSINEAJOJQCMNEDIBZRYJLUAMWKHHINLVYLDDAJXTHHTUHJGKKKPWFITFLVRUPXGDXZKMQNBCURCKWEICMXRPEGRHALQBUKVSPOVLDGYZQWKWPDVXECDZCPJVPEYDXIRRLBKZFHYGOMLOPOQDTIXOTVSRQGAHQJYOFYGWXMYUNITCTBOVWGQAFUZMEPVPAZHNWUFHZ");
    msg.comm_level = 103U;

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
    msg.setTimeStamp(0.995902833173);
    msg.setSource(41234U);
    msg.setSourceEntity(198U);
    msg.setDestination(59072U);
    msg.setDestinationEntity(132U);
    msg.type = 66U;
    msg.op = 70U;
    msg.request_id = 64390U;
    msg.plan_id.assign("AMKPIILRCCSYTKOYPPZPOM");
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.00544263750862;
    tmp_msg_0.speed_units = 165U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("OJHHQSDESWOPZXKZODICXZIMLKNWYNKOGJAZPUAUQICBLPAIXSLEJGOBWJJYCFMOBTYXVUTTWIILNEVRVRFXUWEEYGTYPBKMEEWCSCURZCLMATRAMHGSVNBVBKNDJCPYVYASVPIMFTSZLLBVDCNNMNQSIMKARGKFXLQJXAVTFOCGFUWPQRQJHDBHZXMJYHCDDFUBRZEGHFQOSIKPJOUUGGWIKMYTGASFDOXFEDHBLURTAQKNNVDR");

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
    msg.setTimeStamp(0.690980905585);
    msg.setSource(43677U);
    msg.setSourceEntity(151U);
    msg.setDestination(14816U);
    msg.setDestinationEntity(169U);
    msg.type = 246U;
    msg.op = 74U;
    msg.request_id = 7423U;
    msg.plan_id.assign("LAKHNLEIKFKECDLPGBILPMQVTSIZGYNWVKSMOESDJZULOEHCQHIOCMOFPPJEQADHVIZLPVHMMNWJNALRFROMDGBSSWAWXTTURXTYPJXUURTNWXZGNPUTKBMQEFCYWJOZXJLHHYATRYGSQWODKTSWNPYSAZHBCNKOUKWZRCXVICYWUBDFFGRQOFAZMRLLBQXBVIZSHQVJDYCBVPFMISHTGJVNXAPOJQCRJXBIXFDCUEBIKAUFQZRTEVDYMDEEN");
    IMC::Calibration tmp_msg_0;
    tmp_msg_0.duration = 36536U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("RIMQGZMBEHFXMUOXNEDNQAUEDCLNKYHEMBPSTKPNWWATPHCEVQINFFHSEVUKQCGRDAZFUVXRWTNZJKCGJNPIKITDQLZPPPDIALQZAHSUUXBXJAIJQMQGCUZYOAXEPCHRNXOJEWFVHKBNSNDSTHLFLGZCMBCDKMALGOXZIOWGWZVYSOTDHVUJSOBCPDMMU");

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
    msg.setTimeStamp(0.767856116615);
    msg.setSource(5308U);
    msg.setSourceEntity(30U);
    msg.setDestination(17691U);
    msg.setDestinationEntity(28U);
    msg.type = 206U;
    msg.op = 180U;
    msg.request_id = 43699U;
    msg.plan_id.assign("HODXBEYUPXRTRPLZSIJDKITGCGAVPVWEQZZIME");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("WLZZBGDPZTUAINEVLWUBVKAQAIZAEBCGKRPXYVQSPCDVLXLWPOFXEKQQNBYKBWHYHHFQVAJHSYGRONENTPGDZOVFHW");
    tmp_msg_0.value.assign("PDBTMQNOJQKWLAWZETYNNFTPVPOCCUKLEWHVBRNLERSSAIUDIRXNBYXIVSQNDTWPEJCWJDGGUGTZYRWMXONFIRLGJWSVCCPTOGMHSEVSIDUVZCADBCXAKQPXNYEDVEHHSAJDQOJTUUMMZBJJVWYMULGROCRLQBKJFIQNSUYWEKXMZBXOTLXTHRHAKOBKPFPHMUFQDAGAGZZSAGALZJKYFHYIIBBMRZOFLQWQFOCRNKLUG");
    tmp_msg_0.type = 68U;
    tmp_msg_0.access = 196U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("JBLZTLCFHSPKEXKLZGIIGVMYFNBBOFUNESLRRMSHDDRWGRZWYKYQTAQDXNFXBHLNTPCHTUXFZMQIFXNOXHOUEAQGSVWAVUYHTFRWECXJGVBMWTODCYUMFLJJZANTAIHWKKKOAENAQOJMLEUPNOXBMHVPBRGDCZSSTSAWMJKVEGGCWEESCKRXORVBUPZYJAZAYKPIQYPHIIQTWHZIDQCTQSJPNEXSGJLVMRFBDYKFDMPVYPDVZ");

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
    msg.setTimeStamp(0.56672267749);
    msg.setSource(22184U);
    msg.setSourceEntity(79U);
    msg.setDestination(57618U);
    msg.setDestinationEntity(248U);
    msg.plan_count = 42005U;
    msg.plan_size = 3614845544U;
    msg.change_time = 0.0796213646555;
    msg.change_sid = 13649U;
    msg.change_sname.assign("BQBRJDRWMJGBISRABSGNTGYWAOPAFADKKTPTLVLWPOYVWWDFNZSKJIEBZTFXOUNCKIBNAVHVOUYMRDWUROTCZBNDNAIZGMMUJEAG");
    const char tmp_msg_0[] = {118, -115, -114, 72, -124, 101, 4, 57, 21, 58, 2, -38, 49, -64, 91, 37, -57, 84, -82, 29, 30, 112, 117, 108, -81, 38, -45, -62, 59, -108, -48, -82, -33, -8, 116, -122, 23, 83, 91, -46, 24, 89, 88, 109, -87, -121, 120, -14, -96, 115, 41, -79, 37, -59, 72, -17, 15, 103, -44, -3, 93, -27, -88, 35, 64, 60, 28, 70, -73, -78, 79, 76, 101, 67, 122, -101, 119, -108, -117, 105, 64, -35, -32, -5, 7, 60, 41, 1, 73, 54, 93, -67, 71, 72, -69, 8, 82, -104, 29, 17, 46, 1, -71, -53, -30, 49, 109, -14, -71, 48, 117, -96, 88, 67, -17, 92, -9, -27, 25, -44, 52, -67, -38, 95, 95, 119, -9, -16, 11, -42, -106, -27, 112, -90, 51, 55, -11, -59, -42, -91, 122, 70, 92, 65, -112, -117, 109, 86, 108, -24, 36, 115, 96, 24, 67, -98, 67, 29, 73, -26, 29, -61, -10, 47, 104, 100, -34, 69, -78, 125, -15, 28, 44, 124, -43, 118, 103, 0, 38, 121, 72, -30, 61, 86, -123, -77, 49, -82, 70, -68, -51, 86, 24, 41, 107, 56, 43, 37, -22, 94, 67, 85, -46, 14, 74, 122, -42, 69, 29, 7, -96, -63, -11, -99, -14, 93, 94, 52, 59, 121, -45, 89, -39, -12, -113, -71, 33, -72, 54};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("BXCTKGASFALRTWMYKTRJORWSOBFIOMWDMIJFYWRSBQBKWTTJCLCQVFDEFDTMWYMUNAAGQNPLZJYPIIXGIDOUMTJZLLCQQEYSCNODFXIPUSJGCYWCHYLN");
    tmp_msg_1.plan_size = 40138U;
    tmp_msg_1.change_time = 0.576256455376;
    tmp_msg_1.change_sid = 4173U;
    tmp_msg_1.change_sname.assign("NOXAVWCFCNYDDKOMFMRTOEXFQOVTJUJBNUITPVYAGGRIQRH");
    const char tmp_tmp_msg_1_0[] = {94, 79, -91, 14, -112, 5, 37, 116, -105, -55, 90, -113, 108, 40, 101, -50, -93, 106, -68, -7, -94, 110, 119, -56, 25, -41, 92, -45, 47, 88, -110, -120, -3, 71, 71, -76, 38, -27, 68, 94, 16, 65, 45, -40, 50, 78, -53, 63, -28, 85, 109, 73, 46, 58, -14, 28, 32, 71, 61, 93, 36, 109, -109, -36, -2, -96, 10, 99, -53, 63, 41, 3, 5, 33, -94, 46, -119, -39, -26, -63, -70, -124, -112, 31, -71, -54, -24, -103, -21, 119, -13, -17, 53, -23, -124, -64, -48, -11, 0, 83, 12, -7, -44, -22, -71, -82, -14, -113, -68, 108, 33, -120, 56, 12, -85, -12, 48, 123, -49, -77, -73, 119, 115, -127, -80, -120, -93, 29, -37, -111, 47, 1, -101, -21, 37, 42, 102, -26, -93, -116, -122, -120, 72, 65, -78, -126, -49, 72};
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
    msg.setTimeStamp(0.903389064231);
    msg.setSource(44629U);
    msg.setSourceEntity(238U);
    msg.setDestination(2220U);
    msg.setDestinationEntity(168U);
    msg.plan_count = 43881U;
    msg.plan_size = 3706529221U;
    msg.change_time = 0.00364793377665;
    msg.change_sid = 64372U;
    msg.change_sname.assign("JWINPURQGBNRKPHQFKDQDCBKA");
    const char tmp_msg_0[] = {68, -21, -4, 41, -20, 125, -119, 20, -55, 102, 7, 45, -83, -53, -84, -53, 66, 87, 97, 62, -118, 116, -118, -35, -71, 73, 11, 95, -52, -86, 123, 59, -128, -19, 22, -52, -9, 113, -83, -42, 107, 73, 69, 96, -31, 27, -116, -126, 111, -36, 86, 65, 93, 43, 34, -47, 5, -46, -81, 89, -30, 19, 26};
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
    msg.setTimeStamp(0.742208277787);
    msg.setSource(29115U);
    msg.setSourceEntity(75U);
    msg.setDestination(2167U);
    msg.setDestinationEntity(196U);
    msg.plan_count = 48622U;
    msg.plan_size = 1868579518U;
    msg.change_time = 0.403554243949;
    msg.change_sid = 60963U;
    msg.change_sname.assign("WCNMENFITVLSJMAJXFSHWWQTNRSOIUQDAYCYYHUESKIZVLYHXDUTPUEZMROADBOFVTYCIKTHNNGKYGCPKVHBHSUWESHBBJCZFNZLCKADOPJZBZGRQFDDDRQDEAYPSQXXTZLNCFIOJILVOJEUKUMJKTVBWGQDEPRVUYQBLACMLJ");
    const char tmp_msg_0[] = {98, -11, -117, 125, -27, -81, 29, 10, 29, 1, -105, -67, 51, -70, -124, 82, -107, -90, 9, 90, 58, -95, 12, 112, -81, 120, -17, -70, -105, 7, -27, 105, 100, -1, -109, -78, 59, 21, 117, 77, -117, 8, -95, 75, 87, -13, -3, -115, 9, 68, 71, -114, 88, -34, -47, 106, 3, -125, 121, -116, 58, -55, -85, 50, 44, 15, 109, 4, 22, -107, 89, -27, 113, -2, 78, -44, 102, 33, -32, -108, -102, -89, 52, -93, -32, 121, -121, -97, 103, 3, 107, 94, 110, -10, 12, -5, 90, 28, -99, 87, 69, -96, 51, 79, -28, -64, 24, 62, 15, -9, 49, 36, 6, 49, 116, 125, -64, -17, -8, 110, 73, -1, -84, 16, 14, -71, 6, -118, 121, -94, 27, -90, -112, 123, 112, -31, -46, 80, -85, 7, 67, -47, 80, 74, 14, 3, 101, -97, 27, -36, 100, 59, -6, -71, 39, -81, -30, -86, -81, -82, -29, 104, 72, -89, 67, -120, -29, -6, -102, -89, 100, 98, 55, -4, 58, 125, 116, 25, 99, 42, -111, 68, -37, 93, -56, -128, -120, -105, 3, 107, 6, 13, 28, 109, -67, 101, 44, -124, -2, -31, 3, 26, 8, 25, 47, 110, 112, 13, -38, 124, 92, 114, -113};
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
    msg.setTimeStamp(0.478239219944);
    msg.setSource(59608U);
    msg.setSourceEntity(4U);
    msg.setDestination(6315U);
    msg.setDestinationEntity(42U);
    msg.plan_id.assign("EADLLLCDTLYNWCDFHMUXINZXNAWBOWYUJJCDCVGELEWTXGAJIVRGGPRQOSNDAPYDMHUFOANHIMSJIBWLRORMVVVEKHLNBINJULFPUPQNQITEMH");
    msg.plan_size = 274U;
    msg.change_time = 0.250759059063;
    msg.change_sid = 35714U;
    msg.change_sname.assign("KPVJTGJCMLYZANRITNVTZKYVKBDMHSVUMHJKDFPOTDYXORW");
    const char tmp_msg_0[] = {-48, -99, 45, -87, 46, -96, 80, -20, 51, 109, 54, -91, -101, 13, 100, 122, 118, 16, 13, -62, -16, -15, 116, 75, -118, -86, -5, -2, 117, 82, 108, -107, -125, 40, -43, -115, -127, 125, -54, 81, -114, -49, 108, -98, 97, 15, 80, -107, -47, -126, -40, 48, -98, -25, 56, -35, -77, -128, 22, 106, 18, -20, -12, -54, 4, 92, 8, -23, -32, 45, 51, 42, -7, 10, -80, 7, 114, -52, 35, 36, -3, -40, -125, 106, 49, 70, -8, -10, -14, 73, -55, -19, 95, -98, -56, 61, -98, -93, -62, 42, 103, -4, 17, 114, -107, -11, -61, 112, -25, 63, 34, 123, -67, -66, 48, -108, -44, 93, -3, -6, 55, 73, -95, 108, -106, -60, 113, -11, -35, -90, 117, 90, 112, -4, 120, 46, 96, -31, -128, -81, -21, -96, -23, -108, -42, 36, 13, 8, 97, -84, 71, -115, -30, 87, 72, 37, 78, 118, -36, 81, -80, -56, 102, 47, -97, 64, -11, 25, 39, -15, -30, 123, -74, -30, -94, -127, -34, 99, -92, -83, -61, 56};
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
    msg.setTimeStamp(0.123406473131);
    msg.setSource(61014U);
    msg.setSourceEntity(117U);
    msg.setDestination(52616U);
    msg.setDestinationEntity(88U);
    msg.plan_id.assign("EVFHMTILSXAORKYUTTYXQWEWYRHQDBCGPVRTSXHDUAQILUBAMSZBKHCCGFVKOZDTJEXKDXQHLPJTNIGQIPTVHWNXCYAGGFXTIMMUFUBWVRZWPOGMCRZNAGEQBCWEJMVDPAPDZFRVFNEWBWXIVDMNYOLONIMAHECLGLTCXKZNLJSCPUJJZIYXKRECRZKSYUOFJUFAMAPOZDOMPUBVBRUQLYENFZWJKJLVDKNBFQTYIBRNYKHOOESJGQDSSH");
    msg.plan_size = 48770U;
    msg.change_time = 0.0541185469616;
    msg.change_sid = 58339U;
    msg.change_sname.assign("OUFEOUAQPTACWJRHPGDQAGOVNUWCX");
    const char tmp_msg_0[] = {-100, -2, -63, 88, -64, 49, 122, -120, -104, 52, -88, -92, 2, 94, -112, 124, 92, -93, 7, 2, -87, -51, 110, 52, 3, -115, 80, -22, -121, 37, 71, -18, 78, -36, -89, -11, 40, -40, -90, -23, 122, -48, 11, 81, -86, 106, 101, 18, 49, 32, -43, -7, 111, -78, -113, -70, 114, -69, 1, 94, 11, -65, 15, 27, -107, -45, 37, -34, 8, -128, -57, 15, 86, -112, 29, 42, -70, 8, 30, -50, -90, -46, 48, -88, 60, 13, -95, 118, -125, -125, 62, -66, -117, -18, -3, -61, 11, -85, -52, -100, 41, -33, 30, -86, 30, 72, 68, 22, 118, 49, -57, -96, -16, 64};
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
    msg.setTimeStamp(0.226538116971);
    msg.setSource(27732U);
    msg.setSourceEntity(168U);
    msg.setDestination(39900U);
    msg.setDestinationEntity(34U);
    msg.plan_id.assign("FBALEDFJDAM");
    msg.plan_size = 18258U;
    msg.change_time = 0.92856267256;
    msg.change_sid = 36136U;
    msg.change_sname.assign("FERSXTMCRDYBHYOQLARSBSNFXKRCSJCXEZMUUOXAWDGVQXNMGHVVVFXFYJUHTIRJDMRJPCZAITZQHNZIHWLEJVABHPMYEJVBWMLNXAOSMHQSWCEEOJFEBTGZYAXSQUILYRSQIATOZSKFUQIARGLLVLOPWQNBUTVGNDGGWZGIKQUKVYHZJDBSNJAEXOYBPOPDGALYKYRBUL");
    const char tmp_msg_0[] = {39, -7, 41, 63, 54, 46, -94, -27, 115, 1, 15, 100, -91, -1, -120, 83, -42, 47, -63, 41, -78, 87, 100, -83, -51, 98, -106, 32, -92, 14, 81, 8, -92, 56, 8, 122, 59, -16, 25, -51, -56, -112, 93, -58, -4, 109, 54, -16, -24};
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
    msg.setTimeStamp(0.489678535435);
    msg.setSource(5236U);
    msg.setSourceEntity(172U);
    msg.setDestination(39371U);
    msg.setDestinationEntity(237U);
    msg.type = 104U;
    msg.op = 207U;
    msg.request_id = 54389U;
    msg.plan_id.assign("NNNSFLQXRPOAAJVJDIZUBHXORDOBMXLJZDWSRIDVFGNJCYLVZRNYYKUFHPAUBZFEDGACETHWGWYOHJSCSEQIXIANPBERIKEHAWFKCIHETSLEFZXZUFPRWQXIXCZKBJOEQHVXGDBDLIXCUHVPSZHWOVUZKYJBQCPPDWMRTJTYLLPVBCFYTKTZQGSQRHTFYMTYTMLSMWFRQJ");
    msg.flags = 23239U;
    IMC::RelativeHumidity tmp_msg_0;
    tmp_msg_0.value = 0.968130034198;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("LFYIJDXZXZBZOJKZQQUSGKESMFZGXLGFXMLSYMUZWVHIZBMQTMLFVWSATTVUCSNIKOQMXUSDZCLIIATRBUVAEHPTDEVNTVBKBJGQLVAHAPQYQCPDFTKGSOSRWGWRYLJLDKPLJCHWIOWGOAUUJRDNWGBXQTOJHEHPMRSEDTNKQXKAHYVNONVVCUHCCYKREGFERSIWHJFYCYMUPOZUNNYEFHJWKXLPFXAGRBMCPDRIIIPF");

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
    msg.setTimeStamp(0.439130540148);
    msg.setSource(1574U);
    msg.setSourceEntity(15U);
    msg.setDestination(10882U);
    msg.setDestinationEntity(135U);
    msg.type = 55U;
    msg.op = 60U;
    msg.request_id = 36169U;
    msg.plan_id.assign("QLKLFUEIXVMRPZJBDIHNLYSAUQFYFGKYJIPKALXEVNGPQVWYTGGUSHNKJTCBRQTXSCELPPYXFDJKWEYUOZHEGTFXKRXWAWJHUBEHSFCMLNFFOBCPURHWSBZDEAKDYZVVUXSYCMIALVABZZVQZMRQHSADNDCFJFTDWURGGZCHBBTIMLQIOWMCIWOLELTPZMGGNPEOSTYQWNDTRXIMHJEUHOSUVCATVKIJMDKWCGDQRANOBSOQ");
    msg.flags = 14018U;
    IMC::CompressedImage tmp_msg_0;
    tmp_msg_0.frameid = 207U;
    const char tmp_tmp_msg_0_0[] = {-103, -66, -21, -123, -34, -99, 108, 62, 124, -95, 48, 105, 70, -43, 30, -103, -124, 68, -57, -86, -6, 94, -62, 22, 1, -50, 42, -7, -22, 86, -64, 23, -108, 95, 19, 70, -57, 114, 47, 80, -69, 88, 51, -45, -8, -116, -124, -13, -98, 37, -13, -33, -127, -33, -56, 98, -116, 14, 39, 82, 0, 58, -125, 109, 97, 115, -30, -41, 83, 86, 47, -97, -66, -85, 113, -125, -43, 5, -91, -29, -30, -99};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
    msg.arg.set(tmp_msg_0);
    msg.info.assign("PJLBMPGYFIZMBMNXSIZTTAFRDWTDYPWKPCYATWQDFCVGINROWUJWGXBEHQHRWKUVEXXGWKQVYOUSOKPALDNJQELSAOSVGETUWOAAIUKMZJZCUDDSYTKDNLRREYJFVGEZMLHGROXDRVMUBCJHQWSONHJTSKYIXOZQKSFYRUYZZOLKQHGSCPVINBGCBAHXJQAETDRZPHAJT");

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
    msg.setTimeStamp(0.99961145538);
    msg.setSource(6285U);
    msg.setSourceEntity(98U);
    msg.setDestination(9410U);
    msg.setDestinationEntity(148U);
    msg.type = 158U;
    msg.op = 57U;
    msg.request_id = 44758U;
    msg.plan_id.assign("IEJWCOHNTRVNKONTCUPBBHKDTDHZYCWEOKPZEONTMWPZDLFMDISNOYVXUCQKWSERINWISIYSIORFIPGGEAZHBZLVGKVVMAAAEMUXQXROGVUXJHGNQJXRZXUFRPUFDPBAMRVZLSDHCGSBYSHI");
    msg.flags = 50853U;
    IMC::Magnetometer tmp_msg_0;
    tmp_msg_0.timeout = 34407U;
    tmp_msg_0.lat = 0.649087789577;
    tmp_msg_0.lon = 0.846583424697;
    tmp_msg_0.z = 0.146231261212;
    tmp_msg_0.z_units = 205U;
    tmp_msg_0.speed = 0.23432548413;
    tmp_msg_0.speed_units = 147U;
    tmp_msg_0.bearing = 0.431538321478;
    tmp_msg_0.width = 0.600467998848;
    tmp_msg_0.direction = 32U;
    tmp_msg_0.custom.assign("OSQSURBIJEWBCVANQLWHXUCATVZQOCBBMHDYKBGVNWMIYKQKHQRHGRKUKAOABPLEGCWTVRPMZERJWULUZJNVYQXPJQWIRZMEMTIEASOYZJQWDNUDQHTRFSDCZULNDYXXOUCDLXYSVHPPKOEXGNPOJHISLNGFFMFFVTQTFVYAIEIMDYZEOSSCRZDXTLB");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("TRHIZXMAMIRPGSPJTOQBFMUKBZAFBZWPPJWZNVTLHJXOLFSYR");

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
    msg.setTimeStamp(0.545289587538);
    msg.setSource(63642U);
    msg.setSourceEntity(105U);
    msg.setDestination(29978U);
    msg.setDestinationEntity(142U);
    msg.state = 29U;
    msg.plan_id.assign("SRNEFDRXDDRQFQQWKPGHVDGFFEUFOLEIPAAYSGVBMR");
    msg.plan_eta = -551033141;
    msg.plan_progress = 0.142418786027;
    msg.man_id.assign("NMVQNRASXA");
    msg.man_type = 21247U;
    msg.man_eta = 919213837;
    msg.last_outcome = 122U;

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
    msg.setTimeStamp(0.34501311964);
    msg.setSource(20683U);
    msg.setSourceEntity(157U);
    msg.setDestination(36594U);
    msg.setDestinationEntity(89U);
    msg.state = 170U;
    msg.plan_id.assign("NBVRVDKCKPKLE");
    msg.plan_eta = -1191282529;
    msg.plan_progress = 0.49453150988;
    msg.man_id.assign("SVCTPYYWLDJRZGKAKUSUDEXYOTBSVXYBBJCPZMLJT");
    msg.man_type = 17640U;
    msg.man_eta = 1784539180;
    msg.last_outcome = 193U;

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
    msg.setTimeStamp(0.16808726013);
    msg.setSource(35871U);
    msg.setSourceEntity(43U);
    msg.setDestination(46654U);
    msg.setDestinationEntity(172U);
    msg.state = 14U;
    msg.plan_id.assign("NUFZEGPYQJZCLWQAVIHSLFIDNGYAEAVJOUMXGEFCJQABZRIFUPKXYAWFCPZWRYPGMGPGTRCLZTS");
    msg.plan_eta = -2001489095;
    msg.plan_progress = 0.360004253268;
    msg.man_id.assign("RAQWWGNYWIDTUHIOESTSEFFKLINBRVXMGPZWYCEQHFGUJTVZAKIXAQHPMLINSGQXFADWGCSNZNWWHINSUVBZKJKMZG");
    msg.man_type = 39494U;
    msg.man_eta = 1493764303;
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
    msg.setTimeStamp(0.308361835348);
    msg.setSource(18700U);
    msg.setSourceEntity(117U);
    msg.setDestination(54245U);
    msg.setDestinationEntity(79U);
    msg.name.assign("HNRYKFGLVUNZFZMXZZIYJLXGBVSJTQQDEZUCKUWDMWBCNPEEKIHJZUTIPRTPAMMBSBWSGGNJJCDLHBGZQOIDQADFDDILPIGTNBOQCFVJHAWTBUCWJQVFE");
    msg.value.assign("HFFWWCAXVGQZHDPSEOICRJKQGIVMJLBNKCTEPXGASLARSOPHCNFBGNRZBJDVLZJDOGXUNKWAOBTXUDQGCQZZRTKZWGVHELFERUISIZBBPJURUXHDKTTWXMAPSKPHDOZVHHYNOVAAURAQSUFSMMRVFJKRWPTICCFPXLYGQMPFDDOTMWJIWLOEVDQHTBXCSAGIEIMMLLYBYJTYNKYRNYFGECNJUIQVFJMNSHWABW");
    msg.type = 62U;
    msg.access = 115U;

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
    msg.setTimeStamp(0.454760953555);
    msg.setSource(20183U);
    msg.setSourceEntity(193U);
    msg.setDestination(26236U);
    msg.setDestinationEntity(177U);
    msg.name.assign("ENYTYSQBYTOLIJCJGFBYQVKNZXDJUPHWWFNMHCOYHIFQWEMAHUZVNNVWKAY");
    msg.value.assign("UICLTVIEYFSVQBZITGVBDGLMRAQOHBYAXSQFYUJQEFAKPUWZXFPFGUMGMEEXSPIALWNN");
    msg.type = 88U;
    msg.access = 115U;

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
    msg.setTimeStamp(0.93832419923);
    msg.setSource(14831U);
    msg.setSourceEntity(226U);
    msg.setDestination(45038U);
    msg.setDestinationEntity(194U);
    msg.name.assign("MTSCUWXOYEYAXCMPXEKHGSNGECSRZGULMFEJRBWHYBYNMIUDODPJTWAVEDCPMUMHMTUSWKFLNAZISPCWGCXWJXNINZPEPBFRQYUAKQLJMWDRLHDFNQADXGVRRIIFKOHLBIACZSRFITVGKQDUIJWARDEMDHZWGVBKQTRPWPOJVKCLYZDSQQQHSUCQAKVSBTBLYZJLEBSTRUQHTEPZAZOYOCJTAGVLTYVEGBM");
    msg.value.assign("GJWZKQOESZGSTTSRBYUPLNEKKWBJMAIVSMGMKVSDRAQZMOVRXCAQCZBWMXPNRDFEHEFNCKJCJZBNQYWZFXTIYTBCYGRFBOXHZASFEUGJVUFEKZULGRCBXKGUAESPWWLXDVJOTDOTRKQWZYFSMNAGKLORAEPYXHLQWMIPULCLIWSZQBVTPIVJMC");
    msg.type = 141U;
    msg.access = 71U;

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
    msg.setTimeStamp(0.814450404232);
    msg.setSource(52994U);
    msg.setSourceEntity(61U);
    msg.setDestination(2219U);
    msg.setDestinationEntity(183U);
    msg.cmd = 17U;
    msg.op = 68U;
    msg.plan_id.assign("BPSIDQEKLFUMRPOZADKJDLYLHMSHNRJDCGEPIMUFAJVFTSTQBTOYWYEFPLVPOXSWDHBLUBWUDNNUUSDDXXOZKMPTDGRVFNLQOOYCCURWMJAIECAKAHTVWBGQVSAAQTCGWMTIZEJEGBGNVGIZJXLAMRKHSPMCXKOJEDCVJHQSFVGUIBBXRRBIECFXZXQZQTAYRISLYHYVAPYKBNCJIZSNRQFNNXLPZ");
    msg.params.assign("BJETDMEGQPTJANMRUKLVBUERHYSSZNWABVGPSTBHQLZPKWIXVLZUYIHOORWKNOKPYOPZCTHGIQTJOSXBEOXIQVURNMTZBEYMWEVDCPOCWUZKLEHCULZSJ");

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
    msg.setTimeStamp(0.963446539267);
    msg.setSource(5543U);
    msg.setSourceEntity(149U);
    msg.setDestination(37657U);
    msg.setDestinationEntity(224U);
    msg.cmd = 176U;
    msg.op = 85U;
    msg.plan_id.assign("NXVBIFUZIZPHDACYOCDFQKRBTIPGLPJYQOAZVWETTBBEOXHWHCUQYKWCEGGIPQNLNWIEUGMGJYUXHSEZLSZUWJTCXPNIHEZVQKINELDWKWUAKLLRXFNOTBXBZYMS");
    msg.params.assign("JTFMUKQJHYOIRJISRQCUQNLGVMFOKWYHETQMPNRTFUGYDRAXTVREPCOQVKJLVLFPALFIMWFUEABXLWBFQDMKGWHCZHWSQBDWDITANYFBCXXMUHOFNCOVZSWSUVJWJZSUBBILMAESG");

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
    msg.setTimeStamp(0.846022520835);
    msg.setSource(4631U);
    msg.setSourceEntity(199U);
    msg.setDestination(55371U);
    msg.setDestinationEntity(196U);
    msg.cmd = 67U;
    msg.op = 20U;
    msg.plan_id.assign("VLKSJSJNKZQAVXDVRYUDYOOVZNMRPUZHBZSAKCXWDJAWEXJBCGQHHDQNXINOOPBSAVQDWIURYXQXSFEBBTEKILVNBVFRJCPGKXTYZJCSAWYZGWOQLGWCJNNTTPZDLTHUHOPMIYISPVKSOQSGLBPCEEPYLMFFDUCKEYBTBFFCDLQMHCMOIZGPYGEKI");
    msg.params.assign("FZWUJLANXBEOWSWAHAOHDOBZYZYTRBXAHYCYTGPNOYHUDRZXTTEQKQMVABPGIUHQFJBNNUDHOPFGGQJTMBJSXDPTZIIRCCFHMBQRGLWWWEVKBLLQOLVYWGSZCKLLIZNFWPGAMGPCIMZEPELNNUXKAKKUOXRAANLVBBICGPFMRRHVVQHEYJYXIJWXZSUATO");

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
    msg.setTimeStamp(0.606126668996);
    msg.setSource(30139U);
    msg.setSourceEntity(107U);
    msg.setDestination(9445U);
    msg.setDestinationEntity(201U);
    msg.group_name.assign("RSZPKMNVUUCSFICMJYBHUHMFGSJZGLFBQOUBYDLVZOBTZNVPMPBVIDFKECAVDBTURMHWWCNILPHKEXBAGNXFLFIQDUOXQYMCZYYXSLREAHFCKJADQNWQBILQLMHTISBKZFREJILJGKLRWZQOQADSEJYONMYGAIYRDWRTTKNGGZNTAOWKSODBVEYAPYUFEROJMW");
    msg.op = 204U;
    msg.lat = 0.595058423492;
    msg.lon = 0.379668691845;
    msg.height = 0.212285436136;
    msg.x = 0.198363192218;
    msg.y = 0.588788048612;
    msg.z = 0.392746935114;
    msg.phi = 0.230811023124;
    msg.theta = 0.390325221552;
    msg.psi = 0.958026833851;
    msg.vx = 0.915117242252;
    msg.vy = 0.47248610976;
    msg.vz = 0.410638094833;
    msg.p = 0.304343971501;
    msg.q = 0.914573514824;
    msg.r = 0.468169688367;
    msg.svx = 0.792312308758;
    msg.svy = 0.125178233522;
    msg.svz = 0.29976458062;

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
    msg.setTimeStamp(0.0783537365727);
    msg.setSource(35421U);
    msg.setSourceEntity(188U);
    msg.setDestination(6662U);
    msg.setDestinationEntity(218U);
    msg.group_name.assign("IRNHENWQXCZNWUYFWSPSMSXKKNLHRFVYVYTVYDOZPHFVZJBFDPGWEYFQKWAHBMRUULBLTGRJACJNTGPVTVFHLUWDHPIQXPRTIVYNX");
    msg.op = 233U;
    msg.lat = 0.892628193921;
    msg.lon = 0.0561372653971;
    msg.height = 0.175611229315;
    msg.x = 0.836972727396;
    msg.y = 0.885754256703;
    msg.z = 0.923130081887;
    msg.phi = 0.82658693641;
    msg.theta = 0.292622604494;
    msg.psi = 0.996785103276;
    msg.vx = 0.469149484293;
    msg.vy = 0.390366083156;
    msg.vz = 0.470417857847;
    msg.p = 0.57309663891;
    msg.q = 0.183359727908;
    msg.r = 0.595355070259;
    msg.svx = 0.535238413008;
    msg.svy = 0.690492919725;
    msg.svz = 0.437498516466;

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
    msg.setTimeStamp(0.945180603273);
    msg.setSource(32273U);
    msg.setSourceEntity(130U);
    msg.setDestination(45983U);
    msg.setDestinationEntity(97U);
    msg.group_name.assign("OLUJCZPBYCTZOCTLISDFAAGYQIQNGXLFYOSMHSTRITTPJBQVDABHOYTDZLJZWTPVAQVUUVSGNEHXX");
    msg.op = 165U;
    msg.lat = 0.791670246326;
    msg.lon = 0.443325815974;
    msg.height = 0.94670011197;
    msg.x = 0.0345384377854;
    msg.y = 0.526475486933;
    msg.z = 0.969118923809;
    msg.phi = 0.156667000631;
    msg.theta = 0.116902193958;
    msg.psi = 0.133401467876;
    msg.vx = 0.534360287524;
    msg.vy = 0.701251833156;
    msg.vz = 0.21764808117;
    msg.p = 0.076320353845;
    msg.q = 0.297072220889;
    msg.r = 0.190317833246;
    msg.svx = 0.411526156799;
    msg.svy = 0.733503790793;
    msg.svz = 0.353301244444;

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
    msg.setTimeStamp(0.280161807091);
    msg.setSource(23432U);
    msg.setSourceEntity(10U);
    msg.setDestination(8319U);
    msg.setDestinationEntity(165U);
    msg.plan_id.assign("ZMHGZSQWWCHFOLCWXKYQYPIDYXWJNWSZQMSYQVFOPXZVAWAPHAXBYTLPHDZIXOUOPXVTSKABSBCLLMFTUSMTKJFVITDHGKSFQPARGTGFNBWMRZQBHLKMCWKFGMNEDSICYURRZPAQBBOMBGVIRTNTNRFPDEEAIOEQGYIDOZJRNH");
    msg.type = 235U;
    msg.properties = 94U;
    msg.durations.assign("ZRAUJMWTFWWKSAVYQLHVMOCMKBOAIPQBLFMZGHWWRBWXSUDIWGEYXUCLTCGMQYTFZSJBENXIKNTVPXZPVEVRJYXCJBWLGCEHKCKRONBFILMNIDGPTURIBKDDTFSQPQCJDPWOUOJYQKEJUXRYTSYLSFNUQVPNCOJPNSSXZKZGKNCBUAHRHIVOVEYLIDCQFMNTJUAAIAZXSDDRAMLTFAYQEJGHYZPOGMFZRVKDFAEBQUXBLGOWNHOD");
    msg.distances.assign("DCGHTUNOUBMENLEQGZECHVYYGIKBECUNPLAWZHOIMWOXDUFVIOZMSCPIE");
    msg.actions.assign("LUBFMVMMIYUIJFOZOVWXMNWGNSZWHFBJTJDQPLPAIQUANRPGXIYFJCWUYPYVUZ");
    msg.fuel.assign("GLXQNFWZHZZOMGCFGWUNMGBTSQLRSPEZOAWQUCZYEXCG");

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
    msg.setTimeStamp(0.120337852963);
    msg.setSource(21457U);
    msg.setSourceEntity(128U);
    msg.setDestination(59753U);
    msg.setDestinationEntity(92U);
    msg.plan_id.assign("OGCYMOHDBSDZSXUMAPGIYAHVPOTMCHSJOOWSZLWFTPOYPRTMXUXNEVIDTKVBGTIWBZYCPMZZACLUWJQLGLEBNEWUQDYSGJUOKLTWJYPXIFHHXDKS");
    msg.type = 0U;
    msg.properties = 25U;
    msg.durations.assign("FZBHOMLKJJCTVWPFADIWOMXGUWPVEZIIEMBOSQYWDFDORARYQZGXCQOGTEFRXBIEIUFYMJWSSSNMZKULGKLQCNPKDPPMGIJXEYBNVCZVUUQGEHTDERIJUAUCCBVOKHGIEMNRKYQNETJCLBAQXPTLZNUYJUAOLZAPFKVKVQRRZLCBHTBMBKDANCYGZHHSDSFWORTJAAYQGXTYNPVXWJTHXDHDYPNJLMS");
    msg.distances.assign("UNTLTMEZGBDFJHMKPYGEBVDOXQUFRXILYNXTIGODWWCSHTCRYEEKSHBWWSNZSESJYQRZMARHHZNUHPHIOJ");
    msg.actions.assign("DBSHGRGPBTLNQVBTFZNSOYHRRJISBZHSRQXVAMJCMYWIAVAGLWUCDIMMXNEBMKHNZONLOKBAZYJVXPJZGJLTTOSUDOGAYQTQWKFIDPYVNAKIUEUGNPCIWRLREYIIDWPBAJPULWQPQMTZURGWVEOQVIFHFKCSTQXZDFCCWFVYRXACCPGUEEYKDJFWBOVGUEF");
    msg.fuel.assign("PZJIAEPYFHNRLUTSPQOJTFZDXVUBAZUHZPMTUEJPIWCKMTHCAGQWEGEOSVACWSSXYACYIMRQJFLMOVXJNPGRIBPLYZLUNKNRQAKKWDBAKHNMQUXZFNKOOTWCLOFCWGJZQUEXBYWTQNYPIQTTGLUM");

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
    msg.setTimeStamp(0.0996818920009);
    msg.setSource(62316U);
    msg.setSourceEntity(43U);
    msg.setDestination(59213U);
    msg.setDestinationEntity(50U);
    msg.plan_id.assign("CUXLGCIVNOQWULNSBNQJVLFFAVBRTLANBNDIXPRJZVQGZIBGSRTFOGIKUTSYBIOOMYKKGCYZGQDRGAYJCMESHIEMXPLOCXDSVPKRMERPLEKCADNSIGAYHCZBFVZDHZVMJRWUFOJUVWCCUXIBMRHZHKWOHTKQHMKDKNNFPYIJRGMYPTZCSQEQUALWXEYVTYJETVUUAFODALPBUHTAMELQDXNJWPOKDXWFSDYMNLTPRJBQSJXTP");
    msg.type = 129U;
    msg.properties = 155U;
    msg.durations.assign("BEZMEXCPMDDRYAOBQHAHOYRGTONKVPQR");
    msg.distances.assign("ZKTZUXUZCCTURMVTQVWLFXBKGCEPSXIYMVSADPNWTJDNHUJAGISAZKVADKJNCQPYSBJBEYXERBLGCEAVERABWTKWVYFOWMKHHWKJVRSCGSTOFQIIUBWPMFPZMLFUGOYZLQXGYUINZWMHHLROYLRNNUOGGORHWJTZLTKCPDVOSQLBFQEDAXIDEREGVRFUHIDJYCZTNRHQJPZXOHJFLTJYSL");
    msg.actions.assign("VDYXWUZMNFLNPJUXOOALGJMKJVFZVNPCYYRBJZJIOFHMBFRELBKDZMDAWPIPQWFOVYNEDJAI");
    msg.fuel.assign("WWRPDHIQRGWNUAXOFNESQQFTRUKQWPXCKYUOLJAIZSNYMLHUBFJGPVPDWAMYPHXTURNBFQIVJADHOHMMDD");

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
    msg.setTimeStamp(0.255415465843);
    msg.setSource(28780U);
    msg.setSourceEntity(70U);
    msg.setDestination(12495U);
    msg.setDestinationEntity(25U);
    msg.lat = 0.00299678218416;
    msg.lon = 0.401933777782;
    msg.depth = 0.927830821832;
    msg.roll = 0.668475774236;
    msg.pitch = 0.922914037856;
    msg.yaw = 0.646399486407;
    msg.rcp_time = 0.0626912100692;
    msg.sid.assign("WFMTAFLUDMPPQNYXCEZMAHLYFPVKXQINDCBCNVGCLKMUQOVBQRGXQRZNKOIJEPMSAGYAUTBLHBPLZMJYQEWVAMTHSLBGKHHLUYGEYZAKRDFUZGXJHOEAETKDKSYMRHUMXNEMPEXHZRCIWNPIIFVRRPOJJAFSOVCYGEZJZQWDWBSPGSVBKJPODXCNYSQCFCNBKIRSUXOJWHWFAAZNOXUFUW");
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
    msg.setTimeStamp(0.434014942275);
    msg.setSource(13433U);
    msg.setSourceEntity(7U);
    msg.setDestination(62265U);
    msg.setDestinationEntity(177U);
    msg.lat = 0.161262732606;
    msg.lon = 0.337142137291;
    msg.depth = 0.427182183118;
    msg.roll = 0.246544958442;
    msg.pitch = 0.589469751375;
    msg.yaw = 0.241251509826;
    msg.rcp_time = 0.864740986135;
    msg.sid.assign("OEGWVXSRZWQQTKXZSORTIDGIDANFIQPWDEVNYVPALZRVSMXXHKPDNIHQJOVOUWPKITYEUJYAETJOQBRWXJFFJPHSSMDJDARSKHLEGFAVTCNJUFBWCMVNNQCAJCBREIBSYUTUVLMMLBDZZAQLUEAMPMXOQKFUICHLDLHYEOIRXSOPNHAGZBAKNGWZYYJWLPFTGKXTXDBOQGFURIOBKKRMFMNGB");
    msg.s_type = 155U;

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
    msg.setTimeStamp(0.653793704869);
    msg.setSource(12729U);
    msg.setSourceEntity(98U);
    msg.setDestination(9704U);
    msg.setDestinationEntity(145U);
    msg.lat = 0.964460224712;
    msg.lon = 0.88553849711;
    msg.depth = 0.163442782514;
    msg.roll = 0.687776624392;
    msg.pitch = 0.569584853615;
    msg.yaw = 0.896612384133;
    msg.rcp_time = 0.491895593088;
    msg.sid.assign("VOXETUHZVEFNBSMSVTIOEOGBHLZXAWSKODUPKUBWFMBMPRVCAHJKZPGXJSNEQGNJTMIPVTUOYXEKURNNBTJSNRXHAPAWNTWIACHVIYOWFSMCVFTLFSKEGAQGICJQDHHLTCWUPLZPZCYWLYQTGROZQ");
    msg.s_type = 79U;

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
    msg.setTimeStamp(0.042529714306);
    msg.setSource(40935U);
    msg.setSourceEntity(82U);
    msg.setDestination(28090U);
    msg.setDestinationEntity(247U);
    msg.id.assign("CCOHLXDPDXLQQGGKTSJVHTWUWRZUTJQYOYXSWMJXXRTRHXCPMPGFNK");
    msg.sensor_class.assign("ZUWVOCJJKRTRZXBHJHIKMLRZYBYPRMIPASITNPAHDHHAWETUGBHFXUKADQFEKCPRRYDWLSPCHOVBURAVIQGNLVMUCKILGGPQQWDSZWBORNONUZXIJSTIZYLTFDQVAOGCMSMZIWTFDBKXCUKXEZBYBEEEFRVADXLLROHU");
    msg.lat = 0.128154588814;
    msg.lon = 0.371929253285;
    msg.alt = 0.192553315497;
    msg.heading = 0.942225349678;
    msg.data.assign("XRYBYWMBCSZJDRJMNXAUHENMXTZMYJQLMWEDKFRXXWCPWPNVYXSFSVNRUVZLOKNINYKGYBZWJSCQFVGCUSZTZOTLHGDSADGPPKDSOWGKJGGPPEOUXQFYQNULDWDCCIVVVOZVNMGEOIGLEJEKQUFBASZOJWTKFBSCCRTFALZHJODHLKVRTKQMIAORFUUQCDHNOWAJCBATPIPEBIPMVLXSFQTEGBINHLARMZHXYUUIHIEIJXMQQBWKFAHTDTB");

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
    msg.setTimeStamp(0.678885828249);
    msg.setSource(33413U);
    msg.setSourceEntity(222U);
    msg.setDestination(15637U);
    msg.setDestinationEntity(76U);
    msg.id.assign("OUDLKAVZXRNXPXVDQPHAITWMXZYKAAWGZVN");
    msg.sensor_class.assign("CAWHANXLKEYIWXUSIXUBXRJPQOFRCOLUPSRUYOTNYUDNZFMGAVANIRZHDVGBBCBIPGSTJSLSOMGDVEIJVETODRVFGWZSCUMXPRFIJKMMQTMBVSWRRKVFHXKCFSVPSLPQHZVGQKDQ");
    msg.lat = 0.543636638412;
    msg.lon = 0.112996035696;
    msg.alt = 0.758068478011;
    msg.heading = 0.71276218591;
    msg.data.assign("ERWWORJBIDEBSVJZTLBPCHKITHXKCDQEGSMAKELAAKXOQOQPLPJHHMVBCUZBYHNMKFN");

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
    msg.setTimeStamp(0.180289010358);
    msg.setSource(57890U);
    msg.setSourceEntity(36U);
    msg.setDestination(30315U);
    msg.setDestinationEntity(71U);
    msg.id.assign("QWNDSIKQYTZIVVZLXREZDNFSKMZWNVWHAYKRPJTMLXIBMPCVOQTDMPZHGEHITFHURYQAJUFBIJBNYPVKDYUTKEDBJCUCYVRLCWDGPXFGNFOEGTLUEJBBVNFWAXAAXRZRIODENENSFXJPPPOICQLTKWYMWWUMUAVIOCWJVGLHRBHBKZFOZJEHTSFZZIUXLBMSC");
    msg.sensor_class.assign("TCTGVGWBHVTWPSWVVWZPUHIUAHNABXEKBCBSUDNVQZJGZCNVZYCCLXFDEPKMGXJSULTXFSHTHRQZZRSXKLHML");
    msg.lat = 0.3591757211;
    msg.lon = 0.268980912619;
    msg.alt = 0.713060233833;
    msg.heading = 0.0770692335717;
    msg.data.assign("AAHZCRJEONSKCRHFSIOOQXLDBTPWSGGUFFCVXGKHCWRPRVRCBXGKTEJHUFEAVSUAYMWZQLQRUHTKVMGJCYTPZBATRIHDLZOZCNIM");

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
    msg.setTimeStamp(0.0378328077884);
    msg.setSource(59891U);
    msg.setSourceEntity(112U);
    msg.setDestination(43922U);
    msg.setDestinationEntity(42U);
    msg.msg_type.assign("UADSVZRFFDLCFIFJKEUKGZDDNUGBMUQIKXLAUXAQYHPSRTZBITVVFSBVDJOZFEIWCWBLKMRMEPJSRTRMGOUMVPMREXCEHQPNTVWGFOYCIFCIWYTCJYAONDO");
    msg.sensor_class.assign("ABSMTLDOBQROASWMWGLFITMMPAUYBEBMKVUATYJGDITJPUGJHWVJTJUDAHTARJ");
    msg.mmsi.assign("FSAQTRJVZBMTFSEDGOXLXVXUUTZTGIPSSMNOHRTQRRGFCHEWJVNUWHJLKSQXPTTUGIPFSVVWKCOITHHXWGAELRMGKRYHKPAQYBEBVFVCKXKYVDTZWPALFZKLBDAFOKUNUTSGEXGCEMEWABOKQNCDYAYXNMUJZCDJADBOXYVRWYOIJYZHBQFHZIIFPVK");
    msg.callsign.assign("GMALUISXOHMHCUKTEDCJFVNDWOWGKPFIUSLWXRCAACCXBDEOWZZIQMRLPIXFFBGFZURCWYQMOKWJYVBMFSPEPIBQPCTYHDLZYGKLBXVDJPHINTPTHQWCLLRTENUMDSAGKFLNMAHUSSLUXLBSJSSKZTIJZODGXMOGUGDYBJBWVNPJYQKKVHEVUYNONRMSPOTZMETBWQVBTIH");
    msg.name.assign("UDRSYIDWOAMNNGYUDOMFFYVJKYAJGBKOZYQBDTDNVYTXNVAVDWKKZIZJAZRSPWJQWMNCNHJYWUQVWTFEOGWUELAIHLXFBQCEHNMQLYESFHSULDIZXSFRFMLXUT");
    msg.nav_status = 41U;
    msg.type_and_cargo = 85U;
    msg.lat = 0.401191116484;
    msg.lon = 0.852016301177;
    msg.course = 0.570684444868;
    msg.speed = 0.129369206274;
    msg.a = 0.188800839891;
    msg.b = 0.91693080434;
    msg.c = 0.915262177557;
    msg.d = 0.749058227719;
    msg.draught = 0.996127829454;

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
    msg.setTimeStamp(0.748598096693);
    msg.setSource(60840U);
    msg.setSourceEntity(47U);
    msg.setDestination(44769U);
    msg.setDestinationEntity(117U);
    msg.msg_type.assign("QKJGAFKANKWGMOJOYMQQAUHAWGLKISYHYCCHWBHFEISOSCOUQXRYHTUKIKMZNMJCEOPWCXJGVIXBMIWUVQSBAAHIJEPTHVQDNQLHDVRTPLFDFLAGOKCED");
    msg.sensor_class.assign("WNZGINUIQZKEWYVOISEHHJYXOMFXSWHEWCCGGNJIHD");
    msg.mmsi.assign("EDLFWQAPSPAKFGYWIBOOXWGVKEHIMTSXZ");
    msg.callsign.assign("HZMHLKNYHTIPXYDGRDCPBBGJATRSGWGMLNXUEPZUPIZROJEIWUKSTUZNVLKIENUQOBNMSKOPYUFKVAKDBAGCEMBTNNSHDCRUFAZWXTCQCGCIMIIBGKLLVXPXXWJVNUJSFAQTYRCJSLUEHWAAHBVYPYJQHPVTWJGLFZRYRCZXKEXIXZDMLSENSQEMEOYNQBFPJORAWKMAVTQHOOWROIMDRUBQMYXCFSO");
    msg.name.assign("TPXRIMQSBFKIYRRAVMTCQVAEWGQZVBCBEDHPVDRXCQSOMQGHNXBXRFLJWADEOZNULWETIKHPYPASHRQJDFHRA");
    msg.nav_status = 204U;
    msg.type_and_cargo = 241U;
    msg.lat = 0.716738742954;
    msg.lon = 0.6896336069;
    msg.course = 0.175111391152;
    msg.speed = 0.531606861634;
    msg.a = 0.156612645474;
    msg.b = 0.419141490438;
    msg.c = 0.82853987681;
    msg.d = 0.962984252773;
    msg.draught = 0.794607496756;

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
    msg.setTimeStamp(0.450435283635);
    msg.setSource(1575U);
    msg.setSourceEntity(61U);
    msg.setDestination(46667U);
    msg.setDestinationEntity(230U);
    msg.msg_type.assign("PSOUYKHBSJAFDNVPALFENMKVONORAFZNNBSWZHSALDTJXGQPDHGGCMCCZHTPFSJLBEUQBXXGXGOEQTJLEWBYNAUQYENPJRBMPZHYWNBITDHCUQLBTPUCJDVYSTUAFCHUSLMJVRKA");
    msg.sensor_class.assign("XUMWBHFNUEVQPECMEUSSRQOYPUUWUOYFBNNPRSJKPUUXFMXFBAOJFDBLZRQ");
    msg.mmsi.assign("RDUOPASBZBISMITJLZPZJMTFDQOUYOTGDQAJKRTIFELRGFQKCEEQHWHEESHSMOVJVJLGPQUWKUZCWBJTUASWNGZVHRMKONILMJWCANUGVODJUCLSQBCRJYFFKUKHNMWYBWOZNUOHADFXNYXVRYHYDSONSGVMTIIBETYFXMYCCAPVISWPRZEZATVROKHIXDZLIANTKBIDXXVEPLYUGFXQXWDMTJQHBF");
    msg.callsign.assign("XZWCBCUUSMZFHYNAHDBFJVVOFGHHFQKIHSQWGBVYDNUKFYLSNPICBMHUWJMYFRKLRTVLYOZYGNJISHAPYGLTGKAAEIJZSWHFETZOOWUJLRDLDQZDSTMORWCMRICYNDPRSMTFXW");
    msg.name.assign("TYSUBTYHTTDKXGQCRTWPALIRXFQTDASXFQEOWYYVSWGQPXVBLKUJNMVWPZSSFIEODLNREBEPCHXXSZULMHMLVAQWVZXRISDWKMW");
    msg.nav_status = 247U;
    msg.type_and_cargo = 199U;
    msg.lat = 0.718804177589;
    msg.lon = 0.743858595087;
    msg.course = 0.871297074216;
    msg.speed = 0.189779613397;
    msg.a = 0.438307181095;
    msg.b = 0.247512922248;
    msg.c = 0.424700810542;
    msg.d = 0.000667860557836;
    msg.draught = 0.987147153415;

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
    msg.setTimeStamp(0.185074323322);
    msg.setSource(33207U);
    msg.setSourceEntity(63U);
    msg.setDestination(10978U);
    msg.setDestinationEntity(132U);
    msg.id.assign("VAIVXKQEWLGNKQOEELZUYCKAPPJHCSGJNRAFGTNFONIJYHUPICZOVEMICLGSQXXMLQ");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("UDSZKIICEGOVGZXJXPQMWDPAIWDUHUTMHYPEVVGDZEEBUSFTQGSBGZKAQEGTKUPYJUWOGZJYKHEISTAFCHCWCNWUWBKFHLPNEOZAVRRMZRJANNOATRITBAYFHFBZNPPIRFSNMQSWMQSHJCNBVLMLROPGYJGMMRWFLJXFDLOYJCSVBRNIDAMPQFREDMYYKBICXLZVNOFXUXVQXJQVAXSOTRGLQLSTELPBC");
    tmp_msg_0.feature_type = 60U;
    tmp_msg_0.rgb_red = 117U;
    tmp_msg_0.rgb_green = 15U;
    tmp_msg_0.rgb_blue = 188U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.62770253286;
    tmp_tmp_msg_0_0.lon = 0.709945280941;
    tmp_tmp_msg_0_0.alt = 0.457471490823;
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
    msg.setTimeStamp(0.444978405489);
    msg.setSource(127U);
    msg.setSourceEntity(167U);
    msg.setDestination(32744U);
    msg.setDestinationEntity(81U);
    msg.id.assign("FHJQQANSCDDRKNZBMKZDYDRMHTMZVXTUTBDTIBSJVROV");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("WMUXMZOBNKBMKMAMGTRKXBCTVFHLYDBNUUUUNTIOQZRFW");
    tmp_msg_0.feature_type = 79U;
    tmp_msg_0.rgb_red = 122U;
    tmp_msg_0.rgb_green = 93U;
    tmp_msg_0.rgb_blue = 11U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.817381029093;
    tmp_tmp_msg_0_0.lon = 0.840893770683;
    tmp_tmp_msg_0_0.alt = 0.227893556378;
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
    msg.setTimeStamp(0.880629538994);
    msg.setSource(24603U);
    msg.setSourceEntity(142U);
    msg.setDestination(41308U);
    msg.setDestinationEntity(72U);
    msg.id.assign("OVYZOCPEKLTDUTZPVNTOYFHKJNTAPHNZLPNHXACNGKARKFAUAUCDZIBPOENBSQDLSVPKYBZEECKXFVECTILIILWBJGQOCQDBSSXVXPDKWDJXIMMLTJHUGNFRQJGZPVIUJHQZEIOSTQWCAIZURJORHMRYFUGRQCMLVNHSQEEWHWABXBNWGMYQLFZANTIXLDQXSOSBGXYJJMTMXLORREFWVBWUPYJVYHYTRCKCSVAKWFWFUSGBPMGGDOYZU");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("MAJPOCDEKJDLGFXUXJRHJMSDMZLABLFVMXIBNHYGNSJWHLTOBXZDLLDQHRIJFYXUIFYKI");
    tmp_msg_0.feature_type = 201U;
    tmp_msg_0.rgb_red = 15U;
    tmp_msg_0.rgb_green = 158U;
    tmp_msg_0.rgb_blue = 253U;
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
    msg.setTimeStamp(0.902689912634);
    msg.setSource(15636U);
    msg.setSourceEntity(63U);
    msg.setDestination(6541U);
    msg.setDestinationEntity(212U);
    msg.id.assign("ZDJGVXDMTGWLFDAQLLPTCUSPTGMRSXGSLCBHSEUXEWFOAWSMTACLNFCXHPINHVKRIBMNXIIUJRJIUZSBFFKCCFWQMBCNBIPSVBUISVTYKGVWRGWSHXPOZNQYLEZKBCEAXKNLYSJUIMKEVIEEPDBKHQPUOWXODAOJYFQRUDXQVJPWDJQZEFZ");
    msg.feature_type = 193U;
    msg.rgb_red = 230U;
    msg.rgb_green = 182U;
    msg.rgb_blue = 233U;

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
    msg.setTimeStamp(0.34938879138);
    msg.setSource(43977U);
    msg.setSourceEntity(20U);
    msg.setDestination(56494U);
    msg.setDestinationEntity(82U);
    msg.id.assign("ZBCELTBMANRACZNYLITMUVFBXPPDRUBZLGFDGMYGDUYNLYMERHTOXNUARYPMEFASPEWJPKUOBTJQFYPQOQDHEOXXOHWDINNGIHKVSIXFHOOYKRKBJJHKCVWVCDGRGGREFAYNUDQXQBWGWITZSUSUSAN");
    msg.feature_type = 187U;
    msg.rgb_red = 208U;
    msg.rgb_green = 42U;
    msg.rgb_blue = 131U;

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
    msg.setTimeStamp(0.87055799649);
    msg.setSource(26107U);
    msg.setSourceEntity(216U);
    msg.setDestination(28345U);
    msg.setDestinationEntity(111U);
    msg.id.assign("FDSBPRHMKSMYHAVAMHGTRAXPMLWPZMFEEODZECRVLJKADNTQTBPWNKFSGNHGGSCOJTIUVOVLIECSVZBCSMVRNCNEGAXDSXURBSKJHUZYJXDXPPMQJOCICAKFCYQBEZWQOEHEUSKCJBCPNWGPXDRZBTRXQDGITIWRVBUAFTXNGWOVNGRPOVONRFYLTTYQNEAZMQLIZJBOLKEXKGIWJTILUMAPOJVYYXMULDAYHJYWFWKU");
    msg.feature_type = 218U;
    msg.rgb_red = 4U;
    msg.rgb_green = 219U;
    msg.rgb_blue = 161U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.400066910504;
    tmp_msg_0.lon = 0.642259844322;
    tmp_msg_0.alt = 0.231224647695;
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
    msg.setTimeStamp(0.792547703564);
    msg.setSource(46217U);
    msg.setSourceEntity(175U);
    msg.setDestination(38257U);
    msg.setDestinationEntity(213U);
    msg.lat = 0.674218698098;
    msg.lon = 0.777421704822;
    msg.alt = 0.900898076445;

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
    msg.setTimeStamp(0.511546750688);
    msg.setSource(33445U);
    msg.setSourceEntity(153U);
    msg.setDestination(49437U);
    msg.setDestinationEntity(36U);
    msg.lat = 0.33756582207;
    msg.lon = 0.849699767934;
    msg.alt = 0.311074006797;

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
    msg.setTimeStamp(0.532192974133);
    msg.setSource(2997U);
    msg.setSourceEntity(146U);
    msg.setDestination(35873U);
    msg.setDestinationEntity(127U);
    msg.lat = 0.735822221871;
    msg.lon = 0.942179168899;
    msg.alt = 0.728176849393;

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
    msg.setTimeStamp(0.559596259008);
    msg.setSource(25047U);
    msg.setSourceEntity(161U);
    msg.setDestination(60334U);
    msg.setDestinationEntity(166U);
    msg.type = 82U;
    msg.id.assign("JPJQBWTFISREZHCXHCEPNOYNUGVJEBKRPPAYFIZACGTGNRIUCOZZQMBECTMAWVLXIYCJJQOBOHNSFDVVIHMDFFQXKMCMTBOISRMWWKJDUJOFOIDNPZVLGAOFMDRRFCBEVBUAUKSHTXUJPTQPHTPISJGKYZAUVDYSRQEPBVPAZXZDNTOXKRABOKNTXYKHKLHCLQJSGLLGRHQUGGLNEDWKLYAXYZLEAWD");
    IMC::SoiState tmp_msg_0;
    tmp_msg_0.state = 47U;
    tmp_msg_0.plan_id = 37466U;
    tmp_msg_0.wpt_id = 92U;
    tmp_msg_0.settings_chk = 21919U;
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
    msg.setTimeStamp(0.673507333023);
    msg.setSource(42329U);
    msg.setSourceEntity(144U);
    msg.setDestination(47989U);
    msg.setDestinationEntity(153U);
    msg.type = 118U;
    msg.id.assign("RWHOENKBHXBZAYLVJPQOSQQLTBIQWQZCZCKW");
    IMC::Fluorescein tmp_msg_0;
    tmp_msg_0.value = 0.627453046476;
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
    msg.setTimeStamp(0.184873316734);
    msg.setSource(48428U);
    msg.setSourceEntity(141U);
    msg.setDestination(521U);
    msg.setDestinationEntity(120U);
    msg.type = 145U;
    msg.id.assign("HNSKFBGDFVCGOPKUFJ");
    IMC::CompressedImage tmp_msg_0;
    tmp_msg_0.frameid = 118U;
    const char tmp_tmp_msg_0_0[] = {-9, -102, 8, -71, -49, -30, 16, 86, -117, -37, -87, -52, -39, 27, 55, 90, -81, -90, 52, 6, 38, 116, -39, 27, 99, 54, 36, -128, 55, 66, 120, -45, -52, -81, -40, 28, 6, -13, 42, -123, 80, -59, -39, 107, -13, -109, -35, -64, -54, 107, -76, 62, 55, 125, 17, -76, 124, -106, -85, -26, 45, -66, -61, 67, 125, 74, 24, 62, -117, -63, 29, -57, 77, -80, 37, -97, -15, -127, -61, -7, 9, -30, 58, 51, -42, -120, 87, 40, -4, -128, -4, -127, -86, 116, -20, -104, 6, -78, -17, 107, -69, 21, -31, -126, -13, 51, 104};
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
    msg.setTimeStamp(0.709332356042);
    msg.setSource(20196U);
    msg.setSourceEntity(31U);
    msg.setDestination(20936U);
    msg.setDestinationEntity(241U);
    msg.localname.assign("DJQHLWULSEYOQIOVCDUCFCXBYZDNATBMSKXWTVZPKHYONBJVAFKQGUPHBTFUKXVQVGYMHNRBFSHRSBHFRIWUIGCMVHPNDGVRIQQGJJCAATFAEOPMPDOQTCSSCPSXHNNRTXUZKXQ");

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
    msg.setTimeStamp(0.0137628184749);
    msg.setSource(1196U);
    msg.setSourceEntity(63U);
    msg.setDestination(50100U);
    msg.setDestinationEntity(107U);
    msg.localname.assign("XGYDBZBVLEFLRIBVABASDAMZPHALEQPSMEITZEFSHIGOKZZANNQNCZLLOJJHVPSXCHVCWPWGAMMASNKXOCCTZVXZQWQWVUKSPMANJKTUDJKPYINBROGTFTYHFLEFHBMDMQJTY");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("GYTZMGBDRMKUTRGCYFCJIMSKBAIXLFZZTZIEWWJFPFHVCIVHGLZDSCEWFGWMPKEPIJSWRJYZERHNVKGAMIEHJNPQLWJZVBVOXROXVRLTDMOMBORBKPBEDJFLWQXIAEPLVNPGGBSYVMFAVYUONNEQYCQPWZABTXCRRFPUMFCOTQXEUSSXUKDANTDTKHAXESBVFSXQOWLTQULQQAQYNAHLBUUPZIGMODNDLUZYYTSGSOJUOKICCWNXHHDHYRACJH");
    tmp_msg_0.sys_type = 217U;
    tmp_msg_0.owner = 18067U;
    tmp_msg_0.lat = 0.635815130453;
    tmp_msg_0.lon = 0.0938251353935;
    tmp_msg_0.height = 0.400304505494;
    tmp_msg_0.services.assign("GYFRYCVOVKOIUHTUUFAPKWOXEOJUHDRTWIEOHLBCDBYBHXRAYQDS");
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
    msg.setTimeStamp(0.604685160389);
    msg.setSource(22363U);
    msg.setSourceEntity(8U);
    msg.setDestination(7584U);
    msg.setDestinationEntity(44U);
    msg.localname.assign("UVTVPWHTDZGIDUPECXVALJLNOMFQSFAZSOVABMZOFVNZWNJPMRUUELECWKAPMHYELQSBTHTWNAGYZGWLKJPFRAZXINVKIYCYBFJ");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("ATQJIYXCROUPVIKRGBYBPVLKHVNEPDHTJZRQYZWTTMWMTMPVKBPUCDVZUJEAGFUFWQZDUXOIRXCPYBA");
    tmp_msg_0.sys_type = 202U;
    tmp_msg_0.owner = 32735U;
    tmp_msg_0.lat = 0.620317227424;
    tmp_msg_0.lon = 0.803600586001;
    tmp_msg_0.height = 0.706299212825;
    tmp_msg_0.services.assign("NKWDMWELNOTJQONMUKOGMUEAFKBWWSVEQURFEETPATBCOSWGQPSAYDVRWDQPRCUPXSJOTLEUFFBRXDATFYYBJIZGTZKLVZXSRDOIMYQRHTSAJTGEIDARVDZXKAWZCHJHYNGPQKQZLNAEWUUQMOZBNSVNIBUMXLTUAYPYGVFOL");
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
    msg.setTimeStamp(0.821848243502);
    msg.setSource(12122U);
    msg.setSourceEntity(80U);
    msg.setDestination(23353U);
    msg.setDestinationEntity(125U);
    msg.timeline.assign("LLENUUNAEHNHRMNPSGZXJKEWJIDVSTXATKTCVWVKGAYFPZRJMDPTMWLDFGCFQCUROBHUVQWUFUFVSXAAEQYMIPIBKRHKMWAJTWRSDAALQIPTNZEYGCDBNYTM");
    msg.predicate.assign("PDTADNZBFZSTOYNDDYRJXQPFIIBZSSWUDOJGBEDTFXQEKBGRYJLTBSXWIIRIKEQWLYOGYCBPFJCTSNNFNAAVXMTMVDGDNGKGEEBHHMSMR");
    msg.attributes.assign("WLWNTMIUHABPXJDPAAEVVMCQEEZL");

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
    msg.setTimeStamp(0.703407812724);
    msg.setSource(20586U);
    msg.setSourceEntity(26U);
    msg.setDestination(32364U);
    msg.setDestinationEntity(199U);
    msg.timeline.assign("BDLKLHWWOWORXAIUGHHBNEOEKWGXHETUMZKTHPSBPJBLTCFNQQRPLPKXLGSRLNUGSDPBGCJIQMMTCYKFZFWAZROVNRQJATNTWVJYCEMGYDSYCOESNUDVVFYBAWPEFPUNQTMZHLLKDEHDEFRMCTSIWKOXHXJJUQQQWOFVVBIMNXKXRTPFNSPZZDOILTJUESJXZSYEAZDRQAFMARUBADIYCAYXVZMCVBBUMH");
    msg.predicate.assign("QVZIKUHRIWWAVZZDTFLBUAWJZUPTKTYQQRBVBFEHWCXKEQSMNZSXGSOZMWMNUQKKBCIOQFJGEGAOIWQXRWABYINGYXQWZAMVVSOGYBEJXLTOTXPGXIERCMOETMSPPKVPAONJLHALDUNTIVXRFJLAZSGHCLPERUTPSYXDKLF");
    msg.attributes.assign("YBXXQOFGXAEIIORNUEKSCPLNBEAKMGLSBRRVDONTLMXOBWFWKWRCLANVJCWYUREVMOEPMUJGHNFIPWFHUUEZWCZXCUTEQOYNWICJRCLOOTSLINKQVEXMMMHJSXIGRZWPQZAGVLRBTPODHPBSTQNFYVYZQJF");

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
    msg.setTimeStamp(0.194956718884);
    msg.setSource(49596U);
    msg.setSourceEntity(148U);
    msg.setDestination(47042U);
    msg.setDestinationEntity(140U);
    msg.timeline.assign("LOSOBRZDBTHCJIZFIXYMRVJZHMVBHXQX");
    msg.predicate.assign("QCXOXMLNEBDBDKVIKWNDTUFVVRIZHNAUXPYGQKOXXNTSWMEZORGYQNFVQNZQGTHSGIHIIEZZJFUKPMGUCTMCXBPGVRKNLFPHZLSWKGBWHHBRQQJVEINULCYB");
    msg.attributes.assign("XAHMCESZILSQPOMLKNHCUEJAABMZFOONKJJTGFENUQIQVHHZFWCCONKVJZESQNJVXWRTHPPY");

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
    msg.setTimeStamp(0.944021865034);
    msg.setSource(43921U);
    msg.setSourceEntity(4U);
    msg.setDestination(57745U);
    msg.setDestinationEntity(72U);
    msg.command = 186U;
    msg.goal_id.assign("ZIMUUQLOSAWALEOQFOGABNPUEIVLZADLCCCPTJTEVLCUPOQQRNUVIZBCMIEYDFGSWVGRWRIVOLBOPRIKXHDWIWTRJVHHXDAOSEXHPJEYTSWFZFOQYSTVSIKTYPQZGXCAGDDZVLGAOWUREZAOLQCFDKXIKFMRJHFTAGPDTJBTJCGWNXYYBMHKDSPUSVMMQHBQKJHYFCNMLQSVYNHAMCNYXKP");
    msg.goal_xml.assign("VCOTNDLHVGOKNXWVPCUNTQBCCGCZWTLFYKMBAZQQGVOEZPSXDXNDLPBRVSNZMMYOWHFQLUBGESWEPTJZLXLSJXJYFIOVEYSIEAXDJFXHCHOMAUWSNYEOMHKWFFBITCLKAONGXDJYJBDHBOVWAWGMUJ");

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
    msg.setTimeStamp(0.669718842676);
    msg.setSource(16248U);
    msg.setSourceEntity(132U);
    msg.setDestination(46161U);
    msg.setDestinationEntity(48U);
    msg.command = 208U;
    msg.goal_id.assign("DUQODIYZLGCOAQETGPWRORZMUYKPQKCKIVTPNFDRERTSEWOZYMCPACGVTKMSQHALJWNXLTGZFUQFPSAUGQVIYJNHOIHPCWVYQRSZIFHJBAXLXRDBXTZRDLXHCHNWMZVCQILBGFLABYTPQOAEVSXSPRHHJYKWJOJGESOLRNOFMHUTUGDJBIMUFZEWKM");
    msg.goal_xml.assign("RBRNUOVNCTJJPMBSIABOAWMECSQZGKQYWWPIVFQKRIETCBQOJADKSEYFKELZSWWIDMNUBUXTGOPNAOJUIWHUERTXDARYFTJLBXVUKRCPYXRZCQCYSLFVGBGWHDAREXJRQVHXUZDFECVHPGNTFYCLIKBEVQAMHRNSMLLKNMQIDWHVJMQLSOGUBKHDVCDGUXOLVMOJPPZIEMXBLZIWHGXT");

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
    msg.setTimeStamp(0.681592331029);
    msg.setSource(50067U);
    msg.setSourceEntity(114U);
    msg.setDestination(68U);
    msg.setDestinationEntity(76U);
    msg.command = 58U;
    msg.goal_id.assign("IRYAZGUBTLFPHDHIJKONUFYUFJRLFAKDBMDRKOLKVUMLYSKHXPVCHDPCEKHLKJBBFTLNZOSZROMMENOWRXWGJPEIGDVGVHQTQSBWDJHMQXYFAEXLQXCOABTSRDZAYKPOUITUKAETOFYCQZFSENWIAMXCLUINWDFUYLXBVNQPVMXRQDBIWFWCITCRGXSMVLRJNGBEAHQPRTJZQJKMAIZYDEGGVSPCHZZSJQVGPSUIXWMONYTGWOAH");
    msg.goal_xml.assign("XCSNLGNJHYCXTHQPYPCOIURLDPZSLTYFEAPMJZDAKCYQIQHBSUUMSMGOGEEAFWXTZMAQWNEEDXKWMKSDNIDWGGDJFIXVJTAPLTSZFNTMPZIVNNWUYHIWUUSTBEVFFCZNBOHOZLKWFTVUSIOPZDAKFDJGXEFNAXZKDYNMIKVUHPUCKODQSLCTRVVQBWYRVATXBORYXRIJQBWHJFQRLGCGOBQUGLHPWVHHRCPMBYRJSMERJLLRB");

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
    msg.setTimeStamp(0.0312397337565);
    msg.setSource(43454U);
    msg.setSourceEntity(151U);
    msg.setDestination(14224U);
    msg.setDestinationEntity(144U);
    msg.op = 3U;
    msg.goal_id.assign("VNYWDKXZPNGVQEIVFKWSWZUWSFRLI");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("AVTNPDFLCBFYTPC");
    tmp_msg_0.predicate.assign("GLZXPRYWXFNQPUOXANUFHKIFTNOXAYEMOWAQLNXGDURTOCDVPSWCGADDMVZGOTPQQICKHQYUNTDYESLQRGGYOSZFBTVKDEBVFRAMPVMNGAZZMCSIBWYWOBJRZFBEUBRUQFNDBJWKDCEJEKTHZSCSEPRPEQZMSOSUVILTWWLJJHEYLOFVUGGWWLDSAYHMXUAIAIPECRSLJJJKKPQZQNIMYHJMRVIHXHPZDCVO");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("RBKKMVINONFHDTTYQZFZEQVCUHENQJITBDLQHMEUSHMXMCXVVEJSXVDWTIEPDSLNF");
    tmp_tmp_msg_0_0.attr_type = 121U;
    tmp_tmp_msg_0_0.min.assign("LVJYTYOPXTZZRMHQFKCBDORIMDINAJHZACNPEJSBNPLOSOEHMDZMXUPQFJIIFGGQYGAUPGCUQVFJWWVLEJVYZHXTLPRFRLLDPGWUZFRDAVFCZNCJWWBEWXASKFNTVRPSXNCRVOKWBEEDAIXMUWYJHUNKULACROPKGXBRHXWQKLMMELZ");
    tmp_tmp_msg_0_0.max.assign("SNLVTDOECADNRXWOQMFUGKPYHLHGZELIDKRNALQJCHSWYUBETBXDDUHIGEFBVTECIUMCFXXFXIYJFZPKGJFQTOPNGYUBEDPOPAWPSXETZDLJQBQYVJDJHOWBSWDIORYMBKREZVZHWCWQHNTHCRAYIGFBNIXZUSGVQSILRMWVRZRCSFHHLSINRY");
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
    msg.setTimeStamp(0.55769849941);
    msg.setSource(36729U);
    msg.setSourceEntity(220U);
    msg.setDestination(8174U);
    msg.setDestinationEntity(107U);
    msg.op = 203U;
    msg.goal_id.assign("WDECOECPRPEWQIGFANBQGXFOYLTWTXFGTULYZDLWPKUDPHNSQNUBHCAFIDRZYMDJQBSBVOTNYDORZIDIIQEJHSGXOGCCBSA");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("PCNFFSUXPEORIJVMGBOUHCRSLMGYWHKIMBPYHWDPODTSSZUZMNLGVPAZOTFXTCEKKERJWSFIDYRAGDCRYOSOUWFQXBXVAU");
    tmp_msg_0.predicate.assign("HRIQKFJFGCGZYKXGVSBHRJJBYNLPDECPKENHNWETPDQPMCXOCUYOXXCTBDTFIHWUEMLPNGSVRVQXVOXTUFMYCDGMF");
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
    msg.setTimeStamp(0.548143769475);
    msg.setSource(21071U);
    msg.setSourceEntity(60U);
    msg.setDestination(28756U);
    msg.setDestinationEntity(55U);
    msg.op = 239U;
    msg.goal_id.assign("DDUKTIBGFQJIDFCDGLJOZNMTHRSBAGJBGSYEJTQVLBOPCITYJPIFUOAROGWUUUSGKBCBKXLNNFRXSXWMAQEZHULNGJRHVZCIWPTCQFWJQLGFDRBUPOMENYKZNWCGVTRNIJAZVPLJTPEKOVCH");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("NCYFOUUCGSGWMCJCBJGEBQJWEMFKQKJNTWYBFXUNNODLDHMPNAIODXQTGBSXCIVURJJSUACGDIHNGREYFVNHTOJGWFSLBBOLYLMLNAQZYLIPPKKFZUXIRGJEKRKRDDIMREITXWRAXZBPHAMGPRROVMPMCHIVIETYSQDSOYVQWGOFCFAFNEDZSZTUWXWOLVQZZBYKYILSTHOSPKHLEWYVWUXMHDVZVQPTJZQXEHKFAACTUVPZPDBMUHECATQN");
    tmp_msg_0.predicate.assign("FUDALYRJJUWUXSSOFZSJLLEERWLJQYEOAZANHWCYHZMSVP");
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
    msg.setTimeStamp(0.948646726695);
    msg.setSource(37464U);
    msg.setSourceEntity(238U);
    msg.setDestination(51287U);
    msg.setDestinationEntity(237U);
    msg.name.assign("WULHYALMRECQMEWBNGVJLDBBGIA");
    msg.attr_type = 248U;
    msg.min.assign("IQHJARLCUNIKURLAGYOEZBXYQMWALAMMLBYNZYSKPXFQKXWGQFVYSIASSNBGOZZYBVXEUCOXFSDLVOPXCWDQHLUDHNREMRXPTNCYMIQUTUBFTZMDEUJOWKKVMJRJKEVIAHTPGUZTLRFHGTDUWRJWPGWMTNHBWSGJQXCJBRANJETROWMQFYCSDVHHQZJZSLVKPOIKLNEXQZHMERFNGAVA");
    msg.max.assign("PNKMXWSUIXPSWBPPHCUNEMYVKAAXLJBUAFHYQAG");

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
    msg.setTimeStamp(0.816293723761);
    msg.setSource(43448U);
    msg.setSourceEntity(181U);
    msg.setDestination(16103U);
    msg.setDestinationEntity(121U);
    msg.name.assign("ONNELNSPJIVZFNBEFWCYMZOSYNZDFTWYJGBDTGHPODGBSOQXJAMOERKWQROFXRCXEEAWTYTPUNKABXFWRUIVSHJIMDPQBEPUVWRFQJQCZKJLKIAOABWKYACRYHZYGHRLYJAXCGLFZSSTHLDQYVXWUHM");
    msg.attr_type = 245U;
    msg.min.assign("DBSEXWVEQGRGCFFGAAPMJFEZIFHYVF");
    msg.max.assign("GNGSBZJMBOVEL");

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
    msg.setTimeStamp(0.235800610313);
    msg.setSource(13093U);
    msg.setSourceEntity(151U);
    msg.setDestination(29210U);
    msg.setDestinationEntity(81U);
    msg.name.assign("IEIOMATRGYYZCFFNQXEOPLSCKEESEXUGUNOBJBGGAYMZJZUVMOLTHGPUETULDSPAXGMOZDHFJIMPKHUDGQACTTBGRCTLRJDLLXLSSCJDDRIKUROXGZCCQRHYWIQXWZIKGSZMNFEKJOWOWUVZUPAXFAPSILMJFWYBJYNQNTIARMDVFMQY");
    msg.attr_type = 235U;
    msg.min.assign("CWORFMNXZWRGDRCUOFRIGMCEAJNPEZAEBLGKAISQFBQUOWMNBVHSOZSCHOJVMKXENTKLHMHOQWRUJSILVWLDV");
    msg.max.assign("GAAPJKCZPUJHTKXBLYEJZFUEBDHKTPWUYRGDPIDISESMVVNFNEWXVAWTUYLCAIGMETOCOTUXTPQQXTHQYXWQMPHPWHELJAVXBRZCMIGZYSGHWBTTVKHDKZQ");

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
    msg.setTimeStamp(0.112883138834);
    msg.setSource(22929U);
    msg.setSourceEntity(135U);
    msg.setDestination(15234U);
    msg.setDestinationEntity(180U);
    msg.timeline.assign("MIVJTYWBRNBXHIYVAQGJWLTIUOMSKDDWMNMJGEUWLRGEFTEPGKSZEBAQLEVPRNPXXXWCRPMTLXQGYFYUBSKDUKKHMONZMUXSWHQNCZQDOULLHXKMJVBFYAIOLZXQCHLOGFFUMDPACQDHFCGTZNIIOEHEWRVFIRTIGZSHRDXFOCVJABNGAISYBYOPRAUCSBNPAX");
    msg.predicate.assign("RJLCIGMWLDNVQNDGLCGJXLHXMNTMYRMWKDUKOFFYHGBMLKAIUECNSDTZZVNRJEOMZKLYWXSYIXXATTUXRSAWDNZSRUWPALC");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("GCLVZGDWQIIVQWSRHWMCKJYPILXPAJOLPVGREDXYOGTUKQVDRQZWHENMBDMTOAEKXPFIECMLRYHUUGFACAQXBONSKSFFOYMJTFTAWBDAIYEOXRXZFGUDQXNLBQXMKKGEEMPWIIOTQRJLBHFHXVBYWJTCVABUPVNCZDNATFHSWZHPVZPMJZCORIRBUUREGIMEUKVWTNYPTBS");
    tmp_msg_0.attr_type = 106U;
    tmp_msg_0.min.assign("UUFQMYWOUXCCKEQXWECGPOAYZXUTGGWELUQEHUORUVQMCPISWJQBIGBPRVCDQMSCRPMZAQSIYIYAMNLBVFROHHLANVJTDDPAPNRZRPJLBJVJQKHKKDYXWFMSLOIIADRNBEGKKINACNSJZDNLZHSTOYJJDXZGALFXBOBYMMXKOCFRADISBEKGGRHWKMDYDXTTMNZVETPGTQWWSTEFXFHWPZFJRCTVIQHZBELNAGSENVWPUZFCKF");
    tmp_msg_0.max.assign("CVRFATCMQYCJXOVKPVTKMXUFMQRQPVOMECGHBURXEBJVSNJPWIPGOHNEUGNSKELZSOPHRRPLSOJIFGYDIYCADQRIFZETSOPSKWVDOHSAGUUBXNYAYLBJADZDYEPHLMKWLRGLZZFTXQBEESWIWTAKTQNXEMXCDOWEMXWZQKAJXOVJZVZLDGQDUYAAIDVIYFTGUSICTRRNBJFBWNVJFKKHOQTAPJBCHGZGCNMN");
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
    msg.setTimeStamp(0.62723020354);
    msg.setSource(53386U);
    msg.setSourceEntity(90U);
    msg.setDestination(49155U);
    msg.setDestinationEntity(69U);
    msg.timeline.assign("KFMGDYTECTHUQITUBTKUAQSXLFLFUOBLYDCHBVGQEWNGJHHRUPVKROTGJDPSNLAQMAAJRTXIDYKMFLCPIPVWRBYBIKCLBZFONCTLOCAWCTMEZCSMFPWPXDLMAFYDHMPHHXRQVCBZHJSBQGHEJJWFWUTTENEPUOEYAIXVMGKFFOCNVIBRRGYPMKWAYJKQSSN");
    msg.predicate.assign("MKCRQQRDPJSVBJKWKYIVSHPFHGUNUTEHLRLXTIGRZKTAJRDVRHLLBJSOVFZLQITFMMCPGCAIADPMXMYELXQJLYTGZNUXPXHZZGAKUCNNIRERMFNUADIDHUACFJGEOFWXRBVZVUBDONUBRSDJBFVNEBFEZYKBCTSTDVJAOALVSWOLKAYOOXYXCVPCHPMTYEKOUTYYGI");

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
    msg.setTimeStamp(0.867785650983);
    msg.setSource(6813U);
    msg.setSourceEntity(182U);
    msg.setDestination(19278U);
    msg.setDestinationEntity(63U);
    msg.timeline.assign("INTGMIXUPVZCJYKPAWCQAKQSJIEQOMKWGDRCNPEKPTCMWYYIMAWGBTDDYOXCFOBLFRPKVADNEAQRWSIIARJHGGUMLXEDBGBJTZZGATJSNRHXKBYBHPMDJBQOQTPWNCXFHVKXKI");
    msg.predicate.assign("YZXEEZNEYMNTRYCYIFOB");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("XDHREWDBDQTHBGWVNRACDQSOSLAMUDHLGHFTLINBVNMCYWNDRTLBQGXEDQHNKXBYZRQSPKEYCXXNHYFVASSGPCUPJKBUTONAVARRXOCNZWO");
    tmp_msg_0.attr_type = 69U;
    tmp_msg_0.min.assign("BRQXDHPMZBCWWUMEPXKZEJNOWMKFSHVDEFCJNISHAFULFTTLFMXXVEOGJBFWLQLHYKOWSHCITWFRDZAGGYYVCVVAYFONAKXJBPWZZYTGSOZMGLKCURRYOCINZGSMQCDBLPWJZRJTIPUTAQNSAUNQQUJIPGLCDEMPVOBYEBNQAUXIWHDYKNXGTLRSQKVCEAXADIOMXITQPRUKXJISRRNNMTGPOIWJ");
    tmp_msg_0.max.assign("TFHXJDLVKHOJRAOMLZSDGSGYEXCIHXWQQLICRZRZQSWWEWWYVHUGHJOUKWJIZMLKSOFHVKERZPLSRFNZWTYAYOFGGAIQHDXAPTZZDMCWIQVTIXSTWQQKBEAMQMBBJNNGPBOCDTPVYVJCDHKFGFNMMEPAAZNLIPKAFIEKPXCLVBJQBREEJLAFVWUEUXOBZDBGSJTLIUPTYOJXBPDYFHPGSCGVULDOXXSMSRUUCDN");
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
    msg.setTimeStamp(0.313208602315);
    msg.setSource(15631U);
    msg.setSourceEntity(12U);
    msg.setDestination(37382U);
    msg.setDestinationEntity(111U);
    msg.reactor.assign("CONGNHCWETFLZSBQYQRCGEZYHPTLCZWSPFRAHUHBJNJYOVBTFPSRKYFDELMMBVMEVYRPUYHCJUOOCMYFYGMWXVWVAJDKTFNNHJUIOUPIJDSXRGOLVOOCQZQTWTANDPXLLCIRBUEAWNDPAYGUZIAUKWVSQXZCIFTKJSMWMPIVJXRIDKZMFQXTTQIDXHZRRKHLDZEFUXWXHQBAKGSGQBBJKUMEWEEOCDOMHZL");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("QLDCGKFGZMWTIMRMVXUXCELABNTNOLJVAEKCTZYGHXTVUXUAQRHJJKQETBKOPPNRPNAGGHBRG");
    tmp_msg_0.predicate.assign("AOASRHIKZPWBTWVSOVDXAUMJBAVEYYGFYQGBOIRLGGOOEOJBSCDTDBHEMZYHSPWWPEUCFHGPTIJEDQHFOISQSJFNRRLNKIXSBXMZAPCWNURRKXKZKPGEKCJOHLCPMXQRLDSHLQVFNOCSJDWETPDLCLURWNBLXXGGYNWUVZAIXAUUITAFMEGLFHYMAYJYXHTIJEGZBZKNURZFHUTQVYAKPDNMTJPLUKNNCF");
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
    msg.setTimeStamp(0.207197043334);
    msg.setSource(55222U);
    msg.setSourceEntity(7U);
    msg.setDestination(62545U);
    msg.setDestinationEntity(112U);
    msg.reactor.assign("JHPGGQTDHDMKUMPEGITRR");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("MPMJQDXQVTXUHDPCUMFGNELDNGKCBJOYYVO");
    tmp_msg_0.predicate.assign("RMJLTJAAWAVDHHLXTWFOUCPDOQGIEPJNOEBGQJAWEKQSZCYXRVFFCSNQSWPLDPFCZLUSRYMZLAFIUNUTWIKCKVXTGIIRHBLYJHADGWFBWTPKQLDUVSXLUTYVJMKSEGFGGJPMJEOQZLDRVUXGYATDXZKIVRKSRQCYVQFNVUTNQYHBBKFMWCWBGJNGOCRBTEMXFDBAZLPIHPUYIYEHZNPNSOUEHMVONEAISROQPCCXYBHOAMM");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("RZRCGVVYVEAJTCUXUVKVAXKEIZFQWBSJHFBCRGDMHQWXMQJUZSMLIPIDQOKCJBLEMVATRZEABYQINPKLPKQXXDXYNYXDMGHERAFFPSBIUIPUMRRIWNANZBXQKOWZMFYPOVNZXDGJLNQLJYUGLNMRTCPCKVTFMWKCJ");
    tmp_tmp_msg_0_0.attr_type = 124U;
    tmp_tmp_msg_0_0.min.assign("YLGSHQIVLSMEHBZOLFXHORAJIYVOTUIMETAYTNBTUTZLHAZLLCYPEEWXVFXDPCYZAYPVZDGSMCNEGHEPIDMHXGTWOZSVQMPQCKRKWDUDAUAVXPTIHXNQAWRCSCFPHNJRBFBIZUKUNQWQBSDDBOKONJFRVFIJYFQSNMGRAZLBKJXHNRWUBERQJTLDIQWXPUBXJJVOMCGGYSMEWGKKPEIKZSLROXCFGRWJQOSULWGKJNYUFHANIMMPBYCZ");
    tmp_tmp_msg_0_0.max.assign("GPGAISIDECFHMOEGYLERMNELOXFIVXWWTZBXGQFWGYRDKTDARNGPSKCSFQVFKQLPVRTUBGNOWTJLSYQVONEVLZNKECBBJWQZPCITLPSDLFUHCZRNKENOMKBIDUIYAOOWLKJABHPWYMDUEMZNYRHPXKTEWUFKQGBVRPUQLFXMAGJVNQHXOMPYMCFYMJGXVDFXXDUZOIHAUQPIWABIJB");
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
    msg.setTimeStamp(0.348240341895);
    msg.setSource(23791U);
    msg.setSourceEntity(188U);
    msg.setDestination(13098U);
    msg.setDestinationEntity(185U);
    msg.reactor.assign("GNLURJWFSRLGDIHFMKXTNWSTIUBNCXOKHPNDFWYEZSXJMQCKGSYJBIKOOGBOGKUBWAHZUMMOXJQKCQPAVQWPKOMDWGYEXKBNJQQEUPRTXPBMRKDRJOUVLHMEFPRRSAYENXFQZRGSWRMCFZVJSHEBIVXSLTUNYDEALHVGEZDWACYZLEDIODYWZUZILNGMNIQSPVIFDBOVCDTLZJCTCISPPAHNFTOUHVGXILTHCTXCRYLYHQFAAZMVFEQ");

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
    msg.setTimeStamp(0.219609785258);
    msg.setSource(16752U);
    msg.setSourceEntity(126U);
    msg.setDestination(40651U);
    msg.setDestinationEntity(225U);
    msg.topic.assign("ZJFCNOCUGOPQOAPTGTGSUWZIJILNTFBXWIDPUMLSJTHFYOFIUHVCBXDDJNPWRXRBNOGVFBILBFTAOVHEWNAVLMMYYVKSSTKESZSNMUSRRKDTIGKSETHJGEWQAHUHDQXEYZYHXWUJLNXFKQEVGZVGFMCMWCVZBDQYXZRKKAQUJJRYXMROWCKPQLEROXHPBDCDTQKVQA");
    msg.data.assign("CNIVFWTKRBEMLDXGZNQZSEAAOKHLMHLHKYXWWTEUBXNSPUMBTVQRJYDQFDGOIFWZLEBNMNOIPFAKTIFVEQLWZFZRJPABBWAYWSUIDAV");

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
    msg.setTimeStamp(0.244060640462);
    msg.setSource(36683U);
    msg.setSourceEntity(178U);
    msg.setDestination(4593U);
    msg.setDestinationEntity(131U);
    msg.topic.assign("DFOYTKZYSJDVWDZZLTNBXEOBWGFMIPYUUQXHRPYXJFQUUTCQOPSSSQJSSWKTODTMTVGAZEKVJDKGHFRGBMLRCYGSNVAQEMNCWCJCBW");
    msg.data.assign("CDEODGPIVAQLWPTOZSWDUVHXJLWOEEBFWKLOQUUIFETWCBRJIVZASBFSEAHKJRTVUBRPNGPRNXOMYLYDBJTTORNBMOZXKHQI");

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
    msg.setTimeStamp(0.123322360897);
    msg.setSource(25051U);
    msg.setSourceEntity(108U);
    msg.setDestination(31701U);
    msg.setDestinationEntity(37U);
    msg.topic.assign("URBLSFZLQWETXOEAPIWUOLCECKIRASNMXHMHYBAGEDZYBUQKRSKPOPYHTXFQWRDPEMJJBGPHKEPUIFCYUKCFVVDNCEAGOVRGJBTWARSGTMZUGVEJGTQIYOGBMUDOSALGYNKMLFCHWZDLYCQSAXXWVNNROJSCADPQHFMXZNRYNNQFZQRZMBJHHUMNIETQXVJLMWFBPBZTVRPXUOYKTYZKZACUFKLGLIKDOIWQJXJBLT");
    msg.data.assign("XEMSKZVIDAWHNSLSCKWZTONQLRKOWZLAFBIHIUDJBEFGUNUXTTGVABVUHFWBDXSDPPLTJJKZQWOCEHVJLAFRSLZMBMUMESOTVKNNFHEGDFPDMGILAIOPKWPYTTDJPMIZVBWYWTRIYUEYZXSQFYZMUWRHKJGSMQG");

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
    msg.setTimeStamp(0.0197552053206);
    msg.setSource(25348U);
    msg.setSourceEntity(252U);
    msg.setDestination(62953U);
    msg.setDestinationEntity(206U);
    msg.frameid = 213U;
    const char tmp_msg_0[] = {-67, -52, -16, 89, -109, 121, 27, -12, 13, 79, -40, -34, 97, 112, 100, 19, 68, 46, 80, 101, 109, -2, -38, -52, 94, 36, 81, -10, -95, 10, 23, -54, -121, -117};
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
    msg.setTimeStamp(0.865261597916);
    msg.setSource(25011U);
    msg.setSourceEntity(232U);
    msg.setDestination(24063U);
    msg.setDestinationEntity(85U);
    msg.frameid = 24U;
    const char tmp_msg_0[] = {-46, 75, -73, 8, 123, 9, 101, 90, -46, 60, 41, 86, -101, 86, 112, -26, -112, 66, 57, 19, -15, -1, -42, 91, -31, -73, 99, -103, -109, 73, 108, -114, -30, 101, -11, 39, 12, 5, -94, -19, -63, -11, 45, 3, 56, 1, 29, 35, -114, 108, 58, 78, 79, -19, 34, -115, -114, 112, 87, 76, -34, 70, -100, -96, -121, -70, -12, 11, -104, -64, -80, 2, 25, -79, 52, 109, 70, -47, 113, 79, -4, -60, -89, -77, -104, -87, -99, 92, 105, -33, 53, -35, -47, 58, -38, 71, 6, 100, 29, 119, -112, -115, 94, 21, -29, -48, 8, 27, 112, -15, 73, 70, 53, 53, 61, -125, 28, -50, 49, 33, -97, 22, -2, -45, 125, 21, 91, 21, 26, 88, 75, -69, -92, -121, -38, 63, 83, -98, 51, 100, -32, -93, -53, -21, -70, 114, 10, -65, -124, 115, 3, 71, 74, 52, 33, 43, -34, -19, -28, -79, 11, 26, 98, 26, -9, 125, 49, -49, 25, -105, -2, -108, -119, -23, 32, -106, -60, 68, 43, 115, -96, 12, -17, 22, -64, 68, 53, 117, 31, -80, 53, -49, 63, -83, -124, -89, -95, 14, -91, 91, 125, -81, 99, 62, -59, 8, 66, -61, -12, -63, -103, -126, 11, 48, -100, -13, 7, 24, -105, 95, 110, 73, -74, 78, 63, -54, -59, 102, -89, 15};
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
    msg.setTimeStamp(0.120538056875);
    msg.setSource(570U);
    msg.setSourceEntity(202U);
    msg.setDestination(53594U);
    msg.setDestinationEntity(206U);
    msg.frameid = 152U;
    const char tmp_msg_0[] = {19, 85, 93, 111, -39, 13, -15, 94, -88, 13, -12, -24, -112, 117};
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
    msg.setTimeStamp(0.560133654887);
    msg.setSource(21084U);
    msg.setSourceEntity(216U);
    msg.setDestination(22543U);
    msg.setDestinationEntity(88U);
    msg.fps = 161U;
    msg.quality = 75U;
    msg.reps = 35U;
    msg.tsize = 135U;

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
    msg.setTimeStamp(0.938869441173);
    msg.setSource(415U);
    msg.setSourceEntity(104U);
    msg.setDestination(4788U);
    msg.setDestinationEntity(121U);
    msg.fps = 4U;
    msg.quality = 115U;
    msg.reps = 27U;
    msg.tsize = 172U;

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
    msg.setTimeStamp(0.949593729667);
    msg.setSource(15601U);
    msg.setSourceEntity(100U);
    msg.setDestination(60806U);
    msg.setDestinationEntity(235U);
    msg.fps = 177U;
    msg.quality = 83U;
    msg.reps = 239U;
    msg.tsize = 152U;

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
    msg.setTimeStamp(0.74549057232);
    msg.setSource(1336U);
    msg.setSourceEntity(151U);
    msg.setDestination(8400U);
    msg.setDestinationEntity(114U);
    msg.lat = 0.669070911638;
    msg.lon = 0.266545302903;
    msg.depth = 4U;
    msg.speed = 0.684952744312;
    msg.psi = 0.174885932673;

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
    msg.setTimeStamp(0.88526499226);
    msg.setSource(64251U);
    msg.setSourceEntity(19U);
    msg.setDestination(44087U);
    msg.setDestinationEntity(149U);
    msg.lat = 0.133185607575;
    msg.lon = 0.389936075347;
    msg.depth = 236U;
    msg.speed = 0.326259533104;
    msg.psi = 0.0412900712535;

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
    msg.setTimeStamp(0.0177888637014);
    msg.setSource(41554U);
    msg.setSourceEntity(228U);
    msg.setDestination(5797U);
    msg.setDestinationEntity(160U);
    msg.lat = 0.146983603713;
    msg.lon = 0.141001530198;
    msg.depth = 198U;
    msg.speed = 0.216692625254;
    msg.psi = 0.51366419538;

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
    msg.setTimeStamp(0.983000755136);
    msg.setSource(60801U);
    msg.setSourceEntity(106U);
    msg.setDestination(9188U);
    msg.setDestinationEntity(181U);
    msg.label.assign("BOHDYHSZURNGISECEGCDJZDWXSESQGYSVWZUQCQRNWZHXPRMKEIGBIXFMECVHFCOVSGXMWZYRMNWTIZTNAQIYYXFWZUQANOTQRDBOAKTFXMFBFGNVVJIFISGKOHDUGADESIYVDUPFCDTKPKLNPORQVVQOEQAKTJDFLUNHLVADMLQLRARLVLMNWKCHZLUSPJLHWJZUWMYSXPUMXTC");
    msg.lat = 0.679196144946;
    msg.lon = 0.0890471901052;
    msg.z = 0.557543195556;
    msg.z_units = 170U;
    msg.cog = 0.895065151731;
    msg.sog = 0.620364433206;

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
    msg.setTimeStamp(0.0433902154842);
    msg.setSource(24770U);
    msg.setSourceEntity(228U);
    msg.setDestination(32569U);
    msg.setDestinationEntity(122U);
    msg.label.assign("GREPAHCHQTOAFECPTFIGKADTPHRMXPZRYCQMBRLSSHXFWIXAEH");
    msg.lat = 0.793527077888;
    msg.lon = 0.365649199917;
    msg.z = 0.388847706783;
    msg.z_units = 60U;
    msg.cog = 0.464065611835;
    msg.sog = 0.0108572758024;

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
    msg.setTimeStamp(0.822375809513);
    msg.setSource(24938U);
    msg.setSourceEntity(120U);
    msg.setDestination(48442U);
    msg.setDestinationEntity(58U);
    msg.label.assign("EBBSCVORLGZIYZJZMIKBMRYWWW");
    msg.lat = 0.736170064219;
    msg.lon = 0.614322319395;
    msg.z = 0.57436574732;
    msg.z_units = 216U;
    msg.cog = 0.588446361394;
    msg.sog = 0.745641022392;

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
    msg.setTimeStamp(0.37821603408);
    msg.setSource(22066U);
    msg.setSourceEntity(3U);
    msg.setDestination(11303U);
    msg.setDestinationEntity(178U);
    msg.name.assign("RMVXWEOYWPDFFTNDMJKLBICQAMPTOSKBGGGUDQPHXLLEEHWACDSJLROPYHQZWIBLNHFFWWLAIDPEFZXBNMCSCGOAANBKTYKCRUGYJSUCAHZIBJQWZFGQGEFQNUURRXJJIXIHVZSVOSRWIDMZESYVXPPITRYWNOBYANEDFAPFNIVIMZLHHTMNVNOETOAQMTMVZKBVZSMUCGALUKRXVJTR");
    msg.value.assign("DNVNPTKCZNHKUIXIBMACPTCEPXWCPFERQWRYQHCYCAQTYYLLSWHLDIDXSBITTSGPIUEZYIEOUESDXEGHOWXHCMGWKDZNQUVVSWWGTVXBZYXNZJHZLKBBZUEMGNDMSJFPHHDJBKPTVMPJVMDONFIWNMJUH");

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
    msg.setTimeStamp(0.0683946124859);
    msg.setSource(56597U);
    msg.setSourceEntity(51U);
    msg.setDestination(61601U);
    msg.setDestinationEntity(139U);
    msg.name.assign("GYMRNDXMSETDATMLOZLPJRHKNWYTOCHZPBTGCIQVRXXGHJCUEUZWRFGUYAHKFVYCOXJEXZETMWMWSRIXWQPXGVSJYKVFZVEVCHNGODULYFADDOVOHNTVICLUIMSPKNPWHSNODPJYNBNJMFQMLFURDTXBDFGIBVATKAZLJVKAQCNOEIWLRBAYUFKAASJBLGUWQ");
    msg.value.assign("PIEXCIMHCHQLRYYKOUXAGAJCAYWELZWEQDRVFYLDSRYGKHPZTEWXIVVQFMBLZPDTQYFVXNQNJLMMKMQKDGGDOBBFGIEWLSBZOAMURTDHCUFPSYVANUSLUGILDRIOTSSBJPFAOSCATXIRXPHQJQCKMZMPHJMWXSRRCTRVWMSJOPKTEOBYUTYKGONALUBVZFHICZNUESWNEKNQPJJYHGCBWGJVVRKQXKFDNCNBJHIOWXAVTPUOFTDZXFEAEDZGW");

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
    msg.setTimeStamp(0.574376041983);
    msg.setSource(46913U);
    msg.setSourceEntity(148U);
    msg.setDestination(2650U);
    msg.setDestinationEntity(185U);
    msg.name.assign("EQDLZTRMQFCPZFONPFISXCAHTTZLXJUVDGFRIGWWWSVZULRYQJHIJAAXPFFVVTUBCALVAXKDUSEHYWRDQGKKTNSGTBLECLUTDXJSIPRFWNBWZYJORTOUESGNCBERQKODXEIDLMBXZSDKWSIOINKEQYMNHIZFGERVVJAMQXGHJFEMYPOZQKKJLPVLZYNVSTYGINCWUDNHOJ");
    msg.value.assign("PSVIUNSEUVFRZQACLHTCGSHPVZPISJCGYOXBFEDSGDAPBXIADIXMHTBUQYYWCJVGPTUQAPRRYVEMZCAZEOXNWY");

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
    msg.setTimeStamp(0.134793224043);
    msg.setSource(555U);
    msg.setSourceEntity(132U);
    msg.setDestination(23291U);
    msg.setDestinationEntity(198U);
    msg.name.assign("RZOVGQHHDEJWAICKWWOCPJUMEQEFNFUYLWYJXLXDUVWUFYXZTRIGKKOVWSNGDPFGQRSPAFEOTUBIPVNXDIPZNUGJQYVXGULRHOFAZXZVDYRKNALTEQZAADDTTKHVLBNMC");

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
    msg.setTimeStamp(0.49874811376);
    msg.setSource(50165U);
    msg.setSourceEntity(239U);
    msg.setDestination(677U);
    msg.setDestinationEntity(16U);
    msg.name.assign("HXJAFCRRYJFRACDWNKPKKQWXJTNATWLCWSYGZPVQMSIGHLDUCXEMTNJDRTHHDXGNCOKATDJICGQP");

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
    msg.setTimeStamp(0.0981769289055);
    msg.setSource(31955U);
    msg.setSourceEntity(124U);
    msg.setDestination(6830U);
    msg.setDestinationEntity(210U);
    msg.name.assign("ANNOBKGFFUKYBWPZKYRXAYKHCETNSVGLYZJLJKCMTWINDAJNZVGYWCVOUAPRKJEFQFECGRNOMLHPPGWCQBEORXFOBAIOYVNUUMADWRMAXSHPCMDSHWSHTBALVWIRXQDMXHLPWVGTLQMJDEIZHBSSXTQXEZOHANKUZTQJPQBIMBCLSFDJEIZMFDXEQFIWLMUHIFEZPYLSTRJLQYTBZDJXRUVKPVVCCJWZBGHOTRPVUXSODSKAIUYNGGCYQFOT");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("CZMKXILCZLWMRRICIFRDUUDZZMUYTWJJSABTFPBNFXOSZERAVHQGBPPPQZYDGUYRQSFMTBZBEJUTZVKULQADNWKHGPXNMFYSYFC");
    tmp_msg_0.value.assign("HPFYNEJEUJMCTRXPIAUQQGKNZKJSTMWPRHEMXLLBIHKQMXSBGEYITHKQRFZQVFRZUGVRGINVYMKSHVFBEDSPZBEPZTKRQOSBPYSWACHYJGBSSCWSAGFDEAYVDNNUADOFFSNMMHXBPLYQDZMRUMTDEZOPXTNULNJGDJAWCOFIXUJPCQKLKUIYOIOVRWWZFTALNCHYFTOLWLQDRTZ");
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
    msg.setTimeStamp(0.409934073483);
    msg.setSource(49108U);
    msg.setSourceEntity(132U);
    msg.setDestination(20588U);
    msg.setDestinationEntity(69U);
    msg.name.assign("OVWXAEHJBGPNZRF");
    msg.visibility.assign("MLUIZCVVLZRXNKJBMJZIOFPYPKPCDKEQWPZTSZUHTOSJXLRRZMGEUTWKBBFSXAXPKDEMLEUCMNHWIRZSXUMEVILWHCCMGNFVDSDTJSRCHNBXUNDWUBDGZQGKFAIIJPUUJOWQNHTANJZAGAKNQROYNWQAIFVQCOWPVKYGSREMVPQLEWHGXGHRJQELOCORBHYY");
    msg.scope.assign("TKYDLWMRMYEDHPAXUZEBIVYHTGHQVLVYMUQYSCMXHFTGMZUMITMOUUISKZKJJZLZCCLGTNXOREBVJKWWJNUGRBSFQBKCTAKZUCOXLOIKALRFPSALSOQLDAQAOCUNJPCBWZWSERXZEUWVODAYPIWHQKROGEHDVMBYWNGCTNVTJIPYNHFFGRBJASPAXILXRZPQDEVCLUIFHNTFJEJPMNRFXXGDWNQQPNEVQSBYPMBKFROYCJDGH");

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
    msg.setTimeStamp(0.0673944502759);
    msg.setSource(45530U);
    msg.setSourceEntity(245U);
    msg.setDestination(4331U);
    msg.setDestinationEntity(240U);
    msg.name.assign("TGSYMWFLLIMILSVNFAJMXBQHUMMLSTEMOFPGOHQWESTKCZVJCLPGVARRWDXKVGJWSIRPFVPFFTDXRKBHNCPHUJCTAPDQBDXFTEWYPGUUXDYEZUVWZYWN");
    msg.visibility.assign("IYOMBRLKTATUCIJIOXZAZSOXBGMSQUDQWVHOVSYLCHLXIEMLVKPOKXTUFIZYCNBUQUSYGFNJBMEHPWCLJPZRFPUTWWRDRZDECGKULPIXFWUNKWIEVVFQFZQUAIKPETYNYNVCGDELOAJQGSGQMZFVQSJRYFSHRSCBWGDXNWTAMMHFMAANCSLCPJKXXTRONIEIWORMWMQLDRZTHKGJHDYK");
    msg.scope.assign("NGAYDJEVQWTEPUZUJISCBXIEWWPLHKFMAXHQRHRCWFZSWULDOWBSJQGYOUZERODCSJHIBFSTNDLPMXICFQPGTHDPNMDHAJOOFMWDGAKFBSIXARHKFGUNQCRVQFSJIFNMOBNRXDEYRCCEGANVGKTLHZUJOHATVCLJJZQMPKGAIO");

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
    msg.setTimeStamp(0.313809147365);
    msg.setSource(57460U);
    msg.setSourceEntity(184U);
    msg.setDestination(6106U);
    msg.setDestinationEntity(160U);
    msg.name.assign("HJKEGRUCNY");
    msg.visibility.assign("MOQRFVTFTHSBDJWOFUDBWCLXUSHWGZNXNCUJTXHLLYSFPYUNOWKEDXGSKZOLERDHPXCDXKVTUTPAFELKNZIRRBKJVCRQWFDQMMXOBYGVDJAAFVNMDBGVJIMGHLUAYKHTLIGSOYMEBYTFPABNRICOEJVGGQGZTAIUNROIZWZEUKBJCTWECZPOSNPXBBSJFH");
    msg.scope.assign("DJJBIYVXGRPCSMDBYVXZXDAZMEACRHWNONRQFDUNLTUEYNYKTWLQUDBRKWNMTFHSRHVYOTKTNMOLFBFUWWSDIIJQIIQLAKFAAPUQMYJECLPLPGSZVTFRNMQJMMCZFKPBHDELAEPFJNVUGYUVEOUZSSJVOPHJY");

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
    msg.setTimeStamp(0.594399776507);
    msg.setSource(32341U);
    msg.setSourceEntity(57U);
    msg.setDestination(51375U);
    msg.setDestinationEntity(171U);
    msg.name.assign("MQOARFMYLCN");

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
    msg.setTimeStamp(0.340289742755);
    msg.setSource(22807U);
    msg.setSourceEntity(170U);
    msg.setDestination(15208U);
    msg.setDestinationEntity(82U);
    msg.name.assign("HXQTJJVTVMFAKSFHCKBDOELEBMDDHDCFYXLXYJMAVDAOUNAWIWCWPKEOGMAGFLEFPCRGVWGDMEIIFRQVLDHUMSXTZSLBRIBUNUTZHCNOHXHVPYAKBRWSNGUNRQTEW");

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
    msg.setTimeStamp(0.672364454778);
    msg.setSource(24334U);
    msg.setSourceEntity(90U);
    msg.setDestination(377U);
    msg.setDestinationEntity(181U);
    msg.name.assign("LHASAKNVDKTWNKQLYMCQOBKNIOQVTGWHTCBLCNGRZTLTERPFLLCPXYSDKVUMFJXQASFGPVTQBBPHNBFXHUEOSMWRZJHPNPS");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("CBJQURGTIOHDWVRDKVXYRJHAVSALVBIBNUVXEZAIMAXTKKPIDUDNVLYOOXGCSRBGQKDJLMGWJFFXQQGPURSAJPYNINENMNQDHYLCZRQTCMYIQUPGBXXVWPFLBDXATKGOASIOARGCEZZSJWTVLNCWZCKRBWMSOCZNUFFAEFUPPPWYJMBSAETTQUKREZLOJHPHLOQUFYWI");
    tmp_msg_0.value.assign("HRZSZQJNWWETQPYWRLLPUFYZCJGBOYTXOSHGUVWPMYHJQXYHERCSTNNODZJDZAFLKRKWTZBCSXVDIWKDRYWNMBVKQXVEBSQQSGJAHSFBIDZWLUPCGBDOTFNXGCYWYAIAHFIMYFAONATFRPOUVOPEJCDSQUUUEKFGIGUGRIQMJAMVOQNTPEOLJIEINXFMXPIMLPWOCDNCE");
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
    msg.setTimeStamp(0.814536403134);
    msg.setSource(63234U);
    msg.setSourceEntity(123U);
    msg.setDestination(9122U);
    msg.setDestinationEntity(15U);
    msg.name.assign("BAAGXATUIMSXOOERJIYHTSKMIUCFGVCUPKAIEJRDVKAUCIPQCTTIFNEGTZFWYSZXPQNDUSKKPRLQUHPFVHORAUBSNRLDJGDQDLXCZPBHGYNOHMWFHAEIONYPPUAVMCMKWWGOWHEYVYWDLQGXWFBYLTLRLZOSKASZXAJKMJJLPPHSRQJZTBXORWELMDNVZZQVCFLFGBGENNDKIHFIQYHG");

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
    msg.setTimeStamp(0.417229253288);
    msg.setSource(27581U);
    msg.setSourceEntity(2U);
    msg.setDestination(5833U);
    msg.setDestinationEntity(151U);
    msg.name.assign("WJZEWIYKAJQKIPEUNXDLSJMUCJOXQHUVCAYZYOODVDFWWMWEAUOZIOACVMQTXNGHZVPPRIIFRDHLKCUZDEADTMNJBDJUQXSTFVXJPGREPKMAYHHRYBNJPHMWEFSUGLTXLFQWHPMGNLSCOYDCUASVKGBRVXBLKVZBLYYRQCANWNPJRJCAGIUNGKITPMWZ");

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
    msg.setTimeStamp(0.358907407802);
    msg.setSource(61149U);
    msg.setSourceEntity(91U);
    msg.setDestination(60118U);
    msg.setDestinationEntity(171U);
    msg.name.assign("HAFSWFDXOJEHZBBALJTHTXZKBUJNTFNCIZLWIDQAIREAQJMCWFPQQGOCMINIYBEIJRGPQMOGUZAJXBEOK");

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
    msg.setTimeStamp(0.269345841927);
    msg.setSource(48167U);
    msg.setSourceEntity(227U);
    msg.setDestination(27723U);
    msg.setDestinationEntity(162U);
    msg.timeout = 4138979245U;

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
    msg.setTimeStamp(0.977140069905);
    msg.setSource(5840U);
    msg.setSourceEntity(19U);
    msg.setDestination(57773U);
    msg.setDestinationEntity(141U);
    msg.timeout = 480425136U;

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
    msg.setTimeStamp(0.290244869612);
    msg.setSource(47583U);
    msg.setSourceEntity(152U);
    msg.setDestination(28629U);
    msg.setDestinationEntity(223U);
    msg.timeout = 3487489508U;

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
    msg.setTimeStamp(0.120130555207);
    msg.setSource(41776U);
    msg.setSourceEntity(119U);
    msg.setDestination(39677U);
    msg.setDestinationEntity(161U);
    msg.sessid = 2485763875U;

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
    msg.setTimeStamp(0.279963290972);
    msg.setSource(28545U);
    msg.setSourceEntity(126U);
    msg.setDestination(30280U);
    msg.setDestinationEntity(94U);
    msg.sessid = 3830374765U;

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
    msg.setTimeStamp(0.795041852148);
    msg.setSource(13012U);
    msg.setSourceEntity(97U);
    msg.setDestination(20213U);
    msg.setDestinationEntity(137U);
    msg.sessid = 3274433330U;

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
    msg.setTimeStamp(0.303285320178);
    msg.setSource(35845U);
    msg.setSourceEntity(154U);
    msg.setDestination(46527U);
    msg.setDestinationEntity(73U);
    msg.sessid = 2069275292U;
    msg.messages.assign("ABELMFVRBYHNZLHIGVSFDDYPBKWJZZPMMWYGWXCVENBDGSWWOVBKYDXTRTXXRCYNYJCAGPYVQGHJ");

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
    msg.setTimeStamp(0.0691477539416);
    msg.setSource(1507U);
    msg.setSourceEntity(127U);
    msg.setDestination(34162U);
    msg.setDestinationEntity(247U);
    msg.sessid = 1857368471U;
    msg.messages.assign("XEQZLVTKOCRMTJFULJLFMIESTZIHHQLVXYGHOOZJAMUCKTAJQLHMZCMHDXSEBZETWATRDNQACGRLGASGROVPNKXDFIFSKBQNCZPGYTTEEBYWDDUPAGWXARFVAIBUDOSJBRWCJPEMJTXZSSWEKDVSFSPQVNDLPLPLTISICUXVGMRIVFKOKCQWYWNFNW");

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
    msg.setTimeStamp(0.0267595078746);
    msg.setSource(19670U);
    msg.setSourceEntity(23U);
    msg.setDestination(54659U);
    msg.setDestinationEntity(186U);
    msg.sessid = 4219598523U;
    msg.messages.assign("VBODYRPLEIKDEXCUMCMBLACUMLDDICUFWIBTWHALOIEKIQQRVXBHLQZRAEAXYUMRKKJMSSVGMNPDSJZCAJPUGOFSOGIFUKTWAVTHJZNUZRRBQRCPAYWGOLNZKVXWNHLXTNY");

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
    msg.setTimeStamp(0.51066550027);
    msg.setSource(35376U);
    msg.setSourceEntity(84U);
    msg.setDestination(56716U);
    msg.setDestinationEntity(217U);
    msg.sessid = 3068730528U;

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
    msg.setTimeStamp(0.737149857087);
    msg.setSource(1159U);
    msg.setSourceEntity(173U);
    msg.setDestination(46765U);
    msg.setDestinationEntity(8U);
    msg.sessid = 1801630562U;

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
    msg.setTimeStamp(0.112083467122);
    msg.setSource(48089U);
    msg.setSourceEntity(234U);
    msg.setDestination(36189U);
    msg.setDestinationEntity(79U);
    msg.sessid = 1652434911U;

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
    msg.setTimeStamp(0.911308105509);
    msg.setSource(45033U);
    msg.setSourceEntity(5U);
    msg.setDestination(7150U);
    msg.setDestinationEntity(101U);
    msg.sessid = 2155625620U;
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
    msg.setTimeStamp(0.959857930436);
    msg.setSource(31834U);
    msg.setSourceEntity(51U);
    msg.setDestination(5806U);
    msg.setDestinationEntity(236U);
    msg.sessid = 2271917897U;
    msg.status = 194U;

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
    msg.setTimeStamp(0.754965437382);
    msg.setSource(8729U);
    msg.setSourceEntity(35U);
    msg.setDestination(42654U);
    msg.setDestinationEntity(178U);
    msg.sessid = 3751993922U;
    msg.status = 251U;

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
    msg.setTimeStamp(0.0242379207993);
    msg.setSource(58941U);
    msg.setSourceEntity(176U);
    msg.setDestination(7027U);
    msg.setDestinationEntity(109U);
    msg.name.assign("QFSOFUKRCBWAKDZSNDOTTIXLLNSTNIUWWOFKDEYY");

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
    msg.setTimeStamp(0.890844993981);
    msg.setSource(54484U);
    msg.setSourceEntity(90U);
    msg.setDestination(8376U);
    msg.setDestinationEntity(129U);
    msg.name.assign("RELXBEZEUDCKJYTWKSUUZMPDJOCVMNSHUGMFPFBMEGMGSOYVGBCLVRFITQEEATTSPVIXOHJIIWASPGZIRHFHLAKIWPTZTCWZMHTRYIOWRKDJOKANQCMGFXLYSQOKPYGNHBOHKQUQDWWVJSBNNHXAXIYPXYWPSEHDGMRCXPYDFFVBXLZFJLRZQENNULEAFBVZSGBHIEBDUOJMNYAATGULDRVUJDWVQJFAVMQTCPKQBNCXCLQARNXCZUZKYS");

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
    msg.setTimeStamp(0.703155542698);
    msg.setSource(11858U);
    msg.setSourceEntity(154U);
    msg.setDestination(2264U);
    msg.setDestinationEntity(208U);
    msg.name.assign("VOKFUJIEFARDSDEMGPUPNRXHKHBGQCWGHBLVXJQHGNEWTTBXBTFTCSRSEVQPFSXHYCCCAASLZXPOXOBNYYDQHZUNWUDHIICAVAKZMZDKLLYTEFFQYTWRKQGWIKVJGMFZOEPJOGDSTMUGFYWJMTXCBXDWWRGIKBVZEMADUJVNCINTNDOYQCLVPSAEOEQYHWUPHP");

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
    msg.setTimeStamp(0.0334935917473);
    msg.setSource(51918U);
    msg.setSourceEntity(218U);
    msg.setDestination(63314U);
    msg.setDestinationEntity(115U);
    msg.name.assign("XXSGLXJTSYNZFQRRBGJWYKRBNSLWBAZDHUYZPMAEBJDMTXEWKVEEMSWUTIUHAJSOILZVPIUYJAPDIYUUXUGVXTMOKWLMNANEPXNVSVQVKAQGADCXFPFEVESVKDTTPEIOHKNLPKFRLRMBODXFDQWZDYFCKSIQZLRFJOYKNPOVCGGJOIEDYCMAZLREHQQBALYXOCQWUSDHC");

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
    msg.setTimeStamp(0.256226071562);
    msg.setSource(61999U);
    msg.setSourceEntity(162U);
    msg.setDestination(62115U);
    msg.setDestinationEntity(113U);
    msg.name.assign("FVLHDWHVGYBJXAUQHAGAHNGKXXCLSNMPDPWJIKDGYKZPWSOZTHKMOBESBWUUNRDMCTAUUEBRXIJVFGOJDQOMNOTZIWQYQHVRVFYTZXDVPEKBOVJKBDRYNYPUQFAWRZJZWFCOCPOERCFMOJQQQBRFZHYQJVICWHRPDBUNSSABAUPIC");

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
    msg.setTimeStamp(0.520170372558);
    msg.setSource(44271U);
    msg.setSourceEntity(101U);
    msg.setDestination(50918U);
    msg.setDestinationEntity(8U);
    msg.name.assign("YKQCLYDMNXMREAITZXITBNCYSARSRBKWCPCSFHYTHTUBQVPFUYBNFQLEFPZPAVOZKZUBZWYKRSEQOVPEGBVATVGDLDEWEIWCOOXFVZFGZLMRHJPXNDMUDADLHUCQGPVXJEAETISHLJKWGBWJMAUIIGIHRFBMNWSYHXTMGXPEQUXCEKBFOQKPSKWYJYMZJMWVUCJZGXODOJ");

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
    msg.setTimeStamp(0.267353926764);
    msg.setSource(22873U);
    msg.setSourceEntity(137U);
    msg.setDestination(23762U);
    msg.setDestinationEntity(254U);
    msg.type = 69U;
    msg.error.assign("CFOUTNLLYLLSKIJRDMQRBOYFHSKZUABBDOLMUNHDCFVJSNHCQSLZOAFNEDYXHRVCTWTWHZPKJOSXSVULCGACZKFKQVBYWGXBAPMMWDENAUGJDAWWPPFOUONXQWGRNKJMPPYIMIJXAQRIFTAJZKEDMMXZTASQNRRZEEEVGFHPGQBEUHDIYWTVOFJWYCQSNGYEV");

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
    msg.setTimeStamp(0.540304880082);
    msg.setSource(48435U);
    msg.setSourceEntity(234U);
    msg.setDestination(21354U);
    msg.setDestinationEntity(85U);
    msg.type = 88U;
    msg.error.assign("YAIBOUKSKWMMWOUVTOJASVTLPTTDXFYXQBKFVXZAMGUTKHYNMNRJYMNREZLWLVDSJKLNHRDQKPWRCMRHOVDPWOFHBWBJWBJCZELEWCAPVDBNRIFUJKCFDJLLQUFCTHUIGELSICBQUGTQICOZAZDOZEZAFSGEPVVCBERKTRRAXEYDIPQVOAIGNNNHOSASLUXXEFYMNCGXWGGOQTAGMVLCJS");

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
    msg.setTimeStamp(0.931562967869);
    msg.setSource(39575U);
    msg.setSourceEntity(185U);
    msg.setDestination(17538U);
    msg.setDestinationEntity(119U);
    msg.type = 251U;
    msg.error.assign("IIJQCLQQRVWWGFXTKLNSJBGHLMVINEPOCPWEYSUYISTDRNCXTPMGWKMCQNYXANEZEPVIMZQNKZBMKWTQTMCALVSMUVLJCFCCBIPLPCLXKEHWUXJBUFGQGGEWZHVHBOSGUARRZXHOAIILZPYNLDPTJFDOEFBBDLRIANSUYYVMKDWOFZHMURFJ");

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
    msg.setTimeStamp(0.748996511196);
    msg.setSource(65303U);
    msg.setSourceEntity(112U);
    msg.setDestination(36616U);
    msg.setDestinationEntity(127U);
    msg.seq = 14189U;
    msg.sys_dst.assign("AYBUEZDNOOCHQWIRYGXSDXBFWGAOZWGMANACHRGHEJUBMQQWJLHJOTOTAKLUTMLRYZWYFFVVOXMIHIJYCYGQIULEAAQTXXUIGXPBNWRPDKVRVVHYRQPLGUPZJKSEEPMJUBNHPHPBGNFXCAZYPQQVWTOND");
    msg.flags = 203U;
    const char tmp_msg_0[] = {95, -114, 38, -12, 38, -71, -127, 88, -105, -93, -29, 11, -17, -77, -127, 116, 38, 55, -98, -32, 91, 121, 74, 108, 23, 55, 58, 115, -77, 65, -123, 35, -99, -116, -120, 67, 52, 17, 27, 38, -10, -125, -98, 117, -54, -35, 109, 63, -113, -48, -2, -36, -85, -71, -117, 77, -112, 5, 28, -49, 79, -11, 27, -59, 54, -58, -26, -92, 94, -95, -24, 63, -23, -92, -107, 76, -54, 24, 109, 34, -62, -26, -6, -51, -10, 11, 115, 103, 108, -60, -97, 33, 35, -65, -126, 90, 60, 100, 72, -60, -20, 71, 51, -11, 35, 24, 44, 36, 52, -87, 66, 77, -1, -7, -65, 1, 87, 93, -19, 21, 61, 63, -18, -79, -46, 42, 83, -5, 38, 35, 24, -68, 61, -104, -47, 64, -80, 24, 63, -83, 109, 84, 124, -60, -100, 87, -24, -33, 123, 18, -4, 103, -119, -34, -41, -113, 73, 118, 19, 50, 36, 82, -35, -48, -77, 61, -123, -90, -123, 8, 104, -112, -18, 21, -31, -117, -59, 1, -47, 63, 119, -22, -95, 14, -119, -79, -123, -62, 103, -75, -106, -81, 72, 109, 22, -15, -95, -74, 83, -91, -100, 33, 26, 102, -92, 107, 83, 42, -86, 90, -12, 109, 96, 54, 92, 12, 90, -94, 87, 42, 71, 117, 96, 40, 9, 25, 43, -54, -71, 110, 44, -75, -101, -90, 94, -84, 69, -81, 66, -47, -89, 118};
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
    msg.setTimeStamp(0.480260678801);
    msg.setSource(33762U);
    msg.setSourceEntity(254U);
    msg.setDestination(6345U);
    msg.setDestinationEntity(166U);
    msg.seq = 44837U;
    msg.sys_dst.assign("HQSWQTLKMGJRHFIFVUUHSROYIGAXISIJOUVFOJCXUYCJFXMYPBFGTYMMZRNSZBCYDDA");
    msg.flags = 82U;
    const char tmp_msg_0[] = {117, 52, 115, -87, 40, 12, -120, -120, -32, -60, -36, 48, 37, 19, 123, -8, -40, -90, -76, 74, -56, -12, -43, -91, -108, 28, -38, -111, -127, 101, -70, -91, -123, -120, -1, -75, -66, -55, -66, -39, -98, 54, 80, 18, -112, 20, 20, 3, 106, 117, -29, 112, 113, -40, 3, 73, -46, -92, -18, -125, -61, -49, 105, 2, 12, -96, -97, -96, 7, -24, 23, -92, -86, 108, 4, 88, -68, 114, -107, 59, -106, -43, -86, -25, 107, 47, -65, -43, 86, 15, -31, 35, 101, 81, 91, 24, -88, -45, 19, 57, -19, 10, 39, 74, 3, -41, -101, -127, -113, -86, 86, -54, -52, -106, -119, 112, 113, 15, -44, 125, 34, 19, -7, -3, 22, 118, -43, -123, 9, 0, -70, 91, -22, 79, -48, -30, 31, -37, 29, -54, 42, -94, 76, 68, -3, 56, -5, 4, 29, 71, 84, -6, -4, -2, -53, -96, 16, 28, 85, -112, 39, -99, -84, -4, 0, -20, 30, 6, -100, -44, 14, 119, -56, 90, -36, -78, 35, 123, 0, -111, -26, -36, -37, -118, -72, -1, 38, 12, -94, 42, -104, 52, -58, 52, 108, -35, 101, 83, -66, -122, -21, -39, 108, 81, 3, -114, 21, -121};
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
    msg.setTimeStamp(0.21126948012);
    msg.setSource(13036U);
    msg.setSourceEntity(137U);
    msg.setDestination(20558U);
    msg.setDestinationEntity(81U);
    msg.seq = 46381U;
    msg.sys_dst.assign("LEDLUVYSNSAEZHPWTYJXZFRAYTNWLNGSMRHWQVCSPAKTUXFUJQGDBIXKGZCIRSFBOVJQASHZFTRPKTEHRDOODLZKUNSCXLYUFQEGBUPTYAXPGMIXCDIDJXZAGBBFKMTEQZLQPJFSUOMCAXUDOUEKJOWWEHKWFIILMHSDJWOPYKHQPCCAQXPYIKBEWTEHYICYVBGORVBDICVJFJMLQNFWNVTVLNNMAOHKPGDMXSLQMGVRZBITMENNBAZC");
    msg.flags = 29U;
    const char tmp_msg_0[] = {-5, 17, -45, -86, -100, -14, 115, -36, -71, -110, -46, 77, -40, 2, 86, -79, 88, 66, 86, -103, 18, 87, 48, -117, -5, 122, 81, 1, 100, -59, 69, 114, -72, -121, -73, 74, -45, -118, -27, -97, -49, -95, -128, 29, -128, -3, -127, 13, 47, -62, 60, -57, -122, -37, -37, 59, -125, -5, 94, -91, 52, 100, -125, -25, 84, 99, -62, 9, 20, 7, 69, 31, -29, -75, 40, -79, -27, 41, -103, -6, 94, -28, -112, 126, -38, -26, 61, -116, -76, 28, 24, -37, 47, 33, 123, -67, 98, -23, 35, 117, 35, -118, -19, 28, -95, 122, 82, 17};
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
    msg.setTimeStamp(0.360927766929);
    msg.setSource(61065U);
    msg.setSourceEntity(147U);
    msg.setDestination(32316U);
    msg.setDestinationEntity(231U);
    msg.sys_src.assign("NJCIGTJRFURMKLLONBMVGOOLOSXMJGEULIBGZNIUWBPQFPDTBXRFALEJ");
    msg.sys_dst.assign("QQPKEADQKFUNCXITIJMTOROAJZOJPTASKBSLEXZYFLOMEVCMQWWAPLHONVRWZODSSHRYVENATJJPRMXLPBXXODFWLHIX");
    msg.flags = 159U;
    const char tmp_msg_0[] = {22, -44, 59, 109, 101, 88, 37, 83, 54, -69, -124, 83, -122, -110, 66, -63, 57, -64, 53, -14, -116, 81, -30, 100, 83, 20, -97, -18, -70, -20, -65, 26, 122, 17, 2, 20, 24, -13, 60, -102, -10, -21, 10, -120, 123, -115, 27, 76, -8, -24, -26, -95, 3, 0, 15, 66, -60, -126, -11, 100, -38, 120, -24, 96, 57, 96, -114, -39, 55, 97, -26, -117, 107, 115, 111, -58, -62, -64, -3, 15, -111, -30, -30, -84, -112, -82, -56, -58, -33, 41, -44, -78, 16, 94, -96, 68, 15, 32, 73, -9, 30, 84, 2, 11, 56, 119, 38, -6, -85, -94, 123, -114, 25, 46, -52, -113, -30, -57, 69, 22, 16, 107, 115, -30, 64, -125};
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
    msg.setTimeStamp(0.595442241828);
    msg.setSource(56749U);
    msg.setSourceEntity(170U);
    msg.setDestination(17824U);
    msg.setDestinationEntity(64U);
    msg.sys_src.assign("UEEKXKAPODCDTYHJCWLGGCVOMFWIKERITMXUPRRUDPVCJBIHEJBAZHABIYNZUWLQGOYTUMRTBYDAAKQMPMLGCSCQXFFWSXGBQOLOVVBRGEPJECNTGY");
    msg.sys_dst.assign("DOANSMNUMYPOQNHPGMHVTFCVMXKTVYDTQSMPZA");
    msg.flags = 107U;
    const char tmp_msg_0[] = {-29, -5, 24, 89, -85, -60, -15, 83, -110, 99, -115, 114, -88, 9, -107, 7, -125, 99, 78, -73, 98, 94, -103, -86, -62, -97, 54, -72, -23, 101, 31, -29, 65, -8, -82, 115, -83, 15, 85, 39, -22, -10, 71, 116, 55, -10, 38, -92, 79, -89, -56, 90, 69, -29, -94, 112, -69, -1, 106, -11, -89, 5, -37, -25, -6, 14, -107, 22, 121, 32, 67, 120};
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
    msg.setTimeStamp(0.376577602802);
    msg.setSource(43973U);
    msg.setSourceEntity(249U);
    msg.setDestination(37004U);
    msg.setDestinationEntity(128U);
    msg.sys_src.assign("ELPYETIMXMGCNCYFJMJSTODRWQKPTVJBDFZFSWBKBOWSRTDTRSDVELAICM");
    msg.sys_dst.assign("FUUOTGYIUNWBKVXMMDZJIOVKOULHEDLTDLWWZNCKSNZUTBDACCKAGFVXLFUENEGSWGFLLJNNYSKXCQRXJHYHMIOOBPRHAUBWSMHQPYQXASKLRMTISDOTJVAHYTBUBVLNQCNFVPIGFOSOJEXZKAZOYCPSEFHDQVJTKH");
    msg.flags = 64U;
    const char tmp_msg_0[] = {-18, -115, 28, 119, 110, -113, -87, -18, 38, 107, -4, 82, -35, 92, -70, -44, -19, -44, 112, 19, -59, 109, 105, 43, -104, 11, -93, -66, -86, 56, 11, 66, 15, 100, -62, -127, -99, -116, 36, -102, -27, 34, 114, 82, -51, -22, 9, 46, -8, -86, -84, 75, -18, 55, -82, 22, 5, -122, -83, -61, -93, -9, 3, -8, 52, -47, -57, -27, 1, 100, -37, -115, 114, -76, -83, -85, 108, 15, -32, -101, 56, -22, 26, 72, -97, 65, -33, 30, -114, 78, -67, -28, -51, 17, 27, -15, 43, 103, 65, 108, 95, -123, 24, -111, 30, -68, -85, -72, 39, 64, 42, -5, 107, -46, 28, 100, -15, 2, -15, -41, 46, -74, -104, -84, -97, -120, -37, -101, -117, -9, -114, 11, -31, -65, -102, -128, -44, -127};
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
    msg.setTimeStamp(0.289835876048);
    msg.setSource(20833U);
    msg.setSourceEntity(104U);
    msg.setDestination(55870U);
    msg.setDestinationEntity(136U);
    msg.seq = 43713U;
    msg.value = 3U;
    msg.error.assign("YUPDJAKEGTLTVZYKGUTLRVZDMTBWSGMPTVMJLXQANEUMKABIOGYYUZWKCRSYVIOSAJEWDJVGKFENSUZNLOCDVXOYZRAIWWIOWTCCOYFCNGMHSVQYOHBFPFMETJBTXHXQIYZFTRCXZRIBDPCDAEMHKCFVQCAFLTLFRLRUKXSHQLAEGXLIQAOKYUGN");

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
    msg.setTimeStamp(0.811906484257);
    msg.setSource(39956U);
    msg.setSourceEntity(187U);
    msg.setDestination(62827U);
    msg.setDestinationEntity(73U);
    msg.seq = 62206U;
    msg.value = 178U;
    msg.error.assign("ZWPZOZPWJSSRCRXHYGDFAAROYVYMAWVDXTPKQUXNIOMLQJHRVBWFMSLUFLBYYJQIARXTGCOINAIPJVRIQAOHBLLRNXTQOEGQCMFKZEVIQRTONNUZEGBABKAZKDBCIPYLKJTPNZJVYJLSYGHHXPUNPMUMSDABRHXUXRHASTLDOMUNEVEGNQTTCVCCDKFWGUF");

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
    msg.setTimeStamp(0.493498319327);
    msg.setSource(51111U);
    msg.setSourceEntity(0U);
    msg.setDestination(38582U);
    msg.setDestinationEntity(69U);
    msg.seq = 45717U;
    msg.value = 212U;
    msg.error.assign("ZFOGTSLYHCYPRVOTQLKVEVVJQEIIUYITCQRVJKGUGQSJXPUXKSKNUDNNDHCRQZNXFBCDDBAIONQMLPUWBDRDEGBZESGTZPLMVCHWOYMZULKMDENXFKBENZISWLHISNTLRODCUJULKMQBAAYKAABCWFWCXYUMZQDGXDWPVEVBGANCHJHPBMOVKTWHIXPZSHJXOYQTIFFZGXXAKCVTWSPUIRTRBJMMROHELMEF");

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
    msg.setTimeStamp(0.864896265264);
    msg.setSource(20135U);
    msg.setSourceEntity(242U);
    msg.setDestination(4474U);
    msg.setDestinationEntity(104U);
    msg.seq = 45622U;
    msg.sys.assign("HPGSOEUQPYAWTXXSWDARRPLYCYYPMBWNEQGPMXAPLNOIXCCEZWPBJKIJIQFDLVHSSJXNMNETDTKLMVVSNKDNNQDYCWKPRGILZNUFFERHUABOPJOIEDQSKYCBKJHECXLGURBIHFGGDSUXZRBWIOVWZRCATGXIAIMJBCLYHTPHEFAVOCRLOKJZMFULNVMKYFBCF");
    msg.value = 0.284352287146;

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
    msg.setTimeStamp(0.128991405118);
    msg.setSource(22951U);
    msg.setSourceEntity(16U);
    msg.setDestination(24923U);
    msg.setDestinationEntity(176U);
    msg.seq = 3068U;
    msg.sys.assign("WFVWDRUGWLRQAOKXXPSFKBBMTBDLYCEWJFUGOCHQMCTHKYOYOQDSSYUUJXZPIRHMVKXLSMXGESNXXNXAVOHZVSTIAXTZCLJENJIKDQKGUPHJHBFTLGVNEDMTRRDTUAOSJWCTIIRDYGLZZVWAARJYOAILHFETNPPRCFXVEIMCEJKNNZSJQQNPAOL");
    msg.value = 0.103641521082;

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
    msg.setTimeStamp(0.73514871544);
    msg.setSource(58344U);
    msg.setSourceEntity(154U);
    msg.setDestination(20922U);
    msg.setDestinationEntity(248U);
    msg.seq = 64549U;
    msg.sys.assign("UGPELIJRPJRLDCIXHEBGSKTXONARIDIFRCEOVVWNCTKUQAOZUFJMFM");
    msg.value = 0.211351861044;

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
    msg.setTimeStamp(0.672868560539);
    msg.setSource(6756U);
    msg.setSourceEntity(134U);
    msg.setDestination(36192U);
    msg.setDestinationEntity(139U);
    msg.action = 97U;
    msg.longain = 0.722885241174;
    msg.latgain = 0.932582714041;
    msg.bondthick = 2747750644U;
    msg.leadgain = 0.865605304819;
    msg.deconflgain = 0.767493472548;

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
    msg.setTimeStamp(0.37046622292);
    msg.setSource(63311U);
    msg.setSourceEntity(131U);
    msg.setDestination(37506U);
    msg.setDestinationEntity(101U);
    msg.action = 213U;
    msg.longain = 0.540422996254;
    msg.latgain = 0.967633319317;
    msg.bondthick = 1777150351U;
    msg.leadgain = 0.456717747441;
    msg.deconflgain = 0.944798464562;

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
    msg.setTimeStamp(0.835463168344);
    msg.setSource(62284U);
    msg.setSourceEntity(238U);
    msg.setDestination(24258U);
    msg.setDestinationEntity(54U);
    msg.action = 9U;
    msg.longain = 0.651935418423;
    msg.latgain = 0.938606240929;
    msg.bondthick = 2380823934U;
    msg.leadgain = 0.542917551282;
    msg.deconflgain = 0.110405876647;

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
    msg.setTimeStamp(0.940535543174);
    msg.setSource(48135U);
    msg.setSourceEntity(134U);
    msg.setDestination(13138U);
    msg.setDestinationEntity(54U);
    msg.err_mean = 0.0749135872024;
    msg.dist_min_abs = 0.814655639117;
    msg.dist_min_mean = 0.739444598947;

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
    msg.setTimeStamp(0.859524556291);
    msg.setSource(12511U);
    msg.setSourceEntity(242U);
    msg.setDestination(5234U);
    msg.setDestinationEntity(183U);
    msg.err_mean = 0.194549195407;
    msg.dist_min_abs = 0.761360270481;
    msg.dist_min_mean = 0.35828699784;

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
    msg.setTimeStamp(0.636013122043);
    msg.setSource(63343U);
    msg.setSourceEntity(86U);
    msg.setDestination(58240U);
    msg.setDestinationEntity(83U);
    msg.err_mean = 0.0942509186668;
    msg.dist_min_abs = 0.763914699844;
    msg.dist_min_mean = 0.388227039155;

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
    msg.setTimeStamp(0.0109947305473);
    msg.setSource(997U);
    msg.setSourceEntity(223U);
    msg.setDestination(14471U);
    msg.setDestinationEntity(16U);
    msg.action = 235U;
    msg.lon_gain = 0.662042556837;
    msg.lat_gain = 0.355167041419;
    msg.bond_thick = 0.901169357675;
    msg.lead_gain = 0.887284799191;
    msg.deconfl_gain = 0.0866172770873;
    msg.accel_switch_gain = 0.0884553230106;
    msg.safe_dist = 0.156780487988;
    msg.deconflict_offset = 0.313297799724;
    msg.accel_safe_margin = 0.0808795956833;
    msg.accel_lim_x = 0.70610508506;

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
    msg.setTimeStamp(0.169025497603);
    msg.setSource(37320U);
    msg.setSourceEntity(23U);
    msg.setDestination(40942U);
    msg.setDestinationEntity(213U);
    msg.action = 39U;
    msg.lon_gain = 0.583698888657;
    msg.lat_gain = 0.519556179591;
    msg.bond_thick = 0.000731421271929;
    msg.lead_gain = 0.0719929972153;
    msg.deconfl_gain = 0.859857252458;
    msg.accel_switch_gain = 0.871515134141;
    msg.safe_dist = 0.998260601506;
    msg.deconflict_offset = 0.894029515909;
    msg.accel_safe_margin = 0.676630787139;
    msg.accel_lim_x = 0.951951867036;

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
    msg.setTimeStamp(0.288153671328);
    msg.setSource(12810U);
    msg.setSourceEntity(210U);
    msg.setDestination(43562U);
    msg.setDestinationEntity(170U);
    msg.action = 223U;
    msg.lon_gain = 0.961731906005;
    msg.lat_gain = 0.810789068146;
    msg.bond_thick = 0.288057935;
    msg.lead_gain = 0.145047972939;
    msg.deconfl_gain = 0.602785694399;
    msg.accel_switch_gain = 0.952549284913;
    msg.safe_dist = 0.998510399632;
    msg.deconflict_offset = 0.75300075755;
    msg.accel_safe_margin = 0.0444201742574;
    msg.accel_lim_x = 0.865902399062;

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
    msg.setTimeStamp(0.85815514294);
    msg.setSource(22747U);
    msg.setSourceEntity(50U);
    msg.setDestination(49073U);
    msg.setDestinationEntity(23U);
    msg.type = 153U;
    msg.op = 67U;
    msg.err_mean = 0.401698829999;
    msg.dist_min_abs = 0.991115385666;
    msg.dist_min_mean = 0.668014503239;
    msg.roll_rate_mean = 0.999901352202;
    msg.time = 0.970377407542;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 16U;
    tmp_msg_0.lon_gain = 0.436454311357;
    tmp_msg_0.lat_gain = 0.74857314444;
    tmp_msg_0.bond_thick = 0.0353067043092;
    tmp_msg_0.lead_gain = 0.455774205691;
    tmp_msg_0.deconfl_gain = 0.398178000074;
    tmp_msg_0.accel_switch_gain = 0.273160706477;
    tmp_msg_0.safe_dist = 0.347082471632;
    tmp_msg_0.deconflict_offset = 0.462386611246;
    tmp_msg_0.accel_safe_margin = 0.635283407612;
    tmp_msg_0.accel_lim_x = 0.948133795173;
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
    msg.setTimeStamp(0.210002983121);
    msg.setSource(299U);
    msg.setSourceEntity(208U);
    msg.setDestination(65413U);
    msg.setDestinationEntity(33U);
    msg.type = 208U;
    msg.op = 205U;
    msg.err_mean = 0.579023052393;
    msg.dist_min_abs = 0.540844315595;
    msg.dist_min_mean = 0.447034012956;
    msg.roll_rate_mean = 0.824144478726;
    msg.time = 0.107608092559;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 14U;
    tmp_msg_0.lon_gain = 0.453580683503;
    tmp_msg_0.lat_gain = 0.208227731412;
    tmp_msg_0.bond_thick = 0.0718771634646;
    tmp_msg_0.lead_gain = 0.0784160018774;
    tmp_msg_0.deconfl_gain = 0.663765672772;
    tmp_msg_0.accel_switch_gain = 0.686330334267;
    tmp_msg_0.safe_dist = 0.159712815483;
    tmp_msg_0.deconflict_offset = 0.639062261848;
    tmp_msg_0.accel_safe_margin = 0.981356717736;
    tmp_msg_0.accel_lim_x = 0.997412036332;
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
    msg.setTimeStamp(0.353617783419);
    msg.setSource(26154U);
    msg.setSourceEntity(109U);
    msg.setDestination(33524U);
    msg.setDestinationEntity(86U);
    msg.type = 136U;
    msg.op = 144U;
    msg.err_mean = 0.345941224859;
    msg.dist_min_abs = 0.4226056724;
    msg.dist_min_mean = 0.341499688507;
    msg.roll_rate_mean = 0.985651290395;
    msg.time = 0.441282226685;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 86U;
    tmp_msg_0.lon_gain = 0.599458739801;
    tmp_msg_0.lat_gain = 0.879101897046;
    tmp_msg_0.bond_thick = 0.32768059711;
    tmp_msg_0.lead_gain = 0.913767767244;
    tmp_msg_0.deconfl_gain = 0.0395855602214;
    tmp_msg_0.accel_switch_gain = 0.778201891557;
    tmp_msg_0.safe_dist = 0.507201812313;
    tmp_msg_0.deconflict_offset = 0.0444707691303;
    tmp_msg_0.accel_safe_margin = 0.418162238929;
    tmp_msg_0.accel_lim_x = 0.681368045527;
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
    msg.setTimeStamp(0.421443040976);
    msg.setSource(50862U);
    msg.setSourceEntity(198U);
    msg.setDestination(31508U);
    msg.setDestinationEntity(124U);
    msg.lat = 0.867125699857;
    msg.lon = 0.860235127521;
    msg.eta = 739407231U;
    msg.duration = 19393U;

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
    msg.setTimeStamp(0.576038848105);
    msg.setSource(54700U);
    msg.setSourceEntity(5U);
    msg.setDestination(15591U);
    msg.setDestinationEntity(223U);
    msg.lat = 0.520289967055;
    msg.lon = 0.597526273688;
    msg.eta = 1655677984U;
    msg.duration = 15700U;

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
    msg.setTimeStamp(0.207787740954);
    msg.setSource(1663U);
    msg.setSourceEntity(198U);
    msg.setDestination(21392U);
    msg.setDestinationEntity(10U);
    msg.lat = 0.20368064791;
    msg.lon = 0.537898653895;
    msg.eta = 4024313248U;
    msg.duration = 1414U;

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
    msg.setTimeStamp(0.414675612069);
    msg.setSource(10722U);
    msg.setSourceEntity(73U);
    msg.setDestination(51027U);
    msg.setDestinationEntity(11U);
    msg.plan_id = 41492U;

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
    msg.setTimeStamp(0.722537837517);
    msg.setSource(64205U);
    msg.setSourceEntity(206U);
    msg.setDestination(15777U);
    msg.setDestinationEntity(86U);
    msg.plan_id = 41560U;

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
    msg.setTimeStamp(0.449294884476);
    msg.setSource(26927U);
    msg.setSourceEntity(81U);
    msg.setDestination(13221U);
    msg.setDestinationEntity(182U);
    msg.plan_id = 57862U;
    IMC::SoiWaypoint tmp_msg_0;
    tmp_msg_0.lat = 0.512212218362;
    tmp_msg_0.lon = 0.613267745047;
    tmp_msg_0.eta = 3384518409U;
    tmp_msg_0.duration = 6477U;
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
    msg.setTimeStamp(0.97026644707);
    msg.setSource(64625U);
    msg.setSourceEntity(165U);
    msg.setDestination(39366U);
    msg.setDestinationEntity(244U);
    msg.type = 166U;
    msg.command = 12U;
    msg.settings.assign("YQMKQSPXLKVJNWFRLZMYETJXTFNMGVPBELQXYMTIRXEOGAMKIPOXKDTVAMIB");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 21116U;
    msg.plan.set(tmp_msg_0);
    msg.info.assign("BKMEMZFSSQQANCGMIYOFNJCCHPBXFODHAWVEIMLALIEXPZPJCEF");

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
    msg.setTimeStamp(0.946816309914);
    msg.setSource(60757U);
    msg.setSourceEntity(48U);
    msg.setDestination(818U);
    msg.setDestinationEntity(240U);
    msg.type = 233U;
    msg.command = 122U;
    msg.settings.assign("VOJZXREKGUHBFJRXMLUIULBGCRJRTADWPSSJKELKWPNVVYNFWUWZBVAHXNEOIVMVTDMYXJDOLJDZMFHT");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 48970U;
    msg.plan.set(tmp_msg_0);
    msg.info.assign("GCDYSGDVFTVWIZDVJLOYXMFOBNQKYWHUMTPEMMIPHJLMHCMFEPRUWQCHJWEUQZLJPBSQBRXYRDVRIUVOBEVBYONVCXUAPMAZORDHPNFFSLSVTYZAGPKLCDJMPGXJROWQTXTASBIYEELBKCQUDUVLCFFZWUFTEWRNAATNGKARNVKGGNHWRKQBUCNZDTTISMWKEXIAKZLLKXJZSIXGDUIAHEJCNGIPHZPQSGAM");

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
    msg.setTimeStamp(0.375023580634);
    msg.setSource(38767U);
    msg.setSourceEntity(97U);
    msg.setDestination(37733U);
    msg.setDestinationEntity(117U);
    msg.type = 135U;
    msg.command = 59U;
    msg.settings.assign("TJRMHQFSJKRHKAZNQCIHGVEDSLNTKMWZKYFEIOIHQOFGXUPXOKTYHXEDXONYWEJTRAGPEUZHZNPJLLMGKIWGQEPRKSBOBPZMVLHHLUBFMCR");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 23450U;
    IMC::SoiWaypoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.124497530839;
    tmp_tmp_msg_0_0.lon = 0.208275424979;
    tmp_tmp_msg_0_0.eta = 3535650802U;
    tmp_tmp_msg_0_0.duration = 51399U;
    tmp_msg_0.waypoints.push_back(tmp_tmp_msg_0_0);
    msg.plan.set(tmp_msg_0);
    msg.info.assign("EZXQCVOYPNQWVRYXHEBPAJTUQKEROSXSKAGFFVCLSIDZYTUKQOIMVGFKKAWUDSELRMHBYIPTOYQULMZNOZ");

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
    msg.setTimeStamp(0.098166091271);
    msg.setSource(24844U);
    msg.setSourceEntity(42U);
    msg.setDestination(29316U);
    msg.setDestinationEntity(68U);
    msg.state = 72U;
    msg.plan_id = 29531U;
    msg.wpt_id = 208U;
    msg.settings_chk = 11518U;

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
    msg.setTimeStamp(0.666922306293);
    msg.setSource(36210U);
    msg.setSourceEntity(32U);
    msg.setDestination(47950U);
    msg.setDestinationEntity(251U);
    msg.state = 102U;
    msg.plan_id = 15976U;
    msg.wpt_id = 102U;
    msg.settings_chk = 43999U;

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
    msg.setTimeStamp(0.190242463155);
    msg.setSource(46186U);
    msg.setSourceEntity(242U);
    msg.setDestination(18239U);
    msg.setDestinationEntity(203U);
    msg.state = 92U;
    msg.plan_id = 44129U;
    msg.wpt_id = 194U;
    msg.settings_chk = 45437U;

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
    msg.setTimeStamp(0.532770405334);
    msg.setSource(62705U);
    msg.setSourceEntity(84U);
    msg.setDestination(43380U);
    msg.setDestinationEntity(242U);
    msg.uid = 46U;
    msg.frag_number = 164U;
    msg.num_frags = 17U;
    const char tmp_msg_0[] = {-60, -114, 16, -28, -99, -115, -53, 31, -90, -96, -38, -112, 56, -57, -81, -120, 54, -44, 29, -76, -51, 123, 82, 60, 115, -114, -95, 59, -126, 125, -83, -74, -79, 86, 9, -25, -77, -125, -62, 93, 17, -50, -48, 126, 122, -16, -108, 19, 98, 59, 85, -122, 12, -68, 26, -12, 35, 125, -6, -122, 78, 24, -35, 65, -113, -15, 37, 126, -33, 60, 113, -66, 44, 65, 52, -121, 80, -97, 29, 87, 77, -43, -30, 45, 119, -3, -122, 93, 121, -57, 84, -101, -47, 88, -77, 11, 11, -65, 65, -121, -115, -120, 111, -4, 113, -37, -77, 17, -109, 37, 27, 17, 59, 2, 51, -64, 102, -90, 43, -64, -101, 111, 79, 88, -16, 92, -94, 77, 16, -91, 105, -11, 40, 115, 111, -117, -13, -111, -79, 9, -17, 58, -49, -6, -108, -112, -63, 47, 6, 61, -67, -108, 48, 16, -49, -41, -107, -87, 61, 3, 5, 70, -111, -49, 27, 12, -117, -66, -93, -85, -72, -42, 29, 67, 15, -107, 100, 111, 13, 112, 20, 27, -3, 28, 16, -96, 58, -128, -78, -104, 14, -108, -48, 86, 110, 123, -18, 104, -2, 20, -73, 33, 46, -12, -66, 111, -42, 44, -79, -80, 114, -47, -101, -70, 28, -122, -122, -49, -30, -20, -2};
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
    msg.setTimeStamp(0.243648886176);
    msg.setSource(5081U);
    msg.setSourceEntity(72U);
    msg.setDestination(27760U);
    msg.setDestinationEntity(63U);
    msg.uid = 71U;
    msg.frag_number = 215U;
    msg.num_frags = 52U;
    const char tmp_msg_0[] = {-102, 104, -55, -29, -33, -94, -118, -64, -101, 33, -47, 34, 39, -29, 71, 79, 35, -92, 38, 74, -67, 13, -34, -17, 120, 113, 17, 79, -32, 100, 116, 117, -55, 100, 44, -9, -42, 33, -48, -119, 2, 105, 107, 74, -83, -13, 46, -112, -98, 1, -25, 89, -78, 28, 17, 17, -32, 112, -57, 36, -109, 22, 26, 118, -38, 7, 12, 15, 95, 75, 50, -75, -27, -104, 105, 68, 43, -77, 14, 3, 97, -30, -56, -3, 96, 86, 19, 28, 58, -22, -125, -17, 72, -128, 126, -110, 76, -78, 7, -72, 55, -47, 85, 34, -13, -116, 79, 108, -18, 14, -15, -105, 118, 82, -22, -49, -27, -73, 7, 115, 85, -62, -74, -55, -36, -102, -110, 4, 23, -21, 55, 20, 33, -22, -58, -29, 111, 0, 14, -75, 45, 66, -87, -66, -74, 7, -118, -23, 41, 122, -37, -69, 98, -83, 110, 30, 21, -109, 116, -58, -51, 84, -53, -119, 35, 34, 34, -101, 109, 63, 47, 82, 34, 20, -95, -125, 21, -80, 91, 48, 26, 110, -63, -91, 98, -38};
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
    msg.setTimeStamp(0.294508118931);
    msg.setSource(14499U);
    msg.setSourceEntity(242U);
    msg.setDestination(14752U);
    msg.setDestinationEntity(141U);
    msg.uid = 218U;
    msg.frag_number = 47U;
    msg.num_frags = 149U;
    const char tmp_msg_0[] = {24, 83, -50, 120, -56, 92, -113, -98, -59, -41, -79, -115, -6, -119, -99, -2, -114, -127, -23, -88, 125, 46, -62, -80, -35, -117, 103, -121, 20, 58, -116, 75, 10, -118, 32, -68, 105, 34, 5, -38, -72, -62, -94, -76, -127, -81, 25, 2, 56, -122, -34, -45, 43, 48, -53, -100, 110, -114, 51, -118, 68, 49, -23, -27, -77, 0, -9, 80, -4, -67, 26, 53, -106, -26, 107, 50, -48, -51, -40, 19, 112, -105, -27, 20, 0, 16, 92, -116, -57, 10, 45, -80, 69, -33, -63, -106, -58, 52, -84, -71, 122, -69, -11, -6, 30, 47, -72, 114, -121, 4, 53, 55, 88, -25, -34, 48, 33, 17, 71, 28, -18, -115, 44, -108, -44, 109, -52, 20, -1, -124, 29, 115, 32, -99, 87, -84, 92, 1};
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
    msg.setTimeStamp(0.840317994079);
    msg.setSource(54466U);
    msg.setSourceEntity(74U);
    msg.setDestination(52853U);
    msg.setDestinationEntity(156U);
    msg.content_type.assign("FAROEZDYTGSPCNATCBLVHMGWQBXMFKHMBNUIVXZOCOUQBHMZAGDJKWWSWMHFJUYZXVUOGYPFULFYGHLONBLUJPFQHZCTSZSDXEOYWTVUOTMTUIJYLGYRSLQOXRNTIPBGULWXEIZTKCJIVRNNIGAPKYAQNOQPERPIUHSICRVEJMYMWRKELDLVERSSWATGZPSBSOBNDDXDRAKDWCFPMTDFJVNAFFERNJAGBAKHQVVCEH");
    const char tmp_msg_0[] = {59, -63, 73, -68, 6, 125, -6, 26, -31, 42, -50, -48, 34, 71, 32, -15, 74, 53, -29, 15, 123, -1, 124, 96, 62, -96, 31, 65, -32, -11, 23, 89, 33, 12, -111, -105, -84, 2, 109, -28, -119, -108, -78, -62, 99, 52, 16, 118, -90, -18, -29, 42, 100, -30, 67, 91, 44, 63, 1, -18, -128, 30, 62, 122, -30, 56, 25, -20, -78, 37, 64, 0, -108, 80, 116, -77, 70, 73, 65, -66, 49, -71, 70, 58, -94, 2, -27, 64, -104, -105, 82, -99, -19, 71, 61, -94, -4, 15, 49, 58, -85, 22, 8, -67, -123, -115, 104, 51, -30, -47, -85, 5, 96, -49, 89, -7, -62, -122, -5, 92, 4, -22, -79, 122, 25, 76, -29, 66, 57, -3, -109, 37, -8, -119, -98, 62, -21, -107, 5, 8, -98, 9, 5, 72, -120, -82, 30, -15, -30, -44, -39, 118, -73, 11, 3, 88, 101, -45, 56, 80, -52, -92, -74, -25, -48, -97, 84, 80, -53};
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
    msg.setTimeStamp(0.606418910579);
    msg.setSource(5566U);
    msg.setSourceEntity(83U);
    msg.setDestination(46395U);
    msg.setDestinationEntity(85U);
    msg.content_type.assign("FRPARICLXECZLXKBTYNDGICAHSECQYNXCMWGTJUDEUAXEOIPFBAZYWDMVDFHZHMJMQPONMLJYHMSCUMETRJWZLZJCHXBZAXVKHDGILTKNUTWPDRUFOWTYKNNDSSZBNLLQBGFLSRCAXCAJISDARWVFVBPKEKIIRZMPUTMW");
    const char tmp_msg_0[] = {79, 101, -50, 115, -89, 108, -83, 55, 71, 104, 25, -44, 15, 125, -102, 14, 33, -81, -89, 71, -92, -84, 26, -93, 105, 15, 72, -10, -70, 68, -100, -40, 106, 15, -71, -121, 126, -44, 65, -30, 18, -116, 95, 33, 103, 99, 53, 123, -89, 44, -71, 65, 61, -125, 70, 33, 90, 67, -125, 113, -9, 82, 99, 74, -81, -89, 0, 17, -98, 124, 63, 5, 67, -24, 56, -70, 82, -31, 0, -67, 34, 25, 10, 21, 21, 61, 121, -15, 4, 39, 62, -45, 116, -59, -6, -84, 117, -4, 61, 30, -31, -66, 88, 83, -23, 87, -1, -108, -48, -48, -33, 28, 84, 60, -46, 121, 80, -60, -55, 90, -127, 40, 124, 91, -101, 18, 92, 54, 39, 89, 69, -77, 55, -16, -104, -120, -80, 59, 51, 11, 34, -89, 70, 102, -37, -7, -35, 111, 125, -8, 78, 47, -114, -10, -124, -84, 76, -25, -46, -60, 16, 44, 44, -100, -106, 97, -114, 125, 79, 102, 2, 38, -85, 0, -62, 14, -106, 19, 123, 116, -112, 95, 7, 15, 63, -112, 51, -116, -116, -70, -18, -109, -52, -74, 22, 104, 104, 9, 8, -92, 40, -124, -121, -126, 2, -103, -42, -1, -49, -77, -5, 55, 82, -64, -68, -21, -20, -7, -21, -65, 116, -34, 104, 18, 123, -52, -35, 69, 122, 105, -85, -106, 1, 14, 115, 39, 117, 103, 70, 89, 106, 72, 16};
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
    msg.setTimeStamp(0.527548954247);
    msg.setSource(2220U);
    msg.setSourceEntity(69U);
    msg.setDestination(59175U);
    msg.setDestinationEntity(161U);
    msg.content_type.assign("JHFQDSFCXEFSHFJNMNUKYLVQTLERUWBXXLTJGKOWMGEOOWDNPYHRIGCNTBDDZZALQASYHEJRIWVLGVGIECBDXCHVPSUKNDFNRJERISZPFGOMWCRBLUHADOEBFAUNTETK");
    const char tmp_msg_0[] = {-28, -38, -72, -21, -18, -66, -36, 61, -43, 64, 10, 106, -47, -60, -106, -72, -69, 70, -33, -21, 51, -50, -16, 91, 18, 99, -65, 12, 67, -9, 101, 104, 1, 28, -1, -100, -82, 106, 47, -50, 40, 82, -53, -12, 2};
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
    msg.setTimeStamp(0.932390057361);
    msg.setSource(28912U);
    msg.setSourceEntity(95U);
    msg.setDestination(3402U);
    msg.setDestinationEntity(100U);

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
    msg.setTimeStamp(0.924972938488);
    msg.setSource(45190U);
    msg.setSourceEntity(110U);
    msg.setDestination(60757U);
    msg.setDestinationEntity(197U);

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
    msg.setTimeStamp(0.0896637060029);
    msg.setSource(63116U);
    msg.setSourceEntity(112U);
    msg.setDestination(37362U);
    msg.setDestinationEntity(191U);

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
    msg.setTimeStamp(0.407531089303);
    msg.setSource(48855U);
    msg.setSourceEntity(83U);
    msg.setDestination(53419U);
    msg.setDestinationEntity(123U);
    msg.target = 8401U;
    msg.bearing = 0.495179373349;
    msg.elevation = 0.796027616976;

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
    msg.setTimeStamp(0.314984177041);
    msg.setSource(30368U);
    msg.setSourceEntity(19U);
    msg.setDestination(11591U);
    msg.setDestinationEntity(22U);
    msg.target = 23417U;
    msg.bearing = 0.521668389219;
    msg.elevation = 0.582310754307;

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
    msg.setTimeStamp(0.290693125723);
    msg.setSource(36186U);
    msg.setSourceEntity(150U);
    msg.setDestination(9244U);
    msg.setDestinationEntity(11U);
    msg.target = 24151U;
    msg.bearing = 0.0909747763723;
    msg.elevation = 0.292893770754;

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
    msg.setTimeStamp(0.344177030297);
    msg.setSource(36410U);
    msg.setSourceEntity(115U);
    msg.setDestination(15035U);
    msg.setDestinationEntity(115U);
    msg.target = 42205U;
    msg.x = 0.26734063669;
    msg.y = 0.303299356491;
    msg.z = 0.872942809702;

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
    msg.setTimeStamp(0.516420332378);
    msg.setSource(41282U);
    msg.setSourceEntity(241U);
    msg.setDestination(41867U);
    msg.setDestinationEntity(37U);
    msg.target = 27319U;
    msg.x = 0.0429061385229;
    msg.y = 0.405091577304;
    msg.z = 0.309093363376;

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
    msg.setTimeStamp(0.407184321426);
    msg.setSource(5793U);
    msg.setSourceEntity(41U);
    msg.setDestination(50708U);
    msg.setDestinationEntity(22U);
    msg.target = 65012U;
    msg.x = 0.69991453868;
    msg.y = 0.551633367445;
    msg.z = 0.467891468952;

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
    msg.setTimeStamp(0.801392332228);
    msg.setSource(44879U);
    msg.setSourceEntity(236U);
    msg.setDestination(57428U);
    msg.setDestinationEntity(68U);
    msg.target = 29849U;
    msg.lat = 0.858161278565;
    msg.lon = 0.841257532912;
    msg.z_units = 232U;
    msg.z = 0.900680258869;

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
    msg.setTimeStamp(0.386641758831);
    msg.setSource(62546U);
    msg.setSourceEntity(216U);
    msg.setDestination(45956U);
    msg.setDestinationEntity(58U);
    msg.target = 58279U;
    msg.lat = 0.219394697823;
    msg.lon = 0.924044746774;
    msg.z_units = 166U;
    msg.z = 0.837517227375;

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
    msg.setTimeStamp(0.251521719483);
    msg.setSource(32998U);
    msg.setSourceEntity(183U);
    msg.setDestination(26927U);
    msg.setDestinationEntity(129U);
    msg.target = 63660U;
    msg.lat = 0.922995304842;
    msg.lon = 0.744850232277;
    msg.z_units = 111U;
    msg.z = 0.173883571326;

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
    msg.setTimeStamp(0.0221783485091);
    msg.setSource(34863U);
    msg.setSourceEntity(161U);
    msg.setDestination(2937U);
    msg.setDestinationEntity(204U);
    msg.locale.assign("WIAIOLKBMPPELFKDNVTZOYVPKWUQHJGWRXYZQPLAZENAOKOQUCJRAVPTQBVRIDEWMTBONDDORRKNWLSZEMSNPKUIBTYMCFLNFNQGTATQUMOJCHPZNLVXLOZFMKWZKSUMAVRYUXEN");
    const char tmp_msg_0[] = {120, 101, -101, -70, 95, 71, 56, 33, -62, 96, 98, 42, 120, 122, -7, 32, 80, 10, 7, 91, -94, -126, 1, 97, 113, 126, -105, 66, 29, -53, -57, 82, 91, 5, -26, -72, -30, 111, 30, -94, -52, -8, -28, 38, 75, -96, -63, 94, 82, -83, 112, -123, 79, 47, -33, -72, -35, 80, -37, 52, 11, -90, 115};
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
    msg.setTimeStamp(0.654088577289);
    msg.setSource(45468U);
    msg.setSourceEntity(207U);
    msg.setDestination(18323U);
    msg.setDestinationEntity(58U);
    msg.locale.assign("URXGYCENYSXHNOTVXIHAICBFILYWUQLTLKXBSFKWXBT");
    const char tmp_msg_0[] = {45, 6, 49, 92, -67, 113, -29, 49, 84, 52, -48, -33, 42, 90, -35, -1, 6, -114, 55, -46, -13, 98, 7, -32, -76, -59, 5, -102, -46, 15, -46, -21, -120, -79, -83, 48, -77, -103, -77, -42, 76, 96, -19, -69, -75, 126, -116, 105, 13, 32, -107, 104, -13, -105, -63, -77, -117, 125, -126, -81, -117, 5, 23, -85, 58, -95, 12, 64, 46, -66, -75, -24, 5, -124, -6, 91, -30, -36, -35, -28, -75, -23, 97, 33, 6, -25, -41, 65, -123, -122, -123, 107, 23, -41, 21, 119, 70, -106, -44, 78, 21, 53, -116, 39, 10, 62, 60, -33, 118, 106, -58, 52, 71, 124, -54, 38, 42, -116, -111, 24, -118, 7, 107, -80, 105, -37, -84, 99, 40, 111, 0, -90, 33, -22, -26, -18, 74, -104, -71, 80, 123, 27};
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
    msg.setTimeStamp(0.161688948311);
    msg.setSource(37458U);
    msg.setSourceEntity(53U);
    msg.setDestination(16655U);
    msg.setDestinationEntity(174U);
    msg.locale.assign("CTZPVMIRDREVBB");
    const char tmp_msg_0[] = {-112, -81, 101, 51, 72, 105, 20, 18, 39, -42, 36, -66, -109, 3, -110, -39, -81, 74, -65, 95, 89, 108, 96, 103, -28, 77, -92, 17, 25, 61, 1, -127, 67, 51, -72, 6, 78, 96, 66, -65, -16, -59, 76, 92, -75, 2, -63, 87, -104, -84, 85, -70, -103, -81, 120, 41, -126, 31, -65, -123, -112, 63, 3, 18, 61, -97, 66, 30, 3, 63, 122, -59, 37, 19, -69, -42, 46, 14, 14, -32, 100, -110, 20, -120, -115, 122, 94, 126, 41, 122, -12, 117, -80, -94, -20, -119, 78, -74, -9, 49, 68, 1, -65, -9, -83, -2, -50, -105, -79, -63, 80, 79, 87, -1, -51, 42, -85, -80, 43, 37, -104, 66, 91, -128, 25, 47, -69, 121, 62, -114, -7, 81, 14, 83, 117, -70, -90, -54, -90, -74, -76, 84, -60, 93, 90, -106, -98, -72, 20, 121, 50, -5, 123, -80, 100, -88, -82, -59, -81, -6, -30, 87, 49, -50, 112, -27, 74, 107, 101, 70, -5, -123, -24, 88, 94, 107, -75, 121, 59, -107, 73, -108, 102, -75, -108, -32, -64, 13, -68, -33, 88, 26, -113, -47, 113, 39, -53, 54, 39, 15, 78, 121, -41, -118, -21, -78, 62, -53, -113, 49, -120, -74, 77, 111, -65, -33, 33, 25, -53, -50, 101, 34, 77, 9, -121, 62, -7, -126, 52, 118, 87, 103, -29, 77, 98, 83, -9};
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
    msg.setTimeStamp(0.959168289874);
    msg.setSource(13691U);
    msg.setSourceEntity(162U);
    msg.setDestination(2313U);
    msg.setDestinationEntity(24U);

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
    msg.setTimeStamp(0.2651015778);
    msg.setSource(36060U);
    msg.setSourceEntity(236U);
    msg.setDestination(57414U);
    msg.setDestinationEntity(185U);

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
    msg.setTimeStamp(0.273320868901);
    msg.setSource(4472U);
    msg.setSourceEntity(182U);
    msg.setDestination(19791U);
    msg.setDestinationEntity(230U);

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
    msg.setTimeStamp(0.0741334633198);
    msg.setSource(33396U);
    msg.setSourceEntity(66U);
    msg.setDestination(16420U);
    msg.setDestinationEntity(3U);
    msg.camid = 125U;
    msg.x = 15257U;
    msg.y = 15440U;

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
    msg.setTimeStamp(0.0270125382808);
    msg.setSource(13284U);
    msg.setSourceEntity(231U);
    msg.setDestination(64565U);
    msg.setDestinationEntity(186U);
    msg.camid = 75U;
    msg.x = 47159U;
    msg.y = 55503U;

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
    msg.setTimeStamp(0.956227225378);
    msg.setSource(46397U);
    msg.setSourceEntity(237U);
    msg.setDestination(47087U);
    msg.setDestinationEntity(213U);
    msg.camid = 68U;
    msg.x = 29312U;
    msg.y = 63570U;

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
    msg.setTimeStamp(0.937306247537);
    msg.setSource(49026U);
    msg.setSourceEntity(70U);
    msg.setDestination(3807U);
    msg.setDestinationEntity(241U);
    msg.camid = 196U;
    msg.x = 41623U;
    msg.y = 3011U;

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
    msg.setTimeStamp(0.288536060119);
    msg.setSource(53003U);
    msg.setSourceEntity(138U);
    msg.setDestination(47966U);
    msg.setDestinationEntity(124U);
    msg.camid = 152U;
    msg.x = 41988U;
    msg.y = 55270U;

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
    msg.setTimeStamp(0.592606916866);
    msg.setSource(27071U);
    msg.setSourceEntity(17U);
    msg.setDestination(52613U);
    msg.setDestinationEntity(113U);
    msg.camid = 42U;
    msg.x = 4454U;
    msg.y = 31447U;

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
    msg.setTimeStamp(0.734477501766);
    msg.setSource(25258U);
    msg.setSourceEntity(207U);
    msg.setDestination(56240U);
    msg.setDestinationEntity(75U);
    msg.tracking = 174U;
    msg.lat = 0.524867468263;
    msg.lon = 0.580349537779;
    msg.x = 0.858881036854;
    msg.y = 0.96103873968;
    msg.z = 0.376014877123;

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
    msg.setTimeStamp(0.895407919532);
    msg.setSource(7752U);
    msg.setSourceEntity(96U);
    msg.setDestination(6314U);
    msg.setDestinationEntity(185U);
    msg.tracking = 178U;
    msg.lat = 0.0643019390419;
    msg.lon = 0.653829284371;
    msg.x = 0.990810494358;
    msg.y = 0.604814622802;
    msg.z = 0.520615758728;

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
    msg.setTimeStamp(0.182357783029);
    msg.setSource(7519U);
    msg.setSourceEntity(11U);
    msg.setDestination(45027U);
    msg.setDestinationEntity(128U);
    msg.tracking = 205U;
    msg.lat = 0.185769638536;
    msg.lon = 0.228965843334;
    msg.x = 0.837462086222;
    msg.y = 0.956554379694;
    msg.z = 0.931034064939;

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
    msg.setTimeStamp(0.470649786907);
    msg.setSource(22825U);
    msg.setSourceEntity(6U);
    msg.setDestination(8372U);
    msg.setDestinationEntity(156U);
    msg.target.assign("DVAOYVPLAUYGSBOYPWAZPMLUQNTQWKQJMPFUMNKLREZULXGUXUXDYWSEMGNTYHAATZVBGHIBUQCRSRIOQALOLWZHQHKBBXLRBZWARDIRWIJHSW");
    msg.lbearing = 0.748695444158;
    msg.lelevation = 0.94384996975;
    msg.bearing = 0.496817777499;
    msg.elevation = 0.911264179494;
    msg.phi = 0.410355827799;
    msg.theta = 0.926860504343;
    msg.psi = 0.923878611879;
    msg.accuracy = 0.822186413312;

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
    msg.setTimeStamp(0.857661753222);
    msg.setSource(59730U);
    msg.setSourceEntity(83U);
    msg.setDestination(3463U);
    msg.setDestinationEntity(217U);
    msg.target.assign("KHDXPPGFBIYLJXIZVWNXKURRWVMGPAXCLXKGBAGHQQMCSEKVZUBPOTNQQRTMCCIWXJEUPMCHJZGYCNMCKOAKQDYTIFLHEJXRNZGRBTFSUQEEKIBFUSPFKBWIWZHFODBJVYFWNYRXLFOOPVLVJXUEWYNXVWSUDMLEIUZPQNZJYOOGVRSJBOTNIHTOWNYTZADABDYAHTUFSCNQTAVMLCYKBIAMQMRTOMRKSZHSS");
    msg.lbearing = 0.793060704054;
    msg.lelevation = 0.926641434073;
    msg.bearing = 0.68047804938;
    msg.elevation = 0.503812309797;
    msg.phi = 0.691063769308;
    msg.theta = 0.510587472908;
    msg.psi = 0.434805639076;
    msg.accuracy = 0.176185570515;

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
    msg.setTimeStamp(0.65930534508);
    msg.setSource(48100U);
    msg.setSourceEntity(26U);
    msg.setDestination(41662U);
    msg.setDestinationEntity(40U);
    msg.target.assign("IDDXYPBVPFAPIDUJXESZULUVJSWYJEURCIGSMHEDUXTGVNIUQXVKAJMOZQWKT");
    msg.lbearing = 0.483807102696;
    msg.lelevation = 0.102325428441;
    msg.bearing = 0.965122582579;
    msg.elevation = 0.304340393188;
    msg.phi = 0.789567798561;
    msg.theta = 0.623024679617;
    msg.psi = 0.414369676123;
    msg.accuracy = 0.900634783703;

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
    msg.setTimeStamp(0.0405691748984);
    msg.setSource(674U);
    msg.setSourceEntity(72U);
    msg.setDestination(7896U);
    msg.setDestinationEntity(86U);
    msg.target.assign("ZIIKXEOVGSNBBDXOGZDUGJSALMDWHYMGCOOQEYYAFKHLGLIRATCXBTZHGMGWJGIVXWFHFMVHZPOICNPNCJASDMOPPUQBAABSVMZUCBPBJDCWLVTYQLWTFNMRWSOQGFEODNYTAKTRFEJDZKFZYHTSCNXVTRRSHIRBGRKRUEFYTQZJXPYU");
    msg.x = 0.14494983533;
    msg.y = 0.0470562333007;
    msg.z = 0.546375604558;
    msg.n = 0.946909152124;
    msg.e = 0.432122004402;
    msg.d = 0.51110756609;
    msg.phi = 0.435867365742;
    msg.theta = 0.730401212417;
    msg.psi = 0.271133377712;
    msg.accuracy = 0.0468283565375;

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
    msg.setTimeStamp(0.938528779777);
    msg.setSource(50932U);
    msg.setSourceEntity(54U);
    msg.setDestination(60736U);
    msg.setDestinationEntity(30U);
    msg.target.assign("KUPNRHJDGNZONAKBYCHAXIQNPEPPZS");
    msg.x = 0.951639476209;
    msg.y = 0.115444756623;
    msg.z = 0.0955310139173;
    msg.n = 0.119910253039;
    msg.e = 0.267196028459;
    msg.d = 0.804649252636;
    msg.phi = 0.592816639814;
    msg.theta = 0.518505946239;
    msg.psi = 0.529978414827;
    msg.accuracy = 0.974261113124;

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
    msg.setTimeStamp(0.671073894389);
    msg.setSource(14680U);
    msg.setSourceEntity(163U);
    msg.setDestination(37134U);
    msg.setDestinationEntity(142U);
    msg.target.assign("LPXRFTQTKAYYKVVJDWXDTQGZESOIXKSVOBEYYYENRLGTZPAHPAILCACWQPQWOXCDMQBJCLOCBRXKAEBGWINGAYVPEMAHJUIYHNZVSTMSNFYFFTXIAAJQRMULUMQORMULODWLMJSIHPOHFZBUFVUWZPEVICWCNZUHMSYIBVDRQBYDSPNFFRRNCPEFJHBZGTKKHQWIRVCXVAGSKMEJ");
    msg.x = 0.864670820707;
    msg.y = 0.45139659954;
    msg.z = 0.330665394797;
    msg.n = 0.489444726916;
    msg.e = 0.143699199631;
    msg.d = 0.943848397563;
    msg.phi = 0.475803314752;
    msg.theta = 0.554754217549;
    msg.psi = 0.962566515837;
    msg.accuracy = 0.203818170509;

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
    msg.setTimeStamp(0.495070071723);
    msg.setSource(52363U);
    msg.setSourceEntity(136U);
    msg.setDestination(22815U);
    msg.setDestinationEntity(46U);
    msg.target.assign("DDULUVJHTPRRZ");
    msg.lat = 0.457578291236;
    msg.lon = 0.219708334405;
    msg.z_units = 151U;
    msg.z = 0.940655113206;
    msg.accuracy = 0.438003503024;

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
    msg.setTimeStamp(0.851630163752);
    msg.setSource(55818U);
    msg.setSourceEntity(56U);
    msg.setDestination(58666U);
    msg.setDestinationEntity(220U);
    msg.target.assign("ZDZNFEEMIIGJQNRWBLZQPMMYBHSADZZTTTKRVILHGDMWXWHRIEHWBXKQXUJOAACUCIXGOMUUNVFEIHXVQQWKLJWMSVVUJ");
    msg.lat = 0.987533817383;
    msg.lon = 0.576061029652;
    msg.z_units = 17U;
    msg.z = 0.761930962617;
    msg.accuracy = 0.216541013606;

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
    msg.setTimeStamp(0.065139850342);
    msg.setSource(56832U);
    msg.setSourceEntity(127U);
    msg.setDestination(54073U);
    msg.setDestinationEntity(34U);
    msg.target.assign("RRJSSYKXLPNAQHDQALCWVIGHUEPWEXZYFKOVSIZBNFDKEEYFJOBZFRHNWIHWAYOVPSRSBVVXMROGOMQGARYLZTWITXCOVKXGWQZCCCNNISOEXQXZPIENJJBOJUTVSEDMVWKPQFYULHJSDWNGMYPARJUNDPTAPUTZJMDTYKXFUCRHKVFSBENQWRTBUQNMBDHBTUWGGILZCKJLUBMAVGLCDRKTPFCQJOLKLZF");
    msg.lat = 0.111226087906;
    msg.lon = 0.382688469172;
    msg.z_units = 53U;
    msg.z = 0.724290315688;
    msg.accuracy = 0.575270420409;

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
    msg.setTimeStamp(0.81528389755);
    msg.setSource(45447U);
    msg.setSourceEntity(110U);
    msg.setDestination(21347U);
    msg.setDestinationEntity(116U);
    msg.name.assign("SYFETAMUFIZNRSBNMP");
    msg.lat = 0.642855914981;
    msg.lon = 0.373437820623;
    msg.z = 0.557806362238;
    msg.z_units = 228U;

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
    msg.setTimeStamp(0.155788954807);
    msg.setSource(13565U);
    msg.setSourceEntity(149U);
    msg.setDestination(57412U);
    msg.setDestinationEntity(195U);
    msg.name.assign("ZOSGBLXCZGWXATJMTZCMV");
    msg.lat = 0.346606937475;
    msg.lon = 0.779860445004;
    msg.z = 0.682961820802;
    msg.z_units = 64U;

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
    msg.setTimeStamp(0.515744913802);
    msg.setSource(28568U);
    msg.setSourceEntity(138U);
    msg.setDestination(22422U);
    msg.setDestinationEntity(56U);
    msg.name.assign("UYADFWUCSRKXIVBMOVXFDJGSUYRVVPBLKNYDGEQQZZTPENGJSFVCBSZTANHXYONGNABNJIHUOPTIXIFMHLLNHQQUGCZPJREJFMNAOYAXTOIMFIDLGJBMWAIRBTKAB");
    msg.lat = 0.925982482171;
    msg.lon = 0.905951762822;
    msg.z = 0.646087342457;
    msg.z_units = 153U;

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
    msg.setTimeStamp(0.807029002503);
    msg.setSource(8253U);
    msg.setSourceEntity(222U);
    msg.setDestination(53322U);
    msg.setDestinationEntity(31U);
    msg.op = 108U;

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
    msg.setTimeStamp(0.631840207037);
    msg.setSource(32293U);
    msg.setSourceEntity(76U);
    msg.setDestination(39037U);
    msg.setDestinationEntity(26U);
    msg.op = 44U;

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
    msg.setTimeStamp(0.104200406006);
    msg.setSource(3500U);
    msg.setSourceEntity(249U);
    msg.setDestination(57563U);
    msg.setDestinationEntity(93U);
    msg.op = 186U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("YDQJBDKOMD");
    tmp_msg_0.lat = 0.750403776731;
    tmp_msg_0.lon = 0.642069893061;
    tmp_msg_0.z = 0.339361288167;
    tmp_msg_0.z_units = 246U;
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
    msg.setTimeStamp(0.821201165969);
    msg.setSource(23054U);
    msg.setSourceEntity(226U);
    msg.setDestination(63249U);
    msg.setDestinationEntity(203U);
    msg.value = 0.849242398701;
    msg.type = 163U;

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
    msg.setTimeStamp(0.131744172105);
    msg.setSource(21139U);
    msg.setSourceEntity(9U);
    msg.setDestination(43024U);
    msg.setDestinationEntity(136U);
    msg.value = 0.648917028694;
    msg.type = 121U;

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
    msg.setTimeStamp(0.73529448201);
    msg.setSource(59272U);
    msg.setSourceEntity(188U);
    msg.setDestination(60444U);
    msg.setDestinationEntity(117U);
    msg.value = 0.870357135038;
    msg.type = 66U;

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
    msg.setTimeStamp(0.668505253533);
    msg.setSource(5871U);
    msg.setSourceEntity(79U);
    msg.setDestination(39577U);
    msg.setDestinationEntity(149U);
    msg.value = 0.268394287657;

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
    msg.setTimeStamp(0.310057110591);
    msg.setSource(61254U);
    msg.setSourceEntity(25U);
    msg.setDestination(52106U);
    msg.setDestinationEntity(218U);
    msg.value = 0.10268004608;

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
    msg.setTimeStamp(0.426971649719);
    msg.setSource(10349U);
    msg.setSourceEntity(195U);
    msg.setDestination(13112U);
    msg.setDestinationEntity(9U);
    msg.value = 0.634981574783;

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
    msg.setTimeStamp(0.746092616001);
    msg.setSource(26468U);
    msg.setSourceEntity(34U);
    msg.setDestination(51885U);
    msg.setDestinationEntity(91U);
    msg.timestamp_last_service = 0.378934419349;
    msg.time_next_service = 0.728135498713;
    msg.time_motor_next_service = 0.863954133416;
    msg.time_idle_ground = 0.34313284103;
    msg.time_idle_air = 0.0396985775496;
    msg.time_idle_water = 0.191319308544;
    msg.time_idle_underwater = 0.199140642698;
    msg.time_idle_unknown = 0.264657767278;
    msg.time_motor_ground = 0.762566479148;
    msg.time_motor_air = 0.354876962325;
    msg.time_motor_water = 0.962726982058;
    msg.time_motor_underwater = 0.906232329288;
    msg.time_motor_unknown = 0.256918744786;
    msg.rpm_min = 27184;
    msg.rpm_max = 32720;
    msg.depth_max = 0.126847151403;

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
    msg.setTimeStamp(0.416621041098);
    msg.setSource(43665U);
    msg.setSourceEntity(63U);
    msg.setDestination(51804U);
    msg.setDestinationEntity(157U);
    msg.timestamp_last_service = 0.375900194099;
    msg.time_next_service = 0.569562410368;
    msg.time_motor_next_service = 0.19214767575;
    msg.time_idle_ground = 0.680475997502;
    msg.time_idle_air = 0.829011185211;
    msg.time_idle_water = 0.344708216351;
    msg.time_idle_underwater = 0.404517668916;
    msg.time_idle_unknown = 0.417514057543;
    msg.time_motor_ground = 0.416480307523;
    msg.time_motor_air = 0.161585991965;
    msg.time_motor_water = 0.80874104023;
    msg.time_motor_underwater = 0.088986848956;
    msg.time_motor_unknown = 0.780142402448;
    msg.rpm_min = 2055;
    msg.rpm_max = 12575;
    msg.depth_max = 0.601946104114;

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
    msg.setTimeStamp(0.878448722429);
    msg.setSource(19621U);
    msg.setSourceEntity(155U);
    msg.setDestination(52707U);
    msg.setDestinationEntity(162U);
    msg.timestamp_last_service = 0.240139498912;
    msg.time_next_service = 0.360998886803;
    msg.time_motor_next_service = 0.171278685642;
    msg.time_idle_ground = 0.559072257866;
    msg.time_idle_air = 0.160454989171;
    msg.time_idle_water = 0.35181454616;
    msg.time_idle_underwater = 0.321969868635;
    msg.time_idle_unknown = 0.464343230172;
    msg.time_motor_ground = 0.0336297569754;
    msg.time_motor_air = 0.0705034472709;
    msg.time_motor_water = 0.973991471155;
    msg.time_motor_underwater = 0.117078959175;
    msg.time_motor_unknown = 0.721810922944;
    msg.rpm_min = -7295;
    msg.rpm_max = -5694;
    msg.depth_max = 0.00735007639218;

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
    msg.setTimeStamp(0.932490633583);
    msg.setSource(62666U);
    msg.setSourceEntity(16U);
    msg.setDestination(56430U);
    msg.setDestinationEntity(197U);
    msg.severity = 234U;
    msg.text.assign("TKOKFCELLKSGINWMGKXSCLFOXYZAYFKHREGMCDHHDUWBRRTBEGMPOJOGTWAQQYRYQDHIMRFKNXLXQGVDJXUNJSIBBFDSUEXFQBFBZCBHWLVHALXYZYOBORTPIEGLPHVTISNNCVPZRSTPVYPZAUSPJUUQGMHJLOMSDJCRBEQNIHCTNACIZWXSNIJCVPTUKKEXGMDXICAQWQLOMADTKZYNU");

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
    msg.setTimeStamp(0.368114968619);
    msg.setSource(65409U);
    msg.setSourceEntity(241U);
    msg.setDestination(12430U);
    msg.setDestinationEntity(235U);
    msg.severity = 2U;
    msg.text.assign("JGSWYANHKMNBYYBPFKNDGTVEUK");

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
    msg.setTimeStamp(0.195195638519);
    msg.setSource(2703U);
    msg.setSourceEntity(96U);
    msg.setDestination(411U);
    msg.setDestinationEntity(99U);
    msg.severity = 38U;
    msg.text.assign("XXINRPVMDKEBVWQ");

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
    msg.setTimeStamp(0.321300079501);
    msg.setSource(52450U);
    msg.setSourceEntity(82U);
    msg.setDestination(15556U);
    msg.setDestinationEntity(129U);
    msg.channel = -53;
    msg.value = 54019353;
    msg.gain = 196U;

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
    msg.setTimeStamp(0.539912255118);
    msg.setSource(50992U);
    msg.setSourceEntity(163U);
    msg.setDestination(50432U);
    msg.setDestinationEntity(224U);
    msg.channel = 105;
    msg.value = -1182769553;
    msg.gain = 179U;

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
    msg.setTimeStamp(0.701258511761);
    msg.setSource(51192U);
    msg.setSourceEntity(139U);
    msg.setDestination(12207U);
    msg.setDestinationEntity(92U);
    msg.channel = 74;
    msg.value = -326943835;
    msg.gain = 165U;

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
    msg.setTimeStamp(0.849766534424);
    msg.setSource(50101U);
    msg.setSourceEntity(9U);
    msg.setDestination(16193U);
    msg.setDestinationEntity(43U);
    msg.ch01 = 0.322947320707;
    msg.ch02 = 0.864011932867;
    msg.ch03 = 0.180153762694;
    msg.ch04 = 0.575694334685;
    msg.ch05 = 0.646461133662;
    msg.ch06 = 0.789014265952;
    msg.ch07 = 0.0603823017196;
    msg.ch08 = 0.931235282099;
    msg.ch09 = 0.38612294385;
    msg.ch10 = 0.67426344775;
    msg.ch11 = 0.368965718506;
    msg.ch12 = 0.880532023649;
    msg.ch13 = 0.220612579735;
    msg.ch14 = 0.795969069275;
    msg.ch15 = 0.816599443721;
    msg.ch16 = 0.70625021248;

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
    msg.setTimeStamp(0.579244630277);
    msg.setSource(1491U);
    msg.setSourceEntity(177U);
    msg.setDestination(22154U);
    msg.setDestinationEntity(24U);
    msg.ch01 = 0.715637054511;
    msg.ch02 = 0.71451408182;
    msg.ch03 = 0.0271980167746;
    msg.ch04 = 0.852706799799;
    msg.ch05 = 0.200351082203;
    msg.ch06 = 0.680087109449;
    msg.ch07 = 0.374476097272;
    msg.ch08 = 0.645491232281;
    msg.ch09 = 0.345457651733;
    msg.ch10 = 0.521074004463;
    msg.ch11 = 0.0831546037953;
    msg.ch12 = 0.171301860715;
    msg.ch13 = 0.633576188707;
    msg.ch14 = 0.351516422113;
    msg.ch15 = 0.0619025968425;
    msg.ch16 = 0.848150813095;

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
    msg.setTimeStamp(0.647592338406);
    msg.setSource(41149U);
    msg.setSourceEntity(146U);
    msg.setDestination(19060U);
    msg.setDestinationEntity(102U);
    msg.ch01 = 0.218771211781;
    msg.ch02 = 0.663600629802;
    msg.ch03 = 0.227571618366;
    msg.ch04 = 0.867449751529;
    msg.ch05 = 0.412617900278;
    msg.ch06 = 0.575244662447;
    msg.ch07 = 0.144157618332;
    msg.ch08 = 0.794822370486;
    msg.ch09 = 0.545160755503;
    msg.ch10 = 0.877276010767;
    msg.ch11 = 0.975801333042;
    msg.ch12 = 0.589040234731;
    msg.ch13 = 0.622789743263;
    msg.ch14 = 0.185815584245;
    msg.ch15 = 0.826797024267;
    msg.ch16 = 0.247570954467;

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
    msg.setTimeStamp(0.530527178256);
    msg.setSource(53761U);
    msg.setSourceEntity(80U);
    msg.setDestination(62233U);
    msg.setDestinationEntity(183U);
    msg.time = 0.105359705586;
    msg.ang = 0.971631022004;

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
    msg.setTimeStamp(0.164668786231);
    msg.setSource(43722U);
    msg.setSourceEntity(150U);
    msg.setDestination(44928U);
    msg.setDestinationEntity(5U);
    msg.time = 0.739292518492;
    msg.ang = 0.102278712104;

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
    msg.setTimeStamp(0.923933744097);
    msg.setSource(36644U);
    msg.setSourceEntity(139U);
    msg.setDestination(39591U);
    msg.setDestinationEntity(210U);
    msg.time = 0.824022823833;
    msg.ang = 0.964870754834;

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
    msg.setTimeStamp(0.203623190874);
    msg.setSource(36085U);
    msg.setSourceEntity(226U);
    msg.setDestination(55553U);
    msg.setDestinationEntity(83U);
    msg.value = 0.177397343762;

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
    msg.setTimeStamp(0.22683485574);
    msg.setSource(31244U);
    msg.setSourceEntity(225U);
    msg.setDestination(17387U);
    msg.setDestinationEntity(188U);
    msg.value = 0.463098627833;

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
    msg.setTimeStamp(0.996286774665);
    msg.setSource(35751U);
    msg.setSourceEntity(172U);
    msg.setDestination(52542U);
    msg.setDestinationEntity(58U);
    msg.value = 0.659418008623;

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
    msg.setTimeStamp(0.545095669549);
    msg.setSource(52875U);
    msg.setSourceEntity(148U);
    msg.setDestination(64710U);
    msg.setDestinationEntity(65U);
    msg.value = 0.720800224491;

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
    msg.setTimeStamp(0.217114185272);
    msg.setSource(22785U);
    msg.setSourceEntity(254U);
    msg.setDestination(7345U);
    msg.setDestinationEntity(104U);
    msg.value = 0.402743160508;

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
    msg.setTimeStamp(0.890088781638);
    msg.setSource(4347U);
    msg.setSourceEntity(36U);
    msg.setDestination(45146U);
    msg.setDestinationEntity(171U);
    msg.value = 0.259697643533;

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
    msg.setTimeStamp(0.642983174662);
    msg.setSource(24513U);
    msg.setSourceEntity(73U);
    msg.setDestination(64829U);
    msg.setDestinationEntity(18U);
    msg.value = 0.648166420332;

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
    msg.setTimeStamp(0.383378327435);
    msg.setSource(24883U);
    msg.setSourceEntity(167U);
    msg.setDestination(58217U);
    msg.setDestinationEntity(157U);
    msg.value = 0.203383323408;

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
    msg.setTimeStamp(0.812085284034);
    msg.setSource(29955U);
    msg.setSourceEntity(52U);
    msg.setDestination(22200U);
    msg.setDestinationEntity(5U);
    msg.value = 0.435528611377;

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
    msg.setTimeStamp(0.697321920137);
    msg.setSource(24570U);
    msg.setSourceEntity(225U);
    msg.setDestination(8761U);
    msg.setDestinationEntity(125U);
    msg.l2 = -121;
    msg.l3 = 24;
    msg.iridium = 41;
    msg.modem = 0;
    msg.pumps = 17;
    msg.vhf = 21;

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
    msg.setTimeStamp(0.797246444578);
    msg.setSource(60042U);
    msg.setSourceEntity(165U);
    msg.setDestination(46401U);
    msg.setDestinationEntity(237U);
    msg.l2 = -12;
    msg.l3 = -71;
    msg.iridium = -15;
    msg.modem = 41;
    msg.pumps = 90;
    msg.vhf = -66;

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
    msg.setTimeStamp(0.0859955757786);
    msg.setSource(35311U);
    msg.setSourceEntity(224U);
    msg.setDestination(64580U);
    msg.setDestinationEntity(145U);
    msg.l2 = -92;
    msg.l3 = 52;
    msg.iridium = 74;
    msg.modem = 75;
    msg.pumps = 79;
    msg.vhf = -93;

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
    msg.setTimeStamp(0.194477556208);
    msg.setSource(14654U);
    msg.setSourceEntity(80U);
    msg.setDestination(44168U);
    msg.setDestinationEntity(231U);
    msg.angle = 0.16561962849;
    msg.reference.assign("JNOVFKKPHGDPZYHAKQANJKHJCEPUTWJQBCFNPYCVFWZRGJVNUGPVWFDFHIUGZKTJOFVRIWXYFIIKTTFEOEOUEGNVWIZTZXONTCBQAYBYIQKWAMPVQSBLELXSIMOWURIHZSAULWKGXQEXQKQMCCLHXXRNAPPTPCRDDLTCMHDGVVJDBMMMPDUOSMEBMILQFQUWSS");
    msg.speed = 0.0526644979687;

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
    msg.setTimeStamp(0.255979433089);
    msg.setSource(19417U);
    msg.setSourceEntity(58U);
    msg.setDestination(57005U);
    msg.setDestinationEntity(200U);
    msg.angle = 0.719383445813;
    msg.reference.assign("AEOHJQCCJZJMYRZUHVQGYBCQZWCHKLDRZKYRDMKDAJIABJXMNSUBQPTTFTKRXFYPERYYSWVFOPOWMMTMDNCLTDWNEZCDPVLPGYBQUUSHQMSKFAVGGJEIMJZSEUWRBUBPUXXIUVIFSFPLNYDXNWTHBLIWHGRXCECOQGYLFCHFLXANGWZCFAUOTVMXQHNQOUBIRSL");
    msg.speed = 0.613460653039;

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
    msg.setTimeStamp(0.596697179703);
    msg.setSource(5530U);
    msg.setSourceEntity(212U);
    msg.setDestination(63921U);
    msg.setDestinationEntity(8U);
    msg.angle = 0.728128597868;
    msg.reference.assign("HBNOQUTOENTWDLRECZLKHOVBGZYUZAVOTLGPHEIFNMXYXIZGVXKLFONIHKGAWGJYLJWQMSTXQEPEVWKLLCSUNPUVUTCOLXBMHCXEQFJYJGSLFRAYAWZOSJUHWUOWMFIJSMJBDIRQTAJCEAXSHSDJERDBKYKIVRHCGFGMLMMRDJTAPBNIFKCCYPUBRHPUQQPQNBTTONRAHIFKDBZIMFVDDDETFWNQMWOVSSDPXCNZQVZVWRRYKGZ");
    msg.speed = 0.597636496846;

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
    msg.setTimeStamp(0.415823369905);
    msg.setSource(27408U);
    msg.setSourceEntity(179U);
    msg.setDestination(21873U);
    msg.setDestinationEntity(182U);
    msg.angle = 0.860346806494;
    msg.speed = 0.0139538072936;

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
    msg.setTimeStamp(0.248357581598);
    msg.setSource(32804U);
    msg.setSourceEntity(176U);
    msg.setDestination(17125U);
    msg.setDestinationEntity(106U);
    msg.angle = 0.0207628917499;
    msg.speed = 0.876786791703;

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
    msg.setTimeStamp(0.574745224022);
    msg.setSource(52044U);
    msg.setSourceEntity(154U);
    msg.setDestination(23649U);
    msg.setDestinationEntity(15U);
    msg.angle = 0.53262023376;
    msg.speed = 0.0366462152682;

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
    msg.setTimeStamp(0.501906190516);
    msg.setSource(41944U);
    msg.setSourceEntity(228U);
    msg.setDestination(11615U);
    msg.setDestinationEntity(146U);
    msg.dir = 0.35472091564;
    msg.speed = 0.57978755059;

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
    msg.setTimeStamp(0.6630474248);
    msg.setSource(61045U);
    msg.setSourceEntity(227U);
    msg.setDestination(32914U);
    msg.setDestinationEntity(85U);
    msg.dir = 0.594984715856;
    msg.speed = 0.908746897943;

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
    msg.setTimeStamp(0.365366567467);
    msg.setSource(59816U);
    msg.setSourceEntity(31U);
    msg.setDestination(45244U);
    msg.setDestinationEntity(250U);
    msg.dir = 0.668223140826;
    msg.speed = 0.747538784679;

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
    msg.setTimeStamp(0.922552765716);
    msg.setSource(6116U);
    msg.setSourceEntity(105U);
    msg.setDestination(903U);
    msg.setDestinationEntity(52U);
    msg.x = 0.0482980818094;
    msg.y = 0.464499472591;
    msg.z1 = 0.352026503514;
    msg.z2 = 0.16441614369;

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
    msg.setTimeStamp(0.283073181005);
    msg.setSource(27754U);
    msg.setSourceEntity(100U);
    msg.setDestination(22672U);
    msg.setDestinationEntity(220U);
    msg.x = 0.0365266250259;
    msg.y = 0.80773666311;
    msg.z1 = 0.0259812213359;
    msg.z2 = 0.442948021205;

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
    msg.setTimeStamp(0.89087434586);
    msg.setSource(53207U);
    msg.setSourceEntity(226U);
    msg.setDestination(15516U);
    msg.setDestinationEntity(202U);
    msg.x = 0.0316113014089;
    msg.y = 0.657388726318;
    msg.z1 = 0.531694906961;
    msg.z2 = 0.148791837772;

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
    msg.setTimeStamp(0.00623182145328);
    msg.setSource(49677U);
    msg.setSourceEntity(149U);
    msg.setDestination(12486U);
    msg.setDestinationEntity(92U);
    msg.mmsi = 0.584991087794;
    msg.lat = 0.212645520673;
    msg.lon = 0.0475631410999;
    msg.x = 0.19682673334;
    msg.y = 0.473301189248;
    msg.speed = 0.746636287414;
    msg.course = 0.418111975877;
    msg.dist = 0.706265218848;
    msg.length = 0.730612837614;
    msg.width = 0.105346520557;
    msg.o_vect = 0.612663101621;

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
    msg.setTimeStamp(0.136972533631);
    msg.setSource(464U);
    msg.setSourceEntity(170U);
    msg.setDestination(49328U);
    msg.setDestinationEntity(149U);
    msg.mmsi = 0.947373960979;
    msg.lat = 0.241919853119;
    msg.lon = 0.677869723177;
    msg.x = 0.635716510224;
    msg.y = 0.995101602566;
    msg.speed = 0.374408031536;
    msg.course = 0.488689648396;
    msg.dist = 0.493514212643;
    msg.length = 0.676449276695;
    msg.width = 0.976124232417;
    msg.o_vect = 0.531566751874;

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
    msg.setTimeStamp(0.83887449155);
    msg.setSource(36013U);
    msg.setSourceEntity(170U);
    msg.setDestination(56165U);
    msg.setDestinationEntity(151U);
    msg.mmsi = 0.759716844051;
    msg.lat = 0.859348774115;
    msg.lon = 0.53205135585;
    msg.x = 0.412914525626;
    msg.y = 0.581282304659;
    msg.speed = 0.629220238277;
    msg.course = 0.606335877362;
    msg.dist = 0.580323887828;
    msg.length = 0.044025953704;
    msg.width = 0.591639347931;
    msg.o_vect = 0.911335550382;

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
    msg.setTimeStamp(0.681757886216);
    msg.setSource(19530U);
    msg.setSourceEntity(246U);
    msg.setDestination(54689U);
    msg.setDestinationEntity(165U);
    msg.locations.assign("GOMRGIUWYJUMHWYHUDXANZVVOITCELVMEBNTSSTUXJMLETNGBPFHGCKAASDDEABKFUYRJFGZJCJKNWCSDPYFBQZHDIGXGAEDRKJEHOSXGIMQCQJHAAYMTVYZRWJYPHXOQXAHPHYVIMUKZVIVOLGORXQPPQRZAQFEWNNNEWJEZQBBVKTWCOZVORFWMDVWDSILDTFYZLRYGISSOSKQLUUBSTDQLXPCCPULFMJOREN");

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
    msg.setTimeStamp(0.895016422142);
    msg.setSource(57477U);
    msg.setSourceEntity(66U);
    msg.setDestination(58275U);
    msg.setDestinationEntity(55U);
    msg.locations.assign("QINZJNMLXDHJZVFSFTZRSYRSXEYLHILGVTQGQNKECGOJVRQUFHVEPVAPHJYWNMBDULFPETDHSGACASLQWFCEBMMGUILRJZXKADNIEAVWKVOJPHTXZRPKUXTUWIJRKRNZMOYIOCUTPNW");

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
    msg.setTimeStamp(0.0355863053602);
    msg.setSource(57607U);
    msg.setSourceEntity(50U);
    msg.setDestination(48213U);
    msg.setDestinationEntity(234U);
    msg.locations.assign("HPZDSILPVITBHCFAKCORHNZSJDVIDLYMFEWCDJSFXZBRIJTPBOQZUWHVSKFXSEEBDVMATQEZKMBRFKWAMTJBZGEWJTGTFNYCJJMMSYOLLINOAPFIRYGKZIPADMUGSBNVNUTGPYCKHXDEKQGSAQRFRTMACBHXCNLYSXOCKLVRITEJYMXCXNOOVYWWRUSFNOLZORPQPDULOGWIVUQYLUKAQGEDKVGBNWZFHWHXLJAZQWRQUP");

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
    msg.setTimeStamp(0.349863849708);
    msg.setSource(35641U);
    msg.setSourceEntity(214U);
    msg.setDestination(5482U);
    msg.setDestinationEntity(126U);
    msg.value = 0.0681113456989;

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
    msg.setTimeStamp(0.781407029657);
    msg.setSource(22035U);
    msg.setSourceEntity(3U);
    msg.setDestination(60151U);
    msg.setDestinationEntity(82U);
    msg.value = 0.00391668690415;

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
    msg.setTimeStamp(0.439875413502);
    msg.setSource(30386U);
    msg.setSourceEntity(22U);
    msg.setDestination(50776U);
    msg.setDestinationEntity(247U);
    msg.value = 0.774641441177;

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
    msg.setTimeStamp(0.0543614744126);
    msg.setSource(45247U);
    msg.setSourceEntity(133U);
    msg.setDestination(32203U);
    msg.setDestinationEntity(57U);
    msg.beam1 = 0.541623534505;
    msg.beam2 = 0.909065942047;
    msg.beam3 = 0.436558965452;
    msg.beam4 = 0.535270173026;

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
    msg.setTimeStamp(0.401854681605);
    msg.setSource(37802U);
    msg.setSourceEntity(105U);
    msg.setDestination(46602U);
    msg.setDestinationEntity(118U);
    msg.beam1 = 0.830286133231;
    msg.beam2 = 0.0906956853284;
    msg.beam3 = 0.281525568393;
    msg.beam4 = 0.627704761355;

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
    msg.setTimeStamp(0.0572872191671);
    msg.setSource(26085U);
    msg.setSourceEntity(211U);
    msg.setDestination(60078U);
    msg.setDestinationEntity(240U);
    msg.beam1 = 0.799831778895;
    msg.beam2 = 0.175821898978;
    msg.beam3 = 0.491513045436;
    msg.beam4 = 0.882192556289;

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
    msg.setTimeStamp(0.290386284503);
    msg.setSource(14185U);
    msg.setSourceEntity(9U);
    msg.setDestination(44065U);
    msg.setDestinationEntity(139U);
    msg.beam1 = 121U;
    msg.beam2 = 73U;
    msg.beam3 = 220U;
    msg.beam4 = 148U;

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
    msg.setTimeStamp(0.278682782259);
    msg.setSource(198U);
    msg.setSourceEntity(137U);
    msg.setDestination(35031U);
    msg.setDestinationEntity(85U);
    msg.beam1 = 173U;
    msg.beam2 = 6U;
    msg.beam3 = 231U;
    msg.beam4 = 157U;

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
    msg.setTimeStamp(0.948524123388);
    msg.setSource(39666U);
    msg.setSourceEntity(164U);
    msg.setDestination(34310U);
    msg.setDestinationEntity(139U);
    msg.beam1 = 114U;
    msg.beam2 = 12U;
    msg.beam3 = 225U;
    msg.beam4 = 45U;

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
    msg.setTimeStamp(0.790603382989);
    msg.setSource(40023U);
    msg.setSourceEntity(83U);
    msg.setDestination(26210U);
    msg.setDestinationEntity(9U);
    msg.cellposition = 0.79662051212;
    msg.x = 0.121311470729;
    msg.y = 0.695945001157;
    msg.z1 = 0.921697565266;
    msg.z2 = 0.911302483664;
    msg.amp0 = 0.317040961232;
    msg.amp1 = 0.997937367352;
    msg.amp2 = 0.690090432608;
    msg.amp3 = 0.88095815632;
    msg.cor0 = 122U;
    msg.cor1 = 173U;
    msg.cor2 = 110U;
    msg.cor3 = 95U;

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
    msg.setTimeStamp(0.335450712578);
    msg.setSource(8599U);
    msg.setSourceEntity(91U);
    msg.setDestination(50244U);
    msg.setDestinationEntity(76U);
    msg.cellposition = 0.588715217581;
    msg.x = 0.873686479975;
    msg.y = 0.909043662048;
    msg.z1 = 0.430400209597;
    msg.z2 = 0.0659372767429;
    msg.amp0 = 0.409271499059;
    msg.amp1 = 0.983940876485;
    msg.amp2 = 0.534730918159;
    msg.amp3 = 0.131573688998;
    msg.cor0 = 58U;
    msg.cor1 = 55U;
    msg.cor2 = 188U;
    msg.cor3 = 14U;

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
    msg.setTimeStamp(0.632819560158);
    msg.setSource(59924U);
    msg.setSourceEntity(24U);
    msg.setDestination(31743U);
    msg.setDestinationEntity(233U);
    msg.cellposition = 0.0152099248098;
    msg.x = 0.77064737899;
    msg.y = 0.459522660966;
    msg.z1 = 0.434397473748;
    msg.z2 = 0.656623287291;
    msg.amp0 = 0.977367813455;
    msg.amp1 = 0.567052622574;
    msg.amp2 = 0.306656578337;
    msg.amp3 = 0.766922447599;
    msg.cor0 = 94U;
    msg.cor1 = 24U;
    msg.cor2 = 131U;
    msg.cor3 = 33U;

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
    msg.setTimeStamp(0.384961582511);
    msg.setSource(12064U);
    msg.setSourceEntity(38U);
    msg.setDestination(47839U);
    msg.setDestinationEntity(76U);

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
    msg.setTimeStamp(0.408441147397);
    msg.setSource(50773U);
    msg.setSourceEntity(134U);
    msg.setDestination(46985U);
    msg.setDestinationEntity(71U);

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
    msg.setTimeStamp(0.343137071965);
    msg.setSource(23437U);
    msg.setSourceEntity(129U);
    msg.setDestination(24220U);
    msg.setDestinationEntity(67U);

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
    msg.setTimeStamp(0.918109044958);
    msg.setSource(15495U);
    msg.setSourceEntity(54U);
    msg.setDestination(23330U);
    msg.setDestinationEntity(141U);
    msg.serial_no = 2026962301U;
    msg.unix_timestamp = 2897234743U;
    msg.millis = 28174U;
    msg.trans_protocol = 250U;
    msg.trans_id = 2944702929U;
    msg.trans_data = 32372U;
    msg.snr = 117U;
    msg.trans_freq = 54U;
    msg.recv_mem_addr = 37768U;
    msg.lat = 0.324746755729;
    msg.lon = 0.468859025722;

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
    msg.setTimeStamp(0.520448430145);
    msg.setSource(14272U);
    msg.setSourceEntity(36U);
    msg.setDestination(39794U);
    msg.setDestinationEntity(185U);
    msg.serial_no = 1907686629U;
    msg.unix_timestamp = 3419592027U;
    msg.millis = 35608U;
    msg.trans_protocol = 95U;
    msg.trans_id = 2579967998U;
    msg.trans_data = 47782U;
    msg.snr = 203U;
    msg.trans_freq = 234U;
    msg.recv_mem_addr = 4978U;
    msg.lat = 0.439122037965;
    msg.lon = 0.870000765368;

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
    msg.setTimeStamp(0.855745804964);
    msg.setSource(46762U);
    msg.setSourceEntity(251U);
    msg.setDestination(7779U);
    msg.setDestinationEntity(167U);
    msg.serial_no = 277933774U;
    msg.unix_timestamp = 2727096547U;
    msg.millis = 42915U;
    msg.trans_protocol = 235U;
    msg.trans_id = 2213871790U;
    msg.trans_data = 56099U;
    msg.snr = 238U;
    msg.trans_freq = 84U;
    msg.recv_mem_addr = 45091U;
    msg.lat = 0.260337001496;
    msg.lon = 0.509781821669;

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
    msg.setTimeStamp(0.617569973958);
    msg.setSource(42327U);
    msg.setSourceEntity(3U);
    msg.setDestination(1010U);
    msg.setDestinationEntity(228U);
    msg.serial_no = 1648484030U;
    msg.unix_timestamp = 2133505319U;
    msg.temperature = 0.27660916645;
    msg.avg_noise_level = 235U;
    msg.peak_noise_level = 37U;
    msg.recv_listen_freq = 9U;
    msg.recv_mem_addr = 18453U;

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
    msg.setTimeStamp(0.793142897722);
    msg.setSource(61238U);
    msg.setSourceEntity(105U);
    msg.setDestination(38412U);
    msg.setDestinationEntity(128U);
    msg.serial_no = 2687764791U;
    msg.unix_timestamp = 4034020941U;
    msg.temperature = 0.367557932239;
    msg.avg_noise_level = 55U;
    msg.peak_noise_level = 29U;
    msg.recv_listen_freq = 206U;
    msg.recv_mem_addr = 8742U;

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
    msg.setTimeStamp(0.0700736962337);
    msg.setSource(29155U);
    msg.setSourceEntity(226U);
    msg.setDestination(41856U);
    msg.setDestinationEntity(27U);
    msg.serial_no = 2072198477U;
    msg.unix_timestamp = 1651285832U;
    msg.temperature = 0.525419104656;
    msg.avg_noise_level = 2U;
    msg.peak_noise_level = 22U;
    msg.recv_listen_freq = 241U;
    msg.recv_mem_addr = 420U;

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
    msg.setTimeStamp(0.185147371694);
    msg.setSource(5741U);
    msg.setSourceEntity(222U);
    msg.setDestination(33284U);
    msg.setDestinationEntity(42U);
    msg.frequency = 1683412873U;
    msg.info.assign("ZOVAYJTYBLERQLEUJFBSYXE");

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
    msg.setTimeStamp(0.395994819027);
    msg.setSource(49950U);
    msg.setSourceEntity(251U);
    msg.setDestination(7317U);
    msg.setDestinationEntity(190U);
    msg.frequency = 3859287022U;
    msg.info.assign("BBJEJGKUOXYFPZPIAZGUKHMOTZEDKKWAQPPMLDEKHVZYSHROEBWIILRGSLVNZEDBJOOPFIHTKVUQDLUQHGJKYHUMVYOBLUTGGABZOBFJZOYXWHSTZYHTAASRCCMGXMNQMHFRNINJFRLRAX");

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
    msg.setTimeStamp(0.494794077944);
    msg.setSource(45183U);
    msg.setSourceEntity(240U);
    msg.setDestination(8337U);
    msg.setDestinationEntity(78U);
    msg.frequency = 2917668081U;
    msg.info.assign("USGTHWSQJZTVGKVNRUEWHWKPTFAFAEPHUQBAGRSVBIXTCNXJSMJLUVZLCJADVSVMCLPFKDFFMZHDIRUTEYGSKGKXXNFPWOQBIKSTRQIYDJMDGOONHHGEHBULVPPNESEZWIQQEGDCZOYCQZLDRMREITHYRLXIRWFKSJXJBQURBAQWLFVRMAWK");

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
    msg.setTimeStamp(0.647471737204);
    msg.setSource(13502U);
    msg.setSourceEntity(250U);
    msg.setDestination(38416U);
    msg.setDestinationEntity(212U);
    msg.adcp = -22;
    msg.adcp_dur = 327786270U;
    msg.adcp_fr = 3282868901U;
    msg.ctd = 103;
    msg.ctd_dur = 3034094490U;
    msg.ctd_fr = 3822365794U;
    msg.opt = 50;
    msg.opt_dur = 4077154851U;
    msg.opt_fr = 1306213899U;
    msg.tbl = 29;
    msg.tbl_dur = 1797129763U;
    msg.tbl_fr = 4148327043U;
    msg.eco = 119;
    msg.eco_dur = 2435770195U;
    msg.eco_fr = 2399584939U;

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
    msg.setTimeStamp(0.278753931864);
    msg.setSource(8871U);
    msg.setSourceEntity(109U);
    msg.setDestination(23030U);
    msg.setDestinationEntity(89U);
    msg.adcp = -60;
    msg.adcp_dur = 883533287U;
    msg.adcp_fr = 3316426515U;
    msg.ctd = -119;
    msg.ctd_dur = 4064040061U;
    msg.ctd_fr = 745029126U;
    msg.opt = 55;
    msg.opt_dur = 3903087528U;
    msg.opt_fr = 3481872853U;
    msg.tbl = 0;
    msg.tbl_dur = 3491574494U;
    msg.tbl_fr = 1066533293U;
    msg.eco = 0;
    msg.eco_dur = 902744707U;
    msg.eco_fr = 955167389U;

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
    msg.setTimeStamp(0.646392856818);
    msg.setSource(59192U);
    msg.setSourceEntity(130U);
    msg.setDestination(21814U);
    msg.setDestinationEntity(136U);
    msg.adcp = 103;
    msg.adcp_dur = 1402903353U;
    msg.adcp_fr = 2700940976U;
    msg.ctd = -101;
    msg.ctd_dur = 1125990333U;
    msg.ctd_fr = 4163022646U;
    msg.opt = -19;
    msg.opt_dur = 2903677422U;
    msg.opt_fr = 4135253562U;
    msg.tbl = 94;
    msg.tbl_dur = 3683402454U;
    msg.tbl_fr = 2918888032U;
    msg.eco = 91;
    msg.eco_dur = 1005314872U;
    msg.eco_fr = 3123126285U;

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
    msg.setTimeStamp(0.517110421967);
    msg.setSource(58287U);
    msg.setSourceEntity(253U);
    msg.setDestination(9362U);
    msg.setDestinationEntity(18U);
    msg.validity = 5477U;
    msg.type = 206U;
    msg.utc_year = 5904U;
    msg.utc_month = 254U;
    msg.utc_day = 7U;
    msg.utc_time = 0.837834219827;
    msg.lat = 0.297416004754;
    msg.lon = 0.181337100045;
    msg.height = 0.239599831351;
    msg.satellites = 146U;
    msg.cog = 0.31353781241;
    msg.sog = 0.221967051256;
    msg.hdop = 0.745928280808;
    msg.vdop = 0.715273451819;
    msg.hacc = 0.0834801087221;
    msg.vacc = 0.478910900327;

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
    msg.setTimeStamp(0.910490957833);
    msg.setSource(35916U);
    msg.setSourceEntity(152U);
    msg.setDestination(24908U);
    msg.setDestinationEntity(38U);
    msg.validity = 1108U;
    msg.type = 72U;
    msg.utc_year = 64463U;
    msg.utc_month = 237U;
    msg.utc_day = 209U;
    msg.utc_time = 0.472473218562;
    msg.lat = 0.48741114468;
    msg.lon = 0.497962125437;
    msg.height = 0.0487384397397;
    msg.satellites = 93U;
    msg.cog = 0.954518971935;
    msg.sog = 0.737071445389;
    msg.hdop = 0.913650949966;
    msg.vdop = 0.458513105346;
    msg.hacc = 0.230228928952;
    msg.vacc = 0.118157252754;

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
    msg.setTimeStamp(0.301773209298);
    msg.setSource(55365U);
    msg.setSourceEntity(170U);
    msg.setDestination(22578U);
    msg.setDestinationEntity(91U);
    msg.validity = 4281U;
    msg.type = 58U;
    msg.utc_year = 41275U;
    msg.utc_month = 50U;
    msg.utc_day = 24U;
    msg.utc_time = 0.642813520323;
    msg.lat = 0.704736023316;
    msg.lon = 0.868699055371;
    msg.height = 0.693865073953;
    msg.satellites = 107U;
    msg.cog = 0.835584968412;
    msg.sog = 0.367815983927;
    msg.hdop = 0.181499092792;
    msg.vdop = 0.707839373062;
    msg.hacc = 0.237736391288;
    msg.vacc = 0.766863895075;

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

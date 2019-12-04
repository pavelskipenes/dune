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
    msg.setTimeStamp(0.693747951713);
    msg.setSource(8336U);
    msg.setSourceEntity(20U);
    msg.setDestination(5286U);
    msg.setDestinationEntity(174U);
    msg.state = 124U;
    msg.flags = 157U;
    msg.description.assign("YXNZLFSGFNEBMAMVNCYRTHYHUBOWUZGNVGWCLRRTARTWDTMLWRDYMYPFPDAGNSTZVXSURKPYJUWIBHTGYKZROKNVKQEHGSRLUSZGDLGUIBWXOLQQCGEOEXHBSLEQQCPMNJSZCKIQIHUIDMWAOCSIVEJJHFIEETBCBXYPQVGXFQDUAQZSAMOWMNHXFJDTBAAZVAIJVAUYJMZIJPTDKLPRXBFNXSVCKJPPEZNWKIDOOFO");

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
    msg.setTimeStamp(0.357376193867);
    msg.setSource(19607U);
    msg.setSourceEntity(64U);
    msg.setDestination(46518U);
    msg.setDestinationEntity(205U);
    msg.state = 222U;
    msg.flags = 225U;
    msg.description.assign("RQYVBSVLVBUAUUUWQIEKLAICQY");

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
    msg.setTimeStamp(0.946262419868);
    msg.setSource(16184U);
    msg.setSourceEntity(156U);
    msg.setDestination(20232U);
    msg.setDestinationEntity(180U);
    msg.state = 251U;
    msg.flags = 121U;
    msg.description.assign("OUUGSOMIQQBYWZAPEYBJXPWQTSNJKARSWGWOWEDHGYEWQFTAAXHXVOZHAXZUSBBWFEKEHLEAVBDZBCLXRD");

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
    msg.setTimeStamp(0.458350524101);
    msg.setSource(1094U);
    msg.setSourceEntity(6U);
    msg.setDestination(49111U);
    msg.setDestinationEntity(232U);

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
    msg.setTimeStamp(0.739786468807);
    msg.setSource(49652U);
    msg.setSourceEntity(241U);
    msg.setDestination(19440U);
    msg.setDestinationEntity(169U);

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
    msg.setTimeStamp(0.284583625189);
    msg.setSource(21874U);
    msg.setSourceEntity(226U);
    msg.setDestination(42187U);
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
    msg.setTimeStamp(0.553177892307);
    msg.setSource(43291U);
    msg.setSourceEntity(106U);
    msg.setDestination(8032U);
    msg.setDestinationEntity(181U);
    msg.id = 72U;
    msg.label.assign("DFMXPPOOKNVXLXHXPNUHKVIUR");
    msg.component.assign("PSPLXVFJDIUTHFMFFQCGREGGEKEAFUHPZHTSBETU");
    msg.act_time = 35628U;
    msg.deact_time = 33335U;

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
    msg.setTimeStamp(0.860425191052);
    msg.setSource(46454U);
    msg.setSourceEntity(159U);
    msg.setDestination(10650U);
    msg.setDestinationEntity(150U);
    msg.id = 108U;
    msg.label.assign("LFCZYQGQPURZPGJSTUMKMKSKCDRAKYIJBUWNVIVUVRYVEIXFOJCOEOZXFPOKSDQZTFHLIMJAYCKNXDMMVNRYMRHQPPVDFIWGBY");
    msg.component.assign("CFGUJMKCAFVLVJTQXIFWPYFNGVWHQEHQJFOZEDKUHAPTGUEZPWQRUKDJNAPVBAVYDEYZDZRDWYIIPUULMAURCEEXZGVJMYGCSBLJYGNSDGSWGOMAALSYPCHZKOIHTZSVTVQNYRDTJBBKRUSOJKNW");
    msg.act_time = 52099U;
    msg.deact_time = 3626U;

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
    msg.setTimeStamp(0.77313144752);
    msg.setSource(5296U);
    msg.setSourceEntity(69U);
    msg.setDestination(62369U);
    msg.setDestinationEntity(173U);
    msg.id = 254U;
    msg.label.assign("GOMCLMVPBXQXVQFWKSOCPJTYXBPWZKXSDYZMAZBICIZLIEAYODHHPYJUAAURFBQRZNLHWFZNDIXVWCOYYMLUNRC");
    msg.component.assign("LDUZTNTLFTKSELCGPTPCNFTPCWRRSVVMVNNKFZYHNJEXCBJMMWYEYCPRISUSHEQLHPBEGHDXGDDEUAMSHIQCXGUQNDBUROYTMQIAVAYWOLINIMKSLHZKZBSPISZYDWBHRMCQPKILUJFZHQBDFJEWYXSJFOLMQXXZHUZVZJGCAQVOIVJKTJPEBRUNWDFBAOYOPX");
    msg.act_time = 43482U;
    msg.deact_time = 48542U;

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
    msg.setTimeStamp(0.181721521819);
    msg.setSource(55255U);
    msg.setSourceEntity(248U);
    msg.setDestination(29574U);
    msg.setDestinationEntity(59U);
    msg.id = 41U;

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
    msg.setTimeStamp(0.288087651128);
    msg.setSource(36967U);
    msg.setSourceEntity(143U);
    msg.setDestination(40811U);
    msg.setDestinationEntity(211U);
    msg.id = 216U;

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
    msg.setTimeStamp(0.135801645514);
    msg.setSource(2861U);
    msg.setSourceEntity(226U);
    msg.setDestination(24125U);
    msg.setDestinationEntity(139U);
    msg.id = 54U;

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
    msg.setTimeStamp(0.254999054196);
    msg.setSource(58572U);
    msg.setSourceEntity(156U);
    msg.setDestination(38261U);
    msg.setDestinationEntity(206U);
    msg.op = 129U;
    msg.list.assign("QSKUWVZWFDOEBDDAPWAGLTITBNHBZHQGPQEPWIFITIQC");

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
    msg.setTimeStamp(0.0849332987419);
    msg.setSource(60503U);
    msg.setSourceEntity(156U);
    msg.setDestination(28242U);
    msg.setDestinationEntity(63U);
    msg.op = 76U;
    msg.list.assign("HTSZOFJDFNEGFWGPROEYOYQOWYCLSORNJMKCXIHHTXVRNBKYKIMLZTAQWJLSVPFXLTEEFBGZDYWEJHZBRXKVBMMITPKSBPFCEDRTPMQRSPSKZKJAJZVIRJNRETNAJGZSNPMOITBJQVUHVJOWDEHZHGINADAXUGKQGELAVODNGPBYPMHVDXIQLCFFVYPGCAQYALNU");

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
    msg.setTimeStamp(0.990266805932);
    msg.setSource(25633U);
    msg.setSourceEntity(162U);
    msg.setDestination(32255U);
    msg.setDestinationEntity(23U);
    msg.op = 108U;
    msg.list.assign("JGTPCTAOQLZFSVDFAPIIKEOCPAKJFCSXCKWLVHKCCJJPIQVZIMITNZWDNKHCWGRCMSQDNBNKFRTXTSGTBEGTEEJGPMHFOURTOBGMEYSYOABJOVPQFNVUAPKWVAVPWUADNSHZMILLJBGNBSSDWTBYVQZKOWAUKIZYHZHLJGUMRNHTQMUMMYYYEJWLXCQPOVLHRWXUZRLXG");

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
    msg.setTimeStamp(0.377535771638);
    msg.setSource(36975U);
    msg.setSourceEntity(2U);
    msg.setDestination(57579U);
    msg.setDestinationEntity(67U);
    msg.value = 251U;

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
    msg.setTimeStamp(0.383721995617);
    msg.setSource(7264U);
    msg.setSourceEntity(218U);
    msg.setDestination(61392U);
    msg.setDestinationEntity(9U);
    msg.value = 174U;

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
    msg.setTimeStamp(0.0951486815247);
    msg.setSource(62517U);
    msg.setSourceEntity(32U);
    msg.setDestination(59176U);
    msg.setDestinationEntity(62U);
    msg.value = 156U;

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
    msg.setTimeStamp(0.93385747569);
    msg.setSource(20484U);
    msg.setSourceEntity(230U);
    msg.setDestination(22998U);
    msg.setDestinationEntity(41U);
    msg.consumer.assign("GMWXJRLLPEYFWGFAWAXTSIDWATXGIGMJNEDINEIJCCWUDDDSEXRHHYAYOJLESULPMFXHFDATBTXQVLTBOZFANONFPOKKMUWPPHBCPQLCZRQRWEJOFZZP");
    msg.message_id = 58225U;

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
    msg.setTimeStamp(0.157711686867);
    msg.setSource(43049U);
    msg.setSourceEntity(204U);
    msg.setDestination(8507U);
    msg.setDestinationEntity(124U);
    msg.consumer.assign("YTUOLNOEJZBDHACANXGWXLHPOJCRIKTMYLVIEWYKSGTXSBWCQQELVDSQQMKSCTUZFMSAIYIGUNJXDGAOBXKDEB");
    msg.message_id = 39265U;

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
    msg.setTimeStamp(0.514860179509);
    msg.setSource(19371U);
    msg.setSourceEntity(226U);
    msg.setDestination(44970U);
    msg.setDestinationEntity(210U);
    msg.consumer.assign("VIJOOWATPHPTHBLIEPRRSASGVDWVMIUAPSUPVQTZQHEPGJJOHZTAJNGLLMJXDRZXCQVGOUEKLFMKHLPACYXZWGMADUKYZD");
    msg.message_id = 27037U;

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
    msg.setTimeStamp(0.0355150521605);
    msg.setSource(63677U);
    msg.setSourceEntity(239U);
    msg.setDestination(12573U);
    msg.setDestinationEntity(108U);
    msg.type = 31U;

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
    msg.setTimeStamp(0.0712706374115);
    msg.setSource(50487U);
    msg.setSourceEntity(189U);
    msg.setDestination(38943U);
    msg.setDestinationEntity(69U);
    msg.type = 14U;

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
    msg.setTimeStamp(0.0782582970064);
    msg.setSource(50804U);
    msg.setSourceEntity(186U);
    msg.setDestination(62207U);
    msg.setDestinationEntity(30U);
    msg.type = 109U;

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
    msg.setTimeStamp(0.221756352946);
    msg.setSource(55903U);
    msg.setSourceEntity(53U);
    msg.setDestination(51223U);
    msg.setDestinationEntity(75U);
    msg.op = 59U;

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
    msg.setTimeStamp(0.524531988996);
    msg.setSource(60230U);
    msg.setSourceEntity(235U);
    msg.setDestination(1992U);
    msg.setDestinationEntity(179U);
    msg.op = 207U;

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
    msg.setTimeStamp(0.0905455608942);
    msg.setSource(31412U);
    msg.setSourceEntity(229U);
    msg.setDestination(62793U);
    msg.setDestinationEntity(130U);
    msg.op = 188U;

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
    msg.setTimeStamp(0.989689248913);
    msg.setSource(18863U);
    msg.setSourceEntity(210U);
    msg.setDestination(61293U);
    msg.setDestinationEntity(74U);
    msg.total_steps = 22U;
    msg.step_number = 135U;
    msg.step.assign("BFSOUEFPANNJTIKNQUNZFCBACKYCTAEMJAEGHWGRWQGGZGDYXCRKTCNAMEZTTGLTJIUHRSVHVVRFCBYLBFDVFVVJRMLSGWJOCBESLIKLZLOWRMHEMJYGUQDHPZKZJXZKHXXMRSXURWWTIVNDSD");
    msg.flags = 142U;

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
    msg.setTimeStamp(0.812030009738);
    msg.setSource(27715U);
    msg.setSourceEntity(73U);
    msg.setDestination(48357U);
    msg.setDestinationEntity(56U);
    msg.total_steps = 144U;
    msg.step_number = 27U;
    msg.step.assign("MCNMTQUKBZWOUBFEKUYGHDTLENGMUIFQJQLXOZYZRFMYEOWDVNFSCAKVXWAXJWVBZYVHCWGTOX");
    msg.flags = 123U;

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
    msg.setTimeStamp(0.151491524421);
    msg.setSource(9860U);
    msg.setSourceEntity(85U);
    msg.setDestination(19777U);
    msg.setDestinationEntity(151U);
    msg.total_steps = 171U;
    msg.step_number = 132U;
    msg.step.assign("OAHVHZMDIKOWDMUCSMAIDGQXRCODSNAVRSOGINBFGBQTEXJKTPKXLQCXDXEJNQAJEFKQWPVPGVRJFUZWMLLNAULDWPXQIPJTESHJDWURVPSHYNYNUPUFLYRGLFNDZYPCVXKXZJCEHZKMMRSYUQSNLSOTWETCEWBTEPCSHJOUFTQABCGQIZKJXQYLVHFCHGIZTWEYIIUFY");
    msg.flags = 123U;

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
    msg.setTimeStamp(0.57353954165);
    msg.setSource(1588U);
    msg.setSourceEntity(69U);
    msg.setDestination(51678U);
    msg.setDestinationEntity(145U);
    msg.state = 112U;
    msg.error.assign("OUDWMVHXVOLTSUHGEPOWKPPFKSATFUEBW");

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
    msg.setTimeStamp(0.407759676544);
    msg.setSource(6394U);
    msg.setSourceEntity(246U);
    msg.setDestination(18597U);
    msg.setDestinationEntity(65U);
    msg.state = 214U;
    msg.error.assign("VTZNECCQOLUIOHOLYUKVTLVHNTPSHUMVBUHLWCSTKQWFREKTCENZCMYAUHAOUZKIKIBZTJRXYJPJSPFRELGCD");

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
    msg.setTimeStamp(0.467548407901);
    msg.setSource(58633U);
    msg.setSourceEntity(75U);
    msg.setDestination(49751U);
    msg.setDestinationEntity(128U);
    msg.state = 214U;
    msg.error.assign("HHCZDEFHPLCIZPOVSMQCNGIKPJKPIEGASIXZWPLQPRBUEOVSZNYOEDUXDFPTOLUFDHMYUMRAIEZQUWRRLNNGKOBSQXJBKCCNAVHTTGDJNJLFCCKYFWNAJDKMJQDYXGWJYBSELPEPWHGUFVAJQKYTYGMFFRXHQBUUDSLSGDJDOXVVTBZCETGOOPEAFLZFWKTVTMVTGXMUSSOEMRISNWZURMCIRRTJIHQQWBXWRBNBMZZXYIHWCO");

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
    msg.setTimeStamp(0.636703991459);
    msg.setSource(55217U);
    msg.setSourceEntity(109U);
    msg.setDestination(10950U);
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
    msg.setTimeStamp(0.336024619882);
    msg.setSource(11241U);
    msg.setSourceEntity(121U);
    msg.setDestination(47867U);
    msg.setDestinationEntity(126U);

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
    msg.setTimeStamp(0.32243595363);
    msg.setSource(29192U);
    msg.setSourceEntity(211U);
    msg.setDestination(27202U);
    msg.setDestinationEntity(39U);

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
    msg.setTimeStamp(0.791190707632);
    msg.setSource(41171U);
    msg.setSourceEntity(173U);
    msg.setDestination(51846U);
    msg.setDestinationEntity(201U);
    msg.op = 216U;
    msg.speed_min = 0.259176554895;
    msg.speed_max = 0.147541175699;
    msg.long_accel = 0.618381886536;
    msg.alt_max_msl = 0.022811842729;
    msg.dive_fraction_max = 0.824110153596;
    msg.climb_fraction_max = 0.868612050847;
    msg.bank_max = 0.902858856653;
    msg.p_max = 0.553772143097;
    msg.pitch_min = 0.339850260619;
    msg.pitch_max = 0.181224441589;
    msg.q_max = 0.139488277609;
    msg.g_min = 0.1152553173;
    msg.g_max = 0.860585476114;
    msg.g_lat_max = 0.573499514643;
    msg.rpm_min = 0.677430601542;
    msg.rpm_max = 0.87716188041;
    msg.rpm_rate_max = 0.387745784654;

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
    msg.setTimeStamp(0.00389109527752);
    msg.setSource(32415U);
    msg.setSourceEntity(190U);
    msg.setDestination(63408U);
    msg.setDestinationEntity(10U);
    msg.op = 24U;
    msg.speed_min = 0.413060004877;
    msg.speed_max = 0.558893493329;
    msg.long_accel = 0.624997420341;
    msg.alt_max_msl = 0.338419322182;
    msg.dive_fraction_max = 0.8712854906;
    msg.climb_fraction_max = 0.465674671423;
    msg.bank_max = 0.0871736814422;
    msg.p_max = 0.575760402185;
    msg.pitch_min = 0.258519539724;
    msg.pitch_max = 0.968246137543;
    msg.q_max = 0.426345225453;
    msg.g_min = 0.256071524116;
    msg.g_max = 0.710706700273;
    msg.g_lat_max = 0.84701468394;
    msg.rpm_min = 0.661219868569;
    msg.rpm_max = 0.3263191368;
    msg.rpm_rate_max = 0.468519379785;

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
    msg.setTimeStamp(0.347588513101);
    msg.setSource(6637U);
    msg.setSourceEntity(2U);
    msg.setDestination(27048U);
    msg.setDestinationEntity(109U);
    msg.op = 137U;
    msg.speed_min = 0.619830652673;
    msg.speed_max = 0.818393144156;
    msg.long_accel = 0.731402922119;
    msg.alt_max_msl = 0.52931394842;
    msg.dive_fraction_max = 0.297588696162;
    msg.climb_fraction_max = 0.623606168069;
    msg.bank_max = 0.31179686549;
    msg.p_max = 0.80290633704;
    msg.pitch_min = 0.574067504434;
    msg.pitch_max = 0.45030620805;
    msg.q_max = 0.0268729946109;
    msg.g_min = 0.232150700346;
    msg.g_max = 0.649147713529;
    msg.g_lat_max = 0.12223690747;
    msg.rpm_min = 0.764378227657;
    msg.rpm_max = 0.932570821807;
    msg.rpm_rate_max = 0.486515269633;

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
    msg.setTimeStamp(0.564451762829);
    msg.setSource(33664U);
    msg.setSourceEntity(248U);
    msg.setDestination(11258U);
    msg.setDestinationEntity(12U);
    IMC::EntityActivationState tmp_msg_0;
    tmp_msg_0.state = 96U;
    tmp_msg_0.error.assign("KQOFVHCLZMOTCHGWURNSACHLSGOEQONMRZXXYIBJGFHPFOMPVOJDGVZDUKYEPDKYSSMZEIXWSPQJYFHUGDICMIEGYNMAMJGPFLJCBPSBJZHKYNDQOTIU");
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
    msg.setTimeStamp(0.970107970439);
    msg.setSource(54772U);
    msg.setSourceEntity(213U);
    msg.setDestination(15382U);
    msg.setDestinationEntity(15U);

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
    msg.setTimeStamp(0.663004122482);
    msg.setSource(30336U);
    msg.setSourceEntity(233U);
    msg.setDestination(21891U);
    msg.setDestinationEntity(232U);
    IMC::GroupMembershipState tmp_msg_0;
    tmp_msg_0.group_name.assign("BIIOIGQTEQKNTCKRDTRYAKZYWFVWSOECLAAFWBTXPTVMASLGWIYZZUHUXZYEFPJCSQHUUUKYTNRMMLWHSZVNRWYIGLUVOFCLNXICRIBEMNUBNTGXZGMJVQXQDNGXHRCMLGJJBSGKPAREPJLMLAXOJZRZWYCQZGWXEDSUPHNAORQFUQBFIJOUNCWXKQYSDYVVMENPOXKEDAYTMHOFGAMHSEBPOBZVJSKHPIBJHJKALDKOT");
    tmp_msg_0.links = 1846055301U;
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
    msg.setTimeStamp(0.693181733636);
    msg.setSource(20332U);
    msg.setSourceEntity(253U);
    msg.setDestination(928U);
    msg.setDestinationEntity(211U);
    msg.lat = 0.177037629414;
    msg.lon = 0.581469390716;
    msg.height = 0.257369199961;
    msg.x = 0.238101498762;
    msg.y = 0.41598335039;
    msg.z = 0.0863114287203;
    msg.phi = 0.241695523339;
    msg.theta = 0.224284415013;
    msg.psi = 0.857244201326;
    msg.u = 0.243076308305;
    msg.v = 0.452802629793;
    msg.w = 0.987675357572;
    msg.p = 0.516464374044;
    msg.q = 0.0119125984487;
    msg.r = 0.916146381064;
    msg.svx = 0.677467844411;
    msg.svy = 0.011119741585;
    msg.svz = 0.740616394899;

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
    msg.setTimeStamp(0.987498010063);
    msg.setSource(14681U);
    msg.setSourceEntity(56U);
    msg.setDestination(16795U);
    msg.setDestinationEntity(241U);
    msg.lat = 0.785826962418;
    msg.lon = 0.613526084081;
    msg.height = 0.269615655975;
    msg.x = 0.510617401616;
    msg.y = 0.416375112853;
    msg.z = 0.167831060515;
    msg.phi = 0.730374577417;
    msg.theta = 0.362545962344;
    msg.psi = 0.391272120423;
    msg.u = 0.844274737863;
    msg.v = 0.380238977076;
    msg.w = 0.724672520945;
    msg.p = 0.437811052248;
    msg.q = 0.427453842203;
    msg.r = 0.315305344053;
    msg.svx = 0.88891102105;
    msg.svy = 0.335401843279;
    msg.svz = 0.818141548492;

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
    msg.setTimeStamp(0.0149327055798);
    msg.setSource(61067U);
    msg.setSourceEntity(133U);
    msg.setDestination(34608U);
    msg.setDestinationEntity(122U);
    msg.lat = 0.398673014141;
    msg.lon = 0.725599541623;
    msg.height = 0.440789850754;
    msg.x = 0.908651246964;
    msg.y = 0.358113202279;
    msg.z = 0.0196808530076;
    msg.phi = 0.669339354038;
    msg.theta = 0.830246757497;
    msg.psi = 0.722414952919;
    msg.u = 0.0766408671528;
    msg.v = 0.501349452566;
    msg.w = 0.991186332714;
    msg.p = 0.11761144191;
    msg.q = 0.545966315233;
    msg.r = 0.985248947124;
    msg.svx = 0.0186465816863;
    msg.svy = 0.550006330616;
    msg.svz = 0.479126341841;

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
    msg.setTimeStamp(0.769523793197);
    msg.setSource(18121U);
    msg.setSourceEntity(57U);
    msg.setDestination(47074U);
    msg.setDestinationEntity(138U);
    msg.op = 210U;
    msg.entities.assign("NZXJLCFOZRQPSGSBZMTDUHSEQWQXRFWOVCCRXPS");

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
    msg.setTimeStamp(0.8535214048);
    msg.setSource(15714U);
    msg.setSourceEntity(126U);
    msg.setDestination(36833U);
    msg.setDestinationEntity(60U);
    msg.op = 30U;
    msg.entities.assign("ZAECGDPCBFMLPKXAJXTTIWTKTFGINZJJYIPVWJQOFPIIAWUQFALKAHVCYPSPEMNUEQSOGMZSDLOGWFOZUWEXHCSDFWQZANSBDRKO");

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
    msg.setTimeStamp(0.719647558302);
    msg.setSource(5815U);
    msg.setSourceEntity(228U);
    msg.setDestination(43964U);
    msg.setDestinationEntity(9U);
    msg.op = 241U;
    msg.entities.assign("XQYVRAUNLRBQEZWOZEFXAOXHGOSGMJPZBLWXOMFYPYGBDOZITPAGLHACWJSEFRLTZSMVQKLUSAQVB");

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
    msg.setTimeStamp(0.800693134913);
    msg.setSource(45955U);
    msg.setSourceEntity(215U);
    msg.setDestination(41587U);
    msg.setDestinationEntity(116U);
    msg.type = 43U;
    msg.speed = 45398U;
    const char tmp_msg_0[] = {121, -9, 83, -57, -8, -105, -114, -28, -89, -22, -86, -16, -33, 30, -9, 109, 123, -62, -43, 122, 22, 98, 106, -22, -18, -69, -33, 72, -6, -10, 98, -95, -65, 11, -124, 99, 119, 83, -42, -81, 34, -92, -90, -84, -121, -27, 39, -75, -26, -111, 49, 43, 46, 119, 40, -21, -122, 101, 48, 71, -5, 90, -93, -74, -21, 67, 2, -85, 117, 103, 18, 48, 1, -35, 9, 33, -87, 55};
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
    msg.setTimeStamp(0.409057950568);
    msg.setSource(23699U);
    msg.setSourceEntity(186U);
    msg.setDestination(64083U);
    msg.setDestinationEntity(252U);
    msg.type = 20U;
    msg.speed = 59226U;
    const char tmp_msg_0[] = {-76, 55, -13, -56, 106, -64, 57, 68, -55, 57, -82, 72, 100, -63, -38, 96, -28, 98, -49, -20, -16, 110, -42, -24, -78, 11, -112, -118, -20, 101, -30, -103, -54, -61, 123, -70, 49, -83, 123, 25, -57, 95, -9, 35, 30, 50, -38, 108, -31, 9, -88, -103, 88, 10, -83, 36, 96, 39, -51, 43, 30, -4, 37, -126, 40, -4, -76, 44, 74, -63, -8, 66, -105, 15, -17, -119, 43, 91, 28, -35, 7, 125, -53, -85, 106, 105, -40, 81, -74, -26, -23, 12, -41, -88, 71, 82, 85, -114, -16, -87, -101, -30, 6, -35};
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
    msg.setTimeStamp(0.234627688503);
    msg.setSource(564U);
    msg.setSourceEntity(113U);
    msg.setDestination(9855U);
    msg.setDestinationEntity(18U);
    msg.type = 236U;
    msg.speed = 40442U;
    const char tmp_msg_0[] = {50, -76, -6, -35, 3, -82, -12, 81, 113, -29, -65, 43, 48, 88, 41, 48, -120, 54, -8, 38, 99, 67, -47, 119, -40, -123, 51, 70, -116, -35, -112, 41, -77, -22, -31, -24, 97, 92, -81, -45, -15, -12, 70, -60, 0, 43, -6, 110, 52, 44, -86, -101, 104, 77, 35, 54, -65, -62, -94, 47, -49, -91, 39};
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
    msg.setTimeStamp(0.959809147886);
    msg.setSource(28082U);
    msg.setSourceEntity(181U);
    msg.setDestination(12962U);
    msg.setDestinationEntity(92U);
    msg.op = 27U;
    msg.tas2acc_pgain = 0.797479668883;
    msg.bank2p_pgain = 0.438217257835;

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
    msg.setTimeStamp(0.0191417180018);
    msg.setSource(27397U);
    msg.setSourceEntity(33U);
    msg.setDestination(59415U);
    msg.setDestinationEntity(54U);
    msg.op = 232U;
    msg.tas2acc_pgain = 0.802202188776;
    msg.bank2p_pgain = 0.544430286482;

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
    msg.setTimeStamp(0.504381206683);
    msg.setSource(55220U);
    msg.setSourceEntity(182U);
    msg.setDestination(23394U);
    msg.setDestinationEntity(142U);
    msg.op = 220U;
    msg.tas2acc_pgain = 0.0843624883439;
    msg.bank2p_pgain = 0.715090995546;

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
    msg.setTimeStamp(0.919571037231);
    msg.setSource(59359U);
    msg.setSourceEntity(54U);
    msg.setDestination(46279U);
    msg.setDestinationEntity(107U);
    msg.available = 678915708U;
    msg.value = 165U;

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
    msg.setTimeStamp(0.822526215857);
    msg.setSource(55383U);
    msg.setSourceEntity(109U);
    msg.setDestination(44202U);
    msg.setDestinationEntity(211U);
    msg.available = 2743791354U;
    msg.value = 163U;

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
    msg.setTimeStamp(0.515825831086);
    msg.setSource(4129U);
    msg.setSourceEntity(66U);
    msg.setDestination(45049U);
    msg.setDestinationEntity(76U);
    msg.available = 4013417253U;
    msg.value = 149U;

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
    msg.setTimeStamp(0.936793151927);
    msg.setSource(11597U);
    msg.setSourceEntity(75U);
    msg.setDestination(25253U);
    msg.setDestinationEntity(113U);
    msg.op = 160U;
    msg.snapshot.assign("DASKFRGHZCDDVWNIDKNYJECBPISKCGWUYWEEAMPUQHGDVRSQGNBZAYGMKVBNRIBSKOYCCROJMKGJOCVBDNHVXLOCNXNYTCHBIIUWGEJRCVWPJBTFLKRVDLTQUZKPLYQIJBHLXQJKQWOTEVTPDMPHAHWXUSDVYGIXJMSBMMGEMAGYQORTZMLFRHDWXTAIBEOHOLFJNULTSVCIEFZXEZMSWXZAIZNFSPFFP");
    IMC::SimulatedState tmp_msg_0;
    tmp_msg_0.lat = 0.835694123907;
    tmp_msg_0.lon = 0.857138803404;
    tmp_msg_0.height = 0.610429108802;
    tmp_msg_0.x = 0.400885122654;
    tmp_msg_0.y = 0.991736240838;
    tmp_msg_0.z = 0.193941983411;
    tmp_msg_0.phi = 0.564373302185;
    tmp_msg_0.theta = 0.140545943682;
    tmp_msg_0.psi = 0.749645197058;
    tmp_msg_0.u = 0.224149162356;
    tmp_msg_0.v = 0.00236534413531;
    tmp_msg_0.w = 0.10216824385;
    tmp_msg_0.p = 0.338629407384;
    tmp_msg_0.q = 0.899818343189;
    tmp_msg_0.r = 0.066679037016;
    tmp_msg_0.svx = 0.138045053899;
    tmp_msg_0.svy = 0.174479910476;
    tmp_msg_0.svz = 0.617112719817;
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
    msg.setTimeStamp(0.289744357762);
    msg.setSource(45450U);
    msg.setSourceEntity(192U);
    msg.setDestination(38787U);
    msg.setDestinationEntity(175U);
    msg.op = 37U;
    msg.snapshot.assign("XCEXWJKJLWEGQGXAULUILB");
    IMC::PlanDB tmp_msg_0;
    tmp_msg_0.type = 192U;
    tmp_msg_0.op = 145U;
    tmp_msg_0.request_id = 63799U;
    tmp_msg_0.plan_id.assign("YXYITUOQZKGJK");
    IMC::PWM tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.id = 230U;
    tmp_tmp_msg_0_0.period = 3998064837U;
    tmp_tmp_msg_0_0.duty_cycle = 395638859U;
    tmp_msg_0.arg.set(tmp_tmp_msg_0_0);
    tmp_msg_0.info.assign("SIKMWGTZCMHFSSAKNKUJAIIMTECUVKUTDCZTVPJUOHWPBNWHGROBRWWJNXQZBMY");
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
    msg.setTimeStamp(0.169998636236);
    msg.setSource(47002U);
    msg.setSourceEntity(66U);
    msg.setDestination(34559U);
    msg.setDestinationEntity(135U);
    msg.op = 57U;
    msg.snapshot.assign("PJHHYYNTQQCUFMRTMKLWIMHUAANFKJKZNJVPXINMELFNXYGIUCMKLBKQSEFFVACTFCJSVIWATXSOIZZHBRKPDMBEPUBYDBDPAOQCLSMLDOEWHRBBP");
    IMC::IoEvent tmp_msg_0;
    tmp_msg_0.type = 49U;
    tmp_msg_0.error.assign("SSRJJFNNVGITTHXZZAGCVOEKYYFGXRKQMRRZDCPUHWAEIEZHODNRZWTDYSNTMVQCBBGNYXDPFMBAGCYOJIEADWKJKINGUIPBPNKLGDMFLFKAVPSBXLDWJSHLHPFMYKORPIOIWM");
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
    msg.setTimeStamp(0.186925369756);
    msg.setSource(17958U);
    msg.setSourceEntity(20U);
    msg.setDestination(61268U);
    msg.setDestinationEntity(153U);
    msg.op = 170U;
    msg.name.assign("MOTCWJKRJGQYPOCDWLYAEVOHUSSWCOBLKKIYTLAABJXZIFES");

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
    msg.setTimeStamp(0.234437647505);
    msg.setSource(52131U);
    msg.setSourceEntity(156U);
    msg.setDestination(5911U);
    msg.setDestinationEntity(122U);
    msg.op = 14U;
    msg.name.assign("QDAOWXZZRGYGNQXGLMEZNQLKVQBFXDBKMIUUJJYAHTBMLRDBGUFOZVNKOUSTNVBOWPLBNZLMXICRCAPQIIZSRVZYWFWME");

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
    msg.setTimeStamp(0.399474532618);
    msg.setSource(1809U);
    msg.setSourceEntity(207U);
    msg.setDestination(29375U);
    msg.setDestinationEntity(51U);
    msg.op = 19U;
    msg.name.assign("ZTSSSENBIECZGTXBFJUAPHKVLHDDPSXHBUVGKKYNHDWPACPODLQRGXNIPNYNVOGTJMLOJYQZCUXCZLMMKJIJETIOZKHOMQEQFWLMRLYEDMSJEOHFNRCXHIZXCOBMUSCBSFHGAFBNGSKDIVAMWFFRQRKRXBTSVGZXVZOARMUTQHPYTLFXALYMDJWEAEOEVIDZXRWKLCOKUTYUNWRPGIZRHQCBLJ");

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
    msg.setTimeStamp(0.186056774607);
    msg.setSource(13773U);
    msg.setSourceEntity(72U);
    msg.setDestination(5188U);
    msg.setDestinationEntity(126U);
    msg.type = 5U;
    msg.htime = 0.275322050976;
    msg.context.assign("YNJBNDIXOKJYNTJYRPCMLACQJOVHXCGQMZYBEGFOKTBWZHSFDSEEUVYLFQXIKPSTKLJZI");
    msg.text.assign("CQYBFIZQXFTTDNROIZXXASMJPFRABTGRGFXTPOPJAJURIVKIMCFRGYEENRTGASLSZBGLFIZFIEULYUKLIUOQGLBLUPWEDKHHKAKXZCCEVDCVVWZPTHVVMDCAVBDHNBDJVNMTZOBVHQWTTNYNYALWQQOKIHOSWTDLVAGEQYJKGPEIOYMRSCUHNPJAWSEBIRSZXXRBZXCMUQCWKWMYYJPFOZMQNAWHNQLSLS");

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
    msg.setTimeStamp(0.671459249304);
    msg.setSource(51963U);
    msg.setSourceEntity(184U);
    msg.setDestination(13821U);
    msg.setDestinationEntity(128U);
    msg.type = 43U;
    msg.htime = 0.0136657640844;
    msg.context.assign("WEGBPAHPIGQGUFLOVWRIEKKEQCPROHSVGUMHQANASGPRGJMDBONEGXRRUSCKTJTXNCFXFXEZMFMTSATYENCDIJUCMDZMHQJKDQBSZANSXFKCRUQYOLEAYKPHNUGJZWLFIVRVPUPCDZWUKYZQOPTJDYARIYRZXIVAAIDFSORFBNVDHXQCNXTVSBBZYPOWBWUKOSLPFHMIKEBGTJMJWVDIYXHJBZYBVLMOOLFGHYEIDZJ");
    msg.text.assign("DPVXHQREHTQNFSIYSYNIYRTMFHZNBGRLLKUEWJZNIBSIDXBDJUFPTFGFSOGELOXVSATJQCVHZF");

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
    msg.setTimeStamp(0.668260920901);
    msg.setSource(26394U);
    msg.setSourceEntity(67U);
    msg.setDestination(43332U);
    msg.setDestinationEntity(108U);
    msg.type = 249U;
    msg.htime = 0.0950344059013;
    msg.context.assign("ONVACJARXFJXQGFWAEYWOMYNOVZICWMDXUHMCUUPNAMNSECAX");
    msg.text.assign("WANPBAUBDDYFPVHSPPQPVHOWUBROYXCOPRLYEVKXLRIZULDFKXNFGYENYISYACBXGORUQIQVQLFJUKTCHBRBTVWEQIXUFPNMJTCLUTNMBISJWNEAFEZRWVDHRSIHRMXPIGGMOEGIJXSMNDHGFIQNAJY");

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
    msg.setTimeStamp(0.794900413279);
    msg.setSource(37208U);
    msg.setSourceEntity(156U);
    msg.setDestination(46198U);
    msg.setDestinationEntity(61U);
    msg.command = 123U;
    msg.htime = 0.839504032914;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 113U;
    tmp_msg_0.htime = 0.677323268311;
    tmp_msg_0.context.assign("SIUXSHVQHSVGWGGBAQWFMYAPDFGVOVXMFLLBOZVNPXTZDXKTBTICHHFQCRYLOPUJENONSIKPUQWQFSVQAONRHZEEJTEVNCPKEYHBBUPRKYGNFVO");
    tmp_msg_0.text.assign("PGJAPSCMZSJCFWMLHATIXUHGSTASNQRMZQMOYKTFVVGOTPBESSBZXILEVPRIEHICQOUACWBIOJUJZZUWRDGQVLDMKDETLQYSPETZXGKJUWGXCRUDXUAJGYDJRJQBVINXFHVPMMFIAOYXNPHNTNKIFFLCHRSMTMXQSKSFIDKMOBKLNJPGZWWFVAKNEBLXODGOOGCRKDHYEALYENWZRZVW");
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
    msg.setTimeStamp(0.360044670573);
    msg.setSource(47292U);
    msg.setSourceEntity(192U);
    msg.setDestination(54640U);
    msg.setDestinationEntity(59U);
    msg.command = 202U;
    msg.htime = 0.651472487121;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 16U;
    tmp_msg_0.htime = 0.240698017422;
    tmp_msg_0.context.assign("AWBDGNGIEXIZLKVDDRFQCTZGNRUCRZLEWSKOTHTAALFNMFGFIMJXOGSGRYACAMXOUWNHY");
    tmp_msg_0.text.assign("NNXZCYGONDCGBYODZLKWLDNGMFEUOBY");
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
    msg.setTimeStamp(0.603759686882);
    msg.setSource(29366U);
    msg.setSourceEntity(99U);
    msg.setDestination(12560U);
    msg.setDestinationEntity(117U);
    msg.command = 121U;
    msg.htime = 0.440454607329;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 122U;
    tmp_msg_0.htime = 0.91720841584;
    tmp_msg_0.context.assign("LTJRBFXTTJJKSROTPJLUQV");
    tmp_msg_0.text.assign("ZZTESDFPZIOWNHNLJVAYEKEXVPGBKRHWJWGACMTINHR");
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
    msg.setTimeStamp(0.606790419543);
    msg.setSource(62001U);
    msg.setSourceEntity(207U);
    msg.setDestination(55798U);
    msg.setDestinationEntity(215U);
    msg.op = 202U;
    msg.file.assign("MVMEQWGCTOEFVNXQQGUZDDCKXSUPOHQNAXDLHEAZFKGTJKNNEPTFICQYWZBSWYJCNEOYNMFABIDVRZSJNRXCMGHKBUTMWVWXDMFIFABHSODLRSBRLBZPFLZMPCOQHTTHNYPCYJSAKKLARVEVGZXBZYRHXQRLISPCJWJZPMBPIAYRIGKANBXRAU");

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
    msg.setTimeStamp(0.167005322731);
    msg.setSource(40362U);
    msg.setSourceEntity(212U);
    msg.setDestination(56599U);
    msg.setDestinationEntity(96U);
    msg.op = 127U;
    msg.file.assign("AQNSSTQCIQRFVJHJHAKSPOMWSKIFERXLTXVNXTNUXTLSBDQKUUPGPTSBDXQCLFWLRMRMBFODXAEVUEZOPRJYSCTCAQHYGARWSVIAWEWJJCMOZTAGJPJENKFTHUULVRNGOMKUOJPUVKPIAZOGYHCKXTYIAYCZGJLDFEZBHYHDBMDKFQLXSWOGBCHUTYWBZKEBEEHJILZRFMNZZVIYRCPMKNVXVIUW");

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
    msg.setTimeStamp(0.998639457926);
    msg.setSource(49405U);
    msg.setSourceEntity(211U);
    msg.setDestination(34490U);
    msg.setDestinationEntity(143U);
    msg.op = 11U;
    msg.file.assign("VANRFTZPWDYTGOXAMOHJHUYOPJASQBLMIOENJXRY");

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
    msg.setTimeStamp(0.0515386033609);
    msg.setSource(22131U);
    msg.setSourceEntity(218U);
    msg.setDestination(9659U);
    msg.setDestinationEntity(60U);
    msg.op = 195U;
    msg.clock = 0.754295473992;
    msg.tz = -87;

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
    msg.setTimeStamp(0.258948357886);
    msg.setSource(14999U);
    msg.setSourceEntity(20U);
    msg.setDestination(60383U);
    msg.setDestinationEntity(57U);
    msg.op = 141U;
    msg.clock = 0.199691907744;
    msg.tz = -64;

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
    msg.setTimeStamp(0.334354702135);
    msg.setSource(32123U);
    msg.setSourceEntity(193U);
    msg.setDestination(5716U);
    msg.setDestinationEntity(121U);
    msg.op = 185U;
    msg.clock = 0.376822308479;
    msg.tz = -99;

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
    msg.setTimeStamp(0.707592726073);
    msg.setSource(58951U);
    msg.setSourceEntity(111U);
    msg.setDestination(3742U);
    msg.setDestinationEntity(35U);
    msg.conductivity = 0.122683789925;
    msg.temperature = 0.568083369338;
    msg.depth = 0.396922890967;

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
    msg.setTimeStamp(0.0273256444685);
    msg.setSource(31982U);
    msg.setSourceEntity(243U);
    msg.setDestination(49907U);
    msg.setDestinationEntity(217U);
    msg.conductivity = 0.280950639574;
    msg.temperature = 0.497709894118;
    msg.depth = 0.600092552789;

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
    msg.setTimeStamp(0.212034996823);
    msg.setSource(58093U);
    msg.setSourceEntity(205U);
    msg.setDestination(54053U);
    msg.setDestinationEntity(125U);
    msg.conductivity = 0.715544244918;
    msg.temperature = 0.442576403871;
    msg.depth = 0.137412841153;

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
    msg.setTimeStamp(0.507779097472);
    msg.setSource(20814U);
    msg.setSourceEntity(115U);
    msg.setDestination(9757U);
    msg.setDestinationEntity(203U);
    msg.altitude = 0.313179687897;
    msg.roll = 31873U;
    msg.pitch = 52153U;
    msg.yaw = 45935U;
    msg.speed = -25036;

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
    msg.setTimeStamp(0.508707753015);
    msg.setSource(51885U);
    msg.setSourceEntity(213U);
    msg.setDestination(25883U);
    msg.setDestinationEntity(115U);
    msg.altitude = 0.74713959863;
    msg.roll = 32040U;
    msg.pitch = 35476U;
    msg.yaw = 36753U;
    msg.speed = -24075;

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
    msg.setTimeStamp(0.785987780844);
    msg.setSource(10860U);
    msg.setSourceEntity(198U);
    msg.setDestination(47504U);
    msg.setDestinationEntity(212U);
    msg.altitude = 0.133110252643;
    msg.roll = 16374U;
    msg.pitch = 39839U;
    msg.yaw = 10241U;
    msg.speed = -10575;

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
    msg.setTimeStamp(0.574199457042);
    msg.setSource(2913U);
    msg.setSourceEntity(39U);
    msg.setDestination(64227U);
    msg.setDestinationEntity(135U);
    msg.altitude = 0.0630535006463;
    msg.width = 0.854123296355;
    msg.length = 0.102097283334;
    msg.bearing = 0.603336072572;
    msg.pxl = -9173;
    msg.encoding = 143U;
    const char tmp_msg_0[] = {104, 29, -93, 87, 23, 122, -61, 14, 77, 75, -93, 45, 110, 115, -127, -87, 90, -99, -82, 123, -96, -91, -102, 31, -102, 49, 97, 45, -12, 93, -28, 7, -126, 86, -98, 96, 37, -48, -38, -92, 10, -106, 43, -20, -45, -101, 103, 85, -26, 80, 71, 0, -9, 50, -54, 103, -89, 45, -105, -51, -117, -124, -69, -67, -34, -7, 96, -67, 60, -22, -44, 20, 108, -126, 119, 102, 124, 54, 105, -34, -31, 42, 104, -87, 53, 57, 120, -84, -28, -29, -62, -92, -49, 47, 38, -13, -37, -47, -40, 63, 81, -90, 39, 36, 118, 89, 32, 45, -81, 96, -38, -10, 68, 17, -43, 98, 17, 71, -47, -105, 69, -7, -47, 109, -7, -46, -34, -126, -111, 79, 92, 89, 27, -40, 61, 53, 105, -92, -22, 38, 37, -32, -79, 85, -124, 120, -22, 66, -87, 59, -59, 27, -124, -63, 19, -54, -65, 116, -93, -80, 37, -73, 70, -37, -127, 80, 54, -6, 19, -58, -57, 37, -9, -68, 61, -93, -122, -94, -81, -83, 20, -97, -117, -96, 49, 59, 5, -18, -78, 16, -114, 108, -118, -64, -9, 95, -36, -84, -47, -22, 43, 87, -116, -47, -14, -23, -12, 96, -79, -18, 116, 102, -93, 80, 100, 119, -122, 114, -48};
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
    msg.setTimeStamp(0.365712629269);
    msg.setSource(45227U);
    msg.setSourceEntity(74U);
    msg.setDestination(26590U);
    msg.setDestinationEntity(226U);
    msg.altitude = 0.95510648032;
    msg.width = 0.258458863165;
    msg.length = 0.387580695025;
    msg.bearing = 0.633308852548;
    msg.pxl = -18287;
    msg.encoding = 125U;
    const char tmp_msg_0[] = {126, 15, -128, -21, 81, -14, 90, 44, 73, 54, -2, 15, -89, 93, -128, -126, -43, -118, -20, 75, 109, 12, 65, -50, 64, 121, 59, -33, -84, 105, -120, -29, 5, -27, 64, 103, 59, 68, 44, 27, 36, 87, -75, -78, -14, -104, -118, 35, 17, -29, 51, 53, -124, 28, 28, -27, -92, 43, -32, -52, 18, -84, 101, -10, 92, 26, 53, -128, 6, -100, 52, -97, 112, 29, -65, -118, -49, -11, 85, -60, -105};
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
    msg.setTimeStamp(0.568910746836);
    msg.setSource(22774U);
    msg.setSourceEntity(98U);
    msg.setDestination(10106U);
    msg.setDestinationEntity(75U);
    msg.altitude = 0.546479439883;
    msg.width = 0.866092239133;
    msg.length = 0.404934155915;
    msg.bearing = 0.830271774557;
    msg.pxl = 12558;
    msg.encoding = 32U;
    const char tmp_msg_0[] = {-113, 45, -58, -113, 124, -104, -117, 52, -38, -124, 110, -12, -62, -38, 81, -40, -41, 54, 33, 15, 4, -114, -118, -99, -60, 46, -74, 35, -117, -113, -13, 41, 104, -93, -56, 55, 6, -87, -24, 33, 54, 62, 72, -50, 56, 17, 33, 61, -82, 32, 94, -77, 73, -33, 109, -38, 45, -37, -102, -48, 30, 97, 94, -24, -78, 0, 93, -47, -73, -101, 77, -58, 8, 52, 51, 0, 77, -18, -83, -43, 27, -55, -90, 23, -25, -5, -21, -53, -18, 15, 28, -16, -124, 38, -4, 3, 38, -30, -8, -1, 33, 19, -94, -54, 31, -43, -13, -121, 51, 29, -112, 34, 77, 107, -36, 25, -91, 81, 23, 0, -111, -45, 122, -13, 56, -71, 60, -10, -46, -42, 106, -5, 84, 73, -96, 4, 19, 116, -79, 80, -9, -100, 114, -9, 44, 3, 40, 111, 52, 51, -26, -74, 98, 116, 37, 23, 118, -77, 3, 37, -23, -36, 114, -52, 36, -18, 84, -54, -94};
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
    msg.setTimeStamp(0.496928499548);
    msg.setSource(38959U);
    msg.setSourceEntity(129U);
    msg.setDestination(64001U);
    msg.setDestinationEntity(197U);
    msg.text.assign("AVJTBOSSZTMIJUSETCCHPIPMMVBRZMNCYTXAANZHUVGZDQFSJGDGNVXJXPELZVPCCGYXVWHSOXJKZFETVNURNTKMQBOLGQDRIRHADPGVURHQSGKPGWHWYQWXDWSDLUNIFJYLBFWDWILCENIWZMQUMJUMOQYNILYKKAVQQDFRQWIASIHPLANHUTUJCFRYBACMDGTKLFJRYZBVOBXTS");
    msg.type = 144U;

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
    msg.setTimeStamp(0.342851374589);
    msg.setSource(22009U);
    msg.setSourceEntity(187U);
    msg.setDestination(45657U);
    msg.setDestinationEntity(93U);
    msg.text.assign("AZISCEWDSRPFGNWHCNYFVYZOTGRSLTAHAQGITOWYMCTSEXBUKPQCKUEQMKMIFSVKXDQWHPZXVOBFVMXCUMOASYBVURUGSIZ");
    msg.type = 38U;

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
    msg.setTimeStamp(0.530958735563);
    msg.setSource(20449U);
    msg.setSourceEntity(223U);
    msg.setDestination(65150U);
    msg.setDestinationEntity(93U);
    msg.text.assign("WOAFIYSTRHDVDDWMYIAUOQQOXFMRNTFTABKGPOJMYMZZXHVZTTQWOGWABKCGKVORECQTVLZSMAXUIIUDBEHFPCEVAPBKVVFANHLARPUQRFRFDBJGWNJYGDOWEXHKRYSNJIOYJEHYDPPYSURURSPVTSKNEPLHWKEXOSMTCASZQYIGCBJSQUPEAMQUBZPDYKFJNFKXVLXFCTGLLHWBEIZLKIXDUHNCWIWGJQZECHDN");
    msg.type = 6U;

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
    msg.setTimeStamp(0.737180300471);
    msg.setSource(46955U);
    msg.setSourceEntity(86U);
    msg.setDestination(33100U);
    msg.setDestinationEntity(148U);
    msg.parameter = 205U;
    msg.numsamples = 179U;
    msg.lat = 0.716474010195;
    msg.lon = 0.552559691972;

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
    msg.setTimeStamp(0.0954940682491);
    msg.setSource(38250U);
    msg.setSourceEntity(86U);
    msg.setDestination(5713U);
    msg.setDestinationEntity(172U);
    msg.parameter = 96U;
    msg.numsamples = 36U;
    msg.lat = 0.717904362778;
    msg.lon = 0.511716956264;

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
    msg.setTimeStamp(0.453965912653);
    msg.setSource(23293U);
    msg.setSourceEntity(73U);
    msg.setDestination(49343U);
    msg.setDestinationEntity(14U);
    msg.parameter = 10U;
    msg.numsamples = 97U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 8726U;
    tmp_msg_0.avg = 0.339236712004;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.816675936347;
    msg.lon = 0.948160284649;

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
    msg.setTimeStamp(0.730484709997);
    msg.setSource(42183U);
    msg.setSourceEntity(161U);
    msg.setDestination(92U);
    msg.setDestinationEntity(59U);
    msg.depth = 59707U;
    msg.avg = 0.0643378779485;

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
    msg.setTimeStamp(0.406092916354);
    msg.setSource(61960U);
    msg.setSourceEntity(68U);
    msg.setDestination(27697U);
    msg.setDestinationEntity(112U);
    msg.depth = 5288U;
    msg.avg = 0.287197979561;

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
    msg.setTimeStamp(0.285568172364);
    msg.setSource(29031U);
    msg.setSourceEntity(155U);
    msg.setDestination(60258U);
    msg.setDestinationEntity(105U);
    msg.depth = 34853U;
    msg.avg = 0.167038745293;

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
    msg.setTimeStamp(0.109982540236);
    msg.setSource(10013U);
    msg.setSourceEntity(241U);
    msg.setDestination(43195U);
    msg.setDestinationEntity(211U);

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
    msg.setTimeStamp(0.275379465301);
    msg.setSource(36115U);
    msg.setSourceEntity(239U);
    msg.setDestination(34153U);
    msg.setDestinationEntity(73U);

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
    msg.setTimeStamp(0.707067704283);
    msg.setSource(46088U);
    msg.setSourceEntity(122U);
    msg.setDestination(34575U);
    msg.setDestinationEntity(171U);

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
    msg.setTimeStamp(0.909965767765);
    msg.setSource(17193U);
    msg.setSourceEntity(241U);
    msg.setDestination(50599U);
    msg.setDestinationEntity(244U);
    msg.sys_name.assign("UTOPIPPOTRVWBDUXYOSTWDHIFGVEDVEUGELQZSBMEQKVCXNHYLUNHRVYQAODOQOEFKJPJTFJYMYAAYHWMNKGOFJNAGBWRNPBPWQVDCLHYXEMECZIVPYZBBZRNZGBYVAGWFCWUQCILTFTHLNHXJJQMQHKRAGMWGZIJOXICHKSKNYHUVQXBACDUITSMZMKLSRPLDAVOCOLNCEJXRRMTRIEKUTGPBGFXSDMUZESSJADFSWFRTDKSPUX");
    msg.sys_type = 63U;
    msg.owner = 20116U;
    msg.lat = 0.511119282035;
    msg.lon = 0.846917806072;
    msg.height = 0.103468142111;
    msg.services.assign("APSGHLEWYYJCZMKBJZFBEKVWLZQBFU");

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
    msg.setTimeStamp(0.653728831022);
    msg.setSource(13181U);
    msg.setSourceEntity(250U);
    msg.setDestination(13200U);
    msg.setDestinationEntity(118U);
    msg.sys_name.assign("THBNTRZEAXYMIZICKEQSAVUAJLVYBTEXFHUNAFEQCUMEJIFXKFHAOVRNYIMJJWZONSLRPURDCRJWTLHUVDYZLCKEUPYMNBOTSWOAINGFLLIEBJZVZJWLGTVQFDANLQBVGBLWUOPADKSDOYESIPHPYVYTFN");
    msg.sys_type = 147U;
    msg.owner = 15681U;
    msg.lat = 0.0919269709211;
    msg.lon = 0.088682773804;
    msg.height = 0.300940247367;
    msg.services.assign("GDUKCIKQMVWOVFJBZQZGSYUAZYFDMEIZUBAMECGRUXJROBSFYSWMFQNJCLHAINYHIACEELAKBILKNZTKQSJGBSGHOWEDMNLYQVH");

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
    msg.setTimeStamp(0.468349858931);
    msg.setSource(25950U);
    msg.setSourceEntity(130U);
    msg.setDestination(48147U);
    msg.setDestinationEntity(30U);
    msg.sys_name.assign("ISHQQKEKTBBYDPNZSBFPNQRFSWPWGCCSCJHIPMLJVRFWJOVIPTXRUYPAYHJGYVNLYIZEBBBEONGXUIDXMUTOVVZXKNMHENCALNWFCMRCRDQHKYOCFIEJTURKYCFGAKJDGDODX");
    msg.sys_type = 44U;
    msg.owner = 16423U;
    msg.lat = 0.349315754111;
    msg.lon = 0.201977494333;
    msg.height = 0.65546702076;
    msg.services.assign("FQWAFZIOLQKQXBTPBIFRWGQDVTVYHXNOUNCQQGXBKLOMAWTCEXZEMDORYKLIJHNDHWBAKOBFOTSJDHRMJLSMQFPRBKGKAWOONSJTEUIGRAHNVICOBXUINVTYNPHYNCBLFVUZDKMEPNPTF");

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
    msg.setTimeStamp(0.644798033793);
    msg.setSource(54482U);
    msg.setSourceEntity(75U);
    msg.setDestination(61420U);
    msg.setDestinationEntity(8U);
    msg.service.assign("ZTKIDWZHNMQPLNYHMCPTOOHVSYCVFZ");
    msg.service_type = 96U;

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
    msg.setTimeStamp(0.0696760675201);
    msg.setSource(56747U);
    msg.setSourceEntity(196U);
    msg.setDestination(6820U);
    msg.setDestinationEntity(203U);
    msg.service.assign("XVMRWTJSYBWXOAFQTZYSKRKXPEUXVJOGGWYSHEKXQGGFZBEIZUDZVTEIZFDREKCSLPKKUHLVRLNBLTEHCAOQCNGNIPHWX");
    msg.service_type = 240U;

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
    msg.setTimeStamp(0.0532504300993);
    msg.setSource(21000U);
    msg.setSourceEntity(155U);
    msg.setDestination(6069U);
    msg.setDestinationEntity(117U);
    msg.service.assign("USPGAWBKJLNAFIVVEKPVSGWPLRKMIGPTQFLXYZPJADKVLDAQOLDYGEVCJKMWIMOCNCEZNPPNQBTUARMPCHICELMXZRJRGBOAELIBUORWMALAIIHBSITOQNFHQCHSJWZODSGUFYJPWZUNYSDWCXJETBBTFXGSCEEZRHGQXYDVF");
    msg.service_type = 238U;

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
    msg.setTimeStamp(0.975405435475);
    msg.setSource(37243U);
    msg.setSourceEntity(65U);
    msg.setDestination(38372U);
    msg.setDestinationEntity(84U);
    msg.value = 0.069605662477;

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
    msg.setTimeStamp(0.176926316471);
    msg.setSource(44959U);
    msg.setSourceEntity(205U);
    msg.setDestination(28160U);
    msg.setDestinationEntity(134U);
    msg.value = 0.166220511487;

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
    msg.setTimeStamp(0.62201661355);
    msg.setSource(57012U);
    msg.setSourceEntity(236U);
    msg.setDestination(18459U);
    msg.setDestinationEntity(230U);
    msg.value = 0.688218063564;

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
    msg.setTimeStamp(0.10434803041);
    msg.setSource(34546U);
    msg.setSourceEntity(158U);
    msg.setDestination(55943U);
    msg.setDestinationEntity(122U);
    msg.value = 0.592583350978;

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
    msg.setTimeStamp(0.0849414899943);
    msg.setSource(31740U);
    msg.setSourceEntity(183U);
    msg.setDestination(36658U);
    msg.setDestinationEntity(50U);
    msg.value = 0.496050889878;

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
    msg.setTimeStamp(0.374472818645);
    msg.setSource(37852U);
    msg.setSourceEntity(140U);
    msg.setDestination(64700U);
    msg.setDestinationEntity(24U);
    msg.value = 0.47331704534;

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
    msg.setTimeStamp(0.424676536376);
    msg.setSource(37095U);
    msg.setSourceEntity(106U);
    msg.setDestination(61417U);
    msg.setDestinationEntity(78U);
    msg.value = 0.0270471344841;

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
    msg.setTimeStamp(0.964372573358);
    msg.setSource(31207U);
    msg.setSourceEntity(222U);
    msg.setDestination(51947U);
    msg.setDestinationEntity(1U);
    msg.value = 0.422066268638;

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
    msg.setTimeStamp(0.275339359431);
    msg.setSource(9692U);
    msg.setSourceEntity(23U);
    msg.setDestination(44014U);
    msg.setDestinationEntity(180U);
    msg.value = 0.365096381987;

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
    msg.setTimeStamp(0.188120761146);
    msg.setSource(62984U);
    msg.setSourceEntity(44U);
    msg.setDestination(57272U);
    msg.setDestinationEntity(240U);
    msg.number.assign("WSUVTFIGVZOBXACFNZKCPEQYLRDODSIYXGCTSEAIETWRCKJYBLROGUTXBQCGZYRJAJMOLMHNGLEVGSVMNZHOZGDEVJTZWUFMIRDDSYYSAFRBICWWWVDCUHRFEMMUPYWINIAFHHLJHTOEPTOKTKTPRCIIYNIHMMOLVYRCHLJFMFSJNLBULUEHKW");
    msg.timeout = 25736U;
    msg.contents.assign("MINKUXZJCEXANDQYXMUKQGYKUCKLXVR");

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
    msg.setTimeStamp(0.115570153442);
    msg.setSource(38795U);
    msg.setSourceEntity(20U);
    msg.setDestination(48185U);
    msg.setDestinationEntity(203U);
    msg.number.assign("PVXDTIFAAGIKESBUICVISMMZKCUORUABRHOEPTZQJSVDFHBFGKRDWSPLKBOEFVXFJVRKLNXBGLBFDMPLIUUNPRTNSEJPEICYNVTSYZEWKDVEWVOLEGJCUIIRYJLDOIQZFDNEPQDHQAF");
    msg.timeout = 55383U;
    msg.contents.assign("RKXGRSUFVGTZCRTBKZYNLGACRCXENOFIBIPAQDUPLUSVVELZ");

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
    msg.setTimeStamp(0.774346352587);
    msg.setSource(4799U);
    msg.setSourceEntity(76U);
    msg.setDestination(6742U);
    msg.setDestinationEntity(187U);
    msg.number.assign("GXBKJPWNAEXDEOADJINMRNLVAYIPLMHJQLPWFUUPVEQBQCOODNFAEIKEFEAOAJZFBQADWSHGGGFVOZYJZITEGPUKVUMQPNIQOLXDCVWSCTIQGCEFVATZBKWHKSHTBLLRNRPRAGSXWUHCURREZKKGSICRDIXDHUSJVZCOBSWHXDNYMMXZEXVORYBPZDMJWIYVFZTTA");
    msg.timeout = 56410U;
    msg.contents.assign("JVHYDRPANGCBFLMNIKOCVOJBTZSQABXANCMQGTGJSRRYWNVHSIIJWGUEUGNSXVCTYNHWASRWTBCQIVALPUMKXOSLFHTTADDJOIIEHDAZJWGVFIYKRHRUFMFDKLZGQXWMUSCJQCKPBLHTROXZJDOBNPQCPWZYPIAQTEZUVGFSBUEFIYNVLKWOHDRRFACDCLPMEXNTPHOKKQZFMBYXJYVQDIFALLESYTVGEOMXGBOERSWMZZPDQXMLUU");

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
    msg.setTimeStamp(0.273051194909);
    msg.setSource(22235U);
    msg.setSourceEntity(231U);
    msg.setDestination(25719U);
    msg.setDestinationEntity(240U);
    msg.seq = 1875644649U;
    msg.destination.assign("BYAHGEYTJNSJNYYBXIXMDKXBQFSFRMURIHPCNWCRHEUUNZKAEOIPTSGSDOIBWZEHHEZXFQGVOTOFUVN");
    msg.timeout = 59137U;
    const char tmp_msg_0[] = {27, -55, -108, 95, -52, -31, 79, -112, -89, 91, 31, -25, -77, 5, 101, 61, 59, -83, 13, -28, 42, -103, -32, 87, -97, 70, 121, 75, -78, -41, -70, 119, -30, 5, 74, 52, -46, 124, 4, 84, -42, -83, 47, -119, 19, -15, -128, -27, 29, -115, -16, -31, -89, -61, -41, 18, 100, -33, 76, 18, 99, -63, 51, 16, 74, 64, -110, -121, -88, 83, 97, -27, -35, 0, -37, -112, -3, -97, -55, -16, 80, 27, -59, 89, -1, 105, 123, -102, 59, 6, 23, 31, -45, -83, -96, -29, 45, 4, 11, 17, -46, -15, 15, 63, 18, -122, 27, -71, 120, 91, 4, 27, -22, 117, -42, -53, 106, -102, -121, -65, 80, -94, 94, -53, -80, 67, 63, 105, -67, -89, -14, -9, -89, -102, 29, 14, 114, -81, -9, 97, -64, -85, 18, -50, 93, -47, -107};
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
    msg.setTimeStamp(0.943739505415);
    msg.setSource(5569U);
    msg.setSourceEntity(187U);
    msg.setDestination(12875U);
    msg.setDestinationEntity(131U);
    msg.seq = 3470510596U;
    msg.destination.assign("SBISQXVMCAOWDVKGJPFJTXGOPZIFMJZUCOIKERXADDJTAQBOOZDXVXUNDJZXTJNZROICIZHITURNSKTVHEZLNYDUGYRKHFBCYEIRCYKOTSLGLKJQYWFJUNCLUATGRVELPXKLMXGTYJQQSBQLHWHDNEGXSTSWOHUMYWFKGITZSCPCKBECBHZABDOPGAINWYNSPUSEPQMEHVFDHVGYMBLQRMIAWUMRZCDEFALBRAWFVMVJHRXMAVN");
    msg.timeout = 46114U;
    const char tmp_msg_0[] = {-29, 98, 9, 79, 81, 84, -103, 115, -13, -103, 64, 5, 50, -113, 52, -99, 67, 68, 15, -19, -62, -121, -102, 77, -59, -39, 66, -97};
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
    msg.setTimeStamp(0.960602347395);
    msg.setSource(42689U);
    msg.setSourceEntity(144U);
    msg.setDestination(35351U);
    msg.setDestinationEntity(36U);
    msg.seq = 2945473058U;
    msg.destination.assign("FRKTMNVPXKAQKHFHTJXTDZOPWSBLBJIEPNBFBEWDGUVQLSZHZZFEKQIFXZIWHUDOIUOZFTMHPEUU");
    msg.timeout = 45586U;
    const char tmp_msg_0[] = {-57, -58, -128, -115, -17, 120, 90, -38, 32, 88, 40, 71, -30, -115, 67, -11, -63, -114, -7, 57, 89, -2, -92, -4, 71, 61, -101, -100, 59, -79, 15, -30, -79, 23, 83, -48, 101, -60, 121, -82, -123, -88, -62, 39, -99, -39, -75, 46, 37, 123, -43, 69, 92, 13, 99, 26, -75, 107, 55, -40, 43, -67, -82, 32, 1, -115, 112, 9, -74, 92, 95, -23, 82, -35, -127, -104, -10, 10, 123, -120, 95, -35, -46, -26, 119, 108, -66, 105, -104, -61, 111, 66, 70, -22, -4, 74, -76, 121, -17, -112, -27, 59, -117, 112, 45, 67, 8, -68, -118, 121, 111, 70, -74, 44, 101, 48, -71, 70, -19, -100, -63, 22, 95, -43, 73, 45, 16, 1, -30, 19, -55, -112, 50, -79, 57, -40, -30, -120, 2, -79, 85, 25, 101, -89, 64, 24, 87, 49, 106, 109, 103, 14, 83, 29, 114, -80, 61, -51, 67, 13, -43, 76, 8, -17, -101, -43, 86, -37, 12, 75, -93, 11, 87, 111, -60, 99, -104, -80, 57, 72, -11, 42, -114, 79, -55, 30, -128, 73, -41, -23, 57, 100, 73, 6, 78, 59, -31, -30, -53, -1, 91, -79, 113, -91, 122, 63, -80, 100, 60, -37, 26, -90, -42, 7, 55, 121, -12, -5};
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
    msg.setTimeStamp(0.965160288195);
    msg.setSource(10605U);
    msg.setSourceEntity(144U);
    msg.setDestination(35301U);
    msg.setDestinationEntity(236U);
    msg.source.assign("QINQOWSGJNSFVLUHJIZEYQMMCPKLYUKMJXMIRESIZTVERADBSFOJCCLPGTGGEHPYCENIVVWTSNTKZZIDXPPAXO");
    const char tmp_msg_0[] = {-120, 28, -116, 110, -90, 69, 114, -65, 73, 56, 108, 19, 62, -53, -15, -41, -119, 119, 69, 27, -56, 10, 108, -36, 125, 6, 54, 111, -38, 118, 11, -56, -82, -70, 5, -95, 111, -87, -33, -105, -40, -50, 14, 3, -26, -59, 16, -17, -50, 113, -49, 118, -21, 25, 32, 118, -71, 11, -21, -43, -5, -40, -81, -98, 45, -29, 81, -7, 40, 49, -45, -102, -49, 73, -105, 105, 117, 53, -86, 58, 60, 125, 102, 20, 68, -22, -120, -20, -23, -90, 8, 35, -76, 8, 25, -103, -81, -74, 45, -21, -44, -47, 38, -103, -96, -12, -92, -66, 10, -113, 74, -127, -109, -119, 1, -83, 13, -16, -51, -118, 39, 36, 102, -37, 118, 98, 124, -88, 114, -76, -102, 24, 8, -46, -109, -96, 65, 60, 83, 112, 64, -44, -109, 15, -82, 15, 121, -99, -123, -6, -18, 20, 105, 111, -123, -75, -45, 123, 123, -23, -20, 13, 30, -97, -105, -12, 18, 31, -17, 22, 108, -40, 28, 31, -42, 115, 9, 66, -87, 74, -102, 43, -30, 3, -46, -3, 45, -28, -3, 96, 31, 93, 16, -121, -29, 85, 121, 53, -72, -123, 30, -105, 51, -39, -7, -86, -27, -13, -34, -18, 4, 41, 125, 16, 81, 49, -73, 84, 63};
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
    msg.setTimeStamp(0.160651316131);
    msg.setSource(36269U);
    msg.setSourceEntity(150U);
    msg.setDestination(405U);
    msg.setDestinationEntity(6U);
    msg.source.assign("FSGNAYHWAVYI");
    const char tmp_msg_0[] = {62, -28, -122, 29, -59, 58, 33, -44, -30, -101, 35, 109, -90, -50, -111, -64, 5, -62, 49, -15, 67, -81, -68, 50, -1, 106, 37, 34, 70, -71, 108, 122, -80, 34, -70, 31, -11, 115, -42, 96, -24, -92, -58, 39, 87, 31, 78, -45, -53, 87, 111, 13, 104, 122, -114, 5, -91, 22, -103, -33, -15, -112, 92, -71, -71, 88, 116, -115, -43, -49, -35, 25, -49, 37, 55, -127, -45, 14, 106, -113, -96, -116, -7, -10, 84, -13, 74, 34, -74, 0, -32, -20, 72, 51, -53, 0, -70, -14, 61, -78, 54, 52, 120, -75, -48, 51, 18, 47, -63, -37, 19, -123, -3, -48, 61, 15, 106, 2, 47, 79, -84, 95, 67, -83, 32, 68};
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
    msg.setTimeStamp(0.929280741669);
    msg.setSource(45954U);
    msg.setSourceEntity(79U);
    msg.setDestination(3146U);
    msg.setDestinationEntity(10U);
    msg.source.assign("LBNLARGRNVNXHMAKOABSFLUIDUFUCYOSIWYCQXXIRIROSHWSWRESQPPGJESPIJNBHEDRYHCPFXMDTGGTSNFVOMVVVUPBUADIJOYQCNDUVBMTAGNZTRSZLEGETLAYVLFJOSJYKQGVXJDFTKH");
    const char tmp_msg_0[] = {-78, 85, 109, -53, -96, -68, -110, -31, -78, 65, 88, 28, 123, 120, 80, -13, -93, 114, -10, 117, -124, 61, 62, -100, 10, 70, -88, -12, -87, 122, 118, -77, 63, 34, -72, 101, -110, -100, 55, -19, -45, 72, -91, -106, -44, -42, -99, -110, 70, 123, -41, 99, 52, -36, 27, -10, 85, -74, -46, 43, -106, -108, -42, -56, -123, -88, -42, 83, 23, 14, -9, -62, 72, 23, -12, 102, -11, 53, 1, 97, -41, -18, -49, -122, 14, 12, -51, -66, 30, -8, -39, -86, 15};
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
    msg.setTimeStamp(0.917303994783);
    msg.setSource(26473U);
    msg.setSourceEntity(222U);
    msg.setDestination(475U);
    msg.setDestinationEntity(27U);
    msg.seq = 2156124316U;
    msg.state = 122U;
    msg.error.assign("JRIMCJWWAJDOSPQATFCUUDRBYVIBVNQEBYWVKDMERDJXHWAD");

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
    msg.setTimeStamp(0.718200914689);
    msg.setSource(8755U);
    msg.setSourceEntity(47U);
    msg.setDestination(44868U);
    msg.setDestinationEntity(191U);
    msg.seq = 1270896380U;
    msg.state = 133U;
    msg.error.assign("XVNBMHWNEYFQRYZAQ");

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
    msg.setTimeStamp(0.494359577697);
    msg.setSource(55636U);
    msg.setSourceEntity(145U);
    msg.setDestination(47400U);
    msg.setDestinationEntity(148U);
    msg.seq = 3256373345U;
    msg.state = 217U;
    msg.error.assign("WUZJLDEHSSFKVRUMASLYRRDGHEYPAJSWBRADPJBXVOWGCBTPEOVGKUHQRYHQL");

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
    msg.setTimeStamp(0.0732340612752);
    msg.setSource(59450U);
    msg.setSourceEntity(218U);
    msg.setDestination(18014U);
    msg.setDestinationEntity(28U);
    msg.origin.assign("EQRNIEGKHJUGIOWSXIPYGTEFSABYMWQKUOQERXXWTYJCIVPVWDDFNQSHLILJOUJWYYMNHZIHKLZTEKDBHFQVLQLSZNDOCYTRJCAMPRUCZYMVGNCSKAFFEZLNQWAPFBEU");
    msg.text.assign("PKQFUQVYWBOLPRUTCIGECOQYVIBHWRTZZGQZRSNQDDSTDHIGXYSXEXAHRDBMUWUECEFQIONKZZMZOWOUHHBLSCLGMAFXTYJYAVAGAJHHDSEKYIYBFWHFQDPXBGQNLLLFJLNFJUOTDRAJMNFWJJEOIVMPJKNEZJNVDEAEITFUOYEPMBVMNSSKQUZGNKGRSGRKRDVZWYSAVT");

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
    msg.setTimeStamp(0.0262372075584);
    msg.setSource(35485U);
    msg.setSourceEntity(170U);
    msg.setDestination(62256U);
    msg.setDestinationEntity(22U);
    msg.origin.assign("MXBARKZLHPHQGUUDKKSFJVZPFOBIJPBNFGGJVWYNPFULEBHLYWKEHJVEADIRETLSXIVFDHVMLAASFBXZTYMXBGBSSZWPTOTGJYYNMSRLUABIVDEVWXFHXUQMKQPQCZSPXYNOFWLLJJLARQHXOEYWRCGOEGSZOEQIZCQKJWCARCFWNUORJMCKCUKYPNETSUVRATEKOJAMSGDHYNXYVQRUTZCCOBULWIMGZQVINPNDDIDCHRTHIDGINMMF");
    msg.text.assign("MUAAIEXWRMBDAHVBEMBDPKEXSMITSXEXAZVIKLV");

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
    msg.setTimeStamp(0.240107959463);
    msg.setSource(60484U);
    msg.setSourceEntity(217U);
    msg.setDestination(32482U);
    msg.setDestinationEntity(242U);
    msg.origin.assign("IXBIWPLDAFWZRSMKNVKTSPUWH");
    msg.text.assign("KISSDDVLMEBTEXDMBXQUUUZQABRMIREYNCFZNQAMGLQJTYYCG");

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
    msg.setTimeStamp(0.629124349325);
    msg.setSource(46009U);
    msg.setSourceEntity(179U);
    msg.setDestination(65419U);
    msg.setDestinationEntity(137U);
    msg.origin.assign("TAKAFRJADWSSPRRNNAKCMTOXBXZSUKIUOQZJJNCCK");
    msg.htime = 0.588711237559;
    msg.lat = 0.656183463211;
    msg.lon = 0.122666715261;
    const char tmp_msg_0[] = {42, -127, -64, 26, -108, 107, -40, -44, -121, -68, -84, -80, 75, -8, 61, -93, -38, 20, 91, -41, 119, 78, 39, -8, 109, 39, 88, 123, 66, 92, -33, 9, -28, -14, -91, 20, -9, -9, 66, 92, -80, 40, 41, 33, 66, -77, 111, -119, 17, 61, 3, 60, 39, -31, -26, 6, -120, -126, 2, -19, -99, -50, 1, 109, 4, 93, -22, 22, 16, 108, 20, -87, -49, -111, 2, -121, 47, 28, 108, -87, 43, -120, 47, 31, -21, -9, 31, 56, 89, 80, 59, 86, -4, 71, -43, -100, 22, 125, 58, 70, -22, 25, -19, 47, 58, 8, 110, -113, 98, -127, -105, 6, 16, -82, -86, -54, 115, -69, 82, -27, -10, -39, -44, -59, -70, -62, -122, 59, 106, 96, 19, -127, -23, 15, 77, -96, 26};
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
    msg.setTimeStamp(0.741037737315);
    msg.setSource(44793U);
    msg.setSourceEntity(15U);
    msg.setDestination(9340U);
    msg.setDestinationEntity(175U);
    msg.origin.assign("LQLTSRVATARGVMASVWQGJKZZJBEYGCMNTKUKFOZKUFYSHVXYJAPHNITWJKZJNOFYFPIEINMTWJCVWEDAZFNERQNHRIORIOOUDXL");
    msg.htime = 0.240102709914;
    msg.lat = 0.911548004432;
    msg.lon = 0.2361234046;
    const char tmp_msg_0[] = {-12, -69, 8, -25, -97, 43, -46, -120, -50, -80, 119, -124, -18, -112, 38, -63, -126, -116, -83, -17, 126, -123, -78, -85, -4, 23, -55, -123, -99, -77, 39, -48, -11, 82, -22, 22, 10, -12, -28, 16, -68, -20, 121, 63, 107, -112, -60, 0, 23, -112, -18, -88, 104, -114, 71, 71, 10, -87, 45, -11, -109, -119, 16, -53, -59, 92, -121, -69, -116, -81, 5};
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
    msg.setTimeStamp(0.524974650237);
    msg.setSource(21759U);
    msg.setSourceEntity(247U);
    msg.setDestination(27888U);
    msg.setDestinationEntity(240U);
    msg.origin.assign("SZEDYGIVSZAPFAPQKCLZETIVNMOQJNVIWOARWCLRVWMXKVAETMLGQZNURKGSZRQXJGBIQHFJPALKAIBCHOMTMLXEFOPSMQCXYFXTOYJAJUFSAWPCZRUYMXFYKYENGUDCFSRKLOPDNWRLWUVBGEHWPWBHPNSVSHEBTQUKQDGBOVLCFGEWITAUVLTMXNXFHXZRBJRJNFUSOZHJHRYLTZEPOBBKQVTUJDNGICZNPCIWSQGITUOIEHDKXBDYCA");
    msg.htime = 0.91014627923;
    msg.lat = 0.484152420715;
    msg.lon = 0.200686176807;
    const char tmp_msg_0[] = {-87, -18, -76, 69, -23, 1, 75, 123, 47, -106, 121, -25, 24, -9, -3, 88, 42, -52, 124, 105, -1, -11, -125, 123, -7, 5, -89, 15, 94, 108, 74, -14, 1, -91, 109, 13, -72, 111, -84, 107, -26, -117, -103, -108, 109, 60, -65, -5, -114, 102, 1, -19, -121, -92, 92, 84, -31, -84, 75, 57, 31, 68, 6, -43, 45, 117, -115, 107, 78, -66, 35, -125, -36, -65, 87, -85, -123, -107, -42, -76, -93, 3, 93, 35, -5};
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
    msg.setTimeStamp(0.41573674626);
    msg.setSource(50714U);
    msg.setSourceEntity(7U);
    msg.setDestination(10617U);
    msg.setDestinationEntity(188U);
    msg.req_id = 11103U;
    msg.ttl = 396U;
    msg.destination.assign("JZBXKEGFRPPOZLQWYKBLNGUGQKIOPZQLIIHMUVVFULLEPBCEIEAMZZCKNQIVAYTAXDZRYCWEGFKJRUGPALLNIHAJBWWHQYTEZUPVRVLXNSTDBDMDJGKFTJWNTNQHVOWIFQVDXHDSZGXHOB");
    const char tmp_msg_0[] = {42, 45, -94, -47, -15, 72, -118, -18, 69, -120, 98, 122, -113, -38, -115, 24, 57, 109, -105, 88, 32, 41, -90, 79, 1, -122, 74, 14, 17, -43, 76, -88, 39, 114, -70, 21, 80, 32, -83, -65, -44, 101, 126, 110, 49, 114, 42, 80, -98, -42, 40, 22, 68, 79, -60, -87, -92, -9, -37, 118, -24, -92, 69, 103, 30, -125, 19, -11, 80, 120, 23, -108, 9, -125, -83, -19, -58, 74, -87, 103, -29, -67, 80, -38, -32, 65, -125, 27, -7, 50, -74, -54, 26, 88, 120, -29, 42, -26, 68, -75, -85, -124, 23, -58, 115, -45, -55, 115, -71, -65, -108, -9, 50, -106, 93, -18, -39, -69, -47, 93, -26, -24, -49, -17, -121, 39, -50, -9, 86, 96, 24, -105, -62, 15, 75, -117, 89, -127, 93, -64, 13, -56, 14, -38, -90, -71, 97, 40, 111, 118, -47, -20, -109, 12, -15, -47, 66, 41, 66, -77};
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
    msg.setTimeStamp(0.0805319470687);
    msg.setSource(19142U);
    msg.setSourceEntity(221U);
    msg.setDestination(35759U);
    msg.setDestinationEntity(6U);
    msg.req_id = 63074U;
    msg.ttl = 4247U;
    msg.destination.assign("FPYFVHYJOWOJAEXRBPYQHAXTKTAZWKNIWEJINZUFRTBEMWSEDLVTDUJQBCCXGRQTLZMMDQQURYPRSEZBNNSNLBVITYFHKTYVLVPNZMYCIFJGIZELALPRDFCFNGHJXAOGUKEIZMOWDVSPQAZDVKFMKFJHQYOGXAKZRBXHUDEPCCODKHGSVEJGSTDFWSIDANMRCIMBKGOUNZOHXUJVHLTLNJMCS");
    const char tmp_msg_0[] = {-13, 71, 86, 35, -51, 12, 119, 44, 96, -79, -25, -107, -6, -18, 4, 122, -83, 0, -70, -17, -59, 31, 33, -33, 108, 116, -103, -106, 32, 31, 23, 6, -128, -11, -32, 25, 42, -116, 29, 111, 1, 82, 22, 116, -100, 12, -114, 65, -102, -58, -102, 94, -80, 58, -83, 94, 65, 80, 67, -115, -52, -127, 37, 120, 72, -20, -126, 116, -82, 15, -82, 71, -31, 122, 55, -57, 27, -76, -127, -29, -7, -62, 87, 16, 123, 84, -127, -107, -37, 114, 62, 93, 51, -6, 73, -128, -68, 102, 57, 125, 114, -127, 8, -4, 18, -36, 89, 97, -94, 14, -17, 112, 37, -41, 9, -102, 106, 17, -21, -88, -21, 39, -39, -109, 3, 52, 3, 17, 106, -18, 117, -107, -78, 93, 122, -20, 1, 113, -1, -102, -80, 126, 68, 113, 56, 33, -51, -10, -77, -16, -39, -89, -57, -78, 59, -46, -75, -63, -35, 54, -52, -101, -18, 84, -127, -19, -59, 66, 81, 24, -106, -72, 117, 64, -106, -16, 107, 66, 116, -85, -95, -110, -82, 93, 17, 68, 37, -48, -59, -75, -102, 112, -98, 92, -47, 44, -74, 46, 111, -96, -62, -77, 0, -10, -1, 49, 18, 50, -107, 80, -24, 55, -10, 75, -63, -125, -14, -30, 0, 108, -63, 115, -65, 120, -104, 104, -107, -89, 44};
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
    msg.setTimeStamp(0.137192218926);
    msg.setSource(26323U);
    msg.setSourceEntity(77U);
    msg.setDestination(52170U);
    msg.setDestinationEntity(3U);
    msg.req_id = 25990U;
    msg.ttl = 44786U;
    msg.destination.assign("UIZFTXQUGJBCTNYWHFXSIKKTGJUZWLZFGIEYDAOHPJWBONXPKMMTNSZSNCQABVKOHNHGDFMTZJZPUSLWDVUBPVYDUCVPKUDWPTRSAXXBVTQIOUQFGKCDRJZJSQZREDYBSRIYAPGMLGCXMODV");
    const char tmp_msg_0[] = {95, 49, -19, 84, -55, -116, 47, 19, -77, 54, 40, 51, 31, -62, -69, -121, 17, -54, 12, -98, -85, 103, -9, -126, -100, 33, -29, -57, -106, 94, 20, -4, 78, -25, -17, 85, 41, 25, -17, 49, -102, 105, -85, 123, -117, 31, -77, -29, -92, -5, 117, -92, 53, 6, 35, 102, 114, -106, 82, 102, -23, 15, -46, -68, 70, 9, -103, 37, -121, 91, -55, -101, -6, 122, 108, 2, -60, 45, -33, 37, 73, 0, 90, 22, -63, -60, -114, 52, 7, -7, 43, -90, -84, -25, 31, 33, -32, 0, 107, -4, 4, 95, -31, -69, -116, 57, 88, 88, -19, 84, 119, 3, 2, -80, 59, -85, 27, 62, -48, -64, 92, 77, 109, 113, 118, -90, -125, -88, 16, -124, -6, -86, 92, 63, 92, 107, 11, -97, 110, 96, -30, 17, -26, -45, -26, 61, 118, 21, 113, 30, -55, -56, 63, 41, 69, 31, 40, -77, -111, 27, -111, -57, -43, 9, 72, -115, 42, 16, -81, -63, 62, -45, -30, 92, 67, 42, 104, 104, -96, -121, 19, -1, -26, -89, 66, -62, 125, 43, -19, -91, 73, -127, -11, -31, -7, 100, -128, -27, 97, -33, -76, -3, 123, 93};
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
    msg.setTimeStamp(0.430594007576);
    msg.setSource(64348U);
    msg.setSourceEntity(36U);
    msg.setDestination(27705U);
    msg.setDestinationEntity(8U);
    msg.req_id = 1719U;
    msg.status = 98U;
    msg.text.assign("SOEYTCDXSOHKMCNBVMEMKJGPVTKCNRADPEDSFXJAUYDHMZEZHKRDCLFWQBRZ");

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
    msg.setTimeStamp(0.979430571105);
    msg.setSource(58184U);
    msg.setSourceEntity(253U);
    msg.setDestination(19326U);
    msg.setDestinationEntity(65U);
    msg.req_id = 5273U;
    msg.status = 194U;
    msg.text.assign("HOBVSMTAFRUVOBGZQICRZDMDNHWUJONFLPHHHDKRKGFXIFKRYOYAREKPPYVQAXIKDPFVVOCOGHXKOMUKJJBKTBGCLSVLPQQKWMZXMYTBUHAWWNOGCEGIQPQCPLZPCENCTIGQZDGWABBFWACCJZTBMDTSSANWLQFBXWXZFTYOZEQIPDRMESUMLRIUTNAXIEZNWPRNEJXHGLCNUSJVDUHLVMITUKYAYVSOFFZN");

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
    msg.setTimeStamp(0.787766204892);
    msg.setSource(5121U);
    msg.setSourceEntity(95U);
    msg.setDestination(34281U);
    msg.setDestinationEntity(203U);
    msg.req_id = 24033U;
    msg.status = 64U;
    msg.text.assign("PSGBHQXRYIBTCVGAXORVXNPISENJFWQBZSCABZMQCSLIYOJGKMQMUYZIWKEWUNWNLXHOKZALVSMFB");

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
    msg.setTimeStamp(0.0507255724295);
    msg.setSource(32144U);
    msg.setSourceEntity(178U);
    msg.setDestination(26656U);
    msg.setDestinationEntity(93U);
    msg.group_name.assign("QHMNNMNWIZFMSZXAGIVNNACBZPSXJRQTRYSUUVFCBEQYAKGLAFQUJKGUUHSBCTSYPOJDPQWUTXEITFRIYVWSRNDELSALDJCXURNIQSFEVGJPEIJFCE");
    msg.links = 906707757U;

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
    msg.setTimeStamp(0.290370937438);
    msg.setSource(56496U);
    msg.setSourceEntity(123U);
    msg.setDestination(7985U);
    msg.setDestinationEntity(78U);
    msg.group_name.assign("AQFZCLWXCOCYJSLBMATEHJPXMYJLTAPAGDTRKZTZIXFDEYTCEOWWUIAWRUTGLHMOKQOSKGWLZNYXBVPIXNCDBFQYUIJIVKCRUFPNEHMCTVREPZMAHAVSXRQGENSEQAKQIXUWMOWAZYVJOHPMXVRGGWZBUXTEEDDNVNWNLQK");
    msg.links = 3797530694U;

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
    msg.setTimeStamp(0.236925886867);
    msg.setSource(33559U);
    msg.setSourceEntity(245U);
    msg.setDestination(35787U);
    msg.setDestinationEntity(110U);
    msg.group_name.assign("PVNMNNGOYCNVHLJKTXTDHPGPFUOTWBLRRVVCCMDWBIIASIHLUUPEAKYFZVKNBGPNGKHTZDXERZPNCRXILQHQIFEJLACEQWZIDTKWJUYSOJTLTDDBUIMZXVKWYLJQKUCFBMXPHVBOGMAJQSTZQRSMWPFGTCWPXDJUWAOLLQNSXEJQGRBDNOEWLFVNGBAJOHYIZBROIFSRMSAUEAYZSTWFQSFK");
    msg.links = 3313295960U;

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
    msg.setTimeStamp(0.150722917796);
    msg.setSource(26231U);
    msg.setSourceEntity(155U);
    msg.setDestination(65368U);
    msg.setDestinationEntity(140U);
    msg.groupname.assign("ORMWEMHBDYGFUOGJMONDQFOAXZCVZCSPIYRKNTQQGNFSVMQZLUBEVRFXKIUYLWTA");
    msg.action = 91U;
    msg.grouplist.assign("XDPUAHYJQSOAHRMLZZ");

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
    msg.setTimeStamp(0.671439843197);
    msg.setSource(24296U);
    msg.setSourceEntity(20U);
    msg.setDestination(11841U);
    msg.setDestinationEntity(125U);
    msg.groupname.assign("IKKTZURXNDAPWTAWUBOLZTYPXFMAWMDBIZNTJCLCXRNAWCCPKWZTFUECLZVOOAO");
    msg.action = 180U;
    msg.grouplist.assign("GGHUKCWAWXMVFDTBDKWEBJBJSMZSZADKRVKPYIRVZJHAHLSUFBTBDPSNZPRBTPHWSBETIUJXWWHCWAMXDLLOFDQZWTOHAXOFMADFGJLULQCQTPYWQGJMOCJHBGZTARMYTRSZAVVDGVQYEMXARTFULUDKM");

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
    msg.setTimeStamp(0.574365327146);
    msg.setSource(9595U);
    msg.setSourceEntity(98U);
    msg.setDestination(4842U);
    msg.setDestinationEntity(56U);
    msg.groupname.assign("LBPMCGWKFSIOFNVSZLFYSBSQDWMNQTLBRXQCFGWJJPYXQHPAHJFLQRMG");
    msg.action = 8U;
    msg.grouplist.assign("UOOFNYGCDSWMXFHCHIROOWWMJAYXVIBEOKVUPZAFPQSGFATDNWXDIPJZPZLHETFBOMXSZYOLNWKYGBIUHCJXHFYAQDTXEZDINDLSPLZMQNVEEBOSOQHMKSDIDUNMB");

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
    msg.setTimeStamp(0.341235490407);
    msg.setSource(58247U);
    msg.setSourceEntity(17U);
    msg.setDestination(40248U);
    msg.setDestinationEntity(98U);
    msg.value = 0.267505313022;
    msg.sys_src = 19102U;

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
    msg.setTimeStamp(0.165097108298);
    msg.setSource(23016U);
    msg.setSourceEntity(128U);
    msg.setDestination(12221U);
    msg.setDestinationEntity(149U);
    msg.value = 0.323915970291;
    msg.sys_src = 36634U;

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
    msg.setTimeStamp(0.630754619536);
    msg.setSource(7204U);
    msg.setSourceEntity(144U);
    msg.setDestination(61796U);
    msg.setDestinationEntity(0U);
    msg.value = 0.596082904364;
    msg.sys_src = 42927U;

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
    msg.setTimeStamp(0.438519105801);
    msg.setSource(17375U);
    msg.setSourceEntity(185U);
    msg.setDestination(46263U);
    msg.setDestinationEntity(216U);
    msg.value = 0.226722685747;
    msg.units = 49U;

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
    msg.setTimeStamp(0.028751088425);
    msg.setSource(19645U);
    msg.setSourceEntity(122U);
    msg.setDestination(8215U);
    msg.setDestinationEntity(184U);
    msg.value = 0.128209768629;
    msg.units = 47U;

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
    msg.setTimeStamp(0.665723275128);
    msg.setSource(63526U);
    msg.setSourceEntity(23U);
    msg.setDestination(9804U);
    msg.setDestinationEntity(102U);
    msg.value = 0.846271068959;
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
    msg.setTimeStamp(0.75940278881);
    msg.setSource(18122U);
    msg.setSourceEntity(115U);
    msg.setDestination(22947U);
    msg.setDestinationEntity(72U);
    msg.base_lat = 0.140147619031;
    msg.base_lon = 0.0481782472769;
    msg.base_time = 0.683734924697;
    IMC::HistoricSample tmp_msg_0;
    tmp_msg_0.sys_id = 37449U;
    tmp_msg_0.priority = -39;
    tmp_msg_0.x = -6656;
    tmp_msg_0.y = -23534;
    tmp_msg_0.z = 3172;
    tmp_msg_0.t = -25200;
    IMC::Rpm tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 22983;
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
    msg.setTimeStamp(0.377171888667);
    msg.setSource(21532U);
    msg.setSourceEntity(59U);
    msg.setDestination(44483U);
    msg.setDestinationEntity(15U);
    msg.base_lat = 0.509193737731;
    msg.base_lon = 0.0698404922915;
    msg.base_time = 0.57123232467;
    IMC::RemoteCommand tmp_msg_0;
    tmp_msg_0.original_source = 59235U;
    tmp_msg_0.destination = 18141U;
    tmp_msg_0.timeout = 0.201105807201;
    IMC::SetEntityParameters tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("BJSJFCSSPJGZNQAZBYMGUPJYMSWAHPMVTXKMOUCGLLXAUOTKPYRQNSKGTDFSFZTNBNXZILFLQOCRIOELMWIXDVMUZFFOEEETXNPDHCOXSOTAJLHUJVYFKHMZYDIIWOZDYYJQPRDABUYPWNNAZVHEGXHCNMYGVTWJFDBLHSCRDULBSBPAWVJAWEZGBKAEPVQGNGUKHBSHKQHRRVLRJTLMEWIUQIAXKNRYQKECWRDVTGOXIIFWIQTMC");
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
    msg.setTimeStamp(0.742567405509);
    msg.setSource(22722U);
    msg.setSourceEntity(70U);
    msg.setDestination(8077U);
    msg.setDestinationEntity(237U);
    msg.base_lat = 0.504187850717;
    msg.base_lon = 0.534218284762;
    msg.base_time = 0.472492514981;
    IMC::RemoteCommand tmp_msg_0;
    tmp_msg_0.original_source = 54447U;
    tmp_msg_0.destination = 30920U;
    tmp_msg_0.timeout = 0.425156109442;
    IMC::DmsDetection tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.ch01 = 0.350509892708;
    tmp_tmp_msg_0_0.ch02 = 0.553351377491;
    tmp_tmp_msg_0_0.ch03 = 0.34115316199;
    tmp_tmp_msg_0_0.ch04 = 0.175808688574;
    tmp_tmp_msg_0_0.ch05 = 0.858957668694;
    tmp_tmp_msg_0_0.ch06 = 0.808161112909;
    tmp_tmp_msg_0_0.ch07 = 0.587443653484;
    tmp_tmp_msg_0_0.ch08 = 0.756003675895;
    tmp_tmp_msg_0_0.ch09 = 0.391117665616;
    tmp_tmp_msg_0_0.ch10 = 0.124036526362;
    tmp_tmp_msg_0_0.ch11 = 0.963569780548;
    tmp_tmp_msg_0_0.ch12 = 0.283342582658;
    tmp_tmp_msg_0_0.ch13 = 0.625211526832;
    tmp_tmp_msg_0_0.ch14 = 0.402102312501;
    tmp_tmp_msg_0_0.ch15 = 0.0207958730498;
    tmp_tmp_msg_0_0.ch16 = 0.939690380135;
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
    msg.setTimeStamp(0.316243777841);
    msg.setSource(7161U);
    msg.setSourceEntity(44U);
    msg.setDestination(37813U);
    msg.setDestinationEntity(110U);
    msg.base_lat = 0.663377114015;
    msg.base_lon = 0.992589460919;
    msg.base_time = 0.774217412651;
    const char tmp_msg_0[] = {53, 7, 84, 126, 13, 24, -104, -124, 44, 79, 55, 53, -104, -12, 12, 84, 107, 102, -76, -96, 41, 39, 14, -114, 74, -39, -49, 73, -18, -75, 3, -33, 71, -92, -53, -6, -42, 1, -22, -127, 35, 59, -120, -121, 72, -115, 24, -34, 45, 11, 65, 90, -16, 96, 93, 115, 82, 33, -39, 77, -10, -15, -61, 47, 122, 67, 96, 26, -122, -108, 93, -4, -14, 104, -120, 44, 108, -11, -104, 57, -114, -125, 110, 8, -95, 86, 18, -8, -127, 67, 84, -17, 30, 17, 34, 30, -27, 40, -65, 121, 103, -55, -66, 38, -95, 116, 74, 93, 79, -81, 111, 27, -93, -59, 22, -105, 30, 23, 123, -63, 28, -18, 57, -9, 89, -45, 105, -88, 121, 32, 125, 2, 126, -3, -64, 41, -77, 10, -91, -35, -122, -84, 43, 31, -23, -16, 25, 6, 5, 9, -8, 76, 29, -93, -63, 57, 8, 58, 104, -8, -62, -65, -91, -46, -49, 22, -3, 74, 42, 96, 69, 36, 2, 3, -105, -17, -8, 61, 48, -99};
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
    msg.setTimeStamp(0.870585214433);
    msg.setSource(48182U);
    msg.setSourceEntity(233U);
    msg.setDestination(14219U);
    msg.setDestinationEntity(173U);
    msg.base_lat = 0.128492453771;
    msg.base_lon = 0.285887219332;
    msg.base_time = 0.810342089207;
    const char tmp_msg_0[] = {28, -52, 91, 40, -65, -42, 90, -47, 96, -95, 4, -3, 28, -111, -51, -60, 15, 27, 73, 18, -67, 70, 85, 119, -47, 72, 33, -31, 78, -94, 21, 15, -10, 50, 34, 100, 94, -101, -16, 115, -86, -119, -113, -24, -83, 123, -68, -89, -34, -34, -67, -58, 41, -85, 69, 106, 67, 32, 101, -91, 115, -126, -3, -36, -101, -77, -24, -69, 71, 72, -110, -68, 119, -111, -41, -32, 15, -112, -49, 51, 114, -37, 23, -116, -27, 61, -43, -48, 96, 18, 20, -29, -106, 39, 46, -38, 110, 37, 125, 54, 77, -103, 88, 50, 108, 78, -72, 21, 123, 19, -18, 32, -1, -49, -125, 89, -93, 59, -75, -21, 75, -73, -107, -19, 68, -118, -126, 125, -63, 66, -107, 8, -80, 10, 82, -95, 76, 47, -52, -77, -116, -73, 119, 89, 13, 63, 8, -83, 42, 31, 0, -19, 48, 26, 33, 0, 118, 27, 84, 51, -98, 82, 87, 34, 36, 23, 2, -4, 50, -96, -108, 120, -125, -74, 92, 7, 124, -60, -59};
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
    msg.setTimeStamp(0.220477085438);
    msg.setSource(28644U);
    msg.setSourceEntity(44U);
    msg.setDestination(57610U);
    msg.setDestinationEntity(144U);
    msg.base_lat = 0.726454426896;
    msg.base_lon = 0.318086146155;
    msg.base_time = 0.678368584755;
    const char tmp_msg_0[] = {-82, -2, -56, -30, -39, 52, 119, -39, -4, 23, 75, -116, 122, -116, 123, 0, 88, 0, 73, -15, 42, -111, 78, -115, -2, 53, 69, 28, 58, 123, -64, 125, -66, 13, -57, -26, 33, 88, -12, -102, 104, -121, -95, -77, 46, 94, -59, -22, -105, 5, 25, -43, 26, -119, 111, -9, 24, -86, 53, -100, 67, -124, -4, -58, 54, -126, -14, 84, 73, 73, 10, -100, 104, -28, 8, 123, -41, -71, -110, -1, -98, -40, 76, 80, -51, 46, -25, -112, 13, -106, -33, -119, -72, 79, -6, 71, 63, -91, -57, 117, -112, -58, 9, -38, 53, 67, -16, 11, 103, -101, 109, -75, 20, -100, 102, 96, 121, -4, -25, 11, 109, -48, -92, 64, -45, -18, 58, -96, -45, -17};
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
    msg.setTimeStamp(0.426039253761);
    msg.setSource(47753U);
    msg.setSourceEntity(174U);
    msg.setDestination(60784U);
    msg.setDestinationEntity(29U);
    msg.sys_id = 38342U;
    msg.priority = -24;
    msg.x = -18878;
    msg.y = 22437;
    msg.z = -12121;
    msg.t = 17037;
    IMC::CoverArea tmp_msg_0;
    tmp_msg_0.lat = 0.307636613315;
    tmp_msg_0.lon = 0.250011701784;
    tmp_msg_0.z = 0.739368004412;
    tmp_msg_0.z_units = 132U;
    tmp_msg_0.speed = 0.225124205083;
    tmp_msg_0.speed_units = 168U;
    IMC::PolygonVertex tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.533355638742;
    tmp_tmp_msg_0_0.lon = 0.497564624805;
    tmp_msg_0.polygon.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.custom.assign("CUZPRXGTKFLAZTHUVUIDXTBTPDEBGSLOZQFBDROZQBTSWWSEXGMNACRDYONI");
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
    msg.setTimeStamp(0.439667974588);
    msg.setSource(49180U);
    msg.setSourceEntity(104U);
    msg.setDestination(42033U);
    msg.setDestinationEntity(168U);
    msg.sys_id = 19238U;
    msg.priority = 66;
    msg.x = 19766;
    msg.y = -16216;
    msg.z = 5126;
    msg.t = -4360;
    IMC::QueryLedBrightness tmp_msg_0;
    tmp_msg_0.name.assign("LFPKKGVFWLUCHDXXCZSMIJXJYDFKVXQHNOCJNEFAHQYNYVWTAMHPCTGDWNIUKJUQH");
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
    msg.setTimeStamp(0.919168288452);
    msg.setSource(48808U);
    msg.setSourceEntity(242U);
    msg.setDestination(36554U);
    msg.setDestinationEntity(133U);
    msg.sys_id = 8871U;
    msg.priority = 110;
    msg.x = -21743;
    msg.y = 13724;
    msg.z = -29385;
    msg.t = 11953;
    IMC::QueryEntityInfo tmp_msg_0;
    tmp_msg_0.id = 222U;
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
    msg.setTimeStamp(0.204993151881);
    msg.setSource(58312U);
    msg.setSourceEntity(222U);
    msg.setDestination(46745U);
    msg.setDestinationEntity(171U);
    msg.req_id = 38546U;
    msg.type = 245U;
    msg.max_size = 46887U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.860309387942;
    tmp_msg_0.base_lon = 0.373009222276;
    tmp_msg_0.base_time = 0.953942537817;
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
    msg.setTimeStamp(0.948097251088);
    msg.setSource(62835U);
    msg.setSourceEntity(58U);
    msg.setDestination(20221U);
    msg.setDestinationEntity(57U);
    msg.req_id = 3624U;
    msg.type = 164U;
    msg.max_size = 50278U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.318386740229;
    tmp_msg_0.base_lon = 0.173192209186;
    tmp_msg_0.base_time = 0.430950618091;
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
    msg.setTimeStamp(0.139590493769);
    msg.setSource(22913U);
    msg.setSourceEntity(218U);
    msg.setDestination(28396U);
    msg.setDestinationEntity(64U);
    msg.req_id = 20224U;
    msg.type = 173U;
    msg.max_size = 28607U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.46489605973;
    tmp_msg_0.base_lon = 0.786188686581;
    tmp_msg_0.base_time = 0.470962309995;
    IMC::RemoteCommand tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.original_source = 61229U;
    tmp_tmp_msg_0_0.destination = 3356U;
    tmp_tmp_msg_0_0.timeout = 0.794147432706;
    IMC::DevDataBinary tmp_tmp_tmp_msg_0_0_0;
    const char tmp_tmp_tmp_tmp_msg_0_0_0_0[] = {-41, 59, 3, 55, -72, -22, -113, 14, 126, 107, 103, 12, -73, -38, 23, -70, 101, -90, 97, -68, -122, 41, 34, 95, 84, 114, -125, 110, 44, -47, 67, -99, 55, -91, 116, -43, -19, -35, 94, -34, 10, -7, 38, -29, 19, 81, 2, -50, 45, -62, 20, -12, -61, -121, 73, 20, -59, 36, -123, 4, -127, 82, 37, 99, 119, 77, -91, 60, -32, -73, -13, -100, 77, -3, 118, -22, 84, -17, -97, -27, 98, 102, 49, 89, 2, 114, 75, -15, 26, -66, 18, 119, 57, 101, 33, -103, 36, -3, -12, 58, 107, 65, 9, -50, -113, -67, 5, -100, 78, -36, -112, 126, -110, -66, 98, -56, 37, 83, 83};
    tmp_tmp_tmp_msg_0_0_0.value.assign(tmp_tmp_tmp_tmp_msg_0_0_0_0, tmp_tmp_tmp_tmp_msg_0_0_0_0 + sizeof(tmp_tmp_tmp_tmp_msg_0_0_0_0));
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
    msg.setTimeStamp(0.154846065138);
    msg.setSource(23081U);
    msg.setSourceEntity(207U);
    msg.setDestination(37365U);
    msg.setDestinationEntity(6U);
    msg.original_source = 37880U;
    msg.destination = 52666U;
    msg.timeout = 0.930335935398;
    IMC::SimulatedState tmp_msg_0;
    tmp_msg_0.lat = 0.758428036125;
    tmp_msg_0.lon = 0.189654591015;
    tmp_msg_0.height = 0.457333603225;
    tmp_msg_0.x = 0.345554744547;
    tmp_msg_0.y = 0.604917475437;
    tmp_msg_0.z = 0.347207627109;
    tmp_msg_0.phi = 0.495791106688;
    tmp_msg_0.theta = 0.395799183121;
    tmp_msg_0.psi = 0.959830150497;
    tmp_msg_0.u = 0.10554077112;
    tmp_msg_0.v = 0.645349981484;
    tmp_msg_0.w = 0.701864376771;
    tmp_msg_0.p = 0.0899736603074;
    tmp_msg_0.q = 0.467007502001;
    tmp_msg_0.r = 0.729820016367;
    tmp_msg_0.svx = 0.257291020712;
    tmp_msg_0.svy = 0.715360438845;
    tmp_msg_0.svz = 0.416374321949;
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
    msg.setTimeStamp(0.809340630838);
    msg.setSource(8361U);
    msg.setSourceEntity(50U);
    msg.setDestination(4971U);
    msg.setDestinationEntity(13U);
    msg.original_source = 17174U;
    msg.destination = 46113U;
    msg.timeout = 0.0277144261167;
    IMC::Force tmp_msg_0;
    tmp_msg_0.value = 0.697062809973;
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
    msg.setTimeStamp(0.490419382066);
    msg.setSource(49988U);
    msg.setSourceEntity(221U);
    msg.setDestination(37649U);
    msg.setDestinationEntity(99U);
    msg.original_source = 40025U;
    msg.destination = 8149U;
    msg.timeout = 0.729145923226;
    IMC::RegisterManeuver tmp_msg_0;
    tmp_msg_0.mid = 59699U;
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
    msg.setTimeStamp(0.105068326567);
    msg.setSource(2348U);
    msg.setSourceEntity(117U);
    msg.setDestination(21493U);
    msg.setDestinationEntity(254U);
    msg.type = 207U;
    msg.comm_interface = 50486U;
    msg.model = 15706U;
    msg.list.assign("BQQATIMZKKHLSOPDYPABCGVYLKSQLJNSXFRIQMDTFQJVGEHXKRGPWMDZVGHATKFANFZJBRWVEMDDRKXCNEIWKJBXOKOAJITHXRO");

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
    msg.setTimeStamp(0.994359165892);
    msg.setSource(53857U);
    msg.setSourceEntity(83U);
    msg.setDestination(6089U);
    msg.setDestinationEntity(116U);
    msg.type = 178U;
    msg.comm_interface = 38865U;
    msg.model = 46765U;
    msg.list.assign("FAZQWFHPUBJLIUHWMPYSKWWBVCLTLRZNOVWHNGQAPTPCPYNZDJJRHGMMGGHDBNKDFYCAEVAJRASEETRZWXMSBYBGPCPKTHJKGDRYXGSJFDLLBKUKPSSNARPTCFIIKMLDIZUCWTOSIZSSXZCXZELUBMEJRIWUNCNHQTJADUIYKYNHX");

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
    msg.setTimeStamp(0.103896555355);
    msg.setSource(40271U);
    msg.setSourceEntity(45U);
    msg.setDestination(15173U);
    msg.setDestinationEntity(62U);
    msg.type = 101U;
    msg.comm_interface = 51806U;
    msg.model = 28991U;
    msg.list.assign("NDDEIXIMXDKGJMXRBTLYNCKKPFYRWLGAGJMQEQGABJOFXBTTITFYOGLTTECCVWHAFJXQBNZOAYHYBVJXJESJRZEPNKDQFNZQGXCISWITPWOAEPIHUPMSMHRUKHKUSUWZZEMCWLUROHSNXREHPBBPFLGSDZEKTWDQZ");

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
    msg.setTimeStamp(0.188348964142);
    msg.setSource(59934U);
    msg.setSourceEntity(185U);
    msg.setDestination(60506U);
    msg.setDestinationEntity(133U);
    msg.type = 137U;
    msg.req_id = 1051759730U;
    msg.ttl = 9873U;
    msg.code = 57U;
    msg.destination.assign("ZPTZSWVJLCCIUTSRKGQVVXPBYAHJZQDYCGRYQPHOBNULAMNELBANETNGSZDIUJGQRJQBVNAHIYIVTMQLLXABTFKUORBSEFKTEHIOZSMEXJKRFZTCQWCMAOINQZRFWDOACKYZMWCBIZEFHJZKEGGDRAYAIHWGUAMDOQREJMJVKUPBVSYDXMNM");
    msg.source.assign("TXDUBKJFDWGFTHKASWTZRXLONGQUDVNQHAJUYTGZXKQUDYJVMCRZPHGLXITCCAWRCMXNANKVWMQGQOUTIEMSAZXVHGIPINNUBJFFCJHVGELBXMBLPUUFKDOVOMHKKYDCHIFBFSOJT");
    msg.acknowledge = 171U;
    msg.status = 94U;
    const char tmp_msg_0[] = {-53, -3, 98, -9, 67, 88, -68, -16, -117, -24, 23, 101, -17, -25, 114, -2, -62, 76, 96, 109, -79, -29, -32, 4, 102, -88, -102, -15, -8, -95, -56, -17, -100, 57, -74, 117, 66, -116, 6, -93, -44, -3, -70, -59, -58, -119, -72, -21, 56, -108, -100, -86, -14, -118, -111, -27, -68, -96, 77, -93, -14, -52, -122, 39, 96, 75, -72, 71, 78, 42, 63, -28, -36, -106, -122, -45, 44, 7, -92, -89, -67, -54, -66, 60, -37, -24, -104, 36, 21, 22, -33, -71, 99, -61, 0, -44, -38, -117, -113, -106, 14, -45, -69, -126, 4, -126, -29, -16, -52, -5, -17, 19, 30, -72, -45, -9, -55, -71, -16, -23, -33, -2, -78, 4, 90, 18, 72, 77, 91, -45, -14, -99, 96, 60, 20, -17, -8, 42, -80, 37, 81, -105, 105, 47, 99, 0, -124, 40, 57, 59, -107, -92, -40, 6, -99, -109, -78, 112, -8, 118, 118, 74, -48};
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
    msg.setTimeStamp(0.392907007729);
    msg.setSource(31819U);
    msg.setSourceEntity(163U);
    msg.setDestination(59454U);
    msg.setDestinationEntity(91U);
    msg.type = 73U;
    msg.req_id = 4167421718U;
    msg.ttl = 50173U;
    msg.code = 100U;
    msg.destination.assign("SMQOGJMAEQFPFJMLZSCVEHQENRKLBDEJYDYSNIJJZEBCQERRYLKFQOFGOQEVVPVNRAKHKITRPMEMSHHHCINRYGBFPYAKMGCCOKTSNATPMTWQLXHKOKJTWWUBAWBPVODXUXWZNBLPKVULVRDDNUXSLNFQJCIGFDPZCYIIDUYEHJGTALAVYBZCPAZFHZIFTZDXILMVNUXGWWVUIOWYFRJCABOJGLHKHAUDD");
    msg.source.assign("GBNJTRFRENRABPTDTYIGGHLWBSMACZRVGUETQOFKECXXPIXWJSOBUFQUICQKRWEPYAMJNRSXDGASUUERUDMHOBZAKXZQVHRSDLOHFXEUTZYBBLZOCFGJCPXAZSNBTYVQEDYOYVDDIJTVWAIHYPCQDRKEZQAMNMAOUEIHWPTZOVVPWFGXJJSSTAZWPGPONKFKCJWKUSLWGCUBF");
    msg.acknowledge = 254U;
    msg.status = 107U;
    const char tmp_msg_0[] = {-78, 77, -31, -45, -54, 38, -69, -32, -35, -59, 77, -40, -2, -40, 49, -127, -23, 120, -63, 56, -55, 31, 8, 40, -73, -21, 78, -111, 99, 96, -83, 95, 4, -94, -120, -25, -46, 56, -94, -30, -1, 104, 85, 126, -53, 64, -75, 86};
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
    msg.setTimeStamp(0.174099414232);
    msg.setSource(60314U);
    msg.setSourceEntity(37U);
    msg.setDestination(22038U);
    msg.setDestinationEntity(206U);
    msg.type = 120U;
    msg.req_id = 1593997723U;
    msg.ttl = 21298U;
    msg.code = 237U;
    msg.destination.assign("YVOOQCXLSMNAIDYMHPRUYTCTQOFPRWRMKQSIFDLPXAKJUTVFRWVHXSGCGTICGBMKZWBVMRKTHZSMOIEOJURFGWXBNYQGAU");
    msg.source.assign("JXHAZXMMZICHABGMVJURKRZOZXUZGQELMWNFRYLSZGJKFNFGSQCGTPVPUDAQKWMWJCWEZULBLNVNHKUDIHDVQJMRIHLHIOYB");
    msg.acknowledge = 116U;
    msg.status = 90U;
    const char tmp_msg_0[] = {-73, 51, 3, -87, -111, 10, -61, 69, 47, -127, 71, -68, -104, -38, -19, 46, -68, 105, 102, -54, -36, 39, -124, -46, 86, 44, -41, 12, 103, -35, -54, -36, 34, 8, 62, -4, -88, -117, -17, 73, 85, 117, 119, 47, -21, 105, -103, -37, -1, -71, 75, -7, 120, -72, 1, -18, -88, 35, 58, -13, 58, 97, -31, -21, -82, 102, 13, 85, -34, 105, -114, -92, -105, -99, -100, -110, 13, -103, -65, -10, -12, -17, -122, 55, 86, -59, -58, -128, -82, 15, 98, 88, -30, -5, 126, -4, -95, 32, -113, -58, 102, 63, 22, 39, 107, 94, 18, -102, -9, -10, 23, -13, -48, -6, -27, 106, -91, -86, -104, -66, 108, 121, 90, 18, 112, 110, 80, 30, -62, 60, 17, 73, 32, 104, 124, 126, 63, 32, 45, 54, 124, 73, -35, -65, 87, -56, -43, -12, 84, -100, -65, -100, 85, -27, 22, -88, 16, -20, -34, -19, 106, -91, -107, 84, 34, -29, 96, -35, 123, -69, 79, -117, -35, 120, -36, 53, -125, 117, 105, -13, -69, -27, -79, 17, 78, 40, 88, -46, 85, 37, -122, -64, 36, -54, -4, 31, 62, 95, -54, -123, 118, -31, -90, 117, -82, -126, -21, 86, -47, 13, 37, 95, 56, -47, 125, -97, -63, -20, 40, 74, 24, -127, -120, 51, -39, 73, -12, -68, 71, 39, 68, 0};
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
    msg.setTimeStamp(0.292101247751);
    msg.setSource(51043U);
    msg.setSourceEntity(200U);
    msg.setDestination(48636U);
    msg.setDestinationEntity(178U);
    msg.id = 247U;
    msg.range = 0.472286096803;

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
    msg.setTimeStamp(0.790176343642);
    msg.setSource(20316U);
    msg.setSourceEntity(161U);
    msg.setDestination(20553U);
    msg.setDestinationEntity(126U);
    msg.id = 251U;
    msg.range = 0.0626860862253;

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
    msg.setTimeStamp(0.803450645671);
    msg.setSource(62916U);
    msg.setSourceEntity(77U);
    msg.setDestination(23817U);
    msg.setDestinationEntity(48U);
    msg.id = 128U;
    msg.range = 0.876884858177;

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
    msg.setTimeStamp(0.444914860992);
    msg.setSource(25186U);
    msg.setSourceEntity(31U);
    msg.setDestination(13503U);
    msg.setDestinationEntity(63U);
    msg.beacon.assign("ABKVFZDZRXRPZWUADFBKZFMALLPJRYXQLYLTFRDLMGSITBSVOLFGYIWLWJYNURBIVCESVDWVOZWGPJQKRIVETMQQSRIGHAYEHAITJXGALBUDHDXPEEXTOCGPHMSMPNBKXKZHJJUOHVKFCCZHQSUEYYQCOQXOTBPXJBUCNGPOYNFLTOUIVBTGNRZNWCTWERECJYAHODACMCMWNSRQIKJEUSKAMMKNDVQFTQNFZBHUGUXMXSHOYKD");
    msg.lat = 0.118034749302;
    msg.lon = 0.618377404945;
    msg.depth = 0.230449316805;
    msg.query_channel = 128U;
    msg.reply_channel = 146U;
    msg.transponder_delay = 191U;

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
    msg.setTimeStamp(0.916674664445);
    msg.setSource(227U);
    msg.setSourceEntity(87U);
    msg.setDestination(40000U);
    msg.setDestinationEntity(107U);
    msg.beacon.assign("CALRDGBMXMMYUXEE");
    msg.lat = 0.0634888047991;
    msg.lon = 0.103767602204;
    msg.depth = 0.20298391829;
    msg.query_channel = 178U;
    msg.reply_channel = 2U;
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
    msg.setTimeStamp(0.448001342776);
    msg.setSource(9021U);
    msg.setSourceEntity(47U);
    msg.setDestination(48149U);
    msg.setDestinationEntity(200U);
    msg.beacon.assign("JIRQCPOWCMQFMHPOMXPVVBGUFQUNYUAESJFMIPQZEN");
    msg.lat = 0.295307800734;
    msg.lon = 0.114533534284;
    msg.depth = 0.611585610558;
    msg.query_channel = 217U;
    msg.reply_channel = 6U;
    msg.transponder_delay = 96U;

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
    msg.setTimeStamp(0.110890177427);
    msg.setSource(28945U);
    msg.setSourceEntity(10U);
    msg.setDestination(39268U);
    msg.setDestinationEntity(38U);
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
    msg.setTimeStamp(0.0718111681656);
    msg.setSource(9850U);
    msg.setSourceEntity(35U);
    msg.setDestination(1009U);
    msg.setDestinationEntity(142U);
    msg.op = 14U;

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
    msg.setTimeStamp(0.0552053438809);
    msg.setSource(53377U);
    msg.setSourceEntity(71U);
    msg.setDestination(26887U);
    msg.setDestinationEntity(126U);
    msg.op = 159U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("IEUOTSFMKVXJECDMJTSQWGXPDDQQWEOWRPYBWCYUMMJQAHMPJOHHGAPHVPIQLEYTWZIWXN");
    tmp_msg_0.lat = 0.463900566459;
    tmp_msg_0.lon = 0.830194208691;
    tmp_msg_0.depth = 0.889847981678;
    tmp_msg_0.query_channel = 226U;
    tmp_msg_0.reply_channel = 199U;
    tmp_msg_0.transponder_delay = 193U;
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
    msg.setTimeStamp(0.138639502113);
    msg.setSource(14377U);
    msg.setSourceEntity(174U);
    msg.setDestination(10509U);
    msg.setDestinationEntity(45U);
    IMC::FollowPoint tmp_msg_0;
    tmp_msg_0.target.assign("BTHJVYCIAECRQDJPXTWBIDGLJZGXCWWOOBRNXZOKJCPATEDABYHDEZXFDUKSIYTZWIKUWHFXYJLHBUJIQLBZGLNRKXPVAAISBPUMMRZPHTBYQSDNSODEOMJMLYEFUMPWEQRJQVYKEQZQLEDMGCFKINBFRRSRXRUGYVAOVHGTNAWSNQNQFCCUYDWLLJHPAYHUSPAWGFVOVISIVSGBCRKTMKSLVHFXEPFONWZCOXCNLAHKUG");
    tmp_msg_0.max_speed = 0.0612649394949;
    tmp_msg_0.speed_units = 144U;
    tmp_msg_0.lat = 0.835733912581;
    tmp_msg_0.lon = 0.947227587023;
    tmp_msg_0.z = 0.0730065234648;
    tmp_msg_0.z_units = 210U;
    tmp_msg_0.custom.assign("PKYJSEPRFJGDBGWHIQEZOEXZEIYDZSVJUJIVUTOWYHWHLZZMRNQANBTALXTHFBXVSTAPLINPPCMYFWTEZCGVBAQFELUKWHPOIEQVCIDBSLYKOXYXBWTIOLSYHWTGGVBMFGNJPLSMJKAZCDQIQQEQMKXVBOYUMRXZAMO");
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
    msg.setTimeStamp(0.827732770519);
    msg.setSource(61513U);
    msg.setSourceEntity(164U);
    msg.setDestination(32926U);
    msg.setDestinationEntity(126U);
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("SFZYCUAIUJKEAYJBPXLTWXWQIADSOWZQFIXULSZDTRNTTCYFHRAZRLUDVUSEOXNHVLTMNBKZOQFMNCUF");
    tmp_msg_0.dist = 0.352369698025;
    tmp_msg_0.err = 0.240462939887;
    tmp_msg_0.ctrl_imp = 0.293025743292;
    tmp_msg_0.rel_dir_x = 0.150763396704;
    tmp_msg_0.rel_dir_y = 0.910390110401;
    tmp_msg_0.rel_dir_z = 0.238991510146;
    tmp_msg_0.err_x = 0.182772791278;
    tmp_msg_0.err_y = 0.563756665065;
    tmp_msg_0.err_z = 0.126336528385;
    tmp_msg_0.rf_err_x = 0.0971505050923;
    tmp_msg_0.rf_err_y = 0.340444124698;
    tmp_msg_0.rf_err_z = 0.918452103429;
    tmp_msg_0.rf_err_vx = 0.37692066456;
    tmp_msg_0.rf_err_vy = 0.709197854576;
    tmp_msg_0.rf_err_vz = 0.500915485402;
    tmp_msg_0.ss_x = 0.780269404821;
    tmp_msg_0.ss_y = 0.550985450121;
    tmp_msg_0.ss_z = 0.0404686877518;
    tmp_msg_0.virt_err_x = 0.781839897656;
    tmp_msg_0.virt_err_y = 0.0166151898916;
    tmp_msg_0.virt_err_z = 0.931563776267;
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
    msg.setTimeStamp(0.0807925112179);
    msg.setSource(42789U);
    msg.setSourceEntity(238U);
    msg.setDestination(50461U);
    msg.setDestinationEntity(163U);
    IMC::DesiredThrottle tmp_msg_0;
    tmp_msg_0.value = 0.457668656302;
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
    msg.setTimeStamp(0.877187800911);
    msg.setSource(16445U);
    msg.setSourceEntity(171U);
    msg.setDestination(44823U);
    msg.setDestinationEntity(166U);
    msg.op = 76U;
    msg.system.assign("KASCOVENCKYJJEEEWCMPYSFDPAYTIXJDARJ");
    msg.range = 0.889488667226;
    IMC::FollowPoint tmp_msg_0;
    tmp_msg_0.target.assign("VTBFQSAHEHONHTFUQYMSKMLATLOMQQFFUXQOSOKTIUIRRFUNKELWXWVXXLOSESGDHTHWIPXHJD");
    tmp_msg_0.max_speed = 0.797921037144;
    tmp_msg_0.speed_units = 77U;
    tmp_msg_0.lat = 0.662370617047;
    tmp_msg_0.lon = 0.260068494489;
    tmp_msg_0.z = 0.653346068197;
    tmp_msg_0.z_units = 115U;
    tmp_msg_0.custom.assign("RFNKZUQAQELWNKQBDTMDHRFOVASFNHWMHLQSFCFOGIIHZXPYCUKQECFGVIYSRTAOUIJXICHWJTNYZTDZAOKWBJTVHGTGPBWSZKDI");
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
    msg.setTimeStamp(0.0555042313787);
    msg.setSource(25494U);
    msg.setSourceEntity(140U);
    msg.setDestination(43661U);
    msg.setDestinationEntity(154U);
    msg.op = 179U;
    msg.system.assign("LICWSDDPJXBAPKDRRAMSVOVVQOLATUJFGWHXHRULYFNZEDDGZGAVENYIXNOSPLUHVKCKYZQUMZSHNPCJATWPTWWGHIXFOFUBQXPLHEYCKSDLYXFNKJYQCEQVWUHQPFIPINMNM");
    msg.range = 0.0816413864303;
    IMC::PowerSettings tmp_msg_0;
    tmp_msg_0.l2 = -80;
    tmp_msg_0.l3 = -52;
    tmp_msg_0.iridium = -103;
    tmp_msg_0.modem = 35;
    tmp_msg_0.pumps = 26;
    tmp_msg_0.vhf = 7;
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
    msg.setTimeStamp(0.937317937899);
    msg.setSource(19658U);
    msg.setSourceEntity(0U);
    msg.setDestination(55494U);
    msg.setDestinationEntity(94U);
    msg.op = 25U;
    msg.system.assign("PROCZMISFZGMSALBSDAMCCUNHKBSIDKJDMKQODQFVGFOCPNEJVLIUPEPAHRWYDTYHLWXPQEFMU");
    msg.range = 0.94550132386;
    IMC::FormationMonitor tmp_msg_0;
    tmp_msg_0.ax_cmd = 0.0714627416081;
    tmp_msg_0.ay_cmd = 0.627937010624;
    tmp_msg_0.az_cmd = 0.149130980657;
    tmp_msg_0.ax_des = 0.775786838162;
    tmp_msg_0.ay_des = 0.294301624793;
    tmp_msg_0.az_des = 0.377582479144;
    tmp_msg_0.virt_err_x = 0.338616207068;
    tmp_msg_0.virt_err_y = 0.170479848726;
    tmp_msg_0.virt_err_z = 0.644138285003;
    tmp_msg_0.surf_fdbk_x = 0.981475291844;
    tmp_msg_0.surf_fdbk_y = 0.295091732704;
    tmp_msg_0.surf_fdbk_z = 0.579315522451;
    tmp_msg_0.surf_unkn_x = 0.310283178465;
    tmp_msg_0.surf_unkn_y = 0.784833250311;
    tmp_msg_0.surf_unkn_z = 0.511380723148;
    tmp_msg_0.ss_x = 0.377057525799;
    tmp_msg_0.ss_y = 0.874835586965;
    tmp_msg_0.ss_z = 0.48745856163;
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
    msg.setTimeStamp(0.502247483692);
    msg.setSource(7058U);
    msg.setSourceEntity(244U);
    msg.setDestination(43967U);
    msg.setDestinationEntity(22U);

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
    msg.setTimeStamp(0.0213771088859);
    msg.setSource(14413U);
    msg.setSourceEntity(50U);
    msg.setDestination(20617U);
    msg.setDestinationEntity(228U);

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
    msg.setTimeStamp(0.884305801833);
    msg.setSource(19021U);
    msg.setSourceEntity(210U);
    msg.setDestination(1714U);
    msg.setDestinationEntity(229U);

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
    msg.setTimeStamp(0.514215601519);
    msg.setSource(45108U);
    msg.setSourceEntity(164U);
    msg.setDestination(42149U);
    msg.setDestinationEntity(28U);
    msg.list.assign("LYLUYKPHSAQTBSHUKVPDYWKQXDURICDAEOEQGGEGECTXFDVNFCJZZJRXJRWNBZRIFTNOIAWNAZLXYXJCHOMWAXEIAUQAMVKLSHUBNFGWSDVGWFNIMXBUSHMEFMNTKHORVUNZLJDJOVCRTELHHLSKYFLIFGJONZMCWAQ");

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
    msg.setTimeStamp(0.848084513767);
    msg.setSource(43928U);
    msg.setSourceEntity(151U);
    msg.setDestination(57628U);
    msg.setDestinationEntity(22U);
    msg.list.assign("GMCQHPNCHFDGIIUKVOOXCUEGDTWQJQMYHBTSOKKJKAPMKQIVXQVRPIYXNFYLWAMAJZLQPWUFWZLRJMDKGPZEDSOWNTFRRQPSLJMXUAISMXJVTSXESJBHNCBZLYNFCYZUGULBEVVGBIBPZONVLYQWTWSFEFEVIOKPSTRIUERQFDWJUGCCZHRJHLNADBUFSNETLYXOJKXDEZDLUIFTNWKVHAAMBYTGYWSAHGBTCERA");

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
    msg.setTimeStamp(0.541272939769);
    msg.setSource(54494U);
    msg.setSourceEntity(122U);
    msg.setDestination(11448U);
    msg.setDestinationEntity(151U);
    msg.list.assign("RYQWCAZRVFHBVGYWQUEBOFAXRBGGZPMYPYISMEOXMKPRBLAULYEBHJUSICMRONNQCNVJPDPL");

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
    msg.setTimeStamp(0.713460598631);
    msg.setSource(34649U);
    msg.setSourceEntity(16U);
    msg.setDestination(27733U);
    msg.setDestinationEntity(0U);
    msg.peer.assign("BEGXJRJDKLWDQFAZSCWJCEAFNXRZTOPPZBOOFLPRHIVLKVXRYQTYVYKMOFDWZPQTELMFWJPSWVSCV");
    msg.rssi = 0.0378213659192;
    msg.integrity = 30677U;

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
    msg.setTimeStamp(0.995212852293);
    msg.setSource(58009U);
    msg.setSourceEntity(203U);
    msg.setDestination(18882U);
    msg.setDestinationEntity(188U);
    msg.peer.assign("LHXHWOGVNYPQTBQYBYEVDZTOHKDNPOMYJWKGLSGLMUGQVDSUGNRECBKBEDSUCOPSZJIJQPCPMUMDNXIWLADTWNGEYAIKBZJIZMKNAEKMTEOFLUGXTB");
    msg.rssi = 0.0478083709527;
    msg.integrity = 16860U;

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
    msg.setTimeStamp(0.553823144018);
    msg.setSource(40110U);
    msg.setSourceEntity(241U);
    msg.setDestination(44952U);
    msg.setDestinationEntity(193U);
    msg.peer.assign("EJJAZSUYPTYRUGSGFHAIQYEVDRMAMOUNAUKMLRVGWDWDKVBYTMQNKXOBZFPFNXXIJNTSOIYHNWZJRRTSLKEQQITLPXDWFRUKVYJNKRSZYQHPQNAEIYVADPUOFHFHMTOHCAOBACQLMJYTMDVBNQELICVTGKZSMSCIFLLFZWIGHZXUBGCSUDCEJAPWWHSLYSXCJEDDMIFXPCARLLPTPZRG");
    msg.rssi = 0.759046100625;
    msg.integrity = 10895U;

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
    msg.setTimeStamp(0.093995361659);
    msg.setSource(24685U);
    msg.setSourceEntity(134U);
    msg.setDestination(54947U);
    msg.setDestinationEntity(116U);
    msg.req_id = 53316U;
    msg.destination.assign("FUBZLBXDYLGHESFASCOICATIOAMJVNWUENVKWWOYGDPDVULXDWBTPDNNQVLJKTBVGGFIRIVOZBHNP");
    msg.timeout = 0.399273520037;
    msg.range = 0.557082505724;
    msg.type = 237U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("XLKWFRRBMPFMWSHBQNZMIKJMMESGYLDEZZIQOJATTATVHAZXQQAPCYUJKGNOGCFHJSVSATBVUZBVYODOVDVUQLGJREGSFQRSWANDBIYTUPIXCCEUFVOLRBBCTIWWGMXGMIYEDFCFORXDRNKCNNNWCFJYKXM");
    tmp_msg_0.lat = 0.500220718275;
    tmp_msg_0.lon = 0.916780745309;
    tmp_msg_0.z = 0.702569335636;
    tmp_msg_0.z_units = 95U;
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
    msg.setTimeStamp(0.182105070523);
    msg.setSource(39421U);
    msg.setSourceEntity(65U);
    msg.setDestination(26727U);
    msg.setDestinationEntity(216U);
    msg.req_id = 34625U;
    msg.destination.assign("OJRSYQTGTWQAOVTUIZYKDDMNWFTDXLUFHJPXGETFMZHCFAQHXCWWQEIJLJZRRUBROPFKKNSOPDEUSXLVBJMQRQMKBVAFPZLMCUVXSDZGXMYZVFSFIDKWNNQVMQOCYLHAVCOKGNRCEJLDVWTDAXYGPAPMYZIASYE");
    msg.timeout = 0.953969727269;
    msg.range = 0.553433609873;
    msg.type = 212U;
    IMC::CoverArea tmp_msg_0;
    tmp_msg_0.lat = 0.44008999628;
    tmp_msg_0.lon = 0.867984901748;
    tmp_msg_0.z = 0.995340909232;
    tmp_msg_0.z_units = 164U;
    tmp_msg_0.speed = 0.880370757023;
    tmp_msg_0.speed_units = 60U;
    tmp_msg_0.custom.assign("KESNXJONAKQHDSCXVLXKLNWJKHCGNYTWJZPEFUPGLADPODFQWYNTCZNEIEPVJWJGDZVBQHVYUHTIDBUYOPHCIZLDFEEGRJUBQOKOYVFDZRIKRRZFTMIXLCDYLSWJQUAGCBQRHOZIMSWBQJFNZTMOOHFCSWPLEZCBLNDATGEXIVXPXYLNMIVMYJBYMMBAUORAKUVPAGMSTZKDTAH");
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
    msg.setTimeStamp(0.360835154853);
    msg.setSource(11974U);
    msg.setSourceEntity(47U);
    msg.setDestination(37239U);
    msg.setDestinationEntity(80U);
    msg.req_id = 2429U;
    msg.destination.assign("HRZVEVKKQVJQIYZGSDGGWUQOFWHOBHGSYMBVUGIFFKLHUCQHBZTSWNNYUBEUPPZHUFVNMYHYQLAMCDZUMVXLMXCYFPERSYWXOKCNFDMIPHEQXFGXNYJPRGWUAJRUAGCBWVTPVIWIGDHSWOFAPTZSXGTCJPKKYZHCRZAZAXOBJNFOEMJ");
    msg.timeout = 0.500206088605;
    msg.range = 0.234547305797;
    msg.type = 3U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.758968174228;
    tmp_msg_0.lon = 0.452929213549;
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
    msg.setTimeStamp(0.341957297357);
    msg.setSource(2431U);
    msg.setSourceEntity(86U);
    msg.setDestination(40445U);
    msg.setDestinationEntity(253U);
    msg.req_id = 13595U;
    msg.type = 191U;
    msg.status = 127U;
    msg.info.assign("EKELGDWCOHNTDIDNRTEUXILQLEEGBDLUSNWLHEZJKZQPKCZXEONFPKSXNX");
    msg.range = 0.284950888288;

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
    msg.setTimeStamp(0.900962705628);
    msg.setSource(63169U);
    msg.setSourceEntity(142U);
    msg.setDestination(63715U);
    msg.setDestinationEntity(82U);
    msg.req_id = 60428U;
    msg.type = 13U;
    msg.status = 76U;
    msg.info.assign("FZSCEJGMUSZJPOYGZWNGDUMLRRGFGWBQREPQYZBTSMGIUXLDHZNANIKVKHCKSXQQJFKDDKIUSMSNBIJJYTVOSBEHWRPZHUPAQCTCVXQYKTMIYXFASKARGPCVYDRLGHBONPBTGANDWKYCZHWFWCDJMWOLLOBQHAPTTX");
    msg.range = 0.221770398358;

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
    msg.setTimeStamp(0.318021604929);
    msg.setSource(55499U);
    msg.setSourceEntity(193U);
    msg.setDestination(51161U);
    msg.setDestinationEntity(221U);
    msg.req_id = 42415U;
    msg.type = 17U;
    msg.status = 234U;
    msg.info.assign("NRGVLTMOBCTTKRPETVZKMMHDZGNEPECTNZYLUKLHJXSRCFDQZFBZZZSTYTUIFWKHPAFMRNNWAFKBOPHMWAEAWKEWOLVYCKXOZIIUFLEBEJWJKLDNTVIASGAIIPDZYJBCERJNLXDUFOVBBQYQJNXDFOBGDDHKUGYCISPCBQUHRFAZJMANPYWAW");
    msg.range = 0.135411249379;

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
    msg.setTimeStamp(0.269167862933);
    msg.setSource(25357U);
    msg.setSourceEntity(42U);
    msg.setDestination(49774U);
    msg.setDestinationEntity(132U);
    msg.value = -12049;

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
    msg.setTimeStamp(0.683126014613);
    msg.setSource(23486U);
    msg.setSourceEntity(77U);
    msg.setDestination(30670U);
    msg.setDestinationEntity(36U);
    msg.value = 13865;

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
    msg.setTimeStamp(0.700653144182);
    msg.setSource(22304U);
    msg.setSourceEntity(182U);
    msg.setDestination(23163U);
    msg.setDestinationEntity(115U);
    msg.value = -14228;

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
    msg.setTimeStamp(0.224893192109);
    msg.setSource(34724U);
    msg.setSourceEntity(76U);
    msg.setDestination(11997U);
    msg.setDestinationEntity(127U);
    msg.value = 0.782302206553;

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
    msg.setTimeStamp(0.954089926873);
    msg.setSource(46512U);
    msg.setSourceEntity(245U);
    msg.setDestination(63982U);
    msg.setDestinationEntity(154U);
    msg.value = 0.892694413526;

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
    msg.setTimeStamp(0.187186258333);
    msg.setSource(57723U);
    msg.setSourceEntity(102U);
    msg.setDestination(30245U);
    msg.setDestinationEntity(119U);
    msg.value = 0.393578350542;

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
    msg.setTimeStamp(0.444331681344);
    msg.setSource(16124U);
    msg.setSourceEntity(120U);
    msg.setDestination(34686U);
    msg.setDestinationEntity(180U);
    msg.value = 0.245361091267;

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
    msg.setTimeStamp(0.0684003778121);
    msg.setSource(51359U);
    msg.setSourceEntity(230U);
    msg.setDestination(23614U);
    msg.setDestinationEntity(193U);
    msg.value = 0.419215762879;

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
    msg.setTimeStamp(0.307640469452);
    msg.setSource(38232U);
    msg.setSourceEntity(247U);
    msg.setDestination(63844U);
    msg.setDestinationEntity(151U);
    msg.value = 0.783797975463;

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
    msg.setTimeStamp(0.376382325471);
    msg.setSource(50686U);
    msg.setSourceEntity(155U);
    msg.setDestination(27034U);
    msg.setDestinationEntity(107U);
    msg.validity = 43103U;
    msg.type = 244U;
    msg.utc_year = 44320U;
    msg.utc_month = 86U;
    msg.utc_day = 234U;
    msg.utc_time = 0.735554323933;
    msg.lat = 0.594704180854;
    msg.lon = 0.567543094214;
    msg.height = 0.189846482372;
    msg.satellites = 185U;
    msg.cog = 0.167618451361;
    msg.sog = 0.943404613274;
    msg.hdop = 0.920383782469;
    msg.vdop = 0.617614925975;
    msg.hacc = 0.485483027016;
    msg.vacc = 0.215921968097;

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
    msg.setTimeStamp(0.265949418279);
    msg.setSource(56887U);
    msg.setSourceEntity(25U);
    msg.setDestination(37826U);
    msg.setDestinationEntity(13U);
    msg.validity = 59064U;
    msg.type = 79U;
    msg.utc_year = 28311U;
    msg.utc_month = 58U;
    msg.utc_day = 14U;
    msg.utc_time = 0.691452490927;
    msg.lat = 0.289612616636;
    msg.lon = 0.851729855464;
    msg.height = 0.328953181061;
    msg.satellites = 143U;
    msg.cog = 0.0269857708214;
    msg.sog = 0.568619406107;
    msg.hdop = 0.618431165362;
    msg.vdop = 0.864306801614;
    msg.hacc = 0.799045390595;
    msg.vacc = 0.774979562187;

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
    msg.setTimeStamp(0.977905291657);
    msg.setSource(61029U);
    msg.setSourceEntity(83U);
    msg.setDestination(6577U);
    msg.setDestinationEntity(195U);
    msg.validity = 16899U;
    msg.type = 254U;
    msg.utc_year = 37735U;
    msg.utc_month = 133U;
    msg.utc_day = 147U;
    msg.utc_time = 0.619624480812;
    msg.lat = 0.692078123768;
    msg.lon = 0.265436786559;
    msg.height = 0.150108640705;
    msg.satellites = 248U;
    msg.cog = 0.769100038746;
    msg.sog = 0.669384316011;
    msg.hdop = 0.426389761103;
    msg.vdop = 0.645646353085;
    msg.hacc = 0.551518710592;
    msg.vacc = 0.369466694725;

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
    msg.setTimeStamp(0.378591905546);
    msg.setSource(39377U);
    msg.setSourceEntity(125U);
    msg.setDestination(54955U);
    msg.setDestinationEntity(167U);
    msg.time = 0.743577982518;
    msg.phi = 0.482184179804;
    msg.theta = 0.80462561712;
    msg.psi = 0.881805714867;
    msg.psi_magnetic = 0.0041908510783;

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
    msg.setTimeStamp(0.58421299182);
    msg.setSource(21186U);
    msg.setSourceEntity(214U);
    msg.setDestination(33311U);
    msg.setDestinationEntity(227U);
    msg.time = 0.841869385463;
    msg.phi = 0.740907356757;
    msg.theta = 0.593144884982;
    msg.psi = 0.00876448463947;
    msg.psi_magnetic = 0.853398564855;

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
    msg.setTimeStamp(0.415619445736);
    msg.setSource(11201U);
    msg.setSourceEntity(233U);
    msg.setDestination(6490U);
    msg.setDestinationEntity(238U);
    msg.time = 0.207530147822;
    msg.phi = 0.601975147941;
    msg.theta = 0.99340594003;
    msg.psi = 0.847138136102;
    msg.psi_magnetic = 0.176949145037;

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
    msg.setTimeStamp(0.835359884593);
    msg.setSource(32215U);
    msg.setSourceEntity(116U);
    msg.setDestination(28418U);
    msg.setDestinationEntity(191U);
    msg.time = 0.757989154663;
    msg.x = 0.573595156629;
    msg.y = 0.358083930957;
    msg.z = 0.828237162167;
    msg.timestep = 0.249286522619;

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
    msg.setTimeStamp(0.184291455028);
    msg.setSource(35326U);
    msg.setSourceEntity(190U);
    msg.setDestination(49425U);
    msg.setDestinationEntity(154U);
    msg.time = 0.623774602412;
    msg.x = 0.494202245958;
    msg.y = 0.114613159272;
    msg.z = 0.0644629344316;
    msg.timestep = 0.899027873558;

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
    msg.setTimeStamp(0.891912667998);
    msg.setSource(22681U);
    msg.setSourceEntity(139U);
    msg.setDestination(27642U);
    msg.setDestinationEntity(61U);
    msg.time = 0.133656514852;
    msg.x = 0.247109228159;
    msg.y = 0.167860028577;
    msg.z = 0.373439188848;
    msg.timestep = 0.256674108589;

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
    msg.setTimeStamp(0.669805320427);
    msg.setSource(20017U);
    msg.setSourceEntity(66U);
    msg.setDestination(33409U);
    msg.setDestinationEntity(130U);
    msg.time = 0.733493777624;
    msg.x = 0.687413804835;
    msg.y = 0.0444876653299;
    msg.z = 0.739271846529;

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
    msg.setTimeStamp(0.242829767848);
    msg.setSource(35992U);
    msg.setSourceEntity(108U);
    msg.setDestination(17364U);
    msg.setDestinationEntity(192U);
    msg.time = 0.780320031536;
    msg.x = 0.41737553807;
    msg.y = 0.240750612687;
    msg.z = 0.26112605383;

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
    msg.setTimeStamp(0.386048886174);
    msg.setSource(6163U);
    msg.setSourceEntity(71U);
    msg.setDestination(51585U);
    msg.setDestinationEntity(197U);
    msg.time = 0.80981635211;
    msg.x = 0.940447273982;
    msg.y = 0.118994234143;
    msg.z = 0.0991957564799;

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
    msg.setTimeStamp(0.585020884639);
    msg.setSource(58645U);
    msg.setSourceEntity(189U);
    msg.setDestination(63805U);
    msg.setDestinationEntity(127U);
    msg.time = 0.746644636498;
    msg.x = 0.336200556462;
    msg.y = 0.292772046123;
    msg.z = 0.801438283901;

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
    msg.setTimeStamp(0.0720916721179);
    msg.setSource(43605U);
    msg.setSourceEntity(64U);
    msg.setDestination(8519U);
    msg.setDestinationEntity(57U);
    msg.time = 0.688414060244;
    msg.x = 0.478335517722;
    msg.y = 0.508687211964;
    msg.z = 0.76179892198;

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
    msg.setTimeStamp(0.82534934161);
    msg.setSource(37794U);
    msg.setSourceEntity(158U);
    msg.setDestination(19853U);
    msg.setDestinationEntity(59U);
    msg.time = 0.590857111051;
    msg.x = 0.852376701706;
    msg.y = 0.234200884605;
    msg.z = 0.1852909677;

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
    msg.setTimeStamp(0.960375700607);
    msg.setSource(62211U);
    msg.setSourceEntity(242U);
    msg.setDestination(43747U);
    msg.setDestinationEntity(26U);
    msg.time = 0.301374641242;
    msg.x = 0.00125482641794;
    msg.y = 0.0512524828593;
    msg.z = 0.193064986535;

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
    msg.setTimeStamp(0.147356580693);
    msg.setSource(64089U);
    msg.setSourceEntity(132U);
    msg.setDestination(42291U);
    msg.setDestinationEntity(203U);
    msg.time = 0.538504218727;
    msg.x = 0.476816947136;
    msg.y = 0.387149051792;
    msg.z = 0.7760543565;

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
    msg.setTimeStamp(0.817475272966);
    msg.setSource(22865U);
    msg.setSourceEntity(86U);
    msg.setDestination(50158U);
    msg.setDestinationEntity(135U);
    msg.time = 0.345016103991;
    msg.x = 0.347137311648;
    msg.y = 0.763690614292;
    msg.z = 0.133446394119;

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
    msg.setTimeStamp(0.148381186063);
    msg.setSource(44530U);
    msg.setSourceEntity(185U);
    msg.setDestination(63079U);
    msg.setDestinationEntity(227U);
    msg.validity = 65U;
    msg.x = 0.639369358035;
    msg.y = 0.395313564095;
    msg.z = 0.639038242957;

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
    msg.setTimeStamp(0.68909121931);
    msg.setSource(33147U);
    msg.setSourceEntity(86U);
    msg.setDestination(30997U);
    msg.setDestinationEntity(220U);
    msg.validity = 147U;
    msg.x = 0.635067357085;
    msg.y = 0.316645477071;
    msg.z = 0.181414173801;

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
    msg.setTimeStamp(0.646267966862);
    msg.setSource(30778U);
    msg.setSourceEntity(60U);
    msg.setDestination(15078U);
    msg.setDestinationEntity(13U);
    msg.validity = 135U;
    msg.x = 0.384346321541;
    msg.y = 0.504863191081;
    msg.z = 0.858507517406;

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
    msg.setTimeStamp(0.366050551836);
    msg.setSource(10786U);
    msg.setSourceEntity(217U);
    msg.setDestination(23781U);
    msg.setDestinationEntity(26U);
    msg.validity = 51U;
    msg.x = 0.871970175094;
    msg.y = 0.0515315092606;
    msg.z = 0.0558952407603;

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
    msg.setTimeStamp(0.609967111247);
    msg.setSource(42021U);
    msg.setSourceEntity(39U);
    msg.setDestination(18737U);
    msg.setDestinationEntity(39U);
    msg.validity = 17U;
    msg.x = 0.188106805813;
    msg.y = 0.138298414566;
    msg.z = 0.341252687574;

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
    msg.setTimeStamp(0.31723532664);
    msg.setSource(11656U);
    msg.setSourceEntity(246U);
    msg.setDestination(10337U);
    msg.setDestinationEntity(59U);
    msg.validity = 64U;
    msg.x = 0.565185661867;
    msg.y = 0.15030468321;
    msg.z = 0.0474037491135;

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
    msg.setTimeStamp(0.0909192110509);
    msg.setSource(35479U);
    msg.setSourceEntity(176U);
    msg.setDestination(22889U);
    msg.setDestinationEntity(12U);
    msg.time = 0.885482134769;
    msg.x = 0.434809589743;
    msg.y = 0.00684242058374;
    msg.z = 0.117679635951;

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
    msg.setTimeStamp(0.461639928855);
    msg.setSource(18260U);
    msg.setSourceEntity(128U);
    msg.setDestination(10641U);
    msg.setDestinationEntity(181U);
    msg.time = 0.944472470043;
    msg.x = 0.474718512105;
    msg.y = 0.454232066817;
    msg.z = 0.976483030115;

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
    msg.setTimeStamp(0.026322359585);
    msg.setSource(33648U);
    msg.setSourceEntity(218U);
    msg.setDestination(15241U);
    msg.setDestinationEntity(14U);
    msg.time = 0.963336490764;
    msg.x = 0.309043452283;
    msg.y = 0.620234039263;
    msg.z = 0.602047551622;

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
    msg.setTimeStamp(0.358398008696);
    msg.setSource(34798U);
    msg.setSourceEntity(58U);
    msg.setDestination(1860U);
    msg.setDestinationEntity(117U);
    msg.validity = 123U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.330145878556;
    tmp_msg_0.y = 0.303029335719;
    tmp_msg_0.z = 0.188123094477;
    tmp_msg_0.phi = 0.658517929595;
    tmp_msg_0.theta = 0.158552073774;
    tmp_msg_0.psi = 0.385286410072;
    msg.location.push_back(tmp_msg_0);
    IMC::BeamConfig tmp_msg_1;
    tmp_msg_1.beam_width = 0.740688393368;
    tmp_msg_1.beam_height = 0.0131452291857;
    msg.beam_config.push_back(tmp_msg_1);
    msg.value = 0.634944652829;

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
    msg.setTimeStamp(0.168835639391);
    msg.setSource(29889U);
    msg.setSourceEntity(120U);
    msg.setDestination(5936U);
    msg.setDestinationEntity(134U);
    msg.validity = 139U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.812611814297;
    tmp_msg_0.y = 0.830982928469;
    tmp_msg_0.z = 0.864635884894;
    tmp_msg_0.phi = 0.923139765618;
    tmp_msg_0.theta = 0.832905600731;
    tmp_msg_0.psi = 0.664171370299;
    msg.location.push_back(tmp_msg_0);
    IMC::BeamConfig tmp_msg_1;
    tmp_msg_1.beam_width = 0.899431034903;
    tmp_msg_1.beam_height = 0.567963031459;
    msg.beam_config.push_back(tmp_msg_1);
    msg.value = 0.298167729406;

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
    msg.setTimeStamp(0.610153348038);
    msg.setSource(29419U);
    msg.setSourceEntity(214U);
    msg.setDestination(23566U);
    msg.setDestinationEntity(177U);
    msg.validity = 37U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.89359509214;
    tmp_msg_0.y = 0.824451628567;
    tmp_msg_0.z = 0.927901312061;
    tmp_msg_0.phi = 0.447520084561;
    tmp_msg_0.theta = 0.278189022295;
    tmp_msg_0.psi = 0.997001266246;
    msg.location.push_back(tmp_msg_0);
    msg.value = 0.225593939487;

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
    msg.setTimeStamp(0.490765455641);
    msg.setSource(13437U);
    msg.setSourceEntity(138U);
    msg.setDestination(24166U);
    msg.setDestinationEntity(188U);
    msg.value = 0.665197021868;

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
    msg.setTimeStamp(0.335901993219);
    msg.setSource(57153U);
    msg.setSourceEntity(195U);
    msg.setDestination(27997U);
    msg.setDestinationEntity(84U);
    msg.value = 0.334846817361;

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
    msg.setTimeStamp(0.199949354549);
    msg.setSource(45425U);
    msg.setSourceEntity(195U);
    msg.setDestination(7404U);
    msg.setDestinationEntity(132U);
    msg.value = 0.705171458647;

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
    msg.setTimeStamp(0.565162869893);
    msg.setSource(37481U);
    msg.setSourceEntity(87U);
    msg.setDestination(4124U);
    msg.setDestinationEntity(119U);
    msg.value = 0.890996787459;

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
    msg.setTimeStamp(0.590089724156);
    msg.setSource(13085U);
    msg.setSourceEntity(254U);
    msg.setDestination(19968U);
    msg.setDestinationEntity(120U);
    msg.value = 0.779804687347;

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
    msg.setTimeStamp(0.520309164662);
    msg.setSource(54106U);
    msg.setSourceEntity(128U);
    msg.setDestination(57324U);
    msg.setDestinationEntity(79U);
    msg.value = 0.800420912987;

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
    msg.setTimeStamp(0.00655913503232);
    msg.setSource(62386U);
    msg.setSourceEntity(237U);
    msg.setDestination(40032U);
    msg.setDestinationEntity(231U);
    msg.value = 0.136429832331;

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
    msg.setTimeStamp(0.444194274457);
    msg.setSource(32674U);
    msg.setSourceEntity(254U);
    msg.setDestination(44885U);
    msg.setDestinationEntity(117U);
    msg.value = 0.822857231264;

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
    msg.setTimeStamp(0.418433901735);
    msg.setSource(12079U);
    msg.setSourceEntity(162U);
    msg.setDestination(16396U);
    msg.setDestinationEntity(110U);
    msg.value = 0.240474514505;

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
    msg.setTimeStamp(0.424396503499);
    msg.setSource(44985U);
    msg.setSourceEntity(215U);
    msg.setDestination(19648U);
    msg.setDestinationEntity(51U);
    msg.value = 0.104574684974;

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
    msg.setTimeStamp(0.210176227658);
    msg.setSource(39761U);
    msg.setSourceEntity(178U);
    msg.setDestination(31756U);
    msg.setDestinationEntity(247U);
    msg.value = 0.606461093464;

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
    msg.setTimeStamp(0.77393627264);
    msg.setSource(57884U);
    msg.setSourceEntity(74U);
    msg.setDestination(44274U);
    msg.setDestinationEntity(18U);
    msg.value = 0.432411541309;

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
    msg.setTimeStamp(0.754362167086);
    msg.setSource(4299U);
    msg.setSourceEntity(14U);
    msg.setDestination(7135U);
    msg.setDestinationEntity(242U);
    msg.value = 0.958216111433;

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
    msg.setTimeStamp(0.263781823395);
    msg.setSource(10902U);
    msg.setSourceEntity(121U);
    msg.setDestination(48912U);
    msg.setDestinationEntity(244U);
    msg.value = 0.335370003122;

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
    msg.setTimeStamp(0.917490769435);
    msg.setSource(7116U);
    msg.setSourceEntity(136U);
    msg.setDestination(8873U);
    msg.setDestinationEntity(46U);
    msg.value = 0.394915642695;

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
    msg.setTimeStamp(0.0572757403795);
    msg.setSource(34494U);
    msg.setSourceEntity(74U);
    msg.setDestination(44586U);
    msg.setDestinationEntity(69U);
    msg.value = 0.331479622279;

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
    msg.setTimeStamp(0.381056904378);
    msg.setSource(53802U);
    msg.setSourceEntity(80U);
    msg.setDestination(47820U);
    msg.setDestinationEntity(87U);
    msg.value = 0.319795950029;

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
    msg.setTimeStamp(0.120280878899);
    msg.setSource(7172U);
    msg.setSourceEntity(72U);
    msg.setDestination(11030U);
    msg.setDestinationEntity(134U);
    msg.value = 0.170373788974;

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
    msg.setTimeStamp(0.655868610217);
    msg.setSource(60420U);
    msg.setSourceEntity(104U);
    msg.setDestination(57737U);
    msg.setDestinationEntity(145U);
    msg.value = 0.757922029243;

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
    msg.setTimeStamp(0.164149222969);
    msg.setSource(16393U);
    msg.setSourceEntity(59U);
    msg.setDestination(3852U);
    msg.setDestinationEntity(161U);
    msg.value = 0.683486129364;

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
    msg.setTimeStamp(0.0608697669228);
    msg.setSource(64521U);
    msg.setSourceEntity(93U);
    msg.setDestination(35691U);
    msg.setDestinationEntity(107U);
    msg.value = 0.892191139528;

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
    msg.setTimeStamp(0.79528664797);
    msg.setSource(59943U);
    msg.setSourceEntity(58U);
    msg.setDestination(48493U);
    msg.setDestinationEntity(71U);
    msg.value = 0.406193067668;

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
    msg.setTimeStamp(0.935743869255);
    msg.setSource(44804U);
    msg.setSourceEntity(254U);
    msg.setDestination(13895U);
    msg.setDestinationEntity(60U);
    msg.value = 0.853504392071;

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
    msg.setTimeStamp(0.546912769903);
    msg.setSource(11476U);
    msg.setSourceEntity(232U);
    msg.setDestination(53394U);
    msg.setDestinationEntity(71U);
    msg.value = 0.516715933861;

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
    msg.setTimeStamp(0.665816691987);
    msg.setSource(10353U);
    msg.setSourceEntity(66U);
    msg.setDestination(50982U);
    msg.setDestinationEntity(81U);
    msg.direction = 0.116485116318;
    msg.speed = 0.715404836886;
    msg.turbulence = 0.178606850335;

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
    msg.setTimeStamp(0.0878322350208);
    msg.setSource(58395U);
    msg.setSourceEntity(190U);
    msg.setDestination(44403U);
    msg.setDestinationEntity(24U);
    msg.direction = 0.450317661042;
    msg.speed = 0.751020891382;
    msg.turbulence = 0.118577767401;

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
    msg.setTimeStamp(0.683690033645);
    msg.setSource(27831U);
    msg.setSourceEntity(208U);
    msg.setDestination(40881U);
    msg.setDestinationEntity(67U);
    msg.direction = 0.0662809676761;
    msg.speed = 0.00541191884484;
    msg.turbulence = 0.991331111873;

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
    msg.setTimeStamp(0.250742760475);
    msg.setSource(52197U);
    msg.setSourceEntity(18U);
    msg.setDestination(18378U);
    msg.setDestinationEntity(225U);
    msg.value = 0.030246972251;

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
    msg.setTimeStamp(0.535583921248);
    msg.setSource(56864U);
    msg.setSourceEntity(118U);
    msg.setDestination(19032U);
    msg.setDestinationEntity(34U);
    msg.value = 0.255124904974;

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
    msg.setTimeStamp(0.983041442764);
    msg.setSource(36522U);
    msg.setSourceEntity(105U);
    msg.setDestination(50309U);
    msg.setDestinationEntity(99U);
    msg.value = 0.0106736520299;

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
    msg.setTimeStamp(0.501286720677);
    msg.setSource(62221U);
    msg.setSourceEntity(190U);
    msg.setDestination(36119U);
    msg.setDestinationEntity(134U);
    msg.value.assign("HUMVSEDYWBKINGFHDNVCRRNIDMYGZCTFTGXWFDFHPCOYRTZTENS");

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
    msg.setTimeStamp(0.535721700404);
    msg.setSource(49493U);
    msg.setSourceEntity(115U);
    msg.setDestination(24857U);
    msg.setDestinationEntity(7U);
    msg.value.assign("DYKMULMRTHEPVT");

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
    msg.setTimeStamp(0.828165825052);
    msg.setSource(23838U);
    msg.setSourceEntity(10U);
    msg.setDestination(64870U);
    msg.setDestinationEntity(135U);
    msg.value.assign("GBBTMAOXLNSJRRNHZSXGRAPYSIUBWXQVHKWJMCTBREKZFISVHFBXYKLFAWBOSBUFAFMAFGEWIGIHYYVDVWBTQWHZIXUZMVUEHSZOUOOVILLYUPPDKYQQDJLJUWKRCCSYMOJEOSVZNJCDAITVSPOQCRXRAQDBWELCZFNONUGGVMXVGLZTSUMOECHTPIQIBGRALFENWTGMKZPCRUIXEXELRYNKNPAPJJNDWLDKNQCXQGMAPQJDFTDJFKHH");

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
    msg.setTimeStamp(0.494695040242);
    msg.setSource(5629U);
    msg.setSourceEntity(152U);
    msg.setDestination(30909U);
    msg.setDestinationEntity(97U);
    const char tmp_msg_0[] = {12, 79, 18, -119, -81, -66, -116, 74, -16, -79, 58, -26, 98, 118, -69, -56, -72, -107, -33, 32, 70, -94, 89, 57, -124, 9, -32, -94, -69, -34, -114, -15, -48, -72, 126, -28, -91, -17, 11, -33, -10, 35, -85, 101, -52, -67, 24, -50, 113, 70, -24, -63, -90, -41, -73, -39, -8, 117, 114, -78, -2, -40, -36, 105, 57, 21, 100, 21, 21, -31, 16, -79, 4, -57, -52, -123, -23, 71, 44, 88, -26, 78, -125, 78, -25, -77, 5, 34, -128, 12, -60, -38, -19, -93, -124, 64, 39, -108, 105, -94, -114, -25, -63, 33, 46, 12, -26, 86, 106, 65, 114, -56, -99, -66, 53, -103, -59, 83, -98, 91, -128, -60, 13, -17, 36, 111, 74, -81, -106, 0, -91, -80, 114, -108, 0, 86, -91, 34, 20, 125, -33, 65, 38, 106, 48, 82, 15, -89, -102, 69, 70, -6, 117, 1, 88, 2, -12, -13, 49, 102, 29, 84, -102, 92, -87, -108, -35, 111, 42, 115, -56, 57, 80, 72, -50, 74, -56, 123, -62, -49, -93, -84, -44, -104, -92, 104, 8, 17, -100, -61, -126, -88, -15, 46, -47, 32, 73, -20, -90, 59, -112, -68, 0, 44, 50, -83, 35, -60, -88, 9, 111, 66, -119, -119, -110, 38, 124, 99, 18};
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
    msg.setTimeStamp(0.373170284874);
    msg.setSource(46555U);
    msg.setSourceEntity(63U);
    msg.setDestination(43758U);
    msg.setDestinationEntity(99U);
    const char tmp_msg_0[] = {-65, 107, -47, 48, 4, -66, -125, 23, -40, 19, -56, 62, 13, -79, 28, -69, -19, -62, -102, -102, -5, -83, -36, -30, 118, -12, -56, 77, -89, -125, 111, 81, 68, -75, -45, -98, 54, -65, -20, -66, -72, -57, -7, 45, -102, 61, 85, -49, -110, 57, -80, 75, 124, -119, -37, -90, -96, 9, 73, 88, 126, 76, -11, -41, 110, -22, -6, 98, -38, 47, -26, 118, -63, 48, -18, 19, -41, 92, -49, 110, -30, -43, 117, -101, -76, 10, 68, -9, 119, -128, -65, 60, -68, 12, -90, 53, 90, -122, 55, 43, 122, 27, 29, 62, 43, 94, 119, 56, 44, 3, 63, -84, 36, -80, -81, -15, -52, 12, -97, -1, 28, 22, 40, 28, -54, 125, -111, 59, 113, -56, -40, -1, -86, -4, -38, -42, 96, 88, -26, -115, -98, -7, 4, 64, 45, 44, -35, -48, 39, -44, -33, -79, -86, -126, 62, -107, 47, 25, 46, -126, -85, 72, -128, 104, -68};
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
    msg.setTimeStamp(0.642037260077);
    msg.setSource(9512U);
    msg.setSourceEntity(202U);
    msg.setDestination(28161U);
    msg.setDestinationEntity(252U);
    const char tmp_msg_0[] = {-2, 43, -61, -45, 20, 23, 70, -102, -18, 30, 25, 30, -62, -89, -25, 65, -116, -103, -73, 19, -14, -86, 17, 36, 35, -33, -106, -44, 116, -81, -79, 72, 73, -88, 36, -24, 87, 53, 8, -57, -120, -69, -114, 79, 48, 21, -58, -26, -25, -114, -8};
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
    msg.setTimeStamp(0.655382898341);
    msg.setSource(50715U);
    msg.setSourceEntity(73U);
    msg.setDestination(38427U);
    msg.setDestinationEntity(163U);
    msg.value = 0.16677629247;

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
    msg.setTimeStamp(0.0521935515505);
    msg.setSource(45218U);
    msg.setSourceEntity(6U);
    msg.setDestination(63846U);
    msg.setDestinationEntity(123U);
    msg.value = 0.142581262797;

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
    msg.setTimeStamp(0.283683741382);
    msg.setSource(23816U);
    msg.setSourceEntity(165U);
    msg.setDestination(41191U);
    msg.setDestinationEntity(153U);
    msg.value = 0.831158329915;

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
    msg.setTimeStamp(0.869512600104);
    msg.setSource(11177U);
    msg.setSourceEntity(31U);
    msg.setDestination(20389U);
    msg.setDestinationEntity(43U);
    msg.type = 37U;
    msg.frequency = 2755587638U;
    msg.min_range = 47732U;
    msg.max_range = 12885U;
    msg.bits_per_point = 70U;
    msg.scale_factor = 0.583304689321;
    const char tmp_msg_0[] = {55, -71, 108, 40, -120, 106, -86, 19, 115, 120, -109, -68, 68, -88, 66, -20, 124, 26, 6, -42, 7, 49, -121, -69, 53, 21, -35, 101, -115, -128, 81, -41, 86, -43, 41, 99, 114, 79, -43, 65, 58, -128, 7, -59, -97, -71, -26, -34, -39, -91, -45, -117, -16, 22, -1, -102, 123, -84, 66, 37, -24, 124, 11, 19, -100, -67, -29, -91, -40, -104, -91, 104, -114, -83, 109, 52, 17, 58, 24, -82, -121, 96, 63, 19, 31, 52, -91, 18, -55, 42, -55, -72, -55, -34, -14, -100, 21, 20, -13, 88, -50, 63, -76, 12, -126, 30, 100, -107, -91, 93, 49, 115, -106, -85, -72, -88, -111, 39, -100, 59, -28, -84, 67, -86, 7, -9, 21, -69, 123, 91, 60, 88, -81, 91, -39, -87, -25, -88, 50, -111, -22, 108, 15, 66, 47, -65, -92, -103, 45, -72, 123, 126, 17, 17, 1, -125, -67, 86, -34, -46, -118, 98, 63, 122, -41, -14, -42, -70, -35, -18, 106, 30, 24, 105, -28, 122, -56, 44, 120, 119, 52, -9, -81, -83, 105, -49, -21, 51, 13, -38, -88, 60, -34, 110, 4, -127, 61, -87, -41, -69, 30, -113, 43, -125, -28, 18, -32, -118, -27, -17, 86, 3, 40, 33, -104, 21, -114, -40, 20, -37, -78, -102, -38, -97, -1, 25, -118, 60, -85, 100, -68, 39, 79, -24, -47, 20, 84, 29, -68, -91, 61, -95, -16, -76, 31, -2, -99, 80};
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
    msg.setTimeStamp(0.179755504925);
    msg.setSource(24971U);
    msg.setSourceEntity(15U);
    msg.setDestination(60090U);
    msg.setDestinationEntity(203U);
    msg.type = 19U;
    msg.frequency = 3165785894U;
    msg.min_range = 29937U;
    msg.max_range = 26527U;
    msg.bits_per_point = 11U;
    msg.scale_factor = 0.57980212709;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.645143479718;
    tmp_msg_0.beam_height = 0.97700823276;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {51, 122, 119, -39, -30, 95, 31, -65, 87, -86, 3, 4, -33, 122, 75, 16, -63, -26, 2, 29, -113, 122, -18, 25, 70, 62, -68, -120, -93, 10, -107, 40, -52, -70, -6, -103, -93, -54, 35, 80, 21, 89, 45, 80, -30, 25, -76, 34, -35, 126, -59, -35, 32, 59, 10, -80, 97, 69, 125, 4, -4, 7, -84, -29, -2, 3, 42, 34, -113, 1, 5, 50, -122, 30, -103, -88, 73, 16, 27, -104, 93, 9, -99, -114, -10, 64, 77, -103, 120, -29, -91, -24, 11, -42, -92, 12, 114, -99, 69, -37, -119, 38, -124, -69, -68, 37, 31, 38, 89, 7, -18, 51, 6, 6, 97, 79, 6, -90, -47, 33, -42, -94, 12, -50, -112, 80, 95, 96, 100, 23, 116, 46, -12, -25, -1, -38, 48, -58, 118, 113, -64, 58, 113, 14, -127, 16, -36, 60, -52, -85, 41, 39, 105, -26, 49, -49, 30, -100, -2, -66, -88, -8, 123, 108, 55, -32, -15, 20, 29, -24, -7, -34, 17, 50, 6, 106, 63, -22, 6, 117, -65, 102, -101, -10, 98, 7, 62, 84, -19, 79, -43, 13, 57, 56, 42, -5, -92, -19, -67, 79, -17, -108, -75, -22, -89, 33, -89, -122, -82, 11, 85, -24, -39, -12, 68, 23, -95, 25, -104, 113, 68, -95, 87, -36, 54, -7, 80, -8, -74, 76, -50, -34, 39, 57, 117, -58, 54, -42};
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
    msg.setTimeStamp(0.998835305387);
    msg.setSource(32523U);
    msg.setSourceEntity(84U);
    msg.setDestination(51177U);
    msg.setDestinationEntity(178U);
    msg.type = 29U;
    msg.frequency = 4263016347U;
    msg.min_range = 1029U;
    msg.max_range = 5820U;
    msg.bits_per_point = 94U;
    msg.scale_factor = 0.37405561919;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.225985284368;
    tmp_msg_0.beam_height = 0.686769005227;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {-66, 123, 95, -7, 120, 20, 62, 51, 0, 39, -24, -128, 92, 2, -44, 15, -80, -121, 4, 15, -54, 71, -2, -63, -64, 49, 116, -108, -98, -123, 109, 49, -11, -78, -95, 92, 62, 85, 49, -81, -90, 32, -64, 55, -38, 34, 20, 96, -68, 57, 119, 61, 23, -47, -48, 1, -29, -1, 71, -60, -79, -83, 51, -94, 104, -127, -91, -28, -10, 55, -10, -104, 79, -14, -76, 69, 11, 43, 95, 59, 74, -76, 63, -115, -62, -63, -120, -46, 101, 117, -3, -108, 10, 63, 82, 26, 76, 21, -1, -107, 61, -34, 37, 107, -121, 25, -64, -17, -28, 89, 0, -113, 109, -114, -96, 125, -27, 20, 30, -127, 86, -37, -12, -91, -23, 39, 58, -102, 110, 20, 64, -13, 53, -64, 91, 0, -62, -112, 108, -52, 109, 59, 34, 12, -108, 26, -96, -9, -24, -117, -119, -21, 1, 30, 56, 15, -85, -42, -31, -79, 94, 117, 113, 57, 22, -48, 34, 105, 34, 86, -4, -104, -110, -77, 63, 126, 47, -82, -64, 107, -78, 27, 53, -94, 14, -98, 28, -57, 25, 119, -110, -68, 88, -111, -114, 41, 70, 78, 125, -59, -103, -120, 28, -86, 55, -47, -3, -79, -30, -21, 117, 68, -127, 79, -117, 95, 4, 77, 82, -81, -54, 16, 97, -100, 29, -45, -2, 66, 117, -44, 78, -53, 72};
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
    msg.setTimeStamp(0.963826336979);
    msg.setSource(48142U);
    msg.setSourceEntity(46U);
    msg.setDestination(18215U);
    msg.setDestinationEntity(122U);

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
    msg.setTimeStamp(0.608455061207);
    msg.setSource(25943U);
    msg.setSourceEntity(189U);
    msg.setDestination(65281U);
    msg.setDestinationEntity(42U);

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
    msg.setTimeStamp(0.389137377572);
    msg.setSource(65253U);
    msg.setSourceEntity(194U);
    msg.setDestination(64103U);
    msg.setDestinationEntity(182U);

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
    msg.setTimeStamp(0.131154424714);
    msg.setSource(24113U);
    msg.setSourceEntity(162U);
    msg.setDestination(33424U);
    msg.setDestinationEntity(205U);
    msg.op = 206U;

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
    msg.setTimeStamp(0.564705998194);
    msg.setSource(33269U);
    msg.setSourceEntity(204U);
    msg.setDestination(20300U);
    msg.setDestinationEntity(61U);
    msg.op = 114U;

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
    msg.setTimeStamp(0.454777611204);
    msg.setSource(57374U);
    msg.setSourceEntity(61U);
    msg.setDestination(63219U);
    msg.setDestinationEntity(239U);
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
    msg.setTimeStamp(0.617078858996);
    msg.setSource(7786U);
    msg.setSourceEntity(40U);
    msg.setDestination(30277U);
    msg.setDestinationEntity(156U);
    msg.value = 0.152061800042;
    msg.confidence = 0.993312978473;
    msg.opmodes.assign("HQWLXAKKQEDNCNPXWCJVFHWRXQRULZKMBIDPEUUFGVUMYTQBFQNCECZDSSANYRUQBGWVMODXHCLUREGMJOWWKFZGFJVIFMOSCISMBAZIAUVEIKVXXVPYCLJVYUNODLBHBQRWKLRAXKHEZGADJHPFAWFWGLMBSEZEJTYYNQLVSNHCCSSSBMHRGOPTJESYAGDBYOTHT");

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
    msg.setTimeStamp(0.89483446581);
    msg.setSource(40210U);
    msg.setSourceEntity(26U);
    msg.setDestination(7429U);
    msg.setDestinationEntity(21U);
    msg.value = 0.61931930452;
    msg.confidence = 0.357869835898;
    msg.opmodes.assign("EDPHZKLPFQTOBAQTPVNOGKLHBYSSBBEIJSMHSNSMWGVZWXRLAIRNAWAZZYDKTEJ");

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
    msg.setTimeStamp(0.319809329866);
    msg.setSource(5250U);
    msg.setSourceEntity(167U);
    msg.setDestination(33656U);
    msg.setDestinationEntity(210U);
    msg.value = 0.0736126260994;
    msg.confidence = 0.371316840161;
    msg.opmodes.assign("PVXBWLGODHNECYCJUYPAOJEZHHSJJUCIEORPIAUVGJZXLKWNKTWLUHLZNVODXOTZWSNGJIGOLQCDHMCNBZFABVBNQBXXZPRDFPIKDONMOU");

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
    msg.setTimeStamp(0.954625333066);
    msg.setSource(1151U);
    msg.setSourceEntity(55U);
    msg.setDestination(59446U);
    msg.setDestinationEntity(155U);
    msg.itow = 1282598725U;
    msg.lat = 0.218575365087;
    msg.lon = 0.368198643543;
    msg.height_ell = 0.937001353366;
    msg.height_sea = 0.200581530065;
    msg.hacc = 0.538494340332;
    msg.vacc = 0.621877214064;
    msg.vel_n = 0.940871920803;
    msg.vel_e = 0.169095854328;
    msg.vel_d = 0.114296905622;
    msg.speed = 0.918802794796;
    msg.gspeed = 0.766712136523;
    msg.heading = 0.202554605122;
    msg.sacc = 0.286720323074;
    msg.cacc = 0.224622186988;

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
    msg.setTimeStamp(0.557618158849);
    msg.setSource(3186U);
    msg.setSourceEntity(124U);
    msg.setDestination(64663U);
    msg.setDestinationEntity(152U);
    msg.itow = 1863011058U;
    msg.lat = 0.610810380064;
    msg.lon = 0.568976167755;
    msg.height_ell = 0.896211872934;
    msg.height_sea = 0.0900915351299;
    msg.hacc = 0.201369164286;
    msg.vacc = 0.424053803889;
    msg.vel_n = 0.567230683527;
    msg.vel_e = 0.642248677973;
    msg.vel_d = 0.610810799755;
    msg.speed = 0.341696662203;
    msg.gspeed = 0.777124109686;
    msg.heading = 0.858843880919;
    msg.sacc = 0.981588365642;
    msg.cacc = 0.980998610785;

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
    msg.setTimeStamp(0.728956093748);
    msg.setSource(59127U);
    msg.setSourceEntity(42U);
    msg.setDestination(3355U);
    msg.setDestinationEntity(5U);
    msg.itow = 2874470337U;
    msg.lat = 0.274248734556;
    msg.lon = 0.1551779129;
    msg.height_ell = 0.733032195656;
    msg.height_sea = 0.226365391625;
    msg.hacc = 0.378262654869;
    msg.vacc = 0.487349516185;
    msg.vel_n = 0.929838472788;
    msg.vel_e = 0.402679697911;
    msg.vel_d = 0.185094297932;
    msg.speed = 0.209483434563;
    msg.gspeed = 0.237606792223;
    msg.heading = 0.101740117324;
    msg.sacc = 0.0151720432295;
    msg.cacc = 0.944865519587;

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
    msg.setTimeStamp(0.444462605425);
    msg.setSource(8112U);
    msg.setSourceEntity(36U);
    msg.setDestination(52183U);
    msg.setDestinationEntity(141U);
    msg.id = 139U;
    msg.value = 0.0171204772526;

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
    msg.setTimeStamp(0.128149227915);
    msg.setSource(59118U);
    msg.setSourceEntity(71U);
    msg.setDestination(28321U);
    msg.setDestinationEntity(49U);
    msg.id = 247U;
    msg.value = 0.44679347171;

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
    msg.setTimeStamp(0.591249164441);
    msg.setSource(40684U);
    msg.setSourceEntity(150U);
    msg.setDestination(40276U);
    msg.setDestinationEntity(150U);
    msg.id = 135U;
    msg.value = 0.0364961643133;

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
    msg.setTimeStamp(0.635484309908);
    msg.setSource(27679U);
    msg.setSourceEntity(165U);
    msg.setDestination(34739U);
    msg.setDestinationEntity(238U);
    msg.x = 0.0917425914964;
    msg.y = 0.514711746565;
    msg.z = 0.698516203693;
    msg.phi = 0.895328536065;
    msg.theta = 0.200466321695;
    msg.psi = 0.784308550171;

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
    msg.setTimeStamp(0.751209010542);
    msg.setSource(7516U);
    msg.setSourceEntity(172U);
    msg.setDestination(21776U);
    msg.setDestinationEntity(175U);
    msg.x = 0.854977213864;
    msg.y = 0.46486849512;
    msg.z = 0.123107077056;
    msg.phi = 0.00466448467309;
    msg.theta = 0.400929281864;
    msg.psi = 0.241178496135;

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
    msg.setTimeStamp(0.409188785868);
    msg.setSource(44849U);
    msg.setSourceEntity(60U);
    msg.setDestination(26281U);
    msg.setDestinationEntity(101U);
    msg.x = 0.314560350035;
    msg.y = 0.421786893366;
    msg.z = 0.520546686055;
    msg.phi = 0.993079843777;
    msg.theta = 0.765885699442;
    msg.psi = 0.114551016697;

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
    msg.setTimeStamp(0.953894546046);
    msg.setSource(30228U);
    msg.setSourceEntity(33U);
    msg.setDestination(41846U);
    msg.setDestinationEntity(72U);
    msg.beam_width = 0.567282425322;
    msg.beam_height = 0.909919299473;

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
    msg.setTimeStamp(0.949210639598);
    msg.setSource(28630U);
    msg.setSourceEntity(231U);
    msg.setDestination(35552U);
    msg.setDestinationEntity(108U);
    msg.beam_width = 0.967133812366;
    msg.beam_height = 0.0636023834805;

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
    msg.setTimeStamp(0.783250106825);
    msg.setSource(62557U);
    msg.setSourceEntity(55U);
    msg.setDestination(51734U);
    msg.setDestinationEntity(142U);
    msg.beam_width = 0.345674303289;
    msg.beam_height = 0.772247640585;

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
    msg.setTimeStamp(0.429916831491);
    msg.setSource(61444U);
    msg.setSourceEntity(189U);
    msg.setDestination(31980U);
    msg.setDestinationEntity(142U);
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
    msg.setTimeStamp(0.824634966082);
    msg.setSource(28115U);
    msg.setSourceEntity(194U);
    msg.setDestination(55314U);
    msg.setDestinationEntity(207U);
    msg.sane = 211U;

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
    msg.setTimeStamp(0.344998741152);
    msg.setSource(64105U);
    msg.setSourceEntity(29U);
    msg.setDestination(52196U);
    msg.setDestinationEntity(193U);
    msg.sane = 159U;

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
    msg.setTimeStamp(0.521686442473);
    msg.setSource(10342U);
    msg.setSourceEntity(200U);
    msg.setDestination(48144U);
    msg.setDestinationEntity(149U);
    msg.value = 0.289898411802;

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
    msg.setTimeStamp(0.319594446392);
    msg.setSource(12071U);
    msg.setSourceEntity(152U);
    msg.setDestination(11586U);
    msg.setDestinationEntity(206U);
    msg.value = 0.61098783063;

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
    msg.setTimeStamp(0.486122313579);
    msg.setSource(48895U);
    msg.setSourceEntity(247U);
    msg.setDestination(61840U);
    msg.setDestinationEntity(188U);
    msg.value = 0.679801602915;

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
    msg.setTimeStamp(0.645365238727);
    msg.setSource(52096U);
    msg.setSourceEntity(97U);
    msg.setDestination(44603U);
    msg.setDestinationEntity(131U);
    msg.value = 0.314887277681;

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
    msg.setTimeStamp(0.885326756927);
    msg.setSource(21395U);
    msg.setSourceEntity(220U);
    msg.setDestination(8455U);
    msg.setDestinationEntity(158U);
    msg.value = 0.300191595165;

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
    msg.setTimeStamp(0.971132383792);
    msg.setSource(22059U);
    msg.setSourceEntity(30U);
    msg.setDestination(19035U);
    msg.setDestinationEntity(226U);
    msg.value = 0.924576908684;

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
    msg.setTimeStamp(0.429759810114);
    msg.setSource(41389U);
    msg.setSourceEntity(126U);
    msg.setDestination(62965U);
    msg.setDestinationEntity(3U);
    msg.value = 0.675469514299;

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
    msg.setTimeStamp(0.134753584269);
    msg.setSource(34304U);
    msg.setSourceEntity(190U);
    msg.setDestination(24505U);
    msg.setDestinationEntity(221U);
    msg.value = 0.150790751428;

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
    msg.setTimeStamp(0.717047496759);
    msg.setSource(13076U);
    msg.setSourceEntity(138U);
    msg.setDestination(5592U);
    msg.setDestinationEntity(235U);
    msg.value = 0.762128993201;

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
    msg.setTimeStamp(0.216857031029);
    msg.setSource(44240U);
    msg.setSourceEntity(135U);
    msg.setDestination(63439U);
    msg.setDestinationEntity(109U);
    msg.value = 0.108897260575;

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
    msg.setTimeStamp(0.0840083978252);
    msg.setSource(47753U);
    msg.setSourceEntity(241U);
    msg.setDestination(56808U);
    msg.setDestinationEntity(22U);
    msg.value = 0.03088130853;

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
    msg.setTimeStamp(0.010778129781);
    msg.setSource(42104U);
    msg.setSourceEntity(155U);
    msg.setDestination(63259U);
    msg.setDestinationEntity(44U);
    msg.value = 0.817197370581;

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
    msg.setTimeStamp(0.577779671286);
    msg.setSource(30637U);
    msg.setSourceEntity(170U);
    msg.setDestination(56175U);
    msg.setDestinationEntity(40U);
    msg.value = 0.782416086012;

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
    msg.setTimeStamp(0.54258202175);
    msg.setSource(55708U);
    msg.setSourceEntity(253U);
    msg.setDestination(44547U);
    msg.setDestinationEntity(168U);
    msg.value = 0.795846178856;

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
    msg.setTimeStamp(0.177519560059);
    msg.setSource(8106U);
    msg.setSourceEntity(212U);
    msg.setDestination(5247U);
    msg.setDestinationEntity(21U);
    msg.value = 0.31468646496;

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
    msg.setTimeStamp(0.72809241405);
    msg.setSource(27975U);
    msg.setSourceEntity(184U);
    msg.setDestination(40096U);
    msg.setDestinationEntity(110U);
    msg.value = 0.0858245318143;

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
    msg.setTimeStamp(0.352814058743);
    msg.setSource(28013U);
    msg.setSourceEntity(36U);
    msg.setDestination(64540U);
    msg.setDestinationEntity(153U);
    msg.value = 0.836836398509;

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
    msg.setTimeStamp(0.531784938088);
    msg.setSource(589U);
    msg.setSourceEntity(169U);
    msg.setDestination(30684U);
    msg.setDestinationEntity(63U);
    msg.value = 0.398583695353;

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
    msg.setTimeStamp(0.110723802189);
    msg.setSource(58633U);
    msg.setSourceEntity(201U);
    msg.setDestination(16963U);
    msg.setDestinationEntity(126U);
    msg.value = 0.867741302473;

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
    msg.setTimeStamp(0.960111182016);
    msg.setSource(58919U);
    msg.setSourceEntity(162U);
    msg.setDestination(37096U);
    msg.setDestinationEntity(94U);
    msg.value = 0.80843830996;

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
    msg.setTimeStamp(0.37539743654);
    msg.setSource(28432U);
    msg.setSourceEntity(31U);
    msg.setDestination(15214U);
    msg.setDestinationEntity(89U);
    msg.value = 0.0624486823891;

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
    msg.setTimeStamp(0.859751585493);
    msg.setSource(38505U);
    msg.setSourceEntity(85U);
    msg.setDestination(24130U);
    msg.setDestinationEntity(163U);
    msg.value = 0.0549309873256;

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
    msg.setTimeStamp(0.564694137749);
    msg.setSource(64788U);
    msg.setSourceEntity(69U);
    msg.setDestination(45725U);
    msg.setDestinationEntity(1U);
    msg.value = 0.0752723681272;

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
    msg.setTimeStamp(0.831736500204);
    msg.setSource(46839U);
    msg.setSourceEntity(100U);
    msg.setDestination(62754U);
    msg.setDestinationEntity(240U);
    msg.value = 0.648606967509;

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
    msg.setTimeStamp(0.386836615509);
    msg.setSource(4492U);
    msg.setSourceEntity(131U);
    msg.setDestination(31621U);
    msg.setDestinationEntity(224U);
    msg.validity = 46137U;
    msg.type = 77U;
    msg.tow = 3419268593U;
    msg.base_lat = 0.743534118866;
    msg.base_lon = 0.194280994582;
    msg.base_height = 0.312886162645;
    msg.n = 0.00471816660035;
    msg.e = 0.362811322549;
    msg.d = 0.882582841563;
    msg.v_n = 0.241775480226;
    msg.v_e = 0.854216107373;
    msg.v_d = 0.589449610308;
    msg.satellites = 4U;
    msg.iar_hyp = 4648U;
    msg.iar_ratio = 0.452324430147;

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
    msg.setTimeStamp(0.369599674922);
    msg.setSource(62389U);
    msg.setSourceEntity(205U);
    msg.setDestination(45325U);
    msg.setDestinationEntity(63U);
    msg.validity = 13141U;
    msg.type = 17U;
    msg.tow = 2285467082U;
    msg.base_lat = 0.79112253395;
    msg.base_lon = 0.164706223484;
    msg.base_height = 0.506812584044;
    msg.n = 0.493254483425;
    msg.e = 0.780288552772;
    msg.d = 0.487610642113;
    msg.v_n = 0.804323219584;
    msg.v_e = 0.416527043903;
    msg.v_d = 0.840127694333;
    msg.satellites = 218U;
    msg.iar_hyp = 46165U;
    msg.iar_ratio = 0.526671511357;

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
    msg.setTimeStamp(0.178713018624);
    msg.setSource(43618U);
    msg.setSourceEntity(184U);
    msg.setDestination(36841U);
    msg.setDestinationEntity(46U);
    msg.validity = 61713U;
    msg.type = 90U;
    msg.tow = 3690917315U;
    msg.base_lat = 0.93311849629;
    msg.base_lon = 0.101858906791;
    msg.base_height = 0.620165463325;
    msg.n = 0.268334296674;
    msg.e = 0.355321658206;
    msg.d = 0.0610503906283;
    msg.v_n = 0.25041284069;
    msg.v_e = 0.768979809951;
    msg.v_d = 0.188997842359;
    msg.satellites = 55U;
    msg.iar_hyp = 27614U;
    msg.iar_ratio = 0.82030440839;

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
    msg.setTimeStamp(0.550468988947);
    msg.setSource(7986U);
    msg.setSourceEntity(109U);
    msg.setDestination(15066U);
    msg.setDestinationEntity(7U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.373073327138;
    tmp_msg_0.lon = 0.251573561646;
    tmp_msg_0.height = 0.426935587445;
    tmp_msg_0.x = 0.555639762603;
    tmp_msg_0.y = 0.444020805028;
    tmp_msg_0.z = 0.911251886909;
    tmp_msg_0.phi = 0.827616649133;
    tmp_msg_0.theta = 0.526035268335;
    tmp_msg_0.psi = 0.655535233198;
    tmp_msg_0.u = 0.843721582334;
    tmp_msg_0.v = 0.73672884885;
    tmp_msg_0.w = 0.462868807325;
    tmp_msg_0.vx = 0.801994893975;
    tmp_msg_0.vy = 0.818059432048;
    tmp_msg_0.vz = 0.239332348452;
    tmp_msg_0.p = 0.425914371827;
    tmp_msg_0.q = 0.357582798801;
    tmp_msg_0.r = 0.227035589015;
    tmp_msg_0.depth = 0.0592880406016;
    tmp_msg_0.alt = 0.665939314945;
    msg.state.set(tmp_msg_0);
    msg.type = 192U;

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
    msg.setTimeStamp(0.0485769028386);
    msg.setSource(52743U);
    msg.setSourceEntity(155U);
    msg.setDestination(5112U);
    msg.setDestinationEntity(238U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.972836142848;
    tmp_msg_0.lon = 0.531925348426;
    tmp_msg_0.height = 0.661343212103;
    tmp_msg_0.x = 0.407942357555;
    tmp_msg_0.y = 0.505280503859;
    tmp_msg_0.z = 0.564158508093;
    tmp_msg_0.phi = 0.451593198866;
    tmp_msg_0.theta = 0.865184888959;
    tmp_msg_0.psi = 0.962558929752;
    tmp_msg_0.u = 0.49695504525;
    tmp_msg_0.v = 0.971806239398;
    tmp_msg_0.w = 0.137286099904;
    tmp_msg_0.vx = 0.68774842575;
    tmp_msg_0.vy = 0.0636540696879;
    tmp_msg_0.vz = 0.113391247186;
    tmp_msg_0.p = 0.67976897469;
    tmp_msg_0.q = 0.901956125924;
    tmp_msg_0.r = 0.649716337797;
    tmp_msg_0.depth = 0.0255969043322;
    tmp_msg_0.alt = 0.559216039148;
    msg.state.set(tmp_msg_0);
    msg.type = 237U;

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
    msg.setTimeStamp(0.838917029628);
    msg.setSource(2210U);
    msg.setSourceEntity(16U);
    msg.setDestination(56648U);
    msg.setDestinationEntity(162U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.513125622633;
    tmp_msg_0.lon = 0.913595140602;
    tmp_msg_0.height = 0.443099839819;
    tmp_msg_0.x = 0.821753087343;
    tmp_msg_0.y = 0.842034449553;
    tmp_msg_0.z = 0.642464627636;
    tmp_msg_0.phi = 0.146624623356;
    tmp_msg_0.theta = 0.815202708162;
    tmp_msg_0.psi = 0.0411932789153;
    tmp_msg_0.u = 0.9605480394;
    tmp_msg_0.v = 0.0907519822964;
    tmp_msg_0.w = 0.922608376185;
    tmp_msg_0.vx = 0.629320340766;
    tmp_msg_0.vy = 0.527348777022;
    tmp_msg_0.vz = 0.970044549042;
    tmp_msg_0.p = 0.824152459351;
    tmp_msg_0.q = 0.795501904883;
    tmp_msg_0.r = 0.379117787812;
    tmp_msg_0.depth = 0.219800701517;
    tmp_msg_0.alt = 0.0832031433533;
    msg.state.set(tmp_msg_0);
    msg.type = 159U;

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
    msg.setTimeStamp(0.0277550089307);
    msg.setSource(43181U);
    msg.setSourceEntity(144U);
    msg.setDestination(49361U);
    msg.setDestinationEntity(236U);
    msg.value = 0.118663430225;

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
    msg.setTimeStamp(0.221349322968);
    msg.setSource(1267U);
    msg.setSourceEntity(4U);
    msg.setDestination(29144U);
    msg.setDestinationEntity(192U);
    msg.value = 0.869662342895;

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
    msg.setTimeStamp(0.377399105882);
    msg.setSource(13381U);
    msg.setSourceEntity(13U);
    msg.setDestination(25431U);
    msg.setDestinationEntity(42U);
    msg.value = 0.896075807945;

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
    msg.setTimeStamp(0.44838807754);
    msg.setSource(43476U);
    msg.setSourceEntity(83U);
    msg.setDestination(6758U);
    msg.setDestinationEntity(192U);
    msg.value = 0.441384999373;

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
    msg.setTimeStamp(0.145416851996);
    msg.setSource(36003U);
    msg.setSourceEntity(21U);
    msg.setDestination(46139U);
    msg.setDestinationEntity(138U);
    msg.value = 0.403580350474;

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
    msg.setTimeStamp(0.956397688456);
    msg.setSource(10472U);
    msg.setSourceEntity(10U);
    msg.setDestination(53151U);
    msg.setDestinationEntity(80U);
    msg.value = 0.0358627921081;

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
    msg.setTimeStamp(0.535529384849);
    msg.setSource(18830U);
    msg.setSourceEntity(162U);
    msg.setDestination(32243U);
    msg.setDestinationEntity(144U);
    msg.value = 0.0465083229525;

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
    msg.setTimeStamp(0.171871544427);
    msg.setSource(56979U);
    msg.setSourceEntity(242U);
    msg.setDestination(45160U);
    msg.setDestinationEntity(158U);
    msg.value = 0.832214796888;

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
    msg.setTimeStamp(0.3129500991);
    msg.setSource(22054U);
    msg.setSourceEntity(245U);
    msg.setDestination(32888U);
    msg.setDestinationEntity(38U);
    msg.value = 0.852244475188;

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
    msg.setTimeStamp(0.153848375009);
    msg.setSource(26991U);
    msg.setSourceEntity(95U);
    msg.setDestination(1639U);
    msg.setDestinationEntity(42U);
    msg.value = 0.550259144168;

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
    msg.setTimeStamp(0.738746460238);
    msg.setSource(59592U);
    msg.setSourceEntity(213U);
    msg.setDestination(29588U);
    msg.setDestinationEntity(45U);
    msg.value = 0.426741762737;

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
    msg.setTimeStamp(0.654861921294);
    msg.setSource(41252U);
    msg.setSourceEntity(143U);
    msg.setDestination(57075U);
    msg.setDestinationEntity(47U);
    msg.value = 0.2098446955;

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
    msg.setTimeStamp(0.244533266361);
    msg.setSource(58660U);
    msg.setSourceEntity(19U);
    msg.setDestination(19024U);
    msg.setDestinationEntity(90U);
    msg.value = 0.0046487860169;

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
    msg.setTimeStamp(0.787335656092);
    msg.setSource(19346U);
    msg.setSourceEntity(86U);
    msg.setDestination(17337U);
    msg.setDestinationEntity(42U);
    msg.value = 0.865214043192;

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
    msg.setTimeStamp(0.938061748877);
    msg.setSource(48297U);
    msg.setSourceEntity(36U);
    msg.setDestination(57877U);
    msg.setDestinationEntity(49U);
    msg.value = 0.996597033598;

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
    msg.setTimeStamp(0.439759726401);
    msg.setSource(405U);
    msg.setSourceEntity(36U);
    msg.setDestination(35849U);
    msg.setDestinationEntity(229U);
    msg.id = 209U;
    msg.zoom = 17U;
    msg.action = 69U;

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
    msg.setTimeStamp(0.752099836501);
    msg.setSource(19202U);
    msg.setSourceEntity(27U);
    msg.setDestination(56312U);
    msg.setDestinationEntity(138U);
    msg.id = 24U;
    msg.zoom = 30U;
    msg.action = 139U;

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
    msg.setTimeStamp(0.3523358388);
    msg.setSource(10776U);
    msg.setSourceEntity(181U);
    msg.setDestination(50751U);
    msg.setDestinationEntity(18U);
    msg.id = 34U;
    msg.zoom = 28U;
    msg.action = 186U;

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
    msg.setTimeStamp(0.458397322924);
    msg.setSource(58816U);
    msg.setSourceEntity(107U);
    msg.setDestination(16074U);
    msg.setDestinationEntity(199U);
    msg.id = 34U;
    msg.value = 0.446755284972;

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
    msg.setTimeStamp(0.816111272904);
    msg.setSource(25218U);
    msg.setSourceEntity(28U);
    msg.setDestination(48045U);
    msg.setDestinationEntity(177U);
    msg.id = 130U;
    msg.value = 0.503353579909;

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
    msg.setTimeStamp(0.519833869846);
    msg.setSource(35954U);
    msg.setSourceEntity(27U);
    msg.setDestination(59725U);
    msg.setDestinationEntity(251U);
    msg.id = 101U;
    msg.value = 0.743529750858;

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
    msg.setTimeStamp(0.702231215004);
    msg.setSource(22677U);
    msg.setSourceEntity(101U);
    msg.setDestination(46758U);
    msg.setDestinationEntity(148U);
    msg.id = 101U;
    msg.value = 0.996451720186;

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
    msg.setTimeStamp(0.547629530619);
    msg.setSource(24787U);
    msg.setSourceEntity(233U);
    msg.setDestination(31111U);
    msg.setDestinationEntity(142U);
    msg.id = 109U;
    msg.value = 0.368518093082;

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
    msg.setTimeStamp(0.281783407538);
    msg.setSource(7413U);
    msg.setSourceEntity(88U);
    msg.setDestination(64154U);
    msg.setDestinationEntity(95U);
    msg.id = 171U;
    msg.value = 0.0519574048581;

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
    msg.setTimeStamp(0.484187654211);
    msg.setSource(24691U);
    msg.setSourceEntity(164U);
    msg.setDestination(13397U);
    msg.setDestinationEntity(143U);
    msg.id = 65U;
    msg.angle = 0.198362420423;

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
    msg.setTimeStamp(0.738410204169);
    msg.setSource(13516U);
    msg.setSourceEntity(183U);
    msg.setDestination(48890U);
    msg.setDestinationEntity(133U);
    msg.id = 236U;
    msg.angle = 0.646666665821;

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
    msg.setTimeStamp(0.772174591559);
    msg.setSource(4892U);
    msg.setSourceEntity(193U);
    msg.setDestination(25792U);
    msg.setDestinationEntity(116U);
    msg.id = 88U;
    msg.angle = 0.825026927908;

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
    msg.setTimeStamp(0.752393037627);
    msg.setSource(27999U);
    msg.setSourceEntity(150U);
    msg.setDestination(31038U);
    msg.setDestinationEntity(20U);
    msg.op = 42U;
    msg.actions.assign("OQGYPLUDWKNWPEPQIONAPCANMUZRXNLAOVLBMGGRWLVVOQFYXKYVPDMKWCZHZUVGTXPWKUYOOBGGBDONVZIYSRHYBSCMNIPCXRISWXMKNOSVQJXJVUTQKLRGESTRSYDDGZYEYOXBHIPBMHFITANHFPLFHICMKRFJMZTFKARBWJEAATGRCEZUZSKIXUQ");

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
    msg.setTimeStamp(0.912279851612);
    msg.setSource(43160U);
    msg.setSourceEntity(96U);
    msg.setDestination(53994U);
    msg.setDestinationEntity(16U);
    msg.op = 77U;
    msg.actions.assign("XKSJLYCFHKIZLMZEDCFSKJBRQBMEFAJLMOIDWDKSESGMIBJKTIZFFTTAWBEQISPADHGZMNEKMRWMWUZPHSBRDCUALCYFNAJKVWDCOXTXLLKTYVNAHHYNSY");

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
    msg.setTimeStamp(0.619723444745);
    msg.setSource(50134U);
    msg.setSourceEntity(61U);
    msg.setDestination(39096U);
    msg.setDestinationEntity(238U);
    msg.op = 208U;
    msg.actions.assign("VJGCGBYUNTEJSJFOOHUAUXTAWBFPMOSQCEHJXQJGPDMSWZLCGVGLQYFZCUOVZKVDXUYPGGLAVFODGIXLFNEWEZMPBCSJRRRCBUTSSHRFHPTYAIXOPXQESYKNYDIXDAEKKFWLNYRIQZLTDCWHKPBXGLMSILMHCUAZOIIVLKCHQVQMRPQTUONPBKYOEDDZZW");

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
    msg.setTimeStamp(0.343797847357);
    msg.setSource(56147U);
    msg.setSourceEntity(34U);
    msg.setDestination(38824U);
    msg.setDestinationEntity(14U);
    msg.actions.assign("SMSFHBTKOPBOTTBLKEYECOBNYZKREADOYHQNPMXHBZAHKAMYZIUDODJRCVYLHPZVPGYNZEFUIPMWAUAZIFSTIKXELVRTCUARZWDFYSJPWRDPQBHDKUCQCXXEDBRXONHEQYXVVUKY");

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
    msg.setTimeStamp(0.229153313976);
    msg.setSource(47045U);
    msg.setSourceEntity(129U);
    msg.setDestination(4185U);
    msg.setDestinationEntity(155U);
    msg.actions.assign("JZLTVSRXTRFAZTBMGVLPXMOVWHFGTEIGKRQIOFNENCAZMRXXFHXOWMRYLWEEGRAXTTTPQXYASRNKIUECWCPDFQAILICZSSDHGKXDYBOWSHZODJJKGDXMFQPSNPLWPUYNKALKRICNOJOILDUJJBDS");

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
    msg.setTimeStamp(0.162319292368);
    msg.setSource(64519U);
    msg.setSourceEntity(194U);
    msg.setDestination(18475U);
    msg.setDestinationEntity(87U);
    msg.actions.assign("WJDPUHWSWYEBDXBQDUSUOFKHDPHNZODNTHOTYMGQFWFFZLTNPFMPVEUUTHBSNXGUEVXIFGGXRGXODZLDUDCQYGXAZPSSAFWENIDCOMXGTLFTBRCPRKJCJRGRLJEKYMHKQNWIXIHZOQNQKORYSEJIKMLBMVLZRLQNCHAPNUL");

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
    msg.setTimeStamp(0.354502549694);
    msg.setSource(44533U);
    msg.setSourceEntity(241U);
    msg.setDestination(23344U);
    msg.setDestinationEntity(230U);
    msg.button = 76U;
    msg.value = 169U;

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
    msg.setTimeStamp(0.642320011213);
    msg.setSource(1888U);
    msg.setSourceEntity(153U);
    msg.setDestination(64905U);
    msg.setDestinationEntity(21U);
    msg.button = 146U;
    msg.value = 36U;

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
    msg.setTimeStamp(0.806647034986);
    msg.setSource(43421U);
    msg.setSourceEntity(76U);
    msg.setDestination(54988U);
    msg.setDestinationEntity(77U);
    msg.button = 1U;
    msg.value = 251U;

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
    msg.setTimeStamp(0.521073852308);
    msg.setSource(62249U);
    msg.setSourceEntity(37U);
    msg.setDestination(58806U);
    msg.setDestinationEntity(251U);
    msg.op = 87U;
    msg.text.assign("KFSNBJSMKZCCRKOGKWGKZLSNDWXPTGJLDLHNUSRYIFBDSNXTDEPBQAALAHYUPLMZINVBWKXACIWOTCZHKQXQEZMCBYVTWMDMPCMVUXHKNOLZIHUGXQXWJWGOAIUBTRFLFLRDNQWYMPXRFIUICSRAFFYWMES");

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
    msg.setTimeStamp(0.0363762971243);
    msg.setSource(25665U);
    msg.setSourceEntity(221U);
    msg.setDestination(62901U);
    msg.setDestinationEntity(97U);
    msg.op = 169U;
    msg.text.assign("MOTKZDLBWORJWFXEVTQUYHKTQTWUCJBKHNUYMNFLOSAQMPCVDNGBHAFVDSCAOMXRGPKUAYGLRQEEKNWBDUYTKIPCDOGEIXFEGYVWIIMSJJOGTCTRBLDHSPVFFCJPAUSFTHYDSNFSGOCULZSMHNERPWBPFEGIEWHUXVCYZAUXWIIC");

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
    msg.setTimeStamp(0.998220781564);
    msg.setSource(53606U);
    msg.setSourceEntity(186U);
    msg.setDestination(37248U);
    msg.setDestinationEntity(26U);
    msg.op = 134U;
    msg.text.assign("AAHGMMKTWFKVLGVZTURJTZANPDPHHNZLSTMSMVBOFJCLDXUTHANSIBJTTROQPLEIAIZYNYXEIBCRRKMGBZBKRUENSKCDOTMWYLVJOQVOQIPDHWKLGYFXRBGZUCBAYRMCCKPFBJWNSSQSCPWPWVCRDNPHDMUEXDAEXULYYUXISXZXGAHPLMCGFYFBTQRJNXQTPWZELWSVZDYNIOAJOOQJBRNOVFC");

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
    msg.setTimeStamp(0.0540098052313);
    msg.setSource(57665U);
    msg.setSourceEntity(131U);
    msg.setDestination(34802U);
    msg.setDestinationEntity(145U);
    msg.op = 171U;
    msg.time_remain = 0.56163254716;
    msg.sched_time = 0.811147214709;

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
    msg.setTimeStamp(0.686924781738);
    msg.setSource(8774U);
    msg.setSourceEntity(103U);
    msg.setDestination(28363U);
    msg.setDestinationEntity(221U);
    msg.op = 151U;
    msg.time_remain = 0.742627796639;
    msg.sched_time = 0.694786858228;

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
    msg.setTimeStamp(0.745599609837);
    msg.setSource(40383U);
    msg.setSourceEntity(39U);
    msg.setDestination(59158U);
    msg.setDestinationEntity(56U);
    msg.op = 219U;
    msg.time_remain = 0.88354274805;
    msg.sched_time = 0.264951061311;

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
    msg.setTimeStamp(0.618763715903);
    msg.setSource(15456U);
    msg.setSourceEntity(10U);
    msg.setDestination(57250U);
    msg.setDestinationEntity(168U);
    msg.name.assign("SPFGLJIIOEXTSNRUEJMGTCZJOZZXVCBMYANKBYREUUZBYDFPSMONWSTAKBMGRPASKZOWUFMDNFICTQYVAAGHEVVIPTNUYHEXJVRBFQJJTVOCVRNJEVOYBDZQSLZCTYGXUVXMPXNFEOMUBLSLYDSXCKDAPUKPTXJQHACQZEOWKCFGHAIZKOHLIIWDTCIQQNMDRHHMIBYQDLXIWKXHOBKDCRGUYFHFEQPSHRFUGLRWNDEPWL");
    msg.op = 248U;
    msg.sched_time = 0.441771573394;

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
    msg.setTimeStamp(0.92161621842);
    msg.setSource(35859U);
    msg.setSourceEntity(231U);
    msg.setDestination(49570U);
    msg.setDestinationEntity(231U);
    msg.name.assign("JBIYJWTWWEJFDMUONWSKMIPFRXXZABFJSEOGXVAPUYKWQZUUTQCPVRYGEZMTFANVNRTMCTLDZZCHVDKDRGBVQUZSEAKIGNTDUHGFPWNHRDUYCCRFWIEPSDFIBXJNACZDHGYIOPQFXCRABHIUOECAMTBVDFOQRAOLBMZKSKOWJORBQCNEILXLJMSMLQJQLBRUJPIPUGYXJNEVX");
    msg.op = 218U;
    msg.sched_time = 0.256507356356;

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
    msg.setTimeStamp(0.335586070831);
    msg.setSource(40345U);
    msg.setSourceEntity(26U);
    msg.setDestination(26153U);
    msg.setDestinationEntity(249U);
    msg.name.assign("YSJGVZGGTDAXQFDNTLFZTLQIWVBPRPJITHUATOABIXENVNBXHUJZCHCSMKRGVRMPXNGWANPIGHLUIPJBPURXLXZZMLA");
    msg.op = 40U;
    msg.sched_time = 0.198322972244;

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
    msg.setTimeStamp(0.553576938839);
    msg.setSource(10131U);
    msg.setSourceEntity(134U);
    msg.setDestination(12415U);
    msg.setDestinationEntity(17U);

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
    msg.setTimeStamp(0.781821368096);
    msg.setSource(10889U);
    msg.setSourceEntity(15U);
    msg.setDestination(50889U);
    msg.setDestinationEntity(179U);

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
    msg.setTimeStamp(0.0395026121794);
    msg.setSource(39176U);
    msg.setSourceEntity(147U);
    msg.setDestination(65059U);
    msg.setDestinationEntity(179U);

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
    msg.setTimeStamp(0.822333724919);
    msg.setSource(48264U);
    msg.setSourceEntity(207U);
    msg.setDestination(27271U);
    msg.setDestinationEntity(87U);
    msg.name.assign("MSKBTLMHCTSIMGJUGEGVUTEXILBOWPDCHRDBGUOZSJFNOXIMUIGUTATBKAEMEPYHNRWNVAJZGCPCDSMYYXTSVJQRLYIYYKJDCQEABUNUNFWZ");
    msg.state = 196U;

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
    msg.setTimeStamp(0.802089936894);
    msg.setSource(60257U);
    msg.setSourceEntity(233U);
    msg.setDestination(5956U);
    msg.setDestinationEntity(127U);
    msg.name.assign("QMWPNFTBTEDYNIYYKGRTNLQHYCUIUXROFMBTMHZTUOIGSLKJKPRWZRSMJXZAVNCIIHVLJGEQASPLVVZXBJFWRPAO");
    msg.state = 81U;

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
    msg.setTimeStamp(0.168766790492);
    msg.setSource(57732U);
    msg.setSourceEntity(29U);
    msg.setDestination(47428U);
    msg.setDestinationEntity(96U);
    msg.name.assign("EWPEPLIXDLFDKVBTSHRSUDKJYZCSYWQARKYSIEACRAHUQVQIDTOJDIIGSQHRAFNYHNOGMFPTEFKENSRCLENCVWQTGDUMJBMZIDPIHSLNFCVMMCFYNZXLQQRQXFBGFATHJXIIMZUSVKJLAJTIBYDWERRHYOVUVHUXERBNABPFYSOXLZUW");
    msg.state = 190U;

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
    msg.setTimeStamp(0.684643157694);
    msg.setSource(45349U);
    msg.setSourceEntity(185U);
    msg.setDestination(38155U);
    msg.setDestinationEntity(182U);
    msg.name.assign("SYBJABOJIBFHDWZKNAOUBHELXMVGGPFUJJGCBKLQSPJFXGSRTMYNEEAOINHRADLXVAZEWIUZXDQNNFZYORDPCYTMTKWLYVCMXYBJUEQQWXLNI");
    msg.value = 6U;

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
    msg.setTimeStamp(0.181936450381);
    msg.setSource(39447U);
    msg.setSourceEntity(208U);
    msg.setDestination(7959U);
    msg.setDestinationEntity(53U);
    msg.name.assign("SWUQGQKBPYUCQVWWNTHXUMASWNPNHRIACOSBUQGDDDACIOGKOMCIZADTJPIREPWBZMAFPARBIYUYTQKRLADJLIPCNMXUQAKDGVOQDTQRTERBZRFRFITNXHXJNNJPK");
    msg.value = 33U;

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
    msg.setTimeStamp(0.276099731426);
    msg.setSource(2404U);
    msg.setSourceEntity(74U);
    msg.setDestination(7408U);
    msg.setDestinationEntity(244U);
    msg.name.assign("XCRSDNOJHXRTEPECYOQWZWLKLJLNHZAPGMAYMRFRRUCZNCKJDESJIEDTMYDZKTPWMHBLTAHNBGXSJSUQDJIXHTVJJPQFTFESWMWEGRESYSTNNWHOBKPYKKFFUYGPGFQNOL");
    msg.value = 24U;

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
    msg.setTimeStamp(0.818306887257);
    msg.setSource(55324U);
    msg.setSourceEntity(73U);
    msg.setDestination(26406U);
    msg.setDestinationEntity(57U);
    msg.name.assign("WANUAKVXNNOUGVJVAGPOOPJQZLITDEWVHJVTXBURHQKUQPKSPGRBVCHRYATOSTAFLCZQUBWJZGWPYXFNMBYNXYFEMQFSDUXLFKROVYREILHDJMBGWIDTLICHORZOGRWBCYPZKIOQMSNGJCFSGQFEDSFLJBEUHUOJUJXQDIBKNIMBMATIASAEHCPWDZMCN");

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
    msg.setTimeStamp(0.831827599652);
    msg.setSource(53777U);
    msg.setSourceEntity(34U);
    msg.setDestination(54700U);
    msg.setDestinationEntity(129U);
    msg.name.assign("EKMCXWWIOTQZKZMTPQPDELBYZ");

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
    msg.setTimeStamp(0.940039343401);
    msg.setSource(29390U);
    msg.setSourceEntity(164U);
    msg.setDestination(34334U);
    msg.setDestinationEntity(76U);
    msg.name.assign("EPFULYAIWMAVJWDUUUPUXSRMMYSDNJHCPTBJIOPZHHKIWSIIPSOBJNXDZKUVUCEXTQLIMJQNIFLRMKHCBXLGVWYBHVQNSDNGAAFZOFPYVMRZFWVCRJHQOEKCGENOEYKOTBLKCWWEIDVSOBYGDSGLLUYZPWRNMAACSEEBXVDHFOVQLILCONFAZGZWGQGPU");

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
    msg.setTimeStamp(0.572910532537);
    msg.setSource(57205U);
    msg.setSourceEntity(177U);
    msg.setDestination(36259U);
    msg.setDestinationEntity(189U);
    msg.name.assign("DBCYRZGCPBBWFERNBQJTUGYPIGNWRMIVJSXDLUAHJTKKBDUOTQJFLOSTJNFABZWMVEUWLYSYNROZOPABREUEVJLUZEBVIXCWEXALSQJLEDKJPAVKHHHYXOYOOSHHPDIUFKSNKVEXWIDZENKWQVNMCQFNQHFQVWTBMXUVMZPIPDOAGHMJWHG");
    msg.value = 158U;

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
    msg.setTimeStamp(0.112543166142);
    msg.setSource(6645U);
    msg.setSourceEntity(69U);
    msg.setDestination(32571U);
    msg.setDestinationEntity(205U);
    msg.name.assign("HYYIGJURYBASORCQQCFWPVDSIFXZRKJFJPVOQNSFTGKCOMMIUIQIKEJPQKOPJUSODJHTFQYLBXLGDRVBZCCAWPDBGLMAJSMEWXWYSZSRTLGQNCQEHGAPUWQBKNQBG");
    msg.value = 55U;

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
    msg.setTimeStamp(0.889902888218);
    msg.setSource(16549U);
    msg.setSourceEntity(66U);
    msg.setDestination(10782U);
    msg.setDestinationEntity(202U);
    msg.name.assign("IJATAKQAFLROOJLKNDZKUQHFATRPPBYCMKDXSKLITBMIUNUHLSOZUOZFKGOGUPNWXVZRZEIDDMYMJQP");
    msg.value = 26U;

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
    msg.setTimeStamp(0.134536657091);
    msg.setSource(61360U);
    msg.setSourceEntity(47U);
    msg.setDestination(64317U);
    msg.setDestinationEntity(146U);
    msg.id = 17U;
    msg.period = 1544150641U;
    msg.duty_cycle = 3798892347U;

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
    msg.setTimeStamp(0.928426472402);
    msg.setSource(60827U);
    msg.setSourceEntity(203U);
    msg.setDestination(26003U);
    msg.setDestinationEntity(220U);
    msg.id = 170U;
    msg.period = 3438110313U;
    msg.duty_cycle = 3056017843U;

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
    msg.setTimeStamp(0.902167947092);
    msg.setSource(47953U);
    msg.setSourceEntity(202U);
    msg.setDestination(45534U);
    msg.setDestinationEntity(88U);
    msg.id = 21U;
    msg.period = 3738926522U;
    msg.duty_cycle = 1222031861U;

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
    msg.setTimeStamp(0.949780776448);
    msg.setSource(54775U);
    msg.setSourceEntity(154U);
    msg.setDestination(38854U);
    msg.setDestinationEntity(149U);
    msg.id = 183U;
    msg.period = 3239740884U;
    msg.duty_cycle = 387475312U;

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
    msg.setTimeStamp(0.118974701142);
    msg.setSource(41805U);
    msg.setSourceEntity(3U);
    msg.setDestination(60705U);
    msg.setDestinationEntity(109U);
    msg.id = 185U;
    msg.period = 1599510527U;
    msg.duty_cycle = 3075052496U;

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
    msg.setTimeStamp(0.622886694028);
    msg.setSource(11484U);
    msg.setSourceEntity(159U);
    msg.setDestination(26496U);
    msg.setDestinationEntity(128U);
    msg.id = 97U;
    msg.period = 3691074737U;
    msg.duty_cycle = 2382397068U;

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
    msg.setTimeStamp(0.241882463195);
    msg.setSource(28182U);
    msg.setSourceEntity(253U);
    msg.setDestination(55093U);
    msg.setDestinationEntity(99U);
    msg.lat = 0.129311082984;
    msg.lon = 0.369505023836;
    msg.height = 0.198496650588;
    msg.x = 0.298216188406;
    msg.y = 0.0123226061121;
    msg.z = 0.0120612004977;
    msg.phi = 0.763151679308;
    msg.theta = 0.565099899014;
    msg.psi = 0.374982111926;
    msg.u = 0.18611539135;
    msg.v = 0.616768821909;
    msg.w = 0.855585182407;
    msg.vx = 0.463453353984;
    msg.vy = 0.535162347265;
    msg.vz = 0.149329118217;
    msg.p = 0.368923753694;
    msg.q = 0.445362442975;
    msg.r = 0.214626291139;
    msg.depth = 0.28014022053;
    msg.alt = 0.740168104008;

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
    msg.setTimeStamp(0.506204261583);
    msg.setSource(4966U);
    msg.setSourceEntity(181U);
    msg.setDestination(15383U);
    msg.setDestinationEntity(23U);
    msg.lat = 0.085939850711;
    msg.lon = 0.371525771474;
    msg.height = 0.970795052056;
    msg.x = 0.482179506012;
    msg.y = 0.489685839293;
    msg.z = 0.143105414759;
    msg.phi = 0.948506984173;
    msg.theta = 0.920449056343;
    msg.psi = 0.320451538843;
    msg.u = 0.926659062309;
    msg.v = 0.136497569512;
    msg.w = 0.895143409673;
    msg.vx = 0.613897077302;
    msg.vy = 0.107746436456;
    msg.vz = 0.833781815851;
    msg.p = 0.977617884872;
    msg.q = 0.264477330992;
    msg.r = 0.549900196954;
    msg.depth = 0.213008733268;
    msg.alt = 0.205209232048;

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
    msg.setTimeStamp(0.850950566755);
    msg.setSource(17264U);
    msg.setSourceEntity(85U);
    msg.setDestination(6876U);
    msg.setDestinationEntity(17U);
    msg.lat = 0.251017313099;
    msg.lon = 0.0575885833039;
    msg.height = 0.574296248886;
    msg.x = 0.0368095566691;
    msg.y = 0.414412180004;
    msg.z = 0.90938462206;
    msg.phi = 0.588262484108;
    msg.theta = 0.540939103795;
    msg.psi = 0.605025511085;
    msg.u = 0.828840870794;
    msg.v = 0.031916132835;
    msg.w = 0.777743524885;
    msg.vx = 0.677621243643;
    msg.vy = 0.949921152501;
    msg.vz = 0.342289736877;
    msg.p = 0.854071654902;
    msg.q = 0.187326430389;
    msg.r = 0.683422606661;
    msg.depth = 0.725137924627;
    msg.alt = 0.843878640734;

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
    msg.setTimeStamp(0.284345786227);
    msg.setSource(54025U);
    msg.setSourceEntity(92U);
    msg.setDestination(2878U);
    msg.setDestinationEntity(66U);
    msg.x = 0.91283243255;
    msg.y = 0.400599216755;
    msg.z = 0.787725880049;

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
    msg.setTimeStamp(0.649312441774);
    msg.setSource(54857U);
    msg.setSourceEntity(215U);
    msg.setDestination(9607U);
    msg.setDestinationEntity(7U);
    msg.x = 0.501330935109;
    msg.y = 0.173646252886;
    msg.z = 0.308714487204;

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
    msg.setTimeStamp(0.756799033198);
    msg.setSource(45534U);
    msg.setSourceEntity(193U);
    msg.setDestination(8954U);
    msg.setDestinationEntity(104U);
    msg.x = 0.974389895313;
    msg.y = 0.246092100007;
    msg.z = 0.329607714579;

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
    msg.setTimeStamp(0.869979137743);
    msg.setSource(45703U);
    msg.setSourceEntity(29U);
    msg.setDestination(56142U);
    msg.setDestinationEntity(121U);
    msg.value = 0.894629963437;

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
    msg.setTimeStamp(0.319685619607);
    msg.setSource(55280U);
    msg.setSourceEntity(23U);
    msg.setDestination(33917U);
    msg.setDestinationEntity(140U);
    msg.value = 0.324731523732;

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
    msg.setTimeStamp(0.530663623633);
    msg.setSource(48788U);
    msg.setSourceEntity(242U);
    msg.setDestination(20211U);
    msg.setDestinationEntity(169U);
    msg.value = 0.0825450247056;

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
    msg.setTimeStamp(0.572162778214);
    msg.setSource(64827U);
    msg.setSourceEntity(191U);
    msg.setDestination(44706U);
    msg.setDestinationEntity(4U);
    msg.value = 0.207332374141;

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
    msg.setTimeStamp(0.890094867256);
    msg.setSource(30789U);
    msg.setSourceEntity(173U);
    msg.setDestination(60681U);
    msg.setDestinationEntity(37U);
    msg.value = 0.407521342466;

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
    msg.setTimeStamp(0.205012623212);
    msg.setSource(49729U);
    msg.setSourceEntity(80U);
    msg.setDestination(50086U);
    msg.setDestinationEntity(108U);
    msg.value = 0.239577475067;

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
    msg.setTimeStamp(0.0134954102208);
    msg.setSource(61133U);
    msg.setSourceEntity(16U);
    msg.setDestination(28326U);
    msg.setDestinationEntity(203U);
    msg.x = 0.120069407124;
    msg.y = 0.311364199026;
    msg.z = 0.558864301084;
    msg.phi = 0.827532842719;
    msg.theta = 0.472497574974;
    msg.psi = 0.589120920024;
    msg.p = 0.789571747625;
    msg.q = 0.279882132569;
    msg.r = 0.544790916637;
    msg.u = 0.489577361073;
    msg.v = 0.574282093149;
    msg.w = 0.0210773523427;
    msg.bias_psi = 0.595300962944;
    msg.bias_r = 0.61021870257;

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
    msg.setTimeStamp(0.416817171155);
    msg.setSource(16611U);
    msg.setSourceEntity(86U);
    msg.setDestination(7224U);
    msg.setDestinationEntity(38U);
    msg.x = 0.054760242875;
    msg.y = 0.660543613916;
    msg.z = 0.862457699425;
    msg.phi = 0.631212415675;
    msg.theta = 0.117591315394;
    msg.psi = 0.728914537419;
    msg.p = 0.544611180157;
    msg.q = 0.665881107044;
    msg.r = 0.699566296278;
    msg.u = 0.56472179535;
    msg.v = 0.903906426288;
    msg.w = 0.0591393853904;
    msg.bias_psi = 0.176268244231;
    msg.bias_r = 0.0389012643051;

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
    msg.setTimeStamp(0.322032252039);
    msg.setSource(26213U);
    msg.setSourceEntity(49U);
    msg.setDestination(61881U);
    msg.setDestinationEntity(4U);
    msg.x = 0.417079449128;
    msg.y = 0.446268429554;
    msg.z = 0.97737078934;
    msg.phi = 0.556101310229;
    msg.theta = 0.218412407787;
    msg.psi = 0.0241486808758;
    msg.p = 0.297850225662;
    msg.q = 0.335676765566;
    msg.r = 0.0274413334348;
    msg.u = 0.707894069899;
    msg.v = 0.934406088579;
    msg.w = 0.87799978162;
    msg.bias_psi = 0.556788014452;
    msg.bias_r = 0.0377142702166;

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
    msg.setTimeStamp(0.202845263062);
    msg.setSource(32289U);
    msg.setSourceEntity(208U);
    msg.setDestination(14138U);
    msg.setDestinationEntity(125U);
    msg.bias_psi = 0.55134557201;
    msg.bias_r = 0.342811646014;
    msg.cog = 0.866727091652;
    msg.cyaw = 0.652438305954;
    msg.gps_rej_level = 0.00684458024334;
    msg.lbl_rej_level = 0.000742332697924;
    msg.custom_x = 0.860675600546;
    msg.custom_y = 0.358851895953;
    msg.custom_z = 0.168808843977;

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
    msg.setTimeStamp(0.0514159726548);
    msg.setSource(10793U);
    msg.setSourceEntity(23U);
    msg.setDestination(3163U);
    msg.setDestinationEntity(212U);
    msg.bias_psi = 0.693461758793;
    msg.bias_r = 0.590987243043;
    msg.cog = 0.527938173846;
    msg.cyaw = 0.886271702636;
    msg.gps_rej_level = 0.00214845129435;
    msg.lbl_rej_level = 0.964756205091;
    msg.custom_x = 0.264994646117;
    msg.custom_y = 0.0340372000704;
    msg.custom_z = 0.976247755662;

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
    msg.setTimeStamp(0.0114635110033);
    msg.setSource(59199U);
    msg.setSourceEntity(93U);
    msg.setDestination(57914U);
    msg.setDestinationEntity(208U);
    msg.bias_psi = 0.346128383591;
    msg.bias_r = 0.56066363687;
    msg.cog = 0.836858709532;
    msg.cyaw = 0.514690678592;
    msg.gps_rej_level = 0.912161141782;
    msg.lbl_rej_level = 0.41371733054;
    msg.custom_x = 0.614221768758;
    msg.custom_y = 0.647026083937;
    msg.custom_z = 0.382179076116;

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
    msg.setTimeStamp(0.676764704622);
    msg.setSource(43306U);
    msg.setSourceEntity(87U);
    msg.setDestination(34352U);
    msg.setDestinationEntity(166U);
    msg.utc_time = 0.665625000978;
    msg.reason = 126U;

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
    msg.setTimeStamp(0.45270488396);
    msg.setSource(26073U);
    msg.setSourceEntity(127U);
    msg.setDestination(6686U);
    msg.setDestinationEntity(27U);
    msg.utc_time = 0.568521059262;
    msg.reason = 218U;

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
    msg.setTimeStamp(0.548031370616);
    msg.setSource(19621U);
    msg.setSourceEntity(116U);
    msg.setDestination(52753U);
    msg.setDestinationEntity(99U);
    msg.utc_time = 0.270218201003;
    msg.reason = 14U;

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
    msg.setTimeStamp(0.166289215323);
    msg.setSource(15163U);
    msg.setSourceEntity(130U);
    msg.setDestination(30493U);
    msg.setDestinationEntity(202U);
    msg.id = 97U;
    msg.range = 0.648128110167;
    msg.acceptance = 211U;

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
    msg.setTimeStamp(0.502220595644);
    msg.setSource(48399U);
    msg.setSourceEntity(194U);
    msg.setDestination(37585U);
    msg.setDestinationEntity(85U);
    msg.id = 57U;
    msg.range = 0.328502287928;
    msg.acceptance = 140U;

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
    msg.setTimeStamp(0.656666828587);
    msg.setSource(35752U);
    msg.setSourceEntity(183U);
    msg.setDestination(52857U);
    msg.setDestinationEntity(1U);
    msg.id = 242U;
    msg.range = 0.67902751311;
    msg.acceptance = 23U;

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
    msg.setTimeStamp(0.798350818347);
    msg.setSource(36676U);
    msg.setSourceEntity(70U);
    msg.setDestination(38636U);
    msg.setDestinationEntity(108U);
    msg.type = 234U;
    msg.reason = 203U;
    msg.value = 0.95092452082;
    msg.timestep = 0.239026875962;

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
    msg.setTimeStamp(0.051815347783);
    msg.setSource(45033U);
    msg.setSourceEntity(229U);
    msg.setDestination(14716U);
    msg.setDestinationEntity(165U);
    msg.type = 230U;
    msg.reason = 178U;
    msg.value = 0.495460299031;
    msg.timestep = 0.570828322769;

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
    msg.setTimeStamp(0.869371394465);
    msg.setSource(31876U);
    msg.setSourceEntity(37U);
    msg.setDestination(20832U);
    msg.setDestinationEntity(140U);
    msg.type = 189U;
    msg.reason = 166U;
    msg.value = 0.310383767201;
    msg.timestep = 0.240272571631;

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
    msg.setTimeStamp(0.952451134973);
    msg.setSource(43245U);
    msg.setSourceEntity(98U);
    msg.setDestination(44090U);
    msg.setDestinationEntity(201U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("KAUUPTWBDUTRKZRDISQDPTCPMELNLNEFBKXYNXHMSHFKNUOMUCSJAGQNEEO");
    tmp_msg_0.lat = 0.751666680349;
    tmp_msg_0.lon = 0.58195830465;
    tmp_msg_0.depth = 0.167357610269;
    tmp_msg_0.query_channel = 7U;
    tmp_msg_0.reply_channel = 250U;
    tmp_msg_0.transponder_delay = 105U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.625338573827;
    msg.y = 0.477870057917;
    msg.var_x = 0.571055563508;
    msg.var_y = 0.797368500281;
    msg.distance = 0.620685604644;

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
    msg.setTimeStamp(0.979701676963);
    msg.setSource(58038U);
    msg.setSourceEntity(115U);
    msg.setDestination(19926U);
    msg.setDestinationEntity(53U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("UMYYGYBCTYIYETWBSUHXLFSJLSIE");
    tmp_msg_0.lat = 0.984908157281;
    tmp_msg_0.lon = 0.252694820472;
    tmp_msg_0.depth = 0.477253495993;
    tmp_msg_0.query_channel = 117U;
    tmp_msg_0.reply_channel = 164U;
    tmp_msg_0.transponder_delay = 44U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.649725056981;
    msg.y = 0.668404656397;
    msg.var_x = 0.915667166054;
    msg.var_y = 0.0461548574755;
    msg.distance = 0.563528294396;

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
    msg.setTimeStamp(0.774964602159);
    msg.setSource(6430U);
    msg.setSourceEntity(152U);
    msg.setDestination(61178U);
    msg.setDestinationEntity(238U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("QWMYGRKMNGFWQVLZCAYLEUJIMVRXGPBQJAVTHULUCXNHXOPLVUSBDWVEAQVFHRQOUSIPFDWEEYDGZXBTIQSQNKPKGEOJZLBMAUQNAIBDJDFXKLBGMHTAHNTMXWNWBPZHFKKPAJPTYHCMFUEOGAKJGIVNICZLEFQRNKRFPCSSORDPTDMGIZAEACMOTOWLYXKOJSSVBUVRT");
    tmp_msg_0.lat = 0.694645630813;
    tmp_msg_0.lon = 0.379153564501;
    tmp_msg_0.depth = 0.071052248556;
    tmp_msg_0.query_channel = 210U;
    tmp_msg_0.reply_channel = 126U;
    tmp_msg_0.transponder_delay = 181U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.674812832044;
    msg.y = 0.344828826755;
    msg.var_x = 0.000204910876964;
    msg.var_y = 0.786216315342;
    msg.distance = 0.393686304691;

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
    msg.setTimeStamp(0.960864219409);
    msg.setSource(40925U);
    msg.setSourceEntity(143U);
    msg.setDestination(36348U);
    msg.setDestinationEntity(40U);
    msg.state = 55U;

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
    msg.setTimeStamp(0.861232667479);
    msg.setSource(8575U);
    msg.setSourceEntity(3U);
    msg.setDestination(51652U);
    msg.setDestinationEntity(196U);
    msg.state = 8U;

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
    msg.setTimeStamp(0.189741565273);
    msg.setSource(18945U);
    msg.setSourceEntity(221U);
    msg.setDestination(9129U);
    msg.setDestinationEntity(88U);
    msg.state = 148U;

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
    msg.setTimeStamp(0.241160207713);
    msg.setSource(21010U);
    msg.setSourceEntity(31U);
    msg.setDestination(7538U);
    msg.setDestinationEntity(116U);
    msg.x = 0.0655184068204;
    msg.y = 0.0551495007939;
    msg.z = 0.0330053537286;

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
    msg.setTimeStamp(0.9616661084);
    msg.setSource(25669U);
    msg.setSourceEntity(132U);
    msg.setDestination(44403U);
    msg.setDestinationEntity(71U);
    msg.x = 0.68716229578;
    msg.y = 0.48407745929;
    msg.z = 0.127343346696;

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
    msg.setTimeStamp(0.31633418752);
    msg.setSource(36680U);
    msg.setSourceEntity(64U);
    msg.setDestination(34021U);
    msg.setDestinationEntity(170U);
    msg.x = 0.849463959033;
    msg.y = 0.564155597125;
    msg.z = 0.546096661212;

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
    msg.setTimeStamp(0.0834772536345);
    msg.setSource(35427U);
    msg.setSourceEntity(30U);
    msg.setDestination(63700U);
    msg.setDestinationEntity(212U);
    msg.va = 0.337101597567;
    msg.aoa = 0.159391921583;
    msg.ssa = 0.345579980052;

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
    msg.setTimeStamp(0.776870788769);
    msg.setSource(51253U);
    msg.setSourceEntity(71U);
    msg.setDestination(36011U);
    msg.setDestinationEntity(27U);
    msg.va = 0.491771946719;
    msg.aoa = 0.348356938562;
    msg.ssa = 0.266755060521;

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
    msg.setTimeStamp(0.344190068056);
    msg.setSource(14363U);
    msg.setSourceEntity(216U);
    msg.setDestination(19054U);
    msg.setDestinationEntity(11U);
    msg.va = 0.763126021095;
    msg.aoa = 0.406546363498;
    msg.ssa = 0.808605213026;

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
    msg.setTimeStamp(0.517425335171);
    msg.setSource(49696U);
    msg.setSourceEntity(194U);
    msg.setDestination(49612U);
    msg.setDestinationEntity(177U);
    msg.mmsi = 1709982874U;
    msg.lon = 0.89410127808;
    msg.lat = 0.85778460613;
    msg.x = 0.619489030487;
    msg.y = 0.703767329202;
    msg.psi = 0.141555091;
    msg.u = 0.985547157207;
    msg.v = 0.0679238151248;
    msg.a = 0.998284615927;
    msg.b = 0.340238112909;
    msg.c = 0.0867902879372;
    msg.d = 0.741378575413;

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
    msg.setTimeStamp(0.799204738312);
    msg.setSource(39458U);
    msg.setSourceEntity(114U);
    msg.setDestination(11903U);
    msg.setDestinationEntity(239U);
    msg.mmsi = 1968966661U;
    msg.lon = 0.119975869645;
    msg.lat = 0.93585921516;
    msg.x = 0.538505627957;
    msg.y = 0.479103889028;
    msg.psi = 0.858773608736;
    msg.u = 0.438227771391;
    msg.v = 0.372830992343;
    msg.a = 0.9077319065;
    msg.b = 0.183921155296;
    msg.c = 0.520495075759;
    msg.d = 0.793602361967;

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
    msg.setTimeStamp(0.441799744206);
    msg.setSource(16977U);
    msg.setSourceEntity(129U);
    msg.setDestination(39370U);
    msg.setDestinationEntity(8U);
    msg.mmsi = 3712894837U;
    msg.lon = 0.353167286279;
    msg.lat = 0.708649304341;
    msg.x = 0.0574147584439;
    msg.y = 0.109611037501;
    msg.psi = 0.806158826557;
    msg.u = 0.491098269511;
    msg.v = 0.9150908206;
    msg.a = 0.396926598475;
    msg.b = 0.4956996381;
    msg.c = 0.64617504672;
    msg.d = 0.0276975856869;

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
    msg.setTimeStamp(0.73573654213);
    msg.setSource(7408U);
    msg.setSourceEntity(214U);
    msg.setDestination(27023U);
    msg.setDestinationEntity(81U);
    msg.value = 0.0724400698038;

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
    msg.setTimeStamp(0.542429744713);
    msg.setSource(3641U);
    msg.setSourceEntity(18U);
    msg.setDestination(18023U);
    msg.setDestinationEntity(214U);
    msg.value = 0.0873307293434;

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
    msg.setTimeStamp(0.505670239741);
    msg.setSource(26377U);
    msg.setSourceEntity(129U);
    msg.setDestination(54842U);
    msg.setDestinationEntity(83U);
    msg.value = 0.283674197204;

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
    msg.setTimeStamp(0.313438125197);
    msg.setSource(31873U);
    msg.setSourceEntity(70U);
    msg.setDestination(38089U);
    msg.setDestinationEntity(125U);
    msg.value = 0.859813167222;
    msg.z_units = 63U;

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
    msg.setTimeStamp(0.182551770431);
    msg.setSource(31379U);
    msg.setSourceEntity(109U);
    msg.setDestination(22142U);
    msg.setDestinationEntity(184U);
    msg.value = 0.225819003251;
    msg.z_units = 191U;

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
    msg.setTimeStamp(0.038223826948);
    msg.setSource(37727U);
    msg.setSourceEntity(203U);
    msg.setDestination(4288U);
    msg.setDestinationEntity(220U);
    msg.value = 0.180913605335;
    msg.z_units = 103U;

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
    msg.setTimeStamp(0.230678983756);
    msg.setSource(53270U);
    msg.setSourceEntity(159U);
    msg.setDestination(24202U);
    msg.setDestinationEntity(212U);
    msg.value = 0.995015899718;
    msg.speed_units = 238U;

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
    msg.setTimeStamp(0.865545302358);
    msg.setSource(22850U);
    msg.setSourceEntity(53U);
    msg.setDestination(50410U);
    msg.setDestinationEntity(80U);
    msg.value = 0.753682301053;
    msg.speed_units = 202U;

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
    msg.setTimeStamp(0.00957390826609);
    msg.setSource(7575U);
    msg.setSourceEntity(131U);
    msg.setDestination(9076U);
    msg.setDestinationEntity(85U);
    msg.value = 0.913064685736;
    msg.speed_units = 198U;

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
    msg.setTimeStamp(0.724457999766);
    msg.setSource(15813U);
    msg.setSourceEntity(45U);
    msg.setDestination(63980U);
    msg.setDestinationEntity(89U);
    msg.value = 0.288086255462;

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
    msg.setTimeStamp(0.751698525369);
    msg.setSource(62328U);
    msg.setSourceEntity(33U);
    msg.setDestination(52407U);
    msg.setDestinationEntity(15U);
    msg.value = 0.0615433330458;

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
    msg.setTimeStamp(0.822250207277);
    msg.setSource(25901U);
    msg.setSourceEntity(236U);
    msg.setDestination(60538U);
    msg.setDestinationEntity(144U);
    msg.value = 0.901338002882;

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
    msg.setTimeStamp(0.735431422978);
    msg.setSource(36589U);
    msg.setSourceEntity(238U);
    msg.setDestination(18175U);
    msg.setDestinationEntity(53U);
    msg.value = 0.845396593438;

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
    msg.setTimeStamp(0.187160029395);
    msg.setSource(40576U);
    msg.setSourceEntity(134U);
    msg.setDestination(2637U);
    msg.setDestinationEntity(39U);
    msg.value = 0.735261142808;

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
    msg.setTimeStamp(0.598232455908);
    msg.setSource(19080U);
    msg.setSourceEntity(133U);
    msg.setDestination(19895U);
    msg.setDestinationEntity(148U);
    msg.value = 0.0508029746639;

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
    msg.setTimeStamp(0.0144573511738);
    msg.setSource(17511U);
    msg.setSourceEntity(144U);
    msg.setDestination(17798U);
    msg.setDestinationEntity(232U);
    msg.value = 0.413334256548;

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
    msg.setTimeStamp(0.667573753074);
    msg.setSource(11293U);
    msg.setSourceEntity(191U);
    msg.setDestination(32888U);
    msg.setDestinationEntity(31U);
    msg.value = 0.696502535316;

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
    msg.setTimeStamp(0.192073540611);
    msg.setSource(45280U);
    msg.setSourceEntity(134U);
    msg.setDestination(52854U);
    msg.setDestinationEntity(53U);
    msg.value = 0.659386675643;

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
    msg.setTimeStamp(0.792167548245);
    msg.setSource(16918U);
    msg.setSourceEntity(57U);
    msg.setDestination(20427U);
    msg.setDestinationEntity(87U);
    msg.path_ref = 202884019U;
    msg.start_lat = 0.615614357488;
    msg.start_lon = 0.231192967722;
    msg.start_z = 0.272673389329;
    msg.start_z_units = 98U;
    msg.end_lat = 0.491671430377;
    msg.end_lon = 0.680005073235;
    msg.end_z = 0.95414233274;
    msg.end_z_units = 190U;
    msg.speed = 0.74148358801;
    msg.speed_units = 11U;
    msg.lradius = 0.350168954897;
    msg.flags = 26U;

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
    msg.setTimeStamp(0.947039300818);
    msg.setSource(14483U);
    msg.setSourceEntity(129U);
    msg.setDestination(51682U);
    msg.setDestinationEntity(242U);
    msg.path_ref = 4214479461U;
    msg.start_lat = 0.950016708407;
    msg.start_lon = 0.423122312039;
    msg.start_z = 0.746664308588;
    msg.start_z_units = 202U;
    msg.end_lat = 0.403501822898;
    msg.end_lon = 0.024242589236;
    msg.end_z = 0.513340008571;
    msg.end_z_units = 131U;
    msg.speed = 0.604557376533;
    msg.speed_units = 112U;
    msg.lradius = 0.0650245848071;
    msg.flags = 198U;

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
    msg.setTimeStamp(0.770922966913);
    msg.setSource(46303U);
    msg.setSourceEntity(14U);
    msg.setDestination(63468U);
    msg.setDestinationEntity(252U);
    msg.path_ref = 2782983730U;
    msg.start_lat = 0.0520029201355;
    msg.start_lon = 0.315283291864;
    msg.start_z = 0.615809626068;
    msg.start_z_units = 174U;
    msg.end_lat = 0.909255551154;
    msg.end_lon = 0.381135681995;
    msg.end_z = 0.618381956168;
    msg.end_z_units = 27U;
    msg.speed = 0.744460672329;
    msg.speed_units = 39U;
    msg.lradius = 0.976467735108;
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
    msg.setTimeStamp(0.509961557692);
    msg.setSource(37346U);
    msg.setSourceEntity(161U);
    msg.setDestination(37761U);
    msg.setDestinationEntity(2U);
    msg.x = 0.244109993879;
    msg.y = 0.122199820447;
    msg.z = 0.958958504743;
    msg.k = 0.587068938647;
    msg.m = 0.225689509851;
    msg.n = 0.410146141194;
    msg.flags = 120U;

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
    msg.setTimeStamp(0.0561688998626);
    msg.setSource(49940U);
    msg.setSourceEntity(65U);
    msg.setDestination(1758U);
    msg.setDestinationEntity(166U);
    msg.x = 0.307164658222;
    msg.y = 0.386980323284;
    msg.z = 0.245920882505;
    msg.k = 0.955980709494;
    msg.m = 0.248941333289;
    msg.n = 0.940519890706;
    msg.flags = 150U;

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
    msg.setTimeStamp(0.455196164599);
    msg.setSource(55484U);
    msg.setSourceEntity(41U);
    msg.setDestination(22184U);
    msg.setDestinationEntity(87U);
    msg.x = 0.205171814689;
    msg.y = 0.415039672113;
    msg.z = 0.331428085342;
    msg.k = 0.884570990858;
    msg.m = 0.309336673337;
    msg.n = 0.0761148988448;
    msg.flags = 228U;

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
    msg.setTimeStamp(0.568798669134);
    msg.setSource(61638U);
    msg.setSourceEntity(156U);
    msg.setDestination(58911U);
    msg.setDestinationEntity(45U);
    msg.value = 0.0877490966964;

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
    msg.setTimeStamp(0.0142724387449);
    msg.setSource(45617U);
    msg.setSourceEntity(104U);
    msg.setDestination(39668U);
    msg.setDestinationEntity(180U);
    msg.value = 0.502010620376;

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
    msg.setTimeStamp(0.451036013056);
    msg.setSource(58693U);
    msg.setSourceEntity(171U);
    msg.setDestination(53432U);
    msg.setDestinationEntity(8U);
    msg.value = 0.276381550103;

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
    msg.setTimeStamp(0.0235959024088);
    msg.setSource(25333U);
    msg.setSourceEntity(219U);
    msg.setDestination(44914U);
    msg.setDestinationEntity(184U);
    msg.u = 0.654472602366;
    msg.v = 0.21109029121;
    msg.w = 0.593549070031;
    msg.p = 0.544700577832;
    msg.q = 0.771931551434;
    msg.r = 0.173897414662;
    msg.flags = 33U;

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
    msg.setTimeStamp(0.191872908825);
    msg.setSource(41617U);
    msg.setSourceEntity(77U);
    msg.setDestination(35758U);
    msg.setDestinationEntity(164U);
    msg.u = 0.519292351175;
    msg.v = 0.14749593329;
    msg.w = 0.454089819913;
    msg.p = 0.29712465055;
    msg.q = 0.146599268332;
    msg.r = 0.735306732591;
    msg.flags = 88U;

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
    msg.setTimeStamp(0.0238248615867);
    msg.setSource(9098U);
    msg.setSourceEntity(54U);
    msg.setDestination(36453U);
    msg.setDestinationEntity(191U);
    msg.u = 0.876718759845;
    msg.v = 0.254693606552;
    msg.w = 0.668391445926;
    msg.p = 0.88226303455;
    msg.q = 0.789151023309;
    msg.r = 0.498977438971;
    msg.flags = 72U;

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
    msg.setTimeStamp(0.606314451088);
    msg.setSource(11033U);
    msg.setSourceEntity(130U);
    msg.setDestination(43478U);
    msg.setDestinationEntity(232U);
    msg.path_ref = 3701161812U;
    msg.start_lat = 0.188668559998;
    msg.start_lon = 0.929984278925;
    msg.start_z = 0.378486729231;
    msg.start_z_units = 240U;
    msg.end_lat = 0.848728551171;
    msg.end_lon = 0.638902765066;
    msg.end_z = 0.321019991876;
    msg.end_z_units = 171U;
    msg.lradius = 0.289933375721;
    msg.flags = 62U;
    msg.x = 0.584578038458;
    msg.y = 0.460532228725;
    msg.z = 0.798892606777;
    msg.vx = 0.379011136052;
    msg.vy = 0.479308189753;
    msg.vz = 0.340233429449;
    msg.course_error = 0.477792156352;
    msg.eta = 2537U;

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
    msg.setTimeStamp(0.505710005284);
    msg.setSource(16937U);
    msg.setSourceEntity(236U);
    msg.setDestination(29506U);
    msg.setDestinationEntity(51U);
    msg.path_ref = 2396111999U;
    msg.start_lat = 0.803774419959;
    msg.start_lon = 0.15879165383;
    msg.start_z = 0.633018097939;
    msg.start_z_units = 45U;
    msg.end_lat = 0.0261040713103;
    msg.end_lon = 0.260261720148;
    msg.end_z = 0.235574616717;
    msg.end_z_units = 96U;
    msg.lradius = 0.0515998263945;
    msg.flags = 167U;
    msg.x = 0.974984904684;
    msg.y = 0.950432943026;
    msg.z = 0.846815417346;
    msg.vx = 0.317832820629;
    msg.vy = 0.673824887638;
    msg.vz = 0.000521490415975;
    msg.course_error = 0.824396575939;
    msg.eta = 56130U;

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
    msg.setTimeStamp(0.654285718218);
    msg.setSource(27235U);
    msg.setSourceEntity(187U);
    msg.setDestination(2078U);
    msg.setDestinationEntity(228U);
    msg.path_ref = 587481155U;
    msg.start_lat = 0.242598544681;
    msg.start_lon = 0.651332097395;
    msg.start_z = 0.999785014143;
    msg.start_z_units = 120U;
    msg.end_lat = 0.764396347412;
    msg.end_lon = 0.0181698857519;
    msg.end_z = 0.878306224633;
    msg.end_z_units = 21U;
    msg.lradius = 0.152468649902;
    msg.flags = 171U;
    msg.x = 0.250814584797;
    msg.y = 0.509743200189;
    msg.z = 0.992565303315;
    msg.vx = 0.346010447894;
    msg.vy = 0.470352162221;
    msg.vz = 0.766282262495;
    msg.course_error = 0.165509226808;
    msg.eta = 29820U;

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
    msg.setTimeStamp(0.660339450414);
    msg.setSource(31761U);
    msg.setSourceEntity(133U);
    msg.setDestination(45539U);
    msg.setDestinationEntity(126U);
    msg.k = 0.327160780108;
    msg.m = 0.840217577264;
    msg.n = 0.0617109772554;

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
    msg.setTimeStamp(0.990062599591);
    msg.setSource(37258U);
    msg.setSourceEntity(223U);
    msg.setDestination(55112U);
    msg.setDestinationEntity(137U);
    msg.k = 0.767631417106;
    msg.m = 0.395161179971;
    msg.n = 0.996248356411;

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
    msg.setTimeStamp(0.567334672778);
    msg.setSource(33402U);
    msg.setSourceEntity(125U);
    msg.setDestination(23351U);
    msg.setDestinationEntity(62U);
    msg.k = 0.729456139053;
    msg.m = 0.348624695258;
    msg.n = 0.644627854161;

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
    msg.setTimeStamp(0.892109731386);
    msg.setSource(53457U);
    msg.setSourceEntity(64U);
    msg.setDestination(17915U);
    msg.setDestinationEntity(103U);
    msg.p = 0.665082646192;
    msg.i = 0.236718434409;
    msg.d = 0.743930554268;
    msg.a = 0.287525199382;

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
    msg.setTimeStamp(0.590816855177);
    msg.setSource(58736U);
    msg.setSourceEntity(96U);
    msg.setDestination(18947U);
    msg.setDestinationEntity(40U);
    msg.p = 0.906534809095;
    msg.i = 0.735731475761;
    msg.d = 0.129129630426;
    msg.a = 0.764390841971;

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
    msg.setTimeStamp(0.593973264977);
    msg.setSource(57055U);
    msg.setSourceEntity(242U);
    msg.setDestination(45166U);
    msg.setDestinationEntity(80U);
    msg.p = 0.75820258856;
    msg.i = 0.379872256446;
    msg.d = 0.958682518455;
    msg.a = 0.301259416785;

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
    msg.setTimeStamp(0.069336852556);
    msg.setSource(28513U);
    msg.setSourceEntity(53U);
    msg.setDestination(40204U);
    msg.setDestinationEntity(117U);
    msg.op = 106U;

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
    msg.setTimeStamp(0.855281853731);
    msg.setSource(29881U);
    msg.setSourceEntity(211U);
    msg.setDestination(15786U);
    msg.setDestinationEntity(68U);
    msg.op = 170U;

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
    msg.setTimeStamp(0.361616427555);
    msg.setSource(37669U);
    msg.setSourceEntity(239U);
    msg.setDestination(39705U);
    msg.setDestinationEntity(144U);
    msg.op = 66U;

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
    msg.setTimeStamp(0.213429878826);
    msg.setSource(61086U);
    msg.setSourceEntity(166U);
    msg.setDestination(62909U);
    msg.setDestinationEntity(191U);
    msg.x = 0.545570628923;
    msg.y = 0.706661827426;
    msg.z = 0.734026783944;
    msg.vx = 0.807088205575;
    msg.vy = 0.525876810507;
    msg.vz = 0.292014423891;
    msg.ax = 0.496037990098;
    msg.ay = 0.332355688023;
    msg.az = 0.692304147007;
    msg.flags = 21735U;

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
    msg.setTimeStamp(0.850781420495);
    msg.setSource(8514U);
    msg.setSourceEntity(86U);
    msg.setDestination(35805U);
    msg.setDestinationEntity(58U);
    msg.x = 0.486796056343;
    msg.y = 0.976024235905;
    msg.z = 0.15366824566;
    msg.vx = 0.667378890139;
    msg.vy = 0.899750862346;
    msg.vz = 0.519608976273;
    msg.ax = 0.738664398401;
    msg.ay = 0.958881691549;
    msg.az = 0.800639653718;
    msg.flags = 51562U;

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
    msg.setTimeStamp(0.410553354738);
    msg.setSource(10653U);
    msg.setSourceEntity(87U);
    msg.setDestination(20072U);
    msg.setDestinationEntity(203U);
    msg.x = 0.0819090446167;
    msg.y = 0.124943594925;
    msg.z = 0.548971118334;
    msg.vx = 0.982107329838;
    msg.vy = 0.923561130652;
    msg.vz = 0.662985423205;
    msg.ax = 0.899058905756;
    msg.ay = 0.424003526706;
    msg.az = 0.799017877589;
    msg.flags = 57853U;

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
    msg.setTimeStamp(0.32732643408);
    msg.setSource(18012U);
    msg.setSourceEntity(232U);
    msg.setDestination(23454U);
    msg.setDestinationEntity(65U);
    msg.value = 0.269061119087;

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
    msg.setTimeStamp(0.0745669301926);
    msg.setSource(55937U);
    msg.setSourceEntity(134U);
    msg.setDestination(61048U);
    msg.setDestinationEntity(37U);
    msg.value = 0.5074623275;

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
    msg.setTimeStamp(0.491006680801);
    msg.setSource(28502U);
    msg.setSourceEntity(21U);
    msg.setDestination(50199U);
    msg.setDestinationEntity(14U);
    msg.value = 0.878125615427;

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
    msg.setTimeStamp(0.711686651059);
    msg.setSource(20864U);
    msg.setSourceEntity(242U);
    msg.setDestination(46134U);
    msg.setDestinationEntity(229U);
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.path_ref = 1272479131U;
    tmp_msg_0.start_lat = 0.637965988512;
    tmp_msg_0.start_lon = 0.267338964256;
    tmp_msg_0.start_z = 0.658595220964;
    tmp_msg_0.start_z_units = 97U;
    tmp_msg_0.end_lat = 0.0354526078516;
    tmp_msg_0.end_lon = 0.449748591313;
    tmp_msg_0.end_z = 0.783388886684;
    tmp_msg_0.end_z_units = 68U;
    tmp_msg_0.speed = 0.123033736763;
    tmp_msg_0.speed_units = 150U;
    tmp_msg_0.lradius = 0.771253493611;
    tmp_msg_0.flags = 222U;
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
    msg.setTimeStamp(0.485618688716);
    msg.setSource(2467U);
    msg.setSourceEntity(27U);
    msg.setDestination(48419U);
    msg.setDestinationEntity(223U);
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.path_ref = 371840714U;
    tmp_msg_0.start_lat = 0.180750567969;
    tmp_msg_0.start_lon = 0.248520265661;
    tmp_msg_0.start_z = 0.331453142175;
    tmp_msg_0.start_z_units = 185U;
    tmp_msg_0.end_lat = 0.344365832446;
    tmp_msg_0.end_lon = 0.382265087377;
    tmp_msg_0.end_z = 0.625685131391;
    tmp_msg_0.end_z_units = 12U;
    tmp_msg_0.speed = 0.535673229427;
    tmp_msg_0.speed_units = 81U;
    tmp_msg_0.lradius = 0.47553879035;
    tmp_msg_0.flags = 12U;
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
    msg.setTimeStamp(0.442714750172);
    msg.setSource(4076U);
    msg.setSourceEntity(155U);
    msg.setDestination(11087U);
    msg.setDestinationEntity(204U);
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.path_ref = 384241495U;
    tmp_msg_0.start_lat = 0.429942938706;
    tmp_msg_0.start_lon = 0.162157554335;
    tmp_msg_0.start_z = 0.152300776217;
    tmp_msg_0.start_z_units = 103U;
    tmp_msg_0.end_lat = 0.168545669666;
    tmp_msg_0.end_lon = 0.938176483789;
    tmp_msg_0.end_z = 0.473734281877;
    tmp_msg_0.end_z_units = 57U;
    tmp_msg_0.speed = 0.0420515326876;
    tmp_msg_0.speed_units = 25U;
    tmp_msg_0.lradius = 0.666971010514;
    tmp_msg_0.flags = 50U;
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
    msg.setTimeStamp(0.737662746168);
    msg.setSource(35933U);
    msg.setSourceEntity(238U);
    msg.setDestination(27299U);
    msg.setDestinationEntity(204U);
    msg.timeout = 6482U;
    msg.lat = 0.378923759198;
    msg.lon = 0.237020033244;
    msg.z = 0.150637224322;
    msg.z_units = 218U;
    msg.speed = 0.128625794577;
    msg.speed_units = 72U;
    msg.roll = 0.846640214955;
    msg.pitch = 0.317479979461;
    msg.yaw = 0.553982815852;
    msg.custom.assign("YCJLHVPCFKOWXTNUEUFXERHMUSSBLKADJEZZQMTJTJECUMXEPEEJHSQRTXQMSZPQISFGJWGQAVGGIHMARDYVHYDBBCFDVIPOHBUPCDMFVPYBZFXIBNEDLPCAOLMKRWRKIJRATZY");

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
    msg.setTimeStamp(0.563367531053);
    msg.setSource(54551U);
    msg.setSourceEntity(99U);
    msg.setDestination(2519U);
    msg.setDestinationEntity(89U);
    msg.timeout = 46397U;
    msg.lat = 9.48876301703e-05;
    msg.lon = 0.825603296385;
    msg.z = 0.865838393379;
    msg.z_units = 166U;
    msg.speed = 0.67805485867;
    msg.speed_units = 84U;
    msg.roll = 0.23967793109;
    msg.pitch = 0.887689665462;
    msg.yaw = 0.231007232986;
    msg.custom.assign("TUBQJJCPWTVPZSPZLYEEZASLUAHQVKEJRDMNYG");

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
    msg.setTimeStamp(0.567226355504);
    msg.setSource(22194U);
    msg.setSourceEntity(215U);
    msg.setDestination(23507U);
    msg.setDestinationEntity(124U);
    msg.timeout = 46607U;
    msg.lat = 0.777978641254;
    msg.lon = 0.881703706715;
    msg.z = 0.386957444007;
    msg.z_units = 218U;
    msg.speed = 0.330161099094;
    msg.speed_units = 209U;
    msg.roll = 0.298585546933;
    msg.pitch = 0.182325664592;
    msg.yaw = 0.633713933098;
    msg.custom.assign("DUSVKSNRJKCGYOLWMGOKZPKIOVOVSUEVHUCCQPDBJRWVNBXECCWCXQTPMDYBVJKJWL");

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
    msg.setTimeStamp(0.0555499116242);
    msg.setSource(51093U);
    msg.setSourceEntity(192U);
    msg.setDestination(45684U);
    msg.setDestinationEntity(244U);
    msg.timeout = 52701U;
    msg.lat = 0.618065082005;
    msg.lon = 0.817947566394;
    msg.z = 0.204592607328;
    msg.z_units = 250U;
    msg.speed = 0.512911731706;
    msg.speed_units = 16U;
    msg.duration = 21346U;
    msg.radius = 0.278025215286;
    msg.flags = 126U;
    msg.custom.assign("XBRHVTWVOWVMLMGNUNBDXMIRXZCOQDYFSYVSHVDTCWAMXNUIQIEIGSSNTPNPYWMSLUAIIQAQBEYKVFIXLNFWRU");

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
    msg.setTimeStamp(0.87970607374);
    msg.setSource(26512U);
    msg.setSourceEntity(125U);
    msg.setDestination(35818U);
    msg.setDestinationEntity(145U);
    msg.timeout = 58133U;
    msg.lat = 0.269444656516;
    msg.lon = 0.620071312178;
    msg.z = 0.917033402374;
    msg.z_units = 207U;
    msg.speed = 0.311224086552;
    msg.speed_units = 49U;
    msg.duration = 55193U;
    msg.radius = 0.470037262125;
    msg.flags = 99U;
    msg.custom.assign("CIEAOMLBYTZNAUXKJAGWMPAZSPOVBEDGIXTWUIEIBMLERDGXQTPWMNHLKDDCVURWCSXJHQPAUQVDTRHQYVZGCEPPQCEQFLWYZDRJPNURBQYJFMHRFQUYDVSXOFGHLKPSVXXBMVKNNPKKBTIWDCFMYRBWIJSKLJPYOKWFGIAYCIZBOYMETWANSF");

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
    msg.setTimeStamp(0.879137620996);
    msg.setSource(51501U);
    msg.setSourceEntity(207U);
    msg.setDestination(10493U);
    msg.setDestinationEntity(193U);
    msg.timeout = 20490U;
    msg.lat = 0.597634950724;
    msg.lon = 0.846818081602;
    msg.z = 0.371607415629;
    msg.z_units = 4U;
    msg.speed = 0.956889503329;
    msg.speed_units = 168U;
    msg.duration = 46660U;
    msg.radius = 0.0861300971577;
    msg.flags = 84U;
    msg.custom.assign("BBELANJHKWKXNHSYVQPOFBKOBBNIDRXPQVWJEG");

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
    msg.setTimeStamp(0.576543176926);
    msg.setSource(44622U);
    msg.setSourceEntity(244U);
    msg.setDestination(47754U);
    msg.setDestinationEntity(142U);
    msg.custom.assign("WBCMQXKNSNAQKDWDYRKLXNFP");

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
    msg.setTimeStamp(0.38561724711);
    msg.setSource(17368U);
    msg.setSourceEntity(82U);
    msg.setDestination(7430U);
    msg.setDestinationEntity(151U);
    msg.custom.assign("QHCKFIXMVEDMRRJZHINAPMQXRVSSFHWITSLJUTYSTYEXZAZHYQIYESICDBSXODZPWKHNJGZXAYGYPMBWCVNGZRTVWWBQUOCORGJMVKXFTDWYXUERLCPGLKWFUOEUMOXCMSLFUECJ");

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
    msg.setTimeStamp(0.820149802758);
    msg.setSource(49255U);
    msg.setSourceEntity(254U);
    msg.setDestination(57519U);
    msg.setDestinationEntity(229U);
    msg.custom.assign("BAFRVCHZURSRLBPT");

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
    msg.setTimeStamp(0.617885064262);
    msg.setSource(34461U);
    msg.setSourceEntity(79U);
    msg.setDestination(32731U);
    msg.setDestinationEntity(248U);
    msg.timeout = 57804U;
    msg.lat = 0.287315895832;
    msg.lon = 0.0146399341454;
    msg.z = 0.243842949448;
    msg.z_units = 145U;
    msg.duration = 12380U;
    msg.speed = 0.748434459503;
    msg.speed_units = 73U;
    msg.type = 99U;
    msg.radius = 0.358127439198;
    msg.length = 0.518741857124;
    msg.bearing = 0.592969080574;
    msg.direction = 128U;
    msg.custom.assign("XSEYULUZJGDIGRFTCSPLTVCQQQVGAYYRFPNFHZKBZWEJDDRFSJQWDLLBMRVWMKPJRHIEEYKTNQBWBJIADRMGDCDBCMSYAKCYFHOGJXKTSHEEK");

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
    msg.setTimeStamp(0.220818177822);
    msg.setSource(1163U);
    msg.setSourceEntity(117U);
    msg.setDestination(22800U);
    msg.setDestinationEntity(254U);
    msg.timeout = 33595U;
    msg.lat = 0.267795107605;
    msg.lon = 0.812002380311;
    msg.z = 0.542990070528;
    msg.z_units = 216U;
    msg.duration = 50908U;
    msg.speed = 0.359119652144;
    msg.speed_units = 152U;
    msg.type = 77U;
    msg.radius = 0.998912801457;
    msg.length = 0.844436868374;
    msg.bearing = 0.32524708948;
    msg.direction = 102U;
    msg.custom.assign("GDXXVOQXOZZMEALNKABUNUNFZEHKJPCHLBMQAUXXBQECNMTNDHKKFNLBNZIWDUJDCSWFXSTGKUBRAHTIDMJIVMRTHALPYWLPTPFWOVPSMGD");

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
    msg.setTimeStamp(0.968232581228);
    msg.setSource(42513U);
    msg.setSourceEntity(49U);
    msg.setDestination(11690U);
    msg.setDestinationEntity(123U);
    msg.timeout = 63745U;
    msg.lat = 0.542627136648;
    msg.lon = 0.540427434358;
    msg.z = 0.380101327805;
    msg.z_units = 233U;
    msg.duration = 50506U;
    msg.speed = 0.82559218857;
    msg.speed_units = 97U;
    msg.type = 113U;
    msg.radius = 0.0149323541501;
    msg.length = 0.555525889406;
    msg.bearing = 0.377981634609;
    msg.direction = 85U;
    msg.custom.assign("YNFENAQKXUGMZHGDAJKSZREJRDYMECWRJGKFGMWZCGUWBXKELQLPKBNWQSNVEMVAAZCPIGBHPKHRXEDSEVHCUGTFNSNPMWHVEABDCDJYLXUAZWLIPFMSTHFPUJQNWXKNZFCKOMCBGULOIOWORIFDWBXFGSIHNTSAPIBXHQYDOVIFOKWLCGUUVUTSOOJKRJVBQSYQTOCDTDV");

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
    msg.setTimeStamp(0.782236648821);
    msg.setSource(60853U);
    msg.setSourceEntity(116U);
    msg.setDestination(46248U);
    msg.setDestinationEntity(167U);
    msg.duration = 4518U;
    msg.custom.assign("FTPAYPPYREQRBMRYREKIJYICTNURYQLMLCAJKXCVTPJFDCBPGVSWEQUWCMPQNMIFOOVIZMGTSIYWTKNSDBZTMOMCAVLJSZHLBRXHWCKPWJKNHAEI");

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
    msg.setTimeStamp(0.498252443869);
    msg.setSource(23743U);
    msg.setSourceEntity(116U);
    msg.setDestination(29856U);
    msg.setDestinationEntity(205U);
    msg.duration = 28516U;
    msg.custom.assign("HGHADHJPUSZMREUEZVJFMWDGKSDKOTFWCFQRJGNRSDWKNJEHQWZPBKWEONTHHKBUWMTPVELJYRARTLQYYXDORUTOGYXBZGUVJABAWKKXIZCTDJGQIXZNEQNCETSXCEPLCPLYOYUOSUCITGHFHICBYFMPNPAXMIYHLBJMLDPSJGZCLIKHACBRQI");

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
    msg.setTimeStamp(0.462058830871);
    msg.setSource(7020U);
    msg.setSourceEntity(158U);
    msg.setDestination(35503U);
    msg.setDestinationEntity(155U);
    msg.duration = 14762U;
    msg.custom.assign("MSVTXRZLASYOPIOTBIUBMSBOCJPWURPNKPRBHHMWINGUBJLKZAJVSVCRCUBHSH");

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
    msg.setTimeStamp(0.791574690709);
    msg.setSource(43808U);
    msg.setSourceEntity(71U);
    msg.setDestination(53258U);
    msg.setDestinationEntity(124U);
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.path_ref = 2391403082U;
    tmp_msg_0.start_lat = 0.231470235626;
    tmp_msg_0.start_lon = 0.329795235018;
    tmp_msg_0.start_z = 0.696477637256;
    tmp_msg_0.start_z_units = 164U;
    tmp_msg_0.end_lat = 0.206434938845;
    tmp_msg_0.end_lon = 0.0988916598004;
    tmp_msg_0.end_z = 0.0856349422759;
    tmp_msg_0.end_z_units = 17U;
    tmp_msg_0.speed = 0.0209992622399;
    tmp_msg_0.speed_units = 241U;
    tmp_msg_0.lradius = 0.993176197879;
    tmp_msg_0.flags = 142U;
    msg.control.set(tmp_msg_0);
    msg.duration = 21383U;
    msg.custom.assign("WHEKIZHZLQKKVUMGCTOBUAHLHRRYTKNFQZPHDCSPOIWTMMMAYLULNGGQJTPZMYQYVXPZEUIQALIHZMJDQCAPFCXUBHVXXIEFXLPLEZDNYOUAAQSNBNEDRQXWTSMOGRYWTUFVUWIFJOFBGSOCKEDBUR");

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
    msg.setTimeStamp(0.164223497704);
    msg.setSource(63982U);
    msg.setSourceEntity(47U);
    msg.setDestination(8364U);
    msg.setDestinationEntity(17U);
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.path_ref = 2510105129U;
    tmp_msg_0.start_lat = 0.784239784752;
    tmp_msg_0.start_lon = 0.710585871729;
    tmp_msg_0.start_z = 0.581491495776;
    tmp_msg_0.start_z_units = 137U;
    tmp_msg_0.end_lat = 0.1649729641;
    tmp_msg_0.end_lon = 0.95394907147;
    tmp_msg_0.end_z = 0.0279677709227;
    tmp_msg_0.end_z_units = 182U;
    tmp_msg_0.speed = 0.465368920035;
    tmp_msg_0.speed_units = 239U;
    tmp_msg_0.lradius = 0.160264811709;
    tmp_msg_0.flags = 175U;
    msg.control.set(tmp_msg_0);
    msg.duration = 53472U;
    msg.custom.assign("VKHRJHWKLIUCOHCCZTUZAYXIGKUOFIWEQODDNPGDEAJKUNTOCYRHPZSXMKMOXGJVYVQBXNGNZHWJNIAOMFDTJDUBVFMPPPRXZL");

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
    msg.setTimeStamp(0.165543706443);
    msg.setSource(26065U);
    msg.setSourceEntity(134U);
    msg.setDestination(29220U);
    msg.setDestinationEntity(98U);
    IMC::DesiredRoll tmp_msg_0;
    tmp_msg_0.value = 0.285202304447;
    msg.control.set(tmp_msg_0);
    msg.duration = 5993U;
    msg.custom.assign("ZOKHPDYYNZBAZQYFQSTXAZBNAZCBHGFOPJENTHFWLUAYTZLOWWLRMVWBBORJDIULHSGDCFVYMDSMRLARXSAIAWQPSKINSCSSQNXXNKEUHYNEGTZKFXMO");

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
    msg.setTimeStamp(0.85559596637);
    msg.setSource(44292U);
    msg.setSourceEntity(201U);
    msg.setDestination(55773U);
    msg.setDestinationEntity(20U);
    msg.timeout = 12267U;
    msg.lat = 0.303341085449;
    msg.lon = 0.88662876787;
    msg.z = 0.0264535078035;
    msg.z_units = 213U;
    msg.speed = 0.826145858937;
    msg.speed_units = 11U;
    msg.bearing = 0.220628684898;
    msg.cross_angle = 0.00683163390707;
    msg.width = 0.185897530877;
    msg.length = 0.258653154059;
    msg.hstep = 0.155810615052;
    msg.coff = 91U;
    msg.alternation = 93U;
    msg.flags = 234U;
    msg.custom.assign("NSODMHDHVBVUENYOGQKKGMXFIMOIZZTBZTLONRENJMQJLGRPKILADWCCYOXLTGISKDRFJYIHCMXNNPROQRRGGHCYHWDVCJJPWNAVFUDSQKTLZEAHTIXBJEAMBMQEAVLPBCKUROPBZUJFUILUREFQPLNNCWBKANSCXFSGYWFCOKVAYEUDPVKSCLDVYWODYFFJTWTUGRYJAHGYHEUBQZXIJBXQXHZVKMMDSZREOMSUSXGAEWZ");

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
    msg.setTimeStamp(0.316683404234);
    msg.setSource(64048U);
    msg.setSourceEntity(233U);
    msg.setDestination(48824U);
    msg.setDestinationEntity(157U);
    msg.timeout = 20255U;
    msg.lat = 0.63603157475;
    msg.lon = 0.26502477474;
    msg.z = 0.197378168968;
    msg.z_units = 105U;
    msg.speed = 0.642591319379;
    msg.speed_units = 179U;
    msg.bearing = 0.0769203696002;
    msg.cross_angle = 0.338597641847;
    msg.width = 0.0962787524193;
    msg.length = 0.14658936669;
    msg.hstep = 0.769062137596;
    msg.coff = 226U;
    msg.alternation = 210U;
    msg.flags = 242U;
    msg.custom.assign("EDMSMOUZEIBBKPJFNDEJZNZNYYGLXIFGPYDHOOQWEBLJFRKTRXYTCHUYHKUFTRPJRXGEYAZWCSLSHSHOKQKKWHIAWUKIJLMXXXKRCJFNCCNPMITAXLGQSRBIVTAPGVZZQNTQMFDMGJJXWOPAVSYDUNTEVULQOEOVVSUSNHGYJCLABDFPWBZMIBESWQEYBGDKIOTMBAWYVTUEXSZLARQRAQDIFICJZ");

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
    msg.setTimeStamp(0.652647899705);
    msg.setSource(47082U);
    msg.setSourceEntity(25U);
    msg.setDestination(12230U);
    msg.setDestinationEntity(0U);
    msg.timeout = 13074U;
    msg.lat = 0.488819198773;
    msg.lon = 0.7759365524;
    msg.z = 0.216678054063;
    msg.z_units = 238U;
    msg.speed = 0.907612794775;
    msg.speed_units = 156U;
    msg.bearing = 0.812815447328;
    msg.cross_angle = 0.911190868023;
    msg.width = 0.950795588498;
    msg.length = 0.432412219521;
    msg.hstep = 0.708605266604;
    msg.coff = 95U;
    msg.alternation = 187U;
    msg.flags = 220U;
    msg.custom.assign("HHFETWDGGLLTAGRMYYBXSGAWPCFTNYIQFZBDWAQZU");

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
    msg.setTimeStamp(0.498770502731);
    msg.setSource(16118U);
    msg.setSourceEntity(160U);
    msg.setDestination(8765U);
    msg.setDestinationEntity(170U);
    msg.timeout = 54167U;
    msg.lat = 0.781268525923;
    msg.lon = 0.0251126080009;
    msg.z = 0.698195777279;
    msg.z_units = 192U;
    msg.speed = 0.866409458779;
    msg.speed_units = 65U;
    msg.custom.assign("MQBCADVBFLWUZGQFHXCOJ");

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
    msg.setTimeStamp(0.571510690114);
    msg.setSource(14435U);
    msg.setSourceEntity(136U);
    msg.setDestination(37927U);
    msg.setDestinationEntity(72U);
    msg.timeout = 26570U;
    msg.lat = 0.839961536296;
    msg.lon = 0.31196573674;
    msg.z = 0.424404647267;
    msg.z_units = 231U;
    msg.speed = 0.83036881665;
    msg.speed_units = 6U;
    msg.custom.assign("NBXFYQZROADSCLVWFYANNTWFPGKBFWVEBSRLHHTTJTJBWGPHNJUHVFPIZGDUNSOBAUQDEZXINQCJTMOWDXDDYLTKKDZNDNTWBRSXMIRLPYLXJWHUWOCCQY");

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
    msg.setTimeStamp(0.273843440299);
    msg.setSource(37687U);
    msg.setSourceEntity(222U);
    msg.setDestination(62150U);
    msg.setDestinationEntity(193U);
    msg.timeout = 15274U;
    msg.lat = 0.0582198789934;
    msg.lon = 0.514893604442;
    msg.z = 0.4445460771;
    msg.z_units = 216U;
    msg.speed = 0.931506912016;
    msg.speed_units = 112U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.977579400094;
    tmp_msg_0.y = 0.0142498908383;
    tmp_msg_0.z = 0.547622525322;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("VATHPULQDIYBUPSSVCTFBRSSNXLZLJITDLKKGZCFKOPZDJFEJXYALMDQXMKJLUNVHSLRQTOSTTHIMNIATYCWPXDTCIVRLFFHUUSXNGIPNKDOHMVJWNANEXI");

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
    msg.setTimeStamp(0.825916624059);
    msg.setSource(24363U);
    msg.setSourceEntity(130U);
    msg.setDestination(19574U);
    msg.setDestinationEntity(95U);
    msg.x = 0.819272824336;
    msg.y = 0.84756137057;
    msg.z = 0.678502596435;

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
    msg.setTimeStamp(0.402329250289);
    msg.setSource(11510U);
    msg.setSourceEntity(105U);
    msg.setDestination(43073U);
    msg.setDestinationEntity(62U);
    msg.x = 0.996217593449;
    msg.y = 0.989115285551;
    msg.z = 0.667598506714;

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
    msg.setTimeStamp(0.702983750792);
    msg.setSource(22245U);
    msg.setSourceEntity(26U);
    msg.setDestination(53420U);
    msg.setDestinationEntity(173U);
    msg.x = 0.199648014683;
    msg.y = 0.554652993258;
    msg.z = 0.160981709782;

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
    msg.setTimeStamp(0.676939214625);
    msg.setSource(16666U);
    msg.setSourceEntity(141U);
    msg.setDestination(61384U);
    msg.setDestinationEntity(103U);
    msg.timeout = 14895U;
    msg.lat = 0.533213047804;
    msg.lon = 0.693433841096;
    msg.z = 0.497786105419;
    msg.z_units = 4U;
    msg.amplitude = 0.256133601808;
    msg.pitch = 0.244639914752;
    msg.speed = 0.77623222516;
    msg.speed_units = 130U;
    msg.custom.assign("ILTZSDKXFYYNWEQRWDGQNQLMCLURZNTHCIUUXLAUMFSJIBRDHRP");

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
    msg.setTimeStamp(0.409902521459);
    msg.setSource(49939U);
    msg.setSourceEntity(18U);
    msg.setDestination(13715U);
    msg.setDestinationEntity(226U);
    msg.timeout = 50919U;
    msg.lat = 0.0219166905959;
    msg.lon = 0.604114675141;
    msg.z = 0.177562348936;
    msg.z_units = 43U;
    msg.amplitude = 0.934363195093;
    msg.pitch = 0.813793703874;
    msg.speed = 0.0350456190973;
    msg.speed_units = 134U;
    msg.custom.assign("XEJCGEDQPYYBVICIFFVJRTSDOFDBCXGNSDWYLBPALHMKMXRUEMNEGGARUYRQSPJTJBVRSNGPQWW");

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
    msg.setTimeStamp(0.170663932428);
    msg.setSource(11554U);
    msg.setSourceEntity(185U);
    msg.setDestination(47710U);
    msg.setDestinationEntity(144U);
    msg.timeout = 55031U;
    msg.lat = 0.0794448869251;
    msg.lon = 0.166241528333;
    msg.z = 0.342923069051;
    msg.z_units = 241U;
    msg.amplitude = 0.289576853322;
    msg.pitch = 0.741766621047;
    msg.speed = 0.476369983592;
    msg.speed_units = 188U;
    msg.custom.assign("YBICOVSDFTJYNDCBDNPONBGJZROIVEZOPLMUTYNSVZOHQTZAWCSHEXERPYGKCOTKQUQATLTFDHAM");

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
    msg.setTimeStamp(0.050792030726);
    msg.setSource(24178U);
    msg.setSourceEntity(245U);
    msg.setDestination(65260U);
    msg.setDestinationEntity(67U);

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
    msg.setTimeStamp(0.184323439554);
    msg.setSource(2119U);
    msg.setSourceEntity(15U);
    msg.setDestination(27209U);
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
    msg.setTimeStamp(0.20841344977);
    msg.setSource(9305U);
    msg.setSourceEntity(133U);
    msg.setDestination(62612U);
    msg.setDestinationEntity(96U);

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
    msg.setTimeStamp(0.475375080166);
    msg.setSource(30331U);
    msg.setSourceEntity(72U);
    msg.setDestination(52707U);
    msg.setDestinationEntity(209U);
    msg.lat = 0.307932647136;
    msg.lon = 0.378966327784;
    msg.z = 0.356824441702;
    msg.z_units = 246U;
    msg.radius = 0.348781079527;
    msg.duration = 48U;
    msg.speed = 0.931559100958;
    msg.speed_units = 112U;
    msg.popup_period = 8946U;
    msg.popup_duration = 57147U;
    msg.flags = 54U;
    msg.custom.assign("JHOTQROXXKGWKHNSMJYGLYFHBRIVDMBSMHPAJIGJQRXTBAHZCQSVWOIMADZCDFRCKCDQOZFOIQJDMOUOASIXVJDLFTHTMLFBLLGYEHUUFLZRVRZWAVEFSVGBLBCJIUYXFVEZSUWK");

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
    msg.setTimeStamp(0.147122055921);
    msg.setSource(47584U);
    msg.setSourceEntity(206U);
    msg.setDestination(34139U);
    msg.setDestinationEntity(127U);
    msg.lat = 0.612927851686;
    msg.lon = 0.845841860281;
    msg.z = 0.725465260848;
    msg.z_units = 192U;
    msg.radius = 0.401083515586;
    msg.duration = 28841U;
    msg.speed = 0.902224263709;
    msg.speed_units = 97U;
    msg.popup_period = 13076U;
    msg.popup_duration = 25913U;
    msg.flags = 11U;
    msg.custom.assign("BSSIJOZVETWBGNUJACGXIHZMUDDBOTOUWTCXLNWBQACKLACRJVBWAQFSRVULMVYGUOVPMIICYGVSHEYKZXEWDRYDZWOPESBJDOGNSSFUKAIAZKHPEHHQUHQF");

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
    msg.setTimeStamp(0.088973721551);
    msg.setSource(49474U);
    msg.setSourceEntity(240U);
    msg.setDestination(21565U);
    msg.setDestinationEntity(110U);
    msg.lat = 0.115245712735;
    msg.lon = 0.0295421849619;
    msg.z = 0.153664155204;
    msg.z_units = 4U;
    msg.radius = 0.527552295577;
    msg.duration = 12309U;
    msg.speed = 0.235076727952;
    msg.speed_units = 24U;
    msg.popup_period = 55656U;
    msg.popup_duration = 37552U;
    msg.flags = 37U;
    msg.custom.assign("DKHEXLCVWGLGXFVQKYOECCJENDVWLWIBGFQHOQRLWYBFXAKPATRDVMEXIHYYFJNBHZXXXSGIJRGFVDMOATNGRTHRNTOPBGFUZUPQSSJDWZJWUMPCANWHJZXDEVAKRSLMSMIQYYOEYNOJRFJIBGZMNLDKYSIQDODCVHEVCBAZARHTAKEKUFJUOAULHUDUXILJYKBTMZUKBZNQZOPSPZFWROPMPSBPCUMCHVLIGMTQPWYVQIXQESWIKNSNLA");

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
    msg.setTimeStamp(0.406651968846);
    msg.setSource(19550U);
    msg.setSourceEntity(50U);
    msg.setDestination(36082U);
    msg.setDestinationEntity(22U);
    msg.timeout = 56743U;
    msg.flags = 9U;
    msg.lat = 0.176226794301;
    msg.lon = 0.606285084309;
    msg.start_z = 0.417756965675;
    msg.start_z_units = 215U;
    msg.end_z = 0.382255222406;
    msg.end_z_units = 86U;
    msg.radius = 0.143794317539;
    msg.speed = 0.383372614583;
    msg.speed_units = 22U;
    msg.custom.assign("YQVMNEYFUZCDPSRWJVGLPIYMXODP");

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
    msg.setTimeStamp(0.215348851662);
    msg.setSource(42590U);
    msg.setSourceEntity(228U);
    msg.setDestination(17773U);
    msg.setDestinationEntity(118U);
    msg.timeout = 49284U;
    msg.flags = 206U;
    msg.lat = 0.152624872757;
    msg.lon = 0.0424601960307;
    msg.start_z = 0.360414530462;
    msg.start_z_units = 218U;
    msg.end_z = 0.854521265053;
    msg.end_z_units = 78U;
    msg.radius = 0.445432155183;
    msg.speed = 0.710807683701;
    msg.speed_units = 240U;
    msg.custom.assign("CLFFPSJWVKIVGETKNPWXSUTGNWPYWAWIRNDTLYHUGSYXSWAMKMXQGPHEQOOFMMREEGBABKKWLNZEQOUQDTBLHOCHAAWSUIIBYKCDZWYAOMDFOAKTRJMBZJPVHXCTUDXGSHCFSUZRNHQJMFJPKOQXARTBRNRLJPDLYIEBNXKHMEHZFGPFYQMVQOZFIJBJDQ");

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
    msg.setTimeStamp(0.662336934681);
    msg.setSource(20663U);
    msg.setSourceEntity(208U);
    msg.setDestination(14421U);
    msg.setDestinationEntity(254U);
    msg.timeout = 46301U;
    msg.flags = 77U;
    msg.lat = 0.0109441934825;
    msg.lon = 0.321251008253;
    msg.start_z = 0.022031696055;
    msg.start_z_units = 159U;
    msg.end_z = 0.586898803927;
    msg.end_z_units = 64U;
    msg.radius = 0.746577725875;
    msg.speed = 0.358498221361;
    msg.speed_units = 45U;
    msg.custom.assign("HIEANJBYIAIZAQGDTT");

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
    msg.setTimeStamp(0.804352519791);
    msg.setSource(65353U);
    msg.setSourceEntity(115U);
    msg.setDestination(64011U);
    msg.setDestinationEntity(14U);
    msg.timeout = 61340U;
    msg.lat = 0.799618906809;
    msg.lon = 0.792502672244;
    msg.z = 0.0879232199047;
    msg.z_units = 45U;
    msg.speed = 0.73084688779;
    msg.speed_units = 92U;
    msg.custom.assign("ANKGZTNUTNHAVSYZVBTCPUCNYZQFYJISLIDQBQBUHCMPLCDO");

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
    msg.setTimeStamp(0.325660425174);
    msg.setSource(63366U);
    msg.setSourceEntity(13U);
    msg.setDestination(12068U);
    msg.setDestinationEntity(49U);
    msg.timeout = 27809U;
    msg.lat = 0.91370582226;
    msg.lon = 0.375189320308;
    msg.z = 0.732177744212;
    msg.z_units = 146U;
    msg.speed = 0.160118311074;
    msg.speed_units = 147U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.515325711902;
    tmp_msg_0.y = 0.116526164472;
    tmp_msg_0.z = 0.0736167695272;
    tmp_msg_0.t = 0.59484210588;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("QYLZVVUUDDIAWDRDRIPFKIOLONHXJCGCMNZEHOECNIOMBATZAHQKHELCTBPYJLEUCGVISMAVFADFMNWWBXCYGZBZGKTYGLMTUBDMORCDSLTRHWAAKHWNRTWJCEPKVFPOJINBRZYXNWPRNSVJUYDBMMLMKOPKZIZPK");

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
    msg.setTimeStamp(0.714405687523);
    msg.setSource(47605U);
    msg.setSourceEntity(6U);
    msg.setDestination(36958U);
    msg.setDestinationEntity(213U);
    msg.timeout = 18246U;
    msg.lat = 0.880058972635;
    msg.lon = 0.134692290554;
    msg.z = 0.632456200384;
    msg.z_units = 168U;
    msg.speed = 0.363999897016;
    msg.speed_units = 227U;
    msg.custom.assign("RHRIYHELWUHKNYSHWGVGTLCGZWSPMWWDJHBXSDADNUBMIYDAFXCSTDIQLYHUUSUPYJUMMAJZNRUSEEJQZRJKDBTCXOKJTTXGYPBGWAZMORJFXOJTFBRCETOISSILMIHKWAEUNQRVWYKONHJLBDFBCGAOGZEBQNKMYILINWMNCQNAHVGTZPANVLPKGIQTEERFUOFQVIGYAKZKJPTSFRFMLZVQELDQHQBXCDVXCPXVPCOKBVSP");

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
    msg.setTimeStamp(0.0180368980744);
    msg.setSource(19340U);
    msg.setSourceEntity(138U);
    msg.setDestination(30926U);
    msg.setDestinationEntity(239U);
    msg.x = 0.592508485653;
    msg.y = 0.537147107164;
    msg.z = 0.846603331106;
    msg.t = 0.803349365401;

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
    msg.setTimeStamp(0.292836736817);
    msg.setSource(47617U);
    msg.setSourceEntity(252U);
    msg.setDestination(16283U);
    msg.setDestinationEntity(18U);
    msg.x = 0.777116968733;
    msg.y = 0.859009660586;
    msg.z = 0.747715343515;
    msg.t = 0.906215455092;

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
    msg.setTimeStamp(0.536871297602);
    msg.setSource(4991U);
    msg.setSourceEntity(98U);
    msg.setDestination(40273U);
    msg.setDestinationEntity(4U);
    msg.x = 0.380975116957;
    msg.y = 0.857080301543;
    msg.z = 0.450997341029;
    msg.t = 0.7976877869;

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
    msg.setTimeStamp(0.616177932451);
    msg.setSource(45529U);
    msg.setSourceEntity(18U);
    msg.setDestination(63655U);
    msg.setDestinationEntity(24U);
    msg.timeout = 26195U;
    msg.name.assign("UVSDUOIRBJLQNOCDILNOBNYFYAQRAKPPAALHQLQHFCVHEWHVNECDOZCAZIPAWRHIGJREKZFXBKGNJXMGBBFVVSJZCNCYXHMNTOSRKOHVSLXUMYSLZCQQVUXYBWMTFBOTOXKRPSYGLKBXWMGQPRAZICGUVTZLFNMEFPHQKDUBWOWMMAZUPFW");
    msg.custom.assign("IPNBMKOZRXTWPZMACGWIPXOGNCFUIACNVWRYSOBWZZKJBWULFSCIWTBWQLYRKUPAFENQHEJHHJFZBHLYJUDMPGEEYMCNTPXXZJJCHYQCNZAOEGVGLNVNUVMXWTFFOYJSAACMBEUHAGJLVFSRKHRATSSUEUDIVBWYKTRVHDRPSODLIVKMISJDOZUJXCIQALDNNRLBODUYLRTGPYOHEXSMXBOFDGCKQEPAXDMV");

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
    msg.setTimeStamp(0.0202258424132);
    msg.setSource(16183U);
    msg.setSourceEntity(87U);
    msg.setDestination(51304U);
    msg.setDestinationEntity(53U);
    msg.timeout = 17830U;
    msg.name.assign("IDEBVQLZJBOTTJTROPUVADHDDLGHCVJGUWPDBKPHXWEPAPIFCTVIQRCVGVMFFBUYTXXYYZMQJFDFZBHOEJMXRYTCFAUMPGKBCSPASJYLSOGWUSGLAJERNTHAN");
    msg.custom.assign("BAUBKRTLDZFWKUVJEMRYFDTYMVKNHQXAQXEYHEZNEOTJVINLKZNJXJCHOAXRVIGMTL");

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
    msg.setTimeStamp(0.533562589818);
    msg.setSource(37926U);
    msg.setSourceEntity(39U);
    msg.setDestination(41030U);
    msg.setDestinationEntity(83U);
    msg.timeout = 50572U;
    msg.name.assign("HPMFVNWHDIHVSGKRFSEWPLGQZBFEWHJMMFJDPIPXVTOWDBMOOXLZIVQFBLDUCPUFVZEKNOBDQTLJREBCQUZWYYSBKNFDIEMIOLYORPJNMHQEUCHINTZJWCVSYPSJQGNGRZKZEOLKGHCGJWVADELUTDMLXYATSRQKRHTIGIVCOYKKZZISNWWYPYKFBGGBFPTTXGJWRAUXEAVIUXQXCAURACFNNMEYVAHHCODKBTSL");
    msg.custom.assign("MBKEHYSFGHZOLERSHBZSFVAFJWYQCTWTGNNNXLOHJHWTIBYIYZBMWAATMGZELMRDVGMIHEXDQRDIPKUMLVMMSVZILNDFEAUNFNLJELVXPEPTPFXTYWHUDCJBZ");

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
    msg.setTimeStamp(0.370455971724);
    msg.setSource(40213U);
    msg.setSourceEntity(0U);
    msg.setDestination(62679U);
    msg.setDestinationEntity(181U);
    msg.lat = 0.635736120536;
    msg.lon = 0.809817793548;
    msg.z = 0.0583508165573;
    msg.z_units = 209U;
    msg.speed = 0.389519831358;
    msg.speed_units = 227U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 7371U;
    tmp_msg_0.off_x = 0.968449105822;
    tmp_msg_0.off_y = 0.182797494264;
    tmp_msg_0.off_z = 0.325982187178;
    msg.participants.push_back(tmp_msg_0);
    msg.start_time = 0.308651554214;
    msg.custom.assign("HQTLAFAHESKDGPXCBGQEQEVHF");

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
    msg.setTimeStamp(0.108824745617);
    msg.setSource(25684U);
    msg.setSourceEntity(133U);
    msg.setDestination(43686U);
    msg.setDestinationEntity(204U);
    msg.lat = 0.0516495679645;
    msg.lon = 0.77572684378;
    msg.z = 0.0768090741444;
    msg.z_units = 167U;
    msg.speed = 0.0843095108609;
    msg.speed_units = 171U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 64144U;
    tmp_msg_0.off_x = 0.651703721742;
    tmp_msg_0.off_y = 0.0764750322187;
    tmp_msg_0.off_z = 0.305747859118;
    msg.participants.push_back(tmp_msg_0);
    msg.start_time = 0.287129213491;
    msg.custom.assign("OJVRTTAUWUVUKZGMHNBVSONXQETCODANOABMVCHSIRJWAEWJGZDUGGDNPGCJCYNSDGUFRBTCYOEXMFOKPHBTVISXUSWHFILIAMTZEYSQRKMWNEKLXYIJQHYDGCQAYSMPPTSGCMPFITKRZNRPBGRJRDFVLOMQUCWNWKEAWBQPIDYQWHIXKZYLJMPLJKQXFHIZEHPFSLKPBGBTNHUV");

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
    msg.setTimeStamp(0.366124467219);
    msg.setSource(27472U);
    msg.setSourceEntity(6U);
    msg.setDestination(50133U);
    msg.setDestinationEntity(154U);
    msg.lat = 0.275717694496;
    msg.lon = 0.197656793485;
    msg.z = 0.154403064673;
    msg.z_units = 52U;
    msg.speed = 0.344720593633;
    msg.speed_units = 199U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.818647358419;
    tmp_msg_0.y = 0.603811366913;
    tmp_msg_0.z = 0.156610395067;
    tmp_msg_0.t = 0.474059364738;
    msg.points.push_back(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 61390U;
    tmp_msg_1.off_x = 0.374007049579;
    tmp_msg_1.off_y = 0.0518933463718;
    tmp_msg_1.off_z = 0.0200468501082;
    msg.participants.push_back(tmp_msg_1);
    msg.start_time = 0.053094120201;
    msg.custom.assign("PHMPEIXVNWSOZKPRGBLOTKURYWXFXUUBH");

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
    msg.setTimeStamp(0.657774388679);
    msg.setSource(60496U);
    msg.setSourceEntity(84U);
    msg.setDestination(17426U);
    msg.setDestinationEntity(51U);
    msg.vid = 60740U;
    msg.off_x = 0.400840197696;
    msg.off_y = 0.662040026597;
    msg.off_z = 0.910576196626;

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
    msg.setTimeStamp(0.410219230701);
    msg.setSource(32420U);
    msg.setSourceEntity(34U);
    msg.setDestination(61834U);
    msg.setDestinationEntity(30U);
    msg.vid = 23218U;
    msg.off_x = 0.282521120898;
    msg.off_y = 0.292690555845;
    msg.off_z = 0.0216264453917;

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
    msg.setTimeStamp(0.925245596556);
    msg.setSource(39696U);
    msg.setSourceEntity(31U);
    msg.setDestination(3729U);
    msg.setDestinationEntity(148U);
    msg.vid = 33984U;
    msg.off_x = 0.383413523549;
    msg.off_y = 0.387101473378;
    msg.off_z = 0.793003405493;

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
    msg.setTimeStamp(0.0470159542668);
    msg.setSource(18433U);
    msg.setSourceEntity(22U);
    msg.setDestination(20216U);
    msg.setDestinationEntity(48U);

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
    msg.setTimeStamp(0.146144036041);
    msg.setSource(37328U);
    msg.setSourceEntity(184U);
    msg.setDestination(41418U);
    msg.setDestinationEntity(96U);

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
    msg.setTimeStamp(0.0630578567448);
    msg.setSource(4998U);
    msg.setSourceEntity(109U);
    msg.setDestination(13173U);
    msg.setDestinationEntity(145U);

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
    msg.setTimeStamp(0.771261292368);
    msg.setSource(10931U);
    msg.setSourceEntity(100U);
    msg.setDestination(41168U);
    msg.setDestinationEntity(16U);
    msg.mid = 21554U;

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
    msg.setTimeStamp(0.773286733718);
    msg.setSource(54372U);
    msg.setSourceEntity(228U);
    msg.setDestination(10417U);
    msg.setDestinationEntity(135U);
    msg.mid = 1835U;

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
    msg.setTimeStamp(0.59784305931);
    msg.setSource(64093U);
    msg.setSourceEntity(82U);
    msg.setDestination(54418U);
    msg.setDestinationEntity(205U);
    msg.mid = 56391U;

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
    msg.setTimeStamp(0.822578787442);
    msg.setSource(222U);
    msg.setSourceEntity(175U);
    msg.setDestination(223U);
    msg.setDestinationEntity(118U);
    msg.state = 72U;
    msg.eta = 22299U;
    msg.info.assign("KSIPCZFJHKWMSLQZIC");

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
    msg.setTimeStamp(0.549089548149);
    msg.setSource(60556U);
    msg.setSourceEntity(252U);
    msg.setDestination(22112U);
    msg.setDestinationEntity(103U);
    msg.state = 240U;
    msg.eta = 28970U;
    msg.info.assign("ZLFMLXXABJIIWKCTTRNRXNGZYTNIOYAGBETVTVZSBUFDBJQXEDFNNQJFEJKSDSVSWUAYEHOMFJNMNNQZGTWKFMZHMIEOSXKUNYFVBEXAVPLEVBRAHVJHZJGGRRFGCDDHCPBWPFCPQPADGBLJOEYFIWMKQZLHUGPLUUKOLXVOPLSQKCCZBQAEDGURCYCX");

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
    msg.setTimeStamp(0.859450807104);
    msg.setSource(10145U);
    msg.setSourceEntity(246U);
    msg.setDestination(40252U);
    msg.setDestinationEntity(205U);
    msg.state = 126U;
    msg.eta = 40483U;
    msg.info.assign("XWMFYQNVGWNPZJMHYYFRHNSFXHJMETBQODIAMZGMBIGAHOFHGSMSIFHTVOSRCOPPXUTQKAIBGWSZEEIYSKXSYLOM");

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
    msg.setTimeStamp(0.0343257616638);
    msg.setSource(56935U);
    msg.setSourceEntity(117U);
    msg.setDestination(11288U);
    msg.setDestinationEntity(93U);
    msg.system = 28785U;
    msg.duration = 34033U;
    msg.speed = 0.330985989958;
    msg.speed_units = 38U;
    msg.x = 0.741635565988;
    msg.y = 0.214476658558;
    msg.z = 0.951850672746;
    msg.z_units = 63U;

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
    msg.setTimeStamp(0.284672550803);
    msg.setSource(17747U);
    msg.setSourceEntity(222U);
    msg.setDestination(51784U);
    msg.setDestinationEntity(49U);
    msg.system = 58120U;
    msg.duration = 19623U;
    msg.speed = 0.753193933117;
    msg.speed_units = 21U;
    msg.x = 0.395126397718;
    msg.y = 0.260304161919;
    msg.z = 0.157946450429;
    msg.z_units = 230U;

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
    msg.setTimeStamp(0.659618487818);
    msg.setSource(773U);
    msg.setSourceEntity(171U);
    msg.setDestination(14008U);
    msg.setDestinationEntity(65U);
    msg.system = 13122U;
    msg.duration = 33472U;
    msg.speed = 0.835098743179;
    msg.speed_units = 188U;
    msg.x = 0.707603229897;
    msg.y = 0.719246171187;
    msg.z = 0.0554103081392;
    msg.z_units = 121U;

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
    msg.setTimeStamp(0.704186075021);
    msg.setSource(58212U);
    msg.setSourceEntity(145U);
    msg.setDestination(10811U);
    msg.setDestinationEntity(232U);
    msg.lat = 0.79735769942;
    msg.lon = 0.566829525881;
    msg.speed = 0.766411410115;
    msg.speed_units = 219U;
    msg.duration = 50127U;
    msg.sys_a = 44048U;
    msg.sys_b = 21431U;
    msg.move_threshold = 0.106697217168;

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
    msg.setTimeStamp(0.491467299969);
    msg.setSource(39162U);
    msg.setSourceEntity(142U);
    msg.setDestination(44149U);
    msg.setDestinationEntity(103U);
    msg.lat = 0.0162036245909;
    msg.lon = 0.343971081958;
    msg.speed = 0.460003758122;
    msg.speed_units = 42U;
    msg.duration = 61256U;
    msg.sys_a = 44554U;
    msg.sys_b = 17714U;
    msg.move_threshold = 0.676692319749;

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
    msg.setTimeStamp(0.0606877238657);
    msg.setSource(57669U);
    msg.setSourceEntity(193U);
    msg.setDestination(7904U);
    msg.setDestinationEntity(32U);
    msg.lat = 0.435471245925;
    msg.lon = 0.543583844406;
    msg.speed = 0.146790728012;
    msg.speed_units = 132U;
    msg.duration = 23210U;
    msg.sys_a = 8877U;
    msg.sys_b = 37010U;
    msg.move_threshold = 0.360604228151;

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
    msg.setTimeStamp(0.945045758057);
    msg.setSource(20495U);
    msg.setSourceEntity(84U);
    msg.setDestination(33342U);
    msg.setDestinationEntity(81U);
    msg.lat = 0.0211257576415;
    msg.lon = 0.789336759362;
    msg.z = 0.675290177634;
    msg.z_units = 27U;
    msg.speed = 0.432184409047;
    msg.speed_units = 225U;
    msg.custom.assign("HYLORHQDXLDDROUQUCZRCHTVTPPGEOLFEASOWIPUWIHKVKCMSIMJQYEWAKWZALCANEJVQGDBRLMAAVIYALKOLBFMQDIGCGIIIKSCQTTHSYSHPXMZQRJBAQLWXUSJTJSTMVHFCGBZBPMRVROCZQUPJRLSJGOUPBNUYATUGNXFEBJPHZFYWDNBPDNNIFFOCYFGNMWDVNEXXESRGOMWXZIXVJYZHQBUGFMYP");

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
    msg.setTimeStamp(0.513315546977);
    msg.setSource(2355U);
    msg.setSourceEntity(125U);
    msg.setDestination(11367U);
    msg.setDestinationEntity(171U);
    msg.lat = 0.00898233766769;
    msg.lon = 0.161261305184;
    msg.z = 0.882904277892;
    msg.z_units = 235U;
    msg.speed = 0.059372906011;
    msg.speed_units = 234U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.555729517989;
    tmp_msg_0.lon = 0.323787545966;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("FXBECFVWZESWNEPBHA");

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
    msg.setTimeStamp(0.431467021917);
    msg.setSource(27930U);
    msg.setSourceEntity(215U);
    msg.setDestination(39707U);
    msg.setDestinationEntity(187U);
    msg.lat = 0.0974096482503;
    msg.lon = 0.568847469833;
    msg.z = 0.326641594897;
    msg.z_units = 23U;
    msg.speed = 0.470127514004;
    msg.speed_units = 108U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.452070134114;
    tmp_msg_0.lon = 0.142407053793;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("NAPWGFZZTMKQQGFJNEXZGYLTTSQQDAGFSMVCOEBSAIRAHNYDJXRFWLQILHTANRFONDWPYZAYLOLZXGGMNZVBOCULJVPYIPWXTUKODHBEBGMVFWDYGRHBERACBKQDVCCNN");

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
    msg.setTimeStamp(0.762995646827);
    msg.setSource(52749U);
    msg.setSourceEntity(107U);
    msg.setDestination(30807U);
    msg.setDestinationEntity(80U);
    msg.lat = 0.316411419832;
    msg.lon = 0.403107888137;

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
    msg.setTimeStamp(0.315782389225);
    msg.setSource(56347U);
    msg.setSourceEntity(109U);
    msg.setDestination(12870U);
    msg.setDestinationEntity(14U);
    msg.lat = 0.182409800893;
    msg.lon = 0.08493895553;

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
    msg.setTimeStamp(0.467499393389);
    msg.setSource(5802U);
    msg.setSourceEntity(80U);
    msg.setDestination(11162U);
    msg.setDestinationEntity(95U);
    msg.lat = 0.348516869869;
    msg.lon = 0.0991626387018;

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
    msg.setTimeStamp(0.21721379036);
    msg.setSource(46828U);
    msg.setSourceEntity(126U);
    msg.setDestination(32624U);
    msg.setDestinationEntity(23U);
    msg.timeout = 23818U;
    msg.lat = 0.516543714933;
    msg.lon = 0.878839618512;
    msg.z = 0.0973408077218;
    msg.z_units = 181U;
    msg.pitch = 0.878192233099;
    msg.amplitude = 0.443794355714;
    msg.duration = 39763U;
    msg.speed = 0.461264545223;
    msg.speed_units = 162U;
    msg.radius = 0.480390594752;
    msg.direction = 72U;
    msg.custom.assign("MBIFMGMLXPGGZTXXAKHIGFSJAGYQIQIGQSKNM");

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
    msg.setTimeStamp(0.690902437062);
    msg.setSource(20422U);
    msg.setSourceEntity(23U);
    msg.setDestination(61858U);
    msg.setDestinationEntity(202U);
    msg.timeout = 65025U;
    msg.lat = 0.812627330122;
    msg.lon = 0.376885311986;
    msg.z = 0.822604674233;
    msg.z_units = 130U;
    msg.pitch = 0.350053877417;
    msg.amplitude = 0.617613797464;
    msg.duration = 22455U;
    msg.speed = 0.00112170407501;
    msg.speed_units = 222U;
    msg.radius = 0.393778868649;
    msg.direction = 106U;
    msg.custom.assign("TQXTYDQLMIENFEVBPTSYCMATLSHBGQMTVHZEOAL");

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
    msg.setTimeStamp(0.595060103037);
    msg.setSource(19971U);
    msg.setSourceEntity(227U);
    msg.setDestination(63870U);
    msg.setDestinationEntity(3U);
    msg.timeout = 54998U;
    msg.lat = 0.143490042249;
    msg.lon = 0.854064675308;
    msg.z = 0.136908854387;
    msg.z_units = 53U;
    msg.pitch = 0.464063663169;
    msg.amplitude = 0.982904402961;
    msg.duration = 32404U;
    msg.speed = 0.884984370576;
    msg.speed_units = 27U;
    msg.radius = 0.0560668891056;
    msg.direction = 93U;
    msg.custom.assign("JKUOCGKOMODCRTJCQDXHWGRFFKEDPIZIJUAJHATYOATVBPCDHRBPYCQDNSNWHUYXITASRRWRGGYIFVGOOIMREIKSSVCXFZFZAPEVQDQJIYAEXWHSBTWVXGTPAAVNVLWPCMOSATTDYNNAXBKBBZUQMLDUCPKLWUEPDFJMEHFHJKOQKNCYLSOXJUZVLXGQBZLPKRWWXHXCYLIIZLNIWZNJZSMVNBTMEFUN");

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
    msg.setTimeStamp(0.137901252792);
    msg.setSource(59480U);
    msg.setSourceEntity(84U);
    msg.setDestination(32128U);
    msg.setDestinationEntity(199U);
    msg.formation_name.assign("CCVWUOPLGPFELVAMOZMDKJKHCDMSITJQYPXUGIROVYHCFZNJGHTKGUISSAKICHFRUQTGYSMOZMARDGMHUQXTBEXAHWWAJYSMOXXRUAWBNAHWLNTKVBVETQNFGDJFLDU");
    msg.reference_frame = 190U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 45412U;
    tmp_msg_0.off_x = 0.779457575704;
    tmp_msg_0.off_y = 0.629804777733;
    tmp_msg_0.off_z = 0.996840413911;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("FURNOPINLQIYHSKVPRXBCSXUYJGCFHWQBGEXJQWPNXMYYMPFNNGTHLOEAORNTVVSZHWOJEOZDXDGWIUVXZETLYUBTQIOUESIJGKHHQFPRKESMQKQOSWVTIZYGZPFLRZOULRPGVIAMNCOGUXWDTUAWFSSEIRJKVLJCNPXDAIBQCMACDCKVXEHMRBDOBFHUYANTRDVWHCTCQJZADBKZRECBJSDLPVMMQFYBJWEAZZYLFKTK");

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
    msg.setTimeStamp(0.472319600221);
    msg.setSource(39883U);
    msg.setSourceEntity(54U);
    msg.setDestination(15329U);
    msg.setDestinationEntity(234U);
    msg.formation_name.assign("CDHBMFOEFTUMEQOPKCNRTJPTGHJLKLODXXXOPNTSLXUTIBWQZUQIUGVICHXPMLRNATEOCRMZYDAKDZCRCBZWPQCWGOFYFJRBSNXFVJTEGAYBMKMZOOSAXEJADTCLRYLTSYDSWUXRSPNFQBPZKWYGVKAPNVVSMNEYKVAEDGJZYWWMLGBUVNLYUFVBWYHACPIIQRJHDGWHKIIFHSZAMFEFDXZHSMOBEUNQBGLNHCOKXAPLKJRGIQVDUI");
    msg.reference_frame = 13U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 1461U;
    tmp_msg_0.off_x = 0.90820364591;
    tmp_msg_0.off_y = 0.793604804582;
    tmp_msg_0.off_z = 0.377047858847;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("QKGUBKAIWEYRMJRMOPXZQDNVZSBBQPSLFKWXWPWJSDXYJXLBDYIHERUAAYMSREQFWUHVVFAKGGZCYHCTLETPPZKOOJZVDUMUMFTAANOSICLLLDVUYHJNMO");

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
    msg.setTimeStamp(0.214141433112);
    msg.setSource(16622U);
    msg.setSourceEntity(116U);
    msg.setDestination(57932U);
    msg.setDestinationEntity(1U);
    msg.formation_name.assign("VGIQDFKRJFJQGUZXSHBJMPCFPUEBPLSNCJVJJTIOOKFVYFCQFRGLLTTYHHKUXLUKMYBRDBINUWLIGRICWCEA");
    msg.reference_frame = 26U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 11525U;
    tmp_msg_0.off_x = 0.848245818597;
    tmp_msg_0.off_y = 0.43871165726;
    tmp_msg_0.off_z = 0.842123606819;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("RSONNWBSJPXKMFDXNSYQMCJPEZYFVKFQCFECLARILJIGPTYBQMDFMWNJSPOVPDDSUAFDNEDBIRMQBTVGTROLKEIEPTLGXRVXWAEBNXJQKQHLVWHZSMOQUNXYRKLXFJNCTYOEYTHRTUVGRAUJITIDJLZ");

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
    msg.setTimeStamp(0.458967746705);
    msg.setSource(31492U);
    msg.setSourceEntity(110U);
    msg.setDestination(746U);
    msg.setDestinationEntity(199U);
    msg.group_name.assign("JVFSGHHMTNDJWJQZBISNMMOZFNILACERBJIPWKOXMDVEXUFGVLTFANGWWPETSCYJWBPYRSBMXPOBTSKCINJGHSOQZCUEUBXQRDSZVGWHAKHMNLLLNKOBFTFIKMXWLHUXQFOCOJXZDRIYKGLVYZUOCRLPRAAJUSRAPEGKRIXATHVSDOERVDVDQZHYKFZDPVQEALEIBYXGUBMTAJUWDQAWUCFQYY");
    msg.formation_name.assign("WUDYSLMTOIIFEDAQHZRRBGJBAZBKIEEKPBMVASGJDHZTMCKOCEWGIJTKTHEYRMUAOARAFLHSOPXGWQFYKYJLNISGQOAREUMLLWZNYRUGUWIEFTLJVBZZKODTEJYCXTSQBRDINAYXFXFBODLTPQXQVLCJGCTPBHNDXMNERFJCVYWTVRRKSLCMMFINKXZBPSKHCAOHWVMVVZQPUUUHAXQSCQDGLWVEZNOUXPHFDBNNJUYPHPVKYINXSCDMZO");
    msg.plan_id.assign("VLFKBSAFPBOVIMNRGTUIGKZYWBIQATZPXZZKLNQRHHWZFEDLDPOESGLJGHJYVHJYZWLWLPXXNASNTXAOMYGUZLTQSAEBSCEBTBNBDQMIYADHSRHMPFODJRBVUSCGPTNRXIECJYNAGWPKRUQCODIESOQQHZEJMOYOEIWAOUMCSRXUZORRBTGAMUBUHVQDQCINV");
    msg.description.assign("RXKDGUQUZZGLJAVGPSVRWYXOCBLDMIJJAGCOWFJWJAYMYNGDGUYYEPNGXHFTFZDHJNCLJFPMDDVIWCUUXABAOIBFQEWQKRLWUIQMECXCLKQHDPMRONCYXMEIUBGWKYBVAFFLUKWSTMAXIDDGPTORQXVPHSWMBXKYVKSPKHNBTLTIRDQNJIXZVBOHEZZVCRHTYZIOI");
    msg.leader_speed = 0.917227880568;
    msg.leader_bank_lim = 0.561679821693;
    msg.pos_sim_err_lim = 0.40334183866;
    msg.pos_sim_err_wrn = 0.175715231907;
    msg.pos_sim_err_timeout = 16684U;
    msg.converg_max = 0.297094550155;
    msg.converg_timeout = 61561U;
    msg.comms_timeout = 1977U;
    msg.turb_lim = 0.26577613236;
    msg.custom.assign("COXBJBHIYBWYCQOEXSNUSUIQJFDZUJOICWAXNRPFJXZRIXWIDKPMHAIZSTKVQJQAMNGRPEYQGTXLEPTDAVHUBMMTSDZVYTEUHOWAEPUYNXEFTXNBYCZWWHLDCDHQFGAXRBKRGORPNWVFRCUQVGAGTJYLRBYPSLLPNUPPBUDOVAGKQ");

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
    msg.setTimeStamp(0.465397970559);
    msg.setSource(48518U);
    msg.setSourceEntity(222U);
    msg.setDestination(48707U);
    msg.setDestinationEntity(44U);
    msg.group_name.assign("TVZGWJEHHIRCMLEXEGMPRIWJATCRBMPHUDWKUAQXUTFIWNBOZUGPZSBYYMOUXOZORSHBRJNVNTAEWSYOFEXBRRGIVWUNGMTYRLZTNFHDQUPNOGKIJKFAMOQBNEHZJSLSPVEJJFDFVBIYJVDQDYKUKSWGCOCISNFHQLGTGXQACZZXXMXKXSYCLTLWYCFDYBVWAQLNDK");
    msg.formation_name.assign("YCWVSLLEXCREHGLCMSAWSNNPFZYPTCMFNPVAGPZTWNNVTLYLMPUTHFXMICBZXGOGHZRZRAQKPBBNKTHFQAIQOQVYITAVPCUYJBJSEDMAKSISNRJGLZEBVKSOESEMRXQUQJBEOQCJIDBMFWRGIDOTDFJQSHFZPUGXWUDIGPSVOHMOQFLUKWIULBWJNJUGBATHIIOZRVXHCERDRMFHDH");
    msg.plan_id.assign("ZPRFEZJVDXPLNNRAVLJ");
    msg.description.assign("WQQZRSPGWCOZWGVBURYCPBJTNMEMJDXXEXEOBJSZYDPINLJVTEMTLLAJMCINWZKXHPBDDNTOIKFJBXFOKVAMMDPCAUXROPOFYSYALHHLFSLDJQKPUQCLRRSWGFPNUCWVLKLZEKDEYYCTXZZQQIENYINZCHUUGQHTSOADWSJIQZONGMAZDFKVBCGOMKTFBSBEGHWIDYXUUYHAHWXUTVEMQFGAKRRNGSNXGHFBVVWTQ");
    msg.leader_speed = 0.587066670305;
    msg.leader_bank_lim = 0.715882262683;
    msg.pos_sim_err_lim = 0.515363092675;
    msg.pos_sim_err_wrn = 0.820997517416;
    msg.pos_sim_err_timeout = 24476U;
    msg.converg_max = 0.576300002871;
    msg.converg_timeout = 20848U;
    msg.comms_timeout = 49312U;
    msg.turb_lim = 0.771344056647;
    msg.custom.assign("AGFBFGEKYOFLMXGLLMUODNJAHEYUKAXARXPCHQSBESWPDSTHYOYFCNUHSBSPYJZYCXKHFGWZJRZVWSRZEFNYIIUHZUYLPMCRKBKJQKVKMZBENWUJLFPLVZTJOBFWONLNDCTVRNUJWIJATWNBIUQSJBKIDCGGTDAZWDUASVZEMGMIXQTEZTPBNCGQRDQLEREPTVBFHPLICQARUPVMXQVMKODXQXIPHROMWGRIVCAWOAHDYLFGCTOVIOYXD");

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
    msg.setTimeStamp(0.519131381857);
    msg.setSource(53150U);
    msg.setSourceEntity(13U);
    msg.setDestination(25922U);
    msg.setDestinationEntity(200U);
    msg.group_name.assign("YTELCFNJIXPPKJHETMUIQGYIKPAVKDLVISVCMBBJLFNXLWKLTVFRCPMZWXPQZKQLEBOARBTWUHRFRXFICMAWEOWDZLOGXOOURMNMCBSLWMDCSNVPVXRAZGGQPNUTKISDRJXV");
    msg.formation_name.assign("OUHPOYAYPLAPUGOBKDZFBUBENFPDZXGLIKAVTQFEZBVBRBTYQXIJFHTNWNHXDDCLQDTKYJQJJWNHZNHAWZHNHBUXKCIVCCFVWMKVUEYCRQWTACAYISHFDDTSNSMAVGCFTLZDRKOJGSSFGLBMS");
    msg.plan_id.assign("LGFZAMFHHQUKEVNGODCCBRARFCUZNDHICOEUJHTUMDJDCRNTYWBBFULWENYVNPTQCPMYEQNJKFEEIZMYGGWIUXUKYCPAIESILPMKSDNYGQQXRIEVVRVXLKHZL");
    msg.description.assign("PCCIBMLOBKRLLTPFKLKRAEZTMTXY");
    msg.leader_speed = 0.117592755126;
    msg.leader_bank_lim = 0.508502077004;
    msg.pos_sim_err_lim = 0.246541311012;
    msg.pos_sim_err_wrn = 0.451173279702;
    msg.pos_sim_err_timeout = 33618U;
    msg.converg_max = 0.83983081654;
    msg.converg_timeout = 18450U;
    msg.comms_timeout = 17127U;
    msg.turb_lim = 0.254442724259;
    msg.custom.assign("VYJZLCGICEGLQTTDLNCJASUULUNAIRDTISIJMXXTDEZBXRDKZBDMGSBXTHKRASOQFPYPIQYBPGTMLLUEELFMUPRMVSDOCFCKNEXQHCGPKJOAIDYZIWXVMHUGRSLGJZOOAUZVKPOEYORPZBSNHWFYKBDVWKAAZQFFOJWHSCDRN");

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
    msg.setTimeStamp(0.00566442008835);
    msg.setSource(44440U);
    msg.setSourceEntity(154U);
    msg.setDestination(53131U);
    msg.setDestinationEntity(107U);
    msg.control_src = 46156U;
    msg.control_ent = 154U;
    msg.timeout = 0.42945398264;
    msg.loiter_radius = 0.275424280504;
    msg.altitude_interval = 0.465559745934;

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
    msg.setTimeStamp(0.173154293749);
    msg.setSource(39088U);
    msg.setSourceEntity(138U);
    msg.setDestination(44652U);
    msg.setDestinationEntity(247U);
    msg.control_src = 8884U;
    msg.control_ent = 226U;
    msg.timeout = 0.862737001724;
    msg.loiter_radius = 0.348089525447;
    msg.altitude_interval = 0.508721181412;

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
    msg.setTimeStamp(0.768935401823);
    msg.setSource(39874U);
    msg.setSourceEntity(132U);
    msg.setDestination(41334U);
    msg.setDestinationEntity(117U);
    msg.control_src = 43256U;
    msg.control_ent = 154U;
    msg.timeout = 0.985524034415;
    msg.loiter_radius = 0.456151654664;
    msg.altitude_interval = 0.761141708213;

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
    msg.setTimeStamp(0.23580806037);
    msg.setSource(35656U);
    msg.setSourceEntity(234U);
    msg.setDestination(29895U);
    msg.setDestinationEntity(168U);
    msg.flags = 110U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.104943172813;
    tmp_msg_0.speed_units = 28U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.232967084759;
    tmp_msg_1.z_units = 93U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.403283272527;
    msg.lon = 0.927452945172;
    msg.radius = 0.830364366244;

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
    msg.setTimeStamp(0.0606982070089);
    msg.setSource(34617U);
    msg.setSourceEntity(104U);
    msg.setDestination(27924U);
    msg.setDestinationEntity(111U);
    msg.flags = 148U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.189875557038;
    tmp_msg_0.speed_units = 66U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.46038334858;
    tmp_msg_1.z_units = 176U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.427835528748;
    msg.lon = 0.701164118749;
    msg.radius = 0.592994358564;

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
    msg.setTimeStamp(0.596866528036);
    msg.setSource(13084U);
    msg.setSourceEntity(220U);
    msg.setDestination(52038U);
    msg.setDestinationEntity(95U);
    msg.flags = 176U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.899443019434;
    tmp_msg_0.speed_units = 208U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.805980815072;
    tmp_msg_1.z_units = 13U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.725122956246;
    msg.lon = 0.125810973624;
    msg.radius = 0.421699513682;

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
    msg.setTimeStamp(0.433796913553);
    msg.setSource(1436U);
    msg.setSourceEntity(209U);
    msg.setDestination(13187U);
    msg.setDestinationEntity(117U);
    msg.control_src = 40490U;
    msg.control_ent = 108U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 31U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.371934629959;
    tmp_tmp_msg_0_0.speed_units = 238U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.432242004143;
    tmp_tmp_msg_0_1.z_units = 187U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.811240566738;
    tmp_msg_0.lon = 0.327872005441;
    tmp_msg_0.radius = 0.456789526737;
    msg.reference.set(tmp_msg_0);
    msg.state = 199U;
    msg.proximity = 201U;

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
    msg.setTimeStamp(0.797440920465);
    msg.setSource(42926U);
    msg.setSourceEntity(143U);
    msg.setDestination(57099U);
    msg.setDestinationEntity(98U);
    msg.control_src = 33924U;
    msg.control_ent = 219U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 156U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.698146574681;
    tmp_tmp_msg_0_0.speed_units = 235U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.467114056124;
    tmp_tmp_msg_0_1.z_units = 75U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.619517974183;
    tmp_msg_0.lon = 0.871657600437;
    tmp_msg_0.radius = 0.448236819701;
    msg.reference.set(tmp_msg_0);
    msg.state = 224U;
    msg.proximity = 204U;

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
    msg.setTimeStamp(0.425311118836);
    msg.setSource(9389U);
    msg.setSourceEntity(24U);
    msg.setDestination(62222U);
    msg.setDestinationEntity(40U);
    msg.control_src = 32858U;
    msg.control_ent = 248U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 215U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.449568769722;
    tmp_tmp_msg_0_0.speed_units = 17U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.0204712109862;
    tmp_tmp_msg_0_1.z_units = 137U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.0860987626386;
    tmp_msg_0.lon = 0.248391685593;
    tmp_msg_0.radius = 0.748573317255;
    msg.reference.set(tmp_msg_0);
    msg.state = 158U;
    msg.proximity = 139U;

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
    msg.setTimeStamp(0.754016484396);
    msg.setSource(9913U);
    msg.setSourceEntity(170U);
    msg.setDestination(4445U);
    msg.setDestinationEntity(105U);
    msg.ax_cmd = 0.829215198462;
    msg.ay_cmd = 0.303171595187;
    msg.az_cmd = 0.219035805208;
    msg.ax_des = 0.712405226332;
    msg.ay_des = 0.165804756748;
    msg.az_des = 0.570161747738;
    msg.virt_err_x = 0.872663122494;
    msg.virt_err_y = 0.668742895345;
    msg.virt_err_z = 0.373889729778;
    msg.surf_fdbk_x = 0.822718375804;
    msg.surf_fdbk_y = 0.529352733296;
    msg.surf_fdbk_z = 0.975724107317;
    msg.surf_unkn_x = 0.303623318195;
    msg.surf_unkn_y = 0.514970474487;
    msg.surf_unkn_z = 0.392675840905;
    msg.ss_x = 0.555866471226;
    msg.ss_y = 0.0973892355105;
    msg.ss_z = 0.524777862971;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("JOWPPWUTSFTZOCQQCHEMRBOWFXZFDD");
    tmp_msg_0.dist = 0.411234617865;
    tmp_msg_0.err = 0.453385336268;
    tmp_msg_0.ctrl_imp = 0.635437052312;
    tmp_msg_0.rel_dir_x = 0.832792854286;
    tmp_msg_0.rel_dir_y = 0.698460439957;
    tmp_msg_0.rel_dir_z = 0.870812167219;
    tmp_msg_0.err_x = 0.677608002477;
    tmp_msg_0.err_y = 0.000524233909438;
    tmp_msg_0.err_z = 0.0619068019785;
    tmp_msg_0.rf_err_x = 0.792176812912;
    tmp_msg_0.rf_err_y = 0.278871222044;
    tmp_msg_0.rf_err_z = 0.679146341257;
    tmp_msg_0.rf_err_vx = 0.317612479369;
    tmp_msg_0.rf_err_vy = 0.260199564595;
    tmp_msg_0.rf_err_vz = 0.195731801766;
    tmp_msg_0.ss_x = 0.494690737103;
    tmp_msg_0.ss_y = 0.771824753285;
    tmp_msg_0.ss_z = 0.784804220609;
    tmp_msg_0.virt_err_x = 0.46266760708;
    tmp_msg_0.virt_err_y = 0.0485985692278;
    tmp_msg_0.virt_err_z = 0.899198615653;
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
    msg.setTimeStamp(0.633068294734);
    msg.setSource(51670U);
    msg.setSourceEntity(109U);
    msg.setDestination(22397U);
    msg.setDestinationEntity(79U);
    msg.ax_cmd = 0.501922877668;
    msg.ay_cmd = 0.694088710135;
    msg.az_cmd = 0.485206813121;
    msg.ax_des = 0.364269623802;
    msg.ay_des = 0.029022456622;
    msg.az_des = 0.0635258093734;
    msg.virt_err_x = 0.996894933161;
    msg.virt_err_y = 0.825577318202;
    msg.virt_err_z = 0.125969132591;
    msg.surf_fdbk_x = 0.0915887506704;
    msg.surf_fdbk_y = 0.727410203983;
    msg.surf_fdbk_z = 0.713971923419;
    msg.surf_unkn_x = 0.852369275935;
    msg.surf_unkn_y = 0.298463344686;
    msg.surf_unkn_z = 0.0881681617331;
    msg.ss_x = 0.602858365788;
    msg.ss_y = 0.0867442345975;
    msg.ss_z = 0.884158301333;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("EHXEWQQEEMPGMXBYHRYZTRVDTDSTOSGBMHFPHSMYIVGPOJGJITSFAVAJKEHG");
    tmp_msg_0.dist = 0.264907697543;
    tmp_msg_0.err = 0.253072818175;
    tmp_msg_0.ctrl_imp = 0.613844719174;
    tmp_msg_0.rel_dir_x = 0.482018118672;
    tmp_msg_0.rel_dir_y = 0.428955701537;
    tmp_msg_0.rel_dir_z = 0.428325875458;
    tmp_msg_0.err_x = 0.521898360566;
    tmp_msg_0.err_y = 0.440684529555;
    tmp_msg_0.err_z = 0.0118601509267;
    tmp_msg_0.rf_err_x = 0.701467627466;
    tmp_msg_0.rf_err_y = 0.877790428583;
    tmp_msg_0.rf_err_z = 0.392538098895;
    tmp_msg_0.rf_err_vx = 0.364455982765;
    tmp_msg_0.rf_err_vy = 0.322164092528;
    tmp_msg_0.rf_err_vz = 0.0422730201055;
    tmp_msg_0.ss_x = 0.17130119914;
    tmp_msg_0.ss_y = 0.810618661776;
    tmp_msg_0.ss_z = 0.16293507563;
    tmp_msg_0.virt_err_x = 0.608257823318;
    tmp_msg_0.virt_err_y = 0.520208470882;
    tmp_msg_0.virt_err_z = 0.498604567956;
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
    msg.setTimeStamp(0.49309588751);
    msg.setSource(51569U);
    msg.setSourceEntity(196U);
    msg.setDestination(18887U);
    msg.setDestinationEntity(245U);
    msg.ax_cmd = 0.0347843738109;
    msg.ay_cmd = 0.901105940107;
    msg.az_cmd = 0.417499201132;
    msg.ax_des = 0.290283466813;
    msg.ay_des = 0.236879818566;
    msg.az_des = 0.0978638600312;
    msg.virt_err_x = 0.952016845286;
    msg.virt_err_y = 0.162462483201;
    msg.virt_err_z = 0.602235575273;
    msg.surf_fdbk_x = 0.282246343793;
    msg.surf_fdbk_y = 0.534837420631;
    msg.surf_fdbk_z = 0.116066237677;
    msg.surf_unkn_x = 0.753080022004;
    msg.surf_unkn_y = 0.317058062699;
    msg.surf_unkn_z = 0.688987111817;
    msg.ss_x = 0.589886014116;
    msg.ss_y = 0.766505695925;
    msg.ss_z = 0.196036261504;

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
    msg.setTimeStamp(0.253484820289);
    msg.setSource(48753U);
    msg.setSourceEntity(169U);
    msg.setDestination(30376U);
    msg.setDestinationEntity(43U);
    msg.s_id.assign("UTUBTHSIZAKHNMEWTQGFOIHXBYZFXUQCEBSKTMZDPBOVOUESWRWHWYLRQDDYIHSJVIAEUQRGXGDLGRVRFWJBUYKLCTMVOSWEOYCHY");
    msg.dist = 0.853489791853;
    msg.err = 0.15313226502;
    msg.ctrl_imp = 0.116818953346;
    msg.rel_dir_x = 0.473991118076;
    msg.rel_dir_y = 0.384010939108;
    msg.rel_dir_z = 0.866987612929;
    msg.err_x = 0.79530037959;
    msg.err_y = 0.335882102546;
    msg.err_z = 0.90874242119;
    msg.rf_err_x = 0.227323932869;
    msg.rf_err_y = 0.302596515704;
    msg.rf_err_z = 0.593402771408;
    msg.rf_err_vx = 0.868546021723;
    msg.rf_err_vy = 0.773673667578;
    msg.rf_err_vz = 0.148618377356;
    msg.ss_x = 0.944459710592;
    msg.ss_y = 0.118984782045;
    msg.ss_z = 0.548262100899;
    msg.virt_err_x = 0.665218833236;
    msg.virt_err_y = 0.757773047662;
    msg.virt_err_z = 0.540388573437;

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
    msg.setTimeStamp(0.418137555712);
    msg.setSource(46632U);
    msg.setSourceEntity(37U);
    msg.setDestination(54548U);
    msg.setDestinationEntity(230U);
    msg.s_id.assign("BSQHMPIVFLIOVWBDRDHSJMKQ");
    msg.dist = 0.587160069716;
    msg.err = 0.24689883766;
    msg.ctrl_imp = 0.451311750973;
    msg.rel_dir_x = 0.736863830591;
    msg.rel_dir_y = 0.864348707041;
    msg.rel_dir_z = 0.0710554878882;
    msg.err_x = 0.28798098709;
    msg.err_y = 0.604135754474;
    msg.err_z = 0.218225355569;
    msg.rf_err_x = 0.869658344169;
    msg.rf_err_y = 0.319638300345;
    msg.rf_err_z = 0.741614063134;
    msg.rf_err_vx = 0.69378244905;
    msg.rf_err_vy = 0.825121183461;
    msg.rf_err_vz = 0.895591381069;
    msg.ss_x = 0.320335123929;
    msg.ss_y = 0.453284375756;
    msg.ss_z = 0.893972122449;
    msg.virt_err_x = 0.356508185026;
    msg.virt_err_y = 0.941968684027;
    msg.virt_err_z = 0.85707908708;

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
    msg.setTimeStamp(0.216273082335);
    msg.setSource(31672U);
    msg.setSourceEntity(161U);
    msg.setDestination(38582U);
    msg.setDestinationEntity(104U);
    msg.s_id.assign("WKUTMAAHCOMEZJRQZDVJIMTHPNRHLKRQOOBZXYELZNLDANPIIE");
    msg.dist = 0.241120456493;
    msg.err = 0.92914313851;
    msg.ctrl_imp = 0.704702442811;
    msg.rel_dir_x = 0.267448821066;
    msg.rel_dir_y = 0.66169555821;
    msg.rel_dir_z = 0.668269843299;
    msg.err_x = 0.256802810366;
    msg.err_y = 0.14225263624;
    msg.err_z = 0.891985791401;
    msg.rf_err_x = 0.211375374108;
    msg.rf_err_y = 0.598078080352;
    msg.rf_err_z = 0.947303366492;
    msg.rf_err_vx = 0.174352392026;
    msg.rf_err_vy = 0.931545472777;
    msg.rf_err_vz = 0.921212450744;
    msg.ss_x = 0.172045740549;
    msg.ss_y = 0.15592138228;
    msg.ss_z = 0.177624115353;
    msg.virt_err_x = 0.348426922687;
    msg.virt_err_y = 0.312541980162;
    msg.virt_err_z = 0.794226263232;

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
    msg.setTimeStamp(0.760592731409);
    msg.setSource(12573U);
    msg.setSourceEntity(201U);
    msg.setDestination(22290U);
    msg.setDestinationEntity(183U);
    msg.timeout = 583U;
    msg.rpm = 0.111540448284;
    msg.direction = 192U;
    msg.custom.assign("XGTDUASTQAZGLNJFKEZCVLMIRBRMLSQVJNGWIIVPRNCGFBDZGUIXLKNQANUXIXZCBQAJXVWWNQIDQAUTYRZWKUOQSYHAHLSOA");

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
    msg.setTimeStamp(0.0705686726519);
    msg.setSource(55079U);
    msg.setSourceEntity(81U);
    msg.setDestination(11020U);
    msg.setDestinationEntity(121U);
    msg.timeout = 4884U;
    msg.rpm = 0.670312877293;
    msg.direction = 175U;
    msg.custom.assign("SYZWYZDKABFXHAQGUDSYNPBRGDQOYXWZPGVTIQXCZOMJHSMEBNIKCFFGODGARCCZTXBALEDDQUBJWFWMMPEXJBSEQYNKWTFGEMDJEKURSMTLKONLOOOMSFHAEQKHWIZYIGCJGHWBFPUNAOCJTOTRKJFAURMHQRLRFJHUUFBLLULVYCVLSEQJCIXYXVPMHT");

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
    msg.setTimeStamp(0.170216550151);
    msg.setSource(45450U);
    msg.setSourceEntity(212U);
    msg.setDestination(42479U);
    msg.setDestinationEntity(124U);
    msg.timeout = 52179U;
    msg.rpm = 0.490036624105;
    msg.direction = 71U;
    msg.custom.assign("DGGXAYBSZOPKUIZWRIGFEQWHNPNCVYVQZWSUAHEROSXJPCBPJJHKWCUTRZIKCHPQBVWMLXISDPBVQXJCILNLPCWAXMYPMOKZSEJKMMGCJCGJOHSTMWMIFYGBFBORATTLWFBEJQEPGTOYGDJXRTFNFZLKNMTXGLLQDCOHITATLDYKIEWQUNKSQRIKHRNENMWOTZAHBDSLBZOZVIUQBZVVXRYSDCFU");

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
    msg.setTimeStamp(0.77346926987);
    msg.setSource(53876U);
    msg.setSourceEntity(181U);
    msg.setDestination(8136U);
    msg.setDestinationEntity(215U);
    msg.formation_name.assign("GUATEKYGLOQBETGJSCFEZAXPEGAIYKQCMVFXPWAQTSSMIVRWHPXBZCYOGZUOFHOWFTZWWNNUHJBSCZODSCBIYKUNSJOZBDJZHORMGLKORZJQUBBAVWPXKWCFRMDENQZAPHNASJWNHNQSLIXOECBYQFRVTWVMRION");
    msg.type = 57U;
    msg.op = 217U;
    msg.group_name.assign("PGRGRSVFWKXECYNQJIBZMHUXRNEUPZJIUUBOSQDIHHIKNOGKSABMHLHBZYPLMVLPDXJKMMTSTJQXIEFWLWBDLVNTOWTLUDWIKTQZGAQKLYWQCMTEHPCEAHTRZOOWGVLXOSFYAVBDQHYJYIRPWMCDJEEVIXEAWUKGCGNACUHNXFSJRBFBSIRPYRNOLDINOOXLVKRYZCRCAPAEKUNMUOYKVAWVXVJQFEZ");
    msg.plan_id.assign("JQORAAJSRXRROBNPLZWEGPWE");
    msg.description.assign("VFLGGFQCAVMGEALHJPUPMYMIMTOQKSUNARSHMMGGBOVQDZOOKINFJBNSUWVJYDAPIMUHDPGYZXCLCOPOULDKWFXSYWDQJHTZJEWWWJHN");
    msg.reference_frame = 201U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 53984U;
    tmp_msg_0.off_x = 0.596118631478;
    tmp_msg_0.off_y = 0.296786831383;
    tmp_msg_0.off_z = 0.0376833956952;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.409833548944;
    msg.leader_speed_min = 0.321982908901;
    msg.leader_speed_max = 0.894657028103;
    msg.leader_alt_min = 0.0611580486923;
    msg.leader_alt_max = 0.202868814195;
    msg.pos_sim_err_lim = 0.897206172906;
    msg.pos_sim_err_wrn = 0.657583322651;
    msg.pos_sim_err_timeout = 35124U;
    msg.converg_max = 0.867405784371;
    msg.converg_timeout = 41107U;
    msg.comms_timeout = 44952U;
    msg.turb_lim = 0.15981917138;
    msg.custom.assign("EHBVCZUPWFUDHCCUMRKZICJEKPXZATYTYVOPPBXEGRONQMNPUTAIAMJUDGQEAVYZVNPSTNQCSHFOOMRBCXKUXTDKIDAOOHSNJDNYHBBIHZWFGTFQQHKGDKSXIYXLIXFFBIAJGLKJZZGHMMLFCTYWPWOYUYDGSBUFHEQLRMSJARTMGQOLMYVRXIZCPPLZUVCUWJGBSMJFVBIWVSNORLENVEDHQRQDZWNASEXKLKRA");

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
    msg.setTimeStamp(0.673219490652);
    msg.setSource(49389U);
    msg.setSourceEntity(174U);
    msg.setDestination(6982U);
    msg.setDestinationEntity(215U);
    msg.formation_name.assign("WPKPRKZRXKWQCWVDCHUAYEBEQWGYVBGDWHHLPMVJLCXRLDYYBZUZYTMGXEONJOAOTJIWVEXSODZXEYFAHJYQUNCYYTARPRHMBCFQOPJWTLAHZBPCFWHTMO");
    msg.type = 238U;
    msg.op = 209U;
    msg.group_name.assign("VBTNRMUSTSYDTRVIRYNRHCEPLEETRVRWAOPXABGOVYFWJGORUYLCQKCGIZJIITSJIUNONYPYPXJVDTBXEWOAWHOXQXKZFIJVUVPJNSJLMVDHKJRMGCHUBXQMNEBFPDCYSGWFMUHGKEHMENZQPHAYBZTBIMNZWKUGLOFIQXOCETSCLBLTVJUEWDAMQVRLYDDSHOSWMSPJQSGHQPXQG");
    msg.plan_id.assign("ZRCGSSBFYAMJWMDTNICGNEDFPTMLJYEPAXHMHFOOWGRKJODOLPRDXJFIBHLAXKISDXEFFRCCCSMTKLIISAZYWREMCUHXTKVOTZKPUCQOLNIN");
    msg.description.assign("DQBDEVFQLLKQFOYBJQNBEACBSIFQNIJVHGMQISYBPZRIUAAARESOXIMWZPTRYHIKILJDYJVGDATTXUQMCOCAEHFWHRXSNDVKK");
    msg.reference_frame = 91U;
    msg.leader_bank_lim = 0.00567820653356;
    msg.leader_speed_min = 0.487241631222;
    msg.leader_speed_max = 0.0853246651156;
    msg.leader_alt_min = 0.912207666654;
    msg.leader_alt_max = 0.00756947990813;
    msg.pos_sim_err_lim = 0.319417534489;
    msg.pos_sim_err_wrn = 0.670862977935;
    msg.pos_sim_err_timeout = 39648U;
    msg.converg_max = 0.618361817957;
    msg.converg_timeout = 32075U;
    msg.comms_timeout = 12076U;
    msg.turb_lim = 0.331266249817;
    msg.custom.assign("VTCADQFBGMJXPGFKXIIUEVITLBYWMORMKGYCTKOXZJFXPEARWCTUGVLYJNRZAFOJJMGNWYGVHLYNCFUHHDQIAOHLZKBEWLDOZSUVKXAHXAQIECOXBZEPYBMBBBOEZJFHBAQGCGSRRRWFVNQDXOGRARKJLQHLWILZNSJDPUVNVYLCQQINTIJSPITPTMHUZWMMQXSVSIUPOCAHKWNBZLKKWE");

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
    msg.setTimeStamp(0.822093715039);
    msg.setSource(44122U);
    msg.setSourceEntity(161U);
    msg.setDestination(499U);
    msg.setDestinationEntity(174U);
    msg.formation_name.assign("PVEFQAEJMGHSBSAUIWJFHWSYWXZWFINIKHYXXZVUUOJKEPAXTNSNJDFCXKTADDAINUYZMJGSJZZFDCE");
    msg.type = 107U;
    msg.op = 200U;
    msg.group_name.assign("UKQEFBMJOFNIBTBAOMNVKCVEAPNRFAUNVMECZULUWWAWBYKLRZHJDEYKPXMFIEOKHENYAMOKFTPKUMDQIQFNLDHJHWBVEOTFGBOXHTPVYJEW");
    msg.plan_id.assign("OLZLHJWHREVLKPJLZEDUIPZOTDRWWDHVNEWTZAVOWVGIWHLOTMPYLWMQRCYBNGXONLFXOWKQIGKBJERJRPPGRKASUIATYZXFAFNDNOBYMOHLERIUAPBHF");
    msg.description.assign("JGXJDOAHYNDPTOLVIODFSPOLLBFXWYJCEPAZTTCZIFZNOIYXLBKWXUOQCCRPLYSBYFZRKKCTXGQNNOMHHVHDPUYQOISAIKTLZQSHRPSKMAREXMUIBJVSBFUWNULIZPQIXWKAAXUHGT");
    msg.reference_frame = 101U;
    msg.leader_bank_lim = 0.549705536354;
    msg.leader_speed_min = 0.304855308879;
    msg.leader_speed_max = 0.289777117834;
    msg.leader_alt_min = 0.573545851552;
    msg.leader_alt_max = 0.289375358901;
    msg.pos_sim_err_lim = 0.858686140284;
    msg.pos_sim_err_wrn = 0.85374257737;
    msg.pos_sim_err_timeout = 43365U;
    msg.converg_max = 0.919780165716;
    msg.converg_timeout = 30361U;
    msg.comms_timeout = 27645U;
    msg.turb_lim = 0.247225930552;
    msg.custom.assign("VVRXMJSSTUKPDCUIGMWIXPLQHWVZHQKHGULJDSREYDLISYVMHJSSEKCZEGZKPRPIGJHZEBUNLLIEOFDGQVTRKGSFQTFEHAMEAXNVHLCNORBURAGFUOIYIZBOXB");

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
    msg.setTimeStamp(0.532953229211);
    msg.setSource(51057U);
    msg.setSourceEntity(158U);
    msg.setDestination(10251U);
    msg.setDestinationEntity(100U);
    msg.timeout = 48428U;
    msg.lat = 0.960524334692;
    msg.lon = 0.0143602644398;
    msg.z = 0.576860261921;
    msg.z_units = 37U;
    msg.speed = 0.152130017396;
    msg.speed_units = 188U;
    msg.custom.assign("PTJXFBSVPETHSQWUIVTURLNJJSTEUUPKSEYPZDETMWVHOAAUIIOZTYTMYOSGNVBQVMNHKWVXCNMXXBWBIVQECGWJS");

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
    msg.setTimeStamp(0.815264955734);
    msg.setSource(29660U);
    msg.setSourceEntity(124U);
    msg.setDestination(24102U);
    msg.setDestinationEntity(80U);
    msg.timeout = 5141U;
    msg.lat = 0.724873176119;
    msg.lon = 0.873646381223;
    msg.z = 0.808903186082;
    msg.z_units = 39U;
    msg.speed = 0.202960516662;
    msg.speed_units = 104U;
    msg.custom.assign("VLSAKPYGZZYWJBRYEKTVNQKDEEKXPHDCUIGNJNWUIUNABSVFIFREDJDYYAEXHOZNRPQSRLMUWARGMWHEUBGHOFCTZJVCJLIUIFRIVQFJZDBLTSATGXBBCLXTVODHASBKWIMU");

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
    msg.setTimeStamp(0.962432004184);
    msg.setSource(38717U);
    msg.setSourceEntity(83U);
    msg.setDestination(36165U);
    msg.setDestinationEntity(99U);
    msg.timeout = 28157U;
    msg.lat = 0.391752504727;
    msg.lon = 0.718968996959;
    msg.z = 0.285642785043;
    msg.z_units = 52U;
    msg.speed = 0.0956166108614;
    msg.speed_units = 137U;
    msg.custom.assign("EPKYCTTQIXLHWZHVYYTSPIJYKAMXWQKRMJRJMFAJHZFDCKHIBJADFZHMFAUTCPGOLOEKWEVLUGIINCUATRQXPPUBXNNUQBLOOVJMEZWRRZXIWDUSKLTKGWNAWBKSNCTQWPJNLEOXLDUTYZEKOQJZKPVGSWHICBODGCMGJBRRLYMZSEPNVPDGIOE");

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
    msg.setTimeStamp(0.706213849482);
    msg.setSource(16930U);
    msg.setSourceEntity(111U);
    msg.setDestination(63939U);
    msg.setDestinationEntity(206U);
    msg.timeout = 16353U;
    msg.lat = 0.551798150521;
    msg.lon = 0.778070402221;
    msg.z = 0.28149623578;
    msg.z_units = 189U;
    msg.speed = 0.255034186354;
    msg.speed_units = 209U;
    msg.custom.assign("EVVUQKSZZPVGJCZIGNBAVDJOJSYPZJFUDYTHGYWKLYDTZWKAUBIYULRLQJUFMLMEQIPXXYFEDAYAARKQLQYMAAIJMSSCPLLHCNDQWZMDUXBDBOPW");

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
    msg.setTimeStamp(0.345092731043);
    msg.setSource(19326U);
    msg.setSourceEntity(181U);
    msg.setDestination(2253U);
    msg.setDestinationEntity(7U);
    msg.timeout = 35059U;
    msg.lat = 0.402706200064;
    msg.lon = 0.865670032114;
    msg.z = 0.930667666674;
    msg.z_units = 142U;
    msg.speed = 0.115666522089;
    msg.speed_units = 80U;
    msg.custom.assign("ABXXKALGMWXKHOSHXDUIUMNJKKQBNHITTKQILICHTMQHZOYQUGEENBNNCWJHVIIWOUCRUVFWPAPZJLZUAZSXRNZONRVEAKNMEGLTVKPVZJZF");

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
    msg.setTimeStamp(0.00798803046077);
    msg.setSource(9385U);
    msg.setSourceEntity(31U);
    msg.setDestination(6381U);
    msg.setDestinationEntity(151U);
    msg.timeout = 13082U;
    msg.lat = 0.413702258116;
    msg.lon = 0.450124687952;
    msg.z = 0.604550660317;
    msg.z_units = 66U;
    msg.speed = 0.093800951715;
    msg.speed_units = 238U;
    msg.custom.assign("CJRFKTLLZVJENQMLJBMXQUCCTTSLFURXFVYZLMFHIRFTQZPRWSFBWODJABJEBSIBVZZVPWQHETCKOBACRIYQUDIBDASHECMJXGQMTZKDSAPUPZWKWDGNXMEDOXHPTYWJBWNGPYKLEETCWOOOEFNHOCHOETAYVSSJKQOMNO");

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
    msg.setTimeStamp(0.774814615801);
    msg.setSource(15457U);
    msg.setSourceEntity(140U);
    msg.setDestination(22984U);
    msg.setDestinationEntity(147U);
    msg.arrival_time = 0.384312104366;
    msg.lat = 0.410071295996;
    msg.lon = 0.381313797649;
    msg.z = 0.750178505784;
    msg.z_units = 249U;
    msg.travel_z = 0.224584915708;
    msg.travel_z_units = 131U;
    msg.delayed = 211U;

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
    msg.setTimeStamp(0.150175220846);
    msg.setSource(5875U);
    msg.setSourceEntity(130U);
    msg.setDestination(39531U);
    msg.setDestinationEntity(83U);
    msg.arrival_time = 0.183203820695;
    msg.lat = 0.398357948378;
    msg.lon = 0.162736404031;
    msg.z = 0.883955637671;
    msg.z_units = 220U;
    msg.travel_z = 0.136461760636;
    msg.travel_z_units = 64U;
    msg.delayed = 238U;

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
    msg.setTimeStamp(0.397206443913);
    msg.setSource(287U);
    msg.setSourceEntity(163U);
    msg.setDestination(5133U);
    msg.setDestinationEntity(225U);
    msg.arrival_time = 0.694717787617;
    msg.lat = 0.395482768516;
    msg.lon = 0.528933432587;
    msg.z = 0.565899663257;
    msg.z_units = 138U;
    msg.travel_z = 0.518701509181;
    msg.travel_z_units = 157U;
    msg.delayed = 70U;

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
    msg.setTimeStamp(0.771756043648);
    msg.setSource(24093U);
    msg.setSourceEntity(37U);
    msg.setDestination(33568U);
    msg.setDestinationEntity(247U);
    msg.lat = 0.541134131033;
    msg.lon = 0.771934882774;
    msg.z = 0.920067869919;
    msg.z_units = 127U;
    msg.speed = 0.939061959372;
    msg.speed_units = 236U;
    msg.bearing = 0.940422213694;
    msg.cross_angle = 0.131760807558;
    msg.width = 0.18267552327;
    msg.length = 0.763164011002;
    msg.coff = 182U;
    msg.angaperture = 0.301943979638;
    msg.range = 42535U;
    msg.overlap = 222U;
    msg.flags = 228U;
    msg.custom.assign("FNLGEDDTLLJLZADEJZOUNWRKJOHTAYXNNPLWFYQVABAUSFCSFYJXEJUHITOYXLYHHIRCBXZEAZVBZGRJWTFTVTHYOMKVXKHUFNJIVCMMDZUUOGKTUJKWYIWGCKRCIVQSORKESHQOEAWVPCWRPLIPHQUQCSBHDGTMFMDWLFCXNISUPEQHIKZRMZNBENNAZBQQMXBSWOARGAYKQJIDGXMEVBBFPRTGCPRZYSDOVPQMS");

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
    msg.setTimeStamp(0.466718959277);
    msg.setSource(55673U);
    msg.setSourceEntity(107U);
    msg.setDestination(42317U);
    msg.setDestinationEntity(147U);
    msg.lat = 0.53681520468;
    msg.lon = 0.830973403679;
    msg.z = 0.667654160995;
    msg.z_units = 28U;
    msg.speed = 0.478311264915;
    msg.speed_units = 76U;
    msg.bearing = 0.434948014395;
    msg.cross_angle = 0.325981875009;
    msg.width = 0.192355068549;
    msg.length = 0.605475689252;
    msg.coff = 73U;
    msg.angaperture = 0.884876627456;
    msg.range = 27612U;
    msg.overlap = 227U;
    msg.flags = 123U;
    msg.custom.assign("AHCWYMRGTLSCOAFEFKZCGUJNVEHPXUTALDDRJFKXSMFGFRHSHJQCEXMJTOXBYBCRYKWTDLWSZVEDA");

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
    msg.setTimeStamp(0.911348854765);
    msg.setSource(52171U);
    msg.setSourceEntity(122U);
    msg.setDestination(59785U);
    msg.setDestinationEntity(245U);
    msg.lat = 0.173265978521;
    msg.lon = 0.0564527937437;
    msg.z = 0.199233771724;
    msg.z_units = 191U;
    msg.speed = 0.162993367474;
    msg.speed_units = 120U;
    msg.bearing = 0.855696365422;
    msg.cross_angle = 0.266775755535;
    msg.width = 0.088582646475;
    msg.length = 0.502053634819;
    msg.coff = 211U;
    msg.angaperture = 0.435883338958;
    msg.range = 52488U;
    msg.overlap = 228U;
    msg.flags = 96U;
    msg.custom.assign("KKMQMJXNGPPKTAQZAENJBSWHZGQWJUUMPLPALRFCZFBDRDHAVRUPGJTZXUYTGBTHVICCTOEILJAROSYLEOTTQZVDXIVKYFSAMVQROOTYKNNLEIYXEDWZLUIXNOSIVOTHXGPXWESGVCFJZTNRMQVUBBXMYFSFNCRDEQYAS");

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
    msg.setTimeStamp(0.249429797881);
    msg.setSource(25063U);
    msg.setSourceEntity(182U);
    msg.setDestination(32868U);
    msg.setDestinationEntity(15U);
    msg.timeout = 28012U;
    msg.lat = 0.900340610001;
    msg.lon = 0.66367181107;
    msg.z = 0.971441459503;
    msg.z_units = 110U;
    msg.speed = 0.609436693892;
    msg.speed_units = 19U;
    msg.syringe0 = 46U;
    msg.syringe1 = 151U;
    msg.syringe2 = 206U;
    msg.custom.assign("LHKIJTNGMLKXJALZBFDUTTHFIZGKDSLJMOBAYNNIEGHRQYWVSEYQQINXEATBJVOGSLJFJORBKSKPLZHOAGZEMIHWUXMBFWYMGTQJILVABNEFCPACWNPYPDAKRCTMDVUSUQOZWXQRZRHOFUSDVSDPNZRWICKYOFCLQSZRYJMCGQIXXTGUKWESZDHXQUORPNVVPXEH");

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
    msg.setTimeStamp(0.201462107177);
    msg.setSource(38884U);
    msg.setSourceEntity(141U);
    msg.setDestination(19138U);
    msg.setDestinationEntity(163U);
    msg.timeout = 32241U;
    msg.lat = 0.480261449212;
    msg.lon = 0.805553487425;
    msg.z = 0.884699525981;
    msg.z_units = 236U;
    msg.speed = 0.1284870437;
    msg.speed_units = 79U;
    msg.syringe0 = 184U;
    msg.syringe1 = 92U;
    msg.syringe2 = 198U;
    msg.custom.assign("HQQVEOMSVEAJGFCLDSUPOZKPOQEKDZQNOSYOBWQSSXMZMDYNUJUCGDARGWVAIMLERWEH");

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
    msg.setTimeStamp(0.241979889356);
    msg.setSource(44637U);
    msg.setSourceEntity(235U);
    msg.setDestination(43425U);
    msg.setDestinationEntity(27U);
    msg.timeout = 6346U;
    msg.lat = 0.161524894811;
    msg.lon = 0.189591677564;
    msg.z = 0.875659619882;
    msg.z_units = 124U;
    msg.speed = 0.0302447997251;
    msg.speed_units = 110U;
    msg.syringe0 = 114U;
    msg.syringe1 = 180U;
    msg.syringe2 = 214U;
    msg.custom.assign("WRPSCHIUOQSDCENLSVXBNJABCPUSYZXJOTYASFVNQGKPEGQZUTOHFXFRUTHYBFKBVLCNDOXDVAFFFJDKVBPRWYWAXXEOHICPEEDOVILPWFRZTDIIPUQLPMMXYGGNSA");

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
    msg.setTimeStamp(0.777709908233);
    msg.setSource(45636U);
    msg.setSourceEntity(80U);
    msg.setDestination(52501U);
    msg.setDestinationEntity(40U);

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
    msg.setTimeStamp(0.422246227139);
    msg.setSource(26827U);
    msg.setSourceEntity(38U);
    msg.setDestination(46546U);
    msg.setDestinationEntity(242U);

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
    msg.setTimeStamp(0.0794528884604);
    msg.setSource(46665U);
    msg.setSourceEntity(61U);
    msg.setDestination(32056U);
    msg.setDestinationEntity(28U);

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
    msg.setTimeStamp(0.396726177536);
    msg.setSource(20380U);
    msg.setSourceEntity(213U);
    msg.setDestination(33778U);
    msg.setDestinationEntity(242U);
    msg.lat = 0.741724450754;
    msg.lon = 0.363403641698;
    msg.z = 0.924881938799;
    msg.z_units = 250U;
    msg.speed = 0.897371924444;
    msg.speed_units = 205U;
    msg.takeoff_pitch = 0.224566193169;
    msg.custom.assign("PPLPIYXRMTFENSLYRBBCCHGYFHQLCXAXEXFKZUIXRLHCCLSHQUETVIDOGOWMEUVPSPOSOMPEHJPMHUWKQGKGJXDLZTCVQTVDGWNIKBBJRTCLRIRFEEPDXDSKBSSVUIACESZBIMLTLVOBYNUGTBTBYZOJRNRLVAXKKSHTFJMWPJODFWQTYNAYBVPIYNUMAQGOYURQZG");

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
    msg.setTimeStamp(0.843817522785);
    msg.setSource(6698U);
    msg.setSourceEntity(48U);
    msg.setDestination(54254U);
    msg.setDestinationEntity(240U);
    msg.lat = 0.0222333837386;
    msg.lon = 0.661711863832;
    msg.z = 0.585760467328;
    msg.z_units = 104U;
    msg.speed = 0.872596137574;
    msg.speed_units = 86U;
    msg.takeoff_pitch = 0.870093928238;
    msg.custom.assign("XGFNDRVCZTWXZVUBSHHYVJQKEKBSBKTWSAIDOKOGJEDYHARISZSTJIWRMUPPTDWADNXJQAMTJSGBUUQRQZOTINXRFJDFPEKLLZSTFCDNODCOUWMHICRIJONUEXFRNCGRCCMRZAFYJQHXVNLYMUHNQPUWUCAATVEHKKPIPCWORXJQPJTZYGIDLEAFXWV");

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
    msg.setTimeStamp(0.466491119862);
    msg.setSource(63479U);
    msg.setSourceEntity(188U);
    msg.setDestination(10897U);
    msg.setDestinationEntity(252U);
    msg.lat = 0.984761018026;
    msg.lon = 0.172062661977;
    msg.z = 0.311412107875;
    msg.z_units = 73U;
    msg.speed = 0.299458396818;
    msg.speed_units = 230U;
    msg.takeoff_pitch = 0.392814251126;
    msg.custom.assign("JCZUVZUSGAYPWLYATGRKJYFJJOOHJVLFIUGFZINDDQESSXTKAWELRUMCFLSAYRNCQHSPKICFXYMHBGLYZWJLTNTVAPUEPDMYZNREHCGKAUTUIDDXRHTTYETWI");

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
    msg.setTimeStamp(0.895694815694);
    msg.setSource(44736U);
    msg.setSourceEntity(106U);
    msg.setDestination(12458U);
    msg.setDestinationEntity(202U);
    msg.lat = 0.160468755143;
    msg.lon = 0.644621489585;
    msg.z = 0.632688293516;
    msg.z_units = 115U;
    msg.speed = 0.747652087234;
    msg.speed_units = 71U;
    msg.abort_z = 0.181737844295;
    msg.bearing = 0.714393492636;
    msg.glide_slope = 240U;
    msg.glide_slope_alt = 0.724470803979;
    msg.custom.assign("PDIIYWUOQXKHCUJEVEXXAZYKVDSYJAOFYBNDDROTTEJWUFTACDYSPKQMWXTRJFHTSHMWEBWYLMZEPJAESVVNTTIQCCIJWSJIZBELUNEKXXVHQLHUAXRQIGUGNKRHXCOZBRRHBNKDOFQQFLODZIFHSZZIISFEYSGJWNKVYQCMZAHZLDGFXSGUIGJULTBQWRBOYQPUVVRJHPBAPCMDTPTOLONRMGKLKZCRLFDMC");

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
    msg.setTimeStamp(0.735082928902);
    msg.setSource(10578U);
    msg.setSourceEntity(202U);
    msg.setDestination(6250U);
    msg.setDestinationEntity(143U);
    msg.lat = 0.0642464799907;
    msg.lon = 0.187014014763;
    msg.z = 0.439064839523;
    msg.z_units = 100U;
    msg.speed = 0.785372135224;
    msg.speed_units = 113U;
    msg.abort_z = 0.182765665965;
    msg.bearing = 0.947405101895;
    msg.glide_slope = 109U;
    msg.glide_slope_alt = 0.147363213181;
    msg.custom.assign("NZMEULFVZTHNLMYEOJZKUDLMIZTXYNSFHZUDTFDUNAEHCUCVYJOEBSRIAZIUPWPDYKAIVPMKWCXVPISWFPLRJHYSVHGCTEBVXOMNUMYQLLGZDRUNTKSJJPRXYCGRBYABQFBJDXWNXYTVOEMRCEBWHBTOABKTPFNPIHGWWPPWEGL");

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
    msg.setTimeStamp(0.870235617396);
    msg.setSource(46714U);
    msg.setSourceEntity(170U);
    msg.setDestination(22481U);
    msg.setDestinationEntity(251U);
    msg.lat = 0.140481952008;
    msg.lon = 0.457575814332;
    msg.z = 0.712904931683;
    msg.z_units = 2U;
    msg.speed = 0.565451378102;
    msg.speed_units = 244U;
    msg.abort_z = 0.449282454204;
    msg.bearing = 0.471586818241;
    msg.glide_slope = 54U;
    msg.glide_slope_alt = 0.440022000914;
    msg.custom.assign("XAIMKAPUSUWZRYAIJCGMPUXUWBLKLYYZFTCKYOISAQDVFTREGAANKWOTPGVOSASXGBWBXLZUQUPODKRMGQPMWOSJVTVLVPGZYBOFPDQJLFMJWZXJNLQRYTCUDGDQGXFUBRELHVFSUQMSZVIYKEBZSHJCZBHRULHOWNNCYIMR");

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
    msg.setTimeStamp(0.0547947945211);
    msg.setSource(39246U);
    msg.setSourceEntity(57U);
    msg.setDestination(35065U);
    msg.setDestinationEntity(7U);
    msg.lat = 0.487955279326;
    msg.lon = 0.961926598937;
    msg.speed = 0.932898578901;
    msg.speed_units = 130U;
    msg.limits = 22U;
    msg.max_depth = 0.983394963205;
    msg.min_alt = 0.296079800593;
    msg.time_limit = 0.957547704489;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.0839701305201;
    tmp_msg_0.lon = 0.694474942053;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("ZHOCHGNUGJVHQSOPUDOOUUKRQTZZREQQVGWMBAHTDEWWWCFYDMZYYQDBTERUUXSAGCGXAETAWXBMGPYSVGSJFOMJERIBPCAYJWVYKYHBNDMLVIQFIBCFTBMLYKTNLXEUPTNASDCRXHCFUJKXXIVFXHINJCSMLIEDUPHAESVFZIOYVJZKRFPPSKHZWVTVCTI");
    msg.custom.assign("XOEWBIYJVVMLFOXSTARATGQUHZXZCYHHJYROTOOTONSODKTJGIBKMMLGVISFGXXRZGCIQFZWJAIKZELNRYNDIIZNMRCUCQSWAVWKUUHINQEDBSQVUEEYXLTPUCWRLWCLDHCOJNDHZMFPBEESKMFAJKZAVDURVBJESSSMIMYBYYXPZMPDVHVPBVNKJGQIBPPQQHTGXENDPSNFYQBLARKKAWPUHLTFFDCFRMCXGUYBFCNEW");

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
    msg.setTimeStamp(0.00335329049981);
    msg.setSource(32780U);
    msg.setSourceEntity(249U);
    msg.setDestination(43735U);
    msg.setDestinationEntity(62U);
    msg.lat = 0.592830599467;
    msg.lon = 0.564164165383;
    msg.speed = 0.533790875682;
    msg.speed_units = 141U;
    msg.limits = 85U;
    msg.max_depth = 0.951670702975;
    msg.min_alt = 0.898972195005;
    msg.time_limit = 0.335637230371;
    msg.controller.assign("SYGIRROVVEHFRTICLNWRGDEOVDIWCGSXXXYKENEQCHSNPUJMFWSYTLUHUGOQDIQCHHDDXXAUDSWPTHFEBIQPNFCVAZMRUQJYAAOFQUKDELNZOJYRSCPXUDUJHJLNWSLCYRRTQAGXBPMGKMQBEYNJBLMGEPADOTUPAAFIB");
    msg.custom.assign("PMZGVPQFOWLWMSTHFEONUXDERFQAMXXHVIHXUIMFAWWLQPTEBSRUYZGASIVFKCGCXFVSHKKJVXYIEPNLYJWSUVUFNUJUQSIEKBTRRDLFBHPSCECRNCDUDHGIOQBLOONNRESMCMQHVYTBWINQJDXPMQMZTGBBOPJIHLFZOZTYKXDZK");

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
    msg.setTimeStamp(0.356168029004);
    msg.setSource(9881U);
    msg.setSourceEntity(3U);
    msg.setDestination(28813U);
    msg.setDestinationEntity(105U);
    msg.lat = 0.553820181593;
    msg.lon = 0.694277308947;
    msg.speed = 0.979880831191;
    msg.speed_units = 95U;
    msg.limits = 220U;
    msg.max_depth = 0.137107822422;
    msg.min_alt = 0.137615485835;
    msg.time_limit = 0.999254887511;
    msg.controller.assign("NCVGLTLHHAOBGFWFDBVGTCCROTGGDMGJZKQJMELJNWFYIAKQVLVZGUATMUQOMZMKJXKYOJYXASDBQEJUZSAMARXINOZQVEIJPCKRVSSYHBPHTCQRSBYRPDQMFE");
    msg.custom.assign("HGWXGMYEDJVKZMSHZOHXYCJGCSQSIWFDMMLDWLNYEIAMSXLKVSFRRBULUAQMNFWQTVCEEPHOJYVZVUUAOIHFJUGUUJOKANHTLTYFXABRVNOLDLVMNLPOVRTZXFMQBDRQYQSFWDLQNOZPAZENIDQOABHBPRCWTKJIQFCKTN");

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
    msg.setTimeStamp(0.719441560428);
    msg.setSource(1708U);
    msg.setSourceEntity(28U);
    msg.setDestination(34590U);
    msg.setDestinationEntity(113U);
    msg.target.assign("GUYXTLTFNAOSISLRIQRJJZWCHHAGBOHKPCKQXUCBTIYTVFVUETZH");
    msg.max_speed = 0.450175902904;
    msg.speed_units = 189U;
    msg.lat = 0.934738755918;
    msg.lon = 0.908980931368;
    msg.z = 0.707382716773;
    msg.z_units = 25U;
    msg.custom.assign("WLPSHHVPMAMEIHKOVVWRJAHADPDCCTYSEIIZVZXEGYPQNRMITNCBKA");

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
    msg.setTimeStamp(0.913223948733);
    msg.setSource(3296U);
    msg.setSourceEntity(188U);
    msg.setDestination(1168U);
    msg.setDestinationEntity(211U);
    msg.target.assign("CAJKVXYLIPXHTIVPFZCWXEXKYKXPNMPSLCJTKWEELRAQTBJANGJDWMGQQSUMBWLIQUFPBGKOCJTIEBFSYVDKEBECCKSCGQPKTRGTFINZMJMHYIOOHKUDOHNSRADAFJUTOFFYZRVHLCGSYDHQXXSMOXDAVHNJKZOABRRFTWUBYPIDUOEAFVLUPUBOEMGJQNMHR");
    msg.max_speed = 0.933816165081;
    msg.speed_units = 248U;
    msg.lat = 0.859054190282;
    msg.lon = 0.826426963973;
    msg.z = 0.120524921104;
    msg.z_units = 75U;
    msg.custom.assign("EXKDTJFVQQCDLAOQCGCUHGQKOMVVUJAR");

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
    msg.setTimeStamp(0.604423143114);
    msg.setSource(26454U);
    msg.setSourceEntity(228U);
    msg.setDestination(33444U);
    msg.setDestinationEntity(191U);
    msg.target.assign("OTSFPPFIDRHPUQMXFDVHCHFUUIMNETCXEKKCUNWEFLVEHQYGISQSPESZJMTABHCDDBESMMMXQJFDHLOZGJEHFAWBFCWPUHTFZNFUZASTQWYIKYAXRIGRAAAYJBZJAGGVUPNDMYPKIHUIJKKONYVYYOLOXLGNRNRGZDNELSRXBQCORYCNR");
    msg.max_speed = 0.73284903973;
    msg.speed_units = 130U;
    msg.lat = 0.489346846363;
    msg.lon = 0.0523816975508;
    msg.z = 0.16643509254;
    msg.z_units = 13U;
    msg.custom.assign("OGPRWLPEHCALCEBVWQRBXBYSUUDBGDDMIHDBNMZPTVMESIEUKQAFPYYWPQWTPFOBKGBHMUARXOFJKUORWADLZWGCVGKWCTBJHCIDCTVFXTZJGOKLWRSEMYQUIOMUNXSLHILZTDBCFYQOXAHQOFRSJAYUYKZYTTNKXRBTEHVZAHLDVNQXVQMPFVYKHACCNNXMNCLWNXJSO");

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
    msg.setTimeStamp(0.246841450937);
    msg.setSource(51386U);
    msg.setSourceEntity(180U);
    msg.setDestination(20040U);
    msg.setDestinationEntity(178U);
    msg.timeout = 22259U;
    msg.lat = 0.836720974331;
    msg.lon = 0.699139736859;
    msg.speed = 0.866457388954;
    msg.speed_units = 103U;
    msg.custom.assign("YSQAEGIVWOTXVJT");

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
    msg.setTimeStamp(0.0166903437751);
    msg.setSource(23722U);
    msg.setSourceEntity(204U);
    msg.setDestination(32351U);
    msg.setDestinationEntity(234U);
    msg.timeout = 12644U;
    msg.lat = 0.995057196266;
    msg.lon = 0.257395175808;
    msg.speed = 0.0712245874147;
    msg.speed_units = 228U;
    msg.custom.assign("JVHJVDAUBFFDJTTYAMBPTMHDUYLGWFWRYLWLKRCOARHGMWQSCCUCXXIFCLBBEWEJZKMIVTIWHJNJUQEHSIOQKYCBJBZGOFYFYXZPQLSSSKFDRXMKTNEYARPUTHMJCANQOOOGVBCVGPZTBNLFJLEWPVYSIIEXJZUUR");

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
    msg.setTimeStamp(0.902021436116);
    msg.setSource(2289U);
    msg.setSourceEntity(174U);
    msg.setDestination(52562U);
    msg.setDestinationEntity(209U);
    msg.timeout = 48636U;
    msg.lat = 0.849735063803;
    msg.lon = 0.668248917563;
    msg.speed = 0.751264517521;
    msg.speed_units = 217U;
    msg.custom.assign("LVZYDMZMLXXAAKJAMRIQMBI");

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
    msg.setTimeStamp(0.771005214986);
    msg.setSource(4942U);
    msg.setSourceEntity(7U);
    msg.setDestination(37578U);
    msg.setDestinationEntity(254U);
    msg.lat = 0.276758676455;
    msg.lon = 0.524385681675;
    msg.z = 0.0867489893741;
    msg.z_units = 49U;
    msg.radius = 0.697352131553;
    msg.duration = 39510U;
    msg.speed = 0.265159678604;
    msg.speed_units = 196U;
    msg.popup_period = 14442U;
    msg.popup_duration = 36354U;
    msg.flags = 77U;
    msg.custom.assign("GOELUYZMRUXPSIZCHQQRJUDRJANEBRJVWWBGXYRHFGFIBIOAQIEEVXSAUWPCHZCMUNGBKPSFEHNTDIWTDKDVVAOVLOSNKXQJFZPHWTNXTJYYFACKQWVTYFOPGUWBRMHKOXXJZTACKDDMGGHWQLRECRLULVOMKVBARSYKDIBELUVUOPOJNAXHQVKGFEIWCPMDLJDONEQLUTN");

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
    msg.setTimeStamp(0.743898483426);
    msg.setSource(39746U);
    msg.setSourceEntity(219U);
    msg.setDestination(11212U);
    msg.setDestinationEntity(82U);
    msg.lat = 0.757327313073;
    msg.lon = 0.0633033416825;
    msg.z = 0.581970565707;
    msg.z_units = 161U;
    msg.radius = 0.887086505391;
    msg.duration = 24338U;
    msg.speed = 0.7002894198;
    msg.speed_units = 224U;
    msg.popup_period = 13352U;
    msg.popup_duration = 41107U;
    msg.flags = 24U;
    msg.custom.assign("PUTJRGUNXSVQEEJCTAQIKTWQRPGHZVPSHRVXMIVMBWDJNXRQWLNPAGJXUXFDZUWOWADOBYKEVTXCJJUVSDXTYL");

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
    msg.setTimeStamp(0.974874456611);
    msg.setSource(2020U);
    msg.setSourceEntity(222U);
    msg.setDestination(1323U);
    msg.setDestinationEntity(77U);
    msg.lat = 0.0424841900583;
    msg.lon = 0.822239311454;
    msg.z = 0.39728446015;
    msg.z_units = 25U;
    msg.radius = 0.748995012426;
    msg.duration = 54336U;
    msg.speed = 0.888785689764;
    msg.speed_units = 109U;
    msg.popup_period = 61328U;
    msg.popup_duration = 35497U;
    msg.flags = 5U;
    msg.custom.assign("DKJQATLGXVQQPDOUOSEHFCHWYVXUWCNYULUJFN");

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
    msg.setTimeStamp(0.395544631945);
    msg.setSource(49853U);
    msg.setSourceEntity(58U);
    msg.setDestination(20529U);
    msg.setDestinationEntity(47U);
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("OXKBZGHLYPVMFKWHTQGBUTACHHCFAJVWQZGQIZHIRLKRFVGDPSKBYEHPNUQUCFJBLYTAXTBACPYUGUFNBGEGVAIZQNWUBCZDLKCLIJFXRXMJRYVPVLRWDCITOBIWDUCMSYXLOAIIMTSVYAXMZKNOZTNODCFHNELQDMRJRNYOOMJJSXMJQGEBXIDPXNWNZSWOBOHXIDVWJEFTUKUGTWYYML");
    IMC::PopUp tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeout = 59567U;
    tmp_tmp_msg_0_0.lat = 0.250866888603;
    tmp_tmp_msg_0_0.lon = 0.327947884089;
    tmp_tmp_msg_0_0.z = 0.988215547101;
    tmp_tmp_msg_0_0.z_units = 105U;
    tmp_tmp_msg_0_0.speed = 0.998408509382;
    tmp_tmp_msg_0_0.speed_units = 187U;
    tmp_tmp_msg_0_0.duration = 30628U;
    tmp_tmp_msg_0_0.radius = 0.124321589077;
    tmp_tmp_msg_0_0.flags = 70U;
    tmp_tmp_msg_0_0.custom.assign("IISAHMQTEFSXPADUYEROECMDLZVUTYXSZLPBPLTQIODONQWWWDITSWP");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::PeekManeuver tmp_tmp_msg_0_1;
    IMC::PlanManeuver tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.maneuver_id.assign("NUOHVWKWQCXUXIJXTULFSPJKPVGSLWPHIHGNQWNBXCDREUNZHCBRVCQOVPMYCOLSTVGEHWKHEDZXFZJLZSGFTPRTIQHTUQQYGKYRKFIGXJIAIJ");
    IMC::FollowTrajectory tmp_tmp_tmp_tmp_msg_0_1_0_0;
    tmp_tmp_tmp_tmp_msg_0_1_0_0.timeout = 17029U;
    tmp_tmp_tmp_tmp_msg_0_1_0_0.lat = 0.90118435708;
    tmp_tmp_tmp_tmp_msg_0_1_0_0.lon = 0.500121397243;
    tmp_tmp_tmp_tmp_msg_0_1_0_0.z = 0.399640492362;
    tmp_tmp_tmp_tmp_msg_0_1_0_0.z_units = 89U;
    tmp_tmp_tmp_tmp_msg_0_1_0_0.speed = 0.704409813978;
    tmp_tmp_tmp_tmp_msg_0_1_0_0.speed_units = 30U;
    tmp_tmp_tmp_tmp_msg_0_1_0_0.custom.assign("IXPKPYIBSMZWKTCHXAHQFFVKJDD");
    tmp_tmp_tmp_msg_0_1_0.data.set(tmp_tmp_tmp_tmp_msg_0_1_0_0);
    IMC::DesiredSpeed tmp_tmp_tmp_tmp_msg_0_1_0_1;
    tmp_tmp_tmp_tmp_msg_0_1_0_1.value = 0.0238162153885;
    tmp_tmp_tmp_tmp_msg_0_1_0_1.speed_units = 95U;
    tmp_tmp_tmp_msg_0_1_0.end_actions.push_back(tmp_tmp_tmp_tmp_msg_0_1_0_1);
    tmp_tmp_msg_0_1.man.set(tmp_tmp_tmp_msg_0_1_0);
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
    msg.setTimeStamp(0.746988574196);
    msg.setSource(58250U);
    msg.setSourceEntity(139U);
    msg.setDestination(2284U);
    msg.setDestinationEntity(173U);
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("VPOCRBPMZHUKJOXBNTKWTJPFAQZYADBVNUOQWUUKDLCCRCTOZCBABMBCUTFOETFHLVRVNDKYPKLEHHXYRVDPAGSWZUOWINEBEMKVEMXQIPGNPANLCMAXQGI");
    IMC::FollowPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.target.assign("VLBWYGZAROPAEJFJFPMMTAQEGMOMLIXFCNSOGWWTGALIQPBSKYPEJSPFPJCMIUKCDJWIGQHLJTQOUPDRSSSVITPJEVUXNUWMIDDCFKXFKUBLHOXTBUAA");
    tmp_tmp_msg_0_0.max_speed = 0.182080685896;
    tmp_tmp_msg_0_0.speed_units = 87U;
    tmp_tmp_msg_0_0.lat = 0.483256144994;
    tmp_tmp_msg_0_0.lon = 0.943941324404;
    tmp_tmp_msg_0_0.z = 0.834948627567;
    tmp_tmp_msg_0_0.z_units = 251U;
    tmp_tmp_msg_0_0.custom.assign("LXYTSUBRKPOQJWXMTOBCCEYRZUNIKLTJLIZHCIVHABWFRIDUVGGZGBYCDLLXYIWCWMQVQGZLSAARDP");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.101895982912);
    msg.setSource(24895U);
    msg.setSourceEntity(90U);
    msg.setDestination(2461U);
    msg.setDestinationEntity(119U);
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("NEJJYMKAKXWRYAWJAIYVVEQKCDAPHJGEHBZUYSTPSBWJJVRBMXMFENIGYOAIVLGXNLOOGMPWSJOFSUVSFSTDRFIQTRZLQOKZPCUCXOCDGDKMSCTLUZUFYIOZPLMPTNJCCNDUUNXQXPSBBERWKWZOJEHBWHVUNQTOJMSVQKVTGZIPIEYGMRYXAEMLDWPQLHRVCGIFQFEPQDHDUDXUQANGBKHLRZOTNASEITKBXBIFRMZZACGXWYWRFHY");
    IMC::FollowTrajectory tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeout = 64836U;
    tmp_tmp_msg_0_0.lat = 0.403813687287;
    tmp_tmp_msg_0_0.lon = 0.195284522998;
    tmp_tmp_msg_0_0.z = 0.0755254449049;
    tmp_tmp_msg_0_0.z_units = 132U;
    tmp_tmp_msg_0_0.speed = 0.558820071565;
    tmp_tmp_msg_0_0.speed_units = 90U;
    IMC::TrajectoryPoint tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.x = 0.144782762506;
    tmp_tmp_tmp_msg_0_0_0.y = 0.613071730599;
    tmp_tmp_tmp_msg_0_0_0.z = 0.304129671652;
    tmp_tmp_tmp_msg_0_0_0.t = 0.570576567628;
    tmp_tmp_msg_0_0.points.push_back(tmp_tmp_tmp_msg_0_0_0);
    tmp_tmp_msg_0_0.custom.assign("FDDZUHRCEXEYWOZJNETMDFRDNUSMUKOKMALQXROHQEJVWVZROGPXYZWDSJTSXXFGINJMVDBYMHQCZCCFLOXCGCHHRSNGPAUTBHXIDGJKURTT");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::Voltage tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.598201882911;
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
    msg.setTimeStamp(0.161139297151);
    msg.setSource(24121U);
    msg.setSourceEntity(28U);
    msg.setDestination(4005U);
    msg.setDestinationEntity(180U);
    msg.timeout = 29575U;
    msg.lat = 0.647587588002;
    msg.lon = 0.813134807051;
    msg.z = 0.104810969999;
    msg.z_units = 191U;
    msg.speed = 0.897195035673;
    msg.speed_units = 11U;
    msg.bearing = 0.270637166471;
    msg.width = 0.271840127822;
    msg.direction = 191U;
    msg.custom.assign("BSKAPAHXDAHNABRDLPSBLFHVXGZUSPLIPFQECWTOTCPISTEVBOEJBHBKEZXFQBWWCPBXTJNWVZQFTNKRZERUVDJWIHYLUMOHODNXYVYSLMTJWIDNUGMKQSYOMRJXXJPYVTIVVVZKVGPKRGKOJARJCQNTLXGNCWZLOXQQMAGFKYNJOYWEDEDCCPFDUUSCFZIIHDULYARAZ");

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
    msg.setTimeStamp(0.7951316502);
    msg.setSource(45737U);
    msg.setSourceEntity(142U);
    msg.setDestination(38471U);
    msg.setDestinationEntity(177U);
    msg.timeout = 1694U;
    msg.lat = 0.909115696427;
    msg.lon = 0.698150958093;
    msg.z = 0.0640188451278;
    msg.z_units = 123U;
    msg.speed = 0.126048727905;
    msg.speed_units = 34U;
    msg.bearing = 0.845913143404;
    msg.width = 0.331746055601;
    msg.direction = 76U;
    msg.custom.assign("RBLXUNKUGJVTJYQDTKLZEAOZ");

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
    msg.setTimeStamp(0.630804361729);
    msg.setSource(29517U);
    msg.setSourceEntity(221U);
    msg.setDestination(33488U);
    msg.setDestinationEntity(48U);
    msg.timeout = 8458U;
    msg.lat = 0.918895860964;
    msg.lon = 0.016341276469;
    msg.z = 0.321168437009;
    msg.z_units = 94U;
    msg.speed = 0.932771924067;
    msg.speed_units = 23U;
    msg.bearing = 0.438751431664;
    msg.width = 0.244777721863;
    msg.direction = 235U;
    msg.custom.assign("FPHTRUNARCYLAATSBOAOQBHSVPOJIGHMHMIMPEEUXYKFJJQTNFRRWYCKLZHTBDIKZBFNXDAPTOXTJDFDKNGSHWIIWRPHLGDWRKGUVLXSMSJJFZUTKZXTQZPQVFIOAHPVMVGEYVQZZNCWWXSELIKWGDYPUEQUSNSDQMPJVLYABWLOK");

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
    msg.setTimeStamp(0.252565764085);
    msg.setSource(35937U);
    msg.setSourceEntity(48U);
    msg.setDestination(19870U);
    msg.setDestinationEntity(37U);
    msg.op_mode = 12U;
    msg.error_count = 52U;
    msg.error_ents.assign("JPXMSLHJWYKRYCGIFNCGATVIVYYDMCYOEMTUQNRKHJBVOQMKGFEDFXFUSWJECKXQWLCINPNZWKPTXIQANEOSSRJBF");
    msg.maneuver_type = 34914U;
    msg.maneuver_stime = 0.563103778795;
    msg.maneuver_eta = 30541U;
    msg.control_loops = 4036006528U;
    msg.flags = 148U;
    msg.last_error.assign("XADRHYJLJTNSHGTIZKBNUEUPFUMIYEIYPKMDGQCEIDEDVPKAZZPXWZYCHWXIWNVYGDESOIBREKESYMHQFBCTHYGZUDSFLNUXPHNVVPJABDRJWMCCLILBZOEDIMXOSNWTUFMQTYCAGJUROAWIXAESNTOXPTBJTRHOFBOXQSVNOPRKZLFVBMKJ");
    msg.last_error_time = 0.182256185461;

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
    msg.setTimeStamp(0.559611334951);
    msg.setSource(28587U);
    msg.setSourceEntity(28U);
    msg.setDestination(51215U);
    msg.setDestinationEntity(47U);
    msg.op_mode = 59U;
    msg.error_count = 53U;
    msg.error_ents.assign("YSCGWSOCQWLBIVEEVQGNBMYROFNOSKIPEELVQISERXJSQCFATLNQLMKPDAGDWBNJUHRZHLEVDVYKDNVDPCABXPTFURNTZBQTPHNRJTMYJUGZEHMMGHAOSYHKYQKKLXOLUDPJUJQHILJPPHJCOWUJBZXZNDYYMIW");
    msg.maneuver_type = 30821U;
    msg.maneuver_stime = 0.169107906591;
    msg.maneuver_eta = 58020U;
    msg.control_loops = 1099353164U;
    msg.flags = 48U;
    msg.last_error.assign("HBUZPCWOMWYRBXULEUHOJAIVUDBTGRHQFZYHXCDIGNXPFXBPWYZOOAJGTKROQZTTWQZIPXUXMDQZDVOMKKJYFPEBECLCKMLCKWIANNRLEFYQVAASEGNGNWSVIYHFDLPZOD");
    msg.last_error_time = 0.79476083459;

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
    msg.setTimeStamp(0.33098871659);
    msg.setSource(43394U);
    msg.setSourceEntity(229U);
    msg.setDestination(10740U);
    msg.setDestinationEntity(173U);
    msg.op_mode = 30U;
    msg.error_count = 119U;
    msg.error_ents.assign("YQPOGERJURCQWTYBQIURDNAVJHYUZLAMOOYTITXWNRWAINUZETVXMXFPDMPIXYXUPCOETSKDHC");
    msg.maneuver_type = 25517U;
    msg.maneuver_stime = 0.0169477931056;
    msg.maneuver_eta = 38634U;
    msg.control_loops = 3688807737U;
    msg.flags = 31U;
    msg.last_error.assign("YQUEKNQPOFAZFUMNWVHMTAPEE");
    msg.last_error_time = 0.10798877483;

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
    msg.setTimeStamp(0.183998882552);
    msg.setSource(54600U);
    msg.setSourceEntity(25U);
    msg.setDestination(49495U);
    msg.setDestinationEntity(174U);
    msg.type = 5U;
    msg.request_id = 46137U;
    msg.command = 246U;
    IMC::AutonomousSection tmp_msg_0;
    tmp_msg_0.lat = 0.60922539363;
    tmp_msg_0.lon = 0.578972369615;
    tmp_msg_0.speed = 0.666592619041;
    tmp_msg_0.speed_units = 214U;
    tmp_msg_0.limits = 149U;
    tmp_msg_0.max_depth = 0.897572550289;
    tmp_msg_0.min_alt = 0.862968737602;
    tmp_msg_0.time_limit = 0.650616852643;
    tmp_msg_0.controller.assign("RGDEAWHMVKFYGPSUGTAJYRVIEHQIKMMONSDVAUIEGWRYZTUKHPBAYUDZLJCUXVNTFVJVIHUIZLQISUWBBEWZLAHTVWKZMJSIMCPXBFCIGUSPMRPLHYUERAXCQFXPKUW");
    tmp_msg_0.custom.assign("ONRVPSAXQTPSRYGGUUOBMAJVWEBQJCKQLXHPEOPMQIOXUDMZRIBFNFYKBGXVFTFZDHTWWEYUSHCRSEWAFYNQFBZEOCXBJDCZMMWIDKVYGEZSFQSSGYKAXGHWPITVKBTBNZTCOKZMDRYUIULJAYLSFWKETEDIBALOPXLVWNTZXLHUIQHALJFBJOIUPCVPHPHLUHJNXVJDNKMDLARRKQYLU");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 57000U;
    msg.info.assign("TEXYIKDBQBIHUKOCLYKBFQMBHHMFWWACNDRKPVRMGCCSHXZQOFRMUEQWFYTVMGGBKTJXGRBCYPAYOQHSDDMPWAKVURFSCFNTVZUILKYZNWJIIYSXWLNFZEOJGWXVRGUWOVJDDNZECIZCTAEOKPLDEKXUWYUBSLPOQEOLMGNNQ");

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
    msg.setTimeStamp(0.390566970087);
    msg.setSource(51276U);
    msg.setSourceEntity(135U);
    msg.setDestination(6037U);
    msg.setDestinationEntity(182U);
    msg.type = 205U;
    msg.request_id = 40569U;
    msg.command = 238U;
    IMC::StationKeepingExtended tmp_msg_0;
    tmp_msg_0.lat = 0.125789100225;
    tmp_msg_0.lon = 0.458865160016;
    tmp_msg_0.z = 0.708241360206;
    tmp_msg_0.z_units = 147U;
    tmp_msg_0.radius = 0.252089823255;
    tmp_msg_0.duration = 44037U;
    tmp_msg_0.speed = 0.915077761875;
    tmp_msg_0.speed_units = 150U;
    tmp_msg_0.popup_period = 20462U;
    tmp_msg_0.popup_duration = 28613U;
    tmp_msg_0.flags = 120U;
    tmp_msg_0.custom.assign("UAZZMUONJVPHZZADVCVLHWRKKSIESASEBCTTNLMSVRIEGKZYBOKALIMESTFYMHJVSBFHUXQBDXHTFSPXKXDRZVOGLURUSYMMWBKNKWPDJOMKBLOVJYPKWCFQDYWHNNZBGUQTLWQGGJGJCUHNDHWNDYSXVCSPIDEJMRWDIIRIOJORCFQVXKUEMQEQRTHXQLGTAFITYJJIBPXPUFAZYCAMRVDQCRIWZLLLNFXPTUYGBAEABHZN");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 39186U;
    msg.info.assign("YDGFBTCDJIJUHZWUORPEKFTWYCVTXWNJQASVCNFAHIFTLEWBPZKWXLUMKQKXXRNTYJXKRDPIAUAUPIZLOCURXYZOTERSBEJBDDWPOLHVFJVKGTQLWIOPBHSXZGHOYCAA");

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
    msg.setTimeStamp(0.690736026019);
    msg.setSource(33109U);
    msg.setSourceEntity(59U);
    msg.setDestination(61463U);
    msg.setDestinationEntity(229U);
    msg.type = 38U;
    msg.request_id = 45142U;
    msg.command = 152U;
    IMC::FollowReference tmp_msg_0;
    tmp_msg_0.control_src = 24293U;
    tmp_msg_0.control_ent = 27U;
    tmp_msg_0.timeout = 0.389710688397;
    tmp_msg_0.loiter_radius = 0.749161504059;
    tmp_msg_0.altitude_interval = 0.740802890511;
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 25117U;
    msg.info.assign("CFCHZANBZJDDGMRJJSUBGMVXWZCAGLYHJHSHXBEZHADELPQCTUKPVAPEXSGGLXBJZWDPGXOMZNKPPZTNSIXQQOUZKNVYVB");

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
    msg.setTimeStamp(0.223484239377);
    msg.setSource(1456U);
    msg.setSourceEntity(131U);
    msg.setDestination(24095U);
    msg.setDestinationEntity(190U);
    msg.command = 75U;
    msg.entities.assign("YIQOIJZDQAVQNWOSRVXTXLECUEOPZWZBIFHLQIWYVYNFMDWASSAADCMQDTACPYCSDTLVYVRKQXPZBUSYIGRXBQTNQSNKUDRLIMHUJAZRZBRJFXKGSRMYOKNOAOFXPCAGFUDLFLVEMZHJCGJUZYRENJPUZIVUSPHIFYTIDDEOXHXFBUBCVMXXGBEONHIFGUB");

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
    msg.setTimeStamp(0.849173854009);
    msg.setSource(39959U);
    msg.setSourceEntity(51U);
    msg.setDestination(55177U);
    msg.setDestinationEntity(29U);
    msg.command = 2U;
    msg.entities.assign("JSKIURHRRAWBQDPZYNTFONKMUCKEMFPYJCBVYIDLXSZFWMDORWSLFUEHGYMRVDYCIQUYSCTVQUMESKHLOFOCGJHQOCQTQWSXVJAJVLJEKXJVIKTEILXASTWHRSYMRQLHMPEEHMGBSRUNEAGFPXJPGZNNNLXISFOQDYA");

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
    msg.setTimeStamp(0.886519780493);
    msg.setSource(22023U);
    msg.setSourceEntity(65U);
    msg.setDestination(60769U);
    msg.setDestinationEntity(93U);
    msg.command = 191U;
    msg.entities.assign("ABVQDQDKNFMURPLHVITZMYVYXNJKWVBXJPLRDFFCKLWJZDSQKOKXZZZIBRPSXBKOAWJEAMIPWQDGJVMITMLXYIEN");

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
    msg.setTimeStamp(0.402754434861);
    msg.setSource(33130U);
    msg.setSourceEntity(75U);
    msg.setDestination(51699U);
    msg.setDestinationEntity(47U);
    msg.mcount = 125U;
    msg.mnames.assign("WHXOLJNLSKTWBWTZHSRVMZUOGCDAFXXLNLAHDICFCQAPIETLKGLPCBVTSJGYWDAHQXUYULORNHXCWBOGSODPEGBQCUEWAT");
    msg.ecount = 41U;
    msg.enames.assign("NJONRREFFLFKSGNSWMOVYZG");
    msg.ccount = 78U;
    msg.cnames.assign("TTCXSUSDOFXIOGELAZHJDDYUAJUHMWAVCEFUYEOGBRVZISMFHKXIVANRTXBXYVQRXHEAAUHBEGPBUDEKCGMRWJHFSECASKWJNTBYCZPKBYDCFVGOPOHJF");
    msg.last_error.assign("WDTSXFDUEFHYQADZXITVOCZFRDPPPOHFRVSVHWGLGEMKPBHANCLABPVNQJDMCZBRTGTPEXCTFSYSJJYGZQQUUIFXLPELGCAYAQPHKZOOWMZNOGBWJFJKMYJYOLGQGWUSMWHGPTKODWQBOXLFXDRKRAWLCNAMURBMIUYIVRNWKNUSOBEIHVXBNSVJNDQGKMDCPUVHOBJRZXECENNKZZYMUIHRCFQIVYETETJLJFLKIU");
    msg.last_error_time = 0.965764320336;

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
    msg.setTimeStamp(0.172066224611);
    msg.setSource(62943U);
    msg.setSourceEntity(41U);
    msg.setDestination(52293U);
    msg.setDestinationEntity(178U);
    msg.mcount = 201U;
    msg.mnames.assign("IVTJBQCOREGPABLOVOSZUGMMRQTYMNBKTLNGDJXAVZTSJQURDKDXNVZRQTDFKTIPNWLOWQTQJYTKCXJVPASSGTEGBHRFBYYFYWEFZPRLIQGUAGKGXWFSBQMXEWIYFIZCGXAXNFDCPZCDEBUIOZHIWOFHUSZOEULXNWSABCREHKUIVPPERAHLYFJNBOXMJYZKVEJNLCVOPJKMMHYUTWCVYMHUWQNUGORCAHHLZQSD");
    msg.ecount = 120U;
    msg.enames.assign("CLQODXLFZKVZFLSTHJGKAMHWUHZFDYAYPVWHGFZXETWSSMTUSYWZPZBJFJYYCSXLIWNNIYQLXCQPITLQDMGTHGUBROIAGJIKQASWLTMBIPOROLODCVFWYFDRRCTIGULUFQBZUHZQXADVYMTMACDUMUSNONREVNOYXZGCVVGXAMENHFTYBNRPXZPQJNDHAEWMNCAUGJDCQSTRHKNFJXSIQDCEMIEOUKJBBBBKEABPK");
    msg.ccount = 10U;
    msg.cnames.assign("IFNIYUPMQFLYASILOFCRDXLGSCJXCTZGUMICGYVHSUFBJBDYJHPGQOTLNWPJCSFANZIRUKPZXV");
    msg.last_error.assign("ORGCIEYPKUOLXIDPHTTWVP");
    msg.last_error_time = 0.258983010688;

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
    msg.setTimeStamp(0.19405899038);
    msg.setSource(52910U);
    msg.setSourceEntity(173U);
    msg.setDestination(46727U);
    msg.setDestinationEntity(207U);
    msg.mcount = 207U;
    msg.mnames.assign("SFZAKMMMQXESHFXWKQZXVWEBYOWGVWCJNYNTQRLDDBVFSGNMCXOUCKODKIGTWSRRTOPKRPUEQVOFVLDRXKIEZ");
    msg.ecount = 91U;
    msg.enames.assign("CXLSOVDZRDKIUFAMCKLZZKWYAMJEVLEFLNPEUAAYRMVSCJBLSLLBXQVBUPIKVCWEANBUQYKYGRBHIDJFWPRNMMOICCQYJZMVTTYVXQIZXWZDXRUFUXODWS");
    msg.ccount = 69U;
    msg.cnames.assign("ADLLCMZWYXKFHHDTOESCMQYEQJCADMLIONPIYBLWRNGEZWHDNAZKNYIQTSMTDPEORLOIUNVCMQTKERGHVYHEBQYNDHNJXFBZIWOVBMXGFISCAHQNNJZBADOZTIPPBOHMRYQ");
    msg.last_error.assign("GAKCBMPBTVPQSVOYEIEEJCDFTAYTRMCLWIPERVYSTORBDFGSWQXLCNDQUERUYBRDOVFCLKANGGUIUHTXGQKNDYNGPWXOXQKBZWWIMAIEQSARZSMCN");
    msg.last_error_time = 0.116270133893;

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
    msg.setTimeStamp(0.477374015458);
    msg.setSource(50771U);
    msg.setSourceEntity(37U);
    msg.setDestination(61004U);
    msg.setDestinationEntity(236U);
    msg.mask = 89U;
    msg.max_depth = 0.165717142847;
    msg.min_altitude = 0.475550147328;
    msg.max_altitude = 0.574853595107;
    msg.min_speed = 0.377196892295;
    msg.max_speed = 0.613431835089;
    msg.max_vrate = 0.987661812505;
    msg.lat = 0.880834408414;
    msg.lon = 0.927595148878;
    msg.orientation = 0.635070536745;
    msg.width = 0.915645240721;
    msg.length = 0.571026859984;

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
    msg.setTimeStamp(0.76452858648);
    msg.setSource(9793U);
    msg.setSourceEntity(10U);
    msg.setDestination(51655U);
    msg.setDestinationEntity(214U);
    msg.mask = 235U;
    msg.max_depth = 0.453094934821;
    msg.min_altitude = 0.925351771492;
    msg.max_altitude = 0.387066432408;
    msg.min_speed = 0.209217390209;
    msg.max_speed = 0.820550902976;
    msg.max_vrate = 0.433747160886;
    msg.lat = 0.573725008879;
    msg.lon = 0.909646418737;
    msg.orientation = 0.155686701091;
    msg.width = 0.824526704322;
    msg.length = 0.952612284078;

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
    msg.setTimeStamp(0.551816267099);
    msg.setSource(53128U);
    msg.setSourceEntity(166U);
    msg.setDestination(15618U);
    msg.setDestinationEntity(174U);
    msg.mask = 185U;
    msg.max_depth = 0.864850492303;
    msg.min_altitude = 0.804376206805;
    msg.max_altitude = 0.74415360578;
    msg.min_speed = 0.501101220309;
    msg.max_speed = 0.788589962352;
    msg.max_vrate = 0.509627807831;
    msg.lat = 0.399626237833;
    msg.lon = 0.701808319574;
    msg.orientation = 0.194235462873;
    msg.width = 0.5997128714;
    msg.length = 0.680805185624;

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
    msg.setTimeStamp(0.437895818856);
    msg.setSource(25642U);
    msg.setSourceEntity(218U);
    msg.setDestination(61359U);
    msg.setDestinationEntity(183U);

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
    msg.setTimeStamp(0.383173978184);
    msg.setSource(24956U);
    msg.setSourceEntity(78U);
    msg.setDestination(23838U);
    msg.setDestinationEntity(161U);

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
    msg.setTimeStamp(0.14621129203);
    msg.setSource(7232U);
    msg.setSourceEntity(40U);
    msg.setDestination(55452U);
    msg.setDestinationEntity(232U);

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
    msg.setTimeStamp(0.728209737262);
    msg.setSource(27749U);
    msg.setSourceEntity(152U);
    msg.setDestination(40923U);
    msg.setDestinationEntity(200U);
    msg.duration = 38900U;

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
    msg.setTimeStamp(0.765732092095);
    msg.setSource(51077U);
    msg.setSourceEntity(8U);
    msg.setDestination(43149U);
    msg.setDestinationEntity(107U);
    msg.duration = 27485U;

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
    msg.setTimeStamp(0.714784677197);
    msg.setSource(20923U);
    msg.setSourceEntity(199U);
    msg.setDestination(30580U);
    msg.setDestinationEntity(205U);
    msg.duration = 49835U;

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
    msg.setTimeStamp(0.888064864316);
    msg.setSource(4168U);
    msg.setSourceEntity(74U);
    msg.setDestination(33331U);
    msg.setDestinationEntity(240U);
    msg.enable = 0U;
    msg.mask = 4107742796U;
    msg.scope_ref = 2458271056U;

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
    msg.setTimeStamp(0.348158696377);
    msg.setSource(41265U);
    msg.setSourceEntity(145U);
    msg.setDestination(10258U);
    msg.setDestinationEntity(241U);
    msg.enable = 244U;
    msg.mask = 3057197490U;
    msg.scope_ref = 2143542091U;

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
    msg.setTimeStamp(0.52908230628);
    msg.setSource(24001U);
    msg.setSourceEntity(217U);
    msg.setDestination(12601U);
    msg.setDestinationEntity(136U);
    msg.enable = 124U;
    msg.mask = 1935392942U;
    msg.scope_ref = 1319196701U;

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
    msg.setTimeStamp(0.702119303649);
    msg.setSource(3912U);
    msg.setSourceEntity(240U);
    msg.setDestination(63995U);
    msg.setDestinationEntity(251U);
    msg.medium = 121U;

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
    msg.setTimeStamp(0.326787556491);
    msg.setSource(35211U);
    msg.setSourceEntity(205U);
    msg.setDestination(37231U);
    msg.setDestinationEntity(123U);
    msg.medium = 170U;

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
    msg.setTimeStamp(0.712987069795);
    msg.setSource(46738U);
    msg.setSourceEntity(61U);
    msg.setDestination(13620U);
    msg.setDestinationEntity(168U);
    msg.medium = 254U;

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
    msg.setTimeStamp(0.577962170151);
    msg.setSource(59981U);
    msg.setSourceEntity(111U);
    msg.setDestination(55800U);
    msg.setDestinationEntity(203U);
    msg.value = 0.575219941967;
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
    msg.setTimeStamp(0.882694151619);
    msg.setSource(41267U);
    msg.setSourceEntity(175U);
    msg.setDestination(10186U);
    msg.setDestinationEntity(30U);
    msg.value = 0.75519394604;
    msg.type = 52U;

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
    msg.setTimeStamp(0.782175855915);
    msg.setSource(50697U);
    msg.setSourceEntity(207U);
    msg.setDestination(34423U);
    msg.setDestinationEntity(105U);
    msg.value = 0.64810097831;
    msg.type = 133U;

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
    msg.setTimeStamp(0.862975004738);
    msg.setSource(64563U);
    msg.setSourceEntity(121U);
    msg.setDestination(11030U);
    msg.setDestinationEntity(14U);
    msg.possimerr = 0.0545151760651;
    msg.converg = 0.0574082353174;
    msg.turbulence = 0.765812237953;
    msg.possimmon = 206U;
    msg.commmon = 107U;
    msg.convergmon = 251U;

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
    msg.setTimeStamp(0.119961879666);
    msg.setSource(44938U);
    msg.setSourceEntity(31U);
    msg.setDestination(34109U);
    msg.setDestinationEntity(26U);
    msg.possimerr = 0.920922198323;
    msg.converg = 0.182240304292;
    msg.turbulence = 0.282138082585;
    msg.possimmon = 207U;
    msg.commmon = 51U;
    msg.convergmon = 124U;

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
    msg.setTimeStamp(0.651532470223);
    msg.setSource(50153U);
    msg.setSourceEntity(55U);
    msg.setDestination(27770U);
    msg.setDestinationEntity(34U);
    msg.possimerr = 0.921838841062;
    msg.converg = 0.913316416108;
    msg.turbulence = 0.314893362922;
    msg.possimmon = 242U;
    msg.commmon = 201U;
    msg.convergmon = 251U;

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
    msg.setTimeStamp(0.934585736608);
    msg.setSource(23288U);
    msg.setSourceEntity(144U);
    msg.setDestination(20158U);
    msg.setDestinationEntity(252U);
    msg.autonomy = 9U;
    msg.mode.assign("LFVYDNTSVUDASJGPENEIKXGQWASTAIXROTMBFYKBFOCLQZDVJLBHGKBQTOVBDBWAIHIYAWUIOYZJEFLLZMMRZQBEXDJUVGLCWJEMMCHDPRKRXGQ");

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
    msg.setTimeStamp(0.234690131579);
    msg.setSource(54739U);
    msg.setSourceEntity(224U);
    msg.setDestination(26223U);
    msg.setDestinationEntity(214U);
    msg.autonomy = 49U;
    msg.mode.assign("OUOEAPWZRNGHCNWSVRHWVNMZCDEXYQIPWMKIYOSYDKPPCIBCQKNSRMJSXNYADKTJPLPFJHGTXKQYCANPKDUKHOFUIYIOKVPHTGZEKGEXBISRNBWOALRIWLQQYRVLJZLBWRMDQJEJEYOAZTDUJARTGAGUWATLS");

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
    msg.setTimeStamp(0.88914085417);
    msg.setSource(1248U);
    msg.setSourceEntity(183U);
    msg.setDestination(58469U);
    msg.setDestinationEntity(254U);
    msg.autonomy = 201U;
    msg.mode.assign("ZWSNATCQHEFFJELYGAUFRBLISNIDNOFCIVXSSRGSEJERCUAILGOTKNDOXON");

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
    msg.setTimeStamp(0.166721747409);
    msg.setSource(5463U);
    msg.setSourceEntity(206U);
    msg.setDestination(50977U);
    msg.setDestinationEntity(16U);
    msg.type = 116U;
    msg.op = 58U;
    msg.possimerr = 0.977260252993;
    msg.converg = 0.23729153217;
    msg.turbulence = 0.663974904669;
    msg.possimmon = 217U;
    msg.commmon = 87U;
    msg.convergmon = 206U;

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
    msg.setTimeStamp(0.748542333303);
    msg.setSource(34679U);
    msg.setSourceEntity(38U);
    msg.setDestination(32996U);
    msg.setDestinationEntity(143U);
    msg.type = 177U;
    msg.op = 23U;
    msg.possimerr = 0.968343782596;
    msg.converg = 0.239553454057;
    msg.turbulence = 0.265122057548;
    msg.possimmon = 232U;
    msg.commmon = 194U;
    msg.convergmon = 167U;

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
    msg.setTimeStamp(0.826828740513);
    msg.setSource(65234U);
    msg.setSourceEntity(239U);
    msg.setDestination(37278U);
    msg.setDestinationEntity(14U);
    msg.type = 14U;
    msg.op = 194U;
    msg.possimerr = 0.404902018695;
    msg.converg = 0.511681068964;
    msg.turbulence = 0.932041110625;
    msg.possimmon = 152U;
    msg.commmon = 219U;
    msg.convergmon = 76U;

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
    msg.setTimeStamp(0.804386298046);
    msg.setSource(43029U);
    msg.setSourceEntity(18U);
    msg.setDestination(18479U);
    msg.setDestinationEntity(103U);
    msg.op = 144U;
    msg.comm_interface = 214U;
    msg.period = 8812U;
    msg.sys_dst.assign("VWQHHOHAGFCMEJIWVAFZSDLDHRVSPFOPAZHKUNFOWGMHBTRRRWDIYKVNYLJPXMRCIFBXKOGAMFPVSJWNAQWJFASYBSGVDEJUDCCPNPHUETXNAEOUPYMKBJXSXSNTDVQOZEIABCWGYUQGBTBRPYHYUZXILMNYOZAOUKQXGYNEIPEXXKSDSXUVLLIZFIZZFJTNBAPKYRDIOWQULLEQGBRGWVZDWJ");

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
    msg.setTimeStamp(0.634819556176);
    msg.setSource(56291U);
    msg.setSourceEntity(85U);
    msg.setDestination(55901U);
    msg.setDestinationEntity(235U);
    msg.op = 64U;
    msg.comm_interface = 154U;
    msg.period = 54407U;
    msg.sys_dst.assign("BHRZFNRFHQYBEPKVCSIWJQOHJFISQVROLLTEARRK");

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
    msg.setTimeStamp(0.829456184179);
    msg.setSource(14635U);
    msg.setSourceEntity(75U);
    msg.setDestination(37579U);
    msg.setDestinationEntity(150U);
    msg.op = 102U;
    msg.comm_interface = 158U;
    msg.period = 45766U;
    msg.sys_dst.assign("KYARMMNYMTDBNOSHEOIVUCBVSGKTBMBESEHLXGBNGXOWPSKECYRNGRUUPPEWITZQJXZPPYAIMQUGDUJXMRSFMCFZCVHUCEVFKLQUBRBAYVQHFYPJJXXGWWDCFWILRTDOKASBZWEFBTQPJZPQNEASDQWLJYGEJJEOSZGVCQLLVVLFZYHSWHKOKHNQIID");

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
    msg.setTimeStamp(0.760414925779);
    msg.setSource(52272U);
    msg.setSourceEntity(162U);
    msg.setDestination(48289U);
    msg.setDestinationEntity(64U);
    msg.stime = 4141947103U;
    msg.latitude = 0.308186563153;
    msg.longitude = 0.945794766001;
    msg.altitude = 58715U;
    msg.depth = 25415U;
    msg.heading = 39453U;
    msg.speed = 11611;
    msg.fuel = -52;
    msg.exec_state = 96;
    msg.plan_checksum = 19723U;

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
    msg.setTimeStamp(0.270419297316);
    msg.setSource(31230U);
    msg.setSourceEntity(113U);
    msg.setDestination(11239U);
    msg.setDestinationEntity(54U);
    msg.stime = 628877181U;
    msg.latitude = 0.519716386828;
    msg.longitude = 0.56510335622;
    msg.altitude = 41323U;
    msg.depth = 53077U;
    msg.heading = 10567U;
    msg.speed = -32294;
    msg.fuel = -128;
    msg.exec_state = -97;
    msg.plan_checksum = 57157U;

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
    msg.setTimeStamp(0.881963377818);
    msg.setSource(7478U);
    msg.setSourceEntity(228U);
    msg.setDestination(54014U);
    msg.setDestinationEntity(148U);
    msg.stime = 1678938890U;
    msg.latitude = 0.705227679049;
    msg.longitude = 0.618812050848;
    msg.altitude = 56122U;
    msg.depth = 14834U;
    msg.heading = 5110U;
    msg.speed = 32108;
    msg.fuel = 44;
    msg.exec_state = -93;
    msg.plan_checksum = 40436U;

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
    msg.setTimeStamp(0.103332118724);
    msg.setSource(10216U);
    msg.setSourceEntity(171U);
    msg.setDestination(52335U);
    msg.setDestinationEntity(122U);
    msg.req_id = 22235U;
    msg.comm_mean = 150U;
    msg.destination.assign("HTDYEOKCXDOZXAJLKQHSUGSBUYMHRVVADTVSVUMQGYXWPYNQNJAZUJOQZNBLRYGHUVFGKIUTDPGKZIANFZBEYUMHNIIULEAISHTMQWNVGVPFTFPIAWKDTBXEJXKQNIJ");
    msg.deadline = 0.492314212591;
    msg.range = 0.270366078131;
    msg.data_mode = 213U;
    IMC::SetEntityParameters tmp_msg_0;
    tmp_msg_0.name.assign("ZVOMIGMNSRWISYETPKSOTDZIBOHRGWEALAYZYWDFQORHNGNCLUVKDFQJNVVFPPSXOYIUOTANKIUKL");
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("FJZGHHPPIAQODFNMJROKEXINQYAQZQPTUDRKGNWVYSOACAEUUJKMLLNKIINDUBWURYWAQVYFNWSCMGXEHCPBKPSTYAMHBFKSEFPOPZXJPHCHMELWVZRADWSVUGBUVRDZFZNKJOWJXDQURFYQI");
    const char tmp_msg_1[] = {-68, -105, 8, -75, 5, 126, -12, 45, 19, 33, 25, 106, 123, 61, 31, 89, 1, -127, 40, -60, 81, 20, 26, 30, 96, -103, -105, 113, 11, -70, -108, 27, -38, -82, -34, 22, -29, 3, 3, 32, 96, 29, 30, -122, -56, 88, 103, -77, -24, 103, 52, -111, -8, 107, 83, -41, -7, 44, 24, 46, -62, -60, -98, -89, -12, -34, 1, 108, -31, 14, 14, -95, -125, -43, 31, -65, -35, 38, 54, -2, -83, -29, 52, 115, -103, 119, -34, -25, -79, 34, 31, -88, -21, -34, 17, -118, -71, 108, 74, 18, 101, -77, 67, 3, -22, -107, -32, 108, 84, 66, 30, -92, 99, 106, 20, 21, -109, 105, 42, 14, 9, -41, 123, -84, -27, 18, 118, -34, -27, -50, -9, 13, -97, -30, -88, -72, 116};
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
    msg.setTimeStamp(0.0330717136964);
    msg.setSource(24084U);
    msg.setSourceEntity(184U);
    msg.setDestination(35663U);
    msg.setDestinationEntity(118U);
    msg.req_id = 14958U;
    msg.comm_mean = 89U;
    msg.destination.assign("XWJDKVKMPQTEFKXVBTMNSWAVEVHLVHOIFCKDQVGRIPTMBSCZDFTYDMNBEGOQQZQYCGHUSWLCXZT");
    msg.deadline = 0.0144297333667;
    msg.range = 0.446682136647;
    msg.data_mode = 216U;
    IMC::SoiCommand tmp_msg_0;
    tmp_msg_0.type = 104U;
    tmp_msg_0.command = 78U;
    tmp_msg_0.settings.assign("FGNICLZCRMYETHHVBUVARHKVZWODXZIUDWHNVDUEINKBYEKGAABTTMYRPMFFDIDJCSBOLQDYFOVRNPWZDSRROJJJZMXCRPPIZITLMTCTSIFXWLLQPVJGAGQMYMMGBJEUNIZWGORGE");
    IMC::SoiPlan tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.plan_id = 11503U;
    tmp_msg_0.plan.set(tmp_tmp_msg_0_0);
    tmp_msg_0.info.assign("XCYMYHIHRFWLGZOVDZKXSBFDLAXBAJVAAOEUZZYSTOGFNUQJOWEUPYYPFJGDVYJEGMJLFVBIPVMERJOXQMIKKTKIHTQLTWNEJUGWIKPIWHFIRUNTDZPNCPSGQMCDYPQBVACDXSVEMPPEDSNOSJKOGTGHWORUASWWJHLDQCZELZCKELRUAN");
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("HFQKSINKKKMUGEMJZVJWFNTYZZBOMTABESWSDGWPSKRFLXDSLDNNBFMTVYOEZJUICBNTDBVERSZCLOOBPD");
    const char tmp_msg_1[] = {116, 30, -29, -124, -16, -83, 106, -102, 9, -93, -114, 19, -68, 28, 75, -50, -102, 75, 93, 2, 50, -50, -73, 81, -100, 43, 106, -92, -32, -122, -28, 86, 80, 118, -85, -56, 105, -125, -33, -120, 44, -38, 54};
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
    msg.setTimeStamp(0.000475689605163);
    msg.setSource(23982U);
    msg.setSourceEntity(92U);
    msg.setDestination(12032U);
    msg.setDestinationEntity(173U);
    msg.req_id = 21835U;
    msg.comm_mean = 36U;
    msg.destination.assign("ROITODJMZOPDAWYQUQJYOUWGLXUKQKTXHLPKRGFKTVEWAFVNVFFMQSFNIZVNRVNLKAEJHTWAPYIQGWHFUGIQXPPUMQHGDAODCKCXBAYIHIIPJXXISC");
    msg.deadline = 0.881989557245;
    msg.range = 0.574299253749;
    msg.data_mode = 6U;
    IMC::VerticalProfile tmp_msg_0;
    tmp_msg_0.parameter = 217U;
    tmp_msg_0.numsamples = 129U;
    tmp_msg_0.lat = 0.698517665503;
    tmp_msg_0.lon = 0.946215527174;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("OMSGJREOIDTOYJROSYHXDKCUDIZFIJHETWXLPMEFZWOXWDVPRNLQTALUGOFABOOACIDTXBWUEEXMFQQDNSRIMYUJQHBZGJRCKBGBFJAKMAVWMDKUHYVOGYICZPSHKXNETLZSFHFBZZYNHRQQJNJEGLUKKJALENGPLIHPTBKXZRRHSVIVVYRCCMPYYMCTFQUQTPFUWQDRXAPMFLXSUZATBUBXCLETNSMLYNNCVKWVGZQCSGDPWAIAOG");
    const char tmp_msg_1[] = {82, 8, -14, -9, -95, -22, 7, -94, -57, 39, 17, -10, 19, -39, -30, -69, 100, 32, 9, -99, 74, -68, 34, -86, 84, 84, -119, -5, -21, 76, -127, -102, 6, -22, 39, 90, 112, -17, -45, 17, 30, -85, -68, -88, 107, -72, -59, 37, 43, 78, 118, -39, 6, 119, -40, 2, 97, -96, 55, 25, 95, -25, 77, -127, 26, -56, -90, -113, 0, -68, 84, 108, 98, 31, 124, 69, -7, 17, -24, 4, -50, -83, 77, 83, 35, -18, 11, 87, -22, -74, 18, 101, 106, 85, 23, -84, -75, 25, 84, -71, -52, 31, -74, 48, 54, -64, 21, -23, -4, -100, -9, 113, -49, 47, 81, -46, -72, 22, 38, -33, -58, -63, 2, 16, -9, -65, 27, 51, 0, -93, -69, 76, -100, 93, -100, 60, -89, -15, -48, 45, 75, -48, 123, -6, -12, -45, -56, 95, -7, 120, -112, 70, -71, 111, -115, -81, -5, 100, 69, 12, 66, -22, -54, 95, -88, -19, 101, -67, 41, 116, 69, 99, -21, -18, -18, -63, 18, -60, -99, 112, -95, 17, -110, -125, 89, -91, 61, 96, 123, 61, -121, -68, 74, 54, 102, 99, -68, -111, -24, 40, -68, -41, -112, 99, -120, -63, -63, 52, -49, -4, 26, -55, 47, 97, 34, -7, 48, -14, -85, 102, -110, -84, 40, -1, 6, -39, -18, 102, -120};
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
    msg.setTimeStamp(0.0832951463562);
    msg.setSource(41706U);
    msg.setSourceEntity(172U);
    msg.setDestination(20717U);
    msg.setDestinationEntity(37U);
    msg.req_id = 48468U;
    msg.status = 29U;
    msg.range = 0.356022504776;
    msg.info.assign("UUYHSJNZCDLBPASLZVGPHWWUQFAARIVSTZHNQYEWXCHDIDFMQJFNXXXFCKQEKZJNTPOUPGBVSWSVKJXZBQOXNGWHTRYTIBILFGQDEQ");

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
    msg.setTimeStamp(0.876035967764);
    msg.setSource(13861U);
    msg.setSourceEntity(55U);
    msg.setDestination(26010U);
    msg.setDestinationEntity(120U);
    msg.req_id = 36146U;
    msg.status = 42U;
    msg.range = 0.586948458392;
    msg.info.assign("HUWOWZEHFJCQAGKPIDYOFFPRSGOEDSCDFAEKPQUSUEYLEQLLDSSVVBRRYNFTUTWPMQMTVZISRDOXBQNFQUGVMZIOLCAFIWWWLBPCEZZROIENIMSGTLSZRAUGUYGQVZXVWJBW");

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
    msg.setTimeStamp(0.89401435611);
    msg.setSource(16679U);
    msg.setSourceEntity(107U);
    msg.setDestination(17190U);
    msg.setDestinationEntity(72U);
    msg.req_id = 21822U;
    msg.status = 194U;
    msg.range = 0.683934950893;
    msg.info.assign("FHIEEGFURHOBDCZGMANHYZUIMOZLUYECODLQPLNKOPHMDCJQYUAHFTUCDWIFSMMPCPCGPRJBYRAYGSFIUBUENQKOGRNJXKLWZSSFPXZVDUAWJRQOVGUBKOTAKKQRCHTJOWEBKELGGYLJAQXWTWDOHNBSTVLNPZFKYJZQXQ");

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
    msg.setTimeStamp(0.886432572448);
    msg.setSource(56928U);
    msg.setSourceEntity(29U);
    msg.setDestination(60119U);
    msg.setDestinationEntity(30U);
    msg.req_id = 27665U;
    msg.destination.assign("IZCVJWELVFAOCCVIFJDHVHVQDDBKQYAKBXPMLHAFNGLOMXWQEDOZSMUMZRESEXNSWQLBVYQXUKRPFEGZRYTCKGFJMKVPBPJGRIBHJOKLMWBYDRPRIDRTPBBNESIRUEHWUNJYANOWBXMDZNRYMJSBNHETFZPKHOXOAQWTKYWWCUXNDLIYQKATITFODYHTWJHSCGUJUSEDHPJQTRLFVATPSVUMXSV");
    msg.timeout = 0.242295908679;
    msg.sms_text.assign("VJNKQKKECQGOLHIGSTBRNXYMSAFZUMKSZMJLQMDRDPUGEMTAHKYFFNBCVBCJIZPHPKVQBITBQGOXPEOXNQNCIKQGVSCUXBWKNELPPOZPAYTXDBDWCCHZSXSLESDYIHGIRVLLLI");

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
    msg.setTimeStamp(0.885294481155);
    msg.setSource(31536U);
    msg.setSourceEntity(18U);
    msg.setDestination(50646U);
    msg.setDestinationEntity(193U);
    msg.req_id = 4636U;
    msg.destination.assign("CTKRGAUIGNWAEAWIRDXSWLTHDOSVPGXJQKIGNBFDBBJSLBLOAQUJGLORIKAQPUJPRTJHKUHWCCHZMQAXMJLSQONJWWUMXZRAKNECYTLUVLUKFMCNDFMPEOZDXPSOZFVGBYECHDFQMVJVPXUOHGLSMVEBZBASFYISXTPCMTQYDWOYGJNPXWZMCHTZVFSQHFFDPDIVQJWNBERQUVXHEBKEERIYYWUMYIRLBTXSTZPANKIDLVIEYOAC");
    msg.timeout = 0.233195119651;
    msg.sms_text.assign("UXGIVBZTQERTGPCOKUYLGLLBKWNZDFOQTCMLDXSBRLFQFIAFSJTJRMGVROPKNIOHPBLVYUNKMARGDKZSYXPWMEAXAEVTZKINQAFGJOJUZEZFTZQXLRBBFMWGVHZIIUKQRLCDSDPSMPSTVRWWVWXVZNHPESCSYCEMOISDNHFYCFGHHXCURUQMBHO");

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
    msg.setTimeStamp(0.330281765834);
    msg.setSource(46272U);
    msg.setSourceEntity(131U);
    msg.setDestination(52050U);
    msg.setDestinationEntity(111U);
    msg.req_id = 52846U;
    msg.destination.assign("UVARHTMIOQFCVDPLDNYSMAPOMZEVAQLIARZKBEESTDPCXVFMVOBEUBHBNIZVJGHFOYUQRNNDJIXMFYPLBLFLJGGFTRJVCTTFINZHKHNWWXIKBMSGAYHJSKZMPAYZAIFYQCFDV");
    msg.timeout = 0.617937732889;
    msg.sms_text.assign("FXMXLOFNLSWIJFRKNNIVLYODOXXWNRVLEFZKHDOVFEUGWYWYUJUHCZSTRZPCEIGBAKIOHYTWYXCCBTQPIFPJBPKQMMNVFMIELYLTXQQUWMBIDEAJTHHWSHUCESEYIHSRGMBAXFIPZAUZAZUKROSZERQUDYTDDFNVARJNSGTKQLJDPSMG");

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
    msg.setTimeStamp(0.0708983027639);
    msg.setSource(38412U);
    msg.setSourceEntity(139U);
    msg.setDestination(45720U);
    msg.setDestinationEntity(25U);
    msg.req_id = 9930U;
    msg.status = 79U;
    msg.info.assign("HUHCPLHINCPAKSCDCDNYEHEOXDSOMNXIBEQCYYYMARTOFNDCAYOBFLNKASMXRBJYQLDSWLCPWGUQOPKWQWENWTGMPLDLHANDVWNATGZUQSJMWSTCKRKLYCQBVMHZRJFGMEQVLQ");

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
    msg.setTimeStamp(0.782020611319);
    msg.setSource(48937U);
    msg.setSourceEntity(65U);
    msg.setDestination(15164U);
    msg.setDestinationEntity(66U);
    msg.req_id = 56363U;
    msg.status = 94U;
    msg.info.assign("PPXKFVZWOOHYEFDMKIXAUCAMRHDTQVCSCWXIPWHEVBUORSKIJNHZBLDJRRVCEVEUELKUJRRZ");

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
    msg.setTimeStamp(0.968830735305);
    msg.setSource(24727U);
    msg.setSourceEntity(205U);
    msg.setDestination(58071U);
    msg.setDestinationEntity(55U);
    msg.req_id = 48893U;
    msg.status = 63U;
    msg.info.assign("ODJBNLHBVRLSGXZSYWZHYYFNDVDOEUIWQMNPNYCAZLRDVBCBDXUFHFYTAQCENUMEHGROLCCNEXWVFUVSXOJZWFJWSZGDQAPPBINIKACAQTEIJGGQSODTPOLZXJSAYRGSCWTWWONFKELXNMSTSAPQAPYLVPKMQIEHTRBRMGMEJMIGJGBFXPEFMIKKH");

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
    msg.setTimeStamp(0.225325036444);
    msg.setSource(57320U);
    msg.setSourceEntity(127U);
    msg.setDestination(50990U);
    msg.setDestinationEntity(19U);
    msg.state = 38U;

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
    msg.setTimeStamp(0.998174579663);
    msg.setSource(14253U);
    msg.setSourceEntity(121U);
    msg.setDestination(34017U);
    msg.setDestinationEntity(24U);
    msg.state = 35U;

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
    msg.setTimeStamp(0.857144193529);
    msg.setSource(14701U);
    msg.setSourceEntity(66U);
    msg.setDestination(27177U);
    msg.setDestinationEntity(240U);
    msg.state = 75U;

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
    msg.setTimeStamp(0.798703197068);
    msg.setSource(50321U);
    msg.setSourceEntity(22U);
    msg.setDestination(60084U);
    msg.setDestinationEntity(204U);
    msg.state = 196U;

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
    msg.setTimeStamp(0.562286903048);
    msg.setSource(60119U);
    msg.setSourceEntity(90U);
    msg.setDestination(30216U);
    msg.setDestinationEntity(98U);
    msg.state = 93U;

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
    msg.setTimeStamp(0.559938712528);
    msg.setSource(51451U);
    msg.setSourceEntity(40U);
    msg.setDestination(5904U);
    msg.setDestinationEntity(51U);
    msg.state = 81U;

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
    msg.setTimeStamp(0.478337361124);
    msg.setSource(65120U);
    msg.setSourceEntity(12U);
    msg.setDestination(60005U);
    msg.setDestinationEntity(12U);
    msg.req_id = 33078U;
    msg.destination.assign("MZRYIYTXQOAROABOLWANADFDUFQXGZTXOCYOLOEBZOGISCARUDGEMLYKVEBWWMRGETFHVPWZSRDYCBDTNJMOPBXKQXHFJRIHXQAKAWXYPTIICSBBTRUEVWDCKNOSNNLCUUQTUDGUWVPENFGUKPSLIXNJPLHNABLSWZEYQJOHIHLTZGCSMLWCNJMNRHEJYREZYULJVRKFFHBQXSAYKVZIGCZVXFQMDCFKPTJMQTPIBVDKQSEGKISFJZ");
    msg.timeout = 0.4718284192;
    IMC::ExternalNavData tmp_msg_0;
    IMC::EstimatedState tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.310679515538;
    tmp_tmp_msg_0_0.lon = 0.886988882128;
    tmp_tmp_msg_0_0.height = 0.396020250468;
    tmp_tmp_msg_0_0.x = 0.532561947133;
    tmp_tmp_msg_0_0.y = 0.169753606201;
    tmp_tmp_msg_0_0.z = 0.349713137391;
    tmp_tmp_msg_0_0.phi = 0.911511447827;
    tmp_tmp_msg_0_0.theta = 0.728221369883;
    tmp_tmp_msg_0_0.psi = 0.504829811686;
    tmp_tmp_msg_0_0.u = 0.993520790803;
    tmp_tmp_msg_0_0.v = 0.163371590143;
    tmp_tmp_msg_0_0.w = 0.638447800644;
    tmp_tmp_msg_0_0.vx = 0.62691837064;
    tmp_tmp_msg_0_0.vy = 0.558497191;
    tmp_tmp_msg_0_0.vz = 0.666537616543;
    tmp_tmp_msg_0_0.p = 0.658375564696;
    tmp_tmp_msg_0_0.q = 0.165396595245;
    tmp_tmp_msg_0_0.r = 0.0609278718479;
    tmp_tmp_msg_0_0.depth = 0.614611367615;
    tmp_tmp_msg_0_0.alt = 0.674438311174;
    tmp_msg_0.state.set(tmp_tmp_msg_0_0);
    tmp_msg_0.type = 232U;
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
    msg.setTimeStamp(0.805705699756);
    msg.setSource(48162U);
    msg.setSourceEntity(115U);
    msg.setDestination(44597U);
    msg.setDestinationEntity(243U);
    msg.req_id = 55344U;
    msg.destination.assign("IQVOWPQBJMADNIRGREWPXBWQUPAFQSDDYECQDUZMLLCZNFGXTTLMZTBPKZENGUCHSXMTFMELKHDOKPCWGXUDXFMRUAYRXWAJYJGSEJHGFTIAAZBVWYCQSINGEHLCAVBVZTNLFIHWWJVMEVMDUIWINNDUOSVVOKEOJLKTPSSSKFIFJRPCJQMUEGHAIARKHRI");
    msg.timeout = 0.374213455276;
    IMC::SetThrusterActuation tmp_msg_0;
    tmp_msg_0.id = 174U;
    tmp_msg_0.value = 0.135381970571;
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
    msg.setTimeStamp(0.23306331638);
    msg.setSource(1086U);
    msg.setSourceEntity(140U);
    msg.setDestination(47148U);
    msg.setDestinationEntity(203U);
    msg.req_id = 57986U;
    msg.destination.assign("ACHMJSGFQOIQQIPNJLSTDUAPUDBKDFXEMSNOEKDPGFYYHXRXLQJNDRULBJJGHKPGXSWNVHSBCFWRRVZTXMYQXRHFXTILCCIGDCIAUZWUUOIRJYKCHYSLMEVQOPHEKEVCCHATQZI");
    msg.timeout = 0.0179920583733;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("AHACNPPTLYFHYMMKKMDUXMQYJVKXAFEDVIQTUVIQEWDISQLRXTJRXSDHMQCJWJYLKJZIWA");
    tmp_msg_0.description.assign("IPVYKWMEYQOFCQZFIATRBHTDAAJXWXNMBEXLZQWYBHJLAONUYLENE");
    tmp_msg_0.vnamespace.assign("CSPMVXAAIUHGTCCGLXWBFPJVDTLH");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("TEFMOEBIDLLUVUGZWBGWVQGBGOSCBSVUDXKXGBNREJVRNPOFHCNODTBLBBQZODYTEVRXVSYMPPMEDCGIJZIAJCJPZYPMINIOJKUZDASPFNHGHNDAFKFCMUAHFZGTYKJKMYWWWCWWTNYPVYSWKTGYXCQTZYQDXDMEKETEWHOJXILHSCZSXANFLCZZOHQKSQGUYPPNRLON");
    tmp_tmp_msg_0_0.value.assign("JJQHZDJXEMOUVCMBQCZLWVEQOBWZXHIKTWSLPJJFARCNHJFAHGEPYLHXGBDCYCJPKPPQRDXFXREWEKZHPAXGUNYYHPDZOQSVLUKESAHTOKCYKAWXOJCOULTMKLAFRK");
    tmp_tmp_msg_0_0.type = 55U;
    tmp_tmp_msg_0_0.access = 72U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("JORXYVYUDNTLSPFFIFCMCSLPTVHBDIOFHHWFSDLRAAQPCHGJYUKDXBEKTIWUHPNIZANGVGNDHPWOYAOQCIAJFKUXZQAYOEMWZGHEOWPUZRQDBINUECLDOE");
    IMC::PlanManeuver tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.maneuver_id.assign("EDJGMFBMSIPAGHAONSHDTKMFBZFDPLQUKQVWBVGKEBYXWJJYPQSWIRXNRLJCUSUUANLVHQOMMTSIHMNKGSFBBEVKXSBRPKQZZJGIDXXMNTTBZFYDWRVICFMCFSCEHRIVYXHRAZDXEFKDOPJCWSYDQCGOVAAUONNIJWSKIWDQNDFZWZ");
    IMC::RowsCoverage tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.lat = 0.486091426757;
    tmp_tmp_tmp_msg_0_1_0.lon = 0.415648299008;
    tmp_tmp_tmp_msg_0_1_0.z = 0.268419452794;
    tmp_tmp_tmp_msg_0_1_0.z_units = 207U;
    tmp_tmp_tmp_msg_0_1_0.speed = 0.410021913715;
    tmp_tmp_tmp_msg_0_1_0.speed_units = 10U;
    tmp_tmp_tmp_msg_0_1_0.bearing = 0.97022929217;
    tmp_tmp_tmp_msg_0_1_0.cross_angle = 0.164772550459;
    tmp_tmp_tmp_msg_0_1_0.width = 0.29518078415;
    tmp_tmp_tmp_msg_0_1_0.length = 0.34416046313;
    tmp_tmp_tmp_msg_0_1_0.coff = 144U;
    tmp_tmp_tmp_msg_0_1_0.angaperture = 0.265652385286;
    tmp_tmp_tmp_msg_0_1_0.range = 14066U;
    tmp_tmp_tmp_msg_0_1_0.overlap = 131U;
    tmp_tmp_tmp_msg_0_1_0.flags = 51U;
    tmp_tmp_tmp_msg_0_1_0.custom.assign("XPUZJPSVXUVCOENEWHJHUTOASKUBGDNXFUDQGTTOFQSJMYRIWBMKNBIYAUNQSQYLEMGXXYZWXRQEWPMYVMWOKMEHSPAPQQTKVKZWEBDVTKTIFPUNYHOQJAGHEAYRBJHYTDAWQJVOLWVQPRRZKLLBNXYMOLBCKEJHRCSAHCMZUIARJTNBFIAXFBAGCXFVDMIILCDFGFFOOEGGWSVRJUIYZPNFZGRLSCPKUODDJSWDLZSCCI");
    tmp_tmp_msg_0_1.data.set(tmp_tmp_tmp_msg_0_1_0);
    IMC::LoggingControl tmp_tmp_tmp_msg_0_1_1;
    tmp_tmp_tmp_msg_0_1_1.op = 2U;
    tmp_tmp_tmp_msg_0_1_1.name.assign("XOKORZFUKVEVAJUFWHXLCBZCRYNRICHKGQOVNTFXFSNNFXCCOUXPAGHVDNADCWSDDUSTTARUBIHURQZFXHMVUPTTMZHPYMLEUBXJMVJPWOSK");
    tmp_tmp_msg_0_1.start_actions.push_back(tmp_tmp_tmp_msg_0_1_1);
    IMC::ImageTracking tmp_tmp_tmp_msg_0_1_2;
    tmp_tmp_msg_0_1.end_actions.push_back(tmp_tmp_tmp_msg_0_1_2);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_1);
    IMC::DesiredRoll tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.value = 0.411056106037;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_2);
    IMC::DesiredVerticalRate tmp_tmp_msg_0_3;
    tmp_tmp_msg_0_3.value = 0.441374980035;
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_3);
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
    msg.setTimeStamp(0.705083103108);
    msg.setSource(24750U);
    msg.setSourceEntity(82U);
    msg.setDestination(2333U);
    msg.setDestinationEntity(200U);
    msg.req_id = 37679U;
    msg.status = 131U;
    msg.info.assign("AKKSGMMQNHPKKJZZFLXUELVQIITFMAEZLOMSBXYMGCDMQZNBEUMDWUPFHGFWPKGTSQQOGIENEKMBROTAJILAPDDROVQHSABNZTJJBAECWVHJMBYWLCDXYFUYFHRRWTUFIRJTNXVTDUJBZRNUXUBSNIPXDNWVXJJPOVWAYLFOSPRSYLSEHBNPEIIKVOSCGFRSYKYWCTQQAZRCVHGANTGGDUWPICVAZCQUTCLDVFJWYKRHPLDKYG");

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
    msg.setTimeStamp(0.876663000865);
    msg.setSource(46132U);
    msg.setSourceEntity(212U);
    msg.setDestination(60729U);
    msg.setDestinationEntity(116U);
    msg.req_id = 21950U;
    msg.status = 49U;
    msg.info.assign("NONGCXRANWFXWWOTDOFYIRFNBMYJPSAXTHECLKFXOJKWMDNLTGIRCFSYMBAYZRBKQVPUHLJYOKRFIGWUDZEZYXPSKZYDXSAGKAQIGFIFHZUMMWBUUIJCVQVQKDSGJTLZPUWVZOVMSHSGKKXOPDJANYQEZTTLZOTJVBEQCLATVEEJRLHUQCQPEPNVDIIBEDDTRJPVUNZHBMIAOKCJBCAHXPRENMFWQSMDFBXL");

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
    msg.setTimeStamp(0.197475930962);
    msg.setSource(35692U);
    msg.setSourceEntity(43U);
    msg.setDestination(56371U);
    msg.setDestinationEntity(209U);
    msg.req_id = 7644U;
    msg.status = 23U;
    msg.info.assign("NKXROMUFZWKEEOWSBWOVEUNWEGGSOJLAVZUTH");

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
    msg.setTimeStamp(0.388217173362);
    msg.setSource(38357U);
    msg.setSourceEntity(47U);
    msg.setDestination(7529U);
    msg.setDestinationEntity(0U);

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
    msg.setTimeStamp(0.607699616785);
    msg.setSource(63149U);
    msg.setSourceEntity(5U);
    msg.setDestination(62516U);
    msg.setDestinationEntity(232U);

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
    msg.setTimeStamp(0.897152441679);
    msg.setSource(26373U);
    msg.setSourceEntity(74U);
    msg.setDestination(4030U);
    msg.setDestinationEntity(151U);

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
    msg.setTimeStamp(0.77946239221);
    msg.setSource(16189U);
    msg.setSourceEntity(228U);
    msg.setDestination(45730U);
    msg.setDestinationEntity(90U);
    msg.plan_id.assign("KHTSPZAOCMAFZSWJSGZAREBVJTKOEUOMNBCILGNPKCGFSHSLWLYRNDVMFLUNXXCIJOOEQNGUWDJAVZSZJHMIOSDZOTKZWZCACYXWPQOTUFBCWPVPITAFOABDUXTHHJRGMIBUHLEJEKKGUUDBNSCVVB");
    msg.description.assign("DKCVAIOXSMVPWRGMXMWOFCNRCXSTXEZRFQTCPH");
    msg.vnamespace.assign("WGJDYIGIPUOCNTVWFEZLYEBQBYXJSJRNCWAVVMRLYBPDIRJKVFRXVCPDTPOBUFCYVEGQPHVJMTGBYBCZADXFOHEGHFTJSQODQCWRTRZRBAYHUBXHFJXEOLTOKTQNPHELLKVZOTGWAUOJIPHLUNGLBBKXMDFSNDCENJYRKCIUOQVKRPNHLAKVIXSENRWGQMCWMWZQAJIZUYNIAZXSMPHSEFHTCSGZZNLQSMWA");
    msg.start_man_id.assign("LYGIZQQIOBGB");
    IMC::Force tmp_msg_0;
    tmp_msg_0.value = 0.711785523496;
    msg.start_actions.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.870337568276);
    msg.setSource(13816U);
    msg.setSourceEntity(47U);
    msg.setDestination(36357U);
    msg.setDestinationEntity(113U);
    msg.plan_id.assign("GQGTMVNBEWPPPWZTYKEWOMKA");
    msg.description.assign("BJVUBFNYKKYQVMRGUJDIFIFOSZNNPLUIEIIMMELSFIWGLJDCCVUYJQXUBFKXXBQQEIEJOZNXWFAWADTPPQSPTPWSNXGCBUHOYWLXMPJJWHPUYMTWCBJCXYBOQEVZUFBYSJARVQTULGNCPCZHYVRLMSDTJOQGVHDXMZCWHEDAMASVE");
    msg.vnamespace.assign("GSHGJYAKOPNRIKVZODSZDJETWHULNZSCVCAKFKNQBWBMYZZTLIXYYYKBOVEVLXGUTQR");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("MAHJEMYZNAHEYFHLUETCSYKPDSWKILXOJNQAKOAXGZNPGMBXNDNSYSJAUVLTZEXACAPCDZLIJTUQKFRRGRSYRJVNHZOHVSTZMIYABHSYWMWIMWOQTKKMFVVDPLQVPBYTRSUNFVRIEGXPCIFKXPTAL");
    tmp_msg_0.value.assign("GMXOJMNVVBWMUCSPQMGVROVCOTTX");
    tmp_msg_0.type = 114U;
    tmp_msg_0.access = 71U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("GPCEDLTWPSYDZKEJXAVCKDTBYCLIYZGFSFVDANCUKIPBCQZTJWJKBLTTPMKWOAPHEVFESJTBLFBDAHFSVXYCIRJULBVLIKZAOICLNEUPHTGQVHFEQPPMMUNODWQENUTLVQJGDHQUMZISNNQMBZBOXKXMHUPNWBRJVITJPOREUKWGDCWXNSAGMONO");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("ZXEDONWALSCWQWBLKZUMLIKZIEGLGUQWDVNHROELZTYETMMHIODAKMSWBJEREQFJUTMXZNERVBWYCCVHQXLUPANGYANHFYEQMXSUAIQHBKFHMAVCSBTBCVOWGIFOFPOTTJTPDOPLPVUWCX");
    IMC::CoverArea tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.lat = 0.662054891981;
    tmp_tmp_msg_1_0.lon = 0.77235555771;
    tmp_tmp_msg_1_0.z = 0.0268565595885;
    tmp_tmp_msg_1_0.z_units = 220U;
    tmp_tmp_msg_1_0.speed = 0.943196108996;
    tmp_tmp_msg_1_0.speed_units = 73U;
    tmp_tmp_msg_1_0.custom.assign("KJTRZLQMEKWGXWGAZMWZLWXXBFUTABCGFVMFZJDDQCHZBWFSUNHWRVYPCVNQPKYWLEMQS");
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    IMC::DesiredLinearState tmp_tmp_msg_1_1;
    tmp_tmp_msg_1_1.x = 0.510687279116;
    tmp_tmp_msg_1_1.y = 0.904229137394;
    tmp_tmp_msg_1_1.z = 0.193434337389;
    tmp_tmp_msg_1_1.vx = 0.0755378388115;
    tmp_tmp_msg_1_1.vy = 0.358421019788;
    tmp_tmp_msg_1_1.vz = 0.742656918616;
    tmp_tmp_msg_1_1.ax = 0.0103045073579;
    tmp_tmp_msg_1_1.ay = 0.810456409366;
    tmp_tmp_msg_1_1.az = 0.777970377135;
    tmp_tmp_msg_1_1.flags = 55640U;
    tmp_msg_1.end_actions.push_back(tmp_tmp_msg_1_1);
    msg.maneuvers.push_back(tmp_msg_1);
    IMC::LcdControl tmp_msg_2;
    tmp_msg_2.op = 154U;
    tmp_msg_2.text.assign("CTANJTHZMVGKNAICZAPWHNLSCJFVABIBKUAEVJULQQQYYMASRQEBHBWFNASCOJXFEWXJOMTXROWWQVFKDMHDTQIHFK");
    msg.start_actions.push_back(tmp_msg_2);
    IMC::DesiredSpeed tmp_msg_3;
    tmp_msg_3.value = 0.797064640259;
    tmp_msg_3.speed_units = 81U;
    msg.end_actions.push_back(tmp_msg_3);

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
    msg.setTimeStamp(0.558177125973);
    msg.setSource(44286U);
    msg.setSourceEntity(77U);
    msg.setDestination(197U);
    msg.setDestinationEntity(99U);
    msg.plan_id.assign("KWCQJAGHNMMMWDJUDPTBJNSLNNTYEGZRRBBECDCLYDEKHFYFVVECFW");
    msg.description.assign("NQTISCXAXAVKUAJXVMENVNEXHPTFBFKBDZXTGZAABKYJFICGQGJIPHPOGRWLKCCIWYBRPYCUSDPWOKSGWETNAEKIQFLPGQZNGARWCYCSQPLVJZEOIRDIYBGMXDNZAJFHKS");
    msg.vnamespace.assign("JMHFQGWSDKIJOKDONCAPIIJTQYXJLSAFCQCNGVCXBERADZQANXGWLPZLAEDGSJSTCIXMBIUZCMIFHTVBWPRHQGPLDDEMLWXJFZQDOJBHJQEKYTNYTOKRRKUGASUIOMJFNPKKUYUTGEZMTWFDSRMVBFEQUHMAW");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("MGRGWLTFBVUFNTMQXDPMGLIREONMXPDJBACVYAKZWAZOTKQV");
    tmp_msg_0.value.assign("DNWXVMVHMBOCHGTKXOCPGKRNSVLKYDYDBTKRPQZAOJBFKUIEWFLTDPRUAVRBTOSXTGHCQYGWTUMWJLYAPUBAZMWOHXGQVHCLEFUFMBDQDMQSATZVBDGONFNWXHSEUYYFNQRRPJMNXIRFIJZJOSDXJSTEWBEIKSCOAXNBHIAVLULHKKUCIWPFFZWNKVJEPVYRGMUCZGMTMYEQZJCQRLABIPJZRSZOTPNALCDILHUKGDPZEXOISNXEQVF");
    tmp_msg_0.type = 182U;
    tmp_msg_0.access = 146U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("RSDHIJZFDRYFNRGQZHOBNPRQNDBJENGWCHNHMJBOLHAPLUMKAPYUXCSNAGZUTAKBWKYSPVZLASVAWFOVTJRPFFDAXGVTUXPZDIPUPJCHWEFZCJBMSFFOFKMHRNJLCWBCYISGMVJAKDVIXYTOPXKUMQVYRMYEXEVQGLBYGDXAHTIEGTDSWVRJEWKZUYKXOLWNNEQCABMCKYZBSHMLBWSIFTCULOKHO");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("LWHGAHNKWLNNGOWSCYX");
    IMC::ImageTracking tmp_tmp_msg_1_0;
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    IMC::LinkLevel tmp_tmp_msg_1_1;
    tmp_tmp_msg_1_1.value = 0.516173396172;
    tmp_msg_1.start_actions.push_back(tmp_tmp_msg_1_1);
    msg.maneuvers.push_back(tmp_msg_1);
    IMC::PlanTransition tmp_msg_2;
    tmp_msg_2.source_man.assign("URPMGSSXGNCNKXZBZNIPWHRWEUJWAOVTCNKYVDKRBFBAOEYPJCPSBHJELAGXQPOVUSVLLXAHRRHCAMIJPXNZVHCJEQFHGXFUYGSFLQFVSEUDIIPYWHFNZLGOMMAYZQMURAXWTZDLZQZRRRSWEQEGDZCLJLQIFMODPKEWSYDMGLOABWUXDUQGNKNMKKEDU");
    tmp_msg_2.dest_man.assign("NAVKOGOTULCAMZNRUXPXIXLMMAQLCMJIUQGHVPDELGQQNUOHEIMSXVJQUTFUPSWAEDTKVEPXJWGBBCFLCZYNIINCJKBYXHDURBHVVXPVWAOZKZFBSBYSYLDTNMCJRPCHZKKYLJDASEHRFHERNKJGQWQFAEOUFPCSSTOXZJEVGWGAPYDGPKVBFNQLDNMZJYK");
    tmp_msg_2.conditions.assign("XTLZEJAKBVTBXUDWLYRSBDVEYVKORXJGVCWAZBDJJIHDODUFVNDOIMBASKRXUCMBSOQHLMFQGEETKCKKREOFWVLHIIIHZHBXGGVFUXNZZCLHKIKVNTMEMVECOWWDPTIGNYOHLJPEOXARRWKFMTGZWNYSJRLCYUYGXWTYXIBLQEPMMMWXQPCPPYDKARDWNNHPUG");
    msg.transitions.push_back(tmp_msg_2);
    IMC::SoiCommand tmp_msg_3;
    tmp_msg_3.type = 67U;
    tmp_msg_3.command = 30U;
    tmp_msg_3.settings.assign("MXKNUCGLTRANOJEHUTGL");
    IMC::SoiPlan tmp_tmp_msg_3_0;
    tmp_tmp_msg_3_0.plan_id = 41911U;
    tmp_msg_3.plan.set(tmp_tmp_msg_3_0);
    tmp_msg_3.info.assign("ISCMUHBIFALYZBVZGJNKECYFXBNTBAWCYJQBBEUJYTCXDEUMJEXPOAALZWMTTILSSNRLMCFXQFISPLKDOGCKZREHGPGUPLUBGTMMJEDONRDPNJQLRPNOXWADKHCZWSFLHHQVOAFWOOQGPEVXZPZXAGCIHGWMVRNIIEK");
    msg.start_actions.push_back(tmp_msg_3);
    IMC::Event tmp_msg_4;
    tmp_msg_4.topic.assign("DAAMCFEMZCCVWLCSRUFCJXKPJWQODKRLPOQOEMIKTOKINHKBAEIGMYQXNNIEAJBVXRWOTGWWQZJZFLVLDBOFMJSSJCXYBMFRXYKUMAJKTGTBHVGXWISGMNIRYHQCLPENFSZPBAHBXDUYUMPBRCHYNZIEQBDTTGVNSZIHIGLUODUKHUWABNPNSRLFLSJQPU");
    tmp_msg_4.data.assign("NWMKDJYPUOMOHJGKRYHHYCOYWBNMXTLETESFFNLEPNHCWIEWDGXDMZYJHVQOMXRRHFSTIGEIDGG");
    msg.end_actions.push_back(tmp_msg_4);

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
    msg.setTimeStamp(0.595479748563);
    msg.setSource(35560U);
    msg.setSourceEntity(50U);
    msg.setDestination(1616U);
    msg.setDestinationEntity(25U);
    msg.maneuver_id.assign("PXPXFQNITXZWJMWDMVDXVPEHNUUKCFADUNYKQZZLKENCTFMTMEJOPIJBUSOOFSTMFBENQKTOOAWREGHVREKDBJUYKYCUHUAIVSJALIIFQNOKCQTZVWVLCBPBIZXUHMHLETO");
    IMC::PopUp tmp_msg_0;
    tmp_msg_0.timeout = 14834U;
    tmp_msg_0.lat = 0.524635605355;
    tmp_msg_0.lon = 0.699228724997;
    tmp_msg_0.z = 0.528103847938;
    tmp_msg_0.z_units = 254U;
    tmp_msg_0.speed = 0.682685927644;
    tmp_msg_0.speed_units = 254U;
    tmp_msg_0.duration = 32322U;
    tmp_msg_0.radius = 0.553830089179;
    tmp_msg_0.flags = 202U;
    tmp_msg_0.custom.assign("KHTZAHYKXQEPXKMZUSWPNROOFRRDPHGEWGJOHAHKVYOUMITZVTPJNOURFIQWYNQIVNSSSZCZCQCZBUUAGGLPYOCQNIJYKGGMUEJSYBBFRJAWINQXVRYCMSYLTNFXDJLHVEBQPXAVVBGMPTDXLDDRSQGYMILGUAIOJWCDWFTODILZTBJFBEVHCLKZBPWAFDQMKEZFBXWMUEOWHJ");
    msg.data.set(tmp_msg_0);
    IMC::UamTxStatus tmp_msg_1;
    tmp_msg_1.seq = 39626U;
    tmp_msg_1.value = 141U;
    tmp_msg_1.error.assign("ABTJZVEZZVHXQVMRWCXBFBUNTECEKNEJZVUTPWHIPBZQKQSKWQZTTRXFARAXSTLROPWLKMGGCHTDGJNNLRRMBPLKLKAQRBEHAWGCHVGEXLJUVAOIQFOHYLJNSIQJJCPQUQCADWYDFMZMYUTNFKTJFEUHYPFDSOUUDKCDPXLCIWSWOHEGCNEGFE");
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
    msg.setTimeStamp(0.598507529273);
    msg.setSource(24903U);
    msg.setSourceEntity(16U);
    msg.setDestination(61148U);
    msg.setDestinationEntity(27U);
    msg.maneuver_id.assign("TLFSJZBNQMOIFRKPPNXLLTBMGYWCTERUYMMKCPWKUU");
    IMC::Land tmp_msg_0;
    tmp_msg_0.lat = 0.574046367918;
    tmp_msg_0.lon = 0.624716635624;
    tmp_msg_0.z = 0.536789834894;
    tmp_msg_0.z_units = 199U;
    tmp_msg_0.speed = 0.80135216181;
    tmp_msg_0.speed_units = 128U;
    tmp_msg_0.abort_z = 0.222432419713;
    tmp_msg_0.bearing = 0.842461924935;
    tmp_msg_0.glide_slope = 69U;
    tmp_msg_0.glide_slope_alt = 0.211624293181;
    tmp_msg_0.custom.assign("PKJRCIMDXFEREBQCADIKNOZORNXWSYTPIZAAKLJFLRVFCPDESNBQAOAYUOPRZZDCHBRLTREZZYBXHLCWEYDJJJUDOJAPSVSISTASHLBS");
    msg.data.set(tmp_msg_0);

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
    msg.setTimeStamp(0.943957818037);
    msg.setSource(46985U);
    msg.setSourceEntity(9U);
    msg.setDestination(41685U);
    msg.setDestinationEntity(206U);
    msg.maneuver_id.assign("RKDIGLWLZBMAHTJUCBRJFQZNSVYRXUUYFSDHCPNOJATJXAXFWPUIWAHYNIWNQBZQNLTVFKVTDUIJJKOSXUHDZGTJRZIYNLILHEIUQHCOBIBQPPHRZ");
    IMC::VehicleFormation tmp_msg_0;
    tmp_msg_0.lat = 0.617753197008;
    tmp_msg_0.lon = 0.925272648478;
    tmp_msg_0.z = 0.341921090047;
    tmp_msg_0.z_units = 231U;
    tmp_msg_0.speed = 0.873138360565;
    tmp_msg_0.speed_units = 95U;
    tmp_msg_0.start_time = 0.260007151038;
    tmp_msg_0.custom.assign("LQIEVAJTAEYPZMUWQKIRPNHMKGMZZEBFTOVWCIPAVYFSYIPAQLNZGUDXPAMUFKFXDFYTJECJQBWHGHBTTJYZMCSHFXYUBHDSYBTVVEPIQRHOWLDFNCXWJXZKGOBDRMCHOQOLSKWGNMATQVWETTJOXZLNKJGLRFDIKTLHYPRIALOBKMCNOCQIQZDWCSEUGOPRUKHJZYLSAXEJGDUFJWU");
    msg.data.set(tmp_msg_0);
    IMC::VehicleState tmp_msg_1;
    tmp_msg_1.op_mode = 247U;
    tmp_msg_1.error_count = 39U;
    tmp_msg_1.error_ents.assign("APLDLRJSOQZKPVOOUPXNALTXQLFFCBDATGYPTSKNDZXWVPZLJBOTPUCLJMEDCNHSCRSWFHTOZRFRAWXKVQEAKIKZWUNGQTEXMPGULUXJJFCVZKIYZTLAZDBITXBM");
    tmp_msg_1.maneuver_type = 26491U;
    tmp_msg_1.maneuver_stime = 0.576302040215;
    tmp_msg_1.maneuver_eta = 5224U;
    tmp_msg_1.control_loops = 4170496725U;
    tmp_msg_1.flags = 39U;
    tmp_msg_1.last_error.assign("UGPLUDMKYKYTTFZKPIIHBNCVMYAWYDNOTRXKDFBWYJEHXHPJSHHKARSTWWOKNNYQMIRNUBOIKNZRTCEWLJNDRABVEYBOFLLCPPESCXFLULDXWWCHHDOIAZGUBVILTNACMOZNJ");
    tmp_msg_1.last_error_time = 0.0543499414269;
    msg.start_actions.push_back(tmp_msg_1);
    IMC::StationKeeping tmp_msg_2;
    tmp_msg_2.lat = 0.20692239409;
    tmp_msg_2.lon = 0.00509844447203;
    tmp_msg_2.z = 0.814326133381;
    tmp_msg_2.z_units = 156U;
    tmp_msg_2.radius = 0.592187695599;
    tmp_msg_2.duration = 2578U;
    tmp_msg_2.speed = 0.400707943604;
    tmp_msg_2.speed_units = 14U;
    tmp_msg_2.popup_period = 47199U;
    tmp_msg_2.popup_duration = 50760U;
    tmp_msg_2.flags = 135U;
    tmp_msg_2.custom.assign("RYDQWAAAPKTTDKXIFDQLAMFSWJDMLEZWJNPHOAXXMBTCFUZKFQYGOWQIXNKKUZJFIKDRMMBEYRHNRJSEHHNVICIIXQPIZJBGMGCBSNSLAVPSQHXMQWCDTVAMYZLGDVPOLELCDXZCUUSRLYUVGRGPFVBRWINWVKBKTJPDCYBFE");
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
    msg.setTimeStamp(0.339619924163);
    msg.setSource(36905U);
    msg.setSourceEntity(135U);
    msg.setDestination(53315U);
    msg.setDestinationEntity(164U);
    msg.source_man.assign("BADIAYLDGFPRLVHPDWCHUCOGNQLMAECFMHSZAYXZUGEYNBPHZTWOZEKJVUHJOTFUWWPTERGAIYRLPSZXGOXRBFKEDRVAPTFIDTSUPGYEXMBMGOPOQKHQXAXJAR");
    msg.dest_man.assign("RWDBKBESSAHDFMOPLOSFVQIRVGRCVFLBCUMUQTBWLDREOIWJCXMIGCXHEWHOPYNSPGLKVBAIJASPPCXUKFKAMAZQGOOSUNTXGCRGCONNJNFUHTXGHFWVGOQQZTUUNH");
    msg.conditions.assign("VAJNWMETHXHKYTOJFMMUOQPKVSNFVCLDQOTQBXMNOYXDEIPYQPTCKFKKLMVIHAZTAGJXSOWYRPEKVVVWLNDKHJAUOITRINDNPXUWXRHBLGZAMOQMRSWZGDEHSXBKUJGFIANHXBBCYLCRXLNUPURPQFHDLBGZZCDFSSIQPJDYQDUQQBORTCSCMXJAEZLHEZCOOTEYIWJAKWILBEFVHCCPAAWJYNTEWIPMTGZVFFSR");
    IMC::PopUp tmp_msg_0;
    tmp_msg_0.timeout = 42841U;
    tmp_msg_0.lat = 0.43868287353;
    tmp_msg_0.lon = 0.801212597673;
    tmp_msg_0.z = 0.826594963975;
    tmp_msg_0.z_units = 149U;
    tmp_msg_0.speed = 0.770727312312;
    tmp_msg_0.speed_units = 155U;
    tmp_msg_0.duration = 2008U;
    tmp_msg_0.radius = 0.107190620918;
    tmp_msg_0.flags = 62U;
    tmp_msg_0.custom.assign("CIDBIIZGDFQHIKNUFXPIJAHDDYNRSNFYDRSPTLNYTPRKHTUVUUJWTEMQZVYRRYKCKXMKDEPVL");
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
    msg.setTimeStamp(0.0987290916896);
    msg.setSource(20008U);
    msg.setSourceEntity(8U);
    msg.setDestination(63873U);
    msg.setDestinationEntity(136U);
    msg.source_man.assign("UGVADLBYZLVEKFJHBURHPYEHPQAKUFDFBOISITRQIOSFWDJTVIKSXNQJCKQIZBGVXAECWYVLVZLRWZXMATSSVJWCVSAQLSYRSNZEPKIDCQUHNGTFMTVPGDXDKHQRMYFLYQGPPFOMSEQYRUDRRCOBWETCAMZHJCJHORBWHDBTZEPPIZJAC");
    msg.dest_man.assign("ITWZTYXBLXQBWBMTIXEYMAJKHTDABBAGDUEDNOSVWKQTCMHHJCMOQQFIEOGLPLCFTGOFETDRIZZCFVHNIOZOHRZUVPJFGYLXVJUCHODOTPBVWBXIISUHSNLSVSHPOYWNCZJKVWKJIGRLEUAMEPSUAORQNY");
    msg.conditions.assign("WPKAOUKGVTFCWYYHZPDHAEAGLXZIYTTMSIENCDKLHSXGZFHRSQAMWPLNIMUNVCDEUSJXIBTXDVLZKBUAGTVUEBAQTAJUIKBIHQIESDKBRTFKEEBSEWNZJQJWXTJQYYGWCCAKJJNFMDOVLLOKFWJCLNDYNOHMRPRMYPGQWFDFOQCLOYSGMWJPSGUXZ");

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
    msg.setTimeStamp(0.274359104571);
    msg.setSource(41236U);
    msg.setSourceEntity(183U);
    msg.setDestination(55072U);
    msg.setDestinationEntity(92U);
    msg.source_man.assign("YBPOICPQLHRTNPTVOERABVMPFOXSOEFQPRMHNDFPENZQFPMYIWURVCBZNEMPTBABJTIZOYGSZRWXEZFZNCUOMTGSGKDFBUGKHAQIWLRGMUWNWMWULXLECBJKASYXENFLJURJIHKQHOJFQWQYFBEPB");
    msg.dest_man.assign("PJMCUKIBKNYRQUBUVBAPUDJWTQVSPXMFMSOKOWTGDOPSBPRFCYXMFDEOV");
    msg.conditions.assign("ZZMOADQCFLJGFWHZGLYDCKZVDEVTEEVBDJCYNVCSYJR");

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
    msg.setTimeStamp(0.553313628533);
    msg.setSource(55453U);
    msg.setSourceEntity(247U);
    msg.setDestination(2504U);
    msg.setDestinationEntity(119U);
    msg.command = 239U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("LYQPVYJBKMWJYVKADXNAWBFPMUGXCULFNTSHRIHFIRJQOHSIVOQLTGWFTBDMAASWBXYSCRWLJEOCMUCNRRJOZBZUHALSUCFYR");
    tmp_msg_0.description.assign("ILSCYRPSXHJXYVPLNQYAMPZUNBBBHIGBQOUFGODMEXCWQVIOWJHADMUECEXBUWKSMGARGRZKNIYMTZTTFQLWDOKZAXKYUOYYCEKLFVFMATECOVIFRTBCRASDPYJBLDAGLIKETBPGCVWEWIRRFKRVIPFZSXNHOPWQLNTYICCPGHHGJDHZWWSUAXZHSHQTUVXRXOJSDMUSKEXNYLMTEZMJODNHBAVPDCLJQNJPRFUKFJWEKVFZUIB");
    tmp_msg_0.vnamespace.assign("HMJRXNPQLUIUYZMZJFWATHVTNOPLCGJPPZZRSZDINXRFGPXVQSXNPNMEUTECXRBTXSFBDRDFFLXQIKGBRMJTOBQHKMRPOQWVDOOIFAFPOJZKJHY");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("IIDUJVTRELSJXRGIAHIAFQGMRDNKLCTQWKMOBHTSMBMDQLNHRUVYKJZBQZUQESNPXOTKEXZJBPRJVNGLOFKUWMBWFHFSPKIDNYQKBCZRKHGVFEYESXICNFJZOGVTPYFJYGVZNGGFCELPYZRPCXBHP");
    tmp_tmp_msg_0_0.value.assign("YXRZJDSTFQDQLBTSVFFKCHRDTKLJOALWHHZRLXZRQBOJSNSCUUDBAUAVTMIEAJDHKHKMMVKEXKSOLGCBDHLEDRJFLSIWLQEXHNPPOFFSNVACWZZTYKGDXCOECODEPNXPTGJBYIGOSTQJQNZMGGQAOIZIXRBVCMIBNIZPUXJQHYLATCKERWYWEGXPXFRCKUGUVTDMONPENWRVASHUMZVGWWMLVPYBTFFPUWPIBNKZGQOBRMFUI");
    tmp_tmp_msg_0_0.type = 106U;
    tmp_tmp_msg_0_0.access = 22U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("IJYXKQISUBESNCFAMBAYHOORLSWKLFVSMTYRFOZCSYGZZPATPZGKMZUFCKHTJLHHYUMUTZQULXAUDBHVRTEJISOEGOECTWXRNQYNEPUEVKNMFRENBHAKWKEMFPPWXFJGZQEPWRZICJVTGDBDIRBNKQCOPVVDHNRZCDWUJMDHGOJCFLLMGTQXQPMSWATXI");
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("WOSEPGJYCJHWCWKHDYXTQWJBARPRYYONQHNBDPJUZXRDEDMTNGLDVTIOBCQWORXOTYAXE");
    tmp_tmp_msg_0_1.dest_man.assign("APFIYMDAYCUZCAGKXYPHFMYSJSHVFCAHTTBFBLOPVFUQEJOODYQAPHMMHPGWVXRGAFCYUAQBOQEJNDQOMPMAWVIZTESTSGUFWQWFOIPCNBBNEVLBEKYYDJDHJZRFOSRSWKTWRFYEKHKVTXRVJLMEMBDNLHJGXZZWSGOQZPNRDULTRUPSITCJLWCXZNNHIMIQGZCCEBJRKIGDGQVRBTKALNUENIXTLPYLU");
    tmp_tmp_msg_0_1.conditions.assign("FJTAATLPLOHJXBPECCSAMBZJFCAHBZMDRMSODVSFLTSBEJLFLZMAUGPPVQWGNIFFKTLQRMKOEUAYSBMVSXRHVIGGKRUIYKUWNETRDFASTZYAMJPVTORQPWQXUYAYUBSKREHIEUKCEWIGXGPDZNXTDPCZKJKRIWBWYWXXSLRVCOJYOGSXXHEFAYNHQFDLPJOMIWDXEBPQINVWFDHUGDHJYNTQKDRVNWBZUCCGLVJNOKCZGINNYMCOMOZZIQV");
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_1);
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
    msg.setTimeStamp(0.983359178737);
    msg.setSource(40872U);
    msg.setSourceEntity(110U);
    msg.setDestination(40324U);
    msg.setDestinationEntity(191U);
    msg.command = 183U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("HIZWTNHWPRLVTEBJYRSKSOJLHPJASEAOXOSKTZDAGHRDBRNDXKLCISWXUWYFBRPWKPOQHARNZPMYMQRLBAPBEVRSSILKVVQVMDXIE");
    tmp_msg_0.description.assign("FWBUUREHNTRRJ");
    tmp_msg_0.vnamespace.assign("OGPSJMHRSILOYFWKDLKGBYLQGOKSYJZFGZOVWAMVHNUXKQAPFZNDBAYTGDRTXVPKTRSOPAMCMTJYUPNSZEVNOSJOUKIPEJDSVGRHBNBC");
    tmp_msg_0.start_man_id.assign("KUWNBMSWSQAXTKXJHDSSIRLZECBIRDCGIBWHQFWGCMHIJTPAVMJSHYSBUGQZFKIROJFORTKPSNQFLYVCJYCLLPOYLPXGXDMWZDLIZOMLAEZGVSMOGUORZAEQFIFJGGXVUOROYJXURKVYHDQAKWPBWPENLPFZECBXOKEDJYWQQRRHHNERVGKMUZNNDTLFTNFBJAEBIYPPEKNVJDCZEYTDZXUBQCVOTTCFIUAHNUACMSTHMXTHWPVIVYUD");
    IMC::VehicleLinks tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.localname.assign("XXEIBLDTDYCFUXYEOAWAWZPONTLBETRUCLRUGVRWWUMWRVBJNNVWKRJLHWSPNNLGEPGMOPUHGJTNLZKKDJTCPQWQKRDBGVPNHXHHXQDNSEHQRTBFFQYCZIYODVVKGMGLZQPGJSXOCDHRQMIECZVMZEYRDUSIULKAFYBXOYLTQBXQFSKPSAAOSUQAWAJAUEFAZYDKBTOAFSYDFBBXJIFTKJNX");
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_0);
    IMC::PowerChannelState tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.name.assign("WZHQVFRKHXYBAXNKKVUZFWRGTACKYNGOIAVRQTDDBDNPMSKMXKJGYQVFRMEVTWOAWIBCWMUUIENJJUSESNRHEFFCCKVXYRVMJCDBSMUDLALLWQQGZAJDNOOUPHQULBTEXZUDEXBPBOGITCLJYSJVAZFQEPAAQNPS");
    tmp_tmp_msg_0_1.state = 89U;
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
    msg.setTimeStamp(0.622281790048);
    msg.setSource(55818U);
    msg.setSourceEntity(113U);
    msg.setDestination(12090U);
    msg.setDestinationEntity(21U);
    msg.command = 86U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("DJBIGEGEYNTXVXAQKJREVQSUPQZTAHVKTVMNTAOGSRRIPNJYOFVFKJEWYBCYC");
    tmp_msg_0.description.assign("FNICQWOEFYMSLNKLYTNJVFIUDCHDYGTXZOOBWQOBWTYSVQKFGZRDDHOMQHRFAWRWWZHPEKDURODPVEDEUMSNSCPYKABMIDQEFQJHSPRJKZXVZSGTKGEXJFPSECYFJMDBZXCMPLTBGQYPIOYXMILAALBDAOZULAIJVBKSXACQKPVTECIECJUZBUWJXIXQNMGKHZGGNHQV");
    tmp_msg_0.vnamespace.assign("NGSIFXKLHNEXIODGVWUBHEDEITZUBALDMMGSVCGCYMBSFBSFSJBVINZTTPSIORDWTJKRXKBPBYTOXG");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("SYJREOXWZZNCDPZCWHLCYKOLDSWHSJHT");
    tmp_tmp_msg_0_0.value.assign("BKZAVEREXHDJTNUAMGDONSNLKGYRUNKCHHCOPPVCFXRNORCDGDHR");
    tmp_tmp_msg_0_0.type = 189U;
    tmp_tmp_msg_0_0.access = 35U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("EFJZYDCZOAFIKXJKTEUOJEFOSHTGYDVON");
    IMC::HistoricTelemetry tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.altitude = 0.618844766951;
    tmp_tmp_msg_0_1.roll = 28846U;
    tmp_tmp_msg_0_1.pitch = 4187U;
    tmp_tmp_msg_0_1.yaw = 24873U;
    tmp_tmp_msg_0_1.speed = 11313;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
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
    msg.setTimeStamp(0.0730666887876);
    msg.setSource(64546U);
    msg.setSourceEntity(167U);
    msg.setDestination(40860U);
    msg.setDestinationEntity(150U);
    msg.state = 237U;
    msg.plan_id.assign("DIMIQWGDSDHUZPXFTDKGHPVXMKVRORTEVFZBQYVTRNZOEGOWAAODTIMBYLORBMDHDNCFPVWUJITAEUPSZPMOQTRHMULKECS");
    msg.comm_level = 244U;

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
    msg.setTimeStamp(0.944536051344);
    msg.setSource(58803U);
    msg.setSourceEntity(15U);
    msg.setDestination(43026U);
    msg.setDestinationEntity(110U);
    msg.state = 38U;
    msg.plan_id.assign("HBWXPOIBKQMTVCGHGSUFVWDSKBITNDEMEZWRSFFAFOFZUZAMXLKCLHCHGEJNCYDRLWFBPKLCUFUQEIYFLUYNSNTRBNKIYZJTYOSRTCJHYXHWSVXNIEGRPKEVVRXHSDULGJQDNLOMYVMPJHGQTDIMZBWOGAOXQWKTXWJTMHJVUCZQAEDMCTPDYALUWQSMFEOQVAYBLPSKZVIXIEPXWRQBPJJBNKFQGSAYHCNMORKAXCUJNODPAVRGGODTZ");
    msg.comm_level = 145U;

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
    msg.setTimeStamp(0.899886068206);
    msg.setSource(4561U);
    msg.setSourceEntity(168U);
    msg.setDestination(57988U);
    msg.setDestinationEntity(244U);
    msg.state = 143U;
    msg.plan_id.assign("RIVWQXNLYVDBSEVAFHJJKXBZBFERBNXYOZLFVZCQVZVDNTNIUYHEVQSMTFQGMMAJKUEJJXYIWAFAAWDTMQZRJYEDUDHANPSULAMBTYOXZCEZQCLMWSXYNOUKRWDCTKLFKIPPNVZKALGXPGARWPSRYONLARKSNTESGEKWCWJBCIPTXLROYGVUNBZYWRCHOICJHDGPITSEBRBHJPMKQHXQUHFTGSBMVQPFZFCDOPDEQUTIMSCGHILGMGJH");
    msg.comm_level = 235U;

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
    msg.setTimeStamp(0.933289720846);
    msg.setSource(52768U);
    msg.setSourceEntity(211U);
    msg.setDestination(6538U);
    msg.setDestinationEntity(163U);
    msg.type = 145U;
    msg.op = 190U;
    msg.request_id = 25231U;
    msg.plan_id.assign("PTRKEVVFSXIGDANMAZDBQMGTNZTVTFAIRXWFQYMTPYULMAVWKLEJDXIHIGTEZJNAUYLAEISEEYDKMKFLNWFWLIGMREOLJCUPBTANYQRSWXHFMJHRBZSGDWXUOQCT");
    IMC::AcousticSystemsQuery tmp_msg_0;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("BPMXQOSICHTAEFQAZKMQZHWIMTYOGASXJFEYSGSAKWEPQHMFSB");

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
    msg.setTimeStamp(0.591499557605);
    msg.setSource(61404U);
    msg.setSourceEntity(59U);
    msg.setDestination(22944U);
    msg.setDestinationEntity(32U);
    msg.type = 234U;
    msg.op = 229U;
    msg.request_id = 44349U;
    msg.plan_id.assign("KLZNDAUDMXICOHZJOQSRNTYVCKRPJJGQHTQWXXUCFYITYTDIUBRMXNOADESPWJAQYROBFSRETVCAZVTCKKIGCOAWYMZUGRSGSEXCFFMLHUVDESBUOBZGGPULBXLPKYFUMLVMDBGKKFZCSNNQHYENGDPVEKIIEPLOJAEZJWAFSIMBKZZHWEGYRWMJQBSZALQHBQYJMVWWCNTFXHWINSXODMUYAQNBPLQUTFVWVDDHJTFIPRTRPN");
    IMC::FollowTrajectory tmp_msg_0;
    tmp_msg_0.timeout = 38727U;
    tmp_msg_0.lat = 0.439450724226;
    tmp_msg_0.lon = 0.837781870409;
    tmp_msg_0.z = 0.970234364003;
    tmp_msg_0.z_units = 191U;
    tmp_msg_0.speed = 0.160004046693;
    tmp_msg_0.speed_units = 136U;
    tmp_msg_0.custom.assign("ILGEOJLSNSZXHUZJKQPBCYTHHFHIWDTFVPHOTTBKAXBKDFGKKQD");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("COUCYTPWYMNKBXNECXBGVMEVRVQONKIAGJDUGTCAKYQWQCHTIRKCWRZZEFDQVZDAMBXPJBDNPANFYESGQOMVKDYGKLKEHZMMAHFIXIIHQJDOJGPPSSGJTZRZEWNQOCCWZWKLBFGFHXXGJUYOXJNMUWXAPZNZVATYIMWLPDTFYTXUSGRSUDSDQMRIVAYLEIMZLBTISVQARIUWHHFWNFEBOJLHTAU");

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
    msg.setTimeStamp(0.106151082534);
    msg.setSource(53315U);
    msg.setSourceEntity(240U);
    msg.setDestination(35368U);
    msg.setDestinationEntity(163U);
    msg.type = 62U;
    msg.op = 79U;
    msg.request_id = 60791U;
    msg.plan_id.assign("INOKKYIXBDEZUEDBPTQBTDRXTXYFNOTFYKISNHWOLBIRTAFEPQADXV");
    IMC::AcousticOperation tmp_msg_0;
    tmp_msg_0.op = 172U;
    tmp_msg_0.system.assign("LAYQSVIVFMFKQLMFZWNPKYZTRZPZUJJDPPEMDURBASNXAQHFLYDJEIJCZTICCISDWYKWUXGWDROQYBOLMKUZBJLAETWNHPHLNEGCGHMTIBINSVUSSGVREUVVOLCXONLWVVPEXEIXJYGBFIOUIBZPQVSXNHTHIAWWOAZGBRPGLNXEJTZFCMLKMYXMVYJBTDTQNKAQAORTMYMCQQAUDFXCJRKSAWHFCRYGHERRXDPUFTEDHOKKOHOKJBNUS");
    tmp_msg_0.range = 0.534955651697;
    IMC::TransmissionStatus tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.req_id = 3129U;
    tmp_tmp_msg_0_0.status = 206U;
    tmp_tmp_msg_0_0.range = 0.750377316086;
    tmp_tmp_msg_0_0.info.assign("NSSXSOTORZWNRWGQXKGWTBVCKXSNLLKHKQHNLWUOABCIGUZFXWBPKSYRLJPOOQRDTJMXVYHJICWNIMZFCNUVUBDAZLWVOJWQPFDRETFCBAVTIPEDUUUUUVYQBUPKKZADHNFTCXDLLTCTGYRQTLTDALJDYZFKJVVAFMXKNISXRVBMYZQIGAYVESIEGCEMWDEJXPRNJYAFMNSHXFEEISYGHJPYE");
    tmp_msg_0.msg.set(tmp_tmp_msg_0_0);
    msg.arg.set(tmp_msg_0);
    msg.info.assign("PYVEGISCXEMCLXTSVCJGBKCXPRMLGHBNWWYCDAUPGRDAIVYGHFWBTDRPKSIUHRKVTOZOMWIQHJEMREUEILTEJBQFXMKVKWHGUDPHCQNIZXEASSRDFZBNCSHRLHYSFBLOVDZEYTQCNPVGRNINOAMNKRPFKWDWYQHBSOOLWJMBVSWFTDNMYDQYYQMZCKZVUULBGTNKJPPQXLJBAAAFLFZMAHEGOTINZFJRZTDIXZJJUFIQUAEL");

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
    msg.setTimeStamp(0.749417677784);
    msg.setSource(50688U);
    msg.setSourceEntity(75U);
    msg.setDestination(16507U);
    msg.setDestinationEntity(148U);
    msg.plan_count = 4822U;
    msg.plan_size = 986224924U;
    msg.change_time = 0.164601314867;
    msg.change_sid = 52421U;
    msg.change_sname.assign("CHXQVRWWOUJTOTUBJDWYLKQKPZQXBSUDINBONBISRPRHKTIISGRNNMPWCDUDWAXYZNZJYUEDKNRCZHKZSYJHXFZLGPPMFPRITETRFZHGSQKUQLQLWBTGUV");
    const char tmp_msg_0[] = {50, 81, -80, -16, -104, -21, 120, 7, -33, -20, 69, 18, -12, 88, 61, -89, -82, 59, 126, -105, -55, -123, 83, 40, -9, -71, -92, 23, -39, 123};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("MGTCHZWLAYTKOWZXFDUSRWFALFJQCJKYBLLJNCXUKKYYZXYBSRBEXUTWXEIQAFBKTPCXQCPOVJDVERZSVBHPBOKAOJVYRXRIHSLQWLUKRJSTSDGFEGZZGMOZRRMQHTPLIEGKAMJNIWABHVEMCIXMADAXJFQHUIAVERPOCDVHPCHHGPVYSUNCSYNLPKMGEFNUDQSNOQIVUFBUJ");
    tmp_msg_1.plan_size = 34713U;
    tmp_msg_1.change_time = 0.658833908388;
    tmp_msg_1.change_sid = 31898U;
    tmp_msg_1.change_sname.assign("DXKIHRYUPJLMZGUEHOWJGFPRDZUAECXSQNWIKDWAQMQFAYSTYJOPUMBEYPQTBZRYGKCZXEGYEQUFEFT");
    const char tmp_tmp_msg_1_0[] = {116, 89, 55, -114, 51, 124, -111, -88, -53, -38, 114, -19, 114, -42, 58, -15, 15, -16, -33, -30, 110, 53, 4, 92, -17, -56, -70, 61, 57, 13, 51, 74, 68, 21, -44, -77, -10, -28, 114, -56, 20, 5, 104, 36, -70, 20, 118, -42, 111, 44, 52, -53, 87, -88, -121, 1, -10, 104, 82, 19, -77, 67, -128, 123, -55, 120, 62, 6, -58, -64, 43, -79, 24, 82, -101, -128, 90, 87, 22, 17, -128, 75, 76, -75, 30, 118, -68, 121};
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
    msg.setTimeStamp(0.598558234569);
    msg.setSource(42091U);
    msg.setSourceEntity(104U);
    msg.setDestination(43687U);
    msg.setDestinationEntity(58U);
    msg.plan_count = 8557U;
    msg.plan_size = 2265381819U;
    msg.change_time = 0.911170854886;
    msg.change_sid = 7609U;
    msg.change_sname.assign("TVYRNDEGVEOAXTBWCHIBSBXOZOITNBQKFHXHKDEKPRSGWBMIHUUBTLJFZCSIEYSARPODCLYJVCPULIMTNMLKSVWXPWQHRJYIJTAEARFUZPXYMXHCWSYMBVXSPNLULLGIYGGEDRGTOVECAADRHUQNZSQFZVFSJBOQYOAYI");
    const char tmp_msg_0[] = {-72, -71, -116, -91, 120, 42, 82, 105, 28, -4, 17, 89, -2, -44, 114, 83, -41, 82, 89, -70, -98};
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
    msg.setTimeStamp(0.181029069737);
    msg.setSource(24712U);
    msg.setSourceEntity(231U);
    msg.setDestination(17861U);
    msg.setDestinationEntity(107U);
    msg.plan_count = 23200U;
    msg.plan_size = 413922041U;
    msg.change_time = 0.253386829015;
    msg.change_sid = 17517U;
    msg.change_sname.assign("GAFKLOCIUDHPIWCHYAQFWLBLNPPZVUXYVEMEVUFKFOQTFOZHWYJMDQYBVBWNFKSNBHULRGEXBATDMHZMWZXOZKRABRTHTHDLNKLGJIVZOYRETAFNCNYEEOVSOIVCWQNWQXPLHPPLQGKMDQZXDNJTYGGUXRPSAVJJWRTBKGINACFQZODKAIYPEOSAECGTVMTXDIJBXXKOZDYF");
    const char tmp_msg_0[] = {96, -55, -88, 108, 57, -88, -18, 107, -46, -74, -101, 46, -95, 83, -61, -69, -126, -126, 82, -116, -119, 38, 27, -112, -62, -83, 65, 98, 8, -91, -82, -18, 30, 84, -51, -38, -122, -27, 66, -106, 22, 110, 85, -69, 42, 100, -103, -104, 85, -43, 123, -98, -57, -12, 124, 32, 93, 124, -128, -107, -8, -48, 83, -99, 45, -118, -54, 13, -125, 83, 25, 24, 14, -1, 114, -37, -7, -104, -46, 55, 24, 45, 117, 112, -100, 42, 109, 108, 20, -13, -20, -24, -70, -5, 113, -101, 111, 118, 6, -110, -126, 44, -106, -38, 107, 98, -10, 94, 103, 109, -95, -79, -64, 92, 19, 40, -6, 80, -122, 44, 72, -92, -116, -12, 31, -57, -58, 50, 86, -105, -121, -4, -69, 43, -26, 61, -30, -11, -83, -24, 91, -68, 111, -8, -75, -2, 62, -13, -99, 70, 44, -82, -70, -15, -19, 14, -120, 39, 123, 29, -9, -84, -57, 39, 39, -21, -105, 125, 89, 28, 108, 62, 28};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("MJXXOINZQXKNWZLHWTRJAXHHAPUGUSCYFTRENBLQBCJSIVTPNKVMMXXJSRDUTWGIYQVIUEZYQKYHRVTPUCPHIMLFNPBJAFYZRTYYECCXBNCAOINVDWMDBHFQOOMJPFOHSMZUXRNGZETZKTEKYPBDQORADJUBKDUTZHJHXLCWRMNQFVZGWWGFOJLASBISYAFQS");
    tmp_msg_1.plan_size = 17300U;
    tmp_msg_1.change_time = 0.169950652431;
    tmp_msg_1.change_sid = 8538U;
    tmp_msg_1.change_sname.assign("PQNHOKIYBBFFWUXJDUTHIKHKBNVGAPTBFPUHTVOYQOYLTVGZXCZJCROIFWZFMDUQUQDNXHWPAYZCIXZ");
    const char tmp_tmp_msg_1_0[] = {0, 65, 36, -77, 76, 5, 106, -100, -70, -126, -89, 16, -47, 55, 69, 59, 38, -48, -39, 89, 114, -64, -87, -14, 39, -32, -98, 51, 21, -75, -51, 52, -47, 80, -82, -24, 19, -83, 64, 52, 21, 86, 13, 5, -90, 7, 78, -96, 107, -54, -108, 32, 43, 52, -76, -91, -87, -124, -18, 113, 52, 120, -28, -89, 96, -93, -127, -83, -96, 39, 74, 47, 76, 54, -62, 23, 84, 11, -101, -18, 78, 93, -1, 104, 85, -124, -124, -87, -103, 55, -33, -27, 77, 102, -116, 49, -25, -38, -18, 34, -47, -1, -117, -97, -102, -102};
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
    msg.setTimeStamp(0.267429901701);
    msg.setSource(55239U);
    msg.setSourceEntity(112U);
    msg.setDestination(10223U);
    msg.setDestinationEntity(253U);
    msg.plan_id.assign("JHNQKMZIWCQUBTBIZEISEYHQARGRLGODMYXUAVFAZQKPBVZPEEDVFRXQYRPGPJXJTLBDOKHHWJUHGMHEDVBXLAARPESHTIKCMZRWLLKWDJCWXXUMNVIPJXOGDVHGGFODSIQBLUTVRBNQEWFPGIVVOPSRSSYWAIMEWDMTLDUBRYNFEUATCTTFANYUEYFOHYSOLYDKZJTPOMKLKGANOQPXCKCJS");
    msg.plan_size = 58452U;
    msg.change_time = 0.0917575265473;
    msg.change_sid = 26033U;
    msg.change_sname.assign("FEKZVPECWMFZRMIQPHFAVDYSYICXAQVARUIXWJHSSKSMRIXVZWEBDBUICYLEGVAHLFJEPKDXOGHBRZITOBMHFWJPOFR");
    const char tmp_msg_0[] = {123, -74, 13, -62, -119, 36, -83, 72, 36, -126, -46, -66, 55, 1, -83, 106, -62, -27, -42, -44, -19, 118, -86, 55, -19, 88, -72, 94, -118, -33, -82, -30, -47, 8, -50, 111, 9, 125, -2, 30, 55, -44, 64, -28, 83, 80, -86, 81, 94, -67, -90, -50, -63, -116, -52, -52, -10, -78, -72, 16, -53, 37, 63, 78, 125, -96, -89, -31, -42, 116, 27, 11, 78, 4, 35, 24, 49, 94, 2, -121, -69, -2, -22, -16, -33, -88, -77, 108, 82, 97, -17, 121, -51, -93, 111, 32, -53, -103, 120, 84, -13, 13, -55, 65, 38, -60, 87, -18, -53, 78, -76, 7, -50, -113, 79, -85, 122, -19, -28, 4, 123, 5, 3, -72, -49, 112, 107, 10, 63, -87, -57, 102, -20, 9, -99, 16, -93, 117, 29, -104, -120, -13, -119, -116, -96, -21, 73, 26, 26, 125, -90, -37, 94, -122, -45, -40, -118, -101, -7, -95, 61, -122, -107, -53, -24, 31, -4, -14, -89, 86, 41, -86, 112, 3, -98, -13, -64, -25, 114, 88, -102, -95, 38, -120, -107, 126, -110, -127, 90, 109};
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
    msg.setTimeStamp(0.641900963597);
    msg.setSource(23787U);
    msg.setSourceEntity(66U);
    msg.setDestination(45926U);
    msg.setDestinationEntity(79U);
    msg.plan_id.assign("TTSMLXMXYDXHWZDLZLNSIIGJVPINLYZYLDDRHV");
    msg.plan_size = 5589U;
    msg.change_time = 0.144911278221;
    msg.change_sid = 10441U;
    msg.change_sname.assign("CONTCELWIDEDKNTHVIFJYIZDOUBQMUHXWQICDKCEGZZUWHCTZVBPWVPJQNKMNTLVZGSFWWGXUMBZMXLZQDTDDWSFGMKYSEOKZFHYRFGPKQYNJGBXTOWVDISPTBBLFIQPUZEDKRANMCJIKFJJISBULFRLNQAEDQFRFVGBJXSVMPUPEGSXRHQYGRHNUTAIAJQXVXZRCYYOYAABSPTCCOPMHX");
    const char tmp_msg_0[] = {-25, -40, 10, 94, 55, 78, -102, -123, 28, -13, -24, -64, 48, -53, -11, 21, -124, -51, 81, 12, 15, -120, -122, -78, -60, -108, -100, -113, 8, -93, 57, 111, 58, 125, 15, 54, -17, -97, -77, 34, 94, -35, 22, 71, 63, -79, -64, 40, -1, 20, -126, -6, -112, 1, 118, 103, -127, 114, -127, -31, 81, -95, 49, 35, 70, 86, 94, 92, -96, 11, -114, -22, 4, -80, -66, 111, -116, 70, -127, -53, -74, 123, -6, 2, 37, 119, -8, -24, 0, -82, 31, 35, -67, -27, 20, 10, -49, 125, -79, -50, 45, -106, -77, -12, -125, -18, -84, 55, 86, 46, 22, -58, -127, -46, 12, -89, 42, -70, 0, 1, -47, -116, -29, -115, 47, -32, 86, -120, 124, -83, -118, 16, 17, 110, -111, 124, 65, 120, -80, -109, 77, 105, -51, -112, 39, -89, -62, -8, -34, 0, 90, 5, -29, 101, 29, 55, 66, 23, -72};
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
    msg.setTimeStamp(0.62120793137);
    msg.setSource(8673U);
    msg.setSourceEntity(184U);
    msg.setDestination(52401U);
    msg.setDestinationEntity(140U);
    msg.plan_id.assign("OOXNGPONYNKITROMCIHKXELNZYIJOPQWCBNXRHLPPMMKHQZSJAYDZYJLDCFTSGGXTFFXZSZSBACJEHOUDPXISLGUVLNUEIBKSWVUWSYNLBVJUFAFADRNCBCMRHDEZXEZDLPQEUYNHOWUJRPMMDVGKVJGQKEFQZLIMBFEGTGXHUQRROIAAOCUFBYSF");
    msg.plan_size = 7278U;
    msg.change_time = 0.550388157003;
    msg.change_sid = 49976U;
    msg.change_sname.assign("QZXCCHTONGI");
    const char tmp_msg_0[] = {-125, -125, 12, -74, 48, -48, 58, -89, -27, -11, -62, 93, -122, -65, 102, 47, -99, 116, 76, -122, -2, -103, 13, 71, -2, -38, 80, -75, -74, -53, -96, 113, 84, -76, 20, -128, -57, 8, -43, 102, -128, -109, -71, 88, 3, -4, -19, 43, 17, -74, 4, -3, 40, -26, -29, -42, 20, -71, 40, -35, 92, 56, -66, -13, -38, 66, 66, -84, 2, 9, -88, 21, 21, -28, 31, -63, 89, 57, 51, -74, -54, 111, -100, 117, 72, -101, -8, 86, 16, -65, -51, 98, 11, -60, 0, 17, -30, -94, 68, -8, -18, 66, -63, 18, -104, -92, -24, -115, -71, -5, -78, -69, 12, -114, -83, 90, 78, 28, -6, -39, 83, -41, -117, 124, 41, 92, -94, 8, -51, -15, -70, -7, 58, 73, 40, -4, 19, 107, -46, 121, 23, 89, -26, 115, 31, 103, -70, -124, -21, 62, -99, -52, -90, -6, -40, 33, -51, 79, -124, -70, -110, 118, 80, -88, 114, -99, 108, 85, -7, -84, -9, 0, -77, 21, -118, -128, 75, -45, -83, -75, -107, -79, 8, 59, -62, -68, 41};
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
    msg.setTimeStamp(0.513408106815);
    msg.setSource(61776U);
    msg.setSourceEntity(149U);
    msg.setDestination(577U);
    msg.setDestinationEntity(158U);
    msg.type = 176U;
    msg.op = 103U;
    msg.request_id = 17310U;
    msg.plan_id.assign("OUOIPREDFSOOJCHXDVCIQXTBYVRWAMNGOZGHHYVTMTPEAUNQMTJXBANFRVGERYDBGSYFPUKHUBXHUIRRCQKGQHYQLBDTGLLDPYFVZLLYPCMZTZEVTHIRYSXDUZFUBJSNCKWPFIMWHPJVUDVMYSULKGLDNGLESZVHYAAKOQNBZNNDSSAZJCHWTIIUZJBXFCQJPTEMLARPIRTJKWZIMNINXWWKAOCJAFBSQKMOAXCEBOPFWWXGQSF");
    msg.flags = 27869U;
    IMC::GpsFix tmp_msg_0;
    tmp_msg_0.validity = 18945U;
    tmp_msg_0.type = 121U;
    tmp_msg_0.utc_year = 19190U;
    tmp_msg_0.utc_month = 155U;
    tmp_msg_0.utc_day = 174U;
    tmp_msg_0.utc_time = 0.79321666784;
    tmp_msg_0.lat = 0.674222724304;
    tmp_msg_0.lon = 0.474541047895;
    tmp_msg_0.height = 0.275287391948;
    tmp_msg_0.satellites = 254U;
    tmp_msg_0.cog = 0.251862864234;
    tmp_msg_0.sog = 0.0943375800002;
    tmp_msg_0.hdop = 0.177541787426;
    tmp_msg_0.vdop = 0.323854498763;
    tmp_msg_0.hacc = 0.561075283963;
    tmp_msg_0.vacc = 0.836534690142;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("AWJMKFHKOGXVPFMYHQVULCRWLNHGCSXWJAKBZPLUZWUJLMXEZGAYTZWEWYWRIUTWFHIVEPGPVYXGV");

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
    msg.setTimeStamp(0.371787977605);
    msg.setSource(22029U);
    msg.setSourceEntity(92U);
    msg.setDestination(58956U);
    msg.setDestinationEntity(49U);
    msg.type = 39U;
    msg.op = 189U;
    msg.request_id = 8241U;
    msg.plan_id.assign("RBENROICUIUKRMSAQOTPVHEDBUBYEOVJNMWFPFCXSTQXEIQCUYKCJVPQKWMNHWLBUZRYNEMKVXZWKANWSUTPOBRYMYXSTOEDGFCXMANHXPJJQUOYGPZYVYZWFLIEJRIAGRFIXORQCZJHREWGFLRTKJCAGAQTMHGALVLXMPTAVDTILJTPNBSN");
    msg.flags = 4836U;
    IMC::RemoteSensorInfo tmp_msg_0;
    tmp_msg_0.id.assign("NHGGLIIGAHACJOVQSSWELYJIRNVEQBKPESLQAHIQCTJGMXPPTIZZGCDNTYTPPDOOLRMRZQATLKBNVZSLJXDBYJNDNFHLSMTWJJUEJTKXRCONLAXUKKKCDVJRGFOOGWNCEYBAVSDOXWYMWFHJFKUASKUMDGFSKBMZITDZNYZHPQUFMYYUAEFYWPIDZWTXZMQVBRWHEHBXS");
    tmp_msg_0.sensor_class.assign("QROLYDSNMXVBEDTWPDAFZUHVFIQBKAVWCZOMNMJHNZFGKYRMPLGFECHOHGIFMGMXASQROQDWRZKQRFFCYHPPJJTLCPPBWLTPGTFCWARIHLAWESITJRTZDWLPUBMYONVHYNUFSEHDITUDHUZEBLZSEKBCBDYAAYVLX");
    tmp_msg_0.lat = 0.939838978178;
    tmp_msg_0.lon = 0.482540633227;
    tmp_msg_0.alt = 0.180458203819;
    tmp_msg_0.heading = 0.651398969552;
    tmp_msg_0.data.assign("YDCKGTNWBFZGMBSYSASUJLETTNVWLJRTUCNJEWDBRZGWDXQFVEHMBYFBIQHYDHKDVKXCHLCXFSOGUGOSIAXIJQZMIEYQQKKAQBACDJARTMPFDPUXUTFNCEHYOWCHA");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("RIOMEXOIDQAXGYYMNKYSKZCPAXWREEOEYDLHSJUTDYILVHROUJKKVMCSTDKAXLLGYNJHTSLVCPLWPQZHYTUFJRKNARLDSWBUTTEBOPMMWQSCFGGCNMBNFLKVZYRITXXEHMQFOGZHFGAMIOVVIJBUITYZBS");

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
    msg.setTimeStamp(0.319642721969);
    msg.setSource(37595U);
    msg.setSourceEntity(225U);
    msg.setDestination(28405U);
    msg.setDestinationEntity(167U);
    msg.type = 210U;
    msg.op = 54U;
    msg.request_id = 673U;
    msg.plan_id.assign("APKNXEUWTPIUPGCTFXCZSFJPLNOHDRBLYFYEJRNZQAAMGJVQPBTVCNHJEUGHQZOADQLXZRULMBIALWQFDQEGJKYCXKVRLCKUGDDNAVVPHZIHOYNPQRFKSMOIWKYMBCSBDWMOZPSZFLIUAIINXYIGWJKFXVTFSCLODAXUHIJYPBHTYZEBMCANREJWSMIRGYWLUSMETCEQNXBWVHXOGJZTFJBLWSDTDBZRVYGVUPVKOQTASDEKOXHMKQ");
    msg.flags = 29260U;
    IMC::TCPRequest tmp_msg_0;
    tmp_msg_0.req_id = 55397U;
    tmp_msg_0.destination.assign("WPLLEKLAVFDGYOGGZESTGHNVHZJHRPQFYTNCVZNSKKAOTWNTPKVRHNUATUEXOXEUMMVAOGYMXMNNIAEXACQBILFMMPHDDESKSCFSHQONAUTKIBSXFTOCIYQMJIYVFYLEFXGCINACJMNBOBVRLPLIXBWPDKXEDAIRCIHMZUVJKOKJZDRZBQRODVUWOQPQGWUFKGZJFCJHQFQEYTYSYJ");
    tmp_msg_0.timeout = 0.718519270989;
    IMC::PlanControlState tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.state = 206U;
    tmp_tmp_msg_0_0.plan_id.assign("GFIRMHIKHSYTMMZJDLEEOUBJZFYVJEMSBUJWLCIFHRGNZVPUZGJGUMITWABOGSCMTZTGBOINQQQRFJJYWBRRQSNSRIPXTLOEEMLLSBVNUQXANQRUVCC");
    tmp_tmp_msg_0_0.plan_eta = -1507170245;
    tmp_tmp_msg_0_0.plan_progress = 0.108195861067;
    tmp_tmp_msg_0_0.man_id.assign("AADOSKPYYSHLIKZBRQHLVJPMSOGBQQZYCKMHQWJOLJGCBGPCGWEHNOXWWCPKENSRFFMGFMMJITTSREIXNUNZQNDIVUYDPSASSNDYLCVKLJPUTBVCHLSBRCPTOJIAIGVWAKRVFIALPKDGVYWIMUOQJFKLCYYNTUMJ");
    tmp_tmp_msg_0_0.man_type = 63173U;
    tmp_tmp_msg_0_0.man_eta = -688619185;
    tmp_tmp_msg_0_0.last_outcome = 229U;
    tmp_msg_0.msg_data.set(tmp_tmp_msg_0_0);
    msg.arg.set(tmp_msg_0);
    msg.info.assign("AOTHFYKBBLYUHHUDXUXFHWULJENGYLUPIUDWOPGVNBGAVEVEOCNIXSHVSSAEQPFZWMALYTOQJPTYIBXNKGPFZRCDDMEUKNZZTHSDIQWQEVMZTCJNIUTGXLSCDCUXNGXWFZSMGBPANILVULCVHSQBFXTKFKEJTJOKKZKMXJMMODHLABAAPESMZEIHBRFCCOJWQVLOMMINRZRC");

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
    msg.setTimeStamp(0.181599484788);
    msg.setSource(46418U);
    msg.setSourceEntity(39U);
    msg.setDestination(20711U);
    msg.setDestinationEntity(75U);
    msg.state = 10U;
    msg.plan_id.assign("ECPYZSPEHSDRHAQMKJULSIRNFQBWXHJZLXOKEGYOUGVQMJXHMRCUVMCYAQSIXLHELOWGNROAMQUWLUDYLPGXZFWUNJOPSLPNJJKKZPBNFOTQNBVEREAVSEYIKBPAETFLMSCYYMXGPDHZKKVMTWTOBNVQUEPUBZRRWTWACTRPCKZVQYNDAXTXZFJOTRMFGNFIZVIFGSKT");
    msg.plan_eta = -140007715;
    msg.plan_progress = 0.880053007648;
    msg.man_id.assign("BECMRZAUDYDIWHLXZJRL");
    msg.man_type = 31651U;
    msg.man_eta = 1154608334;
    msg.last_outcome = 194U;

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
    msg.setTimeStamp(0.055970276571);
    msg.setSource(17646U);
    msg.setSourceEntity(70U);
    msg.setDestination(62830U);
    msg.setDestinationEntity(230U);
    msg.state = 13U;
    msg.plan_id.assign("SRLENXUIBJHGIFPNVEEHBGKUVCXTPEFGKWXOQYJEKUZDTMRVWRXMKQEYWUOAGZZYBOQOAIFRLVWRXMRBCGJZJNFIFOBQFPMFTUUNTAHJKJUYVMTZAYPWLWMALHUXYBFQVLVCIJGWPYPOEPJLTECHKQYZ");
    msg.plan_eta = 383455600;
    msg.plan_progress = 0.650877165193;
    msg.man_id.assign("BLMRSQBYOJHHRZQKBRXBNVHQWUKHNMF");
    msg.man_type = 7240U;
    msg.man_eta = -977298543;
    msg.last_outcome = 130U;

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
    msg.setTimeStamp(0.94359933674);
    msg.setSource(31731U);
    msg.setSourceEntity(208U);
    msg.setDestination(47741U);
    msg.setDestinationEntity(232U);
    msg.state = 43U;
    msg.plan_id.assign("USAIPDGFYFHKKFDNLKAPRAUXTKPEVUZBTPFDXZUSPGHOWQKNMRLOAFIHBZHZUOPISLEXTDEGQDAZVBMZYDBTDOBHBLJQNYALCZSXQFNYOLMESHGGVNVJOJTGARWTOPVBEQNWHWOKMCWXQBCXJKWUXSHAVLNIJKASFEMDRFMUQECX");
    msg.plan_eta = 1843632860;
    msg.plan_progress = 0.268104984426;
    msg.man_id.assign("YMYWTHAPTKGBBZRVWHQWVVQUPZZWXQXPFEMSUBKPUCDBPIFBOLJYANPDUNCOQNXJEFRBVCIHKILFIUKVMSCOTBAJTTVGWBRGOJEDWXJYMCLKXSJHFNY");
    msg.man_type = 19757U;
    msg.man_eta = -1634395896;
    msg.last_outcome = 29U;

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
    msg.setTimeStamp(0.180379992625);
    msg.setSource(60307U);
    msg.setSourceEntity(174U);
    msg.setDestination(28736U);
    msg.setDestinationEntity(222U);
    msg.name.assign("BUQVQZTXCJXFFSYMWAPQLMFLQOAKIYIIRACEBDJPLLYHMMHVCHORLRCTLRDCEKRBBQZOTJIWESIIFPGEZNTXWOXUHNGNDGMYOTEBTQFYLNHCYSENDFZBFZNJKYSWISLLNJWEHZCUPKHVTQDTXWGIKBGGMPGRRNMMLNDXPBOTU");
    msg.value.assign("BMHEMVNNSUPPSCUDV");
    msg.type = 90U;
    msg.access = 176U;

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
    msg.setTimeStamp(0.861354181348);
    msg.setSource(52979U);
    msg.setSourceEntity(7U);
    msg.setDestination(44749U);
    msg.setDestinationEntity(248U);
    msg.name.assign("QBQIWJCJNXBOHNOXNIYOYBZMEFTNMSXGZZDIETWYEXPMBWRIKEATPYCJLGCECTNGXVSGFXPWUAZJLJCFDSUPLRLQPRWNHQCHKSYEDGMOCDHJNPJVBIXHVNZQVWEHXCIKLMERDWYLFMUGPXJFFGMVIGRWDWCTOBOSVWQUZJQUVFTCHRERKLSRAGZBSTQIVOGPOLKHIRKVUMMUREDASKZASKPONHN");
    msg.value.assign("GEJCQDIUUYMXMLSGTKAKZBMMYWAXAQREJIOOMBRNWUBPKGJLWNPIOYEHRWTZUNVJDSZZFVBVJDFMNKOLQKUIRYKMFHBISXXYHEASRCBTCCSYFJAUVFISIQZOLRCDFZBGLMGXFZVNVAHOEKPQGGAPFJQDVICFWXWUDCQOXIKVSVPAUPPSYTEYPTSQJHGNYEBPNWATQLHBKLCGTWYW");
    msg.type = 228U;
    msg.access = 25U;

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
    msg.setTimeStamp(0.126415748399);
    msg.setSource(21791U);
    msg.setSourceEntity(213U);
    msg.setDestination(30733U);
    msg.setDestinationEntity(213U);
    msg.name.assign("BFEEWCCRXSD");
    msg.value.assign("WUOFNVLWDWOAUXSWCODCSXXNBZFHGYEFVMMD");
    msg.type = 12U;
    msg.access = 169U;

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
    msg.setTimeStamp(0.260311862348);
    msg.setSource(54284U);
    msg.setSourceEntity(57U);
    msg.setDestination(20564U);
    msg.setDestinationEntity(102U);
    msg.cmd = 10U;
    msg.op = 216U;
    msg.plan_id.assign("IDSWAECEAGNQGSISLGCSEZMRKTJOPIBZLMQBOZHFRXAPSFPQVDWXRMSXSWPURCVBUYLROQEUOXLPPOGEPERIXXTRJJDTOHWLGUDUCITMNRLBVDQPVJMMAIHS");
    msg.params.assign("PEMKVMYADXAWQJVNZBOXTWKYEPMBIPWFPLWXEFSCTOEVOWGKBHLKNURGDBHKZHYAWZSYCKLTQGMSCILUCRUJFKPDBEUQNHFEVPLVJMXFRMSOPIYJUFHNZMOGGBICRWGTFGAPIAOBHLFHLYLALZAZTJNMQJYYGHVZRGSDSNEPO");

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
    msg.setTimeStamp(0.596713785519);
    msg.setSource(53124U);
    msg.setSourceEntity(15U);
    msg.setDestination(28470U);
    msg.setDestinationEntity(23U);
    msg.cmd = 56U;
    msg.op = 112U;
    msg.plan_id.assign("SVMHNPIDGJZBFZ");
    msg.params.assign("ZEDBHWZTQEOPARVWXDSTCKAZAQAGGJUCPHZFOFWQYBNYMLCHCTDCMRPLBKKPYXACOZHUDQYKUGGWQRHSYANOHGIIGIUUVDKWFXEKCBSIBMYUNCQIVSNJIXVXGSELAHTORBJFZITOUVZCLVMYMZENHPCSNQGVKADKJJRXSDLGNTQTIWSPREKYLYBNFXEANGFJKBVRLXMBLLDFUJEOHRJQTOOWPLWWE");

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
    msg.setTimeStamp(0.38047757864);
    msg.setSource(21169U);
    msg.setSourceEntity(141U);
    msg.setDestination(8617U);
    msg.setDestinationEntity(54U);
    msg.cmd = 123U;
    msg.op = 24U;
    msg.plan_id.assign("SWZHRJEPWSKMTOYNGEMBVEMNMZUJNMMTQDHWYUIPXGPOYEEKSUDGYQZFNRIVCJZJLBOWJBDARFDTRDQJZGKHFQEIBIJXSXXBFFEFLJBQTGCQVPRJLYPZCAZCCBQWKHHFRPEKDNLWUMQAMVISHBTLYCZJUVGDKXWBQUDCUKRTNXSLNHOOKSIALIYAUVOIGMVLGTOAVXEVQAGKWTRIIASUGTYOPPXPOHWYENMUALNZSYHRCBWSCD");
    msg.params.assign("VXIWAJZCJHMGWDAWSHBYORKESJNWAAMYAHCUIKMIRNKKYOGCFEHKTZRFOLCJDJXBUMHFXYCSVJSHNXQMJOHRCCSPXQETRGHUAUQMETVBEWFNPUIGOZVJIAADNBDMTPGBEPBJRZQGLRPKNHSXKVTDIZUEYTFLZFMBYVUFURERYAWUDQKILVOVLBWLWTLVNTMCPSNXKMFRLSLOYUQHPWSXLGDADSVXCPPO");

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
    msg.setTimeStamp(0.706847849909);
    msg.setSource(54574U);
    msg.setSourceEntity(118U);
    msg.setDestination(3542U);
    msg.setDestinationEntity(11U);
    msg.group_name.assign("KALONGNUCUMLAUIJYINKZLVRAKLCOWZNIHWGKLHDBLXKVXPBYQJZOMFAAFYTJRTFUKLVICHTBKIHQWXXOPGSUJTYGNYBTLCRRHSYHEDXGYWBAXRZDGMBUYONPHDMTPGWDXPZSBWZTYD");
    msg.op = 247U;
    msg.lat = 0.087964027268;
    msg.lon = 0.642381412802;
    msg.height = 0.209490908631;
    msg.x = 0.0437400817973;
    msg.y = 0.757828797173;
    msg.z = 0.20099217363;
    msg.phi = 0.480646572366;
    msg.theta = 0.40749565432;
    msg.psi = 0.174087301054;
    msg.vx = 0.0414030116404;
    msg.vy = 0.664782009998;
    msg.vz = 0.0319367726777;
    msg.p = 0.59470507318;
    msg.q = 0.132400503559;
    msg.r = 0.833007784993;
    msg.svx = 0.338303723197;
    msg.svy = 0.63449593624;
    msg.svz = 0.485634176814;

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
    msg.setTimeStamp(0.277987411611);
    msg.setSource(34950U);
    msg.setSourceEntity(158U);
    msg.setDestination(35039U);
    msg.setDestinationEntity(177U);
    msg.group_name.assign("AUNXLSVNJJHCQXZBRCXGROZLFUIISUYGYJO");
    msg.op = 213U;
    msg.lat = 0.161851122252;
    msg.lon = 0.944986488473;
    msg.height = 0.870388059736;
    msg.x = 0.333958444771;
    msg.y = 0.48404122204;
    msg.z = 0.746585877982;
    msg.phi = 0.225106062438;
    msg.theta = 0.455467098012;
    msg.psi = 0.973229909127;
    msg.vx = 0.334382602184;
    msg.vy = 0.815954059225;
    msg.vz = 0.53089150349;
    msg.p = 0.465778437083;
    msg.q = 0.376752111602;
    msg.r = 0.0084514001042;
    msg.svx = 0.460392172409;
    msg.svy = 0.250957043663;
    msg.svz = 0.205683517207;

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
    msg.setTimeStamp(0.402696306839);
    msg.setSource(61821U);
    msg.setSourceEntity(238U);
    msg.setDestination(50690U);
    msg.setDestinationEntity(186U);
    msg.group_name.assign("LWGKHZJPWBKKNFPBYHRYKBENVKOBUMRAEAODANIPRGHYQVCUOIUEIPDVGOVFJURGFZUKDXVABXMBLEPRMMSRWEFQMCNBZCYNUFLTGQHONRJGXHYPAHITQWTQGJVYIT");
    msg.op = 148U;
    msg.lat = 0.151569369407;
    msg.lon = 0.624642491256;
    msg.height = 0.565262676498;
    msg.x = 0.526057979226;
    msg.y = 0.626199539365;
    msg.z = 0.952548716888;
    msg.phi = 0.482626964716;
    msg.theta = 0.164936634296;
    msg.psi = 0.472680196047;
    msg.vx = 0.942308329626;
    msg.vy = 0.969449118232;
    msg.vz = 0.647409252622;
    msg.p = 0.441322994433;
    msg.q = 0.36929034443;
    msg.r = 0.134743766837;
    msg.svx = 0.500086675119;
    msg.svy = 0.919834894356;
    msg.svz = 0.58824902064;

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
    msg.setTimeStamp(0.448649360998);
    msg.setSource(38791U);
    msg.setSourceEntity(100U);
    msg.setDestination(54356U);
    msg.setDestinationEntity(222U);
    msg.plan_id.assign("NXJZIQHOYQOPEJCOCIJXAJVSWVNTVGJUYTUUHPXETLTNLQJWCUGIGRZKSTYSBWREIIDIUZVCYJSFVEKXBKAHCBEPDUEFZQBLVRSFFUEIAFHKQDLWYYRURAZZGVTYJSSEPDXMOBRHAOPDXKDPHGAPIAXQLKQWSBKAGWNMHMZTBTRNAVBDFPKZCOFRGGFHKZDNNHUCNDBHYXQUMJKTLBP");
    msg.type = 45U;
    msg.properties = 68U;
    msg.durations.assign("NIQYLRCFXFBWOAMANZMDBEHUVZTIBONQWPFKUFSOEDLIQSEIVBOCDRZKSITJBWKYBCVKSWGYXTQPTHPFGYGXQYEHECGPRORIKQAAFEQODHOLKOUPPZUHJXEYZLHMYDLWGWJQMJERVIFFJSDYUSLNHTCWCNFVVAAUTMZTKMGTGUMKXNBUDXHNA");
    msg.distances.assign("XWAZGHTNABTINLQDQRUNEROAGDZXBFPMVPAKGNCWRLHSMZRXBFCIOMTDDPFWXYWBDMROYHJZIYKMBEKASIVUBXPQLZQRJSVEEYWYIIGVCLYFVJGOWUOWNCBBCYHUPSTQMDVPKGDBLKYCNENVTKJSTMPHNKJECERFIRDHFGSOTAKZYQKIOCHXFQHPLSGGLWMBOLDYXXSALNAIAXKJRESFPEGPIUUEWNZXJTQVHJVJATULCQ");
    msg.actions.assign("BYBTOAFVWZGUAOGTKFEMVHGQLPGXJKIDCUHJOQZHJWJRNTNPRPLRTRWIJEQLNXDOUCAKYLEEHAMHEJNNPLDIGGOAGEQYQZSTDQWQAEKUGKXTTWWXDYYXVVJWVEZCZEYLSCAJZVUXVQJTCCPWZZMRUGKKZBMFILSRLOLUMSSCTKKVLMDHSSPXFOXWRFPDNHIUMVOIXAFYEXYNGITAFFCIQWRUSDDOBSNNRNFBKFBBRPIBIHYQDCPPOHMBAB");
    msg.fuel.assign("EZDLNOADMRUPUKDTTNLTUGOHFIUFKGCCAMHKVVKKCPHBMTNZHBMYWBHMPLSSWIYSR");

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
    msg.setTimeStamp(0.547926384956);
    msg.setSource(37196U);
    msg.setSourceEntity(7U);
    msg.setDestination(9609U);
    msg.setDestinationEntity(67U);
    msg.plan_id.assign("HVAKWXEAJQCZJLHUDYEGJRPTFMSZNW");
    msg.type = 35U;
    msg.properties = 162U;
    msg.durations.assign("RZNSTOZPURDAZILJEWIRRNOYGCZPKYKFHTCEWWUPFXWUXBTFKVMILUECDNZCKXPSRYCAXSKIVDAKFOBMSXJNXCADOJVBJVITZPLEAGIGGBDURLJHKSMHQYBRATMSOOWTLKRZGZGPWQNQOHLUSDBDXQFQWZXJTVFUIVYQEQAWINSFCNCYAHRIKQEJNFDHEACLHIVBGEV");
    msg.distances.assign("FVSKMONNBXTOIIAGUFTEWYERWMEBBYXYUWOPWDQNLPTFEGAYHSUSZOEQYLJPUCSLXYOVZGANBTMDYWKVOXMBKPHLUQJWVNJOZXTCJIZPDQFGBCONZCIITBMCZWLEARJLKIDMRFDVCOUHBVHGXFIVRTAXLNNOPGSVRPLMHGCVFIWPBHJZXQXDNJR");
    msg.actions.assign("ZHEZDHWPKDLBDWYIZDKOQFEEKCBRTKFUF");
    msg.fuel.assign("ILMHQMEYAOGLBHRGEUVGTKIVXPXLSUDRHEZWLCTVWGKCRIZMMFOKPJAXWOYNWUQMDYFHJXIDIAQCWMPLZFBOPPOBVJNVCCGHRUTNTTAZNBAZMTQDJTEAIDBSAGNOJDOVRPIXEGXNSGUVHVUFWPTJGBUTBFRZWSDFHLOVQEPKXJRBDDSSVYKJZNMSHDKOYWICXUZHNA");

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
    msg.setTimeStamp(0.528130104718);
    msg.setSource(58480U);
    msg.setSourceEntity(210U);
    msg.setDestination(48450U);
    msg.setDestinationEntity(163U);
    msg.plan_id.assign("VCXGJMWLHYQGBOEVNDLHSRYVAIGWRLLMKJGRNDPOVBKPYKOIRQHSAIGCJXBGPBTBUBVEBQMVOCRZDNKFSAYNYMTHAFTMPKVXTVQKRGZQTTFZRJRERZJEAHWWENPECLLNWPDIUROYSFQIBAUULPWCGNNKWDFOJXHZFQCBOHVQXPSVQMCTBSXPAZTAXMYWZLAIELOO");
    msg.type = 77U;
    msg.properties = 92U;
    msg.durations.assign("RSMUJHAAJRXDXBUOGGBKEVLHSWHWWRLHBUCBTTPPSDYEOIOJLAAMRNFVW");
    msg.distances.assign("VUKYWUGEUJHSLHDZFNBKEYIWVEYWRGVIWMQCHPUAIPZHZNOTQCAFNMXDNALHXNGOMBTQRPDGMVVDNJXZPVRZTJZBMNYKLCGOTRCBXWYYFXIJJZFMCUJDUJIEQRPFKH");
    msg.actions.assign("IRVDNPZRORPBFHZLTUWGJSBAFXZNGAUERVOQROFXJFWMQIQGHHCCKYMWEXYLMWVOXKSWLIHWARQAFJPCKAYGFPCMQGLDCTGYUGBDHVUNMEELMANYCS");
    msg.fuel.assign("PCYQDRCYTVTODZAQWHNZSNDGXMSXRLZIMCVIFUUFJGGMAJKLMUHNTPBRPIACZKEXIBMRSEWOODISWREDEDFSJNNUQQMVPVLIBTZBUZLUALIJRTFPKJBFHDKSFOWGCALDQIQEMAYFZUCWVLANUMGLGTBWNHQEYSTYMRRSIYBUVXGRJCOZRPAEXHCYJNQBQVJFCFWSWMAESXPGJBDNCQVLEYOZKJGHBIHHYYX");

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
    msg.setTimeStamp(0.330928928172);
    msg.setSource(44291U);
    msg.setSourceEntity(126U);
    msg.setDestination(42090U);
    msg.setDestinationEntity(13U);
    msg.lat = 0.256160812134;
    msg.lon = 0.357682668777;
    msg.depth = 0.584094330134;
    msg.roll = 0.0538658669594;
    msg.pitch = 0.0885901465409;
    msg.yaw = 0.997969591775;
    msg.rcp_time = 0.929565942659;
    msg.sid.assign("XELHTLSCNKYHSJPWDRCBUHCWVMMLPXFXVMWUDDRAGBMCANESFNQYZZOWZEPDVCGVUTAXLCEEVWYBQFMDSUXOQWZJRGMLSPUOHAMVFNCRHMHQSTSBEYRGQS");
    msg.s_type = 210U;

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
    msg.setTimeStamp(0.421359784869);
    msg.setSource(44998U);
    msg.setSourceEntity(76U);
    msg.setDestination(420U);
    msg.setDestinationEntity(159U);
    msg.lat = 0.688668986694;
    msg.lon = 0.68680690692;
    msg.depth = 0.688591513108;
    msg.roll = 0.0295636065524;
    msg.pitch = 0.565891163868;
    msg.yaw = 0.554668397289;
    msg.rcp_time = 0.0537762048723;
    msg.sid.assign("SQNMGTLOUYEPHIJJINMBVYQ");
    msg.s_type = 211U;

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
    msg.setTimeStamp(0.776653608913);
    msg.setSource(5030U);
    msg.setSourceEntity(91U);
    msg.setDestination(956U);
    msg.setDestinationEntity(229U);
    msg.lat = 0.0261368662472;
    msg.lon = 0.870281798419;
    msg.depth = 0.945796343015;
    msg.roll = 0.684238562855;
    msg.pitch = 0.42177569309;
    msg.yaw = 0.223609831278;
    msg.rcp_time = 0.798540190505;
    msg.sid.assign("GAGWJGHDXCUCSVMGTCZCSCMWKQVNTFDCEAOXZIUSOWAYLEONCTPJMFPHVTVRRIMFDIQURREUBUACWLZYLCBUJQLXADRYGESTJPPOXRSOYABTAGVPTNOF");
    msg.s_type = 201U;

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
    msg.setTimeStamp(0.401959230539);
    msg.setSource(36266U);
    msg.setSourceEntity(148U);
    msg.setDestination(43758U);
    msg.setDestinationEntity(222U);
    msg.id.assign("HXGBCACNIAVWTBEIQRZOQOXHLKZHJGCSFSNVHFLJLRYVXZUXQLMJHQEBOIYHOWVKQRYFBAGCZCEZUJDEKYNBPBSYMKOVJOVJFKTSULFDDXSYLGAJEPDLXUDLUNCXDPNADEMEUNUWTSTLHJKAYXDRUBCMQ");
    msg.sensor_class.assign("ULNBZZUVGAHJJVIDIZFKIC");
    msg.lat = 0.955499229752;
    msg.lon = 0.890958604053;
    msg.alt = 0.939323931279;
    msg.heading = 0.194359745659;
    msg.data.assign("XVZGBDVHMRHYKHIGJBDVIIGWAROYHFOZKFTCZ");

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
    msg.setTimeStamp(0.0178152427572);
    msg.setSource(36197U);
    msg.setSourceEntity(101U);
    msg.setDestination(20355U);
    msg.setDestinationEntity(70U);
    msg.id.assign("FJYACXHZUMHKMKKYIVULCJTAWTMKQXNCUTXBSWBJTTXZOQIAULQGHSIQCLBFEVEVSSBZAHXQRWWPWTYSDHRHLEQHSOIAUISRWTPVBDBAHZGBNOGARGPBFMLGULOVJGGEMIDCENNPTZTXIFOF");
    msg.sensor_class.assign("JUDWAFLFFVCGMIYAFXJETIXSQMKPQDUKVYIVBXADNZMRUOLPRDXXWUEKSXKZLIGDLQUGTVAWEHHTEWYWMGQSNHWMJGJSXMRRCNJHWLXJINKHHLCZYAJXKRJJYTVSYRXCBKVCOGQDVKTOBYUNZIHBGDOPNETEPAUS");
    msg.lat = 0.543646552926;
    msg.lon = 0.825579731067;
    msg.alt = 0.558914988579;
    msg.heading = 0.844694358945;
    msg.data.assign("HHYBZLUVUWDMSARIAEZKPQAQOCICUNYFREIWCKJKXKCOOWPVDMHAXQYNICNBHGRJ");

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
    msg.setTimeStamp(0.515513564823);
    msg.setSource(35450U);
    msg.setSourceEntity(182U);
    msg.setDestination(26031U);
    msg.setDestinationEntity(147U);
    msg.id.assign("CRZPKNOESFVZJRBOSFTOJGYJDTSLHWSBOXOKYHVREZQLOVSPGJBVCCMRCVNYIEVTYUUVUMNHEYHISKSQBXUNEPBCJOSGMUFBRTIPTFILQAZAGFSFLZGAGUPCBNVLGAXADZKIDRSMYCFDDRXAKLLGETZPYFYIQUPTQMYBXMZDJWIMDHEEONQJXCUKEJKLDPJLHWLIJHQRZBHGPAIWTEBWDWWNKMFQNYZMOVAPXDU");
    msg.sensor_class.assign("TFWPXREXBBJHFRIHXVDGGIVLDJUWFAUGMFOKATFJPUZLVPXVK");
    msg.lat = 0.35991524546;
    msg.lon = 0.329127232612;
    msg.alt = 0.216416855981;
    msg.heading = 0.0269722724298;
    msg.data.assign("OUIWUGRLTNFHTZIKOZWMLWHMATRKDLFKPJOHZYGCJBZMYVU");

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
    msg.setTimeStamp(0.111056906571);
    msg.setSource(39654U);
    msg.setSourceEntity(135U);
    msg.setDestination(23264U);
    msg.setDestinationEntity(204U);
    msg.id.assign("HRAWPPWGYMNNAHGVQVKMUCTOVLVXDWOETYPCFIKLPBMRNIRMILQGZIMDKEFNVMGSFLEANJTNZ");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("IFMUXVPTIQVJESNVJDHONQNPCUKTORLZAINAFABTUKXJOEQFYGYEALRVLXGJVFBKKSOOSBPSGIZIGTBXMXPGGMCJCBQXOMYKGEFZBFMAHYJEIMYVYUPBCWQHCJLXODA");
    tmp_msg_0.feature_type = 193U;
    tmp_msg_0.rgb_red = 216U;
    tmp_msg_0.rgb_green = 82U;
    tmp_msg_0.rgb_blue = 156U;
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
    msg.setTimeStamp(0.890639387358);
    msg.setSource(24777U);
    msg.setSourceEntity(102U);
    msg.setDestination(53425U);
    msg.setDestinationEntity(61U);
    msg.id.assign("PPCFJJYGPEQWUCSRUDOQXYLEKCIILMMZXCHHTANMWUGKDNABEQUTODVAWXYNJUKCTIHPPOQHBRRBBWBHYGVUNJGTIGGGWKOU");

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
    msg.setTimeStamp(0.0166299217477);
    msg.setSource(14624U);
    msg.setSourceEntity(213U);
    msg.setDestination(22106U);
    msg.setDestinationEntity(68U);
    msg.id.assign("LVTSYDPHLCI");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("CLUMXXBHJPFRBYNQHCECERLPLPSHWSDKRDRVXVRNIMHIWMUBAVOFFLDNIZAYPFJFGIWMOOLDJMTMTKSLQGNINWTJFIBVMMCJAETXPEMVEJAUNUAWSTXGLPWGAC");
    tmp_msg_0.feature_type = 151U;
    tmp_msg_0.rgb_red = 100U;
    tmp_msg_0.rgb_green = 248U;
    tmp_msg_0.rgb_blue = 89U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.782113554878;
    tmp_tmp_msg_0_0.lon = 0.434858005058;
    tmp_tmp_msg_0_0.alt = 0.702494642597;
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
    msg.setTimeStamp(0.0633247570973);
    msg.setSource(60451U);
    msg.setSourceEntity(138U);
    msg.setDestination(6250U);
    msg.setDestinationEntity(251U);
    msg.id.assign("KVGPIGFLCPNMYNFVBPYRAEBYNAOUMGZFIVIOVHCOJOZWTYBVGTTIMD");
    msg.feature_type = 74U;
    msg.rgb_red = 32U;
    msg.rgb_green = 225U;
    msg.rgb_blue = 18U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.994311461828;
    tmp_msg_0.lon = 0.985413426055;
    tmp_msg_0.alt = 0.727479780757;
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
    msg.setTimeStamp(0.837229925904);
    msg.setSource(63219U);
    msg.setSourceEntity(254U);
    msg.setDestination(18434U);
    msg.setDestinationEntity(175U);
    msg.id.assign("MKSFSQFUQJMITEOHOHRYIHHXDDHQZDLOUPKGPNT");
    msg.feature_type = 98U;
    msg.rgb_red = 88U;
    msg.rgb_green = 202U;
    msg.rgb_blue = 214U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.510645596776;
    tmp_msg_0.lon = 0.77895155172;
    tmp_msg_0.alt = 0.39108081362;
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
    msg.setTimeStamp(0.673116204728);
    msg.setSource(44978U);
    msg.setSourceEntity(209U);
    msg.setDestination(65448U);
    msg.setDestinationEntity(146U);
    msg.id.assign("SGZXUNMUYMZQHSJDQUWYTVZQ");
    msg.feature_type = 223U;
    msg.rgb_red = 120U;
    msg.rgb_green = 231U;
    msg.rgb_blue = 31U;

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
    msg.setTimeStamp(0.189908803247);
    msg.setSource(17906U);
    msg.setSourceEntity(223U);
    msg.setDestination(57486U);
    msg.setDestinationEntity(36U);
    msg.lat = 0.697455513116;
    msg.lon = 0.557882580558;
    msg.alt = 0.214889937422;

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
    msg.setTimeStamp(0.240113590529);
    msg.setSource(46000U);
    msg.setSourceEntity(199U);
    msg.setDestination(28016U);
    msg.setDestinationEntity(146U);
    msg.lat = 0.3217515478;
    msg.lon = 0.59021256173;
    msg.alt = 0.579345318646;

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
    msg.setTimeStamp(0.945554890001);
    msg.setSource(62822U);
    msg.setSourceEntity(122U);
    msg.setDestination(24845U);
    msg.setDestinationEntity(226U);
    msg.lat = 0.969814728108;
    msg.lon = 0.989874657356;
    msg.alt = 0.648493968263;

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
    msg.setTimeStamp(0.92713231697);
    msg.setSource(41486U);
    msg.setSourceEntity(66U);
    msg.setDestination(61908U);
    msg.setDestinationEntity(243U);
    msg.type = 229U;
    msg.id.assign("NVQDCNVXVJNZEPQOALRQDTEQWM");
    IMC::FollowPath tmp_msg_0;
    tmp_msg_0.timeout = 5393U;
    tmp_msg_0.lat = 0.870746671225;
    tmp_msg_0.lon = 0.534620777658;
    tmp_msg_0.z = 0.701928607434;
    tmp_msg_0.z_units = 60U;
    tmp_msg_0.speed = 0.508076591626;
    tmp_msg_0.speed_units = 106U;
    tmp_msg_0.custom.assign("YPFZCKXLBJELHPZGPVPHXKQZEPNYGXVFOUYUTFJVIMWQPHBZRDSCOJFWWVKIUQRNBDOTYZDZWLNCYKRVHODFYXUBWCSSQLAYHNUXDLGPMISMAISEKNOWNBFUQBJROAGHINIDMDAHJITQQTSERSGQZLFVGXDYYQSZVCFRMGVIBABJUNZKFNTLPRXTWNYBSTTDHAKAWSMRJJPXUETEIOFCV");
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
    msg.setTimeStamp(0.593654555575);
    msg.setSource(31264U);
    msg.setSourceEntity(241U);
    msg.setDestination(56620U);
    msg.setDestinationEntity(216U);
    msg.type = 142U;
    msg.id.assign("OKFSPUNJCNROPFGHDNUMWBSSNGFHGNZQRDVUQASIJVLMLAPUEUREAOMYWHRRNTFXBOZNTELCGBUZGEQGAGMAKRCJEWIZRXDQPKIDAYILVPJVENSWHWIOHPXBBTYBSTDKCJOCOQUBMXFRXBEKAVYALLOYYFJJBQLZTGJRTOCXFPAAMFMTPGYFQHTWJLLCQUZKYTETVIDCHYKGKBISKSPOVNRWUIKQEWIIVJXWHXVXMFNUSDSMZDEWHXLQCP");
    IMC::Depth tmp_msg_0;
    tmp_msg_0.value = 0.17648020893;
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
    msg.setTimeStamp(0.686811271372);
    msg.setSource(59876U);
    msg.setSourceEntity(4U);
    msg.setDestination(63265U);
    msg.setDestinationEntity(89U);
    msg.type = 243U;
    msg.id.assign("LNGBZZMAFRUVOYCXDXMBPHIULQEQXLFHPBDUHSWLKEGPCQJRYZBBIPTOWBVKQWEGNKGVYSGMBLFTJWAYSCTFDZXEDQIOHKQSZUYBAXCOAMMHIZUDVOSVJEKNIHHEPCTXNXUERUSGUPTYAJECWPWKQWYDVPKCMJMJZATKGNDERFNASTLMJEHDHTDZMAVFRGBNI");
    IMC::RowsCoverage tmp_msg_0;
    tmp_msg_0.lat = 0.207462779964;
    tmp_msg_0.lon = 0.910967162485;
    tmp_msg_0.z = 0.311957141328;
    tmp_msg_0.z_units = 211U;
    tmp_msg_0.speed = 0.566157697532;
    tmp_msg_0.speed_units = 166U;
    tmp_msg_0.bearing = 0.272889111857;
    tmp_msg_0.cross_angle = 0.473129377762;
    tmp_msg_0.width = 0.639493055959;
    tmp_msg_0.length = 0.569287974879;
    tmp_msg_0.coff = 193U;
    tmp_msg_0.angaperture = 0.905197911773;
    tmp_msg_0.range = 35503U;
    tmp_msg_0.overlap = 87U;
    tmp_msg_0.flags = 74U;
    tmp_msg_0.custom.assign("FFDTUYUXMJILXIGYVJKDAREGGZVKVZQAZZBKAOKGMQHBDXHNDYHGHVHTIONIEMHRSQMNWDPNJNDKZPEPGYIHMCYYBQTDZMIWUPLXUAKIOLFTXLGBMQP");
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
    msg.setTimeStamp(0.545222904164);
    msg.setSource(15065U);
    msg.setSourceEntity(252U);
    msg.setDestination(24781U);
    msg.setDestinationEntity(249U);
    msg.id.assign("LYJNBRAFNOVPUOPFEELJBLWBDCZGCVNONRGJAYKDQNWPKDQJLADGPNVDIPCSUSBQGAKXLIPZMPWSD");
    msg.callsign.assign("AIHVFRAMNLZRTCPQTZOWRVXAWREHAKESBJMHENFODQGNGCVGJSPUMNGVCORVBBZUYYXLKDSUJPNPCCCXRJFEPHQJAWWP");
    msg.name.assign("VBRXRWYRFATYBEQCJMTMBDSFPJFQYUVDGGLGNQEMBFBKVGOTZEKUVQEQZZLVVZICICCRVXAAOZTWBAUJDBPWEILQRPKRYHVFQCMCHFSGAFOMDOWOXEZPMXQBONBLICYXHWPNWSDULDTYEKDJIHITYNKKLLSCRSNDEUEPGPIKJLDHGXAJLQCRYKKTOYRVTRZNOOZUWFNSXEHJUDPMHYZOJXSALWNSMAFSXPVAGWAFPHI");
    msg.type_and_cargo = 14U;
    msg.a = 0.140858890645;
    msg.b = 0.617013632304;
    msg.c = 0.10890587502;
    msg.d = 0.131124996292;

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
    msg.setTimeStamp(0.529251960009);
    msg.setSource(2569U);
    msg.setSourceEntity(42U);
    msg.setDestination(20032U);
    msg.setDestinationEntity(92U);
    msg.id.assign("MQOOMXTISDSAQYOIUVXEHDRFWQGKLMAAYJWNQWNKLLQUFVZSNLSTBBACWOZZEGPIQYGRQRCTKSJVXZQKLJUBGPCZGZXBMAGIPAJMWSVEXKETOTNBCDKEXRUHUYCLEYEHFIRGZMVBPBOBRUDBCJ");
    msg.callsign.assign("PYLEDLMIERPOSTDGJNEJOLYWHTAUEUXDPGYALIXQVYNUCOBRIFFWNHXUJJOZZXZAZTKWJHSQCMDMHCCEMENAUGUXRGRSVKBVZVICZFCBNWUDNFTBQXLBDFHZJBHSOQRUYYKNMEAWAOJCOFQILIIRPLRPYXRJSWSAELGSYKYRDZAPXRTPMAFTWVPTGOBGSUXDFLHJQKQMIHKXFKBLWZNCTQBIVZ");
    msg.name.assign("VBHXWCEIHVUQRXMFPYFWLSLSGZRZKJAJSLARLMGHQKWFVWIFTNTMLSMCXBGJBWXRGUAYCSBGBDRFPQJPDIORJAENSNHBEZOZSNUAVNGKVQYISAUYLKOIKFFMPETOYQCNFYYXZUPVDTINEKVMZKNIADHOMYNEUCBDRMWKGHNAOXZPTZAQHYDROLJVQXCCGBPHSFUPLRE");
    msg.type_and_cargo = 230U;
    msg.a = 0.812329771075;
    msg.b = 0.821975829531;
    msg.c = 0.481777703144;
    msg.d = 0.662170173742;

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
    msg.setTimeStamp(0.227204136616);
    msg.setSource(52620U);
    msg.setSourceEntity(94U);
    msg.setDestination(11371U);
    msg.setDestinationEntity(141U);
    msg.id.assign("KIOSRNZAVBEZDRQJCIBNBVMEPIBTOQBYSVXPAMLNXFVYWWWZVYQMGZEAQDKPCLDBBEFEYGYIRWGJOHTGXKILUTOKRAPBTESXNOUCLMQCSYIMJVXBHJTVZURECMLGWLCAWDYNCHQBLVQMWZDRLFWA");
    msg.callsign.assign("AILLKYXJWJAFGFQQBYFZNEBK");
    msg.name.assign("TFLLTYCEVCAIEPBSDAJXXNZU");
    msg.type_and_cargo = 60U;
    msg.a = 0.475096660806;
    msg.b = 0.0208685621254;
    msg.c = 0.757667880593;
    msg.d = 0.508336451652;

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
    msg.setTimeStamp(0.359204677416);
    msg.setSource(14290U);
    msg.setSourceEntity(36U);
    msg.setDestination(53128U);
    msg.setDestinationEntity(118U);
    msg.localname.assign("YOOBFRWDEOTGPNYSLACUKRGVPLGMCZFITXRCVVJVJRJMHEQOPPFNTZWKWAYGHMGWZNKVFGIKNIBLXOOXYYCVBNUPOSDWEDURVKQHA");

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
    msg.setTimeStamp(0.12888189919);
    msg.setSource(42223U);
    msg.setSourceEntity(244U);
    msg.setDestination(45060U);
    msg.setDestinationEntity(218U);
    msg.localname.assign("VSSMCWQWPFPTNJJFDLCHWBOBLBYLSHZFOPLFAPDQUVJCBSQMYABWHVDUNLNUHTHXQGGGXAQAFTTWDGLMZAYKCTUEMBMODCZVFSROTPEUZIAAWOWIIIDJDLESBFRZKFJGYVVUSCMIZRJVYRXAXXGOKBQOWQWQMKXZIHHUFIZHJXQKYLCYNEYNKPRISGKQRRZETP");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("ZTUYDITKHQXRWBXJDZWWBBCJQJYENKRDKCXCRZSREI");
    tmp_msg_0.sys_type = 33U;
    tmp_msg_0.owner = 4717U;
    tmp_msg_0.lat = 0.481554227181;
    tmp_msg_0.lon = 0.229998424953;
    tmp_msg_0.height = 0.320988205856;
    tmp_msg_0.services.assign("RRMAZOKHSFSVVJVWJLEHWQCALMFBMEZVOEHSKAGQYZKQRPMDDEYDNHDANDVBICTZCGGOC");
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
    msg.setTimeStamp(0.982632303852);
    msg.setSource(22075U);
    msg.setSourceEntity(227U);
    msg.setDestination(38367U);
    msg.setDestinationEntity(3U);
    msg.localname.assign("FQIUCXQOJKVUXCJMLKJAHXWTXKHQCTPATHISGOBDZSSPQOKYKDWZAMINFNQLDOXYSMDSMQBDGCBBOBLVANYPROECZPGQTFYGMGLKWYPNSXGBTEUYRFLQFRHETOJZZLUMKHETZAFUYMYYRNNWWWBJEIJXUNBMXVJOCPATJBAMVRPGRZCDXVICBETNNIUUUVFQHJSKYILMG");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("MRTJPAOQUMRQKXAHHDXBCBLRCQJGFWFPWNWWJLACQBYZJTGWUGYAUQIHPGQGVPFOOXEMEBGZFIDKDECSFVMBOLCLFOJQHRXHRYVDNUBZUATMIMZLNCPEFVDJYVFSUCTDTYBCRAINXZDTKUGCKRDJAICJYYPPDJGUTJVIDNLMYKSOWGHELBTLREWIRTONRNQSIEYEFKHXZAPWVWLKXHHQOXSSNQSHGOKVWKFUPSUMSNZAXMYPBAVOVISZZKT");
    tmp_msg_0.sys_type = 19U;
    tmp_msg_0.owner = 23857U;
    tmp_msg_0.lat = 0.654399514124;
    tmp_msg_0.lon = 0.149202162031;
    tmp_msg_0.height = 0.0831264905578;
    tmp_msg_0.services.assign("GLBYOBWSUMJQNZITTMEUCJAVSZMFNBDKFNUVJIXPTTURUSEFQCSGNPXMWTNLCKGXNHOQHCKSRQXYDRQDVCIOGMVASWYALMQEKEXURWIVCZDXDFZFC");
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
    msg.setTimeStamp(0.145609215967);
    msg.setSource(45985U);
    msg.setSourceEntity(49U);
    msg.setDestination(17372U);
    msg.setDestinationEntity(120U);
    msg.timeline.assign("KVERTYBJBZJWDYNHTJZHIIIUXQSFKOUCNRGLOMOUJWZGIEHCVFBNSLEFVMAKFJEDHXPWEXCRLOLLPWFJPYKMXTRKTOBPLIBPNDMTZOUFWWQSDZTJKVFAITITVDEBBSYUHHCXPQSQGNDKDVIEXZJWYSTNKVVFYXGCLZCJHMHZVEGCGBMRRAOBMZGYSAZAXQAIKRJSOFIOWGMBVUNLUARGROANDAASEPDQRCPHYMYHYKNQQDXCFCTGPWPNS");
    msg.predicate.assign("XFGHWRIOGFNHILTKDETRWECAKQBWHZXYNUUBFSCYMODPFCKUOGKNMLTUSHPWHPRXZVZAGJIWJBYBVOCJJVHBLVKTGQZUMCPKAOTMNAALPCDEFWWMLTNXBYSODIXYWYDEUTDYTKXGGHRN");
    msg.attributes.assign("NMNXECWDAJMQGVZQPVKPVEHDOSFJDBSQGMTDYUKIXIWGSNMIUFQZIBFPKFLWXWBMHPVDSELPJFALLELFOOKOVKEUAPJRAQCNEDHCZSGPKZACCKFYBPRRRWCTKLTFORYVECTFSZNOEIUPCCTG");

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
    msg.setTimeStamp(0.766407205907);
    msg.setSource(6730U);
    msg.setSourceEntity(94U);
    msg.setDestination(12258U);
    msg.setDestinationEntity(141U);
    msg.timeline.assign("PALWODRYJLCHQXUNIGWLKDQPFISZTGPAGOZAUCBCUEUGNEFVVMVKHIIFYYWEZAROTFRHVJRNLHPOTUGMSQRQYYMCDWIWBWPTCZGQEIVYKERVUNXVZMCNFKMOSHTLEZEFHDLZVCSFKJXSRBKJKJYFIKQXFFPMBMPAKSOCXSIJ");
    msg.predicate.assign("LVASCOELKEFMHPDNZNBKOIWMWJIVGJDBYJOBREAPTYKJIZPXRSEAMZYZDXYCEPYTHEALSQOZHAMCCLWFWKMAIYVBKZLUNCSLTTGDRQMHFBGQGOXZMWQRFVTUSNQURTTCNHIS");
    msg.attributes.assign("TEMUSBTAHVUCSFXUOVKPMWXGKBEPAGAORXTLCEEBINGVBWBOFBDLIANWZEFFTEWLTQJNUDWJMGZNESMTRJLKRQHGUDDYHPXZKPUNVIFIQXPMRRGWUHIHAXSON");

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
    msg.setTimeStamp(0.996771483612);
    msg.setSource(13645U);
    msg.setSourceEntity(234U);
    msg.setDestination(22661U);
    msg.setDestinationEntity(223U);
    msg.timeline.assign("FBBSUKOEPVMHTYWQAMMHEEZFGECAAZLYJTVTDCRHELVDRYDDHYDCNVCNGXWDJ");
    msg.predicate.assign("WGRKVNNKDKXQUPVFFRKOAJHLCFPTJOHDYLOQDZLDOTSSEKZEYMLVKBUFMTGIEAVTTSEZYJCUCIFWXJVLYBGADAUWHKFNXIPSCTVBLABQPSQZBMMTJ");
    msg.attributes.assign("JSMVZWYCADXKHGHZMXVNGXEXJTYPNIEQSLMMOQYSMQPFEVABVKFZNVEFONHBUYBWRD");

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
    msg.setTimeStamp(0.0834008346905);
    msg.setSource(30221U);
    msg.setSourceEntity(77U);
    msg.setDestination(28577U);
    msg.setDestinationEntity(224U);
    msg.command = 158U;
    msg.goal_id.assign("HQFEFDZYHCCKPPITNOCWPIFRCSBXRBEDQWOMAJNHANMDEYFJRUJKAWZSFMORAGBJUXQNMZFKHXMDSTZHTPXEFNKMSCWAAMIIKGTHLOVAMAVOGNYZJNTVDIYZCRNRFKBEZUWVEDSJHGKPPERIBL");
    msg.goal_xml.assign("LCMYWKUCJMBZSSJHFSZAMELBGEQOYHVOGEKIJQNTOUIZXUCFFVLUNFGNQEFSYFJPDXMPKLKVECJVYQRGFVJZCVXAYMRBANWTJCHDKBTDVAEXNBBKDCQHKHWOMYGSDSWTXYVCAOQGQRROUOJTSIBALEPZMLJUQ");

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
    msg.setTimeStamp(0.134324988581);
    msg.setSource(42973U);
    msg.setSourceEntity(149U);
    msg.setDestination(37424U);
    msg.setDestinationEntity(9U);
    msg.command = 190U;
    msg.goal_id.assign("BSSQKWAFVZSPEZDKBZYUOCELXMHCVPZHBHMJWRPCWWLZSPFGEOQGLAZVTSAIURYARWGBUKGDJEXXLJHDCHPYIFVYEQLOEMQKVRBXVFNRLNKXRL");
    msg.goal_xml.assign("ZSOHPLCGOQGAHDVXWGGQDMBXPBZTDRJLRTVWEZLQHTSVGKFVTRGHZCNHPHCAKIPYQHMABIAXZBKENWFSJCILMEFSPUULRAOKOQGTCBOUXTWCDXHLUGUILQBEVYLYBNYSBNYJCOMOWJFIKXWJHFJFUWGZKTNMVRFRNFKWXNKDDCSJDTEQOCLMIKIAAQMUZDNVVYPNZADJMN");

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
    msg.setTimeStamp(0.899399165493);
    msg.setSource(19725U);
    msg.setSourceEntity(98U);
    msg.setDestination(26795U);
    msg.setDestinationEntity(98U);
    msg.command = 167U;
    msg.goal_id.assign("UNETMTAPWIQPNIWZNSGIOPKWODVCFXTWXMSQPCGCCBKNBKMNYSKHRPDBLTDXQKSJFSLNGQBAAPNOOAKLRHXYFYYHLGJUYEBZDDHIXXVMZEMAVECYUSSJIOOIZDZJHEXAJUONWLTCNMVYQ");
    msg.goal_xml.assign("QZAEUYEAATATQJDCGXCYPHJTARBKWXBSWEQIOYOFNJTZVZLJWOJDPXJLYGHEBGECBKZQPVCPVATZDZIXROLGIDWZTVYIHYFHKEELZMNUUORSSRAXLUMLENHMXXOVMDNMNFUGQRPBKMRPLSFYVGYRGMAOOFVXUGSW");

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
    msg.setTimeStamp(0.883367135786);
    msg.setSource(48982U);
    msg.setSourceEntity(252U);
    msg.setDestination(14339U);
    msg.setDestinationEntity(248U);
    msg.op = 204U;
    msg.goal_id.assign("SBYFZFURONCDXLQQMLMNHMEOMULJFGDRZHQKTURJVNAAJSSHCTSPWKEXMZGGDQVXTIOHTKVOUTDYQBXGNYGLPJFXHWANJJZPCIBJRDOFIOQPBLCBCWFREULPYTAWQCUMVNOSCPMNXHXBWLBKEXKQPHTWDGPSEJKKTDRANECYJTYVYSIZIZQKCDNVBWAWIYAFAIMSVGUGUZDLFCOOASFGAYHNOXZVSEKVZIXERMTZPRJUVQWERRLIPEHFBGYLHI");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("SEHJWFZAMGMSXYROVCLQBNNPKSWXKKJOJQDSAYTEFZRCOIDLLNNEGWDYMAJJQETTNJDRTZRUGVIKEQWJGDHBDXCRONFACUYOIWWJKBRIAEKHQFNPMGLYGUPFGSXLHXIHZUJPTGPHXXMTRFWUZDRICEQELYPTZPUACFBVBZVMEOKWROYKIDAAJBQTRHIULVYNWQKQFBMSLGSCCDBOXUAWFZAVPMTPEZ");
    tmp_msg_0.predicate.assign("ODXPWENPFOQOOAMEVHROWUGSWPMBIILWUKSXWZWPPWSBAFXALEJGHLQKXRQWLCVTLYPYKEYFZUUJBUYCZRGJNSBQHTVIMAAYJZSQTASINFEOKOYEJNNRCTEQ");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("UFIDZUFWEONISGJKMUAMAFBQZDVEACYJPJZFQGCBBOHROXESMWDNPIECOLKLOVPQLYNDPOLHKOQSALCBUTJYTESHTTERRHIDBZRIJNJGMWPRGPYCNYXATVSJPBQRQLECOKWYMIPAEHSOWUSLWGKDFQFHCATMZAXYZXPQGBVDFGLWPVHHGUQVXWOUXFTCUWBBVHXH");
    tmp_tmp_msg_0_0.attr_type = 83U;
    tmp_tmp_msg_0_0.min.assign("ALJODTMPVEONRSMTOFHMCQJPQPZIOPZVZTNESZLBIGBSNKEUFFGHBSXOUZAXHVUXCNQXOPEYQLSTHCTFNRCRWKOKNUWKVYKKCEBKBNWGBFMQXMVWKGETLAVZIQXQAYBLPIUAHJMRVGCUBHYYLLWIRJHCCWAHHYPDRTUMWNEVOITSEAB");
    tmp_tmp_msg_0_0.max.assign("TEKFCWNXSVTUTKBOEIDQOEFWZJHDBQXODXKNGXVPZSOPPNWRUCUJQHLSQENOSSFDCNALGUULRFYTRGFKPWNJVZDYEOWSKHCBMQUOZHMFGMUXIDMGZIUBHLBKRBXVTCJNMMILMAHCGPSOAPDDTJSJQHFUYAOAWVEYWFWKHYPNAJVVRBVMBITYMCAGEVCLACJQQOPZHSKDY");
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
    msg.setTimeStamp(0.0874693085264);
    msg.setSource(12464U);
    msg.setSourceEntity(139U);
    msg.setDestination(62477U);
    msg.setDestinationEntity(163U);
    msg.op = 8U;
    msg.goal_id.assign("WXVULBIFHGKUDLNJXASZQYZVFEOTRGJZPAMOBEOZEEGLIKCHHGGRRGZIHPSNXLQZSVEAUCSBENRXKFNSWADOJCJLWPKQAGXOTTUKJEVPBATWCYJWWKMDUEP");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("NPXTJCKJQMQSXRZSFSZIVJXNKBOWQIUZYQASXVSWQWWPGEJOZSFGDQIPLONDVEAGEJHKLYPDXTKZFVHKGWOWMPQAZUGCSCAKFLTNFREEERLUTUMFTPJHDUCNCWBHDWGTXMYVUWZQRYLGMASPGYVZFSORWBHKHNKADBNUOXITMEISQYCIDEFOOXKXXMTRBHZERUJFJC");
    tmp_msg_0.predicate.assign("YDBVDKMLQIKFUCMCD");
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
    msg.setTimeStamp(0.676292015102);
    msg.setSource(48577U);
    msg.setSourceEntity(17U);
    msg.setDestination(14801U);
    msg.setDestinationEntity(84U);
    msg.op = 118U;
    msg.goal_id.assign("FBQMMWHICKUXRORNBZLPNGGJFUEDSZDALGFKZNOCCTWMZMAW");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("OGGOYREACVPYFACGKCMIVOYQSNMHAOTCSDDDRRYJPLEJMGWZWTMUCLHRLYPSZDSWNQAPHWSETIQEIMAHNGMGXNJGJDXUJOEYDQLPJBZHNKCNHKZUIYOKKTPFOGKUSKMUWVXLFXDILBOPWKTPULWJTJHEVZDXJVSSFFBCRKBNQCCBQANAVBHRIIFUTDWUWOEERXRVQAXRSYPLBUXCFUGBTZTIVWQQTVYZIFFPYDVXKMXANRMJSEQHLHEGF");
    tmp_msg_0.predicate.assign("XKELISFMZTTQXQLDAEZHDYPORRFVPQMBYRNKCPQGWICOECJARHOQAWLGYRXTPQIVIRHKYLVIGYAFJSCBQPWHTUCTLUUTLHDMFJCGLPWYSRDSKXXUDWBKSDQEHKEEDXFTZODUWZMNOJREMGSIRGQVKABNWAWNHVJNBBFHNUOBHVWXVZYFIOEAVZJHULKCRNUFTGAKOBIIZCDTNMYLOGYSWSGELYUBPQTMGBNXZ");
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
    msg.setTimeStamp(0.805179552421);
    msg.setSource(2431U);
    msg.setSourceEntity(17U);
    msg.setDestination(48808U);
    msg.setDestinationEntity(206U);
    msg.name.assign("XQPBWMERGUSYVJFITYHABRITCTCHYUEZQWJOQSWZTWQJJLMGZKVBKGCTIICRRXQPRHBDJKOKBPEKXBNLJJRWSHKMIDVNPCXUMDXMAPCUGOYTNMVRLOYXVEPYAFMDELUGESXDSVAUPYBCBFTJDTCOZMDFUELGGASOIIWPCPSDUWGLNZMOSZFXYNSOLOWFZEAQTFYSNOHHUFFXGHANVW");
    msg.attr_type = 70U;
    msg.min.assign("KYQKVFMYMAMSWGLPEOBVGQDHWNUFAZNAMQBMWKQIXWNOGZJTRDGCPKUPUTETZQTOOYXZHOPNNSELSGSWGQIHOEBYXPKVQRKRGMQXTSJBADSWRCIVYNJVKUUWMFOZYDRAEIDIFUFVJLCGXHOUEACNLBEFSCJLVBPFAMUBCJBVDXTIPGKGXASYQZDPXZ");
    msg.max.assign("GQOQKJOGYNPAJRADUBXOQLUBMUCFHMDXYRXNVETPJGIIBXQAFZPYRKVAAOHUIABUPGUQILTKLXHMOSSIMIESSKHCTUYMTQLDGPDSWWKGZZTROW");

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
    msg.setTimeStamp(0.457652479626);
    msg.setSource(14268U);
    msg.setSourceEntity(9U);
    msg.setDestination(52504U);
    msg.setDestinationEntity(124U);
    msg.name.assign("CPVZMMRAPZFHGFEYWNPDKTEDKYDFDUZQRWMNLURNSMUQJBMJGNIHXBQGMLJHYQYCHJOFDLWKNPWOEOZPCYULEIKAFAJSZSMGVSGBEEWVYRNRITCQVTRTVVJFYKXHAIXWSOBAVGGDGAJSRSJBBDSVBB");
    msg.attr_type = 179U;
    msg.min.assign("NWDYHXPLIYPC");
    msg.max.assign("RGUOOWYSEDCTNSDLYNNYGBCZFVPLMFPEHYUKIVJZHAXLVRVIQMKESOFRBQUOCUHTCLODJPUAAONGQMDWZBHXJOXKRWJGCGDOHXYYBDTOCBU");

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
    msg.setTimeStamp(0.680985619624);
    msg.setSource(30031U);
    msg.setSourceEntity(157U);
    msg.setDestination(32472U);
    msg.setDestinationEntity(8U);
    msg.name.assign("LMWUZIXWPCABKDUEIEHSBQBQLBFMHSYVHXKOIETAOPAZXWKMUSXKYVYIZOLFIRSBTNKLNBGDAPUYYQNFAREXCJPRVQTNJTZKPZITGGOTUDEIYMCOFCCHOHWAZQMGTWNLVFSHMREFAJKWXTUDHUPNGNABKPUQUMTDNXGHOYCPNGSYSLKHJLQJZW");
    msg.attr_type = 189U;
    msg.min.assign("RVXVINGOQUBZBFVQWDYHWFHRMWEIYQHGFUZLAZPGCTWLJKWFJCVBISHMSCZCWVOSQUHY");
    msg.max.assign("WBMHWJKGIMSWJMQODIG");

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
    msg.setTimeStamp(0.141304044939);
    msg.setSource(13532U);
    msg.setSourceEntity(97U);
    msg.setDestination(21575U);
    msg.setDestinationEntity(101U);
    msg.timeline.assign("XXOZDECNAQEBHYLDZRBDTGJKYFAHFBSHIVGEKXNIBWQKF");
    msg.predicate.assign("EUZQQJOWZLXWOIQNYYHTGLUWXFGZHOOUTARUGZTUCTZMWDVUGAYX");

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
    msg.setTimeStamp(0.7527929868);
    msg.setSource(8822U);
    msg.setSourceEntity(86U);
    msg.setDestination(40073U);
    msg.setDestinationEntity(2U);
    msg.timeline.assign("UWPSGKEBVFBNHRLLIJQYZTAHRXATFSXVBKIIPOAFOHFKEOHQPXCWBGBIGQJQNVVGYSNUEWTUHJTRYVNTQDNQUSRDMTNIBPKMCOWQOLUCZQFECXVYLNPIDMZRTYZGFXSFKCECGDPEAYOEMAPJYRSCNKMEZATGXLYOOBJNJIDXWPPXWAKGXIZSJAUIUPZMHDQHCBOLVMJDETTLWVLSD");
    msg.predicate.assign("THQQRADCBRRGJKEHUTUXSETBFZQYLYLOLTBYLJDNGZBRQWHDZEXXYTNYMNPMNMEHJSICROEOPEPAMTCDUZIHYDKYNGAWXAQKCJWYJIOOELBZCLGUBPNWTEPFLSUPIBRUFYGWMCHHPXNFFVRPJBZXHWOLIVNZSMKXKVDQXKLSOLGFXVJGWEQKNZGWYCBVADTKFEXDMFUWNAFRQSAWVJVMKIAOUVVOJQHFCDS");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("TEMNSLVVFQIAYSAPJTZGCHKTKMNGPHQOCKLRVKUBGUONBJASYFXYRXYHADBAWYDUAHVBDEPYBTGIEWRVVKNOVSLVENBHZYSKKDXXFBMQHDYGFZRRQCXSNDECXPAXGGETBQRBHUHOFRLDMJNZSOTTESFCIXJFOWQDTGLVWKETFWOKBOTIA");
    tmp_msg_0.attr_type = 174U;
    tmp_msg_0.min.assign("AKJZIBBCOCRVZBIRSCYYQOGZNSIPBOFYWHWWJVXUDGJAZAUHYXTEMDLVYKHNTCHXPMWANNMHMKSVPTIZAMWVSQSDSSFXQUJV");
    tmp_msg_0.max.assign("VTWKDHVUXMDPQOAGIOVF");
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
    msg.setTimeStamp(0.622612621814);
    msg.setSource(8028U);
    msg.setSourceEntity(44U);
    msg.setDestination(18881U);
    msg.setDestinationEntity(144U);
    msg.timeline.assign("LGUFKGWDTXYYMSCFWEGRFHMJUDYKZQKNWAARQJITAZMCLCMDUYXUWGJBSHWTCMSVOJVNATRWPSTDNXUZDQZGRSRBCTLPUFABPNUAEINWERFISAXBXBENQEPNLHEMSJXITJGOXDLLMIZYINJNWMBVPUBKHMYKHAQHQKOSEMLYIEGDOIZOGVTXYVRHLZJOLTOEQQHVOCKCSJZIVCFPDKUOVPWRDZPAVOCBRJZYN");
    msg.predicate.assign("KLUDKOVGWHTVQQJDFEBCSFDVMDJKRKZCKIOURYJHXVXTCTNHHEVKLJZWTNBGNLIHQFONKLDCYPXEGQRYKEGSVBZQOYLYXXEZAIMXSUWMAPUWOICHPSGIDFWMR");

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
    msg.setTimeStamp(0.921579711554);
    msg.setSource(63794U);
    msg.setSourceEntity(91U);
    msg.setDestination(40762U);
    msg.setDestinationEntity(146U);
    msg.reactor.assign("PXUUTXFSKJVEUWSOHMHGAMNCUQKRGHMICUNLGNTVJDHINADNMMXOPTZQSBBJIEURJBINTYCFCSKXWO");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("MCOXLSASKFLAEKXSFYYVMQQHMCGEIUKRIDVDBRHOSXLNKXLSXWFCZYBWCNNPXAGMDKAIGHDVIJIVDJPSMUEPNBEOASQTLJQEYBMONWNAKAUZAQKGUJGHCYVBEWQLLHFNWZZTORTGQTYXULFFWPRBOPCZMRCTHTXWQKURVBREUIJWPGFLZNKRBPWDUPMSTOGOHJD");
    tmp_msg_0.predicate.assign("AHUFBTGEHZTLIVNBIDOWOBALEHTDGQRUCICQEKOGMROJKPZUYIKXFPDGAWMRCVJZOOBLLATZNQYDNJVHQHFHMQYQHWCJHNXIPSRVPPUFDRTJYXAUUYGSXITIRIAGPFBZNTPKYVFZELFTELEOOHWGTWSUGMVAJRBZDOCKJMSTSVLBEXGNI");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("YKLICXDGWWRAQTCIDTBWQMKONEYHFGLXZWOKYNJUXASFMSMTJCUPCBBRWYVLEOIDEBXWKPOGGSDUYLOXZJLJYHHHATMMQVVQEPCCFOSMWISBELSASHRIARDTJXTTHKVNCQDLWSPIPJSIOUBHFPMXZZZZGWQUTCNRENUFIKAHGVRQNLMIVOFUVJAREFQUXYV");
    tmp_tmp_msg_0_0.attr_type = 110U;
    tmp_tmp_msg_0_0.min.assign("NNIHCGEYZXYGVBKLUFYWMJQNTHRKALDRXKFRUDUFXMGOFRCUEGSQICYIFBVVXUJZNZZSVQNWIHDIXIDMKAOCL");
    tmp_tmp_msg_0_0.max.assign("MDOLSKOYPCRESRFLYIBGWVSMFKZKSHATXTVBUPGPKJHET");
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
    msg.setTimeStamp(0.787299634513);
    msg.setSource(44658U);
    msg.setSourceEntity(16U);
    msg.setDestination(17856U);
    msg.setDestinationEntity(219U);
    msg.reactor.assign("BLYECQWHISTVQCATFWPMRYTDQTNJGLTNVNMLMYKDBPUYKVCOMOIYKFFXNKONJPXBJIGGATFOQZXWHTOSJRSYHPYDGAFQLKIXORCPVPPV");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("VDWYVUEHNXUVRVOOGTZDSPPWDCNHBATDLKHKLLFDPOCEUADRWKTFMKSDJXBXPOGBZIAEFMXMITSRNJOBOIYEWCTZKJUNUEKEMXUYXOYIWTPAIZGAIAQHWEGSQWKXSHSSYSVGKQNIPXJDWGNBFGRKYTICHMAMYLQECJMZPZQBHVVAKXJUELPQCHXOLS");
    tmp_msg_0.predicate.assign("BHIAONCZIHVSGWFMSFEVPCDWXXIISJCUAZILDM");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("QKKXVRBIRKJXLWACNEDHZUJTOCR");
    tmp_tmp_msg_0_0.attr_type = 117U;
    tmp_tmp_msg_0_0.min.assign("WWSKXZBIWCRKYIEOZXFSVZGHOYYNGQUDNSUALTQRQDQWXALSUNZHBSLMFIEOGVIFYCUEWGMOZJLGCSTHVFTJMRRFMHMGYHADIWIPWYSJKRXJXZKJCHOIQONCLSACTEPXNTPLCBTJXDPMTDHGMVWFURHKQJUYDFJVBTUPACYDDONEAVEBVRHZNKZGGMEDLAOVBEIJ");
    tmp_tmp_msg_0_0.max.assign("SXPJVEICCUDTVOFKPLKIVBSJOVBTGULBK");
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
    msg.setTimeStamp(0.344932298421);
    msg.setSource(22798U);
    msg.setSourceEntity(167U);
    msg.setDestination(36263U);
    msg.setDestinationEntity(122U);
    msg.reactor.assign("RINEWKWVUBKNHODOEGVSGVNDAQOCPHHAXKIMJPXOJFB");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("AVVGMOHYVMBBEEMCAXJIRZCOBZHUEUMGOVZPMONHWKOTBWWTFUSRHDFKPLIQBYTCPKZLZSANQONCKIWSDNXNMRLTCUJWDEIEYFJPRXDIKTFSWXPRBWP");
    tmp_msg_0.predicate.assign("XDVNXNYHGODNKGTQFNBLDEODZTZAXDQFCGEDUIQQGRZQGZKKHWANJSHKBQPLAAPVXSVUWVAHEHBDBREWOIAASNUQCERFJFCIEDKUTALTODYMFUFBBPRTOCIKWSJZKVMEOHMMMSWUSBSELPFNKDZHNXWVJTOLWMUGXWZMJIMSLMAYFYUTQYGKIPLVJCWCTOZCGJNRR");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("QPCVVRSMUFPQTNGTOCLJSCKVHOZKVCHAJWWXIBQLFKGYYMLBTANOHKIMLGLVPLAZGXLJOICFXSQNEVGZBWIPNMDYUJDUZEDEFKUSUYMLWRWGNJYAHQDSQFUZIGM");
    tmp_tmp_msg_0_0.attr_type = 55U;
    tmp_tmp_msg_0_0.min.assign("ISPVAGCTVSKQGHPHRPKBNRKGMDFYOJSYWDTUOVEVBHHAMSFTUWIJSLQLWIYZTJRHDYNZARTPLTZRUCBQNC");
    tmp_tmp_msg_0_0.max.assign("TCBTYJSHOUDQPEARCBGJNCKRXIJNOTKHMHPGRINOOVTLWUBZPACAOWPGIJGYDXGAJWOKPMYOUHVLBYDCEVWXQKWIUSHPRYCQPUDJMZLWUDKTVNKEQIZHEXWFORSGCQSFDZZMSBFFMIIEQXCGYZKMRXBDXLPIWUGQKNKWMVQYRKFJDYAEIWRUVXMLVRVNLOZHSBUFJNVBS");
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
    msg.setTimeStamp(0.186870781344);
    msg.setSource(30081U);
    msg.setSourceEntity(166U);
    msg.setDestination(52346U);
    msg.setDestinationEntity(164U);
    msg.topic.assign("CSOFSATJPGEDZFQBRVZVEYYB");
    msg.data.assign("HQYLCBROBERBWEFSOLCDVKDKOCLFFWKTZZSJNMVRGUFERWMWUWJSXNCNASTGGODGJ");

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
    msg.setTimeStamp(0.941289236681);
    msg.setSource(21226U);
    msg.setSourceEntity(99U);
    msg.setDestination(51859U);
    msg.setDestinationEntity(222U);
    msg.topic.assign("OESKICHLLWTCRGYQHDATUNPYHDXHAVXCVPKVAUZMZMVYLCPZEXWFDOKLBHEFGVQSZMIHSJITBBEUXQFNVGPPEYGUPNKSEVDFNNBCJWKBMORZFTBXZQHGLOTCKXYUJVRJJTAGUPKTATQAXIWOFCJDYRFGNJOEPZFYDZJILJRSOZTFSIGJWWBNFCUDQKAUIAXRLNLCKSGPORMEISYMWQPMIEAMNBLOCUSKUHHRZHDEIYWBMXWD");
    msg.data.assign("JFFANXEALVWITLVTMKDPSJGVFXVKVDYNDRHOBGFWSLTVCBZEAMWR");

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
    msg.setTimeStamp(0.50239642962);
    msg.setSource(297U);
    msg.setSourceEntity(164U);
    msg.setDestination(30341U);
    msg.setDestinationEntity(9U);
    msg.topic.assign("DDFDXOAYXGSISVRNHQFIIGATLNZRKVUYDWLSTCTWIVNKNYMNGIAVMQWKABDDMFJVPLQGJQXGUTYTWUXCCUOKAXFRLLOEALRMEHENHNFNMGQSJBRHUOVGIZBVUCHFQFZWSHXJMVWEDMBCTBKGKYAPXPLIRREWSOXSKTEOEWJCUBIHKFJJPTZEDHGCWXZGZFCMAIYKRAPRJBSZYMBPLZAXEPQQYCNUPF");
    msg.data.assign("KGMFEWWXFBDFAOVGRQAUTVXEMAMGKTLOUHKOEIYMMSHTPWZSQSBTVHDPHZDJLONMUJPVSNGIKFWHBRAHBSZLUGUMTLYEOTLFSZORISURMZKEDFUFKDJOXWWVERCBEITFNJTNDPQKBXVDLYIQXAIWNQWZCQRKRNCVYPBEEJFDGALLQPXGIAPBJHPCXWENALYVVXRIDKNBTCMYCI");

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
    msg.setTimeStamp(0.838770425704);
    msg.setSource(39835U);
    msg.setSourceEntity(249U);
    msg.setDestination(34574U);
    msg.setDestinationEntity(210U);
    msg.frameid = 225U;
    const char tmp_msg_0[] = {10, -98, 69, 92, 70, -110, 38, -103, 107, -61, -42, -10, -75, -37, 99, 116, -95, -82, 79, 45, 109, -55, -24, -52, 40, 25, 2, 100, 52, 34, -65, 20, -126, -41, -123, 107, 90, 20, -2, 55, -57, 32, -80, 39, 103, -51, -19, 42, -28, 11, -30, 18, 13, -77, -18, 40, -91, 30, -55, 8, 22, -24, 111, -85, -99, 34, -121, 13, 73, -4, -63, -23, 89, -57, -34, -49, 0, 60, 45, 57, -31, 68, -100, 11, -95, -26, 13, 59, 20, -60, -113, 14, 108, -24, 88, -84, 121, -19, 123, -4, -71, -70, -90, -14, 42, 19, 6, -15, -58, 24, 36, 19, 68, 23, 120, 121, 25, -116, -42, 73, 101, -124, 30, -7, -60, 102, -20, 62, -1, 34, 0, 97, 115, -9, -76, -70, 108, -11, -44, 98, -106, 67, 79, 75, 36, -61, 5, -60, 122, 34, 55, 17, -55, -41, -17, 53, 41, -14, 3, -103, 12, -90, -76, 96, 83, -70, -58, -33, -104, 116, 86, 76, 51, -41, -71, -62, 2, -126, -12, 54, 60, 94, 96, 41, 30, -47, 49, -17, -72, -99, -31, 8, 9, -49, 5, 34, 87, 3, -27, 53, 22, -124, -13, -127, -94, 41, 86, 100, -38, 57, 74, -32, -114, 52, 78, -79, -15, -116, 57, 92, -111, -79, 75, 118, -117, 21, -46};
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
    msg.setTimeStamp(0.508600896898);
    msg.setSource(57168U);
    msg.setSourceEntity(222U);
    msg.setDestination(428U);
    msg.setDestinationEntity(103U);
    msg.frameid = 130U;
    const char tmp_msg_0[] = {-40, -124, 47, -41, -102, 54, -63, -112, 20, -7, -124, -85, 52, -89, -23, 100, 15, -122, 11, -27, 98, -38, -108, -65, -31, 119, -5, 72, -56, 81, 85, -106, -69, 51, -115, 120, 78, 45, -20, -117, -43, -53, 56, 10, 10, -13, 100, -74, -34, -99, -92, 122, 65, 101, -100, -113, 110, 126, -44, -114, 68, -10, 53, -47, -89, 124, -98, -61, 87, 39, -16, 104, 29, -93, -25, -4, 103, 31, 53, -12, -81, 20, -13, -116, 120, -95, 69, -56, -117, -84, -63, 59, -3, 113, -67, 1, -113, -42, 16, -54, -107, 116, -111, 84, -63, 90, 20, -4, -38, -96, 94, -34, 121, -69, 116, -70, 9, -34, 0, 75, 90, 58, -38, -1, 52, -11, 113, 42, -49, 104, 34, -113, 1, -4, 16, 108, -35, -120, 104, -82, 38, 85, -108, -11, -61, 120, -81, 5, 75, -44, -21, -66, -14, 5, 99, -70, 66, -124, -6, -91, 124, 33, -90, -75, -78, 73, 12, 17, -4, -59, 42, 17, 26, 44, -121, -7, 21, -1, 72, 51, 95, 70, 75, 103, 69, -92, 56, -110, 124, -103, 53, -82, -95, 16, 61, 73, 114, -44, -69, 103, -31, 86, 33, -61, 47, 3, -54, 49, 110, 85, 58, 91, -1, -78, -17, 47, -118, -44, 80, 93, 114, 119, -70, 38, -11, 65, -45, 15, 4, 117, -43, -80, 125, -14, 118, -51, 108, 56, -121, -89, -108, 22, -95, 61, 72, -64, -79, 96, 50};
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
    msg.setTimeStamp(0.736582216489);
    msg.setSource(37744U);
    msg.setSourceEntity(88U);
    msg.setDestination(62171U);
    msg.setDestinationEntity(184U);
    msg.frameid = 98U;
    const char tmp_msg_0[] = {114, -79, -30, -19, -7, 108, 52, 92, 54, -115, -108, 100, 32, 59, -63, -2, 111, -103, 68, -62, 46, -119, -98, 36, -81, -118, 97, 70, -4, -88, 41, 101, 78, -38, -103, -127, 89, 98, -15, 60, 49, 9, -2, -20, -65, -20, -49, -42, 109, 68, 2, -41, -107, 4, -84, 58, -18, -53, 52, -75, -101, -83, -72, -3, -31, -16, 24, 18, 19, -98, 0, -86, -34, 120, 114, 4, -21, 112, -47, -77, -75, -66, 67, 9, 106, 65, -63, -14, -7, -99, 3, -125, 47, -22, -104, -31, 86, 46, -39, 96, 39, 64, 56, -99, 12, 41, -109, 126, -81, -76, -67, -63, 107, -7, -48, 56, -91, -96, 120, 49, -25, -38, 122, 99, 85, -115, 5, -7, 41, 113, 53, 4, 11, -61, 96, -116, -49, 106, 46, 10};
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
    msg.setTimeStamp(0.187504334103);
    msg.setSource(12483U);
    msg.setSourceEntity(159U);
    msg.setDestination(3446U);
    msg.setDestinationEntity(12U);
    msg.fps = 235U;
    msg.quality = 219U;
    msg.reps = 238U;
    msg.tsize = 98U;

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
    msg.setTimeStamp(0.300717605274);
    msg.setSource(5758U);
    msg.setSourceEntity(217U);
    msg.setDestination(32571U);
    msg.setDestinationEntity(175U);
    msg.fps = 200U;
    msg.quality = 61U;
    msg.reps = 99U;
    msg.tsize = 81U;

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
    msg.setTimeStamp(0.624884455434);
    msg.setSource(39700U);
    msg.setSourceEntity(195U);
    msg.setDestination(31212U);
    msg.setDestinationEntity(108U);
    msg.fps = 191U;
    msg.quality = 36U;
    msg.reps = 75U;
    msg.tsize = 123U;

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
    msg.setTimeStamp(0.687340710498);
    msg.setSource(33917U);
    msg.setSourceEntity(99U);
    msg.setDestination(35319U);
    msg.setDestinationEntity(243U);
    msg.lat = 0.204456311688;
    msg.lon = 0.333562761802;
    msg.depth = 244U;
    msg.speed = 0.688755596724;
    msg.psi = 0.475228743515;

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
    msg.setTimeStamp(0.503060940792);
    msg.setSource(48183U);
    msg.setSourceEntity(83U);
    msg.setDestination(58034U);
    msg.setDestinationEntity(208U);
    msg.lat = 0.132889789631;
    msg.lon = 0.269179573625;
    msg.depth = 51U;
    msg.speed = 0.856411719402;
    msg.psi = 0.648362924328;

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
    msg.setTimeStamp(0.547934675449);
    msg.setSource(9464U);
    msg.setSourceEntity(149U);
    msg.setDestination(33649U);
    msg.setDestinationEntity(98U);
    msg.lat = 0.702007876235;
    msg.lon = 0.0314872337889;
    msg.depth = 187U;
    msg.speed = 0.566547138707;
    msg.psi = 0.558907370185;

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
    msg.setTimeStamp(0.947370336759);
    msg.setSource(9409U);
    msg.setSourceEntity(8U);
    msg.setDestination(62321U);
    msg.setDestinationEntity(6U);
    msg.label.assign("XORVLMFUAWYAPIBUGSGCWBYZLOZCVXNHOCACAINWUYQGAZZIBQRVLXEJWCFOTBAYOIVQVECTCGEUVDOKLWNUNTXAHXWOSWPZVKPZXIWPUJVAQEKHRCPMJNXHEPJRBKDUSYSDPMQIZBVUMJGGFKTEHGLNMCKSAJNZDUMOHEQLFIKIQDZTRUSTERBNGQFQHLDAREYLQHMSPKXFPBHFJCKDXGYGNRLWBSNIMYZ");
    msg.lat = 0.690154323292;
    msg.lon = 0.00653030129854;
    msg.z = 0.266652798686;
    msg.z_units = 37U;
    msg.cog = 0.0775139550209;
    msg.sog = 0.40020000427;

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
    msg.setTimeStamp(0.0359908245948);
    msg.setSource(40513U);
    msg.setSourceEntity(230U);
    msg.setDestination(1900U);
    msg.setDestinationEntity(22U);
    msg.label.assign("FVCMHSYHUQXSYWJAUMDWMGZCFKYOVYFHCSVQHAXIMDOUXFWHAUSMEUWKBDHOOPCTYCSGGNYEBBRLTTZRDZFMTSBIBDKMRUGJSCHRZZJEZIFIEEPJQ");
    msg.lat = 0.593056378099;
    msg.lon = 0.0270022293807;
    msg.z = 0.56577703831;
    msg.z_units = 56U;
    msg.cog = 0.766615589941;
    msg.sog = 0.392371938187;

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
    msg.setTimeStamp(0.806352747895);
    msg.setSource(21031U);
    msg.setSourceEntity(209U);
    msg.setDestination(30372U);
    msg.setDestinationEntity(86U);
    msg.label.assign("BMILLKTEVTSOHPVDDPUMYIPNILOBGUIVCRYBSIJYFGCWLQFOMAFGRXMAZYSWIVS");
    msg.lat = 0.141934235467;
    msg.lon = 0.479814992424;
    msg.z = 0.0343192086004;
    msg.z_units = 197U;
    msg.cog = 0.770171953872;
    msg.sog = 0.989408023583;

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
    msg.setTimeStamp(0.144053180123);
    msg.setSource(26207U);
    msg.setSourceEntity(66U);
    msg.setDestination(14455U);
    msg.setDestinationEntity(25U);
    msg.name.assign("HHIBBSJXWQNSSXHASXYCXMZFXJYTAGGVNPZTFIXORWIVBQPVMIFGHPNYR");
    msg.value.assign("XRJTCDVKRWUVJOIAGRVGTDHEYJEEGVPFGZEHJXCYUSGJTWUAHDQZRQDFPJDLIAHTFGMIOXASEADHCKNRFIATIEIBKPHHBJBPHTKFIKYOWQOKH");

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
    msg.setTimeStamp(0.575082452528);
    msg.setSource(51276U);
    msg.setSourceEntity(120U);
    msg.setDestination(37149U);
    msg.setDestinationEntity(207U);
    msg.name.assign("IYFYWXPBCMZTOSKDWLHVUGEMWQZCADQSIYTMZJWMPBQOXDFGWADKQALEKNPWACKGRQHFJQJALDXRPXHZCDJJISGOVLOOHFUUXVYHKJTKYHORTJNVUFIBRDDVTIJHBNAMAZLJFOCSMURKMNGNCBKHIUNCEREPUFFPSFEOCNBCJQBRZKGPGZLGEURIONMTDVIPWBY");
    msg.value.assign("QFEPVTKBTZMYAQQAYZVTACYIXYQHZTUYXKCQXVYWFMO");

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
    msg.setTimeStamp(0.981029393817);
    msg.setSource(7864U);
    msg.setSourceEntity(194U);
    msg.setDestination(45605U);
    msg.setDestinationEntity(171U);
    msg.name.assign("LYKFQHYARJRTLGGJGBMAAOSQBJM");
    msg.value.assign("QPLFNYFPWLJHGAGKNDUIWTJXVGQRXSKRVCZCUEONBRWRNZVHIQMXIKCSMLTPOMUCSYMZSOUZHWCNQAADJFRPGKTMYWJGHKIXTMERTBA");

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
    msg.setTimeStamp(0.754564795857);
    msg.setSource(53076U);
    msg.setSourceEntity(71U);
    msg.setDestination(64368U);
    msg.setDestinationEntity(88U);
    msg.name.assign("NKPOHSBSVTBLHDFEYINPAOIVVMWYEUKPYPFKOCPZZJOWHEXSGTUADGMOSCPKQQXPMNMRVSUMGRNTWPXIBKSWJVADUTYQAGUATJEKFRZLQKZQCKTXQUFHZPLSYTALXCOFEMUTUYNNRJJQWCFFSAMHZLGOADCBDYECHIJAOJLJHVBDZEGXDXGEHFZNOOCNGDTQIBQGCITUWIAYVRURKCX");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("FADLGQJQPSSTVBWVMPBFEKJGSSKXMVLHTSPTLGRNTGXIYDRKUYAPNISZYCHOYNOEBAZDBQWIJHEXDBEKZMWVXGAOQLDDVJLTPFJQDFKQDGEYUJHAOFUYCWIYSXINQNZNJHZNRWFYTRHMPXXZBWFQVUVXLMAITXALKJIULINEQPTRFZBNVIERBJODHFLOHFUBKEOOWWARTCEMCNUVWHSMHCCLMTICZKUCGSS");
    tmp_msg_0.value.assign("TXJELWWOWZNQQBSUDAQOALVHUOSTNOTKEIXSTEZZGHUJKWBPQXRPVWYWCXJDBHVLAUKHBVSNDKHMVQVEJIYCWDODZLFHUOLMGPRLMTIXPRZLVZMMGOHFABUJURDAFWEIFEZBIXLXBJDRPLPLYYDBYKAMIYOBRSGVHKICRGCCRGKMVMDUCNEWDAFNFYQCACSTWJANRU");
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
    msg.setTimeStamp(0.0736455072368);
    msg.setSource(33857U);
    msg.setSourceEntity(50U);
    msg.setDestination(40829U);
    msg.setDestinationEntity(149U);
    msg.name.assign("QBZMJPAAALAIDVHCLEHKUACNGOSDOKBGHNYWBPNJYFKUUXBGPNQWYTAJNUAUKWJIBQSSFQSXFDRUFFDYIWEYVQUQKCGPIUZUKOBDFVHAOSXOMTI");

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
    msg.setTimeStamp(0.363048948212);
    msg.setSource(44143U);
    msg.setSourceEntity(128U);
    msg.setDestination(52103U);
    msg.setDestinationEntity(234U);
    msg.name.assign("WZERJZSCYPSJYHHLAVTUPCDJJVFGPNTIGMZMQVNLBFQMKRBIPXJMWCFBELSHMIIAMVDHAWKMFDUQSKXKPTWRZQOSXWNTBAMUWBCCDCHJWYHFYTPCDBUVWYAUYTXNQDKEQLOOVRRCUGGGHFFIPKKISUEISDNDASILKOPNTUOLYXOJGZBCRULXWDLXAHHNEAQVRGOXEJKQGCSJDMBFNZBWOREEYTXRYSZBOOZMTIREU");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("GGNPIUSJMUZHISJUFJEDTOKBSCBSYMAOQVYPA");
    tmp_msg_0.value.assign("TASZWFAVBFDKSQXEIDORHIONMHHZNEPOQVECNSLUUWDARWHJPOQQMYKGCXJKUIWTTGMLIJPLANHOOWTLYMVKPDSZRTNSIATAVBQWKBEFJNMLCZUODEIABHWJCBYKJURPBYAGZXGSZZDBPGHYOGRNFCLVUYXSKIRTXTUFOCKQVDHXLRPKWQDGZQYCFFZN");
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
    msg.setTimeStamp(0.737545338167);
    msg.setSource(26411U);
    msg.setSourceEntity(241U);
    msg.setDestination(19222U);
    msg.setDestinationEntity(141U);
    msg.name.assign("ALTFHLJVTFXRJGFZUKDJRDMCAUXOZVZQMIIHDLOBFWYVTXZLYBRYNQQRGZURCHBTUPNWIIKPXENVQKAVWFIBHIOWZXAGPSMQDZBFZBJ");
    msg.visibility.assign("YHWWCNOYJGRNJXTLZJQRZGFKCQKRXWDXNZEBTOGJSAZICGDUOOOLRCIJQVNSAGEIEQL");
    msg.scope.assign("JRXOMEURRHITCJLIAVAQVWAZHIBGNSWMWEBJPZRATEZDFAZFRKLCPVMPDQDHMOKLRGBPUGMTOTOLQWVKLFNIBGYGGTQCTTKDRVRIWYMFEQMWKBJSGPQNZUPMQOGQHNUJAVLJDGSYELJSKNNIJSCEVXOQDSCZZXHFRUGTWXHBUYIHEEPDZXBPTOKHADUSORFWSAKYNXUHFACZSPUYZCFKMOHPMXCYFLLCKNIE");

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
    msg.setTimeStamp(0.897572646641);
    msg.setSource(27798U);
    msg.setSourceEntity(186U);
    msg.setDestination(808U);
    msg.setDestinationEntity(187U);
    msg.name.assign("VJOYZMCOMDABKSDWVIULUJBFDLGNTCMEBLKZGKVWELXXVWQRZRMYEZEJRSASBWJIPKOCGKNRYWPQQFQIQNENTBTRNCNJSHXDKDSVZALTXSGPAIKIQVBZRQKNHEFEHOHLXOVDHUBCWURGYKAZTUYJLWJNCAIVTJTKDHGCGDQIXOSMIFZWAPYSFIRYLHVMXTPUQXMYHJXHSMFMBFFOG");
    msg.visibility.assign("IAQCMINKJBVHNQSRIUDONEQKNZGPNIZAPQSYSXSODZKACPZVEBTVKYTFQLDRSWMDDDOQBBSLWWHJSAFPIQUYFXYFIVTQGKKZUVFLVXTTCJMNKRKCMRMWYVGRFBUFUYUORAAMGGOBRQONEKZRBBECEDBJPJY");
    msg.scope.assign("LKBCGTGZTWFJJOGPSARSYPCYEFGWRCDZWJFLRKKOKFTMGWKSQDHYDLAOAUEHLPINTSUPMZLZBNFHGMDFOASYEZSZBPUUPYGLANODEMIWWERCVEKAKZVXCVXEJRKYRXXWAMXTUCHYCUNIXLOUXCVBPNMSIAZXIFSRYP");

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
    msg.setTimeStamp(0.725112467025);
    msg.setSource(6815U);
    msg.setSourceEntity(87U);
    msg.setDestination(20002U);
    msg.setDestinationEntity(117U);
    msg.name.assign("FXVGJSZDUIUGIQXHCDMFEGEHKTWAMLNGNLWOOIPYYSZETABWJQHYTFAHROSLPJJVZPLYBBCKSDPJVOGZUICALVFZRYVZAWWMXNFQUUHOIVSQPIDZCBMTXJRTFZKHJDMBKDILHUOUTNYUGFGCAD");
    msg.visibility.assign("SOCELCQTCXWUKGCVFSNVJRDNJMHNNYCJJTIPJGKKBIWOFQVYETSUMSPKMPLIJTFDVKQKUEXDXFPDOXDJQPA");
    msg.scope.assign("KSFCQJTUVFDHXCPFMWULZL");

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
    msg.setTimeStamp(0.829745921267);
    msg.setSource(6591U);
    msg.setSourceEntity(148U);
    msg.setDestination(9094U);
    msg.setDestinationEntity(254U);
    msg.name.assign("AIGLTIUEHSEQJILDXPYJWKRQJUNDHMYIMBTUUDAVBGOTVRI");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("UVSMOBYGXBIEMAHDDRDKHWYYQLCYYHNFOVZMRGJBEQGULKZJARCCNOPSUPBGWWWDHDXFWKFMLPMLISZCRVTBFNJ");
    tmp_msg_0.value.assign("CUXGQYPSAKGTBTXDNBZLZCUVPEHEXWSQFFZGYYOUYKFVTBSDPAJAXIXPZDNMNNAEPYZEMAJUWWAESFSHXNPWCIBKKINWHPTMYDCRJVJWZQLTLYPQMDGRAMJLNPNBLSKTTGJFJWDIIHFOHTOBOYKFQLIXLMUWTSDLJQQDBGOWVIBFLOUMZXQENHNSHREOYVXFCCROBMVOXJQCRVOPLIMAIAERRGSAERDUHFJKRVWHHZM");
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
    msg.setTimeStamp(0.775441546577);
    msg.setSource(48802U);
    msg.setSourceEntity(54U);
    msg.setDestination(19289U);
    msg.setDestinationEntity(201U);
    msg.name.assign("XSOZFLSGMAPUAHIGNYUPFOZIXPSISJTNHEAHGOWTVKTMLFBTSYLXZFRJENECTEWSEGFKFOUYPHZGUZBTODXBLVBJCZODIGJXEZUVRQODDHSANIGWWIFQULCPPYTGYAUJRCLQQKPJGNKMAZVHFCHDQEUNORCOXRDWMKDQPVMKDWKXELBJRERNHKWBJVRPEFRWBCOMJVZKA");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("SXSLEPHBYAXVMTGBZMJJMPUADHJCERDAXTCCFYDYXOBJNLPENGAXKBJBHQWRWDAEQDMXWSBZCBLQUETSLKXIFKTBYXZRIUMJEPUKMMQKFHQSMGUORCDOUPFHTPKHLDIGAVORRYVXFNOCQTWYOIKRPPBWECLYHHLNQIDMUDOT");
    tmp_msg_0.value.assign("VFQJDIDOCUYFHTPZUMGXRRLTBWUKVGXHFOZYAKXJNWPFRLEZVLFLY");
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
    msg.setTimeStamp(0.103093433423);
    msg.setSource(63951U);
    msg.setSourceEntity(118U);
    msg.setDestination(16882U);
    msg.setDestinationEntity(155U);
    msg.name.assign("TGNBPPHTWXUXJMMPZLRMCHSI");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("NNNBDYYEGEVVFVRSNCELDWTDQPPAJIATNXFYUCNSYBRACRIJGGMGSKOWWSKXDZVGLBRRLXQEQFUYNGAIJTUNDLREBCVPPPJMBQXUOKVJKDJIZHRHVSDJMO");
    tmp_msg_0.value.assign("LFKEBMRHXVMROTFPSFWNHJFFWDCFDUPZJYUJROIOBLBPCVKSNDJMGAITEQCLHHXPCGCZTVLPITOEXIRDIGZNFBYBYJQPPNNVKZVSKFUQVXUYRXUVJSGZUOLQDKCRHELPQHABLHZJNWYBOHAYEKKMWQXZDOWKLISTMJMTQRQXIOAYUTAQOMTWSWAQAGIUGHRWVGOZEHCBTXDCSZSKPZBAGTFBLCJLEANKIXNVMEEDMGSRYIXWGADVWCSU");
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
    msg.setTimeStamp(0.894008832819);
    msg.setSource(14547U);
    msg.setSourceEntity(72U);
    msg.setDestination(5039U);
    msg.setDestinationEntity(60U);
    msg.name.assign("VVWCPJBZEYUFKLTEBBVUUGXXIHWIUUBCLRTEHERPEABONQMCZNRCTWNGDUIHAKKLMHOLCPEDNCTNWCOGJVVORCDKPCDQW");

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
    msg.setTimeStamp(0.752709077771);
    msg.setSource(14332U);
    msg.setSourceEntity(219U);
    msg.setDestination(23968U);
    msg.setDestinationEntity(189U);
    msg.name.assign("EYQAVLDFOKTJWYDFTRSRKXENSAGDIGWZWZPJBNVAPADSCHVMCRNMOUJJNWIPEQEOSQESVRRLYELBEAGPAPLVTUSERQRQGWGPWWLINLMAHTTKFHHXEWHQKZYWJZAFJRTYTYJNRGGZUSNCIKZJHVOXCMIPPUXOXIQLQCXKX");

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
    msg.setTimeStamp(0.42182775496);
    msg.setSource(10185U);
    msg.setSourceEntity(68U);
    msg.setDestination(50526U);
    msg.setDestinationEntity(212U);
    msg.name.assign("NKFBWVTWDWNKCRDTDORUXUYADKGZLHESWEDDYQIRRMJZRUZFXIYJXANPQYIYMWEJBJGHXSDWJCJBUTFQYFXYMBLRVESPNNWI");

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
    msg.setTimeStamp(0.684518103139);
    msg.setSource(719U);
    msg.setSourceEntity(127U);
    msg.setDestination(2998U);
    msg.setDestinationEntity(93U);
    msg.timeout = 2447606137U;

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
    msg.setTimeStamp(0.247114430832);
    msg.setSource(17086U);
    msg.setSourceEntity(19U);
    msg.setDestination(4930U);
    msg.setDestinationEntity(33U);
    msg.timeout = 141352729U;

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
    msg.setTimeStamp(0.408239098554);
    msg.setSource(61434U);
    msg.setSourceEntity(25U);
    msg.setDestination(24715U);
    msg.setDestinationEntity(146U);
    msg.timeout = 304678671U;

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
    msg.setTimeStamp(0.512619718857);
    msg.setSource(11485U);
    msg.setSourceEntity(81U);
    msg.setDestination(37545U);
    msg.setDestinationEntity(160U);
    msg.sessid = 2583479397U;

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
    msg.setTimeStamp(0.0695530315031);
    msg.setSource(18430U);
    msg.setSourceEntity(205U);
    msg.setDestination(9726U);
    msg.setDestinationEntity(65U);
    msg.sessid = 886007878U;

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
    msg.setTimeStamp(0.010464303413);
    msg.setSource(3289U);
    msg.setSourceEntity(213U);
    msg.setDestination(38137U);
    msg.setDestinationEntity(16U);
    msg.sessid = 509720938U;

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
    msg.setTimeStamp(0.888342112262);
    msg.setSource(3632U);
    msg.setSourceEntity(96U);
    msg.setDestination(13498U);
    msg.setDestinationEntity(21U);
    msg.sessid = 4236994363U;
    msg.messages.assign("OKTEHPXFRTZBLBFJHKGBRVHHBEOWDODEJAQUXOWZBDRAEHRTISBZXQUUOZYPJGIVWKVJIYPHGFWQEMXJCFTKNNXWJFNZIYUVPVD");

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
    msg.setTimeStamp(0.977751206398);
    msg.setSource(17362U);
    msg.setSourceEntity(241U);
    msg.setDestination(65201U);
    msg.setDestinationEntity(27U);
    msg.sessid = 1468224677U;
    msg.messages.assign("WOTGHMTOYZBGERFRLRLERZPTNXKNIZPIRHDPSBUKFGNCCEXVUFTWMWOLVIGDCCJVWQTLFSJUGAEYHEBFVALDCAIYYYTRZGMRDHFKZKHGKNFBYWBGVUSLCDZSKAOAKYHHTKXQLRFBCMENWDOBUAAVIDEPJWZQXXSNQO");

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
    msg.setTimeStamp(0.285743596218);
    msg.setSource(46853U);
    msg.setSourceEntity(12U);
    msg.setDestination(23906U);
    msg.setDestinationEntity(144U);
    msg.sessid = 671483192U;
    msg.messages.assign("ABMQERCCGVTSVIPZRDLZRK");

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
    msg.setTimeStamp(0.00871831830484);
    msg.setSource(61810U);
    msg.setSourceEntity(24U);
    msg.setDestination(60363U);
    msg.setDestinationEntity(241U);
    msg.sessid = 418942209U;

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
    msg.setTimeStamp(0.922108078173);
    msg.setSource(1984U);
    msg.setSourceEntity(76U);
    msg.setDestination(21613U);
    msg.setDestinationEntity(225U);
    msg.sessid = 283876461U;

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
    msg.setTimeStamp(0.0926927814284);
    msg.setSource(37950U);
    msg.setSourceEntity(157U);
    msg.setDestination(50416U);
    msg.setDestinationEntity(216U);
    msg.sessid = 956173460U;

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
    msg.setTimeStamp(0.972787457076);
    msg.setSource(59422U);
    msg.setSourceEntity(20U);
    msg.setDestination(24368U);
    msg.setDestinationEntity(235U);
    msg.sessid = 2168928354U;
    msg.status = 79U;

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
    msg.setTimeStamp(0.611926267457);
    msg.setSource(6087U);
    msg.setSourceEntity(126U);
    msg.setDestination(10946U);
    msg.setDestinationEntity(191U);
    msg.sessid = 3690709393U;
    msg.status = 245U;

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
    msg.setTimeStamp(0.422347100328);
    msg.setSource(18549U);
    msg.setSourceEntity(165U);
    msg.setDestination(15616U);
    msg.setDestinationEntity(51U);
    msg.sessid = 762229713U;
    msg.status = 157U;

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
    msg.setTimeStamp(0.866037279612);
    msg.setSource(52906U);
    msg.setSourceEntity(188U);
    msg.setDestination(25665U);
    msg.setDestinationEntity(46U);
    msg.name.assign("FDGTRSKWLWDNJUTYHCVYSFXJDQAEIOPBVVNRLEVMXWCIOJJBMPHMZJBRMPRNQMKISNRRDOVRKEYKLGZOEUKKFHDFLEUVLBVHIOGTDJFXPJPQZTRQCQJGDTTBLZLGGHXAQHEPBSFNUOWVFXIZLWMMNXZYOESWECAQAKBSWHTZCHHUQOWMGAQZPNUYFSSHEQMBCWAPFNAYCTX");

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
    msg.setTimeStamp(0.125521857852);
    msg.setSource(51454U);
    msg.setSourceEntity(156U);
    msg.setDestination(23863U);
    msg.setDestinationEntity(115U);
    msg.name.assign("WLRNVKGJMRVIRGVPNQGWTAJJELSYSUTCXKYZBMRJIHPCIDKYLRMZPYRGECDSDLNTWFMELTOOIYGGNHBFUBJHCOWEXXHPEQT");

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
    msg.setTimeStamp(0.648096158707);
    msg.setSource(30602U);
    msg.setSourceEntity(251U);
    msg.setDestination(44982U);
    msg.setDestinationEntity(143U);
    msg.name.assign("IVPDBQUKSQACSXAGXIBAXDQWINNNGMPZSRSOQCRKCGBRKX");

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
    msg.setTimeStamp(0.93827306261);
    msg.setSource(61748U);
    msg.setSourceEntity(179U);
    msg.setDestination(13377U);
    msg.setDestinationEntity(39U);
    msg.name.assign("HYCUIHLOHGEUGQGDXFPKEJIMZXTFYBFSNQERSCMSXTVUAVSXJSIFGOANNOAURAWTETTCPDEWGPLZVZKCJZNDVCJOOWCCNBCQIKRRLLDRHYWGREGCSJDRABAOVHMSPUXDXQLRAXPRLFLITKFLZVMVQNKUNBZMJZHUPAGKHECKUYJUZDBMOBXJMHSTXNFOPJPGQTJYFKBMSOYWANWEWVKLIIIPFWMFXBQMB");

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
    msg.setTimeStamp(0.52747110346);
    msg.setSource(64223U);
    msg.setSourceEntity(23U);
    msg.setDestination(35341U);
    msg.setDestinationEntity(238U);
    msg.name.assign("GFRTVCNMXUQMEBHKWWBCDYIZJEAYYHRFIJDZFTBBRRPTPBXQNAOGSSEAQAGOGXCGYEXOEJIHWCSJIOQZNWUTYIVLYJSCNQBNMBIAQVREXTQCCTFSMZCHYFLCIOGDLSQJMQOJJDWTLVLPKYXGJHAMKSXIWLUDRZPFUJEZRLNVNOYUGNCPDWDRFBKVGVKLKFPNOMLMXUXMFHZWTOKVPRAAKNZPFPOSDEBKDLAHIYASMEQUKBDUGEWTH");

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
    msg.setTimeStamp(0.819404208788);
    msg.setSource(31248U);
    msg.setSourceEntity(33U);
    msg.setDestination(19219U);
    msg.setDestinationEntity(254U);
    msg.name.assign("NVINVEHOURSSYAANVZTUUQEOTAKOPYVCPZCJOYBEHQGALGQHDECFLDNHWXGIFJRRVZPDHLPWYXPHVRFDSCYEBCXLWQSDMYKZQIANVBCSYJCTBKFDIDDUFPFGKPNIXUFLCYOWPLRJEOWBTLMZSBITGXNARVTIOYUWMJMALCKBKKCNJTAMUUWREIMTWNHHDQIRZOGLTQMGKHEXTRXUQEWFSZSK");

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
    msg.setTimeStamp(0.564451183588);
    msg.setSource(38974U);
    msg.setSourceEntity(51U);
    msg.setDestination(18271U);
    msg.setDestinationEntity(43U);
    msg.type = 207U;
    msg.error.assign("UVZSGAEKECNFZXLOYDEOGQVJLATXSAGKWGKDDEAFCXOEDYPAJIRZKNIUOUYRVZXSSETSCVHFPKFQRIDXGBQPXDWXNOTYVCAJZQSFMPDQLMMLOBNHWNHHBRPOYRLIDERSBAGYLYJBBYUFZCMMWSTQTVABZVKUUPPNCMQNMYBTZCXVKQGZHFLPWSCPQUYZWKUFANHEGHWFUXECKRDIFJNPILHCHJDWHBRO");

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
    msg.setTimeStamp(0.854943282269);
    msg.setSource(33194U);
    msg.setSourceEntity(193U);
    msg.setDestination(12052U);
    msg.setDestinationEntity(253U);
    msg.type = 34U;
    msg.error.assign("BPYTLSNEDLICHZSTSNCFDRBCDZSUHKJZEGQCJEXYVWGTDPLYWWJLEJJAMHEQMUCOWMIDTRNEJXPIBEKSBWXZZAWPXOT");

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
    msg.setTimeStamp(0.110001636615);
    msg.setSource(46942U);
    msg.setSourceEntity(16U);
    msg.setDestination(23794U);
    msg.setDestinationEntity(192U);
    msg.type = 192U;
    msg.error.assign("MDSWJJKFXXIHDYKBORIBBRNYEXQVCHOHPQPGAQKMYIVSAQZLVNXPYUIJFUPLVGUOAQAJVNZKZUBNOILRUUTOPH");

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
    msg.setTimeStamp(0.209754447935);
    msg.setSource(21799U);
    msg.setSourceEntity(7U);
    msg.setDestination(59589U);
    msg.setDestinationEntity(122U);
    msg.seq = 14889U;
    msg.sys_dst.assign("TVGOSIZWOTZQZYDMORBSXUZLJNHHXCSMNCLJNXXGNSDPQJTWGWDBKNWDPTQRORSUIICEBCQFLFREZNDEZAOFUGPHBIGUCIVWFDQRBQGMJMXSRUEYAPHZGCCCASXRRKKMZAYUXHULEVQFYAMQYYMTBOVOELNOFOWVVUQPLVYEBMKLDOBFRTECFHVSDRPJGINVPHSETYKTFMJVGL");
    msg.flags = 140U;
    const char tmp_msg_0[] = {-106, -101, -62, 83, -76, -116, 116, 19, 90, -102, 98, 56, -23, 107, -36, -13, -2, 46, 99, 34, 45, -54, -125, 115, -60, 29, 123, -97, -4, 88, -116, 107, -114, 27, 52, 51, 121, -61, -19, 121, -93, -7, 98, -105, -65, 59, -42, -121, 8, -128, 94, -32, 95, -16, -48, -41, 107, 56, -87, 47, 111, -66, -123, -78, 113, 74, 31, 12, -80, -90, -102, 10, 94, -80, 111, 85, 18, 65, -15, 26, 79, -2, -119, -18, -84, 25, -123, 14, -97, -65, -58, -47, 3, 115, -105, -24, -104, 74, 65, -4, -52, 20, -45, 87, -13, -47, 49, -101, -27, 53, -50, -61, 126};
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
    msg.setTimeStamp(0.541452103261);
    msg.setSource(2423U);
    msg.setSourceEntity(10U);
    msg.setDestination(43630U);
    msg.setDestinationEntity(42U);
    msg.seq = 56810U;
    msg.sys_dst.assign("AUPTMNTYLNTBJJJJNEKQXIAGQUXYJEUKAQSFNPTYGCFHLIBUFDSMSXDMKSEMVHKAOLDCYOCRAFLBMMWLYAKLSZPTNVGTNBCZZBEPBJHETRGQPDDOVYHDRFIQTXSHNSRUVXXYECILQCNOZOYX");
    msg.flags = 146U;
    const char tmp_msg_0[] = {6, 70, -121, 3, 27, 32, -111, -26, -1, 51, 3, 24, 107, -119, 48, -56, 46, -107, -34, -47, 51, 36, 114, -65, -98, -29, -128, 6, -28, 43, -30, 6, 86, -90, -73, 4, 95, 88};
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
    msg.setTimeStamp(0.881781022069);
    msg.setSource(360U);
    msg.setSourceEntity(103U);
    msg.setDestination(36582U);
    msg.setDestinationEntity(209U);
    msg.seq = 47097U;
    msg.sys_dst.assign("HHPDJQPCSZOTCAIALQPJJKXSVECEZHWVZIQTRRKKUYBVUFYCARVPMDCPKFWTUCDGMOZXTRIDRXWEUNMJBVCKDS");
    msg.flags = 252U;
    const char tmp_msg_0[] = {-75, -104, 90, 67, 21, -55, 80, 58, -128, -100, -6, 26, 11, -59, -109, -87, 101, -111, -44, 125, -68, 56, 10, -93, -40, -111, -73, 77, 7, -113, -118, -82, 59, -14, -73, -112, 114, -66, -84, -29, -13, 41, -46, 50, 52, 76, -44, 77, 23, 27, 8, -128, 54, 45, -46, 34, 125, -25, 21, 100, -66, 51, 67, -123, -119, 93, 12, 117, -119, -7, -36, 122, 12, -97, 8, 13, 39, -22, -63, -44, 10, 33, 44, -127, -45, 81, 117, 19, 84, -87, 88, -114, 87, 116, 77, -34, -19, 27, -106, -28, -23, -6, 75, 68, 43, 122, 27, 84, -77, -27, 26, 35, -63, -119, 80};
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
    msg.setTimeStamp(0.75857431114);
    msg.setSource(28630U);
    msg.setSourceEntity(91U);
    msg.setDestination(7611U);
    msg.setDestinationEntity(3U);
    msg.sys_src.assign("NEIQSVNJUEXYHPTFEUAXJQPCXOAGPNUTDQIFLGCDHOJVHFWZILGBRYPKJVKLJYCBKDDZXCCOGZBBTDQICNWXWYMSKOSOKMLKNIRRALSYZUTEXNRFWAUAXBRVPKFGGAHOQELGDFMJVCMZXUBVRTTNCOUCZHJRBQAOYZVSLMNSEPHQIMRPFJWDHDNWTVVFKLJSSPBUEZOBERYMKPHTGGYAWLBUQADLQSX");
    msg.sys_dst.assign("UZDXAVHQAGIFHWFOMETYKKUMROYSOCCVHSOLK");
    msg.flags = 235U;
    const char tmp_msg_0[] = {-22, 97, 119, -15, -116, -36, -73, -52, -107, -93, 70, -48, 83, 35, 1, 122, -122, 92, 75, -66, -93, 90, 59, 1, -70, -57, -23, -2, -42, 107, -5, 10, 108, -39, 81, -106, -96, -56, 10, 7, 41, 23, -17, -83, -42, -115, -77, 70, 26, 91, -20, 104, -37, 21, -28, -20, -94, 46, 63, 70, 27, 99, -90, 3, 30, -35, 98, 12, 29, -35, 32, 0, 86, -14, -124, 41, 87, 52, -102, 88, 1, -75, -127, -74, -122, 24, -128, 35, -23, -14, 81, 106, -82, 14, -5, 64, -84, -47, -43, -63, 14, -33, -17, -18, -103, 37, -66, 115, -6, 94, -107, -96, 74, 43, -92, -40, -36, -13, -96, -10, 59, 55, 13, 40, 42, -91, 88, -124, -31, -85, -75, -4, -63, -85, -1, -4, -81, 110, -127, 31, -85, -3, 8, -39, 126, -30, -20, -91, -8, 78, 74, 14, -50, -90, 116, 101, -86, -89, -67, -53, 24, 45, -43, 112, 49, -26, 52, -104, 90};
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
    msg.setTimeStamp(0.422632174719);
    msg.setSource(38874U);
    msg.setSourceEntity(153U);
    msg.setDestination(13116U);
    msg.setDestinationEntity(207U);
    msg.sys_src.assign("NLZABFIDYPPRVHDWQVLXCGNM");
    msg.sys_dst.assign("MGYNKUVVXNUARLIEOSXUDLACWHAVWLDSTLSAHGVQOFBGSJITWBRQWWMVRFYSYVJQLGNILVMXGOXZSXFLAVOMIUAWCUMIIFNQWENGNUMSXABPKFKFMXJTGAHNRXTTSEHPZTQINEKVHNLCTBAQMHHJTDGQZUPEOQOGZACDESIPKJERCYFDNYKXRCPUM");
    msg.flags = 87U;
    const char tmp_msg_0[] = {27, -68, 60, 73, -101, -103, 45, 69, 64, 69, -111, 34, -94, 113, 5, 36, -107, 30, 33, -104, -69, 29, -6, -91, -104, -102, -88, -34, 107, -57, 67, 47, 67, 17, 21, -2, -84, -98, 67, 125, -124, 111, -7, 42, 57, -18, -47, -117, 58, -2, -40, -63, -72, 46, 91, 46, 117, -4, -102, 10, -120, 56, -47, 74, -46, 103, -119, -36, -121, -50, -109, 102, -83, -45, -102, -127, 66, 28, 94, 109, -75, 120, -87, 23, 53, -41, 71, 9, -115, -94, 106, -67, 60, 96, -9, 26, -41, 41, -28, 90, -25, -101, 91, 54, 0, -76, 29, -128, -117, 56, 65, -62, 35, 61, -80, 107, -99, 112, -105, -112, 38, -77, 114, 118, -31, 8, 34, 111, -95, -19, 75, -51, 6, -70, -102, -36, -32, -113, 102, 54, -29, -12, 57, 35, 38, -99, 122, -74, -81, 63, 96, -25, 18, -80, -10, 116, 55, -67, -2, -101, 33, -89, -50, 27, 66, 120, -51, -48, 49, -44, 116, 43, 69, -22, 113, -117, 65, 52, -89, 2, -63, -26, -89, -78, 95, 116, -31, 90, -3, 64, 124, -125, 44, 20, -18, -75, 107, -21, -38, -87, 42, -16, -57, -29, 56, 16, -6, -9, -9, -106, 73, 48, -13, 103, -84, 24, 82, 25, 113};
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
    msg.setTimeStamp(0.542373257555);
    msg.setSource(49847U);
    msg.setSourceEntity(229U);
    msg.setDestination(54200U);
    msg.setDestinationEntity(123U);
    msg.sys_src.assign("RGVTXHSBKOQLURIUCBLYYQFJGYQLJIRDHODIMNSCFZIKXHIMSUNAGJCJGNOZFRURXOGHWLMBOYNABRATTAUGHKHZKXTNMEDQTVFGEXVKRCSHFFQVQUIWUOTJHKWRBOEPUJTDKAMADRFDECWQJACGDILCCPSEMSPWOYZBPFPALDBTFAMWTQMW");
    msg.sys_dst.assign("JJWVQLLMNMRFZIHBWTIFPSJTGMDIOZUDVPVXIQYRIMHQFQTKYZVXIRBEXJASVTPNUZHKFLJIKTOPVJFCL");
    msg.flags = 231U;
    const char tmp_msg_0[] = {83, -91, 125, -98, -123, 11, 38, -120, 58, 10, -30, 106, -96, 102, -115, 95, 108, -2, 63, 108, 55, -90, -50, -114, -71, 5, 90, 74, 124, -82, 98, 120, -109, 93, -26, 2, -78, -54, 84, -99, -119, 19, -23, 42, 94, -46, 5, -12, 14, -74, 69, 61, -2, -77, -71, -122, 101, -32, 17, 77, -118, 18, -53, -61, -111};
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
    msg.setTimeStamp(0.176091827722);
    msg.setSource(41095U);
    msg.setSourceEntity(79U);
    msg.setDestination(42716U);
    msg.setDestinationEntity(81U);
    msg.seq = 30295U;
    msg.value = 88U;
    msg.error.assign("YDGEXOJOPIJIHGZUSJCALZSXDQTSDIOBHEVLHBQYNBOGXQRTFPXIQFZTZRMWUJFBKTUEOEURFWZMEEYDEJHUPPSQUJWCEDNUJZKXUBXHTQTOBIBPVHEBGDRKHGCSMMDTSNEIKXYCACLWOKWKJVFTXTAWMVWUUNRRPPAATYKXAPFHFLCYVWFBDYZNACQDGJHSNGVGRVIANNQZLHIIBKXSLANFMZLYLIPODSKGLCVYQWRZCMNRQOMLYAMJMVRGFO");

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
    msg.setTimeStamp(0.0225030601127);
    msg.setSource(32650U);
    msg.setSourceEntity(153U);
    msg.setDestination(45427U);
    msg.setDestinationEntity(4U);
    msg.seq = 58612U;
    msg.value = 235U;
    msg.error.assign("FYHYAHNJGOKPONHMASGDFLMQGGBXCJKOJGLAUTJZQHNQWRBTSSDMRXHJPCIEXZDGLEVUBZOHOEIAPKISEFTLRCJBIZGHZRZCCPKICWHWSVVRNBOEWQRUHITBLAAIXUAEZFTQVFNFBYXEMXSYYMPQRWINNWQKZWATEFKDUMXKMJCGWLLSPOYXMCRQLQUQVDLVORNMDVUUPVZGJKDYJZNNHMEVYLCSTTWEVWDBDFFPSKOROTFYUIJCI");

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
    msg.setTimeStamp(0.523713831364);
    msg.setSource(36468U);
    msg.setSourceEntity(162U);
    msg.setDestination(28322U);
    msg.setDestinationEntity(184U);
    msg.seq = 51370U;
    msg.value = 202U;
    msg.error.assign("IBHSWODIMZVXIAPXBJOMDTRUDUEHEKATRFXVSJARYDPSSDNFUYHOHQBQOWCURPNPCVKHCGRFQNDWFBBVEJJGWNWOFPSCZLWGYNBIJPCMRGZFVZGVDUOTCITYWRHDOZZKCRCLTSKPVCTGPPHGVQFISRLBQLIJEUXUMWVEFNLIXAECANYGKBNLTWKFULJJKEEEXLMZOSMYUAMTBRQTBKAMHGOZLQNYJFA");

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
    msg.setTimeStamp(0.401823017444);
    msg.setSource(28328U);
    msg.setSourceEntity(198U);
    msg.setDestination(34882U);
    msg.setDestinationEntity(240U);
    msg.seq = 23388U;
    msg.sys.assign("NVVECYFZIGFFCTPYGVMDWQIUDRDQUCERHHXZOHTBNXUKSKIOJAJXLRCNPKMUOTVDYSZLWGRAHEBBZRGQFITKDMKKWUYRIXACIFUSWBAJCDMLIBFRLMTMYNXGHNCKEQEJBBABPXDOSYNUFBMPPMKNKYZPROVZSSKJQYLSDVELPQIOJZCXWABYOHZWHTGSOLOQJADPUFGIQSZHNCUOVATZPNVDMQJFVNPTMQGLAJERRWWYWXJCSTGUF");
    msg.value = 0.779162652209;

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
    msg.setTimeStamp(0.180971472519);
    msg.setSource(13973U);
    msg.setSourceEntity(90U);
    msg.setDestination(47084U);
    msg.setDestinationEntity(160U);
    msg.seq = 22502U;
    msg.sys.assign("QWEIXDRCPEMANNFSLUGJVFBG");
    msg.value = 0.998778550116;

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
    msg.setTimeStamp(0.810241581606);
    msg.setSource(48432U);
    msg.setSourceEntity(149U);
    msg.setDestination(30731U);
    msg.setDestinationEntity(250U);
    msg.seq = 43195U;
    msg.sys.assign("OKVFOSGQGPGZNMAOFYCSVYYJQNTHHBPBYPOVAIZPVRJZDGZMFITNBPMOCPIMFKFSPBRZDQFVIXYWSCXUJFRIRDVAOTQLNFXUBYWZESZSBDKLSDAEVTOSXJWDHFNSKPXNLE");
    msg.value = 0.993892689286;

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
    msg.setTimeStamp(0.475091763626);
    msg.setSource(48806U);
    msg.setSourceEntity(42U);
    msg.setDestination(9164U);
    msg.setDestinationEntity(83U);
    msg.action = 92U;
    msg.longain = 0.987448948923;
    msg.latgain = 0.894406017461;
    msg.bondthick = 3961324171U;
    msg.leadgain = 0.0737460385485;
    msg.deconflgain = 0.114721244214;

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
    msg.setTimeStamp(0.598236044117);
    msg.setSource(30245U);
    msg.setSourceEntity(92U);
    msg.setDestination(48584U);
    msg.setDestinationEntity(130U);
    msg.action = 65U;
    msg.longain = 0.762542850699;
    msg.latgain = 0.346655615236;
    msg.bondthick = 704704385U;
    msg.leadgain = 0.538693716876;
    msg.deconflgain = 0.689885781753;

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
    msg.setTimeStamp(0.911794093873);
    msg.setSource(60077U);
    msg.setSourceEntity(4U);
    msg.setDestination(64233U);
    msg.setDestinationEntity(79U);
    msg.action = 68U;
    msg.longain = 0.936339164969;
    msg.latgain = 0.467866609712;
    msg.bondthick = 303835424U;
    msg.leadgain = 0.563561265352;
    msg.deconflgain = 0.991792318304;

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
    msg.setTimeStamp(0.613766346843);
    msg.setSource(57028U);
    msg.setSourceEntity(53U);
    msg.setDestination(22042U);
    msg.setDestinationEntity(168U);
    msg.err_mean = 0.474564900109;
    msg.dist_min_abs = 0.504177145944;
    msg.dist_min_mean = 0.853971764082;

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
    msg.setTimeStamp(0.0474901118722);
    msg.setSource(56725U);
    msg.setSourceEntity(22U);
    msg.setDestination(6121U);
    msg.setDestinationEntity(169U);
    msg.err_mean = 0.578037515573;
    msg.dist_min_abs = 0.177992800541;
    msg.dist_min_mean = 0.424471664451;

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
    msg.setTimeStamp(0.946972567869);
    msg.setSource(50593U);
    msg.setSourceEntity(133U);
    msg.setDestination(24807U);
    msg.setDestinationEntity(96U);
    msg.err_mean = 0.205147240615;
    msg.dist_min_abs = 0.958339424963;
    msg.dist_min_mean = 0.296668251539;

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
    msg.setTimeStamp(0.246032307017);
    msg.setSource(64932U);
    msg.setSourceEntity(35U);
    msg.setDestination(26985U);
    msg.setDestinationEntity(105U);
    msg.action = 114U;
    msg.lon_gain = 0.299534509522;
    msg.lat_gain = 0.0755931923531;
    msg.bond_thick = 0.5889889081;
    msg.lead_gain = 0.599763834789;
    msg.deconfl_gain = 0.97082584205;
    msg.accel_switch_gain = 0.766038006963;
    msg.safe_dist = 0.195202765042;
    msg.deconflict_offset = 0.74354678185;
    msg.accel_safe_margin = 0.864311657929;
    msg.accel_lim_x = 0.602883513546;

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
    msg.setTimeStamp(0.829401242117);
    msg.setSource(61179U);
    msg.setSourceEntity(118U);
    msg.setDestination(18990U);
    msg.setDestinationEntity(15U);
    msg.action = 227U;
    msg.lon_gain = 0.157129629506;
    msg.lat_gain = 0.74422798416;
    msg.bond_thick = 0.189366628025;
    msg.lead_gain = 0.595034745163;
    msg.deconfl_gain = 0.00401513379123;
    msg.accel_switch_gain = 0.884777154426;
    msg.safe_dist = 0.842478873864;
    msg.deconflict_offset = 0.945330376119;
    msg.accel_safe_margin = 0.35824645543;
    msg.accel_lim_x = 0.471636714147;

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
    msg.setTimeStamp(0.301208367794);
    msg.setSource(12083U);
    msg.setSourceEntity(73U);
    msg.setDestination(56740U);
    msg.setDestinationEntity(80U);
    msg.action = 235U;
    msg.lon_gain = 0.0823410516368;
    msg.lat_gain = 0.773105041475;
    msg.bond_thick = 0.810922942563;
    msg.lead_gain = 0.309682107804;
    msg.deconfl_gain = 0.000364035108628;
    msg.accel_switch_gain = 0.651037748509;
    msg.safe_dist = 0.163414175904;
    msg.deconflict_offset = 0.0208442242776;
    msg.accel_safe_margin = 0.205611594175;
    msg.accel_lim_x = 0.944549797294;

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
    msg.setTimeStamp(0.0821555208718);
    msg.setSource(14361U);
    msg.setSourceEntity(36U);
    msg.setDestination(43571U);
    msg.setDestinationEntity(183U);
    msg.type = 71U;
    msg.op = 81U;
    msg.err_mean = 0.664255604434;
    msg.dist_min_abs = 0.170590614153;
    msg.dist_min_mean = 0.630136888124;
    msg.roll_rate_mean = 0.517342733608;
    msg.time = 0.220086500912;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 206U;
    tmp_msg_0.lon_gain = 0.84232143905;
    tmp_msg_0.lat_gain = 0.710898558604;
    tmp_msg_0.bond_thick = 0.891851036688;
    tmp_msg_0.lead_gain = 0.516650490195;
    tmp_msg_0.deconfl_gain = 0.248955927547;
    tmp_msg_0.accel_switch_gain = 0.560581823458;
    tmp_msg_0.safe_dist = 0.110325174057;
    tmp_msg_0.deconflict_offset = 0.54004593781;
    tmp_msg_0.accel_safe_margin = 0.846256014103;
    tmp_msg_0.accel_lim_x = 0.424967567041;
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
    msg.setTimeStamp(0.953096516984);
    msg.setSource(23477U);
    msg.setSourceEntity(65U);
    msg.setDestination(51086U);
    msg.setDestinationEntity(198U);
    msg.type = 89U;
    msg.op = 171U;
    msg.err_mean = 0.430105814236;
    msg.dist_min_abs = 0.353239554766;
    msg.dist_min_mean = 0.526632512426;
    msg.roll_rate_mean = 0.775089006543;
    msg.time = 0.735859196182;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 101U;
    tmp_msg_0.lon_gain = 0.877895119251;
    tmp_msg_0.lat_gain = 0.402207737456;
    tmp_msg_0.bond_thick = 0.179466224393;
    tmp_msg_0.lead_gain = 0.942312980722;
    tmp_msg_0.deconfl_gain = 0.517452206953;
    tmp_msg_0.accel_switch_gain = 0.339683126725;
    tmp_msg_0.safe_dist = 0.0319503740251;
    tmp_msg_0.deconflict_offset = 0.944455033581;
    tmp_msg_0.accel_safe_margin = 0.65950758968;
    tmp_msg_0.accel_lim_x = 0.0462111412241;
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
    msg.setTimeStamp(0.770174532295);
    msg.setSource(47367U);
    msg.setSourceEntity(97U);
    msg.setDestination(52806U);
    msg.setDestinationEntity(92U);
    msg.type = 58U;
    msg.op = 101U;
    msg.err_mean = 0.813923931102;
    msg.dist_min_abs = 0.416247044181;
    msg.dist_min_mean = 0.251034602652;
    msg.roll_rate_mean = 0.667591758953;
    msg.time = 0.331053971217;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 54U;
    tmp_msg_0.lon_gain = 0.155971311878;
    tmp_msg_0.lat_gain = 0.0597984675868;
    tmp_msg_0.bond_thick = 0.546390188862;
    tmp_msg_0.lead_gain = 0.939589825755;
    tmp_msg_0.deconfl_gain = 0.0786056103998;
    tmp_msg_0.accel_switch_gain = 0.464925934791;
    tmp_msg_0.safe_dist = 0.421954095822;
    tmp_msg_0.deconflict_offset = 0.278876606181;
    tmp_msg_0.accel_safe_margin = 0.410405625843;
    tmp_msg_0.accel_lim_x = 0.504921958074;
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
    msg.setTimeStamp(0.436453631919);
    msg.setSource(30422U);
    msg.setSourceEntity(163U);
    msg.setDestination(16000U);
    msg.setDestinationEntity(49U);
    msg.lat = 0.150034487312;
    msg.lon = 0.734842292577;
    msg.eta = 4291050242U;
    msg.duration = 35735U;

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
    msg.setTimeStamp(0.177908191441);
    msg.setSource(27925U);
    msg.setSourceEntity(233U);
    msg.setDestination(53534U);
    msg.setDestinationEntity(156U);
    msg.lat = 0.366695454923;
    msg.lon = 0.0558844129681;
    msg.eta = 215217914U;
    msg.duration = 55684U;

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
    msg.setTimeStamp(0.237794971984);
    msg.setSource(11161U);
    msg.setSourceEntity(97U);
    msg.setDestination(46375U);
    msg.setDestinationEntity(238U);
    msg.lat = 0.632390107208;
    msg.lon = 0.702792807523;
    msg.eta = 2150243298U;
    msg.duration = 40970U;

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
    msg.setTimeStamp(0.844563544056);
    msg.setSource(42658U);
    msg.setSourceEntity(165U);
    msg.setDestination(31516U);
    msg.setDestinationEntity(202U);
    msg.plan_id = 35122U;
    IMC::SoiWaypoint tmp_msg_0;
    tmp_msg_0.lat = 0.654162533844;
    tmp_msg_0.lon = 0.150345963255;
    tmp_msg_0.eta = 1009761244U;
    tmp_msg_0.duration = 9542U;
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
    msg.setTimeStamp(0.473194254171);
    msg.setSource(6616U);
    msg.setSourceEntity(37U);
    msg.setDestination(54698U);
    msg.setDestinationEntity(65U);
    msg.plan_id = 55644U;

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
    msg.setTimeStamp(0.810319189966);
    msg.setSource(57765U);
    msg.setSourceEntity(33U);
    msg.setDestination(44734U);
    msg.setDestinationEntity(135U);
    msg.plan_id = 41666U;
    IMC::SoiWaypoint tmp_msg_0;
    tmp_msg_0.lat = 0.265029370882;
    tmp_msg_0.lon = 0.459070914442;
    tmp_msg_0.eta = 4210292681U;
    tmp_msg_0.duration = 52478U;
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
    msg.setTimeStamp(0.66524432703);
    msg.setSource(25087U);
    msg.setSourceEntity(32U);
    msg.setDestination(51103U);
    msg.setDestinationEntity(237U);
    msg.type = 107U;
    msg.command = 151U;
    msg.settings.assign("XGQSPBOBXKGKTYOXMVWODWMSUJZFKALBMBNZJUHJSUNINJMTYPQXSSAOZFGKFLXIKSNIPFNUEJUAXCZUHIVMGLBZYYBAXULDVVGHHOOLVQSZALSQYFOKDEJWIRWDKTIRBCRTXVFYCSFPKEGZPTVEAJMVLZRMTNWBCPGULCDNVYQDQCJQELOLBUJJNOUDQDPQAGIFRETTYHTVIHYGWYOEAPRAWHSNMZKXRTCHAPEQIKXMGBCCWWDCEFRWRMPNEH");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 53167U;
    IMC::SoiWaypoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.458474242918;
    tmp_tmp_msg_0_0.lon = 0.268310667649;
    tmp_tmp_msg_0_0.eta = 3500918995U;
    tmp_tmp_msg_0_0.duration = 7014U;
    tmp_msg_0.waypoints.push_back(tmp_tmp_msg_0_0);
    msg.plan.set(tmp_msg_0);
    msg.info.assign("IGJMNZQYHBSOTKAQRMFPGDSRBULXVPTGXBOWZCHIAKBOOVZTZDIXBNGWR");

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
    msg.setTimeStamp(0.831592118536);
    msg.setSource(59939U);
    msg.setSourceEntity(123U);
    msg.setDestination(60386U);
    msg.setDestinationEntity(229U);
    msg.type = 85U;
    msg.command = 163U;
    msg.settings.assign("WWZKAAPHBIRFSUNVLAJPVGFUTYSHRGHZJQFHVLTPEMEHDUYLUVRXBUGXSUOAFIOTYBXHSONAUDBENIEIOTCCWEHCVAPJJIELKBTGOKCZXKYZBDTGISMGJHRRWYTNSYLBKWVILYZFYDFAZXNNOUMKRDDJCLCGMIQMBJFDBKQWVZVNXQSCQRKMNPLCXNFRLDMXTEJIFSLWPYKSYBIJOAEFEMPTHUZ");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 61848U;
    msg.plan.set(tmp_msg_0);
    msg.info.assign("JTMYYUAGKRKWYMNAVGVBMZPLBOQCVFJBLYGACBXUIHEYDQGJAINXITCLTDIKAJWVOMIEAHIPCTHGZMPNWFJSSODDMSIKUWFBXRRUXVYVQBRGBNZYPLJUOSRDARSXKULEJKQCAUHZZWNGTPEFEXQQDPOWGNZFOBLDEUHLFCPFCEKHSDWXRLQCSVZCBKIFLEPLQYROTOFZTSMOYOEJSPIUHKIRHNTJBVNHQHYJPC");

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
    msg.setTimeStamp(0.777143136313);
    msg.setSource(5996U);
    msg.setSourceEntity(72U);
    msg.setDestination(62905U);
    msg.setDestinationEntity(226U);
    msg.type = 130U;
    msg.command = 36U;
    msg.settings.assign("RXQDAZSTJGSLHVTQYYLKPHERPJVAIUVBPEHKWASYJBVJQSRCLXQAECZMUUQCIHOLTPWMOKDOJFZKXWCRIFAW");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 20505U;
    IMC::SoiWaypoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.5562611037;
    tmp_tmp_msg_0_0.lon = 0.672808254361;
    tmp_tmp_msg_0_0.eta = 2754699331U;
    tmp_tmp_msg_0_0.duration = 48140U;
    tmp_msg_0.waypoints.push_back(tmp_tmp_msg_0_0);
    msg.plan.set(tmp_msg_0);
    msg.info.assign("UXUTTAGPZOUBSKBOVNHQHCRXZCOBZSLASCHLSUSNPTFRCTVYZIVBHHXQUCNEDWKBAXWSMOIZJHTXSDWIQIUNDOEYCHDPMMTNEEEQPGIXXMKOGNKIBKGFRGWAYMMVFZYMAPELDDGVWDCGEQYUJZIPLYJDLYANWUTDKHRRRMPFCPSOXTEEA");

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
    msg.setTimeStamp(0.124114773179);
    msg.setSource(62049U);
    msg.setSourceEntity(0U);
    msg.setDestination(31667U);
    msg.setDestinationEntity(27U);
    msg.state = 228U;
    msg.plan_id = 10171U;
    msg.wpt_id = 184U;
    msg.settings_chk = 52872U;

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
    msg.setTimeStamp(0.798758505869);
    msg.setSource(53583U);
    msg.setSourceEntity(200U);
    msg.setDestination(38372U);
    msg.setDestinationEntity(150U);
    msg.state = 82U;
    msg.plan_id = 33127U;
    msg.wpt_id = 242U;
    msg.settings_chk = 6711U;

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
    msg.setTimeStamp(0.470649415946);
    msg.setSource(10347U);
    msg.setSourceEntity(222U);
    msg.setDestination(61323U);
    msg.setDestinationEntity(105U);
    msg.state = 119U;
    msg.plan_id = 28819U;
    msg.wpt_id = 229U;
    msg.settings_chk = 19028U;

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
    msg.setTimeStamp(0.807503514842);
    msg.setSource(27924U);
    msg.setSourceEntity(181U);
    msg.setDestination(4885U);
    msg.setDestinationEntity(220U);
    msg.uid = 126U;
    msg.frag_number = 150U;
    msg.num_frags = 232U;
    const char tmp_msg_0[] = {-115, -66, -110, -66, -21, 17, 48, -49, 52, 120, -63, 113, 117, 123, 41, -99, -93, 75, 3, 74, 112, -68, 3, 89, -100, 48, -92, -45, -112, -74, -100, 121, -93, 68, 75, 52, 13, -77, -123, 99, 35, -128, 37, 27, -105, 29, 68, 68, 29, 13, 85, 124, 46, -34, -60, 66, 88, 118, -91, 64, 19, -37, 76, 74, -71, -124, -86, -122, -26, 94, -109, -16, 17, -62, 75, -59, -15, 61, 46, -81, 54, -25, 73, -89, 51, 81, 64, -14, 73, -5, -25, -97, 101, 20, -99, -83, -10, 38, -51, -48, 95, -69, 22, -92, -31, 96, 115, 98, -97, -41, 46, 59, 103, 91, 25, 31, -113, -67, 74, -115, -2, -36, -41, -126, -11, -125, 25, 26, 54, 10, -63, -65, -108, 36, 98, -18, 30, -67, -77, 61, -107, 38, 19, 111, 80, -40, 53, 103, 7, 28, 94, -126, -123, 75, 25, 75, 11, 113, -55, -81, -115, 65, 107, 17, 28};
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
    msg.setTimeStamp(0.323255114808);
    msg.setSource(16073U);
    msg.setSourceEntity(56U);
    msg.setDestination(864U);
    msg.setDestinationEntity(87U);
    msg.uid = 3U;
    msg.frag_number = 212U;
    msg.num_frags = 86U;
    const char tmp_msg_0[] = {-124, 104, 121, -50, -1, -1, 87, -43, 65, 100, -92, 37, 70, -74, 121, 46, 59, -102, -12, -71, -118, -38, 16, -36, -84, 125, -2, -85, 80, -70, -87, 52, -27, -43, -71, 9, 3, -60, 69, -3, -41, -46, 115, -60, -126, 13, 36, -35, 30, 102, -72, -84, 126, 15, 24, 50, -90, 7, 5, -86, 45, -116, 74, 117, -122, -45, -27, -56, -36, -127, 23, -17, -99, 88, -82, 116, -55, 30, 114, 81, -110, -1, -1, 37, 9, -113, -32, 47, -99, 61, 32, -85, -116, 42, 99, -100, 76, 76, -126, 16, 119, 65, 117, -93, -60, -13, -54, 53, 3, -109, 53, 57, -119, 95, 75, 7, 40, -64, 53, 25, -59, -34, 39, 73, 36, -59, -107, 40, -8, 119, 79, -122, -44, -54, 87, 114, 95, 99, 70, -84, 80, 83, 8, -79, 80, -68, -98, -22, -128, 98, -24, -82, -11, 126, -110, 67};
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
    msg.setTimeStamp(0.677274267219);
    msg.setSource(65389U);
    msg.setSourceEntity(27U);
    msg.setDestination(35654U);
    msg.setDestinationEntity(81U);
    msg.uid = 87U;
    msg.frag_number = 229U;
    msg.num_frags = 137U;
    const char tmp_msg_0[] = {109, 116, 28, -60, 25, -112, 116, -119, -60, 11, 56, 87, -102, -101, -60, 24, -84, 43, 80, -77, 94, -38, -123, -30, -58, -6, -79, 16, -54, 36, -78, -116, 83, 36, 70, -104, 45, -103, -103, 74, -11, 68, -49, 74, 116, -91, 122, -59, 119, -78, 3, 102, -107, -125, -38, -113, 87, -114, -102, -49, 60, 21, -28, -66, 51, -128, -128, -120, -58, 86, 16, 119, -19, 118, -77, 104, -126, 25, 106, -17, -62, -21, -28, -82, 85, 123, -48, 69, 43, 107, -8, -41, 83, -47, 114, -110, -40, 68, -49, -31, 49, 30, 110, -41, -105, -101, 44, -72, -102, 42, 82, 83, 52, -4, 5, -11, -30, 95, 53, -54, 113, 10, -68, 74, -18, -78, 31, 46, 29, 6, 24, 53, -105, 42, -110, 39, -90, 40, 23, 0, -38, -56, 113, -17, -36, -72, 109, -100, 6, 123, 112, 19, 111, -10, 16, -109, 114, 22, -25, -36, -43, -3, -18, -90, 126, 56, -126, -109, -58, 104, 41, 83, -45, 30, -3, -101, 75, -106, 90, 103, 120, 47, 92, -92, 61, 91, 34, -31, -35, -110, -74, -98, 71, -80, -9, 20, 107, 10, -42, -49, 0, -124, -77, -48, 42, 30, 59, -11, -42};
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
    msg.setTimeStamp(0.289331270459);
    msg.setSource(36691U);
    msg.setSourceEntity(179U);
    msg.setDestination(37358U);
    msg.setDestinationEntity(231U);
    msg.content_type.assign("QAELBALLXQCIFWTHNIMEYJHWHABRRHZUMRWLQJKEPBYILKSXPVRPXKNNNMOKRCHZXXTMNXTERZQPWTUTUMENEBGZJNGTOZGSXQYSFSSAGOOWJFFERPODHITGAXAKOCUMGYEUQWCUTCDMBKKKMASIGHBXYXHVWNDAVPYTEDQLHBSILVTLBUDPBCUZAGMKDJIFOBKSOJJWRFQIHFZFEPSCLJYPCZJSJOWVCVVVWDRAFNMYZLIGVPO");
    const char tmp_msg_0[] = {91, 70, 34, 109, 77, -92, -109, 26, -2, -60, 39, 69, 99, 60, 104, -107, 45, 1, 7, -2, -121, -125, -65, 56, 44, 94, -100, 10, -43, -98, -46, -6, 108, 86, -79, 58, -13, -14, -112, 10, -111, 83, -111, -112, 76, -51, 97, 62, 79, 126, 123, -112, 45, 56, 78, -12, 96, 93, 33, -86, 4, 13, -6, 34, -37};
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
    msg.setTimeStamp(0.828164569421);
    msg.setSource(56390U);
    msg.setSourceEntity(105U);
    msg.setDestination(4758U);
    msg.setDestinationEntity(195U);
    msg.content_type.assign("YDDRKNMOPGPGATIFOJGXZOIRDUQBSTXVSLV");
    const char tmp_msg_0[] = {-120, 16, -106, 119, 110, -24, 20, -105, -95, 56, -45, -94, -40, 116, -82, -93, -116, 116, -35, -85};
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
    msg.setTimeStamp(0.997704702703);
    msg.setSource(26713U);
    msg.setSourceEntity(57U);
    msg.setDestination(34770U);
    msg.setDestinationEntity(83U);
    msg.content_type.assign("IFQYOSONKNSECULVJIWFQLSSUMXENXADGFYESOKSSPBNCYLXGUXEJTDIQSAIBFJBUVUBWMETZBGAYEEOWRTWJPXLQBPPOTCRVDXUWJDCAKKKPZLVFOKBCDNFTVTHQRQADTPLGWANZOXKUMMGEHUYRQVTHCRSAYZAQMRIBWIPZTT");
    const char tmp_msg_0[] = {-44, 59, -116, 29, 41, 76, -48, -29, 42, 86, -22, 42, 53, 108, -24, -34, 43, -30, 54, 54, -32, 124, -107, 122, -76, -9, -9, 67, -21, -113, -57, 56, -30, -34, 17, -15, -58, 2, -63, 48, 39, -56, 67, -95, -111, -71, -35, 48, 87, 81, -69, -40, -115, -1, 37, -61, -25, -46, 52, 117, 25, 65, -36, -80, 50, -100, 23, -94, -49, 3, -126, -45, 39, 109, 30, -60, 31, 51, 4, -90, -71, 48, 93, -42, 69, -24, -89, -74, -10, 12, -89, 31, 81, 84, -128, -126, -11, 103, -48, -63, 104, -22, 24, 104, 91, 89, 14, 76, -122, 46, 76, 14, 4, -62, 104, -122, 114, -13, 24, 98, -108, 118, 0, -122, -116, 69, 118, -56, 93, -45, -80, 36, -91, -68, 21, -30, 62, -5, 18, 80, 36, 97, 31, 120, -60, 49, 32, 38, -112, 65, 88, 119, 82, -111, -7, -71, -5, 88, 55, 23, 35, 110, 55, -10, 31, -18, 73, -29, 28, -51, 4, -93, 32, 12, -60, 5, -117, 28, 35, 80, -126, -119, 113, 54, -76, 15, 87, -61, -27};
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
    msg.setTimeStamp(0.702076437529);
    msg.setSource(14371U);
    msg.setSourceEntity(103U);
    msg.setDestination(35925U);
    msg.setDestinationEntity(128U);

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
    msg.setTimeStamp(0.868791960407);
    msg.setSource(29279U);
    msg.setSourceEntity(37U);
    msg.setDestination(157U);
    msg.setDestinationEntity(240U);

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
    msg.setTimeStamp(0.608340045241);
    msg.setSource(60936U);
    msg.setSourceEntity(188U);
    msg.setDestination(59584U);
    msg.setDestinationEntity(175U);

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
    msg.setTimeStamp(0.935032910142);
    msg.setSource(5677U);
    msg.setSourceEntity(217U);
    msg.setDestination(18734U);
    msg.setDestinationEntity(27U);
    msg.target = 58343U;
    msg.bearing = 0.445120940508;
    msg.elevation = 0.836272542305;

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
    msg.setTimeStamp(0.396665592389);
    msg.setSource(51926U);
    msg.setSourceEntity(172U);
    msg.setDestination(55684U);
    msg.setDestinationEntity(107U);
    msg.target = 32078U;
    msg.bearing = 0.913488349641;
    msg.elevation = 0.683464396078;

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
    msg.setTimeStamp(0.261829694704);
    msg.setSource(58230U);
    msg.setSourceEntity(103U);
    msg.setDestination(10155U);
    msg.setDestinationEntity(107U);
    msg.target = 63623U;
    msg.bearing = 0.470757312422;
    msg.elevation = 0.535140940749;

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
    msg.setTimeStamp(0.769041975597);
    msg.setSource(47767U);
    msg.setSourceEntity(45U);
    msg.setDestination(58590U);
    msg.setDestinationEntity(117U);
    msg.target = 30867U;
    msg.x = 0.321677366779;
    msg.y = 0.928696311922;
    msg.z = 0.331599476208;

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
    msg.setTimeStamp(0.254698101188);
    msg.setSource(63151U);
    msg.setSourceEntity(47U);
    msg.setDestination(62273U);
    msg.setDestinationEntity(201U);
    msg.target = 54260U;
    msg.x = 0.378150922133;
    msg.y = 0.615342990534;
    msg.z = 0.0772896636814;

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
    msg.setTimeStamp(0.163007722498);
    msg.setSource(63011U);
    msg.setSourceEntity(39U);
    msg.setDestination(855U);
    msg.setDestinationEntity(229U);
    msg.target = 27589U;
    msg.x = 0.498934913508;
    msg.y = 0.498699501613;
    msg.z = 0.240115838883;

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
    msg.setTimeStamp(0.523229903202);
    msg.setSource(37652U);
    msg.setSourceEntity(169U);
    msg.setDestination(18021U);
    msg.setDestinationEntity(39U);
    msg.target = 44941U;
    msg.lat = 0.238417476924;
    msg.lon = 0.212942089935;
    msg.z_units = 34U;
    msg.z = 0.397836912681;

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
    msg.setTimeStamp(0.559742120567);
    msg.setSource(10269U);
    msg.setSourceEntity(208U);
    msg.setDestination(16036U);
    msg.setDestinationEntity(205U);
    msg.target = 40778U;
    msg.lat = 0.471224554482;
    msg.lon = 0.298371328261;
    msg.z_units = 188U;
    msg.z = 0.648451601691;

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
    msg.setTimeStamp(0.771798251676);
    msg.setSource(50234U);
    msg.setSourceEntity(21U);
    msg.setDestination(28811U);
    msg.setDestinationEntity(22U);
    msg.target = 19371U;
    msg.lat = 0.283382691103;
    msg.lon = 0.0450296427009;
    msg.z_units = 86U;
    msg.z = 0.404928002556;

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
    msg.setTimeStamp(0.0192080043942);
    msg.setSource(55349U);
    msg.setSourceEntity(85U);
    msg.setDestination(915U);
    msg.setDestinationEntity(58U);
    msg.locale.assign("IGLGWNHTSKGYCDZEAYUJUVUNUPBABAILVZBHTKJBULWJMBECRWDTUYYUHXJELSVSHCEIBXEWYJTPZNBSLROIRIXVDRDZFRNXYTOOKUXHGOKPMUNWJHMNCBPYGJVQSAATNQMYIZPXHZCELGZAAQRVFEBKGSQFXXFVFZEFLFODOLERRHPVRKQPTCKKACSPBFIUXSXKIDNDNPDCFTLVLOYYDWQDNTHGWJQPASOMCRVQQGITOWIAMWMZFJM");
    const char tmp_msg_0[] = {108, -98, -36, 74, 117, -121, -10, 38, 71, -27, -89, 111, 118, -17, 46, -54, 1, 76, -48, 106, -94, -40, 84, -100, 96, -90, -24, -94, -92, -7, -39, -51, 38, -29, 39, 33, -127, -9, -128, 20, 86, 74, 115, 73, -5, 94, -85, 107, 24, 43, 102, 42, 122, -80, -81, 84, 90, 94, -54, -42, 65, -76, 76, -67, -51, -36, 13, -28, -40, -111, -18, 118, 119, -74, -57, 39, -76, 43, 97, -120, 54, 25, 71, -37, 60, 112, 47, 36, 13, -11, -111, 112, -121, 124, -85, 105, 52, 97, -106, 28, -105, 93, -109, -44, -62, -71, 53, 82, -65, 109, 112, 76, 106, 79, 17, -64, -36, 122, 124, -25, -68, 99, 69, 70, -12, 49, 57, 126, 82, -35, 102, 18, 37, -62, -76, 20, 62, 9, 100, 12, -125, 84, -109, -24, 85, -60, -23, 92, 48, -1, 14, 112, 21, -67};
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
    msg.setTimeStamp(0.532146945949);
    msg.setSource(7995U);
    msg.setSourceEntity(16U);
    msg.setDestination(39075U);
    msg.setDestinationEntity(183U);
    msg.locale.assign("JEDVIWUQVEFWOUSINHTUKCPVSTNHZAXRPEYWJCCDIYVQELZYAJDMLPXBRBGTBLHVRTQDOCZWJFGISPOCKHWNIKEEKTOOCMQPHCKLXIYZSOCT");
    const char tmp_msg_0[] = {-63, -12, 76, 101, 98, 28, -124, -113, -60, -13, 63, 50, 123, 21, -100, 10, 40, -31, 116, 50, 63, -3, -100, -113, 17, -68, 18, -104, -54, -31, -21, -53, -65, 23, -50, 31, 82, -84, -15, 66, 60, 47, -65, -79, -87, -15, 40, 48, 2, 51, -74, -85, 25, 120, 16, 118, -58, -73, 16, 55, -110, 5, -39, 1, 117, 51, 70, -74, -61, -53, 79, -72, -18, 86, -40, 81, -51, 92, -85, -72, 84, 87, -33, -69, -63, 18, 2, 14, 14, -102, 56, -87, 29, -51, -48, 122, 126, -73, 57, -47, 59, 33, -86, -18, -55, -72, 19, 120, -63, -54, -12, -76, 66, -101, 2, -7, -128, -42, -12, -43, -22, -53, 106, 5, 13, -11, 54, 97, 90, 25, 83, 53, 59, -82, -83, -58, 3, -100, -17, 91, -9, 64, 93, 33, 72, -100, -93, -86, 126, -15, -94, 121, 72, -73};
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
    msg.setTimeStamp(0.382166612803);
    msg.setSource(38727U);
    msg.setSourceEntity(219U);
    msg.setDestination(46598U);
    msg.setDestinationEntity(194U);
    msg.locale.assign("FXMZRATSZTHTBPGTUGPBYDDFHZLUADWBRETYOEKQZRJWFOWVWVUNXULKCFNRPLGRQSCMGJXGTZJULVBLGBIMYHNUSKACHRBSOIHXTYYCZOMJHCZVBPXVCKEYTWKSNZIPYFUDMHNJOJABRZCUTCRMLVSYQSPOAAJUAAILTNYDWQMRQWPEXFQKGLIEDVBDOBACEQMCNFLIOSIIQQXNJGPXENUVGFZIPEKEHKHSYVMJDSVGFDRPDLKEWXM");
    const char tmp_msg_0[] = {46, -115, -56, -101, 64, -98, 36, 105, -54, 34, -16, -92, 58, -91, 13, 24, 57, 80, -33, 30, 33, 92, 70, -90, 24, 6, 68, 25, 45, 10, 63, -104, 70, -113, -18, -89, 99, 65, 96, 88, 95, 79, 102, 45, 79, 60, 112, 26, 101, 68, -20, -107, -110, 86, 37, -98, -80, -66, -60, -17, -96, -10, -20, 120, -48, -60, 96, 32, 113, 103, 110, -101, -104, -69, -26, -103, -21, 71, 37, -32, -24, -31, -3, 41, -85, 76, -80, 6, -106, -35, 122, 114, -86, -94, 122, 89, 56, 9, 92, 90, -69, -96, -44, -30, 122, -10, -46, 17, 20, 125, -55, -56, -98, 74, -124, -42, 111, -59};
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
    msg.setTimeStamp(0.670589099087);
    msg.setSource(63342U);
    msg.setSourceEntity(197U);
    msg.setDestination(8201U);
    msg.setDestinationEntity(248U);

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
    msg.setTimeStamp(0.21881638986);
    msg.setSource(5966U);
    msg.setSourceEntity(148U);
    msg.setDestination(53276U);
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
    msg.setTimeStamp(0.335038890045);
    msg.setSource(38910U);
    msg.setSourceEntity(241U);
    msg.setDestination(43212U);
    msg.setDestinationEntity(116U);

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
    msg.setTimeStamp(0.329295783941);
    msg.setSource(29478U);
    msg.setSourceEntity(124U);
    msg.setDestination(12801U);
    msg.setDestinationEntity(206U);
    msg.camid = 125U;
    msg.x = 55873U;
    msg.y = 26627U;

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
    msg.setTimeStamp(0.543446868472);
    msg.setSource(7976U);
    msg.setSourceEntity(26U);
    msg.setDestination(14456U);
    msg.setDestinationEntity(151U);
    msg.camid = 251U;
    msg.x = 51317U;
    msg.y = 15957U;

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
    msg.setTimeStamp(0.374754291616);
    msg.setSource(7262U);
    msg.setSourceEntity(27U);
    msg.setDestination(31287U);
    msg.setDestinationEntity(219U);
    msg.camid = 231U;
    msg.x = 34957U;
    msg.y = 3477U;

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
    msg.setTimeStamp(0.0813937458664);
    msg.setSource(44118U);
    msg.setSourceEntity(244U);
    msg.setDestination(1395U);
    msg.setDestinationEntity(66U);
    msg.camid = 38U;
    msg.x = 23690U;
    msg.y = 21991U;

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
    msg.setTimeStamp(0.96230993886);
    msg.setSource(55437U);
    msg.setSourceEntity(80U);
    msg.setDestination(7098U);
    msg.setDestinationEntity(74U);
    msg.camid = 242U;
    msg.x = 28686U;
    msg.y = 59423U;

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
    msg.setTimeStamp(0.136699290497);
    msg.setSource(226U);
    msg.setSourceEntity(219U);
    msg.setDestination(58270U);
    msg.setDestinationEntity(83U);
    msg.camid = 236U;
    msg.x = 65371U;
    msg.y = 42186U;

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
    msg.setTimeStamp(0.852556997244);
    msg.setSource(42229U);
    msg.setSourceEntity(157U);
    msg.setDestination(25446U);
    msg.setDestinationEntity(11U);
    msg.tracking = 98U;
    msg.lat = 0.51864712665;
    msg.lon = 0.423911044788;
    msg.x = 0.851212334661;
    msg.y = 0.930541684696;
    msg.z = 0.27859829716;

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
    msg.setTimeStamp(0.0184773231661);
    msg.setSource(45857U);
    msg.setSourceEntity(146U);
    msg.setDestination(20211U);
    msg.setDestinationEntity(131U);
    msg.tracking = 105U;
    msg.lat = 0.679997231231;
    msg.lon = 0.966515945699;
    msg.x = 0.464876433074;
    msg.y = 0.608802380969;
    msg.z = 0.61956897945;

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
    msg.setTimeStamp(0.257911204211);
    msg.setSource(7465U);
    msg.setSourceEntity(12U);
    msg.setDestination(2877U);
    msg.setDestinationEntity(192U);
    msg.tracking = 133U;
    msg.lat = 0.756838889316;
    msg.lon = 0.212934583743;
    msg.x = 0.557723297722;
    msg.y = 0.472698887799;
    msg.z = 0.291906428824;

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
    msg.setTimeStamp(0.487836911709);
    msg.setSource(40124U);
    msg.setSourceEntity(29U);
    msg.setDestination(21839U);
    msg.setDestinationEntity(116U);
    msg.target.assign("VBYCYKFMVGUTOTIZNGNFNTKQIKLYHEDTQEJPUGLFLGUCJELJOSZKLVYSHBRMHMUYLFXLYUGHVWBJWCYNWGVMSSARUOYOIMCROBJCORPMHFPSIHAEMSDPEGLPCTCBKAPXQSQHPRZOABNLHPHTZYROFIKXYVWVB");
    msg.lbearing = 0.462432941922;
    msg.lelevation = 0.745063950519;
    msg.bearing = 0.209636582885;
    msg.elevation = 0.695577128273;
    msg.phi = 0.819630299108;
    msg.theta = 0.379241337912;
    msg.psi = 0.968139180127;
    msg.accuracy = 0.376460651128;

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
    msg.setTimeStamp(0.0065860477059);
    msg.setSource(54529U);
    msg.setSourceEntity(36U);
    msg.setDestination(51859U);
    msg.setDestinationEntity(25U);
    msg.target.assign("YZGWLPSWOXWLWFKRBJYFJQOKNXRLVGKYRJZDXHTKHFWGVZIEQDVMXCSEBJBESOIJXNRILOBGJPMHZHHPANKLLNNYFEFNXDAMYHAXUMQPIJQCWCJRUUUDYCBPJDHFAGTBORSYIKTTAUDSEUHVMAXEZEOBAOBXOQZIALVIVEZLWOPFPMDMCDNRMYCHUVJAZFSRFTQLCGSCLFUMYESGOKWQRUBIWZESKUGB");
    msg.lbearing = 0.529706764112;
    msg.lelevation = 0.192841335688;
    msg.bearing = 0.773256948295;
    msg.elevation = 0.30235042061;
    msg.phi = 0.19368724627;
    msg.theta = 0.503739845796;
    msg.psi = 0.102888184462;
    msg.accuracy = 0.615412227119;

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
    msg.setTimeStamp(0.4997932596);
    msg.setSource(50144U);
    msg.setSourceEntity(161U);
    msg.setDestination(1561U);
    msg.setDestinationEntity(104U);
    msg.target.assign("OCMMPOBIWJMCFVMVXOGQVSAYFWHCIRKOHDMLYEOSHUBGTPDOUJJRPVNFKSUYQKYDYRJGKJBLLKUHNTIXFZXGWQAUQZEEYZXDPZPUQNCZUFDASNZLDKDMHOIWMTRYYSZTQBJTSHABVKGWTVVHLP");
    msg.lbearing = 0.97930684424;
    msg.lelevation = 0.666731925445;
    msg.bearing = 0.958391633849;
    msg.elevation = 0.0338764544061;
    msg.phi = 0.47056487593;
    msg.theta = 0.416278804038;
    msg.psi = 0.275883990157;
    msg.accuracy = 0.502282120454;

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
    msg.setTimeStamp(0.100249319279);
    msg.setSource(35602U);
    msg.setSourceEntity(61U);
    msg.setDestination(9517U);
    msg.setDestinationEntity(246U);
    msg.target.assign("NUDETUMLAYIZRINEBEABMVWSWKRLQJBFQTKLJXTFXDLNBNTGZZJQRSBXOZUBDXZDWVSVZIVXQC");
    msg.x = 0.173429443948;
    msg.y = 0.2373060557;
    msg.z = 0.422780309344;
    msg.n = 0.212237933706;
    msg.e = 0.0185848874142;
    msg.d = 0.886541941201;
    msg.phi = 0.417661219888;
    msg.theta = 0.423302421501;
    msg.psi = 0.956947576183;
    msg.accuracy = 0.0350560639382;

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
    msg.setTimeStamp(0.0851111945897);
    msg.setSource(40546U);
    msg.setSourceEntity(22U);
    msg.setDestination(45922U);
    msg.setDestinationEntity(1U);
    msg.target.assign("ZSHOLGYVUQMJQJZPDBKJNLDIACRNEFRSITXACLYSIQGIYPRRVDGGGKDHHLUZDNFQHMIKKKSGPGEMOSIEOPJSXWRXWUEDWIMTNQOMQAYNBWKTDRNVFHUBJQCOJTUZSEPTJQLVSALBHEGOSOARBVFMWYVZMAZRXLZPMTAUTWBTOMKITNUPNKFGPNYICYUMHCZJWUVYCWYHVRYBEBQAXLLJFDQFDBIXOSCJKCOTKEFHXBXEFDXZVXPVFHAAP");
    msg.x = 0.514835946111;
    msg.y = 0.898198125009;
    msg.z = 0.540646703375;
    msg.n = 0.399369733358;
    msg.e = 0.828743790273;
    msg.d = 0.5076816229;
    msg.phi = 0.690846789286;
    msg.theta = 0.336005849689;
    msg.psi = 0.017672658729;
    msg.accuracy = 0.285032060709;

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
    msg.setTimeStamp(0.618454895515);
    msg.setSource(25828U);
    msg.setSourceEntity(14U);
    msg.setDestination(14356U);
    msg.setDestinationEntity(242U);
    msg.target.assign("LGKTYXUHFIRKIEENMRHVPFJKFPRUTVZPRTDECCKFVXVMELPYKNOXYBSBJWGSCRUGXSRNJSYODXURXGBPBRRKYPCIBIMTYJBAWWQMYLLBQAYOTKJIZPPGTACN");
    msg.x = 0.345210420065;
    msg.y = 0.737805550959;
    msg.z = 0.263277716374;
    msg.n = 0.48464929125;
    msg.e = 0.703468492992;
    msg.d = 0.693591059628;
    msg.phi = 0.61211194555;
    msg.theta = 0.337672596427;
    msg.psi = 0.916904227436;
    msg.accuracy = 0.300592148991;

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
    msg.setTimeStamp(0.735723185189);
    msg.setSource(60202U);
    msg.setSourceEntity(188U);
    msg.setDestination(59799U);
    msg.setDestinationEntity(131U);
    msg.target.assign("OBBSUCPHTQRWSLNCTEEOHBDJVEPFJVKNZUVISKFRTAMSQMPXLQJSXCQOXSYAWZKERLYCVANHFUDZIFKJ");
    msg.lat = 0.81718952466;
    msg.lon = 0.286767310408;
    msg.z_units = 179U;
    msg.z = 0.411129677286;
    msg.accuracy = 0.197002653825;

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
    msg.setTimeStamp(0.667238796934);
    msg.setSource(35106U);
    msg.setSourceEntity(144U);
    msg.setDestination(17720U);
    msg.setDestinationEntity(86U);
    msg.target.assign("CXDQGOTHJGMZXJODYKOMODRYGTGWIIODWKNZZNALUJECPNVUHVQAYTFXICHBSMBFWHFYXCQBIASZDZEMRYNGLKERFLEILPWIUIEPUBPHUAMPNBBNCTMOCVYPLLVFDQEAJTQTYUXKHXBXZSVFXUPCJDWVZMMAZGOLSYKEHFQWQMRFCTQSJIWH");
    msg.lat = 0.305219863246;
    msg.lon = 0.503730576358;
    msg.z_units = 233U;
    msg.z = 0.839233441842;
    msg.accuracy = 0.197479411479;

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
    msg.setTimeStamp(0.911691365673);
    msg.setSource(14014U);
    msg.setSourceEntity(46U);
    msg.setDestination(17201U);
    msg.setDestinationEntity(56U);
    msg.target.assign("GTIJDARYFXBMHCPGHQSNNFSQNOEAZFLKIYYJPAMUJXPJITGAFRTJIBOMEQWALZXECSLRNVDCTYJUANHWLFDUXJKWFHMKRZIBSOVDZCUDRKODDYPFFYTGMGPRXOWESYTQBKGMMMCMCEVHUIXOHQSWOFEHLUAZQZTGZLLBDIXSSNVZDORWCHMEKNQEWNNVJIKQWBKXALRNKILRJZUVJETYEAOGBZVSPVSCBTPQIYPBDCHUWVPOWTBFQAUUGC");
    msg.lat = 0.611431594983;
    msg.lon = 0.823840712835;
    msg.z_units = 69U;
    msg.z = 0.766241450511;
    msg.accuracy = 0.742269644833;

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
    msg.setTimeStamp(0.31384831623);
    msg.setSource(61761U);
    msg.setSourceEntity(140U);
    msg.setDestination(12832U);
    msg.setDestinationEntity(98U);
    msg.name.assign("GTRZEDVIYIJQECADSZSNVPWUZYLCMAATTWOBMYQVEHSUGOKXFBZXIBOABMVOCEYFZNUJCCKKJVDAEOBBMAOEDMYWRSZJNIGPDXWHWSUIGLTYCXPTSN");
    msg.lat = 0.411888933871;
    msg.lon = 0.763804875637;
    msg.z = 0.245911476576;
    msg.z_units = 73U;

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
    msg.setTimeStamp(0.393191464556);
    msg.setSource(8723U);
    msg.setSourceEntity(118U);
    msg.setDestination(27811U);
    msg.setDestinationEntity(144U);
    msg.name.assign("VBUNRWBIDXEAGWXEJZAQSHXIPDGUVMOKKUMWCXYONHQYYTEPLOTIQDGFOWHMVFPDVJRKQOGDJCVRSEAWFMRANHUZGKYBQTJWFHAYVTLIXCCIEPIVGKZUZZOUOC");
    msg.lat = 0.694802458056;
    msg.lon = 0.272355072626;
    msg.z = 0.988242211974;
    msg.z_units = 95U;

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
    msg.setTimeStamp(0.195276326654);
    msg.setSource(53882U);
    msg.setSourceEntity(153U);
    msg.setDestination(56533U);
    msg.setDestinationEntity(125U);
    msg.name.assign("SNXXDPHZVZYTJKUAFQNSCOENDLBPJIALICGSBYBCEBBUSSMHCUMGVEYULJRTCIVPWOMWIZHJQYVAQXRYGBSXHFTRHASITHEZLVXUWIEVTRFVAERUXQQULQGTMEORXSFHLIEDFXXTWMAXOUMIJBTGNQDPWUNZLKZQLTJDJBRCHFDZJFOMFAMKWCJNL");
    msg.lat = 0.265826833367;
    msg.lon = 0.456367304835;
    msg.z = 0.202570756758;
    msg.z_units = 148U;

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
    msg.setTimeStamp(0.964611147337);
    msg.setSource(36251U);
    msg.setSourceEntity(153U);
    msg.setDestination(41221U);
    msg.setDestinationEntity(120U);
    msg.op = 26U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("DWDZXKZRBTBVCGWFBLQSEPGQOKRERQILOEAQNEHXTMIGDHWGUFWJDVHLZPYLYQBYXPFTCAXEMNJDQVYNWSGFUOCLTDDZWVAWVBJMBOTUFMSVQFCCPNHEAWKGXRD");
    tmp_msg_0.lat = 0.872036967393;
    tmp_msg_0.lon = 0.113300609383;
    tmp_msg_0.z = 0.295910121138;
    tmp_msg_0.z_units = 58U;
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
    msg.setTimeStamp(0.712681085151);
    msg.setSource(12496U);
    msg.setSourceEntity(128U);
    msg.setDestination(16818U);
    msg.setDestinationEntity(67U);
    msg.op = 167U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("VFPLXIKJHCEFUNISVWEDORMJWXXQYRMBNDQGTGWDVSXYSDKEOIZYMZKUNFYWWY");
    tmp_msg_0.lat = 0.858146496644;
    tmp_msg_0.lon = 0.458689077301;
    tmp_msg_0.z = 0.20925999235;
    tmp_msg_0.z_units = 78U;
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
    msg.setTimeStamp(0.388193660511);
    msg.setSource(27005U);
    msg.setSourceEntity(42U);
    msg.setDestination(61258U);
    msg.setDestinationEntity(195U);
    msg.op = 245U;

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
    msg.setTimeStamp(0.782980687046);
    msg.setSource(8008U);
    msg.setSourceEntity(250U);
    msg.setDestination(28497U);
    msg.setDestinationEntity(58U);
    msg.value = 0.292378009466;
    msg.type = 202U;

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
    msg.setTimeStamp(0.293211099003);
    msg.setSource(24806U);
    msg.setSourceEntity(244U);
    msg.setDestination(54956U);
    msg.setDestinationEntity(133U);
    msg.value = 0.92634905781;
    msg.type = 184U;

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
    msg.setTimeStamp(0.493908267097);
    msg.setSource(46311U);
    msg.setSourceEntity(86U);
    msg.setDestination(39360U);
    msg.setDestinationEntity(23U);
    msg.value = 0.215860732799;
    msg.type = 31U;

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
    msg.setTimeStamp(0.900389441096);
    msg.setSource(59104U);
    msg.setSourceEntity(114U);
    msg.setDestination(52757U);
    msg.setDestinationEntity(237U);
    msg.value = 0.464360695849;

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
    msg.setTimeStamp(0.312892235586);
    msg.setSource(25972U);
    msg.setSourceEntity(5U);
    msg.setDestination(22116U);
    msg.setDestinationEntity(32U);
    msg.value = 0.247675851412;

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
    msg.setTimeStamp(0.930623620877);
    msg.setSource(54251U);
    msg.setSourceEntity(146U);
    msg.setDestination(41352U);
    msg.setDestinationEntity(78U);
    msg.value = 0.567351481348;

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
    msg.setTimeStamp(0.845485868283);
    msg.setSource(20976U);
    msg.setSourceEntity(194U);
    msg.setDestination(24701U);
    msg.setDestinationEntity(207U);
    msg.timestamp_last_service = 0.742917567129;
    msg.time_next_service = 0.220235210696;
    msg.time_motor_next_service = 0.854123470693;
    msg.time_idle_ground = 0.918138740466;
    msg.time_idle_air = 0.423373549257;
    msg.time_idle_water = 0.824444642458;
    msg.time_idle_underwater = 0.299563518648;
    msg.time_idle_unknown = 0.85796922065;
    msg.time_motor_ground = 0.854376273731;
    msg.time_motor_air = 0.646213446598;
    msg.time_motor_water = 0.1237672118;
    msg.time_motor_underwater = 0.73642634654;
    msg.time_motor_unknown = 0.673156987131;
    msg.rpm_min = 20376;
    msg.rpm_max = -21514;
    msg.depth_max = 0.0332737260135;

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
    msg.setTimeStamp(0.987474457258);
    msg.setSource(26095U);
    msg.setSourceEntity(56U);
    msg.setDestination(5107U);
    msg.setDestinationEntity(154U);
    msg.timestamp_last_service = 0.733650778059;
    msg.time_next_service = 0.948666322849;
    msg.time_motor_next_service = 0.92071648049;
    msg.time_idle_ground = 0.166616888622;
    msg.time_idle_air = 0.269376913789;
    msg.time_idle_water = 0.423835054928;
    msg.time_idle_underwater = 0.708194148652;
    msg.time_idle_unknown = 0.451819454448;
    msg.time_motor_ground = 0.0487281401189;
    msg.time_motor_air = 0.10702792607;
    msg.time_motor_water = 0.743152953185;
    msg.time_motor_underwater = 0.542446208531;
    msg.time_motor_unknown = 0.794804730858;
    msg.rpm_min = 26135;
    msg.rpm_max = 974;
    msg.depth_max = 0.71969377403;

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
    msg.setTimeStamp(0.78943714927);
    msg.setSource(54566U);
    msg.setSourceEntity(86U);
    msg.setDestination(3887U);
    msg.setDestinationEntity(241U);
    msg.timestamp_last_service = 0.16616962991;
    msg.time_next_service = 0.482252546426;
    msg.time_motor_next_service = 0.519594783691;
    msg.time_idle_ground = 0.284852515865;
    msg.time_idle_air = 0.719024089638;
    msg.time_idle_water = 0.642354027992;
    msg.time_idle_underwater = 0.127596431222;
    msg.time_idle_unknown = 0.408393192559;
    msg.time_motor_ground = 0.451016931274;
    msg.time_motor_air = 0.229733901071;
    msg.time_motor_water = 0.789314995213;
    msg.time_motor_underwater = 0.592682408003;
    msg.time_motor_unknown = 0.243820363024;
    msg.rpm_min = 16199;
    msg.rpm_max = -5686;
    msg.depth_max = 0.680990841123;

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
    msg.setTimeStamp(0.0930679062298);
    msg.setSource(10212U);
    msg.setSourceEntity(38U);
    msg.setDestination(23558U);
    msg.setDestinationEntity(12U);
    msg.severity = 167U;
    msg.text.assign("KHRJZWLPRSYDCINTNNFUFFZJRJPXWJKXQBAZHXYHTLCTIBYBDZJGLQCMWGUOJKNXOTBMALMVBKQTBHSYJSHNOMMXACLQOSEIMIDINWPWEOMGCPUMFPUIVGBWHQXNETPGDAVTUUNPQZMCRRPTKTQYVREATEHNGAZQFCCEKLSLYZAVVGDRJSEHYKQFFAGWKVHDRHYJRAXWOEGDBOQMISW");

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
    msg.setTimeStamp(0.919382044638);
    msg.setSource(1473U);
    msg.setSourceEntity(102U);
    msg.setDestination(14936U);
    msg.setDestinationEntity(154U);
    msg.severity = 147U;
    msg.text.assign("GQQMNYXDUFROEWBUGAMVUFLKPQVZEONDFNBZCMUODFJEHHANSGBGEUCKTLDFXSSOEKTHQDMRBQKSDMIAFCTXLHWLVSZTYAKBZEMNVELBZWSBPOVNYKYGTWFYJEPUNYTPCMOXLOSIUPSANOPREADYGXXPJPLAZTLQXLEZCWOIFVIDCRJRHOIVQYXWZJDXKWWHYRUVMNSPQQDVARQMIJFAVJGTGIBWHCFUNPYRTBKXKZU");

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
    msg.setTimeStamp(0.448452115931);
    msg.setSource(21477U);
    msg.setSourceEntity(203U);
    msg.setDestination(24359U);
    msg.setDestinationEntity(203U);
    msg.severity = 246U;
    msg.text.assign("LOKRZOWGBSCHKTRIKECMYJUENTZDTWFZPIFOFUDKGTYZJUCXIZSMNEGCBSBJTBNLQZEXPHFERDWXHRYMIICVPZDAXIOVNDMFXWRQJGDTQFWPFRBHALPYYDGQOBCMURKEJKCDTWMSAPOXJGOVEYQALABJBMWJMSHHUVCLXYFAROQDXCLHAVVQBLAPFXWJNWKUNHVOIOEKKFGUUIBZGRCTUSSXJMULSEAMNNGWPTYSQNEQKVYHNLZI");

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
    msg.setTimeStamp(0.764930134052);
    msg.setSource(7818U);
    msg.setSourceEntity(37U);
    msg.setDestination(38926U);
    msg.setDestinationEntity(245U);
    msg.channel = 97;
    msg.value = -1400689425;
    msg.gain = 222U;

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
    msg.setTimeStamp(0.390959835316);
    msg.setSource(8935U);
    msg.setSourceEntity(228U);
    msg.setDestination(19096U);
    msg.setDestinationEntity(69U);
    msg.channel = 66;
    msg.value = 1257609792;
    msg.gain = 75U;

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
    msg.setTimeStamp(0.208745762513);
    msg.setSource(38086U);
    msg.setSourceEntity(107U);
    msg.setDestination(46071U);
    msg.setDestinationEntity(216U);
    msg.channel = -67;
    msg.value = -751508209;
    msg.gain = 221U;

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
    msg.setTimeStamp(0.108802374927);
    msg.setSource(12978U);
    msg.setSourceEntity(55U);
    msg.setDestination(46873U);
    msg.setDestinationEntity(164U);
    msg.ch01 = 0.793560368541;
    msg.ch02 = 0.392887128954;
    msg.ch03 = 0.926622485278;
    msg.ch04 = 0.746159347005;
    msg.ch05 = 0.742925129492;
    msg.ch06 = 0.429830044359;
    msg.ch07 = 0.556954031143;
    msg.ch08 = 0.704771203028;
    msg.ch09 = 0.752796775748;
    msg.ch10 = 0.716326463382;
    msg.ch11 = 0.730685158346;
    msg.ch12 = 0.302949275706;
    msg.ch13 = 0.00233545912211;
    msg.ch14 = 0.538864156725;
    msg.ch15 = 0.371962115236;
    msg.ch16 = 0.74318113444;

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
    msg.setTimeStamp(0.332286248532);
    msg.setSource(33823U);
    msg.setSourceEntity(238U);
    msg.setDestination(36078U);
    msg.setDestinationEntity(95U);
    msg.ch01 = 0.26799273648;
    msg.ch02 = 0.00392645638688;
    msg.ch03 = 0.123955552456;
    msg.ch04 = 0.883691696262;
    msg.ch05 = 0.0247589992195;
    msg.ch06 = 0.356385535452;
    msg.ch07 = 0.99968012;
    msg.ch08 = 0.605576018299;
    msg.ch09 = 0.042419931582;
    msg.ch10 = 0.850033930379;
    msg.ch11 = 0.0681416811684;
    msg.ch12 = 0.652011543535;
    msg.ch13 = 0.172432352994;
    msg.ch14 = 0.301991660477;
    msg.ch15 = 0.304575778391;
    msg.ch16 = 0.894910919306;

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
    msg.setTimeStamp(0.301368832698);
    msg.setSource(41538U);
    msg.setSourceEntity(231U);
    msg.setDestination(61608U);
    msg.setDestinationEntity(48U);
    msg.ch01 = 0.340064067542;
    msg.ch02 = 0.516263145833;
    msg.ch03 = 0.538588015542;
    msg.ch04 = 0.985848331758;
    msg.ch05 = 0.179886765186;
    msg.ch06 = 0.948572405818;
    msg.ch07 = 0.153393433417;
    msg.ch08 = 0.435989665668;
    msg.ch09 = 0.882465236467;
    msg.ch10 = 0.710750659407;
    msg.ch11 = 0.0813769875472;
    msg.ch12 = 0.743465630297;
    msg.ch13 = 0.992567432312;
    msg.ch14 = 0.0390253165602;
    msg.ch15 = 0.444702029493;
    msg.ch16 = 0.507644228198;

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
    msg.setTimeStamp(0.514747906334);
    msg.setSource(56702U);
    msg.setSourceEntity(22U);
    msg.setDestination(23759U);
    msg.setDestinationEntity(214U);
    msg.time = 0.201458735086;
    msg.ang = 0.485390652975;

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
    msg.setTimeStamp(0.418934349744);
    msg.setSource(27582U);
    msg.setSourceEntity(134U);
    msg.setDestination(46249U);
    msg.setDestinationEntity(215U);
    msg.time = 0.921829592834;
    msg.ang = 0.387422508158;

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
    msg.setTimeStamp(0.535591923014);
    msg.setSource(45406U);
    msg.setSourceEntity(205U);
    msg.setDestination(14962U);
    msg.setDestinationEntity(240U);
    msg.time = 0.335522325063;
    msg.ang = 0.779403907799;

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
    msg.setTimeStamp(0.599314716545);
    msg.setSource(64356U);
    msg.setSourceEntity(239U);
    msg.setDestination(3811U);
    msg.setDestinationEntity(201U);
    msg.value = 0.82126095063;

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
    msg.setTimeStamp(0.829566733908);
    msg.setSource(61566U);
    msg.setSourceEntity(133U);
    msg.setDestination(20691U);
    msg.setDestinationEntity(200U);
    msg.value = 0.925919433973;

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
    msg.setTimeStamp(0.211013842765);
    msg.setSource(22099U);
    msg.setSourceEntity(62U);
    msg.setDestination(55511U);
    msg.setDestinationEntity(209U);
    msg.value = 0.238148682568;

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
    msg.setTimeStamp(0.259606202393);
    msg.setSource(8397U);
    msg.setSourceEntity(202U);
    msg.setDestination(11672U);
    msg.setDestinationEntity(204U);
    msg.value = 0.305467028533;

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
    msg.setTimeStamp(0.348904879168);
    msg.setSource(26529U);
    msg.setSourceEntity(24U);
    msg.setDestination(6009U);
    msg.setDestinationEntity(77U);
    msg.value = 0.779241222745;

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
    msg.setTimeStamp(0.804870279739);
    msg.setSource(65261U);
    msg.setSourceEntity(52U);
    msg.setDestination(33102U);
    msg.setDestinationEntity(171U);
    msg.value = 0.0134521902465;

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
    msg.setTimeStamp(0.841878062543);
    msg.setSource(12998U);
    msg.setSourceEntity(121U);
    msg.setDestination(3690U);
    msg.setDestinationEntity(205U);
    msg.value = 0.405281674219;

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
    msg.setTimeStamp(0.199622066162);
    msg.setSource(16846U);
    msg.setSourceEntity(253U);
    msg.setDestination(64648U);
    msg.setDestinationEntity(149U);
    msg.value = 0.958305818092;

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
    msg.setTimeStamp(0.560409491554);
    msg.setSource(20422U);
    msg.setSourceEntity(243U);
    msg.setDestination(17930U);
    msg.setDestinationEntity(214U);
    msg.value = 0.296154932265;

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
    msg.setTimeStamp(0.597986279047);
    msg.setSource(17274U);
    msg.setSourceEntity(229U);
    msg.setDestination(3143U);
    msg.setDestinationEntity(141U);
    msg.l2 = -110;
    msg.l3 = -107;
    msg.iridium = -77;
    msg.modem = -9;
    msg.pumps = 12;
    msg.vhf = 83;

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
    msg.setTimeStamp(0.465541757928);
    msg.setSource(54032U);
    msg.setSourceEntity(177U);
    msg.setDestination(54561U);
    msg.setDestinationEntity(13U);
    msg.l2 = -18;
    msg.l3 = 98;
    msg.iridium = -55;
    msg.modem = -53;
    msg.pumps = -25;
    msg.vhf = 27;

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
    msg.setTimeStamp(0.119138172223);
    msg.setSource(10221U);
    msg.setSourceEntity(82U);
    msg.setDestination(43980U);
    msg.setDestinationEntity(67U);
    msg.l2 = -125;
    msg.l3 = 86;
    msg.iridium = 118;
    msg.modem = -65;
    msg.pumps = -75;
    msg.vhf = 126;

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
    msg.setTimeStamp(0.0101502352169);
    msg.setSource(25144U);
    msg.setSourceEntity(9U);
    msg.setDestination(11168U);
    msg.setDestinationEntity(139U);
    msg.angle = 0.0337786660862;
    msg.reference.assign("RFZLXRNBJDXTAPIJLEAAZBOJWZDJYWCBW");
    msg.speed = 0.605788166844;

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
    msg.setTimeStamp(0.183482761939);
    msg.setSource(13056U);
    msg.setSourceEntity(199U);
    msg.setDestination(19856U);
    msg.setDestinationEntity(125U);
    msg.angle = 0.565060996689;
    msg.reference.assign("YEZZTJCONKNWBRCWSEHDPYNMBXDTAUIHFKRMFKGDNDEYKNVKMFYFTGQRDBPXHLIHVHXRSRSEGJZNTVCWCZXWOIAKOPTWUFFWGQEJPOAJLALDALUMMKGDACBJCVQQSBAEBNEGLPIIMUMJFZOHVWZWXSNXUPYOHRSLBGGUVHZ");
    msg.speed = 0.142484580951;

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
    msg.setTimeStamp(0.757672964571);
    msg.setSource(41828U);
    msg.setSourceEntity(28U);
    msg.setDestination(49583U);
    msg.setDestinationEntity(247U);
    msg.angle = 0.144993202167;
    msg.reference.assign("HHFRGYDGTKGWYQJJGXSZFLENOHCULQBRPBILXHEFIGHAVEHGNTGCMZIVZAAWKYRQMXIXCKWDUWQZBQYTIVBWODVTBTFNBYOSKBMTJKRZFDOAXJNMADJRHXOFQROVEEKNCEPWKUYTEPZSSXUFXGMPQIOSBZMHWELISAZCCFMFWPRHLYNDVNPULLOIZUJCJBDTXYNUYKVWCPRJRSSUPDVH");
    msg.speed = 0.266100977579;

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
    msg.setTimeStamp(0.926583579087);
    msg.setSource(53457U);
    msg.setSourceEntity(94U);
    msg.setDestination(19002U);
    msg.setDestinationEntity(96U);
    msg.angle = 0.969540719265;
    msg.direction.assign("BQKEWAJMGATGCACVCQUCILJUZBOQQQKFDSYPAOZWGLPCOZZIEXEPRNRZXAMLBNSDNZCDRLRQYJOKIUXQSRBHDAYNMAILGIYYWTYWSBJXYEHDMGOSIUBWZF");
    msg.speed = 0.247180749626;

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
    msg.setTimeStamp(0.641592880452);
    msg.setSource(7128U);
    msg.setSourceEntity(193U);
    msg.setDestination(44839U);
    msg.setDestinationEntity(26U);
    msg.angle = 0.982441264211;
    msg.direction.assign("NDXIPDRDQRXOBIFGYUCGJJMBAWPATEDXKEBRLFMKATFEHJDAVVMZPIAYHZHMWOFMEWUPVDSWALJOITZXWLLLSEPJWGKUUKONRINJMYXUROVZGLCQSNNCHFWUORSXAJFTQBISCXLQNLGRSSTHBEONMJTSUPODMVWBFGPIYAOYYXDQSCRHQJTWEIFVHCIPNXGQKYXKCRMGBBMSRVQVKHVKEZTYEQTUICNTZGBZHDFCKYFAJZ");
    msg.speed = 0.117517890239;

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
    msg.setTimeStamp(0.180285158347);
    msg.setSource(24578U);
    msg.setSourceEntity(238U);
    msg.setDestination(3242U);
    msg.setDestinationEntity(24U);
    msg.angle = 0.479290157394;
    msg.direction.assign("ZZMQXPJVXSXTNZQGGLRZYAVVJGYHKKYHBFZQRUCDUTNOTSPNVJQJZFAZURVPMGJWLTWEJNNEHUQBNVWHBWDEXRBEOISRTGDENPRIMJTCUIARLWIRUWXQDXNDYTKKOSMBFJSLLLQHZRHFMSIFOTYEAXPPVNEC");
    msg.speed = 0.298832182061;

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
    msg.setTimeStamp(0.143318335005);
    msg.setSource(62878U);
    msg.setSourceEntity(147U);
    msg.setDestination(42687U);
    msg.setDestinationEntity(178U);
    msg.x = 0.717943924577;
    msg.y = 0.343329000442;
    msg.z1 = 0.342502354284;
    msg.z2 = 0.739592535087;

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
    msg.setTimeStamp(0.568341256015);
    msg.setSource(62987U);
    msg.setSourceEntity(183U);
    msg.setDestination(11773U);
    msg.setDestinationEntity(101U);
    msg.x = 0.98445152433;
    msg.y = 0.286526457696;
    msg.z1 = 0.207201905569;
    msg.z2 = 0.0015355955397;

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
    msg.setTimeStamp(0.187667808242);
    msg.setSource(10356U);
    msg.setSourceEntity(216U);
    msg.setDestination(43360U);
    msg.setDestinationEntity(216U);
    msg.x = 0.580687067557;
    msg.y = 0.731514243071;
    msg.z1 = 0.941815836399;
    msg.z2 = 0.760047372993;

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
    msg.setTimeStamp(0.103687032802);
    msg.setSource(58469U);
    msg.setSourceEntity(88U);
    msg.setDestination(45618U);
    msg.setDestinationEntity(171U);
    msg.beam1 = 0.595322293799;
    msg.beam2 = 0.237779185041;
    msg.beam3 = 0.604225858829;
    msg.beam4 = 0.566383725548;

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
    msg.setTimeStamp(0.994174230382);
    msg.setSource(44826U);
    msg.setSourceEntity(112U);
    msg.setDestination(64156U);
    msg.setDestinationEntity(54U);
    msg.beam1 = 0.311371981224;
    msg.beam2 = 0.509892782118;
    msg.beam3 = 0.410138694376;
    msg.beam4 = 0.47611809256;

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
    msg.setTimeStamp(0.11123847655);
    msg.setSource(22718U);
    msg.setSourceEntity(49U);
    msg.setDestination(40296U);
    msg.setDestinationEntity(39U);
    msg.beam1 = 0.452231992624;
    msg.beam2 = 0.662807569637;
    msg.beam3 = 0.780845082755;
    msg.beam4 = 0.33418371433;

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
    msg.setTimeStamp(0.291222499933);
    msg.setSource(7350U);
    msg.setSourceEntity(43U);
    msg.setDestination(56744U);
    msg.setDestinationEntity(83U);
    msg.beam1 = 59U;
    msg.beam2 = 83U;
    msg.beam3 = 72U;
    msg.beam4 = 75U;

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
    msg.setTimeStamp(0.358378886485);
    msg.setSource(62041U);
    msg.setSourceEntity(37U);
    msg.setDestination(44951U);
    msg.setDestinationEntity(86U);
    msg.beam1 = 179U;
    msg.beam2 = 107U;
    msg.beam3 = 47U;
    msg.beam4 = 17U;

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
    msg.setTimeStamp(0.490161441663);
    msg.setSource(23851U);
    msg.setSourceEntity(157U);
    msg.setDestination(3378U);
    msg.setDestinationEntity(167U);
    msg.beam1 = 118U;
    msg.beam2 = 216U;
    msg.beam3 = 16U;
    msg.beam4 = 250U;

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
    msg.setTimeStamp(0.807538685296);
    msg.setSource(8286U);
    msg.setSourceEntity(226U);
    msg.setDestination(24780U);
    msg.setDestinationEntity(76U);
    msg.cellposition = 0.386887554723;
    msg.x = 0.766780800625;
    msg.y = 0.436701057855;
    msg.z1 = 0.64249179331;
    msg.z2 = 0.856063562092;
    msg.amp0 = 0.292263414043;
    msg.amp1 = 0.249082205745;
    msg.amp2 = 0.972272419481;
    msg.amp3 = 0.00622200946801;
    msg.cor0 = 55U;
    msg.cor1 = 110U;
    msg.cor2 = 48U;
    msg.cor3 = 199U;

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
    msg.setTimeStamp(0.579790451496);
    msg.setSource(33614U);
    msg.setSourceEntity(19U);
    msg.setDestination(39702U);
    msg.setDestinationEntity(88U);
    msg.cellposition = 0.740959721869;
    msg.x = 0.182603742904;
    msg.y = 0.360870219927;
    msg.z1 = 0.805106787875;
    msg.z2 = 0.317031733953;
    msg.amp0 = 0.189922948643;
    msg.amp1 = 0.900799905506;
    msg.amp2 = 0.365445199371;
    msg.amp3 = 0.0918719166482;
    msg.cor0 = 140U;
    msg.cor1 = 169U;
    msg.cor2 = 72U;
    msg.cor3 = 165U;

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
    msg.setTimeStamp(0.996873906334);
    msg.setSource(850U);
    msg.setSourceEntity(158U);
    msg.setDestination(31781U);
    msg.setDestinationEntity(152U);
    msg.cellposition = 0.635333467928;
    msg.x = 0.946114973489;
    msg.y = 0.521896387312;
    msg.z1 = 0.443450613113;
    msg.z2 = 0.349563689409;
    msg.amp0 = 0.579976651898;
    msg.amp1 = 0.249372139889;
    msg.amp2 = 0.529803405983;
    msg.amp3 = 0.00711856738894;
    msg.cor0 = 236U;
    msg.cor1 = 52U;
    msg.cor2 = 35U;
    msg.cor3 = 119U;

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
    msg.setTimeStamp(0.0948786652552);
    msg.setSource(15084U);
    msg.setSourceEntity(154U);
    msg.setDestination(40180U);
    msg.setDestinationEntity(157U);
    IMC::CurrentProfileCell tmp_msg_0;
    tmp_msg_0.cellposition = 0.166730429545;
    tmp_msg_0.x = 0.287488918091;
    tmp_msg_0.y = 0.662446154799;
    tmp_msg_0.z1 = 0.21726025066;
    tmp_msg_0.z2 = 0.808563592497;
    tmp_msg_0.amp0 = 0.263262032242;
    tmp_msg_0.amp1 = 0.179897852825;
    tmp_msg_0.amp2 = 0.69273222918;
    tmp_msg_0.amp3 = 0.145473851342;
    tmp_msg_0.cor0 = 12U;
    tmp_msg_0.cor1 = 97U;
    tmp_msg_0.cor2 = 143U;
    tmp_msg_0.cor3 = 165U;
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
    msg.setTimeStamp(0.969429365308);
    msg.setSource(44299U);
    msg.setSourceEntity(181U);
    msg.setDestination(8488U);
    msg.setDestinationEntity(191U);
    IMC::CurrentProfileCell tmp_msg_0;
    tmp_msg_0.cellposition = 0.446612172229;
    tmp_msg_0.x = 0.471363335061;
    tmp_msg_0.y = 0.151263612309;
    tmp_msg_0.z1 = 0.808943771937;
    tmp_msg_0.z2 = 0.991229000788;
    tmp_msg_0.amp0 = 0.740889617602;
    tmp_msg_0.amp1 = 0.650104160945;
    tmp_msg_0.amp2 = 0.0311258913128;
    tmp_msg_0.amp3 = 0.786793998874;
    tmp_msg_0.cor0 = 187U;
    tmp_msg_0.cor1 = 193U;
    tmp_msg_0.cor2 = 39U;
    tmp_msg_0.cor3 = 9U;
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
    msg.setTimeStamp(0.751086064936);
    msg.setSource(63005U);
    msg.setSourceEntity(143U);
    msg.setDestination(36815U);
    msg.setDestinationEntity(192U);
    IMC::CurrentProfileCell tmp_msg_0;
    tmp_msg_0.cellposition = 0.461232362152;
    tmp_msg_0.x = 0.249981905182;
    tmp_msg_0.y = 0.476073643979;
    tmp_msg_0.z1 = 0.0817726090247;
    tmp_msg_0.z2 = 0.104219484135;
    tmp_msg_0.amp0 = 0.678870427853;
    tmp_msg_0.amp1 = 0.105748354896;
    tmp_msg_0.amp2 = 0.881688397969;
    tmp_msg_0.amp3 = 0.388229023577;
    tmp_msg_0.cor0 = 7U;
    tmp_msg_0.cor1 = 161U;
    tmp_msg_0.cor2 = 18U;
    tmp_msg_0.cor3 = 0U;
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

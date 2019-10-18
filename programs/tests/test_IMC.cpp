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
// IMC XML MD5: 8276afd2231790a289b4b93413c38162                            *
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
    msg.setTimeStamp(0.736766449231);
    msg.setSource(11374U);
    msg.setSourceEntity(6U);
    msg.setDestination(50104U);
    msg.setDestinationEntity(54U);
    msg.state = 174U;
    msg.flags = 253U;
    msg.description.assign("ZOBIOCHHRKBSDKIWCZPWJTQQTGGLUHUJMOLYVSQFNLKFJGFDCWIXPSAVXQYNURAPNKQP");

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
    msg.setTimeStamp(0.016785776824);
    msg.setSource(19745U);
    msg.setSourceEntity(29U);
    msg.setDestination(26909U);
    msg.setDestinationEntity(45U);
    msg.state = 247U;
    msg.flags = 0U;
    msg.description.assign("DYAEFRAUBQBQUBTKKCYHVEMRTHTWDXDVYQPKJCTZSLHQWIAJGOIPXAVEBPMRLOGZJYOXQFZIUYFEAMVPPHRAEDPLRTURTFBXJUZOCBSIQOYAQSXBDZSKEJDNVKPUTKNNJZSDLWAMWJHIWZKVIEH");

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
    msg.setTimeStamp(0.387829150138);
    msg.setSource(9981U);
    msg.setSourceEntity(141U);
    msg.setDestination(29803U);
    msg.setDestinationEntity(53U);
    msg.state = 242U;
    msg.flags = 210U;
    msg.description.assign("UQBJINSKMKXYYIYNNMJBETWGPZAKIRPOSWCUKAIBJPRVPEZFRBKKCPYSDRNVOJXUBZOLCJFSJMVTJXRNTWOLAMVUPUXRDACPGNKDIJPOTOAMSSDZILMJQV");

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
    msg.setTimeStamp(0.820571475661);
    msg.setSource(52618U);
    msg.setSourceEntity(1U);
    msg.setDestination(56449U);
    msg.setDestinationEntity(26U);

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
    msg.setTimeStamp(0.942695681871);
    msg.setSource(40069U);
    msg.setSourceEntity(38U);
    msg.setDestination(19399U);
    msg.setDestinationEntity(30U);

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
    msg.setTimeStamp(0.905892851334);
    msg.setSource(7416U);
    msg.setSourceEntity(104U);
    msg.setDestination(63607U);
    msg.setDestinationEntity(49U);

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
    msg.setTimeStamp(0.48156515846);
    msg.setSource(54288U);
    msg.setSourceEntity(250U);
    msg.setDestination(47901U);
    msg.setDestinationEntity(98U);
    msg.id = 29U;
    msg.label.assign("JWOPWQZZAASPLPEYHZNFZPYAXURJHTYKHGCBLKKYDMQ");
    msg.component.assign("HISLEOXDHKZPFYWQICSVYVLFHVAAOBFEEPGDMPYZJSFXYJEXUIILJWNRAVQUIBUHFQWZOPVCHOQHCJTDHWZNYKRLKLSLTQYUROODBUMCPTTNQMVSRFECEEKRDUNBZ");
    msg.act_time = 557U;
    msg.deact_time = 27282U;

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
    msg.setTimeStamp(0.0413239025522);
    msg.setSource(10360U);
    msg.setSourceEntity(98U);
    msg.setDestination(11416U);
    msg.setDestinationEntity(120U);
    msg.id = 117U;
    msg.label.assign("DRFLERYULKUNKCCICABZMVCTPGRRELMHELYYUZMQFNIQBHDVYBNGIKABEVRNSPNBIXNKIJDOZPQSWSOAAXAFSWVFKKJPGSQOYQDVXHEPLPTDUTWDWOPN");
    msg.component.assign("VVHKMNSIHONNNIVLJBYCVKGTNHPATEXMIKATJACVKXKEOYWNPYFZZMPDCEQMPPUUFAQHWRRNWGHCDAQWPZJUJDNSMLRXIGOXSUXBFWZSTXGDQLNSVRODTXDD");
    msg.act_time = 52834U;
    msg.deact_time = 61928U;

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
    msg.setTimeStamp(0.833101730916);
    msg.setSource(2460U);
    msg.setSourceEntity(224U);
    msg.setDestination(64170U);
    msg.setDestinationEntity(186U);
    msg.id = 140U;
    msg.label.assign("AVWFGTELKIPEXHKRBBPPRZOJDIIIMWBLNYTZNXGFEDGOQQBSSDDQYSSDKOEEMESOMXANUJYWWRIMHBH");
    msg.component.assign("RWFKVHVQNNLPPLSBKSQLCGLJNSZPADGLMFCXIOFDIJMHMXTIPQTTEZQPGFSCGQJJRYUNFWKGN");
    msg.act_time = 18284U;
    msg.deact_time = 53544U;

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
    msg.setTimeStamp(0.718620342816);
    msg.setSource(49748U);
    msg.setSourceEntity(97U);
    msg.setDestination(42589U);
    msg.setDestinationEntity(185U);
    msg.id = 114U;

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
    msg.setTimeStamp(0.344525927613);
    msg.setSource(25384U);
    msg.setSourceEntity(51U);
    msg.setDestination(5125U);
    msg.setDestinationEntity(92U);
    msg.id = 163U;

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
    msg.setTimeStamp(0.788121968213);
    msg.setSource(15284U);
    msg.setSourceEntity(121U);
    msg.setDestination(24706U);
    msg.setDestinationEntity(116U);
    msg.id = 39U;

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
    msg.setTimeStamp(0.984580786105);
    msg.setSource(58035U);
    msg.setSourceEntity(180U);
    msg.setDestination(58041U);
    msg.setDestinationEntity(222U);
    msg.op = 52U;
    msg.list.assign("YKEWWBULUXCYULGKPNMDUWRXQSBQDZAKHJFAFDMGFIZXKPDRVRWFVZNMMUDSOGZIPZGEDRPOQCICYEFOIJNGTOJWCZRKPTGOLLNYUNVYWYSWOEHDLXV");

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
    msg.setTimeStamp(0.411981002372);
    msg.setSource(13969U);
    msg.setSourceEntity(166U);
    msg.setDestination(6204U);
    msg.setDestinationEntity(157U);
    msg.op = 251U;
    msg.list.assign("SBNDQASVQUZJT");

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
    msg.setTimeStamp(0.194589143248);
    msg.setSource(60034U);
    msg.setSourceEntity(193U);
    msg.setDestination(23752U);
    msg.setDestinationEntity(88U);
    msg.op = 157U;
    msg.list.assign("EMFRUGKHHCEAUX");

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
    msg.setTimeStamp(0.53152073822);
    msg.setSource(23778U);
    msg.setSourceEntity(1U);
    msg.setDestination(62242U);
    msg.setDestinationEntity(147U);
    msg.value = 169U;

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
    msg.setTimeStamp(0.98587156183);
    msg.setSource(39505U);
    msg.setSourceEntity(128U);
    msg.setDestination(26295U);
    msg.setDestinationEntity(109U);
    msg.value = 139U;

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
    msg.setTimeStamp(0.255983841655);
    msg.setSource(63506U);
    msg.setSourceEntity(203U);
    msg.setDestination(54942U);
    msg.setDestinationEntity(158U);
    msg.value = 86U;

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
    msg.setTimeStamp(0.261118680466);
    msg.setSource(47677U);
    msg.setSourceEntity(32U);
    msg.setDestination(29204U);
    msg.setDestinationEntity(43U);
    msg.consumer.assign("GQDEODRFXQICCJGCMZEJMVEDLZIMAGEZZXKUZARGBVXIDWXMPALVIUAIGLHFRVSIEWHBKSCVZMFOJUIKCTXUEDLYGTKOOEYBFXFKHJQIOXNFBAHQTSQIUVYFOQNDDOATEYX");
    msg.message_id = 27184U;

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
    msg.setTimeStamp(0.408148466783);
    msg.setSource(10872U);
    msg.setSourceEntity(66U);
    msg.setDestination(43747U);
    msg.setDestinationEntity(19U);
    msg.consumer.assign("CJQURURVATNQASYPLTKCVFHMBOFAMYJICXSAFWDLYMNWRODYIIDXPRTZFHLVMGJAXJUSIKGZABEDYQMFGNRIL");
    msg.message_id = 8888U;

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
    msg.setTimeStamp(0.451174615159);
    msg.setSource(11594U);
    msg.setSourceEntity(42U);
    msg.setDestination(29472U);
    msg.setDestinationEntity(104U);
    msg.consumer.assign("NEHAKKPIPMHWNPXBHRUIQFCYHFEYGCUJMRGCWMXCNWTDFIYGBSKKAIOBELVBAEZPPJQCUBOGKVMLFCVBPFGESS");
    msg.message_id = 54570U;

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
    msg.setTimeStamp(0.994226835508);
    msg.setSource(31243U);
    msg.setSourceEntity(137U);
    msg.setDestination(15876U);
    msg.setDestinationEntity(244U);
    msg.type = 107U;

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
    msg.setTimeStamp(0.761725391053);
    msg.setSource(37907U);
    msg.setSourceEntity(72U);
    msg.setDestination(34314U);
    msg.setDestinationEntity(62U);
    msg.type = 61U;

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
    msg.setTimeStamp(0.0659505124458);
    msg.setSource(29853U);
    msg.setSourceEntity(118U);
    msg.setDestination(42272U);
    msg.setDestinationEntity(43U);
    msg.type = 112U;

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
    msg.setTimeStamp(0.807710515554);
    msg.setSource(22827U);
    msg.setSourceEntity(56U);
    msg.setDestination(51277U);
    msg.setDestinationEntity(93U);
    msg.op = 193U;

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
    msg.setTimeStamp(0.0229936529317);
    msg.setSource(62554U);
    msg.setSourceEntity(12U);
    msg.setDestination(14664U);
    msg.setDestinationEntity(133U);
    msg.op = 236U;

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
    msg.setTimeStamp(0.742808156749);
    msg.setSource(38953U);
    msg.setSourceEntity(40U);
    msg.setDestination(3089U);
    msg.setDestinationEntity(132U);
    msg.op = 24U;

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
    msg.setTimeStamp(0.42942621865);
    msg.setSource(42277U);
    msg.setSourceEntity(104U);
    msg.setDestination(41550U);
    msg.setDestinationEntity(89U);
    msg.total_steps = 241U;
    msg.step_number = 28U;
    msg.step.assign("UAIXTRUFPVXTQUXOUJNECYNTNTJIGSSQHGZRYPHBAXLGBUULKXXAZDMJBYFLRHLQWIKNPMZTYLAILYHFPXZBNPGRCMJPNVGWCKPGIHSOCSKNKNAHGWIYVKPCEMXFPEUOFDMFKJCITUMXSZCCOVRFSWRSTVQM");
    msg.flags = 221U;

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
    msg.setTimeStamp(0.0831696822134);
    msg.setSource(32366U);
    msg.setSourceEntity(171U);
    msg.setDestination(28989U);
    msg.setDestinationEntity(73U);
    msg.total_steps = 46U;
    msg.step_number = 166U;
    msg.step.assign("OWWEXCNSTDITFPXO");
    msg.flags = 88U;

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
    msg.setTimeStamp(0.284381781399);
    msg.setSource(22724U);
    msg.setSourceEntity(151U);
    msg.setDestination(28051U);
    msg.setDestinationEntity(103U);
    msg.total_steps = 9U;
    msg.step_number = 65U;
    msg.step.assign("CFGIDXNSMIUOXWZDPYRQFKTPPNWGLAPCCZAATNSSTSI");
    msg.flags = 67U;

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
    msg.setTimeStamp(0.671840281406);
    msg.setSource(19016U);
    msg.setSourceEntity(17U);
    msg.setDestination(27732U);
    msg.setDestinationEntity(62U);
    msg.state = 151U;
    msg.error.assign("RLQWUGDQCSGKCGTKAPIDWAPPTJIRGKHJHDAMOSJEDXTVYGPZVBYQMMUOD");

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
    msg.setTimeStamp(0.478541920782);
    msg.setSource(16946U);
    msg.setSourceEntity(44U);
    msg.setDestination(23142U);
    msg.setDestinationEntity(175U);
    msg.state = 21U;
    msg.error.assign("RGXKZOOOKAVCLYMURQZZIWFKPTAPBIGWFWLJEVHKSQPWBKCADTXKDJHOAGSFDFGWMSBOXYMQCRZHLHDXLUHMDEESXUSHUNMMNOBYFMQAUQPGGJFNRLFHMOXCGJIKGYILEBAAYZUXEDALRBQLTPRWLBUNRVIMCBWHBKSRSZPDQVLYICOWTVFBSYFNUAXMRVJTVIJJSK");

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
    msg.setTimeStamp(0.942591847525);
    msg.setSource(24181U);
    msg.setSourceEntity(120U);
    msg.setDestination(8038U);
    msg.setDestinationEntity(13U);
    msg.state = 51U;
    msg.error.assign("YHZVWAHGXBEZFXPWXGKZGIITYUUOMCZKLLKUPSGCXWVNHCYQLJJQAFQDDWJDMRIQIOBLATHAJXTYWZYN");

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
    msg.setTimeStamp(0.105238872486);
    msg.setSource(13471U);
    msg.setSourceEntity(189U);
    msg.setDestination(9960U);
    msg.setDestinationEntity(254U);

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
    msg.setTimeStamp(0.61467194081);
    msg.setSource(18228U);
    msg.setSourceEntity(75U);
    msg.setDestination(61351U);
    msg.setDestinationEntity(9U);

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
    msg.setTimeStamp(0.569485733712);
    msg.setSource(18333U);
    msg.setSourceEntity(205U);
    msg.setDestination(41115U);
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
    msg.setTimeStamp(0.847603290403);
    msg.setSource(6041U);
    msg.setSourceEntity(236U);
    msg.setDestination(47593U);
    msg.setDestinationEntity(177U);
    msg.op = 72U;
    msg.speed_min = 0.192546894074;
    msg.speed_max = 0.452539766824;
    msg.long_accel = 0.859063352758;
    msg.alt_max_msl = 0.377866161863;
    msg.dive_fraction_max = 0.208956223663;
    msg.climb_fraction_max = 0.645514825744;
    msg.bank_max = 0.340308353958;
    msg.p_max = 0.464297862457;
    msg.pitch_min = 0.010189554618;
    msg.pitch_max = 0.1177011701;
    msg.q_max = 0.202380428391;
    msg.g_min = 0.602171270877;
    msg.g_max = 0.663572918623;
    msg.g_lat_max = 0.646804564228;
    msg.rpm_min = 0.812080150276;
    msg.rpm_max = 0.35334760614;
    msg.rpm_rate_max = 0.0537220551696;

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
    msg.setTimeStamp(0.138758694402);
    msg.setSource(3277U);
    msg.setSourceEntity(88U);
    msg.setDestination(62536U);
    msg.setDestinationEntity(225U);
    msg.op = 60U;
    msg.speed_min = 0.694855274014;
    msg.speed_max = 0.849353072417;
    msg.long_accel = 0.101357263526;
    msg.alt_max_msl = 0.251259457339;
    msg.dive_fraction_max = 0.00365920271687;
    msg.climb_fraction_max = 0.520780083452;
    msg.bank_max = 0.716892631282;
    msg.p_max = 0.134878380152;
    msg.pitch_min = 0.658186767887;
    msg.pitch_max = 0.795309698276;
    msg.q_max = 0.358693287914;
    msg.g_min = 0.798105725533;
    msg.g_max = 0.556560576488;
    msg.g_lat_max = 0.216295053863;
    msg.rpm_min = 0.16538603094;
    msg.rpm_max = 0.992562377566;
    msg.rpm_rate_max = 0.319707950172;

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
    msg.setTimeStamp(0.449909530355);
    msg.setSource(19380U);
    msg.setSourceEntity(66U);
    msg.setDestination(65172U);
    msg.setDestinationEntity(196U);
    msg.op = 165U;
    msg.speed_min = 0.0656604722223;
    msg.speed_max = 0.655873259389;
    msg.long_accel = 0.367888019472;
    msg.alt_max_msl = 0.452941712945;
    msg.dive_fraction_max = 0.548093108546;
    msg.climb_fraction_max = 0.184030534116;
    msg.bank_max = 0.627566696626;
    msg.p_max = 0.177687351235;
    msg.pitch_min = 0.46687926998;
    msg.pitch_max = 0.143510062676;
    msg.q_max = 0.41854125318;
    msg.g_min = 0.703748161359;
    msg.g_max = 0.063204054214;
    msg.g_lat_max = 0.129144660045;
    msg.rpm_min = 0.0156157830407;
    msg.rpm_max = 0.631413756825;
    msg.rpm_rate_max = 0.380977562639;

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
    msg.setTimeStamp(0.580496218168);
    msg.setSource(43450U);
    msg.setSourceEntity(184U);
    msg.setDestination(34188U);
    msg.setDestinationEntity(146U);

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
    msg.setTimeStamp(0.694363553003);
    msg.setSource(21936U);
    msg.setSourceEntity(221U);
    msg.setDestination(11670U);
    msg.setDestinationEntity(207U);

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
    msg.setTimeStamp(0.33906126032);
    msg.setSource(5837U);
    msg.setSourceEntity(13U);
    msg.setDestination(25566U);
    msg.setDestinationEntity(178U);

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
    msg.setTimeStamp(0.00739925447543);
    msg.setSource(22154U);
    msg.setSourceEntity(199U);
    msg.setDestination(24181U);
    msg.setDestinationEntity(168U);
    msg.lat = 0.489346193194;
    msg.lon = 0.675663069678;
    msg.height = 0.911635227019;
    msg.x = 0.722524647843;
    msg.y = 0.00569120941933;
    msg.z = 0.339745646923;
    msg.phi = 0.95866299584;
    msg.theta = 0.871651573337;
    msg.psi = 0.771883041354;
    msg.u = 0.380182358499;
    msg.v = 0.742841474977;
    msg.w = 0.126368897842;
    msg.p = 0.852551474025;
    msg.q = 0.00416760358218;
    msg.r = 0.198747950406;
    msg.svx = 0.993143611033;
    msg.svy = 0.238065880165;
    msg.svz = 0.961457529248;

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
    msg.setTimeStamp(0.18082751222);
    msg.setSource(805U);
    msg.setSourceEntity(202U);
    msg.setDestination(7470U);
    msg.setDestinationEntity(134U);
    msg.lat = 0.539923538026;
    msg.lon = 0.78208479128;
    msg.height = 0.671083395027;
    msg.x = 0.827013184741;
    msg.y = 0.678817159849;
    msg.z = 0.888749546721;
    msg.phi = 0.940207023219;
    msg.theta = 0.367858137776;
    msg.psi = 0.956444902648;
    msg.u = 0.297948077697;
    msg.v = 0.164875163296;
    msg.w = 0.412597572903;
    msg.p = 0.974354903828;
    msg.q = 0.396415619661;
    msg.r = 0.0741046165825;
    msg.svx = 0.633567539543;
    msg.svy = 0.974733498;
    msg.svz = 0.597584431573;

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
    msg.setTimeStamp(0.435062503202);
    msg.setSource(33941U);
    msg.setSourceEntity(62U);
    msg.setDestination(12676U);
    msg.setDestinationEntity(115U);
    msg.lat = 0.241671944821;
    msg.lon = 0.470861309067;
    msg.height = 0.261431171533;
    msg.x = 0.918871415231;
    msg.y = 0.909161009641;
    msg.z = 0.562899597648;
    msg.phi = 0.171484167654;
    msg.theta = 0.975625861891;
    msg.psi = 0.252393658133;
    msg.u = 0.588364618775;
    msg.v = 0.265401304361;
    msg.w = 0.263097025441;
    msg.p = 0.870808453062;
    msg.q = 0.484306961073;
    msg.r = 0.157486372269;
    msg.svx = 0.888578195835;
    msg.svy = 0.536787364513;
    msg.svz = 0.878510581153;

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
    msg.setTimeStamp(0.766898336809);
    msg.setSource(62658U);
    msg.setSourceEntity(223U);
    msg.setDestination(2541U);
    msg.setDestinationEntity(133U);
    msg.op = 63U;
    msg.entities.assign("TKIKVVLQTIWCUHUYFZZSRNXTOWDTFBHMLYQUEVNQAHNLQQINLJEDUZTUGMXZHBYCRMSJKXNZCOFCXLYXZAIAUFDPPCBRNLHEXSOTZTKIPQPRIADCSBDEFHPWJVOKHDJQAKJWRSUQEFBMRD");

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
    msg.setTimeStamp(0.579255367342);
    msg.setSource(55432U);
    msg.setSourceEntity(94U);
    msg.setDestination(12904U);
    msg.setDestinationEntity(146U);
    msg.op = 153U;
    msg.entities.assign("KAKBAGSSLYNSHBYZDNKMFOKNAEZF");

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
    msg.setTimeStamp(0.376338666909);
    msg.setSource(53758U);
    msg.setSourceEntity(220U);
    msg.setDestination(63457U);
    msg.setDestinationEntity(99U);
    msg.op = 152U;
    msg.entities.assign("FWXQOTBJRDDYFOHOPYNGIWGTEAAH");

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
    msg.setTimeStamp(0.247733376662);
    msg.setSource(60816U);
    msg.setSourceEntity(156U);
    msg.setDestination(14516U);
    msg.setDestinationEntity(221U);
    msg.type = 105U;
    msg.speed = 49872U;
    const char tmp_msg_0[] = {-76, 83, -77, 34, 59, 103, 32, -80, 87, 54, 77, -51, 125, 25, -122, 36, 115, -119, 109, -33, -125, 104, 2, 67, -10, -71, -86, -42, 11, -17, 16, -127, -49, 117, 15, -63, -61, 120, -11, -128, 28, 119, -70, -109};
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
    msg.setTimeStamp(0.990063060253);
    msg.setSource(43735U);
    msg.setSourceEntity(178U);
    msg.setDestination(21729U);
    msg.setDestinationEntity(120U);
    msg.type = 2U;
    msg.speed = 47578U;
    const char tmp_msg_0[] = {-72, 82, -72, 13, -71, -22, 45, 25, 83, -5, 20, -40, -77, -104, -31, 121, 20, -5, -24, 86, 33, 19, -59, 71, 113, 16, 86, -10, -29, -99, 84, -65, -42, -52, -76, -19, 2, -47, -82, 110, -6, 70, -40, -48, 70, -53, -41, -117, -7, -41, -93, 25, -2, 79, 114, -38, 82, -49, 21, -43, -102, -71, 64, -102, 124, 34, -4, 32, -50, -8, 52, -28, -116, 71, -36, -69, -48, -31, 54, -64, -50, 40, -36, -90, 115, 78, 72, -91, -19, -115, 75, -18, 111, 60, 63, -73, -6, 32, 86, -62, -112, -22, 39, -106, 23, -115, 9, -43, -83, 72, 54, -86, 70, 22, 69, -62, -82, -97, -109, -100, -4, -86, -123, 124, 103, 72, 52, 15, -91, -67, 56, 65, -8, 101, -14, -43, -69, -22, 37, -66, -54, 76, -14, 56, 69, 17};
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
    msg.setTimeStamp(0.858387551504);
    msg.setSource(56835U);
    msg.setSourceEntity(243U);
    msg.setDestination(4168U);
    msg.setDestinationEntity(207U);
    msg.type = 178U;
    msg.speed = 43011U;
    const char tmp_msg_0[] = {104, 106, 43, -88, 48, -24, 12, 59, 40, -90, -124, -104, -44, -74, 25, 53, 123, 73, -110, -45, 80, -7, 11, -124, -9, 3, 94, -119, -67, -54, 55, -5, -24, -74, 107, 55, -78, 75, -100, 96, -94, -24, 41, 71, -107, 123, -4, 22, -7, 121, -9, -96, -97, 113, -60, 121, -51, -80, 91, -11, 47, 38, 71, 65, 111, 37, 33, 11, -8, 11, -48, 14, -18, -117, 106, -87, -123, 77, -12, -14, 3, -120, -69, 114, -67, -94, 66, -70, -9, 119, 86, 81, 16, -87, -7, 4, -39, 113, -47, -78, -17, 81, -42, -23, 23, -103, -89, -25, 57, -52, 50, 121, -45, 117, -72, 59, 86, -36, 18, 108, 91, -105, -127, 93, -22, 62, -18, -62, 12, 101, 97, -24, 38, 40, -37, -66, -6, 115, 95, -10, -83, 108, 30, -39, 11, -128, -57, -127, -26, -5, -18, -72, 70, -29, 102, -84, -115, 64};
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
    msg.setTimeStamp(0.430581139426);
    msg.setSource(53901U);
    msg.setSourceEntity(113U);
    msg.setDestination(51764U);
    msg.setDestinationEntity(175U);
    msg.op = 29U;
    msg.tas2acc_pgain = 0.345945332446;
    msg.bank2p_pgain = 0.745744048682;

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
    msg.setTimeStamp(0.555633387522);
    msg.setSource(51453U);
    msg.setSourceEntity(92U);
    msg.setDestination(63309U);
    msg.setDestinationEntity(147U);
    msg.op = 212U;
    msg.tas2acc_pgain = 0.90138773987;
    msg.bank2p_pgain = 0.48636376448;

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
    msg.setTimeStamp(0.0201441340821);
    msg.setSource(15813U);
    msg.setSourceEntity(230U);
    msg.setDestination(4589U);
    msg.setDestinationEntity(65U);
    msg.op = 6U;
    msg.tas2acc_pgain = 0.426839076187;
    msg.bank2p_pgain = 0.890000930665;

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
    msg.setTimeStamp(0.869774568566);
    msg.setSource(26237U);
    msg.setSourceEntity(65U);
    msg.setDestination(8226U);
    msg.setDestinationEntity(31U);
    msg.available = 2473044774U;
    msg.value = 189U;

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
    msg.setTimeStamp(0.927450844828);
    msg.setSource(7120U);
    msg.setSourceEntity(25U);
    msg.setDestination(15698U);
    msg.setDestinationEntity(254U);
    msg.available = 1213827146U;
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
    msg.setTimeStamp(0.519933282364);
    msg.setSource(29500U);
    msg.setSourceEntity(64U);
    msg.setDestination(16783U);
    msg.setDestinationEntity(86U);
    msg.available = 3119626036U;
    msg.value = 97U;

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
    msg.setTimeStamp(0.62022211403);
    msg.setSource(46672U);
    msg.setSourceEntity(230U);
    msg.setDestination(62612U);
    msg.setDestinationEntity(63U);
    msg.op = 11U;
    msg.snapshot.assign("KAESPSKBZAEZAWSWOE");
    IMC::AutopilotMode tmp_msg_0;
    tmp_msg_0.autonomy = 161U;
    tmp_msg_0.mode.assign("NQYUCYGECGYFLJTTYVNATREZGLYDVWFWPMOBJSLRAJOGPANMRUOJVUIKPWCJWRFBEJHFLADCBOJQQMPTQXKZNIEVADCCSWSWSOOVSXQFEZQUFLEPVKMLOGBYWJVWUCZCEPFIQINFVFTGULJLVKGQMKPFDSZIRXAYXKBLHQVUSXZTQDGRHHNISITPLBEKNRBHUZPNOIKDDNHGXBDRCHEHAJYYTGARTMUXAYMK");
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
    msg.setTimeStamp(0.0611501941106);
    msg.setSource(55444U);
    msg.setSourceEntity(121U);
    msg.setDestination(60019U);
    msg.setDestinationEntity(43U);
    msg.op = 137U;
    msg.snapshot.assign("RNRWSLCGBEDSFZVIGCCOOIMMLGSOKHYFRWKUJUTJFUHRENMMWPDFJEXYRYISXLSLJVCRIZBSHTJXDOHIFXPLJUDKOODKQRAHTYDLYCMO");
    IMC::Salinity tmp_msg_0;
    tmp_msg_0.value = 0.741185531253;
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
    msg.setTimeStamp(0.214408358817);
    msg.setSource(61923U);
    msg.setSourceEntity(82U);
    msg.setDestination(18792U);
    msg.setDestinationEntity(186U);
    msg.op = 110U;
    msg.snapshot.assign("FZWWVQDLCGNEMXUGNXLLBCIBKDWTUJOGTRMZCURNGLJKHPGUAUCNRPBCVVQELLOTIEYWVRPWNDIBBFMTFEQLLCXOKATACFGJQMWJDZVSSKQRVDWMXHTOUEDYOLPONCJFNMRHMBRGZAATYYFGABCHYWSHTKAYSOATYNIBEFPJDKINERHSJWZKGXISATMIKRZSJYKBLUFHHSEEDQDN");
    IMC::ParametersXml tmp_msg_0;
    tmp_msg_0.locale.assign("FYFTMAYWXBIQWQSRDUNTNNGOVDHLLJCJHRLYHGFDPOZSBVBPSJFQXPOQACXBKUHDZAMEWKUPQCSEIKXEAJRENWAZUDEVBZHRPTOPHTGAHIAVIKYYEFIFLRUAZLOZRITUWSIGPGKCGBVQWJTBNNDRLIBFDNVZCJLBXVUXJSZKTZLGJVDQUYIXNF");
    const char tmp_tmp_msg_0_0[] = {-45, -42, 107, 26, -62, -33, -106, -23, -93, -32, 105, 60, -30, -3, 81, 35, -1, -98, 124, -4, 71, 107, 15, -50, 76, 12, -117, 56, -121, 13, -82, 113, -73, -97, -120, 72, -72, -38, 10, -117, -55, 21, 61, -49, -71, -55, -96, -99, -128, -90, -46, 27, 97, 57, 69, 11, -93, 9, -40, 9, -6, 100, 85, -93, 78, 73, 93, 112, 123, 109, -123, 13, -76, 112, 83, -52, -88, -94, 10, -58, 119, 20, -57, -10, 38, 44, -124, 27, 81, -35, 33, -105, 102, -100, -61, -65, 116, 12, -86};
    tmp_msg_0.config.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.875626597227);
    msg.setSource(22175U);
    msg.setSourceEntity(18U);
    msg.setDestination(47672U);
    msg.setDestinationEntity(166U);
    msg.op = 39U;
    msg.name.assign("EYARPQNKMLXPKWTKLZENCGBPMOSZOLKKTHEYLEQJTYTINUITITCHUBZEUZFQNRJFPAVYVWFJFLEUOZBGSVRTOINSCNGWSXGSVUIGCDXVZYLRDBEAAGCLCMDAMWWWFUGJDAP");

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
    msg.setTimeStamp(0.603427135728);
    msg.setSource(63954U);
    msg.setSourceEntity(143U);
    msg.setDestination(16027U);
    msg.setDestinationEntity(42U);
    msg.op = 73U;
    msg.name.assign("ICHNNCZAOZMWKFGRHUBQEKDAXSGYTBURKUZPJAKYSEOUOYECRWJKEFIED");

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
    msg.setTimeStamp(0.748004477019);
    msg.setSource(52129U);
    msg.setSourceEntity(242U);
    msg.setDestination(35130U);
    msg.setDestinationEntity(199U);
    msg.op = 93U;
    msg.name.assign("NQNXOSHLFIICXMBYQJTADLFZHHNSPXJKPYLBDOOTYUAMEQRBYPUTCTVUPQKVTPIKAVSCHUNLNMJENOHAFCIBRFOLLPDGWORYMXURSDOAGFQXDJIODEHEUSRQWSZWOTKKDKEZGAILRNICABTYRGXPEVWLXAARVZDWOHTVJHSSYFFPMSYGCAPGC");

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
    msg.setTimeStamp(0.958162301796);
    msg.setSource(18767U);
    msg.setSourceEntity(186U);
    msg.setDestination(6234U);
    msg.setDestinationEntity(53U);
    msg.type = 42U;
    msg.htime = 0.344950347763;
    msg.context.assign("SEKDAZZNDSVUQHJPQDMPFTSMFVRTOUBPHMNUNOVITINBOIKZODLMXDVQEDQWCVWEIZDVKSNFSJUAXKVYRFRRLYSYWILNPMHKETICCWWRLBYA");
    msg.text.assign("RZGHLHGITGAJBFICSQCJNABOOEAAMKRIGJQISBZXATWVLUPFSYVUKNBOSJEXDYXVALMRWRHLOYXADQKLJTUXNRUKGLRDPCCTWRELHYJCNHCFZKDSEKXBTAOHTQHNOLSKOWGBSXRENIFNDZXAUXUOFUUYHYMEWCKVFQJEFDGOGBCQBDWCWNKDVGZVPQYSKBQTATWTRFWVIP");

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
    msg.setTimeStamp(0.506270501217);
    msg.setSource(45804U);
    msg.setSourceEntity(179U);
    msg.setDestination(40858U);
    msg.setDestinationEntity(12U);
    msg.type = 57U;
    msg.htime = 0.758627534206;
    msg.context.assign("UKDWJCHRDGBQHJRIQLTBHSMAXMYZWNSBSUPUTPKOGJVIVFIOWNRKAAANWFQGSDIALFEHHCVYHVVRYFLOYEFBPCTYEKPAYQTPKFEEOFXXZCJWDQUSVKMXTQMEDMZOOMXWAMWKTYGRZLHQINAXBSBDVGRUBPCLBHXHHYCDZEZZLMJXOJZQCFNVJJEGSBIATPPYATFCYOXMDNCIRRUDUIDBT");
    msg.text.assign("HAOHGQKFUFVRWCZHPMIBMGYYTTTHDUKPOWXUPSDMMNQDISRUAWLWVNFERTONKEDHGRPYNCJGDCFPLCPEUCDRVNRAFJXIISEJNSJWGQXZKEZZTULIHWQYSLBXFBYQLBHBQXTBVSAVHRTKGS");

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
    msg.setTimeStamp(0.354926178068);
    msg.setSource(64850U);
    msg.setSourceEntity(83U);
    msg.setDestination(31788U);
    msg.setDestinationEntity(222U);
    msg.type = 0U;
    msg.htime = 0.551669320648;
    msg.context.assign("SGCVAXSLALJZOVXOBWKAERLJQSDXCXLJJHLHMHQNFAQIQKHJWHACQTMUGBIUIJIDZSMNVGCBYNPZKIQIPKJTOWCCTDHMDUHYYZWYWRFYRIXGIDELNATOPQFPKUGRWFHPVROIBWRETWMKKSEBFKMDRGSDXPVKFTUORRHNLLGTEBDAGYDLSPVNSKCEZCVMFCVTYVBCHQOMZUDB");
    msg.text.assign("SROAKZGOOJFZTBAGYNPRYBLDVHSJVQMQTENLRAWZTYFAMWBWCEOZEWNLWJTZLKLSIHQIKXADMHUGXFJHHBYBIKORWPXPURK");

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
    msg.setTimeStamp(0.994648357062);
    msg.setSource(2925U);
    msg.setSourceEntity(58U);
    msg.setDestination(4080U);
    msg.setDestinationEntity(243U);
    msg.command = 229U;
    msg.htime = 0.953269351969;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 236U;
    tmp_msg_0.htime = 0.7859957609;
    tmp_msg_0.context.assign("AGPWIRNYBYIEGHXYJCXHOELPQKZIKKTCUXGN");
    tmp_msg_0.text.assign("MOREUTCMTRQDEXWTRJNHTZKOBGLRGKAPNVNLUYYLXYWNHAOCUSHJBMGGOODOIMOPOVWCSFGMGWKJPFJQVAGBDIQZWQMFZS");
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
    msg.setTimeStamp(0.373336303448);
    msg.setSource(13158U);
    msg.setSourceEntity(39U);
    msg.setDestination(41427U);
    msg.setDestinationEntity(39U);
    msg.command = 227U;
    msg.htime = 0.926218323486;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 155U;
    tmp_msg_0.htime = 0.205182106347;
    tmp_msg_0.context.assign("NEIQMXKKRVKBOVQLGBYHQFNAQTCZGADUAXSMIRGYSFEDPYNMWJGLDNIXDXMJBNSQCFOSBKSGRWKMPGWOABTGP");
    tmp_msg_0.text.assign("XDGJCXGXHUWGBHJSXAGMQVOOSROOBGARBUTHPQLNDTVWSZUVVINNKKPPEFBYUFLEJLWFKRRWNAAUFRKPQJFQEDOAINRBZMMXCBNDLOXLKQNEDJCYHDATIKBSFCLWYMLVTQVHUQZWXHEW");
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
    msg.setTimeStamp(0.0912026237761);
    msg.setSource(41149U);
    msg.setSourceEntity(231U);
    msg.setDestination(82U);
    msg.setDestinationEntity(2U);
    msg.command = 122U;
    msg.htime = 0.193906666768;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 61U;
    tmp_msg_0.htime = 0.131407924938;
    tmp_msg_0.context.assign("VTRVBJSUKFREYOVJSTMQWJFRBBCZJZOXUAWRJTCPYGYRPFDJZXQEEMEZKWDVAGXYELWUJNUQICDOATHLASUPPYBANBUQIGEVFXUUPDBMIKOBEOHXLSQONIDYFHQTPLFYOGSIKYRCRHDKVHPMZILQRNQ");
    tmp_msg_0.text.assign("TMQHYFNLNDZVAOPMGDXRAWIJGUOOXSNFLKTVAHCQXXSWKESTCVMZDZKUEBBCPKYMT");
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
    msg.setTimeStamp(0.249966488596);
    msg.setSource(8634U);
    msg.setSourceEntity(253U);
    msg.setDestination(19500U);
    msg.setDestinationEntity(12U);
    msg.op = 7U;
    msg.file.assign("BHAJWSAJMIIAPNMCFXUYBCPUHZTRMSVEQGPTAJBJMRPKXBLELTDWKQNQDUUYXNUQISFQJAVTJPSKYUXIBBMAIMCKTHMIQOEFPTWDYIFZHRPKJKWJYDSNALGRRG");

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
    msg.setTimeStamp(0.272017129468);
    msg.setSource(5608U);
    msg.setSourceEntity(201U);
    msg.setDestination(51847U);
    msg.setDestinationEntity(5U);
    msg.op = 9U;
    msg.file.assign("SYOTJXIEWKVYBBUWPSTLCPLHCBDXUBRBYGUEDIZITJUYBNSJQVOHYUTPUBZMIKAUJTEFOCMHSPIXDEIJSSPPDMQVIFKAYWEQLXXIGYFLGSMCOFZQHVCQCGURWDVLFDKZNRLFRTIGGRJZENZCEFAKWNZQVOP");

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
    msg.setTimeStamp(0.0701864050358);
    msg.setSource(29044U);
    msg.setSourceEntity(23U);
    msg.setDestination(17154U);
    msg.setDestinationEntity(69U);
    msg.op = 110U;
    msg.file.assign("XWJIHIRPRCAFXZCFFHBEQAGUNFDPVKVVQQRJXGYMHQODAUVOCTQTHGXWFYYESKTTBJNMGPLKVISIIAXXWDNBVSEOXLJDSXDPPZ");

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
    msg.setTimeStamp(0.566734477022);
    msg.setSource(28583U);
    msg.setSourceEntity(223U);
    msg.setDestination(7680U);
    msg.setDestinationEntity(113U);
    msg.op = 206U;
    msg.clock = 0.924505495111;
    msg.tz = 6;

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
    msg.setTimeStamp(0.0379379838028);
    msg.setSource(52545U);
    msg.setSourceEntity(246U);
    msg.setDestination(62401U);
    msg.setDestinationEntity(47U);
    msg.op = 61U;
    msg.clock = 0.715986865855;
    msg.tz = -92;

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
    msg.setTimeStamp(0.645951449793);
    msg.setSource(18367U);
    msg.setSourceEntity(197U);
    msg.setDestination(33808U);
    msg.setDestinationEntity(57U);
    msg.op = 52U;
    msg.clock = 0.835518700306;
    msg.tz = -34;

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
    msg.setTimeStamp(0.570664948181);
    msg.setSource(23468U);
    msg.setSourceEntity(168U);
    msg.setDestination(63174U);
    msg.setDestinationEntity(10U);
    msg.conductivity = 0.43668481809;
    msg.temperature = 0.131788505902;
    msg.depth = 0.746810555008;

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
    msg.setTimeStamp(0.384414944747);
    msg.setSource(63577U);
    msg.setSourceEntity(143U);
    msg.setDestination(10294U);
    msg.setDestinationEntity(79U);
    msg.conductivity = 0.54229762849;
    msg.temperature = 0.0920012107659;
    msg.depth = 0.00454263272225;

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
    msg.setTimeStamp(0.651248941157);
    msg.setSource(15941U);
    msg.setSourceEntity(161U);
    msg.setDestination(61079U);
    msg.setDestinationEntity(200U);
    msg.conductivity = 0.470842243863;
    msg.temperature = 0.7673692767;
    msg.depth = 0.588279696228;

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
    msg.setTimeStamp(0.0356355289722);
    msg.setSource(43920U);
    msg.setSourceEntity(250U);
    msg.setDestination(36464U);
    msg.setDestinationEntity(150U);
    msg.altitude = 0.731602192557;
    msg.roll = 59152U;
    msg.pitch = 22383U;
    msg.yaw = 28954U;
    msg.speed = -10553;

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
    msg.setTimeStamp(0.884832673212);
    msg.setSource(26515U);
    msg.setSourceEntity(118U);
    msg.setDestination(53538U);
    msg.setDestinationEntity(145U);
    msg.altitude = 0.543401900223;
    msg.roll = 48748U;
    msg.pitch = 14335U;
    msg.yaw = 58209U;
    msg.speed = -12255;

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
    msg.setTimeStamp(0.0279716693852);
    msg.setSource(19228U);
    msg.setSourceEntity(4U);
    msg.setDestination(38807U);
    msg.setDestinationEntity(18U);
    msg.altitude = 0.112754702855;
    msg.roll = 29352U;
    msg.pitch = 19126U;
    msg.yaw = 28265U;
    msg.speed = 17070;

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
    msg.setTimeStamp(0.150695294679);
    msg.setSource(20746U);
    msg.setSourceEntity(89U);
    msg.setDestination(12344U);
    msg.setDestinationEntity(221U);
    msg.altitude = 0.704207662899;
    msg.width = 0.840378263348;
    msg.length = 0.386538760244;
    msg.bearing = 0.154063731026;
    msg.pxl = -29200;
    msg.encoding = 183U;
    const char tmp_msg_0[] = {-28, 59, 108, -29, -33, 24, 118, 80, 57, 69, 20, 83, -69, 51, 28, 47, 90, -13, 61, 28, -109, 123, -29, 108, -51, 27, 87, -29, 70, 95, -18, -120, -47, -4, -68, -10, -124, 38, 99, 51, -21, -32, -19, 84, -37, 1, 53, 83, -3, 47, 65, 110, 83, -72, 113, -24, 114, 110, 43, 42, -31, -75, -29, 35, 81, 93, 43, 106, 77, 113, 33, -99, -79, 3, -25, 111, 29, -115, -66, -81, 52, 98, -37, -51, -18, 75, 75, 12, 40, 90, 98, -115, 24, 38, 122, -87, -68, -96, 4, -122, -119, -33, 124, 11, 107, -13, 69, -66, -22, 56, -3, 19, 101, 34, 0, 40, 110, -18, 14, 30, 3, -37, -60, 74, -6, 63, -2, 81, -121, 99, 69, -11, -102, -80, 14, -49, 59, 52, -119, -70, -87, 117, -114, -63, -83, -58, 15, 126, 88, 11, -3, -36, 8, 58, 118, -67, -109, 114, 8, 87, -6, 48, -10, -110, -49, -81, 29, -103, 96, -80, 39, 59, 82, 56, -83, 115, -46, 40, -26, 65, -29, 126, 31, 2, 92, -83, 49, -95, 66, 85, -98, 27, 95, -29, 5, -83, -66, 59, 50, -43, 74, -18, -82, -119, 66, 87, 30, -37, 110, 102, 72, -92, 103, 9, -78, -49, 109, -36, 31, 76, -39, -117, 4, -33, -27, -35, 41, 120, -68, -89, -22, 43, 21, 24, -39, 67, 119, 65, 79, 36, 83};
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
    msg.setTimeStamp(0.577495008821);
    msg.setSource(8040U);
    msg.setSourceEntity(254U);
    msg.setDestination(35113U);
    msg.setDestinationEntity(213U);
    msg.altitude = 0.0364807793381;
    msg.width = 0.0939164918083;
    msg.length = 0.560135580451;
    msg.bearing = 0.571984010784;
    msg.pxl = -27306;
    msg.encoding = 30U;
    const char tmp_msg_0[] = {-109, 80, 74, 101, -51, -23, -115, -5, 124, 79, 15, -105, 98, 105, 69, 29, -102, -69, -95, -100, 16, -125, 32, -127, 44, -30, -75, 98, 96, 21, 82, -96, 105, 66, 90, -77, 85, -14, 123, -109, 24, 10, -19, 106, -115, 63, -120, -102, -30, 58, -16, 85, -30, 47, -59, -37, 56, -65, 102, -89, 105, 40, -117, 0, 77, -83, -28, -18, 17, -34, 65, 78, 62, 119, 15, 48, 121, -121, 35, 119, -61, 106, 24, 122, 34, 36, 103, 4, 108, 103, -46, 74, 87, 106, -79, 53, -49, -126, 63, 83, 126, 8, -99, -106, 3, -33, 68, -99, -117, 44, -67, -119, -55, 44, -35, -20, -28, -43, -56, -43, -70, 34, 79, 96, 101, 97, 10};
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
    msg.setTimeStamp(0.767131249027);
    msg.setSource(47023U);
    msg.setSourceEntity(69U);
    msg.setDestination(12964U);
    msg.setDestinationEntity(243U);
    msg.altitude = 0.707183919967;
    msg.width = 0.279097885735;
    msg.length = 0.852429085675;
    msg.bearing = 0.140973553283;
    msg.pxl = -6802;
    msg.encoding = 66U;
    const char tmp_msg_0[] = {-14, -78, -21, 86, 62, -7, -19, 2, -47, 77, -113, -70, 67, -24, -99, 86, -48, -117, 62, 79, 107, 24, 86, -16, 83, -113, 119, -84, 29, -127, 50, 71, 107, 57, 42, 125, 31, 29, 80, -100, 74, -74, 19, -118, 65, -112, -110, -65, -14, 35, 31, -119, 96, -111, 28, -25, -2, 74, 125, -9, 17, -72, -49, 0, -74, 102, -27, 90, -14, -27, 117, -125, -73, 74, 66, -39, 62, 72, 17, 84, -102, 73, -80, -116, -20, -106, -8, -53, -2, -37, 23, -92, 94, -111, -78, 99, -26, -90, -73, -108, -91, 114, 73, -55, -87, -58, -48, -46, 33, 47, -13, -101, -60, -17, 84, 59, 65, -14, 111, 90, -36, 119, -11, -26, 77, 80, -115, -124, 18, -30, 59, -111, -7, 54, -94, -51, 39, 125, -32, 29, -75, -113, -82, -11, -117, 84, 27, 97, 5, -3, 68, 78, -125, 15, 113, 101, 80, 90, 37, 99, -69, -90, 105, 67, 66, 6, 95, 76, -92, -2, -13, -19, 66, 80, 36, -66, 110, -126, -61, 33, -124, 83, -23, -65, -84, 2, -54, 26, -52, 91, 51, -44, 42, 11, -81, 10, 116, -19, -69, 62, -42, 98, -58, -58, 97, -64, -115, -78, 121, 8, -11, -24, -89, 105, 97, -76, -11, -15, 37, 95, -23, 53, 73, -22, -69, -45, 104, 1, 106, -48};
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
    msg.setTimeStamp(0.743461995168);
    msg.setSource(15283U);
    msg.setSourceEntity(52U);
    msg.setDestination(61192U);
    msg.setDestinationEntity(148U);
    msg.text.assign("ZFXEYRQJJFYJTQQPBOIJQYORKBVKIURHWEZXVCIAOWPOSUPOYQJMTTVTUQLEGUBFODCZOHAYWTPGKNQACWCMXCTIDEVLMEUJTZDRGSNDFYSGCMLHIWCGNAXQQKSBXVDYAQYXLWRMUNLBFSZFZRXBMNRIJAKGPGDLCWVILZGWAHNXSVDIVBSZSGEDRFZHT");
    msg.type = 43U;

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
    msg.setTimeStamp(0.228786108493);
    msg.setSource(15031U);
    msg.setSourceEntity(24U);
    msg.setDestination(4160U);
    msg.setDestinationEntity(175U);
    msg.text.assign("GRDNLVDOGPENTQYBZQQSNZMZWHNECVXUSUBJVGWCKQYQJGJZVCSYPXHCFGPWHIXLRJKPJTRYSNEWDSENHSHDPXLMNFXFTGVARPRCWUIUGNHSOKJPQREFRBAARFGBYOFJYMLKSXIVZNJMYLBKTMANYCOKPTUWAUGOVQWLGPWTIAIOBDUYMXTMHEKVXFHVHQTILFJCBYXLEMZ");
    msg.type = 60U;

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
    msg.setTimeStamp(0.485585823338);
    msg.setSource(53726U);
    msg.setSourceEntity(251U);
    msg.setDestination(46543U);
    msg.setDestinationEntity(170U);
    msg.text.assign("RDCXPNYITBJDLZBHYMZDKKILCKHPUIEPVESVLZLRIQBPLDKDULIQEWRFXWGMET");
    msg.type = 82U;

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
    msg.setTimeStamp(0.530247947267);
    msg.setSource(55303U);
    msg.setSourceEntity(225U);
    msg.setDestination(25106U);
    msg.setDestinationEntity(115U);
    msg.parameter = 193U;
    msg.numsamples = 196U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 40518U;
    tmp_msg_0.avg = 0.570961877126;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.550592101401;
    msg.lon = 0.99263816721;

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
    msg.setTimeStamp(0.434095710411);
    msg.setSource(51592U);
    msg.setSourceEntity(150U);
    msg.setDestination(48514U);
    msg.setDestinationEntity(72U);
    msg.parameter = 203U;
    msg.numsamples = 19U;
    msg.lat = 0.288260368646;
    msg.lon = 0.98838767503;

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
    msg.setTimeStamp(0.441224508248);
    msg.setSource(35314U);
    msg.setSourceEntity(0U);
    msg.setDestination(55592U);
    msg.setDestinationEntity(9U);
    msg.parameter = 48U;
    msg.numsamples = 158U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 27638U;
    tmp_msg_0.avg = 0.236285314395;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.219167140911;
    msg.lon = 0.461327598775;

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
    msg.setTimeStamp(0.0887333588188);
    msg.setSource(64846U);
    msg.setSourceEntity(37U);
    msg.setDestination(26921U);
    msg.setDestinationEntity(231U);
    msg.depth = 30538U;
    msg.avg = 0.83456293448;

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
    msg.setTimeStamp(0.826036388462);
    msg.setSource(23008U);
    msg.setSourceEntity(240U);
    msg.setDestination(58992U);
    msg.setDestinationEntity(11U);
    msg.depth = 37072U;
    msg.avg = 0.28880680899;

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
    msg.setTimeStamp(0.388677341425);
    msg.setSource(13957U);
    msg.setSourceEntity(153U);
    msg.setDestination(25598U);
    msg.setDestinationEntity(132U);
    msg.depth = 26129U;
    msg.avg = 0.690087222058;

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
    msg.setTimeStamp(0.234002032732);
    msg.setSource(60878U);
    msg.setSourceEntity(217U);
    msg.setDestination(16396U);
    msg.setDestinationEntity(149U);

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
    msg.setTimeStamp(0.797431933822);
    msg.setSource(15094U);
    msg.setSourceEntity(156U);
    msg.setDestination(13362U);
    msg.setDestinationEntity(191U);

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
    msg.setTimeStamp(0.40412349822);
    msg.setSource(57195U);
    msg.setSourceEntity(115U);
    msg.setDestination(536U);
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
    msg.setTimeStamp(0.162734968159);
    msg.setSource(18082U);
    msg.setSourceEntity(29U);
    msg.setDestination(4363U);
    msg.setDestinationEntity(200U);
    msg.sys_name.assign("AXKPMDYQGNMCIPQRGWZYCB");
    msg.sys_type = 126U;
    msg.owner = 23887U;
    msg.lat = 0.510832865499;
    msg.lon = 0.353478818802;
    msg.height = 0.837835174717;
    msg.services.assign("VGWSWAJPUZRTQOEZCFYJGVIFTUZIIFSJKMXAFTPFOAHYEUKHUVLEQXDMRUMCPZOLGWFVYAURURFNLKRLKCSKHVGNPZXLBWCBQMXBXSBRYJLLWISGSDXMQXHWHYXZHIKAEJDOOGVATRNMCYZBYDMQWPQSGZAIARGZFDYWMNEICBTQXKANNBITOCCDEMOGHTEXKBNEUPHFJTPQTBWVFLJKOPUIICVWPJYNDRVPJJSGKVTEADMQSHHDSQZCOUENRB");

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
    msg.setTimeStamp(0.522369890722);
    msg.setSource(55619U);
    msg.setSourceEntity(37U);
    msg.setDestination(42151U);
    msg.setDestinationEntity(180U);
    msg.sys_name.assign("MKLIQZICYNCVKXKZEOGXNACWWEEPLCDCQQUBHUSKZKSUSBQTDSUQRWATWQOQIYMFFQSGJWHIVBAKFDOXLXNGGXYCIIYXMDHRLJYCKMJDJDBLZVIVBIEBMMZWZESFLTVPHFPDQJUVOWNWYJREPPDRGWUMGRDROEKAPFVZTGRYASRNODCANTPIXFOCJTTAOJBLFBRJZNBGHHHTAEVYGHY");
    msg.sys_type = 90U;
    msg.owner = 49764U;
    msg.lat = 0.0248209294262;
    msg.lon = 0.768272092614;
    msg.height = 0.254370743407;
    msg.services.assign("MNQNBJTIRPBHTARSKHFPFLKXCHOVLBRCJPGIKZSKUSMNCJPFTOYWWWQMATTURADPYNJDLXZOXJLVDZDCEWFGIZHXRUNEVTMQCGEUFKYIIHBTQKQYXWFNGMDNOGZTCVBZLVSLMIEJRDJESRFISEIUVKECYYRILSYUTCPSZXVGATJGZAZBACVCE");

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
    msg.setTimeStamp(0.431545877358);
    msg.setSource(3495U);
    msg.setSourceEntity(79U);
    msg.setDestination(61824U);
    msg.setDestinationEntity(170U);
    msg.sys_name.assign("JWXKPRUQUAVZMGWVOTGHCLDTSZLILMFVOXUFZQLTGRKLGPEZSXPPEICKHVMAQIOVIFLSFZEJQWUBOHYLQYRGWSYGUNCOBNMURSAYIYZUBEGKKBWOWUKVXRRJDKBFNZBTVCBVDSQNBODNWOIKETQTDHDQSLWTACAPJHOCTXJJMSHJEYNFDZGMLAKZNEPDQNAOXAHHXBLIEWEMXBQYHIDJRPEUMCYFR");
    msg.sys_type = 45U;
    msg.owner = 20221U;
    msg.lat = 0.191313990221;
    msg.lon = 0.907685890682;
    msg.height = 0.66803322479;
    msg.services.assign("VAYTKNZEKBOMXDTSTDADWDZAISRCOHYIMGZQNLAHMXGKNBQQVTDUUPXZWAFPONMBPFGZKWDMENJZAVHROUIQQ");

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
    msg.setTimeStamp(0.767534974875);
    msg.setSource(57273U);
    msg.setSourceEntity(58U);
    msg.setDestination(533U);
    msg.setDestinationEntity(244U);
    msg.service.assign("HTMDODFSSSMVPAYTSKOTUZZOLVENJNZBNINEAHQSDSBNJXOJKTIPJMPUOZNUPCOMYRNYHFDCQDKKFJBMTWGYIAHGVGLUWXCMAGLVZNWUYFTRPTXF");
    msg.service_type = 102U;

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
    msg.setTimeStamp(0.406147287486);
    msg.setSource(15240U);
    msg.setSourceEntity(191U);
    msg.setDestination(59593U);
    msg.setDestinationEntity(30U);
    msg.service.assign("RJSGITSBAVCYWXALCGGNNWJFZFROFKIUIUXVEAMGCVSBBHDNKOVCPLIUGXFMBDSPHCXZHBFTYFMMAEFBUNTYSQDVEHQQQBUEVNNHQTLKHJYJVRMLXCBFZKEGMNRTZELDFYRUUGJPJIOMQSSEKXMLWLQGILTSWZCWEYQQOPLKCHXPODIUBZDFCNVMPYAAXWOAISRJTQIAOCIZGZHMRONLWPOBEUDJTVDZKJJH");
    msg.service_type = 18U;

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
    msg.setTimeStamp(0.770132769615);
    msg.setSource(63356U);
    msg.setSourceEntity(65U);
    msg.setDestination(11903U);
    msg.setDestinationEntity(208U);
    msg.service.assign("PBDRPCAMIWTSLRNLLVFKPTDVQONEDDTQHTNBKLSUUQXZGXDYCJCBXKUAFOTBXHCGJVICZPADAGRETIUBUURKRJEWPOHUXJQIVLEKPMNCQTBSAEDXHCZMGKFHTJVAHHYWMYQJZROSOXZRUEOKIIQDZIGZSPWXILQLUNWGNIPWFAQOSGWGSNXVVDRVKBJYAFYCNFAHOSLYENRRPZVTCJBBYDIYKSPWYETOEMS");
    msg.service_type = 55U;

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
    msg.setTimeStamp(0.938621429004);
    msg.setSource(16025U);
    msg.setSourceEntity(91U);
    msg.setDestination(44846U);
    msg.setDestinationEntity(90U);
    msg.value = 0.168862960227;

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
    msg.setTimeStamp(0.611901551801);
    msg.setSource(61618U);
    msg.setSourceEntity(17U);
    msg.setDestination(16969U);
    msg.setDestinationEntity(235U);
    msg.value = 0.464488604055;

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
    msg.setTimeStamp(0.407092524164);
    msg.setSource(58417U);
    msg.setSourceEntity(220U);
    msg.setDestination(20614U);
    msg.setDestinationEntity(123U);
    msg.value = 0.553234397948;

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
    msg.setTimeStamp(0.279207332148);
    msg.setSource(52673U);
    msg.setSourceEntity(103U);
    msg.setDestination(43250U);
    msg.setDestinationEntity(181U);
    msg.value = 0.36493170053;

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
    msg.setTimeStamp(0.0494772526462);
    msg.setSource(61621U);
    msg.setSourceEntity(252U);
    msg.setDestination(16629U);
    msg.setDestinationEntity(182U);
    msg.value = 0.136185902716;

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
    msg.setTimeStamp(0.0672142199609);
    msg.setSource(13107U);
    msg.setSourceEntity(143U);
    msg.setDestination(16840U);
    msg.setDestinationEntity(23U);
    msg.value = 0.777116060511;

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
    msg.setTimeStamp(0.0828440484645);
    msg.setSource(41383U);
    msg.setSourceEntity(168U);
    msg.setDestination(15720U);
    msg.setDestinationEntity(248U);
    msg.value = 0.0747854193369;

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
    msg.setTimeStamp(0.498443884369);
    msg.setSource(30193U);
    msg.setSourceEntity(213U);
    msg.setDestination(59261U);
    msg.setDestinationEntity(134U);
    msg.value = 0.247807339224;

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
    msg.setTimeStamp(0.298303580488);
    msg.setSource(16400U);
    msg.setSourceEntity(140U);
    msg.setDestination(22521U);
    msg.setDestinationEntity(80U);
    msg.value = 0.770170119425;

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
    msg.setTimeStamp(0.473750142518);
    msg.setSource(7417U);
    msg.setSourceEntity(190U);
    msg.setDestination(43457U);
    msg.setDestinationEntity(220U);
    msg.number.assign("WNWHJZQFFXTDJORYYTGVSYADANLCGWANRUEXKYUPRQJIHEMARQGIKMCBFIEYRDZKDOEOWOQTCIMXRQWXLUSRFJHPPLMJYTAMBIJBFFHMREBYUTURFZXZCNBAJWUHUTQFWSFCCLHVPTBKSUQILSVGLSJTVQJIWGOEEEDNKLPDPKAHVKGVKZXGCLYCZVHPGBSPENLKWBUFBZYZMXAOODZSONTXMDOKXGCCAIHVVONUXHLWQYNEPPMTBZ");
    msg.timeout = 36703U;
    msg.contents.assign("TBSJBCFJFUAZVZVTVAWDOIFECODZFKJGZMMFLRVRXKJZHQYUWNWKFRQAWEFPBXYVYBDOIASCJDPHCDZTVJONNDSJDKRREHKWGSQGIFQKGUUTBPTBBUIWMMGS");

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
    msg.setTimeStamp(0.638557519464);
    msg.setSource(16044U);
    msg.setSourceEntity(41U);
    msg.setDestination(5393U);
    msg.setDestinationEntity(109U);
    msg.number.assign("VEEVAWNBJNBUOSDSBIMGKPRIWSJGGUMTHEETAETPZXAUQBPJVIRNJVLPEFMXMPNNULFAXQUFKCLTZZOAHRYRXGYSJMQWXKGNMDDMYCRKUPVGXMICRWCDEGDXQLCFPITQZYVYOWYHZKCNYUQRYJDNKVKZLFBTLJZZHTESBYAVPTCODBUJACVIHHKWOBTFYXIEPDQSQXSRLUNKLFQPOWOLBSZMBXDI");
    msg.timeout = 42785U;
    msg.contents.assign("BXJQMRIDACSIYZOAKMEFJFWLWYVTDQCVKMOCBKKMAOGNZABQLZFFLMVVSERCWNLREDUPYMPGJHSYGYPAPWAXMEDEKGFHZUHITITBQFNBZHCLABVUXVNSZGLIJKZRFLUTNUDPJJXUIGOEEXJNECHTHFVXWDPCNVJGRNGUWOHJCBHDATYWKZBFLGESDAROXYJXRKVBLTXOAQPWVNKBPMMQHOPLRDOUZYSZIPUIUG");

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
    msg.setTimeStamp(0.0385707588026);
    msg.setSource(60857U);
    msg.setSourceEntity(156U);
    msg.setDestination(46033U);
    msg.setDestinationEntity(80U);
    msg.number.assign("RHRLOOFUITAEBSUQRXNMHESVWGDEAMZBXKUTPYTWLABLJCYVFXEXXRSACXZHBGPSXRAVTWSAIIDQFYVNPXPBCLQYUKSMVWVDFBRUNTGUQNFPJKEPKJWZVCVOXBYCRMNJFFYYMEGKHUIDSSPHRTSIJOV");
    msg.timeout = 48644U;
    msg.contents.assign("SWLEVTWSHCWXTGLJMULOEFHFYFRKNSXSGCNPSJTPZRMFWIUVTNFNFOQCIAYOOEBKSRPZUHLKZMCXLOQGIVYIJDOCQDPVBWQFXDKRWCTJTMRJ");

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
    msg.setTimeStamp(0.777719755291);
    msg.setSource(12615U);
    msg.setSourceEntity(40U);
    msg.setDestination(1376U);
    msg.setDestinationEntity(233U);
    msg.seq = 4289697449U;
    msg.destination.assign("MFUTDHSEDPYAJNBUVWAHPTOHMMJARTWIYRBCBWNSIXAHRUEQOGXRIEMCUKXPTZUFJRBCNWIVFEPZIDYCELOMJSYNSLNPVVFGLIMOUWRXCGMZCWVGDQTCGQGXLTAQGQKZDDFANVDYTHNNN");
    msg.timeout = 25070U;
    const char tmp_msg_0[] = {100, -53, -111, -102, -89, -12, -74, 16, 93, 86, -73, 58, -104, 56, 89, -22, 19, -75, -83, 103, 46, 8, 16, -52, -38, -69, 92, -122, 64, 8, -94, -50, 17, 34, 28, -126, -35, -76, 24, -21, -45, 103, -23, -117, 125, -82, 59, -115, -59, -57, -96, -37, 22, 48, 123, 64, -85, 111, -106, -14, -110, 50, 107, 33, 37, 44, -55, -49, 99, -37, 2, 26, -6};
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
    msg.setTimeStamp(0.373391440101);
    msg.setSource(20200U);
    msg.setSourceEntity(186U);
    msg.setDestination(33426U);
    msg.setDestinationEntity(90U);
    msg.seq = 1352644500U;
    msg.destination.assign("POBJFOSUAFZCDUBWGCMIPGGWJBITSUQAYEYVFBHUKVNGTPMBJLQRLWPQTMWFSTLWRVNYKKEZOTPUEEDZRRLDPKYDEMJSKZQOKENVKHXFJEHOJCUNXRCLDCDZPMFLSKNHSFMOUIITOWCTABPIILXBFVNQNECQQOJVIAHGWSBGMRMVKH");
    msg.timeout = 42727U;
    const char tmp_msg_0[] = {75, 65, 54, -87, 113, -67, -52, 63, 60, 63, -93, 124, 100, 79, -79, 126, 80, 119, -88, -22, 32, 8, 66, 40, -118, -64, -72, 25, 103, 1, -1, -57, 37, -73, -12, -18, 104, 57, 45, -20, -111, -103, 56, -88, 106, 41, -61, -12, -34, -18, -46, -54, 59, -105, 82, -54, -85, 101, 18, 89, -122, -80, 53, 28, -65, 70, -4, 6, -56, 36, -94, -87, -5, -2, -99, 7, 25, -44, 107, -122, -27, 85, 52, -77, -55, 98, -23, 90, -43, 78, 126, -17, 81, -66, 102, -47, 8, -90, -98, -74, 86, 20, -102, -107, 103, -43, -30, -83, 38, -26, 1, 114, 62, -69, -116, 12, 46, 105, -128, -26, -60, -5, 41, 33, 41, -107, -86, 22, 50, -48, -127, 6, 24, -74, -13, 35, -84, -56, 87, 49, -75, 88, -84, 29, -79, 110, -78, -120, 113, -83, 3, -118, 82, -26, 75, -22, 14, 12, -124, 111, 46, -6, 12, 86, -102, 12, 124, 118, -30, 45, -103, 2, 65, -121, 121, 79, 116, -25, -108, -90, 6, 113, -97, -104, 124, -30, 39, 81, -22, -37, 89, 76, 87, 11, -99, 40, -13};
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
    msg.setTimeStamp(0.519564977543);
    msg.setSource(23528U);
    msg.setSourceEntity(4U);
    msg.setDestination(20939U);
    msg.setDestinationEntity(19U);
    msg.seq = 4043205735U;
    msg.destination.assign("YGOUOWXZOAZRUCTMVXMJZKCAQQLAUDALYTFACKVLFNGXPCENCAYVSQLVZADTBKKUALITVGRPFKPCCSZIMJJKNFSYHXTHOIHHMACUUUJQMMMDWVEUFWXQYTUWVJERXIXCQWROZPINKDT");
    msg.timeout = 39239U;
    const char tmp_msg_0[] = {-97, 98, -12, -126, 0, 8, 18, 70, 46, 121, -103, -75, -107, -63, 115, -74, 78, -86, -73, -123, -4, 81, 28, 52, 1, -106, -17, -65, -96, -21, 119, -2, 65, -69, 19, 41, -43, 6, 57, 46, -84, 23, -61, -115, 5, 66, -113, 17, 98, 88, 109, 112, 82, 27, 48, -94, 92, 107, -105, 57, -22, 90, -48, -87, -19, -91, 118, -10, -49, -63, -32, -123, 16, 8, -101, 28, -61, -115, -93, -21, -5, 50, -58, -121, -58, -59, 56, -126, -82, 111, -1, -71, -82, -62, 126, 89, 32, -56, 36, -16, 64, -40, -7, 39, -3, 57, 106, -93, -80, -88, -66, 42, -72, 45, -24, -78, 29, -102, -79, 119, -37, 1, 104, -55, -47, -112, 82, -77, 5, -111, 59, 106, -51, -30, -95, -99, -33, -49, -91, -126, -30, -80, 67, -108, -121, 123, 39, 82, 77, 122, -11, -28, 110, 26, 105, 72, 73, -79, -4, 70, -46, 85, 58, -85, -31, -104, -99, 99, 4, -95, -24, 31, 93};
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
    msg.setTimeStamp(0.234902275075);
    msg.setSource(53289U);
    msg.setSourceEntity(115U);
    msg.setDestination(33934U);
    msg.setDestinationEntity(49U);
    msg.source.assign("XOCIQEGWFVICXKQJMSHTDHLHIVEYXEEOJVEFMSTOPNMWNXPBRNYMAGZOXQVAXJOKNCNABFLTEXMVZIFLJOGIYTEWAEPHQOCSCHVRKBPUUGPADWJECUVDTYHPMCZIDIZWJQVKQQAKUHLPJARTFAGOZUYTROCWDVXKHADLZGNGQRGUDINLJUPRXFHDNTRRLKRIRYISKBSYSZPYQFUBDQWVLTFGBGWOBZ");
    const char tmp_msg_0[] = {13, 21, -30, -65, 71, -42, 25, 93, 105, 93, 92, -10, 13, 24, -57, -45, -110, -44, -47, 44, 42, -83, 116, -104, -13, 81, 61, -64, -15, -67, 36, -34, -34, -45, -75, -9, -96, -116, 115, 108, -31, 9, -127, 101, -39, 49, -115, 120, 11, -107, 14, 124, -21, -13, -128, -95, -16, 74, -18, 105, -58, -81, -33, -38, 17, 50, -39, 55, 54, -36, -39, -95, 40, -54, -9, -118, -15, 31, -119, 82, -20, 126, 86, -25, -19, -68, 95, -82, -68};
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
    msg.setTimeStamp(0.362946871807);
    msg.setSource(11953U);
    msg.setSourceEntity(222U);
    msg.setDestination(31682U);
    msg.setDestinationEntity(76U);
    msg.source.assign("LLFFEGYPCJM");
    const char tmp_msg_0[] = {-79, 90, 111, 57, -119, 55, 25, -86, -66, -55, 49, 93, -85, 81, -93, 101, 60, 12, 125, -70, 100, -91, -94, -12, -29, -35, 45, -57, -34, 120, -80, 91, -103, 96, 36, -8, 6, -12, -41, -78, -42, -32, 70, 72, -74, 31, 38, 115, -45, -114, 124, -9, -67, -24, 102, -51, 98, -117, -107, 120, -43, -73, 94, -97, 17, -62, -84, -97, 18, 42, 13, 122, -98, 97, -101, -49, 16, 105, 54, 10, -14, 3, -124, -25, 101, -52, 107, 98, 36, -120, -60, -1, -37, 1, -114, 94, 53, -86, -95, 59, -21, 101, 69, 1, 57, -92, -112, -88, -87, 77, -55, -80, -87, 52, 81, 81, -13, 31, -106, -27, -25, 52};
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
    msg.setTimeStamp(0.374062819403);
    msg.setSource(40838U);
    msg.setSourceEntity(63U);
    msg.setDestination(46539U);
    msg.setDestinationEntity(130U);
    msg.source.assign("SMXMZDWSDGOKIBGMYSPORNOPWLRPDMCJOBBHZRZSSFERURZYFSAXGBGVFNQF");
    const char tmp_msg_0[] = {-21, 122, 14, -91, -67, 96, -21, 96, -39, 87, 21, -37, 20, -46, 45, -46, 78, -48, 75, 37, -81, 17, -26, 2, 87, 72, 38, 65, -121, 92, -87, -120, -54, 121, 104, -67, -128, -63, -63, 1, 110, -14, 59, -123, -1, -119, 113, -3, -21, -3, -54, 49, 81, -30, 93, -18, 61, -114, 15, 120, -20, -14, 124, -126, -77, -67, 18, -58, -48, -6, -64, -38, 37, -38, -1, 56, -76, -4, 105, -8, 44, -16, -79, -11, -127, -8, -24, 25, -115, -53, 1, 110, 41, 113, -18, 15, -4, -81, 90, -101, -92, -42, -82, -76, -19, -7, 79, 76, 55, 87, -115, 83, -100, -45, -48, -122, -24, -91, -15, 102, 4, -11, -104, -1, 54, -108, 0, -99, 112, 103, -105, 4, -118, 67, 38, -19, 65, -69, 37, -82, -8, -50, 89, -80, -66, 63, 69, 6, -109, 76, 30, -21, -60, -34, -128, -18, -78, 123, -38, -55, -93, 88, -99, 108, -84, -45, -117, -96, -25, 34, 80, 34, 63, -18, -36, 125, -112, 13, 37, -58, -15, 90, 39, 33, -64};
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
    msg.setTimeStamp(0.3836860081);
    msg.setSource(6926U);
    msg.setSourceEntity(62U);
    msg.setDestination(37007U);
    msg.setDestinationEntity(45U);
    msg.seq = 4065907057U;
    msg.state = 137U;
    msg.error.assign("PORUXDKTJBSFLFDDHVGJIOUTVDTBBYEAJJTTMKEEZTYXNMZZHMUDCHKKZWMMJNKCUFPFOWMPSXVWYQLFZWNLSPLQCVOWBFIHVRRSULNGSJYUBHNIHPJODIGTIEFTYBIYEWOKANAXWQNU");

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
    msg.setTimeStamp(0.110103841285);
    msg.setSource(39911U);
    msg.setSourceEntity(238U);
    msg.setDestination(44440U);
    msg.setDestinationEntity(199U);
    msg.seq = 1821760079U;
    msg.state = 119U;
    msg.error.assign("OMGICXZFXSSQTOHPNY");

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
    msg.setTimeStamp(0.375268375169);
    msg.setSource(3417U);
    msg.setSourceEntity(114U);
    msg.setDestination(26482U);
    msg.setDestinationEntity(176U);
    msg.seq = 1886734123U;
    msg.state = 225U;
    msg.error.assign("MGOZLKRPPKHOBBXKGQTXILWCNFPHKEYVYGSHXRTGZWRJPAESHRACBLRWIURUWLXDIKAMPNNMLQFZVXFGUJFUXTYVMFTUXYYCSGCJAMCXNZBOHIOKQAFZBDSTSFVJKGYNZEVAKMZSRJIWJLATUUKXDPGU");

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
    msg.setTimeStamp(0.697880884307);
    msg.setSource(16803U);
    msg.setSourceEntity(253U);
    msg.setDestination(10444U);
    msg.setDestinationEntity(96U);
    msg.origin.assign("LUJPUSNGMYCFZOUVKGDUVQGSFYIYZFINEMOUBTNYXJSHKXXBGDCFFPDKVLSELBASBLONAXYSWVQBJAIEMZORTVFXRJSTTZW");
    msg.text.assign("XIBINDGQDZALSBIZUOPUDNBKMPSYYUMVCIEARMRRGTORCEOUZJGYVLVDGVCJZXCLHETHXHYVYANHJMXVEKNUGSZXRIBAXHSTYKYUJXZCTFOXIKJBPNPNMKKLWQEGFQOAEDKCLTNYAPXFJKDMIQPVFNHHHLYMCGCBIDSHJAWAWFWTSTFWGBSWTUEVQLAWMOOCMJFNJYADIVTTQQULFFVDSUPPMLBNWQGZPIWBKXRODGLOZR");

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
    msg.setTimeStamp(0.536117497456);
    msg.setSource(37828U);
    msg.setSourceEntity(182U);
    msg.setDestination(60753U);
    msg.setDestinationEntity(211U);
    msg.origin.assign("CETOXGRUFKYTLCNUUIUXWTFTTWXZPXNGBSSJPJMGSCARVLBUIHFZVKFQMPGOLJODMRRKKFAYDSSEDRLIEONEBQXIILVHBLMIPYBRAVHDCMWCYZAFEBDGATZO");
    msg.text.assign("NBGPYFYIHGLCSDKAHLTVEAQIVCUCERJFXKALBTEMSYYCFDEXTKOXUBPBRSHHWOPHWEDPFJODGWAHRPERUQXMRBHIKNCNRBTZZAIRZIILNUYSJNNOFXPOFTKXQYIMVATYASTPKLIHOCZWKRFXVMP");

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
    msg.setTimeStamp(0.392745472273);
    msg.setSource(54486U);
    msg.setSourceEntity(92U);
    msg.setDestination(51303U);
    msg.setDestinationEntity(197U);
    msg.origin.assign("EMZVJCVSXXWRVKUCJBRWCFNHULSIPBZEQDBEVRREZMNKFVYQXQQWROYGLZLZWYCINMYZLKVWRTIOLJGQMSFBYGIEAQVHNFFFYXGOTXMJPSZANCQASRDINUUDACJOAGYSPSMKRVUFJZEUKYITBOKXRWLXGDOWPPGBPJMTAAHBEUXVPITTZOQGTHEAKRGMTHNQHGBUDLCILSWU");
    msg.text.assign("YUEZPQQCPNLTN");

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
    msg.setTimeStamp(0.802937428573);
    msg.setSource(19182U);
    msg.setSourceEntity(225U);
    msg.setDestination(33303U);
    msg.setDestinationEntity(138U);
    msg.origin.assign("OFSXFURHQFPJNXUZPXP");
    msg.htime = 0.768096071806;
    msg.lat = 0.748997533078;
    msg.lon = 0.218649574572;
    const char tmp_msg_0[] = {106, 27, -85, -78, -20, 40, -32, -122, -57, -27, 50, -89, 66, 112, 50, -46, 19, 77, -13, 99, -126, 41, 11, 106, 26, -35, -49, 75, -11, -9, -9, -16, 4, 72, 1, -49, -26, -94, -83, 104, 5, -12, 2, 63, -38, 17, -93, -123, 98, 66, 4, -122, 77, -95, 22, -21, -81, 77, -24, 98, -109, 60, 35, -81, -108, 23, 59, -88, 108, -91, -99, 77, -84, 19, 66, -1, -117, 28, -51, 46, -13, -13, -44, 86, 46};
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
    msg.setTimeStamp(0.315992497608);
    msg.setSource(34528U);
    msg.setSourceEntity(5U);
    msg.setDestination(15783U);
    msg.setDestinationEntity(79U);
    msg.origin.assign("HYVUXHUNQLHOKUHSBYFLAFWMRZHMXYKEEPAMIFDKRBFUAOKQCCTDTCXQONQGPKYONGXGSRWLGTSFRTEPEZKCKTO");
    msg.htime = 0.698314229506;
    msg.lat = 0.753034503513;
    msg.lon = 0.975689046509;
    const char tmp_msg_0[] = {80, -36, 59, -27, -46, -122, -6, -5, -13, 2, 43, 37, 67, 126, 43, 63, 32, 90, 124, 33, -50, 5, 86, 80, -53, -77, 50, 49, -43, 73, -30, 24, -98, -30, -45, -50, 52, 115, -40, 90, 42, 90, 26, -76, 99, -52, -50, -12, -66, -8, -68, -39, 33, -5, 94, -7, -89, -123, 91, -14, 112, 29, 38, 98, 31, -92, -96, 77, 114, 6, -54, 3, 26, 54, 65, 108, -38, 60, -12, 22, -54, -91, 96, -128, -110, -119, 100, 31, 23, -121, -79, 7, -119, 4, -40};
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
    msg.setTimeStamp(0.526522123355);
    msg.setSource(40429U);
    msg.setSourceEntity(179U);
    msg.setDestination(37882U);
    msg.setDestinationEntity(8U);
    msg.origin.assign("YVKCQCILNXHMPVWJICANYNQOOIFWJUNRLOWTYYMLNBTLYISDPAWPFCY");
    msg.htime = 0.588764882305;
    msg.lat = 0.814637121936;
    msg.lon = 0.470992208041;
    const char tmp_msg_0[] = {37, -53, 97, 6, -121, -110, 28, 29, 55, 125, 83, 16, -88, 33, 55, -57, 43, -13, -98, -109, -61, 50, 53, 104, -67, 0, -26, -86, -65, 73, -21, -5, 12, -85, -95, 67, -102, -85, 84, 77, -22, -60, -38, 13, -73, 103, 14, 14, -1, 35, 96, -32, -3, -100, 87, -31, 90, 45, 111, -1, 96, 110, 0, 0, -3, -55, -117, -66, -47, 41, -111, 120, 29, 108, 5, 76, 40, 107, -114, 43, -75, -74, 90, -21, 71, 7, -6, 52, -18, 26, -105, -125, 117, 60, 60, -41, 1, -87, -88, 76, -52, -37, 3, 104, -60, 25, 75, 26, -39, -49, -91, 95, 15, -26, 126, 20, -100, 67, -24, -122, -20, -96, -51, -113, 97, 47, -12, 96, 111, -74, 0, 99, 41, 67, -126, 53, -49, 53, 1, 90, -114, -66, -69, 26, 29, 24, 112, 26, -112, -42, -16, 125, -3, -76, 51, -71, 67, -3, -21, -105, -128, -50, 82};
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
    msg.setTimeStamp(0.885447628195);
    msg.setSource(42297U);
    msg.setSourceEntity(222U);
    msg.setDestination(54060U);
    msg.setDestinationEntity(231U);
    msg.req_id = 36823U;
    msg.ttl = 2946U;
    msg.destination.assign("NAZTSAMCRFOXCYSMBNNWJCQEWQHOVVMPYUZCQRRJBPPRIKTHSMRNZYGAXBVRYTEUCWDNXGDJPGOBEFZYKBUSMSPZTTUCKFOXGJDLJBLEYTDQXFVMFVLNHAJQEXJHNCFJWSKQSAFKAVKGOZWRRGYWLLIGUDWLKUEHIG");
    const char tmp_msg_0[] = {1, -104, -49, -123, 111, 93, 33, 0, 68, -92, 65, -59, 81, -96, 21, 28, -53, -87, -87, -43, 16, 23, 8, 104, 92, -37, 11, 124, 59, 24, 28, -42, 123, 106, 49, 19, 120, 119, -112, 29, 100, 52, -83, -20, 121, -69, -3, 51, 8, 78, -51, -34, 124, 70, -79, 89, 112, -118, -102, 20, -10, 32, -68, -71, 123, 106, -48, -99, 91, 55, -17, 7, 57, -88, -58, -4, -33, -65, 126, 87, 78, 85, -37, 110, 74, -2, 60, 123, 98, -109, 56, 102, 4, 126, 108, -103, 49, 5, -68, -44, -33, 67, 114, 22, 9, 30, 90, 69, 33, -63, 51, -122, -102, -96, 105, 89, 4, -6, -22, -103, -26, 68, 48, 73, 46, 31, -104, 114, 79, 85, -127, -83, 124, 118, 88, 20, -45, -20, 28, 92, 29, -121, 2, -119, 117, 106, 120, -33, -54, 111, -125, -66, 5, 92, -101, 0, -12, -44, -108, 100, 88, -27, -125, 101, -88, 26, -30, 69, 94};
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
    msg.setTimeStamp(0.599147199744);
    msg.setSource(37253U);
    msg.setSourceEntity(9U);
    msg.setDestination(29486U);
    msg.setDestinationEntity(144U);
    msg.req_id = 31143U;
    msg.ttl = 3329U;
    msg.destination.assign("QWSCRAUBCIKZJULXPQYPIENXDJDLSCZOPFRUXPAMTZSBEIZJSLCZMFKFDKZTLMJXGUFBAMVKKJFPNAXUTSGYMLSJQCMVICXSYAONNJOWWDGRQAHFDUXVCRZNRVHIWCETPEJHONEOPYNBKEQKJGETZWVTWRDTTGGUXXHOBMNIBQFFDZDMW");
    const char tmp_msg_0[] = {0, 114, 65, 55, -29, -12, -39, -106, 78, -6, 40, 93, 10, 37, 69, 112, 111, 108, 74, 99};
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
    msg.setTimeStamp(0.388909567854);
    msg.setSource(41106U);
    msg.setSourceEntity(144U);
    msg.setDestination(37538U);
    msg.setDestinationEntity(103U);
    msg.req_id = 51423U;
    msg.ttl = 4196U;
    msg.destination.assign("GXCJWDKAEXWYTOGUQENNQQIBXLPEZHCPYRTKBGRWSUSHIFRTVVKUZGLCABUUDW");
    const char tmp_msg_0[] = {26, 61, 31, 47, -77, 19, 40, 92, -122, 70, -118, -107, -68, -14, 55, 27, 40, -91, -95, 82, 44, -41, 25, -27, 28, 118, 104, -16, 90, 28, 34, -1, -114, 5, 17, -42, -19, 26, 88, -85, 68, 63, 26, 75, -26, 39, 2, -115, -109, -10, 80, -9, 33, -115, 65, 30, -83, -78, 20, -113, -2, -53, 105, 64, 118, 88, 82, -16, 122, -42, 64, 20, 14, -59, -3, 2, 34, 121, -33, -102, 77, 60, 12, 77, 68, 84, -8, -13, 89, 72, -2, 40, 80, 80, 5, -42, -25, -112, -94, -61, 90, -120, -80, -81, 30, 107, -8, 34, 16, 70, -8, -66, 116, 75, 79, -97, -44, 29, -60, -103, -49, 36, 39, -70, 87, 31, -102, -112, 13, 69, -95, -32, -103, -43, -65, -33, -110, 30, 107, -91, 12, -39, 6, 121, -27, 13, 36, 55, 117, -127, 100, 66, -14, 73, 51, 41, -106, -82, -39, 55, -11, -119, 39, -1, 16, 91, 91, 35, -43, -13, -79, -60, -87, -69, 77, 85, -77, 49, -24, 69, -119, 11, -106, 0, -119, 1, -74, 124, -15, -125, 9, -34, 14, -99, 108, 44, 13, 90, 64, 88, 113, -54, 27, -1, 43, -14, 2, 13, 41, 77, -26, -52, 90, -74};
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
    msg.setTimeStamp(0.558082297243);
    msg.setSource(63436U);
    msg.setSourceEntity(76U);
    msg.setDestination(62852U);
    msg.setDestinationEntity(42U);
    msg.req_id = 58131U;
    msg.status = 253U;
    msg.text.assign("NGQDBVYTNRDUPHXXEAQHLXIZGSAOBCECQAVHZEYHIJARTBLRMNVFIUINMEWPCGJIROTXPBHBSUQUOHUXYCJLVQEDDKKZCYMMRSURAKQCVKUPKKWSLPWHOPMQBQBJTHGXTBTJZJSDGV");

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
    msg.setTimeStamp(0.0990169261733);
    msg.setSource(6047U);
    msg.setSourceEntity(105U);
    msg.setDestination(10921U);
    msg.setDestinationEntity(135U);
    msg.req_id = 6891U;
    msg.status = 1U;
    msg.text.assign("USNIXZUBSRQHJRVOIWWOPEAMRHHUDQUOAMTAYHGKMZAPROJMCDQXDTYUVHREYKCOSKXTXBGRXEUWHLBBLYBFASJFQMFITJFNHSKHRVYNZUTZIWQMPVPNVOMRBWASLFEGLJXKKGDNHNFGIPJBWRPCFODAYTLIEFDZCNCEBFICZXPTSYQMJUXKNKMHOWA");

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
    msg.setTimeStamp(0.811124824671);
    msg.setSource(13533U);
    msg.setSourceEntity(162U);
    msg.setDestination(37910U);
    msg.setDestinationEntity(207U);
    msg.req_id = 56946U;
    msg.status = 143U;
    msg.text.assign("BLCTKFTANFJCOMBJNUKTWQHODMTVYPPDKOIKRZBTPIOHRGG");

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
    msg.setTimeStamp(0.507615046374);
    msg.setSource(1756U);
    msg.setSourceEntity(116U);
    msg.setDestination(63590U);
    msg.setDestinationEntity(136U);
    msg.group_name.assign("GBFIZJHLNAYXTQQZUKBSYVBABWHXELXDAHJYOEMCIXUKJNLZHJMDSELROZBHGSPOWUEDCSPQEPFUOGSPINSVGFRDKOMPYGBKULLFIEPGEQQTNGBZFKEDXTQWR");
    msg.links = 1033477318U;

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
    msg.setTimeStamp(0.232400329055);
    msg.setSource(940U);
    msg.setSourceEntity(215U);
    msg.setDestination(65055U);
    msg.setDestinationEntity(33U);
    msg.group_name.assign("TDMLQDPRCCSWCYHCEXTHMOCZSOUGTRASKUCNVTIWUJGDMBAFYKNSQLA");
    msg.links = 2248245540U;

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
    msg.setTimeStamp(0.416558768204);
    msg.setSource(61772U);
    msg.setSourceEntity(203U);
    msg.setDestination(36156U);
    msg.setDestinationEntity(231U);
    msg.group_name.assign("KXQUPKWTFIYGCCLJOHVEDJIDDSLGWMPMMRGXWRAMHQOROCZFTVIMUJ");
    msg.links = 3094190352U;

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
    msg.setTimeStamp(0.706167041484);
    msg.setSource(8806U);
    msg.setSourceEntity(34U);
    msg.setDestination(23660U);
    msg.setDestinationEntity(243U);
    msg.groupname.assign("XYUQRYMRELXPFLCEFTFDRGCYVZIDDHBPRQUIECJHQQVYGVFOWLIQEJAIAJKMQITTWTEURTJZYDRVNQCMWWJYANAOGSPANPJHFUWTTNZPDVBOBKGBKEHIELHNYLSRLCPXCXZZYADTSEURXFJPSJOWCBMQKIXGVKLNYNIQHAMSWCKNPAIGPSFWGDJKFDYHDTLUMBDRVOZHMH");
    msg.action = 126U;
    msg.grouplist.assign("FCLEASKUCZXJGKBWKTGQBCUUFJCORRMYGGOQTQNTOZWJQXBLOMKTLYYZIBXMDENTEHQLRDJPUHBJIVAGDTFNCJKVSSNMOILXPEYFXXDLWVSEMWZAEKDGSFNWCVLFYPUEYCXRBXAXSOKSRPYVHDHIFROANZPWZPPHBTRDLQIFVOSTKPGBNWZHADRUVJYQHVUOIKPJCUJMRFENCTMIILMUUNMELABGVQMQIHOTXFCZQRGZISPZWYEDASJHNA");

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
    msg.setTimeStamp(0.155287623903);
    msg.setSource(1916U);
    msg.setSourceEntity(192U);
    msg.setDestination(16797U);
    msg.setDestinationEntity(16U);
    msg.groupname.assign("YXHRVIEKJMUJCYDLQYNQXKUALUSHNLQRSITBEFBJYDKREOASWAMSAWMVQCMLOPCZKQWMDCODTZDOJYGBMKVXLXTXWMWBOHUCQXKXA");
    msg.action = 168U;
    msg.grouplist.assign("TKNLWVNWVQAMVYQSRHUOHDYMYMJOQJWSUFYZMJNTRMOFWHLZFMXFGALOCUFCBVGWGXGEREXJFCRLDAOYCWJDQWQEUEYUHSEJBMPRKTOQKHNLQDCTXBHF");

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
    msg.setTimeStamp(0.0256288104765);
    msg.setSource(13823U);
    msg.setSourceEntity(1U);
    msg.setDestination(9112U);
    msg.setDestinationEntity(16U);
    msg.groupname.assign("VGVEKTHUNTIMKJZJNBQOSOKRZBPYNORHWDQVLAGKCUPZOJLVPUHDHYJ");
    msg.action = 201U;
    msg.grouplist.assign("CSJNYJSDGRAVMYVQZYANDRIDNTZTSAQWWRZZNRSXTXSEUQGBFCBKWYFNPQMTZYLKKNOPIMXDWMOTVUHWZGRIPVCSNAGIURPELOQGHBEEXPXSPGVNJFHXDMBCHLEGVYYCKDBLOZNPJKHEVIHKJJHNELQISILAWEIWFYOPZWTLJXFODTJCUUJHMBUAFFHEUPAOTKCDVKYTWMWD");

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
    msg.setTimeStamp(0.959338008792);
    msg.setSource(56106U);
    msg.setSourceEntity(185U);
    msg.setDestination(57177U);
    msg.setDestinationEntity(146U);
    msg.value = 0.536724217649;
    msg.sys_src = 56139U;

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
    msg.setTimeStamp(0.452863957362);
    msg.setSource(61792U);
    msg.setSourceEntity(125U);
    msg.setDestination(18635U);
    msg.setDestinationEntity(113U);
    msg.value = 0.695495242619;
    msg.sys_src = 24758U;

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
    msg.setTimeStamp(0.543278152818);
    msg.setSource(34853U);
    msg.setSourceEntity(95U);
    msg.setDestination(13390U);
    msg.setDestinationEntity(35U);
    msg.value = 0.126360759627;
    msg.sys_src = 47347U;

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
    msg.setTimeStamp(0.0915109802255);
    msg.setSource(48811U);
    msg.setSourceEntity(26U);
    msg.setDestination(57071U);
    msg.setDestinationEntity(6U);
    msg.value = 0.854854549153;
    msg.units = 14U;

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
    msg.setTimeStamp(0.1181151732);
    msg.setSource(56894U);
    msg.setSourceEntity(146U);
    msg.setDestination(56456U);
    msg.setDestinationEntity(248U);
    msg.value = 0.704415838176;
    msg.units = 249U;

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
    msg.setTimeStamp(0.507582459393);
    msg.setSource(55989U);
    msg.setSourceEntity(70U);
    msg.setDestination(24182U);
    msg.setDestinationEntity(24U);
    msg.value = 0.108730115991;
    msg.units = 187U;

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
    msg.setTimeStamp(0.957255342701);
    msg.setSource(58495U);
    msg.setSourceEntity(62U);
    msg.setDestination(43572U);
    msg.setDestinationEntity(129U);
    msg.base_lat = 0.52350284076;
    msg.base_lon = 0.563374005652;
    msg.base_time = 0.776669383891;

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
    msg.setTimeStamp(0.462331087002);
    msg.setSource(5699U);
    msg.setSourceEntity(109U);
    msg.setDestination(4980U);
    msg.setDestinationEntity(174U);
    msg.base_lat = 0.967926363056;
    msg.base_lon = 0.440651191571;
    msg.base_time = 0.214167905574;
    IMC::HistoricSample tmp_msg_0;
    tmp_msg_0.sys_id = 58084U;
    tmp_msg_0.priority = -28;
    tmp_msg_0.x = 3430;
    tmp_msg_0.y = -20116;
    tmp_msg_0.z = 23026;
    tmp_msg_0.t = -30810;
    IMC::Pulse tmp_tmp_msg_0_0;
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
    msg.setTimeStamp(0.833308679554);
    msg.setSource(1631U);
    msg.setSourceEntity(17U);
    msg.setDestination(50854U);
    msg.setDestinationEntity(33U);
    msg.base_lat = 0.123698060115;
    msg.base_lon = 0.328107496825;
    msg.base_time = 0.290068524703;

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
    msg.setTimeStamp(0.951900994623);
    msg.setSource(11157U);
    msg.setSourceEntity(101U);
    msg.setDestination(37350U);
    msg.setDestinationEntity(56U);
    msg.base_lat = 0.431134689555;
    msg.base_lon = 0.844924353275;
    msg.base_time = 0.143838781175;
    const char tmp_msg_0[] = {-37, -117, 81, 124, 117, -55, -50, -22, 9, 118, -116, -14, 77, -124, 67, 0, -40, -65, -37, -19, 43, -110, -33, 97, 16, 3, 118, -92, -70, -52, -52, -79, 126, 18, 73, 45, -30, 61, -55, 101, -107, -96, -31, -5, 23, -41, -41, 76, -88, 113, -34, 66, -103, 1, -46, 11, 36, -84, -35, -87, -125, -125, -128, -39, 121, -76, 42, 4, 49, -97, -108, 33, 107, 33, -55, -100, 94, -82, -99, -52, 62, -6, 101, 104, 109, -53, 74, -50, 75, 43, 89, -17, 73, -53, -19, 32, 21, 3, -111, 107, 65, -32, 90, 12, -88, 51, 126, -123, 106, -110, -5, 55, -110, -94, -61, 5, -124, 65, 122, -90, -10, -119, -28, 82, 70, 91, 96, -120, -66, 23, 0, 55, 0, -52, 72, -40, 80, 33, 16, -26, 119, 55, 81, 50, 79, -42, -109, 35, 9, -127, -92, -10, 34, -111, -83, 54, -115, -75, 93, 76, -28, 88, -113, 80, 36, 0, -112, -50, -86, 3, -67, 28, 124, 39, -93, 22, -85, 82, 125, -61, 44, 29, 90, -29, 108, -42, 19, -35, -19, -122, -5, -8, -1, 83, 89, -28, 57, 2, 70, -58, -40, 32, 106, -14, 30, 96, -46, 51, 74, 85, 92, -26, 40, 102, -49, 50, 94, -63, 97, 95, -90, -98, -18, 70, 104, 1, 11};
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
    msg.setTimeStamp(0.394653264945);
    msg.setSource(5623U);
    msg.setSourceEntity(208U);
    msg.setDestination(43084U);
    msg.setDestinationEntity(78U);
    msg.base_lat = 0.17501448649;
    msg.base_lon = 0.733875068546;
    msg.base_time = 0.788239616319;
    const char tmp_msg_0[] = {-4, 68, 87, -47, 28, -53, 109, -44, -6, -71, -62, 28, -24, 111, 31, 123, 32, -34, 110, -75, 32, 82, 102, -113, 118, 100, -122, -81, -119, -87, 6, 3, -8, -125, -61, 99, -39, -82, 78, -97, -5, 31, 13, 66, -18, -117, -40, 34, -83, 75, -17, 3, 73, -12, 43, -61, -4, -87, 121, 115, 67, 123, -54, -52, -122, -119, 47, -31, 100, -115, 104, 79, -61, 63, -107, -101, 67, -70, -50};
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
    msg.setTimeStamp(0.512465770788);
    msg.setSource(13890U);
    msg.setSourceEntity(75U);
    msg.setDestination(5125U);
    msg.setDestinationEntity(28U);
    msg.base_lat = 0.247648974342;
    msg.base_lon = 0.821604742332;
    msg.base_time = 0.84575151627;
    const char tmp_msg_0[] = {-108, 87, 66, 14, -65, -3, -119, 107, 114, -84, 119, -19, -83, 39, -22, 25, 66, -9, -39, 15, 19, -81, 25, 71, 42, -56, 113, 96, -111, -6, -87, -42, -128, -92, -97, 58, 26, -81, 119, 118, 84, 113, -11, -14, -72, 37, -94, 46, -103, 33, 69, -1, 37, -128, 27, -77, -10, 39, -17, -103, -36, 119, -102, -89, 69, -110, -25, -74, -20, 124, 23, -118, -126, -62, -65, -113, -35, -85, -109, -77, -102, -47, 23, -35, 122, -103, 23, -7, -63, -110, -64, -96, -71, -120, -11, -20, 51, -74, -86, 110, -59, 125, 44, -47, -30, -118, -1, -122, -97, -40, -32, -104, -44, -93, 82, 27, -56, 66, 55, 94, 49, 61, 45, 36, 59, -110, -2, -51, -66, -85, -13, 71, 1, -77, 91, 45, -39, -121, -58, 27, 95, 68, -70, -5, 34, -124, 69, 124, 2, -22, -88, 64, 126, -49, 81, -95, 116, 33, -34, -105, 6, -103, -57, 13, -3, -67, -89, -45, 32, 41, -49, -90, -58, -108, -4, 94, -92, 59, 84, -5, -31, 16, -31, -3, 103, -38, -55, 58, -104, -91, -34, 43, 68, 105, 70, 124, -13, 112, 33, -107, 116, 94, 12, 79, 59, 105, -98, -75, 70, -35, 66, 99, 113, 59, -62, 37, 55, 53, 24, 85, -118, -49, -68, -20, -27, 116};
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
    msg.setTimeStamp(0.981748679834);
    msg.setSource(35425U);
    msg.setSourceEntity(33U);
    msg.setDestination(37673U);
    msg.setDestinationEntity(250U);
    msg.sys_id = 50495U;
    msg.priority = -91;
    msg.x = -29408;
    msg.y = -11723;
    msg.z = 25556;
    msg.t = 4138;
    IMC::RemoteActions tmp_msg_0;
    tmp_msg_0.actions.assign("DIAOBYXEDPJQCOFCLDYOIGVEKFSLKMNZRTRUKFJROPAZHAHWQFLWIPSGFSLMYXWVRGAKNDDRJJSMRKWFXACWSQYKUQMWYJCFMYNGSTQZIUIZHHUVGUOQCLJMKUVOUTECTUHDLCPLOXZRTHSMKSTJDFBEHAVPBGAFBQWGRHXIDBYPVTEZITMMWPRXIWGKGHUPAWQNGJJVOZXBPYJCNCLTSNEXNLBABZAIYIEOEZMNVQQBVRSFNUXHOVCZDE");
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
    msg.setTimeStamp(0.992810140642);
    msg.setSource(61052U);
    msg.setSourceEntity(127U);
    msg.setDestination(33803U);
    msg.setDestinationEntity(254U);
    msg.sys_id = 37643U;
    msg.priority = 6;
    msg.x = -11835;
    msg.y = 48;
    msg.z = 4642;
    msg.t = -20676;
    IMC::WindSpeed tmp_msg_0;
    tmp_msg_0.direction = 0.465666690471;
    tmp_msg_0.speed = 0.773690475613;
    tmp_msg_0.turbulence = 0.447309600133;
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
    msg.setTimeStamp(0.18100644862);
    msg.setSource(62334U);
    msg.setSourceEntity(55U);
    msg.setDestination(13065U);
    msg.setDestinationEntity(46U);
    msg.sys_id = 35420U;
    msg.priority = 98;
    msg.x = -12870;
    msg.y = 13512;
    msg.z = 31181;
    msg.t = 25488;
    IMC::PulseDetectionControl tmp_msg_0;
    tmp_msg_0.op = 89U;
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
    msg.setTimeStamp(0.644098288065);
    msg.setSource(30143U);
    msg.setSourceEntity(75U);
    msg.setDestination(50481U);
    msg.setDestinationEntity(7U);
    msg.req_id = 30345U;
    msg.type = 79U;
    msg.max_size = 27954U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.89219951499;
    tmp_msg_0.base_lon = 0.236135737296;
    tmp_msg_0.base_time = 0.23758324753;
    IMC::HistoricSample tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.sys_id = 47557U;
    tmp_tmp_msg_0_0.priority = 66;
    tmp_tmp_msg_0_0.x = 22339;
    tmp_tmp_msg_0_0.y = -1360;
    tmp_tmp_msg_0_0.z = 7137;
    tmp_tmp_msg_0_0.t = 4566;
    IMC::Loiter tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.timeout = 525U;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.496802101475;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.992395438937;
    tmp_tmp_tmp_msg_0_0_0.z = 0.811796461784;
    tmp_tmp_tmp_msg_0_0_0.z_units = 10U;
    tmp_tmp_tmp_msg_0_0_0.duration = 33507U;
    tmp_tmp_tmp_msg_0_0_0.speed = 0.868678836556;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 165U;
    tmp_tmp_tmp_msg_0_0_0.type = 103U;
    tmp_tmp_tmp_msg_0_0_0.radius = 0.995350603722;
    tmp_tmp_tmp_msg_0_0_0.length = 0.442560315039;
    tmp_tmp_tmp_msg_0_0_0.bearing = 0.596957193419;
    tmp_tmp_tmp_msg_0_0_0.direction = 160U;
    tmp_tmp_tmp_msg_0_0_0.custom.assign("HUBATDOMZVLBIBRXUJRWAHSEUPHRQVRLYTQMLXMIRRZDYULKEJJGQCEBJVPMNDKWYRHXKVGGSYCBJOMGEWWQQFDJQKEMEEATGNBBSKVMGYCZFZOPYUXIZUPYSWLIJOTCKOYKLDIAUZJSHJOTYAOFVSHPCWNNIFMXKLWMPRRNIXKVHWZDPMXCWCNFQPDHWGSLCFSCQTYEAEDTQC");
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
    msg.setTimeStamp(0.250576089181);
    msg.setSource(12037U);
    msg.setSourceEntity(199U);
    msg.setDestination(16683U);
    msg.setDestinationEntity(22U);
    msg.req_id = 28736U;
    msg.type = 11U;
    msg.max_size = 53743U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.741145602729;
    tmp_msg_0.base_lon = 0.187738883457;
    tmp_msg_0.base_time = 0.969649485955;
    IMC::RemoteCommand tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.original_source = 1593U;
    tmp_tmp_msg_0_0.destination = 39065U;
    tmp_tmp_msg_0_0.timeout = 0.0882099440597;
    IMC::PowerOperation tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.op = 201U;
    tmp_tmp_tmp_msg_0_0_0.time_remain = 0.1402116579;
    tmp_tmp_tmp_msg_0_0_0.sched_time = 0.0822097997394;
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
    msg.setTimeStamp(0.339968497663);
    msg.setSource(27715U);
    msg.setSourceEntity(94U);
    msg.setDestination(26767U);
    msg.setDestinationEntity(18U);
    msg.req_id = 20961U;
    msg.type = 140U;
    msg.max_size = 10075U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.342760921;
    tmp_msg_0.base_lon = 0.0150313742857;
    tmp_msg_0.base_time = 0.650179928581;
    IMC::HistoricSample tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.sys_id = 50146U;
    tmp_tmp_msg_0_0.priority = -92;
    tmp_tmp_msg_0_0.x = -23112;
    tmp_tmp_msg_0_0.y = -18233;
    tmp_tmp_msg_0_0.z = 17562;
    tmp_tmp_msg_0_0.t = -24194;
    IMC::HistoricTelemetry tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.altitude = 0.0571177168483;
    tmp_tmp_tmp_msg_0_0_0.roll = 57521U;
    tmp_tmp_tmp_msg_0_0_0.pitch = 40576U;
    tmp_tmp_tmp_msg_0_0_0.yaw = 36316U;
    tmp_tmp_tmp_msg_0_0_0.speed = -5670;
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
    msg.setTimeStamp(0.914492887955);
    msg.setSource(50257U);
    msg.setSourceEntity(129U);
    msg.setDestination(6708U);
    msg.setDestinationEntity(213U);
    msg.original_source = 45563U;
    msg.destination = 11090U;
    msg.timeout = 0.072085254092;
    IMC::Power tmp_msg_0;
    tmp_msg_0.value = 0.584566249145;
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
    msg.setTimeStamp(0.676508065875);
    msg.setSource(18805U);
    msg.setSourceEntity(57U);
    msg.setDestination(112U);
    msg.setDestinationEntity(69U);
    msg.original_source = 63685U;
    msg.destination = 15395U;
    msg.timeout = 0.25531604602;
    IMC::UsblFix tmp_msg_0;
    tmp_msg_0.target = 62496U;
    tmp_msg_0.lat = 0.715334532665;
    tmp_msg_0.lon = 0.95591397347;
    tmp_msg_0.z_units = 94U;
    tmp_msg_0.z = 0.0528494366318;
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
    msg.setTimeStamp(0.778216041199);
    msg.setSource(25775U);
    msg.setSourceEntity(30U);
    msg.setDestination(15501U);
    msg.setDestinationEntity(17U);
    msg.original_source = 59126U;
    msg.destination = 32796U;
    msg.timeout = 0.373467282705;
    IMC::ObstacleState tmp_msg_0;
    tmp_msg_0.mmsi = 1410584322U;
    tmp_msg_0.lon = 0.877060948971;
    tmp_msg_0.lat = 0.512020169228;
    tmp_msg_0.x = 0.128192701413;
    tmp_msg_0.y = 0.404339951245;
    tmp_msg_0.psi = 0.0950915149359;
    tmp_msg_0.u = 0.333296593518;
    tmp_msg_0.v = 0.283279093317;
    tmp_msg_0.a = 0.722737984819;
    tmp_msg_0.b = 0.401231506511;
    tmp_msg_0.c = 0.654039169384;
    tmp_msg_0.d = 0.456998984758;
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
    msg.setTimeStamp(0.728098085801);
    msg.setSource(36619U);
    msg.setSourceEntity(51U);
    msg.setDestination(64097U);
    msg.setDestinationEntity(112U);
    msg.type = 250U;
    msg.comm_interface = 60033U;
    msg.model = 19184U;
    msg.list.assign("YIHYVPSDHLYXBGXPECYNPISYZCZAIMKDIJGPFQBXXWUJCATWYOWPBKNKVTWTUKIKMFLFVQENKWUIQZDMDVVINDWBNXRSDSSMXQHDLFPUEOFGPDAZATZZHBILFRFJBFYGGIUQYMAJPQHWADEHBRCJBHOCNORBKSNDNOGEZCSPLRWTNAYFUUGTKWRVXMXPHZJETLUUJRRVCVOCSWMEFEGHUOTASHGMLJJAIMZTV");

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
    msg.setTimeStamp(0.563078750224);
    msg.setSource(47116U);
    msg.setSourceEntity(148U);
    msg.setDestination(2716U);
    msg.setDestinationEntity(188U);
    msg.type = 196U;
    msg.comm_interface = 21802U;
    msg.model = 40666U;
    msg.list.assign("HTVCWGANBXABQFVFEAYTKAQJFGHASLIKTCCGHZQVKROMFSQKYAEZRDYYIEKDRZOHRUKTDXJGEWDHWDPRHBNIBCMQUJTBOJTFBZUFBXUOGQNIFEOODBKAKNYUXJHFSKFXERTUSPLCVRGUGIPWTSN");

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
    msg.setTimeStamp(0.399374321357);
    msg.setSource(61336U);
    msg.setSourceEntity(134U);
    msg.setDestination(52984U);
    msg.setDestinationEntity(101U);
    msg.type = 54U;
    msg.comm_interface = 35150U;
    msg.model = 33489U;
    msg.list.assign("TQKGQWZXMEHDBDCNHIOQDKEGJRRPNBUBYGNCPXNPEFNPZULQZSPUHBWZGZGBACLDWMSWNUKCLVVXJOVOEHXTWGCMATLJMGTHRVSTJRRCHFDCYSAWSPYDKXJWKJOI");

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
    msg.setTimeStamp(0.968729650656);
    msg.setSource(3486U);
    msg.setSourceEntity(143U);
    msg.setDestination(51412U);
    msg.setDestinationEntity(36U);
    msg.type = 61U;
    msg.req_id = 3462993223U;
    msg.ttl = 14610U;
    msg.code = 126U;
    msg.destination.assign("EXQQWEHDGAWQVYBUUWXNGTTZMSCRCZPJRAGLNYUSJYGGPOUDVYIBOTJUJ");
    msg.source.assign("GILXGEIKUCJUCOHCKVVDREZGPBWQBCUVFDRBPEAGFBJGPVDLUOXMWHYHVJWSGIMKWZDUEMEQJMIYBIFDJRERWTAOTSZSHUDERQLXYJXTFIDFRNMPQKMTIXSXBHUCXPJNBGXCKIT");
    msg.acknowledge = 10U;
    msg.status = 165U;
    const char tmp_msg_0[] = {43, 62, -85, 57, 2, 61, -111, 32, 110, 33, 54, 98, 43, 97, -17, 119, -32, 89, 50, -45, -45, 10, 100};
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
    msg.setTimeStamp(0.227985482704);
    msg.setSource(64599U);
    msg.setSourceEntity(19U);
    msg.setDestination(26663U);
    msg.setDestinationEntity(202U);
    msg.type = 106U;
    msg.req_id = 1494016519U;
    msg.ttl = 7896U;
    msg.code = 138U;
    msg.destination.assign("NDPRQGAFVUINASYJGBNCKTMEPAUSFWUSTYXHGEEBFOJVZIQPVMJV");
    msg.source.assign("CVCOQMFUUT");
    msg.acknowledge = 72U;
    msg.status = 110U;
    const char tmp_msg_0[] = {-16, 29, 79, 37, -6, 118, 106, -68, 120, -26, -1, -30, 105, -39, -122, -8, -74, 106, -93, 72, 49, -16, -116, -6, -70, -128, -95, -18, 123, 109, 121, -44, 59, -121, -82, -10, 85, -111, -104, -118, 108, -91, 94, 117, -116, 64, -31, 28, 55, 12, -85, 49, -49, 30, -125, -20, -58, -103, 1, 111, -22, -26, 72, -39, -18};
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
    msg.setTimeStamp(0.724382708412);
    msg.setSource(40495U);
    msg.setSourceEntity(149U);
    msg.setDestination(23144U);
    msg.setDestinationEntity(33U);
    msg.type = 95U;
    msg.req_id = 3507530524U;
    msg.ttl = 39171U;
    msg.code = 106U;
    msg.destination.assign("EGYYPTIKFMDRFYOZAXFEYKDYY");
    msg.source.assign("RBDONJHOVSHUPVHDJCKALBRSZFOAPDMXSEETQHPMPYKYBMYUWDUNTXACFOQZJQRAVQJESTDRBNEMCIANJZAHKPKTLGTYIBRDUCBPLXFVNXELMUELZOMDAISWCXINMZKZCIGWFCRNXLJOKWPATWKDYFSGVLFYEQTGQCCTJRIRWZIGLDQIGNDZWYUJLVEYEWAAFMROOMQYBXSYHXHELWCSUNBBQXGFITIHXMNSUTVKHOPHPGWJSBGV");
    msg.acknowledge = 188U;
    msg.status = 11U;
    const char tmp_msg_0[] = {83, -101, 34, -4, 96, 84, -67, -121, -85, 85, 73, -84, 79, -15, 56, -119, 102, -29, 66, -55, -93, 68, -66, -119, 61, 102, 101, -102, -36, 42, 8, -114, -68, -74, 102, 7, 25, 126, -89, 39, 100, 126, -23, 76, -52, -49, -110, -81, -40, -70, -61};
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
    msg.setTimeStamp(0.17120620615);
    msg.setSource(3688U);
    msg.setSourceEntity(156U);
    msg.setDestination(55987U);
    msg.setDestinationEntity(234U);
    msg.id = 208U;
    msg.range = 0.131353530581;

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
    msg.setTimeStamp(0.124379805482);
    msg.setSource(35962U);
    msg.setSourceEntity(105U);
    msg.setDestination(60161U);
    msg.setDestinationEntity(247U);
    msg.id = 120U;
    msg.range = 0.163672700803;

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
    msg.setTimeStamp(0.88060272886);
    msg.setSource(3751U);
    msg.setSourceEntity(138U);
    msg.setDestination(9518U);
    msg.setDestinationEntity(220U);
    msg.id = 195U;
    msg.range = 0.0981263640531;

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
    msg.setTimeStamp(0.435463242557);
    msg.setSource(35104U);
    msg.setSourceEntity(82U);
    msg.setDestination(45139U);
    msg.setDestinationEntity(114U);
    msg.beacon.assign("CHWTWRQPCWXSXBKDJRMJBWBGDJBBPMMYZAHZMYGUXCYNUOQPAWSSXVOAZQMLXLKBVLIBQKDYEPEVFKUSRNGHLZJNHKXOBBZHATTNVTWGYMIGYMAEMIHNVBFZQRUOXKXGDRIVNMLKSSIAUWGQFHUGDPLWHQXPNTZSUNWJSVPRPJQTHCLAEAJ");
    msg.lat = 0.118118146873;
    msg.lon = 0.474366114958;
    msg.depth = 0.321226272745;
    msg.query_channel = 195U;
    msg.reply_channel = 247U;
    msg.transponder_delay = 119U;

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
    msg.setTimeStamp(0.530629515917);
    msg.setSource(20953U);
    msg.setSourceEntity(84U);
    msg.setDestination(40670U);
    msg.setDestinationEntity(51U);
    msg.beacon.assign("WYRNAPLXCOIWGXVBYDAQQNVOXGLHYUDXNGYEKFJCPBJFZMLJSUHBTXQDRLCAKOYXKDMUGJIPOFOHLYSDVMSVZATJCWBUEWDEKJAKYETHUKUGQHTMQMUVRHMCLSCMICQNMVJPHSTBKRZLOAYQIEEHDUPNZXTBVQI");
    msg.lat = 0.802933669228;
    msg.lon = 0.235280528958;
    msg.depth = 0.395923903864;
    msg.query_channel = 212U;
    msg.reply_channel = 120U;
    msg.transponder_delay = 23U;

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
    msg.setTimeStamp(0.488910069912);
    msg.setSource(24862U);
    msg.setSourceEntity(9U);
    msg.setDestination(54745U);
    msg.setDestinationEntity(83U);
    msg.beacon.assign("PTBWYGGKAGSBOOLKEVSLXVCRO");
    msg.lat = 0.266640317129;
    msg.lon = 0.184088093121;
    msg.depth = 0.8547061843;
    msg.query_channel = 74U;
    msg.reply_channel = 202U;
    msg.transponder_delay = 170U;

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
    msg.setTimeStamp(0.244803822595);
    msg.setSource(61307U);
    msg.setSourceEntity(41U);
    msg.setDestination(4562U);
    msg.setDestinationEntity(253U);
    msg.op = 2U;

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
    msg.setTimeStamp(0.909076596421);
    msg.setSource(26629U);
    msg.setSourceEntity(238U);
    msg.setDestination(22911U);
    msg.setDestinationEntity(79U);
    msg.op = 195U;

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
    msg.setTimeStamp(0.623156072125);
    msg.setSource(14971U);
    msg.setSourceEntity(11U);
    msg.setDestination(51056U);
    msg.setDestinationEntity(81U);
    msg.op = 235U;

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
    msg.setTimeStamp(0.33960738874);
    msg.setSource(58281U);
    msg.setSourceEntity(32U);
    msg.setDestination(31722U);
    msg.setDestinationEntity(140U);
    IMC::TeleoperationDone tmp_msg_0;
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
    msg.setTimeStamp(0.168521402726);
    msg.setSource(55392U);
    msg.setSourceEntity(83U);
    msg.setDestination(55768U);
    msg.setDestinationEntity(76U);
    IMC::LowLevelControl tmp_msg_0;
    IMC::DesiredPath tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.path_ref = 1118039715U;
    tmp_tmp_msg_0_0.start_lat = 0.899925897063;
    tmp_tmp_msg_0_0.start_lon = 0.117887713968;
    tmp_tmp_msg_0_0.start_z = 0.181438006309;
    tmp_tmp_msg_0_0.start_z_units = 91U;
    tmp_tmp_msg_0_0.end_lat = 0.270821442088;
    tmp_tmp_msg_0_0.end_lon = 0.121789123635;
    tmp_tmp_msg_0_0.end_z = 0.864358969677;
    tmp_tmp_msg_0_0.end_z_units = 117U;
    tmp_tmp_msg_0_0.speed = 0.890621503676;
    tmp_tmp_msg_0_0.speed_units = 207U;
    tmp_tmp_msg_0_0.lradius = 0.941622219814;
    tmp_tmp_msg_0_0.flags = 188U;
    tmp_msg_0.control.set(tmp_tmp_msg_0_0);
    tmp_msg_0.duration = 31365U;
    tmp_msg_0.custom.assign("ZZQEYBPGKYSAQYMXOMLGLGJMOTPIOBYWNIZVDKIPQLUHUVNNDAHEEONYJRPRZUXSGLFGVBQJDWWGWTSKXEAITGZFKXSEAAQHSRAAYJTXUMIFCLEBPCNATGRJDCXTDWCBZZQCVFPRVNCXSBRRWNHUWCOSEPYDMFQBTSDTEIMLNHAITKSSHBBHGFQYFEMIPBLCYMZPWEWFNJJCORL");
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
    msg.setTimeStamp(0.81926372554);
    msg.setSource(7502U);
    msg.setSourceEntity(243U);
    msg.setDestination(32326U);
    msg.setDestinationEntity(194U);
    IMC::Event tmp_msg_0;
    tmp_msg_0.topic.assign("RZTSBWDXPGQQMFFBACCHXI");
    tmp_msg_0.data.assign("QIQOGNLLCKRKBNAKPXYPTNWAHNDGITQHDCUXWUZIVOOPVHVHITYSVNSMALHNKOA");
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
    msg.setTimeStamp(0.582145436088);
    msg.setSource(65026U);
    msg.setSourceEntity(180U);
    msg.setDestination(40153U);
    msg.setDestinationEntity(188U);
    msg.op = 247U;
    msg.system.assign("LKTALHUAAVQKWSBABTLZSTPOTFMBTMHEZMJYKFYMVMUMPNERKWGOUSQKJDSNXRBSMXYXFLQZPZDJZAHYTNFVZXQGLYBDYBOPPAFGKRLXYQGIPHNDWFYYSJENHERDIVIMOFKCREHITPTXQHURZHWJHPXLHLRVCSIFTBCFZDUWQIMTAOSDCYUGCOEUOWJCKJBZSQNBGBEPOUIIDCWEXRKGWJJVSVJAKICNOUNPCNDXDNLAR");
    msg.range = 0.510373105477;
    IMC::SetEntityParameters tmp_msg_0;
    tmp_msg_0.name.assign("CJIYBQWKCZIORIUVFVDUOPWUWKUSEFACOGLAKQIJXJJOGWNRKHZHCEQVOCRYKOQEJPUIQXOZBXFPWGTNSJCLKRKEGFTYBPLFECUHRXBQLSZLQXPNLWOBLZIZGMKCLFBNAKOMJBGVAYHJBZYLKXDPJENTPUGMRMQCAYOVINANYGEAZVGUARWXYJRBWPIUDPHDVSFHTNNSTUHSDCDBTMYIFTRVAGYXTMNQAWMDISEMMHSEV");
    IMC::EntityParameter tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("VTOMWWSWHOWAGYNJUHKMQIJUPDXYRQHVVVALOZGLHZELKMLPTJREUCBSHYDFFZDFTKXYLCWMITBLEDEWTJHQAFUUKDFYXQQBVKAOHDSCZHXRIMFRMONFVWWOFEACZSGTDUJUNJIJOPCZBKACYRNUYTVRUCCXQDIBJSXLQMDPWIOISAZSLBJIYGQLBZLNMSKNKYGATCPQIAEQ");
    tmp_tmp_msg_0_0.value.assign("JJHPJLQTSBHHQWQNOBHQNGIUSUPARWJXFVIDPYAHXLRCYMWPJTPIKVODUCAQXQSCMQFZXEGSRUGZNQMRRKBXRWHDMQFRCGWDGDZUSNWINBJOXGLZYXPNWHGCMAPDEWSKTJBENOPALVBBFVJYKVTWAHAFUJUNMKFSYLKQIEJDDLSVCWBYFLTEOLORMYPKKUSPYZNTHBDGVOLXFZHMEYOVRXIDENTKKGBROAEIIEMXZCZVAZSMCTAUUY");
    tmp_msg_0.params.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.0848195290913);
    msg.setSource(13337U);
    msg.setSourceEntity(228U);
    msg.setDestination(7843U);
    msg.setDestinationEntity(29U);
    msg.op = 209U;
    msg.system.assign("YVKTRQUBRCLFSXATWSVYHDCBNGPECOAPZWKQDEXIOBBCLGXPWVEADQJPEIURRPEXYILWYCWVPZKATGBLHQOKVGFSAJCDHHBIURRTOHTDUFJTSGLYDNLZZFGIHCJJYFSJKKHYQSWLDKFMZBWXID");
    msg.range = 0.00686570983416;
    IMC::EntityList tmp_msg_0;
    tmp_msg_0.op = 66U;
    tmp_msg_0.list.assign("PUHVSBZKFNFVVPLCQUUWDAGOJZMCWNVBPOXIGIDRPAEIECYKM");
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
    msg.setTimeStamp(0.84537769418);
    msg.setSource(7039U);
    msg.setSourceEntity(41U);
    msg.setDestination(41923U);
    msg.setDestinationEntity(240U);
    msg.op = 107U;
    msg.system.assign("OHYNUNGHSLZZFBSCZUCAHDMCXYCZBCDNKAUPNXROMFSFFQDCISEPLDOEESPKLYFAMTWJGPJIKKSGDBEIRCFJIKABVKTYYHBFYATROTYWVPDQIWWWMTGSOJXKMEKLEVYQXRQLHLGXIFRBCUHSPUEXZJRUPUVAUWMJMBNCIAKWMHDDHAZGHIGNOPRTPXTQOOGFZNQBNQEBZ");
    msg.range = 0.13845168224;
    IMC::CustomManeuver tmp_msg_0;
    tmp_msg_0.timeout = 55300U;
    tmp_msg_0.name.assign("KKOGMGAYRFTWJJKTVPWLAZDIAIKTZPCJHJSEQYZLSSYXVSMDRFAOZEQMVLWCAY");
    tmp_msg_0.custom.assign("RCQBCVOKUFYGIRGCZCTGJKAAWHHCJKTTQEZGNMAGKJVQBBFPPOIRGOMEQTDGXZRJDFNGONYPYSTDXZHLOZXVMBCBUNNEIEXTALUDKXYCLPFWHGKYBSMA");
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
    msg.setTimeStamp(0.926029344397);
    msg.setSource(54363U);
    msg.setSourceEntity(64U);
    msg.setDestination(6620U);
    msg.setDestinationEntity(133U);

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
    msg.setTimeStamp(0.0676929145737);
    msg.setSource(681U);
    msg.setSourceEntity(192U);
    msg.setDestination(9815U);
    msg.setDestinationEntity(147U);

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
    msg.setTimeStamp(0.527298956496);
    msg.setSource(38423U);
    msg.setSourceEntity(205U);
    msg.setDestination(39783U);
    msg.setDestinationEntity(226U);

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
    msg.setTimeStamp(0.86115726982);
    msg.setSource(49123U);
    msg.setSourceEntity(175U);
    msg.setDestination(48504U);
    msg.setDestinationEntity(236U);
    msg.list.assign("LAKGEBNMFGKHITUWSBLGRVYNORXTPHCOBQPPEFAWTDMKLDQFMQTNPCFJCMJXYAMNUVGOLETUSFYLSBEHPQXTZNXOBALGKIWHAHQEQXVAQAPBNYJQKRGDDUWDYENGJMVVSRGGFCBRJNHIVBEVCNTOEEJZSELZFSILBDZHPVKXXOIWZXDJFSWZKOYIQDMYUPVTWFX");

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
    msg.setTimeStamp(0.126973642228);
    msg.setSource(20266U);
    msg.setSourceEntity(159U);
    msg.setDestination(55232U);
    msg.setDestinationEntity(61U);
    msg.list.assign("HUCSTYRMGNARRLFEQEDSPNOSVSEMVDDHDEYPKXABAUJQXCYGCQADHLUVMLKJUMTHDJKZSIKOEDRRCAUBJOYCTWXPYNKHATPYWUUIPGUJHIZLVILQOWICQRTZPXXQOELF");

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
    msg.setTimeStamp(0.703107853106);
    msg.setSource(37611U);
    msg.setSourceEntity(74U);
    msg.setDestination(52017U);
    msg.setDestinationEntity(2U);
    msg.list.assign("ITRGLNSEVDVAKOXTMKYVGFMORYRHJCOMVOUSILFARMZWZBZPWNEKGIHPMSIYICFESGNTLHGNRHJBUAYRSGBVNEOBXUYUBVSETYNGXJECLFTZQEWTAYCDHGXHWPXWJOUDCJEZKKPOFXDBGJHUWWKUYINQCDYWUGFKZ");

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
    msg.setTimeStamp(0.473034058685);
    msg.setSource(57198U);
    msg.setSourceEntity(74U);
    msg.setDestination(41145U);
    msg.setDestinationEntity(29U);
    msg.peer.assign("AYVGTJCZWWXKDOKHBOXRUHVAAHBPEHOQSFSUGXRXINDXKWZRYBVZKDWRGQLIGAILKSVPMMQDLFPPLZFMUCYINDNGQHOFSFVTQBNGOFSEBUNITTSEYKZIPUNBPFLTUTJBRV");
    msg.rssi = 0.459457176941;
    msg.integrity = 36646U;

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
    msg.setTimeStamp(0.460070939994);
    msg.setSource(9138U);
    msg.setSourceEntity(221U);
    msg.setDestination(8688U);
    msg.setDestinationEntity(52U);
    msg.peer.assign("UOBQYVYNNTMJCRFVOGKLOVODUXKLMPNPDXPKQMZKGGLVFRUMFIOVOCVRHXENVZLJRCHIZPSLQFEDRAKDAPMJWATAWNZSTBPBEBXVXTGZNDMDTFFZFZJCXQOXPMMTKHWFAYVLYJQEHYELMOJCYJSGJBQRTBUHPRRBQWIXINCFLYOHEUBRYDBKRWUDDPNKJCCAHKANVGQSUYJ");
    msg.rssi = 0.984074189812;
    msg.integrity = 47354U;

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
    msg.setTimeStamp(0.844257360635);
    msg.setSource(55386U);
    msg.setSourceEntity(39U);
    msg.setDestination(7970U);
    msg.setDestinationEntity(60U);
    msg.peer.assign("ZGASDUAMIMCJUZOLDXLQTEPVNWZUNFHYTCNAOVDJSF");
    msg.rssi = 0.282560279032;
    msg.integrity = 29922U;

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
    msg.setTimeStamp(0.439771094269);
    msg.setSource(63749U);
    msg.setSourceEntity(20U);
    msg.setDestination(55512U);
    msg.setDestinationEntity(90U);
    msg.value = -22949;

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
    msg.setTimeStamp(0.506457317228);
    msg.setSource(23149U);
    msg.setSourceEntity(70U);
    msg.setDestination(53300U);
    msg.setDestinationEntity(54U);
    msg.value = -17370;

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
    msg.setTimeStamp(0.0860781038674);
    msg.setSource(4099U);
    msg.setSourceEntity(156U);
    msg.setDestination(49628U);
    msg.setDestinationEntity(153U);
    msg.value = -25383;

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
    msg.setTimeStamp(0.882500320661);
    msg.setSource(7507U);
    msg.setSourceEntity(83U);
    msg.setDestination(42467U);
    msg.setDestinationEntity(212U);
    msg.value = 0.293188538808;

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
    msg.setTimeStamp(0.072938628121);
    msg.setSource(8955U);
    msg.setSourceEntity(28U);
    msg.setDestination(38943U);
    msg.setDestinationEntity(56U);
    msg.value = 0.825301747707;

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
    msg.setTimeStamp(0.686322837891);
    msg.setSource(37538U);
    msg.setSourceEntity(77U);
    msg.setDestination(37676U);
    msg.setDestinationEntity(226U);
    msg.value = 0.372706769397;

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
    msg.setTimeStamp(0.94981075014);
    msg.setSource(56667U);
    msg.setSourceEntity(192U);
    msg.setDestination(19516U);
    msg.setDestinationEntity(50U);
    msg.value = 0.239315100775;

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
    msg.setTimeStamp(0.223032434487);
    msg.setSource(16892U);
    msg.setSourceEntity(165U);
    msg.setDestination(46130U);
    msg.setDestinationEntity(5U);
    msg.value = 0.400750143138;

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
    msg.setTimeStamp(0.141566645983);
    msg.setSource(42090U);
    msg.setSourceEntity(31U);
    msg.setDestination(50828U);
    msg.setDestinationEntity(11U);
    msg.value = 0.7943646754;

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
    msg.setTimeStamp(0.789591419551);
    msg.setSource(58151U);
    msg.setSourceEntity(29U);
    msg.setDestination(61643U);
    msg.setDestinationEntity(156U);
    msg.validity = 20833U;
    msg.type = 88U;
    msg.utc_year = 55778U;
    msg.utc_month = 58U;
    msg.utc_day = 230U;
    msg.utc_time = 0.725513305557;
    msg.lat = 0.482627115299;
    msg.lon = 0.580165066278;
    msg.height = 0.782535828877;
    msg.satellites = 239U;
    msg.cog = 0.764282905889;
    msg.sog = 0.14159053276;
    msg.hdop = 0.459627734544;
    msg.vdop = 0.404554642916;
    msg.hacc = 0.800114943763;
    msg.vacc = 0.488118128571;

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
    msg.setTimeStamp(0.483726306776);
    msg.setSource(49191U);
    msg.setSourceEntity(120U);
    msg.setDestination(58928U);
    msg.setDestinationEntity(119U);
    msg.validity = 117U;
    msg.type = 27U;
    msg.utc_year = 27145U;
    msg.utc_month = 70U;
    msg.utc_day = 198U;
    msg.utc_time = 0.372508979554;
    msg.lat = 0.887482965757;
    msg.lon = 0.714681244024;
    msg.height = 0.986515719652;
    msg.satellites = 54U;
    msg.cog = 0.417374545162;
    msg.sog = 0.938964954951;
    msg.hdop = 0.62568898024;
    msg.vdop = 0.17586376193;
    msg.hacc = 0.49451947422;
    msg.vacc = 0.182162385429;

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
    msg.setTimeStamp(0.494915848744);
    msg.setSource(12310U);
    msg.setSourceEntity(233U);
    msg.setDestination(15451U);
    msg.setDestinationEntity(117U);
    msg.validity = 14368U;
    msg.type = 105U;
    msg.utc_year = 13136U;
    msg.utc_month = 178U;
    msg.utc_day = 132U;
    msg.utc_time = 0.873291179288;
    msg.lat = 0.953503031501;
    msg.lon = 0.173745273987;
    msg.height = 0.0522152078486;
    msg.satellites = 110U;
    msg.cog = 0.553542839495;
    msg.sog = 0.602409245043;
    msg.hdop = 0.808874758937;
    msg.vdop = 0.560464015227;
    msg.hacc = 0.514982454014;
    msg.vacc = 0.105698183735;

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
    msg.setTimeStamp(0.546145031258);
    msg.setSource(31768U);
    msg.setSourceEntity(50U);
    msg.setDestination(64906U);
    msg.setDestinationEntity(185U);
    msg.time = 0.628293297122;
    msg.phi = 0.711791411795;
    msg.theta = 0.729368656684;
    msg.psi = 0.917429169622;
    msg.psi_magnetic = 0.460248303193;

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
    msg.setTimeStamp(0.345556439362);
    msg.setSource(43372U);
    msg.setSourceEntity(195U);
    msg.setDestination(34402U);
    msg.setDestinationEntity(79U);
    msg.time = 0.488581047612;
    msg.phi = 0.17058531973;
    msg.theta = 0.398890043079;
    msg.psi = 0.456631768923;
    msg.psi_magnetic = 0.493068850974;

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
    msg.setTimeStamp(0.548743124215);
    msg.setSource(6525U);
    msg.setSourceEntity(44U);
    msg.setDestination(25819U);
    msg.setDestinationEntity(251U);
    msg.time = 0.547306358346;
    msg.phi = 0.425321532999;
    msg.theta = 0.530502642012;
    msg.psi = 0.384316756413;
    msg.psi_magnetic = 0.26775345074;

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
    msg.setTimeStamp(0.350332017173);
    msg.setSource(19699U);
    msg.setSourceEntity(238U);
    msg.setDestination(50924U);
    msg.setDestinationEntity(79U);
    msg.time = 0.19517730263;
    msg.x = 0.728961276034;
    msg.y = 0.614682813159;
    msg.z = 0.681473895549;
    msg.timestep = 0.171457341759;

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
    msg.setTimeStamp(0.795324230202);
    msg.setSource(24119U);
    msg.setSourceEntity(106U);
    msg.setDestination(34892U);
    msg.setDestinationEntity(2U);
    msg.time = 0.708028205845;
    msg.x = 0.554176902808;
    msg.y = 0.269711210829;
    msg.z = 0.222783627087;
    msg.timestep = 0.507112039038;

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
    msg.setTimeStamp(0.624218671109);
    msg.setSource(58968U);
    msg.setSourceEntity(61U);
    msg.setDestination(15807U);
    msg.setDestinationEntity(247U);
    msg.time = 0.894947962967;
    msg.x = 0.439410515675;
    msg.y = 0.624805021379;
    msg.z = 0.969797540362;
    msg.timestep = 0.635617607181;

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
    msg.setTimeStamp(0.505326168313);
    msg.setSource(3688U);
    msg.setSourceEntity(131U);
    msg.setDestination(36487U);
    msg.setDestinationEntity(93U);
    msg.time = 0.837584312861;
    msg.x = 0.606938805593;
    msg.y = 0.393837808457;
    msg.z = 0.696035323002;

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
    msg.setTimeStamp(0.3358181303);
    msg.setSource(62819U);
    msg.setSourceEntity(189U);
    msg.setDestination(54753U);
    msg.setDestinationEntity(195U);
    msg.time = 0.321959397677;
    msg.x = 0.326178998039;
    msg.y = 0.922408693079;
    msg.z = 0.235381028609;

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
    msg.setTimeStamp(0.620054276835);
    msg.setSource(16285U);
    msg.setSourceEntity(218U);
    msg.setDestination(11828U);
    msg.setDestinationEntity(171U);
    msg.time = 0.698425360354;
    msg.x = 0.739150164505;
    msg.y = 0.722646574736;
    msg.z = 0.309515574649;

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
    msg.setTimeStamp(0.301896416613);
    msg.setSource(2816U);
    msg.setSourceEntity(55U);
    msg.setDestination(56013U);
    msg.setDestinationEntity(37U);
    msg.time = 0.393011714334;
    msg.x = 0.758563643218;
    msg.y = 0.530893254631;
    msg.z = 0.721257071601;

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
    msg.setTimeStamp(0.677179499807);
    msg.setSource(42773U);
    msg.setSourceEntity(24U);
    msg.setDestination(30171U);
    msg.setDestinationEntity(252U);
    msg.time = 0.21254314458;
    msg.x = 0.854278594229;
    msg.y = 0.60151902467;
    msg.z = 0.270378147564;

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
    msg.setTimeStamp(0.121495664293);
    msg.setSource(21027U);
    msg.setSourceEntity(134U);
    msg.setDestination(44273U);
    msg.setDestinationEntity(65U);
    msg.time = 0.213402334245;
    msg.x = 0.460446550039;
    msg.y = 0.137790133516;
    msg.z = 0.845952732331;

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
    msg.setTimeStamp(0.479544463297);
    msg.setSource(58305U);
    msg.setSourceEntity(249U);
    msg.setDestination(29064U);
    msg.setDestinationEntity(9U);
    msg.time = 0.258155241769;
    msg.x = 0.132214764017;
    msg.y = 0.191790865641;
    msg.z = 0.945634335719;

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
    msg.setTimeStamp(0.0752950391667);
    msg.setSource(20980U);
    msg.setSourceEntity(10U);
    msg.setDestination(16325U);
    msg.setDestinationEntity(83U);
    msg.time = 0.0871936735196;
    msg.x = 0.522032070657;
    msg.y = 0.70399282958;
    msg.z = 0.490303397202;

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
    msg.setTimeStamp(0.0354068226263);
    msg.setSource(7680U);
    msg.setSourceEntity(150U);
    msg.setDestination(28314U);
    msg.setDestinationEntity(3U);
    msg.time = 0.99545448604;
    msg.x = 0.360092784722;
    msg.y = 0.815865620659;
    msg.z = 0.503489528299;

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
    msg.setTimeStamp(0.502642626153);
    msg.setSource(6930U);
    msg.setSourceEntity(24U);
    msg.setDestination(32096U);
    msg.setDestinationEntity(49U);
    msg.validity = 42U;
    msg.x = 0.407199861219;
    msg.y = 0.993347812913;
    msg.z = 0.311541128326;

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
    msg.setTimeStamp(0.810726683982);
    msg.setSource(36943U);
    msg.setSourceEntity(43U);
    msg.setDestination(44565U);
    msg.setDestinationEntity(63U);
    msg.validity = 235U;
    msg.x = 0.969574049118;
    msg.y = 0.555456162926;
    msg.z = 0.0290050993938;

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
    msg.setTimeStamp(0.414881721534);
    msg.setSource(10586U);
    msg.setSourceEntity(246U);
    msg.setDestination(51482U);
    msg.setDestinationEntity(51U);
    msg.validity = 170U;
    msg.x = 0.728414540491;
    msg.y = 0.0858798762417;
    msg.z = 0.532338859022;

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
    msg.setTimeStamp(0.141267822474);
    msg.setSource(47806U);
    msg.setSourceEntity(177U);
    msg.setDestination(64843U);
    msg.setDestinationEntity(92U);
    msg.validity = 175U;
    msg.x = 0.670444440909;
    msg.y = 0.834420105234;
    msg.z = 0.635978532232;

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
    msg.setTimeStamp(0.0872199439104);
    msg.setSource(15126U);
    msg.setSourceEntity(185U);
    msg.setDestination(62282U);
    msg.setDestinationEntity(196U);
    msg.validity = 249U;
    msg.x = 0.809597810205;
    msg.y = 0.575904025224;
    msg.z = 0.190914989395;

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
    msg.setTimeStamp(0.842679708528);
    msg.setSource(44745U);
    msg.setSourceEntity(35U);
    msg.setDestination(30865U);
    msg.setDestinationEntity(216U);
    msg.validity = 144U;
    msg.x = 0.562226882128;
    msg.y = 0.697567897669;
    msg.z = 0.0632004743153;

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
    msg.setTimeStamp(0.266591923776);
    msg.setSource(45181U);
    msg.setSourceEntity(78U);
    msg.setDestination(62311U);
    msg.setDestinationEntity(185U);
    msg.time = 0.0779153832752;
    msg.x = 0.683831195035;
    msg.y = 0.156568312781;
    msg.z = 0.483199892987;

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
    msg.setTimeStamp(0.370027054191);
    msg.setSource(2713U);
    msg.setSourceEntity(179U);
    msg.setDestination(63006U);
    msg.setDestinationEntity(212U);
    msg.time = 0.673950260097;
    msg.x = 0.117779952447;
    msg.y = 0.547279552294;
    msg.z = 0.295555568397;

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
    msg.setTimeStamp(0.119342146025);
    msg.setSource(32807U);
    msg.setSourceEntity(141U);
    msg.setDestination(23494U);
    msg.setDestinationEntity(239U);
    msg.time = 0.160350355327;
    msg.x = 0.166441362185;
    msg.y = 0.546758556034;
    msg.z = 0.4095725851;

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
    msg.setTimeStamp(0.845254781523);
    msg.setSource(6855U);
    msg.setSourceEntity(23U);
    msg.setDestination(55995U);
    msg.setDestinationEntity(171U);
    msg.validity = 6U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.629557313056;
    tmp_msg_0.y = 0.406990889872;
    tmp_msg_0.z = 0.645071636253;
    tmp_msg_0.phi = 0.947821326781;
    tmp_msg_0.theta = 0.127177222723;
    tmp_msg_0.psi = 0.355783474639;
    msg.location.push_back(tmp_msg_0);
    msg.value = 0.575915817789;

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
    msg.setTimeStamp(0.932055325113);
    msg.setSource(18751U);
    msg.setSourceEntity(92U);
    msg.setDestination(37414U);
    msg.setDestinationEntity(14U);
    msg.validity = 131U;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.859264333614;
    tmp_msg_0.beam_height = 0.00480028335663;
    msg.beam_config.push_back(tmp_msg_0);
    msg.value = 0.329870365941;

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
    msg.setTimeStamp(0.815714152802);
    msg.setSource(64992U);
    msg.setSourceEntity(200U);
    msg.setDestination(32824U);
    msg.setDestinationEntity(40U);
    msg.validity = 15U;
    msg.value = 0.570883767388;

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
    msg.setTimeStamp(0.085135599397);
    msg.setSource(34900U);
    msg.setSourceEntity(190U);
    msg.setDestination(3569U);
    msg.setDestinationEntity(194U);
    msg.value = 0.572096791625;

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
    msg.setTimeStamp(0.963123025688);
    msg.setSource(57374U);
    msg.setSourceEntity(142U);
    msg.setDestination(41571U);
    msg.setDestinationEntity(243U);
    msg.value = 0.353825155908;

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
    msg.setTimeStamp(0.717611720518);
    msg.setSource(4395U);
    msg.setSourceEntity(157U);
    msg.setDestination(55628U);
    msg.setDestinationEntity(104U);
    msg.value = 0.983093123807;

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
    msg.setTimeStamp(0.37463652138);
    msg.setSource(54137U);
    msg.setSourceEntity(136U);
    msg.setDestination(59850U);
    msg.setDestinationEntity(174U);
    msg.value = 0.203808483308;

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
    msg.setTimeStamp(0.515598738848);
    msg.setSource(19372U);
    msg.setSourceEntity(69U);
    msg.setDestination(45167U);
    msg.setDestinationEntity(173U);
    msg.value = 0.312882397072;

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
    msg.setTimeStamp(0.888760462208);
    msg.setSource(24777U);
    msg.setSourceEntity(137U);
    msg.setDestination(28852U);
    msg.setDestinationEntity(112U);
    msg.value = 0.94737114557;

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
    msg.setTimeStamp(0.71411958539);
    msg.setSource(40205U);
    msg.setSourceEntity(109U);
    msg.setDestination(28109U);
    msg.setDestinationEntity(43U);
    msg.value = 0.411145438449;

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
    msg.setTimeStamp(0.103900388561);
    msg.setSource(25566U);
    msg.setSourceEntity(166U);
    msg.setDestination(39420U);
    msg.setDestinationEntity(249U);
    msg.value = 0.574734654232;

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
    msg.setTimeStamp(0.00449121770893);
    msg.setSource(40009U);
    msg.setSourceEntity(213U);
    msg.setDestination(52104U);
    msg.setDestinationEntity(230U);
    msg.value = 0.175419249646;

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
    msg.setTimeStamp(0.32740049535);
    msg.setSource(28464U);
    msg.setSourceEntity(26U);
    msg.setDestination(13375U);
    msg.setDestinationEntity(64U);
    msg.value = 0.388158237359;

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
    msg.setTimeStamp(0.815890075022);
    msg.setSource(41589U);
    msg.setSourceEntity(243U);
    msg.setDestination(13707U);
    msg.setDestinationEntity(111U);
    msg.value = 0.200457014977;

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
    msg.setTimeStamp(0.643396042549);
    msg.setSource(39277U);
    msg.setSourceEntity(49U);
    msg.setDestination(29436U);
    msg.setDestinationEntity(14U);
    msg.value = 0.837873073192;

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
    msg.setTimeStamp(0.584016002382);
    msg.setSource(14665U);
    msg.setSourceEntity(119U);
    msg.setDestination(42334U);
    msg.setDestinationEntity(138U);
    msg.value = 0.120178731158;

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
    msg.setTimeStamp(0.931625035951);
    msg.setSource(31841U);
    msg.setSourceEntity(100U);
    msg.setDestination(26378U);
    msg.setDestinationEntity(220U);
    msg.value = 0.92680919429;

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
    msg.setTimeStamp(0.0519703061453);
    msg.setSource(6131U);
    msg.setSourceEntity(14U);
    msg.setDestination(64420U);
    msg.setDestinationEntity(156U);
    msg.value = 0.454746037671;

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
    msg.setTimeStamp(0.953195302167);
    msg.setSource(28037U);
    msg.setSourceEntity(181U);
    msg.setDestination(62627U);
    msg.setDestinationEntity(121U);
    msg.value = 0.523879186887;

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
    msg.setTimeStamp(0.688560635435);
    msg.setSource(22298U);
    msg.setSourceEntity(184U);
    msg.setDestination(5143U);
    msg.setDestinationEntity(30U);
    msg.value = 0.288429349948;

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
    msg.setTimeStamp(0.100951331247);
    msg.setSource(25317U);
    msg.setSourceEntity(249U);
    msg.setDestination(37521U);
    msg.setDestinationEntity(136U);
    msg.value = 0.402587936679;

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
    msg.setTimeStamp(0.223956487538);
    msg.setSource(51027U);
    msg.setSourceEntity(188U);
    msg.setDestination(56486U);
    msg.setDestinationEntity(227U);
    msg.value = 0.520732917986;

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
    msg.setTimeStamp(0.199121576876);
    msg.setSource(60992U);
    msg.setSourceEntity(197U);
    msg.setDestination(32998U);
    msg.setDestinationEntity(93U);
    msg.value = 0.0234125105195;

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
    msg.setTimeStamp(0.554742944058);
    msg.setSource(64981U);
    msg.setSourceEntity(131U);
    msg.setDestination(9252U);
    msg.setDestinationEntity(77U);
    msg.value = 0.788959025966;

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
    msg.setTimeStamp(0.910288053937);
    msg.setSource(54315U);
    msg.setSourceEntity(123U);
    msg.setDestination(6498U);
    msg.setDestinationEntity(93U);
    msg.value = 0.917738747613;

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
    msg.setTimeStamp(0.622081427123);
    msg.setSource(3990U);
    msg.setSourceEntity(17U);
    msg.setDestination(63763U);
    msg.setDestinationEntity(216U);
    msg.value = 0.122367077446;

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
    msg.setTimeStamp(0.124528536405);
    msg.setSource(57178U);
    msg.setSourceEntity(79U);
    msg.setDestination(8932U);
    msg.setDestinationEntity(9U);
    msg.value = 0.818533361658;

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
    msg.setTimeStamp(0.113346916488);
    msg.setSource(15111U);
    msg.setSourceEntity(118U);
    msg.setDestination(58930U);
    msg.setDestinationEntity(89U);
    msg.direction = 0.36252407136;
    msg.speed = 0.170452535436;
    msg.turbulence = 0.174387473968;

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
    msg.setTimeStamp(0.152070106845);
    msg.setSource(27954U);
    msg.setSourceEntity(61U);
    msg.setDestination(16594U);
    msg.setDestinationEntity(93U);
    msg.direction = 0.0992956114194;
    msg.speed = 0.162071257943;
    msg.turbulence = 0.568427817935;

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
    msg.setTimeStamp(0.615857848388);
    msg.setSource(6773U);
    msg.setSourceEntity(178U);
    msg.setDestination(4110U);
    msg.setDestinationEntity(233U);
    msg.direction = 0.916924319311;
    msg.speed = 0.129628044798;
    msg.turbulence = 0.250517499785;

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
    msg.setTimeStamp(0.0894722683673);
    msg.setSource(61604U);
    msg.setSourceEntity(101U);
    msg.setDestination(4910U);
    msg.setDestinationEntity(175U);
    msg.value = 0.788010324757;

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
    msg.setTimeStamp(0.0165148710201);
    msg.setSource(18540U);
    msg.setSourceEntity(224U);
    msg.setDestination(16051U);
    msg.setDestinationEntity(160U);
    msg.value = 0.0190420752736;

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
    msg.setTimeStamp(0.429451378015);
    msg.setSource(23424U);
    msg.setSourceEntity(116U);
    msg.setDestination(3305U);
    msg.setDestinationEntity(112U);
    msg.value = 0.415129573949;

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
    msg.setTimeStamp(0.39634226283);
    msg.setSource(19729U);
    msg.setSourceEntity(115U);
    msg.setDestination(30866U);
    msg.setDestinationEntity(225U);
    msg.value.assign("CBWZMTHHAICLH");

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
    msg.setTimeStamp(0.189946436042);
    msg.setSource(65061U);
    msg.setSourceEntity(57U);
    msg.setDestination(14765U);
    msg.setDestinationEntity(76U);
    msg.value.assign("TWZRGWPITRSNHWNAHMXOAGSGMDXOAVAUZCXDDQEGZHPUQMFFYFUKERSGQQILOXUOJVCNZSKMBJOHWFOSERIOIEEJIKFHQTLJKKZBB");

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
    msg.setTimeStamp(0.370585335125);
    msg.setSource(11585U);
    msg.setSourceEntity(80U);
    msg.setDestination(15632U);
    msg.setDestinationEntity(139U);
    msg.value.assign("VRZOTKJQARCYNRMLDRONAEDWXDCWJHEIKVOBKEMCDPWVKSXJFJFOGQQBNVISUQWPBUDAEELVNOCZGZIHOAAKIUIWVRJXHCHRSDAGMSIGFLLJJQNXETILOSJQGJTCS");

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
    msg.setTimeStamp(0.0149807592641);
    msg.setSource(586U);
    msg.setSourceEntity(236U);
    msg.setDestination(7711U);
    msg.setDestinationEntity(2U);
    const char tmp_msg_0[] = {45, -85, -42, 77, 5, -77, 93, 117, 89, 90, -47, 36, -22, -11, -92, -123, -41, -124, -71, 125, 71, 91, -46, -27, -21, -64, -67, 38, -103, -40, -42, 98, 85, -32, -14, 59, -93, -83, 101, 32, 101, 77, -19, -3, 82, -2, -71, -105, -110, 105, 123, -29, 83, -24, -29, -104, 113, 10, -31, -55, -68, 93, -87, -97, -109, 2, 32, -64, 116, -34, -123, 32, -127, 82, -115, -100, -2, 26, -125, 6, -59, -112, 17, -61, 46, 125, 90, -75, -80, 7, 6, 99, -97, 14, -69, 44, -25, -57, 57, 124, 5, -122, 17, 46, -124, -84, -127, 104, 89, -118, -57, 25, 56, 90, 116, 121, 21, 94, 6, 40, -45, -2, -107, -39, 50, -29, -33, -117, 109, 3, 88, -35, 95, 14, 26, 41, 79, -9, 103, 62, 99, 26, 104, -78, -127, 36, 40, 73, -30, 92, -33, 46, -82, 110, -101, 33, -50, 1, -88, 58, -59, 0, 56, -51, -77, -33, 29, -43, -112};
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
    msg.setTimeStamp(0.156294945574);
    msg.setSource(14442U);
    msg.setSourceEntity(242U);
    msg.setDestination(27890U);
    msg.setDestinationEntity(103U);
    const char tmp_msg_0[] = {-83, 21, -83, -54, -114, 33, -37, 102, 97, 60, -109, -11, -17, -4, 65, -112, -12, -33, -17, -24, -69, -58, 6, 14, 93, -77, -119, 79, -97, -53, -117, -122, -120, -66};
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
    msg.setTimeStamp(0.38086980579);
    msg.setSource(20373U);
    msg.setSourceEntity(61U);
    msg.setDestination(20033U);
    msg.setDestinationEntity(163U);
    const char tmp_msg_0[] = {-23, 117, -81, 27, 56, 33, 10, 97, 90, -54, 110, 33, 123, -50, 44, 41, 43, 106, 54, -39, 126, -52, -23, 12, 76, 16, 87, -59, -126, 84, -78, 118, -94, -90, 36, 6, 119, -101, -51, 86, -12, -81, 47, -103, 96, -124, 78, 114, 87, 28, -49, -119, 16, 19, 89, 91, -58, 25, -103, 122, -55, -25, -116, 37, 100, 39, 12, 23, -106, 94, 88, 117, -94, -120, 114, -96, -48, 43, -104, -15, 99, -14, -69, 21, 75, 41, -37, -43, -100, -89, -117, -35, 42, -48, 123, -41, 50, -94, -8, -22, -122, -108, -84, -85, -61, -93, -60, 88, -61, -15, 57, -71, -13, -87, -72, 99, 76, 42, -54, 90, 47, 95, 122, 63, -99, -53, -76, -23, 16, -23, 110, 126, 120, 109, 120, 50, -69, 4, 17, 123, -93, -78, -22, -125, -105, -70, 18, 52, 110, -100, -25, 67, 67, 47, -37, 102, -61, 76, -68, -122, -78, 77, -122, -64, -47, -71, -115, 51, 113, -53, 45, -101, -14, 52, -17, -57, -27, 39, -93, -111, -79, -100, 77, -53, -82, 116, 113, -22, 121, -32, 77, -5, 71, 75, 68, 15, -82, 99, 61, -106, 50, 100, 69, 41, 76, 103, 109};
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
    msg.setTimeStamp(0.0805884800342);
    msg.setSource(26564U);
    msg.setSourceEntity(115U);
    msg.setDestination(24607U);
    msg.setDestinationEntity(110U);
    msg.value = 0.529278296217;

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
    msg.setTimeStamp(0.795892068252);
    msg.setSource(20364U);
    msg.setSourceEntity(53U);
    msg.setDestination(55713U);
    msg.setDestinationEntity(52U);
    msg.value = 0.119825348169;

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
    msg.setTimeStamp(0.526732527138);
    msg.setSource(21609U);
    msg.setSourceEntity(214U);
    msg.setDestination(53209U);
    msg.setDestinationEntity(98U);
    msg.value = 0.418647930062;

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
    msg.setTimeStamp(0.0844436318191);
    msg.setSource(33201U);
    msg.setSourceEntity(59U);
    msg.setDestination(18214U);
    msg.setDestinationEntity(91U);
    msg.type = 160U;
    msg.frequency = 2892807162U;
    msg.min_range = 57851U;
    msg.max_range = 61996U;
    msg.bits_per_point = 148U;
    msg.scale_factor = 0.373037043963;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.708766877813;
    tmp_msg_0.beam_height = 0.675095619914;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {-4, 45, 44, 97, -91, 57, -62, -25, -7, 59, 52, 98, 109, -116, 47, 115, -55, -66, -49, 12, 28, 7, -51, 90, -115, 44, 66, 78, -74, 115, 68, -72, 106, -72, -118, -2, -10, 61, 87, 117, 40, 24, 107, 23, 80, 74, 68, 73, 114, 91, -58, 74, 111, -12, 25, 62, -83, 24, 84, -22, 69, 59, -29, -117, -85, 111, 51, 98, 76, 93, -9, -109, -126, -72, 38, -112, -100, -116, 123, -6, -1, -125, 77, 66, -116, 36, -91, 60, -84};
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
    msg.setTimeStamp(0.701844076505);
    msg.setSource(15852U);
    msg.setSourceEntity(219U);
    msg.setDestination(44130U);
    msg.setDestinationEntity(14U);
    msg.type = 82U;
    msg.frequency = 2276508018U;
    msg.min_range = 35075U;
    msg.max_range = 60713U;
    msg.bits_per_point = 60U;
    msg.scale_factor = 0.543732251456;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.797893155206;
    tmp_msg_0.beam_height = 0.302812467672;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {-39, 33, 121, 6, -88, 27, 75, 21, -124, 41, -71, 113, 19, -32, -83, 85, 99, -35, -70, -65, 41, -84, 108, 2, 4, -47, -113, -71, -106, -101, 66, 93, -88, -78, -26, 95, 19, -71, 65, 116, 109, 26, -79, -61, 47, 126, -32, -108, 105, 118, -73, 40, 19, -98, 108, -120, 51, 94, 11, -49, 57, 93, 60, 44, -11, 74, 52, -7, -40};
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
    msg.setTimeStamp(0.803912993835);
    msg.setSource(61079U);
    msg.setSourceEntity(109U);
    msg.setDestination(30005U);
    msg.setDestinationEntity(37U);
    msg.type = 58U;
    msg.frequency = 354131437U;
    msg.min_range = 12924U;
    msg.max_range = 21208U;
    msg.bits_per_point = 216U;
    msg.scale_factor = 0.500571068064;
    const char tmp_msg_0[] = {24, -52, 68, 15, 36, -7, 84, 54, -46, -57, 44, -45, -93, 14, -103, -50, 28, 0, -57, -68, 95, 119, 48, 32, -18, -59, 13, 40, 7, 67, -7, -128, 100, 1, -22, -19, 80, -44, 26, 38, 77, 115, 23, -104, 95, 60, 6, -94, 57, 79, 60, -96, 21, -48, 82, 0, 99, -83, 17, -123, -78, 101, -17, -47, 55, -103, -109, 45, -27, -72, -90, -11, 19, 117, -40, -81, 59, -11, -91, -24, 88, 121, -73, -125, -127, -56, 106, -93, -116, 118, -77, 81, -34, 83, -105, 99, -21, 96, -101, 93, 81, -19, -79, 82, 55, 24, -96, -97, -37, 69, 51, 15, -81, -76, -19, -101, 15, 89, 68, -24, 60, -65, -14, 65, 23, 96, 65, 68, 27, -97, -42, 29, 27, -101, 33, -103, 11, -37, -42, 58, 112, 19, -108};
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
    msg.setTimeStamp(0.336676984002);
    msg.setSource(2759U);
    msg.setSourceEntity(161U);
    msg.setDestination(50458U);
    msg.setDestinationEntity(94U);

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
    msg.setTimeStamp(0.66399171824);
    msg.setSource(62156U);
    msg.setSourceEntity(6U);
    msg.setDestination(31279U);
    msg.setDestinationEntity(3U);

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
    msg.setTimeStamp(0.592255957576);
    msg.setSource(20074U);
    msg.setSourceEntity(70U);
    msg.setDestination(28229U);
    msg.setDestinationEntity(208U);

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
    msg.setTimeStamp(0.746259661553);
    msg.setSource(49903U);
    msg.setSourceEntity(78U);
    msg.setDestination(1027U);
    msg.setDestinationEntity(127U);
    msg.op = 162U;

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
    msg.setTimeStamp(0.558854179145);
    msg.setSource(35449U);
    msg.setSourceEntity(183U);
    msg.setDestination(20524U);
    msg.setDestinationEntity(197U);
    msg.op = 254U;

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
    msg.setTimeStamp(0.930457976362);
    msg.setSource(41273U);
    msg.setSourceEntity(163U);
    msg.setDestination(58752U);
    msg.setDestinationEntity(193U);
    msg.op = 109U;

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
    msg.setTimeStamp(0.342049226974);
    msg.setSource(11575U);
    msg.setSourceEntity(127U);
    msg.setDestination(23164U);
    msg.setDestinationEntity(203U);
    msg.value = 0.163821756362;
    msg.confidence = 0.245317752578;
    msg.opmodes.assign("XOZZDUVODFLBFPJDGTKAXEBGSGUMEQHRCUHVCQETQTOZKJVWLMFFKMJHTBZATAIZINZJEGASVKIUPCBWUKIQLREFNEVS");

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
    msg.setTimeStamp(0.64079592568);
    msg.setSource(33514U);
    msg.setSourceEntity(185U);
    msg.setDestination(35492U);
    msg.setDestinationEntity(158U);
    msg.value = 0.364156106885;
    msg.confidence = 0.682870050977;
    msg.opmodes.assign("ENSJTDMHBBFODHVUZ");

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
    msg.setTimeStamp(0.754481340025);
    msg.setSource(28084U);
    msg.setSourceEntity(180U);
    msg.setDestination(6794U);
    msg.setDestinationEntity(61U);
    msg.value = 0.873936202677;
    msg.confidence = 0.327586085457;
    msg.opmodes.assign("AVJPKVUTWFHABCVSJLNRAQVCSOBDQEECKVPDIOOAGNNGX");

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
    msg.setTimeStamp(0.814816830064);
    msg.setSource(55419U);
    msg.setSourceEntity(208U);
    msg.setDestination(57320U);
    msg.setDestinationEntity(188U);
    msg.itow = 3983571748U;
    msg.lat = 0.137612125882;
    msg.lon = 0.616244611357;
    msg.height_ell = 0.329953919261;
    msg.height_sea = 0.188113487405;
    msg.hacc = 0.529712814036;
    msg.vacc = 0.319853669872;
    msg.vel_n = 0.00428311086715;
    msg.vel_e = 0.646909582409;
    msg.vel_d = 0.591066345297;
    msg.speed = 0.599220286319;
    msg.gspeed = 0.677840182753;
    msg.heading = 0.114550516969;
    msg.sacc = 0.773252105535;
    msg.cacc = 0.222923485277;

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
    msg.setTimeStamp(0.441701207143);
    msg.setSource(47745U);
    msg.setSourceEntity(149U);
    msg.setDestination(43698U);
    msg.setDestinationEntity(17U);
    msg.itow = 1085090325U;
    msg.lat = 0.922137117663;
    msg.lon = 0.541288738802;
    msg.height_ell = 0.766609101186;
    msg.height_sea = 0.25687092678;
    msg.hacc = 0.469323030665;
    msg.vacc = 0.871157351037;
    msg.vel_n = 0.813164378186;
    msg.vel_e = 0.545707882777;
    msg.vel_d = 0.763253160494;
    msg.speed = 0.914793479752;
    msg.gspeed = 0.655015893124;
    msg.heading = 0.930403304304;
    msg.sacc = 0.477702735442;
    msg.cacc = 0.689528067404;

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
    msg.setTimeStamp(0.177560640677);
    msg.setSource(14465U);
    msg.setSourceEntity(118U);
    msg.setDestination(28158U);
    msg.setDestinationEntity(7U);
    msg.itow = 50166918U;
    msg.lat = 0.502236621871;
    msg.lon = 0.674257915469;
    msg.height_ell = 0.717539539378;
    msg.height_sea = 0.765716106004;
    msg.hacc = 0.185140383509;
    msg.vacc = 0.213018645156;
    msg.vel_n = 0.400251164431;
    msg.vel_e = 0.308283669752;
    msg.vel_d = 0.00100095708359;
    msg.speed = 0.537723918981;
    msg.gspeed = 0.671069347216;
    msg.heading = 0.814043955083;
    msg.sacc = 0.0979987331308;
    msg.cacc = 0.930617732652;

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
    msg.setTimeStamp(0.19629316157);
    msg.setSource(23950U);
    msg.setSourceEntity(222U);
    msg.setDestination(8498U);
    msg.setDestinationEntity(19U);
    msg.id = 178U;
    msg.value = 0.926731927431;

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
    msg.setTimeStamp(0.554590540321);
    msg.setSource(58949U);
    msg.setSourceEntity(162U);
    msg.setDestination(28922U);
    msg.setDestinationEntity(112U);
    msg.id = 74U;
    msg.value = 0.629523728201;

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
    msg.setTimeStamp(0.662920453473);
    msg.setSource(27666U);
    msg.setSourceEntity(254U);
    msg.setDestination(21162U);
    msg.setDestinationEntity(117U);
    msg.id = 82U;
    msg.value = 0.1541152545;

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
    msg.setTimeStamp(0.502534257728);
    msg.setSource(44591U);
    msg.setSourceEntity(153U);
    msg.setDestination(25926U);
    msg.setDestinationEntity(97U);
    msg.x = 0.274789718263;
    msg.y = 0.404799062879;
    msg.z = 0.883661229405;
    msg.phi = 0.274667425169;
    msg.theta = 0.850703061636;
    msg.psi = 0.0180180585103;

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
    msg.setTimeStamp(0.690303878943);
    msg.setSource(51866U);
    msg.setSourceEntity(35U);
    msg.setDestination(44745U);
    msg.setDestinationEntity(34U);
    msg.x = 0.630186317133;
    msg.y = 0.0301320935986;
    msg.z = 0.761973333641;
    msg.phi = 0.0768080101119;
    msg.theta = 0.339539536444;
    msg.psi = 0.811371208765;

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
    msg.setTimeStamp(0.663117065324);
    msg.setSource(43003U);
    msg.setSourceEntity(151U);
    msg.setDestination(58487U);
    msg.setDestinationEntity(249U);
    msg.x = 0.970719383888;
    msg.y = 0.50545894958;
    msg.z = 0.120908952944;
    msg.phi = 0.908757673061;
    msg.theta = 0.845929103467;
    msg.psi = 0.549395016752;

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
    msg.setTimeStamp(0.601961637837);
    msg.setSource(4329U);
    msg.setSourceEntity(29U);
    msg.setDestination(34959U);
    msg.setDestinationEntity(147U);
    msg.beam_width = 0.399654141094;
    msg.beam_height = 0.0212276830274;

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
    msg.setTimeStamp(0.37181825042);
    msg.setSource(187U);
    msg.setSourceEntity(210U);
    msg.setDestination(35710U);
    msg.setDestinationEntity(219U);
    msg.beam_width = 0.310757009153;
    msg.beam_height = 0.675326719487;

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
    msg.setTimeStamp(0.100479589166);
    msg.setSource(41141U);
    msg.setSourceEntity(80U);
    msg.setDestination(4073U);
    msg.setDestinationEntity(214U);
    msg.beam_width = 0.0192232385202;
    msg.beam_height = 0.179151206834;

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
    msg.setTimeStamp(0.755848276494);
    msg.setSource(35190U);
    msg.setSourceEntity(13U);
    msg.setDestination(19544U);
    msg.setDestinationEntity(238U);
    msg.sane = 160U;

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
    msg.setTimeStamp(0.767385877578);
    msg.setSource(46179U);
    msg.setSourceEntity(152U);
    msg.setDestination(32410U);
    msg.setDestinationEntity(49U);
    msg.sane = 8U;

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
    msg.setTimeStamp(0.935271562446);
    msg.setSource(36666U);
    msg.setSourceEntity(137U);
    msg.setDestination(41665U);
    msg.setDestinationEntity(168U);
    msg.sane = 51U;

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
    msg.setTimeStamp(0.150962810945);
    msg.setSource(26311U);
    msg.setSourceEntity(12U);
    msg.setDestination(6436U);
    msg.setDestinationEntity(13U);
    msg.value = 0.605238684964;

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
    msg.setTimeStamp(0.37171506148);
    msg.setSource(26354U);
    msg.setSourceEntity(231U);
    msg.setDestination(62753U);
    msg.setDestinationEntity(81U);
    msg.value = 0.668246660005;

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
    msg.setTimeStamp(0.253498166174);
    msg.setSource(61200U);
    msg.setSourceEntity(30U);
    msg.setDestination(40930U);
    msg.setDestinationEntity(114U);
    msg.value = 0.425837449798;

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
    msg.setTimeStamp(0.613087534858);
    msg.setSource(2692U);
    msg.setSourceEntity(223U);
    msg.setDestination(63287U);
    msg.setDestinationEntity(85U);
    msg.value = 0.926289991014;

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
    msg.setTimeStamp(0.793955481146);
    msg.setSource(19368U);
    msg.setSourceEntity(191U);
    msg.setDestination(17637U);
    msg.setDestinationEntity(88U);
    msg.value = 0.421901834213;

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
    msg.setTimeStamp(0.948507200914);
    msg.setSource(50387U);
    msg.setSourceEntity(52U);
    msg.setDestination(35013U);
    msg.setDestinationEntity(235U);
    msg.value = 0.536976304773;

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
    msg.setTimeStamp(0.0405254672363);
    msg.setSource(47559U);
    msg.setSourceEntity(11U);
    msg.setDestination(40071U);
    msg.setDestinationEntity(221U);
    msg.value = 0.421262062302;

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
    msg.setTimeStamp(0.513148471441);
    msg.setSource(24743U);
    msg.setSourceEntity(240U);
    msg.setDestination(3536U);
    msg.setDestinationEntity(46U);
    msg.value = 0.0937107778196;

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
    msg.setTimeStamp(0.946169962827);
    msg.setSource(45746U);
    msg.setSourceEntity(145U);
    msg.setDestination(48546U);
    msg.setDestinationEntity(69U);
    msg.value = 0.17548652883;

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
    msg.setTimeStamp(0.784309929131);
    msg.setSource(15812U);
    msg.setSourceEntity(154U);
    msg.setDestination(45433U);
    msg.setDestinationEntity(172U);
    msg.value = 0.0633893652567;

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
    msg.setTimeStamp(0.206978846877);
    msg.setSource(15039U);
    msg.setSourceEntity(126U);
    msg.setDestination(3234U);
    msg.setDestinationEntity(67U);
    msg.value = 0.342829355595;

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
    msg.setTimeStamp(0.0654398999186);
    msg.setSource(63873U);
    msg.setSourceEntity(232U);
    msg.setDestination(16225U);
    msg.setDestinationEntity(109U);
    msg.value = 0.123189043108;

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
    msg.setTimeStamp(0.821557535402);
    msg.setSource(27178U);
    msg.setSourceEntity(110U);
    msg.setDestination(46986U);
    msg.setDestinationEntity(231U);
    msg.value = 0.960369081469;

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
    msg.setTimeStamp(0.380021471921);
    msg.setSource(20198U);
    msg.setSourceEntity(0U);
    msg.setDestination(3397U);
    msg.setDestinationEntity(44U);
    msg.value = 0.922857943553;

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
    msg.setTimeStamp(0.323262558467);
    msg.setSource(25456U);
    msg.setSourceEntity(73U);
    msg.setDestination(36912U);
    msg.setDestinationEntity(54U);
    msg.value = 0.86448249585;

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
    msg.setTimeStamp(0.698260522269);
    msg.setSource(62468U);
    msg.setSourceEntity(198U);
    msg.setDestination(24151U);
    msg.setDestinationEntity(194U);
    msg.value = 0.293159741341;

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
    msg.setTimeStamp(0.187944327553);
    msg.setSource(59065U);
    msg.setSourceEntity(101U);
    msg.setDestination(2648U);
    msg.setDestinationEntity(48U);
    msg.value = 0.114811593878;

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
    msg.setTimeStamp(0.10980227915);
    msg.setSource(6235U);
    msg.setSourceEntity(225U);
    msg.setDestination(11446U);
    msg.setDestinationEntity(180U);
    msg.value = 0.91018637325;

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
    msg.setTimeStamp(0.426290245401);
    msg.setSource(29951U);
    msg.setSourceEntity(116U);
    msg.setDestination(45780U);
    msg.setDestinationEntity(46U);
    msg.value = 0.721174343701;

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
    msg.setTimeStamp(0.852782703548);
    msg.setSource(32791U);
    msg.setSourceEntity(137U);
    msg.setDestination(57138U);
    msg.setDestinationEntity(133U);
    msg.value = 0.932631303895;

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
    msg.setTimeStamp(0.744989221102);
    msg.setSource(44524U);
    msg.setSourceEntity(202U);
    msg.setDestination(42518U);
    msg.setDestinationEntity(205U);
    msg.value = 0.504883202297;

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
    msg.setTimeStamp(0.757531777665);
    msg.setSource(23113U);
    msg.setSourceEntity(3U);
    msg.setDestination(60077U);
    msg.setDestinationEntity(90U);
    msg.value = 0.996866957606;

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
    msg.setTimeStamp(0.470015407419);
    msg.setSource(9455U);
    msg.setSourceEntity(218U);
    msg.setDestination(36080U);
    msg.setDestinationEntity(75U);
    msg.value = 0.383426840061;

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
    msg.setTimeStamp(0.10840756564);
    msg.setSource(31502U);
    msg.setSourceEntity(191U);
    msg.setDestination(48752U);
    msg.setDestinationEntity(103U);
    msg.value = 0.394903376816;

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
    msg.setTimeStamp(0.331899620998);
    msg.setSource(57055U);
    msg.setSourceEntity(80U);
    msg.setDestination(21633U);
    msg.setDestinationEntity(98U);
    msg.validity = 50958U;
    msg.type = 69U;
    msg.tow = 699312865U;
    msg.base_lat = 0.112133887591;
    msg.base_lon = 0.412687536881;
    msg.base_height = 0.21525900917;
    msg.n = 0.18331055432;
    msg.e = 0.695182966814;
    msg.d = 0.279596434345;
    msg.v_n = 0.946380689734;
    msg.v_e = 0.36445596461;
    msg.v_d = 0.745930129128;
    msg.satellites = 161U;
    msg.iar_hyp = 18912U;
    msg.iar_ratio = 0.209973718306;

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
    msg.setTimeStamp(0.485698789322);
    msg.setSource(46075U);
    msg.setSourceEntity(180U);
    msg.setDestination(32167U);
    msg.setDestinationEntity(48U);
    msg.validity = 32713U;
    msg.type = 129U;
    msg.tow = 1345445550U;
    msg.base_lat = 0.068865325588;
    msg.base_lon = 0.26488434663;
    msg.base_height = 0.352412991576;
    msg.n = 0.1891932534;
    msg.e = 0.880365256148;
    msg.d = 0.942072447587;
    msg.v_n = 0.837900343435;
    msg.v_e = 0.306123098627;
    msg.v_d = 0.0428938223949;
    msg.satellites = 252U;
    msg.iar_hyp = 38675U;
    msg.iar_ratio = 0.220939816844;

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
    msg.setTimeStamp(0.162692554293);
    msg.setSource(30562U);
    msg.setSourceEntity(240U);
    msg.setDestination(47415U);
    msg.setDestinationEntity(203U);
    msg.validity = 796U;
    msg.type = 176U;
    msg.tow = 4135630369U;
    msg.base_lat = 0.490212004219;
    msg.base_lon = 0.295644501627;
    msg.base_height = 0.428241189816;
    msg.n = 0.333173493839;
    msg.e = 0.904674778463;
    msg.d = 0.417186603364;
    msg.v_n = 0.216295508172;
    msg.v_e = 0.541752555767;
    msg.v_d = 0.978181237065;
    msg.satellites = 113U;
    msg.iar_hyp = 18326U;
    msg.iar_ratio = 0.188015675388;

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
    msg.setTimeStamp(0.215193204965);
    msg.setSource(31359U);
    msg.setSourceEntity(238U);
    msg.setDestination(3540U);
    msg.setDestinationEntity(224U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.65000957343;
    tmp_msg_0.lon = 0.570249306864;
    tmp_msg_0.height = 0.747665191355;
    tmp_msg_0.x = 0.305113523619;
    tmp_msg_0.y = 0.295806871179;
    tmp_msg_0.z = 0.00280093058677;
    tmp_msg_0.phi = 0.368912195871;
    tmp_msg_0.theta = 0.756603314377;
    tmp_msg_0.psi = 0.262950729666;
    tmp_msg_0.u = 0.536012107641;
    tmp_msg_0.v = 0.484154471169;
    tmp_msg_0.w = 0.912731076511;
    tmp_msg_0.vx = 0.0386644697605;
    tmp_msg_0.vy = 0.0290861018811;
    tmp_msg_0.vz = 0.58789815181;
    tmp_msg_0.p = 0.614879941606;
    tmp_msg_0.q = 0.462696392351;
    tmp_msg_0.r = 0.887442338672;
    tmp_msg_0.depth = 0.841646810667;
    tmp_msg_0.alt = 0.711135319157;
    msg.state.set(tmp_msg_0);
    msg.type = 145U;

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
    msg.setTimeStamp(0.561020413195);
    msg.setSource(9156U);
    msg.setSourceEntity(162U);
    msg.setDestination(34880U);
    msg.setDestinationEntity(159U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.967226737846;
    tmp_msg_0.lon = 0.0513540291978;
    tmp_msg_0.height = 0.67169663533;
    tmp_msg_0.x = 0.611801224554;
    tmp_msg_0.y = 0.484354948374;
    tmp_msg_0.z = 0.232445238274;
    tmp_msg_0.phi = 0.652460078932;
    tmp_msg_0.theta = 0.0111600828332;
    tmp_msg_0.psi = 0.851259566766;
    tmp_msg_0.u = 0.767054299924;
    tmp_msg_0.v = 0.3433308989;
    tmp_msg_0.w = 0.622271480817;
    tmp_msg_0.vx = 0.147579961521;
    tmp_msg_0.vy = 0.350836377128;
    tmp_msg_0.vz = 0.706013717198;
    tmp_msg_0.p = 0.467762925538;
    tmp_msg_0.q = 0.287749008784;
    tmp_msg_0.r = 0.309009459696;
    tmp_msg_0.depth = 0.470149334253;
    tmp_msg_0.alt = 0.705192193519;
    msg.state.set(tmp_msg_0);
    msg.type = 62U;

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
    msg.setTimeStamp(0.231565649166);
    msg.setSource(7834U);
    msg.setSourceEntity(80U);
    msg.setDestination(1309U);
    msg.setDestinationEntity(22U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.843415827655;
    tmp_msg_0.lon = 0.992218964084;
    tmp_msg_0.height = 0.0963344907014;
    tmp_msg_0.x = 0.886550811685;
    tmp_msg_0.y = 0.784929371082;
    tmp_msg_0.z = 0.948588748544;
    tmp_msg_0.phi = 0.370363324058;
    tmp_msg_0.theta = 0.588328615157;
    tmp_msg_0.psi = 0.130817058996;
    tmp_msg_0.u = 0.0319251938599;
    tmp_msg_0.v = 0.696947861377;
    tmp_msg_0.w = 0.898434244459;
    tmp_msg_0.vx = 0.260217100732;
    tmp_msg_0.vy = 0.654742647793;
    tmp_msg_0.vz = 0.0311491159381;
    tmp_msg_0.p = 0.457910471823;
    tmp_msg_0.q = 0.496282773004;
    tmp_msg_0.r = 0.542548557455;
    tmp_msg_0.depth = 0.0161652271369;
    tmp_msg_0.alt = 0.766623295545;
    msg.state.set(tmp_msg_0);
    msg.type = 185U;

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
    msg.setTimeStamp(0.520976652955);
    msg.setSource(11198U);
    msg.setSourceEntity(221U);
    msg.setDestination(9234U);
    msg.setDestinationEntity(249U);
    msg.value = 0.571596018318;

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
    msg.setTimeStamp(0.673336433227);
    msg.setSource(31384U);
    msg.setSourceEntity(73U);
    msg.setDestination(8877U);
    msg.setDestinationEntity(153U);
    msg.value = 0.403103395911;

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
    msg.setTimeStamp(0.660395930234);
    msg.setSource(40252U);
    msg.setSourceEntity(12U);
    msg.setDestination(56951U);
    msg.setDestinationEntity(73U);
    msg.value = 0.0870484411407;

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
    msg.setTimeStamp(0.280516729557);
    msg.setSource(18919U);
    msg.setSourceEntity(238U);
    msg.setDestination(27873U);
    msg.setDestinationEntity(100U);
    msg.value = 0.0625208808021;

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
    msg.setTimeStamp(0.0901531297852);
    msg.setSource(48735U);
    msg.setSourceEntity(218U);
    msg.setDestination(32062U);
    msg.setDestinationEntity(81U);
    msg.value = 0.320695819595;

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
    msg.setTimeStamp(0.325422528479);
    msg.setSource(27240U);
    msg.setSourceEntity(16U);
    msg.setDestination(18675U);
    msg.setDestinationEntity(3U);
    msg.value = 0.136121101884;

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
    msg.setTimeStamp(0.485262944611);
    msg.setSource(15554U);
    msg.setSourceEntity(84U);
    msg.setDestination(54021U);
    msg.setDestinationEntity(101U);
    msg.value = 0.0452301671301;

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
    msg.setTimeStamp(0.815459246125);
    msg.setSource(14927U);
    msg.setSourceEntity(77U);
    msg.setDestination(6787U);
    msg.setDestinationEntity(247U);
    msg.value = 0.773572540347;

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
    msg.setTimeStamp(0.399771953364);
    msg.setSource(38671U);
    msg.setSourceEntity(142U);
    msg.setDestination(50765U);
    msg.setDestinationEntity(165U);
    msg.value = 0.673191891416;

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
    msg.setTimeStamp(0.560705552125);
    msg.setSource(38393U);
    msg.setSourceEntity(240U);
    msg.setDestination(10846U);
    msg.setDestinationEntity(55U);
    msg.value = 0.21179642241;

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
    msg.setTimeStamp(0.543510586085);
    msg.setSource(18883U);
    msg.setSourceEntity(138U);
    msg.setDestination(31186U);
    msg.setDestinationEntity(107U);
    msg.value = 0.845461896129;

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
    msg.setTimeStamp(0.8411835553);
    msg.setSource(42309U);
    msg.setSourceEntity(24U);
    msg.setDestination(62392U);
    msg.setDestinationEntity(18U);
    msg.value = 0.466154523432;

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
    msg.setTimeStamp(0.265819132785);
    msg.setSource(10691U);
    msg.setSourceEntity(244U);
    msg.setDestination(57006U);
    msg.setDestinationEntity(81U);
    msg.value = 0.0948302776965;

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
    msg.setTimeStamp(0.524578872683);
    msg.setSource(11973U);
    msg.setSourceEntity(237U);
    msg.setDestination(57123U);
    msg.setDestinationEntity(168U);
    msg.value = 0.311841016116;

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
    msg.setTimeStamp(0.5266363301);
    msg.setSource(61965U);
    msg.setSourceEntity(243U);
    msg.setDestination(37861U);
    msg.setDestinationEntity(1U);
    msg.value = 0.614420379493;

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
    msg.setTimeStamp(0.206909576324);
    msg.setSource(40231U);
    msg.setSourceEntity(173U);
    msg.setDestination(3055U);
    msg.setDestinationEntity(165U);
    msg.id = 1U;
    msg.zoom = 223U;
    msg.action = 242U;

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
    msg.setTimeStamp(0.880323784469);
    msg.setSource(18661U);
    msg.setSourceEntity(185U);
    msg.setDestination(34249U);
    msg.setDestinationEntity(239U);
    msg.id = 136U;
    msg.zoom = 38U;
    msg.action = 189U;

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
    msg.setTimeStamp(0.275869684328);
    msg.setSource(21260U);
    msg.setSourceEntity(109U);
    msg.setDestination(14775U);
    msg.setDestinationEntity(40U);
    msg.id = 138U;
    msg.zoom = 29U;
    msg.action = 147U;

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
    msg.setTimeStamp(0.0855225692558);
    msg.setSource(27449U);
    msg.setSourceEntity(107U);
    msg.setDestination(24728U);
    msg.setDestinationEntity(127U);
    msg.id = 79U;
    msg.value = 0.166266238871;

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
    msg.setTimeStamp(0.153778310801);
    msg.setSource(13974U);
    msg.setSourceEntity(91U);
    msg.setDestination(62394U);
    msg.setDestinationEntity(76U);
    msg.id = 140U;
    msg.value = 0.0556483774527;

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
    msg.setTimeStamp(0.183508885213);
    msg.setSource(38882U);
    msg.setSourceEntity(69U);
    msg.setDestination(16924U);
    msg.setDestinationEntity(174U);
    msg.id = 68U;
    msg.value = 0.86303668155;

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
    msg.setTimeStamp(0.00777836169405);
    msg.setSource(35097U);
    msg.setSourceEntity(107U);
    msg.setDestination(58961U);
    msg.setDestinationEntity(58U);
    msg.id = 82U;
    msg.value = 0.741017608606;

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
    msg.setTimeStamp(0.877725053395);
    msg.setSource(22238U);
    msg.setSourceEntity(249U);
    msg.setDestination(65288U);
    msg.setDestinationEntity(93U);
    msg.id = 110U;
    msg.value = 0.175839298287;

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
    msg.setTimeStamp(0.95850119131);
    msg.setSource(52927U);
    msg.setSourceEntity(156U);
    msg.setDestination(50074U);
    msg.setDestinationEntity(239U);
    msg.id = 91U;
    msg.value = 0.610623702739;

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
    msg.setTimeStamp(0.904143255605);
    msg.setSource(37868U);
    msg.setSourceEntity(21U);
    msg.setDestination(50662U);
    msg.setDestinationEntity(93U);
    msg.id = 219U;
    msg.angle = 0.395610441995;

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
    msg.setTimeStamp(0.529924335993);
    msg.setSource(19403U);
    msg.setSourceEntity(17U);
    msg.setDestination(64538U);
    msg.setDestinationEntity(157U);
    msg.id = 254U;
    msg.angle = 0.538222475686;

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
    msg.setTimeStamp(0.426525931233);
    msg.setSource(21585U);
    msg.setSourceEntity(22U);
    msg.setDestination(64699U);
    msg.setDestinationEntity(19U);
    msg.id = 238U;
    msg.angle = 0.624796871597;

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
    msg.setTimeStamp(0.0667412645836);
    msg.setSource(9534U);
    msg.setSourceEntity(16U);
    msg.setDestination(2457U);
    msg.setDestinationEntity(76U);
    msg.op = 25U;
    msg.actions.assign("ZZQOQDHGIBJLBDIMFSRCPHAWGHFWYKLKQMMGJDNGYTCGRJEHOUYMDETVOSLLNLPQXXKCJNVDOXVAIBJNENOFCOEDRGJAAHHGZCFIERCZVPPNPUBRDIHYZBGPECQAPPTOVXYNSXUXXUNFDTRWPYBWXMIOKTJUXXMOICTQNHMBYQWIVRNKFQVSSTMZIALJSKPVIKDRCZWEFLWLDKTUABJSQFKCRVFKAHMUQTTOHZWYGAVGWJUS");

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
    msg.setTimeStamp(0.906727305875);
    msg.setSource(61500U);
    msg.setSourceEntity(93U);
    msg.setDestination(23713U);
    msg.setDestinationEntity(105U);
    msg.op = 162U;
    msg.actions.assign("HQIGEGKDESSZQNLFTBWGLPXJSYXJHZPUKLZNBUQCPCKYSWFMNUVCXLDXFSNKYZACADBRRJTYIMCKCXXVRPZNXIAKWJQNTWRIFBDLPLFYROBOTEWRGWOEEFPUMGBZA");

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
    msg.setTimeStamp(0.728520366688);
    msg.setSource(2720U);
    msg.setSourceEntity(107U);
    msg.setDestination(20183U);
    msg.setDestinationEntity(41U);
    msg.op = 123U;
    msg.actions.assign("JIFMTKTJIMXUJAQWLYBITGRVNJYYIXBRQVORSVZYEKFHYSEABOSECHIZXAVJWNFCYLBFMEFMFGNVPHMZUZOHKSGNSPUEDCIDHKYQCJTBNAHPGXAMPTKUAXECPVXOIHOSKGELSLVWPRYLNFCFRLTMIFWVRPAUKHPZLPITLGRQEZEZWGIKSDZCCWGMTUXDGNLJTDBAWNNXQOBOMWDQQOOYZDSWDRQBFDLEMCXBUSNKPUUKJRUROQDV");

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
    msg.setTimeStamp(0.557235249756);
    msg.setSource(22896U);
    msg.setSourceEntity(190U);
    msg.setDestination(51751U);
    msg.setDestinationEntity(195U);
    msg.actions.assign("EYTKHVIIKCXGBSVOVZLFBBZTCTNYTXPMTFEHZPCKMGNYWAHRFLOGAHVQWJCZKWASFDRJSSBFLQSYGDKTKMSANXKTZBZOMJMDVGWRRUJIGIFCQDIVHIWCVNODGHEVJQUQLJXEZYBBDKIFWINOTYTNVDRJFGSESUXQTLNQRAMJXYPDPBCRQQELUENDHLWROWNAIJMMKXQUWYAVWULCBPZUDOPELGUOPHJOENRZMUPAMA");

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
    msg.setTimeStamp(0.0255367496855);
    msg.setSource(21026U);
    msg.setSourceEntity(123U);
    msg.setDestination(44291U);
    msg.setDestinationEntity(9U);
    msg.actions.assign("LRUBHAQRIIBVMKSVWLVJVIPOWMWJSZPQUUIZBYCUOAXMZCJENGPFPUBZPGNVGDGHJEDHTFOLRCKVIJO");

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
    msg.setTimeStamp(0.247726224132);
    msg.setSource(36898U);
    msg.setSourceEntity(126U);
    msg.setDestination(40919U);
    msg.setDestinationEntity(97U);
    msg.actions.assign("PRTOACLLLPZEUQCKURFADHIBYREDS");

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
    msg.setTimeStamp(0.342223064108);
    msg.setSource(25669U);
    msg.setSourceEntity(208U);
    msg.setDestination(16505U);
    msg.setDestinationEntity(59U);
    msg.button = 47U;
    msg.value = 105U;

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
    msg.setTimeStamp(0.432393944716);
    msg.setSource(9328U);
    msg.setSourceEntity(183U);
    msg.setDestination(45376U);
    msg.setDestinationEntity(197U);
    msg.button = 51U;
    msg.value = 105U;

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
    msg.setTimeStamp(0.878256755117);
    msg.setSource(18819U);
    msg.setSourceEntity(99U);
    msg.setDestination(4893U);
    msg.setDestinationEntity(16U);
    msg.button = 155U;
    msg.value = 10U;

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
    msg.setTimeStamp(0.47533913053);
    msg.setSource(25495U);
    msg.setSourceEntity(72U);
    msg.setDestination(38236U);
    msg.setDestinationEntity(99U);
    msg.op = 218U;
    msg.text.assign("CZNCMVFEPKRANSQUNNODMAEARMDWDHQMCOIBOLXHWYOYHXOHJIDTLWALOSYVKSDWBJRCVTSJBCACPZEBGXAYZMLAEEEGTUTBIIWSXGUFFIJGVQZFZDOKDLYNVTKVLZLTXIJBKSLPBYXUENEUPJDQFQAKQKRBYMQHDXSQHVBJZIRHVRCSKGHWEYPPILYNUFXTGCMWHMSJPCZLKWPUOJRUXQFFWMTFORGOQBZJZGNIEUSHARIPXAVYNVDNKURWTF");

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
    msg.setTimeStamp(0.308737779417);
    msg.setSource(22325U);
    msg.setSourceEntity(153U);
    msg.setDestination(14292U);
    msg.setDestinationEntity(248U);
    msg.op = 123U;
    msg.text.assign("SQAYYIJZFEWKUUMHVNQBRROWLCCGFXQMYKXPBTZODONXUGYTZAXACFZFGCCJYLQQDKEUJE");

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
    msg.setTimeStamp(0.683251277129);
    msg.setSource(15446U);
    msg.setSourceEntity(132U);
    msg.setDestination(61359U);
    msg.setDestinationEntity(216U);
    msg.op = 100U;
    msg.text.assign("HTFRYDGFGNXCKIHZWSDJDQYWMIYYQTDCNFBLEPPWZXHMLSIRMIAFLUPDASNOPXPQYLQOHPRFOUYXTEZFSDQCGHJEMZHQPOTPINBTGUCKXMRNXVKPFJQACVEDOJZANUTJWLCSVVTPLQNSCKXJBSJBLSVMWZYCORWOZUNAJNHRZBYEEKZRGGALRIOUSHUBAFUFGSTTUIRXMIHWYJAXVGBA");

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
    msg.setTimeStamp(0.280691694833);
    msg.setSource(5736U);
    msg.setSourceEntity(252U);
    msg.setDestination(44836U);
    msg.setDestinationEntity(129U);
    msg.op = 106U;
    msg.time_remain = 0.520481180194;
    msg.sched_time = 0.521616083041;

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
    msg.setTimeStamp(0.678643660591);
    msg.setSource(8605U);
    msg.setSourceEntity(112U);
    msg.setDestination(53953U);
    msg.setDestinationEntity(209U);
    msg.op = 22U;
    msg.time_remain = 0.571637446376;
    msg.sched_time = 0.53452766029;

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
    msg.setTimeStamp(0.674664668121);
    msg.setSource(60453U);
    msg.setSourceEntity(72U);
    msg.setDestination(16119U);
    msg.setDestinationEntity(193U);
    msg.op = 189U;
    msg.time_remain = 0.795878920477;
    msg.sched_time = 0.323743046662;

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
    msg.setTimeStamp(0.640416904103);
    msg.setSource(29050U);
    msg.setSourceEntity(51U);
    msg.setDestination(26242U);
    msg.setDestinationEntity(174U);
    msg.name.assign("YLWUBFACXEDIALUETSVHJTEBRIOHRPFDYVKWGVUASHONDGVIQZZYINPQJGPUAJDBPGWSSFJIQJJLLBTGATXSVWFUCXBWWXNNXGEMAJZMHVUOOLKHCGAYVZRPEVMSXRUNWANUQPOPFDRXZXSOOHTDCKHLFJRBM");
    msg.op = 80U;
    msg.sched_time = 0.820761723033;

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
    msg.setTimeStamp(0.0112972023417);
    msg.setSource(20945U);
    msg.setSourceEntity(78U);
    msg.setDestination(42688U);
    msg.setDestinationEntity(65U);
    msg.name.assign("YSTWWMVMIMRDHQYXWOLOUZVRUHTJZQIPDMLLDETFDVDJKHLJCKHIBEQG");
    msg.op = 52U;
    msg.sched_time = 0.531047584063;

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
    msg.setTimeStamp(0.762880299562);
    msg.setSource(14953U);
    msg.setSourceEntity(143U);
    msg.setDestination(15522U);
    msg.setDestinationEntity(182U);
    msg.name.assign("ZAXNJZBQRMTRUPHOLZZHEPWLCNFXFMLKLSRJOOLZHBRCFZZJIOAVKMYYBKKBIIJASECOWADYNSMBGWQDVVGTII");
    msg.op = 116U;
    msg.sched_time = 0.263884261804;

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
    msg.setTimeStamp(0.185245066878);
    msg.setSource(22574U);
    msg.setSourceEntity(14U);
    msg.setDestination(45540U);
    msg.setDestinationEntity(116U);

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
    msg.setTimeStamp(0.150344917391);
    msg.setSource(55892U);
    msg.setSourceEntity(215U);
    msg.setDestination(58253U);
    msg.setDestinationEntity(141U);

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
    msg.setTimeStamp(0.456955247322);
    msg.setSource(41167U);
    msg.setSourceEntity(249U);
    msg.setDestination(33827U);
    msg.setDestinationEntity(120U);

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
    msg.setTimeStamp(0.334880453353);
    msg.setSource(23248U);
    msg.setSourceEntity(188U);
    msg.setDestination(17940U);
    msg.setDestinationEntity(169U);
    msg.name.assign("YHZIGXMRALHBLXTIAMJZSQURNRCBKXZKFYNZJFWGBQXETULPLBFJLPTPNQDUVSKVDNEUNPWSAPOQFTYODCBEJJWZSXGXBOTMRFSQLNDIRXPVMFBDMCLYOGXEMVJALPGYWVCBIFIUQSGQNOVSTAZEIEHFKUHCDCGMMOWYUZJWTYAJKJIVDVNTOKZDVHUZAAXYQKUYYEWWRSJCPG");
    msg.state = 210U;

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
    msg.setTimeStamp(0.965600437213);
    msg.setSource(44492U);
    msg.setSourceEntity(237U);
    msg.setDestination(61766U);
    msg.setDestinationEntity(107U);
    msg.name.assign("OBPKOLIESGIPGNRTIJXGZUVHYNYMGGTHJAIQWRBAMLNPBFDQXWMNRMJGDQG");
    msg.state = 23U;

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
    msg.setTimeStamp(0.00850848320014);
    msg.setSource(45546U);
    msg.setSourceEntity(231U);
    msg.setDestination(2358U);
    msg.setDestinationEntity(14U);
    msg.name.assign("BEDEMPJPURKHHYLIYMOMLRGJYFUOQGGYKCVLWMQVMJYPDUTBPI");
    msg.state = 206U;

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
    msg.setTimeStamp(0.350212855418);
    msg.setSource(12619U);
    msg.setSourceEntity(29U);
    msg.setDestination(62488U);
    msg.setDestinationEntity(10U);
    msg.name.assign("OUXEWCQXXDQWTJIQFPAGYGIPONTWWLNJUDVEJTLTKXANUDASKEEQVTVMBVGCLJLZDHMSIQPJXZYNWBQQBZTOMRFRUVFSEFHPHZDBLMAHKLHAKFXDYBCAWPJEKCHCVDNEKCUISFARBRZWUGYSFLZTJRCMIRNYMIMITFYXONUYRV");
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
    msg.setTimeStamp(0.88541117023);
    msg.setSource(36744U);
    msg.setSourceEntity(54U);
    msg.setDestination(63546U);
    msg.setDestinationEntity(179U);
    msg.name.assign("EQMJTLITCGXVKCBASQRMNOVHKXEAEVLTLWXHFXSOWKMDPWEHYJFKUTTQTGSUPYGYLDKPAINZPSMOCWRJUFBPUXWCKKBEYFVOHYTIQIVNDYZDJDQTVUYEOBDYQJSRHTSMBKJCPOMQEYZUNCWHMZGXDQCJFWBNTCROZ");
    msg.value = 146U;

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
    msg.setTimeStamp(0.950987114387);
    msg.setSource(35272U);
    msg.setSourceEntity(190U);
    msg.setDestination(43892U);
    msg.setDestinationEntity(190U);
    msg.name.assign("VHKPQJGUMFMIHILHURALHDEEWVVYJDQWQTKWMSETLSNHWTCDFUEM");
    msg.value = 132U;

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
    msg.setTimeStamp(0.585666008807);
    msg.setSource(59944U);
    msg.setSourceEntity(147U);
    msg.setDestination(40299U);
    msg.setDestinationEntity(155U);
    msg.name.assign("GRSZXUFCKOIJOVYCFYRDQSXYQMPDBERYTEHRHHTDQRMVRFCFROVZYWPKAPPMJFQMNHITALCVGFYQWBCKPNVUFLDRZFZLHEEIVTOZBJDYVMJLUWHKTGNLDCXBAKESSGXDKVDSNWNTIHGUZNE");

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
    msg.setTimeStamp(0.881197732713);
    msg.setSource(41886U);
    msg.setSourceEntity(43U);
    msg.setDestination(35605U);
    msg.setDestinationEntity(51U);
    msg.name.assign("FGQFBIXGEJSKKTEDNIQKZELVLXWLQRQJUCABYVKQJHESMQKFEXYAIGWCVNCGMDVRWKDLHLYGUNVRPXBWLTGXAOXXPQZNRYIKYWHDHOOQJTWZYV");

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
    msg.setTimeStamp(0.184643579512);
    msg.setSource(64648U);
    msg.setSourceEntity(141U);
    msg.setDestination(30407U);
    msg.setDestinationEntity(203U);
    msg.name.assign("REKHWPDQCRPQFLAEHFNPYDCQPUFOMUVVHUDTXBJNZMRAQOADIWLWMIRCUWTVQLQBV");

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
    msg.setTimeStamp(0.780295185107);
    msg.setSource(60804U);
    msg.setSourceEntity(230U);
    msg.setDestination(22527U);
    msg.setDestinationEntity(250U);
    msg.name.assign("MRBALSGIIXDFUEFBJDCIIEDYWQZSNEFVTFAWUIJTXYNYVTANHKMPKTQPPXEABTZHAOWMWLLBBLZJHMHYUNDJMROYRPLPZUPBJGGQNBEKFWWQCRIJZLOGFXIEJUNEBJEFJCSPHGSKMQKNYNAQBRMODCSYVURVMDUHKICOTTUALPWTGCZVCKANKRIEQKFZOHH");
    msg.value = 172U;

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
    msg.setTimeStamp(0.087509583093);
    msg.setSource(50872U);
    msg.setSourceEntity(96U);
    msg.setDestination(38157U);
    msg.setDestinationEntity(222U);
    msg.name.assign("NPBFMOMTGVAUMIAHWBHCPNFRJZTBXLAGIFJEFGPJILBOQANYVDZUMUQQXKWPOSFVJUZSXBRWTKQYMYKLXBTECEVXHCISDGIMSUXAEAYSYZULBKCMBIXPAHMJKBROAO");
    msg.value = 231U;

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
    msg.setTimeStamp(0.846176420103);
    msg.setSource(32455U);
    msg.setSourceEntity(30U);
    msg.setDestination(23829U);
    msg.setDestinationEntity(115U);
    msg.name.assign("WPZEQAGEDIKSSBOZNJMYTLALVVARZMXRYBDUHOLBEUOEMLKFUWAQEBGDATMDZZKRXCJONPCSZWPZYBOIRGAWVCIYDCGGIBEYUWXFNHSUNYCB");
    msg.value = 119U;

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
    msg.setTimeStamp(0.816845543612);
    msg.setSource(35802U);
    msg.setSourceEntity(38U);
    msg.setDestination(1209U);
    msg.setDestinationEntity(14U);
    msg.id = 175U;
    msg.period = 2203248920U;
    msg.duty_cycle = 781095184U;

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
    msg.setTimeStamp(0.654829454881);
    msg.setSource(63846U);
    msg.setSourceEntity(104U);
    msg.setDestination(2200U);
    msg.setDestinationEntity(217U);
    msg.id = 91U;
    msg.period = 2323670428U;
    msg.duty_cycle = 3870287251U;

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
    msg.setTimeStamp(0.149141983085);
    msg.setSource(60828U);
    msg.setSourceEntity(141U);
    msg.setDestination(63834U);
    msg.setDestinationEntity(232U);
    msg.id = 28U;
    msg.period = 1548033901U;
    msg.duty_cycle = 3800376086U;

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
    msg.setTimeStamp(0.758705575393);
    msg.setSource(64779U);
    msg.setSourceEntity(235U);
    msg.setDestination(12604U);
    msg.setDestinationEntity(242U);
    msg.id = 198U;
    msg.period = 540982957U;
    msg.duty_cycle = 4078169943U;

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
    msg.setTimeStamp(0.111408439099);
    msg.setSource(17170U);
    msg.setSourceEntity(162U);
    msg.setDestination(26485U);
    msg.setDestinationEntity(190U);
    msg.id = 47U;
    msg.period = 1716383286U;
    msg.duty_cycle = 3167900398U;

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
    msg.setTimeStamp(0.088821949927);
    msg.setSource(60875U);
    msg.setSourceEntity(229U);
    msg.setDestination(13758U);
    msg.setDestinationEntity(179U);
    msg.id = 157U;
    msg.period = 2216572775U;
    msg.duty_cycle = 771085850U;

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
    msg.setTimeStamp(0.987845384268);
    msg.setSource(51305U);
    msg.setSourceEntity(207U);
    msg.setDestination(11275U);
    msg.setDestinationEntity(129U);
    msg.lat = 0.855202627066;
    msg.lon = 0.509184009148;
    msg.height = 0.634688739954;
    msg.x = 0.129936886971;
    msg.y = 0.116334304832;
    msg.z = 0.126404753825;
    msg.phi = 0.616237524478;
    msg.theta = 0.494251277782;
    msg.psi = 0.740065604582;
    msg.u = 0.1838834891;
    msg.v = 0.517115088049;
    msg.w = 0.787828006885;
    msg.vx = 0.773574371349;
    msg.vy = 0.932518881619;
    msg.vz = 0.803160185009;
    msg.p = 0.729351561974;
    msg.q = 0.634953243156;
    msg.r = 0.918690005153;
    msg.depth = 0.0326729384013;
    msg.alt = 0.695355673487;

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
    msg.setTimeStamp(0.621128044699);
    msg.setSource(52407U);
    msg.setSourceEntity(49U);
    msg.setDestination(18084U);
    msg.setDestinationEntity(64U);
    msg.lat = 0.190507346141;
    msg.lon = 0.34618088859;
    msg.height = 0.847096150235;
    msg.x = 0.660075537524;
    msg.y = 0.00760452749874;
    msg.z = 0.605740902795;
    msg.phi = 0.26400604295;
    msg.theta = 0.858719337501;
    msg.psi = 0.903586845673;
    msg.u = 0.370211709629;
    msg.v = 0.90179033513;
    msg.w = 0.765458531193;
    msg.vx = 0.98500654539;
    msg.vy = 0.795737680858;
    msg.vz = 0.752325043043;
    msg.p = 0.68225877166;
    msg.q = 0.837606518822;
    msg.r = 0.891483800346;
    msg.depth = 0.829754034529;
    msg.alt = 0.136119039202;

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
    msg.setTimeStamp(0.984983184846);
    msg.setSource(64302U);
    msg.setSourceEntity(97U);
    msg.setDestination(33497U);
    msg.setDestinationEntity(247U);
    msg.lat = 0.491141200117;
    msg.lon = 0.50420237495;
    msg.height = 0.927807260208;
    msg.x = 0.956644858321;
    msg.y = 0.739394556268;
    msg.z = 0.584094576305;
    msg.phi = 0.221981136076;
    msg.theta = 0.0136917675413;
    msg.psi = 0.459293354451;
    msg.u = 0.0610641538447;
    msg.v = 0.216700606672;
    msg.w = 0.511030437253;
    msg.vx = 0.372067058872;
    msg.vy = 0.918604878525;
    msg.vz = 0.624290862836;
    msg.p = 0.136815637359;
    msg.q = 0.569466498496;
    msg.r = 0.820848713251;
    msg.depth = 0.806672336306;
    msg.alt = 0.768598394198;

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
    msg.setTimeStamp(0.284514518455);
    msg.setSource(698U);
    msg.setSourceEntity(122U);
    msg.setDestination(12001U);
    msg.setDestinationEntity(230U);
    msg.x = 0.421445982422;
    msg.y = 0.403927249663;
    msg.z = 0.163528564813;

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
    msg.setTimeStamp(0.520441165159);
    msg.setSource(47562U);
    msg.setSourceEntity(232U);
    msg.setDestination(30873U);
    msg.setDestinationEntity(240U);
    msg.x = 0.938270611425;
    msg.y = 0.332444753419;
    msg.z = 0.380900262882;

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
    msg.setTimeStamp(0.14100833497);
    msg.setSource(27352U);
    msg.setSourceEntity(4U);
    msg.setDestination(1978U);
    msg.setDestinationEntity(87U);
    msg.x = 0.650741044332;
    msg.y = 0.664014465752;
    msg.z = 0.953517690284;

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
    msg.setTimeStamp(0.254717560167);
    msg.setSource(40362U);
    msg.setSourceEntity(221U);
    msg.setDestination(33949U);
    msg.setDestinationEntity(68U);
    msg.value = 0.448899931984;

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
    msg.setTimeStamp(0.891310360482);
    msg.setSource(20757U);
    msg.setSourceEntity(120U);
    msg.setDestination(42430U);
    msg.setDestinationEntity(102U);
    msg.value = 0.623129369198;

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
    msg.setTimeStamp(0.221108704297);
    msg.setSource(37315U);
    msg.setSourceEntity(20U);
    msg.setDestination(49313U);
    msg.setDestinationEntity(139U);
    msg.value = 0.244237391639;

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
    msg.setTimeStamp(0.472067660886);
    msg.setSource(6931U);
    msg.setSourceEntity(77U);
    msg.setDestination(28339U);
    msg.setDestinationEntity(103U);
    msg.value = 0.943936461187;

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
    msg.setTimeStamp(0.787585137585);
    msg.setSource(34575U);
    msg.setSourceEntity(38U);
    msg.setDestination(30932U);
    msg.setDestinationEntity(244U);
    msg.value = 0.307377461569;

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
    msg.setTimeStamp(0.192430841253);
    msg.setSource(20040U);
    msg.setSourceEntity(105U);
    msg.setDestination(1357U);
    msg.setDestinationEntity(9U);
    msg.value = 0.0744784414375;

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
    msg.setTimeStamp(0.881928136255);
    msg.setSource(53244U);
    msg.setSourceEntity(8U);
    msg.setDestination(42184U);
    msg.setDestinationEntity(119U);
    msg.x = 0.667192913442;
    msg.y = 0.105119745629;
    msg.z = 0.411478111339;
    msg.phi = 0.608637289181;
    msg.theta = 0.00323430676823;
    msg.psi = 0.519634195013;
    msg.p = 0.0942701010752;
    msg.q = 0.739043319555;
    msg.r = 0.460034634248;
    msg.u = 0.98708214527;
    msg.v = 0.345926417748;
    msg.w = 0.39344371109;
    msg.bias_psi = 0.243287581086;
    msg.bias_r = 0.328641152087;

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
    msg.setTimeStamp(0.777429723198);
    msg.setSource(34502U);
    msg.setSourceEntity(67U);
    msg.setDestination(1667U);
    msg.setDestinationEntity(102U);
    msg.x = 0.970388071135;
    msg.y = 0.899467517503;
    msg.z = 0.698984188249;
    msg.phi = 0.344565414028;
    msg.theta = 0.966295170979;
    msg.psi = 0.134380675664;
    msg.p = 0.168016770596;
    msg.q = 0.927600508963;
    msg.r = 0.789929211966;
    msg.u = 0.929060612024;
    msg.v = 0.516207841721;
    msg.w = 0.61249745399;
    msg.bias_psi = 0.0123131357528;
    msg.bias_r = 0.0476734758269;

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
    msg.setTimeStamp(0.473050570901);
    msg.setSource(8265U);
    msg.setSourceEntity(138U);
    msg.setDestination(27745U);
    msg.setDestinationEntity(170U);
    msg.x = 0.807587364321;
    msg.y = 0.892585648625;
    msg.z = 0.512499615151;
    msg.phi = 0.0556164398496;
    msg.theta = 0.24650610299;
    msg.psi = 0.0991530651111;
    msg.p = 0.736992748192;
    msg.q = 0.205224381538;
    msg.r = 0.15897017606;
    msg.u = 0.74225739779;
    msg.v = 0.384468186568;
    msg.w = 0.0636002047422;
    msg.bias_psi = 0.596632984963;
    msg.bias_r = 0.866914542403;

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
    msg.setTimeStamp(0.87128253188);
    msg.setSource(49559U);
    msg.setSourceEntity(145U);
    msg.setDestination(48526U);
    msg.setDestinationEntity(187U);
    msg.bias_psi = 0.486520032332;
    msg.bias_r = 0.778410190579;
    msg.cog = 0.381269584563;
    msg.cyaw = 0.426101745582;
    msg.gps_rej_level = 0.0189021109955;
    msg.lbl_rej_level = 0.592656241393;
    msg.custom_x = 0.560868927536;
    msg.custom_y = 0.96523104483;
    msg.custom_z = 0.463224518567;

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
    msg.setTimeStamp(0.5531123157);
    msg.setSource(37535U);
    msg.setSourceEntity(1U);
    msg.setDestination(33396U);
    msg.setDestinationEntity(182U);
    msg.bias_psi = 0.867761848848;
    msg.bias_r = 0.504572659061;
    msg.cog = 0.48529971079;
    msg.cyaw = 0.781901285342;
    msg.gps_rej_level = 0.309022356719;
    msg.lbl_rej_level = 0.744232380403;
    msg.custom_x = 0.274657527342;
    msg.custom_y = 0.557690227009;
    msg.custom_z = 0.306182256054;

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
    msg.setTimeStamp(0.273859548382);
    msg.setSource(47665U);
    msg.setSourceEntity(237U);
    msg.setDestination(35257U);
    msg.setDestinationEntity(236U);
    msg.bias_psi = 0.157420523791;
    msg.bias_r = 0.915312474589;
    msg.cog = 0.41329996881;
    msg.cyaw = 0.594351644798;
    msg.gps_rej_level = 0.783350676613;
    msg.lbl_rej_level = 0.837140226487;
    msg.custom_x = 0.432794258805;
    msg.custom_y = 0.544019613173;
    msg.custom_z = 0.420705224076;

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
    msg.setTimeStamp(0.760695173516);
    msg.setSource(4885U);
    msg.setSourceEntity(142U);
    msg.setDestination(15854U);
    msg.setDestinationEntity(225U);
    msg.utc_time = 0.729779925375;
    msg.reason = 242U;

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
    msg.setTimeStamp(0.274798925348);
    msg.setSource(47522U);
    msg.setSourceEntity(133U);
    msg.setDestination(45341U);
    msg.setDestinationEntity(115U);
    msg.utc_time = 0.117782483681;
    msg.reason = 100U;

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
    msg.setTimeStamp(0.516725129982);
    msg.setSource(64082U);
    msg.setSourceEntity(136U);
    msg.setDestination(1944U);
    msg.setDestinationEntity(237U);
    msg.utc_time = 0.371827794537;
    msg.reason = 68U;

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
    msg.setTimeStamp(0.0336039328099);
    msg.setSource(63375U);
    msg.setSourceEntity(90U);
    msg.setDestination(9748U);
    msg.setDestinationEntity(173U);
    msg.id = 83U;
    msg.range = 0.969459887522;
    msg.acceptance = 60U;

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
    msg.setTimeStamp(0.541910360609);
    msg.setSource(7802U);
    msg.setSourceEntity(67U);
    msg.setDestination(22795U);
    msg.setDestinationEntity(128U);
    msg.id = 140U;
    msg.range = 0.423505211166;
    msg.acceptance = 202U;

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
    msg.setTimeStamp(0.890293620557);
    msg.setSource(37248U);
    msg.setSourceEntity(157U);
    msg.setDestination(49248U);
    msg.setDestinationEntity(171U);
    msg.id = 148U;
    msg.range = 0.555975498106;
    msg.acceptance = 208U;

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
    msg.setTimeStamp(0.406586694786);
    msg.setSource(46911U);
    msg.setSourceEntity(77U);
    msg.setDestination(58309U);
    msg.setDestinationEntity(42U);
    msg.type = 84U;
    msg.reason = 162U;
    msg.value = 0.977453579985;
    msg.timestep = 0.408872557529;

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
    msg.setTimeStamp(0.66225536988);
    msg.setSource(32576U);
    msg.setSourceEntity(124U);
    msg.setDestination(62009U);
    msg.setDestinationEntity(79U);
    msg.type = 200U;
    msg.reason = 35U;
    msg.value = 0.942349086749;
    msg.timestep = 0.731432210943;

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
    msg.setTimeStamp(0.20233386363);
    msg.setSource(64479U);
    msg.setSourceEntity(98U);
    msg.setDestination(2859U);
    msg.setDestinationEntity(134U);
    msg.type = 96U;
    msg.reason = 208U;
    msg.value = 0.502935695305;
    msg.timestep = 0.209733316076;

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
    msg.setTimeStamp(0.876679251478);
    msg.setSource(56148U);
    msg.setSourceEntity(66U);
    msg.setDestination(5582U);
    msg.setDestinationEntity(223U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("YIGZXXVKNWDCTMFJWQRJFPZLWDIOSRQMZAKREABYIHVWNBFNHTPPJUAOLXZTHNFWKQMITEGMPARVWCDLRCXXKJIOAOUCXGRHOBADAEXMWYDDDOMEYGRANJXPTWNXUPCZFNANZQKYZKZFH");
    tmp_msg_0.lat = 0.948361245981;
    tmp_msg_0.lon = 0.327485485787;
    tmp_msg_0.depth = 0.668734000145;
    tmp_msg_0.query_channel = 63U;
    tmp_msg_0.reply_channel = 60U;
    tmp_msg_0.transponder_delay = 200U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.599536121698;
    msg.y = 0.719539860778;
    msg.var_x = 0.940332417549;
    msg.var_y = 0.462126889254;
    msg.distance = 0.865597451514;

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
    msg.setTimeStamp(0.0542029167448);
    msg.setSource(64706U);
    msg.setSourceEntity(96U);
    msg.setDestination(10729U);
    msg.setDestinationEntity(135U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("ITWWWOGSDPVBOTHGNCSWMLHWVYQDSFCVSHDQTTFENCROTQZJGZYJJUKIYKINHFIQMLJDNXAIONVDXJMDTVMNECPXGDUAELBJUYPFCLCIBEWGRREFPFZDOTCRVIAIVQHKBWLQSUGFZNGTTBOUWLZLAZPZONXODCMEPZUSAFEJPFAGLIOHUQWJBFGCLRKMMVKKYABGEJBIMKRYHPXSAMSYRYUSHYQKVLSZUQOTCHEPXAN");
    tmp_msg_0.lat = 0.242633035688;
    tmp_msg_0.lon = 0.079440484821;
    tmp_msg_0.depth = 0.197525550385;
    tmp_msg_0.query_channel = 151U;
    tmp_msg_0.reply_channel = 240U;
    tmp_msg_0.transponder_delay = 6U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.468696982126;
    msg.y = 0.906223114269;
    msg.var_x = 0.199409835062;
    msg.var_y = 0.759793890736;
    msg.distance = 0.939087287525;

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
    msg.setTimeStamp(0.686814728678);
    msg.setSource(54956U);
    msg.setSourceEntity(115U);
    msg.setDestination(36988U);
    msg.setDestinationEntity(124U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("QUKUWFFXRYNVZRIACDOLFRBTGAVWSYCRTSVSRZKHLUEOGKXDRSJVURRUIHAIOKOPJFAENFSLMZBOZTZEISJYPWSNQVXQHGZCVDBKHFEINNNKDDGEYTUHDBIOW");
    tmp_msg_0.lat = 0.729628135659;
    tmp_msg_0.lon = 0.205870451952;
    tmp_msg_0.depth = 0.951563831981;
    tmp_msg_0.query_channel = 90U;
    tmp_msg_0.reply_channel = 120U;
    tmp_msg_0.transponder_delay = 249U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.440927833968;
    msg.y = 0.110449552616;
    msg.var_x = 0.154074685726;
    msg.var_y = 0.70515912683;
    msg.distance = 0.730180473377;

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
    msg.setTimeStamp(0.158037749918);
    msg.setSource(35662U);
    msg.setSourceEntity(124U);
    msg.setDestination(38998U);
    msg.setDestinationEntity(201U);
    msg.state = 172U;

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
    msg.setTimeStamp(0.328137757106);
    msg.setSource(12070U);
    msg.setSourceEntity(54U);
    msg.setDestination(33415U);
    msg.setDestinationEntity(227U);
    msg.state = 63U;

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
    msg.setTimeStamp(0.295649022155);
    msg.setSource(8743U);
    msg.setSourceEntity(162U);
    msg.setDestination(33478U);
    msg.setDestinationEntity(54U);
    msg.state = 49U;

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
    msg.setTimeStamp(0.0719082905866);
    msg.setSource(25880U);
    msg.setSourceEntity(73U);
    msg.setDestination(23181U);
    msg.setDestinationEntity(153U);
    msg.x = 0.0408435118354;
    msg.y = 0.0528363873085;
    msg.z = 0.96915447175;

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
    msg.setTimeStamp(0.987724811972);
    msg.setSource(25261U);
    msg.setSourceEntity(24U);
    msg.setDestination(62526U);
    msg.setDestinationEntity(248U);
    msg.x = 0.982853487526;
    msg.y = 0.636591225205;
    msg.z = 0.226737394838;

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
    msg.setTimeStamp(0.173399417006);
    msg.setSource(25656U);
    msg.setSourceEntity(186U);
    msg.setDestination(26924U);
    msg.setDestinationEntity(186U);
    msg.x = 0.548777216557;
    msg.y = 0.471079264807;
    msg.z = 0.511049606658;

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
    msg.setTimeStamp(0.958408587326);
    msg.setSource(56346U);
    msg.setSourceEntity(121U);
    msg.setDestination(48175U);
    msg.setDestinationEntity(1U);
    msg.va = 0.0744820464045;
    msg.aoa = 0.746071441498;
    msg.ssa = 0.68312099903;

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
    msg.setTimeStamp(0.367465933411);
    msg.setSource(4101U);
    msg.setSourceEntity(184U);
    msg.setDestination(47060U);
    msg.setDestinationEntity(173U);
    msg.va = 0.442785808337;
    msg.aoa = 0.944526104031;
    msg.ssa = 0.170481469097;

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
    msg.setTimeStamp(0.105193891986);
    msg.setSource(58482U);
    msg.setSourceEntity(103U);
    msg.setDestination(29858U);
    msg.setDestinationEntity(48U);
    msg.va = 0.458282052487;
    msg.aoa = 0.968579906432;
    msg.ssa = 0.631576934802;

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
    msg.setTimeStamp(0.121101664164);
    msg.setSource(32643U);
    msg.setSourceEntity(210U);
    msg.setDestination(5778U);
    msg.setDestinationEntity(162U);
    msg.mmsi = 4160949010U;
    msg.lon = 0.256533894424;
    msg.lat = 0.285279448011;
    msg.x = 0.371560353787;
    msg.y = 0.338224527627;
    msg.psi = 0.0649930491542;
    msg.u = 0.6147969681;
    msg.v = 0.462781463637;
    msg.a = 0.910823291295;
    msg.b = 0.900306636953;
    msg.c = 0.911361637203;
    msg.d = 0.895539621248;

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
    msg.setTimeStamp(0.330339738796);
    msg.setSource(64551U);
    msg.setSourceEntity(147U);
    msg.setDestination(29721U);
    msg.setDestinationEntity(254U);
    msg.mmsi = 2520252485U;
    msg.lon = 0.0592007406166;
    msg.lat = 0.386125574272;
    msg.x = 0.180608195159;
    msg.y = 0.177811855095;
    msg.psi = 0.331681915798;
    msg.u = 0.534161811175;
    msg.v = 0.867838352678;
    msg.a = 0.257964891094;
    msg.b = 0.184115122416;
    msg.c = 0.51147609269;
    msg.d = 0.848131556199;

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
    msg.setTimeStamp(0.72775388164);
    msg.setSource(64139U);
    msg.setSourceEntity(235U);
    msg.setDestination(48375U);
    msg.setDestinationEntity(16U);
    msg.mmsi = 2684325792U;
    msg.lon = 0.821391410167;
    msg.lat = 0.688867124851;
    msg.x = 0.273792212865;
    msg.y = 0.77694775433;
    msg.psi = 0.437312698435;
    msg.u = 0.309955479572;
    msg.v = 0.185785043639;
    msg.a = 0.669603781832;
    msg.b = 0.405611992087;
    msg.c = 0.3952542965;
    msg.d = 0.932664676009;

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
    msg.setTimeStamp(0.850804573317);
    msg.setSource(60007U);
    msg.setSourceEntity(130U);
    msg.setDestination(11268U);
    msg.setDestinationEntity(166U);
    msg.value = 0.901320688002;

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
    msg.setTimeStamp(0.863485499909);
    msg.setSource(38698U);
    msg.setSourceEntity(220U);
    msg.setDestination(64495U);
    msg.setDestinationEntity(70U);
    msg.value = 0.89706343702;

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
    msg.setTimeStamp(0.135265751514);
    msg.setSource(20042U);
    msg.setSourceEntity(154U);
    msg.setDestination(3002U);
    msg.setDestinationEntity(147U);
    msg.value = 0.851352980026;

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
    msg.setTimeStamp(0.512460380094);
    msg.setSource(28409U);
    msg.setSourceEntity(70U);
    msg.setDestination(33717U);
    msg.setDestinationEntity(16U);
    msg.value = 0.956636020776;
    msg.z_units = 96U;

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
    msg.setTimeStamp(0.230807214885);
    msg.setSource(18541U);
    msg.setSourceEntity(59U);
    msg.setDestination(39666U);
    msg.setDestinationEntity(76U);
    msg.value = 0.369660629986;
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
    msg.setTimeStamp(0.125791008843);
    msg.setSource(43018U);
    msg.setSourceEntity(155U);
    msg.setDestination(25243U);
    msg.setDestinationEntity(165U);
    msg.value = 0.20047690952;
    msg.z_units = 107U;

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
    msg.setTimeStamp(0.830555758343);
    msg.setSource(62106U);
    msg.setSourceEntity(232U);
    msg.setDestination(39747U);
    msg.setDestinationEntity(202U);
    msg.value = 0.657737057603;
    msg.speed_units = 31U;

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
    msg.setTimeStamp(0.26529718719);
    msg.setSource(30096U);
    msg.setSourceEntity(0U);
    msg.setDestination(60803U);
    msg.setDestinationEntity(160U);
    msg.value = 0.126043792391;
    msg.speed_units = 129U;

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
    msg.setTimeStamp(0.683520004012);
    msg.setSource(22456U);
    msg.setSourceEntity(97U);
    msg.setDestination(54172U);
    msg.setDestinationEntity(114U);
    msg.value = 0.59119960413;
    msg.speed_units = 93U;

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
    msg.setTimeStamp(0.00390937407821);
    msg.setSource(14268U);
    msg.setSourceEntity(213U);
    msg.setDestination(37889U);
    msg.setDestinationEntity(227U);
    msg.value = 0.0730078016;

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
    msg.setTimeStamp(0.354252289457);
    msg.setSource(31098U);
    msg.setSourceEntity(244U);
    msg.setDestination(19419U);
    msg.setDestinationEntity(102U);
    msg.value = 0.904660302047;

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
    msg.setTimeStamp(0.67578277677);
    msg.setSource(46231U);
    msg.setSourceEntity(2U);
    msg.setDestination(25992U);
    msg.setDestinationEntity(232U);
    msg.value = 0.775723019153;

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
    msg.setTimeStamp(0.0375126097187);
    msg.setSource(21282U);
    msg.setSourceEntity(155U);
    msg.setDestination(17879U);
    msg.setDestinationEntity(164U);
    msg.value = 0.86309153469;

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
    msg.setTimeStamp(0.903563375825);
    msg.setSource(14596U);
    msg.setSourceEntity(139U);
    msg.setDestination(8706U);
    msg.setDestinationEntity(187U);
    msg.value = 0.268924037478;

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
    msg.setTimeStamp(0.74627242687);
    msg.setSource(61554U);
    msg.setSourceEntity(36U);
    msg.setDestination(57325U);
    msg.setDestinationEntity(103U);
    msg.value = 0.719259629331;

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
    msg.setTimeStamp(0.998527544579);
    msg.setSource(29993U);
    msg.setSourceEntity(113U);
    msg.setDestination(43020U);
    msg.setDestinationEntity(20U);
    msg.value = 0.730337526552;

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
    msg.setTimeStamp(0.113287087451);
    msg.setSource(61038U);
    msg.setSourceEntity(78U);
    msg.setDestination(47561U);
    msg.setDestinationEntity(230U);
    msg.value = 0.399580669564;

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
    msg.setTimeStamp(0.993013595234);
    msg.setSource(50928U);
    msg.setSourceEntity(214U);
    msg.setDestination(61083U);
    msg.setDestinationEntity(107U);
    msg.value = 0.675281591025;

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
    msg.setTimeStamp(0.0307291780521);
    msg.setSource(48761U);
    msg.setSourceEntity(210U);
    msg.setDestination(24465U);
    msg.setDestinationEntity(108U);
    msg.path_ref = 2148752451U;
    msg.start_lat = 0.662645171908;
    msg.start_lon = 0.513343572927;
    msg.start_z = 0.306920658503;
    msg.start_z_units = 133U;
    msg.end_lat = 0.625542709793;
    msg.end_lon = 0.850056020241;
    msg.end_z = 0.128886693214;
    msg.end_z_units = 135U;
    msg.speed = 0.786697969365;
    msg.speed_units = 48U;
    msg.lradius = 0.387971476403;
    msg.flags = 85U;

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
    msg.setTimeStamp(0.802672802494);
    msg.setSource(45114U);
    msg.setSourceEntity(150U);
    msg.setDestination(63918U);
    msg.setDestinationEntity(57U);
    msg.path_ref = 3294047146U;
    msg.start_lat = 0.138320030128;
    msg.start_lon = 0.276189517738;
    msg.start_z = 0.40979688891;
    msg.start_z_units = 98U;
    msg.end_lat = 0.349236703602;
    msg.end_lon = 0.566868947809;
    msg.end_z = 0.0962533734693;
    msg.end_z_units = 145U;
    msg.speed = 0.1379543455;
    msg.speed_units = 215U;
    msg.lradius = 0.202431227414;
    msg.flags = 161U;

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
    msg.setTimeStamp(0.547365853672);
    msg.setSource(21126U);
    msg.setSourceEntity(14U);
    msg.setDestination(44767U);
    msg.setDestinationEntity(69U);
    msg.path_ref = 3154429870U;
    msg.start_lat = 0.205809576816;
    msg.start_lon = 0.768903914959;
    msg.start_z = 0.591243118714;
    msg.start_z_units = 128U;
    msg.end_lat = 0.464754662281;
    msg.end_lon = 0.408241329691;
    msg.end_z = 0.103864807255;
    msg.end_z_units = 175U;
    msg.speed = 0.232381523111;
    msg.speed_units = 57U;
    msg.lradius = 0.788672943678;
    msg.flags = 67U;

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
    msg.setTimeStamp(0.517384750513);
    msg.setSource(8113U);
    msg.setSourceEntity(174U);
    msg.setDestination(13381U);
    msg.setDestinationEntity(11U);
    msg.x = 0.984031606631;
    msg.y = 0.627639124532;
    msg.z = 0.310180795169;
    msg.k = 0.486896745434;
    msg.m = 0.433653950709;
    msg.n = 0.198324230532;
    msg.flags = 242U;

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
    msg.setTimeStamp(0.611834609209);
    msg.setSource(61540U);
    msg.setSourceEntity(243U);
    msg.setDestination(46773U);
    msg.setDestinationEntity(167U);
    msg.x = 0.298808638252;
    msg.y = 0.987343344851;
    msg.z = 0.358679293479;
    msg.k = 0.804590423433;
    msg.m = 0.0545207226523;
    msg.n = 0.563272473342;
    msg.flags = 26U;

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
    msg.setTimeStamp(0.406523156311);
    msg.setSource(17449U);
    msg.setSourceEntity(216U);
    msg.setDestination(49253U);
    msg.setDestinationEntity(20U);
    msg.x = 0.0202002916442;
    msg.y = 0.762778448396;
    msg.z = 0.711585221637;
    msg.k = 0.0522772521868;
    msg.m = 0.950504865067;
    msg.n = 0.670922025847;
    msg.flags = 128U;

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
    msg.setTimeStamp(0.292261983374);
    msg.setSource(58631U);
    msg.setSourceEntity(129U);
    msg.setDestination(4188U);
    msg.setDestinationEntity(13U);
    msg.value = 0.309519000278;

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
    msg.setTimeStamp(0.376591320234);
    msg.setSource(49886U);
    msg.setSourceEntity(171U);
    msg.setDestination(58411U);
    msg.setDestinationEntity(178U);
    msg.value = 0.843714985659;

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
    msg.setTimeStamp(0.140064471463);
    msg.setSource(37243U);
    msg.setSourceEntity(51U);
    msg.setDestination(34229U);
    msg.setDestinationEntity(253U);
    msg.value = 0.930673229456;

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
    msg.setTimeStamp(0.00663325916094);
    msg.setSource(46874U);
    msg.setSourceEntity(178U);
    msg.setDestination(26963U);
    msg.setDestinationEntity(21U);
    msg.u = 0.930980784169;
    msg.v = 0.473165536946;
    msg.w = 0.708356645786;
    msg.p = 0.715267871535;
    msg.q = 0.772499632247;
    msg.r = 0.164879214408;
    msg.flags = 152U;

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
    msg.setTimeStamp(0.00420380853711);
    msg.setSource(24670U);
    msg.setSourceEntity(150U);
    msg.setDestination(52266U);
    msg.setDestinationEntity(127U);
    msg.u = 0.196439758611;
    msg.v = 0.309626340191;
    msg.w = 0.669472356519;
    msg.p = 0.815382138203;
    msg.q = 0.935714817028;
    msg.r = 0.437621510878;
    msg.flags = 205U;

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
    msg.setTimeStamp(0.947291634027);
    msg.setSource(26112U);
    msg.setSourceEntity(190U);
    msg.setDestination(23707U);
    msg.setDestinationEntity(143U);
    msg.u = 0.331110904619;
    msg.v = 0.2781219183;
    msg.w = 0.225345382874;
    msg.p = 0.898076375532;
    msg.q = 0.883228973126;
    msg.r = 0.939453182595;
    msg.flags = 2U;

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
    msg.setTimeStamp(0.319353354551);
    msg.setSource(12771U);
    msg.setSourceEntity(93U);
    msg.setDestination(6855U);
    msg.setDestinationEntity(88U);
    msg.path_ref = 3883975869U;
    msg.start_lat = 0.241399569397;
    msg.start_lon = 0.39679768962;
    msg.start_z = 0.206797762827;
    msg.start_z_units = 44U;
    msg.end_lat = 0.00568149335719;
    msg.end_lon = 0.379087414929;
    msg.end_z = 0.218434292061;
    msg.end_z_units = 244U;
    msg.lradius = 0.735695275602;
    msg.flags = 77U;
    msg.x = 0.619605701766;
    msg.y = 0.98391589527;
    msg.z = 0.0945948036768;
    msg.vx = 0.261168639203;
    msg.vy = 0.614675495741;
    msg.vz = 0.437336580864;
    msg.course_error = 0.516711448335;
    msg.eta = 57387U;

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
    msg.setTimeStamp(0.735948720119);
    msg.setSource(4535U);
    msg.setSourceEntity(250U);
    msg.setDestination(41103U);
    msg.setDestinationEntity(253U);
    msg.path_ref = 4225300786U;
    msg.start_lat = 0.785326729908;
    msg.start_lon = 0.335967405007;
    msg.start_z = 0.0820863736858;
    msg.start_z_units = 184U;
    msg.end_lat = 0.991039453981;
    msg.end_lon = 0.161457049177;
    msg.end_z = 0.933736431643;
    msg.end_z_units = 7U;
    msg.lradius = 0.754239618691;
    msg.flags = 188U;
    msg.x = 0.495354567964;
    msg.y = 0.200339431949;
    msg.z = 0.96544496396;
    msg.vx = 0.718912962046;
    msg.vy = 0.968840169103;
    msg.vz = 0.880751969843;
    msg.course_error = 0.164965405968;
    msg.eta = 27315U;

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
    msg.setTimeStamp(0.0749766112072);
    msg.setSource(29637U);
    msg.setSourceEntity(186U);
    msg.setDestination(619U);
    msg.setDestinationEntity(32U);
    msg.path_ref = 854344826U;
    msg.start_lat = 0.207052352807;
    msg.start_lon = 0.576691183419;
    msg.start_z = 0.891055039265;
    msg.start_z_units = 183U;
    msg.end_lat = 0.715294281714;
    msg.end_lon = 0.0425895325655;
    msg.end_z = 0.12548182343;
    msg.end_z_units = 57U;
    msg.lradius = 0.415576540178;
    msg.flags = 180U;
    msg.x = 0.209022260316;
    msg.y = 0.794550524082;
    msg.z = 0.168317794027;
    msg.vx = 0.212000841477;
    msg.vy = 0.74633540395;
    msg.vz = 0.640043625241;
    msg.course_error = 0.517809641327;
    msg.eta = 31670U;

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
    msg.setTimeStamp(0.642113457453);
    msg.setSource(5791U);
    msg.setSourceEntity(222U);
    msg.setDestination(16136U);
    msg.setDestinationEntity(72U);
    msg.k = 0.237566169967;
    msg.m = 0.385225123164;
    msg.n = 0.410879658394;

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
    msg.setTimeStamp(0.20025567272);
    msg.setSource(12338U);
    msg.setSourceEntity(154U);
    msg.setDestination(8533U);
    msg.setDestinationEntity(64U);
    msg.k = 0.387998390324;
    msg.m = 0.0249541640172;
    msg.n = 0.556157912505;

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
    msg.setTimeStamp(0.820770287569);
    msg.setSource(45921U);
    msg.setSourceEntity(147U);
    msg.setDestination(459U);
    msg.setDestinationEntity(135U);
    msg.k = 0.26267867493;
    msg.m = 0.774073535331;
    msg.n = 0.327972136373;

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
    msg.setTimeStamp(0.859584668923);
    msg.setSource(42069U);
    msg.setSourceEntity(103U);
    msg.setDestination(573U);
    msg.setDestinationEntity(8U);
    msg.p = 0.767208107181;
    msg.i = 0.39813087885;
    msg.d = 0.292672532766;
    msg.a = 0.647100251343;

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
    msg.setTimeStamp(0.45663703292);
    msg.setSource(34934U);
    msg.setSourceEntity(5U);
    msg.setDestination(62983U);
    msg.setDestinationEntity(20U);
    msg.p = 0.421629555801;
    msg.i = 0.654031881225;
    msg.d = 0.293677021975;
    msg.a = 0.255088208978;

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
    msg.setTimeStamp(0.905025456097);
    msg.setSource(54542U);
    msg.setSourceEntity(169U);
    msg.setDestination(84U);
    msg.setDestinationEntity(209U);
    msg.p = 0.103003904498;
    msg.i = 0.580104422745;
    msg.d = 0.698199334973;
    msg.a = 0.604619150038;

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
    msg.setTimeStamp(0.955442541289);
    msg.setSource(28287U);
    msg.setSourceEntity(7U);
    msg.setDestination(26101U);
    msg.setDestinationEntity(25U);
    msg.op = 74U;

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
    msg.setTimeStamp(0.967699427631);
    msg.setSource(9112U);
    msg.setSourceEntity(110U);
    msg.setDestination(36520U);
    msg.setDestinationEntity(25U);
    msg.op = 40U;

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
    msg.setTimeStamp(0.261290531527);
    msg.setSource(57038U);
    msg.setSourceEntity(252U);
    msg.setDestination(25769U);
    msg.setDestinationEntity(220U);
    msg.op = 93U;

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
    msg.setTimeStamp(0.572953588077);
    msg.setSource(16909U);
    msg.setSourceEntity(6U);
    msg.setDestination(2297U);
    msg.setDestinationEntity(222U);
    msg.x = 0.378217878517;
    msg.y = 0.661527304875;
    msg.z = 0.950291206056;
    msg.vx = 0.0612878066041;
    msg.vy = 0.902754580854;
    msg.vz = 0.628149135467;
    msg.ax = 0.69995666566;
    msg.ay = 0.519308912425;
    msg.az = 0.272697702371;
    msg.flags = 2742U;

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
    msg.setTimeStamp(0.871940682965);
    msg.setSource(874U);
    msg.setSourceEntity(224U);
    msg.setDestination(26813U);
    msg.setDestinationEntity(48U);
    msg.x = 0.515418059453;
    msg.y = 0.0822320324534;
    msg.z = 0.0379377223269;
    msg.vx = 0.531080194467;
    msg.vy = 0.472519693724;
    msg.vz = 0.0777764401239;
    msg.ax = 0.456036042799;
    msg.ay = 0.182725253112;
    msg.az = 0.0626026417266;
    msg.flags = 21778U;

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
    msg.setTimeStamp(0.757224462214);
    msg.setSource(50709U);
    msg.setSourceEntity(237U);
    msg.setDestination(12194U);
    msg.setDestinationEntity(207U);
    msg.x = 0.696873022192;
    msg.y = 0.664411156952;
    msg.z = 0.376012506828;
    msg.vx = 0.10837512749;
    msg.vy = 0.212819377375;
    msg.vz = 0.552030482899;
    msg.ax = 0.862916608692;
    msg.ay = 0.515803219208;
    msg.az = 0.131105588713;
    msg.flags = 20596U;

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
    msg.setTimeStamp(0.12263430096);
    msg.setSource(28190U);
    msg.setSourceEntity(223U);
    msg.setDestination(34758U);
    msg.setDestinationEntity(184U);
    msg.value = 0.781131418435;

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
    msg.setTimeStamp(0.614985601535);
    msg.setSource(14387U);
    msg.setSourceEntity(157U);
    msg.setDestination(47892U);
    msg.setDestinationEntity(138U);
    msg.value = 0.351465720794;

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
    msg.setTimeStamp(0.736652443502);
    msg.setSource(38000U);
    msg.setSourceEntity(7U);
    msg.setDestination(22656U);
    msg.setDestinationEntity(87U);
    msg.value = 0.276852808399;

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
    msg.setTimeStamp(0.125622184443);
    msg.setSource(4437U);
    msg.setSourceEntity(37U);
    msg.setDestination(35525U);
    msg.setDestinationEntity(171U);
    msg.timeout = 27880U;
    msg.lat = 0.228200944005;
    msg.lon = 0.676901793271;
    msg.z = 0.24215044668;
    msg.z_units = 20U;
    msg.speed = 0.752189955215;
    msg.speed_units = 12U;
    msg.roll = 0.978701285273;
    msg.pitch = 0.219347976249;
    msg.yaw = 0.647592402429;
    msg.custom.assign("UTQAJZAXEUPFZEDUJHKBWNENFMYSHHBUYZTRTKEMLSIAGJPTRCASXDIPPPCJXMWUJXHHMHFCIQVCKVLMNHVBJCEMUSZLOJNLKIEYYPGSTCKQLODJROWLLUQVRHRCALNQYQPYEIPRWSTU");

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
    msg.setTimeStamp(0.0829401744235);
    msg.setSource(44089U);
    msg.setSourceEntity(98U);
    msg.setDestination(33796U);
    msg.setDestinationEntity(10U);
    msg.timeout = 21857U;
    msg.lat = 0.186016810098;
    msg.lon = 0.0404003254418;
    msg.z = 0.905253565085;
    msg.z_units = 57U;
    msg.speed = 0.350558021445;
    msg.speed_units = 34U;
    msg.roll = 0.15001729876;
    msg.pitch = 0.0276118232666;
    msg.yaw = 0.577436198971;
    msg.custom.assign("GHBBBWDJOQQBGPWHKDXIXNUZXIVWTZMEJSCITBDZJKWALFRCKWKTIKNCLJAQYZPLMAHDTSMRABLWDQPHRUVPTIHRINYCGGXXAGUQLQOEQMZZJYNOPNFOEXSJOXAGXBJHJRYKEESVLFZFEBEZSUGRVFNFHUZYYSIMMMINCQOUJFKYWSUMCMTOLJPTTNZVLBCSNVTQ");

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
    msg.setTimeStamp(0.422498342072);
    msg.setSource(60659U);
    msg.setSourceEntity(242U);
    msg.setDestination(28550U);
    msg.setDestinationEntity(51U);
    msg.timeout = 26825U;
    msg.lat = 0.784778201851;
    msg.lon = 0.62580346305;
    msg.z = 0.514493074592;
    msg.z_units = 17U;
    msg.speed = 0.455706104498;
    msg.speed_units = 6U;
    msg.roll = 0.781186469802;
    msg.pitch = 0.31361759412;
    msg.yaw = 0.660419004748;
    msg.custom.assign("VKDFMKHUASZQEPCPBQUVXIXTOSDCCLNONTZZLIHEQYGWAMIVBDIRFNRYKZIGAVQOJPHTYYRWZBHKFUNPFHSBYAXSROYLYUPLGIFFVQOCJZPKCWJXWCULLFCONXELQJJDSKOSLUYVOJJDXWHRZTLWEVMGLMQXMGEDSPXXKITMEUHVCAJUATSTWNUDEIDPOGNQMHFZHEXRNPAGBMKZTA");

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
    msg.setTimeStamp(0.481526922542);
    msg.setSource(60952U);
    msg.setSourceEntity(137U);
    msg.setDestination(3369U);
    msg.setDestinationEntity(126U);
    msg.timeout = 24599U;
    msg.lat = 0.176981519641;
    msg.lon = 0.338635903592;
    msg.z = 0.769951146367;
    msg.z_units = 138U;
    msg.speed = 0.23480800982;
    msg.speed_units = 71U;
    msg.duration = 3329U;
    msg.radius = 0.62097937074;
    msg.flags = 52U;
    msg.custom.assign("IVVEFPSSGOLWWEKUYSUWLHQFJVNMTRHHHFKBNAMOVBPAGSCWLOUKFOTMUERHKRT");

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
    msg.setTimeStamp(0.318146822651);
    msg.setSource(54705U);
    msg.setSourceEntity(97U);
    msg.setDestination(49141U);
    msg.setDestinationEntity(38U);
    msg.timeout = 52811U;
    msg.lat = 0.457656119829;
    msg.lon = 0.0672566275758;
    msg.z = 0.980865499661;
    msg.z_units = 34U;
    msg.speed = 0.766837304061;
    msg.speed_units = 6U;
    msg.duration = 52021U;
    msg.radius = 0.234072603307;
    msg.flags = 110U;
    msg.custom.assign("NWXFPBTTNSDZFZKYAZMCVLFFTEPHMTMLDHNGEEIKAITVBQGWIVLVXRLPDDUUKHLCAWNOWQKWCYMVKOOSCDHNPWYNMUDMYGJZEBLKXYAQBIRYJMRNZOQCMWDYMSCDLVLBDZQIHFKFXLPJGNSCZHTFQKPJRCZJJGHXOYREOEGUUES");

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
    msg.setTimeStamp(0.342922453701);
    msg.setSource(42294U);
    msg.setSourceEntity(74U);
    msg.setDestination(41482U);
    msg.setDestinationEntity(31U);
    msg.timeout = 7787U;
    msg.lat = 0.0151312818096;
    msg.lon = 0.0719849007127;
    msg.z = 0.921821905553;
    msg.z_units = 74U;
    msg.speed = 0.321511871571;
    msg.speed_units = 161U;
    msg.duration = 60613U;
    msg.radius = 0.279497011464;
    msg.flags = 30U;
    msg.custom.assign("ZNOJLBMFJUCPKAPGTYXWHVVYLSTBDHSDERMCAGZTXYJKZGUUXZIILKBQDRRWRKCNHWFTPYVSWZEAUZFEBXFFHDCBBRWHLQVUNVRJRCTJQZSXAAVGWKNPLXLQIXDJJYGQIEPCWOEHVMODHPMNKOMIWKDPQGHSKYCPVTFFUGYDPSQAZINTLXMRLJNDMR");

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
    msg.setTimeStamp(0.226974182592);
    msg.setSource(3892U);
    msg.setSourceEntity(149U);
    msg.setDestination(63196U);
    msg.setDestinationEntity(104U);
    msg.custom.assign("EAQTVYNVBCLNKMUOGGSIBBCCRZJCAXWLWDQPGUWVJHGJBNRIWJDCVGQIHFLAWFRRLCPWHCOAKHFKPDSXCNWUENEVX");

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
    msg.setTimeStamp(0.792179984627);
    msg.setSource(60786U);
    msg.setSourceEntity(148U);
    msg.setDestination(57321U);
    msg.setDestinationEntity(211U);
    msg.custom.assign("JLZLGHMHRUZAFKJRIVUGXTCAGWLVIBIYIZUJFFYXIHSOBYNWBCLFCFQPWVKNSNBDUSNFPXUDZQ");

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
    msg.setTimeStamp(0.325230448726);
    msg.setSource(41832U);
    msg.setSourceEntity(27U);
    msg.setDestination(29048U);
    msg.setDestinationEntity(59U);
    msg.custom.assign("AHEVGDPRSXQYBHOSPXEBOKPSBTKBOBBNQTRKHMIQYLQWVZRXYJZGXSRGNDVDUNJLQCJLHDVJSIGGIWLXEHZUAMUKPUMVEWLK");

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
    msg.setTimeStamp(0.108071485284);
    msg.setSource(46418U);
    msg.setSourceEntity(196U);
    msg.setDestination(57552U);
    msg.setDestinationEntity(206U);
    msg.timeout = 27549U;
    msg.lat = 0.749028611132;
    msg.lon = 0.229363443672;
    msg.z = 0.407856121677;
    msg.z_units = 145U;
    msg.duration = 41842U;
    msg.speed = 0.325996542887;
    msg.speed_units = 144U;
    msg.type = 160U;
    msg.radius = 0.798960107205;
    msg.length = 0.202007101173;
    msg.bearing = 0.00779658127117;
    msg.direction = 141U;
    msg.custom.assign("MBLLTJVBUEORFBDPTJFZCKRJXWYNHCESHKBIFTZYSAGCJQQQEIASLYPVVXIMYQXGTMNLERIYSOUTGVVFAXNORPZMDMSYPDZOHEAXZRJTDNRFVJHGUFTRQBLCFRVFIKPQUSWJSCIOAEXDOLAKUXPWGVMZKFCSADMPDTKPKGDIIWNLNNSMTUHECKUIBBGHVXBELKJMGCJLXHRWDQDTYJ");

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
    msg.setTimeStamp(0.289814411964);
    msg.setSource(6951U);
    msg.setSourceEntity(71U);
    msg.setDestination(38187U);
    msg.setDestinationEntity(179U);
    msg.timeout = 35192U;
    msg.lat = 0.066033062329;
    msg.lon = 0.660570509205;
    msg.z = 0.149311525657;
    msg.z_units = 219U;
    msg.duration = 57477U;
    msg.speed = 0.00852330039638;
    msg.speed_units = 52U;
    msg.type = 2U;
    msg.radius = 0.444686588931;
    msg.length = 0.905324658508;
    msg.bearing = 0.64881115667;
    msg.direction = 18U;
    msg.custom.assign("HOXCMWNBLADOKTXXMPKHMAITQMZEXACRNTSLZXQUNLMPWJFSOKPROVB");

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
    msg.setTimeStamp(0.989987006405);
    msg.setSource(56303U);
    msg.setSourceEntity(27U);
    msg.setDestination(44519U);
    msg.setDestinationEntity(167U);
    msg.timeout = 64238U;
    msg.lat = 0.79311624768;
    msg.lon = 0.83078440222;
    msg.z = 0.682082884575;
    msg.z_units = 223U;
    msg.duration = 63529U;
    msg.speed = 0.723003106183;
    msg.speed_units = 48U;
    msg.type = 165U;
    msg.radius = 0.157348335178;
    msg.length = 0.32203861606;
    msg.bearing = 0.123689897803;
    msg.direction = 121U;
    msg.custom.assign("QQLGQRKTGTBDZCWQSIRKJKAZWYDHQZOIYVVJXDCCZZLWVHPFR");

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
    msg.setTimeStamp(0.532924128624);
    msg.setSource(36470U);
    msg.setSourceEntity(141U);
    msg.setDestination(13894U);
    msg.setDestinationEntity(254U);
    msg.duration = 42488U;
    msg.custom.assign("FRFTCJKMXVVNOBOFVMHNLRKBIMRHWNGTXICZPATSUZPAKUKUXABBITSENENGJWYHEVTAOUWBRJDPQRRJYIQYRLUFLQKGOBBPLMJAICVHZFAHEJNYNKQQJWDSNBMZTWIHCYDYZIHJDHXRKHZNUGOXOEOLLCZQKOWSWYUWQ");

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
    msg.setTimeStamp(0.50991823409);
    msg.setSource(42667U);
    msg.setSourceEntity(251U);
    msg.setDestination(18205U);
    msg.setDestinationEntity(98U);
    msg.duration = 3081U;
    msg.custom.assign("OINSGZACZKGVALUCYPRIHRDPJJWDADTUPWPKTXXBIHRAKZIWOZYYDFMFQNBLFHRGPNMZNDWQMHBMMOBASZSGWMFFJGXVNBIUSXXMNHZKBERQQORUDFFTJIGRPGRVLF");

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
    msg.setTimeStamp(0.335488858589);
    msg.setSource(23553U);
    msg.setSourceEntity(238U);
    msg.setDestination(17211U);
    msg.setDestinationEntity(113U);
    msg.duration = 49454U;
    msg.custom.assign("UCLUBLJXDHFWYWCXVRLFRVTNVFECLDGMJLKNTILHYZXIAONJPMAZZKTQNCMHMPFPLKTRLPQUSMLABAWGCEISL");

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
    msg.setTimeStamp(0.673787872082);
    msg.setSource(51084U);
    msg.setSourceEntity(94U);
    msg.setDestination(27694U);
    msg.setDestinationEntity(60U);
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.333077190084;
    tmp_msg_0.speed_units = 9U;
    msg.control.set(tmp_msg_0);
    msg.duration = 10721U;
    msg.custom.assign("RRLEMIFMSIIZVXGZCWWZVGELOKUTRGBDHNROFYQWZIM");

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
    msg.setTimeStamp(0.162677507797);
    msg.setSource(13187U);
    msg.setSourceEntity(165U);
    msg.setDestination(15668U);
    msg.setDestinationEntity(24U);
    IMC::DesiredThrottle tmp_msg_0;
    tmp_msg_0.value = 0.197726483364;
    msg.control.set(tmp_msg_0);
    msg.duration = 33752U;
    msg.custom.assign("MAHVTLSIDMYKMOBTJGIEFOJEJUCCXQZSJPXIGPGTGYREVRTIWDQBUTOFINKPXRVMGYECKNWWDAZALREGTKPJZCGNTVVFHNAWTZPIWEHSCHHMLZOJQGXPKCSQLDLZNLYIFMIEFTPPSA");

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
    msg.setTimeStamp(0.585783284173);
    msg.setSource(21037U);
    msg.setSourceEntity(153U);
    msg.setDestination(28833U);
    msg.setDestinationEntity(191U);
    IMC::DesiredZ tmp_msg_0;
    tmp_msg_0.value = 0.788826950659;
    tmp_msg_0.z_units = 208U;
    msg.control.set(tmp_msg_0);
    msg.duration = 12751U;
    msg.custom.assign("VMXFGOCPJCTYZHIMPBMSSPVDKWAELLCSAWFEBQEPWSPTQEMQM");

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
    msg.setTimeStamp(0.892396176392);
    msg.setSource(25964U);
    msg.setSourceEntity(217U);
    msg.setDestination(31432U);
    msg.setDestinationEntity(24U);
    msg.timeout = 20316U;
    msg.lat = 0.424402343988;
    msg.lon = 0.920948816636;
    msg.z = 0.103965289817;
    msg.z_units = 19U;
    msg.speed = 0.297131760552;
    msg.speed_units = 51U;
    msg.bearing = 0.287102237031;
    msg.cross_angle = 0.848120431439;
    msg.width = 0.396921187383;
    msg.length = 0.873900045997;
    msg.hstep = 0.0820220104734;
    msg.coff = 181U;
    msg.alternation = 236U;
    msg.flags = 130U;
    msg.custom.assign("KEDIQMIUVALBBBDCCSQWRFOCCQHGXYHMNOHASNOPCDX");

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
    msg.setTimeStamp(0.448696807157);
    msg.setSource(1318U);
    msg.setSourceEntity(184U);
    msg.setDestination(41782U);
    msg.setDestinationEntity(252U);
    msg.timeout = 8028U;
    msg.lat = 0.792723666089;
    msg.lon = 0.557784772195;
    msg.z = 0.39687722964;
    msg.z_units = 164U;
    msg.speed = 0.930848587387;
    msg.speed_units = 149U;
    msg.bearing = 0.205390389209;
    msg.cross_angle = 0.378104998507;
    msg.width = 0.542534945986;
    msg.length = 0.0571062080359;
    msg.hstep = 0.159572167377;
    msg.coff = 201U;
    msg.alternation = 231U;
    msg.flags = 73U;
    msg.custom.assign("LWIPHNJCGRKLZMTMLLYBAORSTEDYXEGHRKNQEUFAVUZOXDBXVAUTHMMSVZJLYQYAKLLJJAZJXZBNHQFFPWTIVMSBMDHANNGRFOWDJHSVGPKXIYSRFOKZKUZIKMASJTGXWJOSDLNOMXHUTE");

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
    msg.setTimeStamp(0.0657018562788);
    msg.setSource(2313U);
    msg.setSourceEntity(120U);
    msg.setDestination(44300U);
    msg.setDestinationEntity(30U);
    msg.timeout = 33247U;
    msg.lat = 0.949226960773;
    msg.lon = 0.715457662135;
    msg.z = 0.453948836981;
    msg.z_units = 107U;
    msg.speed = 0.219943911479;
    msg.speed_units = 227U;
    msg.bearing = 0.958784833891;
    msg.cross_angle = 0.474953629365;
    msg.width = 0.52843628162;
    msg.length = 0.5294005746;
    msg.hstep = 0.0526053533594;
    msg.coff = 147U;
    msg.alternation = 183U;
    msg.flags = 215U;
    msg.custom.assign("XEMGZFXDOUJOSXBMUWXMDJQTBEJXTRUHGKLCADTSVIYMSNPJVHNQHRYMDPGMPVWPEWZDVYGIQIBGHRNOFTZHECSZIHWSHUDRFGLOWRRBXMPTBUELVCKSUYQVOSYHTLTISULXBMXENWIQSZSKYJPYAUBDFNAXLVIGDZIKYQYTNAOJAVNCWXLJTWNMNGJCAOGPRCZKIBCPNEHVFDZBUKFFWAJCRRFHQ");

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
    msg.setTimeStamp(0.323971860862);
    msg.setSource(9838U);
    msg.setSourceEntity(183U);
    msg.setDestination(17305U);
    msg.setDestinationEntity(51U);
    msg.timeout = 34866U;
    msg.lat = 0.950419455827;
    msg.lon = 0.841967314233;
    msg.z = 0.974630407547;
    msg.z_units = 197U;
    msg.speed = 0.215732425559;
    msg.speed_units = 155U;
    msg.custom.assign("XNIVXRQEPWJYORLGKKXGRFERQTGBSKWCNTUWLEQZMKNTGURWDVPARMSIOYDUPURUCYZWNDIAZFQHOMIPSCYEBPGHHQOBOGVQCJZFUYPSLFOSAUQAEHWUKYXL");

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
    msg.setTimeStamp(0.9377416843);
    msg.setSource(8083U);
    msg.setSourceEntity(168U);
    msg.setDestination(39804U);
    msg.setDestinationEntity(127U);
    msg.timeout = 44948U;
    msg.lat = 0.281427747533;
    msg.lon = 0.862691276872;
    msg.z = 0.129088949175;
    msg.z_units = 35U;
    msg.speed = 0.938882443681;
    msg.speed_units = 151U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.510167934931;
    tmp_msg_0.y = 0.0613457854211;
    tmp_msg_0.z = 0.0146272560643;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("VWHNTRRBJDCFTUKOZQLAFDMYWRUEEOEKJGS");

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
    msg.setTimeStamp(0.86872113745);
    msg.setSource(38890U);
    msg.setSourceEntity(1U);
    msg.setDestination(55074U);
    msg.setDestinationEntity(148U);
    msg.timeout = 63086U;
    msg.lat = 0.0346839202915;
    msg.lon = 0.472564066069;
    msg.z = 0.962606566165;
    msg.z_units = 97U;
    msg.speed = 0.663993605922;
    msg.speed_units = 91U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.35447910445;
    tmp_msg_0.y = 0.441586740483;
    tmp_msg_0.z = 0.166696125585;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("TEQNWYAMEJOWIPCXRNYXGPROWVEVEKOPJCOCOSFDOMDQEPDTURSNDGQGWW");

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
    msg.setTimeStamp(0.542574948333);
    msg.setSource(5854U);
    msg.setSourceEntity(153U);
    msg.setDestination(45413U);
    msg.setDestinationEntity(19U);
    msg.x = 0.263407483125;
    msg.y = 0.591677034644;
    msg.z = 0.923801390452;

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
    msg.setTimeStamp(0.851002509094);
    msg.setSource(35353U);
    msg.setSourceEntity(174U);
    msg.setDestination(44769U);
    msg.setDestinationEntity(2U);
    msg.x = 0.608639174134;
    msg.y = 0.846921145751;
    msg.z = 0.462167302399;

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
    msg.setTimeStamp(0.0737167041561);
    msg.setSource(22994U);
    msg.setSourceEntity(188U);
    msg.setDestination(10273U);
    msg.setDestinationEntity(248U);
    msg.x = 0.137359113507;
    msg.y = 0.492838735551;
    msg.z = 0.499382727331;

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
    msg.setTimeStamp(0.868551947368);
    msg.setSource(35256U);
    msg.setSourceEntity(51U);
    msg.setDestination(63939U);
    msg.setDestinationEntity(101U);
    msg.timeout = 27689U;
    msg.lat = 0.512516835542;
    msg.lon = 0.573572915669;
    msg.z = 0.0392061681095;
    msg.z_units = 154U;
    msg.amplitude = 0.344800778447;
    msg.pitch = 0.492935182566;
    msg.speed = 0.478984034147;
    msg.speed_units = 247U;
    msg.custom.assign("TFWDEMNUUS");

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
    msg.setTimeStamp(0.88672186121);
    msg.setSource(52850U);
    msg.setSourceEntity(198U);
    msg.setDestination(28398U);
    msg.setDestinationEntity(50U);
    msg.timeout = 52576U;
    msg.lat = 0.808844374285;
    msg.lon = 0.267498894816;
    msg.z = 0.697013252087;
    msg.z_units = 1U;
    msg.amplitude = 0.12528650199;
    msg.pitch = 0.633359495568;
    msg.speed = 0.615285848792;
    msg.speed_units = 107U;
    msg.custom.assign("OJNTBABYYSCSNCUIEVXHFUWBDPGGJOUFIKPCWFJKPWVVK");

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
    msg.setTimeStamp(0.822774120337);
    msg.setSource(40836U);
    msg.setSourceEntity(214U);
    msg.setDestination(28259U);
    msg.setDestinationEntity(22U);
    msg.timeout = 60968U;
    msg.lat = 0.386894092925;
    msg.lon = 0.260387779408;
    msg.z = 0.119371150901;
    msg.z_units = 41U;
    msg.amplitude = 0.0851723370894;
    msg.pitch = 0.845387026455;
    msg.speed = 0.384501407161;
    msg.speed_units = 193U;
    msg.custom.assign("RGLTOGGRFLPJYYPVHUKJDSVIECTEXG");

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
    msg.setTimeStamp(0.167578128249);
    msg.setSource(22918U);
    msg.setSourceEntity(99U);
    msg.setDestination(11533U);
    msg.setDestinationEntity(194U);

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
    msg.setTimeStamp(0.0658987685804);
    msg.setSource(37258U);
    msg.setSourceEntity(45U);
    msg.setDestination(5062U);
    msg.setDestinationEntity(63U);

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
    msg.setTimeStamp(0.557504445652);
    msg.setSource(63385U);
    msg.setSourceEntity(37U);
    msg.setDestination(51765U);
    msg.setDestinationEntity(112U);

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
    msg.setTimeStamp(0.194880914661);
    msg.setSource(41138U);
    msg.setSourceEntity(228U);
    msg.setDestination(4594U);
    msg.setDestinationEntity(142U);
    msg.lat = 0.981774216967;
    msg.lon = 0.987080698907;
    msg.z = 0.0168328500335;
    msg.z_units = 76U;
    msg.radius = 0.270461335691;
    msg.duration = 33810U;
    msg.speed = 0.0260256210636;
    msg.speed_units = 138U;
    msg.popup_period = 19604U;
    msg.popup_duration = 13620U;
    msg.flags = 45U;
    msg.custom.assign("TLFEGAILEZRUEXUJAOSCMVOGXDEWSFRQYJDUMMHKSCPOQIILZWBGCLIUWGLLMSPBTDLUTDMJAAXYBHHRJSNOAYCAFRAOXWKXRFJQKYMBTUCQYFHJNWXTVXWHNJFWGGTCPYQKRSZATHIDPFRNDIYXATVRLVFIP");

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
    msg.setTimeStamp(0.926656534205);
    msg.setSource(18865U);
    msg.setSourceEntity(124U);
    msg.setDestination(51048U);
    msg.setDestinationEntity(109U);
    msg.lat = 0.553440330951;
    msg.lon = 0.103737048058;
    msg.z = 0.83557771965;
    msg.z_units = 16U;
    msg.radius = 0.79315071523;
    msg.duration = 40452U;
    msg.speed = 0.348834334537;
    msg.speed_units = 37U;
    msg.popup_period = 1826U;
    msg.popup_duration = 42532U;
    msg.flags = 61U;
    msg.custom.assign("NPZAUDKYCVKTQSSBFFWFGMGWJWNPBRZSKIOIKXYGZONBJ");

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
    msg.setTimeStamp(0.259824261065);
    msg.setSource(7835U);
    msg.setSourceEntity(148U);
    msg.setDestination(42244U);
    msg.setDestinationEntity(245U);
    msg.lat = 0.378504883473;
    msg.lon = 0.0335737989775;
    msg.z = 0.163916956422;
    msg.z_units = 147U;
    msg.radius = 0.745959804492;
    msg.duration = 58156U;
    msg.speed = 0.619060933484;
    msg.speed_units = 220U;
    msg.popup_period = 49129U;
    msg.popup_duration = 21209U;
    msg.flags = 65U;
    msg.custom.assign("JAYYZSITAUPEQYZLBOMQHWGGCSVMZMWQOGKSTYIDTWDTUFVPZKQYRHANTRERWYDSYQLFCBUJUYBTGBGVDULNNCIPWIPIERDDKCLGFTMOJMBLMFULVCRFZTZJUXQSKHGPWXHECZLXVKNIV");

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
    msg.setTimeStamp(0.109991692771);
    msg.setSource(25241U);
    msg.setSourceEntity(71U);
    msg.setDestination(6528U);
    msg.setDestinationEntity(71U);
    msg.timeout = 6824U;
    msg.flags = 105U;
    msg.lat = 0.066502611438;
    msg.lon = 0.238006630983;
    msg.start_z = 0.770355231854;
    msg.start_z_units = 229U;
    msg.end_z = 0.860350023268;
    msg.end_z_units = 20U;
    msg.radius = 0.560878471439;
    msg.speed = 0.49133195352;
    msg.speed_units = 113U;
    msg.custom.assign("BYZZQYNGFZFJUWCEABGWYBMGBPUUANNOVEYIRLRPTYKWBXMHLHWXQJCLRFVFZCTZJHIEUGQPCXWVZEHKMKHQLKEOXRWPMRIUCDXDJTQZGQQTLHGGDBDKISNWUSVBDOWNHHTHAMRIYOSOIIKUPJ");

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
    msg.setTimeStamp(0.555151375254);
    msg.setSource(60333U);
    msg.setSourceEntity(250U);
    msg.setDestination(18472U);
    msg.setDestinationEntity(89U);
    msg.timeout = 39337U;
    msg.flags = 193U;
    msg.lat = 0.965945314375;
    msg.lon = 0.33089028006;
    msg.start_z = 0.973615930813;
    msg.start_z_units = 202U;
    msg.end_z = 0.890625808584;
    msg.end_z_units = 70U;
    msg.radius = 0.342397523688;
    msg.speed = 0.0120656322091;
    msg.speed_units = 7U;
    msg.custom.assign("RMJTCFBIPAVPORBPYDOUSLPEZFSBHYXFKRNHZHOIAGQFWNEXTWCYNECDQXOJGUNDKALYFWJHHQSRLCDQKCRZIJZBLTUHWPTLJNFACBWVILANKQZVWASIBKMXAOC");

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
    msg.setTimeStamp(0.610588159518);
    msg.setSource(33972U);
    msg.setSourceEntity(58U);
    msg.setDestination(52973U);
    msg.setDestinationEntity(65U);
    msg.timeout = 47912U;
    msg.flags = 242U;
    msg.lat = 0.275761310297;
    msg.lon = 0.232408942193;
    msg.start_z = 0.24203153228;
    msg.start_z_units = 250U;
    msg.end_z = 0.876584120126;
    msg.end_z_units = 61U;
    msg.radius = 0.791954320733;
    msg.speed = 0.786340352849;
    msg.speed_units = 142U;
    msg.custom.assign("NHDNOZLNHGOGKJTUKOWRRHMHFETCHXIGQVQOGCQESJBUFZSBDVERKGTDVAFBTIFLUJKDLYKYCCLSGYTPCIDEPXQOETYWKBFJKOWBHBHLVMSVPGVJRARYRMZUDSJPWHSAGXFFORFNKDINWRXXHALPNBQJIZHQGCIUCZLWETCWEYVQNJQPFXZPXSLATUJWXYEUNPRIZOUOQGENXKZWCBPTZMBMBZMDAAEMIMFYYMYNALJVWIACXQPASMODV");

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
    msg.setTimeStamp(0.635600264754);
    msg.setSource(19999U);
    msg.setSourceEntity(123U);
    msg.setDestination(38280U);
    msg.setDestinationEntity(111U);
    msg.timeout = 58217U;
    msg.lat = 0.18435176924;
    msg.lon = 0.220222870566;
    msg.z = 0.0843614615595;
    msg.z_units = 65U;
    msg.speed = 0.576083312282;
    msg.speed_units = 100U;
    msg.custom.assign("PANMKZIAXIHUNECDZFGUVDRNOLGFMWQKFKJCEUUYUFWENBJBGVYFRCXNROTVRZXYKMVLQZOGDJSGJILATAKBVYTTIHNWAESSDHSBHNPQROZYPHWDZMXYWJSOXWHEPLLVGZYQEQABJECJUZHSBSVNPMODQDBCTWACRPZTILKJFLUXMGLRCIGLGMTSKWSAMLACUJMUVOEWNEYVQWMBCOPQEKTX");

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
    msg.setTimeStamp(0.487735114115);
    msg.setSource(44206U);
    msg.setSourceEntity(60U);
    msg.setDestination(11490U);
    msg.setDestinationEntity(191U);
    msg.timeout = 37338U;
    msg.lat = 0.308624900027;
    msg.lon = 0.92329579679;
    msg.z = 0.410438140859;
    msg.z_units = 202U;
    msg.speed = 0.170984412721;
    msg.speed_units = 81U;
    msg.custom.assign("GIVBNMTXDFGOQJNMOSMZKDFWIHEMQTWGLZFRWWMVQUIESGZORIMDDOVYKRKUEGHGAAQVPMPHXEZQHDYJKIVYFEEQIQRPDKXZHFCGNPBLUSVOOYKAIAFJYDHDSLNAXTQSXYVOJZTPJZCJAOXAYJJXJSEPQCLJPTCTZHFIPRNLANQKICBLWNUCVUDCNSCBOHGESYMWWLVURRSIVULMULARFADCYBBXSTPNMWTOCKBZNXTFUGYPXHBGLEZK");

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
    msg.setTimeStamp(0.475488366416);
    msg.setSource(3442U);
    msg.setSourceEntity(46U);
    msg.setDestination(2050U);
    msg.setDestinationEntity(4U);
    msg.timeout = 24637U;
    msg.lat = 0.665516329899;
    msg.lon = 0.866566284985;
    msg.z = 0.91643909037;
    msg.z_units = 113U;
    msg.speed = 0.114802469063;
    msg.speed_units = 134U;
    msg.custom.assign("GINWJDRRRXGIOTJNDWGWLOEONSRMTTFVBCZXKKUGNVXZAENOPRXRMPHTOZBFJLJQFSXUCLRGMSGHIBKYUNAUXZXCZURCGDUSTBQQQINOMQITPKWDWMWNBIMCKTZAQPIH");

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
    msg.setTimeStamp(0.264919704778);
    msg.setSource(27771U);
    msg.setSourceEntity(56U);
    msg.setDestination(20652U);
    msg.setDestinationEntity(47U);
    msg.x = 0.553390292013;
    msg.y = 0.897602817263;
    msg.z = 0.722190485057;
    msg.t = 0.0309648609871;

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
    msg.setTimeStamp(0.16786478958);
    msg.setSource(18476U);
    msg.setSourceEntity(126U);
    msg.setDestination(29865U);
    msg.setDestinationEntity(111U);
    msg.x = 0.0395850511365;
    msg.y = 0.341929470785;
    msg.z = 0.418455257517;
    msg.t = 0.523077233224;

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
    msg.setTimeStamp(0.430712650028);
    msg.setSource(64344U);
    msg.setSourceEntity(69U);
    msg.setDestination(31435U);
    msg.setDestinationEntity(5U);
    msg.x = 0.447705619642;
    msg.y = 0.522199982637;
    msg.z = 0.536326352398;
    msg.t = 0.94861820381;

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
    msg.setTimeStamp(0.380966583708);
    msg.setSource(29867U);
    msg.setSourceEntity(28U);
    msg.setDestination(17120U);
    msg.setDestinationEntity(130U);
    msg.timeout = 16232U;
    msg.name.assign("JAYLYTRPXPKNITIVLTIKRLPYSSWHQPEBMLGLHXQQSZEXCEHEUATAKONNLUBQNONDKMHNOUEBCLPKLJMRWAVBDKMWCSRIGJKXGWJEDIYPFITAYJCEZIKVGZHHQDSMKIWTZDFBUERTBBMDSORRXZZROVYUPWSFHBDGGXKQGMZCGDINATJYUAHACBTDGMZEFZJMWFYFFLAHOVXORUVUQPGDCI");
    msg.custom.assign("JZHBYWEIBVXYFXSXWLAZKQBRVAAZGAKOFGDSVEB");

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
    msg.setTimeStamp(0.256296572169);
    msg.setSource(16121U);
    msg.setSourceEntity(84U);
    msg.setDestination(42161U);
    msg.setDestinationEntity(118U);
    msg.timeout = 21810U;
    msg.name.assign("QXZCAILYXOANUFAAFRJEICOBWBVKUNSNKOYOOGSDKIMUIVXVMIJVDWRWKSQXHFYJLGYWHFLEFNBEBRRBEBXZDWWZSMHZRJPBRSPMWKMSHOYPXULCTGQW");
    msg.custom.assign("DMPBPAGZKXLZZUCHKCBMIYOSYHGIOXSXAKKLOPNOMQDOVIJWBMLXWFVGNMFCSPFAVKKQSNOOWKKDRTHLENHAFTEBKUNMQYJURUWGQBSJQOUXJTFTSILSNZDFHCVBZGBUCCJIFRBMNEGMVXCEIYJYJEYZXQUFIAVBZUPJDFEIJMYJUWHDA");

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
    msg.setTimeStamp(0.474904844843);
    msg.setSource(9941U);
    msg.setSourceEntity(157U);
    msg.setDestination(43677U);
    msg.setDestinationEntity(207U);
    msg.timeout = 47989U;
    msg.name.assign("QTMEJAGVDZVDRYNMFWIFAIN");
    msg.custom.assign("MUDDVADLWQIZNZAWUIPCJGLYTARTSPUIMRMHIPIFALCRDJFKVQSFBPFBVGFQKOJJWVNAOUPEVDRHWCLMUPHRCLKQANMVNQMZOXOYKSORLZSDBMMWESLGPHEWLXHNKGQJTCFCRKECIVBEBFGPETBDEWRDXHZXTYTNXYUDTGBQWTVAACSKBZFXNKGFTTIOOG");

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
    msg.setTimeStamp(0.674711483519);
    msg.setSource(43440U);
    msg.setSourceEntity(82U);
    msg.setDestination(40142U);
    msg.setDestinationEntity(17U);
    msg.lat = 0.722451072796;
    msg.lon = 0.152491815366;
    msg.z = 0.89588561372;
    msg.z_units = 71U;
    msg.speed = 0.255039679477;
    msg.speed_units = 152U;
    msg.start_time = 0.527917253068;
    msg.custom.assign("MDQZBYFNCFNEZDTHVCAWAXVRSFPODUHGWXRFVOOQRPYNCOHPMGTSFHVPMHJXXPOYZAO");

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
    msg.setTimeStamp(0.808622735936);
    msg.setSource(50887U);
    msg.setSourceEntity(127U);
    msg.setDestination(37011U);
    msg.setDestinationEntity(228U);
    msg.lat = 0.0875270112029;
    msg.lon = 0.0276331104032;
    msg.z = 0.626451879649;
    msg.z_units = 252U;
    msg.speed = 0.985125576732;
    msg.speed_units = 158U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.878874836359;
    tmp_msg_0.y = 0.875785544863;
    tmp_msg_0.z = 0.862795202954;
    tmp_msg_0.t = 0.770699714456;
    msg.points.push_back(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 30998U;
    tmp_msg_1.off_x = 0.573322738034;
    tmp_msg_1.off_y = 0.0191596311427;
    tmp_msg_1.off_z = 0.773600627436;
    msg.participants.push_back(tmp_msg_1);
    msg.start_time = 0.425640791206;
    msg.custom.assign("WPXXYXNGMTERYGSK");

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
    msg.setTimeStamp(0.428031625941);
    msg.setSource(54887U);
    msg.setSourceEntity(216U);
    msg.setDestination(7866U);
    msg.setDestinationEntity(81U);
    msg.lat = 0.855442105613;
    msg.lon = 0.89341283876;
    msg.z = 0.000541855195201;
    msg.z_units = 203U;
    msg.speed = 0.116559890653;
    msg.speed_units = 14U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.181021620818;
    tmp_msg_0.y = 0.506883820791;
    tmp_msg_0.z = 0.0625550550712;
    tmp_msg_0.t = 0.207243890122;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.392730231874;
    msg.custom.assign("TDJKIXPXZPFTXKBDGSUXWHSEWBMLMEFKRFXYYKWWQOMVTWNPUAZPPWSTJAUILPVCEADCCHUXVPOEIYGGQXOKJMGBLQHAHLDZUOBXRVRKLNTMJRYGQAVZTDYTEDVHRFBFQVYISLFODCVSTQNUWLEMOBNIKUABYDFSGIVNRWYJIZBKRWNHMFCUYIGZSGNLHCLMEGSEQPCKIJGYBUPHNMVKZTJQZDFZWUNJAADNHTXBACOFSZECRQOMJORRCJ");

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
    msg.setTimeStamp(0.581083799013);
    msg.setSource(56130U);
    msg.setSourceEntity(26U);
    msg.setDestination(50250U);
    msg.setDestinationEntity(121U);
    msg.vid = 60944U;
    msg.off_x = 0.0740494591569;
    msg.off_y = 0.750225827424;
    msg.off_z = 0.657783011552;

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
    msg.setTimeStamp(0.791009913749);
    msg.setSource(9930U);
    msg.setSourceEntity(57U);
    msg.setDestination(55969U);
    msg.setDestinationEntity(29U);
    msg.vid = 2333U;
    msg.off_x = 0.33412511351;
    msg.off_y = 0.273818900354;
    msg.off_z = 0.026287617274;

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
    msg.setTimeStamp(0.958954838928);
    msg.setSource(53238U);
    msg.setSourceEntity(26U);
    msg.setDestination(48581U);
    msg.setDestinationEntity(124U);
    msg.vid = 59366U;
    msg.off_x = 0.174691289461;
    msg.off_y = 0.957789474631;
    msg.off_z = 0.51701081766;

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
    msg.setTimeStamp(0.204543721364);
    msg.setSource(10235U);
    msg.setSourceEntity(12U);
    msg.setDestination(56584U);
    msg.setDestinationEntity(247U);

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
    msg.setTimeStamp(0.620814665239);
    msg.setSource(29602U);
    msg.setSourceEntity(202U);
    msg.setDestination(63003U);
    msg.setDestinationEntity(93U);

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
    msg.setTimeStamp(0.806864193521);
    msg.setSource(55700U);
    msg.setSourceEntity(254U);
    msg.setDestination(15788U);
    msg.setDestinationEntity(229U);

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
    msg.setTimeStamp(0.383827104308);
    msg.setSource(15413U);
    msg.setSourceEntity(86U);
    msg.setDestination(55892U);
    msg.setDestinationEntity(211U);
    msg.mid = 41016U;

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
    msg.setTimeStamp(0.780569112854);
    msg.setSource(19157U);
    msg.setSourceEntity(103U);
    msg.setDestination(22807U);
    msg.setDestinationEntity(30U);
    msg.mid = 8016U;

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
    msg.setTimeStamp(0.0979349187706);
    msg.setSource(30270U);
    msg.setSourceEntity(195U);
    msg.setDestination(13124U);
    msg.setDestinationEntity(63U);
    msg.mid = 40362U;

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
    msg.setTimeStamp(0.379986251405);
    msg.setSource(4393U);
    msg.setSourceEntity(77U);
    msg.setDestination(33083U);
    msg.setDestinationEntity(61U);
    msg.state = 221U;
    msg.eta = 5183U;
    msg.info.assign("LKUBMEGQNRCIROEXKXWJUZYQPFHBGTQBTIWHUAYWGWTRHNETLR");

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
    msg.setTimeStamp(0.436902801495);
    msg.setSource(24760U);
    msg.setSourceEntity(202U);
    msg.setDestination(49966U);
    msg.setDestinationEntity(81U);
    msg.state = 214U;
    msg.eta = 38982U;
    msg.info.assign("CGWHUCLKFCBVHFNRSGXQEYTORLOUDBZPXLKOHLPXDNPSRFASQGHCXZUVJNAHSFTTXQCOGEPUYQLBMUSNQDKVSIWCNKPRYIPKNQBA");

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
    msg.setTimeStamp(0.18405269428);
    msg.setSource(62399U);
    msg.setSourceEntity(36U);
    msg.setDestination(34612U);
    msg.setDestinationEntity(187U);
    msg.state = 127U;
    msg.eta = 8943U;
    msg.info.assign("XJDLHDVYWXNDHKZKQAUUEUVXNMZRUAQRLDTTMWEXLFHQVBQDFHWCKUMDVAWJMICTSMSURBPCSSAUJFODYSPOZISFPBKFNJEOTAGXEOYICQAKIRJETGHHDJDZNTYLGKOKVZNIMBPPLFAFIMKVQOPRPBBIMFB");

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
    msg.setTimeStamp(0.802004167077);
    msg.setSource(64466U);
    msg.setSourceEntity(43U);
    msg.setDestination(43842U);
    msg.setDestinationEntity(80U);
    msg.system = 49779U;
    msg.duration = 21680U;
    msg.speed = 0.00268270008222;
    msg.speed_units = 128U;
    msg.x = 0.189576959576;
    msg.y = 0.0770701405083;
    msg.z = 0.733681602682;
    msg.z_units = 223U;

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
    msg.setTimeStamp(0.12269962092);
    msg.setSource(59620U);
    msg.setSourceEntity(21U);
    msg.setDestination(5305U);
    msg.setDestinationEntity(225U);
    msg.system = 5433U;
    msg.duration = 40153U;
    msg.speed = 0.527146897961;
    msg.speed_units = 165U;
    msg.x = 0.734629918076;
    msg.y = 0.996625812519;
    msg.z = 0.801949530502;
    msg.z_units = 62U;

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
    msg.setTimeStamp(0.112255571589);
    msg.setSource(28005U);
    msg.setSourceEntity(101U);
    msg.setDestination(36190U);
    msg.setDestinationEntity(106U);
    msg.system = 33202U;
    msg.duration = 42629U;
    msg.speed = 0.588759278089;
    msg.speed_units = 156U;
    msg.x = 0.467356352229;
    msg.y = 0.704254507641;
    msg.z = 0.228865048907;
    msg.z_units = 51U;

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
    msg.setTimeStamp(0.831572016463);
    msg.setSource(28696U);
    msg.setSourceEntity(17U);
    msg.setDestination(21860U);
    msg.setDestinationEntity(14U);
    msg.lat = 0.210448295531;
    msg.lon = 0.18320076163;
    msg.speed = 0.96362443847;
    msg.speed_units = 173U;
    msg.duration = 15864U;
    msg.sys_a = 32124U;
    msg.sys_b = 38188U;
    msg.move_threshold = 0.784560853179;

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
    msg.setTimeStamp(0.786137214626);
    msg.setSource(31929U);
    msg.setSourceEntity(242U);
    msg.setDestination(38877U);
    msg.setDestinationEntity(211U);
    msg.lat = 0.728524518598;
    msg.lon = 0.151977706753;
    msg.speed = 0.89229433693;
    msg.speed_units = 177U;
    msg.duration = 1916U;
    msg.sys_a = 835U;
    msg.sys_b = 51150U;
    msg.move_threshold = 0.778942769226;

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
    msg.setTimeStamp(0.956234590762);
    msg.setSource(34495U);
    msg.setSourceEntity(215U);
    msg.setDestination(12917U);
    msg.setDestinationEntity(39U);
    msg.lat = 0.924124923782;
    msg.lon = 0.745234322601;
    msg.speed = 0.0918843532793;
    msg.speed_units = 183U;
    msg.duration = 39476U;
    msg.sys_a = 35835U;
    msg.sys_b = 4495U;
    msg.move_threshold = 0.35217552171;

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
    msg.setTimeStamp(0.834262086953);
    msg.setSource(769U);
    msg.setSourceEntity(31U);
    msg.setDestination(23888U);
    msg.setDestinationEntity(249U);
    msg.lat = 0.429377364166;
    msg.lon = 0.391716558455;
    msg.z = 0.642375791325;
    msg.z_units = 228U;
    msg.speed = 0.334856767831;
    msg.speed_units = 124U;
    msg.custom.assign("DYSHMIPQGDAHGMZXIDYQLPCHNGOVXVDOFWIIABXFLBWZSFEWPRSMWKQRAVLJLYGAGVHRMJDJKTUIUTXQZDHWOYSMBPCFBJFFKBMUEXPVONFQUUKPMGUTNRCCYBPROVHFZCWXROEQJLKCQNJKPWRXFJZGSAXNUBZHCASJNTTYORCVOBTBQNEYEZRIRSINHEWQWUMIDYUEFCZAIV");

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
    msg.setTimeStamp(0.693094983527);
    msg.setSource(24909U);
    msg.setSourceEntity(62U);
    msg.setDestination(48418U);
    msg.setDestinationEntity(182U);
    msg.lat = 0.100293806315;
    msg.lon = 0.929238857608;
    msg.z = 0.217911652656;
    msg.z_units = 41U;
    msg.speed = 0.418681352072;
    msg.speed_units = 200U;
    msg.custom.assign("DYLRNWFPDBCHVJGMBTJDPTYQMQCEDYQQRNCOAZPUDSKB");

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
    msg.setTimeStamp(0.684694621191);
    msg.setSource(3623U);
    msg.setSourceEntity(52U);
    msg.setDestination(14538U);
    msg.setDestinationEntity(103U);
    msg.lat = 0.767086205901;
    msg.lon = 0.0347468520246;
    msg.z = 0.990267397525;
    msg.z_units = 71U;
    msg.speed = 0.282019876359;
    msg.speed_units = 82U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.576413541917;
    tmp_msg_0.lon = 0.199029585606;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("ZWQIZWVMJKQFXFWUOMHMLSDKAZBKACHKSZJPQGOARBXEDTVWVAWEHOXOJAATSXLHICYCTYVFDSGRINXWOCMD");

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
    msg.setTimeStamp(0.560661575908);
    msg.setSource(36165U);
    msg.setSourceEntity(176U);
    msg.setDestination(26894U);
    msg.setDestinationEntity(35U);
    msg.lat = 0.857506035061;
    msg.lon = 0.811573013431;

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
    msg.setTimeStamp(0.319695432538);
    msg.setSource(15671U);
    msg.setSourceEntity(250U);
    msg.setDestination(5991U);
    msg.setDestinationEntity(211U);
    msg.lat = 0.88394647272;
    msg.lon = 0.615406517147;

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
    msg.setTimeStamp(0.2767972407);
    msg.setSource(64220U);
    msg.setSourceEntity(111U);
    msg.setDestination(45031U);
    msg.setDestinationEntity(44U);
    msg.lat = 0.220152803402;
    msg.lon = 0.228565598804;

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
    msg.setTimeStamp(0.582207241669);
    msg.setSource(10509U);
    msg.setSourceEntity(81U);
    msg.setDestination(27409U);
    msg.setDestinationEntity(132U);
    msg.timeout = 49676U;
    msg.lat = 0.669500046776;
    msg.lon = 0.698785989307;
    msg.z = 0.700312913553;
    msg.z_units = 75U;
    msg.pitch = 0.214786936363;
    msg.amplitude = 0.86581264726;
    msg.duration = 59183U;
    msg.speed = 0.649985962037;
    msg.speed_units = 18U;
    msg.radius = 0.923025875686;
    msg.direction = 171U;
    msg.custom.assign("FFFLQFNDYVQJEELMJCMGPBHNRIXNBYAZOEQWZXTIUQAJYNZIRQCYBGURIVSSGMJFIVRZROBQFIWNQPKHBXKVEXGIAAUBNWTOVGATRWBXECOPCTLRFAJARMVNKGHCKWNQSLDNL");

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
    msg.setTimeStamp(0.285759880214);
    msg.setSource(22483U);
    msg.setSourceEntity(175U);
    msg.setDestination(31566U);
    msg.setDestinationEntity(29U);
    msg.timeout = 23358U;
    msg.lat = 0.49663283689;
    msg.lon = 0.795757187049;
    msg.z = 0.153447388026;
    msg.z_units = 234U;
    msg.pitch = 0.784278662289;
    msg.amplitude = 0.361376757464;
    msg.duration = 36088U;
    msg.speed = 0.127333337183;
    msg.speed_units = 246U;
    msg.radius = 0.481864419341;
    msg.direction = 11U;
    msg.custom.assign("IOYLSAYBQJARMESWNDSBICJEXZVGDFOKKADRASZNPLBUUSIELLJBSPMNFRICDPIVOZXHBZDWEYAYEORYQCUAGCLALWZGJXMCKFQKZYFVQNCMWTXBEVYUGMLJGIPRORMQHJCBPLEXTRDHFTJGVZQSMIYPTIQUJFQKFBZTDWPF");

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
    msg.setTimeStamp(0.155901529374);
    msg.setSource(27031U);
    msg.setSourceEntity(13U);
    msg.setDestination(8217U);
    msg.setDestinationEntity(23U);
    msg.timeout = 13467U;
    msg.lat = 0.563717554648;
    msg.lon = 0.149886780616;
    msg.z = 0.548660405713;
    msg.z_units = 6U;
    msg.pitch = 0.925702194047;
    msg.amplitude = 0.272786897842;
    msg.duration = 26037U;
    msg.speed = 0.861931614249;
    msg.speed_units = 195U;
    msg.radius = 0.685507093792;
    msg.direction = 27U;
    msg.custom.assign("FZQJNOBQOKIHBYYLABWRAYAUCJSEPXRTAXMVZHLYI");

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
    msg.setTimeStamp(0.822390562089);
    msg.setSource(29541U);
    msg.setSourceEntity(11U);
    msg.setDestination(33947U);
    msg.setDestinationEntity(172U);
    msg.formation_name.assign("BLYITDXSLEPQMCSDSNPJGDQYLWXAREAYOWQRSBQROBVGZLIQFFSWBOCEGDRMDUXZFGHPFGATPNCEITCUJZRUXQEEGBWVATSIUWGJVYRQXKSEKWETHBQIVZJZLTGKPWYKKDOSUACVZZCDMUXFHKBRIAMRJDTWISZFVYVFWNNMTIJLKPHURVCHAKPWPMOFOEFLNSXJXFYGLZURHCJJYNDXLPJKO");
    msg.reference_frame = 171U;
    msg.custom.assign("RLNZWOGJUDGFBGTHQAERLWMRYAVOAHWWMHPKLMQJLPJNZMBKFPEROLGPQIDAAAFPWGHMOBZBAUNXDRBSSCKEICDTKLXEYGUVPXNCVOKEMNSPSSUFSAKJTXG");

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
    msg.setTimeStamp(0.302810923473);
    msg.setSource(2948U);
    msg.setSourceEntity(48U);
    msg.setDestination(2790U);
    msg.setDestinationEntity(106U);
    msg.formation_name.assign("VRZXUQBSMHJWCUISIVDWBLJOLQUDRSZNUQAPKYFUTBTXGKGIPBLZYWEPTTHXBXKCSAG");
    msg.reference_frame = 16U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 56553U;
    tmp_msg_0.off_x = 0.079812441685;
    tmp_msg_0.off_y = 0.0450924487917;
    tmp_msg_0.off_z = 0.777780471764;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("JIDELHHQCJKUMNUQCBXZTRRXEY");

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
    msg.setTimeStamp(0.34898526123);
    msg.setSource(61363U);
    msg.setSourceEntity(59U);
    msg.setDestination(11262U);
    msg.setDestinationEntity(37U);
    msg.formation_name.assign("JVUZTVFXNQRIIEPRPAYZXPLFUNLPIUWZAZDKMNLQVGAHJQMWXJPEUTPDOTDDKHYKIBCCKGJBZQOZRXGWMMPWYFNNRPWFTXACZUSQSZGHYVATOHOEVCWYUNODANGIEAKJJFMHCOEVJSSGDLTQVCDUXJDKBXGSTSLMJJLHCMYXKWGUAWILRBRYTFSOBANBTIREYQWF");
    msg.reference_frame = 229U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 10014U;
    tmp_msg_0.off_x = 0.704955387555;
    tmp_msg_0.off_y = 0.0839437323596;
    tmp_msg_0.off_z = 0.759216240198;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("WVLUWSIQFRIMTVCPCGZXIWHAQAQHRKYYQHOBMPZWIGTAUJFMLKE");

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
    msg.setTimeStamp(0.427004920055);
    msg.setSource(53884U);
    msg.setSourceEntity(179U);
    msg.setDestination(21366U);
    msg.setDestinationEntity(72U);
    msg.group_name.assign("VUEEZGMOVPSYDJBTEQLIIPIDOXIUGUZRNPRHXLKLQGQDRAXMKKYSUHLKOJWRAOXPFZKHHZHGCJTSZUHJKKYRCVSVOFTQHVNERMNAFEIMGWCLPSWCECNYSZ");
    msg.formation_name.assign("WSOYRITDNNYCVSXDEEJQBSAGYMCALIMLKRZYPOHJFFMBLULZGZRXQVUDEFBUGWCHPXQPLWOGFDOIUNEEJXECNJVVQXSMRYZIINKQ");
    msg.plan_id.assign("YOQGUSWPCDXQVLPRVMTNFBVLBPCFCEAMDUOUDVRCKTIQFZDVYRJHJJWYNPUZXWFSNTLBTLEAPDIXNJSCGKRMOUJAXMGYMGZXMXHHRMJYGALHVONWOGUKUBMZZWESVYPTPGTSTELIQRSHWDWCWDNEQNWQLIYHDNPCISJTIHWBRTJNIFFXTYKBLAQNZGAPOFJIFBKCR");
    msg.description.assign("DWBHQERQPRPGGVZRYYNEDAZVICTMI");
    msg.leader_speed = 0.972744753238;
    msg.leader_bank_lim = 0.994005406946;
    msg.pos_sim_err_lim = 0.606703902233;
    msg.pos_sim_err_wrn = 0.310798349751;
    msg.pos_sim_err_timeout = 52390U;
    msg.converg_max = 0.0631583109925;
    msg.converg_timeout = 64337U;
    msg.comms_timeout = 35250U;
    msg.turb_lim = 0.256740081185;
    msg.custom.assign("WSZDDLWFHUEQFUIPVAYJLGSJWJWZYSPAGFIHUQOUDADHONGYPUBSROIWNOLFXQAJXBFVLXLVZYKCCXBMBTZPSMFKGBSRJPXRNPCWFUYNZEEJSQYKVHFJZMBGNVICYKCRDBCGAMSVUY");

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
    msg.setTimeStamp(0.708023698995);
    msg.setSource(12874U);
    msg.setSourceEntity(171U);
    msg.setDestination(58551U);
    msg.setDestinationEntity(125U);
    msg.group_name.assign("UNODKIMHNPTUUZWSCMQIEZCRXDEBBXACTBXFTRHMMGXBKHXJZFFQUSODETPURRJLEJFWTYJYBIXPZSJHV");
    msg.formation_name.assign("OXPEIBHFWOVIQLLBAQXBVFRJRCQORCAWHTCTWXMDUJFCHAJEBCYYSGGVBBAKUKAJTGLFWGSSCIFVHZZEIALSVQFPNMHWG");
    msg.plan_id.assign("KZFBQNVLHNMVRHTXUSRUAFSIITBJGBYZMJHWKEMJPIUOEDWLCRZVOWKKRETWEYNNPOZHPEWARPEYADFJJRXXQGDVZSABZDKQPMTEZCLMOXOLUQGHKRYMINHJSPIMU");
    msg.description.assign("NGAUJFKSHHFLPKDYMZMBKHDJIPTYRKQOVBNONLOCCAPGLHCDOIIXAYQISMT");
    msg.leader_speed = 0.755808801666;
    msg.leader_bank_lim = 0.437325456345;
    msg.pos_sim_err_lim = 0.682692976282;
    msg.pos_sim_err_wrn = 0.903609428963;
    msg.pos_sim_err_timeout = 65482U;
    msg.converg_max = 0.368866842441;
    msg.converg_timeout = 45994U;
    msg.comms_timeout = 64943U;
    msg.turb_lim = 0.367739621271;
    msg.custom.assign("SIAQRLZYMPKLVKZBADNFDGWTQUZGRAQPGSAFXEBSPJKMFLWXFMEWT");

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
    msg.setTimeStamp(0.495882302562);
    msg.setSource(36656U);
    msg.setSourceEntity(217U);
    msg.setDestination(19096U);
    msg.setDestinationEntity(31U);
    msg.group_name.assign("UGOELQFOCSHLVINPJHSJTAGEDMXOPUPXBUGNNCXOAUZIENFYHKQTPMPXYIENEUKFTLMYLUYRWJAVUAPAJKWBTDZJUSPXDDOLIMWIFNZTNSZEICGTPWLHXNBFRSJZQPROKFGKRAWORBVUEIEKKXJMYJABWJCVCGGRXLYLDDYDCFQZXTDKMZDQHARMVHLLOJVWCYIIQFSDHSNSHRFEMQCHOMYIXBVBWPTWSRZGBZMK");
    msg.formation_name.assign("RNEEJSGKXAVTOONIFMSXUYRAAWYHBLMYUGXJUMFTRGWCZNBVDCJLAAZAVJTBIELUQWFLXPVDPFKGRGUHUFRKSHJXTTWVVITHRBIJOMSOZNRTUWJOJDDKEQHOTYGYCFGYCNQUAOJIDXUNVKHMCRKLRVPFYMIZANXSCOEQEBIXAPGKQPMKQCSYSEBGDQXUZTNLOHWLDRDTVDMCMGEZPZWHZLPQEPFKWLFSC");
    msg.plan_id.assign("MAMIUWKMJRJJBBMZERABYYXNEZVBFCHNZKPXUSUMDFVWXYFWZBUKRKSANVOLGFPCUNHHXQZNZHEJJIUYTLGQOYYPJEWFQLQGCTBXDULDPJAFOTSLFVZCRSHVOWWZNXIRDXHCENMJGQBLEIBMZNZSWXYHLKKPQOIKQITTIJDTVOQEAIGOLRPCRPECO");
    msg.description.assign("QPLDRKHOTQWPME");
    msg.leader_speed = 0.351402453349;
    msg.leader_bank_lim = 0.930714131684;
    msg.pos_sim_err_lim = 0.727572071796;
    msg.pos_sim_err_wrn = 0.588700820439;
    msg.pos_sim_err_timeout = 9379U;
    msg.converg_max = 0.255741597469;
    msg.converg_timeout = 60265U;
    msg.comms_timeout = 43126U;
    msg.turb_lim = 0.66546608876;
    msg.custom.assign("PIJEITXENARBXSCRAYFSYQGGDJVZURMGNJPNQBLIZFTJLSPKPTVCGUEJMZQKFCYNLINODSMNFRLHFOHBMRYGFQRNIUZECZCGIGMZHJGYAABTOHNDSXGYTMOBFS");

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
    msg.setTimeStamp(0.377757543122);
    msg.setSource(9668U);
    msg.setSourceEntity(85U);
    msg.setDestination(18593U);
    msg.setDestinationEntity(166U);
    msg.control_src = 12731U;
    msg.control_ent = 141U;
    msg.timeout = 0.827074289765;
    msg.loiter_radius = 0.146149916161;
    msg.altitude_interval = 0.264452529799;

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
    msg.setTimeStamp(0.611972581405);
    msg.setSource(45130U);
    msg.setSourceEntity(64U);
    msg.setDestination(36797U);
    msg.setDestinationEntity(99U);
    msg.control_src = 31140U;
    msg.control_ent = 166U;
    msg.timeout = 0.0911468755282;
    msg.loiter_radius = 0.550922657267;
    msg.altitude_interval = 0.879132291424;

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
    msg.setTimeStamp(0.858756515988);
    msg.setSource(8707U);
    msg.setSourceEntity(32U);
    msg.setDestination(3539U);
    msg.setDestinationEntity(86U);
    msg.control_src = 11488U;
    msg.control_ent = 99U;
    msg.timeout = 0.198130776582;
    msg.loiter_radius = 0.334708236982;
    msg.altitude_interval = 0.548045784999;

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
    msg.setTimeStamp(0.33690253172);
    msg.setSource(17167U);
    msg.setSourceEntity(230U);
    msg.setDestination(9022U);
    msg.setDestinationEntity(183U);
    msg.flags = 250U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.889514544489;
    tmp_msg_0.speed_units = 83U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.922293393375;
    tmp_msg_1.z_units = 187U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.532743863015;
    msg.lon = 0.443307448253;
    msg.radius = 0.0619746482677;

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
    msg.setTimeStamp(0.386732602163);
    msg.setSource(17330U);
    msg.setSourceEntity(129U);
    msg.setDestination(26969U);
    msg.setDestinationEntity(43U);
    msg.flags = 56U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.507780901623;
    tmp_msg_0.speed_units = 68U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.0217972889386;
    tmp_msg_1.z_units = 87U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.871615135677;
    msg.lon = 0.0201659861142;
    msg.radius = 0.653152292735;

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
    msg.setTimeStamp(0.00568290714452);
    msg.setSource(30797U);
    msg.setSourceEntity(58U);
    msg.setDestination(47300U);
    msg.setDestinationEntity(248U);
    msg.flags = 136U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.257054745249;
    tmp_msg_0.speed_units = 156U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.123706422041;
    tmp_msg_1.z_units = 41U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.304743448283;
    msg.lon = 0.252392747778;
    msg.radius = 0.160993020485;

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
    msg.setTimeStamp(0.619080360522);
    msg.setSource(51818U);
    msg.setSourceEntity(74U);
    msg.setDestination(25341U);
    msg.setDestinationEntity(38U);
    msg.control_src = 54634U;
    msg.control_ent = 83U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 252U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.835977191002;
    tmp_tmp_msg_0_0.speed_units = 185U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.250183134858;
    tmp_tmp_msg_0_1.z_units = 152U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.639469216207;
    tmp_msg_0.lon = 0.875799604886;
    tmp_msg_0.radius = 0.236818104696;
    msg.reference.set(tmp_msg_0);
    msg.state = 228U;
    msg.proximity = 5U;

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
    msg.setTimeStamp(0.931397175992);
    msg.setSource(8627U);
    msg.setSourceEntity(234U);
    msg.setDestination(43711U);
    msg.setDestinationEntity(217U);
    msg.control_src = 37218U;
    msg.control_ent = 74U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 162U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.101423401139;
    tmp_tmp_msg_0_0.speed_units = 51U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.389685741046;
    tmp_tmp_msg_0_1.z_units = 230U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.00349980928633;
    tmp_msg_0.lon = 0.978962843573;
    tmp_msg_0.radius = 0.713860589981;
    msg.reference.set(tmp_msg_0);
    msg.state = 120U;
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
    msg.setTimeStamp(0.905064628368);
    msg.setSource(49711U);
    msg.setSourceEntity(49U);
    msg.setDestination(28276U);
    msg.setDestinationEntity(254U);
    msg.control_src = 5332U;
    msg.control_ent = 179U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 36U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.659397199448;
    tmp_tmp_msg_0_0.speed_units = 65U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.216041252095;
    tmp_tmp_msg_0_1.z_units = 29U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.617353186017;
    tmp_msg_0.lon = 0.357290605526;
    tmp_msg_0.radius = 0.178226326345;
    msg.reference.set(tmp_msg_0);
    msg.state = 156U;
    msg.proximity = 203U;

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
    msg.setTimeStamp(0.58717736481);
    msg.setSource(7080U);
    msg.setSourceEntity(160U);
    msg.setDestination(63707U);
    msg.setDestinationEntity(70U);
    msg.ax_cmd = 0.439626589494;
    msg.ay_cmd = 0.550335617428;
    msg.az_cmd = 0.499947905384;
    msg.ax_des = 0.892827327974;
    msg.ay_des = 0.933368745914;
    msg.az_des = 0.676052071332;
    msg.virt_err_x = 0.281311617614;
    msg.virt_err_y = 0.740479885443;
    msg.virt_err_z = 0.38484505925;
    msg.surf_fdbk_x = 0.518368943745;
    msg.surf_fdbk_y = 0.0461112850757;
    msg.surf_fdbk_z = 0.408605928653;
    msg.surf_unkn_x = 0.70538516123;
    msg.surf_unkn_y = 0.328534772729;
    msg.surf_unkn_z = 0.540062849687;
    msg.ss_x = 0.0198070139044;
    msg.ss_y = 0.557918728423;
    msg.ss_z = 0.679157239272;

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
    msg.setTimeStamp(0.163445625147);
    msg.setSource(31898U);
    msg.setSourceEntity(77U);
    msg.setDestination(567U);
    msg.setDestinationEntity(176U);
    msg.ax_cmd = 0.422206032924;
    msg.ay_cmd = 0.261100466043;
    msg.az_cmd = 0.845105666191;
    msg.ax_des = 0.807278349952;
    msg.ay_des = 0.51313226049;
    msg.az_des = 0.698918759021;
    msg.virt_err_x = 0.931206811507;
    msg.virt_err_y = 0.103592857817;
    msg.virt_err_z = 0.230891265397;
    msg.surf_fdbk_x = 0.701526450774;
    msg.surf_fdbk_y = 0.164027351107;
    msg.surf_fdbk_z = 0.515210362206;
    msg.surf_unkn_x = 0.213542749557;
    msg.surf_unkn_y = 0.208502259326;
    msg.surf_unkn_z = 0.755512804538;
    msg.ss_x = 0.173984042562;
    msg.ss_y = 0.864225282822;
    msg.ss_z = 0.952616490326;

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
    msg.setTimeStamp(0.227136167979);
    msg.setSource(42491U);
    msg.setSourceEntity(156U);
    msg.setDestination(16380U);
    msg.setDestinationEntity(97U);
    msg.ax_cmd = 0.670827750492;
    msg.ay_cmd = 0.0324578134649;
    msg.az_cmd = 0.817867847242;
    msg.ax_des = 0.746567296626;
    msg.ay_des = 0.457048637755;
    msg.az_des = 0.263663424816;
    msg.virt_err_x = 0.297774477359;
    msg.virt_err_y = 0.842153933423;
    msg.virt_err_z = 0.916438083909;
    msg.surf_fdbk_x = 0.797868962172;
    msg.surf_fdbk_y = 0.685003387683;
    msg.surf_fdbk_z = 0.751746749736;
    msg.surf_unkn_x = 0.351864321455;
    msg.surf_unkn_y = 0.131577011214;
    msg.surf_unkn_z = 0.925774775052;
    msg.ss_x = 0.297637870149;
    msg.ss_y = 0.672894214237;
    msg.ss_z = 0.132659104358;

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
    msg.setTimeStamp(0.859454940944);
    msg.setSource(60871U);
    msg.setSourceEntity(85U);
    msg.setDestination(4147U);
    msg.setDestinationEntity(177U);
    msg.s_id.assign("HQGYRNKUXCLOWODDLYYIYEKFPGVVHJNAVNEKUKFEZCMPZIFQQFGGLCCTYPPUJLLHXSWUCMWNROZXNRFLHAMUNDGAEQQEOJZRORPUVITABYRFHALEHUEJKROKRABJMOWINCHZM");
    msg.dist = 0.878987304377;
    msg.err = 0.951607062898;
    msg.ctrl_imp = 0.708936543356;
    msg.rel_dir_x = 0.187429199362;
    msg.rel_dir_y = 0.773198487741;
    msg.rel_dir_z = 0.775284858831;
    msg.err_x = 0.722801076704;
    msg.err_y = 0.22792685592;
    msg.err_z = 0.998524446326;
    msg.rf_err_x = 0.647128975757;
    msg.rf_err_y = 0.315983695165;
    msg.rf_err_z = 0.0891889717803;
    msg.rf_err_vx = 0.985278019573;
    msg.rf_err_vy = 0.0972435881157;
    msg.rf_err_vz = 0.31952707507;
    msg.ss_x = 0.618781624138;
    msg.ss_y = 0.339986980998;
    msg.ss_z = 0.675734083742;
    msg.virt_err_x = 0.0200117608021;
    msg.virt_err_y = 0.338386513605;
    msg.virt_err_z = 0.644919551258;

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
    msg.setTimeStamp(0.662227139519);
    msg.setSource(46823U);
    msg.setSourceEntity(221U);
    msg.setDestination(46003U);
    msg.setDestinationEntity(4U);
    msg.s_id.assign("ZSCKIYMDYULOYUCUQRMHGYABIQKWDIWQLXRYZAVVNNKIAJ");
    msg.dist = 0.689542130804;
    msg.err = 0.596110795706;
    msg.ctrl_imp = 0.678952896265;
    msg.rel_dir_x = 0.253224482689;
    msg.rel_dir_y = 0.839221098894;
    msg.rel_dir_z = 0.578647443308;
    msg.err_x = 0.857906641772;
    msg.err_y = 0.182410017676;
    msg.err_z = 0.0205749099043;
    msg.rf_err_x = 0.726624074573;
    msg.rf_err_y = 0.0650639597333;
    msg.rf_err_z = 0.118853913608;
    msg.rf_err_vx = 0.559881969685;
    msg.rf_err_vy = 0.811356043112;
    msg.rf_err_vz = 0.0329140809837;
    msg.ss_x = 0.774251511797;
    msg.ss_y = 0.476269608842;
    msg.ss_z = 0.672170265314;
    msg.virt_err_x = 0.349508046269;
    msg.virt_err_y = 0.120270150343;
    msg.virt_err_z = 0.644901281822;

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
    msg.setTimeStamp(0.877498930411);
    msg.setSource(55151U);
    msg.setSourceEntity(199U);
    msg.setDestination(39935U);
    msg.setDestinationEntity(251U);
    msg.s_id.assign("JGZKFQBXDLWFWSVHWEMVKDENAHXHFUTPKMNALXYIPZINXHCVHQEFSXTKRLLLYOVAJQGUEUCYCIBSYTCJFNGBKMRTLZQZJMIANEPHTRABDLVYTAYEQGCZLOFFPCXGGIX");
    msg.dist = 0.0733206589699;
    msg.err = 0.753923062066;
    msg.ctrl_imp = 0.209676524479;
    msg.rel_dir_x = 0.311285830768;
    msg.rel_dir_y = 0.266375545843;
    msg.rel_dir_z = 0.362085214178;
    msg.err_x = 0.516179136511;
    msg.err_y = 0.680009616473;
    msg.err_z = 0.573631593544;
    msg.rf_err_x = 0.55335871842;
    msg.rf_err_y = 0.768146983364;
    msg.rf_err_z = 0.988094600198;
    msg.rf_err_vx = 0.715553626593;
    msg.rf_err_vy = 0.343201963211;
    msg.rf_err_vz = 0.790565303394;
    msg.ss_x = 0.968875224226;
    msg.ss_y = 0.832661310228;
    msg.ss_z = 0.04078115237;
    msg.virt_err_x = 0.121122442036;
    msg.virt_err_y = 0.577949037621;
    msg.virt_err_z = 0.773273884368;

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
    msg.setTimeStamp(0.648111487369);
    msg.setSource(44620U);
    msg.setSourceEntity(59U);
    msg.setDestination(59761U);
    msg.setDestinationEntity(122U);
    msg.timeout = 42368U;
    msg.rpm = 0.630313023801;
    msg.direction = 252U;
    msg.custom.assign("GQJHQAVWEZCPYGSCRSWZIX");

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
    msg.setTimeStamp(0.846156046494);
    msg.setSource(2398U);
    msg.setSourceEntity(81U);
    msg.setDestination(28966U);
    msg.setDestinationEntity(21U);
    msg.timeout = 35201U;
    msg.rpm = 0.350790941705;
    msg.direction = 127U;
    msg.custom.assign("CQUBSJKMAQANQKJNFJFZROOQWRYTKBCSBBVSYILPHFNANOMWRIXSXTLIZXLPEXGKMFFIYCXAKVRTVIRREGWEHFLVVHCMXSBTZOAYUQFMDCLDMKODRWYEWCHFSPDYJUGCGJDZLKGANIMLBDVSTQSXQPUDTUPHZWCDDNWNXUPUJAD");

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
    msg.setTimeStamp(0.769108878135);
    msg.setSource(17436U);
    msg.setSourceEntity(238U);
    msg.setDestination(32891U);
    msg.setDestinationEntity(135U);
    msg.timeout = 17717U;
    msg.rpm = 0.211355609179;
    msg.direction = 32U;
    msg.custom.assign("MMVWAAVTNURJIGNREUMKHXETIGRRPWHHNHYNFMPBLILJYCQTXDNVMSLLLBFKIWJOFWFHDWBWZVDBDOGJGUBSXUYSEIMTQRVNAXUGYSFVPUDDBZSOHUECOTASQDKSHYINLATCQDOATBQXREMKGPRQJVRZWFQPGAMLNCLJ");

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
    msg.setTimeStamp(0.689199990781);
    msg.setSource(49752U);
    msg.setSourceEntity(101U);
    msg.setDestination(35217U);
    msg.setDestinationEntity(241U);
    msg.formation_name.assign("SIHJXTBCJCXOOMVNNNELEWBZICIPARKCVQDXL");
    msg.type = 127U;
    msg.op = 168U;
    msg.group_name.assign("PAOQVNJVOIUAVRCEPFSIRMRHJFPTUTBFFKIDQQRYBILAWDTDFOBKCAWVLFKTWXJDCBDKLNVIPZMUNIVAQVUGGZUQAUHQWHZIETJRBLKELESXNXMSSXYAMDYDMGQCWGBFHCEIXISEGD");
    msg.plan_id.assign("HTQZIUTBSGPLDQWXAMJOYNHSFRORMWQRKNQGJLECAJUZVORDGLOFJPRBGANOXHJBVCXFMSFCTFUKQZEJKBPOPDBKTRIXPYCVYSL");
    msg.description.assign("SBNOABRPZOKVMBUDDWAIOKHBYXUIRUWQNFIOUDDRSHECZPFIUXF");
    msg.reference_frame = 23U;
    msg.leader_bank_lim = 0.704079301087;
    msg.leader_speed_min = 0.886877381217;
    msg.leader_speed_max = 0.581499675834;
    msg.leader_alt_min = 0.630284443758;
    msg.leader_alt_max = 0.0950273159908;
    msg.pos_sim_err_lim = 0.939580456965;
    msg.pos_sim_err_wrn = 0.75748926444;
    msg.pos_sim_err_timeout = 30829U;
    msg.converg_max = 0.403301218963;
    msg.converg_timeout = 54477U;
    msg.comms_timeout = 57612U;
    msg.turb_lim = 0.141188812159;
    msg.custom.assign("UAVJGIHQEYHREXELBHDPSHXLCFAZSCKNPDIZTSKDAPRWSKVNRKDHTHBOEVWFSRQPNRVADFRZEORBFJQGOHFYTCMDPZJBWSAOXNIQMTUHOBTIEODUJCVNMNYGFRGECUDIMFGTJZNWEXEYTXUPGMWBMRVKQJQGZQWFSWBMWLPLKCIQYDVGUCZOYFNVBHAOKLEKGUYHAGAKNPMYJLIQU");

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
    msg.setTimeStamp(0.954183669688);
    msg.setSource(17954U);
    msg.setSourceEntity(149U);
    msg.setDestination(64641U);
    msg.setDestinationEntity(211U);
    msg.formation_name.assign("UZDMINKUTWIDKLXEKTREYDNIVQWTRUZEAUEZZCFSHONSLVARUPWWJULECYCYXYCWAUMBTSLUFFFRCJTNQDGLDM");
    msg.type = 221U;
    msg.op = 209U;
    msg.group_name.assign("COOSZYLPGGGZIFCUOBKSPDTBWSNQFBCMPRBYAKYUVBBXONXTDALLVREVOAIJSHAGFWIGSQVCDBERJRZKJVSEVQDIKADNELSXBLCUCGIMDZAFQPFWHFNUYWIMYSQOJMQRTBGGTDQDYINJACEEYCPFMKKFHPZMPKPCBAJUWJOWEIKTWLHMZJZXCXZLURXRURNFIWVMMEZEPLQWYKNHZUHXOVXOULTQMEXNHIRHGUKHSTYQA");
    msg.plan_id.assign("BQEMYFXXKMLLSPVOSODQZPTLDYWQXJPSAQICEUCNZM");
    msg.description.assign("WDFPKYPOULSTJDBTXIQSDBQNANEWRGYUXQCWZFRSPIEACMESBUKOGEKLUFDEVNJVJHEOCJFXVMSWYPIYQHCOKDOFRZWXRJZHQEBOQLUKCNCTWYAVGVTUWHATZKDMSDCVIABGZGZGHSQBCTBFDRNIHYMANPIRZAIDVEMQHGIXTYIAXZWRYUOMOVRLOKLQTFTBUJXFMWFZAPZFJHNETJPIUPVMOGDXGBNAXBVYKLLRKNUPJCEKRMGL");
    msg.reference_frame = 124U;
    msg.leader_bank_lim = 0.799123144547;
    msg.leader_speed_min = 0.485441805961;
    msg.leader_speed_max = 0.193237017739;
    msg.leader_alt_min = 0.922769204634;
    msg.leader_alt_max = 0.721045111649;
    msg.pos_sim_err_lim = 0.504951039074;
    msg.pos_sim_err_wrn = 0.492258561685;
    msg.pos_sim_err_timeout = 18296U;
    msg.converg_max = 0.931470081315;
    msg.converg_timeout = 36032U;
    msg.comms_timeout = 56822U;
    msg.turb_lim = 0.377306025429;
    msg.custom.assign("WEFBZFOSUXUPPARTGGHDJGZSGHBVUJJFDOESLYTGYQMZRKVHFWAOBERQPLBUDUXJNOOLVHRHBTGKMMIACXYIXQTXHCPFTVLCYIWVOMKHXBEMIOCLYMTDRXVWGPNEU");

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
    msg.setTimeStamp(0.815467878981);
    msg.setSource(44826U);
    msg.setSourceEntity(252U);
    msg.setDestination(47301U);
    msg.setDestinationEntity(253U);
    msg.formation_name.assign("NJKLFAJAXNDAXWFKMIXSXTIBRYMHDQBCLXVKPHINBTXXHGRYUWJEAGTEPPLWKJTOUZKWUZYIOJNMMLFXFBSGGTAABWZITHYQVEZGDMFBJADVODIWKZLRCGDALQTRQPGRGZ");
    msg.type = 21U;
    msg.op = 64U;
    msg.group_name.assign("JQHWIFBAPTCKDGKQZSJKVPCKAUIDUCTEGXMOQFIOIW");
    msg.plan_id.assign("UUQRYXUUPAHNFTVKEIBDOYCDNVPRBWDKMSBLXWLXXMWJDJOBCMDTEBBIOVKNTSHGHQXCRRKIAWSXYKMEXPFITUOLPPGUVQMGIUDQYIMSTMHCWDJCBPZSZAODNVOZPDPJGCLNJHVFKXQAJ");
    msg.description.assign("RPNXIWGLKPUPKVJPNKSUUNVTUTRHDKBZDIDZXRQZXCELGOQVYHHGD");
    msg.reference_frame = 63U;
    msg.leader_bank_lim = 0.758993341396;
    msg.leader_speed_min = 0.135235279363;
    msg.leader_speed_max = 0.0595880759606;
    msg.leader_alt_min = 0.849827867474;
    msg.leader_alt_max = 0.995337420957;
    msg.pos_sim_err_lim = 0.694112838026;
    msg.pos_sim_err_wrn = 0.0141222301873;
    msg.pos_sim_err_timeout = 12271U;
    msg.converg_max = 0.965899718803;
    msg.converg_timeout = 29276U;
    msg.comms_timeout = 33577U;
    msg.turb_lim = 0.52573811324;
    msg.custom.assign("KEOPEJKONSDRJWTCPBGQPCOBCIAJGESXZFKKJQERIIYDPNZTBHEVQGTNJKUEKDBMIYNWOSRMJFZMCNCGRPSUVBITWTIGVZOLMMAHEVLMQGLDTJIHHPUIFVPMLKRXLNDUBABZYLZQZKDMXUYUPGQVYSYFZLYCDCMHXRRWWLTMNQOWPUQTCKFVRUJHHRPXABYDWAOQECNSVENWEWZTXXZKFAGFFHYBUJGINVAXRDBXIDVJSTUFLFHXO");

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
    msg.setTimeStamp(0.706115697403);
    msg.setSource(42532U);
    msg.setSourceEntity(36U);
    msg.setDestination(6880U);
    msg.setDestinationEntity(179U);
    msg.timeout = 27021U;
    msg.lat = 0.450033862287;
    msg.lon = 0.749700408476;
    msg.z = 0.515245033822;
    msg.z_units = 54U;
    msg.speed = 0.0244841794806;
    msg.speed_units = 117U;
    msg.custom.assign("VJBVHLQLJMRKHTJZFLVEOYGADQPUYNWSPYCDTIAWAQJTGQCQPWIZORSYXHKNJJCMLOVXZDTBKINIMPOEPQIXYXEYZQOHJSNFLFHBXLCMYWYUONSUBIKTROUKIMNFHWBAHFCPANGXDVXDNESWIVCEVYJUPZOSCKGRQDKBVUACDUBCZGYLAAS");

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
    msg.setTimeStamp(0.691860450238);
    msg.setSource(37729U);
    msg.setSourceEntity(75U);
    msg.setDestination(64850U);
    msg.setDestinationEntity(158U);
    msg.timeout = 41375U;
    msg.lat = 0.959697971662;
    msg.lon = 0.559592091308;
    msg.z = 0.433125723221;
    msg.z_units = 42U;
    msg.speed = 0.708158044786;
    msg.speed_units = 243U;
    msg.custom.assign("NRTGYDQCGYURBZUXVMCNLGPZEGIYXLOFZVXPPDWMGLJGFKGBDWPWSYLUDYZLKBSOEWPYXVVPHCIFMHJQFQKJHHUJTWMQTOBFFDMZUDTOFEIAMIONNTIXVVMYTVSFRKTDKKIICPVNXATOZHUROCGBASOZMHSQXSXQARXNJOOULMJLIPUAKXSYLWQVZTZRVLWRBTHAEGRUESFFWAEEIKQBQHHAZCJENMSCENPDBPSKCJ");

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
    msg.setTimeStamp(0.800045864891);
    msg.setSource(14482U);
    msg.setSourceEntity(197U);
    msg.setDestination(19390U);
    msg.setDestinationEntity(48U);
    msg.timeout = 9814U;
    msg.lat = 0.73482989053;
    msg.lon = 0.401625925672;
    msg.z = 0.00512528164408;
    msg.z_units = 196U;
    msg.speed = 0.417158333374;
    msg.speed_units = 36U;
    msg.custom.assign("XWSHZIELDLAABWMBIKYORLMQPQYHQZCZWZHJSTQFXQSZFUICXUDEWYWAABOCBPWFMSDEVBITHNWGSLMKOTPXMVGECZUFVEJLZOZVSJEKRDXJBCIAGSQDNIHNDONXJCPGZJNSQMVGJAWCNDSBTVYYDRLRMXIBLFYPDVQKGIEFUHNSDARPKELQWFUFTNVUKXCALBPHGUROTUCGYTYRIRGTMVOUKANFWCJKPVPJROEQ");

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
    msg.setTimeStamp(0.0747226232343);
    msg.setSource(38975U);
    msg.setSourceEntity(137U);
    msg.setDestination(57707U);
    msg.setDestinationEntity(61U);
    msg.timeout = 36131U;
    msg.lat = 0.274684125461;
    msg.lon = 0.519337209668;
    msg.z = 0.67885628544;
    msg.z_units = 166U;
    msg.speed = 0.194946205364;
    msg.speed_units = 66U;
    msg.custom.assign("BXDUMGFFIQOTNDNFKJIOBTUAEMWEGMFDGJLIVQYUBLATBJVZZMGGKYYUIRESXDAURPPPVHOIOHNXHSZASZBHERWWUFNYFYFERWMKULKHRCKIUYGAPQEUVSDNPXQZYMNJBWGJVJQMCJATOFBQBTHXQCKBAWPZMTPTISJIMFVNXNHOEEDJRRDXCOSQAJITR");

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
    msg.setTimeStamp(0.989551410544);
    msg.setSource(2465U);
    msg.setSourceEntity(133U);
    msg.setDestination(39684U);
    msg.setDestinationEntity(77U);
    msg.timeout = 27434U;
    msg.lat = 0.0619268799132;
    msg.lon = 0.815668023459;
    msg.z = 0.330562579348;
    msg.z_units = 10U;
    msg.speed = 0.331512631526;
    msg.speed_units = 224U;
    msg.custom.assign("FMGOEXQPASHLZCBGEFVQKFKRVDQVIQSWGOUIZUPBZRATOTNLIPPNDUGCCDMWJSTCRKWLW");

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
    msg.setTimeStamp(0.782112073742);
    msg.setSource(40531U);
    msg.setSourceEntity(113U);
    msg.setDestination(25355U);
    msg.setDestinationEntity(198U);
    msg.timeout = 41163U;
    msg.lat = 0.0226309127156;
    msg.lon = 0.856996449931;
    msg.z = 0.408096357936;
    msg.z_units = 0U;
    msg.speed = 0.279270698996;
    msg.speed_units = 78U;
    msg.custom.assign("OBPKGNMHDWKYSLCEBXJVWHWSQCUTIZPHNUGNQMXYUWOIOLFBCZUCNWROLUPFZNCVLAJDEGLJSMXAPTXQIRBJDRVEXTSWHMKJNZYKTFRTWFDIEEHQIACMZEJXOTHGARJIBSTULBOFSCGPDRJAPIGLWBFRINIGAFQLBQLPYNDJAVVXVG");

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
    msg.setTimeStamp(0.365526259955);
    msg.setSource(28404U);
    msg.setSourceEntity(57U);
    msg.setDestination(28873U);
    msg.setDestinationEntity(214U);
    msg.arrival_time = 0.878671780535;
    msg.lat = 0.494228796658;
    msg.lon = 0.699328048175;
    msg.z = 0.655450875716;
    msg.z_units = 226U;
    msg.travel_z = 0.632785492088;
    msg.travel_z_units = 171U;
    msg.delayed = 93U;

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
    msg.setTimeStamp(0.887862722103);
    msg.setSource(40485U);
    msg.setSourceEntity(163U);
    msg.setDestination(35199U);
    msg.setDestinationEntity(132U);
    msg.arrival_time = 0.262442533739;
    msg.lat = 0.352016675835;
    msg.lon = 0.201150284444;
    msg.z = 0.0820872740423;
    msg.z_units = 49U;
    msg.travel_z = 0.707771830107;
    msg.travel_z_units = 30U;
    msg.delayed = 7U;

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
    msg.setTimeStamp(0.292102639229);
    msg.setSource(20929U);
    msg.setSourceEntity(35U);
    msg.setDestination(32692U);
    msg.setDestinationEntity(232U);
    msg.arrival_time = 0.898389292617;
    msg.lat = 0.874588217955;
    msg.lon = 0.0114225880697;
    msg.z = 0.0859396966804;
    msg.z_units = 3U;
    msg.travel_z = 0.126692728932;
    msg.travel_z_units = 44U;
    msg.delayed = 94U;

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
    msg.setTimeStamp(0.639551383047);
    msg.setSource(24179U);
    msg.setSourceEntity(200U);
    msg.setDestination(18829U);
    msg.setDestinationEntity(70U);
    msg.lat = 0.934561332467;
    msg.lon = 0.418856806673;
    msg.z = 0.405383482525;
    msg.z_units = 14U;
    msg.speed = 0.979258670839;
    msg.speed_units = 241U;
    msg.bearing = 0.0601101483222;
    msg.cross_angle = 0.600992205144;
    msg.width = 0.201531113706;
    msg.length = 0.406899975076;
    msg.coff = 195U;
    msg.angaperture = 0.958740248189;
    msg.range = 7551U;
    msg.overlap = 162U;
    msg.flags = 56U;
    msg.custom.assign("IWDFVLMILSLWAYZFRTTQYEDFRMTXJLUFEVBYOKAKUTYLNZXNQENRXVZSYAVXFQIDDAHJWICGJDVRNAIGTHCJNBRBBKQKJTCTJSAQRHXMQWVUZDIPKROKPXMAOXUHURMEDIWBOTPBMKGHFT");

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
    msg.setTimeStamp(0.584479548395);
    msg.setSource(57596U);
    msg.setSourceEntity(213U);
    msg.setDestination(58710U);
    msg.setDestinationEntity(59U);
    msg.lat = 0.675387918009;
    msg.lon = 0.794230118402;
    msg.z = 0.527590670947;
    msg.z_units = 150U;
    msg.speed = 0.0603178920413;
    msg.speed_units = 70U;
    msg.bearing = 0.384304353353;
    msg.cross_angle = 0.436351817961;
    msg.width = 0.991414989588;
    msg.length = 0.386221892816;
    msg.coff = 2U;
    msg.angaperture = 0.722420062138;
    msg.range = 15539U;
    msg.overlap = 211U;
    msg.flags = 14U;
    msg.custom.assign("IGYAEBQTRMMIKCFSLUYFYLDJSTOEMKVXCABUCDNW");

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
    msg.setTimeStamp(0.457919359249);
    msg.setSource(2604U);
    msg.setSourceEntity(85U);
    msg.setDestination(22805U);
    msg.setDestinationEntity(228U);
    msg.lat = 0.102100887556;
    msg.lon = 0.156647787736;
    msg.z = 0.419255334108;
    msg.z_units = 250U;
    msg.speed = 0.855164515484;
    msg.speed_units = 41U;
    msg.bearing = 0.660898738502;
    msg.cross_angle = 0.688918878717;
    msg.width = 0.593973545798;
    msg.length = 0.843212250911;
    msg.coff = 48U;
    msg.angaperture = 0.658187188216;
    msg.range = 8212U;
    msg.overlap = 30U;
    msg.flags = 27U;
    msg.custom.assign("IHSVSXNFKPMMNAZBWOEXVZJNQWVITCZKQDVYKUHJXMNISXRHDLBFBQAGWPLAOCQVOYCWJNTVYMPZTWMHSDQXHLEACJZHLXRROFCFZWOP");

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
    msg.setTimeStamp(0.233155164928);
    msg.setSource(45479U);
    msg.setSourceEntity(35U);
    msg.setDestination(54424U);
    msg.setDestinationEntity(141U);
    msg.timeout = 22971U;
    msg.lat = 0.686008058523;
    msg.lon = 0.109310991954;
    msg.z = 0.629883750783;
    msg.z_units = 31U;
    msg.speed = 0.457496760748;
    msg.speed_units = 60U;
    msg.syringe0 = 93U;
    msg.syringe1 = 242U;
    msg.syringe2 = 162U;
    msg.custom.assign("ZZMGMKLJGLQNRSCEYUARMKKIWWDAEWPBAZQZWKROEBNWODJWGQBRMMELVOAWIMHPBIITTFJRPTULSYPNJYLHKAUXOJIUCGUREBEPOTOARIZBARHFXYQZXXMBBHCNDWAQXFQPOYVXUHRUPSCWCTKLNKVSZQKFFJSPNGLQMDLDTSYHDOVFXNMVCAYLZOSVEX");

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
    msg.setTimeStamp(0.308571856448);
    msg.setSource(20025U);
    msg.setSourceEntity(69U);
    msg.setDestination(31798U);
    msg.setDestinationEntity(170U);
    msg.timeout = 41581U;
    msg.lat = 0.92174719917;
    msg.lon = 0.940518378559;
    msg.z = 0.761957588361;
    msg.z_units = 47U;
    msg.speed = 0.816812579206;
    msg.speed_units = 148U;
    msg.syringe0 = 39U;
    msg.syringe1 = 215U;
    msg.syringe2 = 95U;
    msg.custom.assign("GEUJGGUCWCHRCWARERWPRHSLXQOQZFDVTBKDVKY");

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
    msg.setTimeStamp(0.954732261668);
    msg.setSource(21759U);
    msg.setSourceEntity(113U);
    msg.setDestination(63372U);
    msg.setDestinationEntity(23U);
    msg.timeout = 61486U;
    msg.lat = 0.992980332044;
    msg.lon = 0.278076002641;
    msg.z = 0.602070925919;
    msg.z_units = 33U;
    msg.speed = 0.580000859891;
    msg.speed_units = 139U;
    msg.syringe0 = 162U;
    msg.syringe1 = 127U;
    msg.syringe2 = 121U;
    msg.custom.assign("QSPZBCIECQIDPJFJGBREYLHYZBHYEBUGJXAOXITOQEMSEIRJCANUXWZSWOUODHCHMKMZAGGWWTHBPNHIGZXEAWBFDYLATTCOWZFTPTUNEDKLRSJHBEGMVCYFFPZNTRODZNAYQGVKRFGKMZCFVEHKXRARLWORDBGUKBLPGLTDFVUTLDQOEXMUJJPIVFUYYCUSSWNQXMVVASQNSXNNWQMIOHCQRONVLSDIDSKITLFAHPVJBPJXXYRMQJ");

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
    msg.setTimeStamp(0.762460628493);
    msg.setSource(4363U);
    msg.setSourceEntity(50U);
    msg.setDestination(63060U);
    msg.setDestinationEntity(52U);

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
    msg.setTimeStamp(0.90874261818);
    msg.setSource(38656U);
    msg.setSourceEntity(52U);
    msg.setDestination(28223U);
    msg.setDestinationEntity(125U);

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
    msg.setTimeStamp(0.698319084822);
    msg.setSource(52929U);
    msg.setSourceEntity(66U);
    msg.setDestination(24901U);
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
    msg.setTimeStamp(0.706687415003);
    msg.setSource(25579U);
    msg.setSourceEntity(78U);
    msg.setDestination(59769U);
    msg.setDestinationEntity(54U);
    msg.lat = 0.0042043730786;
    msg.lon = 0.724335019538;
    msg.z = 0.0612167946968;
    msg.z_units = 193U;
    msg.speed = 0.75462474525;
    msg.speed_units = 127U;
    msg.takeoff_pitch = 0.241196624545;
    msg.custom.assign("OAZFXVVJGRLQSTIOFFPROSQDHJWRZATFTFTZQEMGFXBZPNBZJHLXCMMIDBFCIPEWRAPROBOEGWWDDYEOQCCGJTKGYVKNYNAIMSBGKSTULYYDNHDMPCSZLKICMBGUTVHIJISSXZTHKVUZNWEEGFHXAACYOWMZXPAPCYDARSBYLDEUMNVPPOBJXDYVJVMZPKLU");

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
    msg.setTimeStamp(0.289619482827);
    msg.setSource(3154U);
    msg.setSourceEntity(167U);
    msg.setDestination(23620U);
    msg.setDestinationEntity(5U);
    msg.lat = 0.0807728754185;
    msg.lon = 0.250547882361;
    msg.z = 0.38033951045;
    msg.z_units = 28U;
    msg.speed = 0.515230719608;
    msg.speed_units = 7U;
    msg.takeoff_pitch = 0.201510806992;
    msg.custom.assign("WJAZWLOAHGCJREOWGSJKNLRIVEKMPKEYHFCDKYVBZTUXXVCLKWGRCQDAJQCBJVHYBYYFTSLFAIEXYPRUAGAZOGCFPALUSGXAV");

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
    msg.setTimeStamp(0.269283328992);
    msg.setSource(44467U);
    msg.setSourceEntity(235U);
    msg.setDestination(13383U);
    msg.setDestinationEntity(81U);
    msg.lat = 0.27969326809;
    msg.lon = 0.552938466454;
    msg.z = 0.46241923086;
    msg.z_units = 129U;
    msg.speed = 0.494462402491;
    msg.speed_units = 29U;
    msg.takeoff_pitch = 0.444923508538;
    msg.custom.assign("SYXNSKQUHRWSJYSYRAKNEJPDCJVPINMBTDSDOZVWLPFSHGQMKWGB");

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
    msg.setTimeStamp(0.552238121689);
    msg.setSource(48521U);
    msg.setSourceEntity(77U);
    msg.setDestination(59896U);
    msg.setDestinationEntity(191U);
    msg.lat = 0.878645705122;
    msg.lon = 0.928482380036;
    msg.z = 0.0459611186675;
    msg.z_units = 130U;
    msg.speed = 0.195694302358;
    msg.speed_units = 122U;
    msg.abort_z = 0.499685057873;
    msg.bearing = 0.300895985355;
    msg.glide_slope = 247U;
    msg.glide_slope_alt = 0.396932078877;
    msg.custom.assign("GOJYSTPSFCNHPYEFNJJFFGDHRWDBPXCLSPIAJKVZRVYXDGUPOMZPXRCCQKUKKHQJCTZXGCXAINID");

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
    msg.setTimeStamp(0.0510500537806);
    msg.setSource(42763U);
    msg.setSourceEntity(248U);
    msg.setDestination(21107U);
    msg.setDestinationEntity(59U);
    msg.lat = 0.546349509631;
    msg.lon = 0.440145958587;
    msg.z = 0.781899515353;
    msg.z_units = 142U;
    msg.speed = 0.563864955845;
    msg.speed_units = 17U;
    msg.abort_z = 0.581200234619;
    msg.bearing = 0.629273628686;
    msg.glide_slope = 90U;
    msg.glide_slope_alt = 0.0601105190307;
    msg.custom.assign("PAWNTJXSDVQWXVJIRNSTSHLNNVWNAHBRKFLHGIHOMNJJZGAUIHMAPFOBTUODNRGLXICHLEDLGQVXGYFCBMETTYJQHFVOKHKUYCZNGDMMLUBZVUFYAGGBYWKVWFQEMDONWVECFKKAXGJIBQDYOZDDTKSRKRPJQCR");

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
    msg.setTimeStamp(0.39761341983);
    msg.setSource(22072U);
    msg.setSourceEntity(105U);
    msg.setDestination(40780U);
    msg.setDestinationEntity(128U);
    msg.lat = 0.579173409909;
    msg.lon = 0.896373092608;
    msg.z = 0.160066426204;
    msg.z_units = 69U;
    msg.speed = 0.799410347611;
    msg.speed_units = 127U;
    msg.abort_z = 0.586106985643;
    msg.bearing = 0.408207643006;
    msg.glide_slope = 35U;
    msg.glide_slope_alt = 0.141025284368;
    msg.custom.assign("AZRXBLEBCNEVVGDVMHHXREWGHNTXKNJTCLOBJAWARWSRWFACOQAQNUTJFMBFWIAMPDUDZHLKXOZONEASWLIUKLYMWERDSKJUPBZHIMREJYOSOZUIKORMPFFIEPDUFOBEHIDQPOCQMWTLZIRHMVHHRGSQGCYGVQISLFXEGULHX");

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
    msg.setTimeStamp(0.25921963113);
    msg.setSource(63980U);
    msg.setSourceEntity(214U);
    msg.setDestination(1709U);
    msg.setDestinationEntity(127U);
    msg.lat = 0.141907769601;
    msg.lon = 0.461480898567;
    msg.speed = 0.834548099356;
    msg.speed_units = 111U;
    msg.limits = 215U;
    msg.max_depth = 0.643234653663;
    msg.min_alt = 0.440453097657;
    msg.time_limit = 0.5064410534;
    msg.controller.assign("TIOXOBPHAGQXGUECSZSIFBQSGCSJSJXYFPWRRPIQCLLSXDNZKIZENZPMZWBWQOEXHVLIDAJNRSVRBDIAQCEHQRKRJGJCBJSAALQCTRGKVMGUYYHRMNFGXBWPWKMYOKTLUYLLTUNZEAZOFOTHUEP");
    msg.custom.assign("ZTXXZIRJIBUKTFCAIZYWVEMREBZCAUZUCQCDDASVOJHVACVGTWRRHOKFYHVUGTKBFNCHFDZPOWEPLKUKLMFNXYNSMFDSHXQDAAOMLMPZFQMVPJGFPGMROLJTKYWISHXVNUALONRFXJPHIQETZJZUIMOEJDFEHBRINLWBBZVJUGBYAOWGTWALWSEENHBDCEQWOTGSIMBYYRJYPQSDMQXUWKKPROQGTYLGILTHPKXYCND");

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
    msg.setTimeStamp(0.45266909873);
    msg.setSource(44846U);
    msg.setSourceEntity(111U);
    msg.setDestination(39192U);
    msg.setDestinationEntity(92U);
    msg.lat = 0.713775190424;
    msg.lon = 0.336041255371;
    msg.speed = 0.489735838597;
    msg.speed_units = 244U;
    msg.limits = 13U;
    msg.max_depth = 0.397174787991;
    msg.min_alt = 0.835457792643;
    msg.time_limit = 0.888778799848;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.590919256757;
    tmp_msg_0.lon = 0.971960027915;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("EZNWKKQYWHJEFZIIJRBEPACWKQTLJUKSGLCOZPJEPJBMLVDLNZMYTHLMUNZSFITANXDISYOCRFQBSCPROEXYWOZYIJGFKIDQBVPPZD");
    msg.custom.assign("TJWXPAXZBCHPONXQEJGFHQSKZAOJFGGLKVILDNCYHMVFSSEOQAAELLWSKCTXCFKURGUJMTYJMFMNQHPFPWIDHYGCLMTZOSDSOZJNVNNTDARNBZCMOBWXXXTPDHGNOJHYMLAHHAVMLIJBXYUFZCPHTSBKVGDDLBZBVRQWVILZGCQVYNEBRKEP");

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
    msg.setTimeStamp(0.88606534587);
    msg.setSource(30230U);
    msg.setSourceEntity(16U);
    msg.setDestination(28934U);
    msg.setDestinationEntity(170U);
    msg.lat = 0.584172853311;
    msg.lon = 0.774725488264;
    msg.speed = 0.614409974725;
    msg.speed_units = 141U;
    msg.limits = 26U;
    msg.max_depth = 0.677900243866;
    msg.min_alt = 0.854419782187;
    msg.time_limit = 0.167995031269;
    msg.controller.assign("XWEOISPMVQPMSXNWJAPDFGRUEJSTURBIBMGRJHRCFIWDRWHBNXNLCIZTEFQZYTGZCQCFYM");
    msg.custom.assign("KHGDOIGVWNSVGUHLCDWWLPNAAGRYYFAXNXCYXUBTSMDBYXXMUNOOJDQYLMHCBMJIRRVONGNYVMOCCQWBKSBVLBZIUZKTEFYPRBWCRQZVRPNZSZXQJGJLLFIJRIDTSMFQEVCPEAUMHGBWKKHHJLHFXDTGGZEIUHWFKTAOAFVEKSQELTQKDEQTOZPWDPLNPARNHUYSVDWEMEKKXECLRVZRFIHUUXNGZCTAFPPMWZDI");

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
    msg.setTimeStamp(0.876906494995);
    msg.setSource(47994U);
    msg.setSourceEntity(33U);
    msg.setDestination(21609U);
    msg.setDestinationEntity(57U);
    msg.target.assign("KVGBEMERUDWZPSCNEXAGZEOF");
    msg.max_speed = 0.75520914097;
    msg.speed_units = 126U;
    msg.lat = 0.87564584742;
    msg.lon = 0.839689363925;
    msg.z = 0.505158932288;
    msg.z_units = 136U;
    msg.custom.assign("CYRAKWILESEWAOKMGJIELVMXNLCSXNYUDITLRFKNQYBXNVHIMTYMTSPQPYQPHVGRPHGLEZIRRKTNNEUHPOUXNXOGMJWZYAUQCHWRUWYFSAQHUKYTVFFJSADHTNBXABIZSOWLEHOKPBTFGCIJKSQSXONLAYRXBELQDLFUURRWGTOFQRAHUMTEVDBBZZOUJKVGJVEMMFPZVDFDANLCYSBDZQPMCKGOGGZAJPJJFWDMTKBXWIHICEZDXBZW");

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
    msg.setTimeStamp(0.0421745490626);
    msg.setSource(65045U);
    msg.setSourceEntity(14U);
    msg.setDestination(46962U);
    msg.setDestinationEntity(152U);
    msg.target.assign("PPUAKGIXGENTOCKRLNLRGOGTXNPDAVZYOQIYVHULLQQSNMGQIAXOJZENSERYSZCVXCBBDMISRDBMPHMLBSHHWDUTRRBHPEDIAWVFAWCVNXBGCGARYWYPWVKYTFGZCJXYTHMVPLNLTONJOBIZNJHKBVOEEFVDTCICLSMQWDBHPZIFKUTOMVTWJNZFZGFAYKOCMYDEWXIXUZRKUWXKHGBJOARFDAQXJQJJSKEEZPUJEMPFFHCIFSQWUDASSLLUK");
    msg.max_speed = 0.695692967263;
    msg.speed_units = 182U;
    msg.lat = 0.98164814458;
    msg.lon = 0.431171469423;
    msg.z = 0.605444425797;
    msg.z_units = 192U;
    msg.custom.assign("VRAILUYCPKTIOORIZZGVIBYGDBCJVAIXUBXQYBKES");

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
    msg.setTimeStamp(0.905240873015);
    msg.setSource(38816U);
    msg.setSourceEntity(60U);
    msg.setDestination(20818U);
    msg.setDestinationEntity(62U);
    msg.target.assign("BGOBSUXJNENVXFMKYWSYWPFJHABFIZYSRQGPDYTBRCNSLVYWVACWDVJAVMTEMALNKBQKRTENFPKDBXTIYUWVUACWSADOBJVCGZQKKQMOXYIIGEMPFAWIZYBPOLBPEHWFCROAWSUXJOOREHTZSQGOZYDUGEGVIMDXHTVYHTGLZIMHQQRXLDLQEDVJKZOSAZUSMUIKPTP");
    msg.max_speed = 0.713969085482;
    msg.speed_units = 231U;
    msg.lat = 0.778234630984;
    msg.lon = 0.0225764696203;
    msg.z = 0.232519061764;
    msg.z_units = 158U;
    msg.custom.assign("ARZYDAXFPFASYZJDUEMHDIIZPHEXJUYISGEXMFJSBUZBQTOTEOAJVSDOKPDORRRVVEVJJTNEHUKHTLUFXCLWRNRBKDGRSLTMHMNKMHL");

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
    msg.setTimeStamp(0.206632627485);
    msg.setSource(39844U);
    msg.setSourceEntity(170U);
    msg.setDestination(28958U);
    msg.setDestinationEntity(238U);
    msg.timeout = 14745U;
    msg.lat = 0.0651698734713;
    msg.lon = 0.388277249902;
    msg.speed = 0.237168344645;
    msg.speed_units = 234U;
    msg.custom.assign("DVOEWQSZTGNJZNIEPOLKGPRSJZXWBMCKVEEFZLJPVCFGNCGTBLOHYWCABMCXUN");

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
    msg.setTimeStamp(0.681999099626);
    msg.setSource(47453U);
    msg.setSourceEntity(54U);
    msg.setDestination(50142U);
    msg.setDestinationEntity(53U);
    msg.timeout = 16539U;
    msg.lat = 0.852002370151;
    msg.lon = 0.0808565527719;
    msg.speed = 0.401920689004;
    msg.speed_units = 209U;
    msg.custom.assign("HWEWXHXEYIQNTFFKLEIYUTLVVZYAYNVCACZJMJVBHKZLLKSEYYTJGHNBYMDIFOSVILURTSAADCRZQHFB");

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
    msg.setTimeStamp(0.134823866582);
    msg.setSource(45936U);
    msg.setSourceEntity(99U);
    msg.setDestination(48815U);
    msg.setDestinationEntity(92U);
    msg.timeout = 28124U;
    msg.lat = 0.124462752339;
    msg.lon = 0.576270832663;
    msg.speed = 0.262169424633;
    msg.speed_units = 223U;
    msg.custom.assign("XHLIKIYOGTNHFWJNZQLZSIYIIGZTOSLPIFMSNTUWGJKVAEPXTEOABZDZEXHAJAENDORKNGMMSOFJJJIZLQCDSDGBKWYJTQFUFXWBIPCWXMBNSXVLBBFHFEVYRQDPHBOLFAVUNKUWY");

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
    msg.setTimeStamp(0.0440958907995);
    msg.setSource(248U);
    msg.setSourceEntity(201U);
    msg.setDestination(16896U);
    msg.setDestinationEntity(243U);
    msg.lat = 0.0650311709703;
    msg.lon = 0.873547611343;
    msg.z = 0.868180022916;
    msg.z_units = 28U;
    msg.radius = 0.510798283928;
    msg.duration = 34947U;
    msg.speed = 0.538379559888;
    msg.speed_units = 127U;
    msg.popup_period = 38383U;
    msg.popup_duration = 14101U;
    msg.flags = 174U;
    msg.custom.assign("IHLLCAPAHJMVEYVPSRRQFHBGKCFCMFTDNZEPOIRZQVJQUMTRCDNHKESWPEJUEGBJXMMAGEAHFGYXOAGUTZNYBNJNOBDZHOIRGLPSDPPNFCBORXCUOWRMXSBUQQTWMDTEFDPYCCOZZWIVRKEVTWSIQYLJYCWXVXBNZWGDYKUPLSHQYFRXLNMAKHDMLLUSFIIBJRQAKGGHAOYLNJSQAYVETZVXM");

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
    msg.setTimeStamp(0.159789884819);
    msg.setSource(11733U);
    msg.setSourceEntity(162U);
    msg.setDestination(13199U);
    msg.setDestinationEntity(154U);
    msg.lat = 0.790283271718;
    msg.lon = 0.139863402834;
    msg.z = 0.00388078796254;
    msg.z_units = 22U;
    msg.radius = 0.760008487376;
    msg.duration = 57736U;
    msg.speed = 0.022763480228;
    msg.speed_units = 13U;
    msg.popup_period = 41860U;
    msg.popup_duration = 63036U;
    msg.flags = 124U;
    msg.custom.assign("UBSJVEGWNTAMCJAZCLUKKTPSWOUFKDXRPCDDCWDJINCPLOQFMBENXLRBGTZYZHOPROARHFTVKOLTZQZNWPMVIMDMIYFAFCREBNRPAKYQJOEXWUOIAMDVTHWYHVKRQGNQLTUTGKXPDPQIOBVUYBCNBHXORECYVYELAMXQPZCJYSHGLLHNIXSXETJGFDSWJWVMVUKEIVIAUNDJ");

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
    msg.setTimeStamp(0.0270579602422);
    msg.setSource(56001U);
    msg.setSourceEntity(142U);
    msg.setDestination(10963U);
    msg.setDestinationEntity(63U);
    msg.lat = 0.334346015752;
    msg.lon = 0.821163663314;
    msg.z = 0.701502910851;
    msg.z_units = 46U;
    msg.radius = 0.826939271442;
    msg.duration = 36542U;
    msg.speed = 0.932763950389;
    msg.speed_units = 248U;
    msg.popup_period = 49738U;
    msg.popup_duration = 50253U;
    msg.flags = 23U;
    msg.custom.assign("RLCZGMRROCFFTQQVYGCKFNDFZGVANQGGYXAHCBPMKZUMXPEKHDQKTLJKCVFPJYPXTRS");

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
    msg.setTimeStamp(0.400841015627);
    msg.setSource(10609U);
    msg.setSourceEntity(64U);
    msg.setDestination(24364U);
    msg.setDestinationEntity(127U);
    msg.timeout = 10163U;
    msg.lat = 0.340015027589;
    msg.lon = 0.490769879476;
    msg.z = 0.384661971862;
    msg.z_units = 190U;
    msg.speed = 0.991013579983;
    msg.speed_units = 184U;
    msg.bearing = 0.226018163494;
    msg.width = 0.777542986292;
    msg.direction = 14U;
    msg.custom.assign("UOIOICSWAPTXRXDXGPEUQAEQVGDUAISZFEVNPTHOJMWPEDSBUEJTMZPGXZKD");

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
    msg.setTimeStamp(0.986498174272);
    msg.setSource(59411U);
    msg.setSourceEntity(89U);
    msg.setDestination(47303U);
    msg.setDestinationEntity(189U);
    msg.timeout = 25654U;
    msg.lat = 0.648833865795;
    msg.lon = 0.975167616446;
    msg.z = 0.994488190901;
    msg.z_units = 153U;
    msg.speed = 0.931686018351;
    msg.speed_units = 181U;
    msg.bearing = 0.725906103421;
    msg.width = 0.929303864733;
    msg.direction = 218U;
    msg.custom.assign("XBVTJUUZZHIXRPFGQNAHUEVDJGSNPQWAJPGPTSQMBWTCCZXKGIFBOTLYHYLHGMECUCINPVUKYBUJZIPUPOPVWNDABEXUC");

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
    msg.setTimeStamp(0.765536268671);
    msg.setSource(32789U);
    msg.setSourceEntity(24U);
    msg.setDestination(30078U);
    msg.setDestinationEntity(196U);
    msg.timeout = 12461U;
    msg.lat = 0.550758064271;
    msg.lon = 0.732514759554;
    msg.z = 0.315802977136;
    msg.z_units = 166U;
    msg.speed = 0.607256035217;
    msg.speed_units = 146U;
    msg.bearing = 0.877762969773;
    msg.width = 0.0399528410612;
    msg.direction = 85U;
    msg.custom.assign("HDLZJCRAGVCZZSRAYXMGPEMYBNDVLHBKFBXWISMATEBZOMTMBYDVXUBPYWEMMIEURALJOXNBKVODMAYDGISFTGFPHSDXLIMRDNIEUKINDKZVJOKPUKLUSCBZPVQVCQLOFWDWVECGHQLOZYHAGXSEOOQUGLNAPWHCTZ");

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
    msg.setTimeStamp(0.717828144774);
    msg.setSource(34257U);
    msg.setSourceEntity(121U);
    msg.setDestination(62034U);
    msg.setDestinationEntity(92U);
    msg.op_mode = 190U;
    msg.error_count = 46U;
    msg.error_ents.assign("DOUBWURMENJNLXMLQWPYHGEXYVHJVVXJLTGQGIOQKKIEYKYUEHFFAXZHCCHEIHVSPCOFZDKBPFEOBSNPIDMQNAJAALZNWPWJYDVGXQSQDJMTQCFINKERWGRLGTLIGIEORULBBRWCLBTZFMAXQKRCTOANWUSITWBHZYDDBZTXSGRVANCKZSCTPUTBJZHMXBAYNUSAPKNMMXWGPVDVYPLUFEYOQKSMDOJJFZMHCIIZLSRJOYUFPQWOUVTADR");
    msg.maneuver_type = 5184U;
    msg.maneuver_stime = 0.984419350656;
    msg.maneuver_eta = 64677U;
    msg.control_loops = 694805289U;
    msg.flags = 194U;
    msg.last_error.assign("NOXRODZPHRCSLYCNVOFKHQHYJXDGKUXICTYAZSNMQMDYKPDAQJQAFMBIXXZEGZAFNLPERWFBVWKORUTZCAQXZEUXWEMXMEDMIQRLVAFIFWBSOTJPHWNWEPQOJDPSUARMTRHHEKDCNLYMYRUWBGJVHIO");
    msg.last_error_time = 0.796653934142;

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
    msg.setTimeStamp(0.489762979742);
    msg.setSource(11629U);
    msg.setSourceEntity(145U);
    msg.setDestination(39926U);
    msg.setDestinationEntity(136U);
    msg.op_mode = 218U;
    msg.error_count = 52U;
    msg.error_ents.assign("ZXAWHUFZGCVUEVMLGRNWOHYXPIJSQVSXJLKUWTOHEZXBECIYJCFTTDXWEZARSKMBMUXGIQHREFUINTDTYOYIKLPJYYISAPUTABQHHSIQULPCMUZEV");
    msg.maneuver_type = 9210U;
    msg.maneuver_stime = 0.222456461578;
    msg.maneuver_eta = 18195U;
    msg.control_loops = 1216422923U;
    msg.flags = 33U;
    msg.last_error.assign("VTDIRRYPUFUGFQCOORZOGEVAKGMIFSEAOBRJTDRLERYTHOGVXJUTAHWBIDGXQEFFKKVGKHFWAFHNANZCSZDYSPMCIANKRBWVHCBQEOCMPUQIXMSVEIBXDYEMLIMBNDQCTWFWTIL");
    msg.last_error_time = 0.916005727268;

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
    msg.setTimeStamp(0.746027313008);
    msg.setSource(26502U);
    msg.setSourceEntity(127U);
    msg.setDestination(28205U);
    msg.setDestinationEntity(234U);
    msg.op_mode = 52U;
    msg.error_count = 176U;
    msg.error_ents.assign("WIYTGPBENWREOLOQCZWUSIIKJRNSNPBDXLVDQEDFWQJJHGKTFKNUOTUYHGBTFWBUXNZMIWXDZXBHMXRLIZVBBEINAMTQYFGCKLDFKBZEJPMNVZFAAEAOAUDYPGVMQNJSVZXORLFXJLMAHAMICRYUVBYTGPJWKEHXRYUZDQQSKZPRVALUPFYUTJKQNEWEJRGFDKF");
    msg.maneuver_type = 12210U;
    msg.maneuver_stime = 0.160801338227;
    msg.maneuver_eta = 56817U;
    msg.control_loops = 3940922928U;
    msg.flags = 252U;
    msg.last_error.assign("BSCVEQWLUUNANSWGXPCRHPEJVKMTDNOHTRDAHXTHIPACCOKUSFEIMYEJGMBYYILKSQADUSWXJSJGWDCJIZVBXEZUKKLRVJZPDRGVNFCCNQRMNMFYGMGBXPJVNDWBGPQLNILOUOIKTTUUTDDAMWLRSGIIXOXB");
    msg.last_error_time = 0.712097604943;

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
    msg.setTimeStamp(0.370161139697);
    msg.setSource(6457U);
    msg.setSourceEntity(212U);
    msg.setDestination(64484U);
    msg.setDestinationEntity(211U);
    msg.type = 99U;
    msg.request_id = 47353U;
    msg.command = 118U;
    IMC::AutonomousSection tmp_msg_0;
    tmp_msg_0.lat = 0.765847272712;
    tmp_msg_0.lon = 0.202843939971;
    tmp_msg_0.speed = 0.55489856083;
    tmp_msg_0.speed_units = 209U;
    tmp_msg_0.limits = 79U;
    tmp_msg_0.max_depth = 0.939459225204;
    tmp_msg_0.min_alt = 0.7401578415;
    tmp_msg_0.time_limit = 0.752835526186;
    tmp_msg_0.controller.assign("OPJIGYGZBATMAIOBLJMBMGBXQKRJINMLZWQHSPWECDGPFOZQHEPQGBIQDQJSXFLVRBUIGAYRSBROIFVQ");
    tmp_msg_0.custom.assign("ZMBBXGDFDFOTCONBLIGDPOIVFLZJCLXKEXICSBULKEYBEWNWSMHMRQTPVKKFRHSWIMZYQTBANHJCOYXIWCVVHUGYBSAUSRHEILPRJRHRRSNZDCJQFBWXSMAGPCVNZOEQXSQK");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 32246U;
    msg.info.assign("OXCVHEFUGGDRNFNZIEZAMAMQUOMDZNEHWRUYCJSVEKUSZGNHYIQBONYFRWYOSHPQDXTYCWOPVRAAPSWSMBEGNVAVTVQCIJHCQSGVMTFRVIXOHSQBL");

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
    msg.setTimeStamp(0.965637367838);
    msg.setSource(57713U);
    msg.setSourceEntity(154U);
    msg.setDestination(27316U);
    msg.setDestinationEntity(218U);
    msg.type = 237U;
    msg.request_id = 65082U;
    msg.command = 46U;
    IMC::StationKeeping tmp_msg_0;
    tmp_msg_0.lat = 0.346888145764;
    tmp_msg_0.lon = 0.35221180146;
    tmp_msg_0.z = 0.926457571256;
    tmp_msg_0.z_units = 42U;
    tmp_msg_0.radius = 0.970344390608;
    tmp_msg_0.duration = 60506U;
    tmp_msg_0.speed = 0.231717312097;
    tmp_msg_0.speed_units = 107U;
    tmp_msg_0.popup_period = 2711U;
    tmp_msg_0.popup_duration = 12845U;
    tmp_msg_0.flags = 16U;
    tmp_msg_0.custom.assign("OCKOUFVGEMJWBJTEIWQLRHTLVNUAOPWHOUKNCOZKMRQNARPDLDBUNDWRNLGQZVWWTMMFXHCJUFINSFOTLACDYMQEYGEYSHCENTZPMPJWGAQTRSGSPATSMEJOIICIQTVHVTYL");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 34894U;
    msg.info.assign("SXMSOHSMRQYEIGCLNBYRSGJYZIREJVDHTPZWHAGVCZEXLNQGQHYYGCVRVYRFGZBCXZANBSIAJCJDOVLFZUTOQORQWDPINMFSIPHRLLSENFASBBTJRYMFLUWVDZUKHOTIUPWJLWPKIPQUYMNPUTKMRQXUNKOGAJTLOOXUUZLTWOYJVLPNBXFCKMWJHQSUIRZWM");

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
    msg.setTimeStamp(0.148697200446);
    msg.setSource(57312U);
    msg.setSourceEntity(136U);
    msg.setDestination(26772U);
    msg.setDestinationEntity(149U);
    msg.type = 53U;
    msg.request_id = 58566U;
    msg.command = 112U;
    IMC::VehicleFormation tmp_msg_0;
    tmp_msg_0.lat = 0.859425242123;
    tmp_msg_0.lon = 0.0534918229504;
    tmp_msg_0.z = 0.831837870001;
    tmp_msg_0.z_units = 49U;
    tmp_msg_0.speed = 0.251581056449;
    tmp_msg_0.speed_units = 218U;
    IMC::TrajectoryPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.x = 0.31002642701;
    tmp_tmp_msg_0_0.y = 0.845174453971;
    tmp_tmp_msg_0_0.z = 0.844045858891;
    tmp_tmp_msg_0_0.t = 0.76564270272;
    tmp_msg_0.points.push_back(tmp_tmp_msg_0_0);
    IMC::VehicleFormationParticipant tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.vid = 1513U;
    tmp_tmp_msg_0_1.off_x = 0.663447537353;
    tmp_tmp_msg_0_1.off_y = 0.52454010077;
    tmp_tmp_msg_0_1.off_z = 0.338624296418;
    tmp_msg_0.participants.push_back(tmp_tmp_msg_0_1);
    tmp_msg_0.start_time = 0.813179802823;
    tmp_msg_0.custom.assign("DKACTDNGCRIRXJLHKQEJAWOEHPMXDTWWHOIXXFCDEGBQRUNEUGPBTEJWYACAHGFHXLRWINPALZCDOXNHVCNYTSUSJKYQUZBHLBNIPUITOCQSZURFUVYFAWUKFCGARJWKFEHOOSVJMTATQFRLZVYIZXKPDQZDPYZWUEAGXPXKLSOMNSKENMYNPHVIPLQQZBHYMIBGJOWABZBVIODNERGDZFQUMIVLLSVRLPMSSJVBY");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 49874U;
    msg.info.assign("QAMJLOOPTFVKTKWMQRYCBQMVNJJMOAEVZBDSESUIULNOBTBAMDEIYNYGZRKDXWJKRSAKDXITZOCUEENJLSIBNCNXXENHGERUFSEKGWDMGYIGROMAKACPSZYUIALZWRCDRDVOCYUIHWUQVLKBCCWUBP");

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
    msg.setTimeStamp(0.601867668743);
    msg.setSource(771U);
    msg.setSourceEntity(60U);
    msg.setDestination(22803U);
    msg.setDestinationEntity(224U);
    msg.command = 141U;
    msg.entities.assign("ROXUEHJTKYVCOERIJDKVLIETXTXVGIQSEPCXC");

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
    msg.setTimeStamp(0.00440035665579);
    msg.setSource(23337U);
    msg.setSourceEntity(163U);
    msg.setDestination(1998U);
    msg.setDestinationEntity(134U);
    msg.command = 124U;
    msg.entities.assign("XUFLEEAMGHMBATJXQDVQHBIFYNWUAEREKKPXJNSVGCOBGPCGMMJXDYKDIRKTLLNYYJUPHCEPNNELIXCSQFTX");

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
    msg.setTimeStamp(0.859782286886);
    msg.setSource(4767U);
    msg.setSourceEntity(139U);
    msg.setDestination(62947U);
    msg.setDestinationEntity(217U);
    msg.command = 139U;
    msg.entities.assign("TUHJWDIKXPJXXCNWCMDYWJHPIQSBQVOHLTOTGLCXKEYOEIXMNBHFVNOYRLPJLDGRINDCHREUQANJNHHSMULTSYLNFVFXMVAXTKUZGEQINCIHZQNMUEPDBSVCAYYRFYZLWEK");

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
    msg.setTimeStamp(0.415411434118);
    msg.setSource(931U);
    msg.setSourceEntity(146U);
    msg.setDestination(42268U);
    msg.setDestinationEntity(17U);
    msg.mcount = 112U;
    msg.mnames.assign("KPNAONZHZCEYDJNTUDRPDWZLWQMCYTHXLYRYVOVFOPDDHHZIDRXQSNMUMZLUCHGMKAHCRHRTQTBROSWFUNNTQBAXGUKCEOXNIOSVTLREMNASYPSOETLIHABWIIXSEBPXAFQGETELGUGGGGZVXVXJYOBUSKYPJIDPUSYIZXDOZOVFVFSY");
    msg.ecount = 49U;
    msg.enames.assign("BRDTXPZUREXKEQKLDLQBXBKEQVJVGWKJIOCTALERFIYPGSOGQLQSPYHACYVRBZVHVRTNYGTDBLWOFXLNBZEUIBFUEIKCFPGZPEZJAYSOHQAFQGJYCYJM");
    msg.ccount = 249U;
    msg.cnames.assign("SMVQODMZSULVGYHDMGPMNXQQBRFJCDJAZGXUKYXOYWRQGVOFSVDUCUATOBYXPXOATTICEOERBOFLFKNKUFWYZINUMPXVCWBVPFBBEEHAWJIFKNCYQJZORQAVQZCEZUMTSKXXNKOHVDLWLDJAGIPHJMIJVMURGPVGEWHJNSGBEGMHYUMFTSXQYYRCEITWLIQNTRRTZLNDIL");
    msg.last_error.assign("APMZLYFEJFKKWLINSJFLWNPDLNMQHUPEQTSNGBXXCKGPMFLPLGLCZQNBAPLVNFSORQKGOJTTXDPKQUYJDBILCUTRGUW");
    msg.last_error_time = 0.935859038728;

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
    msg.setTimeStamp(0.210481631122);
    msg.setSource(38554U);
    msg.setSourceEntity(161U);
    msg.setDestination(28444U);
    msg.setDestinationEntity(67U);
    msg.mcount = 216U;
    msg.mnames.assign("FWQGKVCBOLQKAWKILWDMNFRWZGGIXOPUUKDOXYZEJRUDFJTREJQNDJIHUZUHRGRADVPMLXGCAPNQVFRDNUKOQYSQWUGOMWBQYQBPSORNPATCMJCSBFZYKGAAIULQZGGIMWPIELVXSFLLHCHJYKCXLACTEYZJAOTWXNSPETJNKCXVEFABOG");
    msg.ecount = 208U;
    msg.enames.assign("ZNKWWUXCQHOTRPCZLUFGJPLNKKVDUJRRZVUFXDNAKLUAOSBBUTBZSVMJSHCGOGEQYUFXAMTGXYLJTDZOPSQYZSXELVFBMDAONVMRBEHQFNXGNBHPDLHPRVCZDPEOEUWKIJDAIVSTRHWQNQWIGGALYYCMSOBHTSFCSYYVCRGKWEQPOPCN");
    msg.ccount = 125U;
    msg.cnames.assign("HQIPWSZYNKDFKHHJMDPPWUGNANLGLCRMKQZAWHBOSJUCDSPLCGUQTKORUIIFMCEPTNHZKFVAZVWGZXQXYFGIBJYDPTWQTFUOBJWKWTZZNXECYYULOXEJIJLFWLPCALLMYGHQTTESIHSYMAWSDNRDGMXEDIEGADUQKBOHSHRCMABTNRFEHQYVUCXONDMLFJQYNJRPVJSBVXFVEOVUGBLOYFOOBTAKMETEGX");
    msg.last_error.assign("HFKSNAVUURSQQJJZXQATREZEDKAQO");
    msg.last_error_time = 0.802532656145;

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
    msg.setTimeStamp(0.665668576292);
    msg.setSource(7351U);
    msg.setSourceEntity(59U);
    msg.setDestination(58452U);
    msg.setDestinationEntity(75U);
    msg.mcount = 3U;
    msg.mnames.assign("HERPHEKFBYPUCQIHZUKEGFOLOJBWYDVUPDOMWMDQHNIGRFJQCZCTNXJLMJGKGZQFTEYXAWRHAVNYDTRHIXSGZHVMZEUOOBLNBEYPNRGKABKBISJMPQKUWGGJCLUK");
    msg.ecount = 49U;
    msg.enames.assign("ATFNGEGTITNQSGRGDGDNZNQTXNECHRVUXRZNMIQGVZBZYYUXTXVECQEYYSBWRRAZVCPEFHFGOOTPSIOUPODBBUWHRNEZEJHHYOVTDPNNUBP");
    msg.ccount = 192U;
    msg.cnames.assign("RNOTDUGTOHAKWPYYLJBVFRAGUZP");
    msg.last_error.assign("OBEIZEZBUDWUGKJTXAHSJLOOVKQJRISQIYDNRYHTNHMVOAWOCPCI");
    msg.last_error_time = 0.698345307629;

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
    msg.setTimeStamp(0.0473139681562);
    msg.setSource(46708U);
    msg.setSourceEntity(231U);
    msg.setDestination(4601U);
    msg.setDestinationEntity(86U);
    msg.mask = 187U;
    msg.max_depth = 0.115396214018;
    msg.min_altitude = 0.0509473116757;
    msg.max_altitude = 0.428708151035;
    msg.min_speed = 0.433032293372;
    msg.max_speed = 0.530721672724;
    msg.max_vrate = 0.16662954055;
    msg.lat = 0.830909948821;
    msg.lon = 0.431400861829;
    msg.orientation = 0.753886889367;
    msg.width = 0.324046966549;
    msg.length = 0.779945997918;

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
    msg.setTimeStamp(0.65460407482);
    msg.setSource(12142U);
    msg.setSourceEntity(63U);
    msg.setDestination(42418U);
    msg.setDestinationEntity(30U);
    msg.mask = 93U;
    msg.max_depth = 0.435007110607;
    msg.min_altitude = 0.691886139298;
    msg.max_altitude = 0.396628792716;
    msg.min_speed = 0.549980931362;
    msg.max_speed = 0.396334203478;
    msg.max_vrate = 0.167857003187;
    msg.lat = 0.656286427238;
    msg.lon = 0.725873332183;
    msg.orientation = 0.975291092796;
    msg.width = 0.899460953878;
    msg.length = 0.06322071962;

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
    msg.setTimeStamp(0.442947696941);
    msg.setSource(9686U);
    msg.setSourceEntity(65U);
    msg.setDestination(60209U);
    msg.setDestinationEntity(47U);
    msg.mask = 130U;
    msg.max_depth = 0.0422904120298;
    msg.min_altitude = 0.588997559819;
    msg.max_altitude = 0.533719424294;
    msg.min_speed = 0.449204913575;
    msg.max_speed = 0.334597945838;
    msg.max_vrate = 0.13507108394;
    msg.lat = 0.414295471848;
    msg.lon = 0.277125266984;
    msg.orientation = 0.200561513789;
    msg.width = 0.208742939286;
    msg.length = 0.900119688369;

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
    msg.setTimeStamp(0.885243976789);
    msg.setSource(9992U);
    msg.setSourceEntity(173U);
    msg.setDestination(48161U);
    msg.setDestinationEntity(125U);

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
    msg.setTimeStamp(0.117614889796);
    msg.setSource(60332U);
    msg.setSourceEntity(124U);
    msg.setDestination(16756U);
    msg.setDestinationEntity(132U);

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
    msg.setTimeStamp(0.630965944283);
    msg.setSource(63857U);
    msg.setSourceEntity(243U);
    msg.setDestination(8080U);
    msg.setDestinationEntity(199U);

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
    msg.setTimeStamp(0.522494523678);
    msg.setSource(26392U);
    msg.setSourceEntity(106U);
    msg.setDestination(19730U);
    msg.setDestinationEntity(166U);
    msg.duration = 9472U;

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
    msg.setTimeStamp(0.529699638828);
    msg.setSource(42145U);
    msg.setSourceEntity(84U);
    msg.setDestination(12340U);
    msg.setDestinationEntity(157U);
    msg.duration = 623U;

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
    msg.setTimeStamp(0.599438431075);
    msg.setSource(38167U);
    msg.setSourceEntity(211U);
    msg.setDestination(17666U);
    msg.setDestinationEntity(150U);
    msg.duration = 39654U;

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
    msg.setTimeStamp(0.648837787621);
    msg.setSource(14532U);
    msg.setSourceEntity(118U);
    msg.setDestination(13646U);
    msg.setDestinationEntity(209U);
    msg.enable = 5U;
    msg.mask = 2506747866U;
    msg.scope_ref = 1460617106U;

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
    msg.setTimeStamp(0.693435053312);
    msg.setSource(20574U);
    msg.setSourceEntity(165U);
    msg.setDestination(65462U);
    msg.setDestinationEntity(250U);
    msg.enable = 160U;
    msg.mask = 3708559166U;
    msg.scope_ref = 2088508661U;

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
    msg.setTimeStamp(0.110672346894);
    msg.setSource(40193U);
    msg.setSourceEntity(162U);
    msg.setDestination(47005U);
    msg.setDestinationEntity(23U);
    msg.enable = 125U;
    msg.mask = 832724094U;
    msg.scope_ref = 2895640150U;

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
    msg.setTimeStamp(0.933056802134);
    msg.setSource(22107U);
    msg.setSourceEntity(46U);
    msg.setDestination(38370U);
    msg.setDestinationEntity(66U);
    msg.medium = 167U;

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
    msg.setTimeStamp(0.627952161207);
    msg.setSource(18707U);
    msg.setSourceEntity(83U);
    msg.setDestination(13345U);
    msg.setDestinationEntity(37U);
    msg.medium = 193U;

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
    msg.setTimeStamp(0.613085714738);
    msg.setSource(55491U);
    msg.setSourceEntity(200U);
    msg.setDestination(10353U);
    msg.setDestinationEntity(11U);
    msg.medium = 170U;

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
    msg.setTimeStamp(0.840757638675);
    msg.setSource(49870U);
    msg.setSourceEntity(96U);
    msg.setDestination(59389U);
    msg.setDestinationEntity(76U);
    msg.value = 0.868687943958;
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
    msg.setTimeStamp(0.68372602026);
    msg.setSource(35751U);
    msg.setSourceEntity(135U);
    msg.setDestination(45722U);
    msg.setDestinationEntity(27U);
    msg.value = 0.0234614972316;
    msg.type = 33U;

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
    msg.setTimeStamp(0.252283854742);
    msg.setSource(44927U);
    msg.setSourceEntity(21U);
    msg.setDestination(62022U);
    msg.setDestinationEntity(102U);
    msg.value = 0.773857948192;
    msg.type = 95U;

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
    msg.setTimeStamp(0.780613882855);
    msg.setSource(52501U);
    msg.setSourceEntity(3U);
    msg.setDestination(64528U);
    msg.setDestinationEntity(208U);
    msg.possimerr = 0.50897369483;
    msg.converg = 0.586166934956;
    msg.turbulence = 0.302252659269;
    msg.possimmon = 125U;
    msg.commmon = 53U;
    msg.convergmon = 7U;

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
    msg.setTimeStamp(0.146613907258);
    msg.setSource(37214U);
    msg.setSourceEntity(90U);
    msg.setDestination(30735U);
    msg.setDestinationEntity(101U);
    msg.possimerr = 0.511191300761;
    msg.converg = 0.957369053098;
    msg.turbulence = 0.646802741743;
    msg.possimmon = 102U;
    msg.commmon = 213U;
    msg.convergmon = 211U;

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
    msg.setTimeStamp(0.93228486026);
    msg.setSource(44252U);
    msg.setSourceEntity(72U);
    msg.setDestination(19759U);
    msg.setDestinationEntity(28U);
    msg.possimerr = 0.549148457913;
    msg.converg = 0.18513044694;
    msg.turbulence = 0.354609314424;
    msg.possimmon = 205U;
    msg.commmon = 241U;
    msg.convergmon = 148U;

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
    msg.setTimeStamp(0.686952605926);
    msg.setSource(59666U);
    msg.setSourceEntity(242U);
    msg.setDestination(65453U);
    msg.setDestinationEntity(246U);
    msg.autonomy = 206U;
    msg.mode.assign("DNAKSJBJOLIAKWYXJCVXLNXJLTZXMMSVRUTZPJKGVPQCMGHHKORYANBDGLFLKEOFUVF");

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
    msg.setTimeStamp(0.98097063672);
    msg.setSource(29499U);
    msg.setSourceEntity(205U);
    msg.setDestination(45079U);
    msg.setDestinationEntity(114U);
    msg.autonomy = 232U;
    msg.mode.assign("ZHEZRJVDFLVDIIBWMKSSMJIGLCQAUOVTTWNCRKQCELPHZDBVLYHHNAXMHGKWDRSUHSAWRACXQPPKVLKMQPCOSLWVHZKDXGHAJCKKNZWVEMZZEIPVLJOQYHYSGIDWRYSOBNFXWOTURGGFMVQMMGRHUZKEJ");

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
    msg.setTimeStamp(0.769107281108);
    msg.setSource(60959U);
    msg.setSourceEntity(198U);
    msg.setDestination(27878U);
    msg.setDestinationEntity(227U);
    msg.autonomy = 56U;
    msg.mode.assign("NQBZYBSJKTTIKVLUTINSXLCVGJBQSIERXXTGHELLSNPRMUHITRQZFKPWWESIRPLUXOMMOXOMNYJBYZGJQNWLZWYZMVDGOFNAOOPFGVPJJWSKUWYREYVWDSESAZGMTXKNVMKDEAEZA");

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
    msg.setTimeStamp(0.12351591844);
    msg.setSource(29145U);
    msg.setSourceEntity(139U);
    msg.setDestination(1164U);
    msg.setDestinationEntity(121U);
    msg.type = 237U;
    msg.op = 182U;
    msg.possimerr = 0.173835976549;
    msg.converg = 0.0989903238116;
    msg.turbulence = 0.731368731734;
    msg.possimmon = 6U;
    msg.commmon = 188U;
    msg.convergmon = 213U;

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
    msg.setTimeStamp(0.43194773302);
    msg.setSource(34536U);
    msg.setSourceEntity(19U);
    msg.setDestination(18474U);
    msg.setDestinationEntity(134U);
    msg.type = 73U;
    msg.op = 165U;
    msg.possimerr = 0.359254584403;
    msg.converg = 0.498761386269;
    msg.turbulence = 0.816798262631;
    msg.possimmon = 31U;
    msg.commmon = 140U;
    msg.convergmon = 156U;

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
    msg.setTimeStamp(0.0818052670368);
    msg.setSource(10762U);
    msg.setSourceEntity(152U);
    msg.setDestination(855U);
    msg.setDestinationEntity(209U);
    msg.type = 20U;
    msg.op = 80U;
    msg.possimerr = 0.747382343271;
    msg.converg = 0.385165289957;
    msg.turbulence = 0.155708662059;
    msg.possimmon = 240U;
    msg.commmon = 2U;
    msg.convergmon = 244U;

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
    msg.setTimeStamp(0.010350476654);
    msg.setSource(36642U);
    msg.setSourceEntity(249U);
    msg.setDestination(15750U);
    msg.setDestinationEntity(101U);
    msg.op = 236U;
    msg.comm_interface = 92U;
    msg.period = 15641U;
    msg.sys_dst.assign("QTSGRNLUXWDPCASWXLKBUSFSGYPOSMZYVAGZPPGAKDGNEOFKRNKCJOGMMGELHAATIOVIQYOYZVKFMDGLMPUTTRRXXOJDQFRUYFTLBJDNHLLXWCPIFHDEYGVCUKFWQTZTUMJBJKXJRNAPHMXJYWOEACBXZVBQWZDKIPBCNUVRVTOCWBDZSEHFUFKCHLLLBWJQTACIIKNISSARAFYEUMEIZIQYJYDOQEZXURVPRNQ");

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
    msg.setTimeStamp(0.652415932713);
    msg.setSource(21411U);
    msg.setSourceEntity(166U);
    msg.setDestination(59169U);
    msg.setDestinationEntity(3U);
    msg.op = 230U;
    msg.comm_interface = 174U;
    msg.period = 41297U;
    msg.sys_dst.assign("MOFKYEOEBUSZDPXWYJHROFOFQASDBDBKAKWDVUDPAWVHMVQTYDCOIWNFHZEOMZDUNTLTCXLNSSJCOIRGAFCMPSUAFNRQWLRIMQUNZYJJVFGRNHEKKAKDNBULUWMDLSPBHYYIRHJDQIRASMHEEJKBUBYLFCTXQMJPXVGZXZCUTCYAZMNWPBGTEOKPX");

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
    msg.setTimeStamp(0.243622172915);
    msg.setSource(37836U);
    msg.setSourceEntity(173U);
    msg.setDestination(40547U);
    msg.setDestinationEntity(216U);
    msg.op = 93U;
    msg.comm_interface = 128U;
    msg.period = 64326U;
    msg.sys_dst.assign("WABTDAAYSKTENOVZXJZOYKPEGDVTDLKZAVYEPLHQIPUUKUYDYKXORPFNUQHPZPKXFLJAYSMEBPQLQJARHJEQYZIPXBEWJUAEJURHKTMMIFKYMVOHNSFDVIHCSFSVWDAYFXROCNWXWOEQTEDMQKNSTSVGDFLVQEFNNJQSRHDXZZBPYIBRBHDURIILBXLWGGRKCORGSFOHBU");

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
    msg.setTimeStamp(0.438733680418);
    msg.setSource(46167U);
    msg.setSourceEntity(88U);
    msg.setDestination(58731U);
    msg.setDestinationEntity(198U);
    msg.stime = 3219262079U;
    msg.latitude = 0.276629063295;
    msg.longitude = 0.214619378904;
    msg.altitude = 31178U;
    msg.depth = 43848U;
    msg.heading = 51221U;
    msg.speed = 515;
    msg.fuel = -111;
    msg.exec_state = -50;
    msg.plan_checksum = 8024U;

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
    msg.setTimeStamp(0.728194029054);
    msg.setSource(13221U);
    msg.setSourceEntity(98U);
    msg.setDestination(59763U);
    msg.setDestinationEntity(144U);
    msg.stime = 3741424507U;
    msg.latitude = 0.191147131084;
    msg.longitude = 0.709059053671;
    msg.altitude = 51942U;
    msg.depth = 7790U;
    msg.heading = 27660U;
    msg.speed = -24844;
    msg.fuel = 14;
    msg.exec_state = 14;
    msg.plan_checksum = 46791U;

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
    msg.setTimeStamp(0.986468018062);
    msg.setSource(25203U);
    msg.setSourceEntity(13U);
    msg.setDestination(24464U);
    msg.setDestinationEntity(190U);
    msg.stime = 1183319226U;
    msg.latitude = 0.830800786228;
    msg.longitude = 0.0556766941278;
    msg.altitude = 15823U;
    msg.depth = 62601U;
    msg.heading = 5363U;
    msg.speed = -32651;
    msg.fuel = -89;
    msg.exec_state = 122;
    msg.plan_checksum = 59536U;

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
    msg.setTimeStamp(0.109542577899);
    msg.setSource(27144U);
    msg.setSourceEntity(252U);
    msg.setDestination(59606U);
    msg.setDestinationEntity(89U);
    msg.req_id = 43124U;
    msg.comm_mean = 252U;
    msg.destination.assign("NXDZLVTTCTTJGFXZUDOYBETYQVXPOFWEBLINNLKKIOAOXFKFRDPJMPBFCYCJDAOITNLYVXJCZQKQENAEBKPXASXSLZVBOCWDAGUMNIUBMPVSHOKVLFAIGYZLBWFHPNSSZNAQGMHAVCVZDYZGVEMCUHWIUHVYAHHRPSFRMFQTWHWGYRRAGBBSQORTJPWLXJKPSMWTIGDUQCYDWECXJBINJLQRRQODUQSNSYZRCUFGZKEIWLRJKJPX");
    msg.deadline = 0.5828827716;
    msg.data_mode = 223U;
    IMC::Throttle tmp_msg_0;
    tmp_msg_0.value = 0.537462919948;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("INUVKEXPJMYKIWHPGGPXIPPJWAOMSBFWCANFYRZYEHKWOXGZLGWDWSTKQVKFFBRLBDGKTXIRBIMHBORQEJUICOYUXSJTLGYRHCRZTCPPQQSTYZHFIOIJDQVJQUHRKDUBEDQJZMAPFEAVBANGKXL");
    const char tmp_msg_1[] = {-88, -24, 66, -56, 56, -16, -110, 41, 76, -38, -55, 55, 54, -95, -3, 66, -10, -58, -67, -15, 120, 70, 90, 87, 45, 126, -127, -21, -118, -75, 14, -100, -70, -73, -46, 66, -107, -82, -71, -97, 102, 24, -22, -108, -123, 59, -114, 61, 21, -90, 96, 59, 90, 96, -101, 83, 91, -116, 105, -102, -52, 120, -111, -21, 118, -54, 42, -25, -91, -124, -40, 38, 36, 113, 58, -28, 69, -89, -70, 87, 33, 115, 92, 82, 16, 67, 97, -82, 66, -62, 8, -103, 75, -119, 121, -107, -98, -67, -122, -42, -91, -13, -91, 73, 100, 33, -87, -122, -125, -63, -87, 32, 42, 50, 46, -112, 100, -92, 42, 35, 20, -16, 5, 115, 97, 36, -73, 59, 29, -7, 84, -62, 45, -48, -10, -112, -57, -49, 32, 117, 60, 79, -3, 56, -11, -91, -80, 117, 119, 25, 124, 49, -103, 23, 72, -118, -61, -100, -56, -24, -10, 27, 56, -15, -82, -106, 57, -77, 100, 75, -23, -33, -124, 116, 15, 125, 119, -80, -100, 73};
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
    msg.setTimeStamp(0.549919479971);
    msg.setSource(60154U);
    msg.setSourceEntity(210U);
    msg.setDestination(18366U);
    msg.setDestinationEntity(105U);
    msg.req_id = 1459U;
    msg.comm_mean = 39U;
    msg.destination.assign("NFPGDAYIJCPQUBXNEGSKWIZOQMOMWLNUDNLQOFVDXLETANGHSXFBOQJKSUTOGOGPSQWGXRAEOPZKXHHSVKCIGPHCLYVNZTKXZRDTQMRUCNMFMNUMWIZCTYMDGEHXEKDWCVYNATSHKJBTSEJRLQBPVF");
    msg.deadline = 0.586002824852;
    msg.data_mode = 115U;
    IMC::UamTxFrame tmp_msg_0;
    tmp_msg_0.seq = 8937U;
    tmp_msg_0.sys_dst.assign("IEFMOWZYZJKBYQFNVLUVHBXYMCAPMSROTTWDLTAKCHIBAOKQQUKESAFLAVHUAWJOASWMYPPBTYLBNWVRWDGILDUVDHHSXGQKPMKMM");
    tmp_msg_0.flags = 41U;
    const char tmp_tmp_msg_0_0[] = {-117, -7, 77, 94, -89, 93, -17, -52, -114, 76, 12, 21, -53, -1, 61, 17, 12, -3, -91, 24, 84, -96, 117, -40, 44, -66, 96, -71, -44, 111, -96, -94, 43, -54, 111, -27, -104, -98, 9, 120, 125, -122, -43, 93, 38, 29, 0, -22, 65, -96, 9, 57, 21, 69, -98, 31, -77, 41, 20, 104, -69, 18, 102, 117, 54, 10, -39, -66, 105, 22, 59, -108, -126, 59, -106, 16, 100, 5, 30, 38, 40, 110, 107, 8, 62, 30, -23, -76, -19, 41, 79, -37, -54, -65, -33, 119, -54, -112, -25, -126, -105, -16, 77, 105, 21, -48, 80, 58, 13, -30, 41, -106, 28, 71, -57, 78, 69, 0, 21, 5, 2, -118, -31, 44, 111, 45, 15, 103, -47, -114, -59, -68, 52, -17, -54, -126, -89, 2, 112, 9, -57, 64, -55, -105, 7, 85, 116, -86, 126, -79, 109, 46, 111, -90, -95, 65, -47, -11, -37, -117, -114, -70, -21, 59, -96, -114, -19, -6, 76, 114, 82, -46, 107, -6, -13, -79, 70, 16, 101, 4, -36, 47, 90, 54, 6, 31, -12, 49, 14, -1, 15, -18, -73, 29, 49, 49, 5, 108, 18, 35, -27, 83, 10, -114, 78, 107, 84, 63, 35, 101, 112, -120, 69, 82};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("UTEEXHGJFDSHPUXJNWKEBVOPUIGUEAWLQDXRMSSVGPYKOPBDFHESBZFVCTHRRYBSDOIGINDCKQQ");
    const char tmp_msg_1[] = {15, 121, -84, -16, 11, 4, 75, -116, 59, 30, 97, 11, 6, -76, 120, 89, -99, -52, -10, -54, -11, 91, 18, -60, -123, -45, -52, -38, -32, -120, -14};
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
    msg.setTimeStamp(0.252533453623);
    msg.setSource(65484U);
    msg.setSourceEntity(174U);
    msg.setDestination(30378U);
    msg.setDestinationEntity(114U);
    msg.req_id = 60923U;
    msg.comm_mean = 168U;
    msg.destination.assign("KTOYGJGDUGCCJIYXKCMQXDYLVXEMCFIVQSFRXDMSOMOVPVGIOPUHMRBNFSYESY");
    msg.deadline = 0.378301738479;
    msg.data_mode = 214U;
    IMC::StationKeeping tmp_msg_0;
    tmp_msg_0.lat = 0.0691614370927;
    tmp_msg_0.lon = 0.0462146990963;
    tmp_msg_0.z = 0.199649788249;
    tmp_msg_0.z_units = 21U;
    tmp_msg_0.radius = 0.433031863252;
    tmp_msg_0.duration = 29762U;
    tmp_msg_0.speed = 0.0110072739999;
    tmp_msg_0.speed_units = 126U;
    tmp_msg_0.popup_period = 8863U;
    tmp_msg_0.popup_duration = 21814U;
    tmp_msg_0.flags = 33U;
    tmp_msg_0.custom.assign("ZXSLAKUTYWXKNCGIRGJYBUMJQKHCQOMWBIIKCPUSHLFAXGNXADVPRNAWUHUFVUNDK");
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("LOZJIFGHTEPOHTTVHVOASLLUSNEFDJFQIVZVREBTAWBVLPSTZHKKZUNJCACRINYWYJXWXWHBNVUXHAIFBDCSYVEKGPABXRQMUADJRIGYUIQBLDWZEQYEFUWGNMOPYYEOTSKCFKNXGNQOKZKCXYCISXUALSPVVMQRGLOPCRZYUEDPTMGR");
    const char tmp_msg_1[] = {-13, 84, -113, -55, -100, 94, -46, 104, -39, 108, -17, 4, -16, -27, -53, 40, -98, 52, 43, -36, 7, 77, -63, -29, 19, -27, 114, 92, -94, -80, 0, 100, -27, -79, 68, 83, -107, -60, -91, -43, 122, -71, -125, 84, 60, -47, 110, -123, 21, 45, 37, 98, -49, 72, -30, 115, -47, 32, 97, 91, -31, 8, 89, -3, -38, -126, 76, -12, 103, -21, 63, 8, 52, 103, 37, 38, 63, 120, -116, 18, 106, 80, -76, 83, -88, -110, -64, 78, -54, -67, -89, -35};
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
    msg.setTimeStamp(0.430741949298);
    msg.setSource(57208U);
    msg.setSourceEntity(32U);
    msg.setDestination(26915U);
    msg.setDestinationEntity(233U);
    msg.req_id = 52514U;
    msg.status = 179U;
    msg.info.assign("LPQUUXNZBECTJTRVGBBMMDZSKCJXNUDFPFDZYQXLJUJWWYHNGGKRMUAAMEVDCPAWYHOIPOSGVJSTOGAPKBRGMALIQRIHZTFNLSVZDEEXPHFICFFCELKSWBCCRMLPDZXKQMJOWEHYEAVYIOTZJQQUATSR");

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
    msg.setTimeStamp(0.663738301469);
    msg.setSource(35942U);
    msg.setSourceEntity(17U);
    msg.setDestination(52856U);
    msg.setDestinationEntity(251U);
    msg.req_id = 40506U;
    msg.status = 79U;
    msg.info.assign("QIYWTDZRMYUDWXHNJZFXGBRFXZQSTXGWSTRUJSIYPEBSANHPJYUVVSLDUHQCVIOJUGPRGKFDHXHLFNLJMZNXYJXFVITNELVHASFRPQTMCFOGBUSEQYXUQHKDDLAILPENFBCGMAQVHHETZACCJN");

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
    msg.setTimeStamp(0.626774896671);
    msg.setSource(1045U);
    msg.setSourceEntity(107U);
    msg.setDestination(23804U);
    msg.setDestinationEntity(118U);
    msg.req_id = 12893U;
    msg.status = 234U;
    msg.info.assign("TZSVKUSCLQGNDAVTD");

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
    msg.setTimeStamp(0.75797223394);
    msg.setSource(28651U);
    msg.setSourceEntity(189U);
    msg.setDestination(35152U);
    msg.setDestinationEntity(6U);
    msg.req_id = 39417U;
    msg.destination.assign("FLFQYQGTCYMGWZLLPNWLMKFMQNUHDVGSWOAXTIBJXVVTQHBZUZQVRWSOYQLZHMJCNFKPUZPLEIPPEDAJBERAWBIQZNVGDSJAOMYEPUGEXPIVUJDIWTENCPSIBBIFRXNVHOYMTWNS");
    msg.timeout = 0.143334692757;
    msg.sms_text.assign("FDNYWHCJTKVSMXHCKRUAHPPUBZBQTXGSZUCHDWKXBGOWIWWJZVHWFRTECEJMOOQQZSVSFVALRVFNHBGISJIIUYLTBWPJVXKYYWFQNDQDQHHEUAWXUIMZXROGNEAFKYKREZTXEVPMFVPOBBTOIE");

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
    msg.setTimeStamp(0.615878867853);
    msg.setSource(47906U);
    msg.setSourceEntity(232U);
    msg.setDestination(1816U);
    msg.setDestinationEntity(64U);
    msg.req_id = 55809U;
    msg.destination.assign("CJFUFNMKQBBMJZXYGLKNZHFRQYUFRTQJOLVHWFVTNAPXRDVWVLSOPEPSEIGMXIPJGJCXQACSNAGVRXLUXWUSMRHVYBSBYVBOGQPO");
    msg.timeout = 0.567795103492;
    msg.sms_text.assign("PEEQVTLJBPLCEVWUDRYXTOEEQXDIUOJDQHUITNOONPP");

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
    msg.setTimeStamp(0.97420199777);
    msg.setSource(39387U);
    msg.setSourceEntity(136U);
    msg.setDestination(38788U);
    msg.setDestinationEntity(98U);
    msg.req_id = 8642U;
    msg.destination.assign("FBXPDVNGAYVXKGCSBUCIULQJCRSGTPAQVZXYDFKGTNVRPUVDSFKTBUMWYHPBFVVOLG");
    msg.timeout = 0.148964617548;
    msg.sms_text.assign("GJUXTSFNPQZCUPAKYRXIVLBCSGGLMKUGCSIBQBTROFPSWOWXTMIMLWYWGAMOVZQHXTFWPHICEPWVJASRKQNZIPHMDSXEEEVDMSLSGJNZXVPBYQFCIHZZLCLKMOWJIUAFGNQPNYCMDRSFOJFEFRVTFTAHYEBDRLDXQUAXBAUNUAKIUAOMDKHJHRWYHQLRKLJNFTNHBZEJDYUTVDLUDGIBCQNVZPECBKZDOVTWVCTBEMGJRYO");

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
    msg.setTimeStamp(0.521653783492);
    msg.setSource(21441U);
    msg.setSourceEntity(83U);
    msg.setDestination(42675U);
    msg.setDestinationEntity(163U);
    msg.req_id = 16680U;
    msg.status = 0U;
    msg.info.assign("EVJLRWUEWMRWYZMLGCPNYJHLHFMIJYFDXKWFUPOJFHLPPROVZGMXXESSEODMKTFATCLQPKQZLBMJIJRXSDPLNMAAUTQYVHGGYU");

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
    msg.setTimeStamp(0.601925870265);
    msg.setSource(3652U);
    msg.setSourceEntity(12U);
    msg.setDestination(59151U);
    msg.setDestinationEntity(148U);
    msg.req_id = 14575U;
    msg.status = 161U;
    msg.info.assign("IFVGGRXGIIVUCWBIPMMZKSSTQYGELXNYRZEYVCAIFNWNFSQOPYUSGRXZFQPALLQJGFCIPDETFIJVKPVFMPSLETOHDWQZUDVHRYJEOS");

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
    msg.setTimeStamp(0.253019887938);
    msg.setSource(12540U);
    msg.setSourceEntity(225U);
    msg.setDestination(47736U);
    msg.setDestinationEntity(180U);
    msg.req_id = 41126U;
    msg.status = 30U;
    msg.info.assign("IEKRADAPQWDCFVBBNSPODCIRHZSZDQOMBVFQYPTMINCIPNMEHJDX");

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
    msg.setTimeStamp(0.300169861097);
    msg.setSource(22009U);
    msg.setSourceEntity(202U);
    msg.setDestination(39878U);
    msg.setDestinationEntity(98U);
    msg.state = 132U;

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
    msg.setTimeStamp(0.40948416438);
    msg.setSource(54118U);
    msg.setSourceEntity(20U);
    msg.setDestination(44890U);
    msg.setDestinationEntity(211U);
    msg.state = 191U;

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
    msg.setTimeStamp(0.340045256232);
    msg.setSource(36669U);
    msg.setSourceEntity(160U);
    msg.setDestination(7290U);
    msg.setDestinationEntity(164U);
    msg.state = 199U;

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
    msg.setTimeStamp(0.857620450433);
    msg.setSource(5011U);
    msg.setSourceEntity(94U);
    msg.setDestination(28113U);
    msg.setDestinationEntity(40U);
    msg.state = 242U;

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
    msg.setTimeStamp(0.334258580342);
    msg.setSource(17995U);
    msg.setSourceEntity(66U);
    msg.setDestination(14322U);
    msg.setDestinationEntity(24U);
    msg.state = 126U;

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
    msg.setTimeStamp(0.885237883091);
    msg.setSource(4179U);
    msg.setSourceEntity(44U);
    msg.setDestination(9752U);
    msg.setDestinationEntity(25U);
    msg.state = 48U;

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
    msg.setTimeStamp(0.0173663910364);
    msg.setSource(42616U);
    msg.setSourceEntity(170U);
    msg.setDestination(38050U);
    msg.setDestinationEntity(20U);

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
    msg.setTimeStamp(0.465675099613);
    msg.setSource(21212U);
    msg.setSourceEntity(249U);
    msg.setDestination(33419U);
    msg.setDestinationEntity(92U);

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
    msg.setTimeStamp(0.691251716017);
    msg.setSource(41879U);
    msg.setSourceEntity(188U);
    msg.setDestination(27361U);
    msg.setDestinationEntity(152U);

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
    msg.setTimeStamp(0.130668464917);
    msg.setSource(31818U);
    msg.setSourceEntity(61U);
    msg.setDestination(13511U);
    msg.setDestinationEntity(23U);
    msg.plan_id.assign("SOBTLMEYSPSBOTOKFWQRQNLCFLXYKEPHNEKBXXBYRBMDROVTHNNLVUQSWDYGRCUDFFZAYVTMDZQLAADAFPZIJTTMKHMIWUVATTNJXOIEHWFSHFUEPZKQQHNYTEEUCVWCYSDQDXIMDZGBWRIX");
    msg.description.assign("KMTLVENKQXSYASRVFUSCPHSIJDYYJPTSJTZGFICHVERMKZWIINBGWCTMHIEVKFYRRRJDBUESQQBFZALBXAERTGMNVJHRIZDHEGHFMLDWWQLBMYSNBQHDPIABLWGDJY");
    msg.vnamespace.assign("SIXGLIBARUUPNCAFTPCTTOMPBKB");
    msg.start_man_id.assign("GIWXEJTLNDOWOEHTOMBGXMJJTPOFNVVACQPLOITBZCCPJWESESERKSQMSRKPCPJAWRTGNTVRPMSGCQOIUGCYPHKKFVAZKWDEFUYRGLXTAHIMDKDNHSEOKUCZDSOFRZDLKDFSVCXJNXFAGWHYHDMFEPVQKUCYBQNIUPUEQKLQFVIVMRYXTLWQAANWZYUJBAISYBMGBBGZIXBIARQZTJMLZVZSVULPABWJOHIGLOENNWHHUFYXZBFRXNHDDUM");
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("QNFXBZXGNAZABTJQCPCMGCOGJCXKFHRUQOKEFUEPMNYUSQHPDBVUJNNWIHKPIKDZYOJLWZDJTLOJEQFOAXNKNKURCVADMFDO");
    IMC::FollowPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.target.assign("DDKPMSQEGLGSRWNJZIAFCDXWKV");
    tmp_tmp_msg_0_0.max_speed = 0.957243369647;
    tmp_tmp_msg_0_0.speed_units = 168U;
    tmp_tmp_msg_0_0.lat = 0.902818529957;
    tmp_tmp_msg_0_0.lon = 0.274777769127;
    tmp_tmp_msg_0_0.z = 0.662394710885;
    tmp_tmp_msg_0_0.z_units = 2U;
    tmp_tmp_msg_0_0.custom.assign("CFPZWRDHYKRBUAVNCVKMUNBWJ");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::UamTxFrame tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.seq = 26389U;
    tmp_tmp_msg_0_1.sys_dst.assign("SAVFIKBEEWQXZMRIYKZMHMOHHTPDZYGVJJBPQQWSFYYCCSWBZLSRJUWJUPEOPXJICQVIOHLFEDNZPNGCFUHIIDPBOVGNZHTSOYWBJLZLQXDKNEMISPJOPFNEHHVFABPNIAVSSMWXFTTDAUGU");
    tmp_tmp_msg_0_1.flags = 254U;
    const char tmp_tmp_tmp_msg_0_1_0[] = {-52, 14, -52, -97, -7, 86, -77, -37, -45, -125, 36, -107, 103, 19, 120, -27, -11, 83, 111, 45, -13, 24, 101, -106, 15, -17, 65, 46, 71, 119, -106, 16, -26, -51, 81, 80, -128, -77, -1, 39, 15, 7, 60, -86, 29, 21, -57, -86, -72, -48, -89, -38, 114, 83, 108, -55, 8, 22, 119, -27, 88, -46, -34};
    tmp_tmp_msg_0_1.data.assign(tmp_tmp_tmp_msg_0_1_0, tmp_tmp_tmp_msg_0_1_0 + sizeof(tmp_tmp_tmp_msg_0_1_0));
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_1);
    msg.maneuvers.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.110459980118);
    msg.setSource(38561U);
    msg.setSourceEntity(130U);
    msg.setDestination(29448U);
    msg.setDestinationEntity(36U);
    msg.plan_id.assign("YVQUDFZVQHRPVUGNZAZKQNFLZWPHRMDGDSOISLBTESBKHAWJOSJDYWFRMJNDFJZBOKJYUYQSRCXBKYXNEHIDLZGLTNPUVLPMPPHHPWUWRAXFKTTBTGVKCLMMCRZEZGJDEPICFMKPRGEAROUKHFLLABQGYVYBXXLCIXSCIQMEIJKYATJVCUVEFIIBAWNNQQOZSWYDHT");
    msg.description.assign("MCEFUAGCFTCLBFNYPYPWCQXNMKIXNZSKVOKORSCJLOTRKCBTGUIAOSZZAVTQNTVLYJMHJERMFMSAVZDSMQSRGMUIABPRZJQWKTEZNLXDFKKNZOSTEQRBUDJWVOEWDNPAKPWVMAVGYUGXHFCYZOVCYGBOJSYTZCJILGAQRDZOBGOHUDGHXXWFMQLBIRTUUPVQLJPWHIPDBHRBKQNKIVELAIFYDNSQTUAMHLULWGYFIHENSDEXPHYCBPDJ");
    msg.vnamespace.assign("MYVLHJOKQSRYKJEHMIUZKQNGPIBDRZAYDCFOJYGIBZVOLJITHOJMCNVNZEGZWUFVCWDSBNBMXYMUYRNSPFWXIIMOEVSIVCYZVQLELXXWKQNOQTPKWTDGEKJSCTZBYXDAJPFWDGFXTNSAQRICQWOHXNFRABHHSCHDKLIGTOCURPABXEEZUQAPTFANBUGBPREUTTPDWYUJXHQFKLKRCJMLEMPQVRG");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("VRVVKMPDZNDAJIHYRQJKZBPTUOLWRUWALIXGJEBIWPDIYKGLEHJMOAYNEONLELYFRNLCBTHXHCIZEQZVZXLNMOSTZCOKXATSPUKIPAYXYIFZDMDZAXFSXDFRMXWTMIISBPMVGMZNBUAUKPWCBLRYKHUFEESIUBFVFXGSQQWKQDPHFHOQEVTYBHUSJUCWHJAQTMRXOMVTSVDRNEQPCTPQUSFLJCVGODFTKOKQCGERNGNWAZ");
    tmp_msg_0.value.assign("GYJCNSHUWZAINBMPWSORVZLVFFDPQTXMALQIECYRBDKLABPDAAYNCFRMZZQHFLLWESKXAZLIRJTHXRCUNMSQJHEZQEYAKHYXPTJHTIKBCUISTBDTWDGWXGRFEXGGCLGURP");
    tmp_msg_0.type = 17U;
    tmp_msg_0.access = 41U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("FBIMWGMKVFIQCLUTWEXYUESULJUQEFUXBKKZOZDRMHNSJHHOWRDZARABFPFYVZXAUPLIIVOKBMNRWGNCOGAMQSYALTZUPWMLJYZYLJBINCZWTNAHZRGVHSUUYRXXKXGFSRVTPCPSJDDRAXUODXLNWNCHFHEBABOVBDTOSTIYMWDKKDGMTBFIJNQCQVVTPEJMCFPLALKNQLQZEOYWRHKDNSZWSPXIFEGG");
    IMC::DevDataText tmp_msg_1;
    tmp_msg_1.value.assign("RRHQKJXSRHGSWBMTUWUTLTDGCDKRDXRNFHIXMLJSGVBLVRKFCBDEYKZBMKNHBUWFAIQPCAQOXUAJMBZQFU");
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
    msg.setTimeStamp(0.452185969416);
    msg.setSource(18448U);
    msg.setSourceEntity(68U);
    msg.setDestination(9094U);
    msg.setDestinationEntity(174U);
    msg.plan_id.assign("DMYKBEIJXVTHTDXWASENSUFUURGEJBPKDAHTNETGMMKFFQQROWQHVEZJFSZFSYNXURBWFCMBAQMGZMPMWLOCPHMHTLBHCPNMCIYP");
    msg.description.assign("ZCXYVEELWJJNHUPMVAUBTXJTEZPLWBYIUZEMQXGIQPWERCRXFJSCFSPVQZNCFYIVYUXSQAXULEZEFQXDWXXJUDZGOGYDMNFYIGIGADHTTGOSAV");
    msg.vnamespace.assign("TXRKNDUOAIMSMEU");
    msg.start_man_id.assign("RXNMTWZZFTMBIYXEJYPTZDPAHIEEUUGXULYUFXPGPKQXQKOAVLKVHHTCIUYBQIGRAFRKSBBIDJXBNIEJBAUIQCASDVMHFYPJGZFUCKWKTKVYLDAYGZHGDOJNEYBSTDGJXROUQOFPRYLPHQSRSDPSOQDZVIKQANFRCOEVUMFBOLILCFECCBHRWNRZSNXDXPJRWWEVNHTMLNKDZWGWLQSHQMENMMWOLHSWMF");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("HBUGFNROAGKBXKFQDYLBHLWUXRHJDYIPUOSBFLJWYMGNHUOIZTDVTERADHFXQCVPPTYZUCECKUIUBXVLPEMFKIWZJKEWASKJMYGIPGUTGEMXLQWGMMKMBEZSTZYTQXSFGKURSDXNQPHPBOQTHDLAAKGQQCSJLTYOLDJIFSHCNXDLRFDICJALERYPOVHCDEQQNVJNJBJ");
    tmp_msg_0.value.assign("VMVTDQNOKRKDCCAQAXKJUPPBHNCSJRUTJHMZYVQFWLMFXHAGNJGVEZPWFLYEYTPTIJCZCIRKPEGBFTZIOGEVIFSYFAWHGYTQUQXPJMJSBDMHIVXOADASUFAKCJBXYLEOHNHISYLTBXWWLJNWQOLQMMLEHWMXY");
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
    msg.setTimeStamp(0.55701587997);
    msg.setSource(26986U);
    msg.setSourceEntity(139U);
    msg.setDestination(39649U);
    msg.setDestinationEntity(186U);
    msg.maneuver_id.assign("XBIJXTHFEFZUUEYIHCSYOJLUODCEPKCHVCSSLFDLKPHNYWXAEUGJVOTRIJACFINGGVNLBQDGQMIXCFMTKRAROMNDNUATMYPCZBWEDSGALHIVMFUTLNIQWRPWHFJKVETVLTXQSUTBXRMZHKETQYEEZXIBPUJSPQDMGYZTOCGHKS");
    IMC::Launch tmp_msg_0;
    tmp_msg_0.timeout = 12335U;
    tmp_msg_0.lat = 0.0937433570079;
    tmp_msg_0.lon = 0.0942059048531;
    tmp_msg_0.z = 0.331587512973;
    tmp_msg_0.z_units = 96U;
    tmp_msg_0.speed = 0.602480574402;
    tmp_msg_0.speed_units = 104U;
    tmp_msg_0.custom.assign("BDHRBVYLKVMGXERQNUKTXJSYTBLPDHCSCRXAOJCXFXDGNZYRQYFZCKVEJMGEITSQLJUSXTITVAUPPAEEBOQZIESSJXGGKNVNDPONSPVFMLZBRCYEQN");
    msg.data.set(tmp_msg_0);
    IMC::Target tmp_msg_1;
    tmp_msg_1.label.assign("VJGJKQMVSMDJAWRCPBBXPVATVFZXPIQTOOIMHJFINEVYSWINTQUQLHBJUHDNBENMOMRCSZBWC");
    tmp_msg_1.lat = 0.441730750897;
    tmp_msg_1.lon = 0.894780576545;
    tmp_msg_1.z = 0.211690589934;
    tmp_msg_1.z_units = 242U;
    tmp_msg_1.cog = 0.122524762944;
    tmp_msg_1.sog = 0.45848528071;
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
    msg.setTimeStamp(0.078085536523);
    msg.setSource(475U);
    msg.setSourceEntity(190U);
    msg.setDestination(65054U);
    msg.setDestinationEntity(113U);
    msg.maneuver_id.assign("YEBGHBJHTLQGLKTIUGIFGZNVKIIFXZJTRZTKGAHSTBPUHSCLWVUMSJQQIYBLZSJEOPKUVOJLMXQNADEOQPAWWUAMRZJYJHAXQPZXPOUQBTEBWUIRVAYDCOVCKDFIXOMQOD");
    IMC::ScheduledGoto tmp_msg_0;
    tmp_msg_0.arrival_time = 0.561298515069;
    tmp_msg_0.lat = 0.119605792126;
    tmp_msg_0.lon = 0.776895734146;
    tmp_msg_0.z = 0.219752421309;
    tmp_msg_0.z_units = 132U;
    tmp_msg_0.travel_z = 0.333983049006;
    tmp_msg_0.travel_z_units = 131U;
    tmp_msg_0.delayed = 138U;
    msg.data.set(tmp_msg_0);
    IMC::PowerOperation tmp_msg_1;
    tmp_msg_1.op = 3U;
    tmp_msg_1.time_remain = 0.386121424264;
    tmp_msg_1.sched_time = 0.311141977563;
    msg.start_actions.push_back(tmp_msg_1);
    IMC::SystemGroup tmp_msg_2;
    tmp_msg_2.groupname.assign("XYVQAWBTQKBQVGGAAIQFWICDEKJUSSCOUYXRCVEHCKOXONHPDVBYDKLKRKXMUUEWXMTTFRMZOMIHCPIDQXSLLTPQN");
    tmp_msg_2.action = 72U;
    tmp_msg_2.grouplist.assign("GAOHTKZREPBTXKRUICZEAPVJXWEABNJSEIZULUSUVIXBZHDCYCLCMZKFGQQR");
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
    msg.setTimeStamp(0.679888324235);
    msg.setSource(37052U);
    msg.setSourceEntity(74U);
    msg.setDestination(15937U);
    msg.setDestinationEntity(171U);
    msg.maneuver_id.assign("MHXQVHLTSVIWDLRRBGHSWXTWCCMKDPYPKEYVINZNIDBXQAMXRATSIOQNUEGPVGBZOBOJDFUQUMCOJEIEUYNZYSAJUYXDONTRWLUVXTKGJCCWUFRHLRIHGUQUFDQGLGLFSTBZIFBTBBMWWREMTKVXMNSAXSFPPNA");
    IMC::Land tmp_msg_0;
    tmp_msg_0.lat = 0.407877422761;
    tmp_msg_0.lon = 0.839131891167;
    tmp_msg_0.z = 0.7528431337;
    tmp_msg_0.z_units = 134U;
    tmp_msg_0.speed = 0.248366797601;
    tmp_msg_0.speed_units = 105U;
    tmp_msg_0.abort_z = 0.8671791427;
    tmp_msg_0.bearing = 0.026439696782;
    tmp_msg_0.glide_slope = 136U;
    tmp_msg_0.glide_slope_alt = 0.285851682582;
    tmp_msg_0.custom.assign("TIFQJPIFQKJBLPHTVMYBMUVPGKZEHWINLJWJAZBDTYYASHMJWGNSZBWDLRHCZOTVRHFXXVSXGQYLAVPPOCXKOAVDUERWBIDSPWRADTRRIHCGKNBSUEZNUONGUDXVCUSQVQFPLGENBACENXROWOPFO");
    msg.data.set(tmp_msg_0);
    IMC::PulseDetectionControl tmp_msg_1;
    tmp_msg_1.op = 115U;
    msg.start_actions.push_back(tmp_msg_1);
    IMC::SessionKeepAlive tmp_msg_2;
    tmp_msg_2.sessid = 1996180486U;
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
    msg.setTimeStamp(0.165587253347);
    msg.setSource(26138U);
    msg.setSourceEntity(133U);
    msg.setDestination(38770U);
    msg.setDestinationEntity(238U);
    msg.source_man.assign("GDZWFVIOSMJYICWTSOYQNLFMLSTVFBJGNBZCBDNQGPYABHRFXQYUJCFDHNTXEVEMRGNADMXWODKXAENKJUVMJVMOVUMJAZQJCIIBKRIWFFPLITGTQRFHUMDHZYGGZJOYFBZHSOWEVNZSACZENYDLVLTPAXCHHTWRAOACDELPOSYXPDQUHUCCWRKOIMATUTRUQX");
    msg.dest_man.assign("MOXPHWDOVBFBZXPUWCFJDLJCGQIAUSGQGNERSPGYGKBQFDQHBFYAUXKTGGUHWRKQUMEKTCEISVKBLFMGYARYYZICZTDXMENYMEDTCQLFOALFJUPETMXAQMXXJQNTDLLYHNIDPT");
    msg.conditions.assign("QBOOPRRGVXMTYROXOJMGYCYYMXQCMVAIVMJKWXWJEYLGSNOEKKDWEYRVQQPVDXPCGOZUFJMXBHCTECBJFSSBDBBTHTKHZZVFTSOWZZNZAGOYGACUTUNLKEDWCWFUXNQEPIADIHAQGAQQZFHLPFBZUEEOLHCABSAWRDQJUJNKMIDLQNIXSUUMFNRTWHGE");

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
    msg.setTimeStamp(0.320097315457);
    msg.setSource(4677U);
    msg.setSourceEntity(6U);
    msg.setDestination(42428U);
    msg.setDestinationEntity(11U);
    msg.source_man.assign("THABWKUODVRBJVNJYKNWUSLYSUFYHSLWIFYUTIRDLCOSYXFBEINPCZGRZUPWBQJEKMAXXFPKMLCDOIZGSNWDPEHRINPJRHGRLMKHUZQEFVUTYSGTRSWUFJLBPVEQMZFBI");
    msg.dest_man.assign("UOHJRFMFAGDLSGZDYIKVFKXRVGTOUKKYKECEDWKBBDFQXPTJMDZXIGFJROPCMTXLAELWNPMWECAZSVBYLIHGRBTCLOLTJRAVTOWUNLBKLSJOXNZKRRCQYXEJPCVTCKKAQWEIFAJQAPQNHJSHZEONLVHFNHDOELOUUYPZIFZEMUWDGAYYHDPBIJVFXYGUYQICGIQZWQWVXPUSZMSENJXTPANRUMSMIQVBHBZMQ");
    msg.conditions.assign("GLOKAHNSCYRZROQTUQQIUJXMSYSSPJZWCDFZIMNNTUGKWAHYVQHAEHOEMKDMPJMNBFWRGRXVTDIFVBCZACKGCQGKXWYREJDMCPTXNZPTFYWFPVEWBWCOMBKUGGGSXQHQBDNSOUPMFTEWSMFFNNURDOJRBZJBRBLNVICLYZHBEIAHKAVJLECILGWZALRIKDYUUIBTZAHQVPSI");

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
    msg.setTimeStamp(0.870502274233);
    msg.setSource(46607U);
    msg.setSourceEntity(184U);
    msg.setDestination(45787U);
    msg.setDestinationEntity(241U);
    msg.source_man.assign("SIIOHYYCZMWCSVUCHZPDBAYYKLVBMWQURVFJWKHUUDCJALHRMRSKGDFQPDGXIBPMOUXVOXDNWIBZDKFNIEFLYQETMPNLBKNNMOKJXLMEPRPIIIZIPHEUSZOCUCYWBWQJOLEVXOFXGRXCFIHGFXJAMTMNNOBTJDLNYEWQTTFWGYANGAGCDVRDRJPBHYAQKSYGAJWVRFFRNWQZRCZ");
    msg.dest_man.assign("YUHBMSCOWJKHVVIDZOYUUVDQFAJEKOXEZZIVHISKKRXLQJMVINRZPGPXCDARZRYIJOWAEHXNFPALWTPYENTTGKOCAKJBMSMUUXEOUMTPQCHSOCBCSBMRUXMLQUYBZJUWIPYJPEENFTXKTBACSFWQOGOGMWDHYPHCCKFGSJRDKTGFFQLYVDRFXJZWDYWLNNNAGVZINTGQHWSXGIBOULTRBXEVZQQMVAQASPPZSMFNIIDRD");
    msg.conditions.assign("KJWOONJNHWGKYPYBVDIZ");

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
    msg.setTimeStamp(0.429759833743);
    msg.setSource(62077U);
    msg.setSourceEntity(173U);
    msg.setDestination(50468U);
    msg.setDestinationEntity(21U);
    msg.command = 53U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("IGPLRJVCQJVBJBEGNAYVZGBWBESYMDALFARSINZGRTKZZIXMPQHLKDZESGUBXDFCMYDPKMORITKSN");
    tmp_msg_0.description.assign("HXOZHEOJELOGYKZXBBWKKNPWWBCDNGSMITQMOBXFRRTWWSGNANVLAPQXVLAFGVRAGWBRUVYBXJQEVTDCEGJUDJRUSOCIHXFJONRZDIHGFJWXPWFPAZOXUVLNRXIHCJSUATIDFDSOQCCGISYVMXKTSP");
    tmp_msg_0.vnamespace.assign("EGUXNDRXLCDZYZWQLQZOWDWTEBQCUKUPPHTOMVFHIJALVFJYXGBTAAKMPHZYHIOOAHJUFVJLJMUXNEGAWSVZAKBLZGNGXTWOTSNPDZAQWCRBRXCQNKVBDDOQWDEXDSBBJFKAMSCOQPAXCJPCUJMSGMKHUEYPYJSTSFFYMHTZVEEDVLKNOTKXLRLGEMPYJRYMCOKHHVUGZNWR");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("HZJUYAATANVPUSJDYXRJQRWHPQCCOFBQGUKIXVWMBYYJYAFQDAAPGGSDYLUMNELTRCEMPFORPLGLSKYVVWWAISVAEBFTHIDFBZJFBZDQNDKFIGADPCLCWWOSYTUQTZGOUSNJJCEPEAMPIHSJEQNLFZRKCMOZPRJHWJZKKWUVNTTEOPXXSEXKF");
    tmp_tmp_msg_0_0.value.assign("UKGKKQIAUIFTQOORNCVMLZXUFOXEJJAHZRNSZSONXWZPDXMMPXCYYPDTWOVTLXWFGCBIWECAYZULMDYSWRGKQBNMTGYUBWPRZFZRVGLLQKANYJINJQHSGTP");
    tmp_tmp_msg_0_0.type = 27U;
    tmp_tmp_msg_0_0.access = 195U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("CBXOCCCIUMPRSNOTNTDAJRLWSZPFE");
    IMC::PlanManeuver tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.maneuver_id.assign("ABMWVMAJSRERKJSGWOJYGNYDAZJHEDTEELGYFFDGSVBBDRVUUDLHIALKKIIDJYASGLHMZUOXQZAFQPIHHGWHBPKLLDFABONZLFRCBTNPJOFISAXHCVGWPXZMWVKNMDZLQYDXRKZYCICQPTFWJMTKOCEBZFJBXJCVBPOCNLVWXWCHRYMOBRNYEOGWTRNQETRGFAETMPJUIPISHDQQZKWKGUKTES");
    IMC::Takeoff tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.lat = 0.152938198912;
    tmp_tmp_tmp_msg_0_1_0.lon = 0.11660040163;
    tmp_tmp_tmp_msg_0_1_0.z = 0.244683862032;
    tmp_tmp_tmp_msg_0_1_0.z_units = 245U;
    tmp_tmp_tmp_msg_0_1_0.speed = 0.268464526595;
    tmp_tmp_tmp_msg_0_1_0.speed_units = 103U;
    tmp_tmp_tmp_msg_0_1_0.takeoff_pitch = 0.952586277035;
    tmp_tmp_tmp_msg_0_1_0.custom.assign("JKCVXTEALLUHJKQQVSLAGCYDRUNWVAXWAOSFTMOKMNZGARSKBQFKQSOPPIYKNIZDTJCSYIREWKMFNLEVKIBYIXGNUOYZDCTFMNCHCSIBERZWNVXFZYUJDEOQVLEJVJGTVWUVCOMQSXWIMEJDXORGJJMPALRPCKRZBFXYRDTMPBUPRXNDFWQWATLJHBBBUUQLQSHAPFBXINCTWGIY");
    tmp_tmp_msg_0_1.data.set(tmp_tmp_tmp_msg_0_1_0);
    IMC::TransmissionRequest tmp_tmp_tmp_msg_0_1_1;
    tmp_tmp_tmp_msg_0_1_1.req_id = 54636U;
    tmp_tmp_tmp_msg_0_1_1.comm_mean = 22U;
    tmp_tmp_tmp_msg_0_1_1.destination.assign("YSSCQMVLEQBQTOVUNRZYWLKNSJLXXMZUDUNCHRXAVYYVLNSDXNOAGYHCOAUBRUJYIGWFMUBZVMODOGFEQRIVHTKFTWPOPCPXWSTJ");
    tmp_tmp_tmp_msg_0_1_1.deadline = 0.328278970038;
    tmp_tmp_tmp_msg_0_1_1.data_mode = 158U;
    IMC::FormationParameters tmp_tmp_tmp_tmp_msg_0_1_1_0;
    tmp_tmp_tmp_tmp_msg_0_1_1_0.formation_name.assign("HIUEDEQYFCZKRJDWQIXAAHZBAIJSFHWNFPVPRLAABITQQQFRLCTWUCVMLDJXKCSIGYGPG");
    tmp_tmp_tmp_tmp_msg_0_1_1_0.reference_frame = 4U;
    tmp_tmp_tmp_tmp_msg_0_1_1_0.custom.assign("KUGWBRCLVOOJLYPWAHCVQMTOJQBWQMFXYUQWIXDL");
    tmp_tmp_tmp_msg_0_1_1.msg_data.set(tmp_tmp_tmp_tmp_msg_0_1_1_0);
    tmp_tmp_tmp_msg_0_1_1.txt_data.assign("BJQVQSEOJAVZUVHXJNZPHCDTFNIGI");
    const char tmp_tmp_tmp_tmp_msg_0_1_1_1[] = {11, -118, -2, -26, 93, -103, -85, 11, -8, -119, -50, -127, 59, -114, -93, 71, -101, 49, -47, 118, -35, -19, -97, 74, 116, -107, 100, 9, 80, 50, -36, 120, -123, 13, -26, -64, -35, -77, -27, 122, 88, 55, 29, 114, -91, -53, 62, 33, -64, -89, -34, -65, 0, 30, -114, -121, -23, -50, 105, 29, 93, 29, 85, 43};
    tmp_tmp_tmp_msg_0_1_1.raw_data.assign(tmp_tmp_tmp_tmp_msg_0_1_1_1, tmp_tmp_tmp_tmp_msg_0_1_1_1 + sizeof(tmp_tmp_tmp_tmp_msg_0_1_1_1));
    tmp_tmp_msg_0_1.end_actions.push_back(tmp_tmp_tmp_msg_0_1_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_1);
    IMC::SimulatedState tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.lat = 0.698252004175;
    tmp_tmp_msg_0_2.lon = 0.654589027373;
    tmp_tmp_msg_0_2.height = 0.447216496871;
    tmp_tmp_msg_0_2.x = 0.870468252023;
    tmp_tmp_msg_0_2.y = 0.33059615816;
    tmp_tmp_msg_0_2.z = 0.36436653351;
    tmp_tmp_msg_0_2.phi = 0.567181500129;
    tmp_tmp_msg_0_2.theta = 0.149438919041;
    tmp_tmp_msg_0_2.psi = 0.615367279551;
    tmp_tmp_msg_0_2.u = 0.531147712453;
    tmp_tmp_msg_0_2.v = 0.481128867635;
    tmp_tmp_msg_0_2.w = 0.929575059351;
    tmp_tmp_msg_0_2.p = 0.0667405850751;
    tmp_tmp_msg_0_2.q = 0.216909621258;
    tmp_tmp_msg_0_2.r = 0.348105593734;
    tmp_tmp_msg_0_2.svx = 0.00311578125336;
    tmp_tmp_msg_0_2.svy = 0.362028793248;
    tmp_tmp_msg_0_2.svz = 0.78575732362;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_2);
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
    msg.setTimeStamp(0.838679890927);
    msg.setSource(1552U);
    msg.setSourceEntity(234U);
    msg.setDestination(44293U);
    msg.setDestinationEntity(217U);
    msg.command = 171U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("LZVJFMKSUMBTBTTDTYQDIRLXTUESENRILCXNAHFWVACEYGZMDGODQPINMBJXGZYSZNAWICPPGAOFUSCYNDHXPWBZSYAUMKOHNJKADQAQKEFJYFALFFOUGPYBEDBYNVIURLLVXXORLRJSEJXZQ");
    tmp_msg_0.description.assign("WRCUVTQOYXVVGNVLCD");
    tmp_msg_0.vnamespace.assign("DXJZBYNZKISRJDBWFLTVETMCEDLWLFMHWYAIXVMPO");
    tmp_msg_0.start_man_id.assign("CLMSJUQIYNZSHDHUGMCMODGAAFPOMOKUGNSVDRQQZXKNUCRPFHTHRWEACZJDXABIAQPWTYEBKVLPXYTWJBDUKIDSXGHFZOQKROFUGFPJYVHKAZFOALMVIYUDXVFEVBESSTPZWAIQXFKCZSZLBEZGLPMCJYFJJBGWGHXWAAWEVFLBPRCPTQQUXYNUMRDQHVSSRCBITGVDSCOPKLLMICTIMORENJLWYYE");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("CPYDSYCYHJYSVWQNIRCZHMFGWHZMMJDXRQUZIRHRHIGLDCKZMYWOMETUYVBUXPROBOGFALXLXTGGUYPNTUGYINWJVOHBAFGCVRBKSJAGNKNJHGLBWPOJVCLSBTHLOTWPCDLFXXNKIWOPELQSOQPBFPNUHRJEBFUQYDQFEXKQIZMSEQHRSZWDUMMFOXRCUILAAQJWNAEOINYVXBQKFMUFTTDBXEDDDR");
    IMC::CoverArea tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.71544392561;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.984389380431;
    tmp_tmp_tmp_msg_0_0_0.z = 0.92952035289;
    tmp_tmp_tmp_msg_0_0_0.z_units = 192U;
    tmp_tmp_tmp_msg_0_0_0.speed = 0.400836611798;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 132U;
    tmp_tmp_tmp_msg_0_0_0.custom.assign("NEJPAWKSZVMPZGIOPJRTSFQGGTKALYEVNEYWITRLZRYTOOGCLTVAZDKCJNVFVJYKWBICQBRORUXLUKDYBNBHLJNVUBEHIHMMSPCYBXMWFHGFXYICBNTSPQJEFRNYPQAIBGOSHOFSBMFEZFVEGUFQSDVMLLHD");
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    IMC::LogBookControl tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.command = 244U;
    tmp_tmp_tmp_msg_0_0_1.htime = 0.864392411317;
    IMC::LogBookEntry tmp_tmp_tmp_tmp_msg_0_0_1_0;
    tmp_tmp_tmp_tmp_msg_0_0_1_0.type = 242U;
    tmp_tmp_tmp_tmp_msg_0_0_1_0.htime = 0.381936465142;
    tmp_tmp_tmp_tmp_msg_0_0_1_0.context.assign("HALGERRGXWKCLABXPDHKCQSNJKMYDIUXAOVQIPMPQFXMNFYBRWHVRFCMVSNKOJMPKZIIAXLUDLIBPCPTDHWQQWIAUUKGOPZMTDBDZXOUEVXTRNIGQLDBYFVPIZLNCTKVQGZJSNTWWJSNWBSEJESAHYXGNPSYJJNCOTRRCQNRKLOPGTUYFVYJZCEMRZFJAMDYOUHUBTVVMLDSHKG");
    tmp_tmp_tmp_tmp_msg_0_0_1_0.text.assign("HBJCMXUKYIPHMJYCCZRVBSWRVRCGSQDUFOPTPVUMSMTLMKQOAFUYQLZFJZECEZBFAQPGURVZRHWWQMQHSKBZPXDXEVIIYJNESZFOLKJPAIETKPSCSRANVOSWQDACRYHKRKNGZILFNTPJHVGTAHMWYWRYWBVUEMLCONJIFMVQSFEGEDJUXYETLXTUQOUONOXXYAPZXDLNDKGERFDUADNQ");
    tmp_tmp_tmp_msg_0_0_1.msg.push_back(tmp_tmp_tmp_tmp_msg_0_0_1_0);
    tmp_tmp_msg_0_0.start_actions.push_back(tmp_tmp_tmp_msg_0_0_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.00795945981879);
    msg.setSource(45478U);
    msg.setSourceEntity(53U);
    msg.setDestination(26029U);
    msg.setDestinationEntity(184U);
    msg.command = 192U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("ACYZWRCDAZBGDCPVJEGUIE");
    tmp_msg_0.description.assign("BILZEJWXRIQVFVODGNXZGNEMXMOHWOHTXICNPAFQKHKGVFDCJKHMWPOYNQYLUOBSUYUAEBPXJUZMCELWRUWKWTZPZIBGSYSFESGDNICYQB");
    tmp_msg_0.vnamespace.assign("CPMODOFRWAVURJMGQVZFAZNUYWJMIQBOMOXAE");
    tmp_msg_0.start_man_id.assign("HVYEHNTHKFOFFMXZMAKABSOEGRCVAQJJASPLIJYYDBRYLHZTIZSLQMOVVMXRLJRDLNXFWMQJOCDPKKLPZRYAROWUCRLTWRSJVLRFMLGFZZWDGUCYBGBIQXEOUONTNPVCBECBWMKYUOJGZJIHTJHITOJLTNCGSUWCXAHVPZIAHQFIWFYGYVDW");
    IMC::Pressure tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.292978507263;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.145984340635);
    msg.setSource(11154U);
    msg.setSourceEntity(25U);
    msg.setDestination(64783U);
    msg.setDestinationEntity(24U);
    msg.state = 143U;
    msg.plan_id.assign("CNRBHMFOXWLEDTCFAXXIDYCHGAERHEDKNIPBWYGFEODZUETYCHCNAOKLWFXAPMGVEZJBFZLFYKOEIJXTSSHZHCKVPJXAYFKDNYXMGTRBAJSVSDCQQUUHTFXWXWTJLWKQORYQAROSKTMBUANUGISILPRPRWSPBOHDOAWRQVTVXRDPBSCHOLQVDGMUVSQZEBNZZP");
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
    msg.setTimeStamp(0.189106409236);
    msg.setSource(35854U);
    msg.setSourceEntity(58U);
    msg.setDestination(42716U);
    msg.setDestinationEntity(36U);
    msg.state = 191U;
    msg.plan_id.assign("ZBIAJLVNPLJKHYFDBIHXSWJZXWQMEBBCNGRWYJMNNPTIRLQEGWJOKMFWSVOBOCQYQVCPUDLNJOOQAMUUMEXGAMGXLMWLLYEEBQRGOOKLSVAVSDYEFHIDJXTZJBDTYIMHCVDGTQTIZDKQGVAKSHXLPVEUTFFTAZUCHTVCKDICRYRYFMFSNDECHFCQXHXHFKZIONNFOIPPOJEKBARULPZPASZKWBJSUCYAGTSHKGPNXVUAYSZUTWNRBDMZWEP");
    msg.comm_level = 193U;

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
    msg.setTimeStamp(0.124335068426);
    msg.setSource(24262U);
    msg.setSourceEntity(48U);
    msg.setDestination(9085U);
    msg.setDestinationEntity(148U);
    msg.state = 27U;
    msg.plan_id.assign("NNETFQTKFDTGZYVFCQMFCJGNKLDYSDVYOUWYPTCNSPAEZLUQMJUFYXDPFUTIWOEMYQUHDOKCSPMZTCXFGBHEWRO");
    msg.comm_level = 1U;

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
    msg.setTimeStamp(0.782891136919);
    msg.setSource(7983U);
    msg.setSourceEntity(95U);
    msg.setDestination(20949U);
    msg.setDestinationEntity(169U);
    msg.type = 130U;
    msg.op = 127U;
    msg.request_id = 32038U;
    msg.plan_id.assign("RHHODKYZOVBHOBPWIWHEMFRUDZLXRQESVHEGFFCAZYXAEAJBOVDXQEWLFWJCWTTCILEKUTKXDMDXERADLNBZSEYRCJQCNZCCJMHBUIQNTMRFPDLTBMQPLVPGGTHUUKKBVMBAWJHTUJVNQSSVLX");
    IMC::Rpm tmp_msg_0;
    tmp_msg_0.value = 2372;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("MBTSVYLTUZLMWECZQIQPYPJKBDDKFUGJWAUNUPKWNUKOJPHBXQHIAMJSEVVTBNYQMUOVCKPEFOFFSSLQGBDRZKRNIQTCAFSOVDILLJCDWM");

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
    msg.setTimeStamp(0.509186486831);
    msg.setSource(40760U);
    msg.setSourceEntity(55U);
    msg.setDestination(64249U);
    msg.setDestinationEntity(197U);
    msg.type = 52U;
    msg.op = 76U;
    msg.request_id = 51094U;
    msg.plan_id.assign("GYFFGXDANDWUQVGBFJRXPDCEBBVOFGYUVRCHLNZNMETIEGPROXZTEHEJDEUMUOLAMSFGQOSOEPZWTMBUSXPMVNDALUIVAJTJNLJMEETRPKKLWXDFKDPGLKYTZIMNRHYABKWZSSDHXDRGUZZSQCFQIQUBKRCTCAHPIKNU");
    IMC::IridiumMsgRx tmp_msg_0;
    tmp_msg_0.origin.assign("YLIJRMCYKUXCWJWMEYXKYYIBZLOEAZKUBNQXTWLZXIWICR");
    tmp_msg_0.htime = 0.326535525817;
    tmp_msg_0.lat = 0.37782694122;
    tmp_msg_0.lon = 0.399719291213;
    const char tmp_tmp_msg_0_0[] = {107, 71, 103, -79, -99, 41, -115, 45, 6, 94, -14, -92, -14, 112, -94, -11, -14, 16, -84, -126, 108, 60, -86, -46, -67, -78, 31, -7, 97, -68, -93, -112, -12, 10, 65, 9, -80, 22, 118, 106, 85, 50, 60, -68, 76, -25, 109, 9, -25, 102, -102, -83, -21, -58, -107, 49, -90, 106, 16, -97, -101, 35, -127, -42, 47, -8, -119, -21, -92, 120, 32, -110, 10, 67, 86};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
    msg.arg.set(tmp_msg_0);
    msg.info.assign("ZSVVUNLVEQRPSSUYJGEXFXHTKSWRMHIHCBMVKCRBYYFANKKLTONGSJJZRWNQPMRMODLDPZRKSVQEUZQYDAKD");

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
    msg.setTimeStamp(0.363964494874);
    msg.setSource(43709U);
    msg.setSourceEntity(21U);
    msg.setDestination(18660U);
    msg.setDestinationEntity(193U);
    msg.type = 101U;
    msg.op = 25U;
    msg.request_id = 26360U;
    msg.plan_id.assign("YDSRRZAEHNNIYGHVUAKAPTDKWDWVQQZYNUSWDRMIFJJKCWBMHBSHEERCSVOF");
    IMC::ParametersXml tmp_msg_0;
    tmp_msg_0.locale.assign("QGUXEDTQAKXVLQPKBIRMHOZQRUNTDCXWCPLSRJDEICOAOONQZKPNBEDZJTMNWBJOWCYNPUZREMAMHGRNHRWQAGVHIKHMLPCLYMSXEFMIIXNBVHRZTVUFWFBHQVWMVAFPNITZFFFJGXKISWYKUDVOEIBWNQUOSTHFQMXYGVBAZZQTTSKSTCJAMCJXEAAKLFNKLVOCXRFYVDSDSCYGWZJ");
    const char tmp_tmp_msg_0_0[] = {-24, -74, -77, 56, 19, -98, -52, -124, -90, 35, 86, 42, 25, -73, -97, -42, 90, -51, 20, 6, 41, 108, 28, -85, 24, 56, 79, 100, 112, -8, -94, -72, -24, 99, 37, 96, -74, -3, 95, -51, -23, 114, -51, 112, -66, 91, 25, 66, -85, -97, -97, 10, 115, -89, -24, -64, -75, 112, -27, -96, 92, 51, 31, -15, -107, 119, -111, -16, -66, 105, 117, -49, -61, -103, 115, 18, -68, 58, 7, 49, 62, 64, -38, 58, -86, -55, 24, -17, -42, -106, 92, -9, 21, 38, -107, 51, 85, 59, 97, 119, -11, 14, 5, -104, -87, -65, -79, -55, -23, -46, 44, -78, 40, -97, 125, 70, -36, -123, 21, -54, 78, -63, 93, 95, 69, -51, -127, -57, -39, 72, 21, 73, -20, 110, -68, 104, 10, 101, -21, 8, 72, 74, 1, -48, 46, -44, 24, -119, -94, 116, -50, 40, -88, -84, 55, -27, -116, 124, 104, -83};
    tmp_msg_0.config.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
    msg.arg.set(tmp_msg_0);
    msg.info.assign("MFGLDLNVKZFASQMAJNBVD");

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
    msg.setTimeStamp(0.691425417462);
    msg.setSource(47611U);
    msg.setSourceEntity(113U);
    msg.setDestination(20356U);
    msg.setDestinationEntity(104U);
    msg.plan_count = 50936U;
    msg.plan_size = 1530594477U;
    msg.change_time = 0.227395895896;
    msg.change_sid = 49627U;
    msg.change_sname.assign("OHAACCJIDZQVGIZGPA");
    const char tmp_msg_0[] = {-50, -106, 75, -109, 106, -69, 33, -78, -38, 101, -20, -7, 30, 67, -80, -1, -85, 4, -52, -6, 21, 0, 66, 51, -61, 70, 110, -97, 42, 109, 114, 67, -78, 41, 66, 84, -34, -90};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("LEVDRHEFWWCVBHPQVZOHYRALMBHXSBJKATPCPAARWDWOGQBNRBJIGVONRDYZMMUOYFJZFCWZGIYQTTNSGTUYMGPLIEYRCLPMETFLJVFZRFKMLFKJATNYQPBDZAQOKPEEISSSIHOZSMIBUHTXOWIIDVZWWQJCUUITMPOSXRQCZEASGJCOBLKMUXKNBXNYCNAQ");
    tmp_msg_1.plan_size = 41168U;
    tmp_msg_1.change_time = 0.234513688905;
    tmp_msg_1.change_sid = 36600U;
    tmp_msg_1.change_sname.assign("GPJKASADVJFVICQIKCEYZSECQHJOELCHSOVDOLDJFQMAGHWRDXNQMESUYTTYFZMKPCLVHWSLYCQTAYREMNNVFKKEQKOJVXYZUQIRAXBTVTZHGJXRUSRJGLBRDAFIQTPIPZGOENFCOLURILSTWCIHSJYVTBBIMBBDZOZMFFZJZWPFDUYWNSFWKKEKWPZVTNGWGXBAHDQRQYWHTMEROABIVXNBARPN");
    const char tmp_tmp_msg_1_0[] = {83, -110, -39, 50, -120, -25, -30, -76, -104, 78, -17, 27, 108, -99, 85, -52, 64, 65, -49, -59, -127, 79, 51, -120, -125, 34, 37, 51, 29, -98, 25, -103, 126, 2, 6, 27, 10, 56, 97, 114, 5, 92, -108, 123, -53, -89, 19, 108, 26, -112, -44, -27, 14, -32, -39, 42, 102, 0, -83, -73, -73, 91, -23, -54, -60, -128, -52, -121, -68, 84, 47, 80, -31, 103, 71, -107, 125, -78, -40, 74, -101, -50, -13, -68, 109, 54, 21, 53, 34, -86, 8, 100, 51, -95, 54, 83, -87, -120, 16, -24, -96, -34};
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
    msg.setTimeStamp(0.336043669603);
    msg.setSource(39199U);
    msg.setSourceEntity(34U);
    msg.setDestination(34545U);
    msg.setDestinationEntity(227U);
    msg.plan_count = 27692U;
    msg.plan_size = 616849839U;
    msg.change_time = 0.130625412741;
    msg.change_sid = 16275U;
    msg.change_sname.assign("NQGCGBJJCBJPGABBIKDLOTFDIGZYTLQXNCKJYWRIDRHWRFHVPOTQUHNSWQIMMSVXYOJFDCMGAXTDQJLSYOXZOFXQAEXSCOTMCXAYFVKZEYYIWSVYFILCAPJHUANHIEKMQWOYCZZPFGNKYHZDLTTNPMBDLUQNIFFVVPVTEVAVBRSGROTLXKGQOZWUWZUBNMTHMHPBRSJWPESMAEELWDKPNUREKLUOAKVKDCNBWUC");
    const char tmp_msg_0[] = {-60, -126, -2, -126, -1, -113, -72, 96, 55, -35, -40, 58, -38, 34, -66, -103, -123, -125, -48, -106, -32, -31, -14, -126, 72, -55, 49, 112, 77, 85, -7, -49, -4, -41, -95, 74, 53, -101, 96, -79, -31, 53, -102, -41, -84, -4, 103, -65, -87, -126, -37, -119, 109, 71, -125, 91, 91, 39, 65, 61, -76, 120, 52, -106, -88, -29, 3, -98, -51, 18, 0, 112, -124, 29, 44, -88, 65, 126, 35, 98, -114, 31, 4, -46, 87, 73, -92, -89, 117, -99, -66, -7, 12, 71, 21, -54, -66, 45, -109, -104, 11, -53, -68, 99, -57, 86, 84, 100, -47};
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
    msg.setTimeStamp(0.617536730465);
    msg.setSource(13163U);
    msg.setSourceEntity(236U);
    msg.setDestination(50393U);
    msg.setDestinationEntity(129U);
    msg.plan_count = 24696U;
    msg.plan_size = 3842172809U;
    msg.change_time = 0.335561458101;
    msg.change_sid = 7268U;
    msg.change_sname.assign("RFYRVVOVIEQKCPUIGIYKGCZFPCAXFWQGUAKHUKXBDZWHMUPXKBHSTBRYHDMXOLZLYOIPHJMBDDEJGKEUKYYDYNTDWBHFBPDSCIEPGTYPANAXQJLJQZQEVVIAUQPMOSUPRXAQSEEBLWIXNYBQXTNJZSCOHWVNLVCQEJVKQASMTDEKMXTRSZLANROPIJNRFSWTZMMGCHVRWHTOIFLHGEMKGCFGUWDOWLWJJCMRFRTLYAA");
    const char tmp_msg_0[] = {2, -30, -21, -116, 78, -120, 7, 37, 9, -113, 3, 69, 11, -100, -13, -56, 6, 75, -23, -53, -112, 40, 44, -122, 87, 71, -67, -54, -118, 100, 42, 112, 58, -119, 6, 9, -108, 57, -109, 114, 116, 108, -87, 91};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("OWTJLUFIVIMKPHCBDLXPMOKMDYWFBNTDE");
    tmp_msg_1.plan_size = 55941U;
    tmp_msg_1.change_time = 0.173507259823;
    tmp_msg_1.change_sid = 25974U;
    tmp_msg_1.change_sname.assign("JIBGMLCFFGEXTVAVBHYVOESWKLONMYICGHXSDFLWCKEGTJKUPDDKYRVKUNYOXJMAQICIXBCEBIARHRRVZQQNFEZRJTUNUADIIVUOOQTJUOPDHOSMPPFZPBMWRYCWKZSYSHWIJSDGFFYZ");
    const char tmp_tmp_msg_1_0[] = {-107, 3, 44, 53, 110, 121, -92, -116, -67, -88, -110, 56, 90, 14, 90, -75, 26, 96, -128, -2, 29, -101, -58, -86, -4, 45, 120, 97, -112, -70, -105, -20, -27, -20, 76, 10, -89, -8, 25, 11, 87, -66, 121, -29};
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
    msg.setTimeStamp(0.934339096878);
    msg.setSource(16329U);
    msg.setSourceEntity(202U);
    msg.setDestination(52285U);
    msg.setDestinationEntity(114U);
    msg.plan_id.assign("FBIVTZTLCUUBTCWUBTFUPEBEYMDZFWYXNLPKJIZPGIDNSNEDAUCWQXXIJOMRNKRHLRGLJOZEYUIJIIVLXQFNTVIDLUSAOMEAP");
    msg.plan_size = 64013U;
    msg.change_time = 0.302850865777;
    msg.change_sid = 50260U;
    msg.change_sname.assign("QKFMTEPWUANHJRWBGNOBRSFZXQLVVYKCFUJMUVRLOYIANHOQAABFQEJJMZZDKKZNVGNHHAFZRWPHNXUJCEIWGIVSLKZ");
    const char tmp_msg_0[] = {-123, -95, 7, 7, -49, 31, -71, -12, -120, -57, 121, 14, 68, 48, 5, -115, -41, -32, 47, 73, 51, 20, -25, -113, -24, -95, -95, -15, -39, -28, 1, -123, 33, 39, 26, 63, -40, 22, -40, -67, 95, 23, -64, -55, 29, 50, 54, 119, -2, -57, -74, 56, -30, -109, 123, -8, -26, 50, 52, 20, -110, 59, 23, -89, 51, -120, 59, -63, -24, -118, 103, -94, -71, 31, 100, -110, -32, 78, 51, 36, 4, 28, -80, -46, -59, 47, -23, -127, 17, -10, -23, 97, 126, 126, -79, -32, 10, 118, -86, -123, -116, 50, 75, -46, 34, -12, -46, -42, -27, 68, -28, 28, 68, -51, 89, -50, 8, 33, 122, -37, 79, 71, 57, 56, -31, -42, -47, -93, -35, -29, -5, 107, -15, 23, 10, -64, 55, 45, 31, -102, -80, 81, -78, 101, -9, 67, -26, -2, -125, 36, 10, 20, -26, -5, -43, -19, 91, 118, -35, -35, -38, -90, -113, -79, -56, 51, 82, 110, 109, -90, 74, -17, 65, -8, -11, 98, -23, -18, -3, 21, 59, 119, 114, 87, 121, 37, 15, 112, 114, -96, -87, 110, -120, 54, -96, 121, 40, 78, -104, 96, -79, -80, -32, -82, 114, 101, 113, 96, -33, 67, 73, -128, 100, 117, -102, -49, -114, -33, 96, 7, -63, 87, -100, -108, 110, -118, 28, -104};
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
    msg.setTimeStamp(0.132353530797);
    msg.setSource(6202U);
    msg.setSourceEntity(125U);
    msg.setDestination(55812U);
    msg.setDestinationEntity(91U);
    msg.plan_id.assign("AVVWQJGHVNZPSGIIEMIDTOCFNZEXPVZMYHALXJJWXVIKTDIYUTEPGKCITKIHXJSPRXYVMCWPTQDBASHOGHSBPGNIQEBFTOUHDCXOUAGOFQMLZFMUPNHXSCFKNWPMBZIHUDDHASECVGSORLJEMECLBDLWNEZOVRROKGFTRLFFBRXNWRYLYNQWPUEJKMSTRUCBYLANMTOUCZAHK");
    msg.plan_size = 27094U;
    msg.change_time = 0.615711202755;
    msg.change_sid = 29858U;
    msg.change_sname.assign("PRVJUWIDCLMYHXBFPKISXLOFQPZLOMJETWFEBWQIBHKGUSRJDZCRNIMHNVRZCTZEMCNPBJDASOQXJUDCLCSOMYUUHIAUMQESATNUDOVGRJNQPXXAVCTTIAKGGYPQHUSJMARIBYTVWRLIENRMGSPBKESZBZZDJKOCQWO");
    const char tmp_msg_0[] = {65, 1, 115, 13, -23, -25, 96, 105, 50, -3, 90, 36, -14, -65, -13, 116, -32, -93, -37, 109, 22, -60, -31, -113};
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
    msg.setTimeStamp(0.31548399985);
    msg.setSource(51593U);
    msg.setSourceEntity(10U);
    msg.setDestination(60395U);
    msg.setDestinationEntity(58U);
    msg.plan_id.assign("OIYZEWBIVNQITKKNVHTZWIRTYMKWUKUVERVVHWTRPVWSGTQZPDXXMMRQASLRTENMSYYRNLXIYTGLOPWIHPCXVKOFUUFFNHDZHQJGMTYIGZOBCXAUENHXOJAZQURRUYOHCAUOQVTQYDJBOTDYPWZXDWEMEEFKMSSBLEZWCBFDAYSLBDWKZRXFPJNGFASKJGSEBMFPEQXNCVDABSGCLHASLPUCCXFOAILACIRJGPCLJLJIOZKQJ");
    msg.plan_size = 58396U;
    msg.change_time = 0.76904795214;
    msg.change_sid = 1193U;
    msg.change_sname.assign("JFXGNLVSKQBNMMHCQWZUBFAPDGGMZJAXSAOAKPMLPCVKZBADDOZWEESZAOIULVJUCBAEDMNJUPJSRMCVVWZGBBDWJUKEKRNBGKNPIWLCY");
    const char tmp_msg_0[] = {-101, 48, 58, -122, 106, -95, -1, -8, -41, -77, -117, -103, -119, -24, -4, -29, -11, 53, 3, 77, -39, -101, 29, -37, -58, 61, 114, 78, 27, -98, 113, -18, -60, 51, -87, -60, -54, -51, 124, -109, -56, 53, 41, 7, -21, 25, -92, 52, 35, -73, -94, 70, -94, 11, -41, -22, 60, 121, -26, -64, -6, -122, 6, -107, -88, -66, 31, -107, 76, 106, -38, 12, 50, 71, 113, -90, -108, -120, 98, 47, -78, 33, 51, 59, -66, -34, 44, -91, -81, 53, 54, -1, -57, -24, -15, 123, 118, 105, -41, -33, -63, 62, 85, -69, -11, 64, 56, -16, -96, -11, 115, -100, 122, 74, 85, 117, 74, 12, 91, 30, 74, 91, 35, 68, 86, 82, -98, -8, -14, -92, 92, -33, -30, -97, 25, 111, -75, -106, 123, -120, 93, -127, -121, -27, -120, -87, -8, 61, 80, 24, -32, -89, -55, -78, -35, -120, -62, 16, 87, -38, 51, -48, -78, -102, 73, -89, -127, 84, 28, 65, 87, -28, -21, -97, -37, 22, -122, -2, 41, -37, -86, -104, -81, -30, 83, -4, -20, -41, -98, 49, 23, -31, 122, -127, 53, -103, -79, -45, 81, 113, -98, 32, -1, -5, 51, 96, 118, 81, -24, -71, -127, -62, 86, -88, 34, 77, 46, 93, -39, 82, 61, -88, 23, 87, -45};
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
    msg.setTimeStamp(0.359939193213);
    msg.setSource(16958U);
    msg.setSourceEntity(224U);
    msg.setDestination(47962U);
    msg.setDestinationEntity(95U);
    msg.type = 4U;
    msg.op = 178U;
    msg.request_id = 64285U;
    msg.plan_id.assign("IJUPAZPGYTYXYLZEZTIWSSCBRAPKDYHYSETGLJQLZZNYOXNKIBKQEGKZJEWEFSIDXATLPSXWIBEJLBRLSPVAVHMFJWIXQUOZJORLMTVODUDAJQXKDLFEMNDSQDPNCWUDMHOHDXAJYKPINNMELZVBRZHRHWRVGHWGMOTBUCUNTFGBHQMFGCJQKHCFLJVCMRYDTSKNRCSGTVCOAGRVTUUGFKOBI");
    msg.flags = 62820U;
    IMC::NeptusBlob tmp_msg_0;
    tmp_msg_0.content_type.assign("VLNIJAUVMBUMKGEXBHFWNEACZASVJHWUOMLTRNOIZDVTKWNKZVMGSZGODYSPJGROQKHIQDYCZQCBAVIRNJFHFRYPIQIOWDQBWOLPLXRNSGDHDXXMDSIUUBROEXVMTALRJHNCYSXWKEWRUXYMVTPAAQXQNECGNEFRBPZEKPZZFQHGJYCEOPLKGAQHBTBBETDYXCSDMJTLPZVUFFLCMNFKOUSBHHCYGGLWATLTSF");
    const char tmp_tmp_msg_0_0[] = {79, 18, -86, -58, -47, 82, 96, -39, -49, -91, 118, 116, -15, -75, 51, 103, 3, -96, -19, 110, -79, 90, -127, 11, -69, -117, -104, -36, 47, -37, 16, -88, 73, -48, 26, 27, 27, -84, 71, 67, -12, -108, -81, -122, 91, -36, 104, -112, -49, -25, -57, 26};
    tmp_msg_0.content.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
    msg.arg.set(tmp_msg_0);
    msg.info.assign("ALXLSEOVSOQVEVGGFEBFYNNNQDNJWDCOFOXRFTMRGLBKSPFLYFAYSAEEZLJNFVVYFTRAIMVIRZOMPAXKPEQDIVZIMBIMEWWJJQRLVQWHQKDWLSABASDEDYPYXUFSVKUKAKKKKWYRMSYHLURNWIPECXCIOTBWUNEZJFXCTTLJACYGAZTPBMIQHJMXXT");

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
    msg.setTimeStamp(0.24916253703);
    msg.setSource(19350U);
    msg.setSourceEntity(43U);
    msg.setDestination(5148U);
    msg.setDestinationEntity(193U);
    msg.type = 85U;
    msg.op = 41U;
    msg.request_id = 38968U;
    msg.plan_id.assign("BOGEEOAJMIJVUVGRTAEXJQLIZTYMGRIBXSCNULKESONDSAJAIMGCFABUCDFFTRTXFBNSUDFPZEQZCBUXSDERFDCYVIFBLPZJKZRZOMHPPGCVBNNLTHRHTIYRJJIKXWVDCYAQPQWWCCUXOYOKDNAIPVGAIQYSHH");
    msg.flags = 65140U;
    IMC::FormCtrlParam tmp_msg_0;
    tmp_msg_0.action = 104U;
    tmp_msg_0.longain = 0.866160480612;
    tmp_msg_0.latgain = 0.36590549776;
    tmp_msg_0.bondthick = 712714218U;
    tmp_msg_0.leadgain = 0.831911094952;
    tmp_msg_0.deconflgain = 0.00503427268316;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("ICIXCEHGXADPMDLVNJIDUVBJDXFIOVGKBQPTBRXHNFTRDGLLREAWTVAGWUXLBRAZJYHWJZSYFYKCZETOUNWZMPUAOBGFLMHHWCTJOBVMJQQPOEBAFKRERWBITQGD");

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
    msg.setTimeStamp(0.422184287018);
    msg.setSource(8993U);
    msg.setSourceEntity(102U);
    msg.setDestination(47763U);
    msg.setDestinationEntity(158U);
    msg.type = 158U;
    msg.op = 222U;
    msg.request_id = 52843U;
    msg.plan_id.assign("KQSEOIVDUIHMWCBQAFKKGSWFFXMWPZJXPXJYDZTWSNOQHGBYADLXQFAZORJCGTFWEERNDHXMGLEFRRVLOOTXQXLJSDETCUIAUNLVNDTKZCMESCDBKZPCXJPPRFSILUFNNZVLIUTAICAMWQAGGMQWWWABQRRCAECUPLVVKLTC");
    msg.flags = 36835U;
    IMC::PathControlState tmp_msg_0;
    tmp_msg_0.path_ref = 3375510183U;
    tmp_msg_0.start_lat = 0.893659305799;
    tmp_msg_0.start_lon = 0.936333770306;
    tmp_msg_0.start_z = 0.924933080749;
    tmp_msg_0.start_z_units = 2U;
    tmp_msg_0.end_lat = 0.965739915981;
    tmp_msg_0.end_lon = 0.0603682110223;
    tmp_msg_0.end_z = 0.855019377447;
    tmp_msg_0.end_z_units = 81U;
    tmp_msg_0.lradius = 0.520715223582;
    tmp_msg_0.flags = 63U;
    tmp_msg_0.x = 0.33532043449;
    tmp_msg_0.y = 0.042377523;
    tmp_msg_0.z = 0.538835564457;
    tmp_msg_0.vx = 0.292563087371;
    tmp_msg_0.vy = 0.190402700138;
    tmp_msg_0.vz = 0.400801576844;
    tmp_msg_0.course_error = 0.0678388191741;
    tmp_msg_0.eta = 20195U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("RFQUTPLJRFRPRVMCMGCNYEFZBUOXVBJGPCVVNCFPICXNAWHTBKPUGDWZPJZTLCQFKUAYOQJMABFLROYMNTEDTYZDLZRNKAIUVUYSJAYPGDIBWCWRIBSTZPVJ");

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
    msg.setTimeStamp(0.283478753943);
    msg.setSource(43694U);
    msg.setSourceEntity(115U);
    msg.setDestination(42150U);
    msg.setDestinationEntity(136U);
    msg.state = 11U;
    msg.plan_id.assign("GNFEXPSVGHRLNAAPCCMEJTMCGRZSERVYKTKODWUFOZIMBEETTEQHLAVVOCWKNWBKFSVZHYXXVRJKYHRNZBQLCNOMLJAJFUGAIEVKFLHUTMMHZPDGXDYDAIBIWIGTOUDRSDUPHNTLAPBYQCHGRZLZHQBXFXFODRUSIBPSCWCCNKSXEWWXYKLJZO");
    msg.plan_eta = -544961791;
    msg.plan_progress = 0.8632601143;
    msg.man_id.assign("SGOAEFTGFBE");
    msg.man_type = 57686U;
    msg.man_eta = 1638437301;
    msg.last_outcome = 87U;

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
    msg.setTimeStamp(0.115465079884);
    msg.setSource(768U);
    msg.setSourceEntity(119U);
    msg.setDestination(50149U);
    msg.setDestinationEntity(35U);
    msg.state = 45U;
    msg.plan_id.assign("JFWIHFQVLRQMHRFMKWEEHKNJZETTHZDLFLXCDWCRXELLOWIVRSXMYRASGNWWUTQJCNAPVZUBAMKXNGNJQHQOCMDEAIXMSHAVPJTYBKDLDVOBMOJTUNDCXJBKCDZAVFRXYWWZXSZVHIHXBNI");
    msg.plan_eta = 744968002;
    msg.plan_progress = 0.186851265154;
    msg.man_id.assign("EQKRJLOPCDVTZPDRMRFJXIIDAEYBKLHAKHVNJJVGLCGQMMAEYNGMFKOEYSBIQZSUVXXUAEWYXPVSCDYDMUJWXGAZXDXZDFNJGSTRRLWAQKRYRKCEGCIBJWVHTMPFNOTBIWHZTFQCGABWZVRNIUIPJOLBEDJTBSQQELUSXXMGCQEIFWLHAIHGWNTVNCSHMZTUTLH");
    msg.man_type = 61327U;
    msg.man_eta = 56065695;
    msg.last_outcome = 117U;

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
    msg.setTimeStamp(0.81321441321);
    msg.setSource(2081U);
    msg.setSourceEntity(48U);
    msg.setDestination(52262U);
    msg.setDestinationEntity(77U);
    msg.state = 84U;
    msg.plan_id.assign("HHCBVTVRDATNGIDIBMFKDCQWZQMCOEIOYZBFGDUT");
    msg.plan_eta = -1148467447;
    msg.plan_progress = 0.113190578246;
    msg.man_id.assign("QFUHTUDKNENPELOCWZESKLOKXEJAJXNNHEWHXQGMSZCKGOGQUCYVUUZHRQZUNYXLIWOTXHRPLFBMXDDFBUKVNLDKRJZBZAIHIBTBYVPAAEUIDIWDVQBGJIOATJMAMGYEBVOPKCOIQDXSMXGIOMRFAQLCYJRITKACBTIBFRFSYRHCZLGWTLVSPR");
    msg.man_type = 61233U;
    msg.man_eta = -292003216;
    msg.last_outcome = 101U;

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
    msg.setTimeStamp(0.918489021618);
    msg.setSource(20975U);
    msg.setSourceEntity(62U);
    msg.setDestination(50167U);
    msg.setDestinationEntity(250U);
    msg.name.assign("FXMZEDCKGLYAEQGGEJXRKIZIMPAWKGFQKNAVITTGLRSEDNOXHXJSBPAREGIGIIUIMDKFSVZELBQJHJUKROQOYKDDFXQPMLZTYECVKYUBMYNWCVZUTOIYAJOXLDNAEDRFBCBLNJZRDBWFCWXHLW");
    msg.value.assign("PWRSJTMLIUNHZAEEIRUQJTGLTRYGCOBSBCYBIVUBCVUHXDDNEHEBKYGBDVXKLMEKQ");
    msg.type = 48U;
    msg.access = 23U;

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
    msg.setTimeStamp(0.105748834021);
    msg.setSource(12790U);
    msg.setSourceEntity(126U);
    msg.setDestination(27229U);
    msg.setDestinationEntity(202U);
    msg.name.assign("XJCKLQROHLXRLKOBWYIQPNKUUZNQSGHPACOVDXSABQWIVFREVMMLGKCLYYWLNQIMHWOYTQXJBERLSYPZTOMIZADSGHYTGBGNGXXTDVTCOODASKFRVUSIZCDAMUVBXTEPWBTAJHSGJOPDLAFWFFAIHYZZDVESXCFPCJZMVIZZRWRELUADQEFURBNHICMUJSBJKYWNACUEPCHWDKBTMIKGPHGHXBFXL");
    msg.value.assign("UXQSAYHQFFQXVYNQZMATEGDVHXDPMSTRDRONYJOYQREPXFZMAMJKICCCEEPFBFLHLQROIWIYNSEOZWBSWUGJBHXVIHPJWRICZSRHHUKFCKHZASVMTIHBUPTNTCKODPJTUCJZBSMREUQESFUBRCZFSLOFGVMANJUOYKTWQPBKEENNTLBBPQIZGX");
    msg.type = 88U;
    msg.access = 108U;

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
    msg.setTimeStamp(0.698825983503);
    msg.setSource(18775U);
    msg.setSourceEntity(101U);
    msg.setDestination(30056U);
    msg.setDestinationEntity(227U);
    msg.name.assign("WVKGEDXRMKJCVSKHMUTXFUOVUDAYAVZTLCYOVRXNYWFWVFZEGNKZQPTAMDFJEYYZLSSMCUR");
    msg.value.assign("EWUTYTQNVYDBHRLUZCNFKOOCHXBLUPXEFBSFMLHAGCRQGQYNYGPHXGXKUNXLZMTIVDMZIBRPJIVWIRKRAPMVNWSEYPSPXUJSGRZTSQSBWDJLWVJFOOOCORMWMCMEBVAJGBLUPFZDFMUALOKKCMWKSQRAVYALHGKEFIQNLWZKZIDXVJBQANKPJVYSLEZFCTKBPIC");
    msg.type = 114U;
    msg.access = 190U;

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
    msg.setTimeStamp(0.429079368557);
    msg.setSource(56472U);
    msg.setSourceEntity(162U);
    msg.setDestination(45067U);
    msg.setDestinationEntity(34U);
    msg.cmd = 243U;
    msg.op = 180U;
    msg.plan_id.assign("RXDDIEYDLOFYBFIKTUXSWLILBGZQNIGSBHFQYRPYYUMERMQEYKBTNCVSCPVHJWCJPMRGIJXRASWBOTTFUEAOFNKDSKYPJVKGBXRQQLYDCIXHZALOGKDLNZXONUHJCOJCOZWVHNFWHZUWHAZZCSALZSZSVLRTXNQMPEAFGTHY");
    msg.params.assign("GGWBRVHMDISBXYSJIGDWIJIFFEADDOJPLZUCCWDMDMGPVDBDFPLYWKRZCKIKQRKGBTHEESGXUNMMHOCAZZEJALHASLPTWVBVQIHCEPYNAGECNBXJOCGJPTBUDTOACCIVZTPXWVQKPZEUHZMREAXRZYHQSHRSULQMJF");

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
    msg.setTimeStamp(0.952598421767);
    msg.setSource(59807U);
    msg.setSourceEntity(155U);
    msg.setDestination(3936U);
    msg.setDestinationEntity(241U);
    msg.cmd = 0U;
    msg.op = 129U;
    msg.plan_id.assign("KIUYUESEVNPSJKBWNECMHTDSHGTTQOCHIJUZHZECRRMHQJWEWLXYYYAPSQLIRGVMEVMBYPFVPGCSPNJMYFSNFQGYBDUFZYBJKEDSARFYFRLKBTHEHGXUFTQQZWJRCRMOHWJVQ");
    msg.params.assign("TYYXIPJTIQNUNBQDZXHGBEPGZSTGXTQYWEKJPSFGDVZEWDLLLSLHUCOAWBDQAHVEGNAVSZYKUAOFVFBCRLP");

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
    msg.setTimeStamp(0.698144728);
    msg.setSource(63942U);
    msg.setSourceEntity(50U);
    msg.setDestination(42745U);
    msg.setDestinationEntity(97U);
    msg.cmd = 199U;
    msg.op = 144U;
    msg.plan_id.assign("DRRWZUEJNYZQHVRINZBSCKSDILQQGFXJOIQDEHRGZAFFHPTPBZKNWEYVNTYKWDUDDWSMBKDFBLOFLVPRZHUBAPHKZDSUUVRRXGSZREKZVXEVTFYIHIBMCQTHCAEQG");
    msg.params.assign("CPJMESZABSCJXRHKNYQAQYRMXMRNQSGRDDEODPQBSMIIMROLAAWVYPTZOBNSBJKZNHHHQLMHESAZYTIFNKLUQRXDSUVRSUETQLMDTKIWOWRWYUHZXIZXAFBJWTIUAVEICYBOKWRLTAKVCPMXGAUGYXYFHVSEKUZCGCGKYDCNOLWLIPQIEODFUVGJHBJJZLOKNEPPQPRZTPFWWGJDFTVGBPIHUCJXDQEYTVFGMLFOU");

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
    msg.setTimeStamp(0.526508493073);
    msg.setSource(24737U);
    msg.setSourceEntity(111U);
    msg.setDestination(49665U);
    msg.setDestinationEntity(168U);
    msg.group_name.assign("YNKPEPCLPXNXKXYMFRCHBEIGVKNRXKZFFBWZBFJWOKZQUEOSUIOUOVXGGJISNZPGOYSWMJJGFRUODLAHFAIEAGZVUESITJUVDMTVORTPIHMVDCCYMKAYQYGSAWNMYPXIVQMDREKBBORSLKBGJYICFBANWSARTTBFQOVI");
    msg.op = 110U;
    msg.lat = 0.694810191947;
    msg.lon = 0.316158471851;
    msg.height = 0.21798747243;
    msg.x = 0.372414546726;
    msg.y = 0.171454069511;
    msg.z = 0.194623377905;
    msg.phi = 0.514195009281;
    msg.theta = 0.896515047514;
    msg.psi = 0.867998850297;
    msg.vx = 0.618608233697;
    msg.vy = 0.608705493599;
    msg.vz = 0.566161869925;
    msg.p = 0.0220668632548;
    msg.q = 0.414319208934;
    msg.r = 0.224413481297;
    msg.svx = 0.715102263865;
    msg.svy = 0.789543336589;
    msg.svz = 0.739843737719;

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
    msg.setTimeStamp(0.99669281);
    msg.setSource(47809U);
    msg.setSourceEntity(200U);
    msg.setDestination(54149U);
    msg.setDestinationEntity(214U);
    msg.group_name.assign("MANESHEICQDGLATAFFVQGBDWVIHXHCGIVXVCSOVCIPUSAQDJRTKZZPMLCLTRUXYHCKQSDJWLTYQPNYOWUJATNMQGGSEGYKNQKZDZFKBPORYMHFWZKFVBXOG");
    msg.op = 169U;
    msg.lat = 0.130169081554;
    msg.lon = 0.991897063395;
    msg.height = 0.49300148773;
    msg.x = 0.233985901794;
    msg.y = 0.853836972951;
    msg.z = 0.747106125779;
    msg.phi = 0.501798318196;
    msg.theta = 0.21404833882;
    msg.psi = 0.00606460204909;
    msg.vx = 0.451481240216;
    msg.vy = 0.755851505434;
    msg.vz = 0.866434046593;
    msg.p = 0.255294819488;
    msg.q = 0.933497425439;
    msg.r = 0.106151898671;
    msg.svx = 0.270993286571;
    msg.svy = 0.104728051313;
    msg.svz = 0.944214824005;

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
    msg.setTimeStamp(0.747284696802);
    msg.setSource(32695U);
    msg.setSourceEntity(12U);
    msg.setDestination(29733U);
    msg.setDestinationEntity(149U);
    msg.group_name.assign("YITKLBEFROZZTMCRRAVJXGFFSCBJOJKVPVUBWHMUEYOFUAYEHASPZRZXZILFEDCLBXAVFXIHGXUNHEXOCYHLZMHHJTJQEYWQMCXHDSTOVEWBMADYRKNYPMWVZPQTRYUCQLLISVODDTKQKGISINDUTVKGFFNZWXAIICMGPZOYDJGHTUNZQYWEJNTQCUSBGSRDRMQOPBTGVPJNLNRNIAJDKCEBOLAHDSJWAXLGMXWQSPALRSPWI");
    msg.op = 5U;
    msg.lat = 0.858660598836;
    msg.lon = 0.943945024559;
    msg.height = 0.360160050389;
    msg.x = 0.00554706134283;
    msg.y = 0.829581550687;
    msg.z = 0.227678634858;
    msg.phi = 0.57046840831;
    msg.theta = 0.475022762925;
    msg.psi = 0.392624704858;
    msg.vx = 0.678630929402;
    msg.vy = 0.419344784169;
    msg.vz = 0.358329055819;
    msg.p = 0.671962555044;
    msg.q = 0.0113007393984;
    msg.r = 0.23789061434;
    msg.svx = 0.387006508904;
    msg.svy = 0.063334590315;
    msg.svz = 0.288437329271;

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
    msg.setTimeStamp(0.920084341612);
    msg.setSource(6743U);
    msg.setSourceEntity(144U);
    msg.setDestination(25396U);
    msg.setDestinationEntity(53U);
    msg.plan_id.assign("QQOPTGBAKYMNDVFBBPLAFKXXFWJGOGREPMHIHVGU");
    msg.type = 190U;
    msg.properties = 79U;
    msg.durations.assign("HBJQJOGKZVOWFAPQKRADJUJUYEHBRWFELXGJAEZQFWSBTENINEOBOFMGFWPHQCBWHXSZKLPQEDTACCTIFSSKFDKRVYAKIPAQWZIXVRNTQCNQGCVRBTDZPPIJOCNHZSOMKNUOHCUVVJWSQXXUHCCRLRJYAAWMTBVZFXOHMYTUIHSFELDXLEOKJENYWMLCGSMLHIXRQMUTMKXYBGMGGAYMZLRIDYNXSUPTIBPPLPWDDGYKDDRV");
    msg.distances.assign("GVHIOGQIBERBRFSEDCATGJMFADNKTPXBQXKLCCUIASXEHTO");
    msg.actions.assign("UOAQBRJVIRGAIQQKNSRGYRQSVFQDNZZKQMPSETAXIBZVAMKYMWRLLKNJHSZMPTOAPCFZUVYFRLPGLGOYVGIUINBFPNUSDIUOITXWXLMASKHOQLUMPFYOWDHOHYPTCCWGALJJEKM");
    msg.fuel.assign("QXGOKXJYLEJCZNCVNNWWEEBDKTAPAXLVRUDNYPRWACMULCKMRRQQOZYLNWPCBPGTNRCUQHDJJKCQHXSTSHDEPXLGRIMSSMYBVISCFJQTAFHJMLOJINTIUVJMAVTAIGWWRFFSUUXNUUMZLJSSPNXQTOOBOGHVYEQYIKMZZDABFHXVDLATVMLBXGVFROOHDBZTWBAEZKDCCJQOZKUEHFPERVKZYFRYBPOEGLSKYMIGIHWXIFBWPNSUWHQGYDE");

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
    msg.setTimeStamp(0.919104180604);
    msg.setSource(6385U);
    msg.setSourceEntity(40U);
    msg.setDestination(61170U);
    msg.setDestinationEntity(103U);
    msg.plan_id.assign("NYTGTMDUPUENNVWJBVIJKZDTVXLWZMOEBPCNZSREMTOHASIAGOBAVBBKGTAYWFQIJHIPTJYWQCMYHOWLGNHUXRVYNQMFZUSWKSWDUCZUXCEXGGQDFRSPNDSKYHYOLLLZXCEPFWBHUJISJIGHIRVLNXORCBYVRGQCPDUAQKWMLDJCNAMRWBKJTHTFIVZJBFNFSSTXOFQQOGUHOYQQPUGMVLLXOKARJAAXXIK");
    msg.type = 171U;
    msg.properties = 58U;
    msg.durations.assign("HQYYRCXBQOHPFSSMTEITZQPFVRVVJYLDUVPLAKYPHOCOOKIRGQZKSMUARIRPIMLWXVETXFSHOUNWAHOOHLGLAPKENHQYUVUPZDMFIHQBWBBMOCXIZBCWFUGZNTXKYURALLDPMZXASLGDDJZBBNQ");
    msg.distances.assign("VOOYMAZQEGVMLNVRUPOITLCRGYQSRTHHCJPHRACSAITDFBAGFIFEWIINJUKUBSJWZINWUDNHJYREKFNEUSKVNNLEZXBWDFLLUMTYZRMJYWOJMKTJASBRHSCAUSGCMXVVZBTEWKNQIRYAEACDRDGQEYQUXTMXXFYXZTXCDPHJBBZOWKGNLHPUFDQQVQAHQMT");
    msg.actions.assign("SYISBZSLFEUHPKUNLVJHITHQYONLGKWXWNQIJYWPZRMRLGHJCFADSQYXXTHCVMGCWKI");
    msg.fuel.assign("AFJVFZOWJQLTGMYXKFMDGTMZVTHAGUEBRVXHHRJNZZPKSQIWPUUHGPRHYJUOHIGQNLRONEXKDZOYSFOIISAQZUWRIQEYJWTNLLUIPBCVNXJFMMJWGMZSAFMNMLTDSMEQOKETKCXVKBXGLDVWCQSQRQTFPUZDCAATUDVXDSLWRBFRQFERJEAPNNCYYSKGEULIOPAX");

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
    msg.setTimeStamp(0.163903950996);
    msg.setSource(41387U);
    msg.setSourceEntity(20U);
    msg.setDestination(21323U);
    msg.setDestinationEntity(187U);
    msg.plan_id.assign("WKGSBIIGMWJYUOXGLDKQOIUNYVGWTSYURCWBSATKOTAIMBXUZXSDRQEKSLZVGQCXCOVKGBDXOYDCZFTMTCPJVRMRZZGFXKAIXHACJWBPTQVMFJAGUHNEOSYNXWZIOKIUDHXOSYJEVXEFNLYQAPHVPDNCHEATNNKNYHAERJI");
    msg.type = 232U;
    msg.properties = 17U;
    msg.durations.assign("JPJYPXHVAPUFPFZHDVEXUZGEXFCQKQOW");
    msg.distances.assign("FWNTALEOUZXLAIBXEKXUMMKEMTTVSRUOJYZHAWCKDJYBGGRKCCVZFJDLRFDOZFZVBQXUJSSHAVOECZGQPOOYHBQHQHWNNLIYYBBTPNSKNKHXWDNQVGLGEPBWVENSFEIYDOVKFZIMGARTXKINJVYRFKIZHQMRUBEUOQRMIOUCCAYJDQXXDLCIAMWPCFSZRM");
    msg.actions.assign("GTMEMPSWEFEPMVUOWSWVBWOMOGQHLGGJNIEMPNKRLWVHTYFWGFWEVIZBHRZSFUAHCSATYLHSNVPMPLNSURVAQAJTINRRFVBADYMUBOWKDJUNRFWCRCNSPFTQYOGXRFDSJOQTHJUFYJTRBBGEGMZADXCUQVYLZP");
    msg.fuel.assign("NTVBYZIDZNALOAZPMWVBXHLTYCIRCHOTOWXQBYXQXIEUBUPOKLPBKRVSYPBUGEPMFESJMMATRURQCGAVDWONHFSWTAHMWALZDGFQAQGHCJHKIJQALMGZCRSUUHPKSQUHTJFFGLRRE");

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
    msg.setTimeStamp(0.783653207997);
    msg.setSource(47360U);
    msg.setSourceEntity(116U);
    msg.setDestination(9991U);
    msg.setDestinationEntity(82U);
    msg.lat = 0.0724453481324;
    msg.lon = 0.43520041283;
    msg.depth = 0.637420442102;
    msg.roll = 0.284492251851;
    msg.pitch = 0.263921234944;
    msg.yaw = 0.388739909392;
    msg.rcp_time = 0.430037809991;
    msg.sid.assign("KRCYOQBGHOJRTVDTLPNAPVWQZJDASVHPFMCBCZBNHQZLDXWILYESPOWGRFNTRRCKAEZNKQGIPCXXBTXWUUEPJYJESMBUXWGTMGRMEKIZDOCFDGCLJHMBMJSMHWAVGNLHYBUQHSSQVFVYPFANSAFEZFROLUNELUNJZWKOKAZEVUKMGLVIGQOBENMDXL");
    msg.s_type = 139U;

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
    msg.setTimeStamp(0.961524185827);
    msg.setSource(63960U);
    msg.setSourceEntity(159U);
    msg.setDestination(15442U);
    msg.setDestinationEntity(182U);
    msg.lat = 0.844147813254;
    msg.lon = 0.352666388342;
    msg.depth = 0.021908057457;
    msg.roll = 0.474481276717;
    msg.pitch = 0.499176529877;
    msg.yaw = 0.0988014367254;
    msg.rcp_time = 0.21352326844;
    msg.sid.assign("XWGNYUHQELFYUBDZZKQREXOXFFMVUOSOWFSFTQQWNSGGHLABPNZCPFFZSPORJVDLKUJONSNAMSDVTGJWKUCOEYRTEQDGMVYTMZZMGKBUTCMRBVCFBJBQTWTMAGATIXKZJXWDEYYAMXLIMKQCDZQLLSICWDKBPOVRAAEVDHYNIGGWIXHHLRHPVQMRLOPYHDRCYE");
    msg.s_type = 203U;

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
    msg.setTimeStamp(0.15814826685);
    msg.setSource(10153U);
    msg.setSourceEntity(19U);
    msg.setDestination(20826U);
    msg.setDestinationEntity(242U);
    msg.lat = 0.715727550216;
    msg.lon = 0.163530541462;
    msg.depth = 0.165675547474;
    msg.roll = 0.538080869042;
    msg.pitch = 0.213690209724;
    msg.yaw = 0.156060464389;
    msg.rcp_time = 0.148340803175;
    msg.sid.assign("ZBSVQNXFAMKVDUDRYXIBPGCYFNPYELLLBWQOOZJQRMYROBYLNAMQQDEVCGVSLKWRLTOFEAHRXCMHNKGXUWVUOPBSZFPKNHXGQCAVFEPYCAJXEZTJTAIQAVNZOUHWIDIGLPLHMESOCPZGODVCIBISKBRRYITWQGOWWJYFJTGFYQYMFASJCTWIVHXKSJHLFSDREBIJHFLNGBZZNUAEUACDJUUCOIMTMXZDWGUDSUMJNTKXEKKRRXTEZTBHKPND");
    msg.s_type = 87U;

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
    msg.setTimeStamp(0.689800643487);
    msg.setSource(31862U);
    msg.setSourceEntity(75U);
    msg.setDestination(39893U);
    msg.setDestinationEntity(200U);
    msg.id.assign("UGFBRCXNOZWYZSSGOSGCSHDOLYCVWEXPDCDUPKNHZKCDBAAZAZHPPYMIHQYMNUKZKGVTOPABHEDQVLUFGKTQMKKIRVMTXDQCJQZNLEPFXBJETLSWRHWEBSXIUXXCWGJQOAEWGNDYJVHJFYURJEXMZTURKVTAFTQRESUFOPOBIFKLIWSDSMGACMVQJMLPFKVYQLXAJIHBRUNRPCRCJINNANHLQ");
    msg.sensor_class.assign("NTFGMXUIFHXYGQUXBQHKSTAJOVEDDNJPUYFKHHJRYOAKNPZKIAWMPUQDMLIUACVLLGZEMOEQPZRBQKHRVEB");
    msg.lat = 0.76131208798;
    msg.lon = 0.717567931662;
    msg.alt = 0.85129336439;
    msg.heading = 0.461068690219;
    msg.data.assign("VLAUDLNZGGSUWWCVTWUMTSXIHTYJIBJZCEJHEXQZCLROYGUBRGWFNODVAMHUETBMGREDTCTTRRXLGKGEOBONPFZOCRHLXBKECDMMIIGFVLSPXLKNJNAWQBD");

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
    msg.setTimeStamp(0.643063589263);
    msg.setSource(54966U);
    msg.setSourceEntity(215U);
    msg.setDestination(6304U);
    msg.setDestinationEntity(61U);
    msg.id.assign("MSRCBDGTCWGTKWICLAVEEQ");
    msg.sensor_class.assign("IFTRBLVABFQRVUIBFOKCKFHVJMCRWKCORAOMDJFXCEWMGSCPHSVRRMNMDXNLXRSZHBZTUUWZUHCHPLJAKAJHYQMUDOQSMDBLXAUNJKYWSZAEOIMUCQIWCDEEDZTGYONODWI");
    msg.lat = 0.394934970804;
    msg.lon = 0.061385334251;
    msg.alt = 0.277163893671;
    msg.heading = 0.537884567212;
    msg.data.assign("PJBHDBRQKQMYTXFSRBOVMXUSOPCAFLGOOJPTZYTQGWHINQYFXOXAPAVFSOPGSWDVYBEEDCSNMERGUZDETHUDWAJJBSEIKR");

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
    msg.setTimeStamp(0.185981772791);
    msg.setSource(18084U);
    msg.setSourceEntity(12U);
    msg.setDestination(10308U);
    msg.setDestinationEntity(145U);
    msg.id.assign("QIKXTOOVCAZENIEQGSWWKRQTSXULECRFELPJBFYRODKZVJSQNFHSBMRHPWGD");
    msg.sensor_class.assign("VMJLPIKTPHHUOIBPXUZDIZZVNAGKCBWMNUNGMDXZBJIAMUHNPUVCLXHFECJLLRXIYPQRLSNYRTOIZTKGNEIJXRDSTVNKTHHRJGQHEAKIACSWWYPBCYBJGOKXKQIJVMRBZOSYYYHXPBCQDFFLLAOVJCPMTDSUSADSDXZMAFLGUVTEBBEPWVTFAVOXOIJDWGBSWMCRAWYRTNEEWHDLYNVDUFOFUNFWYE");
    msg.lat = 0.577942821066;
    msg.lon = 0.254390624;
    msg.alt = 0.220634606043;
    msg.heading = 0.248582535041;
    msg.data.assign("CSNBLRBWDQDVHJVPKJFDXGNIOEMNSCTVVOTEQEZEGYDKTLMXXWEFLJFWQUOHPKTTVXXBJMHAREWKJORDAXYCNYTVQFPLFGPYRNGOOHTHJYHYRYLKBYPSKUARXENYAKUGFBIGWMUJZDGHFQFCCKLKQBFRQTJGZMLWJZWDCWVXOPRTGSRIJEU");

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
    msg.setTimeStamp(0.443494102267);
    msg.setSource(29760U);
    msg.setSourceEntity(68U);
    msg.setDestination(38684U);
    msg.setDestinationEntity(189U);
    msg.id.assign("USVFKUBLQBTAOSKOBVKMXGHGSDAPZNPAGTWMBMWHYAMDHFNDZMVOHMFZSYNJZFLSHVGTUSRVXEVTOECGSNBBJMJSHCNEJUXNLAITTWYMFRGKXWFZZQKQOCFGCLUDNEGQPFBRDEJXDVDXQALLDUJEIGKMNNBYLARATQOTVPUCNOXUEEUTFCDREKZJRHKRLUTCIIPQHIYCVMRPKLOIJBOPSBPEJCZPYXWYWAWXWIZSZQCRIPXYIRJYDA");

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
    msg.setTimeStamp(0.0681302205538);
    msg.setSource(5216U);
    msg.setSourceEntity(179U);
    msg.setDestination(18722U);
    msg.setDestinationEntity(130U);
    msg.id.assign("XDBXDFXQMKQJHZWWKKGAMBIVSMNQIVKK");

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
    msg.setTimeStamp(0.223425171316);
    msg.setSource(60091U);
    msg.setSourceEntity(138U);
    msg.setDestination(29280U);
    msg.setDestinationEntity(148U);
    msg.id.assign("QGYOMGVVPMFGXOUTNELPXYRHHEYGCQZKXFIABLLBFYOJECHWQTILHHPBKNUPEQRAQJWIVBOFDCCHYMWPODMSDUCNANZIKCXFMFRIQKXVFNROOBGUMJSBZAJSUJDKKRJLWJTTMOQXWALXZSYIQPVUPMPJLBGGWSGDZZDCNYRKWHEKEEZBMVYADJRKCKAPF");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("BUFSHOOMNVGTPTTYSPEMRHYKHJAKUSPJDFQQXBWKZKTLNTZHYMGTHNYATJVXPIAEHOAEXCHXTSMXCNMURDIBNLCSCRSUXPSBJRABXZIBSVLEFRYGDOVWRWBWELOUCVDIZQUNIVGPNGLUCFNVPAJFWUDDJPLZFZAOIKFMRHFADYJEQAPYV");
    tmp_msg_0.feature_type = 157U;
    tmp_msg_0.rgb_red = 171U;
    tmp_msg_0.rgb_green = 130U;
    tmp_msg_0.rgb_blue = 185U;
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
    msg.setTimeStamp(0.392934751675);
    msg.setSource(53100U);
    msg.setSourceEntity(138U);
    msg.setDestination(30291U);
    msg.setDestinationEntity(25U);
    msg.id.assign("IHUXEELCAQIPNFJPJCGVKJMTOREYDWNHOWJQSMZAREBKLFYUVTAXOHAOHDSYJZQHLVQTTBODCYZOYDGMPDWXABXPTFZRQHTHKXDCXBLLSMXVMPRIWAVFCSHQVVAUKVBRNMJKWJPJTLOSQEEUTGAMRTKFFMPU");
    msg.feature_type = 165U;
    msg.rgb_red = 147U;
    msg.rgb_green = 90U;
    msg.rgb_blue = 14U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.714831231419;
    tmp_msg_0.lon = 0.775870008168;
    tmp_msg_0.alt = 0.0118671960477;
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
    msg.setTimeStamp(0.977315408399);
    msg.setSource(63093U);
    msg.setSourceEntity(22U);
    msg.setDestination(1848U);
    msg.setDestinationEntity(38U);
    msg.id.assign("MWIKUJPZNWVWATDTGBEGYIGPYXJCZITWJOYIHKMSSJZOTRPCKTQXSOOHLVXONPELADVSANEWHPLFXBKRZESHKCVMHAKXRWKUMFLQDQGCJXRULWFTOYNIHKIRACAAZMQEFFBR");
    msg.feature_type = 16U;
    msg.rgb_red = 159U;
    msg.rgb_green = 193U;
    msg.rgb_blue = 241U;

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
    msg.setTimeStamp(0.945823647762);
    msg.setSource(55959U);
    msg.setSourceEntity(78U);
    msg.setDestination(8281U);
    msg.setDestinationEntity(38U);
    msg.id.assign("MCJLZDSSTHVTIUWSJFVWXAYIWVGGVWITHFEZQUTQMOOBOLSDJGTLDYRUCZLBVPTPIGNOCBGVMYLKHKRDZMBYYOJWZBFAJNAINHKSLNCSSERUWORKOLXVPQAQIVLEWDESMQJUUAYENBGTCHMXYXPKQMWQUMFEUAPILOJNAXNKPJJVKCHHFUHDPCONKYKXAPYFTJIVLYZMNHDXMDSCEPXHCFZENRESXIRDWZGQDTAZFQPFOFU");
    msg.feature_type = 160U;
    msg.rgb_red = 28U;
    msg.rgb_green = 30U;
    msg.rgb_blue = 184U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.92254469371;
    tmp_msg_0.lon = 0.370710303719;
    tmp_msg_0.alt = 0.966893650298;
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
    msg.setTimeStamp(0.80599275788);
    msg.setSource(31869U);
    msg.setSourceEntity(90U);
    msg.setDestination(49168U);
    msg.setDestinationEntity(200U);
    msg.lat = 0.156022441842;
    msg.lon = 0.0391984883225;
    msg.alt = 0.645191338939;

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
    msg.setTimeStamp(0.497504220039);
    msg.setSource(19777U);
    msg.setSourceEntity(229U);
    msg.setDestination(40346U);
    msg.setDestinationEntity(109U);
    msg.lat = 0.0939113377038;
    msg.lon = 0.288173891467;
    msg.alt = 0.258218266872;

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
    msg.setTimeStamp(0.292646053277);
    msg.setSource(38224U);
    msg.setSourceEntity(27U);
    msg.setDestination(13373U);
    msg.setDestinationEntity(89U);
    msg.lat = 0.557169054539;
    msg.lon = 0.733193306131;
    msg.alt = 0.253598273884;

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
    msg.setTimeStamp(0.499176991815);
    msg.setSource(50916U);
    msg.setSourceEntity(57U);
    msg.setDestination(21001U);
    msg.setDestinationEntity(130U);
    msg.type = 244U;
    msg.id.assign("PWIAJAXLBHLVUMCMNZPEQVCGUOKLQVCTMNP");
    IMC::LedBrightness tmp_msg_0;
    tmp_msg_0.name.assign("PNBTDRJWAQFZDKNVIWSMAOVAAFNQITXTWXDRTKWSSWKMLXYJEPUUPPESGIMGIBGXEJRFOEYOMJSUBUXCNVZQYNATDJFSBXSJYODHFWUQKVEGJYCANELPVQTOHZCBIKHJTSXMRPDVLNBVFYINCPKHGTZBXRSRUGYCLWJWIFCITOEYYIRXJQFQUBDWCECRVEDDMLASKYMAULXBHVZFKPHAGZOEOZLFQWMNHKQLIQOMTGULZBZUPZCAG");
    tmp_msg_0.value = 139U;
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
    msg.setTimeStamp(0.0772525991418);
    msg.setSource(55109U);
    msg.setSourceEntity(200U);
    msg.setDestination(59533U);
    msg.setDestinationEntity(229U);
    msg.type = 17U;
    msg.id.assign("FVYXMQCWMXFQXLKWGCHASRQGDYUQGEUNTSVKIDIUMRBPOSHDNRPEVCFBZDMXOYLKYAAMQRLWJBDTKJLIFTTEZZGCMMRVZAWUXPPUSXWNPKEDMUZJBOBJHSAHYKZVAZCGQYVRKONPYDGZBMNVIIAKJNLXRNEKWJXGBMLYAUAFRFHIOGLBSOHELIUNWQXFEQZSFJOLSTXJUCT");
    IMC::Calibration tmp_msg_0;
    tmp_msg_0.duration = 10460U;
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
    msg.setTimeStamp(0.763537179211);
    msg.setSource(35828U);
    msg.setSourceEntity(98U);
    msg.setDestination(57832U);
    msg.setDestinationEntity(105U);
    msg.type = 206U;
    msg.id.assign("PYINYTRFYYLILBNAMDRUJVUFDHOGBSQOBIRORCBREHZKJXSQFVVZTUCMCTFWPJLENPXXZNGNEGIUPRDKLIJGTBGALVGTJWTZJNXFTOAGTCCSKSDWKLHYPCFCNMWHITZUMGSLYXHQRAMPKVUUIMHWEGVPEALKOFEWUWZGOZPZMVDKYRAMOKCXXXWVEENRRQSBFQEHZABDFYNQYHSPBZIKOWVHWNSXJCMKQQAOJBDPLYML");
    IMC::DevCalibrationControl tmp_msg_0;
    tmp_msg_0.op = 11U;
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
    msg.setTimeStamp(0.576242211711);
    msg.setSource(49659U);
    msg.setSourceEntity(20U);
    msg.setDestination(7495U);
    msg.setDestinationEntity(96U);
    msg.id.assign("ILGWIDNCIQTRDZAUUQZTXNBYSNJWTUZQWQXQCWVZMRXZRBEQPPCKTXGLKJWAGKMJTDYAMTGPFSQCSBHOOENRZNAWLPZFBDNRQDLYNBDLVSVGFRTLHHSOHFGCBSLKKBOEUPVDAFMGAMHVSYRXPBXCBIDUBTECUWMXUSKPGWKUIHZEGJAEJFQWFHXYVHHLULV");
    msg.callsign.assign("EMTGLNPNDJJPTAHLBYOZEKRMFABZTVDDOAJQVXWEXPDMBORZUKMJFMWZVASNCSWH");
    msg.name.assign("YMKKVMREKOOTTBRKEQMIBEPUEXCHYQCJOFUNNCYGWXVKZGHWDVEVFZVAO");
    msg.type_and_cargo = 248U;
    msg.a = 0.746950094091;
    msg.b = 0.0390869608284;
    msg.c = 0.169829193416;
    msg.d = 0.356162326942;

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
    msg.setTimeStamp(0.599199730911);
    msg.setSource(8440U);
    msg.setSourceEntity(195U);
    msg.setDestination(9617U);
    msg.setDestinationEntity(175U);
    msg.id.assign("ITDFXXCQAXRGAEQATZNHZFWOGHPTXOLLNBKJCDNSPGZPRVDEMRNTZGSACQJKVNUANKQJTBQTJVVVYWAWPHCXBKZSJEINLYHQVDQJCMJIWLMUROWOYQIRHMSHXUFZNPTSCKCIYDGKIOPJMGZPPCFDJJKBIBSYHZAPEIXZVBOUYTGGLAMTAWXDWVGUSMHBRLCBSKWPM");
    msg.callsign.assign("NYRPZRHQCNSELWPPPIUXPDBWGRSKFLVVVQBESQJEEVLRIFJKZWAUBQWHOEEIQBIUKLHYTCYVHDJQSIAYXSKVOOENBOXDIAJKSGAFAEPVGTAYNHBHNCROLKTTIWCURZODLVGNYBSTPYOUHEJFMCFIPAJXQRKISFUZGONLIEOJCW");
    msg.name.assign("OCTBNZVKBFVLDDGSVVSSWDZPWHIFDJZTJXFMFGKGSYMOVECYFSIKXNLQPNUTNXOZDRVTUEEMWXNQFRKYXBTAIGHDNKLSHZIYLFXLXZAHQOIDPVUDJJGAWERWRSMTHJFZAQERMJPZFTACZDGQOCGUYWPTBPALGVBJYCHVJUHNURMSPPAOGMUBHUWECUJYWNYYORALHQBNKRCOAXXIQKLSKLEABPYEZPFGTQCRCKTSEMXMWBQCIRIM");
    msg.type_and_cargo = 195U;
    msg.a = 0.887623086837;
    msg.b = 0.0302057847557;
    msg.c = 0.0971072413602;
    msg.d = 0.185512110581;

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
    msg.setTimeStamp(0.153090296921);
    msg.setSource(18724U);
    msg.setSourceEntity(111U);
    msg.setDestination(35632U);
    msg.setDestinationEntity(58U);
    msg.id.assign("DTTGIPPJHBDFLYYOEZTR");
    msg.callsign.assign("COOYKNQRAJTLDIISJXHFYLWVSZXFWDHTDFZODQUUXNBQOWBTVKZUJLNOEGCKSWEKWDRQLFAJUFXGABAVVWEPIXHBDUUNCMUWAWHHIYRSQAFRPKPESJXSALJHJBMINCNMAQGSTENDOEQSGYZPKFWENDHEQXMNZCCPBTRZTLLSYGHGYYCGYPUHPOMEPVBIKLQLOYUIKRJVPG");
    msg.name.assign("QYLOOCWHRFPFISMNWXMRQTGFGCEIYVQLHDSMSJPLRQUUFENMVCWTF");
    msg.type_and_cargo = 5U;
    msg.a = 0.109724907677;
    msg.b = 0.395604466968;
    msg.c = 0.232056174388;
    msg.d = 0.62226994908;

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
    msg.setTimeStamp(0.157490497322);
    msg.setSource(34334U);
    msg.setSourceEntity(219U);
    msg.setDestination(8927U);
    msg.setDestinationEntity(222U);
    msg.localname.assign("EWBLMKVHYORGSYPCGJKQXGASUFICEBTRTBFWEXWILCLVUPBSAOKZONSMVUGRSPHKLQBVJSMAFRRYBHQLQWFIPJERIJTCZHRQKVPDHEUAGHTYVOIOWUTGNELUFDXYFXGBMDGKNFADJOTZUXJRZJSCMOMAHZDBKIVHAWCKOXYQEIPANUTAZESGDFKMQMMPDSXJWNQIDPBUNWLQLZZSNJDPOVKCALFQIUHEXFZYIGECOZ");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("XWDSAMJJGZKXGGFFFGTIFERUQHPMAZNMRFHUUGIZYGDRXXRAWAILGVXIQRBXRUIZYNCBTYKOEBFDFAHMFFLPWKMCAHBWJJSSQGTRHETPSXILBCZVPCEWRDCEFOPMPQQYSSVXTUNZZZLXXWOGVBOYKDDSQZRVJCLWKPSQJIUCHNDJCMTYLHBACIQUYPJLNNLIBAUBPTETLJZHAWYKBVMCYMNOPQTELVODGMHHUKKWO");
    tmp_msg_0.sys_type = 46U;
    tmp_msg_0.owner = 18406U;
    tmp_msg_0.lat = 0.292885882795;
    tmp_msg_0.lon = 0.892131976652;
    tmp_msg_0.height = 0.174329467303;
    tmp_msg_0.services.assign("DDPSLWGYKBINIGVTOIIUPIASDQYOLYHLZRFMSYAMGWTIKFKGCQOIXMXJWSBNLZ");
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
    msg.setTimeStamp(0.00985107920223);
    msg.setSource(62854U);
    msg.setSourceEntity(214U);
    msg.setDestination(1943U);
    msg.setDestinationEntity(192U);
    msg.localname.assign("XAJMKNJFEGXTTQEREAVAJJWHBGAUFPYWJHLYMEFNUVUUBUANUCSZSVGTBNXVOEZJYINNQKMRJLICRPOFDVLCGTEOPSYGPSRUNZHRYQUKWMAHJROXQYJLOVVVIBSKDLZCQVEJTGLZCTBKFQBHKXSSQUYMCKHRWBDEMWNUMYPGSHRFPMNWCVCPZIRTZGCIHXYDAALFBOGOIZSOT");

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
    msg.setTimeStamp(0.297669540812);
    msg.setSource(38698U);
    msg.setSourceEntity(109U);
    msg.setDestination(29783U);
    msg.setDestinationEntity(95U);
    msg.localname.assign("DQMGUWDNZMMMBHDRAZVAEUEKGMYJLJAMMWQLKMALQUIWKBBEIHXSROVPTIKHTYQBAYRZTRVTUDJKUOIXDWPJQQKPOYSPZWJSHFCNLPYJBWGCNWLRATQGTKLOGJNOSATFVQEZJFZXSUGMCH");

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
    msg.setTimeStamp(0.461136011268);
    msg.setSource(36463U);
    msg.setSourceEntity(254U);
    msg.setDestination(16104U);
    msg.setDestinationEntity(251U);
    msg.timeline.assign("LMZBBJRSDPNEHYUVGWQBNJOMQTESJPZZDBSLFRBWWSHLXQFJVIQSGTKSXGEUMZIJAPORGPDIOHZTKRTNYPYCDIWGWUVWKJKODDSELPQ");
    msg.predicate.assign("VOQNFRMPTUFZSVJXEKZJJVBSAEZYIMPGVBVKFQDLVNTRYETEWKSUYBVAGICTFCZMBNEVXIUWHXCVNFAUSQWUKFIMXNJBKTMHZSWEARRWHLZHZSSFDXIXEHAOYXJOYBDGCUXKNATAGQDKPHNHAXORWKNSFKPGYZJPSCWZ");
    msg.attributes.assign("PJFQWBSAWMKIUUDOCVLSLYWKLAEIBRUJGDHZPQNAKOBYVKMLAHBSNHZDQTHKVLNEQJUWKQXGTBYXOCHNPLETKIUVWXRNMCFOBSUWVJMARULTSUVJQNPGQHTCTFZQDFDIURPAXBIMDNOXRZPMRPNFUJAJMYGEXMNNOCMGZFHBEXICRRZPFQWRZFEYKWWXALIKETLFAMEHSTOZBTFVIYOVGGYVSGHZXCYCYOCGQSTHKEYSXJIAD");

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
    msg.setTimeStamp(0.796495327621);
    msg.setSource(32156U);
    msg.setSourceEntity(223U);
    msg.setDestination(28573U);
    msg.setDestinationEntity(109U);
    msg.timeline.assign("DXKVOPUOTGNEMBYEMEOIULZACQTISUGAMSDZVFDGJSVEZLFCEERFFB");
    msg.predicate.assign("CPYHAHGVRICYBZQRYELPHTYGQPEFDXKGGBNAPXKUQQVKNYIEZXKXEG");
    msg.attributes.assign("HQSSACEDFFOUJYMXGYBAIYHKCZRYWWNQFBKWCRWHFEYYDIKHPXJXGAKUKDPHKFUIKZRTBGZUYBRJNQYHLGGQLDXJKCXSTZRZPEMILOVMUTYFPJNFNWNAQTIUSOGVUAQTCNHVVBRMDZSTDDEOCSKCRPBMNFCJVJOAOJZTMEWCNMBTTEQLPGHJSY");

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
    msg.setTimeStamp(0.311692272927);
    msg.setSource(16174U);
    msg.setSourceEntity(156U);
    msg.setDestination(64767U);
    msg.setDestinationEntity(214U);
    msg.timeline.assign("FCVEOLPJXSHNCZKRYMPHHFERDMUGKAMCTUFLQZKRFJDOOQZIXCWULBVYORTGIQXPLRENCGYXLGIOLDHWHBPRGJSTNQIZUULHPQUMVYOHKKIVSJKWBJJYBIVMVKSBBFZKQGBXRDQATCOWYEQWTYNPLYYSFTRVNMDXIWFIGJBPWSEUCKGBDWDUFLWGFAVZAHYUVTXISHZKJ");
    msg.predicate.assign("FIVXHUGVVTPDCQESSCSZSFDIQRGEWZGNOCCFZYRRMDJDMVNJZUXHGTHDTKUXQGLPWOOCBEIXWLATZHNBEIRTAXARFQMIYPBZYCFLKPEENOGQBJALDYEVDQDUJUIMVCFLAHFEBHGSQPWMUXJYVRNBWKYPFPVTRZMTVIYKUNWKLYJWBOGPKNTYWXYQHEVHONXOQLLZOIINSUGAXRPDSCFRTZRJUOJKBAWAJFMBWKDHTUCQXSPOMLAMM");
    msg.attributes.assign("VCTGLJHETMAZYDUPDYOWBQTIQJGOIXGEKWMDBPETNVBOYCUFZNUCCEGSAZNZVIFHFUEWJMBHMTICPAGMADECOLOJLVUBAJKVPZMRJXTLPQDNHRQKWKINILGRLUYGPACRTSXWVDQBYVZSSIAKNVBJOLKWIYMPRMKU");

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
    msg.setTimeStamp(0.0104301557806);
    msg.setSource(6840U);
    msg.setSourceEntity(48U);
    msg.setDestination(8270U);
    msg.setDestinationEntity(115U);
    msg.command = 94U;
    msg.goal_id.assign("XECXNSLHQVYRFVZLFVWEBDHMDXHVGNGHK");
    msg.goal_xml.assign("KMNMIICJKDURERILZOPDZUFUMRGJTTVYRZBDBMVLBYDSOVHHWA");

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
    msg.setTimeStamp(0.887566746704);
    msg.setSource(10247U);
    msg.setSourceEntity(56U);
    msg.setDestination(26432U);
    msg.setDestinationEntity(247U);
    msg.command = 35U;
    msg.goal_id.assign("SVEOLRUWSBNEKHPDKUTJZINLKLYOMYNDUASPBSXGSSERERXBTGGUQCSXRJMUPHKNGBSYLEHOWZOBFTTPZ");
    msg.goal_xml.assign("YHFRIPNWFFXGSWADHVUYMTYZAMUIHPYGJCKZPGIUQZJGQVYNHGMIOKJOEOIJEBTAOMYXWHZOHACRFALUNEJPTTJNUGBFQLCKBGDJKXDZYLCQKVHMKMVMZPSUBWWKSJDRCWZLDRARTZRRXKOSCNPMOEQXXNLGTERSVOHUUIDMRANFGILEPEEOQOBBCLXZNSVHLXQSICWFKDPQBAZXPTTVNBHIC");

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
    msg.setTimeStamp(0.730023455275);
    msg.setSource(45112U);
    msg.setSourceEntity(144U);
    msg.setDestination(33395U);
    msg.setDestinationEntity(151U);
    msg.command = 43U;
    msg.goal_id.assign("OCKAPMJGIWRJRBYHLIKICYVWSYXDRKOFVYELDZMHEAAENYHEZMUAYWUQUVOHYUWLHUPPPXPFUVEONRWSFFOCDBBAZBITETHYMKDPSYIBQYAZHFUQZAGQSWPXQKNRCFRFMMFF");
    msg.goal_xml.assign("IUWSPNQMPELXLLDYQAPIBFZVZNTBEERXKYARNSXIDBPZGOKJCZLQTZAFCKADBPWOWNHQJUWQCHRSVVJHIGGGJLMMINBUJLMQCGLXMX");

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
    msg.setTimeStamp(0.856098178102);
    msg.setSource(32881U);
    msg.setSourceEntity(110U);
    msg.setDestination(1428U);
    msg.setDestinationEntity(40U);
    msg.op = 4U;
    msg.goal_id.assign("TMIVSOYCMSUKLACFVDEZPATSHHDBGPWGNZHVIEUVJPMXAJBCRAYATRBUWQRRWNNUZIGQWJJLLAMFWBODBPDGKK");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("UTISJWDPYIFAGLBQEWCSIVPKBTBLRQEYMWTMMHOQUOXDDWEFFCNPNUCDPUOHNFFOSZAYBJEUYCITOKSJJGIGNHJZRHOTDSDOTDPHCLVZMKNMKFFLJURPLVQRVMZCZXDPRAJJQBHJIDBKYKSKNRMGNEAYVUWHGIQLGEPYAQZVHNHRMVBNVDAH");
    tmp_msg_0.predicate.assign("CVZWRYWJMETIHLMMGPGFHKVNIOWSCYBTUFINBJPXRQFHKEDPLOBDZLUKVSGRQZKRIYLJDGTSFGXVFREMLAHZNUWSOUXCTIQBZWBKQNE");
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
    msg.setTimeStamp(0.998514567883);
    msg.setSource(38447U);
    msg.setSourceEntity(106U);
    msg.setDestination(44120U);
    msg.setDestinationEntity(143U);
    msg.op = 109U;
    msg.goal_id.assign("QEHTHHEDHCGPQNPCPBJRJBXAXXEYLRWBFIOATMJAYNOKQJPJRVUZRIDCFYPACVTZWRHO");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("JIMEUMPKUYSBQGXLWTDLRPQABWVIRQHYBNDKJPSFMQYWLEPKKWTQVCUZHFJZCGGYKILKCBIEOYZBMTZEPRSPPNMSMELSQLJTMRIAHPXAYRBNYMJEORXADVVXXBVZRNTIDOPSTXOWOUWFZTJR");
    tmp_msg_0.predicate.assign("BWFSRWUXOPWZYCBHYCNWXESUQZALWSEJHUQWJMNGHTEYGAYHWFCSMBCRYVCKMVGDUEBMRTVXLMDTPKJDURSYZNGYRIMGPTYLLRIVUQPHQDNCNNLTAPJOQZQIBBXAMSHFVFIIIENWNSODWPMJKOCAFFHSRKGHFZAJPAIXHQUIKEHYBOQREANZLBZTJLUQPBGVOT");
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
    msg.setTimeStamp(0.192426946414);
    msg.setSource(990U);
    msg.setSourceEntity(42U);
    msg.setDestination(30336U);
    msg.setDestinationEntity(127U);
    msg.op = 131U;
    msg.goal_id.assign("ILENBWPBVULWPJATYZYURIPNJIRZDGSFSBIUEHOKOJPSSZSTQGANOWBVCNITXFVDWZGHGBRXDXPJMQPHAQHQHCZIYKYFOKGXDRDUCYGLWYMKOLPTFNZUTVJPKWLUFCAQJHZNQKKRLYOQFXIHEFMRFSOVPJTGKOVDLNYAYTTNWAEUGJGECIEHIFLTQ");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("PUCMDTJKIDJBKSVTFGMQQ");
    tmp_msg_0.predicate.assign("HPTFZDHVOBXAZDDYEJUUQIRXZVADIMYVFSPFMXHEKPCEWCTLNQGZYWQMSKYHN");
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
    msg.setTimeStamp(0.960359667937);
    msg.setSource(43299U);
    msg.setSourceEntity(7U);
    msg.setDestination(4399U);
    msg.setDestinationEntity(13U);
    msg.name.assign("YRQQZICFNAFUNOCZJJQSYAOKNJDKXZWQSEBNYTIWECPIWSJPCLUDQUUSXMDMCTGHKVBTUPOSJMIVQGF");
    msg.attr_type = 137U;
    msg.min.assign("CTIRBLCRRTRYBVIWLUNVFQHULLKFKDJNXSOSZPACMMWKHGSJJCDKKHCIDRKJNWQCZSALGLVZZYVEIUEEUDN");
    msg.max.assign("XZTGAFJCOCLFLJBMQPUNCSPEVRLQMJOOTGEWICGW");

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
    msg.setTimeStamp(0.479668119156);
    msg.setSource(49917U);
    msg.setSourceEntity(179U);
    msg.setDestination(7409U);
    msg.setDestinationEntity(39U);
    msg.name.assign("TTUJBMYTZUPNWTKQHYAMZUSUAYLEXZRMTEWBMMXJIOMQEMBWXCARXDEPXDKWRONDVQJYEIEYJAGIROJNLASCCRHNYTGYTHCYPOGNOKJQCLLVWRWBAQGFRFSPZLHKCHAGOCZYOKMUAVVSUXCBUAUVFHBKXPYDCLDSBIPXVFIWEDAEZEFNLDQNFQEQPMMZ");
    msg.attr_type = 203U;
    msg.min.assign("MVQCKZWZTSLGSVBYJPXNZPHPQFIQISNVCIXCUMWPNDVANYLPUBEZURAPFRZPYBCZUKFUKSFPQTOAAINYESSBMTXCYHDMXKMBLIUJFIRPHHDDGNZODEOHEFMZGKCMVKMOELQOTLRXQJEIOGYSVQDTAGVPYBWGCEZKJVZCBOUSYXXRRLTNQXOAWCAHKRQLAWSHJENSFBLJUCRIITURBNDXQKH");
    msg.max.assign("XBVPYUUIRYISFTGRVXWAXAWZXNMVHUOOKVLHLOPTLUAMTWBPTUIHNOGDWQOYKLSKEECESQFZGQFGUKROHNLXBDPZMIZAEOBDPCIXFDQUOQEBZSHBVYZPICRDRJIJNMVKLDCJBLSWKGYEMREQRVBVTMGAGWXIYOJKFSJYZWEIWDTMOZUGHRYQANYCFATJRJMNAGFCBZRCNFNPQDELKZCSIMHTBKLXSHCDGPNDSFVQHFEXSTWJKNXPAL");

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
    msg.setTimeStamp(0.307357929382);
    msg.setSource(25163U);
    msg.setSourceEntity(140U);
    msg.setDestination(41073U);
    msg.setDestinationEntity(75U);
    msg.name.assign("BICTMXKPDBNGKNFHYMLIULHKHDSNFZUNPIVRZOBZLDEFVTHEPAVZTMFLFAZCGMLUZKCJCWVPEPSZZHONOWYIONEFDIBWRKAOSGUQOJIUYYBTDOULCCSYGRWWHCLCELSSOMDBXZDERUEBOBTNAXATWY");
    msg.attr_type = 145U;
    msg.min.assign("EHZPBRAGTXBGLSJHFTOGMOTEZLVBWCGRMSYUEYQUKNQOJPYBLQITTIIKSVJLXEPLQHFCJHESILBSFNFEXZULRAFBYSM");
    msg.max.assign("OLNSPSHUMOQPOHGUJAMUCNVAIIXYHAYBOJUXFGEYXVZKSKZIMBFZMTTJWRSDFKMBBPYRRXI");

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
    msg.setTimeStamp(0.838366058041);
    msg.setSource(49896U);
    msg.setSourceEntity(126U);
    msg.setDestination(18457U);
    msg.setDestinationEntity(114U);
    msg.timeline.assign("ABTVYSYZGQQLZFJVTSDYDOJTSJNKQXFVDBWXJIHZUNHVDYPZOVICKJRLXXSAMAHVFZDOOTEDIVEAQSWHRKFXKSWJTSFLNBTNUCAAGLRCOUCUMFOHWCEJZINIMPWPUGJGIYLFNBKEXRWKGRQEGTIOYYXPUCHDCEIKNMMEPUEQOBEBIYPHGUBAHFEVTJOWGRCTKZDIRDFYQGKMZXVMQHCOQBPAPXHRZRSLMUUZLPNBLW");
    msg.predicate.assign("NBJQFFMPKLGVLEOBWHYOARRCMULOTRDJIUWCXGCLHHQNICVBDLQNZTRPZPEMYNXHVPXBMKCGZOFCJWUTDWMIJHKQBYBEKCJUILUATFKTBEEIMRJQZNPLPCWRAKFIGTFETGXUNTDDXJNNIPAAIBEWSVUZILYVOSMRMSW");

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
    msg.setTimeStamp(0.306062950608);
    msg.setSource(46038U);
    msg.setSourceEntity(79U);
    msg.setDestination(37902U);
    msg.setDestinationEntity(70U);
    msg.timeline.assign("MSXNXXYOSOYFFPPZDFWFBURZNRNNDNOQL");
    msg.predicate.assign("AHJUKHTOOKDPGBDJGXTRRSMMLFQNIELDURWXBBVPPOGFKHBJQQJCKJWTSNSUFRCLXMYIXVOBENXMQDOERSUWIXKTFLYAAZCVHDFQZVIXUWBGXYEICZRGQWMDFPSBAVQJRDUJDTKBTGHZQINECKNSAHALWGNVGVPMEZYCSAAJAUCCDYFPSENYFOVREHZWPBGSYLOIUGPODTXAUWYEITUFKKLTCELRRNMQITLYFPJZQLNNJMOZO");

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
    msg.setTimeStamp(0.0332207430067);
    msg.setSource(26237U);
    msg.setSourceEntity(144U);
    msg.setDestination(50667U);
    msg.setDestinationEntity(139U);
    msg.timeline.assign("FVWWZOLWJSFSMNZHLHFOPYDGEU");
    msg.predicate.assign("PPTBYLSQKJSKEXECOGLZNFGOCZFLUWCBDBXWJEIUNAXSVLLYJVYMGEYMCXOQBTIMUNKGTXZZBKQDFKYFAEMIBUTRWW");

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
    msg.setTimeStamp(0.957331560678);
    msg.setSource(38465U);
    msg.setSourceEntity(73U);
    msg.setDestination(58415U);
    msg.setDestinationEntity(239U);
    msg.reactor.assign("GXMHCWVVMTQJSVWKWMZLZRSBFSJTZQBRELYRNADKGALMHZODXKAJDUJNJAFOCEJPYNAIGEITXYXPTLXUUTQREMWPDAWDXYRPYDEIUXTASNYEFNXMUIIBYKDKTSONMFWOPCBOQBEGRWDVBFLGLMBQDVHHKOUQLQVKYDIFRWVQCTZLVLCTMPNCGGFPWMHVRBJGOOUZZKYCSRSHECUXGJHKPZEJFBIAAZVIH");

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
    msg.setTimeStamp(0.888201797644);
    msg.setSource(56698U);
    msg.setSourceEntity(128U);
    msg.setDestination(4371U);
    msg.setDestinationEntity(205U);
    msg.reactor.assign("AJFPRDGZVPKEBVLJTOYNECVSSNMEUWKDSNJHIIOAIUABZDNEFQMMKBSNCIIQLFEFBDDLDUBOTDWSYGZQXAHKQSLVCFLDZMEIFBLMJVNCLGURRNBIEZGORKTWPYIMDCVUGHJXTZ");

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
    msg.setTimeStamp(0.144550003207);
    msg.setSource(3135U);
    msg.setSourceEntity(165U);
    msg.setDestination(36719U);
    msg.setDestinationEntity(111U);
    msg.reactor.assign("TKWAQAILMAFASAQTVPPIGUMRZWJOJTMNIMBFLPOHSWABSCUWGZBYZYBDNTKEKFUFCNDFMQKKLAQMLXVVIJGQSPBTZIYTFYPKGUYSUONSJFXPXPXGMVLCVYFBFHGDILDRRAUNGEVQUVACDBNYJTMBCTHNWXJWFQPIZXRIHDJCLHSJZCOETHIRRWZCHEUMOUXIODEYBSGPWLDSKLZEJMXOHVVKRYK");

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
    msg.setTimeStamp(0.790302306499);
    msg.setSource(57840U);
    msg.setSourceEntity(22U);
    msg.setDestination(61549U);
    msg.setDestinationEntity(11U);
    msg.topic.assign("ONYDPONTVPGADHHDVNXRRVMFRTKCWKYZPSZJRTEJAFSAHEAFVWKGEFQWBQYHHZSVSPNRDLMKXKTWIXXZNDUGJRPHXLBUXPWBLLIUQZJPBYVQNXCGOV");
    msg.data.assign("AUONFLHDBYLIVCWXYNZYTMSFBFGCMNXWQIEQJDOVUNEHFFWAQQEHXGYPKCQGMFRIWUSFDYERGCSHDQVCEPUAWTLRQHUPZOTMDLUMZVBSTLKOAXKCEXETRRTASSKCAQWKIVRUWXGHLMSIIJFADAJDCXZCZFIJJTDGWPKBYSKJGWUSJONNPHJHIKAFUTRKBLZCZ");

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
    msg.setTimeStamp(0.225743471138);
    msg.setSource(53386U);
    msg.setSourceEntity(200U);
    msg.setDestination(41811U);
    msg.setDestinationEntity(222U);
    msg.topic.assign("OEGOQHVQMIHSMNBWUCDPDJUYPAWGNONTLSUAGDNVAFHAJMYWTBYVGA");
    msg.data.assign("EWUGWZBBHNNOMMLQVBRJTLOGTZSOKOERJGCDPXHZCCPBRTTVFNHHXCS");

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
    msg.setTimeStamp(0.716218380422);
    msg.setSource(51014U);
    msg.setSourceEntity(135U);
    msg.setDestination(41703U);
    msg.setDestinationEntity(164U);
    msg.topic.assign("VNUHUDYMBXQLHQNYKWSFANDLLROHJPMMJPCVATKGMYNMSYINGTXZZRTIBFDHREOZHSZXRLBRUMJBQEQYGJFGACVDKZSVNX");
    msg.data.assign("TLFIWOMKJSRBWTLSHCCIBGIHVTOUBSUDHOJYNGGFKNPKQVXWZAJRKBXXQUMOICPYZJPDSTEQEXGHMCFQEBRDWHMGNJIDPYALZLDJHQJMZOMVJSQNLVXQURYZSEQGNQZETKDVLFWZCVATBSESIUYOPZTSYAMDBASKJGXCBXUBEUAAODHRFKVNFIRFCWOWXMRRQCBHUIKNZLI");

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
    msg.setTimeStamp(0.813617039267);
    msg.setSource(63408U);
    msg.setSourceEntity(32U);
    msg.setDestination(50206U);
    msg.setDestinationEntity(92U);
    msg.frameid = 122U;
    const char tmp_msg_0[] = {-29, 36, -56, -111, -88, -76, 104, 92, 3, -19, -7, 17, 32, 110, 81, 81, 117, 77, 36, -100, 9, 6, -76, 84, -41, -121, -127, -24, 72, 82, -18, 35, 39, 57, 98, 10, 16, -33, -42, 11, -42, -94, -128, -29, -46, 34, 84, 79, -81, -103, -52, -115, 2, -112, 51, -126, -115, -80, 97, -9, 14, 113, 6, 62, 22, -68, 3, 38, 97, 90, -60, -37, -3, -43, -41, 117, -22, 83, 18, 101, -42, -100, -10, -16, 40, -44, -24, -5, -48, -79, -98, 26, 71, 120, -37, 0, -83, 8, 121, -72, 50, -31, 33, -3, 46, 7, 27, 90, -4, 61, -65, 49, -69, -71, -60, -88, 75, 74, 1, 112, -96, -62, -87, -32, -63, 95, 25, 22, -93, -76, 87, 55, 2};
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
    msg.setTimeStamp(0.948464015088);
    msg.setSource(63249U);
    msg.setSourceEntity(22U);
    msg.setDestination(32471U);
    msg.setDestinationEntity(242U);
    msg.frameid = 205U;
    const char tmp_msg_0[] = {-89, 109, -88, -57, -33, -27, -18, -108, -10, -26, -23, 96, -86, 54, 20, 12, 81, 56, -9, -52, -39, 28, 70, 80, 39, -122, -121, -99, -12, -64, -107, -12, 89, -48, 38, 113, 44, 93, -48, -127, -15, -88, -12, -124, -27, -120};
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
    msg.setTimeStamp(0.705427537159);
    msg.setSource(14343U);
    msg.setSourceEntity(15U);
    msg.setDestination(55869U);
    msg.setDestinationEntity(84U);
    msg.frameid = 234U;
    const char tmp_msg_0[] = {74, -112, 9, 52, 108, -68, 99, -45, -77, 74, 109, -23, 125, 95, -113, 20, 9, -58, -30, -25, -55, -14, 18, -22, -67, -58, -81, -50, -50, -106, 27, 62, -109, -96, -37, 34, -5, 116, 1, 51, 45, 10, 39, 94, -22, -104, 70, -38, 104, 112, 9, 120, 5, 36, -55, 123, -84, -7, -6, 106, -81, -14, 25, -110, 20, 36, 92, 26, -73, -111, -3, -20, -107, 41, 73, -24, -79, -36, -49, 38, 15, -70, 11, -106, -38, 55, 0, -23, -25, 65, 2, 93, 98, -6, -107, 50};
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
    msg.setTimeStamp(0.464712838336);
    msg.setSource(31305U);
    msg.setSourceEntity(208U);
    msg.setDestination(20647U);
    msg.setDestinationEntity(124U);
    msg.fps = 150U;
    msg.quality = 79U;
    msg.reps = 146U;
    msg.tsize = 207U;

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
    msg.setTimeStamp(0.998421016524);
    msg.setSource(40157U);
    msg.setSourceEntity(141U);
    msg.setDestination(36236U);
    msg.setDestinationEntity(207U);
    msg.fps = 188U;
    msg.quality = 98U;
    msg.reps = 206U;
    msg.tsize = 241U;

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
    msg.setTimeStamp(0.264148663878);
    msg.setSource(10875U);
    msg.setSourceEntity(9U);
    msg.setDestination(43244U);
    msg.setDestinationEntity(101U);
    msg.fps = 233U;
    msg.quality = 38U;
    msg.reps = 209U;
    msg.tsize = 218U;

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
    msg.setTimeStamp(0.514568363647);
    msg.setSource(46855U);
    msg.setSourceEntity(157U);
    msg.setDestination(7879U);
    msg.setDestinationEntity(78U);
    msg.lat = 0.367071717576;
    msg.lon = 0.222819561242;
    msg.depth = 158U;
    msg.speed = 0.368435984736;
    msg.psi = 0.131587000581;

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
    msg.setTimeStamp(0.93437396622);
    msg.setSource(33532U);
    msg.setSourceEntity(31U);
    msg.setDestination(186U);
    msg.setDestinationEntity(164U);
    msg.lat = 0.599451109469;
    msg.lon = 0.693697454193;
    msg.depth = 54U;
    msg.speed = 0.50762671613;
    msg.psi = 0.661887062327;

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
    msg.setTimeStamp(0.645186769644);
    msg.setSource(20836U);
    msg.setSourceEntity(136U);
    msg.setDestination(6633U);
    msg.setDestinationEntity(54U);
    msg.lat = 0.956971828773;
    msg.lon = 0.352662915398;
    msg.depth = 224U;
    msg.speed = 0.918844580192;
    msg.psi = 0.899488599045;

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
    msg.setTimeStamp(0.822714932825);
    msg.setSource(27183U);
    msg.setSourceEntity(68U);
    msg.setDestination(45401U);
    msg.setDestinationEntity(44U);
    msg.label.assign("HMZUXMVDRBZNVAAVMFDFSLBKFHJJVCPIPRPVPGLYGHZFWQBYNNZLBEYUAITRFMXZEWUFCHVNXRWZQGVDSDPUTCAISMTDMJKSQOOLTUWEYXJLJAHIVPHJZRPTXETWJNJSENEKPWGWNUIBKGTSBFOTXDUYNIIEXAOODZHXCLVOPLWHDQKLAG");
    msg.lat = 0.952193611392;
    msg.lon = 0.907749255701;
    msg.z = 0.683339565408;
    msg.z_units = 82U;
    msg.cog = 0.924255729763;
    msg.sog = 0.333576695656;

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
    msg.setTimeStamp(0.21499203053);
    msg.setSource(51802U);
    msg.setSourceEntity(48U);
    msg.setDestination(33715U);
    msg.setDestinationEntity(134U);
    msg.label.assign("UMIYNJICGBZEAGEWAGALBYLMUFPEHVTPHVQAZMIZEDOFVTYXFKG");
    msg.lat = 0.729528523781;
    msg.lon = 0.17892283948;
    msg.z = 0.979696819302;
    msg.z_units = 93U;
    msg.cog = 0.431160719066;
    msg.sog = 0.0243453816833;

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
    msg.setTimeStamp(0.722206479242);
    msg.setSource(3911U);
    msg.setSourceEntity(95U);
    msg.setDestination(7951U);
    msg.setDestinationEntity(156U);
    msg.label.assign("GFSAFGPKELSKJEAWONLJPTGBNAMQVIUPBVHMUFVTLJFWZKKJGYIBKBXEFWJKIVUHLO");
    msg.lat = 0.560231104544;
    msg.lon = 0.729356467712;
    msg.z = 0.089332073266;
    msg.z_units = 26U;
    msg.cog = 0.896760252815;
    msg.sog = 0.00130944510415;

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
    msg.setTimeStamp(0.627285552808);
    msg.setSource(17995U);
    msg.setSourceEntity(46U);
    msg.setDestination(34305U);
    msg.setDestinationEntity(174U);
    msg.name.assign("UJNIIXDQESITIRRUHPWSKZYKZUEBBMFDNJGIHTYPKCUOTVNKHKPXQUHONVTQHRTZFAJHVPCNFPLDLWEPAQNEMHLOBARLLGICIUVXXJRQYKTXJJDQZRAXIEOJXMUGDXJOADGKWUSSYNVPMEWFSNVLHFXYVBWKBTWISGCOPED");
    msg.value.assign("MCFLWFLECBWUCNRTQGYBAAJBWGCSLKKFCWWXNFRYUMRIDINVJJVZBUGYAKFQQQAPTUJPETOESVOPMXNBYATICZOJZUECPWPMBWCTDFTZQTHVRHZHXBIQIHKACRRDGMYNJRPRNXYOIBMLNOEVMEEGUVQDXWHGJILFVUKAONEKDASXLXESOKVVNKYPDJUBFQQAKZXYLMNSLLIDXD");

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
    msg.setTimeStamp(0.725010819734);
    msg.setSource(3001U);
    msg.setSourceEntity(103U);
    msg.setDestination(25695U);
    msg.setDestinationEntity(13U);
    msg.name.assign("OWNYCUSRDQJJBKTHGMDUTOWRRYIHOOVXKHAXALBCTETSIYNFCIAFVCSWMWPEDXFRVXHBXTADPNZASMALOJJNIZBAJHYCSKUYGHCNBNLXQOKEKVCDLSFYPXQKVEC");
    msg.value.assign("CWGUVWGEIAZRRMVVCKIPCYRFTGMFXDAYQUJORQYZPFEYERJTVMBWYINKTXJEQGUTOHSHNJCTIDAYGNPNHPAOQLMUGPUUPLOMXKKGLRIBZPHIJDXGXPASNI");

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
    msg.setTimeStamp(0.753025855791);
    msg.setSource(22433U);
    msg.setSourceEntity(88U);
    msg.setDestination(15937U);
    msg.setDestinationEntity(62U);
    msg.name.assign("UAMEJATDYTGWMDKDFGTUMRVQNOULJHPENBFHJMRJDCLDHZZIQPNLMBMYQWVLXQGEFWJQCSFDICGPSIXYGGYARRLBC");
    msg.value.assign("DRWZCCKHNWFFKDGJSXJSLSWXJSVSXDCACMNKBUXIVFWETIDFXZHONWCTJPHKIEKORGEZBEDMDZLOVPGLSQQGHQCAZBAPPRRCPVMUTDXFYFPYXOYVVKDHULTWPKUVHMILYILKJUNTRLGOBNEDXEMFUPBFXEJWGRAMXSQLEIAIWAFVLYERNQBQYBDHNYCCPCIZQOBTIGTUABMPGUYGAZNHQRSTWORVMMGTZRKOUYJA");

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
    msg.setTimeStamp(0.766866659961);
    msg.setSource(8913U);
    msg.setSourceEntity(92U);
    msg.setDestination(41946U);
    msg.setDestinationEntity(35U);
    msg.name.assign("GZZXXUZSKRDLNRJLGNFZDQRAWYEYSSQVXQSCZVTDMMYMDYSIFQVOLAABJJGAWGIOXCQOHGDLPTYKOGGXJUATAVKKGZFIKPWYUIBOCJEZ");

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
    msg.setTimeStamp(0.888155347676);
    msg.setSource(62855U);
    msg.setSourceEntity(25U);
    msg.setDestination(49271U);
    msg.setDestinationEntity(214U);
    msg.name.assign("QVETGAXKRIHAKMHVKDJXTIBFBAKWFKJDNTWLAUANDUZANEJPBXWLYHOYABKYGRNOFVFORXYHVAZMPXKADVOTVHXWPMQEYLTDDWSGGPZRPJPISTFIXJIMBMLFZCGTQEWLENDMQUITLRKRMOSJMUUCEZWPQSWIYIODEVHLYHZJANFQKSUCEQOGGOCGPXQUBRXDPWLJSUFTBYFSPSRHHLGDONCEY");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("JWVYYKXGUOXPBTLULVDMDSMQPKERZHJLEZJGMIPSPFYMGTXGINPIKFOZZEAFTWBTLKYROUYMBOUYMNTUOZASOBFZQYJWESVWMGLRPFOUAUSGCICXWTPQVCYVFDDHKLSSTEFZMNHSX");
    tmp_msg_0.value.assign("PEUEAHSOPM");
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
    msg.setTimeStamp(0.976518050404);
    msg.setSource(35264U);
    msg.setSourceEntity(198U);
    msg.setDestination(30946U);
    msg.setDestinationEntity(188U);
    msg.name.assign("UFALRXADDPNHRYLHHEKAFVLGZKSDBXIWKYWRRIUHYROQVSVAPACXBUECLFFYQBBMIGTULCUELZZBBMXFKVCMFAZAHXJIRIXSSN");

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
    msg.setTimeStamp(0.821525712636);
    msg.setSource(32967U);
    msg.setSourceEntity(225U);
    msg.setDestination(64876U);
    msg.setDestinationEntity(81U);
    msg.name.assign("SQSLHMCNDEVZIZBSPYRKCRFIOGYSOQVNDHTFKJYKQPPRAHJCRGHHILHPEXZCUJLONGFAXIVBTQLNTGNKMHJXQPPBYQOWJFKJZIDAAWQOJFHYFNZUYGUVWGAAIYRLMNAMMTCWUNCLJDYKCBDFHREKSMVOLXXMWCTVZXXWLTAVELBPISOEPTATBOSQIRESFSVUE");
    msg.visibility.assign("OFSSXVMTIZRGIRXYWIVCGTAYQZSUKSNAL");
    msg.scope.assign("UBLJMGHQEQIWVMSHTTXYCFYXIXMBORUWFPRGFYIRRAEKNALXPBRKQJCJFVVNHMSBEIRDTJAASNOCCUTIDGVPKLEZXWDKNDPJSCHHANYXJCWQRSZNNVNDDNZDTKLPYAGGBRACM");

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
    msg.setTimeStamp(0.494043611613);
    msg.setSource(2246U);
    msg.setSourceEntity(5U);
    msg.setDestination(30030U);
    msg.setDestinationEntity(60U);
    msg.name.assign("UQPRVEZQJYKBRORGBSBUVXVGLPNSRAHYPZVSWADJNZLIFMPTITRNDITZAQPX");
    msg.visibility.assign("ZOYKJMZQMGLNUQJRXHG");
    msg.scope.assign("BLYTJWXLEILCEVCKOKKKLBOQWTZAPUPOMTIWWRJBQENNPISEVBQPFGIZNNCDUJVGRARRVOVEUSPKUGXZCQNAHKFUWUBLRLZFXKFSDJDXZVCGHRZDPSXZCDNQOJNFXFSPJAGENVUIHOTWGHUMYBZIHLAYEIQYOMXMRWGTJSYTXKDPWEBNTQYKIMIOYDFXFMDYCMYSGWAGHCAHASHODZCBTRSHALVSELBCVMEFZD");

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
    msg.setTimeStamp(0.923296343644);
    msg.setSource(17288U);
    msg.setSourceEntity(241U);
    msg.setDestination(49018U);
    msg.setDestinationEntity(112U);
    msg.name.assign("JRTATCXWLUDWIRRLHUDDFACGLAFMPNICJHABREEW");
    msg.visibility.assign("RSRFZZDXYKTMOGCNYQSVUKQDG");
    msg.scope.assign("JJIAZQQARYQSJJFXMXTFMDCIFXWGNLCRWYIFUMGTJGOSOZUZFARQDGZEOWDMHAICVKKNCBSRMXJACYLPWFWJZKVJZXTULEFWABKRWKSKLGUYUBUURPGMTQMNJCOYKOOPSYOTZLHDYPPVQIMNBQCPOHHNEFGETLEB");

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
    msg.setTimeStamp(0.114007178166);
    msg.setSource(60109U);
    msg.setSourceEntity(68U);
    msg.setDestination(3501U);
    msg.setDestinationEntity(152U);
    msg.name.assign("UPYTKGYUOVPVCJXERSBRCNIDLLRHBLBWJBUEEZKJDXQRHJASIYUDNHVLUHHESUHQSCWTYZKQTVEIXRMDDRVGTNOIBDUUBHOFCMPEOWZJNCAFLIYAKVQWBQOVMTAPZESGXXOGWWWLQCPPAOVZGAZYWAQMJZGWCRYHLVHITQDGDDLMATGJWLEIXYYGFKYNBOFNFIDQMSOJGFNTIUUKRPHMSFLXTKMMXEBXKRBZIVNRACJZKSA");

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
    msg.setTimeStamp(0.907984357007);
    msg.setSource(15978U);
    msg.setSourceEntity(17U);
    msg.setDestination(54806U);
    msg.setDestinationEntity(35U);
    msg.name.assign("AQTBSMYHJIULSFDUGKOTPBBRMJMWDGAWHXXNCWZFCVPELBGVQKCPLLPVLXDUEYFDPYUYFQGEMTHQZHLIEZNBJTRXIFYODWMXCGTNEKNCFXLVOODBQSVGVVDIFQUASYHWJZVPSLFJBJJMPNCOKDMROFBUGYNKWNTQZGSGURCRLRCXUJIEKAXZASNDTXGUPHTVWS");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("QMKMJEHPFBSYKBDKSATESZMAEVKNNWNPQLLZIGSWOGRQLZZOSNVTWHTYTNLYXVUYWKJFNMMCCHDAHVFRIESOALIBJQCOVGWGPCXUAPZELAHOJWWOTVZUPJSNEPUXYYHRMLKIXTODBBIZVEISGOQTXRVKJNOUPUYWXHXSBGMBQUJLADE");
    tmp_msg_0.value.assign("PNWGDIMQDLDXHSVYVBFRBUVUWPKTAWNUIGOLMCEWZYDMCOEBTCYKQSFIMEUSDUDHOLJRLAXKLCKTALFGEIONOSGTNTGQHYROHTEWPLNQXIFWRBEPDCRFFGLPRPZBVCUZZEDJCXW");
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
    msg.setTimeStamp(0.707002993492);
    msg.setSource(65216U);
    msg.setSourceEntity(114U);
    msg.setDestination(51994U);
    msg.setDestinationEntity(245U);
    msg.name.assign("NKGZRNJLOGBXBQLYMVQNNVCTRMTHISQJHIWYEUBXKKRECOUWXTHSENWDFEOOZKEWWYZZACSMARVHGTDUXDUCKNMJVAIRELEIRQVXTZYCONHJPUKJBWXP");

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
    msg.setTimeStamp(0.344918814968);
    msg.setSource(32221U);
    msg.setSourceEntity(150U);
    msg.setDestination(14302U);
    msg.setDestinationEntity(227U);
    msg.name.assign("ZNGXIKHYAKXASRZXRVGYLWNYNJRZHYWQGSKPXDRHDZCXBSMLAEFDQUJBFMTCCIDRQWFGQFUVMWQKHAUKMDPQPDNFSMDTUFSMHLATXRTPKAVEJVOYZINKUDBRQYTXOIRHOUVCAIPOVJFSJLVCIBPNWZNMELBIJFVOXYUHELQPGYWOQCILAKVOCIZEVTWOXOCMUZLXBBBQIZFUCGWWEKPNGSJGTASRUYSNJDTLWPMAFTGEJTHYH");

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
    msg.setTimeStamp(0.145311922914);
    msg.setSource(12612U);
    msg.setSourceEntity(45U);
    msg.setDestination(31289U);
    msg.setDestinationEntity(112U);
    msg.name.assign("HKFTAYTGTSLIZQKOYKTFHJLUDKLMJLIDPZFTCGHWCMVLNANNYEMFKUFJUPJMFYHDAEBBYTAOURQPBMLNJRKPMMGSFXZACAWDDWLHGYPQEULNUVVBOAEAMOZVZNSTBTKJXKQYXDZQWSAHZRPLDHOSC");

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
    msg.setTimeStamp(0.0242286083524);
    msg.setSource(3344U);
    msg.setSourceEntity(65U);
    msg.setDestination(27717U);
    msg.setDestinationEntity(87U);
    msg.name.assign("DSAHRXFVWOALDQUVAGXDVEKEWLOHSVPUUOJLTKWAHNQUSBHTEQHAYVJNSMYMOZURYXRQGZGDXCAMKVMTMBBJKOYBEKGXEEFNNGUTIJULKDIF");

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
    msg.setTimeStamp(0.239051662163);
    msg.setSource(145U);
    msg.setSourceEntity(224U);
    msg.setDestination(62361U);
    msg.setDestinationEntity(6U);
    msg.timeout = 2368961760U;

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
    msg.setTimeStamp(0.788014289325);
    msg.setSource(65077U);
    msg.setSourceEntity(1U);
    msg.setDestination(58149U);
    msg.setDestinationEntity(105U);
    msg.timeout = 488462303U;

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
    msg.setTimeStamp(0.183377982921);
    msg.setSource(19008U);
    msg.setSourceEntity(180U);
    msg.setDestination(28523U);
    msg.setDestinationEntity(48U);
    msg.timeout = 1363249843U;

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
    msg.setTimeStamp(0.12589487539);
    msg.setSource(17034U);
    msg.setSourceEntity(32U);
    msg.setDestination(60309U);
    msg.setDestinationEntity(52U);
    msg.sessid = 3488221878U;

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
    msg.setTimeStamp(0.124597090013);
    msg.setSource(62207U);
    msg.setSourceEntity(251U);
    msg.setDestination(19378U);
    msg.setDestinationEntity(34U);
    msg.sessid = 3774804647U;

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
    msg.setTimeStamp(0.533917206452);
    msg.setSource(27136U);
    msg.setSourceEntity(9U);
    msg.setDestination(50909U);
    msg.setDestinationEntity(1U);
    msg.sessid = 3009212732U;

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
    msg.setTimeStamp(0.828037271829);
    msg.setSource(14115U);
    msg.setSourceEntity(69U);
    msg.setDestination(39777U);
    msg.setDestinationEntity(194U);
    msg.sessid = 628805725U;
    msg.messages.assign("UFCBEEFJLOHSMHOSVAXYFPUDSGX");

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
    msg.setTimeStamp(0.627850148812);
    msg.setSource(52102U);
    msg.setSourceEntity(171U);
    msg.setDestination(20931U);
    msg.setDestinationEntity(216U);
    msg.sessid = 928768519U;
    msg.messages.assign("GEGGZTRZYSSZNFKAGRJZTKQYXGJBFCQJLVKMHIJTHUPFBGADJLBHGKEAHQNBDMOFRFTUPNTYCRVCMEBGCUEHESRJQZVOCFZPKWLTVPNKGSCMNDLBVLHCBNDQRUFVXVYQASXZDIIXPCOHYMLEEUXYDXQLWRZMEPMLIIOWVFAMVWNCJHUBAPSFROOXUDEDLJHYADOPQOZQTIRIIWUWSSASMKWMWXYYXVSCWZFPKQIOEBU");

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
    msg.setTimeStamp(0.712929828121);
    msg.setSource(45618U);
    msg.setSourceEntity(139U);
    msg.setDestination(35075U);
    msg.setDestinationEntity(228U);
    msg.sessid = 3741526028U;
    msg.messages.assign("CAMIXLKABSNBNGGFVFXTDSLMGKEFXGHHGILKASQQPDZVCESIPDXRMFWJPJMQHLMPTWAPILZMXUWUDVFKBFLHEYAGSCUGHFVEAVJYQILGOOIZWPUPBQTOTYYEZFXYLJCUUSQOERCBBHDXDMNSTEOWUYNIQYKJNXZRIEGORJDBKCHKQKRSWWTWRDZ");

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
    msg.setTimeStamp(0.702211045124);
    msg.setSource(21029U);
    msg.setSourceEntity(239U);
    msg.setDestination(53154U);
    msg.setDestinationEntity(252U);
    msg.sessid = 1816252566U;

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
    msg.setTimeStamp(0.759188802886);
    msg.setSource(22856U);
    msg.setSourceEntity(91U);
    msg.setDestination(924U);
    msg.setDestinationEntity(130U);
    msg.sessid = 7924974U;

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
    msg.setTimeStamp(0.0676475846234);
    msg.setSource(62823U);
    msg.setSourceEntity(218U);
    msg.setDestination(6994U);
    msg.setDestinationEntity(53U);
    msg.sessid = 2713067906U;

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
    msg.setTimeStamp(0.792062365092);
    msg.setSource(24564U);
    msg.setSourceEntity(50U);
    msg.setDestination(58614U);
    msg.setDestinationEntity(165U);
    msg.sessid = 1463578809U;
    msg.status = 75U;

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
    msg.setTimeStamp(0.571034765746);
    msg.setSource(9724U);
    msg.setSourceEntity(83U);
    msg.setDestination(6241U);
    msg.setDestinationEntity(240U);
    msg.sessid = 121698336U;
    msg.status = 251U;

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
    msg.setTimeStamp(0.731851898309);
    msg.setSource(59550U);
    msg.setSourceEntity(251U);
    msg.setDestination(17477U);
    msg.setDestinationEntity(168U);
    msg.sessid = 628867184U;
    msg.status = 14U;

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
    msg.setTimeStamp(0.812017541043);
    msg.setSource(42353U);
    msg.setSourceEntity(251U);
    msg.setDestination(41883U);
    msg.setDestinationEntity(190U);
    msg.name.assign("UAZHHZUYSCAPMVDNKVZTPWARUUOXZQUJOGHCEZBEMWJSEYBOFGRLTLAODPHNFMVGY");

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
    msg.setTimeStamp(0.868156392114);
    msg.setSource(14308U);
    msg.setSourceEntity(75U);
    msg.setDestination(38675U);
    msg.setDestinationEntity(240U);
    msg.name.assign("UFWSIEGASYFMVNAQEIDQIMPABFISWXODHERJJVYKWWZJTLHBPMTUCZPMLSPNRONRSKWVGKSTHEHMIOCOLZFUGHGBXULVKDNQIPKVBDXIVCSYFLJPFWVQSXQUARZGC");

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
    msg.setTimeStamp(0.0997419700698);
    msg.setSource(10257U);
    msg.setSourceEntity(177U);
    msg.setDestination(20252U);
    msg.setDestinationEntity(232U);
    msg.name.assign("YXULXYIGLAJBDRLBDKGLXRHMGBGIXQTCKAJWPWIXZQNJXITHIXDUUHVFJSRXXKQSCWTDXVSKFEUEGYKOFCTFPPZWUJHKIBRMNGIQNWCPTVZHSUTVSYLP");

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
    msg.setTimeStamp(0.395175208657);
    msg.setSource(40216U);
    msg.setSourceEntity(175U);
    msg.setDestination(51901U);
    msg.setDestinationEntity(98U);
    msg.name.assign("JFUZINTOBXTFVIYWBKBHMNZEMX");

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
    msg.setTimeStamp(0.893812083113);
    msg.setSource(2892U);
    msg.setSourceEntity(121U);
    msg.setDestination(3398U);
    msg.setDestinationEntity(215U);
    msg.name.assign("FCXSONGELRWSEVTWCXPQNDZFMOQYLPDMURPBZLKTUYDVCGLOITEAEYTFXZRLYRFWYGKKHIQHKUFGWMTWTVNWSAUEBQSAIAHXAWCKNPIOVZUNV");

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
    msg.setTimeStamp(0.641194888537);
    msg.setSource(50135U);
    msg.setSourceEntity(184U);
    msg.setDestination(61327U);
    msg.setDestinationEntity(241U);
    msg.name.assign("DXVUYQPYEUOCRCRNSJUVLULBGXWGZSETEPEBQHTEZDJKKGRNJBVHTVMXNMXEZSLZODTGVBGVWBWQUZKFPXBJMYRPSWVHQZLTBTKDAPTLPUEFUUIWMIZGFTHBKJSINAYQEIDBCXMKWRILIFXCFFRWYMAUMNAPYNLFGCLHCAOKGDWQORROTOAUSRYFISQJXZJYQECVGSSDYDKYJHONPCXZIOQBHRDHAQOMSFVPWNLKDKIOIHJNVHCNMF");

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
    msg.setTimeStamp(0.476184480338);
    msg.setSource(34911U);
    msg.setSourceEntity(62U);
    msg.setDestination(24560U);
    msg.setDestinationEntity(232U);
    msg.type = 238U;
    msg.error.assign("WUXYGSTIGGHXRLONMPPGXEZYMZGCCABMTDUORZOXOFNTODWIFDNPGVHRYLPLRLJDRUTXVXPBKZUQ");

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
    msg.setTimeStamp(0.551372078625);
    msg.setSource(31864U);
    msg.setSourceEntity(249U);
    msg.setDestination(5142U);
    msg.setDestinationEntity(129U);
    msg.type = 159U;
    msg.error.assign("CJJLKGQNADUPRIEZQZZPKWJHLPVGKMGFZCEDRHWNKLNIASSKJACWYJZNEGVASEJTIONWEZOYRJZ");

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
    msg.setTimeStamp(0.155575883212);
    msg.setSource(59642U);
    msg.setSourceEntity(188U);
    msg.setDestination(53308U);
    msg.setDestinationEntity(81U);
    msg.type = 195U;
    msg.error.assign("FFSXKYAPTJEVCNVNSLAVFGRIQYJIMKNWYOCCZPISTZQDTQYBAHQAMQYMTLXPTIIVLDGLLHKJIPSDOPLPBEHNJEFGOCRRDXMLONAZOGIVTFNNUSMTGQKWQYIEBBJRETQWKFUVZVUNOPRWNUDCXJFEZQHDZVQEIZKYXKCAHMBAMTYGGMKVGHOWABMYLWXIEDSBXCXEZLWOHXUFSUCWVFBGWAY");

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
    msg.setTimeStamp(0.505093788695);
    msg.setSource(917U);
    msg.setSourceEntity(178U);
    msg.setDestination(33802U);
    msg.setDestinationEntity(62U);
    msg.seq = 47835U;
    msg.sys_dst.assign("HCSIYYBSPPHUZCVJDRFKKJMXLYMCQRADBWVYBVZKYPAHWXADKSTOQMAKBRNHXKNILRAQVHLMPHWJTIVYNWDLJOVOFNOATFMWBFMSFFETUZTBXLGUGDRNKCCWYETNQQSACRTJIIMGXYFPHKUZJRUBEGJGPNYSWLIUWEPUCUTBQJOCVIUCINCNERWFVGEEGHTDVZIODDSQBMMDOAGO");
    msg.flags = 34U;
    const char tmp_msg_0[] = {21, 37, -90, 107, 42, 41, -85, -76, 118, -114, 123, 85, -75, -126, 27, -50, 102, 69, 37, -49, -65, -34, -78, 49, 73, 19, 65, -125, 121, -83, 51, -62, 15, -6, 47, -45, 13, -123, 106, -38, 33, 63, -57, 38, 75, 18, -101, -38, -103, 13, -116, 41, 107, -82, -107, -47, -62, 121, 9, -112, 71, 54, -128, -13, -28, -42, 13, -15, -47, 122, 6, -64, 118, 122, 74, 41, -17, -93, 39, 17, 80, -27, 2, 59, 77, 57, -114, 29, 71, 82, -35, 86, -85, 124, 9, -38, -111, -65, 89, -40, -7, -37, 105, -105, -87, -92, 70, 78, -92, 21, -62, -13, -6, -124, 125, -4, -90, 121, 26, 12, 114, 100, 45, -121, 88, -54, 118, 41, -106, -6, 66, 6, 109, -82, 61, 30, -43, 103, -51, 103, 19, -120, 111, -100, -63, 29, 82, 123, -19, 66, -121, 8, -88, 42, 28, 97, 51, -53, -45, -39, 46, -18, -26, -32, -12, -39, 121, 51, 16, 109, 121, 49, 67, -21, -38, 73, 8, 4, 8, -119, -58, -42, 62, 84, 51, -46, 2, 63, 22, -81, -8, -71, 53, 31, -53, 1, -96, 103, 119, -77, -118, -127, -21, 116, -127, -77, -35, 47, -68, -43, -116, 100, 71, -40, 42, 33, -22, 44, -10, -122, 85, -1, 64, -87, 13, 105, 100, 80, 91, -10, -107, -88, 78, -52, -102, 46, 95};
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
    msg.setTimeStamp(0.186287597167);
    msg.setSource(51958U);
    msg.setSourceEntity(80U);
    msg.setDestination(7565U);
    msg.setDestinationEntity(32U);
    msg.seq = 3858U;
    msg.sys_dst.assign("THAZUFCLTHWSTBNIZVVUODCBHLYYBUYCEDSHVQZPWOFWUFDRTTVQSIAWNPBSQVABYWWJRBLQNA");
    msg.flags = 171U;
    const char tmp_msg_0[] = {-64, -45, -64, 49, -109, -33, 82, 32, 70, 38, -102, -11, 89, 52, 88, 80, -75, 29, -3, -21, 46, 111, -16, -9, -126, -63, -124, 78, 118, -28, -94, -77, 27, 63, -103, 117, 96, 85, 96, -75, 45, -78, -103, -80, 98, -62, -58, -81, -108, 28, 50, -30, -123, 119, 25, -16, -53, 38, -31, -50, -46, -30, -14, -109, 74, 26, 118, -101, -124, 76, -62, 38, -16, -20, 81, -10, 37, -34, 53, 68, 115, -61, -101, -2, 57, 121, 85, 14, 35, 54, 37, -120, 11, 42, -17, -30, 73, -18, -86, -37, -97, 80, 111, 64, -63, -30, 126, 56, 23, -26, 70, -65, 90, 109, -5, 100, 7, -61, 93, 111, -83, 77, 14, 8, -21, -23, -95, 54, 47, 30, 61, -57, 38, 64, -15, -93, -15, 82, 85, -128, 111, 27, -116, -17, -28, 42, -77, 85, -25, -28, 8, 2, 71, 36, -111, 11, 110, -16, 99, -118, 63, -71, -90, 0};
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
    msg.setTimeStamp(0.0267995989183);
    msg.setSource(24533U);
    msg.setSourceEntity(174U);
    msg.setDestination(55334U);
    msg.setDestinationEntity(46U);
    msg.seq = 4865U;
    msg.sys_dst.assign("RACOHYDRHYYUFHVBFCTPEBGHZVSOQVGXPIWEEYWMCLVIY");
    msg.flags = 174U;
    const char tmp_msg_0[] = {-11, -118, 79, -41, 80, -68, -55, 7, -58, -18, -20, -73, -28, -93, -35, -46, 113, -110, 10, 8, -40, 115, -102, 52, 4, 125, -75, -64, 23, -78, 1, -119};
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
    msg.setTimeStamp(0.867685864049);
    msg.setSource(16765U);
    msg.setSourceEntity(214U);
    msg.setDestination(51239U);
    msg.setDestinationEntity(70U);
    msg.sys_src.assign("PAGOEKJXHCGPGUAIYWIDBYJBIYGDVKDHYCUOTUVGRRIVXIMTCCJFQNRESHJRHKUSSFELWLKOTWSZZRXVCEMYKRCOPEFFMCZABLRSPQMXNLWSGJBLQIWEXLFHRBZQOFUYRJLNQNBXVQQLWBVTSKVDDHEBYPICHEOPJZEYPKITLZAOTKPCWNDXMAHTWADNGDOXRCMZEJUMKQNUMMNSJFUAFYZZJHBSPMONGDWIVIO");
    msg.sys_dst.assign("GBSAJLULYYUDZJDIQOOAWLTSTOWKHAHIRYVJKHPPFBCVNEZCTGPWDSUJWNOVYQWCUYPGBPYRXKMMHTAZTUGGVPPXIIQMMBFNRTWMTROWCIOIVVFKRETXJJULWHZZMODLHMCCJROXKYHVRFLQIEFQPXKAZCBKHIRXTVCRNXMJDNNGAKMHDEBXZKDFSESDFNNBCREDWYOKJEUDLQCAUQZGTYAJEQSZBHSPIWSSLVEUIAULGEB");
    msg.flags = 77U;
    const char tmp_msg_0[] = {-81, -25, 97, 40, 86, 30, 119, -49, 53, -33, 126, 77, -55, -81, -106, 105, 1, 117, -30, -82, 5, 73, -107, 103, -50, 75, -31, -110, -100, -11, -6, -123, 87, 111, 64, 44, 26, -53, 12, 30, 96, -68, 29, -98, -98, -54, -62, 4, -51, -78, -16, -96, 15, 29, -75, 6, 59, -45, -118, -97, -107, 119, 69, 84, -65, 80, -2, -13, -80, 77, 72, 107, 40, 87, 37, -47, 12, 78, -111, 73, -67, 103, -75, 58, -81, 12, -29, -56, 119, 70, 31, 14, -33, -30, 71, 31, -89, 10, -85, -108, -92, -122, 104, 99, -93, 19, -113, 84, 109, 48, -16, -50, -48, -62, -65, 55, 69, 13, 35, -32, 66, -125, -43, -13, 37, -65, -21, 1, -127, -122, 53, -21, -118, -66, -63, 55, 62, -14, 92, 59, 62, -8, 2, 92, 7, 54, -98, -88, 2, -95, -127, -58, 65, -90, -103, -107, 103, 18, 11, -80, 86, 60, 73, 44, -8, -80, -90, 97, 3, 120, 47, 106, 99, 126, -5, -46, -49, -72, -86, -23, -24, 74, -85, -36, 37, 26, -127, 66, 67, 112, 49, -118, -100, 18, 1, 121, 106, 82, -60, -83, -116, -74, -32, -124, -76, -106, 116, -124, -50, -85, 44};
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
    msg.setTimeStamp(0.226066558502);
    msg.setSource(46734U);
    msg.setSourceEntity(143U);
    msg.setDestination(62157U);
    msg.setDestinationEntity(211U);
    msg.sys_src.assign("ZPBCOJPBUCPRFXAHUJCRLYXTAAQRXOEOMSEZJTNKPIJYEUGNZYESMPJSCQNBVDFOCQKTDMCAFSEHSGACJJKCIZGZQIPBPRMBDDRBRUSDHHTXSWGZZQYYVAVFGLFLMHNWYSVXPOAVCVGTWKMHIIBKLDKNDKZYOVMK");
    msg.sys_dst.assign("MONXYCWURAEESKHENUQVTNQMYBNVRDTKAMYWQXPOPHXFKRHWZGAOVVFANZVHGKLSRHYUBPQHGBNCQCGHGRFVRSTJRAOXMCZIUBILINBPENOVTPSASCEDOTWFLWUAGKICDLKWSDFUJQYZADSULVLCSGMOHYQSXCZJBAHYJEKMIFWJWFMQCJJMLLXBTLUTBSOTXPKRPQFEZBZFAQDECDGEIIKIFOZWMRDDTTZXXOYEKZDIRUUPGGNMPJYJYHX");
    msg.flags = 238U;
    const char tmp_msg_0[] = {-28, -67, -74, -92, -122, -18, -88, -90, 99, -22, -112, -30, 103, -54, 59, 93, 115, -47, -41, 17, -52, -24, -54, -27, 125, 118, 121, -94, 23, 96, 86, -110, -103, 70, 0, -105, 29, 94, 68, -100, -68, -76, -91, 46, 126, 67, 30, -31, 96, 51, 54, 18, 11, -35, 67, -112, 5, 9, 31, -3, 26, -71, 46, 97, 71, -114, -68, 117, 71};
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
    msg.setTimeStamp(0.983975415594);
    msg.setSource(29497U);
    msg.setSourceEntity(12U);
    msg.setDestination(15522U);
    msg.setDestinationEntity(113U);
    msg.sys_src.assign("QFXSLNMMKWTAMGYVTXVAAPLFZYNPDZJUIKZRZJWIUHAPPBYIEULPQNNRAFOHDESVAZOQHUFFBJQUEXTZTMBFOFAZBNHLYCWIPTTFXMJSRQVBMMCLEUCQHWBWDEKMDGLWAKNCXVXCXORIXBCCAVRW");
    msg.sys_dst.assign("NRFYXSCUPEKTQUPOKLLLSZJTRVPZILXGOWUXNFOLSZXBJAACUUTEVMPFKJZHRZXFTGGDDZAHEYKMPQVDEWKHSGSJEUDHRWSMEQNCVZNFNIDGYKDSYXEQBYGNBZZKTCOFRJRIGKFCIESSDTVRFVBEJONBCJOWQPYYWFAOYMJQOTWCHSMWRTZDMJWBAPHXPBNWDHXIBHVLHPYNIAQOJYHLMGQGUCVRXOARTBUKMLBLIEWQDLUMIVANIUV");
    msg.flags = 78U;
    const char tmp_msg_0[] = {-30, 98, -101, -104, 72, -58, 68, -31, 8, -50, -106, 103, 115, 90, 39, 58, -79, 59, 94, 73, -128, -78, 99, 112, -96, -115, -59, 93, -93, -5, -103, 20, -72, 2, 94, 104, 110, -77, -40, 22, 17, 113, 113, -55, 82, -7, -93, 67, -87, 34, -4, 73, -123, -119, -93, -85, -98, 52, -60, -83, 67, -71, 125, 100, 17, 116, 125, -118, -87, -29, 4, 3, 77, -125, -90, -76, 113, -58, -22, 19, -18, 69, 90, 116, -45, -121, 113, 55, 57, 70, -26, -53, 84, 109, -21, -22, -71, 63};
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
    msg.setTimeStamp(0.491794704681);
    msg.setSource(65512U);
    msg.setSourceEntity(208U);
    msg.setDestination(41714U);
    msg.setDestinationEntity(24U);
    msg.seq = 65235U;
    msg.value = 217U;
    msg.error.assign("PSNDKOJSWSCJHRJBWIALYHCGATDWXZYQIFPDNSCTRPHHZGBVFTPFTKSELTLKODYZNIOCIBJGRLRMJZUHLKDNOQZIZNIXQEGGCABOCPNPEDUOQMFIAWKMFEZEBQRUYEVZAVOLCVVTBMST");

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
    msg.setTimeStamp(0.947717172037);
    msg.setSource(52705U);
    msg.setSourceEntity(36U);
    msg.setDestination(29079U);
    msg.setDestinationEntity(125U);
    msg.seq = 1884U;
    msg.value = 145U;
    msg.error.assign("PTEZJYUCNBPWBFBGFVPCHCMQJYEDZYKAMFLUUTVEQGCABKXFKTAMTKGLHHQTKQIKRSNHNLHQDYDBOVMUDDF");

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
    msg.setTimeStamp(0.533873011646);
    msg.setSource(17221U);
    msg.setSourceEntity(49U);
    msg.setDestination(23423U);
    msg.setDestinationEntity(163U);
    msg.seq = 58648U;
    msg.value = 62U;
    msg.error.assign("DIQBYBNFWSDOWVVJGXCRPYDCJQFBLOBRKSGSKRWKCEYZAYRZIWQAISVESLWATXDIUPASJZRKZMOQWXOLHQLCJVKXMJXINMDUDDCMGEZGFTYHEBMMOZ");

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
    msg.setTimeStamp(0.113849121497);
    msg.setSource(19856U);
    msg.setSourceEntity(232U);
    msg.setDestination(15743U);
    msg.setDestinationEntity(204U);
    msg.seq = 45802U;
    msg.sys.assign("UFJFIMPEWUIAJOUYNFJVTCNMDWKZNZGINGYBAXPBOPAZIZTGBEHLJGXJATMQ");
    msg.value = 0.859508880789;

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
    msg.setTimeStamp(0.268477276358);
    msg.setSource(64816U);
    msg.setSourceEntity(228U);
    msg.setDestination(34719U);
    msg.setDestinationEntity(153U);
    msg.seq = 40504U;
    msg.sys.assign("ZPXCJZBWKRZFWIQPWKVHCFWLSAUDGJYDURTYNDLAPEPRNLDTIUJAGIONNSLOOAGGTRYBXFDI");
    msg.value = 0.531230826301;

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
    msg.setTimeStamp(0.223131488436);
    msg.setSource(32477U);
    msg.setSourceEntity(82U);
    msg.setDestination(42579U);
    msg.setDestinationEntity(219U);
    msg.seq = 23902U;
    msg.sys.assign("DFMNBVDGHRSTDPCZJOILUOWQTXKZFTEKFYFIJRQMGOWACQSMHAWJWJQPWMLVYRABGZOMLZWFZCHCUXSQPJNVZCONYRHKLXWAEPBDQDVAPBKEZIGBGUDZTKAUVYRJFXUSPBLDRXSHIELFMEGUBYFAY");
    msg.value = 0.941087243932;

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
    msg.setTimeStamp(0.385991924279);
    msg.setSource(6076U);
    msg.setSourceEntity(104U);
    msg.setDestination(50377U);
    msg.setDestinationEntity(225U);
    msg.action = 64U;
    msg.longain = 0.340055815807;
    msg.latgain = 0.281001177514;
    msg.bondthick = 2214000696U;
    msg.leadgain = 0.629307029389;
    msg.deconflgain = 0.392008668666;

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
    msg.setTimeStamp(0.878329237225);
    msg.setSource(13187U);
    msg.setSourceEntity(40U);
    msg.setDestination(26570U);
    msg.setDestinationEntity(89U);
    msg.action = 135U;
    msg.longain = 0.328312500586;
    msg.latgain = 0.249451753198;
    msg.bondthick = 2192221704U;
    msg.leadgain = 0.118413348112;
    msg.deconflgain = 0.295300169619;

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
    msg.setTimeStamp(0.908113436766);
    msg.setSource(55470U);
    msg.setSourceEntity(220U);
    msg.setDestination(57219U);
    msg.setDestinationEntity(14U);
    msg.action = 220U;
    msg.longain = 0.765909059598;
    msg.latgain = 0.746064538017;
    msg.bondthick = 3128810004U;
    msg.leadgain = 0.668679701714;
    msg.deconflgain = 0.878583501146;

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
    msg.setTimeStamp(0.989069185251);
    msg.setSource(43171U);
    msg.setSourceEntity(27U);
    msg.setDestination(1722U);
    msg.setDestinationEntity(76U);
    msg.err_mean = 0.679895433207;
    msg.dist_min_abs = 0.581288828087;
    msg.dist_min_mean = 0.949194290135;

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
    msg.setTimeStamp(0.642776842944);
    msg.setSource(13631U);
    msg.setSourceEntity(155U);
    msg.setDestination(44850U);
    msg.setDestinationEntity(128U);
    msg.err_mean = 0.778455749175;
    msg.dist_min_abs = 0.675844232505;
    msg.dist_min_mean = 0.805462035973;

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
    msg.setTimeStamp(0.855388492916);
    msg.setSource(52847U);
    msg.setSourceEntity(196U);
    msg.setDestination(41992U);
    msg.setDestinationEntity(114U);
    msg.err_mean = 0.726371326106;
    msg.dist_min_abs = 0.0940200522901;
    msg.dist_min_mean = 0.0481304725067;

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
    msg.setTimeStamp(0.337207236347);
    msg.setSource(56350U);
    msg.setSourceEntity(14U);
    msg.setDestination(16345U);
    msg.setDestinationEntity(239U);
    msg.action = 254U;
    msg.lon_gain = 0.320586551466;
    msg.lat_gain = 0.993928180204;
    msg.bond_thick = 0.297314543461;
    msg.lead_gain = 0.999086396636;
    msg.deconfl_gain = 0.308251163826;
    msg.accel_switch_gain = 0.965163628689;
    msg.safe_dist = 0.098929348066;
    msg.deconflict_offset = 0.694102232724;
    msg.accel_safe_margin = 0.809487089549;
    msg.accel_lim_x = 0.820939062711;

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
    msg.setTimeStamp(0.367485303992);
    msg.setSource(57275U);
    msg.setSourceEntity(157U);
    msg.setDestination(31194U);
    msg.setDestinationEntity(28U);
    msg.action = 5U;
    msg.lon_gain = 0.146078984239;
    msg.lat_gain = 0.568244192766;
    msg.bond_thick = 0.488115567839;
    msg.lead_gain = 0.578594093976;
    msg.deconfl_gain = 0.893144915448;
    msg.accel_switch_gain = 0.867128524124;
    msg.safe_dist = 0.587700264364;
    msg.deconflict_offset = 0.207992843295;
    msg.accel_safe_margin = 0.537618601345;
    msg.accel_lim_x = 0.0130098663546;

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
    msg.setTimeStamp(0.0245461264998);
    msg.setSource(16793U);
    msg.setSourceEntity(239U);
    msg.setDestination(40416U);
    msg.setDestinationEntity(100U);
    msg.action = 13U;
    msg.lon_gain = 0.477588786807;
    msg.lat_gain = 0.738509501587;
    msg.bond_thick = 0.983979778952;
    msg.lead_gain = 0.356722970335;
    msg.deconfl_gain = 0.0503640297431;
    msg.accel_switch_gain = 0.111744444647;
    msg.safe_dist = 0.788195614531;
    msg.deconflict_offset = 0.848890577425;
    msg.accel_safe_margin = 0.570543923041;
    msg.accel_lim_x = 0.222343357989;

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
    msg.setTimeStamp(0.959829545597);
    msg.setSource(46941U);
    msg.setSourceEntity(40U);
    msg.setDestination(60077U);
    msg.setDestinationEntity(251U);
    msg.type = 73U;
    msg.op = 174U;
    msg.err_mean = 0.989124517961;
    msg.dist_min_abs = 0.899000927837;
    msg.dist_min_mean = 0.493416335569;
    msg.roll_rate_mean = 0.41857458656;
    msg.time = 0.484967610945;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 50U;
    tmp_msg_0.lon_gain = 0.460453801569;
    tmp_msg_0.lat_gain = 0.374231606697;
    tmp_msg_0.bond_thick = 0.623751304589;
    tmp_msg_0.lead_gain = 0.786189814472;
    tmp_msg_0.deconfl_gain = 0.794808948799;
    tmp_msg_0.accel_switch_gain = 0.201608422239;
    tmp_msg_0.safe_dist = 0.768977785169;
    tmp_msg_0.deconflict_offset = 0.138391384109;
    tmp_msg_0.accel_safe_margin = 0.769067924581;
    tmp_msg_0.accel_lim_x = 0.805968077388;
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
    msg.setTimeStamp(0.392275888781);
    msg.setSource(15941U);
    msg.setSourceEntity(220U);
    msg.setDestination(51303U);
    msg.setDestinationEntity(53U);
    msg.type = 43U;
    msg.op = 108U;
    msg.err_mean = 0.879244194413;
    msg.dist_min_abs = 0.816783902659;
    msg.dist_min_mean = 0.421089521284;
    msg.roll_rate_mean = 0.674115205231;
    msg.time = 0.928208268951;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 60U;
    tmp_msg_0.lon_gain = 0.922245984569;
    tmp_msg_0.lat_gain = 0.598595675829;
    tmp_msg_0.bond_thick = 0.573942067519;
    tmp_msg_0.lead_gain = 0.591057333588;
    tmp_msg_0.deconfl_gain = 0.871309498979;
    tmp_msg_0.accel_switch_gain = 0.190257024759;
    tmp_msg_0.safe_dist = 0.209013584015;
    tmp_msg_0.deconflict_offset = 0.945921854525;
    tmp_msg_0.accel_safe_margin = 0.950772976393;
    tmp_msg_0.accel_lim_x = 0.913824928607;
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
    msg.setTimeStamp(0.805774447261);
    msg.setSource(13541U);
    msg.setSourceEntity(130U);
    msg.setDestination(16340U);
    msg.setDestinationEntity(64U);
    msg.type = 233U;
    msg.op = 35U;
    msg.err_mean = 0.655465330412;
    msg.dist_min_abs = 0.144719294532;
    msg.dist_min_mean = 0.0675027240237;
    msg.roll_rate_mean = 0.94115086499;
    msg.time = 0.997070330108;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 12U;
    tmp_msg_0.lon_gain = 0.0100514869201;
    tmp_msg_0.lat_gain = 0.887504824695;
    tmp_msg_0.bond_thick = 0.465954711351;
    tmp_msg_0.lead_gain = 0.787690740266;
    tmp_msg_0.deconfl_gain = 0.921568768225;
    tmp_msg_0.accel_switch_gain = 0.708281793624;
    tmp_msg_0.safe_dist = 0.396222977928;
    tmp_msg_0.deconflict_offset = 0.863752516389;
    tmp_msg_0.accel_safe_margin = 0.718750360221;
    tmp_msg_0.accel_lim_x = 0.733152446859;
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
    msg.setTimeStamp(0.27731103044);
    msg.setSource(4497U);
    msg.setSourceEntity(146U);
    msg.setDestination(11825U);
    msg.setDestinationEntity(244U);
    msg.lat = 0.642861688744;
    msg.lon = 0.602035369077;
    msg.eta = 1152242657U;
    msg.duration = 10546U;

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
    msg.setTimeStamp(0.141870969569);
    msg.setSource(60611U);
    msg.setSourceEntity(143U);
    msg.setDestination(18410U);
    msg.setDestinationEntity(189U);
    msg.lat = 0.340328479402;
    msg.lon = 0.945572452931;
    msg.eta = 804457407U;
    msg.duration = 60886U;

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
    msg.setTimeStamp(0.229774771209);
    msg.setSource(13327U);
    msg.setSourceEntity(41U);
    msg.setDestination(3673U);
    msg.setDestinationEntity(68U);
    msg.lat = 0.21188734084;
    msg.lon = 0.0887982582935;
    msg.eta = 229129772U;
    msg.duration = 27031U;

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
    msg.setTimeStamp(0.439943391969);
    msg.setSource(43262U);
    msg.setSourceEntity(253U);
    msg.setDestination(54466U);
    msg.setDestinationEntity(74U);
    msg.plan_id = 46444U;

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
    msg.setTimeStamp(0.160335123097);
    msg.setSource(30141U);
    msg.setSourceEntity(127U);
    msg.setDestination(64531U);
    msg.setDestinationEntity(71U);
    msg.plan_id = 16097U;
    IMC::SoiWaypoint tmp_msg_0;
    tmp_msg_0.lat = 0.481371432669;
    tmp_msg_0.lon = 0.943734687164;
    tmp_msg_0.eta = 1869140278U;
    tmp_msg_0.duration = 10585U;
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
    msg.setTimeStamp(0.427090400629);
    msg.setSource(58726U);
    msg.setSourceEntity(135U);
    msg.setDestination(45796U);
    msg.setDestinationEntity(81U);
    msg.plan_id = 63368U;

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
    msg.setTimeStamp(0.812801895767);
    msg.setSource(45940U);
    msg.setSourceEntity(11U);
    msg.setDestination(8762U);
    msg.setDestinationEntity(213U);
    msg.type = 176U;
    msg.command = 53U;
    msg.settings.assign("FAYFHNOZTLSUBIRSREDFMTZDQRAZHWQMUDZHIPPKBQYCITDXFLHFCJPLMMQAEUPZHDYSNOWKRGAEIBOXRTHKWIOBSULBKDZSIOQAJDBXQDGYZFSGUCPUKATGLQVAEIPNWWSVLVVKQHAMSIGWYCMLOLWXJDJFTCJYYOKVEPRPNKBTCTRXGJGQVZLJVFXNYBEHSAXLEJGKTQMGIHPMEKCJN");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 64U;
    IMC::SoiWaypoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.0856208320356;
    tmp_tmp_msg_0_0.lon = 0.265991525408;
    tmp_tmp_msg_0_0.eta = 890139265U;
    tmp_tmp_msg_0_0.duration = 3159U;
    tmp_msg_0.waypoints.push_back(tmp_tmp_msg_0_0);
    msg.plan.set(tmp_msg_0);
    msg.info.assign("EYVFDHKJMFGTZKWNWILECZTKUOBKRMPCLKBARSEIXVAMORWBDWFGRMVSHYUIHCVCRNBSEBHDXXFIMVHLPTGTQZTHFZUXLYTABFXKRYDUNEQMDOMMSECHZXTBFKVPUKABNNLHPWVZQGLPSWQRE");

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
    msg.setTimeStamp(0.838171928033);
    msg.setSource(42693U);
    msg.setSourceEntity(94U);
    msg.setDestination(18699U);
    msg.setDestinationEntity(246U);
    msg.type = 41U;
    msg.command = 94U;
    msg.settings.assign("BPXYJVTSGIWMMVEAQNNPHCLKHYKAUETXTZQUYFQFTAAOYWCURRVBCDFNPGKCXLNKGUIEYEMUOLKSIHOQRCYWTCALDVNFKYSNROKURDLPBMDJWXAETGNQIAAWFJFWVXGFBYEJGOPTT");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 50967U;
    msg.plan.set(tmp_msg_0);
    msg.info.assign("TLGKMYUNNRBXWCJXBEFPOPSSHRDZGRSJAYTQJEIQWYWCHSUFDVNAAYRBWSYXOURHABVAKGXGLCKCXHDQZSVLPKPWLUDTVQIBHQHCHTVZBMQPDXYEGMEGTHECIMRLLKAWQARCJJ");

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
    msg.setTimeStamp(0.147571778012);
    msg.setSource(37344U);
    msg.setSourceEntity(228U);
    msg.setDestination(44613U);
    msg.setDestinationEntity(211U);
    msg.type = 67U;
    msg.command = 22U;
    msg.settings.assign("ICZBSFJGWXKUXLYIIPWAEFTXAIQIAXEQVVHBGHUNJWTOVKHJKOUIDYBOMPATHYUGPMFRCDKYECGMUSYOIDZDJEPLNHSWARYMVMNNBFCNSAZDGQEOKSZLNBNDZTJUKGSTRWLMSREEBLJURJKKOXWBCRCQOUWMIZUYPPEMTTWFCQXGHJFCGVPGQXVLMIG");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 40441U;
    msg.plan.set(tmp_msg_0);
    msg.info.assign("ZPHYCTRXZEJXUJKRJIPHIHZMODBXLWKJTGSVWKRHWGIJMAATEGSAODMXLLCLQFZBRSMZZEYFHNMTRLVWKFQHDRFAQMQEDEKNQLMXJMIFDCUDYBCOOBKROOBLQCCOSDWNFQHCGGTIISRJYVLDCHFW");

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
    msg.setTimeStamp(0.364087227928);
    msg.setSource(1929U);
    msg.setSourceEntity(178U);
    msg.setDestination(14873U);
    msg.setDestinationEntity(142U);
    msg.state = 212U;
    msg.plan_id = 58842U;
    msg.wpt_id = 232U;
    msg.settings_chk = 4141U;

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
    msg.setTimeStamp(0.296189375484);
    msg.setSource(39653U);
    msg.setSourceEntity(236U);
    msg.setDestination(51830U);
    msg.setDestinationEntity(193U);
    msg.state = 41U;
    msg.plan_id = 54024U;
    msg.wpt_id = 90U;
    msg.settings_chk = 25039U;

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
    msg.setTimeStamp(0.0225427323867);
    msg.setSource(10923U);
    msg.setSourceEntity(86U);
    msg.setDestination(39689U);
    msg.setDestinationEntity(143U);
    msg.state = 138U;
    msg.plan_id = 37857U;
    msg.wpt_id = 203U;
    msg.settings_chk = 31942U;

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
    msg.setTimeStamp(0.472649179599);
    msg.setSource(23062U);
    msg.setSourceEntity(194U);
    msg.setDestination(198U);
    msg.setDestinationEntity(101U);
    msg.uid = 32U;
    msg.frag_number = 59U;
    msg.num_frags = 237U;
    const char tmp_msg_0[] = {8, -24, -127, -122, -54, 15, 39, 52, -105, -30, 30, -92, -60, -91, -54, -67, 47, 30, 66, -84, 48, -57, 99, -31, -71, -107, 103, 115, 66, -71, 2, 59, -51, -77, -85, -22, 86, -105};
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
    msg.setTimeStamp(0.0548276118946);
    msg.setSource(37067U);
    msg.setSourceEntity(221U);
    msg.setDestination(15430U);
    msg.setDestinationEntity(78U);
    msg.uid = 76U;
    msg.frag_number = 192U;
    msg.num_frags = 183U;
    const char tmp_msg_0[] = {118, 63, 47, -24, -108, 94, 59, 73, 114, -105, -112, 62, -42, -58, -20, -54, -121, 91, -71, -73, 5, 1, -89, -2, -15, 22, 78, 124, -10, -39, -86, -37, -42, -56, -58, 93, 17, 104, -47, 11, -57, -1, 100, -115, 45, 115, -55, -114, -39, 75, -68, -102, -55, -68, 85};
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
    msg.setTimeStamp(0.459516227887);
    msg.setSource(17341U);
    msg.setSourceEntity(168U);
    msg.setDestination(2853U);
    msg.setDestinationEntity(145U);
    msg.uid = 114U;
    msg.frag_number = 199U;
    msg.num_frags = 157U;
    const char tmp_msg_0[] = {-102, -91, -48, -35, 119, -70, -3, -120, -43, 16, -31, -28, 121, 121, 51, -85, -7, 109, 52, 31, 14, -87, -84, 119, -87, -70, -47, 56, -62, -33, -114, -50, -67, 79, 63, 1, -128, -47, -68, 77, -51, 25, -121};
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
    msg.setTimeStamp(0.687303552578);
    msg.setSource(50515U);
    msg.setSourceEntity(36U);
    msg.setDestination(54859U);
    msg.setDestinationEntity(2U);
    msg.content_type.assign("OUGTQKMDBVTOHJTLCGIHEGSIOBVWYTUEIFAGGQELTEVGPWTKPCHKAALONEVECKRPYETJDZWOGCNQSDOLRXWVJUDOFDRWHRKRAXMQNPQFDABPDNMCFBBMBIGIUYNWFMIZJKUYZRSIPBWZXUNXQUXIADNNOEMEZSYMGYNSIUHSHGPLJVMYHXCSTRZDNLIKUDZYBQLXPZFQRAXPRFJHVABXRFVHWWSVJACYPHQJJTE");
    const char tmp_msg_0[] = {78, 81, -47, 53, -104, 1, -107, 109, -54, 9, -97, 76, 28, -6, -18, 77, 86, -70, -56, 76, -67, 1, -71, 121, 80, 72, 67, -55, 25, 51, 34, -118, -72, -100, 79, -51, -22, 100, 25, 87, 75, 80, -105, -97, 55, -128, 124, 58, 61, -63, 38, -24, 34, 0, -9, -22};
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
    msg.setTimeStamp(0.103699002443);
    msg.setSource(10179U);
    msg.setSourceEntity(7U);
    msg.setDestination(25792U);
    msg.setDestinationEntity(226U);
    msg.content_type.assign("BJFWGCGNIYIPNNBLRPFPVCBILLTJXROAJNZDFNMDPVPRCCHPJGAYRDLDYDPQMTSPAOMQGQZWLHSXRXNEXMEQGHZJFZTUTAHGLFUPOUZUAINLSCEBTCEWUEECSPKXGOBCAWSJBAEODTYYQHVTARQSCYWZBKTKIURMMWZHYNKFGMIOSJWAMRXWIKOUOHEXKFVCIWKQDVMXFQSJTHHQFRXZKBEODD");
    const char tmp_msg_0[] = {55, -110, 56, 69, -52, -28, -68, -49, 84, 126, 82, 102, 41, 113, -110, -65, -7, 80, 45, -27, -127, -65, -2, -80, 48, -107, 68, -33, -5, 9, -31, 38, 48, 125, -15, -100, 109, 54, 111, -52, 123, 109, -111, 89, 123, 56, -90, 80, 109, 14, 97, -12, -102, 84, -85, -102, 110, 104, 80, -88, -115, 34, -14, 108, 15, 82, 68, 94, -9, 49, 92, -51, -28, -8, 63, -90, -113, -61, 62, 88, -128, -69, -75, 66, -64, -114, -87, 23, 29, -78, -86, -107, 6, 47, -17, -19, -6, -69, -65};
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
    msg.setTimeStamp(0.227426323738);
    msg.setSource(14183U);
    msg.setSourceEntity(215U);
    msg.setDestination(58490U);
    msg.setDestinationEntity(154U);
    msg.content_type.assign("MEVRGLQULZYGDGDBNAVMJECWVXUFNZUTERZETQIKSEBPBNOCHOOTPBDNPPEUUCPQHCPVCTISQHJZYCFKSMGZARXEAYWPSPGGKAFNYRFVAEJDHIJFOJMOYWNYSWHJTAXGBFMETCTCJUMRHDGABBINSXQIZMGJFZFIQLAXQJSIQVONZLHBKSZXSJDLYCVDVVOIWYHWMLFSLANDFXIHLUDKLKDIREWKRCXKNORKWBHVWOT");
    const char tmp_msg_0[] = {-60, 116, -127, -8, -98, -106, 30, 76, -125, -124, -76, -115, -69, -4, -117, 102, -89, -90, -30, -7, 32, 108, -22, 14, -94, -120, 105, 42, 31, -37, 88, -57, -32, 71, -49, 116, -107, -85, 68, -48, -19, 46, 76, -85, -117, 110, 53, -66, -103, -106, -97, -120, 28, -50, 23, -99};
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
    msg.setTimeStamp(0.890679559418);
    msg.setSource(46119U);
    msg.setSourceEntity(161U);
    msg.setDestination(53240U);
    msg.setDestinationEntity(22U);

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
    msg.setTimeStamp(0.261947830385);
    msg.setSource(54656U);
    msg.setSourceEntity(34U);
    msg.setDestination(40854U);
    msg.setDestinationEntity(189U);

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
    msg.setTimeStamp(0.417038209223);
    msg.setSource(20249U);
    msg.setSourceEntity(41U);
    msg.setDestination(40686U);
    msg.setDestinationEntity(90U);

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
    msg.setTimeStamp(0.210033948929);
    msg.setSource(11547U);
    msg.setSourceEntity(163U);
    msg.setDestination(6372U);
    msg.setDestinationEntity(134U);
    msg.target = 28852U;
    msg.bearing = 0.595334317523;
    msg.elevation = 0.145676234744;

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
    msg.setTimeStamp(0.0709278749789);
    msg.setSource(14844U);
    msg.setSourceEntity(181U);
    msg.setDestination(2416U);
    msg.setDestinationEntity(236U);
    msg.target = 19571U;
    msg.bearing = 0.669675624988;
    msg.elevation = 0.389213306301;

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
    msg.setTimeStamp(0.597074186491);
    msg.setSource(65352U);
    msg.setSourceEntity(230U);
    msg.setDestination(20975U);
    msg.setDestinationEntity(208U);
    msg.target = 24130U;
    msg.bearing = 0.539985363371;
    msg.elevation = 0.19336383851;

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
    msg.setTimeStamp(0.0891912368239);
    msg.setSource(55248U);
    msg.setSourceEntity(212U);
    msg.setDestination(40339U);
    msg.setDestinationEntity(244U);
    msg.target = 25854U;
    msg.x = 0.409791917433;
    msg.y = 0.372014898655;
    msg.z = 0.369194793992;

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
    msg.setTimeStamp(0.824831000418);
    msg.setSource(17846U);
    msg.setSourceEntity(232U);
    msg.setDestination(29410U);
    msg.setDestinationEntity(142U);
    msg.target = 52176U;
    msg.x = 0.576574935111;
    msg.y = 0.844675521868;
    msg.z = 0.246525808386;

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
    msg.setTimeStamp(0.749963256645);
    msg.setSource(28208U);
    msg.setSourceEntity(66U);
    msg.setDestination(23683U);
    msg.setDestinationEntity(114U);
    msg.target = 32308U;
    msg.x = 0.223854568586;
    msg.y = 0.363187016743;
    msg.z = 0.712069334405;

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
    msg.setTimeStamp(0.701554083944);
    msg.setSource(40950U);
    msg.setSourceEntity(217U);
    msg.setDestination(53542U);
    msg.setDestinationEntity(242U);
    msg.target = 37680U;
    msg.lat = 0.795465192987;
    msg.lon = 0.0668309678792;
    msg.z_units = 241U;
    msg.z = 0.68949189983;

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
    msg.setTimeStamp(0.874100488205);
    msg.setSource(21032U);
    msg.setSourceEntity(193U);
    msg.setDestination(19162U);
    msg.setDestinationEntity(184U);
    msg.target = 14355U;
    msg.lat = 0.582939978829;
    msg.lon = 0.312794827018;
    msg.z_units = 50U;
    msg.z = 0.402683390666;

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
    msg.setTimeStamp(0.129307907266);
    msg.setSource(16196U);
    msg.setSourceEntity(142U);
    msg.setDestination(33368U);
    msg.setDestinationEntity(198U);
    msg.target = 30733U;
    msg.lat = 0.271353988703;
    msg.lon = 0.791747900629;
    msg.z_units = 216U;
    msg.z = 0.344399361202;

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
    msg.setTimeStamp(0.353311079412);
    msg.setSource(7785U);
    msg.setSourceEntity(52U);
    msg.setDestination(8556U);
    msg.setDestinationEntity(222U);
    msg.locale.assign("FXVNZAZGVIUHZSRRQYJRXKQCYRNDMDJEGBJNULUFLAYLFTLDSOKAUAHOZSEOHPXSMABUNNQAJTWRXZWPHLBGDSQVTLSKWMNMVDYXPWXCRUBIOIFLCENGEZQNHWCEISAFTWOAXCQTBMOLYFGBFOHMMYIUBPVRRHJWBYTVCFVZZN");
    const char tmp_msg_0[] = {-22, 113, -41, -40, -64, 44, -64, 87, -119, 20, 3, -36, -126, -63, 0, 93, -77, 44, 87, -116, -88, 95, -121, 98, -38, 33, 71, -89, 37, -62, 126, -17, 25, -76, 103, 39, -93, -37, -49, -30, -68, 36, -56, 114, 69, 50, 0, 26, 47, 25, -76, -66, 8, 95, 44, -71, -125, -42, -99, 68, -20, -96, 99, -111, 104, -89, -100, -6, 94, -73, -118, -95, 43, -80, 95, 44, -70, 26, 106, 102, -74, 4, -55, -10, 98, 57, 98, -10, -49, -95, 34, -124, 65, -102, -95, 22, -59, -67, 14, 63, -94, 57, -29, -105, -30, -69, -7, 14, 112, 46, -50, 9, -95, 126, -122, 40, -40, -90, 105, -11, 25, -8, 29, -36, 71, 80, -119, 121, 54, 110, -39, -6, -92, 71, -67, 44, -17, 65, 90, -10, 25, -48, 12, -62, -44, -91, -88, -43, -54, 120, -115, 79, -123, 82, 96, -72, -94, 113, -22, 54, 70, 54, 37, 114, -106, 109, -46, -12, 15, -65, 39, 53, 56, 49, 48, -24, -101, -15, 90, -59, -64, 117, 20, -93, -42, 15, -87, -33, -24, -65, 11, -95, -5, -69, 12, -40, -90, -63, 0, 71, 79, 26, 70, 4, -110, -24, 27, 1, 10, -79, 6};
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
    msg.setTimeStamp(0.70178850839);
    msg.setSource(487U);
    msg.setSourceEntity(162U);
    msg.setDestination(30760U);
    msg.setDestinationEntity(118U);
    msg.locale.assign("RVIQZUWWIQUAXFAHA");
    const char tmp_msg_0[] = {40, 8, -106, -121, 4, -123, 119, -14, 90, -83, 35, -56, 90, 29, 81, 5, -81, 56, -95, -88, -66, -76, 54, 61, -128, 37, -36, 89, 31, -52, -57, 77, -55, -28, 88, -9, 11, -45, 59, 35, 86, 89, 66, 16, -105, 100, 7, -4, 20, 3, 49, 40, -53, -100, 34, 81, -31, -48, 24, 32, -123, 11, 120, -94, 126, -9, 117, -108, -15, 14, 76, -87, -27, 56, 88, 15, -79, 31, -50, -102, 112, 89, 88, -88, -117, -31, 9, -70, 110, -109, -39, 15, 26, -34, 75, -116, 38, 15, -78, 65, 35, 63, 4, -100, 76, 78, 20, -55, 116, -49, 117, -92, 116, -123, -102, -13, 32, 97, 14, -92, -2, 94, -74, 41, 84, -110, -63, -23, 12, -12, -99, 52, 109, 39, -37, 47, 51, 85, -65, 18, -3, -79, 4, 35, -24, 73, 32, 80, 105, -42, 72, -35, -102, -41, -23, 68, -112, -58, -128, -45, -54, -105, 126, -20, -108, -57, -121, 50, -60, -109, -69, -125, 64, 57, -103, 107, -77, 90, -127, 88, 64, -14, -72, -59, 72, -80, 13, 114, -20, 39, -1, 50, -25, -37, 121, -119, -74, 108, 108, -75, 104, 39, 80, -91, -2};
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
    msg.setTimeStamp(0.189493435852);
    msg.setSource(11024U);
    msg.setSourceEntity(194U);
    msg.setDestination(282U);
    msg.setDestinationEntity(87U);
    msg.locale.assign("SYUEUEWLIVVSTPNRBILHYVTOGZOMCMVUJATAEXOOSBFYICTMMAKDYMAZFMSPWHYPXIHVOAPYNHDJAPDKPXFKFHQUIDBZMWEIBVZCZSILHGASJFWCKGJIXVBFNYRGTRHOTOVBWO");
    const char tmp_msg_0[] = {107, 14, -121, -72, 73, -11, -40, 117, 44, -105, -20, -61, 71, -17, 33, -11, 45, 17, -65, 104, 76, -53, 2, -54, 122, 16, 95, 9, -9, -50, -110, -8, 46, -116, -53, -4, -43, -15, -101, -106, 101, -8, 57, -53, -82, 122, 19, 90, -104, 7, 108, 53, 74, 42, -114, -114, -41, -45, -65, -114, 50, 89, -124, 119, -29, -7, 93, 39, 119, 70, 74, -115, 109, -36, 58, 36, 37, -91, 45, 79, 21, 40, 42, -40, -107, 30, -117, -10, -4, -109, 121, -47, 45, 26, -13, -49, 7, 49, -48, -95, -44, 20, 111, 87, 19, 124, -50, 122, -116, -16, -63, 106, -34, 123, -113, -119, 64, -51, 125, 39, -93, -51, 120, 120, -46, 17, 56, 113, -83, -55, 108, -62, 22, -4, 88, -17, 69, -42, 29, 106, 56, 99, -84, -26, -45, 18, -27};
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
    msg.setTimeStamp(0.771591159992);
    msg.setSource(29392U);
    msg.setSourceEntity(44U);
    msg.setDestination(53593U);
    msg.setDestinationEntity(238U);

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
    msg.setTimeStamp(0.521086752172);
    msg.setSource(49603U);
    msg.setSourceEntity(199U);
    msg.setDestination(26173U);
    msg.setDestinationEntity(171U);

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
    msg.setTimeStamp(0.0295524699034);
    msg.setSource(38399U);
    msg.setSourceEntity(25U);
    msg.setDestination(51497U);
    msg.setDestinationEntity(237U);

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
    msg.setTimeStamp(0.646395770601);
    msg.setSource(18788U);
    msg.setSourceEntity(116U);
    msg.setDestination(17123U);
    msg.setDestinationEntity(0U);
    msg.camid = 115U;
    msg.x = 29899U;
    msg.y = 43384U;

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
    msg.setTimeStamp(0.168176365659);
    msg.setSource(24983U);
    msg.setSourceEntity(58U);
    msg.setDestination(60235U);
    msg.setDestinationEntity(46U);
    msg.camid = 10U;
    msg.x = 57144U;
    msg.y = 7985U;

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
    msg.setTimeStamp(0.3431980243);
    msg.setSource(29908U);
    msg.setSourceEntity(147U);
    msg.setDestination(11310U);
    msg.setDestinationEntity(164U);
    msg.camid = 83U;
    msg.x = 6019U;
    msg.y = 58932U;

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
    msg.setTimeStamp(0.750535180421);
    msg.setSource(61090U);
    msg.setSourceEntity(6U);
    msg.setDestination(36264U);
    msg.setDestinationEntity(214U);
    msg.camid = 72U;
    msg.x = 49976U;
    msg.y = 11881U;

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
    msg.setTimeStamp(0.913387073785);
    msg.setSource(58599U);
    msg.setSourceEntity(5U);
    msg.setDestination(38372U);
    msg.setDestinationEntity(166U);
    msg.camid = 7U;
    msg.x = 46085U;
    msg.y = 33381U;

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
    msg.setTimeStamp(0.154522111661);
    msg.setSource(3016U);
    msg.setSourceEntity(67U);
    msg.setDestination(7550U);
    msg.setDestinationEntity(170U);
    msg.camid = 105U;
    msg.x = 23828U;
    msg.y = 64607U;

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
    msg.setTimeStamp(0.0948509617736);
    msg.setSource(33526U);
    msg.setSourceEntity(84U);
    msg.setDestination(8177U);
    msg.setDestinationEntity(171U);
    msg.tracking = 153U;
    msg.lat = 0.635319348381;
    msg.lon = 0.406389966406;
    msg.x = 0.00547198267844;
    msg.y = 0.37129960304;
    msg.z = 0.362092763923;

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
    msg.setTimeStamp(0.852515367303);
    msg.setSource(13139U);
    msg.setSourceEntity(58U);
    msg.setDestination(6435U);
    msg.setDestinationEntity(55U);
    msg.tracking = 5U;
    msg.lat = 0.811991939693;
    msg.lon = 0.545389678824;
    msg.x = 0.442230774017;
    msg.y = 0.346290674825;
    msg.z = 0.827355814775;

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
    msg.setTimeStamp(0.972672978886);
    msg.setSource(55907U);
    msg.setSourceEntity(18U);
    msg.setDestination(57255U);
    msg.setDestinationEntity(57U);
    msg.tracking = 27U;
    msg.lat = 0.70439864465;
    msg.lon = 0.654339602582;
    msg.x = 0.996751142609;
    msg.y = 0.0427933223779;
    msg.z = 0.884049218616;

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
    msg.setTimeStamp(0.583194997468);
    msg.setSource(55297U);
    msg.setSourceEntity(122U);
    msg.setDestination(54428U);
    msg.setDestinationEntity(55U);
    msg.target.assign("WBCZKEUCWJCJUUEHQTWHACWAOEQYBBSMHTEIWPSHPLKKRFYUESJNTAEKOQJLHFMYKUYLBZIBVDTCWQVXARMNOMRZLBATQVMQVUVPOFNXXQIINHWXZLJLT");
    msg.lbearing = 0.815162186654;
    msg.lelevation = 0.106868159301;
    msg.bearing = 0.111509511436;
    msg.elevation = 0.963320553167;
    msg.phi = 0.266644615296;
    msg.theta = 0.593227805642;
    msg.psi = 0.980205336947;
    msg.accuracy = 0.840259260359;

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
    msg.setTimeStamp(0.766623420833);
    msg.setSource(13478U);
    msg.setSourceEntity(152U);
    msg.setDestination(32963U);
    msg.setDestinationEntity(187U);
    msg.target.assign("UJBFUJWELKBNYCAEJEEUUUFBPVOXVZJDJAWEISGTBHXYXRIXRNSRCRJCBTLSSVCKPHDIUJBKYGBTKQYFQZWIWYFSLCDIZNITLGOMZONJJTYDYNMKLHNHGWRRMHEGQEXPDFWPTPPANYQPYVOZGPFOMSVIHGL");
    msg.lbearing = 0.0839357457633;
    msg.lelevation = 0.135824044745;
    msg.bearing = 0.672450929571;
    msg.elevation = 0.167224438695;
    msg.phi = 0.749219906832;
    msg.theta = 0.882182453576;
    msg.psi = 0.140447184898;
    msg.accuracy = 0.128579443277;

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
    msg.setTimeStamp(0.368218532533);
    msg.setSource(38193U);
    msg.setSourceEntity(72U);
    msg.setDestination(64164U);
    msg.setDestinationEntity(157U);
    msg.target.assign("JLVNGGBFNZZYREESHWVKLTJCYLPRQTBCAHIQQAWCBKLEUWIVURIWMEIWOCFRFSGFEOMYFJGZPFUAZSIXMOPVIKNKAVMTQNYUZAKXZRGJEEPVN");
    msg.lbearing = 0.686170070717;
    msg.lelevation = 0.439186390363;
    msg.bearing = 0.456404021717;
    msg.elevation = 0.997843080333;
    msg.phi = 0.00152841529458;
    msg.theta = 0.056997217853;
    msg.psi = 0.499847774481;
    msg.accuracy = 0.901523315371;

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
    msg.setTimeStamp(0.0345219925534);
    msg.setSource(2456U);
    msg.setSourceEntity(232U);
    msg.setDestination(43712U);
    msg.setDestinationEntity(104U);
    msg.target.assign("YDACRCPNGIDFMNZQTLMZMQWFTDRUP");
    msg.x = 0.307448651133;
    msg.y = 0.544743221506;
    msg.z = 0.711954720061;
    msg.n = 0.804009877248;
    msg.e = 0.233536436987;
    msg.d = 0.855941413542;
    msg.phi = 0.874189102405;
    msg.theta = 0.76962635945;
    msg.psi = 0.398359922049;
    msg.accuracy = 0.0142908467846;

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
    msg.setTimeStamp(0.978733827424);
    msg.setSource(12976U);
    msg.setSourceEntity(182U);
    msg.setDestination(34504U);
    msg.setDestinationEntity(173U);
    msg.target.assign("VIWCZLHUCFPHTJKAERHTLQMEXSDSAQLDRUVLUMYGQSXWHXNEYBWVWEBNZTYUQJYKSMRBGKOOOKQGQQVTZNIOIBQPXKBTDSAXITMPFKRYXXIWALHDWNDKYHNYZNAAFJERVLKPULWWQIUJZHBGBYJKCSXZVGHZQDVBWFRUSJDHSCOXSCPGRPXGPTOCADDITGYCUMEFFFCMNBZMAZANBNFWRTNOUJJGJKSUMFATOPP");
    msg.x = 0.721941411237;
    msg.y = 0.185378875073;
    msg.z = 0.703974580909;
    msg.n = 0.334852774608;
    msg.e = 0.107400594921;
    msg.d = 0.476326725485;
    msg.phi = 0.800193045932;
    msg.theta = 0.358811745156;
    msg.psi = 0.20630177958;
    msg.accuracy = 0.0916919633083;

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
    msg.setTimeStamp(0.693552787449);
    msg.setSource(22016U);
    msg.setSourceEntity(106U);
    msg.setDestination(16189U);
    msg.setDestinationEntity(215U);
    msg.target.assign("GCKZCVYMUCWHQNKAFLRRSDPICNUQENNRAFDLJLEFBUEMGHROOIJJBNJNDXDDBSCXRKZNDRYQSXTZHZXYLJIYFTQIRWAGMPOCWJXKXPIOHXPOPJMWUDHPWGUTFPYXAQWOPKBGCGVYLZZSYLIDESOOLVCQMWSHLWCTULRYHAKNSVJISELGVGACSFTQMQIFEMUITTPVBDJRPTVEBJEEKUBR");
    msg.x = 0.445799384202;
    msg.y = 0.550203411361;
    msg.z = 0.982652616288;
    msg.n = 0.574281950105;
    msg.e = 0.112866518076;
    msg.d = 0.251938212294;
    msg.phi = 0.211818728407;
    msg.theta = 0.28585097585;
    msg.psi = 0.745977720847;
    msg.accuracy = 0.299983938782;

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
    msg.setTimeStamp(0.533769038933);
    msg.setSource(24497U);
    msg.setSourceEntity(184U);
    msg.setDestination(55846U);
    msg.setDestinationEntity(152U);
    msg.target.assign("UHGMJZAEVAFSUNADLPVGDPQVQWBHBNQWVOWZKCLOGQKBASTBDZEONSCUHYGGFOUHGTJQTVCNBAWVVWGTKHOLCBKHNBMKPLCUFIHBFQRRRMXXTVFJHUEEZANSIFTXJVCXUIYDOLAFGFDIWRXMEOALXRIKWSVFSRYRYLSRUBMPMNLZKGRYLYEZXINXHEYJETKPQEPDCMJNDYMRYSUIG");
    msg.lat = 0.0726708306369;
    msg.lon = 0.52520924523;
    msg.z_units = 92U;
    msg.z = 0.576675442487;
    msg.accuracy = 0.899944699948;

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
    msg.setTimeStamp(0.266363825028);
    msg.setSource(50619U);
    msg.setSourceEntity(104U);
    msg.setDestination(46645U);
    msg.setDestinationEntity(206U);
    msg.target.assign("OJAZINARBCLMUZTCHJNICXKGPHPAYTHSAHOLJDYRFWOJBDSFILXXMTIXGTKCRQBAOUOZBWSSEORCKIKDUWHCNDWEIYNPTEYYVAOWCGWKPGPGVZSLUFKVETXRGFRIXZQEBMOFQQEVGFCGIDDTJFHJJBLFNIHCRJVUJYHEPMSSPYPUGVDSKOEDOYLMMV");
    msg.lat = 0.914010351051;
    msg.lon = 0.551047862907;
    msg.z_units = 116U;
    msg.z = 0.611869735965;
    msg.accuracy = 0.592779993851;

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
    msg.setTimeStamp(0.128646326105);
    msg.setSource(61987U);
    msg.setSourceEntity(161U);
    msg.setDestination(10339U);
    msg.setDestinationEntity(125U);
    msg.target.assign("IMMYXAGTCAKRBBBYFIEYNCPSQHHENXQRSFVRNIYQVXCOSYUKCWGEKNIHUJUGBVLWCLSTRIKZALZQEQAIGXLDAJCQRYPRFDE");
    msg.lat = 0.225584062147;
    msg.lon = 0.940964528786;
    msg.z_units = 114U;
    msg.z = 0.841572543907;
    msg.accuracy = 0.459785552249;

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
    msg.setTimeStamp(0.302436621528);
    msg.setSource(1172U);
    msg.setSourceEntity(250U);
    msg.setDestination(32174U);
    msg.setDestinationEntity(223U);
    msg.name.assign("BQJIPSVWASNYXHUMDSOQREJEFKXIIGMECVMWQLXJOQZFVTOSKYRWKJWKEOUPULUDBBFWBXNKMZHRECIENAOFYLOVPVCGLKQFYZVLJWACLHAVYOQUKXKDMKHGJKGYBJVCNCDRUDFZLCIESFAZEGCMFQHRISXEDBPYTQPQTNHSHOGAUGZILPJGLANFUPPDNPVJAZONGYMFNRTXDCHRITTBB");
    msg.lat = 0.304066435787;
    msg.lon = 0.497606723785;
    msg.z = 0.817880168325;
    msg.z_units = 149U;

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
    msg.setTimeStamp(0.120519608079);
    msg.setSource(1409U);
    msg.setSourceEntity(20U);
    msg.setDestination(58400U);
    msg.setDestinationEntity(177U);
    msg.name.assign("IFNJBWMSEDJVKJHVPQAMFBXRJLNEXWWVZCZRXLTQMKAVSMFMASUIAGBUQNPJJBPZEIKWDCUPXNDQHBXNJFIOHQCSYCGHRBSACQXEWLHJGBVAHCMHZLOAYIKXRTAQFUWDOYMPZMVRRFSYKOEYTOSDEVDYSEUBZMVFKKVIFPTPEPCGDZWGDGL");
    msg.lat = 0.857372899791;
    msg.lon = 0.532934301628;
    msg.z = 0.174323005488;
    msg.z_units = 226U;

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
    msg.setTimeStamp(0.973333050252);
    msg.setSource(59057U);
    msg.setSourceEntity(91U);
    msg.setDestination(59860U);
    msg.setDestinationEntity(38U);
    msg.name.assign("IUPQRKWSNYUBQPXJMODYNFGQJKSPTOXCAGMDVZOEGZORFXCRFLYRDQJDDSOSMYJHAGHUEOIEEBHWDXLEVQKXZUNMKDHQYLWEQDAUVTGHICPRBJTIUFSXLXPPBUPYCSDGDLMZNVA");
    msg.lat = 0.0117197774291;
    msg.lon = 0.60075601438;
    msg.z = 0.171889054276;
    msg.z_units = 16U;

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
    msg.setTimeStamp(0.512949585066);
    msg.setSource(35U);
    msg.setSourceEntity(191U);
    msg.setDestination(3233U);
    msg.setDestinationEntity(124U);
    msg.op = 231U;

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
    msg.setTimeStamp(0.137338465787);
    msg.setSource(23899U);
    msg.setSourceEntity(71U);
    msg.setDestination(2832U);
    msg.setDestinationEntity(54U);
    msg.op = 58U;

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
    msg.setTimeStamp(0.107976309218);
    msg.setSource(25808U);
    msg.setSourceEntity(23U);
    msg.setDestination(50736U);
    msg.setDestinationEntity(125U);
    msg.op = 26U;

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
    msg.setTimeStamp(0.123580039278);
    msg.setSource(41643U);
    msg.setSourceEntity(169U);
    msg.setDestination(29366U);
    msg.setDestinationEntity(53U);
    msg.value = 0.841758277031;
    msg.type = 133U;

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
    msg.setTimeStamp(0.0684202002266);
    msg.setSource(19271U);
    msg.setSourceEntity(32U);
    msg.setDestination(63766U);
    msg.setDestinationEntity(229U);
    msg.value = 0.195978873928;
    msg.type = 181U;

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
    msg.setTimeStamp(0.136008677907);
    msg.setSource(65205U);
    msg.setSourceEntity(175U);
    msg.setDestination(3690U);
    msg.setDestinationEntity(56U);
    msg.value = 0.217489111384;
    msg.type = 11U;

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
    msg.setTimeStamp(0.468179946412);
    msg.setSource(25584U);
    msg.setSourceEntity(113U);
    msg.setDestination(26601U);
    msg.setDestinationEntity(110U);
    msg.value = 0.0151120016318;

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
    msg.setTimeStamp(0.47957850922);
    msg.setSource(23066U);
    msg.setSourceEntity(192U);
    msg.setDestination(50582U);
    msg.setDestinationEntity(47U);
    msg.value = 0.722896793052;

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
    msg.setTimeStamp(0.748441613716);
    msg.setSource(14328U);
    msg.setSourceEntity(247U);
    msg.setDestination(15248U);
    msg.setDestinationEntity(37U);
    msg.value = 0.126083860432;

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
    msg.setTimeStamp(0.0450000214433);
    msg.setSource(51108U);
    msg.setSourceEntity(212U);
    msg.setDestination(60116U);
    msg.setDestinationEntity(224U);
    msg.timestamp_last_service = 0.862628438986;
    msg.time_next_service = 0.676637378423;
    msg.time_motor_next_service = 0.405323054455;
    msg.time_idle_ground = 0.352402062192;
    msg.time_idle_air = 0.971987109507;
    msg.time_idle_water = 0.562872970697;
    msg.time_idle_underwater = 0.481290300148;
    msg.time_idle_unknown = 0.729380420948;
    msg.time_motor_ground = 0.296231533449;
    msg.time_motor_air = 0.420825606747;
    msg.time_motor_water = 0.539374160269;
    msg.time_motor_underwater = 0.132154899846;
    msg.time_motor_unknown = 0.228499996233;
    msg.rpm_min = 24307;
    msg.rpm_max = 30539;
    msg.depth_max = 0.0384795270883;

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
    msg.setTimeStamp(0.957980419275);
    msg.setSource(40992U);
    msg.setSourceEntity(162U);
    msg.setDestination(39784U);
    msg.setDestinationEntity(82U);
    msg.timestamp_last_service = 0.952354724408;
    msg.time_next_service = 0.743689023588;
    msg.time_motor_next_service = 0.584626927283;
    msg.time_idle_ground = 0.542139336402;
    msg.time_idle_air = 0.392438111781;
    msg.time_idle_water = 0.765848273883;
    msg.time_idle_underwater = 0.786773850711;
    msg.time_idle_unknown = 0.712888655559;
    msg.time_motor_ground = 0.554069070944;
    msg.time_motor_air = 0.693212563175;
    msg.time_motor_water = 0.585273110805;
    msg.time_motor_underwater = 0.407159157127;
    msg.time_motor_unknown = 0.134811824311;
    msg.rpm_min = -3581;
    msg.rpm_max = 27379;
    msg.depth_max = 0.827763285843;

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
    msg.setTimeStamp(0.921939815271);
    msg.setSource(27682U);
    msg.setSourceEntity(38U);
    msg.setDestination(64363U);
    msg.setDestinationEntity(107U);
    msg.timestamp_last_service = 0.581836610226;
    msg.time_next_service = 0.333212564586;
    msg.time_motor_next_service = 0.965332642942;
    msg.time_idle_ground = 0.754435249065;
    msg.time_idle_air = 0.263474487794;
    msg.time_idle_water = 0.124520357397;
    msg.time_idle_underwater = 0.575382244318;
    msg.time_idle_unknown = 0.535413033953;
    msg.time_motor_ground = 0.884218264385;
    msg.time_motor_air = 0.770668371938;
    msg.time_motor_water = 0.409451805259;
    msg.time_motor_underwater = 0.522503647777;
    msg.time_motor_unknown = 0.0591172675244;
    msg.rpm_min = 6913;
    msg.rpm_max = -4758;
    msg.depth_max = 0.174791927598;

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
    msg.setTimeStamp(0.526178125559);
    msg.setSource(21614U);
    msg.setSourceEntity(64U);
    msg.setDestination(58716U);
    msg.setDestinationEntity(161U);
    msg.severity = 50U;
    msg.text.assign("NOHYQCOVBGSLEWKJHBGLAJYWUTKQLLTQAXWDJXRVFVEPIYUQFBK");

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
    msg.setTimeStamp(0.0387786607324);
    msg.setSource(12006U);
    msg.setSourceEntity(180U);
    msg.setDestination(34987U);
    msg.setDestinationEntity(52U);
    msg.severity = 178U;
    msg.text.assign("ZCWIKCXSNZP");

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
    msg.setTimeStamp(0.962074032189);
    msg.setSource(50700U);
    msg.setSourceEntity(6U);
    msg.setDestination(55720U);
    msg.setDestinationEntity(102U);
    msg.severity = 207U;
    msg.text.assign("OAXGQPYNFJBPJKEVIPWLSUSHACYXHECVNSRUEZTQSRVHWCEIWHLTUVWWPXVMYQDXZTRLTVBTCYOOAFWDZGJJSSKPBFUFVZVWNUIYUVDOFMYLVGKOZHMLKGADUQRZQFPJLKOIEKFDRCKDOCMGLNQXZJWQYRGEUGQXOZEAGDWJFTC");

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
    msg.setTimeStamp(0.462403984406);
    msg.setSource(12867U);
    msg.setSourceEntity(227U);
    msg.setDestination(47411U);
    msg.setDestinationEntity(101U);
    msg.channel = 49;
    msg.value = -1737930451;
    msg.gain = 65U;

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
    msg.setTimeStamp(0.0394577486431);
    msg.setSource(16875U);
    msg.setSourceEntity(103U);
    msg.setDestination(40877U);
    msg.setDestinationEntity(30U);
    msg.channel = 20;
    msg.value = -882836784;
    msg.gain = 182U;

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
    msg.setTimeStamp(0.966976583052);
    msg.setSource(29509U);
    msg.setSourceEntity(249U);
    msg.setDestination(15775U);
    msg.setDestinationEntity(50U);
    msg.channel = 50;
    msg.value = -1795641307;
    msg.gain = 18U;

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
    msg.setTimeStamp(0.00777817407857);
    msg.setSource(51146U);
    msg.setSourceEntity(222U);
    msg.setDestination(10541U);
    msg.setDestinationEntity(21U);
    msg.ch01 = 0.947771389464;
    msg.ch02 = 0.0790356102366;
    msg.ch03 = 0.60225433891;
    msg.ch04 = 0.559001119561;
    msg.ch05 = 0.34370790505;
    msg.ch06 = 0.978244343083;
    msg.ch07 = 0.276324133553;
    msg.ch08 = 0.11037985461;
    msg.ch09 = 0.998063722527;
    msg.ch10 = 0.0577350905204;
    msg.ch11 = 0.642727683066;
    msg.ch12 = 0.0422219480158;
    msg.ch13 = 0.97258221877;
    msg.ch14 = 0.648198042933;
    msg.ch15 = 0.747105791642;
    msg.ch16 = 0.712810711135;

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
    msg.setTimeStamp(0.267874542333);
    msg.setSource(41477U);
    msg.setSourceEntity(138U);
    msg.setDestination(28995U);
    msg.setDestinationEntity(219U);
    msg.ch01 = 0.448506150591;
    msg.ch02 = 0.085730779952;
    msg.ch03 = 0.499711815132;
    msg.ch04 = 0.452684283803;
    msg.ch05 = 0.0533611462681;
    msg.ch06 = 0.0317893819934;
    msg.ch07 = 0.209617764217;
    msg.ch08 = 0.0891073780995;
    msg.ch09 = 0.827705611868;
    msg.ch10 = 0.0992198517925;
    msg.ch11 = 0.0471839876373;
    msg.ch12 = 0.811315925952;
    msg.ch13 = 0.755196038826;
    msg.ch14 = 0.199375525471;
    msg.ch15 = 0.691326386692;
    msg.ch16 = 0.0942977554809;

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
    msg.setTimeStamp(0.0578881008114);
    msg.setSource(57535U);
    msg.setSourceEntity(106U);
    msg.setDestination(490U);
    msg.setDestinationEntity(12U);
    msg.ch01 = 0.54518058602;
    msg.ch02 = 0.378350871487;
    msg.ch03 = 0.178902123089;
    msg.ch04 = 0.248475236224;
    msg.ch05 = 0.84280554445;
    msg.ch06 = 0.978040377479;
    msg.ch07 = 0.48788587578;
    msg.ch08 = 0.186381584101;
    msg.ch09 = 0.0456066340339;
    msg.ch10 = 0.75738570543;
    msg.ch11 = 0.479068214015;
    msg.ch12 = 0.982793462699;
    msg.ch13 = 0.776692970434;
    msg.ch14 = 0.845558749932;
    msg.ch15 = 0.450830238113;
    msg.ch16 = 0.479403212135;

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
    msg.setTimeStamp(0.123248697694);
    msg.setSource(34724U);
    msg.setSourceEntity(194U);
    msg.setDestination(48716U);
    msg.setDestinationEntity(144U);
    msg.time = 0.416608370607;
    msg.ang = 0.340601479735;

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
    msg.setTimeStamp(0.809187042794);
    msg.setSource(32059U);
    msg.setSourceEntity(28U);
    msg.setDestination(36979U);
    msg.setDestinationEntity(103U);
    msg.time = 0.16865401831;
    msg.ang = 0.0149245043502;

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
    msg.setTimeStamp(0.327560861208);
    msg.setSource(10768U);
    msg.setSourceEntity(61U);
    msg.setDestination(18396U);
    msg.setDestinationEntity(219U);
    msg.time = 0.757741515807;
    msg.ang = 0.12195285252;

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
    msg.setTimeStamp(0.472243973352);
    msg.setSource(14736U);
    msg.setSourceEntity(219U);
    msg.setDestination(35710U);
    msg.setDestinationEntity(104U);
    msg.value = 0.373648550397;

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
    msg.setTimeStamp(0.641726606886);
    msg.setSource(39729U);
    msg.setSourceEntity(222U);
    msg.setDestination(55613U);
    msg.setDestinationEntity(65U);
    msg.value = 0.729084583605;

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
    msg.setTimeStamp(0.616261611945);
    msg.setSource(20831U);
    msg.setSourceEntity(149U);
    msg.setDestination(60283U);
    msg.setDestinationEntity(184U);
    msg.value = 0.645148468741;

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
    msg.setTimeStamp(0.625961152981);
    msg.setSource(27623U);
    msg.setSourceEntity(239U);
    msg.setDestination(7554U);
    msg.setDestinationEntity(100U);
    msg.value = 0.782622607187;

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
    msg.setTimeStamp(0.714694393703);
    msg.setSource(53540U);
    msg.setSourceEntity(239U);
    msg.setDestination(61495U);
    msg.setDestinationEntity(24U);
    msg.value = 0.679747651577;

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
    msg.setTimeStamp(0.873736295739);
    msg.setSource(12074U);
    msg.setSourceEntity(87U);
    msg.setDestination(43288U);
    msg.setDestinationEntity(88U);
    msg.value = 0.79296705295;

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
    msg.setTimeStamp(0.204270283475);
    msg.setSource(60238U);
    msg.setSourceEntity(63U);
    msg.setDestination(4287U);
    msg.setDestinationEntity(83U);
    msg.value = 0.67240913755;

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
    msg.setTimeStamp(0.591581980004);
    msg.setSource(10010U);
    msg.setSourceEntity(103U);
    msg.setDestination(64077U);
    msg.setDestinationEntity(187U);
    msg.value = 0.0758799581251;

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
    msg.setTimeStamp(0.178791847951);
    msg.setSource(47606U);
    msg.setSourceEntity(107U);
    msg.setDestination(19074U);
    msg.setDestinationEntity(166U);
    msg.value = 0.428754512207;

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
    msg.setTimeStamp(0.403871412051);
    msg.setSource(20063U);
    msg.setSourceEntity(108U);
    msg.setDestination(30022U);
    msg.setDestinationEntity(210U);
    msg.l2 = -57;
    msg.l3 = -59;
    msg.iridium = 12;
    msg.modem = -108;
    msg.pumps = -46;
    msg.vhf = -15;

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
    msg.setTimeStamp(0.547694191702);
    msg.setSource(52012U);
    msg.setSourceEntity(126U);
    msg.setDestination(55393U);
    msg.setDestinationEntity(24U);
    msg.l2 = -39;
    msg.l3 = 28;
    msg.iridium = -14;
    msg.modem = -98;
    msg.pumps = 79;
    msg.vhf = 5;

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
    msg.setTimeStamp(0.0764523698815);
    msg.setSource(53338U);
    msg.setSourceEntity(147U);
    msg.setDestination(26600U);
    msg.setDestinationEntity(83U);
    msg.l2 = -45;
    msg.l3 = -27;
    msg.iridium = 30;
    msg.modem = 114;
    msg.pumps = -41;
    msg.vhf = -102;

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

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
// IMC XML MD5: 15a453bf8cd23a70e3e712d94358e1ce                            *
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
    msg.setTimeStamp(0.084369649001);
    msg.setSource(59790U);
    msg.setSourceEntity(14U);
    msg.setDestination(30360U);
    msg.setDestinationEntity(17U);
    msg.state = 76U;
    msg.flags = 200U;
    msg.description.assign("FJGYWBGDJUZCMKMTNKMVNUCFGSGOAHQJUVEW");

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
    msg.setTimeStamp(0.114902805193);
    msg.setSource(36626U);
    msg.setSourceEntity(173U);
    msg.setDestination(2524U);
    msg.setDestinationEntity(152U);
    msg.state = 179U;
    msg.flags = 153U;
    msg.description.assign("DWDYVMZIDPASLBXTQGHNDQUBNCUGAOFQXFAXUXOSKGGIYOOUNRIMIFUEPKPJMLKZCVKZMTYCAZIJMKMNWFXYQJRYZZVAPIHGOCHBGSMLRHDU");

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
    msg.setTimeStamp(0.894651311256);
    msg.setSource(63137U);
    msg.setSourceEntity(136U);
    msg.setDestination(56081U);
    msg.setDestinationEntity(77U);
    msg.state = 99U;
    msg.flags = 111U;
    msg.description.assign("EKJEQYNGVHYRSDHSEOGXATBQCLRVLRZZEAFRWAGXKYILSUHYMCZUBTNGNWIQWNNJWTZPMESMFNKWOPZFCSKOEAQDLJDYRXQPUXMCJBBIIYLRJJXGXIDLCEQNALHOWUFCOZPVUAFJGTXYWLFMVNIPTSQHOQXZSVLTMXGIDKPMDNBYPORSCTEPVBOGVQUMBSMODYDSUDZIEHWKDCYKX");

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
    msg.setTimeStamp(0.86279887612);
    msg.setSource(39393U);
    msg.setSourceEntity(246U);
    msg.setDestination(60924U);
    msg.setDestinationEntity(217U);

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
    msg.setTimeStamp(0.199513508141);
    msg.setSource(34195U);
    msg.setSourceEntity(25U);
    msg.setDestination(37661U);
    msg.setDestinationEntity(224U);

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
    msg.setTimeStamp(0.720397407455);
    msg.setSource(2893U);
    msg.setSourceEntity(77U);
    msg.setDestination(21883U);
    msg.setDestinationEntity(244U);

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
    msg.setTimeStamp(0.0741061099392);
    msg.setSource(14413U);
    msg.setSourceEntity(215U);
    msg.setDestination(9982U);
    msg.setDestinationEntity(182U);
    msg.id = 49U;
    msg.label.assign("MNHHWJKUDWQLEFYUOPMFTVTFYCQGURQTWRBWWQEFPNVPXNLDKLMGEDWLOFGVNLCUTZSGKKTVXDLJXMDUDKZAHZZIDKSXRSAYLNGHYBY");
    msg.component.assign("QTHEDKJJTYFOQJSFCGLQZNZIXZKIQYYURVZOAFXUYKBXGXLEERHDECVJSUPNSNHQJVLVPBFRPMEKTNBYVUQZYYKYNBIHLNFMZGXLMMBZUOAOCWPMIRRDTRKJMUSBHENIPAXBDIUKTVLYSVDQCRSAHSYIZWCXAXSNAUWVWALGMEGIDIRTKPCDVFD");
    msg.act_time = 52615U;
    msg.deact_time = 12567U;

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
    msg.setTimeStamp(0.0916816039418);
    msg.setSource(30740U);
    msg.setSourceEntity(210U);
    msg.setDestination(58983U);
    msg.setDestinationEntity(187U);
    msg.id = 199U;
    msg.label.assign("BLRIBOPAEQTUGRRRFKNZ");
    msg.component.assign("MPOVPURSWOMIOFAFWGTLGVJXAXTGLGWZMCHTZJJMZREWGDKYAELKPNATIWKHZHPHYLAGZCVOURFSLXSIYKQMRXOTWBQEXRVLNQSZWBQVCTPHZDGEEYDVADBBJUKQNPSWXDBIGPHXSULSYZFWHCNLRFKRDNKUOMDOYNIPYQSKSUYHDZKMX");
    msg.act_time = 46563U;
    msg.deact_time = 63578U;

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
    msg.setTimeStamp(0.0738950406727);
    msg.setSource(3510U);
    msg.setSourceEntity(98U);
    msg.setDestination(32391U);
    msg.setDestinationEntity(159U);
    msg.id = 171U;
    msg.label.assign("DLAKFLOQXDUBWQAAKERMUXUFNPTODZSJLPHJTQYGSVDT");
    msg.component.assign("FWHIJOTBVBVAEOJUNOTVHKXKQLGISSYBVSSOGCGVKKQZUMCCUBRZGPYXVRCAFTYDMHOHRVWGFDAUFUJNHXKLEFJBNTTXWTXOKYCMDJEVGSZIRRTZLMYDDWVCWFCEFPJBFAQLPWKMOLEENQSPGXYZDJJNIPZLUFUYBBGIEOIWRHLRMMXNKTJXSZEDQKQDIMANCPUMRBRPZCDQJHUIGMNISTYHCASUAQQNBTHIYOKHZOPYPRZSX");
    msg.act_time = 64390U;
    msg.deact_time = 55744U;

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
    msg.setTimeStamp(0.505904143915);
    msg.setSource(20199U);
    msg.setSourceEntity(124U);
    msg.setDestination(26234U);
    msg.setDestinationEntity(127U);
    msg.id = 99U;

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
    msg.setTimeStamp(0.913010755881);
    msg.setSource(62745U);
    msg.setSourceEntity(124U);
    msg.setDestination(44092U);
    msg.setDestinationEntity(39U);
    msg.id = 30U;

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
    msg.setTimeStamp(0.565775023524);
    msg.setSource(22745U);
    msg.setSourceEntity(72U);
    msg.setDestination(46092U);
    msg.setDestinationEntity(157U);
    msg.id = 229U;

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
    msg.setTimeStamp(0.780467778381);
    msg.setSource(5468U);
    msg.setSourceEntity(85U);
    msg.setDestination(4042U);
    msg.setDestinationEntity(122U);
    msg.op = 13U;
    msg.list.assign("IGZUMYMMDKZNYIRKWDDLRRPBZDMILTBXLJSXDBECOKRRONMQVKFXZGFYICJCOIDLQABHDMSDCNAPQHQVCHYKHCONUTXTEPEJVTANLQGLYXWATSJFUAPWHKMKQLYVVYANGZXOTXFSDKIMSWOOIMBXTKPRI");

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
    msg.setTimeStamp(0.169436792915);
    msg.setSource(3383U);
    msg.setSourceEntity(152U);
    msg.setDestination(50154U);
    msg.setDestinationEntity(238U);
    msg.op = 58U;
    msg.list.assign("OPZLLIHFEXYTGBRHLEDAGVGMCOXBWTFZNHBJUCEARAUUESXPODAMSFTKVHOYNENEISLESDCUYKCQVRKQFITSYIQKVAQZJDJKRACYWNTCLEHVXEZTZSKFVXYVPWODUPFLHSGCLRBGYBZNSJAFZZRRYSBAMJMMKVNRITUOMOWWTKXIUFXIJWJGCMNXTDQOPAKBGIDXUDPCLNYRPQCQFVJJQRUOWHQWHDMLJQPGUTWGMZVEWMGNA");

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
    msg.setTimeStamp(0.44424179823);
    msg.setSource(27941U);
    msg.setSourceEntity(244U);
    msg.setDestination(8901U);
    msg.setDestinationEntity(26U);
    msg.op = 124U;
    msg.list.assign("YHSBASBEBMYPFUXDUZBYRGKPEEIRFZPNORESJARHBQDMSPGX");

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
    msg.setTimeStamp(0.00707304828759);
    msg.setSource(44269U);
    msg.setSourceEntity(15U);
    msg.setDestination(1849U);
    msg.setDestinationEntity(189U);
    msg.value = 90U;

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
    msg.setTimeStamp(0.567159514493);
    msg.setSource(27356U);
    msg.setSourceEntity(229U);
    msg.setDestination(18282U);
    msg.setDestinationEntity(12U);
    msg.value = 118U;

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
    msg.setTimeStamp(0.497169390175);
    msg.setSource(17159U);
    msg.setSourceEntity(126U);
    msg.setDestination(52895U);
    msg.setDestinationEntity(122U);
    msg.value = 32U;

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
    msg.setTimeStamp(0.783130969762);
    msg.setSource(45777U);
    msg.setSourceEntity(159U);
    msg.setDestination(4374U);
    msg.setDestinationEntity(23U);
    msg.consumer.assign("VWWFFTWHYNSVEPZFY");
    msg.message_id = 65217U;

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
    msg.setTimeStamp(0.658812267193);
    msg.setSource(42673U);
    msg.setSourceEntity(1U);
    msg.setDestination(34495U);
    msg.setDestinationEntity(242U);
    msg.consumer.assign("BQSHUHBLBTDCUEIORJELHVUQTGYEXRYNYBDZKAMNXAXFKHBNWUMVXTXZIMGQ");
    msg.message_id = 27331U;

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
    msg.setTimeStamp(0.422518361211);
    msg.setSource(59005U);
    msg.setSourceEntity(193U);
    msg.setDestination(23616U);
    msg.setDestinationEntity(182U);
    msg.consumer.assign("AHPHSOIECQZTEZWOFZDPKAEDYVHEKJDLYVIMUKXKCIFYNPZCQABFMLCNFXRSHRFUWQQRQALCZZDOXZTOJYFKWHVWSEVYMVOSUHGCHNRNCATRVHMXMYFULABBDILXBIUALKQEJHYLIDRBSUZIXUGZWGWKYPUPNJOHVWQRFNLTGKGWAPYIQXVEDVBLNMSJOPGUDSRGCJPODNBGZMOTXAETRTTORIIGAXBBU");
    msg.message_id = 10750U;

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
    msg.setTimeStamp(0.941973409493);
    msg.setSource(49940U);
    msg.setSourceEntity(180U);
    msg.setDestination(26679U);
    msg.setDestinationEntity(111U);
    msg.type = 213U;

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
    msg.setTimeStamp(0.345771300416);
    msg.setSource(37101U);
    msg.setSourceEntity(60U);
    msg.setDestination(14929U);
    msg.setDestinationEntity(136U);
    msg.type = 80U;

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
    msg.setTimeStamp(0.577207473083);
    msg.setSource(13162U);
    msg.setSourceEntity(182U);
    msg.setDestination(61656U);
    msg.setDestinationEntity(194U);
    msg.type = 12U;

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
    msg.setTimeStamp(0.0303033470854);
    msg.setSource(44325U);
    msg.setSourceEntity(231U);
    msg.setDestination(53694U);
    msg.setDestinationEntity(96U);
    msg.op = 146U;

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
    msg.setTimeStamp(0.888366276433);
    msg.setSource(25739U);
    msg.setSourceEntity(98U);
    msg.setDestination(23234U);
    msg.setDestinationEntity(126U);
    msg.op = 129U;

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
    msg.setTimeStamp(0.0142202192352);
    msg.setSource(15496U);
    msg.setSourceEntity(63U);
    msg.setDestination(64719U);
    msg.setDestinationEntity(170U);
    msg.op = 195U;

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
    msg.setTimeStamp(0.818396376447);
    msg.setSource(9466U);
    msg.setSourceEntity(118U);
    msg.setDestination(20737U);
    msg.setDestinationEntity(199U);
    msg.total_steps = 74U;
    msg.step_number = 52U;
    msg.step.assign("PFBCGAMVDGQNDFJCCLEXZZVRJHQJAXUEEBHTNDIXZVXXZBFXKHPQIYWYDBJJIMWEDMTYURUYRRSPOGFSKSVJRBKVCWTGUFSCEMZBYNELAVTBETIUMAOFIHPCHDAGOPIHTNEPUUBQXYFEWUMZCCZWSQQKVZDWWAJXWWMZCTHLBWMGQFVFVKATXODSKRGLQJBGUPSQLOKPKJHNNSNNDIZRYTCALALM");
    msg.flags = 1U;

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
    msg.setTimeStamp(0.509464046216);
    msg.setSource(18298U);
    msg.setSourceEntity(152U);
    msg.setDestination(26235U);
    msg.setDestinationEntity(224U);
    msg.total_steps = 138U;
    msg.step_number = 123U;
    msg.step.assign("WXRZNKQHBMJMOELOXYTRRYUSYJVCJWLARQHJATSFNMZOHYFZLOAWOYLKTOIGSPNGMVSXHURCMXISDUBIJFPFCLAFKLLQFIDKSQIFZVMAVNYCJTZDIXTURVSOOG");
    msg.flags = 120U;

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
    msg.setTimeStamp(0.118145205968);
    msg.setSource(41636U);
    msg.setSourceEntity(133U);
    msg.setDestination(10174U);
    msg.setDestinationEntity(221U);
    msg.total_steps = 113U;
    msg.step_number = 253U;
    msg.step.assign("SOCSIUDKXWBEVVJMDJMGFWMITUNNEZJOICUCHHDGTDGQLRPUACYCVAOJQVPXNYEERZULQYRUCUBDAGALLRCWZIANMKWIYKROXHWGMQE");
    msg.flags = 125U;

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
    msg.setTimeStamp(0.621515631021);
    msg.setSource(30864U);
    msg.setSourceEntity(79U);
    msg.setDestination(34330U);
    msg.setDestinationEntity(49U);
    msg.state = 169U;
    msg.error.assign("GLBIYKKPMPHVPKLCCUXZOBVYXHMAAWJBUMOYFEVUFFICXROOYEXXZQJTVIZEDLNMISUULYTKJZGWWDZVJHFWLBEFUPQGBPXKNFJBUIQZQPNNNHVJWLPXDCENEWNKTDTIHQKRJDUJFKBMQECOKXGJXAEROWRSSVLGHZONSHMSCAYGEDSAMOSARLTIFNQMTVMYGCCRM");

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
    msg.setTimeStamp(0.261028865284);
    msg.setSource(23845U);
    msg.setSourceEntity(162U);
    msg.setDestination(9038U);
    msg.setDestinationEntity(168U);
    msg.state = 203U;
    msg.error.assign("BHKPRPUBBRCWUOFAJZVFXGOTRNGIXHKPNPBLCDWVPCZEWPDVRHFGFSLFFNNMEGMJETJYGGWTAJPROJMKRGKGWEXBAPTXPSJXSQUZFIVVEQWVNQNYJNYLUAZJWVZULOSMJXIMIMLNEQGQCDRQSIBT");

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
    msg.setTimeStamp(0.120602805996);
    msg.setSource(3190U);
    msg.setSourceEntity(206U);
    msg.setDestination(34577U);
    msg.setDestinationEntity(194U);
    msg.state = 108U;
    msg.error.assign("TUDIFCWAZFRPSGLPSUAVIALMLYXFTMNEGHZOUFULVGBNOKHKQAYLWQVEAUSMOMI");

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
    msg.setTimeStamp(0.469494609157);
    msg.setSource(63366U);
    msg.setSourceEntity(217U);
    msg.setDestination(41970U);
    msg.setDestinationEntity(31U);

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
    msg.setTimeStamp(0.912418778547);
    msg.setSource(13234U);
    msg.setSourceEntity(189U);
    msg.setDestination(61703U);
    msg.setDestinationEntity(135U);

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
    msg.setTimeStamp(0.0287191829742);
    msg.setSource(45806U);
    msg.setSourceEntity(182U);
    msg.setDestination(11986U);
    msg.setDestinationEntity(186U);

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
    msg.setTimeStamp(0.285192508473);
    msg.setSource(9546U);
    msg.setSourceEntity(213U);
    msg.setDestination(59756U);
    msg.setDestinationEntity(71U);
    msg.op = 59U;
    msg.speed_min = 0.495622850514;
    msg.speed_max = 0.832440210193;
    msg.long_accel = 0.523610573804;
    msg.alt_max_msl = 0.844187647704;
    msg.dive_fraction_max = 0.425740582092;
    msg.climb_fraction_max = 0.281396136052;
    msg.bank_max = 0.190566354131;
    msg.p_max = 0.823104250772;
    msg.pitch_min = 0.872536641069;
    msg.pitch_max = 0.968121782095;
    msg.q_max = 0.895171189801;
    msg.g_min = 0.71762670353;
    msg.g_max = 0.532347935711;
    msg.g_lat_max = 0.272722230697;
    msg.rpm_min = 0.343828422929;
    msg.rpm_max = 0.100796586042;
    msg.rpm_rate_max = 0.742071915692;

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
    msg.setTimeStamp(0.0992839582986);
    msg.setSource(62469U);
    msg.setSourceEntity(154U);
    msg.setDestination(34435U);
    msg.setDestinationEntity(109U);
    msg.op = 82U;
    msg.speed_min = 0.0741154804794;
    msg.speed_max = 0.86776106007;
    msg.long_accel = 0.812873628648;
    msg.alt_max_msl = 0.940605601525;
    msg.dive_fraction_max = 0.623095134884;
    msg.climb_fraction_max = 0.405260859471;
    msg.bank_max = 0.612472191009;
    msg.p_max = 0.291377326315;
    msg.pitch_min = 0.352329749612;
    msg.pitch_max = 0.605574762982;
    msg.q_max = 0.570650116753;
    msg.g_min = 0.572009034025;
    msg.g_max = 0.0204764195033;
    msg.g_lat_max = 0.628157330733;
    msg.rpm_min = 0.938630990833;
    msg.rpm_max = 0.0282335850611;
    msg.rpm_rate_max = 0.426627643758;

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
    msg.setTimeStamp(0.616228594338);
    msg.setSource(33076U);
    msg.setSourceEntity(111U);
    msg.setDestination(25229U);
    msg.setDestinationEntity(125U);
    msg.op = 227U;
    msg.speed_min = 0.409890660557;
    msg.speed_max = 0.780738655225;
    msg.long_accel = 0.695239102245;
    msg.alt_max_msl = 0.339869450715;
    msg.dive_fraction_max = 0.690109658959;
    msg.climb_fraction_max = 0.0779838329339;
    msg.bank_max = 0.571877857616;
    msg.p_max = 0.744311178722;
    msg.pitch_min = 0.784213498271;
    msg.pitch_max = 0.384100290735;
    msg.q_max = 0.441096094328;
    msg.g_min = 0.345167781446;
    msg.g_max = 0.131148189135;
    msg.g_lat_max = 0.670018060071;
    msg.rpm_min = 0.0350968532469;
    msg.rpm_max = 0.996925636029;
    msg.rpm_rate_max = 0.142324488733;

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
    msg.setTimeStamp(0.752118549095);
    msg.setSource(48198U);
    msg.setSourceEntity(64U);
    msg.setDestination(62532U);
    msg.setDestinationEntity(85U);

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
    msg.setTimeStamp(0.273259380799);
    msg.setSource(48757U);
    msg.setSourceEntity(158U);
    msg.setDestination(63501U);
    msg.setDestinationEntity(46U);

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
    msg.setTimeStamp(0.91195184315);
    msg.setSource(21952U);
    msg.setSourceEntity(94U);
    msg.setDestination(61878U);
    msg.setDestinationEntity(28U);
    IMC::CurrentProfile tmp_msg_0;
    tmp_msg_0.beams = 107U;
    tmp_msg_0.cells = 16U;
    tmp_msg_0.coord_sys = 250U;
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
    msg.setTimeStamp(0.203380267017);
    msg.setSource(38983U);
    msg.setSourceEntity(161U);
    msg.setDestination(19111U);
    msg.setDestinationEntity(3U);
    msg.lat = 0.949092621738;
    msg.lon = 0.856438018277;
    msg.height = 0.388001750128;
    msg.x = 0.183112354354;
    msg.y = 0.60104236212;
    msg.z = 0.498119519628;
    msg.phi = 0.52108650653;
    msg.theta = 0.58869278479;
    msg.psi = 0.776378537572;
    msg.u = 0.827994741291;
    msg.v = 0.0613442953948;
    msg.w = 0.825838149024;
    msg.p = 0.304194539471;
    msg.q = 0.685476558306;
    msg.r = 0.834848949433;
    msg.svx = 0.465271294203;
    msg.svy = 0.263501204952;
    msg.svz = 0.414970345855;

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
    msg.setTimeStamp(0.732746659651);
    msg.setSource(62421U);
    msg.setSourceEntity(241U);
    msg.setDestination(59874U);
    msg.setDestinationEntity(63U);
    msg.lat = 0.926538818256;
    msg.lon = 0.778696608521;
    msg.height = 0.475735740278;
    msg.x = 0.0338561812664;
    msg.y = 0.804825567133;
    msg.z = 0.28561345153;
    msg.phi = 0.901972261723;
    msg.theta = 0.973889599788;
    msg.psi = 0.165581121094;
    msg.u = 0.381924991313;
    msg.v = 0.374858718874;
    msg.w = 0.923869622195;
    msg.p = 0.179064734974;
    msg.q = 0.124364432913;
    msg.r = 0.58567792132;
    msg.svx = 0.770911080572;
    msg.svy = 0.381601650042;
    msg.svz = 0.442878430335;

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
    msg.setTimeStamp(0.320328635333);
    msg.setSource(1703U);
    msg.setSourceEntity(92U);
    msg.setDestination(26048U);
    msg.setDestinationEntity(213U);
    msg.lat = 0.00800339427621;
    msg.lon = 0.864024298288;
    msg.height = 0.0518420454715;
    msg.x = 0.42377201005;
    msg.y = 0.5491527708;
    msg.z = 0.296756246888;
    msg.phi = 0.0334911203356;
    msg.theta = 0.311725940205;
    msg.psi = 0.75834012369;
    msg.u = 0.29198803471;
    msg.v = 0.156824312906;
    msg.w = 0.77691799775;
    msg.p = 0.446702738205;
    msg.q = 0.8485175566;
    msg.r = 0.00855117034271;
    msg.svx = 0.539751124319;
    msg.svy = 0.816167712675;
    msg.svz = 0.685457776689;

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
    msg.setTimeStamp(0.642441657569);
    msg.setSource(29893U);
    msg.setSourceEntity(38U);
    msg.setDestination(56097U);
    msg.setDestinationEntity(212U);
    msg.op = 9U;
    msg.entities.assign("MSQOFOBTJEBWXZXIHLBFNDYXGWEAMULUKBJWXSLSGXPALFCQDRGQWQLTFAJJFXOCIQMZVSBPABXIORKPJRKEUHXKDTWUVCEKMCRGTFJUAHVAPYBVIYTYRHPKSAGUZTFNDLBVQDGMLCNGMTJSNHYPNGAIYDUKCBUDNNVJTTSVFKZSQDWELMHLUCAMIFRWAWHREHOJYPZQOOZPWYIOXOCNNVECCXGVYEI");

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
    msg.setTimeStamp(0.842352693619);
    msg.setSource(20164U);
    msg.setSourceEntity(86U);
    msg.setDestination(29294U);
    msg.setDestinationEntity(97U);
    msg.op = 152U;
    msg.entities.assign("ESHJWKYTRVFJOXKGYAWACXRAUZAILTDRDVDJRVBBRPKEVWTNLIMBNHVVFLIGOYPKJMMAXKFMHFQTURJMYKVLFBBZBHWWEQROZISGQNOZXOLTIRSNJYSZQJUMIXWSKVMGXPMIYPGZCLEAJEJYRPCPOOSOCDILESMXHMWQAEKEKCCVTZUQBCFNDHGZXPQBKCNIQDBDDAHLHQDGOSXGPAHTPC");

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
    msg.setTimeStamp(0.854265298906);
    msg.setSource(26616U);
    msg.setSourceEntity(47U);
    msg.setDestination(16220U);
    msg.setDestinationEntity(67U);
    msg.op = 243U;
    msg.entities.assign("BJIDDVTADEENWUCIMCYDQIQAPTAJVBEKOZGYSUJMOYLEWNAQZUVXLRTHFBKCFQSLJKYHAHUTJBUBOMXSFUSNJWMRQNSZKBQYMCXXFSJS");

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
    msg.setTimeStamp(0.828369925224);
    msg.setSource(8622U);
    msg.setSourceEntity(22U);
    msg.setDestination(47113U);
    msg.setDestinationEntity(169U);
    msg.type = 135U;
    msg.speed = 11462U;
    const char tmp_msg_0[] = {-16, -103, -123, 1, 93, 101, -112, 56, 20, -127, -37, -110, -2, -31, 50, 64, 73, 61, -83, 70, 125, -98, -107, 53, -111, 101, -14, 51, 74, 114, -84, -56, -121, 118, -29, -89, 68, 56, -5, 14, -34, -68, 35, 21, 90, -77, 78, -13, -55, 97, 107, 66, 73, -13, 79, 76, 26, 76, 6, 56, -92, -65, -93, -117, -15, -87, 8, -37, 38, -120, -113, 80, -63, 61, 30, 109, 54, 52, 121, 116, -67, -111, 54, -6, 119, -91, -75, 19, 106, -48, 72, -74, -30, -66, 45, -89, 3, 10, -58, -2, -66, -4, -85, 103, -93, -10, 73, -85, 100, -31, 91, 27, 80, 45, 93, 82, 43, 38, 44, -43, 61, 109, -43, -25, -61, -88, 27, 93, -69, 72, -93, 71, -49, -119, 25, -8, -32, 62, 123, 38, -93, -78, 75, -41, -1, 24, 93, -127, -61, 23, 48, -9, 117, -76, -20, -48, -105, -94, -73, -8, -54, -94, 41, 120, -66, -95, 96, -109, -51, 47, 47, 74, -103, 84, 42, 85, -97, 94, 40, 98, -97, -67, 30, -100, 54, -67, 119, 75, 114, -52, -29, 12, -32, -98, 35, -73, 98, -32, -44, 122, -44, -124, 4, -88, -127, 92, -61};
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
    msg.setTimeStamp(0.751511549152);
    msg.setSource(37394U);
    msg.setSourceEntity(233U);
    msg.setDestination(63980U);
    msg.setDestinationEntity(40U);
    msg.type = 158U;
    msg.speed = 48725U;
    const char tmp_msg_0[] = {-96, 89, -37, -96, -43, -27, -37, 93, 10, 88, 55, 98, 105, 104, -121, -59, -1, 60, -89, 1, 46, -43, -111, -74, -88, -84, 89, -50, 119, 111, 26, -109, -76, -95, 19, 31, -57, 30, 49, -99, -2, 102, -18, 77, -119, 86};
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
    msg.setTimeStamp(0.169556795434);
    msg.setSource(24372U);
    msg.setSourceEntity(210U);
    msg.setDestination(34780U);
    msg.setDestinationEntity(146U);
    msg.type = 175U;
    msg.speed = 1626U;
    const char tmp_msg_0[] = {37, 3, 111, 107, 78, -72, 50, 76, 54, 7, -3, 101, 18, -63, -42, -31, 35, -25, 50, 85, 96, -7, 46, 10, -81, 23, -34, -83, -59, -32, 53, -32, 64, -24, 15, -120, 75, 83, 59, -98, -60, -48, -55, 24, -86, 10, 113, -4, -12, 110, 39, -100, 79, 65, -52, 76, 67, -59, -127, 81, 46, -18, 115, 116, 31, 56, -84, -79, -103, 51, 66, -120, -49, -96, 87, -51, 118, 99, -57, 58, -62, -117, -22, 51, 72, -15, 42, 80, 28, -55, -78, 110, 115, 44, 100, -93, -65, -88, 38, -42, 0, -12, 110, -84, 62, 32, -121, -125, 49, 79, -22, -118, 38, 77, 69, -20, 75, -65, 92, 63, -125, 115, -114, 31, 8, 103, -113, -78, -4, -98, 22, 63, 48, -111, 24, 83, 106, 50, 108, -17, -41, -16, 50, -121, 104, -31, 64, 0, -100, -70, 120, -31, -88, -71, -46, 29, 44, 79, 82, 93, -64, 91, 26, 122, 59, 49, 84, 105};
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
    msg.setTimeStamp(0.542826865565);
    msg.setSource(1904U);
    msg.setSourceEntity(113U);
    msg.setDestination(876U);
    msg.setDestinationEntity(4U);
    msg.op = 230U;
    msg.tas2acc_pgain = 0.127622298251;
    msg.bank2p_pgain = 0.839397875229;

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
    msg.setTimeStamp(0.124099093792);
    msg.setSource(46998U);
    msg.setSourceEntity(213U);
    msg.setDestination(28929U);
    msg.setDestinationEntity(66U);
    msg.op = 115U;
    msg.tas2acc_pgain = 0.335822132417;
    msg.bank2p_pgain = 0.1478379561;

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
    msg.setTimeStamp(0.50263567968);
    msg.setSource(10022U);
    msg.setSourceEntity(226U);
    msg.setDestination(5179U);
    msg.setDestinationEntity(162U);
    msg.op = 211U;
    msg.tas2acc_pgain = 0.25792038593;
    msg.bank2p_pgain = 0.235950553681;

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
    msg.setTimeStamp(0.175234720128);
    msg.setSource(16076U);
    msg.setSourceEntity(199U);
    msg.setDestination(34027U);
    msg.setDestinationEntity(69U);
    msg.available = 2146265255U;
    msg.value = 4U;

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
    msg.setTimeStamp(0.849598245306);
    msg.setSource(42063U);
    msg.setSourceEntity(67U);
    msg.setDestination(17788U);
    msg.setDestinationEntity(13U);
    msg.available = 1135673431U;
    msg.value = 160U;

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
    msg.setTimeStamp(0.191525032925);
    msg.setSource(43524U);
    msg.setSourceEntity(229U);
    msg.setDestination(28951U);
    msg.setDestinationEntity(50U);
    msg.available = 3490235746U;
    msg.value = 225U;

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
    msg.setTimeStamp(0.67529556382);
    msg.setSource(39210U);
    msg.setSourceEntity(202U);
    msg.setDestination(24933U);
    msg.setDestinationEntity(251U);
    msg.op = 218U;
    msg.snapshot.assign("XYMSQKBVSXPTWKFBVFUFABVDGCSTGASAGHKDTHQAVBROZXZARPRJZWXYEKCDUMEIHISHWMPPIDELODYRVPWBQZFIDCYRSVGARNKKKZYNMUEFBXTJLLYRELONJOGCCFCFWOCBUGGJJKLUHVDBAGQWZNDVNEKCQWUIEHBUHOLCWNJVKZNXHXCULSWMBYJPIDFRNAMAYNQXOOULSIHTVQEIJRWJTZRFETMMADITGYTZQUTPSLFOQGNXPPQS");
    IMC::AcousticBackscatter tmp_msg_0;
    tmp_msg_0.beam1 = 0.797597341716;
    tmp_msg_0.beam2 = 0.395230234719;
    tmp_msg_0.beam3 = 0.777010066625;
    tmp_msg_0.beam4 = 0.956468841197;
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
    msg.setTimeStamp(0.61067672432);
    msg.setSource(62204U);
    msg.setSourceEntity(0U);
    msg.setDestination(787U);
    msg.setDestinationEntity(44U);
    msg.op = 118U;
    msg.snapshot.assign("OJMMXYVZLIRJNCHCWAHVGBALSLGIJFRHQZZXCY");
    IMC::CacheControl tmp_msg_0;
    tmp_msg_0.op = 134U;
    tmp_msg_0.snapshot.assign("FTXHUDSFDWRUVJXHKWSROFPXJZGCMPFGPZIIEVYIXIYAQNOMSMNRBTHWPUEKYQPOMKNQWMJLUWJFGBDPYUIHSTWOPQAVEVLMOLCIERQSM");
    IMC::EstimatedState tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.708069500594;
    tmp_tmp_msg_0_0.lon = 0.879925836714;
    tmp_tmp_msg_0_0.height = 0.788619237062;
    tmp_tmp_msg_0_0.x = 0.239229135622;
    tmp_tmp_msg_0_0.y = 0.814275246305;
    tmp_tmp_msg_0_0.z = 0.133362532607;
    tmp_tmp_msg_0_0.phi = 0.14685958125;
    tmp_tmp_msg_0_0.theta = 0.906356240077;
    tmp_tmp_msg_0_0.psi = 0.74062708343;
    tmp_tmp_msg_0_0.u = 0.129710806019;
    tmp_tmp_msg_0_0.v = 0.21753336045;
    tmp_tmp_msg_0_0.w = 0.318164994798;
    tmp_tmp_msg_0_0.vx = 0.386496824619;
    tmp_tmp_msg_0_0.vy = 0.694600414692;
    tmp_tmp_msg_0_0.vz = 0.975678792516;
    tmp_tmp_msg_0_0.p = 0.694150948264;
    tmp_tmp_msg_0_0.q = 0.625522861832;
    tmp_tmp_msg_0_0.r = 0.505817004846;
    tmp_tmp_msg_0_0.depth = 0.717641195523;
    tmp_tmp_msg_0_0.alt = 0.444165567818;
    tmp_msg_0.message.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.0355785272263);
    msg.setSource(37611U);
    msg.setSourceEntity(203U);
    msg.setDestination(26473U);
    msg.setDestinationEntity(119U);
    msg.op = 204U;
    msg.snapshot.assign("MCZSOEMHVDOLQHHQKZWZWXNNYIEQZWZGJBUEEKDDIXBHKSZPCLFALZRJWVHMMAPPRCFGTVT");
    IMC::IridiumMsgTx tmp_msg_0;
    tmp_msg_0.req_id = 61340U;
    tmp_msg_0.ttl = 22612U;
    tmp_msg_0.destination.assign("PTHBICYBGZCEKPKMRGHVVCDJEXBPXARNPSZUQFSXAFLYNBWGFOMGDNSFREANTCGYWUWWAOYEWILSRJJHQAZYVEKTQNTVDZDXFTDPSKWSUCMRAEWRQJPLBVIDHDZPHRPHBCCCJKFXIOTXYDWOQZMIKINNNIJLIXZICXQGABAJUGMHVUMKTHKVQYGYBSOSEXWLBFFHQASFUTYNUUKLY");
    const char tmp_tmp_msg_0_0[] = {3, -35, 15, 68, 18, -32, 80, 91, -7, 122, 37, 61, 81, -34, -101, 3, 11, -101, -91, -40, -44, -18, -4, 37, -2, -33, -113, 113, -26, -22, -86, 101, 48, 4, 90, 122, 37, -79, -104, 17, -8, -22, -59, -75, -85, -67, -76, -67, -91, -122, -84, -23, -37, -72, 84, -14, 19, 86, 64, -122, -87, -91, 1, -56, -95, 72, -55, -70, -33, -43, 64, -11, -60, -102, -84, -78, 110, 18, -47, 49, 116, -7, 50, -65};
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
    msg.setTimeStamp(0.318992173075);
    msg.setSource(32783U);
    msg.setSourceEntity(153U);
    msg.setDestination(44313U);
    msg.setDestinationEntity(81U);
    msg.op = 106U;
    msg.name.assign("RWLAJEZPWVLWVUAHFCVOLBLSZLGKMQBAPHEVDNHQAZIRXAEVDRCBJJHDHSTYOPFTGGEBHGNIXKXXUAFBKKETXPCPFRNKVWPIFQACHYMCEVBOXYCVXJHZNEOPROFFTJTWURIUMBHSFUUIZJLCSLFCWXOYLVQGMSBQUYMAZKTIECQJKXTSPJMLY");

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
    msg.setTimeStamp(0.39348830646);
    msg.setSource(36253U);
    msg.setSourceEntity(9U);
    msg.setDestination(7804U);
    msg.setDestinationEntity(185U);
    msg.op = 191U;
    msg.name.assign("RNEWBESNXUQAFMPYHNQOWMAZARJPDPLRWCPFK");

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
    msg.setTimeStamp(0.555037558072);
    msg.setSource(55861U);
    msg.setSourceEntity(75U);
    msg.setDestination(52350U);
    msg.setDestinationEntity(186U);
    msg.op = 35U;
    msg.name.assign("SIHQURKDWOXUWYMHZAMCHNNRTJBCUNOJGXSIKFGVWVEBLTRKIKACLBZYCUYAXNRPBZDBPUCRYNJFFUKJWFNICVF");

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
    msg.setTimeStamp(0.662970338421);
    msg.setSource(41008U);
    msg.setSourceEntity(83U);
    msg.setDestination(8511U);
    msg.setDestinationEntity(242U);
    msg.type = 199U;
    msg.htime = 0.791890193268;
    msg.context.assign("JXUNEJFFIQGNWIXEOYGYIJTKZOR");
    msg.text.assign("EXNQGUUTKCKLMGQLHDJOLUDUSSEXUWVBVCRMJAFOCQENWKZBLUAXNWLHJSU");

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
    msg.setTimeStamp(0.303222628158);
    msg.setSource(34457U);
    msg.setSourceEntity(9U);
    msg.setDestination(17163U);
    msg.setDestinationEntity(36U);
    msg.type = 186U;
    msg.htime = 0.813240224568;
    msg.context.assign("VFMIZYWBRCLUAYBZFHMAMKENNEBHCLJXOFGPUCINKWVFPHTKIMSUFRQXETOYSQHBFCXTXPZXCSRUOKAAJUVBGIHPVNBEWYPLRWGISPOXAGUEADTTDZEHSKJSABCNRPXAPJEJRFJLHUDWXUZIDLJQVHSWGBGZKZTOQRWVFCJXSZGRKNLFIUKMNTYDBQGPQLHECQIHMWSYKMNCDBPYNLLFWNOLZQKISTMIAAG");
    msg.text.assign("SGGOUUSBQOUOSFMTOTQRONRTBNPXQUEQLPYGCPLHFJGDLKIQIMAWYHDMCNMVIHTWNEHHCRVQQHJFOGZGNKAWGDNSSSDXGZMOLXPBSKPJJXDOUVVPBPYSMNWRWGLBIRIQNYHKWLJDCKECUAYQAAXBENIWCYMPERVXJUVBZTKRDFRCFY");

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
    msg.setTimeStamp(0.235666090038);
    msg.setSource(5040U);
    msg.setSourceEntity(229U);
    msg.setDestination(2096U);
    msg.setDestinationEntity(146U);
    msg.type = 172U;
    msg.htime = 0.250298280105;
    msg.context.assign("SUZGQHANXHHNFVEMZOLCRXMQXFADHEUZGZIARSLNZWJJUUFKTTMWZMWWSKUPVFKSGLBYANFPZWHIXJCCZVVEHB");
    msg.text.assign("KSMYXMZSCGRPPZYASARNTYSMQWXOBJDLKGNWAJCMFKGRONCLSNKTLGZXETHIVCQPAEREWDPUYVLEWBWUHFIGFGCNPJATUNOIIHKCAMFCWQPKOQKRZXBJOVBDPZEBHDFXAIERIITKFFYUJVOFILPJVLWJACZZETYVXPARGOVBERKHYTDNUNCIUOIUW");

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
    msg.setTimeStamp(0.00936778059474);
    msg.setSource(41128U);
    msg.setSourceEntity(158U);
    msg.setDestination(53114U);
    msg.setDestinationEntity(52U);
    msg.command = 70U;
    msg.htime = 0.522860724052;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 177U;
    tmp_msg_0.htime = 0.453415684088;
    tmp_msg_0.context.assign("NDKACACNDSPPPDXMMZUSXYMGHFFPBZSSKBONGCFAIRNFVRJIFTIEIZJXELKIOGMQRCUYJPVIAPNUHQRHBZFWLQYNZMQIOOITHXSBUDYXKEYLWKIVAKKAYNWSGJYQHELFNOLCBGCMHWUZ");
    tmp_msg_0.text.assign("FTULTWVRIAVCLGAYAAJABDXVGMCJKCWBVZHBRRUZDOTBESTYFWWJAIKUKRPZOIWPGWHFA");
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
    msg.setTimeStamp(0.0304972615065);
    msg.setSource(57413U);
    msg.setSourceEntity(176U);
    msg.setDestination(57468U);
    msg.setDestinationEntity(192U);
    msg.command = 168U;
    msg.htime = 0.0436809809495;

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
    msg.setTimeStamp(0.66466725881);
    msg.setSource(16187U);
    msg.setSourceEntity(252U);
    msg.setDestination(4225U);
    msg.setDestinationEntity(11U);
    msg.command = 5U;
    msg.htime = 0.613664897573;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 35U;
    tmp_msg_0.htime = 0.697035108934;
    tmp_msg_0.context.assign("ULUAYGIBGSNXWTMSKATFUVSIIAFKERYZGEADDWEFTBFSEDUVITXXTJHBPKMKTAWQEVRGNERBTLMCRMSPMGWCYCHTJYCNQNNUGXZROISGQIOHLSGWOKQNFULIXQMQJXXZHBYNVZPMHFPCTKRRXAVWFBOMYQWPSBZUKEZWPLCMPPVUQPJAGJLAZQLHKBVAFIPGZ");
    tmp_msg_0.text.assign("EHTADBFQUCNCJCISGOVNYZOXARLTJZCIBWURCUEIYPDUPMZHEMFDLHZJSRUDUTVVMBWAJHOEFLSYMQYTATBEZ");
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
    msg.setTimeStamp(0.415875081144);
    msg.setSource(48998U);
    msg.setSourceEntity(223U);
    msg.setDestination(2483U);
    msg.setDestinationEntity(243U);
    msg.op = 27U;
    msg.file.assign("FXGFMCINAVZLNHFJNMVHRAVAJWLSJMYEAHDJBSNHIZTHCETXGLSKRVHDNDIBOBNSBXPQWKVBQQDWRFQTJJYSZPMOWUIXDEYANXXALTCPGIAPTHBKPLTOSUSBIDGBZLMOUXRHMFDEVCXREGVWQNORPCNQPTFOHSRAJELFTVRKOUYNYQWYZXCYKWEIYUEJCMAUDCVUBMBKKTKFHZXVPPSRIKEGDQCAYUGU");

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
    msg.setTimeStamp(0.361327462148);
    msg.setSource(41565U);
    msg.setSourceEntity(82U);
    msg.setDestination(17597U);
    msg.setDestinationEntity(45U);
    msg.op = 92U;
    msg.file.assign("WBRHKGIOOOMDXIZBWZGEFCUYTWTAQTWOLNBXQEWTQJDIAZUNXLFEVPVWRYXMMUPJERTDGLYGGYQGNUUKCTSQYSRIOPZOSGFJAFEOVPFPHPYLMUHVAONJTBEIQYFNQXSLGSJEVAOMXNCJECKCXKRDVIDPHVNIIUYBFMEPSTJADKCTZXCHVLLFZJ");

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
    msg.setTimeStamp(0.054601368523);
    msg.setSource(29805U);
    msg.setSourceEntity(41U);
    msg.setDestination(20446U);
    msg.setDestinationEntity(215U);
    msg.op = 44U;
    msg.file.assign("IAHAMPKNNWCKWAHLLRXIWANDUSBECDERXDZWKGETKGGRIQUTLATQZYHPNCOBAIVCYBUMQQRFVSIFVWOLQZKCEZNHNKQKPKALWFQDCNGMLJUDGA");

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
    msg.setTimeStamp(0.495613208281);
    msg.setSource(30325U);
    msg.setSourceEntity(223U);
    msg.setDestination(55756U);
    msg.setDestinationEntity(35U);
    msg.op = 178U;
    msg.clock = 0.874502322225;
    msg.tz = 81;

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
    msg.setTimeStamp(0.966061149515);
    msg.setSource(31399U);
    msg.setSourceEntity(0U);
    msg.setDestination(24403U);
    msg.setDestinationEntity(111U);
    msg.op = 225U;
    msg.clock = 0.888048230484;
    msg.tz = 20;

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
    msg.setTimeStamp(0.545669313257);
    msg.setSource(9381U);
    msg.setSourceEntity(181U);
    msg.setDestination(187U);
    msg.setDestinationEntity(254U);
    msg.op = 171U;
    msg.clock = 0.80612312657;
    msg.tz = -17;

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
    msg.setTimeStamp(0.765914549698);
    msg.setSource(54098U);
    msg.setSourceEntity(15U);
    msg.setDestination(22603U);
    msg.setDestinationEntity(159U);
    msg.conductivity = 0.651705317275;
    msg.temperature = 0.877019754996;
    msg.depth = 0.998159983525;

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
    msg.setTimeStamp(0.761013837567);
    msg.setSource(885U);
    msg.setSourceEntity(190U);
    msg.setDestination(44386U);
    msg.setDestinationEntity(175U);
    msg.conductivity = 0.727877840989;
    msg.temperature = 0.028269265283;
    msg.depth = 0.031497523418;

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
    msg.setTimeStamp(0.641323822727);
    msg.setSource(9551U);
    msg.setSourceEntity(159U);
    msg.setDestination(39027U);
    msg.setDestinationEntity(226U);
    msg.conductivity = 0.979725538257;
    msg.temperature = 0.110956804677;
    msg.depth = 0.961556959512;

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
    msg.setTimeStamp(0.391393511141);
    msg.setSource(3471U);
    msg.setSourceEntity(106U);
    msg.setDestination(6804U);
    msg.setDestinationEntity(12U);
    msg.altitude = 0.735565413254;
    msg.roll = 49216U;
    msg.pitch = 20005U;
    msg.yaw = 62912U;
    msg.speed = 26718;

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
    msg.setTimeStamp(0.88545845018);
    msg.setSource(56420U);
    msg.setSourceEntity(103U);
    msg.setDestination(50204U);
    msg.setDestinationEntity(209U);
    msg.altitude = 0.778590605742;
    msg.roll = 1731U;
    msg.pitch = 44797U;
    msg.yaw = 54994U;
    msg.speed = -3413;

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
    msg.setTimeStamp(0.665093621801);
    msg.setSource(9561U);
    msg.setSourceEntity(76U);
    msg.setDestination(49093U);
    msg.setDestinationEntity(238U);
    msg.altitude = 0.51857863792;
    msg.roll = 14326U;
    msg.pitch = 60991U;
    msg.yaw = 32592U;
    msg.speed = -26443;

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
    msg.setTimeStamp(0.669599817963);
    msg.setSource(30591U);
    msg.setSourceEntity(188U);
    msg.setDestination(36626U);
    msg.setDestinationEntity(2U);
    msg.altitude = 0.398423401633;
    msg.width = 0.601076802523;
    msg.length = 0.0134939480962;
    msg.bearing = 0.215587097008;
    msg.pxl = 29304;
    msg.encoding = 221U;
    const char tmp_msg_0[] = {13, 28, 9, -78, 91, -27, 39, 86, -73, -2, -70, -17, 23, -46, 57, 4, -81, -49, 37, -38, -72, 42, 113, 47, 122, 107, -32, -15, -72, 28, -87, 85, -107, 66, -81, -111, 33, 82, 65, -87, 13, -36, -122, 66, -64, -61, -102, 9, -116, -20, -36, 70, 123, -79, -73, 67, -68, -90, -101, -123, -50, -20, 75, -92, -40, 92, -97, -112, 74, 106, -56, 51, -59, 14, -31, 58, -67, 65, -36, 24, 6, 103, 118, -115, 7, 29};
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
    msg.setTimeStamp(0.851499275078);
    msg.setSource(5727U);
    msg.setSourceEntity(116U);
    msg.setDestination(33962U);
    msg.setDestinationEntity(238U);
    msg.altitude = 0.255480840315;
    msg.width = 0.615136319223;
    msg.length = 0.042115819915;
    msg.bearing = 0.845646478265;
    msg.pxl = -29961;
    msg.encoding = 214U;
    const char tmp_msg_0[] = {-27, -74, -74, -102, -103, -51, -6, 83, -71, 0, 28, -86, 48, 103, 71, 13, -117, -66, 67, 7, -76, 38, 4, 1, -28, 102, 90, 102, -107, -109, -109, 47, -113, 65, -9, 114, 93, -115, 6, 93, 25, -25, -54, -10, -60, -43, -37, 42, -20, -5, -83, 123, -51, -95, -51, -7, 108, -84, -94, 109, -52, 53, 66, 51, -11, 94, 75, 50, 15, -102, -118, -80, -39, 102, -97, 37, -54, -8, -7, -120, -40, -94, -19, -128, 106, -60, 40, -75, 69, 100, -32, -112, -9, -55, -84, -84, -107, 91, 68, 115, -69, 82, -128, -23, 87, -34, 29, 37, -84, 45, 92, 28, 58, 84, -50, -25, -75, -54, -66, -34, -65, 37, -32, 41, -40, 86, 28, 77, 66, 7, -121, 84, -59, -66, 23, -82, 9, -16, -17, -34, 66, -45, -34, -13, 66, -11, 89, -88, 107, -39, 37, -90, 50, 48, 16, -115, -109, 122, 105, -48, -128, 66, 49, -125, -92, -71, -92, -65, 90, -36, 59, -97, -13, 33, -60, 76, -27};
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
    msg.setTimeStamp(0.415933508443);
    msg.setSource(51635U);
    msg.setSourceEntity(85U);
    msg.setDestination(51382U);
    msg.setDestinationEntity(244U);
    msg.altitude = 0.0346150188789;
    msg.width = 0.250181358488;
    msg.length = 0.462972060091;
    msg.bearing = 0.503902768626;
    msg.pxl = -3818;
    msg.encoding = 157U;
    const char tmp_msg_0[] = {-97, -124, -109, 63, -46, 104, -30, 37, 19, -74, 83, 67, 97, -113, -60, 114, 26, 53, 66, -117, 103, -27, 27, -111, 77, 94, -17, -22, 22, -78, -87, 47, 1, 94, 19, -4, -39, 7, 17, 33, -99};
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
    msg.setTimeStamp(0.345040302821);
    msg.setSource(9770U);
    msg.setSourceEntity(198U);
    msg.setDestination(24303U);
    msg.setDestinationEntity(145U);
    msg.text.assign("VFGYNYJDXDJHHLTNCTWTLKFOCSMALSBCIYEEOQPNONFZZNXQLNZRXLQEAITGQKAXWDVHSYUJIZCSZSBYOKNPRRAJWHPVURZBNWULTGWBKIETONQXVOIRFZKKBMGNPPUIBMOBDXH");
    msg.type = 115U;

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
    msg.setTimeStamp(0.897736112926);
    msg.setSource(39675U);
    msg.setSourceEntity(46U);
    msg.setDestination(43281U);
    msg.setDestinationEntity(221U);
    msg.text.assign("QUBPKUUUXMSHEXRRNAAKZRJXSCDRWAPVFUESETIWKSJNAAABHCIFJDQGPTVEHFHBHPJLTUBMMXXBLWISUCTWLXTCDGOULLYEIRNVTUBKTQMRTCXKFVOGLZBXCBYEUMOYVTKNLJCVFZVDLJLVFRBNIHKONFANYMIPQGFMZZXVESOWGOQCOQZPYONIYGXWMDCVZIAHQKLPOJJSI");
    msg.type = 230U;

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
    msg.setTimeStamp(0.957675965492);
    msg.setSource(64237U);
    msg.setSourceEntity(134U);
    msg.setDestination(5630U);
    msg.setDestinationEntity(114U);
    msg.text.assign("JAJILTVBIHZTWMIXYLESLOTZQRWENJRCRKGYFMYIZNIUNWSRFPCGLDUNBOXCRZNJCVYMVGFEXZMHHVDFPFXBGKPVKQBLTNKRZJRENKOTJCCBADOWRCDBLUSYQACGLVEWAAUIQIDZKUWFYKADVZQQEBSNTOHWPKHXXFSAQYDHNTSAQFPQTHWWHOFMJDHYBEJXGXSFMLKWUVOR");
    msg.type = 75U;

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
    msg.setTimeStamp(0.0487483019677);
    msg.setSource(2772U);
    msg.setSourceEntity(17U);
    msg.setDestination(63051U);
    msg.setDestinationEntity(83U);
    msg.parameter = 5U;
    msg.numsamples = 184U;
    msg.lat = 0.825576666743;
    msg.lon = 0.583216865293;

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
    msg.setTimeStamp(0.573388191109);
    msg.setSource(16773U);
    msg.setSourceEntity(37U);
    msg.setDestination(49635U);
    msg.setDestinationEntity(109U);
    msg.parameter = 123U;
    msg.numsamples = 134U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 31370U;
    tmp_msg_0.avg = 0.327194007253;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.569905089893;
    msg.lon = 0.431048331282;

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
    msg.setTimeStamp(0.165583693846);
    msg.setSource(10952U);
    msg.setSourceEntity(166U);
    msg.setDestination(26063U);
    msg.setDestinationEntity(11U);
    msg.parameter = 131U;
    msg.numsamples = 80U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 38092U;
    tmp_msg_0.avg = 0.252485125562;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.55870866964;
    msg.lon = 0.809773428811;

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
    msg.setTimeStamp(0.148851632103);
    msg.setSource(39512U);
    msg.setSourceEntity(47U);
    msg.setDestination(8714U);
    msg.setDestinationEntity(131U);
    msg.depth = 34209U;
    msg.avg = 0.113982203082;

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
    msg.setTimeStamp(0.303750322319);
    msg.setSource(4869U);
    msg.setSourceEntity(91U);
    msg.setDestination(64029U);
    msg.setDestinationEntity(30U);
    msg.depth = 16077U;
    msg.avg = 0.677589115754;

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
    msg.setTimeStamp(0.493040973354);
    msg.setSource(50726U);
    msg.setSourceEntity(225U);
    msg.setDestination(6325U);
    msg.setDestinationEntity(249U);
    msg.depth = 16282U;
    msg.avg = 0.854280427978;

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
    msg.setTimeStamp(0.918095480675);
    msg.setSource(51784U);
    msg.setSourceEntity(207U);
    msg.setDestination(27650U);
    msg.setDestinationEntity(62U);

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
    msg.setTimeStamp(0.551853802641);
    msg.setSource(5408U);
    msg.setSourceEntity(67U);
    msg.setDestination(20843U);
    msg.setDestinationEntity(2U);

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
    msg.setTimeStamp(0.609977217737);
    msg.setSource(32028U);
    msg.setSourceEntity(88U);
    msg.setDestination(29355U);
    msg.setDestinationEntity(83U);

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
    msg.setTimeStamp(0.197628124546);
    msg.setSource(32226U);
    msg.setSourceEntity(97U);
    msg.setDestination(43972U);
    msg.setDestinationEntity(167U);
    msg.sys_name.assign("YNIMGAISNOYBCTFOIDPMQYTLYRTNRZAUBVUCVSEDFPFMBCDCJAJIRGWMBTEEQKRDPEFAZHLHUMWCQKGAKMNGPGOUIWUVTZJXNORPXQJIDVTSFQXEZBBEEKHWAKVWDHRJCQLCZPBAELOEIWXZYKUZCSLWIVGGRGYCTDVDJRKXXYVFHYMSXNNPKCUDMWLNQGAZLBKZJTTFWKJVQ");
    msg.sys_type = 11U;
    msg.owner = 43771U;
    msg.lat = 0.560568440357;
    msg.lon = 0.249268624746;
    msg.height = 0.541928504471;
    msg.services.assign("DSHCPDWBVPSMZFNOYTUFGHJLFKCEERCUWHBUNUTQZMPKRHOTJLNILLLEZUEKAZQOSXXEGZRESVIYZEJCDXGFOFWTAVWYTPKMGRMSUMRUBRQTMMJTQMLMOHKRNCAQZUIFFYADHQBKDQXIVGQDSJFNKQBCLKNHANC");

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
    msg.setTimeStamp(0.881554760553);
    msg.setSource(58865U);
    msg.setSourceEntity(122U);
    msg.setDestination(27996U);
    msg.setDestinationEntity(40U);
    msg.sys_name.assign("HHNCCFOWTIQZ");
    msg.sys_type = 163U;
    msg.owner = 49187U;
    msg.lat = 0.992090735939;
    msg.lon = 0.282285586179;
    msg.height = 0.683523099892;
    msg.services.assign("WTSLLRTONUEMYHFDDKRRENDJWCKIAPLKUTKAXBINYRGLJXACBXLDEKMESBNLCNCNXIVOSZPIHIZAOAOJUKJOHSWMSPHZEQIMHUAPZPGGWYMMIZRBWNVBTSXVRFKQVIUUFJPYBWQOVPAYJKWSMJGFYFMLKDEQXUXXIZFHVJFNRMWSYETLKHXWRCVRFYQLEODQPHTDPEOGXGVCAZCYDCVUNBGYVQDH");

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
    msg.setTimeStamp(0.000363155609643);
    msg.setSource(1914U);
    msg.setSourceEntity(69U);
    msg.setDestination(42682U);
    msg.setDestinationEntity(75U);
    msg.sys_name.assign("QJTXWLSXLIOYOIMKHUZRZCVRSFNROMSWPHYIUPOBSKJEQZXVHKODWHGNUNENKIVEUMUJLPLDPJEFRDLBBZGFBQSZFAUIWOCYXSFOAQHWBASNSYWITDQHEMYDJWMVTDMVCAADTFEDKEDEONPHDTBNWXCFMGXTTVIRMYCJPKRUAFQPZBWIRVEHRZJYQIOYJCGFBFTKKRYLZUBJCNHPTOCLGKHPYGMQNXPQIVCEANMBAZGRLXVVGAG");
    msg.sys_type = 91U;
    msg.owner = 2477U;
    msg.lat = 0.948448461148;
    msg.lon = 0.530963685337;
    msg.height = 0.533533852688;
    msg.services.assign("RTSNTQZBCDKHILVZWQEROHIRDKXNJLLCBYIYQXZKGXUNPNTTALOEPAHCUGGEUNYNHSXAKOEIGLSTPYQKUYSCFZHPVSZJRBPBZFMKFGBCBBJGIMPJRUKHQWKJCAEUZOHVWENIFVBBESXAMQIHAZMMICDWTWFWIDEXYPCLUDRJDQSUQAXEV");

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
    msg.setTimeStamp(0.916808632775);
    msg.setSource(51666U);
    msg.setSourceEntity(195U);
    msg.setDestination(19837U);
    msg.setDestinationEntity(140U);
    msg.service.assign("MZQGUMREJLAXYE");
    msg.service_type = 203U;

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
    msg.setTimeStamp(0.722951322327);
    msg.setSource(5095U);
    msg.setSourceEntity(70U);
    msg.setDestination(10543U);
    msg.setDestinationEntity(171U);
    msg.service.assign("CTXZMSIANEJNXKXTPQEVBECIGPDMHIOXVRCFCYFMXQOVUHKKAJTUWPILJAEYSJULTHDUKRFMWTIWPGBPCIKBLVI");
    msg.service_type = 19U;

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
    msg.setTimeStamp(0.669286646007);
    msg.setSource(8171U);
    msg.setSourceEntity(248U);
    msg.setDestination(3094U);
    msg.setDestinationEntity(207U);
    msg.service.assign("OWVAMJUWLLBHZEJXFTHXGPERPSDSWIWNZYCSGRFYQYOVYPYMEETKXPUURKZSKFEWXYXJBNZLURGVRNTJAGJSYBPIKNKRVVUNQCLLFUIBDMUQDEFOMMMHXSEFTWPIEIDBJBBECYLGHAMKBHFSVIAROATZCPNCDHAHXPZJQGTKQAPQDXMPOWKWRVWJCMNHGSZGVVYXNFACQNQOZOSOJTESBRDVIH");
    msg.service_type = 104U;

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
    msg.setTimeStamp(0.603726226973);
    msg.setSource(20842U);
    msg.setSourceEntity(53U);
    msg.setDestination(24548U);
    msg.setDestinationEntity(19U);
    msg.value = 0.390456360664;

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
    msg.setTimeStamp(0.196621926674);
    msg.setSource(58295U);
    msg.setSourceEntity(188U);
    msg.setDestination(42379U);
    msg.setDestinationEntity(45U);
    msg.value = 0.495416781703;

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
    msg.setTimeStamp(0.85871757664);
    msg.setSource(23091U);
    msg.setSourceEntity(144U);
    msg.setDestination(26884U);
    msg.setDestinationEntity(30U);
    msg.value = 0.807943423899;

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
    msg.setTimeStamp(0.425523346759);
    msg.setSource(64152U);
    msg.setSourceEntity(55U);
    msg.setDestination(55564U);
    msg.setDestinationEntity(58U);
    msg.value = 0.47715240046;

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
    msg.setTimeStamp(0.505755266906);
    msg.setSource(44385U);
    msg.setSourceEntity(190U);
    msg.setDestination(58044U);
    msg.setDestinationEntity(143U);
    msg.value = 0.493245848646;

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
    msg.setTimeStamp(0.744683420687);
    msg.setSource(55744U);
    msg.setSourceEntity(50U);
    msg.setDestination(41481U);
    msg.setDestinationEntity(230U);
    msg.value = 0.698715257145;

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
    msg.setTimeStamp(0.812505748124);
    msg.setSource(40551U);
    msg.setSourceEntity(207U);
    msg.setDestination(53920U);
    msg.setDestinationEntity(56U);
    msg.value = 0.0619791318965;

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
    msg.setTimeStamp(0.710170428689);
    msg.setSource(5399U);
    msg.setSourceEntity(25U);
    msg.setDestination(8617U);
    msg.setDestinationEntity(246U);
    msg.value = 0.421155973878;

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
    msg.setTimeStamp(0.879676720229);
    msg.setSource(57318U);
    msg.setSourceEntity(132U);
    msg.setDestination(26081U);
    msg.setDestinationEntity(206U);
    msg.value = 0.757278511242;

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
    msg.setTimeStamp(0.778603472385);
    msg.setSource(36113U);
    msg.setSourceEntity(225U);
    msg.setDestination(7609U);
    msg.setDestinationEntity(147U);
    msg.number.assign("BDMXKZLDQYEBZNORBJFMVETTJIRDOVSWTHFCILQZOMQPEWWAPECGPWPNLQYCNMEJBEXMYKXGODFNUXFBZOXKHIIUEYRUPQCGJWKASMZCHSJHCUTXKCZXQEDQDMOHJZKRAVHXYTDWNUVSFKNHCISGLTBTSDLDUWAFZRZOCTQVIGPGTHUJMSJRKDBVPSVUSYOXBNLPUKZ");
    msg.timeout = 40115U;
    msg.contents.assign("ENXGGNDOLJTQWDYQCKBQFJXPIHRFQMGUWAUNZKVFJYRPSFIALLTJNESJTSQLCDFMHEYIVUENPSJKZHGKSMBWGUYCVRRBIAGRQHLRFHLBIYGUNSIPVGAOCJBTWLZEXVCBZDLHVFPZXSUGJTSIIKOLCAEXDMPXTMKCPDQAMTHPASDWGZVXFBCRMZYYEKZUNKUPQREAJDBC");

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
    msg.setTimeStamp(0.145830753005);
    msg.setSource(10885U);
    msg.setSourceEntity(40U);
    msg.setDestination(43835U);
    msg.setDestinationEntity(87U);
    msg.number.assign("ZOOORODZTQYASEEBHFHUTXPYFILZGNNMUSHQVPULJQLSBYILHKMJLIAKJBBWJPKPTIQWGAFVXZGRTEVXDQUORMWBGXDBDWVYNRKSAOJVXLCHVGFUSQOKTWMRYKKFYLLFKMNIFETUNNVCMXNTIJIXCDRPRCVBPWMJMLBAYNNTGGDPIFHEJYUQPCDQSWMHZQHXZRZSVDSTGGECKCHYYHBRXFEOTUUWJJFWUAEQPWZSMORAPCAIE");
    msg.timeout = 13410U;
    msg.contents.assign("ZXWCIEHQISSEKEBLDJZFJPDWEDXGWCKMKEQARIZFAOZNRIIXEZTAKWYHYCOKNJMLWEQOBHXTBSXCKVELRPUGHRJHTZBFLNJADSUHFBWKPBQYRFNNRKPZASSTZOKYZQYCDBADUXHJEJNMFUGJGISMIATMGFYCVRITSTCQUTRNVBXEWUOZPFXIMWFSHOYLWDRXYXOVFVANVORVGWYSKTUQVCQPPNADQPUVPAHGBJDILOLUMJUCBM");

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
    msg.setTimeStamp(0.462186337108);
    msg.setSource(37648U);
    msg.setSourceEntity(80U);
    msg.setDestination(10823U);
    msg.setDestinationEntity(128U);
    msg.number.assign("SUQPDJVCGHOAZOPUQMQJCMGNXPKEINSXENMATZOLTPZDMRILCPLGYNEEQHOSKGJ");
    msg.timeout = 58968U;
    msg.contents.assign("NRNGXFZISKKJXWOPYNUIETVJUBUEFDAZEKBBFKXFIZDPUSINPCZYDVRBWGHU");

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
    msg.setTimeStamp(0.448866433774);
    msg.setSource(58457U);
    msg.setSourceEntity(100U);
    msg.setDestination(8586U);
    msg.setDestinationEntity(56U);
    msg.seq = 2548088965U;
    msg.destination.assign("MRHDSLCLWBNBVEUYUKMLAYCQSNSMHTDHJNJRCFYPDMXGKSOKFVPQDTEYIBXTZZJWSMHDBOGOHEXQAHZOCANNXIXVGBFWKZIKULGIVRNAFIYZSKJLMUOINQTDKYLBSPZHVQNUAXQZDSBRCGETWFGERYBYLIOXWIAWAKBQJEJFECIUPSFBLYWETXPXTCURJQHZMFKVOPNWGCJDFFTMLURGHKPOJTDXJPWWARMCVCGEPARHUSPDAOZN");
    msg.timeout = 64736U;
    const char tmp_msg_0[] = {22, 92, 118, -117, 80, 18, 31, -58, 10, 126, -8, -66, 76, 45, -73, -122, -96, 113, 21, 70, -11, -47, 61, 43, -50, 71, -53, -79, -52, -1, 115, -82, 101, -29, 97, 16, -39, -7, 2, -124, -99, 110, -30, -20, 31, -123, -65, 77, 80, 63, 48, -17, -70, 85, 81, 63, 94, 95, 34, 32, -51, 119, 105, 9, 102, -4, 21, 103, -51, 23, 125, 85, 29, 110, -78, 34, -104, -27, 53, 17, 66, -78, 48, 12, 10, -37, 108, 74, 80, -114, -99, 2, 10, 61, 53, 86, -45, -98, 16, 3, -122, 26, 112, 105, 69, 70, 47, -28, -54, -41, -77, 74, -57, -48, -73, -125, 104, -98, 89, -8, 100, -9, 71, -35, -109, 104, -44, -110, -67, -41, -123, -49, 115, 3, 71, 11, -41, -99, -30, 18, -6, 8, 125, 37, -60, 120, -6, -11, -38, -78, 25, 107, 64, 88, -54, -111, -46, 24, -82, 52, -65, -112, -122, 82, 107, 124, 61, 103, 0, 42, -122, 25, -103, 41, -6, -33, 99, -6, 33, -94, -4, 123, 53, -121, -25, 79, -123, -40};
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
    msg.setTimeStamp(0.299723887218);
    msg.setSource(50965U);
    msg.setSourceEntity(137U);
    msg.setDestination(17446U);
    msg.setDestinationEntity(16U);
    msg.seq = 1758778338U;
    msg.destination.assign("APATCJJKSUSOAQETEBRWHZXZVIWMIUSFGMWMIVFHUNTTKPJDSVYISSUOWOTMDCPTLHYXNERPDCAFLQNAXUNMZXKPKGLRHUSURSPBHLMDEADKCEBFIVJPMQTWNPRZZLHJBVFQZJYDCYMRUMXPFKQCXRGQFEKTJJSIYGYGKTLICNJCOVDRYZVOXQ");
    msg.timeout = 32418U;
    const char tmp_msg_0[] = {78, 125, -94, 122, 116, 41, -2, -81, -19, 74, -122, 21, 69, 125, 120, -55, -102, -66, 69, 1, -94, -3, -125, -106, -84, -44, -26, -33, -3, 49, -69, 86, 53, -85, 67, 104, -84, 33, -57, -124, -21, -127, 11, 37, 102, 69, -91, 46, -47, -55, -16, -97, 116, -94, -66, -42, -1, 51, -81, 83, 11, 66, 110, -22, 44, 111, -65, -11, 121, 78, 6, -90, -86, 124, -53, -12, 82, 25, -40, 16, 65, 41, -64, 84, -30, -112, 104, -115, 58, -38, -38, 91, 57, -31, 14, 91, 11, -78, 21, 87, 107, 69, -101, -118, 20, -63, 70, -117, 97, 39, 111, -121, -122, -2, 90, 87, -110, -87, -1, -52, 78, 69, 115, 61, -86, -80, 82, 31, 96, 122, -92, -7, -69, -74, -26, 32, 22, -12, 79, 94, 24, 121, -15, 118, -29, -72, -77, -68, 51, 118, 45, -25, 92, 103, 104, 96, 65, 8, 5, -44, 13, 14, 117, -29, 50, -77, -119, -22, -8, 50, -113, -91, -98, -109, -3, 26, 91, -92, 8, 31, -47, -69, -114, -95, 113, -16, 121, 104, 74, -95, -60, 56, -17, -37, -1, 18, -27, -21, -122};
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
    msg.setTimeStamp(0.941736942811);
    msg.setSource(9252U);
    msg.setSourceEntity(155U);
    msg.setDestination(30098U);
    msg.setDestinationEntity(230U);
    msg.seq = 2712806149U;
    msg.destination.assign("LJDEATOOIVGLHTKYLOBJLNIJZFDWFEASXXBTZRKFENQHYGSMCNQOSVMPRUKYWJNEKKYIDHUHQTOMIXVDVTZPHMPOQYNZURCMQFVGEHESBNWKUYBGUBJZAW");
    msg.timeout = 31483U;
    const char tmp_msg_0[] = {72, 94, 102, 72, -13, -63, -128, -108, 15, -6, 97, 14, 99, 94, -113, -79, -26, 93, 54, -98, 119, -51, 81, 76, 125, 89, 46, -127, 62, -3, -81, 120, 76, 60, 83, 0, 4, 15, 102, 121, -81, -42, 19, 113, -81, -47, 61, -48, -36, -23, 18, -65, -56, -81, -7, 84, 66, -63, 109, 73, 87, 21, -22, 46, -119, -108, -1, -112, 93, 107, 20, -68, -3, 40, 125, -71, -96, -30, 23, 94, -28, -13, 10, 79, -3, -30, -98, -27, -119, 117, -89, 66, 99, -80, 107, -60, 23, -108, 56, 77, 36, 110, -103, -42, 110, 89, -53, 38, 16, -126, 120, 33, -37, 113, -128, 103, 64, 6, -64, 61, 106, 119, 20, 25, 13, -78, -4, 107, -128, 59, -27, 72, -10, -31, -126, 119, -37, 74, -96, 34, 104, 112, -26, -128, 100, -42, 93, 51, -48, -88, -112, 72, -17, -91, 67, 38, 26, -102, -26, -25, 55, 121, 73, -33, -41, -94, 83, 59, 12, 110, 84, -77, 114, 68, -76, 39, -105, -52, -81, -104, 50, -14, -118, -45, 34, 27, -51, 26, -105, 98, -73, 90, 30, 88, 33, 12, 78, 93, 125, -81, 40, -40, -8, -29, 17, -126, -108, -70, 55, -46, -95, 32, 17, -50, 23, -90, 95, -62, -73, -64, 113, -117, 110, -47, -26, -121, 16, 67, 90, 56, -13, 104, -42, -26, 126, -96, 46, -26, -100, -22, -5, 118, -94};
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
    msg.setTimeStamp(0.303971091164);
    msg.setSource(63048U);
    msg.setSourceEntity(69U);
    msg.setDestination(46394U);
    msg.setDestinationEntity(50U);
    msg.source.assign("EPMRYKODFXYPMTGITPBLIXGVZBAQCXMOWHJSZYCGJEYORBWFERVHTIMROZLAMHKMDPNNGCBTDOFXVDIJGUNHIHSVWUEQOFAEMUXHAYQSBCUGXRSKDNFNNPAEZMGTZQHQPULWKIZDOHSNTJRSJKYXVLWTFRMZKGBTQEJZRLKLDTQDQUVFAHAMJNKDARDNNOXCIZYBUVLHFLKXFWUOUCYEQLIBIFUJGRKBSVAEWWAZSEOLITBYXYPSVCVCCP");
    const char tmp_msg_0[] = {-81, -36, 42, 53, -32, -20, 72, -78, 61, 113, -90, -109, -50, -119, 105, 50, 50, 39, 46, 118, -69, 28, 37, -52, 121, -29, -96, -74, -93, 18, 93, -57, 98, -126, 59, 124, -26, -56, -45, -112, 20, 81, 101, 59, -11, 116, -48, -94, -42, 66, -123, -52, -19, -12, -112, 117, 6, -2, 105, 81, 65, -26, -70, -124, 25, 101, 15, -125, -19, -7, 27, -115, 123, 5, -60, -79, -49, -56, 32, -96, 124, -47, 56, 18, 92, -22, 83, 63, 24, 73, -107, 38, -98, -105, -82, -99, -61, 39, -31, -16, -26, 59, -35, -55, 109, -109, 4, 14, -85, -14, 85, 44, 56, 105, 13, -27, -32, 96, 63, -11, 24, 86, 104, -118, 110, -97, 101, -40, 17, 19, -24, 126, -8, 107, -80, 27, 98, -26, 18, -12, 55, 12, -62, 15, -106, -102, -37, 124, 33, -57, -76, 23, 47, -94, -71, -61, 1, 54, -20, -25, -118, -38, -4, 122, 117, -81, 74, 123, -126, 38, 81, -33, -108, 123, 62, 45, -78, 27, -4, 92};
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
    msg.setTimeStamp(0.222443711357);
    msg.setSource(46204U);
    msg.setSourceEntity(122U);
    msg.setDestination(19042U);
    msg.setDestinationEntity(233U);
    msg.source.assign("QXXEURZUQKZGDRYQSJZZLMNZHBKLWSVVNOECINEIJYCJJLXSDLMBDGZKIERRVJUPQSTFDAGHYKPCCXXLPSTQIXKMTMUIMZNIVASGCPPWGWYUQEVTBUYTMGFRCFVCMWAWFJEGHFZBPKAMLAWODONWHSDEBYOUFIEIRYWLRXHNNPKNJFDSMOOLRGTJBTCQEVIKQQSFXYOIPOVWNBABBGS");
    const char tmp_msg_0[] = {111, -109, -110, -5, -11, -9, -63, 10, -89, -89, -89, 110, 38, -75, 39, -52, -51, 72, -86, -92, 89, -15, 80, -128, -51, -122, 94, -107, -84, -68, 26, 120, 79, 71, -39, -41, 15, -75, -44, 50, -109, -106, -72, 70, 82, -51, 12, 6, -90, -53, 101, 101, 46, 17, -113, 50, 5, -75, 81, -107, 123, 7, -96, 121, 115, -115, -51, -86, -82, -55, -127, -34, 112, -65, 34, -103, 100, 4, 38, -59, 50, 9, -23, 29, 7, -47, -56, 88, 78, -95, -70, 50, -57, 43, -66, -16, -63, -108, -64, 64, -16, 69, -125, -54, -58, -111, -83, 14, -114, 18, -122, 48, 2, -94, -15, -90, -55, 126, -104, -89, 20, -13, -34, 29, -23, -35, -109, 88, 38, -54, -46, 18, -101, -47, 41, -49, -17, 77, 5, -84, -57, -127, 18, 72, -29, 113, -57, -76, 55, 43, -107, -112, -9, -128, 115, 112, -114, 29, 122, 100, 4, -79, -44, -10, 113, 97, 23, -66, -50, 38, -5, -126, -49, -61, -38, 72, -90, -38, -42, 46, -45, -39, -102, 18, -23, -117, 29, -20, -26, -106, 26, 84, 51, -96, 39, 92, 107, -58, 77, 17, -128, 87, 9, -92, 91, -8, 99, -62, -1, 48, 76, 121, -106, 36, 8, 18, -82, -127, -121, 87, -74, -74, -89, 115, 91};
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
    msg.setTimeStamp(0.371029813762);
    msg.setSource(59916U);
    msg.setSourceEntity(24U);
    msg.setDestination(42612U);
    msg.setDestinationEntity(86U);
    msg.source.assign("QLGUFLPQGZXANOUXWKGYOVROZFNXQVGWYXPQVTATXNVBRWTFGDHROXKQUSLGLTNJIDQEJSEAIPLCMXCYWFHPRLQNBTSMFIWTJETEHNEUYHKBXAMMXYCDFMEDILWADBJDTRFVWHGKNUZRNYLPJAKGVYIQJYJOZVBPPIK");
    const char tmp_msg_0[] = {-116, 116, 43, 109, 80, -59, -86, 30, -25, 104, -93, 125, 47, -121, -52, 8, -10, 7, 8, -4, 75, -123, -88, -70, 94, -116, 117, 100, 95, 64, 13, 114, -84, -52, 17, 98, 87, 112, 56, -17, -71, 24, -37, -103, -8, 63, -35, 112, -80, 33, 59, 97, 111, -103, -5, 49, -91, 50, 89, 55, 2, 90, 21, 95, -5, 14, 18, -60, 12, 119, 87, -9, 2, 85, -94, -6, -51, 20, -10, 72, -119, 24, -47, -70, -49, 9, -26, -9, 125, 71, -110, 19, 87, 48, 120, -91, -25, -57, 126, 104, -1, 79, -42, 37, -119, -56, -17, -76, -37, -99, -40, -51, -13, -122, -5, 4, -42, 95, 8, 56, 56, 19, -39, 34, -50, -118, -43, 83, -81, 75, -14, 23, 100, 12, 14, -5, 50, -43, 113, -46, -64, 14, -79, 120, -51, -108, -23, 79, -60, -6, -88, 8, -16, -122, 95, 24, -61, 33, -41, -87, -45, -77, 40, 93, 98, 112, -118};
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
    msg.setTimeStamp(0.830785282101);
    msg.setSource(9050U);
    msg.setSourceEntity(165U);
    msg.setDestination(8268U);
    msg.setDestinationEntity(85U);
    msg.seq = 3146436621U;
    msg.state = 160U;
    msg.error.assign("MMBHERICYOQUZGJIQZZXIROQXXPUUUUZOVVFVCQNFNTHWYDKDIPHGSXWKFBDWERWJWRGPHZKOPWGVGOEGODMYUAEEJMLYJSLEAIHKWAFQVCBTBUHOWAVIEAMTYFBRBFQAPXWBVLBYDYPIO");

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
    msg.setTimeStamp(0.739725016037);
    msg.setSource(60359U);
    msg.setSourceEntity(238U);
    msg.setDestination(32586U);
    msg.setDestinationEntity(157U);
    msg.seq = 1585385462U;
    msg.state = 166U;
    msg.error.assign("RHMUSBEPCBYEGOHLZDCYCBPNEUVYQTCETRTBBATZAPCUDUWDFXKLAXFMROFMRWUGQQCIVSVCUZQIPJFFGKXIXHEKTGRZKZDNTLTKQZDIYJNAQNKDYYGHXNXCADLMFCJRAITY");

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
    msg.setTimeStamp(0.0124192962189);
    msg.setSource(57952U);
    msg.setSourceEntity(73U);
    msg.setDestination(64578U);
    msg.setDestinationEntity(5U);
    msg.seq = 729197454U;
    msg.state = 14U;
    msg.error.assign("HWEUJABXIEFNBIVHELGEPUQTFYKNJRHFZIUDNVMETSLYMYSJLZKLPHSXQGNWGAPMUDGMKEXWAQKXKUWQMOECCTQPKPDGCIGSWDRSOTVXSTCYNGUDZCZKQJCWVORHBIFTPQNFYKTWYBOIVGBLRRMOBMWAEFCZEBI");

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
    msg.setTimeStamp(0.189575070341);
    msg.setSource(51585U);
    msg.setSourceEntity(27U);
    msg.setDestination(39862U);
    msg.setDestinationEntity(105U);
    msg.origin.assign("QVSRTLBFZYFXXVQUR");
    msg.text.assign("MIAGULQTGKAONZXMFONWGEFPTJHVAVZMVUQYRYMZKTJGSDYGKUIASOXAOPTHDBSISEFXMZXUBPFDKMGCGBCHZDYUAJXGEHXNAWTNLSSFWWTIJVMOGNHPDSOLPOHRPJRTWBKLYSJQOJDZSLCRVRUDZEWNBWQQPIJRHOTTYVRWNUCLPEYWJCFNSEGXOY");

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
    msg.setTimeStamp(0.473935408145);
    msg.setSource(17030U);
    msg.setSourceEntity(179U);
    msg.setDestination(36110U);
    msg.setDestinationEntity(59U);
    msg.origin.assign("ULKIDVVITXQUYHDCQNHIIVGWYWSFRXBGZMZVKEKCQDFAGPYEKPPINCLBKBNKBTSCUMIOWQEEDAEPUDHWYMJRHCLBFNAFMSCFMZKRGPDRNVVGUAOSHPGLXYJEAUIZCMLSPOGCWLABDJUIHDQJJRWDFOTPLEBVQOBOKYQWSRXMOJBYQATEVI");
    msg.text.assign("RESLBWDUSNKTIZFLRDLQGVZSLWZVNMNJVOPDZRFQTRPHUPBEMHYTLERUBQYOFHYCQCQYCFOXCOSIFBWEMEKOYXWAJICOLKMSATTAHTKZDZGULYYKXMUNPGXBBRMXAF");

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
    msg.setTimeStamp(0.240671533276);
    msg.setSource(24567U);
    msg.setSourceEntity(96U);
    msg.setDestination(57362U);
    msg.setDestinationEntity(212U);
    msg.origin.assign("FKFVZDUZNRXDEVJBRSESGDVOYAABAETUIJAJZPCBALBJVWYKQHXAFIOJHORRPCOFPOGENIWWMNTRERUCWGKHMSTBVBUPESNJQZQIPMITVPXGQVKMAFGUNBNPDHYLOUHOORSWMCUKCYYYRTT");
    msg.text.assign("XOJPLDVGMXXHGIRQNSVEHJLTDGRZBYLUHHPYVBBBNSNKWRFYM");

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
    msg.setTimeStamp(0.435985773297);
    msg.setSource(6452U);
    msg.setSourceEntity(126U);
    msg.setDestination(12244U);
    msg.setDestinationEntity(121U);
    msg.origin.assign("APCHPCQWQYHRJOFOLSLPNZPJKHBOTXNIGSGCFAHXSNNSLJWARUCYVAKPTEZTVRDGKJIMEKBFSACHFJILADFBLPGQVEJBMWKIDMOZKHTSQXPUEDLTZQRHJYUEDNFHNGSHRAUDYBTJ");
    msg.htime = 0.714639422588;
    msg.lat = 0.0862950327398;
    msg.lon = 0.0300735465647;
    const char tmp_msg_0[] = {-16, -73, -108, 76, -37, -48, -79, -10, 66, -19, 47, -42, 40, 123, -53, -112, 46, 39, 26, -32, -65, -93, 82, 118, 114, 47, -55, -123, -5, -109, -16, 51, 32, -20, 57, 109};
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
    msg.setTimeStamp(0.131688247759);
    msg.setSource(23391U);
    msg.setSourceEntity(139U);
    msg.setDestination(8643U);
    msg.setDestinationEntity(90U);
    msg.origin.assign("OYPXWENXOLHBZZYCIKQELRYGAKUALLWRFIRRSZBGEBCOVDGKWFKNHLFCWZWFGLYMESDGHZSWCJEVCBTHBQMDPEWYLIXCKGJQXHPOIMJHCTPSWFRZGXXTIJZOADQUUNCSSTKUTASWYIHBQNPEJUXATRIOVHUVVKDHJFAYDDXMYTRCQMJGAEUXEQZFQNBUGCNZVPIXMSDVQTNPMPVSMOSIKTMNLPGMFHVAPNZBANBKLFR");
    msg.htime = 0.592020425383;
    msg.lat = 0.273600491498;
    msg.lon = 0.960214098732;
    const char tmp_msg_0[] = {91, -100, 64, 58, 31, 119, 59, -42, 45, -15, -18, -14, 121, 54, -1, -42, 18, 111, 8, 98, 84, -23, 19, -12, 113, 68, 23, -2, -15, 40, -97, 68, -13, -98, 48, 123, 14, -105, 45, 87, -61, 89, -124, 116, 110, -75, -39, 43, -11, 87, 10, -71, 109, -37, -4, 107, -106, -73, 104, 18, -84, 94, -2, 10, 75, -57, -16, -98, 6, -12, -104, 39, 93, -50, -84, 82, 73, -92, 85, 46, 118, 37, -78, 2, -3, 94, 11, -93, -30, -45, -115, -88, -75, -32, -32, -70, -4, 77, -86, 58, -100, 50, -117, -47, -121, 110, -40, 57, 47, -50, 42};
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
    msg.setTimeStamp(0.327774396317);
    msg.setSource(62676U);
    msg.setSourceEntity(228U);
    msg.setDestination(33976U);
    msg.setDestinationEntity(215U);
    msg.origin.assign("TUSNXWLLAVPCFAMKSWCVZXMJLNGFHBDFPUWPZRDCIHOGZJNCKRVRSEZHUSGRLGBLDQRXQMVPIPGHFETGXMMEQRHKSVFFFICRWZUSPYXQCWENTQVGYNOKRAJMAMAXNEJVWNJCMYDLJITCZIDBCGOTAUVJYZQBDOFJRNEZIQUODEJ");
    msg.htime = 0.499345929717;
    msg.lat = 0.0341806365277;
    msg.lon = 0.242634150048;
    const char tmp_msg_0[] = {-43, -55, -42, 105, -20, 72, 59, 71, -70, 11, 106, -86, -83, -62, 50, -49, 23, -18, 92, 28, 100, -68, 123, 81, 95, 73, 121, 114, 83, -110, -11, 61, -83, -30, -39, -15, 32, -62, -50, 24, -29, 20, 92, -25, -49, 59, 116, -50, -98, -3, -113, -125, -95, -41, 63, -46, 88, -102, 36, -27, -23, -38, 47, -11, 30, -126, -56, -61, -50, -23, -64, -21, 71, 84, 30, 65, -31, 16, -25, -53, -113, -12, 56, -111, -17, -56, -107, -27, 121, -75, -13, 52, -7, 34, -86, 90, -108, -49, -26, -104, 81, 19, -19, 111, -35, 31, -42, 25, 121, -19, -105, 87, -22, 52, -68, 75, -50, 109, -63, 65, -16, 67, -128, -88, -112, -100, 72, -107, -84, 57, -81, 37, 112, 105, -13, 83, -124, 1, -3, 48, 44, -81, -102, -32, 13, 84, -89, 112, 117, -94, 98, 62, 78, 53, 92, 4, -116, 75, -49, 77, -11, -65, -112, 37, 36, 72, 30, -69, 53, -27, 47, -9, -106, 28, -61, -114, -112, -61, -40, -12, 109, 68, 124, 125, -74, -42, 112, 54, -71, -43, 0, 84, -5, 100, -108, -103, 29, 78, -31, 50, 74, 10, -49, -96, 42, -123, 12, -45, -13, -107, 31, 94, -66, 9, -40, -82, 33, 25, 109, -17, 92, 28, -114, -97, -27, 9};
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
    msg.setTimeStamp(0.296365161691);
    msg.setSource(56982U);
    msg.setSourceEntity(95U);
    msg.setDestination(23250U);
    msg.setDestinationEntity(203U);
    msg.req_id = 43617U;
    msg.ttl = 48896U;
    msg.destination.assign("IQBNOGJCKDMYCYJABOQZPBTQKYTTHMSRTBGTSDUDGFCOTIGZLAENXPSGRXMNPZCQSRZYAAJDEOYPPJGLPNMXVCFSHJZAUVWHUBWDFFRZSZRNQFTMDWMPSUXLEFOVDEIOPQRVQWLTELCOYAPMYLIANVDEFRHB");
    const char tmp_msg_0[] = {24, 59, 60, -109, 52, 15, -117, -74, -27, 15, 64, 59, -50, 60, -25, 18, -71, -53, -64, -122, -5, 13, -49, 11, -60, 49, -69, -94, 84, -110, -81, -11, 43, 11, 104, -23, 51, -50, 44, -97, -34, 105, -21, -77, 60, -10, 99, 21, -91, 88, -17, 11, 118, 118, 20, 4, 74, -82, 11, -87, 10, 69, 85, -37, 50, -104, 23, 112, -11, -23, -97, -37, -122, 40, -78, -51, -103, 23, 25, 27, -83, -82, -119, -44, 10, 110, 98, 73, -102, 59, 117, -21, -56, 106, -91, 7, -128, 125, -96, 108, 113, -80, 71, -128, -20, -127, -7, 13, 74, 93, 21, 7, 74, 37, -77, -52, 54, 120, 75, 24, -71};
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
    msg.setTimeStamp(0.662233584298);
    msg.setSource(33987U);
    msg.setSourceEntity(110U);
    msg.setDestination(58786U);
    msg.setDestinationEntity(187U);
    msg.req_id = 7657U;
    msg.ttl = 23316U;
    msg.destination.assign("PEKKRVIOYWDRIVHAFDSBTLJQCOWHTNGYFOPGQTJFWFVXOVALIBJUSCZDSAXGWCZQDKVTAJIMPKHSTMMKMORZOPQUFZNXWLNYRFANEQGMOSPSSYLKMCVMGBTUAZTEYZVINABUWOPJFIYQFARHHKKZBNXZCXPBFLXCJLEEICYVHMWWTFUJRDXMLBDGBNHEZSOOHGDJXWQNBUXKDTUNJCEGGB");
    const char tmp_msg_0[] = {62, 48, 122, -36, -91, 81, -127, 126, -40, -29, 95, -30, 43, -76, -26, -107, -54, 8, 8, 86, 103, 78, 85, 76, -24, -86, -12, -61, -49, -44, -123, -71, -39, -25, -35, 106, -111, -70, -18, 126, -85, 86, 101, 79, -53, -55, -53, 3, -109, 59, -39, 2, -78, -26, 12, -78, 72, 78, -29, -6, -41, 57, 74, -54, -57, -62, -20, 56, 83, 29, 88, 112, -54, -39, -126, 1, 37, -97, -61, 70, 110, -112, -65, -50, 37, 53, -107, 3, 119, 109, 107, -91, -43, 34, 49, 79, -9, 20, 61, -114, -98, 47, -97, -81, -110, -123, 95, -21, 95, 85, 48, -90, 60, 46, -9, -122, -103, -114, -27, -11, -126, -112, 63, 126, 1, -88, -119, -112, -90, 11, 77, 117, -43, -105, 74, 37, 9, -30, -51, 84, -105, 3, -101, 51, 21, 124, 108, 52, 19, 104, 65, -44, -16, -45, 105, -81, 22, -94, -22, 50, -66, -110, 47, -61, -26, -53, 3, 83, 11, 12, 111, 97, -102, -34, -74, -45, 52, 126, -119, 60, 27, 31, 114, 112, 73, -37, -79, 20, 93, -54};
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
    msg.setTimeStamp(0.381612000769);
    msg.setSource(48510U);
    msg.setSourceEntity(25U);
    msg.setDestination(24537U);
    msg.setDestinationEntity(60U);
    msg.req_id = 25003U;
    msg.ttl = 10923U;
    msg.destination.assign("BWYNTWOHGMMNNMEEXHAPCTOZYZEDXOSNFCDDKPJVQSFDEUDTYBVFUIINMEJXRYDKDNTBQCYBUWUHCBFQKUHVDIJKVZBGPTCUXLQOGPLN");
    const char tmp_msg_0[] = {-108, 17, 79, 14, 101, 71, 5, -27, 66, -56, -36, 69, -92, 74, -45, -62, -88, -102, -77, 65, 54, -93, 72, 70, -65, 106, -25, 125, -71, -87, -80, -127, -70, 101, 114, -28, 39, 41, -126, 118, -74, -48, 17, -90, 119, -69, 35, -80, -114, -77, -43, 49, -95, -115, 29, 100, 100};
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
    msg.setTimeStamp(0.651155300973);
    msg.setSource(46405U);
    msg.setSourceEntity(201U);
    msg.setDestination(19698U);
    msg.setDestinationEntity(19U);
    msg.req_id = 28521U;
    msg.status = 108U;
    msg.text.assign("KYSXZVBWYLBTNJCXUBRPWUJQMF");

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
    msg.setTimeStamp(0.278448645446);
    msg.setSource(64041U);
    msg.setSourceEntity(242U);
    msg.setDestination(9248U);
    msg.setDestinationEntity(192U);
    msg.req_id = 40526U;
    msg.status = 92U;
    msg.text.assign("PWLAAQKFOSJKEXCNGHKQRFLCVUJSGFELNDQBCARRZQTLAYRIMGWXMAQPUAMFGWWGBOYOGSHMCDNBQPNMAPZBBVNPXPIQUBOCTYONADILYIRSEHEUVUSFNBWIEKXRDTFTOLKPVUUTJYIALKLVJRVCODLWYVJRPZKSIYMWQMJZODJFQEDBDEETEIKWSHZNNSZPJEKYVCCFFXTBQXGBLGUOGOSHPMXTIXYJTMRSXDGZJUAMXZKC");

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
    msg.setTimeStamp(0.693749025844);
    msg.setSource(57470U);
    msg.setSourceEntity(178U);
    msg.setDestination(41322U);
    msg.setDestinationEntity(126U);
    msg.req_id = 52091U;
    msg.status = 7U;
    msg.text.assign("THSUVKXZUIMQKBEMWXILMIPUPHYQOTUPXSBEWEG");

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
    msg.setTimeStamp(0.313465076786);
    msg.setSource(21247U);
    msg.setSourceEntity(109U);
    msg.setDestination(39530U);
    msg.setDestinationEntity(210U);
    msg.group_name.assign("NZLGTBFZSVNRVQXLZLEGSUEEMJPAFSZQKWUTBYFCPDPIGHMUEGIGDJVYTKQPPBNEBHSDTVUBKFVLODJNYHFASSCYBCWZXIDHFZEJRAJSWIROPFBCVAWKDWXBYNDLXTMVAIAOWZTUSKXNGSKDGYCW");
    msg.links = 2258151185U;

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
    msg.setTimeStamp(0.0619884234232);
    msg.setSource(45163U);
    msg.setSourceEntity(177U);
    msg.setDestination(55142U);
    msg.setDestinationEntity(109U);
    msg.group_name.assign("IAYBWTWPQFYHEZUKUBMQVKAQDJYZLMKORVPDJUFFALMGCQIJBDZGOKZJXNRTETGJUXSLUCIJWGZCSILGHSCPWBOLTROGFHENRDSYU");
    msg.links = 3608129782U;

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
    msg.setTimeStamp(0.321618275511);
    msg.setSource(58418U);
    msg.setSourceEntity(184U);
    msg.setDestination(6337U);
    msg.setDestinationEntity(90U);
    msg.group_name.assign("AVSQJAUOXEYROPMPLQNICWQFHNHIURGITNIYDNRVEAAHLGNYRJDZVNFGBPMFCIVZQUGZYLYLFTPBMVLASBSZZSYTXMOBBPMJOAMRUKGKDXOJQVAHFUJWWFJ");
    msg.links = 2879178396U;

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
    msg.setTimeStamp(0.0065153268407);
    msg.setSource(7085U);
    msg.setSourceEntity(57U);
    msg.setDestination(50541U);
    msg.setDestinationEntity(13U);
    msg.groupname.assign("YRXIQVCSZOTWXZMEKXZGLHEEINSWWDUOAVIKFBVDJJTTDRGCOEEUUMJVQHWUPTLHUBEFYBSFFOKICYZKCOXBQZGAVDYNLPCOEMGTCRXBQIBQJMUUQCQAMGYTKRAXAKDUINHNCDFISKZTKEHLSPLNGNFHJPRKOUWXRYZWYHRJHGBMMFLXICPVIVLQWSVDMXGERMVGYOWOAAZKANNPLYQPSHBAIRDMQOLFNJDLGSFFSUTHYB");
    msg.action = 131U;
    msg.grouplist.assign("BPDZJKBEZIFEGWDFJPIOIGNQLWULJQVRMEAROVAFIUMMMYXLFATOGSAIDDTDSZYVLGLVQJNEMKWPWKVBFJUVHQZNUFETSWDTRACUJQGBZPDRRTXXCVQLCLPNSBMZWXFVTCEDKNRUZPSEHCHTWOWUTPOOFPBDBOKUTPXNHCXSLHSJGQTKBYHIGYRYZEXBOGWKURHJIYXYEYBXJQCMCINMCUSVZAHSJNZYMGALFSOHKLAEKWG");

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
    msg.setTimeStamp(0.0777609156137);
    msg.setSource(47588U);
    msg.setSourceEntity(1U);
    msg.setDestination(11887U);
    msg.setDestinationEntity(188U);
    msg.groupname.assign("YYTGUCAFGVDIGOVTLZHQERPLECWNUCJKMTVUUSQABMHAMZVBRGLIWDWRCZAWBERXFGXLDZNVMHSRXPIBONBOVPHCEOEGOWHNJKEZRKPKOQGMGSARIKKXYICFRGKJNJXKPEUBXQFUSMZQHKDONEWSAJPOLWDOPUJCNJUDAYMQSZJVTPTBYCFDYXMPCVNZQCHVYDAITLTEGTHLWNBFBPILFVXDTBDRMFJYSIW");
    msg.action = 12U;
    msg.grouplist.assign("UTWNUNYWMYBLRAZIZBIZGTOKOQGQXWTXPFMPOUCPLAHBJCTXUBSGSAFVJHFZLVHXQPVKRNYABMJNAFDCCNAZGOJKFZBBREUKSZDAYWSAMDRQYRJVVHOFSVOFIVKBMVDXQWCKGPZQEIDEINBXQMSHYITQXLTSGXHCEDYVDWPWRKNIRRWTRMOLUFAFDHQFLWLGSCIEJZXDOHUMNEPTIKACSYNMCEXUTBSGKDEYELM");

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
    msg.setTimeStamp(0.0179041108214);
    msg.setSource(13050U);
    msg.setSourceEntity(1U);
    msg.setDestination(26509U);
    msg.setDestinationEntity(171U);
    msg.groupname.assign("RIJDFWNRVGLMVMKEOUDWEQKNBWKHRUYOLEYBPUXCPESFTINBAYXULX");
    msg.action = 51U;
    msg.grouplist.assign("DYHYWMGLBDMIHSWEXAUSLHQLKYNZUTYNVRDAOODDRIMVHNCXJNBCYVTPVQVLFPAORKBFDWUZXZQJPDSAV");

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
    msg.setTimeStamp(0.519723192783);
    msg.setSource(50459U);
    msg.setSourceEntity(39U);
    msg.setDestination(20702U);
    msg.setDestinationEntity(97U);
    msg.value = 0.987184983594;
    msg.sys_src = 53261U;

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
    msg.setTimeStamp(0.652063022848);
    msg.setSource(52663U);
    msg.setSourceEntity(80U);
    msg.setDestination(19974U);
    msg.setDestinationEntity(10U);
    msg.value = 0.815811456479;
    msg.sys_src = 64917U;

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
    msg.setTimeStamp(0.630822417726);
    msg.setSource(17666U);
    msg.setSourceEntity(160U);
    msg.setDestination(5760U);
    msg.setDestinationEntity(107U);
    msg.value = 0.310636636766;
    msg.sys_src = 55006U;

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
    msg.setTimeStamp(0.284758659787);
    msg.setSource(61515U);
    msg.setSourceEntity(18U);
    msg.setDestination(44446U);
    msg.setDestinationEntity(235U);
    msg.value = 0.89387563074;
    msg.units = 144U;

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
    msg.setTimeStamp(0.867207831282);
    msg.setSource(11736U);
    msg.setSourceEntity(5U);
    msg.setDestination(19357U);
    msg.setDestinationEntity(58U);
    msg.value = 0.713131061658;
    msg.units = 17U;

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
    msg.setTimeStamp(0.848261681153);
    msg.setSource(23051U);
    msg.setSourceEntity(161U);
    msg.setDestination(10088U);
    msg.setDestinationEntity(25U);
    msg.value = 0.369100101078;
    msg.units = 66U;

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
    msg.setTimeStamp(0.518301846148);
    msg.setSource(60382U);
    msg.setSourceEntity(9U);
    msg.setDestination(61354U);
    msg.setDestinationEntity(222U);
    msg.base_lat = 0.926270659215;
    msg.base_lon = 0.287489662639;
    msg.base_time = 0.771266975393;
    IMC::HistoricSample tmp_msg_0;
    tmp_msg_0.sys_id = 57697U;
    tmp_msg_0.priority = -2;
    tmp_msg_0.x = 16065;
    tmp_msg_0.y = 19181;
    tmp_msg_0.z = -14290;
    tmp_msg_0.t = 5005;
    IMC::GpsFix tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.validity = 25874U;
    tmp_tmp_msg_0_0.type = 188U;
    tmp_tmp_msg_0_0.utc_year = 20863U;
    tmp_tmp_msg_0_0.utc_month = 62U;
    tmp_tmp_msg_0_0.utc_day = 34U;
    tmp_tmp_msg_0_0.utc_time = 0.06840846302;
    tmp_tmp_msg_0_0.lat = 0.732246417269;
    tmp_tmp_msg_0_0.lon = 0.554365643416;
    tmp_tmp_msg_0_0.height = 0.786667880486;
    tmp_tmp_msg_0_0.satellites = 50U;
    tmp_tmp_msg_0_0.cog = 0.557193877623;
    tmp_tmp_msg_0_0.sog = 0.387979741854;
    tmp_tmp_msg_0_0.hdop = 0.369738381914;
    tmp_tmp_msg_0_0.vdop = 0.0353224501968;
    tmp_tmp_msg_0_0.hacc = 0.663515029186;
    tmp_tmp_msg_0_0.vacc = 0.47815031671;
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
    msg.setTimeStamp(0.290420453786);
    msg.setSource(62460U);
    msg.setSourceEntity(55U);
    msg.setDestination(46300U);
    msg.setDestinationEntity(53U);
    msg.base_lat = 0.249007237219;
    msg.base_lon = 0.508815139552;
    msg.base_time = 0.439666319673;

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
    msg.setTimeStamp(0.725812312516);
    msg.setSource(64796U);
    msg.setSourceEntity(66U);
    msg.setDestination(37256U);
    msg.setDestinationEntity(62U);
    msg.base_lat = 0.0257043865576;
    msg.base_lon = 0.696040072498;
    msg.base_time = 0.233500512077;
    IMC::RemoteCommand tmp_msg_0;
    tmp_msg_0.original_source = 12669U;
    tmp_msg_0.destination = 61350U;
    tmp_msg_0.timeout = 0.699831938587;
    IMC::Alignment tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeout = 15793U;
    tmp_tmp_msg_0_0.lat = 0.659015800156;
    tmp_tmp_msg_0_0.lon = 0.105338243941;
    tmp_tmp_msg_0_0.speed = 0.0369883621588;
    tmp_tmp_msg_0_0.speed_units = 57U;
    tmp_tmp_msg_0_0.custom.assign("JYUPZWJSCVRAASIGMAMDQOFGOXIYKXIPIVEXEXMMO");
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
    msg.setTimeStamp(0.69913234124);
    msg.setSource(11666U);
    msg.setSourceEntity(49U);
    msg.setDestination(23879U);
    msg.setDestinationEntity(130U);
    msg.base_lat = 0.271305519988;
    msg.base_lon = 0.349402866583;
    msg.base_time = 0.434692474557;
    const char tmp_msg_0[] = {121, -93, 48, -37, -128, -108, -63, 96, 28, -45, 62, 34, 103, -25, -41, 81, -77, -118, -42, 45, -85, 25, 92, -95, -63, 93, 86, 19, -64, -4, -63, 26, -33, -39, 101, -78, -114};
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
    msg.setTimeStamp(0.517434049956);
    msg.setSource(48031U);
    msg.setSourceEntity(203U);
    msg.setDestination(43206U);
    msg.setDestinationEntity(4U);
    msg.base_lat = 0.687996225293;
    msg.base_lon = 0.646638990077;
    msg.base_time = 0.252760240475;
    const char tmp_msg_0[] = {75, -87, 99, -69, 124, 118, -69, 66, 49, 59, 29, 36, -128, 39, -107, -8, -51, -51, 14, 22, -119, -11, -96, 104, 63, 30, 122, -118, 105, -28, 47, -13, 16};
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
    msg.setTimeStamp(0.800660577399);
    msg.setSource(10520U);
    msg.setSourceEntity(189U);
    msg.setDestination(41627U);
    msg.setDestinationEntity(26U);
    msg.base_lat = 0.0083540108529;
    msg.base_lon = 0.0776044156295;
    msg.base_time = 0.903082186127;
    const char tmp_msg_0[] = {-106, 101, -35, -41, 114, 91, 87, 61, 82, 91, 9, 34, 64, -70, 113, 80, -74, 94, -98, -59, 101, -109, -114, 104, -69, -102, 126, -72, -37, 73, 33, 49, 87, -54, 9, 105, 63, -26, 51, -52, 24, 22, 115, -70, 83, 89, -77, 10, -74, 49, -6, 69, 2, -16, -95, 24, 69, 97, 86, -109, -118, -16, -118, -38, 101, -42, -89, 84, 84, 94, -37, 113, 7, 77, 95, 72, -75, 5, 46, 9, 15, 22, -117, -99, -127, -58, 101, -90, 88, 6, 71, -87, -40, 38, 124, -24, 10, -27, -23, -25, 1, -8, -115, -10, -77, -128, -111, -77, 38, -3, -128, 55, 85, -94, 117, 78, -94, 29, -9, -111, 77, 73, -2, -105, 46, -119, 46, 29, -125, -123, 101, -72, -66, 17, -65, 122, -13, 11, 42, -110, -66, -70, 6, 19, -90, 32, 87, -12, -87, -30, 102, 59, 61, -29, 57, -101, -35, 36, -91, 56, 112, -120, 28, 88, 116, 47, 122, -6, 50, 52, -87, 85, -109, 33, -115, 5, -50, -9, -120, -84, 69};
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
    msg.setTimeStamp(0.784337794606);
    msg.setSource(49558U);
    msg.setSourceEntity(136U);
    msg.setDestination(33403U);
    msg.setDestinationEntity(214U);
    msg.sys_id = 51909U;
    msg.priority = 72;
    msg.x = -31872;
    msg.y = -14282;
    msg.z = -14820;
    msg.t = -5546;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.984586017037;
    tmp_msg_0.base_lon = 0.40092377799;
    tmp_msg_0.base_time = 0.420705047914;
    IMC::RemoteCommand tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.original_source = 58792U;
    tmp_tmp_msg_0_0.destination = 5753U;
    tmp_tmp_msg_0_0.timeout = 0.771932454099;
    IMC::Power tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.value = 0.118526491654;
    tmp_tmp_msg_0_0.cmd.set(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.data.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.12845769894);
    msg.setSource(31949U);
    msg.setSourceEntity(217U);
    msg.setDestination(12450U);
    msg.setDestinationEntity(164U);
    msg.sys_id = 16525U;
    msg.priority = 100;
    msg.x = 5026;
    msg.y = -27714;
    msg.z = -19499;
    msg.t = 26936;
    IMC::AcousticRequest tmp_msg_0;
    tmp_msg_0.req_id = 46320U;
    tmp_msg_0.destination.assign("TPVONFLDPDAKKHNHFHKGISTVNKAPZBBRAGSQAXMDTVOWMOURCGUJIFCHRJTLJAZHXEYHERJOMYFXCTLYFGAIBZRAJNCPSSVZDREVWEQKTMZCQODXQPPQJVGDWLUEINLPSPDBQUZRHOTYAXCWZCDEBY");
    tmp_msg_0.timeout = 0.0361957533469;
    tmp_msg_0.range = 0.545001743229;
    tmp_msg_0.type = 225U;
    IMC::PlanDBState tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.plan_count = 12435U;
    tmp_tmp_msg_0_0.plan_size = 2971868727U;
    tmp_tmp_msg_0_0.change_time = 0.974189529987;
    tmp_tmp_msg_0_0.change_sid = 11678U;
    tmp_tmp_msg_0_0.change_sname.assign("QFOJCZBDVYIUTTSHNVIFTITGMIZALGMPIALNER");
    const char tmp_tmp_tmp_msg_0_0_0[] = {68, 125, -112, -21, -48, -42, 60, -47, -9, -51, -6, 70, 11, 75, -13};
    tmp_tmp_msg_0_0.md5.assign(tmp_tmp_tmp_msg_0_0_0, tmp_tmp_tmp_msg_0_0_0 + sizeof(tmp_tmp_tmp_msg_0_0_0));
    IMC::PlanDBInformation tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.plan_id.assign("CDOSVZYEGONWBOPVYQVHZIWSNURPIBQEPMUIXKPTVVNNFMFSXXOGDDXJVNWUEQERZZBYLYFUWFWQCADYESPQZUJFCKNXRNFVPIEMWOLCDHLGFALJKPMHHXRZSTQYIIVOXLGYMJSLAZMZRGCIQHEIRDOTBMCHDKOAWNTJPCYJGLQUGJ");
    tmp_tmp_tmp_msg_0_0_1.plan_size = 5082U;
    tmp_tmp_tmp_msg_0_0_1.change_time = 0.994601274479;
    tmp_tmp_tmp_msg_0_0_1.change_sid = 52653U;
    tmp_tmp_tmp_msg_0_0_1.change_sname.assign("MUULVKTERNYSHWGBZKX");
    const char tmp_tmp_tmp_tmp_msg_0_0_1_0[] = {-107, 7, -27, -22, -25, -40, 86, -30, 84, -108, 102, -15, -89, -111, -83, 125, 89, -125, 104, 63, -106, 8, -90, -107, 88, 106, -45, -25, -39, 81, 71, 117, 36, 78, -86, -110, -51, 110, -123, -110, -21, -125, -53, -80, -83, 121, 77, -41, -30, 27, 106, 94, -56, 84, 70, 74, 49, -3, -88, -9, 97, -81, -31, 92};
    tmp_tmp_tmp_msg_0_0_1.md5.assign(tmp_tmp_tmp_tmp_msg_0_0_1_0, tmp_tmp_tmp_tmp_msg_0_0_1_0 + sizeof(tmp_tmp_tmp_tmp_msg_0_0_1_0));
    tmp_tmp_msg_0_0.plans_info.push_back(tmp_tmp_tmp_msg_0_0_1);
    tmp_msg_0.msg.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.665597027125);
    msg.setSource(44758U);
    msg.setSourceEntity(168U);
    msg.setDestination(46626U);
    msg.setDestinationEntity(142U);
    msg.sys_id = 44127U;
    msg.priority = -121;
    msg.x = 5479;
    msg.y = -11289;
    msg.z = -23638;
    msg.t = 1321;
    IMC::AutopilotMode tmp_msg_0;
    tmp_msg_0.autonomy = 21U;
    tmp_msg_0.mode.assign("CSHHUJPBSJPQBUQKIRLLAZAMBWVEDDPDFPWGSDEOETRVMVQQCPRXTKNQYIGEUYYKUVVRHRTVTSNEYRYGAMRILKIKSHCAZFO");
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
    msg.setTimeStamp(0.176169573308);
    msg.setSource(60827U);
    msg.setSourceEntity(48U);
    msg.setDestination(58899U);
    msg.setDestinationEntity(93U);
    msg.req_id = 19962U;
    msg.type = 186U;
    msg.max_size = 49323U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.941669895181;
    tmp_msg_0.base_lon = 0.0276239784757;
    tmp_msg_0.base_time = 0.426364668636;
    IMC::RemoteCommand tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.original_source = 63590U;
    tmp_tmp_msg_0_0.destination = 5985U;
    tmp_tmp_msg_0_0.timeout = 0.805199350519;
    IMC::QueryEntityParameters tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.name.assign("QMVSMUJEXUXNWGOTCKFYINRUFPZQOELENKJNHALDACIJBQNEIAALHBBMVUEYSGFNBVRLQTIACRZQGQWNKPLCVAPSZQXGJFDMGCSOVHGDATROSEPPJPDAYFUXZWTJHWQBKSRSSYJWWFYKILCQCTJXYTTLDUXVDVMXYCHMBLRRWCHYJDDYSPGSYNEKBPOIJVKLHEMWHWCIROEQRVZPBGETIMWIAZVFMKTUDTPZOOIBKLZ");
    tmp_tmp_tmp_msg_0_0_0.visibility.assign("LMXPNCKOCNSDHIOHQOQZGBQKKVXANDGBUVYZPDYPLOUSJAGVPLWTSOYEOVMEFBTHZGSBOPIVXGTUQUJHXBLQFENNCTSVMBJPTARHWARZHTQTFBXTRIZPDDDLCYAFZURMTBKYXMVMUCVXFIARJAHWFCJRHVFLFLGGDNKWKQRUAQMYWZAQCUTWHJIECGWPMWZIFELMEJSNHDOJMJBISRXWZZAYGUYSKIJPDIXRQBGNNWFELKRIENCEXYKCYEU");
    tmp_tmp_tmp_msg_0_0_0.scope.assign("DKQFJDYHRKRUSVZUMCCODNZLKDYDZNVEKYSXWUAPWEOCDQYJIPCUCGVSITBQNBAHKERNBWFPIERHRMZZNBSXJGWSRKLUSPUUNHINKGOMRXGGLLDAOXGN");
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
    msg.setTimeStamp(0.486691745827);
    msg.setSource(39100U);
    msg.setSourceEntity(66U);
    msg.setDestination(4731U);
    msg.setDestinationEntity(141U);
    msg.req_id = 26497U;
    msg.type = 152U;
    msg.max_size = 43490U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.891294335383;
    tmp_msg_0.base_lon = 0.516880188008;
    tmp_msg_0.base_time = 0.768491768861;
    IMC::HistoricSample tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.sys_id = 4525U;
    tmp_tmp_msg_0_0.priority = 63;
    tmp_tmp_msg_0_0.x = 30481;
    tmp_tmp_msg_0_0.y = -26388;
    tmp_tmp_msg_0_0.z = -25098;
    tmp_tmp_msg_0_0.t = 6106;
    IMC::FormationParameters tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.formation_name.assign("ZJRWAHIOWKJXNCGLGFLAPKVAMMDLSMJSNCHAE");
    tmp_tmp_tmp_msg_0_0_0.reference_frame = 219U;
    tmp_tmp_tmp_msg_0_0_0.custom.assign("HIFOAUEBYTNBVMUDDIEZOXSFIIWOPOQBNENMRRJMGBUALZIGZAAMARAEJIXPVMEZNVWHIOSCWSJYKOSWGKSTGKOELXHYJTFJFQVBPLWUDMNLBVTOQBVHICNLNQPARMWSKMTQLCHHJKZXDLFWGUHTEZXXPENIBWJURSPWYPZQCGTPNRXSCTFESPDQZGRDCQUGLTSZIJQBALKFAJKGVUUWRTYMYXJFVYCCDKAOY");
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
    msg.setTimeStamp(0.319037992369);
    msg.setSource(64490U);
    msg.setSourceEntity(14U);
    msg.setDestination(20108U);
    msg.setDestinationEntity(202U);
    msg.req_id = 23521U;
    msg.type = 89U;
    msg.max_size = 4969U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.693806376755;
    tmp_msg_0.base_lon = 0.151623971184;
    tmp_msg_0.base_time = 0.193821349237;
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
    msg.setTimeStamp(0.22486887285);
    msg.setSource(31561U);
    msg.setSourceEntity(4U);
    msg.setDestination(56436U);
    msg.setDestinationEntity(87U);
    msg.original_source = 41605U;
    msg.destination = 32881U;
    msg.timeout = 0.776546523172;
    IMC::TCPStatus tmp_msg_0;
    tmp_msg_0.req_id = 37068U;
    tmp_msg_0.status = 51U;
    tmp_msg_0.info.assign("ECYWZULNLHEYZUJOGTQDHJSLCSBUFQMBLJGDTLMIQGOFTZVLXHHFRPNERRGDTOJZIXHUEPFNSKPANWWXJPPRXBXNFGRWMKSKZZRZXKOAICBZXTPTAWOMWIBSWQHVAQYNTGMPSBUOIGFCYD");
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
    msg.setTimeStamp(0.621077608059);
    msg.setSource(16184U);
    msg.setSourceEntity(112U);
    msg.setDestination(9063U);
    msg.setDestinationEntity(155U);
    msg.original_source = 53329U;
    msg.destination = 12486U;
    msg.timeout = 0.610344047387;
    IMC::SetThrusterActuation tmp_msg_0;
    tmp_msg_0.id = 205U;
    tmp_msg_0.value = 0.60003465626;
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
    msg.setTimeStamp(0.903480797729);
    msg.setSource(22876U);
    msg.setSourceEntity(228U);
    msg.setDestination(57720U);
    msg.setDestinationEntity(69U);
    msg.original_source = 16480U;
    msg.destination = 57521U;
    msg.timeout = 0.0488276522914;
    IMC::LblRangeAcceptance tmp_msg_0;
    tmp_msg_0.id = 112U;
    tmp_msg_0.range = 0.478059220617;
    tmp_msg_0.acceptance = 239U;
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
    msg.setTimeStamp(0.861997967505);
    msg.setSource(10203U);
    msg.setSourceEntity(66U);
    msg.setDestination(9908U);
    msg.setDestinationEntity(108U);
    msg.type = 191U;
    msg.comm_interface = 24889U;
    msg.model = 20266U;
    msg.list.assign("ZSEEGLCDOADDBOJDQHNZMVXAORSALGXITZJHIBWJQRWVSENCDCUMGECSUIHBMFHWOWZIOYCUYCVJVPAKTZGAPNACMJXDRNRNSQECYHEPLEBRPMBSJLLIDKNVLXBYTXVSXQFTSMPDOFAIQEHGVQKNNTYPLFFFINVYYOUOITXVZGDBHIRHYYRGDWFJTOXGWKPWQRUFMBWKCWGCOBUPJZSUNZIULGFBYQXJKLLTKZAK");

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
    msg.setTimeStamp(0.331350304166);
    msg.setSource(4719U);
    msg.setSourceEntity(50U);
    msg.setDestination(49017U);
    msg.setDestinationEntity(96U);
    msg.type = 173U;
    msg.comm_interface = 33818U;
    msg.model = 13198U;
    msg.list.assign("HTCACXBTRGHVWYEMPPUFPKLVBQWRIOPDZSYHSBGYKOOIUFGOKVAEWZLYKEFCINJOGSXLGMACZCZXN");

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
    msg.setTimeStamp(0.0116440067104);
    msg.setSource(10620U);
    msg.setSourceEntity(247U);
    msg.setDestination(47510U);
    msg.setDestinationEntity(160U);
    msg.type = 99U;
    msg.comm_interface = 48718U;
    msg.model = 53073U;
    msg.list.assign("FGRCCVYXUAOHXRQNZFRFMEQOAHEQBJSLWAXYIYTQUHDVIWCEORCFNJLSYVGVRJPFNHXSSSSBBTZWXTDWBYJNILXBXIKJMTWYFDAJXVOYEOYBVZGQQRY");

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
    msg.setTimeStamp(0.785843746073);
    msg.setSource(11953U);
    msg.setSourceEntity(153U);
    msg.setDestination(7618U);
    msg.setDestinationEntity(71U);
    msg.type = 62U;
    msg.req_id = 1907468533U;
    msg.ttl = 60713U;
    msg.code = 73U;
    msg.destination.assign("ZOCRHVLKEFZX");
    msg.source.assign("ZDIWSOAVWGXVGEVHJJNGAPFEJTJBUAHBQEZNAMVERFGODLKVDGSWUYAGSUMNREPCGQNISPDVTXBQRORSTCOOYUXXEGQLDNVICKZMMQHSDYRCEWYOZLFYSTRRUWUCIDCXNHWBXYKOGIOMNEHQLKLUEMIRWJUINHJPKVZCWKLAXFLYLSFYUTKFMBABJHIMTQABJB");
    msg.acknowledge = 41U;
    msg.status = 218U;
    const char tmp_msg_0[] = {-94, -72, 49, -42, 13, -27, 77, -14, 14, 14, 102, -26, 66, -45, -77};
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
    msg.setTimeStamp(0.484667179339);
    msg.setSource(23610U);
    msg.setSourceEntity(250U);
    msg.setDestination(51188U);
    msg.setDestinationEntity(75U);
    msg.type = 81U;
    msg.req_id = 1834246952U;
    msg.ttl = 16539U;
    msg.code = 177U;
    msg.destination.assign("NSLECYPGQSOUPYRITXQEETIEGGXRFOWBNKTSFTWSTPBPUXGKMWMWCXDQFJOABSKOCKVKGPKVBNFFFNUGEOCHYMIMZ");
    msg.source.assign("DHEHASGPPCDULXZXKVVVYQLMWYFDKWGVMEZGNYQGWSCIPQEHJENRPWCYLUAITINUWVJBGWHNBENQMXDCWLIXANQNYMNTHYODHFXHMLIUEFBVLMSUDFYJGGPBECJLKRSAIRTROKVJROXRWFSPHYSZETMZFHDCOBIQATCPSUGXMJJFZVISXYQKSAXLZIWVRLGFBZZNVUAEFUWOMOAPRRBKXTPBTPZODZKKDTJQCECOQIKDLCAYFTBJOAG");
    msg.acknowledge = 49U;
    msg.status = 93U;
    const char tmp_msg_0[] = {-2, -65, 40, -40, 115, 111, -71, 11, 101, 17, -113, 35, 91, 102, -89, -111, 88, 82, -124, -106, 21, -123, -32, -105, 126, -74, 38, -122, 2, 30, 9, -113, 69, -58, 16, -20, -95, 124, -98, 82, -113, -127, 67, -38, 89, -64, -13, -113, -45, -82, -29, 11, -76, -46, -36, -50, 4, 68, 60, 23, 64, 69, 120, -100, 17, -59, 96, 20, 98, -109, -104, -38};
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
    msg.setTimeStamp(0.0956596728771);
    msg.setSource(16471U);
    msg.setSourceEntity(109U);
    msg.setDestination(48314U);
    msg.setDestinationEntity(195U);
    msg.type = 180U;
    msg.req_id = 417019390U;
    msg.ttl = 48045U;
    msg.code = 15U;
    msg.destination.assign("JLOOVJTOKXJWAIJNKYVZOFKTAOSTYQPZMWTHYLOKANWHDHYHASECLTLUMFZQIDKITSFFAEEOMCVKBJBDDZLBPIATYKSQECFIEYORHHMMWLQSBPFYQQPGCMRXKRVSNUXPGZGAUCGCBYVUNLCAEYRNQUDFSRXEWXWFDBRXGZTXOBLPQUPDT");
    msg.source.assign("CQAMWFRAWYRNIDZNFMOOZGINBAOJTHVDMYEELGOZOCQSCUKFWDLYQQGTKGANTQ");
    msg.acknowledge = 4U;
    msg.status = 37U;
    const char tmp_msg_0[] = {-103, -62, 10, -18, -6, -63, -104, 2, 62, -6, 82, 32, 94, -45, -78, 68, 118, 94, 57, 46, 39, 1, -18, -44, -14, 107, -2, 46, -66, 96, 70, 111, -21, 24, -36, 89, 73, 108, -24, 16, -119, -28, 74, -47, 70, 104, -26, -63, 65, -13, -43};
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
    msg.setTimeStamp(0.0414639974854);
    msg.setSource(29793U);
    msg.setSourceEntity(226U);
    msg.setDestination(61209U);
    msg.setDestinationEntity(186U);
    msg.id = 57U;
    msg.range = 0.453200658779;

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
    msg.setTimeStamp(0.678207293352);
    msg.setSource(59284U);
    msg.setSourceEntity(70U);
    msg.setDestination(64570U);
    msg.setDestinationEntity(162U);
    msg.id = 188U;
    msg.range = 0.724850724324;

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
    msg.setTimeStamp(0.732203835249);
    msg.setSource(26634U);
    msg.setSourceEntity(78U);
    msg.setDestination(45495U);
    msg.setDestinationEntity(61U);
    msg.id = 154U;
    msg.range = 0.317319669567;

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
    msg.setTimeStamp(0.311015018729);
    msg.setSource(6697U);
    msg.setSourceEntity(44U);
    msg.setDestination(55194U);
    msg.setDestinationEntity(170U);
    msg.beacon.assign("YONHIRTPCGTSIVUXKFIWDOOQLPZYJNALDIJVUTR");
    msg.lat = 0.399747138079;
    msg.lon = 0.324045502099;
    msg.depth = 0.568100588164;
    msg.query_channel = 50U;
    msg.reply_channel = 60U;
    msg.transponder_delay = 160U;

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
    msg.setTimeStamp(0.978463196332);
    msg.setSource(7356U);
    msg.setSourceEntity(207U);
    msg.setDestination(3617U);
    msg.setDestinationEntity(103U);
    msg.beacon.assign("HRCZENWBLSNGYCKRTIOHPEABCLFXZWXDLPSKUBPIYRDWTJGHGPKOGVTKSMYBIHHQRCYVJMWLHVXNDIYTLUROJKWVHKIGMFTOVQIUGYDPJGKLMGJRBJVQMVFMJBASUSTTFAVWAEDAXOONETPGBBIQZZFNPFLMXDCSISZLHBXNENZIKYQLSPJIVNWJLOANEMOXCUDFXFRWUKVTSCMQQUBGJSYREZATMWEX");
    msg.lat = 0.378896008362;
    msg.lon = 0.199886424017;
    msg.depth = 0.229399457498;
    msg.query_channel = 153U;
    msg.reply_channel = 94U;
    msg.transponder_delay = 147U;

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
    msg.setTimeStamp(0.74199423451);
    msg.setSource(13969U);
    msg.setSourceEntity(124U);
    msg.setDestination(20630U);
    msg.setDestinationEntity(58U);
    msg.beacon.assign("ZFVQOCLLQJHOIBOSHBDXSEMPJKMPOSMFLCKUKLYA");
    msg.lat = 0.765308363431;
    msg.lon = 0.669151813027;
    msg.depth = 0.646989282319;
    msg.query_channel = 59U;
    msg.reply_channel = 230U;
    msg.transponder_delay = 15U;

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
    msg.setTimeStamp(0.193688159959);
    msg.setSource(7822U);
    msg.setSourceEntity(146U);
    msg.setDestination(39949U);
    msg.setDestinationEntity(18U);
    msg.op = 174U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("JULMHLQJAPNGEWIYLISYZQVYRBMWVSORNUJPCOLZFFYI");
    tmp_msg_0.lat = 0.868066230701;
    tmp_msg_0.lon = 0.0752874799949;
    tmp_msg_0.depth = 0.469307124347;
    tmp_msg_0.query_channel = 120U;
    tmp_msg_0.reply_channel = 98U;
    tmp_msg_0.transponder_delay = 46U;
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
    msg.setTimeStamp(0.685133133815);
    msg.setSource(21332U);
    msg.setSourceEntity(199U);
    msg.setDestination(52393U);
    msg.setDestinationEntity(22U);
    msg.op = 232U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("JEYIOSXQQTBUKEDGKMFHGFLSEVOSPGPKDVLWVRIYGRLWLDQMITKVAFQLGMXUOCFCQCPWCGBEJDRANHXMRWWANFZVVFJBCRVIQBSLVYUFICNXQLPQUZNIHZZYMRHAVFWKYUJHDUXBOIANHA");
    tmp_msg_0.lat = 0.0399414522969;
    tmp_msg_0.lon = 0.411837076503;
    tmp_msg_0.depth = 0.117047159463;
    tmp_msg_0.query_channel = 110U;
    tmp_msg_0.reply_channel = 63U;
    tmp_msg_0.transponder_delay = 200U;
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
    msg.setTimeStamp(0.586211051727);
    msg.setSource(21234U);
    msg.setSourceEntity(211U);
    msg.setDestination(4935U);
    msg.setDestinationEntity(173U);
    msg.op = 184U;

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
    msg.setTimeStamp(0.273810914926);
    msg.setSource(17802U);
    msg.setSourceEntity(113U);
    msg.setDestination(58565U);
    msg.setDestinationEntity(210U);
    IMC::Throttle tmp_msg_0;
    tmp_msg_0.value = 0.811289976213;
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
    msg.setTimeStamp(0.27148467957);
    msg.setSource(5861U);
    msg.setSourceEntity(53U);
    msg.setDestination(17380U);
    msg.setDestinationEntity(31U);
    IMC::TrexPlan tmp_msg_0;
    tmp_msg_0.reactor.assign("UYYBBTQLGDXATHUJJZQKFTUCFQIWLOKWW");
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
    msg.setTimeStamp(0.900150650684);
    msg.setSource(17877U);
    msg.setSourceEntity(22U);
    msg.setDestination(56367U);
    msg.setDestinationEntity(43U);
    IMC::SetImageCoords tmp_msg_0;
    tmp_msg_0.camid = 33U;
    tmp_msg_0.x = 41325U;
    tmp_msg_0.y = 14466U;
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
    msg.setTimeStamp(0.618674146979);
    msg.setSource(38522U);
    msg.setSourceEntity(221U);
    msg.setDestination(60451U);
    msg.setDestinationEntity(52U);
    msg.op = 117U;
    msg.system.assign("XVZCGZQGTOEYYKRWRDDSSCAYYSUNFUDIJWIDZSLFVRNQKJFGJPUIJCXTEJELVJKWLHHRBRDMCFIQSPNBQHNMHMYSHAGKIPXSTVKWVQKRDSZLTHUGOFHPTPVEPIBJMADTHBRTPMBXWBGKFBAWLNNXNCPPTMLGEAIOLWVMLVEQTEDUXUOCKQBYXGCYCOADMOXZJWELRURQZFQOVVXZUAHKKANGEPAFNYMEWTNYFWIUHSURJMDA");
    msg.range = 0.389864316651;
    IMC::AisInfo tmp_msg_0;
    tmp_msg_0.msg_type.assign("LEPIRYCZAVJKDIHKTLZTYDIJPBEDQDOOFHUKGNEVCQITHVSUCXYXPWPDCABZXQLNPXFYRJWCPAFCN");
    tmp_msg_0.sensor_class.assign("NLILIGOZFFRPZCFJBOJGNKOIVFFALWMVCUCLHMMMJNGTAOQHGJYQTIYHLNRTUXPLOR");
    tmp_msg_0.mmsi.assign("VXDYYPBXVPIQJXPUMAGPAXMWBTLDQYHFNTQUFCKCPUYRTHVMBKWBIGMSWZUIJIXZGGYLXVKIRCJWOHAQJYENEUXNIFKBQSOSATRRHOFOFMBTDWMPETFNAGQEYRNNQALNZVRMYUNTBAKQJGHJMZZUBCSZDFSZRIDF");
    tmp_msg_0.callsign.assign("OXAUGNQPBIXXBMROZPEVQXTYSJGUJXOUFECDZXPYUOJL");
    tmp_msg_0.name.assign("PMRDKLEBSWUUMWLQWLJRQVCBELRAODPUTXPNGAOCPLRSWUYQNZBSKVFCSEJUYIANYMTCTXKCCQGGWMFIZLPBHRHPTYZFNCOYGOXZVFSCJPIYRWYHUUKMB");
    tmp_msg_0.nav_status = 187U;
    tmp_msg_0.type_and_cargo = 187U;
    tmp_msg_0.lat = 0.197444379897;
    tmp_msg_0.lon = 0.315311178926;
    tmp_msg_0.course = 0.779692745588;
    tmp_msg_0.speed = 0.293458379567;
    tmp_msg_0.a = 0.442569654312;
    tmp_msg_0.b = 0.689131460662;
    tmp_msg_0.c = 0.397978247102;
    tmp_msg_0.d = 0.233808007536;
    tmp_msg_0.draught = 0.818087282028;
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
    msg.setTimeStamp(0.329936965395);
    msg.setSource(45427U);
    msg.setSourceEntity(31U);
    msg.setDestination(64736U);
    msg.setDestinationEntity(32U);
    msg.op = 55U;
    msg.system.assign("DHKGSDSYUHMCKCZUCARNXLBXDTFLDFDTVRNTCGGNCAOJDJWUWTIVEYRBFUWMMHXFGAQGQOZHSOLRNEZJSVQSHIRYWUUCNVIBJMMITAEGZLGNXJVTXPZAYECQCAIRJVQKKWEMFPECFUBWIQGASDMAPODBVXVJNYHXONNEKRX");
    msg.range = 0.863667336649;
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("ABYNDQSCTKDQVREUDHCWJVBJTR");
    tmp_msg_0.value.assign("ZUMWFQQZJGSVPFIVYQCDOBRIXHQQULMTDEXQVYHEGCKDSWRJCTHPATXNSBCLOXLXZUPYFJGNLSHWJ");
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
    msg.setTimeStamp(0.0485616143392);
    msg.setSource(62735U);
    msg.setSourceEntity(64U);
    msg.setDestination(40032U);
    msg.setDestinationEntity(165U);
    msg.op = 139U;
    msg.system.assign("WISDQOSERGWSLPKFEBAVZFQNEBGMHQAFNPSNCBSULLXJHFUDOFTAVLENPDGAOQNKUHGWBWWVHVDMISGXKTVCBFDLRTRTBZRXJRYJMKWQENPLMYHEFCHRUJCMYOZBUDFBOXJJQLBEKFAYUCILRTZCDDGIDMIVFGXTPOZIXEXOZUVKZGMCSPGZHOIPJZBVEVKTTMKUPVWQSSQYMMYKPAAINTYJPRCQD");
    msg.range = 0.00430374874949;
    IMC::SimulatedState tmp_msg_0;
    tmp_msg_0.lat = 0.320735032033;
    tmp_msg_0.lon = 0.371076355425;
    tmp_msg_0.height = 0.146224394964;
    tmp_msg_0.x = 0.0217402672456;
    tmp_msg_0.y = 0.225830300062;
    tmp_msg_0.z = 0.980776489153;
    tmp_msg_0.phi = 0.0913690259356;
    tmp_msg_0.theta = 0.161548839462;
    tmp_msg_0.psi = 0.533168575456;
    tmp_msg_0.u = 0.777820804658;
    tmp_msg_0.v = 0.584517388519;
    tmp_msg_0.w = 0.990673389784;
    tmp_msg_0.p = 0.0426860035208;
    tmp_msg_0.q = 0.940354611463;
    tmp_msg_0.r = 0.826798940226;
    tmp_msg_0.svx = 0.412914270396;
    tmp_msg_0.svy = 0.796448960332;
    tmp_msg_0.svz = 0.548122196022;
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
    msg.setTimeStamp(0.42762445778);
    msg.setSource(52226U);
    msg.setSourceEntity(96U);
    msg.setDestination(24228U);
    msg.setDestinationEntity(222U);

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
    msg.setTimeStamp(0.0262339914258);
    msg.setSource(64668U);
    msg.setSourceEntity(245U);
    msg.setDestination(44129U);
    msg.setDestinationEntity(90U);

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
    msg.setTimeStamp(0.796367191551);
    msg.setSource(5136U);
    msg.setSourceEntity(243U);
    msg.setDestination(47337U);
    msg.setDestinationEntity(83U);

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
    msg.setTimeStamp(0.298102609567);
    msg.setSource(24757U);
    msg.setSourceEntity(117U);
    msg.setDestination(39221U);
    msg.setDestinationEntity(159U);
    msg.list.assign("UPJVDHYLHLWIFUYVYAVOLMEYUXVCHIVFIUVCNDQAMNRKZGOYCMEVNNIQKPVMAFJODIFJVZJOFLMZQITRWGNBITFJBRBQTHAPXZBQVDDLEJKWHJLGHIBKARHCIYRYGPWQQDWGNTAXGSTHSRZDSMREXSNSKDLUOBTGYCKZAQ");

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
    msg.setTimeStamp(0.393459143712);
    msg.setSource(41218U);
    msg.setSourceEntity(236U);
    msg.setDestination(27742U);
    msg.setDestinationEntity(103U);
    msg.list.assign("MTGRUREVQGIXKNPOWUPXAXBHXHQRUZJDTAZSALRLVNCXSQHROTALJGYWQHKMZNBNVFLAHEHXCCJSUPLYDTAIBFTEJPODLUYMSIYACFKFQPBCIEOLZMOZYRFIFHVZSFKPGKHEVXMNBTUFPJBSAIDCFVPDDITGKHYKDQNPRJFMLJWGCBVXZXOOTZHNOKZYQUANGECTJ");

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
    msg.setTimeStamp(0.394750213726);
    msg.setSource(31591U);
    msg.setSourceEntity(67U);
    msg.setDestination(34416U);
    msg.setDestinationEntity(109U);
    msg.list.assign("DNULTIPRXYANTFAQNLRCAODMHSKFEQWUBMXZTCBHXZIDHBXUQSKREYYGCVT");

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
    msg.setTimeStamp(0.88943595888);
    msg.setSource(14288U);
    msg.setSourceEntity(140U);
    msg.setDestination(47004U);
    msg.setDestinationEntity(114U);
    msg.peer.assign("NYQBGGBKJOOANVCEMOUBBOUSTKSKACWMKLBNORAZIVGJHGHBPVQQAETOQZXTIKQFJYUIZVZJGBHLOIMSBCCVYLGLUJNCNDTRFQFKERXUWMFIBRLGKXNOZXCPJESZCXPENTB");
    msg.rssi = 0.516381991213;
    msg.integrity = 58494U;

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
    msg.setTimeStamp(0.817905240249);
    msg.setSource(9787U);
    msg.setSourceEntity(161U);
    msg.setDestination(31295U);
    msg.setDestinationEntity(168U);
    msg.peer.assign("FLIZWRMTBLRNEEXSTRJMRQYGUM");
    msg.rssi = 0.950647640045;
    msg.integrity = 3307U;

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
    msg.setTimeStamp(0.325658053187);
    msg.setSource(16807U);
    msg.setSourceEntity(57U);
    msg.setDestination(48540U);
    msg.setDestinationEntity(113U);
    msg.peer.assign("SIMUQXRVUNPDMVWKNKAIAFOKWNNHDJFXUUGQTSEOBOTXDGKWAYRHRCAQYALGSZEAILMCQYNLGQOBCMRXJQDIIHUAUGDXEYECZVFCCJXNNVWPENGJSNLHY");
    msg.rssi = 0.963535970754;
    msg.integrity = 43072U;

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
    msg.setTimeStamp(0.272422557342);
    msg.setSource(52369U);
    msg.setSourceEntity(220U);
    msg.setDestination(47581U);
    msg.setDestinationEntity(34U);
    msg.req_id = 5094U;
    msg.destination.assign("MFDZJFFKFJZSBEDLHJOZMQBN");
    msg.timeout = 0.48769334781;
    msg.range = 0.782409758777;
    msg.type = 240U;
    IMC::PopUp tmp_msg_0;
    tmp_msg_0.timeout = 4550U;
    tmp_msg_0.lat = 0.291422997907;
    tmp_msg_0.lon = 0.652531068236;
    tmp_msg_0.z = 0.621278867178;
    tmp_msg_0.z_units = 42U;
    tmp_msg_0.speed = 0.0619137130013;
    tmp_msg_0.speed_units = 240U;
    tmp_msg_0.duration = 45156U;
    tmp_msg_0.radius = 0.407178814252;
    tmp_msg_0.flags = 178U;
    tmp_msg_0.custom.assign("TTVIXQYUXRRGKSSKROAWZEMFJZIQPGMBMVLGHGQWDPZMLERGJTYBKODLWLDVSQDCICBFUWNRFAJU");
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
    msg.setTimeStamp(0.0670787234256);
    msg.setSource(32903U);
    msg.setSourceEntity(176U);
    msg.setDestination(31141U);
    msg.setDestinationEntity(49U);
    msg.req_id = 18283U;
    msg.destination.assign("KUATPUPDBFGIPGNWIXADEXOMQJWVWEQYKSZDUEQLCJUJYXZDOPGPGBBZNSKEQYBDFIZOUYE");
    msg.timeout = 0.25020563723;
    msg.range = 0.24731721651;
    msg.type = 20U;
    IMC::SetControlSurfaceDeflection tmp_msg_0;
    tmp_msg_0.id = 224U;
    tmp_msg_0.angle = 0.604142616113;
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
    msg.setTimeStamp(0.442435688357);
    msg.setSource(62484U);
    msg.setSourceEntity(126U);
    msg.setDestination(59870U);
    msg.setDestinationEntity(30U);
    msg.req_id = 62646U;
    msg.destination.assign("HVYFHHXDFAEFCYVWOSNJBHWAVOGGKTKXYFIOTHWWCGDEEIMWBCMAPIRTJURQMRJNKKYLFDJASTQZRRGXRVSCSGJAUBZKFWPXCLXPJCLPUBDLDRXYOUOGVQOCAFMTSEVAKZYKEGXCRQPGNZPOATAPNIWYZBVUIQQBTPXSNRQFHTQJFIYREMIPLOUWWBWUYNDUKIPJSJYLDEZCVKZQOHLBMLAIJXMCGVNUENDHEBMMSXDSEDQHO");
    msg.timeout = 0.140678752971;
    msg.range = 0.136254295388;
    msg.type = 160U;
    IMC::Tachograph tmp_msg_0;
    tmp_msg_0.timestamp_last_service = 0.551487154978;
    tmp_msg_0.time_next_service = 0.484748243502;
    tmp_msg_0.time_motor_next_service = 0.591032258909;
    tmp_msg_0.time_idle_ground = 0.348885792633;
    tmp_msg_0.time_idle_air = 0.79022962354;
    tmp_msg_0.time_idle_water = 0.373025062461;
    tmp_msg_0.time_idle_underwater = 0.791126011396;
    tmp_msg_0.time_idle_unknown = 0.785097616399;
    tmp_msg_0.time_motor_ground = 0.615480213342;
    tmp_msg_0.time_motor_air = 0.00120593241326;
    tmp_msg_0.time_motor_water = 0.982117292342;
    tmp_msg_0.time_motor_underwater = 0.022358613732;
    tmp_msg_0.time_motor_unknown = 0.728347713842;
    tmp_msg_0.rpm_min = -3212;
    tmp_msg_0.rpm_max = -9274;
    tmp_msg_0.depth_max = 0.747009270662;
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
    msg.setTimeStamp(0.939041807649);
    msg.setSource(45615U);
    msg.setSourceEntity(198U);
    msg.setDestination(10939U);
    msg.setDestinationEntity(138U);
    msg.req_id = 44699U;
    msg.type = 34U;
    msg.status = 140U;
    msg.info.assign("SGFPAXERIWAWKUMVQJPZRMRBEYMJPTHJWYZDXESKHLPDOPSBJDUFIVCHFQHTVINWJOCUTMSAFMFOQMRMSQFKUIUZVPTRXCBHBJDCNSXHYFUGYKXWQOOEWM");
    msg.range = 0.521187508757;

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
    msg.setTimeStamp(0.62885493115);
    msg.setSource(56241U);
    msg.setSourceEntity(191U);
    msg.setDestination(7145U);
    msg.setDestinationEntity(101U);
    msg.req_id = 14231U;
    msg.type = 73U;
    msg.status = 230U;
    msg.info.assign("YUGFAMPFDOULBQOBYLQIJHBJKOAGDRSSISMXJEUCJIBVLEKKPMROJB");
    msg.range = 0.809462248923;

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
    msg.setTimeStamp(0.978821781483);
    msg.setSource(41211U);
    msg.setSourceEntity(220U);
    msg.setDestination(36422U);
    msg.setDestinationEntity(132U);
    msg.req_id = 62802U;
    msg.type = 111U;
    msg.status = 157U;
    msg.info.assign("ELLRVUUAHVRVGYHCARLGXECQPMOQFOCHQASAWNBZSTXFDLRRNEGIPKHKCDJOPHMGWETTOXYVALXTKQPUSBVUSYOTEAHBYDZLESEWPOZFXI");
    msg.range = 0.951689146882;

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
    msg.setTimeStamp(0.376147313205);
    msg.setSource(27054U);
    msg.setSourceEntity(94U);
    msg.setDestination(26281U);
    msg.setDestinationEntity(187U);
    msg.value = -20302;

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
    msg.setTimeStamp(0.980909135363);
    msg.setSource(31118U);
    msg.setSourceEntity(251U);
    msg.setDestination(51592U);
    msg.setDestinationEntity(188U);
    msg.value = 7871;

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
    msg.setTimeStamp(0.463448309109);
    msg.setSource(5112U);
    msg.setSourceEntity(59U);
    msg.setDestination(11217U);
    msg.setDestinationEntity(2U);
    msg.value = -244;

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
    msg.setTimeStamp(0.809615831552);
    msg.setSource(28135U);
    msg.setSourceEntity(98U);
    msg.setDestination(19489U);
    msg.setDestinationEntity(153U);
    msg.value = 0.101052489113;

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
    msg.setTimeStamp(0.759602296479);
    msg.setSource(23279U);
    msg.setSourceEntity(154U);
    msg.setDestination(63706U);
    msg.setDestinationEntity(237U);
    msg.value = 0.978057772292;

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
    msg.setTimeStamp(0.400003724132);
    msg.setSource(23649U);
    msg.setSourceEntity(115U);
    msg.setDestination(15842U);
    msg.setDestinationEntity(199U);
    msg.value = 0.917006689211;

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
    msg.setTimeStamp(0.71047302826);
    msg.setSource(25074U);
    msg.setSourceEntity(127U);
    msg.setDestination(38404U);
    msg.setDestinationEntity(28U);
    msg.value = 0.702773812767;

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
    msg.setTimeStamp(0.965917381107);
    msg.setSource(4915U);
    msg.setSourceEntity(57U);
    msg.setDestination(38528U);
    msg.setDestinationEntity(106U);
    msg.value = 0.522574145444;

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
    msg.setTimeStamp(0.174917996039);
    msg.setSource(42237U);
    msg.setSourceEntity(59U);
    msg.setDestination(49591U);
    msg.setDestinationEntity(164U);
    msg.value = 0.688390262305;

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
    msg.setTimeStamp(0.0646371777703);
    msg.setSource(58591U);
    msg.setSourceEntity(13U);
    msg.setDestination(59765U);
    msg.setDestinationEntity(73U);
    msg.validity = 3426U;
    msg.type = 229U;
    msg.utc_year = 16164U;
    msg.utc_month = 222U;
    msg.utc_day = 248U;
    msg.utc_time = 0.468871376564;
    msg.lat = 0.927752846038;
    msg.lon = 0.178788098244;
    msg.height = 0.928068804404;
    msg.satellites = 168U;
    msg.cog = 0.392830127709;
    msg.sog = 0.657357060708;
    msg.hdop = 0.999239012126;
    msg.vdop = 0.959004405971;
    msg.hacc = 0.0610357443106;
    msg.vacc = 0.321065103973;

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
    msg.setTimeStamp(0.422107321388);
    msg.setSource(15178U);
    msg.setSourceEntity(69U);
    msg.setDestination(27933U);
    msg.setDestinationEntity(203U);
    msg.validity = 8724U;
    msg.type = 31U;
    msg.utc_year = 30995U;
    msg.utc_month = 161U;
    msg.utc_day = 79U;
    msg.utc_time = 0.308403291542;
    msg.lat = 0.41044983845;
    msg.lon = 0.215512996793;
    msg.height = 0.949295256594;
    msg.satellites = 158U;
    msg.cog = 0.536307049367;
    msg.sog = 0.910506045176;
    msg.hdop = 0.483363098545;
    msg.vdop = 0.0280265320649;
    msg.hacc = 0.335752990893;
    msg.vacc = 0.0980576632072;

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
    msg.setTimeStamp(0.662230457832);
    msg.setSource(58754U);
    msg.setSourceEntity(94U);
    msg.setDestination(39221U);
    msg.setDestinationEntity(31U);
    msg.validity = 30051U;
    msg.type = 94U;
    msg.utc_year = 55633U;
    msg.utc_month = 216U;
    msg.utc_day = 51U;
    msg.utc_time = 0.531278910025;
    msg.lat = 0.391238642778;
    msg.lon = 0.361127536108;
    msg.height = 0.648835711919;
    msg.satellites = 87U;
    msg.cog = 0.0863413513702;
    msg.sog = 0.549255839712;
    msg.hdop = 0.992346069112;
    msg.vdop = 0.643050174836;
    msg.hacc = 0.227802912909;
    msg.vacc = 0.409135312788;

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
    msg.setTimeStamp(0.183633582173);
    msg.setSource(38595U);
    msg.setSourceEntity(148U);
    msg.setDestination(30805U);
    msg.setDestinationEntity(247U);
    msg.time = 0.197371323398;
    msg.phi = 0.252373061048;
    msg.theta = 0.280908517169;
    msg.psi = 0.300363915174;
    msg.psi_magnetic = 0.477405776689;

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
    msg.setTimeStamp(0.658827661216);
    msg.setSource(52650U);
    msg.setSourceEntity(35U);
    msg.setDestination(7855U);
    msg.setDestinationEntity(92U);
    msg.time = 0.3890609514;
    msg.phi = 0.918046928565;
    msg.theta = 0.411589068839;
    msg.psi = 0.213230820491;
    msg.psi_magnetic = 0.232818628938;

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
    msg.setTimeStamp(0.349245128017);
    msg.setSource(48280U);
    msg.setSourceEntity(125U);
    msg.setDestination(21476U);
    msg.setDestinationEntity(175U);
    msg.time = 0.774128585388;
    msg.phi = 0.144296684379;
    msg.theta = 0.234581691756;
    msg.psi = 0.696928304504;
    msg.psi_magnetic = 0.209704378055;

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
    msg.setTimeStamp(0.583387029115);
    msg.setSource(26492U);
    msg.setSourceEntity(29U);
    msg.setDestination(49408U);
    msg.setDestinationEntity(84U);
    msg.time = 0.630390376588;
    msg.x = 0.103319261074;
    msg.y = 0.0373649257931;
    msg.z = 0.509219628057;
    msg.timestep = 0.357858368412;

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
    msg.setTimeStamp(0.770981589894);
    msg.setSource(8264U);
    msg.setSourceEntity(80U);
    msg.setDestination(8977U);
    msg.setDestinationEntity(26U);
    msg.time = 0.698371452503;
    msg.x = 0.0931323562086;
    msg.y = 0.203861238491;
    msg.z = 0.432951836736;
    msg.timestep = 0.417016556831;

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
    msg.setTimeStamp(0.341573334026);
    msg.setSource(51069U);
    msg.setSourceEntity(124U);
    msg.setDestination(19567U);
    msg.setDestinationEntity(136U);
    msg.time = 0.0681083455187;
    msg.x = 0.805532853265;
    msg.y = 0.462418119346;
    msg.z = 0.172405485706;
    msg.timestep = 0.0928233009502;

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
    msg.setTimeStamp(0.571287406654);
    msg.setSource(16901U);
    msg.setSourceEntity(65U);
    msg.setDestination(14859U);
    msg.setDestinationEntity(171U);
    msg.time = 0.65127828568;
    msg.x = 0.411815905392;
    msg.y = 0.930642069605;
    msg.z = 0.980926099154;

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
    msg.setTimeStamp(0.898334703656);
    msg.setSource(65213U);
    msg.setSourceEntity(19U);
    msg.setDestination(1930U);
    msg.setDestinationEntity(224U);
    msg.time = 0.913555194604;
    msg.x = 0.345556409017;
    msg.y = 0.777142445414;
    msg.z = 0.839876585058;

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
    msg.setTimeStamp(0.896358373834);
    msg.setSource(6340U);
    msg.setSourceEntity(242U);
    msg.setDestination(17249U);
    msg.setDestinationEntity(213U);
    msg.time = 0.240027962518;
    msg.x = 0.872604351018;
    msg.y = 0.249350587813;
    msg.z = 0.673215126003;

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
    msg.setTimeStamp(0.750234233626);
    msg.setSource(59183U);
    msg.setSourceEntity(158U);
    msg.setDestination(43098U);
    msg.setDestinationEntity(62U);
    msg.time = 0.0441094404522;
    msg.x = 0.628384670667;
    msg.y = 0.457768289052;
    msg.z = 0.266327742393;

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
    msg.setTimeStamp(0.744951359132);
    msg.setSource(30134U);
    msg.setSourceEntity(228U);
    msg.setDestination(35884U);
    msg.setDestinationEntity(98U);
    msg.time = 0.807719090332;
    msg.x = 0.708011075075;
    msg.y = 0.900318848327;
    msg.z = 0.37158489609;

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
    msg.setTimeStamp(0.45458632443);
    msg.setSource(24492U);
    msg.setSourceEntity(151U);
    msg.setDestination(57963U);
    msg.setDestinationEntity(52U);
    msg.time = 0.400261518268;
    msg.x = 0.456924155706;
    msg.y = 0.451613273192;
    msg.z = 0.180165090872;

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
    msg.setTimeStamp(0.167251199586);
    msg.setSource(9957U);
    msg.setSourceEntity(182U);
    msg.setDestination(51651U);
    msg.setDestinationEntity(54U);
    msg.time = 0.637356804041;
    msg.x = 0.489351650734;
    msg.y = 0.925462894592;
    msg.z = 0.704331675074;

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
    msg.setTimeStamp(0.699386834158);
    msg.setSource(14770U);
    msg.setSourceEntity(125U);
    msg.setDestination(54076U);
    msg.setDestinationEntity(142U);
    msg.time = 0.226616698149;
    msg.x = 0.481625483081;
    msg.y = 0.673949500973;
    msg.z = 0.90993906664;

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
    msg.setTimeStamp(0.952820357886);
    msg.setSource(609U);
    msg.setSourceEntity(153U);
    msg.setDestination(14025U);
    msg.setDestinationEntity(48U);
    msg.time = 0.197853916427;
    msg.x = 0.600750326974;
    msg.y = 0.0505040495538;
    msg.z = 0.815953220173;

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
    msg.setTimeStamp(0.543017748935);
    msg.setSource(15827U);
    msg.setSourceEntity(140U);
    msg.setDestination(3567U);
    msg.setDestinationEntity(124U);
    msg.validity = 210U;
    msg.x = 0.192705172141;
    msg.y = 0.123936672804;
    msg.z = 0.21908998213;

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
    msg.setTimeStamp(0.32299839717);
    msg.setSource(59335U);
    msg.setSourceEntity(226U);
    msg.setDestination(62660U);
    msg.setDestinationEntity(9U);
    msg.validity = 249U;
    msg.x = 0.949476364825;
    msg.y = 0.0444276713778;
    msg.z = 0.865159059524;

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
    msg.setTimeStamp(0.19326145546);
    msg.setSource(9488U);
    msg.setSourceEntity(210U);
    msg.setDestination(50869U);
    msg.setDestinationEntity(62U);
    msg.validity = 23U;
    msg.x = 0.824263672946;
    msg.y = 0.57101193182;
    msg.z = 0.364105936377;

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
    msg.setTimeStamp(0.39462280262);
    msg.setSource(41855U);
    msg.setSourceEntity(190U);
    msg.setDestination(17273U);
    msg.setDestinationEntity(95U);
    msg.validity = 247U;
    msg.x = 0.043314262385;
    msg.y = 0.391380449768;
    msg.z = 0.19601871827;

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
    msg.setTimeStamp(0.472520825721);
    msg.setSource(31861U);
    msg.setSourceEntity(105U);
    msg.setDestination(52255U);
    msg.setDestinationEntity(190U);
    msg.validity = 72U;
    msg.x = 0.773154718946;
    msg.y = 0.305685471591;
    msg.z = 0.477623512349;

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
    msg.setTimeStamp(0.140011521389);
    msg.setSource(62769U);
    msg.setSourceEntity(97U);
    msg.setDestination(49022U);
    msg.setDestinationEntity(215U);
    msg.validity = 199U;
    msg.x = 0.382170334693;
    msg.y = 0.813232260174;
    msg.z = 0.515659475514;

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
    msg.setTimeStamp(0.25809423195);
    msg.setSource(25414U);
    msg.setSourceEntity(143U);
    msg.setDestination(2374U);
    msg.setDestinationEntity(114U);
    msg.time = 0.55003618049;
    msg.x = 0.609494200587;
    msg.y = 0.446970107044;
    msg.z = 0.417634777548;

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
    msg.setTimeStamp(0.200705629403);
    msg.setSource(48022U);
    msg.setSourceEntity(227U);
    msg.setDestination(31841U);
    msg.setDestinationEntity(215U);
    msg.time = 0.637865584932;
    msg.x = 0.717347224416;
    msg.y = 0.774412901413;
    msg.z = 0.456479665924;

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
    msg.setTimeStamp(0.244470415734);
    msg.setSource(23004U);
    msg.setSourceEntity(150U);
    msg.setDestination(5741U);
    msg.setDestinationEntity(33U);
    msg.time = 0.11605716274;
    msg.x = 0.25926149449;
    msg.y = 0.532774618829;
    msg.z = 0.777357187777;

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
    msg.setTimeStamp(0.397888403469);
    msg.setSource(14251U);
    msg.setSourceEntity(156U);
    msg.setDestination(20488U);
    msg.setDestinationEntity(142U);
    msg.validity = 41U;
    msg.value = 0.873964801068;

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
    msg.setTimeStamp(0.55066861264);
    msg.setSource(11126U);
    msg.setSourceEntity(145U);
    msg.setDestination(20387U);
    msg.setDestinationEntity(96U);
    msg.validity = 63U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.655247287229;
    tmp_msg_0.y = 0.493897999557;
    tmp_msg_0.z = 0.425172820912;
    tmp_msg_0.phi = 0.926237116644;
    tmp_msg_0.theta = 0.784540451118;
    tmp_msg_0.psi = 0.805904737427;
    msg.location.push_back(tmp_msg_0);
    IMC::BeamConfig tmp_msg_1;
    tmp_msg_1.beam_width = 0.0666017970455;
    tmp_msg_1.beam_height = 0.519138086361;
    msg.beam_config.push_back(tmp_msg_1);
    msg.value = 0.55670546658;

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
    msg.setTimeStamp(0.47011452837);
    msg.setSource(44514U);
    msg.setSourceEntity(65U);
    msg.setDestination(57130U);
    msg.setDestinationEntity(145U);
    msg.validity = 212U;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.506112275887;
    tmp_msg_0.beam_height = 0.360843465045;
    msg.beam_config.push_back(tmp_msg_0);
    msg.value = 0.762452972789;

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
    msg.setTimeStamp(0.132917874738);
    msg.setSource(40570U);
    msg.setSourceEntity(218U);
    msg.setDestination(22324U);
    msg.setDestinationEntity(175U);
    msg.value = 0.634226801155;

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
    msg.setTimeStamp(0.900963749677);
    msg.setSource(30257U);
    msg.setSourceEntity(226U);
    msg.setDestination(24532U);
    msg.setDestinationEntity(226U);
    msg.value = 0.375200767972;

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
    msg.setTimeStamp(0.645413285402);
    msg.setSource(37133U);
    msg.setSourceEntity(103U);
    msg.setDestination(14623U);
    msg.setDestinationEntity(66U);
    msg.value = 0.980137135853;

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
    msg.setTimeStamp(0.334745816175);
    msg.setSource(32559U);
    msg.setSourceEntity(217U);
    msg.setDestination(50015U);
    msg.setDestinationEntity(182U);
    msg.value = 0.281684945451;

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
    msg.setTimeStamp(0.958080819253);
    msg.setSource(8444U);
    msg.setSourceEntity(60U);
    msg.setDestination(29799U);
    msg.setDestinationEntity(61U);
    msg.value = 0.904449258612;

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
    msg.setTimeStamp(0.342768963049);
    msg.setSource(58521U);
    msg.setSourceEntity(243U);
    msg.setDestination(44429U);
    msg.setDestinationEntity(58U);
    msg.value = 0.854590621993;

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
    msg.setTimeStamp(0.129694594456);
    msg.setSource(18076U);
    msg.setSourceEntity(62U);
    msg.setDestination(55265U);
    msg.setDestinationEntity(211U);
    msg.value = 0.804754435522;

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
    msg.setTimeStamp(0.183950856941);
    msg.setSource(23525U);
    msg.setSourceEntity(179U);
    msg.setDestination(51644U);
    msg.setDestinationEntity(204U);
    msg.value = 0.0795266199606;

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
    msg.setTimeStamp(0.333883338974);
    msg.setSource(9120U);
    msg.setSourceEntity(221U);
    msg.setDestination(29147U);
    msg.setDestinationEntity(238U);
    msg.value = 0.882578228133;

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
    msg.setTimeStamp(0.368523699638);
    msg.setSource(52407U);
    msg.setSourceEntity(252U);
    msg.setDestination(49007U);
    msg.setDestinationEntity(168U);
    msg.value = 0.297111854963;

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
    msg.setTimeStamp(0.480964356811);
    msg.setSource(20232U);
    msg.setSourceEntity(190U);
    msg.setDestination(48132U);
    msg.setDestinationEntity(32U);
    msg.value = 0.899451669715;

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
    msg.setTimeStamp(0.805394724381);
    msg.setSource(14719U);
    msg.setSourceEntity(1U);
    msg.setDestination(11667U);
    msg.setDestinationEntity(71U);
    msg.value = 0.350941670918;

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
    msg.setTimeStamp(0.643606046774);
    msg.setSource(44973U);
    msg.setSourceEntity(206U);
    msg.setDestination(4918U);
    msg.setDestinationEntity(104U);
    msg.value = 0.304709866008;

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
    msg.setTimeStamp(0.225949178289);
    msg.setSource(46356U);
    msg.setSourceEntity(81U);
    msg.setDestination(7690U);
    msg.setDestinationEntity(2U);
    msg.value = 0.522789593094;

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
    msg.setTimeStamp(0.879806969072);
    msg.setSource(31488U);
    msg.setSourceEntity(54U);
    msg.setDestination(20828U);
    msg.setDestinationEntity(223U);
    msg.value = 0.000321455429059;

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
    msg.setTimeStamp(0.603444345576);
    msg.setSource(15129U);
    msg.setSourceEntity(131U);
    msg.setDestination(20692U);
    msg.setDestinationEntity(195U);
    msg.value = 0.954625978181;

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
    msg.setTimeStamp(0.625705711466);
    msg.setSource(39955U);
    msg.setSourceEntity(75U);
    msg.setDestination(15864U);
    msg.setDestinationEntity(10U);
    msg.value = 0.443060783859;

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
    msg.setTimeStamp(0.457887618944);
    msg.setSource(45417U);
    msg.setSourceEntity(247U);
    msg.setDestination(65361U);
    msg.setDestinationEntity(223U);
    msg.value = 0.574972673838;

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
    msg.setTimeStamp(0.730679324331);
    msg.setSource(5809U);
    msg.setSourceEntity(151U);
    msg.setDestination(3139U);
    msg.setDestinationEntity(7U);
    msg.value = 0.477510907962;

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
    msg.setTimeStamp(0.353816632561);
    msg.setSource(35358U);
    msg.setSourceEntity(106U);
    msg.setDestination(64026U);
    msg.setDestinationEntity(10U);
    msg.value = 0.610271843202;

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
    msg.setTimeStamp(0.55534557267);
    msg.setSource(49260U);
    msg.setSourceEntity(69U);
    msg.setDestination(13203U);
    msg.setDestinationEntity(52U);
    msg.value = 0.518276880102;

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
    msg.setTimeStamp(0.183157309148);
    msg.setSource(3461U);
    msg.setSourceEntity(30U);
    msg.setDestination(56927U);
    msg.setDestinationEntity(132U);
    msg.value = 0.967828585858;

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
    msg.setTimeStamp(0.922309162864);
    msg.setSource(58992U);
    msg.setSourceEntity(223U);
    msg.setDestination(26503U);
    msg.setDestinationEntity(35U);
    msg.value = 0.928361372569;

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
    msg.setTimeStamp(0.436394696158);
    msg.setSource(41092U);
    msg.setSourceEntity(204U);
    msg.setDestination(36056U);
    msg.setDestinationEntity(228U);
    msg.value = 0.482110280434;

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
    msg.setTimeStamp(0.735165779488);
    msg.setSource(8092U);
    msg.setSourceEntity(242U);
    msg.setDestination(5806U);
    msg.setDestinationEntity(70U);
    msg.direction = 0.458888400185;
    msg.speed = 0.644909101069;
    msg.turbulence = 0.732033491573;

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
    msg.setTimeStamp(0.482643431885);
    msg.setSource(55778U);
    msg.setSourceEntity(89U);
    msg.setDestination(14262U);
    msg.setDestinationEntity(222U);
    msg.direction = 0.680426633079;
    msg.speed = 0.336086098423;
    msg.turbulence = 0.431488457119;

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
    msg.setTimeStamp(0.180290245117);
    msg.setSource(15511U);
    msg.setSourceEntity(19U);
    msg.setDestination(147U);
    msg.setDestinationEntity(152U);
    msg.direction = 0.300311437612;
    msg.speed = 0.265496889792;
    msg.turbulence = 0.258263931331;

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
    msg.setTimeStamp(0.940009837839);
    msg.setSource(38829U);
    msg.setSourceEntity(87U);
    msg.setDestination(51906U);
    msg.setDestinationEntity(201U);
    msg.value = 0.669301506453;

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
    msg.setTimeStamp(0.00334325725827);
    msg.setSource(51763U);
    msg.setSourceEntity(178U);
    msg.setDestination(41197U);
    msg.setDestinationEntity(15U);
    msg.value = 0.694278367897;

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
    msg.setTimeStamp(0.835390915824);
    msg.setSource(62451U);
    msg.setSourceEntity(240U);
    msg.setDestination(30590U);
    msg.setDestinationEntity(183U);
    msg.value = 0.471076963827;

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
    msg.setTimeStamp(0.490839180393);
    msg.setSource(7118U);
    msg.setSourceEntity(136U);
    msg.setDestination(50653U);
    msg.setDestinationEntity(96U);
    msg.value.assign("JSJWKMUHOSNBWFEYIQOHQWBVNCPRNTOCYXVTPDQDXTUEYPYPMGEZFCZHHHSZVZNFULMKXYMQZ");

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
    msg.setTimeStamp(0.718632189998);
    msg.setSource(28178U);
    msg.setSourceEntity(50U);
    msg.setDestination(33937U);
    msg.setDestinationEntity(246U);
    msg.value.assign("FEAFPXXORZCPLUENTQKQRPBJXYKX");

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
    msg.setTimeStamp(0.0842821958543);
    msg.setSource(19755U);
    msg.setSourceEntity(132U);
    msg.setDestination(50206U);
    msg.setDestinationEntity(233U);
    msg.value.assign("DFNIRHTCGZHMSFSDUKBVAGRGOQPEBZURWMPLOTLSPKZYZQTQPHYUJNJNVKCLEJESHICGZCSJPXFJHCGKNQEDNLIBIWQXKWYRTMQPUYPOYJBRVLEOSFKOVJUGOBRLSNZHDONRYDUEKBQQFHWNZUTPD");

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
    msg.setTimeStamp(0.483292503203);
    msg.setSource(29945U);
    msg.setSourceEntity(47U);
    msg.setDestination(32082U);
    msg.setDestinationEntity(98U);
    const char tmp_msg_0[] = {-87, -35, 64, 82, 88, 87, -86, 76, -18, 41, -10, -2, 110, 101, 112, 93, 69, 9, -42, -56, 27, -97, -80, 96, -42, 110, -10, -54, -89, -73, 121, -23, -126, 52, 23, -86, 110, 125, 51, 56, -128, -25, 44, -72, 123, 44, 19, -62, 95, 103, 75, 119, -59, 39, 8, -80, -126, -54, -39, -103};
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
    msg.setTimeStamp(0.744850348071);
    msg.setSource(52060U);
    msg.setSourceEntity(32U);
    msg.setDestination(45037U);
    msg.setDestinationEntity(245U);
    const char tmp_msg_0[] = {-32, -95, -125, -65, -96, -63, -27, -111, 45, 94, 4, 80, -9, -59, -110, 122, -40, -77, -42, -64, 18, -22, 125, -75, -128, -21, -9, 103, 108, -94, 19, 13, 70, 74, -98, 122, 67, 125, -39, 54, -117, -95, 77, 53, -33, -69, -116, -78, -57, -97, -66, 62, -48, 122, 71, 57, 111, -23, -118, 44, -88, -3, 61, -36, 103, 69, -4, -110, -13, -85, -116, 27, -124, 84, 39, 125, 94, -83, 61, 120, -26, -52, -119, -64, 51, -60, 117, 93, -72, 56, 13, -32, -47, 85, 80, 112, 29, 28, -43, -116, -57, -9, -5, -39, -32, -103, -71, -86, 60, -62, 57, 34, 97, 124, 62, 66, -17, 98, 111};
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
    msg.setTimeStamp(0.926366879301);
    msg.setSource(61192U);
    msg.setSourceEntity(95U);
    msg.setDestination(8685U);
    msg.setDestinationEntity(125U);
    const char tmp_msg_0[] = {57, -16, 63, -46, 99, -17, -107, 23, -66, -89, -122, -63, -105, 6, 83, 60, 122, -81, 114, 34, -6, -13, -1, -110, -79, 120, 75, 88, -53, -71, -95, -6, -107, 71, -57, 99, 87, -63, 30, -127, -3, 19, -30, -128, 54, -53, -9, -55, -3, -99, 49, -116, -50, -103, -1, 106, -67, -92, -100, 45, -27, -30, 39, 105, 95, -124, 75, -55, 39, 30, 20, 19, -58, 52, -108, 122, -105, 90, -120, -101, 97, -84, -102, 107, 16, -6, -49, -49, 88, 98, 44, -100, 74, -64, -121, -1, 41, 115, -109, 30, -52, 83, 23, -33, 83, 93, 17, 111, -59, -65, 10, 100, -128, -117, -2, 107, -108, -21, -96, 24, -51, -50, -83, 20, -35, -104, 108, -107, 105, 74, 57, 99, -115, -55, 39, 43, 59, -26, 67, -52, -44, 45, 109, -19, -53, -100, -78, -28, -55, -62, 60, 29, 123, 105, -40, 75, 78, 52, 54, 23, 104, 13, -86, 78, -80, 57, -91, -105, -72, -53, 80, -29, 59, -54, 72, 14, -29, -61, -115, -43, -48, 126, 120, -113, -21, 122, 117, 85, -105, 102, -79, -110, -73, 14, -110, -12, 113, 53, 122, 105, -118, -17, 115, -46, -96, -49, -124, 94, -24, 119, 110, 103, -58, -36, -110, 34, 75, -128, 40, 28, -111, 83, -105, 119, -80, -123, 33, 124, -81, 10, -110, -120, -16, 122, 63, -22};
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
    msg.setTimeStamp(0.124024932659);
    msg.setSource(47179U);
    msg.setSourceEntity(201U);
    msg.setDestination(61671U);
    msg.setDestinationEntity(13U);
    msg.value = 0.175351127519;

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
    msg.setTimeStamp(0.38950465659);
    msg.setSource(58161U);
    msg.setSourceEntity(138U);
    msg.setDestination(46855U);
    msg.setDestinationEntity(93U);
    msg.value = 0.181300815141;

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
    msg.setTimeStamp(0.602559856066);
    msg.setSource(50376U);
    msg.setSourceEntity(3U);
    msg.setDestination(52097U);
    msg.setDestinationEntity(148U);
    msg.value = 0.706942046561;

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
    msg.setTimeStamp(0.994670324242);
    msg.setSource(35740U);
    msg.setSourceEntity(208U);
    msg.setDestination(34710U);
    msg.setDestinationEntity(233U);
    msg.type = 59U;
    msg.frequency = 80692336U;
    msg.min_range = 59551U;
    msg.max_range = 49124U;
    msg.bits_per_point = 212U;
    msg.scale_factor = 0.877792223453;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.577045070237;
    tmp_msg_0.beam_height = 0.445093764398;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {-3, 53, -71, 49, 80, 76, -69, -90, -26, 30, 38, 117, 104, 59, 39, -106, 24, -63, 46, 30, 51, 27, -10, 83, 64, -83, -59, -42, -65, -124, 96, 104, -29, -113, -122, 55, 93, 73, 22, 17, 34, 70, 106, -40, 113, -12, 121, -25, 38, -128, 31, -70, -78, 126, 55, 44, 34, 106, 8, -25, -69, -121, -65, 124, -65, -100, -85, 124, 87, -106, 17, -126, -119, -66, -34, 102, 110, 18, -49, -49, -32, 20, -63, -64};
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
    msg.setTimeStamp(0.176678313448);
    msg.setSource(1112U);
    msg.setSourceEntity(31U);
    msg.setDestination(53032U);
    msg.setDestinationEntity(196U);
    msg.type = 196U;
    msg.frequency = 1615031682U;
    msg.min_range = 37837U;
    msg.max_range = 3680U;
    msg.bits_per_point = 218U;
    msg.scale_factor = 0.790943815656;
    const char tmp_msg_0[] = {-96, -73, -118, 115, 28, -108, -80, -104, -63, 42, -13, 10, 5, -57, 19, -97, -108, 105, 46, -101, -41, -61, -124, -46, 98, 29, 5, 56, -1, 102, 74, 1, 106, 36, 32, 48, -76, -64, -25, 66, 78, -73, -70, -42, -97, -23, 56, 11, -38, 29, -119, 9, 50, -52, 39, 50, 114, 67, -101, 95, 1, -27, -20, -65, -27, -54, 108, -81, 108, -102, 108, -19, -91, 65, 28, 11, -91, 63, -127, 13, -113, 107, 51, -125, -86, -100, 94, -37, 57, 69, -75, 11, -67, -128, 108, -127, -51, -77, 48, -12, 117, -100, -90, -67, 68, 57, 70, 1, 36, 105, -119, -10, -74, 2, -43, -66, -6, -19, -44, 31, 111, 28, 104, 86, -53, -30, -39, 74, -39, -43, 126, 126, 94, -69, -14, -80, 3, 109, -106, 67, -60, 76, -22, 49, -80, -91, 45, 88, 64, -35, -9, -2, -61, 49, -38, 115, 62, 119, 98, -20, 19, 96, 9, 52, 21, -121, 8, -35, -37, 106, 53, -12, -29, -81, 116, 38, 87, -70, -110, -17, 54, 41, 121, 63, 101, -24, -75, 85, 86, 49, 93, 116, -112, -2, 57, -128, -16, -65, -28, -22, 17, 35, -34, 14, 95, 107, 100, -18, 4, 89, -98, 13, 77, -91, -87, -128, -121, 61, 30, -89, 51, 43, -107, -100, 4, -89, 97, 83, 37, 107, -80, 108, -35, 108, -46, 100};
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
    msg.setTimeStamp(0.594751434155);
    msg.setSource(28531U);
    msg.setSourceEntity(24U);
    msg.setDestination(11685U);
    msg.setDestinationEntity(39U);
    msg.type = 212U;
    msg.frequency = 1756209050U;
    msg.min_range = 2672U;
    msg.max_range = 1974U;
    msg.bits_per_point = 167U;
    msg.scale_factor = 0.243832248424;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.537078707998;
    tmp_msg_0.beam_height = 0.201713457798;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {-64, 11, 72, 49, -21, 95, 21, -70, -60, 95, 12, -114, -123, 115, -94, 46, -52, 110, 65, -97, 112, 124, 19, 88, 90, 95, -56, -62, -55, -78, 89, -36, 114, 107, -114, -51, 43, 4, 116, 52, 61, 93, -16, 69, 15, 122, -30, 30, -70, 5, 32, 93, 58, 46, -37, -56, -97, 54, 116, 79, -127, -86, 124, -77, -24, -40, 106, -67, 90, 34, -124, 37, 94, 21, 24, 54, -95, -8, 61, 92, 47, -34, 86, -126, 13, -51, -17, 33, 90};
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
    msg.setTimeStamp(0.142039315832);
    msg.setSource(58188U);
    msg.setSourceEntity(119U);
    msg.setDestination(54873U);
    msg.setDestinationEntity(169U);

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
    msg.setTimeStamp(0.0707697905147);
    msg.setSource(4822U);
    msg.setSourceEntity(13U);
    msg.setDestination(41138U);
    msg.setDestinationEntity(126U);

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
    msg.setTimeStamp(0.693049794072);
    msg.setSource(47466U);
    msg.setSourceEntity(101U);
    msg.setDestination(37386U);
    msg.setDestinationEntity(111U);

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
    msg.setTimeStamp(0.460858266891);
    msg.setSource(1217U);
    msg.setSourceEntity(247U);
    msg.setDestination(41930U);
    msg.setDestinationEntity(237U);
    msg.op = 209U;

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
    msg.setTimeStamp(0.561410599825);
    msg.setSource(29541U);
    msg.setSourceEntity(55U);
    msg.setDestination(29425U);
    msg.setDestinationEntity(57U);
    msg.op = 130U;

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
    msg.setTimeStamp(0.0143606638573);
    msg.setSource(19867U);
    msg.setSourceEntity(57U);
    msg.setDestination(36692U);
    msg.setDestinationEntity(140U);
    msg.op = 177U;

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
    msg.setTimeStamp(0.416951457957);
    msg.setSource(45860U);
    msg.setSourceEntity(58U);
    msg.setDestination(34632U);
    msg.setDestinationEntity(103U);
    msg.value = 0.642415585673;
    msg.confidence = 0.546501322203;
    msg.opmodes.assign("XZRHGOLVZGXNABREQULXXMGAIBHPEZEEMQPOKJWMHUCLQCQAYUWQRJMDSIVGNAKLKMOCTISRGMDVEJIBGBSJYIPVNTCBSKQTFPFTJZXFRXEZNIUQKOCIVEIRHYG");

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
    msg.setTimeStamp(0.810913365447);
    msg.setSource(49544U);
    msg.setSourceEntity(123U);
    msg.setDestination(45059U);
    msg.setDestinationEntity(241U);
    msg.value = 0.717620136262;
    msg.confidence = 0.945769620771;
    msg.opmodes.assign("MIPDCVTUERNBODPVMLOILABEJMMTAUVSKBZHRTJXWCNYQAFSHUXDSWCDPVRIBJOBZDQXGKZTQXYHCNEFV");

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
    msg.setTimeStamp(0.279316473554);
    msg.setSource(4938U);
    msg.setSourceEntity(238U);
    msg.setDestination(36287U);
    msg.setDestinationEntity(64U);
    msg.value = 0.166900660095;
    msg.confidence = 0.794657774127;
    msg.opmodes.assign("ELBJDMHPKYRCTKUHMURFHSVRITXCWDKVZJS");

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
    msg.setTimeStamp(0.247846408343);
    msg.setSource(17376U);
    msg.setSourceEntity(33U);
    msg.setDestination(9728U);
    msg.setDestinationEntity(76U);
    msg.itow = 268133165U;
    msg.lat = 0.0343069655478;
    msg.lon = 0.408466075812;
    msg.height_ell = 0.612946997637;
    msg.height_sea = 0.26592191423;
    msg.hacc = 0.999899516291;
    msg.vacc = 0.537862462905;
    msg.vel_n = 0.637318863249;
    msg.vel_e = 0.725790902806;
    msg.vel_d = 0.170860311375;
    msg.speed = 0.6068373815;
    msg.gspeed = 0.939504181674;
    msg.heading = 0.449460255678;
    msg.sacc = 0.902763266885;
    msg.cacc = 0.121702837757;

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
    msg.setTimeStamp(0.737933677839);
    msg.setSource(22371U);
    msg.setSourceEntity(72U);
    msg.setDestination(44986U);
    msg.setDestinationEntity(106U);
    msg.itow = 6226954U;
    msg.lat = 0.300397567538;
    msg.lon = 0.490753729831;
    msg.height_ell = 0.548319193243;
    msg.height_sea = 0.537858575407;
    msg.hacc = 0.220418111375;
    msg.vacc = 0.766825467984;
    msg.vel_n = 0.023474027065;
    msg.vel_e = 0.978706038621;
    msg.vel_d = 0.351968156528;
    msg.speed = 0.502697699947;
    msg.gspeed = 0.340638611547;
    msg.heading = 0.440817045485;
    msg.sacc = 0.73665742467;
    msg.cacc = 0.652562124962;

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
    msg.setTimeStamp(0.595425409854);
    msg.setSource(42535U);
    msg.setSourceEntity(239U);
    msg.setDestination(61199U);
    msg.setDestinationEntity(59U);
    msg.itow = 1693096986U;
    msg.lat = 0.0867987375504;
    msg.lon = 0.805557255748;
    msg.height_ell = 0.958433890432;
    msg.height_sea = 0.781866624089;
    msg.hacc = 0.201710471692;
    msg.vacc = 0.475716995481;
    msg.vel_n = 0.801032531638;
    msg.vel_e = 0.880446495306;
    msg.vel_d = 0.693107251884;
    msg.speed = 0.309971517163;
    msg.gspeed = 0.612439507761;
    msg.heading = 0.656634245399;
    msg.sacc = 0.759925112966;
    msg.cacc = 0.779556529604;

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
    msg.setTimeStamp(0.537358372361);
    msg.setSource(60921U);
    msg.setSourceEntity(180U);
    msg.setDestination(43466U);
    msg.setDestinationEntity(98U);
    msg.id = 147U;
    msg.value = 0.220623100989;

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
    msg.setTimeStamp(0.676402670041);
    msg.setSource(34446U);
    msg.setSourceEntity(155U);
    msg.setDestination(29672U);
    msg.setDestinationEntity(172U);
    msg.id = 85U;
    msg.value = 0.603169521182;

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
    msg.setTimeStamp(0.400867451519);
    msg.setSource(37954U);
    msg.setSourceEntity(5U);
    msg.setDestination(58572U);
    msg.setDestinationEntity(171U);
    msg.id = 153U;
    msg.value = 0.229684336718;

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
    msg.setTimeStamp(0.0380091229);
    msg.setSource(65432U);
    msg.setSourceEntity(61U);
    msg.setDestination(37404U);
    msg.setDestinationEntity(3U);
    msg.x = 0.222658114262;
    msg.y = 0.1640430028;
    msg.z = 0.350870893412;
    msg.phi = 0.852371118569;
    msg.theta = 0.271637584102;
    msg.psi = 0.693999212436;

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
    msg.setTimeStamp(0.427118241902);
    msg.setSource(12539U);
    msg.setSourceEntity(90U);
    msg.setDestination(31009U);
    msg.setDestinationEntity(245U);
    msg.x = 0.767195053523;
    msg.y = 0.378415140864;
    msg.z = 0.177090129952;
    msg.phi = 0.00718699192337;
    msg.theta = 0.0956668960111;
    msg.psi = 0.811096061868;

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
    msg.setTimeStamp(0.467748682913);
    msg.setSource(20313U);
    msg.setSourceEntity(197U);
    msg.setDestination(25672U);
    msg.setDestinationEntity(153U);
    msg.x = 0.741279081483;
    msg.y = 0.85423421798;
    msg.z = 0.157067933834;
    msg.phi = 0.514937953573;
    msg.theta = 0.431160394101;
    msg.psi = 0.845631330677;

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
    msg.setTimeStamp(0.160842980977);
    msg.setSource(8392U);
    msg.setSourceEntity(182U);
    msg.setDestination(37879U);
    msg.setDestinationEntity(163U);
    msg.beam_width = 0.822582921105;
    msg.beam_height = 0.648144507217;

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
    msg.setTimeStamp(0.238217045709);
    msg.setSource(37260U);
    msg.setSourceEntity(44U);
    msg.setDestination(45228U);
    msg.setDestinationEntity(188U);
    msg.beam_width = 0.590989656345;
    msg.beam_height = 0.279439310614;

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
    msg.setTimeStamp(0.874675034093);
    msg.setSource(35547U);
    msg.setSourceEntity(28U);
    msg.setDestination(18392U);
    msg.setDestinationEntity(135U);
    msg.beam_width = 0.875800598248;
    msg.beam_height = 0.187970983452;

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
    msg.setTimeStamp(0.218510854159);
    msg.setSource(33163U);
    msg.setSourceEntity(183U);
    msg.setDestination(56804U);
    msg.setDestinationEntity(44U);
    msg.sane = 91U;

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
    msg.setTimeStamp(0.807102240492);
    msg.setSource(2556U);
    msg.setSourceEntity(180U);
    msg.setDestination(13836U);
    msg.setDestinationEntity(35U);
    msg.sane = 129U;

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
    msg.setTimeStamp(0.235716581221);
    msg.setSource(20U);
    msg.setSourceEntity(75U);
    msg.setDestination(20443U);
    msg.setDestinationEntity(127U);
    msg.sane = 179U;

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
    msg.setTimeStamp(0.33275044774);
    msg.setSource(46344U);
    msg.setSourceEntity(140U);
    msg.setDestination(20073U);
    msg.setDestinationEntity(152U);
    msg.value = 0.085886340908;

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
    msg.setTimeStamp(0.208941575934);
    msg.setSource(35020U);
    msg.setSourceEntity(135U);
    msg.setDestination(34910U);
    msg.setDestinationEntity(100U);
    msg.value = 0.815147538187;

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
    msg.setTimeStamp(0.585149943142);
    msg.setSource(52300U);
    msg.setSourceEntity(170U);
    msg.setDestination(27383U);
    msg.setDestinationEntity(226U);
    msg.value = 0.542595421885;

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
    msg.setTimeStamp(0.0874809257564);
    msg.setSource(29028U);
    msg.setSourceEntity(116U);
    msg.setDestination(31794U);
    msg.setDestinationEntity(224U);
    msg.value = 0.107010136524;

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
    msg.setTimeStamp(0.457828125166);
    msg.setSource(60422U);
    msg.setSourceEntity(150U);
    msg.setDestination(20975U);
    msg.setDestinationEntity(68U);
    msg.value = 0.79995058032;

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
    msg.setTimeStamp(0.0852893052954);
    msg.setSource(59025U);
    msg.setSourceEntity(84U);
    msg.setDestination(32566U);
    msg.setDestinationEntity(74U);
    msg.value = 0.98953176627;

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
    msg.setTimeStamp(0.313198730161);
    msg.setSource(10037U);
    msg.setSourceEntity(76U);
    msg.setDestination(25698U);
    msg.setDestinationEntity(157U);
    msg.value = 0.494963702943;

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
    msg.setTimeStamp(0.282652769378);
    msg.setSource(3900U);
    msg.setSourceEntity(15U);
    msg.setDestination(26979U);
    msg.setDestinationEntity(192U);
    msg.value = 0.866239793396;

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
    msg.setTimeStamp(0.747358227244);
    msg.setSource(43675U);
    msg.setSourceEntity(61U);
    msg.setDestination(2411U);
    msg.setDestinationEntity(130U);
    msg.value = 0.0218646848953;

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
    msg.setTimeStamp(0.7037601926);
    msg.setSource(34133U);
    msg.setSourceEntity(108U);
    msg.setDestination(2767U);
    msg.setDestinationEntity(3U);
    msg.value = 0.924091347659;

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
    msg.setTimeStamp(0.918093116448);
    msg.setSource(22607U);
    msg.setSourceEntity(68U);
    msg.setDestination(7805U);
    msg.setDestinationEntity(110U);
    msg.value = 0.980802999867;

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
    msg.setTimeStamp(0.119473554328);
    msg.setSource(28213U);
    msg.setSourceEntity(157U);
    msg.setDestination(15466U);
    msg.setDestinationEntity(1U);
    msg.value = 0.152756263537;

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
    msg.setTimeStamp(0.732027466279);
    msg.setSource(18580U);
    msg.setSourceEntity(230U);
    msg.setDestination(7788U);
    msg.setDestinationEntity(143U);
    msg.value = 0.938170155482;

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
    msg.setTimeStamp(0.491944106837);
    msg.setSource(40867U);
    msg.setSourceEntity(244U);
    msg.setDestination(15359U);
    msg.setDestinationEntity(17U);
    msg.value = 0.941965009232;

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
    msg.setTimeStamp(0.190182228504);
    msg.setSource(54694U);
    msg.setSourceEntity(221U);
    msg.setDestination(63197U);
    msg.setDestinationEntity(2U);
    msg.value = 0.724340462983;

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
    msg.setTimeStamp(0.107488715867);
    msg.setSource(58626U);
    msg.setSourceEntity(188U);
    msg.setDestination(55158U);
    msg.setDestinationEntity(43U);
    msg.value = 0.266326253099;

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
    msg.setTimeStamp(0.244900226298);
    msg.setSource(21736U);
    msg.setSourceEntity(59U);
    msg.setDestination(58438U);
    msg.setDestinationEntity(249U);
    msg.value = 0.16815837646;

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
    msg.setTimeStamp(0.741858462951);
    msg.setSource(17513U);
    msg.setSourceEntity(201U);
    msg.setDestination(35274U);
    msg.setDestinationEntity(76U);
    msg.value = 0.502908434136;

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
    msg.setTimeStamp(0.658538369633);
    msg.setSource(61751U);
    msg.setSourceEntity(242U);
    msg.setDestination(21973U);
    msg.setDestinationEntity(47U);
    msg.value = 0.705223976514;

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
    msg.setTimeStamp(0.0364976167785);
    msg.setSource(41417U);
    msg.setSourceEntity(146U);
    msg.setDestination(42995U);
    msg.setDestinationEntity(186U);
    msg.value = 0.531724777254;

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
    msg.setTimeStamp(0.832850108044);
    msg.setSource(55458U);
    msg.setSourceEntity(246U);
    msg.setDestination(23868U);
    msg.setDestinationEntity(208U);
    msg.value = 0.339061943748;

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
    msg.setTimeStamp(0.97600257632);
    msg.setSource(16880U);
    msg.setSourceEntity(124U);
    msg.setDestination(29769U);
    msg.setDestinationEntity(170U);
    msg.value = 0.667166637212;

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
    msg.setTimeStamp(0.734241359111);
    msg.setSource(52017U);
    msg.setSourceEntity(173U);
    msg.setDestination(49433U);
    msg.setDestinationEntity(123U);
    msg.value = 0.499840376115;

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
    msg.setTimeStamp(0.5792356667);
    msg.setSource(39732U);
    msg.setSourceEntity(38U);
    msg.setDestination(55340U);
    msg.setDestinationEntity(144U);
    msg.value = 0.465687884065;

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
    msg.setTimeStamp(0.925188439446);
    msg.setSource(44442U);
    msg.setSourceEntity(239U);
    msg.setDestination(53453U);
    msg.setDestinationEntity(186U);
    msg.validity = 14374U;
    msg.type = 26U;
    msg.tow = 1594472306U;
    msg.base_lat = 0.740528412755;
    msg.base_lon = 0.000993131786339;
    msg.base_height = 0.615966995789;
    msg.n = 0.92175284555;
    msg.e = 0.776244046934;
    msg.d = 0.45021711306;
    msg.v_n = 0.798390269992;
    msg.v_e = 0.250880650079;
    msg.v_d = 0.596037363667;
    msg.satellites = 218U;
    msg.iar_hyp = 7244U;
    msg.iar_ratio = 0.85706073851;

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
    msg.setTimeStamp(0.715001595244);
    msg.setSource(57558U);
    msg.setSourceEntity(64U);
    msg.setDestination(61821U);
    msg.setDestinationEntity(19U);
    msg.validity = 2351U;
    msg.type = 166U;
    msg.tow = 649311079U;
    msg.base_lat = 0.664967108004;
    msg.base_lon = 0.823454216664;
    msg.base_height = 0.508526687886;
    msg.n = 0.96335401542;
    msg.e = 0.83057726697;
    msg.d = 0.261601819436;
    msg.v_n = 0.322653090365;
    msg.v_e = 0.515160887794;
    msg.v_d = 0.180078349288;
    msg.satellites = 38U;
    msg.iar_hyp = 22414U;
    msg.iar_ratio = 0.123912966555;

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
    msg.setTimeStamp(0.61251545533);
    msg.setSource(65104U);
    msg.setSourceEntity(14U);
    msg.setDestination(42827U);
    msg.setDestinationEntity(69U);
    msg.validity = 5435U;
    msg.type = 184U;
    msg.tow = 1456203093U;
    msg.base_lat = 0.962587044626;
    msg.base_lon = 0.205265133892;
    msg.base_height = 0.874786573241;
    msg.n = 0.964849220727;
    msg.e = 0.598693006962;
    msg.d = 0.365814543845;
    msg.v_n = 0.44218686795;
    msg.v_e = 0.436403787267;
    msg.v_d = 0.230902467769;
    msg.satellites = 29U;
    msg.iar_hyp = 52386U;
    msg.iar_ratio = 0.985007467702;

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
    msg.setTimeStamp(0.763265396677);
    msg.setSource(7242U);
    msg.setSourceEntity(175U);
    msg.setDestination(38540U);
    msg.setDestinationEntity(252U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.188618305812;
    tmp_msg_0.lon = 0.83582657659;
    tmp_msg_0.height = 0.144233303574;
    tmp_msg_0.x = 0.737537026607;
    tmp_msg_0.y = 0.277300885199;
    tmp_msg_0.z = 0.815647944708;
    tmp_msg_0.phi = 0.744598579505;
    tmp_msg_0.theta = 0.294395094189;
    tmp_msg_0.psi = 0.627220232471;
    tmp_msg_0.u = 0.300848018268;
    tmp_msg_0.v = 0.440630262921;
    tmp_msg_0.w = 0.875669979195;
    tmp_msg_0.vx = 0.249533659514;
    tmp_msg_0.vy = 0.370081175481;
    tmp_msg_0.vz = 0.689535708235;
    tmp_msg_0.p = 0.655894855751;
    tmp_msg_0.q = 0.316959399188;
    tmp_msg_0.r = 0.292712233744;
    tmp_msg_0.depth = 0.35980721802;
    tmp_msg_0.alt = 0.263217751579;
    msg.state.set(tmp_msg_0);
    msg.type = 138U;

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
    msg.setTimeStamp(0.408568792002);
    msg.setSource(440U);
    msg.setSourceEntity(133U);
    msg.setDestination(52757U);
    msg.setDestinationEntity(155U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.667437907965;
    tmp_msg_0.lon = 0.359449261619;
    tmp_msg_0.height = 0.0800805499732;
    tmp_msg_0.x = 0.102503866482;
    tmp_msg_0.y = 0.471606155051;
    tmp_msg_0.z = 0.608161893933;
    tmp_msg_0.phi = 0.57115677799;
    tmp_msg_0.theta = 0.774268705923;
    tmp_msg_0.psi = 0.961748142889;
    tmp_msg_0.u = 0.944156569818;
    tmp_msg_0.v = 0.564825612798;
    tmp_msg_0.w = 0.841183958357;
    tmp_msg_0.vx = 0.69368819579;
    tmp_msg_0.vy = 0.312677754748;
    tmp_msg_0.vz = 0.214905024881;
    tmp_msg_0.p = 0.672101497431;
    tmp_msg_0.q = 0.431067327463;
    tmp_msg_0.r = 0.966856867189;
    tmp_msg_0.depth = 0.537636018929;
    tmp_msg_0.alt = 0.958915797471;
    msg.state.set(tmp_msg_0);
    msg.type = 73U;

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
    msg.setTimeStamp(0.193181896686);
    msg.setSource(4996U);
    msg.setSourceEntity(219U);
    msg.setDestination(1967U);
    msg.setDestinationEntity(210U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.770547307186;
    tmp_msg_0.lon = 0.899611142064;
    tmp_msg_0.height = 0.286753789396;
    tmp_msg_0.x = 0.330947310384;
    tmp_msg_0.y = 0.613328126722;
    tmp_msg_0.z = 0.0295138102754;
    tmp_msg_0.phi = 0.970925638633;
    tmp_msg_0.theta = 0.799147173618;
    tmp_msg_0.psi = 0.235871643096;
    tmp_msg_0.u = 0.381067151357;
    tmp_msg_0.v = 0.845945516834;
    tmp_msg_0.w = 0.247855357707;
    tmp_msg_0.vx = 0.464120394114;
    tmp_msg_0.vy = 0.486040687044;
    tmp_msg_0.vz = 0.720679295054;
    tmp_msg_0.p = 0.56857629381;
    tmp_msg_0.q = 0.133445447396;
    tmp_msg_0.r = 0.279830435917;
    tmp_msg_0.depth = 0.803145105834;
    tmp_msg_0.alt = 0.681411836008;
    msg.state.set(tmp_msg_0);
    msg.type = 149U;

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
    msg.setTimeStamp(0.0426193414433);
    msg.setSource(33400U);
    msg.setSourceEntity(229U);
    msg.setDestination(14316U);
    msg.setDestinationEntity(26U);
    msg.value = 0.562687968721;

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
    msg.setTimeStamp(0.86624689913);
    msg.setSource(6270U);
    msg.setSourceEntity(131U);
    msg.setDestination(1023U);
    msg.setDestinationEntity(12U);
    msg.value = 0.697128594389;

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
    msg.setTimeStamp(0.685948703921);
    msg.setSource(10377U);
    msg.setSourceEntity(71U);
    msg.setDestination(26341U);
    msg.setDestinationEntity(73U);
    msg.value = 0.352053181758;

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
    msg.setTimeStamp(0.692859282609);
    msg.setSource(37146U);
    msg.setSourceEntity(136U);
    msg.setDestination(25826U);
    msg.setDestinationEntity(53U);
    msg.value = 0.660883806989;

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
    msg.setTimeStamp(0.100534758194);
    msg.setSource(50012U);
    msg.setSourceEntity(130U);
    msg.setDestination(50149U);
    msg.setDestinationEntity(211U);
    msg.value = 0.42186845865;

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
    msg.setTimeStamp(0.267380440031);
    msg.setSource(4304U);
    msg.setSourceEntity(170U);
    msg.setDestination(20298U);
    msg.setDestinationEntity(218U);
    msg.value = 0.133395822527;

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
    msg.setTimeStamp(0.489506236241);
    msg.setSource(41273U);
    msg.setSourceEntity(210U);
    msg.setDestination(27535U);
    msg.setDestinationEntity(30U);
    msg.value = 0.392970877102;

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
    msg.setTimeStamp(0.0571071138301);
    msg.setSource(11521U);
    msg.setSourceEntity(189U);
    msg.setDestination(29286U);
    msg.setDestinationEntity(85U);
    msg.value = 0.204019836358;

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
    msg.setTimeStamp(0.0514832852747);
    msg.setSource(10931U);
    msg.setSourceEntity(106U);
    msg.setDestination(57844U);
    msg.setDestinationEntity(106U);
    msg.value = 0.896410539997;

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
    msg.setTimeStamp(0.626575481357);
    msg.setSource(11405U);
    msg.setSourceEntity(187U);
    msg.setDestination(22260U);
    msg.setDestinationEntity(191U);
    msg.value = 0.811769445106;

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
    msg.setTimeStamp(0.650589200531);
    msg.setSource(28094U);
    msg.setSourceEntity(237U);
    msg.setDestination(37772U);
    msg.setDestinationEntity(220U);
    msg.value = 0.186985431651;

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
    msg.setTimeStamp(0.229654625228);
    msg.setSource(38613U);
    msg.setSourceEntity(216U);
    msg.setDestination(16324U);
    msg.setDestinationEntity(205U);
    msg.value = 0.409083594399;

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
    msg.setTimeStamp(0.805267130157);
    msg.setSource(57847U);
    msg.setSourceEntity(108U);
    msg.setDestination(7677U);
    msg.setDestinationEntity(62U);
    msg.value = 0.0292085933017;

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
    msg.setTimeStamp(0.351797240196);
    msg.setSource(33745U);
    msg.setSourceEntity(185U);
    msg.setDestination(50119U);
    msg.setDestinationEntity(136U);
    msg.value = 0.523794065268;

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
    msg.setTimeStamp(0.820676205773);
    msg.setSource(42712U);
    msg.setSourceEntity(210U);
    msg.setDestination(50162U);
    msg.setDestinationEntity(36U);
    msg.value = 0.420412106532;

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
    msg.setTimeStamp(0.274345566817);
    msg.setSource(46747U);
    msg.setSourceEntity(100U);
    msg.setDestination(38661U);
    msg.setDestinationEntity(45U);
    msg.id = 25U;
    msg.zoom = 225U;
    msg.action = 112U;

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
    msg.setTimeStamp(0.0758450146888);
    msg.setSource(60974U);
    msg.setSourceEntity(245U);
    msg.setDestination(5171U);
    msg.setDestinationEntity(6U);
    msg.id = 183U;
    msg.zoom = 131U;
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
    msg.setTimeStamp(0.487111033919);
    msg.setSource(55315U);
    msg.setSourceEntity(169U);
    msg.setDestination(40202U);
    msg.setDestinationEntity(185U);
    msg.id = 156U;
    msg.zoom = 127U;
    msg.action = 42U;

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
    msg.setTimeStamp(0.306748527968);
    msg.setSource(51870U);
    msg.setSourceEntity(62U);
    msg.setDestination(50341U);
    msg.setDestinationEntity(149U);
    msg.id = 99U;
    msg.value = 0.178041460547;

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
    msg.setTimeStamp(0.135232852561);
    msg.setSource(36082U);
    msg.setSourceEntity(124U);
    msg.setDestination(29604U);
    msg.setDestinationEntity(35U);
    msg.id = 171U;
    msg.value = 0.500538429477;

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
    msg.setTimeStamp(0.102412034778);
    msg.setSource(54383U);
    msg.setSourceEntity(85U);
    msg.setDestination(39261U);
    msg.setDestinationEntity(222U);
    msg.id = 141U;
    msg.value = 0.40416367038;

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
    msg.setTimeStamp(0.494678997886);
    msg.setSource(29593U);
    msg.setSourceEntity(123U);
    msg.setDestination(14919U);
    msg.setDestinationEntity(4U);
    msg.id = 100U;
    msg.value = 0.51088603556;

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
    msg.setTimeStamp(0.0448335384984);
    msg.setSource(8300U);
    msg.setSourceEntity(146U);
    msg.setDestination(6305U);
    msg.setDestinationEntity(84U);
    msg.id = 23U;
    msg.value = 0.514383320719;

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
    msg.setTimeStamp(0.34746338125);
    msg.setSource(39378U);
    msg.setSourceEntity(99U);
    msg.setDestination(63279U);
    msg.setDestinationEntity(208U);
    msg.id = 191U;
    msg.value = 0.706450114546;

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
    msg.setTimeStamp(0.122503967661);
    msg.setSource(20666U);
    msg.setSourceEntity(33U);
    msg.setDestination(38473U);
    msg.setDestinationEntity(210U);
    msg.id = 90U;
    msg.angle = 0.100454610035;

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
    msg.setTimeStamp(0.535288607744);
    msg.setSource(44556U);
    msg.setSourceEntity(117U);
    msg.setDestination(28298U);
    msg.setDestinationEntity(72U);
    msg.id = 108U;
    msg.angle = 0.932617164576;

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
    msg.setTimeStamp(0.00576612467031);
    msg.setSource(61461U);
    msg.setSourceEntity(150U);
    msg.setDestination(26312U);
    msg.setDestinationEntity(66U);
    msg.id = 124U;
    msg.angle = 0.635996835568;

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
    msg.setTimeStamp(0.669730895561);
    msg.setSource(30889U);
    msg.setSourceEntity(238U);
    msg.setDestination(51757U);
    msg.setDestinationEntity(137U);
    msg.op = 232U;
    msg.actions.assign("XOZJKDUWPNRHTLZNLMUKZPBIMLYJSHGHIOLUIJDUEGSBFCSWYMBHFMW");

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
    msg.setTimeStamp(0.829384820383);
    msg.setSource(721U);
    msg.setSourceEntity(164U);
    msg.setDestination(55679U);
    msg.setDestinationEntity(248U);
    msg.op = 155U;
    msg.actions.assign("QCSVEYVOKAELKFJFKQTIKKNIAJCIPUJGHKTPJGHWYXTRCASREDRBZISZHVLQVSYSVZBFXNHVNCNDMUMPPPPYZZXEFLKJTHNTCNGEGQJORGEBEOLWIUWFTUPTLQLMBAAALSEOPEIJRBYOENFYCJWBRHOKRLBPSZVOXSVQAYGDPWQUVCMXUXAMDBUZMQHINDBCFHFTIOUYXODWLMXIYNJRGAMDAUTITGHOMUKKBSDWCJL");

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
    msg.setTimeStamp(0.580848976216);
    msg.setSource(43555U);
    msg.setSourceEntity(7U);
    msg.setDestination(12550U);
    msg.setDestinationEntity(101U);
    msg.op = 63U;
    msg.actions.assign("BBERPYGLBVRXODTTUZSUBMPDKMZWFWXQQDHMCFEXSFLDWDAJLNCPZYDZHHTSGIKQIMWOOQBAWOSYOLPQDFJHVYNQGEAVFIHKIILLTLWNGMCXVCMQBIVHWOJFCVOPEXUVBYIKTWZRHEYJIZYQKGRRICWSOCRSJQATSNFSTBRLVZJXC");

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
    msg.setTimeStamp(0.38475705214);
    msg.setSource(31916U);
    msg.setSourceEntity(101U);
    msg.setDestination(47180U);
    msg.setDestinationEntity(206U);
    msg.actions.assign("AZDEHPQFZBQEYNNFDTFCCYRGUCWAUUFBSXFOFXKXYZWLKTRQVYTBKGFMKITAEXBJCIVIRDEOYXBRASTNDUUMLWPLBDKZWCXLREQNPGOHDNJHYWMDLTFPRDXPSLHQU");

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
    msg.setTimeStamp(0.531137195674);
    msg.setSource(49132U);
    msg.setSourceEntity(133U);
    msg.setDestination(5046U);
    msg.setDestinationEntity(66U);
    msg.actions.assign("WLGYZURURKHPVTKXULSFUKYWHGANIJJDGOZJREVWKPQZYBSEYHKXZNIJUWNNTFSWQLVVAAICZOQT");

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
    msg.setTimeStamp(0.617568300063);
    msg.setSource(24199U);
    msg.setSourceEntity(159U);
    msg.setDestination(53938U);
    msg.setDestinationEntity(119U);
    msg.actions.assign("NVJZUHGJYBKFRCSVISDBEBCAJXCDIWIXXAAACYVWOKUYHRGQLOTZHQEVKJZOBDWAJOFMZWVCAMMWGRPUTAOZJHINZZUFPIGDDCLMMYMXNIQNFFQRVTPONALFXWDGSLGGOQPHYEOTBOBDUWVBJKPYFYSGQSNZPYBFKF");

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
    msg.setTimeStamp(0.0361765858858);
    msg.setSource(19534U);
    msg.setSourceEntity(227U);
    msg.setDestination(56119U);
    msg.setDestinationEntity(227U);
    msg.button = 131U;
    msg.value = 232U;

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
    msg.setTimeStamp(0.956358267597);
    msg.setSource(60080U);
    msg.setSourceEntity(152U);
    msg.setDestination(62565U);
    msg.setDestinationEntity(9U);
    msg.button = 6U;
    msg.value = 0U;

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
    msg.setTimeStamp(0.789276735159);
    msg.setSource(13521U);
    msg.setSourceEntity(209U);
    msg.setDestination(19871U);
    msg.setDestinationEntity(93U);
    msg.button = 181U;
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
    msg.setTimeStamp(0.438741625376);
    msg.setSource(9527U);
    msg.setSourceEntity(200U);
    msg.setDestination(5527U);
    msg.setDestinationEntity(12U);
    msg.op = 0U;
    msg.text.assign("CFSNAGDKUMNQKBIEYPDNCPJJFHCODHGXZCONELFQAKQEUGMCXHQSPAYKSLIWVRIWUEVBZKQBLGYUUAZETLSPTHFKRFAYEGWPQMTBJLVVEDROKMWBJYBCWRCMTAJNLNLPSQUMJTKFFJKGRXPZONWHRZBBZUNOFAXBRVJMXYBHOSYOTILCZKWW");

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
    msg.setTimeStamp(0.939834262465);
    msg.setSource(62507U);
    msg.setSourceEntity(45U);
    msg.setDestination(57837U);
    msg.setDestinationEntity(15U);
    msg.op = 37U;
    msg.text.assign("YGMFHDRQLWOGVPZUNKTPBNTLREODEXRAVEMVZTWXINDGAEECUBJLKLHRSWNNTWZIIZWCJQHJLTZUOBONQYUQKKTHERJOVTEJSGPBVUZMDIPRSOIFQAYMQXASXLMCYMBIASVZAGXBFKJNQWFSPDHOIIDSGKXCAGFACPMSZBFSXXCHRGDYTYGMZKPBEYVTFEWYCBOADJHHUUXOICLOELRJXKVCAJYHK");

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
    msg.setTimeStamp(0.546739286957);
    msg.setSource(33281U);
    msg.setSourceEntity(196U);
    msg.setDestination(15782U);
    msg.setDestinationEntity(138U);
    msg.op = 57U;
    msg.text.assign("CPQZHJVDXZLKLNGJIIJUAKBBZEZWGFGRKDAYFMYRDJETBLPIHTCHVEKEAQSOLNWLPDNCTRFJXWQQVLIBEAMITEBKBXIWUNZ");

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
    msg.setTimeStamp(0.444517949986);
    msg.setSource(24U);
    msg.setSourceEntity(84U);
    msg.setDestination(13353U);
    msg.setDestinationEntity(82U);
    msg.op = 97U;
    msg.time_remain = 0.175139226292;
    msg.sched_time = 0.424850420427;

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
    msg.setTimeStamp(0.665173047672);
    msg.setSource(1380U);
    msg.setSourceEntity(66U);
    msg.setDestination(6831U);
    msg.setDestinationEntity(32U);
    msg.op = 141U;
    msg.time_remain = 0.0763659476026;
    msg.sched_time = 0.347008115223;

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
    msg.setTimeStamp(0.804769098196);
    msg.setSource(30946U);
    msg.setSourceEntity(7U);
    msg.setDestination(903U);
    msg.setDestinationEntity(58U);
    msg.op = 67U;
    msg.time_remain = 0.309534218702;
    msg.sched_time = 0.218060472046;

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
    msg.setTimeStamp(0.623312569902);
    msg.setSource(56268U);
    msg.setSourceEntity(239U);
    msg.setDestination(10197U);
    msg.setDestinationEntity(68U);
    msg.name.assign("MEMQMTHMARIZDGSYUNWXDOJSUMCDYOQYKNINZ");
    msg.op = 30U;
    msg.sched_time = 0.693772691498;

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
    msg.setTimeStamp(0.0789909498189);
    msg.setSource(49971U);
    msg.setSourceEntity(154U);
    msg.setDestination(27261U);
    msg.setDestinationEntity(79U);
    msg.name.assign("TBGDAHFEUVHDFMUOCWKEIVMEPGLHSRAIJYFKHFQFIJCFTIBYHQLZDKJJCPLXLDXFNRHZNZMMPPGURYKOXFXKVSYMUIKESCOSELOOOWXWAGRMAFDGZVXVLWBSQPNBIGCPLZAXAIMUDNBTTEYDCVXIRYNCEJWRVPOZHVTYQPLGBJSATYJPKQUHRBGCDRPDQTBJGKEAYQROHSWOENBNIKLNXQAZGNVQHZVROMBS");
    msg.op = 147U;
    msg.sched_time = 0.732617030626;

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
    msg.setTimeStamp(0.465301506113);
    msg.setSource(50621U);
    msg.setSourceEntity(35U);
    msg.setDestination(1371U);
    msg.setDestinationEntity(37U);
    msg.name.assign("YZTVVUYMPJELIRIKMWAUNRTMTOLLZMVAEGFEJIHWCLIBPBEVAMFLQGQVFZEAWXESKVAOQUOKKLBYDNWFQJGKVXNJSGRHZNBTVTDMLQ");
    msg.op = 193U;
    msg.sched_time = 0.625700496906;

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
    msg.setTimeStamp(0.917930153534);
    msg.setSource(8461U);
    msg.setSourceEntity(52U);
    msg.setDestination(36550U);
    msg.setDestinationEntity(108U);

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
    msg.setTimeStamp(0.887886470894);
    msg.setSource(44081U);
    msg.setSourceEntity(150U);
    msg.setDestination(4798U);
    msg.setDestinationEntity(180U);

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
    msg.setTimeStamp(0.0523224273719);
    msg.setSource(36636U);
    msg.setSourceEntity(230U);
    msg.setDestination(33431U);
    msg.setDestinationEntity(216U);

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
    msg.setTimeStamp(0.114433431905);
    msg.setSource(47132U);
    msg.setSourceEntity(89U);
    msg.setDestination(34724U);
    msg.setDestinationEntity(69U);
    msg.name.assign("VJMOZVZXEXSGFLASAWCFVKYABJMJXLOSDKXXJPPUVWGBEH");
    msg.state = 143U;

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
    msg.setTimeStamp(0.569802042663);
    msg.setSource(52646U);
    msg.setSourceEntity(80U);
    msg.setDestination(33076U);
    msg.setDestinationEntity(152U);
    msg.name.assign("CGIYYMCKANUYXKQXHEKFDLUBQRECZFHWXFDPZAVOF");
    msg.state = 10U;

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
    msg.setTimeStamp(0.121617810601);
    msg.setSource(34841U);
    msg.setSourceEntity(230U);
    msg.setDestination(2988U);
    msg.setDestinationEntity(238U);
    msg.name.assign("QDLQERARHILHKFPWWWMRMGGJSNJHMYXSWGWXBZYRSXQROUOIZNTZHYEZMFKAXAZIPASPKMEMIACIVCJGGCMTFDURAOCNLQCNIWIEEEGJNGPIX");
    msg.state = 208U;

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
    msg.setTimeStamp(0.714585787532);
    msg.setSource(9449U);
    msg.setSourceEntity(146U);
    msg.setDestination(63897U);
    msg.setDestinationEntity(115U);
    msg.name.assign("CHNVDUWOOPYSKPRHDELEGZAWIYKVALKXLTBMWQTSLIOZAJSZFO");
    msg.value = 109U;

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
    msg.setTimeStamp(0.585258235659);
    msg.setSource(25052U);
    msg.setSourceEntity(88U);
    msg.setDestination(41907U);
    msg.setDestinationEntity(158U);
    msg.name.assign("DKSXUJKUOESZBZAQJZLAHXDCDQOWOJLYZFGVHLEWKEMGNMNXTVBCIXBRQMKXANFTMFAJWJFTNSIEADEVMTB");
    msg.value = 120U;

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
    msg.setTimeStamp(0.996001436104);
    msg.setSource(40797U);
    msg.setSourceEntity(215U);
    msg.setDestination(23422U);
    msg.setDestinationEntity(210U);
    msg.name.assign("KOXWQPNNMASBGPHRUZNGKAQJLCOWJVRFBBBVOIGQRHSLBJVDZFIASCWFCFUCMJBIOQSBPTZKPWTKQZLTAIWTEWJXDXYOYJDKYLAHGPKFVHEORQFJXOSTHCVRIXGDDFMCSXTFELKHM");
    msg.value = 194U;

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
    msg.setTimeStamp(0.406642105845);
    msg.setSource(33948U);
    msg.setSourceEntity(110U);
    msg.setDestination(12351U);
    msg.setDestinationEntity(221U);
    msg.name.assign("LPVRQFFBYTJPCCPLWCZIYUBYOUOEJPSXIUFKOOYZZRVOHKLFOKOIYGHKQHWXQVOCIDTZBRUUMCHUIFLTSTCLZOOGFVJHBNNZJRBKSTMNIWFPZQRESXMWYDRYALADSMMAXCDSKDHQBRVDIJPKMIVGFGAUVVQNLEEGWGBMUXWPPMEKPGCTQSXDBXACAYHJRXZSABANEGJRAMVWTWG");

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
    msg.setTimeStamp(0.72526114844);
    msg.setSource(29417U);
    msg.setSourceEntity(21U);
    msg.setDestination(26764U);
    msg.setDestinationEntity(47U);
    msg.name.assign("YHXMHXXNTWRMMBGYQGDCEQKVZNWLIECGOIAETUXGYVBHRJZVQFJSVYCTSLCUQLHMHKRJZMLZLPTPJONRFXJFAABPFFKKOOAAIIUIDKKKRCJRHFABZLOMNNQUNTGTWJMNARTYEVRBLERUUJMYGDZHYKOCOLDZEPPNQDTCSJSPSUPELWMQPSRDHYOFHUAIEAQHUQFOFNPDKLWDYFIWBIGZYOIITVVSXMBXVTG");

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
    msg.setTimeStamp(0.392070433966);
    msg.setSource(35165U);
    msg.setSourceEntity(198U);
    msg.setDestination(60557U);
    msg.setDestinationEntity(164U);
    msg.name.assign("KMNREKZWBGOJIYZERSAYHCFEUUUTQIBCRZEMVSWDFGPZDZUXQKLIMBNMKBPFVRUNJTPFJDJRYABN");

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
    msg.setTimeStamp(0.778538530379);
    msg.setSource(48680U);
    msg.setSourceEntity(63U);
    msg.setDestination(35489U);
    msg.setDestinationEntity(6U);
    msg.name.assign("YAWIBMSLSZOEEHDFJKOIMSBJOSWZAPDXYKNJGLKYSHUJUEYQUETCFSVFWIHKEPLIQRX");
    msg.value = 197U;

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
    msg.setTimeStamp(0.994024664146);
    msg.setSource(1715U);
    msg.setSourceEntity(250U);
    msg.setDestination(35677U);
    msg.setDestinationEntity(225U);
    msg.name.assign("MHUAPVVPHTSRKXEXYM");
    msg.value = 247U;

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
    msg.setTimeStamp(0.321915080361);
    msg.setSource(27513U);
    msg.setSourceEntity(212U);
    msg.setDestination(29828U);
    msg.setDestinationEntity(88U);
    msg.name.assign("ZQSVDAFPUZXUBKSXEHNFTEVCNBZIUZDQWCIUAFPXFMYHPCAGUESKKZJEEWGBLMVLTHAFTOOKLNDIIHYIVIREZJBJCWEMDLPFRKAMHZF");
    msg.value = 238U;

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
    msg.setTimeStamp(0.0212247793938);
    msg.setSource(5477U);
    msg.setSourceEntity(63U);
    msg.setDestination(15139U);
    msg.setDestinationEntity(137U);
    msg.id = 0U;
    msg.period = 363285645U;
    msg.duty_cycle = 4262048484U;

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
    msg.setTimeStamp(0.908341845288);
    msg.setSource(31222U);
    msg.setSourceEntity(155U);
    msg.setDestination(52089U);
    msg.setDestinationEntity(100U);
    msg.id = 112U;
    msg.period = 2690564233U;
    msg.duty_cycle = 2133684650U;

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
    msg.setTimeStamp(0.00155690325157);
    msg.setSource(24007U);
    msg.setSourceEntity(232U);
    msg.setDestination(52667U);
    msg.setDestinationEntity(0U);
    msg.id = 22U;
    msg.period = 3474504412U;
    msg.duty_cycle = 2218327950U;

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
    msg.setTimeStamp(0.671738625983);
    msg.setSource(62666U);
    msg.setSourceEntity(246U);
    msg.setDestination(37710U);
    msg.setDestinationEntity(79U);
    msg.id = 214U;
    msg.period = 4001056265U;
    msg.duty_cycle = 2715278696U;

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
    msg.setTimeStamp(0.42981653696);
    msg.setSource(50693U);
    msg.setSourceEntity(165U);
    msg.setDestination(27718U);
    msg.setDestinationEntity(126U);
    msg.id = 129U;
    msg.period = 4031922335U;
    msg.duty_cycle = 2046745428U;

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
    msg.setTimeStamp(0.736033380349);
    msg.setSource(17848U);
    msg.setSourceEntity(151U);
    msg.setDestination(35550U);
    msg.setDestinationEntity(9U);
    msg.id = 240U;
    msg.period = 2783737631U;
    msg.duty_cycle = 419369145U;

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
    msg.setTimeStamp(0.947213252254);
    msg.setSource(63572U);
    msg.setSourceEntity(42U);
    msg.setDestination(4848U);
    msg.setDestinationEntity(226U);
    msg.lat = 0.10553920049;
    msg.lon = 0.675020187689;
    msg.height = 0.493389812206;
    msg.x = 0.78187153281;
    msg.y = 0.385915936602;
    msg.z = 0.536020191303;
    msg.phi = 0.490443705706;
    msg.theta = 0.49270519425;
    msg.psi = 0.952212141363;
    msg.u = 0.787745982096;
    msg.v = 0.823934810834;
    msg.w = 0.189036130889;
    msg.vx = 0.534845675155;
    msg.vy = 0.281748595811;
    msg.vz = 0.631121627061;
    msg.p = 0.604397836747;
    msg.q = 0.582557876862;
    msg.r = 0.376477081057;
    msg.depth = 0.797662247248;
    msg.alt = 0.968703375439;

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
    msg.setTimeStamp(0.73459651633);
    msg.setSource(52128U);
    msg.setSourceEntity(47U);
    msg.setDestination(65357U);
    msg.setDestinationEntity(163U);
    msg.lat = 0.801651122287;
    msg.lon = 0.340029988783;
    msg.height = 0.90449650692;
    msg.x = 0.253462822191;
    msg.y = 0.296244529263;
    msg.z = 0.143918039528;
    msg.phi = 0.625301558527;
    msg.theta = 0.854474863573;
    msg.psi = 0.806751248913;
    msg.u = 0.892093907915;
    msg.v = 0.337199353701;
    msg.w = 0.0910369948028;
    msg.vx = 0.269003762452;
    msg.vy = 0.755888082735;
    msg.vz = 0.814298063522;
    msg.p = 0.648094659133;
    msg.q = 0.56661062342;
    msg.r = 0.365083132468;
    msg.depth = 0.588812358773;
    msg.alt = 0.174490239141;

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
    msg.setTimeStamp(0.621001766951);
    msg.setSource(7412U);
    msg.setSourceEntity(247U);
    msg.setDestination(6592U);
    msg.setDestinationEntity(95U);
    msg.lat = 0.00688993598478;
    msg.lon = 0.214215754148;
    msg.height = 0.700812773377;
    msg.x = 0.253304051286;
    msg.y = 0.246506559588;
    msg.z = 0.484783152624;
    msg.phi = 0.810462335176;
    msg.theta = 0.735130466821;
    msg.psi = 0.792239871439;
    msg.u = 0.348380747316;
    msg.v = 0.367541388294;
    msg.w = 0.583493104783;
    msg.vx = 0.716083097714;
    msg.vy = 0.652260558882;
    msg.vz = 0.266354213482;
    msg.p = 0.0402559261863;
    msg.q = 0.504138120365;
    msg.r = 0.345311077897;
    msg.depth = 0.573946636793;
    msg.alt = 0.749340862187;

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
    msg.setTimeStamp(0.420365418888);
    msg.setSource(53634U);
    msg.setSourceEntity(134U);
    msg.setDestination(47350U);
    msg.setDestinationEntity(121U);
    msg.x = 0.935312332234;
    msg.y = 0.450814249596;
    msg.z = 0.217644125903;

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
    msg.setTimeStamp(0.271874442427);
    msg.setSource(64068U);
    msg.setSourceEntity(38U);
    msg.setDestination(39966U);
    msg.setDestinationEntity(81U);
    msg.x = 0.11977170928;
    msg.y = 0.881750096715;
    msg.z = 0.813197917808;

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
    msg.setTimeStamp(0.135923125993);
    msg.setSource(22436U);
    msg.setSourceEntity(161U);
    msg.setDestination(64334U);
    msg.setDestinationEntity(123U);
    msg.x = 0.941523636523;
    msg.y = 0.545113267647;
    msg.z = 0.0412687901724;

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
    msg.setTimeStamp(0.383855486359);
    msg.setSource(26390U);
    msg.setSourceEntity(91U);
    msg.setDestination(15263U);
    msg.setDestinationEntity(47U);
    msg.value = 0.847253172348;

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
    msg.setTimeStamp(0.824308799678);
    msg.setSource(32379U);
    msg.setSourceEntity(30U);
    msg.setDestination(20798U);
    msg.setDestinationEntity(237U);
    msg.value = 0.505400119934;

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
    msg.setTimeStamp(0.987995162976);
    msg.setSource(31111U);
    msg.setSourceEntity(135U);
    msg.setDestination(31636U);
    msg.setDestinationEntity(203U);
    msg.value = 0.885201691037;

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
    msg.setTimeStamp(0.913281085911);
    msg.setSource(20526U);
    msg.setSourceEntity(172U);
    msg.setDestination(36666U);
    msg.setDestinationEntity(124U);
    msg.value = 0.400200749392;

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
    msg.setTimeStamp(0.86559501392);
    msg.setSource(58090U);
    msg.setSourceEntity(51U);
    msg.setDestination(58911U);
    msg.setDestinationEntity(246U);
    msg.value = 0.365851222459;

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
    msg.setTimeStamp(0.246847187887);
    msg.setSource(61568U);
    msg.setSourceEntity(230U);
    msg.setDestination(26588U);
    msg.setDestinationEntity(91U);
    msg.value = 0.0495810550531;

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
    msg.setTimeStamp(0.78246750238);
    msg.setSource(27053U);
    msg.setSourceEntity(110U);
    msg.setDestination(63340U);
    msg.setDestinationEntity(174U);
    msg.x = 0.0452960306889;
    msg.y = 0.8008558435;
    msg.z = 0.175931542344;
    msg.phi = 0.124853559334;
    msg.theta = 0.177206534032;
    msg.psi = 0.976068934192;
    msg.p = 0.940557204793;
    msg.q = 0.7965259941;
    msg.r = 0.370826086669;
    msg.u = 0.687123899283;
    msg.v = 0.59833701443;
    msg.w = 0.504580244142;
    msg.bias_psi = 0.479428956532;
    msg.bias_r = 0.532656756053;

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
    msg.setTimeStamp(0.8622560896);
    msg.setSource(19324U);
    msg.setSourceEntity(201U);
    msg.setDestination(332U);
    msg.setDestinationEntity(236U);
    msg.x = 0.460301339711;
    msg.y = 0.83695096675;
    msg.z = 0.645677423009;
    msg.phi = 0.4707730205;
    msg.theta = 0.839636417446;
    msg.psi = 0.972459395716;
    msg.p = 0.331334028901;
    msg.q = 0.296354298639;
    msg.r = 0.92817525221;
    msg.u = 0.401993059163;
    msg.v = 0.0242001036181;
    msg.w = 0.909318346591;
    msg.bias_psi = 0.191838027365;
    msg.bias_r = 0.316701251273;

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
    msg.setTimeStamp(0.284112128098);
    msg.setSource(58640U);
    msg.setSourceEntity(247U);
    msg.setDestination(26446U);
    msg.setDestinationEntity(77U);
    msg.x = 0.85426072614;
    msg.y = 0.848804167566;
    msg.z = 0.437169707095;
    msg.phi = 0.0962202630918;
    msg.theta = 0.679420905627;
    msg.psi = 0.414663313877;
    msg.p = 0.600701166408;
    msg.q = 0.816084689471;
    msg.r = 0.893141655515;
    msg.u = 0.332453456861;
    msg.v = 0.157531685374;
    msg.w = 0.29438418879;
    msg.bias_psi = 0.121883391042;
    msg.bias_r = 0.360632986806;

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
    msg.setTimeStamp(0.914494312972);
    msg.setSource(22152U);
    msg.setSourceEntity(235U);
    msg.setDestination(61686U);
    msg.setDestinationEntity(111U);
    msg.bias_psi = 0.927440684884;
    msg.bias_r = 0.904381093732;
    msg.cog = 0.167764265534;
    msg.cyaw = 0.575717430632;
    msg.gps_rej_level = 0.677166615336;
    msg.lbl_rej_level = 0.781109916997;
    msg.custom_x = 0.000861494170582;
    msg.custom_y = 0.0116938633512;
    msg.custom_z = 0.774014797444;

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
    msg.setTimeStamp(0.837130443933);
    msg.setSource(26469U);
    msg.setSourceEntity(215U);
    msg.setDestination(17025U);
    msg.setDestinationEntity(202U);
    msg.bias_psi = 0.516631843439;
    msg.bias_r = 0.181968553226;
    msg.cog = 0.680192222236;
    msg.cyaw = 0.0884727807801;
    msg.gps_rej_level = 0.0266479659687;
    msg.lbl_rej_level = 0.595561015207;
    msg.custom_x = 0.357875339675;
    msg.custom_y = 0.890849697859;
    msg.custom_z = 0.227900575176;

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
    msg.setTimeStamp(0.4375528065);
    msg.setSource(26981U);
    msg.setSourceEntity(127U);
    msg.setDestination(12889U);
    msg.setDestinationEntity(226U);
    msg.bias_psi = 0.343619476061;
    msg.bias_r = 0.0353272148281;
    msg.cog = 0.0295621138373;
    msg.cyaw = 0.969304991004;
    msg.gps_rej_level = 0.929910480845;
    msg.lbl_rej_level = 0.187480614838;
    msg.custom_x = 0.693407735306;
    msg.custom_y = 0.615461993628;
    msg.custom_z = 0.138814119593;

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
    msg.setTimeStamp(0.75810456797);
    msg.setSource(38292U);
    msg.setSourceEntity(90U);
    msg.setDestination(48667U);
    msg.setDestinationEntity(173U);
    msg.utc_time = 0.780795889112;
    msg.reason = 170U;

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
    msg.setTimeStamp(0.360236378686);
    msg.setSource(12922U);
    msg.setSourceEntity(245U);
    msg.setDestination(13916U);
    msg.setDestinationEntity(176U);
    msg.utc_time = 0.304438122692;
    msg.reason = 211U;

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
    msg.setTimeStamp(0.316271458964);
    msg.setSource(29236U);
    msg.setSourceEntity(7U);
    msg.setDestination(52022U);
    msg.setDestinationEntity(253U);
    msg.utc_time = 0.645410933741;
    msg.reason = 143U;

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
    msg.setTimeStamp(0.29430533123);
    msg.setSource(64250U);
    msg.setSourceEntity(156U);
    msg.setDestination(4659U);
    msg.setDestinationEntity(43U);
    msg.id = 238U;
    msg.range = 0.241825066201;
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
    msg.setTimeStamp(0.229937253033);
    msg.setSource(11496U);
    msg.setSourceEntity(54U);
    msg.setDestination(33585U);
    msg.setDestinationEntity(142U);
    msg.id = 34U;
    msg.range = 0.00976754304795;
    msg.acceptance = 112U;

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
    msg.setTimeStamp(0.0620374252574);
    msg.setSource(52595U);
    msg.setSourceEntity(197U);
    msg.setDestination(781U);
    msg.setDestinationEntity(21U);
    msg.id = 34U;
    msg.range = 0.353275670016;
    msg.acceptance = 29U;

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
    msg.setTimeStamp(0.99998985378);
    msg.setSource(33182U);
    msg.setSourceEntity(215U);
    msg.setDestination(62713U);
    msg.setDestinationEntity(62U);
    msg.type = 85U;
    msg.reason = 64U;
    msg.value = 0.173455128881;
    msg.timestep = 0.968949837145;

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
    msg.setTimeStamp(0.879571509115);
    msg.setSource(41524U);
    msg.setSourceEntity(10U);
    msg.setDestination(47109U);
    msg.setDestinationEntity(211U);
    msg.type = 92U;
    msg.reason = 90U;
    msg.value = 0.765169320043;
    msg.timestep = 0.575646790241;

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
    msg.setTimeStamp(0.359321456056);
    msg.setSource(53976U);
    msg.setSourceEntity(93U);
    msg.setDestination(355U);
    msg.setDestinationEntity(6U);
    msg.type = 184U;
    msg.reason = 110U;
    msg.value = 0.0600350586213;
    msg.timestep = 0.712267407142;

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
    msg.setTimeStamp(0.725078368289);
    msg.setSource(78U);
    msg.setSourceEntity(190U);
    msg.setDestination(61117U);
    msg.setDestinationEntity(206U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("KHMDTPZEHZWPNYBIIXIUUHLLYIHWAAYGMJNLDWVXKSUJLJYTNRCINMXOFLTMIOWCWHKQFBPG");
    tmp_msg_0.lat = 0.455446797808;
    tmp_msg_0.lon = 0.316594779307;
    tmp_msg_0.depth = 0.511186328745;
    tmp_msg_0.query_channel = 182U;
    tmp_msg_0.reply_channel = 164U;
    tmp_msg_0.transponder_delay = 80U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.504903544884;
    msg.y = 0.272392360726;
    msg.var_x = 0.464508641904;
    msg.var_y = 0.0217498404478;
    msg.distance = 0.390092275138;

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
    msg.setTimeStamp(0.52298532409);
    msg.setSource(13333U);
    msg.setSourceEntity(238U);
    msg.setDestination(47791U);
    msg.setDestinationEntity(131U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("HCUPNSOUKNGDHWBVMCNLPTYIKAVAOYHILORZETSIRPSILIYBFQJUJITAYRQMLFOUAQQLHVXPAFYVTXASSCUEGHCZWRBHPBRXKUUKJLNPUSLYRJWMFOKTHMXDNBJDWKNYPEMMWNNOJZAJOAQSUQFZGBITODDETCOMBVVFXFVZWFVKFKQ");
    tmp_msg_0.lat = 0.345582866786;
    tmp_msg_0.lon = 0.366463971227;
    tmp_msg_0.depth = 0.898611430078;
    tmp_msg_0.query_channel = 163U;
    tmp_msg_0.reply_channel = 133U;
    tmp_msg_0.transponder_delay = 188U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.0162824573194;
    msg.y = 0.163363339165;
    msg.var_x = 0.276124143592;
    msg.var_y = 0.624934669163;
    msg.distance = 0.63542844541;

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
    msg.setTimeStamp(0.187234132899);
    msg.setSource(1372U);
    msg.setSourceEntity(142U);
    msg.setDestination(54559U);
    msg.setDestinationEntity(20U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("BOMHBCUCREWQGJQMRJGTVZMYRJBQXSYCQPFUJXTTKRSIVTINGZACWTIZGIULLSRKEWUHCNGDPFEUKSLTHZHL");
    tmp_msg_0.lat = 0.300067021183;
    tmp_msg_0.lon = 0.0425422034508;
    tmp_msg_0.depth = 0.759871597341;
    tmp_msg_0.query_channel = 120U;
    tmp_msg_0.reply_channel = 212U;
    tmp_msg_0.transponder_delay = 225U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.579044879425;
    msg.y = 0.00781793837026;
    msg.var_x = 0.874265781296;
    msg.var_y = 0.919767247189;
    msg.distance = 0.241785001765;

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
    msg.setTimeStamp(0.841887934305);
    msg.setSource(8866U);
    msg.setSourceEntity(130U);
    msg.setDestination(58100U);
    msg.setDestinationEntity(44U);
    msg.state = 171U;

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
    msg.setTimeStamp(0.041969412436);
    msg.setSource(30311U);
    msg.setSourceEntity(7U);
    msg.setDestination(5724U);
    msg.setDestinationEntity(146U);
    msg.state = 0U;

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
    msg.setTimeStamp(0.139881656445);
    msg.setSource(2575U);
    msg.setSourceEntity(149U);
    msg.setDestination(6119U);
    msg.setDestinationEntity(59U);
    msg.state = 68U;

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
    msg.setTimeStamp(0.784565743823);
    msg.setSource(19334U);
    msg.setSourceEntity(70U);
    msg.setDestination(3837U);
    msg.setDestinationEntity(194U);
    msg.x = 0.41326612086;
    msg.y = 0.422237216505;
    msg.z = 0.888436587552;

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
    msg.setTimeStamp(0.93540100452);
    msg.setSource(5952U);
    msg.setSourceEntity(90U);
    msg.setDestination(3066U);
    msg.setDestinationEntity(158U);
    msg.x = 0.828452017692;
    msg.y = 0.152711738415;
    msg.z = 0.247989308143;

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
    msg.setTimeStamp(0.877996570072);
    msg.setSource(18075U);
    msg.setSourceEntity(151U);
    msg.setDestination(45810U);
    msg.setDestinationEntity(251U);
    msg.x = 0.944063652117;
    msg.y = 0.102223156536;
    msg.z = 0.459667703985;

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
    msg.setTimeStamp(0.835243618849);
    msg.setSource(20860U);
    msg.setSourceEntity(11U);
    msg.setDestination(11235U);
    msg.setDestinationEntity(221U);
    msg.va = 0.345611175522;
    msg.aoa = 0.746990615297;
    msg.ssa = 0.432601411922;

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
    msg.setTimeStamp(0.857417867242);
    msg.setSource(57341U);
    msg.setSourceEntity(73U);
    msg.setDestination(65050U);
    msg.setDestinationEntity(76U);
    msg.va = 0.337131274601;
    msg.aoa = 0.997691080989;
    msg.ssa = 0.76653985289;

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
    msg.setTimeStamp(0.491905119155);
    msg.setSource(53308U);
    msg.setSourceEntity(214U);
    msg.setDestination(40586U);
    msg.setDestinationEntity(111U);
    msg.va = 0.552544148345;
    msg.aoa = 0.804653414869;
    msg.ssa = 0.0280848833002;

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
    msg.setTimeStamp(0.0167758112575);
    msg.setSource(1179U);
    msg.setSourceEntity(35U);
    msg.setDestination(41490U);
    msg.setDestinationEntity(43U);
    msg.value = 0.457131523791;
    msg.off = 0.0898545677517;

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
    msg.setTimeStamp(0.617077152693);
    msg.setSource(23392U);
    msg.setSourceEntity(141U);
    msg.setDestination(14940U);
    msg.setDestinationEntity(157U);
    msg.value = 0.408199175862;
    msg.off = 0.209787397745;

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
    msg.setTimeStamp(0.382739054183);
    msg.setSource(8657U);
    msg.setSourceEntity(230U);
    msg.setDestination(25663U);
    msg.setDestinationEntity(201U);
    msg.value = 0.398119646306;
    msg.off = 0.0960472106616;

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
    msg.setTimeStamp(0.202306879017);
    msg.setSource(47224U);
    msg.setSourceEntity(195U);
    msg.setDestination(47989U);
    msg.setDestinationEntity(16U);
    msg.value = 0.817497672027;
    msg.z_units = 151U;

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
    msg.setTimeStamp(0.626384960058);
    msg.setSource(32533U);
    msg.setSourceEntity(8U);
    msg.setDestination(13817U);
    msg.setDestinationEntity(214U);
    msg.value = 0.97470591345;
    msg.z_units = 107U;

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
    msg.setTimeStamp(0.430198034658);
    msg.setSource(7547U);
    msg.setSourceEntity(87U);
    msg.setDestination(59799U);
    msg.setDestinationEntity(92U);
    msg.value = 0.298882403782;
    msg.z_units = 238U;

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
    msg.setTimeStamp(0.245583989548);
    msg.setSource(39604U);
    msg.setSourceEntity(181U);
    msg.setDestination(46299U);
    msg.setDestinationEntity(55U);
    msg.value = 0.127232851657;
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
    msg.setTimeStamp(0.161820695663);
    msg.setSource(33774U);
    msg.setSourceEntity(114U);
    msg.setDestination(19251U);
    msg.setDestinationEntity(154U);
    msg.value = 0.271825881984;
    msg.speed_units = 219U;

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
    msg.setTimeStamp(0.287325549446);
    msg.setSource(44888U);
    msg.setSourceEntity(90U);
    msg.setDestination(37647U);
    msg.setDestinationEntity(161U);
    msg.value = 0.410730124125;
    msg.speed_units = 252U;

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
    msg.setTimeStamp(0.416447776676);
    msg.setSource(25602U);
    msg.setSourceEntity(118U);
    msg.setDestination(54644U);
    msg.setDestinationEntity(150U);
    msg.value = 0.348186087599;

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
    msg.setTimeStamp(0.362381217444);
    msg.setSource(19803U);
    msg.setSourceEntity(3U);
    msg.setDestination(22771U);
    msg.setDestinationEntity(71U);
    msg.value = 0.351948978988;

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
    msg.setTimeStamp(0.412966381053);
    msg.setSource(37500U);
    msg.setSourceEntity(5U);
    msg.setDestination(65233U);
    msg.setDestinationEntity(239U);
    msg.value = 0.843914713594;

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
    msg.setTimeStamp(0.874318705212);
    msg.setSource(4927U);
    msg.setSourceEntity(142U);
    msg.setDestination(59378U);
    msg.setDestinationEntity(23U);
    msg.value = 0.106729346167;

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
    msg.setTimeStamp(0.724653406202);
    msg.setSource(39256U);
    msg.setSourceEntity(83U);
    msg.setDestination(36931U);
    msg.setDestinationEntity(71U);
    msg.value = 0.317216145828;

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
    msg.setTimeStamp(0.672941537016);
    msg.setSource(6222U);
    msg.setSourceEntity(83U);
    msg.setDestination(6862U);
    msg.setDestinationEntity(252U);
    msg.value = 0.954188134577;

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
    msg.setTimeStamp(0.45844766258);
    msg.setSource(47196U);
    msg.setSourceEntity(44U);
    msg.setDestination(3342U);
    msg.setDestinationEntity(34U);
    msg.value = 0.0418113231214;

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
    msg.setTimeStamp(0.814977023392);
    msg.setSource(27532U);
    msg.setSourceEntity(115U);
    msg.setDestination(44486U);
    msg.setDestinationEntity(77U);
    msg.value = 0.361308652835;

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
    msg.setTimeStamp(0.776454308145);
    msg.setSource(46115U);
    msg.setSourceEntity(41U);
    msg.setDestination(56177U);
    msg.setDestinationEntity(166U);
    msg.value = 0.177936954555;

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
    msg.setTimeStamp(0.566439690468);
    msg.setSource(25954U);
    msg.setSourceEntity(229U);
    msg.setDestination(38639U);
    msg.setDestinationEntity(97U);
    msg.path_ref = 382700438U;
    msg.start_lat = 0.688355994855;
    msg.start_lon = 0.0528427416084;
    msg.start_z = 0.925215675322;
    msg.start_z_units = 14U;
    msg.end_lat = 0.523108065191;
    msg.end_lon = 0.308229770045;
    msg.end_z = 0.507524473701;
    msg.end_z_units = 55U;
    msg.speed = 0.500743038065;
    msg.speed_units = 148U;
    msg.lradius = 0.549182499483;
    msg.flags = 132U;

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
    msg.setTimeStamp(0.17609928152);
    msg.setSource(453U);
    msg.setSourceEntity(140U);
    msg.setDestination(54890U);
    msg.setDestinationEntity(141U);
    msg.path_ref = 643295910U;
    msg.start_lat = 0.992607113203;
    msg.start_lon = 0.704761047895;
    msg.start_z = 0.343397953468;
    msg.start_z_units = 53U;
    msg.end_lat = 0.574611965803;
    msg.end_lon = 0.680041913566;
    msg.end_z = 0.379723711231;
    msg.end_z_units = 213U;
    msg.speed = 0.438126382341;
    msg.speed_units = 142U;
    msg.lradius = 0.00863485150107;
    msg.flags = 59U;

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
    msg.setTimeStamp(0.917090641929);
    msg.setSource(5683U);
    msg.setSourceEntity(105U);
    msg.setDestination(17745U);
    msg.setDestinationEntity(134U);
    msg.path_ref = 2049073965U;
    msg.start_lat = 0.214003710609;
    msg.start_lon = 0.908879169215;
    msg.start_z = 0.228359841865;
    msg.start_z_units = 70U;
    msg.end_lat = 0.269985431773;
    msg.end_lon = 0.98016409749;
    msg.end_z = 0.683127861565;
    msg.end_z_units = 78U;
    msg.speed = 0.633444561202;
    msg.speed_units = 204U;
    msg.lradius = 0.298434305589;
    msg.flags = 183U;

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
    msg.setTimeStamp(0.800786441064);
    msg.setSource(5894U);
    msg.setSourceEntity(195U);
    msg.setDestination(7154U);
    msg.setDestinationEntity(85U);
    msg.x = 0.44975258385;
    msg.y = 0.61355651477;
    msg.z = 0.581650582389;
    msg.k = 0.962477581875;
    msg.m = 0.16979157066;
    msg.n = 0.78929692137;
    msg.flags = 161U;

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
    msg.setTimeStamp(0.945965779178);
    msg.setSource(41037U);
    msg.setSourceEntity(143U);
    msg.setDestination(54513U);
    msg.setDestinationEntity(208U);
    msg.x = 0.309645269069;
    msg.y = 0.764644108963;
    msg.z = 0.345093731456;
    msg.k = 0.0192741743212;
    msg.m = 0.2296753475;
    msg.n = 0.795653968502;
    msg.flags = 6U;

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
    msg.setTimeStamp(0.823191490379);
    msg.setSource(58454U);
    msg.setSourceEntity(171U);
    msg.setDestination(59127U);
    msg.setDestinationEntity(5U);
    msg.x = 0.210794338249;
    msg.y = 0.0447716601514;
    msg.z = 0.403693368079;
    msg.k = 0.962439321314;
    msg.m = 0.157102635964;
    msg.n = 0.254396326318;
    msg.flags = 214U;

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
    msg.setTimeStamp(0.130137026138);
    msg.setSource(38280U);
    msg.setSourceEntity(193U);
    msg.setDestination(64689U);
    msg.setDestinationEntity(250U);
    msg.value = 0.175563939335;

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
    msg.setTimeStamp(0.655207902973);
    msg.setSource(40219U);
    msg.setSourceEntity(21U);
    msg.setDestination(45958U);
    msg.setDestinationEntity(168U);
    msg.value = 0.345722097394;

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
    msg.setTimeStamp(0.365126098115);
    msg.setSource(48055U);
    msg.setSourceEntity(163U);
    msg.setDestination(43902U);
    msg.setDestinationEntity(53U);
    msg.value = 0.908351095319;

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
    msg.setTimeStamp(0.437535249245);
    msg.setSource(30105U);
    msg.setSourceEntity(44U);
    msg.setDestination(5114U);
    msg.setDestinationEntity(89U);
    msg.u = 0.500828538997;
    msg.v = 0.771215061132;
    msg.w = 0.920578917828;
    msg.p = 0.734534798549;
    msg.q = 0.048167058341;
    msg.r = 0.71907125142;
    msg.flags = 174U;

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
    msg.setTimeStamp(0.704851119006);
    msg.setSource(51824U);
    msg.setSourceEntity(244U);
    msg.setDestination(24639U);
    msg.setDestinationEntity(142U);
    msg.u = 0.691168711264;
    msg.v = 0.304887146247;
    msg.w = 0.736615795561;
    msg.p = 0.656150675315;
    msg.q = 0.39691107032;
    msg.r = 0.380558688461;
    msg.flags = 173U;

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
    msg.setTimeStamp(0.351436768018);
    msg.setSource(2127U);
    msg.setSourceEntity(240U);
    msg.setDestination(52620U);
    msg.setDestinationEntity(146U);
    msg.u = 0.908488729927;
    msg.v = 0.356705491234;
    msg.w = 0.886914729885;
    msg.p = 0.633419553972;
    msg.q = 0.262127640247;
    msg.r = 0.672360858965;
    msg.flags = 119U;

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
    msg.setTimeStamp(0.75130690091);
    msg.setSource(17470U);
    msg.setSourceEntity(50U);
    msg.setDestination(49991U);
    msg.setDestinationEntity(170U);
    msg.path_ref = 4223850826U;
    msg.start_lat = 0.608990874637;
    msg.start_lon = 0.323368275197;
    msg.start_z = 0.618120379822;
    msg.start_z_units = 191U;
    msg.end_lat = 0.676006023672;
    msg.end_lon = 0.482278592166;
    msg.end_z = 0.00315356711888;
    msg.end_z_units = 38U;
    msg.lradius = 0.448038139681;
    msg.flags = 183U;
    msg.x = 0.73111852387;
    msg.y = 0.4444105817;
    msg.z = 0.25495423176;
    msg.vx = 0.430753479596;
    msg.vy = 0.732572531545;
    msg.vz = 0.863478746999;
    msg.course_error = 0.826799629116;
    msg.eta = 42273U;

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
    msg.setTimeStamp(0.816893768602);
    msg.setSource(13309U);
    msg.setSourceEntity(38U);
    msg.setDestination(10480U);
    msg.setDestinationEntity(25U);
    msg.path_ref = 1174345305U;
    msg.start_lat = 0.384283968515;
    msg.start_lon = 0.53764361866;
    msg.start_z = 0.324216040179;
    msg.start_z_units = 82U;
    msg.end_lat = 0.977753832127;
    msg.end_lon = 0.207830110559;
    msg.end_z = 0.950240712243;
    msg.end_z_units = 147U;
    msg.lradius = 0.453098838472;
    msg.flags = 18U;
    msg.x = 0.991718946039;
    msg.y = 0.0546640383026;
    msg.z = 0.258238163185;
    msg.vx = 0.182707130992;
    msg.vy = 0.909997078163;
    msg.vz = 0.566154262369;
    msg.course_error = 0.271941045456;
    msg.eta = 55883U;

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
    msg.setTimeStamp(0.155015389262);
    msg.setSource(58033U);
    msg.setSourceEntity(168U);
    msg.setDestination(62167U);
    msg.setDestinationEntity(146U);
    msg.path_ref = 647043320U;
    msg.start_lat = 0.0362855363889;
    msg.start_lon = 0.865122347463;
    msg.start_z = 0.256167059588;
    msg.start_z_units = 253U;
    msg.end_lat = 0.232197814016;
    msg.end_lon = 0.245785019859;
    msg.end_z = 0.685120746264;
    msg.end_z_units = 194U;
    msg.lradius = 0.0494693827078;
    msg.flags = 61U;
    msg.x = 0.783545324317;
    msg.y = 0.413327742988;
    msg.z = 0.966983574142;
    msg.vx = 0.347200469333;
    msg.vy = 0.0685451450786;
    msg.vz = 0.736017137848;
    msg.course_error = 0.609105564897;
    msg.eta = 54263U;

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
    msg.setTimeStamp(0.658531276606);
    msg.setSource(31650U);
    msg.setSourceEntity(106U);
    msg.setDestination(6912U);
    msg.setDestinationEntity(187U);
    msg.k = 0.175300836452;
    msg.m = 0.804096999329;
    msg.n = 0.212881206559;

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
    msg.setTimeStamp(0.481900933066);
    msg.setSource(47461U);
    msg.setSourceEntity(32U);
    msg.setDestination(14730U);
    msg.setDestinationEntity(157U);
    msg.k = 0.709896793152;
    msg.m = 0.579928638531;
    msg.n = 0.857565892378;

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
    msg.setTimeStamp(0.504963046241);
    msg.setSource(39826U);
    msg.setSourceEntity(251U);
    msg.setDestination(10568U);
    msg.setDestinationEntity(251U);
    msg.k = 0.0499720774674;
    msg.m = 0.890255314905;
    msg.n = 0.169674386136;

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
    msg.setTimeStamp(0.498924509028);
    msg.setSource(51437U);
    msg.setSourceEntity(12U);
    msg.setDestination(546U);
    msg.setDestinationEntity(38U);
    msg.p = 0.857739028689;
    msg.i = 0.190934416289;
    msg.d = 0.724955528673;
    msg.a = 0.993528899423;

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
    msg.setTimeStamp(0.270181879908);
    msg.setSource(62161U);
    msg.setSourceEntity(45U);
    msg.setDestination(6914U);
    msg.setDestinationEntity(32U);
    msg.p = 0.417548071338;
    msg.i = 0.914083204681;
    msg.d = 0.300654107207;
    msg.a = 0.0876981655236;

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
    msg.setTimeStamp(0.36515380173);
    msg.setSource(54097U);
    msg.setSourceEntity(93U);
    msg.setDestination(17825U);
    msg.setDestinationEntity(27U);
    msg.p = 0.730004455719;
    msg.i = 0.415950730161;
    msg.d = 0.655275069989;
    msg.a = 0.28099405078;

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
    msg.setTimeStamp(0.334741747896);
    msg.setSource(20823U);
    msg.setSourceEntity(198U);
    msg.setDestination(31453U);
    msg.setDestinationEntity(91U);
    msg.op = 110U;

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
    msg.setTimeStamp(0.26565847383);
    msg.setSource(17800U);
    msg.setSourceEntity(243U);
    msg.setDestination(16033U);
    msg.setDestinationEntity(202U);
    msg.op = 204U;

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
    msg.setTimeStamp(0.421747708351);
    msg.setSource(23600U);
    msg.setSourceEntity(74U);
    msg.setDestination(44577U);
    msg.setDestinationEntity(248U);
    msg.op = 207U;

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
    msg.setTimeStamp(0.578532337517);
    msg.setSource(48818U);
    msg.setSourceEntity(129U);
    msg.setDestination(61990U);
    msg.setDestinationEntity(21U);
    msg.x = 0.0511129491525;
    msg.y = 0.653943146957;
    msg.z = 0.579032545448;
    msg.vx = 0.145822150912;
    msg.vy = 0.541920439529;
    msg.vz = 0.220063223049;
    msg.ax = 0.658691466626;
    msg.ay = 0.210621059054;
    msg.az = 0.421958853692;
    msg.flags = 41009U;

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
    msg.setTimeStamp(0.22259584821);
    msg.setSource(36056U);
    msg.setSourceEntity(80U);
    msg.setDestination(43892U);
    msg.setDestinationEntity(145U);
    msg.x = 0.317725619882;
    msg.y = 0.067864063884;
    msg.z = 0.457131901884;
    msg.vx = 0.621410598587;
    msg.vy = 0.285829672794;
    msg.vz = 0.331213451193;
    msg.ax = 0.883551374624;
    msg.ay = 0.440608175328;
    msg.az = 0.607926294742;
    msg.flags = 2566U;

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
    msg.setTimeStamp(0.983376903122);
    msg.setSource(36825U);
    msg.setSourceEntity(66U);
    msg.setDestination(17419U);
    msg.setDestinationEntity(148U);
    msg.x = 0.202663573489;
    msg.y = 0.524437224448;
    msg.z = 0.301379216545;
    msg.vx = 0.229851188672;
    msg.vy = 0.877124888694;
    msg.vz = 0.038907908418;
    msg.ax = 0.679752474982;
    msg.ay = 0.0448765580641;
    msg.az = 0.999267259525;
    msg.flags = 16954U;

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
    msg.setTimeStamp(0.230592249553);
    msg.setSource(25629U);
    msg.setSourceEntity(1U);
    msg.setDestination(64186U);
    msg.setDestinationEntity(225U);
    msg.value = 0.441978656243;

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
    msg.setTimeStamp(0.486944928136);
    msg.setSource(48214U);
    msg.setSourceEntity(88U);
    msg.setDestination(38764U);
    msg.setDestinationEntity(244U);
    msg.value = 0.970654212187;

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
    msg.setTimeStamp(0.439408947523);
    msg.setSource(12384U);
    msg.setSourceEntity(64U);
    msg.setDestination(40344U);
    msg.setDestinationEntity(28U);
    msg.value = 0.878002184365;

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
    msg.setTimeStamp(0.934591639934);
    msg.setSource(9833U);
    msg.setSourceEntity(21U);
    msg.setDestination(61247U);
    msg.setDestinationEntity(155U);
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.path_ref = 150245404U;
    tmp_msg_0.start_lat = 0.770165894515;
    tmp_msg_0.start_lon = 0.963227894547;
    tmp_msg_0.start_z = 0.306302157951;
    tmp_msg_0.start_z_units = 24U;
    tmp_msg_0.end_lat = 0.673842816629;
    tmp_msg_0.end_lon = 0.872611103785;
    tmp_msg_0.end_z = 0.402538792616;
    tmp_msg_0.end_z_units = 251U;
    tmp_msg_0.speed = 0.950012009274;
    tmp_msg_0.speed_units = 70U;
    tmp_msg_0.lradius = 0.872149302874;
    tmp_msg_0.flags = 178U;
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
    msg.setTimeStamp(0.366637346489);
    msg.setSource(47845U);
    msg.setSourceEntity(212U);
    msg.setDestination(25878U);
    msg.setDestinationEntity(178U);
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.path_ref = 1665994595U;
    tmp_msg_0.start_lat = 0.373180812044;
    tmp_msg_0.start_lon = 0.238859360385;
    tmp_msg_0.start_z = 0.380445321799;
    tmp_msg_0.start_z_units = 4U;
    tmp_msg_0.end_lat = 0.753073337241;
    tmp_msg_0.end_lon = 0.139767837053;
    tmp_msg_0.end_z = 0.253253390799;
    tmp_msg_0.end_z_units = 188U;
    tmp_msg_0.speed = 0.822143958107;
    tmp_msg_0.speed_units = 94U;
    tmp_msg_0.lradius = 0.538429790333;
    tmp_msg_0.flags = 118U;
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
    msg.setTimeStamp(0.233855309122);
    msg.setSource(25909U);
    msg.setSourceEntity(55U);
    msg.setDestination(15001U);
    msg.setDestinationEntity(66U);
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.path_ref = 2960193357U;
    tmp_msg_0.start_lat = 0.566666176005;
    tmp_msg_0.start_lon = 0.24765361148;
    tmp_msg_0.start_z = 0.570407067172;
    tmp_msg_0.start_z_units = 72U;
    tmp_msg_0.end_lat = 0.569133442384;
    tmp_msg_0.end_lon = 0.0749597197727;
    tmp_msg_0.end_z = 0.472101458005;
    tmp_msg_0.end_z_units = 171U;
    tmp_msg_0.speed = 0.230797820465;
    tmp_msg_0.speed_units = 86U;
    tmp_msg_0.lradius = 0.0999769201187;
    tmp_msg_0.flags = 237U;
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
    msg.setTimeStamp(0.703836551411);
    msg.setSource(8531U);
    msg.setSourceEntity(129U);
    msg.setDestination(55881U);
    msg.setDestinationEntity(238U);
    msg.timeout = 32157U;
    msg.lat = 0.223961841121;
    msg.lon = 0.455363420477;
    msg.z = 0.169864340733;
    msg.z_units = 247U;
    msg.speed = 0.436167027017;
    msg.speed_units = 196U;
    msg.roll = 0.708009506219;
    msg.pitch = 0.897086055579;
    msg.yaw = 0.910179139465;
    msg.custom.assign("OMJEOBZZQZUAWCSYORRMLWXQKNETWHNIZYYSFNCLY");

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
    msg.setTimeStamp(0.270338150052);
    msg.setSource(34321U);
    msg.setSourceEntity(37U);
    msg.setDestination(8631U);
    msg.setDestinationEntity(48U);
    msg.timeout = 22584U;
    msg.lat = 0.631599936348;
    msg.lon = 0.0667672695626;
    msg.z = 0.144726179756;
    msg.z_units = 58U;
    msg.speed = 0.564775357898;
    msg.speed_units = 41U;
    msg.roll = 0.116852819197;
    msg.pitch = 0.440155765596;
    msg.yaw = 0.752611475488;
    msg.custom.assign("YRYUWAKWHFMQXXBNHKKIDRFVUMSCBWXYOOEQYWGPWZFJIGHXAEJKGTOCUXHGHANSCCOEOFIGJHWDWGBDJRHYVQDBSPVVKNGVZVTMZBTRMYQDNJEVNJRYXCPLWIYMGMBXLTMIHSFNZSRLCQAZJPTQNTLZLLLMLCMZLEFHOUBI");

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
    msg.setTimeStamp(0.805536862273);
    msg.setSource(15574U);
    msg.setSourceEntity(30U);
    msg.setDestination(28490U);
    msg.setDestinationEntity(225U);
    msg.timeout = 25295U;
    msg.lat = 0.337931964595;
    msg.lon = 0.663120827325;
    msg.z = 0.786479760074;
    msg.z_units = 117U;
    msg.speed = 0.999958936582;
    msg.speed_units = 24U;
    msg.roll = 0.191008836719;
    msg.pitch = 0.48329306351;
    msg.yaw = 0.475695834422;
    msg.custom.assign("NABDCLIVMNPKRNZULWGSOZERTFGSJLIXSWTIENYVVUAYHLDTKPNOUXMAFTNPFGMXPTHIKIWRBXWRJUZNBRGGOZISYIJFFVCWAVWKCFXFUOWAALASVHEDZIQCYDKGEHMQTJZLABUMBNGQJGHRKWKOZHAFGEEAOXOKQDBJCJPTEQBCDMNVNXDS");

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
    msg.setTimeStamp(0.482856771991);
    msg.setSource(45648U);
    msg.setSourceEntity(240U);
    msg.setDestination(43906U);
    msg.setDestinationEntity(156U);
    msg.timeout = 41862U;
    msg.lat = 0.177339698258;
    msg.lon = 0.82676694759;
    msg.z = 0.918829950886;
    msg.z_units = 91U;
    msg.speed = 0.77976813236;
    msg.speed_units = 71U;
    msg.duration = 58936U;
    msg.radius = 0.373046030764;
    msg.flags = 209U;
    msg.custom.assign("PITAIHQXJKCGJCUQNVUZCFOZZFTDBPQXYQHJYVVAQHSLVLMSGIOOGKIDAATZHIFEDQYJXWNJOOBBT");

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
    msg.setTimeStamp(0.528465688655);
    msg.setSource(21352U);
    msg.setSourceEntity(31U);
    msg.setDestination(57803U);
    msg.setDestinationEntity(77U);
    msg.timeout = 3165U;
    msg.lat = 0.115890592979;
    msg.lon = 0.161785843331;
    msg.z = 0.79459562928;
    msg.z_units = 245U;
    msg.speed = 0.584265628482;
    msg.speed_units = 224U;
    msg.duration = 39069U;
    msg.radius = 0.624071944146;
    msg.flags = 127U;
    msg.custom.assign("NFOXHQSHREHLBIJXTMZVZZKJRIBIOPDBUUETVKWPRWSBWMQHBWEJCTTSTDMYFSXSXYEQSIBNMZAHLSLHXLCDIVFRDKNGVHPPOKACPKGUNWGMEYJSCBFKEHREPWPTJIULJQHUJARZOGPMNKJTCYHOVCMYWVUSCYANMGFLDGBJXQZIMTXFWOVXVQPAUFTDCFYNLUCOXZZNORVFW");

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
    msg.setTimeStamp(0.266803720588);
    msg.setSource(16788U);
    msg.setSourceEntity(4U);
    msg.setDestination(48313U);
    msg.setDestinationEntity(79U);
    msg.timeout = 46479U;
    msg.lat = 0.703995913682;
    msg.lon = 0.946033655227;
    msg.z = 0.235707202306;
    msg.z_units = 78U;
    msg.speed = 0.295886579243;
    msg.speed_units = 223U;
    msg.duration = 2746U;
    msg.radius = 0.562326653357;
    msg.flags = 26U;
    msg.custom.assign("PWAKPQHORMIHUNLDATBTTPSMWYXVBPTZYNCPVFNEORCDTEVEJIQM");

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
    msg.setTimeStamp(0.126328854043);
    msg.setSource(29607U);
    msg.setSourceEntity(214U);
    msg.setDestination(22613U);
    msg.setDestinationEntity(29U);
    msg.custom.assign("IBXDPAEMJNFCYFSAZHFOQEQDVDEXDCZAWUSKZHKSDSPQUWUOJHGGEVJSVYPHFVOJSDQURLMPLTTLLJPQKWBYIFSBWBWKLCKIAMKGMJVZKNNNXQZYNRCFYHYEMNRMXBYEIIOQKDLFTOMXIRXIWQEPPTXLBPYGCOCNLTTWUWQJCHMSDMRVJSLUHGRXTRJHXGIDCYUPIFZECTAXUBZEMAORHNIBOVZBTOKNUVAZCGYEKFPAUAHOBFQRRWZ");

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
    msg.setTimeStamp(0.852240926018);
    msg.setSource(42996U);
    msg.setSourceEntity(220U);
    msg.setDestination(28201U);
    msg.setDestinationEntity(50U);
    msg.custom.assign("AAWZQNCDXJLTMIANHMCYNLQTVEXSHARKWWERKRLLKJQMBSDPNCPTQFQWKEEIPNWHMNRWHO");

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
    msg.setTimeStamp(0.998152963971);
    msg.setSource(21079U);
    msg.setSourceEntity(58U);
    msg.setDestination(25515U);
    msg.setDestinationEntity(162U);
    msg.custom.assign("IMCFOMCBPUUZHELJQMGVHSLAUZPVBEYLIJKNDYADNSOGNERPGMQURZWEQLLOCBJIJGQOVXDUOEWTXJAWXOLZQIWBZCUTTKFKPAYZNKLDDHHYONBTNAPSERMWVVXRFROISFSTRNFDXKROPQVSOCXVHJGHYAZLXNFZHWTRJBLZITFKMUAGIVQSXUFMEBWCKWJPFPQGICDU");

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
    msg.setTimeStamp(0.900515482824);
    msg.setSource(35962U);
    msg.setSourceEntity(10U);
    msg.setDestination(53251U);
    msg.setDestinationEntity(75U);
    msg.timeout = 17551U;
    msg.lat = 0.848628493033;
    msg.lon = 0.0266819488382;
    msg.z = 0.168354691413;
    msg.z_units = 45U;
    msg.duration = 53630U;
    msg.speed = 0.131340386721;
    msg.speed_units = 50U;
    msg.type = 219U;
    msg.radius = 0.105358678443;
    msg.length = 0.482617368456;
    msg.bearing = 0.160161271533;
    msg.direction = 185U;
    msg.custom.assign("BQIVQKAEPNYWNWHDBYIXEQMZETYAXJRUHRWVYLTXRESKMAPDUKNOIMDVTDMGZRXXZAGGNNZBOQPEAFTLUEZQIWVUKDDMFOGLKCQVDATVHUI");

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
    msg.setTimeStamp(0.0674090937835);
    msg.setSource(25167U);
    msg.setSourceEntity(246U);
    msg.setDestination(8410U);
    msg.setDestinationEntity(11U);
    msg.timeout = 54803U;
    msg.lat = 0.855500808129;
    msg.lon = 0.110946627764;
    msg.z = 0.273757011975;
    msg.z_units = 237U;
    msg.duration = 46288U;
    msg.speed = 0.00846054858735;
    msg.speed_units = 95U;
    msg.type = 209U;
    msg.radius = 0.605095543922;
    msg.length = 0.933855021513;
    msg.bearing = 0.779515102579;
    msg.direction = 129U;
    msg.custom.assign("NFTLRBDVMWTUPZIKTRQEFLKSXYHZWPGNFVOGOFKDGKPCRCYTAORJJOLBVOOAYPDSVRAXEXEWWMWRTXOHJQEZLRZXNFKTERUXIUUTOCIVQGNCQZUAXCNBTISQSCARDEPZEMXLJSUWMKBGVGUYMABMDFFOUCGSIPKBFNDIMTZYYNCFDJSLWXZSCTCGQLMGHRVIYXAODVABMGPPMJINHSBLUADJBJYWKJPEWIHHEJIBZHVKAYQL");

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
    msg.setTimeStamp(0.137779594202);
    msg.setSource(59917U);
    msg.setSourceEntity(37U);
    msg.setDestination(58387U);
    msg.setDestinationEntity(47U);
    msg.timeout = 42350U;
    msg.lat = 0.942000252593;
    msg.lon = 0.848851815985;
    msg.z = 0.302935261035;
    msg.z_units = 187U;
    msg.duration = 11487U;
    msg.speed = 0.286809483679;
    msg.speed_units = 146U;
    msg.type = 66U;
    msg.radius = 0.808288607023;
    msg.length = 0.649681876031;
    msg.bearing = 0.210502361597;
    msg.direction = 103U;
    msg.custom.assign("GIYJWYSQSVCRJTMZHMHMGNRBSEVXGRIVERPLPRYBHYNKOQSDZEZQEDTUMQLUODFZAVYNKXNDFSNUABRLGKUCEJJPXAUWRKTVWZFMOXXSTUAUBATAYAFLIPHXLZYNXIJEUJTFEOGXDRCQAQPACXPSMDTUNFWQVMMKWWDWFGTFIFPJHOOBRHCZCH");

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
    msg.setTimeStamp(0.938028102148);
    msg.setSource(4211U);
    msg.setSourceEntity(240U);
    msg.setDestination(38504U);
    msg.setDestinationEntity(8U);
    msg.duration = 49040U;
    msg.custom.assign("KJBARNADMXKSRGMCSDLHQLHOXCMJLKTVNGEKXXGYRFIPRNFIMQLQATKEUDOPUTDEWAFXHAKZBUZBCJAQGBVNBRXJCWSVDFCVJKYJFUIXUBZVVKGTZRJWTZAWAQEIHHVHPCSNMFDIYOSTGUMVFYSOIN");

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
    msg.setTimeStamp(0.334396508116);
    msg.setSource(55914U);
    msg.setSourceEntity(253U);
    msg.setDestination(63588U);
    msg.setDestinationEntity(190U);
    msg.duration = 57137U;
    msg.custom.assign("PXZAYTXJBHNIQXZXHSFTWOCOZBLCZUTJEUQRYEBANAKMDJKHGENIARBORURLJTMMMZWFFNKBZMEWHASKPMSFNDDYWTQGZXXIGAOMMBFYVLETVUPGYZECXBXVSDNBYLYSVDVTAYWKIIPHEXGCPQPHDROFUVGFPRWUCTZELWYKETFGJNI");

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
    msg.setTimeStamp(0.578022869208);
    msg.setSource(17012U);
    msg.setSourceEntity(186U);
    msg.setDestination(198U);
    msg.setDestinationEntity(83U);
    msg.duration = 44265U;
    msg.custom.assign("WOMKVHOXLBGJ");

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
    msg.setTimeStamp(0.420134870127);
    msg.setSource(44581U);
    msg.setSourceEntity(210U);
    msg.setDestination(51675U);
    msg.setDestinationEntity(121U);
    IMC::DesiredZ tmp_msg_0;
    tmp_msg_0.value = 0.410633091244;
    tmp_msg_0.z_units = 60U;
    msg.control.set(tmp_msg_0);
    msg.duration = 32493U;
    msg.custom.assign("SNWFIPEXRETIXGZCEZCBLAS");

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
    msg.setTimeStamp(0.351075019941);
    msg.setSource(49310U);
    msg.setSourceEntity(73U);
    msg.setDestination(29619U);
    msg.setDestinationEntity(68U);
    IMC::DesiredHeading tmp_msg_0;
    tmp_msg_0.value = 0.807008435908;
    tmp_msg_0.off = 0.799608829146;
    msg.control.set(tmp_msg_0);
    msg.duration = 50154U;
    msg.custom.assign("JJSPXALBPMOIGFUPUTJILHSXTZXUHVQKJVGLCGMNGSQRDIVAOYAKKNYNPTZUVLBSPZYXYCUABWAZUHVTINPYELRTSPRAUFNFYTRIAQHKZMOFCJMMAQDJFASFHQIKTLC");

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
    msg.setTimeStamp(0.104225588883);
    msg.setSource(24779U);
    msg.setSourceEntity(192U);
    msg.setDestination(16998U);
    msg.setDestinationEntity(169U);
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.path_ref = 153842847U;
    tmp_msg_0.start_lat = 0.737460837317;
    tmp_msg_0.start_lon = 0.139782482162;
    tmp_msg_0.start_z = 0.437795588002;
    tmp_msg_0.start_z_units = 69U;
    tmp_msg_0.end_lat = 0.650124852293;
    tmp_msg_0.end_lon = 0.367514652339;
    tmp_msg_0.end_z = 0.728134435749;
    tmp_msg_0.end_z_units = 231U;
    tmp_msg_0.speed = 0.78066721937;
    tmp_msg_0.speed_units = 101U;
    tmp_msg_0.lradius = 0.802304806412;
    tmp_msg_0.flags = 51U;
    msg.control.set(tmp_msg_0);
    msg.duration = 20551U;
    msg.custom.assign("LZGRREQCXDHFPNAXLIRJNFAFJJIJUWHGVIIYPVZDLULDUTKZFGQRATQO");

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
    msg.setTimeStamp(0.124460508541);
    msg.setSource(4947U);
    msg.setSourceEntity(86U);
    msg.setDestination(33812U);
    msg.setDestinationEntity(212U);
    msg.timeout = 10046U;
    msg.lat = 0.120267802176;
    msg.lon = 0.906877090244;
    msg.z = 0.945541769304;
    msg.z_units = 142U;
    msg.speed = 0.0508822060845;
    msg.speed_units = 78U;
    msg.bearing = 0.969087634297;
    msg.cross_angle = 0.184531384597;
    msg.width = 0.638881754535;
    msg.length = 0.54087381887;
    msg.hstep = 0.226349935397;
    msg.coff = 203U;
    msg.alternation = 242U;
    msg.flags = 144U;
    msg.custom.assign("SQHVGZATMTTXETDOJEDMXJEKVDTAWPEMRFFAPOWNCBUNUVFJAGISRJRMMSYPTLQOCYIMAGUWUFEYVKHBWZQSLXTYCKFGARKDSOVSZBYNBBTIU");

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
    msg.setTimeStamp(0.60907662812);
    msg.setSource(21345U);
    msg.setSourceEntity(157U);
    msg.setDestination(20053U);
    msg.setDestinationEntity(4U);
    msg.timeout = 40078U;
    msg.lat = 0.578913155751;
    msg.lon = 0.856343977158;
    msg.z = 0.758190988401;
    msg.z_units = 76U;
    msg.speed = 0.294973782553;
    msg.speed_units = 42U;
    msg.bearing = 0.260812009484;
    msg.cross_angle = 0.60290865763;
    msg.width = 0.370334222225;
    msg.length = 0.592068795662;
    msg.hstep = 0.791535893101;
    msg.coff = 231U;
    msg.alternation = 214U;
    msg.flags = 184U;
    msg.custom.assign("PMHOBJIOIYYZUYSURNDFNDKLHFMNTXBBWIABQTXHDEGYENIVQFVEOKOVZHQRAEZNLLSKRWQITAFYXLUHXGVGRZMDCPYPMMUKCQDHSHPETTQOQRHXKOLEMVCKFJATGNSWLZVQDSVEEYVJIQANNDBRWARTZEYPASOVCIADCWDUFCBPXIHKOUIGEXJULRRWGWNZJJJVPSXLXGZG");

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
    msg.setTimeStamp(0.187542088809);
    msg.setSource(15011U);
    msg.setSourceEntity(26U);
    msg.setDestination(50137U);
    msg.setDestinationEntity(154U);
    msg.timeout = 17772U;
    msg.lat = 0.713640395567;
    msg.lon = 0.241274835737;
    msg.z = 0.923855018579;
    msg.z_units = 10U;
    msg.speed = 0.309992787141;
    msg.speed_units = 167U;
    msg.bearing = 0.325918629357;
    msg.cross_angle = 0.447380920672;
    msg.width = 0.0283253236815;
    msg.length = 0.793342281523;
    msg.hstep = 0.833281940708;
    msg.coff = 243U;
    msg.alternation = 31U;
    msg.flags = 48U;
    msg.custom.assign("HDFATXSRFFBQOIBVHYSQPOYPKQNILNMWXFDDTVYXUJOZICYKCLOKHJGMDPBZVMOUOEDZFWPWYDAREAEWCFRSSKHEHWXMCAGUWENCDQJZWIBALQTXPQCXIUKSEPJBVJNWGXYOTGNJFNKCJLPZMVQKBWOSJOSCNUABMUFMDHHIRTPJUVGLHTREOZKAERNMINXXLKGGRIHSRVLFXCYDQBUBMDZJVTGAYQTUWFUZGSGRSTVLIRBEQVTCNKA");

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
    msg.setTimeStamp(0.418095291057);
    msg.setSource(37859U);
    msg.setSourceEntity(253U);
    msg.setDestination(20686U);
    msg.setDestinationEntity(126U);
    msg.timeout = 35533U;
    msg.lat = 0.814708078589;
    msg.lon = 0.400251914777;
    msg.z = 0.678669965053;
    msg.z_units = 118U;
    msg.speed = 0.247319174495;
    msg.speed_units = 41U;
    msg.custom.assign("YYWLERGBIRYYEZWMWWQAQYPGMBAVCKBILZPGVEMTNJTDRFHTKVZIGDKAFXYNRHTNSAHCCQEUTFQRHAFUMUIOZUSFSGNQLRNGLGHXHBVOLCMDZOOSKKLIUXVGDCPEVXPWQVNJKSEYJDSBJVZFAEBLQALHOTCSAUDXGPWBRJSORX");

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
    msg.setTimeStamp(0.402457695652);
    msg.setSource(30054U);
    msg.setSourceEntity(57U);
    msg.setDestination(23730U);
    msg.setDestinationEntity(249U);
    msg.timeout = 44945U;
    msg.lat = 0.946802182324;
    msg.lon = 0.151867307817;
    msg.z = 0.0792132572638;
    msg.z_units = 216U;
    msg.speed = 0.9278250846;
    msg.speed_units = 24U;
    msg.custom.assign("QBGDUTHSUBXEJAXBGOGHHWPOPDCKWLVZTNFQWSSKZQEBDGBHCHVVTMZVGXWLNJEYUYGHRJUFOTKFRIBCXNGCFXGJFEQJZQQKMEIWLTSRLRESORCCKIEDZITKEXJTAILTMPMTD");

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
    msg.setTimeStamp(0.48417666593);
    msg.setSource(15019U);
    msg.setSourceEntity(90U);
    msg.setDestination(45473U);
    msg.setDestinationEntity(26U);
    msg.timeout = 509U;
    msg.lat = 0.585539708859;
    msg.lon = 0.911697008698;
    msg.z = 0.0897461369741;
    msg.z_units = 63U;
    msg.speed = 0.156112846775;
    msg.speed_units = 117U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.48624700659;
    tmp_msg_0.y = 0.117465647641;
    tmp_msg_0.z = 0.265450107122;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("VNYRMDFTNULRTPHEKGBSADRCCIKBMHGOGSXDYPDSXIUOUZUPDPGVXJHVITERQGTDIOFDMCUSJNIHELUTNMLHHZBVFTBFJKHOHWJWCZTSTLFCHXCBLGYZYEDKJZNVLXWFEDECXFNRAQLAPQLOBMYWUXQOVFDWUJNTJPJFCEZEKSSSZYGYPIBNBKEKBMOIQXOJNWPAHKJAMQNGIVRISAZYWIQMRYWSYAGRVGZAWRORAQMFXVKPAOVUEUBWLMKXQ");

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
    msg.setTimeStamp(0.146696437674);
    msg.setSource(11161U);
    msg.setSourceEntity(56U);
    msg.setDestination(8728U);
    msg.setDestinationEntity(151U);
    msg.x = 0.98467779216;
    msg.y = 0.394897957673;
    msg.z = 0.357498474431;

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
    msg.setTimeStamp(0.852725900274);
    msg.setSource(54853U);
    msg.setSourceEntity(225U);
    msg.setDestination(13859U);
    msg.setDestinationEntity(5U);
    msg.x = 0.11553868876;
    msg.y = 2.16258093472e-05;
    msg.z = 0.952122674088;

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
    msg.setTimeStamp(0.140307724158);
    msg.setSource(40184U);
    msg.setSourceEntity(106U);
    msg.setDestination(18802U);
    msg.setDestinationEntity(79U);
    msg.x = 0.534607044276;
    msg.y = 0.837724684819;
    msg.z = 0.927708710864;

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
    msg.setTimeStamp(0.740913619262);
    msg.setSource(45247U);
    msg.setSourceEntity(33U);
    msg.setDestination(13564U);
    msg.setDestinationEntity(124U);
    msg.timeout = 24361U;
    msg.lat = 0.378101297727;
    msg.lon = 0.127920680274;
    msg.z = 0.271185173309;
    msg.z_units = 67U;
    msg.amplitude = 0.610923023093;
    msg.pitch = 0.915769103132;
    msg.speed = 0.926423592057;
    msg.speed_units = 189U;
    msg.custom.assign("TDFTNVMFNRHBAEWKLRCLOQPQHFUCBEEHU");

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
    msg.setTimeStamp(0.514012539195);
    msg.setSource(26213U);
    msg.setSourceEntity(128U);
    msg.setDestination(37665U);
    msg.setDestinationEntity(234U);
    msg.timeout = 2619U;
    msg.lat = 0.747393174938;
    msg.lon = 0.678005896963;
    msg.z = 0.266436759658;
    msg.z_units = 173U;
    msg.amplitude = 0.932578031383;
    msg.pitch = 0.854852142543;
    msg.speed = 0.859781397391;
    msg.speed_units = 57U;
    msg.custom.assign("DCDRKSMXJUJOGINHQCYHEPHCWGSAUWAKTI");

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
    msg.setTimeStamp(0.61248533419);
    msg.setSource(53657U);
    msg.setSourceEntity(253U);
    msg.setDestination(63082U);
    msg.setDestinationEntity(129U);
    msg.timeout = 24263U;
    msg.lat = 0.968293816494;
    msg.lon = 0.489149525983;
    msg.z = 0.531332399492;
    msg.z_units = 81U;
    msg.amplitude = 0.0144990024201;
    msg.pitch = 0.874212211448;
    msg.speed = 0.108445830057;
    msg.speed_units = 57U;
    msg.custom.assign("VIXJCNDFBRTBSZVYHLARGRFKUTIMVFMOCZASHUWRUFUZDVAJKOJCTNOGSKLWDKPHYWNCELYWBSAOVUZSPLVYCYPEVWNAWOEELMIMBALRMEWRZQCIKRSGHZNJRIQQLLXTYLGTNUAGQHGQNIZJKDIFEFHRSVNJDPNFKTPAOUWYFDCJZTYEPYHAVNGCDXFIMXZWGCDWB");

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
    msg.setTimeStamp(0.497230917052);
    msg.setSource(1549U);
    msg.setSourceEntity(125U);
    msg.setDestination(14338U);
    msg.setDestinationEntity(77U);

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
    msg.setTimeStamp(0.910242587935);
    msg.setSource(49282U);
    msg.setSourceEntity(41U);
    msg.setDestination(60630U);
    msg.setDestinationEntity(28U);

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
    msg.setTimeStamp(0.514296664309);
    msg.setSource(33744U);
    msg.setSourceEntity(179U);
    msg.setDestination(62893U);
    msg.setDestinationEntity(93U);

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
    msg.setTimeStamp(0.598293836184);
    msg.setSource(14847U);
    msg.setSourceEntity(175U);
    msg.setDestination(12068U);
    msg.setDestinationEntity(91U);
    msg.lat = 0.359669291753;
    msg.lon = 0.965826809218;
    msg.z = 0.183821804694;
    msg.z_units = 84U;
    msg.radius = 0.326085596276;
    msg.duration = 42354U;
    msg.speed = 0.266113881001;
    msg.speed_units = 19U;
    msg.popup_period = 64969U;
    msg.popup_duration = 24506U;
    msg.flags = 86U;
    msg.custom.assign("JKJLPCXSDAZFCEVSQM");

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
    msg.setTimeStamp(0.78562013657);
    msg.setSource(26225U);
    msg.setSourceEntity(60U);
    msg.setDestination(4726U);
    msg.setDestinationEntity(85U);
    msg.lat = 0.243884189512;
    msg.lon = 0.841324230191;
    msg.z = 0.977642863742;
    msg.z_units = 229U;
    msg.radius = 0.0836394949242;
    msg.duration = 37087U;
    msg.speed = 0.757450381429;
    msg.speed_units = 226U;
    msg.popup_period = 36708U;
    msg.popup_duration = 21584U;
    msg.flags = 75U;
    msg.custom.assign("WGTINDCMHWGBZKGBOQEINVVROMLBQVHZAZCWGAUFFFBKBKUSOSZNRBHVEFJBQECVVNNJSAHYXDGTTNUSOIYXLQLTNQBMDCDCFXYJAC");

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
    msg.setTimeStamp(0.135299379989);
    msg.setSource(48782U);
    msg.setSourceEntity(254U);
    msg.setDestination(49625U);
    msg.setDestinationEntity(153U);
    msg.lat = 0.750207247432;
    msg.lon = 0.699709423258;
    msg.z = 0.370538314608;
    msg.z_units = 147U;
    msg.radius = 0.0685477689388;
    msg.duration = 51830U;
    msg.speed = 0.85613826433;
    msg.speed_units = 190U;
    msg.popup_period = 12389U;
    msg.popup_duration = 42625U;
    msg.flags = 226U;
    msg.custom.assign("PKVNBGEXCYHQZRMINRJZAIEUEKDKLLOIFXUPFMVCXEBCNSRSYNEORGVTJZDIFIFMJESPEXWLULBBBCAYGORPYREOKDJOKFDHMMCAWCWNJWZYSUDMZAAQXZKHGAIRUWXQHOUVPIAUPBQGESUFOZXHYNPLGHTVULPSYBXDNXUALGO");

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
    msg.setTimeStamp(0.150289049646);
    msg.setSource(31734U);
    msg.setSourceEntity(229U);
    msg.setDestination(50098U);
    msg.setDestinationEntity(126U);
    msg.timeout = 51587U;
    msg.flags = 26U;
    msg.lat = 0.476001177179;
    msg.lon = 0.768329401967;
    msg.start_z = 0.0951197214618;
    msg.start_z_units = 158U;
    msg.end_z = 0.306162769757;
    msg.end_z_units = 11U;
    msg.radius = 0.37464992511;
    msg.speed = 0.396514331759;
    msg.speed_units = 238U;
    msg.custom.assign("VINZYWBTCEDJAJYKNRPQMXUISBLUYIDJDYVXHTSDXOMOILZOJPQLETWYKJJMIRTPZWNOEYQCSNRASLRCUJIFBKRHMUFPGXTXKYDJNAMRPIFGMZZYKGE");

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
    msg.setTimeStamp(0.127560043938);
    msg.setSource(5895U);
    msg.setSourceEntity(163U);
    msg.setDestination(58097U);
    msg.setDestinationEntity(5U);
    msg.timeout = 16421U;
    msg.flags = 136U;
    msg.lat = 0.854022007959;
    msg.lon = 0.385171921849;
    msg.start_z = 0.190090630206;
    msg.start_z_units = 43U;
    msg.end_z = 0.417998352368;
    msg.end_z_units = 19U;
    msg.radius = 0.912175706883;
    msg.speed = 0.204837753565;
    msg.speed_units = 90U;
    msg.custom.assign("GNNQJQFAEXMWWWNXFCEMEZTVBMF");

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
    msg.setTimeStamp(0.0338750139526);
    msg.setSource(22608U);
    msg.setSourceEntity(6U);
    msg.setDestination(43651U);
    msg.setDestinationEntity(163U);
    msg.timeout = 42250U;
    msg.flags = 233U;
    msg.lat = 0.342838660864;
    msg.lon = 0.376179124594;
    msg.start_z = 0.369964971205;
    msg.start_z_units = 224U;
    msg.end_z = 0.364777628288;
    msg.end_z_units = 101U;
    msg.radius = 0.673436544854;
    msg.speed = 0.379788891681;
    msg.speed_units = 232U;
    msg.custom.assign("DGEDVVRCAEPCSVQNNYJCQBOFYURPNWUKVVZZIPFXDBSNSMALBLOBSDWRYHEUXUMCSLPPBKFOIJQWLOJFRSCFUINUJMLYTTGXKEZNJWUHYBAWNGSCGLORXFSVENMRKUUPJOXXLOVIQ");

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
    msg.setTimeStamp(0.508779718417);
    msg.setSource(18398U);
    msg.setSourceEntity(153U);
    msg.setDestination(61482U);
    msg.setDestinationEntity(35U);
    msg.timeout = 65310U;
    msg.lat = 0.431906357152;
    msg.lon = 0.232619407259;
    msg.z = 0.515061015585;
    msg.z_units = 181U;
    msg.speed = 0.754047356498;
    msg.speed_units = 177U;
    msg.custom.assign("WQDYHLGFTGVBAVCURITHDWSMMQPOPXYCQVBDOTSTAHLXEQFSHZSGRYZIZUYHQDSOERJIKRHKSBBRPOUAKLNBYOTNHNNHOFGIPWKFYIGAPKMNUZWNLYMEGTPTUDLJFEOMVJXJLAZEBSURW");

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
    msg.setTimeStamp(0.973021698983);
    msg.setSource(10833U);
    msg.setSourceEntity(76U);
    msg.setDestination(51111U);
    msg.setDestinationEntity(62U);
    msg.timeout = 51023U;
    msg.lat = 0.132732401022;
    msg.lon = 0.44581766027;
    msg.z = 0.299411692439;
    msg.z_units = 39U;
    msg.speed = 0.806241881982;
    msg.speed_units = 228U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.580770464206;
    tmp_msg_0.y = 0.953766507222;
    tmp_msg_0.z = 0.993048072877;
    tmp_msg_0.t = 0.307961519246;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("LTMOPWHUCDDJPVWDSNYLZIKQKHIIYDLKOZMVAFUSEBNTHGFWAWUNPJFLOXXJHABHBZUYMCXXTQEYRGOESZQEHAEHRFT");

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
    msg.setTimeStamp(0.664610233536);
    msg.setSource(24101U);
    msg.setSourceEntity(247U);
    msg.setDestination(64058U);
    msg.setDestinationEntity(19U);
    msg.timeout = 10168U;
    msg.lat = 0.312873754987;
    msg.lon = 0.923631793653;
    msg.z = 0.7387827478;
    msg.z_units = 28U;
    msg.speed = 0.511977655;
    msg.speed_units = 126U;
    msg.custom.assign("FKNKXUPNQEZHGYPBUSOIQGALNQNGUTWOYGOWBULAXACGNTAPKWDXYXEHNSIQXPYHEVZIIRSJIDHBHSKCVERSFRCLLTLHGSUDHGPFPVVFETJAFRQOMCXKVJKMBDCEBIZJLDBXUIWVRLZMCOVLTTGZKDPHJAAFWZFUEZDMMQWWDJZIMBSYBVSLOENQRQDEYPGYIFNJYTMJZDHEJSLTNVTUBXVUOAGPUYFMKRIKAOTBRRSXCWOFZXMCCPQRJKWWO");

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
    msg.setTimeStamp(0.599682312449);
    msg.setSource(16174U);
    msg.setSourceEntity(36U);
    msg.setDestination(58785U);
    msg.setDestinationEntity(64U);
    msg.x = 0.00995199898068;
    msg.y = 0.703277928929;
    msg.z = 0.409907612788;
    msg.t = 0.624989246156;

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
    msg.setTimeStamp(0.699482920498);
    msg.setSource(58640U);
    msg.setSourceEntity(207U);
    msg.setDestination(18900U);
    msg.setDestinationEntity(94U);
    msg.x = 0.739020980205;
    msg.y = 0.0215583897177;
    msg.z = 0.747895333818;
    msg.t = 0.813927339268;

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
    msg.setTimeStamp(0.940440848286);
    msg.setSource(35786U);
    msg.setSourceEntity(58U);
    msg.setDestination(46885U);
    msg.setDestinationEntity(187U);
    msg.x = 0.601711756277;
    msg.y = 0.885917994533;
    msg.z = 0.139751783674;
    msg.t = 0.503525222672;

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
    msg.setTimeStamp(0.550322110541);
    msg.setSource(45258U);
    msg.setSourceEntity(105U);
    msg.setDestination(61332U);
    msg.setDestinationEntity(178U);
    msg.timeout = 47771U;
    msg.name.assign("IWVACYSUZSVHEAQFMWLDXYOPAZHDMJFOCINJELQCLOYEC");
    msg.custom.assign("JTXFDVXXAKOUXIHVUEJXEOMQVRWYEVLTYEHZHPJ");

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
    msg.setTimeStamp(0.327565907465);
    msg.setSource(15987U);
    msg.setSourceEntity(207U);
    msg.setDestination(20042U);
    msg.setDestinationEntity(162U);
    msg.timeout = 58683U;
    msg.name.assign("AKRPMUTPPZMIGYZAZPQVDNMREESHPKRNOHZTAMKVZUMJTXSDXVMZBVCOGAECNTJAWCEBGWSSJHNYHRYJIXBZPUJCEHUDBRIFKQSDGMTPVLSRFWCJIIHWCQCBDDQTGLKOHFTWYEJWBODYOBTSHEVKQYYGULMOFSRNXCINFGMVXUGEXO");
    msg.custom.assign("YQXRBRZJTBBXWCSIMHWDZMMLSLTDLIRCRDDQQYOUHEENIBLJSCBFZLDIVEGZWFCKYNPKWKGPNRJKHLGOGDZYTJULWTQSIMOPUUJYAHVFNUQCYMDWIULFMKWVPDJBAAVUVYSPQXRLHFGZCSONRXBZCTVPQKNBEMAWPJOXMMSXZWGKTGEOXSIYFOIHQANNXUAHJYLRBZOQUVCGOGKERAOJGHRKCPVUJSTK");

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
    msg.setTimeStamp(0.311761706772);
    msg.setSource(5250U);
    msg.setSourceEntity(76U);
    msg.setDestination(32212U);
    msg.setDestinationEntity(204U);
    msg.timeout = 7491U;
    msg.name.assign("NHPMTHVXWNALJBXZFACNIPOVOQNRVCQUPIBIYUFFVAABELASZLBPTIVTZEMYQCMOBUMGDBFTWAQKNITLLGHRDGFNDWOCHRDLUARQPQFXRCMGZDICBPQPGYYVXOJHSFXRGVWZQCVYJKOYEJVZGSLDHMKIESAKCIKFUTKNPEORJZXTDLMWWNJTKAGOEFDNZLUWKXWEWMCLQNDBYR");
    msg.custom.assign("CHTZZDZOFRMKIMUF");

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
    msg.setTimeStamp(0.706701600183);
    msg.setSource(56993U);
    msg.setSourceEntity(168U);
    msg.setDestination(40351U);
    msg.setDestinationEntity(159U);
    msg.lat = 0.721136549389;
    msg.lon = 0.462741642651;
    msg.z = 0.237952634986;
    msg.z_units = 125U;
    msg.speed = 0.68409802276;
    msg.speed_units = 34U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 55452U;
    tmp_msg_0.off_x = 0.147362797551;
    tmp_msg_0.off_y = 0.31211085876;
    tmp_msg_0.off_z = 0.826647396909;
    msg.participants.push_back(tmp_msg_0);
    msg.start_time = 0.399228200069;
    msg.custom.assign("VEBMTQYGZOFQVWPDICOUXDUFHUPZDYQGFKMSJYFXVVOSEAMBMUREDTKSFLCOJXFIEPIBZKMLXSOAKWBBXTRVHLOZRBJGKPRQTKDRQOMAGCEKYXWPVFVDACTHITZWJQMHZVTGCNJLSTAMAZITBSUUSNDIIZXEXCNRERGLQMDQRYUKAOFNKZYFYSYFNPHXOYGJWPZSRHJGCXHMILCAWAQCRUYBQ");

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
    msg.setTimeStamp(0.249435797034);
    msg.setSource(21258U);
    msg.setSourceEntity(24U);
    msg.setDestination(50942U);
    msg.setDestinationEntity(186U);
    msg.lat = 0.892301667279;
    msg.lon = 0.38277518705;
    msg.z = 0.345188737018;
    msg.z_units = 199U;
    msg.speed = 0.125391710832;
    msg.speed_units = 119U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.531810159493;
    tmp_msg_0.y = 0.34383510753;
    tmp_msg_0.z = 0.659648914422;
    tmp_msg_0.t = 0.266274923372;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.75854486919;
    msg.custom.assign("JVEDKXZNSOSFEPXONKAGWAUOTDCPLRZQAIYAOIXEPTVYBDSTAYHYRVBSXCJEBTYMQTSIBNTIYQEPGHPIGMHFUCAJJCVAJBSUPVOUEYCKWRNPHWHXNKZTHAFWZDMKXKMUZERRNLQZDJLXXJMOUDFHWVJICIDTWLFCESJMQZCIRWLGGNPUEHFAPIX");

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
    msg.setTimeStamp(0.99582042186);
    msg.setSource(48937U);
    msg.setSourceEntity(46U);
    msg.setDestination(18118U);
    msg.setDestinationEntity(23U);
    msg.lat = 0.284643572865;
    msg.lon = 0.15494433994;
    msg.z = 0.626308473004;
    msg.z_units = 52U;
    msg.speed = 0.253723171666;
    msg.speed_units = 51U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 32003U;
    tmp_msg_0.off_x = 0.0289702746901;
    tmp_msg_0.off_y = 0.727264536314;
    tmp_msg_0.off_z = 0.366717061277;
    msg.participants.push_back(tmp_msg_0);
    msg.start_time = 0.965512746597;
    msg.custom.assign("IQWSZKUCITARTYTPHYJELTQAUIZIGSKRFKMQAVYBHDZRRLELKJGKAAVRVNJQWPASOPEHXKIBBCYWMUHRDOSZIZXFJVQEXICYTUYNGQKQVYWNFLALABGHEDDM");

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
    msg.setTimeStamp(0.431572913646);
    msg.setSource(31454U);
    msg.setSourceEntity(227U);
    msg.setDestination(52095U);
    msg.setDestinationEntity(198U);
    msg.vid = 9423U;
    msg.off_x = 0.409017305208;
    msg.off_y = 0.737573797335;
    msg.off_z = 0.402829505842;

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
    msg.setTimeStamp(0.942418709627);
    msg.setSource(41498U);
    msg.setSourceEntity(170U);
    msg.setDestination(9385U);
    msg.setDestinationEntity(51U);
    msg.vid = 22091U;
    msg.off_x = 0.012342790538;
    msg.off_y = 0.964793901893;
    msg.off_z = 0.412124720696;

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
    msg.setTimeStamp(0.955157612463);
    msg.setSource(14451U);
    msg.setSourceEntity(68U);
    msg.setDestination(51474U);
    msg.setDestinationEntity(57U);
    msg.vid = 58298U;
    msg.off_x = 0.00711957687213;
    msg.off_y = 0.556583568102;
    msg.off_z = 0.220206463261;

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
    msg.setTimeStamp(0.0632516029766);
    msg.setSource(56757U);
    msg.setSourceEntity(121U);
    msg.setDestination(23418U);
    msg.setDestinationEntity(32U);

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
    msg.setTimeStamp(0.905912705629);
    msg.setSource(12392U);
    msg.setSourceEntity(10U);
    msg.setDestination(49495U);
    msg.setDestinationEntity(163U);

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
    msg.setTimeStamp(0.02275633461);
    msg.setSource(33832U);
    msg.setSourceEntity(44U);
    msg.setDestination(28490U);
    msg.setDestinationEntity(98U);

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
    msg.setTimeStamp(0.295218880866);
    msg.setSource(17263U);
    msg.setSourceEntity(161U);
    msg.setDestination(30839U);
    msg.setDestinationEntity(19U);
    msg.mid = 65357U;

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
    msg.setTimeStamp(0.717997593753);
    msg.setSource(24973U);
    msg.setSourceEntity(201U);
    msg.setDestination(16565U);
    msg.setDestinationEntity(186U);
    msg.mid = 54429U;

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
    msg.setTimeStamp(0.550569516851);
    msg.setSource(38051U);
    msg.setSourceEntity(207U);
    msg.setDestination(64774U);
    msg.setDestinationEntity(68U);
    msg.mid = 54925U;

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
    msg.setTimeStamp(0.534886147102);
    msg.setSource(64737U);
    msg.setSourceEntity(212U);
    msg.setDestination(45000U);
    msg.setDestinationEntity(54U);
    msg.state = 77U;
    msg.eta = 3048U;
    msg.info.assign("WVVFJLXHVTFFWBFWLQZMFRZWELDBUJXKQUSLLTYWYTHZJREJXOTKFAOAZFGWCGMUYYVYDHDPXWQKZORHBLSTKSGSQUWABXOYJDGNRKJEGKZNCYSRPVPSVBSEHVKDCKWYGQEFBAUPSUHHNMCKZYDGLLGIJWMTIEEUVZCRHMIDCPVCENPXOJUDPITIF");

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
    msg.setTimeStamp(0.997393818755);
    msg.setSource(49993U);
    msg.setSourceEntity(20U);
    msg.setDestination(23047U);
    msg.setDestinationEntity(103U);
    msg.state = 20U;
    msg.eta = 5844U;
    msg.info.assign("UAETNUVSVDDUPUDVMEWSSRLITOTRULBJSGBYLIKKGEKOBRIJHZRBTBNMHZFCOQQOBIGCVXVJCPAXNHPKONOMZYNCEIDIACJTWNWYEJJGNSLFCMWDSLLUQHKABYNYTFEESYQGQHUTWFFWMGRUMQDCZUOBQERLTJFXXPYXGAPRSVFXWRMVKFZCFPJEZKHHOCVAKBXLBIDQQRGYEOHHSPQPLKJZYJNADTMIWAZKVWLZGXZXOFYS");

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
    msg.setTimeStamp(0.376685593575);
    msg.setSource(20724U);
    msg.setSourceEntity(209U);
    msg.setDestination(24868U);
    msg.setDestinationEntity(59U);
    msg.state = 217U;
    msg.eta = 20633U;
    msg.info.assign("XCBFGCVEWENP");

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
    msg.setTimeStamp(0.0592902734454);
    msg.setSource(44954U);
    msg.setSourceEntity(68U);
    msg.setDestination(46449U);
    msg.setDestinationEntity(231U);
    msg.system = 9872U;
    msg.duration = 5389U;
    msg.speed = 0.910682737272;
    msg.speed_units = 95U;
    msg.x = 0.473622001874;
    msg.y = 0.790161136029;
    msg.z = 0.965658524725;
    msg.z_units = 41U;

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
    msg.setTimeStamp(0.432623644935);
    msg.setSource(3262U);
    msg.setSourceEntity(40U);
    msg.setDestination(8141U);
    msg.setDestinationEntity(5U);
    msg.system = 47676U;
    msg.duration = 40245U;
    msg.speed = 0.295061248555;
    msg.speed_units = 237U;
    msg.x = 0.563501094054;
    msg.y = 0.707073324944;
    msg.z = 0.246639787464;
    msg.z_units = 208U;

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
    msg.setTimeStamp(0.404949497542);
    msg.setSource(30878U);
    msg.setSourceEntity(238U);
    msg.setDestination(48771U);
    msg.setDestinationEntity(83U);
    msg.system = 44599U;
    msg.duration = 52638U;
    msg.speed = 0.466884428115;
    msg.speed_units = 192U;
    msg.x = 0.309094077056;
    msg.y = 0.136861998694;
    msg.z = 0.41316627681;
    msg.z_units = 205U;

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
    msg.setTimeStamp(0.820528456789);
    msg.setSource(19438U);
    msg.setSourceEntity(245U);
    msg.setDestination(19526U);
    msg.setDestinationEntity(227U);
    msg.lat = 0.428475711526;
    msg.lon = 0.848693657831;
    msg.speed = 0.964481756303;
    msg.speed_units = 155U;
    msg.duration = 13479U;
    msg.sys_a = 63339U;
    msg.sys_b = 54025U;
    msg.move_threshold = 0.309605624697;

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
    msg.setTimeStamp(0.799715367888);
    msg.setSource(6882U);
    msg.setSourceEntity(183U);
    msg.setDestination(45906U);
    msg.setDestinationEntity(121U);
    msg.lat = 0.100064292132;
    msg.lon = 0.508633123906;
    msg.speed = 0.317939202512;
    msg.speed_units = 116U;
    msg.duration = 8768U;
    msg.sys_a = 59400U;
    msg.sys_b = 35814U;
    msg.move_threshold = 0.170654921089;

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
    msg.setTimeStamp(0.757591712893);
    msg.setSource(55471U);
    msg.setSourceEntity(184U);
    msg.setDestination(1585U);
    msg.setDestinationEntity(147U);
    msg.lat = 0.948637999932;
    msg.lon = 0.501815166916;
    msg.speed = 0.988920786623;
    msg.speed_units = 61U;
    msg.duration = 9774U;
    msg.sys_a = 40142U;
    msg.sys_b = 8766U;
    msg.move_threshold = 0.674766433927;

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
    msg.setTimeStamp(0.102838572324);
    msg.setSource(53417U);
    msg.setSourceEntity(246U);
    msg.setDestination(8056U);
    msg.setDestinationEntity(92U);
    msg.lat = 0.325198936341;
    msg.lon = 0.568230066751;
    msg.z = 0.0742295527063;
    msg.z_units = 39U;
    msg.speed = 0.420680590709;
    msg.speed_units = 46U;
    msg.custom.assign("OMPTGSZLMGNXBZWWUHRDDQOSOKKPVQVJKCYVUTLEBMDVEZXKBMYMTRLZBCJUZFWGVZRU");

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
    msg.setTimeStamp(0.48623163556);
    msg.setSource(14743U);
    msg.setSourceEntity(49U);
    msg.setDestination(40567U);
    msg.setDestinationEntity(115U);
    msg.lat = 0.16747000462;
    msg.lon = 0.422136743682;
    msg.z = 0.209239084685;
    msg.z_units = 3U;
    msg.speed = 0.442077076024;
    msg.speed_units = 11U;
    msg.custom.assign("DEWNBQUKEQMDGOICKUHREPREDAOWTNVUKRRGPJDPPVLEHCJYSDGTRHSHDCAMWZVMVJWJFGAEVGVZCSFIKHLCAQNBYKSNZVVMKUXIVZLNZBXLKDJZSPTTREGZXLQWBEMYJYWJYPRNWELPBXSQYSBSTYLAHUFFIOQYNKRCRXFOGOCZQFUMQXNDXXMOASNYIEOPMICJCJBXISUHATQVTTIOLMLKZOBDDGGNYHALKFOR");

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
    msg.setTimeStamp(0.996884949836);
    msg.setSource(15850U);
    msg.setSourceEntity(209U);
    msg.setDestination(32210U);
    msg.setDestinationEntity(148U);
    msg.lat = 0.936816412343;
    msg.lon = 0.653164360815;
    msg.z = 0.769224051139;
    msg.z_units = 144U;
    msg.speed = 0.963619745623;
    msg.speed_units = 13U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.145818719967;
    tmp_msg_0.lon = 0.622572466519;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("MAUWYFWLAHKTDLUJSEHACCRIZUXFAYVWTZQX");

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
    msg.setTimeStamp(0.482003425532);
    msg.setSource(2736U);
    msg.setSourceEntity(103U);
    msg.setDestination(7473U);
    msg.setDestinationEntity(238U);
    msg.lat = 0.645251960682;
    msg.lon = 0.745944419819;

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
    msg.setTimeStamp(0.905692982852);
    msg.setSource(53958U);
    msg.setSourceEntity(162U);
    msg.setDestination(36648U);
    msg.setDestinationEntity(100U);
    msg.lat = 0.652561542449;
    msg.lon = 0.669757279554;

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
    msg.setTimeStamp(0.536214375456);
    msg.setSource(15646U);
    msg.setSourceEntity(223U);
    msg.setDestination(47284U);
    msg.setDestinationEntity(160U);
    msg.lat = 0.0588360363242;
    msg.lon = 0.65660606067;

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
    msg.setTimeStamp(0.896616036246);
    msg.setSource(15658U);
    msg.setSourceEntity(75U);
    msg.setDestination(9000U);
    msg.setDestinationEntity(27U);
    msg.timeout = 12791U;
    msg.lat = 0.525663522555;
    msg.lon = 0.758057152973;
    msg.z = 0.736884775298;
    msg.z_units = 97U;
    msg.pitch = 0.299840595602;
    msg.amplitude = 0.449349301405;
    msg.duration = 26480U;
    msg.speed = 0.705381631081;
    msg.speed_units = 164U;
    msg.radius = 0.280449200366;
    msg.direction = 77U;
    msg.custom.assign("QIBBLNSQODMQXYGIWTWAVPWOAQEIUHQINLMHMWQSZCUFKJCZJPKESYXRUTHJCT");

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
    msg.setTimeStamp(0.119490088363);
    msg.setSource(36299U);
    msg.setSourceEntity(3U);
    msg.setDestination(10767U);
    msg.setDestinationEntity(60U);
    msg.timeout = 29538U;
    msg.lat = 0.262196619346;
    msg.lon = 0.406022761523;
    msg.z = 0.997332292975;
    msg.z_units = 24U;
    msg.pitch = 0.109336099601;
    msg.amplitude = 0.949272508321;
    msg.duration = 7943U;
    msg.speed = 0.883156355747;
    msg.speed_units = 203U;
    msg.radius = 0.961471962584;
    msg.direction = 187U;
    msg.custom.assign("FPFDZEDGLVGORNYCZGHQCJWRMWXLIJRTZYTIBBFIAJLKRHBEOHGKOBEYPOZE");

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
    msg.setTimeStamp(0.519188995905);
    msg.setSource(62617U);
    msg.setSourceEntity(83U);
    msg.setDestination(469U);
    msg.setDestinationEntity(97U);
    msg.timeout = 36756U;
    msg.lat = 0.845211600606;
    msg.lon = 0.700264673306;
    msg.z = 0.790936309398;
    msg.z_units = 122U;
    msg.pitch = 0.394984507311;
    msg.amplitude = 0.818356053488;
    msg.duration = 34819U;
    msg.speed = 0.575081375965;
    msg.speed_units = 76U;
    msg.radius = 0.177344590177;
    msg.direction = 139U;
    msg.custom.assign("DDYNVUWCDESAZPPHJICMIMWXBTTLVKFOKXGIRCGSFRWTTCNQYZKBZJQLMCILWSMDOYKKGYMGDHXJGBQFNUMGRQEEZBDNZYVZPOHPBWTCERIGUYSISRQMKFQOASHLOAUWSXJPIGBSCQAFHZHIDMLNFFOG");

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
    msg.setTimeStamp(0.0905361648304);
    msg.setSource(3968U);
    msg.setSourceEntity(115U);
    msg.setDestination(36592U);
    msg.setDestinationEntity(198U);
    msg.formation_name.assign("JNUCIWBXVZRFPHMUKGTZHAMABSHGOIXCXMVWGFVVYQPWTDIOOXOKIIPUNMWENANARQNQGGKELJQCBNDTFAQNLBUFYSEUQTYCPGJJKSXBUZVRWLMQUJLRSPERTDMELVTQRSEOWGBGFZYUSRYAQMDKWICSVHPYOFHVZILXZZAPOSPCNBKQZBDLCBSRNYWFFGWCTRTFLHYKHDMEX");
    msg.reference_frame = 130U;
    msg.custom.assign("IFDHPSXAHBBDBFCUEVBSVZYLRYTHGIGKLVCUKHQJXNXIMRYKSUUHOWPPLWFYAWOVKYLGSJRFZCIYWCXOKQUOMBAGETEEWVDEGFZASCRPKRSRTWUNSOXLVEJKHDQKBTQAMZHBTXTQXJHMFRYLWQFSAGKWZSPVUFFXDZAOQGWTRCUJQMNRJPETOCHLANNTGZDLBECIXIEMYPMMGYOZKQINFELAIMLNCJDDUBSDTJOGUAPWM");

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
    msg.setTimeStamp(0.320783574614);
    msg.setSource(21442U);
    msg.setSourceEntity(180U);
    msg.setDestination(65241U);
    msg.setDestinationEntity(69U);
    msg.formation_name.assign("BMMGOABUUJNUKBWLLBJPFCQXZRHXWNYOVTIKCJFOUFANMXTTLKIVGYRITGPMGHOLVYNYMCLRMJDRGMQNQVMZJRNTDGBOWZKLBUCVDOIJHPBBPYCSZNQXGHFFVPVAQPGWIBGXEFP");
    msg.reference_frame = 4U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 22144U;
    tmp_msg_0.off_x = 0.774908174881;
    tmp_msg_0.off_y = 0.984730411882;
    tmp_msg_0.off_z = 0.261898020539;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("IQENASSPPIQNDUEOXAGFOAEFEPLSAPYXYCYEFUXOGSQWKXSJKTLNKTHLPMLWYGHADCKDBVBCMAWMSIETWFNWQDZUEHKRXURVDDCCGVDBFRLTIWGBCUTWFYRONDBOZXKHJBMGOISBQJRLKIMJCHTBVRKQYDPAQT");

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
    msg.setTimeStamp(0.609912764211);
    msg.setSource(35404U);
    msg.setSourceEntity(21U);
    msg.setDestination(42471U);
    msg.setDestinationEntity(178U);
    msg.formation_name.assign("WESOPWXVWPVGWMCNATZVEMHWOYGBAKBYWJHLWPGAKKDALYYGXS");
    msg.reference_frame = 234U;
    msg.custom.assign("WUMOYPUTUGYRKJ");

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
    msg.setTimeStamp(0.396653281958);
    msg.setSource(59889U);
    msg.setSourceEntity(186U);
    msg.setDestination(28677U);
    msg.setDestinationEntity(197U);
    msg.group_name.assign("KAYFSPIDKHHGTFSLWYYAKUABMFXINIDCPYXCMGZSWGGOMDQQEVNXONEMJUZUUJJVIDKVFLLUITYWNYRENWJRLZWNBXUXYREURSJJARRKSQEFVHSDVHNLMFWA");
    msg.formation_name.assign("MFTNANDZSCIUSRHGKJDJGOPCQEBIYKKPVUCRTYMMLHODZCCNUQSOQGCHIBDPJOJWOZAQYYPDSBPOHWZZNGPHBPAZBJELIGMJENRTXFQKEGUVERINXTTFLGGWRWWLMIDWHUVVMRMXHOANGJSFFJBFSAYVFVJMFHTLLQAZUEIIVAQCUYXFPCXLU");
    msg.plan_id.assign("HZUECBJLGOWAQUQCYPZGQMDUEOBHMOCWDSIYGHEDRXKKCYGYDPXCKEQFDJASMWDYAMDKXLFQGLMEEMJUVUICHPIZGNSVVXVHXNXAIRVWHGLMRSTOCTBIIMQDVLRTTHBTKTVNZJKLRHPRSYFSKFONDHFOZKNUWNWYQYXHMKIXQCTNJGLQJWEYPFONBPQVRKUJYBPL");
    msg.description.assign("IIZZGMTQZFDBSHFNISBMLJVFBNNEYFPBKOQVVDTQKXCHGOWXHKAURWPNFHPCXSAWVELPFTJINXVPSHLCHZIDLQULVARFYJZJNYPCSAKTRWEXDOJQUOIEDKZZTJWQRPTEJYCEGBULEMUCLZNUNJCTFHENDMSQXLQAYPNHKZRMAIBDWIOYMOQRXZQHFGPATCTGJKGY");
    msg.leader_speed = 0.208841839375;
    msg.leader_bank_lim = 0.531999317298;
    msg.pos_sim_err_lim = 0.50010777936;
    msg.pos_sim_err_wrn = 0.452916372974;
    msg.pos_sim_err_timeout = 63834U;
    msg.converg_max = 0.214220981528;
    msg.converg_timeout = 46819U;
    msg.comms_timeout = 29502U;
    msg.turb_lim = 0.942773084887;
    msg.custom.assign("JMTTVAACKWGCWDNCHUIAPYFOWIGNJQBWSXHQROTAGGZBYOQEQWKPZCVVVJYRNWDFPADYVSZKTNPGDB");

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
    msg.setTimeStamp(0.152927158715);
    msg.setSource(6012U);
    msg.setSourceEntity(176U);
    msg.setDestination(37568U);
    msg.setDestinationEntity(174U);
    msg.group_name.assign("PZEOURNGQCSDISDOTAQAQXUOXHADSYEADQQWLRMBOBVUYRGETHEDZJHHWIOHYVBXIWIPMLWCCJPXKQKELATWIDBPBYWFRWFUKRYDEJSNMTABPGTDNGFCISKXMXCCLEBEQNKVYTNFYQWLMFHLPFWIDTIZPHSKVQNPFUAQAPZOMMZEGJBZZVUUTWGHVNSICNLT");
    msg.formation_name.assign("TRXKBIYKSCJSRJKMAHSOJTGQAHHXXGXPKVPPAOXAUINWVZNRINETAFWACBXNCFUVRGVYZLFZYENVVCYCGPKMPUELILUFWDDIMZXUKMYEAAAUVQNWDYNFFRBZGBMOPHWIEMXJGSUQRTSHEFUFIHT");
    msg.plan_id.assign("ZCVKBUSNBTTXQHPQIEDNNZPWIXNZITXRVALXAUNVALQKGDEZEGLELZCUVFRQBRDSCLSOPUBPXXDGIWDSOYFWMQVDKRJVLWYAMMAQTLSFFIWCZQJGRKTHILEUFXJFAIGKWWMSKETOHYYEWUGZACHTNWQORSMYCMFYNGPUEPHOVINBLASGXBJDPOHRZTYTZNSRBPYEQOUIHHXDHJFPZMKBGQMJUFPJKNC");
    msg.description.assign("VEPDVIPJNKTOBRFANOYEOXURHIJNNGBPLNVGIXQAVJMMQVSLMURDRKFYSSADOLUQCDPUMEXGXIJKPMWDZZCEQTUYWIARZFBMPFEHDAHQHWLKVXOYFQGIBJJPLXMMLWSUGDOCZTQKXBEKSXFTELTVPHOONYHJTHNAJVYYGWISWUA");
    msg.leader_speed = 0.263778742154;
    msg.leader_bank_lim = 0.550649736977;
    msg.pos_sim_err_lim = 0.275244744543;
    msg.pos_sim_err_wrn = 0.0895174613106;
    msg.pos_sim_err_timeout = 10653U;
    msg.converg_max = 0.609970896851;
    msg.converg_timeout = 63544U;
    msg.comms_timeout = 10476U;
    msg.turb_lim = 0.401141293133;
    msg.custom.assign("ATYZYKMPSVJUSXPTCVPAUOQLYFC");

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
    msg.setTimeStamp(0.421455455682);
    msg.setSource(14175U);
    msg.setSourceEntity(234U);
    msg.setDestination(27353U);
    msg.setDestinationEntity(101U);
    msg.group_name.assign("FGGTQDUETUNSIVDBQVPSQEBZQAOFSUZJWWXELIBFZDMIHKIIFYFMMVJYVNMQOGGLFZZPDMOZDBIJUOAMQRPIARRRIRXXDDHPMCUYNWESXAKEPGWKYVNHOWIFCTHVWUOCZWAKTCJTYNENXHKLGXYLDUJLNQPTPRHUPVMGIKWOWVNBGZASQOJDQSFBFXHXSBCAGYDYJYZEWCLRMTKURN");
    msg.formation_name.assign("EXEBWTFCEZTOGALXBXTHDNFQYJHDRQIFRKRYKNPTEPEBNBOQOMJVOCBLOEIEQDWZCVBJBUPCMKWVDNQYXJBMQDLCFTC");
    msg.plan_id.assign("PAZQGMSKUZPZJTNAUVKTUVINTNRHFFOWYEAVWMGYCKXAKMLDMEDSEGKREJOSONECIENJDTEZNTLBBISYFIIHBJYFHQADQMSWKJTXWCBDEHYJCDQVXELFQXHOGDMHKLXCILPPFYDQHFVAUCIKJPQGPSAUU");
    msg.description.assign("TRBWSEDKZLVVERFEIDLWJAWLRSJJXYQUTDIVKWRUHHELVWKOITWAZKJKAAWLMAHOCUBSOKUCVQAHFMAUTPJMOSCMMTTTCYEVVQRBXUYULPTGRFQKXGYHODSHGXQPSADSTDPNQFLGLZFYHEPRNZNJJWNJYWGLYVXKGHIFYXIN");
    msg.leader_speed = 0.721695750909;
    msg.leader_bank_lim = 0.861709059106;
    msg.pos_sim_err_lim = 0.951759483108;
    msg.pos_sim_err_wrn = 0.893444591946;
    msg.pos_sim_err_timeout = 54282U;
    msg.converg_max = 0.412966248147;
    msg.converg_timeout = 23008U;
    msg.comms_timeout = 5959U;
    msg.turb_lim = 0.909777124787;
    msg.custom.assign("FPHVGHENBWLYAMQPRDASLBEOQIEUCYMFBSQGZSJTHBANQGURABMFHAJZTDTQXDWYGDNSTXHVBDRCNWNLLJIPPBGPCAXXYEIIFFZECMZQKHZUJTYSXVIDEVWOUURKJMP");

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
    msg.setTimeStamp(0.020004989643);
    msg.setSource(60305U);
    msg.setSourceEntity(118U);
    msg.setDestination(753U);
    msg.setDestinationEntity(59U);
    msg.control_src = 56423U;
    msg.control_ent = 0U;
    msg.timeout = 0.926229654094;
    msg.loiter_radius = 0.0649601993162;
    msg.altitude_interval = 0.819591959277;

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
    msg.setTimeStamp(0.817728741575);
    msg.setSource(6728U);
    msg.setSourceEntity(209U);
    msg.setDestination(62631U);
    msg.setDestinationEntity(147U);
    msg.control_src = 44071U;
    msg.control_ent = 4U;
    msg.timeout = 0.595099725849;
    msg.loiter_radius = 0.49519923361;
    msg.altitude_interval = 0.601878311047;

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
    msg.setTimeStamp(0.257646733572);
    msg.setSource(5305U);
    msg.setSourceEntity(102U);
    msg.setDestination(17366U);
    msg.setDestinationEntity(29U);
    msg.control_src = 26654U;
    msg.control_ent = 135U;
    msg.timeout = 0.0810273098669;
    msg.loiter_radius = 0.970113450241;
    msg.altitude_interval = 0.536789589268;

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
    msg.setTimeStamp(0.791605052744);
    msg.setSource(6436U);
    msg.setSourceEntity(194U);
    msg.setDestination(43511U);
    msg.setDestinationEntity(242U);
    msg.flags = 132U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.0332086953278;
    tmp_msg_0.speed_units = 19U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.326862756996;
    tmp_msg_1.z_units = 107U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.576742712974;
    msg.lon = 0.133741272054;
    msg.radius = 0.79449879223;

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
    msg.setTimeStamp(0.603183440421);
    msg.setSource(43398U);
    msg.setSourceEntity(135U);
    msg.setDestination(23992U);
    msg.setDestinationEntity(180U);
    msg.flags = 114U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.778138794646;
    tmp_msg_0.speed_units = 115U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.994651735651;
    tmp_msg_1.z_units = 160U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.115862566349;
    msg.lon = 0.25206098951;
    msg.radius = 0.0916416451335;

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
    msg.setTimeStamp(0.447945381735);
    msg.setSource(12454U);
    msg.setSourceEntity(154U);
    msg.setDestination(30766U);
    msg.setDestinationEntity(12U);
    msg.flags = 21U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.202309072209;
    tmp_msg_0.speed_units = 215U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.347181731206;
    tmp_msg_1.z_units = 48U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.531884446045;
    msg.lon = 0.863319607765;
    msg.radius = 0.733479345233;

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
    msg.setTimeStamp(0.409113004066);
    msg.setSource(37824U);
    msg.setSourceEntity(94U);
    msg.setDestination(52033U);
    msg.setDestinationEntity(7U);
    msg.control_src = 25314U;
    msg.control_ent = 176U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 68U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.481750062518;
    tmp_tmp_msg_0_0.speed_units = 241U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.63245073785;
    tmp_tmp_msg_0_1.z_units = 41U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.0698968000571;
    tmp_msg_0.lon = 0.750751251329;
    tmp_msg_0.radius = 0.218318359782;
    msg.reference.set(tmp_msg_0);
    msg.state = 217U;
    msg.proximity = 61U;

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
    msg.setTimeStamp(0.459046298234);
    msg.setSource(39858U);
    msg.setSourceEntity(187U);
    msg.setDestination(38504U);
    msg.setDestinationEntity(122U);
    msg.control_src = 37487U;
    msg.control_ent = 181U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 152U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.0655596853802;
    tmp_tmp_msg_0_0.speed_units = 177U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.762396580037;
    tmp_tmp_msg_0_1.z_units = 230U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.372493010675;
    tmp_msg_0.lon = 0.994395402599;
    tmp_msg_0.radius = 0.95177405024;
    msg.reference.set(tmp_msg_0);
    msg.state = 54U;
    msg.proximity = 107U;

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
    msg.setTimeStamp(0.76528537398);
    msg.setSource(32353U);
    msg.setSourceEntity(45U);
    msg.setDestination(45210U);
    msg.setDestinationEntity(14U);
    msg.control_src = 45766U;
    msg.control_ent = 61U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 31U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.214657020316;
    tmp_tmp_msg_0_0.speed_units = 236U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.511642999692;
    tmp_tmp_msg_0_1.z_units = 164U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.332503175772;
    tmp_msg_0.lon = 0.610183021507;
    tmp_msg_0.radius = 0.866231350733;
    msg.reference.set(tmp_msg_0);
    msg.state = 129U;
    msg.proximity = 0U;

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
    msg.setTimeStamp(0.90702156497);
    msg.setSource(9629U);
    msg.setSourceEntity(152U);
    msg.setDestination(49461U);
    msg.setDestinationEntity(71U);
    msg.ax_cmd = 0.581856664595;
    msg.ay_cmd = 0.311080572973;
    msg.az_cmd = 0.137767545901;
    msg.ax_des = 0.599744179045;
    msg.ay_des = 0.888349286397;
    msg.az_des = 0.65287218035;
    msg.virt_err_x = 0.992985762628;
    msg.virt_err_y = 0.197988853757;
    msg.virt_err_z = 0.936098941291;
    msg.surf_fdbk_x = 0.374757131539;
    msg.surf_fdbk_y = 0.484092298433;
    msg.surf_fdbk_z = 0.803733295647;
    msg.surf_unkn_x = 0.921863685709;
    msg.surf_unkn_y = 0.989767325873;
    msg.surf_unkn_z = 0.832203531691;
    msg.ss_x = 0.785952369069;
    msg.ss_y = 0.31495669641;
    msg.ss_z = 0.428936086349;

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
    msg.setTimeStamp(0.0996862492016);
    msg.setSource(40960U);
    msg.setSourceEntity(91U);
    msg.setDestination(20437U);
    msg.setDestinationEntity(147U);
    msg.ax_cmd = 0.410900212577;
    msg.ay_cmd = 0.0665783450234;
    msg.az_cmd = 0.0356380595948;
    msg.ax_des = 0.0233328025279;
    msg.ay_des = 0.445832732289;
    msg.az_des = 0.78852219004;
    msg.virt_err_x = 0.901615901998;
    msg.virt_err_y = 0.277745313615;
    msg.virt_err_z = 0.975139331331;
    msg.surf_fdbk_x = 0.253470316496;
    msg.surf_fdbk_y = 0.00829945768282;
    msg.surf_fdbk_z = 0.389187206644;
    msg.surf_unkn_x = 0.593335824966;
    msg.surf_unkn_y = 0.524435409185;
    msg.surf_unkn_z = 0.28814392119;
    msg.ss_x = 0.916897502425;
    msg.ss_y = 0.482768538561;
    msg.ss_z = 0.0212257544884;

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
    msg.setTimeStamp(0.872399980365);
    msg.setSource(31107U);
    msg.setSourceEntity(111U);
    msg.setDestination(13263U);
    msg.setDestinationEntity(178U);
    msg.ax_cmd = 0.439156890913;
    msg.ay_cmd = 0.798229622498;
    msg.az_cmd = 0.408324792999;
    msg.ax_des = 0.131044015793;
    msg.ay_des = 0.254871534643;
    msg.az_des = 0.37021924668;
    msg.virt_err_x = 0.00681038125625;
    msg.virt_err_y = 0.958527519525;
    msg.virt_err_z = 0.0906480136218;
    msg.surf_fdbk_x = 0.0839259007225;
    msg.surf_fdbk_y = 0.313264849577;
    msg.surf_fdbk_z = 0.972777888908;
    msg.surf_unkn_x = 0.961297064104;
    msg.surf_unkn_y = 0.160968909772;
    msg.surf_unkn_z = 0.903144388223;
    msg.ss_x = 0.373684024033;
    msg.ss_y = 0.15521620827;
    msg.ss_z = 0.180234418917;

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
    msg.setTimeStamp(0.226629309793);
    msg.setSource(12939U);
    msg.setSourceEntity(91U);
    msg.setDestination(6853U);
    msg.setDestinationEntity(64U);
    msg.s_id.assign("AJLXWYBDMLCJLZJICQKIUQKHWDNUVHAFIHNMBRYKWBMPIVFJCFPPYKUXIXNCSJPDAGXMSTGOUYKXAEZWHDGOSRPJLNBOPEEZFNYLTOFCETOVITQOYVHDQRVHRTSNWUGMBQZZNSNSDZHBJCDGZRTKYOBQDEJNUCYIFFZRSEGAX");
    msg.dist = 0.405145288156;
    msg.err = 0.998342147406;
    msg.ctrl_imp = 0.0898692409496;
    msg.rel_dir_x = 0.555429281947;
    msg.rel_dir_y = 0.279565823397;
    msg.rel_dir_z = 0.149972993103;
    msg.err_x = 0.682048630815;
    msg.err_y = 0.874471162224;
    msg.err_z = 0.672502350434;
    msg.rf_err_x = 0.7327985919;
    msg.rf_err_y = 0.335264981169;
    msg.rf_err_z = 0.824818462988;
    msg.rf_err_vx = 0.788915191127;
    msg.rf_err_vy = 0.0398940913476;
    msg.rf_err_vz = 0.0663132592454;
    msg.ss_x = 0.431833136187;
    msg.ss_y = 0.284755894829;
    msg.ss_z = 0.550645359264;
    msg.virt_err_x = 0.929183434267;
    msg.virt_err_y = 0.404372541463;
    msg.virt_err_z = 0.377330971434;

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
    msg.setTimeStamp(0.19714053908);
    msg.setSource(50276U);
    msg.setSourceEntity(26U);
    msg.setDestination(63047U);
    msg.setDestinationEntity(223U);
    msg.s_id.assign("WXAZHAMDHFVCDTXELVFCRJ");
    msg.dist = 0.648749292846;
    msg.err = 0.940884724099;
    msg.ctrl_imp = 0.517229970611;
    msg.rel_dir_x = 0.893330731325;
    msg.rel_dir_y = 0.296553420756;
    msg.rel_dir_z = 0.590276015962;
    msg.err_x = 0.708239621303;
    msg.err_y = 0.938601154097;
    msg.err_z = 0.130898003982;
    msg.rf_err_x = 0.930449680275;
    msg.rf_err_y = 0.622888526038;
    msg.rf_err_z = 0.860596083261;
    msg.rf_err_vx = 0.00839459366273;
    msg.rf_err_vy = 0.643058110604;
    msg.rf_err_vz = 0.861961049925;
    msg.ss_x = 0.189806438772;
    msg.ss_y = 0.836477520419;
    msg.ss_z = 0.812500103644;
    msg.virt_err_x = 0.00994097381005;
    msg.virt_err_y = 0.209305967407;
    msg.virt_err_z = 0.685911638231;

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
    msg.setTimeStamp(0.543548183554);
    msg.setSource(31370U);
    msg.setSourceEntity(76U);
    msg.setDestination(59468U);
    msg.setDestinationEntity(146U);
    msg.s_id.assign("GTKZTAXLYBIQLFEPXXOSTBFGPAXMLMGDQWVHHBHZXXOCKZSUSDRYZZRHNFAXARSCPKAGZYNNWQSEIWUDBFREPSHWQMBKKEMOJJCMVXZXHUGXJENPENICDTDWCNTLBYUJMLYOHFB");
    msg.dist = 0.294109098437;
    msg.err = 0.353927494956;
    msg.ctrl_imp = 0.21066803048;
    msg.rel_dir_x = 0.535549456239;
    msg.rel_dir_y = 0.746896376496;
    msg.rel_dir_z = 0.352201757411;
    msg.err_x = 0.836203701618;
    msg.err_y = 0.888295189077;
    msg.err_z = 0.617991347272;
    msg.rf_err_x = 0.631947972429;
    msg.rf_err_y = 0.754364586414;
    msg.rf_err_z = 0.129744836767;
    msg.rf_err_vx = 0.666005254281;
    msg.rf_err_vy = 0.663980850208;
    msg.rf_err_vz = 0.491903654358;
    msg.ss_x = 0.667061993071;
    msg.ss_y = 0.332665512189;
    msg.ss_z = 0.200985311925;
    msg.virt_err_x = 0.134034994578;
    msg.virt_err_y = 0.362303805559;
    msg.virt_err_z = 0.764263543131;

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
    msg.setTimeStamp(0.274897918267);
    msg.setSource(22289U);
    msg.setSourceEntity(85U);
    msg.setDestination(55394U);
    msg.setDestinationEntity(215U);
    msg.timeout = 60960U;
    msg.rpm = 0.722859839995;
    msg.direction = 252U;
    msg.custom.assign("WLBHFSPXEDL");

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
    msg.setTimeStamp(0.582773487234);
    msg.setSource(22885U);
    msg.setSourceEntity(82U);
    msg.setDestination(32820U);
    msg.setDestinationEntity(91U);
    msg.timeout = 35380U;
    msg.rpm = 0.856217782448;
    msg.direction = 35U;
    msg.custom.assign("DNWOKMJTTADSYUJNTLXVBHYIHEDWOQFOCATJDQPAKQTZJMRHIGJUWPDGAFDNLCRHSOFPGCKUYKKRLLYUDCJLTKFVIGBTASTGNRJBONIK");

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
    msg.setTimeStamp(0.644673520795);
    msg.setSource(33166U);
    msg.setSourceEntity(142U);
    msg.setDestination(33626U);
    msg.setDestinationEntity(210U);
    msg.timeout = 46155U;
    msg.rpm = 0.920881604762;
    msg.direction = 225U;
    msg.custom.assign("EWGADUTRJLJMWLUCVGMIMIGZUVDZNQTWKKCBXQFCXOTRZNPMFXLHTTFSVYECQVSFZJOSSHULJPUYYFQBMFEAUZUHPAIZOXJYNHTCOBFEXJYVPJEFWTCYVGRKW");

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
    msg.setTimeStamp(0.695860571082);
    msg.setSource(13981U);
    msg.setSourceEntity(181U);
    msg.setDestination(43009U);
    msg.setDestinationEntity(249U);
    msg.formation_name.assign("NXFPWEHKLDPWLGCFSQREVVDRIUZGKRVEOEEPAAVIMXIFINZYGOCENFGSDATASAZQLBDGNFBKCJPZJUVJLFKELQQSXOCVTIQSXHQPJDYHXYQNYYPDZFDMHTOMWFTDSYRXGUXFNNIPWJUGKIDBSCBMMBMMTXKBHLEYXJOICWLEWUZRPKZXWQYAEQSBURBOHRKDRCUIKTTTFLYUVVMPVBJOOGKZPHB");
    msg.type = 85U;
    msg.op = 68U;
    msg.group_name.assign("HBMSOWHHRVNVSDFGELQUPSGRYVFJPLMQTIL");
    msg.plan_id.assign("QAUSKHWWCJJBQWF");
    msg.description.assign("FNIZLBKCMNUCNSOUWFAFGBRCQIMPBGHEOLQLSFCHANWOHRAYXUKBBMEFWQARQWZTJWBKPKKGDYXZSRJAXOJ");
    msg.reference_frame = 80U;
    msg.leader_bank_lim = 0.049922243946;
    msg.leader_speed_min = 0.799160401491;
    msg.leader_speed_max = 0.435256038385;
    msg.leader_alt_min = 0.436126814501;
    msg.leader_alt_max = 0.905746423316;
    msg.pos_sim_err_lim = 0.818877419402;
    msg.pos_sim_err_wrn = 0.359929960901;
    msg.pos_sim_err_timeout = 28228U;
    msg.converg_max = 0.281396194491;
    msg.converg_timeout = 38062U;
    msg.comms_timeout = 20599U;
    msg.turb_lim = 0.917522496158;
    msg.custom.assign("JIWNARSKXASPLBSAGHMCTVXNFXQUYPXZTMLEFHJKODXZTQRDXVEXEUQBXRNDWLGAWQZGUTIAZJCDULSCPVFOANGONAMPDLRGXYNIWYDVEQEMMTGHYHWFYEQZGEVPPCPCSKBKYHASVIYTWJFKRFDVQRULLHWOIRRSACCHMZIFMMKVBYOJXBJWPCAZIRJ");

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
    msg.setTimeStamp(0.905197954489);
    msg.setSource(10389U);
    msg.setSourceEntity(83U);
    msg.setDestination(12119U);
    msg.setDestinationEntity(244U);
    msg.formation_name.assign("EUGVWMORADMHLXLUFZOIEYNTMWEQZIIITXENCGLBGFAVNTEOCRRPNTMKZGQOTCUWPEAOZQYWPRDVLXLHCLBWMSFGBBUFGORFTZIDJKJSWEKNGIJYQLHBUQYQBDZNQACXUFTNNBHHHUSOPSOXKYELAIVDCFJXMMTUKZG");
    msg.type = 229U;
    msg.op = 44U;
    msg.group_name.assign("LNUJTZMPIPKFIIFLSWVAREPQUMXCSQGRWQACUMJXVYTBTOMRIDSOLXHTIBOWDDXBYBYRAJODDTSACZSWUVWXHYCHGOTHYGJUHQKKBIRPWAEVEGEHCNCGLNEHZAKTNQGEOOUNOJXZLTGJXIIAXFBEVUQKHYZMLVNHFOSSFBKPEPFRXCGTPDKOTZUCMPUAVQWNEKDMNBJFLBADGSZQRMSNYFJ");
    msg.plan_id.assign("ZOMFJDVKUSHTGJWXYSEENXDADGCDMCAKPSSEHLAVKYLUWIHHVBGUXJSTFZJGFXCWDOZRQIWAIMEEZHNUILWTCVNLWULPCIXJYXZFHRQLYXUMBBHSQOTTSQEFVJHFMYRKDNDBQRRAMO");
    msg.description.assign("VKSAEDSNRWWGBQXUAETKDNZSSIPRBXLKYGUCAUSOFCCUXSLNWNILFTQAGRZCILDAMPSFYPGGTZZHXXRUNIEDWRQNEJOPCWSY");
    msg.reference_frame = 192U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 25782U;
    tmp_msg_0.off_x = 0.124749133017;
    tmp_msg_0.off_y = 0.314218898035;
    tmp_msg_0.off_z = 0.153738521797;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.763421787199;
    msg.leader_speed_min = 0.542596139066;
    msg.leader_speed_max = 0.891042459497;
    msg.leader_alt_min = 0.65927857509;
    msg.leader_alt_max = 0.343833219406;
    msg.pos_sim_err_lim = 0.653838666252;
    msg.pos_sim_err_wrn = 0.464435980245;
    msg.pos_sim_err_timeout = 23013U;
    msg.converg_max = 0.602048609919;
    msg.converg_timeout = 9015U;
    msg.comms_timeout = 57637U;
    msg.turb_lim = 0.455791112985;
    msg.custom.assign("LLPEFIAIURCSRJLAWJOBOYZWNCIAJYOYEDGOWWOVCTBTAAQQOQIICNWHYVIADLZXKQHMHPTQNBJFEGKTHZMXWLSGBTKJFXAJPEVPEUJGZMYSFVOJBUSLFFWBDBPRFNLJRSIQYCYRPOMWXKGWN");

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
    msg.setTimeStamp(0.111057403988);
    msg.setSource(2491U);
    msg.setSourceEntity(176U);
    msg.setDestination(8191U);
    msg.setDestinationEntity(143U);
    msg.formation_name.assign("WXZEGAVHDQXUHXZOKJKSGIGYCRPXCDFJEWAKRUFDWYMKDAZYTDQEILCPRAJXAUEM");
    msg.type = 210U;
    msg.op = 73U;
    msg.group_name.assign("RQYOQYGMSKAWOAZOVYDPQRESPWJCCUJGPPZHHYXGNLQPFOERAWQLCTXOHKCDQUXMDERAUBACKXFZRPLEWOSZYIXZDIDARQUMEBJJLWUZBVISECJYCJDFBMFGPKHEWVHZOFALTSDXAUSQGIMXSFBJTKXTNIDITMFGKJFGBMEUHYRIHLVWGXAPNTCCBNVSUIIYKNDBRBMLOTFJNVVVASYPTFUBZOHTJMQ");
    msg.plan_id.assign("BTKJQNUEXPIXLUXFIAWXIXNAUZLVDSAFUGYDCHKHGWJGIDPCGYBKZHRJGVDBPDROKNYGTEWWEOEHRLFROCWMMMKSKHQR");
    msg.description.assign("MNIHQBJUTXADCKLGNDCZ");
    msg.reference_frame = 109U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 47833U;
    tmp_msg_0.off_x = 0.650732356266;
    tmp_msg_0.off_y = 0.407379734652;
    tmp_msg_0.off_z = 0.932495130808;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.781754625435;
    msg.leader_speed_min = 0.519300161389;
    msg.leader_speed_max = 0.347764937308;
    msg.leader_alt_min = 0.719321915579;
    msg.leader_alt_max = 0.41813304419;
    msg.pos_sim_err_lim = 0.785848951034;
    msg.pos_sim_err_wrn = 0.45566585217;
    msg.pos_sim_err_timeout = 56663U;
    msg.converg_max = 0.624319747833;
    msg.converg_timeout = 42338U;
    msg.comms_timeout = 33387U;
    msg.turb_lim = 0.394674188214;
    msg.custom.assign("CJLXXQWSNNNKLTUGSFKGOIBZIWCU");

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
    msg.setTimeStamp(0.793135920334);
    msg.setSource(338U);
    msg.setSourceEntity(10U);
    msg.setDestination(35451U);
    msg.setDestinationEntity(215U);
    msg.timeout = 29114U;
    msg.lat = 0.261626006048;
    msg.lon = 0.588621983722;
    msg.z = 0.975619851408;
    msg.z_units = 251U;
    msg.speed = 0.801359462888;
    msg.speed_units = 242U;
    msg.custom.assign("HAIHBNCBSLNVOWSHTCUMHSELVOFJSMQYQFOSZUXRVLWPONNOAATXJTKCERKUYBTWPUGGJEWGLVUZFMKHCNFSVYCGHZDIZDVELJZRLXJJCDMSKMCNZQYGJTFKPAUBIF");

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
    msg.setTimeStamp(0.635742633436);
    msg.setSource(10213U);
    msg.setSourceEntity(246U);
    msg.setDestination(47450U);
    msg.setDestinationEntity(79U);
    msg.timeout = 47806U;
    msg.lat = 0.583032204283;
    msg.lon = 0.104734056755;
    msg.z = 0.395945667954;
    msg.z_units = 23U;
    msg.speed = 0.970245774158;
    msg.speed_units = 222U;
    msg.custom.assign("DXKCOAEHRGFXPWRRWAOMYVVCHXUOGGKMKAUUDXNHDUBPZTAALSXWTJTFQOFSVBGNCLVAPRHVAUGCDMJNTUATWQHYSELZRJOEWMKWLFYXMZESYHYNZHFDDIPCBUYGZMHBDLGEJKQDTXBUEIYFCKSTTQOKLIMBDIXFJIWUJGUSIHKLOTPIICNQQOOINBVYSFPAZYEZQ");

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
    msg.setTimeStamp(0.213239551994);
    msg.setSource(6151U);
    msg.setSourceEntity(54U);
    msg.setDestination(53017U);
    msg.setDestinationEntity(132U);
    msg.timeout = 8715U;
    msg.lat = 0.381389875116;
    msg.lon = 0.351818463642;
    msg.z = 0.996369406773;
    msg.z_units = 120U;
    msg.speed = 0.7030720526;
    msg.speed_units = 239U;
    msg.custom.assign("WYXGKOLHDFTGOIGZVTNTRYFQAFSCOOJMROAYEAGYLZESHKRCLWPCQIOHVDNMEXOAQKQRDPRXMCLHCZZHZBJPDWNDLKICUJX");

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
    msg.setTimeStamp(0.988782119017);
    msg.setSource(12714U);
    msg.setSourceEntity(15U);
    msg.setDestination(50245U);
    msg.setDestinationEntity(96U);
    msg.timeout = 30846U;
    msg.lat = 0.0367482022677;
    msg.lon = 0.10764444581;
    msg.z = 0.707949923424;
    msg.z_units = 205U;
    msg.speed = 0.1885183691;
    msg.speed_units = 121U;
    msg.custom.assign("VEIFJVAQRUAKQILZOYYOLRHXKLAKTDGNQEGRYYVUBXZBEMNGSZNGCDTZWOBJFRSVVPUMPTBPKLMYAOMSQRFZBQXOTWENQNNKPYNZGJTDTLCVTVMHBCGOFCRDAJKKC");

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
    msg.setTimeStamp(0.501396676212);
    msg.setSource(48127U);
    msg.setSourceEntity(178U);
    msg.setDestination(29132U);
    msg.setDestinationEntity(52U);
    msg.timeout = 50401U;
    msg.lat = 0.458413084578;
    msg.lon = 0.0320170169432;
    msg.z = 0.210099044494;
    msg.z_units = 67U;
    msg.speed = 0.36717195174;
    msg.speed_units = 172U;
    msg.custom.assign("DXWKUREUSJFGMSHWWLSJVAM");

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
    msg.setTimeStamp(0.19713194305);
    msg.setSource(7931U);
    msg.setSourceEntity(91U);
    msg.setDestination(39552U);
    msg.setDestinationEntity(161U);
    msg.timeout = 17716U;
    msg.lat = 0.497419756311;
    msg.lon = 0.625741493337;
    msg.z = 0.405722159828;
    msg.z_units = 48U;
    msg.speed = 0.62127565708;
    msg.speed_units = 21U;
    msg.custom.assign("UHWWRXAPOSHXWKTYEECORINFIKDHRQFGXLOVQRLMFFUJKP");

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
    msg.setTimeStamp(0.27074149284);
    msg.setSource(52969U);
    msg.setSourceEntity(179U);
    msg.setDestination(37706U);
    msg.setDestinationEntity(95U);
    msg.arrival_time = 0.108132083145;
    msg.lat = 0.282607167005;
    msg.lon = 0.971825987099;
    msg.z = 0.453250334856;
    msg.z_units = 155U;
    msg.travel_z = 0.375710023819;
    msg.travel_z_units = 246U;
    msg.delayed = 123U;

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
    msg.setTimeStamp(0.761026875902);
    msg.setSource(1031U);
    msg.setSourceEntity(149U);
    msg.setDestination(25253U);
    msg.setDestinationEntity(36U);
    msg.arrival_time = 0.334266886193;
    msg.lat = 0.364554764699;
    msg.lon = 0.951824201636;
    msg.z = 0.37681423615;
    msg.z_units = 139U;
    msg.travel_z = 0.184902839396;
    msg.travel_z_units = 150U;
    msg.delayed = 170U;

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
    msg.setTimeStamp(0.771659904495);
    msg.setSource(48760U);
    msg.setSourceEntity(127U);
    msg.setDestination(55053U);
    msg.setDestinationEntity(236U);
    msg.arrival_time = 0.629914194057;
    msg.lat = 0.00132593532619;
    msg.lon = 0.7965917013;
    msg.z = 0.458734043782;
    msg.z_units = 61U;
    msg.travel_z = 0.62953795572;
    msg.travel_z_units = 9U;
    msg.delayed = 79U;

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
    msg.setTimeStamp(0.792085345944);
    msg.setSource(14039U);
    msg.setSourceEntity(194U);
    msg.setDestination(17530U);
    msg.setDestinationEntity(247U);
    msg.lat = 0.691832374892;
    msg.lon = 0.502302789701;
    msg.z = 0.93552170657;
    msg.z_units = 45U;
    msg.speed = 0.889533810051;
    msg.speed_units = 44U;
    msg.bearing = 0.135342289686;
    msg.cross_angle = 0.501696390968;
    msg.width = 0.669270205947;
    msg.length = 0.809155412256;
    msg.coff = 15U;
    msg.angaperture = 0.734081876373;
    msg.range = 28433U;
    msg.overlap = 59U;
    msg.flags = 187U;
    msg.custom.assign("YWKHLMULFRMDKPURBYRBCMMWCAAJEVJCPBIQYKBHVRZZBMOGDRIIFSYTBFMDAGCMQYWHXZCTFWXGORJPEAMOSJVSENNPGIIUWRZVDSVUOEVNDZEJNTLBPGQGKKATILJIBRZXW");

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
    msg.setTimeStamp(0.705900736032);
    msg.setSource(59859U);
    msg.setSourceEntity(239U);
    msg.setDestination(40466U);
    msg.setDestinationEntity(183U);
    msg.lat = 0.0289410425737;
    msg.lon = 0.790252781128;
    msg.z = 0.576666593837;
    msg.z_units = 237U;
    msg.speed = 0.375204712397;
    msg.speed_units = 166U;
    msg.bearing = 0.24464180822;
    msg.cross_angle = 0.940397320218;
    msg.width = 0.63195853267;
    msg.length = 0.670537161985;
    msg.coff = 166U;
    msg.angaperture = 0.466338828966;
    msg.range = 9251U;
    msg.overlap = 80U;
    msg.flags = 8U;
    msg.custom.assign("JCGSHHQBYUVDHDCHUINBOAXJPPNTAPGHGMBLLFGSFFCMGJXFRPTKSEFYNCPLNHKOROTN");

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
    msg.setTimeStamp(0.532061698023);
    msg.setSource(63578U);
    msg.setSourceEntity(179U);
    msg.setDestination(10888U);
    msg.setDestinationEntity(109U);
    msg.lat = 0.509954148019;
    msg.lon = 0.268688447643;
    msg.z = 0.908077927399;
    msg.z_units = 224U;
    msg.speed = 0.147242735156;
    msg.speed_units = 209U;
    msg.bearing = 0.891199757398;
    msg.cross_angle = 0.11109564672;
    msg.width = 0.0174988413389;
    msg.length = 0.19393590832;
    msg.coff = 68U;
    msg.angaperture = 0.620469881143;
    msg.range = 15852U;
    msg.overlap = 3U;
    msg.flags = 45U;
    msg.custom.assign("JQGFPJMWWQFOJNDJKRZZYDPUIMYOXBKTQYWGBJAMCIMSMQUBZSZJOBTFSEOVLADAOLNUOQHVVBXYAJCYVRKRNEVKHCHGPTAALYJSBXFGPPUHYDSNWXNEEZZMWEUZIRBODOSUXMFFJWXATLIQQTXPRVUIEFUWALYZGWQENZVPURSEDGKTPNLTRIFERGRKGDGKWXTXTHJNSUHOBIKCHLCVQFDY");

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
    msg.setTimeStamp(0.412686931958);
    msg.setSource(54226U);
    msg.setSourceEntity(186U);
    msg.setDestination(53501U);
    msg.setDestinationEntity(139U);
    msg.timeout = 36111U;
    msg.lat = 0.328835255013;
    msg.lon = 0.131400074356;
    msg.z = 0.512879003873;
    msg.z_units = 146U;
    msg.speed = 0.0125042908225;
    msg.speed_units = 100U;
    msg.syringe0 = 188U;
    msg.syringe1 = 82U;
    msg.syringe2 = 19U;
    msg.custom.assign("JBJMVVNHYZRZOPYRICZNQWTMXEJKGYYYYLDRHUQJIIDEZPTUNEDZUJZSLPUHKEHOMTGMKXIGWEXTFHPZWIYSRNJNUBX");

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
    msg.setTimeStamp(0.162548417444);
    msg.setSource(885U);
    msg.setSourceEntity(171U);
    msg.setDestination(23141U);
    msg.setDestinationEntity(153U);
    msg.timeout = 12220U;
    msg.lat = 0.062506176643;
    msg.lon = 0.467694379584;
    msg.z = 0.928375439934;
    msg.z_units = 0U;
    msg.speed = 0.46838661589;
    msg.speed_units = 135U;
    msg.syringe0 = 27U;
    msg.syringe1 = 183U;
    msg.syringe2 = 35U;
    msg.custom.assign("TQODPJWEPBYGZRHXHKKKAGZUNEDUXWGKCEHVSVMDCCNTBQAWUFUMCGRMLZWMWQFPFNFYIRSBMGQDTPXNPFWZAAYRYHOJCFVYJTYLUUWITIQTVKSEABHHHVOU");

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
    msg.setTimeStamp(0.499107932806);
    msg.setSource(47540U);
    msg.setSourceEntity(209U);
    msg.setDestination(36245U);
    msg.setDestinationEntity(14U);
    msg.timeout = 33299U;
    msg.lat = 0.937243556093;
    msg.lon = 0.331210002072;
    msg.z = 0.417574557065;
    msg.z_units = 25U;
    msg.speed = 0.914842876089;
    msg.speed_units = 243U;
    msg.syringe0 = 188U;
    msg.syringe1 = 143U;
    msg.syringe2 = 77U;
    msg.custom.assign("FPLOADENRCRYJPNATMGDUDBSUPYLCHJPSHFSOOYWAGKLHXRXHFXREFTSBPPRSZXJXNVZGEQHCSSTJDGJDKKZAZUZUXZNRSXJNWQOMMBMILTTWHQPXIWPCFEVDLLDWVCINKWYTWCKFQTJEHLFGVMVUVIMCQZCPYUYOJOQSEVNWTZGYMKICDHKWRZMBIIDBAMVJBZLVEIBSREOBCUANBAFKQGWEYXLIARHGOYNHURXUFOGABYEOAQUPINMKJLKGD");

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
    msg.setTimeStamp(0.90701592778);
    msg.setSource(461U);
    msg.setSourceEntity(215U);
    msg.setDestination(24996U);
    msg.setDestinationEntity(106U);

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
    msg.setTimeStamp(0.839621190378);
    msg.setSource(23059U);
    msg.setSourceEntity(241U);
    msg.setDestination(1438U);
    msg.setDestinationEntity(199U);

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
    msg.setTimeStamp(0.312599179723);
    msg.setSource(25677U);
    msg.setSourceEntity(112U);
    msg.setDestination(32949U);
    msg.setDestinationEntity(162U);

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
    msg.setTimeStamp(0.446579088153);
    msg.setSource(11191U);
    msg.setSourceEntity(168U);
    msg.setDestination(24535U);
    msg.setDestinationEntity(186U);
    msg.lat = 0.065709697736;
    msg.lon = 0.408858773523;
    msg.z = 0.65973577105;
    msg.z_units = 10U;
    msg.speed = 0.810132441514;
    msg.speed_units = 23U;
    msg.takeoff_pitch = 0.634501699787;
    msg.custom.assign("AWWCDHCZCNYIQFKIUZKMOKSRLUAJVBEIVLWQFRBFNFZSHTQXYNZVDKWJTIVRMWNVOPVQFQLCAZEGGOFPIZACWYEBJAAUOEFRPLXHWSDCIWRMAUNXAUJVZNFQUAKHGDYNMRJGFSSVEWCUQKTUHDETDIGMMBZXJVEMHRBBSYRTDDDTEGXNTJMQRJXOXVGEBOOKLPLPSILUXPBNOIXLYXOHZYITJCCPAWGBJTTZDKMKSP");

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
    msg.setTimeStamp(0.760371359652);
    msg.setSource(57326U);
    msg.setSourceEntity(115U);
    msg.setDestination(32230U);
    msg.setDestinationEntity(131U);
    msg.lat = 0.30884027663;
    msg.lon = 0.408346818489;
    msg.z = 0.762404968939;
    msg.z_units = 141U;
    msg.speed = 0.879997910097;
    msg.speed_units = 151U;
    msg.takeoff_pitch = 0.714388572387;
    msg.custom.assign("ZGEUAQMBFMRYPATQXMVEOOPSZRFYXYRXDLIYSZHOYHCFBCTTMPIYSEVFXCNXWGRLXWKHXXUCPFWXLJCJAVTKJJXDBNFNAWMGRCENVIDSUPNVDYNJKMTLCYERLAMFQEPZPOSKBITDBNCWGFLLVSNOIVTZQDCIBSLTWMDWHORNGGYGBKQHZBRKSIWVKSIABADJPUNEUADRUHHATUQQQOLESQMIHPZ");

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
    msg.setTimeStamp(0.299228512623);
    msg.setSource(30758U);
    msg.setSourceEntity(4U);
    msg.setDestination(56698U);
    msg.setDestinationEntity(68U);
    msg.lat = 0.359390533832;
    msg.lon = 0.863360422043;
    msg.z = 0.109946340271;
    msg.z_units = 35U;
    msg.speed = 0.379729700063;
    msg.speed_units = 27U;
    msg.takeoff_pitch = 0.550488757347;
    msg.custom.assign("IBUJHJKDYYBIIPNDOAEFDYSQSBZNLABYREJDNMXLXFMJVPWJRPESQHMEGCOOWVZWQFTSDZJTCMKGQJTALVFWRSBCUWVWYYUAIKBVXUKKDXGHRVNTSZRBPMLFGLOSCWPVOYEDLRIQTAJENXYFXUDGLOSCFIMFTAHEUMQKXRQMWJGIKQHKQUWXGEPLFITTMCNBIESZONVUWQCSCJPCHRHHLZBKKTPEVPYZDZATNAODIUBCUOHZGGPRAXGOANZV");

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
    msg.setTimeStamp(0.662986653386);
    msg.setSource(15692U);
    msg.setSourceEntity(73U);
    msg.setDestination(48541U);
    msg.setDestinationEntity(218U);
    msg.lat = 0.759835466076;
    msg.lon = 0.253463569744;
    msg.z = 0.781022034991;
    msg.z_units = 52U;
    msg.speed = 0.717491569261;
    msg.speed_units = 13U;
    msg.abort_z = 0.390982873561;
    msg.bearing = 0.550306574279;
    msg.glide_slope = 182U;
    msg.glide_slope_alt = 0.539920424068;
    msg.custom.assign("KOCPWCHHSCJNMHLREGCEQSZQNTVDALOWTJKE");

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
    msg.setTimeStamp(0.427195071916);
    msg.setSource(65507U);
    msg.setSourceEntity(68U);
    msg.setDestination(58129U);
    msg.setDestinationEntity(169U);
    msg.lat = 0.215602470943;
    msg.lon = 0.212985028584;
    msg.z = 0.383608654326;
    msg.z_units = 238U;
    msg.speed = 0.487199899552;
    msg.speed_units = 117U;
    msg.abort_z = 0.424942656526;
    msg.bearing = 0.515293082642;
    msg.glide_slope = 106U;
    msg.glide_slope_alt = 0.375479992161;
    msg.custom.assign("CDYGFJYDNIKPOUWYPCZQUTBMDJBJNNPVXUFEMZXSZTEGMUYNRCAOYXXZPEEWCQHOTXWPHHTEGFRNXWQYSHJODXGEQALKVQSMFDSFJRIJYEGNFKCAOMTTSNSOOHOITPLGGQVGONIXZEFYVLTYXJUQAULFWORIKQIJZLMICWJXKEPDILBRFLCASGMBPLHDUVQVAYNCUKVCZRCLBAZJZSTQUBVMDDVKWWGA");

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
    msg.setTimeStamp(0.407638003046);
    msg.setSource(26766U);
    msg.setSourceEntity(187U);
    msg.setDestination(20631U);
    msg.setDestinationEntity(160U);
    msg.lat = 0.106104274064;
    msg.lon = 0.731486156152;
    msg.z = 0.940204106078;
    msg.z_units = 184U;
    msg.speed = 0.911592284857;
    msg.speed_units = 22U;
    msg.abort_z = 0.311987499505;
    msg.bearing = 0.543476612563;
    msg.glide_slope = 209U;
    msg.glide_slope_alt = 0.05051141731;
    msg.custom.assign("QZRGRFHDERCDFDKPJPZROGEKVPCJHEYRWGPCLYOKTYWKZQBQUJVANMTXMXCLJASBCMKYDQZAA");

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
    msg.setTimeStamp(0.236486759636);
    msg.setSource(5727U);
    msg.setSourceEntity(35U);
    msg.setDestination(62437U);
    msg.setDestinationEntity(231U);
    msg.lat = 0.386752371929;
    msg.lon = 0.492804989666;
    msg.speed = 0.305477798273;
    msg.speed_units = 116U;
    msg.limits = 168U;
    msg.max_depth = 0.0673067876779;
    msg.min_alt = 0.322076629951;
    msg.time_limit = 0.644073297246;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.401082164761;
    tmp_msg_0.lon = 0.0689788504655;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("QOKGBOQDZYVPJQPTFNHAVRQRZKRCDYODLINILDSXICKENS");
    msg.custom.assign("HFSRUOBKXPXAXESDCJWOGIBKNPMAMSAKCWMSODGXQUZKTUVEZGKJXYICLENLBMCZBPKRMFJHDNDCFHKIIYDKVGOVFTJBRVCQJALWENGSFRCCYORQVRFLYKJPAREPTIJUIDEWZYAWXBMFHEQQMNWVGVGEFUTICYGBPZEJTZGHAWLQIATGVTDPBROULMKUTJOEYUCPZSZUADOWYBXQNXVHYNLFFSVWDITQNNHOSRQ");

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
    msg.setTimeStamp(0.763046965224);
    msg.setSource(62873U);
    msg.setSourceEntity(14U);
    msg.setDestination(34238U);
    msg.setDestinationEntity(212U);
    msg.lat = 0.76087305705;
    msg.lon = 0.377904656359;
    msg.speed = 0.500090492879;
    msg.speed_units = 85U;
    msg.limits = 160U;
    msg.max_depth = 0.272848369595;
    msg.min_alt = 0.499279375764;
    msg.time_limit = 0.294095390027;
    msg.controller.assign("JHLPXXRZEXHEDNZAJHFZUDBAMGGBXSYWTNTMUGRFXBTRRCLZSUNQVJCFPGWNTJYQQDYOZCCNUFYQSLDWMZJWVCEIRUKFCMKHEOTCPVIBKVZYIWTZQFDBNIYMIDOBQYKQOEALNABLVRFTSUXDILMGXSLHIDRVPIDDWPHQFIWUKUHJHMEHVYZTEPQICVJZAWGGJLUWMVPABKGRSUOKRFVSQ");
    msg.custom.assign("HYXRDEVKHDFSJO");

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
    msg.setTimeStamp(0.376342685528);
    msg.setSource(48816U);
    msg.setSourceEntity(58U);
    msg.setDestination(51893U);
    msg.setDestinationEntity(21U);
    msg.lat = 0.217459563361;
    msg.lon = 0.270361312988;
    msg.speed = 0.984646423787;
    msg.speed_units = 24U;
    msg.limits = 106U;
    msg.max_depth = 0.705304712921;
    msg.min_alt = 0.807752497724;
    msg.time_limit = 0.881124457678;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.999589135155;
    tmp_msg_0.lon = 0.778991790429;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("RYBKGFMGICVSXDNFHHGRTBGBLHAMYBDWRVWJRETPOTRZAUMRJOFOQNBGBJLUCYEWVPZKDIARXCWOYUURYVIPQPELCKZQEDMHHXCKSFEFCARACNAFNOTQGOJEMNWXTYHCXKLUDZFBWZKUSHBQHZELZLZTIVDTBPVOPJKGPIFQIGMFMJFLIIUNSRVHATWJSNXKJ");
    msg.custom.assign("GSYBMAONCIZWIOFXJASGMZVJKNLYOPLCARLVJMVIRTEHRHFETAPXHUQAWXEYIWHRMVLILJYWMGADJRROSQQPZXWEGNDGVAADMCBZUKSZXZLXMIUYQBPJTCBJOWUHFRZNFTZNPCN");

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
    msg.setTimeStamp(0.277626514112);
    msg.setSource(3430U);
    msg.setSourceEntity(185U);
    msg.setDestination(26469U);
    msg.setDestinationEntity(210U);
    msg.target.assign("SJPWKDBFVQXSMIGMZVZNJPXRWHDHOEZLDLJTXQYZNPYWQIWONZAJFITDVFTNQWJVJEBCCKSILMLRGAIKTQFOPANBBSEHQLXSCTUKMKYCMVCQZVCDPKAEAUA");
    msg.max_speed = 0.934860082229;
    msg.speed_units = 53U;
    msg.lat = 0.57070357042;
    msg.lon = 0.743182590573;
    msg.z = 0.594420061276;
    msg.z_units = 226U;
    msg.custom.assign("KXGCSRAKVOODTLUXPHRFAKJILDYFSHKQEERLLNBOEFNIPZLYBKQEZJNUNYRWYFWSNJQPWMVJXODAWPUTRPZAEOLYEDHPVCPTIDCZUNDAGCYWZIJRFYHBCFZYZTJSLIVXWGKSHBUNVGACXMMFTMHMSLOBEKFUTNEQPSYBMSBXUVGJQAGCOOLZQIHQVKYQAUXIJIZAIXGANDWQRDTTDMXCSGJOPHEBRGRQWPUKLDIETOBCHMJFUMXF");

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
    msg.setTimeStamp(0.256593027671);
    msg.setSource(11986U);
    msg.setSourceEntity(221U);
    msg.setDestination(51361U);
    msg.setDestinationEntity(179U);
    msg.target.assign("ELBZKIFCWTRZIOSLXKWXRXPZPMRDLUSSOOQLXCBBBDCNYMBFUUZVJTWEHGOQXENHUCOPKFVOZPDWHKOKAKACXIJVAENEQUFWKWMSDGTPLCPFMIWKCDTNTNHXHUJURVTMBBPLDDBEGAORGGIYZCJPQGFBAYHJMNYJWLQYC");
    msg.max_speed = 0.865731698104;
    msg.speed_units = 83U;
    msg.lat = 0.199487914489;
    msg.lon = 0.0753011224829;
    msg.z = 0.917967321232;
    msg.z_units = 252U;
    msg.custom.assign("HYIJPSNSRDEGWANKPYFADUUJBTNUAHHWOGLSJUQLVTTRBRFCZGRVZVYBORKQQEITXHOIMVHFCBEXPLQRSIYBMEWKJTOP");

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
    msg.setTimeStamp(0.368287351933);
    msg.setSource(43462U);
    msg.setSourceEntity(179U);
    msg.setDestination(3584U);
    msg.setDestinationEntity(223U);
    msg.target.assign("ZFUSWPUMFTMHLNRBXIWBZYOOPQZKEZHPXJIIJDYAAAYWMVDBKSLASLKJTCCOQDEOYJTAVSRNFOUXXVWMXEWAPWCIGPGKNBTJLYTULAKALCWCRIFDEZXIUROEQRBSHOEKVNCVARXIDSEMNBVRFKMAGUSQKOGPIXLFQBPDYCFZHHBDPPHQNGEZXJXVMNRBKLUMTDTUJCOGY");
    msg.max_speed = 0.329577363847;
    msg.speed_units = 144U;
    msg.lat = 0.521164327825;
    msg.lon = 0.207029816661;
    msg.z = 0.0800144691527;
    msg.z_units = 235U;
    msg.custom.assign("WOCAWUCFRSPHTLCYUPUXDBTBDJGJOSAVKNCOWROCJENMQCMJQVUASMTDMZVLGRXNKPQDUHLNXVRPOFYMAEUWJGLBRAIHPVUKGQWNSIQDZGSJUBAVQHKQYTRZAETXRXNAGLFDAYXIWXDBHIKOHWJMFGEMZGRWNNBHKSJLTEOYSMQPICFISCWELPXKFYQ");

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
    msg.setTimeStamp(0.447917748738);
    msg.setSource(40754U);
    msg.setSourceEntity(163U);
    msg.setDestination(8936U);
    msg.setDestinationEntity(222U);
    msg.timeout = 16868U;
    msg.lat = 0.336919007121;
    msg.lon = 0.627557750873;
    msg.speed = 0.286533817972;
    msg.speed_units = 100U;
    msg.custom.assign("NKHEJRWHFMZYUNTJRUUQT");

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
    msg.setTimeStamp(0.517167943302);
    msg.setSource(31446U);
    msg.setSourceEntity(31U);
    msg.setDestination(27596U);
    msg.setDestinationEntity(37U);
    msg.timeout = 64156U;
    msg.lat = 0.607234037171;
    msg.lon = 0.630929811805;
    msg.speed = 0.231594648464;
    msg.speed_units = 193U;
    msg.custom.assign("NCIGXKKRHGUIOJOUWARDMLTFHUBNXGFUZPOAJKUCVQMKSRNQIUMIHJVGHARVSQSHYEFTXVAGGRVIOANTSFWAVJOUQLIRNYLMUEDTDJVJCNISRACHGBZXIEQOSMRHLDTBBPLTYFGTLNXYC");

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
    msg.setTimeStamp(0.947534978604);
    msg.setSource(16608U);
    msg.setSourceEntity(205U);
    msg.setDestination(17381U);
    msg.setDestinationEntity(198U);
    msg.timeout = 12157U;
    msg.lat = 0.215855646636;
    msg.lon = 0.194346747408;
    msg.speed = 0.630225463971;
    msg.speed_units = 238U;
    msg.custom.assign("XCQUKKXQVSVJIXNVEWFTRNAFFVNZPQILOKKTKOMASHGRRUOWJKWNTKYXXSLJZUBYPIAZXSYMRSVCZGCPEVHPVWKPDYDVAYRHCLTMUWIGBAWWXOMZOYTPDMMVKMQBCRQXGFCXGWBZHMEILNCKPRNEFETDLFATFIWPLQHFEZZYHLQCEMMUCUYZPOJEOUJRNQSEHRHJQSP");

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
    msg.setTimeStamp(0.4844802547);
    msg.setSource(37700U);
    msg.setSourceEntity(63U);
    msg.setDestination(13378U);
    msg.setDestinationEntity(29U);
    msg.lat = 0.252645711762;
    msg.lon = 0.560919665557;
    msg.z = 0.85447585469;
    msg.z_units = 88U;
    msg.radius = 0.791804904381;
    msg.duration = 31848U;
    msg.speed = 0.735158510179;
    msg.speed_units = 56U;
    msg.popup_period = 5233U;
    msg.popup_duration = 18903U;
    msg.flags = 213U;
    msg.custom.assign("EXMCBPULLESRPXJYDSFJOTGXVNQPRGBMSVKUZMJOZZK");

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
    msg.setTimeStamp(0.23305487778);
    msg.setSource(6650U);
    msg.setSourceEntity(185U);
    msg.setDestination(11855U);
    msg.setDestinationEntity(63U);
    msg.lat = 0.0691432845856;
    msg.lon = 0.278750334098;
    msg.z = 0.2985367328;
    msg.z_units = 125U;
    msg.radius = 0.49447886505;
    msg.duration = 6776U;
    msg.speed = 0.595394979763;
    msg.speed_units = 153U;
    msg.popup_period = 15756U;
    msg.popup_duration = 6001U;
    msg.flags = 248U;
    msg.custom.assign("JAQKDAMHFXQHKWZFYORERJXSLJOCULDCXRQUNSFTRUFOMAXCSNEPJRUZFFJGUVWIJTKNYRBZNPXSLLIPXWCFAOBMGJNIFWMVHEHMKNPKIVTYGBTJYOWBUPPWBRLMOB");

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
    msg.setTimeStamp(0.142507020139);
    msg.setSource(25126U);
    msg.setSourceEntity(221U);
    msg.setDestination(11337U);
    msg.setDestinationEntity(182U);
    msg.lat = 0.591118034924;
    msg.lon = 0.587523760442;
    msg.z = 0.450097581865;
    msg.z_units = 65U;
    msg.radius = 0.0442105663354;
    msg.duration = 31384U;
    msg.speed = 0.96892125441;
    msg.speed_units = 191U;
    msg.popup_period = 13696U;
    msg.popup_duration = 31691U;
    msg.flags = 88U;
    msg.custom.assign("RWSFDXQXGHRINOEJJGNOEOXWZZMXTKJBRLAGXXNHETKNUPZCBCUFEOFRQVTAAFSVLJFRUMOQHHYMBSKTOGVIHEAPLZKJHAYLDMSZJDYJQX");

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
    msg.setTimeStamp(0.517830699461);
    msg.setSource(27169U);
    msg.setSourceEntity(221U);
    msg.setDestination(57963U);
    msg.setDestinationEntity(181U);
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("BUGAKSBWOQIIXANRQJZIZURXTOSVGJVOIOTBISKOZHVAKZCWGXRMRJUWNIHZECKMPDDLYHTZJBQAQYWBTAVPLCCZPRYISVCNJKBJSEYDTBHPOAXDRGUMMHEQDFXNSMNPILRFHZTYNGBNPCGRKGYEWJHDECFFFFPPEJBWKLLGZXTDFPMPROCIAEWJLUXSZFQYXOHTOORQTLXTFYHYALCNQCNLEBXJUVSLMWWSDQGWGVMKYIEFDN");
    IMC::Drop tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeout = 64328U;
    tmp_tmp_msg_0_0.lat = 0.128508258476;
    tmp_tmp_msg_0_0.lon = 0.26069706346;
    tmp_tmp_msg_0_0.z = 0.700272050557;
    tmp_tmp_msg_0_0.z_units = 124U;
    tmp_tmp_msg_0_0.speed = 0.42943667415;
    tmp_tmp_msg_0_0.speed_units = 254U;
    tmp_tmp_msg_0_0.custom.assign("FHDFTPODXXXDAZPQEFIYTFCMIGLRKYVVXWLLGXWCEGYHPAASUQUKFYKYDDXLHAGAEZCYVVEFUJEMSQRUIQWJVNERQKOHUBSSMBECZNSSFZSUHKJXMBXNXVLGALCTZRIPKPBPJCYMCDYWVNJIVHUBLNQTTDKOQNAVNWNPVSOCGGPAIMFRDZWOWIREBOBXOZHODJORYPATJMGTHQLITQIBLIHDJEFGRAQWGF");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::AngularVelocity tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.time = 0.483792518385;
    tmp_tmp_msg_0_1.x = 0.918345571537;
    tmp_tmp_msg_0_1.y = 0.506941696397;
    tmp_tmp_msg_0_1.z = 0.309159404435;
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
    msg.setTimeStamp(0.56222731399);
    msg.setSource(60566U);
    msg.setSourceEntity(187U);
    msg.setDestination(1298U);
    msg.setDestinationEntity(82U);
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("WLVWHMIOWPMIYGGOSFKXURSJJFLSTKVESNQWKZBBUEOMACKNHXFEJPFLGFFRWVLONDIUJTCZ");
    IMC::FollowPath tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeout = 29625U;
    tmp_tmp_msg_0_0.lat = 0.787091112154;
    tmp_tmp_msg_0_0.lon = 0.426393138484;
    tmp_tmp_msg_0_0.z = 0.408717801157;
    tmp_tmp_msg_0_0.z_units = 80U;
    tmp_tmp_msg_0_0.speed = 0.67631525908;
    tmp_tmp_msg_0_0.speed_units = 221U;
    IMC::PathPoint tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.x = 0.753139456709;
    tmp_tmp_tmp_msg_0_0_0.y = 0.277759150032;
    tmp_tmp_tmp_msg_0_0_0.z = 0.232531399451;
    tmp_tmp_msg_0_0.points.push_back(tmp_tmp_tmp_msg_0_0_0);
    tmp_tmp_msg_0_0.custom.assign("OKZEVKASSWDZMMCRQITOILLPSNMJZEXFGHWEMVYEUFBHTVWLEXGNQUKXRGIRJCZCDDIULGBEKCDGNYVBUOJAOMFDDVTNVTKXVSKHKYXNDAOOBWQJTTGWFLONCCPQWSPHIFSW");
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
    msg.setTimeStamp(0.0608126169639);
    msg.setSource(23045U);
    msg.setSourceEntity(102U);
    msg.setDestination(29119U);
    msg.setDestinationEntity(119U);
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("DYFHESIXZWBUQTCQMCOPRGKBVTODNAPAVFWSGEGZRATSKMSONWMNLTTMN");
    IMC::RowsCoverage tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.367723205352;
    tmp_tmp_msg_0_0.lon = 0.389703326341;
    tmp_tmp_msg_0_0.z = 0.252565262079;
    tmp_tmp_msg_0_0.z_units = 23U;
    tmp_tmp_msg_0_0.speed = 0.351907276071;
    tmp_tmp_msg_0_0.speed_units = 228U;
    tmp_tmp_msg_0_0.bearing = 0.0458135962954;
    tmp_tmp_msg_0_0.cross_angle = 0.16576007855;
    tmp_tmp_msg_0_0.width = 0.640460277622;
    tmp_tmp_msg_0_0.length = 0.402465161627;
    tmp_tmp_msg_0_0.coff = 49U;
    tmp_tmp_msg_0_0.angaperture = 0.744136539235;
    tmp_tmp_msg_0_0.range = 38206U;
    tmp_tmp_msg_0_0.overlap = 249U;
    tmp_tmp_msg_0_0.flags = 198U;
    tmp_tmp_msg_0_0.custom.assign("CGTOFXGPRRPOMQSRDMFIWBVUSMTUNMSXLTWWDYQYBHPFDRVJQHXZVEJCIIDSHEDCZLKCBLPFRSBKLLCZONHEKJPUEDYVDNYQOTAINQEDCWGZKXPLGEKBYFCWNISYRIIZDJHANMQNVURXOYOHAEVJSIATUGRKFZZGTFVHEXWMSGNOAPPAQHJRUZKTOTQHNAYLPVWBBICGUAXOLSFKXJKWMYAQWXLZMZMFVEBEGUUDMIHJGTOBP");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.169293707806);
    msg.setSource(61601U);
    msg.setSourceEntity(45U);
    msg.setDestination(35766U);
    msg.setDestinationEntity(32U);
    msg.timeout = 61968U;
    msg.lat = 0.871170778091;
    msg.lon = 0.310397698729;
    msg.z = 0.780730311127;
    msg.z_units = 141U;
    msg.speed = 0.320371281109;
    msg.speed_units = 212U;
    msg.bearing = 0.809681977442;
    msg.width = 0.0764947165838;
    msg.direction = 224U;
    msg.custom.assign("YRJHIRTNXMTNQLRKIAKGPMEADTNUZQWIFPQOUSYZKBOJKKAGUMBIRWJDYFASJYNNEALXEQXPXGIH");

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
    msg.setTimeStamp(0.00269156192202);
    msg.setSource(4972U);
    msg.setSourceEntity(172U);
    msg.setDestination(47108U);
    msg.setDestinationEntity(24U);
    msg.timeout = 21346U;
    msg.lat = 0.526490760728;
    msg.lon = 0.697741350074;
    msg.z = 0.140393008846;
    msg.z_units = 195U;
    msg.speed = 0.501956330146;
    msg.speed_units = 65U;
    msg.bearing = 0.385134736699;
    msg.width = 0.0563024905148;
    msg.direction = 151U;
    msg.custom.assign("CLROMRLPCMKTSSINVXDATQCHIXVWPVWPUYXNMVTUHQQBBOTMVWREAASLEDDDFEPYBFGPKHXMVMUFEVNRTOJQXNRUIAUWTCHBTCDOMWIWMGWLIFEJWYSHIJKBQYHJACKQ");

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
    msg.setTimeStamp(0.669292761);
    msg.setSource(38397U);
    msg.setSourceEntity(51U);
    msg.setDestination(34815U);
    msg.setDestinationEntity(79U);
    msg.timeout = 54477U;
    msg.lat = 0.00164677395976;
    msg.lon = 0.544580923292;
    msg.z = 0.26714537289;
    msg.z_units = 249U;
    msg.speed = 0.42692745365;
    msg.speed_units = 127U;
    msg.bearing = 0.851918932329;
    msg.width = 0.273931088177;
    msg.direction = 76U;
    msg.custom.assign("LDZTYWTOBRZLWEERJVI");

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
    msg.setTimeStamp(0.474481718552);
    msg.setSource(56308U);
    msg.setSourceEntity(188U);
    msg.setDestination(23745U);
    msg.setDestinationEntity(164U);
    msg.op_mode = 250U;
    msg.error_count = 24U;
    msg.error_ents.assign("WCVNRLOMLMWXDJGPOAGNMFHOOJWEKLVKFAPOJEAHNLNSMCQITYHVRRUEXRDRBXPXVMVEVYFVRNCSOPFIXSUALXGPHXHCQPQIEYWMFKKZWAMTTQCTLBGLKTTSZWBMJYMCDOJIBYSLINHDDMZXLBARZGQBDWNDGSGKJYTJOFIZLGZFPRJFCWDHAVPTHEHIWBUAUWESZIYNZRQTEQUBKVKKCPNTZAURBDZGQDYQFGUAJIFIUYE");
    msg.maneuver_type = 26018U;
    msg.maneuver_stime = 0.977398524546;
    msg.maneuver_eta = 63057U;
    msg.control_loops = 1098453482U;
    msg.flags = 149U;
    msg.last_error.assign("SNSHRMFLONZKKHCYNXFFULFRFBVOVVCPVKMECTWHNDYPWLKDZYGJO");
    msg.last_error_time = 0.130171556209;

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
    msg.setTimeStamp(0.51391855196);
    msg.setSource(58055U);
    msg.setSourceEntity(206U);
    msg.setDestination(51418U);
    msg.setDestinationEntity(142U);
    msg.op_mode = 248U;
    msg.error_count = 211U;
    msg.error_ents.assign("BDFMLXBSYUNYSNCAZJJKAQWSHULZEMBCYFRETOZBIMBXTPUVTVDTEFBUZDHRGQHYQXNAPPNOGOYEPZKGAXVQMMZHLNZQLSLTCOHIVGIXSUZCFDTKLLLIWRPXCAJHLYIDOPLBVJCKFWJRGDGNH");
    msg.maneuver_type = 2403U;
    msg.maneuver_stime = 0.470526239687;
    msg.maneuver_eta = 38862U;
    msg.control_loops = 584739721U;
    msg.flags = 233U;
    msg.last_error.assign("NRNKMIYGOXUMBNPJHRVWZRVVDKXDHFWLMUT");
    msg.last_error_time = 0.946111160708;

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
    msg.setTimeStamp(0.0629972294543);
    msg.setSource(35416U);
    msg.setSourceEntity(166U);
    msg.setDestination(14942U);
    msg.setDestinationEntity(250U);
    msg.op_mode = 36U;
    msg.error_count = 170U;
    msg.error_ents.assign("WCEGLMEJNPSROJNIOABEFESLUBVABYYSFMYGTHOSOZQKRBIGWRDAOUINBDZQCRZTQUOIVMWGVXVPIPCTNDSMODKBPHTEQTMCUJTPKYKBUGABLSZZRJNVKDFPKDGNXMMWVLHUNPFOESDHPDYRWBGLVWJKAHWGQCPABAQRVGDTFUVNELFIIFPIXEJMGWNXCF");
    msg.maneuver_type = 13197U;
    msg.maneuver_stime = 0.561728011645;
    msg.maneuver_eta = 15218U;
    msg.control_loops = 3934120031U;
    msg.flags = 119U;
    msg.last_error.assign("ZYGWJGXNBJXSTRZHJPEGVZAVGNUOTCFAEXFCZZYPSKZIBOKHDINURAVQTPMYV");
    msg.last_error_time = 0.851934069127;

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
    msg.setTimeStamp(0.800140708412);
    msg.setSource(38438U);
    msg.setSourceEntity(218U);
    msg.setDestination(5914U);
    msg.setDestinationEntity(154U);
    msg.type = 131U;
    msg.request_id = 51627U;
    msg.command = 208U;
    IMC::Goto tmp_msg_0;
    tmp_msg_0.timeout = 18420U;
    tmp_msg_0.lat = 0.758195088583;
    tmp_msg_0.lon = 0.56799192742;
    tmp_msg_0.z = 0.770352086591;
    tmp_msg_0.z_units = 121U;
    tmp_msg_0.speed = 0.7369634578;
    tmp_msg_0.speed_units = 162U;
    tmp_msg_0.roll = 0.695503522417;
    tmp_msg_0.pitch = 0.634701131915;
    tmp_msg_0.yaw = 0.75502033206;
    tmp_msg_0.custom.assign("RGOPBFNGXJCBUNQRJUFOZJLQQOSVBZJRHIZAQTCCWVWRFHEWFWAAYAPBUODNUZDYXMGMHBPHGGYTCSBLPIDKOWQL");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 21661U;
    msg.info.assign("YJZCDLYBUJKCI");

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
    msg.setTimeStamp(0.0375489250048);
    msg.setSource(61105U);
    msg.setSourceEntity(99U);
    msg.setDestination(24947U);
    msg.setDestinationEntity(15U);
    msg.type = 51U;
    msg.request_id = 1749U;
    msg.command = 71U;
    IMC::CoverArea tmp_msg_0;
    tmp_msg_0.lat = 0.596968304723;
    tmp_msg_0.lon = 0.137714070708;
    tmp_msg_0.z = 0.193072324785;
    tmp_msg_0.z_units = 127U;
    tmp_msg_0.speed = 0.791993367494;
    tmp_msg_0.speed_units = 106U;
    tmp_msg_0.custom.assign("FHVUYJYVWJBOTCGYNEKWNGSAPWOWFCQYGQOPZDCYCBYRICMBLOPLZTEHZRCOILQQHASBCTBIHQTXUTQRSRYWULUDJSW");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 11406U;
    msg.info.assign("RPRGQMTYHUAUGFCJYQWEHDTTOIPZEGJRAZISANIBPRKXUOBPKHBYEDONLMNXDKN");

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
    msg.setTimeStamp(0.664737367573);
    msg.setSource(30814U);
    msg.setSourceEntity(158U);
    msg.setDestination(23336U);
    msg.setDestinationEntity(243U);
    msg.type = 130U;
    msg.request_id = 7033U;
    msg.command = 74U;
    IMC::VehicleFormation tmp_msg_0;
    tmp_msg_0.lat = 0.723732300586;
    tmp_msg_0.lon = 0.341361675439;
    tmp_msg_0.z = 0.6931516213;
    tmp_msg_0.z_units = 122U;
    tmp_msg_0.speed = 0.240055623932;
    tmp_msg_0.speed_units = 101U;
    IMC::VehicleFormationParticipant tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.vid = 12687U;
    tmp_tmp_msg_0_0.off_x = 0.43547069917;
    tmp_tmp_msg_0_0.off_y = 0.249489340331;
    tmp_tmp_msg_0_0.off_z = 0.639219941672;
    tmp_msg_0.participants.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_time = 0.39227531121;
    tmp_msg_0.custom.assign("DEHMDFUFTQZDRVHEDVBOOOOPGXWYTTJJQVUNEBWJAQNQPBGNIDOUIIRPRBZTNQVJPXD");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 59634U;
    msg.info.assign("YBAUPEAFNYEJFODZDPFXWMUTLOXSPDJKQOMTCMVXXBOTYJGPYAIWCNHZZLKYVXMDROJFQRIWVKGMTNDNWDYOWAUBBICDIODNYAPJHLSXLVZQBSWHVBHRQEYQHRUSRIAEODQLQMPEAEKSJGCRKYUFGLCZKSKBKNCGTTVCJEWTWQRLLPGIPSZUGGAGFUZFQRHBCBTHFOIJHKTQV");

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
    msg.setTimeStamp(0.762811684821);
    msg.setSource(53480U);
    msg.setSourceEntity(126U);
    msg.setDestination(7686U);
    msg.setDestinationEntity(131U);
    msg.command = 157U;
    msg.entities.assign("HKOPYYSNMAYKHVXZCBSSBYQYGEJE");

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
    msg.setTimeStamp(0.26271129696);
    msg.setSource(27144U);
    msg.setSourceEntity(153U);
    msg.setDestination(9901U);
    msg.setDestinationEntity(226U);
    msg.command = 23U;
    msg.entities.assign("DAFMTVQJTFEDJTJLVIWLLHNXFROBUNPJRODQTTVGMAYMYHHQEPCLXEYILMFRAVECBDRODZIZUIOCYMMWDLO");

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
    msg.setTimeStamp(0.606851902885);
    msg.setSource(22029U);
    msg.setSourceEntity(149U);
    msg.setDestination(52697U);
    msg.setDestinationEntity(63U);
    msg.command = 233U;
    msg.entities.assign("BUPZFNJVXWTAIGPVNFEEZTXKVKKHJUSMROGBGPHDIXLONWIUGYYUDRKCZPTAMKARHEBLRDHKAFUAYNXBKYXYFUXRLZKNYSIELZQDOYWTSDCJWADPEAYBOOMDQYAJ");

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
    msg.setTimeStamp(0.239956242724);
    msg.setSource(50345U);
    msg.setSourceEntity(7U);
    msg.setDestination(63950U);
    msg.setDestinationEntity(246U);
    msg.mcount = 97U;
    msg.mnames.assign("BDFOEQBRBGWIJTLMWKBIHTMTNKEXFZZMIOWTRPFUBYVMZENVYMFRVLNMAYWRSETLPPOGSDXWBUSKYWQIOVQKQUXXTMNPUIFJPMBJRL");
    msg.ecount = 58U;
    msg.enames.assign("ANCHNVHZIILBPPGEZVOKKWWFCTKTNUOXWFTYKPFTCZQHLC");
    msg.ccount = 143U;
    msg.cnames.assign("RHOQMNWQIYOYFDMYFNEORSIMCGMPCECSJBTPLXEFAJSJPOKZZTZBUPGKHSXRXRBCUWAJAGAYJAXKJVGVVYBQDLVAKKKOETLHVEKVZZCPSVUHLNCAQMDRFJMELIOQMCNCRUNWWTBTVGDERTWGKHYOOBIFBFBJHYZFVXQZLDCDXJBPMFVZGUQLIMSLPAUMECEKWFDFDBXRIAULUHXPWWIOGNSQWANZRODUHIXZNUIJGPQGXTETDKLSWHNITTPQNH");
    msg.last_error.assign("MHRXSQFTSRMAHDKKAZNXKFFCHDOBGCLTHJPLQYJYZJWCHCNIIHTWNUVXEHEPMPCQSMWONTRZDKCGPYDQXOBPKBEQWOJFYBBHUUFRCMZHYORGFMYGYLMRTOFLATKHLTZNLKZLIQDISUPSJTXVIPGZOUXEBVEEAVNMJUYKVEQJDKUIQLWQEVYGUFSRCSN");
    msg.last_error_time = 0.74825612165;

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
    msg.setTimeStamp(0.741426265729);
    msg.setSource(61064U);
    msg.setSourceEntity(16U);
    msg.setDestination(7262U);
    msg.setDestinationEntity(72U);
    msg.mcount = 189U;
    msg.mnames.assign("YVJPKRVAZQG");
    msg.ecount = 118U;
    msg.enames.assign("VDTONBWKQQSCKPRJPQXCVTDBMAJAFTNEFGRXKLUSNIUUHVTZHQFNQPPIGXHTNWGMJPAESOFBGMJPPQAVHKYIZOVWYXGYUCPNIEACMOVTQGIUPRYSXBXUWJFZKCIZHULERWIBCDFNKYZCIFKTOHYEZMZDSRJAFWLJQDSNLMWLXAGCBDXRZQ");
    msg.ccount = 241U;
    msg.cnames.assign("AHSGFWNEGMHALXXNUXZYQKTQYLPBDMWPFYKEMRDLAURHRIBHGKVWGLMASZMQENKZCUVGJTSSBPTOOHTRODBGZXONRZOJYIBCUCDFARNTHEWPMQNTYOIHVSKBKVMYFUNWJXWCTCWOSHDABEUXVLKRFJIYAEZLMQPESAFIIOUYSGXDVXDFRLOPRHKEDQPJJEUTI");
    msg.last_error.assign("DRVDQENZVPZVFSUMQJUMXHJJIXFIDFZBMRMZCLYVZGBONQSTELCAUKHTQFHHXRBWKKNHRBVILDNMTXWGOYUAGDIUNHPMKZYCCSZUOCRJAFSTRXYLXLCAKAATXGOWZVKICNCASUWHBCDAWXHSIFESMCPZPDOWBJWLGWJBGERNDQBYPPLPYRTTDNOHEGVVXIQIABYNLSVZGRJQEQWSYGRIUTJEJAVGQLTKTEHNKEO");
    msg.last_error_time = 0.432050038612;

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
    msg.setTimeStamp(0.923645914688);
    msg.setSource(57247U);
    msg.setSourceEntity(186U);
    msg.setDestination(46129U);
    msg.setDestinationEntity(113U);
    msg.mcount = 249U;
    msg.mnames.assign("BNGZDOLMDLWCFCCVJOPGDYOXSAOWGFLVTJYVMTDCPHUBQXKGZMXHUITYYRUPXTZZNADFJWUSKHBAXXVSKMBTHRULEGLROEQMUAOJEEDPPDRYNMULDVYBYBHFUWZBTSWVZNSHSERQBPYQKEDPAQIEJCTJPFTGKHRGUCIGXDVIZRWFNOVBTAKUA");
    msg.ecount = 187U;
    msg.enames.assign("KNDJUYFPHIAMKJFBPZUEJSFRIHRXWKHVNTSDWPMMYNPPNZQXDXRQHYKANEMYMVZBOYQKWI");
    msg.ccount = 120U;
    msg.cnames.assign("OJMJUYNJPLHDDYPUWQQGSFIOIEIDEUOALZVLSSCHJKXDSAAMWFBBJKEHRFRCEBZFXVTKZLXMRGNQQKDGTWXAEXXZAQRRBJTTLZITIPNHAOLCVOVJUCHOYWNEHGLAMMGIQUJDPRSSWBMYLBTPFHKABCYXOCPEAPXNHOUVMKSDPZVTRWNEARHHGPCFTKEFIBRULKYWIUQQZNOWWDFYKMEUWDZYFJVICMVUKGFQBGZC");
    msg.last_error.assign("MYESMIIKXYOCRWHLDOHLPCECBIYJJTUBVBFRWQKFANWIQDZQTZMZAVUFADLXRGCMLBBQQWOURXMICXCKZAMRLDGTFJTHOFKNYUJEEOZGOOWGJNZFVUJBRGFBWZUPRPQHXTCJJCJWYTVTPPTYFAAWMYBZQPDNFNHLTLXKNDPUPQUTQSWKZBEDLXHSNGPMNRWAYDUIADKHNSUMYVSKVPCSLGVISVOEAHQBEXRD");
    msg.last_error_time = 0.943417940979;

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
    msg.setTimeStamp(0.92080234779);
    msg.setSource(48653U);
    msg.setSourceEntity(246U);
    msg.setDestination(52423U);
    msg.setDestinationEntity(188U);
    msg.mask = 10U;
    msg.max_depth = 0.329455614278;
    msg.min_altitude = 0.287136431551;
    msg.max_altitude = 0.17812474525;
    msg.min_speed = 0.918361356469;
    msg.max_speed = 0.952663186059;
    msg.max_vrate = 0.0932624433057;
    msg.lat = 0.185785335796;
    msg.lon = 0.715359284961;
    msg.orientation = 0.0381037229687;
    msg.width = 0.174649084024;
    msg.length = 0.110821621563;

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
    msg.setTimeStamp(0.293830270903);
    msg.setSource(27627U);
    msg.setSourceEntity(237U);
    msg.setDestination(47442U);
    msg.setDestinationEntity(110U);
    msg.mask = 26U;
    msg.max_depth = 0.776617989207;
    msg.min_altitude = 0.366746747178;
    msg.max_altitude = 0.462069346602;
    msg.min_speed = 0.110291867308;
    msg.max_speed = 0.606021205263;
    msg.max_vrate = 0.273440604388;
    msg.lat = 0.580345384777;
    msg.lon = 0.762060146079;
    msg.orientation = 0.976960081053;
    msg.width = 0.368053327496;
    msg.length = 0.99487695631;

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
    msg.setTimeStamp(0.180123374757);
    msg.setSource(64210U);
    msg.setSourceEntity(141U);
    msg.setDestination(52378U);
    msg.setDestinationEntity(239U);
    msg.mask = 175U;
    msg.max_depth = 0.873257957088;
    msg.min_altitude = 0.981733381782;
    msg.max_altitude = 0.248706213735;
    msg.min_speed = 0.0353970285764;
    msg.max_speed = 0.286327183846;
    msg.max_vrate = 0.425135063447;
    msg.lat = 0.435592177465;
    msg.lon = 0.237071627974;
    msg.orientation = 0.506186475767;
    msg.width = 0.771305607795;
    msg.length = 0.920257033897;

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
    msg.setTimeStamp(0.18658540557);
    msg.setSource(60918U);
    msg.setSourceEntity(212U);
    msg.setDestination(17990U);
    msg.setDestinationEntity(65U);

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
    msg.setTimeStamp(0.0565561870272);
    msg.setSource(4990U);
    msg.setSourceEntity(115U);
    msg.setDestination(41761U);
    msg.setDestinationEntity(42U);

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
    msg.setTimeStamp(0.363053119556);
    msg.setSource(39269U);
    msg.setSourceEntity(14U);
    msg.setDestination(4793U);
    msg.setDestinationEntity(71U);

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
    msg.setTimeStamp(0.191106027887);
    msg.setSource(62210U);
    msg.setSourceEntity(144U);
    msg.setDestination(63646U);
    msg.setDestinationEntity(202U);
    msg.duration = 25769U;

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
    msg.setTimeStamp(0.652835867418);
    msg.setSource(38675U);
    msg.setSourceEntity(117U);
    msg.setDestination(12841U);
    msg.setDestinationEntity(209U);
    msg.duration = 24509U;

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
    msg.setTimeStamp(0.655981383658);
    msg.setSource(32799U);
    msg.setSourceEntity(94U);
    msg.setDestination(29650U);
    msg.setDestinationEntity(141U);
    msg.duration = 45709U;

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
    msg.setTimeStamp(0.609475268685);
    msg.setSource(10955U);
    msg.setSourceEntity(197U);
    msg.setDestination(40788U);
    msg.setDestinationEntity(192U);
    msg.enable = 181U;
    msg.mask = 1959580114U;
    msg.scope_ref = 3756422222U;

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
    msg.setTimeStamp(0.21205787937);
    msg.setSource(37452U);
    msg.setSourceEntity(165U);
    msg.setDestination(18548U);
    msg.setDestinationEntity(78U);
    msg.enable = 218U;
    msg.mask = 1087420589U;
    msg.scope_ref = 1167574570U;

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
    msg.setTimeStamp(0.973624573539);
    msg.setSource(17390U);
    msg.setSourceEntity(172U);
    msg.setDestination(43974U);
    msg.setDestinationEntity(39U);
    msg.enable = 105U;
    msg.mask = 2255384210U;
    msg.scope_ref = 2360403134U;

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
    msg.setTimeStamp(0.217401178283);
    msg.setSource(437U);
    msg.setSourceEntity(170U);
    msg.setDestination(4195U);
    msg.setDestinationEntity(235U);
    msg.medium = 67U;

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
    msg.setTimeStamp(0.545174679976);
    msg.setSource(46542U);
    msg.setSourceEntity(209U);
    msg.setDestination(9571U);
    msg.setDestinationEntity(47U);
    msg.medium = 133U;

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
    msg.setTimeStamp(0.00434675292843);
    msg.setSource(19603U);
    msg.setSourceEntity(253U);
    msg.setDestination(19672U);
    msg.setDestinationEntity(12U);
    msg.medium = 93U;

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
    msg.setTimeStamp(0.329085452584);
    msg.setSource(63557U);
    msg.setSourceEntity(240U);
    msg.setDestination(34014U);
    msg.setDestinationEntity(89U);
    msg.value = 0.887277577505;
    msg.type = 67U;

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
    msg.setTimeStamp(0.301822005631);
    msg.setSource(44855U);
    msg.setSourceEntity(214U);
    msg.setDestination(51281U);
    msg.setDestinationEntity(43U);
    msg.value = 0.449276355768;
    msg.type = 165U;

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
    msg.setTimeStamp(0.218544934873);
    msg.setSource(22829U);
    msg.setSourceEntity(164U);
    msg.setDestination(15431U);
    msg.setDestinationEntity(244U);
    msg.value = 0.349973964205;
    msg.type = 201U;

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
    msg.setTimeStamp(0.479813996708);
    msg.setSource(43973U);
    msg.setSourceEntity(20U);
    msg.setDestination(54725U);
    msg.setDestinationEntity(20U);
    msg.possimerr = 0.0580990328683;
    msg.converg = 0.957575000199;
    msg.turbulence = 0.54092820372;
    msg.possimmon = 200U;
    msg.commmon = 179U;
    msg.convergmon = 39U;

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
    msg.setTimeStamp(0.158602913243);
    msg.setSource(55543U);
    msg.setSourceEntity(187U);
    msg.setDestination(43486U);
    msg.setDestinationEntity(106U);
    msg.possimerr = 0.407178038605;
    msg.converg = 0.187788453737;
    msg.turbulence = 0.541765579492;
    msg.possimmon = 220U;
    msg.commmon = 53U;
    msg.convergmon = 138U;

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
    msg.setTimeStamp(0.392284295508);
    msg.setSource(12154U);
    msg.setSourceEntity(61U);
    msg.setDestination(45053U);
    msg.setDestinationEntity(43U);
    msg.possimerr = 0.645014942226;
    msg.converg = 0.0512446855983;
    msg.turbulence = 0.979813263015;
    msg.possimmon = 129U;
    msg.commmon = 41U;
    msg.convergmon = 190U;

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
    msg.setTimeStamp(0.476628438311);
    msg.setSource(38658U);
    msg.setSourceEntity(25U);
    msg.setDestination(22931U);
    msg.setDestinationEntity(171U);
    msg.autonomy = 198U;
    msg.mode.assign("YUWZQRLECFNZWTOCHNKDFBUTTTVKTSQGKLPVFACMORIFJDDENJPCNECLESMJNZ");

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
    msg.setTimeStamp(0.0872829641282);
    msg.setSource(26475U);
    msg.setSourceEntity(215U);
    msg.setDestination(37192U);
    msg.setDestinationEntity(248U);
    msg.autonomy = 93U;
    msg.mode.assign("CSKYCHPBITVWSLYHSEIPCCXNZZCYGWQIODKTTZPNHVAEIUDAVZVJFHYQSEUWGEJUGTWVIWHAGUMRRQMJBFPXBIMQGJZROBHDKAPRDJMXFKHPFGITNISFAXNENYROFSSKEVQDGNQQ");

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
    msg.setTimeStamp(0.0531077168427);
    msg.setSource(19080U);
    msg.setSourceEntity(251U);
    msg.setDestination(53598U);
    msg.setDestinationEntity(219U);
    msg.autonomy = 5U;
    msg.mode.assign("FMURIXGCCPABMHIAGDIOFGCZZRZPCCFDYBEWLSQLTOYZOWCWMMUKRCNRVAXZWLQOBQ");

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
    msg.setTimeStamp(0.216176590092);
    msg.setSource(18177U);
    msg.setSourceEntity(171U);
    msg.setDestination(44245U);
    msg.setDestinationEntity(219U);
    msg.type = 230U;
    msg.op = 95U;
    msg.possimerr = 0.742945545339;
    msg.converg = 0.151055492476;
    msg.turbulence = 0.773575419239;
    msg.possimmon = 129U;
    msg.commmon = 20U;
    msg.convergmon = 103U;

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
    msg.setTimeStamp(0.696999911487);
    msg.setSource(45619U);
    msg.setSourceEntity(121U);
    msg.setDestination(50370U);
    msg.setDestinationEntity(215U);
    msg.type = 253U;
    msg.op = 152U;
    msg.possimerr = 0.866949995358;
    msg.converg = 0.144111701632;
    msg.turbulence = 0.868483778064;
    msg.possimmon = 157U;
    msg.commmon = 208U;
    msg.convergmon = 175U;

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
    msg.setTimeStamp(0.420098514538);
    msg.setSource(20368U);
    msg.setSourceEntity(37U);
    msg.setDestination(44992U);
    msg.setDestinationEntity(129U);
    msg.type = 240U;
    msg.op = 206U;
    msg.possimerr = 0.389743674074;
    msg.converg = 0.376977378253;
    msg.turbulence = 0.918244701913;
    msg.possimmon = 28U;
    msg.commmon = 223U;
    msg.convergmon = 163U;

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
    msg.setTimeStamp(0.332020052595);
    msg.setSource(11971U);
    msg.setSourceEntity(196U);
    msg.setDestination(51379U);
    msg.setDestinationEntity(106U);
    msg.op = 193U;
    msg.comm_interface = 132U;
    msg.period = 46391U;
    msg.sys_dst.assign("LIRSOXHVALMYUSUJAYVNZBUMEPNYGBWMHCBRPRTOMSKJCKEJXDCEHVCCYEFMMRYXWJZEAKLALWOINJIGFCIBOQGPPJTXXFODVWTALNHUKRBWBBDHGPRHQSINCAWBKOOJVRWWKUYTEXZAJEHPLKDDQ");

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
    msg.setTimeStamp(0.356598259286);
    msg.setSource(45160U);
    msg.setSourceEntity(83U);
    msg.setDestination(10323U);
    msg.setDestinationEntity(97U);
    msg.op = 100U;
    msg.comm_interface = 197U;
    msg.period = 524U;
    msg.sys_dst.assign("OZPRDGYMNIYZYKAFTGNUTQLXHMJIRWARCXHBQWOMBRLLLBOHOUYDLIFEHQDXCLKVPTUMJZ");

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
    msg.setTimeStamp(0.699831745167);
    msg.setSource(12813U);
    msg.setSourceEntity(179U);
    msg.setDestination(19116U);
    msg.setDestinationEntity(78U);
    msg.op = 180U;
    msg.comm_interface = 152U;
    msg.period = 26045U;
    msg.sys_dst.assign("HVNNAYQGOMYPFITDCICPIYTEKCVSVJMSASXDANFSSXWPPRUKXLJUUEKLIEXGLVOXOGNQFNMOONQNBAIPGGYLBCCBKTSTQHJZMJBCFCGJYEBTUVCMHAHJTJHNOEVIZWO");

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
    msg.setTimeStamp(0.618735378693);
    msg.setSource(44539U);
    msg.setSourceEntity(77U);
    msg.setDestination(45994U);
    msg.setDestinationEntity(134U);
    msg.stime = 3093970076U;
    msg.latitude = 0.543300269474;
    msg.longitude = 0.900694756731;
    msg.altitude = 45666U;
    msg.depth = 1430U;
    msg.heading = 7446U;
    msg.speed = 23848;
    msg.fuel = -85;
    msg.exec_state = 45;
    msg.plan_checksum = 55205U;

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
    msg.setTimeStamp(0.821407824581);
    msg.setSource(46865U);
    msg.setSourceEntity(128U);
    msg.setDestination(27493U);
    msg.setDestinationEntity(32U);
    msg.stime = 3703991640U;
    msg.latitude = 0.629858938106;
    msg.longitude = 0.00401727433761;
    msg.altitude = 7977U;
    msg.depth = 32068U;
    msg.heading = 58577U;
    msg.speed = 23865;
    msg.fuel = -47;
    msg.exec_state = -124;
    msg.plan_checksum = 60094U;

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
    msg.setTimeStamp(0.78235812815);
    msg.setSource(21188U);
    msg.setSourceEntity(213U);
    msg.setDestination(18856U);
    msg.setDestinationEntity(251U);
    msg.stime = 3157375711U;
    msg.latitude = 0.961870753957;
    msg.longitude = 0.552030463205;
    msg.altitude = 34638U;
    msg.depth = 33423U;
    msg.heading = 17525U;
    msg.speed = -14057;
    msg.fuel = 120;
    msg.exec_state = 115;
    msg.plan_checksum = 60404U;

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
    msg.setTimeStamp(0.516091179697);
    msg.setSource(7187U);
    msg.setSourceEntity(177U);
    msg.setDestination(9563U);
    msg.setDestinationEntity(210U);
    msg.req_id = 26331U;
    msg.comm_mean = 135U;
    msg.destination.assign("CYLKBWOULPISOYGYSTMHCQUPWFTWBOIKXLWDUQJUZIYSADQS");
    msg.deadline = 0.832422928651;
    msg.range = 0.964447880389;
    msg.data_mode = 188U;
    IMC::LoggingControl tmp_msg_0;
    tmp_msg_0.op = 93U;
    tmp_msg_0.name.assign("UUWSXJXSTQZJHTVRTKNINVMBOCZLTWCTNPTVCDLLCFOBVOHGQXNRRFAKANHMXZQAIKYXUCWHCOOZDMANTJFLAKFIEGMEUDPMEPJEUAUECBEVLGJLKEATHLJVTMUSXOLHYYBNRGFXIODVQUKRNYRMQYQYSMS");
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("QVRGUDFQXTIUOCTORWAVLWCUVHRREYSHMUGSCXBLDKLXTMXTBHJAZUMXOAVGPEJXWTPYDCJPUPZYNYYMRGHWLYZVKMDCQRPNQYFBRMKCGECUXNHEIHYYLBOZZSFPIKZMMAJFBQZDNEJTSVM");
    const char tmp_msg_1[] = {42, 107, 113, 5, 77, -9, -118, 37, -89, -115, -7, -102, -77, -49, -30, 28, -111, -69, 42, -36, 87, -74, -46, 75, -43, 11, -25, -47, -64, -13, 53, 78, -76, 25, 1, -61, -102, -37, -93, -8, 109, 108, 41, 100, 22, 57, -119, -125, 124, 102, -11, -45, 115, 46, -26, 113, 11, 92, 89, 28, -83, -88, -127, -49, 89, 108, 43, 116, -13, 108, -5, -7, -36, 27, -3, 23, 120, -53, 84, -112, -87, -107, -30, -89, -19, 86, -74, -40, 95, 100, 56, 96, 39, 83, 99, -12, -24, -46, 9, 44, -8, 55, -17, -15, 50, 75, 11, 90, 32, -111, -27, -62, -34, -28, 16, -88, -24, -58, -102, 59, -117, 66, -97, 38, 119, -76, 5, -72, 104, -113, -128, -107, -105, 75, -58, -15, -38, 72, -59, 31, -126, -109, 58, -83, 112, 5, 104, -93, 26, 65, 67, -17, -74, 2, -118, 44, -7, 110, 63, 7, -76, -37, 59, -54, -38, 38, -103, 7, 66, -29};
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
    msg.setTimeStamp(0.783768091027);
    msg.setSource(55993U);
    msg.setSourceEntity(69U);
    msg.setDestination(12014U);
    msg.setDestinationEntity(40U);
    msg.req_id = 46072U;
    msg.comm_mean = 211U;
    msg.destination.assign("QAGAHFMYUTAJNCAPMSPGETHJKOTYDWSYWUUNYHDDOZPXMUDZAIYWGIUQLDDVKYOBOFJENNYTHLQJAIUBWFAMLJDUPJEVHIHCOFILNURQSJXRMFAERETIZHKYPWVQIBMBSRGRVSQFXXDPVONTXUIYBVXIOEZLKXWQMKQDKWZAPZCSB");
    msg.deadline = 0.379512880477;
    msg.range = 0.346293319224;
    msg.data_mode = 223U;
    IMC::VehicleCommand tmp_msg_0;
    tmp_msg_0.type = 40U;
    tmp_msg_0.request_id = 53473U;
    tmp_msg_0.command = 164U;
    IMC::VehicleFormation tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.430270610653;
    tmp_tmp_msg_0_0.lon = 0.877662854474;
    tmp_tmp_msg_0_0.z = 0.967737032673;
    tmp_tmp_msg_0_0.z_units = 104U;
    tmp_tmp_msg_0_0.speed = 0.376755270122;
    tmp_tmp_msg_0_0.speed_units = 115U;
    tmp_tmp_msg_0_0.start_time = 0.092451091541;
    tmp_tmp_msg_0_0.custom.assign("PTSKJKCNLROEKAGIWHYRRDVTRVKXLDHEXEWIBTALBYQCIJBVXQYJPMFUNVKPSCWXXRRHZMLANBVCKQNNVOAZJGTILXLBHBCNQMUWSRUSGCPPVZQJMBZAPAANVPDMNYTXWBHLSGDPHUUYUMQMZHDWJCYEFOQFUAMDKTROLDNILWACFKQYGEBFHFOHKIQHDXRIFQGOUUFZUEZWVJSXCSDNSRTWCFJSFGOITOVIGEYOZPSET");
    tmp_msg_0.maneuver.set(tmp_tmp_msg_0_0);
    tmp_msg_0.calib_time = 19016U;
    tmp_msg_0.info.assign("YEXPQTNLQAZLINOKNTPZZMKCUNHGITXKDXOMPMRGBMIWOJRQJXRTQHWBEPMVEKWDUZEFEBVPOPHSTIITFEKSGAVAHULCVEPSYFMARJRLZSYNFBWPTVHNZYYUVIXIGKGGBDMDJPUYVKBGCQACWQVSBIWSOEJOHOQLRZCLUCDFXKRMXJDOHLCWIHVAYDSM");
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("GBKVJWNYAHMUNLTYFPPRZNEQFISQR");
    const char tmp_msg_1[] = {88, 30, 1, -49, 108, 121, -88, -26, -92, -114, -115, -79, 29, 36, 116, 37, -104, -41, -17, -52, -50, 112, 39, -99, -81, -128, -116, 67, 32, -82, -39, 49, 27, -65, 79, -33, -89, 83, -5, -121, 5, -53, -22, 44, -46, -18, 52, -9, 10, -56, -75, 73, -72, 91, -89, 64, 79, 42, -61};
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
    msg.setTimeStamp(0.814355833505);
    msg.setSource(60753U);
    msg.setSourceEntity(219U);
    msg.setDestination(46330U);
    msg.setDestinationEntity(141U);
    msg.req_id = 54558U;
    msg.comm_mean = 108U;
    msg.destination.assign("PWDUDGZANZDBBVQJRLUPXAPIIZLBOIWCCOAJGSSIAKSLHNHPUZDHWMKMOJPHTKRUHDIMTLTEYKLAUGEFMQQDWNJKSOGCMZFUIKUMCELGNTQEYLZJVTJYXVETKMQFEPHDWXWSFGEIZNQRXFAQTDTPZXOYRVCMCWORYRBLZBVGBXFVOXPIQQAHOVOEXOLMANBYPVHQHNGWKWKNDYXVVZJESIWBTRFDRRBXJSFRSNIHYPUCMJASCNSUGBUYFCYEA");
    msg.deadline = 0.552972382541;
    msg.range = 0.282183475421;
    msg.data_mode = 0U;
    IMC::UsblFix tmp_msg_0;
    tmp_msg_0.target = 21947U;
    tmp_msg_0.lat = 0.685611564641;
    tmp_msg_0.lon = 0.68603477132;
    tmp_msg_0.z_units = 81U;
    tmp_msg_0.z = 0.365434685261;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("VUHKRITXZQDNCCKESGJGWEVEWUTJBNUNZZFOOKTEKOIBRNBZGXVCJYUNVPZHCZIGJSDVBGXLWMYZFLGAIPKMRNXATCZDBFPYKTAYPMJYDYVVPVGQPJLARRNSFWAHJKNXTFYTMQSMTLOQLBQEFWDCUW");
    const char tmp_msg_1[] = {-86, 27, 22, -110, -34, -59, 28, -3, -106, -119, 97, -100, -96, 59, -16, 58, -124, -128, -112, 115, -93, -66, 40, -5, -48, 35, 100, -123, -120, -30, -6, 57, 3, 91, -43, -79, -48, -5, -73, -124, -101, 88, 94, 84, -112, 97, 21, 125, -18, 94, -29, -29, -100, 125, 67, -59, 103, -44, -14, 92, -50, 53, -116, 126, 22, 36, 102, -69, -7, 9, -31, 106, -4, 77, -20, -81, -15, -105, -69, 64, -1, -111, -22, -126, -106, -92, -82, -1, 62, -12, -26, -118};
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
    msg.setTimeStamp(0.396562502948);
    msg.setSource(24136U);
    msg.setSourceEntity(60U);
    msg.setDestination(60161U);
    msg.setDestinationEntity(77U);
    msg.req_id = 11627U;
    msg.status = 138U;
    msg.range = 0.744951582652;
    msg.info.assign("SPAFGVUFNDAEGTYTYTHKSOSLMRNBWBQZIXNWVBCQTSHVQYNXIFHKTNJGDLYCPTURUMSOREPLQJLHKJHDDEPYFVXCKMFFMOYDSYUAHIYZXOUBZRDFJZXEEAOETIXPIYGWRSWRNJXALUWPKCVUMRLOMFVTJLPRCMUNXGXKEBLAWIGDFCOLQOHGMGQTVKOKCEWSQAMOZHLAZKBZQHITJRWHEGISQUJIMVDCGNPWJDWEZVUBJVBPNZ");

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
    msg.setTimeStamp(0.509327321752);
    msg.setSource(42407U);
    msg.setSourceEntity(177U);
    msg.setDestination(29659U);
    msg.setDestinationEntity(226U);
    msg.req_id = 1113U;
    msg.status = 120U;
    msg.range = 0.747327468155;
    msg.info.assign("VFWGTWIXBDFNIFQNMRWDHEEJLDWNKBORRZHTHAZNMNANRRVFYONJWLVMKUCGEFDHPLIMABSSRQOEFSLUSACBMZUXICHEPYVXTYZMHVVPEKXBRAYYOLOFVJSFABSY");

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
    msg.setTimeStamp(0.45230060875);
    msg.setSource(1695U);
    msg.setSourceEntity(2U);
    msg.setDestination(6009U);
    msg.setDestinationEntity(194U);
    msg.req_id = 25772U;
    msg.status = 197U;
    msg.range = 0.209567989062;
    msg.info.assign("DZBOWSYJFCVMPJOZDQNHPWFANRNNULGMBFPHILMDRVTQLSQOSOHULGTXVODGHKEUGMAHRYAWIKWRNXWPIGBXYOAGOAUVFSWEZQQKVEJERTCBVERNAFIANTASBGHLQKYUBPQXJLUYRWDSYPUTQRRIEJXHPFWCDKHBNMLCLJEIXJUUJCZZYQ");

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
    msg.setTimeStamp(0.389361854665);
    msg.setSource(16653U);
    msg.setSourceEntity(227U);
    msg.setDestination(2561U);
    msg.setDestinationEntity(221U);
    msg.req_id = 60090U;
    msg.destination.assign("QODPGAVZRJPIZINKQPJFQZNKNVUIDCIHFEZPELPQGXUQXUETVJAHJOYCYHIBGT");
    msg.timeout = 0.0523587072111;
    msg.sms_text.assign("EPGNHCHJHCXIZOSSNDGZDFFMHVFZILXBQUQVRNQMWWPPLYDVKJZICTBZHMWFKHGEYVNOFJDMLWSOFRTTXBXIXRHAANVEJEEUTYIAPBLRUUKIMFZVCQUKBMVTEFEPJLGDKMZSSVNJCSOPYOKTRJZLZXDOCMUXLQCEGUVTBGVCTEJCACPANTXUSYAANHXNSHJKFKQDLSWQOITGDREYYZIRWLBRYSRQIAAGPUKBYWOQKOBWMARQWDJPL");

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
    msg.setTimeStamp(0.21369667244);
    msg.setSource(5428U);
    msg.setSourceEntity(160U);
    msg.setDestination(40821U);
    msg.setDestinationEntity(104U);
    msg.req_id = 60827U;
    msg.destination.assign("CTSTVWPCRBSUOWLABTESLJOTFYNERV");
    msg.timeout = 0.567229700523;
    msg.sms_text.assign("EEUYUCJUYZOSFDMNHZLBOKZENUIUTNLXRCRWCGRZQPMCCONBAAQMXGIHDWJEVWIJXI");

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
    msg.setTimeStamp(0.81007840985);
    msg.setSource(878U);
    msg.setSourceEntity(115U);
    msg.setDestination(42969U);
    msg.setDestinationEntity(223U);
    msg.req_id = 37249U;
    msg.destination.assign("GOXNZOUGTHVDQLUGDXRAGOZTXEPTDWFHDYQOOGCHTXASAXLKPMUUHHSWWNJUECFJBGNNMVPFDTGMRMQVSBKBASZDASJCCWYIFTOIWROHLRACQPDMKMYCYIEKHCCFEVBLJHJTCX");
    msg.timeout = 0.179449033229;
    msg.sms_text.assign("ZCDGNKPVETKUMHXYNWJWQFQAWJZHHTSQZZJALEUDTBYPBNOXO");

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
    msg.setTimeStamp(0.323366917077);
    msg.setSource(8983U);
    msg.setSourceEntity(10U);
    msg.setDestination(64181U);
    msg.setDestinationEntity(162U);
    msg.req_id = 22940U;
    msg.status = 127U;
    msg.info.assign("BKKFUYROLBHJVQPVPXMNNCVWKGBOMTGJZQEQFEIBPZIFVFDAVKNFWTQYELDRPRWKUSAYMKEVMIGLMXLHZAVPNLMUWCQYASZUZKIHRDTQXTKRYOJWCILVNXWEKFCTJOSZOUMUJOVPDELALYHHQICWGJORSCGDDDTHTHFHPFXARRUGPDNOAPHBIGGSDJXBONEGYLZWJZXRINUSPJBGCYTSYAOHNBMEYRKJXSQ");

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
    msg.setTimeStamp(0.160675730343);
    msg.setSource(17803U);
    msg.setSourceEntity(179U);
    msg.setDestination(9146U);
    msg.setDestinationEntity(204U);
    msg.req_id = 61946U;
    msg.status = 123U;
    msg.info.assign("BUXEYWVYPQLNRJWEQNMDDXSPICJRSZRCAVWRVPBJUIJGEISNVFRQCLDTSEKSGGZKIHXQBIOBZPMQLQXDGTOIDDTUTBINTYLVWRWPHCLGFKFETKJAZZXGYPYRWEHSDEMBEQNFRFUGOQKCAAVL");

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
    msg.setTimeStamp(0.160869257956);
    msg.setSource(2751U);
    msg.setSourceEntity(240U);
    msg.setDestination(60744U);
    msg.setDestinationEntity(129U);
    msg.req_id = 45304U;
    msg.status = 146U;
    msg.info.assign("NEZQRURMVIFAICSCPWZZKENYMUQBIATGHRDLQCOAWTBCKLWJP");

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
    msg.setTimeStamp(0.301110067871);
    msg.setSource(14625U);
    msg.setSourceEntity(106U);
    msg.setDestination(61068U);
    msg.setDestinationEntity(175U);
    msg.state = 201U;

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
    msg.setTimeStamp(0.845587058871);
    msg.setSource(37161U);
    msg.setSourceEntity(118U);
    msg.setDestination(65235U);
    msg.setDestinationEntity(22U);
    msg.state = 81U;

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
    msg.setTimeStamp(0.669623429691);
    msg.setSource(44062U);
    msg.setSourceEntity(235U);
    msg.setDestination(64846U);
    msg.setDestinationEntity(157U);
    msg.state = 77U;

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
    msg.setTimeStamp(0.787597187053);
    msg.setSource(13056U);
    msg.setSourceEntity(188U);
    msg.setDestination(15795U);
    msg.setDestinationEntity(24U);
    msg.state = 43U;

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
    msg.setTimeStamp(0.192438815274);
    msg.setSource(32299U);
    msg.setSourceEntity(39U);
    msg.setDestination(23923U);
    msg.setDestinationEntity(135U);
    msg.state = 101U;

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
    msg.setTimeStamp(0.101961944381);
    msg.setSource(15593U);
    msg.setSourceEntity(112U);
    msg.setDestination(12063U);
    msg.setDestinationEntity(107U);
    msg.state = 35U;

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
    msg.setTimeStamp(0.668511834339);
    msg.setSource(48437U);
    msg.setSourceEntity(230U);
    msg.setDestination(47396U);
    msg.setDestinationEntity(23U);
    msg.req_id = 885U;
    msg.destination.assign("PJXLARZZQPLSCNBXRMCJDUBQUKCDHSGRKZHZOEKFFGVOICHB");
    msg.timeout = 0.806113357904;
    IMC::Throttle tmp_msg_0;
    tmp_msg_0.value = 0.0515171802624;
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
    msg.setTimeStamp(0.653925727454);
    msg.setSource(32611U);
    msg.setSourceEntity(223U);
    msg.setDestination(57641U);
    msg.setDestinationEntity(151U);
    msg.req_id = 63194U;
    msg.destination.assign("CPVZGMFUAKLJIXTXADAAEZYCFDDYMZQZKXWHYTFNZHOTEFJUUSKNXVLRXIUNBLFYBPOHWOGHVIVBSJKYMGRSJKTVWIKXCTFO");
    msg.timeout = 0.578174516272;
    IMC::TeleoperationDone tmp_msg_0;
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
    msg.setTimeStamp(0.645236372615);
    msg.setSource(19695U);
    msg.setSourceEntity(83U);
    msg.setDestination(61369U);
    msg.setDestinationEntity(45U);
    msg.req_id = 35224U;
    msg.destination.assign("IBEGYGRJWIOJHZJTDWVTLWOXXRHMRMYVNYAEARSFDVIJWPODSWUUNRCJZTXOHQHATHBPYZVOIFXRZOZUMBAEMQOPNAJWLLSNUDVPXGZTRTUHGIKSJPUERMUOIWKMSXBYLOZLDIPXPGEW");
    msg.timeout = 0.996783884536;
    IMC::StateReport tmp_msg_0;
    tmp_msg_0.stime = 83952016U;
    tmp_msg_0.latitude = 0.900149341795;
    tmp_msg_0.longitude = 0.923578914394;
    tmp_msg_0.altitude = 50637U;
    tmp_msg_0.depth = 24334U;
    tmp_msg_0.heading = 9793U;
    tmp_msg_0.speed = -681;
    tmp_msg_0.fuel = -1;
    tmp_msg_0.exec_state = -95;
    tmp_msg_0.plan_checksum = 36225U;
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
    msg.setTimeStamp(0.945889128698);
    msg.setSource(13793U);
    msg.setSourceEntity(218U);
    msg.setDestination(49096U);
    msg.setDestinationEntity(182U);
    msg.req_id = 57361U;
    msg.status = 80U;
    msg.info.assign("OEVMIIBYTKXCWJPAOTLOTSYGCNUCBOOWQFZYBVAOWPFFHWVPZZTKECDXZDHPINSVWJRFGILNIXCKWGGLFSDDLDYDRJVLYHENCENNVRMSBJAMXWGTGODLMCWCZBNDVKAKIPARAQXHHEIQKJBNOKUWHODRLQBNJLEKEZ");

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
    msg.setTimeStamp(0.827982444181);
    msg.setSource(57217U);
    msg.setSourceEntity(28U);
    msg.setDestination(55188U);
    msg.setDestinationEntity(42U);
    msg.req_id = 24818U;
    msg.status = 148U;
    msg.info.assign("AJMCGKGOLQCGZNYXNDUGNBIWMJDZSBJGFHSHXFBMAMXQLWJLFMEVRBDDRWSDZWHUFLOAVSHPMWGQMBECBEOCYFHGRTSRZUJ");

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
    msg.setTimeStamp(0.851695013049);
    msg.setSource(35679U);
    msg.setSourceEntity(8U);
    msg.setDestination(4665U);
    msg.setDestinationEntity(161U);
    msg.req_id = 61080U;
    msg.status = 218U;
    msg.info.assign("WZHXZLPCSQIOIUGHEUZEXQMEBIVFUOOJATVWMCDXHIYXIPKEUWTRNDDJDWBJRRER");

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
    msg.setTimeStamp(0.282099659868);
    msg.setSource(54666U);
    msg.setSourceEntity(146U);
    msg.setDestination(19505U);
    msg.setDestinationEntity(56U);

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
    msg.setTimeStamp(0.0981865552477);
    msg.setSource(58521U);
    msg.setSourceEntity(188U);
    msg.setDestination(22651U);
    msg.setDestinationEntity(125U);

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
    msg.setTimeStamp(0.953525619541);
    msg.setSource(62281U);
    msg.setSourceEntity(143U);
    msg.setDestination(19762U);
    msg.setDestinationEntity(168U);

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
    msg.setTimeStamp(0.891730347905);
    msg.setSource(28242U);
    msg.setSourceEntity(40U);
    msg.setDestination(24265U);
    msg.setDestinationEntity(166U);
    msg.plan_id.assign("PSENYSQFVAVGWJJBLZDZYXCPYMTILQWNFJVOLQHABBRRVBTZTQWAVCJPSNGEOKWGBMXGLLDLJLASKRVRPLSPCGAVMXQKDFPMIDSOUFNNEIHNZEOICCTLZDXSCCORR");
    msg.description.assign("IMSZVXWURURHYKHLXZUILOEGANDDNXLDDXMWKPSPSEHABBLARHBNUUEXTLTEFPBPEGWJQNXMNQVJMKOPCZACSJJAAHWVAWOCUAHVIBYBVRONMYFJQCCGDVFRILINZGKIYYJMXQGVWYTRDUDCSTPXGAQQIEUBQRGTSFCNIGJFKXQVAUZTNQMTHQFEKMRWCZSHFOCPEHZHLYZLKORPOOIMLSTOFZZBCWGFFDMUJGDRKYWPSE");
    msg.vnamespace.assign("DVWXRNAFMKDPMGAAWOQSGPYUDFCTSEJFBIWANIKGAUMFEBVJYRRWYUAYLLISYCTAHAVVENZKIOBDFBQUOHLXEUPNQXGSXWJCCGLSOGMUHENMZTVEEIGVXVUQSFDXUHSGYOBXKTNRHOCXDJQDCAFCOJGQZZDKEKCDOQCVWMPJWBWTWYSCPIVZ");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("NQXMVQKCTILMCXRFELYKTVPNDKTJSFOYLGOPKPQNVDOGAJFXOZRYWJZBXJUPHZMUIHITZZJWXRWAXKIVWWPWULMMKSTZYXMYBGBDEZHESNULQTHMEEIHYGFKBRURBVKZDFSMCXCSHJUEQAJBBGCAEWENMAYUINGMZLNVYQTIUHYOPCPJHAFQIKECONRLVRSEWNOODCWFOVKQTLUXZHVNDDBGAFTFAIIC");
    tmp_msg_0.value.assign("BQUKQHCGAGLBXMXZELIJNQXIVLILKQOABDBQPMFUJUCCRCRAMSWIPEFFHLTRMONFHMOPVHWYWSIEPYUVDTYTZBIWNHUTIOHDGKBEGINJVYJXAKYSUDGSACAWHORZNIRSKSXBMYJDZKSHYBMUPCJBMJPSGGNBVIQTYJDHHFCETADZNTODAZZOKPWXKEROWGVRFLYCNQUXXFR");
    tmp_msg_0.type = 75U;
    tmp_msg_0.access = 26U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("LWODXCRMSAGQJKNKJXRMYAURGCTISMNDIDYOFQQPN");
    IMC::PlanTransition tmp_msg_1;
    tmp_msg_1.source_man.assign("PXDQIBVDIZVXOBVRFPNUDLOQGJIPTGMNSKJZZRDSFGQDAQHRIQAOUVHVBLXJVLEPOFBTUPDFVWDMMTAGAIWHVUQZLDKAEINKIRYZPPYUCYJBYESZEKYWWGLPSTUSZHSTGVFXXETCTLNEOHQWMWNEYAORUKQINXZNLYMXPGOCKJLNFSMNTHZUVRMZJJIUGYOKKBTPIQAMLEMJH");
    tmp_msg_1.dest_man.assign("NVXRBLWBKPACJVIAKBSVIVGTMEPIQLWGMYSAKEMLYYTDIFCDOHTOULSKBBOLJNMVZDUAJPRFOTVZKAXSNQIOWGIVDGJLGGZRXXIQCJBUDR");
    tmp_msg_1.conditions.assign("ATPVHKXUYPTMQWXDIQZZYREWBBNJTCDRLEIGLRFJPWJKVGUZEWDIGKDBZHIYVOACCKOLTPLUNQXYQMXULTHFAACCODZVECGYXODZAJSQABFSMNTNVNLRVSKJKGYKBJPKSQVXWGLTCHIMIHROVFNW");
    msg.transitions.push_back(tmp_msg_1);
    IMC::PlanTransition tmp_msg_2;
    tmp_msg_2.source_man.assign("RXTRVOISBZDGLFHFYZHEUWOBNHRYUJQQNLWKHVSDAYHGT");
    tmp_msg_2.dest_man.assign("QEWLTLFUQINPZQBSHGVFASZHSJJMCPUPABFRBIKXSYVPRCCTGBGENNXHAQOMMQGUYOKILWAZAWSNYHTLJOKXEITEDVKKXOXXKSCCBFRMKXLRYEHEUCOFICDFJZSAYILWNRBDAVUUVWWPWDEYFDVTVNXBTZRMBHFKGIQEDTCLWUNMICQFOMLYENJJRYRTDPXGV");
    tmp_msg_2.conditions.assign("BRLPCBQVTNTJOEDESMQNNNJYYHUMFFBWCZLJEPIJHGOEDIIIQFTXEJGWZYHFHZBZQUEAIFMSISYBXUKLWWLBZEKCECFNAYAVHOWWUZLRVZDCUKJTJPOLAZYTTGVGPKUBSRSYXF");
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
    msg.setTimeStamp(0.349379203168);
    msg.setSource(24339U);
    msg.setSourceEntity(115U);
    msg.setDestination(36978U);
    msg.setDestinationEntity(182U);
    msg.plan_id.assign("RMMSXCVYTJDXJIXONPORNSXLAEATZQIMEBEXVWRRISFUDQELYTZWVVCDAFUPZHBBMXLLGRYJKALIHOICXJMWZTUCJMWTNAKNOCMFHVTGZVNYYAWCPQUDPXIFOGHEUJYKWKHEGNEDOONWLOLDEGCZRATPDSCWJF");
    msg.description.assign("JQOEWKBLRXAUJMEJAZBRDCADHQZYWKVEZGTXWJQALYCUIVGJBUNUMMWFNWCHJYHYFVCOXUBYRNXWFEOBVRBESNYTYOMSJM");
    msg.vnamespace.assign("BCBSKBYHWTPGCCYGSAUUVDCDGKPGFEZXWEBPHRRUDRTMSINIWAKIOVPSSQMROZUKFYXOLOMHYWAAJLCGMUHWZQJKXWDZJBVFJSWQNJEWDDQSXTGPVBAUYO");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("OUXTIFENKTAOXZGVPMQUXAMDSHSUSLJFJDPPBAINSDRIVPSCOQDCYIVVEBTQTCBSMLWBYYLLNZJOKXQZPKUJQSYNREQWJMLTERWPDLJTERFOSPIVFAKPUBHHTUEKGCSHLZ");
    tmp_msg_0.value.assign("VCTIFKJYFVYTIQWWWOLWMAULJBPBQZXLOUPOFMVSPQHOQGGBTDWIHIXXUZPLISPGAGDRDETZDAPECHJXJAKWBUMRADNVNTEV");
    tmp_msg_0.type = 94U;
    tmp_msg_0.access = 65U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("VYRBKZDFTJHRXAKHHOPTWECLQEMBLMUVYEBKVRKMOEGQSLBMDJFMAUYUFTDIBELBTWSBQXUAFHJALWHZ");
    IMC::AcousticOperation tmp_msg_1;
    tmp_msg_1.op = 156U;
    tmp_msg_1.system.assign("BUOVNMDVVPHMNTYHODFNAUKZOWLCEHGBYSIVERSUTICVIFWGZYMDZGQJOQHVQEYDLQGQPGJFMDAEMWIQIMQPKTACHYAHRQLCBTWFRBPCELRDCDLPVUPPTYIRKDTINDSDHXZLEOAKBKGXBFP");
    tmp_msg_1.range = 0.270701691497;
    IMC::DesiredZ tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.value = 0.156049452191;
    tmp_tmp_msg_1_0.z_units = 236U;
    tmp_msg_1.msg.set(tmp_tmp_msg_1_0);
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
    msg.setTimeStamp(0.407667628421);
    msg.setSource(19237U);
    msg.setSourceEntity(205U);
    msg.setDestination(43865U);
    msg.setDestinationEntity(152U);
    msg.plan_id.assign("QWEBCRDEWSIGBNIAVXVHTXYAVLIZLIDSFKZRUCJMBCOQLYNGFURCVUAAPUKSFZFMNNAXECLWTXPNOCPPYKBBYEOUIMOYMKNKWJWOZEMBYPNNLFMZPZTOGKOGTWHSQGLMMLYXTKPDSPXYJVDGOPNRCZJZVOSASFIRXSCZFVRUPQEAEEQEITKEDJDYQHIFVUUHBBQHDTKMGBQMWGJNHDRTLLCBRHKFUCZVIWWRHQIHA");
    msg.description.assign("THZFSUKPZCWRNFBPVMLMBLVUWUEIERSGPSZECFTLCWODPJUNXHDVDYCKHLIYBONYSJGZFFIITHVPABGBXFVSSGACETXQKCYOOZIWNSMHPTAMYXMWVKPQJFARXAAOJGRWDRRMTBVVGTQCXTQKAKBPNREOIOIFMEDNJYMLDHINEQSSMXHKLDNJYTRYKYZBJUAEEMAPJGDUZPLBUWHQGKOFLODOVXASKRCYQCJUGIUXWNQQHDLEITBZWHG");
    msg.vnamespace.assign("IMGECJZFNJRAPBPTQNBMEENOBBXNFYKMDCMLO");
    msg.start_man_id.assign("KNYYNTFRNTBZRBBKLMVCRAAESIEUEUTFODEIITHKQPFCNJXFQALLAZPPTHOGVVHZUHQIPQKOEUUEGOQKKRMMECEDGLXGXKUURZUFYJSLNDOABFQPCGXDWJQJYSGRMNCLSTRPZCWHVZZDCXRSDXAOCYJCBRFMABSIGJKKPRMZLSGGDJQTMOVWYOVNPMVAWAVXBYMWFDIQSWLVZZHEINKUABGPLYTF");
    IMC::PlanTransition tmp_msg_0;
    tmp_msg_0.source_man.assign("VRZMLYTQLGPAMZIMLSDANKCKNFUTUKH");
    tmp_msg_0.dest_man.assign("GEQGAMRAPYRLKPHIWROFWHLBOUNRILVJRPCNXDVKJBIUZEZJMQCHWASFKVLZDZOBNNVYHUFVRURNPBCQPHPIYFBQSXOATTJXJXTMIMQBAXDTFGICTKERZPUYYETZDJGEDDUNSOWQLMHOAP");
    tmp_msg_0.conditions.assign("KFGMQGYJZYUKIAOLJJNTBHOBZHBPHMMXVPKFRHUHLSY");
    IMC::Sample tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeout = 47783U;
    tmp_tmp_msg_0_0.lat = 0.931439430736;
    tmp_tmp_msg_0_0.lon = 0.524327633333;
    tmp_tmp_msg_0_0.z = 0.950673482083;
    tmp_tmp_msg_0_0.z_units = 191U;
    tmp_tmp_msg_0_0.speed = 0.859025438235;
    tmp_tmp_msg_0_0.speed_units = 66U;
    tmp_tmp_msg_0_0.syringe0 = 62U;
    tmp_tmp_msg_0_0.syringe1 = 160U;
    tmp_tmp_msg_0_0.syringe2 = 150U;
    tmp_tmp_msg_0_0.custom.assign("VSBTOUFKXLSXKJOKWUNTZIMDGMIKNOVDBRALQBUJBFPQUNRFEDYZUBIXRRJXCOJDVSECQFHSKMQHMBEWXGHBWOLNEUUNKYLHKRYFIQZOAYEATKIGPDWNXMQ");
    tmp_msg_0.actions.push_back(tmp_tmp_msg_0_0);
    msg.transitions.push_back(tmp_msg_0);
    IMC::Drop tmp_msg_1;
    tmp_msg_1.timeout = 42761U;
    tmp_msg_1.lat = 0.624572375989;
    tmp_msg_1.lon = 0.234180269403;
    tmp_msg_1.z = 0.706734886599;
    tmp_msg_1.z_units = 222U;
    tmp_msg_1.speed = 0.549344145914;
    tmp_msg_1.speed_units = 125U;
    tmp_msg_1.custom.assign("CTYUWEMPGKVKVRFHQLMXZDNRXHJBDWLOQEOUQOSAZHARGPAQQZIEIOFIWBZOXRRNBTUNSFBOEDIJEFUUCYCFYDBOQEIYGVHTKLVSLKEUJYZHOKLPZPMXCQGPUFCSSATKMNHVWNVKUAKRVMDRAJVBJXCFWCUEZTJAFCPJAVUEIMDWXTMSNZLSXWRJDZWHGPMSWERKYIPYDF");
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
    msg.setTimeStamp(0.168327065024);
    msg.setSource(60776U);
    msg.setSourceEntity(198U);
    msg.setDestination(15984U);
    msg.setDestinationEntity(198U);
    msg.maneuver_id.assign("TELPEXUOWXCCGVHPNECZBFPRGJDDJMMSFKZHFKSATYVIZSFFIWGRMSQECS");
    IMC::AutonomousSection tmp_msg_0;
    tmp_msg_0.lat = 0.3244794926;
    tmp_msg_0.lon = 0.259354050215;
    tmp_msg_0.speed = 0.436975489424;
    tmp_msg_0.speed_units = 12U;
    tmp_msg_0.limits = 198U;
    tmp_msg_0.max_depth = 0.870658165847;
    tmp_msg_0.min_alt = 0.752755810097;
    tmp_msg_0.time_limit = 0.092077991246;
    IMC::PolygonVertex tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.705018544387;
    tmp_tmp_msg_0_0.lon = 0.932289519561;
    tmp_msg_0.area_limits.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.controller.assign("DMDEDYQDSTEGYOXCMBHBKEGNKXWIRQZBCXHDTDIAGITLBVWYVSHIYIZPQDWWSZQONPLGHRPCVNGQBCYQXXAZUEPWTQKZJPACFHQIBVWUKKKPZFAQSASPRQMKR");
    tmp_msg_0.custom.assign("IKSWXJPQJJQLDKCXHMGTULXVZSCDDVRWKAZCSVVRGEDEYUQRKRXVHBFNCBLPKYILQGJMFFLIPBYV");
    msg.data.set(tmp_msg_0);
    IMC::AngularVelocity tmp_msg_1;
    tmp_msg_1.time = 0.806826865425;
    tmp_msg_1.x = 0.835997561802;
    tmp_msg_1.y = 0.214576989398;
    tmp_msg_1.z = 0.652790544754;
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
    msg.setTimeStamp(0.530138225851);
    msg.setSource(38764U);
    msg.setSourceEntity(251U);
    msg.setDestination(11550U);
    msg.setDestinationEntity(73U);
    msg.maneuver_id.assign("IPPXVWKLFFHNZZQVIGWKWUWKIONHPDYRJIIEDNVYRBUOJFZETNHASZAOMALCBTPDCFYVQSBALBJTNKGHAUDEZKTY");
    IMC::Rows tmp_msg_0;
    tmp_msg_0.timeout = 17414U;
    tmp_msg_0.lat = 0.379803343134;
    tmp_msg_0.lon = 0.715320404944;
    tmp_msg_0.z = 0.708368544028;
    tmp_msg_0.z_units = 16U;
    tmp_msg_0.speed = 0.10926524199;
    tmp_msg_0.speed_units = 175U;
    tmp_msg_0.bearing = 0.257708388154;
    tmp_msg_0.cross_angle = 0.0754271049618;
    tmp_msg_0.width = 0.95663405435;
    tmp_msg_0.length = 0.684458346852;
    tmp_msg_0.hstep = 0.251213733206;
    tmp_msg_0.coff = 42U;
    tmp_msg_0.alternation = 153U;
    tmp_msg_0.flags = 74U;
    tmp_msg_0.custom.assign("ZYUASGOXGGZMKDOETMQVLUKSAEYTQFLAUECHGWRNQEICHHKDCYMUPHJSXPGUTHDLJCRGAYAVPBCRAIACELFZOJDPYMMUOBNTCSNFBGSWSBNXQBWAKHKSWPDTJPFRYBLIEOJXVQMOKHNVJPTOMQXULUCRKMTIFNDSWJPBBNQGQSFOXLVFCWVKDVKDRFWFITEYTWOTHXZEZIVEPVSK");
    msg.data.set(tmp_msg_0);
    IMC::PathPoint tmp_msg_1;
    tmp_msg_1.x = 0.545221406684;
    tmp_msg_1.y = 0.330693751518;
    tmp_msg_1.z = 0.647552205184;
    msg.start_actions.push_back(tmp_msg_1);
    IMC::EmergencyControlState tmp_msg_2;
    tmp_msg_2.state = 217U;
    tmp_msg_2.plan_id.assign("QCNIVTGRFXIXEUEXYSDDWJXVVLRCGNFCFBLDLTBLOLGAHSTAZGGYZGPOZDHLCXZFMQETASNHHFUKXKOJVIWJIOEQOPBGPJMAMOMAAHFDEDVYQMRJUGWJKBIRANTBUJOHNRRSEQUSFUAQIMWSROACEVPYHMZDXKDKMNDQLYWKRRYPOQHEKJSHUITBZTESHZWUVDCUSNMXKAFWZLRZBXVFPJCCSCPIVKXCLNYGTWLGPPKVBQP");
    tmp_msg_2.comm_level = 128U;
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
    msg.setTimeStamp(0.184008206179);
    msg.setSource(48567U);
    msg.setSourceEntity(163U);
    msg.setDestination(20433U);
    msg.setDestinationEntity(196U);
    msg.maneuver_id.assign("OPDMQSWEBESUFYUVMUDHXFCEEPSBUGBMLZQYQIPGNIZDACGWNAVOXXMROBZTGKMIWCYJNWVJLFTGJPKOAFFOYQNWOCMUPTAUPHPWCRQXZSSRAPKHYZIABRUGYIWHUSLKTGXFRPPQMDSBLVBGIENOGVJRNXLAVNEEMIWJCZZXCLEIICQEKFHTDHACVFIFRDRHTKQUJUSAWYRBJKKLBTDKLCYSXDMHAXERWKVX");
    IMC::Takeoff tmp_msg_0;
    tmp_msg_0.lat = 0.923588924398;
    tmp_msg_0.lon = 0.543679375987;
    tmp_msg_0.z = 0.820417606382;
    tmp_msg_0.z_units = 35U;
    tmp_msg_0.speed = 0.650915483971;
    tmp_msg_0.speed_units = 12U;
    tmp_msg_0.takeoff_pitch = 0.0591632043715;
    tmp_msg_0.custom.assign("AIQQWDLEGDRUOWI");
    msg.data.set(tmp_msg_0);
    IMC::DesiredLinearState tmp_msg_1;
    tmp_msg_1.x = 0.411440078041;
    tmp_msg_1.y = 0.938544848958;
    tmp_msg_1.z = 0.34531596211;
    tmp_msg_1.vx = 0.26320772437;
    tmp_msg_1.vy = 0.173514703207;
    tmp_msg_1.vz = 0.159564198741;
    tmp_msg_1.ax = 0.69509242787;
    tmp_msg_1.ay = 0.499026823659;
    tmp_msg_1.az = 0.492896888567;
    tmp_msg_1.flags = 4827U;
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
    msg.setTimeStamp(0.368165661295);
    msg.setSource(43402U);
    msg.setSourceEntity(185U);
    msg.setDestination(12627U);
    msg.setDestinationEntity(144U);
    msg.source_man.assign("ELKNCIPDSTWLBVUHGXRPS");
    msg.dest_man.assign("EFRLJGZINLUXDTVFSVZFWBCNQCKPVOADFFBCBPMTTIINEGSIXJLZYWDIVMUYLCGHOVOHRWKFDHXFAUBJOHCGNRSJEUJNUDYCDOQAQVJTRIYTQASMYLUNQMOWMLJZNINSGAYWGBXKJNMPIGRPPZDEVWSQHDPUTVGCBXKUEHZQOCWAJHGIYLVNWKEKUAWZQLUORORALSRJTSQROFZCXEFHKRQAMDPYGXYMXTTB");
    msg.conditions.assign("VARZXLAAQLSVLBIHROIWWWNJGYPPKMRQEOSZOJQMIDKMSATYJQUMCJOUPZDHZYBSXRFZZTAQBELITFPSKJULFXTKCUPGHTLVFBOLBCYCZTEWIRPR");
    IMC::VtolState tmp_msg_0;
    tmp_msg_0.state = 0U;
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
    msg.setTimeStamp(0.503647700746);
    msg.setSource(58247U);
    msg.setSourceEntity(185U);
    msg.setDestination(44112U);
    msg.setDestinationEntity(112U);
    msg.source_man.assign("WVWXFCJTPFWSJDCATBMKTGSZFLSBWKKERNAUAOIXQBBQGMEQLLBGPNIXOWRUAYDZTXHWLCBZSODLAUNFBLZRFJFZUEENOSKWHLSARAQJGONPAYVZXUMFAWDYSTCESIMQWKCZRBUOLKDVDUIQNSBMIOKQPGHCDYE");
    msg.dest_man.assign("XQZHBIQZDEURUWSBLTPCNRSNHBYOQN");
    msg.conditions.assign("XRPWWEUZJTFBOPWPGBIQEJFAXMBAXGRPFIEPIHAYQPJWTYMZONQAPBPCZOHRCGDVUTXYSJTNXCKSXIHEQQGVJVOGNQKNLZDQOYMLZVOODAKWCHNKLHCDURWDMAQF");
    IMC::FollowSystem tmp_msg_0;
    tmp_msg_0.system = 51770U;
    tmp_msg_0.duration = 64979U;
    tmp_msg_0.speed = 0.18361605532;
    tmp_msg_0.speed_units = 148U;
    tmp_msg_0.x = 0.908765022732;
    tmp_msg_0.y = 0.627257554637;
    tmp_msg_0.z = 0.800333392684;
    tmp_msg_0.z_units = 165U;
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
    msg.setTimeStamp(0.662447944912);
    msg.setSource(27691U);
    msg.setSourceEntity(106U);
    msg.setDestination(17355U);
    msg.setDestinationEntity(112U);
    msg.source_man.assign("VLLWTWGZWFLEAQVQVGBUECUTQHFAIFDUBKRBURLDRIWYNZHELENSVVXBLRCNRZJXOXMZQMXCZQCWNRQAUCFEHJZSLICRVZPYJEZKMBYJYAMLOEPQTHVIABKDMFWOHWPSOCCIGJAMOZJUNDHGDWNSDJLTABNNIJIPPWTDUPGLKFYRAVGAIXGTJTECTXGSROSFKSQKGUPZOIFWHEBHKXTMODHISKYFQOMQJKAYOCRPY");
    msg.dest_man.assign("NGWWIJZFWHWILZUGONWQMEGAVKSNNGBAYUXRSMWTSHQIECPOCGSCDJFXLNSBABOEUVNKLECVTYPTXIAXMKDKQATKSXUEARGGUCIUHTQADOHUDETAXSVPKPYBZJPNLPFHVFDYHMNORZSTAEZMVSCYXLYHZYJYVZMVICHQJVMORUZWQBUIONYJRCJHWKXHNOQRLLFLBRKDJVFPBKPFUTBZDIDFGDGOMREPGLMX");
    msg.conditions.assign("IGBZCFQGNZHLNOUODHXVVQMTZGUMPLHMDKNREAFEZPUSLXFJOP");
    IMC::WindSpeed tmp_msg_0;
    tmp_msg_0.direction = 0.971285772876;
    tmp_msg_0.speed = 0.400438472888;
    tmp_msg_0.turbulence = 0.894911083391;
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
    msg.setTimeStamp(0.447626892275);
    msg.setSource(25694U);
    msg.setSourceEntity(223U);
    msg.setDestination(48178U);
    msg.setDestinationEntity(43U);
    msg.command = 51U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("ZSHSMCGWZWXZFTNNIJVQFAEROMUKCOAHIUJLBGDRMAGEQULRPWGSCKSTGDGEINVAQUBBIZTDDTBRVDAWMUIITFXFTPCKFGPOHWHZNLXYNGNWTYBMSSWPLNGZVKXBWFBKPJVDQPXZQRXSJDWPNYAFTEXYPWBEVEPVJOYXYKLXQEEDUZQXKAKJCEOACERDHMUOCMPCFCHCMHQAMJSMLFYI");
    tmp_msg_0.description.assign("MKMSWZVDAHVHDDDYTPKAJJWKOGEDMJWFXSXJP");
    tmp_msg_0.vnamespace.assign("CZLFABDYZTMATEKDMWXZQPPMNJAYZMQXCXGVMAOVNUOXYCECWMRPURKSALBZHICJQXRGQJNQIIKRKHHSYIGOABPFHGXEJFVNWPGRSTGLE");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("UVQCYHRHUOIXKBNGSVXXREFEJQLGFXUFYQVPZZLQLSOTOALPPCEWSOCHGZVHAOKNSJOMIBYJTJXGIQYTPWQKJEHKZZGERSRUZLYRBXDFBLTNEYODPINFUQWMCCUAMTCHNMPMVXLWEXNZCA");
    tmp_tmp_msg_0_0.value.assign("DDNMRDAIOWQGZBTPLXPCNRTRLFTZTUHJCPQSXGUOWDLVEGIQEMMPNBIXVJDHVS");
    tmp_tmp_msg_0_0.type = 73U;
    tmp_tmp_msg_0_0.access = 159U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("CDIQEFLZCFAIDLKLSTQHSUCOCSBUTLCXXONNTYJASKDPLFEEXGZYWHQAMPZHIGSKADKPQLNSYHDRTEBPWXYHBHRWYVUMHBXXEFCGHVMSUBLOMTVLVEGQHUQNFKYCNNJWBLMPJBRDQDZGYGTAKBWEMNGNMIBVFJQNABATISRAGCVIMMXWJZFC");
    IMC::DvlRejection tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.type = 97U;
    tmp_tmp_msg_0_1.reason = 43U;
    tmp_tmp_msg_0_1.value = 0.777668638523;
    tmp_tmp_msg_0_1.timestep = 0.843460263994;
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
    msg.setTimeStamp(0.484124328221);
    msg.setSource(31253U);
    msg.setSourceEntity(201U);
    msg.setDestination(62194U);
    msg.setDestinationEntity(178U);
    msg.command = 77U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("UNSCOGBHITOSSXMLHCOEZOBVYTEKQWWSTMUWZCSJKKLZAYPEOIFIZNSIPCBVLRLVBLQNLJYFSXGUWMSFMTQMEBYVAUGAMLDKYDXZBPBWYMZFQNJJRALNRPAPHEUGOYGIREUDAWDRZRTYOHQRGVXCQRUCKPPWVVEMDBYGVNHLXHMECMZXCCXYFGIKJXKQUGKPSEXUDHTTRPVCNXJWTSIIEQPHOZFIK");
    tmp_msg_0.description.assign("QSMMKMAFJVZPUWFGULL");
    tmp_msg_0.vnamespace.assign("MIKJUIFSSUCOGXDSGMERLIOWKMLZXJDXHPRPSBNIOBQPVMUBMGRWKVTARQZSJKXXWSTDELEFGIKBMKWUEZCWUBWANNJUMJDSRBBGMXIGONRGJEHQHHKPYYAZOPHLVRIFCZPAQNUTVEQCLBGFXNLAHNEUHDRVYNZQXZCWECE");
    tmp_msg_0.start_man_id.assign("LZBBEWIKJDRGMZCWZFVSGENZGFSMZENCPRUIQHYITCHRSLRBDFPRYXHISCHAJWHYMSWMUXAUPYGHDKZXATMVODQQXCBX");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("JJAFDAVHNVVDZGMQYTHWDZYLJNKOWACMOHERSZGLRQIVQVHEXPXLQXXINECWFFFZPQSKTXBBILILKSEJJAGZCBXMCGEFPXBKYPVLFWDTMLVEDKMKRMEQZOCDKUOMSTNMEBIYJSTPSHJXCCBWYIPOTJAUWRSARZWYDCFJGROAZNWLGZSAQNWEUTKALQEBBFDKMQSMGXDGRGHYYBBPKUPHUXUPHSTITPGHWYDUUVAQOOFO");
    IMC::StationKeeping tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.531351092579;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.645292281997;
    tmp_tmp_tmp_msg_0_0_0.z = 0.187541050256;
    tmp_tmp_tmp_msg_0_0_0.z_units = 149U;
    tmp_tmp_tmp_msg_0_0_0.radius = 0.770355926143;
    tmp_tmp_tmp_msg_0_0_0.duration = 29224U;
    tmp_tmp_tmp_msg_0_0_0.speed = 0.440269128729;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 194U;
    tmp_tmp_tmp_msg_0_0_0.popup_period = 2942U;
    tmp_tmp_tmp_msg_0_0_0.popup_duration = 22281U;
    tmp_tmp_tmp_msg_0_0_0.flags = 109U;
    tmp_tmp_tmp_msg_0_0_0.custom.assign("DXRHBPFXVPPIITKJDFGFYARPXZGGWHKBGVRZPCQWFMHSZVKZLAWOWBYBZQJPEDDIVVRUEJACASBTQSNYYEDVFTUGALAMZHHMLJMQPOYQBAUSFWQHUIVOERAKUUYTAWOZGWLUEEVRRRCOFDGNMBNVNQXYITYIOJ");
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("WIGGKOHMKCLRHANPVHWFWLBXYBXJIIBFRSIOXKVCCYQDSDYF");
    tmp_tmp_msg_0_1.dest_man.assign("KNBVXZCGXLUVFRPYXXZQDZTYULJBJZBFVHSSRMUIBQJTHPYGERWMRASUYXOCBFMQEPGIKXLCQPHEWJETOMQNNCZDSPHFAZATWQGSHGNGPBNCSNOWELGMHUYLOJFRYPYPITADVKISDRWAKVYCCJLATOAEDKOZHGZDFXCWHLVIKVRWPBKGCGIXTMQFYBUKRWALWJOFHSPBUESFITDVCUTUWMXOUIRMXOMKNAIJDQZJKNV");
    tmp_tmp_msg_0_1.conditions.assign("QHAMPWPJAMISHHYPYKRKXMAULUGKBOJNPPPFEFSMKJWQAQZHVHJBYWLHCEVPDNYDSQWLYOCWBWXIIHHQSVXBAEMFGULYSTQCRKZQOCAJMFRNNFSCBSRJDZTXZUCVLEHZWBRSXZETCYUEKNTGODXAWADGUODRUMQODXYDIKFIHNIRJTNQDVGLDCVBTFOWVEZUTMGYWJCFFFKKIIZVGT");
    IMC::HistoricTelemetry tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.altitude = 0.914753423476;
    tmp_tmp_tmp_msg_0_1_0.roll = 20862U;
    tmp_tmp_tmp_msg_0_1_0.pitch = 54977U;
    tmp_tmp_tmp_msg_0_1_0.yaw = 28431U;
    tmp_tmp_tmp_msg_0_1_0.speed = 16475;
    tmp_tmp_msg_0_1.actions.push_back(tmp_tmp_tmp_msg_0_1_0);
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_1);
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
    msg.setTimeStamp(0.606686018129);
    msg.setSource(35111U);
    msg.setSourceEntity(27U);
    msg.setDestination(49976U);
    msg.setDestinationEntity(148U);
    msg.command = 176U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("TVDFPLQPODKDTOIUQSIZWXRSOCKPCSMLHRLGYLDHUQPCIEVHYBXWYAWJRVYWRXTQJNPPWLTGYKHGRIRNTKLX");
    tmp_msg_0.description.assign("CRVYYOELDHJIRRENEOYHQODNXJGOSEPTQHDRLLHZPAXYMDAPZKQAKNXBEGIANLUGOVXCZVAWWSGMJKWUBCIPUFJATGKSOFHSHNVPWHEZIIRXVZFXBCOWLODOSTYHCMKCTABNXTFTXJSNKDGMRZDQIWWPNVFPMPLUEGZRGWEOYLJVRPWEBQTFSYJFVQUZCTFIITUVMNQKRJZBYQBSUHCWFBDMQAUGMSXKMSU");
    tmp_msg_0.vnamespace.assign("GPISYIUESDJVQORRAHAZMJGZZXMBRDWGTPCBKNFQNFLLSTCRNRYXKBHTHLSMQHQWQKSVLPWWUSKMIZUNBLECZCDHVEILYXU");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("NMXDVJROFPWLHTXYLIRYXRTHJDLDEFYTUXJ");
    tmp_tmp_msg_0_0.value.assign("UAHRBNHWGIPFTVRMQZEKUPOJCDHLHYTTZSQBCUAUSOZXSKOZKFEJJMRAKFZZVPCTHNMGLIWFXMAPDVLOVWHLJFDAUEGMFLOTVPHBGXPABEJWIWXVYRSQRGJTBHEGMWRUOFXSUEIKPANTVANBDSQJYLKQCDZMOYBDQRKCLGPPVWZNMDUIINCQJWWFNSSHINJWEMDXOYGCDRUXBIYNRZUKYETKCICMXQYTJYBNKACXOFGR");
    tmp_tmp_msg_0_0.type = 109U;
    tmp_tmp_msg_0_0.access = 188U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("AFZFQBARDFDMZMMFDTKJYVDYZKCDKFWUIBWVJPWIUHWQFTLRDCAVSLCORHBTUTUVRSPQZEVZBXJPWLXLCEEYWKWNYIWHPCZQAJLHPHYHUATBYATQATIEWRMNKPSXGLSCJBHPIXYULVCONZLQQUSKTAGBXKE");
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
    msg.setTimeStamp(0.185555717964);
    msg.setSource(20998U);
    msg.setSourceEntity(8U);
    msg.setDestination(54974U);
    msg.setDestinationEntity(71U);
    msg.state = 131U;
    msg.plan_id.assign("FNEDFAOVNSBNREKYYCRHFPGPBKSKDDOYUPGLOZAFPIJMCWIVRBMTYLAXZLHCQMDGQALJFOXJBUMAVZGYOFSBEOMLQGHHKYYKWJRYUGORLWHQDAEIYPBQEQEZSKEVNVUMDAMMXGNMIFHHNJWGIIFKXRVRLDCTUXVRSKUUAHNUCOAPXXWTRWBPCJTTTZXIVBPWZRPHIXCTHUJSZNJWKNLSTIGEFJNWUDSBVZSYECVIZDBQWMQCJ");
    msg.comm_level = 173U;

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
    msg.setTimeStamp(0.820419943455);
    msg.setSource(13341U);
    msg.setSourceEntity(148U);
    msg.setDestination(3792U);
    msg.setDestinationEntity(127U);
    msg.state = 156U;
    msg.plan_id.assign("KPPSXHMUMXYREWRRXFXNBKLZWZTBFQLDMQJNWBWNSATBIVWNQLVZBUV");
    msg.comm_level = 18U;

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
    msg.setTimeStamp(0.102783386901);
    msg.setSource(41910U);
    msg.setSourceEntity(218U);
    msg.setDestination(36348U);
    msg.setDestinationEntity(99U);
    msg.state = 83U;
    msg.plan_id.assign("GFDJCNBEYDTCWLONUJVLJCPMNIABMIWPFULEARGSISPVBMQVYSCDNXRDTPAWJSKHBVXDERCLHTYXCKEJAHJCATHRLAOFRHKKNTQBQDZNPLFAQLYRXJBXUFWKRIDHUZWWCRWEYESAWVZVFMXYMNYLKOTPZOWQNBVERVUFDDHUFPBKXUXADZZKBTSGT");
    msg.comm_level = 131U;

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
    msg.setTimeStamp(0.233561920801);
    msg.setSource(46215U);
    msg.setSourceEntity(6U);
    msg.setDestination(26536U);
    msg.setDestinationEntity(197U);
    msg.type = 160U;
    msg.op = 203U;
    msg.request_id = 49570U;
    msg.plan_id.assign("HPCLKBNDYABPLLMMKNTSZXPEPGBWZZFIIHQYYTPOFEDXDIGVZLWPOYRJVFJILGSGXHONBGZZ");
    IMC::DmsDetection tmp_msg_0;
    tmp_msg_0.ch01 = 0.556267363455;
    tmp_msg_0.ch02 = 0.469787319813;
    tmp_msg_0.ch03 = 0.789934500468;
    tmp_msg_0.ch04 = 0.413224054501;
    tmp_msg_0.ch05 = 0.814504726043;
    tmp_msg_0.ch06 = 0.301906683569;
    tmp_msg_0.ch07 = 0.736994620379;
    tmp_msg_0.ch08 = 0.549540922565;
    tmp_msg_0.ch09 = 0.487819337008;
    tmp_msg_0.ch10 = 0.189034937053;
    tmp_msg_0.ch11 = 0.026666158947;
    tmp_msg_0.ch12 = 0.358910755537;
    tmp_msg_0.ch13 = 0.416504673228;
    tmp_msg_0.ch14 = 0.0301314704421;
    tmp_msg_0.ch15 = 0.479034194418;
    tmp_msg_0.ch16 = 0.745951186933;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("ORJDHQPQUHCLDZGBXRTMMUWTUGZIEWGPUKFONHQPTYITLDLWPHYURLXASWZZRYARJZDVPEFODGQZPXNKNNMGQTMOYLFQBAGSNVUGHHSDPKWVTNWXFBEWMDIOXKEJIAFBLKTMZLKEQAQJFRCGSLKRUZIESHVSEXWBCOVPCNHPFIVOY");

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
    msg.setTimeStamp(0.21430098911);
    msg.setSource(719U);
    msg.setSourceEntity(236U);
    msg.setDestination(5120U);
    msg.setDestinationEntity(158U);
    msg.type = 129U;
    msg.op = 161U;
    msg.request_id = 14810U;
    msg.plan_id.assign("THOWZKMSYLPORZELQCZKNYMAYQFBTUPJDQQGVPITNALYAJVWNYSRYKZCNITZYYXTFZILHSGEAHBTPCTCPOGESZQEOFCXKKBWWWUMZBPTLFGNOHOBASDHDSSMUUVUGXRUMKJLMFUKCQXBEMVVLFRFDAPTEEFMSZYDJVJCMYPZPXSDGOGQIWHDQVLOALWCH");
    IMC::VehicleCommand tmp_msg_0;
    tmp_msg_0.type = 248U;
    tmp_msg_0.request_id = 32211U;
    tmp_msg_0.command = 112U;
    IMC::ImageTracking tmp_tmp_msg_0_0;
    tmp_msg_0.maneuver.set(tmp_tmp_msg_0_0);
    tmp_msg_0.calib_time = 24436U;
    tmp_msg_0.info.assign("HBNMQWVQQIYAKWZZTSPMMIRHRCTBZPLJOKHHXQQDEWLKYGSMDHWVJIVMKWSUJGPQDNLSUNFEDITLTGFCCROJXVDTPHGEDYORJZIBUXKRX");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("RCQWNOWKAYTAWIIYSYVWBRSOKOIPOCAHNULMXFBKZQJPKEXURSEECHTDTWUVRNKPQTXHUYCGMPSLITABJCRAQMMUAOZGXLEUNJJQJHEOMXKACGIOFVHUNYZXVMVL");

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
    msg.setTimeStamp(0.184808585652);
    msg.setSource(59396U);
    msg.setSourceEntity(18U);
    msg.setDestination(41460U);
    msg.setDestinationEntity(121U);
    msg.type = 37U;
    msg.op = 62U;
    msg.request_id = 4407U;
    msg.plan_id.assign("FKXRDEWIYPJTGKDRN");
    IMC::HistoricSonarData tmp_msg_0;
    tmp_msg_0.altitude = 0.163654784112;
    tmp_msg_0.width = 0.438393996658;
    tmp_msg_0.length = 0.527665520363;
    tmp_msg_0.bearing = 0.553914324088;
    tmp_msg_0.pxl = 1215;
    tmp_msg_0.encoding = 220U;
    const char tmp_tmp_msg_0_0[] = {-62, 9, 42, 18, 13, -92, 80, -19, 65, -18, 58, -11, -99, 102, 90, 74, -17, 9, -3, -94, -68, -76, 47, 88, 85, -65, -128, -107, 118, 26, 62, -89, 76, -89, 23, -20, -3, -5, 3, -73, -74, 34, 97, -45, 52, 68, -41, 6, -84, 65, -71, 18, 123, 8, -48, 24, -41, 46, -18, 12, 98, 15, 2, -95, -103, -37, 109, 4, -73, -45, -43, 85, 73, -25, -54, 59, 1, 48, -73, -56, 5, 63, 23, 38, 19, -10, -104, 86, 4, -109, 122, -9, -90, 57, -111, 113, -102, 43, 38, 20, -100, 97, 65, -97, -96, -59, -45, -14, -101, 27, 87, -71, 38, -11, 43, 107, 11, -29, 54, -60, 25, 32};
    tmp_msg_0.sonar_data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
    msg.arg.set(tmp_msg_0);
    msg.info.assign("ROHVNGJEAPCJLCKYXWFAENBFACBBTOJEKIXVXOEVWUQIYSNRUABNKEMNJLUOSFLAFDDVCKHHUPQTXTDFVSYGMVQYKQZJCLTA");

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
    msg.setTimeStamp(0.280888270413);
    msg.setSource(21610U);
    msg.setSourceEntity(139U);
    msg.setDestination(34285U);
    msg.setDestinationEntity(165U);
    msg.plan_count = 35554U;
    msg.plan_size = 2731753310U;
    msg.change_time = 0.62851832284;
    msg.change_sid = 46053U;
    msg.change_sname.assign("QKDYKSYTXJYBQINPOKFLBGMXHYDVEGEJNNAKWXJLAKKNSCXQZSPVJTCWCZTWEZKAUGAHPOHBARBTGZWODPOKXXSKUQDIWXGWMHNI");
    const char tmp_msg_0[] = {20, -115, -111, 81, -86, -97, -58, -86, -71, 30, -56, -6, -52, -63, 84, -3, -127, 36, 104, -107, -26, -22, 21, -82, 88, 117, 48, 111, 5, 36, -19, 36, -62, 27, -45, 93, 81, 37, -19, -102, -53, -35, -61, 93, 93, -114, 87, 5, 105, 6, 40, 19, 63, -115, 44, -127, 43, 121, 53, 52, 95, -28, -102, 70, -3, 24, -2, 52, 40, 104, 33, 35, -35, -62, 96, -98, -119, 10, 96, -53, 87, -78, 1, -114, -64, -82, 41, 39, 34, 43, 46, 103, 78, 36, 28, 27, -125, 18, -61, 10, -34, 112, -125, 85, 123, 101, -123, 84, -2, -19, -47, 115, 54, 11, -44, -60, -25, 1, -8, -93, 120, 45, 2, 90, -53, 58, 51, -124, 61, 20, -45, -28, -95, 62, -21, -109, 97, 99, 105, 111, 27, 78, -52, -53, 110, -80, 21, 120, 47, 94, -25, 91, -103, -97, -105, 36, -70, 118, -97, 124, -14};
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
    msg.setTimeStamp(0.388592418018);
    msg.setSource(20110U);
    msg.setSourceEntity(121U);
    msg.setDestination(28227U);
    msg.setDestinationEntity(175U);
    msg.plan_count = 2140U;
    msg.plan_size = 4070414828U;
    msg.change_time = 0.0904082445377;
    msg.change_sid = 13861U;
    msg.change_sname.assign("KDGEEIQBPQRFUGQNSGMKPNNMAQMVTSEESLRQORVLYHVSKOCTPCJBFBEUPCEAFVPZOKGWBHXKMSUZXKBSJXTIPVPXDWVAZAPOTHKLUXEFTRKQDCPOQBMWZJMRLUHWSJXTMGYUDWDRGPYUHLCOWFVXVWKIFJGMHGEUDFGWHLIMRRNYFRYICSTDDSOANQRIZSJKLEYWQJAQVJLTZZCZANXCYUZIIBVXIBXIHACDMGZFBNHTJOODUNOH");
    const char tmp_msg_0[] = {33, -56, -6, 24, -123, 69, -92, 85, -10, -77, -73, -28, -86, 118, -57, 68, 14, 43, -26, 100, -30, -75, 45, -71, 44, 98, -47, -79, 108};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("BRWKPVFZMESNDXYTYOHIUYHVPFGNWUENOQLLKSGLZWNVWMGTWXQSGPDGPRYRJKKUGJMFDDJWCZLLLNDWGGUKLFOEARHTJQOIGDFJSCPWXEYMCVNGHUDKVBZAABOEVIPZMCCHAZAMBSWVJVSAPDCNJQXIEOAXRUXTINFIVITURQAXZEFIHQE");
    tmp_msg_1.plan_size = 50953U;
    tmp_msg_1.change_time = 0.377720370416;
    tmp_msg_1.change_sid = 48396U;
    tmp_msg_1.change_sname.assign("GUHKLLXRTIFTYPSTFJE");
    const char tmp_tmp_msg_1_0[] = {-48, -24, 91, 15, -62, 92, 82, -104, 122, -3, 37, 87, -67, -85, 99, 63, -14, 1, -74, 112, 43, 56, 56, -70, 59, -79, -54, -61, 70, 119, -73, -28, -27, 65, 61, -45, -16, -66, -127, 116, -7, -114, 22, -13, 112, 126, -9, 101, -79, 120, 105, 77, -50, 84, 61, -59, 102, -84, -9, -81, 17, 59, -74, 41, 6, -117, 126, -22, -33, 31, -18, -78, 125, -55, 119, -4, 92, 126, -111, 68, 6, 58, -79, 95, 98, 109, 27, -120, 124, -100, -79, -24, -60, -11, 48, -65, -114, 8, 54, -66, -79, -75, 52, -31, -53, 113, 43, 51, -34, -17, -72, -2, -17, -71, 47, 33, -55, 44, -69, -30, -113, 63, -124, 0, 65, -42, -126, -10, -61, 118, 94, 104, 57, -78, 16, -13, -87, 119, 63, -4, 47, 53, 61, 115, 5, 36, -120, 29, -97, 44, 9, -93, 77, 89, -65, 112};
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
    msg.setTimeStamp(0.395711120324);
    msg.setSource(24805U);
    msg.setSourceEntity(99U);
    msg.setDestination(10697U);
    msg.setDestinationEntity(126U);
    msg.plan_count = 59272U;
    msg.plan_size = 3359649197U;
    msg.change_time = 0.19149676288;
    msg.change_sid = 51584U;
    msg.change_sname.assign("JWVOGHJOPLCW");
    const char tmp_msg_0[] = {117, 75, -55, 4, 108, -108, -31, 56, 35, 119, 72, -24, -116, -57, 117, -78, -125, -79, 4, 104, 65, -49, -53, 118, 94, 32, 94, 57, 107, 37, 26, -34, -29, 109, -94, -89, 100, 34, 7, 52, 15, -69, 3, -117, -2, 72, -73, -63, -52, -23, -117, 3, 10, -102, 22, -4, 15, -6, -113, -84, -77, 43, -115, -52, 32, -30, -113, -33, 35, -43, -40, 121, -108, -111, -81, -8, -55, 28, 51, 62, 2, 47, -67, -58, 24, -124, -29, 5, 45, -46, -96, -107, 10, 103, 47, -69, 52, -28, -46, 85, 25, 68, -17, 21, 47, -42, 98, 107, -83, 126, 5, -64, -39, 74, 93, -85, -3, -20, -93, 32, -98, -102, 43, -47, -117, 112, -108, 109, -63, -27, -4, -52, -83, 28, 124, 6, 15, 72, -103, 113, -33, -25, 30, 35, -62, -91, 58, -68, 72, -23, -30, -35, -25, -32, 46, -10, -98, 89, -18, -41, 6};
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
    msg.setTimeStamp(0.699684393115);
    msg.setSource(27999U);
    msg.setSourceEntity(233U);
    msg.setDestination(25303U);
    msg.setDestinationEntity(154U);
    msg.plan_id.assign("FUAALDFHSEVCTKRZWXWSYKYGRKBNQUTIWINCGVTBAUVJLJIMBPFRCGLNGEJAXTPQDEBZELTXQWVPNAKCIFCROGIZFYULOIJZCSMKVFYEJQLUMXOEQFCPBITSJVAZSJHQBMYORJNANOTHFPRYRDGNPLLTGMTDMRRNCUTEHQSKJXWLKQPSXUYPBWWOZH");
    msg.plan_size = 64973U;
    msg.change_time = 0.73892349856;
    msg.change_sid = 42594U;
    msg.change_sname.assign("XEBTEKZEPJLVECVYFQSCHSUKAUWTXJ");
    const char tmp_msg_0[] = {-72, -30, 10, 126, -15, 67, 46, -124, -75, -13, -37, -40, -27, 17, 95, 18, -123, -107, -31, 33, -93, -104, -104, 16, -72, -118, 33, -5, -20, 72, 26, 95, -71, 112, 99, 8, -8, -105, -91, -67, -100, -18, 42, 99, 115, -45, -126, -41, -54, -72, -95, 116, 47, 117, -104, 91, 42, 60, 67, 83, -110, -82, 77, -29, 101, -111, -18, 86, 60, 26, 62, 44, 22, -36, 57, -113, 47, 99, 72, -125, 105, -38, 5, 49, -31, 34, -54, 40, 22, 36, 0, -121, -40, -57, -15, 12, -72, -111, -99, -34, 13, 105, 66, -77, 71, 70, -30, 12, 86, 22, 6, -91, 30, -119, 25, -99, 66, -35, 89, 66, 56, 80, -121, -80, -61, 85, -13, -30, -109, 75, 39, -13, -10, -72, -102, -109, 36, -127, 121, -127, 59, -34, 117, 101, 106, -4, -114, 28, -126, 124, -67, -128, -30, -48, 101, -29, -67, -65, -65, -75, -120, -74, 80, -39, 7, 14, -50, 109, 22, -70, -86, -115, 39, 57, 26, 109, 71, 17, 101, 97, 108, -12, -82, -65, -43, -98, -124, -109, 66, -73, -7, 41, -31, -12, -53, 125, -85, -24, -81, 79, 99, -59, 53, -119, -23, -21, -36, 8, -109, 66, -16, -120, 88, -29, 107, 5, -35, -78, -69, -121, 39, 112, -93, 82, -57, -15, 48, 114, -2, -21, 65, -56, 96, 10, 36, -104, -88, -102, 13};
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
    msg.setTimeStamp(0.666864313528);
    msg.setSource(508U);
    msg.setSourceEntity(199U);
    msg.setDestination(13839U);
    msg.setDestinationEntity(130U);
    msg.plan_id.assign("PBHEZPVNRJKUJFJKWVSNVQUTGZHLVOXTOGQOELFQMADHWWLQCRYCMEMWOKCBZPANFGCUQPNAOSVEELSOZMHDEUJXXAXIFJXPCWZGNIVTMOITBFEHCKNPMEJIOLWQZQTCNGLRJFQDMROYAWRLTSSGZPTYYYDUKSMAVQIDYLDIUWDFULBWAPUJAIKEKPINXYXNHUXWZRJCSIGTKRHZ");
    msg.plan_size = 55755U;
    msg.change_time = 0.500930369706;
    msg.change_sid = 12277U;
    msg.change_sname.assign("EDINHWYEFMAWAPCEUDRRAJWUTQWKVCYQTNGEOCUFNRMBEJPMPMJAOMCUWPBVJKZSNMNWZIBOSTQFUOYSTMWPHPATBJKNUQFPOKRJCVRQWXHDIXLIUNGILNFSDQKDPSRXWIOTIKQZTP");
    const char tmp_msg_0[] = {-87, 105, 76, 32, 7, -74, -98, -49, -5, -14, 2, -13, -82, 63, 48, -92, -56, -76, -81, 76, 10, -61, 115, -61, -64, 81, -127, 84, 79, -31, -99, -90, 13, 10, -7, 115, 111, -92, 108, 76, 121, -69, -63, 114, 55, 113, -81, -64, 85, -27, -7, 41, 107, 117, -29, 3, -128, -7, -110, -82, 121, -128, 107, -58, 100, 103, 87, -1, -115, 47, 91, 29, -15, 32, -119, 75, -62, 121, -38, -88, -61, -81, 5, -13, 70, -99, 75, -17, 96, 61, 106, -39, 103};
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
    msg.setTimeStamp(0.19930594646);
    msg.setSource(39981U);
    msg.setSourceEntity(89U);
    msg.setDestination(13413U);
    msg.setDestinationEntity(93U);
    msg.plan_id.assign("YBOHCTHFITDMPAUGLIBMUEGEJUSGMDOVFZQPYJMBZNILTLFXSHSNARQLFSKFQOUEJJTYCWQEZBOBUTJLXIYRLCAQYRJQTHWNDNXAQHDFRWFBP");
    msg.plan_size = 36178U;
    msg.change_time = 0.244268074772;
    msg.change_sid = 13266U;
    msg.change_sname.assign("BHODGBCYQPGYQJBCGEDPMAIWUJKPXSKBTMBTELDVXEFQGGDFJZQPBUZKMTA");
    const char tmp_msg_0[] = {-81, 76, 122, 27, -107, 48, 56, -121, -24, -33, -127, -80, -55, -44, -118, -75, 80, -55, -90, 20, -125, -66, 29, 118, 126, -81, -107, 122, 7, -105, 52, -19, -58, -118, 37};
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
    msg.setTimeStamp(0.117930940246);
    msg.setSource(43485U);
    msg.setSourceEntity(165U);
    msg.setDestination(35122U);
    msg.setDestinationEntity(142U);
    msg.type = 95U;
    msg.op = 222U;
    msg.request_id = 17160U;
    msg.plan_id.assign("LCEHGGAOJFZAFPACSKSPHUNJPADSAWGKXSZBOKIBQPSWZCVNHXYMAJOTMOTCWGZUWLNPTYXCOMRQNRGJMDZTFJIRDEBVALWLDEFMRJBNIIWQBEEVEXWVZYFMMWMAINGETTRRCVCIFKZVNTJMUZPOYNRKNQJMKKPPHGYACLOHXIZHIJLYLXQUSFHSQBLXYYHUGDF");
    msg.flags = 43986U;
    IMC::PlanDBState tmp_msg_0;
    tmp_msg_0.plan_count = 31253U;
    tmp_msg_0.plan_size = 1517952070U;
    tmp_msg_0.change_time = 0.339341059051;
    tmp_msg_0.change_sid = 26014U;
    tmp_msg_0.change_sname.assign("PTANAVWNWWFNOSCTWSUGWMVUKBGSDAZXLSXBWKRSJRULJHOCCHSYOGUABOPMFKUUINKVLTLIBKNFRPJXCKPSCRKMEVAKJMYGBDWULTGHOAITBRXXHVGKVOMAHIJQEOENULIBXZINOJIBDRNBZXJJQWELIQTESFEDLCHAUJPRGMMYVXFOZHAPRIEZXGLQPQFAWGPDQGDTPSQBYJZQYWCEVMQFHYCTVHMYSY");
    const char tmp_tmp_msg_0_0[] = {-14, 93, 101, -75, -95, 0, -26, 76, 8, -48, 93, 35, 126, -109, 4, -77, -38, 88, -26, 72, -87, -128, -44, 21, 97, 12};
    tmp_msg_0.md5.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
    msg.arg.set(tmp_msg_0);
    msg.info.assign("EKLROCVJNJYFANWOTBDPETQCZJDEMCSPDPGTYFXCQCLFDZPYXXOUWYZSLRHPXCLDKKIYBIMZNPTWPMITDTXVFQGIJNQBWHYMRNSLTHK");

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
    msg.setTimeStamp(0.681865939115);
    msg.setSource(54086U);
    msg.setSourceEntity(73U);
    msg.setDestination(13828U);
    msg.setDestinationEntity(254U);
    msg.type = 152U;
    msg.op = 219U;
    msg.request_id = 59800U;
    msg.plan_id.assign("RIDLLZARNDIHRPHHNWOGUHRKDFHNXCSYWWKAPYAOJSNXIQCVFJJAKCKHXAHMLTBJLVWMEBFKPHQWVOGBQEEYMOIZJPUNAUTQGIKVTZMZNRMLBDPEROAUUEMFPSTEKDYAXLPGNPGLNWUBTVCGVLMQNGZBYBFSSDPJATBDTXMDSSMVIEO");
    msg.flags = 20008U;
    IMC::RemoteSensorInfo tmp_msg_0;
    tmp_msg_0.id.assign("OSKQFTTZDZMGJAVZKHOPNLRWNVBEZBJOSBSRGUHWELEOGAAJKYIDESQRQWFJXVSMM");
    tmp_msg_0.sensor_class.assign("JZSYONMPTYEUBLXBQEPGKVXKAOEAVJOPQSNKVZYTWWRSIORSQMRVSWQQPKN");
    tmp_msg_0.lat = 0.304120947735;
    tmp_msg_0.lon = 0.352000583183;
    tmp_msg_0.alt = 0.994763821943;
    tmp_msg_0.heading = 0.327152885664;
    tmp_msg_0.data.assign("FVGVMCMODBPZLSOEUUIABSLLKJTTPABVEETPIDMLTKXUKKYXFUBGYNNFKHFJCAMQBETUAO");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("WQINDPWSJKCRFXUFSQYGTIGABOOLTXHOPYJHXAUKQOMIBGRAYSTVMQSUIEDLFFHLMUDRIBCXBZOVNNFWJCKRQJXQIETRAVTQQZVJMSPMYHWNGHYFX");

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
    msg.setTimeStamp(0.709253518127);
    msg.setSource(42376U);
    msg.setSourceEntity(4U);
    msg.setDestination(4073U);
    msg.setDestinationEntity(195U);
    msg.type = 224U;
    msg.op = 159U;
    msg.request_id = 57763U;
    msg.plan_id.assign("ASTQUFAGBPLHONNICJBDEOSDYZLEWQBXZEKGJJHVNVGQOHKKRRPSVIQWDUETHXQVFRUVBZOBWJRSYKBCYUWFMTXJBRXFKNCOMHZHZKEESTAURUNBVKZFHMLWZCRJUPMCYNQSUPYGVLJ");
    msg.flags = 55336U;
    IMC::HistoricCTD tmp_msg_0;
    tmp_msg_0.conductivity = 0.608773582976;
    tmp_msg_0.temperature = 0.281555486321;
    tmp_msg_0.depth = 0.339525363454;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("UWMEKNZLNZUETARFLDXOQCLSSBVPPKWSCZMGWNINIRARXYRKXMDBYGLIYKOAPPWFZNBNSKCUSF");

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
    msg.setTimeStamp(0.271946485991);
    msg.setSource(3219U);
    msg.setSourceEntity(222U);
    msg.setDestination(12902U);
    msg.setDestinationEntity(163U);
    msg.state = 64U;
    msg.plan_id.assign("NAPJBYUQCXZZWHCOVAWSKFPWMGAWZKRYOZFJKWBDGJHOJCQCVMHZOUXCHSJETEULVZIAPNLGXWYMDVDPCDQKFQVXPMMWHQKCCISGUYEPJLSUBFSTKIHIR");
    msg.plan_eta = 1331685824;
    msg.plan_progress = 0.143750851137;
    msg.man_id.assign("QXHHUCONIXUBSN");
    msg.man_type = 14060U;
    msg.man_eta = 1211729066;
    msg.last_outcome = 156U;

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
    msg.setTimeStamp(0.233941879646);
    msg.setSource(43215U);
    msg.setSourceEntity(203U);
    msg.setDestination(43584U);
    msg.setDestinationEntity(125U);
    msg.state = 99U;
    msg.plan_id.assign("VOXTVQFCNMMBSXXYCNYUIORAMVGXYFJMNNRDUNHUGJWXEORSGABLPBTUAZRPJLTKHJHRUDBELSBPCAIVJDMX");
    msg.plan_eta = 967767102;
    msg.plan_progress = 0.580935441151;
    msg.man_id.assign("ISQOAONEMABCYJBFACABBWKWDPTTQYXEQZNVYXINNEUIJAVPWZNAXXOSICGHZFLXHOPSWFFRLRNMVUKUNMJTMCKIPWZXBLBZFYB");
    msg.man_type = 54302U;
    msg.man_eta = 1119707159;
    msg.last_outcome = 115U;

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
    msg.setTimeStamp(0.279275527085);
    msg.setSource(46279U);
    msg.setSourceEntity(143U);
    msg.setDestination(3737U);
    msg.setDestinationEntity(254U);
    msg.state = 138U;
    msg.plan_id.assign("SEOZCCFCXJSAXPQGOUGGRNSKOLVUVOFEEREIJGWUANOVBQILMYKCPWIUUWLGXHHLXLDJQKHNVTHATSMRFJFASHLPFBRDUOWKEVUTIQBGGKFYRAYDJPCXLUYXWRQPAMQUQWEJZZBCZVNTMJDJITFNLSOYWDYSXYIISBBPDXCIWEGACKRXRIDSABMTPVGPZVBYUDMEPBDZZNZTAFJOETTGAYVZKCERTHYQRXKZOHJFPHMMLKQFBLSNIN");
    msg.plan_eta = 2071601981;
    msg.plan_progress = 0.558254264385;
    msg.man_id.assign("LQGENCPLVNGIEUGRPLXZSYYOGKKNWTEWCHX");
    msg.man_type = 63213U;
    msg.man_eta = -2079128861;
    msg.last_outcome = 118U;

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
    msg.setTimeStamp(0.593122623343);
    msg.setSource(53700U);
    msg.setSourceEntity(141U);
    msg.setDestination(10371U);
    msg.setDestinationEntity(217U);
    msg.name.assign("BKBWCXZDXIIAEEXGLMXUTIMQVNSDOGINQPFXUJBZHKLCZWJGSGYSZRZWCFWVQKZAPVNOQSWBNSTWVHDPJUAJKHOMVYMFGKHBDGRQOAEOCEUUENDRDTIQWAMNMPBYGXLJWCZORGLPFNDKYHT");
    msg.value.assign("NDNPCXYAODLFZWLDYQRAHYZPSOEBBIHRLSELIGTSMXRMQHQWTFTTWMQJDQUOUEZTKJRCMQCPHZFMPZATJEDYICFQWJRJTIKREZCHKXPNFJUGIAFDAUCKLWGWNBOOMTDGCIDANQPVXKWJCUTQGBOBYEKKZKAKYGAURHOAIEQDCJPVZBMVSGUNLVRIXVVKJVSBEGMTGMHSNZUPHXLNGL");
    msg.type = 132U;
    msg.access = 83U;

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
    msg.setTimeStamp(0.529593274154);
    msg.setSource(27797U);
    msg.setSourceEntity(169U);
    msg.setDestination(64517U);
    msg.setDestinationEntity(65U);
    msg.name.assign("WYKZJBBLAPGQGJNPSZFOPEUYKWTQFNXGUAJMAVBSTPWAODQEIKQYDPDCZRHCONYXVMYBHHJRROMLCUEIAXREFKVJTZPPRXNDCDBFLCSLSIKZISHHEPNCXWYSWGCYDOSRAKAWZTUMPWEMAXTVHUNVNQJKTEWXEXQGCFNYMDPJVTRRFFCBLMRIJIWBKMWVGFKLTJBJGLSUZXUHZIONLMUUIHLSLOVROTDGOBCAIGMXFDEDFUZHYVQYHAQEQKVZSB");
    msg.value.assign("BNWGKGUQWFSLDCBBWGOEVTGPIIEPWBQVSBHJZNNTJJBHVNJQAZTNYXAHOUQPGXCRGXJKHKAWLVWDTVMYHZRXVPFCKWTEMIXPXXOBJCBQYEFVASUOIZGDPYJLLURWIYHZAVJHURDUUCQSQVSWGZAMRJMTMIEZORCFCZTKCMYNCBKLGLKPFLYXUSKTQSEIRXIFDHTSDDGVUFCEDHOOPMOXEADOZFALYSALOTQMKFUEKWNQLS");
    msg.type = 53U;
    msg.access = 121U;

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
    msg.setTimeStamp(0.0106713929988);
    msg.setSource(54011U);
    msg.setSourceEntity(25U);
    msg.setDestination(26375U);
    msg.setDestinationEntity(199U);
    msg.name.assign("JKINTEGGFLHHBJVTIJUQEBIDDAVUVWBOWWMMJYFLHDSZUSNYIGLQIHGVWQMRMCSEYUDZEZSHUXRTY");
    msg.value.assign("KRODMSQUMWBWRKJYPGKTABOGTXUQVIUICHVVYLYMVJUDHVXXCIEFHHJJLZLLBYMTRZSJZTPJZZECPORHXIWALHKFRCMCWBDAYAIDKTHPZIAPUFHQPMGTOOABVIDUZURKWESOONPELQGFNDMCLWEJWDSJIRYWSFOMEFQGBUFHIOBNEAQBSQWAAYARXGSQZRNBQBIKKCNTZOTMEVWJSPUTNLCNZGGKSPUGMF");
    msg.type = 142U;
    msg.access = 37U;

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
    msg.setTimeStamp(0.288808786267);
    msg.setSource(64017U);
    msg.setSourceEntity(168U);
    msg.setDestination(37539U);
    msg.setDestinationEntity(87U);
    msg.cmd = 111U;
    msg.op = 214U;
    msg.plan_id.assign("OJQUXQSSZHHVDPIEXMFJNQAUOIFFAVKTPEULXHN");
    msg.params.assign("HCKWERACSZRUJIAGLGAVILXUMFWHOQPVQXVNOLJTWQEBPDIQN");

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
    msg.setTimeStamp(0.0224217919773);
    msg.setSource(24243U);
    msg.setSourceEntity(18U);
    msg.setDestination(23973U);
    msg.setDestinationEntity(152U);
    msg.cmd = 51U;
    msg.op = 27U;
    msg.plan_id.assign("RQLWRNDKTMOBHVVBZFPVLXTUNLQJZOWEEODCEAKYXNDKXVKXPZTRZWASPAXXGDEFALBKTSVHJNZLYFFVQGMGWGUMCAJIDWHEAUPYSWIGURUKDXRMZRQMFASOZCSNHQMSJVPVAQDPNFOBITIYUSADWGEKTOQILRJWEKVMEYY");
    msg.params.assign("SHXVCYVKFMWMKZGMYFZALSVSEVTGLBDILKHKQMEHJRXFZUQGJILBOLHDCOTHHXBNAUWIAKXSCFJXOSYNDVDYQ");

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
    msg.setTimeStamp(0.487498526652);
    msg.setSource(3573U);
    msg.setSourceEntity(30U);
    msg.setDestination(46339U);
    msg.setDestinationEntity(33U);
    msg.cmd = 144U;
    msg.op = 235U;
    msg.plan_id.assign("VIUAWIGAVEKMSOCZEZMROTFGBTDKYXELGLRJWITDFCFDUPUYQWNQNINHVQMMACGQJRKZKUAHZRBPUWJOXECTIWSNOXJHKPLDZFNBKPJSKJGXTSM");
    msg.params.assign("TQASMZOUTDIRUFAFCNHRGHMOIIJTIRPXVGLUFXGNYJDDLPBUBCJISEUVLOLORQEOFHYHUTXXARSBWICFGKBYUAEVCDHYBGNROHLTINSGFPDEXOJKKXWYOLXYYMQVLQRGFVWPCZJXQAMKHYMMGAJDQAKWCKKLZSLPUNUWOPS");

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
    msg.setTimeStamp(0.487073502407);
    msg.setSource(9525U);
    msg.setSourceEntity(33U);
    msg.setDestination(59090U);
    msg.setDestinationEntity(95U);
    msg.group_name.assign("ALXAHGVBSRTBUVCPGKKIVLZG");
    msg.op = 5U;
    msg.lat = 0.380052804513;
    msg.lon = 0.467671975637;
    msg.height = 0.93142312509;
    msg.x = 0.344306495459;
    msg.y = 0.625750213967;
    msg.z = 0.281083905947;
    msg.phi = 0.722029862769;
    msg.theta = 0.458483711241;
    msg.psi = 0.168236556291;
    msg.vx = 0.222278985007;
    msg.vy = 0.824485812378;
    msg.vz = 0.362920100326;
    msg.p = 0.141419182456;
    msg.q = 0.946654446934;
    msg.r = 0.0855972442505;
    msg.svx = 0.553719672253;
    msg.svy = 0.773674159022;
    msg.svz = 0.255588442398;

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
    msg.setTimeStamp(0.661750855129);
    msg.setSource(46076U);
    msg.setSourceEntity(48U);
    msg.setDestination(25276U);
    msg.setDestinationEntity(222U);
    msg.group_name.assign("YEIOQGMCLRMGKTBPDPJKZEYNHAJATBLLIHSASFNEBGKEZGERLQGMVDLUGBRQXSVLNUURUXHVDRJYWJHXQIMCF");
    msg.op = 40U;
    msg.lat = 0.986205173001;
    msg.lon = 0.605926709182;
    msg.height = 0.917054869615;
    msg.x = 0.860537176202;
    msg.y = 0.319548514615;
    msg.z = 0.247687724603;
    msg.phi = 0.0591976506525;
    msg.theta = 0.413163955337;
    msg.psi = 0.283262564653;
    msg.vx = 0.493576480357;
    msg.vy = 0.432616541522;
    msg.vz = 0.571408922082;
    msg.p = 0.937497746851;
    msg.q = 0.799561907316;
    msg.r = 0.598855604808;
    msg.svx = 0.768617836605;
    msg.svy = 0.560802577051;
    msg.svz = 0.234993259666;

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
    msg.setTimeStamp(0.972250260975);
    msg.setSource(4085U);
    msg.setSourceEntity(252U);
    msg.setDestination(26969U);
    msg.setDestinationEntity(16U);
    msg.group_name.assign("MSGGMJIQOMPKBCWUKEJDWSUFJZYYHRFHAPBATRHYHBNMBVVPTDWUIWLOCWQLKZYKZRGRAEVFICTDQOIHEEJWSFIBPNXMTBBRFNOHLZOYRVSMATKCSOYCGYUIXYQPJEHZUQNCHKGOVILSKNLXMFTAPEVVLBEXEKXERMLDYCVODYGPFAZIUAWBINFZKFNXWD");
    msg.op = 185U;
    msg.lat = 0.689137303548;
    msg.lon = 0.53382795438;
    msg.height = 0.405657819219;
    msg.x = 0.414743460485;
    msg.y = 0.397710754928;
    msg.z = 0.00490439945562;
    msg.phi = 0.348830726848;
    msg.theta = 0.923208530747;
    msg.psi = 0.942907169147;
    msg.vx = 0.102099298714;
    msg.vy = 0.31482780353;
    msg.vz = 0.986839130084;
    msg.p = 0.370063761289;
    msg.q = 0.271467798926;
    msg.r = 0.704127661224;
    msg.svx = 0.760990818203;
    msg.svy = 0.524612593564;
    msg.svz = 0.270284264079;

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
    msg.setTimeStamp(0.759735514234);
    msg.setSource(57435U);
    msg.setSourceEntity(214U);
    msg.setDestination(40497U);
    msg.setDestinationEntity(160U);
    msg.plan_id.assign("OXMTYMIOZNUMSNQWVETUQMBZNBJXZVHJZREWFKIGDZEWWBEZDIJQOUDLPHJEGFPUBHJQXBHTMXIWNKGPLKBACUHENTSCIUYOCAFSWVVSBEFAFJCNORWZHKGYTQDIPFAUASFVORKLBALSRGLNFRQAOKQYLZTURQOPDVJTOIPSFCNXPRKLAGRWHZPAHGJKVDQTNMYTCGPIYGXLDMUCLYEEEYDTYBRNMWBXUMAV");
    msg.type = 186U;
    msg.properties = 217U;
    msg.durations.assign("RTEVNUFZFJRJMTDHJVANINSAJSIIGNYRZKBOWZDVAVPXWSEOLOTMTQCZBEHDOKUWMVAOZQYXWXXQPJNNQYBSRPXLXROMSWHZEWCGOZAWHKPPRVPTPIYCDCVJKZAVLIJEMWDTBMISKUTOTKCUALIJLHEKXRLMTOHBHTUINEGDUMUP");
    msg.distances.assign("LJKOMRMTTNWMYXPMVFGGRATNVHUDENSHUUZTCFVEPOXKMBVYGYJRUBDLOESFIWXOBHWAWNRUSCSHACLDEIWIVXPFZKEFRVWNRHXEVPQBYKVZC");
    msg.actions.assign("PFLGVIISJAMPOKVVAMHGMWODKOBEFNHKMZDFVRLXTBMYPRVPTKXORRIDWEEJQEDJZPOGYKZIFPXTADSYUUCTQCGZDXZONCQBRJHUCNLTJLUYGZHRKDMHOAWGVEZQRWDPPIFLXUTGRLSNVUJXHOYCJWYBCNBDYWAABKRLJUSLZGEMTWFUXKNXUCEMAFGHITNWNQGPFCABHM");
    msg.fuel.assign("VHAIYAVGXVABUQZLIJWRPSGKGXKJLPDTVWQMPUUVHTXZZYKKHWRJAKQSJZRHPKIGBGOHPFCMTBLLKEXEBUHJXBFONAKUESXCZDTJOLVQJINECJDCMCNOZDIPQIVGG");

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
    msg.setTimeStamp(0.47781885909);
    msg.setSource(54421U);
    msg.setSourceEntity(123U);
    msg.setDestination(12261U);
    msg.setDestinationEntity(130U);
    msg.plan_id.assign("APBOUEKRQUDWMHHPFHMOGEWFZEIIADLCGJSCJVSPDNYMQYTKLWXZABOSMHIWZOVZCUUYGPIAASIGGRYGRNLFBJZJMMDBDNYQJXWKHNBGWQEVBWKGFZMLKVPBCOCTQHOSJAEHIMHZNYIXWHTJZBDDFVLRNCSFRIJACQAVLKDRIUSQBXPQOUGKFYFD");
    msg.type = 137U;
    msg.properties = 108U;
    msg.durations.assign("IRWSDZVDYRJBKLOZCVNZXMBSUMMGNJFPFMWTXVEHCEAYTVPOHMKLLUYLLPLGMADXIEKEFCCVTXTUNKZQDGMYBIUTVABJRTJIVPIHBQWYSEHWECEZRGSMIOYYFKMGKSFYPHHHJTBIQDJKSTZIQPOXNZIDHUWQWCHDZNAFZQBSWOWTPAFDJXCBFQULUHODNYDQGUEKAXYRLQKXOCOFNGAFAAGVQUSKJVGCWJNURVNJ");
    msg.distances.assign("KMJGYZRWWSDYNC");
    msg.actions.assign("IMGKJAJYRXDXIAZRFHWSBGPGLEVQAOSIVNA");
    msg.fuel.assign("SPLESFOJYNMUPGLBJKOHDSCQMLFZHPKRKDMTUNIKBTPBQMVTZCPWWDYHEIHIVVKNZTZPVZYWDXVHNKMHCRYUKGFNCEWTC");

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
    msg.setTimeStamp(0.864991549683);
    msg.setSource(43122U);
    msg.setSourceEntity(53U);
    msg.setDestination(7742U);
    msg.setDestinationEntity(34U);
    msg.plan_id.assign("OZAUYUMHXFZOWCLFAFMRSEMBXSHRTJGWUQUKCTOYDIGQVHCNQRYAJXZMRMVDMFZLCHDPKPYFXYISKYKWGJKGBVJCNZJTAIILNFSQZSBWQHGEBLPYIZEXVRSOHHCQWSEDJLUUDNLWWBZRUDZYABYJFIQOTXQSKBO");
    msg.type = 193U;
    msg.properties = 42U;
    msg.durations.assign("BIWOQHNADIFCBJTNVZIJCXGTWHGSMOSWEPDLSRVEUXPMJOFRMYOVPFGZEWPHLXTRXRGMFENYLBJTEJYTICJCLEDYVDFVFNXGGUOTJWWYVPQLSGCKSIEITLQHYUXEOZFOUUHNATSQLVCCYHYQMBHUNKHMIBUNNCXBPVCQXQAUZOWHWUCYAILZQUMSSRAMSKWLFGAPRKQV");
    msg.distances.assign("MKNCCBMMRAHIMXOGBVWJBYYVFKTDZOLCIOFFOJHSAYYUJXYDLBZWWPGGIHCTKIOTSXVLRGIWMZGAQOHSCELUNWPQSODBZHTFPMOXNQNPZZPDMRUZQYBIZDICPLQ");
    msg.actions.assign("MRAXSBBHMUNOGSWFDHUQPEXDFYIPAVUCAAJIDZPCGLXESDIEZHMQGVUAYKGWBVCTNLSMFNAFMOEUDRLIUZDKLPADNISKZXCWYFKBFSWTFTUNBQEIUWZPWHVGBIQFRQNCTOQTKDJTRREZZMKQGMLTGCMLJMCJHXSTZJCNXKZHFSNOOQSVOSHHVRWRKPBUGNEAVOXBPVZ");
    msg.fuel.assign("RBPVLSVNZQNWEJVSLXEUGKZRUVMWQJZDUTDTECBGKOMNMQDDZZNRVWYICAABSOFCVNHBOYVMIBEHXAKCVNAWDKJGLYJEBAWUNPXDJOEAIKSYQZYYQRLSIXHCPEHOLCHMHDHHFQGAQSYQBTPBGERRJTQSDCWXBGLKUMLGVFSGIWCUAUKDIPK");

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
    msg.setTimeStamp(0.626468918528);
    msg.setSource(57505U);
    msg.setSourceEntity(227U);
    msg.setDestination(21712U);
    msg.setDestinationEntity(40U);
    msg.lat = 0.79937932442;
    msg.lon = 0.115544149733;
    msg.depth = 0.000888128036898;
    msg.roll = 0.240983263163;
    msg.pitch = 0.739326904182;
    msg.yaw = 0.969872754575;
    msg.rcp_time = 0.562501591062;
    msg.sid.assign("WYTJETAIJRICMEHBSHOAYREBKVZNKWRWIHVGWBVBYXCRTIIJYGXODYOJJNOEYAALMJLUUNJECDSKCFHHDIYZVKGEPYREZBPBVLGQTNFCAESHAPMKFTSFQSCFHHGLSFTXRAIPZBCNDNAXMUQLPDWSVVUQJMHTBNNFETFMTVDPQOWXKOILLXOAGWXLUMBCRSKZOKOGRQDXHDIWPJUGVZWNM");
    msg.s_type = 95U;

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
    msg.setTimeStamp(0.564708269877);
    msg.setSource(28362U);
    msg.setSourceEntity(68U);
    msg.setDestination(29929U);
    msg.setDestinationEntity(232U);
    msg.lat = 0.638590399489;
    msg.lon = 0.050437215339;
    msg.depth = 0.893252202581;
    msg.roll = 0.743056797126;
    msg.pitch = 0.679139433452;
    msg.yaw = 0.338669365192;
    msg.rcp_time = 0.55382131851;
    msg.sid.assign("WABGGMQGFQUNBIHXOSQNVPVIYAKJCZUSEOGOWNDQMOPALJVVEPZVNKZHUPJCCERKF");
    msg.s_type = 66U;

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
    msg.setTimeStamp(0.0215357021935);
    msg.setSource(50622U);
    msg.setSourceEntity(136U);
    msg.setDestination(20835U);
    msg.setDestinationEntity(72U);
    msg.lat = 0.0243045639413;
    msg.lon = 0.971814660724;
    msg.depth = 0.904407272102;
    msg.roll = 0.707742782238;
    msg.pitch = 0.379570999063;
    msg.yaw = 0.241818928492;
    msg.rcp_time = 0.99298805437;
    msg.sid.assign("IXPGJLSNDNPADCCCYVHGEYDWBRFCSROGVVWEEXZBQJHSKLWZEUUUWUOLPZOTXTYXOMVRKNQJJPCVFUPJXGHDMWYIFTXAMSQEJPXKMBALPDIIEHSNXZUVADJRIHZTIVPIHRUVFGGUQNWLZMBQEMOXALBNY");
    msg.s_type = 188U;

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
    msg.setTimeStamp(0.162090424565);
    msg.setSource(65372U);
    msg.setSourceEntity(207U);
    msg.setDestination(58990U);
    msg.setDestinationEntity(212U);
    msg.id.assign("MBNEXMXOBSLJXUYMPHSUEJMPFYIRBSQEQCSHCKIGKCAVPYEBEZMLAHTVURXTYZSOENMZWWBLJVAETRRJNKHGMWTSRHPNXEWTXOOGFGSLNFZBOPSVXDUUVGORDPCVETWVILWZDIIFFDAZMSA");
    msg.sensor_class.assign("OGHERECDVZBXMLKSGDWKBVXTRULLQVOMYOUSHGDZGFVNAMAKTSLUYNATLDWFEGCYITRRWTPLKASRCEEOSXV");
    msg.lat = 0.843661472451;
    msg.lon = 0.560640637092;
    msg.alt = 0.952399504637;
    msg.heading = 0.42216275968;
    msg.data.assign("TQNTIQHPTYEBBHKPVPIMDDCGRRQGXKBJAGOUNIIAWYUWDZXTHNKDXBHYMCHJASLLQ");

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
    msg.setTimeStamp(0.846456477303);
    msg.setSource(52565U);
    msg.setSourceEntity(114U);
    msg.setDestination(6278U);
    msg.setDestinationEntity(222U);
    msg.id.assign("RUYQYOLYYKMOIWPIZEELOGIMNSPCLVDTQZOQYUEETNZBMXTNXRLQSPCNEIUCBHDXGFTFFHSUHBZIPPFAOVJBGBWBLISWQTDLRWUBXZAAEUYCXQTFSFCHRIFTWOEDWY");
    msg.sensor_class.assign("IHXRSXDAIPDRDUSLGVCIEHVIHOCGMIOOKRCMWOIJSKHNPDXZSMYKRHMBDTBUKSQIMQBNWQBYENZFRQTWOTQFWPATRJUAZTTYXWHBMAJCFCGPYEWESLZEPRSW");
    msg.lat = 0.845962567723;
    msg.lon = 0.837592740593;
    msg.alt = 0.918361334018;
    msg.heading = 0.642353352776;
    msg.data.assign("VPOMYMLNFQPXSDBSIJPTMRQLUPRSEGODHHKROXXFTWOWPYBKUJRINIEEC");

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
    msg.setTimeStamp(0.778614815376);
    msg.setSource(54121U);
    msg.setSourceEntity(197U);
    msg.setDestination(63361U);
    msg.setDestinationEntity(43U);
    msg.id.assign("DVETBFRMAECUNYXYMXTVDLDVXXTJBCBERHFKKXOBPKJNAJUSKHFKJWOWMNPHXIJWWSMGKKKIUPHNCACGAKTIYVRGEGZLASOSSFZ");
    msg.sensor_class.assign("SRFJGFWAYADLIREZFOUNBTLYWKETAZTNADHRPJIPOHTYSLCCQWARXRVEYJFJNAPPLJKWRNAUEEZLCHPPHEPV");
    msg.lat = 0.41378541856;
    msg.lon = 0.282219807509;
    msg.alt = 0.374076960516;
    msg.heading = 0.789866593735;
    msg.data.assign("JKNAKSLPMRLCGMQCNSSHORQIVOGHFKEAHBDXBWSPDEQCXZJIFNRKTBMDRRJIJGCGCYJAKTLYIRADHODZDCBFURSMSDYSLPYSCFPJTRQTTQOQXHNDAIQOFNMSCKLYZJYEMGVNEOGTHWXPBBWKZMUNBEWLFXIWURPHIBVJFTQ");

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
    msg.setTimeStamp(0.831995288997);
    msg.setSource(52366U);
    msg.setSourceEntity(247U);
    msg.setDestination(56995U);
    msg.setDestinationEntity(126U);
    msg.msg_type.assign("OJFYVJUKPWASENISXTMZBSVWMGCPTWUHHUMMGMAJBXMLYVZJMSVAQ");
    msg.sensor_class.assign("DTMWYPHOQSBCDRNBWRJEIYXQYIGGGPCHWVTJXULPIFFSHIIBZASESPTFUEAWYHBQQNLECZROOMSHIRTGRGRLSUFCZTSAYMJJODFEYOVZKRQVCUVYTNIKQMMEAMCXPLATANPCAVBBPDUQNDAMDACKNDXLW");
    msg.mmsi.assign("YWWTISSQLCKCDUNDLUCYBSWBHBWJVCDTMYRQWRLGOUSFQFWEMELXBBPRXSYPHPHAFQKORMEWVAGGAKOXXUUCVEBYKKRTLNVMZJMQDMVANAYWHQBEOJVTZUPMHRJTEZFOFTWJIIQYRZBZITRDOLGBNHFXRMHKQPIUGJIPGALNEDZICJBDNAOSCYGY");
    msg.callsign.assign("WHDJBUTEBGQQONRMXBBFARAOCMCVOOBKWITCZSGLYYWMGCCFMVIPXPUUKXRUJJWPYXGUYODTSMDQBWLWOLAYPSNDN");
    msg.name.assign("YPGAETZUAGTOYCIMDIRHCYEPLZIOVJPZASGWOECANFKGIPKHQFQLGVGTNHLGCTTDXOEGHTTQFWRASDSJOBBINWEUJORBXEWPKREUIMNUSMBYXKRHBDLZPHZADBJXSACPVLWVPMQXRCNFBTXLBRMWPMKUAWLXYUOSWSNYEQ");
    msg.nav_status = 190U;
    msg.type_and_cargo = 30U;
    msg.lat = 0.879706195104;
    msg.lon = 0.872162495354;
    msg.course = 0.478978851786;
    msg.speed = 0.929415969201;
    msg.a = 0.914175427425;
    msg.b = 0.727951333888;
    msg.c = 0.150342254157;
    msg.d = 0.891113700223;
    msg.draught = 0.843844848999;

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
    msg.setTimeStamp(0.331548960039);
    msg.setSource(50181U);
    msg.setSourceEntity(122U);
    msg.setDestination(47261U);
    msg.setDestinationEntity(106U);
    msg.msg_type.assign("ATPAZCEXKXKAERXMFUVFFYRDPQFNTUUDGIARAOLJBMHKGDQVPTUAHGUYTXTISQXBMHLJKSBORFOCYNYUTNSNNTZRNWV");
    msg.sensor_class.assign("URAJHXKJITFTBZMROZOJGJHNYDKMUEFQWDTIHARBGGULJVJFFAYONXGQCEIGJBCKDIVSJUOOTWDTQPBREFSLVSYHNECVSTDKRQ");
    msg.mmsi.assign("NAUDDGZJEYSMRPDMINAOVGZYGTZNQRDAUVKXCJOJIDGQCTCHETIUJOQVSYSKKYXKKMLUMIBVSBCWKPDTJMPXL");
    msg.callsign.assign("HEQVVGULNKKEWIAKCAQRYVGLIRWLMVCXCFDLILJRXNCFUDMBAZYXZMZRPTTBNSWHFEAYUQJEXGPBBVFDNTLIGSRUISBPFNOBSERNZEZIWTNPFGTOABUKXCSWQVGOUZWSUZFZRJIVNJLHHQPJEHWGOE");
    msg.name.assign("YZNZAXGNTSTXLLYBSUTZWPPTUMMXBTGDMXMAWFUFQAUBJSRFVINZPJJVSEVGFQKWWHREEPRXQIVINIRCFWPJWTCUGXMDLEONKDDOQZRSOUVMOILDQOGYVMHRAUMRXAXAYPZLBECPOHLGAGZFSQEPQBORBYSFMGWLWPRVNINVBKTWTOCJJSJJESDCHFDXNCCTGGHYOCZWKSAHEKFIVUKNTYKZDOEKJPMBI");
    msg.nav_status = 6U;
    msg.type_and_cargo = 152U;
    msg.lat = 0.791187227434;
    msg.lon = 0.38744683573;
    msg.course = 0.369030530049;
    msg.speed = 0.00661149595985;
    msg.a = 0.973662140796;
    msg.b = 0.787987254705;
    msg.c = 0.522918965043;
    msg.d = 0.715308267512;
    msg.draught = 0.074500894778;

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
    msg.setTimeStamp(0.468550466566);
    msg.setSource(54649U);
    msg.setSourceEntity(124U);
    msg.setDestination(62721U);
    msg.setDestinationEntity(81U);
    msg.msg_type.assign("NQUUPNKPFWUEGEDIQDKIIWEOEWBDKQSOGVFBTWDCTLTJMJDHBHJKJUQOFCLBZALFOSJKRKONCSPBSNPCVEWWFMDIUBAIUIZWCSQVJTNIRSZMXPBMQVRYKHRRGHQCOZXLEMDTH");
    msg.sensor_class.assign("YKDFWLKSTMLEYYFDPRBUSABOUFEEUNOQWBQPDZKLVVYBTGXTKDSNTFIUPSANULMQBBEEUOEIKCJTGQXWMMHEZMCHXKSKMAQRYRKFAZXSSRIWBNMSLAJYXJYQNDTFCRPOHGWAZCHDGCPVRHQGDLNWWDI");
    msg.mmsi.assign("YCOWSUIPOCDMTLLTPFTAGBWVSFXUPFGVWSQHEGEJEILMTCPZOBBJCMANHHXLIDCIAIMUKDULJEDYBEIKVNCVMSCTYLNZKGJPWVWLHBKHLFYKBUURRRXUMNJGAOZJGMYSVGDREOAXSTPAZBQQYLAR");
    msg.callsign.assign("TXYUDBWAFNXZRJIRVBRLMYQZZVDXQUAEYUNMWYLPCEIMBNHVIYVAAELDMSQMSDOKZZCGMILCUJRKWLKOIWHSODGPICJPBXJQBFHBPTLLVHCRGSFHHJICCTINVXT");
    msg.name.assign("XXGWBYFVMQBGBMWYENALLTJYWLHLFAWRIJUWCTNIESVWBTHREKUHEVDHRCZDBVCFHNJWSUCODQNKZOBKVKTHUSONYVZCZXFWZ");
    msg.nav_status = 71U;
    msg.type_and_cargo = 154U;
    msg.lat = 0.552621136494;
    msg.lon = 0.038189301564;
    msg.course = 0.582754829613;
    msg.speed = 0.707988495204;
    msg.a = 0.568331608844;
    msg.b = 0.407037059829;
    msg.c = 0.377100702523;
    msg.d = 0.193459510473;
    msg.draught = 0.341333878717;

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
    msg.setTimeStamp(0.590229087751);
    msg.setSource(44962U);
    msg.setSourceEntity(71U);
    msg.setDestination(3488U);
    msg.setDestinationEntity(175U);
    msg.id.assign("CPGHXZTHEGCTMLPFBPPEQUMDXEFKNBGUJNYJKPHDKYBMKOJQZWDSRRMWIJBDYXVMHQEHATQVJUVUSLGYILCOIPTSJRLLZ");

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
    msg.setTimeStamp(0.231591353164);
    msg.setSource(31631U);
    msg.setSourceEntity(10U);
    msg.setDestination(52353U);
    msg.setDestinationEntity(177U);
    msg.id.assign("XYKLTRUOQRVXWBPYTSWWWPHIFAWCPTIERYBWMEALXQJSJTGIHBMKYBYLZPGDOSOFUURXQRMTIVBFCJGDDCFVCWMICVNVTFJHYMOKXFMADKUWMBNLJGZADJEGQLCHMDUYEQPNZSZIKRUEDNJONASLZSRRCOEUMVOFZNHFCGSHPRGBJNLRU");

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
    msg.setTimeStamp(0.551655427674);
    msg.setSource(52049U);
    msg.setSourceEntity(126U);
    msg.setDestination(31171U);
    msg.setDestinationEntity(94U);
    msg.id.assign("QCUFEGYTSTJKDEGHOXFOMMKFHETPNVOCZTBGYAWFHTXASMIZEBLQUEWBIJEVFRMMODILAVOLUAFNSICGTSPPBYQAKVLSWLMIJBCXHUCONNNAHEQDCGRDKHUTPYRMDVAYQJGHGBZHALJABXXMZWQFSURXMJYLBADVDRXYRKQYWWOHHKCSIUZELGR");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("FDKBGNUCGEFKAQFEBNICWRLRBYNIOACBRZIYXCMSJNMHMLWRYMDCRXZAJXZZDFUIQKGSTTPYUVJZOHMKVGVBZBKQYASYXNUNOQZHTVEWPO");
    tmp_msg_0.feature_type = 123U;
    tmp_msg_0.rgb_red = 163U;
    tmp_msg_0.rgb_green = 15U;
    tmp_msg_0.rgb_blue = 197U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.0722315762655;
    tmp_tmp_msg_0_0.lon = 0.0626555109992;
    tmp_tmp_msg_0_0.alt = 0.707974354812;
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
    msg.setTimeStamp(0.027403016689);
    msg.setSource(25542U);
    msg.setSourceEntity(14U);
    msg.setDestination(13379U);
    msg.setDestinationEntity(15U);
    msg.id.assign("NOQMJAUJPNELKWCVACJEHDRBVGJNYCVVFKESFPOHZJSACSWHLMESULCTKVFACOGBTAGHFYDSXIXIPEUNYRALZTSFRTUWSBMQOBQHQDBXXFBYMJNDYZZDZFQEBCFEWTRPJQWDZDZATSOHGMQMHNPUXXZSPLGZHEDILRLBTOYMAUTHTNAPQUCKYLMOIRBDRXYOQRAXNXNIGPYFIXGKW");
    msg.feature_type = 155U;
    msg.rgb_red = 1U;
    msg.rgb_green = 173U;
    msg.rgb_blue = 153U;

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
    msg.setTimeStamp(0.839004664045);
    msg.setSource(52176U);
    msg.setSourceEntity(52U);
    msg.setDestination(17140U);
    msg.setDestinationEntity(89U);
    msg.id.assign("HNCKLPCDCEMAFOSOMBPAPLJYDNFBTEPFBJPGNHNKUXACBHWZYKOEOPFIUQDBOANNRSZYZFRYMZSYOXRIZGJXMFZFUMTBKDRQNIOMZWTVEYUUMTPUXHQDQVCADHTQGDXMCBBLZFIYMJGSXGUVRGGWQCISREQIOKWRAJEGWCULUYQRJTKSHIZINKGVDRWSIISXDOATLEX");
    msg.feature_type = 49U;
    msg.rgb_red = 77U;
    msg.rgb_green = 17U;
    msg.rgb_blue = 206U;

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
    msg.setTimeStamp(0.889287092952);
    msg.setSource(34748U);
    msg.setSourceEntity(232U);
    msg.setDestination(23746U);
    msg.setDestinationEntity(146U);
    msg.id.assign("LBESLKKBTMRXSDCWLPDEUYYGUTOKRFHYLIVQMMUUNKZMIJSAGWZOHXJVTCZIGFNJIJXAGZCNWRIAZPEEJSHJFRCLIYZOMBCSXQWGWODCNOGXFQQDTVFNWENJBHBCAQHMDCHVPMUPAGPGLDUPWMELHTXBVTCLYWUTOFVZDXKWAAXQYDEZNPFRVGOJABBQHV");
    msg.feature_type = 207U;
    msg.rgb_red = 251U;
    msg.rgb_green = 83U;
    msg.rgb_blue = 222U;

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
    msg.setTimeStamp(0.18225556471);
    msg.setSource(11791U);
    msg.setSourceEntity(238U);
    msg.setDestination(7571U);
    msg.setDestinationEntity(6U);
    msg.lat = 0.831738750275;
    msg.lon = 0.725597881679;
    msg.alt = 0.740920038595;

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
    msg.setTimeStamp(0.352384286599);
    msg.setSource(20741U);
    msg.setSourceEntity(233U);
    msg.setDestination(48063U);
    msg.setDestinationEntity(185U);
    msg.lat = 0.100976012737;
    msg.lon = 0.552472032075;
    msg.alt = 0.95147350032;

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
    msg.setTimeStamp(0.669811118003);
    msg.setSource(13132U);
    msg.setSourceEntity(148U);
    msg.setDestination(26526U);
    msg.setDestinationEntity(65U);
    msg.lat = 0.0526222768769;
    msg.lon = 0.851443644378;
    msg.alt = 0.636436819791;

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
    msg.setTimeStamp(0.718538666069);
    msg.setSource(49889U);
    msg.setSourceEntity(223U);
    msg.setDestination(43252U);
    msg.setDestinationEntity(233U);
    msg.type = 190U;
    msg.id.assign("ACDUUNHMBOWRKUOFMTKNGZEGKZIQTPKSJYRYWXOVPJQFFPHCJQ");
    IMC::HistoricTelemetry tmp_msg_0;
    tmp_msg_0.altitude = 0.428006956904;
    tmp_msg_0.roll = 37268U;
    tmp_msg_0.pitch = 5159U;
    tmp_msg_0.yaw = 2086U;
    tmp_msg_0.speed = -7615;
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
    msg.setTimeStamp(0.383194707537);
    msg.setSource(15168U);
    msg.setSourceEntity(31U);
    msg.setDestination(61993U);
    msg.setDestinationEntity(102U);
    msg.type = 187U;
    msg.id.assign("RJGTQIACPBNZBITCPVWFQAKYEZDSUSCHIBJXEFCKTWBUVZXOEXUWHQDZOVSTVBWVLFLSGMPWMAJGEUWIEWYQXOHYSRPTBMBOPGQYSDNOPFNDIEXWQAIJWQWHYLFBAZNNRZHHIXMMEYJZKLPFFGMXQRMATLVKNJKOZXKLAIMZVNCCUJSGFRKHZHAEUKCERTCKNEJDAOVTNBGISXNPVAUXYOJHTKSYOYDGDFTQDCRHUSRPBQ");
    IMC::EulerAngles tmp_msg_0;
    tmp_msg_0.time = 0.598807600457;
    tmp_msg_0.phi = 0.888742736178;
    tmp_msg_0.theta = 0.364611351016;
    tmp_msg_0.psi = 0.83984000439;
    tmp_msg_0.psi_magnetic = 0.175342104375;
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
    msg.setTimeStamp(0.557318919144);
    msg.setSource(55084U);
    msg.setSourceEntity(190U);
    msg.setDestination(14204U);
    msg.setDestinationEntity(138U);
    msg.type = 89U;
    msg.id.assign("ABEZPKAQJDCWCUUHVRBOGFVIFMZGZRTMSYXPYXA");
    IMC::RemoteActions tmp_msg_0;
    tmp_msg_0.actions.assign("OEGBLMXANEPIHYGMIGCOBDBAFTJHXHXCPPYALDOYVJERUCDLFQWZOTVAFUUNCFUDJLGPVSEKCSYMTWZVWLRBPJSTQOAFKGSGXWOINEHTIDZUWQPBGAUFIOKRVDZDKGTPOXJIQHJHOJELR");
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
    msg.setTimeStamp(0.334607447483);
    msg.setSource(50093U);
    msg.setSourceEntity(136U);
    msg.setDestination(34260U);
    msg.setDestinationEntity(161U);
    msg.localname.assign("QMOWHLKHVFAZBNWPNGJOCFXPQJPRVDKDPSMRSENGSIGTAJWGSXDDMOUUVMSXCLHIZZIPWADHPAMDURBICHLCLAIZZVNMQKVBEUZRFJOGDXUTVM");

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
    msg.setTimeStamp(0.916148795422);
    msg.setSource(53207U);
    msg.setSourceEntity(142U);
    msg.setDestination(39444U);
    msg.setDestinationEntity(77U);
    msg.localname.assign("EUSBKBZJGIRQLYVWOBXSOFIMBIQOGAGLOAKPKQDYDCDOJZMFVVRPZFKMZECCGGXJJVEIFKPREOCQXRGVIVTKUHLJLQHBCNTLAQBYEMXTXWXHFLTDEUSJVPNMJTSGHAHQZUHTASNMNKPILUROOUGKDLNYMDCAVCYPREQXQBRFYKAUDSLTFKSUOBTWAYDIGC");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("RFNHVKVSYZZSDZAEIAYDHJHPLXDVHFTNBIFVQMIESPZEEJYUZPVFJYXRJDQOFOGLZMHKMKKLUNWCSCIPDMKPCCYNHQYADUDUQYVHWMIWKXIAVDQBFBOFEZNTMJLTCKGRTBPSCTBYAMLJSXKTEZLKLMHEQWEVGOOTREGVZTWFFPCCOYRRGUXQCOLPRGNEWQINPIUBNW");
    tmp_msg_0.sys_type = 252U;
    tmp_msg_0.owner = 6450U;
    tmp_msg_0.lat = 0.788103395965;
    tmp_msg_0.lon = 0.470365986408;
    tmp_msg_0.height = 0.0684526721698;
    tmp_msg_0.services.assign("FADLYHYNJEJBCTQGOAZKVAZLPRZBPRTULYCBAOSIQCVEBTBTUHDTXTGUVFHDNWJNZWSICQJHIWRBQIPBDGKVPMUXVBGLSIWYWQOZGEEFJPQYLMGKCMCMROMZRYLXITFLZFUONWVYLFWVNFFXFJWXIEUUCWSZIG");
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
    msg.setTimeStamp(0.815843327129);
    msg.setSource(20340U);
    msg.setSourceEntity(216U);
    msg.setDestination(8102U);
    msg.setDestinationEntity(224U);
    msg.localname.assign("WPGFGELBZQUSGFJDEPHEDCUNNSRZYKQYNXIOKXCSXHGMQUTZQUYPRTZYLAGJFPODTKUK");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("TNUSNZUWXKWZMSZSXTHSJFWAEESEGCXLGIBWFEBQWBKPDOGPIYJBZUXEKWRKCRBBPLFNLYLCYQQFOVSUXMGRWBGJCPLNYFDAQMPEVPIOJDJLRLTSKPMNJMHTTANPYFUNZIB");
    tmp_msg_0.sys_type = 39U;
    tmp_msg_0.owner = 11980U;
    tmp_msg_0.lat = 0.227761797192;
    tmp_msg_0.lon = 0.558686879193;
    tmp_msg_0.height = 0.801863110102;
    tmp_msg_0.services.assign("BUHHXTQGSIMTPSCYHTAASYGLYOSCDVRSXVWAEEVQYX");
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
    msg.setTimeStamp(0.129257266069);
    msg.setSource(34842U);
    msg.setSourceEntity(88U);
    msg.setDestination(7642U);
    msg.setDestinationEntity(30U);
    msg.timeline.assign("IKAZHFUWHWXJXDDUMLUALFVPIBWWUBECCUYTQOYJEIMFEGCLJOJSPDJBBCPCZWXWNBARMNXQEARAWBKVRNRSEBNWHVCVRTOTGDICXKTGDGPKGRGEOIZFTPMSIONAWZNGUOYPFGXOXEOFFQDXDESPBLIYQJKKBLTGJRJHOHVZZYSJDRSYYNNQZKQPVTBIHPJVLAVYSZUFQMDNHFEXHLSYDUHPSTZMKQLYKAANCQIQVEMOT");
    msg.predicate.assign("NBPWWKBLDNIWJILJVDUAOIEMFOTHAYGAHNIPEJCMRPKVHUGAXDXYTYKPFAXQADLNLMENKVLHLPCPJGQOQRRVMZNIUKHERNROLSYGUWFKBLCQGSWHZYJKJFCXZFPBYRTOTQRMVKNZXATGGBUSQHQOARIJBKVXJLIAZDNFMTHSITORUZTSZXDDTIYUSPCDXJVVFUOGHYZEQQSZTDWYDWIFMCHMWONSEFBMWRWBCAGCXOCEQJSC");
    msg.attributes.assign("RYDLPBMNWMEAZBZZIKITOFORCIUPLWQNUKNKFGNXGJHXTCITZWEPJRVHLULOJPSMOJBTXYLHQPGHZVYTOHGYGEJIQPOXXBRMRDRSKXLQCYWSEWGHFKVIRKZUVEHYLPVVPFNACMVAIWQXMQAGBXYJCWJWKYNOSGOVVEUWPGSVKNFTXAXINPTHTAUQMYLYWASCRDMAZSGNUNAFFIQMCH");

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
    msg.setTimeStamp(0.922755622814);
    msg.setSource(50729U);
    msg.setSourceEntity(129U);
    msg.setDestination(55059U);
    msg.setDestinationEntity(238U);
    msg.timeline.assign("AOQHSILCZYGEYXEWTSQYKMEDVCWLBIYBUZVRTTYMSNXPONKRWCZEICPNDNVOZQFHICDCVCUXLHGSKFFLHMQMXANYMEOJGKLNTUYVAJFHVGRKFODBZCSJVQRWAPWIZZZXWQDXQTOTETUBXNLSTFWFJJJGTVIGIKPQYUHLJIGAHGQOYAOLLPCRMSBDFZXDXKSNEDIMUGRBBVUWLITKPDJHSCEPEHRUDKRBVUPMAFH");
    msg.predicate.assign("SNWYKGSCUFGQDUHRDZFQMAHFIKLIEJKNMRZGQMPXIBVLSLMVZVBIKQBEKYJZZLCOEDFVBYBZUTQPTTQEAIFUWSXOKUJVJVFKWTRYCCKDPFXTGRQJHXTEOIVSTUADKYBJMXIXONHGHAOOBWSDXOPSCHJZVAEEYWSRUMMHHYTGDLPEZLYRLCFRJPZJNXUANXLUIDGCNHEIDSCAPRGQBYWPONKBYTOFQOAPWDXMMRZWAUMQ");
    msg.attributes.assign("UWNLGIHURNOILVJUDICVKXQ");

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
    msg.setTimeStamp(0.650887680097);
    msg.setSource(51127U);
    msg.setSourceEntity(126U);
    msg.setDestination(1916U);
    msg.setDestinationEntity(81U);
    msg.timeline.assign("OFPOEMIRCUUADGNXGPPWOQFTSDVO");
    msg.predicate.assign("THDGXIVCXUMCVRDOWSNLTXCHVDVFZDNHKPIUBBPTFYGCHMNYIKBIYFMNANUXVUSALIXWRWQEJQJFPBKHPFJDC");
    msg.attributes.assign("JFSZVUWRDOSONSIYZOANYZDKLTCQIWVXGWXIKUPJKRTMZFMWOOOASXVVYQIUKDKPRNBYHEDJYCHPNGFQKXOOXQVALAZRBTVXPGQJGSFVKYQBEUCUSPQQFGMWCKGNYUXDDADMLDXJRZETNSDUSSMFCLWPAMB");

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
    msg.setTimeStamp(0.630228207776);
    msg.setSource(7855U);
    msg.setSourceEntity(183U);
    msg.setDestination(44254U);
    msg.setDestinationEntity(246U);
    msg.command = 211U;
    msg.goal_id.assign("EFPDOGNVAAULBQLCHIMVMYAWVVCCSSPPJOSEDNGMYHNYTZHKHJQPHHSEOXDOKJMNLXJBCRUNTAXHYVRPXBIIOFWSWFKRZMZGFOTKLRIZLVZIRWDCYRFNGGVQRGBTUDCQAMILUTIEYBXKLCXJRKSWTNRNFQBZPAIHXAZENPXRVAJAJEJBTM");
    msg.goal_xml.assign("XZVLRNMKJIGURWPHPGLXOIFBJBTLUEJCAXHXTDNFRAREOKUAGNSISQYQPCLRTCMTPUCBWHJCFSWGLJYHS");

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
    msg.setTimeStamp(0.79478884971);
    msg.setSource(18687U);
    msg.setSourceEntity(89U);
    msg.setDestination(18279U);
    msg.setDestinationEntity(124U);
    msg.command = 32U;
    msg.goal_id.assign("HDWHMMFVLLSDCRRDGPTNCNFPHEWUGTIRKZKPBIZNBNZKNMGVFLMSQPNVYUWZGFYJKSHBEKCAPZZEGNKUCBRVFLZCUTKMTRCIZPDMEOTJBDOVRBLXJREVUDLMCXIXQSXJXUYTIGHCOSBJECXIYARQLHGKQVLCWXYVKPOJDEQUAHHQWBDENQGNEMWNGUPASWYSHFITQBHJPAJDAOTEKZUWLXPWXOOWOFJFOOVSXSAZAIQSJYGIA");
    msg.goal_xml.assign("WECBEDZGLGHEUZRXVPRNHGRXKMSEKNSMYWWDRJALUUQVNXWXHGLBBCZDJYYAYNPMMUDAQIAFWLIOZDYGEFXQCJKIVFQ");

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
    msg.setTimeStamp(0.312644379555);
    msg.setSource(56015U);
    msg.setSourceEntity(204U);
    msg.setDestination(23567U);
    msg.setDestinationEntity(202U);
    msg.command = 200U;
    msg.goal_id.assign("BIHUUMBKAYLAVFSTRFHNEBSGPLYHKMSNIPINBSJCGOYYTCIQXWLKVJMPBLFDHAEEDVLLWLQGPZNDFOJZYIRFZUEKVEPZTRKMJHNFNSWDDMXCYUBATQAVAXOORHYVGBFQKIDRKJWMVUWPKGWUSMZCNM");
    msg.goal_xml.assign("ZDYFMNEVLIWRNJBKOEPFWLNBXIOAFDYCMMLJRMZXHKWXERIQRVGOGCEHULZDVTWYJGMFGHYXZBTZSAMRULCZYMNRFFOSPXANTGHW");

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
    msg.setTimeStamp(0.609781447603);
    msg.setSource(54607U);
    msg.setSourceEntity(171U);
    msg.setDestination(10579U);
    msg.setDestinationEntity(0U);
    msg.op = 97U;
    msg.goal_id.assign("LYUQYMBOOCGCITWPBXHZOALATEZPXHAUGPSTRKMYIWCPAHHLIWMTENYEOKMWQIPDDLFRIRBRGZAWJUQDIVDZESJUHZOHVBKWKYAMCGEDHBDTTSNGZSQURNUFNYDIGHQRRJFIXYFVJTLEWY");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("WAITPMVWRJDLHRTKVQNGYVQUGIYHHQODBAPXRWGRUCCCIVOTHBIJRDANSGPCCBFQC");
    tmp_msg_0.predicate.assign("YCQZLCQFGRYCHHLYAGKUSPKLFI");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("FVGTCUXFUULRYUFZFSKEPRCGMRXCVXOQPRPDTKXONNGGVSXLAARHKRQUZCWCAMVKKLKORBNNXAPODYBFSXEGFCBKIEEZJNTPSLELRHHJXNBOGHXHDJZQNOTCJVICTRJLJHMPNWFHYWDHUMMMESDRQDFICZOWLJSEDAIAWKAPNMUNFB");
    tmp_tmp_msg_0_0.attr_type = 123U;
    tmp_tmp_msg_0_0.min.assign("KXCMLLQTORIBUPXNUJPYBJWDKSDAECTDVXOEXLGLPNAPSSVFPFSGZTTCYDLALDJMTOIIRGNKOPPQVYQRKWZWUWIWZRSWOUNEBCDBEUIZB");
    tmp_tmp_msg_0_0.max.assign("CGOLWGJSDWIXSIQDTCFQPIPGKVOQWYHCWJPEOFUENLCNXMLREZIHJHVFEZMNXURZALDPSAZWKXNUDYHIPKLFQCFVSYISGNOGAZPOMMFCRQRLDPBUNYBKQTEHOVCTZMFQJBIELCRZSGNMUOYAMXRYBJFZJMPXVWKNJJIPAOSHLGFKZREYFALDHQVETKEBWKZYUXHRBXGDMTDVUALBUSWVJABKOVWTDTURXBBG");
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
    msg.setTimeStamp(0.80909962375);
    msg.setSource(17796U);
    msg.setSourceEntity(133U);
    msg.setDestination(63216U);
    msg.setDestinationEntity(178U);
    msg.op = 71U;
    msg.goal_id.assign("WGFMXWUBNDPLXTRNGMTIKJDSBGPAIITXONKOIFHCOUVRRQTHETMQMZCSYEXLSTBKBVCDILDSVUZMPDIFXWTQFBVZCNDGFWRBWQOQSVJXYJHFAHGUGQHVAEHCYSXLESMKOLHYGKFARH");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("OZMJPTKOYXUSKUEKIKXXYAGACJXWTBYKXKWQMIJUOHPLCSOEVZVDZKQXUETNQOXZHGENGLTCYRSBTCKMSZJZGVYQONVFAURRPIBYEWLJYVVWUWZGFBAAGGNNIWUZDSNILQDVDFNXNUPDBRTHLQKDMVQMQELWIJOC");
    tmp_msg_0.predicate.assign("XPTXYTWKGHDFHXMRCEPUJEWKLMWUZISLZDDRKAFIDBZUGMTRGYVQIEVFXBCMJFQYPGRABEJPHEPNBFHAEWQQTKRHTUGXNBP");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("ZEVLSQGGCSMCHTNFUUXPMKJSAOESZOXOKQHVKNFWRAZLHJSSQQPLGWQVPRJJMUVMBYVSEITROHZZXAQYQJALNBECBPBPIEWKSUQFYJQRPZABJUTAXFDHHGDWFSGREZDMUOMXIWLPXMIJRLGREVFTXHXBBTYHTURUHPODPIOIFUKJKKDNGIOOWLT");
    tmp_tmp_msg_0_0.attr_type = 150U;
    tmp_tmp_msg_0_0.min.assign("PTRMXTQAOCRFQYOGFBRDDUHYAPHDLNVMWLQGETIQEVFPPVAPBRZGWUDISYFOKKRGZPOWHNNRDENIGZUYCKL");
    tmp_tmp_msg_0_0.max.assign("SBDIWVMXGUXVPCXPJYNTCZNKZUEPHYWYJQOOJJXRXZHQXVCUDHSSNNQFBEOVCIOHARUAUJLHKPCEZIAWMGZDLOKGLLYTADWFUXVYFOTHKCFSDB");
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
    msg.setTimeStamp(0.927337508718);
    msg.setSource(63319U);
    msg.setSourceEntity(14U);
    msg.setDestination(52158U);
    msg.setDestinationEntity(211U);
    msg.op = 250U;
    msg.goal_id.assign("GAQWPHZTONXN");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("VMFAGBDFYVUKZPMAWGSHCGWZQRDDCMCNYOYLNHINBOPQZLKXPMGEIKHRHJWYTLHFZORSTWCVFYAVWIFRUDWLEBTCXRZQXOSRMOILJOJDXEGNIPQDUJGTQQKULBCOHRDUOZODEYGLSJSIKTELMUVASCVXPHXARBKJEPNABWKEMQJFIBPXEQKJRETTFVIYRNCJWXKZCJGQAZSDUUBPXLYXFYVSHMALFGHPVZYTBZDBTHUIAWCNKPM");
    tmp_msg_0.predicate.assign("QVSFHPAJZHWWOTIBXXTJQTTZVOSYINUMVHWSCFFFQGBLETGZARQCFDXGVNTCLMNWGCSWZDMPMQYTHYBJKBIKVZEPMRJVKAWKLPJNJNYSBOEADXOREQSETEOPDMXGMBDNRRZOKDURVLHHEXFYYIHFSPICDKEUWJFLURRUABULDOGDNKVQMQNRFTCNPWAUXHXDCXXJISFQWLSCYWQSIACZHOO");
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
    msg.setTimeStamp(0.42367558984);
    msg.setSource(39147U);
    msg.setSourceEntity(117U);
    msg.setDestination(57625U);
    msg.setDestinationEntity(100U);
    msg.name.assign("OCZWNRRWVXIKHSAZMJUPQMWXYKOTDIQOBZCTFUYLSREPCSFFCQUVJASPPPXTQUXNUYBAMVHLXCBUAUCBOZOZLPNWFSRVYVETMNAJWJVCRQGVHMFXGDQIWJOKLSKYOQIPBVDXTYZZHGUIEJNOFLIHTYDHRJNXUWCLHGXLYEYIBTBIOEUMERKNFRRTHDSGYKNWDAQ");
    msg.attr_type = 197U;
    msg.min.assign("QXOMMNBPZBXRDARAVKHWRPCELHJQTGVUFLKLMYJKULXDGNVHRPPOUDKQAMPTZJMCVSYGONKZMAIADZDGRXSQTJTKDXVGEEFSCJYUWSPUIAVWTUHWZEAFQRJUBOQIERERCEYXWLKLILVKBCXMLZYGODHCTDCTKJFMBOGXZGLUPXPFNFDWQDZPN");
    msg.max.assign("XXWHIJODLVAQPRETUEZYIUNFOVPGXNGCJODKBGDLQXDYELNZOZBCAGWEMPWHAEWIBMFCVGRZMRRUNTGGBTVUFHXJTYXFJQPLXWPASOCKIHCEPIJEVAEMHSVUHNBPWFDDRFQCSUBLMYNFSWPKKJFUJJXZQCRVEAONQNROKLEKLSOGTVHKISTBYYXAGTIUDZDOP");

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
    msg.setTimeStamp(0.0247612144487);
    msg.setSource(11969U);
    msg.setSourceEntity(84U);
    msg.setDestination(41429U);
    msg.setDestinationEntity(142U);
    msg.name.assign("UBAKFCDHARSYZZJQXMBWGAWEIEHBDFVUIFJFMOVXWZIHXELTHUPITIYURRRVCFNPTQAZQMQSVTWXRKCCEVLHTNEJYXKUAEFSNVWOMXLBCDGUMRZMXCZBORGEJWVDIKGEMIHBUK");
    msg.attr_type = 126U;
    msg.min.assign("YKBXLPAYQJHSEWDVVJICQVTQJUKINKQREKQITDVGFGAMXFWCKVDUOELGMVDYHZXZXHFIHLEVINGOQLECJRYASTGFSHNSPROELAEQTUGOMZHWRVNXOZZWDHAYWFDTHBNQDKTIVHPKBELAPLUSUWNOLRTOBMWUMRJRCHIOSUJYARQVYPZONGYDPAABGKMNKFGCP");
    msg.max.assign("HVIFDYAKLPOWWRYWMYVTVYRBVCIGECMYHZAXTJPEGOEPKATUJJW");

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
    msg.setTimeStamp(0.968357889101);
    msg.setSource(13345U);
    msg.setSourceEntity(97U);
    msg.setDestination(57856U);
    msg.setDestinationEntity(120U);
    msg.name.assign("OMMYFFXNPLTSOWISNSHQBUFDGEIOJIDMIQTKABEUWUGFMEFXWDWOKXHRKRNDAUYOKMYGSLYZZTCVYLPJPPOEABGPHUSGYKWZKZV");
    msg.attr_type = 22U;
    msg.min.assign("ECNAMWVFURZOKPRVVZIJSURQPYTATXJG");
    msg.max.assign("KFACWHTVXVDKNDPDCPALAJTAR");

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
    msg.setTimeStamp(0.328485708537);
    msg.setSource(49913U);
    msg.setSourceEntity(239U);
    msg.setDestination(1049U);
    msg.setDestinationEntity(158U);
    msg.timeline.assign("IVPWKBECWVCSCQHPKWJKMAQADSJOVDTLQTATDIYDCVHZIEXLMQUPHIFUOXQNXBBAIKFPSHOVYTWMGLOEGUCNN");
    msg.predicate.assign("BKMKGRHQLMRTOYTGBFQLEYFKCDJMKDNNAUXSBRYTW");

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
    msg.setTimeStamp(0.467960824342);
    msg.setSource(48351U);
    msg.setSourceEntity(8U);
    msg.setDestination(41986U);
    msg.setDestinationEntity(145U);
    msg.timeline.assign("MHKHEFVPFVAMXZBNAGTMBXRGSJDSZBCKWWYCNBNLQAPQSJOQNMVWEAUMODZMOHSRGXXCNZKOLAZHTYPVRIJOYWEADP");
    msg.predicate.assign("JLRCDGEACVKBCRSGUUPJCPSXMRZIMRBFFUJQMIFTOJCUBFUNVAYONYGEKILZLOVDBPBTFYVMYD");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("HYMHVALICXKMFQVIPHCKESBOQABQBCXVJRPAWDJHEMGAPRLNSDFTOGBSQAFQMLKODHRUNTHDLPUQVJPFTQTMFZRYTLTEAILSYXHBFQUNZNSTBNZYDGEZKWKZIIUWTUOBLKFVXCBXWSBEJDERENYX");
    tmp_msg_0.attr_type = 40U;
    tmp_msg_0.min.assign("UZIZHWGJMRTXJCZCOSDZQFFINRXSFQJWSOYNYBWYIQCBVWHUYOMPWMCURJDLPRCSMNBVNPZGZXBCHYIMFLEURCOOXGGIEONFLPDZHVVRYTSFIAABNJIGDEAQLXSRUBOLQNBFYACPNTKEWDRUAELTQQKYCHRBSEAZHQJNPKZSGT");
    tmp_msg_0.max.assign("DGXRTZAUKBLJKMZIRFJLOAOTCLPFASFZHDKUYGPENVQIMXOOZZBQYJZFVMRWLVRJDNAGGVXEBXBWAGHCBCSUGP");
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
    msg.setTimeStamp(0.624896062872);
    msg.setSource(15495U);
    msg.setSourceEntity(31U);
    msg.setDestination(46403U);
    msg.setDestinationEntity(98U);
    msg.timeline.assign("BUWHLIKJRZMLXYYXTOPVSFYHISGOPNFDYGRWXRNUZGZIKBSMVQEGJVBIWGDABPWEKIVHZHBXELQRUJBMCTCQVAFYUQOEPGJOTGOOFFRMJFMSAAZPPZDOQGLJHTUWXLCFFNNMUGWENUKTDVONSWUCZHFHVBMXLKCBDCQSDGVLYIURAAEAHLNSUXRN");
    msg.predicate.assign("KFXWUAOOMMZJNGJLCEQBOIUHBWAFMLAYIJWNIFKBAWBRRTZNISYQPGMWWCCECKZYPGBTNRVYCSHTCUTRSQHRPJBUNUZAQUXWNLPYAHXOUHMOPUMTPDBBKGSYCGEHNLF");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("VIWHKCCPESYAYKCLNKJLBWVQJJUZFKTDLLPDLHHYGSNPMMIIJZKRFCHEHSGHHWIRPENBMCGVXQTYUFCHKQCWTBDVYHNTDTRAMPRDIZSDBBCZXXNWRGWOCFQLJYLZFTGAFAXSXTNAJWNSYPBOFOEHWOXVDBUUNIJEIBGOTRNJFINWQASPRKUEGCBLUOQJOKVXPJAEMPOXKAZUTMVEYGQSQBLR");
    tmp_msg_0.attr_type = 69U;
    tmp_msg_0.min.assign("BGYFFWAFXBTPHEZOIFOGHMXIUPELZXMTCOSVBASWAVVOLTXPCFUWDECHTCKWOOSWCWLMVIVWHOHMJULGH");
    tmp_msg_0.max.assign("GZZPJYDTMZKJOEMEYBIFHVHXTLJHGRCWMUHZXNJIIURBIYQHKS");
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
    msg.setTimeStamp(0.756718960582);
    msg.setSource(16061U);
    msg.setSourceEntity(194U);
    msg.setDestination(28594U);
    msg.setDestinationEntity(241U);
    msg.reactor.assign("MEMELAFQAXODPBVWLRSGHGJMWRVWEUHHIBIVNJXQYWJW");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("MHCPSIPHFPJUQHDMYTSIWQCVOOPBTHADHSODMYLIFGFCBWVKWUXRWBZJQXPJDSGTGRYALYEWCLPYMNXKPIATADRLZAZGUYUSIKQKHFVFMJHCEKWDXSMDNMECBOCKGVQQZZBVCURAMRLQPGD");
    tmp_msg_0.predicate.assign("NLAKNIINLRMYOGZYMJBELAJFLKHPICJUJSBNHHGVJARYDFSQJTGOOVM");
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
    msg.setTimeStamp(0.0626264897806);
    msg.setSource(17899U);
    msg.setSourceEntity(248U);
    msg.setDestination(11055U);
    msg.setDestinationEntity(124U);
    msg.reactor.assign("JAMSVYHVQFMCVFIPJBGJRQELSDYCIWUUXEIWLOEKVPNXHBQMYJJXFOQJBTXCZGDRTQOFTGZEMSGBGEGVYSGLVOUXLDCFZTGERWHBXAVZCPVXREXBKSISULDMZUHADKONRNKUKMJZUBUEREATOQMWWNTIZYWDDFLLPPCASQHSWAHLTJGZMTDSKBYUPFTCOIIYJHHFSRQOPVWQULCPNAOZGQKCDNXPKRKYEMTBXYNHZDAC");

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
    msg.setTimeStamp(0.569786088896);
    msg.setSource(10205U);
    msg.setSourceEntity(77U);
    msg.setDestination(63936U);
    msg.setDestinationEntity(36U);
    msg.reactor.assign("NUTAIGSLMQFMNOMXZBHFRERVPEHQNRDDLVFGLLVIWUVKYMCODIWFCYKICTGRSFPJAHXVUDQX");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("MJTFYCSPQWIAKKZBKVWZGUJSSYXFXFLFBOIVDWDICLRKTGIMKZXH");
    tmp_msg_0.predicate.assign("LGPIRZIHOXSPXLSIRJWPHOHIHRMNBMSCDKUPXVUSVFYOZWDRFEHUSQXEFXJXJGHEAVDNFMZXEBSCABHQXTOYEUOTUNYOULYGUZGDKPAFHWPDMDPSCQYTDWZEJFVCMKRMWIRVDKGJQQBVLQTPNMWFTGJSJKTNZOUWYVLMAUNCCBVDCIYLZTQALOFSKZOJLKBNFVYKWGGUNRTI");
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
    msg.setTimeStamp(0.579814699007);
    msg.setSource(23130U);
    msg.setSourceEntity(207U);
    msg.setDestination(34010U);
    msg.setDestinationEntity(140U);
    msg.topic.assign("OGORTYVGNHNYPRTAQLERXJJWICQZNOCSLBLQBLWGQEPNIMCIVFNTPYETCQELLFZAOVDBJKOFPKHZSUUFSZASFOTGQDSNQLJOCVXIKEFJPKSHYAYNUGAFAIIUWTQGYEOGIOWYMNYUSHXWBBCPFBKHRWMWG");
    msg.data.assign("CVRRDWEXXYHANENJWDNEUMRLQBFNQKWJJHOHAFLLYLXFZQEAOODPEWNEQIBPMOHBQVJUQGJZGRZKRBMIUVRSXZYMRKISDWWREDVVALFCJKOTZGEOGGXPYURSLQGPBUMCCGADCXTTKTFPIDTHUUEIUWPJSENBKSNIYJMBSMZWCTLJKAFZVBDXFZOSCXLACNSMWOAROLBYTQMILKHPAHQTXXTZVTPINFO");

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
    msg.setTimeStamp(0.0407067172666);
    msg.setSource(6281U);
    msg.setSourceEntity(211U);
    msg.setDestination(23595U);
    msg.setDestinationEntity(217U);
    msg.topic.assign("OQVBNLGTZPYGAHRGNVLMCQDXGIBMYFLBXJTDUHWAKNRLMFBJBTFCGMPXSCESIZLCZELFTPIJCGPOMAFXFNEEOQEVUUJZWYQJWCIAWICLDJYRTPRVFONAKKCESTHEUKILQDAUPZRNHHHVNIYRDWVSHMBWNSNNXHEBPAUFVEQCZVPGJGJHYRZOGQKTPXVGITYDTOZQMDJFY");
    msg.data.assign("TRHXSREHMNNHBQJXCWKRMSFVNFNEANPQICYQJKHKAGUPVKIVNQDKJBBSKGXOWQMOILCLZWGQZXRGFIYDCDJNIYVMSIGTXQEIBXDPRCTXLCYKWBZCHZRHOEWVOUJBVWZNZIDIVASGPVJHMDBOEPSQZGUOTNJXHYZQCRFLPYEFRMYSXEZTOXIOUKLAAYMEFSPATJDRMAQUBLYFUSOCWULMOZRELMPWJDHLA");

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
    msg.setTimeStamp(0.475959484052);
    msg.setSource(10104U);
    msg.setSourceEntity(118U);
    msg.setDestination(21651U);
    msg.setDestinationEntity(252U);
    msg.topic.assign("ZRHDDMCDAFJMCYYMXGGBVQYXASJCPOQIULWWUDPXXBEFBWHJMTNNBUYROHPMCIXKVMSSFDUCVMZTUXVEOWLIJIGRZNIWNPFAKUXOMQGTHVWJJTVCPISIEKZWUESQMSEDHPYWZSOYKANHLSXQRTDQJATAWIYVGKOVUBLBYVYEWNUVJDLFDTK");
    msg.data.assign("DXNMHQJUBRZGACVCUMFUNMD");

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
    msg.setTimeStamp(0.509088132785);
    msg.setSource(53030U);
    msg.setSourceEntity(160U);
    msg.setDestination(21141U);
    msg.setDestinationEntity(16U);
    msg.frameid = 8U;
    const char tmp_msg_0[] = {-68, 126, 90, 68, 53, 11, 107, -120, 75, -88, -51, -44, 12, -32, -63, 111, 115, -87, -15, 115, 112, -106, -72, -94, 86, 47, -109, -101, 43, 82, 103, -42, 18, -39, -126, -40, 69, 71, -74, -27, -8, 78, -65, 57, -43, -19, 81, -40, 20, 107, -119, -93, -8, -36, 67, -92, 54, 9, -87, -120, -127, 26, -61, -12, -5, -24, 105, -42, 48, 78, -20, -25, -7, -81, 28, 63, -33, 76, -40, -81, -123, 49, 125, -13, -101, -107, 83, -24, 17, 93, 29, 95, -85, -43, 126, 39, 13, -45, -116, 119, 102, -16, -120, -9, 69, -19, 25, 51, -4, -67, 55, -111, -103, -61, -93, 35, -80, -102, 73, 99, -81, 6, -39, -125, 23, -32, 30, -127, -21, 35, -37, -35, -28, 118, -101, -127, 37, 71, -124, 11, 9, -44, 126, -119, 29, 40, 29, 53, -85, 81, -91, -104, 68, 119, -110, -89, -74, -84, 44, 33, -113, -71, -120, -57, 4, -11, 84, 94, -66, -112, 122, -105, -8, -64, -122, 6, 16, 93, -100, 1, -102, 49, -31, 13, -125, -18, -102, -114, -2, -2, -38, -124, -36, -105, 59};
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
    msg.setTimeStamp(0.221068209719);
    msg.setSource(45689U);
    msg.setSourceEntity(165U);
    msg.setDestination(40434U);
    msg.setDestinationEntity(160U);
    msg.frameid = 164U;
    const char tmp_msg_0[] = {-51, -15, 22, -52, 57, -107, -34, 126, -87, 62, 119, -128, 58, 39, 97, 33, 40, 28, -112, 124, -21, 22, 15, 32, 29, -113, -80, 45, 98, -80, 36, 101, -19, -57, 55, -96, -119, -28, -103, 38, -92, -104, -42, 79, -58, -109, 12, 124, 43, -107, 20, 97, 47, -53, -47, -2, -34, 88, 46, 101, 84, 33, -124, -121, 77, 116, 45, -99, -111, -122, -31, -96, -94, -44, 106, 121, -9, 76, -12, 116, 41, -109, 24, 94, -8, 125, -99, -2, 19, 13, -91, -5, -34, 71, -46, 113, 122, -127, 106, -85, 111, -84, -71, 34, -124, -23, -91, -70, -1, -26, -68, 23, -48, -43, 41, -77, -56, -5, 4, 50, 110, 33, 96, -45, -56, 26, -52, 105, 103, -55, 89, -69, -116, -43, -87, 29, 45, 4, 55, -121, -111, -7, 118, -22, -18, -13, -79, -29, 51, -29, -8, -39, -122, 64, 69, 79, -84, -13, 96, -92, 43, -1, -112};
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
    msg.setTimeStamp(0.199202735372);
    msg.setSource(21751U);
    msg.setSourceEntity(48U);
    msg.setDestination(15575U);
    msg.setDestinationEntity(69U);
    msg.frameid = 212U;
    const char tmp_msg_0[] = {-24, 94, 9, 55, -10, -50, 30, 83, 126, 41, 56, -90, -97, -63, -52, -51, 32, 113, 23, -98, -41, 108, 112, -121, 12, 84, 91, 50, 116, -94, 98, -13};
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
    msg.setTimeStamp(0.743046816657);
    msg.setSource(33604U);
    msg.setSourceEntity(208U);
    msg.setDestination(61186U);
    msg.setDestinationEntity(246U);
    msg.fps = 188U;
    msg.quality = 164U;
    msg.reps = 64U;
    msg.tsize = 203U;

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
    msg.setTimeStamp(0.688352703061);
    msg.setSource(13419U);
    msg.setSourceEntity(111U);
    msg.setDestination(32919U);
    msg.setDestinationEntity(176U);
    msg.fps = 155U;
    msg.quality = 165U;
    msg.reps = 229U;
    msg.tsize = 58U;

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
    msg.setTimeStamp(0.452434423632);
    msg.setSource(44096U);
    msg.setSourceEntity(83U);
    msg.setDestination(57300U);
    msg.setDestinationEntity(177U);
    msg.fps = 145U;
    msg.quality = 84U;
    msg.reps = 10U;
    msg.tsize = 146U;

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
    msg.setTimeStamp(0.973503426951);
    msg.setSource(42471U);
    msg.setSourceEntity(216U);
    msg.setDestination(24437U);
    msg.setDestinationEntity(208U);
    msg.lat = 0.353484049222;
    msg.lon = 0.72700396817;
    msg.depth = 120U;
    msg.speed = 0.370102442224;
    msg.psi = 0.829154488869;

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
    msg.setTimeStamp(0.339149631464);
    msg.setSource(42282U);
    msg.setSourceEntity(88U);
    msg.setDestination(52080U);
    msg.setDestinationEntity(81U);
    msg.lat = 0.148657372129;
    msg.lon = 0.0676897305794;
    msg.depth = 187U;
    msg.speed = 0.186671839855;
    msg.psi = 0.204167011315;

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
    msg.setTimeStamp(0.410426360488);
    msg.setSource(47010U);
    msg.setSourceEntity(24U);
    msg.setDestination(3509U);
    msg.setDestinationEntity(34U);
    msg.lat = 0.925840886034;
    msg.lon = 0.664534398062;
    msg.depth = 42U;
    msg.speed = 0.239730003793;
    msg.psi = 0.62730439445;

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
    msg.setTimeStamp(0.9487896343);
    msg.setSource(31038U);
    msg.setSourceEntity(247U);
    msg.setDestination(37203U);
    msg.setDestinationEntity(162U);
    msg.label.assign("YXECOEIHUBCHSGWBKSAGMVSNBPQRPXLFIKQTNQAJHPVRYUMTNMGZRQFRDDWNZSMODXAJGWVPCXLWZAYFILRUVHFOWTCRWBJXKOEEVSAJJUFJNXHKDTRTMCNMOLJSYYWUEVZRVKDJKFPCFSLTHHGEILTGAQXACEIEPIMIADEK");
    msg.lat = 0.812620002134;
    msg.lon = 0.401076454138;
    msg.z = 0.272946744333;
    msg.z_units = 249U;
    msg.cog = 0.236605482561;
    msg.sog = 0.772121516954;

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
    msg.setTimeStamp(0.894405791676);
    msg.setSource(33780U);
    msg.setSourceEntity(111U);
    msg.setDestination(46867U);
    msg.setDestinationEntity(140U);
    msg.label.assign("SHRSTLIPSDKIOKFYCIJXHPAULUAQCOBMCWJCMVMCIEQFLTZXJYGVMCJTEPFTZYIEXJDQEAINDTRFWZOKWRBPUVYZINMUNPAYUBTXWGJGUOBNZENYNQGDHTMFLZHVHMOMVTWNLLWDOQARANKJSSNICHHZRLYSVFERRQXVYHBXSKWLLGPMREUTHFSBTPRKJFXWQEUCBECGDXGKVNDWVBIJKOMQQL");
    msg.lat = 0.943338505814;
    msg.lon = 0.267232047144;
    msg.z = 0.64719766975;
    msg.z_units = 9U;
    msg.cog = 0.673351561366;
    msg.sog = 0.521998634747;

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
    msg.setTimeStamp(0.862410986399);
    msg.setSource(32786U);
    msg.setSourceEntity(131U);
    msg.setDestination(1579U);
    msg.setDestinationEntity(159U);
    msg.label.assign("FRJQCVWNSEUOFBHDHNNWIPXPFZFEGZSVQQCPSHVIDGXNSNOHECTMIAXGBSJJWPKNTGRTHJNYGDI");
    msg.lat = 0.312558664104;
    msg.lon = 0.0352439570774;
    msg.z = 0.34785839628;
    msg.z_units = 148U;
    msg.cog = 0.815076168928;
    msg.sog = 0.649334345282;

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
    msg.setTimeStamp(0.561753155888);
    msg.setSource(4992U);
    msg.setSourceEntity(246U);
    msg.setDestination(240U);
    msg.setDestinationEntity(86U);
    msg.name.assign("QAVVEBYBWKXRATTULNKSHPMULZLPFZEWDOXLCJFAQMPSSMVLVAEVFBEGUXOXMADCIKMVKAYUONKMDHHOPOEEJDMWCFBSJENOCZBCMYCQY");
    msg.value.assign("RAEYKUOYCQZVALUJWGRGKDQEICBQFSKLQINHSDVNREGEAQVMBVARWKMSXETGMMTFJCYZDHZKDYSCEPXICSRYOSVEWNFXXWDZLQTNOILZFMCAIOPPJXYYIDHKGVQIPLAJSENDZANVHXHRUTIRNPLWRMFYHHJYOWQLOTUFGXOPSNZVWGTJMFHTOTHJGBZANBKFZPWSEOBUWDVKYODJMLKUFCXPUBGQNVBSXLFZKUJGUXPRIBTQPCBECRA");

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
    msg.setTimeStamp(0.78415218649);
    msg.setSource(26740U);
    msg.setSourceEntity(156U);
    msg.setDestination(14162U);
    msg.setDestinationEntity(219U);
    msg.name.assign("TTMCPLBGUYJVFFASOAWOYKRDOBATNSOFLUMEUFNKRGJOINBHEIGEZSLZHVUWJJRQYMJSFZVFDIQAWKWXWIYLAPPCASSJOVDGJEXHNKMGANBKEHJXBXCRFBZPXYDAKHQXSWGPTXFLNZKYCLMDIFQGHNIR");
    msg.value.assign("HFOJNYZJAIZHBGPXXEKWXQYUWDCPBNYXDVLQGSNKHVOPNOIHDDFCJZRTRTTKAYTQEIWDAMJTEORMRMALTVBCUQPCNWGFXPQTKTOJDLBXRIOAZFIIQTWFBVXMFRLJZGSQLSBSFMMEQDCZXIELHOUGMPDGGUAQJWSRAVFYYZWNCFZKAGDYOEKKDHLJIVXCSLMUBWROSW");

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
    msg.setTimeStamp(0.389536825536);
    msg.setSource(33592U);
    msg.setSourceEntity(78U);
    msg.setDestination(14549U);
    msg.setDestinationEntity(194U);
    msg.name.assign("SHYOISQSKCBWPDRDWUIOIDJWHSBTZRRVHJLEWMYLZUYWBLUPYKPRTAERNRRFMTCFKCYFSISHWTHJAMFJDMNPCIFNATRXEYVHABVTAZXXWBCDVBNEZKLOKHABMNXIIMUCVZYZSXEZIVETYNQOQMTVMABVKONGLUANSGJVGWVAXEXIXFTILKEYNTDQUZXPEFODWZDCPRCFXUDUGQPGOHJDFFJMJLPSQLBNGUMGJJQPOHUGOLQGCOASQKE");
    msg.value.assign("JNBDRWGCQMNRCWWCAQJCQUYFRMMOUEGKNUTBLRINSIQFIGYGLNWAFRPPBGBTEXWFKHUBABAFITGYAOOVZPPJHCFJWAJLQMDOZOCXTULHTVOCXAXGQXPTYAWIKFXRSUPRHECISOBWDFDDJRZLMVJDZZE");

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
    msg.setTimeStamp(0.714699751003);
    msg.setSource(9163U);
    msg.setSourceEntity(82U);
    msg.setDestination(53026U);
    msg.setDestinationEntity(55U);
    msg.name.assign("ENFCLOPJWNXOOLVQMPBXEPHMWOFCSUOWLRYZSVHJYJKUOPOIFJSURNZATKQGTQYEYCQHTYDRRWWMNWCWQILMRKVCHMIGCGGFB");

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
    msg.setTimeStamp(0.0399081740741);
    msg.setSource(2564U);
    msg.setSourceEntity(228U);
    msg.setDestination(28389U);
    msg.setDestinationEntity(238U);
    msg.name.assign("TTSKWUKBTPJVAUWOLIQICTDKMOTQOLSZGAIUZYJZYGERJBVNOVDRRPSZQQDAUISHEIBPTKJFWYZHYELNHLGDKXSLQALAFUNNATOXPKWMMZVCRXHLMCSGMARCQZVLVCKPDMNXPITPIFQKEDGRJYMXCZXVWDUXMBEBODDGRLCUJEXW");

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
    msg.setTimeStamp(0.123934137213);
    msg.setSource(51643U);
    msg.setSourceEntity(121U);
    msg.setDestination(60799U);
    msg.setDestinationEntity(217U);
    msg.name.assign("JDGLACQNATXIXXOSZMFAJQIEAEWQZQITHRHZYWKCDMU");

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
    msg.setTimeStamp(0.177965108938);
    msg.setSource(42015U);
    msg.setSourceEntity(218U);
    msg.setDestination(7774U);
    msg.setDestinationEntity(229U);
    msg.name.assign("FFCNYUZBEMEFGIWEDCSFIUMPWHCBHDKGQDRIZARKKLTDTILUXVCYMRSIFXMPSZPECEZGNSYQTUJCAVBLJWJJQQIHBXVNUUKNPQWXFABTOEYMEAVELZORNYYKBRYRVFDVH");
    msg.visibility.assign("MKMWQPDPFREZOKEFTRLPOUAIHZVVSRIKFGKWNVDDWUTCDZUMTZ");
    msg.scope.assign("VRSSWMWKRLJUTLMEWKZTUZDLFLODSXXXYGIHKQCNIGYTHVETVMAJKHNQVCKXRTVBRGMKMYQRJFVULGGHWDMBOWSGKDJTLZYEPFAYAMQTZXWDBNQHRHWCXREOGNZZ");

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
    msg.setTimeStamp(0.0699080414527);
    msg.setSource(33432U);
    msg.setSourceEntity(96U);
    msg.setDestination(59950U);
    msg.setDestinationEntity(153U);
    msg.name.assign("PKTZUSTLHBZINVKNLWJYKTYBOAGHSRZXGONPREWNTXSRJFOVRCZRGDOVFGDQCXVCDNEAJSLVBCFCUMWRMBZPAOQYWPRTVTSEDAGBXZLMFHIFWVYMTLNDQIHHEEXKVDANNXPPDWLIMPDSYOLUEANWIZJKQBRJHYXHJTGIPLSBJKDZHSIAAMEKLQIABXPFHOVQVZCIJDUCGGMUQY");
    msg.visibility.assign("VXKRMWJWHRUXMDVFOTSEJJCMWGPFUPZEMPUDZRUSJWSXKLIJHQPSLQRDBQUKXCTOIGZCDWSOANFQOANIJXGDNFRJIQNXDBTKLOIAYMUAIYUTFKUSVHLRXVRRCODHWYAUWLVOWNYESGARQYOEVDQILAHFKTHMCQIXQZXCZLYAXYPWIGHZKHVNSOBTGYKDEFKVNPCBBCJCENCLRFZAUFNBNSF");
    msg.scope.assign("UFZQYTEHQSOGTGXNKGIZZOPLEPHHCATOGKSMALBUCWYDTQNRXJEJBSXTSNYMQICWHMNFZIYDW");

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
    msg.setTimeStamp(0.189416838537);
    msg.setSource(59759U);
    msg.setSourceEntity(218U);
    msg.setDestination(20813U);
    msg.setDestinationEntity(53U);
    msg.name.assign("YXKLZAEPNKROMTWCVNFSKXUNDHSYAEAFHAHXDVKUWRESZWKEIQTZVTBFLYVIHRLQRZWOAZJUBCYCPQXDPYIIUBUJTDJMGOLWZZRDBGAMQNZNFSBJDCKVIYLJWYLGFOPLIIROCYCCOEMGFDXACHHXTTOPSGUFZPK");
    msg.visibility.assign("YDEXADTAHAFUONRQJVTEHFXZYXYKMCWEFDBQVIHYMIOJVNKBLNIMASTCYBNLMZJMOFWYHOKDHKVXYEBXFRPQHRBWZKPQMWPXZUTZQCOIIRQBFCGSEIDWJWSLIUCRL");
    msg.scope.assign("WAHUJORHHYPJZMONGJURFTWQDIISUINVOYUDTVLGSEBMZBMPGWUFGQKPJKPJRFSPDONLDGNFWUHKDDATWBOPDTYBYIXCVELEUSY");

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
    msg.setTimeStamp(0.0384915068135);
    msg.setSource(57250U);
    msg.setSourceEntity(78U);
    msg.setDestination(38995U);
    msg.setDestinationEntity(79U);
    msg.name.assign("GVPSELYVFYARBJGBXZDCKYNIDDQGHAAMUJDXZXOMZOCLDSZYXSWCPHAGRCJWPQTHIBIYQFCMTALUVDUAHUZOSDNKZWJNAMNCMGRZRFKUXJMHUHTCYPYGTXXNLZBSQEBBOWPJKXVIJNCDFHJDOLOFQUTSVNVVWWAELEQTIHSUBKRVVWNPNOCWAPEEFQJSP");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("BIAAGILPRAGFRWZIFVERJKBODAKHNZSIREKCJVCRFNAMSMISLYCLOGGSYIEKUANCMDYGZXEZCVVHDXUNCJOXEWBLULYTYKKSTUHVSXYHIWRBVUZUOUMAEKLHWNCNPTGTTHWQPAMDMDHMNGSBPTSLPQQMFLLCZOJAZSKYWFE");
    tmp_msg_0.value.assign("XFQKQQIHCTIRBVVNOPTSGCKPAXKNSYSGDRZ");
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
    msg.setTimeStamp(0.845241873398);
    msg.setSource(20978U);
    msg.setSourceEntity(81U);
    msg.setDestination(21313U);
    msg.setDestinationEntity(161U);
    msg.name.assign("MHBNGMFQSFDPEGNZWVDXWVITWKFYSGLNDKYQGKJWTKNRALSDPJKGBCCFOKECBFLICODBVDTVXSLASMDTECQEUIYAWWRPVLZATPHDPMZPVSBYKRHOSQZQCFUXIJXFSXBEZUUOBFIRXECTSDRJAR");

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
    msg.setTimeStamp(0.674799462733);
    msg.setSource(44280U);
    msg.setSourceEntity(23U);
    msg.setDestination(33462U);
    msg.setDestinationEntity(229U);
    msg.name.assign("RBKBFGTTOBSUTMVHFAVPLJAVVGNRFZEPEGLEWTXBPGPEDSQHJQKUORXDCCCKCDECCNWJWXOYQFDFFTHMZBMNLMTHLXOPDYPEBMNNSGHWPMUISCYJMIUAPNLQOFHWRALUQGFKIEATZYEYCUDKQOGNHZYZMCAKAJ");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("CPWGHMOLYDRIAHGTMUSHMUIBLCJSMNNCQCGQYDNWUCFQYUQ");
    tmp_msg_0.value.assign("JIYBRNMIBYQMQTOMLRMUPQZGLCVYBLHKRPYZMBYQDDIXLQGXROFFJBUHDZAPGVZFTFJRUAODXAVJYKIORFTSERYHAUETBWYNAAXHHGXXINPWGJLSBPWZVGTECCGSDYVQUIHAO");
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
    msg.setTimeStamp(0.185825015929);
    msg.setSource(64172U);
    msg.setSourceEntity(239U);
    msg.setDestination(11650U);
    msg.setDestinationEntity(127U);
    msg.name.assign("QLBQSESERZFUIAZPIBWHMNJZYDZKAFYZRQTAJRLCFESGIFWTAUMAIZLMNWXSRVZHMOMLXUQZFHWB");

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
    msg.setTimeStamp(0.778461701932);
    msg.setSource(20890U);
    msg.setSourceEntity(152U);
    msg.setDestination(48144U);
    msg.setDestinationEntity(223U);
    msg.name.assign("ZWDQLNZNISWWFBQBUGABPURXPHXGUMVPQTDKZSIEYSVKLLGNBVOCJBKKFPGZANXBJVHOVEVHUQDOTMBXAHKAEXWEFTQJSSATLOYETRWGNVAJZYGWAJFPWMLJZJTXQRRTLXTPQFIUZICDSYJOKIVLJUIOTSCGFHEEMZKCWCYZMEIKVAODBMFDMDZDGQVNSYCBMYRRNYEHURCQLUGIHNMUSLRCKWSJLUYNPTCEXPHAKHFOGRM");

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
    msg.setTimeStamp(0.605006060762);
    msg.setSource(65479U);
    msg.setSourceEntity(158U);
    msg.setDestination(26849U);
    msg.setDestinationEntity(175U);
    msg.name.assign("UHXGRNCRGCZFXJPMFMEVBHKXVDWGAKKEJYYMCASWULVZPTCAGYLHXNZTOMTFLQOAMQWGWYKTLCAIYXMDPTOBMBIHLUKWXWUWTLVGFRZQUKYRVXDWVOFJCNQRZHKNHUMQESYUGVITUKYJHNYFBQINAVJSMNRSBXFEGRRYZVISZEEKDXKSFHPONRXLE");

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
    msg.setTimeStamp(0.708107875023);
    msg.setSource(10353U);
    msg.setSourceEntity(226U);
    msg.setDestination(35234U);
    msg.setDestinationEntity(168U);
    msg.timeout = 3317938044U;

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
    msg.setTimeStamp(0.312785405735);
    msg.setSource(47705U);
    msg.setSourceEntity(112U);
    msg.setDestination(36046U);
    msg.setDestinationEntity(152U);
    msg.timeout = 3992331410U;

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
    msg.setTimeStamp(0.986340370144);
    msg.setSource(4272U);
    msg.setSourceEntity(184U);
    msg.setDestination(21510U);
    msg.setDestinationEntity(96U);
    msg.timeout = 953714314U;

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
    msg.setTimeStamp(0.607540761996);
    msg.setSource(10515U);
    msg.setSourceEntity(214U);
    msg.setDestination(31938U);
    msg.setDestinationEntity(21U);
    msg.sessid = 177069565U;

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
    msg.setTimeStamp(0.606158693769);
    msg.setSource(54687U);
    msg.setSourceEntity(16U);
    msg.setDestination(15655U);
    msg.setDestinationEntity(124U);
    msg.sessid = 944478372U;

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
    msg.setTimeStamp(0.659617112645);
    msg.setSource(58476U);
    msg.setSourceEntity(254U);
    msg.setDestination(36828U);
    msg.setDestinationEntity(72U);
    msg.sessid = 387991778U;

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
    msg.setTimeStamp(0.639578912901);
    msg.setSource(34959U);
    msg.setSourceEntity(209U);
    msg.setDestination(50356U);
    msg.setDestinationEntity(139U);
    msg.sessid = 723349915U;
    msg.messages.assign("TIEVASEVQPNNNCIGQKEBBQEJUEHJMAYGGCKJSKOHZRZYOMXGAXZAQGSSHXGSDWUFZHFDBPCKCFGIMDZNOAMIMEATPAKLSTVJIWSUDZYWXOHYHXVJLDFLTFFPXABNPMJYURWLDWFLQMQVVHQDT");

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
    msg.setTimeStamp(0.955489971961);
    msg.setSource(62616U);
    msg.setSourceEntity(176U);
    msg.setDestination(25624U);
    msg.setDestinationEntity(40U);
    msg.sessid = 1880255224U;
    msg.messages.assign("VIBQMKSCSGUMXMIRWANORFABPGGJTRGWFTVBUOMJOCCSUPBAGHFDXEPSVCQSRLXYFZYWKDITWYWUXGNAMLCYKBLNJHACWJJNASDFQDEXUEECPLBJTMIZVRZARCRJTIODYFHKHFSZNLUGGPYFXYPKKSDOEETLUQYHRWZVNEQXTZQQLKOIWNWVYTBVEMIBPBBRAMTHVAZHZUJD");

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
    msg.setTimeStamp(0.167773193701);
    msg.setSource(20478U);
    msg.setSourceEntity(250U);
    msg.setDestination(28604U);
    msg.setDestinationEntity(133U);
    msg.sessid = 905786932U;
    msg.messages.assign("ALUVJTRNAMBEZLUSARZNCCTRRVNGIPKMSGSTUWOPYUFLCILURIJGBNMHGRTBNATFADFJQLPHPWCGLEHYNMXGMCDZXXWJAYWHUNVKDPXRGKNTASDJUDEFVOZPEXOFIEAONGSOZKBTWQRVEHOYIAKTVSZPILNYLREMQQBHPVKBVBKJFFLDLSWPHYGFXQJYYKB");

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
    msg.setTimeStamp(0.638396964002);
    msg.setSource(59145U);
    msg.setSourceEntity(133U);
    msg.setDestination(10751U);
    msg.setDestinationEntity(187U);
    msg.sessid = 3696473029U;

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
    msg.setTimeStamp(0.195709847143);
    msg.setSource(8452U);
    msg.setSourceEntity(241U);
    msg.setDestination(34257U);
    msg.setDestinationEntity(58U);
    msg.sessid = 211059604U;

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
    msg.setTimeStamp(0.513846060588);
    msg.setSource(23199U);
    msg.setSourceEntity(143U);
    msg.setDestination(15312U);
    msg.setDestinationEntity(201U);
    msg.sessid = 1246761320U;

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
    msg.setTimeStamp(0.0691752131016);
    msg.setSource(37061U);
    msg.setSourceEntity(222U);
    msg.setDestination(6635U);
    msg.setDestinationEntity(76U);
    msg.sessid = 3070213528U;
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
    msg.setTimeStamp(0.948464387689);
    msg.setSource(37121U);
    msg.setSourceEntity(175U);
    msg.setDestination(31509U);
    msg.setDestinationEntity(25U);
    msg.sessid = 2979447687U;
    msg.status = 119U;

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
    msg.setTimeStamp(0.162366752181);
    msg.setSource(65447U);
    msg.setSourceEntity(125U);
    msg.setDestination(37537U);
    msg.setDestinationEntity(146U);
    msg.sessid = 4207163263U;
    msg.status = 154U;

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
    msg.setTimeStamp(0.692321762607);
    msg.setSource(7266U);
    msg.setSourceEntity(214U);
    msg.setDestination(35942U);
    msg.setDestinationEntity(162U);
    msg.name.assign("DAKLBVTXJZUQYKZHGIPZHAWRKEIVJYEZRTUWWJFMJSHHQFMXFYMZMQIEHOEEBN");

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
    msg.setTimeStamp(0.545522753835);
    msg.setSource(59870U);
    msg.setSourceEntity(77U);
    msg.setDestination(11555U);
    msg.setDestinationEntity(179U);
    msg.name.assign("VQBKVHMWJJTGKIEBSHOJXFQMSCCHAHUXDPMNZQPXMJOZTHXKOPXVUBOIKZLSPHOXUGWNOCHPGOJVUBFLWKGRGQEXIGFUEVRDGPALMLYAVDAJFSSZHGDWPQCZFHWZBUE");

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
    msg.setTimeStamp(0.214348308283);
    msg.setSource(47663U);
    msg.setSourceEntity(66U);
    msg.setDestination(13280U);
    msg.setDestinationEntity(99U);
    msg.name.assign("KFBEDFEWKTAFBAEASBOZQZJIRCZTLZAEPEOGGRNMYCHRTHFYOFFLKVJEJJLTLQJRLGRAOCXNSUDUWBPZKXYGNMRUMXD");

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
    msg.setTimeStamp(0.819778925057);
    msg.setSource(39182U);
    msg.setSourceEntity(144U);
    msg.setDestination(44547U);
    msg.setDestinationEntity(60U);
    msg.name.assign("PUMQJKTPBKVRTWQLBHBINVCPNJEINRMICFDXJNODAWMVQAVUPXRLQOUVJOXVXBKYLRYSXJUWCHSUUMRLXZFBTSGIJAAPBZIMXGEQWGWNLZJTGEXBFDYEOSTGTJKMCTPIWKCBAQ");

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
    msg.setTimeStamp(0.0841956256708);
    msg.setSource(36367U);
    msg.setSourceEntity(81U);
    msg.setDestination(3953U);
    msg.setDestinationEntity(196U);
    msg.name.assign("TTQBLIDIIZGEVMXLURHRVWBJHOMCYDGGSIRZXQXFEPQZOJFRRSNMMKAYKKZJZOCUNGGYYUTAAEQGHMGAKNEMWFCDYWQDWXLKZVSNEBZVPIXYRMPUKFCVAPWVODIRSBLKHZNDXCLKTSI");

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
    msg.setTimeStamp(0.122092616565);
    msg.setSource(12871U);
    msg.setSourceEntity(202U);
    msg.setDestination(12425U);
    msg.setDestinationEntity(213U);
    msg.name.assign("QNLJFLDZKMVNNRZCPSUENIUCNNJRUKXFEXTLKEFLHPRJASCWFCOZHVWINPI");

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
    msg.setTimeStamp(0.928379066273);
    msg.setSource(39499U);
    msg.setSourceEntity(251U);
    msg.setDestination(35200U);
    msg.setDestinationEntity(123U);
    msg.type = 130U;
    msg.error.assign("DCXTNYOCWWYBAL");

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
    msg.setTimeStamp(0.373504449429);
    msg.setSource(20496U);
    msg.setSourceEntity(55U);
    msg.setDestination(47314U);
    msg.setDestinationEntity(100U);
    msg.type = 53U;
    msg.error.assign("PXNLZBCVKBJMWPTXRQKZEABHGYNPANQDPTRDJURUZEXJQASQIHCMHFWDGOUYFIVWBIAWFB");

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
    msg.setTimeStamp(0.451054079464);
    msg.setSource(24814U);
    msg.setSourceEntity(25U);
    msg.setDestination(44884U);
    msg.setDestinationEntity(203U);
    msg.type = 217U;
    msg.error.assign("KRBSMNHPRQGCRINNLHDKMEWQLVIZXBNWEAHQUVEEAQMBJWJJFXDSWOULMTUKPAZDFCQSHPIJOARO");

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
    msg.setTimeStamp(0.383162810598);
    msg.setSource(17031U);
    msg.setSourceEntity(71U);
    msg.setDestination(45206U);
    msg.setDestinationEntity(104U);
    msg.seq = 20477U;
    msg.sys_dst.assign("YSBVZMHUTUMCVJXOBEDUEUPMBCHLQUYKQIPTBBZUGLLRLGNIHYNMAHLWZRJLCWXZISSODPKSVZRXPPDEEJOOJXWGZNVRTXKYALSDVRWFMQFTXOPTRF");
    msg.flags = 216U;
    const char tmp_msg_0[] = {-36, -29, 0, -44, -18, -118, -34, 28, -99, 60, -86, -120, -7, 87, 123, 52, 93, 11, 114, -67, 9, 4, 95, 95, -13, 0, 5, -95, 77, 17, -118, 100, -94, -38, -63, -112, 1, -49, -93, -35, 61, 1, 61, -54, -26, -22, 86, 105, 41, 49, 39, 63, -6, 21, -99, -61, -112, 52, 95, 0, 120, -27, -43, -55, -13, -122, 108, 97, 32, 58, -95, 85, -88, 23, 84, -11, -68, -62, -38, -32, 89, -112, 110, 48, 42, 52, -59, 31, 25, -74, 92, 77, -126, -30, 24, -6, 7, -38, 3, 102, 120, -105, -116, -72, 103, -36, -18, 33, -11, 100, 124, 45, 108, 20, -112, -8, -45, 45, 68, 32, -17, -126, 10, 84, 27, 91, 49, 17, -5, 18, 75, 126, 67, 22, -41, -114, -88, 55, -26, -119, -79, 88, -120, -95, -101, 57, 120, 29, 124, 106, 59, 66, 25, -122, 41, 11, -120, -22, -83, 84, -119, 117, -66, 66, -69, 71, 50, -75, 107, 7, 79, 98, 15, 78, -8, 19, 12, 22, 105, -11, 38, -72, 5, 70, -29, -29, 49, -28, -108, -49, -64, 51, -117, 93, -12, -116, -83, -43, -19, -45, 36, 32, -11, 13, -31, 27, 109, 7, -79, -89, -59, -35, -114, 25, 108, -69, 112, -121, 119, -15, 50, 23, -54, -23, -106, -30, 95, -122, -79, -60, -41, 70, -32, -32, 24, 47, -95, 102, -96, -121, -68, 82, -86, 26, 116, -11, -39, -116, 5, -91};
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
    msg.setTimeStamp(0.176933353025);
    msg.setSource(427U);
    msg.setSourceEntity(122U);
    msg.setDestination(18213U);
    msg.setDestinationEntity(45U);
    msg.seq = 13933U;
    msg.sys_dst.assign("SONCODBFFZTGEEORBFYERRQDNTZWGPBHQBDRGXEWGTZLDYHOWJIDWMPLRMPEABK");
    msg.flags = 101U;
    const char tmp_msg_0[] = {22, -33, 96, 85, 7, 55, 86, 94, -67, 71, 89, -87, -81, -99, -25, 98, -65, -25, 51, 86, 24, -7, 117, 58, 81, 111, -105, 17, 55, 75};
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
    msg.setTimeStamp(0.224071613087);
    msg.setSource(38738U);
    msg.setSourceEntity(129U);
    msg.setDestination(3436U);
    msg.setDestinationEntity(25U);
    msg.seq = 38981U;
    msg.sys_dst.assign("BDOUHRYVSUTNFKIXZBIHSVLLEWYICOSVWHSJQJBXGSPPQNCKTATCWQWJREWSTMKOTXKZZOPACMHJBKTCADEN");
    msg.flags = 224U;
    const char tmp_msg_0[] = {77, -70, 47, 22, -108, 76, 53, -45, 52, -99, -61, -24, -125, -85, -34, -50, 90, 30, -113, -20, 20, -51, 12, -110, -53, -2, -2, -48, 23, 116, -67, 38, -2, -13, -21, 85, 45, 29, -80, -35, 32, 35, 117, 36, -46, -16, 42, 31, 89, 68, 111, 76, -118, -108, -115, 40, -104, 8, 39, -66, -21, -85, -10, -13, -106, -100, -69, -115, 121, 85, -86, -85, 108, 43, 45, -5, 24, 9, 70, -60, -127, -126, -16, -19, -87, 36, 67, -106, 46, -61, -128, 83, 102, 79, -31, -46};
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
    msg.setTimeStamp(0.189859252866);
    msg.setSource(53979U);
    msg.setSourceEntity(93U);
    msg.setDestination(60220U);
    msg.setDestinationEntity(198U);
    msg.sys_src.assign("VPJGHXZRYNZBOVDNNDHGPJOXZBQABDNVWJUKEJNOLFBOFNCVONADEYDPVEQEXCSYCMWWBLGPJZLFUWWOXMOZZOWRYQICDMCVPWTQUKUJRDIDASUTXTXTGLRMSUBQCGCC");
    msg.sys_dst.assign("ZSGRVHQYPLRUBSKOLYEVOCVCIFTNKWXDBGYXUWUKXPLQJSXIUFCIRBVKWUAJRFPCYPHOVFZNZMMTVCGAKAGTIHBIYXRPXKJQTCZFVZOTPRTXOSULUZKTLZDHEGDBGWXUJUNGTIEEOSQDJVEQLOUKWRRYGPHQLIMQZSDSFXZFGSSYXHQEPNHYECFW");
    msg.flags = 10U;
    const char tmp_msg_0[] = {73, -1, -2, 108, 124, -81, 6, 109, 114, 104, 27, -45, -64, 73, -89, -106, -25, 12, -102, -4, -28, 111, -43, -7, -42, 95, 100, 121, 106, 28, -67, -84, 11, -12, -58, -40, 96, 65, -81, 111, 20, -116, -76, 86, -43, 49, -50, 51, -37, 36, 87, -75, 71, 13, 48, 20, 92, 15, -60, 41, -95, -111, -18, -16, -86, 111, -60, 109, -73, 61, -79, -84, 40, 70, -11, 78, -110, 11, 61, -70, 96, 91, 89, -32, 33, 9, -15, -40, -45, 116, 59, -46, 101, 27, 109, -25, 95, -27, -19};
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
    msg.setTimeStamp(0.306081261596);
    msg.setSource(7046U);
    msg.setSourceEntity(174U);
    msg.setDestination(56375U);
    msg.setDestinationEntity(208U);
    msg.sys_src.assign("DYXCLAJXTOYMFLHAEGWCPJQUXTOKWRIVAMDJDBMNPQMOXCKBGAMFQQYARBIBYUVJSHBPLWXLCEUCEHWJOFVUQRMGDECHTUZKWYUTCLIZSGRJTTIGEHBEGKMUYKXERYOXGNVAFVKSZTFZLOQHHQWVRIZOKMPTKTLSHPGWAAZEFANBXIGQQPSRCUDVESPFBVZSIRJLHONWUDJKDNTIGIXXICPSNHNCDJBZFYSPDNWF");
    msg.sys_dst.assign("GSDBMYWPQOZFIUOCIOYMLQUJWIBSELMRMAKAUSVFFTRAFNZGXJKZGNVAQLCWWUCEFUSHNYGJWPRDLZTEOBUOQCRXGAIQCNCQQYXXCLEMKJTXMNTTDUHHREBVKDXDGQROBIVTEATPXZWYPU");
    msg.flags = 71U;
    const char tmp_msg_0[] = {-94, 107, -48, 117, 17, 62, -16, -78, -82, -23, 101, -23, 24, -121, -12, 6, -30, -6, 16, -16, -76, -95, 121, -119, -47, -122, -106, -19, 93, -94, 116, -114, -52, -66, -36, -112, -74, 126, -24, 48, -8, 54, -75, -40, 10, 21, 14, 120, 52, 20, 82, 9, 81, 65, 80, 66, -90, -82, 50, 96, -48, 26, 56, 13, 104, 53, 100, 43, -17, 8, 17, -58, -43, 80, 96, -10, 5, 67, -118, -106, -17, -120, -47, -103, 108, -26, 36, 121, 94, -78, -19, 56, -2, 45, 104, -67, 57, 18, 93, -41, -19, -40, -1, 91, 29, 87, -81, 58, 122, 90, 27, 78, -117, 33, 114, -39, -71, -94, -80, -56, -124, 113, -28, 124, -36, 112, -63, 110, -67, -6, -81, -39, 105, -89, 112, 126, 53, -32, 83, 42, -107, -71, 111, -25, 74, -119, 118, -71, 50, -58, 71, -24, -103, 70, 102, -10, -103, 33, 35, -62, -100, -36, 1, -25, -63, -49, 49, -69, 48, -106, 8, 104, 104, -64, 84, -87, 119, -115, -122, -3, 7, -48, -62, -14, 44, -99, 53, -10};
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
    msg.setTimeStamp(0.955011720825);
    msg.setSource(39674U);
    msg.setSourceEntity(222U);
    msg.setDestination(8986U);
    msg.setDestinationEntity(108U);
    msg.sys_src.assign("YVNGJTWNUZSUPRJCEKCFDEQQVXVUGCINGYAGPDHYEKOULQYTTKDVQRIYDHHRSYZTRLAJBSOJAUGJGZLBSB");
    msg.sys_dst.assign("GZEWHXJENEMIPKKYCGINEIRSTJLXVYTDJNQBVRIKZBZIUHJLSYXRTJWQEFFTNRLMQFHYVEPDRIIMZDSHGBHPTKPGAMIMNATSAVMPWQNEXXDBQZMAIRYNRWUGOLUNDCFPVVCOQOAZKLYDAKZNYGVPBSXGWLRYICTWVVGOBTLTXZCHEAWGHHXRACBDSQXCFTMNSOKRSLBSKZOYFAVBFUJJDHDMASUUJEOLQQGEUFBOFPCOMPKHUY");
    msg.flags = 251U;
    const char tmp_msg_0[] = {-88, 108, -27, 94, -113, 18, 39, -16, -119, -69, -39, -36, -74, -78, -103, 115, -102, -101, -57, 120, 90, -105, 1, -54, 62, 82, 14, 104, 117, -68, 1, 45, -120, -78, 50, -52, -42, -44, -23, 9, 82, -110, -87, -3, 105, -108, 103, 108, 40, 60, -20, 101, -74, 99, 44, 28, -53, -93, 57, 51, 68, 81, 21, 49, -41, -36, -90, -46, -50, -33, 105, -32, -11, -110, -128, -124, -78, 41, 9, -116, 117, 79, -112, -126, 29, -40, -119, 74, 85, 90, 116, 54, -23, -19, 36, -20, 117, -62, -61, 67, 19, 7, 22, -43, 121, -86, 88, 30, 54, -28, -10, 53, 75, -118, -12, -25, 88, 55, 59, -100, -41, 109, 61, 45, 90, 39, -76, 7, 117, -84, -108, -18, 118, 75, 10, 15, 118, -83, -84, -57, -62, -100, -10, 43, -26, 67, 105, 26, 50, -26, 31, 9, -88, -12, 106, 97, -72, 25, -19, 111, -16, -95, -121, -34, 14, -64, -7, -29, 3, -60, 76, 6, -11, 28, -6, 75, -38, 32, 14, -42, 3, -64, 57, -89, 100, -36, 12, 121, 37, 69, -6, 45, 72, 45, -62, 93, -18, 41, -127, -26, -55, -58, -57, -116};
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
    msg.setTimeStamp(0.418492896681);
    msg.setSource(958U);
    msg.setSourceEntity(60U);
    msg.setDestination(58056U);
    msg.setDestinationEntity(47U);
    msg.seq = 46232U;
    msg.value = 42U;
    msg.error.assign("NXTCGLRLXJDYXVOUJBOANOALABNUWYDZKVOIWSBYLTUXGI");

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
    msg.setTimeStamp(0.782147778284);
    msg.setSource(52601U);
    msg.setSourceEntity(242U);
    msg.setDestination(34292U);
    msg.setDestinationEntity(18U);
    msg.seq = 7211U;
    msg.value = 154U;
    msg.error.assign("CVNKNYIVBABNZSQFJUPVDRSTBJBVYKXKPESELXRKLGXXPIIRMELQWJUXSVEBIZSKSTGGYRVHTORHRDGWAURISWZHMTCMJELHPYPZPTSTWDMELBEQAQIYKZNDPDQOAICZOYLDZEMZUGDKHXJYUAFROWIONXQQMTSTFWNJFXOVXAYWBVPNRUCNHZACYHLPCLAQJGKZQHOJVOHMPKMUAF");

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
    msg.setTimeStamp(0.695712347332);
    msg.setSource(20008U);
    msg.setSourceEntity(172U);
    msg.setDestination(27484U);
    msg.setDestinationEntity(146U);
    msg.seq = 36340U;
    msg.value = 158U;
    msg.error.assign("KQUURFZOSWAHSLAIYXVPIJBKPSUEXFQJZYSZMEENNVCOFLWSNJVJDXPYPRIETNQXWCOWWNPQHATNGNHOJGGINKJIYYVXMXUZRLLJADKAYBFCBTRBENRHLUVBFTTOKCTTEHUMCQFKFTDLU");

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
    msg.setTimeStamp(0.40305553983);
    msg.setSource(60890U);
    msg.setSourceEntity(169U);
    msg.setDestination(40082U);
    msg.setDestinationEntity(1U);
    msg.seq = 34517U;
    msg.sys.assign("FCIBZFGZIOQNZIJCBIEFJRUZQCQUDIFYXURSPJDTWATSIIRIFPIKKOLHJUESMLPJMGEDEPXHGBCWJNV");
    msg.value = 0.284430782616;

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
    msg.setTimeStamp(0.15866151097);
    msg.setSource(16036U);
    msg.setSourceEntity(89U);
    msg.setDestination(21495U);
    msg.setDestinationEntity(87U);
    msg.seq = 9695U;
    msg.sys.assign("VIGNLPTFXEJJTESFHNSAFKRALHAVMMZZMXWXCMTQCBWFWCNZTPBLCGXYHWKOPYOUOMEJEFBGXZCUOZSQBKAFEJGIGPQPWYMSOFYHT");
    msg.value = 0.127468161351;

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
    msg.setTimeStamp(0.589686650634);
    msg.setSource(1621U);
    msg.setSourceEntity(45U);
    msg.setDestination(63010U);
    msg.setDestinationEntity(157U);
    msg.seq = 49122U;
    msg.sys.assign("LHNZPJDOZQWYKQIXVNOKSQAKRNRJOXDFWKZZOFMUAMMVGZBELSXWSJIUNVBPRPLPZIUTFILXFDFEAKIRQTINLFAEOEYEUHCOUTGCHWWKNDEUYSBMSOWMBCCOIIRQBLPDITDJQHMZBTNCXTTAPARAWUYKNHYEVCYXGHJJUFJSCPQYQKPBHFNVGRGSMGPHMBUGCOVJZAXTZMJQDSUMEHQXALYKKXDGZYLLWNVFBVEPLCBVDATYDWIGGVJEX");
    msg.value = 0.568454929578;

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
    msg.setTimeStamp(0.513650808237);
    msg.setSource(29118U);
    msg.setSourceEntity(204U);
    msg.setDestination(31211U);
    msg.setDestinationEntity(29U);
    msg.action = 158U;
    msg.longain = 0.320899510123;
    msg.latgain = 0.654386206484;
    msg.bondthick = 1817309353U;
    msg.leadgain = 0.143939439222;
    msg.deconflgain = 0.265010927543;

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
    msg.setTimeStamp(0.102521238871);
    msg.setSource(41603U);
    msg.setSourceEntity(183U);
    msg.setDestination(43176U);
    msg.setDestinationEntity(57U);
    msg.action = 160U;
    msg.longain = 0.594798769182;
    msg.latgain = 0.53848322647;
    msg.bondthick = 4260200211U;
    msg.leadgain = 0.908674507925;
    msg.deconflgain = 0.370531636069;

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
    msg.setTimeStamp(0.232590086777);
    msg.setSource(20501U);
    msg.setSourceEntity(235U);
    msg.setDestination(41778U);
    msg.setDestinationEntity(42U);
    msg.action = 56U;
    msg.longain = 0.169516029175;
    msg.latgain = 0.813018382811;
    msg.bondthick = 223225173U;
    msg.leadgain = 0.2412565928;
    msg.deconflgain = 0.361984941012;

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
    msg.setTimeStamp(0.647348703989);
    msg.setSource(51399U);
    msg.setSourceEntity(186U);
    msg.setDestination(43169U);
    msg.setDestinationEntity(48U);
    msg.err_mean = 0.201828574494;
    msg.dist_min_abs = 0.251077464365;
    msg.dist_min_mean = 0.801300239351;

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
    msg.setTimeStamp(0.0458168243637);
    msg.setSource(46698U);
    msg.setSourceEntity(123U);
    msg.setDestination(23542U);
    msg.setDestinationEntity(199U);
    msg.err_mean = 0.430442755505;
    msg.dist_min_abs = 0.356423295933;
    msg.dist_min_mean = 0.0376835606387;

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
    msg.setTimeStamp(0.24024783851);
    msg.setSource(30884U);
    msg.setSourceEntity(254U);
    msg.setDestination(55078U);
    msg.setDestinationEntity(167U);
    msg.err_mean = 0.874954776565;
    msg.dist_min_abs = 0.44951640488;
    msg.dist_min_mean = 0.362947319251;

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
    msg.setTimeStamp(0.489114959981);
    msg.setSource(49675U);
    msg.setSourceEntity(28U);
    msg.setDestination(58676U);
    msg.setDestinationEntity(29U);
    msg.action = 27U;
    msg.lon_gain = 0.829774889722;
    msg.lat_gain = 0.201268974731;
    msg.bond_thick = 0.398421826075;
    msg.lead_gain = 0.328738685848;
    msg.deconfl_gain = 0.763078624327;
    msg.accel_switch_gain = 0.0976129556933;
    msg.safe_dist = 0.688032069929;
    msg.deconflict_offset = 0.681944499353;
    msg.accel_safe_margin = 0.0173411151261;
    msg.accel_lim_x = 0.325057490218;

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
    msg.setTimeStamp(0.916610202183);
    msg.setSource(15909U);
    msg.setSourceEntity(110U);
    msg.setDestination(52787U);
    msg.setDestinationEntity(80U);
    msg.action = 116U;
    msg.lon_gain = 0.584108767954;
    msg.lat_gain = 0.0475947704672;
    msg.bond_thick = 0.5114510683;
    msg.lead_gain = 0.541828368195;
    msg.deconfl_gain = 0.305568039964;
    msg.accel_switch_gain = 0.844788531182;
    msg.safe_dist = 0.0620612779513;
    msg.deconflict_offset = 0.901583810748;
    msg.accel_safe_margin = 0.853651958864;
    msg.accel_lim_x = 0.426911322284;

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
    msg.setTimeStamp(0.430846014714);
    msg.setSource(63297U);
    msg.setSourceEntity(210U);
    msg.setDestination(10604U);
    msg.setDestinationEntity(81U);
    msg.action = 114U;
    msg.lon_gain = 0.530750174044;
    msg.lat_gain = 0.468099632432;
    msg.bond_thick = 0.246351902031;
    msg.lead_gain = 0.862419006331;
    msg.deconfl_gain = 0.146025932545;
    msg.accel_switch_gain = 0.892949756156;
    msg.safe_dist = 0.179520529226;
    msg.deconflict_offset = 0.268455870532;
    msg.accel_safe_margin = 0.399035436815;
    msg.accel_lim_x = 0.24725511096;

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
    msg.setTimeStamp(0.71432096967);
    msg.setSource(47137U);
    msg.setSourceEntity(72U);
    msg.setDestination(37275U);
    msg.setDestinationEntity(69U);
    msg.type = 160U;
    msg.op = 242U;
    msg.err_mean = 0.268157593501;
    msg.dist_min_abs = 0.228274456626;
    msg.dist_min_mean = 0.938586553087;
    msg.roll_rate_mean = 0.447361719412;
    msg.time = 0.707951836581;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 192U;
    tmp_msg_0.lon_gain = 0.199840185094;
    tmp_msg_0.lat_gain = 0.135368083209;
    tmp_msg_0.bond_thick = 0.560692873463;
    tmp_msg_0.lead_gain = 0.288836874037;
    tmp_msg_0.deconfl_gain = 0.649268824166;
    tmp_msg_0.accel_switch_gain = 0.632126730814;
    tmp_msg_0.safe_dist = 0.0437384568174;
    tmp_msg_0.deconflict_offset = 0.0029242491686;
    tmp_msg_0.accel_safe_margin = 0.579927693155;
    tmp_msg_0.accel_lim_x = 0.415058351817;
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
    msg.setTimeStamp(0.857517298182);
    msg.setSource(20000U);
    msg.setSourceEntity(197U);
    msg.setDestination(319U);
    msg.setDestinationEntity(139U);
    msg.type = 127U;
    msg.op = 202U;
    msg.err_mean = 0.864681728891;
    msg.dist_min_abs = 0.762728214736;
    msg.dist_min_mean = 0.211629399249;
    msg.roll_rate_mean = 0.498956621838;
    msg.time = 0.376929503776;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 55U;
    tmp_msg_0.lon_gain = 0.632209823431;
    tmp_msg_0.lat_gain = 0.540050309186;
    tmp_msg_0.bond_thick = 0.548047068072;
    tmp_msg_0.lead_gain = 0.550548575626;
    tmp_msg_0.deconfl_gain = 0.204948987225;
    tmp_msg_0.accel_switch_gain = 0.427577500191;
    tmp_msg_0.safe_dist = 0.0535625042124;
    tmp_msg_0.deconflict_offset = 0.282461224501;
    tmp_msg_0.accel_safe_margin = 0.78071642413;
    tmp_msg_0.accel_lim_x = 0.836912452125;
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
    msg.setTimeStamp(0.281208394174);
    msg.setSource(8245U);
    msg.setSourceEntity(157U);
    msg.setDestination(20446U);
    msg.setDestinationEntity(154U);
    msg.type = 148U;
    msg.op = 223U;
    msg.err_mean = 0.702822831098;
    msg.dist_min_abs = 0.172613036972;
    msg.dist_min_mean = 0.15652284884;
    msg.roll_rate_mean = 0.626155153124;
    msg.time = 0.902979798739;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 228U;
    tmp_msg_0.lon_gain = 0.839263463028;
    tmp_msg_0.lat_gain = 0.902542696684;
    tmp_msg_0.bond_thick = 0.892244066709;
    tmp_msg_0.lead_gain = 0.802758858281;
    tmp_msg_0.deconfl_gain = 0.617659549175;
    tmp_msg_0.accel_switch_gain = 0.438567042069;
    tmp_msg_0.safe_dist = 0.780558378762;
    tmp_msg_0.deconflict_offset = 0.202943118187;
    tmp_msg_0.accel_safe_margin = 0.749831698615;
    tmp_msg_0.accel_lim_x = 0.021114196673;
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
    msg.setTimeStamp(0.846910746521);
    msg.setSource(62997U);
    msg.setSourceEntity(18U);
    msg.setDestination(37950U);
    msg.setDestinationEntity(54U);
    msg.lat = 0.929010973814;
    msg.lon = 0.481757158709;
    msg.eta = 2307484537U;
    msg.duration = 43982U;

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
    msg.setTimeStamp(0.241855849159);
    msg.setSource(23155U);
    msg.setSourceEntity(34U);
    msg.setDestination(38087U);
    msg.setDestinationEntity(165U);
    msg.lat = 0.643662226904;
    msg.lon = 0.451321045057;
    msg.eta = 2520144046U;
    msg.duration = 60008U;

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
    msg.setTimeStamp(0.867804787285);
    msg.setSource(12482U);
    msg.setSourceEntity(53U);
    msg.setDestination(11529U);
    msg.setDestinationEntity(79U);
    msg.lat = 0.989952762983;
    msg.lon = 0.488827974079;
    msg.eta = 1690349700U;
    msg.duration = 62337U;

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
    msg.setTimeStamp(0.536951427724);
    msg.setSource(40438U);
    msg.setSourceEntity(180U);
    msg.setDestination(51316U);
    msg.setDestinationEntity(105U);
    msg.plan_id = 596U;

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
    msg.setTimeStamp(0.626477246612);
    msg.setSource(5305U);
    msg.setSourceEntity(177U);
    msg.setDestination(56138U);
    msg.setDestinationEntity(129U);
    msg.plan_id = 26530U;
    IMC::SoiWaypoint tmp_msg_0;
    tmp_msg_0.lat = 0.4454347792;
    tmp_msg_0.lon = 0.330662540064;
    tmp_msg_0.eta = 639648116U;
    tmp_msg_0.duration = 56624U;
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
    msg.setTimeStamp(0.50576589836);
    msg.setSource(53269U);
    msg.setSourceEntity(210U);
    msg.setDestination(423U);
    msg.setDestinationEntity(100U);
    msg.plan_id = 54965U;

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
    msg.setTimeStamp(0.848636362209);
    msg.setSource(14111U);
    msg.setSourceEntity(232U);
    msg.setDestination(462U);
    msg.setDestinationEntity(195U);
    msg.type = 75U;
    msg.command = 135U;
    msg.settings.assign("AZDLVRPQRZFBIJPWGHTUCIASQSKCFHSCLUEORRTHZNUQAOMLOUCYBRXBYAARUJSDIFPCBXOGAFTIEAKKWUMIFGVFQQJFYKZYRLGEEZVNPSOCBICYPITTYSXYBPVWNXXWLLZWXDVJTLYLW");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 4160U;
    IMC::SoiWaypoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.932490841586;
    tmp_tmp_msg_0_0.lon = 0.967553457586;
    tmp_tmp_msg_0_0.eta = 347132927U;
    tmp_tmp_msg_0_0.duration = 59488U;
    tmp_msg_0.waypoints.push_back(tmp_tmp_msg_0_0);
    msg.plan.set(tmp_msg_0);
    msg.info.assign("FHBVOMAHJXYRMPYQMHFICRAXKAGVSZJDZZGOWAUILCUDOFGRNEXDQJTUFSOS");

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
    msg.setTimeStamp(0.608588322354);
    msg.setSource(61478U);
    msg.setSourceEntity(93U);
    msg.setDestination(34904U);
    msg.setDestinationEntity(195U);
    msg.type = 133U;
    msg.command = 2U;
    msg.settings.assign("BKFMJNCPDAGXPZBJELSPADCHWYUBGJQJRLRTLRKDMSMKZJDTPPKYAYTSCXXRPNGYSEMZKZWHFFUHCLT");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 18307U;
    IMC::SoiWaypoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.322910245118;
    tmp_tmp_msg_0_0.lon = 0.234535467847;
    tmp_tmp_msg_0_0.eta = 2926171336U;
    tmp_tmp_msg_0_0.duration = 30900U;
    tmp_msg_0.waypoints.push_back(tmp_tmp_msg_0_0);
    msg.plan.set(tmp_msg_0);
    msg.info.assign("OLOCEAABQNPTRQVGJYTPMWZFTJXMDTBYDTFCGNCETFAHQIEQNCAQETODZRXGPFNWUYANLRSOHQAGAFPSVSHDIPEUIJHUOMWDBKRKSSRXKLLVXGCXLUBGQLCWBZVCNQJYWRGYWSJFDKXWYRDYEHTJSPRNUSXVPVZOUIJTHAYBFWNHDBLUXLKAWCNOULXZMS");

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
    msg.setTimeStamp(0.539812593615);
    msg.setSource(56178U);
    msg.setSourceEntity(16U);
    msg.setDestination(40029U);
    msg.setDestinationEntity(166U);
    msg.type = 14U;
    msg.command = 104U;
    msg.settings.assign("TXBQGDKZHAAURWOFDWDYHIHXWEUXKTNECCIVYMNPDFBFRYHDQXLQXOKXYTBGFRBFZBZJOZHLDQRAHPSNHYUSRULIHREFIVJSVILQGYMMGNPTQZEOTDQZOVPWPNNEWXWXANYHWOJEZIVGUZQVWKLQMDURDZSSOJETUOZGEFCMJCLMYATHOKUKJTUGTAXKAAWMRSGDFPNMPKEBBGVLVJIVSP");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 22039U;
    msg.plan.set(tmp_msg_0);
    msg.info.assign("CLTMASHSVOGMIVOOGXNI");

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
    msg.setTimeStamp(0.676621497963);
    msg.setSource(13868U);
    msg.setSourceEntity(14U);
    msg.setDestination(1857U);
    msg.setDestinationEntity(220U);
    msg.state = 167U;
    msg.plan_id = 6291U;
    msg.wpt_id = 172U;
    msg.settings_chk = 56594U;

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
    msg.setTimeStamp(0.9233058216);
    msg.setSource(25779U);
    msg.setSourceEntity(177U);
    msg.setDestination(51782U);
    msg.setDestinationEntity(205U);
    msg.state = 115U;
    msg.plan_id = 38056U;
    msg.wpt_id = 46U;
    msg.settings_chk = 19545U;

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
    msg.setTimeStamp(0.599551721971);
    msg.setSource(22892U);
    msg.setSourceEntity(227U);
    msg.setDestination(56165U);
    msg.setDestinationEntity(169U);
    msg.state = 52U;
    msg.plan_id = 23252U;
    msg.wpt_id = 126U;
    msg.settings_chk = 65356U;

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
    msg.setTimeStamp(0.945911193093);
    msg.setSource(47011U);
    msg.setSourceEntity(16U);
    msg.setDestination(46162U);
    msg.setDestinationEntity(168U);
    msg.uid = 39U;
    msg.frag_number = 126U;
    msg.num_frags = 59U;
    const char tmp_msg_0[] = {-33, 66, -11, 103, -14, 83, -63, 33, 20, 91, 61, 36, -39, 24, 86, -53, 82, 15, -69, -112, -84, -88, -76, -82, 57, -97, 22, 1, -42, 102, -84, -54, -20, -89, -48, 124, -22, 21, 114, -60, 109, 115, 67, -9, -14, -2, 108, 10, 33, 14, -86, -61, 78, -21, -108, -104, -98, 122, -65, -6, -118, -61, -78, 73, -108, 28, 45, -5, -56, -73, -98, -96, 16, -51, 120, -110, -30, -27, 92, -18, -107, 120, -9, 81, 47, -54, -102, -54, 7, -9, 72, 22, 65, 46, 31, -23, -24, -30, -14, -89, -69, 20, -65, 29, 94, 70, -52, 13, 61, 27, 78, -34, 38, 96, -17, -122, -112, 60, -24, 126, 99, 89, 22, 124, 40, 94, 1, -63, -16, -12, -85, 51, 77, -27, -2, -58, -13, 20, 32, 46, -15, -3, 0, 91, -86, 6, 101, 83, -41, 14, -108, -115, -7, 70, -13, -50, 46, -54, -110, 18, 59, -125, 0, -31, 89, -113, -118, -117, -41, 40, -32, -81, 101, 15, 76, 13, -122, -45, -22, 28, 126, 69, -21, 91, -102, 77, 60, -56, -128, 94, 65, -126, 58};
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
    msg.setTimeStamp(0.718352269868);
    msg.setSource(12611U);
    msg.setSourceEntity(155U);
    msg.setDestination(60971U);
    msg.setDestinationEntity(30U);
    msg.uid = 14U;
    msg.frag_number = 147U;
    msg.num_frags = 71U;
    const char tmp_msg_0[] = {-128, -94, 47, 89, 90, 57, 6, -82, 85, 117, 35, -22, 100, 57, -98, -60, 82, -12, 48, 56, 9, -80, 45, -67, -85, 103, 14, 85, 105, -26, 47, 13, -40, -80, -74, -76, -39, 44, 21, 119, 90, -40, -101, 122, 84, 73, -121, -57, -107, 55, 78, -119, -1, -34, -120, 57, -120, 55, -72, 109, -117, 34, -3, 14, -89, -117, 71, 105, 60, -46, 91, 95, 59, -55, 12, -80, -121, -21, -94, 45, -114, -103, 23, -76, -57, 17, 60, 44, -84, 81, -116, 22, -69, 43, -38, -95, -78, 120, -86, 25, 50, 52, 28, -71, 81, -19, 2, -8, 36, 20, -123, -117, 79, 65, 56, 27, 77, 14, 126, -108, 74, -125, 94, -16, 41, 86, 30};
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
    msg.setTimeStamp(0.824051275047);
    msg.setSource(18305U);
    msg.setSourceEntity(227U);
    msg.setDestination(36913U);
    msg.setDestinationEntity(35U);
    msg.uid = 66U;
    msg.frag_number = 123U;
    msg.num_frags = 158U;
    const char tmp_msg_0[] = {94, 106, -102, -8, -126, 53, -126, -45, 104, -64, 88, -113, 109, 98, -68, -33, 19, 28, -89, -13, -104, 90, -53, -58, -19, -8, 67, -110, -79, -115, -116, -33, 49, 126, -83, 35, -61, -35, 8, 98, 104, -125, -23, -95, -90, -57, -98, -64, -26, -36, -127, -92, 31, -84, 60, 9, 35, -98, 39, 73, 49, 28, -84, -40, 55, -29, 76, -39, 74, 33, -76, 21, 80, 18, -39, -68, 29, -102, -94, -115, 83, 47, -7, 18, 121, -3, -81, 113, 10, -105, 79, 77, -17, 9, 3, 62, -53, -45, 24, -59, 120, -68, -23, 63, 31, -39, 58, 30, 107, -22, 94, -28, 122, 64, 26, 91, 36, -76, -21, -96, 83, -78, 44, 125, -41, 121, -100, -114, 38, -105, -51, 120, 88, 109, -75, -59, 46, -27};
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
    msg.setTimeStamp(0.285807264899);
    msg.setSource(61337U);
    msg.setSourceEntity(94U);
    msg.setDestination(15029U);
    msg.setDestinationEntity(62U);
    msg.content_type.assign("KQBXDFZVDQMRYXASLVGOKXMANWNRYDSUVOWCKLLYPSYOHMQZOQPFUNTLMLRGKUEHHVPNZZBQDDKJVGOWRDZPIWMBS");
    const char tmp_msg_0[] = {-109, -80, 14, 94, -128, 96, 42, 50, -113, -61, 112, 16, -102, 41, -119, 38, -91, 28, 88, -25, 34, 49, 72, 107, -96, -67, -94, -71, 108, 3, -109, -117, 117, 73, -5, 12, -92, 49, 56, 21, 21, 42, 18, -42, -127, 27, -11, 108, -55, -11, 51, -8, 62, -87, 75, -66, -80, -73, -98, 9, 74, 39, 10, 48, -128, -114, 19, 18, 36, 0, 78, -31, -111, 104, -121, 78, -77, 111, 22, -13, 122, 3, -20, -55, -63, -29, -83, -122, -100, 26, 80, -118, -23, 114, 93, 2, -67, 31, -14, -112, -45, -119, 48, -91, -19, -119, 69, 45, 57, 91, -48, -47, -90, 66, 51, 52, 45, -12, 22, -116, -47, 0, -73, 32, -15, 93, 17, 42, 18, 98, 67, -27, 94, -42, -41, 28, 23, -69, 75, -31, 28, -28, 77, -10, -1, 47, 99, 21, 97, 55, 102, -126, 121, -28, -41, -47, 76, 59, -36, -72, -19, -76, -88};
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
    msg.setTimeStamp(0.0218948341244);
    msg.setSource(61756U);
    msg.setSourceEntity(227U);
    msg.setDestination(56251U);
    msg.setDestinationEntity(225U);
    msg.content_type.assign("TNIWDGNFMRLARKKZZGFOTRMOOFYJWSXUOMVLUBXPMREZMTYPVYVPDWIBUKFJHAAFUVMGQVHWYYNTKNWDYDEIBXDIBHLDHPBDCSPFEPCEQANUMAECWQLAXQSKZTSJPUPXGSVHFNYLGHLJAUQECIULVSMTCNZLPUHWSWGIMCAOCFFBRJKRLICSCOWEGELSRZOMQXPXAHFQXQTWYYOGIKJJTVJEIXABJNTOJVDKDY");
    const char tmp_msg_0[] = {33, 3, 18, 7, 17, 72, 59, -109, -94, 28, -114, 91, -91, -49, -16, -6, 106, 39, -108, 27, 12, -72, 60, 27, 19, -2, 14, -76, 83, 11, -123, -105, 112, -66, -9, 4, -121, -62, -42, -86, -58, -119, 69, -78, -51, 101, -94, -89, -30, 15, -12, -30, 73, 25, 8, -64, -117, -57, 1, 114, 20, 13, 25, 98, -109, 43, -61, -67, -124, 72, -117, -124, -94, 47, 112, 55, 100, 99, 91, -112, -22, -45, -56, -8, 118, -8, -6, 62, -22, -89, -70, -9, 90, 104, -45, 82, 12, -106, -98, -95, 5, -21, 107, -114, 109, -109, 78, 112, 78, -114, 92, -128, -104, -94, -95, -13, 116, -14, -82, -104, 59, -58, -70, -86, -73, 41, 28, 59, 64, 82, 104, 83, 24, 117, -121, -33, -69, 27, 75, -89, 34, -117, -74, 3, 118, -124, -6, 31, 106, -17, -60, 116, -5, 109, -99, 84, -11, -3, -82, 7, 124, 21, 120, 82, -111, 65, -38, 64, 105, -101, 68, -31};
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
    msg.setTimeStamp(0.667604992216);
    msg.setSource(15869U);
    msg.setSourceEntity(67U);
    msg.setDestination(32274U);
    msg.setDestinationEntity(148U);
    msg.content_type.assign("LWHIWDYIGYQETDEOAOUJYICBKXLIPPSSOTSBIHJTFK");
    const char tmp_msg_0[] = {70, -4, 23, -118, 12, -28, 67, 59, 15, -78, 96, -89, -72, 106, 95, -21, -117, 37, 49, -112, 35, -123, 24, 91, -51, -98, -24, -74, -39, -1, -43, -72, -108, 89, -92, 12, 32, -25, -20, 0, 70, -27, 115, 113, -14, 29, -50, 59, 70, 20, -24, 72, 20, 95, 54, -100, -44, -107, 31, -72, -94, 84, 89, 106, -100};
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
    msg.setTimeStamp(0.318948505657);
    msg.setSource(65469U);
    msg.setSourceEntity(90U);
    msg.setDestination(11014U);
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
    msg.setTimeStamp(0.180144993561);
    msg.setSource(31765U);
    msg.setSourceEntity(20U);
    msg.setDestination(28198U);
    msg.setDestinationEntity(115U);

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
    msg.setTimeStamp(0.407037692292);
    msg.setSource(22084U);
    msg.setSourceEntity(187U);
    msg.setDestination(57929U);
    msg.setDestinationEntity(74U);

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
    msg.setTimeStamp(0.393618339108);
    msg.setSource(48505U);
    msg.setSourceEntity(190U);
    msg.setDestination(46937U);
    msg.setDestinationEntity(20U);
    msg.target = 1979U;
    msg.bearing = 0.123012580809;
    msg.elevation = 0.52007671698;

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
    msg.setTimeStamp(0.104023730983);
    msg.setSource(4886U);
    msg.setSourceEntity(94U);
    msg.setDestination(11455U);
    msg.setDestinationEntity(143U);
    msg.target = 23635U;
    msg.bearing = 0.73938893449;
    msg.elevation = 0.677262596591;

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
    msg.setTimeStamp(0.112409674544);
    msg.setSource(13854U);
    msg.setSourceEntity(75U);
    msg.setDestination(10816U);
    msg.setDestinationEntity(31U);
    msg.target = 36928U;
    msg.bearing = 0.789704751263;
    msg.elevation = 0.652524252837;

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
    msg.setTimeStamp(0.583940026061);
    msg.setSource(50862U);
    msg.setSourceEntity(138U);
    msg.setDestination(60465U);
    msg.setDestinationEntity(234U);
    msg.target = 52577U;
    msg.x = 0.0303558642877;
    msg.y = 0.195788472373;
    msg.z = 0.757996284827;

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
    msg.setTimeStamp(0.223644152346);
    msg.setSource(52559U);
    msg.setSourceEntity(180U);
    msg.setDestination(59413U);
    msg.setDestinationEntity(183U);
    msg.target = 4540U;
    msg.x = 0.605526927563;
    msg.y = 0.900620781397;
    msg.z = 0.7239557767;

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
    msg.setTimeStamp(0.823434500564);
    msg.setSource(56609U);
    msg.setSourceEntity(235U);
    msg.setDestination(10458U);
    msg.setDestinationEntity(168U);
    msg.target = 13123U;
    msg.x = 0.586790976381;
    msg.y = 0.894033744577;
    msg.z = 0.14164190409;

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
    msg.setTimeStamp(0.0697733515776);
    msg.setSource(43853U);
    msg.setSourceEntity(107U);
    msg.setDestination(53345U);
    msg.setDestinationEntity(167U);
    msg.target = 22063U;
    msg.lat = 0.954539949948;
    msg.lon = 0.775479751598;
    msg.z_units = 236U;
    msg.z = 0.052969416888;

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
    msg.setTimeStamp(0.527882605207);
    msg.setSource(47950U);
    msg.setSourceEntity(83U);
    msg.setDestination(31687U);
    msg.setDestinationEntity(31U);
    msg.target = 19238U;
    msg.lat = 0.96769444888;
    msg.lon = 0.0126001779995;
    msg.z_units = 24U;
    msg.z = 0.840391221646;

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
    msg.setTimeStamp(0.155767344863);
    msg.setSource(7320U);
    msg.setSourceEntity(24U);
    msg.setDestination(28062U);
    msg.setDestinationEntity(112U);
    msg.target = 48479U;
    msg.lat = 0.577891861715;
    msg.lon = 0.599623638082;
    msg.z_units = 125U;
    msg.z = 0.479718732052;

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
    msg.setTimeStamp(0.139226142225);
    msg.setSource(17784U);
    msg.setSourceEntity(155U);
    msg.setDestination(26599U);
    msg.setDestinationEntity(243U);
    msg.locale.assign("KODMLZLDTZCQUZVRAH");
    const char tmp_msg_0[] = {-36, -90, 49, -1, 29, 99, -60, -91, 39, 6, 46, 83, 3, 34, 57, -84, 94, 106, 55, -126, 81, 87, -68, 94, 77, -26, 126, -10, 22, -111, -24, 4, -80, 15, 13, -14, -21, -57, -9, 15, 39, 8, 48, -4, -63, 82, -43, -39, 89, -20, 23, 99, 62, 89, 35, 54, -17, -21, -11, 9, 31, -43, -111, 60, 103, -78, -6, -55, 88, 27, -86, -60, -18, -110, -126, 31, -80, 112, -110, 0, -30, -114, -44, -105, 13, 125, -53, 62, -109, 24, 100, -46, 109, -46, -60, 42, -78, 96, -118, -105, -124, -14, 121, -69};
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
    msg.setTimeStamp(0.504409170493);
    msg.setSource(62992U);
    msg.setSourceEntity(146U);
    msg.setDestination(47423U);
    msg.setDestinationEntity(124U);
    msg.locale.assign("MAQTZWSQSIJYUPAWSAJAFRJVJDUFAIIMNTAPO");
    const char tmp_msg_0[] = {-42, -38, 72, 95, -111, 45, 88, 53, 73, 83, -88, -81, -15, 60, 23, 124, 68, -82, 89, 99, 109, 46, -104, 112, 50, 32, -95, 72, -26, 52, -64, 15, -54, -74, -117, -29, 6, -23, -127, 1, 91, 35, -71, -75, -31, 7, -19, 118, 54, 53, 76, -55, 63, 1, -85, -88, 27, -43, -25, -111, -9, -73, 20, -28, 67, 66, -4, 65, 69, -61, 114, -25, -55, 33, -46, -51, -87, -73, 94, -103, -106, -32, -16, 112, -106, 88, 90, 30, 60, 85, 55, -97, -29, -62, -58, 56, -65, -49, 110, -114, 114, -93, 67, -83, 104, -88, -22, -85, -58, -112, 62, -21, 108, -5, 7, -61, -65, -67, 55, 54, -84, 64, -96, 77, -59, 9, 7, 115, -24, 72, -33, 32, 71, -105, -112, 53, -98, -66, -117, 109, 35, 69, -18, 116, 50, 40, -67, 48, 34, -119, -64, -53, -104, 73, 73, 82, -82, 112, 122, 95, 14, -50, -51, -18, 2, -123, 121, -99, 94, -90, 51, -102, -100, -74, 69, 29, 12, 82, -36, -69, 25, -37, -16, 64, 5, -73, 0, 9, -62, 123, 0, 95, -9, -26, -73, 126, 110, 95, -46};
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
    msg.setTimeStamp(0.837875169676);
    msg.setSource(9475U);
    msg.setSourceEntity(188U);
    msg.setDestination(48026U);
    msg.setDestinationEntity(247U);
    msg.locale.assign("SBDUNXATNNAIOCSUJSLBXNQKWUSNWW");
    const char tmp_msg_0[] = {-34, 6, 77, 1, 22, 14, 88, 37, -50, -103, -96, 94, 68, -99, -39, -112, -15, -106, 116, -20, 109, 56, 103, -19, 58, 76, 104, -76, 23, -26, 116, 120, 64, -12, -114, 25, 0, -119, -20, -102, -86, -106, -66, 67, 79, 120, 9, 119, -26, 35, -32, 19, 84, 91, 90, -72, -22, 61, 75, -83, -47, 122, -24, -98, -115, 126, 64, 22, -35, -73, 121, 121, 64, -46, -113, -7, -76, -44, 15, 57, -105, 1, -49, 81, 61, 29, 15, -95, -76, -38, -58, 49, -77, -27, 113, -28, 40, 17, 20, -86, -73, 85, 42, 19, -93, -126, -22, -24, -19, 83, -52, 70, 81, 24, -30, 51, -68, -111, 6, 106, -90, -49, 20, -73, 18, -75, -48, 14, 6, 45, -118, -40, 46, 7, -105, 28, -52, -21, 3, -17, 119, -78, 92, -40, -90, -128, 70, -87, -108, 21, 95, 66, 5, -96, 83, -19, 64, 120, 71, -27, 124, -50, 77, 52, 125, 75, -44, 117, -30, -48, -71, -107, -9, 48, 95, 51, -57, 55, -71, 111, 89, -121, 92, -65, 96, -115, 67, -75, -40, -2, -10, 6, 95, 40, 31, 11, 123, 113, 87, 124, 119, 52, -55, -72, -85, 27, -79, -9, 119, -43, 27, 65, 37, 10, 110, -126, 71, 83, -128, -18, -60, -45, 121, 43, 38, -60};
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
    msg.setTimeStamp(0.45285265592);
    msg.setSource(14294U);
    msg.setSourceEntity(6U);
    msg.setDestination(62762U);
    msg.setDestinationEntity(250U);

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
    msg.setTimeStamp(0.625318194479);
    msg.setSource(57855U);
    msg.setSourceEntity(208U);
    msg.setDestination(7690U);
    msg.setDestinationEntity(46U);

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
    msg.setTimeStamp(0.722283064352);
    msg.setSource(49187U);
    msg.setSourceEntity(227U);
    msg.setDestination(36039U);
    msg.setDestinationEntity(98U);

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
    msg.setTimeStamp(0.994394511666);
    msg.setSource(11614U);
    msg.setSourceEntity(25U);
    msg.setDestination(10772U);
    msg.setDestinationEntity(250U);
    msg.camid = 39U;
    msg.x = 864U;
    msg.y = 28699U;

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
    msg.setTimeStamp(0.70946378694);
    msg.setSource(50298U);
    msg.setSourceEntity(146U);
    msg.setDestination(41796U);
    msg.setDestinationEntity(35U);
    msg.camid = 215U;
    msg.x = 32097U;
    msg.y = 17517U;

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
    msg.setTimeStamp(0.689428607202);
    msg.setSource(48977U);
    msg.setSourceEntity(98U);
    msg.setDestination(38616U);
    msg.setDestinationEntity(131U);
    msg.camid = 236U;
    msg.x = 53468U;
    msg.y = 3982U;

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
    msg.setTimeStamp(0.0843067471671);
    msg.setSource(14037U);
    msg.setSourceEntity(72U);
    msg.setDestination(648U);
    msg.setDestinationEntity(56U);
    msg.camid = 115U;
    msg.x = 55726U;
    msg.y = 46848U;

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
    msg.setTimeStamp(0.880777382226);
    msg.setSource(37006U);
    msg.setSourceEntity(215U);
    msg.setDestination(37132U);
    msg.setDestinationEntity(91U);
    msg.camid = 36U;
    msg.x = 60075U;
    msg.y = 29800U;

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
    msg.setTimeStamp(0.218866430064);
    msg.setSource(49481U);
    msg.setSourceEntity(160U);
    msg.setDestination(62057U);
    msg.setDestinationEntity(230U);
    msg.camid = 241U;
    msg.x = 59645U;
    msg.y = 2422U;

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
    msg.setTimeStamp(0.572320773974);
    msg.setSource(56762U);
    msg.setSourceEntity(77U);
    msg.setDestination(46548U);
    msg.setDestinationEntity(41U);
    msg.tracking = 219U;
    msg.lat = 0.323314979999;
    msg.lon = 0.173815029268;
    msg.x = 0.350948534451;
    msg.y = 0.978675668917;
    msg.z = 0.76896062142;

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
    msg.setTimeStamp(0.0064615723282);
    msg.setSource(37870U);
    msg.setSourceEntity(169U);
    msg.setDestination(44520U);
    msg.setDestinationEntity(45U);
    msg.tracking = 216U;
    msg.lat = 0.923932266852;
    msg.lon = 0.855233280118;
    msg.x = 0.584948611019;
    msg.y = 0.617609202509;
    msg.z = 0.17173530225;

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
    msg.setTimeStamp(0.96344809933);
    msg.setSource(40768U);
    msg.setSourceEntity(16U);
    msg.setDestination(47652U);
    msg.setDestinationEntity(77U);
    msg.tracking = 38U;
    msg.lat = 0.20275377004;
    msg.lon = 0.102275452963;
    msg.x = 0.239162833375;
    msg.y = 0.643120141975;
    msg.z = 0.926173202504;

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
    msg.setTimeStamp(0.0505973754015);
    msg.setSource(15486U);
    msg.setSourceEntity(4U);
    msg.setDestination(18493U);
    msg.setDestinationEntity(216U);
    msg.target.assign("QCARPPIXDCNBGYPSYCVNFPWFZAEVLKUOPWRPGWQFWRHQIXOHQZMNKFVPJCNVUXJKVKUIOZAYVZMNMOOZSGGICYIDJOUYPHALQBHFSEQKKLSPKOMHLREELLUDJTDJTBIEXWOUXFCRIKVIHGWNASTMACZKDUEZXDBRTDYMMWFFTONLTJXHIUWGAGDBNYJBTZXRVTAM");
    msg.lbearing = 0.210373506869;
    msg.lelevation = 0.156947992376;
    msg.bearing = 0.856793829958;
    msg.elevation = 0.736348589154;
    msg.phi = 0.930940649481;
    msg.theta = 0.857002335412;
    msg.psi = 0.130559453812;
    msg.accuracy = 0.396475567779;

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
    msg.setTimeStamp(0.391846182082);
    msg.setSource(32242U);
    msg.setSourceEntity(182U);
    msg.setDestination(21572U);
    msg.setDestinationEntity(27U);
    msg.target.assign("GTVVDKUYVYRADURASXTDRZOWSQFMJEWPYWBSKZXRTVBPLKPHRCARXLWYKNSHFOYKRXBNBEIPDGGNYMGNXGNMFCHIMPLIONWUMOOCSFVMTLIGAGGWKMOVTMXWYKUBZQZWYFSCTCLECVQFTEDPALJHJQNN");
    msg.lbearing = 0.0637071091471;
    msg.lelevation = 0.503887137457;
    msg.bearing = 0.45603187605;
    msg.elevation = 0.0764057530132;
    msg.phi = 0.503692787932;
    msg.theta = 0.0376559752361;
    msg.psi = 0.319282432693;
    msg.accuracy = 0.677105374068;

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
    msg.setTimeStamp(0.300482528601);
    msg.setSource(7833U);
    msg.setSourceEntity(115U);
    msg.setDestination(42155U);
    msg.setDestinationEntity(110U);
    msg.target.assign("UCVXTFSLLWKPXTMOJAOPHEKQFFYPQEJDZDPAOSGXCACRHEHZGZMEVFBVITEFGJKBQLSJURRJUONRGLAJLTJMGILITCQQBYSAVBWCEYAOMASXZHHZNFLCBMPBBGWPTUDDJHKWIPYPAYZHYXSDDWTKXHLCNZDMORXNYQPVIORQXNEXUUTCRDEWYKDNLFZRIYCMUJFRUGWHTVGKGKSQJWGSVUTIPCQFB");
    msg.lbearing = 0.787412156263;
    msg.lelevation = 0.877257092886;
    msg.bearing = 0.388794153137;
    msg.elevation = 0.255066399835;
    msg.phi = 0.30938596765;
    msg.theta = 0.777248108916;
    msg.psi = 0.922771400551;
    msg.accuracy = 0.184086673982;

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
    msg.setTimeStamp(0.0841502196362);
    msg.setSource(53286U);
    msg.setSourceEntity(143U);
    msg.setDestination(24437U);
    msg.setDestinationEntity(206U);
    msg.target.assign("YHEPVHUMDJ");
    msg.x = 0.262202783612;
    msg.y = 0.357656143489;
    msg.z = 0.657982548171;
    msg.n = 0.749366776959;
    msg.e = 0.393957870556;
    msg.d = 0.466382245729;
    msg.phi = 0.800587549285;
    msg.theta = 0.248667356984;
    msg.psi = 0.690341695434;
    msg.accuracy = 0.997989889936;

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
    msg.setTimeStamp(0.584481375675);
    msg.setSource(48608U);
    msg.setSourceEntity(227U);
    msg.setDestination(45298U);
    msg.setDestinationEntity(63U);
    msg.target.assign("HMDZCHSBCWLCIDHVPLMGDNIPQBXOUTYIVSWFNVDMZJYWNNAHJATAHMDGSWJUBLZSIUARKICIGEHZEGYRKZSXYXYBQTWGIJT");
    msg.x = 0.625315720295;
    msg.y = 0.730610754468;
    msg.z = 0.0862790052236;
    msg.n = 0.507799864377;
    msg.e = 0.130114522923;
    msg.d = 0.210815052377;
    msg.phi = 0.886199210274;
    msg.theta = 0.30062191261;
    msg.psi = 0.499919852032;
    msg.accuracy = 0.350764052171;

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
    msg.setTimeStamp(0.0700663994336);
    msg.setSource(10492U);
    msg.setSourceEntity(42U);
    msg.setDestination(46960U);
    msg.setDestinationEntity(176U);
    msg.target.assign("CDIWZWUOEMOIGLQRHLSQTIEPDTHBGVZVF");
    msg.x = 0.160917152011;
    msg.y = 0.750472970657;
    msg.z = 0.354344147571;
    msg.n = 0.592099047065;
    msg.e = 0.650940189492;
    msg.d = 0.923365673134;
    msg.phi = 0.185305142312;
    msg.theta = 0.769759455191;
    msg.psi = 0.23723421226;
    msg.accuracy = 0.11949658281;

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
    msg.setTimeStamp(0.893823751629);
    msg.setSource(5306U);
    msg.setSourceEntity(9U);
    msg.setDestination(12588U);
    msg.setDestinationEntity(230U);
    msg.target.assign("JVEKMBMBCZVVOAOZAIMFFNGLPGSIEJOUVRAITPSYTNXRYLZMDTHFUWJICIKZOWZPRMAMXBVHLFSUHELFIHSRDZAKSKYCHLKGCXXBQQQNQEKFIDBZZXJYVLDDXPPCGNQQJIMBWNNAUYKWHKOSTNAJZVKBRGOSGWXAGHMKUDUHCCAFBMYIGRTJRGFQXESJRPTEY");
    msg.lat = 0.388095131435;
    msg.lon = 0.000493629431532;
    msg.z_units = 132U;
    msg.z = 0.672209824074;
    msg.accuracy = 0.335038603868;

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
    msg.setTimeStamp(0.1409735828);
    msg.setSource(7473U);
    msg.setSourceEntity(78U);
    msg.setDestination(16051U);
    msg.setDestinationEntity(236U);
    msg.target.assign("WBITERLJEFAMPDXAENECFDVMRKHRWRDQEYKROPDLZNDWYHLOLUBVFWFIYGCMTHZ");
    msg.lat = 0.777659880737;
    msg.lon = 0.253472667699;
    msg.z_units = 161U;
    msg.z = 0.988244972805;
    msg.accuracy = 0.0273072658303;

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
    msg.setTimeStamp(0.822220241001);
    msg.setSource(7412U);
    msg.setSourceEntity(65U);
    msg.setDestination(42726U);
    msg.setDestinationEntity(176U);
    msg.target.assign("TOAYQBGTSYONZVALGJHPDKRYGXRVREHZIUSMRFZTMDWWXOCMPPVIXFNAUBPIKWWDCJVUSIPIWRHOJCRLGREEFKGETTASOHVNRFWMPJCCOUBLYIXVICTDBBAYGEINDJHUZZJVGJYWKPZQSCLYOUOMDQKHSLHUMB");
    msg.lat = 0.658454951522;
    msg.lon = 0.23347929534;
    msg.z_units = 128U;
    msg.z = 0.517119379273;
    msg.accuracy = 0.963832315734;

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
    msg.setTimeStamp(0.137491282087);
    msg.setSource(62991U);
    msg.setSourceEntity(208U);
    msg.setDestination(58733U);
    msg.setDestinationEntity(173U);
    msg.name.assign("NGXZDHHYOWJQOGBYXSQUEBDKQTJGLCFYSQXDKLUQRPYEBAWJMHOMLHEWUTGJOBJTLCALIQDPMNOOVEMMYYKLVUSYCISGMPRRYARIRTHLZNHXVTCJB");
    msg.lat = 0.110605128549;
    msg.lon = 0.654327772827;
    msg.z = 0.18112055991;
    msg.z_units = 156U;

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
    msg.setTimeStamp(0.701603135186);
    msg.setSource(37071U);
    msg.setSourceEntity(152U);
    msg.setDestination(49358U);
    msg.setDestinationEntity(47U);
    msg.name.assign("VPJKSYSUGMBMFCMVKLWVGDGTPZMJAVOECOAXBYRKWZTXBUTWPAEIDQALAIREYMMXIQMZJXSSTFNXCZDUBPJJNYJAIWRHYKOCIHJITNVXBKEHZKYVROTOHFWGVOXBHDPCEQLXBUCHBZNWMZCRNDRIYNFSUAGGIZCQAWVCQEFAEUNHBYUQPZLKIWWUDRNVNXPMYTQGLFSGFLLJKHDFTOSUBEOGPHQKLWTAMSSDZNYOTXUOPKFERLPEQJJDDQSIR");
    msg.lat = 0.53119263181;
    msg.lon = 0.924043400719;
    msg.z = 0.87392005225;
    msg.z_units = 22U;

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
    msg.setTimeStamp(0.497856477696);
    msg.setSource(16851U);
    msg.setSourceEntity(42U);
    msg.setDestination(786U);
    msg.setDestinationEntity(17U);
    msg.name.assign("JXMTYZWGDSGVYGKSLDAAVZTMGTVMKVCBGKRPFWKBXOPHSZRLCBWBKFJTAHWFTAIMNHWNQFKFSNEXIIERBICLVLIKYMGROUGZVETJFHCOUSQXRLDPZQQOQKKZVMWQAYYULUDGDRRCCLNPPHXHDIGZFMJJOZLDRXQMIIUEXLEBCFEJESSUTBCFRUBAYYHHXNVONDEWPVNJYJSYMADCAQWELBQXPANNOUWEQAPJOOKZH");
    msg.lat = 0.379077292852;
    msg.lon = 0.758020778959;
    msg.z = 0.523569402799;
    msg.z_units = 173U;

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
    msg.setTimeStamp(0.923738849096);
    msg.setSource(25966U);
    msg.setSourceEntity(44U);
    msg.setDestination(57489U);
    msg.setDestinationEntity(134U);
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
    msg.setTimeStamp(0.353724348005);
    msg.setSource(64193U);
    msg.setSourceEntity(55U);
    msg.setDestination(51699U);
    msg.setDestinationEntity(39U);
    msg.op = 64U;

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
    msg.setTimeStamp(0.623001752325);
    msg.setSource(49623U);
    msg.setSourceEntity(117U);
    msg.setDestination(20726U);
    msg.setDestinationEntity(243U);
    msg.op = 0U;

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
    msg.setTimeStamp(0.370184309179);
    msg.setSource(17837U);
    msg.setSourceEntity(214U);
    msg.setDestination(45646U);
    msg.setDestinationEntity(101U);
    msg.value = 0.791185211868;
    msg.type = 105U;

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
    msg.setTimeStamp(0.376394783151);
    msg.setSource(16964U);
    msg.setSourceEntity(173U);
    msg.setDestination(64257U);
    msg.setDestinationEntity(32U);
    msg.value = 0.642197427494;
    msg.type = 187U;

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
    msg.setTimeStamp(0.311692618829);
    msg.setSource(2685U);
    msg.setSourceEntity(215U);
    msg.setDestination(54424U);
    msg.setDestinationEntity(130U);
    msg.value = 0.386749185592;
    msg.type = 79U;

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
    msg.setTimeStamp(0.409928710889);
    msg.setSource(4688U);
    msg.setSourceEntity(40U);
    msg.setDestination(13936U);
    msg.setDestinationEntity(64U);
    msg.value = 0.64795528827;

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
    msg.setTimeStamp(0.995712304531);
    msg.setSource(62354U);
    msg.setSourceEntity(211U);
    msg.setDestination(22287U);
    msg.setDestinationEntity(184U);
    msg.value = 0.252701313026;

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
    msg.setTimeStamp(0.0444426092025);
    msg.setSource(14342U);
    msg.setSourceEntity(249U);
    msg.setDestination(45331U);
    msg.setDestinationEntity(125U);
    msg.value = 0.889636324147;

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
    msg.setTimeStamp(0.109597767892);
    msg.setSource(6241U);
    msg.setSourceEntity(199U);
    msg.setDestination(43478U);
    msg.setDestinationEntity(97U);
    msg.timestamp_last_service = 0.470243366435;
    msg.time_next_service = 0.652522997956;
    msg.time_motor_next_service = 0.549594111194;
    msg.time_idle_ground = 0.10548411551;
    msg.time_idle_air = 0.897380705966;
    msg.time_idle_water = 0.215117461448;
    msg.time_idle_underwater = 0.840519416617;
    msg.time_idle_unknown = 0.481212072781;
    msg.time_motor_ground = 0.0185027134128;
    msg.time_motor_air = 0.99303933235;
    msg.time_motor_water = 0.0467272001977;
    msg.time_motor_underwater = 0.372229747332;
    msg.time_motor_unknown = 0.652504898689;
    msg.rpm_min = -15363;
    msg.rpm_max = 13819;
    msg.depth_max = 0.890318173452;

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
    msg.setTimeStamp(0.166810654163);
    msg.setSource(26417U);
    msg.setSourceEntity(192U);
    msg.setDestination(8274U);
    msg.setDestinationEntity(216U);
    msg.timestamp_last_service = 0.405863577822;
    msg.time_next_service = 0.541803459088;
    msg.time_motor_next_service = 0.00787096039666;
    msg.time_idle_ground = 0.881940057771;
    msg.time_idle_air = 0.580404126384;
    msg.time_idle_water = 0.590599137166;
    msg.time_idle_underwater = 0.661511292321;
    msg.time_idle_unknown = 0.0221291204527;
    msg.time_motor_ground = 0.816825817208;
    msg.time_motor_air = 0.233671544056;
    msg.time_motor_water = 0.975245075217;
    msg.time_motor_underwater = 0.492730592676;
    msg.time_motor_unknown = 0.295610447485;
    msg.rpm_min = 16463;
    msg.rpm_max = -29576;
    msg.depth_max = 0.250819160015;

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
    msg.setTimeStamp(0.997057659169);
    msg.setSource(60827U);
    msg.setSourceEntity(3U);
    msg.setDestination(43667U);
    msg.setDestinationEntity(53U);
    msg.timestamp_last_service = 0.273131005287;
    msg.time_next_service = 0.757372376399;
    msg.time_motor_next_service = 0.465847953722;
    msg.time_idle_ground = 0.614077635288;
    msg.time_idle_air = 0.591751759443;
    msg.time_idle_water = 0.708240823426;
    msg.time_idle_underwater = 0.0429115391977;
    msg.time_idle_unknown = 0.908672975233;
    msg.time_motor_ground = 0.152272216056;
    msg.time_motor_air = 0.990031940829;
    msg.time_motor_water = 0.500877643874;
    msg.time_motor_underwater = 0.0540644310039;
    msg.time_motor_unknown = 0.0284607521626;
    msg.rpm_min = -6439;
    msg.rpm_max = 16044;
    msg.depth_max = 0.161953081186;

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
    msg.setTimeStamp(0.161567070405);
    msg.setSource(26248U);
    msg.setSourceEntity(5U);
    msg.setDestination(16273U);
    msg.setDestinationEntity(18U);
    msg.severity = 190U;
    msg.text.assign("FMTANIJVVPQGTCPUPKFZXVUQSNWBZVTRJHQYYGHTISEFQGZMCFQSCVJJZOGDZRSZSGMEGBQBLTATWDUKAKJIEOVKAUOLDNDFXCEZUWKDVWSMGAPIAFUZLHLUHNBTQMP");

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
    msg.setTimeStamp(0.764235772576);
    msg.setSource(14306U);
    msg.setSourceEntity(105U);
    msg.setDestination(50671U);
    msg.setDestinationEntity(165U);
    msg.severity = 106U;
    msg.text.assign("OEMJQBMTKWLVEARBMYLQUOVNLDDCKQJPKYUUWUGEAGJOBWOTNAHUISAHGEQVLJCTPDOGMHRUEFYQVFIMSSAYJXUNKPTMOZDTTSCCXCBXFVDRKZKVOZTFCQOCHGNZIXSFLCNHMOBFYXHAFHPKZVHIPBAJPGBMQCWLHAQNWGLZLMVWGIYRQPDTRYJRPXZTWB");

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
    msg.setTimeStamp(0.715798945859);
    msg.setSource(54611U);
    msg.setSourceEntity(155U);
    msg.setDestination(31354U);
    msg.setDestinationEntity(112U);
    msg.severity = 223U;
    msg.text.assign("ZDPMIKZCJWQXPVZZGLBTUMLXHYRHITFYXXOHGGPDFGUOKJNDUHBOBYALQUHBETUKTOLWRRKJEKFFBQQCNCCVFBVYJUWERZCCDKFNMAIBTWZHKELHURUVOGWRWOLYDZNEEINMTAUAPYCDVPNOMSLIPTEDCS");

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
    msg.setTimeStamp(0.415810628434);
    msg.setSource(52868U);
    msg.setSourceEntity(149U);
    msg.setDestination(34593U);
    msg.setDestinationEntity(40U);
    msg.channel = 16;
    msg.value = 421244173;
    msg.gain = 90U;

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
    msg.setTimeStamp(0.786428508623);
    msg.setSource(34069U);
    msg.setSourceEntity(154U);
    msg.setDestination(14252U);
    msg.setDestinationEntity(198U);
    msg.channel = -64;
    msg.value = 333651770;
    msg.gain = 145U;

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
    msg.setTimeStamp(0.897121881831);
    msg.setSource(62931U);
    msg.setSourceEntity(12U);
    msg.setDestination(58174U);
    msg.setDestinationEntity(61U);
    msg.channel = -35;
    msg.value = 1014338454;
    msg.gain = 11U;

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
    msg.setTimeStamp(0.304752318821);
    msg.setSource(33608U);
    msg.setSourceEntity(40U);
    msg.setDestination(40207U);
    msg.setDestinationEntity(79U);
    msg.ch01 = 0.547829489585;
    msg.ch02 = 0.819659881929;
    msg.ch03 = 0.0287622046199;
    msg.ch04 = 0.727800173474;
    msg.ch05 = 0.93994526563;
    msg.ch06 = 0.495650573993;
    msg.ch07 = 0.0197120746907;
    msg.ch08 = 0.810174233642;
    msg.ch09 = 0.93036285258;
    msg.ch10 = 0.240929251984;
    msg.ch11 = 0.579098086552;
    msg.ch12 = 0.261572523521;
    msg.ch13 = 0.458625923334;
    msg.ch14 = 0.760992302077;
    msg.ch15 = 0.251679110653;
    msg.ch16 = 0.142172855702;

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
    msg.setTimeStamp(0.542970340683);
    msg.setSource(40396U);
    msg.setSourceEntity(109U);
    msg.setDestination(60528U);
    msg.setDestinationEntity(193U);
    msg.ch01 = 0.205174372752;
    msg.ch02 = 0.826429391469;
    msg.ch03 = 0.699533672368;
    msg.ch04 = 0.423497090761;
    msg.ch05 = 0.526516765547;
    msg.ch06 = 0.797018324401;
    msg.ch07 = 0.174670543789;
    msg.ch08 = 0.40950816645;
    msg.ch09 = 0.886843900401;
    msg.ch10 = 0.327554011811;
    msg.ch11 = 0.692536930165;
    msg.ch12 = 0.878200536699;
    msg.ch13 = 0.0592933025838;
    msg.ch14 = 0.0225971510722;
    msg.ch15 = 0.283395472066;
    msg.ch16 = 0.84585748645;

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
    msg.setTimeStamp(0.920172118478);
    msg.setSource(6833U);
    msg.setSourceEntity(142U);
    msg.setDestination(23837U);
    msg.setDestinationEntity(69U);
    msg.ch01 = 0.259800122884;
    msg.ch02 = 0.615325098681;
    msg.ch03 = 0.540082184269;
    msg.ch04 = 0.37686652227;
    msg.ch05 = 0.911732003625;
    msg.ch06 = 0.8191808643;
    msg.ch07 = 0.243911320129;
    msg.ch08 = 0.864128136812;
    msg.ch09 = 0.258769966468;
    msg.ch10 = 0.25906574171;
    msg.ch11 = 0.909664524159;
    msg.ch12 = 0.418533777706;
    msg.ch13 = 0.109175087029;
    msg.ch14 = 0.860929671938;
    msg.ch15 = 0.159480625733;
    msg.ch16 = 0.91523388822;

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
    msg.setTimeStamp(0.957033497106);
    msg.setSource(6430U);
    msg.setSourceEntity(75U);
    msg.setDestination(61599U);
    msg.setDestinationEntity(106U);
    msg.time = 0.638191231506;
    msg.ang = 0.428053804584;

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
    msg.setTimeStamp(0.259045576486);
    msg.setSource(31974U);
    msg.setSourceEntity(178U);
    msg.setDestination(57010U);
    msg.setDestinationEntity(204U);
    msg.time = 0.982467466726;
    msg.ang = 0.464700770999;

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
    msg.setTimeStamp(0.652499770137);
    msg.setSource(5436U);
    msg.setSourceEntity(172U);
    msg.setDestination(48387U);
    msg.setDestinationEntity(191U);
    msg.time = 0.147756452892;
    msg.ang = 0.0558053114128;

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
    msg.setTimeStamp(0.43240899733);
    msg.setSource(35884U);
    msg.setSourceEntity(251U);
    msg.setDestination(22414U);
    msg.setDestinationEntity(218U);
    msg.value = 0.832906525999;

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
    msg.setTimeStamp(0.515606167622);
    msg.setSource(51023U);
    msg.setSourceEntity(120U);
    msg.setDestination(44016U);
    msg.setDestinationEntity(59U);
    msg.value = 0.420846579926;

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
    msg.setTimeStamp(0.769973975591);
    msg.setSource(39916U);
    msg.setSourceEntity(140U);
    msg.setDestination(27284U);
    msg.setDestinationEntity(88U);
    msg.value = 0.541124464236;

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
    msg.setTimeStamp(0.141583747226);
    msg.setSource(44868U);
    msg.setSourceEntity(163U);
    msg.setDestination(47191U);
    msg.setDestinationEntity(2U);
    msg.value = 0.540155690267;

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
    msg.setTimeStamp(0.105122828567);
    msg.setSource(9317U);
    msg.setSourceEntity(141U);
    msg.setDestination(30542U);
    msg.setDestinationEntity(95U);
    msg.value = 0.91983298147;

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
    msg.setTimeStamp(0.123111114386);
    msg.setSource(24756U);
    msg.setSourceEntity(39U);
    msg.setDestination(19295U);
    msg.setDestinationEntity(47U);
    msg.value = 0.49399157024;

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
    msg.setTimeStamp(0.508267333059);
    msg.setSource(50738U);
    msg.setSourceEntity(154U);
    msg.setDestination(41005U);
    msg.setDestinationEntity(77U);
    msg.value = 0.121604337248;

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
    msg.setTimeStamp(0.900193346267);
    msg.setSource(17975U);
    msg.setSourceEntity(225U);
    msg.setDestination(49976U);
    msg.setDestinationEntity(187U);
    msg.value = 0.130621578354;

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
    msg.setTimeStamp(0.603729572568);
    msg.setSource(18260U);
    msg.setSourceEntity(5U);
    msg.setDestination(36489U);
    msg.setDestinationEntity(20U);
    msg.value = 0.86422406875;

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
    msg.setTimeStamp(0.117688919472);
    msg.setSource(15863U);
    msg.setSourceEntity(13U);
    msg.setDestination(60995U);
    msg.setDestinationEntity(87U);
    msg.l2 = 3;
    msg.l3 = -30;
    msg.iridium = -71;
    msg.modem = 15;
    msg.pumps = 17;
    msg.vhf = -57;

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
    msg.setTimeStamp(0.345802514249);
    msg.setSource(20984U);
    msg.setSourceEntity(165U);
    msg.setDestination(2024U);
    msg.setDestinationEntity(108U);
    msg.l2 = 123;
    msg.l3 = 36;
    msg.iridium = 66;
    msg.modem = 114;
    msg.pumps = 71;
    msg.vhf = -100;

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
    msg.setTimeStamp(0.0713323415341);
    msg.setSource(39505U);
    msg.setSourceEntity(39U);
    msg.setDestination(6287U);
    msg.setDestinationEntity(104U);
    msg.l2 = 29;
    msg.l3 = -124;
    msg.iridium = -15;
    msg.modem = 76;
    msg.pumps = 22;
    msg.vhf = 70;

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
    msg.setTimeStamp(0.716477217154);
    msg.setSource(30846U);
    msg.setSourceEntity(64U);
    msg.setDestination(61599U);
    msg.setDestinationEntity(25U);
    msg.angle = 0.087052829405;
    msg.reference.assign("JDAPHOCXLFJMWBAFONSWSCCSJVIJNLJUABGHYWZOYXIXKAONXREOQURNUTZYBWIEFXJHDXZXNUREYFRGCRHTZAPBMBGTQUIIJXLGBS");
    msg.speed = 0.297796097341;

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
    msg.setTimeStamp(0.97954808226);
    msg.setSource(5630U);
    msg.setSourceEntity(88U);
    msg.setDestination(49116U);
    msg.setDestinationEntity(81U);
    msg.angle = 0.115656574349;
    msg.reference.assign("DWTTSCAFPGQKCNRKWDYDQVURBFQENHCPJHGUVZGIJJAJDKQSMPLKMZUBDCUZY");
    msg.speed = 0.479623731938;

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
    msg.setTimeStamp(0.38505469572);
    msg.setSource(28985U);
    msg.setSourceEntity(140U);
    msg.setDestination(29336U);
    msg.setDestinationEntity(189U);
    msg.angle = 0.378849641888;
    msg.reference.assign("HCTVUSDXWLVPRSRWYGOBSODOKSXJYSBCWMGZLPBNMAGSTXNZGIEXJERGCQYTNLRQKKJCBNUBAOBIJRYEZFRIDDRLAQYDHMINXIQWVKVEZEOHEKEWXZSWMMCXYGLNHQCAHIEFUGIGTQKAFASHZPCOXUXMZIVUJDOFPRUVQUDVOZHAFTPYVQNHPRVAFOYMTOJTKDEWKDPEJMUNFHAGQWPXMWTLNVJYMFKJ");
    msg.speed = 0.413620920286;

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
    msg.setTimeStamp(0.670638210826);
    msg.setSource(18705U);
    msg.setSourceEntity(170U);
    msg.setDestination(54426U);
    msg.setDestinationEntity(12U);
    msg.angle = 0.648678310404;
    msg.speed = 0.772512189964;

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
    msg.setTimeStamp(0.341391650463);
    msg.setSource(20218U);
    msg.setSourceEntity(14U);
    msg.setDestination(13490U);
    msg.setDestinationEntity(247U);
    msg.angle = 0.232778476289;
    msg.speed = 0.14013655817;

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
    msg.setTimeStamp(0.126245041367);
    msg.setSource(34418U);
    msg.setSourceEntity(34U);
    msg.setDestination(43172U);
    msg.setDestinationEntity(59U);
    msg.angle = 0.645590225426;
    msg.speed = 0.407840772334;

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
    msg.setTimeStamp(0.500838650017);
    msg.setSource(22119U);
    msg.setSourceEntity(121U);
    msg.setDestination(41417U);
    msg.setDestinationEntity(37U);
    msg.dir = 0.555235335684;
    msg.speed = 0.666257874163;

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
    msg.setTimeStamp(0.583441344469);
    msg.setSource(2489U);
    msg.setSourceEntity(162U);
    msg.setDestination(61188U);
    msg.setDestinationEntity(61U);
    msg.dir = 0.931125485539;
    msg.speed = 0.803824771098;

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
    msg.setTimeStamp(0.525679717286);
    msg.setSource(52100U);
    msg.setSourceEntity(45U);
    msg.setDestination(45776U);
    msg.setDestinationEntity(118U);
    msg.dir = 0.0582200910105;
    msg.speed = 0.067485609383;

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
    msg.setTimeStamp(0.82489178689);
    msg.setSource(43231U);
    msg.setSourceEntity(187U);
    msg.setDestination(3186U);
    msg.setDestinationEntity(48U);
    msg.x = 0.751816752748;
    msg.y = 0.706143657444;
    msg.z1 = 0.8760701798;
    msg.z2 = 0.851308979475;

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
    msg.setTimeStamp(0.419309810221);
    msg.setSource(39105U);
    msg.setSourceEntity(170U);
    msg.setDestination(16425U);
    msg.setDestinationEntity(95U);
    msg.x = 0.406316251185;
    msg.y = 0.993397989323;
    msg.z1 = 0.990849810657;
    msg.z2 = 0.436353164103;

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
    msg.setTimeStamp(0.0579899676763);
    msg.setSource(47400U);
    msg.setSourceEntity(180U);
    msg.setDestination(6684U);
    msg.setDestinationEntity(223U);
    msg.x = 0.23747143024;
    msg.y = 0.580540753139;
    msg.z1 = 0.566569751678;
    msg.z2 = 0.332043503225;

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
    msg.setTimeStamp(0.413518717806);
    msg.setSource(38191U);
    msg.setSourceEntity(253U);
    msg.setDestination(59646U);
    msg.setDestinationEntity(15U);
    msg.mmsi = 0.217365904983;
    msg.lat = 0.664427192215;
    msg.lon = 0.817921152406;
    msg.x = 0.00733580124608;
    msg.y = 0.0328736809814;
    msg.speed = 0.388764966508;
    msg.course = 0.0268047534928;
    msg.dist = 0.139272739566;
    msg.length = 0.204064155222;
    msg.width = 0.616532841522;
    msg.o_vect = 0.250391387731;

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
    msg.setTimeStamp(0.613388368879);
    msg.setSource(47352U);
    msg.setSourceEntity(126U);
    msg.setDestination(24472U);
    msg.setDestinationEntity(88U);
    msg.mmsi = 0.290805158302;
    msg.lat = 0.0373297094276;
    msg.lon = 0.278889652674;
    msg.x = 0.833120205803;
    msg.y = 0.494528009747;
    msg.speed = 0.0290314667818;
    msg.course = 0.469966746914;
    msg.dist = 0.223477450418;
    msg.length = 0.821224597063;
    msg.width = 0.375100095918;
    msg.o_vect = 0.0167190649826;

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
    msg.setTimeStamp(0.351560935484);
    msg.setSource(21159U);
    msg.setSourceEntity(230U);
    msg.setDestination(56816U);
    msg.setDestinationEntity(43U);
    msg.mmsi = 0.902001664275;
    msg.lat = 0.304239740981;
    msg.lon = 0.90025567498;
    msg.x = 0.451177933243;
    msg.y = 0.169038968009;
    msg.speed = 0.0039770753351;
    msg.course = 0.313181919019;
    msg.dist = 0.574004623067;
    msg.length = 0.89183842795;
    msg.width = 0.0772297829287;
    msg.o_vect = 0.285952147462;

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
    msg.setTimeStamp(0.889403913321);
    msg.setSource(17360U);
    msg.setSourceEntity(142U);
    msg.setDestination(50099U);
    msg.setDestinationEntity(67U);
    msg.locations.assign("CWRFQUXIGYYTABSHEOHOJWUVYONPEAUMOQJZJDSOCUAACTMBNHKDNQUUMDCHRTJXFVGFTWWLQTBLBKZTLHRSNPLNCMIRGZBFVHRYUJDRKMDFWVEPIENQKVPLTRFGYOVYEZGYUXIKQEJKWIFTBNFQDUH");

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
    msg.setTimeStamp(0.186072440012);
    msg.setSource(56263U);
    msg.setSourceEntity(164U);
    msg.setDestination(27090U);
    msg.setDestinationEntity(103U);
    msg.locations.assign("YSFTNJSDNGEEMFSSNEVPJUEUCOEATDIBDSKPZVGZYZBVBPTEOVYOSWHIMXTNLXCRZOSRRXBMCANTKQYBHZZXKITWCIQWVQYWXOLVHFFPCBDUTPNRUNKHIFOZRUKWMMWNGOJVAHQIFRQYHHTOSZWUH");

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
    msg.setTimeStamp(0.941241736465);
    msg.setSource(20706U);
    msg.setSourceEntity(12U);
    msg.setDestination(21557U);
    msg.setDestinationEntity(191U);
    msg.locations.assign("TJCBCILGZDVLXPTKXPESRRBTYKQREZOVEUQFYPHGNVKTGJADAYPBCHKHFZAFQVLGIHOQNSWVYWBWNJRTDGJODYMNQTRSOMQTOQLVXLIWRTEHMAKZMMLUDEXGMBGFBNZVJXDMHRIJKXZVSKHQVAFTCYDZPSGYLOFXFYEERCUBMDAUSWIWGSNBIWUDEEVJPCXAYRBPYNFHUCIWLWLWQUPOCOS");

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
    msg.setTimeStamp(0.272774945978);
    msg.setSource(37066U);
    msg.setSourceEntity(2U);
    msg.setDestination(20417U);
    msg.setDestinationEntity(195U);
    msg.value = 0.412306318476;

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
    msg.setTimeStamp(0.175283165075);
    msg.setSource(63467U);
    msg.setSourceEntity(114U);
    msg.setDestination(20327U);
    msg.setDestinationEntity(139U);
    msg.value = 0.584307454848;

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
    msg.setTimeStamp(0.319846005106);
    msg.setSource(32758U);
    msg.setSourceEntity(203U);
    msg.setDestination(60955U);
    msg.setDestinationEntity(9U);
    msg.value = 0.537811810352;

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
    msg.setTimeStamp(0.376741913706);
    msg.setSource(16421U);
    msg.setSourceEntity(69U);
    msg.setDestination(61556U);
    msg.setDestinationEntity(149U);
    msg.beam1 = 0.475674666395;
    msg.beam2 = 0.809294048;
    msg.beam3 = 0.976161843118;
    msg.beam4 = 0.115624805764;

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
    msg.setTimeStamp(0.687440626001);
    msg.setSource(15978U);
    msg.setSourceEntity(36U);
    msg.setDestination(33608U);
    msg.setDestinationEntity(95U);
    msg.beam1 = 0.847804206045;
    msg.beam2 = 0.334865127627;
    msg.beam3 = 0.937975643545;
    msg.beam4 = 0.49159445622;

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
    msg.setTimeStamp(0.916773646239);
    msg.setSource(23464U);
    msg.setSourceEntity(64U);
    msg.setDestination(27046U);
    msg.setDestinationEntity(175U);
    msg.beam1 = 0.0787151906332;
    msg.beam2 = 0.773070930994;
    msg.beam3 = 0.433202861029;
    msg.beam4 = 0.229601044049;

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
    msg.setTimeStamp(0.559284546786);
    msg.setSource(5666U);
    msg.setSourceEntity(37U);
    msg.setDestination(44421U);
    msg.setDestinationEntity(115U);
    msg.beam1 = 135U;
    msg.beam2 = 37U;
    msg.beam3 = 207U;
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
    msg.setTimeStamp(0.143077078226);
    msg.setSource(50693U);
    msg.setSourceEntity(224U);
    msg.setDestination(22287U);
    msg.setDestinationEntity(65U);
    msg.beam1 = 147U;
    msg.beam2 = 145U;
    msg.beam3 = 8U;
    msg.beam4 = 198U;

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
    msg.setTimeStamp(0.0134974372785);
    msg.setSource(40086U);
    msg.setSourceEntity(77U);
    msg.setDestination(34247U);
    msg.setDestinationEntity(114U);
    msg.beam1 = 66U;
    msg.beam2 = 56U;
    msg.beam3 = 49U;
    msg.beam4 = 59U;

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
    msg.setTimeStamp(0.0138719477551);
    msg.setSource(63240U);
    msg.setSourceEntity(78U);
    msg.setDestination(27293U);
    msg.setDestinationEntity(55U);
    msg.cellposition = 0.251228992084;
    IMC::ADCPBeam tmp_msg_0;
    tmp_msg_0.vel = 0.924046525971;
    tmp_msg_0.amp = 0.978998131049;
    tmp_msg_0.cor = 167U;
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
    msg.setTimeStamp(0.668406762063);
    msg.setSource(47590U);
    msg.setSourceEntity(102U);
    msg.setDestination(47781U);
    msg.setDestinationEntity(245U);
    msg.cellposition = 0.43103144371;
    IMC::ADCPBeam tmp_msg_0;
    tmp_msg_0.vel = 0.969928521214;
    tmp_msg_0.amp = 0.772063970235;
    tmp_msg_0.cor = 39U;
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
    msg.setTimeStamp(0.211209591626);
    msg.setSource(42261U);
    msg.setSourceEntity(8U);
    msg.setDestination(56799U);
    msg.setDestinationEntity(130U);
    msg.cellposition = 0.433676064715;

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
    msg.setTimeStamp(0.16737081827);
    msg.setSource(37611U);
    msg.setSourceEntity(224U);
    msg.setDestination(30011U);
    msg.setDestinationEntity(172U);
    msg.beams = 93U;
    msg.cells = 103U;
    msg.coord_sys = 102U;
    IMC::CurrentProfileCell tmp_msg_0;
    tmp_msg_0.cellposition = 0.679162741792;
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
    msg.setTimeStamp(0.720445656187);
    msg.setSource(10410U);
    msg.setSourceEntity(92U);
    msg.setDestination(7306U);
    msg.setDestinationEntity(130U);
    msg.beams = 198U;
    msg.cells = 208U;
    msg.coord_sys = 139U;
    IMC::CurrentProfileCell tmp_msg_0;
    tmp_msg_0.cellposition = 0.851781636728;
    IMC::ADCPBeam tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.vel = 0.784909486012;
    tmp_tmp_msg_0_0.amp = 0.375656982696;
    tmp_tmp_msg_0_0.cor = 165U;
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
    msg.setTimeStamp(0.905856602218);
    msg.setSource(20530U);
    msg.setSourceEntity(62U);
    msg.setDestination(62038U);
    msg.setDestinationEntity(183U);
    msg.beams = 161U;
    msg.cells = 221U;
    msg.coord_sys = 237U;
    IMC::CurrentProfileCell tmp_msg_0;
    tmp_msg_0.cellposition = 0.707866000372;
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
    msg.setTimeStamp(0.320125918524);
    msg.setSource(23585U);
    msg.setSourceEntity(190U);
    msg.setDestination(46974U);
    msg.setDestinationEntity(168U);
    msg.vel = 0.356759268515;
    msg.amp = 0.209803480806;
    msg.cor = 83U;

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
    msg.setTimeStamp(0.933697013271);
    msg.setSource(43987U);
    msg.setSourceEntity(252U);
    msg.setDestination(22751U);
    msg.setDestinationEntity(208U);
    msg.vel = 0.837072247459;
    msg.amp = 0.513436550728;
    msg.cor = 15U;

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
    msg.setTimeStamp(0.676489615573);
    msg.setSource(57890U);
    msg.setSourceEntity(217U);
    msg.setDestination(44872U);
    msg.setDestinationEntity(164U);
    msg.vel = 0.436260189898;
    msg.amp = 0.691304079629;
    msg.cor = 157U;

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
    msg.setTimeStamp(0.406245081782);
    msg.setSource(11163U);
    msg.setSourceEntity(238U);
    msg.setDestination(60331U);
    msg.setDestinationEntity(151U);
    msg.serial_no = 1661779521U;
    msg.unix_timestamp = 2407905278U;
    msg.millis = 28008U;
    msg.trans_protocol = 251U;
    msg.trans_id = 577620530U;
    msg.trans_data = 29182U;
    msg.snr = 26U;
    msg.trans_freq = 250U;
    msg.recv_mem_addr = 52481U;
    msg.lat = 0.167982620688;
    msg.lon = 0.254544453056;

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
    msg.setTimeStamp(0.941382455708);
    msg.setSource(20257U);
    msg.setSourceEntity(68U);
    msg.setDestination(28587U);
    msg.setDestinationEntity(20U);
    msg.serial_no = 4223657330U;
    msg.unix_timestamp = 1021955873U;
    msg.millis = 53998U;
    msg.trans_protocol = 51U;
    msg.trans_id = 1430465555U;
    msg.trans_data = 43437U;
    msg.snr = 234U;
    msg.trans_freq = 20U;
    msg.recv_mem_addr = 59588U;
    msg.lat = 0.138026378216;
    msg.lon = 0.378436372792;

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
    msg.setTimeStamp(0.841538565159);
    msg.setSource(51602U);
    msg.setSourceEntity(137U);
    msg.setDestination(6379U);
    msg.setDestinationEntity(107U);
    msg.serial_no = 457708670U;
    msg.unix_timestamp = 3042289045U;
    msg.millis = 11515U;
    msg.trans_protocol = 206U;
    msg.trans_id = 2135119108U;
    msg.trans_data = 7837U;
    msg.snr = 139U;
    msg.trans_freq = 23U;
    msg.recv_mem_addr = 30815U;
    msg.lat = 0.790252791094;
    msg.lon = 0.881659478607;

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
    msg.setTimeStamp(0.326565194738);
    msg.setSource(2460U);
    msg.setSourceEntity(85U);
    msg.setDestination(53195U);
    msg.setDestinationEntity(98U);
    msg.serial_no = 1045202561U;
    msg.unix_timestamp = 1376650620U;
    msg.temperature = 0.551968656971;
    msg.avg_noise_level = 189U;
    msg.peak_noise_level = 73U;
    msg.recv_listen_freq = 248U;
    msg.recv_mem_addr = 39383U;

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
    msg.setTimeStamp(0.200963018103);
    msg.setSource(57010U);
    msg.setSourceEntity(78U);
    msg.setDestination(55319U);
    msg.setDestinationEntity(139U);
    msg.serial_no = 2650649977U;
    msg.unix_timestamp = 3070062354U;
    msg.temperature = 0.00862134374776;
    msg.avg_noise_level = 104U;
    msg.peak_noise_level = 247U;
    msg.recv_listen_freq = 50U;
    msg.recv_mem_addr = 1618U;

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
    msg.setTimeStamp(0.95691327077);
    msg.setSource(46842U);
    msg.setSourceEntity(101U);
    msg.setDestination(52108U);
    msg.setDestinationEntity(4U);
    msg.serial_no = 1788641435U;
    msg.unix_timestamp = 3474319885U;
    msg.temperature = 0.80835237207;
    msg.avg_noise_level = 101U;
    msg.peak_noise_level = 228U;
    msg.recv_listen_freq = 222U;
    msg.recv_mem_addr = 37619U;

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
    msg.setTimeStamp(0.754053315724);
    msg.setSource(35024U);
    msg.setSourceEntity(33U);
    msg.setDestination(45884U);
    msg.setDestinationEntity(39U);
    msg.frequency = 1128376217U;
    msg.info.assign("ASDTAQHTTNBWDPPSAJYIMLGHAIPBZXABBEVYWURCGZUGNMQHBTZVTCWJUMVFTCLHQYQZSDEPIEGNKFIHLNDGOIBPXDFPOKZIGKFYKLRY");

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
    msg.setTimeStamp(0.709392390553);
    msg.setSource(14698U);
    msg.setSourceEntity(15U);
    msg.setDestination(32741U);
    msg.setDestinationEntity(115U);
    msg.frequency = 3512559282U;
    msg.info.assign("GGUBXGSYFUUZZDDFRRQVIQGOCOENDKOLASYSLNSSBXTBQWCSXWXPUEIMFMRKEQACISZMFEWVTHBPHAAIUHWBIIIZXOVLVAPTCAEZCHZFNYXYTQCMMNFOSPZGVCVVHWYOEHMWRQEZLWXBCPKJKREQYNYUNFONTYILFUGDNMTMAPJRJKVZEJDPVUJLAJNGDMDPWJRQLIDWYKJOUHTBRPHXVKGXMQKHGYALBLUSFE");

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
    msg.setTimeStamp(0.64690228426);
    msg.setSource(17155U);
    msg.setSourceEntity(26U);
    msg.setDestination(1593U);
    msg.setDestinationEntity(56U);
    msg.frequency = 199855134U;
    msg.info.assign("DRFCBJBTRFWOSAHIUVFMRYCKVUOMKNYDZMFYOEMHNQFLLBWADAHUHPVYSTADYRPYWNEQWYJCTXXICEDSXBRSMBKUELTZHEFBMNWFIWEUSHGPJHYSGXRZBQGGOQLUVSQHBCPNXIBFDKKJMBLQXOZLNOLXHAPJYOVTVDKICNTZTIRXPAOOMVJQKUTSGKZQVPDNUGRL");

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
    msg.setTimeStamp(0.284213648525);
    msg.setSource(58193U);
    msg.setSourceEntity(23U);
    msg.setDestination(268U);
    msg.setDestinationEntity(195U);
    msg.adcp = -87;
    msg.adcp_dur = 3797297215U;
    msg.adcp_fr = 255936261U;
    msg.ctd = -57;
    msg.ctd_dur = 1649018041U;
    msg.ctd_fr = 1936467567U;
    msg.opt = -128;
    msg.opt_dur = 3163448193U;
    msg.opt_fr = 3696600221U;
    msg.tbl = 87;
    msg.tbl_dur = 1692058474U;
    msg.tbl_fr = 4009642732U;
    msg.eco = 91;
    msg.eco_dur = 225606909U;
    msg.eco_fr = 2344736574U;

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
    msg.setTimeStamp(0.513778789333);
    msg.setSource(52531U);
    msg.setSourceEntity(131U);
    msg.setDestination(10081U);
    msg.setDestinationEntity(88U);
    msg.adcp = -6;
    msg.adcp_dur = 3683294430U;
    msg.adcp_fr = 2165044694U;
    msg.ctd = 125;
    msg.ctd_dur = 4045847535U;
    msg.ctd_fr = 1781545160U;
    msg.opt = -58;
    msg.opt_dur = 340407273U;
    msg.opt_fr = 1736150713U;
    msg.tbl = 112;
    msg.tbl_dur = 323816135U;
    msg.tbl_fr = 1813522477U;
    msg.eco = -36;
    msg.eco_dur = 3088613719U;
    msg.eco_fr = 3104483322U;

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
    msg.setTimeStamp(0.791791584765);
    msg.setSource(33132U);
    msg.setSourceEntity(32U);
    msg.setDestination(41679U);
    msg.setDestinationEntity(75U);
    msg.adcp = -4;
    msg.adcp_dur = 3932720250U;
    msg.adcp_fr = 2147464574U;
    msg.ctd = -123;
    msg.ctd_dur = 1222037382U;
    msg.ctd_fr = 1846243070U;
    msg.opt = 45;
    msg.opt_dur = 2281924733U;
    msg.opt_fr = 4225084082U;
    msg.tbl = -80;
    msg.tbl_dur = 3401592215U;
    msg.tbl_fr = 2046296388U;
    msg.eco = -9;
    msg.eco_dur = 4167665901U;
    msg.eco_fr = 855610648U;

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
    msg.setTimeStamp(0.503523615697);
    msg.setSource(9373U);
    msg.setSourceEntity(16U);
    msg.setDestination(38034U);
    msg.setDestinationEntity(25U);
    msg.validity = 2735U;
    msg.type = 80U;
    msg.utc_year = 52644U;
    msg.utc_month = 209U;
    msg.utc_day = 198U;
    msg.utc_time = 0.830130676341;
    msg.lat = 0.0290921182192;
    msg.lon = 0.877699789862;
    msg.height = 0.606581653678;
    msg.satellites = 243U;
    msg.cog = 0.43737399201;
    msg.sog = 0.531952665666;
    msg.hdop = 0.36277218033;
    msg.vdop = 0.575501522854;
    msg.hacc = 0.878008297533;
    msg.vacc = 0.0610758245351;

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
    msg.setTimeStamp(0.903667034133);
    msg.setSource(34596U);
    msg.setSourceEntity(49U);
    msg.setDestination(41397U);
    msg.setDestinationEntity(207U);
    msg.validity = 34828U;
    msg.type = 91U;
    msg.utc_year = 49032U;
    msg.utc_month = 208U;
    msg.utc_day = 102U;
    msg.utc_time = 0.727758397756;
    msg.lat = 0.523704138741;
    msg.lon = 0.151379892094;
    msg.height = 0.187859270085;
    msg.satellites = 13U;
    msg.cog = 0.625711627289;
    msg.sog = 0.586943761258;
    msg.hdop = 0.229842987873;
    msg.vdop = 0.575919604524;
    msg.hacc = 0.186615299199;
    msg.vacc = 0.324167839239;

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
    msg.setTimeStamp(0.0841954648461);
    msg.setSource(8945U);
    msg.setSourceEntity(226U);
    msg.setDestination(49589U);
    msg.setDestinationEntity(41U);
    msg.validity = 62225U;
    msg.type = 99U;
    msg.utc_year = 3099U;
    msg.utc_month = 195U;
    msg.utc_day = 22U;
    msg.utc_time = 0.313840362265;
    msg.lat = 0.530040288227;
    msg.lon = 0.52128364384;
    msg.height = 0.614348431897;
    msg.satellites = 73U;
    msg.cog = 0.262878103499;
    msg.sog = 0.807667061522;
    msg.hdop = 0.0693631885075;
    msg.vdop = 0.0239502161458;
    msg.hacc = 0.187865331412;
    msg.vacc = 0.465295703917;

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

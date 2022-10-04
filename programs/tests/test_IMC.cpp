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
// IMC XML MD5: 1d1543231bdc5804e63b8fd0f213b309                            *
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
    msg.setTimeStamp(0.273686808581);
    msg.setSource(30310U);
    msg.setSourceEntity(114U);
    msg.setDestination(62261U);
    msg.setDestinationEntity(244U);
    msg.state = 63U;
    msg.flags = 60U;
    msg.description.assign("RAKQRUIWWUJYCOUVNUOUTEGME");

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
    msg.setTimeStamp(0.734694028851);
    msg.setSource(29456U);
    msg.setSourceEntity(161U);
    msg.setDestination(61516U);
    msg.setDestinationEntity(152U);
    msg.state = 60U;
    msg.flags = 239U;
    msg.description.assign("RHZSPGLQXRMDKOVDKMRMQXPLUBQTYSNJNPAZFSFVYLNKMFWPEJROQDIVWVNNCGGYQMDXVVIZIYAISM");

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
    msg.setTimeStamp(0.532911913617);
    msg.setSource(54173U);
    msg.setSourceEntity(146U);
    msg.setDestination(15801U);
    msg.setDestinationEntity(253U);
    msg.state = 222U;
    msg.flags = 96U;
    msg.description.assign("VVMPMNBGQRSPRZTSRTQFKUIPLKDRPDHZJFLFMSKHCTDGBCWGFVEIJZBZMJYIGNNKLXCEB");

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
    msg.setTimeStamp(0.467912878618);
    msg.setSource(63688U);
    msg.setSourceEntity(132U);
    msg.setDestination(22372U);
    msg.setDestinationEntity(227U);

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
    msg.setTimeStamp(0.585627132149);
    msg.setSource(65520U);
    msg.setSourceEntity(205U);
    msg.setDestination(52693U);
    msg.setDestinationEntity(159U);

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
    msg.setTimeStamp(0.713402531935);
    msg.setSource(24695U);
    msg.setSourceEntity(165U);
    msg.setDestination(5607U);
    msg.setDestinationEntity(9U);

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
    msg.setTimeStamp(0.825272527678);
    msg.setSource(44056U);
    msg.setSourceEntity(60U);
    msg.setDestination(42055U);
    msg.setDestinationEntity(29U);
    msg.id = 52U;
    msg.label.assign("UFSZQZATNCYYYTXKAVCGGZNFBOIXALEWKVVMFLZVPAHZOOKWIEJYKHNHBVFMCQHAOMAQBCJQACVNNPJLRFUKTGXQUDMYTSNZVWXUOSBPIXWKJGK");
    msg.component.assign("JQBUBYCEBSZDXWCONGDVYBASAWDOMOAGBFOHTLSEGIPKQJDMCEGWRGHTYCSK");
    msg.act_time = 14802U;
    msg.deact_time = 28302U;

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
    msg.setTimeStamp(0.0435265656494);
    msg.setSource(15990U);
    msg.setSourceEntity(59U);
    msg.setDestination(34246U);
    msg.setDestinationEntity(17U);
    msg.id = 57U;
    msg.label.assign("WTFJGQAAXZTEVALFRJNCMJBTWUYFUYRWGNGVZEKMIREOSMJMGUDFQHEBJABKOQVBNVYCBHZBUDSOMSQDVLNKZDQZNSPMGCHSSDMNWISRHTFNWSPEIRSYFIOROXAZGAEMYPTITUQACVMXKNLEIHJMICDGHWHJBLAKODKRCEYUPKILCDHHJXWUXZEFUVXVKCWZQXTJRUJLGKGTRNIQZYPPTAYZOCVPXHYAODWYTPLBPOPXUIQXLGDOFLRSBNL");
    msg.component.assign("VEYLJILCNBTKPOXAZZTUOTYYZQMBKXVAJGUZDWMDVGWWEOSZVQIAJVMCURZAUEFPGXWXGCRMSTTLRZJTDGQFPQDXQESCNRQMBIZWVUNHFXSBIAPNXTRKSNJDHKRILKLRHTOEUGFEMBYWHSJSOHUOFEUYEGQHDMQDWNLBJFQQBOVICPIHWGSRKJSMDUWEKADLHA");
    msg.act_time = 55165U;
    msg.deact_time = 51929U;

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
    msg.setTimeStamp(0.0557350160837);
    msg.setSource(18835U);
    msg.setSourceEntity(87U);
    msg.setDestination(59570U);
    msg.setDestinationEntity(183U);
    msg.id = 52U;
    msg.label.assign("PBQPUJIUVYWOKPY");
    msg.component.assign("TXNZLGPUVHLWOADHZRWSBNKXXZNUQOEYICPVAYIOVENSZVCUYCYLPHWECGIRXARHCKHR");
    msg.act_time = 51630U;
    msg.deact_time = 57632U;

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
    msg.setTimeStamp(0.000784265817985);
    msg.setSource(56430U);
    msg.setSourceEntity(240U);
    msg.setDestination(33352U);
    msg.setDestinationEntity(84U);
    msg.id = 106U;

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
    msg.setTimeStamp(0.17156320387);
    msg.setSource(54535U);
    msg.setSourceEntity(103U);
    msg.setDestination(8391U);
    msg.setDestinationEntity(109U);
    msg.id = 85U;

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
    msg.setTimeStamp(0.66142412722);
    msg.setSource(2034U);
    msg.setSourceEntity(177U);
    msg.setDestination(24087U);
    msg.setDestinationEntity(130U);
    msg.id = 133U;

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
    msg.setTimeStamp(0.219782047373);
    msg.setSource(61076U);
    msg.setSourceEntity(125U);
    msg.setDestination(38207U);
    msg.setDestinationEntity(206U);
    msg.op = 31U;
    msg.list.assign("PJVROJKEPIMDCXHVCDMIOIGCMXOZ");

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
    msg.setTimeStamp(0.986440897833);
    msg.setSource(43427U);
    msg.setSourceEntity(214U);
    msg.setDestination(25137U);
    msg.setDestinationEntity(195U);
    msg.op = 127U;
    msg.list.assign("BUFTDFFEHVXVYAZOFTDHMKIUKWPLUWLYZDJKOGODGTYQEVVWCRVPXKQLNMOLRLKGQWRBEGFAJUAQAFHSZEGJQIMYQCXCSIGSDOYLZXOYBPVHJYGQPWAHWNWGEGYKKJCDXCPDLCNQIRMRLJSTVXAZEI");

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
    msg.setTimeStamp(0.379770272302);
    msg.setSource(64859U);
    msg.setSourceEntity(5U);
    msg.setDestination(59598U);
    msg.setDestinationEntity(182U);
    msg.op = 15U;
    msg.list.assign("KWSFGTKBADNOLGPBPGKCWCZNZWPMBRJYWGOBRPEHFVITXBACYXGWWEAHAGLJFCOIQCYFNFDSSPXQLVZTHKCHBD");

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
    msg.setTimeStamp(0.90081066481);
    msg.setSource(50958U);
    msg.setSourceEntity(135U);
    msg.setDestination(46676U);
    msg.setDestinationEntity(210U);
    msg.value = 82U;

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
    msg.setTimeStamp(0.368633186112);
    msg.setSource(28997U);
    msg.setSourceEntity(14U);
    msg.setDestination(60369U);
    msg.setDestinationEntity(217U);
    msg.value = 233U;

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
    msg.setTimeStamp(0.287791483398);
    msg.setSource(33794U);
    msg.setSourceEntity(168U);
    msg.setDestination(15361U);
    msg.setDestinationEntity(85U);
    msg.value = 5U;

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
    msg.setTimeStamp(0.448153735635);
    msg.setSource(11776U);
    msg.setSourceEntity(112U);
    msg.setDestination(24341U);
    msg.setDestinationEntity(55U);
    msg.consumer.assign("NVZJBCLZDMUJZZZOLGNKMFSHAYPJRTQCOCCXJXZIAPWDQXSSUIEMTOKAXNHFWRZUBEGENDPGAKOTGPLXDWLFQWE");
    msg.message_id = 50127U;

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
    msg.setTimeStamp(0.296264212503);
    msg.setSource(34761U);
    msg.setSourceEntity(96U);
    msg.setDestination(39568U);
    msg.setDestinationEntity(65U);
    msg.consumer.assign("PZYLGFQZCFTIVCDUSOEG");
    msg.message_id = 13970U;

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
    msg.setTimeStamp(0.823135502997);
    msg.setSource(24760U);
    msg.setSourceEntity(55U);
    msg.setDestination(35527U);
    msg.setDestinationEntity(35U);
    msg.consumer.assign("JCJXJWOCEMZDYGFJHYVOWIIWIXIQYJQZGUDWQWLLKSUOAYAPRZVPAPDRRPDRTPFGBWMLTSMSTGGBMVKGTHLFQMMTYIXOHDEZOQVYCCVTSZVEJKAAZCEIDSYBOYMCUCQLWKHDQHPBRIKNWOFVHZKR");
    msg.message_id = 25295U;

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
    msg.setTimeStamp(0.991607556176);
    msg.setSource(7483U);
    msg.setSourceEntity(222U);
    msg.setDestination(28714U);
    msg.setDestinationEntity(95U);
    msg.type = 105U;

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
    msg.setTimeStamp(0.703812011093);
    msg.setSource(32015U);
    msg.setSourceEntity(125U);
    msg.setDestination(52594U);
    msg.setDestinationEntity(137U);
    msg.type = 117U;

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
    msg.setTimeStamp(0.594381388796);
    msg.setSource(30754U);
    msg.setSourceEntity(151U);
    msg.setDestination(21504U);
    msg.setDestinationEntity(36U);
    msg.type = 55U;

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
    msg.setTimeStamp(0.467966571204);
    msg.setSource(45364U);
    msg.setSourceEntity(244U);
    msg.setDestination(48476U);
    msg.setDestinationEntity(80U);
    msg.op = 228U;

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
    msg.setTimeStamp(0.973419539192);
    msg.setSource(8681U);
    msg.setSourceEntity(220U);
    msg.setDestination(56214U);
    msg.setDestinationEntity(28U);
    msg.op = 73U;

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
    msg.setTimeStamp(0.232837008152);
    msg.setSource(10539U);
    msg.setSourceEntity(41U);
    msg.setDestination(3782U);
    msg.setDestinationEntity(130U);
    msg.op = 35U;

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
    msg.setTimeStamp(0.92190200317);
    msg.setSource(65053U);
    msg.setSourceEntity(171U);
    msg.setDestination(8456U);
    msg.setDestinationEntity(253U);
    msg.total_steps = 178U;
    msg.step_number = 86U;
    msg.step.assign("MKLTEDZHTAADLTTIRMNCWITLOJMSEKKXXIRRSFPIAIQVSFPAIZQOMSYUAGQHVBEYUCUAEQOCKNCPGRDGBHSTGLCEKXCZDPZQJFBSOQBZMFYXBKPLDDLTDZW");
    msg.flags = 162U;

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
    msg.setTimeStamp(0.016061419937);
    msg.setSource(29267U);
    msg.setSourceEntity(75U);
    msg.setDestination(16656U);
    msg.setDestinationEntity(148U);
    msg.total_steps = 160U;
    msg.step_number = 238U;
    msg.step.assign("QRVEBMATPNSRDFLTCEYTSTGWTGNXMCNVJSVXDAIRGNGEAZUJSKQGXOLRJEWUXWTFLRSPKDPCQTQ");
    msg.flags = 194U;

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
    msg.setTimeStamp(0.363284856536);
    msg.setSource(21606U);
    msg.setSourceEntity(208U);
    msg.setDestination(55832U);
    msg.setDestinationEntity(90U);
    msg.total_steps = 144U;
    msg.step_number = 208U;
    msg.step.assign("BMHCCXQKDCUSSWCZXPBMLCWSQABHIEZLZEQGYXSZBXXCYPPGIPKSGJLLJEBO");
    msg.flags = 82U;

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
    msg.setTimeStamp(0.153152548358);
    msg.setSource(11187U);
    msg.setSourceEntity(29U);
    msg.setDestination(10791U);
    msg.setDestinationEntity(136U);
    msg.state = 50U;
    msg.error.assign("RZHNJQRDUBYKDVMPLCFAZESJNBMXZBHQNTQVTKSLOHIBOFOWEUPXRETWPFOXRNOLUMMURZMUTYBCO");

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
    msg.setTimeStamp(0.20590492352);
    msg.setSource(50035U);
    msg.setSourceEntity(84U);
    msg.setDestination(57910U);
    msg.setDestinationEntity(186U);
    msg.state = 223U;
    msg.error.assign("JKAVKOAMADGBFJWALFEHFBFRYXCZPJPWZSXQBXIICEJYATHYUGJMDCGVPTWASZMRYMPTUMVHSOOBOIUGTAKOGYYHGJMOWINIFQYBVC");

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
    msg.setTimeStamp(0.380454655453);
    msg.setSource(9686U);
    msg.setSourceEntity(186U);
    msg.setDestination(2272U);
    msg.setDestinationEntity(51U);
    msg.state = 50U;
    msg.error.assign("CKKPNVSQXYZYJHWASFOJNFRXIARPBLMVVHKHZZOYFFPJBQRUILSDVRYOPBSSJZGXBNVWEXDNNXJCTSOMBIOHGQCXQLMXLVGULMGOIIJEHAZSBTWAVCKUBIORKAEMEYTZPCPTCJRCGMZNYBPQSMWRCWEUHSGXF");

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
    msg.setTimeStamp(0.301326124863);
    msg.setSource(11491U);
    msg.setSourceEntity(227U);
    msg.setDestination(25910U);
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
    msg.setTimeStamp(0.0689582484564);
    msg.setSource(11518U);
    msg.setSourceEntity(216U);
    msg.setDestination(24178U);
    msg.setDestinationEntity(65U);

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
    msg.setTimeStamp(0.696041721716);
    msg.setSource(4339U);
    msg.setSourceEntity(206U);
    msg.setDestination(20776U);
    msg.setDestinationEntity(211U);

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
    msg.setTimeStamp(0.423187565338);
    msg.setSource(34290U);
    msg.setSourceEntity(103U);
    msg.setDestination(52654U);
    msg.setDestinationEntity(133U);
    msg.op = 156U;
    msg.speed_min = 0.522344789326;
    msg.speed_max = 0.517561871576;
    msg.long_accel = 0.896195266099;
    msg.alt_max_msl = 0.158600890724;
    msg.dive_fraction_max = 0.108490323144;
    msg.climb_fraction_max = 0.170391664599;
    msg.bank_max = 0.646004234813;
    msg.p_max = 0.126949125174;
    msg.pitch_min = 0.544991766704;
    msg.pitch_max = 0.370593057341;
    msg.q_max = 0.31107589185;
    msg.g_min = 0.404907552232;
    msg.g_max = 0.940963187415;
    msg.g_lat_max = 0.352529306576;
    msg.rpm_min = 0.300450626403;
    msg.rpm_max = 0.588643424584;
    msg.rpm_rate_max = 0.267572011598;

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
    msg.setTimeStamp(0.388956241612);
    msg.setSource(34513U);
    msg.setSourceEntity(30U);
    msg.setDestination(39164U);
    msg.setDestinationEntity(169U);
    msg.op = 51U;
    msg.speed_min = 0.776558696881;
    msg.speed_max = 0.932975240465;
    msg.long_accel = 0.819602691097;
    msg.alt_max_msl = 0.230690599712;
    msg.dive_fraction_max = 0.183520883039;
    msg.climb_fraction_max = 0.527960997426;
    msg.bank_max = 0.691601854276;
    msg.p_max = 0.554040036617;
    msg.pitch_min = 0.0298442547723;
    msg.pitch_max = 0.357926235086;
    msg.q_max = 0.465236354761;
    msg.g_min = 0.29655373387;
    msg.g_max = 0.211468204824;
    msg.g_lat_max = 0.889455552515;
    msg.rpm_min = 0.216002147422;
    msg.rpm_max = 0.800148528286;
    msg.rpm_rate_max = 0.881212283498;

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
    msg.setTimeStamp(0.725294782511);
    msg.setSource(31416U);
    msg.setSourceEntity(188U);
    msg.setDestination(11374U);
    msg.setDestinationEntity(180U);
    msg.op = 69U;
    msg.speed_min = 0.931935409415;
    msg.speed_max = 0.861134942042;
    msg.long_accel = 0.652288563645;
    msg.alt_max_msl = 0.49162538238;
    msg.dive_fraction_max = 0.966119644841;
    msg.climb_fraction_max = 0.49728427313;
    msg.bank_max = 0.0600312690126;
    msg.p_max = 0.0233940802591;
    msg.pitch_min = 0.101076514598;
    msg.pitch_max = 0.421430416095;
    msg.q_max = 0.0532477302329;
    msg.g_min = 0.94543610349;
    msg.g_max = 0.397990451317;
    msg.g_lat_max = 0.569054347843;
    msg.rpm_min = 0.384904853794;
    msg.rpm_max = 0.386949047387;
    msg.rpm_rate_max = 0.974784238358;

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
    msg.setTimeStamp(0.172298436735);
    msg.setSource(20607U);
    msg.setSourceEntity(151U);
    msg.setDestination(50016U);
    msg.setDestinationEntity(190U);
    IMC::PeekDesiredPath tmp_msg_0;
    IMC::DesiredPath tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.path_ref = 1410615654U;
    tmp_tmp_msg_0_0.start_lat = 0.0930048233538;
    tmp_tmp_msg_0_0.start_lon = 0.972341505353;
    tmp_tmp_msg_0_0.start_z = 0.571350847919;
    tmp_tmp_msg_0_0.start_z_units = 103U;
    tmp_tmp_msg_0_0.end_lat = 0.425527481748;
    tmp_tmp_msg_0_0.end_lon = 0.241071632874;
    tmp_tmp_msg_0_0.end_z = 0.0690992336943;
    tmp_tmp_msg_0_0.end_z_units = 2U;
    tmp_tmp_msg_0_0.speed = 0.631904050855;
    tmp_tmp_msg_0_0.speed_units = 168U;
    tmp_tmp_msg_0_0.lradius = 0.720680472034;
    tmp_tmp_msg_0_0.flags = 225U;
    tmp_msg_0.dpath.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.440336601354);
    msg.setSource(30621U);
    msg.setSourceEntity(138U);
    msg.setDestination(13385U);
    msg.setDestinationEntity(198U);

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
    msg.setTimeStamp(0.647510430704);
    msg.setSource(49032U);
    msg.setSourceEntity(70U);
    msg.setDestination(42503U);
    msg.setDestinationEntity(15U);

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
    msg.setTimeStamp(0.834268505313);
    msg.setSource(22918U);
    msg.setSourceEntity(50U);
    msg.setDestination(5501U);
    msg.setDestinationEntity(19U);
    msg.lat = 0.597071619765;
    msg.lon = 0.803626516422;
    msg.height = 0.582617002942;
    msg.x = 0.74037951496;
    msg.y = 0.525794353675;
    msg.z = 0.0277438151124;
    msg.phi = 0.90525260226;
    msg.theta = 0.686765502991;
    msg.psi = 0.22627421258;
    msg.u = 0.605661312812;
    msg.v = 0.571438355814;
    msg.w = 0.941166653386;
    msg.p = 0.053629337404;
    msg.q = 0.830937010623;
    msg.r = 0.537439497974;
    msg.svx = 0.392788656966;
    msg.svy = 0.526442840331;
    msg.svz = 0.109249622775;

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
    msg.setTimeStamp(0.685254249517);
    msg.setSource(18732U);
    msg.setSourceEntity(123U);
    msg.setDestination(60584U);
    msg.setDestinationEntity(107U);
    msg.lat = 0.545154714562;
    msg.lon = 0.187018553302;
    msg.height = 0.787911471559;
    msg.x = 0.915609914942;
    msg.y = 0.582789998691;
    msg.z = 0.966975418388;
    msg.phi = 0.0223403799827;
    msg.theta = 0.523076236311;
    msg.psi = 0.262076390238;
    msg.u = 0.560418366035;
    msg.v = 0.411023016523;
    msg.w = 0.555539412204;
    msg.p = 0.804703933393;
    msg.q = 0.301469899955;
    msg.r = 0.237406306193;
    msg.svx = 0.139873449644;
    msg.svy = 0.158704777057;
    msg.svz = 0.347672622193;

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
    msg.setTimeStamp(0.566356348209);
    msg.setSource(17659U);
    msg.setSourceEntity(204U);
    msg.setDestination(29940U);
    msg.setDestinationEntity(239U);
    msg.lat = 0.381956811137;
    msg.lon = 0.438543511533;
    msg.height = 0.637482458632;
    msg.x = 0.984127387456;
    msg.y = 0.482394378376;
    msg.z = 0.938632670258;
    msg.phi = 0.778499965252;
    msg.theta = 0.14183340451;
    msg.psi = 0.699056142505;
    msg.u = 0.940444793587;
    msg.v = 0.408157004473;
    msg.w = 0.722755350863;
    msg.p = 0.58348124201;
    msg.q = 0.0462634799362;
    msg.r = 0.0560049814744;
    msg.svx = 0.255869447527;
    msg.svy = 0.048048300002;
    msg.svz = 0.667803716906;

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
    msg.setTimeStamp(0.324494477734);
    msg.setSource(35094U);
    msg.setSourceEntity(180U);
    msg.setDestination(35157U);
    msg.setDestinationEntity(57U);
    msg.op = 75U;
    msg.entities.assign("BYWULFOSGCREFUGZCCPQBQQYCDMJRIVWOTTKBHMNHTCWZRMXDNWMSVMNTOGRBWNYSHPFRJBAOUKIASFVKUXGFILDHJDQUJVEIZFLESJYKGSOUAQSRSRISTPMZPDPTUQZYLOLMCKWTVWPXELIFCZDVQQIGXFEBVBKMYEELMCHGJZRGLXGVDKAVHMITAWUAJANHBNDK");

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
    msg.setTimeStamp(0.999890316217);
    msg.setSource(6279U);
    msg.setSourceEntity(5U);
    msg.setDestination(40167U);
    msg.setDestinationEntity(179U);
    msg.op = 1U;
    msg.entities.assign("CGHUDVOUWZEVRRPEFTFEBAYESBMRBSEOJRSZBSYUAADRAHDJVCIFNSQCQRNOLXKIQKYEDMCXGXLPUMIWCXICWOVTWEPWJJMFSPHGBOKRLBLFHZPVEAPFYJYQGDKUZCYHOKMXQGJZTHDYMWSWVRU");

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
    msg.setTimeStamp(0.46386894111);
    msg.setSource(26355U);
    msg.setSourceEntity(240U);
    msg.setDestination(64550U);
    msg.setDestinationEntity(123U);
    msg.op = 204U;
    msg.entities.assign("UIATBTYMWHKSAXYPOXRFKFKICUFAOHYDAFVFFQPBGAXCBAGVUQGRCPQZLSNNWCVTGLTHTESCIRLFYDKKQIEVXENNBPLWSIINFSRUWFQRRBPNLDNRITXHKBOVCXUSLPSILEXGJMEWFSVRLUPB");

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
    msg.setTimeStamp(0.731666066685);
    msg.setSource(64709U);
    msg.setSourceEntity(85U);
    msg.setDestination(31359U);
    msg.setDestinationEntity(50U);
    msg.type = 35U;
    msg.speed = 24213U;
    const char tmp_msg_0[] = {-52, -1, 20, 39, 44, 104, -108, -55, -111, -127, 91, -107, 37, 72, -80, 125, 6, 117, 107, -111, -54, 45, -83, 33, 120, 6, -10, -29, 3, 110, -4, -45, 2, 13, -121, -22, -29, 52, 71, -115, 104, -53, -31, -18, 103, -79, -54, 53, 45, 94, -111, 81, 22, -100, 1, -117, -110, -44, -65, -64, -23, 42, 66, 58, 2, 57, 39, 36, -68, -58, 57, -79, 55, -24, 78, 48, -101, 44, 108, -125, -107, 1, 58, 8, -71, -55, 119, 5, -60, -6, -115, -54, -113, 8, -61, 63, 126, -65, -84, 42, -67, -5, -37, 92, 96, 98, 112, 34, -78, -90, -77, -32, -33, -58, -67, -72, -90, -9, 6, -7, -37, 79, -1, 122, 125, -98, -105, -112, -89, 83, -96};
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
    msg.setTimeStamp(0.208227109982);
    msg.setSource(19482U);
    msg.setSourceEntity(116U);
    msg.setDestination(23482U);
    msg.setDestinationEntity(197U);
    msg.type = 93U;
    msg.speed = 36170U;
    const char tmp_msg_0[] = {-9, -126, 113, 59, -61, 94, 78, -125, 31, 55, -84, -103, 75, -44, 56, 27, -126, 73, -61, 23, -116, -21, -86, 31, -69, -16, 40, -79, 120, -21, 76, -59, -70, 84, -20, 30, 90, -39, 34, -4, 63, -25, -29, -49, -109, 46, -54, 51, -1, -7, -18, 117, 122, 87, 113, -80, 81, 54, 123, -52, 57, -87, -32, 36, -74, -55, 48, 96, 75, 57, -84, -85, 12, -62, 99, 103, 75, 79, -1, 90, 71, 116, -13, 8, -13, 9, 17, -85, -4, -77, 88, -12, 52, 111, 46, 0, -53, -58, -110, -17, 81, -7, -45, -92, -112, 98, -64, 123, 80, -73, 38, 57, -87, 111, 57, -41, 71, 36, -68, 10, 97, -72, -28, -60, -45, 115, -13, -125, 56, -110, 24, -73};
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
    msg.setTimeStamp(0.581853473441);
    msg.setSource(47125U);
    msg.setSourceEntity(94U);
    msg.setDestination(23156U);
    msg.setDestinationEntity(74U);
    msg.type = 36U;
    msg.speed = 10502U;
    const char tmp_msg_0[] = {-18, -116, -101, 115, -87, 29, -82, 16, 109, -48, 51, 114, -13, 75, 23, -74, -32, 116, 109, -59, 15, 52, -67, 113, -4, -42, 103, -64, -16, 121, -28, 70, -110, 8, -59, -28, -94, -117, 69, -94, -93, -61, 59, 17, 9, 82, -73, -82, -93, 5, 93, 120, 27, -126, 92, 19, 10, 28, 89, -36, -60, 77, 37, 2, 1, 104, -39, -22, -33, 118, -64, -28, -47, 113, 69, 20, 72, -114, -2, -17, -72, -64, -118, -1, -94, -59, 85, 107, 82, 38, 112, -38, 75, -8, -67, 11, 56, 4, 39, 45, 50, -19, -47, 32, -120, -21};
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
    msg.setTimeStamp(0.725562728299);
    msg.setSource(37157U);
    msg.setSourceEntity(212U);
    msg.setDestination(32783U);
    msg.setDestinationEntity(6U);
    msg.op = 100U;
    msg.tas2acc_pgain = 0.621255406201;
    msg.bank2p_pgain = 0.440491846628;

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
    msg.setTimeStamp(0.0966384204136);
    msg.setSource(6475U);
    msg.setSourceEntity(100U);
    msg.setDestination(9402U);
    msg.setDestinationEntity(250U);
    msg.op = 88U;
    msg.tas2acc_pgain = 0.0335731784371;
    msg.bank2p_pgain = 0.401423245011;

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
    msg.setTimeStamp(0.854384623849);
    msg.setSource(49327U);
    msg.setSourceEntity(166U);
    msg.setDestination(54462U);
    msg.setDestinationEntity(196U);
    msg.op = 45U;
    msg.tas2acc_pgain = 0.239872304881;
    msg.bank2p_pgain = 0.024031810971;

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
    msg.setTimeStamp(0.0986699820743);
    msg.setSource(60553U);
    msg.setSourceEntity(152U);
    msg.setDestination(48745U);
    msg.setDestinationEntity(62U);
    msg.available = 1793908634U;
    msg.value = 35U;

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
    msg.setTimeStamp(0.0452549094489);
    msg.setSource(53277U);
    msg.setSourceEntity(223U);
    msg.setDestination(24170U);
    msg.setDestinationEntity(245U);
    msg.available = 3901985792U;
    msg.value = 175U;

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
    msg.setTimeStamp(0.479709958453);
    msg.setSource(36652U);
    msg.setSourceEntity(212U);
    msg.setDestination(57378U);
    msg.setDestinationEntity(14U);
    msg.available = 2312101254U;
    msg.value = 77U;

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
    msg.setTimeStamp(0.620649271466);
    msg.setSource(35327U);
    msg.setSourceEntity(184U);
    msg.setDestination(58318U);
    msg.setDestinationEntity(218U);
    msg.op = 95U;
    msg.snapshot.assign("MHZYSUPHHGBCHDELINMGJAZBHYIOEWWSSMGWAIREHXQXLOBGXBBBRFXNJDXXFEODYFLVXFPWYPQFGHPVFDJTKTQATUJWKYFPOCOMOUPYQJWCRYZKXUGSEOUDLCWRRSOMRADLZWMVLWABUXZELUFGZGOEKLSRASNDPDBVKTLVABNQJCVDVNKIQCTAONEMPGRRATKKUVLIJJJYQZNFMPTCZKXVIQDUIIICQKYFUTTNJBVGSHWNSRMI");
    IMC::UsblAngles tmp_msg_0;
    tmp_msg_0.target = 34982U;
    tmp_msg_0.bearing = 0.358466372585;
    tmp_msg_0.elevation = 0.907901411143;
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
    msg.setTimeStamp(0.465135950363);
    msg.setSource(30002U);
    msg.setSourceEntity(151U);
    msg.setDestination(8479U);
    msg.setDestinationEntity(198U);
    msg.op = 2U;
    msg.snapshot.assign("NFGVJGDOEQATANTLSHUQKUKOUJCIFZUIQBWAQJKFRRADLRBBGLAILIMUKOEPOSNHYZTMXBQPCZXEXTPAVMNLQVHABYOYIKJVHPSNXAGMTACTSNYXJFBDGVWWFJZDYVTDYVGXSUPNGVOXIRZINQOWEPIEZSQRLRYS");
    IMC::Takeoff tmp_msg_0;
    tmp_msg_0.lat = 0.173316711028;
    tmp_msg_0.lon = 0.367629584061;
    tmp_msg_0.z = 0.913396602263;
    tmp_msg_0.z_units = 251U;
    tmp_msg_0.speed = 0.264988101707;
    tmp_msg_0.speed_units = 81U;
    tmp_msg_0.takeoff_pitch = 0.489409432128;
    tmp_msg_0.custom.assign("HRXVZLVGCMBJLDWYIGSQHQOSDTRXNMCPZAMRYZWCQTVPJSIZFJYSDUXFTVLSQPTHSQSAJFNKFELRTWMHGBLVUHCKDOLGOFQYPFNHIVBEVOJUMHFGODQYYTGCDABLYMWIWGAIKEORVPLOTSNZREUXTCXJSDXQUAIFUBBKOWXPECKYPTWJACEBPYAKNUAWZNFSUKPIKEIRMIOHDJHMY");
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
    msg.setTimeStamp(0.0692677414534);
    msg.setSource(65054U);
    msg.setSourceEntity(93U);
    msg.setDestination(16945U);
    msg.setDestinationEntity(221U);
    msg.op = 15U;
    msg.snapshot.assign("JYRZJFPFQZAFCCTHUYVZIUTDNRRKMJTNIWGLIEINKIDWEUWSPOCXMXAMQPHCTSQDJKBZJVVLAHAVDBMEOZZBCGFUEWNDXIMXHLYRVAQIKYYCUQBEJIVFQAKNQSDHKUE");
    IMC::GetParametersXml tmp_msg_0;
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
    msg.setTimeStamp(0.483175266899);
    msg.setSource(49449U);
    msg.setSourceEntity(99U);
    msg.setDestination(10710U);
    msg.setDestinationEntity(31U);
    msg.op = 56U;
    msg.name.assign("JIIHEOBFSSA");

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
    msg.setTimeStamp(0.254287842396);
    msg.setSource(9463U);
    msg.setSourceEntity(214U);
    msg.setDestination(15032U);
    msg.setDestinationEntity(79U);
    msg.op = 233U;
    msg.name.assign("QPTIQLCDOIGYKXHYEJDZZINVXPLVLADFCKWQQWJUMKDQJJEARGWHBWXITAPVCYKFITHRDUGMTPBEPVBIFNZACLQWFUSHKFGLOVGALNSYSBAHXJSYULIHEPCIWOXSTPYZMQYMQ");

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
    msg.setTimeStamp(0.439805718988);
    msg.setSource(34514U);
    msg.setSourceEntity(201U);
    msg.setDestination(10105U);
    msg.setDestinationEntity(215U);
    msg.op = 103U;
    msg.name.assign("OYAPFNZIZTCABUVWEUVEVQDWNOSGAVHJHMVLRYZFFHJDSCSCRUFQOKZAKYVSYECGPFMGSGJJIZUAEMESAMPWLFZZKDRDPVNGQUWRTIBCSRYJKDIWHQNIXKQBOXHMLWRLXPZZOQADFUCTGITQRYXBDOAJOKYTMIVZHUUSWEKRSYAJEPHRFFYBHGTNBUNKTPQXECDNKNGTJPGEBV");

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
    msg.setTimeStamp(0.231484875714);
    msg.setSource(42062U);
    msg.setSourceEntity(48U);
    msg.setDestination(12468U);
    msg.setDestinationEntity(55U);
    msg.type = 146U;
    msg.htime = 0.156705404256;
    msg.context.assign("WDBJFVEVSKLVTZEEUNBDFUNWZXAXAOHIZQIRGGQXWQMMRIUAKHYRVOTJVJRONAGUHYLAGFVQDLYWNXARHEYKMPNIMZBATTOPDYLGGIXRTIWDOILBYCMZZEOPJTCBFWCKXHDTOXIVEFPWQCLLNOKHXILAQBCZJPQGAJGTMREHCEKUODJKGDNSNBUZRSARMKLCWFNVDOYFWS");
    msg.text.assign("TTRAGOYBNDFZCKGZUYVCCHTPNMLBVBJNXPICZAHVGFIWLEDQIMJFRDZQGFRFEKOEIRBBMA");

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
    msg.setTimeStamp(0.873388047383);
    msg.setSource(39486U);
    msg.setSourceEntity(72U);
    msg.setDestination(24956U);
    msg.setDestinationEntity(138U);
    msg.type = 219U;
    msg.htime = 0.13003123014;
    msg.context.assign("MQQLNAORBQSRARBYHHOKSNTAEFZBEJJQOFJFXTMLLTIZKCCZPLVU");
    msg.text.assign("IYALSVVEKLNUOKFMUCCJHIFSENMOKJEEWQAZNDC");

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
    msg.setTimeStamp(0.214569221769);
    msg.setSource(28660U);
    msg.setSourceEntity(92U);
    msg.setDestination(65246U);
    msg.setDestinationEntity(10U);
    msg.type = 116U;
    msg.htime = 0.321954065915;
    msg.context.assign("KNUOOZFLBVBYBSNFRKTETARZBEVOGIZQHUJPOIBLTCCSPKBNKIPFBNZETBTC");
    msg.text.assign("XSLEJDWAPVTHBMORXHKFIDRRQWMGMOSLAEJQOSQKUBDXOK");

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
    msg.setTimeStamp(0.157361414342);
    msg.setSource(51522U);
    msg.setSourceEntity(130U);
    msg.setDestination(2344U);
    msg.setDestinationEntity(121U);
    msg.command = 201U;
    msg.htime = 0.532665848633;

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
    msg.setTimeStamp(0.0976986133897);
    msg.setSource(10978U);
    msg.setSourceEntity(49U);
    msg.setDestination(60499U);
    msg.setDestinationEntity(167U);
    msg.command = 212U;
    msg.htime = 0.876157899217;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 209U;
    tmp_msg_0.htime = 0.831859561716;
    tmp_msg_0.context.assign("RBZSMCKURGOWXBMZYQZFDOOIVHQPGSGDIJXABPUJNCXUKCWMEHHHNQXPNIIXLVCOTTLGGJEGNUFYAULPMDPQONLKWFFTGJRKAZDVMNKOYPKBN");
    tmp_msg_0.text.assign("NJANLXUFAHEDZQZRRBIPGSYPYHTMALDYFHMEZVGXSHKUNPCWIBYCOOOEDVIVPKGKGUDBUPLKVSSNWRUSXGXQQMAESFMAQPAGMLLOQUHWHCUPPJRIOMTDYKEBDLXWONRTQBRJUBREQZWCVWXMHBCLFRVZKYVIXZXWKBIUWVMJVYBKRXVKTMELZWNDAWNFHMJECTSUNACHSFAELCQGFBJXOY");
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
    msg.setTimeStamp(0.342493875061);
    msg.setSource(2544U);
    msg.setSourceEntity(10U);
    msg.setDestination(1980U);
    msg.setDestinationEntity(101U);
    msg.command = 209U;
    msg.htime = 0.811657864294;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 33U;
    tmp_msg_0.htime = 0.547617844958;
    tmp_msg_0.context.assign("MNTFHIMVWZXRXJOXOXFUEGODWDJMBAVXVFRGJSZUGHSODOOLPMZNHIZAJRIQFADVVQELKQUNVHOSXQYEGHNBNHGTKQSFXYOWDTUTJUWJSDDKEENCLJZWWBHIFIVAKYCTMVFATKBDLLAJQRZGMJZBWNCCQLLYTSHCMGGKRYIEADRUFPZZGAVYS");
    tmp_msg_0.text.assign("ZSRJAWCYSGZOEUYBVFSXYKQHHLEZIUIIABXVTOQBSPPRMFMUPDBFNNIBYOAKGQLATZSIYYFPYXRNBHKHAMBSUCOAHXXETWDFDBYRBZTQHWLXUMKSLRZJJFZQLTRWWUIWMECOTQXDXNVKNOGRGRXQAJKMNVHZNUTRQQICMSWEDLUIFIKCBOPJAHCFEVWHKJSLOWLMKYMVPAPZGFVUACVEDPMJJEJLWCIKECZPGFHGTGUCGOT");
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
    msg.setTimeStamp(0.0900620059128);
    msg.setSource(63757U);
    msg.setSourceEntity(114U);
    msg.setDestination(65386U);
    msg.setDestinationEntity(245U);
    msg.op = 204U;
    msg.file.assign("DIUBCWAPUEWXIMKXLCXQRAEUHZJCGDAUOKVTXVAUBTBHFSFGBPZIWUAPHMJBPLSXCQIINNQOXISUDWCODRGYVFFUYFTAZOQHLPVBPIWVHCCVJXZLQRYPOOYFDOSGJKNNSKMTUFPTJYTGEBMEISLYWDFAMIBKHWVSXRQZOGSWXJZRNJMGGTPOANVZRCZFQ");

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
    msg.setTimeStamp(0.927602435383);
    msg.setSource(4082U);
    msg.setSourceEntity(25U);
    msg.setDestination(1478U);
    msg.setDestinationEntity(127U);
    msg.op = 92U;
    msg.file.assign("IYBMYOZCEZHVLSNEJUHFRIVRMWOPBWCWKONHHKVCSATXTPLUNQWTKUTHUYTIGJHEDSBYVMEJZCMIDUBIGGU");

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
    msg.setTimeStamp(0.0438451169724);
    msg.setSource(27342U);
    msg.setSourceEntity(84U);
    msg.setDestination(13631U);
    msg.setDestinationEntity(176U);
    msg.op = 226U;
    msg.file.assign("EMXTGUQJJBWRAEHEYTPOSAPNCQNEBIOVIVMJMLZSRBKHHKJGWYIEALYERVEXWFZTTKPSSYGJFXQAOLVUBIZPCSXHZHRMCUYGLMMLQANVDKWGCPSYIDQIKLNEGBDUGCDKJPJVBMDKLCOGYWDIXBNSYQXPINCOFSUI");

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
    msg.setTimeStamp(0.0319848721735);
    msg.setSource(39218U);
    msg.setSourceEntity(176U);
    msg.setDestination(41076U);
    msg.setDestinationEntity(88U);
    msg.op = 222U;
    msg.clock = 0.0367926782759;
    msg.tz = -8;

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
    msg.setTimeStamp(0.814434193304);
    msg.setSource(36434U);
    msg.setSourceEntity(231U);
    msg.setDestination(4995U);
    msg.setDestinationEntity(39U);
    msg.op = 94U;
    msg.clock = 0.797277300772;
    msg.tz = -70;

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
    msg.setTimeStamp(0.633286655281);
    msg.setSource(11597U);
    msg.setSourceEntity(97U);
    msg.setDestination(26043U);
    msg.setDestinationEntity(192U);
    msg.op = 71U;
    msg.clock = 0.815002653389;
    msg.tz = -43;

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
    msg.setTimeStamp(0.366846956459);
    msg.setSource(14136U);
    msg.setSourceEntity(67U);
    msg.setDestination(14U);
    msg.setDestinationEntity(6U);
    msg.conductivity = 0.989396029307;
    msg.temperature = 0.225209849565;
    msg.depth = 0.0913123590432;

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
    msg.setTimeStamp(0.130869980956);
    msg.setSource(40798U);
    msg.setSourceEntity(194U);
    msg.setDestination(60222U);
    msg.setDestinationEntity(205U);
    msg.conductivity = 0.37320472583;
    msg.temperature = 0.0627232148751;
    msg.depth = 0.505554475553;

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
    msg.setTimeStamp(0.252002728826);
    msg.setSource(4427U);
    msg.setSourceEntity(204U);
    msg.setDestination(14304U);
    msg.setDestinationEntity(254U);
    msg.conductivity = 0.0470195590888;
    msg.temperature = 0.595037395431;
    msg.depth = 0.295402598353;

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
    msg.setTimeStamp(0.818509010378);
    msg.setSource(34936U);
    msg.setSourceEntity(0U);
    msg.setDestination(53460U);
    msg.setDestinationEntity(29U);
    msg.altitude = 0.868103031817;
    msg.roll = 53012U;
    msg.pitch = 21440U;
    msg.yaw = 54525U;
    msg.speed = -23233;

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
    msg.setTimeStamp(0.847454227412);
    msg.setSource(59362U);
    msg.setSourceEntity(3U);
    msg.setDestination(58870U);
    msg.setDestinationEntity(37U);
    msg.altitude = 0.168745188108;
    msg.roll = 6989U;
    msg.pitch = 60233U;
    msg.yaw = 871U;
    msg.speed = 20181;

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
    msg.setTimeStamp(0.334405417539);
    msg.setSource(41439U);
    msg.setSourceEntity(126U);
    msg.setDestination(60089U);
    msg.setDestinationEntity(114U);
    msg.altitude = 0.887934315581;
    msg.roll = 7427U;
    msg.pitch = 64934U;
    msg.yaw = 18121U;
    msg.speed = -17756;

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
    msg.setTimeStamp(0.0808249093832);
    msg.setSource(40005U);
    msg.setSourceEntity(98U);
    msg.setDestination(37647U);
    msg.setDestinationEntity(56U);
    msg.altitude = 0.901019637365;
    msg.width = 0.0339900110451;
    msg.length = 0.697186184328;
    msg.bearing = 0.362534872975;
    msg.pxl = 7086;
    msg.encoding = 115U;
    const char tmp_msg_0[] = {19, 55, -60, 9, -15, 11, -59, 94, 27, -123, -106, -22, 4, 66, -60, 25, -87, 0, 60, 77, -93, -25, 29, -3, 29, 30, -56, 126, -20, 82, 117, -74, -90, 61, -27, 24, -22, -88, 119, 80, 23, -28, 113, 70, 17, 107, -24, 2, 30, -21, -19, 47, -17, -70, 104, -22, -101, -82, 82, 23, 44, 25, 26, -81, 55, -84, 105, -85, -72, 22, 97, -83, 88, -19, 34, 117, 14, -17, -41, -42, -27, -107, 75, 79, -42, 27, 45, -73, 97, 32, 50, 89, -35, 30, 63, -29, -49, 86, 103, 56, -85, 89, 107, 5, 45, 46, -125, -103, -67, 3, -9, -42, 21, 20, -49, 98, 69, 48, -77, -53, -116, 30, 22, 83, 14, -108, 92, 60, -95, 48, -110, -26, -85, -59, -100, -10, -35, -92, 35, -121, -23, 125, 92, -41, -76, 70, -34, 2, 23, 101, -79, 63, 60, -85, -79, 106, 75, -33, -27, -53, 14, 48, -95, -29, -78, 33, 120, 0, 59, -83, 89, -28, -10, 32, -110, -42, 110, 109, -52, 124, 72, 93, 102, 83, 76, -111, -63, -17, -29, -5, 66, 93, 51, -41, 39, 11, -40, -101, 32, 54, 22, 68, 69, 113, 119, 80, -53, -115, -57, 110, -122, -103, 115, -51, -38, -113, 67, -74, -104, 53, -82, -36, 111, 65, -10, -33, -126, 12, -29, -119, -24, 18, -99};
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
    msg.setTimeStamp(0.551138519795);
    msg.setSource(20648U);
    msg.setSourceEntity(61U);
    msg.setDestination(32029U);
    msg.setDestinationEntity(166U);
    msg.altitude = 0.613181092236;
    msg.width = 0.594513106181;
    msg.length = 0.612378167702;
    msg.bearing = 0.937965357049;
    msg.pxl = -18713;
    msg.encoding = 4U;
    const char tmp_msg_0[] = {29, -87, -2, -39, 76, -69, -91, -98, -8, 3, -111, 97, 114, 35, 24, 106, -30, -80, -84, -90, -94, -123, 37, 53, 20, 73, -31, -81, -63, 32, 124, 53, 57, 12, -80, -78, 30, -88, -105, -73, -126, 26, 120, -13, 90, -84, 123, -11, 119, -116, -102, -17, 6, 34};
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
    msg.setTimeStamp(0.179942295551);
    msg.setSource(64482U);
    msg.setSourceEntity(165U);
    msg.setDestination(32354U);
    msg.setDestinationEntity(39U);
    msg.altitude = 0.328222433221;
    msg.width = 0.824067445773;
    msg.length = 0.765752339609;
    msg.bearing = 0.17267053748;
    msg.pxl = -22059;
    msg.encoding = 161U;
    const char tmp_msg_0[] = {-101, -6, 103, -25, 21, -2, -3, -53, 101, -3, 1, 3, 28, -112, 62, 46, -125, -82, -27, -49, 50, 95, 94, -44, 35, -49, -93, -117, -13, 40, -48, 22, -1, -31, 75, 51, -87, 93, -60, -4, -56, 92, 2, -33, 25, -18, 89, -44, 4, -125, 58, -126, -65, -38, 30, -5, -111, -65, 117, -78, 29, -128, -111, 28, 113, -38, -88, -99, 124, -125, 123, 36, -18, 119, 65, 97, -102, -1, -112, -16, -51, -62, -112, 43, 51, 120, -14, -74, 106, -112, 5, -126, -6, -47, -6, 122, 102, 3, -33, 102, -97, -18, 117, -80, 106, -6, -87, 67, 79, -16, -122, 100, -60, 102, -92, -127, -113, -63, -88, 26, 21, -86, -100, 37, -84, 116, -90, -10, -16, 62, -2, -79, -7, -62, 8, -94, 47, -49, 36, 124, 105, -121, -111, 122, -120, -61, -59, 125, 106, 31, 32, 115, -106, -9, 8, -9, -29, -2, 116, 115, 0, 92, 126, -35, 109, -36, -88, 45, 55, 112, 48, 17, -69, 103, 16, 78, 99, 43, 92, 8, -85, -19, 86, -26, 83, 123, -5, -50, 84, 3, -27, -82, 90, 30, -105, 3, 83, -126, 31, -128, -18, 97, -20, 25, -78, 122, -41, -31, 117, -96, 61};
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
    msg.setTimeStamp(0.184502299281);
    msg.setSource(23932U);
    msg.setSourceEntity(51U);
    msg.setDestination(33220U);
    msg.setDestinationEntity(23U);
    msg.text.assign("ZVKUIRHEHKASCNSVJQGSXSAGUBAXRVHELNMKDBNLJHWFLTBGGUKYJIOXSPDDAXHETAIAQACILSBDHGYUXWXJBHYGJBJOURFTTFILRSRWXWOPLCPECCTPIHQQRN");
    msg.type = 159U;

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
    msg.setTimeStamp(0.300845253017);
    msg.setSource(65465U);
    msg.setSourceEntity(166U);
    msg.setDestination(43855U);
    msg.setDestinationEntity(103U);
    msg.text.assign("PKAFSDNQPVGYIFWOCPBITDSQXYDBAZFBBUKOTFNYOPCYDICLYHIMGVCWSHLBRKPGNHAEGDIKFGTCACRFWYFUZNQJLNBUDMEVAUMQQRUEQSKOVRTEAUXKZHIBHDVNIBZJCTFRDJSOIWMKZRFYCJLQDJ");
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
    msg.setTimeStamp(0.370197658952);
    msg.setSource(21921U);
    msg.setSourceEntity(130U);
    msg.setDestination(9119U);
    msg.setDestinationEntity(42U);
    msg.text.assign("QTFJYELTMJYGIPDWSTDNAOOEEJGYYAGEQKMXJDNETGOKJZDNZDDEBWLYOALOXKAHXBRRRHAPNQKVRUXUATMHLEHMCGSFAMOOCLGYMPPHGXSJVPBRONBLVITCMFXZE");
    msg.type = 51U;

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
    msg.setTimeStamp(0.650404629893);
    msg.setSource(21181U);
    msg.setSourceEntity(168U);
    msg.setDestination(11153U);
    msg.setDestinationEntity(240U);
    msg.parameter = 82U;
    msg.numsamples = 174U;
    msg.lat = 0.228865077981;
    msg.lon = 0.537061401008;

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
    msg.setTimeStamp(0.0402392825328);
    msg.setSource(3378U);
    msg.setSourceEntity(199U);
    msg.setDestination(8577U);
    msg.setDestinationEntity(98U);
    msg.parameter = 201U;
    msg.numsamples = 251U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 62162U;
    tmp_msg_0.avg = 0.770554449014;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.0573556137533;
    msg.lon = 0.857104213583;

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
    msg.setTimeStamp(0.015932270066);
    msg.setSource(33795U);
    msg.setSourceEntity(253U);
    msg.setDestination(14472U);
    msg.setDestinationEntity(36U);
    msg.parameter = 141U;
    msg.numsamples = 85U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 13528U;
    tmp_msg_0.avg = 0.431879129564;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.881691667254;
    msg.lon = 0.775668304492;

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
    msg.setTimeStamp(0.196011577816);
    msg.setSource(39688U);
    msg.setSourceEntity(81U);
    msg.setDestination(6057U);
    msg.setDestinationEntity(251U);
    msg.depth = 17289U;
    msg.avg = 0.719734177828;

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
    msg.setTimeStamp(0.0662323299709);
    msg.setSource(19395U);
    msg.setSourceEntity(253U);
    msg.setDestination(18389U);
    msg.setDestinationEntity(49U);
    msg.depth = 39240U;
    msg.avg = 0.739154609374;

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
    msg.setTimeStamp(0.117423125117);
    msg.setSource(2607U);
    msg.setSourceEntity(12U);
    msg.setDestination(46152U);
    msg.setDestinationEntity(101U);
    msg.depth = 23685U;
    msg.avg = 0.723784050148;

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
    msg.setTimeStamp(0.543372012169);
    msg.setSource(38517U);
    msg.setSourceEntity(198U);
    msg.setDestination(61762U);
    msg.setDestinationEntity(230U);

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
    msg.setTimeStamp(0.621666435161);
    msg.setSource(13149U);
    msg.setSourceEntity(203U);
    msg.setDestination(17374U);
    msg.setDestinationEntity(111U);

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
    msg.setTimeStamp(0.508713928109);
    msg.setSource(28925U);
    msg.setSourceEntity(168U);
    msg.setDestination(33763U);
    msg.setDestinationEntity(237U);

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
    msg.setTimeStamp(0.843018673527);
    msg.setSource(49201U);
    msg.setSourceEntity(4U);
    msg.setDestination(24541U);
    msg.setDestinationEntity(91U);
    msg.sys_name.assign("UTEEZQCVBHQFMSOETZHIMQIUYUTFTVYEIJDOIBKHKEACCYQWBEFPPKEGJFZMITUROLGSWBQMQXQXCLGYXREIIGVSOONMP");
    msg.sys_type = 199U;
    msg.owner = 22230U;
    msg.lat = 0.19843507307;
    msg.lon = 0.54564247032;
    msg.height = 0.363131331227;
    msg.services.assign("EMUEREEZBWKMFKBMZSDREETZJNKPDZDGKZRJDMVNGLMCAJPIHCKWEAAQIXLLRQTOBFUGRAJSOMDILSXNOLLCQVOBGUWNUAKHBYWXRCQCFTEDZQVFIHBFAAFYBGSJTJRYHCSYNWDRJIWUCJVKOFXZASRIYDKLUPIODZSQXCYAUUTKWXHPOMYPVYCCOOGPFOMTHPYIJNUXTNALQMGWXLYQGPVZNHBTWXTHQINHVVFGNEJBT");

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
    msg.setTimeStamp(0.838405419377);
    msg.setSource(55124U);
    msg.setSourceEntity(119U);
    msg.setDestination(46382U);
    msg.setDestinationEntity(107U);
    msg.sys_name.assign("USLRGDYCAENSIWLQBGLJOSMYMUUPWKXJJTTCVPYBFKATMUVXYQCBVOKMAOYBZCHPAQAIZVHQORXDNHHFLNARXBPNJQXIQGFZIITWJDMAGYRL");
    msg.sys_type = 63U;
    msg.owner = 14866U;
    msg.lat = 0.483412064457;
    msg.lon = 0.100306553946;
    msg.height = 0.276991444706;
    msg.services.assign("BDGRZTVGRTPNDOJAIMMZMDPLWVWPYI");

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
    msg.setTimeStamp(0.74399212059);
    msg.setSource(47200U);
    msg.setSourceEntity(118U);
    msg.setDestination(63996U);
    msg.setDestinationEntity(125U);
    msg.sys_name.assign("YZGZVLQJOUDHOTTMRZHQBYVLKSSFWMFRKQKECXQDNDXBUTVYFNCMVHAOLCWJGJYBNAIDIMFUAEXDYVNBZESBNMSITSXYCDXTWDFGRA");
    msg.sys_type = 87U;
    msg.owner = 52623U;
    msg.lat = 0.650325512765;
    msg.lon = 0.457244617657;
    msg.height = 0.357101655407;
    msg.services.assign("PAVPMXDDUQJDNTTCKYRIFXKMULKACCUSKDOBGNUBTUNZWQHSNVCJYZKLKJWHRVGZXPSPEMGZGRJZAMIDLAFVGHIPWQPMOFXFERQFORMKBEZIFGBESIYNRROUNRTDTUIEBQIEEQKWPAGTOQ");

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
    msg.setTimeStamp(0.588838502934);
    msg.setSource(8712U);
    msg.setSourceEntity(117U);
    msg.setDestination(31060U);
    msg.setDestinationEntity(14U);
    msg.service.assign("IEBKYLZRKOYAGFTRTGUXGDEGZZAMDJLBGQMNZWCNCVR");
    msg.service_type = 224U;

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
    msg.setTimeStamp(0.269086330759);
    msg.setSource(30266U);
    msg.setSourceEntity(58U);
    msg.setDestination(24496U);
    msg.setDestinationEntity(60U);
    msg.service.assign("FRJOZVKFAIBIUUBJVESLROEBTUGTOBUMQSZEXMBQFWWYVDRAXXWXQTPVNSRBPNLXQWVQZEIWWLKIKAAWWQFCARGBCWZOMBZCQTNHXCDFICRLAVPTWVUDZSYJHGYLSJOIFGURLIMDDELCNCXAHTYDJCNKBEDGPMKGDCNHMLENCPUVMNKJPPMOPSZYIFHJDATYFSEHATTOYYNR");
    msg.service_type = 199U;

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
    msg.setTimeStamp(0.586377878166);
    msg.setSource(64886U);
    msg.setSourceEntity(198U);
    msg.setDestination(10113U);
    msg.setDestinationEntity(97U);
    msg.service.assign("YIJUEIFZILEWFAFKVTSPOYSWNQRSZTLMSDHPSHPVJYBRPVXGGASNDUNKWGZWYARDJGR");
    msg.service_type = 105U;

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
    msg.setTimeStamp(0.738710432202);
    msg.setSource(65106U);
    msg.setSourceEntity(124U);
    msg.setDestination(29800U);
    msg.setDestinationEntity(232U);
    msg.value = 0.833367539789;

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
    msg.setTimeStamp(0.221997871351);
    msg.setSource(51638U);
    msg.setSourceEntity(109U);
    msg.setDestination(62100U);
    msg.setDestinationEntity(249U);
    msg.value = 0.69023448095;

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
    msg.setTimeStamp(0.315875756023);
    msg.setSource(14862U);
    msg.setSourceEntity(120U);
    msg.setDestination(63495U);
    msg.setDestinationEntity(227U);
    msg.value = 0.836842028594;

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
    msg.setTimeStamp(0.730192390602);
    msg.setSource(52740U);
    msg.setSourceEntity(46U);
    msg.setDestination(38370U);
    msg.setDestinationEntity(183U);
    msg.value = 0.369349359605;

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
    msg.setTimeStamp(0.397776042527);
    msg.setSource(30269U);
    msg.setSourceEntity(252U);
    msg.setDestination(63740U);
    msg.setDestinationEntity(123U);
    msg.value = 0.89182093617;

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
    msg.setTimeStamp(0.11671286775);
    msg.setSource(9954U);
    msg.setSourceEntity(137U);
    msg.setDestination(58280U);
    msg.setDestinationEntity(17U);
    msg.value = 0.53743815655;

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
    msg.setTimeStamp(0.540236527643);
    msg.setSource(55983U);
    msg.setSourceEntity(194U);
    msg.setDestination(60066U);
    msg.setDestinationEntity(158U);
    msg.value = 0.44448634656;

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
    msg.setTimeStamp(0.710318284229);
    msg.setSource(31994U);
    msg.setSourceEntity(84U);
    msg.setDestination(64394U);
    msg.setDestinationEntity(7U);
    msg.value = 0.481925181334;

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
    msg.setTimeStamp(0.742202769034);
    msg.setSource(6925U);
    msg.setSourceEntity(226U);
    msg.setDestination(61195U);
    msg.setDestinationEntity(233U);
    msg.value = 0.113665364747;

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
    msg.setTimeStamp(0.723513871203);
    msg.setSource(12209U);
    msg.setSourceEntity(116U);
    msg.setDestination(52839U);
    msg.setDestinationEntity(104U);
    msg.number.assign("VIMGSRJEXUHFVTGZRMMXVTSSHVRESAZZJASIAJYXCYMQMHIBMHJOBPNLDSYWTWXGONGOINNKPCLZUUQYNPGLYWKNRTDIUJGWKNQDDQAQIKHLKBSXJZEECBEQTJIOVDTFUEBRIYHHELGZXUSWTGBVFZFSPRLNXCPAPKGCVK");
    msg.timeout = 59379U;
    msg.contents.assign("SNBKOFLESUNZHNSTUMXRDFBSNHVJGIPCTSHZLYFWWJBRCYPEIEYPQPDAZYCXHSKAVTITBZACTQHLOFFPYOIZAKGXQXEKLUWTLMRZQJOMGNXOLCDERIBCBKVWZZJPNLDPBQKRFXOMCXQTBMGWGWALRMURDQAOUEONUSRAQTNKVKIUWKZFIXNUXAGDF");

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
    msg.setTimeStamp(0.799893736593);
    msg.setSource(63862U);
    msg.setSourceEntity(79U);
    msg.setDestination(8252U);
    msg.setDestinationEntity(41U);
    msg.number.assign("IOYPRIGAZFPOMUQXFKBAKFVQTGXWCCNAWUPVHMKBJQOZYSYNXGYZFQPTUYKZDUWTJMAVCTMHJPUDQGIEUADSWHAUCLNJFEXNRHOWEPICRZFHOSEBZFDTDNSIZSKHHOTWKSDMPBRRMVELCDLGUXKNEMBYKFEJL");
    msg.timeout = 5223U;
    msg.contents.assign("EYPPQAAHIALVADIVGOQCERWNJNGDMZFPVOIPSMRD");

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
    msg.setTimeStamp(0.664410346499);
    msg.setSource(4645U);
    msg.setSourceEntity(191U);
    msg.setDestination(13329U);
    msg.setDestinationEntity(144U);
    msg.number.assign("WFMYFLHCVJRVLXNPKJFUNGWFBTSWVIXGTVKYLIPGAUBPTILGFJIAXXKGEKWJSWLZIZBQPBECLPCJDRTXHDUZZOUVRDWHYJHMNIZAOIZUKKOPCQEBOUXMIYNKVNNASAAGDADWEUDYVZQHXYOEOMDVEWJYJFPPWUHRVMQRTOSORXDFCUGFTFTSSCECJYBPGEEUEQMYIHTL");
    msg.timeout = 16573U;
    msg.contents.assign("GQRKUSMLWWERBLYGKLMSUOFAMGQJYCIQZIWPHDKPETWRTNXCNLMNZGJBLZZDV");

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
    msg.setTimeStamp(0.872491466832);
    msg.setSource(27485U);
    msg.setSourceEntity(75U);
    msg.setDestination(43192U);
    msg.setDestinationEntity(22U);
    msg.seq = 343761579U;
    msg.destination.assign("BLBSSVKYKLLWBBL");
    msg.timeout = 41212U;
    const char tmp_msg_0[] = {75, -92, 92, -7, -31, -77, 1, -49, -33, -113, -9, 100, -79, -125, -102, -52, 87, 27, 90, 2, -126, 36, -55, 72, 46, -32, 125, -33, -84, 74, -96, -72, 49, -86, -107, 39, 79, 85, -23, -78, -95, -52, 85, 40, -13, 35, -68, 56, -84, -3, 65, -52, -49, 71, 42, -76, -76, -64, -5, 35, -1, 111, 43, 4, 57, 72, 10, -104, -109, 39, 96, -120, -60, -91, -88, 102, 15, -100, -27, 124, -23, -42, -39, -78, -111, -117, -45, -90, -58, -55, 104, 97, 40, 78, 2, -62, 30, -113, -73, -83, -107, 36, -4, 48, 70, 34, -93, -89, 109, -35, 0, 41, 108, 30, 107, -62, -47, 54, -16, -76, -86, 56, -80, 26, -101, -44, -88, -6, -126, -19, -17, -23, 93, 17, -4, -46, 33, -105};
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
    msg.setTimeStamp(0.684577042544);
    msg.setSource(54058U);
    msg.setSourceEntity(93U);
    msg.setDestination(45209U);
    msg.setDestinationEntity(165U);
    msg.seq = 2442914579U;
    msg.destination.assign("BZVDWNHIUYZCORGFBKADWUYLAIBAMBRQNMJYAGKGGARPMNDPTQAX");
    msg.timeout = 59846U;
    const char tmp_msg_0[] = {104, -102, 20, 9, 116, 54, 74, -89, -21, -38, -71, -116, 12, 126, -13, -112, -11, -21, 116, 125, -45, 36, 5, -73, -45, 60, 98, 58, 23, -79, 1, 76, 4, -51, 38, -4, 105, -77, 25, 25, 33, 120, 84, 113, -24, 86, -66, -9, 80, 80, -76, -80, -1, 75, 40, -73, 16, 22, 7, -59, 86, 3, 126, -54, -19, 17, -93, 64, 8, 79, -1, -92, -13, 69, -102, 35, -22, 118, 92, -56, 82, 63, -47, -104, 6, -101, -79, -90, -17, -94, 1, 125, 106, 16, 51, -8, -85, -80, -107, 44, 97, 18, -23, 39, -50, 115, 110, -22, -13, 124, -124, -29, -123, 28, -6, 67, 126, 68, 60, 13, 38, -7, 58, 73, 8, -102, -37, 88, -113, 31, 48, 0, 104, 71, -2, -7, -122, -44, 39, 120, -110, 28, 57, 31, 69, 87, -21, 74, -19, 71, 100, 66, 35, -39, 17, -43, 95, 114, 81, 47, -44, 11, 73, -109, -47, 49, 63, -63, -80, -85, -69, 59, -117, 62, -41, -72, 43, 69, -107, -17, 116, 39, -5, 2, -128, -113, 26, -28, -37, 112, 115, -120};
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
    msg.setTimeStamp(0.224978759766);
    msg.setSource(31842U);
    msg.setSourceEntity(116U);
    msg.setDestination(36591U);
    msg.setDestinationEntity(62U);
    msg.seq = 2276528161U;
    msg.destination.assign("CCODCKYVABDIXEKCWUGTXPMBWSDTTGSHDVPJZFNGLROFFLOIEEPIUMQWJALTEKGKQIEXSMTCEVGRUZUUCKWHLTLQNXJGHXAFRRINWZARETOQABAEKVYMIWSVVZMJAXKBWDJWENLCQZOAKSBRMFBVDSDNJOJOYPOMGFRUVGPKTXGDFJPLHQITDNNZDSYOPHURHHQJSIYIILUFXWZYOKJBPRBF");
    msg.timeout = 62487U;
    const char tmp_msg_0[] = {92, -92, -80, -25, 76, 95, -59, 105, 34, -90, -126, -108, 120, 12, -55, -58, 9, -128, 25, 101, -72, -32, 50, -111, -60, 82, -83, 12, -95, 34, -123, 103, -26, -3, -27, 102, 6, -105, -25, 115, 41, -51, 76, -47, 21, -80, -111, 100, 71, 34, 92, 65, 98, -13, 19, -22, 112, -11, 73, -29, -44, -48, 55, 62, 0, 120, 16, 102, -57, 60, 99, -67, 49, 55, 63, 85, 78, -8, -21, 117, 50, -41, -33, 67, -72, 24, 24, -38, -71, 120, 45, -30, -44, 126, 63, 11, 100, 104, 26, -23, -68, 114, -36, 47, 45, 85, 90, 124, 105, -60, 122, 67, -55, 74, 52, -67, -113, -49, 101, -75, 15, 95, -57};
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
    msg.setTimeStamp(0.122789276018);
    msg.setSource(56427U);
    msg.setSourceEntity(68U);
    msg.setDestination(63638U);
    msg.setDestinationEntity(48U);
    msg.source.assign("FTEYRYJMFUUADENUFNGECXNQDQQCPGQCARPSKSLQYVRMQYKPFIDKRXSYYWHFGCGBQPKOINWPJGBUDBKJHZUOVJXAPIJVZAICUSJFESLJHLULITAICDQRTHXDPPOZGMZYISBTDOBNKNOAJPDEUHLAWOHGVCKVHXZLGMWMVYBGKAO");
    const char tmp_msg_0[] = {-71, 117, 49, 84, -59, -105, 15, 121, -20, -48, 68, -30, 39, -15, -113, -85, 33, 4, -83, -91, -81, 23, 10, -47, -68, -29, -55, 112, 7, 62, 41, 62, -103, -106, 72, 119, -77, -64, -22, 89, -21, -65, -53, -85, 100, -97, 114, -38, -99, 25, 106, 51, 36, 0, -115, 73, -124, 93, -57, 37, -90, -25, -65, -44, 19, -80, 8, 90, 32, -62, -19, 116, -53, 13, -17, 93, 46, 123, 54, -65, 76, -107, 126, -107, 44, -34, -87, -21, -54, -36, 78, 108, 109, -1, -110, 93, -83, 60, 68, -23, 92, -86, 34, -107, 21, 73, 32, -47, 30, -50, -58, -113, 6, -53, 89, 84, -40, -108, 109, -121, -108, 80, -13, -107, -8, 119, -11, 18, 17, 11, 29, 39, 2, -75, 0, 73, -96, -80, -120, -2, -19, -121, 106, -102, -94, -125, 11, 82, -78, -40};
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
    msg.setTimeStamp(0.581886650105);
    msg.setSource(53947U);
    msg.setSourceEntity(55U);
    msg.setDestination(6531U);
    msg.setDestinationEntity(113U);
    msg.source.assign("LPADMIJTSOOIGHIACHUVLCEGQTBTEELRXQYMRJCTOUHNYPXWWSWDHGUDVNKMINOLPNAJHJTKNEMLFZXRFKPAAVIQCGHPSJZRNUYZZJWXSLFBPHKGMOJKHXWKMSGFCSQZDIXXAIPCGRRPHQPMAZCBOFJPNOHXKTEMDTKLVNWOQAQWVSVDBKBFEFGX");
    const char tmp_msg_0[] = {107, 126, -5, -11, -33, -127, 113, 104, -48, 99, 84, 35, 31, -75, -86, 59, -57, 54, 71, 26, 110, 63, -46, -96, 7, -71, 23, -123, -33, -58, -9, 105, 92, -44, -49, -106, 102, -48};
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
    msg.setTimeStamp(0.902948973627);
    msg.setSource(34520U);
    msg.setSourceEntity(242U);
    msg.setDestination(23187U);
    msg.setDestinationEntity(83U);
    msg.source.assign("DZYMCVRYSGMFHMJKUXLEXICTZNZDWBMPGNFDGVJIHIXTLPIYBRGDRKWKQMZXFLEIOSQZATKEJYFKMNXRTFROYRVFUDMSQBCXBCWYKLONYNZHUUJGPRMPMLATOTBKVSDSZCFOUDGBPUTWON");
    const char tmp_msg_0[] = {-16, 42, 88, -65, 28, -46, 0, 24, -123, 119, -32, 29, 56, 30, 86, 37, 45, -53, 86, 56, 112, 53, 11, 52, -90, 20, -77, 13, 15, -49, -76, 30, -3, 56, 126, -127, -69, 23, -43, 100, 87, -56, -65, 13, 64, 93, 109, -5, -117, -9, 107, 28, 69, -31, -98, -82, 84, 100, 84, 100, 72, 25, -51, -92, 43, 112, -66, -84, 68, -13, 86, -57, 106, -92, 63, 7, 20, 93, 54, 70, -77, -116, -50, -124, 64, -73, -90, 58, -85, 20, -40, -104, -34, 7, -123, -45, -114, 66, -117, -51, -8, -99, 51, -93, -41, -73, 76, 56, -64, -64, -103, 17, -31, 98, 62, 87, -55, -70, 25, -22, 0, -9, 3, 79, 80, 105, 66, -91, -60, -65, 121, 105, 86, -18, -126, -98, 64, 12, -44, 126, -19, -17, -93, -64, 35, -83, 85, 85, 121, 78, -11, 121, -77, -28, 69, -127, 49, 37, -101, 87, 17, -101, -33, 78, -11, -113, -65, 84, -52, 14, -103, -58, 10, 70, -126, 41, 60, -109, -88, 93, 3, 116, -65, -13, -127, -102, -73, -47, 36, 104, -88, -125, -20, 99, -59, 69, -8};
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
    msg.setTimeStamp(0.259569253043);
    msg.setSource(38901U);
    msg.setSourceEntity(167U);
    msg.setDestination(55604U);
    msg.setDestinationEntity(235U);
    msg.seq = 505055212U;
    msg.state = 219U;
    msg.error.assign("BEZLQNUEFXGWVPCBEKHVKNQVAJRYICOEARKHKZOBXUKFIHDDXSOQQQNMBLJFPLCCVGSJIKJSVVMARAICBGLIVIOEYRJEZWRMVRSXTRFNXDCUAEPKHFHYSPONUZDAXCZMOFAQOGWSVWTUTBSQLBGTJLPTMPYOTUGNZOFUQIQPNLMZIOKHDLJCYVRLWXDFIKXRGEJWGPRTQHDZYNZIWGYAPDHJHSLEYUPWXFMFJBATXWTBNMEDC");

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
    msg.setTimeStamp(0.665383442367);
    msg.setSource(43251U);
    msg.setSourceEntity(152U);
    msg.setDestination(23279U);
    msg.setDestinationEntity(151U);
    msg.seq = 1809557740U;
    msg.state = 166U;
    msg.error.assign("UHLAPWJJWUFKTPGKZEJZQKQZLYQZMQSWDJSGAPBIQTLLRUKAITQUOKFVPJLEBMTBZXMRSPYVNCYGXFBMONOFUCXANCDIXMOTYYRNCSIHDDXHHTILEWKDRJKSFACMCVETKHDAHZVIWOMPIVFWLREHBXIZWMYBLPOXUHRUQACAFEKWBJFVJGXZUBJP");

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
    msg.setTimeStamp(0.235561766442);
    msg.setSource(37228U);
    msg.setSourceEntity(193U);
    msg.setDestination(42114U);
    msg.setDestinationEntity(164U);
    msg.seq = 325545719U;
    msg.state = 183U;
    msg.error.assign("HVLZVZAATYSEMSPPIKNLZJBRDHBGXUHPIRYOMGBZIUTCPTUBNIPHHTCKEDWOLDLORMBUDWUIGTTDNAKYACSURQLCNVTBHQXKAIOEDSXPWOAYLFSFEZVIYSYMMXOPJJMLGJWIBXLZGWVQJTGUHWVSEKEZYBBHNKPXQCXFVQGWGVRFDUQLANOIFKAJLVWOODITDHRZRFXRCYXSQFCRFKHSKGNQFOJJBQUWVT");

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
    msg.setTimeStamp(0.380327995156);
    msg.setSource(33706U);
    msg.setSourceEntity(212U);
    msg.setDestination(36364U);
    msg.setDestinationEntity(125U);
    msg.origin.assign("ZEINNIYGYCJPRORNLOKMTEGGAUADZRXMXCYMYLVQHXVQIZQLRORCBNFRKPLHJSMUGOUABBTSLIWMQVMLBXAFFHESDVIDTVUPOVWJXWCAYKHZJURPEJSSTYVOGEVNEYPQSDDMPWHKTILOHXBOPQCOZUPFXBHCKENWAWGSKDSABWYRHINFUCJN");
    msg.text.assign("DLCPIXQMCXQCLIRKYOWNQZFYOCJLEOBPHGBRXGAQODABSRSKQYNSIMFKVSODJBFNQYWULCKVHDLXGXFFOHUNZMZFTAFUKBWHZWKYQJBEZCHWOCINETCSLYZMBPAZKAURJVSDUMDTPWXFAGYPYHOFDRSQVHEGZILGJDWDNAJGNQPXIRNTAJSUBTJXECVUPPMSEXTCRXPFLRMMREVEKYZWRSEKVZAIATWNBGEOHUI");

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
    msg.setTimeStamp(0.22976549114);
    msg.setSource(55757U);
    msg.setSourceEntity(114U);
    msg.setDestination(7107U);
    msg.setDestinationEntity(68U);
    msg.origin.assign("DJMFQZSVKNDXLLADHPJXWGOAYFRIRIGBDMZBQEHPXQFJAETTKSBRNCSFNXGM");
    msg.text.assign("VGEXZVSGSTIVNJBAMHLJJCAFSIAVLQKCIAJPZRDIZEOYGPPJOFGBCWXUSNWDIFSJXFEGPEUBKZGKZWCBNMFZNSGZYKPKYHHWQZYVXYQGRVBTISRHBTWEYNCLHPANCQLDMOJUQYFGFQWCHEPUHTHHUQJYLILLZAVJPNQSEMXUMVWWDMAKBLRYWIURDEKNTOHOKOXOXPKXRM");

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
    msg.setTimeStamp(0.523651368549);
    msg.setSource(22710U);
    msg.setSourceEntity(118U);
    msg.setDestination(37184U);
    msg.setDestinationEntity(78U);
    msg.origin.assign("DJESQLWEVZZHSMXXAOUQFXOFHZPYCDKWDUTURMIDETIHTMGODELEDGUNAVSRIHQRMVPKFIUFZEPGSWJVHVZIBJTABCWOXTENTQGQUUCSOANHLYZVT");
    msg.text.assign("TMZMQLACEZPSQZHFZUOQWQSILFPXOVTXJBMKOHEDPPLRSPYRHYHIFNXFASGZIYNBGIKIDWOHWGDSMQACBLWYBVBNRJMJYPWJUMJKLURZFVNNGGVLIJFTZDUDCHCRKYILTGBCFXFAKKSNWEJBAC");

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
    msg.setTimeStamp(0.144900527149);
    msg.setSource(9650U);
    msg.setSourceEntity(71U);
    msg.setDestination(34087U);
    msg.setDestinationEntity(23U);
    msg.origin.assign("VMHLAHECOEOPMZSNQN");
    msg.htime = 0.960208062782;
    msg.lat = 0.886223701069;
    msg.lon = 0.492143897715;
    const char tmp_msg_0[] = {28, -27, -38, -106, 72, -126, 37, -53, 70, -128, -9, -111, -8, 77, 26, -19, 5, 23, 44, 74, 0, 39, 55, -124, -112, -60, -98, 117, 55, 58, 1, 28, -124, 1, -2, -13, -63, -75, -85, -124, -100, -110, -11, -77, -14, -65, 101, -128, 16, 44, 25, 38, -69, 36, 34, 9, -96, -103, -97, 62, -123, -86, -124, 50, -121, -64, 79, -128, -44, -63, -74, 38, -16, 50, -1, 82, -52, -84, 78, -118, -45, -83, 77, -17, -14, -92, -31, 0, 98, -101, -33, -11, 106, -108, -10, -85, -82, 66, -126, 52, -121, 58, -49, 119, -91, -69, -67, -5, 62, 9, -42, 0, 17, 20, 27, 44, -75, -28, -98, -121, -64, -1, -46, 41, -86, -75, -68, -66, -111, -99, -20, 29, -107, 83, -66, 99, -24, 76, 30, 24, 112, -23, 75, -29, 86, -104, 81, 75, -103, 109, -4, 24, -109, 33, -127, 83, -117, 113, -53, 27, 88, 103, -23, -51, -92, -69, -38, 0, -100, -20, 118, -2, -117, -60, 62, -93, -38, 33, -6, 60, 47, 5, -8, 120, 73, 92, 6, 20, 116, -65, 22, 9, -41, -23, 75, 119, -75, 7, -84, 42, 75, -55, 80, 109, -71, -97, 6, 92, -4, 39, -63, 80, -78, 117, -2};
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
    msg.setTimeStamp(0.0788415856615);
    msg.setSource(41187U);
    msg.setSourceEntity(228U);
    msg.setDestination(25382U);
    msg.setDestinationEntity(117U);
    msg.origin.assign("XMJOCESUOKMVAQWNFLPCCPVEBYTBSZYDBPEEGUVFGINMHAESHTXIWETVNKUOLPBFSCEQINTKFQGJNOJPKIIXOGY");
    msg.htime = 0.35760417553;
    msg.lat = 0.904330799634;
    msg.lon = 0.27359114706;
    const char tmp_msg_0[] = {-64, -114, 60, -81, 113, -103, 28, 119, -94, 34, 26, -44, -39, -3, -88, -31, -39, 102, 68, -79, 23, -114, -128, 118, 28, 42, 110, -84, 27, 94, -36, -104, -13, 60, 1, 31, 54, -12, 18, -113, -13, -75, 9, 108, -114, 122, 101, 114, -57, -25, -103, 61, 31, -85, -98, -106, 75, 81, -24, 56, 28, -107, -57, 42, 96, 91, -43, -97, -58, -102, -48, 119, -97, 115, -93, -12, -121, 12, 80, 98, -59, -54, -38, 13, -24, -63, -33, 57, -124, 44, -81, -68, 64, -58, 14, 112, -40, 7, 21, -84, 97, -47, -98, -79, -117, 16, 49, -32, 95, -37, -85, -35, 99, 85, 100, 100, -34, 109, -73, -37, -110, -69, 57, -21, -90, 98, 101, 61, -76, 109, 13, 82, -104, -94, 10, 50, 89, 64, -49, -92, 102, -52, 22, -65, -121, 56, -93, -14, 100, -46, 95, 74, 48, 111, -102, -43, 28, -43, 8, -21, 82, -31, 111, 43, -74, 45, 58, 125, -83, 41, -82, -37, 33, -15, -99, -27, 28, 49, -14, -54, -10, -123, -121, -123, -66, -89, -115, -112, 24, -6, -107, -61, -11, -32, 85, 122, 112, 77, 70, -35, 119, 110, -5, -57, -128, 11, -5, -126, -22, -109, 68, 71, 36, 40, -46, -68, 106, -16, 86, -83, 27, -28, 81, 22, 52, 70, -14, -127, 68, 5, -76, 72, -97, -64, 53, -83, -11, 6, 13, -24, -92, 29, -19, -115, -50, -38, 16, 22, 25, -24};
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
    msg.setTimeStamp(0.197909392664);
    msg.setSource(5913U);
    msg.setSourceEntity(120U);
    msg.setDestination(23776U);
    msg.setDestinationEntity(86U);
    msg.origin.assign("XOOCQTGXKRYMUWOTGVXHWBPKLDSNHVMYEVMOZQMECJEQQQWTYWWNONDAXHRVYLABAJIULZCFMLYNAVVDPMRFISUDBXBILSLONJXTTQPTUZPFURHTKAKXQLITLCGUNBCEAOPUDCVNWFQYHVJXCFGZRREMBDWFNKUSNEGEZMOEJJXDHKYCOTHSMXDPPGJHSRFIEJSEBTSWVUAKJFAIRGVKHCCPBJIGRAUKBGDLOI");
    msg.htime = 0.16214513799;
    msg.lat = 0.88403725283;
    msg.lon = 0.0276187077865;
    const char tmp_msg_0[] = {-44, 52, 12, 78, 99, 114, 91, 14, 18, -73, 17, -35, 85, 81, 97, 87, -123, -104, 94, 113, 104, -86, -119, 55, 95, 117, -35, -40, -88, 17, -24, 89, 47, 63, 33, 34, 113, -31, -43, 118, 108, -108, 1, -80, 57, 97, 10, -4, 13, -79, -9, -120, 38, -26, 100, 73, -48, -55, 50, -109, 94, -21, -97, -76, 101, 89, -8, -82, -103, 75, 54, -43, 12, 4, 113, -40, -109, -37, 22, -49, -77, -58, 116, -63, -68, 85, -5, 7, 47, 69, 90, 76, 122, 120, -40, 1, 78, 45, 53, -2, -89, -45, -98, -81, 97, -72, 62, 50, -29, -35, -28, -114, 108, 49, 36, 101, -9, 4, -3, -2, -124, -90, -25, -91, 87, 62, 25, -12, 96, 111, -12, 35, 13, 26, -125, -40, 9, -110, -96, 76, 52, 18, 73, -90, -75, -13, 57};
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
    msg.setTimeStamp(0.715944623403);
    msg.setSource(38452U);
    msg.setSourceEntity(185U);
    msg.setDestination(58344U);
    msg.setDestinationEntity(64U);
    msg.req_id = 7953U;
    msg.ttl = 16643U;
    msg.destination.assign("MQAVINMPZISSCUNEFMJKBDWGRVPGTUHSXRPLZWFMGBRXNOFZZMDADEGNXSYRUHOFJWBCRXJYJVFLIOWANWTDIADKHYYMUQIIGRCNCAPDETOQTIBSBUYORTCTLABNQFOXYFKTDYKUBEENMEJVZOHVSQLLQQXSAAVRWPQKHRBCLDVFYRFLKLSAXUGWUWOXULBPKSGTZHIIJGOKCMCOPDZJEHXJHNLDTEQAWWCTEUFZVSCJMPQHBZVPYKHKGYZVPI");
    const char tmp_msg_0[] = {-41, -63, 103, 49, 84, -15, -107, -68, 107, 88, -120, 91, -31, 97, -92, -82, 0, 96, 59, -104, -80, 70, -89, -124, 86, 83, -44, -28, -93, -59, -19, -98, 120, 38, 89, 91, 55, 117, 123, 32, -120, 122, 93, 71, 109, -75, -89, 55, -97, -103, -44, 1, 76, -92, -106, 14, -47, 76, 105, -35, -96, 7, 50, -53, 50, -14, -103, -2, -69, -61, 66, 94, 92, -7, -79, 115, -85, 50, -127, 64, -91, -95, 103, -107, -102, 74, -64, -86, -29, -111, 54, 13, -83, 51, 23, -2, 68, -92, -7, -32, -75, 68, 24, 71, 12, -11, -107, -128, -125, -44, -20, 90, 22, -93, -2, 116, 31, 48, 56, -26, -75, 2, 36, 38, -109, 6, 26, -73, 16, -68, -33, -111, 66, 69, -78, -2, -122, 95, -97, 126, 1};
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
    msg.setTimeStamp(0.282280867254);
    msg.setSource(13448U);
    msg.setSourceEntity(242U);
    msg.setDestination(55739U);
    msg.setDestinationEntity(134U);
    msg.req_id = 47554U;
    msg.ttl = 8056U;
    msg.destination.assign("XCKBZMZSPWWFVYTSVJFRXIKJGIEWBYUOQPKPHOVPIHSEQVNMDXJBFJRLUXHILNUKHANFBHKGFBKMYCPRKZIIWIFVGQDNYRDOYSJZEQFZPVVPBGGXUTDQYVTMGDCEQLWBDYOHUAAXROEUCAQ");
    const char tmp_msg_0[] = {37, -73, -119, -12, 101, -122, 0, -71, 8, -65, 43, 32, 64, 99, 10, 44, -29, 42, 98, 116, -84, 70, 52, -128, -24, -116, -125, 80, -2, -94, 113, 30, 113, 21, -39, -16, 36, 63, -54, -42, 90, 84, 98, 118, -59};
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
    msg.setTimeStamp(0.644400691822);
    msg.setSource(20250U);
    msg.setSourceEntity(199U);
    msg.setDestination(31811U);
    msg.setDestinationEntity(56U);
    msg.req_id = 64656U;
    msg.ttl = 47832U;
    msg.destination.assign("JEEGOTLXWLVSYNNLHWBKQOIDUGWMEODBMHNDRAHLPDKUFYCYCMZMNTQDKBKJUZYUATQESVBJYMHRANWJPDHAXEYETFMUFLTFIDZAZQZBHMGFXECMFVPTHILZHXNSVSDIQPAKLRTJAVPYSUSIEBVBBRRWXCXOJFJFSPSOCJTVODLECKCVHZULGYAYXBNSTNGNCXUIJKXJARFHODUQWIGZNRMT");
    const char tmp_msg_0[] = {-24, -50, -52, -116, -122, -77, -32, 104, -82, -75, 2, 9, -103, 28, -59, -87, -123, 68, -19, 123, -92, -93, -98, 105, 57, 96, -58, 90, 48, -2, -36, 87, 90, 29, -50, -69, -125, 74, 79, 17, 120, -99, 67, 40, 45, 39, -67, -7, -62, 84, -37, -8, 81, -49, -120, 48, -63, -64, -27, 89, 81, -52, 40, -94, 71, -103, 110, 107, 64, 91, 80, 22, 10, 31, 90, 10, -37, 1, 7, -8, 64, -121, -40, 83, 92, 73, -63, 6, -127, 96, -35, -93, -62, 71, 85, -105, 1, -67, 16, 93, -90, -116, 65, 17, 32, 108, 20, -125, 106, 6, 0, 11, 124, -1, -35, -44, 3, -82, -16, -11, -31, -124, -128, 75, 39, 113, -55, 39, -29, -11, 92, 87, -72, -119, 100, -85, 27, 13, 85, -21, 122, 47, -122, 87, -85, 111, 28, 38, -77, -125, -73, -76, 80, -122, -122, 42, 70, -102, -47, -22, -128, 118, -15, -15, -14, 30, 6, 20, 122, 116, 68, -75, -94, -105, -58, -125, -112, -29, 92, 110, 37, -79, 110, 52, 54, -49, -35};
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
    msg.setTimeStamp(0.647188467127);
    msg.setSource(22983U);
    msg.setSourceEntity(57U);
    msg.setDestination(2608U);
    msg.setDestinationEntity(171U);
    msg.req_id = 55362U;
    msg.status = 30U;
    msg.text.assign("KYHUTTRHNMJRXNBZNPZMGYSPDKQPGCMCZVMPSHZPQNAWRFFICWTIEHIBMLNGHBBVTUBDHQUVLQLFZAYUOOXVVEJSOTXTYFBJCGOKXYTGCROIUZWACLNVNDWPIDACFLYLCBDSOQREZEKFVIOIFLDJBOXWKLNMPEHWTTITYAYKSADCNSEVHQFSWJBZWSJUQ");

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
    msg.setTimeStamp(0.923633730157);
    msg.setSource(24478U);
    msg.setSourceEntity(116U);
    msg.setDestination(639U);
    msg.setDestinationEntity(142U);
    msg.req_id = 57095U;
    msg.status = 130U;
    msg.text.assign("SJMFZEUCQCREBTHOCMFUTJFEZSAJEDVFMBNSYLNEVQIZZVNRNGTHLNUUTTTNKILVIZVXFKDUTGYWOBKXCNXWTUJRULCICDLURJPTEAMAOFZNHIGIKGQ");

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
    msg.setTimeStamp(0.291173436656);
    msg.setSource(30213U);
    msg.setSourceEntity(202U);
    msg.setDestination(41974U);
    msg.setDestinationEntity(50U);
    msg.req_id = 34862U;
    msg.status = 120U;
    msg.text.assign("TRERPGKOFNFMNGHHCGLAFNNXIIDZPDMZYEVMWIGTZSYPPIFLJWSHEIELSODDQYZMASEKKCKRKYTVTCZXCAGVKSHTNHJGBMGPOLUDHWLNVTRIVAVFBTRXZTZDMUGTOVMPVUFANZXULIHCPSHYKBDAZOCPNFSWEBUDQWVCIBEFHCYHYUXMTOJQRQNYJQZXQSJCALE");

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
    msg.setTimeStamp(0.89912340961);
    msg.setSource(7379U);
    msg.setSourceEntity(10U);
    msg.setDestination(60678U);
    msg.setDestinationEntity(53U);
    msg.group_name.assign("JYXZTTBGIHIOMHZGCWKCCUGDBNPHOACPPIWTVNMRLMQQISRYRMDRJPHUSTKLVQXHOKBXTGKOIBENHAVJBQLWWYJOYNUQJMVWCCZQWPLQYDPJNDZAETPTLFDCBDISJMFSBIYFYXEUVGXTTWJGRLOLHUDRGLVDV");
    msg.links = 1386032020U;

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
    msg.setTimeStamp(0.19044712925);
    msg.setSource(51227U);
    msg.setSourceEntity(37U);
    msg.setDestination(60209U);
    msg.setDestinationEntity(98U);
    msg.group_name.assign("RNZQOGFIPSUXMKTXTUXSPEZVVCDJEPGWCKPADDZXMLHQRMZPVJSABEQLIFLYJRQMEZVOTZTJGMQHFDTKGSWGVCLODDMOVBYYOHFAFQIHSWYFKVFXAPPIBLGYXWDHYZFRBBEAOKJNAZNCUWJURSSTXLIBERONCGDTRBNOHIYJNHWYKUDMISRQA");
    msg.links = 3760909594U;

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
    msg.setTimeStamp(0.64340773037);
    msg.setSource(37301U);
    msg.setSourceEntity(249U);
    msg.setDestination(28156U);
    msg.setDestinationEntity(58U);
    msg.group_name.assign("ROFEKDLMJIXYIJPQIZUBVVNGSDWCGIZKZKSESDLKVPGTGAFTNENPVAFFBLQXRYVDICNYCPQFSOAHHUAINRHZDMXFVFLZRWTAYJWBDOHXPUXUBAYVPLEQW");
    msg.links = 4204906840U;

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
    msg.setTimeStamp(0.0223619928728);
    msg.setSource(28291U);
    msg.setSourceEntity(100U);
    msg.setDestination(61041U);
    msg.setDestinationEntity(137U);
    msg.groupname.assign("TEOGXWWLFVLIMOHUDPAAXUTNPIKFITXSGJESJMZLICCKHTWKDCJZVIFTDGAYDUEBREWYHEDXOWIXRRIKNWB");
    msg.action = 232U;
    msg.grouplist.assign("PCHEONJPYQYPLJIDPWNGDDOVNJESNCSTASUJQYIUKSEUSKCNZQZDXKRBZTRWFRTVTJGFIWCOAQMJXBLQOBOXRKHXNSTOSFWMTUAPZDBQQC");

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
    msg.setTimeStamp(0.980753547741);
    msg.setSource(8309U);
    msg.setSourceEntity(45U);
    msg.setDestination(5050U);
    msg.setDestinationEntity(216U);
    msg.groupname.assign("ULEAGZOWNASOXAXRROYCGIUETCJTMOVPBNQYKHHMXQLBUHIYPJJJLHUMBMSAGYRNJLNPUVFROXDEQUZTRWQCZKWUXVLYYCRTZ");
    msg.action = 212U;
    msg.grouplist.assign("GQMJFMKEOKIESOMQWFLJAPFRBHZFQFZS");

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
    msg.setTimeStamp(0.0154978616098);
    msg.setSource(45167U);
    msg.setSourceEntity(81U);
    msg.setDestination(6560U);
    msg.setDestinationEntity(175U);
    msg.groupname.assign("HSHXLNANQQNWNGDFVVZHUIAYLZUJEBGSWHECJQWPXGIZEFYVOIGEJBVWOZPJBIIHUDQDVNGQLRYJVTXOFNCBMSLFSKRTQBRAGFYMCHDIEXBWMUQYVTOEXHANCIBDLDOWKJOMGWLXUEKMWNDTOZSLZCZFNRGMYPBKFPARRWXSJPOHXZUTRAJMOKKDUGPEMSDZF");
    msg.action = 175U;
    msg.grouplist.assign("RXWKBOLCZVACVNTSAUWWQSGQJJSIIVVPNAZJLKYVLLXUTUJJPRABJHWFBKUQRHTDAOUTODFCGEQOKDMFHZSDMHLFECQEJGAGKWXPJDDHEYMZPBHTIMLGXMPXKHQIFTLRPMEYNKAFMXQWSFBPKQRCNYEXVZOINUCSOWWOYNHUCRDAIMVPTNCFBZPWDTNXGGGERRKMEGKHOMHFJZCBIIAONTCSWYYZABNYDIUUTEGBFXYRQIX");

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
    msg.setTimeStamp(0.515106135553);
    msg.setSource(33813U);
    msg.setSourceEntity(9U);
    msg.setDestination(13495U);
    msg.setDestinationEntity(205U);
    msg.value = 0.0219540293767;
    msg.sys_src = 4971U;

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
    msg.setTimeStamp(0.238063490047);
    msg.setSource(20569U);
    msg.setSourceEntity(76U);
    msg.setDestination(59654U);
    msg.setDestinationEntity(4U);
    msg.value = 0.599019822601;
    msg.sys_src = 61095U;

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
    msg.setTimeStamp(0.776385223436);
    msg.setSource(60493U);
    msg.setSourceEntity(192U);
    msg.setDestination(56701U);
    msg.setDestinationEntity(155U);
    msg.value = 0.108640788696;
    msg.sys_src = 35757U;

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
    msg.setTimeStamp(0.64999122889);
    msg.setSource(20426U);
    msg.setSourceEntity(52U);
    msg.setDestination(29826U);
    msg.setDestinationEntity(192U);
    msg.value = 0.0116032651293;
    msg.units = 69U;

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
    msg.setTimeStamp(0.371005421924);
    msg.setSource(8167U);
    msg.setSourceEntity(173U);
    msg.setDestination(22703U);
    msg.setDestinationEntity(96U);
    msg.value = 0.147075886573;
    msg.units = 166U;

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
    msg.setTimeStamp(0.493471436641);
    msg.setSource(39417U);
    msg.setSourceEntity(220U);
    msg.setDestination(38800U);
    msg.setDestinationEntity(198U);
    msg.value = 0.201067019574;
    msg.units = 198U;

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
    msg.setTimeStamp(0.229471210957);
    msg.setSource(3226U);
    msg.setSourceEntity(125U);
    msg.setDestination(32792U);
    msg.setDestinationEntity(136U);
    msg.base_lat = 0.00873743254553;
    msg.base_lon = 0.934494419009;
    msg.base_time = 0.054833461029;
    IMC::HistoricSample tmp_msg_0;
    tmp_msg_0.sys_id = 32907U;
    tmp_msg_0.priority = -54;
    tmp_msg_0.x = 32379;
    tmp_msg_0.y = -21216;
    tmp_msg_0.z = -26656;
    tmp_msg_0.t = -1376;
    IMC::ControlLoops tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.enable = 112U;
    tmp_tmp_msg_0_0.mask = 46372885U;
    tmp_tmp_msg_0_0.scope_ref = 1425244245U;
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
    msg.setTimeStamp(0.0165525425028);
    msg.setSource(55792U);
    msg.setSourceEntity(115U);
    msg.setDestination(28428U);
    msg.setDestinationEntity(95U);
    msg.base_lat = 0.321028876903;
    msg.base_lon = 0.925844283074;
    msg.base_time = 0.335035377714;

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
    msg.setTimeStamp(0.766943802592);
    msg.setSource(64355U);
    msg.setSourceEntity(23U);
    msg.setDestination(595U);
    msg.setDestinationEntity(95U);
    msg.base_lat = 0.558074330649;
    msg.base_lon = 0.433678489387;
    msg.base_time = 0.653576296622;

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
    msg.setTimeStamp(0.639607533946);
    msg.setSource(60127U);
    msg.setSourceEntity(74U);
    msg.setDestination(32445U);
    msg.setDestinationEntity(145U);
    msg.base_lat = 0.258166260816;
    msg.base_lon = 0.148993455727;
    msg.base_time = 0.617978637654;
    const char tmp_msg_0[] = {77, -50, 13, -92, 70, -47, 37, -110, 109, 23, -31, -104, 86, 100, 88, 50, -43, -28, -99, 2, 31, -58, 47, 2, -46, -99, 64, -93, -90, -79, 8, 87, -54, 84, 48, -44, 71, -24, -21, 80, 78, 14, 100, 3, 111, -66, 5, -128, -117, -70, -71, -17, -74, -34, -60, -19, -109, -43, -52, -124, 120, -114, 14, -108, -81, 78, 13, -104, -51, 93, -61, -2, 47, 62, -102, -127, 79, -81, -7, -24, 74, 88, -76, 7, -52, 45, 81};
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
    msg.setTimeStamp(0.389986757428);
    msg.setSource(64181U);
    msg.setSourceEntity(23U);
    msg.setDestination(61061U);
    msg.setDestinationEntity(227U);
    msg.base_lat = 0.0117457100665;
    msg.base_lon = 0.693929486891;
    msg.base_time = 0.19833577646;
    const char tmp_msg_0[] = {24, 57, -128, 3, -70, 7, 56, 36, 73, -65, 41};
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
    msg.setTimeStamp(0.417289437791);
    msg.setSource(10363U);
    msg.setSourceEntity(50U);
    msg.setDestination(62087U);
    msg.setDestinationEntity(5U);
    msg.base_lat = 0.836202402238;
    msg.base_lon = 0.886088060081;
    msg.base_time = 0.613679402191;
    const char tmp_msg_0[] = {-112, 124, 94, -110, -126, 97, -107, -24, 35, 62, -93, -89, 118, 6, -122, 106, 60, 47, 28, 23, 65, -49, -110, 57, -16, -117, -54, -33, -98, 117, 120, 26, -43, 10, 101, 0, -71, 86, -121, 8, 111, 92, -27, 118, -63, -125, -103, -122, 97, 77, -62, 117, 61, -126, -64, -6, 14, -4, 39, -84, 54, -97, 99, -9, -3, 80, -67, 6, -35, 16, -27, 97, 109, -18, -66, 38, -52, -119, 1, 68, 108, -123, 17, 74, -87, -100, 45, -65, -25, 47, -23, 105, 18, 64, 16, -64, 99, 121, 68, -87, -92, 95, -9, -6, 6, -76, 90, 98, -89, 18, -11, -23, -26, -2, 101, -39, -19, -1, -27, -35, 82, 106, 106, -59, -31, -72, -37, -100, -40, 119, 116, -8, -18, -19, 112, -98, -51, 52, 104, 21, -95, -93, -84, 126, -4, 118, 91, 105, 49, -98, -125, 48, -8, -113, -118, -104, -67, 88, 55, 28};
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
    msg.setTimeStamp(0.830900501014);
    msg.setSource(3581U);
    msg.setSourceEntity(205U);
    msg.setDestination(55146U);
    msg.setDestinationEntity(167U);
    msg.sys_id = 42318U;
    msg.priority = 35;
    msg.x = -26289;
    msg.y = 1642;
    msg.z = -29294;
    msg.t = 28100;
    IMC::GetWorldCoordinates tmp_msg_0;
    tmp_msg_0.tracking = 212U;
    tmp_msg_0.lat = 0.390160418584;
    tmp_msg_0.lon = 0.614864779879;
    tmp_msg_0.x = 0.646154725618;
    tmp_msg_0.y = 0.5178386765;
    tmp_msg_0.z = 0.856898069324;
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
    msg.setTimeStamp(0.663780413426);
    msg.setSource(45898U);
    msg.setSourceEntity(47U);
    msg.setDestination(33149U);
    msg.setDestinationEntity(163U);
    msg.sys_id = 16602U;
    msg.priority = 14;
    msg.x = 2632;
    msg.y = 26085;
    msg.z = 2184;
    msg.t = -1517;
    IMC::FuelLevel tmp_msg_0;
    tmp_msg_0.value = 0.450377946994;
    tmp_msg_0.confidence = 0.995664804454;
    tmp_msg_0.opmodes.assign("SFNIPAMANTUXSBGYWMPGUONIMNNTITATZOFIZQLTAHULXMBRLRCJSWQZXONYLFAAOCRXPXLIOPRWXQCDEAGSVLIBKMTWRHANPKQYKYNUROEBVWDBIVQJPJJGKSBGQFVZSBDVFJEXRDUCNKERQUHFWWUCKODMCXV");
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
    msg.setTimeStamp(0.20785832738);
    msg.setSource(20940U);
    msg.setSourceEntity(63U);
    msg.setDestination(25892U);
    msg.setDestinationEntity(2U);
    msg.sys_id = 8200U;
    msg.priority = 13;
    msg.x = -18216;
    msg.y = -27730;
    msg.z = 16452;
    msg.t = -6336;
    IMC::Imu tmp_msg_0;
    IMC::Acceleration tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.time = 0.700237095309;
    tmp_tmp_msg_0_0.x = 0.19000315821;
    tmp_tmp_msg_0_0.y = 0.728686242365;
    tmp_tmp_msg_0_0.z = 0.617017404383;
    tmp_msg_0.acceleration.set(tmp_tmp_msg_0_0);
    IMC::AngularVelocity tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.time = 0.946084932503;
    tmp_tmp_msg_0_1.x = 0.0251664906974;
    tmp_tmp_msg_0_1.y = 0.332242709377;
    tmp_tmp_msg_0_1.z = 0.055969425919;
    tmp_msg_0.angular_velocity.set(tmp_tmp_msg_0_1);
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
    msg.setTimeStamp(0.925306113788);
    msg.setSource(61607U);
    msg.setSourceEntity(18U);
    msg.setDestination(50146U);
    msg.setDestinationEntity(69U);
    msg.req_id = 19815U;
    msg.type = 24U;
    msg.max_size = 8851U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.299250124287;
    tmp_msg_0.base_lon = 0.412303350548;
    tmp_msg_0.base_time = 0.72986329415;
    IMC::RemoteCommand tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.original_source = 22042U;
    tmp_tmp_msg_0_0.destination = 12393U;
    tmp_tmp_msg_0_0.timeout = 0.397074708097;
    IMC::EstimatedFreq tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.value = 0.214546363999;
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
    msg.setTimeStamp(0.307127613469);
    msg.setSource(5798U);
    msg.setSourceEntity(9U);
    msg.setDestination(23249U);
    msg.setDestinationEntity(182U);
    msg.req_id = 32362U;
    msg.type = 121U;
    msg.max_size = 38905U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.802973419484;
    tmp_msg_0.base_lon = 0.441565816309;
    tmp_msg_0.base_time = 0.54510226282;
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
    msg.setTimeStamp(0.371609736757);
    msg.setSource(56827U);
    msg.setSourceEntity(254U);
    msg.setDestination(33620U);
    msg.setDestinationEntity(101U);
    msg.req_id = 61151U;
    msg.type = 104U;
    msg.max_size = 52944U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.0341293776649;
    tmp_msg_0.base_lon = 0.301369228815;
    tmp_msg_0.base_time = 0.169308542993;
    IMC::RemoteCommand tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.original_source = 42179U;
    tmp_tmp_msg_0_0.destination = 24328U;
    tmp_tmp_msg_0_0.timeout = 0.468284033101;
    IMC::LblRange tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.id = 63U;
    tmp_tmp_tmp_msg_0_0_0.range = 0.977073032462;
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
    msg.setTimeStamp(0.195884304201);
    msg.setSource(60374U);
    msg.setSourceEntity(232U);
    msg.setDestination(65416U);
    msg.setDestinationEntity(181U);
    msg.original_source = 48107U;
    msg.destination = 13047U;
    msg.timeout = 0.340914159328;
    IMC::FineOil tmp_msg_0;
    tmp_msg_0.value = 0.893151077423;
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
    msg.setTimeStamp(0.811221972722);
    msg.setSource(49193U);
    msg.setSourceEntity(228U);
    msg.setDestination(42046U);
    msg.setDestinationEntity(34U);
    msg.original_source = 56203U;
    msg.destination = 6268U;
    msg.timeout = 0.183214040707;
    IMC::AcousticRequest tmp_msg_0;
    tmp_msg_0.req_id = 6584U;
    tmp_msg_0.destination.assign("IIHIJHRFGHBSTQQAZOUHXAZKCTHWGJLYXASQSRJRDPNCBKXHIFNSRRMTZNVTDJSKKWNLDYKMEXMKBUVOBQBPT");
    tmp_msg_0.timeout = 0.47246988578;
    tmp_msg_0.range = 0.632118787392;
    tmp_msg_0.type = 209U;
    IMC::Pressure tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.764884728471;
    tmp_msg_0.msg.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.77305117603);
    msg.setSource(18324U);
    msg.setSourceEntity(224U);
    msg.setDestination(38122U);
    msg.setDestinationEntity(17U);
    msg.original_source = 2159U;
    msg.destination = 35722U;
    msg.timeout = 0.406823170371;
    IMC::SmsState tmp_msg_0;
    tmp_msg_0.seq = 2724944679U;
    tmp_msg_0.state = 143U;
    tmp_msg_0.error.assign("UTLANQMOCMUIWZRNPKECHTPOIVGNNTDYSUSTMKXLAGVXGPRMLYFCQFULKCBQZAWMDDMJXDYZDWWEGUXNNGCEVZOZIZVHYUOJ");
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
    msg.setTimeStamp(0.830955976147);
    msg.setSource(5361U);
    msg.setSourceEntity(227U);
    msg.setDestination(35110U);
    msg.setDestinationEntity(227U);
    msg.type = 222U;
    msg.comm_interface = 49223U;
    msg.model = 34720U;
    msg.list.assign("RYXJQCZBEUOEFMOZWKOCROQGBTTNIQNJODZHAPHLJTPJ");

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
    msg.setTimeStamp(0.906946391104);
    msg.setSource(42316U);
    msg.setSourceEntity(16U);
    msg.setDestination(35750U);
    msg.setDestinationEntity(212U);
    msg.type = 43U;
    msg.comm_interface = 10244U;
    msg.model = 51117U;
    msg.list.assign("VQCLCJSSYIGCQMDDFLHURECSWXFIDHWTYTXONBIVEPTTGWEIFHUKASORYZHWDYUXRRHJPMUUGQVDQFKJPZERBQFRTVHZYQOUFIJNIDNZRCVOMZCZGTQWEYKLWNYEYSTSVAKMPLUXXKDAKLPFOJNNYBZAXFHQMAMUHVCMFLKGAAPGHXPBIDVGOKPXJUTEGRCLAJLEDQAMNWPOGNJEWIJAZNB");

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
    msg.setTimeStamp(0.718416492546);
    msg.setSource(47341U);
    msg.setSourceEntity(55U);
    msg.setDestination(27465U);
    msg.setDestinationEntity(172U);
    msg.type = 39U;
    msg.comm_interface = 9236U;
    msg.model = 400U;
    msg.list.assign("BLLAOFACFXARPS");

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
    msg.setTimeStamp(0.725825411058);
    msg.setSource(20511U);
    msg.setSourceEntity(19U);
    msg.setDestination(15526U);
    msg.setDestinationEntity(73U);
    msg.type = 154U;
    msg.req_id = 3302685025U;
    msg.ttl = 37363U;
    msg.code = 175U;
    msg.destination.assign("NOTTUPVJQPVAAHLVEFBCQBIUXITZOGVWARGZKRSVRJTSZGEGHXKNYTMQUKBRWXPGNYDBYICLXETZHJNSLVZNKRWANHLPEIOJSBQFXZVBHWGOLMQKUYDCELUOQYCCOOCDSCRVXAFLVAT");
    msg.source.assign("DFHRTAQUOEBXDYNBYUJMUDPVTVLQKFWXLMHEFPWMJKHCVCZADDRSJXXEDUQAYOUCFAYXDBQXOOTTAVBDYQGGAFHNTSBMWUHHOLGMRBOKNKNACMPGZFJPSVLN");
    msg.acknowledge = 223U;
    msg.status = 221U;
    const char tmp_msg_0[] = {-51, -111, -90, 61, 59, 112, -109, -119, 72, -79, -124, 27, 77, -47, -16, -42, 63, 42, 71, -65, 48, 71, 93, 54, 40, -5, 105, -63, 41, -82, 120, 17, 101, -34, 86, 91, 104, 45, 38, 5, -110, -90, 35, -36, 125, 6, -32, -80, 105, -127, -74, 104, -63, -12, -65, 70, -66, 31, 41, 16, -45, -50, 47, -40, 70, -33, -96, -9, 124, -24, 74, -79, 24, -75, 81, -51, -91, 18, 9, -15, 8, -118, -123, 126, -92, -123, 85, 79, 45, 44, -27, -94, 118};
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
    msg.setTimeStamp(0.873504221582);
    msg.setSource(13610U);
    msg.setSourceEntity(179U);
    msg.setDestination(10695U);
    msg.setDestinationEntity(206U);
    msg.type = 238U;
    msg.req_id = 1567198736U;
    msg.ttl = 5845U;
    msg.code = 93U;
    msg.destination.assign("EMGQPOYFQTPPJORURBKLXLEZOWHXJVMSZDTBHPTTHBAGEANDGJLQBCITSASFLEJJGOIUWRPFODENVPIDRNQVVKQIIXMJUSYYFQSBDXWYPMMYHITNVYGTMDVCQLYLGRPGKJKUZKDWKYMESOZBFMSYEFJBHCHZXCBRLLAFWLCDJNUVMGIKIHFAWKWQNS");
    msg.source.assign("BCVIBZUOVSZMUDXHULWRNVZZUBXEMYUSGEVSTXREDDIFEDEZMIBDSQYNGBZOYWTEKJTQJCQHEMPQCXHLAGPIYTFNCGNQTPPQUAXJQKHETRAA");
    msg.acknowledge = 172U;
    msg.status = 180U;
    const char tmp_msg_0[] = {28, -46, -79, 34, -78, 81, -43, 18, 7, 5, 14, -74, 35, -57, -42, -26, 70, -125, 115, -28, -51, -68, 99, 14, 76, -15, 48, -46, 26, -83, 13, 101, 89, -47, -71, 115, -44, -71, -122, -84, 64, 22, 56, -55, 92, -78, -22, 8, -10, -88, -66, 91, 3, 49, 2, -105, -92, -76, 73, 14, 29, -25, 95, 94, 18, -61, -83, -111, 37, -13, 100, -117, 73, 64, 104, 66, 66, -101, 36, 15, 103, 41, -126, -117, -107, 3, -48, 46, -14, -125, 123, 29, -127, 97, -117, 54, 100, 23, 76, -54, 1, -30, -100, -101, -93, -93, -49, 73, -117, -123, 67, 77, -67, 120, -82, 11, 16, -12, 75, -121, 119, -20, -41, -36, -4, -115, -90, 125, -84, -2, -12, -113, 95, -60, -110, -1, -102, -81, -125, -103, 26, 31, 78, 36, -71};
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
    msg.setTimeStamp(0.0929239177312);
    msg.setSource(64050U);
    msg.setSourceEntity(130U);
    msg.setDestination(58973U);
    msg.setDestinationEntity(71U);
    msg.type = 80U;
    msg.req_id = 2867233616U;
    msg.ttl = 21707U;
    msg.code = 129U;
    msg.destination.assign("FJSHMCKURNZPCGTZTHCFYGFDAHKUXBVKTEJBLIEQLDXCRWEHCPGDTRQGNDIWRQBACERHOKFREJGVZILJP");
    msg.source.assign("JWHWKFKGRQTBROHBXJRVACAGLZRANIBEGTLILPNCSOKAFGIXCFPRSJODBVGCYSYLDEACGUUZPXENDKDOLZVBHJXXTQMJFFHQFJKMYUSSQIIIGADMKWGWYZHNUEMHQXOUIVYVMWTYRQDPJRKPZLZUEFAVRCEQANJUKHCAPVCXDRMJUBHEY");
    msg.acknowledge = 84U;
    msg.status = 124U;
    const char tmp_msg_0[] = {-19, 64, -70, -102, 85, 114, 27, -104, 6, -107, 60, -73, 79, 42, 51, -88, 18, 123, -113, -59, 47, 53, -86, -75, -9, -13, -8, -112, -87, 16, 90, -11, 91, -60, -8, 87, -107, -65, 81, 26, -106, -116, -104, -92, 115, -125, 122, 27, 108, -57, -90, 53, -51, 44, 111, -57, 30, -93, 87, -72, -82, 118, 23, 107, 18, 63, 61, 66, 17, 66, 96, 24, -52, -1, 19, 18, -72, 78, 46, -72, 0, 38, 19, 109, -55, -117, -46, -108, -12, -70, -40, -23, 72, -95, 70, -40, 49, 69, -82, -100, -127, -4, -59, -3, 74, -70, 106, 38, -15, 78, -39, -123, 94, -2, -114, 102, -27, -1, 1, 30, 23, 108, -107, -96, 70, 73, 35, -2, -73, -3, -40, -104, -107, -35, -89, 124, 25, -21, 88, 63, 71, -26, 8, 94, 2, 28, 103, -26, -22, -33, -23, -102, 116, -43, 28, -86, 52, 105, 115, 12, 110, -69, 55, -84, -14, 37, -59, 53, 126, -36, -127, -42, -97, -33, -125, -79, -103, -49, 94, -58, 22, 73, -22, 92, 25, 91, -94, 113, -85, -127, 55, -94, 93, -58, 112, 109, 21, 95};
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
    msg.setTimeStamp(0.542874996469);
    msg.setSource(63494U);
    msg.setSourceEntity(223U);
    msg.setDestination(44615U);
    msg.setDestinationEntity(86U);
    msg.id = 35U;
    msg.range = 0.704918427773;

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
    msg.setTimeStamp(0.0997199717931);
    msg.setSource(49946U);
    msg.setSourceEntity(234U);
    msg.setDestination(49084U);
    msg.setDestinationEntity(117U);
    msg.id = 126U;
    msg.range = 0.972639299646;

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
    msg.setTimeStamp(0.601769776407);
    msg.setSource(23129U);
    msg.setSourceEntity(197U);
    msg.setDestination(27265U);
    msg.setDestinationEntity(62U);
    msg.id = 25U;
    msg.range = 0.607272520668;

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
    msg.setTimeStamp(0.649013660942);
    msg.setSource(31557U);
    msg.setSourceEntity(171U);
    msg.setDestination(37190U);
    msg.setDestinationEntity(182U);
    msg.beacon.assign("NLCGNSJOKHBNSCORRJCVAEYEIQXFMJTEUMHBVMJSOWGRZDYUIVDHPCMKLCGQELJSWNOQSYRJNJXWUDNJAFDPLMLFAMTTPHWG");
    msg.lat = 0.542963773367;
    msg.lon = 0.65678874264;
    msg.depth = 0.524172111953;
    msg.query_channel = 106U;
    msg.reply_channel = 195U;
    msg.transponder_delay = 7U;

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
    msg.setTimeStamp(0.955118435526);
    msg.setSource(25525U);
    msg.setSourceEntity(78U);
    msg.setDestination(62685U);
    msg.setDestinationEntity(221U);
    msg.beacon.assign("RWDQXSNQBMUZBUOTSOJIUQLHADNXCBKXSQKRMJTVMGEKGCLRBPBAESAYHPLBVSORTHEPRBTPXIKYWWOLYATMXKMJZQRYKNZHCCSJRQ");
    msg.lat = 0.0574896313331;
    msg.lon = 0.877746892872;
    msg.depth = 0.136434518202;
    msg.query_channel = 222U;
    msg.reply_channel = 97U;
    msg.transponder_delay = 7U;

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
    msg.setTimeStamp(0.943538337828);
    msg.setSource(42537U);
    msg.setSourceEntity(140U);
    msg.setDestination(40417U);
    msg.setDestinationEntity(189U);
    msg.beacon.assign("VMLDAYXMIZIZJQHSOZTPXLOERRPLDQWOYIUESAKMOSHQBYLLHLUFYVSAGRRQOWUAZTRGPVSVSWNNDGTZVSKCAUMQGBJDCQTWCDWBCIZLOJBGXTLSKJZQPUYANNMYPGXXFERRKYYURKQMFABUHUPEXGFPPJUVBISBJVCNTIUQH");
    msg.lat = 0.664707109915;
    msg.lon = 0.394829134478;
    msg.depth = 0.429144360606;
    msg.query_channel = 10U;
    msg.reply_channel = 51U;
    msg.transponder_delay = 253U;

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
    msg.setTimeStamp(0.07453075747);
    msg.setSource(6934U);
    msg.setSourceEntity(245U);
    msg.setDestination(34267U);
    msg.setDestinationEntity(16U);
    msg.op = 33U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("MCQVCXZLCZAWWAGRYCFTTBWPBKLYLTHXFOUEKSURMBWIVBVJDMXWADZYVJFEBTJTIMLDJFDDWSXLBS");
    tmp_msg_0.lat = 0.333287895616;
    tmp_msg_0.lon = 0.805184367326;
    tmp_msg_0.depth = 0.355835190628;
    tmp_msg_0.query_channel = 62U;
    tmp_msg_0.reply_channel = 127U;
    tmp_msg_0.transponder_delay = 209U;
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
    msg.setTimeStamp(0.554062376733);
    msg.setSource(16241U);
    msg.setSourceEntity(100U);
    msg.setDestination(65088U);
    msg.setDestinationEntity(49U);
    msg.op = 186U;

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
    msg.setTimeStamp(0.647549070521);
    msg.setSource(40074U);
    msg.setSourceEntity(200U);
    msg.setDestination(64713U);
    msg.setDestinationEntity(59U);
    msg.op = 58U;

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
    msg.setTimeStamp(0.63058754429);
    msg.setSource(49783U);
    msg.setSourceEntity(173U);
    msg.setDestination(29477U);
    msg.setDestinationEntity(75U);
    IMC::Brake tmp_msg_0;
    tmp_msg_0.op = 199U;
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
    msg.setTimeStamp(0.962561079355);
    msg.setSource(14856U);
    msg.setSourceEntity(137U);
    msg.setDestination(1622U);
    msg.setDestinationEntity(190U);
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.166108287194;
    tmp_msg_0.beam_height = 0.712594025222;
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
    msg.setTimeStamp(0.227956755297);
    msg.setSource(52906U);
    msg.setSourceEntity(132U);
    msg.setDestination(36682U);
    msg.setDestinationEntity(167U);
    IMC::CurrentProfileCell tmp_msg_0;
    tmp_msg_0.pos = 0.23142066701;
    IMC::ADCPBeam tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.vel = 0.145868847765;
    tmp_tmp_msg_0_0.amp = 0.424210425886;
    tmp_tmp_msg_0_0.cor = 172U;
    tmp_msg_0.beams.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.454328341344);
    msg.setSource(50376U);
    msg.setSourceEntity(89U);
    msg.setDestination(58428U);
    msg.setDestinationEntity(41U);
    msg.op = 166U;
    msg.system.assign("LGSSSGFUFRMAVZXZKKUQZAMSLCEMRCKRVYQXFMIYKAEHDVLWFTNEQMWAA");
    msg.range = 0.737111283584;
    IMC::PowerOperation tmp_msg_0;
    tmp_msg_0.op = 74U;
    tmp_msg_0.time_remain = 0.763382127683;
    tmp_msg_0.sched_time = 0.985624842213;
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
    msg.setTimeStamp(0.504554529629);
    msg.setSource(11195U);
    msg.setSourceEntity(154U);
    msg.setDestination(49237U);
    msg.setDestinationEntity(119U);
    msg.op = 179U;
    msg.system.assign("HQSKQXJUGVFAUEKWBUUQPAKCIRMPZSLUVQDTICKUFCXMBZPATGZHIJACXDEYTJBAWKDRGAJEHQPDHURFOTNYAQXYIRDGGNKGJLKGVZBNIICVFMMXOONYWBLAFKCEROCXQDPPJHUEEZFMOHHLINDTHZVVERPSTEWSJACYZWUHDSTBJDNLPSVTEJKYIQLSXOQCBOBPYFFLQFK");
    msg.range = 0.931923276983;
    IMC::TrexCommand tmp_msg_0;
    tmp_msg_0.command = 160U;
    tmp_msg_0.goal_id.assign("TEHSXVILWVQIBGINKECMFVHDHNFYWCVSDCUDMQRRAAROLCRIOSGKPBCKZRQATORWUJPDBUOVSWEHGVFXOQSIZZWKZLTOAJTPAHNFJBKMWFNWSVBRBXKMONPCMTSEZFQYHDTRYZJVMRMTNQUQPGNJDFKXCXLYBPULEST");
    tmp_msg_0.goal_xml.assign("KPTUBWCMZSWDNQQXUQUJNMYWUEJAGPALHQQTGPGVBLLWCFFN");
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
    msg.setTimeStamp(0.693652737246);
    msg.setSource(49801U);
    msg.setSourceEntity(18U);
    msg.setDestination(8822U);
    msg.setDestinationEntity(205U);
    msg.op = 77U;
    msg.system.assign("OXDYNUCVBPEEGXTVLOZJEBJAVBYYLCZUPXQBKSYJEEJFKKYBLCJCPFZFMHWQHQCORGWGWZIPQFZMGZKVRZVYQSYWRFLRITHWKECSBBOMPINNNCLUSDEGAHAPAGHPAIKINGXZUQRYITTLGQDVCJQETYNVPIRDHZR");
    msg.range = 0.673074720996;
    IMC::Temperature tmp_msg_0;
    tmp_msg_0.time = 0.57084013514;
    tmp_msg_0.value = 0.346734776554;
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
    msg.setTimeStamp(0.0234968625178);
    msg.setSource(35442U);
    msg.setSourceEntity(132U);
    msg.setDestination(29851U);
    msg.setDestinationEntity(253U);

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
    msg.setTimeStamp(0.664457732775);
    msg.setSource(44380U);
    msg.setSourceEntity(152U);
    msg.setDestination(46052U);
    msg.setDestinationEntity(242U);

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
    msg.setTimeStamp(0.0289577804969);
    msg.setSource(53329U);
    msg.setSourceEntity(51U);
    msg.setDestination(57703U);
    msg.setDestinationEntity(43U);

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
    msg.setTimeStamp(0.57592825725);
    msg.setSource(33636U);
    msg.setSourceEntity(107U);
    msg.setDestination(56178U);
    msg.setDestinationEntity(161U);
    msg.list.assign("UFGUHIQKYMVPQFSZGVBJMKHSCTJWQADOZYEUUHRHNRKHZIELPELCKFGBMFISXBFOMDQMVLQOPWQHJLCUSMQOKXJGTGJEUAUDWVQAHTJYZHWREMT");

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
    msg.setTimeStamp(0.408129153622);
    msg.setSource(43704U);
    msg.setSourceEntity(217U);
    msg.setDestination(51366U);
    msg.setDestinationEntity(2U);
    msg.list.assign("IXAKNMXJUPQQKONLYSCNGSTJRLAXLBSHDQOOUXVAXLOWECUSUPMMVFJKQFFTFKWKRVSZZGDWNVOSZBFDTNTAGHWDKACFYQSEUQVCBUXEXPYPSPJLRMUDCKJDTAVWGSAIIRZUENJFWZTSOEIOVEHWBDCZGCRDCDBNWIPTNRHOLXRHHUJPEIIYEBZBARYLENZLNABRMFMIMPKQWQVXBIGRVEGPZUJHPALYTYYGTY");

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
    msg.setTimeStamp(0.128024834819);
    msg.setSource(36331U);
    msg.setSourceEntity(8U);
    msg.setDestination(59826U);
    msg.setDestinationEntity(20U);
    msg.list.assign("JCKTPUIIWUBPDDCKGUZRRMSQYIVQGNXKOKTBUDDPFZJGPQSWVRWOJBMLHGETGEAANWXSGBPVMFUMMUXPUIZSKAAWCFRNQTGBDWUYUH");

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
    msg.setTimeStamp(0.492439989279);
    msg.setSource(55593U);
    msg.setSourceEntity(248U);
    msg.setDestination(30347U);
    msg.setDestinationEntity(235U);
    msg.peer.assign("WSQMUPRMADAYBRVLMZIXAKLVYYHFEXYLJOKCVKLDZBHMHWADTFFWJKTTKJWERPXUBHEEDWQ");
    msg.rssi = 0.697533415019;
    msg.integrity = 52741U;

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
    msg.setTimeStamp(0.0846631516084);
    msg.setSource(2874U);
    msg.setSourceEntity(74U);
    msg.setDestination(29459U);
    msg.setDestinationEntity(68U);
    msg.peer.assign("AOHZDTNBMDZCPLTRQSQQLZUTDLOKMIBWYJSLYAYCZRYFOBZIGBYJUGSROHTHFXIDVSPXKKFWWPVTYUCGMETAZHEVSWGNKQVVQZVMPZBXERDVROUYGXLNOZJNELOHCHSQFJLNEEQGN");
    msg.rssi = 0.228544177771;
    msg.integrity = 9828U;

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
    msg.setTimeStamp(0.422901772243);
    msg.setSource(30375U);
    msg.setSourceEntity(167U);
    msg.setDestination(14572U);
    msg.setDestinationEntity(254U);
    msg.peer.assign("PYZJUDRIKVGUEPLYMLJFNETMYYVLJPEAODGQTLVHOEFISCQKXAB");
    msg.rssi = 0.936764514772;
    msg.integrity = 32036U;

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
    msg.setTimeStamp(0.409415326754);
    msg.setSource(55122U);
    msg.setSourceEntity(179U);
    msg.setDestination(41279U);
    msg.setDestinationEntity(248U);
    msg.req_id = 60825U;
    msg.destination.assign("MUSHWBEZJETLNKNFOVKCPSECOFASRDHMQZJMEAYJHXLTHXKEKGWJMWTGONVCUZLSPPNNHNIBGAPYATPCYFPFSFMSDSBOFGNQLUHRYFIGCSHTRIJNMRKPXJNLICZDBOVAPJIQTZLJQVOYXOGBHVDQDAPCKUARFTDTSWCRXEXIYWDFXDBKWYPLBEBTQMUOBXOQQLVLUGWLRUSMWFEKQXZZYVE");
    msg.timeout = 0.527150491931;
    msg.range = 0.453564635536;
    msg.type = 96U;
    IMC::UsblAnglesExtended tmp_msg_0;
    tmp_msg_0.target.assign("JPEEHFJXSTBIJTUPKLONYZBNLWIRFQMPQBVCSJGTRLDWBMSYWVDAPXRGZJZJZZECRHHLAATLELTTDHQAGOUFBTWKQROMNVXJLGQCEAQKONBFZIXGVDNRHUFRUHXORYSKLSK");
    tmp_msg_0.lbearing = 0.353424261186;
    tmp_msg_0.lelevation = 0.125129095027;
    tmp_msg_0.bearing = 0.849026187484;
    tmp_msg_0.elevation = 0.543485099716;
    tmp_msg_0.phi = 0.95894749677;
    tmp_msg_0.theta = 0.813101756513;
    tmp_msg_0.psi = 0.000721596650749;
    tmp_msg_0.accuracy = 0.0707327378114;
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
    msg.setTimeStamp(0.793770968285);
    msg.setSource(52313U);
    msg.setSourceEntity(114U);
    msg.setDestination(58921U);
    msg.setDestinationEntity(110U);
    msg.req_id = 18639U;
    msg.destination.assign("BBTWPUJAETYEWPIQBJYLMOXZDIEKGRMEMRFLXLTVAWMSSCJGLICUAFJUZLHVHSTMIZYHWJYLHIPCXJAQRQMIADZAZMHUXYK");
    msg.timeout = 0.13013547699;
    msg.range = 0.663445755827;
    msg.type = 111U;
    IMC::PushEntityParameters tmp_msg_0;
    tmp_msg_0.name.assign("DKEGKLPCPHNPPJNAOMUQPUZZUGAYCBZQILZWRAAJGAJZTGLDQEEOSVUOVCYCMEOXBEYDIZOWBXDNTIBYGXQX");
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
    msg.setTimeStamp(0.223843593848);
    msg.setSource(45438U);
    msg.setSourceEntity(181U);
    msg.setDestination(64209U);
    msg.setDestinationEntity(194U);
    msg.req_id = 26635U;
    msg.destination.assign("GWYHVQIYWCUYMZHJYMCXKFOOXNDUFUWCKNVBVATSFWYQXJPNIXZBMOXJFPSCMXWKALRQYKRJLHLKZHZFQTCFCWKYKPNMBPVGUSUTVYARKJLHOQEQCMUJGPIEEQBCPDHENSRDMFTBMTPKSQZXGSDEJYBZMDCIHSONRDGVPLVTXVBMOLIAHGWGNBSTAAKIREIODOQ");
    msg.timeout = 0.807409546397;
    msg.range = 0.408151519119;
    msg.type = 148U;
    IMC::DmsDetection tmp_msg_0;
    tmp_msg_0.ch01 = 0.135701075886;
    tmp_msg_0.ch02 = 0.10983289235;
    tmp_msg_0.ch03 = 0.144945105273;
    tmp_msg_0.ch04 = 0.957901648297;
    tmp_msg_0.ch05 = 0.579844687857;
    tmp_msg_0.ch06 = 0.711626285288;
    tmp_msg_0.ch07 = 0.635537882851;
    tmp_msg_0.ch08 = 0.00888728587971;
    tmp_msg_0.ch09 = 0.887317939162;
    tmp_msg_0.ch10 = 0.953626816832;
    tmp_msg_0.ch11 = 0.851295643372;
    tmp_msg_0.ch12 = 0.421322899204;
    tmp_msg_0.ch13 = 0.828985744482;
    tmp_msg_0.ch14 = 0.122669976258;
    tmp_msg_0.ch15 = 0.830240023716;
    tmp_msg_0.ch16 = 0.0130714061942;
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
    msg.setTimeStamp(0.452677013821);
    msg.setSource(29097U);
    msg.setSourceEntity(40U);
    msg.setDestination(47331U);
    msg.setDestinationEntity(125U);
    msg.req_id = 31035U;
    msg.type = 188U;
    msg.status = 33U;
    msg.info.assign("URVFZOXGJVIUVYEEMJEJPVWRWDSJDFAQOMDETWBIXHUXOZHZHLMDGKBPMRIYCWEGTFCWGPBCYAUHNIFMZGUINWRRQBAYBCLLKBPGKXYSAQWUFBREWZHGTYIMHXXHVLTDYNE");
    msg.range = 0.832793927108;

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
    msg.setTimeStamp(0.599957586282);
    msg.setSource(32374U);
    msg.setSourceEntity(205U);
    msg.setDestination(10801U);
    msg.setDestinationEntity(187U);
    msg.req_id = 7080U;
    msg.type = 218U;
    msg.status = 184U;
    msg.info.assign("MKLSAEPJKTXQPBIKJXGYGZRMJHNVIDJJOSYCZKVPXGAPUPHKIRZZEQRHLWNPIWMGQOMAKECWDRVNYWGNQIZBDJPKFBUDFDTVRNTTIXSSXIEXDFEQOLVBZCGHHHRLCNGBIHMIRAFDEBCURAKXCFPWKYSIFEAOECFYWGLQDXJTTBWXWCNMTTUCRFOAHXQRVSZNLNMPGOBFVFJTQOYGMSLWUNVVUZMSWUSOPKVBHTYEQYBJ");
    msg.range = 0.232589677688;

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
    msg.setTimeStamp(0.998173116495);
    msg.setSource(47870U);
    msg.setSourceEntity(78U);
    msg.setDestination(52626U);
    msg.setDestinationEntity(91U);
    msg.req_id = 61848U;
    msg.type = 168U;
    msg.status = 228U;
    msg.info.assign("OESMCJWCDEHJQNJXKJYOUFYZNOTIRXNEPKVXADCAIKSHGDGSTXOBFRUZXYNDVCWJLCTMLQYSVASWRGHWWE");
    msg.range = 0.919969540045;

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
    msg.setTimeStamp(0.16915971714);
    msg.setSource(29692U);
    msg.setSourceEntity(246U);
    msg.setDestination(38191U);
    msg.setDestinationEntity(201U);
    msg.value = -10881;

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
    msg.setTimeStamp(0.912827268929);
    msg.setSource(11264U);
    msg.setSourceEntity(234U);
    msg.setDestination(36446U);
    msg.setDestinationEntity(183U);
    msg.value = -9352;

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
    msg.setTimeStamp(0.13542935155);
    msg.setSource(31663U);
    msg.setSourceEntity(177U);
    msg.setDestination(18733U);
    msg.setDestinationEntity(225U);
    msg.value = -7836;

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
    msg.setTimeStamp(0.951865240224);
    msg.setSource(47105U);
    msg.setSourceEntity(138U);
    msg.setDestination(46138U);
    msg.setDestinationEntity(247U);
    msg.value = 0.959306963344;

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
    msg.setTimeStamp(0.31095475309);
    msg.setSource(1569U);
    msg.setSourceEntity(128U);
    msg.setDestination(32957U);
    msg.setDestinationEntity(57U);
    msg.value = 0.202789772221;

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
    msg.setTimeStamp(0.681268214572);
    msg.setSource(23770U);
    msg.setSourceEntity(208U);
    msg.setDestination(9689U);
    msg.setDestinationEntity(114U);
    msg.value = 0.124402858724;

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
    msg.setTimeStamp(0.493682236707);
    msg.setSource(56617U);
    msg.setSourceEntity(222U);
    msg.setDestination(6563U);
    msg.setDestinationEntity(80U);
    msg.value = 0.997378287385;

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
    msg.setTimeStamp(0.100656848572);
    msg.setSource(9216U);
    msg.setSourceEntity(30U);
    msg.setDestination(23862U);
    msg.setDestinationEntity(18U);
    msg.value = 0.893059597032;

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
    msg.setTimeStamp(0.935931421265);
    msg.setSource(51169U);
    msg.setSourceEntity(211U);
    msg.setDestination(43956U);
    msg.setDestinationEntity(209U);
    msg.value = 0.0150314103422;

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
    msg.setTimeStamp(0.54368435256);
    msg.setSource(42747U);
    msg.setSourceEntity(207U);
    msg.setDestination(23368U);
    msg.setDestinationEntity(2U);
    msg.validity = 43627U;
    msg.type = 241U;
    msg.utc_year = 20211U;
    msg.utc_month = 157U;
    msg.utc_day = 45U;
    msg.utc_time = 0.530327245454;
    msg.lat = 0.280570779435;
    msg.lon = 0.379629577931;
    msg.height = 0.933665656215;
    msg.satellites = 214U;
    msg.cog = 0.289898528705;
    msg.sog = 0.096245884415;
    msg.hdop = 0.435067213148;
    msg.vdop = 0.716069491922;
    msg.hacc = 0.590192273826;
    msg.vacc = 0.892348854511;

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
    msg.setTimeStamp(0.410308228552);
    msg.setSource(60169U);
    msg.setSourceEntity(100U);
    msg.setDestination(16282U);
    msg.setDestinationEntity(5U);
    msg.validity = 6887U;
    msg.type = 192U;
    msg.utc_year = 45496U;
    msg.utc_month = 39U;
    msg.utc_day = 216U;
    msg.utc_time = 0.723376168374;
    msg.lat = 0.335269050953;
    msg.lon = 0.786634636208;
    msg.height = 0.0763725034283;
    msg.satellites = 36U;
    msg.cog = 0.975896436504;
    msg.sog = 0.304057689211;
    msg.hdop = 0.776878496804;
    msg.vdop = 0.379934995413;
    msg.hacc = 0.213853519086;
    msg.vacc = 0.855366526244;

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
    msg.setTimeStamp(0.272935351533);
    msg.setSource(31237U);
    msg.setSourceEntity(230U);
    msg.setDestination(59119U);
    msg.setDestinationEntity(254U);
    msg.validity = 45272U;
    msg.type = 145U;
    msg.utc_year = 30860U;
    msg.utc_month = 187U;
    msg.utc_day = 50U;
    msg.utc_time = 0.810460982125;
    msg.lat = 0.109045002148;
    msg.lon = 0.845414911074;
    msg.height = 0.67384978565;
    msg.satellites = 69U;
    msg.cog = 0.615093784971;
    msg.sog = 0.209386645413;
    msg.hdop = 0.946503771954;
    msg.vdop = 0.253501327763;
    msg.hacc = 0.109611868344;
    msg.vacc = 0.106459649532;

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
    msg.setTimeStamp(0.507742777775);
    msg.setSource(10965U);
    msg.setSourceEntity(192U);
    msg.setDestination(3126U);
    msg.setDestinationEntity(118U);
    msg.time = 0.376564765453;
    msg.phi = 0.151566412321;
    msg.theta = 0.338120376342;
    msg.psi = 0.0836296803193;
    msg.psi_magnetic = 0.314715322134;

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
    msg.setTimeStamp(0.515315028699);
    msg.setSource(53404U);
    msg.setSourceEntity(162U);
    msg.setDestination(53238U);
    msg.setDestinationEntity(79U);
    msg.time = 0.727305371358;
    msg.phi = 0.620158690042;
    msg.theta = 0.220154371455;
    msg.psi = 0.762116007137;
    msg.psi_magnetic = 0.344325134554;

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
    msg.setTimeStamp(0.758189153434);
    msg.setSource(8684U);
    msg.setSourceEntity(137U);
    msg.setDestination(8245U);
    msg.setDestinationEntity(232U);
    msg.time = 0.623867671739;
    msg.phi = 0.607763596663;
    msg.theta = 0.515316005717;
    msg.psi = 0.810196150013;
    msg.psi_magnetic = 0.312450612589;

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
    msg.setTimeStamp(0.170887701667);
    msg.setSource(22401U);
    msg.setSourceEntity(201U);
    msg.setDestination(11433U);
    msg.setDestinationEntity(42U);
    msg.time = 0.942389183546;
    msg.x = 0.807049295231;
    msg.y = 0.269498036805;
    msg.z = 0.365120671068;
    msg.timestep = 0.027466700845;

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
    msg.setTimeStamp(0.771237924863);
    msg.setSource(40210U);
    msg.setSourceEntity(75U);
    msg.setDestination(9650U);
    msg.setDestinationEntity(236U);
    msg.time = 0.720639075844;
    msg.x = 0.538777587812;
    msg.y = 0.772635546715;
    msg.z = 0.224207944167;
    msg.timestep = 0.644882789882;

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
    msg.setTimeStamp(0.0824718847215);
    msg.setSource(24160U);
    msg.setSourceEntity(222U);
    msg.setDestination(37868U);
    msg.setDestinationEntity(186U);
    msg.time = 0.0675729036049;
    msg.x = 0.214703039995;
    msg.y = 0.205520147659;
    msg.z = 0.693399735625;
    msg.timestep = 0.605827081303;

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
    msg.setTimeStamp(0.247898268162);
    msg.setSource(19575U);
    msg.setSourceEntity(181U);
    msg.setDestination(33857U);
    msg.setDestinationEntity(204U);
    msg.time = 0.825815726003;
    msg.x = 0.317653545721;
    msg.y = 0.810929078916;
    msg.z = 0.77517770576;

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
    msg.setTimeStamp(0.480990597255);
    msg.setSource(3236U);
    msg.setSourceEntity(163U);
    msg.setDestination(802U);
    msg.setDestinationEntity(139U);
    msg.time = 0.812031880122;
    msg.x = 0.960001345392;
    msg.y = 0.44176687371;
    msg.z = 0.828730668424;

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
    msg.setTimeStamp(0.341538962811);
    msg.setSource(28750U);
    msg.setSourceEntity(68U);
    msg.setDestination(9563U);
    msg.setDestinationEntity(169U);
    msg.time = 0.859570258475;
    msg.x = 0.634948455876;
    msg.y = 0.221789964443;
    msg.z = 0.506147062548;

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
    msg.setTimeStamp(0.939947834925);
    msg.setSource(42231U);
    msg.setSourceEntity(247U);
    msg.setDestination(58320U);
    msg.setDestinationEntity(150U);
    msg.time = 0.967031665066;
    msg.x = 0.698781061339;
    msg.y = 0.886610640566;
    msg.z = 0.802120880988;

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
    msg.setTimeStamp(0.310045137904);
    msg.setSource(45264U);
    msg.setSourceEntity(56U);
    msg.setDestination(64890U);
    msg.setDestinationEntity(190U);
    msg.time = 0.992581821996;
    msg.x = 0.611471912481;
    msg.y = 0.570609503662;
    msg.z = 0.298258434981;

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
    msg.setTimeStamp(0.440894517155);
    msg.setSource(17102U);
    msg.setSourceEntity(105U);
    msg.setDestination(64511U);
    msg.setDestinationEntity(249U);
    msg.time = 0.00650327255148;
    msg.x = 0.853732309797;
    msg.y = 0.165379503088;
    msg.z = 0.460965822896;

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
    msg.setTimeStamp(0.370885921976);
    msg.setSource(14961U);
    msg.setSourceEntity(16U);
    msg.setDestination(35543U);
    msg.setDestinationEntity(88U);
    msg.time = 0.00168305109473;
    msg.x = 0.733352120258;
    msg.y = 0.915011932962;
    msg.z = 0.608144873152;

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
    msg.setTimeStamp(0.341967092115);
    msg.setSource(57592U);
    msg.setSourceEntity(9U);
    msg.setDestination(65024U);
    msg.setDestinationEntity(76U);
    msg.time = 0.549402020846;
    msg.x = 0.584150248326;
    msg.y = 0.0929228949795;
    msg.z = 0.635220954628;

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
    msg.setTimeStamp(0.215150680766);
    msg.setSource(28111U);
    msg.setSourceEntity(61U);
    msg.setDestination(49461U);
    msg.setDestinationEntity(227U);
    msg.time = 0.643086317263;
    msg.x = 0.552089516682;
    msg.y = 0.191503691835;
    msg.z = 0.642352462329;

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
    msg.setTimeStamp(0.134281188954);
    msg.setSource(10628U);
    msg.setSourceEntity(252U);
    msg.setDestination(23129U);
    msg.setDestinationEntity(182U);
    msg.validity = 176U;
    msg.x = 0.251874740584;
    msg.y = 0.3945091436;
    msg.z = 0.583457029784;

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
    msg.setTimeStamp(0.7170240307);
    msg.setSource(5178U);
    msg.setSourceEntity(93U);
    msg.setDestination(11503U);
    msg.setDestinationEntity(120U);
    msg.validity = 201U;
    msg.x = 0.426143061119;
    msg.y = 0.0788544333977;
    msg.z = 0.0391330489024;

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
    msg.setTimeStamp(0.933031927527);
    msg.setSource(46126U);
    msg.setSourceEntity(248U);
    msg.setDestination(47050U);
    msg.setDestinationEntity(74U);
    msg.validity = 145U;
    msg.x = 0.704435075135;
    msg.y = 0.65885006841;
    msg.z = 0.0653865610771;

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
    msg.setTimeStamp(0.366006186328);
    msg.setSource(52250U);
    msg.setSourceEntity(231U);
    msg.setDestination(39400U);
    msg.setDestinationEntity(172U);
    msg.validity = 30U;
    msg.x = 0.413486384587;
    msg.y = 0.801638137105;
    msg.z = 0.456496012912;

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
    msg.setTimeStamp(0.779440211181);
    msg.setSource(2011U);
    msg.setSourceEntity(15U);
    msg.setDestination(52966U);
    msg.setDestinationEntity(148U);
    msg.validity = 118U;
    msg.x = 0.869745847004;
    msg.y = 0.344372636231;
    msg.z = 0.954401937326;

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
    msg.setTimeStamp(0.393512746991);
    msg.setSource(10121U);
    msg.setSourceEntity(55U);
    msg.setDestination(24917U);
    msg.setDestinationEntity(130U);
    msg.validity = 23U;
    msg.x = 0.3548781718;
    msg.y = 0.0516816402036;
    msg.z = 0.366880242684;

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
    msg.setTimeStamp(0.813552411878);
    msg.setSource(29808U);
    msg.setSourceEntity(192U);
    msg.setDestination(38217U);
    msg.setDestinationEntity(166U);
    msg.time = 0.894880019441;
    msg.x = 0.947951139041;
    msg.y = 0.88841836998;
    msg.z = 0.452321670195;

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
    msg.setTimeStamp(0.563265356541);
    msg.setSource(36311U);
    msg.setSourceEntity(109U);
    msg.setDestination(40189U);
    msg.setDestinationEntity(182U);
    msg.time = 0.862674757792;
    msg.x = 0.489786153411;
    msg.y = 0.469542790455;
    msg.z = 0.992055704094;

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
    msg.setTimeStamp(0.0768890745861);
    msg.setSource(14829U);
    msg.setSourceEntity(196U);
    msg.setDestination(58226U);
    msg.setDestinationEntity(167U);
    msg.time = 0.76355491412;
    msg.x = 0.19513400793;
    msg.y = 0.0447157341842;
    msg.z = 0.851290494877;

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
    msg.setTimeStamp(0.575995673025);
    msg.setSource(8099U);
    msg.setSourceEntity(253U);
    msg.setDestination(18132U);
    msg.setDestinationEntity(66U);
    msg.validity = 132U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.611781353162;
    tmp_msg_0.y = 0.251761989475;
    tmp_msg_0.z = 0.549703263568;
    tmp_msg_0.phi = 0.555946308441;
    tmp_msg_0.theta = 0.922258654693;
    tmp_msg_0.psi = 0.38491474403;
    msg.location.push_back(tmp_msg_0);
    IMC::BeamConfig tmp_msg_1;
    tmp_msg_1.beam_width = 0.588063683559;
    tmp_msg_1.beam_height = 0.909039795818;
    msg.beam_config.push_back(tmp_msg_1);
    msg.value = 0.088088762577;

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
    msg.setTimeStamp(0.292326519873);
    msg.setSource(62087U);
    msg.setSourceEntity(231U);
    msg.setDestination(39211U);
    msg.setDestinationEntity(36U);
    msg.validity = 68U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.796444263366;
    tmp_msg_0.y = 0.100422534668;
    tmp_msg_0.z = 0.828890303793;
    tmp_msg_0.phi = 0.0461917389618;
    tmp_msg_0.theta = 0.507603886967;
    tmp_msg_0.psi = 0.0410330762991;
    msg.location.push_back(tmp_msg_0);
    IMC::BeamConfig tmp_msg_1;
    tmp_msg_1.beam_width = 0.934454485403;
    tmp_msg_1.beam_height = 0.82278177523;
    msg.beam_config.push_back(tmp_msg_1);
    msg.value = 0.147795331196;

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
    msg.setTimeStamp(0.571568062882);
    msg.setSource(36423U);
    msg.setSourceEntity(167U);
    msg.setDestination(14377U);
    msg.setDestinationEntity(66U);
    msg.validity = 165U;
    msg.value = 0.0648998696648;

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
    msg.setTimeStamp(0.25510698953);
    msg.setSource(13370U);
    msg.setSourceEntity(1U);
    msg.setDestination(65517U);
    msg.setDestinationEntity(162U);
    msg.time = 0.8907238176;
    msg.value = 0.959439696409;

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
    msg.setTimeStamp(0.143056770093);
    msg.setSource(35554U);
    msg.setSourceEntity(192U);
    msg.setDestination(4346U);
    msg.setDestinationEntity(23U);
    msg.time = 0.716553290037;
    msg.value = 0.0386420185042;

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
    msg.setTimeStamp(0.687048900993);
    msg.setSource(46734U);
    msg.setSourceEntity(15U);
    msg.setDestination(826U);
    msg.setDestinationEntity(54U);
    msg.time = 0.376215029236;
    msg.value = 0.000471712249423;

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
    msg.setTimeStamp(0.0369405322255);
    msg.setSource(1078U);
    msg.setSourceEntity(190U);
    msg.setDestination(50193U);
    msg.setDestinationEntity(208U);
    msg.value = 0.454999948343;

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
    msg.setTimeStamp(0.256075664157);
    msg.setSource(1234U);
    msg.setSourceEntity(71U);
    msg.setDestination(20161U);
    msg.setDestinationEntity(65U);
    msg.value = 0.326732042598;

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
    msg.setTimeStamp(0.0362833494668);
    msg.setSource(43783U);
    msg.setSourceEntity(181U);
    msg.setDestination(64655U);
    msg.setDestinationEntity(111U);
    msg.value = 0.751770973785;

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
    msg.setTimeStamp(0.850012445272);
    msg.setSource(28790U);
    msg.setSourceEntity(152U);
    msg.setDestination(45137U);
    msg.setDestinationEntity(162U);
    msg.value = 0.410844244472;

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
    msg.setTimeStamp(0.665685006489);
    msg.setSource(7025U);
    msg.setSourceEntity(89U);
    msg.setDestination(35398U);
    msg.setDestinationEntity(198U);
    msg.value = 0.296685429948;

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
    msg.setTimeStamp(0.111454672036);
    msg.setSource(9750U);
    msg.setSourceEntity(213U);
    msg.setDestination(40975U);
    msg.setDestinationEntity(75U);
    msg.value = 0.182243356793;

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
    msg.setTimeStamp(0.35872511335);
    msg.setSource(21585U);
    msg.setSourceEntity(66U);
    msg.setDestination(31615U);
    msg.setDestinationEntity(75U);
    msg.value = 0.0785710599928;

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
    msg.setTimeStamp(0.129617245693);
    msg.setSource(14859U);
    msg.setSourceEntity(112U);
    msg.setDestination(48486U);
    msg.setDestinationEntity(20U);
    msg.value = 0.571349705684;

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
    msg.setTimeStamp(0.37109404288);
    msg.setSource(14756U);
    msg.setSourceEntity(189U);
    msg.setDestination(33088U);
    msg.setDestinationEntity(28U);
    msg.value = 0.0282423376407;

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
    msg.setTimeStamp(0.34388479249);
    msg.setSource(45173U);
    msg.setSourceEntity(151U);
    msg.setDestination(23545U);
    msg.setDestinationEntity(32U);
    msg.value = 0.575612289305;

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
    msg.setTimeStamp(0.129655906429);
    msg.setSource(55580U);
    msg.setSourceEntity(35U);
    msg.setDestination(12637U);
    msg.setDestinationEntity(24U);
    msg.value = 0.703368164536;

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
    msg.setTimeStamp(0.697363254326);
    msg.setSource(43264U);
    msg.setSourceEntity(88U);
    msg.setDestination(56818U);
    msg.setDestinationEntity(10U);
    msg.value = 0.0253951439947;

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
    msg.setTimeStamp(0.315629984299);
    msg.setSource(26851U);
    msg.setSourceEntity(227U);
    msg.setDestination(64147U);
    msg.setDestinationEntity(253U);
    msg.value = 0.0825641598112;

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
    msg.setTimeStamp(0.780526976223);
    msg.setSource(29477U);
    msg.setSourceEntity(214U);
    msg.setDestination(43278U);
    msg.setDestinationEntity(194U);
    msg.value = 0.413660033543;

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
    msg.setTimeStamp(0.0184951485177);
    msg.setSource(38205U);
    msg.setSourceEntity(224U);
    msg.setDestination(48730U);
    msg.setDestinationEntity(169U);
    msg.value = 0.11861157575;

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
    msg.setTimeStamp(0.463077889025);
    msg.setSource(38154U);
    msg.setSourceEntity(104U);
    msg.setDestination(62470U);
    msg.setDestinationEntity(184U);
    msg.value = 0.647049295904;

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
    msg.setTimeStamp(0.2694511554);
    msg.setSource(51783U);
    msg.setSourceEntity(63U);
    msg.setDestination(59004U);
    msg.setDestinationEntity(16U);
    msg.value = 0.92126898189;

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
    msg.setTimeStamp(0.8026820423);
    msg.setSource(24845U);
    msg.setSourceEntity(180U);
    msg.setDestination(44773U);
    msg.setDestinationEntity(108U);
    msg.value = 0.634341137129;

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
    msg.setTimeStamp(0.156189670573);
    msg.setSource(47853U);
    msg.setSourceEntity(169U);
    msg.setDestination(24879U);
    msg.setDestinationEntity(189U);
    msg.value = 0.82476926425;

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
    msg.setTimeStamp(0.589247110449);
    msg.setSource(9985U);
    msg.setSourceEntity(94U);
    msg.setDestination(2124U);
    msg.setDestinationEntity(201U);
    msg.value = 0.495732350718;

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
    msg.setTimeStamp(0.245692535364);
    msg.setSource(47303U);
    msg.setSourceEntity(96U);
    msg.setDestination(29350U);
    msg.setDestinationEntity(18U);
    msg.value = 0.640658223479;

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
    msg.setTimeStamp(0.51980791095);
    msg.setSource(25327U);
    msg.setSourceEntity(66U);
    msg.setDestination(23010U);
    msg.setDestinationEntity(175U);
    msg.direction = 0.348070265745;
    msg.speed = 0.463079768098;
    msg.turbulence = 0.823202471007;

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
    msg.setTimeStamp(0.476962430818);
    msg.setSource(30182U);
    msg.setSourceEntity(144U);
    msg.setDestination(54189U);
    msg.setDestinationEntity(148U);
    msg.direction = 0.940204966012;
    msg.speed = 0.459697811538;
    msg.turbulence = 0.148676670721;

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
    msg.setTimeStamp(0.199382469368);
    msg.setSource(24667U);
    msg.setSourceEntity(17U);
    msg.setDestination(57438U);
    msg.setDestinationEntity(23U);
    msg.direction = 0.456002621069;
    msg.speed = 0.711550614101;
    msg.turbulence = 0.39074779854;

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
    msg.setTimeStamp(0.0025580343081);
    msg.setSource(35354U);
    msg.setSourceEntity(225U);
    msg.setDestination(39991U);
    msg.setDestinationEntity(245U);
    msg.value = 0.194627466732;

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
    msg.setTimeStamp(0.977760723626);
    msg.setSource(61492U);
    msg.setSourceEntity(52U);
    msg.setDestination(21313U);
    msg.setDestinationEntity(12U);
    msg.value = 0.921578111271;

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
    msg.setTimeStamp(0.188486100605);
    msg.setSource(45570U);
    msg.setSourceEntity(100U);
    msg.setDestination(20424U);
    msg.setDestinationEntity(25U);
    msg.value = 0.946941406432;

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
    msg.setTimeStamp(0.882565082578);
    msg.setSource(9801U);
    msg.setSourceEntity(168U);
    msg.setDestination(54654U);
    msg.setDestinationEntity(93U);
    msg.value.assign("FVBYIDUGDILAYPPEXZQOSTDXB");

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
    msg.setTimeStamp(0.785670719915);
    msg.setSource(9662U);
    msg.setSourceEntity(198U);
    msg.setDestination(36380U);
    msg.setDestinationEntity(210U);
    msg.value.assign("IUPDZXLFMDOZAVJAJELGMVJKGFRJETMBUUVVBEVYJHJPBCYXAXNDGTDSKYARFOQZNQJLUIWFDOIIRSIMFSCDBNK");

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
    msg.setTimeStamp(0.630622016146);
    msg.setSource(5781U);
    msg.setSourceEntity(112U);
    msg.setDestination(60010U);
    msg.setDestinationEntity(107U);
    msg.value.assign("STABGKILHNXRGACBHDNKLNIUDVCLQML");

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
    msg.setTimeStamp(0.190719437323);
    msg.setSource(25606U);
    msg.setSourceEntity(51U);
    msg.setDestination(60293U);
    msg.setDestinationEntity(167U);
    const char tmp_msg_0[] = {9, 92, 51, 26, 87, -35, -21, 22, 6, 67, -10, 113, 64, -121, 45, -94, -37, -23, 0, 118, -66, 111, 65, 103, -124, -16, -7, 0, 124, 53, 27, -29, -20, 31, 25, -36, 72, 84, -6, 30, -68, -87, -84, -111, -65, 16, 116, 18, -117, -47, -19, -8, -49, 77, -39, -81, -122, -70, -20, 73, 9, -15, 12, -58, -81, 113, 86, 79, -109, 12, 93, 69, 44, -41, 82, 72, 71, 87, -118, -64, 31, -24, 15, -9, 110, 72, 124, 27, 54, -127, 123, -90, -102, -16, -81, 118, -101, 102, -90, -53, -35, 55, -17, 74, -19, 81, 27, -34, -45, -43, -57, 6, -28, 98, -128, 35, -126, -37, -104, -124, -5, -100, 85, 87, -89, 37, -66, 1, -62, -68, 37, -1, -54, -79, 125, 85, -37, 25, 115, -101, 4, 66, -92, -112, 19, -127, 51, 38, -6, 27, -126, 41, 5, 61, 85, -18, -101, 108, 16, 99, 98, 102, -81, -127, -42, 115, 108, -44, 41, -48, 118, -110, 30};
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
    msg.setTimeStamp(0.528678656748);
    msg.setSource(16794U);
    msg.setSourceEntity(64U);
    msg.setDestination(62885U);
    msg.setDestinationEntity(144U);
    const char tmp_msg_0[] = {8, 63, -18, 83, -84, -60, 53, -112, -9, -116, 118, 121, 105, -32, 109, -115, -80, 9, -37, -46, -61, 102, -82, 45, -57, -30, 114, 29, -68, -126, 65, -109, -124, -76, 37, -22, -45, 85, 1, 125, -118, -120, 126, 117, 49, -48, 125, 53, -13, -53, -94, 58, -105, -62, 28, -68, -6, 124, 91, 112, 126, 11, 37, -102, 18, -111, -12, 39, 3, 107, 24, 115, -59, 66, 116, 77, -50, -106, -117, -43, 5, 34, -33, -51, 25, -53, -58, -125, 121, -111, -83, -72, 94, -3, -21, 2, 74, 95, -7, -4, 125, 66, -42, -112, 45, -89, -19, 92, 70, 99, -30, -52, -20, 49, 62, -68, 69, 68, -76, 4, 84, -82, 73, -4, -2, 56, -12, 0, 4, 81, -89, 79, 98, 8, 83, 8, -40, 8, 47, -79, 51, -93, 33, -15, -11, -86, -58, -26, -82, -90, -128, -124, -70, 56, 39, 43, -25, 49, 29, 110, -103, -28, -120, -45, 57, 110, 32, -39, -27, -9, -55, 14, 88, 56, 41, -15, 3, 125, 79, -55, -124, -103, 24, -121, -32, 70, -30, 98, 31, -4, 106, 36, -34, -74, 58, -106, 68, 76, -24, -64, 124, 47, -105, -87, -81, -103, -34, 58, -80, 87, -85, -7, -28, 116};
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
    msg.setTimeStamp(0.451542387324);
    msg.setSource(26230U);
    msg.setSourceEntity(121U);
    msg.setDestination(30841U);
    msg.setDestinationEntity(54U);
    const char tmp_msg_0[] = {107, -16, 98, 13, 120, -17, -35, -97, 19, 59, -42, 96, -57, 92, -126, 118, -101, 99, 92, 70, 77, 111, -27, -126, -43, 43, -84, -71, -107, -42, 101, 67, -77, 51, -19, -58, -24, -78, -71, -47, 120, -90, -57, -120, 43, 58, 3, -27, -120, -109, -62, -89, -71, -105, -120, -20, -85, -71, 16, -33, -44, 64, -33, 10, -87, -70, -1, 22, -7, 52, -66, 3, -127, 99, -12, -86, -116, -51, 53, 49, -46, -82, -91, 112, 115, -15, -1, -90, 48, -96, 83, 3, -47, -112, -71, -111, 109, -75, 11, 33, 9, -68, -4, 64, -25, 11, -30, 94, 8, 7, 29, 8, -49, -117, -68, 1, 106, 115, -45, 95, -77, 9, 61, 33, 118, 25, -107, 115, 55, 64, 16, -3, -84, -27, -30, -88, 40, 74, 110, 52, -67, -70, -114, -46, 68, 91, 110, -74, -54, -81, 67, -66, 86, 123, 89, 32, 54, 1, 70, 24};
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
    msg.setTimeStamp(0.654271742797);
    msg.setSource(26030U);
    msg.setSourceEntity(140U);
    msg.setDestination(281U);
    msg.setDestinationEntity(245U);
    msg.value = 0.58236214678;

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
    msg.setTimeStamp(0.0646656200395);
    msg.setSource(58601U);
    msg.setSourceEntity(180U);
    msg.setDestination(47714U);
    msg.setDestinationEntity(141U);
    msg.value = 0.295695038648;

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
    msg.setTimeStamp(0.73746979772);
    msg.setSource(5504U);
    msg.setSourceEntity(198U);
    msg.setDestination(63959U);
    msg.setDestinationEntity(227U);
    msg.value = 0.342946948336;

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
    msg.setTimeStamp(0.865797423926);
    msg.setSource(45333U);
    msg.setSourceEntity(50U);
    msg.setDestination(21826U);
    msg.setDestinationEntity(164U);
    msg.type = 163U;
    msg.frequency = 2200220474U;
    msg.min_range = 29944U;
    msg.max_range = 27435U;
    msg.bits_per_point = 183U;
    msg.scale_factor = 0.306327463414;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.620438722682;
    tmp_msg_0.beam_height = 0.74020138376;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {68, 22, 39, 90, 105, 51, -31, 33, 35, 48, -26, 100, -13, 70, -37, -43, 84, -87, 124, -5, -8, -41, -86, -113, -76, -75, 9, 109, -97, 107, -73, 48, -90, -91, 54, -114, 65, 87, -40, -78, -68, 32, 61, 69, -66, -73, 23, 46, -32, -93, -73, 3};
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
    msg.setTimeStamp(0.241470553438);
    msg.setSource(40764U);
    msg.setSourceEntity(111U);
    msg.setDestination(54987U);
    msg.setDestinationEntity(61U);
    msg.type = 207U;
    msg.frequency = 2071073410U;
    msg.min_range = 29534U;
    msg.max_range = 5666U;
    msg.bits_per_point = 197U;
    msg.scale_factor = 0.879728754362;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.214218907355;
    tmp_msg_0.beam_height = 0.527670051;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {-105, 7, -84, 79, -63, 49, 75, 94, -41, 83, 20, -115, 86, 5, -21, 123, -106, -13, 59, 69, -5, -57, -111, -104, 9, -31, 78, -48, -10, 126, -34, 124, -17, 25, 5, -113, -7, -49, 101, 59, 111, -125, 97, -52, 60, 66, 56, 38, 106, 52, 30, 106, 108, -82, 114, -65, 42, -26, -42, 8, 78, -10, -85, 35, -40, -84, -29, 16, -62, -115, 55, 77, 98, -5, 4, 2, 8, 30, 42, -1, -124, -76, 38, -37, -11, -37, -23, 4, -18, -53, 63, 31, 3, -38, 95, -87, -122, 7, -101, 110, -48, -26, 92, 10, 83, -109, -107, 27, -115, -52, 66, 108, 112, -66, -127, 124, -122, 117, -51, -55, 126, -80, -110, 107, 43, 18, -95, 43, -32, -122, 18, 49, -2, -127, 50, -98, -10, 8, 50, 109, -42, -77, 79, 88, 10, 59, 30, 62, -106, 81, -70, 77, 12, 41, 34, -57, 78, -11, 49, -90, 58, 95, -91, 37, 21, 8, 105, 40, 56, -121, -49, 36, -48, -13};
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
    msg.setTimeStamp(0.480241824578);
    msg.setSource(45146U);
    msg.setSourceEntity(223U);
    msg.setDestination(53975U);
    msg.setDestinationEntity(118U);
    msg.type = 195U;
    msg.frequency = 246272719U;
    msg.min_range = 27868U;
    msg.max_range = 52484U;
    msg.bits_per_point = 100U;
    msg.scale_factor = 0.146844240019;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.841097618151;
    tmp_msg_0.beam_height = 0.481216867686;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {-55, -49, -40, -89, 115, 37, -91, 81, -50, 105, -20, 33, -92, -83, 86, -43, -96, 102, -72, 97, -5, 124, 36, -23, 56, -123, -110, 37, -47, 121, -52, 6, 74, -77, 54, -15, 2, 126, -44, -62, 17, 124, -107, -56, -55, 82, -68, 41, -5, -126, -27, 64, -99, 5, -4, 29, 4, 64, 91, 48, -38, -66, -127, -29, 68, -41, -22, -49, -32, 37, 101, -124, -124, -16, -16, -87, 93, 83, 95, -65, -60, 49, -79, 90, 116, 118, -43, -1, -116, -119, -105, 32, 38, -121, 0, 28, -113, -93, -19, 27, -7, 11, 0, 112, 45, -117, 123, -22, -112, -28};
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
    msg.setTimeStamp(0.777189871304);
    msg.setSource(61027U);
    msg.setSourceEntity(145U);
    msg.setDestination(61304U);
    msg.setDestinationEntity(196U);

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
    msg.setTimeStamp(0.732602610359);
    msg.setSource(51354U);
    msg.setSourceEntity(139U);
    msg.setDestination(24156U);
    msg.setDestinationEntity(238U);

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
    msg.setTimeStamp(0.0340660510004);
    msg.setSource(21027U);
    msg.setSourceEntity(61U);
    msg.setDestination(44821U);
    msg.setDestinationEntity(215U);

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
    msg.setTimeStamp(0.302932203506);
    msg.setSource(36696U);
    msg.setSourceEntity(140U);
    msg.setDestination(45577U);
    msg.setDestinationEntity(49U);
    msg.op = 182U;

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
    msg.setTimeStamp(0.653549036798);
    msg.setSource(45518U);
    msg.setSourceEntity(170U);
    msg.setDestination(4994U);
    msg.setDestinationEntity(9U);
    msg.op = 156U;

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
    msg.setTimeStamp(0.0621919167743);
    msg.setSource(50209U);
    msg.setSourceEntity(5U);
    msg.setDestination(36937U);
    msg.setDestinationEntity(84U);
    msg.op = 33U;

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
    msg.setTimeStamp(0.837001969584);
    msg.setSource(8743U);
    msg.setSourceEntity(151U);
    msg.setDestination(60650U);
    msg.setDestinationEntity(234U);
    msg.value = 0.243518583398;
    msg.confidence = 0.880800471921;
    msg.opmodes.assign("OLFBAUSIBDSFGABMFVHNUNGNDOBLQHAPDZEXCIHONNIYVGKIBPFNAJUROJDGSZGIMXFQHIEVRJHOUHQWCXKZZBWBYKUMWKMLCAPUAYOTZQLNXJYFGNDQXIALRJBCMQAPKRTTVUWUWVVSGTEVWWXLDDHWMRIJZRXXORBLEXUYCNYXCDCDEMLWORAOEJSQMOKHYGPHGHNQCFFEYCKKWJTSPYMAVJFZEEYP");

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
    msg.setTimeStamp(0.00768227229633);
    msg.setSource(50944U);
    msg.setSourceEntity(98U);
    msg.setDestination(49558U);
    msg.setDestinationEntity(65U);
    msg.value = 0.713685893737;
    msg.confidence = 0.34449544027;
    msg.opmodes.assign("RUKWQZWVAIAPJETPOGKYPNUVQAOYGNMHCJRLWVMBOAVEKGIWPOXLEKEBPZIRTKZYDABODCQWSZSDXBQONNICTPBFLWRXIEVMYFMNFHXMNTCNZOVLCXYMEXRARHXOVDUVTICOBVGKUQNLSKXBNHYTRI");

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
    msg.setTimeStamp(0.381550080149);
    msg.setSource(4835U);
    msg.setSourceEntity(126U);
    msg.setDestination(60086U);
    msg.setDestinationEntity(198U);
    msg.value = 0.0720814216726;
    msg.confidence = 0.24960787758;
    msg.opmodes.assign("WDHXEAMRLEWLWELKCATMIDGJWNYQZKITEQQMQJPFNRNNSZRHLEMDQGGIFXMFTFLRPXMIUMHZMBDVAUONBBZRTQKURDCPXPDSFQFHVDILGYUXROBJPYSDZNTNVAXARZKHKGOSJEKEIOVYSUKFXXUJIMCAZSGBWHVOOWUBASCDVHSHPGFFJCCOWIQVVVTNLBZRZJLJLSSWTGVNFYCCIYMYELON");

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
    msg.setTimeStamp(0.145861295362);
    msg.setSource(2905U);
    msg.setSourceEntity(205U);
    msg.setDestination(15476U);
    msg.setDestinationEntity(106U);
    msg.itow = 1690774563U;
    msg.lat = 0.736588276321;
    msg.lon = 0.0581584424047;
    msg.height_ell = 0.825785355328;
    msg.height_sea = 0.361482913854;
    msg.hacc = 0.411632875436;
    msg.vacc = 0.938206435729;
    msg.vel_n = 0.220110839617;
    msg.vel_e = 0.997600464716;
    msg.vel_d = 0.477607992649;
    msg.speed = 0.975568825736;
    msg.gspeed = 0.949405812139;
    msg.heading = 0.814629668913;
    msg.sacc = 0.975076194279;
    msg.cacc = 0.496145422571;

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
    msg.setTimeStamp(0.478789571971);
    msg.setSource(19341U);
    msg.setSourceEntity(146U);
    msg.setDestination(48778U);
    msg.setDestinationEntity(48U);
    msg.itow = 1988185111U;
    msg.lat = 0.929045782103;
    msg.lon = 0.364552449852;
    msg.height_ell = 0.687198442585;
    msg.height_sea = 0.168706691427;
    msg.hacc = 0.674853025027;
    msg.vacc = 0.790202544146;
    msg.vel_n = 0.76749757119;
    msg.vel_e = 0.126191269847;
    msg.vel_d = 0.848456485506;
    msg.speed = 0.678768114981;
    msg.gspeed = 0.734415334189;
    msg.heading = 0.782752004391;
    msg.sacc = 0.101840217817;
    msg.cacc = 0.13548453539;

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
    msg.setTimeStamp(0.455573115898);
    msg.setSource(48395U);
    msg.setSourceEntity(155U);
    msg.setDestination(11962U);
    msg.setDestinationEntity(223U);
    msg.itow = 1389948263U;
    msg.lat = 0.379589829859;
    msg.lon = 0.370192718727;
    msg.height_ell = 0.00957953903267;
    msg.height_sea = 0.710844543308;
    msg.hacc = 0.541888827384;
    msg.vacc = 0.512361159255;
    msg.vel_n = 0.995764973341;
    msg.vel_e = 0.425282370298;
    msg.vel_d = 0.170514773169;
    msg.speed = 0.639047591859;
    msg.gspeed = 0.0741320120863;
    msg.heading = 0.453501070759;
    msg.sacc = 0.288455136078;
    msg.cacc = 0.411861634652;

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
    msg.setTimeStamp(0.956701761436);
    msg.setSource(39799U);
    msg.setSourceEntity(75U);
    msg.setDestination(6101U);
    msg.setDestinationEntity(100U);
    msg.id = 10U;
    msg.value = 0.571939354195;

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
    msg.setTimeStamp(0.177760495074);
    msg.setSource(3920U);
    msg.setSourceEntity(202U);
    msg.setDestination(26053U);
    msg.setDestinationEntity(210U);
    msg.id = 221U;
    msg.value = 0.32787771719;

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
    msg.setTimeStamp(0.23472557773);
    msg.setSource(64814U);
    msg.setSourceEntity(250U);
    msg.setDestination(2265U);
    msg.setDestinationEntity(227U);
    msg.id = 121U;
    msg.value = 0.646482273714;

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
    msg.setTimeStamp(0.564687451852);
    msg.setSource(46649U);
    msg.setSourceEntity(217U);
    msg.setDestination(11176U);
    msg.setDestinationEntity(76U);
    msg.x = 0.180966166064;
    msg.y = 0.542540419688;
    msg.z = 0.448767597752;
    msg.phi = 0.879857450581;
    msg.theta = 0.40779666478;
    msg.psi = 0.690503309268;

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
    msg.setTimeStamp(0.26327851098);
    msg.setSource(61416U);
    msg.setSourceEntity(99U);
    msg.setDestination(12139U);
    msg.setDestinationEntity(161U);
    msg.x = 0.11083650367;
    msg.y = 0.631796546541;
    msg.z = 0.566281039525;
    msg.phi = 0.164728884858;
    msg.theta = 0.0155407966681;
    msg.psi = 0.498918659907;

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
    msg.setTimeStamp(0.438633674448);
    msg.setSource(31400U);
    msg.setSourceEntity(44U);
    msg.setDestination(54543U);
    msg.setDestinationEntity(145U);
    msg.x = 0.629555188795;
    msg.y = 0.0741512445769;
    msg.z = 0.937445436877;
    msg.phi = 0.784053867113;
    msg.theta = 0.949485430024;
    msg.psi = 0.728082316052;

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
    msg.setTimeStamp(0.041410807656);
    msg.setSource(34337U);
    msg.setSourceEntity(111U);
    msg.setDestination(37680U);
    msg.setDestinationEntity(184U);
    msg.beam_width = 0.857383808531;
    msg.beam_height = 0.892897494194;

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
    msg.setTimeStamp(0.445215935305);
    msg.setSource(27892U);
    msg.setSourceEntity(187U);
    msg.setDestination(22986U);
    msg.setDestinationEntity(68U);
    msg.beam_width = 0.500013756315;
    msg.beam_height = 0.808750281075;

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
    msg.setTimeStamp(0.385277596247);
    msg.setSource(65518U);
    msg.setSourceEntity(74U);
    msg.setDestination(56475U);
    msg.setDestinationEntity(120U);
    msg.beam_width = 0.242025111121;
    msg.beam_height = 0.902298310564;

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
    msg.setTimeStamp(0.722849227654);
    msg.setSource(52742U);
    msg.setSourceEntity(146U);
    msg.setDestination(19210U);
    msg.setDestinationEntity(237U);
    msg.sane = 245U;

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
    msg.setTimeStamp(0.710880399702);
    msg.setSource(46851U);
    msg.setSourceEntity(118U);
    msg.setDestination(5028U);
    msg.setDestinationEntity(82U);
    msg.sane = 53U;

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
    msg.setTimeStamp(0.203134127598);
    msg.setSource(51821U);
    msg.setSourceEntity(5U);
    msg.setDestination(50511U);
    msg.setDestinationEntity(109U);
    msg.sane = 144U;

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
    msg.setTimeStamp(0.849505840366);
    msg.setSource(19979U);
    msg.setSourceEntity(117U);
    msg.setDestination(17700U);
    msg.setDestinationEntity(162U);
    msg.value = 0.886430616332;

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
    msg.setTimeStamp(0.581597386218);
    msg.setSource(35435U);
    msg.setSourceEntity(154U);
    msg.setDestination(7520U);
    msg.setDestinationEntity(130U);
    msg.value = 0.0732075862449;

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
    msg.setTimeStamp(0.941657945926);
    msg.setSource(36368U);
    msg.setSourceEntity(134U);
    msg.setDestination(7533U);
    msg.setDestinationEntity(176U);
    msg.value = 0.86974806657;

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
    msg.setTimeStamp(0.453409054125);
    msg.setSource(47539U);
    msg.setSourceEntity(241U);
    msg.setDestination(29860U);
    msg.setDestinationEntity(46U);
    msg.value = 0.0176703835612;

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
    msg.setTimeStamp(0.436731052003);
    msg.setSource(4557U);
    msg.setSourceEntity(165U);
    msg.setDestination(18155U);
    msg.setDestinationEntity(77U);
    msg.value = 0.178878746224;

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
    msg.setTimeStamp(0.284542950766);
    msg.setSource(44710U);
    msg.setSourceEntity(3U);
    msg.setDestination(51183U);
    msg.setDestinationEntity(77U);
    msg.value = 0.148201043497;

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
    msg.setTimeStamp(0.513860606772);
    msg.setSource(30244U);
    msg.setSourceEntity(86U);
    msg.setDestination(4586U);
    msg.setDestinationEntity(68U);
    msg.value = 0.992764758217;

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
    msg.setTimeStamp(0.263582509087);
    msg.setSource(25369U);
    msg.setSourceEntity(88U);
    msg.setDestination(50218U);
    msg.setDestinationEntity(142U);
    msg.value = 0.00269343525408;

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
    msg.setTimeStamp(0.796210385214);
    msg.setSource(11938U);
    msg.setSourceEntity(238U);
    msg.setDestination(12203U);
    msg.setDestinationEntity(152U);
    msg.value = 0.166471817679;

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
    msg.setTimeStamp(0.159079088475);
    msg.setSource(4288U);
    msg.setSourceEntity(115U);
    msg.setDestination(10864U);
    msg.setDestinationEntity(54U);
    msg.value = 0.578628299128;

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
    msg.setTimeStamp(0.365780098478);
    msg.setSource(48854U);
    msg.setSourceEntity(206U);
    msg.setDestination(14834U);
    msg.setDestinationEntity(90U);
    msg.value = 0.35851041692;

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
    msg.setTimeStamp(0.572916013009);
    msg.setSource(30618U);
    msg.setSourceEntity(92U);
    msg.setDestination(52629U);
    msg.setDestinationEntity(168U);
    msg.value = 0.0992467723474;

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
    msg.setTimeStamp(0.763785527273);
    msg.setSource(20843U);
    msg.setSourceEntity(52U);
    msg.setDestination(42559U);
    msg.setDestinationEntity(41U);
    msg.value = 0.24496847085;

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
    msg.setTimeStamp(0.224543013471);
    msg.setSource(50543U);
    msg.setSourceEntity(105U);
    msg.setDestination(13452U);
    msg.setDestinationEntity(199U);
    msg.value = 0.00433067862302;

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
    msg.setTimeStamp(0.0453796770915);
    msg.setSource(32827U);
    msg.setSourceEntity(209U);
    msg.setDestination(7442U);
    msg.setDestinationEntity(46U);
    msg.value = 0.257947908496;

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
    msg.setTimeStamp(0.373698413325);
    msg.setSource(14355U);
    msg.setSourceEntity(26U);
    msg.setDestination(26405U);
    msg.setDestinationEntity(32U);
    msg.value = 0.177285973904;

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
    msg.setTimeStamp(0.635202751142);
    msg.setSource(17326U);
    msg.setSourceEntity(42U);
    msg.setDestination(12229U);
    msg.setDestinationEntity(191U);
    msg.value = 0.650681481125;

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
    msg.setTimeStamp(0.868152346686);
    msg.setSource(24826U);
    msg.setSourceEntity(23U);
    msg.setDestination(41656U);
    msg.setDestinationEntity(137U);
    msg.value = 0.406231476137;

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
    msg.setTimeStamp(0.888101174671);
    msg.setSource(22048U);
    msg.setSourceEntity(9U);
    msg.setDestination(35965U);
    msg.setDestinationEntity(200U);
    msg.value = 0.559958396351;

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
    msg.setTimeStamp(0.24756306415);
    msg.setSource(36420U);
    msg.setSourceEntity(180U);
    msg.setDestination(22419U);
    msg.setDestinationEntity(21U);
    msg.value = 0.567892324858;

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
    msg.setTimeStamp(0.948538825709);
    msg.setSource(43518U);
    msg.setSourceEntity(67U);
    msg.setDestination(22503U);
    msg.setDestinationEntity(211U);
    msg.value = 0.252977064028;

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
    msg.setTimeStamp(0.325510966604);
    msg.setSource(46124U);
    msg.setSourceEntity(28U);
    msg.setDestination(5319U);
    msg.setDestinationEntity(171U);
    msg.value = 0.570120553603;

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
    msg.setTimeStamp(0.443848000581);
    msg.setSource(52304U);
    msg.setSourceEntity(155U);
    msg.setDestination(61777U);
    msg.setDestinationEntity(204U);
    msg.value = 0.706685101131;

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
    msg.setTimeStamp(0.193575140409);
    msg.setSource(63382U);
    msg.setSourceEntity(60U);
    msg.setDestination(8199U);
    msg.setDestinationEntity(63U);
    msg.value = 0.656656959188;

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
    msg.setTimeStamp(0.114993474033);
    msg.setSource(18151U);
    msg.setSourceEntity(119U);
    msg.setDestination(37022U);
    msg.setDestinationEntity(128U);
    msg.validity = 3915U;
    msg.type = 150U;
    msg.tow = 1784684431U;
    msg.base_lat = 0.540184199663;
    msg.base_lon = 0.202863476126;
    msg.base_height = 0.959883506921;
    msg.n = 0.793555615498;
    msg.e = 0.314491354897;
    msg.d = 0.123862702842;
    msg.v_n = 0.640844472418;
    msg.v_e = 0.280468036526;
    msg.v_d = 0.0957114989131;
    msg.satellites = 27U;
    msg.iar_hyp = 9441U;
    msg.iar_ratio = 0.506035470304;

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
    msg.setTimeStamp(0.159293233913);
    msg.setSource(19510U);
    msg.setSourceEntity(218U);
    msg.setDestination(18017U);
    msg.setDestinationEntity(250U);
    msg.validity = 41952U;
    msg.type = 66U;
    msg.tow = 3711095892U;
    msg.base_lat = 0.789526821101;
    msg.base_lon = 0.3403841768;
    msg.base_height = 0.894373851288;
    msg.n = 0.941334121622;
    msg.e = 0.384409557873;
    msg.d = 0.130406354492;
    msg.v_n = 0.435562438733;
    msg.v_e = 0.410396817205;
    msg.v_d = 0.0302617235681;
    msg.satellites = 19U;
    msg.iar_hyp = 31301U;
    msg.iar_ratio = 0.739092597431;

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
    msg.setTimeStamp(0.795090358488);
    msg.setSource(56991U);
    msg.setSourceEntity(19U);
    msg.setDestination(41797U);
    msg.setDestinationEntity(92U);
    msg.validity = 28990U;
    msg.type = 170U;
    msg.tow = 159503208U;
    msg.base_lat = 0.590179271824;
    msg.base_lon = 0.750805168668;
    msg.base_height = 0.259301048481;
    msg.n = 0.264242338283;
    msg.e = 0.777271388163;
    msg.d = 0.074216029757;
    msg.v_n = 0.492235136642;
    msg.v_e = 0.153992634507;
    msg.v_d = 0.562416665061;
    msg.satellites = 223U;
    msg.iar_hyp = 12156U;
    msg.iar_ratio = 0.149606522154;

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
    msg.setTimeStamp(0.840760579168);
    msg.setSource(25137U);
    msg.setSourceEntity(220U);
    msg.setDestination(35052U);
    msg.setDestinationEntity(218U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.240688400072;
    tmp_msg_0.lon = 0.759289758285;
    tmp_msg_0.height = 0.613169333512;
    tmp_msg_0.x = 0.0602627409448;
    tmp_msg_0.y = 0.732348599592;
    tmp_msg_0.z = 0.740568487834;
    tmp_msg_0.phi = 0.0688860149099;
    tmp_msg_0.theta = 0.597772187519;
    tmp_msg_0.psi = 0.540307607386;
    tmp_msg_0.u = 0.96064376741;
    tmp_msg_0.v = 0.667391980527;
    tmp_msg_0.w = 0.471662691053;
    tmp_msg_0.vx = 0.987109061286;
    tmp_msg_0.vy = 0.55494424099;
    tmp_msg_0.vz = 0.618857469717;
    tmp_msg_0.p = 0.416327301643;
    tmp_msg_0.q = 0.856938095663;
    tmp_msg_0.r = 0.581956130772;
    tmp_msg_0.depth = 0.876393815325;
    tmp_msg_0.alt = 0.347901481373;
    msg.state.set(tmp_msg_0);
    msg.type = 254U;

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
    msg.setTimeStamp(0.300824603306);
    msg.setSource(26291U);
    msg.setSourceEntity(47U);
    msg.setDestination(31646U);
    msg.setDestinationEntity(179U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.633923667158;
    tmp_msg_0.lon = 0.690463772835;
    tmp_msg_0.height = 0.51134647382;
    tmp_msg_0.x = 0.965489822444;
    tmp_msg_0.y = 0.152425741792;
    tmp_msg_0.z = 0.23022291977;
    tmp_msg_0.phi = 0.140311902301;
    tmp_msg_0.theta = 0.00161313649244;
    tmp_msg_0.psi = 0.533666086547;
    tmp_msg_0.u = 0.569734463887;
    tmp_msg_0.v = 0.62731551791;
    tmp_msg_0.w = 0.817141390799;
    tmp_msg_0.vx = 0.313853688364;
    tmp_msg_0.vy = 0.500184523697;
    tmp_msg_0.vz = 0.231967556939;
    tmp_msg_0.p = 0.578985587095;
    tmp_msg_0.q = 0.474491626839;
    tmp_msg_0.r = 0.540188622821;
    tmp_msg_0.depth = 0.557644075391;
    tmp_msg_0.alt = 0.512852469404;
    msg.state.set(tmp_msg_0);
    msg.type = 194U;

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
    msg.setTimeStamp(0.816637198963);
    msg.setSource(57185U);
    msg.setSourceEntity(217U);
    msg.setDestination(14106U);
    msg.setDestinationEntity(212U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.387783489915;
    tmp_msg_0.lon = 0.0260968686644;
    tmp_msg_0.height = 0.870076354282;
    tmp_msg_0.x = 0.792071812382;
    tmp_msg_0.y = 0.734027894755;
    tmp_msg_0.z = 0.000632423664547;
    tmp_msg_0.phi = 0.300449010612;
    tmp_msg_0.theta = 0.521175531573;
    tmp_msg_0.psi = 0.994206013619;
    tmp_msg_0.u = 0.287462177495;
    tmp_msg_0.v = 0.201467761817;
    tmp_msg_0.w = 0.774128833804;
    tmp_msg_0.vx = 0.592033082231;
    tmp_msg_0.vy = 0.0626795136314;
    tmp_msg_0.vz = 0.154216204108;
    tmp_msg_0.p = 0.419165307222;
    tmp_msg_0.q = 0.56057913685;
    tmp_msg_0.r = 0.393508913166;
    tmp_msg_0.depth = 0.578878938602;
    tmp_msg_0.alt = 0.030729297084;
    msg.state.set(tmp_msg_0);
    msg.type = 75U;

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
    msg.setTimeStamp(0.678244775545);
    msg.setSource(49639U);
    msg.setSourceEntity(224U);
    msg.setDestination(23508U);
    msg.setDestinationEntity(97U);
    msg.value = 0.132828548278;

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
    msg.setTimeStamp(0.823388344843);
    msg.setSource(8616U);
    msg.setSourceEntity(11U);
    msg.setDestination(51455U);
    msg.setDestinationEntity(221U);
    msg.value = 0.465695965142;

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
    msg.setTimeStamp(0.012925009991);
    msg.setSource(3711U);
    msg.setSourceEntity(139U);
    msg.setDestination(28837U);
    msg.setDestinationEntity(131U);
    msg.value = 0.405830550047;

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
    msg.setTimeStamp(0.687499082898);
    msg.setSource(36065U);
    msg.setSourceEntity(98U);
    msg.setDestination(44851U);
    msg.setDestinationEntity(204U);
    msg.value = 0.997188358674;

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
    msg.setTimeStamp(0.55528968362);
    msg.setSource(15820U);
    msg.setSourceEntity(253U);
    msg.setDestination(61743U);
    msg.setDestinationEntity(59U);
    msg.value = 0.166364081424;

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
    msg.setTimeStamp(0.501162902459);
    msg.setSource(12471U);
    msg.setSourceEntity(50U);
    msg.setDestination(40160U);
    msg.setDestinationEntity(159U);
    msg.value = 0.399807095398;

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
    msg.setTimeStamp(0.225145907624);
    msg.setSource(59140U);
    msg.setSourceEntity(124U);
    msg.setDestination(6525U);
    msg.setDestinationEntity(189U);
    msg.value = 0.889958706522;

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
    msg.setTimeStamp(0.838608534137);
    msg.setSource(53722U);
    msg.setSourceEntity(35U);
    msg.setDestination(3351U);
    msg.setDestinationEntity(47U);
    msg.value = 0.173242622889;

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
    msg.setTimeStamp(0.946214582164);
    msg.setSource(42145U);
    msg.setSourceEntity(115U);
    msg.setDestination(10889U);
    msg.setDestinationEntity(181U);
    msg.value = 0.327200705457;

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
    msg.setTimeStamp(0.523354194169);
    msg.setSource(49608U);
    msg.setSourceEntity(32U);
    msg.setDestination(26446U);
    msg.setDestinationEntity(100U);
    msg.value = 0.440313088013;

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
    msg.setTimeStamp(0.730782458443);
    msg.setSource(19654U);
    msg.setSourceEntity(63U);
    msg.setDestination(29482U);
    msg.setDestinationEntity(151U);
    msg.value = 0.802658174054;

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
    msg.setTimeStamp(0.370973399955);
    msg.setSource(33211U);
    msg.setSourceEntity(23U);
    msg.setDestination(63319U);
    msg.setDestinationEntity(224U);
    msg.value = 0.637589169473;

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
    msg.setTimeStamp(0.33658231303);
    msg.setSource(39725U);
    msg.setSourceEntity(187U);
    msg.setDestination(8410U);
    msg.setDestinationEntity(23U);
    msg.value = 0.167597530494;

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
    msg.setTimeStamp(0.349940015703);
    msg.setSource(25985U);
    msg.setSourceEntity(118U);
    msg.setDestination(41295U);
    msg.setDestinationEntity(107U);
    msg.value = 0.915531707357;

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
    msg.setTimeStamp(0.0179129686624);
    msg.setSource(20564U);
    msg.setSourceEntity(239U);
    msg.setDestination(14668U);
    msg.setDestinationEntity(112U);
    msg.value = 0.556885878298;

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
    msg.setTimeStamp(0.236994625237);
    msg.setSource(32178U);
    msg.setSourceEntity(242U);
    msg.setDestination(28822U);
    msg.setDestinationEntity(158U);
    msg.id = 95U;
    msg.zoom = 243U;
    msg.action = 145U;

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
    msg.setTimeStamp(0.927676435778);
    msg.setSource(29371U);
    msg.setSourceEntity(12U);
    msg.setDestination(47720U);
    msg.setDestinationEntity(185U);
    msg.id = 221U;
    msg.zoom = 14U;
    msg.action = 187U;

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
    msg.setTimeStamp(0.194687239811);
    msg.setSource(32349U);
    msg.setSourceEntity(228U);
    msg.setDestination(52870U);
    msg.setDestinationEntity(195U);
    msg.id = 12U;
    msg.zoom = 170U;
    msg.action = 31U;

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
    msg.setTimeStamp(0.759605161809);
    msg.setSource(3559U);
    msg.setSourceEntity(143U);
    msg.setDestination(14924U);
    msg.setDestinationEntity(47U);
    msg.id = 99U;
    msg.value = 0.756864590792;

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
    msg.setTimeStamp(0.763759235091);
    msg.setSource(49094U);
    msg.setSourceEntity(85U);
    msg.setDestination(61796U);
    msg.setDestinationEntity(197U);
    msg.id = 162U;
    msg.value = 0.447286494968;

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
    msg.setTimeStamp(0.0977540854232);
    msg.setSource(2305U);
    msg.setSourceEntity(63U);
    msg.setDestination(46531U);
    msg.setDestinationEntity(5U);
    msg.id = 230U;
    msg.value = 0.219882370767;

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
    msg.setTimeStamp(0.923701547855);
    msg.setSource(3314U);
    msg.setSourceEntity(134U);
    msg.setDestination(56168U);
    msg.setDestinationEntity(227U);
    msg.id = 155U;
    msg.value = 0.599521178605;

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
    msg.setTimeStamp(0.860408711029);
    msg.setSource(64313U);
    msg.setSourceEntity(171U);
    msg.setDestination(44701U);
    msg.setDestinationEntity(130U);
    msg.id = 129U;
    msg.value = 0.992998598798;

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
    msg.setTimeStamp(0.562885797566);
    msg.setSource(43187U);
    msg.setSourceEntity(96U);
    msg.setDestination(18904U);
    msg.setDestinationEntity(159U);
    msg.id = 2U;
    msg.value = 0.610465561917;

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
    msg.setTimeStamp(0.674501717307);
    msg.setSource(39455U);
    msg.setSourceEntity(40U);
    msg.setDestination(58696U);
    msg.setDestinationEntity(86U);
    msg.id = 84U;
    msg.angle = 0.373134660995;

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
    msg.setTimeStamp(0.024627438335);
    msg.setSource(28474U);
    msg.setSourceEntity(118U);
    msg.setDestination(34476U);
    msg.setDestinationEntity(8U);
    msg.id = 6U;
    msg.angle = 0.0487058052047;

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
    msg.setTimeStamp(0.627392133062);
    msg.setSource(23336U);
    msg.setSourceEntity(202U);
    msg.setDestination(32426U);
    msg.setDestinationEntity(242U);
    msg.id = 86U;
    msg.angle = 0.739715857729;

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
    msg.setTimeStamp(0.603681081139);
    msg.setSource(13915U);
    msg.setSourceEntity(167U);
    msg.setDestination(21775U);
    msg.setDestinationEntity(191U);
    msg.op = 29U;
    msg.actions.assign("HORUYEGZWWBDQLGFQQMRWYPVQXEHWWOZZCRLFVFNPNQTQZUXNHMMCWBNPPEPRBRXBINLWLTFSOYGUYRLMGZBITUODOJINHFQVDTOSCMEAKBDYVYFKCBUNSDRAXLOMJGCVOSTNIVDDKPEXIGYSIVOWKZZPKHLCKAZXTCMA");

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
    msg.setTimeStamp(0.118217583671);
    msg.setSource(48475U);
    msg.setSourceEntity(239U);
    msg.setDestination(59964U);
    msg.setDestinationEntity(85U);
    msg.op = 204U;
    msg.actions.assign("VPIZNBTDPAWFZHVAKUDHKVVEABRCGWYWUNRNLZAGFKEXWZYLRFUXSKBRLQDSKSEPHYYTYSZDUDIJHDFVQTFDYDOGKJZXISQCETHLEPSAXYMDHWOBPCOBSNCSLGSGNJOZHQCJRGJEMINREKMWVJPPBMOMRAXJKIMOJBRGLGHCOPVLFBWAUFECJSVAUQWLEOZNMLWUBXTQIKKOTAHXTTUWVMGYD");

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
    msg.setTimeStamp(0.894198085896);
    msg.setSource(16461U);
    msg.setSourceEntity(168U);
    msg.setDestination(26649U);
    msg.setDestinationEntity(220U);
    msg.op = 128U;
    msg.actions.assign("GTRUQSOPHGBLZBRVKHTGCDUMYLMEEDIOLJUQOZVUAPVVBYJEBKZLFENDNBUHTRAHZHKAAJFSTWKRULCCCSYHILCXDNMBQWMKNZNAWINIBYLPTXNMBJOXMRROZOESJVXJVWHUKEIOWYPWCPZFGAJMDIWFAFNRKYSXLECYWOQCJUDXVXSGTKFGSVQHYTIPRHGDFASPREJROQTJQZFUCIPPXFEMMIOYSGYVFTZIALUDXWBCDWGSVQMDGTZNQQHK");

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
    msg.setTimeStamp(0.618623414272);
    msg.setSource(8436U);
    msg.setSourceEntity(177U);
    msg.setDestination(6690U);
    msg.setDestinationEntity(140U);
    msg.actions.assign("ZCEBWNPKFYTTGDAPNTQFFOVUJKHHLIQWIZWPKQDJHJBELDCDZHUYDIAIBEPACIRVAKHWTYPGNMRVCSAIUPBCYNXXMMZGXYTWJVQFSXYCKQROFMFGOUBXEUWIJQWMWPAJSESRIOHRGLOVFHFXVETDNLS");

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
    msg.setTimeStamp(0.977946030507);
    msg.setSource(22221U);
    msg.setSourceEntity(102U);
    msg.setDestination(42424U);
    msg.setDestinationEntity(85U);
    msg.actions.assign("ADFDQKTOQNZISAGAVXGBYTOEDGMMZCOJVNNQAFAVCYIGFDSCSTLEJBZYIVQLWGUNEHLCESDNSHCWUTCKUWYBMKKRQXFWZJJGZEIKMYNGPGVDPIZROAJHLDXPXKJUJWVWKRNE");

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
    msg.setTimeStamp(0.247442927246);
    msg.setSource(8251U);
    msg.setSourceEntity(141U);
    msg.setDestination(56159U);
    msg.setDestinationEntity(67U);
    msg.actions.assign("NCVLPXZPMRARCHOTSIDBYALIHDTHKNZXBKGQYZMHDAZMDFJHYEBWWUDUHPKTLZVCHTERCLZSJFMVAUUJOBHUQEEWMADWCRPLSOBPCIJKKRRNOGRMREGBTOGSFYFCKBQLPUUGVMCIWRCODLAFJFQSGEVOIHFPONPVKMTBVBZNZQTASYWESQZUNLMYJINSEBSOVPAVXX");

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
    msg.setTimeStamp(0.207794321762);
    msg.setSource(58330U);
    msg.setSourceEntity(120U);
    msg.setDestination(33242U);
    msg.setDestinationEntity(32U);
    msg.button = 93U;
    msg.value = 122U;

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
    msg.setTimeStamp(0.0429157816799);
    msg.setSource(26480U);
    msg.setSourceEntity(210U);
    msg.setDestination(32849U);
    msg.setDestinationEntity(244U);
    msg.button = 25U;
    msg.value = 85U;

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
    msg.setTimeStamp(0.0328779087673);
    msg.setSource(20438U);
    msg.setSourceEntity(82U);
    msg.setDestination(1020U);
    msg.setDestinationEntity(134U);
    msg.button = 49U;
    msg.value = 155U;

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
    msg.setTimeStamp(0.35589847673);
    msg.setSource(63978U);
    msg.setSourceEntity(92U);
    msg.setDestination(40787U);
    msg.setDestinationEntity(21U);
    msg.op = 187U;
    msg.text.assign("CXETTSJCJAPATKZWHSLXJTULCIMVNYMRXPXCLODMCEDJWTJKBGOTQJPCGHVXJDMIADIHSUMQMHZSHBUOEQLKYEBBBFMNVSIVPKMKYXTUDNRVWGTYQUGKPHESSRQFDABNKZSQGWRXUQYYZHPUDVFJCQYONBORFIVNDNASLERORLGZQLOBSBARMIFFIGGPOUPCWJEOIDOXGPXZYHLP");

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
    msg.setTimeStamp(0.862989200805);
    msg.setSource(51139U);
    msg.setSourceEntity(209U);
    msg.setDestination(28109U);
    msg.setDestinationEntity(17U);
    msg.op = 99U;
    msg.text.assign("SOYPMVKISKFGMQRXFBIPYQRJYWTFKIZTOBVZNFXXSXVYLEIFFSSCEGUGBDMUJSRAIWKXSDACIWJQXZCILTUJMPWDMBWAEDGUYROLHKTDZJPUGHRHEQNMBJLLUNIWKMENBHGRSTVQVBGTQSAKMWLHPANQDLRLJHOJIQAKMFEAGHRQVLGTRJYXNOKVYCEEAFOLPOJPHUECOWTGPWDUDPBYZONVZNDCBFWTZAUZXXCAS");

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
    msg.setTimeStamp(0.179302498689);
    msg.setSource(17289U);
    msg.setSourceEntity(184U);
    msg.setDestination(15553U);
    msg.setDestinationEntity(155U);
    msg.op = 132U;
    msg.text.assign("BVTWJZMHSDWBGIAHPAKMNKHQXZGUXDSABDBWYPGYRORDNVFMHUESLCRLSDPCGUEFXQAKFLKJOHUIKEUFXEJAGQZRJDJPVIGQCGEFTIH");

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
    msg.setTimeStamp(0.807345273012);
    msg.setSource(16908U);
    msg.setSourceEntity(65U);
    msg.setDestination(9421U);
    msg.setDestinationEntity(35U);
    msg.op = 250U;
    msg.time_remain = 0.969265660646;
    msg.sched_time = 0.181726715872;

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
    msg.setTimeStamp(0.274867209162);
    msg.setSource(49145U);
    msg.setSourceEntity(192U);
    msg.setDestination(17864U);
    msg.setDestinationEntity(113U);
    msg.op = 96U;
    msg.time_remain = 0.934152509881;
    msg.sched_time = 0.376955877088;

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
    msg.setTimeStamp(0.106775352285);
    msg.setSource(27222U);
    msg.setSourceEntity(158U);
    msg.setDestination(31893U);
    msg.setDestinationEntity(40U);
    msg.op = 72U;
    msg.time_remain = 0.358254192001;
    msg.sched_time = 0.430261961342;

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
    msg.setTimeStamp(0.73947751235);
    msg.setSource(30443U);
    msg.setSourceEntity(175U);
    msg.setDestination(44032U);
    msg.setDestinationEntity(129U);
    msg.name.assign("EHDWOXUJVTOUOILXYXZVONIBCXWAZUBNEVMLWKFRWGLRUUALSGYUHZNMMZKSDVLWFQCYJURLEGKZMTPLUGSBVHTTCDWRQGZJGIMECDELPKACBRVMSCXEZGXQQMSOVZHNFTGLYIWIIJSAITCDUGDWSJCBYPXMSBAQEQQJXIBXAPIJHTYE");
    msg.op = 8U;
    msg.sched_time = 0.946711568748;

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
    msg.setTimeStamp(0.741146718232);
    msg.setSource(23022U);
    msg.setSourceEntity(154U);
    msg.setDestination(12250U);
    msg.setDestinationEntity(232U);
    msg.name.assign("SIGCYAGGEWRMKDPEZNAJPGXCFAOZXRWJBSDBHTRSOMBYAWQERXHFWROIXVSGXHIXNCNFJVZQOUWHNZLCVUBQOLRPLCOBVFNTDHKGGHDQWDYPATFRUBSKOGUIVLYJWZLJENXTGKAZJPCHKDZMYTFPWBMKQDTVXKF");
    msg.op = 107U;
    msg.sched_time = 0.230284681381;

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
    msg.setTimeStamp(0.984540930508);
    msg.setSource(46715U);
    msg.setSourceEntity(12U);
    msg.setDestination(49278U);
    msg.setDestinationEntity(148U);
    msg.name.assign("JYOUPQWRKRZAYNYSHXWPNBHRYCWENNWMCJBUZAFZOODFMBRVBXNQSTPMALPUGSYBELUMCXHLQKNFICLDASAAUEHCKOULPKGYRYPDYZWKFDFDUIZNJSMXTBHHAGPCKEJVQAQZVRTUKCYGNTTZTRTMCLEKCIWXGKHQFPLOUSJGFPRSXIST");
    msg.op = 131U;
    msg.sched_time = 0.272352798761;

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
    msg.setTimeStamp(0.578206643921);
    msg.setSource(25273U);
    msg.setSourceEntity(187U);
    msg.setDestination(52579U);
    msg.setDestinationEntity(191U);

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
    msg.setTimeStamp(0.0163621639752);
    msg.setSource(26246U);
    msg.setSourceEntity(62U);
    msg.setDestination(26399U);
    msg.setDestinationEntity(146U);

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
    msg.setTimeStamp(0.23286258931);
    msg.setSource(39899U);
    msg.setSourceEntity(140U);
    msg.setDestination(42204U);
    msg.setDestinationEntity(221U);

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
    msg.setTimeStamp(0.0295212626587);
    msg.setSource(9108U);
    msg.setSourceEntity(25U);
    msg.setDestination(39222U);
    msg.setDestinationEntity(166U);
    msg.name.assign("NZVWTGHCJFYACIZZQJMHKZBWKENGGYESDPSHGMTLQUOTIRJOZAIQPBVJYIWSGKKDHPQOINFURBSOALWVNTAVPLTKUXAKMWFHEOGZLMFDZVJNBVNSBXUCMWTDXNOVLYYPB");
    msg.state = 249U;

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
    msg.setTimeStamp(0.330268289218);
    msg.setSource(59947U);
    msg.setSourceEntity(168U);
    msg.setDestination(15129U);
    msg.setDestinationEntity(126U);
    msg.name.assign("UEHRSWWFMU");
    msg.state = 176U;

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
    msg.setTimeStamp(0.104566888051);
    msg.setSource(39433U);
    msg.setSourceEntity(217U);
    msg.setDestination(40621U);
    msg.setDestinationEntity(94U);
    msg.name.assign("TSXIWRZYSZOQENMFAKZWWQENTABVOSMNZFUGRXPPPLNOZJHAIZILHAICORMBTCDFBYATDGPHQPTIGLBOYMILWUNHZKDUCRCVHBLKIFUDUOWYOJDZZMXQRKAPKSJQNFSVGCVGKERNEXHMMNKHYIPELWSDWFSTJGVYIFNMXJFLPDEVGUSERQMVCLXWDBVOVLBUMCHYYTRKJUSCUQSJJUCWEQQRYTJPXBTAEELXBYIGFBKKXGPX");
    msg.state = 160U;

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
    msg.setTimeStamp(0.550571817784);
    msg.setSource(50212U);
    msg.setSourceEntity(32U);
    msg.setDestination(30821U);
    msg.setDestinationEntity(86U);
    msg.name.assign("NTPYELALFKHIVF");
    msg.value = 71U;

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
    msg.setTimeStamp(0.0254842541302);
    msg.setSource(45311U);
    msg.setSourceEntity(187U);
    msg.setDestination(56847U);
    msg.setDestinationEntity(194U);
    msg.name.assign("QHTCKPBNUYKUOUETLHMCXYWOXHJFFZWEOIZPKEELBFMDPYDQXNSQFKZZCWVVYAVIJINTKEXKMYMYFRGBBRLGGQBQORXOHTNFOJDVVRJMAQGJRTEQIVEMACVDDSUQPLZCTBWWNZJSNRXSDNVGFOEWUPUUIDMGWFTNNKLAZDEPYSPRMKMZ");
    msg.value = 202U;

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
    msg.setTimeStamp(0.830691116998);
    msg.setSource(23822U);
    msg.setSourceEntity(109U);
    msg.setDestination(7388U);
    msg.setDestinationEntity(98U);
    msg.name.assign("DTCSTYCPUAWVWBGCMDPGRWLBHUSXPZOPHLKMWUIHGECBVNMFUFBHJODKLEHSZABXNZQSAKNGJFQEKZCIELSMKYESOYRFRJHUANVJDMDVXWTAFOVZTTLXNBXPMNOYQFCZGFAIPWDHIOGTFWEJFDHOPUSJJYIRZTUNLWVDICIXLXDGCVIQZABURSAXMXDPSVYQQKOYCLQVTQCWFBMIGRKRBGEJANOQGQJXTNEKLUKNJREPRHYHYTYLRMUMZAVSOW");
    msg.value = 161U;

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
    msg.setTimeStamp(0.90298426477);
    msg.setSource(60455U);
    msg.setSourceEntity(236U);
    msg.setDestination(43891U);
    msg.setDestinationEntity(27U);
    msg.name.assign("LLQPFQVOIWK");

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
    msg.setTimeStamp(0.104814197142);
    msg.setSource(56985U);
    msg.setSourceEntity(45U);
    msg.setDestination(23365U);
    msg.setDestinationEntity(115U);
    msg.name.assign("BWYXJQNYTNUHFEAEHUBLAZINZDHVCQBKLAGJWZCYGURZMXXKTNOXQRIVEHCROQQYQMDUIAVLKVYOSPBV");

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
    msg.setTimeStamp(0.990872188705);
    msg.setSource(42098U);
    msg.setSourceEntity(142U);
    msg.setDestination(63377U);
    msg.setDestinationEntity(243U);
    msg.name.assign("MRZECBCMKEUBVYWCAWQWMZNDRVNGXTBHJJBYMLMEGZUCPPYQOQMVLEABKFAGWTCQGYXBVKQRKSDMUDXTFLZFFXFGPIYAOHGOHGXTWTGRZNNMEVHJNIFCTRWDILHPWFPFBSRYMTTJQJSZUULQRTNUCXKGKOSINAOOSQBHYARZ");

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
    msg.setTimeStamp(0.562896062215);
    msg.setSource(39016U);
    msg.setSourceEntity(219U);
    msg.setDestination(54291U);
    msg.setDestinationEntity(7U);
    msg.name.assign("IUIOFKMUJNREZFEOWDLXZLBQVGIWDDLUVPRZNCAHBXKOUKTRJXBFWPHSNNWHAFMRPVSKIKZQXGASKCHJYPGRBNQYWMFTDDBARGDHDPHYLVCPIZNGSJ");
    msg.value = 206U;

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
    msg.setTimeStamp(0.708281235964);
    msg.setSource(37848U);
    msg.setSourceEntity(194U);
    msg.setDestination(28216U);
    msg.setDestinationEntity(160U);
    msg.name.assign("CXUSNDQYSEXAHDVWVAGGNFBGSRSXBZFKFEIHATYZFRDIQKKFURBDHAKEKFMLBJIECOWTRSUSCPIZGJNOPZMJWTEHOXRKUZGOJNGHFVWCKZJDMPMPRJQHX");
    msg.value = 46U;

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
    msg.setTimeStamp(0.711084558191);
    msg.setSource(9688U);
    msg.setSourceEntity(237U);
    msg.setDestination(55938U);
    msg.setDestinationEntity(173U);
    msg.name.assign("OMWIVYJOROYRQGJHYBBMVALWIUKGEMPBWIXTQBOWCHZ");
    msg.value = 254U;

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
    msg.setTimeStamp(0.682931954163);
    msg.setSource(44755U);
    msg.setSourceEntity(131U);
    msg.setDestination(50246U);
    msg.setDestinationEntity(0U);
    msg.id = 104U;
    msg.period = 3570206785U;
    msg.duty_cycle = 397201673U;

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
    msg.setTimeStamp(0.44704387761);
    msg.setSource(16539U);
    msg.setSourceEntity(226U);
    msg.setDestination(43364U);
    msg.setDestinationEntity(20U);
    msg.id = 55U;
    msg.period = 139857582U;
    msg.duty_cycle = 1547288346U;

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
    msg.setTimeStamp(0.338404478989);
    msg.setSource(18997U);
    msg.setSourceEntity(4U);
    msg.setDestination(8441U);
    msg.setDestinationEntity(54U);
    msg.id = 103U;
    msg.period = 4062029890U;
    msg.duty_cycle = 3370318855U;

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
    msg.setTimeStamp(0.248689576042);
    msg.setSource(52865U);
    msg.setSourceEntity(208U);
    msg.setDestination(25786U);
    msg.setDestinationEntity(189U);
    msg.id = 87U;
    msg.period = 1307122269U;
    msg.duty_cycle = 1680810577U;

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
    msg.setTimeStamp(0.373663209839);
    msg.setSource(26454U);
    msg.setSourceEntity(113U);
    msg.setDestination(28713U);
    msg.setDestinationEntity(47U);
    msg.id = 203U;
    msg.period = 1900171736U;
    msg.duty_cycle = 1131438695U;

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
    msg.setTimeStamp(0.821514133202);
    msg.setSource(33205U);
    msg.setSourceEntity(222U);
    msg.setDestination(32147U);
    msg.setDestinationEntity(102U);
    msg.id = 59U;
    msg.period = 4288222111U;
    msg.duty_cycle = 559203196U;

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
    msg.setTimeStamp(0.924921937388);
    msg.setSource(38559U);
    msg.setSourceEntity(114U);
    msg.setDestination(13240U);
    msg.setDestinationEntity(205U);
    msg.lat = 0.739667291728;
    msg.lon = 0.595000826978;
    msg.height = 0.0350552025667;
    msg.x = 0.50805463808;
    msg.y = 0.60749540784;
    msg.z = 0.510870475899;
    msg.phi = 0.823739962621;
    msg.theta = 0.903898322711;
    msg.psi = 0.727271942907;
    msg.u = 0.00570718585682;
    msg.v = 0.652509746308;
    msg.w = 0.542022708241;
    msg.vx = 0.806999546511;
    msg.vy = 0.586615692584;
    msg.vz = 0.318098036934;
    msg.p = 0.54802325636;
    msg.q = 0.902454966126;
    msg.r = 0.049753183891;
    msg.depth = 0.10822204416;
    msg.alt = 0.721029118069;

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
    msg.setTimeStamp(0.0376867725756);
    msg.setSource(17499U);
    msg.setSourceEntity(117U);
    msg.setDestination(52961U);
    msg.setDestinationEntity(194U);
    msg.lat = 0.567505471819;
    msg.lon = 0.494752603641;
    msg.height = 0.569760375041;
    msg.x = 0.202790631984;
    msg.y = 0.251237656788;
    msg.z = 0.487611183587;
    msg.phi = 0.632043884037;
    msg.theta = 0.913527099099;
    msg.psi = 0.697270287894;
    msg.u = 0.377437967104;
    msg.v = 0.84442013056;
    msg.w = 0.646847583971;
    msg.vx = 0.581785687063;
    msg.vy = 0.736210736922;
    msg.vz = 0.996575998425;
    msg.p = 0.88628629898;
    msg.q = 0.579408960547;
    msg.r = 0.540087051938;
    msg.depth = 0.00716468323058;
    msg.alt = 0.553440806293;

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
    msg.setTimeStamp(0.584367872847);
    msg.setSource(5470U);
    msg.setSourceEntity(242U);
    msg.setDestination(20778U);
    msg.setDestinationEntity(121U);
    msg.lat = 0.136777185081;
    msg.lon = 0.964438728525;
    msg.height = 0.26623297106;
    msg.x = 0.651586759638;
    msg.y = 0.918176897792;
    msg.z = 0.459627561577;
    msg.phi = 0.861314183035;
    msg.theta = 0.948598660097;
    msg.psi = 0.439527098899;
    msg.u = 0.0742280524608;
    msg.v = 0.0310848828246;
    msg.w = 0.538176698344;
    msg.vx = 0.0478346196005;
    msg.vy = 0.768098156963;
    msg.vz = 0.538955645222;
    msg.p = 0.872012342958;
    msg.q = 0.457898482994;
    msg.r = 0.554549196877;
    msg.depth = 0.357068111897;
    msg.alt = 0.216621758847;

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
    msg.setTimeStamp(0.717851068595);
    msg.setSource(4127U);
    msg.setSourceEntity(138U);
    msg.setDestination(64033U);
    msg.setDestinationEntity(0U);
    msg.x = 0.220053898385;
    msg.y = 0.873737098708;
    msg.z = 0.680207703333;

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
    msg.setTimeStamp(0.840680789799);
    msg.setSource(13604U);
    msg.setSourceEntity(251U);
    msg.setDestination(48789U);
    msg.setDestinationEntity(195U);
    msg.x = 0.350616940002;
    msg.y = 0.224207426434;
    msg.z = 0.591607574333;

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
    msg.setTimeStamp(0.463648294025);
    msg.setSource(40556U);
    msg.setSourceEntity(196U);
    msg.setDestination(29382U);
    msg.setDestinationEntity(13U);
    msg.x = 0.0784467449675;
    msg.y = 0.755512571787;
    msg.z = 0.101069566095;

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
    msg.setTimeStamp(0.82277210304);
    msg.setSource(56069U);
    msg.setSourceEntity(133U);
    msg.setDestination(2408U);
    msg.setDestinationEntity(107U);
    msg.value = 0.132519920011;

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
    msg.setTimeStamp(0.706409259072);
    msg.setSource(55623U);
    msg.setSourceEntity(247U);
    msg.setDestination(41259U);
    msg.setDestinationEntity(98U);
    msg.value = 0.355844182417;

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
    msg.setTimeStamp(0.610188909148);
    msg.setSource(21196U);
    msg.setSourceEntity(118U);
    msg.setDestination(45713U);
    msg.setDestinationEntity(40U);
    msg.value = 0.807029916922;

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
    msg.setTimeStamp(0.71588091458);
    msg.setSource(6671U);
    msg.setSourceEntity(62U);
    msg.setDestination(5317U);
    msg.setDestinationEntity(159U);
    msg.value = 0.621897122213;

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
    msg.setTimeStamp(0.263245576054);
    msg.setSource(48734U);
    msg.setSourceEntity(227U);
    msg.setDestination(52129U);
    msg.setDestinationEntity(143U);
    msg.value = 0.199395239745;

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
    msg.setTimeStamp(0.375262848707);
    msg.setSource(63468U);
    msg.setSourceEntity(164U);
    msg.setDestination(46744U);
    msg.setDestinationEntity(187U);
    msg.value = 0.816506781578;

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
    msg.setTimeStamp(0.378961175326);
    msg.setSource(26813U);
    msg.setSourceEntity(68U);
    msg.setDestination(25267U);
    msg.setDestinationEntity(29U);
    msg.x = 0.390089804703;
    msg.y = 0.232866954483;
    msg.z = 0.139504618795;
    msg.phi = 0.307226507034;
    msg.theta = 0.948806821494;
    msg.psi = 0.811532270024;
    msg.p = 0.212463953977;
    msg.q = 0.829159536621;
    msg.r = 0.645226920564;
    msg.u = 0.293986775074;
    msg.v = 0.912682819008;
    msg.w = 0.980928237174;
    msg.bias_psi = 0.870984696676;
    msg.bias_r = 0.987125629535;

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
    msg.setTimeStamp(0.522520977659);
    msg.setSource(46831U);
    msg.setSourceEntity(89U);
    msg.setDestination(57883U);
    msg.setDestinationEntity(239U);
    msg.x = 0.685625245122;
    msg.y = 0.607033733493;
    msg.z = 0.376902475964;
    msg.phi = 0.295471909628;
    msg.theta = 0.556012969838;
    msg.psi = 0.657379139045;
    msg.p = 0.539276530663;
    msg.q = 0.157659873728;
    msg.r = 0.748248017362;
    msg.u = 0.544561138775;
    msg.v = 0.97345365676;
    msg.w = 0.238524706817;
    msg.bias_psi = 0.897902887585;
    msg.bias_r = 0.503537610564;

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
    msg.setTimeStamp(0.447069112653);
    msg.setSource(39170U);
    msg.setSourceEntity(16U);
    msg.setDestination(64302U);
    msg.setDestinationEntity(75U);
    msg.x = 0.165041270337;
    msg.y = 0.0445370163683;
    msg.z = 0.373628880083;
    msg.phi = 0.358441533395;
    msg.theta = 0.701694247936;
    msg.psi = 0.683806866858;
    msg.p = 0.590454031074;
    msg.q = 0.0275385057869;
    msg.r = 0.152922989948;
    msg.u = 0.930521091247;
    msg.v = 0.927420744603;
    msg.w = 0.875399123036;
    msg.bias_psi = 0.178292575103;
    msg.bias_r = 0.461183114077;

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
    msg.setTimeStamp(0.776870875366);
    msg.setSource(48598U);
    msg.setSourceEntity(179U);
    msg.setDestination(22524U);
    msg.setDestinationEntity(67U);
    msg.bias_psi = 0.316609151114;
    msg.bias_r = 0.841229099121;
    msg.cog = 0.355068517783;
    msg.cyaw = 0.217479728071;
    msg.gps_rej_level = 0.886837261168;
    msg.lbl_rej_level = 0.446129887785;
    msg.custom_x = 0.0877065758051;
    msg.custom_y = 0.780397650723;
    msg.custom_z = 0.273264468419;

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
    msg.setTimeStamp(0.224292124766);
    msg.setSource(27578U);
    msg.setSourceEntity(180U);
    msg.setDestination(24402U);
    msg.setDestinationEntity(202U);
    msg.bias_psi = 0.823578663282;
    msg.bias_r = 0.379219539484;
    msg.cog = 0.969330088521;
    msg.cyaw = 0.215688014239;
    msg.gps_rej_level = 0.637310705418;
    msg.lbl_rej_level = 0.151975724307;
    msg.custom_x = 0.197840711752;
    msg.custom_y = 0.423954074727;
    msg.custom_z = 0.716093573898;

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
    msg.setTimeStamp(0.745774719584);
    msg.setSource(5625U);
    msg.setSourceEntity(51U);
    msg.setDestination(57902U);
    msg.setDestinationEntity(41U);
    msg.bias_psi = 0.462185486397;
    msg.bias_r = 0.888791078798;
    msg.cog = 0.916243236986;
    msg.cyaw = 0.375886801396;
    msg.gps_rej_level = 0.481118980923;
    msg.lbl_rej_level = 0.324672256203;
    msg.custom_x = 0.75863540548;
    msg.custom_y = 0.918838452174;
    msg.custom_z = 0.0477232575065;

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
    msg.setTimeStamp(0.346605294219);
    msg.setSource(7262U);
    msg.setSourceEntity(214U);
    msg.setDestination(53554U);
    msg.setDestinationEntity(2U);
    msg.utc_time = 0.105934954678;
    msg.reason = 69U;

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
    msg.setTimeStamp(0.400090722642);
    msg.setSource(20147U);
    msg.setSourceEntity(185U);
    msg.setDestination(48217U);
    msg.setDestinationEntity(221U);
    msg.utc_time = 0.534519190893;
    msg.reason = 209U;

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
    msg.setTimeStamp(0.829781965344);
    msg.setSource(57815U);
    msg.setSourceEntity(67U);
    msg.setDestination(47245U);
    msg.setDestinationEntity(78U);
    msg.utc_time = 0.294335518578;
    msg.reason = 223U;

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
    msg.setTimeStamp(0.594684818952);
    msg.setSource(44593U);
    msg.setSourceEntity(9U);
    msg.setDestination(45305U);
    msg.setDestinationEntity(224U);
    msg.id = 177U;
    msg.range = 0.39232289844;
    msg.acceptance = 136U;

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
    msg.setTimeStamp(0.551809750545);
    msg.setSource(25856U);
    msg.setSourceEntity(132U);
    msg.setDestination(26517U);
    msg.setDestinationEntity(121U);
    msg.id = 3U;
    msg.range = 0.055139787493;
    msg.acceptance = 4U;

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
    msg.setTimeStamp(0.658467277179);
    msg.setSource(28818U);
    msg.setSourceEntity(227U);
    msg.setDestination(37619U);
    msg.setDestinationEntity(159U);
    msg.id = 205U;
    msg.range = 0.816843556715;
    msg.acceptance = 1U;

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
    msg.setTimeStamp(0.134317827304);
    msg.setSource(27477U);
    msg.setSourceEntity(200U);
    msg.setDestination(23702U);
    msg.setDestinationEntity(253U);
    msg.type = 139U;
    msg.reason = 191U;
    msg.value = 0.25241363736;
    msg.timestep = 0.105795874584;

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
    msg.setTimeStamp(0.444110951677);
    msg.setSource(57466U);
    msg.setSourceEntity(134U);
    msg.setDestination(58359U);
    msg.setDestinationEntity(243U);
    msg.type = 98U;
    msg.reason = 228U;
    msg.value = 0.343004695724;
    msg.timestep = 0.592662431916;

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
    msg.setTimeStamp(0.0456630725551);
    msg.setSource(52998U);
    msg.setSourceEntity(37U);
    msg.setDestination(5386U);
    msg.setDestinationEntity(53U);
    msg.type = 140U;
    msg.reason = 9U;
    msg.value = 0.69615822025;
    msg.timestep = 0.521556237649;

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
    msg.setTimeStamp(0.762122577234);
    msg.setSource(25401U);
    msg.setSourceEntity(23U);
    msg.setDestination(44646U);
    msg.setDestinationEntity(104U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("FTIBZVNAZFWIDXMDNYQLGEXPRCUCJIFIRALIJXALJBYKVUETUOSLJXWSWQFUJQUFAIWVAOCBZSOMDNPGXDKRHJHYEPBYNNXYEMVOWXGVSUTDEHTR");
    tmp_msg_0.lat = 0.180725988704;
    tmp_msg_0.lon = 0.122130456117;
    tmp_msg_0.depth = 0.300319127198;
    tmp_msg_0.query_channel = 182U;
    tmp_msg_0.reply_channel = 132U;
    tmp_msg_0.transponder_delay = 58U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.376668758584;
    msg.y = 0.85883229078;
    msg.var_x = 0.895739146199;
    msg.var_y = 0.779157364071;
    msg.distance = 0.409790122668;

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
    msg.setTimeStamp(0.515121086074);
    msg.setSource(27830U);
    msg.setSourceEntity(158U);
    msg.setDestination(36126U);
    msg.setDestinationEntity(238U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("BFLDGYXPRRUIMJGYIFANYJCFSNJZUGPMNCPWQNVUOREFCLEIAMZCREOOLWSAUMQB");
    tmp_msg_0.lat = 0.802279896837;
    tmp_msg_0.lon = 0.42019022041;
    tmp_msg_0.depth = 0.30356812766;
    tmp_msg_0.query_channel = 194U;
    tmp_msg_0.reply_channel = 130U;
    tmp_msg_0.transponder_delay = 206U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.249692570813;
    msg.y = 0.784279956252;
    msg.var_x = 0.870126093337;
    msg.var_y = 0.504838049839;
    msg.distance = 0.170562957052;

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
    msg.setTimeStamp(0.0930019626895);
    msg.setSource(41739U);
    msg.setSourceEntity(162U);
    msg.setDestination(62370U);
    msg.setDestinationEntity(12U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("RTYKUVCPAJBZSDIWWGNQDWOUGKUZPTOKFQXFCBPKWXFMVVWLARSOINITYWMKTJIYIYNNXZLUBUVJNZTYUOPELUNSTGLHBDUMJFTQRVJPFGCPEQJZHXHELPBADXREHYNNKBFZHDUKWZDCGAIZORJGSAXBVTLPSRCSCOWVJLZRMDLHFYEXXJMDNTCCAMVOSBIQNYXERYAIHOPGODQERAZSFKSCGSKEOLFHAUTXYIAJFWQBHCMEKPMLQ");
    tmp_msg_0.lat = 0.923391139869;
    tmp_msg_0.lon = 0.221588396531;
    tmp_msg_0.depth = 0.842413285922;
    tmp_msg_0.query_channel = 127U;
    tmp_msg_0.reply_channel = 94U;
    tmp_msg_0.transponder_delay = 195U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.0722303957662;
    msg.y = 0.827721818983;
    msg.var_x = 0.536149679041;
    msg.var_y = 0.522310202067;
    msg.distance = 0.535862896939;

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
    msg.setTimeStamp(0.0506715509076);
    msg.setSource(43189U);
    msg.setSourceEntity(53U);
    msg.setDestination(6245U);
    msg.setDestinationEntity(49U);
    msg.state = 148U;

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
    msg.setTimeStamp(0.0377899907839);
    msg.setSource(2917U);
    msg.setSourceEntity(177U);
    msg.setDestination(389U);
    msg.setDestinationEntity(80U);
    msg.state = 98U;

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
    msg.setTimeStamp(0.704569389358);
    msg.setSource(10794U);
    msg.setSourceEntity(137U);
    msg.setDestination(48568U);
    msg.setDestinationEntity(20U);
    msg.state = 172U;

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
    msg.setTimeStamp(0.918702282141);
    msg.setSource(16009U);
    msg.setSourceEntity(48U);
    msg.setDestination(13486U);
    msg.setDestinationEntity(73U);
    msg.x = 0.675357808919;
    msg.y = 0.65124343632;
    msg.z = 0.678200820633;

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
    msg.setTimeStamp(0.763009010694);
    msg.setSource(5602U);
    msg.setSourceEntity(0U);
    msg.setDestination(60095U);
    msg.setDestinationEntity(9U);
    msg.x = 0.110765640063;
    msg.y = 0.886524323317;
    msg.z = 0.380274102116;

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
    msg.setTimeStamp(0.736605383593);
    msg.setSource(22762U);
    msg.setSourceEntity(71U);
    msg.setDestination(16670U);
    msg.setDestinationEntity(7U);
    msg.x = 0.226560375152;
    msg.y = 0.550166398291;
    msg.z = 0.173866860713;

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
    msg.setTimeStamp(0.548536055812);
    msg.setSource(13928U);
    msg.setSourceEntity(33U);
    msg.setDestination(61938U);
    msg.setDestinationEntity(233U);
    msg.va = 0.825763176977;
    msg.aoa = 0.461493595678;
    msg.ssa = 0.476427251788;

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
    msg.setTimeStamp(0.924732104309);
    msg.setSource(30782U);
    msg.setSourceEntity(136U);
    msg.setDestination(63205U);
    msg.setDestinationEntity(94U);
    msg.va = 0.450938397979;
    msg.aoa = 0.464621161582;
    msg.ssa = 0.951009504023;

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
    msg.setTimeStamp(0.992217000416);
    msg.setSource(18070U);
    msg.setSourceEntity(206U);
    msg.setDestination(24362U);
    msg.setDestinationEntity(0U);
    msg.va = 0.581792064743;
    msg.aoa = 0.188175229915;
    msg.ssa = 0.549786824282;

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
    msg.setTimeStamp(0.498798239335);
    msg.setSource(36636U);
    msg.setSourceEntity(10U);
    msg.setDestination(24740U);
    msg.setDestinationEntity(247U);
    msg.value = 0.962695090315;
    msg.off = 0.00470269127992;

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
    msg.setTimeStamp(0.513579753781);
    msg.setSource(15568U);
    msg.setSourceEntity(198U);
    msg.setDestination(2924U);
    msg.setDestinationEntity(110U);
    msg.value = 0.67369488666;
    msg.off = 0.921819415552;

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
    msg.setTimeStamp(0.732577866761);
    msg.setSource(26565U);
    msg.setSourceEntity(55U);
    msg.setDestination(23251U);
    msg.setDestinationEntity(89U);
    msg.value = 0.0685365711831;
    msg.off = 0.159706524406;

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
    msg.setTimeStamp(0.0990215495197);
    msg.setSource(20116U);
    msg.setSourceEntity(139U);
    msg.setDestination(947U);
    msg.setDestinationEntity(34U);
    msg.value = 0.931726285152;
    msg.z_units = 95U;

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
    msg.setTimeStamp(0.847526779812);
    msg.setSource(33574U);
    msg.setSourceEntity(153U);
    msg.setDestination(45759U);
    msg.setDestinationEntity(195U);
    msg.value = 0.0214732437795;
    msg.z_units = 173U;

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
    msg.setTimeStamp(0.694104268491);
    msg.setSource(37061U);
    msg.setSourceEntity(157U);
    msg.setDestination(11526U);
    msg.setDestinationEntity(165U);
    msg.value = 0.125696177344;
    msg.z_units = 111U;

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
    msg.setTimeStamp(0.788185781947);
    msg.setSource(51673U);
    msg.setSourceEntity(80U);
    msg.setDestination(53700U);
    msg.setDestinationEntity(93U);
    msg.value = 0.214036726981;
    msg.speed_units = 23U;

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
    msg.setTimeStamp(0.216116680894);
    msg.setSource(22035U);
    msg.setSourceEntity(110U);
    msg.setDestination(63176U);
    msg.setDestinationEntity(222U);
    msg.value = 0.345999885639;
    msg.speed_units = 162U;

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
    msg.setTimeStamp(0.69470742387);
    msg.setSource(62433U);
    msg.setSourceEntity(226U);
    msg.setDestination(7628U);
    msg.setDestinationEntity(172U);
    msg.value = 0.0436341185204;
    msg.speed_units = 5U;

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
    msg.setTimeStamp(0.476301430616);
    msg.setSource(29870U);
    msg.setSourceEntity(218U);
    msg.setDestination(58744U);
    msg.setDestinationEntity(117U);
    msg.value = 0.887973634386;

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
    msg.setTimeStamp(0.912295138004);
    msg.setSource(33437U);
    msg.setSourceEntity(196U);
    msg.setDestination(65326U);
    msg.setDestinationEntity(175U);
    msg.value = 0.845062576674;

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
    msg.setTimeStamp(0.752785915128);
    msg.setSource(33436U);
    msg.setSourceEntity(45U);
    msg.setDestination(35095U);
    msg.setDestinationEntity(236U);
    msg.value = 0.069332914517;

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
    msg.setTimeStamp(0.128334636835);
    msg.setSource(34744U);
    msg.setSourceEntity(10U);
    msg.setDestination(49693U);
    msg.setDestinationEntity(45U);
    msg.value = 0.582138338391;

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
    msg.setTimeStamp(0.0350086663255);
    msg.setSource(45839U);
    msg.setSourceEntity(69U);
    msg.setDestination(2470U);
    msg.setDestinationEntity(131U);
    msg.value = 0.594847465232;

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
    msg.setTimeStamp(0.54039138214);
    msg.setSource(46038U);
    msg.setSourceEntity(65U);
    msg.setDestination(27602U);
    msg.setDestinationEntity(105U);
    msg.value = 0.00996557036872;

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
    msg.setTimeStamp(0.34769027309);
    msg.setSource(48218U);
    msg.setSourceEntity(95U);
    msg.setDestination(46403U);
    msg.setDestinationEntity(85U);
    msg.value = 0.721731637163;

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
    msg.setTimeStamp(0.825587795193);
    msg.setSource(9464U);
    msg.setSourceEntity(120U);
    msg.setDestination(33364U);
    msg.setDestinationEntity(141U);
    msg.value = 0.45016923771;

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
    msg.setTimeStamp(0.0690985633751);
    msg.setSource(22684U);
    msg.setSourceEntity(107U);
    msg.setDestination(27717U);
    msg.setDestinationEntity(138U);
    msg.value = 0.148107236863;

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
    msg.setTimeStamp(0.570380324999);
    msg.setSource(44635U);
    msg.setSourceEntity(65U);
    msg.setDestination(18866U);
    msg.setDestinationEntity(36U);
    msg.path_ref = 2482903983U;
    msg.start_lat = 0.93640859497;
    msg.start_lon = 0.707718768419;
    msg.start_z = 0.657027148354;
    msg.start_z_units = 157U;
    msg.end_lat = 0.195174806823;
    msg.end_lon = 0.216093660048;
    msg.end_z = 0.787287442209;
    msg.end_z_units = 124U;
    msg.speed = 0.0785898767311;
    msg.speed_units = 111U;
    msg.lradius = 0.48611715029;
    msg.flags = 74U;

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
    msg.setTimeStamp(0.695550531932);
    msg.setSource(37634U);
    msg.setSourceEntity(28U);
    msg.setDestination(31989U);
    msg.setDestinationEntity(219U);
    msg.path_ref = 1381805770U;
    msg.start_lat = 0.673622629573;
    msg.start_lon = 0.957951684457;
    msg.start_z = 0.811907248081;
    msg.start_z_units = 34U;
    msg.end_lat = 0.149829460246;
    msg.end_lon = 0.279111703278;
    msg.end_z = 0.0506592358295;
    msg.end_z_units = 69U;
    msg.speed = 0.326124633185;
    msg.speed_units = 140U;
    msg.lradius = 0.824534366193;
    msg.flags = 191U;

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
    msg.setTimeStamp(0.714467809524);
    msg.setSource(58680U);
    msg.setSourceEntity(35U);
    msg.setDestination(16915U);
    msg.setDestinationEntity(175U);
    msg.path_ref = 2703635815U;
    msg.start_lat = 0.250961364439;
    msg.start_lon = 0.240424055215;
    msg.start_z = 0.0530716806558;
    msg.start_z_units = 88U;
    msg.end_lat = 0.462690000469;
    msg.end_lon = 0.622406464757;
    msg.end_z = 0.0390163767711;
    msg.end_z_units = 244U;
    msg.speed = 0.748702966434;
    msg.speed_units = 200U;
    msg.lradius = 0.795992733282;
    msg.flags = 26U;

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
    msg.setTimeStamp(0.0381856001585);
    msg.setSource(41224U);
    msg.setSourceEntity(200U);
    msg.setDestination(12142U);
    msg.setDestinationEntity(17U);
    msg.x = 0.134967155861;
    msg.y = 0.733633180728;
    msg.z = 0.712178225427;
    msg.k = 0.433617226257;
    msg.m = 0.0798117116926;
    msg.n = 0.852177871346;
    msg.flags = 14U;

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
    msg.setTimeStamp(0.509482374583);
    msg.setSource(51033U);
    msg.setSourceEntity(117U);
    msg.setDestination(9598U);
    msg.setDestinationEntity(24U);
    msg.x = 0.426045249025;
    msg.y = 0.78780010571;
    msg.z = 0.799405071564;
    msg.k = 0.447621761932;
    msg.m = 0.190111145643;
    msg.n = 0.677642962779;
    msg.flags = 249U;

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
    msg.setTimeStamp(0.52189386883);
    msg.setSource(7065U);
    msg.setSourceEntity(153U);
    msg.setDestination(8536U);
    msg.setDestinationEntity(138U);
    msg.x = 0.198624852336;
    msg.y = 0.270425066826;
    msg.z = 0.648422439486;
    msg.k = 0.914553687513;
    msg.m = 0.552268103441;
    msg.n = 0.245590474341;
    msg.flags = 26U;

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
    msg.setTimeStamp(0.806138132444);
    msg.setSource(9543U);
    msg.setSourceEntity(216U);
    msg.setDestination(47926U);
    msg.setDestinationEntity(63U);
    msg.value = 0.399034893099;

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
    msg.setTimeStamp(0.759684207179);
    msg.setSource(21441U);
    msg.setSourceEntity(18U);
    msg.setDestination(45087U);
    msg.setDestinationEntity(25U);
    msg.value = 0.889794952186;

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
    msg.setTimeStamp(0.906952271626);
    msg.setSource(35841U);
    msg.setSourceEntity(207U);
    msg.setDestination(34721U);
    msg.setDestinationEntity(14U);
    msg.value = 0.926931191921;

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
    msg.setTimeStamp(0.554959846099);
    msg.setSource(37268U);
    msg.setSourceEntity(203U);
    msg.setDestination(1189U);
    msg.setDestinationEntity(250U);
    msg.u = 0.431873319077;
    msg.v = 0.183634964614;
    msg.w = 0.12204299131;
    msg.p = 0.1121580849;
    msg.q = 0.0444611976741;
    msg.r = 0.809617143029;
    msg.flags = 187U;

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
    msg.setTimeStamp(0.976232523574);
    msg.setSource(35984U);
    msg.setSourceEntity(64U);
    msg.setDestination(46658U);
    msg.setDestinationEntity(118U);
    msg.u = 0.733496825954;
    msg.v = 0.732187647233;
    msg.w = 0.721855612128;
    msg.p = 0.211195561914;
    msg.q = 0.647675189826;
    msg.r = 0.252094182944;
    msg.flags = 208U;

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
    msg.setTimeStamp(0.12212512074);
    msg.setSource(9193U);
    msg.setSourceEntity(249U);
    msg.setDestination(62090U);
    msg.setDestinationEntity(87U);
    msg.u = 0.0675630918895;
    msg.v = 0.918550048806;
    msg.w = 0.871581137673;
    msg.p = 0.696526638614;
    msg.q = 0.224236240494;
    msg.r = 0.380616903469;
    msg.flags = 122U;

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
    msg.setTimeStamp(0.678043480192);
    msg.setSource(22971U);
    msg.setSourceEntity(107U);
    msg.setDestination(64331U);
    msg.setDestinationEntity(63U);
    msg.path_ref = 2060099010U;
    msg.start_lat = 0.317490977111;
    msg.start_lon = 0.47387358718;
    msg.start_z = 0.445119647678;
    msg.start_z_units = 120U;
    msg.end_lat = 0.130646296817;
    msg.end_lon = 0.390746677759;
    msg.end_z = 0.720863811966;
    msg.end_z_units = 95U;
    msg.lradius = 0.967120102841;
    msg.flags = 35U;
    msg.x = 0.636123409192;
    msg.y = 0.775749785566;
    msg.z = 0.540529068547;
    msg.vx = 0.190432102804;
    msg.vy = 0.454404330972;
    msg.vz = 0.263034292491;
    msg.course_error = 0.166080439676;
    msg.eta = 47308U;

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
    msg.setTimeStamp(0.616065986504);
    msg.setSource(26395U);
    msg.setSourceEntity(101U);
    msg.setDestination(45076U);
    msg.setDestinationEntity(63U);
    msg.path_ref = 2626135247U;
    msg.start_lat = 0.0137269716594;
    msg.start_lon = 0.57430277156;
    msg.start_z = 0.0792434237656;
    msg.start_z_units = 159U;
    msg.end_lat = 0.0104382329804;
    msg.end_lon = 0.687427522252;
    msg.end_z = 0.361188357497;
    msg.end_z_units = 61U;
    msg.lradius = 0.84265574786;
    msg.flags = 108U;
    msg.x = 0.319861573397;
    msg.y = 0.953585595717;
    msg.z = 0.843171067931;
    msg.vx = 0.359271172135;
    msg.vy = 0.133227314906;
    msg.vz = 0.408432093858;
    msg.course_error = 0.718028845345;
    msg.eta = 1393U;

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
    msg.setTimeStamp(0.236436360691);
    msg.setSource(23145U);
    msg.setSourceEntity(84U);
    msg.setDestination(65294U);
    msg.setDestinationEntity(6U);
    msg.path_ref = 520036004U;
    msg.start_lat = 0.0278206088749;
    msg.start_lon = 0.989414433859;
    msg.start_z = 0.706910434651;
    msg.start_z_units = 239U;
    msg.end_lat = 0.188046056344;
    msg.end_lon = 0.876584583291;
    msg.end_z = 0.45986081636;
    msg.end_z_units = 146U;
    msg.lradius = 0.304558342867;
    msg.flags = 233U;
    msg.x = 0.438422519781;
    msg.y = 0.774540608205;
    msg.z = 0.68232433634;
    msg.vx = 0.606413646808;
    msg.vy = 0.366789153375;
    msg.vz = 0.288661036842;
    msg.course_error = 0.14716386445;
    msg.eta = 28429U;

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
    msg.setTimeStamp(0.104014720835);
    msg.setSource(8222U);
    msg.setSourceEntity(17U);
    msg.setDestination(4077U);
    msg.setDestinationEntity(96U);
    msg.k = 0.15801739135;
    msg.m = 0.551665321953;
    msg.n = 0.329842235215;

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
    msg.setTimeStamp(0.230979677803);
    msg.setSource(421U);
    msg.setSourceEntity(105U);
    msg.setDestination(14574U);
    msg.setDestinationEntity(144U);
    msg.k = 0.100491401092;
    msg.m = 0.6113687133;
    msg.n = 0.962470765215;

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
    msg.setTimeStamp(0.574294613553);
    msg.setSource(20622U);
    msg.setSourceEntity(222U);
    msg.setDestination(50663U);
    msg.setDestinationEntity(134U);
    msg.k = 0.280212001413;
    msg.m = 0.0784875308901;
    msg.n = 0.359760763059;

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
    msg.setTimeStamp(0.532467306454);
    msg.setSource(17461U);
    msg.setSourceEntity(169U);
    msg.setDestination(57700U);
    msg.setDestinationEntity(95U);
    msg.p = 0.717775244248;
    msg.i = 0.824855902621;
    msg.d = 0.447257720155;
    msg.a = 0.226907980824;

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
    msg.setTimeStamp(0.667297278814);
    msg.setSource(3511U);
    msg.setSourceEntity(119U);
    msg.setDestination(47355U);
    msg.setDestinationEntity(14U);
    msg.p = 0.819567750291;
    msg.i = 0.156651410302;
    msg.d = 0.206601135222;
    msg.a = 0.7347699101;

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
    msg.setTimeStamp(0.126425634185);
    msg.setSource(62710U);
    msg.setSourceEntity(182U);
    msg.setDestination(27322U);
    msg.setDestinationEntity(1U);
    msg.p = 0.952803487115;
    msg.i = 0.567714557889;
    msg.d = 0.544998494739;
    msg.a = 0.800597188157;

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
    msg.setTimeStamp(0.41974761938);
    msg.setSource(17238U);
    msg.setSourceEntity(78U);
    msg.setDestination(47853U);
    msg.setDestinationEntity(58U);
    msg.op = 251U;

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
    msg.setTimeStamp(0.663567666806);
    msg.setSource(8175U);
    msg.setSourceEntity(138U);
    msg.setDestination(18769U);
    msg.setDestinationEntity(67U);
    msg.op = 166U;

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
    msg.setTimeStamp(0.14883099477);
    msg.setSource(21457U);
    msg.setSourceEntity(17U);
    msg.setDestination(61804U);
    msg.setDestinationEntity(84U);
    msg.op = 223U;

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
    msg.setTimeStamp(0.841400643255);
    msg.setSource(20962U);
    msg.setSourceEntity(10U);
    msg.setDestination(11560U);
    msg.setDestinationEntity(42U);
    msg.x = 0.0377762054885;
    msg.y = 0.270139798181;
    msg.z = 0.612825493675;
    msg.vx = 0.827996324058;
    msg.vy = 0.372269223018;
    msg.vz = 0.865913253884;
    msg.ax = 0.141993208136;
    msg.ay = 0.459886318628;
    msg.az = 0.770794856298;
    msg.flags = 52313U;

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
    msg.setTimeStamp(0.715743987626);
    msg.setSource(42323U);
    msg.setSourceEntity(112U);
    msg.setDestination(38971U);
    msg.setDestinationEntity(225U);
    msg.x = 0.219766301421;
    msg.y = 0.609371384953;
    msg.z = 0.237635431494;
    msg.vx = 0.491599042617;
    msg.vy = 0.589480481422;
    msg.vz = 0.0350644365766;
    msg.ax = 0.219439152193;
    msg.ay = 0.882977530674;
    msg.az = 0.5356283776;
    msg.flags = 56593U;

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
    msg.setTimeStamp(0.834923825104);
    msg.setSource(49982U);
    msg.setSourceEntity(233U);
    msg.setDestination(61496U);
    msg.setDestinationEntity(137U);
    msg.x = 0.378448083052;
    msg.y = 0.151285345238;
    msg.z = 0.0795310636355;
    msg.vx = 0.855265192217;
    msg.vy = 0.34125021408;
    msg.vz = 0.388823049018;
    msg.ax = 0.450851892993;
    msg.ay = 0.666849656635;
    msg.az = 0.72103123664;
    msg.flags = 32984U;

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
    msg.setTimeStamp(0.0400900880855);
    msg.setSource(2286U);
    msg.setSourceEntity(244U);
    msg.setDestination(20949U);
    msg.setDestinationEntity(210U);
    msg.value = 0.461234393187;

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
    msg.setTimeStamp(0.281075942567);
    msg.setSource(1852U);
    msg.setSourceEntity(202U);
    msg.setDestination(63885U);
    msg.setDestinationEntity(45U);
    msg.value = 0.966556031111;

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
    msg.setTimeStamp(0.466060160092);
    msg.setSource(33363U);
    msg.setSourceEntity(57U);
    msg.setDestination(3934U);
    msg.setDestinationEntity(131U);
    msg.value = 0.593608870196;

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
    msg.setTimeStamp(0.123115797561);
    msg.setSource(42465U);
    msg.setSourceEntity(216U);
    msg.setDestination(27945U);
    msg.setDestinationEntity(163U);
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.path_ref = 312765035U;
    tmp_msg_0.start_lat = 0.839978902701;
    tmp_msg_0.start_lon = 0.652627657332;
    tmp_msg_0.start_z = 0.10974095447;
    tmp_msg_0.start_z_units = 14U;
    tmp_msg_0.end_lat = 0.306483957318;
    tmp_msg_0.end_lon = 0.971981791064;
    tmp_msg_0.end_z = 0.904090593775;
    tmp_msg_0.end_z_units = 233U;
    tmp_msg_0.speed = 0.193529273361;
    tmp_msg_0.speed_units = 41U;
    tmp_msg_0.lradius = 0.515099727351;
    tmp_msg_0.flags = 118U;
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
    msg.setTimeStamp(0.689008929236);
    msg.setSource(59804U);
    msg.setSourceEntity(163U);
    msg.setDestination(3772U);
    msg.setDestinationEntity(156U);
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.path_ref = 3382819711U;
    tmp_msg_0.start_lat = 0.170175972538;
    tmp_msg_0.start_lon = 0.977237436064;
    tmp_msg_0.start_z = 0.295856612866;
    tmp_msg_0.start_z_units = 225U;
    tmp_msg_0.end_lat = 0.653704243091;
    tmp_msg_0.end_lon = 0.4583530212;
    tmp_msg_0.end_z = 0.822001931498;
    tmp_msg_0.end_z_units = 198U;
    tmp_msg_0.speed = 0.637352512072;
    tmp_msg_0.speed_units = 162U;
    tmp_msg_0.lradius = 0.517292485148;
    tmp_msg_0.flags = 224U;
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
    msg.setTimeStamp(0.42103748988);
    msg.setSource(40749U);
    msg.setSourceEntity(224U);
    msg.setDestination(29298U);
    msg.setDestinationEntity(1U);
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.path_ref = 791553359U;
    tmp_msg_0.start_lat = 0.777093926106;
    tmp_msg_0.start_lon = 0.572670230389;
    tmp_msg_0.start_z = 0.0398581642356;
    tmp_msg_0.start_z_units = 248U;
    tmp_msg_0.end_lat = 0.245095879933;
    tmp_msg_0.end_lon = 0.830172787859;
    tmp_msg_0.end_z = 0.864452027625;
    tmp_msg_0.end_z_units = 114U;
    tmp_msg_0.speed = 0.394229464926;
    tmp_msg_0.speed_units = 190U;
    tmp_msg_0.lradius = 0.817234996368;
    tmp_msg_0.flags = 98U;
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
    msg.setTimeStamp(0.925562248303);
    msg.setSource(52836U);
    msg.setSourceEntity(5U);
    msg.setDestination(2185U);
    msg.setDestinationEntity(130U);
    msg.timeout = 19607U;
    msg.lat = 0.861852402844;
    msg.lon = 0.906617077073;
    msg.z = 0.691863612868;
    msg.z_units = 152U;
    msg.speed = 0.75101649291;
    msg.speed_units = 125U;
    msg.roll = 0.505258310752;
    msg.pitch = 0.19868043779;
    msg.yaw = 0.786093182323;
    msg.custom.assign("TCQITMFDUJRYEVLRZPSYXKJXBAMGDIBGKCENVLIIWTCMUYTHOYLCUUKAJVWCDVOECOBKUVQVJNDPISDHOJMGUQMSWBOYWTGXRHUPXLAEUCDZGIXOGAIKDDQJETFOWLQYFRP");

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
    msg.setTimeStamp(0.4405201984);
    msg.setSource(33275U);
    msg.setSourceEntity(137U);
    msg.setDestination(6382U);
    msg.setDestinationEntity(108U);
    msg.timeout = 41032U;
    msg.lat = 0.0704522749187;
    msg.lon = 0.274688329664;
    msg.z = 0.484999509718;
    msg.z_units = 61U;
    msg.speed = 0.820851650799;
    msg.speed_units = 141U;
    msg.roll = 0.443109885496;
    msg.pitch = 0.891915182663;
    msg.yaw = 0.275927287544;
    msg.custom.assign("NCJTQOLTOOJTQLXGSYXRGBALXQFQVCPDELRMWYMLJNUIGCSZXOZXVCVPMKYIHUABWKLWZDWEZMXCDAECHTBNWPYWARUCDBWDRFIGAUPMTEHJFIUGEQXVFATNCJQRXSKRSZBUDPWANHUQEIKHVMFDOULPVOBP");

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
    msg.setTimeStamp(0.369304013501);
    msg.setSource(17480U);
    msg.setSourceEntity(82U);
    msg.setDestination(43384U);
    msg.setDestinationEntity(209U);
    msg.timeout = 2442U;
    msg.lat = 0.616941688044;
    msg.lon = 0.170057637953;
    msg.z = 0.146836045472;
    msg.z_units = 242U;
    msg.speed = 0.410255717718;
    msg.speed_units = 163U;
    msg.roll = 0.731870523527;
    msg.pitch = 0.711748953334;
    msg.yaw = 0.868612956185;
    msg.custom.assign("VTJFFZZRIIGMTUWOQCEBHFQHKKCBVKRJQSTUHCBBHWKFUYFHCOIAMDKVATESM");

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
    msg.setTimeStamp(0.979450783237);
    msg.setSource(43555U);
    msg.setSourceEntity(85U);
    msg.setDestination(9659U);
    msg.setDestinationEntity(77U);
    msg.timeout = 30246U;
    msg.lat = 0.92592408193;
    msg.lon = 0.43367013688;
    msg.z = 0.557541315126;
    msg.z_units = 39U;
    msg.speed = 0.869141846721;
    msg.speed_units = 55U;
    msg.duration = 13297U;
    msg.radius = 0.344414273323;
    msg.flags = 8U;
    msg.custom.assign("KEYLRYMDGNWQYAKYDFHEGNBDXKKMXCHFJRTJDMIHMDCVONISOOUTTVPIAPCQLVSOOJPBTWMSYSRAXJOJOUOWMAQMZNBWULCQLTYCIVSSXIBFMEJYWFKRMPP");

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
    msg.setTimeStamp(0.485069837676);
    msg.setSource(52618U);
    msg.setSourceEntity(218U);
    msg.setDestination(13540U);
    msg.setDestinationEntity(113U);
    msg.timeout = 8464U;
    msg.lat = 0.119752058633;
    msg.lon = 0.640841217138;
    msg.z = 0.574099635141;
    msg.z_units = 119U;
    msg.speed = 0.865459702624;
    msg.speed_units = 184U;
    msg.duration = 36042U;
    msg.radius = 0.0950350962145;
    msg.flags = 3U;
    msg.custom.assign("LDNOBAZJXKJEPFHOPCGQTRVFHPUBDGBVPZSSONICCAMGULNLCWYWUBKVCUWKSPCBKRNMTFBFJGHZHVSNEFTDWAQCDMAQZHGMWWOJYMVLTPQERMULPHUQITIRPJZOEHSJIQAUJGODOZRGRGHKGAYGEHZHWYYFYYXCTU");

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
    msg.setTimeStamp(0.112687978944);
    msg.setSource(28249U);
    msg.setSourceEntity(134U);
    msg.setDestination(59253U);
    msg.setDestinationEntity(104U);
    msg.timeout = 19829U;
    msg.lat = 0.0170031741084;
    msg.lon = 0.878304167004;
    msg.z = 0.609893682498;
    msg.z_units = 6U;
    msg.speed = 0.940837186609;
    msg.speed_units = 159U;
    msg.duration = 8015U;
    msg.radius = 0.343755298092;
    msg.flags = 139U;
    msg.custom.assign("ODHFTZNHFRPAEIMHFMCVSZEBZXSJIOHJYZMVBTCKSPOZLTCPDODOWIZOKOPYXARFXLYTTVCJUQRAJUBCBNEMCZIHLNNLDPMCSNVQHUYKZKGLDIERTKATFVKIYOYATDJJGUTNQNLRGOFFEFWWHOMBDSBYVFXRJRJMGMITAPKQN");

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
    msg.setTimeStamp(0.619460894517);
    msg.setSource(577U);
    msg.setSourceEntity(12U);
    msg.setDestination(5171U);
    msg.setDestinationEntity(24U);
    msg.custom.assign("CWDOSDCVREJLVPRWLPBXFIODXJKRURYELMKAZJIJZQESXBNJFYWBWTNQCBPDACBEAQRAQWNAXUTPJIXELNPURDHFWHNHRZCROAICMWGNFTGMHHUHNMOPUZJBSQFVPLLGAVGTBVVJTUAFSGEYZAIVHPSKMWDOGKUOCJZESXNIGUXUAFJMENTENHZTPCFMTGKMKL");

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
    msg.setTimeStamp(0.772276355149);
    msg.setSource(42462U);
    msg.setSourceEntity(198U);
    msg.setDestination(44872U);
    msg.setDestinationEntity(111U);
    msg.custom.assign("UOAWDHUSIFCICFAMQTPVBRILGZJJPQXYLSNYRQGDZITVTNHYXCDMLTKZGMXSKYLQXCRHKZPTKFOSTEWRJVGATNUJONWXLEKEBVASLBSQGQZYQPSBEKMCCJOQXZZAAPDEXNBAHQONIUICFOYUGADWBDEN");

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
    msg.setTimeStamp(0.369337330324);
    msg.setSource(23806U);
    msg.setSourceEntity(246U);
    msg.setDestination(49551U);
    msg.setDestinationEntity(142U);
    msg.custom.assign("YCYVTTNOOARUNWLWYRUONHAKBSJGMYXBGPWRHDJEZH");

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
    msg.setTimeStamp(0.40255981034);
    msg.setSource(41810U);
    msg.setSourceEntity(122U);
    msg.setDestination(63637U);
    msg.setDestinationEntity(173U);
    msg.timeout = 62087U;
    msg.lat = 0.344433838526;
    msg.lon = 0.197260824218;
    msg.z = 0.702622565594;
    msg.z_units = 196U;
    msg.duration = 61074U;
    msg.speed = 0.921016726886;
    msg.speed_units = 163U;
    msg.type = 130U;
    msg.radius = 0.41117144817;
    msg.length = 0.623180047114;
    msg.bearing = 0.392754261413;
    msg.direction = 247U;
    msg.custom.assign("ICMZDKTFBEHWYFNBKWLRCPWHIXIJIRJWAZONMKNKVBDZAZ");

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
    msg.setTimeStamp(0.975239231246);
    msg.setSource(63019U);
    msg.setSourceEntity(145U);
    msg.setDestination(41283U);
    msg.setDestinationEntity(23U);
    msg.timeout = 46093U;
    msg.lat = 0.0194924948659;
    msg.lon = 0.295103371848;
    msg.z = 0.120935611476;
    msg.z_units = 134U;
    msg.duration = 31472U;
    msg.speed = 0.0330453001585;
    msg.speed_units = 190U;
    msg.type = 133U;
    msg.radius = 0.685704252953;
    msg.length = 0.291338749905;
    msg.bearing = 0.203892580382;
    msg.direction = 207U;
    msg.custom.assign("PDXOTQFVELPJVFZVDHOLRQIEHPRYHDIMQNCZCCTAGFORRRWPXSWFAOTNJKARWWKKUDNQUPKMRUJDHFCHIBKXPZSSKEUGOBGWMHFPEOVFTEDYUVCNETZJVLGJZUBZENJGMEFWSDPIFMKGJOGMCZIOYUQCJNYOIXEVAWNJTUIQLBLMNXZNBU");

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
    msg.setTimeStamp(0.351116665106);
    msg.setSource(30417U);
    msg.setSourceEntity(108U);
    msg.setDestination(57754U);
    msg.setDestinationEntity(1U);
    msg.timeout = 11735U;
    msg.lat = 0.750719903001;
    msg.lon = 0.173695034212;
    msg.z = 0.0349942519856;
    msg.z_units = 64U;
    msg.duration = 5153U;
    msg.speed = 0.192503099866;
    msg.speed_units = 250U;
    msg.type = 79U;
    msg.radius = 0.58886835074;
    msg.length = 0.804238638717;
    msg.bearing = 0.866949480878;
    msg.direction = 75U;
    msg.custom.assign("OXFARTVUBETPDLMHVGOAJLPULBKPLGIDCFNEWJLJDHZZCSACOMCECZTFQYBBSGDPJYANNCWOOPSYHVCQVUNVRAMNANYJKQQMACZGTKPSOIJHMSCMJWJXXOBKTRJPZHUYGEJVSCRBFEENMWIWKNBVQOAPIEZUFXXAQMZUYLODTO");

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
    msg.setTimeStamp(0.080241186097);
    msg.setSource(21529U);
    msg.setSourceEntity(65U);
    msg.setDestination(55938U);
    msg.setDestinationEntity(42U);
    msg.duration = 49997U;
    msg.custom.assign("KNQIBQDYPRPCEJJQHXEPYVMGD");

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
    msg.setTimeStamp(0.130721048303);
    msg.setSource(45410U);
    msg.setSourceEntity(71U);
    msg.setDestination(24468U);
    msg.setDestinationEntity(139U);
    msg.duration = 27227U;
    msg.custom.assign("NHMYQBUDXCYNZAOPVVRTIIUWHKBDRDBVNDWZPITNVHHXEQYKJDLPDBBQZUKAGTECQTCYPMVVNRBTXRHIGYMDLTCKKPWIOAWUFDNGWBWGWQGEIRYMOSZZISLCJRFHJFHTMZOZCLOGMRASNQUZLMFAPCSLEFFUXAMYHLMAGUGQQQOUPSUEROKNREJKRDJELFJSEATYSCZXGXXHLABOQJPGXNJWEEBITXSOJKIZSP");

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
    msg.setTimeStamp(0.986013242574);
    msg.setSource(18924U);
    msg.setSourceEntity(42U);
    msg.setDestination(38177U);
    msg.setDestinationEntity(120U);
    msg.duration = 28430U;
    msg.custom.assign("CKFTUAIRQYNRXICSRHGXDFIZYZONPJGMIFGLTOIMDZOXSCLWEVIQYDLNVSYBSBCRAOBDNGFWJKZCRDTZPTHNBKEJDWSHGUCPOEHTJJZMUADVGSPOKYOAPVXCMWNKRBLHAKRXYZREBTKNYNXLCWOEEUTVWXDKGTEQTPWFGEMULSPUVJZJ");

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
    msg.setTimeStamp(0.017127902495);
    msg.setSource(11647U);
    msg.setSourceEntity(234U);
    msg.setDestination(4820U);
    msg.setDestinationEntity(103U);
    IMC::DesiredHeading tmp_msg_0;
    tmp_msg_0.value = 0.922172378761;
    tmp_msg_0.off = 0.228341657518;
    msg.control.set(tmp_msg_0);
    msg.duration = 62925U;
    msg.custom.assign("APUIFYVZLOUCKJQYXTYRTGLVFLASEUOQBPIMWAEFFHPQINKFYALTXIPSEGOBLTHKHHRIDWGRLWCKCNWEJPBKQJLDHESPEIDPZEOJUUTAKZXOBB");

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
    msg.setTimeStamp(0.0303969801045);
    msg.setSource(40950U);
    msg.setSourceEntity(220U);
    msg.setDestination(10611U);
    msg.setDestinationEntity(143U);
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.path_ref = 3491383256U;
    tmp_msg_0.start_lat = 0.503990878738;
    tmp_msg_0.start_lon = 0.584678382158;
    tmp_msg_0.start_z = 0.225712778317;
    tmp_msg_0.start_z_units = 36U;
    tmp_msg_0.end_lat = 0.849037250607;
    tmp_msg_0.end_lon = 0.548605499075;
    tmp_msg_0.end_z = 0.228785667056;
    tmp_msg_0.end_z_units = 44U;
    tmp_msg_0.speed = 0.0574040380024;
    tmp_msg_0.speed_units = 119U;
    tmp_msg_0.lradius = 0.0188854076164;
    tmp_msg_0.flags = 185U;
    msg.control.set(tmp_msg_0);
    msg.duration = 34338U;
    msg.custom.assign("QEWKDANMFAEAOTEZVFQWBFQOQGVNJDOKNOZYHDKIHRYCXRQLGTFPRCGKVJWCXXTWAPPPJWBISARHTNWGUZUJOWAEQMLPCFKKEOPMYYKLYTTMJJMBPUMWMLZUZYEB");

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
    msg.setTimeStamp(0.242842237018);
    msg.setSource(24921U);
    msg.setSourceEntity(180U);
    msg.setDestination(22718U);
    msg.setDestinationEntity(170U);
    IMC::DesiredRoll tmp_msg_0;
    tmp_msg_0.value = 0.477960235541;
    msg.control.set(tmp_msg_0);
    msg.duration = 64474U;
    msg.custom.assign("HIGBPDPMYHZJSNASXEULEARWEPQINYMAQVLQWMHKXDAG");

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
    msg.setTimeStamp(0.983652240539);
    msg.setSource(46482U);
    msg.setSourceEntity(247U);
    msg.setDestination(48617U);
    msg.setDestinationEntity(133U);
    msg.timeout = 43751U;
    msg.lat = 0.634415625202;
    msg.lon = 0.0894995793268;
    msg.z = 0.432012215349;
    msg.z_units = 87U;
    msg.speed = 0.931045102442;
    msg.speed_units = 77U;
    msg.bearing = 0.436770551942;
    msg.cross_angle = 0.472165709125;
    msg.width = 0.121815533575;
    msg.length = 0.815520835482;
    msg.hstep = 0.0545997527881;
    msg.coff = 230U;
    msg.alternation = 210U;
    msg.flags = 82U;
    msg.custom.assign("QDRBMUUFEKPSZBAQZSNJGVOUBKZCTYCPPGQASWBUWMIALHUBTYIEJFBYOBOMMCPMDVZUFALJJJTSWSUNLKHPEEGTHJRIDHSOEBUYLCVVWKSNXYGRVYGBZIXDMDQTPAFXCGYXDOEZMWIKQCMGDTCIIXVVALNGIFSROVMAWHWXONVIOFEDRHHRTWQLKNJGYRQZLHNPNHE");

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
    msg.setTimeStamp(0.260190200138);
    msg.setSource(64766U);
    msg.setSourceEntity(188U);
    msg.setDestination(40592U);
    msg.setDestinationEntity(197U);
    msg.timeout = 19337U;
    msg.lat = 0.826175364936;
    msg.lon = 0.258340376498;
    msg.z = 0.975715287646;
    msg.z_units = 137U;
    msg.speed = 0.399709928025;
    msg.speed_units = 163U;
    msg.bearing = 0.61112791549;
    msg.cross_angle = 0.503617909222;
    msg.width = 0.516289545048;
    msg.length = 0.624931108886;
    msg.hstep = 0.562709947566;
    msg.coff = 139U;
    msg.alternation = 181U;
    msg.flags = 8U;
    msg.custom.assign("SJBHLEAEJVVQPGOYTIRXTRENDCYNAKFTHYGZQFYYDEZBSFUTLRMORGILSCFAEZLTFQXAZNQMSDJDPZYUOTGTMGGKJAPVOJAMHESUMGJSWAKSKBTUTXWNFDDUWRILQGYPCRKJFYZZMQFCXZCXRLUIIONDRMNVVFERWGPXUDNAUQPIKYBOBOHHKVJACJTOFUKVMINCWQLRASVBHGKPHEQLWBSCH");

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
    msg.setTimeStamp(0.695205388607);
    msg.setSource(3734U);
    msg.setSourceEntity(224U);
    msg.setDestination(20408U);
    msg.setDestinationEntity(52U);
    msg.timeout = 64543U;
    msg.lat = 0.109452265844;
    msg.lon = 0.883077419505;
    msg.z = 0.679745020313;
    msg.z_units = 239U;
    msg.speed = 0.769544301335;
    msg.speed_units = 215U;
    msg.bearing = 0.887246971319;
    msg.cross_angle = 0.346932484256;
    msg.width = 0.784707248706;
    msg.length = 0.133569073773;
    msg.hstep = 0.305343008165;
    msg.coff = 235U;
    msg.alternation = 134U;
    msg.flags = 246U;
    msg.custom.assign("BIWHMMHRCKEVTQNZVGCBBSMOEGEQLFMYSFIGLWPOPZBSVQYW");

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
    msg.setTimeStamp(0.386052943588);
    msg.setSource(24420U);
    msg.setSourceEntity(241U);
    msg.setDestination(49337U);
    msg.setDestinationEntity(41U);
    msg.timeout = 49132U;
    msg.lat = 0.834644886706;
    msg.lon = 0.27450353651;
    msg.z = 0.121549279154;
    msg.z_units = 159U;
    msg.speed = 0.070719482136;
    msg.speed_units = 210U;
    msg.custom.assign("CONFSODQLPJIPWZSDLXUNSRIEETWQZWJKGXGJROQYYHYUDYQTMFVAUVOROBITKNAGCPWPHPRVYLXJZFQZPAESWCNZGRBNYLRKDEBPJAVARPKSYQNCUDFXZIBEMNSLOGMTHOENNOJBZLDZIKETBUMYTTGHEFFBHKKIAFSVWMSVPDJSBGSXXZRMDRQVGUCHWDLAXPVOUMDUJIFHHGLKMTLB");

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
    msg.setTimeStamp(0.669000707155);
    msg.setSource(9088U);
    msg.setSourceEntity(63U);
    msg.setDestination(61329U);
    msg.setDestinationEntity(6U);
    msg.timeout = 61072U;
    msg.lat = 0.857986644231;
    msg.lon = 0.0323887153166;
    msg.z = 0.289113321242;
    msg.z_units = 80U;
    msg.speed = 0.720877683018;
    msg.speed_units = 164U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.291307759764;
    tmp_msg_0.y = 0.752527248404;
    tmp_msg_0.z = 0.981308115938;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("RWCNPPWDRYPH");

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
    msg.setTimeStamp(0.121843016514);
    msg.setSource(62180U);
    msg.setSourceEntity(126U);
    msg.setDestination(31347U);
    msg.setDestinationEntity(80U);
    msg.timeout = 5745U;
    msg.lat = 0.901155776957;
    msg.lon = 0.087630816656;
    msg.z = 0.524625433167;
    msg.z_units = 148U;
    msg.speed = 0.0109857062813;
    msg.speed_units = 196U;
    msg.custom.assign("USDOTUHLEVXJQFNGVCYGKBOVBNNEWFRIRTOXZNTIPAYOKNZCQZWNFSQGYLOSCGFAFRNWPETXRZJPKVDQWGOHVIQDJIHXCFHBMXEYITSRZHKTTPSHCUDOLHEXSMFMEIXRMKYCVSROJJHSITLYRWWUPZCRUUAMLABMZPAAUKBOTQABGLNGYNDZCDUAESPKUVUVTBDEJSFMBJWJBNLFYIVWJIMGKDRHWVFPBCMJLK");

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
    msg.setTimeStamp(0.495966702241);
    msg.setSource(40761U);
    msg.setSourceEntity(11U);
    msg.setDestination(23464U);
    msg.setDestinationEntity(79U);
    msg.x = 0.0232205343222;
    msg.y = 0.245335294202;
    msg.z = 0.993824001345;

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
    msg.setTimeStamp(0.866572927669);
    msg.setSource(6156U);
    msg.setSourceEntity(17U);
    msg.setDestination(40988U);
    msg.setDestinationEntity(126U);
    msg.x = 0.485191094163;
    msg.y = 0.136378654622;
    msg.z = 0.932189120684;

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
    msg.setTimeStamp(0.941358270288);
    msg.setSource(45531U);
    msg.setSourceEntity(179U);
    msg.setDestination(27195U);
    msg.setDestinationEntity(242U);
    msg.x = 0.816304197053;
    msg.y = 0.756045936316;
    msg.z = 0.823081288295;

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
    msg.setTimeStamp(0.814746725582);
    msg.setSource(5210U);
    msg.setSourceEntity(148U);
    msg.setDestination(57604U);
    msg.setDestinationEntity(109U);
    msg.timeout = 18540U;
    msg.lat = 0.492642765063;
    msg.lon = 0.995396706447;
    msg.z = 0.728999960365;
    msg.z_units = 96U;
    msg.amplitude = 0.034662621321;
    msg.pitch = 0.73829777679;
    msg.speed = 0.874390369339;
    msg.speed_units = 6U;
    msg.custom.assign("KLHNFBJZIUFVXHWIWJUXQLDAKTEPATLKPRZNROPNZNQDEHQDTTTZUGSUHLQYYEDZXGGUMXJVOUEFDUOJKZOJHSSAFOSKVNHNHYQSAHBBSRKAEFTCYOQMPXYWNVVPVGIZLQTIRMYMVNLYTLBGGGBRKSCCAIMMVAVPOPEGTEWIIWZZCDG");

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
    msg.setTimeStamp(0.16127706584);
    msg.setSource(13606U);
    msg.setSourceEntity(17U);
    msg.setDestination(5048U);
    msg.setDestinationEntity(204U);
    msg.timeout = 60424U;
    msg.lat = 0.385515345294;
    msg.lon = 0.566873475574;
    msg.z = 0.174229195366;
    msg.z_units = 193U;
    msg.amplitude = 0.0546259610734;
    msg.pitch = 0.380361732561;
    msg.speed = 0.353473191556;
    msg.speed_units = 247U;
    msg.custom.assign("VQIPEDILUALBETUMTIYUNYPTKVGPMZUBCARTPMNLFBNOUKGYEOMQPAHUCAQWUKJHDVNLSGXJZJJHXVHONWEHAOJOZMDEDO");

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
    msg.setTimeStamp(0.414880231327);
    msg.setSource(58161U);
    msg.setSourceEntity(188U);
    msg.setDestination(45124U);
    msg.setDestinationEntity(173U);
    msg.timeout = 4133U;
    msg.lat = 0.985717577926;
    msg.lon = 0.993026029124;
    msg.z = 0.628545128426;
    msg.z_units = 15U;
    msg.amplitude = 0.248156881245;
    msg.pitch = 0.587493490998;
    msg.speed = 0.634590195417;
    msg.speed_units = 88U;
    msg.custom.assign("ZHAAAMQZDPLMDLYBBVZUNUCISSFAZKLNA");

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
    msg.setTimeStamp(0.110797466612);
    msg.setSource(20877U);
    msg.setSourceEntity(43U);
    msg.setDestination(47714U);
    msg.setDestinationEntity(73U);

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
    msg.setTimeStamp(0.85123495645);
    msg.setSource(13472U);
    msg.setSourceEntity(66U);
    msg.setDestination(9068U);
    msg.setDestinationEntity(103U);

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
    msg.setTimeStamp(0.564406878578);
    msg.setSource(43786U);
    msg.setSourceEntity(31U);
    msg.setDestination(2697U);
    msg.setDestinationEntity(119U);

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
    msg.setTimeStamp(0.67219049917);
    msg.setSource(34392U);
    msg.setSourceEntity(84U);
    msg.setDestination(54700U);
    msg.setDestinationEntity(147U);
    msg.lat = 0.0407674902742;
    msg.lon = 0.420338968688;
    msg.z = 0.384215674128;
    msg.z_units = 250U;
    msg.radius = 0.211417656505;
    msg.duration = 34309U;
    msg.speed = 0.0234683708628;
    msg.speed_units = 201U;
    msg.popup_period = 60793U;
    msg.popup_duration = 32270U;
    msg.flags = 242U;
    msg.custom.assign("SEPVTWWFKTJXAQHXREMBXPOTQZJOWDPNLPLGOYNYZFTSATGOZCWCBXDROVVOLLHFARXFJZDGUYJPSATUYUIHBNEKDVUQEAAJBWAQJIUIXMTEQRSNDBMTMLRCKQBBAEYVJSJORUZQOLFWKGLZHTZHPEINIHYYGIRHEVUGXDKNBICCSK");

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
    msg.setTimeStamp(0.586463314821);
    msg.setSource(42449U);
    msg.setSourceEntity(160U);
    msg.setDestination(22768U);
    msg.setDestinationEntity(158U);
    msg.lat = 0.0294333253685;
    msg.lon = 0.355508847425;
    msg.z = 0.640878571416;
    msg.z_units = 146U;
    msg.radius = 0.562611072037;
    msg.duration = 20747U;
    msg.speed = 0.222016888551;
    msg.speed_units = 105U;
    msg.popup_period = 26263U;
    msg.popup_duration = 20260U;
    msg.flags = 238U;
    msg.custom.assign("LRIKRMVBLJIZALHWGKFMSZDZQTEXJBSPYITOTRHGQMCRERVIKEJBIOGRSHSTKGODUUVGWBNZEFXHNEVPUKJSA");

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
    msg.setTimeStamp(0.667283432185);
    msg.setSource(64998U);
    msg.setSourceEntity(118U);
    msg.setDestination(10774U);
    msg.setDestinationEntity(141U);
    msg.lat = 0.277775067612;
    msg.lon = 0.662766855891;
    msg.z = 0.444374780716;
    msg.z_units = 122U;
    msg.radius = 0.0426231932501;
    msg.duration = 4556U;
    msg.speed = 0.180794067495;
    msg.speed_units = 229U;
    msg.popup_period = 23286U;
    msg.popup_duration = 1705U;
    msg.flags = 116U;
    msg.custom.assign("AKSKGILKRPFIXOCCCZUDVQRQUCXIAUBNXTGMJPVHORKOGPGW");

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
    msg.setTimeStamp(0.160042333788);
    msg.setSource(48685U);
    msg.setSourceEntity(83U);
    msg.setDestination(3782U);
    msg.setDestinationEntity(197U);
    msg.timeout = 59432U;
    msg.flags = 108U;
    msg.lat = 0.0996716726157;
    msg.lon = 0.391207393835;
    msg.start_z = 0.868936539265;
    msg.start_z_units = 232U;
    msg.end_z = 0.827586184112;
    msg.end_z_units = 85U;
    msg.radius = 0.0519443615289;
    msg.speed = 0.349857162521;
    msg.speed_units = 79U;
    msg.custom.assign("WCOTRGQEILEBNROFPRHZWEKJMQLCTBFFYXMHCBWHZ");

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
    msg.setTimeStamp(0.978895180398);
    msg.setSource(16054U);
    msg.setSourceEntity(17U);
    msg.setDestination(27775U);
    msg.setDestinationEntity(71U);
    msg.timeout = 43719U;
    msg.flags = 138U;
    msg.lat = 0.716063586389;
    msg.lon = 0.179926793508;
    msg.start_z = 0.505536060507;
    msg.start_z_units = 101U;
    msg.end_z = 0.702595836175;
    msg.end_z_units = 91U;
    msg.radius = 0.4543800411;
    msg.speed = 0.920899087131;
    msg.speed_units = 157U;
    msg.custom.assign("WFQEZXPXQSUVUMETKCCMJUMJMQOUUHBLNDBEGWEPFAIBFIBPBBIYZDLHFKFAQIJHAOILXOOWZDHSWFXIYXJVGALJBLWSNLARHGTFUECGPZODGSFYDLPQJTORTJ");

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
    msg.setTimeStamp(0.642400060181);
    msg.setSource(64723U);
    msg.setSourceEntity(60U);
    msg.setDestination(47328U);
    msg.setDestinationEntity(208U);
    msg.timeout = 15509U;
    msg.flags = 240U;
    msg.lat = 0.0245421548106;
    msg.lon = 0.593364124745;
    msg.start_z = 0.286394423601;
    msg.start_z_units = 53U;
    msg.end_z = 0.75318128198;
    msg.end_z_units = 115U;
    msg.radius = 0.479268122564;
    msg.speed = 0.194737517914;
    msg.speed_units = 43U;
    msg.custom.assign("PJPTXJPTBCCWKJVNJQNIBPFEQZWZXRCWQXYCWNLHIGAELUXAEAAYRHMYDNEAYOIDHVKMVMMBHFTVUQIQXIJEDDJGRQJWFCPFHUKLGKV");

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
    msg.setTimeStamp(0.447087457892);
    msg.setSource(65413U);
    msg.setSourceEntity(253U);
    msg.setDestination(3655U);
    msg.setDestinationEntity(218U);
    msg.timeout = 179U;
    msg.lat = 0.954740848724;
    msg.lon = 0.503669464875;
    msg.z = 0.107101715014;
    msg.z_units = 136U;
    msg.speed = 0.292171207725;
    msg.speed_units = 12U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.233473012641;
    tmp_msg_0.y = 0.00739654208466;
    tmp_msg_0.z = 0.313112146971;
    tmp_msg_0.t = 0.242889048245;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("EPATPWPVFUVGWYSGLYUCYGFGKWFUSWXOOKAQMROGNTFYYTTTAGUBWJFYSBDBONZNAHKYUUUXUEVDBGICPAMBRWJHCIEAMPAZFWQRVSTWOIJLXRHKQDIQOQSJFACPERJQYRWQZJELHDVSLSKE");

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
    msg.setTimeStamp(0.778352259356);
    msg.setSource(55818U);
    msg.setSourceEntity(196U);
    msg.setDestination(50298U);
    msg.setDestinationEntity(235U);
    msg.timeout = 57668U;
    msg.lat = 0.956206033008;
    msg.lon = 0.406884002334;
    msg.z = 0.201642917571;
    msg.z_units = 148U;
    msg.speed = 0.34690848165;
    msg.speed_units = 248U;
    msg.custom.assign("LHMCYQWTYGTKMWIYZDFOASHBTZQKGPWQMPKALBHLRDRSLEFMYOZCZEMRFHTZSNSRQVVJUXCJPNFSELREEFEPYYCWEKFLAENNAJUCOKRCFHJMPBDLOBWDOSOCAGVDVMLUOCAKPQJUGRSTDGUWDNYBSQGNUXQHZJHHZEHUIGFQPQJONUUGZRIIXFVWKZACBJGQSRITIVHXLXTTAWVBOSWXBPXAWYXKC");

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
    msg.setTimeStamp(0.209378351479);
    msg.setSource(16577U);
    msg.setSourceEntity(159U);
    msg.setDestination(8139U);
    msg.setDestinationEntity(150U);
    msg.timeout = 36182U;
    msg.lat = 0.0915338848522;
    msg.lon = 0.0656984732156;
    msg.z = 0.100018052501;
    msg.z_units = 205U;
    msg.speed = 0.229780798596;
    msg.speed_units = 250U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.251042790005;
    tmp_msg_0.y = 0.0714802918162;
    tmp_msg_0.z = 0.538905343606;
    tmp_msg_0.t = 0.633634590219;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("ULKXUMDSRLUWHSRSLXDFBAXCVEXLBNCGMFPVXLZCGEBKXXQZVFIMJKBTRRQWKCLEONZOZQTPJOZMTLWGTPMMNRZVPTMAGWQEOZHBVDBAFDYTQAUWVXRDLOTGVSUJHNBHLSOBFHEP");

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
    msg.setTimeStamp(0.584667390418);
    msg.setSource(30169U);
    msg.setSourceEntity(166U);
    msg.setDestination(48646U);
    msg.setDestinationEntity(172U);
    msg.x = 0.120129104608;
    msg.y = 0.845181115696;
    msg.z = 0.825578631087;
    msg.t = 0.784341759484;

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
    msg.setTimeStamp(0.94561601218);
    msg.setSource(40950U);
    msg.setSourceEntity(25U);
    msg.setDestination(38230U);
    msg.setDestinationEntity(252U);
    msg.x = 0.353381518614;
    msg.y = 0.714397588738;
    msg.z = 0.303915796243;
    msg.t = 0.731553980125;

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
    msg.setTimeStamp(0.469428889787);
    msg.setSource(54677U);
    msg.setSourceEntity(217U);
    msg.setDestination(22680U);
    msg.setDestinationEntity(160U);
    msg.x = 0.407486671974;
    msg.y = 0.680993195959;
    msg.z = 0.176060492611;
    msg.t = 0.45390739642;

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
    msg.setTimeStamp(0.422291217347);
    msg.setSource(9250U);
    msg.setSourceEntity(231U);
    msg.setDestination(15937U);
    msg.setDestinationEntity(28U);
    msg.timeout = 32087U;
    msg.name.assign("KEWTXHIXMOLAS");
    msg.custom.assign("CJHXPYDDXLTHXPONGEUUTYENNNGVKHJIOFKOYDTZGBBCYPRCOIILVQTGJNQGKPBUZUVTKRSMODZAEXUWQWENMRDCZJFELBSMZWSHGUJCYFHUMEIGUEQOLWYQAACFHJHSPVNQCLCIJQOLBHHRKODITZKTGJYJLMCSUKWAVQWATZMYRSPWMEFFFAXZHBYEXDSCFRVKYLVXMRAPAAIRPVLT");

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
    msg.setTimeStamp(0.467053852631);
    msg.setSource(53115U);
    msg.setSourceEntity(55U);
    msg.setDestination(11795U);
    msg.setDestinationEntity(112U);
    msg.timeout = 44292U;
    msg.name.assign("NWPFLEYSSFMPCOGZSLWHBHPIZOPGOMXFXKLCTDIABDMNALDXGIJZMIUCHWGJVYQBJGPFQWUFABSLQEYSYEOEJGJBIQHATHTDFWIFVXNVORRSEFHGQPCPHWLLTZRARJNNTPWXYNXYLONVECNKMKQMUVPNDKLQVTFUPMKMRKXEBCZJMRBASZDOYQCUKJHCFUDXSGAYKBWRIRRVTUEWV");
    msg.custom.assign("OQGJEQBJASGROZSMOECP");

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
    msg.setTimeStamp(0.0477550672247);
    msg.setSource(27486U);
    msg.setSourceEntity(37U);
    msg.setDestination(18615U);
    msg.setDestinationEntity(117U);
    msg.timeout = 18340U;
    msg.name.assign("ERZLUGIHWPMWQGGLOXCIOJUASHPRMVGFEDONSNCLCKJVOIRTQVBFSCWUAVABPWCZVZQNLUTEKSIPWJXCRPXPBXMTODEYOWOVTQDXKFIRKFDTAPYLOMKNOYMBHGZSSKJNUXVXKUADZHZJAGQRCFDMFIGXSEGRBNHYXIQMBDHQGZHTTYCFKMBVDKJASLVCRAJ");
    msg.custom.assign("CHCXYUNJWEJMGLNKHHFTUCSLOXZQFILEMEQWFGMQIALDPGVZBVRYEMAAODIULSGKYGOWWNHPOXUSGNPRWAZTDFLCNHYPSDHJQQZCKNGFVRJQXSSKFXTO");

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
    msg.setTimeStamp(0.437852829646);
    msg.setSource(36185U);
    msg.setSourceEntity(171U);
    msg.setDestination(17692U);
    msg.setDestinationEntity(133U);
    msg.lat = 0.867616813941;
    msg.lon = 0.988525679447;
    msg.z = 0.253348458464;
    msg.z_units = 171U;
    msg.speed = 0.212911657899;
    msg.speed_units = 114U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.30149278663;
    tmp_msg_0.y = 0.839857799829;
    tmp_msg_0.z = 0.824825509397;
    tmp_msg_0.t = 0.195304410785;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.785179584942;
    msg.custom.assign("PUEWMGDZLGPHAMGURHPCVREEYXLHRAQLDYCDAYXABLNZKCNKXOTUIWNPHTXJQXGVOKFAJBSVYFRWUFFHRRRYRYHWIBDBTDAKEJGUCBJNNNQFOPTJKEAQIJWPGLJFTOMFEZGLKKOUJSPXGVXTCQDFUVHXOBSKMXESMNO");

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
    msg.setTimeStamp(0.321465139985);
    msg.setSource(48014U);
    msg.setSourceEntity(159U);
    msg.setDestination(22581U);
    msg.setDestinationEntity(250U);
    msg.lat = 0.935221732813;
    msg.lon = 0.449295916489;
    msg.z = 0.170883630505;
    msg.z_units = 108U;
    msg.speed = 0.815618928247;
    msg.speed_units = 155U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.580620088933;
    tmp_msg_0.y = 0.545756836131;
    tmp_msg_0.z = 0.541959831068;
    tmp_msg_0.t = 0.353133379886;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.155782565563;
    msg.custom.assign("XOSQNMQMCMAUUYWYKMSVSTUUYPOVQKVMGSNBTDUWDHUMKIOVEJLKSNJKGNEPTDZFURHDOECOYBVXQQAJTCKAZWOSTCGNDXPHAPMJWFJXZYFHYIYICDHEQMRAFLFZQBAMJLY");

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
    msg.setTimeStamp(0.952669371321);
    msg.setSource(57517U);
    msg.setSourceEntity(21U);
    msg.setDestination(62817U);
    msg.setDestinationEntity(104U);
    msg.lat = 0.406005096387;
    msg.lon = 0.292449684325;
    msg.z = 0.908431254127;
    msg.z_units = 87U;
    msg.speed = 0.0532855332824;
    msg.speed_units = 208U;
    msg.start_time = 0.306912601699;
    msg.custom.assign("DUNDNPEWZCDSHYTNWLEBZLZEKUACFSTHNVOGQHTDHCABKKGJWUGZULRVMNMXDQMCMTHAOXQOROKFADMUYWOARVCYGFRSFZZDXRPBZGIRMCWLTHEPEVSKTMOAHQXRPJXLRJJWQWPYPDIMFOTFUNLXKJVEICPKMLAWUGGJZHIVWWORPTNHQSEIJCKVPAOK");

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
    msg.setTimeStamp(0.830279958868);
    msg.setSource(33617U);
    msg.setSourceEntity(194U);
    msg.setDestination(8764U);
    msg.setDestinationEntity(244U);
    msg.vid = 58459U;
    msg.off_x = 0.990225085268;
    msg.off_y = 0.921841409144;
    msg.off_z = 0.518774958682;

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
    msg.setTimeStamp(0.568365465736);
    msg.setSource(5130U);
    msg.setSourceEntity(218U);
    msg.setDestination(43752U);
    msg.setDestinationEntity(252U);
    msg.vid = 24645U;
    msg.off_x = 0.426845075697;
    msg.off_y = 0.204230593536;
    msg.off_z = 0.800438646102;

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
    msg.setTimeStamp(0.068556492514);
    msg.setSource(45982U);
    msg.setSourceEntity(177U);
    msg.setDestination(4120U);
    msg.setDestinationEntity(90U);
    msg.vid = 46829U;
    msg.off_x = 0.307028138351;
    msg.off_y = 0.133473098321;
    msg.off_z = 0.379688593539;

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
    msg.setTimeStamp(0.0110170711391);
    msg.setSource(35438U);
    msg.setSourceEntity(174U);
    msg.setDestination(57333U);
    msg.setDestinationEntity(125U);

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
    msg.setTimeStamp(0.180459790926);
    msg.setSource(45211U);
    msg.setSourceEntity(7U);
    msg.setDestination(20532U);
    msg.setDestinationEntity(4U);

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
    msg.setTimeStamp(0.989114655646);
    msg.setSource(35847U);
    msg.setSourceEntity(237U);
    msg.setDestination(39103U);
    msg.setDestinationEntity(172U);

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
    msg.setTimeStamp(0.188294158925);
    msg.setSource(63795U);
    msg.setSourceEntity(165U);
    msg.setDestination(36304U);
    msg.setDestinationEntity(212U);
    msg.mid = 30139U;

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
    msg.setTimeStamp(0.504615317856);
    msg.setSource(53373U);
    msg.setSourceEntity(169U);
    msg.setDestination(33457U);
    msg.setDestinationEntity(208U);
    msg.mid = 27032U;

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
    msg.setTimeStamp(0.578518489374);
    msg.setSource(53704U);
    msg.setSourceEntity(93U);
    msg.setDestination(4958U);
    msg.setDestinationEntity(114U);
    msg.mid = 62207U;

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
    msg.setTimeStamp(0.459946329026);
    msg.setSource(7043U);
    msg.setSourceEntity(90U);
    msg.setDestination(54887U);
    msg.setDestinationEntity(169U);
    msg.state = 187U;
    msg.eta = 30803U;
    msg.info.assign("QXYTVVRMPGUWMJBDFH");

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
    msg.setTimeStamp(0.0190388199779);
    msg.setSource(27424U);
    msg.setSourceEntity(250U);
    msg.setDestination(41745U);
    msg.setDestinationEntity(228U);
    msg.state = 39U;
    msg.eta = 4055U;
    msg.info.assign("UYGTGYPNNMDVVUJQTXNDRPIMDBXARFFSQATIZVAHKLDXKWDFGEQZTSAREJSCWDEAPPXCQHFKJCTGHICUCZLVMRCWAOLUSIUKIZOFEJTFYEYEYBKGMGOGJIWBYWRFSVN");

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
    msg.setTimeStamp(0.182418471109);
    msg.setSource(23463U);
    msg.setSourceEntity(108U);
    msg.setDestination(45749U);
    msg.setDestinationEntity(159U);
    msg.state = 188U;
    msg.eta = 42733U;
    msg.info.assign("RVOZZCEWYEYNGMBJYGVUVSUDFJIUPWKCXZASCKGPYCWHWBHBOALKGHXPQFSWMXBEIRPICARBMLDHDMHTIWFQX");

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
    msg.setTimeStamp(0.461072083617);
    msg.setSource(25659U);
    msg.setSourceEntity(152U);
    msg.setDestination(60180U);
    msg.setDestinationEntity(58U);
    msg.system = 31102U;
    msg.duration = 339U;
    msg.speed = 0.444565019929;
    msg.speed_units = 180U;
    msg.x = 0.994885242465;
    msg.y = 0.755887361044;
    msg.z = 0.664203582361;
    msg.z_units = 122U;

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
    msg.setTimeStamp(0.520086714516);
    msg.setSource(8320U);
    msg.setSourceEntity(202U);
    msg.setDestination(27001U);
    msg.setDestinationEntity(172U);
    msg.system = 41683U;
    msg.duration = 51639U;
    msg.speed = 0.937889129518;
    msg.speed_units = 103U;
    msg.x = 0.238146164643;
    msg.y = 0.961833743939;
    msg.z = 0.704558183368;
    msg.z_units = 52U;

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
    msg.setTimeStamp(0.765168637786);
    msg.setSource(16734U);
    msg.setSourceEntity(82U);
    msg.setDestination(64935U);
    msg.setDestinationEntity(223U);
    msg.system = 2149U;
    msg.duration = 48578U;
    msg.speed = 0.651623842967;
    msg.speed_units = 73U;
    msg.x = 0.81254406187;
    msg.y = 0.785821813484;
    msg.z = 0.315334050072;
    msg.z_units = 177U;

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
    msg.setTimeStamp(0.085131429062);
    msg.setSource(5147U);
    msg.setSourceEntity(11U);
    msg.setDestination(2446U);
    msg.setDestinationEntity(75U);
    msg.lat = 0.559958069334;
    msg.lon = 0.663623847136;
    msg.speed = 0.779684816856;
    msg.speed_units = 37U;
    msg.duration = 40462U;
    msg.sys_a = 11773U;
    msg.sys_b = 28354U;
    msg.move_threshold = 0.789353080828;

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
    msg.setTimeStamp(0.125758658251);
    msg.setSource(21185U);
    msg.setSourceEntity(253U);
    msg.setDestination(34561U);
    msg.setDestinationEntity(50U);
    msg.lat = 0.0217088078361;
    msg.lon = 0.934352784907;
    msg.speed = 0.167990885465;
    msg.speed_units = 52U;
    msg.duration = 20757U;
    msg.sys_a = 22430U;
    msg.sys_b = 7523U;
    msg.move_threshold = 0.894190595444;

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
    msg.setTimeStamp(0.988959700715);
    msg.setSource(36127U);
    msg.setSourceEntity(80U);
    msg.setDestination(46665U);
    msg.setDestinationEntity(177U);
    msg.lat = 0.981245931664;
    msg.lon = 0.147664287044;
    msg.speed = 0.91121686911;
    msg.speed_units = 76U;
    msg.duration = 8306U;
    msg.sys_a = 44999U;
    msg.sys_b = 41598U;
    msg.move_threshold = 0.704478758694;

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
    msg.setTimeStamp(0.0339172644975);
    msg.setSource(49570U);
    msg.setSourceEntity(24U);
    msg.setDestination(47212U);
    msg.setDestinationEntity(11U);
    msg.lat = 0.421767237498;
    msg.lon = 0.415006815572;
    msg.z = 0.878182707623;
    msg.z_units = 146U;
    msg.speed = 0.730590955989;
    msg.speed_units = 49U;
    msg.custom.assign("HMPLFCBOYFYGVERPVHBYQJXMQHNTBIVIKFDCBMYSUCEBKLHTOUPWYKRJLGVTPWXWGOGHOIJKQCXEAZTOMRQ");

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
    msg.setTimeStamp(0.576159016379);
    msg.setSource(55241U);
    msg.setSourceEntity(238U);
    msg.setDestination(35550U);
    msg.setDestinationEntity(95U);
    msg.lat = 0.420848088297;
    msg.lon = 0.370856717136;
    msg.z = 0.0980602357305;
    msg.z_units = 75U;
    msg.speed = 0.721943755274;
    msg.speed_units = 245U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.758229727366;
    tmp_msg_0.lon = 0.318676788235;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("JMCQYTLDKUATFPCNZEJTPDOAWPMCQLEHTIDYRPZWSCFWQPBHJEJTZDOQMPICFEXHONAWULZDJKYSVKRBUEXPMNOAFBNIWVOUVSGDGTGZGLLHPIRZVRDFXZRSATJYAXUMVBXZVGNCBOJAHPRILYRVDFXRQVYZSAHRBUSSWMQCHKXXKLYQLSJWBOQCQGTUNFXGFIYNKKMHRT");

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
    msg.setTimeStamp(0.537791229432);
    msg.setSource(39033U);
    msg.setSourceEntity(164U);
    msg.setDestination(44849U);
    msg.setDestinationEntity(3U);
    msg.lat = 0.703556908288;
    msg.lon = 0.0364200348879;
    msg.z = 0.0276431561111;
    msg.z_units = 158U;
    msg.speed = 0.125302062201;
    msg.speed_units = 151U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.427427670005;
    tmp_msg_0.lon = 0.992826815111;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("IJSLMYVUKXHAOGCKMXHSSMBHLCNCOEFVDXLLZZFOBBRZXUAKDBOFDDVMYRQWBIGTYOOPNICYIDMPXOCNLRZDNCQVIBFTAYKHUHCVANSQGKD");

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
    msg.setTimeStamp(0.828480608881);
    msg.setSource(52381U);
    msg.setSourceEntity(184U);
    msg.setDestination(14578U);
    msg.setDestinationEntity(200U);
    msg.lat = 0.746280252112;
    msg.lon = 0.339080049073;

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
    msg.setTimeStamp(0.829028138554);
    msg.setSource(2238U);
    msg.setSourceEntity(108U);
    msg.setDestination(63201U);
    msg.setDestinationEntity(59U);
    msg.lat = 0.642992758029;
    msg.lon = 0.708844620905;

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
    msg.setTimeStamp(0.690820422551);
    msg.setSource(31114U);
    msg.setSourceEntity(188U);
    msg.setDestination(8752U);
    msg.setDestinationEntity(43U);
    msg.lat = 0.82897018078;
    msg.lon = 0.249925309034;

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
    msg.setTimeStamp(0.674495438648);
    msg.setSource(16619U);
    msg.setSourceEntity(67U);
    msg.setDestination(48829U);
    msg.setDestinationEntity(84U);
    msg.timeout = 46113U;
    msg.lat = 0.980710147519;
    msg.lon = 0.447468051989;
    msg.z = 0.522945114087;
    msg.z_units = 76U;
    msg.pitch = 0.920130766088;
    msg.amplitude = 0.67074276864;
    msg.duration = 10981U;
    msg.speed = 0.966935095951;
    msg.speed_units = 215U;
    msg.radius = 0.269687882833;
    msg.direction = 248U;
    msg.custom.assign("IVGGHWIXEGXUAWBUNJBHELXHNDEVKDSJWFCJFGBHOXFXVFPWCOJDWRRFRWKZSQAWUQSKEIVZRXPYM");

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
    msg.setTimeStamp(0.429880369012);
    msg.setSource(47824U);
    msg.setSourceEntity(83U);
    msg.setDestination(45971U);
    msg.setDestinationEntity(93U);
    msg.timeout = 48580U;
    msg.lat = 0.770787341749;
    msg.lon = 0.954062797104;
    msg.z = 0.879659462744;
    msg.z_units = 22U;
    msg.pitch = 0.858946326939;
    msg.amplitude = 0.00401497588119;
    msg.duration = 15242U;
    msg.speed = 0.584854977006;
    msg.speed_units = 95U;
    msg.radius = 0.36074608713;
    msg.direction = 154U;
    msg.custom.assign("FDUGLHDYECZIGPWCUAMPRNJBVNUHTYKPUVSEMEOJVDYBEVNEXHWXQSGSLWMPOFKEOFQGJHKOMZLJMAFWTN");

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
    msg.setTimeStamp(0.710407616704);
    msg.setSource(40371U);
    msg.setSourceEntity(154U);
    msg.setDestination(13893U);
    msg.setDestinationEntity(9U);
    msg.timeout = 17925U;
    msg.lat = 0.412572773074;
    msg.lon = 0.386558772831;
    msg.z = 0.330206916785;
    msg.z_units = 169U;
    msg.pitch = 0.372086926768;
    msg.amplitude = 0.328074197079;
    msg.duration = 18807U;
    msg.speed = 0.541178136395;
    msg.speed_units = 60U;
    msg.radius = 0.120339667808;
    msg.direction = 25U;
    msg.custom.assign("OHUZLVWMCVHWGXDAGKVMUNPSZOGYVIFJRNCKGKYCIXZQLLDHVLDVREUSEJOAWFTQTKIQYRWNKSMBTSINWVXDANJBZLPFCJOPNSEHQWPRWBLBAXINKDLTDKSJUNAFEUPEQPXJBPBUPXGYHCFEOBGYWVOGYRRVF");

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
    msg.setTimeStamp(0.974006445896);
    msg.setSource(44894U);
    msg.setSourceEntity(133U);
    msg.setDestination(38751U);
    msg.setDestinationEntity(217U);
    msg.formation_name.assign("WUHNBMNXFCDKKBHIANYELZCXTMNGKWUTCVXKYADGGQYLGXOAIHQSFQVKRYANPUXLRSOVCDMZZMAQQJGPBDYTJAFUWUOLVKXJWIREHOWNYBNPAVWFZWIVJMEJLSUCDZGSESHFEPOVIRERPDIXKSILTKNQSFZCDTBLFDLMOSQPMH");
    msg.reference_frame = 81U;
    msg.custom.assign("FXQGMARQQBFSYNJOZBDHGLRLMPSKQJFLRLMGQLPWASCKCKSOAXHIUDGBTWBXVECYXZDDXMLELIBHFRZRULUTRGZJPHPYHIMWRECYCKDAWVNCYTXONHMLOZWTKVCSZDPIYUZYDEUFAVSOBFIPBJUSAJOITISEYMUBFX");

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
    msg.setTimeStamp(0.527012014185);
    msg.setSource(31625U);
    msg.setSourceEntity(250U);
    msg.setDestination(4250U);
    msg.setDestinationEntity(123U);
    msg.formation_name.assign("QIVJPGMFSECWEHNYBCFCGPYGXABUEDUQQLOBLUWVSXIXHOHYZPWNKLIADGTVTANOREYGQOWPAEDHFFXIMFJNVPOQXNJBZRXRYZFDQKAGFVOCMCLEBIJDEXAIRBUKAPBKQHRBSSZNELKFWWUZUNERYSHHUTVYGTDOGLUFUMKXZRGOASAZQMTWSNYPDJZDMFJZHTD");
    msg.reference_frame = 71U;
    msg.custom.assign("GFTAKYZXMQIKCAIRUFVJZDDGGWUTAAOTDHRJGSPYEUJQMWFQYLGUUMORHDFCXHKZCJWWWLBRHSCOPCKTBWEATRPZEKQAZAFNBEEYYSUNMCSHRIVJEOZSTQYNTMNZYLNGQDAPHTCXBULVQISPIBQKHBOV");

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
    msg.setTimeStamp(0.389251934539);
    msg.setSource(38863U);
    msg.setSourceEntity(38U);
    msg.setDestination(4806U);
    msg.setDestinationEntity(39U);
    msg.formation_name.assign("LONIBIMIKMBDLHTIFHNALPSWWYOMROOYXTYVZUJABEEHHDVOORXZDUAFNRHHGUWXVATKZPJZCGXQTOZMMNIGFYYSYXQBULPWEJYMJQKCEORZQRHDRFNAZVSVIUBNLQDWJHSCKASBFKATEMDJJADXPFBGWPEVFRZQWNGTPBQACLGGLIIKEPXDKDHUCFVYGGBEVRZDKQVS");
    msg.reference_frame = 167U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 23924U;
    tmp_msg_0.off_x = 0.654163198256;
    tmp_msg_0.off_y = 0.686088398445;
    tmp_msg_0.off_z = 0.221526108499;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("YQUYZJFWKEHTYCYAXNXULCGUABBFEWSGPLOMPSTIZZAEIUDRCUDCGAJFNTKEHNCTIAHAGXTEHDZMMMZDSTLSBSTKKIFIQYWSSKVQNDVEPBRVYZRMSLWEXIXYBXCJAQGBQYPQBLPLFURUHHQOLZFSNNFLJBQERWMHOYBTUWCPLAHLVHKVRKMSKOXGOEJVPTUAKFPNHCJOGXUBMPMNZDOWIWDOCNOCNFYIQDRMRDDQTXRGGWVRJW");

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
    msg.setTimeStamp(0.766165105479);
    msg.setSource(16679U);
    msg.setSourceEntity(235U);
    msg.setDestination(18481U);
    msg.setDestinationEntity(192U);
    msg.group_name.assign("AICTVILTJOJGXMBTFQPZYYKFZAYDBOMYPTWABGOPXXMIOSQKTAWSMTOGNWHWUENDQXSVLEUMKOFRQRRGREMJOSEBOYCHGJGXRBBGESRDHFUXCVQGRZGAHFSCWZXDDVQTWXEFULDZKNHKSWIWBNOMVAVOLNZTKJHEYVPLBCYPHAXCURTCJHPGMPFCZIKILENHSZFMSJUCDLBVXBWPVNZ");
    msg.formation_name.assign("PAMJGQULNYRVFCTTRXHLVTJMPCEOKPGGMIIUVWGAIBZJCJYHPEEQGPFBMFUAFLFJOKGHLFUYQZHBRXRFZNGETXAFXZBCESETQKDWUTAGCRSXUUQOYDMLCMZISNXZKBXZLRWXBUPQNCIJBKPKSPEKYUNSQRKVIPPOMQIBYAEWVYCOTRFMSAHVNSDDOIOSIYGDMYQEWLJ");
    msg.plan_id.assign("IVLSBOMUDUNGGQJTNUUDIRRLBPOHUEFLTXKAPJZEMKLJKXRJKTBSZNEVUCNOMGFVHWSZLGCYGYSVNWPMYHIDDMEFLSWDEUBECOFVZRHQGLCBAVTYXTQNCRQJFNTOLGHDBASXCHROHZQACKXLFMHUZWETSSPGKAPBIXOPFKMBZMUDVWTAEZRJLCOREJEZZNPJPYKMIUFISVHTGOJRQIVAYVOCAWQTYIIYWJNIQAHYYSMD");
    msg.description.assign("NZTKWPSNZQZURDVHGTYHQMLGWHOOJIDSVYEOMCADVBRLLTKZUA");
    msg.leader_speed = 0.371734608204;
    msg.leader_bank_lim = 0.754684523225;
    msg.pos_sim_err_lim = 0.541847103748;
    msg.pos_sim_err_wrn = 0.375589707024;
    msg.pos_sim_err_timeout = 62518U;
    msg.converg_max = 0.937670549206;
    msg.converg_timeout = 8334U;
    msg.comms_timeout = 56894U;
    msg.turb_lim = 0.515857494384;
    msg.custom.assign("LBAMSEKTPPULUGHRTBWMMTKJNLUHYPGGVVHGSUYIXXVADTJSWRNNWTDTLTPZBQGGBEEMWCJFXTFAFUFHQNVJOJPPUEJWUUZQKABBZJQWYEITDFZ");

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
    msg.setTimeStamp(0.0720649827328);
    msg.setSource(56207U);
    msg.setSourceEntity(168U);
    msg.setDestination(13458U);
    msg.setDestinationEntity(63U);
    msg.group_name.assign("BYMZDEFSNZDMHJTTXYRYQGQUOSGBQGOFTZTQMGRMKDVJUWVFKOXRUNXPDOYMZVNWBGWVRFHAJJTUAKJTWKFNELEPVUQLILCLVPAUWHEKZDJVQOHYGAIKHSRXPMNQUPCYWJGEECHJIKQXBTMXCOXOATANNCUPNWQGSQLRBIIAMSOACBYMWBRZE");
    msg.formation_name.assign("BZVTEJSXUWQEHRGNHDPMTAJNMNAVIKBUMWVZQMLFDCQAFZGCMUSKZMKNIAYCTHHMNLYZSYJHOUXUKPQELEZZNRDWDY");
    msg.plan_id.assign("TXMMGDGHXAOZZSRVHTWXRWFCIZIJHWCRUBGQJOEKARPYSJIVWETMUZBUOHEKHQYNZOXMEMQUPHXVFDIXWKTRFXCDTWFQAHKTGURCMUSZDCKPNGHBIHJJFTQCVZANVODWWCRBYDUAKBTOQCJSLUBHOLVDGNCUM");
    msg.description.assign("COJOEFCADWZHENFSRXGVSZAOBZYQPQJBKGYAHWNBRGOKVFTIKYHXLVPHYEKEMZ");
    msg.leader_speed = 0.0130206088037;
    msg.leader_bank_lim = 0.922667442629;
    msg.pos_sim_err_lim = 0.19478395804;
    msg.pos_sim_err_wrn = 0.0350819986596;
    msg.pos_sim_err_timeout = 47166U;
    msg.converg_max = 0.520736502813;
    msg.converg_timeout = 45479U;
    msg.comms_timeout = 3486U;
    msg.turb_lim = 0.881241133365;
    msg.custom.assign("XZFMGUEYNWZOEPZSQBZQPPC");

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
    msg.setTimeStamp(0.0296794197404);
    msg.setSource(5350U);
    msg.setSourceEntity(236U);
    msg.setDestination(58953U);
    msg.setDestinationEntity(24U);
    msg.group_name.assign("ADFJKCNPPALLRDUHKWOJXEAXKDJWGRHTMYXZDWPYENDFKJPTGUGECEDKNYFZCVIUHBMARXKD");
    msg.formation_name.assign("AEFIOJRIUTRKWUJYPWPIJETMCBCGTKTSLHEUQRNYIGEITGWHOAEMLCRKKYTFVPNKGKNZUQUACQFTVXMXZXYFSZVWZNNXMEDRUJT");
    msg.plan_id.assign("KHJZHLDPTQWJEBZHOIUGZTBLGEWASMADWASTNYPOAMAGZTOCSBYTRZTZHQJZYYFIRONSXSGTNQVEOLKLSDPXPVTCCHQEDDKNYQGUOABIFKLRIHSROFXXXGUMYMHGJJWPECGIBEMCVFVOSJYUVXFXIRKCSUBJUOGUDEWBNAYKTINOUVAMQUPCJYIVCQMMWDWZTEHLERCLMAPWFPBFVWPKDNI");
    msg.description.assign("QJQQDVNASYIIMKNLPJFWXMLSQUDMIVVBKWWSXNEPDXCXRNFZJISQPCWUWMXKKEMMYIENEQBUCDZFZMOSSLKSAHRNORAOWQBLVIRUMRCAYQKRDIUNOTWIGYZGTBVPKAGBUYEZSBYGYLQXTLPZRXHYTBXLMZTERMHWKUBCOXUJCHNDGTEHFCDGFJJJ");
    msg.leader_speed = 0.503107105315;
    msg.leader_bank_lim = 0.952076257768;
    msg.pos_sim_err_lim = 0.0248992115561;
    msg.pos_sim_err_wrn = 0.17820024451;
    msg.pos_sim_err_timeout = 48332U;
    msg.converg_max = 0.110866601841;
    msg.converg_timeout = 31919U;
    msg.comms_timeout = 16666U;
    msg.turb_lim = 0.928350043427;
    msg.custom.assign("DTVRFLGSWJAPHUBSFR");

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
    msg.setTimeStamp(0.594743894664);
    msg.setSource(16644U);
    msg.setSourceEntity(125U);
    msg.setDestination(52641U);
    msg.setDestinationEntity(127U);
    msg.control_src = 39883U;
    msg.control_ent = 32U;
    msg.timeout = 0.306509045544;
    msg.loiter_radius = 0.0783067827617;
    msg.altitude_interval = 0.219190763881;

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
    msg.setTimeStamp(0.133513177389);
    msg.setSource(27853U);
    msg.setSourceEntity(208U);
    msg.setDestination(31915U);
    msg.setDestinationEntity(72U);
    msg.control_src = 44883U;
    msg.control_ent = 108U;
    msg.timeout = 0.916130989241;
    msg.loiter_radius = 0.250418158146;
    msg.altitude_interval = 0.102050885383;

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
    msg.setTimeStamp(0.958576113468);
    msg.setSource(53808U);
    msg.setSourceEntity(167U);
    msg.setDestination(5781U);
    msg.setDestinationEntity(165U);
    msg.control_src = 41332U;
    msg.control_ent = 133U;
    msg.timeout = 0.621680712514;
    msg.loiter_radius = 0.952717107384;
    msg.altitude_interval = 0.401372355302;

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
    msg.setTimeStamp(0.959563220082);
    msg.setSource(17139U);
    msg.setSourceEntity(47U);
    msg.setDestination(10199U);
    msg.setDestinationEntity(209U);
    msg.flags = 143U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.73594000145;
    tmp_msg_0.speed_units = 215U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.313275305405;
    tmp_msg_1.z_units = 65U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.817157677729;
    msg.lon = 0.46123748344;
    msg.radius = 0.341190202151;

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
    msg.setTimeStamp(0.60654492235);
    msg.setSource(45209U);
    msg.setSourceEntity(42U);
    msg.setDestination(1458U);
    msg.setDestinationEntity(138U);
    msg.flags = 174U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.986763309057;
    tmp_msg_0.speed_units = 200U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.855681035021;
    tmp_msg_1.z_units = 239U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.211714584792;
    msg.lon = 0.424790531853;
    msg.radius = 0.635021017666;

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
    msg.setTimeStamp(0.609138164033);
    msg.setSource(26373U);
    msg.setSourceEntity(228U);
    msg.setDestination(41958U);
    msg.setDestinationEntity(162U);
    msg.flags = 150U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.463632549598;
    tmp_msg_0.speed_units = 211U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.567192172638;
    tmp_msg_1.z_units = 83U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.165275398733;
    msg.lon = 0.808772906132;
    msg.radius = 0.186146913261;

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
    msg.setTimeStamp(0.118933060848);
    msg.setSource(717U);
    msg.setSourceEntity(197U);
    msg.setDestination(44672U);
    msg.setDestinationEntity(86U);
    msg.control_src = 7901U;
    msg.control_ent = 175U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 44U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.680445141376;
    tmp_tmp_msg_0_0.speed_units = 25U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.966564112321;
    tmp_tmp_msg_0_1.z_units = 153U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.57478905774;
    tmp_msg_0.lon = 0.242884070751;
    tmp_msg_0.radius = 0.351666880119;
    msg.reference.set(tmp_msg_0);
    msg.state = 211U;
    msg.proximity = 13U;

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
    msg.setTimeStamp(0.880110682229);
    msg.setSource(59502U);
    msg.setSourceEntity(142U);
    msg.setDestination(62546U);
    msg.setDestinationEntity(111U);
    msg.control_src = 23625U;
    msg.control_ent = 235U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 248U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.696145538466;
    tmp_tmp_msg_0_0.speed_units = 43U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.172480244192;
    tmp_tmp_msg_0_1.z_units = 196U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.136717435091;
    tmp_msg_0.lon = 0.900347759281;
    tmp_msg_0.radius = 0.0993636842351;
    msg.reference.set(tmp_msg_0);
    msg.state = 114U;
    msg.proximity = 146U;

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
    msg.setTimeStamp(0.215169397826);
    msg.setSource(35646U);
    msg.setSourceEntity(132U);
    msg.setDestination(25568U);
    msg.setDestinationEntity(122U);
    msg.control_src = 8713U;
    msg.control_ent = 98U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 92U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.0434435237681;
    tmp_tmp_msg_0_0.speed_units = 170U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.411880904842;
    tmp_tmp_msg_0_1.z_units = 98U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.652608324032;
    tmp_msg_0.lon = 0.244627235947;
    tmp_msg_0.radius = 0.61541989178;
    msg.reference.set(tmp_msg_0);
    msg.state = 196U;
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
    msg.setTimeStamp(0.864571481417);
    msg.setSource(46787U);
    msg.setSourceEntity(83U);
    msg.setDestination(41300U);
    msg.setDestinationEntity(43U);
    msg.ax_cmd = 0.642365393079;
    msg.ay_cmd = 0.0629773886429;
    msg.az_cmd = 0.157122675505;
    msg.ax_des = 0.14655778994;
    msg.ay_des = 0.459454575693;
    msg.az_des = 0.0176475423213;
    msg.virt_err_x = 0.859310546606;
    msg.virt_err_y = 0.276105539459;
    msg.virt_err_z = 0.313992622464;
    msg.surf_fdbk_x = 0.234974412839;
    msg.surf_fdbk_y = 0.593487686171;
    msg.surf_fdbk_z = 0.161421036023;
    msg.surf_unkn_x = 0.792064254997;
    msg.surf_unkn_y = 0.877735311195;
    msg.surf_unkn_z = 0.643121969775;
    msg.ss_x = 0.0446575586344;
    msg.ss_y = 0.42337624489;
    msg.ss_z = 0.180091467442;

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
    msg.setTimeStamp(0.505185743233);
    msg.setSource(2143U);
    msg.setSourceEntity(34U);
    msg.setDestination(3831U);
    msg.setDestinationEntity(35U);
    msg.ax_cmd = 0.220337861459;
    msg.ay_cmd = 0.947695047462;
    msg.az_cmd = 0.12059267874;
    msg.ax_des = 0.927835864226;
    msg.ay_des = 0.919929832753;
    msg.az_des = 0.891556127199;
    msg.virt_err_x = 0.0315893616768;
    msg.virt_err_y = 0.590749379696;
    msg.virt_err_z = 0.651566912835;
    msg.surf_fdbk_x = 0.710353268454;
    msg.surf_fdbk_y = 0.967657533577;
    msg.surf_fdbk_z = 0.917360544605;
    msg.surf_unkn_x = 0.0708529264467;
    msg.surf_unkn_y = 0.0868038511226;
    msg.surf_unkn_z = 0.517155890047;
    msg.ss_x = 0.947176651213;
    msg.ss_y = 0.0816031539195;
    msg.ss_z = 0.594774519012;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("UFFGHYYRJDQEGBJZJLNCXERTOQASCHGPRRBTTQUVACJVGXRRYVBUOPLHTDKTGGXHXVTPCNXVXMYBKEWGOEVTLWBKQ");
    tmp_msg_0.dist = 0.829612016743;
    tmp_msg_0.err = 0.195580144462;
    tmp_msg_0.ctrl_imp = 0.667211260042;
    tmp_msg_0.rel_dir_x = 0.75050386028;
    tmp_msg_0.rel_dir_y = 0.471781101414;
    tmp_msg_0.rel_dir_z = 0.7732065663;
    tmp_msg_0.err_x = 0.693020450581;
    tmp_msg_0.err_y = 0.23821044425;
    tmp_msg_0.err_z = 0.164690492314;
    tmp_msg_0.rf_err_x = 0.797368812932;
    tmp_msg_0.rf_err_y = 0.871681358273;
    tmp_msg_0.rf_err_z = 0.0105106274048;
    tmp_msg_0.rf_err_vx = 0.995147185074;
    tmp_msg_0.rf_err_vy = 0.010967162996;
    tmp_msg_0.rf_err_vz = 0.813276560197;
    tmp_msg_0.ss_x = 0.0256233604461;
    tmp_msg_0.ss_y = 0.958991355843;
    tmp_msg_0.ss_z = 0.152472841754;
    tmp_msg_0.virt_err_x = 0.317991374688;
    tmp_msg_0.virt_err_y = 0.408624538534;
    tmp_msg_0.virt_err_z = 0.0445296829979;
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
    msg.setTimeStamp(0.921015186774);
    msg.setSource(64907U);
    msg.setSourceEntity(247U);
    msg.setDestination(43290U);
    msg.setDestinationEntity(7U);
    msg.ax_cmd = 0.909432523722;
    msg.ay_cmd = 0.44069703125;
    msg.az_cmd = 0.424762863348;
    msg.ax_des = 0.795060280599;
    msg.ay_des = 0.960923753832;
    msg.az_des = 0.856761677648;
    msg.virt_err_x = 0.257682192176;
    msg.virt_err_y = 0.0417076694129;
    msg.virt_err_z = 0.460099418671;
    msg.surf_fdbk_x = 0.278807839032;
    msg.surf_fdbk_y = 0.597212153091;
    msg.surf_fdbk_z = 0.467431836193;
    msg.surf_unkn_x = 0.611424894344;
    msg.surf_unkn_y = 0.576834724598;
    msg.surf_unkn_z = 0.372047555526;
    msg.ss_x = 0.288715089399;
    msg.ss_y = 0.189513233403;
    msg.ss_z = 0.189471961109;

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
    msg.setTimeStamp(0.200449788711);
    msg.setSource(55422U);
    msg.setSourceEntity(236U);
    msg.setDestination(53288U);
    msg.setDestinationEntity(4U);
    msg.s_id.assign("XFLWFSSQMVIYDUWOPORDRMUFXTWLEPUPRZRAVRMKTMNOOZDZYKJUFTISMQWEVVPSYMSVHAXAZRGZXEC");
    msg.dist = 0.62592582034;
    msg.err = 0.101210756018;
    msg.ctrl_imp = 0.948805587784;
    msg.rel_dir_x = 0.173996719461;
    msg.rel_dir_y = 0.406925361573;
    msg.rel_dir_z = 0.894128078367;
    msg.err_x = 0.139283270052;
    msg.err_y = 0.400388104119;
    msg.err_z = 0.543931805885;
    msg.rf_err_x = 0.120883650128;
    msg.rf_err_y = 0.699537478931;
    msg.rf_err_z = 0.610912864991;
    msg.rf_err_vx = 0.257874023412;
    msg.rf_err_vy = 0.75026801035;
    msg.rf_err_vz = 0.488175842948;
    msg.ss_x = 0.782710063891;
    msg.ss_y = 0.0844464074192;
    msg.ss_z = 0.565993158295;
    msg.virt_err_x = 0.899083907225;
    msg.virt_err_y = 0.740037746227;
    msg.virt_err_z = 0.85026817136;

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
    msg.setTimeStamp(0.726758399069);
    msg.setSource(30441U);
    msg.setSourceEntity(197U);
    msg.setDestination(30580U);
    msg.setDestinationEntity(82U);
    msg.s_id.assign("KJYZWJFKKQTZUJVSHXAZANUNBQHJWJTRLTMWQLFGPLCTLGXKVEHLBEXBECAUDYAZQKBQGFNEDLFBFOQAOPXBQAOBQHFRYXSFRMJGUPCVCYYVRDTRYRCCNPJVFHZIMNGIUNRETUPJKYVSLVOMPDFPURXXNIOAWEZLTPWOXEEMNNMJZDPEDKHDSCMYARQOIWTKPTVKAHUGSHVGCIALINYFHKXIOZHUIJSZXOTCWZWIMGRQSEDY");
    msg.dist = 0.294187740248;
    msg.err = 0.714053642244;
    msg.ctrl_imp = 0.246704892576;
    msg.rel_dir_x = 0.450335832653;
    msg.rel_dir_y = 0.911735102113;
    msg.rel_dir_z = 0.539627230402;
    msg.err_x = 0.604174886979;
    msg.err_y = 0.0472038416996;
    msg.err_z = 0.874495962651;
    msg.rf_err_x = 0.686576193084;
    msg.rf_err_y = 0.966121589199;
    msg.rf_err_z = 0.789576806297;
    msg.rf_err_vx = 0.107694926551;
    msg.rf_err_vy = 0.0753471266999;
    msg.rf_err_vz = 0.331008404146;
    msg.ss_x = 0.357532934278;
    msg.ss_y = 0.242088586406;
    msg.ss_z = 0.662339403823;
    msg.virt_err_x = 0.00779527562325;
    msg.virt_err_y = 0.766952149654;
    msg.virt_err_z = 0.619380007222;

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
    msg.setTimeStamp(0.0135566987758);
    msg.setSource(58175U);
    msg.setSourceEntity(112U);
    msg.setDestination(32360U);
    msg.setDestinationEntity(123U);
    msg.s_id.assign("WOALJCEOXWNGUZBOVHAPDOLORSNOBNKKSYKKDQGQDUPJYQSKTSCTVBEISJJKIILWWBCCJGNQAFJTPZOEQIDSZZDGVIDEPCAMXXLLEXUOWXPFMJTPGDHTPRRPLFUTYYNNYCINVICJDEKWZQMXRASZCYLFWYYAZBFVYTWMBFFHAEZAQUHJTMJPZLGTSXVIUNRVULFZMTVUREW");
    msg.dist = 0.830397709483;
    msg.err = 0.393370404887;
    msg.ctrl_imp = 0.901462082538;
    msg.rel_dir_x = 0.231819690316;
    msg.rel_dir_y = 0.162601506945;
    msg.rel_dir_z = 0.0645603100885;
    msg.err_x = 0.0804966901175;
    msg.err_y = 0.0761184568503;
    msg.err_z = 0.932102208676;
    msg.rf_err_x = 0.872821550774;
    msg.rf_err_y = 0.152008353022;
    msg.rf_err_z = 0.334394838565;
    msg.rf_err_vx = 0.300697622657;
    msg.rf_err_vy = 0.818334729011;
    msg.rf_err_vz = 0.264531687521;
    msg.ss_x = 0.867016375505;
    msg.ss_y = 0.386017070774;
    msg.ss_z = 0.835991940033;
    msg.virt_err_x = 0.787002435016;
    msg.virt_err_y = 0.623190071693;
    msg.virt_err_z = 0.762520778961;

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
    msg.setTimeStamp(0.338205853969);
    msg.setSource(12129U);
    msg.setSourceEntity(49U);
    msg.setDestination(8328U);
    msg.setDestinationEntity(167U);
    msg.timeout = 8995U;
    msg.rpm = 0.299038751101;
    msg.direction = 56U;
    msg.custom.assign("WYAXZWHKUVISFJEEDBGCLMZKPWTWLPUMIYPTVATJVWPEQICGQXIQOGDZZGRXYAFNSHSEQVRLMODRDJMWUUMMRPJOHJYXDVHEGLBXCFSBIGSTJYMJYVNCCZKCQNXGHWRBAKFWTATXLQZSL");

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
    msg.setTimeStamp(0.629735860241);
    msg.setSource(47597U);
    msg.setSourceEntity(129U);
    msg.setDestination(47073U);
    msg.setDestinationEntity(229U);
    msg.timeout = 18241U;
    msg.rpm = 0.890948671917;
    msg.direction = 129U;
    msg.custom.assign("XYSDHGXBAJGHEBQHTMNIOPKOKNYSMBEXPDDRKADJIBZFNFREE");

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
    msg.setTimeStamp(0.492171210367);
    msg.setSource(9170U);
    msg.setSourceEntity(77U);
    msg.setDestination(24513U);
    msg.setDestinationEntity(208U);
    msg.timeout = 13372U;
    msg.rpm = 0.951633695535;
    msg.direction = 15U;
    msg.custom.assign("IJJUKQMEUGGXHRHGBUMYNOLHZCTLWBQJHVFNKOPUSRDLDYVKXMTONUODXFSNSHDSMGYBWSZAXUSCFMDNOZWQWYYILWAIQBTMTQPNQXKJZEBXDRONECAMGHTZDTGEXSJYQLLUKQEPCNGTLGWYIYGYBRCBRKOBFFNSCAB");

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
    msg.setTimeStamp(0.792350250049);
    msg.setSource(55696U);
    msg.setSourceEntity(202U);
    msg.setDestination(25589U);
    msg.setDestinationEntity(68U);
    msg.formation_name.assign("OASZXDANZLRCPIRAXJKCJEPDQDMAIOTGNVBGWGDIUHXLAKLPEFUFBRXKMPTFREBIFAPZOCSFNXMKCZTLVUBGZUIQCYKYYVTYFLTJDSQWTBQVYASVAZVNJCTHYUBDZMVGMFWNRRXLUCKQOJLCIWUOGWHIHQUBNQXQUSRWSNPOPJUWYMHZBESEDHEHOKJJHPEBWJZSLTKCDHERSLVQWIDGRH");
    msg.type = 229U;
    msg.op = 9U;
    msg.group_name.assign("SGRZQQATESGFDQJZXBWOQZZEABXGZMOKCFKGRJNMDHHDLDVPTMARJLSPOXESBZKWNCDCVICQUJSQKYNTVQLYHTVWGFEGIODOYPJBNHSTXNBPAFIWWTEWIEGJD");
    msg.plan_id.assign("OAPJWAEGINZZMDEFCPQIYRBQOYNEPZLJGUQRVHOUSZMYPQOFSBBFSWYMFFWGJPZQJZHRMHHAOMCWUNWDBOHJAABCCVQESTHJOCLLGICWSBRFHKNYXNJKMIEUZIWLRXNXIEQGMDOXIVMARDTLDHUWKFXKTTXNSKVKEFARVNYLZQXGRUDNSQCTVFWMCURPUGBV");
    msg.description.assign("XTAKHTKEVHR");
    msg.reference_frame = 226U;
    msg.leader_bank_lim = 0.889128595696;
    msg.leader_speed_min = 0.222383643375;
    msg.leader_speed_max = 0.774759532313;
    msg.leader_alt_min = 0.862316058467;
    msg.leader_alt_max = 0.965820586435;
    msg.pos_sim_err_lim = 0.376244280633;
    msg.pos_sim_err_wrn = 0.54849161211;
    msg.pos_sim_err_timeout = 17829U;
    msg.converg_max = 0.373587817341;
    msg.converg_timeout = 16043U;
    msg.comms_timeout = 10457U;
    msg.turb_lim = 0.539170418987;
    msg.custom.assign("ZPHWUPALPJKICCWFGUGBFYDFYTLLDTYSVCELDXNJIQNTBZCOXLTBAEQOASEFQEZVIJEPZKRJPPLUFNJWFCYUVHQXIBRJQSHNXNDALSMDBHFSZOWXOJWMEVGGLGWMPVZIAEUAGUHFJRXHLZMQVACGHCUSYBCVKGBRNQAGEEHMWTXIXRXOMVUUMTXHBEOHDWVMUDSWROORYANGSQTTKQIOIKTZSZDKMPCKD");

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
    msg.setTimeStamp(0.717298693688);
    msg.setSource(45126U);
    msg.setSourceEntity(1U);
    msg.setDestination(63547U);
    msg.setDestinationEntity(96U);
    msg.formation_name.assign("HLMRTPRSBZVBNAVZOLKIIACPRDKEQCYQMCQSOLGMRWNVVWTDLQPONOGTHXWYXJXUXPEHQSTGDAOFUWUXWNBBHHPDBEQWIKFKJBMXLOEKZUDZTZUNNYMHPVDCRCEO");
    msg.type = 159U;
    msg.op = 33U;
    msg.group_name.assign("KMTGMVIRSABPJDFTSFNZWBXWOSUNFZZTYHAUTQWIYBMBQLAEYPCUYUAOYUWDHJIEAOMKJFIRDXPYIRPJR");
    msg.plan_id.assign("GELXMJSZNPKMDIMBOZGZLVQWBIDWKQXMEPBMBJMWTHUZFWHXBQYMCIZEPDYQRAVLFGUGIEKVSILLCBRUCQHTIGRUOACURGYCXKKZFVNCNSCXTYJTVRANVWINDBAEPLHYJZKFPTONXWIBJHHWZJOAFQDPESCYUSVCNFJ");
    msg.description.assign("MBKJHCTIRCQXJXOTLACMFYWNWSBHAGJDAFVXSGVODUWPLHBJONJZZQMAGZZBXRBCKQEQRZLHRIYPISRMSWTXMCCWRLZRANODBIANJXVUWIEFKLASCUMBCLFG");
    msg.reference_frame = 184U;
    msg.leader_bank_lim = 0.315318266003;
    msg.leader_speed_min = 0.167153854181;
    msg.leader_speed_max = 0.650328810059;
    msg.leader_alt_min = 0.00686582731014;
    msg.leader_alt_max = 0.698260681694;
    msg.pos_sim_err_lim = 0.497456558402;
    msg.pos_sim_err_wrn = 0.658649476308;
    msg.pos_sim_err_timeout = 11926U;
    msg.converg_max = 0.107326946488;
    msg.converg_timeout = 24483U;
    msg.comms_timeout = 40037U;
    msg.turb_lim = 0.106697214173;
    msg.custom.assign("BGRFUNKJMOGQNCOLACBRDFSKOJWAWRQUIFKIZGAEDMSDLRPGTOBTTIKFNMNTA");

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
    msg.setTimeStamp(0.0117258638053);
    msg.setSource(19266U);
    msg.setSourceEntity(133U);
    msg.setDestination(44843U);
    msg.setDestinationEntity(122U);
    msg.formation_name.assign("QUXTENFJIYZPSMEMWCMRBSWLBTGJNHZAVNH");
    msg.type = 91U;
    msg.op = 218U;
    msg.group_name.assign("ZEUJTRZFKHATCXRRZOCOQQUIKOPEKLCECABZHXVJMXYDLLZYGGBSWPRPBXHTAXWHNVZBNQRXAYUQVVEQKWWCURGIYGUWBGXANSQTVJIZMHOCCWZBPVFD");
    msg.plan_id.assign("NVDCRVZXTWANWDFWVDECPHICOHOPZLHZUNOIABXWESMYXDVXHLDQEYTDZPWJSFYNKDIBKRXUHKTBQQZMPXIVCGQUBSSGYMYGELDWETHOTNCLCFBVFXAFGUVBRIJKMMDLAINWNUGJTMKIGKSBRZGXQMEPZAIFXSOGAZRTLFLTMUYZJJENGRANOQSH");
    msg.description.assign("ZHXVGWKCEMPUHTIKYYAFXTSSBWNPJULOHZWJVMWTQUXBCIMZRUPQGQZZVCTFDZNESBSEJCYFFAXORUBOMYOITMUFAWNMXXLAXUCFSPLHOVBHGPYDNRDCDMWSTTYPGNSZJMNXQAYPTKLBRWROJKQSVKOULLJYKOAPEGDMQGAAVJEKLNJIFVPWHEDRUUDJAVWZRIQDVTC");
    msg.reference_frame = 50U;
    msg.leader_bank_lim = 0.689744716098;
    msg.leader_speed_min = 0.927743798578;
    msg.leader_speed_max = 0.839851197918;
    msg.leader_alt_min = 0.524374469267;
    msg.leader_alt_max = 0.641222508659;
    msg.pos_sim_err_lim = 0.0846644516313;
    msg.pos_sim_err_wrn = 0.786359404871;
    msg.pos_sim_err_timeout = 18956U;
    msg.converg_max = 0.0702628244594;
    msg.converg_timeout = 17703U;
    msg.comms_timeout = 61750U;
    msg.turb_lim = 0.440578796767;
    msg.custom.assign("HRZYSQOPZOKWMIXPQRGCJXFFVMDCINTCCQDYOY");

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
    msg.setTimeStamp(0.432389788201);
    msg.setSource(55675U);
    msg.setSourceEntity(12U);
    msg.setDestination(60813U);
    msg.setDestinationEntity(107U);
    msg.timeout = 36469U;
    msg.lat = 0.659363941513;
    msg.lon = 0.417731550749;
    msg.z = 0.487231427035;
    msg.z_units = 160U;
    msg.speed = 0.77906165077;
    msg.speed_units = 183U;
    msg.custom.assign("HDZMKQUGICTBJNTOBFBMFXPPRVWEOYRNBQKUNXSIBQZFDCEMPHRHRCZANXPWCSEOQDHBVUW");

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
    msg.setTimeStamp(0.55809220111);
    msg.setSource(37843U);
    msg.setSourceEntity(10U);
    msg.setDestination(41504U);
    msg.setDestinationEntity(89U);
    msg.timeout = 10922U;
    msg.lat = 0.608798770506;
    msg.lon = 0.75403769265;
    msg.z = 0.452855066045;
    msg.z_units = 132U;
    msg.speed = 0.173278441845;
    msg.speed_units = 91U;
    msg.custom.assign("MHOUOIPMKXUDVPAFBAVHUVWCVGLTRVSMVNGEWGKOWBANZOODBDGYVIHJZLCCQFJLELEDXTABNKMZXPKFRNFSVQPUJKXNJDAFIBGJIDUFSRUEFNGRHWPZIMDQTQHHAACKNQRCWLBIYTEGRSOTYSYJWMEBCYUNTWLNUIPQKUNASCBLGXZTYHQKZRRBJEWXKDIAMWIESMEPYHKICZGXLVFCTXJOCS");

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
    msg.setTimeStamp(0.435335800411);
    msg.setSource(38422U);
    msg.setSourceEntity(11U);
    msg.setDestination(65121U);
    msg.setDestinationEntity(231U);
    msg.timeout = 12896U;
    msg.lat = 0.470527161079;
    msg.lon = 0.462416381393;
    msg.z = 0.0311015317821;
    msg.z_units = 211U;
    msg.speed = 0.256496035921;
    msg.speed_units = 18U;
    msg.custom.assign("RKFPSQARCJZEOMEXGNTTZJDLUNTVAZFEZTZJQLGU");

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
    msg.setTimeStamp(0.00635166712604);
    msg.setSource(41806U);
    msg.setSourceEntity(112U);
    msg.setDestination(4711U);
    msg.setDestinationEntity(130U);
    msg.timeout = 55542U;
    msg.lat = 0.966902123892;
    msg.lon = 0.661977328924;
    msg.z = 0.609971973152;
    msg.z_units = 197U;
    msg.speed = 0.483168509159;
    msg.speed_units = 252U;
    msg.custom.assign("HQIETSKPBDITGULZJSZFMATDJBHIMAOUVNHYWFIGMAPSUJOBPWYQGJEDOVTNDWAFLLCOFXUEUEBIWFXTLCMCAWRSEXGKTOKNOZVYANOGDJFNATKXKJPYIBYBUANKDLMUHZXDIRTIHYESPFRPYVRXQGDWQ");

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
    msg.setTimeStamp(0.559145700106);
    msg.setSource(36252U);
    msg.setSourceEntity(148U);
    msg.setDestination(65264U);
    msg.setDestinationEntity(215U);
    msg.timeout = 63480U;
    msg.lat = 0.660362896606;
    msg.lon = 0.230712288525;
    msg.z = 0.93893714152;
    msg.z_units = 143U;
    msg.speed = 0.168099561173;
    msg.speed_units = 142U;
    msg.custom.assign("YWHRYQYHTLSABUIWFGOFHFNFDRLMBPVZSGETCTOTWGVOYSUVTXPPI");

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
    msg.setTimeStamp(0.589386120027);
    msg.setSource(32481U);
    msg.setSourceEntity(199U);
    msg.setDestination(51259U);
    msg.setDestinationEntity(170U);
    msg.timeout = 65429U;
    msg.lat = 0.662301188332;
    msg.lon = 0.637416009751;
    msg.z = 0.874542002857;
    msg.z_units = 76U;
    msg.speed = 0.0182041156826;
    msg.speed_units = 22U;
    msg.custom.assign("SOCTJYWQPNHPDFHMJFWDVYPNNYHKEQYIEUJJIFZBYEMUNDMZMGKBCWKCOISLYCWCTHOQOPNSMLANRWVAYVLBNPNWTEVURUBAGFXUGLXURSXPEWDQRCBMQZHXFTKYIVPWFLHVSZGARBSFBGZNGUSJZJIEEEAGDRQHQTXVGBJMLATKHTUKCDTOLSAYYRRETZBAJVTPSDCLKUMCIBKINIWOQHXL");

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
    msg.setTimeStamp(0.993661400653);
    msg.setSource(38090U);
    msg.setSourceEntity(185U);
    msg.setDestination(63534U);
    msg.setDestinationEntity(89U);
    msg.arrival_time = 0.891698963034;
    msg.lat = 0.948133677005;
    msg.lon = 0.4369215387;
    msg.z = 0.326141696562;
    msg.z_units = 204U;
    msg.travel_z = 0.80569260941;
    msg.travel_z_units = 64U;
    msg.delayed = 169U;

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
    msg.setTimeStamp(0.839553758595);
    msg.setSource(23646U);
    msg.setSourceEntity(237U);
    msg.setDestination(45326U);
    msg.setDestinationEntity(32U);
    msg.arrival_time = 0.112267485489;
    msg.lat = 0.190967428412;
    msg.lon = 0.362137170467;
    msg.z = 0.188434490452;
    msg.z_units = 189U;
    msg.travel_z = 0.391010837576;
    msg.travel_z_units = 191U;
    msg.delayed = 152U;

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
    msg.setTimeStamp(0.518242940251);
    msg.setSource(61601U);
    msg.setSourceEntity(211U);
    msg.setDestination(8243U);
    msg.setDestinationEntity(177U);
    msg.arrival_time = 0.312331505056;
    msg.lat = 0.114461092177;
    msg.lon = 0.477301506082;
    msg.z = 0.334624400747;
    msg.z_units = 194U;
    msg.travel_z = 0.200795292033;
    msg.travel_z_units = 173U;
    msg.delayed = 126U;

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
    msg.setTimeStamp(0.136078173231);
    msg.setSource(10247U);
    msg.setSourceEntity(49U);
    msg.setDestination(56065U);
    msg.setDestinationEntity(155U);
    msg.lat = 0.46400999821;
    msg.lon = 0.195413719864;
    msg.z = 0.784255670985;
    msg.z_units = 22U;
    msg.speed = 0.941951117984;
    msg.speed_units = 39U;
    msg.bearing = 0.277040943113;
    msg.cross_angle = 0.214815445734;
    msg.width = 0.0122111675258;
    msg.length = 0.471440072613;
    msg.coff = 100U;
    msg.angaperture = 0.396359024039;
    msg.range = 17146U;
    msg.overlap = 154U;
    msg.flags = 19U;
    msg.custom.assign("DNSZNWUHWWYDAPWAERZMCNVHUMIXPPUQLEHB");

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
    msg.setTimeStamp(0.578627464108);
    msg.setSource(4265U);
    msg.setSourceEntity(79U);
    msg.setDestination(61010U);
    msg.setDestinationEntity(246U);
    msg.lat = 0.939091262935;
    msg.lon = 0.797182449324;
    msg.z = 0.215958629925;
    msg.z_units = 72U;
    msg.speed = 0.636452432043;
    msg.speed_units = 218U;
    msg.bearing = 0.532450364951;
    msg.cross_angle = 0.534838219991;
    msg.width = 0.117056514265;
    msg.length = 0.225742649168;
    msg.coff = 244U;
    msg.angaperture = 0.386849120602;
    msg.range = 41374U;
    msg.overlap = 27U;
    msg.flags = 207U;
    msg.custom.assign("XTRHSAOGLFIZVGRSXMIWIDPUKAZJFCWZMYAELVTBLMLRWEIRIDPDAEMGTELJFPHCHFOOSCJZFMXOUXCSUTHNTEHFLMDNBCFSHZYYGDZGQSPVURDBLKCEYNIDWQATBPQJYVWURMOVIDXKOTNQJJXBZZHHWEFRKDQXRYCQKTQWUPSLEJNUKSOWBFPXTSCVLDGGNKTKCAKMIGZCVOOHQAPWWQBNXYSYIUJUGMMERRYPBABLNAPJOHVJYVZQNENKV");

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
    msg.setTimeStamp(0.0254491950195);
    msg.setSource(6835U);
    msg.setSourceEntity(15U);
    msg.setDestination(47676U);
    msg.setDestinationEntity(3U);
    msg.lat = 0.936319946744;
    msg.lon = 0.446468655125;
    msg.z = 0.226798579212;
    msg.z_units = 191U;
    msg.speed = 0.230824352551;
    msg.speed_units = 25U;
    msg.bearing = 0.561849509026;
    msg.cross_angle = 0.697930980684;
    msg.width = 0.104410227147;
    msg.length = 0.233205951125;
    msg.coff = 153U;
    msg.angaperture = 0.808852127121;
    msg.range = 48267U;
    msg.overlap = 69U;
    msg.flags = 26U;
    msg.custom.assign("MFBEBUHGRROZDXFWLWATHRLFKMDAUTZUFWNFIZVIKAGCMKBTV");

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
    msg.setTimeStamp(0.645015595508);
    msg.setSource(37634U);
    msg.setSourceEntity(133U);
    msg.setDestination(59662U);
    msg.setDestinationEntity(24U);
    msg.timeout = 39961U;
    msg.lat = 0.891207648932;
    msg.lon = 0.92066973499;
    msg.z = 0.387287435992;
    msg.z_units = 83U;
    msg.speed = 0.377532698801;
    msg.speed_units = 195U;
    msg.syringe0 = 125U;
    msg.syringe1 = 59U;
    msg.syringe2 = 147U;
    msg.custom.assign("YHLECLLANMRJRIGIENSPUVWKJRLZSZNRVDAPFJBNIFKQKCYPUDWEWB");

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
    msg.setTimeStamp(0.459636282271);
    msg.setSource(47132U);
    msg.setSourceEntity(40U);
    msg.setDestination(42139U);
    msg.setDestinationEntity(26U);
    msg.timeout = 29972U;
    msg.lat = 0.110586379989;
    msg.lon = 0.952376025631;
    msg.z = 0.863282811726;
    msg.z_units = 254U;
    msg.speed = 0.490088170992;
    msg.speed_units = 64U;
    msg.syringe0 = 42U;
    msg.syringe1 = 64U;
    msg.syringe2 = 98U;
    msg.custom.assign("LNAFDKYOSXZO");

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
    msg.setTimeStamp(0.690584658073);
    msg.setSource(64856U);
    msg.setSourceEntity(168U);
    msg.setDestination(32528U);
    msg.setDestinationEntity(89U);
    msg.timeout = 38601U;
    msg.lat = 0.669302793069;
    msg.lon = 0.564924146654;
    msg.z = 0.984074151447;
    msg.z_units = 42U;
    msg.speed = 0.63586725676;
    msg.speed_units = 37U;
    msg.syringe0 = 183U;
    msg.syringe1 = 178U;
    msg.syringe2 = 152U;
    msg.custom.assign("KGSPUPGIPBSYYANWYVPEZQJHODFKZHXVZYCBMWKLBTLULLCKHNBJMNKGJYXPLITEMUWJOPOSRWHURIHVWXJEGFVRVWWEJIJEAADNHVTTNUPYMDXKFLICXYDJHXZUCFSEXTRLDQQNGMIAVKAFWIWJBTMFAFNYXBMTSASMFGFDDOPHERQBGLCIZX");

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
    msg.setTimeStamp(0.879419744183);
    msg.setSource(16633U);
    msg.setSourceEntity(34U);
    msg.setDestination(7586U);
    msg.setDestinationEntity(239U);

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
    msg.setTimeStamp(0.297697414667);
    msg.setSource(31091U);
    msg.setSourceEntity(204U);
    msg.setDestination(10095U);
    msg.setDestinationEntity(162U);

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
    msg.setTimeStamp(0.0930901986035);
    msg.setSource(43535U);
    msg.setSourceEntity(70U);
    msg.setDestination(1201U);
    msg.setDestinationEntity(182U);

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
    msg.setTimeStamp(0.979931391584);
    msg.setSource(37661U);
    msg.setSourceEntity(89U);
    msg.setDestination(3318U);
    msg.setDestinationEntity(17U);
    msg.lat = 0.201242260888;
    msg.lon = 0.70572595293;
    msg.z = 0.778457436092;
    msg.z_units = 117U;
    msg.speed = 0.921669494928;
    msg.speed_units = 0U;
    msg.takeoff_pitch = 0.347242424973;
    msg.custom.assign("YBNKLEPHWWFKOSQOJIMSWEXOVSEZBZHIQXMVUQHURGQODGFGFCNGHZFZIMBNDYIMWHLGOQISMNAEBUQWENQYIOVQAYXJYYHRPQAWWFTXQKVETPLSPBXNGDCPAEPSYBMXUXHMHGSACHJRE");

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
    msg.setTimeStamp(0.906545565648);
    msg.setSource(24555U);
    msg.setSourceEntity(14U);
    msg.setDestination(3307U);
    msg.setDestinationEntity(160U);
    msg.lat = 0.134156089275;
    msg.lon = 0.646598624099;
    msg.z = 0.391719492027;
    msg.z_units = 230U;
    msg.speed = 0.502829315989;
    msg.speed_units = 175U;
    msg.takeoff_pitch = 0.405797742427;
    msg.custom.assign("KIKWVRRVUHAMHDNALMBQQSKKMGDFIBOYARAMAWOINHOJTJYIZNLKFCMSFTWGMZYFMSJQVTCZXCRQPJFXEWZAHHYXTWVTLVPIUIQYARTOJAXQUQCUEZLTBNEDBAWFLYPHGGEQPWCTBFGXXUOJLERDYBVUBZZYZXTUXLGLHUNQVBDWVMNJKKDRDXUIDYYCZJOOERSCXPPOEOKHQGSERT");

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
    msg.setTimeStamp(0.488153033795);
    msg.setSource(34458U);
    msg.setSourceEntity(209U);
    msg.setDestination(60740U);
    msg.setDestinationEntity(168U);
    msg.lat = 0.490010050019;
    msg.lon = 0.815463495623;
    msg.z = 0.00338084192088;
    msg.z_units = 81U;
    msg.speed = 0.62636469392;
    msg.speed_units = 120U;
    msg.takeoff_pitch = 0.345469040177;
    msg.custom.assign("WHVSESGYMWBDDIRFSDYNWAPRHOFCNCUILYGSKCPKMYBNTVGNGPWFNMYKXTMTQVKJKWFHTIQX");

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
    msg.setTimeStamp(0.782711531307);
    msg.setSource(55156U);
    msg.setSourceEntity(191U);
    msg.setDestination(8555U);
    msg.setDestinationEntity(114U);
    msg.lat = 0.593707234738;
    msg.lon = 0.62337494441;
    msg.z = 0.975506662807;
    msg.z_units = 178U;
    msg.speed = 0.991164664309;
    msg.speed_units = 72U;
    msg.abort_z = 0.8157744227;
    msg.bearing = 0.548537307357;
    msg.glide_slope = 250U;
    msg.glide_slope_alt = 0.00380688087117;
    msg.custom.assign("XOMZEOWPCAEKPJJKAJGPAEIRVBARFNJGETQCORZEDTBJNUUVGOZCXKWXSCBLRKK");

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
    msg.setTimeStamp(0.857242131334);
    msg.setSource(36539U);
    msg.setSourceEntity(103U);
    msg.setDestination(47224U);
    msg.setDestinationEntity(1U);
    msg.lat = 0.137142228931;
    msg.lon = 0.379426892424;
    msg.z = 0.442351323069;
    msg.z_units = 240U;
    msg.speed = 0.471901542591;
    msg.speed_units = 236U;
    msg.abort_z = 0.448786328558;
    msg.bearing = 0.436304734246;
    msg.glide_slope = 226U;
    msg.glide_slope_alt = 0.824981277081;
    msg.custom.assign("BBUQTHVZDLMIDFOORHOEYSRIXZSJFSPERENGBHRNLUDBPKJAOFUJOSGEGNECQOAZHONRTDVVJITVIULHQKMKXWZMWYMSDQILIPXVGWPXHHXTJTSVREYNWDCUGILZASFNUJQLFARGJUYYNJCAVMQPAWCATYMMQKUVBTRPTFCGWSKCJDWVIILBMFPXQAUWOERKJPLQLKFBAXGCNWYOXWCTZBTZSMYZG");

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
    msg.setTimeStamp(0.111139947716);
    msg.setSource(2455U);
    msg.setSourceEntity(184U);
    msg.setDestination(4274U);
    msg.setDestinationEntity(64U);
    msg.lat = 0.110071871515;
    msg.lon = 0.0891681838762;
    msg.z = 0.284808350877;
    msg.z_units = 7U;
    msg.speed = 0.512377837471;
    msg.speed_units = 73U;
    msg.abort_z = 0.50213669846;
    msg.bearing = 0.332426080974;
    msg.glide_slope = 46U;
    msg.glide_slope_alt = 0.276798605378;
    msg.custom.assign("UYIUBQLJIZEWUBJMVPTJKGYDECFXMUROZSFDVKHYKRNXIAUVNYRUATFTKIXOMORSAPGUWFXMNQXKGYDFLMJPFNNSGXSLGJAHTNGVKMAKYXHPIKVMSDDCVLESGTKOXOZNTQVXPROISEBRZHUQPZZYBIOAWTBPMGL");

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
    msg.setTimeStamp(0.269669426247);
    msg.setSource(2680U);
    msg.setSourceEntity(251U);
    msg.setDestination(51482U);
    msg.setDestinationEntity(49U);
    msg.lat = 0.0402024729017;
    msg.lon = 0.52287973891;
    msg.speed = 0.207881934699;
    msg.speed_units = 178U;
    msg.limits = 188U;
    msg.max_depth = 0.18713315254;
    msg.min_alt = 0.16662092746;
    msg.time_limit = 0.858557681408;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.274021024978;
    tmp_msg_0.lon = 0.910974259539;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("RBSXJJGIQWEAYJHBLJWIDCOPCUAZQGPDGQROFBEWVPMDEDNCAIKLXWEXSSUVRFAFRJBBZQLGQUSSTJCWMDNRKLTZOKYSTZRTMGCROBHELOXMESBIYFVZNUDIKCYZNXSDQWVGNKYVFWNNQEXJTNVWNHZVIELOFSAMFZTIPSOEUIPCCRGMXJZMVXEYK");
    msg.custom.assign("FKVBJAMCRZHPQOEKVDGIJNBIZCCZHRUJRDUHGEVOWTPAULCNQCBXKQIVPIFFDYGRQFQFFPPNHHPHTWOXPTEFCTHAUNBWTSSTRELDTYRDHNXAXFJSEJOUNLKWGUVDYDBQWXAYOWUKNYOXNSNLTITIOMCMBMZWVKBCXIJKAQYPOWKXKZUNGYZVJKYPQYCGEERMTLOVLVGLMSDAHFAELRHPDQWDMVQEXBRRFSJS");

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
    msg.setTimeStamp(0.38669644624);
    msg.setSource(27594U);
    msg.setSourceEntity(97U);
    msg.setDestination(24797U);
    msg.setDestinationEntity(96U);
    msg.lat = 0.14713662684;
    msg.lon = 0.390032273751;
    msg.speed = 0.255891537472;
    msg.speed_units = 127U;
    msg.limits = 183U;
    msg.max_depth = 0.312537493041;
    msg.min_alt = 0.740145357118;
    msg.time_limit = 0.179563449209;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.239594480327;
    tmp_msg_0.lon = 0.0782352294322;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("HXDZQNJZZOONTKLKSBEOFZDXTMHPPSGRPHXKICAASZQGGLUWVYUTXVEHMDPKAOHTKDMEOUNVJSKQCLBSFEARLJADMVCVTAUBLVIELHBLJEOFJYDBOAJLNYWIGKEUTRCXSTARWZIEEDXOMVRYYDYCKRIXBCYMFSKRZCXICHUFOPWWQUQGIMWUFMUTYCHNDYAXGGNEYTJRHIQLBZNQBVLN");
    msg.custom.assign("ZCOQNOAJJBKDPGZOGIFJZNHMKEJRBCBAHHHCITBIMWIKVSDGYTRQCWGFSXNPCROBLNZVRXWUFUUCFAFXIWIUEVTFYGOTDXSODQCUNSMKKRLULLOQMQHFXP");

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
    msg.setTimeStamp(0.143197731303);
    msg.setSource(15328U);
    msg.setSourceEntity(243U);
    msg.setDestination(4562U);
    msg.setDestinationEntity(49U);
    msg.lat = 0.855208197157;
    msg.lon = 0.77127439333;
    msg.speed = 0.254836856283;
    msg.speed_units = 169U;
    msg.limits = 115U;
    msg.max_depth = 0.968343563068;
    msg.min_alt = 0.716272653492;
    msg.time_limit = 0.535352551531;
    msg.controller.assign("FEXDOQQSKDFGMHQTHLMAKNZBFJUYDN");
    msg.custom.assign("UMMHTKDKCIAJAFJYOLNRYRJLYPEROKLMXAKOPGORSJKXT");

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
    msg.setTimeStamp(0.800803138494);
    msg.setSource(44222U);
    msg.setSourceEntity(58U);
    msg.setDestination(6846U);
    msg.setDestinationEntity(143U);
    msg.target.assign("VLOIPTXIMYPCNGFERVQECUFJVBSUTOYXWVRZJTXDULBDWNKXLLRTHVPKHIOAO");
    msg.max_speed = 0.984162900761;
    msg.speed_units = 65U;
    msg.lat = 0.729118728015;
    msg.lon = 0.425610609566;
    msg.z = 0.151232874613;
    msg.z_units = 99U;
    msg.custom.assign("RIMKASTMKTJXWVUIXGRPXEDJDELNGHPJVAXWYBETAOWUDCGLIKVPEJOLKPFOCVHANSOLBUGIKNLMYRABCMHJFUKPEOHSQZRXBRFESPAQIUVKSYJGPLCDEVZVVOFWPAJYBTIJTXFGYRLGXUMSFTB");

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
    msg.setTimeStamp(0.569746043671);
    msg.setSource(44728U);
    msg.setSourceEntity(187U);
    msg.setDestination(24634U);
    msg.setDestinationEntity(110U);
    msg.target.assign("HDGXNOCNYDGWJWODKRSQBXLVMGZJOXHQOMSEBLTDDKSOPMQHKSAFMNYVEUCEBJFXTLORBVJERTSVZKEZQUNLBMJHJPIOGMAQSVGDYEZPHKTZZETBJVBGWIMGXBOQSATYYPLPKUUALUJSXRQZQOZFKLMUFWNNIAZDGFNCYHAYMPNQAWECVUQJKWGIFTEXIUTYEH");
    msg.max_speed = 0.71321114044;
    msg.speed_units = 147U;
    msg.lat = 0.108420417639;
    msg.lon = 0.702362688461;
    msg.z = 0.974195330075;
    msg.z_units = 141U;
    msg.custom.assign("SYQFNBXFZWQLWZLYWSHYBZHZDAOCOPJWVTGNRSHCVZPXKFNBDGGTWJSXZMTZBDOCAHMAFPHQXEREYNYAKYJQVJBSKEUXEIPIYTKRTTTYJXQVSQFBOUMNDEAWODDWBFHMTCOUJMUAGINAGFPPXVLPJ");

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
    msg.setTimeStamp(0.477908471903);
    msg.setSource(51084U);
    msg.setSourceEntity(244U);
    msg.setDestination(56766U);
    msg.setDestinationEntity(229U);
    msg.target.assign("AXYAEMXESFYOUNOEJGJ");
    msg.max_speed = 0.273070497899;
    msg.speed_units = 166U;
    msg.lat = 0.511067583772;
    msg.lon = 0.234076350979;
    msg.z = 0.0572326390825;
    msg.z_units = 253U;
    msg.custom.assign("URTQKVEVGEYZNPUVVVEYZUBU");

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
    msg.setTimeStamp(0.640865198776);
    msg.setSource(48423U);
    msg.setSourceEntity(13U);
    msg.setDestination(41942U);
    msg.setDestinationEntity(30U);
    msg.timeout = 20403U;
    msg.lat = 0.725055477048;
    msg.lon = 0.597805327406;
    msg.speed = 0.717862705235;
    msg.speed_units = 227U;
    msg.custom.assign("KESDPYHUXHRFUPLROPIIXXLNRATXWQMLDEAIUFANWLXJKMMKUZDQGFPZRRBBDHZBARXVCTYQSCMXQIUZNSGTFHAVGDBEJCEYWFDEROSWTOPOLOFTHMCOZBKJPDSSVSHVUZKHKJKCKIPZFFMSBVJVDWJIBEQGLGQJGLBLGMCUAFNAPQKCUFEOIYEAE");

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
    msg.setTimeStamp(0.40981783247);
    msg.setSource(54444U);
    msg.setSourceEntity(171U);
    msg.setDestination(23621U);
    msg.setDestinationEntity(9U);
    msg.timeout = 11581U;
    msg.lat = 0.600973971583;
    msg.lon = 0.929793345057;
    msg.speed = 0.334622580383;
    msg.speed_units = 216U;
    msg.custom.assign("QQGSJUIXLYQYLDGDXWLFSNBMWVLNRJEWB");

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
    msg.setTimeStamp(0.983002416234);
    msg.setSource(10173U);
    msg.setSourceEntity(193U);
    msg.setDestination(36689U);
    msg.setDestinationEntity(17U);
    msg.timeout = 52726U;
    msg.lat = 0.220949882808;
    msg.lon = 0.136590271528;
    msg.speed = 0.250659486709;
    msg.speed_units = 245U;
    msg.custom.assign("SHOKRLBUYPAOOEGSLCQEMUCTHAZVFMZWCNIFXAJWSFGDRXYEVJ");

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
    msg.setTimeStamp(0.428632220535);
    msg.setSource(2977U);
    msg.setSourceEntity(79U);
    msg.setDestination(63713U);
    msg.setDestinationEntity(53U);
    msg.lat = 0.800139553103;
    msg.lon = 0.629973925552;
    msg.z = 0.0338923656179;
    msg.z_units = 122U;
    msg.radius = 0.970351787882;
    msg.duration = 53385U;
    msg.speed = 0.999329270674;
    msg.speed_units = 64U;
    msg.popup_period = 51450U;
    msg.popup_duration = 2648U;
    msg.flags = 238U;
    msg.custom.assign("WWKBLDRPXCXRFEMATANOSQGCHLTQTOZXHIJMUITKGQBYEUQFZCHDHCPYUNUDNWRYGSBIMASYBOUMRSRBPEHPYKNZQPKMLHIWRCHXQXQGZWWILEDAAFFNQZNDIGNDJVACQGJSODMFPZLTQTUADUKORFDOSVLVAVXGJGTNXNCROFCGRYMLIEEEELLOMXWXXPOFMHPPRBUKZVGTKIFJKWIAMHZSBWDVUW");

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
    msg.setTimeStamp(0.00244338207783);
    msg.setSource(23390U);
    msg.setSourceEntity(215U);
    msg.setDestination(6197U);
    msg.setDestinationEntity(116U);
    msg.lat = 0.949067449382;
    msg.lon = 0.434204828228;
    msg.z = 0.814969034623;
    msg.z_units = 208U;
    msg.radius = 0.13319318014;
    msg.duration = 5209U;
    msg.speed = 0.982869875233;
    msg.speed_units = 109U;
    msg.popup_period = 6944U;
    msg.popup_duration = 64587U;
    msg.flags = 140U;
    msg.custom.assign("IGARKKEHCLQHWCRLUZSUADFFVXDVMITCUQOLBJWENMYJWMFWXWFSNVNOIXHUEBWLASHCJDTEOHMOZTDTIUILAEQNQJMFEVVIUYTHJQCDGVXIUQBKZVIX");

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
    msg.setTimeStamp(0.242626588469);
    msg.setSource(10416U);
    msg.setSourceEntity(215U);
    msg.setDestination(22460U);
    msg.setDestinationEntity(207U);
    msg.lat = 0.277094429684;
    msg.lon = 0.458026705412;
    msg.z = 0.786171018611;
    msg.z_units = 29U;
    msg.radius = 0.716798910692;
    msg.duration = 6273U;
    msg.speed = 0.801883724365;
    msg.speed_units = 5U;
    msg.popup_period = 16257U;
    msg.popup_duration = 54770U;
    msg.flags = 46U;
    msg.custom.assign("NHOLUJEBNHAWGVOKKQSVQJLTWAOOMYUMTGXKKMIIIRCQYFASVXLWFCGXPLAXHZCQMCBAJNDNXIHIRVAHBSJSKVWOEDMLKYIFBGVJFCMLWHMOTSFPVDNFBHJHQT");

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
    msg.setTimeStamp(0.0675478533358);
    msg.setSource(33988U);
    msg.setSourceEntity(11U);
    msg.setDestination(39919U);
    msg.setDestinationEntity(21U);
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("YHYOPFFSVJHUONSEDZHMAJBYLBGTWRZJHLQYRTRTMBHREMAXYWPLNIFXIXVMUKIEBJVKOLHESADLEEQNEELIMWKDBDVSUXGMGCRMROWAHDWUVFBMGIUWAKWGKFVA");
    IMC::AutonomousSection tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.0847696095384;
    tmp_tmp_msg_0_0.lon = 0.979617585544;
    tmp_tmp_msg_0_0.speed = 0.138393870045;
    tmp_tmp_msg_0_0.speed_units = 141U;
    tmp_tmp_msg_0_0.limits = 193U;
    tmp_tmp_msg_0_0.max_depth = 0.493603205601;
    tmp_tmp_msg_0_0.min_alt = 0.162728628486;
    tmp_tmp_msg_0_0.time_limit = 0.225541772205;
    tmp_tmp_msg_0_0.controller.assign("XLVYAFEYUXNUONCBMOKZFPEWBMUBDMDENKTLWPMOTUECAILKKSEYHTSHZJGPHQKLLEZZCHDWJAOSFRYBFAJHVGSXJRVUOKYKIDKZTTWIBRAIVBRPSDMXOVYEDBLMXWVIBPMWGAIOMLUZPICCAJFDQAVDMYAGIJGZWFTRWHJSNQUJCCDFPKHQXURTUNQAGDPTBXJJYNRQFCFHHBVHCORNNOSREXUONXCELIQMF");
    tmp_tmp_msg_0_0.custom.assign("EXNRYMPIXFMSJLTMJYNFBCGDUPIYVBEPMKQKMVZUKWNNIJSUAUPCBCWXOETPOMRIQSQZPZRHGBYRIFJWQOMWHSHKQ");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::Salinity tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.134352530728;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
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
    msg.setTimeStamp(0.824287363426);
    msg.setSource(52777U);
    msg.setSourceEntity(212U);
    msg.setDestination(39320U);
    msg.setDestinationEntity(195U);
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("THDRIQMAEPXCTMGDSEUSXLQLIWVAWBGDIGOAUXLFGTPGKKBCBXSLCERUIBZONMEOVNJCSYECAHZCVVFWXGRKDQUFZELUEFBRPGLZHWOJSUFFNBHJLDYOPUOHMRQYPHWNHQPNKIANARMDWLDFYPDEQHRXWMSHTVUMZLFSGMCIKSACOBPYJFAIRRHVZKBTQZTMNCJIYVKLINEOYVBYBRZNYXJPTTKQISOC");
    IMC::YoYo tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeout = 18365U;
    tmp_tmp_msg_0_0.lat = 0.806975187239;
    tmp_tmp_msg_0_0.lon = 0.674332464705;
    tmp_tmp_msg_0_0.z = 0.841099385534;
    tmp_tmp_msg_0_0.z_units = 246U;
    tmp_tmp_msg_0_0.amplitude = 0.727303341313;
    tmp_tmp_msg_0_0.pitch = 0.190464626916;
    tmp_tmp_msg_0_0.speed = 0.267907828599;
    tmp_tmp_msg_0_0.speed_units = 56U;
    tmp_tmp_msg_0_0.custom.assign("CIKVOKDURBLWYTUMDZPUTQOTGXLTQRLBJJGMJNFABILTJSHFUJWCVPVFZTHLMSB");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::DevDataText tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value.assign("GYLWCDCADUNEDYJORUASBTKHWHIXYZOQKDSTDNXSGAKZAWUGFXETOXRBZHEEITLBBSCVNNRKCMIKOSFMRWHLEZQDAKEFZQLORMVAYPZZQCUIJMQHFQQOESSXONZGFNVLSUAHYULVXYMJHVFCBFUERJC");
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
    msg.setTimeStamp(0.388040140857);
    msg.setSource(3932U);
    msg.setSourceEntity(57U);
    msg.setDestination(1945U);
    msg.setDestinationEntity(188U);
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("DEWHEOUFQYQTAPDENEWFTXGVLXCRXXHKDMITJZIJCRXVLAPKBCPCZJDGMSALEYLJNJBVDEOMILYPMLRVSIYYAJTOWIPVBLYHSNXQNNYUSOIKCQCHDONMIDCFARHZBJUZSFNDWKFFSZSWYBGSPZRCNRTRDPUOMVMGMTJDRFINCNW");
    IMC::LowLevelControl tmp_tmp_msg_0_0;
    IMC::DesiredSpeed tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.value = 0.416929150596;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 226U;
    tmp_tmp_msg_0_0.control.set(tmp_tmp_tmp_msg_0_0_0);
    tmp_tmp_msg_0_0.duration = 54043U;
    tmp_tmp_msg_0_0.custom.assign("YKRGVBBTAXGGMKUICQOEPELHCVNGLEOFHGCFPZHWHVMNQDRDJBLATLHXANUBRJHPYBHNKJTVQHQCYGTRFXXEXIWCAFWHUSGCNSCR");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::GroupMembershipState tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.group_name.assign("YMNIRZLXIWGYTSNQGDYQVKNRFBNCMPXVRJKWERXYUCGJTHZIRBHTVUHFJPBCWFZHIFOMQDTWCBFWOEJHHCBXNGASMDLAHUQODYHVBWKRTKIZCEIVFNSTLCAZJPJFLJALDMGTUMPROKCWEYAQLDQQXCQKAITUPDVMSYGGNUBZVEXPYADDRGJNQAJEPPLBFVOUALWUSOSGYXZDYM");
    tmp_tmp_msg_0_1.links = 1026636821U;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    IMC::UsblAngles tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.target = 56830U;
    tmp_tmp_msg_0_2.bearing = 0.317046307755;
    tmp_tmp_msg_0_2.elevation = 0.775309959729;
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
    msg.setTimeStamp(0.491279448049);
    msg.setSource(30338U);
    msg.setSourceEntity(73U);
    msg.setDestination(12704U);
    msg.setDestinationEntity(34U);
    msg.timeout = 60944U;
    msg.lat = 0.494288272756;
    msg.lon = 0.452357682954;
    msg.z = 0.940636866105;
    msg.z_units = 163U;
    msg.speed = 0.310052184861;
    msg.speed_units = 92U;
    msg.bearing = 0.027464100997;
    msg.width = 0.00117121129578;
    msg.direction = 16U;
    msg.custom.assign("UGBWTWIUPCHYPWSZFRHILIUXSYGGKQSEDZGVOWIQAUOJNREPQRHDYEFZFPNGMQUUWDMNNIFJDWLKRZOMVLOOACNUIBZNSRBXCVDOUVGAERKKMTSIBDFCIJSPOFBAHPZTRNCVVFXXKCATSHTJLOQQLZGEQZCLOATGA");

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
    msg.setTimeStamp(0.151046756019);
    msg.setSource(57391U);
    msg.setSourceEntity(191U);
    msg.setDestination(63713U);
    msg.setDestinationEntity(159U);
    msg.timeout = 653U;
    msg.lat = 0.445562437984;
    msg.lon = 0.974094855058;
    msg.z = 0.684109918298;
    msg.z_units = 92U;
    msg.speed = 0.222178992838;
    msg.speed_units = 173U;
    msg.bearing = 0.250727506506;
    msg.width = 0.859487362545;
    msg.direction = 5U;
    msg.custom.assign("HGTOEWSHBKUCPGXMVIAZRDNZOEJLQPNZJLRTPENWUXIBTOXAFPPFZZTRVBKBIJKCHC");

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
    msg.setTimeStamp(0.390163972018);
    msg.setSource(38201U);
    msg.setSourceEntity(42U);
    msg.setDestination(29006U);
    msg.setDestinationEntity(33U);
    msg.timeout = 44254U;
    msg.lat = 0.603573460113;
    msg.lon = 0.522486690998;
    msg.z = 0.106949959476;
    msg.z_units = 138U;
    msg.speed = 0.457908941739;
    msg.speed_units = 19U;
    msg.bearing = 0.0833003850615;
    msg.width = 0.766488125168;
    msg.direction = 25U;
    msg.custom.assign("UCCTHVGPKCSODAFCBTLSNFWFUVHWTXGNUXTMORPPARGXCSPIEHKXINYZHKQZMHZPHLDDDQVEBKSKNBTUMYVYMFGRPPRQAWYHQIOHVDDVXNGTJVLNF");

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
    msg.setTimeStamp(0.185180524682);
    msg.setSource(42656U);
    msg.setSourceEntity(0U);
    msg.setDestination(17632U);
    msg.setDestinationEntity(222U);
    msg.op_mode = 169U;
    msg.error_count = 9U;
    msg.error_ents.assign("UZEIXXTTWNEYVQIBBEFMPXAKOSATGAJYLJUJE");
    msg.maneuver_type = 52174U;
    msg.maneuver_stime = 0.865980501478;
    msg.maneuver_eta = 52975U;
    msg.control_loops = 1036643275U;
    msg.flags = 236U;
    msg.last_error.assign("IDYJNYIMERLZUWKXBJYYAMRFIPXOOXKHEFEWRVPDQJGJMAQLWTCNTLTTDIVJNYPFURVSPFRCPIEBHEXGMCPVQJTYHMRIOLQANVFHKLKROTVIVTBDBFWQTEVYFUGBGPWYPXWCNDSJKMOUHCXGCKJWSSOAODNGMMESAZINCXWTKHJWATSRDBCQABEHUFGDHWSQPYOZOKBIEKZNNCABUSSGYZLJGXXFZDVKFULNPZEXACLLGZVOQUSUUMHBRHM");
    msg.last_error_time = 0.266771875583;

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
    msg.setTimeStamp(0.712328090022);
    msg.setSource(63404U);
    msg.setSourceEntity(246U);
    msg.setDestination(51937U);
    msg.setDestinationEntity(206U);
    msg.op_mode = 43U;
    msg.error_count = 83U;
    msg.error_ents.assign("DXDOEAUMZPVORSKRTNCLDMGQBEGHWAAUXHFHJFYZFVTOAITJAEPGQCICPDCJZM");
    msg.maneuver_type = 59680U;
    msg.maneuver_stime = 0.175896313983;
    msg.maneuver_eta = 57377U;
    msg.control_loops = 514841915U;
    msg.flags = 38U;
    msg.last_error.assign("OCBHTNVQBBZWWCRLFBQUHEOMLULCLERFCAHXXOMUROKLBFDWIXMWGTHOJUNMGREGZHPMJSBUXNJSDSXONVMGOWGVRNDJKFSBYKTDETYBJIXEIUISNGWBUUPPIPZSXRVGQWFTYCYLCZAJPPQACKFCHYQJMNEVLTAFAFGYDDDI");
    msg.last_error_time = 0.353851601003;

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
    msg.setTimeStamp(0.553045564105);
    msg.setSource(22750U);
    msg.setSourceEntity(23U);
    msg.setDestination(31537U);
    msg.setDestinationEntity(145U);
    msg.op_mode = 241U;
    msg.error_count = 78U;
    msg.error_ents.assign("PNOUXKZFGRGIGLWGQKWGNVQVNQYIBGUBDSFEXRYCPVQHSOKWRYJTXOEQACNMLLITSSPHCIFWPWWMCWJLTPNLWXMSBHQIKVEHMDGYDODZINSYNZPQFRAQEZNHPKTFENUDMRNJRHCCHGBSYLCHLUXPOPQBKAVTCDJZEOMAIAIBRSOWBOAJSE");
    msg.maneuver_type = 48833U;
    msg.maneuver_stime = 0.489074496776;
    msg.maneuver_eta = 41988U;
    msg.control_loops = 3550532275U;
    msg.flags = 156U;
    msg.last_error.assign("RFCVMHRZFMUTDCCIIHTFBEEPXMQTOGWTZDNNOOHAYMPQKBVRUHMHLUABWIYIDDJNGZHXNV");
    msg.last_error_time = 0.500906102262;

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
    msg.setTimeStamp(0.21631237527);
    msg.setSource(56879U);
    msg.setSourceEntity(1U);
    msg.setDestination(1306U);
    msg.setDestinationEntity(124U);
    msg.type = 66U;
    msg.request_id = 8647U;
    msg.command = 78U;
    IMC::VehicleFormation tmp_msg_0;
    tmp_msg_0.lat = 0.391868681644;
    tmp_msg_0.lon = 0.119426509561;
    tmp_msg_0.z = 0.58299816471;
    tmp_msg_0.z_units = 204U;
    tmp_msg_0.speed = 0.782592734736;
    tmp_msg_0.speed_units = 93U;
    IMC::VehicleFormationParticipant tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.vid = 59604U;
    tmp_tmp_msg_0_0.off_x = 0.930077179149;
    tmp_tmp_msg_0_0.off_y = 0.243082144301;
    tmp_tmp_msg_0_0.off_z = 0.549215394487;
    tmp_msg_0.participants.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_time = 0.327549559364;
    tmp_msg_0.custom.assign("EYLZZPSWKFLORMWPK");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 50941U;
    msg.info.assign("XTFXTGNINDPZKLETCTDITYHHYPAKVSZCJDQSADHRXYJUMM");

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
    msg.setTimeStamp(0.271185878191);
    msg.setSource(40202U);
    msg.setSourceEntity(147U);
    msg.setDestination(59232U);
    msg.setDestinationEntity(238U);
    msg.type = 198U;
    msg.request_id = 36672U;
    msg.command = 211U;
    IMC::CommsRelay tmp_msg_0;
    tmp_msg_0.lat = 0.271512708649;
    tmp_msg_0.lon = 0.880814785871;
    tmp_msg_0.speed = 0.262076491973;
    tmp_msg_0.speed_units = 60U;
    tmp_msg_0.duration = 59120U;
    tmp_msg_0.sys_a = 46393U;
    tmp_msg_0.sys_b = 33860U;
    tmp_msg_0.move_threshold = 0.427045683895;
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 20807U;
    msg.info.assign("KCWUDSFFMCBDBMGPUUCFMISJYQRLZEFRTYXXXRRAQMYKDSETRNKLJMASZMNIWUZPEOGMFHUCOGJNAJWQSTLQSEFIOJQSG");

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
    msg.setTimeStamp(0.7732813869);
    msg.setSource(27566U);
    msg.setSourceEntity(165U);
    msg.setDestination(23628U);
    msg.setDestinationEntity(235U);
    msg.type = 36U;
    msg.request_id = 62613U;
    msg.command = 84U;
    IMC::CustomManeuver tmp_msg_0;
    tmp_msg_0.timeout = 10202U;
    tmp_msg_0.name.assign("AXPFUQTCBGDQSJFQUNLAYPZICQVGZTECSMGVZSNJGODLECIMNRWPDPJNRUSXSYGYBXLHYAQKDWWLPIXMVUZWVNROBHFFALKEHOJRCYFRHGAPACEIGKUMVXNOEBTNNLIC");
    tmp_msg_0.custom.assign("IBTCWNHMDXBFJVUYWYDRYHJTILJVHZSUFXFCALFIFJZRATGLSOZJKDBRANMKLSWEIQMPYBANMYZBRAQZKRSVCDGWZKUQITEUHPVUNULHTCOEEDGLEJKOQPKKYXEIFAIZGHHTWWEDW");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 32850U;
    msg.info.assign("LOWHBIYFXLWBDJVUBDATJCPUCSAMPBMOBXSMGDBCHSAEQEHNYCTSXITLEIRKNSZODVBGXBMFGEZRQRJYFIPNNRYIWQEKXTWHVKOONYFAOGZRMCVWTLDPDWQKOEPFSQALJXONFGYPFGNWMSEKVTIPYJWJMUULULTCKZQQJQCXROVKHNZYGNZCHKTSPKZAVJRLCWKYITEDGIUNWOHBULAQGURMDDFERHHZXZDJJQ");

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
    msg.setTimeStamp(0.1637925104);
    msg.setSource(4257U);
    msg.setSourceEntity(208U);
    msg.setDestination(41794U);
    msg.setDestinationEntity(168U);
    msg.command = 167U;
    msg.entities.assign("NAHKMISYWDLHLHFBCIUAHO");

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
    msg.setTimeStamp(0.964496246952);
    msg.setSource(15676U);
    msg.setSourceEntity(149U);
    msg.setDestination(58831U);
    msg.setDestinationEntity(171U);
    msg.command = 93U;
    msg.entities.assign("XTNGBUYKLGRNVTBCPQOHGJTUIPGAXXDCGXNAVEKSZCWZUADEUUKTGRDACJXUORWLJLAPIHFCRAUNIVKONDOWTZYWVTUXTEQRIVVUAFCWSQACRFYVHZUNMFPRMJXZXHISDMBOBQPFZSSYEAOHSMJPRIWDZEBGPLOKDOBCIMLQWMEHXSKYGVDMFNVMAIIDJZBLNJLYMZYRHBQIVJSPBGFEQRYFYNWJFHHBKFWCWXS");

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
    msg.setTimeStamp(0.577056095551);
    msg.setSource(10504U);
    msg.setSourceEntity(42U);
    msg.setDestination(339U);
    msg.setDestinationEntity(158U);
    msg.command = 240U;
    msg.entities.assign("KVDKYIDDWZAQGTYZGIXJLHFSIAGUMXSOCCBUXHUAOKCAQNOZHEBDFHXDMTYJPUHNWHBMDYWVMQGWIRSYQSMVNURQDCXEJGVTBAQWTIZHWKEVKJLINOXBVSYNROYTQUIHJDXDKLXCOPXUFBPJRPVPCLLPGWDCABLAVNFFFWUEGZHTVBNOSPAFMCYUJZTSJETQLMNJGOPIEZWMYETKLTOFSERKNEFPIG");

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
    msg.setTimeStamp(0.0270384578648);
    msg.setSource(53950U);
    msg.setSourceEntity(234U);
    msg.setDestination(20028U);
    msg.setDestinationEntity(149U);
    msg.mcount = 96U;
    msg.mnames.assign("DHDBOYXEGSKYXKZICOHIGRGUSAPJASDYSNAUWETBLSPXUWVCLUCXYYCFUREQPQQKPKGVVDPERAXEWKDKMHMRTVRJLZPQXOPUNGBLNDDTEERSVGBBOUNUHHBXTBSSQMMNKNCLDBJRQEAEIZRDPMJZZWYWPT");
    msg.ecount = 148U;
    msg.enames.assign("ITGOPQYFALQVWZLSAMLHQPHJLYBASKVPHDV");
    msg.ccount = 240U;
    msg.cnames.assign("YHMXXMAVTKTLCJSWNMWPUEHCNKTNUHYFZLIXKWAISO");
    msg.last_error.assign("NKIAUCVKDIFLDQFLQLQNJSTMQXWFWQBECDHAVZVTYZDBEJPAHYXPCRDNOIYSUHKUAJIMWBMGGIFIZQRGOHDMPGTKWONCZOYXNVLSQHACO");
    msg.last_error_time = 0.505967374492;

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
    msg.setTimeStamp(0.486311182303);
    msg.setSource(28706U);
    msg.setSourceEntity(16U);
    msg.setDestination(1669U);
    msg.setDestinationEntity(229U);
    msg.mcount = 4U;
    msg.mnames.assign("DHNCYZUXGAIFWQFDPJJZISZFHXPYQKGICUGFHDMMOYRWJKYBYFWAALJBQDATLVXAERSRMKDNGPHZCJBVLHXGDCKOROVZTWNVVHCONUKIHTUTJXCSQUQLAYYBOXSASQWRXCPZBUOXAJMQINWZEUSTVZEBPBP");
    msg.ecount = 101U;
    msg.enames.assign("QOVLMAMGTRFYLZKHTRQKQPKWUPDGBAYYOOYLXZUBBKPTPDMIRXXTTGUPELENMFGEVJOTESORWIDWFZPCF");
    msg.ccount = 119U;
    msg.cnames.assign("FUVKRNQMSLGYULNRXBBVRJXDYEZFWGXWBXFKXTEIZETTXSKGQXDGZEQSMVWFVCRLQUCEXYHZGPQYCDPSNDMAWHPJORDVOHIXVUIQYFDR");
    msg.last_error.assign("ZDHWBIAWCRGKHINYCSZTMZHMXLVEOWQLBZUDLUTRQFNQPBVFEVKXCWILYJOMVUNPJLXWJOISDGKMBAJYSXSZCJTADRTAGNXPBAGUQAOUGJMKOHPTOCNTZYFXEDAGSFKPJVRSRVAKYOYUQIBLPHERGSZWNEUQSYIPCQPHDINFLDF");
    msg.last_error_time = 0.871286356957;

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
    msg.setTimeStamp(0.883917661865);
    msg.setSource(19717U);
    msg.setSourceEntity(201U);
    msg.setDestination(46723U);
    msg.setDestinationEntity(204U);
    msg.mcount = 127U;
    msg.mnames.assign("TWQYWDUNVULVIBGUXVITTACIMDLGMBTPWGKAUNMONJETRFPZFJAIRJHGBXDUMKXVDSOOPYLYEVURCPOZEAMZSNQTDHPWD");
    msg.ecount = 157U;
    msg.enames.assign("DGFUNUZBNENYWYAXPZWOGQTRMTLAZDBWIJDCKNONQSCEKWBVQXNFDAGRPJYFTIMFZVPJELTIJBPBGQWXSPTLFBHCRBMESXTSFELHNPVNUWAWSKWYGJFKEOMOUMZAZARAJMVJQKDIOJEFQRSHQHROKUCRSEYTSVDVUROOPHKVJPNUFLJHBSHMZFHGIDYVLVNTILYKTATOC");
    msg.ccount = 170U;
    msg.cnames.assign("PTTDWOEPLJ");
    msg.last_error.assign("TTMTQAZNPQQRECZITHRNULLMKGMMIQOPGIZCDVHRRRUXMJINUVJIUOJJHECNVJCXYUEBZMHDCJQGLCSLBZZBOXEPUCXIFAYWACGZISHRLXSLZPGHVFPNGBTRYGFSEFSOWJWHUKRJUXNYYLWRZKKSGMDSVAYCDATYIGOCSB");
    msg.last_error_time = 0.526915393485;

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
    msg.setTimeStamp(0.0890183385531);
    msg.setSource(1463U);
    msg.setSourceEntity(19U);
    msg.setDestination(26086U);
    msg.setDestinationEntity(202U);
    msg.mask = 244U;
    msg.max_depth = 0.916499699005;
    msg.min_altitude = 0.541157974881;
    msg.max_altitude = 0.263883346031;
    msg.min_speed = 0.391792475285;
    msg.max_speed = 0.907200854327;
    msg.max_vrate = 0.237675041922;
    msg.lat = 0.81879315431;
    msg.lon = 0.0364659180734;
    msg.orientation = 0.931158553067;
    msg.width = 0.549057552139;
    msg.length = 0.857997458586;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.876448895203;
    tmp_msg_0.lon = 0.571793347015;
    msg.vertices.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.777042441733);
    msg.setSource(48098U);
    msg.setSourceEntity(26U);
    msg.setDestination(5204U);
    msg.setDestinationEntity(172U);
    msg.mask = 252U;
    msg.max_depth = 0.218597074948;
    msg.min_altitude = 0.272161223645;
    msg.max_altitude = 0.830705147735;
    msg.min_speed = 0.998914654864;
    msg.max_speed = 0.24161486767;
    msg.max_vrate = 0.377557341221;
    msg.lat = 0.530654244223;
    msg.lon = 0.0606330876129;
    msg.orientation = 0.457721322399;
    msg.width = 0.0599375787979;
    msg.length = 0.539969137621;

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
    msg.setTimeStamp(0.746442623795);
    msg.setSource(6518U);
    msg.setSourceEntity(35U);
    msg.setDestination(53324U);
    msg.setDestinationEntity(205U);
    msg.mask = 202U;
    msg.max_depth = 0.57561176442;
    msg.min_altitude = 0.123327461876;
    msg.max_altitude = 0.69861151774;
    msg.min_speed = 0.570198398815;
    msg.max_speed = 0.0107568954557;
    msg.max_vrate = 0.708832361437;
    msg.lat = 0.250466411677;
    msg.lon = 0.45545321426;
    msg.orientation = 0.768582213642;
    msg.width = 0.737356664523;
    msg.length = 0.704287993154;

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
    msg.setTimeStamp(0.767014990931);
    msg.setSource(34803U);
    msg.setSourceEntity(92U);
    msg.setDestination(10518U);
    msg.setDestinationEntity(242U);

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
    msg.setTimeStamp(0.0495322960535);
    msg.setSource(57166U);
    msg.setSourceEntity(185U);
    msg.setDestination(11637U);
    msg.setDestinationEntity(248U);

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
    msg.setTimeStamp(0.201459063579);
    msg.setSource(56253U);
    msg.setSourceEntity(85U);
    msg.setDestination(50584U);
    msg.setDestinationEntity(219U);

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
    msg.setTimeStamp(0.0513113932856);
    msg.setSource(64486U);
    msg.setSourceEntity(214U);
    msg.setDestination(62755U);
    msg.setDestinationEntity(178U);
    msg.duration = 65274U;

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
    msg.setTimeStamp(0.981729423794);
    msg.setSource(10360U);
    msg.setSourceEntity(69U);
    msg.setDestination(63632U);
    msg.setDestinationEntity(240U);
    msg.duration = 4194U;

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
    msg.setTimeStamp(0.487955330887);
    msg.setSource(51831U);
    msg.setSourceEntity(34U);
    msg.setDestination(26832U);
    msg.setDestinationEntity(112U);
    msg.duration = 12377U;

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
    msg.setTimeStamp(0.000560122220636);
    msg.setSource(39545U);
    msg.setSourceEntity(218U);
    msg.setDestination(20437U);
    msg.setDestinationEntity(114U);
    msg.enable = 102U;
    msg.mask = 2880386238U;
    msg.scope_ref = 3999062261U;

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
    msg.setTimeStamp(0.289532195217);
    msg.setSource(12026U);
    msg.setSourceEntity(177U);
    msg.setDestination(53387U);
    msg.setDestinationEntity(14U);
    msg.enable = 203U;
    msg.mask = 2932636749U;
    msg.scope_ref = 1731671293U;

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
    msg.setTimeStamp(0.453726159357);
    msg.setSource(6163U);
    msg.setSourceEntity(35U);
    msg.setDestination(25313U);
    msg.setDestinationEntity(45U);
    msg.enable = 123U;
    msg.mask = 1843525296U;
    msg.scope_ref = 406524595U;

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
    msg.setTimeStamp(0.782250800725);
    msg.setSource(38904U);
    msg.setSourceEntity(39U);
    msg.setDestination(20630U);
    msg.setDestinationEntity(103U);
    msg.medium = 63U;

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
    msg.setTimeStamp(0.659423768696);
    msg.setSource(58325U);
    msg.setSourceEntity(122U);
    msg.setDestination(20423U);
    msg.setDestinationEntity(2U);
    msg.medium = 82U;

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
    msg.setTimeStamp(0.347189175909);
    msg.setSource(18528U);
    msg.setSourceEntity(50U);
    msg.setDestination(8317U);
    msg.setDestinationEntity(126U);
    msg.medium = 156U;

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
    msg.setTimeStamp(0.301763148868);
    msg.setSource(59204U);
    msg.setSourceEntity(118U);
    msg.setDestination(34453U);
    msg.setDestinationEntity(13U);
    msg.value = 0.986872479559;
    msg.type = 57U;

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
    msg.setTimeStamp(0.259625557226);
    msg.setSource(207U);
    msg.setSourceEntity(174U);
    msg.setDestination(12647U);
    msg.setDestinationEntity(22U);
    msg.value = 0.0517413285375;
    msg.type = 143U;

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
    msg.setTimeStamp(0.176422414585);
    msg.setSource(18366U);
    msg.setSourceEntity(17U);
    msg.setDestination(25574U);
    msg.setDestinationEntity(5U);
    msg.value = 0.269253339318;
    msg.type = 118U;

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
    msg.setTimeStamp(0.244376026838);
    msg.setSource(15355U);
    msg.setSourceEntity(137U);
    msg.setDestination(51657U);
    msg.setDestinationEntity(110U);
    msg.possimerr = 0.0576114116218;
    msg.converg = 0.34678697705;
    msg.turbulence = 0.128046305576;
    msg.possimmon = 38U;
    msg.commmon = 103U;
    msg.convergmon = 228U;

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
    msg.setTimeStamp(0.905003068335);
    msg.setSource(16739U);
    msg.setSourceEntity(141U);
    msg.setDestination(19623U);
    msg.setDestinationEntity(230U);
    msg.possimerr = 0.989644448647;
    msg.converg = 0.318000064513;
    msg.turbulence = 0.00606917865619;
    msg.possimmon = 159U;
    msg.commmon = 157U;
    msg.convergmon = 65U;

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
    msg.setTimeStamp(0.902482424883);
    msg.setSource(33923U);
    msg.setSourceEntity(185U);
    msg.setDestination(25278U);
    msg.setDestinationEntity(52U);
    msg.possimerr = 0.510804605107;
    msg.converg = 0.652344811796;
    msg.turbulence = 0.906193280762;
    msg.possimmon = 35U;
    msg.commmon = 21U;
    msg.convergmon = 154U;

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
    msg.setTimeStamp(0.719834112155);
    msg.setSource(64645U);
    msg.setSourceEntity(150U);
    msg.setDestination(10703U);
    msg.setDestinationEntity(4U);
    msg.autonomy = 53U;
    msg.mode.assign("LFYWOMGDOVNSZKOHDUXCARYVBVEQZPTBVUSGLRWQEURABISWIMFSOUGBOVLZDLGTTIOXBZRDKMZLPDRSMCMNDKZ");

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
    msg.setTimeStamp(0.781017019071);
    msg.setSource(2808U);
    msg.setSourceEntity(153U);
    msg.setDestination(47865U);
    msg.setDestinationEntity(57U);
    msg.autonomy = 185U;
    msg.mode.assign("ZPJIQQXOBGHTJSYNRBKQVEWFRGMJABEYKLQNWVUULQVFTZYEMZKBDIIGPFHYOXLAHSRHADDSCJMLJYUAWZFCWBNOSZBMKECGRHCQLQJINHSNXRCFHMMUVNPHEPFZDJHPYVVMWUGWW");

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
    msg.setTimeStamp(0.0347959906495);
    msg.setSource(14045U);
    msg.setSourceEntity(189U);
    msg.setDestination(48990U);
    msg.setDestinationEntity(71U);
    msg.autonomy = 175U;
    msg.mode.assign("BLHNZFXMMECWPKAMKMPERQZQGJAZCXAXHEOCHXNPYZVIVOHIHSRIFKKXIDFLTOJPWNWKPEAJGVNNEONJSDJPLQSMGMTXMYJLILCZWKDWNRZNUJSSWRCGCYWQQTFZVAUVRSUMLUEDBSUTLBTTLYLTPPKZJVGZJRQHKIFVWODDRRJDACYAYQSOAOIQGXQC");

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
    msg.setTimeStamp(0.297979340546);
    msg.setSource(46224U);
    msg.setSourceEntity(188U);
    msg.setDestination(4882U);
    msg.setDestinationEntity(224U);
    msg.type = 22U;
    msg.op = 219U;
    msg.possimerr = 0.393655803751;
    msg.converg = 0.266870539074;
    msg.turbulence = 0.589237192561;
    msg.possimmon = 173U;
    msg.commmon = 34U;
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
    msg.setTimeStamp(0.876856437378);
    msg.setSource(14215U);
    msg.setSourceEntity(151U);
    msg.setDestination(32682U);
    msg.setDestinationEntity(37U);
    msg.type = 225U;
    msg.op = 56U;
    msg.possimerr = 0.410484094525;
    msg.converg = 0.0127288798076;
    msg.turbulence = 0.542910408674;
    msg.possimmon = 38U;
    msg.commmon = 230U;
    msg.convergmon = 26U;

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
    msg.setTimeStamp(0.717095951371);
    msg.setSource(9075U);
    msg.setSourceEntity(30U);
    msg.setDestination(52838U);
    msg.setDestinationEntity(188U);
    msg.type = 61U;
    msg.op = 95U;
    msg.possimerr = 0.131186259982;
    msg.converg = 0.925263622041;
    msg.turbulence = 0.926771875333;
    msg.possimmon = 234U;
    msg.commmon = 244U;
    msg.convergmon = 190U;

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
    msg.setTimeStamp(0.0343496126738);
    msg.setSource(2397U);
    msg.setSourceEntity(61U);
    msg.setDestination(17179U);
    msg.setDestinationEntity(60U);
    msg.op = 18U;
    msg.comm_interface = 50U;
    msg.period = 44024U;
    msg.sys_dst.assign("ODPAUCKOUHBMOTSLTLRFKWTQZUWCPFIWFEBUMOIVQABMKVIXUHCKSEMXBCQRVNZYZDJXDNAXOAQQELEKUNAEJAQGGRSSCGMPZHRVYQRRFTCVMY");

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
    msg.setTimeStamp(0.609899059019);
    msg.setSource(47321U);
    msg.setSourceEntity(64U);
    msg.setDestination(51090U);
    msg.setDestinationEntity(55U);
    msg.op = 244U;
    msg.comm_interface = 198U;
    msg.period = 57169U;
    msg.sys_dst.assign("YTTZWEAIEPRTAJRUFOEVCVDCVMTUBKNWDWWGDHNHNHWFIYBZJHJAIQGZQLAWDROMKUKMNODQQXZODZPEDVAUCICCNOIQDWJNNGNXTLLJ");

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
    msg.setTimeStamp(0.64913871094);
    msg.setSource(13302U);
    msg.setSourceEntity(208U);
    msg.setDestination(30530U);
    msg.setDestinationEntity(182U);
    msg.op = 27U;
    msg.comm_interface = 187U;
    msg.period = 50374U;
    msg.sys_dst.assign("IZFJTYTRAIZMGEMQVGVJTROGEODQRDYHAMNHPNSYZLIHUOCXXWJSBLQZDBLIZUVDCIHJJAPJNMSFEODIXSCZMHDAQJGJQHQLKRKRREJYOVMEGWYGQTYLTEZNCDQJXFUGTLFPTUBUZ");

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
    msg.setTimeStamp(0.427922808683);
    msg.setSource(34565U);
    msg.setSourceEntity(198U);
    msg.setDestination(1628U);
    msg.setDestinationEntity(194U);
    msg.stime = 2643990998U;
    msg.latitude = 0.917529276718;
    msg.longitude = 0.454814700142;
    msg.altitude = 447U;
    msg.depth = 55519U;
    msg.heading = 20628U;
    msg.speed = 7744;
    msg.fuel = 117;
    msg.exec_state = -106;
    msg.plan_checksum = 25511U;

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
    msg.setTimeStamp(0.245275090947);
    msg.setSource(61457U);
    msg.setSourceEntity(89U);
    msg.setDestination(9695U);
    msg.setDestinationEntity(86U);
    msg.stime = 375554547U;
    msg.latitude = 0.153790650674;
    msg.longitude = 0.0622500911127;
    msg.altitude = 51309U;
    msg.depth = 23763U;
    msg.heading = 28567U;
    msg.speed = 19201;
    msg.fuel = 9;
    msg.exec_state = 117;
    msg.plan_checksum = 21973U;

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
    msg.setTimeStamp(0.337451450915);
    msg.setSource(21776U);
    msg.setSourceEntity(69U);
    msg.setDestination(59854U);
    msg.setDestinationEntity(182U);
    msg.stime = 4027651936U;
    msg.latitude = 0.758036045611;
    msg.longitude = 0.359647790258;
    msg.altitude = 42920U;
    msg.depth = 41197U;
    msg.heading = 44529U;
    msg.speed = -18704;
    msg.fuel = -53;
    msg.exec_state = -7;
    msg.plan_checksum = 45470U;

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
    msg.setTimeStamp(0.649319706569);
    msg.setSource(42556U);
    msg.setSourceEntity(62U);
    msg.setDestination(2841U);
    msg.setDestinationEntity(159U);
    msg.req_id = 53806U;
    msg.comm_mean = 21U;
    msg.destination.assign("AHQDHLCFEPZAFXNWEKDIIAZOBCVEOKOYKVSKQDUWDPCQWATRYKOLTHCTNIMLJFFUVGBQLHYLWAYYJTQEHMPETUOXNFHSNXQDYRHHICCOSWIISHCMKKZVNYYUQGYXBTFOGZTVOJGPMMWKPJNMXZWXVZNCDGWJXBQTABLCIXY");
    msg.deadline = 0.403418974571;
    msg.range = 0.105878672374;
    msg.data_mode = 25U;
    IMC::SetPWM tmp_msg_0;
    tmp_msg_0.id = 184U;
    tmp_msg_0.period = 1916815399U;
    tmp_msg_0.duty_cycle = 1765018186U;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("JWMMUBYCTEDTYUMKEMFWHQBKGVWLSACOHLRJNMXOWJTTBNDHVEEKBCFFRIZLKUDQDNHUMDHRZQAQPZICGYZKLUUFMSEBQAU");
    const char tmp_msg_1[] = {-43, 9, 54, 63, -12, 14, 64, -14, 44, 66, -42, -64, -115, 77, -69, 66, 43, 104, -64, 83, -47, -30, -98, -38, -54, 89, -115, 47, -40, 114, 8, -82, -82, 42, -127, -59, -35, -118, 18, 117, -125, 110, -9, 53, 2, -115, 8, 45, -44, -14, -70, 114, 117, 73, 122, -83, 56, -109, 105, -95, -128, 118, 123, -21, 118, -63, 60, -127, 41, 26, -23, 25, -79, 106, -65, -98, -70, 8, 112, 107, -60, 61, -13, -103, 27, 102, -110, -81, -41, 12, 39, -66, 36, -99, 44, 53, -62, 37, -27, -82, 5, 51, -78, -76, 12, -113, 72, -58, -31, 119, 59, -123, 116, 3, 122, -121, -56, 69, -70, -25, 120, 46, 117, -40, 94, -54, -93, 48, 60, -30, 114, -113, -87, -6, -84, 119, -51, 43, 11};
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
    msg.setTimeStamp(0.0388456046214);
    msg.setSource(51697U);
    msg.setSourceEntity(61U);
    msg.setDestination(15099U);
    msg.setDestinationEntity(228U);
    msg.req_id = 58699U;
    msg.comm_mean = 29U;
    msg.destination.assign("RBEGPOWWACELHAESQIODDGCIHGBCYLDYMEHNLWIWEPIXFKJRGLYFVTMSYJZXZDFBUMCQJYBOQTHTOOBDPKZFWTTVVTGNNJKKESPZUIQUABBXHCWRMQGIESYUCJMNMRWAMSWNRSVWDJADFTZAZHFBPZFKD");
    msg.deadline = 0.503750748254;
    msg.range = 0.926215669946;
    msg.data_mode = 13U;
    IMC::SmsStatus tmp_msg_0;
    tmp_msg_0.req_id = 21821U;
    tmp_msg_0.status = 45U;
    tmp_msg_0.info.assign("RFDUWTVEBVSUINHYRAEKRWFAOUZTJSVKHEUEFQFUQXSDFBZYZBZAEEBJMPFIOQDQSWHNFYOLGXTCTQKJEYZFLJMMPNKPLWAUSMZQNJNQADOTMPPRSZMVPGWRRDCRHGBXHSKHQOYICOGJVFGIBGOXKGHLPNXDTVGWDQZEJUTTMNVLKRXFBPIBHIRUINHCGMSCCYJLRCXWLYWXKKMHXVMADDKZEYLIUAZDEUSVBJC");
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("AGWHENYKSYXBTLYNHYPEQCMRJIGUIZSGOJCTKXTRDSAJBVJRXMPUXIJGUXVQTDPZLSQFIHEQHHUPCIWHNRGMTVXYQWBLAVTFAXJMMAHXBKZVVDTBENSRCRUZPPLKAGDCCZVQBYZJNGPSSJOLFGBOURWUMZEMUKVNEWWXOOTKIQIJT");
    const char tmp_msg_1[] = {62, -118, -22, -113, -38, 22, -15, 9, -10, 99, -85, 28, -120, -90, -54, 29, 52, -32, -61, 16, 49, -65, -111, 31, -82, -6, 89, 11, 29, 88, 14, 4, 13, 110, -17, -113, 42, 27, 40, 123, -107, 47, 2, -54, -35, -1, -30, 116, -55, 70, 120, 85, 83, 91, 36, 68, 23, 108, -12, -43, 97, 80, 14, 78, -5, -58, 86, 74, 82, -119, 70, 31, 80, -122, 14, 104, 106, 109, 42, 101, -57, 12, 74, -60, -105, -41, -55, -76, -102, -97, -81, 83, 65, 25, -28, 83, 120, 25, 12, 48, -22, -74, -91, -121, 16, -115, 43, 55, -21, -87, 63, -25, 91, -45, -93, -99, -73, -67, -18, -23, 20, -96, -22, -124, -34, 91, 9, -36, -105, -115, -1, 32, -112, -77, 83, -119, -45, 56, 64, -71, -23, 49, 58, -19, 124, 72, -53, -89, 97, -71, 51, -112, 73, -122, 84, 47, 100, -4, 43, 113, -63, -122, 48, -29, -59, 56, -91, -113, 104, 57, 89, 42, 4, -52, 82, 1, -21, -41, -9, -92, 86, 115, 17, -3, -34, -79, -119, 5, -49};
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
    msg.setTimeStamp(0.442211838808);
    msg.setSource(27769U);
    msg.setSourceEntity(89U);
    msg.setDestination(50898U);
    msg.setDestinationEntity(40U);
    msg.req_id = 10729U;
    msg.comm_mean = 52U;
    msg.destination.assign("XPYDGPFUYIDIIRNEJSJVXQHHHSGRPJRMOLNTCQWQJLKZXYVAUVZYXOKYXTZQXISEJWJHOMSDTBKOASHBCAUVITOSNBYGUUFHRGKBNEMQVKTHIXAUMZLFVNCBUVKFAC");
    msg.deadline = 0.522213410034;
    msg.range = 0.201940108771;
    msg.data_mode = 118U;
    IMC::Power tmp_msg_0;
    tmp_msg_0.value = 0.695201164737;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("VQEBXGPLFGBCFYRKOVEUMCEXLACTPMCECAKTJZODQQIOCJNFYHEXKXWPWNROIGWBUJPHYBAONLENRNRVAXNRUNRMSOGMDCVOS");
    const char tmp_msg_1[] = {73, -107, 100, 56, 68, -16, -125, 16, -94, 61, 101, 94, 88, 10, 52, 123, -17, 5, 7, -89, -46, 43, -99, 45, 13, 6, -27, -22, -128, 100, 123, -27, 96, 78, -30, -38, -104, -27, 35, -48, 1, 116, -11, 74, 79, 51, 44, 124, -47, 45, 17, 64, 12, 59, -69, 6, 105, -1, 126, 29, -55, -122, -9, -78, 51, 66, 63, -3, 16, 123, -88, 49, -37, 94, -22, 51, 119, 16, 116, 118, -121, 52, 45, -71, 10, -117, -16, -118, -81, 77, 66, -44, -44, -6, 92, -78, -89, 18, 22, 68, -55, -101, -65, 116, -94, 25, -67, 101, 97, 9, -114, 37, -128, 89, -109, -107, 81, -13, -38, -43, -61, -125, -88, -39, 68, 90, -94, -41, -85, -60, -119, 88, 58, -86, 31, -1, -90, 47, -72, 52, -5, 55, 24, -30, 104, 79, -110, -54, 34, -96, -50, 51, 81, -24, -5, -22, 35, -76, -1, -101, 25, -88, 94, -85, -98, 116, -76, 44, 3, -50, 2, 116, 43, 97, 94, 15, 115, 111, 43, 94, -83, 93, 18, -92, 84, -35, 41, 59, -110, 41, -18, 73, 63, 126, 91, -75, -20, 53, 18, -63, -128, 39, 83, 117, 78, 79, 114, 80, -90, 102, -33, -39, 16, -82, -117, -49, 22, 20, 115, 80, -9, 31, 49, -66, 87, 66, -54, -87, 13, 118, 41, 88, 27, -105, -20, 59, -70, 123, -39, 52, 37, 93};
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
    msg.setTimeStamp(0.556834706673);
    msg.setSource(46636U);
    msg.setSourceEntity(75U);
    msg.setDestination(41321U);
    msg.setDestinationEntity(89U);
    msg.req_id = 22281U;
    msg.status = 126U;
    msg.range = 0.199369032854;
    msg.info.assign("PPDZZJGQTYQWFQFKFIRRCDVDLHWYFROGXDNEXSDDBCWRECJWZNMOTNTASZKPGXSMKDEOTVEXVHKTOYUPZJHFYMKHZGGXHAQPYMALXCBBUSMGDZEQVVVBRPJCLMAOWKTMHYBCOWFUACULSQNSNLXHIQVWITAQJBOOXBMJWAHOTGVBYSUULKWFGHAZ");

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
    msg.setTimeStamp(0.631873566494);
    msg.setSource(33060U);
    msg.setSourceEntity(41U);
    msg.setDestination(55521U);
    msg.setDestinationEntity(218U);
    msg.req_id = 23052U;
    msg.status = 11U;
    msg.range = 0.304013647646;
    msg.info.assign("KWYLIYQKJRAWZKQNXJSDLRVCZSMJLOINTMYSANDLXVGBMFQHYCUXTPVZSJSIXWURDWIAQAFG");

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
    msg.setTimeStamp(0.590805305561);
    msg.setSource(9778U);
    msg.setSourceEntity(57U);
    msg.setDestination(48123U);
    msg.setDestinationEntity(231U);
    msg.req_id = 2168U;
    msg.status = 154U;
    msg.range = 0.400893387499;
    msg.info.assign("IYNKCEEGRGKPLZFJGBJNBRTIRWWAXDMRVVHVLQYIBZSIZSIVHKAGATAKTXYHOEPTAOIYKGMHZLBXR");

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
    msg.setTimeStamp(0.357361758097);
    msg.setSource(15379U);
    msg.setSourceEntity(127U);
    msg.setDestination(8057U);
    msg.setDestinationEntity(159U);
    msg.req_id = 27407U;
    msg.destination.assign("YDEIXKNSVUFISAFZEQSUQJNQSCFUZJOVKUOBYTPFWJSMZXAIBRFMGKRIQLURLUEHZVCMVPDJESENCZTBOH");
    msg.timeout = 0.942877502989;
    msg.sms_text.assign("RSVMJODCXYHZQTEOOYQJRNXHILJNZLOWNIKJBMBJOQPDVMSOTXHWMNBUCRVXXIKIPGOUUVHPHLEGUKLEDXZQBARTAADHRQJJNYPRTFSWREBTYIKNAIDMGFSIHFPPGHTUVSLVNDSFFAAJQXFAHOXUCTEUYXFMZABVMHBLUZPMYDZCKEVJCGMJGWIPKTBVQWRWLYSLMLBFOUCSZCFEKYRQIWKGLUBKKV");

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
    msg.setTimeStamp(0.089921018703);
    msg.setSource(35107U);
    msg.setSourceEntity(149U);
    msg.setDestination(47571U);
    msg.setDestinationEntity(13U);
    msg.req_id = 3405U;
    msg.destination.assign("BDXWYGSKISOUTNYTSAJYADXAJWXZGGINHWSXVVHEQMZYZULNHAEURWETZJNMRBNQVBQITYASHCPLLMSGXKOWQEFVRCCZXLBTHEHUAMIWKNLJUPFVOLPGQNEFXZKECGKWZYDIIZQBBHYDDCBJCVCJZSMUOCBWWXMPLOOKJFSRZWYVMPLPRTADFTJEKCTTVRIGPYLVBUQMNHGQVXJMOPNODIKYSFDBTKUAQFOKQNRFXPGAIUEHAJHIOLCUDGS");
    msg.timeout = 0.0929000181761;
    msg.sms_text.assign("RRBVRJFAITTQCGZSXSVAMFQKZOAAODRTZPUXKUSGTNTOLJUZCXSMOXKIUSNPYXHYCZTHHCMDNFVWRMVFMGEVGEZRKICVBZJNLIJHODUGSKRJYPYEO");

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
    msg.setTimeStamp(0.660490557437);
    msg.setSource(3633U);
    msg.setSourceEntity(160U);
    msg.setDestination(25057U);
    msg.setDestinationEntity(149U);
    msg.req_id = 50670U;
    msg.destination.assign("GYRWFYHPZDBSUHTYWECOAXIJVIFTQIROBUDXITSELYZC");
    msg.timeout = 0.332746417697;
    msg.sms_text.assign("ULJBOWZJCRKXVSVOUNYTVMLTD");

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
    msg.setTimeStamp(0.626304092692);
    msg.setSource(63852U);
    msg.setSourceEntity(247U);
    msg.setDestination(27144U);
    msg.setDestinationEntity(186U);
    msg.req_id = 21051U;
    msg.status = 156U;
    msg.info.assign("APXGMWBALTRCOSYGNLSSCYKFJJIZWQQHZVDWI");

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
    msg.setTimeStamp(0.580074223804);
    msg.setSource(11356U);
    msg.setSourceEntity(50U);
    msg.setDestination(29829U);
    msg.setDestinationEntity(46U);
    msg.req_id = 61269U;
    msg.status = 163U;
    msg.info.assign("QIDNRYNIOLRZLNSQJXFYLVYGWRZBOUMUAGDTHCMJZECRTVVJEZYKAOQJIFEAEEGZOLBNNHCTSWOOYNSOWBOJVXPEZXXHMKCHUTSUXMPKFURAISETDWAYKBJSIJKPUIVVKQFBTWSGOMKZGAQSQYZDCPNTUGCDQDLCHIUMPO");

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
    msg.setTimeStamp(0.586426624222);
    msg.setSource(13311U);
    msg.setSourceEntity(30U);
    msg.setDestination(27839U);
    msg.setDestinationEntity(18U);
    msg.req_id = 37479U;
    msg.status = 126U;
    msg.info.assign("PMNHZMZFWQAVFWFXHHRWGSNSYIULAYNWLSSOJDRLWXMVEAYOKNTFWHBUTJKNBTJQGFXPZRJYKIVUHKULNTAQWIWVEBCFFGDYQLCJSMGXYZBIFPEPGCZQRBPJHXZDMEIZXCJVMVUQHCOBGDAASNSFPMZCCQMKNRYBYALLISEQGBLDPMUIKSFKOERPVHDRCDLKOEODJCRATXXXKVGOHVGBUNIOQJMEZOOIGZKTYLTQVTEXARNIUTTDYCDARWH");

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
    msg.setTimeStamp(0.822707856293);
    msg.setSource(51572U);
    msg.setSourceEntity(16U);
    msg.setDestination(20359U);
    msg.setDestinationEntity(71U);
    msg.state = 190U;

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
    msg.setTimeStamp(0.264853517316);
    msg.setSource(34748U);
    msg.setSourceEntity(35U);
    msg.setDestination(8578U);
    msg.setDestinationEntity(200U);
    msg.state = 175U;

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
    msg.setTimeStamp(0.196323617513);
    msg.setSource(32677U);
    msg.setSourceEntity(5U);
    msg.setDestination(50976U);
    msg.setDestinationEntity(22U);
    msg.state = 101U;

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
    msg.setTimeStamp(0.287697091153);
    msg.setSource(60616U);
    msg.setSourceEntity(203U);
    msg.setDestination(6096U);
    msg.setDestinationEntity(8U);
    msg.state = 173U;

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
    msg.setTimeStamp(0.99042871468);
    msg.setSource(31147U);
    msg.setSourceEntity(239U);
    msg.setDestination(52638U);
    msg.setDestinationEntity(184U);
    msg.state = 119U;

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
    msg.setTimeStamp(0.943411402097);
    msg.setSource(21603U);
    msg.setSourceEntity(172U);
    msg.setDestination(19722U);
    msg.setDestinationEntity(77U);
    msg.state = 157U;

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
    msg.setTimeStamp(0.435049138176);
    msg.setSource(50983U);
    msg.setSourceEntity(21U);
    msg.setDestination(10594U);
    msg.setDestinationEntity(196U);
    msg.req_id = 46162U;
    msg.destination.assign("ZARIFQRVQUTSGXEUWOACKGANSVUMUVNEJWOSQLNFPWDVEEXLJFZRITPCMMPXZDYFNKOLWRXTHXXJTSSJJPHXREGKT");
    msg.timeout = 0.56548072511;
    IMC::GroundVelocity tmp_msg_0;
    tmp_msg_0.validity = 116U;
    tmp_msg_0.x = 0.218742430829;
    tmp_msg_0.y = 0.990144656364;
    tmp_msg_0.z = 0.769929300088;
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
    msg.setTimeStamp(0.305103384508);
    msg.setSource(31717U);
    msg.setSourceEntity(246U);
    msg.setDestination(31997U);
    msg.setDestinationEntity(140U);
    msg.req_id = 36499U;
    msg.destination.assign("RDKWGNNNBTIWINRJNOANOJTVZRSITFLFAIJGDIKQFGMLLIUQCYGZEDYWOGDHRRRJDOOLYNYWKKQCMAFDASAMEZPZPRTHCSQCLNYKOBGJKMOKKEDWMVVDWRYFMATDLGEEOVBFETQLXFUTPSXAXCPCZ");
    msg.timeout = 0.742288001115;
    IMC::CrudeOil tmp_msg_0;
    tmp_msg_0.value = 0.730151696835;
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
    msg.setTimeStamp(0.483661840404);
    msg.setSource(59870U);
    msg.setSourceEntity(123U);
    msg.setDestination(49674U);
    msg.setDestinationEntity(149U);
    msg.req_id = 45181U;
    msg.destination.assign("OBOQPTLARDFLHK");
    msg.timeout = 0.167153234982;
    IMC::NavigationUncertainty tmp_msg_0;
    tmp_msg_0.x = 0.639223811813;
    tmp_msg_0.y = 0.495555326023;
    tmp_msg_0.z = 0.277136654215;
    tmp_msg_0.phi = 0.661484058413;
    tmp_msg_0.theta = 0.46099956304;
    tmp_msg_0.psi = 0.525660720854;
    tmp_msg_0.p = 0.886772671558;
    tmp_msg_0.q = 0.0485436969765;
    tmp_msg_0.r = 0.413061601436;
    tmp_msg_0.u = 0.613434709548;
    tmp_msg_0.v = 0.527009257135;
    tmp_msg_0.w = 0.544214712751;
    tmp_msg_0.bias_psi = 0.986222532419;
    tmp_msg_0.bias_r = 0.882375932511;
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
    msg.setTimeStamp(0.680411953811);
    msg.setSource(2047U);
    msg.setSourceEntity(5U);
    msg.setDestination(13931U);
    msg.setDestinationEntity(15U);
    msg.req_id = 40289U;
    msg.status = 243U;
    msg.info.assign("JIQZVSQKYBATCXWOVWDIIJXUHPLBTTQDQYSIGTFPDALCSCWLCGGZWPUESXFOHCODHYVDFHJBSSVKMXPRHUZEBMRJUMGEHFNNKEGMILVFMOWQAWUUYFSOTBEQVTGOVQMPNTIJLRMFLBKGZZIEGYXNRZFRGBLKRYKIOYEAPKTHLPAMDNZEUEDUCPKUWJKWJHXYBCPYMCQUFVVDRCDSNQDRXOAAZKBWRH");

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
    msg.setTimeStamp(0.151122624228);
    msg.setSource(17467U);
    msg.setSourceEntity(17U);
    msg.setDestination(55518U);
    msg.setDestinationEntity(244U);
    msg.req_id = 8295U;
    msg.status = 42U;
    msg.info.assign("WMFDPGHIWBWYNCFXKTEOYQMYWAMMODDRYZKFGBKLCBOGBVODWHJKARRCASOHPMUQJWGEVNPPTMUZEQJURNNQVYZITSSDLKRLN");

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
    msg.setTimeStamp(0.740982724189);
    msg.setSource(48747U);
    msg.setSourceEntity(167U);
    msg.setDestination(47988U);
    msg.setDestinationEntity(108U);
    msg.req_id = 56598U;
    msg.status = 5U;
    msg.info.assign("XSBQFTKAPQZUJJGXMNNMHJTPSGVZNPVDDAJZHYCXSOFDWOVYLPWQFPZHCDYJTRBCWZKCUAOEXWICVQULTTHDMAHLXVOMEBCAKSEWYDCXTVM");

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
    msg.setTimeStamp(0.566490298531);
    msg.setSource(64277U);
    msg.setSourceEntity(108U);
    msg.setDestination(52575U);
    msg.setDestinationEntity(8U);

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
    msg.setTimeStamp(0.772927875376);
    msg.setSource(31100U);
    msg.setSourceEntity(108U);
    msg.setDestination(41594U);
    msg.setDestinationEntity(84U);

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
    msg.setTimeStamp(0.0145801287783);
    msg.setSource(33527U);
    msg.setSourceEntity(49U);
    msg.setDestination(14159U);
    msg.setDestinationEntity(164U);

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
    msg.setTimeStamp(0.0117362762532);
    msg.setSource(61638U);
    msg.setSourceEntity(96U);
    msg.setDestination(40359U);
    msg.setDestinationEntity(26U);
    msg.plan_id.assign("ZZDQBOTHGGHDFZKIRDUJSAOKQYREVKDNJJSGVXCNULRYNOGZEPDXTUBNQPIIMLVVWWAMUSMUMBPPIEYTQOTKAOGEVYYEFZQNZAEAPBZXUGJGNQWFICIRI");
    msg.description.assign("MVITWUQCKMOSDKKNOBUTHPAQOXFKLJPPNOMZLHSTWZPRLLSAVXZCBVNHFBIKERKYWMVUUQCHJNADXSRYSBTZZCAFSEHAQBTOGQWNVJCPINSRIDHVRAVOWPQPXBENJQLLGGMTDFTUJTFRILTOTFCOKIDNJZGXLQYXJMSMUXYBGUYXFWACBFIAVYJSJYYJPXGHOYNUXEEQEZECKEAANWHBMZDGWMKZZEIVOPLHRYMLRW");
    msg.vnamespace.assign("UNDJIRTBZSDBTMIDWKDYXPMNUIOBVFTOUFEUAMONRWOLKHJBCCKHRIFNRZFJLIWAQAYUKIYZADFYSHUDFXZWWLTBCMWQEIESEABUERGKXMQCFPGPKGNAMMPTUSDGQPURNKXYAJG");
    msg.start_man_id.assign("KXIWODJPXGRJOWBKSLNVDIZRBRKWVOVHZ");
    IMC::ADCPBeam tmp_msg_0;
    tmp_msg_0.vel = 0.524567774442;
    tmp_msg_0.amp = 0.603788468146;
    tmp_msg_0.cor = 18U;
    msg.start_actions.push_back(tmp_msg_0);
    IMC::PathPoint tmp_msg_1;
    tmp_msg_1.x = 0.323404806647;
    tmp_msg_1.y = 0.768334656486;
    tmp_msg_1.z = 0.769508376317;
    msg.end_actions.push_back(tmp_msg_1);

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
    msg.setTimeStamp(0.165296876211);
    msg.setSource(35931U);
    msg.setSourceEntity(179U);
    msg.setDestination(18376U);
    msg.setDestinationEntity(18U);
    msg.plan_id.assign("YBMIJZUQNEAJNAHLODFHTJYBVWBFJZOEFOGPLZCEIWESWFQRKHQDSTJRGJXXQZYBTCIBHJYWXDFKGPLISMFRSDVWZBHVNYXRBLFIPJYQAEKGDVCZPUYCLGGOOMSXAPGKNRTRBUIZOWTGTJDBFNAZMLUINHVKPALCCOUXMEAEMSPUYQPJRWOTEXDKKDEIHHLVEAKCV");
    msg.description.assign("QXCMGEPJHVPASWBCWIVYYUSPSZTQEXAXHNVANBITGDCXLPNRUNEGTFKKQKZPZUAQMPXLVUSITXBTDFMCLQKMCCCQSEVAJVWFXDZBIUKZSWOBHKWNIBMGZRNJOWPNQGDMFTRAIQPYTJSGJURVCKCURFHSVHYGKOREOEIYMDLMRZAOLNJFWQYRGAMBMIFKEFXILHEWWBKALDWSJJJ");
    msg.vnamespace.assign("ANMEYTJHYRUCJWUDIJSEYCSZERXCVFRLQUUNNFABHYHJHDFPCIMPEDQXKWDMXIXGNVTYVRPWLQIHOIMSNTKUZKEIDWGHENHWBCVTOSZSDITZGJRQNKRWEVWKKSPKPXBHGFMQSTPLGFOBJJSLFNCWLZOLDAOFCIJMDOUAN");
    msg.start_man_id.assign("AUNMJJEKONJQSSKJQALNNCYKVPWPRQGKGQVNHCAPGAIUXAUNTTUUEKEWGDOLDNNIEUZGCYFECDTVRRHQCRMYGPZBHROVQYAXASBAFMXBRBNJYFYEXHBOZXBFXUKMKJEJVBHIWGIQKCTMSSWIVZELXRGLHXWFVRCFIYWLLYTKZHDTDDAPOOPNSEZMLADOMIHLIQIXVCHWEPLFGSTBMKZWFUUJSTFVCOWBSGYZXDLZOQPCMDVHJDIPMZPTOUQS");
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("MHDPJNEXRSMOQTKEOIXDHTDLABTTT");
    IMC::FollowPath tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeout = 47740U;
    tmp_tmp_msg_0_0.lat = 0.461408918272;
    tmp_tmp_msg_0_0.lon = 0.73289806464;
    tmp_tmp_msg_0_0.z = 0.746649943736;
    tmp_tmp_msg_0_0.z_units = 222U;
    tmp_tmp_msg_0_0.speed = 0.383149342967;
    tmp_tmp_msg_0_0.speed_units = 14U;
    IMC::PathPoint tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.x = 0.800597714349;
    tmp_tmp_tmp_msg_0_0_0.y = 0.111985434074;
    tmp_tmp_tmp_msg_0_0_0.z = 0.345246704967;
    tmp_tmp_msg_0_0.points.push_back(tmp_tmp_tmp_msg_0_0_0);
    tmp_tmp_msg_0_0.custom.assign("RJUVLGSKQSQOWKVWXDOSUOTDVLCOLERLHDTEJRBYUHPZANPPCXMAPQSXCCGAAIRNCWLKEFBMIXFWEWHFENNIRJXLMQMPXSCRFTNPIGZOFPJPLOVUJKICDHGAQYXZZYNXXPJKOMHTSISBQSYEAZHFSXUQWVEGMRAGFDVHTIHBNMTLCBINUVTFFJKDTKPDDCKDUWRRCQVDYJBEYZBGHIWJZUHMBWYKTGAUMVJLYWYZEEBZ");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::Chlorophyll tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.960976094359;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    msg.maneuvers.push_back(tmp_msg_0);
    IMC::TrexCommand tmp_msg_1;
    tmp_msg_1.command = 83U;
    tmp_msg_1.goal_id.assign("VKEINTJEIOKFKVMCPHWXNSENNHBQSUMFHUTZQQPVIOXQJILAXARDCCFGDVTOPJIFZYODLRCUOTXUSLBIUGMFJLGHMZZWDDRQYBSCEZAGXIUXWZDBBGTKEZGLJPGAMRIQMOSKQDNXCXYKVHAKVHAKEWNJVYPJSYUMRFGYRCIRXHTHPGNBE");
    tmp_msg_1.goal_xml.assign("EBHQAWVPLJQCUSBQUSVJLMMKFHYIIOPRFILEISOPHFAXNZOUXNVMSEDXYRWEKNJJWYTXOYVZMZCSBJMDNVZCAHQXBALNIXLPTGTKCOTBPSILUOHARGKRNFPZRXFWFXKZXUCNDSKOGATRVSB");
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
    msg.setTimeStamp(0.0640293956824);
    msg.setSource(28647U);
    msg.setSourceEntity(158U);
    msg.setDestination(45375U);
    msg.setDestinationEntity(73U);
    msg.plan_id.assign("LVMWDOTHATHSSVACKHLPGIPNXADNEBKCKFNUOLSSJRJINKILHVMMPLTKCQWCNFGXUCXQGRNRYUI");
    msg.description.assign("YFAODHQQZXZKASYXELFXSPMLGIEYFOHZTNJUKZUIJBQJMBTZAFPDSUTCRADSEYFFETVOEKSQDVZXREIVHTLWJCJZKOXICXAGCMBDCBVYWGMGDSVCBFKWNUOWZNCDMGJQDLLTIXAQIMLNCTKNRQNAVXDVQZOCUQOPYOFDTJHUYPVRLUSUKPHUEYWOAWUNNRBIMVSCSMVKNLHTXRRPGHQBKWKSIRLOJJEJFIWXPYLZHAPP");
    msg.vnamespace.assign("AZQBCHZIETUMLMDARNZFZRGBSALMLQAGPGLBFTIIZEHDJWBEPSRPMJGSEYKKOCOHLSTDTWJKUKMVVPUHPXJQSJKNOYQHXHYDXFDZBYTOCLHWRRBDPUTFLGPOAKXWWVAOLEWKEQOBCSFMJWXR");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("CGRUFYJRVWTPWMKMKSHNWKMW");
    tmp_msg_0.value.assign("HWHKOSKJFWTUWDQNCIIZQOIZKXOPEYQJXPLJHVJMAJKLKXXZLZQOGPBSGSGSEFNTMFRPOPFYKQLFUSGTPWDCVRVHCHGFAYWAYNJPMBTSUDGGRAAEXVXJFYZILJCMDVYTXXMUVDRUHWNNNCLRWVUTJQ");
    tmp_msg_0.type = 244U;
    tmp_msg_0.access = 129U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("KVSBQMPWMAMSTODAFGRUQKVWTWCPRPAZAXVNWHHRIQORTYYJBSLWWUNJDAWRKZUCELHTDZFKGKXYLVEOZZTZETMNOPWDZYRNGROVSKWBVNHHIMNQHEXKXNSBJVQMFALFFHAJNBQJFNDSGXQLZOXDJKSISCTFTPIGUVXPJBLYM");
    IMC::PlanTransition tmp_msg_1;
    tmp_msg_1.source_man.assign("QGNUTUKMCYBDYVWQBYVUBQQSDTJFTXHOZFLZCSKMRQZIQKGPRTMVOEBBROTCOS");
    tmp_msg_1.dest_man.assign("EGIVQVFMZUNAJCUQOMKUKUDQXANKZBRNTDKYPSXIOMEESFQQLSLHTJAEHBCGPTCURNFFAFUJRCTJKXYRVCYEUYLOLZAPAZKYQJPMBDFXLWCIGBRCPQTDRFEXIKOGIHBNGDXVTDSZXJBMROQQUXNBYWIZHVZCJGKYSPOGY");
    tmp_msg_1.conditions.assign("YECIAXUZUPHLTQSWTBQYPBKTAAHKHMGRXGKQSWVMVJXKQYVPLCJIVWRFBHWXMDVJRLFNKZJSTMRNRFCZNMNYZYELLEADNCAEQGRCBOTOKQIHWWXOCULH");
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
    msg.setTimeStamp(0.544823675702);
    msg.setSource(47464U);
    msg.setSourceEntity(234U);
    msg.setDestination(19014U);
    msg.setDestinationEntity(177U);
    msg.maneuver_id.assign("CVMPXPFSBH");
    IMC::Rows tmp_msg_0;
    tmp_msg_0.timeout = 27835U;
    tmp_msg_0.lat = 0.975134177903;
    tmp_msg_0.lon = 0.025388684496;
    tmp_msg_0.z = 0.617647148632;
    tmp_msg_0.z_units = 84U;
    tmp_msg_0.speed = 0.0681380044059;
    tmp_msg_0.speed_units = 86U;
    tmp_msg_0.bearing = 0.536715948631;
    tmp_msg_0.cross_angle = 0.657182925481;
    tmp_msg_0.width = 0.302415914521;
    tmp_msg_0.length = 0.38034338267;
    tmp_msg_0.hstep = 0.813489258228;
    tmp_msg_0.coff = 160U;
    tmp_msg_0.alternation = 13U;
    tmp_msg_0.flags = 133U;
    tmp_msg_0.custom.assign("OJFKQDNPIWUDQNRYGHWVMWDSKVEPDQXQBZNYDIJYUSFXOPVZTTXJBGOYFHTLUKPEWFKPMHOSXJWMGRLJBEQJ");
    msg.data.set(tmp_msg_0);

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
    msg.setTimeStamp(0.699386832905);
    msg.setSource(5390U);
    msg.setSourceEntity(182U);
    msg.setDestination(27108U);
    msg.setDestinationEntity(108U);
    msg.maneuver_id.assign("BRCAPUKBXMRSJOKNSXDEFDDZEPSDGCEZGIFQIYBTYZJUNFYKSYHWHPLZEQAUTDAOJVDBMINMONJKRHYVZWZYXVATQUOVAIFHIENQMYVJCSOBICPLHLGJNJAIMGDUXWUSURELHBFKNLRBFOXTGDBPZGCVCBKWVZARHVFITPLNFFQDHMYFEVXHGTR");
    IMC::Sample tmp_msg_0;
    tmp_msg_0.timeout = 61432U;
    tmp_msg_0.lat = 0.849952782726;
    tmp_msg_0.lon = 0.0902055650217;
    tmp_msg_0.z = 0.0055706744321;
    tmp_msg_0.z_units = 189U;
    tmp_msg_0.speed = 0.815376235208;
    tmp_msg_0.speed_units = 160U;
    tmp_msg_0.syringe0 = 197U;
    tmp_msg_0.syringe1 = 179U;
    tmp_msg_0.syringe2 = 238U;
    tmp_msg_0.custom.assign("THSXGOSAQDMLQGQIEIBEDURKFWOYNVD");
    msg.data.set(tmp_msg_0);
    IMC::GpsFixRtk tmp_msg_1;
    tmp_msg_1.validity = 41449U;
    tmp_msg_1.type = 33U;
    tmp_msg_1.tow = 3204555437U;
    tmp_msg_1.base_lat = 0.889761483811;
    tmp_msg_1.base_lon = 0.955315830472;
    tmp_msg_1.base_height = 0.264772445124;
    tmp_msg_1.n = 0.605241689353;
    tmp_msg_1.e = 0.0560775895966;
    tmp_msg_1.d = 0.887700008248;
    tmp_msg_1.v_n = 0.175437452281;
    tmp_msg_1.v_e = 0.504391078869;
    tmp_msg_1.v_d = 0.495842668285;
    tmp_msg_1.satellites = 32U;
    tmp_msg_1.iar_hyp = 53353U;
    tmp_msg_1.iar_ratio = 0.289386278329;
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
    msg.setTimeStamp(0.268451703011);
    msg.setSource(27304U);
    msg.setSourceEntity(226U);
    msg.setDestination(48602U);
    msg.setDestinationEntity(231U);
    msg.maneuver_id.assign("UGDKYZWJHGCCCCKXYGMNKPMIHJZGFHLREEQLLEKOUOGGSWTBFIQY");
    IMC::Alignment tmp_msg_0;
    tmp_msg_0.timeout = 14801U;
    tmp_msg_0.lat = 0.0951985684819;
    tmp_msg_0.lon = 0.289810378022;
    tmp_msg_0.speed = 0.692997455048;
    tmp_msg_0.speed_units = 10U;
    tmp_msg_0.custom.assign("ORJBTGFLFDTNQMBKGNVEUIUPAWDYLORUZHIQMPXYFEFLJYPNOOVXXRSNRBEDCEHNAPKCWHDBESPXQZGDBLIRXWHRKAPPMAPHUDGTAATZRMIYUDLELSNSFZJXHMEJPLRVDJKEBUXBVHCQHSTOJEBZZFAGFVCWIAI");
    msg.data.set(tmp_msg_0);
    IMC::FollowPoint tmp_msg_1;
    tmp_msg_1.target.assign("RKOPUGWNNGNAFBZAHQRQPSKTDITTBEXRVUYIMXJZJYYISMBMQJLVFYYTSUYQFVWGIFAZWEJTHBCFLLQKN");
    tmp_msg_1.max_speed = 0.380755525662;
    tmp_msg_1.speed_units = 161U;
    tmp_msg_1.lat = 0.763372392789;
    tmp_msg_1.lon = 0.592023495203;
    tmp_msg_1.z = 0.0267546050843;
    tmp_msg_1.z_units = 161U;
    tmp_msg_1.custom.assign("DIRUSHTSTUQSWYGFDQWPGYFIFMVKAFRQJOZWSO");
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
    msg.setTimeStamp(0.643818877312);
    msg.setSource(57906U);
    msg.setSourceEntity(178U);
    msg.setDestination(17436U);
    msg.setDestinationEntity(102U);
    msg.source_man.assign("WXORMDUNUOPTLPLEBABYZNJETKTLSKXHLRTPXVNMASYNURLRQEGFVWPOKUFFBWGCRBXFYMQGUQJHAKHXOSMVSTCOYRYIQUMWEZMDRWYGNCXQGZRKPBHQUHKEFKIRYMCIEJQZSBLADJSFTANMWVUSEDTLKLCAHPQBJICZBXGKWDZMGOZVINIGEZGM");
    msg.dest_man.assign("ZPNCZLXFEHGZYNVRTVNEUQYVLUOSLOXPKFULDDDTDLWQIFXXYQSAKIYTNBDAUBPAHYNRKRYIQNZROEGCRERXBOTMXUQYFCZYEJRQW");
    msg.conditions.assign("MXZCQSGHXNUMCBKUEYFWMIKYWDXYMQAFGDGWHLVYWBRSQUFRQIEFTZD");
    IMC::AcousticSystemsQuery tmp_msg_0;
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
    msg.setTimeStamp(0.213303323289);
    msg.setSource(29403U);
    msg.setSourceEntity(150U);
    msg.setDestination(35872U);
    msg.setDestinationEntity(20U);
    msg.source_man.assign("DZXVLVVXGHP");
    msg.dest_man.assign("SUGOVSHCMDCNPSFGSVVTLBFSJDROYKMHNIUDLXWKJAGJLTLRHMVQMZKJEFOCPHESXVZABEQKVXKKLDXSCXDAGNBQFVFRPGNEIZTHFXSPOKQYZJTNNSIOYZDDECUIRTOVFSWXBIRUTRDJWAJDYLPYIWBLOFXKIHMWZPMAHNMVJZAOTQEHQWUPCLAQTZWTYKBTWOU");
    msg.conditions.assign("TRLHSGLSPLLIFPBIODTCZNYEQQCJFSEOBTPMCAMOUYOQIWAGWORMAHYRCZOVQFNDHCKUMVPEILDKJAHJBVAKLCQZSNMWGQFRZYSDBEUYVTZKRJNDQRXEYWZAFXEKMG");

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
    msg.setTimeStamp(0.222911084379);
    msg.setSource(41743U);
    msg.setSourceEntity(132U);
    msg.setDestination(64913U);
    msg.setDestinationEntity(196U);
    msg.source_man.assign("SNQKEBTBPOREHIGEZYQRGFHDITBROIWJDWGOITAASPUMQAWJGBRP");
    msg.dest_man.assign("DJZZOIYUBUNTEDWATUVMLKYRKFMCSQBDEHGIQIELOKWJEOWXAEQPWRRHRULCKALFCPZHRJLCOIBDJANGDSUITTRNQSHDODEEBTIXXXCDSSZNPAYQNQDCFBGKDRMNAFGWKRCSVNOSJAQPSGBPGENXPRUHGWQMVVSMHOXJZLHJUTWYNXYHNLOCOYWVBLHBIVIXKABFEVCPKTMYHZJYFATZXVMZVUUJLOIIGGJVYZ");
    msg.conditions.assign("YMXOPDFJFALSEBWMBLEDUYKMIWDXMVJCOGKXNGVZWTHAWKTJKUMKYEAANMEZBPBAFIDERUWJAREOVQANHOIVGPWRLPZLNACCDTKRYSEXCWQBLPYGCEEQ");

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
    msg.setTimeStamp(0.297522742803);
    msg.setSource(16619U);
    msg.setSourceEntity(183U);
    msg.setDestination(55927U);
    msg.setDestinationEntity(46U);
    msg.command = 17U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("DQPZGZCMMJISRTOVXCALSTGNDJQTFVCOBYAXDXHTEPJQAWNZ");
    tmp_msg_0.description.assign("ZXJLXGSVRDFVGAVURDCBAFDYUZCWKCJXECRCQHSQIEDKNOQIUEDNIXTJJRAHPQTW");
    tmp_msg_0.vnamespace.assign("VPNRCDJBAHOYLUOUYJNZDGHYWIUTPYAWQTGFBPOXSKTXRDREBGYEXFZHAFLKSGCGFMNFSEOQCYVTTQRMSIUGTNAYERJTMXQJJHIWCKKXYBIOWPGKJCPUCVGNRLJHHSMKDXBEKQIWLWZCNOWIPZZEQPAVMTSZWIARHMFZDBLUDLAJBDIACRHVNMIBHQKYPQMFPIAHKXJOLEQVLFVCCNLVUPVEKENSOZWMBZUXSFFGYTUUDQGNESRLMTOSVR");
    tmp_msg_0.start_man_id.assign("KOTQWYFJJCHASEOMWUGFEMLBZM");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("RTQFDRVRYXCMTSH");
    IMC::Land tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.153464978413;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.91596654275;
    tmp_tmp_tmp_msg_0_0_0.z = 0.13313484635;
    tmp_tmp_tmp_msg_0_0_0.z_units = 202U;
    tmp_tmp_tmp_msg_0_0_0.speed = 0.178833833906;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 253U;
    tmp_tmp_tmp_msg_0_0_0.abort_z = 0.291245860393;
    tmp_tmp_tmp_msg_0_0_0.bearing = 0.977360478666;
    tmp_tmp_tmp_msg_0_0_0.glide_slope = 169U;
    tmp_tmp_tmp_msg_0_0_0.glide_slope_alt = 0.837760358153;
    tmp_tmp_tmp_msg_0_0_0.custom.assign("QFVKJKPRUYGWIFXLOPFADJDKTZAJNOSYWDPOHKCDTDKZJPZLWNTGLCQZSWISQPKMUNXWUYMUQMVSLETVNTZVJJQIEHIIMGKLKSUDDPTXMVHACHHJNMJQLEHGHNIBHHQRBCGRJZFNXEZRINSEGFBEYAPUNMUBOZQQMRYUOXVZOERVXROBIMAJPBTQGDPZGWYDCTMCYLRCIETAFRSXASODEWRXYILVCFYYSBFFCONULAG");
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    IMC::TrexToken tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.timeline.assign("KGJXPPXAANGFFJMUCTVLLSVWZZYOOCUNLTGUHQIZJLDURXKNNGYZRMUOCBLJUMQQKGDOASEAXZQUGCSYHOCJEAFCPNVPKEOVTXKFTCOGTNFCJEUALWFZIGDDXWPHXDRBCJPPROHBLINZHCEQIBABBQPVIKKDTZLRRQDFWMHLYVAMJISYRPWYITDBTJHDKVSSHMELWXIYMYEWXUHMEUZHGKBETQRYWSMSQOGVDWPM");
    tmp_tmp_tmp_msg_0_0_1.predicate.assign("PEOTASFEOMZDZNROWVN");
    tmp_tmp_msg_0_0.start_actions.push_back(tmp_tmp_tmp_msg_0_0_1);
    IMC::ClockControl tmp_tmp_tmp_msg_0_0_2;
    tmp_tmp_tmp_msg_0_0_2.op = 205U;
    tmp_tmp_tmp_msg_0_0_2.clock = 0.719065517436;
    tmp_tmp_tmp_msg_0_0_2.tz = 122;
    tmp_tmp_msg_0_0.end_actions.push_back(tmp_tmp_tmp_msg_0_0_2);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
    IMC::Loiter tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.timeout = 41861U;
    tmp_tmp_msg_0_1.lat = 0.661893534522;
    tmp_tmp_msg_0_1.lon = 0.594262060081;
    tmp_tmp_msg_0_1.z = 0.215974381358;
    tmp_tmp_msg_0_1.z_units = 30U;
    tmp_tmp_msg_0_1.duration = 27171U;
    tmp_tmp_msg_0_1.speed = 0.403690024154;
    tmp_tmp_msg_0_1.speed_units = 11U;
    tmp_tmp_msg_0_1.type = 68U;
    tmp_tmp_msg_0_1.radius = 0.511747318465;
    tmp_tmp_msg_0_1.length = 0.53817113478;
    tmp_tmp_msg_0_1.bearing = 0.176799379358;
    tmp_tmp_msg_0_1.direction = 182U;
    tmp_tmp_msg_0_1.custom.assign("KLSPDIVGAGBPECRMUYVWIBWEDEDCUNNFDBFMOGUTVJPPHUYGSSZXP");
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
    msg.setTimeStamp(0.0449979567415);
    msg.setSource(39887U);
    msg.setSourceEntity(147U);
    msg.setDestination(32054U);
    msg.setDestinationEntity(212U);
    msg.command = 10U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("MKOMUDXNWTGJMUEMNTMRBJGUHKUVOFLSPCABNDZUCJSLCERXOMAHCHEFUHLUJHSVTTPJESTXJPQIITLWPHTAJNNVAFZWCGJOLLCYHVNKDAJDFWALBRNOGMZYOJETYCVOPIOZKBUFOSBXKDBQIHAEIYSDVHKBIBQPXSZCXRSLFQWONGYGRUZVEBQGERQDZPQRFWVACYFTMWNSZQTPHWLKLE");
    tmp_msg_0.description.assign("WISVXUTYHXYBAOIKMJVGPTAQPGVQQGTKWNMNKQFOKSYKBOXDXFEXZACRVHVJAJPZNFIJSMTERRINXTDOMMKURPOMEQEMTMZSQPUGVAFNVBAESFHUKOLHJRLFWBPWNPAGRYSRHVEMYRCZYNFLHXWCTTBCN");
    tmp_msg_0.vnamespace.assign("COVTTKRMOHFXXCWWYYJWYLRKOPRGGTNYBHQFDPQHUA");
    tmp_msg_0.start_man_id.assign("SWLASPUHJEPRUUROILHYXHQDJSIVQOGNATAPVYTLKRNHESXISDEQPRBJTFPMGIWOGRMFCASXPWKOGXYGCOGIDPNVKHCNMVIWJUMLFRAUCJHDAMMBLQRZPHXEZNIYUXLYNIGTOCOBBBXVSNT");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("BYFCRHYEZIUGNGDYOYAQTQORTDIKGISVEAGSBNLLXDDHLKRQINVBFBOJQPQYGAUGBUWEWVUOZHFMLWHYODWDJXIJNRWCMSSQHIKTKRPGYXIMHHKCJMWMZPEGNPXLWTVDFOTGWJIBNKKLSDPRSJYAXBNLMSIAAUPMLFAFZGKJZEOTCZSVPBFRNACWIUQHEOOFCDZVN");
    IMC::FollowPoint tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.target.assign("QRGYVCFLVTYNBNOHVXFDKYIIWLBLRDHWGZRBKBJGWHOAZRCXAOYNWNFGRPSQEXNDIEGMVLTIKHXCNNJOPOXQMPKBTZQHTTYDNERDALREFMSIGPFBAYXMLTQHWWEMPCTJZHERSYZKKFAJOJSEUDTUZSKNEMDKGQCSFBCGKOSIDXVZCUPXUPLFTUM");
    tmp_tmp_tmp_msg_0_0_0.max_speed = 0.456065301843;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 34U;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.977219951713;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.924852939181;
    tmp_tmp_tmp_msg_0_0_0.z = 0.236449837168;
    tmp_tmp_tmp_msg_0_0_0.z_units = 252U;
    tmp_tmp_tmp_msg_0_0_0.custom.assign("KNYGFHRLALGIO");
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    IMC::TCPStatus tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.req_id = 37493U;
    tmp_tmp_tmp_msg_0_0_1.status = 147U;
    tmp_tmp_tmp_msg_0_0_1.info.assign("WNIUKCKBRSIYMJFLVATOSSAGAFDWGJPMICCNUGHWXZSORQBHBZUYWDTVDWGXYJHFXEQBOKDAVPYNVIZTZCPFSLJNXQLQFUMUAAZCZGVZUGJOOQEEHVNPLTERMSUFVJQEUJLXVBGNMRGKLOCJHDGJYZPFRCKZNCYBLJYFWUQVRQKSMSOCLRWKSPQFQGLDPEIIWBXBVDXIAATIZCHKEP");
    tmp_tmp_msg_0_0.start_actions.push_back(tmp_tmp_tmp_msg_0_0_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("AAYGUXVVQKZULYIFQIKVHJPJYVTYRCXKOGOYPPAMBETLACGLUFOUUSAEBDQLJSISMNIWBQDOPHDSLDTSIATSWXOEMBLLXXCGYDTQWCWKNRNEPZCOGZPMRMVBBNJNOBMFZHHXHCFBPJUHRVNFMUVRZNEFIRYAGIOKRFGYYC");
    tmp_tmp_msg_0_1.dest_man.assign("IHXJYPETXUBIXOPBUWQPWCRZVNHGSIKCCJVXPHNHARKLEKKJCAHDSQTMBOVQKOGNZKDWGLGAPEGMENXPJIHCUABKDFANSELYEFQDGJYQRXWWXWMMZTDSXWXTQNDOENCQYCSGPGFLQUYFBBFRQLREILTURVTRZCLPEDIHVMKNLZIHZPJJFOJVAWUEVBODNNFCAFSVFTKYDWGKFPOOCIMIXZVI");
    tmp_tmp_msg_0_1.conditions.assign("REUGACLKWEWUJJUGTINDOYAQTLDFOSOQELYVNUXICWFSMJHZGQDERVRSHHCOBDUTSXTJKTVLTVKXLZCDWZ");
    IMC::UsblPosition tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.target = 42183U;
    tmp_tmp_tmp_msg_0_1_0.x = 0.84966396522;
    tmp_tmp_tmp_msg_0_1_0.y = 0.822523607878;
    tmp_tmp_tmp_msg_0_1_0.z = 0.35999833864;
    tmp_tmp_msg_0_1.actions.push_back(tmp_tmp_tmp_msg_0_1_0);
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_1);
    IMC::VerticalProfile tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.parameter = 153U;
    tmp_tmp_msg_0_2.numsamples = 54U;
    IMC::ProfileSample tmp_tmp_tmp_msg_0_2_0;
    tmp_tmp_tmp_msg_0_2_0.depth = 58355U;
    tmp_tmp_tmp_msg_0_2_0.avg = 0.126410180216;
    tmp_tmp_msg_0_2.samples.push_back(tmp_tmp_tmp_msg_0_2_0);
    tmp_tmp_msg_0_2.lat = 0.319832528433;
    tmp_tmp_msg_0_2.lon = 0.767285484343;
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
    msg.setTimeStamp(0.828710536078);
    msg.setSource(12287U);
    msg.setSourceEntity(41U);
    msg.setDestination(55121U);
    msg.setDestinationEntity(104U);
    msg.command = 163U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("MLDSDRNWCEIQKWOEXVYKTCOBQMXMGJNMLPYTGIUTAVDCACHLXHDRYFPPEGMKFGUZVWVFDJBLNDCNYCPOXKSHDUBTIYABQUMSNFEKKGELXNSBYUQCGQRZWGWIRODSOZOPCKWOVAYZUNFRQHMKDHJVCGWETLPJYXURYRMZJVTSKIMZLQWAKLPGHAR");
    tmp_msg_0.description.assign("CLTEIVDYRCNWBLQUGSUSNDUATJCEVBWDFREQXAFZAHSKDJJPSIOJGTIMRMFESOLWTNTKFLIFOGM");
    tmp_msg_0.vnamespace.assign("IYRDCUCBCVYKKQSIRENAUBJPRWQMDLFSKYABNAXASSNFZJJGGSFHZJPWJMDNYVPKNVEDQNPFBLPZRRKBLFODGHZOZZTKAATSQITSWGUDOQPBSFEFRVHNWLHQGJFXEYNBWAOQIWWTPOELVYCZZBYTRKWPHMKPTJAIGOIH");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("YTMXZOFGOOYVDMFIOPADLTIKXBBKNWYGHMSHULCXUDRBETYCGWEUFDZXSWAJRIFKPYTSCTCNFWSCMVMSEIBUQBHWPAUQVWAWLPQVQVQGTWZLOBYHXIOIYRPOSCUVHNGAAWKRQKAMJVPZCRAXQNSFDDDDZNOKBLIPUTYXJJHGZSQKACXHFNITQPWRXYVBLXNAKDEGDNNHGULQYIMEOEFCUMBRLHFELNCEJJPPR");
    tmp_tmp_msg_0_0.value.assign("UPCLMBGXYQRORFRROQITOMJZB");
    tmp_tmp_msg_0_0.type = 19U;
    tmp_tmp_msg_0_0.access = 220U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("LXGAQJMRYHVWXDIPXFDZUBFSRYCJLLYREGXATUNSQBAJPOVUTFUXQEJFSUEXPFPWIRGCSDDTUJYBOENOGBLMKMYXLEUYOVBPCSRORK");
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("FTNEHMMETYCJPBABGCEGMGVSCMPVEDQHMQRCUHXDUXQINEWEGUJHFSYNWGPQKOSZVOYGRKNZMNWDAMIROBYRIAFSXELBWJFYJSDLACJHKXPKSFMIYTELPVHFKGDHGWXFYZQVZNLUOCUTGUQXIZJCKXBKPZPBDRRSACITSROJMPQPJWVWYRANXIVUFBIXVZKXFLQGODPNSLKQOHYKVQZUJRBZT");
    tmp_tmp_msg_0_1.dest_man.assign("IJCPFTVCSEGFCBKYFSGNFEULEEANBJJDCWRKVSQKVOMBJCYNYLKSSHJGCADGKDGNNYAHRVUGVBNYIRIHYZHRMZHLCIUBQWXJFRADNMIPOXIECAGHSONJJ");
    tmp_tmp_msg_0_1.conditions.assign("UJEWWBVQGGAOTOIGYGFMBGMHDOYHXZRNVWM");
    IMC::IoEvent tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.type = 46U;
    tmp_tmp_tmp_msg_0_1_0.error.assign("YGKZQGZAJFTORUQLQHVCYFZCHLWDKTPZBRHOVWMNSJZKSTWHNZQQLUPETDALKBXPCMFKOANZXTVXAMDFOFRJEAMWBXKWQCOYVHAPFUJMRYMVDTGAAJUCYUSSWHBRZYNRKONMFJBPLGEHHUYHIVHQGWLLUTIFWZJLYOTKSSEXIAX");
    tmp_tmp_msg_0_1.actions.push_back(tmp_tmp_tmp_msg_0_1_0);
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_1);
    IMC::Calibration tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.duration = 6171U;
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
    msg.setTimeStamp(0.731793880786);
    msg.setSource(54086U);
    msg.setSourceEntity(223U);
    msg.setDestination(30947U);
    msg.setDestinationEntity(170U);
    msg.state = 109U;
    msg.plan_id.assign("UDQFEYPFNCXEEZGOBPPYIPCLTJBUMOVVAEJBHTTLSUJTQEPANTSQOAWWYGBJRMVOMRURFIGSCOWZEGBGUIOJJMHYFBZWYJPEIGVBD");
    msg.comm_level = 128U;

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
    msg.setTimeStamp(0.0433651740893);
    msg.setSource(11854U);
    msg.setSourceEntity(209U);
    msg.setDestination(49668U);
    msg.setDestinationEntity(82U);
    msg.state = 187U;
    msg.plan_id.assign("IIJSYDVRUAHUNQDYMBWDUREPOLVWEUJKXSPREHFAIFQCPDZDMDBXYSGQYEVAEWKTKUJAONJUVGGTFJOCZENQUPBIXUWDLMHVPT");
    msg.comm_level = 188U;

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
    msg.setTimeStamp(0.207143004403);
    msg.setSource(22182U);
    msg.setSourceEntity(69U);
    msg.setDestination(39171U);
    msg.setDestinationEntity(57U);
    msg.state = 84U;
    msg.plan_id.assign("MAXXOFMBXXGVNGKEBJYXPZKPNZQFUNDOUNYGOTFZHAWCGABEEDYWKPRAFDAEQFUCLPUHQHOQQZDUPPDOBHDHPTWASBDMMTRZTHLIROSVKKSJXDDBMZINXZOAIWYPFLVOXNOBZLQTJRIMCFCYVKOEKRECWGGVVJUMYVKCLTEXLTWSATINHMBERJRFRMWINPIWCSUILMVCFGSZHWYJJLCYLAKSJZTVTSPW");
    msg.comm_level = 146U;

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
    msg.setTimeStamp(0.669459544217);
    msg.setSource(28553U);
    msg.setSourceEntity(23U);
    msg.setDestination(58125U);
    msg.setDestinationEntity(74U);
    msg.type = 75U;
    msg.op = 225U;
    msg.request_id = 26732U;
    msg.plan_id.assign("TVMGXBHYYGALRPHSFITSUNJQOLDWXCGQSKG");
    IMC::SystemGroup tmp_msg_0;
    tmp_msg_0.groupname.assign("USRJVVMEFJIRAJTYRCYCCLSZVBDPGKPQPSYHMKBBWXFMKGEXDPIEGBEPVNSDNYGZWOVLZEAOUFRZKMUWBAGSYRTAAUQUDKPOAENFCFHXXZZCNGBLHWXLROBOQDZLRWJADEEYJLJDUXTESUHMPMKFUSIDFGOSQHUIQITAGRVLNCVJMRHFTYJACWPQKOTFNWNIHNIPLHGDVOVJIJM");
    tmp_msg_0.action = 167U;
    tmp_msg_0.grouplist.assign("OOQVLNHQMAPDLEFZPHRTEMFYDAIGIBUFXMKELDTRGXYGHKJBNXJIWWKKQJSMJCNOBWVSAZCZZQROMZQJSCEPWUODZHIWKIWPJCGNQSBRVETMOJYPNPCCDPHUCRAFUEFOLHXSJBCAXKWNBRYTKBKEILAFDATVGPZAIEHYTFUG");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("LMPHSQPULWLDIVKMDXMBGUWVZLJTWXPVNROPO");

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
    msg.setTimeStamp(0.668404352476);
    msg.setSource(13264U);
    msg.setSourceEntity(165U);
    msg.setDestination(24107U);
    msg.setDestinationEntity(19U);
    msg.type = 5U;
    msg.op = 243U;
    msg.request_id = 4509U;
    msg.plan_id.assign("LOWJSJSSWQNPXIKFPOBKBHNHSZXEAAQAYLDZFGJSJMINFLSBEZTRETHCBOFXWLNMDQYWZRDSCAYHTJTJIVHRFAOXFVEESJEPPXSTDKRRCIDYNLNXZBKSLQWFPDKDURIEZZIFMEMGEMWDRUIGAVKLGHLJQUJUYMXNVLZHQKGTMUXVNFZUDOO");
    IMC::CurrentProfileCell tmp_msg_0;
    tmp_msg_0.pos = 0.886765362021;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("KEIUOEXYQCGNJSWILEYAHJMRG");

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
    msg.setTimeStamp(0.117287157032);
    msg.setSource(33243U);
    msg.setSourceEntity(75U);
    msg.setDestination(53333U);
    msg.setDestinationEntity(93U);
    msg.type = 98U;
    msg.op = 106U;
    msg.request_id = 53662U;
    msg.plan_id.assign("SOULMYVELZZDHUGSJVZGNNTWIAACHLWEOJETYSFAHSMBEZPGHOINMEQEPNHBQQBPFGTCNXODNMZKXBJGTZASPUOBQCKFEJKVWQFIASJJDGXCSOXYLRUJPXPWKYGZRFOBAZYBXCXILCDRHMTRGWVMD");
    IMC::SadcReadings tmp_msg_0;
    tmp_msg_0.channel = 87;
    tmp_msg_0.value = 262078759;
    tmp_msg_0.gain = 108U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("FJYPKTWZYULCMFBTCIZPUWHQFINDHFQNMVBVNVILMVMKXQOYYBDMEASPZCSUGMVRUQINBCMDARQBYM");

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
    msg.setTimeStamp(0.145592159877);
    msg.setSource(6050U);
    msg.setSourceEntity(232U);
    msg.setDestination(35628U);
    msg.setDestinationEntity(221U);
    msg.plan_count = 6361U;
    msg.plan_size = 572524006U;
    msg.change_time = 0.900025249319;
    msg.change_sid = 16365U;
    msg.change_sname.assign("AIPAWZTEXKYPXGQAUEVGNVEITWQFOCYNWMROTEBYWRVHVKVRRSUUCLFVXMHTDAXWEXBCOHJLNQGMFQXUVLCUGHD");
    const char tmp_msg_0[] = {28, -25, 96, 112, 38, -37, -103, 36, -117, 40, 71, 1, -98, -104, -36, 30, -11, 120, 87, 121, 1, 31, 23, -90, 39, 106, 11, -14, -93, 104, 106, -84, -59, 8, 113, -57, -82, 20, -56, 97, -62, -36, 55, -11, -47, -1, 92, 4, 117, -51, -40, -36, 105, -26, 34, -49, -34, 98, 39, -77, 42, -13, 120, -77, 123, 81, -122, -13, 33, 55, -4, -51, -32, -121, -82, -86, 2, -122, -36, -87, -1, 65, -55, -121, 32, -92, -125, 112, -43, -68, 122, -2, -55, -125, 7, -34, 66, 71, 116, -91, -126, -126, 28, -105, -3, -105, -112, -101, 25, -93, -100, -95, 124, -56, 28, -111, -118, 9, 59, -92, 34, 106, -101, -52, 93, -4, 124, -12, 112, 103, -61, -116, 94, 121, 18, 54};
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
    msg.setTimeStamp(0.632682919735);
    msg.setSource(764U);
    msg.setSourceEntity(248U);
    msg.setDestination(19880U);
    msg.setDestinationEntity(249U);
    msg.plan_count = 33990U;
    msg.plan_size = 4141136588U;
    msg.change_time = 0.418591235166;
    msg.change_sid = 12953U;
    msg.change_sname.assign("DKAXQQBJRKXUIADWQLYXSOPBIMTJDAGVSKAPOKWZHGCMNRYNNKOEPKXQN");
    const char tmp_msg_0[] = {6, 43, 122, -61, 106, -49, -54, 17, -57, -122, 96, 0, -72, 66, 14, -102, -73, 114, -107, 84, 19, -56, 20, 61, -50, -89, 99, -125, -56, -109, 12, -95, 120, 78, -90, 111, -29, -45, 33, -42, 123, 31, 40, -112, 52, 116, -43, -13, -54, 119, -121, -62, -121, -42, 105, 88, -63, 23, 63, -7, -8, -83, -124, 80, -26, 123, -18, 32, 95, -2, -76, -75, -58};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("IQCOXPKCFN");
    tmp_msg_1.plan_size = 54050U;
    tmp_msg_1.change_time = 0.636068259342;
    tmp_msg_1.change_sid = 8977U;
    tmp_msg_1.change_sname.assign("YCDBTHYQQESBEXUXJWCNPTUPVDVJDVPUECHHZVULHJMBGRZIGMWXAGQVATSOBFSKHPZNZDKIRZSFHXPHFCWILERUWGMDYRYZERAAQJPNZXLIUEEPWVLWRFSDKNKROFJRMGYNUZBLDWISKDJVUSEXODZVVSRCFMBOPGOJNNYQLIKICCQFVHATMWJSMXQKJBHBBPWKALRSMOMGUTEOAIT");
    const char tmp_tmp_msg_1_0[] = {59, -30, -72, -71, -100, 89, 58, -13, -40, 107, 2, 57, -121, -128, 14, 25, -76, -123, 88, -43, 33, 49, -71, -98, 81, -3, -33, 123, -46, 1, 59, -61, 124, -69, 43, 55, 86, -73, -86, 24, 18, -5, -81, 115, 55, 47, 23, 59, -73, -5, -69, -107, -107, 72, 105, 37, -102, 88, 66, 34, 42, -13, -28, 17, 115, -82, -95, -9, -124, -86, 28, 46, -111, 101, 24, 27, -24, 105, 6, -102, 51};
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
    msg.setTimeStamp(0.825574617925);
    msg.setSource(41869U);
    msg.setSourceEntity(109U);
    msg.setDestination(63192U);
    msg.setDestinationEntity(16U);
    msg.plan_count = 46502U;
    msg.plan_size = 2882451310U;
    msg.change_time = 0.884539955473;
    msg.change_sid = 44702U;
    msg.change_sname.assign("YSZWRMLMIPYEHXPUWZJHBCWEDAOCKCGHKWIFCUJAKRVELAJNKWJOFQODYSQSGMZCRVMGZJXBJQDCZIYOPFQAXNHATKBGWNPURPNEDPNLUYPDUBCVBWFJOEFVAFSNOFABKPYRLSVRRNPMIKZSVLAXGLGLPXRIDYLKXWINDTZMZYULRUZNBCVFTQNUTGOHDAAJSRMYMBCFHLHIXKVKIQTSQGDVBTJHX");
    const char tmp_msg_0[] = {-124, 84, -78, 121, 41, 58, 53, 49, -4, 20, 76};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("TGPHRNLFBTTQKDNEQOIVJOWHZJORLFIPJKQHUVABVUYKAZFLGVSRJOCVVOMFTBPURHDEFKWEFOGOZNYBHIGCCXCARHSAGXXKHRDSGVWZOGVQWFEIXJRINRGSAAPVEWXCEEDUSCLCSJJIZWPOLFBKOQNLBLYPJWGBNULAFZIMTRQMQFZYEXWTPZNYYKTRMBPWXCIHBGJTLPTPKUMYTSIICXLUNUYHMDAENKQHE");
    tmp_msg_1.plan_size = 37562U;
    tmp_msg_1.change_time = 0.452925238358;
    tmp_msg_1.change_sid = 54318U;
    tmp_msg_1.change_sname.assign("CAYQMFFWGSNOYBGGMNURHEGNVBCFT");
    const char tmp_tmp_msg_1_0[] = {-59, -96, 103, -87, -16, -94, -25, 42, -44, 12, -51, 27, 43, -114, 45, -65, 14, -61, -43, -82, -37, -21, 62, -57, 96, -121, -65, -116, -74, 4, 12, 28, -39, -20, -36, -15, -122, 20, 104, 54, -99, -8, -64, 64, -105, 120, -113, -52, 123, -77, -55, -104, -78, -82, 59, -80, -93, -121, 54, 123, 108, 13, 72, 33, 74, -59, -82, -15, -24, 13, 114, -64, 29, -36, 67, -35, -20};
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
    msg.setTimeStamp(0.566457013053);
    msg.setSource(26271U);
    msg.setSourceEntity(96U);
    msg.setDestination(7730U);
    msg.setDestinationEntity(29U);
    msg.plan_id.assign("RBIDWJFJMVLLTXYBCZVYPBNFJVLIDCYFZYHOINWRAUFZVGODRRXCYLXZMTXLEWPDATTFOEOUNHYOGDNLQTSUZQMAKNEULTNUXWGJQIMHQHHBJNXSLDMTCOKQOYWCGSKPHGSQXUYQLCBKKURDXGRCIDKGYSWJMQTBUCICHPJIZHBAPWQWODVWSSBPNJIPWORDVEVSSKLZAAVHMVFORPNEFMFZEYEPX");
    msg.plan_size = 57423U;
    msg.change_time = 0.00973509365342;
    msg.change_sid = 41257U;
    msg.change_sname.assign("XBOUTDEGLFYULYHPJOTCUOGMYNCJPXQTWETETNOTQMHYSIOKWISPLODVHSCMBPCE");
    const char tmp_msg_0[] = {-100, -69, 85, -24, 82, -118, 101, 103, -39, 56, -88, 123, 108, 56, 102, -55, 72, -125, 117, 34, -55, 9, -44, 12, -4, 124, 20, 112, 108, 124, -33, -97, 62, -49, -52, 92, 2, 88, 110, 61, 86, 125, -43, -79, 65, -58, 61, -91, -85, 33, 74, 61, 11, 99, -89, -55, -118, 86, -124, -94, -54, -3, -108, -77, 4, 19, 20, 87, 36, -52, 46, 15, 1, -89, -103, -126, 31, 28, -101, 101, 13, -48, -2, -4, 38, -97, -65, -59, -94, 113, 43, 31, -126, -80, 102, 32, 14, -81, -108, 76, -103, -60, 51, -123, -44, -44, -69, 24, 89, 27, 101, -17, 71, 4, 102, 105, 113, 17, -63, -18, -35, 123, -126, 9, -75, -6, -44, -28, 64, 87, 124, 26, -124, -83, 43, -33, 97, 67, -120, 84, 98, 126, -59, 56, -86, 103, -80, -16, -85, -64, -55, 102, 91, -8, -12, 72, -94, -50, -81, -33, 15, -124, 106, 51, -121, 94, 35, -126, 15, 14, -65, -115, 102, 49, -101, 64, 123, -101, 51, -107, -57, 18, 16, -23, 75, 57, 82, 107, -75, -102, -111, -128, -45, 31, 66, -23, 117, -36, 101, -20, 82, -106, -76, -77, 80, 38, 78, -100, -29, -111, 53, 11, -15, 19, 112, -81, 91, 11, -16, 10, -64, 55, -12, -69, -66, 123, -123, -100, 41, 56};
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
    msg.setTimeStamp(0.943811786035);
    msg.setSource(35563U);
    msg.setSourceEntity(176U);
    msg.setDestination(44155U);
    msg.setDestinationEntity(162U);
    msg.plan_id.assign("IDIGCYVTDMBNJXAULPNLFYGOXIHAFJLGUJCPHUKNSZOQWTNAGCWRXXVBCOFMAZXQUOETSNDHQORZZFSPMVTCOUJSQMBWNPQTIBZJSIWHCGLPEVDXYKIBCVFAKRDHZEHHJQOWMIGQGYTKENATECFNYVDZCBGZWWNXRKCMKPRWSATYPPAUEFKOLRP");
    msg.plan_size = 46166U;
    msg.change_time = 0.112205640532;
    msg.change_sid = 4736U;
    msg.change_sname.assign("HKHTQDDNLKXKJZTIFGBZOXCPLVHRGACLZWRXIIMLKQTBIIBLYXZMJKETWHPRGKELECQYYZVOTQIWIUCXYAYEGUEIDRHFPWPNPYOEWMFKDUKWXRAMZMMJTPDBUJKDPJQBHNONNUCFEO");
    const char tmp_msg_0[] = {118, 67, 21, -64, 6, -83, -45, -30, 51, 10, -63, -8, 106, 95, 56, -21, 88, 20, 64, 87, -95, -44, 65, -86, 8, -33, -7, 11, -81, -108, 73, 66, -36, 115, 90, -100, -122, -60, -89, -54, 71, 16, -49, -33, -85, -24, -15, -63, -58, 86, -104, 19, 88, -39, -33, 79, 112, -55, 68};
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
    msg.setTimeStamp(0.584848510284);
    msg.setSource(6429U);
    msg.setSourceEntity(60U);
    msg.setDestination(53014U);
    msg.setDestinationEntity(23U);
    msg.plan_id.assign("LVFAMZGMIVNMXPWOWDQNAHLBURRSAMQDNGIIIGWGTCUJDLAKFQSCEJFJODZXKOOMZSINFUCGZIWZSTUMBMQYYDXTKZLPEAZYBHEWVKPTHJUOPJWCCZXCLCUYQXBEBUKLNVXDVJPYPSTRAPKYMOINDFCRXPBBLIQVYLWQSPVFFOSRIRTWRFHXQTGOVHFGSKNEEVCDWYXPXWMZYUGTNUOIAREJROQEKZTLKJHGJSAHRANDTHHEUYHBS");
    msg.plan_size = 47154U;
    msg.change_time = 0.569432032346;
    msg.change_sid = 41183U;
    msg.change_sname.assign("ALNULMFBEZNKLNJPVCBYLAEQGXHVOIJZSGAATNSWCETEXGZTXPHODMSRRVFCYUSZNIPCMCPYIQICTZABLIOJWHWQZWGDGTCIOARLWLDNIUYOPXXKWIDHGSPX");
    const char tmp_msg_0[] = {88, 97, -45, -70, 43, -16, -89, 8, 28, -16, 124, 28, 52, 66, 76, -100, -57, -126, -37, -100, -12, -72, -45, 50, -4, 13, 109, -102, 27, 59, -73, 124, 83, -79, 68, 86, 17, 66, 126};
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
    msg.setTimeStamp(0.53155452819);
    msg.setSource(44617U);
    msg.setSourceEntity(213U);
    msg.setDestination(49040U);
    msg.setDestinationEntity(210U);
    msg.type = 31U;
    msg.op = 106U;
    msg.request_id = 4734U;
    msg.plan_id.assign("ZTMNAKJSDJCAWCSAPZEPUNLGMNOTHEQYCHTMBQTHOCFOSQSBURFEPIKVECIMIWYSALDIXGYKRRFUEMUZACEDWZQCFXUFSTWPILYXHJNVXJZZETXWVRBWQJVEMHGIQOBGJNKIKJOCCGJUHWPYELKVLTWRCOXAFMZVWSLUDMGUBLRLRXKFKVHDDTZGOZAAOFFPMOHJBRIBXYSQVUYHBPHNNKGNYSRZOLLDYERDQPXIBSTVQGTIJAQ");
    msg.flags = 50044U;
    IMC::Acceleration tmp_msg_0;
    tmp_msg_0.time = 0.849137026516;
    tmp_msg_0.x = 0.708101410673;
    tmp_msg_0.y = 0.0551406128884;
    tmp_msg_0.z = 0.971211096901;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("EGEEWKFQMXCOCABLGHSFPXKAZOJJLFOCTIULVEWFHPILRAZPUSOBDNJFOZQNAQUNEMVZVVRGJMHGWZTIYPNJJSXMUYDIXCKORCIMSIMDAQTENDKRDBDPBKOKHXYHHZQSCRWIJPMRCMQCTOWMYSDNPAGKVMEGUBTSQTLCYUVPNYTYFSUQZYONANZFVBRXKIGGHLWADDWAUPKJBATJBEXTZEZFFVUBLWQYSLVIPLHEVXCRYGUWB");

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
    msg.setTimeStamp(0.918660461854);
    msg.setSource(25300U);
    msg.setSourceEntity(200U);
    msg.setDestination(2638U);
    msg.setDestinationEntity(18U);
    msg.type = 240U;
    msg.op = 179U;
    msg.request_id = 17850U;
    msg.plan_id.assign("MUKYCEWWTHOUQOHOPFILGRWAIUNQZAAVKRQFUIWOAFBYGVUNJTTCNDJEVNEVIZJWHSYWCRSQFXBNQIQGJAHMIZEWRDCKRGDKVMDRAUNTULXPXLQFQPZZ");
    msg.flags = 54792U;
    IMC::IdleManeuver tmp_msg_0;
    tmp_msg_0.duration = 54567U;
    tmp_msg_0.custom.assign("JDQUPIHIBNGURRTCCRHZNUMTBZMWEJAVYWLPVEDFQJOHQXYBVVXNTCKOGXJHTCPYGHELBFXYVWBRFOIGOEXUCNEJNUYYKFWANBPUPKPQXKZARWTNEZNFSISWAMSIVTFSKPJ");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("DGYLFRCDUDKRJBHHFZPKMMSVGHHPRATEAORIDJTAUIUICMSWLREDDUZDUUHCJMMIKAIQOLCXNQQFOBKNPCTZEWSXLBFUQSEUXESHNXKCBPQVRXGLTCUSVYHCEXHONJJJARSDIHZENFHTEGZLEFOYFWDWCWGZRMTTMZOIBGDXFWKYBNKPRUGAYGSTNPVPCYAWXQMQYOAPPYOVNVYWLSFVAXJLZOOKXQJBZT");

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
    msg.setTimeStamp(0.616332456963);
    msg.setSource(14030U);
    msg.setSourceEntity(151U);
    msg.setDestination(18080U);
    msg.setDestinationEntity(28U);
    msg.type = 17U;
    msg.op = 133U;
    msg.request_id = 39844U;
    msg.plan_id.assign("HYEVGDODUQRNMHXLRCSMNXWAPPTNVFQKZOCYUWSZSFWSEHKBTCCOUSRJWFGLMHJZMIZKONPPMAUIZTDBDZMGYNUTUNMZRESVOLJOQPDIPOPJVQWMPXBLCIFYOTQ");
    msg.flags = 35821U;
    IMC::IridiumMsgTx tmp_msg_0;
    tmp_msg_0.req_id = 3293U;
    tmp_msg_0.ttl = 14108U;
    tmp_msg_0.destination.assign("QNZEEQCYKHYEKEAMQSROFPPBUGRHAMUXHYHZTGHOQCMSERARQOSINZJDSLCFARZWWJSTJLXAKGOEQAGWRUGPVYPSWCNFKCQQTWRBVCNSHNHFYNQTIKGMSJVMCIUPDZUOTJKYAIEPKKIZITZUNLZHWTDIQSSBUVJDPXZUIKGOGLFELBDJMIAOVEXVCLZFLVTXNJHPMTXWAOOYLBO");
    const char tmp_tmp_msg_0_0[] = {-3, 21, -58, 112, -47, 20, 64, 25, 8, 97, 75, -74, -9, -108, 63, -18, 69, 66, -20, 1, -75, -59, -42, 56, 25, 35, -48, 25, 26, -97, 65, 54, 115, -95, 4, -18, 34, 99, 99, -88, 14, -127, 29, -17, -50, -36, -95, -116, 94, -89, -113, -55, -27, 31, -22, 88, -36, -24, 119, -35, 45, -74, -125, -111, -24, 46, -54, -55, 75, 46, -122, 121, 5, -70};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
    msg.arg.set(tmp_msg_0);
    msg.info.assign("WLECDOGFGXIFZVGALWTQTDSUHTCUBPRVYQXJMDUSBFFTYXCYRWHDTONAZTKNRLMJLHMIQUILYGUREOFWEDYOMXFNPPRIQOJKEBDVPHEQCKNHYVIRVXKIJEKMCAMPJSMVWPMWKECLPLCMUDUBTHCJOVAFRJGDBZHRXCQOJOKG");

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
    msg.setTimeStamp(0.31379207439);
    msg.setSource(5795U);
    msg.setSourceEntity(175U);
    msg.setDestination(57502U);
    msg.setDestinationEntity(97U);
    msg.state = 57U;
    msg.plan_id.assign("FKQBURFIYWYMMDZGRZKV");
    msg.plan_eta = -1448121919;
    msg.plan_progress = 0.408838954662;
    msg.man_id.assign("NMQSWZZRCCRWETFVNFRFVLGARYMMNUSFXFPOFFYQVYSTBZCDIURGJBKTUIYLUJDNJJOBEGKQBEBQLXIMPRUIMBLIXXPDZTWKCMZAQHEHXJXOHVTVEKWEOYEKCTOOGEYQNCHDKCAWJGIKUC");
    msg.man_type = 57410U;
    msg.man_eta = 71461621;
    msg.last_outcome = 254U;

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
    msg.setTimeStamp(0.396425217509);
    msg.setSource(2237U);
    msg.setSourceEntity(73U);
    msg.setDestination(60986U);
    msg.setDestinationEntity(142U);
    msg.state = 115U;
    msg.plan_id.assign("DQUERXWUNILLBBCKCYIJOFOAKKHXEQYPWMSJAWITUUPDNLJWTHWQXUVAFGQQHWFJGMQMXWZEUHFTMMZHNJYGYGAMTIYPRGJCVZLVVPVQREJMESACEYVNBAKIJBPXZNIDOIFHATNQODXFXPEXWFOBNKVEXHPPCKESYLSPMZBENZLDNRCCWOLDQVTAZCGOKDQOUBRVRWYGZM");
    msg.plan_eta = -1150169228;
    msg.plan_progress = 0.285909444104;
    msg.man_id.assign("OXDGNXKQCEWPAWRHHZMMQVAKTXYZHYNXMHUEKSDMLYRNANAURSFEMPBHQWTWYRIXMIDFEOUWEXSCRRSIKJCBCIGUZJYOXPGSYAWWNTOTLHFPKEGXL");
    msg.man_type = 22124U;
    msg.man_eta = -1573135018;
    msg.last_outcome = 22U;

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
    msg.setTimeStamp(0.305205260917);
    msg.setSource(32060U);
    msg.setSourceEntity(94U);
    msg.setDestination(47649U);
    msg.setDestinationEntity(155U);
    msg.state = 75U;
    msg.plan_id.assign("KSLFYGVGPPZDTRJDAVATWDSDEIFCMRZXQVHIMXUYNHBSIXJILDSAJYWRULKXNEKJFPWENKBGNPTRBLGFVPVHUWVOZMOMYJLQPECYSYTZMXKAWNFMLAUEWDTVVRPFZDXJBKBTKYEXQWJ");
    msg.plan_eta = -1252283303;
    msg.plan_progress = 0.871831044588;
    msg.man_id.assign("YBJUVGDHNTQSIFWVPFEDBYHXRLELXGQDNQ");
    msg.man_type = 23082U;
    msg.man_eta = -1009152468;
    msg.last_outcome = 90U;

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
    msg.setTimeStamp(0.122772223269);
    msg.setSource(47124U);
    msg.setSourceEntity(89U);
    msg.setDestination(10071U);
    msg.setDestinationEntity(249U);
    msg.name.assign("YFEGKOEAIHFCTBKSVUIUGLIQYNSDXAYVTWKKUJPZQGRRCLFDQOXDPQVCJOXUSFJGPZMQOVYWTNZETXATVQSOLCIMADVYPBKJXCBSKLZDSREAUNLBYOHXUKHSDYIYRNLQREFFQJIBEVSBATGPAFIWCHRMLYNHLKGWLNTPFNZFOBNWEETEJCMZFGWIKTXUBPDAUSCMAHCVJZMMDOGANPVSROWZLHIKHWQBRRGMHXDGZXJHJVWB");
    msg.value.assign("IOQBMZKWWSTNOQXORLYHODQJLKLTNSN");
    msg.type = 55U;
    msg.access = 93U;

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
    msg.setTimeStamp(0.643625989536);
    msg.setSource(5658U);
    msg.setSourceEntity(96U);
    msg.setDestination(10494U);
    msg.setDestinationEntity(151U);
    msg.name.assign("HAQKFDEGSCYJYOQCIRTKQERDQOAJNPNRUFBWXWDOBNERWDIUMKYDSISSBTNPIERGVQLJNUXMELIHBMYXKWZXZN");
    msg.value.assign("XLEWRKGFQTFBQOCBLDJOMNZLNVBUUABSRYYSAMJRYSAOEUAXQAXIEKLIHICBVPOXEJV");
    msg.type = 0U;
    msg.access = 35U;

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
    msg.setTimeStamp(0.174327114243);
    msg.setSource(49938U);
    msg.setSourceEntity(149U);
    msg.setDestination(50899U);
    msg.setDestinationEntity(72U);
    msg.name.assign("BZAOJIVQLOCQNWZKSMVCWVXCQAPFSHUCNXFVBNJXMVONIZRQXLFNIJIPDXERVLDHGOSVUDLGTPOBIEJPCCSHARBAHWAJDOOLQYWYEJTYEYQCRPXUVQHRLLFKNYYHDFHLFQTZQSEFZAKIRGTHZNDPMMLTMVIMPEGCSCZAUWOOIBJRMSCKKTU");
    msg.value.assign("KMLTIMQFFKLWNSOSNBUJVAOGIQDGPEUCXWORTPEXXGNSDTDJSFLXBLYEKGIARCLTTEVOXQRJQYSHPJMJZWVHGVOWNAMEINGAKRUQURQJWRQZHPDRZACNJMYGSHGRCTTGHB");
    msg.type = 118U;
    msg.access = 188U;

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
    msg.setTimeStamp(0.150525904635);
    msg.setSource(40610U);
    msg.setSourceEntity(157U);
    msg.setDestination(41124U);
    msg.setDestinationEntity(17U);
    msg.cmd = 67U;
    msg.op = 6U;
    msg.plan_id.assign("EDUGKAVHJYWKEVOXGCMQVKDPFKDNFAIT");
    msg.params.assign("IXTRQTCIMAYZNDISVNJVGAUMZNFJFTRVPESQKENMBNTOFDUXYFJCJOREVBBUGNCXNMBXVIQHVUNPAHDCUCGHZYKDJOITIHSADJJKAVUIPYWQRHLEKBABSUWHOALYKGUPCSKSYMVYFPAJXGRQBLLVBMTHIMHSXSODOLOWOGPNTESQETVKWLEFYMXUKNZGPXGWQPRFQXHWOWLRDBFZSRLEAUD");

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
    msg.setTimeStamp(0.708543665672);
    msg.setSource(46112U);
    msg.setSourceEntity(214U);
    msg.setDestination(36758U);
    msg.setDestinationEntity(157U);
    msg.cmd = 211U;
    msg.op = 183U;
    msg.plan_id.assign("DKWBFFPTNLCYJZTMDMPUVXIQVTHJUSHXYUJCZBCMFQUFHRFAISDTDMHKEGIWCCNMZCFNFEHFZLXEBYQMWKAJDYREITNHKAHTOPRUMERBWAWLBTPADTBAJGDVWXPNUGJYIBVXZLLEURVMCQFEOZCRQBLGRXXGKADNOIBVJBRTQOXZLKSSEQVVOPQSJAYUHGORXOVYH");
    msg.params.assign("CDBTEQNVMQYABZWODFVZYCYOHVEPHOJSVAPBWWRGPHTUHGHOVCRADWUGXKB");

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
    msg.setTimeStamp(0.464295876921);
    msg.setSource(32636U);
    msg.setSourceEntity(146U);
    msg.setDestination(21727U);
    msg.setDestinationEntity(12U);
    msg.cmd = 127U;
    msg.op = 139U;
    msg.plan_id.assign("ILBIWCHBTJHAMCLFUPJWMZOZOGABNQGAWNQEMFDJSQESXC");
    msg.params.assign("NMRYCNUDLJLQDBJRAPIZVMRTNSLUJBLCJZRVNISYDTXTIJOKFAOKKSKHBZSNCZHTZBXVZUPWLGYVYPJIMZESDHCMTLGAARKQKUZZOGPGLEMQTBVKSFVECFOIIO");

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
    msg.setTimeStamp(0.777501987705);
    msg.setSource(17015U);
    msg.setSourceEntity(67U);
    msg.setDestination(36531U);
    msg.setDestinationEntity(244U);
    msg.group_name.assign("TXDOJEFWJCZOQDOMKIQTPEVJGHVFALMFYMZLMACISOMTFWALWNPXRBHJEFLUPSUZE");
    msg.op = 2U;
    msg.lat = 0.658658607949;
    msg.lon = 0.958973767817;
    msg.height = 0.711238578455;
    msg.x = 0.861196752459;
    msg.y = 0.400137163283;
    msg.z = 0.273023208386;
    msg.phi = 0.4772415591;
    msg.theta = 0.114374176768;
    msg.psi = 0.453902569296;
    msg.vx = 0.411442407189;
    msg.vy = 0.571510848042;
    msg.vz = 0.243524796243;
    msg.p = 0.375348529666;
    msg.q = 0.347038697329;
    msg.r = 0.0795513298193;
    msg.svx = 0.439061417395;
    msg.svy = 0.5051691589;
    msg.svz = 0.572938412675;

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
    msg.setTimeStamp(0.928618535891);
    msg.setSource(24944U);
    msg.setSourceEntity(145U);
    msg.setDestination(16669U);
    msg.setDestinationEntity(80U);
    msg.group_name.assign("OAONUODLNNJFEDRIC");
    msg.op = 38U;
    msg.lat = 0.0106593362529;
    msg.lon = 0.394567704981;
    msg.height = 0.609094269623;
    msg.x = 0.517805546929;
    msg.y = 0.989385920762;
    msg.z = 0.428595574891;
    msg.phi = 0.113721212907;
    msg.theta = 0.794213790235;
    msg.psi = 0.474590912011;
    msg.vx = 0.560298633668;
    msg.vy = 0.776260964331;
    msg.vz = 0.281751238957;
    msg.p = 0.257085737094;
    msg.q = 0.460076892589;
    msg.r = 0.603837438393;
    msg.svx = 0.477232517952;
    msg.svy = 0.349546801201;
    msg.svz = 0.953562131293;

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
    msg.setTimeStamp(0.329562752799);
    msg.setSource(51368U);
    msg.setSourceEntity(58U);
    msg.setDestination(11947U);
    msg.setDestinationEntity(14U);
    msg.group_name.assign("ZNUYNRKOMUZBOPFYWSQDPSVISSRUPNAMBVIHBLCLKQBWXZRXABTASDOKYSXQDWUDHMKIUJNDOGVYJHJGJKRRHEUESCHLEYDHIGIQDIOIJWAQBWGXDTLGGPDWBZAHKFKCECMQETHITHELZKFAYJTFATSVGUUAFJFMZBGCLRNPGIEDEZKGQOJRLOUYMZFMNNVWJMWAWJOKBCRLPNLPHVTNZWVCFEYRNZUMYMYCVPXT");
    msg.op = 233U;
    msg.lat = 0.702389663405;
    msg.lon = 0.597983150105;
    msg.height = 0.831958588859;
    msg.x = 0.102690673596;
    msg.y = 0.258175090237;
    msg.z = 0.931617325596;
    msg.phi = 0.201903799819;
    msg.theta = 0.870468216698;
    msg.psi = 0.186535163435;
    msg.vx = 0.489170388041;
    msg.vy = 0.563104614461;
    msg.vz = 0.883761759298;
    msg.p = 0.319107937061;
    msg.q = 0.706962060682;
    msg.r = 0.0330273806176;
    msg.svx = 0.448535343182;
    msg.svy = 0.598091238275;
    msg.svz = 0.253114467722;

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
    msg.setTimeStamp(0.297087005441);
    msg.setSource(51820U);
    msg.setSourceEntity(157U);
    msg.setDestination(3749U);
    msg.setDestinationEntity(117U);
    msg.plan_id.assign("FUGAZQNTLSSLKMAPDXAFCYEVWUQHJCTTBSJIWLJICYZZNXVXDTTROCJ");
    msg.type = 188U;
    msg.properties = 190U;
    msg.durations.assign("KSSPDWTSXSKPYODVURQESTHQJRHQVFMTKGOSWWBXBDFZVUMGNHONACEEFJMHDRZZYFGKLWEFVRRIKMPAWKYNJVZYIZZISVNNMMVOLFCSMYCKOJIBBGCAXMDTTBGBILXH");
    msg.distances.assign("FQHRFMCIPRFVJFLCJFZBPZIYHAHBQRSRLWNZSXKYCNWIDVNDNITUQCZEQOJUQMDOPUTWTEDSRCGIGEXUMSMBHAXFYTKDCAYBQTPVLCYPUDWQGJVWHBIELKPAGWWXRLXTZGSRASENHOKEMDUDUXHDMJJPDKGXAEZWOZCUUQV");
    msg.actions.assign("PDCCWVLZAJPNGZHFEEPBOSGPSYLMNBMVZRVKTNUQSYKYHTIPKCEOXUAAWGDNAKZDTFJQOWOKAYGEYYMDGHEFTQSFYGZDDAIJPAEMOAUNXTBLRNIUMCBXSHGKESCWSFI");
    msg.fuel.assign("QBNWJEAVJGKLXHDTCIGQVDTEOBNUCTMFNTWLLAPVMXAGKIFHXQLARCEHZRDKBRQONXDGHUHTDFCBMOUILBEQYCZCVCITAQPMHFQANBEZNXYPPFKSSSIXYJURPWVKBTZJGJFBVYYASX");

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
    msg.setTimeStamp(0.728537951811);
    msg.setSource(34528U);
    msg.setSourceEntity(22U);
    msg.setDestination(35326U);
    msg.setDestinationEntity(101U);
    msg.plan_id.assign("QHXASUKEFNYIHO");
    msg.type = 43U;
    msg.properties = 177U;
    msg.durations.assign("VXHELKXRPSFLUCZEEFBJTFVYHUJSHORCIGYQLBRDYOZDOWSEOIIVMHWKVIQGEPGJMZSSYPDOXBRHQWKFEOTCMHUAMUXZYW");
    msg.distances.assign("UCCDKWEKFXFTTWWARPALZLGNVKQNJJACYSUQHHETEGVWRYSZXSCFGTKWJDIPCGCBFMZMLEJMEZOHIENHRUAAWGTBDWNFKYQXZHKQFKEJIYVBOPXGNISFQPCJVLUJNSQNZRXYNNUDPURHLMZ");
    msg.actions.assign("TJVHVYEKZDIUWIFQKDMRMXFFKQUSZYXEWNEBTOCPKTNOZTHPCFMMUSQUNHMQEZJHFIDEWBAKZQYVBCRAVAMLCNJGVLXJBYRUAOCOKLCEVTTHGWWWDVYJCGYKGANIYUQSDAWNRUGSICMRSRNUGSBFJQBQJVXBQKVFHWPGIOVRZMXPPHESLRMOSHOLAPZLEPLE");
    msg.fuel.assign("EQSDKDJHOWRDCEPWDUALFVXUPCZUKIZJLEPSQDASOQNAFUCQRHDELXTOTJXUMHYOPLREMGIZACBXJQNMTFNKYOGZZNHMNXJNIVBAUGZPOFMBZDUHFYMWJCDXILIIMATWKANUYTJBIUXHWECVLFNQIH");

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
    msg.setTimeStamp(0.634836482664);
    msg.setSource(56630U);
    msg.setSourceEntity(32U);
    msg.setDestination(63880U);
    msg.setDestinationEntity(91U);
    msg.plan_id.assign("HXWQWBUNRIDYGMRABPZOFCHFEDSCQKDZKZOUJZJLIZPVRSHKYMASFIYNLRHXHOJGKWONTLCWKOXXJEWKMSDSSAYEDQXGUVUSMNMHLCGBVPIURKLKVCJLNYANVUYHHJVGQBNVALADEFFTHWFDPQDIGPMACRJUEOFIPPZSQZLBYGRWXWKOFMRSTCPKIITQGRYFHMPO");
    msg.type = 169U;
    msg.properties = 97U;
    msg.durations.assign("JPWIGIUVVPHJHEJFLKXNWOGRCBFKKZUWHXMLNHKFRIMNTHEDCNZADAITIERQZWBOIPYMMPJLCUGKIDMTGJQXCWQETMGGECCVAZUPDYBKZMRPJALPEXDYXRJYSHNCAJQSSIDL");
    msg.distances.assign("WNXHYKIZHCEITBDEBYNAFEWUMHDHNXOMOGQDPKWOQOGZHMZGGIYEVJBTNXZGNLVQEYMBBTPLUFKCJKVRAPLIQKSFXMQSFPZBCPHY");
    msg.actions.assign("WMCRMQQLEMFRYMGJAAACEPAIUDRNXOXNBHSZRLIGYAAJKSMNMXHTWOLHQWPUZTSANSHBXBENHSOQBDMHUZWKKPPKRFFFFWAUGVOVMZFSKXFSAQJQFXQNVDQCFXJKYSTZRYJXISVOUVGIDJGRLHYVWOTAZEFJNCCCUQICIEIGDTEKVWOKNWLCPLTEMHCBPHIQBWVSXYNVLYPWBPZGVRXDDREOJGKLLTUTRDUNYBTCEBTKLYDYBUUZHZGP");
    msg.fuel.assign("FDWPCAGNRBJBEKLJYZGBGDXSDNIVSSEJJMWMQLPYLKHEVNPCQTVNZKRWTUXUEQFWLFYAERIZNYAJCNIGBRCBYFLMDNQQP");

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
    msg.setTimeStamp(0.801919127142);
    msg.setSource(56756U);
    msg.setSourceEntity(190U);
    msg.setDestination(14172U);
    msg.setDestinationEntity(249U);
    msg.lat = 0.219798743273;
    msg.lon = 0.823954662963;
    msg.depth = 0.461594368349;
    msg.roll = 0.468789144466;
    msg.pitch = 0.959342156091;
    msg.yaw = 0.934706215746;
    msg.rcp_time = 0.760577454777;
    msg.sid.assign("CTBOSIGAYKEZTXHWUDRFALIUNGAYCHPDHERMFVQSGHSTLHXHNFHNMILTMBUXPNRFIVVBZJJVUWTVWXWDECKMFQERZXPDJUQPLVLUDORFDOZZLQBTYSMZSYBPYBVVQXWIKOPSFBAJCTSKFKAJHKRHADPCLGNEZJYKEUNNTMFCQDNPTEJXBUWFLEXIZEOKIBMRNILVBSONYHPJGCYWKYMAAARSYWDQRGUOGCOMGXMWO");
    msg.s_type = 147U;

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
    msg.setTimeStamp(0.314450894449);
    msg.setSource(63617U);
    msg.setSourceEntity(142U);
    msg.setDestination(33476U);
    msg.setDestinationEntity(44U);
    msg.lat = 0.918769219133;
    msg.lon = 0.0660590061651;
    msg.depth = 0.48830556321;
    msg.roll = 0.439071334338;
    msg.pitch = 0.0659671137069;
    msg.yaw = 0.17634828583;
    msg.rcp_time = 0.219163531779;
    msg.sid.assign("TVMXXWDNSRGCPLEOHJJTAIXNWSRILZZSTGVFUIHKGZQUYZFBLKQEBFPJOXONJSZVCFRGWNIUBURTCBSLGZCOWEEPGWRKETWWVXHZTZIHVUYVUDMFHQOTHHLVKSMDUQAWRVEELR");
    msg.s_type = 146U;

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
    msg.setTimeStamp(0.489330014281);
    msg.setSource(20618U);
    msg.setSourceEntity(231U);
    msg.setDestination(13365U);
    msg.setDestinationEntity(164U);
    msg.lat = 0.0474391632486;
    msg.lon = 0.893672675907;
    msg.depth = 0.620083246547;
    msg.roll = 0.969522647924;
    msg.pitch = 0.0468863114552;
    msg.yaw = 0.921531167582;
    msg.rcp_time = 0.896563124466;
    msg.sid.assign("KPXMTEFAMZXRETCGKHWGDOHTSJSKZDALPNAYPGXXPBUBQTNPYZEVVHNIWAFGRHOONVQNOGJKQOCROEZMICYICQZQTLYWQJMATZHPELRLDRJMSTMDTGSERWDRAYHLWHHVYDKLJULUJUGBUXBCICRIFSQNYGNKDSZFEOGVBCJXVSZYUMDWXH");
    msg.s_type = 106U;

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
    msg.setTimeStamp(0.0093212661421);
    msg.setSource(2777U);
    msg.setSourceEntity(40U);
    msg.setDestination(42486U);
    msg.setDestinationEntity(243U);
    msg.id.assign("FIAWMQXKIWIZLJFZBBEFACCZLNMCEAUOKETOJAUYZXHXPDYGVMGJIDHUY");
    msg.sensor_class.assign("XWFWKSYIRTWUOHHIBAAVEFHHBNZNS");
    msg.lat = 0.333596273563;
    msg.lon = 0.593526851029;
    msg.alt = 0.928559815769;
    msg.heading = 0.24069706749;
    msg.data.assign("LLWNBNNBYUASOCNUBTXXA");

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
    msg.setTimeStamp(0.140952520821);
    msg.setSource(35809U);
    msg.setSourceEntity(228U);
    msg.setDestination(64027U);
    msg.setDestinationEntity(93U);
    msg.id.assign("RTPIRXJQTFGXGUIDYPRTATH");
    msg.sensor_class.assign("HRRCISHEZLPUWJIQXDMUEJCKSIQMQUOXQTKFQSXONJQCGZGVXNRRPNILQJZNLAWBKZPPVCTKTHTGEVWMPFLNQFDCFQBVBJWPLBBUZRCAWGSYJUSAYOHLZLPFXIVZWVOCOYTDWHDYEUVMQVUYBLTMITHXDXODKDGAKWNYXMFOHZFWD");
    msg.lat = 0.680605368417;
    msg.lon = 0.400732424994;
    msg.alt = 0.861508586299;
    msg.heading = 0.304290461915;
    msg.data.assign("MEVMIGMTBBECCLXQRWGYXBBQVMHIORQPQDNTYZRDASXLXPDFKOJNALIQLATJUWCZUSIAVEMYARGBTCIPBKFMZJFQIYIFLKRBIRDTEZHHOPAEYRCKHJZJNIUSBMZGJU");

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
    msg.setTimeStamp(0.0358784464252);
    msg.setSource(11169U);
    msg.setSourceEntity(245U);
    msg.setDestination(46081U);
    msg.setDestinationEntity(10U);
    msg.id.assign("XKKOVLMHCDPZOBXBECQXKDTNEMMMAXSDURJIZKNLUVIGZEDJBDRFOOIRYGTNKRTHXGOCQJHURLONTPJIOVTJJYNHKFQMWANTLUSIVBFSNTGCWCBEKGGIYWZJEPLFQCHDMMIVQARGELCVSNWUJQWLXJPOLMKNYBSCUYDOEAWQAJZRUYFICPHIUAXMPSSUBBYTQDQSUXWYFVPDSVELEXBZADYAWKWFHPFTPOWGYCSTZXHHRRFPFZVGAZZKERIQ");
    msg.sensor_class.assign("LGOYZJVYZJFIVRUNHMYAFQLIIIWMYZFZTCMENWCRPQFRCNRLOCQSPGZLHWAVTCZDUNQJJVIWTN");
    msg.lat = 0.875953811432;
    msg.lon = 0.55639031783;
    msg.alt = 0.744061098824;
    msg.heading = 0.623496506122;
    msg.data.assign("SCLJUSQKNIAEXJALBYYNDEMPBMODOCGVJNKQQPBXEWDOYOLQQKRIMKPEEQUYRERJLNSSZUCJYYHCKOIYNFRVJEWUFBVLHGOTMABKIEDHPIRHXKWKJDCJGZ");

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
    msg.setTimeStamp(0.685742167679);
    msg.setSource(9548U);
    msg.setSourceEntity(28U);
    msg.setDestination(21051U);
    msg.setDestinationEntity(253U);
    msg.msg_type.assign("RBKBSMJOPFTVQENYWEMZUPMVYTDUWVXJGBAHPNYILYHOUKOHFEFCDMPMJYMVDWDOSGEBPWSERHBQQPJCCCRZGPFKNQGPNOLSSGTNUONGZQTDRGIICEIMJBFUJ");
    msg.sensor_class.assign("CHYJUQGOUZJQLAWIKWMPRRUSOXHDYWTUXGKPAKEFYQHSPZTCLNXTWBHVXQXCIQDZRSCASRVZAMFWTYBGLRKLBHJKRHFSNRXUDP");
    msg.mmsi.assign("BGTTIJOCCWHLFRVZSDOVNPKTHNQQDFIRBFFSNRDWMWZTVCKUNBLOBKJXXPHPFJEC");
    msg.callsign.assign("LBYKZUGPIBSOSQROZDOJDTVAOJWJFEJZRNRMQEHBLQFHIVRBYZPWVANBWUTURFHEPPNUVKIIGXDKOCCVCOMAKHILJQHEUFPULYYWTWRBPBLVSTEMAOZMYHJGRJBZXTTPJFDGEVIYXVQWSVXZSXJMCMCTAOZTYGHXQOSIFGYDQZFKGGMHFSXFUJSWBHSROPLE");
    msg.name.assign("RKWLUJRRKXSXKFTMASXBUZWHKKVEVJANOEUZOIMTCIEXTNEZOYFEPCZMLWYJFGBZFRPJAUXVYSBLQCWIDSNFEOACSHTVGVZZTLTJNAHTIQMQNYCJZDERWIOMURHPSZGINEOTGMPD");
    msg.nav_status = 56U;
    msg.type_and_cargo = 72U;
    msg.lat = 0.412590685633;
    msg.lon = 0.276826672646;
    msg.course = 0.763171752973;
    msg.speed = 0.891184755513;
    msg.dist = 0.00868446957849;
    msg.a = 0.892275121256;
    msg.b = 0.371913696099;
    msg.c = 0.0849336523358;
    msg.d = 0.277881750756;
    msg.draught = 0.818357168294;

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
    msg.setTimeStamp(0.203265187734);
    msg.setSource(53068U);
    msg.setSourceEntity(191U);
    msg.setDestination(48103U);
    msg.setDestinationEntity(9U);
    msg.msg_type.assign("MVGWLESXFKJRTEDHIPMVZWXCYYQZPDJXJJHXFRLDEZKCFGJJUGNUVVHGUNZPCHNSADPNKPOVXFRDBDBKE");
    msg.sensor_class.assign("QBLDXLPKAUORGHWRCQKMZKKCPUEWPIEADXCG");
    msg.mmsi.assign("ZWVDAGLMEXKFIQNNYQRHSVEHDIUHIHITZATCQHWJIJZOHHXFNPDAEVUSWCOREIOTZCEPBBCGFXATEBYENXLHTTQNPPQSGPOVOWKSURJDRRICRXUOOBGSKJFAFWRBNAULMLFQUKVYMSEXANGKGDICRUAOQMSGMYKJJZBPUDHYXYSCEFZQXJGQNAPMTTCJXUPKIYVLBLARKKNBPDPWZDOTJIFQZXNBKZFLS");
    msg.callsign.assign("FQANYUXNFYDPHBMSZEXVXCPYTDXNFXHJZEQWBONTNMGZPOVBCEFGGHRRXMMUMPMFXFUJWIXCJCTBSIYGYZERHCTOKLSNUSZO");
    msg.name.assign("YPUCDULSRPRITUDVFYNXDNKFYQRCVGAXJJJDGKYAEBVEGOKWNSANMACQZLWABKNPCHGNDPLPQHDOEUQSVWGRPJGMEFNMFULJFBQNVKLIMJDAWCAVOWHWMTRHPWZGFZZQIUBXYGIBGWZYVKFCETDVZXTOZCUDVTMESBYJCRSQLLJOIAIYSKTMHTMYBLRFRCMGSXRPNESXIPXIE");
    msg.nav_status = 125U;
    msg.type_and_cargo = 46U;
    msg.lat = 0.719330695881;
    msg.lon = 0.985324517941;
    msg.course = 0.407258295934;
    msg.speed = 0.342734343431;
    msg.dist = 0.0888042702619;
    msg.a = 0.626831756623;
    msg.b = 0.809194373049;
    msg.c = 0.555702333826;
    msg.d = 0.44456828024;
    msg.draught = 0.79004661712;

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
    msg.setTimeStamp(0.826255942201);
    msg.setSource(56987U);
    msg.setSourceEntity(222U);
    msg.setDestination(44422U);
    msg.setDestinationEntity(165U);
    msg.msg_type.assign("ATALXBVCVGBOEWGOPRKKJAZRGXPWWAMOJPHHCJSKOERRTLFGWYGZYZAAJVFWIOLHFBPIDUSWZYYFPQJHQFPCYPREAUEJDWMIIFHKRSSUCOIVLXQQECDPTQDSNWHVJORMPFNTUIDHFDLMHGBYNUECNBAZ");
    msg.sensor_class.assign("ONJXDVPUYKWBUCCAHEN");
    msg.mmsi.assign("POSCKDIXQGPMXVBZZNTGHSNWOUTDVGPDPZRCUAPAKRPGAAIQSHJHDRHSYXVDUBECWUIMLLBNIJCWRVHJIESAYUIVWBMWVNFQJSWAGAZ");
    msg.callsign.assign("UQLDQOMSOMVVGPVJCKIBCHXCLZEJVJAMIIGKIZXRZYFYQSDMGZDKPIBRRZKLURBFOGIJASNWJNMBNORMTRHJOOBHUXUBCNVLXPZVOFZWWKJCTIPEARPHNUZHDJUXMEEYWWLQKIIGPDDAAATTAOUFHSNNZOSCMVLSMCYNQVNXSWDYTXLZGLYSEEXGGLGWOQRWEQMKQSPWXUWPAUQEBXCYUFRIHCDTHKJBATBPLCDVKKYAT");
    msg.name.assign("PECKZGWRQWYJNIKCTDDBLOZAEUYKKTILXWFXPGXLPJBTQVLASXMKKGETGWIHJSQVSKOQTDWHZZNBWBTNPIEFUATYVEUFWOKMCPOUXGYTBLCGBNNRTRQRXHPUEUGNYYJNOUAVCOAWJZNGLZXXIFFABCMFPLJPJXSLESQRJPYODMYSWENMEMMRPSZTDHFDRRHXHWIEHDDZBCQJYDISUSUMKZOOBRYIJHLHDQKSVFOFHBVMACMAUNZIVIVAQVCR");
    msg.nav_status = 53U;
    msg.type_and_cargo = 176U;
    msg.lat = 0.0658695938603;
    msg.lon = 0.377081779351;
    msg.course = 0.313240826139;
    msg.speed = 0.506869336297;
    msg.dist = 0.362872923655;
    msg.a = 0.193926618286;
    msg.b = 0.0179785365966;
    msg.c = 0.373432106287;
    msg.d = 0.0945314833056;
    msg.draught = 0.274474656391;

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
    msg.setTimeStamp(0.978483254705);
    msg.setSource(24306U);
    msg.setSourceEntity(229U);
    msg.setDestination(13977U);
    msg.setDestinationEntity(214U);
    msg.id.assign("WKSYQJYCNRHLTHBIUFVYMLSXCXDXMXCEWDENLFKAXVDGVPZNVHZEKJHQSNPRGUXKTNDHTPIWAJEEZQYIMIGASKTDFHDBTLKNPOMQRWTZJATHCRVUYOBFMRREDCYIUEGIOPMURCFCMFOOPSHTUWDDAQRZTNGSAVFXFIVPSWYXZLBAJVXAPKZSBGJCOUOVJWELJBCWQIGGMFEYAUHLKQIXBQSNZLVLS");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("IDZVHLDECYSMEKEVMQRMAMSSD");
    tmp_msg_0.feature_type = 81U;
    tmp_msg_0.rgb_red = 188U;
    tmp_msg_0.rgb_green = 112U;
    tmp_msg_0.rgb_blue = 69U;
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
    msg.setTimeStamp(0.120659650612);
    msg.setSource(43491U);
    msg.setSourceEntity(164U);
    msg.setDestination(47580U);
    msg.setDestinationEntity(81U);
    msg.id.assign("ACGQMNBHTPLMMLRFCYEIWIJNYYVXVSXJMNPJUKEROFDGWSWJICMSORVFQPENSXDDAYUMSPOBCHHBGPDGUABYDHEMBIMRDFWQZBVZFUZXOLCDJSYTUUXNEWLAHNRNKIEAGINTHZLTQHVEPYBHWLTWKSPCOSEZMDFXUCRUKZNTY");

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
    msg.setTimeStamp(0.583815623912);
    msg.setSource(19403U);
    msg.setSourceEntity(88U);
    msg.setDestination(54396U);
    msg.setDestinationEntity(178U);
    msg.id.assign("AAZNKQAKYRDRUIETCZCUFFMDGUSYRBETUADULPSHSVWNXHGOWRNXRGJISLDQMSIEGCZLNCJUKNXACNJZWTHQOOGKTHAFJIMIVPXXYMWZRYAHZPVEIPBBRACVBXFPQMCPQEFRLDJJACIEBISLHNTFZEVTQFVQTBYBNV");

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
    msg.setTimeStamp(0.570196444271);
    msg.setSource(37609U);
    msg.setSourceEntity(91U);
    msg.setDestination(30942U);
    msg.setDestinationEntity(98U);
    msg.id.assign("KNBPENTVNSLUOLWSRVAHYFFOGKEQTULDWNXVDROQMYBMFSSHHDUHEWVCQJRDFYPIUICAEHKKCVZRVB");
    msg.feature_type = 68U;
    msg.rgb_red = 8U;
    msg.rgb_green = 149U;
    msg.rgb_blue = 84U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.959870016132;
    tmp_msg_0.lon = 0.223122539472;
    tmp_msg_0.alt = 0.748091886789;
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
    msg.setTimeStamp(0.921611386894);
    msg.setSource(48347U);
    msg.setSourceEntity(200U);
    msg.setDestination(28131U);
    msg.setDestinationEntity(68U);
    msg.id.assign("QEGXPQWSXNYONMOPHHJPUBPHZNRZUVOCCSKKUFCUKEPTVXDWQOTCTVZLZVYXWDBLXDDVTHNFGGHXWSKFLYAMAACKYRHIHMWFUEHNUCTNIMINSJBJVYPJCMJWOSELXBZJGKRVGYUFJLQZYJMOGNRIFDPAVBYQKTUVWXNPPMMUEARJRFJFCLERAGDSO");
    msg.feature_type = 5U;
    msg.rgb_red = 151U;
    msg.rgb_green = 54U;
    msg.rgb_blue = 189U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.930110663481;
    tmp_msg_0.lon = 0.633715759707;
    tmp_msg_0.alt = 0.259760400307;
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
    msg.setTimeStamp(0.268518804718);
    msg.setSource(16005U);
    msg.setSourceEntity(238U);
    msg.setDestination(39631U);
    msg.setDestinationEntity(76U);
    msg.id.assign("QQSEHNBALARZILWECOYONZOQUNXBFMDSJSGIYQBYIJEDBZHWSPWESVRZQRWAJBFBNSPCPKIUFVCJIPCHVUFHUWRETGKBVFTLRFBNVGMYVDYJMRWAHXPKUCDQXUURYZGNTZGNTTCFISKEMBGTSDZKVDLGXXWDMMEWQYHGAARQHVOKKKDAUMTGCMJJJWLDFXPALSEXVMMGKYCHWHIIENZCNXUPXLRLQOUPTOZYLNFYC");
    msg.feature_type = 0U;
    msg.rgb_red = 181U;
    msg.rgb_green = 2U;
    msg.rgb_blue = 45U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.144214069484;
    tmp_msg_0.lon = 0.342881683298;
    tmp_msg_0.alt = 0.592262344696;
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
    msg.setTimeStamp(0.290981424095);
    msg.setSource(33013U);
    msg.setSourceEntity(75U);
    msg.setDestination(47056U);
    msg.setDestinationEntity(139U);
    msg.lat = 0.163439215822;
    msg.lon = 0.880584869179;
    msg.alt = 0.150299648622;

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
    msg.setTimeStamp(0.131228662652);
    msg.setSource(16027U);
    msg.setSourceEntity(122U);
    msg.setDestination(11111U);
    msg.setDestinationEntity(87U);
    msg.lat = 0.46390196231;
    msg.lon = 0.623561968149;
    msg.alt = 0.800159707439;

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
    msg.setTimeStamp(0.413258039866);
    msg.setSource(47800U);
    msg.setSourceEntity(134U);
    msg.setDestination(1415U);
    msg.setDestinationEntity(73U);
    msg.lat = 0.655245515426;
    msg.lon = 0.6014216756;
    msg.alt = 0.459130981732;

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
    msg.setTimeStamp(0.938619678258);
    msg.setSource(39615U);
    msg.setSourceEntity(244U);
    msg.setDestination(11807U);
    msg.setDestinationEntity(63U);
    msg.type = 248U;
    msg.id.assign("QZFPMCSILRLMTEJRSZVRFUZIQVQDUUTQLJGWHOJBJQVYXQPBCVFWVVSYAOLUIHKXWXOTFIHCRMRKVPANYUPYRQSMJYZOHFTCFRCXAUPQMKZXUIGMNYEEDSNUJORKJGXHKHWGSZOAACTAWYEKPPZ");
    IMC::ReplayControl tmp_msg_0;
    tmp_msg_0.op = 228U;
    tmp_msg_0.file.assign("IQBJAZMGBNUCTXMFFJGOQMQ");
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
    msg.setTimeStamp(0.0843055234494);
    msg.setSource(58506U);
    msg.setSourceEntity(66U);
    msg.setDestination(12135U);
    msg.setDestinationEntity(141U);
    msg.type = 138U;
    msg.id.assign("WGSPUJVYNXDZIZDBGLBTMDYRJQBTWBTNBRICEYBOOCRGODZSCMYAKMNRXVXLHNADRBSFVKAMKPWQEWJRRNFQFQZMGTHVKPUYQUPMAHWWUDNIQKKYCOEJHNGPBHGTQEJTRYYPLPICIIMFSRGLLXFUUUHKTZMOQGFECTJEXCJVMJIOWYEPZXPOVNKEEF");
    IMC::QueryEntityInfo tmp_msg_0;
    tmp_msg_0.id = 149U;
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
    msg.setTimeStamp(0.817094357575);
    msg.setSource(58525U);
    msg.setSourceEntity(239U);
    msg.setDestination(57199U);
    msg.setDestinationEntity(209U);
    msg.type = 187U;
    msg.id.assign("ANYAAYZXMENURDZWBYWOFTSQCTOAPVCWHDKGGGMLAOLNEXFKYLMIVSYRCPNRGTBUWQBTMRFSNEIUKNKIKNVFQXVLIHCERWJFOMHPRDCHPJQCZITCFPCEDZERAAGJAUWDUZIROEEMLBBVPBKHXTNZNJYSTLLSILZGUFDVQKNPJUXBQYQOTISQMDGJBFOGRWDYUIXFZDJTMVKH");
    IMC::HistoricSample tmp_msg_0;
    tmp_msg_0.sys_id = 10U;
    tmp_msg_0.priority = 57;
    tmp_msg_0.x = 18400;
    tmp_msg_0.y = 17089;
    tmp_msg_0.z = 29676;
    tmp_msg_0.t = 11067;
    IMC::HistoricData tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.base_lat = 0.805287702799;
    tmp_tmp_msg_0_0.base_lon = 0.208311712206;
    tmp_tmp_msg_0_0.base_time = 0.0645059433423;
    IMC::RemoteCommand tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.original_source = 18045U;
    tmp_tmp_tmp_msg_0_0_0.destination = 50702U;
    tmp_tmp_tmp_msg_0_0_0.timeout = 0.848455853083;
    IMC::TBRFishTag tmp_tmp_tmp_tmp_msg_0_0_0_0;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.serial_no = 3443712386U;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.unix_timestamp = 1269238187U;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.millis = 26483U;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.trans_protocol = 211U;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.trans_id = 2223318883U;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.trans_data = 58805U;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.snr = 43U;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.trans_freq = 142U;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.recv_mem_addr = 8457U;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.lat = 0.656285000381;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.lon = 0.294008419485;
    tmp_tmp_tmp_msg_0_0_0.cmd.set(tmp_tmp_tmp_tmp_msg_0_0_0_0);
    tmp_tmp_msg_0_0.data.push_back(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.sample.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.586365081501);
    msg.setSource(17927U);
    msg.setSourceEntity(157U);
    msg.setDestination(34762U);
    msg.setDestinationEntity(169U);
    msg.localname.assign("LXGMNOCQPLWIQVQBMVEPCLRKMZRBTLJEIMHUXHTWWUFSQNNTJAKDKZZSYJLOSPZBHFYXTKAAFYQBHVNMFG");

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
    msg.setTimeStamp(0.387082076766);
    msg.setSource(1958U);
    msg.setSourceEntity(89U);
    msg.setDestination(21190U);
    msg.setDestinationEntity(53U);
    msg.localname.assign("FCUIFOERLEODSMVJVBUSLGYWSBTZIVQMQAPHQJOMIORLXHWIBVYXUJRJMVDEGKSANXERBYXEQLAMQOCUDFAIPOHSGFPWIKPHBAHATQILYNEVYA");

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
    msg.setTimeStamp(0.662123277424);
    msg.setSource(4588U);
    msg.setSourceEntity(65U);
    msg.setDestination(63717U);
    msg.setDestinationEntity(47U);
    msg.localname.assign("JSYTMFJTLQALWFONGFBDBMIBQLREYWGMTCWXVLHLZJNQKZDEXGZTJXBUOPOVCPZLARPZCXRQCKUBRHUVSARDADLODTYFRAWBUMEFOKJKVKXYKSNNGIIMNKYPBFYQMASSZIMDVJWRVFMGIPVONWHLGHSO");

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
    msg.setTimeStamp(0.104063795838);
    msg.setSource(44005U);
    msg.setSourceEntity(207U);
    msg.setDestination(6069U);
    msg.setDestinationEntity(219U);
    msg.timeline.assign("CAGOYKXCULYMTXXSDFRNAHPIHDQZGJBSTWFBZBNWLROAOFCZBIHMVUGWKKWEXTHZVJPLUTQNYREFZFODGEMNOKFEUSFNQGOSURROJAUCRNDJTQWDBJAYGVLQUDMVDMBJSEAHWPJWZXFVZRLOHSDIXVPLWITEVYENMQPECIYSYMSXLVKXKIANZCFYZHZKQCPSTAIRYLTLLNASDGKWRKUHFYVCXMTIQCGVOCIHGJJBTDJPUEMQOBA");
    msg.predicate.assign("VBULCXQGROBOVSWFBHZMRUCYIBZNOLGWFRMGSOXJWRXJUIBOTHQXPHTKRGEJHCAEAMNDBYKAPHYXHIERSCMTRVMHNFAZGCOKKWTNINHYCPKLWVZIVBJVKR");
    msg.attributes.assign("VBXWFEIZWGTAOSSYRRHTGFKOECKCLNBABNOTCDUHHGMRJLDZMPTDGVXOPEZGYCIVG");

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
    msg.setTimeStamp(0.327379076284);
    msg.setSource(7U);
    msg.setSourceEntity(218U);
    msg.setDestination(45083U);
    msg.setDestinationEntity(168U);
    msg.timeline.assign("XEKWDEQBFSXWMNSGQJUNLBLDFWWVKYJSHZQVCBKCOFRYHCIPDEXGIIDTPPYTMHBMCEJUENVEVCRXASHGIOLXOZROQXWRZTQTTYCNDAOMWFCBOWYAQONLUVUDKZOUPIWKLWELHPNRRCMIJYGSQTXKFUJ");
    msg.predicate.assign("NRNPLRXWPSMMPVTWMGWHUKLSKFEBCSVGCJKIRJVFAHIQEPJDONDGUVKLTWXIOUETEDPWWJHXDXQZ");
    msg.attributes.assign("IITRDTVDVGGXNCPQFQMFOGECSYGJZTTBUUBAPKOUPTGJBWOOVQUOKGZRVQJKWZMWLWDQHXUZLRZNOSHTEGIVJMCLKMJBY");

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
    msg.setTimeStamp(0.435668313532);
    msg.setSource(41638U);
    msg.setSourceEntity(187U);
    msg.setDestination(42229U);
    msg.setDestinationEntity(49U);
    msg.timeline.assign("FGVZHZRQGUMUOYDGZSNEAFHXFXHUDEFTVVNRAZBYJIQUZXTADSORUQQQTGHYHBSKWNQKPUDZOALXPUPWNGDKEAVFJMXZWLFY");
    msg.predicate.assign("IJJIZWZAAGRQNYEWVWZHAQUTYECMCXOXBPJZFDGOBGYTKJMMGLXBLSKVPWDZOQEFRGYCIXFJCRX");
    msg.attributes.assign("ODKPZADSJZFIXIAJENKSEUFZWTMOQPUHIHDFQODFRLMNFORAVBXREBEFCWOTLTCMVEAQHXTQUGKIHSIDBJVKYXCTWSIFUTNYPJFYPEJAGCNJSWAWLAXYGXLVMCNGIIEUVHNIBYLEYFUSDFWRZUXJNMTWNCQKDEVQPKJIERKBGUPRQUVHBVGORRYCHXLZDAOYJKDGUYSCOJD");

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
    msg.setTimeStamp(0.65377995203);
    msg.setSource(33183U);
    msg.setSourceEntity(109U);
    msg.setDestination(57996U);
    msg.setDestinationEntity(187U);
    msg.command = 225U;
    msg.goal_id.assign("CUHRPWXCWBNDJWVFLRGZLBGWOEDTOLFROTBTCYQYSNBPEHLRDAVCUJKREDSHFLKUCTPDBTZRYSKIRJPCOKQQJHIJXNADPYZ");
    msg.goal_xml.assign("GUQUKKDSLQOTFVDGAVREZKWWQPGHFNXUIFQAYIPFFFJHVVFSPYWNXRSCXWJYZOCNDBIRTXKKIIGAJNZJHJSRQFEOXOEOJAUXMJVUHGLBYYYOKCYOUYIKWEQFKRZDAERXHBIHYSPCJGBPCWKVMZSELCVKPJ");

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
    msg.setTimeStamp(0.257099995875);
    msg.setSource(61570U);
    msg.setSourceEntity(244U);
    msg.setDestination(29982U);
    msg.setDestinationEntity(206U);
    msg.command = 194U;
    msg.goal_id.assign("GTCYRURTHFRJKCZVHRWJQWIEAKANUJPSDPAZWMCIOUYBSRNFGATHEMJPEOIHTUIPYONODWLMFZUYGVNSNYFJCYRGQPLPCZXLXXIBTTKSAPZEVWKTQJSADIELHMRBJHQGFDOGZUMOAESCVZLGKAKTMAIPVBVQZRSRHIXECYTXSXGPXQUUSMQIGLVUDDWLWJDF");
    msg.goal_xml.assign("SPHAUCEIAKOYZEQTVGKFBWCGKOLHQKVRUEQMJSHZKJRNUZO");

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
    msg.setTimeStamp(0.133300723763);
    msg.setSource(46171U);
    msg.setSourceEntity(229U);
    msg.setDestination(30407U);
    msg.setDestinationEntity(70U);
    msg.command = 184U;
    msg.goal_id.assign("JVVFWKLCLJAXAFBDPCLTRVDCOVTZBJUMGMZLBLWKBGPCDOCXXAWNAIRASAODOOKMQZNJRIEMHWZJBXHFTVEHIYTHCWGI");
    msg.goal_xml.assign("QKVZMATAUKEGAFMODCMYVWJBMNFDWTFTYWPXGJSCDPIMXZKUQBZSASMRNLKSHSFADKDJTTUGRBTZOLBYJAMXSZWJIUOXUPLORJBQJSFCQEBBDDXIWHKPNOZEQNURVHTQLPCEZBORCXHRPCHYQXJPIURYGXCGZGBEDIFYAWYVJTWLTEOQOELIYUPNUVKQHOGRVHENFLVPDCXWEJMONKNCZTUIBLQMFGVXIEDWGWHHKRHFSCGYINR");

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
    msg.setTimeStamp(0.776551066072);
    msg.setSource(30627U);
    msg.setSourceEntity(19U);
    msg.setDestination(62787U);
    msg.setDestinationEntity(61U);
    msg.op = 8U;
    msg.goal_id.assign("AYBLDVFFIYTVOYSMBHHLEJCNXSKVKSZPULIRMQFPLOHSTRYWQXWDUCNDWWAJTXBUZPEMWQGDDISKJQTFKTOYTUAKRKOVIACNSCIQEXY");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("EJAPXYIKDRPULAWXONEZTYIFGDYJAAGMGNVGKFBOMJQXGHVHFPLVIDRE");
    tmp_msg_0.predicate.assign("ERCKXOZJAMNXKEWJQYMCSOQFNFIIQIEHAPKFXRWJCKPGPDLYIWMTQBUWDBHODLETWNAOHHGKEGIFSAXYQWCUGFPLRZHWLIFBEPSTKJDCSKVSUQMZMDQMBNZLYTAZQCGACRFBMMHCELQRHWOIBSTGEGGSDIRJLJBFTLOTHTEKJV");
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
    msg.setTimeStamp(0.706713838199);
    msg.setSource(16235U);
    msg.setSourceEntity(202U);
    msg.setDestination(17078U);
    msg.setDestinationEntity(110U);
    msg.op = 113U;
    msg.goal_id.assign("KVUNRGATGDBMIAKQBZRJNSSMKRVTMGNXNQXRCCLNCLROZEEUETLASFVVDJDPAGOPUXPMPOX");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("SCPFJNLEHUDHOUQWJOHZGQJLNSFWKSWMQECANJTIAUISFMNCRUUGXAZSWYGZVNCDALVHRAVVCZTDHBGXIESFYFUJQOVWBVNPPAJXLCYJDHARXEMTRHKJBPXNZQZHRGXGDXDORKXHQOYLTY");
    tmp_msg_0.predicate.assign("YRJUODKCHFVFCANQKLMKJJIUTLAZESULKIFRANTQIPJGYYFMTNHAVKRQLLUXYCTNUVGRZPGPKCDEFTEIMETZLHRFSDLZRSUHGPQVEJCPQNQRXNMPWOWMWENOBGEVIFVLAZFUOZEHXXIMJNXDTTJSYIDSKHJSOTTBFWKBHMMCYNXJAZGMVRSJIIWDZ");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("SGVRTYASIWNJWLPGLSEKRSWYITTXNCBDKEENHEWQMKAXKXKLIVJXXRUVYIYZSZJLFWZTFYMFUDVLJJGCIIHCXDZCLVHOMHGIRREZATVIQFUPBRKYFAODBNAAWTFVHOORLXZNGSVQABHQPCLVUIHYCQUCZMBDOOJMQETWGMRMDFLOSJWJNXUEGWOXRZPUDISSCBOZZYFWPBLDEKCHFGQKKKDPTCGQREFAHUNNPEXQNTVPJMPDTPJHMMNBAUYABQ");
    tmp_tmp_msg_0_0.attr_type = 180U;
    tmp_tmp_msg_0_0.min.assign("ORWEUMDWJYGLG");
    tmp_tmp_msg_0_0.max.assign("WKABXDOHFUJGULTEEVFLYTCDIMKPSVXZZECKNZMHXCVHEGTKOBLIWAFZQDIBAPXAWPJWUNHEFKNGRUSCENFRCZDNRBYTBJYZROOCBAMRQSOQRVVNDYBCPPPFWYWKYHQXLFPVZUGTFDQLONSDSADKIYYBIZTVUDUQZMCAPSAQD");
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
    msg.setTimeStamp(0.263980264211);
    msg.setSource(15624U);
    msg.setSourceEntity(131U);
    msg.setDestination(62627U);
    msg.setDestinationEntity(22U);
    msg.op = 56U;
    msg.goal_id.assign("SQVKLOQSRFOAQHXXXDUCMTSLDHNAYZQRGATMANCNTEDURMKBNIVLPDFHRIWVEIYDGUSCXAHZYRYGAAQQGJZOFZXZOPFFBCTUGMUARPTEIOUHWVHQWKBWDIKJISROCXIHYYPWYTPAOFTYKNELJXKZYVPMUMGCRWFOPNHMPJXBBEZXVM");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("IQDUMXCNQRSHQVDRPIJZCLZEKEBJJGPZTTREZKMWRMSOKHVKPNFSZSCDTCHXRNGTBCCNNWDCEGLHUHVDSUXWKPGQEFLVAFHXSVLBDGQJPIAVOGSAJAKUQGTNIATYWDLRYPUODGHIPOMIZIZPOMRU");
    tmp_msg_0.predicate.assign("AYXOEJJMCPIANYOJQIGODZWYWVFQMFHUIPMWPERBQNHNQLKASBFTKLMPMXPGWIMSPNAJNBLSBGSRJDYOASXIMYWUIDPKHEUDUVYCTEDIHFJGMUIRRFLQVOWZDKORETKAVXTTXZUBBLCVZIZG");
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
    msg.setTimeStamp(0.615031690068);
    msg.setSource(19325U);
    msg.setSourceEntity(223U);
    msg.setDestination(35713U);
    msg.setDestinationEntity(67U);
    msg.name.assign("IHJDDGMCOAKZFUQBSTJZBHTWYAIQBNQRECYNSLQQVWFPLOWGVJJVIJERUEBNCOUTMMDRXOWPUCPNMPHINCVIXFIHFFBZUVIASGQGTPTFTFJSCAOYGAYZABKOKXZMGCDMXIODKDXWEKCKWFYELCUJTUNNBYQXBSUNDTXAGIHMRWLZKWSFPFRKGYLBEMJPYILGRHCRALSVRYHGUVNSMUSKJTEPVXLQOVEHAZRKDHETAMW");
    msg.attr_type = 14U;
    msg.min.assign("VSFKVDUEKVMPXISIAECUHAZTEWGAKGKMTFQCDGMJDBLDZNRGHEEMOKXOSYYWNJQHY");
    msg.max.assign("TTAFSEFOYWRTYOUWRNYEMZKFXVTAABYLBRARMTIUOQHUOYN");

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
    msg.setTimeStamp(0.490747870467);
    msg.setSource(9991U);
    msg.setSourceEntity(253U);
    msg.setDestination(22495U);
    msg.setDestinationEntity(133U);
    msg.name.assign("FXHWQEWDWELKUUDHFKXIRTXPTSQAEZSMIRABBAAEQQBLFRZOFCI");
    msg.attr_type = 235U;
    msg.min.assign("ODXMDFWILLWJDCKEUEJLHGVVPQTAMUWJCWTYLCZOHZERHOXZTWWMRLEHIPVYFQTJSJZXBGPYYGOFZIXOWFNSSARIRMLGUZAYEUX");
    msg.max.assign("DYVWHTZUUPKBPJUJLFHDMMSOEWZJFESEDYCLYVOIHDFRMOLNWWBLIKVTYWOKUKQSOIZRBJTBCLFFBRPHIJMGBVGUSTNJPVOMEIHCQTS");

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
    msg.setTimeStamp(0.361515832427);
    msg.setSource(12541U);
    msg.setSourceEntity(205U);
    msg.setDestination(26846U);
    msg.setDestinationEntity(35U);
    msg.name.assign("CZHTCGXKQYZIGF");
    msg.attr_type = 155U;
    msg.min.assign("UQHWXCVYCOEMPPIWBCOSIOAKVGXOURSNWQLGPWLDBFCYZGSXEKYUGBGIHZZNEVU");
    msg.max.assign("WEPQONKVPHJVZIKFSIOQTMIREUZBRPNGFDTNVAOTSPETIHXCGGPWMKUCYKFYLDLSVOZXEQUAVVZPLJFTUAOJDCXWVKSXXSJIDMCHJJYSVLCLVXHWMLXTNXCIFNPZYTXTEBHBANFSBUQMN");

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
    msg.setTimeStamp(0.525073002703);
    msg.setSource(43256U);
    msg.setSourceEntity(205U);
    msg.setDestination(10278U);
    msg.setDestinationEntity(216U);
    msg.timeline.assign("PUYTRICKEKDAFWSLJJZRMTSTRJVYNWEQPHWMVNNFXWRDUSJRKAWZZLUCLCGJZRKQKFUEOXIPZKIJMDAIGMUHNUHDVASWHWROGASBZGSPOQZHAVYNQYJVSXOSERFLDYEDKCKXQFXHYCCOBEMANUUPOXBJYLXPCOEDZQFPXTJZPJWNQBGGFCXTWVCGIN");
    msg.predicate.assign("RWRHEZBWNUKXOLAFOOLUGDSTHVSBUQWEHMUXSQGDMQELQASCIWTNWTXSYBMCWIUKLWHMVWDERVPAYYNQYCSMKIJBJCQFOAZPGDMGURCYDZDCORZZCJBFICEYTMTXOEUDKQLHRFXJHRZYMCVIMVGLVNQBFAKNDKPPKDILEKNUTSJRZBBC");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("KZUFHPVBCOKTPJHCFVBSDXJEWTBOXLRTUFWBNGTJAPUDFHKOQZDGRXVWJERNSFQFSIRMAGAERSCEILDJBXDNYTRGVZICNUSWGKEMLDMQWNJDSVVHCQEXAHEMTQLZCFLNY");
    tmp_msg_0.attr_type = 222U;
    tmp_msg_0.min.assign("KJPVSUNBVQNQUMRNKYMSWSEXQYVJKDYWJRFTRRCZXXKMEBNREATCPJUHGATZQNKTHAFFOLOKCXFEWWECLXHIIIHWZAPMDQINUGCMFGO");
    tmp_msg_0.max.assign("XFQCMKKMKZEMOVLLYYVAXDQXKDLNHRVCRJEPHCVBSTQNFHGSZDBNUWQUCQERGNKSJTSSLBPAJEIJWRXLEVAIMDO");
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
    msg.setTimeStamp(0.640512548238);
    msg.setSource(32763U);
    msg.setSourceEntity(184U);
    msg.setDestination(15481U);
    msg.setDestinationEntity(200U);
    msg.timeline.assign("SAZWPBALRLNYIOVLQRWZSGHDVMQOCZTLGTJIVXIZWGPUXFEJH");
    msg.predicate.assign("HCBIYUFUVPVPULWOJOWTKFBAIVXUQAVYLTQFIMSJBNITJAEKLRRALYRZCCVTVKARMXPRIHMKEDZZ");

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
    msg.setTimeStamp(0.649536575756);
    msg.setSource(24862U);
    msg.setSourceEntity(220U);
    msg.setDestination(14235U);
    msg.setDestinationEntity(251U);
    msg.timeline.assign("TCVODHFTTBGSRCOOUMNWHRUZQGMYYUBICYLOTCDEMCLJQHFAFVISZPPGSWHDRKXHSIIERQSAXHBCSBUHOHNIGAXRWKIUMQKGJVDMLMTXFTKFPZDCEGDEMXDWPOYHPVULXPRSBWGXAJYVEPCWYSFEOOILJIVGNBNEX");
    msg.predicate.assign("EJWQYSBARMGIEMTOLNRZCFDIGNNWECOKDBDSFHHZKUYOIEWWMLIWJEOERYJPAXRTNDIOGZQSLDLBQUKSDXHQXXSHQUXFIIKUTF");

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
    msg.setTimeStamp(0.404997044298);
    msg.setSource(32928U);
    msg.setSourceEntity(222U);
    msg.setDestination(20840U);
    msg.setDestinationEntity(101U);
    msg.reactor.assign("KCZTIRKVZRLVHSQROZCUZURXASBQCNGWIHKYFIYQMQGFIAQOWQJHBJDEUMANSXHFXJIPETYJSOLGLJLBWGMBIKYLXLPUUVZGXYCWJMHYWLUAZXRZIDRQEPPGBETJNBRBDFFMUNVNVFGLSHEEKHEHKFYSSVNZDOCRPWYXZLMOERTNUITQEZGVMTSTHKNMXXJJDXGWFOTCRTKIWADTJPDAOUPVGAPADIFONLWAP");

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
    msg.setTimeStamp(0.569081499341);
    msg.setSource(58974U);
    msg.setSourceEntity(17U);
    msg.setDestination(37025U);
    msg.setDestinationEntity(190U);
    msg.reactor.assign("NKJKZLEYHNGSEFIRXECWRQCFQALNUJZVXQARPRCMNOFBPCBEWFDGDANDIA");

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
    msg.setTimeStamp(0.652766384073);
    msg.setSource(41402U);
    msg.setSourceEntity(156U);
    msg.setDestination(3332U);
    msg.setDestinationEntity(218U);
    msg.reactor.assign("NYDXYNPUTNYOIIOULTPCWBJJFIFCPDHWWCCODXD");

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
    msg.setTimeStamp(0.794681091996);
    msg.setSource(40327U);
    msg.setSourceEntity(140U);
    msg.setDestination(57103U);
    msg.setDestinationEntity(205U);
    msg.topic.assign("HHOQBAEBEJWDQWVFNPYFSGOOGYVXJRJCWHFHEKEAZDNLARQAXAEGWTFIDNYGWMSJPWQIZXFBFIAOEFYYSKMGKDIVVQZUPRBCXLUWMLSCJAWVOXROIKUSCCGNCVQJPJNSPZAANCZEDTPLTTZGD");
    msg.data.assign("GSIDOGWPPIQUUGHQOKZABVQDHIVJNRVMSQLSLPBGFVEMPCYFKHGZPSXYABSVEKNCUBUNFGNPARRZTWSZCYDWMEWJTYCLOOKHJKXUXZFMVZUIZPJNWFWUAIFJIJVRTLJQDHHWWCSJOQDTIFMOATK");

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
    msg.setTimeStamp(0.160995065918);
    msg.setSource(55854U);
    msg.setSourceEntity(84U);
    msg.setDestination(23702U);
    msg.setDestinationEntity(9U);
    msg.topic.assign("ARITQXFGGILSJALYPEXNMCGEFWVWMKQKBVPDUOZOEIAHJZIPWZKLYUIFKW");
    msg.data.assign("NZTZOUGHYAXUZOWXNROFJSVSCFVTUJIPYNDFLLSEJXMOLBPYZDWNGFESFJAQNVSGWIBTLZUTIWKORMNEEQJUDLVYRDXPCTDREAPPKDSXCQACAHBIBRTSYAEBXCIDBVJJFCWPGQRBSWNVHKLTCMZKQHIIFHFMBYGGMNRXDOXKJMXMUQJHACITEAWEYHWXNHSOZPQPELEBSQYLMQGUDUOIPIMRAOTLVYNVMVKGRKG");

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
    msg.setTimeStamp(0.741750771908);
    msg.setSource(58557U);
    msg.setSourceEntity(160U);
    msg.setDestination(36089U);
    msg.setDestinationEntity(36U);
    msg.topic.assign("QDOGFPLXZMCJFOAMVUDGMGQGRKOJAFDZPPXDWFRYPAODJRBDKTXWQKSZULBZETQKYQYVCKKMRDAKVYWTG");
    msg.data.assign("XOKZZGZQJJALSSTNIRSLVNDYOTAFQSCGUKOSSJWQZHFXINDTIUTSWAMNPOXXGRBDEXOHVUZCROUZKERGMZERLXGHPPVVLGOUYHGYIEDVFGMXCCPAARTTJAYIBHRMGXNKVHWUYKYLSBLYFPQIMTCDCAIEEMDMQJOGKXUKBPQPWZCYJHFQKNTVYEALZZTHNRMQRINTSUVPBIJWYCWDUWNVQFBPHFADNEDBBFJOIBWK");

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
    msg.setTimeStamp(0.500190868003);
    msg.setSource(65243U);
    msg.setSourceEntity(24U);
    msg.setDestination(30697U);
    msg.setDestinationEntity(48U);
    msg.frameid = 232U;
    const char tmp_msg_0[] = {24, 58, 25, 52, 77, 35, -86, -11, 73, -19, 78, 109, 42, -62, -40, -1, -101, 25, -102, -7, -80, -74, -66, -120, -61, -62, -13, -68, 107, 46, 27, -58};
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
    msg.setTimeStamp(0.751523867989);
    msg.setSource(16299U);
    msg.setSourceEntity(254U);
    msg.setDestination(11555U);
    msg.setDestinationEntity(80U);
    msg.frameid = 42U;
    const char tmp_msg_0[] = {-15, -37, 80, 59, -22, 2, -101, 111, -9, -126, -29, 31, 74, -110, -38, -42, -72, -52, 95, -128, 94, -117, -126, 10, -53, 28, -26, 4, -68, -81, 70, -76, 125, -31, -34, -109, 15, 114, -83, -74, 2, -39, 30, 48, -12, 31, 37, 47, 38, 15, 87, -74, -112, 113, -35, 1, 53, 123, 34, 60, -87, 19, 86, 86, -3, 101, -9, 118, 36, -116, -62, 43, 67, 80, 10, -17, 34, -48, 5, -98, -86, 1, -23, 84, 74, 92, -25, -69, 86, -16, -38};
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
    msg.setTimeStamp(0.746747305475);
    msg.setSource(14278U);
    msg.setSourceEntity(31U);
    msg.setDestination(6823U);
    msg.setDestinationEntity(1U);
    msg.frameid = 179U;
    const char tmp_msg_0[] = {72, -9, -128, 37, 55, 17, 1, 21, -97, -109, 61, 78, -16, -120, 33, 116, -55, 79, 44, 63, -45, -46, 1, 36, 63, -12, 87, 35, -81, 88, 56, -27, 47, 69, -112, -42, -23, 106, -22, 67, -53, -100, 97, 6, 20, 14, -128, 73, -52, 117, -46, 87, -99, -121, 22, 11, -22, 76, 77, -80, 35, -12, -36, -107, -53, -63, -94, -68, 64, -27, -101, 41, 15, -34, 97, -124, -90, -9, 70, 103, -14, -71, -47, 55, 14, -116, 119, 42, -102, 15, 112, 50, -92, 26, -91, 105, -7, 71, -121, 94, -17, 73, 17, 32, -47, 55, -112, 100, -93, 38, -121, -30, -57, -39, 25, 91, 117, -121, -17, 36, -46, -92, -69, 104, 59, 119, -100, 67, 120, 126, 117, 54, -13, -2, 66, -35, -32, -10, 65};
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
    msg.setTimeStamp(0.222178391378);
    msg.setSource(6169U);
    msg.setSourceEntity(154U);
    msg.setDestination(35456U);
    msg.setDestinationEntity(128U);
    msg.fps = 92U;
    msg.quality = 41U;
    msg.reps = 72U;
    msg.tsize = 164U;

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
    msg.setTimeStamp(0.171131458809);
    msg.setSource(37613U);
    msg.setSourceEntity(211U);
    msg.setDestination(56070U);
    msg.setDestinationEntity(78U);
    msg.fps = 61U;
    msg.quality = 174U;
    msg.reps = 176U;
    msg.tsize = 16U;

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
    msg.setTimeStamp(0.43328569276);
    msg.setSource(62331U);
    msg.setSourceEntity(7U);
    msg.setDestination(514U);
    msg.setDestinationEntity(129U);
    msg.fps = 85U;
    msg.quality = 249U;
    msg.reps = 197U;
    msg.tsize = 117U;

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
    msg.setTimeStamp(0.638967143328);
    msg.setSource(39310U);
    msg.setSourceEntity(19U);
    msg.setDestination(24925U);
    msg.setDestinationEntity(104U);
    msg.lat = 0.462918075083;
    msg.lon = 0.499509855166;
    msg.depth = 8U;
    msg.speed = 0.141613102921;
    msg.psi = 0.144788408124;

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
    msg.setTimeStamp(0.718881625112);
    msg.setSource(7048U);
    msg.setSourceEntity(183U);
    msg.setDestination(12223U);
    msg.setDestinationEntity(52U);
    msg.lat = 0.686869400726;
    msg.lon = 0.404583014904;
    msg.depth = 160U;
    msg.speed = 0.535085945873;
    msg.psi = 0.756785750464;

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
    msg.setTimeStamp(0.0396833795938);
    msg.setSource(37337U);
    msg.setSourceEntity(232U);
    msg.setDestination(51644U);
    msg.setDestinationEntity(68U);
    msg.lat = 0.797399454234;
    msg.lon = 0.132854793671;
    msg.depth = 63U;
    msg.speed = 0.876235560232;
    msg.psi = 0.37275348318;

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
    msg.setTimeStamp(0.680771633847);
    msg.setSource(45293U);
    msg.setSourceEntity(55U);
    msg.setDestination(25935U);
    msg.setDestinationEntity(211U);
    msg.label.assign("CSSRFUMWWJWZATB");
    msg.lat = 0.973979701262;
    msg.lon = 0.973122775213;
    msg.z = 0.682599491546;
    msg.z_units = 36U;
    msg.cog = 0.926394854575;
    msg.sog = 0.743764408226;

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
    msg.setTimeStamp(0.530833197288);
    msg.setSource(55530U);
    msg.setSourceEntity(108U);
    msg.setDestination(14341U);
    msg.setDestinationEntity(33U);
    msg.label.assign("JBITCOLUIHRRAPOKRHBGURVDXSIGTMOCOOILFWJZVYQQEQIBPTMEDRAYZJEKXGRKPTETSONHKDZFYBCVMIUBJPHYKMXIOZWCABCBOWDVZPYWTGHXCMRSAPHKDOAWDMVZNKNSUSLNZFQSSCGQJGBFLIWKEPVAUFNTWJIGETZDEWXMNCLTSFAAJNUFXMREPMBIERQLLPGMHDFDWZYJSXGAYQPLUUUJNXBXVGHDFXFSJQVHLTOZKNCYQQVKWNHYUC");
    msg.lat = 0.72057193268;
    msg.lon = 0.584851063777;
    msg.z = 0.499988806544;
    msg.z_units = 102U;
    msg.cog = 0.625027350044;
    msg.sog = 0.29702424342;

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
    msg.setTimeStamp(0.0200691997582);
    msg.setSource(48904U);
    msg.setSourceEntity(220U);
    msg.setDestination(28132U);
    msg.setDestinationEntity(252U);
    msg.label.assign("QXQUDXTPCMWXYCLHVEUUFROTNJS");
    msg.lat = 0.751109110764;
    msg.lon = 0.919869812436;
    msg.z = 0.722428236181;
    msg.z_units = 230U;
    msg.cog = 0.743376167501;
    msg.sog = 0.22096126127;

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
    msg.setTimeStamp(0.234681389199);
    msg.setSource(46134U);
    msg.setSourceEntity(201U);
    msg.setDestination(52589U);
    msg.setDestinationEntity(232U);
    msg.name.assign("APMDPTZQKWJNFJVRSHESKBQFKCDKSHBUCLIGUOOKZRXGNBBWXBNWFYICYJVRYTYHHKXEPQHRQUXTEZBXWYSZTFKTBOEREMPMZJWDRHGXDRASLPFCLIDGGTCODRAAVHNZD");
    msg.value.assign("DXVLRCAHNXXZUWLXYNAPPEEQ");

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
    msg.setTimeStamp(0.768287237526);
    msg.setSource(32887U);
    msg.setSourceEntity(19U);
    msg.setDestination(40578U);
    msg.setDestinationEntity(116U);
    msg.name.assign("FMQAEIZFOWSSCDNNZLLATULWOGRTYALVLWENGGYWJLCBA");
    msg.value.assign("APOATRJUVIWIKEZSDJDSDZINOGYHIMBLGZWLNBCTEYREDRGLLCZPVAMEOMEBOHCPYBQAELATUIZWFNURIWGFJCHBDMTGSTFUKBDQCYNRGHYDQGSPBIXEQNIXJVHNFJNMRWPZQVVRKXKDUZCKRPXKFQTSYCZMWMKXBXRNWGEQGILWMJKHVUQAEVYOHFT");

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
    msg.setTimeStamp(0.551327323619);
    msg.setSource(39012U);
    msg.setSourceEntity(143U);
    msg.setDestination(35106U);
    msg.setDestinationEntity(186U);
    msg.name.assign("VUAIDGERXCQMXYAKHRAPHMCTOMXPWHOXNMWGPUOBKRIIONHDPJCHHTCUZGAZXEOWVCIBXHHQDXTUAOEYPNJDJXIXZZQSYKNLVCLYKOOGBYMBNIYFSSUKBPBTBFGVZAYSBNNBUQ");
    msg.value.assign("NIXJSISMOJKASJYVT");

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
    msg.setTimeStamp(0.929519532372);
    msg.setSource(5995U);
    msg.setSourceEntity(112U);
    msg.setDestination(45827U);
    msg.setDestinationEntity(72U);
    msg.name.assign("HFLKPHGZODQMLOBQVPZWRIYIPYBUAWULVDFPFMWOQNQUJHLDCGSRRNKADOHBYTDJSHRBUUOAPWFSBAVQVRCRILZCVEZYCFLEZLNSUQOMYKWZMMMYIMIKAIYSAVDDWOVXIZXRXUPRZUNBOHVCEJPRAEHNJQFHCBSXC");

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
    msg.setTimeStamp(0.421245745447);
    msg.setSource(3334U);
    msg.setSourceEntity(194U);
    msg.setDestination(57723U);
    msg.setDestinationEntity(44U);
    msg.name.assign("ALMBPYHIIEEDRKNZJXOVRKJYAQBWAGFXLEVPJSISBLIFAQMHBSNLADKF");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("LHSOPVEQJQJLEUNZJZTRWDOHACBYLBYNVXUKIEWOGVSQGURDNSMPMQUVNMMGZZZHSHYXVUYRLOIBXZDVQSEXUYLZXNIVPWKLBBTUEOUKQDMCIAGANMNLYIYTOHEJKRFEMFTJWPPMQWTLJTIEKJKZCTVPKTBDDTBJADIXOFCXIPXTDKRGDASFXFBFSZMRFRSJARNB");
    tmp_msg_0.value.assign("MWBBVOQBGDIVLIEPWXWWHOGXNKUZYJLZVHAYDNOAUPTRFMAZDJLBAMGMXQHXSIVWSRRHFSQLLOVZJRABFYTJOZCGVLDBJHMUEOTTUFGQNFGUOXZNPUBWVHKXLMPCLQKKSEKKVNDXKVUAQWFFBJDEIYUTYBRMCHEBFZLEMRWYQSNMYXFHKIAGIDJKCKNUZCPYPOGSWCACZRHRPNSYTOOTGEISHAJTJCNEXFWTLQPZPIE");
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
    msg.setTimeStamp(0.15595887144);
    msg.setSource(5684U);
    msg.setSourceEntity(211U);
    msg.setDestination(50322U);
    msg.setDestinationEntity(101U);
    msg.name.assign("LSYKDMRASNYURBVQNTMTNVBLNPWSRWAVDDMRNFSATRCIWTZSOPMJNPEYQXBKXPIUBIOIVBZMXGCPUXWHZLRZJSCILYNDJFGDHXQY");

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
    msg.setTimeStamp(0.239795799554);
    msg.setSource(65120U);
    msg.setSourceEntity(187U);
    msg.setDestination(46623U);
    msg.setDestinationEntity(242U);
    msg.name.assign("LQZLEHMKFEEITOZXSQPNBJMZMYTBAXPKFVLW");
    msg.visibility.assign("WJAZNWMRUWSEMXEDSQC");
    msg.scope.assign("FZZEIVWDVAJTDLDAPJTXXFVBDKCNVVKFRHTBIRHAFJMROGMKWQOWHUWGHUKSLKSJLGNHWPNJXQXTNBMRTLGDAQLIGCNUHROSEXWYPMSEZUIZESPPKSHOCBTWXJXOUAJZQDYDOGYPNCYXKPEQRPVDNOFIELBBGQMZZVRPAGUYZTWVJOFAKFIELIACSQLGDBOFRBOVCNYEJQ");

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
    msg.setTimeStamp(0.976420530996);
    msg.setSource(52842U);
    msg.setSourceEntity(149U);
    msg.setDestination(29664U);
    msg.setDestinationEntity(227U);
    msg.name.assign("UIBAPNUHMWKJFQZIPAKGDWZVRUCGUMQXEPJCCWDXLXTFONZAQKTHDGQNUMGPIGLRSJUZCSNJQMZLYMBRKOPCDCBYRPQOBDCKISTREXUXNVGKMHSKVNCLHTXWGIUOCBVFYOMKTAJFFZCTEWSBZENIQMTMVKXGBVRARWZTD");
    msg.visibility.assign("BFQVTRLZHTVMSMQMAQDHOEFOALOBGNOMSNMWHUXGEPSJBJOHHJJPSAKBCQPGCDMVTTGC");
    msg.scope.assign("NLLHREASHTGYYNJPSPIHLIOSZBIMVELMZNZUAUOWSXQXAIFAFIWTNRZZMQXAKYCRLJRSHHQTQCVAFEDUEEFFBAXJSXZJUNM");

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
    msg.setTimeStamp(0.212925931196);
    msg.setSource(43280U);
    msg.setSourceEntity(88U);
    msg.setDestination(31379U);
    msg.setDestinationEntity(159U);
    msg.name.assign("JBGMEDSCNCZXTEADYZTRMVAULMLYZSONXOURLNIQBGWBXFJWNAGLWGYFIKTNGVVEAJUVTXTLTVBQHMSFEIQOBXKOHYSUIJMXCZPQYSKMIFIACPYRNFFRVQVVZBUHTPUOXDKOCYDJLBKXCILODPNSESHHQPEZYLOFZRUSGHPEQBCNDGERXFSWWMJB");
    msg.visibility.assign("BLMNVKWQTKON");
    msg.scope.assign("KZXKXFPOIUWAPPGCDZNNEHMTBBCBIRAFLMEQMNMHLRLUWJOYDJNGYT");

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
    msg.setTimeStamp(0.660539240711);
    msg.setSource(27835U);
    msg.setSourceEntity(33U);
    msg.setDestination(8711U);
    msg.setDestinationEntity(47U);
    msg.name.assign("ILSLPBLAFWKJMVOPRISIWCLQZTQXONFDIYAVQVPYWUMMLXAUCWUTBOJHWFJRGPYZUXJAJOIBQNEBHCNBRBDQIKJMLXFTSEEQJZUTHGHMYUPNHXSTYMGFDDPKVTNXHBYKHRQVDMHSXTEBOAPZPUGUENRKPGGNNXVVCZUYYQHVWGSCYGLRMCBOTJFAIDXDAJOEYLNGKVDTM");

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
    msg.setTimeStamp(0.295735857567);
    msg.setSource(47706U);
    msg.setSourceEntity(151U);
    msg.setDestination(13236U);
    msg.setDestinationEntity(76U);
    msg.name.assign("ATXEFTOMWYIWRZHDMQGDGBPQURWYJJCXOKKWEVNAOTDFMBCGFIZLVZHCAPHCBXKBWUFWSJZIMNHUETLBVPRFTMDSRAYJQVAOZXPQCZAQJMTDLUXEPQIFAIYLEODQKYVCTOWRAJUNNYHBITXIFOJUREJSEKBOFZAGZBGSGMSWPTLSYFJZYSCEROPPSWUVGHGRDVKKSDKUTNHRX");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("YOSYJHJTDISBDXBHIGOKXZZDPSOLHIAJEADTWQPMMTAJGROGNSTTMKCBVQPFWBRFJLMMOQFCWJAOOVXZEAGMURRWKCFORTZWHKNCFZNQSVRHICPUHVVPVQECGWHJBWSWLNDXPRMVLFNUMEPNBZJVUJXYGDGYBTYYXUUZLHWEFQILKEXDL");
    tmp_msg_0.value.assign("TMPHJAUHQQDMZKAXKPUP");
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
    msg.setTimeStamp(0.295555602104);
    msg.setSource(8956U);
    msg.setSourceEntity(126U);
    msg.setDestination(2803U);
    msg.setDestinationEntity(85U);
    msg.name.assign("RXWNNNNOFGKQOMGWGJOYRYGWZBSWIAMVYZDXDPAETHIOFMLMHYHYPXYYSXAVVWVADJKLHSQMGBTRVTWPZLMDWFJJWDIUVGQTUJAQRCUYTBQCCALHDSKFGOZUDBTLQSPIGRUXSKVAPKNPWNCCHJNCFOJYQMRFBYQUDLPOXKPSZBMEJZPKIREILWRZZVXNQCKXCFBJHZIILBNNOEEUGSDGAAFT");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("CLJQYGHCOVXRYGSEKSAACISUBQBJVSPESHOEIDTUSGBIRNYTTZRBMKPYWZHKOZMBQDHYAATCBIAQQWTSKUQEGFYMNXONZVMRWBHGRTAPOELIDINLLYVWNMHZVTPHVDRXFWECFFRJELEOIPYGWXRDDCZNJKEIWCJCQZUNFMGHDESJTXUZOUGHLGDDJZQZRWFVPLXPBYUOANFTWJJQAHDACOMKQFKMXXKKLUMSNALIBXWFPVBM");
    tmp_msg_0.value.assign("JPCYKPYUHSNAIZEBURODUAZBCXKCBMYPEFUJYVNBPNOCDGVFHJARILIRKLMUFQIFTEYWHAGSJOGRPAQEWZOVHSQTXSSGVONXWNDWEJJDJHXLTINCPEOIGDYTXHGRSILZXEKWNOQFHMKDFBQZOPFFMUAATGZYTCKJPJPCIDOLKGSN");
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
    msg.setTimeStamp(0.904482053342);
    msg.setSource(60937U);
    msg.setSourceEntity(3U);
    msg.setDestination(20842U);
    msg.setDestinationEntity(22U);
    msg.name.assign("BRHZSRWAEMFKXNVKQMQXBYGKGGBWSMCICUMBMTENSCXUNGHOUAFOYKBVZTYFUNTJISCADBMHJSRXGIFLYVAPYKDZZR");

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
    msg.setTimeStamp(0.227386708942);
    msg.setSource(9184U);
    msg.setSourceEntity(67U);
    msg.setDestination(17373U);
    msg.setDestinationEntity(238U);
    msg.name.assign("XLDKKBJTKKFMCSHRIPEFDAVTZRBPQWGGUSRHLSRLYGEFZINTFVNYCUBONMAKOVUQGIAKXQXNUJWGQKEMVYMBJNVOSGFCMZLCTJYAWNLTTUCBXDCLBKPVZHUBFZIRLAZVZQDCEAWWFYGDWEMPGMPWJNHJRRQXPZAVEKIDYCUBOXFWNMUQWOIZISXPLSHHJMVKWXYOPUSCERYI");

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
    msg.setTimeStamp(0.775946455);
    msg.setSource(18012U);
    msg.setSourceEntity(186U);
    msg.setDestination(51154U);
    msg.setDestinationEntity(28U);
    msg.name.assign("TJFVTQSDXSFRFQCBNSAK");

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
    msg.setTimeStamp(0.501400391701);
    msg.setSource(3228U);
    msg.setSourceEntity(146U);
    msg.setDestination(63117U);
    msg.setDestinationEntity(166U);
    msg.timeout = 1896121275U;

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
    msg.setTimeStamp(0.168099793246);
    msg.setSource(62058U);
    msg.setSourceEntity(135U);
    msg.setDestination(7988U);
    msg.setDestinationEntity(173U);
    msg.timeout = 295461905U;

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
    msg.setTimeStamp(0.810671150589);
    msg.setSource(43331U);
    msg.setSourceEntity(161U);
    msg.setDestination(20871U);
    msg.setDestinationEntity(26U);
    msg.timeout = 501289636U;

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
    msg.setTimeStamp(0.459399630933);
    msg.setSource(44240U);
    msg.setSourceEntity(10U);
    msg.setDestination(61422U);
    msg.setDestinationEntity(27U);
    msg.sessid = 3114309964U;

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
    msg.setTimeStamp(0.977825982676);
    msg.setSource(55240U);
    msg.setSourceEntity(7U);
    msg.setDestination(20964U);
    msg.setDestinationEntity(71U);
    msg.sessid = 573416846U;

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
    msg.setTimeStamp(0.017647172883);
    msg.setSource(12883U);
    msg.setSourceEntity(244U);
    msg.setDestination(27555U);
    msg.setDestinationEntity(6U);
    msg.sessid = 1175932617U;

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
    msg.setTimeStamp(0.249291452603);
    msg.setSource(45165U);
    msg.setSourceEntity(55U);
    msg.setDestination(22047U);
    msg.setDestinationEntity(147U);
    msg.sessid = 4197775919U;
    msg.messages.assign("JXDTHUIIUDWDHVTGWAKOGRUBJLNAAHPIHFOJEAISSLHAXAKUPXBVJXRE");

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
    msg.setTimeStamp(0.360584920089);
    msg.setSource(4033U);
    msg.setSourceEntity(11U);
    msg.setDestination(32301U);
    msg.setDestinationEntity(104U);
    msg.sessid = 318544854U;
    msg.messages.assign("XAWGPJHFPYEFLAKCFKTLJVWMQJYYSILZZQBRTKZVOXNXOPQLSO");

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
    msg.setTimeStamp(0.409992878109);
    msg.setSource(33431U);
    msg.setSourceEntity(149U);
    msg.setDestination(53529U);
    msg.setDestinationEntity(17U);
    msg.sessid = 1661919944U;
    msg.messages.assign("GKJQHAQOAPEOAYIQMOEYSFHBHKBQHKZRXGHOMUYKPNWIFIEQEZHFSVSIGNJLCSRDPQUKPRTDINOVTXWVSBGWBZWLFWBIHWZNEJW");

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
    msg.setTimeStamp(0.802233494342);
    msg.setSource(16900U);
    msg.setSourceEntity(33U);
    msg.setDestination(61337U);
    msg.setDestinationEntity(147U);
    msg.sessid = 2434661548U;

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
    msg.setTimeStamp(0.525526452628);
    msg.setSource(39766U);
    msg.setSourceEntity(56U);
    msg.setDestination(57746U);
    msg.setDestinationEntity(129U);
    msg.sessid = 2684536074U;

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
    msg.setTimeStamp(0.99000613662);
    msg.setSource(2269U);
    msg.setSourceEntity(57U);
    msg.setDestination(34472U);
    msg.setDestinationEntity(33U);
    msg.sessid = 2379760505U;

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
    msg.setTimeStamp(0.0595549339258);
    msg.setSource(27368U);
    msg.setSourceEntity(214U);
    msg.setDestination(30288U);
    msg.setDestinationEntity(229U);
    msg.sessid = 281647099U;
    msg.status = 188U;

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
    msg.setTimeStamp(0.421047570265);
    msg.setSource(33077U);
    msg.setSourceEntity(201U);
    msg.setDestination(55345U);
    msg.setDestinationEntity(92U);
    msg.sessid = 2307409412U;
    msg.status = 17U;

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
    msg.setTimeStamp(0.57198738169);
    msg.setSource(2074U);
    msg.setSourceEntity(121U);
    msg.setDestination(18041U);
    msg.setDestinationEntity(78U);
    msg.sessid = 75206315U;
    msg.status = 31U;

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
    msg.setTimeStamp(0.802045332147);
    msg.setSource(24830U);
    msg.setSourceEntity(183U);
    msg.setDestination(63583U);
    msg.setDestinationEntity(161U);
    msg.name.assign("UMUQQZNBCKEKRAIRQHGPVTQTRYEQVKHHXGETIJGMLQVJXZFMZFZDKOQXXOAIFYOWMHNBPZJVEIOLKQQCZXBDPURNPOACEWGIEZVGXKSPNFWSVAYCVWLBFLNSSHGJWPFFPCANDDMCSHATYXYWVKRZMTVFUXRDJJIWPWBLCQLPEILMBPJGUTZCEXEJWUYUGOTONDBINTNSMOMDZLEYLIOSKVBUAURWLOGRCXUGHITHKRFSFBRYAYCS");

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
    msg.setTimeStamp(0.334367760395);
    msg.setSource(2039U);
    msg.setSourceEntity(7U);
    msg.setDestination(5263U);
    msg.setDestinationEntity(99U);
    msg.name.assign("LWGRQEAMONDFEBHNAXOTQXGSPRFKJLKEJIAEGPKWFEMHUBRCTEMLHMXQXVTMSVZZTROLUNVMVILODGBIKGWYBZIPOXWYQFARNGNIUCNYZQFSKQCHPALBOFSNDTCTTWQDBELSHJDULLHSSXFEEHTDJCVDTCYHUPOJZUVCYXGIZZORCNKJZUPJVQAZYDVYPXPSGWMGZDFXSBQ");

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
    msg.setTimeStamp(0.726979706929);
    msg.setSource(49361U);
    msg.setSourceEntity(137U);
    msg.setDestination(42566U);
    msg.setDestinationEntity(199U);
    msg.name.assign("GLXATEPOMTVFOXRQQVEFKUJEMBQCYXGDQNFZDTWZDPUFNVNGMBKSJPNZCKFWVSPIFJBZAHCCBTRPIWINDDPFZXWTPYCGTLWYHRKIBKUOKQLJSVF");

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
    msg.setTimeStamp(0.218253916142);
    msg.setSource(955U);
    msg.setSourceEntity(188U);
    msg.setDestination(55163U);
    msg.setDestinationEntity(155U);
    msg.name.assign("ZSDRPBRKDDKWMYYOWXGHRZOABUSXJJFVAJJSGRRHILPEHCJSFQGRATYTYVBTXUSIKNEXNXGYMLZKCANZTPAFDYVQGAVMJHDOADPSLFQOHHWZWBLEVMIMPVOTLBDPUHQZBAERSYOFSKPFCUWBEJOLRYUECIAMALPTBUCGKTIOZQXVXJELTIVTSMZBZFMJKEIVGMRSHCKIFOQCGGKFWZNCBDEJP");

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
    msg.setTimeStamp(0.572089180627);
    msg.setSource(54760U);
    msg.setSourceEntity(254U);
    msg.setDestination(47780U);
    msg.setDestinationEntity(95U);
    msg.name.assign("PURSPDIBLWSOLHGZSROMSQUOMDPTHSZUAPTXISPGBBJCPYVYTAGTLWGCSMAZOAWLMFYXUUDINTKLCIJAZALIHTRVRZOTMZNKXNWEVVOECYAIVFMXBUFHYCAIXGXFWBFQIBPDFKMARVNJSUHJLJDLCDRPOONNPJEGNIRXTJVLNUYQPLWYNBKEBEMYDUQ");

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
    msg.setTimeStamp(0.297526683518);
    msg.setSource(2926U);
    msg.setSourceEntity(216U);
    msg.setDestination(9191U);
    msg.setDestinationEntity(43U);
    msg.name.assign("LKFKBISDAVWOIGPHXJEIVZCREOAVDUUFGBOQYARYQESODSPBQTNFFPSQYHUECQOWKYOFWPEHVAFGPURVUJXNCJGVJHZFLIHRKLUHJRBLUIEXTZGBXCXWLPUGJPEMPHJXGWNYNTZQDMAWBCVTATYYTASITBMKKNUEHKTVCNAASMRWCRGSARZJMBWYJPDCJDIYMXEQSQDWLOHNQVFZLLIZRKTGZIXNGNKOZNFUOMSBMDFLWQCXOPSZD");

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
    msg.setTimeStamp(0.623754111114);
    msg.setSource(2950U);
    msg.setSourceEntity(71U);
    msg.setDestination(61407U);
    msg.setDestinationEntity(43U);
    msg.type = 106U;
    msg.error.assign("XZSDFKJHTLVHEHJMYYAODMKFAGUWWXUBIWBZPINOWRFQIYSMOFYTCRPEJZALQGTUEUMCPGENAXHIGXVPGMDOWVVTHJRJVOKIWCRZBDICUYSUOQSJABCCUSFAURZQEQWKLV");

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
    msg.setTimeStamp(0.892806774216);
    msg.setSource(3189U);
    msg.setSourceEntity(114U);
    msg.setDestination(21285U);
    msg.setDestinationEntity(119U);
    msg.type = 61U;
    msg.error.assign("LRWKHENSKXFKAAUHNMQ");

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
    msg.setTimeStamp(0.727433725849);
    msg.setSource(41494U);
    msg.setSourceEntity(110U);
    msg.setDestination(34322U);
    msg.setDestinationEntity(136U);
    msg.type = 141U;
    msg.error.assign("LVXAYVXKAKTVRGYHWKMPNOZMTCOEJWSDUMGZZWSDIZMTUWYGCKBMEZNDWXHJGWOVTAFPLTKJRXJSQXEJTPHNSAJNTSCALBCBUKULCAQFCQISXMHQBRQKNOWUPHBCXSBGDPRYVQVJLYTFRGUOIHNOQTNUHFWKDDPBCBEJGXSDMRPBHFLJMWFVREBOIQVCPJUOAFYCMGEXOIKQAESPPZIUIRWZVAEMDHGIYDVZUDFENLYRYYRLGNKFNQIEZZ");

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
    msg.setTimeStamp(0.343604943676);
    msg.setSource(28680U);
    msg.setSourceEntity(71U);
    msg.setDestination(3899U);
    msg.setDestinationEntity(21U);
    msg.seq = 61703U;
    msg.sys_dst.assign("OULVNAMGKKLPOQSLTTDACSVTPGYOGDQNEZNVBZVYZVYWI");
    msg.flags = 83U;
    const char tmp_msg_0[] = {121, 80, 25, -105, -71, 41, 28, -17, -125, 82, 64, -88, -19, -3, -90, 5, -111, -112, -42, -85, 22, -88, -51, -87, 82, 58, -36, -97, -125, -68, -74, -60, 113, 115, -20, -67, -88, 123, 86, -6, 70, 5, -66};
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
    msg.setTimeStamp(0.18792233645);
    msg.setSource(9963U);
    msg.setSourceEntity(136U);
    msg.setDestination(31674U);
    msg.setDestinationEntity(95U);
    msg.seq = 30267U;
    msg.sys_dst.assign("IEWMISTGHVOLRAHDZTKJPFMVWUANWTWUFQBVOZSYFXEOCTBKCBRCWWQDKKQOBNAEBDLHXRXKQEDPPHFDHUDCCLSKSRPPMIDKPVAFBGRABXTYSNKQYMWUNETXMWVIENHQIXLFTOYEMYOLXCBNYWHEJRMJUGTCUVQCFZZFASOOZPQNWAAGDZGRILZSBTYFXPEVMYUOXZGDSLISLTDJEOPRVZFYIJJNQIVGNGCMY");
    msg.flags = 115U;
    const char tmp_msg_0[] = {67, 106, 52, -50, 80, 10, -118, -103, 15, -106, 40, -52, 65, 111, -120, 110, 118, 32, -30, 3, 39, -91, -97, -111, -85, 115, 29, -89, -110, 76, -34, 121, -3, -50, -94, 8, 53, 26, 9, -76, 2, 115, 54, 54, 69, -64, -108, -88, 94, -35, 32, -114, -123, -52, -119, -48, -1, -113, -114, -47, 88, 126, -83, 58, -108, 91, 97, 126, -111, -6, 115, -37, -99, 10, 104, 64, -42, 99, 64, -57, 32, -30, 23, -51, -51, -9, 125, 45, 37, 101, 117, -55, -31, 30, 5, 53, -26, -60, 30, 94, 76, 67, -80, 51, -103, -35, -57, -106, -100, -62, -6, 58, 113, -64, -51, 106, 76, -105, -52, -3, 43, 105, 86, -56, -22, 19, -22, -12, 33, 84, 23, -30, -113, -92, -91, -3, 101, -20, 7, -42, 23, 55, -40, 52, 13, 103, -77, 89, -88, 66, -88, 72, 22, -31, 111, -23, 2, 93, -9, -74, 110, -126, -79, 13, 34, 37, 21, -119, -11, -80, 9, -85, -6, -7, -29, -16, 83, -47, 50, -37, -104, -49, -97, 45, -51, -27, -62, -104, -89, -27, 69, 70, 104, 118, -88, 31, 53, -64, -64, -73, 106, 81, -37, 5, 58, -15};
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
    msg.setTimeStamp(0.826778393888);
    msg.setSource(5433U);
    msg.setSourceEntity(29U);
    msg.setDestination(30023U);
    msg.setDestinationEntity(19U);
    msg.seq = 11736U;
    msg.sys_dst.assign("GQEGFDNGPWLQQYJBWNTBSHRLGJIQSNRRCFCWUOCTCHSRUSCPPKGILDEBYSWLHEJKHAKGNYUSZZOMBZIUOZMZWOVDXQVEQQZIXTYYJVFVPPYELNHKLMBCYKHYMSBTIFGLWWYQZUESFSXDXKDACIVWAWUYNCKSJBFJWD");
    msg.flags = 239U;
    const char tmp_msg_0[] = {48, -7, -114, 50, 3, 118, -3, -106, -47, 99, 98, 58, 83, -66, -78, 89, -53, 76, 84, 36, 99, -42, -78, -88, 3, -47, 0, 67, -69, -69, 63, 41, -60, 89, 12, -124, -72, -78, -95, -6, 117, 62, 117, -126, -44, 27, 109, 53, 96, 25, -51};
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
    msg.setTimeStamp(0.0451972911607);
    msg.setSource(62101U);
    msg.setSourceEntity(25U);
    msg.setDestination(26273U);
    msg.setDestinationEntity(206U);
    msg.sys_src.assign("MGNSLAYPXEOCCFJTVLKIHDYECMSVQWJHSZBYPYGUDXMOGLKDGTNBMZXCOPRRNVCBFRZJBAFAUOCIXTZEUWJFIRDTGIYIFSDOZZKRUWWUPKGKIVWEKRBANXGGDCUIWJCUQENRSSLLNDEPHRUQOYLMXSFIJESVAVVUFQSGDZXOIRXFLHBONQBEAQIHVWMTTHGSWHCQNOLEYDMWPWJZKZFJPANLAYYHJQHLXMJTAFPUTMB");
    msg.sys_dst.assign("YTIRCRDLHTPYVIEJLNBSPMXRMONPPNTYKXRBIJMDWTPCVMNVICGZW");
    msg.flags = 1U;
    const char tmp_msg_0[] = {20, -75, -78, -23, -26, -21, -112, -55, 19, 43, -52, 45, 111, -30, 121, 31, -105, 5, 13, -70, -121, -83, 92, -2, -4, -64, -27, -64, -91, 7, 47, -54, -16, 60, -96, 94, -110, 69, 19, -70, -87, 20, 7, -68, 45, -10, 106, 68, 119, 75, -35, -38, 58, -53, -32, -66, 92, -35, 56, -99, 16, -87, 83, -43, -94, -56, 77, 90, 64, -42, -18, -4, -20, -24, 4, -70, -81, 89, 87, 52, -44, 87, -28, -84, 79, -110, -8, 80, 67, 80, -105, -123, 61, -116, -117, 38, -121, 39, 12, 97, -65, -31, 119, 75, 75, 6, 71, 97, 107, -53, -118, 114, -50, -74, 81, 37, -46, -42, -71, -44, -22, 74, 62, 124, 24, -14, -97, -83, -80, 119, 90, 112, -66, 44, -4, 113, 113, -33, -31, 40, -123, -113, 44, 8, -65, -98, 87, -75, 90, 90, 22, 19, 72, 54, -61, 56, 64, -82, -74, 24, -45, 94, 98, -54, -68, -89, 84, -75, -63, -52, -71, 95, -47, -33, 57, 4, 95, -106, -14, -33, -69, 25, -83, 11, 107, -86, -98, 12, 31};
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
    msg.setTimeStamp(0.43842107148);
    msg.setSource(2634U);
    msg.setSourceEntity(176U);
    msg.setDestination(47005U);
    msg.setDestinationEntity(1U);
    msg.sys_src.assign("PBFELPOJCPYQIVYANJQKHCLZXBTDSSNMUJFFSDDPQJORFLXSHEAUDXFZQKC");
    msg.sys_dst.assign("TQCZYBZTLINKNRYHVCPKQGEGFWOBIZOSRORIVIXBBSOEOAYKNBKJQMBPDGWXEVJJOGMMFWDZUQCLGWXPCKJGROYPUNW");
    msg.flags = 152U;
    const char tmp_msg_0[] = {78, -124, 126, 14, 123, 101, 99, 58, -44, -48, -114, -40, 123, -47, -36, -11, -60, -93, 95, 5, -20, 21, -103, -83, 109, -115, 110};
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
    msg.setTimeStamp(0.59418320998);
    msg.setSource(5389U);
    msg.setSourceEntity(201U);
    msg.setDestination(60713U);
    msg.setDestinationEntity(123U);
    msg.sys_src.assign("EVZLVUPLZKJLLQEYSZOHNCTQPVOKCQFOSHNVNKWUCQRFMTIPRCPXISRBJMKDDHSWIIJTVWIXUGETYHFMDBKUMSSOYNBZMXBQNWREMGHVRVFIUTSNY");
    msg.sys_dst.assign("OJKAYGOKRTUZXKARDIBKWVMLRJUYGTARKLXAQOXYPRHMZSBAEJNVHHEXSOQWHGFDIQSEPTPLUQDAFGZHXTAFGXIBZDVYMDOFMULAEDUWCKIBYDEQFMTNIWFLYMFCRKOTSJPNJPF");
    msg.flags = 121U;
    const char tmp_msg_0[] = {111, 5, -89, -33, -64, -64, -81, -68, 62, 13, -46, -28, 67, -32, -51};
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
    msg.setTimeStamp(0.582166032964);
    msg.setSource(60349U);
    msg.setSourceEntity(220U);
    msg.setDestination(10576U);
    msg.setDestinationEntity(85U);
    msg.seq = 42511U;
    msg.value = 195U;
    msg.error.assign("BCKCBQQGYJCQJLJNRPFWOPLEHXTZPIHTOVFVIGYZGPWNZHHCROTJWXOBEUMPK");

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
    msg.setTimeStamp(0.104727834);
    msg.setSource(972U);
    msg.setSourceEntity(238U);
    msg.setDestination(758U);
    msg.setDestinationEntity(71U);
    msg.seq = 5211U;
    msg.value = 129U;
    msg.error.assign("HKPPFICXMNFTMZAERCOPXDQFYNLSBXJDKEUBEYXYPTGHFGSJGSLGPVCILLNKBHAZDRWILUOUIDJVGGTXQPQWTJMRZVSXAEJRXQMPZCNYZOHUWZVYHKHZUURBTSHKLMRWBEAC");

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
    msg.setTimeStamp(0.562879282596);
    msg.setSource(36978U);
    msg.setSourceEntity(218U);
    msg.setDestination(983U);
    msg.setDestinationEntity(125U);
    msg.seq = 56178U;
    msg.value = 73U;
    msg.error.assign("FBUABZDXZAMVRSTNETDJMHNIINLQFIGJFQZUXWOXQBPMPAKE");

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
    msg.setTimeStamp(0.189670037355);
    msg.setSource(46925U);
    msg.setSourceEntity(182U);
    msg.setDestination(62478U);
    msg.setDestinationEntity(237U);
    msg.seq = 32272U;
    msg.sys.assign("MXWKTYSDPGFPSJNIGAGMYEXNBUOZHAUTOJRMHQVOXNAFJOEIWFWRXREZSALFNSDSTHPIQOHEWKJBVTVJMQWKFEQQRUUJZHJKQDFAGCXTHPLKMPKZBEMXVLNNZIVBPXLYCNVWHDCNUDMNGUPCOCUSQYWUFRRGOZJYGMDZOIPIYAVHEFVJFHOVDLYCWBCHAIOIKGEMYS");
    msg.value = 0.691855567214;

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
    msg.setTimeStamp(0.377683548598);
    msg.setSource(43883U);
    msg.setSourceEntity(118U);
    msg.setDestination(22079U);
    msg.setDestinationEntity(108U);
    msg.seq = 51012U;
    msg.sys.assign("PKGTIDJBGSIHYMZUYMXIMNGWCCKBONHHYUZDSXVFXGVMNFUUULAHRPTOBQPTZDQWBFXVPSMPOVJROEDBWAECQDMPACUIJVIALWKIWWEJZSVXKFXYBHOLLNKUEFAPEEATRMEVMQKFBTZCQFRWSTGKSYCKVQFNELXYOKJYCNBRSIWHZTIQSHNWAUBJRFBNZHKMXOTTLOZADOELZEARSDCTQDHVHXOQYADSGPQJLCJILPY");
    msg.value = 0.584222938922;

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
    msg.setTimeStamp(0.720029210583);
    msg.setSource(24185U);
    msg.setSourceEntity(15U);
    msg.setDestination(17441U);
    msg.setDestinationEntity(58U);
    msg.seq = 61513U;
    msg.sys.assign("INYHHGPGQAIVDCXEZXVKCWJWPAHZRNTLLRUAZVECFWTMXSBGYEDSYFVCBMICPQNVMPHGXWZJFRHDPJUYOJAQGOASRLROGBLJRBSRQCKMHPCIXBTZWOQFTLJJWFFOKZKXQUUSKXNBNZKZSMYINPEDYKDAVBHAGQNMUSGJIJCNETQTYGVGRUHQHPESXHOOWBWKIFDYOUTTKXKBNYEELLCQJDNFRDAFDOSZVDZVPMUYLUWRMTSLLIMVWAMCIE");
    msg.value = 0.976966492002;

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
    msg.setTimeStamp(0.000935573726639);
    msg.setSource(25247U);
    msg.setSourceEntity(106U);
    msg.setDestination(22915U);
    msg.setDestinationEntity(129U);
    msg.action = 72U;
    msg.longain = 0.512752788222;
    msg.latgain = 0.535769249722;
    msg.bondthick = 2795332537U;
    msg.leadgain = 0.76628346356;
    msg.deconflgain = 0.985672795386;

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
    msg.setTimeStamp(0.850541395657);
    msg.setSource(6351U);
    msg.setSourceEntity(93U);
    msg.setDestination(41159U);
    msg.setDestinationEntity(32U);
    msg.action = 199U;
    msg.longain = 0.768234311131;
    msg.latgain = 0.974217606128;
    msg.bondthick = 2925528514U;
    msg.leadgain = 0.384754343922;
    msg.deconflgain = 0.393613131611;

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
    msg.setTimeStamp(0.130839089641);
    msg.setSource(63834U);
    msg.setSourceEntity(139U);
    msg.setDestination(3571U);
    msg.setDestinationEntity(164U);
    msg.action = 210U;
    msg.longain = 0.464042767478;
    msg.latgain = 0.727373615929;
    msg.bondthick = 1993384350U;
    msg.leadgain = 0.878594113611;
    msg.deconflgain = 0.147691872671;

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
    msg.setTimeStamp(0.78564390989);
    msg.setSource(19484U);
    msg.setSourceEntity(221U);
    msg.setDestination(41706U);
    msg.setDestinationEntity(147U);
    msg.err_mean = 0.913846324761;
    msg.dist_min_abs = 0.988840056227;
    msg.dist_min_mean = 0.765110891019;

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
    msg.setTimeStamp(0.566994173421);
    msg.setSource(11747U);
    msg.setSourceEntity(208U);
    msg.setDestination(10637U);
    msg.setDestinationEntity(140U);
    msg.err_mean = 0.950949235251;
    msg.dist_min_abs = 0.59912318594;
    msg.dist_min_mean = 0.0415680020915;

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
    msg.setTimeStamp(0.287599167655);
    msg.setSource(47871U);
    msg.setSourceEntity(58U);
    msg.setDestination(42462U);
    msg.setDestinationEntity(236U);
    msg.err_mean = 0.460911441005;
    msg.dist_min_abs = 0.0301080388381;
    msg.dist_min_mean = 0.175064070103;

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
    msg.setTimeStamp(0.00802138631129);
    msg.setSource(23401U);
    msg.setSourceEntity(169U);
    msg.setDestination(63098U);
    msg.setDestinationEntity(6U);
    msg.action = 237U;
    msg.lon_gain = 0.268818248712;
    msg.lat_gain = 0.0683810832996;
    msg.bond_thick = 0.0644906427451;
    msg.lead_gain = 0.930721117309;
    msg.deconfl_gain = 0.56470673811;
    msg.accel_switch_gain = 0.763804948316;
    msg.safe_dist = 0.705252427755;
    msg.deconflict_offset = 0.727230647861;
    msg.accel_safe_margin = 0.822209593762;
    msg.accel_lim_x = 0.360243740619;

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
    msg.setTimeStamp(0.750692460024);
    msg.setSource(51442U);
    msg.setSourceEntity(205U);
    msg.setDestination(30877U);
    msg.setDestinationEntity(190U);
    msg.action = 206U;
    msg.lon_gain = 0.315981951544;
    msg.lat_gain = 0.765292932068;
    msg.bond_thick = 0.500007279373;
    msg.lead_gain = 0.435514888641;
    msg.deconfl_gain = 0.998701605757;
    msg.accel_switch_gain = 0.0710996975808;
    msg.safe_dist = 0.160163825205;
    msg.deconflict_offset = 0.560392176531;
    msg.accel_safe_margin = 0.894294805324;
    msg.accel_lim_x = 0.238189126935;

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
    msg.setTimeStamp(0.815378078731);
    msg.setSource(17632U);
    msg.setSourceEntity(77U);
    msg.setDestination(58849U);
    msg.setDestinationEntity(76U);
    msg.action = 75U;
    msg.lon_gain = 0.92136492488;
    msg.lat_gain = 0.73257950742;
    msg.bond_thick = 0.579966624306;
    msg.lead_gain = 0.22453600212;
    msg.deconfl_gain = 0.470944540142;
    msg.accel_switch_gain = 0.324665339631;
    msg.safe_dist = 0.93918607397;
    msg.deconflict_offset = 0.18027022021;
    msg.accel_safe_margin = 0.127012533626;
    msg.accel_lim_x = 0.343907418;

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
    msg.setTimeStamp(0.828292702059);
    msg.setSource(23828U);
    msg.setSourceEntity(54U);
    msg.setDestination(64466U);
    msg.setDestinationEntity(176U);
    msg.type = 189U;
    msg.op = 33U;
    msg.err_mean = 0.432747380218;
    msg.dist_min_abs = 0.729818563196;
    msg.dist_min_mean = 0.476379343162;
    msg.roll_rate_mean = 0.79931424516;
    msg.time = 0.552850981872;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 155U;
    tmp_msg_0.lon_gain = 0.378420668735;
    tmp_msg_0.lat_gain = 0.222881079905;
    tmp_msg_0.bond_thick = 0.299431589688;
    tmp_msg_0.lead_gain = 0.843565199056;
    tmp_msg_0.deconfl_gain = 0.265093174439;
    tmp_msg_0.accel_switch_gain = 0.264438761714;
    tmp_msg_0.safe_dist = 0.899981512587;
    tmp_msg_0.deconflict_offset = 0.496094198636;
    tmp_msg_0.accel_safe_margin = 0.0613415101089;
    tmp_msg_0.accel_lim_x = 0.583982972846;
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
    msg.setTimeStamp(0.968017081862);
    msg.setSource(39884U);
    msg.setSourceEntity(35U);
    msg.setDestination(28997U);
    msg.setDestinationEntity(16U);
    msg.type = 31U;
    msg.op = 205U;
    msg.err_mean = 0.613912148403;
    msg.dist_min_abs = 0.356817694764;
    msg.dist_min_mean = 0.651709278418;
    msg.roll_rate_mean = 0.687293730195;
    msg.time = 0.410629688302;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 186U;
    tmp_msg_0.lon_gain = 0.112977622036;
    tmp_msg_0.lat_gain = 0.0837792455536;
    tmp_msg_0.bond_thick = 0.134165883886;
    tmp_msg_0.lead_gain = 0.954343546148;
    tmp_msg_0.deconfl_gain = 0.177393805124;
    tmp_msg_0.accel_switch_gain = 0.367623729238;
    tmp_msg_0.safe_dist = 0.147900045745;
    tmp_msg_0.deconflict_offset = 0.142826802921;
    tmp_msg_0.accel_safe_margin = 0.48729835942;
    tmp_msg_0.accel_lim_x = 0.692060501202;
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
    msg.setTimeStamp(0.417283056389);
    msg.setSource(31305U);
    msg.setSourceEntity(16U);
    msg.setDestination(52198U);
    msg.setDestinationEntity(64U);
    msg.type = 237U;
    msg.op = 211U;
    msg.err_mean = 0.326190041175;
    msg.dist_min_abs = 0.0583289083071;
    msg.dist_min_mean = 0.894947938492;
    msg.roll_rate_mean = 0.178322299841;
    msg.time = 0.479278201839;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 78U;
    tmp_msg_0.lon_gain = 0.571473833747;
    tmp_msg_0.lat_gain = 0.478161969601;
    tmp_msg_0.bond_thick = 0.273816593648;
    tmp_msg_0.lead_gain = 0.268781655117;
    tmp_msg_0.deconfl_gain = 0.146572619317;
    tmp_msg_0.accel_switch_gain = 0.85261836089;
    tmp_msg_0.safe_dist = 0.932704477175;
    tmp_msg_0.deconflict_offset = 0.327872143061;
    tmp_msg_0.accel_safe_margin = 0.927438970409;
    tmp_msg_0.accel_lim_x = 0.0628613308693;
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
    msg.setTimeStamp(0.714066044247);
    msg.setSource(21523U);
    msg.setSourceEntity(51U);
    msg.setDestination(48972U);
    msg.setDestinationEntity(114U);
    msg.lat = 0.199156602999;
    msg.lon = 0.179256740873;
    msg.eta = 3214467521U;
    msg.duration = 43272U;

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
    msg.setTimeStamp(0.931061669542);
    msg.setSource(13570U);
    msg.setSourceEntity(52U);
    msg.setDestination(22026U);
    msg.setDestinationEntity(112U);
    msg.lat = 0.378546029734;
    msg.lon = 0.470759273505;
    msg.eta = 295182267U;
    msg.duration = 38637U;

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
    msg.setTimeStamp(0.904474845574);
    msg.setSource(43106U);
    msg.setSourceEntity(114U);
    msg.setDestination(31721U);
    msg.setDestinationEntity(126U);
    msg.lat = 0.869363085181;
    msg.lon = 0.155526321707;
    msg.eta = 3307492198U;
    msg.duration = 55981U;

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
    msg.setTimeStamp(0.385288092184);
    msg.setSource(9440U);
    msg.setSourceEntity(219U);
    msg.setDestination(41322U);
    msg.setDestinationEntity(193U);
    msg.plan_id = 60346U;

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
    msg.setTimeStamp(0.897594327414);
    msg.setSource(59908U);
    msg.setSourceEntity(200U);
    msg.setDestination(22430U);
    msg.setDestinationEntity(64U);
    msg.plan_id = 40486U;

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
    msg.setTimeStamp(0.402421812205);
    msg.setSource(9254U);
    msg.setSourceEntity(106U);
    msg.setDestination(20958U);
    msg.setDestinationEntity(187U);
    msg.plan_id = 27541U;
    IMC::SoiWaypoint tmp_msg_0;
    tmp_msg_0.lat = 0.757003663635;
    tmp_msg_0.lon = 0.184757932964;
    tmp_msg_0.eta = 1024895105U;
    tmp_msg_0.duration = 15030U;
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
    msg.setTimeStamp(0.908733012125);
    msg.setSource(56119U);
    msg.setSourceEntity(204U);
    msg.setDestination(54973U);
    msg.setDestinationEntity(61U);
    msg.type = 100U;
    msg.command = 113U;
    msg.settings.assign("DJNUUTVFYGMDJRKPXTUWHNWTNAQPOALUAELZVRF");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 24645U;
    IMC::SoiWaypoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.815009477665;
    tmp_tmp_msg_0_0.lon = 0.675156281559;
    tmp_tmp_msg_0_0.eta = 4202505983U;
    tmp_tmp_msg_0_0.duration = 8241U;
    tmp_msg_0.waypoints.push_back(tmp_tmp_msg_0_0);
    msg.plan.set(tmp_msg_0);
    msg.info.assign("BFYLCRBLRZPIUNCFNFMQSPFBBSTOZONSQPQGTUWXNMUKZPYEGRREWCZDINPOZLFELGPUXHCAJUNPNQVKLYKSVDMERNAOVTJIURDZXRKAJTNHGJFBLYPWSVHOHYFGQLSCBBFTQYTKUXOAJEAHVJGQPOZJJSZAQIHEYMTMZIBWIIRLSHIZBXDWVMVXCKGTTDKADOEHWGVKLMWRMCYSMIADXWAQYEARCEGYXJIWHCTOUVJMXUVXWFO");

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
    msg.setTimeStamp(0.185260330213);
    msg.setSource(36843U);
    msg.setSourceEntity(208U);
    msg.setDestination(50137U);
    msg.setDestinationEntity(212U);
    msg.type = 249U;
    msg.command = 12U;
    msg.settings.assign("ATVZBEXPCWIIBEJGMRRVPOFYJHGKIUUDLPEKQTXVXOJCUXXRHSSOWQEU");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 36028U;
    msg.plan.set(tmp_msg_0);
    msg.info.assign("DFCEMWBDMIXWPVKEOYAXZYSKHMKTOUKQGOJOHXDVGOTQTMNJAPQHTMFZUZDNHFNARMIHOZQEJZUWYDJBGQZUUVYHVCJDVXSAJBPOCCBNRJWLFQEGFBMNQAFGINHSIDYSWJTYWKHSJGSINILRBRHVYVWCSEWLLTTOFAZVOAGYPLPFQZA");

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
    msg.setTimeStamp(0.229387897568);
    msg.setSource(3845U);
    msg.setSourceEntity(107U);
    msg.setDestination(17492U);
    msg.setDestinationEntity(24U);
    msg.type = 0U;
    msg.command = 171U;
    msg.settings.assign("MXUIOCWXZFVIMCJKQIPINXTQUHVJKDOIELIWBTDXNLDCSEOHPEHKTZSQQAGKWNUZAFTSGWPWXMGEHWEPUVFYZYYSCBGAHTPJPTPAPRLUDKIVTRZJWMYYCKLKVQTUCELFLZXOEUJAYRTAJHWSSRINRVYERL");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 51573U;
    IMC::SoiWaypoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.74117272037;
    tmp_tmp_msg_0_0.lon = 0.113981415089;
    tmp_tmp_msg_0_0.eta = 3802851899U;
    tmp_tmp_msg_0_0.duration = 14893U;
    tmp_msg_0.waypoints.push_back(tmp_tmp_msg_0_0);
    msg.plan.set(tmp_msg_0);
    msg.info.assign("ONTFJLBLHSUWHNMVAPEAGFQKWGFZJJPGDIUTAAIBQVBIODVKAIKBHKXYYODSOAULRDRCGDCJYHQGARYVWDPKIQEGCPTFQDVMDOXXZLMSXJLQHFIZTMVBXTZUQMDKQJNTCCEVNPZIKMRUWHWKOBEXTFPQWSFNMZUVTGFELRIPZCCHJZGERFZXNSPWIEBESLMHAGOWC");

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
    msg.setTimeStamp(0.676464109661);
    msg.setSource(19933U);
    msg.setSourceEntity(223U);
    msg.setDestination(2881U);
    msg.setDestinationEntity(141U);
    msg.state = 106U;
    msg.plan_id = 37978U;
    msg.wpt_id = 225U;
    msg.settings_chk = 3840U;

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
    msg.setTimeStamp(0.00264685412161);
    msg.setSource(33431U);
    msg.setSourceEntity(37U);
    msg.setDestination(54568U);
    msg.setDestinationEntity(55U);
    msg.state = 143U;
    msg.plan_id = 65065U;
    msg.wpt_id = 102U;
    msg.settings_chk = 29928U;

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
    msg.setTimeStamp(0.159776717032);
    msg.setSource(41734U);
    msg.setSourceEntity(105U);
    msg.setDestination(18600U);
    msg.setDestinationEntity(187U);
    msg.state = 111U;
    msg.plan_id = 9758U;
    msg.wpt_id = 197U;
    msg.settings_chk = 1468U;

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
    msg.setTimeStamp(0.703024473266);
    msg.setSource(10470U);
    msg.setSourceEntity(41U);
    msg.setDestination(54613U);
    msg.setDestinationEntity(95U);
    msg.uid = 191U;
    msg.frag_number = 141U;
    msg.num_frags = 23U;
    const char tmp_msg_0[] = {-57, 61, -30, 95, 85, -86, 55, -13, -62, 109, 123, 73, 89, 100, -41, 70, 31, 57, 125, 126, -123, -16, -82, 64, -13, 97, -42, 125, 111, 14, -85, 5, -114, 69, -7, -69, -21, 118, 0, -104, -95, -122, 116, -14, -44, -8, 80, -113, -67, 116, 12, -59, 124, 116, -8, -111, 36, -51, -75, -63, -78, 37, -124, 37, 20, -40, -50, -89, -59, 16, -22, -43, 47, -3, -32, -117, 116, -52, 37, 65, -103, -55, 63, -33, -21, 125, -59, -122, -105, 42, 105, 79, -30, 3, 81, -13, 37, 91, -110, 32, 121, -68, 31, 36};
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
    msg.setTimeStamp(0.873899979426);
    msg.setSource(45487U);
    msg.setSourceEntity(214U);
    msg.setDestination(64539U);
    msg.setDestinationEntity(220U);
    msg.uid = 68U;
    msg.frag_number = 84U;
    msg.num_frags = 227U;
    const char tmp_msg_0[] = {-51, -28, -2, -90, 71, -110, -111, 93, -99, 66, -38, 112, -46, 53, -22, -57, -8, 71, -58, -126, -115, 39, -46, 111, 117, 1, -5, -22, 120, -17, -108, 39, -98, 126, -43, 115, -14, -51, 50, 55, 8, 77, -101, -40, 123, -76, 24, 112, 68, -121, -91, 115, -36, -55, -108, 122, 65, -110, -89, -68, 7, 31, -77, -11, 58, 106, 85, 41, -80, 117, -76, -69, -95, 54, 6, -11, -1, -111, 82, -68, -70, 5, -28, 88, -9, 126, -91, -98, 43, -60, -27, 99, 34, -41, 74, -49, 40, 108, -92, 38, 123, 59, 112, 3, -128, -40, -101, -56, 22, -91, -60, 56, 93, -88, -36, 1, 52, -81, 43, -36, -74, -115, 54, -87, -5, -43, -2, -97, -31, 60};
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
    msg.setTimeStamp(0.846208412343);
    msg.setSource(45064U);
    msg.setSourceEntity(6U);
    msg.setDestination(60808U);
    msg.setDestinationEntity(188U);
    msg.uid = 227U;
    msg.frag_number = 2U;
    msg.num_frags = 145U;
    const char tmp_msg_0[] = {112, 24, 73, -30, -70, -28, 100, 87, -69, 75, -22, 37, 96, 96, 64, 60, -117, -36, -72, 97, 97, -79, -57, 25, -116, 65, -21, -110, 79, 121, 8, 34, 101, 105, -18, 51, -115, -115, 1, -38, 81, 116, -3, -55, -101, 64, -127, -73, 85, -15, 10, -101, 86, 15, -85, 98, -112, -88, -67, -65, 65, 2, 118, 81, -55, -39, -19, 6, -25, -111, 102, 37, 69, -52, -100, 58, 87, 70, -3, 84, 31, 3, -114, -93, -71, 27, 40, -46, -114, 96, -31, -127, -20, -83, 0, -107, 55, 109, -71, 33, -85, -3, -117, -4, 35, 126, -102, -84, -19, -17, 38, 10, 13, -83, 87, 55, 120, 91, 68, 91, -104, 83, 47, -109, 69, -105, -6, -7, 14, 50, -26, 2, 50, -85, 115, 29, 54, 17, 94, 54, -100, -23, 2, -70, 126, -99, -125, -49, 97, -42, 35, 17, -91, 76, 25, 24, 46, -91, 40, 79, -92, 62, -84, -4, 69, 92, -4, -93, 90, 59, -13, -110, 68, -94, 82, -36, -56, -33, -35, -116, -11, -89, 110, 38, -84, 61, 55, 56, -104, -23, -95, 47, 125, 10, -93, -23, 96, 64, -5, 61, 30, 61, -29, 88, -88, 13, -67, -34, -70, -78, -113, 63, 54, -31, -34, -102, -39, 80, 61, 57, 18, -15, -2, 97, 83, 93, 120, 90, 51, -45, 32, -73, 62, -84, -64, 126, 29, 84, 91, 113, 59, -123};
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
    msg.setTimeStamp(0.681881881809);
    msg.setSource(37328U);
    msg.setSourceEntity(21U);
    msg.setDestination(49681U);
    msg.setDestinationEntity(148U);
    msg.content_type.assign("RJZSPFOMARMGFUZGRPBWYTDZPHGKDWPZPEPLSNIZUHOTCUFSKKNNSROUGQKVCQTQINLGIOEWBBJEHHNIDMYCYTFVW");
    const char tmp_msg_0[] = {-20, -54, -83, -70, 25, 6, 125, -33, -60, -60, 112, -38, -46, -22, -75, -52, -4, 11, 21, 67, 79, -46, -56, -42, -118, 77, 29, 114, 35, -107, -40, -100, 73, 117, 7, 84, -14, 100, 40, 37, -29, -62, -30, -118, -16, -18, -112, -39, 88, 8, 109, -72, -45, 67, -99, -78, -76, 42, -48, -5, 104, 100, 89, 79, -98, 102, -113, -29, 91, 90, 43, -29, -63, -94, 124, 114, 25, 39, -94, -65, -15, -13, 106, 10, 107, -36, -41, -106, -64, -32, -73, -36, -51, 52, 97, 121, 6, -54, -91, 45, -29, -112, 122, -107, 68, -113, 92, -56, -52, -31, -63, -72, -78, -10, 104, -53, 21, 33, -104, 74, -41, 42, 117, -109, 120, -106, 9, -20, 92};
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
    msg.setTimeStamp(0.505300847425);
    msg.setSource(64375U);
    msg.setSourceEntity(137U);
    msg.setDestination(37707U);
    msg.setDestinationEntity(76U);
    msg.content_type.assign("XERCCATVZCZJFLQIQGVRDFZPPYCCICJRNFROUYJPXUDZLDITGLYMOEBJLPEGUDUWDMSIDAHWTBRWMLFIGSXWTGHYNKIPILBSPPNANFRDHVIKNREFRZTDQVJEXLJSCSUQYKFOPWQKBFYKKWFKWNJZVXBEUXJKGVOSJAEXTENHZOHB");
    const char tmp_msg_0[] = {42, -52, -49, 88, 101, 38, -98, 79, 33, -116, -14, 19, -121, 82, 8, 107, 8, -122, 50, 9, 103, -64, 77, -117, 105, 34, -64, 34, -104, 6, -47, 19, -101, -84, -83, -103, 55, -66, 107, -113, 52, 78, 2, -30, 8, -41, -79, 29, -12, -90, -119, 117, 27, -95, -56, 65, 10, 16, 41, -25, 125, -103, -100, 41, -113, -4, 95, -107, -94, -61, 39, -48, -107, -2, -55, 19, 92, 86, 98, -77, -92, 74, -29, 76, 25, -89, 82, -27, 93, -90, -76, 98, 40, 64, 60, -85, -16, 41, -46, -28, 44, 15, -10, -97, -63, -65, 110, 109, -45, -28, -53, -36, -32, -105, 28, 74, -72, -1, 119, 116, -51, -41, 54, -75, 113, 103, 12, 118, 105, -26, -19, -21, -8, -121, 5, -61, -20, -90, 111, 109, -42, -34, 89, 94, 72, -79, -80, -37, -98, -51, -2, 122, -47, 81, 72, 107, 80, 121, 12, -104, 115, 47};
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
    msg.setTimeStamp(0.0959804352568);
    msg.setSource(35579U);
    msg.setSourceEntity(168U);
    msg.setDestination(24304U);
    msg.setDestinationEntity(122U);
    msg.content_type.assign("XBXNNFGUZBVXWEJFPQKTTISYXXRKQLFUWVGAISMWVSREULBHNFKDOCWMRSYKILHJISQSLKNLOJSGVMHWHXJIVBXIGCBBMUBBLCGMUPKFCDYRXTQTTQDHZRDEFWLMZJSBUHHDKRCNKIGOYDPQUGUEAZVZYZNEYTGOZHQPRNHJPVFVAPDYWSPRZEIZJNZ");
    const char tmp_msg_0[] = {-23, -52, -57, -107, 94, -66, 15, 29, -29, -66, -63, -37, 82, 31, -46, -92, 99, -43, 21, -62, 100, -17, -119, -120, -102, 111, 126, 1, -83, -124, 74, -108, 16, 62, -118, 41, 125, 36, -34, 52, -6, -63, 42, 69, -52, -95, 111, -1, -71, 108, -94, -115, 54, 72, -34, 117, 125, -58, -7, 5, 15, -25, 8, 34, 82, 25, 58, -102, -39, -18, -48, -68, 22, 14, 85, -16, -17, 65, -30, 2, -115, 80, 75, -9, 118, 118, 4, 124, 63, -27, -30, -9, 30, -91, -119, -90, -123, 21, -110, -123, -108, -47, 90, -61, -72, -53, -61, 114, -27, 84, -11, -61, 84, -104, 67, 55, -89, -96, -17, -86, 39, -14, -115, 108, 83, -67, -124, -103, -84, 126, -53, -92, -90, 41, 17, 12, 85, 30, -20, 106, -72, -112, -81};
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
    msg.setTimeStamp(0.45481591649);
    msg.setSource(28983U);
    msg.setSourceEntity(238U);
    msg.setDestination(2738U);
    msg.setDestinationEntity(161U);

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
    msg.setTimeStamp(0.232274237507);
    msg.setSource(7592U);
    msg.setSourceEntity(160U);
    msg.setDestination(48844U);
    msg.setDestinationEntity(7U);

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
    msg.setTimeStamp(0.212234755718);
    msg.setSource(28335U);
    msg.setSourceEntity(98U);
    msg.setDestination(17541U);
    msg.setDestinationEntity(245U);

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
    msg.setTimeStamp(0.228251003025);
    msg.setSource(17206U);
    msg.setSourceEntity(144U);
    msg.setDestination(23553U);
    msg.setDestinationEntity(74U);
    msg.target = 50798U;
    msg.bearing = 0.28859227833;
    msg.elevation = 0.380262533389;

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
    msg.setTimeStamp(0.0854670034514);
    msg.setSource(26119U);
    msg.setSourceEntity(237U);
    msg.setDestination(14027U);
    msg.setDestinationEntity(31U);
    msg.target = 3408U;
    msg.bearing = 0.787391855724;
    msg.elevation = 0.90977838625;

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
    msg.setTimeStamp(0.431604772978);
    msg.setSource(23370U);
    msg.setSourceEntity(122U);
    msg.setDestination(64300U);
    msg.setDestinationEntity(165U);
    msg.target = 31970U;
    msg.bearing = 0.81181845367;
    msg.elevation = 0.948527551144;

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
    msg.setTimeStamp(0.10757797199);
    msg.setSource(1747U);
    msg.setSourceEntity(187U);
    msg.setDestination(51556U);
    msg.setDestinationEntity(30U);
    msg.target = 65442U;
    msg.x = 0.835114184003;
    msg.y = 0.525283190426;
    msg.z = 0.480647542384;

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
    msg.setTimeStamp(0.606248992169);
    msg.setSource(40995U);
    msg.setSourceEntity(175U);
    msg.setDestination(37691U);
    msg.setDestinationEntity(164U);
    msg.target = 45883U;
    msg.x = 0.563819328258;
    msg.y = 0.290739049225;
    msg.z = 0.385227388481;

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
    msg.setTimeStamp(0.290451059654);
    msg.setSource(31339U);
    msg.setSourceEntity(181U);
    msg.setDestination(61849U);
    msg.setDestinationEntity(132U);
    msg.target = 19550U;
    msg.x = 0.920207141698;
    msg.y = 0.726425209637;
    msg.z = 0.0960070857605;

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
    msg.setTimeStamp(0.737272732501);
    msg.setSource(37106U);
    msg.setSourceEntity(41U);
    msg.setDestination(28494U);
    msg.setDestinationEntity(154U);
    msg.target = 48722U;
    msg.lat = 0.948193788455;
    msg.lon = 0.357229240142;
    msg.z_units = 119U;
    msg.z = 0.130076349306;

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
    msg.setTimeStamp(0.00675655754443);
    msg.setSource(30625U);
    msg.setSourceEntity(5U);
    msg.setDestination(56431U);
    msg.setDestinationEntity(200U);
    msg.target = 33488U;
    msg.lat = 0.0629964309145;
    msg.lon = 0.625929504614;
    msg.z_units = 247U;
    msg.z = 0.137720971144;

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
    msg.setTimeStamp(0.065724070296);
    msg.setSource(31520U);
    msg.setSourceEntity(211U);
    msg.setDestination(16551U);
    msg.setDestinationEntity(48U);
    msg.target = 50725U;
    msg.lat = 0.210396602748;
    msg.lon = 0.16984093414;
    msg.z_units = 143U;
    msg.z = 0.176521510167;

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
    msg.setTimeStamp(0.630421796323);
    msg.setSource(61804U);
    msg.setSourceEntity(68U);
    msg.setDestination(4670U);
    msg.setDestinationEntity(92U);
    msg.locale.assign("VCPGGKYYVLQVCIIUOOKYRXLRRASIRDLRLJMYFNCXZXPJJTCDLOLQHXVLWGTPGSRQY");
    const char tmp_msg_0[] = {126, 22, 100, 7, -77, 113, -83, 124, 92, 34, 126, -56, -31, -125, -120, 115, 69, -40, -74, -107, -77};
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
    msg.setTimeStamp(0.549390458148);
    msg.setSource(59538U);
    msg.setSourceEntity(195U);
    msg.setDestination(48680U);
    msg.setDestinationEntity(35U);
    msg.locale.assign("OPGUGCDMUWTHXJTCJAJHWYZLUBNKAFHBYREBSLHDIJLEYHVWCSJGINVEAQHXEVCKRKGWHUEATIYFBUFZRITIZULQNMLWISAZONDOQQOODBYXJRUVSJUNJQVHOCFXZVFNFFGLRBVHRZDTKPSGQSGGFDXAYNEIMPTSY");
    const char tmp_msg_0[] = {-66, 28, -114, 56, -48, 31, 8, 60, 115, 43, -103, 116, -35, -92, -125, 44, 102, 114, 9, 60, -75, 40, 96, 126, 21, -60, 49, -47, -110, -78, -32, -53, 16, -20, -68, 70, 8, 68, 14, -11, -49, -92, 104, 121, 124, -59, 101, 12, 38, -38, -112, 75, -36, 68, 37, -119, 29, -113, -16, 14, -31, -115, -34, 0, 12, 66, -61, -118, 37, 48, 105, -14, 10, 12, -83, -43, -25, 76, 96};
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
    msg.setTimeStamp(0.167721398892);
    msg.setSource(30898U);
    msg.setSourceEntity(40U);
    msg.setDestination(63990U);
    msg.setDestinationEntity(211U);
    msg.locale.assign("LXMCRLSYIKFRIBTSXVPYKSAZFVVDHSVZVMNKDQMJYPBYAQYQULKWWGKVOSVZAWETOBVFMQPTCCNLKZRQOEGOHKNENLSSMRERUIAHSGZAPSF");
    const char tmp_msg_0[] = {-32, 86, -115, -78, 18, 56, -17, 42, -39, 7, 41, 46, -11, 116, 39, -85, 38, 29, 65, 71, 114, -116, 118, -80, -123, -3, 0, 32, 17, 10, 121, -115, 10, 19, -18, 112, -86, 19, -128, 120, -105, 58, 69, -30, -107, 12, -18, 21, 87, -112, 15, 33, 82, 82, -15, 84, -34, -30, 126, -113, -97, -51, -49, 90, -60, -2, 92, -14, -95, -20, -105, 85, -24, -116, 92, 92, 34, -119, -35, 101, -16, 54, 17, 58, 1, 116, 109, 124, 91, 59, -123, -108, -68, 89, 2, -65, -116, 42, -16, -93};
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
    msg.setTimeStamp(0.237909953043);
    msg.setSource(44391U);
    msg.setSourceEntity(247U);
    msg.setDestination(19875U);
    msg.setDestinationEntity(131U);

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
    msg.setTimeStamp(0.179123179769);
    msg.setSource(3802U);
    msg.setSourceEntity(144U);
    msg.setDestination(63483U);
    msg.setDestinationEntity(13U);

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
    msg.setTimeStamp(0.147837358918);
    msg.setSource(38196U);
    msg.setSourceEntity(113U);
    msg.setDestination(59839U);
    msg.setDestinationEntity(176U);

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
    msg.setTimeStamp(0.680733245424);
    msg.setSource(64249U);
    msg.setSourceEntity(18U);
    msg.setDestination(21147U);
    msg.setDestinationEntity(74U);
    msg.camid = 16U;
    msg.x = 52390U;
    msg.y = 17226U;

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
    msg.setTimeStamp(0.616876127034);
    msg.setSource(10973U);
    msg.setSourceEntity(249U);
    msg.setDestination(13985U);
    msg.setDestinationEntity(208U);
    msg.camid = 229U;
    msg.x = 59437U;
    msg.y = 60534U;

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
    msg.setTimeStamp(0.650572188639);
    msg.setSource(5871U);
    msg.setSourceEntity(14U);
    msg.setDestination(20124U);
    msg.setDestinationEntity(69U);
    msg.camid = 236U;
    msg.x = 49953U;
    msg.y = 28164U;

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
    msg.setTimeStamp(0.29692847038);
    msg.setSource(54001U);
    msg.setSourceEntity(164U);
    msg.setDestination(21587U);
    msg.setDestinationEntity(64U);
    msg.camid = 81U;
    msg.x = 17018U;
    msg.y = 8428U;

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
    msg.setTimeStamp(0.357922707032);
    msg.setSource(33852U);
    msg.setSourceEntity(210U);
    msg.setDestination(9156U);
    msg.setDestinationEntity(244U);
    msg.camid = 65U;
    msg.x = 38387U;
    msg.y = 55987U;

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
    msg.setTimeStamp(0.128239229473);
    msg.setSource(35046U);
    msg.setSourceEntity(40U);
    msg.setDestination(26900U);
    msg.setDestinationEntity(250U);
    msg.camid = 7U;
    msg.x = 40230U;
    msg.y = 13333U;

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
    msg.setTimeStamp(0.00169467542977);
    msg.setSource(22472U);
    msg.setSourceEntity(185U);
    msg.setDestination(30447U);
    msg.setDestinationEntity(149U);
    msg.tracking = 165U;
    msg.lat = 0.492973306697;
    msg.lon = 0.686532410765;
    msg.x = 0.670994256003;
    msg.y = 0.974677627092;
    msg.z = 0.160384451295;

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
    msg.setTimeStamp(0.870733699413);
    msg.setSource(5355U);
    msg.setSourceEntity(70U);
    msg.setDestination(52946U);
    msg.setDestinationEntity(53U);
    msg.tracking = 62U;
    msg.lat = 0.209386036333;
    msg.lon = 0.959613558958;
    msg.x = 0.290564902647;
    msg.y = 0.465225798736;
    msg.z = 0.620860847833;

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
    msg.setTimeStamp(0.57770396176);
    msg.setSource(63993U);
    msg.setSourceEntity(89U);
    msg.setDestination(30534U);
    msg.setDestinationEntity(196U);
    msg.tracking = 67U;
    msg.lat = 0.961183784601;
    msg.lon = 0.354071476225;
    msg.x = 0.526502794184;
    msg.y = 0.719252292549;
    msg.z = 0.136560537866;

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
    msg.setTimeStamp(0.692151601525);
    msg.setSource(38020U);
    msg.setSourceEntity(21U);
    msg.setDestination(39301U);
    msg.setDestinationEntity(67U);
    msg.target.assign("JWYEBCJSWIQBHUKMZXNHSLGFUGMVTAIVZLZOLFTYFDJPOKEANDMXHDJKRYSUZROQKCNKLC");
    msg.lbearing = 0.639828806087;
    msg.lelevation = 0.952162246261;
    msg.bearing = 0.947517155496;
    msg.elevation = 0.566565580367;
    msg.phi = 0.7331699355;
    msg.theta = 0.822320103197;
    msg.psi = 0.72326509691;
    msg.accuracy = 0.957149882178;

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
    msg.setTimeStamp(0.937283131137);
    msg.setSource(53466U);
    msg.setSourceEntity(197U);
    msg.setDestination(29749U);
    msg.setDestinationEntity(56U);
    msg.target.assign("VIYXDWOXPNWLWGFKVZRCCSNDTPTSPJNTIQULAJYXUABRVMTHZATYPROWBMYMVZVIZEXESJIGSNGCIEKRVKCTBFDEXNOAHIZJLGMFKACMCFEDQJHNKZIOXRDAJAHKLCMURJMVUOMMEVOPQUQBALDTZYJLFTLHAGBOFTSCEZDVGSQLMIRNEPGSGDNALHEBOHTZKG");
    msg.lbearing = 0.758404509585;
    msg.lelevation = 0.383771546188;
    msg.bearing = 0.571370172722;
    msg.elevation = 0.915196294864;
    msg.phi = 0.939469536408;
    msg.theta = 0.532208415118;
    msg.psi = 0.75986486235;
    msg.accuracy = 0.128454229975;

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
    msg.setTimeStamp(0.937474797502);
    msg.setSource(3995U);
    msg.setSourceEntity(203U);
    msg.setDestination(8934U);
    msg.setDestinationEntity(18U);
    msg.target.assign("PSJGPLQYUPBMIMVEESQKYSASDJGGJONKBKTTBCPKZOHUYGINAIXPNXHMTHIZNGBSZXZFKJQWFZCGXIGWHZKVYAOWXHXIWNECCURZYEACXVOJUREVATQWQRWLITBMNDRQMTCMUETFJYPPYJAMRGQUYVVFOWRIFM");
    msg.lbearing = 0.916153284635;
    msg.lelevation = 0.667422241773;
    msg.bearing = 0.332052921081;
    msg.elevation = 0.486070059032;
    msg.phi = 0.11305108059;
    msg.theta = 0.764763890327;
    msg.psi = 0.26577004689;
    msg.accuracy = 0.0677610650058;

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
    msg.setTimeStamp(0.984750751222);
    msg.setSource(29990U);
    msg.setSourceEntity(70U);
    msg.setDestination(55969U);
    msg.setDestinationEntity(214U);
    msg.target.assign("YBCGTOMDJEVQSUHBMZSFOADBNQXDRVOWDUYUXBWJQKIAVAOLCMWHFWVXAUZEMOSWVBNNRRUZCIVLTLVCTDKHSPNNYGKKDSYLXABYPYWIRDEGZHLOMGRIHNOJXVZUDUOIUVZLFPRMVBGLUYPOXPJERRGLEWBQMFFMMRWIHAGNAEIUXTZEETKNFZZAQJPCJYEOFETPGQKRKKSXHKHMFJQCPASQGSHHF");
    msg.x = 0.540369939369;
    msg.y = 0.682265549682;
    msg.z = 0.452932427763;
    msg.n = 0.0332322983092;
    msg.e = 0.296025927443;
    msg.d = 0.370110675741;
    msg.phi = 0.0490658974436;
    msg.theta = 0.964736677568;
    msg.psi = 0.882803923714;
    msg.accuracy = 0.732116172127;

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
    msg.setTimeStamp(0.52617953344);
    msg.setSource(34042U);
    msg.setSourceEntity(112U);
    msg.setDestination(15626U);
    msg.setDestinationEntity(191U);
    msg.target.assign("YHUPSFKYSUPMWEV");
    msg.x = 0.0994212611613;
    msg.y = 0.71883767443;
    msg.z = 0.957402834351;
    msg.n = 0.51356683517;
    msg.e = 0.20553911003;
    msg.d = 0.118831312976;
    msg.phi = 0.751035859267;
    msg.theta = 0.632106094635;
    msg.psi = 0.982912295372;
    msg.accuracy = 0.0788672390322;

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
    msg.setTimeStamp(0.575546836251);
    msg.setSource(34602U);
    msg.setSourceEntity(67U);
    msg.setDestination(23013U);
    msg.setDestinationEntity(105U);
    msg.target.assign("VVFYMGHHSFLPEZOXXVCNHZDORADFCJAZUFFCALOESQBRVIAFTRCDRDZUTWVRPJLEZJMUAGWGHZKNEFKYNQAOYNHIBULDGPUYBSKKBLSIT");
    msg.x = 0.0606919538817;
    msg.y = 0.584162453991;
    msg.z = 0.363169732193;
    msg.n = 0.980590099803;
    msg.e = 0.524900070942;
    msg.d = 0.677623445312;
    msg.phi = 0.76752040672;
    msg.theta = 0.655922718759;
    msg.psi = 0.361225680005;
    msg.accuracy = 0.285112555625;

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
    msg.setTimeStamp(0.649812221519);
    msg.setSource(63576U);
    msg.setSourceEntity(31U);
    msg.setDestination(3384U);
    msg.setDestinationEntity(248U);
    msg.target.assign("BYECNDFBNUTUZTXKLZGKJBTZVYIIHUPSYYDSQHEXTUJBHETAWOUDOHDXCPGFVTIVMHRDIBDCWZCJEMRYBXJOACSKUNLYWHOQNZGKGSPNRRFRFROLIXYVMEAL");
    msg.lat = 0.422105123799;
    msg.lon = 0.638579641118;
    msg.z_units = 229U;
    msg.z = 0.48992011947;
    msg.accuracy = 0.741005900985;

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
    msg.setTimeStamp(0.811601356563);
    msg.setSource(3154U);
    msg.setSourceEntity(119U);
    msg.setDestination(27378U);
    msg.setDestinationEntity(38U);
    msg.target.assign("DMTSOCAMVFRZKHRTNUUQFDZMUBZGXUOFNMSJJUXMPOHYYFNATKCRRHTIIXFUMADSHCOIGWQMAKQDAJEGAEJQLWRKEEVDJNEOXVBOYJPWHTQKBOCFEQEJQXVLDBTFPAOUJNBPIAWQCBKRAJXQYZBJVPLVBGRSIFNLNZWENGGLUYNTFGKDUDRTSKZTSDOCP");
    msg.lat = 0.558934600056;
    msg.lon = 0.617552336814;
    msg.z_units = 80U;
    msg.z = 0.501157345531;
    msg.accuracy = 0.0977723631989;

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
    msg.setTimeStamp(0.548728441877);
    msg.setSource(53973U);
    msg.setSourceEntity(119U);
    msg.setDestination(38517U);
    msg.setDestinationEntity(121U);
    msg.target.assign("TYRXWUFDYKVBTANKZXHNNYKBHVHRNKVTCUVZMRWUZAJIMMRJOMVKUDSCOLGPOESQHUDAWZPRASERUEGYSX");
    msg.lat = 0.9600075234;
    msg.lon = 0.574462176451;
    msg.z_units = 232U;
    msg.z = 0.325192648165;
    msg.accuracy = 0.99565805414;

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
    msg.setTimeStamp(0.617339487787);
    msg.setSource(23122U);
    msg.setSourceEntity(106U);
    msg.setDestination(7065U);
    msg.setDestinationEntity(93U);
    msg.name.assign("FEVUCHWLBOMZPQYMNALUSMKMOJHWBUYIDGQUYIHXBSNSOBETGYKACSJJKADMOHEPWJTAUQCOTJTWGDYCUBSGXXXVQNZTRYNXICVPREVEENQFTPIIHALEOOIXVXWWCOWKMKQGJRUFIHELYFJWAOLAHAMNFSTVRRTDZVKUDCPMNGICZRNFSR");
    msg.lat = 0.0552766050882;
    msg.lon = 0.986516870912;
    msg.z = 0.0603916157233;
    msg.z_units = 82U;

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
    msg.setTimeStamp(0.346203820108);
    msg.setSource(53910U);
    msg.setSourceEntity(234U);
    msg.setDestination(32092U);
    msg.setDestinationEntity(70U);
    msg.name.assign("EQAHLOCQMYPFUQXNARRFVBEVEJMLLTSBDVSKDRIWHBNR");
    msg.lat = 0.993956228001;
    msg.lon = 0.632981903317;
    msg.z = 0.99481115991;
    msg.z_units = 191U;

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
    msg.setTimeStamp(0.524792281488);
    msg.setSource(24295U);
    msg.setSourceEntity(244U);
    msg.setDestination(9167U);
    msg.setDestinationEntity(194U);
    msg.name.assign("BCAXUAKCUZGTIRBUKINVMCNWKSSHQGIDODSWJPLTFBLBPYYYBLCEOETYZBGPKXZDNTVILKEWFZYFJBAVRQUASEAJFJDOQNQUSBKDJVQQMWDGEIEUHNGWOCVNMFNMIQTPTHRPLCEOOXZXAMJZTRHIGRPVAZRVJFLYCPWMQULTDYC");
    msg.lat = 0.315459357452;
    msg.lon = 0.237562603933;
    msg.z = 0.846535198588;
    msg.z_units = 24U;

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
    msg.setTimeStamp(0.803726631802);
    msg.setSource(5143U);
    msg.setSourceEntity(214U);
    msg.setDestination(14990U);
    msg.setDestinationEntity(251U);
    msg.op = 176U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("JBJNAEMXHWRIEDPAFHIQCTDYSMQOWUYVUUCNCUYJNUOLANESCXHYSFLKLWVLAFSGCYDTZRMKDVYHJPKYOILIMIYQJDAXCIPPBIMTGOJCGVHNSIBTSBEWQCWPKKZFPLBWVOQUMRGADFRWPNUFVYSRLZAJMRQZFUDLPKRMFAUQFGARNTGNHADGYTEJBBPKZLHMKSVVZXTDOHCGJZBPBXZSZSEOVKXNXLKIQCZHVGQOEOEFGWDRTITWQMONX");
    tmp_msg_0.lat = 0.834285883427;
    tmp_msg_0.lon = 0.378546985565;
    tmp_msg_0.z = 0.710845399424;
    tmp_msg_0.z_units = 222U;
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
    msg.setTimeStamp(0.159005484065);
    msg.setSource(21172U);
    msg.setSourceEntity(146U);
    msg.setDestination(63268U);
    msg.setDestinationEntity(121U);
    msg.op = 10U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("KRIVERVIAJUYTTIMGNNLAIPJSCJYREBXQTAPSBBOLPEEBZAUS");
    tmp_msg_0.lat = 0.942145632166;
    tmp_msg_0.lon = 0.219951596022;
    tmp_msg_0.z = 0.231563383779;
    tmp_msg_0.z_units = 175U;
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
    msg.setTimeStamp(0.952930200983);
    msg.setSource(60818U);
    msg.setSourceEntity(222U);
    msg.setDestination(18066U);
    msg.setDestinationEntity(176U);
    msg.op = 33U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("LITQVURCLNILJNBZBBEKKNDOWLITECFKIYXUOJPODOPYMCITKABUDGPHLWQULXPEVNBFATLQYAMRTGYAGIKDXGRGYOZRQSWYXOBKQPINJWSSZDDGAAXMORZDHSEZVMQSGDCTEXYV");
    tmp_msg_0.lat = 0.930484908806;
    tmp_msg_0.lon = 0.448356160066;
    tmp_msg_0.z = 0.455001921967;
    tmp_msg_0.z_units = 225U;
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
    msg.setTimeStamp(0.971289022051);
    msg.setSource(13300U);
    msg.setSourceEntity(36U);
    msg.setDestination(22310U);
    msg.setDestinationEntity(209U);
    msg.value = 0.663366998343;
    msg.type = 65U;

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
    msg.setTimeStamp(0.797683745795);
    msg.setSource(13619U);
    msg.setSourceEntity(141U);
    msg.setDestination(64933U);
    msg.setDestinationEntity(14U);
    msg.value = 0.990754831426;
    msg.type = 125U;

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
    msg.setTimeStamp(0.0268363734687);
    msg.setSource(64344U);
    msg.setSourceEntity(45U);
    msg.setDestination(18328U);
    msg.setDestinationEntity(241U);
    msg.value = 0.898919794541;
    msg.type = 134U;

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
    msg.setTimeStamp(0.342532290917);
    msg.setSource(20080U);
    msg.setSourceEntity(94U);
    msg.setDestination(31872U);
    msg.setDestinationEntity(47U);
    msg.value = 0.952259483255;

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
    msg.setTimeStamp(0.212090978383);
    msg.setSource(22064U);
    msg.setSourceEntity(70U);
    msg.setDestination(12989U);
    msg.setDestinationEntity(60U);
    msg.value = 0.156033346597;

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
    msg.setTimeStamp(0.0435822531292);
    msg.setSource(51629U);
    msg.setSourceEntity(218U);
    msg.setDestination(33845U);
    msg.setDestinationEntity(64U);
    msg.value = 0.330741793675;

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
    msg.setTimeStamp(0.424065114612);
    msg.setSource(34058U);
    msg.setSourceEntity(32U);
    msg.setDestination(36226U);
    msg.setDestinationEntity(44U);
    msg.timestamp_last_service = 0.356947932118;
    msg.time_next_service = 0.220369306861;
    msg.time_motor_next_service = 0.430834857996;
    msg.time_idle_ground = 0.127368566002;
    msg.time_idle_air = 0.141790450072;
    msg.time_idle_water = 0.40733831043;
    msg.time_idle_underwater = 0.00612637558434;
    msg.time_idle_unknown = 0.423206076714;
    msg.time_motor_ground = 0.35591963613;
    msg.time_motor_air = 0.40227404012;
    msg.time_motor_water = 0.644537651199;
    msg.time_motor_underwater = 0.606900361434;
    msg.time_motor_unknown = 0.41981777716;
    msg.rpm_min = 30231;
    msg.rpm_max = -6115;
    msg.depth_max = 0.00366592578035;

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
    msg.setTimeStamp(0.0697483681245);
    msg.setSource(46880U);
    msg.setSourceEntity(92U);
    msg.setDestination(35899U);
    msg.setDestinationEntity(46U);
    msg.timestamp_last_service = 0.725855228258;
    msg.time_next_service = 0.985051874345;
    msg.time_motor_next_service = 0.839124365815;
    msg.time_idle_ground = 0.598693455647;
    msg.time_idle_air = 0.462524232718;
    msg.time_idle_water = 0.255816238178;
    msg.time_idle_underwater = 0.871337678649;
    msg.time_idle_unknown = 0.275750203808;
    msg.time_motor_ground = 0.0665812181715;
    msg.time_motor_air = 0.0490347539846;
    msg.time_motor_water = 0.631273972634;
    msg.time_motor_underwater = 0.733949263645;
    msg.time_motor_unknown = 0.20726692387;
    msg.rpm_min = -958;
    msg.rpm_max = -32018;
    msg.depth_max = 0.82505475888;

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
    msg.setTimeStamp(0.778804938639);
    msg.setSource(11018U);
    msg.setSourceEntity(168U);
    msg.setDestination(21704U);
    msg.setDestinationEntity(157U);
    msg.timestamp_last_service = 0.743818122211;
    msg.time_next_service = 0.83144252921;
    msg.time_motor_next_service = 0.806161584974;
    msg.time_idle_ground = 0.59447082511;
    msg.time_idle_air = 0.283244927765;
    msg.time_idle_water = 0.755253001062;
    msg.time_idle_underwater = 0.80421640723;
    msg.time_idle_unknown = 0.693319627672;
    msg.time_motor_ground = 0.970921273021;
    msg.time_motor_air = 0.943690137417;
    msg.time_motor_water = 0.993113311619;
    msg.time_motor_underwater = 0.198011472885;
    msg.time_motor_unknown = 0.879688389864;
    msg.rpm_min = -2213;
    msg.rpm_max = -22277;
    msg.depth_max = 0.635277864412;

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
    msg.setTimeStamp(0.546074360365);
    msg.setSource(51244U);
    msg.setSourceEntity(223U);
    msg.setDestination(15890U);
    msg.setDestinationEntity(109U);
    msg.severity = 30U;
    msg.text.assign("ETILWVBRBGPBUPQTGODXZQSISQFWDY");

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
    msg.setTimeStamp(0.643854063649);
    msg.setSource(49994U);
    msg.setSourceEntity(63U);
    msg.setDestination(33338U);
    msg.setDestinationEntity(44U);
    msg.severity = 48U;
    msg.text.assign("RVKUOAQMJQZOTVUXXCVEDHXHIQLVKSYJEEHADVARDVAHQCKYNNBTECKOIHYEEWYZGYSTZITLUMDVXWDLNYDAQKJRTFULMHRNBJXIEPLPRZDU");

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
    msg.setTimeStamp(0.65637328826);
    msg.setSource(43886U);
    msg.setSourceEntity(209U);
    msg.setDestination(53703U);
    msg.setDestinationEntity(195U);
    msg.severity = 213U;
    msg.text.assign("PFKOTCJBPFCHJLSQDFJHLVKGFDRWIIQEZNUVVTMGACVEIIXKUMVTRGBVYOGFUELLZRWIBYBCIXWBDWJAZNYPTPRQXFUSFDFIDHQEXCDXSRWWUMSFVZHRZNHOECJONGOKQLKCPPQAJHHVMYNYNUKLZEOLXANYTDNHMVXGLBWWZWBPBFSYJRUSENLKGHTAMYAJDYJJXKBSEMPORGIXQECGQKXZQCUTSZZULA");

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
    msg.setTimeStamp(0.554174598005);
    msg.setSource(13580U);
    msg.setSourceEntity(20U);
    msg.setDestination(55655U);
    msg.setDestinationEntity(171U);
    msg.channel = 99;
    msg.value = 1231964385;
    msg.gain = 208U;

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
    msg.setTimeStamp(0.665542830472);
    msg.setSource(11577U);
    msg.setSourceEntity(9U);
    msg.setDestination(55720U);
    msg.setDestinationEntity(121U);
    msg.channel = 87;
    msg.value = 665262378;
    msg.gain = 7U;

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
    msg.setTimeStamp(0.901283800989);
    msg.setSource(14890U);
    msg.setSourceEntity(199U);
    msg.setDestination(9819U);
    msg.setDestinationEntity(239U);
    msg.channel = 74;
    msg.value = -329241406;
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
    msg.setTimeStamp(0.398016129166);
    msg.setSource(52605U);
    msg.setSourceEntity(90U);
    msg.setDestination(17304U);
    msg.setDestinationEntity(140U);
    msg.ch01 = 0.918251860842;
    msg.ch02 = 0.164289655544;
    msg.ch03 = 0.239947332258;
    msg.ch04 = 0.416468338743;
    msg.ch05 = 0.479032436057;
    msg.ch06 = 0.620803073394;
    msg.ch07 = 0.407411525529;
    msg.ch08 = 0.282867118355;
    msg.ch09 = 0.418439188219;
    msg.ch10 = 0.574480082643;
    msg.ch11 = 0.0299530241656;
    msg.ch12 = 0.780256478797;
    msg.ch13 = 0.0358020415303;
    msg.ch14 = 0.580373530222;
    msg.ch15 = 0.337713284091;
    msg.ch16 = 0.296567617806;

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
    msg.setTimeStamp(0.390249669307);
    msg.setSource(63383U);
    msg.setSourceEntity(13U);
    msg.setDestination(11282U);
    msg.setDestinationEntity(60U);
    msg.ch01 = 0.149844137314;
    msg.ch02 = 0.360143082966;
    msg.ch03 = 0.456955468849;
    msg.ch04 = 0.702533790172;
    msg.ch05 = 0.449686190261;
    msg.ch06 = 0.260725569968;
    msg.ch07 = 0.9639965478;
    msg.ch08 = 0.175816749255;
    msg.ch09 = 0.258603920466;
    msg.ch10 = 0.651889730839;
    msg.ch11 = 0.579661618738;
    msg.ch12 = 0.29936094489;
    msg.ch13 = 0.488483618431;
    msg.ch14 = 0.786683187589;
    msg.ch15 = 0.251757731627;
    msg.ch16 = 0.975371294;

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
    msg.setTimeStamp(0.732043593944);
    msg.setSource(50266U);
    msg.setSourceEntity(5U);
    msg.setDestination(24819U);
    msg.setDestinationEntity(248U);
    msg.ch01 = 0.925532393357;
    msg.ch02 = 0.616020068446;
    msg.ch03 = 0.546631557458;
    msg.ch04 = 0.348421184161;
    msg.ch05 = 0.598558104831;
    msg.ch06 = 0.480005553564;
    msg.ch07 = 0.0729136575359;
    msg.ch08 = 0.0190107090871;
    msg.ch09 = 0.649326936754;
    msg.ch10 = 0.393610985832;
    msg.ch11 = 0.716375236315;
    msg.ch12 = 0.3794876045;
    msg.ch13 = 0.538107847282;
    msg.ch14 = 0.404542645167;
    msg.ch15 = 0.541936917223;
    msg.ch16 = 0.0372446440001;

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
    msg.setTimeStamp(0.105632823191);
    msg.setSource(37669U);
    msg.setSourceEntity(223U);
    msg.setDestination(4080U);
    msg.setDestinationEntity(141U);
    msg.time = 0.76026440869;
    msg.ang = 0.492268032005;

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
    msg.setTimeStamp(0.764831815177);
    msg.setSource(13835U);
    msg.setSourceEntity(51U);
    msg.setDestination(34682U);
    msg.setDestinationEntity(44U);
    msg.time = 0.427564636884;
    msg.ang = 0.979292862604;

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
    msg.setTimeStamp(0.788020267004);
    msg.setSource(6293U);
    msg.setSourceEntity(215U);
    msg.setDestination(19453U);
    msg.setDestinationEntity(238U);
    msg.time = 0.53215476191;
    msg.ang = 0.194886289109;

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
    msg.setTimeStamp(0.483410291536);
    msg.setSource(32055U);
    msg.setSourceEntity(85U);
    msg.setDestination(52659U);
    msg.setDestinationEntity(65U);
    msg.value = 0.126352213825;

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
    msg.setTimeStamp(0.825482406158);
    msg.setSource(27941U);
    msg.setSourceEntity(161U);
    msg.setDestination(36579U);
    msg.setDestinationEntity(160U);
    msg.value = 0.900377616412;

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
    msg.setTimeStamp(0.173037483668);
    msg.setSource(53321U);
    msg.setSourceEntity(45U);
    msg.setDestination(12168U);
    msg.setDestinationEntity(5U);
    msg.value = 0.677800079973;

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
    msg.setTimeStamp(0.6605982759);
    msg.setSource(57266U);
    msg.setSourceEntity(186U);
    msg.setDestination(33707U);
    msg.setDestinationEntity(32U);
    msg.value = 0.985968337049;

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
    msg.setTimeStamp(0.377282893343);
    msg.setSource(61998U);
    msg.setSourceEntity(43U);
    msg.setDestination(2288U);
    msg.setDestinationEntity(81U);
    msg.value = 0.340909016204;

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
    msg.setTimeStamp(0.594934757953);
    msg.setSource(34180U);
    msg.setSourceEntity(89U);
    msg.setDestination(58171U);
    msg.setDestinationEntity(100U);
    msg.value = 0.798287893493;

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
    msg.setTimeStamp(0.885207923411);
    msg.setSource(10069U);
    msg.setSourceEntity(44U);
    msg.setDestination(24319U);
    msg.setDestinationEntity(110U);
    msg.value = 0.118514527563;

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
    msg.setTimeStamp(0.0139759643512);
    msg.setSource(48472U);
    msg.setSourceEntity(114U);
    msg.setDestination(63595U);
    msg.setDestinationEntity(54U);
    msg.value = 0.405939370263;

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
    msg.setTimeStamp(0.603730862447);
    msg.setSource(6108U);
    msg.setSourceEntity(231U);
    msg.setDestination(40899U);
    msg.setDestinationEntity(172U);
    msg.value = 0.119414396338;

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
    msg.setTimeStamp(0.155403669941);
    msg.setSource(54122U);
    msg.setSourceEntity(26U);
    msg.setDestination(23407U);
    msg.setDestinationEntity(53U);
    msg.l2 = 12;
    msg.l3 = -128;
    msg.iridium = -41;
    msg.modem = 104;
    msg.pumps = 38;
    msg.vhf = -127;

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
    msg.setTimeStamp(0.398374232317);
    msg.setSource(15813U);
    msg.setSourceEntity(20U);
    msg.setDestination(65369U);
    msg.setDestinationEntity(172U);
    msg.l2 = -123;
    msg.l3 = -63;
    msg.iridium = -4;
    msg.modem = -88;
    msg.pumps = -122;
    msg.vhf = -46;

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
    msg.setTimeStamp(0.633002247092);
    msg.setSource(34544U);
    msg.setSourceEntity(240U);
    msg.setDestination(16080U);
    msg.setDestinationEntity(68U);
    msg.l2 = -12;
    msg.l3 = -46;
    msg.iridium = -73;
    msg.modem = 27;
    msg.pumps = -24;
    msg.vhf = -64;

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
    msg.setTimeStamp(0.893476082866);
    msg.setSource(44598U);
    msg.setSourceEntity(203U);
    msg.setDestination(40430U);
    msg.setDestinationEntity(202U);
    msg.angle = 0.515636605384;
    msg.reference.assign("RPBQBYIEOLVDGODITPWIWZXSZYCZHBOXUUACTIHEJQTLERAOKILXXFRCAMKNWOJCEOZVUVGTHNJHIQJHNCLAUPDXFXRRNSJMKXDWPAIQMIYVYQBEFBVYQBUKWZAMDQCLZZUJNOTXVMWAQLBOICYELPKHNEBUCEGMMSEKOVZRPFNF");
    msg.speed = 0.730838217283;

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
    msg.setTimeStamp(0.704960953633);
    msg.setSource(27146U);
    msg.setSourceEntity(105U);
    msg.setDestination(12522U);
    msg.setDestinationEntity(143U);
    msg.angle = 0.54434880737;
    msg.reference.assign("WJXCPPGOMFIQPNGQCVZADWHDOZBXNMTKFWNRWARCGCJPSLAZSHGILZURKPECTIUXYGQIYCADWFHSMGZCLFUYBGQKIWTTQICNVRPMPBANEMCSBHSWBELFYUSEGZSRLE");
    msg.speed = 0.27778397378;

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
    msg.setTimeStamp(0.306434552233);
    msg.setSource(38462U);
    msg.setSourceEntity(226U);
    msg.setDestination(30983U);
    msg.setDestinationEntity(45U);
    msg.angle = 0.639351415227;
    msg.reference.assign("NIHIYYMOLXZXXUVEKGVYDEMSFKXBRDCEHNRXWFRFLMCLPWPYXBQGSOXAPYIWGJGSCTPBNNHEPPAMHHKPJMTCQOKITYZUQGZUWQUTPAJJAKOSYKTPVFOWEZDDMQNQBFDKNUDVNRZWZNLKXBLWUMBIYJZVBOLAGLRUDNUUEMVMF");
    msg.speed = 0.98125793592;

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
    msg.setTimeStamp(0.114745269909);
    msg.setSource(23804U);
    msg.setSourceEntity(101U);
    msg.setDestination(5904U);
    msg.setDestinationEntity(131U);
    msg.angle = 0.684469018181;
    msg.speed = 0.413653657993;

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
    msg.setTimeStamp(0.781360808165);
    msg.setSource(54318U);
    msg.setSourceEntity(192U);
    msg.setDestination(28956U);
    msg.setDestinationEntity(201U);
    msg.angle = 0.632529451817;
    msg.speed = 0.462153475987;

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
    msg.setTimeStamp(0.809305194006);
    msg.setSource(27982U);
    msg.setSourceEntity(126U);
    msg.setDestination(32003U);
    msg.setDestinationEntity(41U);
    msg.angle = 0.212310819234;
    msg.speed = 0.00349441315316;

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
    msg.setTimeStamp(0.98926433238);
    msg.setSource(52508U);
    msg.setSourceEntity(181U);
    msg.setDestination(41886U);
    msg.setDestinationEntity(137U);
    msg.dir = 0.0443943102626;
    msg.speed = 0.152087082883;

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
    msg.setTimeStamp(0.739560320328);
    msg.setSource(25323U);
    msg.setSourceEntity(13U);
    msg.setDestination(25878U);
    msg.setDestinationEntity(148U);
    msg.dir = 0.81730289799;
    msg.speed = 0.528844265363;

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
    msg.setTimeStamp(0.742388670895);
    msg.setSource(57835U);
    msg.setSourceEntity(47U);
    msg.setDestination(46178U);
    msg.setDestinationEntity(142U);
    msg.dir = 0.154267708633;
    msg.speed = 0.811050053202;

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
    msg.setTimeStamp(0.153779674825);
    msg.setSource(45427U);
    msg.setSourceEntity(244U);
    msg.setDestination(20372U);
    msg.setDestinationEntity(104U);
    msg.x = 0.986068939383;
    msg.y = 0.806965152498;
    msg.z1 = 0.328123639933;
    msg.z2 = 0.0973062362729;

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
    msg.setTimeStamp(0.365472495919);
    msg.setSource(26333U);
    msg.setSourceEntity(57U);
    msg.setDestination(27372U);
    msg.setDestinationEntity(37U);
    msg.x = 0.5394435908;
    msg.y = 0.454824520781;
    msg.z1 = 0.268654486095;
    msg.z2 = 0.662447960254;

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
    msg.setTimeStamp(0.513605062253);
    msg.setSource(54939U);
    msg.setSourceEntity(18U);
    msg.setDestination(41421U);
    msg.setDestinationEntity(174U);
    msg.x = 0.573324620361;
    msg.y = 0.831801732329;
    msg.z1 = 0.104242038279;
    msg.z2 = 0.974027754985;

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
    msg.setTimeStamp(0.661395188912);
    msg.setSource(32268U);
    msg.setSourceEntity(172U);
    msg.setDestination(64336U);
    msg.setDestinationEntity(145U);
    msg.mmsi.assign("FFPFADBTWBZMLRNFLTPVHXKJDNKZQZXGFQEYBGBCNTGWZZQMDTMUQURIPFLQCBUDSAEFOYBFRJIUPGCOEDOJXWPNHXTSQ");
    msg.lat = 0.394680068638;
    msg.lon = 0.839266746151;
    msg.x = 0.349934761777;
    msg.y = 0.609277377068;
    msg.speed = 0.758829887971;
    msg.course = 0.213623084877;
    msg.dist = 0.997181206829;
    msg.length = 0.621172608574;
    msg.width = 0.668472884224;
    msg.o_vect = 0.582436674361;

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
    msg.setTimeStamp(0.00760264122218);
    msg.setSource(59802U);
    msg.setSourceEntity(145U);
    msg.setDestination(38688U);
    msg.setDestinationEntity(34U);
    msg.mmsi.assign("YZJKCQCFLRTQGFNJMKJFZIOIVIZRP");
    msg.lat = 0.717251605236;
    msg.lon = 0.940560174588;
    msg.x = 0.00805387276979;
    msg.y = 0.0426332643929;
    msg.speed = 0.420320131434;
    msg.course = 0.803199584495;
    msg.dist = 0.466202494775;
    msg.length = 0.25901155727;
    msg.width = 0.600566914634;
    msg.o_vect = 0.50913271964;

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
    msg.setTimeStamp(0.387604278957);
    msg.setSource(3223U);
    msg.setSourceEntity(196U);
    msg.setDestination(725U);
    msg.setDestinationEntity(168U);
    msg.mmsi.assign("BIFWOXGQWCNTHZAYRAAUYMMTZCEEKSTLXRXL");
    msg.lat = 0.892668246367;
    msg.lon = 0.695431571213;
    msg.x = 0.39566126845;
    msg.y = 0.0857715231732;
    msg.speed = 0.561064493164;
    msg.course = 0.975450053147;
    msg.dist = 0.0288803412479;
    msg.length = 0.701321252163;
    msg.width = 0.715081422309;
    msg.o_vect = 0.512666025482;

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
    msg.setTimeStamp(0.387617519295);
    msg.setSource(10365U);
    msg.setSourceEntity(107U);
    msg.setDestination(53384U);
    msg.setDestinationEntity(8U);
    msg.locations.assign("SZWCTNXYNZUKWMALCCKLAQLSEOHGCWRTBLZBXSFQGASYDUEBRGQHBPUIZLBMSUBFTJDAXUCOBMWZIGODSQIENJTXNHVYMKAQTRE");

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
    msg.setTimeStamp(0.0220941710011);
    msg.setSource(36909U);
    msg.setSourceEntity(160U);
    msg.setDestination(26281U);
    msg.setDestinationEntity(163U);
    msg.locations.assign("ABHEMDFTSOYCXVHWXOBLCFRGMTYEIYYEJINWJHRPZTLIKXKWXGLHDZKOFUJPDCDVUVSCIPAZQSDQEMYZGUMQGKVPTLTCVYQHNUZSSCUWIWWDGHSJEOSRESOPNRJMQEMOVVWLUKVQARFGXUDWNQJIYIBSWIKOLHFOQLZTRFXAZGCNJZBCAOFIFREMBCTNRKVPGUHAPUNAZEYNPXDWBBMTFXJOAUZDSETXMPKKHI");

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
    msg.setTimeStamp(0.76611209076);
    msg.setSource(62094U);
    msg.setSourceEntity(63U);
    msg.setDestination(12122U);
    msg.setDestinationEntity(156U);
    msg.locations.assign("BXQAPNYEEKEBOQRZNCXHSHNZTPVAYRGVQDDGFOQZPCIZWUJWLZUUBIZVGDKWEKTPSJJWHHFGAYCOOMCQAHVVYXDXMFUSTQBELYI");

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
    msg.setTimeStamp(0.915148045714);
    msg.setSource(27041U);
    msg.setSourceEntity(146U);
    msg.setDestination(54342U);
    msg.setDestinationEntity(107U);
    msg.value = 0.662504620449;

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
    msg.setTimeStamp(0.016354681702);
    msg.setSource(43445U);
    msg.setSourceEntity(97U);
    msg.setDestination(16395U);
    msg.setDestinationEntity(127U);
    msg.value = 0.27444467964;

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
    msg.setTimeStamp(0.737869415557);
    msg.setSource(50516U);
    msg.setSourceEntity(33U);
    msg.setDestination(60977U);
    msg.setDestinationEntity(110U);
    msg.value = 0.946829745339;

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
    msg.setTimeStamp(0.446725686943);
    msg.setSource(52610U);
    msg.setSourceEntity(225U);
    msg.setDestination(46257U);
    msg.setDestinationEntity(143U);
    msg.beam1 = 0.681052038865;
    msg.beam2 = 0.105328549176;
    msg.beam3 = 0.348812401957;
    msg.beam4 = 0.814615915073;

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
    msg.setTimeStamp(0.137326545801);
    msg.setSource(16005U);
    msg.setSourceEntity(17U);
    msg.setDestination(48160U);
    msg.setDestinationEntity(88U);
    msg.beam1 = 0.491810370651;
    msg.beam2 = 0.720120355218;
    msg.beam3 = 0.860802716358;
    msg.beam4 = 0.401304121653;

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
    msg.setTimeStamp(0.443529144806);
    msg.setSource(47733U);
    msg.setSourceEntity(202U);
    msg.setDestination(47239U);
    msg.setDestinationEntity(88U);
    msg.beam1 = 0.933225753018;
    msg.beam2 = 0.329301919385;
    msg.beam3 = 0.558293083393;
    msg.beam4 = 0.282633512303;

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
    msg.setTimeStamp(0.0030186960478);
    msg.setSource(6933U);
    msg.setSourceEntity(2U);
    msg.setDestination(7104U);
    msg.setDestinationEntity(230U);
    msg.beam1 = 54U;
    msg.beam2 = 179U;
    msg.beam3 = 142U;
    msg.beam4 = 191U;

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
    msg.setTimeStamp(0.829887099785);
    msg.setSource(29110U);
    msg.setSourceEntity(46U);
    msg.setDestination(4701U);
    msg.setDestinationEntity(82U);
    msg.beam1 = 130U;
    msg.beam2 = 9U;
    msg.beam3 = 110U;
    msg.beam4 = 51U;

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
    msg.setTimeStamp(0.818646827843);
    msg.setSource(44502U);
    msg.setSourceEntity(100U);
    msg.setDestination(27812U);
    msg.setDestinationEntity(29U);
    msg.beam1 = 42U;
    msg.beam2 = 102U;
    msg.beam3 = 175U;
    msg.beam4 = 1U;

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
    msg.setTimeStamp(0.840264854187);
    msg.setSource(53816U);
    msg.setSourceEntity(145U);
    msg.setDestination(10141U);
    msg.setDestinationEntity(38U);
    msg.pos = 0.151123166013;

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
    msg.setTimeStamp(0.569763973274);
    msg.setSource(4462U);
    msg.setSourceEntity(164U);
    msg.setDestination(10466U);
    msg.setDestinationEntity(177U);
    msg.pos = 0.811020600998;

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
    msg.setTimeStamp(0.63720873641);
    msg.setSource(9233U);
    msg.setSourceEntity(161U);
    msg.setDestination(65379U);
    msg.setDestinationEntity(160U);
    msg.pos = 0.264189128312;
    IMC::ADCPBeam tmp_msg_0;
    tmp_msg_0.vel = 0.500603538916;
    tmp_msg_0.amp = 0.417488282904;
    tmp_msg_0.cor = 132U;
    msg.beams.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.849359315953);
    msg.setSource(6290U);
    msg.setSourceEntity(147U);
    msg.setDestination(53344U);
    msg.setDestinationEntity(24U);
    msg.beams = 232U;
    msg.cells = 26U;
    msg.coord_sys = 234U;
    IMC::CurrentProfileCell tmp_msg_0;
    tmp_msg_0.pos = 0.325066728064;
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
    msg.setTimeStamp(0.753336183338);
    msg.setSource(51718U);
    msg.setSourceEntity(247U);
    msg.setDestination(54339U);
    msg.setDestinationEntity(0U);
    msg.beams = 60U;
    msg.cells = 160U;
    msg.coord_sys = 132U;

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
    msg.setTimeStamp(0.916558273353);
    msg.setSource(53796U);
    msg.setSourceEntity(110U);
    msg.setDestination(47606U);
    msg.setDestinationEntity(13U);
    msg.beams = 64U;
    msg.cells = 240U;
    msg.coord_sys = 171U;
    IMC::CurrentProfileCell tmp_msg_0;
    tmp_msg_0.pos = 0.463017813425;
    IMC::ADCPBeam tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.vel = 0.452306038538;
    tmp_tmp_msg_0_0.amp = 0.739500867089;
    tmp_tmp_msg_0_0.cor = 51U;
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
    msg.setTimeStamp(0.0897355977802);
    msg.setSource(6855U);
    msg.setSourceEntity(212U);
    msg.setDestination(26511U);
    msg.setDestinationEntity(154U);
    msg.vel = 0.566180859006;
    msg.amp = 0.260811486581;
    msg.cor = 146U;

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
    msg.setTimeStamp(0.915881553778);
    msg.setSource(50351U);
    msg.setSourceEntity(139U);
    msg.setDestination(314U);
    msg.setDestinationEntity(195U);
    msg.vel = 0.20200944238;
    msg.amp = 0.19830270949;
    msg.cor = 81U;

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
    msg.setTimeStamp(0.961757374088);
    msg.setSource(13342U);
    msg.setSourceEntity(33U);
    msg.setDestination(29411U);
    msg.setDestinationEntity(82U);
    msg.vel = 0.0790393427471;
    msg.amp = 0.225376681531;
    msg.cor = 88U;

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
    msg.setTimeStamp(0.229724869299);
    msg.setSource(51524U);
    msg.setSourceEntity(59U);
    msg.setDestination(8623U);
    msg.setDestinationEntity(191U);
    msg.serial_no = 2155223642U;
    msg.unix_timestamp = 614854776U;
    msg.millis = 23285U;
    msg.trans_protocol = 248U;
    msg.trans_id = 1812073692U;
    msg.trans_data = 50096U;
    msg.snr = 231U;
    msg.trans_freq = 59U;
    msg.recv_mem_addr = 59451U;
    msg.lat = 0.539211319857;
    msg.lon = 0.333853627979;

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
    msg.setTimeStamp(0.513175058251);
    msg.setSource(38267U);
    msg.setSourceEntity(138U);
    msg.setDestination(44840U);
    msg.setDestinationEntity(167U);
    msg.serial_no = 2177371997U;
    msg.unix_timestamp = 754549895U;
    msg.millis = 47740U;
    msg.trans_protocol = 160U;
    msg.trans_id = 3536398262U;
    msg.trans_data = 58210U;
    msg.snr = 129U;
    msg.trans_freq = 223U;
    msg.recv_mem_addr = 49503U;
    msg.lat = 0.370701395811;
    msg.lon = 0.565394691319;

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
    msg.setTimeStamp(0.85235721338);
    msg.setSource(36604U);
    msg.setSourceEntity(246U);
    msg.setDestination(6102U);
    msg.setDestinationEntity(74U);
    msg.serial_no = 4274610724U;
    msg.unix_timestamp = 336380109U;
    msg.millis = 53386U;
    msg.trans_protocol = 75U;
    msg.trans_id = 2024700109U;
    msg.trans_data = 2091U;
    msg.snr = 220U;
    msg.trans_freq = 129U;
    msg.recv_mem_addr = 13565U;
    msg.lat = 0.491248462041;
    msg.lon = 0.828298286088;

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
    msg.setTimeStamp(0.613039449074);
    msg.setSource(18018U);
    msg.setSourceEntity(166U);
    msg.setDestination(17785U);
    msg.setDestinationEntity(174U);
    msg.serial_no = 3998497481U;
    msg.unix_timestamp = 2257075942U;
    msg.temperature = 0.473667519616;
    msg.avg_noise_level = 169U;
    msg.peak_noise_level = 145U;
    msg.recv_listen_freq = 175U;
    msg.recv_mem_addr = 20878U;

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
    msg.setTimeStamp(0.952986806821);
    msg.setSource(46866U);
    msg.setSourceEntity(162U);
    msg.setDestination(54097U);
    msg.setDestinationEntity(207U);
    msg.serial_no = 3664878182U;
    msg.unix_timestamp = 314068969U;
    msg.temperature = 0.385904757692;
    msg.avg_noise_level = 145U;
    msg.peak_noise_level = 94U;
    msg.recv_listen_freq = 166U;
    msg.recv_mem_addr = 11571U;

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
    msg.setTimeStamp(0.953961558488);
    msg.setSource(33981U);
    msg.setSourceEntity(144U);
    msg.setDestination(35441U);
    msg.setDestinationEntity(12U);
    msg.serial_no = 4193405043U;
    msg.unix_timestamp = 4251310555U;
    msg.temperature = 0.385084384549;
    msg.avg_noise_level = 205U;
    msg.peak_noise_level = 189U;
    msg.recv_listen_freq = 178U;
    msg.recv_mem_addr = 24757U;

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
    msg.setTimeStamp(0.450521334697);
    msg.setSource(31393U);
    msg.setSourceEntity(154U);
    msg.setDestination(64741U);
    msg.setDestinationEntity(193U);
    msg.frequency = 3626965653U;
    msg.info.assign("JERKMQELFSRHKMNIDRDAQCIHPQXWMAGBMYRXHIJNIQFWHQCHPLZNXEXZLIUYXPNTJBXPICXUOUWYYRKOGSUFONKUPVHRLUPKITAGDAXS");

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
    msg.setTimeStamp(0.440385913937);
    msg.setSource(9254U);
    msg.setSourceEntity(82U);
    msg.setDestination(46814U);
    msg.setDestinationEntity(220U);
    msg.frequency = 3813112960U;
    msg.info.assign("PJDATBJCCIWDGBRMQSLYVOKQHPFCLBRVPVXJMT");

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
    msg.setTimeStamp(0.315840522395);
    msg.setSource(27481U);
    msg.setSourceEntity(20U);
    msg.setDestination(30258U);
    msg.setDestinationEntity(181U);
    msg.frequency = 583501232U;
    msg.info.assign("PTECCMIJMXKVBGGEGADIANFFZOIMLARKWENDYQARSWTUHTFPEORHTEXRUAUCXPBYJ");

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
    msg.setTimeStamp(0.269077547519);
    msg.setSource(21044U);
    msg.setSourceEntity(243U);
    msg.setDestination(15695U);
    msg.setDestinationEntity(23U);
    msg.adcp = -53;
    msg.adcp_dur = 3114410546U;
    msg.adcp_fr = 3137411571U;
    msg.ctd = -44;
    msg.ctd_dur = 2105261212U;
    msg.ctd_fr = 668593698U;
    msg.opt = -90;
    msg.opt_dur = 3385756656U;
    msg.opt_fr = 2906843004U;
    msg.tbl = 7;
    msg.tbl_dur = 872553631U;
    msg.tbl_fr = 1495974474U;
    msg.eco = -80;
    msg.eco_dur = 695195500U;
    msg.eco_fr = 1777276650U;
    msg.par = -5;
    msg.par_dur = 2186899103U;
    msg.par_fr = 1086456072U;

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
    msg.setTimeStamp(0.704993501711);
    msg.setSource(61616U);
    msg.setSourceEntity(244U);
    msg.setDestination(19840U);
    msg.setDestinationEntity(196U);
    msg.adcp = 48;
    msg.adcp_dur = 196207808U;
    msg.adcp_fr = 1799529945U;
    msg.ctd = -84;
    msg.ctd_dur = 1949110558U;
    msg.ctd_fr = 4171280096U;
    msg.opt = -109;
    msg.opt_dur = 3006889764U;
    msg.opt_fr = 2385976671U;
    msg.tbl = 26;
    msg.tbl_dur = 77417130U;
    msg.tbl_fr = 1519231376U;
    msg.eco = -95;
    msg.eco_dur = 773795086U;
    msg.eco_fr = 3783277709U;
    msg.par = 22;
    msg.par_dur = 2027970201U;
    msg.par_fr = 237461595U;

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
    msg.setTimeStamp(0.0345710244155);
    msg.setSource(63640U);
    msg.setSourceEntity(237U);
    msg.setDestination(29076U);
    msg.setDestinationEntity(245U);
    msg.adcp = 6;
    msg.adcp_dur = 2150227225U;
    msg.adcp_fr = 1576059124U;
    msg.ctd = 97;
    msg.ctd_dur = 3476247906U;
    msg.ctd_fr = 2762180926U;
    msg.opt = 124;
    msg.opt_dur = 3297789913U;
    msg.opt_fr = 1135126315U;
    msg.tbl = -59;
    msg.tbl_dur = 3911748000U;
    msg.tbl_fr = 2307905856U;
    msg.eco = -124;
    msg.eco_dur = 1570560258U;
    msg.eco_fr = 2734215908U;
    msg.par = -110;
    msg.par_dur = 1432825373U;
    msg.par_fr = 3207230871U;

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
    msg.setTimeStamp(0.473657722953);
    msg.setSource(16053U);
    msg.setSourceEntity(182U);
    msg.setDestination(28583U);
    msg.setDestinationEntity(126U);
    msg.adcp = -126;
    msg.adcp_dur = 586774406U;
    msg.adcp_fr = 33723354U;
    msg.ctd = -64;
    msg.ctd_dur = 2458892763U;
    msg.ctd_fr = 4203165023U;
    msg.opt = 121;
    msg.opt_dur = 4066541651U;
    msg.opt_fr = 1625612850U;
    msg.tbl = 79;
    msg.tbl_dur = 859547613U;
    msg.tbl_fr = 2410239692U;
    msg.eco = 0;
    msg.eco_dur = 676364100U;
    msg.eco_fr = 406935196U;
    msg.par = -58;
    msg.par_dur = 4087576826U;
    msg.par_fr = 3306956650U;

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
    msg.setTimeStamp(0.971090088486);
    msg.setSource(46024U);
    msg.setSourceEntity(4U);
    msg.setDestination(37157U);
    msg.setDestinationEntity(206U);
    msg.adcp = -17;
    msg.adcp_dur = 982761296U;
    msg.adcp_fr = 1720249276U;
    msg.ctd = 37;
    msg.ctd_dur = 2126622615U;
    msg.ctd_fr = 2088653969U;
    msg.opt = 34;
    msg.opt_dur = 3894308624U;
    msg.opt_fr = 788331261U;
    msg.tbl = 125;
    msg.tbl_dur = 2929431289U;
    msg.tbl_fr = 3223889239U;
    msg.eco = 46;
    msg.eco_dur = 2574392804U;
    msg.eco_fr = 3079014589U;
    msg.par = 110;
    msg.par_dur = 2079800094U;
    msg.par_fr = 2990688286U;

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
    msg.setTimeStamp(0.0656728878772);
    msg.setSource(16569U);
    msg.setSourceEntity(11U);
    msg.setDestination(43355U);
    msg.setDestinationEntity(55U);
    msg.adcp = 16;
    msg.adcp_dur = 2526292725U;
    msg.adcp_fr = 2417822645U;
    msg.ctd = -33;
    msg.ctd_dur = 2574868038U;
    msg.ctd_fr = 1365651838U;
    msg.opt = 51;
    msg.opt_dur = 3771847622U;
    msg.opt_fr = 3998118108U;
    msg.tbl = 80;
    msg.tbl_dur = 2773563318U;
    msg.tbl_fr = 3799530515U;
    msg.eco = 119;
    msg.eco_dur = 2656232934U;
    msg.eco_fr = 1376451317U;
    msg.par = 58;
    msg.par_dur = 2599472324U;
    msg.par_fr = 1428164307U;

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
    msg.setTimeStamp(0.0266977119801);
    msg.setSource(52205U);
    msg.setSourceEntity(60U);
    msg.setDestination(16469U);
    msg.setDestinationEntity(93U);
    msg.value = 0.862147041171;

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
    msg.setTimeStamp(0.327482315643);
    msg.setSource(22172U);
    msg.setSourceEntity(130U);
    msg.setDestination(54648U);
    msg.setDestinationEntity(101U);
    msg.value = 0.927394660113;

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
    msg.setTimeStamp(0.167619266662);
    msg.setSource(10118U);
    msg.setSourceEntity(140U);
    msg.setDestination(7469U);
    msg.setDestinationEntity(203U);
    msg.value = 0.819713749241;

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
    msg.setTimeStamp(0.350075164962);
    msg.setSource(65027U);
    msg.setSourceEntity(171U);
    msg.setDestination(28446U);
    msg.setDestinationEntity(161U);
    msg.lat = 0.350862981627;
    msg.lon = 0.364635547519;
    msg.depth.assign("CGDDEYIUIUFTXFHMKQRHFSJTBLEZNHLWTIRJVLQNSGKNWZFFSMGMCSMKYUCKBYDIEXTRQCCYCAFBSWKWDOJYGVUVFRPDOVTFXGHMAZQDIRNXUNA");
    msg.vel.assign("FQXOYCZLZLWUJLVIRPTQGLOFDWLYMXHFNHSXKJCDXAUGOBMMITUPGVBDWPDKKXCXSGNEMHZERHQNKCTAIARYGKUKBVHEAQXZXLKZBWYVOUWRYINRNTSNGRVEGMTUQWJTECCGTXFMBLMJHYPPBOZULZPPBLIQVEQCWVFVMAQFQWSLEQUHHDJKGOOIPHETVPRHSZSGCNASCRUPFNZYCYAOTBDIYIJWAOWIFSFKDNRUKBZNDAJXEV");
    msg.dir.assign("TRVPGMIPHEUMIDIFGLUCNLNCWORNSRNPDQDVPMTFBAKYNKKJLXOCBTLFEIVIRWNOUIKTYQGARAGJYKYHXUHPVEVDIUQYJEGZRMNPYQEXVOKZPGDZDOSFJZCJIHIBCBZCZEGXBYGBAQMNFHHOPQATFJQXUVCPLOMAWSHDNEBUREIBAEMKBRFJHXTAHSDWQCXLUTLTQFVZCXVZJFYYVSWCLQLSAWYDKZJFWKTMWZHJSPSRR");

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
    msg.setTimeStamp(0.849077350268);
    msg.setSource(12916U);
    msg.setSourceEntity(194U);
    msg.setDestination(36706U);
    msg.setDestinationEntity(43U);
    msg.lat = 0.542998057883;
    msg.lon = 0.060013638856;
    msg.depth.assign("ABSMLNAMIRENZVZZXGDKUZHEIREWHYHMXZKCGQJEIKJXXMOTYKZYDFTLFNMDMOAIPJPBCAYLCZJPRYANAJCCVJLVPTGWSHWHC");
    msg.vel.assign("MNQJXOTVUSOXYKPAFGUDVBMFCHRLZRXAYBLVMVNNQWKITZAWHTAHDEMHSQICPDVDKVJPHBYWOYGDVRWUCQYFPNXRJBHGIVWXUUECSQOPCEZTDCIZAPZNZEWLBSGLSYUXHQFETJESGIURQYGKKFWSPRENDSTHZENJUKLHIUJCOPSDXMMTBCKEXQNWMTQJBFFIBJRCYLKFA");
    msg.dir.assign("ZKQIJZLEGYJOUHBKTGNXWKAGSQRMPBEQSXSXCMFDOPCRSFUXOMNDGUXHPCVSSFFTPXZQBJIIUZMJOHETBWKEECTBPSRKCZHFRHZMDEGMRPLITVOWLEDXVNOJYYTIJWANYKNWFAPVLXPIBDZLFHVEUJODQGGCIWNEZBMRODMMASCAYVJIUSYGNYWBCBWLVXUNLSAUKQRZNATUTOVAQACNLIJJDWRQFDRXPTFKGYPOATQLYIYHKKBFCU");

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
    msg.setTimeStamp(0.965309124947);
    msg.setSource(4576U);
    msg.setSourceEntity(63U);
    msg.setDestination(24020U);
    msg.setDestinationEntity(190U);
    msg.lat = 0.484720504158;
    msg.lon = 0.793413278095;
    msg.depth.assign("CJBEXODTZOPSUZQND");
    msg.vel.assign("OORTBANCLPLAFIESBSODKIFXNSOXWAMXPPNTRYJYEGUMLCMAXPSDQMOGWTFBZZDEJTYFELDDHIEYOTPKEGWCWUJAKVAESMYYQRZBZOQXQPAXJKFILOQMIDGTGCRHNAZIJXRTUKRCFBWUBSSCHEUQWKWOKJNGVBDRGYH");
    msg.dir.assign("ZIVEPISMEFMZQZTHLGXQXBGJOBYHLOXNUJJNUWBKCBSWZWPMXFNGTZFZDYYBVSGAARYJVLAYICPATOFOAWNDUYNUXEKKCNJBUBHMUCMQMCTOEEDDSRAMTIPXSAHRWVQDOESHUGFZASLVRDBTDMQHKOQRAIIIVTEUVDOCLOHTRWCXLXVILEEJCKNJWF");

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
    msg.setTimeStamp(0.895769557713);
    msg.setSource(45659U);
    msg.setSourceEntity(252U);
    msg.setDestination(56802U);
    msg.setDestinationEntity(208U);
    msg.source.assign("DITEGYJQOJOQBBWKZWNGLQCKBSIVRNPHNSHLKZARIXFAAPYMPPFUAZFTUKBZBIVGXISNPJVCKRPXDVGTQQVYKYHESCIREUEJULHIYVVHSDTUVHOGXWFLXWPYATDFQMGTHZGUNDBVCGSIPSWMYMMOCRBXSBNLOLXIGOHXZTECMJACAALLGJYOWFNNQRMRKUIUBKDREOPWRPMEWFZQEZQWFDJUKHVYDLXJENYMKOJODZ");
    msg.lat = 0.00348504514514;
    msg.lon = 0.773415004684;
    msg.sog = 0.810404788803;
    msg.uc = 0.235664981172;
    msg.depth = 0.428485889186;
    msg.value = 0.732870086858;

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
    msg.setTimeStamp(0.824575844356);
    msg.setSource(21044U);
    msg.setSourceEntity(244U);
    msg.setDestination(12684U);
    msg.setDestinationEntity(243U);
    msg.source.assign("HIKAYHUSLQACNQTUDPNOIKKZUDTPMFMIVYBJNMQPVYXXXAIGEBFPMGWEZCZDJCPGKIESKWSGMTZMRLXOHTOV");
    msg.lat = 0.471835373392;
    msg.lon = 0.38898538804;
    msg.sog = 0.817654980486;
    msg.uc = 0.676009852731;
    msg.depth = 0.896574805826;
    msg.value = 0.068814104025;

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
    msg.setTimeStamp(0.672597357271);
    msg.setSource(11493U);
    msg.setSourceEntity(213U);
    msg.setDestination(60773U);
    msg.setDestinationEntity(48U);
    msg.source.assign("JNPRVCZCDFIKLAQLREVMXPEOSJFRENPFUPXASJITXWYMKHZFNQKCPKZGMGZ");
    msg.lat = 0.671154081273;
    msg.lon = 0.327992193893;
    msg.sog = 0.320983998968;
    msg.uc = 0.853297517712;
    msg.depth = 0.939083348354;
    msg.value = 0.38960239121;

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

  {
    IMC::Imu msg;
    msg.setTimeStamp(0.452335561512);
    msg.setSource(38996U);
    msg.setSourceEntity(114U);
    msg.setDestination(51326U);
    msg.setDestinationEntity(17U);
    IMC::Acceleration tmp_msg_0;
    tmp_msg_0.time = 0.777448342695;
    tmp_msg_0.x = 0.26203981494;
    tmp_msg_0.y = 0.64916664103;
    tmp_msg_0.z = 0.619407573506;
    msg.acceleration.set(tmp_msg_0);
    IMC::AngularVelocity tmp_msg_1;
    tmp_msg_1.time = 0.964344258351;
    tmp_msg_1.x = 0.654609969588;
    tmp_msg_1.y = 0.239875265622;
    tmp_msg_1.z = 0.425132064063;
    msg.angular_velocity.set(tmp_msg_1);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Imu #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Imu msg;
    msg.setTimeStamp(0.798193537363);
    msg.setSource(5541U);
    msg.setSourceEntity(232U);
    msg.setDestination(16828U);
    msg.setDestinationEntity(122U);
    IMC::Acceleration tmp_msg_0;
    tmp_msg_0.time = 0.859959880206;
    tmp_msg_0.x = 0.353187591775;
    tmp_msg_0.y = 0.131213162239;
    tmp_msg_0.z = 0.762876053828;
    msg.acceleration.set(tmp_msg_0);
    IMC::AngularVelocity tmp_msg_1;
    tmp_msg_1.time = 0.517771953661;
    tmp_msg_1.x = 0.449854639645;
    tmp_msg_1.y = 0.396354759322;
    tmp_msg_1.z = 0.0550957163405;
    msg.angular_velocity.set(tmp_msg_1);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Imu #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Imu msg;
    msg.setTimeStamp(0.30078098721);
    msg.setSource(29851U);
    msg.setSourceEntity(214U);
    msg.setDestination(42804U);
    msg.setDestinationEntity(54U);
    IMC::Acceleration tmp_msg_0;
    tmp_msg_0.time = 0.310642685702;
    tmp_msg_0.x = 0.248997296741;
    tmp_msg_0.y = 0.777966296865;
    tmp_msg_0.z = 0.477735619562;
    msg.acceleration.set(tmp_msg_0);
    IMC::AngularVelocity tmp_msg_1;
    tmp_msg_1.time = 0.298546734293;
    tmp_msg_1.x = 0.371374379696;
    tmp_msg_1.y = 0.619980816715;
    tmp_msg_1.z = 0.696254982997;
    msg.angular_velocity.set(tmp_msg_1);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Imu #2", msg == *msg_d);
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

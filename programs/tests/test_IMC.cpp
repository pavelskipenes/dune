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
// IMC XML MD5: 20a504881dddf9f325ff8d637ebaf4e3                            *
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
    msg.setTimeStamp(0.0136001096847);
    msg.setSource(59304U);
    msg.setSourceEntity(103U);
    msg.setDestination(39049U);
    msg.setDestinationEntity(246U);
    msg.state = 233U;
    msg.flags = 58U;
    msg.description.assign("UEXBVPIZJXPRLQSAAZORPTPLQTTQEOFZTMPXXLZZKQDDVCYCAKEBJOVWXGWVKSUUVSNICZVCIZIRAOYJUMLPCIKYDANDXQVWNUFBRYGGYLDSMRICEYTMEYOBWQVHGHHHXKCPGOHDSNE");

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
    msg.setTimeStamp(0.179196397443);
    msg.setSource(20538U);
    msg.setSourceEntity(125U);
    msg.setDestination(31133U);
    msg.setDestinationEntity(245U);
    msg.state = 143U;
    msg.flags = 233U;
    msg.description.assign("HWVXFOKRJNJIYPQGEHYUABIRVHSSXZSKXEHZJBCDUWJNIMWBDONFBLEPOHKLVJVANGEPCTENCBTNDSMSWYBHWKKHHLOMWZAYTZIYVGRBOAVPLFNLIKFVQQJLWUKVDXTXUKGEDLCXLIBYAFMRJPCKMGMRPCVZFZZQTQXRSXOMWHRTPATOJKFROUPEGNCPSITHEDNBPZIGVDDUFCUZMAGGRDYUSQYWY");

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
    msg.setTimeStamp(0.848478227394);
    msg.setSource(55408U);
    msg.setSourceEntity(136U);
    msg.setDestination(2011U);
    msg.setDestinationEntity(110U);
    msg.state = 180U;
    msg.flags = 134U;
    msg.description.assign("MDBKHYWDEITFXWSUAVXRQNNJSRECGSNBMKFOHAJHVVDYCIQDULNEDNFRKAKVIBUXMDIUGLCOLKCRZLHALOPZOULCAXPTXKJUVFTPOBSHRVTPZQSKPGOMIPXMKEIVJBZDGYUGXOFCRQLANJTEGWJPJMXPRSATBYHVNGQMWXAIZUSVFQ");

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
    msg.setTimeStamp(0.469279015927);
    msg.setSource(16198U);
    msg.setSourceEntity(187U);
    msg.setDestination(47U);
    msg.setDestinationEntity(74U);

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
    msg.setTimeStamp(0.444446195896);
    msg.setSource(1028U);
    msg.setSourceEntity(197U);
    msg.setDestination(57241U);
    msg.setDestinationEntity(56U);

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
    msg.setTimeStamp(0.40763709851);
    msg.setSource(3882U);
    msg.setSourceEntity(139U);
    msg.setDestination(59287U);
    msg.setDestinationEntity(71U);

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
    msg.setTimeStamp(0.988509314492);
    msg.setSource(21594U);
    msg.setSourceEntity(78U);
    msg.setDestination(31249U);
    msg.setDestinationEntity(237U);
    msg.id = 65U;
    msg.label.assign("AFIVKILAVVJJBIMCSFDZYWKEAKPMHVARVFOYQBAQHCPEJDLJTMZPZOYGDBQLWZNCMXAOPCGTQTHGIRYRUQQTUFGXTUNSPUXGTZXJZCLRMNTXXPBEQONHBXXYJOORLQBWQAIVWNFMUCEAHOJZIROHGHDSCSKEPIPWZPLKRSZEVVUJWFHDWLTIDNHYQHKUEDKSDDPXFSCTRXUTDLFKYSNVSLYNSAFZKLVJMIEOMKWRIMNCFWBBGOGJ");
    msg.component.assign("SUDFIIPOCKTLKDNTBWYFWOZ");
    msg.act_time = 59500U;
    msg.deact_time = 12599U;

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
    msg.setTimeStamp(0.203947636482);
    msg.setSource(48233U);
    msg.setSourceEntity(71U);
    msg.setDestination(49402U);
    msg.setDestinationEntity(135U);
    msg.id = 183U;
    msg.label.assign("TRLOBLDEEVTECUNNWTABVXGRBFXDQBGLRSFVXBWTGWERJADUAWCXCREHQYZWDZMZIOQRDQHNTJHPSGKGPEUIBGHLZTEPIILYKJMWKXOYGOHPAWQSX");
    msg.component.assign("MCJGQXCFKWTWDWHDEBESYXBVTYUILJPBSFNROCKXVIPTOARIPGYBXMLKUFWHZWUEJGEDCIOQJRGQIYYGUCNTJYSQMPLERCGOLOYMOWPASCTXMFSGHZIBQE");
    msg.act_time = 31076U;
    msg.deact_time = 2271U;

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
    msg.setTimeStamp(0.108972469256);
    msg.setSource(32956U);
    msg.setSourceEntity(142U);
    msg.setDestination(13746U);
    msg.setDestinationEntity(231U);
    msg.id = 153U;
    msg.label.assign("DHICUZSLOVMLYZJYJPGNGDSOBTNODFZHEWHTLMEWBOSENNCTAGQPAOQRMQYWFPLPXJWMACKGVWUZIKFDCDHUQEZZNCRUKRVIGLTYTSZTFBQBTGJOGLTJCKJDWXFYGHCMFKXHXCIDFELMPXWUJEIEBZVDHQVWZNFYXVUFLKYRVYICRBMNPSWMIAHNTUKCQGKXAAXRLUVAQSDEUQPRSSAOKOISRSBOPXNUHJAGEPLMERYK");
    msg.component.assign("LNLSPNSRRKNSVVQSQPOZUEUECABODKWUGSDWGOAWBXHXIDEIBOGJERZWCVMCNKXFUTMFXXOFBAZCWMVGCRURDERAXMYKJSIQCSSGZMMNNCXHGVMYLIZIYPBDADLYCYZVFNV");
    msg.act_time = 46346U;
    msg.deact_time = 45109U;

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
    msg.setTimeStamp(0.510030294701);
    msg.setSource(30491U);
    msg.setSourceEntity(121U);
    msg.setDestination(45057U);
    msg.setDestinationEntity(167U);
    msg.id = 79U;

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
    msg.setTimeStamp(0.709683249556);
    msg.setSource(42803U);
    msg.setSourceEntity(126U);
    msg.setDestination(64571U);
    msg.setDestinationEntity(8U);
    msg.id = 168U;

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
    msg.setTimeStamp(0.907863179408);
    msg.setSource(53128U);
    msg.setSourceEntity(156U);
    msg.setDestination(2447U);
    msg.setDestinationEntity(102U);
    msg.id = 168U;

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
    msg.setTimeStamp(0.280743610028);
    msg.setSource(38818U);
    msg.setSourceEntity(74U);
    msg.setDestination(6112U);
    msg.setDestinationEntity(41U);
    msg.op = 224U;
    msg.list.assign("ZRCIYXHZTBYLCMXCCXPRJTUBTMSZ");

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
    msg.setTimeStamp(0.411665074507);
    msg.setSource(62437U);
    msg.setSourceEntity(243U);
    msg.setDestination(9689U);
    msg.setDestinationEntity(113U);
    msg.op = 15U;
    msg.list.assign("IKLEEDMHFRVHTEWBEDXYYBLMTIXVMQCLGMMXJALLWO");

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
    msg.setTimeStamp(0.563471073297);
    msg.setSource(18970U);
    msg.setSourceEntity(27U);
    msg.setDestination(20276U);
    msg.setDestinationEntity(123U);
    msg.op = 72U;
    msg.list.assign("NULNLLXQOYZYURMMPZNIYCHYUIVBVJSPYPBMBRVGOOTWLPDZBRPPEYGHDXHOUGJLQVFYEZKWWAYFCHYVNRMHJBQQXXEDSRTNFJUUONMAQDZAFMJCELKDGZXTVSAQQGIZWQUBJNIMXIIKKIHKRZBMUFXHCHMSHWGGPVCKDKPCEJPNASASGSWLASIETQAFUBTPNJQTWRLKGFO");

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
    msg.setTimeStamp(0.661353958216);
    msg.setSource(58054U);
    msg.setSourceEntity(110U);
    msg.setDestination(59088U);
    msg.setDestinationEntity(6U);
    msg.value = 48U;

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
    msg.setTimeStamp(0.951533338628);
    msg.setSource(19496U);
    msg.setSourceEntity(3U);
    msg.setDestination(19209U);
    msg.setDestinationEntity(199U);
    msg.value = 162U;

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
    msg.setTimeStamp(0.716511283925);
    msg.setSource(53550U);
    msg.setSourceEntity(130U);
    msg.setDestination(65154U);
    msg.setDestinationEntity(128U);
    msg.value = 246U;

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
    msg.setTimeStamp(0.764761863887);
    msg.setSource(43287U);
    msg.setSourceEntity(239U);
    msg.setDestination(3475U);
    msg.setDestinationEntity(80U);
    msg.consumer.assign("NIXJLWRQVNSERVGAXPZEQOOLBUFBGTDZMVEIHCDVPHGGQYEPLEJEAKDIFBONCVJRPUCVDCCHGJOSSATBOKPOQXBMNEMAYKZSTSYNQSYWNEQL");
    msg.message_id = 10924U;

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
    msg.setTimeStamp(0.605440378368);
    msg.setSource(5178U);
    msg.setSourceEntity(17U);
    msg.setDestination(43602U);
    msg.setDestinationEntity(146U);
    msg.consumer.assign("KMTEHDINZANYHUDQNEUNSYWUQTTHXXHKVVJLXXVPFKGCMLOIJDUVXIAXPWLEYGPTNDEYGSIMACLUDYABDNCXBCSVGSZRFGVISEMCKAWKJTPHCBZIDOLQEUNFJWVMZGEKNIZOJEGRVT");
    msg.message_id = 44565U;

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
    msg.setTimeStamp(0.963011347928);
    msg.setSource(56181U);
    msg.setSourceEntity(157U);
    msg.setDestination(32421U);
    msg.setDestinationEntity(67U);
    msg.consumer.assign("GCHHTXEGFFDEZFSIPPSNALKRYFMZQOMNXBFUTNXKWUBAJLYCHACLJKYZJTDAVAAEARSPOBBBTKNDIZHYRMZIFRRXAKLYQXHRTVGWCIRNCSOQPMQKQIBBMDRPWZZJULUYUHHGTQARYTJOEVNQJJGFNCGPSEUOJLXPVIVYMCSQVAHVEDSZKPJSLMGIYFIKCGSPHLWWBCEGYEZEVBTMWCOIQOJLDLNIDWTUGNODFMQKEXFWRVXNUZWXBDHWOXTOU");
    msg.message_id = 3428U;

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
    msg.setTimeStamp(0.186334930824);
    msg.setSource(29543U);
    msg.setSourceEntity(84U);
    msg.setDestination(18971U);
    msg.setDestinationEntity(210U);
    msg.type = 208U;

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
    msg.setTimeStamp(0.478551812103);
    msg.setSource(44722U);
    msg.setSourceEntity(18U);
    msg.setDestination(34565U);
    msg.setDestinationEntity(246U);
    msg.type = 121U;

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
    msg.setTimeStamp(0.935239935938);
    msg.setSource(21367U);
    msg.setSourceEntity(35U);
    msg.setDestination(44628U);
    msg.setDestinationEntity(64U);
    msg.type = 53U;

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
    msg.setTimeStamp(0.888827889649);
    msg.setSource(15945U);
    msg.setSourceEntity(77U);
    msg.setDestination(19387U);
    msg.setDestinationEntity(197U);
    msg.op = 121U;

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
    msg.setTimeStamp(0.861719161377);
    msg.setSource(24903U);
    msg.setSourceEntity(62U);
    msg.setDestination(26072U);
    msg.setDestinationEntity(242U);
    msg.op = 7U;

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
    msg.setTimeStamp(0.286096265346);
    msg.setSource(12736U);
    msg.setSourceEntity(196U);
    msg.setDestination(48267U);
    msg.setDestinationEntity(110U);
    msg.op = 143U;

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
    msg.setTimeStamp(0.0969000963938);
    msg.setSource(40866U);
    msg.setSourceEntity(81U);
    msg.setDestination(48956U);
    msg.setDestinationEntity(77U);
    msg.total_steps = 95U;
    msg.step_number = 74U;
    msg.step.assign("QFDVUFAHTTUUVRGIASJXDGPNFRNYJODUVQSOPRGABZIKSPGCDQWZWSEDUZJQTFYCIHMYUFCLSGWEJFVXMZDHMCYBGAWLBVKQUUWZJNBPARSTJCOPJYOPCNABHQXXOWTKEXXQKTIKJYKPEPRNVVVYTXDNRYEKHVINEGEHIQFTDHGSBZGXARMEOYBPFIIBEPICMBLDONWSVMLRBZNZEZDAKRHZOFCQYMLJOLKRIWTSXNAQ");
    msg.flags = 60U;

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
    msg.setTimeStamp(0.681777609531);
    msg.setSource(17318U);
    msg.setSourceEntity(241U);
    msg.setDestination(28359U);
    msg.setDestinationEntity(68U);
    msg.total_steps = 86U;
    msg.step_number = 90U;
    msg.step.assign("VQOCHFQOGBPXXJYRVLEGZSTVIPRVATQTFGGJATNFJKKUUXFSGVMNKFJEMMWGYROXQQYPWBDBYVIZXVOILKGGAMHCAFFZ");
    msg.flags = 9U;

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
    msg.setTimeStamp(0.861546226954);
    msg.setSource(36131U);
    msg.setSourceEntity(96U);
    msg.setDestination(42143U);
    msg.setDestinationEntity(172U);
    msg.total_steps = 235U;
    msg.step_number = 252U;
    msg.step.assign("JPPKXXOECBJEEATAPMXMYLFTZHJCLBUGOS");
    msg.flags = 197U;

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
    msg.setTimeStamp(0.693184062564);
    msg.setSource(5690U);
    msg.setSourceEntity(195U);
    msg.setDestination(12488U);
    msg.setDestinationEntity(99U);
    msg.state = 151U;
    msg.error.assign("PFRCSUPLFWDIYCEIZOHTEYTCHCPCLRLEAIPIZFJXOAXHIYTKNVKHEBRFPNXGNVBONAQAHMZKGXXQSKTTFBNAZHAUOLSUENUBWQGUJXJMREYAXEQLESRTVDWOJAUHESPBQEMWVMOFGFLIXYGOHGUYXSURQXYDNTTGGDQDVNCCYRNPOSKVCMKOKPYGVZBFAILCQFUKMFRZVDMKYJBJWOQLBKJVBNZWUHWSMIZWDRTMWD");

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
    msg.setTimeStamp(0.0794336892883);
    msg.setSource(39504U);
    msg.setSourceEntity(132U);
    msg.setDestination(19101U);
    msg.setDestinationEntity(130U);
    msg.state = 52U;
    msg.error.assign("ZKEECHGPQQYIEJLCTCFXDFURAACXJAJAQLRFLKJWPNLNEHAHVIBVCQUHPSFSMOWMYPKLDOSBJXBDKXSTYUOGOJCYQMGKWMUSDSVTXWRZDRFZLYZXXNMTLGOZFTMOBNRZXGIEXKMQEJUPS");

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
    msg.setTimeStamp(0.400455567153);
    msg.setSource(20385U);
    msg.setSourceEntity(162U);
    msg.setDestination(59472U);
    msg.setDestinationEntity(238U);
    msg.state = 69U;
    msg.error.assign("IWSHKEPKQRLKAPZFTYKLXDNTZUZHNJRAUWXFVADPODUIJXKOBAXKAGKFAJFBQYCKVSEQYBEMMRVRFPWBHFJPWBOBAVWVGYNZGEHHBHJOZBWSLCXISFODXKPNUOCNCOMMLJESRVWTIYU");

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
    msg.setTimeStamp(0.790733644069);
    msg.setSource(21518U);
    msg.setSourceEntity(204U);
    msg.setDestination(44969U);
    msg.setDestinationEntity(225U);

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
    msg.setTimeStamp(0.662444754027);
    msg.setSource(30322U);
    msg.setSourceEntity(150U);
    msg.setDestination(50095U);
    msg.setDestinationEntity(113U);

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
    msg.setTimeStamp(0.850448351174);
    msg.setSource(31488U);
    msg.setSourceEntity(71U);
    msg.setDestination(10528U);
    msg.setDestinationEntity(32U);

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
    msg.setTimeStamp(0.0219964141003);
    msg.setSource(6506U);
    msg.setSourceEntity(252U);
    msg.setDestination(33752U);
    msg.setDestinationEntity(93U);
    msg.op = 112U;
    msg.speed_min = 0.0990972014641;
    msg.speed_max = 0.676499480325;
    msg.long_accel = 0.0779626157197;
    msg.alt_max_msl = 0.452452871785;
    msg.dive_fraction_max = 0.282836456253;
    msg.climb_fraction_max = 0.586737528085;
    msg.bank_max = 0.509575819607;
    msg.p_max = 0.00557425388982;
    msg.pitch_min = 0.853230244163;
    msg.pitch_max = 0.599873479222;
    msg.q_max = 0.658142971883;
    msg.g_min = 0.31694366343;
    msg.g_max = 0.355804468408;
    msg.g_lat_max = 0.584735874295;
    msg.rpm_min = 0.491213839667;
    msg.rpm_max = 0.759536130907;
    msg.rpm_rate_max = 0.496875042494;

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
    msg.setTimeStamp(0.772597020514);
    msg.setSource(65528U);
    msg.setSourceEntity(214U);
    msg.setDestination(55680U);
    msg.setDestinationEntity(180U);
    msg.op = 25U;
    msg.speed_min = 0.0727109156267;
    msg.speed_max = 0.487045570384;
    msg.long_accel = 0.831104148448;
    msg.alt_max_msl = 0.0395140410393;
    msg.dive_fraction_max = 0.824712397623;
    msg.climb_fraction_max = 0.0917144970732;
    msg.bank_max = 0.921461782472;
    msg.p_max = 0.830860904392;
    msg.pitch_min = 0.157376719085;
    msg.pitch_max = 0.369893405288;
    msg.q_max = 0.372707422254;
    msg.g_min = 0.553539799028;
    msg.g_max = 0.38410170798;
    msg.g_lat_max = 0.697473913018;
    msg.rpm_min = 0.763368443143;
    msg.rpm_max = 0.944331190131;
    msg.rpm_rate_max = 0.216412023317;

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
    msg.setTimeStamp(0.318218238486);
    msg.setSource(63906U);
    msg.setSourceEntity(174U);
    msg.setDestination(29700U);
    msg.setDestinationEntity(225U);
    msg.op = 207U;
    msg.speed_min = 0.949758494351;
    msg.speed_max = 0.339740613311;
    msg.long_accel = 0.677654986666;
    msg.alt_max_msl = 0.527072220917;
    msg.dive_fraction_max = 0.969691107172;
    msg.climb_fraction_max = 0.60054399101;
    msg.bank_max = 0.0183453687933;
    msg.p_max = 0.841460848862;
    msg.pitch_min = 0.877382877737;
    msg.pitch_max = 0.933726779353;
    msg.q_max = 0.524284664755;
    msg.g_min = 0.326946829427;
    msg.g_max = 0.190591937151;
    msg.g_lat_max = 0.671745622811;
    msg.rpm_min = 0.20437825444;
    msg.rpm_max = 0.489832954946;
    msg.rpm_rate_max = 0.505354767156;

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
    msg.setTimeStamp(0.256936530628);
    msg.setSource(30206U);
    msg.setSourceEntity(170U);
    msg.setDestination(16441U);
    msg.setDestinationEntity(60U);

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
    msg.setTimeStamp(0.614194868822);
    msg.setSource(38146U);
    msg.setSourceEntity(177U);
    msg.setDestination(52339U);
    msg.setDestinationEntity(160U);
    IMC::QueryEntityParameters tmp_msg_0;
    tmp_msg_0.name.assign("WPKWVCFMFBNLKCMZKXFFICVIPNZQNTRINTGGTDSHXOJQQCKLZHONSZNUKZIMGOASPFEALXLIHGUAJBJAOCYMACNUFXBDEYKEXXYLMDUSHDUSJMWCWYLRHFPSEIPUXDVTQGAFVTERMTOQREVZVWZBMRVRREFDRIBLFHPBZXKSUJUXKNYYARSEKYCCGBYZJUAPGYLWBYIGOAQNVXQVDGCOHUTESQSVBG");
    tmp_msg_0.visibility.assign("RHTVUSLCCFBGGLNMHAKWVKKEILWGVUZUMQFJ");
    tmp_msg_0.scope.assign("WRAQJRLQQWJHAYPEFNNJHTPSSKXCMTGMFRXUDMMAUVFEHIBWWSMPOFUOOVNRVDDTEWVFNIRAFIBJTPYEPHDHKGDCGSRHOEDOTYCRXTPUTNFSPTQCDALXAXPIGVDOULRLIHYNJMEFQANGSOXQJPTZJWJXYKEQBGVQZBGNEYLUPZBKYB");
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
    msg.setTimeStamp(0.412083385393);
    msg.setSource(43179U);
    msg.setSourceEntity(117U);
    msg.setDestination(29092U);
    msg.setDestinationEntity(213U);

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
    msg.setTimeStamp(0.240813503347);
    msg.setSource(6488U);
    msg.setSourceEntity(26U);
    msg.setDestination(32629U);
    msg.setDestinationEntity(233U);
    msg.lat = 0.214319032572;
    msg.lon = 0.816320443876;
    msg.height = 0.242354260881;
    msg.x = 0.793020129558;
    msg.y = 0.0472988232275;
    msg.z = 0.664762379392;
    msg.phi = 0.584093802407;
    msg.theta = 0.677017427303;
    msg.psi = 0.356768668941;
    msg.u = 0.771184626236;
    msg.v = 0.17750576562;
    msg.w = 0.193238393058;
    msg.p = 0.150477904702;
    msg.q = 0.418649348855;
    msg.r = 0.55420283679;
    msg.svx = 0.723537239314;
    msg.svy = 0.763508224815;
    msg.svz = 0.176690042953;

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
    msg.setTimeStamp(0.94160250911);
    msg.setSource(15147U);
    msg.setSourceEntity(113U);
    msg.setDestination(41267U);
    msg.setDestinationEntity(17U);
    msg.lat = 0.217641523782;
    msg.lon = 0.942898463099;
    msg.height = 0.945123125026;
    msg.x = 0.187861909462;
    msg.y = 0.0938925393345;
    msg.z = 0.457618228361;
    msg.phi = 0.565506353636;
    msg.theta = 0.348947213734;
    msg.psi = 0.235148143907;
    msg.u = 0.227117017294;
    msg.v = 0.744832751468;
    msg.w = 0.138231696067;
    msg.p = 0.0418400972189;
    msg.q = 0.214216255908;
    msg.r = 0.248433863065;
    msg.svx = 0.634506281837;
    msg.svy = 0.211657701733;
    msg.svz = 0.0986552524131;

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
    msg.setTimeStamp(0.368222703389);
    msg.setSource(33610U);
    msg.setSourceEntity(60U);
    msg.setDestination(42164U);
    msg.setDestinationEntity(69U);
    msg.lat = 0.695700813644;
    msg.lon = 0.687303842242;
    msg.height = 0.21779556024;
    msg.x = 0.588620932707;
    msg.y = 0.847285087102;
    msg.z = 0.0864341129303;
    msg.phi = 0.358024767985;
    msg.theta = 0.125096909989;
    msg.psi = 0.552952294777;
    msg.u = 0.536611673816;
    msg.v = 0.440927703325;
    msg.w = 0.210243374716;
    msg.p = 0.185258241879;
    msg.q = 0.955664318625;
    msg.r = 0.318059608559;
    msg.svx = 0.741926922852;
    msg.svy = 0.63146856807;
    msg.svz = 0.227229991967;

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
    msg.setTimeStamp(0.550623441145);
    msg.setSource(818U);
    msg.setSourceEntity(20U);
    msg.setDestination(46536U);
    msg.setDestinationEntity(216U);
    msg.op = 153U;
    msg.entities.assign("XGLCEDZMWDLZERIBBRSPHQXYGIGIZMVHMOWOGDPIKSSJYEUTFFQAXEDNGITTYSXTMRAQWDWVBFSKNFXQJDEVVTNPCKOCELUCNBEQGWKZAYHNKJSGJYZXKRHAPMSRLBUCKLYPCWDXTNLHLOJPZSORUQZBOYIMCLQKJAULJYIHBUTUSOOVBHYDAURBWLPEMWJFCZEDBQPORHVFIVNXRTMDZEGIPIVFUXVMQNCCAXVHG");

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
    msg.setTimeStamp(0.2720447556);
    msg.setSource(60093U);
    msg.setSourceEntity(24U);
    msg.setDestination(31701U);
    msg.setDestinationEntity(82U);
    msg.op = 59U;
    msg.entities.assign("GUTXAEHDGIXDFOMSVBSORILGYIZSILTHXSNYHOTJUKUQKRMHBVYOGBSEIKDCQZKZBNEAKATQYDWXTLMZWCCVGSEKWHKETQSUWLBIOVJUNE");

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
    msg.setTimeStamp(0.178483388532);
    msg.setSource(45931U);
    msg.setSourceEntity(54U);
    msg.setDestination(56710U);
    msg.setDestinationEntity(236U);
    msg.op = 108U;
    msg.entities.assign("BKJFZTVRXQPDRGWTXMLPOFHSBAHYVYBBIZHDXRKJIBNYMUIXEBDGMLSVVXZMQWDLGWQQATTUMCWLSYGDDIUCLAYWSTNDSJENQPZAOAQZTOYUAEGTDFAPYMFAJREPYFBHZMCSEWRWPLPCWZHNOWSMVFPUNKRHVFIKMLQUAKFG");

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
    msg.setTimeStamp(0.0595637664371);
    msg.setSource(64998U);
    msg.setSourceEntity(216U);
    msg.setDestination(30896U);
    msg.setDestinationEntity(185U);
    msg.type = 247U;
    msg.speed = 2228U;
    const char tmp_msg_0[] = {46, -8, 25, -124, 22, -52, -82, -32, 3, -98, 38, -27, -81, 100, 60, -17, -75, -123, 84, -14, -122, -30, 78, -70, -89, 92, 77, 23, 89, -114, 48, -25, 58, 9, 10, 8, 0, -106, -56, -19, 62, 96, 51, -66, 24, -70, -29, -57, -46, 78, 117, -93, -59, -117, 99, 72, -44, -35, 61, -85, -90, -124, 104, -63, -9, -15, -36, -18, -108, -74, 62, -40, -37, 6, -65, -90, -83, -87, -74, 16, 61, 114, 124, -20, -48, -57, 98, 99, 13};
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
    msg.setTimeStamp(0.248503531515);
    msg.setSource(43167U);
    msg.setSourceEntity(171U);
    msg.setDestination(48982U);
    msg.setDestinationEntity(51U);
    msg.type = 92U;
    msg.speed = 43809U;
    const char tmp_msg_0[] = {-73, 121, 77, -70, 114, -31, 27, 54, -70, 99, -99, -18, -122, 31, -13, 111, -125, -92, 75, -70, 75, 82, -103, -112, 2, 109, 25, -100, 15, -36, -39, 64, 42, -121, 7, -117, -16, 69, -71, 58, -15, 51, 113, 119, 34, 4, 34, 84, -63, 10, -55, 18, -22, -102, 86, 44, -121, 58, -89, -128, -1, -51, -80, 49, 104, 93, 77, 93, 85, -87, -22};
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
    msg.setTimeStamp(0.646698431889);
    msg.setSource(60817U);
    msg.setSourceEntity(110U);
    msg.setDestination(33038U);
    msg.setDestinationEntity(172U);
    msg.type = 222U;
    msg.speed = 9743U;
    const char tmp_msg_0[] = {30, 25, 46, 30, -95, -15, -88, -29, 45, 1, 108, 62, -4, 83};
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
    msg.setTimeStamp(0.952681623752);
    msg.setSource(9600U);
    msg.setSourceEntity(122U);
    msg.setDestination(58198U);
    msg.setDestinationEntity(199U);
    msg.op = 23U;
    msg.tas2acc_pgain = 0.929718092434;
    msg.bank2p_pgain = 0.470716625019;

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
    msg.setTimeStamp(0.246735545676);
    msg.setSource(45054U);
    msg.setSourceEntity(109U);
    msg.setDestination(5165U);
    msg.setDestinationEntity(188U);
    msg.op = 164U;
    msg.tas2acc_pgain = 0.949211242161;
    msg.bank2p_pgain = 0.257301365737;

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
    msg.setTimeStamp(0.498368013965);
    msg.setSource(14719U);
    msg.setSourceEntity(166U);
    msg.setDestination(55815U);
    msg.setDestinationEntity(34U);
    msg.op = 236U;
    msg.tas2acc_pgain = 0.198485722239;
    msg.bank2p_pgain = 0.753044708349;

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
    msg.setTimeStamp(0.567708741822);
    msg.setSource(2976U);
    msg.setSourceEntity(184U);
    msg.setDestination(64510U);
    msg.setDestinationEntity(234U);
    msg.available = 2033875190U;
    msg.value = 152U;

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
    msg.setTimeStamp(0.8335270991);
    msg.setSource(17150U);
    msg.setSourceEntity(219U);
    msg.setDestination(64589U);
    msg.setDestinationEntity(211U);
    msg.available = 2733442613U;
    msg.value = 235U;

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
    msg.setTimeStamp(0.239834128954);
    msg.setSource(39148U);
    msg.setSourceEntity(72U);
    msg.setDestination(33291U);
    msg.setDestinationEntity(58U);
    msg.available = 3769864803U;
    msg.value = 91U;

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
    msg.setTimeStamp(0.669405550388);
    msg.setSource(2368U);
    msg.setSourceEntity(29U);
    msg.setDestination(54596U);
    msg.setDestinationEntity(41U);
    msg.op = 78U;
    msg.snapshot.assign("KBNYMCCFYUKKAQAWIZUFLVZ");
    IMC::Phycocyanin tmp_msg_0;
    tmp_msg_0.value = 0.622967205329;
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
    msg.setTimeStamp(0.0332394603623);
    msg.setSource(59025U);
    msg.setSourceEntity(185U);
    msg.setDestination(4981U);
    msg.setDestinationEntity(32U);
    msg.op = 225U;
    msg.snapshot.assign("GSLGWLCYDLWYYDJVUOQZSXFFAFAOFEIPEKJLNAZMWAIEMOOCTPBEKTOTFELKNDOOQYVNZRHLRVPSUOOVUHHJUIYNOAGUVCMEZXKHGDSREGSNTEMSMJNZLDBYRGQKBPAWWIINGLVQMRUPCTIKPBDBUVGVRWHDJXINUZQTGCBLACHEBZJMYST");
    IMC::SaveEntityParameters tmp_msg_0;
    tmp_msg_0.name.assign("QHAUGPVJYCFENBZIVMDXSMWZN");
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
    msg.setTimeStamp(0.0971832695754);
    msg.setSource(57958U);
    msg.setSourceEntity(213U);
    msg.setDestination(59422U);
    msg.setDestinationEntity(122U);
    msg.op = 97U;
    msg.snapshot.assign("RZFJQHNPECAEHIGDKEKZOGPXMSHANFIOOQVIGPKBBBKPAAPUMAQQSJLRRCWBZGTOBLKODXOAICGGVAFDJDVSLRGXWUFBEQHCJOZCQBNXNETIQGMNAWCFBYKEVKPWCQWYUMYMEYXPCIHZAHTFHUNCIUJQLUTIRNJEBKZPEVTJFZRJZDDYTRXSZLRMLRDMYUPVMMHNTYVXQH");
    IMC::PeekManeuver tmp_msg_0;
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("JOWJAUGUEEVRFAIXRDYXOUHYVIIJLTOQFWTIGKMPIRGSBLWHGVNSJKEWXNQJKAYASKTZDLKZSSMBTDOEJYSZLMKRFFYHEKGDJTQDXQMZNIFBVPTUZONFFLIHOZHWHVULARQPQFXEVYMXICSEYPFAZMLGSGADZCUDBOHNRWPCXGDWUIWWFDTMACCOJLWMCLHDYBNGLCPCJUTYVPHQPVNREJVBT");
    IMC::FollowPoint tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.target.assign("BPAELMZVHFNXUEORXFXCYAUKTQMMZIDIIUGDEHKSPLGSIKBHVTXZRWXNMDOODDJBFPNHRMVYQJWXERLKKYHDEWAKPACWUGVSLAOYESMPMECSWIWEMOPSYFHUATSIUMGBVCURSHZCBOKFOJJQPCWBQZHAILJPOKICVBUGQINRBNGFTXANTRJDXXVZLTXTQQVWPYDNQVRLTCEYCMCQFAWGJNKRTJAJSOJUIORZYZQSFWEGKUYLTZGDGHVNF");
    tmp_tmp_tmp_msg_0_0_0.max_speed = 0.82958866884;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 134U;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.904429229184;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.160531052182;
    tmp_tmp_tmp_msg_0_0_0.z = 0.732496102422;
    tmp_tmp_tmp_msg_0_0_0.z_units = 250U;
    tmp_tmp_tmp_msg_0_0_0.custom.assign("QTFOHKSSZZENDLKHHZAIZGKGOXQXTWAVXMAVLBDCLAWNWINASXIBQLWUFMWIOMNHJTUJDDMDDAUEHQYJQEMXKDVVPGPEISOYCUGUVJBEILWZJROEYYHGNXXPSYYRBRFIVMBCPRZPAJCVQLJLCZIQJQUHFZOARTZWCMEJAZRPMFJTMSHNXWVFRKDFDSCPQBKKNTTURNSPLDYPVFBPESKFGWXUBIYOOMLYHFONTECKKLQERGGNGUHAW");
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    IMC::VehicleFormationParticipant tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.vid = 43551U;
    tmp_tmp_tmp_msg_0_0_1.off_x = 0.80712896034;
    tmp_tmp_tmp_msg_0_0_1.off_y = 0.570413335875;
    tmp_tmp_tmp_msg_0_0_1.off_z = 0.396302624431;
    tmp_tmp_msg_0_0.end_actions.push_back(tmp_tmp_tmp_msg_0_0_1);
    tmp_msg_0.man.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.784742919924);
    msg.setSource(3814U);
    msg.setSourceEntity(79U);
    msg.setDestination(4428U);
    msg.setDestinationEntity(141U);
    msg.op = 80U;
    msg.name.assign("RHGCBWRBVQIDRXSWHWLHFLPVJRRSNBXOHIBNKUDKXCTCDWCRXMJSOCGELPAOCXNNYUGEKHDHRAZWJLTMSXBATWPMMSKWTZFCUVUQJBZZIUEMEVLJECFIHPTPWTGYZOGLYGNBRABQVOUFKOQMVDNVEHYDSOANMPTTPFPKTFLOLWUYQYEQIDFFDGSIURQQNJUYMLIKNXIHEDCPCDAZIZLVGM");

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
    msg.setTimeStamp(0.560790327547);
    msg.setSource(14849U);
    msg.setSourceEntity(92U);
    msg.setDestination(691U);
    msg.setDestinationEntity(165U);
    msg.op = 223U;
    msg.name.assign("EYAYOMCHOBVXGJKRMXOHLDWJZEBDQEUYSQTPNPQOQUOFEWWFLTXVFKKDROMWNXCVSAIVBVQJWIDUUTNNPSLKMZGLITCNAMNLALDBZESUSLTHBJPYZFTRRUZDTACWVXUGYEOWPKQRPQJPKMEZPJKGJ");

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
    msg.setTimeStamp(0.334549688595);
    msg.setSource(62691U);
    msg.setSourceEntity(78U);
    msg.setDestination(37063U);
    msg.setDestinationEntity(151U);
    msg.op = 60U;
    msg.name.assign("ICMDHEPIKDLTJKNYZVPSCDHFYNLXYRTJAOCRDAYCULQOENOGXZTTEVVQQDEZKGSJMINMADXFOWQIDSHKWNOKBTUAMFOZBEUWPVGASZAZKUQBZQJSXLMJBWGWCXVZOJXRSUVYMCRLCMRABIUGQFPYFYHHYXINEWTGISIBBJGEAVWWSFCCQNPTJPLWNYDQOKZHSFOKVINGETFRXHIMGHMRPUZTRRPFTUPWKABEHLV");

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
    msg.setTimeStamp(0.139260000761);
    msg.setSource(17617U);
    msg.setSourceEntity(161U);
    msg.setDestination(49697U);
    msg.setDestinationEntity(37U);
    msg.type = 103U;
    msg.htime = 0.843568896874;
    msg.context.assign("XWBJBYBPQLPVEFDNWNMRWZARIPEMYUPGGMHKRLVCDVTZXFBCIOMNSAUTNBLVRLAOREECKLHMFAXNOHWZNMHTURFJMJDZZRZJQDOZSMFHEUBIFCJ");
    msg.text.assign("NAWHUFBOGUCKKRCPDXBSMNPTZLZEGIRHMSGKLRXRMXYEVJUXQRDLOLZYWKRVPICTBLAHPGKQQFBNVIHIGKUPMMYSENYAOHSICJCHDHVEDZRKWUUKZNJPLCCTTWCSVSEHZAMISMZXJXUPWJTFRAYGUJYDFBZLSOCGOXPGNIWFBNXNAIVFADHNTTJPDKCBAQWYFKQWVSVUFEMQIJOELYZXTTOBYGXAWJDGWDQUVFHFRIQMOPZVMALQEBDJNO");

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
    msg.setTimeStamp(0.158625003992);
    msg.setSource(11547U);
    msg.setSourceEntity(122U);
    msg.setDestination(62764U);
    msg.setDestinationEntity(233U);
    msg.type = 251U;
    msg.htime = 0.0268581869475;
    msg.context.assign("TOXSMWGPNXLZFGMIUESFMPYAQOVJUPBBJVJQFCQTRQJLQWIYWPZCYSZHAICDDRSMHNALNSMTOIBKFWAK");
    msg.text.assign("NCEXUHOYCZRURVONOAGSXBKSQAJOURFNKZDAXGHKJTWPHLBGEMFPDHFZJXDLICNMWZWJBJUGWGPQWJFYIOWVXFGAWVRTXLCTGA");

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
    msg.setTimeStamp(0.324744601373);
    msg.setSource(55412U);
    msg.setSourceEntity(245U);
    msg.setDestination(39107U);
    msg.setDestinationEntity(161U);
    msg.type = 179U;
    msg.htime = 0.668577223067;
    msg.context.assign("SAJZMKQRVOMHFAXPSNIQMKTWHZCGEKWLWEKVRNBGSTYBSLLOAQEICRUCVCCDEHYTOZLPTDWGIYKAYTDXDADPVYOWTFOVSUODTU");
    msg.text.assign("TVEARIWDHVFHMKMARWTILNUEKZYVDXIFBVPPBQXVUCWYXCUUJPZEWCQQCTJOTOHRSXFRKXTKERHEGDNAMQZGBZGUFACGFHHWLQKCIAYCNRDJTFJSKXXSCHZVSWNHGEKVGLPESZVOYREPPNZJOLJTHYVGDSGIWQNNEMBTBPLGIXFKBLLXZIUS");

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
    msg.setTimeStamp(0.248096002524);
    msg.setSource(201U);
    msg.setSourceEntity(139U);
    msg.setDestination(59918U);
    msg.setDestinationEntity(92U);
    msg.command = 221U;
    msg.htime = 0.147946090563;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 223U;
    tmp_msg_0.htime = 0.340985599038;
    tmp_msg_0.context.assign("VHGJQCGLKZCTQAYTIIVWEQXRRXVZGYNESXRTRTBTTJNFWWJIHWMUYAIBOADJDCLOANBHWOUSGUTBPXEUGSZQJGMOSWEMODHESZQBBUZAPHQMDFMBETKNPYFAUIABYMWXEJXPNGKMOORLVLWKQOJXRPOHYRNPUUCDJRAXLQKFVSJWZLCEKKGVIVDBRLMTGVBPQR");
    tmp_msg_0.text.assign("HDCCWHVPWPHFLVUFQCTZYABMOTMSEWPIURBKNMOWPDFOAGMGSFJQZAVMXSFKVGJTVEJOAHHUZZUCWIWDOYCGZNLIQKKSIDKX");
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
    msg.setTimeStamp(0.820654094184);
    msg.setSource(17099U);
    msg.setSourceEntity(209U);
    msg.setDestination(16778U);
    msg.setDestinationEntity(185U);
    msg.command = 29U;
    msg.htime = 0.787096536547;

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
    msg.setTimeStamp(0.573043064815);
    msg.setSource(64320U);
    msg.setSourceEntity(4U);
    msg.setDestination(47654U);
    msg.setDestinationEntity(129U);
    msg.command = 103U;
    msg.htime = 0.931900307943;

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
    msg.setTimeStamp(0.350781617518);
    msg.setSource(9979U);
    msg.setSourceEntity(184U);
    msg.setDestination(38721U);
    msg.setDestinationEntity(185U);
    msg.op = 220U;
    msg.file.assign("PMSPXGLMAFOTHAIPSCBKDE");

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
    msg.setTimeStamp(0.309188212037);
    msg.setSource(54030U);
    msg.setSourceEntity(231U);
    msg.setDestination(63866U);
    msg.setDestinationEntity(247U);
    msg.op = 78U;
    msg.file.assign("HBZLMJUKUFOXTKSOEVWOURBNEGFIVMRPVWLAQIOSKKUQABUSZEJUPUGLTBAZYITKLTFSGFCLG");

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
    msg.setTimeStamp(0.474581073868);
    msg.setSource(23615U);
    msg.setSourceEntity(229U);
    msg.setDestination(38790U);
    msg.setDestinationEntity(57U);
    msg.op = 234U;
    msg.file.assign("CEEVDAMWFKRBVKDQTTULCJRHPRSMKSCVMBBRETDZFUIYNHZUQVZTQ");

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
    msg.setTimeStamp(0.816892109479);
    msg.setSource(49494U);
    msg.setSourceEntity(195U);
    msg.setDestination(12843U);
    msg.setDestinationEntity(211U);
    msg.op = 243U;
    msg.clock = 0.193098908531;
    msg.tz = 1;

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
    msg.setTimeStamp(0.975030245989);
    msg.setSource(44921U);
    msg.setSourceEntity(31U);
    msg.setDestination(46234U);
    msg.setDestinationEntity(253U);
    msg.op = 82U;
    msg.clock = 0.326433917053;
    msg.tz = -93;

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
    msg.setTimeStamp(0.227705036806);
    msg.setSource(43043U);
    msg.setSourceEntity(8U);
    msg.setDestination(3095U);
    msg.setDestinationEntity(10U);
    msg.op = 171U;
    msg.clock = 0.474156936328;
    msg.tz = 86;

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
    msg.setTimeStamp(0.0392108311709);
    msg.setSource(60318U);
    msg.setSourceEntity(249U);
    msg.setDestination(21244U);
    msg.setDestinationEntity(234U);
    msg.conductivity = 0.682808477839;
    msg.temperature = 0.845994395374;
    msg.depth = 0.556158803353;

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
    msg.setTimeStamp(0.796850016114);
    msg.setSource(31950U);
    msg.setSourceEntity(81U);
    msg.setDestination(16016U);
    msg.setDestinationEntity(183U);
    msg.conductivity = 0.57583370353;
    msg.temperature = 0.629071807514;
    msg.depth = 0.975168460702;

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
    msg.setTimeStamp(0.665401692013);
    msg.setSource(59245U);
    msg.setSourceEntity(53U);
    msg.setDestination(14508U);
    msg.setDestinationEntity(31U);
    msg.conductivity = 0.141978932286;
    msg.temperature = 0.910274967818;
    msg.depth = 0.611852438903;

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
    msg.setTimeStamp(0.345699953784);
    msg.setSource(54756U);
    msg.setSourceEntity(241U);
    msg.setDestination(13712U);
    msg.setDestinationEntity(197U);
    msg.altitude = 0.486435026143;
    msg.roll = 37098U;
    msg.pitch = 32647U;
    msg.yaw = 64879U;
    msg.speed = -22306;

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
    msg.setTimeStamp(0.827973698438);
    msg.setSource(25945U);
    msg.setSourceEntity(223U);
    msg.setDestination(184U);
    msg.setDestinationEntity(148U);
    msg.altitude = 0.376214209978;
    msg.roll = 63324U;
    msg.pitch = 31223U;
    msg.yaw = 12196U;
    msg.speed = 25813;

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
    msg.setTimeStamp(0.783595733558);
    msg.setSource(49357U);
    msg.setSourceEntity(116U);
    msg.setDestination(36262U);
    msg.setDestinationEntity(68U);
    msg.altitude = 0.258919302434;
    msg.roll = 25817U;
    msg.pitch = 53411U;
    msg.yaw = 34022U;
    msg.speed = -17383;

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
    msg.setTimeStamp(0.15606497844);
    msg.setSource(19008U);
    msg.setSourceEntity(25U);
    msg.setDestination(65311U);
    msg.setDestinationEntity(239U);
    msg.altitude = 0.75910099899;
    msg.width = 0.923131767966;
    msg.length = 0.018104383305;
    msg.bearing = 0.784033025836;
    msg.pxl = 5820;
    msg.encoding = 49U;
    const char tmp_msg_0[] = {54, -47, 113, 19, -28, -64, -90, -21, -86, -52, 85, 47, 12, 65, -29, -44, -107, 33, 109, 41, 38, -114, 109, 54, 79, 5, -18, -94, 65, 88, -24, 23, -110, -102, 2, -45, -16, 0, 109, 106, 67, -40, -42, -30, -110, -31, 81, -87, 111, -60, -81, -39, -65, -94, 27, 85, 116, -42, -49, 81, -27, 30, -122, -15, 61, 15, 98, -114, 90, 119, 24, 63, -74, -47, 47, -83, 25, -3, 74, -17, 102, -124, -56, 121, 71, -51, -90, 125, -47, -102, 2, -9, -114, -60, 0, 70, 35, -119, -94, -24, -4, -29, 40, 45, -76, 59, -31, 88, 10, -47, 81, -88, 57, 46, -127, -94, 67, 46, 116, 62, -54, -93, -37, -24, 96, -51, -75, 119, -81, -45, 14, -34, -38, 37, -6, -122, 9, 107, -25, 108, 78, -34, -74, 59, 94, 80, 30, -107, 81, 2, 83, -47, 78, 20, -56, 13, 16, -65, -109, -10, -78, -81, 55, 66, -56, -9, 58, -126, -45, 117, 49, -27, 110};
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
    msg.setTimeStamp(0.537560904301);
    msg.setSource(7617U);
    msg.setSourceEntity(51U);
    msg.setDestination(13343U);
    msg.setDestinationEntity(39U);
    msg.altitude = 0.0575981120494;
    msg.width = 0.559828216894;
    msg.length = 0.413358995743;
    msg.bearing = 0.591167192993;
    msg.pxl = -20197;
    msg.encoding = 105U;
    const char tmp_msg_0[] = {-49, 23, -121, 117, -104, 39, 29, -57, -111, -86, 121, -29, 93, -53, 121, -25, -32, -109, -125, -42, 100, 36, 59, 58, 114, 39, 3, 38, 43, -4, -124, -42, 11, 93, 89, -51, 16, -10};
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
    msg.setTimeStamp(0.41031684197);
    msg.setSource(55705U);
    msg.setSourceEntity(132U);
    msg.setDestination(52802U);
    msg.setDestinationEntity(126U);
    msg.altitude = 0.390348425244;
    msg.width = 0.107182686428;
    msg.length = 0.812112537011;
    msg.bearing = 0.980446418531;
    msg.pxl = -8673;
    msg.encoding = 161U;
    const char tmp_msg_0[] = {-95, 65, 50, -32, 16, -74, -92, -30, 110, 113, -72, -123, -7, -92, -89, -58, 117, 113, 103, 95, -7};
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
    msg.setTimeStamp(0.100927124581);
    msg.setSource(51039U);
    msg.setSourceEntity(54U);
    msg.setDestination(45146U);
    msg.setDestinationEntity(226U);
    msg.text.assign("QYEGFLUTMMSCBQGBHLUHDQTXJLVIADORMPWWCJHEEDQCURLMCFZWNKLOJZSAOBMTYKMJOTVXKHKAONGJYQOUFRHFWGZQFZGTKRXMSRRPZCSBJJVKIFJVNMTLESAHMIAFSBUNILYXMFPVVDEZOEWIEPQZNBYREVKNGHKZBDYQZLIDDYBINUPJCTKDQVPOGSTPSDXLWUGSPYCONGLWYEBOGHHYVANWXZAA");
    msg.type = 152U;

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
    msg.setTimeStamp(0.971647072788);
    msg.setSource(57026U);
    msg.setSourceEntity(199U);
    msg.setDestination(34198U);
    msg.setDestinationEntity(207U);
    msg.text.assign("BEWAXIBWKYNYQNFMXCDZQZTBMLMPYFXFSSAWEUJTYDWHKOQOEXBKUHIVAHHYBOCKEVWWQSCBTBJLGWEOGGFPNRUMVHTRRARTGEASPUACFUKMJAPXNHMYSGTBRETAHPULWOKDUQQDLHDIJMIPPOSGTEKCJIKNGXRXFOIAVSFATMDQLINEJONIZGTWQZRJLCXSVNHVKPCPLUXUJLLCZFMZDCDLYVQDMVJ");
    msg.type = 184U;

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
    msg.setTimeStamp(0.464253114798);
    msg.setSource(20089U);
    msg.setSourceEntity(44U);
    msg.setDestination(5617U);
    msg.setDestinationEntity(113U);
    msg.text.assign("LNUMBZXVKERYAUIXOAYSPMJGPLMTAUNVEWDRQQUFPEFNKJBDZTBHIRATPOSJABFDHKPHCDVZKCCJMNJLQSGWTABVVFPXYLFLAMBRNWXNHDZOGYVMJWLZCTGDXOHLOROYCUMTQWLXEFNISWIFQGOKXTIQZBBRNANNYESGSPIURSHPFWFMERHCIQCPEHTTWADIDOYDKLGJRYSXXQHK");
    msg.type = 56U;

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
    msg.setTimeStamp(0.1842780779);
    msg.setSource(23854U);
    msg.setSourceEntity(247U);
    msg.setDestination(59166U);
    msg.setDestinationEntity(193U);
    msg.parameter = 144U;
    msg.numsamples = 206U;
    msg.lat = 0.310780593401;
    msg.lon = 0.473338646892;

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
    msg.setTimeStamp(0.814831153977);
    msg.setSource(39232U);
    msg.setSourceEntity(132U);
    msg.setDestination(27157U);
    msg.setDestinationEntity(140U);
    msg.parameter = 45U;
    msg.numsamples = 97U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 34570U;
    tmp_msg_0.avg = 0.726003929743;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.406464971489;
    msg.lon = 0.906753613225;

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
    msg.setTimeStamp(0.299075549351);
    msg.setSource(385U);
    msg.setSourceEntity(173U);
    msg.setDestination(36229U);
    msg.setDestinationEntity(115U);
    msg.parameter = 136U;
    msg.numsamples = 119U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 24549U;
    tmp_msg_0.avg = 0.731221811476;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.803847630699;
    msg.lon = 0.0969291301896;

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
    msg.setTimeStamp(0.196220767212);
    msg.setSource(47372U);
    msg.setSourceEntity(162U);
    msg.setDestination(25414U);
    msg.setDestinationEntity(209U);
    msg.depth = 55284U;
    msg.avg = 0.297195203977;

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
    msg.setTimeStamp(0.646912002316);
    msg.setSource(64492U);
    msg.setSourceEntity(120U);
    msg.setDestination(58776U);
    msg.setDestinationEntity(171U);
    msg.depth = 48127U;
    msg.avg = 0.464467951914;

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
    msg.setTimeStamp(0.420222516172);
    msg.setSource(5995U);
    msg.setSourceEntity(251U);
    msg.setDestination(25829U);
    msg.setDestinationEntity(231U);
    msg.depth = 34636U;
    msg.avg = 0.330021892791;

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
    msg.setTimeStamp(0.289932375818);
    msg.setSource(60626U);
    msg.setSourceEntity(9U);
    msg.setDestination(39753U);
    msg.setDestinationEntity(212U);

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
    msg.setTimeStamp(0.97371268565);
    msg.setSource(63209U);
    msg.setSourceEntity(103U);
    msg.setDestination(38217U);
    msg.setDestinationEntity(24U);

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
    msg.setTimeStamp(0.489212282783);
    msg.setSource(27177U);
    msg.setSourceEntity(100U);
    msg.setDestination(9760U);
    msg.setDestinationEntity(160U);

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
    msg.setTimeStamp(0.977510674175);
    msg.setSource(40994U);
    msg.setSourceEntity(232U);
    msg.setDestination(23437U);
    msg.setDestinationEntity(3U);
    msg.sys_name.assign("LOJXCMHGFJVKRIEGNNSTRMFEKDKEQRCPIKHENZDHKWNIEQOZYVCCQUPNZICCBOXWYYHQLKKLKDXRELAJBDNGWORXAAFYCQUMNDBYQJPFTMOTG");
    msg.sys_type = 21U;
    msg.owner = 61075U;
    msg.lat = 0.964268381596;
    msg.lon = 0.981210501595;
    msg.height = 0.728116180176;
    msg.services.assign("OYGSFMDFFLTQZEOAEHBMIUVAYWCSKODOVVPDIRHLSANVEGKKETTKWYPSVTUALGQROYBTBBEPKABGWQCURBQYNDRMWHHRXIOQUKPO");

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
    msg.setTimeStamp(0.439465726006);
    msg.setSource(65532U);
    msg.setSourceEntity(198U);
    msg.setDestination(38736U);
    msg.setDestinationEntity(238U);
    msg.sys_name.assign("RHPYZYAHZYQQTCXIM");
    msg.sys_type = 117U;
    msg.owner = 22626U;
    msg.lat = 0.13156494537;
    msg.lon = 0.957492930413;
    msg.height = 0.481571210712;
    msg.services.assign("HDIXWYPYOOBDKVPTRHTAITKVILQUACGJTMDYBZXFAXBMCSKPHWVJMQYDSAQRZGRGFRTBYBH");

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
    msg.setTimeStamp(0.38480980485);
    msg.setSource(36644U);
    msg.setSourceEntity(74U);
    msg.setDestination(34752U);
    msg.setDestinationEntity(189U);
    msg.sys_name.assign("KDHZARZKJGRABDDMPRQOGFLTXPVWETQWJAVMESYCWECIJQPCASIPLVZNNMGSFLTIMKDCWGOJEOJOJCXAVGQMXVLBBMQGEQ");
    msg.sys_type = 147U;
    msg.owner = 10018U;
    msg.lat = 0.0732255731628;
    msg.lon = 0.937891744386;
    msg.height = 0.116536226803;
    msg.services.assign("QOZMHMJILQNVQHMOTOGJFTTLWGBXOZVRPFPTEKTJEKEZWHBUBZMQGQKWKZRBZFLFLYRTYUCJOMJVPNCVWDQRQREVHWHUPXDBDKIDPBHYFRIUHDOESGUWMIDNLONVECTYHCMAFSDRUFASZUHEETANORMDKXUGFSPZWVJRSWCXCYGEXGXDSITNARAZIJSIQSYFHMNLAVWVKLAAVCLJOCXXIKFNNICBYIZSXPATBUGQUBNYYBQJPSLY");

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
    msg.setTimeStamp(0.0417974299869);
    msg.setSource(54758U);
    msg.setSourceEntity(154U);
    msg.setDestination(47952U);
    msg.setDestinationEntity(237U);
    msg.service.assign("ULWJWETCWDHURJEQULFFZUVGWPSUGBIQVNZNBJQCCPOIMXRKEMHANVC");
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
    msg.setTimeStamp(0.0283515746643);
    msg.setSource(40260U);
    msg.setSourceEntity(223U);
    msg.setDestination(53783U);
    msg.setDestinationEntity(61U);
    msg.service.assign("NSBALTQOOLB");
    msg.service_type = 170U;

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
    msg.setTimeStamp(0.914786333566);
    msg.setSource(15913U);
    msg.setSourceEntity(98U);
    msg.setDestination(38863U);
    msg.setDestinationEntity(234U);
    msg.service.assign("FSKIGKEIBELDOCUJALEDMFTGLUQKAXCHTT");
    msg.service_type = 148U;

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
    msg.setTimeStamp(0.91650999779);
    msg.setSource(35549U);
    msg.setSourceEntity(133U);
    msg.setDestination(43153U);
    msg.setDestinationEntity(199U);
    msg.value = 0.813340321543;

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
    msg.setTimeStamp(0.535113399058);
    msg.setSource(42998U);
    msg.setSourceEntity(40U);
    msg.setDestination(42351U);
    msg.setDestinationEntity(224U);
    msg.value = 0.182335130203;

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
    msg.setTimeStamp(0.169618163884);
    msg.setSource(4141U);
    msg.setSourceEntity(240U);
    msg.setDestination(21331U);
    msg.setDestinationEntity(54U);
    msg.value = 0.144495120174;

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
    msg.setTimeStamp(0.290647723219);
    msg.setSource(53978U);
    msg.setSourceEntity(188U);
    msg.setDestination(37739U);
    msg.setDestinationEntity(181U);
    msg.value = 0.293488882307;

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
    msg.setTimeStamp(0.655417598526);
    msg.setSource(17340U);
    msg.setSourceEntity(224U);
    msg.setDestination(18100U);
    msg.setDestinationEntity(220U);
    msg.value = 0.257344990119;

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
    msg.setTimeStamp(0.897246085614);
    msg.setSource(6163U);
    msg.setSourceEntity(87U);
    msg.setDestination(65141U);
    msg.setDestinationEntity(61U);
    msg.value = 0.147593346822;

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
    msg.setTimeStamp(0.0764849619294);
    msg.setSource(27250U);
    msg.setSourceEntity(79U);
    msg.setDestination(18796U);
    msg.setDestinationEntity(46U);
    msg.value = 0.351825250523;

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
    msg.setTimeStamp(0.485534162378);
    msg.setSource(45409U);
    msg.setSourceEntity(106U);
    msg.setDestination(24146U);
    msg.setDestinationEntity(190U);
    msg.value = 0.0679659335161;

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
    msg.setTimeStamp(0.795473694383);
    msg.setSource(49401U);
    msg.setSourceEntity(76U);
    msg.setDestination(52962U);
    msg.setDestinationEntity(128U);
    msg.value = 0.0760955448231;

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
    msg.setTimeStamp(0.391342010012);
    msg.setSource(2903U);
    msg.setSourceEntity(240U);
    msg.setDestination(34863U);
    msg.setDestinationEntity(252U);
    msg.number.assign("ILXJPAMCOGIQOOPSTCGSDK");
    msg.timeout = 48592U;
    msg.contents.assign("XJGCTTVJBECHNYKCAZJDOFHFNJOXHRDDAZINEUGGAEMQEBNUJRLGCEBAZFUWTGUM");

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
    msg.setTimeStamp(0.762165673079);
    msg.setSource(24181U);
    msg.setSourceEntity(214U);
    msg.setDestination(23981U);
    msg.setDestinationEntity(199U);
    msg.number.assign("GDXTEVOEVXCLZVCAFUFMJBIPEFLYZTJKIBVRTWWAMXISDZNEZYZCVHATHOLYBARRGHSXJXKHAKRUPPCOVZGGLUOSZPWDQCIKJBNKEGKNJXIMIOQMWNWLOOPCGHHUPIFNRSSSMXYGSUTJRGMSWJDZOIXGMRUNNALEQOAVBHVDDTCNSJNCMPZWTLFEZQKHUFUTBPXCBLAYTTKMRQ");
    msg.timeout = 41414U;
    msg.contents.assign("BGXFIIMXSNCCFKMSFUFMAIZUITDNPJGZILVARYAIJTKZNJZDBKPRHWAUZAGEHYGBMFULBWTMVMBUSNRAGODHKCNJMJMPVTSQYRVEHZ");

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
    msg.setTimeStamp(0.71001429984);
    msg.setSource(12598U);
    msg.setSourceEntity(43U);
    msg.setDestination(13019U);
    msg.setDestinationEntity(251U);
    msg.number.assign("CHCDILGXNRROZIPYFOSPPTJTYOZWFWZAKJMDKXUHNJDGSJQTUVNMITXQYXNGRGIHLKVASFQDISCHUXDRWAZKUEJCIZYYUZLFOPYJCMEOMWQSWVMCLHGTVQDTOWPGNLBPCVHHVBUUTQULSJSGMRENAWCNHKKKBEFEQQEUTMTMGADSZAEXPPBQGVQNJKHDYRNIJYPVXWOEZGAKKJBXSBBPVFOOLCYCNMRLIXYETZFFIAARBWDERDL");
    msg.timeout = 11989U;
    msg.contents.assign("NESSDDRXKOVTTICCFFNY");

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
    msg.setTimeStamp(0.256910325582);
    msg.setSource(35396U);
    msg.setSourceEntity(239U);
    msg.setDestination(20675U);
    msg.setDestinationEntity(151U);
    msg.seq = 3939125161U;
    msg.destination.assign("XTAWJLXIETSQJHQOJNFSUJBDSCXBRHCEJTMJANXVVHBLFLJZLUMILQUZQBVVKWQGBEMCUYDAYZKGRLXAHDSYJAEPKINMRDMMOTRCWSBVNWYAZHYYLONUXDNVPZDHGAORTAOEQALXPHPUTMFWPZGMGDWREIKAFQFYFZFVZKECMSTTJCRZRSLSIIYKSPNOUQIDFWWDTEIGXUOKCQLIBRBEHHVKCERPKINYXCGCPPSHBZVJMGNFUVWPNK");
    msg.timeout = 59825U;
    const char tmp_msg_0[] = {-10, -91, -9, 19, 20, -11, 114, -27, 23, 89, -15, 115, -72, -128, -40, 36, 13, -11, 16, -76, 76, -48, -12, -103, 7, 2, 59, -126, -117, 18, -85, -37, -4, -23, -54, -33, 78, 81, -79, -49, 30, 64, 11, -28, -105, 111, 76, -36, 96, -40, -22, -32, -105, 78, -63, -18, -37, 92, -57, -102, 90, -10, -104, 70, 105, -92, 86, 51, 0, -85, 33, -58, -98, 121, 113, 6, 109, 57, -17, 106, 105, -128, 101, 123, -8, -40, 46, 60, 40, 81, 88, -84, 81, 37, -96, 13, 45, 64, -128, -95, -65, 61, -76, 37, 115, 12, 112, 58, 39, 63, -41, 55, -93, -15, -12, 95, 84, -77, -75, 89, -43, -115, -82, -67, 52, 83, 69};
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
    msg.setTimeStamp(0.0197064315633);
    msg.setSource(48576U);
    msg.setSourceEntity(129U);
    msg.setDestination(13210U);
    msg.setDestinationEntity(181U);
    msg.seq = 2468685245U;
    msg.destination.assign("XNLHBHOQVFNPRIZXGRRLLCYEWPBJFTTKHPZIRNYSHIGZPIGHCTXAB");
    msg.timeout = 60768U;
    const char tmp_msg_0[] = {-6, -13, -83, -82, 77, 76, -92, -128, -10, 92, 94, 34, -101, -55, 73, 38, -18, -63, -16, -60, 125, 62, -113, -122, 38, 51, -65, 105, 112, -55, 13, -46, 114, 1, -61, 9, 33, 21, -101, 0, -45, 114, -94, 11, -36, 59, 18, -14, -8, -50, 0, 84, 99, 73, 66, -63, -124, -15, -63, -87, -41, -49, -25, 98, 23, 5, -64, 107, -16, 51, -105, -63, 22, -13, 78, -20, 0, -36, -63, -18, 79, 109, 27, 74, -121, -119, -49, 125, -45, -56, 18, 12, 12, -59, -18, -27, -62, 65, -80, -13, 96, 7, -77, -48, 116, -3, -125, -11, -79, -78, -119, 55, 26, 54, -7, -26, -15, 116, -69, 91, -33, 51, -12, 78, -53, -105, 99, -37, 48};
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
    msg.setTimeStamp(0.283984626655);
    msg.setSource(7517U);
    msg.setSourceEntity(93U);
    msg.setDestination(948U);
    msg.setDestinationEntity(211U);
    msg.seq = 3662022534U;
    msg.destination.assign("MJMGTLECUFNSAXFMNEKSPEKYMQSHGORHJUHHWXABCRSZPQGIWDBXWTQOFWBOAQOLUBSVVNELYVHECJKPVTIKUNJJUWALDQRGGPXSUAWDBKZYJPRRIKLTCL");
    msg.timeout = 57338U;
    const char tmp_msg_0[] = {13, 73, -5, -31, -84, 118, 37, 88, -43, 107, -65, -28, -33, 69, -4, -21, -82, 78, 71, -77, 83, 28, 23, -88, 126, -24, -83, 61, -35, -38, -17, -11, 18, 113, -40, -9, -83, -88, -99, -7, -84, 114, -110, 47, 82, 99, 102, 53, 78, 65, -12, -79, 120, 10, -34, 32, -91, 97, -119, -10, -60, -14, -62, -34, -70, -20, 45, -116, 7, 39, -95, -77, 26, -31, -113, -24, 37, 19, 60, -74, -56, 86, 32, 18, -123, 50, -84, -9, 37, 27, -98, -59, -121, 70, 37, 101, -45, -3, 10, 13, -91, 3, -116, -105, 107, 86, 109, 88, -25, -13, -44, -126, -92, 103, 112, -28, -92, 111};
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
    msg.setTimeStamp(0.867844722136);
    msg.setSource(24836U);
    msg.setSourceEntity(252U);
    msg.setDestination(14735U);
    msg.setDestinationEntity(4U);
    msg.source.assign("MOAPSBJSMGWFGNOHLMCXXEQXNZYNDPBJVVJKTPLPBHIDZAOHLGOQPPKWZXFXENLQIFUEDYKGDEVUHPGJQZCFVYH");
    const char tmp_msg_0[] = {10, -117, -14, -15, -120, -97, 15, -8, 91, -12, 55, 38, 43, 116, -64, -117, 52, 79, -63, 22, -47, 74, 7, 31, 63, -47, 67, -51, -103, 4, -123, -13, -81, 51, -113, 97, 1, 119, 82, 49, 2, -6, -17, -22, 86, -120, 63, -46, 36, -35, -44, 73, 123, 78, -52, -29, -14, 65, -25, -62, -54, 58, 93, 8, -45, -88, 97, -7, 109, -60, -108, -47, -91, 78, -53, 45, -11, -108, -82, -98, 34, -62, 13, -118, -31, -4, 9, -85, -87, 5, -94, -126, 79, -40, 118, -83, -53, 20, 69, -116, 56, 46, -105, 13, 33, 64, 33, 11, 104, -59, 89, 57, -109, 49, 76, -45, -40, -18, -26, 93, 5, 29, -72, -76, -87, -26, 71, -107, 34, 82, -18, -112, -95, -114, -116, 20, -107, 61, -79, -102, 49, -75, 60, 21, -44, 95, 112, -47, -1, -35, 15, 31, 22, 19, 51, 116, 16, -69, 76, 13, -42, -10, -125, -71, 88, -75, -19, -108, 90, -74, 108, -121, 42};
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
    msg.setTimeStamp(0.730324721354);
    msg.setSource(18169U);
    msg.setSourceEntity(32U);
    msg.setDestination(58262U);
    msg.setDestinationEntity(198U);
    msg.source.assign("TSIWJHDKSCPQBTWBXZVEWDOERJSVDBQFUQAVSQIOHZWVRBGEQASLPIPCBUXIRWDNBBMABVKKZZSCZXUWIKEUWCVYWFGEHJNQPVXYDRGJKQEAJHLUDTPOIYMEORNORICGJGPGXYDNNYVPRYLKOTLHOLXCJKLZXRNFBXSAELEATDHHUAIWTDMAFPJSXGLCTUMZPLUTBCHTYZIJCZXHLUFOOFKN");
    const char tmp_msg_0[] = {3, 78, -57, 19, -60, -36, -88, -7, 24, -38, -5, 55, 117, -82, 63, -41, -49, -78, 46, -48, 103, 58, -105, -41};
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
    msg.setTimeStamp(0.225930031446);
    msg.setSource(42907U);
    msg.setSourceEntity(27U);
    msg.setDestination(30267U);
    msg.setDestinationEntity(104U);
    msg.source.assign("QHADMNKWSMKXHZBKGAZOQOINQOKFDFCAUTYVUMOWNMXRNBXYQIOWMUKUDGUSJJYYRZIFSCYBVIUAHEGWCWUPYZNQRZAEEXHRHQJGRFHJTHBNDHKMIZCLJKPJZCIEBXCWZPITSHSPXBOYYVRBRFOFG");
    const char tmp_msg_0[] = {96, -61, -112, 73, 3, 95, 86, 75, -116, 7, -12, -29, -107, -87, 2, 67, -48, -18, 12, -27, 68, -81, 43, -76, 48, 102, -9, -118, 71, -85, 112, 76, -42, 80, 15, 96, 123, 0, 76, -125, 109, -113, 103, -108, 105, -76, -112};
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
    msg.setTimeStamp(0.759951746416);
    msg.setSource(6205U);
    msg.setSourceEntity(131U);
    msg.setDestination(5122U);
    msg.setDestinationEntity(18U);
    msg.seq = 1857908673U;
    msg.state = 151U;
    msg.error.assign("YCVVAQFURTWBXSCXATMMYLRWYVNVUOYTTDETKVSJDCJFSUICOTNWMZEHBDLBENQTGZBT");

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
    msg.setTimeStamp(0.3810790564);
    msg.setSource(54623U);
    msg.setSourceEntity(155U);
    msg.setDestination(50198U);
    msg.setDestinationEntity(75U);
    msg.seq = 1064375229U;
    msg.state = 146U;
    msg.error.assign("FMAKDODVKDOUQVLIBKMVCPOYMYNCKBWMNFJNAYFEVJEKMESJUGTRZNLFRODHXLQBTUQSGIIXVRXTQWRQZUMGJLVJSAWWTXYQGZIPCYABALTBMLJHGHHHXVNTWDWITIAEFYFDCLOXEAX");

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
    msg.setTimeStamp(0.466810617848);
    msg.setSource(34719U);
    msg.setSourceEntity(130U);
    msg.setDestination(42392U);
    msg.setDestinationEntity(155U);
    msg.seq = 3946018618U;
    msg.state = 26U;
    msg.error.assign("VXKIBKXXZPWHIITPQYIAXDYWHFOUXAAFLRPPUPCJVQOYIEEDTRVLJKNFCTULCZSDTEDZKWHKHJJMFCHSMBAPICXXFRSNDGULBLOHEWACTJCARZBVBUZDZQAAUBOLFDFNQGSPSIVOXKPNGUYGEGOHQSTXITNYRWLRMSBDSWMGRVRNEPAJQTEELNFROVCKNIMVTW");

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
    msg.setTimeStamp(0.557140862659);
    msg.setSource(1313U);
    msg.setSourceEntity(221U);
    msg.setDestination(45135U);
    msg.setDestinationEntity(114U);
    msg.origin.assign("LHJAFEFNYIVRBRXUJALASVTMYCJMGMOJKORIKUUXEHZYMYFEDRTOQCIBKCHRKSZPSPJUGCIPCJOJPRDZREIHNIFVTIKBBAWFSLAFQNHHBMEWPOWMIBGWDNCDWOAVGKAVZVUSYSQYFMPAQHJPVLXDGHRUBLEZUTQZD");
    msg.text.assign("OXMGAPMXDHMPZJSJJSZEDPNOWJKUHXIFEZIKUMHCRRRGPTNIQFVMCYAQDUNRNXVZPIYJWFALCYOWUCVMQAKDOXUNESSGXWRSRWBXYUTLCBWTHCSBAXGINAHKNSYYKEQJFYDHLVTPUIUSLSHFOTWDIOCXKHGLLBCHOPXGJWMJEYURBVQJEOTLYFVRQVTVNNPNAAJESITFVUGYCDFQDBVDLICKQPK");

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
    msg.setTimeStamp(0.120454273007);
    msg.setSource(31190U);
    msg.setSourceEntity(99U);
    msg.setDestination(51313U);
    msg.setDestinationEntity(186U);
    msg.origin.assign("RXJPEQIRJGAFISIHAIT");
    msg.text.assign("EWHUEKMXRQQNMGPWPOKXDGBYNMTZKCBCJXBBSRWAWXYZSUWABLDVNJYNQYKGOUTSZHHWPZKXDNHSBVTIOLAARAMICDLYIFKIVBYFYTIVINORLFUZRUMKPVOCDFPFAIVITUDNQWZDLMYUQFPXHQOENXQEUFTHWPVGECAEJHOLQICOIWZTEBXVZGD");

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
    msg.setTimeStamp(0.28280253429);
    msg.setSource(57615U);
    msg.setSourceEntity(133U);
    msg.setDestination(38168U);
    msg.setDestinationEntity(175U);
    msg.origin.assign("EEVZYIBSZIHMQEUKDIWQRMIWLCXHPLFYBUVNPNKJFTLBDTDMHWPJFPSYZODOMQFOVADIYKGNEYARJJPLVHTLOBJJTIOGJJRAGEKXDRZPPRCYDZBPXOYPXWGKESUKAWKKQZYVZOHXGCXOCBXZRCQFBCUGTIIXQGMSECLFMTLUCECGKQZJNGOHQWAMAGDYVQEMLTFUWTBHNRXVWVAQUWKNSBYLTNOVDHDNUTAEISRCWFSHXMLRFAZJ");
    msg.text.assign("UGPQWRBYJRJGUUJAORLAKPUZOBAUQGBZQYXRQEFEDFTRSFMMZHWJVNFTAICHIULEJTVEMZKYVSNMBOBXAONSRZPCI");

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
    msg.setTimeStamp(0.169675692016);
    msg.setSource(29186U);
    msg.setSourceEntity(48U);
    msg.setDestination(3597U);
    msg.setDestinationEntity(194U);
    msg.origin.assign("GNNMYAQKCSLEJKPPOPQUTTQAUYEBEIBEYVQCFCNZCIPTXNUTMBFGIHFTQDKNMCOYTUFXMWVVUJMLATHXOQFNQVYZWPRPVCYOPSHWRTJZXOOPBIBCPRVXBX");
    msg.htime = 0.588082412027;
    msg.lat = 0.605638580687;
    msg.lon = 0.141169596352;
    const char tmp_msg_0[] = {-69, -22, -75, 3, -117, -100, 79, -85, -102, 114, 68, -50, -4, 23, 105, 35, 86, -67, -1, -70, -85, -78, -16, 70, -97, -75, -83, 76, 45, -30, 5, -12, 29, -109, -29};
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
    msg.setTimeStamp(0.954625504496);
    msg.setSource(48009U);
    msg.setSourceEntity(51U);
    msg.setDestination(59833U);
    msg.setDestinationEntity(11U);
    msg.origin.assign("RMUNRQEXCEJGPEXEWHBVBHICCXEGAJRBXBFISFKPJZUSYFZIKGHATVSCLYTH");
    msg.htime = 0.306315506888;
    msg.lat = 0.334147706079;
    msg.lon = 0.123604401227;
    const char tmp_msg_0[] = {-72, -16, 87, 91, 40, 70, -112, 40, -37, -43, -105, 100, -109, -53, -23, 12, -50, -101, -79, -100, -84, -92, 111, 18, -30, -39, 11, -120, 17, 82, -116, 122, -23, -79, -2, 47, -25, -116, 101, -40, 110, 90, -51, 116, 45, 81, -35, 22, 58, -104, 2, 4, -118, 54, -45, -117, -59, -44, 24, -7, 116, -104, -87, 8, 116, -85, -27, -107, -12, 113, -39, 2, -74, -14, 35, -92, 99, 115, -54, -89, -89, -105, -81, -67, -63, -49, -41, -119, -125, 4, 108, -50, 118, 18, -44, 73, 64, -13, -51, 49, -55, -6, 85, 30, 66, 56, -2, -23, -105, 99, 117, 52, -100, -97, 107, 2, 43, 43, -57, 34, 86, 69, -108, -7, -77, 34, -68, 64, -17, 114, 24, 81, 111, 66, 26, 107, 43, 73, 118, 113, -120, 122, -59, -92, 93, 107, -109, -30, -107, 80, 81, -26, -118, -34, -23, -35, 75, -94, -48, -65, -72, 123, 98, -44, 100, -51};
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
    msg.setTimeStamp(0.913923884563);
    msg.setSource(16782U);
    msg.setSourceEntity(60U);
    msg.setDestination(610U);
    msg.setDestinationEntity(176U);
    msg.origin.assign("CHNBPJIZLMXQOSNYUXVHNKDJFSIELBHPKTZWQOEUM");
    msg.htime = 0.871507742662;
    msg.lat = 0.376594067114;
    msg.lon = 0.367704168233;
    const char tmp_msg_0[] = {2, -69, 35, -77, -122, 49, -90, -12, -1, -25, -11, 119, -112, 26, -34, -51, -128, -22, -93, -15, -90, 66, 113, -57, 117, 109, 56, 87, -77, -117, 102, 0, 86, -91, -4, -66, -13, -125, 26, -45, -83, 2, -98, 1, 2, -121, 4, 15, -80, -117, -14, 10, 77, -84, 80, -77, 88, 18, -16, -82, -54, 112, -65, 97, 13, 50, 55, -81, -53, 78, -113, -88, 56, 94, -10, 53, 59, -21, -70, 116};
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
    msg.setTimeStamp(0.105171599739);
    msg.setSource(30301U);
    msg.setSourceEntity(142U);
    msg.setDestination(21094U);
    msg.setDestinationEntity(221U);
    msg.req_id = 48593U;
    msg.ttl = 57741U;
    msg.destination.assign("SJTJKDFRBORWOGLBGUWLRTKRAHPRVBWUYGVCKPOXUXOKUSCAZTYJPLFQBIFZIPIVUWXHYKLDWSEVEOZJTJHFMUNQHNNAQYGQJSTNIYNCOXYEDCCZKDZVUFHDBTSHRAGPUQZBWSTRZJNJMBQGYLEELZNLFWDHAXPQBQYGYCVIJLBMNVAFTMPOSPIKUATIUDSCVMFKIKCEEMGXGOCMMJCQDBOVDQIZEFVXWPNHKGWXPMIEZSYLFXRW");
    const char tmp_msg_0[] = {36, 108, 37, 122, -6, 24, 104, 13, -19, 32, 61, 101, -60, 12, 61, 28, -100, 6, 61, 83, -12, 109, 21, 73, -91, -106, -80, -25, -96, 44, 66, 60, -12, -112, -122, -33, 100, -77, -124, 39};
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
    msg.setTimeStamp(0.019338363134);
    msg.setSource(19730U);
    msg.setSourceEntity(116U);
    msg.setDestination(600U);
    msg.setDestinationEntity(16U);
    msg.req_id = 27394U;
    msg.ttl = 43867U;
    msg.destination.assign("KWZHLUSYOPPXGAPIWOBLJEITPTVXVLYYWXYWEJKLPIXBGZGTFWVUAKXY");
    const char tmp_msg_0[] = {24, 110, 38, -61, 40, -33, 42, -11, -74, -71, -20, 68, 96, -49, 47, -97, -16, 0, 100, -33, -43, -114, -128, 112, -35, -110, -110, -108, -64, -113, 123, 18, -119, 121, 69, -69, -33, -63, -86, -30, -47, 71, 86, -44, 62, -127, 46, -34, 83, 60, 23, -96, -16, 7, 43, -87, -82, 28, -95, -3, 106, 38, -80, 125, 107, -96, -51};
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
    msg.setTimeStamp(0.659407875345);
    msg.setSource(49904U);
    msg.setSourceEntity(12U);
    msg.setDestination(33034U);
    msg.setDestinationEntity(200U);
    msg.req_id = 56750U;
    msg.ttl = 40241U;
    msg.destination.assign("GUEMIFNFPFIBGAPHZNYUYVQVPMRZWUGCBCDJ");
    const char tmp_msg_0[] = {-1, 104, 100, 110, 69, 43, 108, -53, -51, -57, -122, -18, 124, 74, 11, 13, 87, 90, 27, -55, 90, 48, -113, -84, -5, 75, 35, 38, 20, 29, -117, -45, -96, 74, -36, -93, -2, -23, 27, -59, 8, -62, -100, 95, -65, -38, -116, 27, -121, 1, 18, 91, 91, -78, 51, 65, 108, -59, 91, -93, -67, 104, 11, -62, -68, 17, -126, -23, -73, -99, -41, -23, -39, -92, -97, 83, -41, -19, -102, 109, -35, -101, 73, 112, -58, 4, 102, 83, -21, 10, -54, 120, -83, -65, 83, -100, -117, 28, -38, 67, 104, -92, -20, 8, 54, 108, -8, 114, 34, 4, 64, -49, -78, 125, -59, 116, 33, -85, -24, -109, 124, -51, 74, -37, -28, 22, -80, -37, -34, 23, 125, -24, -128, 55, 116, 107, 4, -101, -6, 96, -83, -121, -113, -30, 75, -80, -81, -71, 70, 52, -6, -128, -12, -34, -34, -37, 66, 39, 100, 52, -69, -51, 99, 36, 91, 4, 78, 24, -49, -48, 10, 2, 3, 120, -88, -97, -40, 52, -4, -81, 21, 28, 88, 12, 99, -5, 42, -91, 117};
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
    msg.setTimeStamp(0.758232749582);
    msg.setSource(34924U);
    msg.setSourceEntity(194U);
    msg.setDestination(30835U);
    msg.setDestinationEntity(211U);
    msg.req_id = 8656U;
    msg.status = 141U;
    msg.text.assign("KLLNCMCEXHHCQROHFGJAXEOAIJZSBWMWUURZVKMPEEMMUGANLGGYLEAPCGZMIUKJYPOETDFNPXPPSVQLFZOYYYRPOZLQNOJGAXZKFWYWOGQGJQRHQUZTFLSVBNRYLECVUXQRAHXCSIBKWPQTZECASKONXSPVZHFJJUYDIDHCBVDDKNYTWTNMNRCOGNBJKUUISATDIDCJSRDUBIVBSWDWKBRTXWFRTOXDHIHISVGVHTIMEAMW");

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
    msg.setTimeStamp(0.181957507331);
    msg.setSource(21170U);
    msg.setSourceEntity(34U);
    msg.setDestination(55254U);
    msg.setDestinationEntity(5U);
    msg.req_id = 63521U;
    msg.status = 161U;
    msg.text.assign("JQBFVAQKTLANCNPIUCDACCBFWOFFDLRUUYLLQMDYYKHD");

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
    msg.setTimeStamp(0.831768904599);
    msg.setSource(51015U);
    msg.setSourceEntity(179U);
    msg.setDestination(59442U);
    msg.setDestinationEntity(137U);
    msg.req_id = 41938U;
    msg.status = 123U;
    msg.text.assign("HLVVFSAGBVIMGWTTOZIOTCDJK");

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
    msg.setTimeStamp(0.787681474047);
    msg.setSource(2575U);
    msg.setSourceEntity(160U);
    msg.setDestination(19056U);
    msg.setDestinationEntity(113U);
    msg.group_name.assign("SJKNANKAFBMCCHLHZGOFBLFIBXSIBMFSVGOKNGUHUSWQYTRIFOQXDOHLGBEUHZDKVMKCSZEECABPCJJUZMHKATWWPILTZQJLWDBQRIFOAXLVXXYMQFWPRANSIRXDNECHV");
    msg.links = 3836662476U;

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
    msg.setTimeStamp(0.122321275015);
    msg.setSource(40480U);
    msg.setSourceEntity(64U);
    msg.setDestination(3976U);
    msg.setDestinationEntity(194U);
    msg.group_name.assign("OKZVCBBTVANHKBCCQXNCMWWUJQIHPRVICMOOGIWSNOKUVPHYPFJZMZHQQWMVZFMYXTWDAXVARNYGZXCFGGMDPRWAXKDRAOLXJARTNQOEIJYVPFXPLEWCDHSLGBJETUSOSLZLGERVGAYFTNTHUTJFZSETMWRRGHNJBXCCBLKKEGBNHWUGKXEZHRIUQAIMKUSSIYFECWBYKYENDVLUBDJDSZIQNTFBUFLEDXAUHDJJZKPQTLYMRP");
    msg.links = 2261447119U;

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
    msg.setTimeStamp(0.404380747133);
    msg.setSource(50447U);
    msg.setSourceEntity(10U);
    msg.setDestination(51249U);
    msg.setDestinationEntity(64U);
    msg.group_name.assign("GPRQOICMJPDSEMFFNOXAJSXGKHTBAJBGFVYYEGKXTKVHJQDDZTBVIONKCZSMJRDDENBLTSNIGMUKHULCSFVQXHGDAZYKCMPUXZQJELQAEHREMWCPESXRYNDAHLFFVHNWXEJNYHCOQTYOFGPLSRJJZRVQNMLDWQMFJWABPUOQPKZLZAFVISOTPGRLVRUCCMUVWKYIRZEKCAGQXBAGBPAXHWWUTMUZB");
    msg.links = 1774447791U;

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
    msg.setTimeStamp(0.526528453502);
    msg.setSource(13381U);
    msg.setSourceEntity(169U);
    msg.setDestination(13361U);
    msg.setDestinationEntity(54U);
    msg.groupname.assign("ABTQRBCJDXYVZQVWBKBWGHAUWFVKBQHNLZNSPGEGGCKHXZOGNJRLDVTKNPZSHICEFKFNYCQSCLSRLFJSTKAVASXOLJNUIQIROLFWXYAAEDCBDDUUEZCOEMTDPHTMTOKUUYNOLVAMQMQZLOXJZRZNMWNGFGCXWITXIPZGFIXDBFHRWWUYPKPBQJJPJCMFPEYMEKWLRXSYUMWDIFSYJAPYIHTVE");
    msg.action = 43U;
    msg.grouplist.assign("GCOBCQPFEODFIWRBVVQQHATCYXAUTRMTBMJEFQLIJTKWXNQXBPDUKZLUEARFDYDDBUMLVIFECSICANXSMFOGWMNOGIAKXNAKSSVTXZZFJJFHUPZZQPWEWEZYAVAIRLRC");

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
    msg.setTimeStamp(0.975738277486);
    msg.setSource(28468U);
    msg.setSourceEntity(62U);
    msg.setDestination(48405U);
    msg.setDestinationEntity(3U);
    msg.groupname.assign("HMPDMFSPOKVNDTUOONQTUQMZTIAWVXFMOVAACLWGUUZFCBLKWOSWYYMBNTLQXVTMCQQVFZISPZEIBKYBXCRQOCVMJFECJGJBEFBBUZRVHNDJIEAHSEAGNCAESTKNIIYJXXTTHBPXBSGDZDOWTLGRXYU");
    msg.action = 225U;
    msg.grouplist.assign("PWTLYHZZACIGTW");

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
    msg.setTimeStamp(0.314449683907);
    msg.setSource(59468U);
    msg.setSourceEntity(109U);
    msg.setDestination(19653U);
    msg.setDestinationEntity(55U);
    msg.groupname.assign("XPTIVOJHPEETSLUPOKIPDQQQNJEVDXHOTKFRYWYGUGFWXZKOQGBPLGMOLHNYJGCCNGWIZJJCDJTSKHOUSMAUILASWKYUBFSPFTLBLMHJCBMSADTXYHTNZRBBRYBLBZGKJIDUVGYQZSYNDUKUUCFWVMEVVXQINYIBKXSWWAHALQOEICPAQMQFGACTRREDRTFMWEZVVSARRMCNZTPFEZRCWVOARJEP");
    msg.action = 193U;
    msg.grouplist.assign("CFSXHQEOXVOKYIJRCQWVSAHTBPIDVAELAZNHEMNGGVJXXXSOCWRLQRMVJEWIJCNXHRUOLFZQOFZORUIKIQXDHKEGPASIVFBPPGGDMEBQHWIWIFJQVYRUQPLNGPKPMTTKUDTBGEEZZQMLLFLJTCBXVIMKDUKZW");

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
    msg.setTimeStamp(0.607686790438);
    msg.setSource(63828U);
    msg.setSourceEntity(131U);
    msg.setDestination(18460U);
    msg.setDestinationEntity(28U);
    msg.value = 0.47592177493;
    msg.sys_src = 36674U;

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
    msg.setTimeStamp(0.22987914143);
    msg.setSource(56867U);
    msg.setSourceEntity(54U);
    msg.setDestination(11221U);
    msg.setDestinationEntity(169U);
    msg.value = 0.456476146551;
    msg.sys_src = 43161U;

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
    msg.setTimeStamp(0.567994058941);
    msg.setSource(52430U);
    msg.setSourceEntity(54U);
    msg.setDestination(45921U);
    msg.setDestinationEntity(68U);
    msg.value = 0.692720461775;
    msg.sys_src = 33503U;

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
    msg.setTimeStamp(0.00034614834888);
    msg.setSource(38175U);
    msg.setSourceEntity(212U);
    msg.setDestination(31808U);
    msg.setDestinationEntity(67U);
    msg.value = 0.57989307238;
    msg.units = 137U;

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
    msg.setTimeStamp(0.924529986814);
    msg.setSource(1773U);
    msg.setSourceEntity(92U);
    msg.setDestination(4072U);
    msg.setDestinationEntity(100U);
    msg.value = 0.869996559275;
    msg.units = 2U;

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
    msg.setTimeStamp(0.318824028476);
    msg.setSource(53777U);
    msg.setSourceEntity(152U);
    msg.setDestination(24486U);
    msg.setDestinationEntity(39U);
    msg.value = 0.0238860812444;
    msg.units = 239U;

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
    msg.setTimeStamp(0.440224885761);
    msg.setSource(26295U);
    msg.setSourceEntity(195U);
    msg.setDestination(29409U);
    msg.setDestinationEntity(20U);
    msg.base_lat = 0.210993169251;
    msg.base_lon = 0.174955462539;
    msg.base_time = 0.464864561923;

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
    msg.setTimeStamp(0.656318719093);
    msg.setSource(58722U);
    msg.setSourceEntity(232U);
    msg.setDestination(29902U);
    msg.setDestinationEntity(247U);
    msg.base_lat = 0.705898616493;
    msg.base_lon = 0.741143578663;
    msg.base_time = 0.444354533547;
    IMC::RemoteCommand tmp_msg_0;
    tmp_msg_0.original_source = 4139U;
    tmp_msg_0.destination = 32623U;
    tmp_msg_0.timeout = 0.202778091016;
    IMC::VelocityDelta tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.time = 0.641561465703;
    tmp_tmp_msg_0_0.x = 0.153912327527;
    tmp_tmp_msg_0_0.y = 0.549975584765;
    tmp_tmp_msg_0_0.z = 0.612774439154;
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
    msg.setTimeStamp(0.157616826401);
    msg.setSource(63349U);
    msg.setSourceEntity(104U);
    msg.setDestination(55560U);
    msg.setDestinationEntity(122U);
    msg.base_lat = 0.717936188475;
    msg.base_lon = 0.999961614734;
    msg.base_time = 0.292810970012;

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
    msg.setTimeStamp(0.49058099169);
    msg.setSource(63110U);
    msg.setSourceEntity(63U);
    msg.setDestination(60823U);
    msg.setDestinationEntity(23U);
    msg.base_lat = 0.969564611586;
    msg.base_lon = 0.977773048436;
    msg.base_time = 0.077643784955;
    const char tmp_msg_0[] = {-14, 53, 0, -90, -110, 29, 82, -43, 72, -25, -29, 13, 24, -90, 8, 86, -117, -109, -66, -67, -119, -114, -103, -73, -8, -76, -98, 14, -77, -38, -100, 63, 84, 43, -101, -15, 94, 32, 55, 7, -47, 31, 29, 84, -55, 7, -7, -3, 68, 90, -2, 116, 118, -92, 54, 21, 108, -128, -87, -51, -41, -61, 72, 78, -28, -42, -29, 57, -10, -29, -47, -89, 22, -77, 87, -78, 85, -35, 100, -7, 46, 48, 120, -10, -31, 114, -25, -23};
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
    msg.setTimeStamp(0.424650444004);
    msg.setSource(19408U);
    msg.setSourceEntity(206U);
    msg.setDestination(39220U);
    msg.setDestinationEntity(185U);
    msg.base_lat = 0.300811822704;
    msg.base_lon = 0.310966463851;
    msg.base_time = 0.378485037999;
    const char tmp_msg_0[] = {0, -95, 106, -81, 15, -119, 24, -91, -31, 31, -122, 75, -67, 116, -64, 43, 29, 48, -99, -107, -73, -23, 61, -124, -7, 6, -97, -61, -98, 17, -82, 20, -54, -24, -29, -97, -74, 61, -65, 70, -15, 18, 91, -119, 7, 50, 50, 118, 99, 108, -102, 44, -113, -75, 58, -105, 82, 120, 72, 20, -24, -59, -75, 24, 104, 36, 126, 25, -78, -107, 50, 114, 29, -42, -29, -7, 13, -12, -11, -85};
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
    msg.setTimeStamp(0.854664404358);
    msg.setSource(62629U);
    msg.setSourceEntity(153U);
    msg.setDestination(35905U);
    msg.setDestinationEntity(47U);
    msg.base_lat = 0.315211775637;
    msg.base_lon = 0.895963108566;
    msg.base_time = 0.845096260552;
    const char tmp_msg_0[] = {57, -31, 28, 23, 61, 41, 54, 90, 38, -25, -21, -18, -103, 57, 93, 28, -122, -53, 126, -54, -55, -97, -87, 117, -68, 86, -110, -17, -88, -89, -109, 111, -10, -23, -72, -79, 22, 5, 12, 10, 51, -126, -21, 40, 105, -114, 48, 124, -37, 55, 12, -72, 23, 51, -44, -17, 3, 49, 67, -116, -64, 29, 93, 43, 24, -119, 116, -81, -11, -24, 95, -50, -36, -94, -107, -80, 19, 87, 76, -88, 6, -117, -100, -59, 33, 68, 98, -118, -71, 89, 97, -100, -115, 60, 119, -40, -105, -100, -8, -70, 71, 20, 115, -52, 3, 110, -55, -98, 22, -6, 75, 32, -92, -40, 83, -31, 90, 9, -51, 97, 1, -27, -99, 94, -18, 93, -36, 82, -33, 89, -7, -1, -11, -64, 103, 101, 71, -105, -76, -69, -66, -65, -14, 51, -62, -124, 30, 83, -90, -34, -38, -50, -38, 110, 100, 30, -80, 111, -19, 66, -100, 19, -70, 115, 80, 85, 13, -110, -60, 84, -28, -109, -65, 40, 104, -37, -43, -34, -126, -79, -8, -120, -109, 65, 59, -14, -12, 63, 124, -5, 124, -48, -112, 32, -40, 5, -94, -55, -29, 57, -32, 15, -3, 1, 48, -5};
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
    msg.setTimeStamp(0.666967486286);
    msg.setSource(19985U);
    msg.setSourceEntity(70U);
    msg.setDestination(48181U);
    msg.setDestinationEntity(70U);
    msg.sys_id = 31328U;
    msg.priority = -30;
    msg.x = -3437;
    msg.y = 18847;
    msg.z = 25208;
    msg.t = -31298;
    IMC::NeptusBlob tmp_msg_0;
    tmp_msg_0.content_type.assign("KCTISNAFCNLNHOHQROIHBUJVQTWKTKEKLOCFCIESHUZLHMHSHSMASKNCXWDJTYXPBFUIIWZWPWMMDAZPCNRNVTQRQBYPSXGGUHLTYRDZBJZVGPZLZLRTCSLMRFGYIUQRDDTLFPOCHVVDEQUMFAYIZREGWJULRVEPTSVJDDEXRCPYKMFEFXGQWKBBOGOUOBGEQPAJISCWXTKJSFFIZVMKLGAJABMA");
    const char tmp_tmp_msg_0_0[] = {27, -109, 7, -122, 14, 126, -96, 124, 35, 16, -60, 4, -35, -11, 19, -7, 56, -30, -48, -103, -64, 94, 26, -102, -34, 19, 22, -120, -80, 51, 44, -50, -64, -118, 67};
    tmp_msg_0.content.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.218584641737);
    msg.setSource(35426U);
    msg.setSourceEntity(59U);
    msg.setDestination(39523U);
    msg.setDestinationEntity(232U);
    msg.sys_id = 25763U;
    msg.priority = -14;
    msg.x = -17701;
    msg.y = 10068;
    msg.z = 24891;
    msg.t = 14582;
    IMC::PowerChannelControl tmp_msg_0;
    tmp_msg_0.name.assign("TOVHYIRFNMYARSCVEDBUCSMIPB");
    tmp_msg_0.op = 224U;
    tmp_msg_0.sched_time = 0.581604103925;
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
    msg.setTimeStamp(0.641310079541);
    msg.setSource(51209U);
    msg.setSourceEntity(189U);
    msg.setDestination(38684U);
    msg.setDestinationEntity(59U);
    msg.sys_id = 47399U;
    msg.priority = 58;
    msg.x = 29093;
    msg.y = -11358;
    msg.z = 3782;
    msg.t = 632;
    IMC::FormationEval tmp_msg_0;
    tmp_msg_0.err_mean = 0.152398974121;
    tmp_msg_0.dist_min_abs = 0.641223115633;
    tmp_msg_0.dist_min_mean = 0.452039566895;
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
    msg.setTimeStamp(0.886442698386);
    msg.setSource(17046U);
    msg.setSourceEntity(252U);
    msg.setDestination(15351U);
    msg.setDestinationEntity(245U);
    msg.req_id = 30279U;
    msg.type = 94U;
    msg.max_size = 21948U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.67923892276;
    tmp_msg_0.base_lon = 0.416996229024;
    tmp_msg_0.base_time = 0.251531650531;
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
    msg.setTimeStamp(0.156134298131);
    msg.setSource(51577U);
    msg.setSourceEntity(95U);
    msg.setDestination(31338U);
    msg.setDestinationEntity(69U);
    msg.req_id = 4931U;
    msg.type = 28U;
    msg.max_size = 12678U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.31744555642;
    tmp_msg_0.base_lon = 0.969624102256;
    tmp_msg_0.base_time = 0.496618977865;
    IMC::RemoteCommand tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.original_source = 29600U;
    tmp_tmp_msg_0_0.destination = 42542U;
    tmp_tmp_msg_0_0.timeout = 0.584199120867;
    IMC::TextMessage tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.origin.assign("LQIHIWCRHOVTQPSWCDPIAWHBAHQBUVSZMOLZAJYGYUEEBLKTOUYSUIWBBKMONIVJALSYPCDLGFUTJIKAOAKJXGESRZZGLSCMRJIHFMGVPCRFLMUXVCZHHNJEVTDGTKBIYGM");
    tmp_tmp_tmp_msg_0_0_0.text.assign("ZXGFMIWBSKEXGBNORRYGXRACJFYGTFVPXMMDAQHENIOXRKILTRPBLLSDYDPOZVTMACULGHWSPKDOQHOFQGRGSINRSABFVMZYSQLIDCOYUEOBQKBTJVDANXDCTXAUEVFFJVSGNHMJHEECALKLVTXOCDIKSGPZVQUKHBTICJWWTWJFJUFSNVEGKWCUEPZWHJNJXMUUJYENUKTORZVZQSHLQXWFCYMANOTPQCDH");
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
    msg.setTimeStamp(0.0806043207061);
    msg.setSource(29447U);
    msg.setSourceEntity(85U);
    msg.setDestination(57322U);
    msg.setDestinationEntity(216U);
    msg.req_id = 19603U;
    msg.type = 132U;
    msg.max_size = 8588U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.75345550254;
    tmp_msg_0.base_lon = 0.949348370626;
    tmp_msg_0.base_time = 0.274947335572;
    IMC::HistoricSample tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.sys_id = 20744U;
    tmp_tmp_msg_0_0.priority = 84;
    tmp_tmp_msg_0_0.x = 12382;
    tmp_tmp_msg_0_0.y = 10388;
    tmp_tmp_msg_0_0.z = -10793;
    tmp_tmp_msg_0_0.t = -28669;
    IMC::CameraZoom tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.id = 55U;
    tmp_tmp_tmp_msg_0_0_0.zoom = 50U;
    tmp_tmp_tmp_msg_0_0_0.action = 105U;
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
    msg.setTimeStamp(0.294277514398);
    msg.setSource(26170U);
    msg.setSourceEntity(198U);
    msg.setDestination(12883U);
    msg.setDestinationEntity(71U);
    msg.original_source = 10922U;
    msg.destination = 24373U;
    msg.timeout = 0.529878537811;
    IMC::MonitorEntityState tmp_msg_0;
    tmp_msg_0.command = 171U;
    tmp_msg_0.entities.assign("GPQTRRWABHLBWYSUWCLSDFYCHNLDWQXQZRIAGOOZMKFBFRZKMFJMKYGAGVMTOLYUVMDZCWNUASTXPCBUTUXGNPWVCRGUKBPMSYBLJPWLTGMZSOSEQWJVVICTFAKPAUQJFYLBLKUWBCNBRPVPZSJDGSAFXOFQMNKJNYSJGXHJOVRDEOIACOXHGHEEERTXDVIVDHIYDZQIHZIAAPOZYWTFTJIHN");
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
    msg.setTimeStamp(0.853714540061);
    msg.setSource(5079U);
    msg.setSourceEntity(90U);
    msg.setDestination(4758U);
    msg.setDestinationEntity(169U);
    msg.original_source = 46665U;
    msg.destination = 64711U;
    msg.timeout = 0.168542790744;
    IMC::TrexObservation tmp_msg_0;
    tmp_msg_0.timeline.assign("DHWYKWTCXEVHXHHNBIXBJHUTMXFIADPSXNYXUUBOZMPFURJQCLMXZPORCAKPXUZFEGVYHJHKGVTWHFMTZABE");
    tmp_msg_0.predicate.assign("ZTBYPJJVCZBGPRWTDAPQEIWXKAUFQELNYAOBRRMOWGAAVKQHIEHUTFTJUFJGDRRXBUKOOXNQIENCDDOZHIDCMSJXGILVHNRSQPZFNAKFYCQWBIIRWCGETZDHNEYBUXGDWVU");
    tmp_msg_0.attributes.assign("VZFXKMNRGBXJOITTMHULPNXICJRZDFSNALVZBIWHGBKPSKPIVWPZDWFBSMYGNSNZPWQMHOOJFPGEUCQOBWLWQQQRWEXZYTLFJAFEZOFUQJCEOPRJYGSGMMXEYCLVTCHTYTJDSZIAQCLKWBUOLDTUIJDXDN");
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
    msg.setTimeStamp(0.00466345224397);
    msg.setSource(56262U);
    msg.setSourceEntity(52U);
    msg.setDestination(59697U);
    msg.setDestinationEntity(227U);
    msg.original_source = 20484U;
    msg.destination = 40423U;
    msg.timeout = 0.527173918913;
    IMC::DesiredPitch tmp_msg_0;
    tmp_msg_0.value = 0.0810468918715;
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
    msg.setTimeStamp(0.686235067223);
    msg.setSource(15371U);
    msg.setSourceEntity(160U);
    msg.setDestination(53964U);
    msg.setDestinationEntity(0U);
    msg.type = 197U;
    msg.comm_interface = 50875U;
    msg.model = 62511U;
    msg.list.assign("FGZHVGXIQRDJAYHVQJUNLINALTOSUQWEJOCZZTBBBRGRVYXLXKBZQFDXWRPLWYOMPEXKKMVMWOQNFXEWRLFVYOEPZAVUJIYMTEGUYACFTXFOABHQKWNJVDTJADKPZV");

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
    msg.setTimeStamp(0.911453045378);
    msg.setSource(35141U);
    msg.setSourceEntity(85U);
    msg.setDestination(37506U);
    msg.setDestinationEntity(207U);
    msg.type = 26U;
    msg.comm_interface = 15602U;
    msg.model = 19825U;
    msg.list.assign("WFSWDTXULNFXRK");

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
    msg.setTimeStamp(0.301258265085);
    msg.setSource(8742U);
    msg.setSourceEntity(23U);
    msg.setDestination(40641U);
    msg.setDestinationEntity(100U);
    msg.type = 78U;
    msg.comm_interface = 28438U;
    msg.model = 33597U;
    msg.list.assign("SYQQCNHVYGHEUNZEKNPQJKBVLPTAJHTBSMBHKWDJUIHMRGMLIXZOQCQCXFKODVIRXMTIPJDKIFWXEFDIVSUBMLAWLNRFLOWGBWNRGZDHYZUPHOYFANTZJOQCCTSSREUMYRCKUFXVYSFCWDGUVTDKURXMZKESIMZBFSGQOINQPWJPTADEXEXFSGYPBJVIGRRLBNPEILZXTYOOLDNJANHUBVPTRTHLXMOVZZAAKMWAWKO");

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
    msg.setTimeStamp(0.375949975484);
    msg.setSource(49384U);
    msg.setSourceEntity(50U);
    msg.setDestination(63912U);
    msg.setDestinationEntity(176U);
    msg.type = 41U;
    msg.req_id = 2803370150U;
    msg.ttl = 48782U;
    msg.code = 203U;
    msg.destination.assign("CUHGQSVADZSLTDCKSMVJIZKQMLHFHOGBWGUUJEWHTIZYECNOMXMHTZNRQGLJQNYWMNBRSPOLBBURTJQRCIPXGJDPEXJFFKDEZANPTCEGFDVLSBNIVOBSZOQWITPZSYCKLXREPJDDVCHTDNRW");
    msg.source.assign("UVSQRJKIMQKEHULEHHLACSJKYNDRVPOFHBRTTTYXLWVXAZFRUHHXIPATTHDPBRRKLCASHIUFYPCPEJUGC");
    msg.acknowledge = 166U;
    msg.status = 74U;
    const char tmp_msg_0[] = {-61, 21, 12, -61, -77, 45, -36, 107, 8, -64, 24, -62, 123, -105, 107, -117, -73, 35, 83, 79, 61, -89, 11, 91, 79, 53, -79, 95, 76, 55, -4, 43, 65, -37, -123, 74, 14};
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
    msg.setTimeStamp(0.542041033002);
    msg.setSource(39139U);
    msg.setSourceEntity(194U);
    msg.setDestination(12428U);
    msg.setDestinationEntity(99U);
    msg.type = 227U;
    msg.req_id = 1312983752U;
    msg.ttl = 39965U;
    msg.code = 39U;
    msg.destination.assign("LFFAXGCNNUSKXOXDBXRWMJKABVKMQWZNEDPBMNVODAGQUGCRZJYNSUHWFKGOXUDLATUWCQIZSZGPKQYVRRLLVLFHAWNWBFLMTCNDHHJOSQWFFMBEDT");
    msg.source.assign("UTDVPXGQIGOYVEMHBANDYSAFBQQYRNGKKWHXDHLLYZCJIXQQLYNIGZXAWPGOTUHRDGTMFAGSJQFUDBDZPBGHYXJELARTBEVLWAJCBNNZVZFTVMOZIJOLWTCSCQFMEFLKWIUJSAXCZNMVETCMGDDOJRYJSZNKIBEQVXIHFALKXSHMHBYAFOZFRCWEURNGKJSCPP");
    msg.acknowledge = 114U;
    msg.status = 118U;
    const char tmp_msg_0[] = {-99, -40, 46, -68, -21, 79, 70, -25, -103, -63, -97, -128, 59, -61, -28, -29, 93, -73, 22, -120, -119, 28, 40, -47, 15, 28, 44, 34, -37, -41, -5, 12, -21, -14, 44, 110, -98, -26, 110, 109, -76, -29, -124, 110, 35, 19, -125, 26, 11, -107, -90, 71, 91, 4, 29, -13, -115, 124, 107, -81, -98, 112, -127, -51, 120, 14, 5, -86, 30, 120, 121, -41, -123, -17, 101, -43, -33, -105, -114, -122, -106, 70, -22, -55, 9, 77, 45, 85, -97, -76, 59, -62, -103, -55, -89, 58, -20, 50, 100, -92, 23, -69, 4, -111, -71, 120, 42, -6, -82, -110, 103, 32, 5, -126, -76, 94, -6, 122, 18, -71, -118, -32, 124, -93, -96, 89, 109, 7, 38, -53, 53, -104, -24, 125, 64, 123, -94, -32, 37, -59, -111, -87, -14, -19, 40, 5, -119, 13, -30, -5, -55, 17, 64, 106, 113, 2, -42, -119, 73, -51, -70, 63, 19, -89, 117, -126, 13, -53, -29, -107, -37, -12, 88, -43, -115, -90, -47, 89, 117, -77, 61, 49, -111, -61, -71, -58, 64, -90, -88, 51, -125, 104, 123, 85, -77, 4, 36, 76, 68, -62, -125, -106, 6, 0, 85, -2, -12, -64, -6, 64, -86, -92, -8, 10, 21, -1, -39, -73, 64, 22, -16, -59, 67, 33, -41, 78, -8, -89, 67, 118, -61, -128, -35, -9, -78, 27, -34, -50, -23, -90, -106, -87, -37};
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
    msg.setTimeStamp(0.575122051322);
    msg.setSource(52387U);
    msg.setSourceEntity(233U);
    msg.setDestination(7529U);
    msg.setDestinationEntity(128U);
    msg.type = 136U;
    msg.req_id = 1553888115U;
    msg.ttl = 39646U;
    msg.code = 176U;
    msg.destination.assign("QKENRBMUCUUSYNMBXGWYFRHSUQPIAQWSDHVUXLAISAWMQOSDDWBWTGPJIZTGPOBUDDEAFRSMUYPTVFRHCBVJSZLSRYZYJMVWJZVD");
    msg.source.assign("YOXDIAMLWWPGZALCGXHPLTMTKZHGELHAWQTCBFJCISOSMAJCQVXZSFPQPQZCRRBQOWWBUB");
    msg.acknowledge = 56U;
    msg.status = 177U;
    const char tmp_msg_0[] = {17, 95, -11, -88, 4, 87, -85, 77, 97, 105, 46, 51, 54, -10, 88, -44, -23, 33, -80, 72, -53, -43, -93, -77, 120, 60, -15, -36, 80, 40, 124, 22, 6, 107, 33, -3, 56, 23, -72, -56, -22, 15, -98, 37, -5, 119, -10, -11, -79, 73, 79, 113, 5, -79, 84, 38, -87, -49, 60, -20, -105, 32, 99, -94, -85, 14, 64, 9, 76, -122, -119, 41, -71, 119, 7, -73, 118, -67, 8, 29, 22, -38, 77, 58, -112, 64, -88, -99, 120, 124, -97, -88, 80, 109, -110, 6, 86, -58, -28, 1, 33, -125, -41, 98, 57, 69, -87, -68, -93, -116, 90, 11, 30, -51, -123, 57, -42, 46, 13, 33, -75, 77, 111, 71, -34, -20, 126, -24, -58, 124, -108, -84, -30, 73, -65, 42, -103, -8, 93, -58, -15, 24, 91, -112, 48, 14, -125, -48, -13, -86, 43, 82, 63, -20, -29, -4, 9};
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
    msg.setTimeStamp(0.140032326803);
    msg.setSource(35304U);
    msg.setSourceEntity(93U);
    msg.setDestination(64632U);
    msg.setDestinationEntity(127U);
    msg.id = 96U;
    msg.range = 0.759601087502;

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
    msg.setTimeStamp(0.162894856926);
    msg.setSource(43708U);
    msg.setSourceEntity(28U);
    msg.setDestination(32996U);
    msg.setDestinationEntity(28U);
    msg.id = 97U;
    msg.range = 0.86734804751;

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
    msg.setTimeStamp(0.902475321508);
    msg.setSource(64535U);
    msg.setSourceEntity(155U);
    msg.setDestination(52497U);
    msg.setDestinationEntity(141U);
    msg.id = 32U;
    msg.range = 0.943183036777;

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
    msg.setTimeStamp(0.245489441742);
    msg.setSource(62918U);
    msg.setSourceEntity(160U);
    msg.setDestination(10534U);
    msg.setDestinationEntity(211U);
    msg.beacon.assign("CQENDVXEHLXNFRCXCATBDLAVAMLCSLSNUDSFGZOCGYOSB");
    msg.lat = 0.159473992128;
    msg.lon = 0.365866509457;
    msg.depth = 0.184697535252;
    msg.query_channel = 121U;
    msg.reply_channel = 15U;
    msg.transponder_delay = 231U;

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
    msg.setTimeStamp(0.496392636147);
    msg.setSource(55536U);
    msg.setSourceEntity(133U);
    msg.setDestination(14604U);
    msg.setDestinationEntity(17U);
    msg.beacon.assign("XRCPYSUBFPDLHOFOJNGCVWELRJDFHBYWQHIKTTSPFOFRVOHKDIVPVNJGQOQAUMMRMGNXOICZUWUZXAGQFGOHXSCCZHKMBIFYSMTLIKWDKTYXSKBZACJVQSGZOLXWIUZBJPJKPSGTERSRVNEBYCMEHSTZYRIPGEVYPJAPTAGEVI");
    msg.lat = 0.494292241413;
    msg.lon = 0.563568874208;
    msg.depth = 0.892928033107;
    msg.query_channel = 235U;
    msg.reply_channel = 226U;
    msg.transponder_delay = 222U;

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
    msg.setTimeStamp(0.611576253219);
    msg.setSource(17603U);
    msg.setSourceEntity(133U);
    msg.setDestination(43678U);
    msg.setDestinationEntity(118U);
    msg.beacon.assign("BKSIFQJTOSDZXFYTJCHURIERSAHAUNTUKESONKTWLCPGDESHKJRVAIEOQCCRWMWXSFCZKGKVUYSHBCWCLWEXQVRUGBOQWAQISVDLOMLG");
    msg.lat = 0.153643279855;
    msg.lon = 0.705401430925;
    msg.depth = 0.378045928693;
    msg.query_channel = 171U;
    msg.reply_channel = 71U;
    msg.transponder_delay = 187U;

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
    msg.setTimeStamp(0.813211811125);
    msg.setSource(32258U);
    msg.setSourceEntity(50U);
    msg.setDestination(16271U);
    msg.setDestinationEntity(97U);
    msg.op = 254U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("DMTMRSFYXMETW");
    tmp_msg_0.lat = 0.764219338482;
    tmp_msg_0.lon = 0.503983291579;
    tmp_msg_0.depth = 0.804217505217;
    tmp_msg_0.query_channel = 88U;
    tmp_msg_0.reply_channel = 100U;
    tmp_msg_0.transponder_delay = 127U;
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
    msg.setTimeStamp(0.254087556072);
    msg.setSource(8487U);
    msg.setSourceEntity(247U);
    msg.setDestination(12793U);
    msg.setDestinationEntity(206U);
    msg.op = 134U;

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
    msg.setTimeStamp(0.831806479348);
    msg.setSource(19652U);
    msg.setSourceEntity(60U);
    msg.setDestination(39860U);
    msg.setDestinationEntity(143U);
    msg.op = 149U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("ILKMNIBZYFWWORGQPCNXMMJPQDRCUCNIHMZXWUPKBXYXAJYWYZVTFQQMPSAUFLRWMFDGGCJEWCDAIARNOSGOXUIOSFZVVRGBCMUZKEYMBNJTFNUSSWGJCMFTQAOKRDBLSHPEGV");
    tmp_msg_0.lat = 0.420618108153;
    tmp_msg_0.lon = 0.874227646209;
    tmp_msg_0.depth = 0.685473247354;
    tmp_msg_0.query_channel = 148U;
    tmp_msg_0.reply_channel = 12U;
    tmp_msg_0.transponder_delay = 44U;
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
    msg.setTimeStamp(0.0890019142002);
    msg.setSource(27471U);
    msg.setSourceEntity(155U);
    msg.setDestination(22042U);
    msg.setDestinationEntity(84U);
    IMC::DesiredVerticalRate tmp_msg_0;
    tmp_msg_0.value = 0.245474955775;
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
    msg.setTimeStamp(0.327082504269);
    msg.setSource(51524U);
    msg.setSourceEntity(40U);
    msg.setDestination(18073U);
    msg.setDestinationEntity(103U);
    IMC::AcousticOperation tmp_msg_0;
    tmp_msg_0.op = 250U;
    tmp_msg_0.system.assign("MOKKIHSYIBQMVXPXVAXOURJKACKVNZTNLMBVAOTBAMQTDRJLELNUKYMUPGSQQAFRPWMNOFPFQRFGWOSTHFKYOEXDHTMEQEYIAGPZIYKPJNQUBWKFDBPTEGUSJXJWCSPDJXEHZUYSDICMZBZPLOIECDRGBMUUCNNVCXBADZGLTDJXZSZIJEVQLHSOBJCNRNFWYCHTLRWKZNRWDVVAOHYLLYIOCWPWEYRAGRJQMI");
    tmp_msg_0.range = 0.613216857709;
    IMC::FormationControlParams tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.action = 170U;
    tmp_tmp_msg_0_0.lon_gain = 0.0955824018208;
    tmp_tmp_msg_0_0.lat_gain = 0.853635178016;
    tmp_tmp_msg_0_0.bond_thick = 0.0780400122027;
    tmp_tmp_msg_0_0.lead_gain = 0.852738824703;
    tmp_tmp_msg_0_0.deconfl_gain = 0.190346310058;
    tmp_tmp_msg_0_0.accel_switch_gain = 0.214807326194;
    tmp_tmp_msg_0_0.safe_dist = 0.14470502377;
    tmp_tmp_msg_0_0.deconflict_offset = 0.429630435961;
    tmp_tmp_msg_0_0.accel_safe_margin = 0.00461594651742;
    tmp_tmp_msg_0_0.accel_lim_x = 0.482046953136;
    tmp_msg_0.msg.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.529112272358);
    msg.setSource(62876U);
    msg.setSourceEntity(100U);
    msg.setDestination(41664U);
    msg.setDestinationEntity(129U);
    IMC::RestartSystem tmp_msg_0;
    tmp_msg_0.type = 162U;
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
    msg.setTimeStamp(0.47339191643);
    msg.setSource(58496U);
    msg.setSourceEntity(80U);
    msg.setDestination(5638U);
    msg.setDestinationEntity(49U);
    msg.op = 175U;
    msg.system.assign("NVZLYBILMVVOMQOSXFMCTSJPBPQKGVCRWPAYMNRQAHNIRWKQPFMMPTYHTZNMBTUCZIUHGKJDEGQEEPOWYZDWKDGNZRBJOLTQSTHIZFOKCGDBOUHLWDVGYLNJQVWSXCRZJHXZWZZCXFRXRPWUYSEWEKFBBTIRAEJCGLMAJGYSVPMIKULXFEAUYXCATHODGSAKHJFJBXYLEDFIIASYGNWIEVPVFQKULQLECPKNMBUJOCTQXUSRANOUDNXIOSHADF");
    msg.range = 0.733584456683;
    IMC::FollowReference tmp_msg_0;
    tmp_msg_0.control_src = 39961U;
    tmp_msg_0.control_ent = 247U;
    tmp_msg_0.timeout = 0.362862861949;
    tmp_msg_0.loiter_radius = 0.61615716404;
    tmp_msg_0.altitude_interval = 0.189702973746;
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
    msg.setTimeStamp(0.15437458208);
    msg.setSource(47460U);
    msg.setSourceEntity(231U);
    msg.setDestination(56185U);
    msg.setDestinationEntity(104U);
    msg.op = 196U;
    msg.system.assign("MUMXQAGOITULUZUJXDIZNQFLACJKJTNTRFDCUXCEXEVMVBERXUHBIGWGYSUNBRS");
    msg.range = 0.0442826491033;
    IMC::HistoricTelemetry tmp_msg_0;
    tmp_msg_0.altitude = 0.542859106065;
    tmp_msg_0.roll = 23284U;
    tmp_msg_0.pitch = 5128U;
    tmp_msg_0.yaw = 27185U;
    tmp_msg_0.speed = 14561;
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
    msg.setTimeStamp(0.592040279356);
    msg.setSource(29235U);
    msg.setSourceEntity(29U);
    msg.setDestination(11699U);
    msg.setDestinationEntity(8U);
    msg.op = 99U;
    msg.system.assign("FVXECJHYUANNTMRBGQXBGMLKZUONIUVRONKYVBQPOEFVZKFXTJUESKHKITYPSRUXLOYMNMIYCBMWVTPWMJIOIUHLDCAFWLQBAPZBVXSZXKIIFEPSJOJZUAMEGDZQYMTDPODWNGRAIEMQHGEHFLPLSVABVXFTHTWLYJPLDEZGDMGCCSAHJPSPJQJLZXOWJAAQKXCZRSIUDQSHWNOGFNYWCYHVBNRORUWDIRBCF");
    msg.range = 0.105055722005;
    IMC::FormationState tmp_msg_0;
    tmp_msg_0.type = 11U;
    tmp_msg_0.op = 34U;
    tmp_msg_0.possimerr = 0.0659265007541;
    tmp_msg_0.converg = 0.977639952101;
    tmp_msg_0.turbulence = 0.82492989577;
    tmp_msg_0.possimmon = 20U;
    tmp_msg_0.commmon = 161U;
    tmp_msg_0.convergmon = 234U;
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
    msg.setTimeStamp(0.258768330728);
    msg.setSource(26924U);
    msg.setSourceEntity(16U);
    msg.setDestination(64532U);
    msg.setDestinationEntity(206U);

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
    msg.setTimeStamp(0.472611850041);
    msg.setSource(8887U);
    msg.setSourceEntity(86U);
    msg.setDestination(57874U);
    msg.setDestinationEntity(57U);

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
    msg.setTimeStamp(0.950042476632);
    msg.setSource(47562U);
    msg.setSourceEntity(209U);
    msg.setDestination(42000U);
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
    msg.setTimeStamp(0.325254040406);
    msg.setSource(55066U);
    msg.setSourceEntity(217U);
    msg.setDestination(37167U);
    msg.setDestinationEntity(69U);
    msg.list.assign("TFQWGRIZFJXOANHJNRBHAYUYWIWCKEJGHELBSNJGHHWWXRTNALLCDQIININUDZJUGWGDGTRPVKBDWOES");

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
    msg.setTimeStamp(0.254935402441);
    msg.setSource(15998U);
    msg.setSourceEntity(245U);
    msg.setDestination(39316U);
    msg.setDestinationEntity(76U);
    msg.list.assign("IJYKDYMFYOIFEYRFSZDCLTQOJFQZTWNBQUVCEGUBWWPIQOTNRVAYUDHKBTLJCQKVNPEZWRUB");

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
    msg.setTimeStamp(0.656762143522);
    msg.setSource(5808U);
    msg.setSourceEntity(131U);
    msg.setDestination(64512U);
    msg.setDestinationEntity(120U);
    msg.list.assign("RTLDJDSICAZBRKEIJRBQVCWZIHZLPTYOWISUEYFIZUIMXLLDCYXWXGGNKKZQDIXWCGSHARSMJFTGLFEZFAAQAMYTUOMAMDWMCBVZJVKOOSGDQQHGQDBCNMMTQSUVNJRJGXKAUTECXPULAKOFHLHSNLFJHWTYZNMPUOSREVQFKYEPGTYIWPALHNBPUYOMBTOKPFZPRVAENJYXLFQVHOHWOEXPVTBXFCWRREKGSGNVC");

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
    msg.setTimeStamp(0.616257009836);
    msg.setSource(3531U);
    msg.setSourceEntity(28U);
    msg.setDestination(34918U);
    msg.setDestinationEntity(185U);
    msg.peer.assign("GABCJWHFTVEDTEVNXLZMRKCRWAJVZGOTEETXFRKLHJPFAYEPLZDBLKHRNMQSWBWDDCKOXZGAQMBUBVDJEXQNPTVIWPDXPCSLBHFSQZOCCSMIKLSSMXCLHHT");
    msg.rssi = 0.241813156045;
    msg.integrity = 53265U;

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
    msg.setTimeStamp(0.0150749600514);
    msg.setSource(36902U);
    msg.setSourceEntity(143U);
    msg.setDestination(16667U);
    msg.setDestinationEntity(143U);
    msg.peer.assign("EUHKAGFAQHOMQCJXLWUQDXWAFBPTCUNKOBF");
    msg.rssi = 0.0467596740439;
    msg.integrity = 43941U;

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
    msg.setTimeStamp(0.716167563755);
    msg.setSource(23433U);
    msg.setSourceEntity(108U);
    msg.setDestination(52136U);
    msg.setDestinationEntity(141U);
    msg.peer.assign("IBPAJGSLRXFOXCJPODMBTDRULKBYM");
    msg.rssi = 0.345070723143;
    msg.integrity = 51319U;

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
    msg.setTimeStamp(0.507159081046);
    msg.setSource(33032U);
    msg.setSourceEntity(215U);
    msg.setDestination(20905U);
    msg.setDestinationEntity(123U);
    msg.req_id = 23567U;
    msg.destination.assign("MJFOROKEJMPLJNKVJCRNUCSGCTXBCKGHZLGFXSZZMVJDEGUDMW");
    msg.timeout = 0.693569423862;
    msg.range = 0.973768234475;
    msg.type = 7U;
    IMC::OperationalLimits tmp_msg_0;
    tmp_msg_0.mask = 20U;
    tmp_msg_0.max_depth = 0.296326573691;
    tmp_msg_0.min_altitude = 0.623381153733;
    tmp_msg_0.max_altitude = 0.602916343045;
    tmp_msg_0.min_speed = 0.0575950277479;
    tmp_msg_0.max_speed = 0.256590089856;
    tmp_msg_0.max_vrate = 0.0186806187344;
    tmp_msg_0.lat = 0.759360163381;
    tmp_msg_0.lon = 0.809298654841;
    tmp_msg_0.orientation = 0.460493253377;
    tmp_msg_0.width = 0.800918040307;
    tmp_msg_0.length = 0.835441569193;
    IMC::PolygonVertex tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.240332646006;
    tmp_tmp_msg_0_0.lon = 0.319048329842;
    tmp_msg_0.vertices.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.187593647924);
    msg.setSource(8523U);
    msg.setSourceEntity(152U);
    msg.setDestination(43490U);
    msg.setDestinationEntity(251U);
    msg.req_id = 30234U;
    msg.destination.assign("BKSBSGXDRZBEUAJJAIPIYDPZRJIQXNYRJCOBVTOKGJFZURATCWNYTBJZEZPNLRWMHEKBQLSFSCIXHFZVPHMNKMDIQWQEWTWNZYGZHEDOWRTSRCXSQMOXUEQJFYBELJIXELJIXTHSAGUGWFJEFBYLDCTPHSIOFSKCNDQOATZAGOKGKMAFYHTVFPORDQLUKBLULAGVACOTMMHYWLVNBCUCDXXVIUMVCOIGGFZHLYPQANPHKMV");
    msg.timeout = 0.558564862488;
    msg.range = 0.972679551624;
    msg.type = 48U;
    IMC::TransmissionStatus tmp_msg_0;
    tmp_msg_0.req_id = 44823U;
    tmp_msg_0.status = 14U;
    tmp_msg_0.range = 0.598889408494;
    tmp_msg_0.info.assign("AIDHMEFJHYYKLTVRGMZFAWCIBNGWRBSMSUWLNAGSEBZKFPILTOZBZUWNCQAXYEKPOSBLBSQPGDLSMLJXJPDDPHKKZGXWXMQNDPZPQJUOATQJUORZVHFIBKVEREJXILNCGURECHYSSTDUJPOEDXOTRCNDXNMPLJKOYPYRGGJISVIVFYXCSHFRHCKMEWQWAQMWZRBD");
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
    msg.setTimeStamp(0.221160454168);
    msg.setSource(53439U);
    msg.setSourceEntity(97U);
    msg.setDestination(47840U);
    msg.setDestinationEntity(234U);
    msg.req_id = 27635U;
    msg.destination.assign("VZKZWBVZYTUMYPUDQBSPCDLIAALIPGHHLEQUPGVEVNMTBTLCHVCOYYQXTIUZMESKQRHYJQEHOYOXJCMEOZLJIHGLNYLXYFRUVQUBXFBZDGFJBYDJEVCUYDWHMCJWWETLWAMXWFSDNONUJWUOFLNWRORKRTXRBGAIPPQISMBQOZZCEJFSVLFRGGRVDIFEIGSRAOTTHWHPFGMKSQNJDKAZUSCFMVKKENOAPINIXWSAXAPCNZHXBJQKDPDGAMS");
    msg.timeout = 0.792723208214;
    msg.range = 0.639035817323;
    msg.type = 102U;
    IMC::OpticalBackscatter tmp_msg_0;
    tmp_msg_0.value = 0.796665192261;
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
    msg.setTimeStamp(0.916756810053);
    msg.setSource(24364U);
    msg.setSourceEntity(233U);
    msg.setDestination(45817U);
    msg.setDestinationEntity(69U);
    msg.req_id = 55618U;
    msg.type = 165U;
    msg.status = 42U;
    msg.info.assign("EROBVZBCMJAYAEKHRMUXTIDGFJGZASHEOJNBRESIHMYMMYRIZHUEKXQDUMWIFKTBSAVWLXVAPDRWCSZYNBTDNXFKOPGLUYOLIEXPJLLQKPULNNTSFBZOATDKBKOLRUFXEYCGTVAVVHSCIIARIQHIWFZPQFNPYGHQQNBLNMDJWZOGBCDUPZUVCQNAXLJWJZAHWOCYE");
    msg.range = 0.0151990226008;

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
    msg.setTimeStamp(0.0887024711066);
    msg.setSource(47255U);
    msg.setSourceEntity(185U);
    msg.setDestination(43977U);
    msg.setDestinationEntity(166U);
    msg.req_id = 8554U;
    msg.type = 26U;
    msg.status = 220U;
    msg.info.assign("IGEEYJWQUXPJVCBJFKIIVSTOSCDFMWZLQTQEFXJELDPNAJBPYHPOH");
    msg.range = 0.0187178268718;

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
    msg.setTimeStamp(0.781223473603);
    msg.setSource(35759U);
    msg.setSourceEntity(123U);
    msg.setDestination(39395U);
    msg.setDestinationEntity(84U);
    msg.req_id = 46039U;
    msg.type = 49U;
    msg.status = 107U;
    msg.info.assign("IJLNDXVEKQQPARFJUMVKMOKFIOGKSPWNDFGYRNUXYZAQZRZDXDCNHIAMHFESEZBIUVTOCFYFLCPVEVJTGAGGBOYBNCKHWKNLTVOEQMYIYJXBFMIXFNXKPXQAPGLBHUTLLMYUZDHEQWSOAEJYJHVPUMRTTNQVBJSUVIPLEDCISTRGUQLOWPYRWFDAKMGTMWXCQPDBZXVRLKMOJUASWPHHOTTXLDSNSBEOZKYEDCSAHRNBBHJWRZGFWGWA");
    msg.range = 0.268216638938;

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
    msg.setTimeStamp(0.115574454377);
    msg.setSource(50864U);
    msg.setSourceEntity(23U);
    msg.setDestination(16176U);
    msg.setDestinationEntity(130U);
    msg.value = 6532;

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
    msg.setTimeStamp(0.752292482599);
    msg.setSource(32086U);
    msg.setSourceEntity(3U);
    msg.setDestination(24835U);
    msg.setDestinationEntity(9U);
    msg.value = -11942;

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
    msg.setTimeStamp(0.682217591341);
    msg.setSource(38194U);
    msg.setSourceEntity(192U);
    msg.setDestination(7748U);
    msg.setDestinationEntity(122U);
    msg.value = 923;

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
    msg.setTimeStamp(0.933189485111);
    msg.setSource(53184U);
    msg.setSourceEntity(143U);
    msg.setDestination(38536U);
    msg.setDestinationEntity(140U);
    msg.value = 0.144999254852;

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
    msg.setTimeStamp(0.502901766032);
    msg.setSource(15456U);
    msg.setSourceEntity(232U);
    msg.setDestination(63632U);
    msg.setDestinationEntity(73U);
    msg.value = 0.265405166363;

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
    msg.setTimeStamp(0.834179391544);
    msg.setSource(51528U);
    msg.setSourceEntity(191U);
    msg.setDestination(19220U);
    msg.setDestinationEntity(241U);
    msg.value = 0.423047290797;

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
    msg.setTimeStamp(0.313724862667);
    msg.setSource(23940U);
    msg.setSourceEntity(10U);
    msg.setDestination(14414U);
    msg.setDestinationEntity(80U);
    msg.value = 0.735498961147;

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
    msg.setTimeStamp(0.104585440669);
    msg.setSource(44181U);
    msg.setSourceEntity(147U);
    msg.setDestination(56048U);
    msg.setDestinationEntity(134U);
    msg.value = 0.104641639876;

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
    msg.setTimeStamp(0.864942855227);
    msg.setSource(14407U);
    msg.setSourceEntity(202U);
    msg.setDestination(64443U);
    msg.setDestinationEntity(230U);
    msg.value = 0.818720080144;

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
    msg.setTimeStamp(0.0291228540976);
    msg.setSource(33956U);
    msg.setSourceEntity(25U);
    msg.setDestination(18357U);
    msg.setDestinationEntity(168U);
    msg.validity = 4236U;
    msg.type = 227U;
    msg.utc_year = 55223U;
    msg.utc_month = 88U;
    msg.utc_day = 163U;
    msg.utc_time = 0.675105345936;
    msg.lat = 0.713886271057;
    msg.lon = 0.553359698009;
    msg.height = 0.0172137822795;
    msg.satellites = 54U;
    msg.cog = 0.519484383721;
    msg.sog = 0.722284071325;
    msg.hdop = 0.249507957528;
    msg.vdop = 0.212753362274;
    msg.hacc = 0.706839885622;
    msg.vacc = 0.447478498559;

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
    msg.setTimeStamp(0.943896652388);
    msg.setSource(49461U);
    msg.setSourceEntity(39U);
    msg.setDestination(18729U);
    msg.setDestinationEntity(121U);
    msg.validity = 27612U;
    msg.type = 107U;
    msg.utc_year = 30982U;
    msg.utc_month = 59U;
    msg.utc_day = 86U;
    msg.utc_time = 0.211979866868;
    msg.lat = 0.721776785974;
    msg.lon = 0.345046790777;
    msg.height = 0.553023361009;
    msg.satellites = 221U;
    msg.cog = 0.72505754782;
    msg.sog = 0.670662306071;
    msg.hdop = 0.995356179866;
    msg.vdop = 0.90907327863;
    msg.hacc = 0.151018308963;
    msg.vacc = 0.0294362497814;

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
    msg.setTimeStamp(0.176801131993);
    msg.setSource(63377U);
    msg.setSourceEntity(87U);
    msg.setDestination(1246U);
    msg.setDestinationEntity(37U);
    msg.validity = 24636U;
    msg.type = 96U;
    msg.utc_year = 30504U;
    msg.utc_month = 200U;
    msg.utc_day = 151U;
    msg.utc_time = 0.310022793331;
    msg.lat = 0.601800816804;
    msg.lon = 0.158948586727;
    msg.height = 0.502991567016;
    msg.satellites = 167U;
    msg.cog = 0.10520885454;
    msg.sog = 0.802768018763;
    msg.hdop = 0.0582994721853;
    msg.vdop = 0.899600317209;
    msg.hacc = 0.816269806109;
    msg.vacc = 0.850693507954;

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
    msg.setTimeStamp(0.96814759016);
    msg.setSource(50654U);
    msg.setSourceEntity(103U);
    msg.setDestination(35195U);
    msg.setDestinationEntity(91U);
    msg.time = 0.549637541213;
    msg.phi = 0.0887358578696;
    msg.theta = 0.870164572473;
    msg.psi = 0.638440268569;
    msg.psi_magnetic = 0.00310019389873;

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
    msg.setTimeStamp(0.840101638806);
    msg.setSource(38073U);
    msg.setSourceEntity(136U);
    msg.setDestination(3813U);
    msg.setDestinationEntity(197U);
    msg.time = 0.473643315283;
    msg.phi = 0.366650314256;
    msg.theta = 0.991752971202;
    msg.psi = 0.964536808184;
    msg.psi_magnetic = 0.370145318294;

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
    msg.setTimeStamp(0.269914469856);
    msg.setSource(20087U);
    msg.setSourceEntity(144U);
    msg.setDestination(2314U);
    msg.setDestinationEntity(66U);
    msg.time = 0.860193516007;
    msg.phi = 0.399501279096;
    msg.theta = 0.22976153375;
    msg.psi = 0.606443161275;
    msg.psi_magnetic = 0.926717791626;

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
    msg.setTimeStamp(0.350984014838);
    msg.setSource(57583U);
    msg.setSourceEntity(92U);
    msg.setDestination(28065U);
    msg.setDestinationEntity(114U);
    msg.time = 0.828180929256;
    msg.x = 0.316092130985;
    msg.y = 0.573237533289;
    msg.z = 0.559383600564;
    msg.timestep = 0.723037967523;

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
    msg.setTimeStamp(0.478763267218);
    msg.setSource(19429U);
    msg.setSourceEntity(219U);
    msg.setDestination(8562U);
    msg.setDestinationEntity(95U);
    msg.time = 0.11592242188;
    msg.x = 0.922933010408;
    msg.y = 0.390184552694;
    msg.z = 0.530085783836;
    msg.timestep = 0.0255271462315;

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
    msg.setTimeStamp(0.128432210477);
    msg.setSource(44903U);
    msg.setSourceEntity(224U);
    msg.setDestination(15718U);
    msg.setDestinationEntity(49U);
    msg.time = 0.856694386694;
    msg.x = 0.473528433577;
    msg.y = 0.571494644971;
    msg.z = 0.451942500514;
    msg.timestep = 0.623300685181;

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
    msg.setTimeStamp(0.868514959248);
    msg.setSource(14662U);
    msg.setSourceEntity(227U);
    msg.setDestination(51564U);
    msg.setDestinationEntity(23U);
    msg.time = 0.887761648073;
    msg.x = 0.768704633659;
    msg.y = 0.465909176698;
    msg.z = 0.263277555431;

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
    msg.setTimeStamp(0.931410419151);
    msg.setSource(43437U);
    msg.setSourceEntity(178U);
    msg.setDestination(44518U);
    msg.setDestinationEntity(167U);
    msg.time = 0.29598360931;
    msg.x = 0.345136254146;
    msg.y = 0.740038225295;
    msg.z = 0.310455756324;

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
    msg.setTimeStamp(0.533818852209);
    msg.setSource(21773U);
    msg.setSourceEntity(11U);
    msg.setDestination(45675U);
    msg.setDestinationEntity(102U);
    msg.time = 0.116381233073;
    msg.x = 0.202941962554;
    msg.y = 0.88485789118;
    msg.z = 0.174926292625;

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
    msg.setTimeStamp(0.909390513384);
    msg.setSource(62139U);
    msg.setSourceEntity(82U);
    msg.setDestination(28060U);
    msg.setDestinationEntity(45U);
    msg.time = 0.192818298373;
    msg.x = 0.963646514345;
    msg.y = 0.938124451737;
    msg.z = 0.320582316626;

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
    msg.setTimeStamp(0.0513850497786);
    msg.setSource(27567U);
    msg.setSourceEntity(243U);
    msg.setDestination(23324U);
    msg.setDestinationEntity(155U);
    msg.time = 0.76565256007;
    msg.x = 0.421367510942;
    msg.y = 0.298013751307;
    msg.z = 0.371060992907;

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
    msg.setTimeStamp(0.364823906282);
    msg.setSource(11116U);
    msg.setSourceEntity(190U);
    msg.setDestination(60842U);
    msg.setDestinationEntity(136U);
    msg.time = 0.770399773695;
    msg.x = 0.415783755046;
    msg.y = 0.695908675795;
    msg.z = 0.556023615196;

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
    msg.setTimeStamp(0.830322712639);
    msg.setSource(5280U);
    msg.setSourceEntity(110U);
    msg.setDestination(8411U);
    msg.setDestinationEntity(77U);
    msg.time = 0.148735179011;
    msg.x = 0.442161630077;
    msg.y = 0.575984788112;
    msg.z = 0.510312184133;

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
    msg.setTimeStamp(0.280366083338);
    msg.setSource(15471U);
    msg.setSourceEntity(72U);
    msg.setDestination(20573U);
    msg.setDestinationEntity(165U);
    msg.time = 0.236026442266;
    msg.x = 0.344758570315;
    msg.y = 0.381219401886;
    msg.z = 0.623541939912;

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
    msg.setTimeStamp(0.327074979304);
    msg.setSource(17478U);
    msg.setSourceEntity(198U);
    msg.setDestination(2523U);
    msg.setDestinationEntity(109U);
    msg.time = 0.740659194145;
    msg.x = 0.344841614221;
    msg.y = 0.180317363898;
    msg.z = 0.0917841918339;

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
    msg.setTimeStamp(0.824275588194);
    msg.setSource(3743U);
    msg.setSourceEntity(233U);
    msg.setDestination(22416U);
    msg.setDestinationEntity(59U);
    msg.validity = 171U;
    msg.x = 0.20393077859;
    msg.y = 0.939568007391;
    msg.z = 0.169135120493;

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
    msg.setTimeStamp(0.0717517893461);
    msg.setSource(64986U);
    msg.setSourceEntity(57U);
    msg.setDestination(31U);
    msg.setDestinationEntity(220U);
    msg.validity = 234U;
    msg.x = 0.0183961895075;
    msg.y = 0.637809709475;
    msg.z = 0.11351236652;

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
    msg.setTimeStamp(0.18735515387);
    msg.setSource(35759U);
    msg.setSourceEntity(210U);
    msg.setDestination(3454U);
    msg.setDestinationEntity(101U);
    msg.validity = 119U;
    msg.x = 0.831793167188;
    msg.y = 0.486017947751;
    msg.z = 0.455816384106;

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
    msg.setTimeStamp(0.835160886319);
    msg.setSource(58044U);
    msg.setSourceEntity(172U);
    msg.setDestination(19030U);
    msg.setDestinationEntity(87U);
    msg.validity = 26U;
    msg.x = 0.699772641156;
    msg.y = 0.476310644244;
    msg.z = 0.282135304414;

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
    msg.setTimeStamp(0.3469746928);
    msg.setSource(16641U);
    msg.setSourceEntity(175U);
    msg.setDestination(42575U);
    msg.setDestinationEntity(210U);
    msg.validity = 120U;
    msg.x = 0.804220443516;
    msg.y = 0.0727762451138;
    msg.z = 0.927221963036;

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
    msg.setTimeStamp(0.497007564153);
    msg.setSource(60502U);
    msg.setSourceEntity(242U);
    msg.setDestination(14986U);
    msg.setDestinationEntity(145U);
    msg.validity = 21U;
    msg.x = 0.56718077769;
    msg.y = 0.791729455124;
    msg.z = 0.772518522572;

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
    msg.setTimeStamp(0.431956859387);
    msg.setSource(1420U);
    msg.setSourceEntity(30U);
    msg.setDestination(40514U);
    msg.setDestinationEntity(220U);
    msg.time = 0.770397591611;
    msg.x = 0.155196243011;
    msg.y = 0.22114050602;
    msg.z = 0.866150435182;

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
    msg.setTimeStamp(0.225358917861);
    msg.setSource(38926U);
    msg.setSourceEntity(234U);
    msg.setDestination(4294U);
    msg.setDestinationEntity(67U);
    msg.time = 0.837698630742;
    msg.x = 0.0864129612118;
    msg.y = 0.793932978494;
    msg.z = 0.532090893438;

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
    msg.setTimeStamp(0.652907575043);
    msg.setSource(12587U);
    msg.setSourceEntity(178U);
    msg.setDestination(22988U);
    msg.setDestinationEntity(180U);
    msg.time = 0.208895097823;
    msg.x = 0.814243347422;
    msg.y = 0.146952745528;
    msg.z = 0.215005787587;

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
    msg.setTimeStamp(0.676018781706);
    msg.setSource(51129U);
    msg.setSourceEntity(29U);
    msg.setDestination(40353U);
    msg.setDestinationEntity(43U);
    msg.validity = 181U;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.276596800583;
    tmp_msg_0.beam_height = 0.326760557054;
    msg.beam_config.push_back(tmp_msg_0);
    msg.value = 0.807129635083;

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
    msg.setTimeStamp(0.87288387023);
    msg.setSource(52367U);
    msg.setSourceEntity(211U);
    msg.setDestination(50257U);
    msg.setDestinationEntity(168U);
    msg.validity = 196U;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.757528408484;
    tmp_msg_0.beam_height = 0.460289052109;
    msg.beam_config.push_back(tmp_msg_0);
    msg.value = 0.501855327551;

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
    msg.setTimeStamp(0.541248689458);
    msg.setSource(55261U);
    msg.setSourceEntity(207U);
    msg.setDestination(39516U);
    msg.setDestinationEntity(204U);
    msg.validity = 111U;
    msg.value = 0.877347751753;

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
    msg.setTimeStamp(0.192144304996);
    msg.setSource(29520U);
    msg.setSourceEntity(234U);
    msg.setDestination(10601U);
    msg.setDestinationEntity(12U);
    msg.value = 0.679146599579;

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
    msg.setTimeStamp(0.611251291418);
    msg.setSource(46059U);
    msg.setSourceEntity(14U);
    msg.setDestination(3781U);
    msg.setDestinationEntity(170U);
    msg.value = 0.927874795278;

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
    msg.setTimeStamp(0.0840540933604);
    msg.setSource(58865U);
    msg.setSourceEntity(217U);
    msg.setDestination(55743U);
    msg.setDestinationEntity(188U);
    msg.value = 0.827082105392;

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
    msg.setTimeStamp(0.390545725179);
    msg.setSource(13607U);
    msg.setSourceEntity(21U);
    msg.setDestination(40277U);
    msg.setDestinationEntity(146U);
    msg.value = 0.250211184742;

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
    msg.setTimeStamp(0.470318032959);
    msg.setSource(51793U);
    msg.setSourceEntity(58U);
    msg.setDestination(355U);
    msg.setDestinationEntity(248U);
    msg.value = 0.75533669164;

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
    msg.setTimeStamp(0.6399645699);
    msg.setSource(30222U);
    msg.setSourceEntity(101U);
    msg.setDestination(64520U);
    msg.setDestinationEntity(213U);
    msg.value = 0.982507558573;

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
    msg.setTimeStamp(0.866960474437);
    msg.setSource(34121U);
    msg.setSourceEntity(22U);
    msg.setDestination(27724U);
    msg.setDestinationEntity(69U);
    msg.value = 0.629328745142;

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
    msg.setTimeStamp(0.213934984822);
    msg.setSource(15663U);
    msg.setSourceEntity(251U);
    msg.setDestination(11447U);
    msg.setDestinationEntity(37U);
    msg.value = 0.497962017406;

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
    msg.setTimeStamp(0.47388583574);
    msg.setSource(39336U);
    msg.setSourceEntity(29U);
    msg.setDestination(51940U);
    msg.setDestinationEntity(127U);
    msg.value = 0.025959520461;

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
    msg.setTimeStamp(0.376348175708);
    msg.setSource(44894U);
    msg.setSourceEntity(221U);
    msg.setDestination(44419U);
    msg.setDestinationEntity(48U);
    msg.value = 0.408056641576;

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
    msg.setTimeStamp(0.662045981022);
    msg.setSource(58760U);
    msg.setSourceEntity(209U);
    msg.setDestination(37613U);
    msg.setDestinationEntity(205U);
    msg.value = 0.972798553187;

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
    msg.setTimeStamp(0.316892754856);
    msg.setSource(36449U);
    msg.setSourceEntity(156U);
    msg.setDestination(26465U);
    msg.setDestinationEntity(94U);
    msg.value = 0.848181288949;

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
    msg.setTimeStamp(0.0554944110213);
    msg.setSource(36364U);
    msg.setSourceEntity(16U);
    msg.setDestination(50480U);
    msg.setDestinationEntity(134U);
    msg.value = 0.991397695279;

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
    msg.setTimeStamp(0.982001440578);
    msg.setSource(59295U);
    msg.setSourceEntity(123U);
    msg.setDestination(44442U);
    msg.setDestinationEntity(171U);
    msg.value = 0.555773165715;

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
    msg.setTimeStamp(0.057770154587);
    msg.setSource(40170U);
    msg.setSourceEntity(69U);
    msg.setDestination(39170U);
    msg.setDestinationEntity(23U);
    msg.value = 0.0851580768421;

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
    msg.setTimeStamp(0.101824840145);
    msg.setSource(48272U);
    msg.setSourceEntity(92U);
    msg.setDestination(32184U);
    msg.setDestinationEntity(196U);
    msg.value = 0.986412075312;

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
    msg.setTimeStamp(0.352728993803);
    msg.setSource(33079U);
    msg.setSourceEntity(105U);
    msg.setDestination(15706U);
    msg.setDestinationEntity(245U);
    msg.value = 0.122826694223;

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
    msg.setTimeStamp(0.172139692343);
    msg.setSource(19022U);
    msg.setSourceEntity(234U);
    msg.setDestination(26158U);
    msg.setDestinationEntity(193U);
    msg.value = 0.147492204801;

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
    msg.setTimeStamp(0.432669540516);
    msg.setSource(23768U);
    msg.setSourceEntity(180U);
    msg.setDestination(41109U);
    msg.setDestinationEntity(249U);
    msg.value = 0.11044013903;

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
    msg.setTimeStamp(0.256693944036);
    msg.setSource(50912U);
    msg.setSourceEntity(80U);
    msg.setDestination(33556U);
    msg.setDestinationEntity(96U);
    msg.value = 0.509285899095;

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
    msg.setTimeStamp(0.249475119949);
    msg.setSource(22410U);
    msg.setSourceEntity(254U);
    msg.setDestination(31448U);
    msg.setDestinationEntity(244U);
    msg.value = 0.947224710751;

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
    msg.setTimeStamp(0.201645456514);
    msg.setSource(63284U);
    msg.setSourceEntity(72U);
    msg.setDestination(60951U);
    msg.setDestinationEntity(52U);
    msg.value = 0.794401666867;

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
    msg.setTimeStamp(0.108554536814);
    msg.setSource(11310U);
    msg.setSourceEntity(223U);
    msg.setDestination(13504U);
    msg.setDestinationEntity(248U);
    msg.value = 0.352866896899;

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
    msg.setTimeStamp(0.527451295072);
    msg.setSource(3833U);
    msg.setSourceEntity(240U);
    msg.setDestination(15198U);
    msg.setDestinationEntity(180U);
    msg.value = 0.624664671814;

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
    msg.setTimeStamp(0.118819120311);
    msg.setSource(14789U);
    msg.setSourceEntity(128U);
    msg.setDestination(51042U);
    msg.setDestinationEntity(131U);
    msg.direction = 0.205321463291;
    msg.speed = 0.200007641885;
    msg.turbulence = 0.612574823183;

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
    msg.setTimeStamp(0.228922424874);
    msg.setSource(28911U);
    msg.setSourceEntity(41U);
    msg.setDestination(26000U);
    msg.setDestinationEntity(176U);
    msg.direction = 0.115188188305;
    msg.speed = 0.941613157685;
    msg.turbulence = 0.189391597244;

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
    msg.setTimeStamp(0.88070742648);
    msg.setSource(64763U);
    msg.setSourceEntity(5U);
    msg.setDestination(51532U);
    msg.setDestinationEntity(244U);
    msg.direction = 0.956587116663;
    msg.speed = 0.694891177455;
    msg.turbulence = 0.692086323987;

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
    msg.setTimeStamp(0.282115456305);
    msg.setSource(48481U);
    msg.setSourceEntity(203U);
    msg.setDestination(5498U);
    msg.setDestinationEntity(144U);
    msg.value = 0.117382411133;

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
    msg.setTimeStamp(0.0528146115255);
    msg.setSource(24703U);
    msg.setSourceEntity(117U);
    msg.setDestination(61432U);
    msg.setDestinationEntity(232U);
    msg.value = 0.99776010534;

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
    msg.setTimeStamp(0.456861848975);
    msg.setSource(58657U);
    msg.setSourceEntity(117U);
    msg.setDestination(360U);
    msg.setDestinationEntity(145U);
    msg.value = 0.536453915152;

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
    msg.setTimeStamp(0.571335548969);
    msg.setSource(16894U);
    msg.setSourceEntity(184U);
    msg.setDestination(45361U);
    msg.setDestinationEntity(44U);
    msg.value.assign("BZUTPZOEJTDHLTIOWFDSJCAYEXFYWJTFKAVYSKJBTAWFRMUCRMHZCOVLCGXZETENRIAHUUMCRZDUBPBSCXQIVKIDEATLXQIQHZQARLZEGKUAVVIMGQBOSBRTBAQNEMRMJSNVZMYUCFZWUFULLHBSXPPNSMSJWFHXRRNDGOHXQVPWWPIL");

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
    msg.setTimeStamp(0.858433404304);
    msg.setSource(2996U);
    msg.setSourceEntity(88U);
    msg.setDestination(34884U);
    msg.setDestinationEntity(164U);
    msg.value.assign("VXEJLZDUSCJAWEDCFMPBHSIBDUECTOHFBLWNQZVBZKRTDPCNXPWZZLOXNHPPUTVWAJGIQQLXROSFMXHZPXFKQDDWYLSISWNSBYADUIYVPNERNGMLRAWCCXOYAKAVEKGOB");

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
    msg.setTimeStamp(0.846636685058);
    msg.setSource(20535U);
    msg.setSourceEntity(175U);
    msg.setDestination(3954U);
    msg.setDestinationEntity(16U);
    msg.value.assign("KSQNOHHKUWWEEFMAVZJOXSUTRJOPCBWYFSQGUNJTHGXEDMOXMGTIYXCIZNDDRIJRIRCUPPQBJDTS");

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
    msg.setTimeStamp(0.189704521623);
    msg.setSource(36293U);
    msg.setSourceEntity(252U);
    msg.setDestination(34076U);
    msg.setDestinationEntity(25U);
    const char tmp_msg_0[] = {97, -128, 18, 3, -64, 34, 34, -54, 51, -98, 57, -53, -100, -52, -55, 120, 34, 90, 75, 103, -8, -35, -52, -70, -78, 115, -28, -64, -120, 64, 86, 37, -70, 79, 70, 101, -14, 27, -70, -83, 70, 33, -34, -38, -91, 24, -1, 2, 46, -40, 90, 76, 55, 95, -83, 10, 48, -64, 45, 9, 37, -8, 51, -41, -108, -108, -80, -61, -60, 109, 101, -75, -99, -78, 15, -112, 54, 7, -112, 39, 35, -23, -96, -92, -18, -114, -7};
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
    msg.setTimeStamp(0.0782584805747);
    msg.setSource(40170U);
    msg.setSourceEntity(75U);
    msg.setDestination(24046U);
    msg.setDestinationEntity(110U);
    const char tmp_msg_0[] = {-83, -34, 104, 43, 0, 65, -108, -66, 109, -30, 95, -6, -52, -69, 122, -79, -38, -122, -103, 37, -43, 89, 53, -5, 112, -80, -112, -93, 32, -60, -72, 4, 83, 89, 0, -51, -121, 52, -127, -51, -117, -99, -48, -79, -90, -79, 46, -85, -66, 83, -96, 102, 32, 99, -95, 0, -55, -49, -75, -21, 8, -36, -97, -117, -78, 17, -43, -85, -59, 8, -42, 81, -106, -110, 42, 4, 45, -25, -70, 31, -109, -27, 98, -119, -17, 13, -116, 4, 56, 126, -12, 87, 112, -60, -120, 44, -31, 15, -60, -92, 81, 80, 19, 75, -78, 27, -7, 71, -97, -32};
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
    msg.setTimeStamp(0.0907717914834);
    msg.setSource(11867U);
    msg.setSourceEntity(151U);
    msg.setDestination(30452U);
    msg.setDestinationEntity(138U);
    const char tmp_msg_0[] = {-7, -28, -47, 18, -57, 75, 27, -30, 80, -18, -126, -43, 120, 64, 126, -3, 43, 16, -2, 1, 67, 60, 27, 78, -128, -39, 32, -83, -77};
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
    msg.setTimeStamp(0.221515637171);
    msg.setSource(40556U);
    msg.setSourceEntity(110U);
    msg.setDestination(28853U);
    msg.setDestinationEntity(90U);
    msg.value = 0.206115801243;

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
    msg.setTimeStamp(0.29379483832);
    msg.setSource(22188U);
    msg.setSourceEntity(103U);
    msg.setDestination(12491U);
    msg.setDestinationEntity(88U);
    msg.value = 0.718011042756;

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
    msg.setTimeStamp(0.721763788964);
    msg.setSource(13138U);
    msg.setSourceEntity(14U);
    msg.setDestination(62788U);
    msg.setDestinationEntity(158U);
    msg.value = 0.435347167753;

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
    msg.setTimeStamp(0.619303706617);
    msg.setSource(27766U);
    msg.setSourceEntity(245U);
    msg.setDestination(55145U);
    msg.setDestinationEntity(48U);
    msg.type = 100U;
    msg.frequency = 2381319522U;
    msg.min_range = 24149U;
    msg.max_range = 20665U;
    msg.bits_per_point = 99U;
    msg.scale_factor = 0.34306343668;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.539933023218;
    tmp_msg_0.beam_height = 0.777487949055;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {-115, -33, -87, -20, -119, -79, -125, -126, 57, -73, 25, -128, 72, 52, -38, -89, 89, 66, -49, -125, 105, -122, 19, -31, -12, 83, 107, 87, 122, 27, -78, -127, -92, 66, -39, 71, -33, -76, -51, 76, -28, -101, -11, -87, 95, 22, 108, 14, 73, -99, 48, -51, 11, -65, 92, 54, 26, 108, -116, -24, 19, -101, -42, 85, 69, 94, 107, 100, -115, -24, -66, -14, -36, 115, 126, -33, -49, 39, -74, 41, -49, 105, 25, 110, 123, 42, 25, -109, -127, 124, 75, 126, -26, 26, 109, -50, 46, -60, 83, 106, 18, -63, -47, 91, 79, -113, 104, 10, 26, 46, 95, -112, 28, -97, 113, -5, -14, 29, -54, -32, -15, -121, -62, 114, 29, 78, 47, 120, -8, -121, 63, 114, 115, -23, -90, -76, -43, -30, -17, -44, -56, -75, -77, 78, -108, 16, -119, 43, 74, -49, 60, -115, 36, -60, 65, -17, -101, 26, 108, 45, -15, -13, -48, -85, -123, -54, 3, 72, -86, -14, 90, 12, 93, 28, 40, 48, 3, 53, -61, -115, -51, -94, 77, -11, -50, 5, 86, 18, -73, 30, 22};
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
    msg.setTimeStamp(0.131197648504);
    msg.setSource(2639U);
    msg.setSourceEntity(123U);
    msg.setDestination(45329U);
    msg.setDestinationEntity(213U);
    msg.type = 163U;
    msg.frequency = 906879137U;
    msg.min_range = 13010U;
    msg.max_range = 48714U;
    msg.bits_per_point = 171U;
    msg.scale_factor = 0.368326272019;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.707768575757;
    tmp_msg_0.beam_height = 0.816051340489;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {115, -75, 89, -68, 2, 33, -3, -13, -109, -70, -118, 60, -64, 94, 62, -102, 34, -106, 14, -108, -104, 113, 23, -56, -68, 73, 13, -25, 51, -82, 21, -42, 82, -62, 119, -110, 68, 112, 36, -45, -119, -84, 48, 112, 105, 55, 23, -71, 22, 18, -91, 83, -87, 62, 71, 106, -115, 85, 10, 54, 100, -38, -108, 60, -18, 110, 92, 52, 106, -68, 122, 74, 50, -24, 79, -58, 43, 81, -36, 83, 116, -85, 50, 83, 70, 107, 109, -105, 21, -51, 121, -52, 62, 122, -45, -26, 56, 24, 40, 13, 45, -65, 81, -100, 70, 49, 44, 30, -105, 112, 114, 28, -33, -20, -110, -37, -18, -73, -102};
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
    msg.setTimeStamp(0.0206472771696);
    msg.setSource(10320U);
    msg.setSourceEntity(233U);
    msg.setDestination(6076U);
    msg.setDestinationEntity(93U);
    msg.type = 116U;
    msg.frequency = 146829973U;
    msg.min_range = 14178U;
    msg.max_range = 12876U;
    msg.bits_per_point = 130U;
    msg.scale_factor = 0.647896846222;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.22305212111;
    tmp_msg_0.beam_height = 0.185620538678;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {-72, 35, 85, 113, 98, -59, 37, -94, 13, -42, -43, 98, -37, 101, 89, 59, 105, -21, 28, 87, -5, -43, -56, 56, 111, 92, 86, -72, 78, 27, 42, 59, -91, 110, 106, -86, 102, 44, -33, 103, -70, 106, -8, 32, -60, 2, 14, 47, 122, 29, -90, -21, 104, 49, 51, -52, 1, 126, 32, 125, 115, 70, 34, 10, -103, 75, 125, 60, 92, 82, 59, -20, -38, 116, -72, 24, 68, -100, -9, -74, -20, 3, 84, -102, 20, 96, -69, 15, -4, 81, -23, 55, 67, 79, -117, -3, 19, -89, 37, -26, 111, 124, 37, 22, 53, -37, 55, -99, 9, 12, -38, 7, 55, -109, 114, -63, -51, -2, -99, 53, -40, 72, 34, 69, 13, -106, -12, -97, -88, -20, 30, 24, 38, -83, 92, 38, -98, -88, -67, 72, -17, 77, -17, 78, -98, -96, -11, 119, 75, 72, -47, 125, -27, 101, 109, 110, -80, 19, -46, 7, 67, 38, -16, -71, 54, -13, -121, -86, -109, 69, -81, -81, 112, -70, -74, 3, 92, 56, 91, 35, -12, -65, 23, 82, 10, -43, 71, -8, -35, 80, 62, -14, -75, -11, -87, -1, 78, -81, 13, 122, 79, -13, 119, -1, 3, 29, 4, -16, -113, 50, 120, 25, -33, 48, 35, 37, 54, 126, -80, 23, -36, -19};
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
    msg.setTimeStamp(0.278891200016);
    msg.setSource(50081U);
    msg.setSourceEntity(172U);
    msg.setDestination(58059U);
    msg.setDestinationEntity(107U);

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
    msg.setTimeStamp(0.607140947092);
    msg.setSource(64585U);
    msg.setSourceEntity(109U);
    msg.setDestination(50746U);
    msg.setDestinationEntity(26U);

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
    msg.setTimeStamp(0.72205259911);
    msg.setSource(41848U);
    msg.setSourceEntity(221U);
    msg.setDestination(25238U);
    msg.setDestinationEntity(34U);

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
    msg.setTimeStamp(0.180534161223);
    msg.setSource(53454U);
    msg.setSourceEntity(35U);
    msg.setDestination(43940U);
    msg.setDestinationEntity(98U);
    msg.op = 121U;

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
    msg.setTimeStamp(0.48605294471);
    msg.setSource(43442U);
    msg.setSourceEntity(69U);
    msg.setDestination(34015U);
    msg.setDestinationEntity(61U);
    msg.op = 157U;

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
    msg.setTimeStamp(0.658072875971);
    msg.setSource(41329U);
    msg.setSourceEntity(102U);
    msg.setDestination(6002U);
    msg.setDestinationEntity(253U);
    msg.op = 187U;

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
    msg.setTimeStamp(0.915729693254);
    msg.setSource(12340U);
    msg.setSourceEntity(37U);
    msg.setDestination(31769U);
    msg.setDestinationEntity(11U);
    msg.value = 0.28076624841;
    msg.confidence = 0.678334901391;
    msg.opmodes.assign("NXRAJRFPMAGOADZVZCQGSZPDBHXEAMRNMKCBHSTITBTQNIJQGEUVNJJHCAGQRJLYFNVPLIDQTCCSBGEKZIDKIMOYREPWVGPUVFAEFUEWVRMWEGHTOHZLMSLXSKVXIYSFKCQNTNYTWJDKQRPZOOLXUJXUOHKWDRCVXYWYIVOWPBSECHNDQWZALPULDHGEJFB");

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
    msg.setTimeStamp(0.576523299296);
    msg.setSource(59206U);
    msg.setSourceEntity(211U);
    msg.setDestination(62174U);
    msg.setDestinationEntity(91U);
    msg.value = 0.381481564734;
    msg.confidence = 0.969481410848;
    msg.opmodes.assign("BAMDAEQAOWOMMABTCBWEPUDFSAUQLPICMWCCPGQCIWYDFKTOYXJRHSQXFURPYMIFQPHSXAOZNRDEVRDCQESVZMOQGFJJHZXMKLFZPYHIOYYVPJUUVXSVFUMPBSLBTHQZIKJFZCLKCFHHWITKJWXUVAROXXIOKTOQGMAVJNBBGGDDEENNRDDOTELA");

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
    msg.setTimeStamp(0.487672806471);
    msg.setSource(21117U);
    msg.setSourceEntity(18U);
    msg.setDestination(5263U);
    msg.setDestinationEntity(117U);
    msg.value = 0.346122883848;
    msg.confidence = 0.117484225086;
    msg.opmodes.assign("IPYXUASNZSSXSVUWHQNXNHOBLDEVYMDFXDRCOSNKEMLRVPGAMPWLPOMAVAZUTQDNIAHUTANVQPCZ");

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
    msg.setTimeStamp(0.538252909048);
    msg.setSource(8338U);
    msg.setSourceEntity(87U);
    msg.setDestination(62230U);
    msg.setDestinationEntity(142U);
    msg.itow = 2920140847U;
    msg.lat = 0.702598099649;
    msg.lon = 0.795431519028;
    msg.height_ell = 0.898500451577;
    msg.height_sea = 0.309515524253;
    msg.hacc = 0.815329099194;
    msg.vacc = 0.719997908314;
    msg.vel_n = 0.0689869354696;
    msg.vel_e = 0.118117281302;
    msg.vel_d = 0.884503398579;
    msg.speed = 0.547158076461;
    msg.gspeed = 0.978893387829;
    msg.heading = 0.991804389939;
    msg.sacc = 0.00796129491239;
    msg.cacc = 0.292353977743;

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
    msg.setTimeStamp(0.664598117834);
    msg.setSource(42668U);
    msg.setSourceEntity(128U);
    msg.setDestination(16389U);
    msg.setDestinationEntity(56U);
    msg.itow = 551778294U;
    msg.lat = 0.45399906486;
    msg.lon = 0.397020176299;
    msg.height_ell = 0.492069183017;
    msg.height_sea = 0.440759768908;
    msg.hacc = 0.178221733619;
    msg.vacc = 0.0205287490217;
    msg.vel_n = 0.804506101754;
    msg.vel_e = 0.124581329192;
    msg.vel_d = 0.437980977243;
    msg.speed = 0.394250703782;
    msg.gspeed = 0.953942000363;
    msg.heading = 0.738512366101;
    msg.sacc = 0.0739377079454;
    msg.cacc = 0.395097922335;

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
    msg.setTimeStamp(0.812572760839);
    msg.setSource(63159U);
    msg.setSourceEntity(247U);
    msg.setDestination(8572U);
    msg.setDestinationEntity(139U);
    msg.itow = 2195042399U;
    msg.lat = 0.502665073674;
    msg.lon = 0.177441605823;
    msg.height_ell = 0.981003598792;
    msg.height_sea = 0.617839322807;
    msg.hacc = 0.184411086808;
    msg.vacc = 0.139930458093;
    msg.vel_n = 0.818570835552;
    msg.vel_e = 0.0363535599145;
    msg.vel_d = 0.532664128873;
    msg.speed = 0.625010455426;
    msg.gspeed = 0.171645712461;
    msg.heading = 0.419649984518;
    msg.sacc = 0.398028280577;
    msg.cacc = 0.630759928279;

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
    msg.setTimeStamp(0.255027609556);
    msg.setSource(13826U);
    msg.setSourceEntity(184U);
    msg.setDestination(30885U);
    msg.setDestinationEntity(197U);
    msg.id = 84U;
    msg.value = 0.856685215668;

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
    msg.setTimeStamp(0.178538907244);
    msg.setSource(21487U);
    msg.setSourceEntity(131U);
    msg.setDestination(54564U);
    msg.setDestinationEntity(235U);
    msg.id = 150U;
    msg.value = 0.203466820592;

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
    msg.setTimeStamp(0.192988823582);
    msg.setSource(4351U);
    msg.setSourceEntity(213U);
    msg.setDestination(61109U);
    msg.setDestinationEntity(75U);
    msg.id = 62U;
    msg.value = 0.605837834692;

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
    msg.setTimeStamp(0.24829209304);
    msg.setSource(31389U);
    msg.setSourceEntity(116U);
    msg.setDestination(15388U);
    msg.setDestinationEntity(8U);
    msg.x = 0.802416699382;
    msg.y = 0.117301163187;
    msg.z = 0.0291826487328;
    msg.phi = 0.765822421297;
    msg.theta = 0.588489818166;
    msg.psi = 0.473214932719;

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
    msg.setTimeStamp(0.375970736873);
    msg.setSource(35179U);
    msg.setSourceEntity(127U);
    msg.setDestination(60183U);
    msg.setDestinationEntity(168U);
    msg.x = 0.391134185772;
    msg.y = 0.831213862564;
    msg.z = 0.400391790745;
    msg.phi = 0.310471442259;
    msg.theta = 0.350082930989;
    msg.psi = 0.52904062143;

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
    msg.setTimeStamp(0.723897850403);
    msg.setSource(48536U);
    msg.setSourceEntity(254U);
    msg.setDestination(28190U);
    msg.setDestinationEntity(211U);
    msg.x = 0.0132624594261;
    msg.y = 0.866127646344;
    msg.z = 0.747891139745;
    msg.phi = 0.707693326743;
    msg.theta = 0.696128143535;
    msg.psi = 0.317015189691;

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
    msg.setTimeStamp(0.35740404619);
    msg.setSource(6641U);
    msg.setSourceEntity(220U);
    msg.setDestination(27541U);
    msg.setDestinationEntity(203U);
    msg.beam_width = 0.271548594264;
    msg.beam_height = 0.895993722853;

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
    msg.setTimeStamp(0.341575277324);
    msg.setSource(53119U);
    msg.setSourceEntity(153U);
    msg.setDestination(14217U);
    msg.setDestinationEntity(90U);
    msg.beam_width = 0.870877757455;
    msg.beam_height = 0.876344596627;

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
    msg.setTimeStamp(0.221995499678);
    msg.setSource(32271U);
    msg.setSourceEntity(42U);
    msg.setDestination(63959U);
    msg.setDestinationEntity(155U);
    msg.beam_width = 0.530512186107;
    msg.beam_height = 0.132586125244;

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
    msg.setTimeStamp(0.643103816814);
    msg.setSource(64442U);
    msg.setSourceEntity(4U);
    msg.setDestination(20203U);
    msg.setDestinationEntity(15U);
    msg.sane = 82U;

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
    msg.setTimeStamp(0.88085364512);
    msg.setSource(35208U);
    msg.setSourceEntity(229U);
    msg.setDestination(12356U);
    msg.setDestinationEntity(56U);
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
    msg.setTimeStamp(0.804494742849);
    msg.setSource(21655U);
    msg.setSourceEntity(172U);
    msg.setDestination(37529U);
    msg.setDestinationEntity(26U);
    msg.sane = 133U;

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
    msg.setTimeStamp(0.771047056144);
    msg.setSource(52014U);
    msg.setSourceEntity(42U);
    msg.setDestination(29830U);
    msg.setDestinationEntity(219U);
    msg.value = 0.449644973022;

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
    msg.setTimeStamp(0.763044907231);
    msg.setSource(39357U);
    msg.setSourceEntity(188U);
    msg.setDestination(37434U);
    msg.setDestinationEntity(237U);
    msg.value = 0.434272897777;

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
    msg.setTimeStamp(0.392076759089);
    msg.setSource(24188U);
    msg.setSourceEntity(107U);
    msg.setDestination(13920U);
    msg.setDestinationEntity(142U);
    msg.value = 0.713689890166;

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
    msg.setTimeStamp(0.424593107008);
    msg.setSource(4237U);
    msg.setSourceEntity(93U);
    msg.setDestination(19213U);
    msg.setDestinationEntity(79U);
    msg.value = 0.568016572542;

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
    msg.setTimeStamp(0.931537766465);
    msg.setSource(32759U);
    msg.setSourceEntity(241U);
    msg.setDestination(28076U);
    msg.setDestinationEntity(24U);
    msg.value = 0.124675531785;

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
    msg.setTimeStamp(0.14566243829);
    msg.setSource(59345U);
    msg.setSourceEntity(95U);
    msg.setDestination(27459U);
    msg.setDestinationEntity(78U);
    msg.value = 0.224598430742;

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
    msg.setTimeStamp(0.976127905521);
    msg.setSource(7243U);
    msg.setSourceEntity(124U);
    msg.setDestination(1673U);
    msg.setDestinationEntity(175U);
    msg.value = 0.940913040523;

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
    msg.setTimeStamp(0.628826731845);
    msg.setSource(13431U);
    msg.setSourceEntity(234U);
    msg.setDestination(24357U);
    msg.setDestinationEntity(194U);
    msg.value = 0.779181376208;

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
    msg.setTimeStamp(0.3848676171);
    msg.setSource(16146U);
    msg.setSourceEntity(116U);
    msg.setDestination(34499U);
    msg.setDestinationEntity(238U);
    msg.value = 0.87321778463;

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
    msg.setTimeStamp(0.471645140761);
    msg.setSource(9239U);
    msg.setSourceEntity(69U);
    msg.setDestination(43495U);
    msg.setDestinationEntity(204U);
    msg.value = 0.79374819061;

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
    msg.setTimeStamp(0.919377482582);
    msg.setSource(58297U);
    msg.setSourceEntity(135U);
    msg.setDestination(62428U);
    msg.setDestinationEntity(68U);
    msg.value = 0.490902947964;

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
    msg.setTimeStamp(0.338755916605);
    msg.setSource(16527U);
    msg.setSourceEntity(98U);
    msg.setDestination(25496U);
    msg.setDestinationEntity(114U);
    msg.value = 0.636781990248;

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
    msg.setTimeStamp(0.925532515623);
    msg.setSource(58349U);
    msg.setSourceEntity(104U);
    msg.setDestination(24038U);
    msg.setDestinationEntity(127U);
    msg.value = 0.364328734099;

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
    msg.setTimeStamp(0.917788760187);
    msg.setSource(26911U);
    msg.setSourceEntity(39U);
    msg.setDestination(45865U);
    msg.setDestinationEntity(30U);
    msg.value = 0.933512428223;

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
    msg.setTimeStamp(0.51047601055);
    msg.setSource(45738U);
    msg.setSourceEntity(245U);
    msg.setDestination(60885U);
    msg.setDestinationEntity(30U);
    msg.value = 0.378205349349;

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
    msg.setTimeStamp(0.446411486486);
    msg.setSource(53433U);
    msg.setSourceEntity(86U);
    msg.setDestination(7760U);
    msg.setDestinationEntity(166U);
    msg.value = 0.817308689985;

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
    msg.setTimeStamp(0.013713290744);
    msg.setSource(25224U);
    msg.setSourceEntity(249U);
    msg.setDestination(13308U);
    msg.setDestinationEntity(4U);
    msg.value = 0.798423361555;

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
    msg.setTimeStamp(0.929576794097);
    msg.setSource(54589U);
    msg.setSourceEntity(22U);
    msg.setDestination(45167U);
    msg.setDestinationEntity(108U);
    msg.value = 0.513965423843;

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
    msg.setTimeStamp(0.630592069383);
    msg.setSource(7852U);
    msg.setSourceEntity(107U);
    msg.setDestination(17740U);
    msg.setDestinationEntity(33U);
    msg.value = 0.697582251027;

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
    msg.setTimeStamp(0.453630086766);
    msg.setSource(49477U);
    msg.setSourceEntity(23U);
    msg.setDestination(57193U);
    msg.setDestinationEntity(70U);
    msg.value = 0.994622150278;

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
    msg.setTimeStamp(0.63765535156);
    msg.setSource(31904U);
    msg.setSourceEntity(2U);
    msg.setDestination(62955U);
    msg.setDestinationEntity(50U);
    msg.value = 0.442566796428;

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
    msg.setTimeStamp(0.35466659417);
    msg.setSource(52305U);
    msg.setSourceEntity(203U);
    msg.setDestination(29229U);
    msg.setDestinationEntity(175U);
    msg.value = 0.618417056646;

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
    msg.setTimeStamp(0.638304561231);
    msg.setSource(64699U);
    msg.setSourceEntity(29U);
    msg.setDestination(14511U);
    msg.setDestinationEntity(83U);
    msg.value = 0.3160591431;

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
    msg.setTimeStamp(0.123705177233);
    msg.setSource(63203U);
    msg.setSourceEntity(116U);
    msg.setDestination(59809U);
    msg.setDestinationEntity(157U);
    msg.value = 0.200827520376;

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
    msg.setTimeStamp(0.626851456055);
    msg.setSource(11843U);
    msg.setSourceEntity(86U);
    msg.setDestination(10568U);
    msg.setDestinationEntity(34U);
    msg.validity = 5491U;
    msg.type = 16U;
    msg.tow = 132568201U;
    msg.base_lat = 0.578711876703;
    msg.base_lon = 0.737422530452;
    msg.base_height = 0.0945285328604;
    msg.n = 0.238933363477;
    msg.e = 0.621256447328;
    msg.d = 0.606991522968;
    msg.v_n = 0.70823495265;
    msg.v_e = 0.70274523127;
    msg.v_d = 0.491165482798;
    msg.satellites = 114U;
    msg.iar_hyp = 39890U;
    msg.iar_ratio = 0.692950196199;

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
    msg.setTimeStamp(0.459694577498);
    msg.setSource(32069U);
    msg.setSourceEntity(53U);
    msg.setDestination(2003U);
    msg.setDestinationEntity(101U);
    msg.validity = 56493U;
    msg.type = 132U;
    msg.tow = 2135377809U;
    msg.base_lat = 0.106142319389;
    msg.base_lon = 0.252766401314;
    msg.base_height = 0.726806099929;
    msg.n = 0.89152675233;
    msg.e = 0.812057636642;
    msg.d = 0.899501272782;
    msg.v_n = 0.0129966051279;
    msg.v_e = 0.510058398934;
    msg.v_d = 0.33913377391;
    msg.satellites = 241U;
    msg.iar_hyp = 7162U;
    msg.iar_ratio = 0.401872439892;

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
    msg.setTimeStamp(0.928554487204);
    msg.setSource(39327U);
    msg.setSourceEntity(163U);
    msg.setDestination(14731U);
    msg.setDestinationEntity(253U);
    msg.validity = 35299U;
    msg.type = 232U;
    msg.tow = 929612197U;
    msg.base_lat = 0.165751421676;
    msg.base_lon = 0.873903147992;
    msg.base_height = 0.899316023815;
    msg.n = 0.245873676512;
    msg.e = 0.135935081386;
    msg.d = 0.449598746662;
    msg.v_n = 0.800611348159;
    msg.v_e = 0.920325036986;
    msg.v_d = 0.766375291036;
    msg.satellites = 51U;
    msg.iar_hyp = 34947U;
    msg.iar_ratio = 0.925446644287;

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
    msg.setTimeStamp(0.603805826968);
    msg.setSource(61851U);
    msg.setSourceEntity(96U);
    msg.setDestination(189U);
    msg.setDestinationEntity(175U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.55957298774;
    tmp_msg_0.lon = 0.00961957914911;
    tmp_msg_0.height = 0.983680034135;
    tmp_msg_0.x = 0.654074246061;
    tmp_msg_0.y = 0.224157779022;
    tmp_msg_0.z = 0.124992841308;
    tmp_msg_0.phi = 0.471368524211;
    tmp_msg_0.theta = 0.311987178401;
    tmp_msg_0.psi = 0.571574654279;
    tmp_msg_0.u = 0.734992309658;
    tmp_msg_0.v = 0.76378913302;
    tmp_msg_0.w = 0.469152664492;
    tmp_msg_0.vx = 0.324484415964;
    tmp_msg_0.vy = 0.884264008388;
    tmp_msg_0.vz = 0.914209151532;
    tmp_msg_0.p = 0.342416570777;
    tmp_msg_0.q = 0.556675971093;
    tmp_msg_0.r = 0.989574766334;
    tmp_msg_0.depth = 0.0165695732751;
    tmp_msg_0.alt = 0.608964777495;
    msg.state.set(tmp_msg_0);
    msg.type = 27U;

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
    msg.setTimeStamp(0.513060042564);
    msg.setSource(20043U);
    msg.setSourceEntity(96U);
    msg.setDestination(54102U);
    msg.setDestinationEntity(131U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.109856282126;
    tmp_msg_0.lon = 0.788897567484;
    tmp_msg_0.height = 0.387820012647;
    tmp_msg_0.x = 0.371916927113;
    tmp_msg_0.y = 0.325020290003;
    tmp_msg_0.z = 0.56532082036;
    tmp_msg_0.phi = 0.183126141535;
    tmp_msg_0.theta = 0.581998601255;
    tmp_msg_0.psi = 0.294013383645;
    tmp_msg_0.u = 0.746804918343;
    tmp_msg_0.v = 0.0387505090357;
    tmp_msg_0.w = 0.139079281846;
    tmp_msg_0.vx = 0.410923628075;
    tmp_msg_0.vy = 0.896713777885;
    tmp_msg_0.vz = 0.0886171920051;
    tmp_msg_0.p = 0.0758910362533;
    tmp_msg_0.q = 0.648450186716;
    tmp_msg_0.r = 0.992706355947;
    tmp_msg_0.depth = 0.596876222951;
    tmp_msg_0.alt = 0.249965640439;
    msg.state.set(tmp_msg_0);
    msg.type = 99U;

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
    msg.setTimeStamp(0.352263145813);
    msg.setSource(60298U);
    msg.setSourceEntity(136U);
    msg.setDestination(9015U);
    msg.setDestinationEntity(180U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.334006228332;
    tmp_msg_0.lon = 0.752263741277;
    tmp_msg_0.height = 0.936610481872;
    tmp_msg_0.x = 0.357332779247;
    tmp_msg_0.y = 0.395100620054;
    tmp_msg_0.z = 0.601446285915;
    tmp_msg_0.phi = 0.915354551735;
    tmp_msg_0.theta = 0.433362376067;
    tmp_msg_0.psi = 0.793319285694;
    tmp_msg_0.u = 0.898294630289;
    tmp_msg_0.v = 0.747424763565;
    tmp_msg_0.w = 0.753140088432;
    tmp_msg_0.vx = 0.890636870671;
    tmp_msg_0.vy = 0.860367042031;
    tmp_msg_0.vz = 0.847537951;
    tmp_msg_0.p = 0.656777090654;
    tmp_msg_0.q = 0.749991057385;
    tmp_msg_0.r = 0.0217127084312;
    tmp_msg_0.depth = 0.452934986012;
    tmp_msg_0.alt = 0.0330325666402;
    msg.state.set(tmp_msg_0);
    msg.type = 86U;

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
    msg.setTimeStamp(0.9536981646);
    msg.setSource(40397U);
    msg.setSourceEntity(88U);
    msg.setDestination(47406U);
    msg.setDestinationEntity(126U);
    msg.value = 0.311785346737;

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
    msg.setTimeStamp(0.632816440368);
    msg.setSource(2463U);
    msg.setSourceEntity(93U);
    msg.setDestination(668U);
    msg.setDestinationEntity(86U);
    msg.value = 0.334531224895;

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
    msg.setTimeStamp(0.721568061692);
    msg.setSource(27138U);
    msg.setSourceEntity(23U);
    msg.setDestination(21407U);
    msg.setDestinationEntity(106U);
    msg.value = 0.957169029763;

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
    msg.setTimeStamp(0.119988355353);
    msg.setSource(63646U);
    msg.setSourceEntity(241U);
    msg.setDestination(50120U);
    msg.setDestinationEntity(10U);
    msg.value = 0.433097048226;

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
    msg.setTimeStamp(0.65070322012);
    msg.setSource(6706U);
    msg.setSourceEntity(29U);
    msg.setDestination(34719U);
    msg.setDestinationEntity(156U);
    msg.value = 0.463942475135;

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
    msg.setTimeStamp(0.85056750563);
    msg.setSource(43418U);
    msg.setSourceEntity(222U);
    msg.setDestination(18711U);
    msg.setDestinationEntity(58U);
    msg.value = 0.223147225882;

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
    msg.setTimeStamp(0.864111076421);
    msg.setSource(61482U);
    msg.setSourceEntity(78U);
    msg.setDestination(29187U);
    msg.setDestinationEntity(234U);
    msg.value = 0.663680667277;

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
    msg.setTimeStamp(0.792957190053);
    msg.setSource(3402U);
    msg.setSourceEntity(84U);
    msg.setDestination(56911U);
    msg.setDestinationEntity(98U);
    msg.value = 0.365598551679;

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
    msg.setTimeStamp(0.40419266286);
    msg.setSource(45607U);
    msg.setSourceEntity(106U);
    msg.setDestination(53828U);
    msg.setDestinationEntity(133U);
    msg.value = 0.867697517238;

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
    msg.setTimeStamp(0.0324856156224);
    msg.setSource(5728U);
    msg.setSourceEntity(1U);
    msg.setDestination(59454U);
    msg.setDestinationEntity(187U);
    msg.value = 0.289120957209;

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
    msg.setTimeStamp(0.802179478096);
    msg.setSource(4169U);
    msg.setSourceEntity(40U);
    msg.setDestination(57976U);
    msg.setDestinationEntity(186U);
    msg.value = 0.652735718273;

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
    msg.setTimeStamp(0.571021485573);
    msg.setSource(41056U);
    msg.setSourceEntity(110U);
    msg.setDestination(11532U);
    msg.setDestinationEntity(76U);
    msg.value = 0.410890765173;

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
    msg.setTimeStamp(0.22699646891);
    msg.setSource(13805U);
    msg.setSourceEntity(91U);
    msg.setDestination(18853U);
    msg.setDestinationEntity(60U);
    msg.value = 0.508633442817;

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
    msg.setTimeStamp(0.424205809638);
    msg.setSource(33705U);
    msg.setSourceEntity(247U);
    msg.setDestination(59439U);
    msg.setDestinationEntity(185U);
    msg.value = 0.218703419468;

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
    msg.setTimeStamp(0.142912233408);
    msg.setSource(25049U);
    msg.setSourceEntity(94U);
    msg.setDestination(34085U);
    msg.setDestinationEntity(56U);
    msg.value = 0.484472277346;

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
    msg.setTimeStamp(0.414021805925);
    msg.setSource(17726U);
    msg.setSourceEntity(140U);
    msg.setDestination(29154U);
    msg.setDestinationEntity(209U);
    msg.id = 210U;
    msg.zoom = 217U;
    msg.action = 235U;

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
    msg.setTimeStamp(0.698901543638);
    msg.setSource(17862U);
    msg.setSourceEntity(159U);
    msg.setDestination(1565U);
    msg.setDestinationEntity(163U);
    msg.id = 79U;
    msg.zoom = 102U;
    msg.action = 80U;

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
    msg.setTimeStamp(0.142652609429);
    msg.setSource(50416U);
    msg.setSourceEntity(12U);
    msg.setDestination(12695U);
    msg.setDestinationEntity(20U);
    msg.id = 44U;
    msg.zoom = 209U;
    msg.action = 170U;

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
    msg.setTimeStamp(0.872175402466);
    msg.setSource(48899U);
    msg.setSourceEntity(139U);
    msg.setDestination(57965U);
    msg.setDestinationEntity(144U);
    msg.id = 181U;
    msg.value = 0.357118243342;

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
    msg.setTimeStamp(0.97131248785);
    msg.setSource(15420U);
    msg.setSourceEntity(172U);
    msg.setDestination(45803U);
    msg.setDestinationEntity(229U);
    msg.id = 172U;
    msg.value = 0.270940893938;

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
    msg.setTimeStamp(0.349636945546);
    msg.setSource(54746U);
    msg.setSourceEntity(24U);
    msg.setDestination(9149U);
    msg.setDestinationEntity(201U);
    msg.id = 70U;
    msg.value = 0.222726000087;

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
    msg.setTimeStamp(0.33886917539);
    msg.setSource(51601U);
    msg.setSourceEntity(127U);
    msg.setDestination(3768U);
    msg.setDestinationEntity(54U);
    msg.id = 137U;
    msg.value = 0.573310813284;

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
    msg.setTimeStamp(0.891690980065);
    msg.setSource(41963U);
    msg.setSourceEntity(195U);
    msg.setDestination(38174U);
    msg.setDestinationEntity(150U);
    msg.id = 12U;
    msg.value = 0.211487035164;

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
    msg.setTimeStamp(0.3226324981);
    msg.setSource(34365U);
    msg.setSourceEntity(109U);
    msg.setDestination(46425U);
    msg.setDestinationEntity(167U);
    msg.id = 147U;
    msg.value = 0.481476837085;

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
    msg.setTimeStamp(0.925255622621);
    msg.setSource(55712U);
    msg.setSourceEntity(47U);
    msg.setDestination(174U);
    msg.setDestinationEntity(248U);
    msg.id = 187U;
    msg.angle = 0.530608472287;

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
    msg.setTimeStamp(0.599673908687);
    msg.setSource(2151U);
    msg.setSourceEntity(30U);
    msg.setDestination(42984U);
    msg.setDestinationEntity(25U);
    msg.id = 142U;
    msg.angle = 0.175011505403;

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
    msg.setTimeStamp(0.99679461869);
    msg.setSource(11858U);
    msg.setSourceEntity(128U);
    msg.setDestination(5352U);
    msg.setDestinationEntity(231U);
    msg.id = 170U;
    msg.angle = 0.243922018926;

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
    msg.setTimeStamp(0.000971595385039);
    msg.setSource(23849U);
    msg.setSourceEntity(87U);
    msg.setDestination(54168U);
    msg.setDestinationEntity(224U);
    msg.op = 76U;
    msg.actions.assign("HDXSKUNLZBTLVPYGOUBXZUHTTOPDFSNVUZEFROQTMGESKJBVKDBMAYQLPQKZIDMGFKXECNQOADXUKBUBTGVORZEFRHMNCZLPSQSJKDDJJAWHPALTHYEMQOFZOFNCYHSTYDIRKXHPCRANHSYYIRERLVOBIICGVQHKOEJPDEERXYVCSWQNPBJLVUJJAGTLFGXIFXMGCJALKMWOWGTYUAXUHMSIIERFMWZRFQPZVVNTAXZSCWJWC");

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
    msg.setTimeStamp(0.255797208775);
    msg.setSource(7191U);
    msg.setSourceEntity(91U);
    msg.setDestination(7266U);
    msg.setDestinationEntity(114U);
    msg.op = 53U;
    msg.actions.assign("VTOYSOLLMNUJFMLDSEBKXBHFQATBSAQNUYEVHROZGSFKINCROAMWFQPAWUIWZH");

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
    msg.setTimeStamp(0.145165025712);
    msg.setSource(13892U);
    msg.setSourceEntity(7U);
    msg.setDestination(13226U);
    msg.setDestinationEntity(213U);
    msg.op = 31U;
    msg.actions.assign("WXCVARGSOTERNURNDWSDGNGWFAYRUNGJTBCBPKPUYNDZAHQJAQLJSVKMHAY");

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
    msg.setTimeStamp(0.266810219213);
    msg.setSource(51466U);
    msg.setSourceEntity(123U);
    msg.setDestination(16657U);
    msg.setDestinationEntity(240U);
    msg.actions.assign("QWXENAXFHKURPSWWMDKKLHCNRHWTNOVSHCPIDQGVLLQLVRZGJNKSPYYGIJFDOFZGGBYLIVBCHTJIEDADRKIDXDVWPEKBGGQYSFNBEMSVZSTHUJMZUPPPNEVCUQYYVPQJOSARQHUJLOJCRPRMZAAOKYAXNIRBCFNCRGXKXEFTDWCNZPMIWBMYFYLZXVYFUSMBXRDAJLZOQBUUTJMEEIEOIBTECTLJQMOKAOWOQSGGXHLZNTUMTXUSFDFCBIAK");

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
    msg.setTimeStamp(0.175464509004);
    msg.setSource(3876U);
    msg.setSourceEntity(131U);
    msg.setDestination(20645U);
    msg.setDestinationEntity(16U);
    msg.actions.assign("ZUQQXXQRBHDGQITZRQYWXXVMLYWGXSHWFZICVGOLPLAXODQJOZLHJNKSXSBETOYVLENEFIJVPCZJMXHUGBQDQESBPAWEFONJCOFMBMPRPLWRSTDMACXZWUEIGWYMCRVSIPATBASTKVPYEWLTZFOUNHJIKRDYJGTNPQYTXHRDSOAVRRTBUGLFEDUKCGUFQZWKAJCFHFMDHVIBDZIA");

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
    msg.setTimeStamp(0.0717359011519);
    msg.setSource(58193U);
    msg.setSourceEntity(186U);
    msg.setDestination(3000U);
    msg.setDestinationEntity(84U);
    msg.actions.assign("PHOELJVDFXKEFVRABNNZJQCSRQZUZVFTJPHIYYZYXXAVNRDABXIQMTKPWMEWPDMBQHMPMXLSBBCYEKZNIDCVFQXCBWJWILUTTKSHQCCSTJGZ");

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
    msg.setTimeStamp(0.012441368787);
    msg.setSource(45136U);
    msg.setSourceEntity(6U);
    msg.setDestination(33983U);
    msg.setDestinationEntity(223U);
    msg.button = 50U;
    msg.value = 17U;

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
    msg.setTimeStamp(0.297405194366);
    msg.setSource(61141U);
    msg.setSourceEntity(220U);
    msg.setDestination(1851U);
    msg.setDestinationEntity(160U);
    msg.button = 38U;
    msg.value = 177U;

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
    msg.setTimeStamp(0.115330156272);
    msg.setSource(18732U);
    msg.setSourceEntity(133U);
    msg.setDestination(37629U);
    msg.setDestinationEntity(93U);
    msg.button = 87U;
    msg.value = 193U;

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
    msg.setTimeStamp(0.85303703343);
    msg.setSource(15940U);
    msg.setSourceEntity(245U);
    msg.setDestination(5275U);
    msg.setDestinationEntity(118U);
    msg.op = 163U;
    msg.text.assign("EKEPBXSWXHGGHMGQCXAIUZOLTVCTXRCESPTRWRUPKIIDOPYCSMTDCFGXMDKCKQCCHKXSJZBIDFKSWHYSNPNADMLAYPORFQHTYVFRNLVJEFOZWBOEWDBVIFYERDHX");

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
    msg.setTimeStamp(0.578462752618);
    msg.setSource(9585U);
    msg.setSourceEntity(64U);
    msg.setDestination(14453U);
    msg.setDestinationEntity(37U);
    msg.op = 242U;
    msg.text.assign("DBOAHBRHPJUBDEBIZKNMSZICSGQTBZYLLKDUQHZCCLPIFNTDLQKAMCLKZXOHHVLAGMFEUWSATKMPJVNWTFBKERXFAORYHCRDUPGJKJXYIXWJMSZCBPURCJUHGXYWQJOLWNDWOVDXNTRLEETOOFBBVLJGMVWZMJUUKQWFQTOYKYRNYGQVFILWIIYNSSXPVEJDDZRPFIQGBAMAAEEQSVSTWCFHYUFVYXGQAHCNIXTZHIN");

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
    msg.setTimeStamp(0.540290271986);
    msg.setSource(28783U);
    msg.setSourceEntity(175U);
    msg.setDestination(46405U);
    msg.setDestinationEntity(132U);
    msg.op = 211U;
    msg.text.assign("ATBZUMGORHFQSMRNTDTJLJBSDEKOKLHPQSDMAZXRWPUPYKZAVGLRGXLOAJFNVMRSQCHDGPQSNRPSKJDNOYLESNPKZLIVEIBVPXZXCXIQYOVTDZYPVFBHXURSJESEDTCIAJHYDDFGWWFOYUKRPMQEWOIHBAUMMJOIYTSVTWURZHFZKZBLGWJZYNFIUUWLWLGDGWICCKGFMNAPJQTGWBQENOCLXHMUKQQIFYXMEVCATOFHNTNXHBK");

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
    msg.setTimeStamp(0.654747247732);
    msg.setSource(22868U);
    msg.setSourceEntity(237U);
    msg.setDestination(41924U);
    msg.setDestinationEntity(39U);
    msg.op = 222U;
    msg.time_remain = 0.00547603172466;
    msg.sched_time = 0.584445299597;

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
    msg.setTimeStamp(0.599812397465);
    msg.setSource(53275U);
    msg.setSourceEntity(173U);
    msg.setDestination(29489U);
    msg.setDestinationEntity(80U);
    msg.op = 73U;
    msg.time_remain = 0.357314947155;
    msg.sched_time = 0.162905883239;

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
    msg.setTimeStamp(0.416778769215);
    msg.setSource(55449U);
    msg.setSourceEntity(113U);
    msg.setDestination(57977U);
    msg.setDestinationEntity(181U);
    msg.op = 163U;
    msg.time_remain = 0.201742933684;
    msg.sched_time = 0.231270182347;

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
    msg.setTimeStamp(0.672681433113);
    msg.setSource(12598U);
    msg.setSourceEntity(2U);
    msg.setDestination(38508U);
    msg.setDestinationEntity(178U);
    msg.name.assign("WHMQBXLIRIMOBIMUNCDLIOUDCPQBTLHKOUZKZCAYSVPYQWKXGTSEEK");
    msg.op = 43U;
    msg.sched_time = 0.298736973875;

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
    msg.setTimeStamp(0.448854315247);
    msg.setSource(1614U);
    msg.setSourceEntity(140U);
    msg.setDestination(28833U);
    msg.setDestinationEntity(254U);
    msg.name.assign("ZRJOFZAYOXUZIZIZIATUCJFWMRCUGVSMGAXTWAAUWAWJVJSTLHBWHOMBTTARQQPCYWNUNYXQKZDISGKERHPRZSCARLCZTBTRDLZWLDNKZYQVFOPYSDYHDSGWIITIWJBDKPEDJMEUVYFGFXMBOGNNDSEDEIBVKC");
    msg.op = 11U;
    msg.sched_time = 0.104345920514;

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
    msg.setTimeStamp(0.930454699352);
    msg.setSource(35895U);
    msg.setSourceEntity(157U);
    msg.setDestination(41269U);
    msg.setDestinationEntity(176U);
    msg.name.assign("RKCNSVOLWWTVFTXFNQUCNOTMUDZMJOHYFLDHWEHJXKQAWBLIQAVTOIWFPBRBEECZDVRJBHLZMGXPWELVSHPIGOEJNTSNDCIZDRBHLKLFKIJNIMTECHUQYOJXXGKXMMVARSOFRKEJCEBLGSQRSOVOPZCJWOAMSWCYQXBBUVDZFGYSQAEQSYNTZUKDVULLIWFGRGJCYNYPQCDUXXPUBMMHRUNJGAV");
    msg.op = 43U;
    msg.sched_time = 0.773730994338;

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
    msg.setTimeStamp(0.892336051923);
    msg.setSource(56875U);
    msg.setSourceEntity(144U);
    msg.setDestination(52340U);
    msg.setDestinationEntity(237U);

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
    msg.setTimeStamp(0.529532497332);
    msg.setSource(61824U);
    msg.setSourceEntity(57U);
    msg.setDestination(45186U);
    msg.setDestinationEntity(92U);

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
    msg.setTimeStamp(0.602455608759);
    msg.setSource(21939U);
    msg.setSourceEntity(141U);
    msg.setDestination(11973U);
    msg.setDestinationEntity(73U);

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
    msg.setTimeStamp(0.0350443245461);
    msg.setSource(35580U);
    msg.setSourceEntity(254U);
    msg.setDestination(10863U);
    msg.setDestinationEntity(41U);
    msg.name.assign("NRLIGCQNOORODAXRSOXHQUHRZKVGGEKFBXHQ");
    msg.state = 214U;

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
    msg.setTimeStamp(0.640991032942);
    msg.setSource(32204U);
    msg.setSourceEntity(136U);
    msg.setDestination(39225U);
    msg.setDestinationEntity(75U);
    msg.name.assign("UHWIFQRBTNORLYFLVUVYKCDEXXBHKVGHPZKRJLTNIHAEQSITNEJEMYHITPDZQSMQXNSIKVQXZMWMCZCNGISLLIDFHZJBYMIWHTWSQZPKEGHNJQDMOQMDBPTNAUYGAENRSTPRMLUYZJFFBCGDCTNVWJDRNAUTVGXBQBLSJHAOAAETRAFKOXZPRVEWOCAGVEWLAUBOWDDKXFKVJOFOBCGXJSYZRCXFGQKCYCLLUSFBYZOPM");
    msg.state = 102U;

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
    msg.setTimeStamp(0.290890003655);
    msg.setSource(40131U);
    msg.setSourceEntity(104U);
    msg.setDestination(29482U);
    msg.setDestinationEntity(61U);
    msg.name.assign("QUNXJCPYFRWOP");
    msg.state = 68U;

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
    msg.setTimeStamp(0.909062450746);
    msg.setSource(40728U);
    msg.setSourceEntity(114U);
    msg.setDestination(20157U);
    msg.setDestinationEntity(180U);
    msg.name.assign("ZDEPXRFXGBINOJVRZXBFGLKFKMREIAQNQNFLFJNYXVASEIVKSRFSWBGMNNYADSSSWBCXZYBICWLRV");
    msg.value = 32U;

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
    msg.setTimeStamp(0.506175551634);
    msg.setSource(17979U);
    msg.setSourceEntity(120U);
    msg.setDestination(9347U);
    msg.setDestinationEntity(175U);
    msg.name.assign("QJMZQTCCPGZDTMUGAFQRAHNGZZL");
    msg.value = 141U;

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
    msg.setTimeStamp(0.76768266291);
    msg.setSource(12848U);
    msg.setSourceEntity(173U);
    msg.setDestination(26231U);
    msg.setDestinationEntity(152U);
    msg.name.assign("CJYXFGTTAPZMLVGXRDCBVUQZSEONQASXKFWFTIKJMMDXMHKWUCSRFDHZXMF");
    msg.value = 171U;

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
    msg.setTimeStamp(0.975919470544);
    msg.setSource(36360U);
    msg.setSourceEntity(93U);
    msg.setDestination(41350U);
    msg.setDestinationEntity(227U);
    msg.name.assign("XPBZOMKQALHXSIPTOMFUZXUEJRRDPGJWNUODZFSCGTCKMJRDPCWHVOROTVHPYJHGXEJYNVHFBSUQPBQGCKHTKBVFSLUKHIARYIUSJBLIMEHZRRWZMXZCQIMWBXFMSJOWDZPJQGCVAIXHNYZYGSKENYCXSNECRPDAWGHDQPVWOXNFELEZGVNAEMYOBJMFGBFLAWLDLFUAIXKZAWTCVUJANULIGTFN");

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
    msg.setTimeStamp(0.861021351133);
    msg.setSource(50697U);
    msg.setSourceEntity(149U);
    msg.setDestination(60579U);
    msg.setDestinationEntity(203U);
    msg.name.assign("FEOBRDLKBGJFDYRDVNJXSXBFRJAYIYWCGMTDGMMBNOLVUMJYVAICIXKGUDLFIWLQSSCLVOVDSWWJXKSIFCEFICIJQHUOGOBPTKEGPKOZHRCTTCMDHMIXEPRFMWIZOHVAUAGTFIXLHBQZUHYPFASFTZZ");

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
    msg.setTimeStamp(0.200000891948);
    msg.setSource(35888U);
    msg.setSourceEntity(143U);
    msg.setDestination(8222U);
    msg.setDestinationEntity(5U);
    msg.name.assign("AXHLKFRMATXJCANTVUVPDISAKJWNIFRCBPRKMSSQOVMLGVGBMVSD");

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
    msg.setTimeStamp(0.645125591676);
    msg.setSource(48959U);
    msg.setSourceEntity(114U);
    msg.setDestination(58616U);
    msg.setDestinationEntity(40U);
    msg.name.assign("CKJFUKLRWXAVFDLABTPENSCWTQJIEGLONYDGJLIEIVDXXZKCLXQTYMYJBEMVUNRICZPBMUKAMHSQIATSBQOYVXSGQQJPDJHLRDFZQVRDPMBHCYOASOTRKHFXWKUFBDXIPWNBVVYWGJIUCWIZEGHEVXFHGTUHZVZRVLWESHEOJSPSNKMRCMEILCGAIKELKGFPRUHAFDXAOUBUKNRPNWPBOQNGGYSMNTFLAURBOZXW");
    msg.value = 88U;

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
    msg.setTimeStamp(0.648730226458);
    msg.setSource(44236U);
    msg.setSourceEntity(161U);
    msg.setDestination(36536U);
    msg.setDestinationEntity(75U);
    msg.name.assign("ASAPSUTXRNLOEWFAMSIRPUWZTBVCBAGREANDHXBFGVJGMIMCKHYMFEENCTVEJAVWAUWFSCJMQXDNLARNBRKXWLKDGCSULIQIYRXTHJMDKHU");
    msg.value = 232U;

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
    msg.setTimeStamp(0.692781244578);
    msg.setSource(13011U);
    msg.setSourceEntity(120U);
    msg.setDestination(63037U);
    msg.setDestinationEntity(146U);
    msg.name.assign("DWBCRGLYHIJITUPJIUTMWYCZMTTOWGRTNDLKUZZPBGQEURLACYPPPVTHYVVOATEXO");
    msg.value = 70U;

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
    msg.setTimeStamp(0.424060757717);
    msg.setSource(56153U);
    msg.setSourceEntity(4U);
    msg.setDestination(583U);
    msg.setDestinationEntity(13U);
    msg.id = 165U;
    msg.period = 765422176U;
    msg.duty_cycle = 3722762670U;

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
    msg.setTimeStamp(0.218376469796);
    msg.setSource(40013U);
    msg.setSourceEntity(58U);
    msg.setDestination(53453U);
    msg.setDestinationEntity(81U);
    msg.id = 13U;
    msg.period = 1390963628U;
    msg.duty_cycle = 2339122804U;

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
    msg.setTimeStamp(0.438010022571);
    msg.setSource(48378U);
    msg.setSourceEntity(53U);
    msg.setDestination(14648U);
    msg.setDestinationEntity(74U);
    msg.id = 199U;
    msg.period = 3229229958U;
    msg.duty_cycle = 621805635U;

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
    msg.setTimeStamp(0.531429760536);
    msg.setSource(12778U);
    msg.setSourceEntity(41U);
    msg.setDestination(28302U);
    msg.setDestinationEntity(147U);
    msg.id = 14U;
    msg.period = 3073728256U;
    msg.duty_cycle = 1370451945U;

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
    msg.setTimeStamp(0.388402728809);
    msg.setSource(10170U);
    msg.setSourceEntity(101U);
    msg.setDestination(28737U);
    msg.setDestinationEntity(230U);
    msg.id = 212U;
    msg.period = 932147440U;
    msg.duty_cycle = 751110981U;

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
    msg.setTimeStamp(0.930515467601);
    msg.setSource(41041U);
    msg.setSourceEntity(81U);
    msg.setDestination(6668U);
    msg.setDestinationEntity(96U);
    msg.id = 40U;
    msg.period = 4258692920U;
    msg.duty_cycle = 1093727392U;

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
    msg.setTimeStamp(0.855198931831);
    msg.setSource(17285U);
    msg.setSourceEntity(197U);
    msg.setDestination(53351U);
    msg.setDestinationEntity(143U);
    msg.lat = 0.0530838281683;
    msg.lon = 0.804727982448;
    msg.height = 0.76663298808;
    msg.x = 0.529930855582;
    msg.y = 0.813428803353;
    msg.z = 0.0589910638412;
    msg.phi = 0.540791352497;
    msg.theta = 0.465484503576;
    msg.psi = 0.100161202062;
    msg.u = 0.0599104756187;
    msg.v = 0.845163871494;
    msg.w = 0.405189133557;
    msg.vx = 0.000514937937734;
    msg.vy = 0.409110123031;
    msg.vz = 0.414048381308;
    msg.p = 0.418252720603;
    msg.q = 0.390018314066;
    msg.r = 0.60365885097;
    msg.depth = 0.182006426802;
    msg.alt = 0.940959711363;

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
    msg.setTimeStamp(0.412821902885);
    msg.setSource(36324U);
    msg.setSourceEntity(237U);
    msg.setDestination(4361U);
    msg.setDestinationEntity(151U);
    msg.lat = 0.170847668749;
    msg.lon = 0.903308907048;
    msg.height = 0.121486704577;
    msg.x = 0.0669725640275;
    msg.y = 0.273231571137;
    msg.z = 0.220193870864;
    msg.phi = 0.887041255344;
    msg.theta = 0.408770191078;
    msg.psi = 0.464463438805;
    msg.u = 0.652793401718;
    msg.v = 0.783839002133;
    msg.w = 0.752489214131;
    msg.vx = 0.100497860083;
    msg.vy = 0.962164472364;
    msg.vz = 0.163566384481;
    msg.p = 0.320278283768;
    msg.q = 0.1406347277;
    msg.r = 0.220277632825;
    msg.depth = 0.158580845328;
    msg.alt = 0.614194207677;

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
    msg.setTimeStamp(0.833609824933);
    msg.setSource(34840U);
    msg.setSourceEntity(131U);
    msg.setDestination(23350U);
    msg.setDestinationEntity(177U);
    msg.lat = 0.268113365241;
    msg.lon = 0.72368897305;
    msg.height = 0.758596072071;
    msg.x = 0.515578753192;
    msg.y = 0.0033915119734;
    msg.z = 0.892757126116;
    msg.phi = 0.795449269933;
    msg.theta = 0.0491875671149;
    msg.psi = 0.508937448773;
    msg.u = 0.551321087888;
    msg.v = 0.982670043626;
    msg.w = 0.172098526922;
    msg.vx = 0.217260064345;
    msg.vy = 0.315099319488;
    msg.vz = 0.881165121795;
    msg.p = 0.884833606043;
    msg.q = 0.245670177145;
    msg.r = 0.656483477375;
    msg.depth = 0.980667678969;
    msg.alt = 0.091094809561;

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
    msg.setTimeStamp(0.859979368499);
    msg.setSource(9545U);
    msg.setSourceEntity(244U);
    msg.setDestination(52589U);
    msg.setDestinationEntity(76U);
    msg.x = 0.32178034164;
    msg.y = 0.709523018526;
    msg.z = 0.34864891558;

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
    msg.setTimeStamp(0.616314695151);
    msg.setSource(29443U);
    msg.setSourceEntity(183U);
    msg.setDestination(50819U);
    msg.setDestinationEntity(180U);
    msg.x = 0.4594419241;
    msg.y = 0.618234051762;
    msg.z = 0.93048913205;

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
    msg.setTimeStamp(0.920728161197);
    msg.setSource(46634U);
    msg.setSourceEntity(154U);
    msg.setDestination(47790U);
    msg.setDestinationEntity(16U);
    msg.x = 0.559677666584;
    msg.y = 0.482002454289;
    msg.z = 0.455422115941;

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
    msg.setTimeStamp(0.374840734696);
    msg.setSource(37058U);
    msg.setSourceEntity(155U);
    msg.setDestination(10173U);
    msg.setDestinationEntity(56U);
    msg.value = 0.435767825147;

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
    msg.setTimeStamp(0.281174896266);
    msg.setSource(29908U);
    msg.setSourceEntity(95U);
    msg.setDestination(22357U);
    msg.setDestinationEntity(167U);
    msg.value = 0.555420554853;

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
    msg.setTimeStamp(0.0622453447979);
    msg.setSource(5598U);
    msg.setSourceEntity(177U);
    msg.setDestination(46589U);
    msg.setDestinationEntity(253U);
    msg.value = 0.604740986439;

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
    msg.setTimeStamp(0.97690343536);
    msg.setSource(49564U);
    msg.setSourceEntity(63U);
    msg.setDestination(64985U);
    msg.setDestinationEntity(165U);
    msg.value = 0.309273319503;

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
    msg.setTimeStamp(0.574237647176);
    msg.setSource(23722U);
    msg.setSourceEntity(27U);
    msg.setDestination(25962U);
    msg.setDestinationEntity(178U);
    msg.value = 0.228714585845;

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
    msg.setTimeStamp(0.531778191832);
    msg.setSource(54732U);
    msg.setSourceEntity(211U);
    msg.setDestination(58000U);
    msg.setDestinationEntity(109U);
    msg.value = 0.12232746276;

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
    msg.setTimeStamp(0.962118938503);
    msg.setSource(37671U);
    msg.setSourceEntity(146U);
    msg.setDestination(27238U);
    msg.setDestinationEntity(139U);
    msg.x = 0.358410821379;
    msg.y = 0.121886546061;
    msg.z = 0.533241044018;
    msg.phi = 0.867431392692;
    msg.theta = 0.0856956782599;
    msg.psi = 0.513376557018;
    msg.p = 0.0914930330319;
    msg.q = 0.048176530903;
    msg.r = 0.339814933829;
    msg.u = 0.331400185445;
    msg.v = 0.291703719436;
    msg.w = 0.965613557226;
    msg.bias_psi = 0.491162681691;
    msg.bias_r = 0.783896835874;

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
    msg.setTimeStamp(0.0440381712189);
    msg.setSource(37111U);
    msg.setSourceEntity(106U);
    msg.setDestination(31376U);
    msg.setDestinationEntity(159U);
    msg.x = 0.593762504755;
    msg.y = 0.81944486394;
    msg.z = 0.824131877293;
    msg.phi = 0.314484287712;
    msg.theta = 0.492060952717;
    msg.psi = 0.0661315456486;
    msg.p = 0.239333286959;
    msg.q = 0.856228764563;
    msg.r = 0.0678192170658;
    msg.u = 0.381639898361;
    msg.v = 0.501690532498;
    msg.w = 0.13823165436;
    msg.bias_psi = 0.391722972476;
    msg.bias_r = 0.28449478091;

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
    msg.setTimeStamp(0.730760392316);
    msg.setSource(2050U);
    msg.setSourceEntity(236U);
    msg.setDestination(29641U);
    msg.setDestinationEntity(205U);
    msg.x = 0.644854744356;
    msg.y = 0.307763634171;
    msg.z = 0.874949698592;
    msg.phi = 0.861759318261;
    msg.theta = 0.690408910783;
    msg.psi = 0.528534642328;
    msg.p = 0.835089042418;
    msg.q = 0.984570896695;
    msg.r = 0.806875635603;
    msg.u = 0.727284816916;
    msg.v = 0.344580588373;
    msg.w = 0.0108198675652;
    msg.bias_psi = 0.0858207553931;
    msg.bias_r = 0.530752188846;

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
    msg.setTimeStamp(0.217375063451);
    msg.setSource(59191U);
    msg.setSourceEntity(201U);
    msg.setDestination(19920U);
    msg.setDestinationEntity(0U);
    msg.bias_psi = 0.254084711502;
    msg.bias_r = 0.604775878513;
    msg.cog = 0.531671090578;
    msg.cyaw = 0.0630817399689;
    msg.gps_rej_level = 0.242755627052;
    msg.lbl_rej_level = 0.215115644809;
    msg.custom_x = 0.930065736773;
    msg.custom_y = 0.872091092742;
    msg.custom_z = 0.541883359135;

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
    msg.setTimeStamp(0.66577916951);
    msg.setSource(49237U);
    msg.setSourceEntity(55U);
    msg.setDestination(3127U);
    msg.setDestinationEntity(101U);
    msg.bias_psi = 0.488561584363;
    msg.bias_r = 0.109572035332;
    msg.cog = 0.828216951299;
    msg.cyaw = 0.560636410157;
    msg.gps_rej_level = 0.476188741647;
    msg.lbl_rej_level = 0.353702447017;
    msg.custom_x = 0.724420888031;
    msg.custom_y = 0.75449851459;
    msg.custom_z = 0.738475561844;

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
    msg.setTimeStamp(0.784053091333);
    msg.setSource(50425U);
    msg.setSourceEntity(119U);
    msg.setDestination(18200U);
    msg.setDestinationEntity(1U);
    msg.bias_psi = 0.677524391211;
    msg.bias_r = 0.0328712661097;
    msg.cog = 0.445867180503;
    msg.cyaw = 0.866064772008;
    msg.gps_rej_level = 0.761910319815;
    msg.lbl_rej_level = 0.360059655527;
    msg.custom_x = 0.272231319841;
    msg.custom_y = 0.00937384141076;
    msg.custom_z = 0.443284640769;

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
    msg.setTimeStamp(0.332025041362);
    msg.setSource(53544U);
    msg.setSourceEntity(223U);
    msg.setDestination(24477U);
    msg.setDestinationEntity(239U);
    msg.utc_time = 0.915136804259;
    msg.reason = 124U;

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
    msg.setTimeStamp(0.26351212777);
    msg.setSource(23088U);
    msg.setSourceEntity(209U);
    msg.setDestination(64548U);
    msg.setDestinationEntity(174U);
    msg.utc_time = 0.143556242595;
    msg.reason = 243U;

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
    msg.setTimeStamp(0.251651018467);
    msg.setSource(54983U);
    msg.setSourceEntity(29U);
    msg.setDestination(3878U);
    msg.setDestinationEntity(82U);
    msg.utc_time = 0.769074457657;
    msg.reason = 110U;

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
    msg.setTimeStamp(0.0398220678026);
    msg.setSource(55883U);
    msg.setSourceEntity(216U);
    msg.setDestination(64651U);
    msg.setDestinationEntity(206U);
    msg.id = 252U;
    msg.range = 0.847076818484;
    msg.acceptance = 120U;

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
    msg.setTimeStamp(0.156856612848);
    msg.setSource(29679U);
    msg.setSourceEntity(136U);
    msg.setDestination(48528U);
    msg.setDestinationEntity(35U);
    msg.id = 98U;
    msg.range = 0.450792148891;
    msg.acceptance = 34U;

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
    msg.setTimeStamp(0.509218607525);
    msg.setSource(8306U);
    msg.setSourceEntity(56U);
    msg.setDestination(56714U);
    msg.setDestinationEntity(147U);
    msg.id = 175U;
    msg.range = 0.129718664547;
    msg.acceptance = 18U;

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
    msg.setTimeStamp(0.252559387194);
    msg.setSource(16109U);
    msg.setSourceEntity(37U);
    msg.setDestination(36040U);
    msg.setDestinationEntity(106U);
    msg.type = 205U;
    msg.reason = 212U;
    msg.value = 0.871643491404;
    msg.timestep = 0.331616438281;

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
    msg.setTimeStamp(0.165027084609);
    msg.setSource(38461U);
    msg.setSourceEntity(208U);
    msg.setDestination(11268U);
    msg.setDestinationEntity(31U);
    msg.type = 83U;
    msg.reason = 103U;
    msg.value = 0.738152257434;
    msg.timestep = 0.86270489388;

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
    msg.setTimeStamp(0.537059368467);
    msg.setSource(32359U);
    msg.setSourceEntity(199U);
    msg.setDestination(56516U);
    msg.setDestinationEntity(86U);
    msg.type = 179U;
    msg.reason = 171U;
    msg.value = 0.201672144353;
    msg.timestep = 0.966448515605;

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
    msg.setTimeStamp(0.867094511354);
    msg.setSource(5428U);
    msg.setSourceEntity(40U);
    msg.setDestination(39292U);
    msg.setDestinationEntity(153U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("AYHHUZEKQONVNPQIXQZRHGRYWELTNCBJZHTTQPDFXLIROYIYDONTLJDSZGUYTXESNMPDTUTVZCUHWAFLOJXARCUPEGSCKXUHLEVXNFHMWOMXAWTYQJKDDMTQPBFEYZSBJGXOWMBQUAFDJZQPBSDIWAKOSKDFOWALHMAKMBDLSRIWNEGLVNKRTWMIFQVZRAKKCKSGIVOMCBV");
    tmp_msg_0.lat = 0.106133128477;
    tmp_msg_0.lon = 0.67825794021;
    tmp_msg_0.depth = 0.130815575673;
    tmp_msg_0.query_channel = 252U;
    tmp_msg_0.reply_channel = 90U;
    tmp_msg_0.transponder_delay = 94U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.633745836754;
    msg.y = 0.408780611362;
    msg.var_x = 0.314022709584;
    msg.var_y = 0.618126516462;
    msg.distance = 0.75204559862;

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
    msg.setTimeStamp(0.0549242909568);
    msg.setSource(57834U);
    msg.setSourceEntity(95U);
    msg.setDestination(12916U);
    msg.setDestinationEntity(250U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("KBATXIBDOYHZGBPHYMRYMUMIA");
    tmp_msg_0.lat = 0.222248523716;
    tmp_msg_0.lon = 0.353710696763;
    tmp_msg_0.depth = 0.793070693986;
    tmp_msg_0.query_channel = 112U;
    tmp_msg_0.reply_channel = 203U;
    tmp_msg_0.transponder_delay = 195U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.0252268883205;
    msg.y = 0.608713064861;
    msg.var_x = 0.9129912598;
    msg.var_y = 0.554583258452;
    msg.distance = 0.843151237957;

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
    msg.setTimeStamp(0.827250194967);
    msg.setSource(41338U);
    msg.setSourceEntity(230U);
    msg.setDestination(50661U);
    msg.setDestinationEntity(218U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("VBXAJUNDBDMMFQHVRNGWFYNKRXJTKZTKRUWDAIRHLMQVVRIJWFPHHPCNAIPZKGFHOKEHJQYZIFSLTDUPBPDALZIMEZWMSKITYQIGASXGHNPBMFTJMPCDBATWNQLWDCEJZKOUGBLXDLYURHUVUOFAUTPKHOXSSRMRUCZDPGLWZSEZLQDUKPVEAVNCSMONGQMYEGXXQSBVILOI");
    tmp_msg_0.lat = 0.394384571028;
    tmp_msg_0.lon = 0.515767079047;
    tmp_msg_0.depth = 0.632458148436;
    tmp_msg_0.query_channel = 107U;
    tmp_msg_0.reply_channel = 206U;
    tmp_msg_0.transponder_delay = 53U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.109427161549;
    msg.y = 0.952778363555;
    msg.var_x = 0.818345250563;
    msg.var_y = 0.568315866862;
    msg.distance = 0.875777881809;

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
    msg.setTimeStamp(0.377230365013);
    msg.setSource(63070U);
    msg.setSourceEntity(14U);
    msg.setDestination(28717U);
    msg.setDestinationEntity(254U);
    msg.state = 28U;

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
    msg.setTimeStamp(0.662973391382);
    msg.setSource(49775U);
    msg.setSourceEntity(57U);
    msg.setDestination(54283U);
    msg.setDestinationEntity(18U);
    msg.state = 207U;

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
    msg.setTimeStamp(0.546382721949);
    msg.setSource(12225U);
    msg.setSourceEntity(215U);
    msg.setDestination(46499U);
    msg.setDestinationEntity(127U);
    msg.state = 32U;

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
    msg.setTimeStamp(0.262376681697);
    msg.setSource(25797U);
    msg.setSourceEntity(158U);
    msg.setDestination(8908U);
    msg.setDestinationEntity(4U);
    msg.x = 0.985192680041;
    msg.y = 0.239214407816;
    msg.z = 0.939206731761;

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
    msg.setTimeStamp(0.0635746392119);
    msg.setSource(40584U);
    msg.setSourceEntity(249U);
    msg.setDestination(18648U);
    msg.setDestinationEntity(136U);
    msg.x = 0.604885281061;
    msg.y = 0.239091642814;
    msg.z = 0.477354991671;

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
    msg.setTimeStamp(0.374530715641);
    msg.setSource(47405U);
    msg.setSourceEntity(54U);
    msg.setDestination(9720U);
    msg.setDestinationEntity(159U);
    msg.x = 0.955780778373;
    msg.y = 0.660959307947;
    msg.z = 0.255132051912;

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
    msg.setTimeStamp(0.857734247485);
    msg.setSource(36347U);
    msg.setSourceEntity(93U);
    msg.setDestination(3941U);
    msg.setDestinationEntity(1U);
    msg.va = 0.54725345354;
    msg.aoa = 0.616448604477;
    msg.ssa = 0.285878792542;

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
    msg.setTimeStamp(0.562152675382);
    msg.setSource(54788U);
    msg.setSourceEntity(215U);
    msg.setDestination(59644U);
    msg.setDestinationEntity(221U);
    msg.va = 0.48944134241;
    msg.aoa = 0.663414499004;
    msg.ssa = 0.482242989148;

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
    msg.setTimeStamp(0.79246849158);
    msg.setSource(26587U);
    msg.setSourceEntity(202U);
    msg.setDestination(6821U);
    msg.setDestinationEntity(68U);
    msg.va = 0.9989485858;
    msg.aoa = 0.964537150589;
    msg.ssa = 0.0266322910978;

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
    msg.setTimeStamp(0.948195421329);
    msg.setSource(55183U);
    msg.setSourceEntity(77U);
    msg.setDestination(54914U);
    msg.setDestinationEntity(97U);
    msg.value = 0.676444543459;
    msg.off = 0.943138850481;

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
    msg.setTimeStamp(0.0268569859148);
    msg.setSource(695U);
    msg.setSourceEntity(78U);
    msg.setDestination(9971U);
    msg.setDestinationEntity(230U);
    msg.value = 0.278143762841;
    msg.off = 0.390172322804;

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
    msg.setTimeStamp(0.397120798297);
    msg.setSource(59653U);
    msg.setSourceEntity(25U);
    msg.setDestination(53797U);
    msg.setDestinationEntity(154U);
    msg.value = 0.850680936175;
    msg.off = 0.586495826919;

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
    msg.setTimeStamp(0.0180278318709);
    msg.setSource(28636U);
    msg.setSourceEntity(172U);
    msg.setDestination(27507U);
    msg.setDestinationEntity(218U);
    msg.value = 0.752184592987;
    msg.z_units = 1U;

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
    msg.setTimeStamp(0.895286590294);
    msg.setSource(10667U);
    msg.setSourceEntity(221U);
    msg.setDestination(37096U);
    msg.setDestinationEntity(74U);
    msg.value = 0.645111763288;
    msg.z_units = 35U;

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
    msg.setTimeStamp(0.61536630743);
    msg.setSource(53211U);
    msg.setSourceEntity(52U);
    msg.setDestination(10177U);
    msg.setDestinationEntity(232U);
    msg.value = 0.517769697697;
    msg.z_units = 29U;

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
    msg.setTimeStamp(0.823293032058);
    msg.setSource(19655U);
    msg.setSourceEntity(18U);
    msg.setDestination(56554U);
    msg.setDestinationEntity(101U);
    msg.value = 0.906943141613;
    msg.speed_units = 252U;

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
    msg.setTimeStamp(0.43758916899);
    msg.setSource(25144U);
    msg.setSourceEntity(118U);
    msg.setDestination(19421U);
    msg.setDestinationEntity(43U);
    msg.value = 0.127253318145;
    msg.speed_units = 113U;

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
    msg.setTimeStamp(0.113515000066);
    msg.setSource(6754U);
    msg.setSourceEntity(83U);
    msg.setDestination(58529U);
    msg.setDestinationEntity(221U);
    msg.value = 0.138290975524;
    msg.speed_units = 108U;

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
    msg.setTimeStamp(0.583641993367);
    msg.setSource(20500U);
    msg.setSourceEntity(77U);
    msg.setDestination(54147U);
    msg.setDestinationEntity(40U);
    msg.value = 0.356606391751;

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
    msg.setTimeStamp(0.385241075555);
    msg.setSource(44876U);
    msg.setSourceEntity(170U);
    msg.setDestination(45916U);
    msg.setDestinationEntity(237U);
    msg.value = 0.593022447319;

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
    msg.setTimeStamp(0.36193530284);
    msg.setSource(33476U);
    msg.setSourceEntity(161U);
    msg.setDestination(40280U);
    msg.setDestinationEntity(98U);
    msg.value = 0.282715673579;

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
    msg.setTimeStamp(0.0349818586542);
    msg.setSource(870U);
    msg.setSourceEntity(248U);
    msg.setDestination(19604U);
    msg.setDestinationEntity(93U);
    msg.value = 0.137728793257;

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
    msg.setTimeStamp(0.867430697381);
    msg.setSource(18892U);
    msg.setSourceEntity(132U);
    msg.setDestination(2482U);
    msg.setDestinationEntity(90U);
    msg.value = 0.265628914592;

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
    msg.setTimeStamp(0.798895326123);
    msg.setSource(41346U);
    msg.setSourceEntity(76U);
    msg.setDestination(51901U);
    msg.setDestinationEntity(4U);
    msg.value = 0.386590485936;

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
    msg.setTimeStamp(0.980588224188);
    msg.setSource(43348U);
    msg.setSourceEntity(246U);
    msg.setDestination(29601U);
    msg.setDestinationEntity(7U);
    msg.value = 0.706225907562;

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
    msg.setTimeStamp(0.000296131533246);
    msg.setSource(12606U);
    msg.setSourceEntity(86U);
    msg.setDestination(52819U);
    msg.setDestinationEntity(66U);
    msg.value = 0.448877312141;

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
    msg.setTimeStamp(0.189941878724);
    msg.setSource(27917U);
    msg.setSourceEntity(52U);
    msg.setDestination(59926U);
    msg.setDestinationEntity(117U);
    msg.value = 0.5046639824;

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
    msg.setTimeStamp(0.947285622822);
    msg.setSource(43550U);
    msg.setSourceEntity(49U);
    msg.setDestination(52904U);
    msg.setDestinationEntity(247U);
    msg.path_ref = 355868596U;
    msg.start_lat = 0.685457030122;
    msg.start_lon = 0.214501933245;
    msg.start_z = 0.538291348937;
    msg.start_z_units = 149U;
    msg.end_lat = 0.0315560318498;
    msg.end_lon = 0.828435917156;
    msg.end_z = 0.038266062907;
    msg.end_z_units = 24U;
    msg.speed = 0.101228211154;
    msg.speed_units = 163U;
    msg.lradius = 0.36125358034;
    msg.flags = 86U;

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
    msg.setTimeStamp(0.589032738997);
    msg.setSource(48413U);
    msg.setSourceEntity(237U);
    msg.setDestination(40111U);
    msg.setDestinationEntity(122U);
    msg.path_ref = 2481197723U;
    msg.start_lat = 0.986230245616;
    msg.start_lon = 0.63349941758;
    msg.start_z = 0.080868254908;
    msg.start_z_units = 79U;
    msg.end_lat = 0.0866946635561;
    msg.end_lon = 0.146224242421;
    msg.end_z = 0.307515414325;
    msg.end_z_units = 130U;
    msg.speed = 0.50013415513;
    msg.speed_units = 43U;
    msg.lradius = 0.210460540605;
    msg.flags = 246U;

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
    msg.setTimeStamp(0.239424804386);
    msg.setSource(52021U);
    msg.setSourceEntity(208U);
    msg.setDestination(5926U);
    msg.setDestinationEntity(253U);
    msg.path_ref = 992031849U;
    msg.start_lat = 0.0276017098416;
    msg.start_lon = 0.292664317571;
    msg.start_z = 0.462422024594;
    msg.start_z_units = 210U;
    msg.end_lat = 0.850949162372;
    msg.end_lon = 0.89360321286;
    msg.end_z = 0.635037246789;
    msg.end_z_units = 83U;
    msg.speed = 0.264779000081;
    msg.speed_units = 149U;
    msg.lradius = 0.6308918006;
    msg.flags = 145U;

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
    msg.setTimeStamp(0.931734690186);
    msg.setSource(4489U);
    msg.setSourceEntity(87U);
    msg.setDestination(45210U);
    msg.setDestinationEntity(149U);
    msg.x = 0.937252469882;
    msg.y = 0.0575115450215;
    msg.z = 0.77880260216;
    msg.k = 0.76764115513;
    msg.m = 0.664381794509;
    msg.n = 0.719519009275;
    msg.flags = 225U;

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
    msg.setTimeStamp(0.979168488232);
    msg.setSource(47051U);
    msg.setSourceEntity(243U);
    msg.setDestination(48612U);
    msg.setDestinationEntity(3U);
    msg.x = 0.723493211698;
    msg.y = 0.734135755451;
    msg.z = 0.362807099483;
    msg.k = 0.0278756084985;
    msg.m = 0.917283759894;
    msg.n = 0.583849900486;
    msg.flags = 241U;

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
    msg.setTimeStamp(0.040601925235);
    msg.setSource(61185U);
    msg.setSourceEntity(250U);
    msg.setDestination(38010U);
    msg.setDestinationEntity(201U);
    msg.x = 0.669423261248;
    msg.y = 0.933192158659;
    msg.z = 0.219706824363;
    msg.k = 0.327774186354;
    msg.m = 0.39885289193;
    msg.n = 0.492650520352;
    msg.flags = 72U;

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
    msg.setTimeStamp(0.894285839822);
    msg.setSource(47573U);
    msg.setSourceEntity(10U);
    msg.setDestination(64891U);
    msg.setDestinationEntity(248U);
    msg.value = 0.906766476039;

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
    msg.setTimeStamp(0.0713554392874);
    msg.setSource(21468U);
    msg.setSourceEntity(245U);
    msg.setDestination(49832U);
    msg.setDestinationEntity(28U);
    msg.value = 0.49126372384;

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
    msg.setTimeStamp(0.28275353531);
    msg.setSource(33887U);
    msg.setSourceEntity(2U);
    msg.setDestination(32126U);
    msg.setDestinationEntity(124U);
    msg.value = 0.945967129504;

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
    msg.setTimeStamp(0.588042589436);
    msg.setSource(16937U);
    msg.setSourceEntity(148U);
    msg.setDestination(27840U);
    msg.setDestinationEntity(38U);
    msg.u = 0.473265188862;
    msg.v = 0.830521468983;
    msg.w = 0.568475042119;
    msg.p = 0.362398027005;
    msg.q = 0.0178814660198;
    msg.r = 0.597210261232;
    msg.flags = 164U;

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
    msg.setTimeStamp(0.843549197196);
    msg.setSource(24408U);
    msg.setSourceEntity(239U);
    msg.setDestination(44796U);
    msg.setDestinationEntity(76U);
    msg.u = 0.245371183924;
    msg.v = 0.0563657752625;
    msg.w = 0.446600695408;
    msg.p = 0.789212269406;
    msg.q = 0.665391174489;
    msg.r = 0.106667593869;
    msg.flags = 31U;

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
    msg.setTimeStamp(0.809829489698);
    msg.setSource(16281U);
    msg.setSourceEntity(17U);
    msg.setDestination(54359U);
    msg.setDestinationEntity(84U);
    msg.u = 0.551393069606;
    msg.v = 0.800559833111;
    msg.w = 0.511603953757;
    msg.p = 0.602866743591;
    msg.q = 0.104293588692;
    msg.r = 0.636943336163;
    msg.flags = 109U;

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
    msg.setTimeStamp(0.499149339033);
    msg.setSource(5925U);
    msg.setSourceEntity(253U);
    msg.setDestination(12651U);
    msg.setDestinationEntity(158U);
    msg.path_ref = 885917222U;
    msg.start_lat = 0.09680619445;
    msg.start_lon = 0.499732204217;
    msg.start_z = 0.94565383772;
    msg.start_z_units = 251U;
    msg.end_lat = 0.839656556544;
    msg.end_lon = 0.649397512897;
    msg.end_z = 0.441244139108;
    msg.end_z_units = 177U;
    msg.lradius = 0.937774549742;
    msg.flags = 134U;
    msg.x = 0.514833519703;
    msg.y = 0.432350420777;
    msg.z = 0.642092310136;
    msg.vx = 0.487844877107;
    msg.vy = 0.125924774729;
    msg.vz = 0.975506581115;
    msg.course_error = 0.810046160093;
    msg.eta = 39507U;

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
    msg.setTimeStamp(0.673471129773);
    msg.setSource(25610U);
    msg.setSourceEntity(47U);
    msg.setDestination(37118U);
    msg.setDestinationEntity(117U);
    msg.path_ref = 3159537186U;
    msg.start_lat = 0.125953953744;
    msg.start_lon = 0.819499275266;
    msg.start_z = 0.60308621281;
    msg.start_z_units = 91U;
    msg.end_lat = 0.073242294161;
    msg.end_lon = 0.908144242209;
    msg.end_z = 0.0564370064876;
    msg.end_z_units = 191U;
    msg.lradius = 0.588763416332;
    msg.flags = 38U;
    msg.x = 0.365346106014;
    msg.y = 0.371413497039;
    msg.z = 0.9335446682;
    msg.vx = 0.824162598573;
    msg.vy = 0.310790838312;
    msg.vz = 0.616800408964;
    msg.course_error = 0.611908658636;
    msg.eta = 49005U;

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
    msg.setTimeStamp(0.0338384685808);
    msg.setSource(53383U);
    msg.setSourceEntity(213U);
    msg.setDestination(57907U);
    msg.setDestinationEntity(78U);
    msg.path_ref = 926324411U;
    msg.start_lat = 0.00109628176017;
    msg.start_lon = 0.0402354542279;
    msg.start_z = 0.442396244401;
    msg.start_z_units = 89U;
    msg.end_lat = 0.301499726441;
    msg.end_lon = 0.105881399709;
    msg.end_z = 0.687402681437;
    msg.end_z_units = 150U;
    msg.lradius = 0.510099636417;
    msg.flags = 103U;
    msg.x = 0.546453205258;
    msg.y = 0.936095949086;
    msg.z = 0.540541336756;
    msg.vx = 0.889278169806;
    msg.vy = 0.469082581036;
    msg.vz = 0.612646710685;
    msg.course_error = 0.0128701286904;
    msg.eta = 33868U;

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
    msg.setTimeStamp(0.711259601621);
    msg.setSource(43620U);
    msg.setSourceEntity(139U);
    msg.setDestination(17476U);
    msg.setDestinationEntity(34U);
    msg.k = 0.402909551713;
    msg.m = 0.815740993142;
    msg.n = 0.970018886468;

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
    msg.setTimeStamp(0.771612311315);
    msg.setSource(62518U);
    msg.setSourceEntity(75U);
    msg.setDestination(27312U);
    msg.setDestinationEntity(88U);
    msg.k = 0.710874018519;
    msg.m = 0.23880787279;
    msg.n = 0.930131377843;

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
    msg.setTimeStamp(0.100278459561);
    msg.setSource(33646U);
    msg.setSourceEntity(13U);
    msg.setDestination(60355U);
    msg.setDestinationEntity(28U);
    msg.k = 0.0622140083097;
    msg.m = 0.902966667003;
    msg.n = 0.539803704191;

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
    msg.setTimeStamp(0.17272327705);
    msg.setSource(43992U);
    msg.setSourceEntity(111U);
    msg.setDestination(4374U);
    msg.setDestinationEntity(114U);
    msg.p = 0.596244470667;
    msg.i = 0.937791901116;
    msg.d = 0.425052356522;
    msg.a = 0.900845659947;

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
    msg.setTimeStamp(0.723827965475);
    msg.setSource(13873U);
    msg.setSourceEntity(118U);
    msg.setDestination(55379U);
    msg.setDestinationEntity(252U);
    msg.p = 0.883716228883;
    msg.i = 0.538786867245;
    msg.d = 0.946729520582;
    msg.a = 0.305182678733;

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
    msg.setTimeStamp(0.718981373973);
    msg.setSource(50726U);
    msg.setSourceEntity(202U);
    msg.setDestination(15856U);
    msg.setDestinationEntity(20U);
    msg.p = 0.823265162261;
    msg.i = 0.00325407943864;
    msg.d = 0.778875935496;
    msg.a = 0.70055470004;

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
    msg.setTimeStamp(0.905693847964);
    msg.setSource(56839U);
    msg.setSourceEntity(219U);
    msg.setDestination(20007U);
    msg.setDestinationEntity(13U);
    msg.op = 160U;

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
    msg.setTimeStamp(0.490293591725);
    msg.setSource(41532U);
    msg.setSourceEntity(115U);
    msg.setDestination(32043U);
    msg.setDestinationEntity(154U);
    msg.op = 35U;

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
    msg.setTimeStamp(0.593496207781);
    msg.setSource(54474U);
    msg.setSourceEntity(223U);
    msg.setDestination(62267U);
    msg.setDestinationEntity(157U);
    msg.op = 40U;

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
    msg.setTimeStamp(0.712787104637);
    msg.setSource(60295U);
    msg.setSourceEntity(218U);
    msg.setDestination(44053U);
    msg.setDestinationEntity(54U);
    msg.x = 0.40981525006;
    msg.y = 0.906013423735;
    msg.z = 0.635217589423;
    msg.vx = 0.812433834951;
    msg.vy = 0.144546522484;
    msg.vz = 0.298341027624;
    msg.ax = 0.622309894079;
    msg.ay = 0.186263163126;
    msg.az = 0.361111267239;
    msg.flags = 62748U;

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
    msg.setTimeStamp(0.0347752384215);
    msg.setSource(24273U);
    msg.setSourceEntity(23U);
    msg.setDestination(10169U);
    msg.setDestinationEntity(141U);
    msg.x = 0.175499148136;
    msg.y = 0.468387053272;
    msg.z = 0.841352802403;
    msg.vx = 0.476158007294;
    msg.vy = 0.833142543602;
    msg.vz = 0.948226557375;
    msg.ax = 0.736276013816;
    msg.ay = 0.874973965158;
    msg.az = 0.968259442221;
    msg.flags = 28339U;

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
    msg.setTimeStamp(0.477595092503);
    msg.setSource(5959U);
    msg.setSourceEntity(98U);
    msg.setDestination(18552U);
    msg.setDestinationEntity(72U);
    msg.x = 0.21920898164;
    msg.y = 0.837003719089;
    msg.z = 0.724656045538;
    msg.vx = 0.1157999559;
    msg.vy = 0.187103740223;
    msg.vz = 0.473346733716;
    msg.ax = 0.581211853957;
    msg.ay = 0.707212522269;
    msg.az = 0.139975413481;
    msg.flags = 37418U;

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
    msg.setTimeStamp(0.745771787378);
    msg.setSource(40806U);
    msg.setSourceEntity(228U);
    msg.setDestination(35314U);
    msg.setDestinationEntity(206U);
    msg.value = 0.439947324548;

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
    msg.setTimeStamp(0.0763089422423);
    msg.setSource(4300U);
    msg.setSourceEntity(250U);
    msg.setDestination(35242U);
    msg.setDestinationEntity(138U);
    msg.value = 0.244199732083;

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
    msg.setTimeStamp(0.575808057245);
    msg.setSource(17318U);
    msg.setSourceEntity(92U);
    msg.setDestination(24707U);
    msg.setDestinationEntity(14U);
    msg.value = 0.570718362868;

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
    msg.setTimeStamp(0.289404176401);
    msg.setSource(48260U);
    msg.setSourceEntity(115U);
    msg.setDestination(19468U);
    msg.setDestinationEntity(47U);
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.path_ref = 261178775U;
    tmp_msg_0.start_lat = 0.949553213909;
    tmp_msg_0.start_lon = 0.0209723551101;
    tmp_msg_0.start_z = 0.0340491802661;
    tmp_msg_0.start_z_units = 131U;
    tmp_msg_0.end_lat = 0.0354120325073;
    tmp_msg_0.end_lon = 0.914247033087;
    tmp_msg_0.end_z = 0.703316491009;
    tmp_msg_0.end_z_units = 135U;
    tmp_msg_0.speed = 0.786955495755;
    tmp_msg_0.speed_units = 3U;
    tmp_msg_0.lradius = 0.675811636385;
    tmp_msg_0.flags = 229U;
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
    msg.setTimeStamp(0.358506366614);
    msg.setSource(61434U);
    msg.setSourceEntity(11U);
    msg.setDestination(5723U);
    msg.setDestinationEntity(111U);
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.path_ref = 2871185788U;
    tmp_msg_0.start_lat = 0.896478185729;
    tmp_msg_0.start_lon = 0.889245527649;
    tmp_msg_0.start_z = 0.859681370327;
    tmp_msg_0.start_z_units = 106U;
    tmp_msg_0.end_lat = 0.591484698877;
    tmp_msg_0.end_lon = 0.524540006357;
    tmp_msg_0.end_z = 0.923096891868;
    tmp_msg_0.end_z_units = 59U;
    tmp_msg_0.speed = 0.818777738667;
    tmp_msg_0.speed_units = 134U;
    tmp_msg_0.lradius = 0.176208896044;
    tmp_msg_0.flags = 125U;
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
    msg.setTimeStamp(0.85401807745);
    msg.setSource(31676U);
    msg.setSourceEntity(26U);
    msg.setDestination(48355U);
    msg.setDestinationEntity(70U);
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.path_ref = 2647833091U;
    tmp_msg_0.start_lat = 0.64637244878;
    tmp_msg_0.start_lon = 0.119885548673;
    tmp_msg_0.start_z = 0.437972859205;
    tmp_msg_0.start_z_units = 86U;
    tmp_msg_0.end_lat = 0.958226945247;
    tmp_msg_0.end_lon = 0.331712157367;
    tmp_msg_0.end_z = 0.744372780936;
    tmp_msg_0.end_z_units = 151U;
    tmp_msg_0.speed = 0.161150006021;
    tmp_msg_0.speed_units = 158U;
    tmp_msg_0.lradius = 0.932498743399;
    tmp_msg_0.flags = 52U;
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
    msg.setTimeStamp(0.621276312966);
    msg.setSource(34719U);
    msg.setSourceEntity(200U);
    msg.setDestination(30093U);
    msg.setDestinationEntity(74U);
    msg.timeout = 28465U;
    msg.lat = 0.640045537427;
    msg.lon = 0.0998027035751;
    msg.z = 0.337826228591;
    msg.z_units = 159U;
    msg.speed = 0.788085815787;
    msg.speed_units = 8U;
    msg.roll = 0.851411526123;
    msg.pitch = 0.517709009643;
    msg.yaw = 0.940845019638;
    msg.custom.assign("ZLWWNAACUXRXCKSCJZDSDHIQFUYXTOYDOBLWBXBLHZFYANTUPNUUKKNLEFPLQGWSZRKHPAQMSYIQHEHCYQXSMHRWRFNKYTSSWBJCAPMODOGSIIDJEJCHKVSZCWPVCWEZFNXMRZVEPGNJGOJMUBVXGDTFOBTE");

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
    msg.setTimeStamp(0.484109826533);
    msg.setSource(20400U);
    msg.setSourceEntity(194U);
    msg.setDestination(19944U);
    msg.setDestinationEntity(131U);
    msg.timeout = 63786U;
    msg.lat = 0.24365061187;
    msg.lon = 0.200345460423;
    msg.z = 0.983359272073;
    msg.z_units = 243U;
    msg.speed = 0.900328686204;
    msg.speed_units = 42U;
    msg.roll = 0.503037362769;
    msg.pitch = 0.795284370444;
    msg.yaw = 0.551224207772;
    msg.custom.assign("JBUIQDXQZKBRUKIYRSTULJZFFYJWKBMSSMIMOHRBPQCJGQTTCSGVWOMHUDZRSUWL");

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
    msg.setTimeStamp(0.271961115805);
    msg.setSource(9953U);
    msg.setSourceEntity(88U);
    msg.setDestination(38485U);
    msg.setDestinationEntity(158U);
    msg.timeout = 3554U;
    msg.lat = 0.690196376681;
    msg.lon = 0.485676130572;
    msg.z = 0.497408383872;
    msg.z_units = 2U;
    msg.speed = 0.305061682762;
    msg.speed_units = 253U;
    msg.roll = 0.368633651959;
    msg.pitch = 0.468213633594;
    msg.yaw = 0.647435643117;
    msg.custom.assign("RELDHXNEUHCLSMZQBYALRUJBVEEDYYBPOBKJQUVIBKQPOLIHVHSIX");

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
    msg.setTimeStamp(0.973717095076);
    msg.setSource(51371U);
    msg.setSourceEntity(43U);
    msg.setDestination(65465U);
    msg.setDestinationEntity(218U);
    msg.timeout = 44159U;
    msg.lat = 0.344925427769;
    msg.lon = 0.536764634146;
    msg.z = 0.241850758593;
    msg.z_units = 144U;
    msg.speed = 0.355434295792;
    msg.speed_units = 202U;
    msg.duration = 57259U;
    msg.radius = 0.786606537567;
    msg.flags = 119U;
    msg.custom.assign("LPJYFOMDXXDPSVNZQZDYQOGKUVCIHJPGBNYQCNHMYYXZILEMWTACTIWDRTUCIKAGUNOFORZKDTGDSZANJUGEBBJQQREFWJCSAYALEETAAKQHFRIACSVMUVLMZOFOBJIIMKHGMSDPXQEQXKSHFCSXMUPOGBBXCXNHYZLCLPSLDYFBEBJKWMZTUVWGEPKOOJHRINTORWFRVKXHZVVWENNW");

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
    msg.setTimeStamp(0.280223712103);
    msg.setSource(35972U);
    msg.setSourceEntity(49U);
    msg.setDestination(32131U);
    msg.setDestinationEntity(171U);
    msg.timeout = 3329U;
    msg.lat = 0.642861264182;
    msg.lon = 0.0346074488678;
    msg.z = 0.0504647565298;
    msg.z_units = 195U;
    msg.speed = 0.24418589961;
    msg.speed_units = 100U;
    msg.duration = 43378U;
    msg.radius = 0.619216374133;
    msg.flags = 101U;
    msg.custom.assign("FKXJVWTQRGFHXARZTOQRODOUJKDBUMJSFSQOVSWVANYODE");

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
    msg.setTimeStamp(0.676422095722);
    msg.setSource(21316U);
    msg.setSourceEntity(96U);
    msg.setDestination(18287U);
    msg.setDestinationEntity(93U);
    msg.timeout = 14405U;
    msg.lat = 0.731249602111;
    msg.lon = 0.765493624066;
    msg.z = 0.0270167098606;
    msg.z_units = 130U;
    msg.speed = 0.223322237924;
    msg.speed_units = 94U;
    msg.duration = 31492U;
    msg.radius = 0.937625536831;
    msg.flags = 237U;
    msg.custom.assign("BUDDNWKZJWTSLRAKKAWNVHYYVOAXUKEZWJOVQKVLGJU");

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
    msg.setTimeStamp(0.207779195077);
    msg.setSource(38063U);
    msg.setSourceEntity(191U);
    msg.setDestination(4880U);
    msg.setDestinationEntity(186U);
    msg.custom.assign("SRFKQMHSTWSVVRYFPIWCLKUSRNAHPWEMPLOMNVTMHWUEPAMCURGBDHSNQGWQTGFLDFYFRSPIYDZDGBBHOUNOLKSTPRAIJLNJZMKWVXZNPFUKSUBAWZLJETWOPANOMIXVEFCEKQBDJNREQWAMCYDCZPBYOZAVAWXVEVDHRTZGEEGHXZIKBFYBTXCQICFHZYGUBHXSYJIX");

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
    msg.setTimeStamp(0.23204574031);
    msg.setSource(26524U);
    msg.setSourceEntity(234U);
    msg.setDestination(63360U);
    msg.setDestinationEntity(159U);
    msg.custom.assign("TGTDQBHUFADMAPKYUYJSOTKVODNMYGUZZPIQEGOBCJGFYUEQEWXFOWUAQ");

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
    msg.setTimeStamp(0.26574004626);
    msg.setSource(54138U);
    msg.setSourceEntity(146U);
    msg.setDestination(2408U);
    msg.setDestinationEntity(125U);
    msg.custom.assign("KZNTRLEQOCQPBRAWPSMMGCXQLELOHMPYIZKBLOTDKLXEQDCYHWYQCFDFGVXPGFVUQJLNJONNRVI");

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
    msg.setTimeStamp(0.269114050524);
    msg.setSource(34751U);
    msg.setSourceEntity(134U);
    msg.setDestination(61150U);
    msg.setDestinationEntity(124U);
    msg.timeout = 38300U;
    msg.lat = 0.406249624621;
    msg.lon = 0.87131546981;
    msg.z = 0.694910640197;
    msg.z_units = 131U;
    msg.duration = 27584U;
    msg.speed = 0.518647044003;
    msg.speed_units = 83U;
    msg.type = 24U;
    msg.radius = 0.587010603412;
    msg.length = 0.0114410649634;
    msg.bearing = 0.546649158552;
    msg.direction = 27U;
    msg.custom.assign("QJZKARKBUWNPMEPKIYKLIZQUGNCMMXVATQSXDRAYUWGZPFECOERNEADYHXKFGZMTWXTDCHCFCOVWLOMMEICVXNBDSUCLUGWBGBTYVQVKLPOBRORYFJMNDEHAJPDLYIOVGMSAYLUPJPHRUIVAFQYOGEIHRSBQMCJPANTUXXHOWTKILFKBFZWLZQBD");

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
    msg.setTimeStamp(0.626031972468);
    msg.setSource(23496U);
    msg.setSourceEntity(65U);
    msg.setDestination(45017U);
    msg.setDestinationEntity(54U);
    msg.timeout = 23045U;
    msg.lat = 0.591925962026;
    msg.lon = 0.156946230711;
    msg.z = 0.955602328066;
    msg.z_units = 37U;
    msg.duration = 729U;
    msg.speed = 0.544504874917;
    msg.speed_units = 10U;
    msg.type = 26U;
    msg.radius = 0.444395584555;
    msg.length = 0.305414820117;
    msg.bearing = 0.589414274851;
    msg.direction = 45U;
    msg.custom.assign("ZWOQTVYHBMUIKALBCQRGZHJGDOPJYYONVEIJJZVXBTLQOEUXDYCHRWPHGKNROJBOBAEUMSNYYKFZYZMXLLPXJTWWCHKHFWLLQXWSVDVJWFEUMACIMMPULIAARGRVXNUSVZCXIDZZNPTTZADIPYVVYQRUHDDENMDCFBAR");

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
    msg.setTimeStamp(0.826583016107);
    msg.setSource(59722U);
    msg.setSourceEntity(142U);
    msg.setDestination(30815U);
    msg.setDestinationEntity(242U);
    msg.timeout = 57619U;
    msg.lat = 0.842698176095;
    msg.lon = 0.447525240475;
    msg.z = 0.843258698562;
    msg.z_units = 160U;
    msg.duration = 30970U;
    msg.speed = 0.0135997323245;
    msg.speed_units = 149U;
    msg.type = 197U;
    msg.radius = 0.635958785817;
    msg.length = 0.657128796102;
    msg.bearing = 0.817468602525;
    msg.direction = 116U;
    msg.custom.assign("TSCUDXZTMLJWWSONXNLNGUBNYYNXASCZIVZRDAGGYDBLYNCEBLS");

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
    msg.setTimeStamp(0.14550182333);
    msg.setSource(10246U);
    msg.setSourceEntity(16U);
    msg.setDestination(15566U);
    msg.setDestinationEntity(136U);
    msg.duration = 58243U;
    msg.custom.assign("ETBRDIBRGGXPBNUVWVACUCYTBIULHXWQMDWDOULDPXSIVRPWFQNNQYOSMLQYSYZYZEBYRBEGMJCAWJLNCRGJHESDKMSKZENBWOYRQHPWWUFBOYZOZMXYPFHLSSXGAEKSRGELQSKCAMPNKBMCPTTQQFEZIPXTVCU");

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
    msg.setTimeStamp(0.779969917325);
    msg.setSource(42505U);
    msg.setSourceEntity(252U);
    msg.setDestination(10598U);
    msg.setDestinationEntity(11U);
    msg.duration = 26703U;
    msg.custom.assign("FMOBBJLUMIWXAPBKDWTGYFKRWSEWNRNUBEMYPKCIAYUUVFTRXYFBVZIBCTJHRTVTQRQZGIWOFKS");

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
    msg.setTimeStamp(0.394209770687);
    msg.setSource(51324U);
    msg.setSourceEntity(97U);
    msg.setDestination(2816U);
    msg.setDestinationEntity(228U);
    msg.duration = 3595U;
    msg.custom.assign("GWPZNCACEBSZZDAREVGBFEXAMKGAUOERMKWYNBYEOZJILICZEPVWWDPIJZIHRHUTAIDBMINHQQTOJOQSUHJNSMFJLGISUDHVBLSJFVNTLPPWDXPXEBFMZSYULGTRLLUOUKDKNLWDQJRCKTUKSQNNBQVRBRYCJEZTFWQKTP");

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
    msg.setTimeStamp(0.725177814369);
    msg.setSource(8256U);
    msg.setSourceEntity(52U);
    msg.setDestination(33472U);
    msg.setDestinationEntity(120U);
    IMC::DesiredPitch tmp_msg_0;
    tmp_msg_0.value = 0.935109787458;
    msg.control.set(tmp_msg_0);
    msg.duration = 17079U;
    msg.custom.assign("RSXBJCHZMAGUPEZYFDWJSWZJKTOLSCKLIDKPUSABXGWSBNMKAFXYJWUIOMOVISVURSVUAULQGQKHQHYNDQAGEIRIHBLNBLVNOUHMCPXHDJSYXBDXUIBWVBFEWNAIATCTQMAQBDCNEKDJQWLCJGZYRMULIYPOFVMEFQWRNEO");

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
    msg.setTimeStamp(0.978132644131);
    msg.setSource(27425U);
    msg.setSourceEntity(14U);
    msg.setDestination(37653U);
    msg.setDestinationEntity(51U);
    IMC::DesiredZ tmp_msg_0;
    tmp_msg_0.value = 0.834221924553;
    tmp_msg_0.z_units = 191U;
    msg.control.set(tmp_msg_0);
    msg.duration = 28752U;
    msg.custom.assign("TULCGNGLEYMPAZFOAPOCQXVLBVDGYHCYDKJAVEITPMGHEYVEHVOIMTTGEBVFBEISGMADDOHYHDJXTZHOUST");

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
    msg.setTimeStamp(0.19869231975);
    msg.setSource(23634U);
    msg.setSourceEntity(201U);
    msg.setDestination(8541U);
    msg.setDestinationEntity(107U);
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.path_ref = 3816422368U;
    tmp_msg_0.start_lat = 0.548997056128;
    tmp_msg_0.start_lon = 0.304564322206;
    tmp_msg_0.start_z = 0.436136865844;
    tmp_msg_0.start_z_units = 170U;
    tmp_msg_0.end_lat = 0.618625350701;
    tmp_msg_0.end_lon = 0.541551153565;
    tmp_msg_0.end_z = 0.955610210662;
    tmp_msg_0.end_z_units = 29U;
    tmp_msg_0.speed = 0.459538898869;
    tmp_msg_0.speed_units = 34U;
    tmp_msg_0.lradius = 0.265712532713;
    tmp_msg_0.flags = 159U;
    msg.control.set(tmp_msg_0);
    msg.duration = 44726U;
    msg.custom.assign("XHEGURODYJMDKGFLDCVPZDHABLONXPAJZHHPCROZ");

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
    msg.setTimeStamp(0.146236362981);
    msg.setSource(5991U);
    msg.setSourceEntity(104U);
    msg.setDestination(26053U);
    msg.setDestinationEntity(233U);
    msg.timeout = 60430U;
    msg.lat = 0.766312432104;
    msg.lon = 0.174623286734;
    msg.z = 0.192356854944;
    msg.z_units = 87U;
    msg.speed = 0.752468555337;
    msg.speed_units = 147U;
    msg.bearing = 0.58165136843;
    msg.cross_angle = 0.0437108937761;
    msg.width = 0.498811497152;
    msg.length = 0.579109857702;
    msg.hstep = 0.767497725708;
    msg.coff = 76U;
    msg.alternation = 228U;
    msg.flags = 184U;
    msg.custom.assign("LOIBQYACACEOBXPOWFJIKSNRTNTIWDPSRXBBPRYDCFRDGCWDEUOTDKFGUEBZBJUMJEWOUWLRXVWEHGFHCVVLLPPKINZVTKXJMLMPG");

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
    msg.setTimeStamp(0.361950582304);
    msg.setSource(6755U);
    msg.setSourceEntity(39U);
    msg.setDestination(62863U);
    msg.setDestinationEntity(197U);
    msg.timeout = 57502U;
    msg.lat = 0.683857209699;
    msg.lon = 0.8688412689;
    msg.z = 0.186925924581;
    msg.z_units = 98U;
    msg.speed = 0.983354230588;
    msg.speed_units = 142U;
    msg.bearing = 0.724608645673;
    msg.cross_angle = 0.608199306756;
    msg.width = 0.605748970859;
    msg.length = 0.00261148291073;
    msg.hstep = 0.916800630256;
    msg.coff = 143U;
    msg.alternation = 40U;
    msg.flags = 95U;
    msg.custom.assign("ZZHIVQJONDHCBWOZPBVSBXSXCIQUQCVFSZAPPJOTARPKCKFEWBYILVYGK");

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
    msg.setTimeStamp(0.610296687393);
    msg.setSource(61859U);
    msg.setSourceEntity(9U);
    msg.setDestination(53421U);
    msg.setDestinationEntity(197U);
    msg.timeout = 62322U;
    msg.lat = 0.399110541412;
    msg.lon = 0.119568695433;
    msg.z = 0.550049053134;
    msg.z_units = 136U;
    msg.speed = 0.430198215062;
    msg.speed_units = 34U;
    msg.bearing = 0.992132702197;
    msg.cross_angle = 0.290064230827;
    msg.width = 0.804741492307;
    msg.length = 0.0924618557969;
    msg.hstep = 0.669462516617;
    msg.coff = 135U;
    msg.alternation = 102U;
    msg.flags = 52U;
    msg.custom.assign("RSQIFYFBWQMEFPHXHYNOSEYQYZJERORRQGGGVWDSLXAVVUAPAZTBZPIKEUHKXUKZVVXLKHTSDWCSOBPGFFAIXSRBXNDGRRTJLFPIOXYQJHQZMNCQDXMJZHGBBLUIEPKDOAMLZWJLJJCKTGDQLMNJFVFVJPIDUAUOWMCNHXBYKYYIOBTCNROWSZLGEQNIHNECMUTQTWARGWDOELYBEGAPDMJUIXALEPIMZTKNSTPSD");

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
    msg.setTimeStamp(0.210092187865);
    msg.setSource(32000U);
    msg.setSourceEntity(118U);
    msg.setDestination(35730U);
    msg.setDestinationEntity(249U);
    msg.timeout = 16052U;
    msg.lat = 0.952227928363;
    msg.lon = 0.450153634897;
    msg.z = 0.697253365291;
    msg.z_units = 103U;
    msg.speed = 0.912303516648;
    msg.speed_units = 79U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.156635226329;
    tmp_msg_0.y = 0.496432412278;
    tmp_msg_0.z = 0.674482820802;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("ZSPNPQBRBWIUVLIYFIVCQVQOTRHMWEFTCIYRRSROVTDGDMVZFVJOKQLDBTJGHMKXUWSXUUVKOISMKNLZXDWSDOBAGUFGIXDDQLSOENJQAOSEAXXHCGBJXDFGEZGRCYEUNBECELHJPXAQOILWRMLZUDJPLZEYICPTATFSWJBKFFYGDWCIKQTMHNUZPWYFPZIQVCBNJYZGLHHYPNOXKZMMNCTUKKJJMAVAOFQAPTNBB");

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
    msg.setTimeStamp(0.553362934617);
    msg.setSource(37422U);
    msg.setSourceEntity(121U);
    msg.setDestination(2794U);
    msg.setDestinationEntity(34U);
    msg.timeout = 53293U;
    msg.lat = 0.297700513713;
    msg.lon = 0.23909394961;
    msg.z = 0.079666577939;
    msg.z_units = 29U;
    msg.speed = 0.127673249688;
    msg.speed_units = 116U;
    msg.custom.assign("KONLFXNCABDZFXKHDOQFMYXROGNTKZMRWVADFNPVNRUIYXXZMUKTHQZOXXIQWPGLUASKDCXGETRQEWJCUPYQGGMHQDRGVEGTTTALUKARP");

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
    msg.setTimeStamp(0.643965290712);
    msg.setSource(44462U);
    msg.setSourceEntity(177U);
    msg.setDestination(38759U);
    msg.setDestinationEntity(246U);
    msg.timeout = 61930U;
    msg.lat = 0.486451067382;
    msg.lon = 0.0164250862845;
    msg.z = 0.450015186201;
    msg.z_units = 33U;
    msg.speed = 0.858433958157;
    msg.speed_units = 181U;
    msg.custom.assign("XMNRGIEDKYBWPIXSVYVCSMVQHYBUCOVYLFSDGIOZSHAQOOAWXKRWZNPLXTXGYDJRVHIUQKOB");

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
    msg.setTimeStamp(0.752566231539);
    msg.setSource(47651U);
    msg.setSourceEntity(244U);
    msg.setDestination(9419U);
    msg.setDestinationEntity(96U);
    msg.x = 0.390016970901;
    msg.y = 0.52473580422;
    msg.z = 0.901687459255;

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
    msg.setTimeStamp(0.726851723728);
    msg.setSource(49017U);
    msg.setSourceEntity(114U);
    msg.setDestination(385U);
    msg.setDestinationEntity(241U);
    msg.x = 0.0275118490785;
    msg.y = 0.733858507365;
    msg.z = 0.62371752565;

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
    msg.setTimeStamp(0.69672596147);
    msg.setSource(2554U);
    msg.setSourceEntity(152U);
    msg.setDestination(33516U);
    msg.setDestinationEntity(17U);
    msg.x = 0.43586299258;
    msg.y = 0.215484900649;
    msg.z = 0.911527914466;

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
    msg.setTimeStamp(0.387666038092);
    msg.setSource(9433U);
    msg.setSourceEntity(145U);
    msg.setDestination(27206U);
    msg.setDestinationEntity(230U);
    msg.timeout = 64214U;
    msg.lat = 0.406256479158;
    msg.lon = 0.0561983927667;
    msg.z = 0.899104437894;
    msg.z_units = 97U;
    msg.amplitude = 0.185899234874;
    msg.pitch = 0.383521674144;
    msg.speed = 0.00161274375194;
    msg.speed_units = 223U;
    msg.custom.assign("WQPTUZMLSDAJCN");

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
    msg.setTimeStamp(0.130516252036);
    msg.setSource(56846U);
    msg.setSourceEntity(65U);
    msg.setDestination(45180U);
    msg.setDestinationEntity(229U);
    msg.timeout = 8291U;
    msg.lat = 0.41711859837;
    msg.lon = 0.985002962687;
    msg.z = 0.310536738922;
    msg.z_units = 157U;
    msg.amplitude = 0.997983108344;
    msg.pitch = 0.118454593906;
    msg.speed = 0.715215296413;
    msg.speed_units = 149U;
    msg.custom.assign("JLQRPHJJLYQZIUBYGNGHDDMXKVHCDLCYVGFIXWDSCSBHEEICWVMRVKSCANHMBFELHZFUOUWEMXRSBZIEPFYVVWBMIUFZWNTAFPZTQQNSKQXQR");

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
    msg.setTimeStamp(0.385376323202);
    msg.setSource(56056U);
    msg.setSourceEntity(39U);
    msg.setDestination(32106U);
    msg.setDestinationEntity(174U);
    msg.timeout = 58746U;
    msg.lat = 0.417700264242;
    msg.lon = 0.00619345392122;
    msg.z = 0.757919011248;
    msg.z_units = 80U;
    msg.amplitude = 0.515306768952;
    msg.pitch = 0.847889856447;
    msg.speed = 0.128688568572;
    msg.speed_units = 47U;
    msg.custom.assign("JCYUJDFQNDYZUTFKXHSRSIQYKCIZAAZHRLNVHMVWUSQRLCTNLELFBEDYJOOAHFHWHTZUNIQKGQTLBXNFJGXYQFMMCDLRXAPIJDKKVYESMCVIWCUEOGQAYNJAWPVPKUDMKCXIAXQHBBWSKSPRGJHMVJETDXMLIZTSBFQGLUNSOWKERAIDBNGM");

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
    msg.setTimeStamp(0.620224551994);
    msg.setSource(52128U);
    msg.setSourceEntity(196U);
    msg.setDestination(50234U);
    msg.setDestinationEntity(123U);

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
    msg.setTimeStamp(0.891332201268);
    msg.setSource(31427U);
    msg.setSourceEntity(81U);
    msg.setDestination(22155U);
    msg.setDestinationEntity(234U);

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
    msg.setTimeStamp(0.117637495392);
    msg.setSource(19391U);
    msg.setSourceEntity(21U);
    msg.setDestination(30371U);
    msg.setDestinationEntity(151U);

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
    msg.setTimeStamp(0.474881335918);
    msg.setSource(4086U);
    msg.setSourceEntity(222U);
    msg.setDestination(12267U);
    msg.setDestinationEntity(164U);
    msg.lat = 0.599648211102;
    msg.lon = 0.79322980525;
    msg.z = 0.52825300427;
    msg.z_units = 35U;
    msg.radius = 0.689069501125;
    msg.duration = 48078U;
    msg.speed = 0.781226162637;
    msg.speed_units = 100U;
    msg.popup_period = 1666U;
    msg.popup_duration = 8187U;
    msg.flags = 8U;
    msg.custom.assign("RQEGOBFSRZVLSQFGTZUJXVWYIHRCNSOOPBGMOTPSDLJHPRXKINCFYPKCKOBFIKAKRNAQELQFZVOSAJPZNFMZ");

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
    msg.setTimeStamp(0.387692480158);
    msg.setSource(34763U);
    msg.setSourceEntity(212U);
    msg.setDestination(2792U);
    msg.setDestinationEntity(41U);
    msg.lat = 0.5917312341;
    msg.lon = 0.943722743841;
    msg.z = 0.117421089913;
    msg.z_units = 209U;
    msg.radius = 0.986484744117;
    msg.duration = 41419U;
    msg.speed = 0.448234919909;
    msg.speed_units = 79U;
    msg.popup_period = 60045U;
    msg.popup_duration = 52698U;
    msg.flags = 214U;
    msg.custom.assign("AUMXBMNGZWAQQQHXQTDEVTOC");

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
    msg.setTimeStamp(0.39143436221);
    msg.setSource(45878U);
    msg.setSourceEntity(88U);
    msg.setDestination(40763U);
    msg.setDestinationEntity(123U);
    msg.lat = 0.460012659827;
    msg.lon = 0.639889345298;
    msg.z = 0.129977631702;
    msg.z_units = 165U;
    msg.radius = 0.908601408731;
    msg.duration = 47674U;
    msg.speed = 0.14855683682;
    msg.speed_units = 66U;
    msg.popup_period = 3205U;
    msg.popup_duration = 18263U;
    msg.flags = 105U;
    msg.custom.assign("DPHYUYQDCJHBWXLZTQKKXOJPDNRFBSQHBQBWBPMWYRLFSTQZIQUFVCGZYXNMMTTZKEXFNOFPMFSJMEDETDWZEOHVAYJIIKCBRMLVLYRZZASVPVFZFOPWXYGOYSVYIAJTACAPIEXDGDXHOKHCIJHWUAEBNNEOWYWCUHOBHZWCIVMSRGRUGAVNEGSGAKRAIVQ");

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
    msg.setTimeStamp(0.434726125612);
    msg.setSource(53893U);
    msg.setSourceEntity(23U);
    msg.setDestination(24916U);
    msg.setDestinationEntity(249U);
    msg.timeout = 41382U;
    msg.flags = 55U;
    msg.lat = 0.760111867072;
    msg.lon = 0.264556124074;
    msg.start_z = 0.475290531737;
    msg.start_z_units = 87U;
    msg.end_z = 0.154575312034;
    msg.end_z_units = 85U;
    msg.radius = 0.190782388685;
    msg.speed = 0.304092819265;
    msg.speed_units = 126U;
    msg.custom.assign("PJOAIPQQZGRMTASRAMCOMLXYJTA");

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
    msg.setTimeStamp(0.368614958569);
    msg.setSource(49698U);
    msg.setSourceEntity(62U);
    msg.setDestination(7607U);
    msg.setDestinationEntity(0U);
    msg.timeout = 41107U;
    msg.flags = 213U;
    msg.lat = 0.195254822228;
    msg.lon = 0.387699011621;
    msg.start_z = 0.316670365344;
    msg.start_z_units = 210U;
    msg.end_z = 0.630989329127;
    msg.end_z_units = 83U;
    msg.radius = 0.0997084966082;
    msg.speed = 0.586942515159;
    msg.speed_units = 6U;
    msg.custom.assign("QWDXWQXREDEEISGLDRROSDYACYZUSESUNTAICGBUBZARAJSMFIOUGDGNDMCFFPJATLLARZQJTBPBKCWFVOBXHHNCPFCHMKPVORUFAHQGPRIKQBSFWBCWHELINANMYDDVFDTBQVPTYLEZVYHBNGJZDKCLJKLEUWJOEXWFMPRUVHFJEUXZXZAKTQLJXKQMWKJSGZGOXUXKCIOWYSVHRJGISLVAIXONYTHQNM");

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
    msg.setTimeStamp(0.409330749722);
    msg.setSource(25862U);
    msg.setSourceEntity(136U);
    msg.setDestination(60465U);
    msg.setDestinationEntity(197U);
    msg.timeout = 32350U;
    msg.flags = 194U;
    msg.lat = 0.0137553730883;
    msg.lon = 0.624671092712;
    msg.start_z = 0.130649844035;
    msg.start_z_units = 66U;
    msg.end_z = 0.00419682775299;
    msg.end_z_units = 108U;
    msg.radius = 0.584715093468;
    msg.speed = 0.565753630109;
    msg.speed_units = 175U;
    msg.custom.assign("UQVTRPAGCCUYVRPDAVCXDNFWIMBGVXLGSGPATSFIESKMEDWOXCSXWOQZJLDLVKCKRSTOLAZUQOPZCDPYEVNSGKKJHHJUKVFGIGZIIFANMACMQXWPJDISCXSWQENYTYTFYOWXLCNWNFBQMNYMMRAEASZZWQJUHKNZJODEYPPYFAHDKOOHREUBLAGUGIQXPRHYMJLXRRTEYVBRUDOILSBWHEENTVHNUJJBCHRHVQJBILZUFL");

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
    msg.setTimeStamp(0.16433307098);
    msg.setSource(65045U);
    msg.setSourceEntity(74U);
    msg.setDestination(7877U);
    msg.setDestinationEntity(75U);
    msg.timeout = 46538U;
    msg.lat = 0.903596904903;
    msg.lon = 0.271416210584;
    msg.z = 0.822090733589;
    msg.z_units = 145U;
    msg.speed = 0.20482313975;
    msg.speed_units = 5U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.447255740933;
    tmp_msg_0.y = 0.0388115282103;
    tmp_msg_0.z = 0.311802264442;
    tmp_msg_0.t = 0.0572821505507;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("WQTWPPCBYVDTLEHNWZLJXUOXOSSIXAVSRRKTPEGGIFFYKA");

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
    msg.setTimeStamp(0.480052914547);
    msg.setSource(724U);
    msg.setSourceEntity(164U);
    msg.setDestination(54745U);
    msg.setDestinationEntity(79U);
    msg.timeout = 48486U;
    msg.lat = 0.988388439898;
    msg.lon = 0.347654979922;
    msg.z = 0.0714095228925;
    msg.z_units = 0U;
    msg.speed = 0.243301879384;
    msg.speed_units = 7U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.142229680089;
    tmp_msg_0.y = 0.136892189982;
    tmp_msg_0.z = 0.972537075215;
    tmp_msg_0.t = 0.737886289515;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("APGLBOVNUDCJCONPBSKJAVSQLEF");

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
    msg.setTimeStamp(0.690145880052);
    msg.setSource(1421U);
    msg.setSourceEntity(245U);
    msg.setDestination(63682U);
    msg.setDestinationEntity(187U);
    msg.timeout = 61540U;
    msg.lat = 0.0812045155592;
    msg.lon = 0.882305255172;
    msg.z = 0.763972588373;
    msg.z_units = 139U;
    msg.speed = 0.0632895460226;
    msg.speed_units = 155U;
    msg.custom.assign("VWHYEPLGZAGAIFOZINKNRHAHXJCUXONMJHYQAGTOLDCIEGFBJHMOPGWZTBKISEVFVULKSKGYAEETZQTHJGDDB");

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
    msg.setTimeStamp(0.883683200248);
    msg.setSource(61246U);
    msg.setSourceEntity(108U);
    msg.setDestination(569U);
    msg.setDestinationEntity(130U);
    msg.x = 0.368880987076;
    msg.y = 0.170285933852;
    msg.z = 0.691056660745;
    msg.t = 0.717617486192;

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
    msg.setTimeStamp(0.72823949627);
    msg.setSource(59755U);
    msg.setSourceEntity(248U);
    msg.setDestination(57737U);
    msg.setDestinationEntity(16U);
    msg.x = 0.779363016577;
    msg.y = 0.538188903455;
    msg.z = 0.503106270179;
    msg.t = 0.129640235649;

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
    msg.setTimeStamp(0.279418801943);
    msg.setSource(10659U);
    msg.setSourceEntity(155U);
    msg.setDestination(63323U);
    msg.setDestinationEntity(50U);
    msg.x = 0.401897131449;
    msg.y = 0.589003646752;
    msg.z = 0.859193424677;
    msg.t = 0.818026102306;

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
    msg.setTimeStamp(0.0830260004739);
    msg.setSource(19519U);
    msg.setSourceEntity(24U);
    msg.setDestination(49907U);
    msg.setDestinationEntity(85U);
    msg.timeout = 63478U;
    msg.name.assign("GMPTXJZUNTDWVHSFZUPFKEUNAUBSIOYYHXYLDCNRRXQHXVHLNOJLVAEEHXLJUYRIPYBCCFXZWHKQIFOIGYYNWDNRZURWAVABQULBXSEJKBJZBYAWOTEHADEYENOOGMZNBCHFASQPQQKRBPWKFTDRBPXIJADITQFGRASCSHZSLINJTKJGVYGEJOMLPXVLOFTZROLSQUIFQVPDBMICZWWXCNRKZKDVMSMICGJUMPMTDGVCHSKDETKAFGVW");
    msg.custom.assign("MWJCGONTZIAEZSISEJQHNZCAUE");

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
    msg.setTimeStamp(0.652735550359);
    msg.setSource(21690U);
    msg.setSourceEntity(190U);
    msg.setDestination(33029U);
    msg.setDestinationEntity(29U);
    msg.timeout = 40193U;
    msg.name.assign("LXQRVRZVBBSQFNLICTLWTAOPPAFELFOVMIWKREDNXCTRJSAYGQJLOZJZCDRSZCSWQXFGINGOKBIPVOPDPNFSEPTGMDSEHGK");
    msg.custom.assign("QPVXNEJQTNZDSDJEIVKJSWRTXLVCVZMUSLFYLOSEZCGRRR");

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
    msg.setTimeStamp(0.581855813083);
    msg.setSource(39822U);
    msg.setSourceEntity(177U);
    msg.setDestination(61412U);
    msg.setDestinationEntity(58U);
    msg.timeout = 62444U;
    msg.name.assign("DGWUPBKVLAPPWVIQSIORFMICCGAUOXHUBTANCEYOPGRXVLCYUQXKZTKULFZJXAXOVUVHIZIHXZDYYJWBPQZNTETDUJPW");
    msg.custom.assign("SYFTKBUXSPYRENZAUTHCDFCOARZXQGBDAHUYNZIRIPHGHNEDAPWSCLVNBRJPPJEAHDEZKPHMLGXIFQKLMVTQMISMXMYQYGCBQVNMCVJVJBZOZNXMYSXUMKCJZIWIUKLXVKVQKTELXTONGFFDPUNIDQGHNCIOJTRURWLEMIBWEZTADLQSBHTNFQCDRPSLDYBZRPWAVGJWWVJFK");

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
    msg.setTimeStamp(0.32442300886);
    msg.setSource(11203U);
    msg.setSourceEntity(136U);
    msg.setDestination(35733U);
    msg.setDestinationEntity(51U);
    msg.lat = 0.853866257418;
    msg.lon = 0.800270994362;
    msg.z = 0.402769717757;
    msg.z_units = 41U;
    msg.speed = 0.199624695954;
    msg.speed_units = 160U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.355340467275;
    tmp_msg_0.y = 0.273077042766;
    tmp_msg_0.z = 0.597586522808;
    tmp_msg_0.t = 0.862113995018;
    msg.points.push_back(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 54601U;
    tmp_msg_1.off_x = 0.410275759736;
    tmp_msg_1.off_y = 0.904095041735;
    tmp_msg_1.off_z = 0.64541910551;
    msg.participants.push_back(tmp_msg_1);
    msg.start_time = 0.831712971435;
    msg.custom.assign("BHQECMZGSKWNFYTKGBFEVCQTWLHFWQUZDNPRSOVIVAVTWZERADWGPJDPKLVOUKKV");

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
    msg.setTimeStamp(0.204008967533);
    msg.setSource(39733U);
    msg.setSourceEntity(184U);
    msg.setDestination(55737U);
    msg.setDestinationEntity(174U);
    msg.lat = 0.142532808688;
    msg.lon = 0.241986326179;
    msg.z = 0.713556654854;
    msg.z_units = 71U;
    msg.speed = 0.58828404613;
    msg.speed_units = 77U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.716401445158;
    tmp_msg_0.y = 0.884952806684;
    tmp_msg_0.z = 0.84185693411;
    tmp_msg_0.t = 0.0436152184912;
    msg.points.push_back(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 24989U;
    tmp_msg_1.off_x = 0.203798347377;
    tmp_msg_1.off_y = 0.135557658956;
    tmp_msg_1.off_z = 0.618300577856;
    msg.participants.push_back(tmp_msg_1);
    msg.start_time = 0.499493940152;
    msg.custom.assign("FXUWYNFRJYEOSEDYAQWQZSGBXOYGQVVWILKSPKNJIZZPIUZLRAQLJFDXQMCKCENXMEWILDBMRUETVYGJCROXJTGAYYMDSRXPHWMGACSISCVQLDKZBFWDKTPIOUTHBAVPFVUHOJYSBODPCDLVICTEVTUBLKIBAUUIMGQVTNGHMJXVZBXFUOMRBJZWPWHSGHLZNNNKJC");

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
    msg.setTimeStamp(0.154354707333);
    msg.setSource(24980U);
    msg.setSourceEntity(246U);
    msg.setDestination(9043U);
    msg.setDestinationEntity(186U);
    msg.lat = 0.671660051844;
    msg.lon = 0.292302785747;
    msg.z = 0.533562153782;
    msg.z_units = 176U;
    msg.speed = 0.185873977465;
    msg.speed_units = 38U;
    msg.start_time = 0.0708567514927;
    msg.custom.assign("CLEVAWRXMUYFFVRTXBBOOHDVGJBMWLZFYOVDYIWXMQLNGACXMOUCUKSWGCKWHKZJJUMPPNWZOYSNRXYEAPAZADJNJDZHUTJPYDNGCIGFIRVLLQRMEBDIKLEQGYLUATHCSCVIPRRTKHHZBTBJUWKWVNAOQKZSHTFTSPMYDUPJIBVSAYNEIC");

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
    msg.setTimeStamp(0.395396638081);
    msg.setSource(24648U);
    msg.setSourceEntity(209U);
    msg.setDestination(53320U);
    msg.setDestinationEntity(27U);
    msg.vid = 42587U;
    msg.off_x = 0.011046631323;
    msg.off_y = 0.891577052964;
    msg.off_z = 0.226298528074;

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
    msg.setTimeStamp(0.293352494201);
    msg.setSource(28977U);
    msg.setSourceEntity(146U);
    msg.setDestination(46814U);
    msg.setDestinationEntity(127U);
    msg.vid = 29729U;
    msg.off_x = 0.0391967969377;
    msg.off_y = 0.881123492369;
    msg.off_z = 0.153137695916;

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
    msg.setTimeStamp(0.235321558678);
    msg.setSource(21678U);
    msg.setSourceEntity(130U);
    msg.setDestination(53639U);
    msg.setDestinationEntity(235U);
    msg.vid = 7326U;
    msg.off_x = 0.247434102771;
    msg.off_y = 0.397347113294;
    msg.off_z = 0.853844917982;

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
    msg.setTimeStamp(0.507070298174);
    msg.setSource(13810U);
    msg.setSourceEntity(122U);
    msg.setDestination(63703U);
    msg.setDestinationEntity(130U);

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
    msg.setTimeStamp(0.634790193055);
    msg.setSource(46095U);
    msg.setSourceEntity(193U);
    msg.setDestination(22734U);
    msg.setDestinationEntity(181U);

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
    msg.setTimeStamp(0.00570811831106);
    msg.setSource(7831U);
    msg.setSourceEntity(21U);
    msg.setDestination(58159U);
    msg.setDestinationEntity(82U);

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
    msg.setTimeStamp(0.871414917023);
    msg.setSource(56615U);
    msg.setSourceEntity(180U);
    msg.setDestination(37879U);
    msg.setDestinationEntity(247U);
    msg.mid = 55489U;

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
    msg.setTimeStamp(0.111772029169);
    msg.setSource(62930U);
    msg.setSourceEntity(65U);
    msg.setDestination(46426U);
    msg.setDestinationEntity(114U);
    msg.mid = 47109U;

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
    msg.setTimeStamp(0.896050056827);
    msg.setSource(16732U);
    msg.setSourceEntity(108U);
    msg.setDestination(20666U);
    msg.setDestinationEntity(15U);
    msg.mid = 9879U;

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
    msg.setTimeStamp(0.717482913504);
    msg.setSource(46171U);
    msg.setSourceEntity(127U);
    msg.setDestination(57484U);
    msg.setDestinationEntity(93U);
    msg.state = 111U;
    msg.eta = 42053U;
    msg.info.assign("EPBSWNLFMHTUKWRJCOYQJYMAHTBTJIMTJMGONVPBPAWDBMCKOKEGDZIPXGXQRVUZYQSNGDFBKMIHEIBUFJENJYJEQSZAZPXGQVVIJLVCUERXSCNLMMUELQYWXBPZQWEUAHCSJZOTKFCHMNSTGRRXCKBWXZDPFCVRCHFWLQYWBKIAAHDOAVAQKNUKWLDVGVIZEBWXYDCUEIIDRODTZSIJRLFK");

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
    msg.setTimeStamp(0.550356390817);
    msg.setSource(11925U);
    msg.setSourceEntity(149U);
    msg.setDestination(13039U);
    msg.setDestinationEntity(74U);
    msg.state = 242U;
    msg.eta = 16091U;
    msg.info.assign("NKOBAESJCSWOTCOZQHDYOTEHJURBIRKFKTVQVSOBVJDAOVAUSMVFCZIURUVHZPZJBYAFZJLBVNPQSXTUUHIDRDZTGGPCUMTVZEFHNFJICFYDYPTQKLBLIMKSRPUEVVGZCOXQLUAYEYWS");

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
    msg.setTimeStamp(0.195004807143);
    msg.setSource(39281U);
    msg.setSourceEntity(37U);
    msg.setDestination(43997U);
    msg.setDestinationEntity(105U);
    msg.state = 64U;
    msg.eta = 43130U;
    msg.info.assign("IDPIPJODBBYTWBRZDDRAESWGIOVWBQMPYKMQUG");

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
    msg.setTimeStamp(0.966563117713);
    msg.setSource(60255U);
    msg.setSourceEntity(219U);
    msg.setDestination(39493U);
    msg.setDestinationEntity(87U);
    msg.system = 56669U;
    msg.duration = 43894U;
    msg.speed = 0.667774750566;
    msg.speed_units = 61U;
    msg.x = 0.420497218886;
    msg.y = 0.0834310276774;
    msg.z = 0.807500734939;
    msg.z_units = 157U;

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
    msg.setTimeStamp(0.641837649838);
    msg.setSource(27056U);
    msg.setSourceEntity(77U);
    msg.setDestination(20787U);
    msg.setDestinationEntity(110U);
    msg.system = 45823U;
    msg.duration = 42305U;
    msg.speed = 0.00160058676865;
    msg.speed_units = 63U;
    msg.x = 0.681355480789;
    msg.y = 0.726341165974;
    msg.z = 0.152532356694;
    msg.z_units = 109U;

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
    msg.setTimeStamp(0.0240331168815);
    msg.setSource(30414U);
    msg.setSourceEntity(200U);
    msg.setDestination(7147U);
    msg.setDestinationEntity(30U);
    msg.system = 40564U;
    msg.duration = 63656U;
    msg.speed = 0.875460020498;
    msg.speed_units = 183U;
    msg.x = 0.0820119527581;
    msg.y = 0.0801694977502;
    msg.z = 0.271343646818;
    msg.z_units = 220U;

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
    msg.setTimeStamp(0.991983666139);
    msg.setSource(24917U);
    msg.setSourceEntity(84U);
    msg.setDestination(30736U);
    msg.setDestinationEntity(121U);
    msg.lat = 0.345805417637;
    msg.lon = 0.0343199262802;
    msg.speed = 0.650035676556;
    msg.speed_units = 36U;
    msg.duration = 32568U;
    msg.sys_a = 14535U;
    msg.sys_b = 48267U;
    msg.move_threshold = 0.0994362720274;

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
    msg.setTimeStamp(0.210257134127);
    msg.setSource(15519U);
    msg.setSourceEntity(110U);
    msg.setDestination(28478U);
    msg.setDestinationEntity(148U);
    msg.lat = 0.217801806005;
    msg.lon = 0.572644831988;
    msg.speed = 0.219134158421;
    msg.speed_units = 5U;
    msg.duration = 28462U;
    msg.sys_a = 50555U;
    msg.sys_b = 28973U;
    msg.move_threshold = 0.00932911027154;

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
    msg.setTimeStamp(0.0874013190062);
    msg.setSource(29811U);
    msg.setSourceEntity(97U);
    msg.setDestination(32029U);
    msg.setDestinationEntity(63U);
    msg.lat = 0.294438163763;
    msg.lon = 0.199932135063;
    msg.speed = 0.038111381844;
    msg.speed_units = 140U;
    msg.duration = 55688U;
    msg.sys_a = 9597U;
    msg.sys_b = 65401U;
    msg.move_threshold = 0.618017431864;

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
    msg.setTimeStamp(0.881463495575);
    msg.setSource(33387U);
    msg.setSourceEntity(251U);
    msg.setDestination(7150U);
    msg.setDestinationEntity(241U);
    msg.lat = 0.948137833087;
    msg.lon = 0.769132118648;
    msg.z = 0.635310525247;
    msg.z_units = 20U;
    msg.speed = 0.868300783622;
    msg.speed_units = 22U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.791636580101;
    tmp_msg_0.lon = 0.117357946183;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("MUPLXVVBYDZTUCOIELWMURNEJTBCRHCECXZPJBKISCCAJEABUYKQDVRIWVQJKQRDFNLYKXPQAWGFGYKWFOWQL");

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
    msg.setTimeStamp(0.50018129083);
    msg.setSource(5415U);
    msg.setSourceEntity(31U);
    msg.setDestination(30623U);
    msg.setDestinationEntity(50U);
    msg.lat = 0.720654565246;
    msg.lon = 0.753507605684;
    msg.z = 0.135849803163;
    msg.z_units = 195U;
    msg.speed = 0.960406174286;
    msg.speed_units = 194U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.183290449644;
    tmp_msg_0.lon = 0.45339839374;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("SPVKLMHXHJMRCDQRIYAACCIUNNHRFRDJKBQORGKDEJVZYLBVBCAAHUKZILORTMBACFUTQSKXMMQQVJDBZFPPGGTSHFSVGEGICXTQSNEGPWIOYTSLGXFTDJPGNYWIVHDLIYLZAEOAVMFWSUXNBMERGFXSECLLMYZIVEBQNJXNKWNKBDOOUOKPGJTWUFIZOOYEAFRAEHZNDUYUVYJIRCKYXNAQQHPHLCMTFBWPPUQZLSSEVTWZKDJWJPZWMDHRT");

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
    msg.setTimeStamp(0.315385789438);
    msg.setSource(22840U);
    msg.setSourceEntity(128U);
    msg.setDestination(9880U);
    msg.setDestinationEntity(139U);
    msg.lat = 0.582552812629;
    msg.lon = 0.471030193659;
    msg.z = 0.90861176325;
    msg.z_units = 226U;
    msg.speed = 0.499028227067;
    msg.speed_units = 156U;
    msg.custom.assign("VLCXSHFHGRHVSCDZEXWOJSTYCWGOUOTKBBCILMKDMQVXAODHDQRGHMSFPCKAJPENBSNWUVWWYUVAHVNCTJAQOZUONGKTPDPBIAPCZYVVMEUBBLTDADTZLOKRGXBJNQXGSARPLILKFUSXRKXFZXNJWSIMRFYFMZTBVQYOQZKQMYIZMWLONDTCNYELWREOQGFKPUPPRQEJDLEGKGFYACCSIFIJXEHSIVAWZM");

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
    msg.setTimeStamp(0.0303848978777);
    msg.setSource(60921U);
    msg.setSourceEntity(13U);
    msg.setDestination(51920U);
    msg.setDestinationEntity(35U);
    msg.lat = 0.65518015299;
    msg.lon = 0.289584241606;

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
    msg.setTimeStamp(0.424027554518);
    msg.setSource(25238U);
    msg.setSourceEntity(41U);
    msg.setDestination(42661U);
    msg.setDestinationEntity(218U);
    msg.lat = 0.513244972982;
    msg.lon = 0.57651498586;

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
    msg.setTimeStamp(0.514560819684);
    msg.setSource(10773U);
    msg.setSourceEntity(64U);
    msg.setDestination(45489U);
    msg.setDestinationEntity(191U);
    msg.lat = 0.563499884237;
    msg.lon = 0.584946235378;

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
    msg.setTimeStamp(0.61899098775);
    msg.setSource(48070U);
    msg.setSourceEntity(153U);
    msg.setDestination(9115U);
    msg.setDestinationEntity(63U);
    msg.timeout = 43273U;
    msg.lat = 0.231350409213;
    msg.lon = 0.830614472957;
    msg.z = 0.769105558598;
    msg.z_units = 204U;
    msg.pitch = 0.143358198255;
    msg.amplitude = 0.289908544448;
    msg.duration = 15059U;
    msg.speed = 0.290038425281;
    msg.speed_units = 66U;
    msg.radius = 0.408512531797;
    msg.direction = 231U;
    msg.custom.assign("IHJJWFZMOLJP");

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
    msg.setTimeStamp(0.0389968945263);
    msg.setSource(60666U);
    msg.setSourceEntity(230U);
    msg.setDestination(37194U);
    msg.setDestinationEntity(63U);
    msg.timeout = 8788U;
    msg.lat = 0.29805408221;
    msg.lon = 0.154010690195;
    msg.z = 0.264493507857;
    msg.z_units = 76U;
    msg.pitch = 0.00898686814925;
    msg.amplitude = 0.123189718697;
    msg.duration = 6677U;
    msg.speed = 0.268115934086;
    msg.speed_units = 136U;
    msg.radius = 0.598961680886;
    msg.direction = 159U;
    msg.custom.assign("QTGYSPHHTANMWKFMJTUMATPWOZPPSGSDXZTHREDYNCDOWKWZGMIZOWKVLQACTBZYPMUXXACZJVRDVLFKOQXLSAXPAJLGWQBEMXQAKMBWLRXBSFZGHJPMXOGDZLNWXQHZIAEGURVYGLRUBNHJRIKKEIPLQVYJYOIQJJVUZMBNXYBNCNKTUECGFVIIHRUVNMTSKNYLFWIDUAKFECSBJLYIBVREHGSHHOPOCEEQCJRCCNPFTFOYSTEA");

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
    msg.setTimeStamp(0.419627592001);
    msg.setSource(28051U);
    msg.setSourceEntity(104U);
    msg.setDestination(20331U);
    msg.setDestinationEntity(145U);
    msg.timeout = 35464U;
    msg.lat = 0.458370555271;
    msg.lon = 0.26017427476;
    msg.z = 0.340988447113;
    msg.z_units = 84U;
    msg.pitch = 0.617113367595;
    msg.amplitude = 0.114889213385;
    msg.duration = 52670U;
    msg.speed = 0.820558942617;
    msg.speed_units = 146U;
    msg.radius = 0.0520743910328;
    msg.direction = 98U;
    msg.custom.assign("CBOTGTZYVPJTFSDWOUFHIZRGOUNVCJZYWENUDYKKREBOQYJXMZWWQSZESNHMPBVPNWFAFBORIPSJKKMWTTGLQTDZHRJFXWCQRPFGDDKYZOUIYANKSYLAPSEPVTCJSMYAUYCXMPBXABWHMHKBRGCEXAUGQCZMQGIMXDXTGFBXCKELVMNLDXEKLFTYGVOUOHGSUHZRILIHBHMJQCINJEEACARNRUVRNP");

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
    msg.setTimeStamp(0.944726340835);
    msg.setSource(39647U);
    msg.setSourceEntity(225U);
    msg.setDestination(25671U);
    msg.setDestinationEntity(108U);
    msg.formation_name.assign("FSENWFEIYENVFAUXHNZLOQUGETMQTQXDENPBITIUSMADIBNAGQWMJYDIAJGVQMANPZTXMSXSLOPKKCZLXVHXJRUDZKWGTSOLZXJXDVDHEBSCDZJGCCDCVESHTLVYWRRYJWYHVBPTXOQUAKZMAOYZVOBTJUTWHSPPYUFPQYMBBMONPIHACXLAUGGNUFCRITGKLOERKZWOFFIJIDBKVLJKMEOPUFFNHKZV");
    msg.reference_frame = 148U;
    msg.custom.assign("HXDJFMQIXWAWZEJTFMHXGAKFWOJDKCLPDICLSLGVACFDPFZOKTNETQNRSYLTXYZKHUSVDKUIQNAUFESQBGJIAROPNVRWJHNSCSFUUTAVQVNAMOSBOTODPMLVZKDTOERYNXTMYVBG");

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
    msg.setTimeStamp(0.558693532144);
    msg.setSource(8775U);
    msg.setSourceEntity(206U);
    msg.setDestination(1630U);
    msg.setDestinationEntity(136U);
    msg.formation_name.assign("QJLIVKZGFOGCGSXVVMPFLWHDNADNPFWTZUIXBRLTLXFNCEYPEJGYSGFYRSWZEFQKQYTEXEYISKVVUCHQZRPLMIXNUNZQHCUJCVXILPPAIB");
    msg.reference_frame = 87U;
    msg.custom.assign("NTZKSBGZYIPWBFMRDADLFEWKHGHGWSTKUAPIZQRPQJJRFJSUQVVGEWGAAFVYPDWTLXGGVGBHYUMTSPNTLMRWKUKDMSQRKXAEQHIUF");

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
    msg.setTimeStamp(0.555682054948);
    msg.setSource(24816U);
    msg.setSourceEntity(251U);
    msg.setDestination(59460U);
    msg.setDestinationEntity(61U);
    msg.formation_name.assign("BXGCWFKPTJQVHVCKEOZETEQINRYBEUDUZNVRREIDVFOFONHFMMEDJYEBDMKCNOPXBFLGKZLDZWPOZQWOPDLILJWVONSMSTTYDJFRKRQMKUCIPOGGHXTTELWWAZIEUPDBZRGTSVUOJAZSGRJBASZUJQSXRFAUWUCXCXIHIGYQCPTWXVKHBXYFIZSUTACOCJMQHGVXATJUPKBIRQMANSEMKLYPYVFGSYWNJQPARLNABKHLHQMAY");
    msg.reference_frame = 163U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 49593U;
    tmp_msg_0.off_x = 0.329295413553;
    tmp_msg_0.off_y = 0.432532904411;
    tmp_msg_0.off_z = 0.7999173145;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("EQLJHXVBSCCPHOVFNEMJYQRQTRBJVIILRBJIPRAGWWTNMTDQFUUPHZSTJLPAJFDCYJEUDLMEOLLQABPXISGJCSSXNCWKRUNHIVVWSWTXDVCIAKBNZGPFVDDTQFEXYGWBVXGIXYUFLIWRPDGNAJGBKTCANOHECPTBQXNIYEUQFL");

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
    msg.setTimeStamp(0.284145030373);
    msg.setSource(4735U);
    msg.setSourceEntity(29U);
    msg.setDestination(4111U);
    msg.setDestinationEntity(108U);
    msg.group_name.assign("UXVXBDXGYEUFHRNZIVLKFHVVJJALVXGSZEVLDPIUZXRTTAWHGCROYCDPEDOZLSHNOQMPFZGCORMLMOMOZBCFTKOQAIMLBJFPVGIATJHNTTHWHEVJAASECJYOTGUJXXYXIWAZLFEPUQKWIQDCTQYZEBKGQICPZWMUYHGTFBWXYKSNZIQBCMRQKXNTMRVUDRNDKDFBQRSAC");
    msg.formation_name.assign("IWLXKDIMIIVPDKBPHHMUYKRUAPIURONWGTIHBCVFLGJYPXEVRRMDULTO");
    msg.plan_id.assign("LPBHTEHMPFHSLCUTAFIVXAPQCEOCZUEDFSAWCJXNUBIXJTRGSYMJWOAFSUDZWINILWLCGADZBDVUKOCARRMDFNDSYRGBVIIXQJDWJLRTKQTEBYJVQTCOSGMUYMHFLHLSYPMUKLATXZEPRWKJYVYNYMYSCZHQRMUNHFEPPOBAVEBAFWNXEISAGHNNWKMIGTLCSPNOFUXKPNDJQCQOZBMFKXOYDUXGVWEOK");
    msg.description.assign("LTALMTUMSDTGAQWWBLKPWCPUFQHMFBXJKLUMVVDRTABKCRMYJHNBSRCEJYBFQHLGQMJENBEOPTFOOGULUEEFYQPXPXDDRIJRWVKOEZBZQODTKRNIJDNUWAKQIUXVJLWXOGHIPZIZBKTAGHIX");
    msg.leader_speed = 0.0880942474779;
    msg.leader_bank_lim = 0.967265192432;
    msg.pos_sim_err_lim = 0.852779871478;
    msg.pos_sim_err_wrn = 0.556195183601;
    msg.pos_sim_err_timeout = 38911U;
    msg.converg_max = 0.0593176119125;
    msg.converg_timeout = 21099U;
    msg.comms_timeout = 15422U;
    msg.turb_lim = 0.0991585308142;
    msg.custom.assign("YFSIIUVQWIIMXRBWYTHISTDXJGJDJSPAYWVRYMUNPBQQEBNMDZLLCLWIPMVDXMQPVK");

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
    msg.setTimeStamp(0.0410004869456);
    msg.setSource(46613U);
    msg.setSourceEntity(16U);
    msg.setDestination(39022U);
    msg.setDestinationEntity(250U);
    msg.group_name.assign("ETWGITDPDUNCDEFJMAGKQVZXRNDCUFXVKTKJDZCZAVFKWTOLKUVAGVMFJBVMFCWLMLUVCCEWFBWUPISMNMEJYETSQIPRWCIRKOBHBMXTNRXEOKWOGUHUQJHHDXNSKMYARFQOBEZDSFAIGPVBZMHWPYQQOWXPVELPLXVDISNJBGQRUNBILLSKOJJGCUSYQZXOAH");
    msg.formation_name.assign("MRCHYHXNDLJPPWADPBOGRVTMZGULYBCWNAHFGLCISETFKKSFYASSQKMAHWSYPCBTBUFKDCOTQUNQATHJPQLZORRGVXXAIMXWTFMSDHXNTFIPQUWYBDZUFBTXQRFGYLREQQGZKVOZFDGSBUD");
    msg.plan_id.assign("BZNUIKVWCITWIBDKTDDOCATXTXIHDZERWUESKBRKEJOKQMDECKQLLAAVNJVVSCUJVPLGEPRFCSRXFQFGXWOQMWOJHHRGBMUXKTNQNHLUYQNEPEOHEPZWNHMSQUIUYACPZKVVEZHFAWFRODRM");
    msg.description.assign("UAABRMNPSYGWJOVVRWHMVXJSRINPKPYQSUQTUDRHTHVRVLOSXQXQITJZOHQEDKM");
    msg.leader_speed = 0.249186987503;
    msg.leader_bank_lim = 0.892472365173;
    msg.pos_sim_err_lim = 0.714156300891;
    msg.pos_sim_err_wrn = 0.186027126391;
    msg.pos_sim_err_timeout = 30146U;
    msg.converg_max = 0.569351585773;
    msg.converg_timeout = 26515U;
    msg.comms_timeout = 8772U;
    msg.turb_lim = 0.683203096594;
    msg.custom.assign("ZSQLQJLKLRLGCGPMDMFMWEAEFIHCDGHPTIFXDZVXSOQDMURWJMCRYXPWTTJVDWTAGXFUEOJGVBAKSUBZLLDLNMSZKMIVMPTUOPETPZCOWVKBRGBSASKNAYVHSTHFZUWBZKYRQDZUIAMSFXNYNAMOUOPFKWVJNXSRQOYTINHKENSCEQEPRJVVZAACHGEQBQZJXUPCLVPEGLBJITRDIWKYUTIBFNKDHBOGNYJRDUYJOHWWOCYBN");

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
    msg.setTimeStamp(0.794154366519);
    msg.setSource(54609U);
    msg.setSourceEntity(231U);
    msg.setDestination(10976U);
    msg.setDestinationEntity(4U);
    msg.group_name.assign("UGTONLXCZYHTQNDGSJUBCIROHMPJVJQAXMZLVHUWDUWXHICBWVVQHANTLZASDHJDPVTLKBLZNZAHHJPQGFGWNBFMAIKQSDZULSFOFDBQTZGKOTYOURHGXMGBLCJESUXEBOTUTCEJFXIIANCVBLBRTJVVRYSM");
    msg.formation_name.assign("YFVFIAAZIJLGNVHYKCZWZIFJSSYCBNFPPWCXVPEPKNYFQKDHJOTQZQOYGLASJCXWWSZSLLQNRTXZAORQZZYSTZFRVSMWJDEVUMAWJGXUVDEUKAOBWOITDA");
    msg.plan_id.assign("BOEDKDGCDXYDIRYLYSBKCYTWPJSJFNQUJQJUHIDZLLMVVKPXLOBNFVNYVHTGUJATGFJZHROPPEREAYGRXYONGRDAQLSIBCNPSVHAVUGIXBQKRKFLUKRQTWQ");
    msg.description.assign("YMRPJHCBRDGZLSSOTMAVTWMWPFJSKVUVJOTKCUUCLUZNXASWQGPYKVZTBWXFLYQBUSZRLPMOGEHKDXJHNWRLSFYPVXDKHGNBILAEIYFBPIMGKWAUCUZXZYHCTKXFRBCKJCQNFAGNEFJTTODNHBPYJIZGRKDJBVCUOGSMIROZRCEII");
    msg.leader_speed = 0.126348794066;
    msg.leader_bank_lim = 0.728957230778;
    msg.pos_sim_err_lim = 0.395741564505;
    msg.pos_sim_err_wrn = 0.0762780522665;
    msg.pos_sim_err_timeout = 1185U;
    msg.converg_max = 0.726861638496;
    msg.converg_timeout = 52543U;
    msg.comms_timeout = 11782U;
    msg.turb_lim = 0.765575914849;
    msg.custom.assign("GLHUZQWRIPUNXDOAFECUEXCNJYXTAPGMLFNISLHVUCTWBGEGJPSBCYCIFIHDUYDEZZAXZOAKGJTHMDNFCHTZQQWURGKXAPPZAWXKAOFISMTSXPOJEPMQSWVFNVASCFLYTLHQCHPCMLJPRWDFHONMJRLYZUBODNQQISKHSMEGUP");

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
    msg.setTimeStamp(0.563350464112);
    msg.setSource(32606U);
    msg.setSourceEntity(119U);
    msg.setDestination(13412U);
    msg.setDestinationEntity(196U);
    msg.control_src = 34632U;
    msg.control_ent = 165U;
    msg.timeout = 0.261864829718;
    msg.loiter_radius = 0.358107319108;
    msg.altitude_interval = 0.235969026753;

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
    msg.setTimeStamp(0.52015659966);
    msg.setSource(3995U);
    msg.setSourceEntity(204U);
    msg.setDestination(58541U);
    msg.setDestinationEntity(35U);
    msg.control_src = 54239U;
    msg.control_ent = 64U;
    msg.timeout = 0.949952492511;
    msg.loiter_radius = 0.473652173773;
    msg.altitude_interval = 0.00389559390523;

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
    msg.setTimeStamp(0.0302416628237);
    msg.setSource(47964U);
    msg.setSourceEntity(200U);
    msg.setDestination(60837U);
    msg.setDestinationEntity(233U);
    msg.control_src = 12857U;
    msg.control_ent = 200U;
    msg.timeout = 0.79442857843;
    msg.loiter_radius = 0.759826476175;
    msg.altitude_interval = 0.157607440829;

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
    msg.setTimeStamp(0.129254810708);
    msg.setSource(54128U);
    msg.setSourceEntity(178U);
    msg.setDestination(38387U);
    msg.setDestinationEntity(113U);
    msg.flags = 230U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.255068141558;
    tmp_msg_0.speed_units = 60U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.160982560045;
    tmp_msg_1.z_units = 181U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.0140249139942;
    msg.lon = 0.408977085988;
    msg.radius = 0.835670959653;

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
    msg.setTimeStamp(0.160973969511);
    msg.setSource(27596U);
    msg.setSourceEntity(166U);
    msg.setDestination(54745U);
    msg.setDestinationEntity(74U);
    msg.flags = 61U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.778859978444;
    tmp_msg_0.speed_units = 23U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.429804844001;
    tmp_msg_1.z_units = 111U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.0964363858572;
    msg.lon = 0.0889067737811;
    msg.radius = 0.276642564089;

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
    msg.setTimeStamp(0.416762212663);
    msg.setSource(26743U);
    msg.setSourceEntity(67U);
    msg.setDestination(33035U);
    msg.setDestinationEntity(47U);
    msg.flags = 76U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.548851969827;
    tmp_msg_0.speed_units = 177U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.786966118074;
    tmp_msg_1.z_units = 40U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.64867165473;
    msg.lon = 0.274825110268;
    msg.radius = 0.0447280445683;

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
    msg.setTimeStamp(0.387085062858);
    msg.setSource(23152U);
    msg.setSourceEntity(124U);
    msg.setDestination(62804U);
    msg.setDestinationEntity(162U);
    msg.control_src = 48886U;
    msg.control_ent = 197U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 233U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.287291875721;
    tmp_tmp_msg_0_0.speed_units = 51U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.238341189107;
    tmp_tmp_msg_0_1.z_units = 131U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.476761722858;
    tmp_msg_0.lon = 0.309215474146;
    tmp_msg_0.radius = 0.836502520174;
    msg.reference.set(tmp_msg_0);
    msg.state = 203U;
    msg.proximity = 123U;

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
    msg.setTimeStamp(0.924701550783);
    msg.setSource(32485U);
    msg.setSourceEntity(105U);
    msg.setDestination(30943U);
    msg.setDestinationEntity(143U);
    msg.control_src = 56926U;
    msg.control_ent = 183U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 62U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.563832772459;
    tmp_tmp_msg_0_0.speed_units = 154U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.541443128544;
    tmp_tmp_msg_0_1.z_units = 65U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.887723272426;
    tmp_msg_0.lon = 0.168603437859;
    tmp_msg_0.radius = 0.229125388105;
    msg.reference.set(tmp_msg_0);
    msg.state = 231U;
    msg.proximity = 240U;

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
    msg.setTimeStamp(0.872434689636);
    msg.setSource(40724U);
    msg.setSourceEntity(216U);
    msg.setDestination(44289U);
    msg.setDestinationEntity(108U);
    msg.control_src = 50333U;
    msg.control_ent = 153U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 120U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.584150538524;
    tmp_tmp_msg_0_0.speed_units = 104U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.510080415769;
    tmp_tmp_msg_0_1.z_units = 41U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.0979292445396;
    tmp_msg_0.lon = 0.362648023393;
    tmp_msg_0.radius = 0.133828260233;
    msg.reference.set(tmp_msg_0);
    msg.state = 81U;
    msg.proximity = 219U;

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
    msg.setTimeStamp(0.535490092708);
    msg.setSource(12982U);
    msg.setSourceEntity(106U);
    msg.setDestination(23508U);
    msg.setDestinationEntity(111U);
    msg.ax_cmd = 0.838165804601;
    msg.ay_cmd = 0.845197252556;
    msg.az_cmd = 0.788223955658;
    msg.ax_des = 0.900386616279;
    msg.ay_des = 0.335576743934;
    msg.az_des = 0.245719121246;
    msg.virt_err_x = 0.207561767829;
    msg.virt_err_y = 0.427953741802;
    msg.virt_err_z = 0.648899366238;
    msg.surf_fdbk_x = 0.952768081005;
    msg.surf_fdbk_y = 0.890763985386;
    msg.surf_fdbk_z = 0.478603795175;
    msg.surf_unkn_x = 0.991878686963;
    msg.surf_unkn_y = 0.977741571647;
    msg.surf_unkn_z = 0.264135135393;
    msg.ss_x = 0.820886629297;
    msg.ss_y = 0.624195776205;
    msg.ss_z = 0.42867448894;

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
    msg.setTimeStamp(0.0210529610429);
    msg.setSource(3520U);
    msg.setSourceEntity(157U);
    msg.setDestination(16700U);
    msg.setDestinationEntity(237U);
    msg.ax_cmd = 0.306483885479;
    msg.ay_cmd = 0.522614744417;
    msg.az_cmd = 0.481900621903;
    msg.ax_des = 0.763717643359;
    msg.ay_des = 0.208825656094;
    msg.az_des = 0.532527072408;
    msg.virt_err_x = 0.19026986507;
    msg.virt_err_y = 0.273566673586;
    msg.virt_err_z = 0.768735362487;
    msg.surf_fdbk_x = 0.929531858794;
    msg.surf_fdbk_y = 0.978819923185;
    msg.surf_fdbk_z = 0.804862573414;
    msg.surf_unkn_x = 0.103817744157;
    msg.surf_unkn_y = 0.848435603145;
    msg.surf_unkn_z = 0.869477589321;
    msg.ss_x = 0.88932948335;
    msg.ss_y = 0.0393388302428;
    msg.ss_z = 0.711000135686;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("TPVJOGEPCSIWZTAIPHRYPNPUESUFCXKAVOMQYMFFKEZHYAZKUTQSZLFUBYNEKOMZPRQTIJLACHESLSVCLCMDINJQCHHNVGLYRGZHCDBBAOMGKVIJZVIDWDTRXDVFBFNQVDNLKIXKSYSFDDBWLNUWOJZWEYTPCIBYURWHUDFMTXRXJXVTCUYZSQQEIBRFKSXWORQAWMERLHUTAXMOPCQKGYGHALODB");
    tmp_msg_0.dist = 0.111948824851;
    tmp_msg_0.err = 0.838970553565;
    tmp_msg_0.ctrl_imp = 0.646071587267;
    tmp_msg_0.rel_dir_x = 0.632792265621;
    tmp_msg_0.rel_dir_y = 0.946401443343;
    tmp_msg_0.rel_dir_z = 0.341731159023;
    tmp_msg_0.err_x = 0.551083024393;
    tmp_msg_0.err_y = 0.477817898224;
    tmp_msg_0.err_z = 0.630276683879;
    tmp_msg_0.rf_err_x = 0.0695994744993;
    tmp_msg_0.rf_err_y = 0.261885395654;
    tmp_msg_0.rf_err_z = 0.905896150948;
    tmp_msg_0.rf_err_vx = 0.780419347053;
    tmp_msg_0.rf_err_vy = 0.751591862652;
    tmp_msg_0.rf_err_vz = 0.787502446944;
    tmp_msg_0.ss_x = 0.176056961014;
    tmp_msg_0.ss_y = 0.111047537707;
    tmp_msg_0.ss_z = 0.806800412306;
    tmp_msg_0.virt_err_x = 0.461343721622;
    tmp_msg_0.virt_err_y = 0.249911644754;
    tmp_msg_0.virt_err_z = 0.319848491188;
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
    msg.setTimeStamp(0.830920609001);
    msg.setSource(25339U);
    msg.setSourceEntity(253U);
    msg.setDestination(51998U);
    msg.setDestinationEntity(125U);
    msg.ax_cmd = 0.644763607313;
    msg.ay_cmd = 0.3053625717;
    msg.az_cmd = 0.757516020979;
    msg.ax_des = 0.420306759561;
    msg.ay_des = 0.418942794089;
    msg.az_des = 0.600492522607;
    msg.virt_err_x = 0.276521424865;
    msg.virt_err_y = 0.0108232535727;
    msg.virt_err_z = 0.249177975627;
    msg.surf_fdbk_x = 0.0912764739839;
    msg.surf_fdbk_y = 0.862613624255;
    msg.surf_fdbk_z = 0.909199575404;
    msg.surf_unkn_x = 0.978676680388;
    msg.surf_unkn_y = 0.361176863416;
    msg.surf_unkn_z = 0.0116038611976;
    msg.ss_x = 0.642077008211;
    msg.ss_y = 0.515005566596;
    msg.ss_z = 0.138049264608;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("IJASHVLOUMCQWHOGGRGXVLSKNORITCXFIADDEVUMSZXKIHNJXPPETHRZMNIEDSJZAKEEIFCFEQTHBAXRIQSHNGVGRJXJKROCUYBTPQVNUBZQBLBLKLCNKPQLOLPCYDBISCEYUYYZZCUMGTKTSPJFATQERJQWYOBD");
    tmp_msg_0.dist = 0.985253633821;
    tmp_msg_0.err = 0.0571058836461;
    tmp_msg_0.ctrl_imp = 0.902204309464;
    tmp_msg_0.rel_dir_x = 0.794216998471;
    tmp_msg_0.rel_dir_y = 0.826282540652;
    tmp_msg_0.rel_dir_z = 0.575155482401;
    tmp_msg_0.err_x = 0.129542979105;
    tmp_msg_0.err_y = 0.752314814764;
    tmp_msg_0.err_z = 0.171319915361;
    tmp_msg_0.rf_err_x = 0.397664500325;
    tmp_msg_0.rf_err_y = 0.679255292711;
    tmp_msg_0.rf_err_z = 0.526879761849;
    tmp_msg_0.rf_err_vx = 0.573928378182;
    tmp_msg_0.rf_err_vy = 0.370234245985;
    tmp_msg_0.rf_err_vz = 0.710986719186;
    tmp_msg_0.ss_x = 0.763102875754;
    tmp_msg_0.ss_y = 0.166499562649;
    tmp_msg_0.ss_z = 0.0538760336534;
    tmp_msg_0.virt_err_x = 0.0540739959959;
    tmp_msg_0.virt_err_y = 0.139493070082;
    tmp_msg_0.virt_err_z = 0.107998773421;
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
    msg.setTimeStamp(0.332262681419);
    msg.setSource(17133U);
    msg.setSourceEntity(243U);
    msg.setDestination(14325U);
    msg.setDestinationEntity(215U);
    msg.s_id.assign("AUEBASMYRSRHSVMKXNXTKONKYYKHULHQFCDYQQAKIWPWBIFUWGORXOUTBEETTSUDRKEJNTQTMMDOCAGPOBCUAKEAZMTRMJQUBLIDRAJRBTGTILLHOYVFLUIVDNYMEMEFWBXIXPLCQFVEGSCNPOIFXPSGNZHHVGCYENBVFCPAYJXNVIDUYZRZJFRASQBGXJJLJDMHKQZJPOBAWLXZLGC");
    msg.dist = 0.345814860109;
    msg.err = 0.615059557055;
    msg.ctrl_imp = 0.73780933889;
    msg.rel_dir_x = 0.878959166276;
    msg.rel_dir_y = 0.751737535407;
    msg.rel_dir_z = 0.559710003042;
    msg.err_x = 0.861782726264;
    msg.err_y = 0.687030168022;
    msg.err_z = 0.037235940947;
    msg.rf_err_x = 0.374011449832;
    msg.rf_err_y = 0.701341572408;
    msg.rf_err_z = 0.859814348044;
    msg.rf_err_vx = 0.129314285416;
    msg.rf_err_vy = 0.0931093704356;
    msg.rf_err_vz = 0.813540318329;
    msg.ss_x = 0.964774621452;
    msg.ss_y = 0.511381405021;
    msg.ss_z = 0.416472409608;
    msg.virt_err_x = 0.8778397815;
    msg.virt_err_y = 0.0468794294972;
    msg.virt_err_z = 0.0421858746391;

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
    msg.setTimeStamp(0.29017281066);
    msg.setSource(47727U);
    msg.setSourceEntity(104U);
    msg.setDestination(17722U);
    msg.setDestinationEntity(118U);
    msg.s_id.assign("FDLPDFPFSMIXUNOAREIPIBSHGGFHBSKIBABVXFCGNRLMFRYBCMEUGIYUFHDDDQTWCBXXPCVAMSBZKYAUKNONVJSNLOYKFPTFMJBAPCLJCOICNLDHQTPLEAXYZVMZFCJGSONWWIVRHROZUWUGREBAWQENJWKGXOUZVEOPYRMVXYHZDWGLLR");
    msg.dist = 0.886085841614;
    msg.err = 0.863478449725;
    msg.ctrl_imp = 0.834663841571;
    msg.rel_dir_x = 0.266580984042;
    msg.rel_dir_y = 0.878863253699;
    msg.rel_dir_z = 0.512595565359;
    msg.err_x = 0.398185301471;
    msg.err_y = 0.179579303193;
    msg.err_z = 0.622854244917;
    msg.rf_err_x = 0.0475746517934;
    msg.rf_err_y = 0.592041958578;
    msg.rf_err_z = 0.412411582448;
    msg.rf_err_vx = 0.776673308056;
    msg.rf_err_vy = 0.858348249341;
    msg.rf_err_vz = 0.294475814245;
    msg.ss_x = 0.925274472677;
    msg.ss_y = 0.482107607559;
    msg.ss_z = 0.120836645893;
    msg.virt_err_x = 0.213023276329;
    msg.virt_err_y = 0.8986024681;
    msg.virt_err_z = 0.838705499823;

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
    msg.setTimeStamp(0.885830224464);
    msg.setSource(61190U);
    msg.setSourceEntity(12U);
    msg.setDestination(8009U);
    msg.setDestinationEntity(221U);
    msg.s_id.assign("SVXWKGSRLURTUWWDEFBQCUWDWUNQYNFPEEFTCFLGNEODQQKCIONMNRIUZLGXHRZJHBALCZHDX");
    msg.dist = 0.388522767135;
    msg.err = 0.338590287637;
    msg.ctrl_imp = 0.0803281642679;
    msg.rel_dir_x = 0.745670530349;
    msg.rel_dir_y = 0.664872181444;
    msg.rel_dir_z = 0.557274822971;
    msg.err_x = 0.0540033965694;
    msg.err_y = 0.565514304745;
    msg.err_z = 0.265971882168;
    msg.rf_err_x = 0.831823936756;
    msg.rf_err_y = 0.232106954861;
    msg.rf_err_z = 0.21588606396;
    msg.rf_err_vx = 0.948285277887;
    msg.rf_err_vy = 0.818074105822;
    msg.rf_err_vz = 0.284401447971;
    msg.ss_x = 0.493785560706;
    msg.ss_y = 0.717837269683;
    msg.ss_z = 0.0400416695659;
    msg.virt_err_x = 0.153860739446;
    msg.virt_err_y = 0.454817256133;
    msg.virt_err_z = 0.00320365551968;

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
    msg.setTimeStamp(0.415412258848);
    msg.setSource(48974U);
    msg.setSourceEntity(16U);
    msg.setDestination(20774U);
    msg.setDestinationEntity(156U);
    msg.timeout = 23154U;
    msg.rpm = 0.587367875296;
    msg.direction = 48U;
    msg.custom.assign("HQJKHMDVFGTJMEHNAXEUOIRKWYCVOWHPHFGNBLBGFRTQGSBWTRDNGFZENXJBIZGKIXAUCULZBUTARDPPBZWYLEYYXEMFPXZFGXYKAVUYXVHGMDNYUPGXCBZTCUUPQVZOJWMKAJJYPKHHLOVSJVOYIXTSBISXCODNRSMFLNIDIPOVFMTQETORTQEMQFOLD");

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
    msg.setTimeStamp(0.37800608422);
    msg.setSource(34208U);
    msg.setSourceEntity(77U);
    msg.setDestination(6463U);
    msg.setDestinationEntity(146U);
    msg.timeout = 3192U;
    msg.rpm = 0.874066063862;
    msg.direction = 76U;
    msg.custom.assign("FLNKDICVEBJNBAPEXPCZVEBOAYNVHOBWJICVYGNXYVREFHJLRXLNQUMFDHRXDYTTWDZRUIHKKTUEUBELRDTVNGUJFHNVYTESGSOZSZJMIBDPEWYIMSPBHNSOQZHFKWIPWXPMDFMWAGCR");

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
    msg.setTimeStamp(0.245588473673);
    msg.setSource(55421U);
    msg.setSourceEntity(44U);
    msg.setDestination(19961U);
    msg.setDestinationEntity(36U);
    msg.timeout = 19689U;
    msg.rpm = 0.43206617348;
    msg.direction = 188U;
    msg.custom.assign("LJCKTPBCXE");

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
    msg.setTimeStamp(0.493611530328);
    msg.setSource(2433U);
    msg.setSourceEntity(216U);
    msg.setDestination(15086U);
    msg.setDestinationEntity(78U);
    msg.formation_name.assign("VJPNBPVCHWSAOMZBDEKBASUWFXZOEFNNTAWQDGXSFTLCFQJCBYQJVRVYWEPPRCGNUTIIBV");
    msg.type = 185U;
    msg.op = 62U;
    msg.group_name.assign("UJPGAAELYVLSUBHXKATBOUMENDHJVCQQJUQGOMOHIJIUHUXPBEJTFNFSUPBSPCPEMQJGKWWCWUUILCXLZDKSRSQCQABYCWPFVNIANTYHLNPOM");
    msg.plan_id.assign("MSVWFCHQRRACQRXWNVUIAZZHPANKNJURQLEYSGEWIXWWPPCBSMRTLRSUTLPVSYGFCEXZITNDWJFEYXJHKFZNNHMOQGMJRIRTNMDLJAVTXIQJTAZXEOFZPJONYKSABLCOJGTBEOVOCA");
    msg.description.assign("GROSVLMRKDCIVFUGQTCADDEVQPSYRWNXJSHNEIUDSJTAPGLQPTXOUCFDMIBAAJPTNINXKGRPOYCTHYMAGRFDVOJYXAPELVZZJOGBJMAMHSHOFSVXYXOWBSFMVBEBXANUNSLTQKBKFWZXQKAKERZMELWVXVEDECYQLAWLTWIYTDJEQBRGUFWZMLEFVWHOMCHSSOYKZI");
    msg.reference_frame = 163U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 788U;
    tmp_msg_0.off_x = 0.902799594277;
    tmp_msg_0.off_y = 0.987096326378;
    tmp_msg_0.off_z = 0.655153067957;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.253298034755;
    msg.leader_speed_min = 0.284183900551;
    msg.leader_speed_max = 0.725552773056;
    msg.leader_alt_min = 0.404815891196;
    msg.leader_alt_max = 0.361192679063;
    msg.pos_sim_err_lim = 0.2791287224;
    msg.pos_sim_err_wrn = 0.0577243862396;
    msg.pos_sim_err_timeout = 26112U;
    msg.converg_max = 0.173478111789;
    msg.converg_timeout = 46013U;
    msg.comms_timeout = 58130U;
    msg.turb_lim = 0.0687432409255;
    msg.custom.assign("YNWWPKNFHUWDGFQCIRXJGATVQILXQCEMSPTGXKDOOPEF");

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
    msg.setTimeStamp(0.48212625684);
    msg.setSource(41005U);
    msg.setSourceEntity(107U);
    msg.setDestination(31067U);
    msg.setDestinationEntity(151U);
    msg.formation_name.assign("SZLTXUHMGXFSMXVNDHGRUQJFRJJCKBVDJGFVRDCBUPXOYREKHILAWWEPJHXHTLIPBPEYQHSWDKIXAMEBGQBVNDFJWDVVTTJNSYAODDJEMSZAUOXMNUBYUWMCCO");
    msg.type = 122U;
    msg.op = 26U;
    msg.group_name.assign("DSIULWOPVTRPQFMKRXFGPVGESKBWFVZZEUEHOYXTDXYKRUYLOPKLKTNPUDJWBRCJAJIZPVOCNXMLAEMIKVSENPICKCIOHUWJPMEXHJJCKMXAZFXTWNAMZNRJNJZYBGWNZPHOBQLWEBOUDYZILFASYLNHXMZQVBAZYHTROVFGFYSCSCQHITKDAQSSOGVBHVSIGERDFDMOUWIQBWCHBDTNYGULSMVTJFFPXLE");
    msg.plan_id.assign("XXHDERMLBHEBFIPAUBCPQLYZGWEUQCRYWGHCVJKACCOWMHZLYOGOALNLJPJHCSMMERMNHKASAVDXIRFKQMJZIHUVCGODKGVAOGNOXFQITUBQSVOUFEAEAKKDMFWLOWBEZGBEJSRKCDRSQSUGYUJZWTLSGNXBTIVQPBEWZBGWFZVZLPDKDFUPKNNWHIXXDAPESXVLBFPRLWIFJZRVQSSTJDOZTKXHCMIMFMIPPRJVQ");
    msg.description.assign("SRJEETKNKAHHQSXJOAYENVKYIZYBSXZGDSAOWIUWZUGYM");
    msg.reference_frame = 9U;
    msg.leader_bank_lim = 0.136545708419;
    msg.leader_speed_min = 0.622535537173;
    msg.leader_speed_max = 0.41515797759;
    msg.leader_alt_min = 0.369853062573;
    msg.leader_alt_max = 0.080080034453;
    msg.pos_sim_err_lim = 0.391452096955;
    msg.pos_sim_err_wrn = 0.711754178902;
    msg.pos_sim_err_timeout = 31974U;
    msg.converg_max = 0.660826365958;
    msg.converg_timeout = 15194U;
    msg.comms_timeout = 42943U;
    msg.turb_lim = 0.86478738716;
    msg.custom.assign("KWSLUPMTYFJHTESZRYKABVWEUEYLGYXSNVOPKKZXLQLWUQHXKCBMHYQULMLPWYHUPKJSJFWEIDRCDPIBQSZJVCFSAZQRFRYKEGJVCOVDDQBXBLVOVDBSMAWASTLIUCEIRQMPMZZEWNRPRSGNNAONUNFODXDDSKHPJIOCEHFZQZNATXIUNRGJOAOGPGFGBXRXLETNMD");

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
    msg.setTimeStamp(0.926826085157);
    msg.setSource(31588U);
    msg.setSourceEntity(217U);
    msg.setDestination(17152U);
    msg.setDestinationEntity(20U);
    msg.formation_name.assign("XOQHWBSTCEZOYBHDFNLENYRWOBJGTRSHPAXFIHYVXTBNLNQOZAZLBEBCGZJVDJZOZDRRSMTQHKWWITAIFVVAUCTARUXGQSCOGEPSNTMLUKXIKMAEPHBYOFKKWHQYCXWGRJDLFWMEPPARJYCDZEUDKGRFPSWTSVTZFVVNPSVHEYCIMASLVDOJQMILGELUZSUDRBIWD");
    msg.type = 219U;
    msg.op = 190U;
    msg.group_name.assign("ALVFYPXLZMBF");
    msg.plan_id.assign("OQJLTIPAKBLRBZEDGUASIFNIGTFPGCWRBZOS");
    msg.description.assign("JPUIGMCTUHPLNQTWALGVJJGBFRFUMIXKYYPNCSPODSEIZQYLGNXPXUDRVFAQLSCKGENDZBMLDTKEHDTEREORSGKVFQIKDXWWEFDCDCOAJCBT");
    msg.reference_frame = 254U;
    msg.leader_bank_lim = 0.560661901173;
    msg.leader_speed_min = 0.667874173518;
    msg.leader_speed_max = 0.922563901886;
    msg.leader_alt_min = 0.647645814202;
    msg.leader_alt_max = 0.13526258765;
    msg.pos_sim_err_lim = 0.94155166788;
    msg.pos_sim_err_wrn = 0.649994372304;
    msg.pos_sim_err_timeout = 21128U;
    msg.converg_max = 0.665701073609;
    msg.converg_timeout = 54813U;
    msg.comms_timeout = 16484U;
    msg.turb_lim = 0.582715530194;
    msg.custom.assign("UZDRBBVFJGSQLATTINJVPPZBGQDYRGLMNZGQTAXICOLBHYYVHHNGNYDZBRFVOCDOAUJZNUSCSUCUQJFELKCPEUKMQJDDTQAKQJEXKXKKNSBOWIPPPLGANOYFMWWRVUKWJZYVYZTCVOIBURDTMYWZ");

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
    msg.setTimeStamp(0.345104382743);
    msg.setSource(28530U);
    msg.setSourceEntity(117U);
    msg.setDestination(17271U);
    msg.setDestinationEntity(87U);
    msg.timeout = 49388U;
    msg.lat = 0.77951801282;
    msg.lon = 0.365628400426;
    msg.z = 0.758119583507;
    msg.z_units = 195U;
    msg.speed = 0.878599110594;
    msg.speed_units = 246U;
    msg.custom.assign("RBHAYGCGOZEKZUOLRBWOHBUKNKCUIJTBYXADYWVUYWWPQQDHVHNRZRREJZMXTHBMTPQEWHPXZVTEKDLVAICWJVJFVCBKCSFMNJRXQXQNJAISKTZLHDIJFLOEYUATUZIAZPEWM");

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
    msg.setTimeStamp(0.504441704616);
    msg.setSource(43805U);
    msg.setSourceEntity(176U);
    msg.setDestination(59893U);
    msg.setDestinationEntity(16U);
    msg.timeout = 45121U;
    msg.lat = 0.72711702505;
    msg.lon = 0.839298999249;
    msg.z = 0.355358319444;
    msg.z_units = 26U;
    msg.speed = 0.90125380287;
    msg.speed_units = 153U;
    msg.custom.assign("WSPEFSAUQMSKGARSWBZABCLVNVGREWMHNVYBKBJQFGOTEVXFZTAKBJVWDPITHUYFDNDXIKTOJCKKNBLGBAPDVHVYVKMLMIDSDTNYEZYYLLZZGFFOKELPHIRPNQDYCTTQXUNXJPVGOSHUUMWJXERUAZCWJDRWPHOIEAICGQUSKXLJBQNMCXNFIFZQOOLUQRODSZMA");

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
    msg.setTimeStamp(0.283900225576);
    msg.setSource(27971U);
    msg.setSourceEntity(184U);
    msg.setDestination(13836U);
    msg.setDestinationEntity(40U);
    msg.timeout = 33045U;
    msg.lat = 0.857478285401;
    msg.lon = 0.0636091201306;
    msg.z = 0.440001903909;
    msg.z_units = 158U;
    msg.speed = 0.157955582224;
    msg.speed_units = 243U;
    msg.custom.assign("PRUYLQTQSUNTBYMXYVHCAFSNPXTWKEFUCUTHMGIOQPMHICSJUUKKOSMLTPKJJSLVLZXCBYFEOZGDJGZAHQSEPOYXOGLNCXCUWIVNRDLBFQRNTKJLAOJUKDWIMURYJANQPVEZWFYALGIVSXEBERVLIHRDYNVQFMVSDBBHHHCIWNZABEFVMWJAKCYRFBDAECJOPGAPNKEMGORJXGIWDOZKHWFPTQXSNVRZEGHFYZZXBTMDTPRKDAQTUCWQ");

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
    msg.setTimeStamp(0.118193437653);
    msg.setSource(32036U);
    msg.setSourceEntity(19U);
    msg.setDestination(13717U);
    msg.setDestinationEntity(152U);
    msg.timeout = 2449U;
    msg.lat = 0.10065312187;
    msg.lon = 0.335827604778;
    msg.z = 0.51237755019;
    msg.z_units = 19U;
    msg.speed = 0.429366702588;
    msg.speed_units = 28U;
    msg.custom.assign("PLIPCXSEWPUYIQFRZBFNPDDOGGUXDQDOP");

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
    msg.setTimeStamp(0.374390603692);
    msg.setSource(27114U);
    msg.setSourceEntity(40U);
    msg.setDestination(32979U);
    msg.setDestinationEntity(169U);
    msg.timeout = 27115U;
    msg.lat = 0.595735861903;
    msg.lon = 0.738352138043;
    msg.z = 0.478201821537;
    msg.z_units = 244U;
    msg.speed = 0.179243022515;
    msg.speed_units = 153U;
    msg.custom.assign("FFNUNQNVXQADFEYSYHFKRURFHMHKIPVLYJCAHTBTSTGJLQONWLVWATPOXAMLSCKHBJRFBEBRVOMSPIAYDWYOCOZVMGWIENNGXRAVOPIKY");

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
    msg.setTimeStamp(0.438951696465);
    msg.setSource(2695U);
    msg.setSourceEntity(252U);
    msg.setDestination(693U);
    msg.setDestinationEntity(217U);
    msg.timeout = 5963U;
    msg.lat = 0.51735302403;
    msg.lon = 0.0915454812373;
    msg.z = 0.514827018414;
    msg.z_units = 40U;
    msg.speed = 0.730319131731;
    msg.speed_units = 102U;
    msg.custom.assign("FIPVBQJBYLOUJOFYVRFIJSMAXMGLFLJULDXKZSBBYWSHZZADOYICCBLRDURHXNLBQCCVOMQEEKAIMHHDDGMNSFNRQNHAXZDFEW");

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
    msg.setTimeStamp(0.235103005552);
    msg.setSource(31750U);
    msg.setSourceEntity(245U);
    msg.setDestination(61353U);
    msg.setDestinationEntity(208U);
    msg.arrival_time = 0.0765071349077;
    msg.lat = 0.841372499279;
    msg.lon = 0.867289913141;
    msg.z = 0.697088228364;
    msg.z_units = 172U;
    msg.travel_z = 0.158784479209;
    msg.travel_z_units = 156U;
    msg.delayed = 209U;

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
    msg.setTimeStamp(0.540050454111);
    msg.setSource(47030U);
    msg.setSourceEntity(84U);
    msg.setDestination(26363U);
    msg.setDestinationEntity(6U);
    msg.arrival_time = 0.826040390266;
    msg.lat = 0.173357608648;
    msg.lon = 0.79776117767;
    msg.z = 0.656453734865;
    msg.z_units = 46U;
    msg.travel_z = 0.322756382156;
    msg.travel_z_units = 108U;
    msg.delayed = 184U;

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
    msg.setTimeStamp(0.796454701193);
    msg.setSource(14076U);
    msg.setSourceEntity(70U);
    msg.setDestination(19330U);
    msg.setDestinationEntity(130U);
    msg.arrival_time = 0.44533957369;
    msg.lat = 0.498324224518;
    msg.lon = 0.738458842275;
    msg.z = 0.684724204959;
    msg.z_units = 46U;
    msg.travel_z = 0.765114193155;
    msg.travel_z_units = 145U;
    msg.delayed = 139U;

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
    msg.setTimeStamp(0.742439364893);
    msg.setSource(22986U);
    msg.setSourceEntity(176U);
    msg.setDestination(47925U);
    msg.setDestinationEntity(142U);
    msg.lat = 0.355445517;
    msg.lon = 0.854449038913;
    msg.z = 0.507429060318;
    msg.z_units = 50U;
    msg.speed = 0.957230442201;
    msg.speed_units = 103U;
    msg.bearing = 0.946112483264;
    msg.cross_angle = 0.414501400727;
    msg.width = 0.669446943247;
    msg.length = 0.429860972101;
    msg.coff = 113U;
    msg.angaperture = 0.859692157485;
    msg.range = 12066U;
    msg.overlap = 147U;
    msg.flags = 168U;
    msg.custom.assign("WYJIOEONMDYMRAJLRTWZXVQTVSOLQHBUSHHUVCWATRUNGVUXETZSPZYUKZQQTOHXJSDQTWJPCUFNBYBHDFVVRNIFMSGUXNMPEZQTGWHANBGDCLXMDIOYDELBHCUTWIPJHSJRGXUXKIENWZALLEIMGGUIEPSHOYIPBFJIRFDBZYFRAWOCZB");

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
    msg.setTimeStamp(0.987032557959);
    msg.setSource(251U);
    msg.setSourceEntity(54U);
    msg.setDestination(13275U);
    msg.setDestinationEntity(218U);
    msg.lat = 0.980959538706;
    msg.lon = 0.535851125042;
    msg.z = 0.306667325134;
    msg.z_units = 36U;
    msg.speed = 0.3718486565;
    msg.speed_units = 5U;
    msg.bearing = 0.422600722511;
    msg.cross_angle = 0.902194713581;
    msg.width = 0.393635251785;
    msg.length = 0.36685396988;
    msg.coff = 163U;
    msg.angaperture = 0.465407548376;
    msg.range = 56558U;
    msg.overlap = 81U;
    msg.flags = 134U;
    msg.custom.assign("CXILPPHSLVAYFZSSNFJECRERTXHBBZJAAABOBIQTZZRHPUWPNQLJGYUIXRYFPHSINCZVVJPDJLCKTSJFCLHXLQMSPXOCPBRBDXTRQZLNAPMLEG");

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
    msg.setTimeStamp(0.00150772091254);
    msg.setSource(3378U);
    msg.setSourceEntity(153U);
    msg.setDestination(46747U);
    msg.setDestinationEntity(240U);
    msg.lat = 0.0631726088881;
    msg.lon = 0.0536323088171;
    msg.z = 0.202028461753;
    msg.z_units = 18U;
    msg.speed = 0.494531273045;
    msg.speed_units = 66U;
    msg.bearing = 0.861259954922;
    msg.cross_angle = 0.269824626505;
    msg.width = 0.262874869266;
    msg.length = 0.681184195054;
    msg.coff = 124U;
    msg.angaperture = 0.983906388583;
    msg.range = 53531U;
    msg.overlap = 34U;
    msg.flags = 26U;
    msg.custom.assign("GCMXRIGSCRDIGBEFHZZXBWVRLIPRJNCUTJQGDMVQPIERKKOTCESFLAVXSQWGIOHNOWBBUSHUATKRIPYIZKNYQAYLKNZSMCKYUAFJMVGTZTOYLWJJEEPPMEKAEOLMSOVZXIAQGEYQGDTTDFFJTRPSYLRKBXVPUETFHQONVGUHL");

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
    msg.setTimeStamp(0.123713406843);
    msg.setSource(28177U);
    msg.setSourceEntity(101U);
    msg.setDestination(34218U);
    msg.setDestinationEntity(244U);
    msg.timeout = 29578U;
    msg.lat = 0.891191749956;
    msg.lon = 0.163355648166;
    msg.z = 0.965200875404;
    msg.z_units = 42U;
    msg.speed = 0.222071808129;
    msg.speed_units = 199U;
    msg.syringe0 = 111U;
    msg.syringe1 = 249U;
    msg.syringe2 = 224U;
    msg.custom.assign("UOPZFEEILTMMQUQHFAEEVKCUDDCNEXK");

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
    msg.setTimeStamp(0.836104354532);
    msg.setSource(39873U);
    msg.setSourceEntity(9U);
    msg.setDestination(15857U);
    msg.setDestinationEntity(100U);
    msg.timeout = 52706U;
    msg.lat = 0.900669709318;
    msg.lon = 0.922105330834;
    msg.z = 0.818296212227;
    msg.z_units = 146U;
    msg.speed = 0.221786005161;
    msg.speed_units = 133U;
    msg.syringe0 = 20U;
    msg.syringe1 = 170U;
    msg.syringe2 = 212U;
    msg.custom.assign("GPTKZVPQUXMMVHVSGUGQFPKCEQFEOSDHAVARPGYMYOMIPQUJTNSEVDQYPNQWZNDGLGPTWKOBHIQWVWXEVAGAXTUCBQBOUJDNFSGANYZWFVLEDHEDFSXMUBOCMTIMLWULPFTBALWBBDDIGBGRQXJWYJWRKRXJILDCHZSHKCARZKLYZLMTOCIXMPSFIUYHXWATCFLFVYUAKRCZYJMOZKJNPYSTZHNOICTJHQXRKEUELFOEXINZBJEDIHARJ");

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
    msg.setTimeStamp(0.389962310583);
    msg.setSource(50534U);
    msg.setSourceEntity(38U);
    msg.setDestination(40723U);
    msg.setDestinationEntity(216U);
    msg.timeout = 15438U;
    msg.lat = 0.279558858962;
    msg.lon = 0.434391483583;
    msg.z = 0.955320791119;
    msg.z_units = 227U;
    msg.speed = 0.295000331642;
    msg.speed_units = 76U;
    msg.syringe0 = 216U;
    msg.syringe1 = 116U;
    msg.syringe2 = 121U;
    msg.custom.assign("XTJQUVCNGEKWLPITMMVBLNZKUBGPXITWDWYPUUISBTJNEQGXQKAQUKANZAZZVZLEUW");

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
    msg.setTimeStamp(0.182935023962);
    msg.setSource(34176U);
    msg.setSourceEntity(154U);
    msg.setDestination(53554U);
    msg.setDestinationEntity(37U);

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
    msg.setTimeStamp(0.456072356161);
    msg.setSource(6496U);
    msg.setSourceEntity(140U);
    msg.setDestination(38953U);
    msg.setDestinationEntity(72U);

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
    msg.setTimeStamp(0.653348803434);
    msg.setSource(19550U);
    msg.setSourceEntity(172U);
    msg.setDestination(56896U);
    msg.setDestinationEntity(215U);

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
    msg.setTimeStamp(0.576808115264);
    msg.setSource(44130U);
    msg.setSourceEntity(30U);
    msg.setDestination(26901U);
    msg.setDestinationEntity(199U);
    msg.lat = 0.256271023027;
    msg.lon = 0.695145382168;
    msg.z = 0.163664686014;
    msg.z_units = 245U;
    msg.speed = 0.363058725516;
    msg.speed_units = 20U;
    msg.takeoff_pitch = 0.909987499795;
    msg.custom.assign("SRHXIIWBRVMRZUMIXGCNFTXXYKZIYLAPUSCBEXPPMOQHXYMJLDWYZBOAVKOOBMSLDABYCHKQOUCGRYDEKESQUABHQNJZVEMDSKLRWKIJVQUTJVTEFJHGESAWAQYCZWXDDTUNBT");

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
    msg.setTimeStamp(0.957466922158);
    msg.setSource(4886U);
    msg.setSourceEntity(122U);
    msg.setDestination(29661U);
    msg.setDestinationEntity(165U);
    msg.lat = 0.465769151369;
    msg.lon = 0.989441674545;
    msg.z = 0.197793183227;
    msg.z_units = 135U;
    msg.speed = 0.943850230985;
    msg.speed_units = 65U;
    msg.takeoff_pitch = 0.118419951893;
    msg.custom.assign("XERIRDNZYDYAWXUZNQWHKIFSLFOJECUTZUFAXGPGPSANHGTUNPDWWGREDHYHBPFRXBLBNVTTQIQCPEMYVRMJQVVFWMCVTOBYCICFKGKMKAPILYSSMLRXIGWYXBFHZYRPSUHGCECWWMJYIWDGXSVJMVKFULFPZVAJSSVOHGNXOEJDUCLAONAKHEKBQOEZDDOZCQBUDLOBJDCFHQMASKWMKVTRZQITZRLPBJQZJQG");

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
    msg.setTimeStamp(0.449369285983);
    msg.setSource(59960U);
    msg.setSourceEntity(145U);
    msg.setDestination(41194U);
    msg.setDestinationEntity(3U);
    msg.lat = 0.885923639389;
    msg.lon = 0.323341491103;
    msg.z = 0.505127784499;
    msg.z_units = 7U;
    msg.speed = 0.930192568428;
    msg.speed_units = 177U;
    msg.takeoff_pitch = 0.836341757727;
    msg.custom.assign("NWXYKAJKHPCRZMQKZHJLJDHJYA");

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
    msg.setTimeStamp(0.192693636824);
    msg.setSource(42126U);
    msg.setSourceEntity(97U);
    msg.setDestination(1304U);
    msg.setDestinationEntity(148U);
    msg.lat = 0.331796307578;
    msg.lon = 0.891132542557;
    msg.z = 0.28126226707;
    msg.z_units = 27U;
    msg.speed = 0.357141835505;
    msg.speed_units = 122U;
    msg.abort_z = 0.754625134265;
    msg.bearing = 0.942358209483;
    msg.glide_slope = 149U;
    msg.glide_slope_alt = 0.0912147756306;
    msg.custom.assign("DZDHFIWAXIFPWVQBFWZX");

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
    msg.setTimeStamp(0.353607445574);
    msg.setSource(47837U);
    msg.setSourceEntity(122U);
    msg.setDestination(35237U);
    msg.setDestinationEntity(122U);
    msg.lat = 0.212920526013;
    msg.lon = 0.962041888445;
    msg.z = 0.104375084838;
    msg.z_units = 91U;
    msg.speed = 0.606421184129;
    msg.speed_units = 77U;
    msg.abort_z = 0.121465243435;
    msg.bearing = 0.380225378555;
    msg.glide_slope = 186U;
    msg.glide_slope_alt = 0.494922266854;
    msg.custom.assign("PUVKZBSNIBUAQUJKYBPGRSLXGLIDIEDCPICOTVSTWIQGBOJRKLOYHZDZQRDRWMYLPLLIENKL");

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
    msg.setTimeStamp(0.439784564053);
    msg.setSource(61001U);
    msg.setSourceEntity(216U);
    msg.setDestination(60862U);
    msg.setDestinationEntity(48U);
    msg.lat = 0.452171071459;
    msg.lon = 0.923130525339;
    msg.z = 0.129507930404;
    msg.z_units = 193U;
    msg.speed = 0.611410371404;
    msg.speed_units = 139U;
    msg.abort_z = 0.743409975999;
    msg.bearing = 0.054231244096;
    msg.glide_slope = 174U;
    msg.glide_slope_alt = 0.910143122659;
    msg.custom.assign("APHMWREUAVOVRKZPQMIFJSJLBCDGBFJGSTBESOCZGSDRGLUYIXGOHWTHZWLUTUCIRWYNIFHTUOJGANTVBWMIEXAKKNQBMPRJXMSYDEEQYFQROYDIIYPMPYAYKITSYPLPTIFFVURQBD");

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
    msg.setTimeStamp(0.0706823740236);
    msg.setSource(39355U);
    msg.setSourceEntity(90U);
    msg.setDestination(61817U);
    msg.setDestinationEntity(145U);
    msg.lat = 0.39892484575;
    msg.lon = 0.553025615786;
    msg.speed = 0.0462647945531;
    msg.speed_units = 121U;
    msg.limits = 141U;
    msg.max_depth = 0.534535688701;
    msg.min_alt = 0.924779093983;
    msg.time_limit = 0.975492999447;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.443590359593;
    tmp_msg_0.lon = 0.0996638787511;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("ZZEBWCERBDAFSIJFNBSBOZZMFXPCERXIETNYMPCEHCRDALFOYABKVIELTPVYXJGZKHOCRGUHPGYLHNODKKMJFSZUSQJJNDLGCCETVTRDQXMWAQGDSZXKAVYEQVWGLBTNNIAYLRROLVJIPSDUJGUNIOUPPZYXQMQXUKDZPTVPFBSHOJIURLZUMHKOCFTQWXTFSBBMQRQYWEGGOHMKDSXNRAHWTYMMIHOH");
    msg.custom.assign("ZKJWWUZXDEYAGIOORHHMTHTIXPMZXYCKHXTQGNVIRLAHNCELBPTPASOYSLRSRAQROOYOYCXICGYMWBJZVJWWHLHCVECWQIOSBFCZNNSDBKDWPJBFTKUPRZGFTINZRUTAQUDOEZMMLGXOCQWUUUKTDINEUCNMPMANSSJVDYADMWSMJFXHFVVNMIDLESQBLGGACJYFKQRZPXBKDYSVFIYFKRQOKQVBVNHHXLDIXWARBPZVEBGFUUJPGKTEELT");

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
    msg.setTimeStamp(0.946521472583);
    msg.setSource(43855U);
    msg.setSourceEntity(94U);
    msg.setDestination(51672U);
    msg.setDestinationEntity(233U);
    msg.lat = 0.884181800304;
    msg.lon = 0.842728344058;
    msg.speed = 0.967260366302;
    msg.speed_units = 48U;
    msg.limits = 178U;
    msg.max_depth = 0.335821848793;
    msg.min_alt = 0.0759804781032;
    msg.time_limit = 0.686604193061;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.269856506667;
    tmp_msg_0.lon = 0.934614938264;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("GPAMUTOXPRNUIMQAEVFJSIRGSFFZQFDSECZEKKHQJUNSBHELSDSCNSZFXCLSBOKVKWAVGBMOQMYMCRNJFIDMGBMADTYTGWBGLDZNZTJACTLIXRVMWXVWFYJRJOWKZJPGWFWUCHUWABUUC");
    msg.custom.assign("REGWCQFZNNZMEYAPJIXUWGPHCAJMSGDSFPWENMFHIFJRIAVMYCIZXAWDPQRIZEDJWZKWNOJOLNRRJYLFHCTMIWQCVPUHPVPTUTBTKLBYZYXLWDOUBAQYGKULXLUYDAPPWORUSCRVBAKSXACQTXNNEFIVVYDCDGSBKFVUKCEKPZSGVDMQXGNHFJVBBRSIBOEJ");

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
    msg.setTimeStamp(0.462424280306);
    msg.setSource(33117U);
    msg.setSourceEntity(236U);
    msg.setDestination(59265U);
    msg.setDestinationEntity(133U);
    msg.lat = 0.500203579099;
    msg.lon = 0.880354291783;
    msg.speed = 0.603857197551;
    msg.speed_units = 87U;
    msg.limits = 239U;
    msg.max_depth = 0.959265777958;
    msg.min_alt = 0.8589173831;
    msg.time_limit = 0.35115008753;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.800962431444;
    tmp_msg_0.lon = 0.289241361449;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("FHQEGCGDFLKPFEYEAHUZGMBUZSDZTJNQGSOYIFQULMVSTOCPYGKCAREEXYBWRBVLHKWOJYMXYHZWUSRABTMLDSHBEQMSQRGTAVOFIXZOHNINLORIBXLNEGLQCEXCMT");
    msg.custom.assign("FVKLRGLYPAZIUHDJQOPFPJPSTQAXOOSRTBCPYAKKJFBEAQGCDAVJINVIPREMJSFDRYTTGWLVSLEHCOEZPAWXTHBYWUCSYDLWHQGWFSGYEXNMIFAKADORFRLIFTGKNNUUMZZZKBOHEQXCY");

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
    msg.setTimeStamp(0.575833831329);
    msg.setSource(31981U);
    msg.setSourceEntity(45U);
    msg.setDestination(37360U);
    msg.setDestinationEntity(228U);
    msg.target.assign("QBXHSUJRIIXINNIQEYASPWUJIGAHEODQHASTHNMJFHURDPYAZAYKUUNWBQZFTYYESHDJBKHWVTMVPZFOMYZCVPUEFBXSTOVCIQUXSBNZRETFJGGNOMLERMQFYMSBIPHRDVSMCLDRLNVMRFVGPJNPUCOJHACGZKEDFKRSQOWJEVVLKPPWL");
    msg.max_speed = 0.0427643645591;
    msg.speed_units = 231U;
    msg.lat = 0.433434902536;
    msg.lon = 0.449715814154;
    msg.z = 0.287803100214;
    msg.z_units = 66U;
    msg.custom.assign("QMSWEQHLYEXQUPBDFDAZNQCXEYJLPYNORXXXHVCXKBREFWVAOHVHPTGZMBLUKJVUIDBKUTGPJYJKYZSCVAUZRHENOTYCTURWCLRAQCM");

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
    msg.setTimeStamp(0.123573889338);
    msg.setSource(6584U);
    msg.setSourceEntity(103U);
    msg.setDestination(6435U);
    msg.setDestinationEntity(27U);
    msg.target.assign("DNVYGLARCBBDPAACBYEJBEMIHVPWTEEZNZBSQEQEBCMWMPUEXNSCFTAXUOUOUYGTWYDRVBDMTJBBLPGJNSZIXKHIZNWTHOWKTHGPKOVJYSLLAGXKAELXQUYOLJBRDWNYASDVMCNNDNIGARRZQQCRVFFDSPLVRLJLFOUSUHRPWKCUTCPW");
    msg.max_speed = 0.108664701041;
    msg.speed_units = 13U;
    msg.lat = 0.39118344753;
    msg.lon = 0.49556402979;
    msg.z = 0.81737888872;
    msg.z_units = 39U;
    msg.custom.assign("OTGNFOOYGRTSFZFZZOYIKOCHWMUIVKMJNZKOWQKZQPYJHJ");

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
    msg.setTimeStamp(0.524248555111);
    msg.setSource(25669U);
    msg.setSourceEntity(133U);
    msg.setDestination(43781U);
    msg.setDestinationEntity(201U);
    msg.target.assign("MOYZQNLRDCKXLEXPKRBQIWIOYPQCTMHS");
    msg.max_speed = 0.625419576956;
    msg.speed_units = 39U;
    msg.lat = 0.685283935351;
    msg.lon = 0.893006868981;
    msg.z = 0.956896702367;
    msg.z_units = 237U;
    msg.custom.assign("JKTEWBPSXMUVOKXUVFOFEFXRMQKPVPHQUVMTQEHEWBJHBNQMZRSCXUSLXCLVOFCPYGLIWBBFYICYTICHUBJRFOTDRRGLJLNZGQIVNEAITOAKWMDJHNVGZIWCJWVZQGKUPAXYCMOJMRAFKVCXWHSWETTFMMLLCHYBYPKOLGAXLSONQQAYXOPNYDUZTAVSRIBGIPCKGHZWAZYJFL");

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
    msg.setTimeStamp(0.0224734631745);
    msg.setSource(13877U);
    msg.setSourceEntity(104U);
    msg.setDestination(53910U);
    msg.setDestinationEntity(216U);
    msg.timeout = 53304U;
    msg.lat = 0.491880974019;
    msg.lon = 0.723171135984;
    msg.speed = 0.554606162177;
    msg.speed_units = 194U;
    msg.custom.assign("OPAUZNAJHTNLMBUILMAWLJRMKXZVCLMRPJSACTOQGMRUTXKTVALTPKXNCLQEJXRXZGXFLTGZJKKJMMFYTHFWPEYOEGREQASNMPFVZCHQWOYNWBRNKDPPKUJIHYAXXSSGFVVOYFHSHQPNZXUNVSQCZVUUYEIDIGCIWYJPKZHDRKLCFVCSOXWDSHPSFIEGK");

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
    msg.setTimeStamp(0.613700167608);
    msg.setSource(40578U);
    msg.setSourceEntity(98U);
    msg.setDestination(51861U);
    msg.setDestinationEntity(20U);
    msg.timeout = 36473U;
    msg.lat = 0.0207317169277;
    msg.lon = 0.628003097332;
    msg.speed = 0.702779913715;
    msg.speed_units = 67U;
    msg.custom.assign("AEFZJOTNVIHPWRKWAQEZXEDMDNVEPRBGMNBFCGWWYMHICDKKQJOZOQOIWNNJHLSJVEIAZOJGABNMAFFAJVRDPKXEFTJYCSSMLICOSDBLLKDIRPIPQCMNWRWTSXYRXYVXKTSPBLYHYYTJXWOJXKVLLUQDCSZHUEZIVSVQGUBKOFAYPNAMTUBYOHHGCGFUMBLKUTCIMSGQFCTHHWNTZARCKXXEGLGTQUSUIFEZLGVDPERJWOYZHRUMDXZUN");

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
    msg.setTimeStamp(0.347667800322);
    msg.setSource(28795U);
    msg.setSourceEntity(78U);
    msg.setDestination(497U);
    msg.setDestinationEntity(179U);
    msg.timeout = 5558U;
    msg.lat = 0.665723849243;
    msg.lon = 0.338436875006;
    msg.speed = 0.980086529756;
    msg.speed_units = 83U;
    msg.custom.assign("LREKJTKBSOJRPQWYKUQBARXITVUHGBIWZYMKWGZUZEGXNFHLOGMLNXWDFQEVHIAOOPAYFYRZTFYHEVOQEYKQLMAIBFTOXJDVZRVMWKGQWOKCDDWXMTIZPBZIMAGTKDKLIZDFSJLQACLEVUNZJPANIDXJQWEHNNKUXCIYMCGRONVGUSEFSAGRXSJ");

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
    msg.setTimeStamp(0.375988862613);
    msg.setSource(22695U);
    msg.setSourceEntity(206U);
    msg.setDestination(32507U);
    msg.setDestinationEntity(101U);
    msg.lat = 0.136047802088;
    msg.lon = 0.246711729603;
    msg.z = 0.803863042367;
    msg.z_units = 99U;
    msg.radius = 0.673829035118;
    msg.duration = 47874U;
    msg.speed = 0.160194680072;
    msg.speed_units = 236U;
    msg.popup_period = 52195U;
    msg.popup_duration = 51130U;
    msg.flags = 47U;
    msg.custom.assign("GLVRKEPJATOKJOVBOHNXVPLYCQHRGMOBZHADDWBBUYPWZINYRKEJMCIXAZNTAVIAXFQCLWHKLFLWWKKLCMHWAFJATGWHXEYKRISMFHAQOSNFUYUVBBGZZMQMQXGRZIRUPOKTOEGVIUZKFPEDHPNYJXEAYDTUNJHYTPTWZCTFLYGSERQSSIREPIGJMZRNDDNJFCJXOGQTJRCXXVLACTODDUBUCNLQGOBMSXWDMV");

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
    msg.setTimeStamp(0.521650182699);
    msg.setSource(5005U);
    msg.setSourceEntity(131U);
    msg.setDestination(27065U);
    msg.setDestinationEntity(183U);
    msg.lat = 0.573839803076;
    msg.lon = 0.43845356722;
    msg.z = 0.707221951351;
    msg.z_units = 15U;
    msg.radius = 0.60225733054;
    msg.duration = 35754U;
    msg.speed = 0.391578155761;
    msg.speed_units = 119U;
    msg.popup_period = 14861U;
    msg.popup_duration = 25955U;
    msg.flags = 117U;
    msg.custom.assign("USTMMUFSFWVNOJCPRCHDWFAOZXEHCNMMJHSPKHENXKZNNGIABJWGZGIFRHKKAGEBTNXXBCDTLBVTQQMZYYHKLIRPZQDMTZXUFVNQQTL");

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
    msg.setTimeStamp(0.0161725081401);
    msg.setSource(43248U);
    msg.setSourceEntity(53U);
    msg.setDestination(37157U);
    msg.setDestinationEntity(4U);
    msg.lat = 0.633638112666;
    msg.lon = 0.975864047998;
    msg.z = 0.824578545275;
    msg.z_units = 44U;
    msg.radius = 0.00689485938779;
    msg.duration = 1095U;
    msg.speed = 0.635262461784;
    msg.speed_units = 20U;
    msg.popup_period = 24116U;
    msg.popup_duration = 10777U;
    msg.flags = 21U;
    msg.custom.assign("IWXADPAQBOJEHFSDKRKDJJHLZPGUQHALZKAVSAMZHDVNZQTILEYIASVEXVOOXEBJPJVXDYOFPBGUOFTKIFCPSCGQSURIYOLNWAJGYUWHMFYSNZKPGDXBEHGHQSGWTRBREULXUTCUQNSTBZULZPLCJJPCBXFKJCIENBIPAERXYECDANPJXOVHVTHNQMYZWZGOTRYXNDYOIDGLWLFFKMDRM");

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
    msg.setTimeStamp(0.47219715169);
    msg.setSource(35576U);
    msg.setSourceEntity(83U);
    msg.setDestination(54276U);
    msg.setDestinationEntity(137U);
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("JPKFSLPUJGRZUQTJWACMJTKCAJZZDJCTXRBABHYFHCNVDYXICVYUWUAPSYYNTFXNLJRKYVMYLLODPBEPLDDRNRMOETXDWNSTZKEZXGNODXHJPNVCBUIAEKGKFULBPQGFWDTRZSEBIUJBQMUWIIBVO");
    IMC::Teleoperation tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.custom.assign("NXTQXAMCLXHLBQWKEFPWMDVGOWFMPDRPNFHQIFVURJRZSALJTHMBOSVNWGLDBYAKMYQVBXXIUNGZJZSTFSCVIZCIWMAWJQDDOBKHETQCPATRIDQGLUYJZSXTGYACGGEYEVFNIFVTNWPBOVDOOPCGGHJSFRHMUJIURLDTXAXQRKERUUSJKZWIEUZAQLYCZNUOVKOBNHNLMPGBZODDZHTFJ");
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
    msg.setTimeStamp(0.212380163459);
    msg.setSource(50588U);
    msg.setSourceEntity(237U);
    msg.setDestination(8505U);
    msg.setDestinationEntity(89U);
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("ESANKBKCNPDCKZYFICWFVOJPRMLLORSGNZKSITISLAXWVQIIXNAJMRLWCPKLJAMZDRWELHVXHLOQIVGDJBYAUAGHPASKCHTWLVSRGEXJFIHYLOMIDBLSRWCNCGWPHTFECVT");
    IMC::CoverArea tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.0411938034192;
    tmp_tmp_msg_0_0.lon = 0.865029105401;
    tmp_tmp_msg_0_0.z = 0.5083721519;
    tmp_tmp_msg_0_0.z_units = 74U;
    tmp_tmp_msg_0_0.speed = 0.398760894144;
    tmp_tmp_msg_0_0.speed_units = 240U;
    tmp_tmp_msg_0_0.custom.assign("TECMRRMHJHJGICZKNZUVBGZYPAQCFDESFLRVWKCUGJTSOVTYSOYOODBVEQZAPCAWIHEUJXIQDFRECDFBOGPRKCKCPUZBZGFDMHIJJTTONWAIDWHSQAVERUKTYTLSAWXUPHIBTVPLQDOXVXWYAFNRLLLTMJYDXVNJZXGLBPWQNPNJAUNNGMZZNRKHSXGAROFEXQYHMLOVAMBMWBCKGCIDMPFXYUMSPOBLESGYFUIWSLHHTQKKIEQZDSEFQVWY");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::Pulse tmp_tmp_msg_0_1;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    IMC::EmergencyControlState tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.state = 191U;
    tmp_tmp_msg_0_2.plan_id.assign("SCJEKORJGCXFKYHNVJQSJAWPKQTHUZQHNHEEOXLZNUUITRPXBSHZJGXVZZIGCTZISLMHBFJCATULDDFACYHTVFKLWSUUWJNPUPISZVYVIJXUWGB");
    tmp_tmp_msg_0_2.comm_level = 13U;
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
    msg.setTimeStamp(0.326800541954);
    msg.setSource(33366U);
    msg.setSourceEntity(72U);
    msg.setDestination(20765U);
    msg.setDestinationEntity(13U);
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("HHDCZWRKXEKMUMHYGIUDPSIYDSSBQYHQFOIXCPXVLGJKUPLBHCTPVVWZHZPMODZBSJPRXYPRWUNJWQRZVNLEIFAIVNKYHFWIEBCNOLDNOTOCTUJLCZDOGFEZOOBMQCQXTJADIBATVYAPTCDYGXFRKUKJJUGMQMAIUVGFCFQNLLYQ");
    IMC::FollowReference tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.control_src = 57760U;
    tmp_tmp_msg_0_0.control_ent = 70U;
    tmp_tmp_msg_0_0.timeout = 0.983743410926;
    tmp_tmp_msg_0_0.loiter_radius = 0.635518634112;
    tmp_tmp_msg_0_0.altitude_interval = 0.349024492666;
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::PlanVariable tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.name.assign("TNNRTOIXEQZHQRTQLWHRPUQYCQUNOYXKHTYOKLSFGEPLSQBKAYQRNAILWGUSMYSERYZDOTFWCBUBXMIJBCALBGRRXMDNLVOBFHUXALVKNM");
    tmp_tmp_msg_0_1.value.assign("VQLDJGUDVHMMYQESEUCRIWTHNQCLJZFMPCKBBPBUMOQNQZWFIIRXKKRHNFNGHAXNUTAERTWKVJLVAQSYZEZPJITDRKWZGDWBCBUUNIHNRRPDABWLVLMHSEUPIZCJYSUXWJMSMGVSKXGODVHSHLRCLULYCNTEDYCEEOT");
    tmp_tmp_msg_0_1.type = 244U;
    tmp_tmp_msg_0_1.access = 201U;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    IMC::SetServoPosition tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.id = 198U;
    tmp_tmp_msg_0_2.value = 0.719034880731;
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
    msg.setTimeStamp(0.8708010848);
    msg.setSource(62602U);
    msg.setSourceEntity(194U);
    msg.setDestination(952U);
    msg.setDestinationEntity(239U);
    msg.timeout = 59119U;
    msg.lat = 0.191899946367;
    msg.lon = 0.976324956755;
    msg.z = 0.929966983521;
    msg.z_units = 193U;
    msg.speed = 0.587884545906;
    msg.speed_units = 164U;
    msg.bearing = 0.418887136774;
    msg.width = 0.395796272394;
    msg.direction = 96U;
    msg.custom.assign("KVHJPIBTFSJKLSOREISTSAEJDVXGHWAZH");

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
    msg.setTimeStamp(0.1806957512);
    msg.setSource(23733U);
    msg.setSourceEntity(128U);
    msg.setDestination(61125U);
    msg.setDestinationEntity(60U);
    msg.timeout = 25209U;
    msg.lat = 0.40838850376;
    msg.lon = 0.920059703065;
    msg.z = 0.516952880592;
    msg.z_units = 208U;
    msg.speed = 0.680446552325;
    msg.speed_units = 158U;
    msg.bearing = 0.457520799294;
    msg.width = 0.230921789404;
    msg.direction = 101U;
    msg.custom.assign("OOLBFHSUTKUOHZAPBKJSKOLJCSPETQBNPXJVEWA");

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
    msg.setTimeStamp(0.265431567031);
    msg.setSource(52744U);
    msg.setSourceEntity(207U);
    msg.setDestination(25889U);
    msg.setDestinationEntity(155U);
    msg.timeout = 60123U;
    msg.lat = 0.443747788869;
    msg.lon = 0.385119304648;
    msg.z = 0.675960758325;
    msg.z_units = 9U;
    msg.speed = 0.544791996564;
    msg.speed_units = 44U;
    msg.bearing = 0.84851623056;
    msg.width = 0.463882901589;
    msg.direction = 165U;
    msg.custom.assign("ZFBYZJWHBZSSJJENLQCFEXGDHSGSEFTSUMDSUWFPWYFWNUBQAVUWRUIDXTAFTIGMMRVJNKWPPNQDZIYQKCAKQRVLQRNLHTJQETEKBXFPIZLWJRCJCXFDDNFBOCZCMHRITWDOOVEAOXVSAVBXLTHZBUPOYPJBQISCYTOEKRVPFZGBNJEYCHGPYMEPCIPA");

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
    msg.setTimeStamp(0.0208568617409);
    msg.setSource(63687U);
    msg.setSourceEntity(165U);
    msg.setDestination(35458U);
    msg.setDestinationEntity(193U);
    msg.op_mode = 148U;
    msg.error_count = 243U;
    msg.error_ents.assign("KJPRPBZSSFMIHYHMWJQRIWIDHDAKSQEXPZLXJBZFQFCWLLLKDAGSOCOWAVDRMUTXQAR");
    msg.maneuver_type = 22932U;
    msg.maneuver_stime = 0.483565458899;
    msg.maneuver_eta = 51451U;
    msg.control_loops = 1005366678U;
    msg.flags = 94U;
    msg.last_error.assign("LNWKIMUOEWKVXGQUEMCMSAUQBMOXFELQRYBPHXLVRCNWFAXQPHYTYPYFSHWCTFGINLMSSAS");
    msg.last_error_time = 0.775835398018;

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
    msg.setTimeStamp(0.773905815949);
    msg.setSource(41132U);
    msg.setSourceEntity(133U);
    msg.setDestination(5412U);
    msg.setDestinationEntity(245U);
    msg.op_mode = 250U;
    msg.error_count = 77U;
    msg.error_ents.assign("KUWXIOCCBRJBMJOIEXRQGLERVOMSIIZBGSANPPWFWHSFNNBAXEMVQYZDOYNCYKPKDXJLBQGQUOTMDQCHTMRO");
    msg.maneuver_type = 57341U;
    msg.maneuver_stime = 0.8269885129;
    msg.maneuver_eta = 58086U;
    msg.control_loops = 4220795407U;
    msg.flags = 49U;
    msg.last_error.assign("RMTJGLGWIOQSR");
    msg.last_error_time = 0.819076767614;

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
    msg.setTimeStamp(0.401724358578);
    msg.setSource(38693U);
    msg.setSourceEntity(222U);
    msg.setDestination(58061U);
    msg.setDestinationEntity(97U);
    msg.op_mode = 240U;
    msg.error_count = 131U;
    msg.error_ents.assign("FRJPURFHZKTRDZBDNADYHQLJVNDDWEOMVFDIIMF");
    msg.maneuver_type = 43161U;
    msg.maneuver_stime = 0.201068208815;
    msg.maneuver_eta = 23766U;
    msg.control_loops = 3599448262U;
    msg.flags = 69U;
    msg.last_error.assign("GAEOZRFNKQJIXYIXTXPNGPCOSHORGSPMGVLWDUKWDFBNWZYWCRRJQHTVXEAHQKLNQPD");
    msg.last_error_time = 0.483182762629;

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
    msg.setTimeStamp(0.508532501915);
    msg.setSource(4969U);
    msg.setSourceEntity(206U);
    msg.setDestination(53601U);
    msg.setDestinationEntity(162U);
    msg.type = 138U;
    msg.request_id = 50019U;
    msg.command = 212U;
    IMC::Land tmp_msg_0;
    tmp_msg_0.lat = 0.256505146995;
    tmp_msg_0.lon = 0.585107850794;
    tmp_msg_0.z = 0.795860861088;
    tmp_msg_0.z_units = 242U;
    tmp_msg_0.speed = 0.571496703455;
    tmp_msg_0.speed_units = 114U;
    tmp_msg_0.abort_z = 0.43861815975;
    tmp_msg_0.bearing = 0.683874295952;
    tmp_msg_0.glide_slope = 221U;
    tmp_msg_0.glide_slope_alt = 0.514002886607;
    tmp_msg_0.custom.assign("RFEUVGQYRWUUJNYYSXOBKOEULBLJPAGVXEYWNJZCZYBLWGRMAJBSPOAGGPYNMFDFTYSXQTBQPHNWICEOEDGKHNLPMDNZVDQWPRNUWQCGJIAPHJWGVLFTVUDAIRKSMSMHKKETKQHFPUEYHBJCDMWFNPRQTXDODRAUNIQXCOLFJBILKQKAYFQZLOTCVEVJTSZZCECMCOKBHSINUFVMXZ");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 37219U;
    msg.info.assign("MSBZGEPDLEWWFVCZAUFVRKJWIFYBTTLYJACNISOBEOBJLEZUUPAXYDVKWQSPXNTPULSRYKGCCGQIGRRSGUFVLFJTUMAZAVMGXVDMQEOKEUGJLWMWXAQVLUCRJUNGE");

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
    msg.setTimeStamp(0.684932226636);
    msg.setSource(15351U);
    msg.setSourceEntity(101U);
    msg.setDestination(35216U);
    msg.setDestinationEntity(108U);
    msg.type = 238U;
    msg.request_id = 7024U;
    msg.command = 10U;
    IMC::StationKeepingExtended tmp_msg_0;
    tmp_msg_0.lat = 0.120450143683;
    tmp_msg_0.lon = 0.280355538799;
    tmp_msg_0.z = 0.958775929257;
    tmp_msg_0.z_units = 21U;
    tmp_msg_0.radius = 0.67727090716;
    tmp_msg_0.duration = 8996U;
    tmp_msg_0.speed = 0.959488782065;
    tmp_msg_0.speed_units = 113U;
    tmp_msg_0.popup_period = 28825U;
    tmp_msg_0.popup_duration = 52070U;
    tmp_msg_0.flags = 47U;
    tmp_msg_0.custom.assign("EJABSNIUDGMANYRWMZMYNJQZCHLTQGJQCBLMLUSVWU");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 58020U;
    msg.info.assign("MEHUVZTYSDCPEPLGBMGTXXSJJVQHSFVKROWIQPKOXBRWPJWFGAQZDUJYKRKS");

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
    msg.setTimeStamp(0.583336498226);
    msg.setSource(12833U);
    msg.setSourceEntity(162U);
    msg.setDestination(37650U);
    msg.setDestinationEntity(140U);
    msg.type = 164U;
    msg.request_id = 46401U;
    msg.command = 128U;
    IMC::Alignment tmp_msg_0;
    tmp_msg_0.timeout = 34584U;
    tmp_msg_0.lat = 0.041701388923;
    tmp_msg_0.lon = 0.246712746975;
    tmp_msg_0.speed = 0.784313731486;
    tmp_msg_0.speed_units = 35U;
    tmp_msg_0.custom.assign("AWEIQGFEXAHXWUIXLKTXZYXLUPECFXEJYDSLJLHVOGGBHYUQMGCRKLJGHMXTRSPXKTILNOZATBNERZECVJFDVMPRJWFILQYFYTFWBUGPIZPTOVMBPLHVTUYNVIRFEEGHASAJDDCNQJVZUAFOKKDXWGWCMAOJSMGUNWWYSTUTRQPOMSQCNNUWIYLZSNOCYFJWHBIEZAKKCCVXDOBLYSZBKK");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 64343U;
    msg.info.assign("MUJIIJEMKYIENBSSJFLOHZNWONNG");

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
    msg.setTimeStamp(0.415358009588);
    msg.setSource(52308U);
    msg.setSourceEntity(89U);
    msg.setDestination(24321U);
    msg.setDestinationEntity(46U);
    msg.command = 101U;
    msg.entities.assign("WKGKJATYEEVOWUMQCSBNKLNSUFDCPTGHKGQZLLCAAFLUZAROMPTSVNXOVHSWWTIFGFANLHSJWLSYREPCXPJQFTPZZZMSBAURVYZDUIPWMHOTVTKGLAQJKUHSMJCBOYDFBECUCHRJUTOKRZGJANIIKFX");

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
    msg.setTimeStamp(0.127493942381);
    msg.setSource(49456U);
    msg.setSourceEntity(141U);
    msg.setDestination(60161U);
    msg.setDestinationEntity(29U);
    msg.command = 29U;
    msg.entities.assign("LOTXKFNZLTXBLUUKHPIEDRSZPZFO");

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
    msg.setTimeStamp(0.320415954476);
    msg.setSource(16973U);
    msg.setSourceEntity(210U);
    msg.setDestination(18020U);
    msg.setDestinationEntity(28U);
    msg.command = 15U;
    msg.entities.assign("DZRVVIELWJPXLQTAKYYMIBSCPRKVBZYBTMOQXMQANLCGDSEYGXTKSZJVOWUGBFZKDEIXZIAVFWZLKVBRGRMPQMTUOVBDSR");

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
    msg.setTimeStamp(0.34068280616);
    msg.setSource(6610U);
    msg.setSourceEntity(94U);
    msg.setDestination(10834U);
    msg.setDestinationEntity(93U);
    msg.mcount = 145U;
    msg.mnames.assign("MBPMZQIYYVSJTIHNIGQRKRMZPRBMGNRURZKHAQLQKBTKHDFC");
    msg.ecount = 8U;
    msg.enames.assign("GRQEALESCPVZSBGAIGEBYOZXRXGLRNLDVTAJMJOGCRBMDMPNNVEXSQYPAUSJKUUTQESNYODKIZDM");
    msg.ccount = 77U;
    msg.cnames.assign("WDKQTSXEMKHAOXYJGMHVCOUZRDDVNTOFHFBJAKNGCSSDLQJXHRPMSZZVFJZATZXYFENZSBIGHINBX");
    msg.last_error.assign("HXIAMYHJWSOLDJAFEWGZPQXBHXBABVMWKYIJVKAVNTLARPRFTMDHCGNENQXSNJWZVJJUPYAXIPUYEBTXTGUFOWSBERBSATKYUQCVPTTZHIMSZOAFFCYIZPBEOENOSCNWHYZACMIKUOBDKWZ");
    msg.last_error_time = 0.808932001149;

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
    msg.setTimeStamp(0.713080635058);
    msg.setSource(45466U);
    msg.setSourceEntity(231U);
    msg.setDestination(25721U);
    msg.setDestinationEntity(166U);
    msg.mcount = 201U;
    msg.mnames.assign("KZIUBQEVCNJYOFNKKJRPGEZCZUXVPNGHOJAOOYJSYALVDQOXHMKTFFECMNNQRTLVLUAQNUUJTDZJKTDBIYHBMYWHXYQFWPJSWUQIMFDIKEQTHVZRMQS");
    msg.ecount = 54U;
    msg.enames.assign("XJFAXUCESATREDHYIVLHZAZJPMJUMDLGOFYIBDTRISUXKSQLTNRBFYQJTIKWVJBROJZEVNEBAPKUUVSOAZHOTYEMCIEWSVRQSVRWWEGIHCGAUILLNNUBHYGPW");
    msg.ccount = 233U;
    msg.cnames.assign("MDWWHOAIBUBAIGYLXQZUJPHACCYREQDOWWPZJQNSGENILVKMRRGENWBKSJAQVCZDYSOOHHTYMOPBTNEVZY");
    msg.last_error.assign("FVZJJKBNTXMXILTBLKGJVWQHOUUDWWEVICPPRNXFGGWQBCXNQYADVCNOOTZUZYSSHEFTDKTPAKBEUQCL");
    msg.last_error_time = 0.564561416479;

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
    msg.setTimeStamp(0.235842789929);
    msg.setSource(25891U);
    msg.setSourceEntity(122U);
    msg.setDestination(6798U);
    msg.setDestinationEntity(210U);
    msg.mcount = 144U;
    msg.mnames.assign("ANGCMIZMPVWCEBKDQUITIQJPBFXFYKPIFRTWSXCBLOLRSYGHAAENPKCYLKNDVOUHBFGEHAXBGMOUHDLKQUOJUOVTPQFWFUULRHTFJBFNBVXGYNQLJWSMYNYSNWVQTSICJLZCXJMNDEARTRGYEIOZDBEJZENVP");
    msg.ecount = 174U;
    msg.enames.assign("FTQHEMNVXCBLLHLQOSKENVUWKYZRHKIFEQJYINIVZAVYULLBLQPVDGIAYPHUPGCGDLSUXQTWKYWRTKCXFKWLJGDEJJQTKAYSPSMXYUKFSJJXZCHTRGRGOIZULYITHRNWFPCHNYBAVKSNONPJHVLG");
    msg.ccount = 165U;
    msg.cnames.assign("ZIRXYRRQVHJKDSABXBNYVVDKCWKUKCQGOCAGWJQGNXMKINDLXFPPXGFEDHOBFPLHNFDMZVWQOLTACBJQSZTYWDSFRTZUVHULQQFYELLWXLYJCIEHESEVHAGVXWUQHWVBAJSXBCMCPLCAGKYFKFPXUJPTZNYTZEGC");
    msg.last_error.assign("DLUSVIOKRKKYRQEWWJMRPPSSWDLZHIYMIWVQAOKGYGPDSVAFKFHADUPUIXRCZVTNEGALIOBRJCGDOTZPNCFRKTYXCYKWIBTXBISMLWCNWPHMXXJXNHQYTAAEYLIVVSKJQYJQUUFJNCEIJTJSMGPPBFNZTPRSFFMQUBYZRQXMFDMGQRNCYKGEFBXWRDNGISLGOHZLEBXDAGHAMAUVECUANEQLZOJOUHQFOCXHWKTCSVETZMWDZHZ");
    msg.last_error_time = 0.53116947956;

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
    msg.setTimeStamp(0.368597715706);
    msg.setSource(18470U);
    msg.setSourceEntity(57U);
    msg.setDestination(1010U);
    msg.setDestinationEntity(1U);
    msg.mask = 236U;
    msg.max_depth = 0.1887673753;
    msg.min_altitude = 0.803204022144;
    msg.max_altitude = 0.626896365142;
    msg.min_speed = 0.384648992884;
    msg.max_speed = 0.217722564612;
    msg.max_vrate = 0.258267118425;
    msg.lat = 0.292542204003;
    msg.lon = 0.351352377396;
    msg.orientation = 0.202432244766;
    msg.width = 0.951153458908;
    msg.length = 0.90704949188;

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
    msg.setTimeStamp(0.300774873194);
    msg.setSource(42251U);
    msg.setSourceEntity(118U);
    msg.setDestination(33153U);
    msg.setDestinationEntity(202U);
    msg.mask = 48U;
    msg.max_depth = 0.798688747957;
    msg.min_altitude = 0.60247787446;
    msg.max_altitude = 0.631438718661;
    msg.min_speed = 0.278898836665;
    msg.max_speed = 0.464545610511;
    msg.max_vrate = 0.495457938403;
    msg.lat = 0.699687924522;
    msg.lon = 0.371377273495;
    msg.orientation = 0.390354916147;
    msg.width = 0.605739064722;
    msg.length = 0.382850165798;

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
    msg.setTimeStamp(0.706667361777);
    msg.setSource(35212U);
    msg.setSourceEntity(167U);
    msg.setDestination(18165U);
    msg.setDestinationEntity(210U);
    msg.mask = 30U;
    msg.max_depth = 0.809780676921;
    msg.min_altitude = 0.367849540488;
    msg.max_altitude = 0.992693839913;
    msg.min_speed = 0.855622325353;
    msg.max_speed = 0.890105800446;
    msg.max_vrate = 0.970207729509;
    msg.lat = 0.50936218403;
    msg.lon = 0.286244477418;
    msg.orientation = 0.974702979569;
    msg.width = 0.771503910303;
    msg.length = 0.626508503393;

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
    msg.setTimeStamp(0.349681321993);
    msg.setSource(14777U);
    msg.setSourceEntity(66U);
    msg.setDestination(34545U);
    msg.setDestinationEntity(5U);

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
    msg.setTimeStamp(0.909166015635);
    msg.setSource(2409U);
    msg.setSourceEntity(200U);
    msg.setDestination(60150U);
    msg.setDestinationEntity(56U);

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
    msg.setTimeStamp(0.488991087898);
    msg.setSource(32697U);
    msg.setSourceEntity(86U);
    msg.setDestination(32373U);
    msg.setDestinationEntity(87U);

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
    msg.setTimeStamp(0.785942029811);
    msg.setSource(44974U);
    msg.setSourceEntity(15U);
    msg.setDestination(2821U);
    msg.setDestinationEntity(104U);
    msg.duration = 39620U;

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
    msg.setTimeStamp(0.0807534894094);
    msg.setSource(57491U);
    msg.setSourceEntity(221U);
    msg.setDestination(42220U);
    msg.setDestinationEntity(250U);
    msg.duration = 49782U;

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
    msg.setTimeStamp(0.619788019174);
    msg.setSource(58724U);
    msg.setSourceEntity(135U);
    msg.setDestination(7413U);
    msg.setDestinationEntity(56U);
    msg.duration = 51144U;

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
    msg.setTimeStamp(0.24429358751);
    msg.setSource(2664U);
    msg.setSourceEntity(67U);
    msg.setDestination(26307U);
    msg.setDestinationEntity(39U);
    msg.enable = 26U;
    msg.mask = 1829060090U;
    msg.scope_ref = 90076424U;

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
    msg.setTimeStamp(0.13673549386);
    msg.setSource(51954U);
    msg.setSourceEntity(116U);
    msg.setDestination(41343U);
    msg.setDestinationEntity(77U);
    msg.enable = 248U;
    msg.mask = 3877981119U;
    msg.scope_ref = 987778249U;

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
    msg.setTimeStamp(0.952897047551);
    msg.setSource(29377U);
    msg.setSourceEntity(183U);
    msg.setDestination(57268U);
    msg.setDestinationEntity(181U);
    msg.enable = 239U;
    msg.mask = 3471457436U;
    msg.scope_ref = 3137443753U;

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
    msg.setTimeStamp(0.172236521055);
    msg.setSource(59392U);
    msg.setSourceEntity(236U);
    msg.setDestination(44766U);
    msg.setDestinationEntity(197U);
    msg.medium = 83U;

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
    msg.setTimeStamp(0.376193017375);
    msg.setSource(35308U);
    msg.setSourceEntity(198U);
    msg.setDestination(11481U);
    msg.setDestinationEntity(126U);
    msg.medium = 110U;

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
    msg.setTimeStamp(0.40429246032);
    msg.setSource(40325U);
    msg.setSourceEntity(162U);
    msg.setDestination(55872U);
    msg.setDestinationEntity(115U);
    msg.medium = 146U;

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
    msg.setTimeStamp(0.279670061291);
    msg.setSource(58474U);
    msg.setSourceEntity(150U);
    msg.setDestination(41329U);
    msg.setDestinationEntity(194U);
    msg.value = 0.354148131958;
    msg.type = 24U;

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
    msg.setTimeStamp(0.0597502111863);
    msg.setSource(37064U);
    msg.setSourceEntity(52U);
    msg.setDestination(24371U);
    msg.setDestinationEntity(147U);
    msg.value = 0.898887599867;
    msg.type = 132U;

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
    msg.setTimeStamp(0.389600734823);
    msg.setSource(535U);
    msg.setSourceEntity(99U);
    msg.setDestination(25467U);
    msg.setDestinationEntity(150U);
    msg.value = 0.910764741493;
    msg.type = 66U;

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
    msg.setTimeStamp(0.628293826772);
    msg.setSource(13860U);
    msg.setSourceEntity(85U);
    msg.setDestination(17617U);
    msg.setDestinationEntity(53U);
    msg.possimerr = 0.631655356551;
    msg.converg = 0.287347861118;
    msg.turbulence = 0.0546279425302;
    msg.possimmon = 107U;
    msg.commmon = 27U;
    msg.convergmon = 10U;

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
    msg.setTimeStamp(0.325830580476);
    msg.setSource(4205U);
    msg.setSourceEntity(214U);
    msg.setDestination(13253U);
    msg.setDestinationEntity(34U);
    msg.possimerr = 0.974873547593;
    msg.converg = 0.771715213711;
    msg.turbulence = 0.00174517322806;
    msg.possimmon = 72U;
    msg.commmon = 64U;
    msg.convergmon = 164U;

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
    msg.setTimeStamp(0.302742149301);
    msg.setSource(15780U);
    msg.setSourceEntity(161U);
    msg.setDestination(42895U);
    msg.setDestinationEntity(28U);
    msg.possimerr = 0.00247571464613;
    msg.converg = 0.614238289576;
    msg.turbulence = 0.409446231523;
    msg.possimmon = 140U;
    msg.commmon = 143U;
    msg.convergmon = 7U;

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
    msg.setTimeStamp(0.894039476616);
    msg.setSource(9928U);
    msg.setSourceEntity(56U);
    msg.setDestination(3465U);
    msg.setDestinationEntity(99U);
    msg.autonomy = 133U;
    msg.mode.assign("ALWNIXQPRAGKJJHENENTFXMIQAWOFCHDBSLHLJXVWFCODHEUUEWRKYXYNIUQJLXEZVZYCULRSBCNMYMYADHBZTAFRPQKRPJNHQOOWCWSIKVJAUXTXFQWJGIQYCVPPSJTWHLBMKEEVCAKIDZNIWGPMMZRAEYVHYTTVBKLRRPKUDIGDBQPAOVGLXTBPDBFKXIGBPCCZSJRSOJEYTNNLLFMGSKMUDUCAYSHTUZT");

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
    msg.setTimeStamp(0.79685935779);
    msg.setSource(19732U);
    msg.setSourceEntity(84U);
    msg.setDestination(61156U);
    msg.setDestinationEntity(104U);
    msg.autonomy = 203U;
    msg.mode.assign("XONTWDDUKJZWKBYIZLSHZQVXPNJPGVVEKXQLJAMGKGCFBDQUUIDANLAOWLPQHJVXZUAHXIOPRECFZVPAJWEUHBOPR");

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
    msg.setTimeStamp(0.690122699095);
    msg.setSource(35359U);
    msg.setSourceEntity(122U);
    msg.setDestination(45830U);
    msg.setDestinationEntity(126U);
    msg.autonomy = 141U;
    msg.mode.assign("PXVKBGYCIHWCKHJPFLXFYANNPOLEESROAOGUZLWJCUTMCSTWEWTTEJLTZGSNUILEPYZLHERMZBQVSZVOJIFYMGMEXCEMNGBVAIWXPQKKUYJZDXSMLOZXKU");

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
    msg.setTimeStamp(0.264745764317);
    msg.setSource(5165U);
    msg.setSourceEntity(116U);
    msg.setDestination(7346U);
    msg.setDestinationEntity(155U);
    msg.type = 98U;
    msg.op = 35U;
    msg.possimerr = 0.585934174174;
    msg.converg = 0.813189108553;
    msg.turbulence = 0.235537071714;
    msg.possimmon = 230U;
    msg.commmon = 220U;
    msg.convergmon = 11U;

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
    msg.setTimeStamp(0.910451159592);
    msg.setSource(19928U);
    msg.setSourceEntity(55U);
    msg.setDestination(38856U);
    msg.setDestinationEntity(14U);
    msg.type = 43U;
    msg.op = 81U;
    msg.possimerr = 0.365789888769;
    msg.converg = 0.774545864399;
    msg.turbulence = 0.75315533814;
    msg.possimmon = 150U;
    msg.commmon = 184U;
    msg.convergmon = 72U;

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
    msg.setTimeStamp(0.37130508494);
    msg.setSource(61205U);
    msg.setSourceEntity(77U);
    msg.setDestination(41509U);
    msg.setDestinationEntity(109U);
    msg.type = 153U;
    msg.op = 150U;
    msg.possimerr = 0.218707745184;
    msg.converg = 0.599048667184;
    msg.turbulence = 0.190705337374;
    msg.possimmon = 250U;
    msg.commmon = 23U;
    msg.convergmon = 227U;

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
    msg.setTimeStamp(0.636121970746);
    msg.setSource(37765U);
    msg.setSourceEntity(163U);
    msg.setDestination(40344U);
    msg.setDestinationEntity(0U);
    msg.op = 44U;
    msg.comm_interface = 214U;
    msg.period = 14173U;
    msg.sys_dst.assign("DTMVJDIRLMDTZUYEIZSKTTYCHVEOUYQGMZMCKDRCUYDCDKTHLHVLMELKNPTOJDJVGQWEAWGEYSWQIXTZCFFEKJAVAVVBYBGNSOPHHWFXLRRAVZQIFBOOIFHCUSOJHZRFQMGZG");

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
    msg.setTimeStamp(0.123055248759);
    msg.setSource(10950U);
    msg.setSourceEntity(22U);
    msg.setDestination(35817U);
    msg.setDestinationEntity(159U);
    msg.op = 231U;
    msg.comm_interface = 175U;
    msg.period = 30306U;
    msg.sys_dst.assign("ADVZAMTSQUDOIGIRUTVNSBHBDKVPDTVXSKVJRWCWHUYUHNWFRBMVCWLSYYPTIGEPKOCLPRESHAZKGDEPJDMQWGFREZCVKRSTQVYJFQPMBUBAFQTXLSRYCVEZNUOZNSCCMPIGLZWPFNEYOOIHDTWAWXGUPBHQLI");

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
    msg.setTimeStamp(0.612942233928);
    msg.setSource(23489U);
    msg.setSourceEntity(185U);
    msg.setDestination(36915U);
    msg.setDestinationEntity(2U);
    msg.op = 206U;
    msg.comm_interface = 95U;
    msg.period = 36677U;
    msg.sys_dst.assign("IGRNBGHFCARBPEFYLEVKIWJIVKTDXBKGQJZULMNEBXWUCFSVDTXRDJYIYWDLPZYYPIVXRQSAKTEYYHJQQLMVPGSNEJASAACSHCMQORZLJJPZHZMHTJWVXMACTAU");

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
    msg.setTimeStamp(0.695367028398);
    msg.setSource(29665U);
    msg.setSourceEntity(44U);
    msg.setDestination(17186U);
    msg.setDestinationEntity(84U);
    msg.stime = 2517842079U;
    msg.latitude = 0.791252911721;
    msg.longitude = 0.233494417068;
    msg.altitude = 24438U;
    msg.depth = 51578U;
    msg.heading = 33626U;
    msg.speed = 16477;
    msg.fuel = 37;
    msg.exec_state = -93;
    msg.plan_checksum = 46846U;

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
    msg.setTimeStamp(0.464137540341);
    msg.setSource(7021U);
    msg.setSourceEntity(80U);
    msg.setDestination(32670U);
    msg.setDestinationEntity(166U);
    msg.stime = 2930265452U;
    msg.latitude = 0.546760741163;
    msg.longitude = 0.560582843085;
    msg.altitude = 8703U;
    msg.depth = 4934U;
    msg.heading = 13614U;
    msg.speed = 26683;
    msg.fuel = -97;
    msg.exec_state = -49;
    msg.plan_checksum = 50419U;

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
    msg.setTimeStamp(0.685337749466);
    msg.setSource(35709U);
    msg.setSourceEntity(43U);
    msg.setDestination(62014U);
    msg.setDestinationEntity(158U);
    msg.stime = 4149655697U;
    msg.latitude = 0.158790122072;
    msg.longitude = 0.15711741139;
    msg.altitude = 42883U;
    msg.depth = 49370U;
    msg.heading = 33576U;
    msg.speed = 11632;
    msg.fuel = 72;
    msg.exec_state = 109;
    msg.plan_checksum = 21187U;

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
    msg.setTimeStamp(0.50681893699);
    msg.setSource(36871U);
    msg.setSourceEntity(37U);
    msg.setDestination(40803U);
    msg.setDestinationEntity(37U);
    msg.req_id = 61220U;
    msg.comm_mean = 43U;
    msg.destination.assign("GEIYZZUXEJADWGCTNERMFWCXZQLVFJIXLXOBOTWCHDDKGPWUKVDXZJEKOERWSHOXNYNQMQVXZI");
    msg.deadline = 0.440143177962;
    msg.range = 0.809307996329;
    msg.data_mode = 88U;
    IMC::CompressedHistory tmp_msg_0;
    tmp_msg_0.base_lat = 0.525490341167;
    tmp_msg_0.base_lon = 0.995228302402;
    tmp_msg_0.base_time = 0.989582364662;
    const char tmp_tmp_msg_0_0[] = {-18, -8, -38, 34, 58, -25, -96, -116, 78, 11, -31, -54, 92, -46, -116, 111, -86, 78, 30, -36, 52, 94, -93, -125, -11, -86, 50, 60, -62, 37, -5, -43, 11, 8, 78, -50, -6, -62, 0, -82, -100, -121, 18, 21, -103, -14, 38, -116, 67, 116, -51, -43, 47, 72, 23, -26, -84, 22, -35, -4, 16, -66, 85, 46, 87, 41, -89, -20, -7, 97, -9, 118, -51, 40, -76, -38, -126, 13, -86, -113, -53, 22, 95, 106, 97, -98, -51, 69, 110, 97, -96, -22, -127, -78, 82, 88, 13, -114, 99, -87, -10, 73, -88, -30, -44, 116, 44, 63, -20, 108, -42, 106, 61, -20, -10, -124, 37, -18, -35};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("LTZNRXRYHYADYFBMMJLDVAIZJEINYZIBFIZAIPSCQUJOKUEAHYEBJCZIFGGTRXSKQZXZUSTTSKDEGRYENPTQDKSCVYWGWNKTOGDMHGXMEXWRPP");
    const char tmp_msg_1[] = {121, 114, 4, -79, -21, 125, 61, -30, 100, 56, 120, 8, 63};
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
    msg.setTimeStamp(0.553361982745);
    msg.setSource(30167U);
    msg.setSourceEntity(68U);
    msg.setDestination(26539U);
    msg.setDestinationEntity(156U);
    msg.req_id = 61168U;
    msg.comm_mean = 65U;
    msg.destination.assign("KZCBQTZLRXREWVAUHBRKISYZLUPBQNXMGCMOTZBTMHZPKMSAONQJVAOKDFZBVSNPCKILKAKVNUXXJCAWCJGGCOWCDWBTWBRYNQKMPNPMMHGIUBEDLETGWXXADVOUVZGWADCHQVFYDTH");
    msg.deadline = 0.2757583638;
    msg.range = 0.958750045961;
    msg.data_mode = 234U;
    IMC::CompassHeading tmp_msg_0;
    tmp_msg_0.time = 0.9664313182;
    tmp_msg_0.ang = 0.803076128104;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("ZPKMKYOLFADKAQILHOTHYXBCSABQPMAJRBGSYFYWDDWEUGSQVCYUSXOTLJJFEHHAWLKJNHRRHVVENFVNLTEUWWFKQSTIGUQQDMWUVTCIHP");
    const char tmp_msg_1[] = {72, 41, 63, 45, 6, -97, 83, -101, 62, -61, 118, 27, -110, -10, -79, -115, -4, 57, -53, -40, -70, -38, -42, 33, -51, -25, -12, 125, 60, -60, 36, 69, -76, -63, -120, 7, 17, 43, -100, 9, 55, 27, -86, 92, -11, 5, -62, 101, -120, 37, 114, -22, 77, 48, 22, -81, -123, -52, -111, -119, 105, 23, -56, -73, 113, 126, 2, -42, 100, 69, -80};
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
    msg.setTimeStamp(0.357013061599);
    msg.setSource(52161U);
    msg.setSourceEntity(158U);
    msg.setDestination(48605U);
    msg.setDestinationEntity(98U);
    msg.req_id = 63067U;
    msg.comm_mean = 44U;
    msg.destination.assign("BKSWXBFTFMSVMMQEZTVHL");
    msg.deadline = 0.167678684429;
    msg.range = 0.0799134619248;
    msg.data_mode = 239U;
    IMC::ExternalNavData tmp_msg_0;
    IMC::EstimatedState tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.632195811284;
    tmp_tmp_msg_0_0.lon = 0.853822478091;
    tmp_tmp_msg_0_0.height = 0.0202883256488;
    tmp_tmp_msg_0_0.x = 0.58687137402;
    tmp_tmp_msg_0_0.y = 0.279468675337;
    tmp_tmp_msg_0_0.z = 0.878936278993;
    tmp_tmp_msg_0_0.phi = 0.164824656081;
    tmp_tmp_msg_0_0.theta = 0.469731490708;
    tmp_tmp_msg_0_0.psi = 0.236680654152;
    tmp_tmp_msg_0_0.u = 0.118217031488;
    tmp_tmp_msg_0_0.v = 0.544524461693;
    tmp_tmp_msg_0_0.w = 0.848459769948;
    tmp_tmp_msg_0_0.vx = 0.425862201584;
    tmp_tmp_msg_0_0.vy = 0.20925261141;
    tmp_tmp_msg_0_0.vz = 0.915282679886;
    tmp_tmp_msg_0_0.p = 0.866861396393;
    tmp_tmp_msg_0_0.q = 0.554379690961;
    tmp_tmp_msg_0_0.r = 0.541441668513;
    tmp_tmp_msg_0_0.depth = 0.834973494967;
    tmp_tmp_msg_0_0.alt = 0.933317572172;
    tmp_msg_0.state.set(tmp_tmp_msg_0_0);
    tmp_msg_0.type = 119U;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("LNSYUIVVHOHIHDGABR");
    const char tmp_msg_1[] = {73, -74, -49, -67, -36, 58, -60, 36, 116, -98, 22, 90, 103, -125, -62, -61, -64, -58, -27, -104, 91, 100, 69, -122, 119, 4, 36, 44, 84, -124, -26, 8, 24, -101, 11, 73, -91, 25, 24, -51, 119, 36, 28, -45, 102, 42, -107, -103, -65, 109, -38, -10, 82, -3, 12, -20, 116, 66, -90, 55, 61, -72, -45, 51, 117, -118, -34, 74, 114, 66, 116, -37, 56, -14, 0, 22, 24, -101, -105, 59, -69, -93, -54, 47, -105, 34, -123, 67, -52, -1, 116, 70, 5, -53, -91, -24, 81, -83, -3};
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
    msg.setTimeStamp(0.67521910546);
    msg.setSource(13826U);
    msg.setSourceEntity(119U);
    msg.setDestination(46523U);
    msg.setDestinationEntity(49U);
    msg.req_id = 12122U;
    msg.status = 212U;
    msg.range = 0.896308940084;
    msg.info.assign("NAFRCXQXJCGLTKIZYKOOWXNPRHOERERFQRNCVKOEBYPIKTKWBKOSAWEGTCWWAYLGNRXGPYYJPTGSSQVMMJNDXLISCOHFMZWMUIHRUJAVMLERYRBZGFTEFIFQLSJZWEBAYXDCMPOQUBHVVLELYLPABVHOETSXNICYGRAQUFBSK");

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
    msg.setTimeStamp(0.734859320827);
    msg.setSource(18704U);
    msg.setSourceEntity(185U);
    msg.setDestination(37281U);
    msg.setDestinationEntity(239U);
    msg.req_id = 20011U;
    msg.status = 207U;
    msg.range = 0.359966093862;
    msg.info.assign("WYASBDWNGODDDXNBHNXJDCAZIRHOKSYHRVNNBHJTEJYRBMHHTOKILJRKSFTWVUVWZLEAIBZRIFRTCXPVEQLQQXHYPKCRWJAVFNIEHQTTNJUZZUKWMYFVKNQOFGLHPBEXGFZGJMBQFTMOGELLDTCDMDSKOVMPVUWYUOPAEADUMVEPQCBGCLYBOBGPSVYLWDWOMSNPXPNAFCXRSPSZGIEGIKGZTUMILWJAHOLREUIFQQUFZSSARUAXIYZKYCQJT");

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
    msg.setTimeStamp(0.930916721792);
    msg.setSource(49619U);
    msg.setSourceEntity(164U);
    msg.setDestination(62554U);
    msg.setDestinationEntity(62U);
    msg.req_id = 51879U;
    msg.status = 61U;
    msg.range = 0.768655063967;
    msg.info.assign("WGBULCBQIFZPWBPCLRITOYAUMMEMKSBBRHRTPEDODJCQIHYNIFWNHPEYLWFKJNIWFNFJCFZYQVX");

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
    msg.setTimeStamp(0.284685048531);
    msg.setSource(47709U);
    msg.setSourceEntity(246U);
    msg.setDestination(21768U);
    msg.setDestinationEntity(108U);
    msg.req_id = 61720U;
    msg.destination.assign("JKUADPBQXSZWNRGEDKRKNRTHDNTP");
    msg.timeout = 0.372212885211;
    msg.sms_text.assign("VEUOWBEXRGBDPKWSUDTZPLCNQSJMBKYMFKNDXIFSSPVLHRKVSQOXNPLVZTRRKHOIWBHFZHUSCLNAVPFADCDZGA");

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
    msg.setTimeStamp(0.613829034625);
    msg.setSource(56500U);
    msg.setSourceEntity(203U);
    msg.setDestination(25829U);
    msg.setDestinationEntity(183U);
    msg.req_id = 1647U;
    msg.destination.assign("NRRRLEVAWLOPDKJISZNYAABRSEXJXUWZQKNNOUNTKGTZMIYMCDHBDMWFDTBYRIPYYCKWSUIKVWPNMGBTBIPLJWHANJOJNEXGHLBGXELZREGUBVTWAFCIZZREXFGIOEQGHFOGPFSLNSMZKVKQMLHZQOTPPQFDXWYCUVEQWHJROPBDQGXMUAUACIDUZRMIHTFZDQHYJYJ");
    msg.timeout = 0.46828494425;
    msg.sms_text.assign("VXOOHBDCFADDKSZRWPQNKVKRFGADYAMINYGTPXLLJIASFBLLXZKHJEUUDFIWBCLGQESHUAOUMPJGTZCPITTEDRVVCIBHTBEFRPJWATUOFYGRWNCQOJUZZZCDQRZNNTYNOAKHDKXQJQPWVYFPMEDBKJQLCPXYYI");

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
    msg.setTimeStamp(0.651858083462);
    msg.setSource(65352U);
    msg.setSourceEntity(220U);
    msg.setDestination(35414U);
    msg.setDestinationEntity(207U);
    msg.req_id = 60498U;
    msg.destination.assign("TVJTLPFMJFCVHQZAIYITGXRUFEGIPEEIAPZZDFTBNAJXBDAXXSLECQVZYPVDHKXJNADTYGLPMFRSWWZNWDULOQMAYLLQHNSJ");
    msg.timeout = 0.260538333192;
    msg.sms_text.assign("HYXHYVISRKUJHVCPDSQPDBCQKPYJZRWUJLKFIEWLLORMDIGONDMYAIWFZEEQZINTCWDVIOBYWBOYSTBXUEPSGJMHUDNUHZZMNKTIHLYAZWSIAFQPYLTYOGPEPJFBJMBADABZRTACVMKCNPXJZXYNEUQXPURLMJBVRFOHRMIVSVICOFWXHNGFEBLUHUTXQQAVOGNMQFXAPVNWDSNTSAKXMSKRLTUTGRJEGD");

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
    msg.setTimeStamp(0.0742636488999);
    msg.setSource(40907U);
    msg.setSourceEntity(90U);
    msg.setDestination(30479U);
    msg.setDestinationEntity(42U);
    msg.req_id = 21217U;
    msg.status = 252U;
    msg.info.assign("CFAWVYENBIRKNAEYTCJXZMNTRISVCAGWQZBQLHMYRJAXMLPTVFLACMLWLSFZEXTLNICUZYHOYMODOEPPZICXVTJJEBMHGDKAHWBQVTVWHNXSMOGODSJYTGUDBGFETWDHPASJKWAAILCIOKNKWQLELYHZFGZOIDXGNPUDPWVKEPXDRPJRKCVXKHPXNBOIVU");

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
    msg.setTimeStamp(0.248832680111);
    msg.setSource(17493U);
    msg.setSourceEntity(65U);
    msg.setDestination(28191U);
    msg.setDestinationEntity(128U);
    msg.req_id = 35689U;
    msg.status = 59U;
    msg.info.assign("TKMRTQTCOLQHJIFPKJGZIPBRTBQATYSPKLUGKEDIVVHUBEZMYWVVJEPIZKDCTLIAOLZCYMVHNSWALSOKJLDKIRAMZIESVQBFCRHPCXZXGBAOJEGPPRPOOTARNBMYFCAMUJVFXHYMQJNHVNWBGHNILLEEIWFBXCOYMQTOWXTRQXNGPLKQFHWJMUVZTKYDGXZYSNFVESXOJDWZCFDUNYHUNDRJEWSPADSDG");

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
    msg.setTimeStamp(0.661655263866);
    msg.setSource(30670U);
    msg.setSourceEntity(219U);
    msg.setDestination(31194U);
    msg.setDestinationEntity(105U);
    msg.req_id = 11094U;
    msg.status = 194U;
    msg.info.assign("PORJYNIZEFITAGZKILF");

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
    msg.setTimeStamp(0.0407115773637);
    msg.setSource(60748U);
    msg.setSourceEntity(152U);
    msg.setDestination(12343U);
    msg.setDestinationEntity(21U);
    msg.state = 239U;

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
    msg.setTimeStamp(0.470110969114);
    msg.setSource(33735U);
    msg.setSourceEntity(174U);
    msg.setDestination(5778U);
    msg.setDestinationEntity(150U);
    msg.state = 174U;

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
    msg.setTimeStamp(0.498866414531);
    msg.setSource(7172U);
    msg.setSourceEntity(154U);
    msg.setDestination(26481U);
    msg.setDestinationEntity(169U);
    msg.state = 89U;

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
    msg.setTimeStamp(0.372520073301);
    msg.setSource(11632U);
    msg.setSourceEntity(22U);
    msg.setDestination(52919U);
    msg.setDestinationEntity(65U);
    msg.state = 84U;

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
    msg.setTimeStamp(0.502874951986);
    msg.setSource(60551U);
    msg.setSourceEntity(193U);
    msg.setDestination(24030U);
    msg.setDestinationEntity(247U);
    msg.state = 186U;

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
    msg.setTimeStamp(0.723867399387);
    msg.setSource(36829U);
    msg.setSourceEntity(119U);
    msg.setDestination(24885U);
    msg.setDestinationEntity(90U);
    msg.state = 137U;

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
    msg.setTimeStamp(0.575993232158);
    msg.setSource(34519U);
    msg.setSourceEntity(84U);
    msg.setDestination(5185U);
    msg.setDestinationEntity(200U);
    msg.req_id = 65237U;
    msg.destination.assign("URSZSBUCGVTROFIJYENXCJNUPZZUVCCQWTJPLGEKNQFRVDWCGYOCGMFRXLOMKVAHAKTSTVICGJVDMIRWUYPYOSNERLUFEYHDGOEIHQIYWXHCKTODRLQTPEGAMZOCITLUAXAGBRDPJEUBOANHSHHIZBPACBGKQNALOMXLSJKBZHJLZUIYYBEKNHXHLBVSMAPVWXQMRZAXZMOWWT");
    msg.timeout = 0.402534822927;
    IMC::ArmingState tmp_msg_0;
    tmp_msg_0.state = 51U;
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
    msg.setTimeStamp(0.626824958622);
    msg.setSource(50469U);
    msg.setSourceEntity(3U);
    msg.setDestination(44330U);
    msg.setDestinationEntity(68U);
    msg.req_id = 54654U;
    msg.destination.assign("CDETPWDTBIVVDBLHGZIMESWEZVOLRXTQIQXQSCUOWTMZJPPJEBSBMIKYVNSKGLOLQMDCNAZHXKNTAAXFHISGXJOPEZARRFCYVDYCVXLCTORBLGCKPHBYAXCHDESOHNJOFUUSNRWUXKPSWYKGJVGZYMHGNYTNPQQNMREEDFEGIADYAARXCJVRVFUUHHWJCBZPUKRBYBSDIPUVMJQFSQJAIKZUWNLUKGFLTQGFOOFHZITKLEQNP");
    msg.timeout = 0.862092575221;
    IMC::GetImageCoords tmp_msg_0;
    tmp_msg_0.camid = 180U;
    tmp_msg_0.x = 43323U;
    tmp_msg_0.y = 43115U;
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
    msg.setTimeStamp(0.406683275587);
    msg.setSource(18311U);
    msg.setSourceEntity(63U);
    msg.setDestination(18669U);
    msg.setDestinationEntity(59U);
    msg.req_id = 13258U;
    msg.destination.assign("WIHBJXSETNAZBQKBLKJPBJBRNTGCSSUPJKYTDVHAYLDCOFYOHGQPUCXKRDNOFVWNMVFXGXHUTAMQSGNETXWHDNMLUJIHQZVVTYGZJHHCIXIGZGIMFNAYZJTPMIKAVITCYGNDRVGYYAFWAUTOPVNMMEAOMKEJDWPEIZZSKGUELIBMQRHUXLSZCJWFCCRSFRFOKR");
    msg.timeout = 0.176394075549;
    IMC::YoYo tmp_msg_0;
    tmp_msg_0.timeout = 5575U;
    tmp_msg_0.lat = 0.782563277838;
    tmp_msg_0.lon = 0.13661174661;
    tmp_msg_0.z = 0.350064042702;
    tmp_msg_0.z_units = 72U;
    tmp_msg_0.amplitude = 0.523342212482;
    tmp_msg_0.pitch = 0.962892132107;
    tmp_msg_0.speed = 0.263163513159;
    tmp_msg_0.speed_units = 40U;
    tmp_msg_0.custom.assign("ZTHLMEMELDWPSSWFDUCKLQXNNSPVUZALSCRFLFRQMXTCBVHWIGUPOGKIXPLWMTKDCHPDDWGHBSVBKAQTCFIAEAJOPRMNJEMSNBYOZEFGDVLNJEYBADWRQVPYWUQVWEALVHUIOFZJCJKTHDATZQNGNCSZFZCGZDRCATOBOOKWYIYPRQUZQHSRYXMDQGTOKNJWHYUSEFAXQXHBYRGHXLRVIU");
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
    msg.setTimeStamp(0.0939221678844);
    msg.setSource(14522U);
    msg.setSourceEntity(158U);
    msg.setDestination(64160U);
    msg.setDestinationEntity(83U);
    msg.req_id = 63906U;
    msg.status = 216U;
    msg.info.assign("JHCOUXMDIUVHBZVYKSESKRKOKJCOJTMVDXAWWQBJVBNKEDCNGAFLAPPZTUBGVYESIITYSUZLOTQPVIFCMRLLXGTARIANMHHWPWAXSMGQHD");

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
    msg.setTimeStamp(0.463729649656);
    msg.setSource(5310U);
    msg.setSourceEntity(22U);
    msg.setDestination(18994U);
    msg.setDestinationEntity(38U);
    msg.req_id = 37202U;
    msg.status = 175U;
    msg.info.assign("MAXIKQFSOKZVDJWQFBUIEHWKDJELHDAVFBRQFTNVVXIYYZROSZUHKKTDQBUJLUJUMPONBPYFJLPWANZJVXCOYKWQVYRCOIBEEDQGKEYMWWLPQBPHTQWCGIUSOGBRPWWEHCYAMCVONMMPZGCINRILALCKXXIY");

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
    msg.setTimeStamp(0.779934180407);
    msg.setSource(17319U);
    msg.setSourceEntity(14U);
    msg.setDestination(5957U);
    msg.setDestinationEntity(15U);
    msg.req_id = 52207U;
    msg.status = 254U;
    msg.info.assign("TZMGEKPRATDYIHTMQAMGJHKNODLPXGQRGGXDIALFSHRQINSNWBITVJNSVNIJBSJFALDWVMSKQRHFVECNAMFCLJQDRMQVPOZHDPEPYTLZOUOGMAGBXSCWRGLYHYBSARMYZQSBTWHNXOPNJYNFOEODKUUKZRE");

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
    msg.setTimeStamp(0.329460900552);
    msg.setSource(20185U);
    msg.setSourceEntity(135U);
    msg.setDestination(24463U);
    msg.setDestinationEntity(25U);

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
    msg.setTimeStamp(0.199982848417);
    msg.setSource(27481U);
    msg.setSourceEntity(15U);
    msg.setDestination(61544U);
    msg.setDestinationEntity(243U);

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
    msg.setTimeStamp(0.885858891996);
    msg.setSource(41992U);
    msg.setSourceEntity(8U);
    msg.setDestination(64692U);
    msg.setDestinationEntity(61U);

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
    msg.setTimeStamp(0.378171894972);
    msg.setSource(61377U);
    msg.setSourceEntity(47U);
    msg.setDestination(38394U);
    msg.setDestinationEntity(73U);
    msg.plan_id.assign("DUBDJJUBKMVMXHSYDCNLFQHXOTKN");
    msg.description.assign("HBCKGCMVZDFXGOBIVJIHKEYPRMXUTDCSCTPFTMZLYTFEOCJLHRVHGAFIEKWUYDAKJFOWYWNMSYXPNTAMJWPNZAMQRBBC");
    msg.vnamespace.assign("JSPBZOBDUZVJPIAIRBTVMGXXFCBVNWMYPPNIZVJTPSWJEKDWTSQQHDSUWJWYZLHFPJDWIFOMXUIETZRZTEEHHMMXCYOTHGLNUXDTMGWCNRVFSULMHHAUBKDNLAKKKXOGDBGWTRXCQMPHARZECLXUOEWILCPOFEAPINLRGJBVHSAPIYKUNQQLCBBGCDLZYTSGVQSVXAGXFHNGOFEYENQSJYZZU");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("ZPSPEQZBZLSUVILAGKDPIDSMPDJSBRWHLMRXHNHVDGTMQSPSVCTCNGRBPXATPJFCGJVUHMZUXWHFAKONOJNOEJEQKSYJBPQPPUQYACZCOOYIEHWXTVBHIZEYGKLONCFQYJGDJNDKAZKLQIMEJLZRDZYKRGRJCIXSYWSMWRFWYTOALXWUWUXYAMGQFVXTNTNNFIEOYBITFVHQWRDLMCTUUDMHNVBUFSHXEBAVWFFUIOGLAGQVOTXMEIB");
    tmp_msg_0.value.assign("YNIKIQCGHZHDXMJSSROYPKXPNWAFSHDLATYFZFOXTQOFMFMTMKQWSZUHEXIAWAVNWMUHEVTKBJVBLAWECIDVSUDBRVNHEPKZZLOANWTTZNLNXUEJCRLBGRXBTBVPKYBR");
    tmp_msg_0.type = 126U;
    tmp_msg_0.access = 26U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("KGSXUJPAFTNECHWCCMTBBIEOTZEJINQOKQENICZEFCARXRDCRJZATMBDRRYDEVQXSHLGBBVPJXHYIJEUWIFNLNLHVOFBLWGOMMQUTBLLOYEOHQCKTKZLWCXQBMVRWKSPNVGPPUMMGAZTJHHAWVAGVZQHRRMAJXZTYDWSIQPSNSMJKFYAZYPCXUDUDSFDXX");
    IMC::PlanTransition tmp_msg_1;
    tmp_msg_1.source_man.assign("LUJOESKXLUDVFCPJRIMTVITCXSCDSCBRUZQVGTRAQCKTKDRCTOXITZOKASAOEEKIMUNUKXYKKBVEHOQOCPZNUXPHWFZVJIBNETMWTQNMQQXIBLVUGDMWRRQABDWDNBZCSLVHJEGBOFHOGSHGTCYL");
    tmp_msg_1.dest_man.assign("PNAAOVLOLFEFSMICRHQBIYFYOOUYVTRNUPBUDGBEQZGLNOFPGSSUTXHWDNDZYQCQDQUQXMHDYVRZVNINJBVUMSEFZMKTSXTOSCTNFZWANCXMIHUFGSVWKFEEOOFRKGXJGIABZVPGHHNHBJKDLPIRZJRAYUMJDIRMTBEALHIKYPJCWATGNLCRXSQXMAYLTAPGZVTTLADXBPEKMOZWWQEIDKWRDQSILBXFQGJKKHCRVJSYJCBEVYKJLW");
    tmp_msg_1.conditions.assign("KVCOSRVWXYZZWHPEJFDEOOITUJFIMMVAWSPNNQYWZDNZREASUDTQBMPSXLQZHFVMJFAUSMARAVIKRCXBHSQFBFJYNGTXPLYVKGEJGJVCEINJBTMHIFEWCWFYGXIWCMXRIOTWROLMIFWLIPNLMAORZKOBPBKHXGTTUUAUYJBOEPSJALKAVZHBPLHNKRNGQUQTDDDLYGEKEDCCKHDNIQYQ");
    msg.transitions.push_back(tmp_msg_1);

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
    msg.setTimeStamp(0.15466237458);
    msg.setSource(40044U);
    msg.setSourceEntity(111U);
    msg.setDestination(54164U);
    msg.setDestinationEntity(135U);
    msg.plan_id.assign("NRTCIUYTAVUQKHYQHZACWWOQBVPWADZMREDEWAIWRSYPJVEBKAEXMJLAVMIOTAPILOOVZFNCQGLPOYFWVKUTLCUUCFJWXSNZRAMQZPDJDEAJOSPHTBXPILFQLEICUXUGSVBYIFOZXEMUXIDKKQWGJWZNUKTYVZERAFTBYZGGRFYGNREHJQZMKHVBXXCVNPFGDNNDFLLSQGMNLDSTIPKEWOOHFGLSCHP");
    msg.description.assign("KUIYEZCVVZIPGSIFWOBIHDYJOAHSPPTWGNMKTSZFMSPEAJKWR");
    msg.vnamespace.assign("NKHWHCMYLSVRDGRNEQOAWDBIPBXDTONMKEFTJYAZKTSQNGEXRLHQVUNHRFGUCXLDSPMWIHQXDLXAPLDNADRBJAGCRBYZIOKTOLKXQZBNJJHJNTWVLFFYUDZRAVGVSOBQOUJISIFFQXYYZWPTJZFGKBOOKWZ");
    msg.start_man_id.assign("IZFAKJWOKQHAGHOIXWBSLYBHRYRUDKTCWHIKMMEFUUETGXNCWKWAQZYTJDLQAYUHPSZRFKKPUJERNIRVAUSOLEGIUQVNGLJPALJORUJCSMBCGLAXKM");
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.path_ref = 2722106962U;
    tmp_msg_0.start_lat = 0.388977517302;
    tmp_msg_0.start_lon = 0.447613614256;
    tmp_msg_0.start_z = 0.906917241305;
    tmp_msg_0.start_z_units = 104U;
    tmp_msg_0.end_lat = 0.693505225352;
    tmp_msg_0.end_lon = 0.764585493492;
    tmp_msg_0.end_z = 0.418867630845;
    tmp_msg_0.end_z_units = 80U;
    tmp_msg_0.speed = 0.763331181088;
    tmp_msg_0.speed_units = 16U;
    tmp_msg_0.lradius = 0.737998091515;
    tmp_msg_0.flags = 64U;
    msg.end_actions.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.362785826356);
    msg.setSource(10140U);
    msg.setSourceEntity(115U);
    msg.setDestination(3633U);
    msg.setDestinationEntity(165U);
    msg.plan_id.assign("ZLOINNOCXGLGETLRUSANCBFMIUFXVIEZXQBTNHBOANUVJDZQYCPFGDFLZWQJHQPUCUNHVJWMCVLKSUPYRFDCZYGXKQIXSYBHKUGJWJCDDGIIJEFBGKZRNDWDIMQHVELUNAMSYAWRHSFYZTSIKGGRVYCTXPLKCDQZTKOAMMTQYGOJLDEMYAPWMWFB");
    msg.description.assign("THLVIMWCZMHOCKZXSVFKKGZJOAPUURXITYTVQFDGGVPDFAQMNPGKJMAERYPZVJMKQOYRJLHNBLEKGSWPYJAGEKTNBMQIGSLYCHQUNCSGULHWIORHWSTAPAILUDAINKYRNFCHXOJCSKXYPHUEDQQC");
    msg.vnamespace.assign("MKVQCHFSQTLMZHBFUBOHPSSFRCFXFQAEUESZVYDONYJMHVPXNZBNWOYHWGFPSNYRNEZVPJLHGMPATGBGOYDJQLAQJUYYPPZRFIGWLZVOGMVUVWTVEXAKD");
    msg.start_man_id.assign("TZMGIBFTIMWLGOJVWSUFPKHQOEUBZJBHEMMGDNHPJSOVXVXUAHMQYKZSNKKKPDLGTENDHJGOIPFAWZSLPWAEQRJFWQNIERQSLJYRTULCUBYJOSQTBDQJAIFULPVIHARLCGKNNYSMTERFCNGSAPQKXHFFELICYTFHMGZKDOZBZDWZMVBSEXAMHNYYUQKCYVCXUTDIUBEEDMYPRTI");
    IMC::PlanTransition tmp_msg_0;
    tmp_msg_0.source_man.assign("YPIZUEPHQABLSKZFOJTUQJSMATRCOXAZPFATNHSBUDGLIOCLMGLCSKAZRVSWOACFWUQYDXJMAPPIESCIYSKRXLEHJMJPUEWREDFXBOABCXTNGXVYOYCNBWPQVWKBNLNGXENIJGUMZIOVUBFBUOITVXDONWHKFXWQPMJJQHUDVHGRJHJKTCWEYZPTWPBGNDZILFWZRNQYTHBQLZZSRSCVVQDTKHAEMKIYCFEODMHYNI");
    tmp_msg_0.dest_man.assign("OUVSQLSOQVLXWFESISBEATYJM");
    tmp_msg_0.conditions.assign("YQCCIEKPKQRZROLNHSLEFIQONECSPKYDPRXMHRNLBXZWZTLACGLDQIXHICNREJIYJGEUXVVUWAXZAGJZSMDCGFHEQKJHQBVYDLJAKBWRWUXNEABVUGJNYMSEPQZEZFEAVGTTRUQKBKXWTNMVHWPUNRVSSDTFIVYDSZALKOGOFLYRIRXGYHAPTPMCQCIWBGDHPMUSKBHFPOFABGWCWQINDVBXKWFHMPTXOYOMMNIMYLDFT");
    IMC::DesiredRoll tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.252925000019;
    tmp_msg_0.actions.push_back(tmp_tmp_msg_0_0);
    msg.transitions.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.602585270052);
    msg.setSource(41774U);
    msg.setSourceEntity(184U);
    msg.setDestination(30638U);
    msg.setDestinationEntity(131U);
    msg.maneuver_id.assign("WPUNFXRAFLRDXRJGWVAEWIFSDOTQQNANEUIGJJKCLSH");
    IMC::ScheduledGoto tmp_msg_0;
    tmp_msg_0.arrival_time = 0.605541111662;
    tmp_msg_0.lat = 0.585281284954;
    tmp_msg_0.lon = 0.269755155838;
    tmp_msg_0.z = 0.831328339184;
    tmp_msg_0.z_units = 105U;
    tmp_msg_0.travel_z = 0.885770790412;
    tmp_msg_0.travel_z_units = 154U;
    tmp_msg_0.delayed = 21U;
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
    msg.setTimeStamp(0.49845239802);
    msg.setSource(28983U);
    msg.setSourceEntity(77U);
    msg.setDestination(50090U);
    msg.setDestinationEntity(73U);
    msg.maneuver_id.assign("RLNFEANBTVULWIFHCWFDLUVKIXAYRBTDHQUCSSWYXOGGZCMFEVQWCBVZQCLSNCXOWPKXNIHKGTRERYGZXQVKNAQXOZSOMLIFDFCHENSZYJWEYPPDHFVUHUIPGPJTUSYSCOEZKVJIEHQOPAHSMFWMJGQTAKBBPNADXPJDKUAQIZYSGCDFRPLMFOTTGBLOHTDJYZVTRGYXMKEQAZUBNVN");
    IMC::FollowPoint tmp_msg_0;
    tmp_msg_0.target.assign("TYSAYLZPDLYHTKTIYJ");
    tmp_msg_0.max_speed = 0.221481732271;
    tmp_msg_0.speed_units = 16U;
    tmp_msg_0.lat = 0.521522548901;
    tmp_msg_0.lon = 0.833259823275;
    tmp_msg_0.z = 0.732225313619;
    tmp_msg_0.z_units = 43U;
    tmp_msg_0.custom.assign("XHTOGPXZVUJYYQHCGEBNLSZXXSVHWITGUPRUTYCTGFQDOGLGBJWNSIWJDWDTFNVPFUERLOTEAVPDXQLKCTRFCGYEZAHHAYJSNL");
    msg.data.set(tmp_msg_0);
    IMC::RemoteActions tmp_msg_1;
    tmp_msg_1.actions.assign("XAYKNKDDPWURQHIMOVJJPSGVNUTKKKEHHUVZFBYPVLZWIGFXQTXEWSVCXDOTBFFKPEMTKQAOAOAADCSBOWYWDMGZBORIPRETSWQJOIKSIIEYO");
    msg.start_actions.push_back(tmp_msg_1);
    IMC::LoggingControl tmp_msg_2;
    tmp_msg_2.op = 12U;
    tmp_msg_2.name.assign("WBHQDMMNWODYIABTEMAHZRZGTTUNPCAFXJIPVULOTJXVIBUHSVDQZZUOKKYGFLMGVTPABSRKTDJVUYJBWIDSNMDUCEQVAXERQFNDPZEYAQMLUDULEVOSRPAVJKJLHWSEPRWWNYAQOENCKLHRGZMSCXOXXKFSWHKZNWXEGDYVMBBCPNPKCSCLZSYZYGICIRSQIXOBEICMVQYQNTLKHQIFFRFDHHPGLFIHKOJWJWLJERFGUOTMJXTOXYRTF");
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
    msg.setTimeStamp(0.293382284801);
    msg.setSource(873U);
    msg.setSourceEntity(137U);
    msg.setDestination(29877U);
    msg.setDestinationEntity(110U);
    msg.maneuver_id.assign("XYJSPIVJHHDQJKZKPEYFMFIIBBNOCAKUDYJBINZLZSTTLGFSXQYQMNOCESKCUIAAYORWLJTCMDSYFBBWCRKSDSOWGIAYZTGBIPLAWAMGHXWNTGWARVXTXXXEPNOFQERODNUGPCUTJDDNFCEVLENRYAARXETJUSQIHDHMCZNTSQDSKCYLFPRHFGRXUWGMBL");
    IMC::Takeoff tmp_msg_0;
    tmp_msg_0.lat = 0.376544843555;
    tmp_msg_0.lon = 0.463306221145;
    tmp_msg_0.z = 0.236728431044;
    tmp_msg_0.z_units = 242U;
    tmp_msg_0.speed = 0.0850885641171;
    tmp_msg_0.speed_units = 124U;
    tmp_msg_0.takeoff_pitch = 0.92408844059;
    tmp_msg_0.custom.assign("UUBFUYXHJZANUOZBLNCDNINECRAIWZAHYQVGCCAPVXSCRYHOAGBSZFZLUNLQINMNLWPJTFRYFZSYJASKDYNSSVBGMJRHYYULXHXOHBLRXHWASHPKIBEIETMRZWOPZTVPCMXGXVQTKFQODVPPRQZOHEEDVVDBSEJBKMDDDOOXRWJBDLQKWATPXFEYMFBNDQPKEIGWMVIMIEUSEXMRAWCHGKIJUVPQZIYNGUSTRCJJA");
    msg.data.set(tmp_msg_0);

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
    msg.setTimeStamp(0.869720259114);
    msg.setSource(1475U);
    msg.setSourceEntity(228U);
    msg.setDestination(45748U);
    msg.setDestinationEntity(164U);
    msg.source_man.assign("FRDWMGMLBCLIATBRFAKJZPMMJCIVLMFFFYPKLWXOIIPAAGUBXRMGHOWYCHWQWXPGKABFKWMRWBVHKJQSODEVIJZCYXDZNDZRULCOYYEABZXTDXWUEQPPNBBBITUMOEENDVSCVNNLESBPRTFVZYAGGZU");
    msg.dest_man.assign("IUWJDEBBFAZIWDVZXNPEPGUZJCMBNBMMUAON");
    msg.conditions.assign("CNBBNKRUPESGLKDJEVHFUTFSZAMXOLHIFXJHRWYTNTCVXKHNN");
    IMC::FineOil tmp_msg_0;
    tmp_msg_0.value = 0.152696026536;
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
    msg.setTimeStamp(0.278314200136);
    msg.setSource(60170U);
    msg.setSourceEntity(133U);
    msg.setDestination(12651U);
    msg.setDestinationEntity(92U);
    msg.source_man.assign("AZFMNMZYZSOTEAUCICVBKPJDBLJVTLVEXBGBKCOUOXBTTAYUPKIJZSIGYZEANCCXHORRQOPQUAQYOHSOOTMQXMHWKASSHKHNWGRQYGSMWIDSHEDVUARVQGWZLNJPTUJFYNVXLLHMXFMWUDXGGPQEHWKAKIJTIDPFLRDXBBJPSKHNQRSGNBLAVFDYGCQPZDZIFWVJCXNYFCCKFOHVITFWWTGZDPEMEDZSMRNBRUYRU");
    msg.dest_man.assign("VDBCDOREGSFOOTDBOKRZUQEKMQITALKDBYLKSJIUIEXDBAUZTTFOJAFCUERIVBQ");
    msg.conditions.assign("LINCPJTZYKUSOAUBPTXSQHYIFISBEMSVNEJOWRYHYGDKAUIJOIZJAGGVMXQNVBWHOPXMXZKRFASDROXQUBTALRYFMITNZMIALLVNREBZVUUUNGZELCPGBSPCQNLEDQSCAWDKWWABHYICZYMKWNGZORCOJMVVRUGJMVXJDKWCZGHFREYTNLCPHETTIKLYEJSELAWDOFQQ");
    IMC::TelemetryMsg tmp_msg_0;
    tmp_msg_0.type = 107U;
    tmp_msg_0.req_id = 2432656173U;
    tmp_msg_0.ttl = 49009U;
    tmp_msg_0.code = 30U;
    tmp_msg_0.destination.assign("HSDKPEIHNUBYRVHFLTANFRHYUVKMQJHIPODAXNGWDKXKZUCXGJLZPGWDCQSYCRBSFKIYDQEDPRFBQIQBRPHXXAJFFNSYAONWUUSLEZCCDUNMYMPZTJEQLXYLWPKFYCLJBUBKFHMOFMJKDRTFXEXTZVGNGBSWZOBNYWHOJA");
    tmp_msg_0.source.assign("SNSKSIBOICBZBGPKCBNRWDVQKJHAUIGSXMZGXAEQISRPMQDBMBBPAKPHXIAEPKHHYXLVRDHLOJNEJHKYLYDYMNEPLRJJZKLQOERPHXCAITLSD");
    tmp_msg_0.acknowledge = 143U;
    tmp_msg_0.status = 204U;
    const char tmp_tmp_msg_0_0[] = {106, 122, -126, 102, -31, -24, 40, 33, -34, 74, -117, -60, 60, 56, 23, -74, -23, -34, -45, 103, 109, 96, -97, -127, -90, -46, 76, -43, -2, -3, -88, -60, 83, 107, 6, 46, 77, -55, -62, -105, 43, -118, -24, 71, -45, 84, -84, 25, -60, -79, 49, 40, 35, 92, -102, -24, 27, 14, 42, 83, -46, 82, -54, 11, -21, 100, 33, 56, 78, 98, 103, 33, 86, 86, -61, -88, -118, -13, -63, -82, 77, -114, -1, 19, 120, 123, -127, -10, 66, 30, -97, -63, -17, 67, -102, -1, 119, -127, -62, 102, 46, 23, -29, -68, -4, 121, 14, -67, 103, 95, -75, 82, 110, -105, 62, 7, 81, -42, 111, -66, -78, -110, -114, -9, -106, -82, -50, 54, 85, -41, -91, -38, -119, 52, -72, 26, 104, -15, 104, -114, -35, 30, 6, -125, 17, -74, 90, -54, -23, 73, -95, -57, -13, 37, 78, -6, 109, 88, -45, 106, -113, 84, 66, -97, -28, 66, 13, 79, -11, -88, -115, -43, -71, 48, -124, 81, 30, 86, 103, 75, 120, 5, 8, 23, -104, -12, 29, 14, -101, 65, -9, 73, -31, -73, -45, -117, -100, 119, -72, -29, -99, 107, -79, -84, -84, 53, 117, 75, -60, 124, 61, -112, 35, 102, 49, -122, 78, 94};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.602393483721);
    msg.setSource(30354U);
    msg.setSourceEntity(81U);
    msg.setDestination(9136U);
    msg.setDestinationEntity(221U);
    msg.source_man.assign("NXPECPUPRRYJQCDERAUOAHYDIUKYEENHYIJSBEMQRDKJERJLIKHXYEVDXAVUOTOKCKILXIUCISLGPBAZSAMOGYXXFBHHARSFEGDZJILOVWGWLSQUTYUBGABCEFVWFLTHXAJTRSBNMPUOWDVGDBQHNLMHCQLZXPVVTFTUFKWFIFTZITQMPLYZ");
    msg.dest_man.assign("AZGHOAFTAXJJWYJSAGTXUKKIEJDODXEPXVKGGBAISWZTQDRLUYKHZPAPOXCUIWIRZTOLG");
    msg.conditions.assign("MCUVKINVHRBDZJWWWBXQGUQVUSGUOPQDJZNFA");
    IMC::FormationPlanExecution tmp_msg_0;
    tmp_msg_0.group_name.assign("VIHIBFWKGOTLIJCTRCDFIBLMMUDMZZYRUBLAYCKKAHSQUXYYSIMMYBCAFKGLJBCGYEENAKYBZFNXLHQQRAVKTTGTKFFSNWZQTVGANMJZIYLDCLRGJHXSXJYOPOORLOSKFXDNJCPWEPDQSXJXDHORFEDHONBGWUDJQVBZVX");
    tmp_msg_0.formation_name.assign("RPAZCSXUGGFTOTYYVGXCFCKJKSQSLWXIMNLJMYUPPEMACECBKPQMGXKLXTOCYCOSJLWARHDVKEWLJQJPRIKUXBNHXMTGNZAFBDUFVKSPWQLIUHAZZGDOIXJHMFHLOFCSEBVNDORDTSJDBRSNUSARUQZEDVMVENIBRNVHYRFYTYVQPAOJIOBIMMEFJYEGBNQUAUYBWKGHCXLIZ");
    tmp_msg_0.plan_id.assign("PSTXHFPAJABMUYWMTFCBCZRMGSTWNESZFODSKACSQGJFHPLZWUUAGVVNHHARIMUDLZSVZXLZOQLNIKIQBUYGJNLWEGEOXYVKNTDQJAOBDIGOYFCRXJZNXAZM");
    tmp_msg_0.description.assign("THAOJFXNLUDNQKTUKVKSSBILCTCAVUHYFDOMUGRXZMWEQQABFERVQBBNMCPPVKVELJAZZEMSDSMHDEHGNLNQSXPYWSVMNIDKEBABWIRJBYPITSJQBXEHCXGJIXOHGFIRYRKCYKKYLJECOXGLDTOALCFZUGPUYPTRZVVDQLMFAIWUZWIEFDSHCBCMOWDGGYXSCDJVMJIZEQRTOYLULWZQKWTRBFZJGOVFNZHPPQHAORRWHNUN");
    tmp_msg_0.leader_speed = 0.493699771334;
    tmp_msg_0.leader_bank_lim = 0.865227514756;
    tmp_msg_0.pos_sim_err_lim = 0.653768618304;
    tmp_msg_0.pos_sim_err_wrn = 0.794936949656;
    tmp_msg_0.pos_sim_err_timeout = 17250U;
    tmp_msg_0.converg_max = 0.90025753233;
    tmp_msg_0.converg_timeout = 65438U;
    tmp_msg_0.comms_timeout = 51438U;
    tmp_msg_0.turb_lim = 0.801137972216;
    tmp_msg_0.custom.assign("CKYFRWHAWDMPUJKRZOEAQLBSJNOERFCVFVARNTOLHOZOHKYTMWYLKSSGHKIJGKLNAPXQXXZVUAWKMGLUQGUTVYBOJOBXDQBUNFALRFHVNUVNSQWITTDPACMBSTXGICDJHTQBKEQYSSCOTRDSVXIPXQUHPPIPXAQZBEJRSPEUWFDFOZMEUDMEWCLKHRCDFVBIZIGPWD");
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
    msg.setTimeStamp(0.160496150742);
    msg.setSource(6915U);
    msg.setSourceEntity(189U);
    msg.setDestination(36620U);
    msg.setDestinationEntity(134U);
    msg.command = 12U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("SBTUQYNKEVLBNZTEELJPMJNOKKBWRKFZSDBRVQTGRIKDCUHVFFXGDTRROHGLNZISZWMHNDWXJIBTYOBZSCLCCOZQDBUMMLPHDWHFESFXPRGMYFWEOSBZLOPFWFXQAPKJCLDUGDYVPHSOPFRUHVYXJ");
    tmp_msg_0.description.assign("BGEELVAXOLYUVVNKFPNVWACWGZDXKAMDVACEIIHCKRKCKRMDDQZOLERVMMOLHSMHXQZGUFEISGIESBWWDPSFPZOQOYAUHWANQTQDNDBYJVAQTAJONBIBCYXPJEULCFZPBVSZBATZTKXHTYIIZLSMCSJTE");
    tmp_msg_0.vnamespace.assign("EVNSNMRASPMPEMJPZQSYZKQYYFTCGCFSZKLJVYHNUTOEIOUBHESKBLFFOGWEQGKNXREBJBIEVVFQCZACEXUVZUAQAAGTCDXGCMJUIXFMQWJGDNLQTRGMZCAFMRNNYNDXOVAKJJKDPNSRHUXYODHKPXVDRPQLIBDAXOKHLSSAZFMWG");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("EVZLGQDKCSARFOIIMOENOLXIGBZWIXTVOEBHSNUEDXKSXBYHRDEURSCMBUOAOXFIORHTVCSSZPPYFYPIVGTYGWBQPFTALZYJTURXDGPK");
    tmp_tmp_msg_0_0.value.assign("QUKHUUOOZLFEQJKDJBERBDKELWPRFTOUVXZPNIVAQDCNHONHYVENVXDLIFRDMFGAXYRAYGIPWPGASTHQDOGLSRJWKNEUYOQYKYMIVMXORBFVWGMZ");
    tmp_tmp_msg_0_0.type = 185U;
    tmp_tmp_msg_0_0.access = 213U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("XXNKHJDBILABCRNSOKKTMHUJBGBEABNJZVLEKEQZZNMV");
    IMC::PlanManeuver tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.maneuver_id.assign("YATDVXIVRPLKQJUCNJEMERUFJVTTEVWRVQEONKSWRAKUEEYPOQPHAGGWDCZWPCBHRLDMJLERCADVTKPXCKYHYYZEDBCCPZXBXIMLMXUSZLAJXRNPELRJYATIJLFEOQBIGIUTGLXOBQSF");
    IMC::Teleoperation tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.custom.assign("MVQGFMBFFCTZYITSSOODCD");
    tmp_tmp_msg_0_1.data.set(tmp_tmp_tmp_msg_0_1_0);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_1);
    IMC::PlanTransition tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.source_man.assign("BVBQXZRDMKLNPCYULSACUTPERMFIDTHCDJYBLYYESIASGAQFEEXDNYHW");
    tmp_tmp_msg_0_2.dest_man.assign("UMZUZFDPAZNMNNWVOBSOJDNJXHQAQWOLFZWNLQPBKVDWYVIAYMCEKQFKKUPLZEOBMOUTKYEWSTFTXEUMVREZTRMAIWECOTGSLSDDBBZRVRLPTGJHUIJQASPSGLRHWLMEEKFBYJPMUOXOSNIXBVNNWAPGAVFMUHKKEBUWBEXQPJTYGHCCAYVFSDNPJCDXJSXDZKOQQIYQYJGGXRQACHTIRGHCFRX");
    tmp_tmp_msg_0_2.conditions.assign("KPZETHJNHQSMINNSUGBGTCZPSCDKEPYTKUHXODCXYKYUDJDVKTIZBZEVKTZLRGGSVWDLNULFXMENSQEMFOGMFRFAHYMRYMTIYTCRJWMQSYVLZX");
    IMC::PlanTransition tmp_tmp_tmp_msg_0_2_0;
    tmp_tmp_tmp_msg_0_2_0.source_man.assign("AWWJMLBSPEPFWVSXYPPXDTJZFRVFARTENHTZQDPVXNHCGWJDQLYUWVCDMCYSBZXXERVAWIKOKXQHRATGQBTDIFTJUNMNUCMLYLRPDIHYAUFIKIJFYSXUQTGBBDJAGCLEOJCOZBOFSMSVGHONBTYYEZKTUKZUQESSBIEEYUSWHKZAMJWGTRDUAIKPACXBNPKPRFLDNQZHOHRXVIFC");
    tmp_tmp_tmp_msg_0_2_0.dest_man.assign("OTVHJRLDLYZCPWGGDCMAQCNFPRSLAQSKEIWPYCMTXYYYXNISYVKEQMFKPKZCUH");
    tmp_tmp_tmp_msg_0_2_0.conditions.assign("PXFAAHNDBKDMBPXJHJDVXMTYNOTKQSQQWFRKXWALWZINJJKBTOOPUSARRXQGOIRCIKFBFEVSZCCYEMUGHTADEZQMSMDSVXQFUGORYIGLZFHOJZKWRCUELYYJTNTTMFYACBQJPDKNHWMRMCZGDLQHLDVNYODVALCIWZUGHDNLGPOQNEOSBKIIZTWOPFKVUWGIXMZRCERSESYHLHEBPYWPYAPJ");
    IMC::UamTxStatus tmp_tmp_tmp_tmp_msg_0_2_0_0;
    tmp_tmp_tmp_tmp_msg_0_2_0_0.seq = 30800U;
    tmp_tmp_tmp_tmp_msg_0_2_0_0.value = 33U;
    tmp_tmp_tmp_tmp_msg_0_2_0_0.error.assign("ORCSRSREEBTXQWSIMVGUQMKTHBWZESADDNJHYIFAUYDRMGCMJQDWVBZIUHWFONZXJETKZTHDLVFBVRYUAQYGPAEPNVZXQUTENMZWLQWBHPIWPTSMCDJJDLYLBQGCSNJHNVPKFXTOXLDICUCX");
    tmp_tmp_tmp_msg_0_2_0.actions.push_back(tmp_tmp_tmp_tmp_msg_0_2_0_0);
    tmp_tmp_msg_0_2.actions.push_back(tmp_tmp_tmp_msg_0_2_0);
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_2);
    IMC::CommsRelay tmp_tmp_msg_0_3;
    tmp_tmp_msg_0_3.lat = 0.00594964907155;
    tmp_tmp_msg_0_3.lon = 0.265644108663;
    tmp_tmp_msg_0_3.speed = 0.519325675479;
    tmp_tmp_msg_0_3.speed_units = 205U;
    tmp_tmp_msg_0_3.duration = 32880U;
    tmp_tmp_msg_0_3.sys_a = 35246U;
    tmp_tmp_msg_0_3.sys_b = 62707U;
    tmp_tmp_msg_0_3.move_threshold = 0.71826333799;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_3);
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
    msg.setTimeStamp(0.507688819512);
    msg.setSource(48924U);
    msg.setSourceEntity(34U);
    msg.setDestination(55952U);
    msg.setDestinationEntity(72U);
    msg.command = 200U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("KAPKGZCHWQIXUQXUYSTSYOFTRPXNJBFVBUISRGZWHMPCZFPGVSAPQWLEZCGNNLLDSPXKVRCZTUSMFMJFBYE");
    tmp_msg_0.description.assign("QLTSCXIAPFWFAZHRIXXCOFDNITYRBPKSUNDBDBXYJRUBZOZYEEXJBANUSRFVVGLLHOOZLRMWPLHKXJZPXESROTFQSUUZBHTUNUHCAKWDJMNFCLYEWSVZQWEMXTWCFKIIOENZGEGTTSGLGCRAJYWQNOKDWBGUNVGIWHICHBSDOFQJDJVVHMIMTMHMQUCLGABAZSCQNYYGKITVFMIJRYTFOEYEMYAPQVQAE");
    tmp_msg_0.vnamespace.assign("OLCQFIBECOWJCLRBKJZAHWEQGPJWXUHAXNCWGZVURHNPCXUAGLMEDHUTVWWRVVYYTZLGUIECRFPHJOZZDEJMBYODTSOQLWNNTAHKFVMOAPMITGDBDJNUSYTLEQCRGTYKUVSKVEEGDRYHXFAKMSZIUBLNTIYBZMSXGTTJS");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("GIWGTBWMTCPATYMVZUAHMEPNRHBAJBMQDESZLZVULOZPNHJHXCULGSDXJZRUASPSESXQFNOEWDJCXWICRYVAFQEOTDRCTXRUZVKSQJJJFDWSDERKASFEYIQEWQKWVYBMIECCIPZPCQUTFRGVQMUXXULOBOYWUKVMTTZPFSCKIYLNGGPQIKIYTXMDHRYZKMOGVVBFEBXLILNAOXBFAO");
    tmp_tmp_msg_0_0.value.assign("ZILNQKJXMLKAAVOAQAVCIQQPTCHVCNACMRRUOFZUDUTBATIEBTDJZDYBMXTVSSIVXDGQWACLKYNFXSWORLKNHPSGOIPYUQQHIGWFRGVFKESUOFAKLY");
    tmp_tmp_msg_0_0.type = 247U;
    tmp_tmp_msg_0_0.access = 250U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("MAEQVQHKFWEYETDHYKJUDUOPTURDDSLQOUKBCMLJQKXYGQELZUIAFERZSKIPPWILVYZGHGSEZFZIINRNGVIZENWNWJAYGFNUTCWPNWVPDPSYOBPJRCAIJDVCDHE");
    IMC::IridiumMsgRx tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.origin.assign("LSYDZKNYKGCSNVUIOXNEPYONAMTMQRVHWUMFBFRYDTICSQWFJVCMPMSDZGVOKFEMCTGZHBUTYQGBKMIVWLPWQKBFJXEBBSOWHJJBRGENSMGGPDUXZQXXLG");
    tmp_tmp_msg_0_1.htime = 0.965902717369;
    tmp_tmp_msg_0_1.lat = 0.65572923909;
    tmp_tmp_msg_0_1.lon = 0.840606717954;
    const char tmp_tmp_tmp_msg_0_1_0[] = {125, -22, 101, -53, -90, 46, 119, 34, -81, -125, 34, -122, 77, 119, -97, -119, -69, 80, -43, -71, 55, -62, 9, -125, -123, -61, 67, 101, 123, -61, 25, -84, 36, 99, -45, 103, -79, -92, -16, 114, 65, 38, -52, 109, 70, -27, 102, -36, -120, -80, -74, -120, 86, 69, 122, 102, 118, -61, 37, 75, -65, 19, -84, -55, -39, -8, -36, 86, 89, -35, 55, 103, 116, 102, -78, -38, -16, 81, -110, 49, -60, -111, -105, 104, -117, -38, 103, -125, -95, 41, 45, -101, -12, 62, 59, -35, 15, -18, -99, -45, -37, -10, -22, -86, -12, -29, -48, 57, -50, -116, 41, 83, -7, -102, 3, 93, 119, -5, -36, 76, 85, 62, 29, 117, -56, -1, -54, -119, 28, -108, 19, 60, -128, 39, -66, -85, -49, 19, 56, -50, 120, 126, -119, -23, 41, -19, 20, 6, -69, 93, -3, -57, 95, 123, -52, -100, 76, 98, 96, 114, 43, 123, -48, 41, -1, -110, 42, -40};
    tmp_tmp_msg_0_1.data.assign(tmp_tmp_tmp_msg_0_1_0, tmp_tmp_tmp_msg_0_1_0 + sizeof(tmp_tmp_tmp_msg_0_1_0));
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    IMC::Rpm tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.value = -4138;
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
    msg.setTimeStamp(0.885276250703);
    msg.setSource(38018U);
    msg.setSourceEntity(6U);
    msg.setDestination(30808U);
    msg.setDestinationEntity(94U);
    msg.command = 140U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("EPAFOXRBGLS");
    tmp_msg_0.description.assign("YRVWOONCSFRPQBMCLMGJLAQIQPQCGCQCLBKUUSPHHOGJZGYRBVFDFNDTZNXEQAWNYZPRSLWEIRAIKCJHFDYANUJ");
    tmp_msg_0.vnamespace.assign("UVLANARBRJMVKGSPCPBBPWSZEVLXKIECVRYNNCOEFBITQOBXXGMIAWUJRHNGSPWZTQXIKWCHZTCZQWPWXWDFMFKHCTOURTQQSJZYSXIBGWUKVTMIYEDMPLDAYOFYSBIXQADLBKKGGHOD");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("ODFYVSQBJTOWLEYVPLXXBIJNUMRIZPPTAXZBZCBLCNXJFCRXSKAFYWWTZIUATLFXDOBSLCGJHWKIRRGLEFOAAHRGHRVNHXEJJNSKLOXNTKPZQTNVGFWVTBOPONFKJZGBVWDNOFZBHDKMINQJKNWJLGUCTRSQQOJDVAKCGEYECDWDYSIGDYVHAVUWXKUBAEIIUMEUFESAQGQZBFERXDZPCIRTYUUSMAMDSPYMIM");
    tmp_tmp_msg_0_0.value.assign("KGBQDBDPDYWKNZYIRENIAAWSXMYKQULBBIMCBDTYLNSZYCVGILAJLPEYSEQRMTRQXAZCTHPWOHUQUXVQXTRJPWJASYVTQEMOKGRIDPJWZGDKIOIVFXVMEWFHGRPLGGPCZKHHWOISZPULFJWUFXVCTQAWYVJSMMFRBVINNNERCGDBKOTUOJKNZAGXHMROZCDERAUONLHMXKJUEXBVBCHBQSFSLUKFPOTDZY");
    tmp_tmp_msg_0_0.type = 70U;
    tmp_tmp_msg_0_0.access = 106U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("EFXAKVOLOAYQIWUEAFDDRHCOIULEKVVSUEWPQQVXWGATEJYPYMXQHWBDHDTLDJSGCXUGSPOJQBUTGPRTEFPHFNPLUNIMKHEJRZIVKWPYOVZQOLZDCTRIFYLVAAMPBYQGTFGFXCAOSNHPYWAHRXUNKNKOCXMUGRBEBYHXBDOBSGLTVKYCNUNKIEZLJDICGIKNWZMCZQJH");
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("LYZTEGPMQLSRLJEEJFJAWZYYLGFWTGXOCNTWARUDDECXTKVPSMZTDCACYQLYB");
    tmp_tmp_msg_0_1.dest_man.assign("BDKWOFKPFYZFWARXQVGIMOLDYSNXNQRHBIDIMJEUNUGKDMTHXPXTRQIZIAEESGNAYBOLKGLJVPRPYATWRWUGNCMGHKSZJQONETOJPHGHPPOJZIVMCGYJSRWFWPRXVXCQVIACAOGQAMUSTNLHCLLRFFFEPDWLYEKBHGFEPTHINWIDZNBQVZUXZBUSIJSWUTJRBFXV");
    tmp_tmp_msg_0_1.conditions.assign("DISUKWZKASJMONUYLRMQRLMJMJULCWIVQNHLMZOTMKSCNFCVVGJTBZVGOUBZPLNYSBHPPAMFZNRAWGUFTVFEIFTFASIXWXORNJFGHCLRSDQHGUCGULJEA");
    IMC::RhodamineDye tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.value = 0.698219673603;
    tmp_tmp_msg_0_1.actions.push_back(tmp_tmp_tmp_msg_0_1_0);
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_1);
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
    msg.setTimeStamp(0.796173330859);
    msg.setSource(56434U);
    msg.setSourceEntity(212U);
    msg.setDestination(4493U);
    msg.setDestinationEntity(166U);
    msg.state = 239U;
    msg.plan_id.assign("DDQQQPHGETZOVJVTJUXXGXEVFHSSRDEQSEVCQJKPTMWGMGONUUXGUTPXRQCLHXMRYUCIVRTGPDPDPLVNFQIWKALZOHOZKTWTDTBNSILJHPJGUXFEBDZAZADQRYVNX");
    msg.comm_level = 136U;

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
    msg.setTimeStamp(0.106494062558);
    msg.setSource(62702U);
    msg.setSourceEntity(77U);
    msg.setDestination(40968U);
    msg.setDestinationEntity(196U);
    msg.state = 65U;
    msg.plan_id.assign("JYYXCRCIUNZYDJZ");
    msg.comm_level = 91U;

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
    msg.setTimeStamp(0.646400461678);
    msg.setSource(51012U);
    msg.setSourceEntity(219U);
    msg.setDestination(25360U);
    msg.setDestinationEntity(55U);
    msg.state = 128U;
    msg.plan_id.assign("DGEXWUQXPEUGIMXXMZZGSYCRYJMAILFGROWBQEFRTJIJHOHXURVSRDFSVAJHHTSMCTCIBNYSXHULALUOIJAENHOOUNMOFK");
    msg.comm_level = 14U;

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
    msg.setTimeStamp(0.472138471909);
    msg.setSource(60642U);
    msg.setSourceEntity(41U);
    msg.setDestination(10163U);
    msg.setDestinationEntity(192U);
    msg.type = 3U;
    msg.op = 165U;
    msg.request_id = 36117U;
    msg.plan_id.assign("HTNWUNJRVVEQQLIAVIBIUHOCXCTGBBLCHERWAKIUPTFBTAPWEFUDCBEKNYUJZVFVXJEGPHJHMIUVIYTJTQZYKUVWEYRCSIZKLWZMGBBNQYUFZNFLTYMVPRLZXAJXDXOGQMXCRDUSFKDDOHDOFGMADNFQEJHAHOGNDZRQII");
    IMC::FollowSystem tmp_msg_0;
    tmp_msg_0.system = 2575U;
    tmp_msg_0.duration = 9315U;
    tmp_msg_0.speed = 0.664608195412;
    tmp_msg_0.speed_units = 205U;
    tmp_msg_0.x = 0.124017641002;
    tmp_msg_0.y = 0.637247032705;
    tmp_msg_0.z = 0.656909820351;
    tmp_msg_0.z_units = 217U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("DXMTGFOBLBJKJBRFHDQTWURKMXHXDTKXZYMWICXKVGWNDOMZNHNHDZQIWNUOIUWPQNCNEZXGKUYRHAMTWVJRDFHOKHMNEFKWFEYWJCVBZROQFYFJINYIXFQHCBLEPPVOCPYQJRKWVAWAQNDBPVOGLSKLPXZEGCMSPLHVSIEAZTHGATDSSEILFKBTGAYBPPOAZCMVZRGCSGRIEMVIUOCR");

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
    msg.setTimeStamp(0.240297566391);
    msg.setSource(29131U);
    msg.setSourceEntity(3U);
    msg.setDestination(25994U);
    msg.setDestinationEntity(34U);
    msg.type = 174U;
    msg.op = 21U;
    msg.request_id = 17152U;
    msg.plan_id.assign("VKLOOMTPJBZMUWGRRZXWFMXXDZCYCMXMSNKOEVLJFAWQQLNGWWFIHDZTDYDJAEZWYJHGYSJPAKLWBENNATUSDNOYBREXFZRHVBYAGENUMHXGGMNQHEROFYOPCEKLCSZPFVGKKOKKTTCGUXBEKTFSCHSUGYPLHFICBSVMJMCPQUIPXTVVWLVVAIZLXEDNIQNVIRSOFGQCYSBSL");
    IMC::EntityActivationState tmp_msg_0;
    tmp_msg_0.state = 15U;
    tmp_msg_0.error.assign("NOIFDLQRJGLXKDLXXQGLDIGMTPJCWBDNYQVCGEMREJYIYIQBRCRSYGGVGPWYCSMZACEZDRVEBUKUEWVUMXHUNIVSMTZVXACBZMKVUOKSAUQGLRQ");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("GAAZIWQHXCIMWXGXWTRANVSGDTMHPBECDUSEKZVWIVOUYBVUDMVJTZCILPLYPIXTYTCSPOERXDDYJBKEPYFSLJAUQWTCOHFZHFFMTKRSASURROKXKAQRFHTCLVREXBPKVUNJKFWNLLBVLKMGYTQQSYWAWYOSBKJLXGBAZUCRDFSZANJUIZCHEVYBBPIHNNKMZYIOOJPU");

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
    msg.setTimeStamp(0.63588523648);
    msg.setSource(30415U);
    msg.setSourceEntity(90U);
    msg.setDestination(62004U);
    msg.setDestinationEntity(162U);
    msg.type = 189U;
    msg.op = 181U;
    msg.request_id = 39874U;
    msg.plan_id.assign("BADWBPDYHFKKNABQJQCFRRWECHZVBHUFIHTJEAFNOMUXJYYXALPCTZXIPSLSFGYQGAXPOAURLLPUMSAURTQMNPDFBDGBASRMXLBZVIYJPTKUZWXVRVSLQNDRMDVXHHZHFOWVWHESKGJKGDKFDEBNLARUEYPHXOIIZOOVJV");
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.82840406534;
    tmp_msg_0.y = 0.836970593728;
    tmp_msg_0.z = 0.187891077649;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("BIULESPRHDTGYYZADQBKWNDGWSKGJOUPPORXBMTKUVISQKRRCQPVSLOCXJDVBLKJJCAKNJYQRQBWUJYIUMTXHFQWBYWGEYQQMBFNXRHSWDJFWJTIUCGXAYZXRFQOZZH");

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
    msg.setTimeStamp(0.0645852151387);
    msg.setSource(32321U);
    msg.setSourceEntity(27U);
    msg.setDestination(51003U);
    msg.setDestinationEntity(31U);
    msg.plan_count = 38294U;
    msg.plan_size = 3776488382U;
    msg.change_time = 0.806883958141;
    msg.change_sid = 19206U;
    msg.change_sname.assign("NYGQZCLINHDCCUWFDEWRDPRUOELDZTPUPAUPYLLDXUQFXOVCJYCQUHXMSVYTLBZOGIKBVOXDFWWABAEDAERJIOXYIJZMYSKGUMKOPSZWJFPRFLSBCMUHRCHXGTHBLSZJEMIZNKWEVTFTLMPJVETTERGAPFGDOA");
    const char tmp_msg_0[] = {72, -66, -44, 5, 118, -63, 47, -16, 63, 74, 11, -104, -78, 122, -116, -19, -74, -34, 124, -49, -99, 88, 34, 100, -66, 13, 82, 47, 122, -7, 122, -118, 100, -72, 94, 83, 10, -80, 29, 37, -108, -12, -85, 109, 26, 96, -81, -56, 68, -12, 21, -73, 100, 9, 104, -4, 106, 26, -4, -57, -103, 36, -58, -95, 18, -68, -79, -95, 30, 123, -56, 108, 87, 80, -88, 71, -57, -99, 81, -17, -84, 101, 117, 105, -119, -7, -106, 33, 18, -21, -124, 60, 74, -60, -12, -53, 104, -29, 50, 62, -9, 35, 21, -122, 25};
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
    msg.setTimeStamp(0.0831999687407);
    msg.setSource(42893U);
    msg.setSourceEntity(109U);
    msg.setDestination(35844U);
    msg.setDestinationEntity(148U);
    msg.plan_count = 13116U;
    msg.plan_size = 2976006451U;
    msg.change_time = 0.972015955713;
    msg.change_sid = 9557U;
    msg.change_sname.assign("RAEUEFCHMPILBSOKORXIYKGIQJQZUUTQTQGMVIWQRZEFFTSAIBJCVMSRJBHLVINZBREKBUDJVHSKLGXMQTPNBVEMFYGYSSYCXOGXZDBYEVIVPXWSJGZXWOFTRMUVIWNAJZNCOYOJOWXCCEWHCDAQEDZEAMYBMLXNYHUHKAFSAE");
    const char tmp_msg_0[] = {-28, -118, 17, 85, 44, 70, -119, 64, -28, 54, 79, 67, 0, -111, -30, -18, 98, -25, -15, -93, 30, 24, 2, -101};
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
    msg.setTimeStamp(0.482215812464);
    msg.setSource(64307U);
    msg.setSourceEntity(147U);
    msg.setDestination(50367U);
    msg.setDestinationEntity(24U);
    msg.plan_count = 21782U;
    msg.plan_size = 1661210721U;
    msg.change_time = 0.39714027212;
    msg.change_sid = 26819U;
    msg.change_sname.assign("EAJZXNFSQFXZBAOTSQDKIJQAQXZGETWPDSOJBUTRFTAZUNLLSKSNTPOEGVBDUPHZCHUGRSSPEVIDCGFLPYJHJOYU");
    const char tmp_msg_0[] = {-110, 33, -79, 0, 18, -121, 92, 73, -83, -30, 72, 32, 17, -103, 83, 82, -104, -81, -81, -116, 33, 10, 20, 97, 52, 28, -13, 94, -48, -95, 61, -21, 89, -78, -89, 55, -21, 126, 12, 46, 95, 109, -82, -32, 43, -109, -78, -87, 102, 50, -110, -39, 59, 45, -117, -115, -67, -72, 102, -111, -112, -4, 68, 112, -36, -11, -85, -101, -48, 54, 2, 40, -15, 57, 72, 93, 41, 7, 116, -40};
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
    msg.setTimeStamp(0.487889849963);
    msg.setSource(55952U);
    msg.setSourceEntity(123U);
    msg.setDestination(32865U);
    msg.setDestinationEntity(239U);
    msg.plan_id.assign("KDEZJJRBQHSDMYRXVIBTLHXCCKZVEKCEKGZLSULJCLWEQBPBMWFYDPPWEXTOZNXMQHAWRPJYMVOHQQVCQGCIYLOJJ");
    msg.plan_size = 36633U;
    msg.change_time = 0.720184042101;
    msg.change_sid = 10090U;
    msg.change_sname.assign("QFZCHZRCWXWSKEZJPEGBVHYAPRAOGGUWLACMZMCHRUBSDJNOSVMXYLXPVSISIFWUEFGNTQTVXBOQNIXUFMBKCMBODEUGVFMHMJNWPPKQCOUWFVBFT");
    const char tmp_msg_0[] = {20, 34, -71, 43, 18, -63, -88, 70, 76, 27, -88, -60, -97, -68, -72, 53, 29, -22, 8, -126, 103, 78, 12, -50, -84, 92, 116, 123, -34, 99, -109, 102, -75, 34, -7, -62, 87, 72, 30, -37, 125, -122, -56, -74, -104, -11, 0, 126, 39, -117, 125, -83, 2, 64, 30, -99, 56, 18, -1, 19, -84, 82, -11, 23, 100, 84, -35, 106, -116, -26, 4, -61, 116, -51, -86, 105, 49, -31, -6, 115, -54, -104, -51, 49, 35, -18, -35, 32, 62, 111, -99, 17, -109, -16, 39, 4, 83, 82, -113, 60, -123, -125, -79, 9, -54, -8, 124, -80, -127, 97, 24, 125, 66, -119, -115, -95, -95, 38, 121, -47, 112, -67, -91, -88, -55, -123, -84, 96, -71, -29, 22, 4, 34, 14, 63, 56, -100, 30, -100, 78, -39, 39, -105, -74, -84, -37, -7, 31, 65, 67, 23, -5, -123, 44, -74, 43, -89, 13, 15, 106, -37, -61, -41, -5, -125, 75, 56, 48, -96, -90, -93, -125, -85, -122, 30, -114, 112, -95, 31, 79, 68, -69, 111, -116, -6, -59, 28, -25, -14, 12, -89, 81, -113, -114};
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
    msg.setTimeStamp(0.449244695565);
    msg.setSource(50431U);
    msg.setSourceEntity(4U);
    msg.setDestination(35926U);
    msg.setDestinationEntity(81U);
    msg.plan_id.assign("CXELPSQMTPJ");
    msg.plan_size = 28462U;
    msg.change_time = 0.568798428961;
    msg.change_sid = 62160U;
    msg.change_sname.assign("LSWDNCGWLJZTBCZFENWZQYKWADKNPMXVUDNPPLOWEITOIDQSONOXHVLGQPLBUXHKYSZHFHQXSQQCCXIBOTTRPHPRINXCWEVIUKNXMRSOLKVDKEDZRTZKKAYJKBJHFYYISXJBYHADCZYFYJTJAGDIGZSQFUGHYEJMWBJMFJVGBE");
    const char tmp_msg_0[] = {-15, 102, 18, -108, 89, -106, -74, 52, 82, 76, -91, 33, 28, 68, 6, -58, -17, -28, -35, -61, 120, 0, -48, -45, 14, -118, -67, 103, -51, -67, 90, -91, 20, -78, 22, 84, 99, 111, -34, -58, 84, 69, 24, -85, -55, 100, 48, 82, -49, 62, 36, -53, 125, -42, -102, -36, 91, 30, 10, -42, -96, -111, -89, 46, -98, 0, 22, -127, 23, 124, 103, 103, -21, -8, 80, -77, 80, 114, 120, 28, 53, 40, 93, 8, -119, -110, 123, -79, 42, 5, 28, -14, 94, 70, 38, 43, -97, 1, 50, 48, -61, -53, 83, 71, 60, -105, -63, 106, 79, -48, 14, -117, -84, 119, -114, 44, -71, -126, -20, -78, 25, 77, 113, -26, 13, 44, -62, -22, 91, -66, -82, -66, -7, -38, -40, -72, 82, 123, -14, 18, -64, -10, 68, 43, -51, -94, 61, -66, 105, -120, -80, 60, 5, 7, -120, 75, 22, 38, 69, 53, -83, -14, -11, 124, 123, 24, -39, 11, -30, -28, -18, 69, 108, 37, 62, -123, -126, 75, -112, 4, 25, 91, -81, -79, -57, 89, 66, -96, 41, -34, -45, 17, -24, -89, -39, 27, -59, -90, -53, -63, -58, -26, 118, -128, 15, 122, -125, -43, 64, -5, -40, 11, -124, -16, 86, -37, -72, -75, -32, 100, -112, 123, 100, 30, 24, 42, 18, 114, 39, -93, 90, 37, 43, -21, 7, 56, 47, 50, -73, -4, 56, -5, -59};
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
    msg.setTimeStamp(0.681738294991);
    msg.setSource(41207U);
    msg.setSourceEntity(77U);
    msg.setDestination(36913U);
    msg.setDestinationEntity(191U);
    msg.plan_id.assign("KIXATQHEZORFEMNMVGKKBNVYKERXOIGGJQCIZHWVDUUYVPFWQLTCYAHSKIVCGQNRFLMSTILMGCAQPFCAINZYYITWYLWEZTAZOQYPFSHWIEKKHEGSIMJRNUXXBEUXMVNUZKHHNATFUVCLXACHBSARPDJ");
    msg.plan_size = 22692U;
    msg.change_time = 0.913493870926;
    msg.change_sid = 56690U;
    msg.change_sname.assign("LVDNXWKCFAZMEJHMEWTDRJUADHAQEAIDOQGFWHPTMKXYGCUYSZVAKKIRJZOJLJACALJUSAFZOFXWEVPBSKNIUKUNEUNWWILESMJXXAGGCRQPVMFCDCBXDITLRZSQYYTWFMVBQKPFHIPKSYPGIPWOVDQJLREBEQIBTLMIENFHRZZHMBNKDOOFCLGLCZYFUHJVNMUYSUXOLGQVYHRZQERCAVSQVDCPJNOTRGTGMRTXUHB");
    const char tmp_msg_0[] = {-11, 85, -80, -105, 100, 64, 38, 57, 119, -6, 73, 74, -20, 126, 30, 72, -42, -111, -13, 19, 28, 91, -43, -98, 48, -18, 34, -85, 80, 13, 107, -72, 71, -90, 40, 2, -55, -30, 24, -48, 104, -114, -115, 91, -17, -36, 89, -110, 90, 72, -44, -21, -64, 124, -120, 107, 19, -12, -49, 22, 8, -126, 31, 8, 3, 38, -97, -22, -103, -19, -78, 109, 85, 89, -105, -60, 65, 77, -77, 111, 22, -33, 106, 55, -49, 66, -51, -32, -54, -63, -46, -114, 126, -42, 101, 124, -58, 123, -125, 27, -65, 117, 12};
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
    msg.setTimeStamp(0.0594876040773);
    msg.setSource(25967U);
    msg.setSourceEntity(156U);
    msg.setDestination(44195U);
    msg.setDestinationEntity(38U);
    msg.type = 118U;
    msg.op = 37U;
    msg.request_id = 54744U;
    msg.plan_id.assign("UGZHJINRUKHTHRWOVGWGVBNDVOIUBYABBZKYWVLOZLQLJQRGIMKXDZXQFYYTUDEOOPV");
    msg.flags = 8352U;
    IMC::CpuUsage tmp_msg_0;
    tmp_msg_0.value = 246U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("PABITNIHXBLOWXIRIMLBTTZLMUWJAGOWSZPLHRRJSCKWLOCUUXVWJGTEESBSPJABAGHPQWYKCPT");

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
    msg.setTimeStamp(0.611081088531);
    msg.setSource(60828U);
    msg.setSourceEntity(111U);
    msg.setDestination(22126U);
    msg.setDestinationEntity(87U);
    msg.type = 64U;
    msg.op = 78U;
    msg.request_id = 24315U;
    msg.plan_id.assign("ROVXTYFCIZGEOAMYJPZNRFNIFYSDWAEDIGBYCQRWJVFOBZPGAEXFCUAGRSYWNEBOLHDFRIMUZLGKZAQGWNUTOPQTNLOEZJMDYPPDDIBEQKMALXRQFYTKHLVOSCDCBZYJKJCVHSUOFIEGPLNQWWCJCIUBMVBNIKGI");
    msg.flags = 52042U;
    IMC::Depth tmp_msg_0;
    tmp_msg_0.value = 0.28216707208;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("DJXUUOJBYBATYMPTCILWLYEKHUHGNVOLUGOZSRWVQGEVQYRDHRGFCHHGYDKZNDXEWVAMPZIAXCJQIDBLO");

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
    msg.setTimeStamp(0.659115441109);
    msg.setSource(49756U);
    msg.setSourceEntity(231U);
    msg.setDestination(45995U);
    msg.setDestinationEntity(244U);
    msg.type = 55U;
    msg.op = 142U;
    msg.request_id = 52819U;
    msg.plan_id.assign("GRAZOZBRCLAMBWYOSWSRNXQYPWJMVVLXMGHTCEVCCALXRUKMWLHBQQLHIGEDYIMRJTWNRTPGDQUKJIHZVBUMVQIJNKPNIPSKRLGCOPUSMIRZXXRUFSXJVXQUYSPAXISCTENBDHYETSGWCIAFHMHYAZZHNPDFUNBLLADKFJDWCTFYEDKYOCQDMSOWVKQOKODEEIGJFZEWDJLQKWOVXOT");
    msg.flags = 48793U;
    IMC::Brake tmp_msg_0;
    tmp_msg_0.op = 189U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("MFVZXCMWOKNWTIFHIUTUSWIMPZOQPAQIUSSADWKUDJETXLEKYPZENCRDIXRWJCDDCERNOMRMKLQXFJFYNXV");

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
    msg.setTimeStamp(0.780680315301);
    msg.setSource(20129U);
    msg.setSourceEntity(246U);
    msg.setDestination(43487U);
    msg.setDestinationEntity(181U);
    msg.state = 150U;
    msg.plan_id.assign("DGMHKXFSADIRPGNWRREBIMWZEUKTJBPZNNMYYBGPTFVBUIWSTWDYZFXDBOHGGAIHQKJDQYYHEVWSXOONVUPHCXTAERCLANQJPYMUEJFSHLVONTTBJPGUHAVGIWUOKQPEIYMRKEYQOLMSHRXEPTDDOWJURQRCZEFRUIFXQYZD");
    msg.plan_eta = 147738892;
    msg.plan_progress = 0.551225044048;
    msg.man_id.assign("KXXLWLGDDIHCTTCCOMHFRMIYOVLVAOIKPWJYLTSVDKERR");
    msg.man_type = 22855U;
    msg.man_eta = 23158473;
    msg.last_outcome = 28U;

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
    msg.setTimeStamp(0.19620495949);
    msg.setSource(10371U);
    msg.setSourceEntity(40U);
    msg.setDestination(38505U);
    msg.setDestinationEntity(180U);
    msg.state = 169U;
    msg.plan_id.assign("KRUGYFUBIHLATHAPSALCXTFCZNFVMAGTMJDSKPGWRSSHOTZRAKGKGZWEOQJACVCNB");
    msg.plan_eta = 1569059271;
    msg.plan_progress = 0.722417902429;
    msg.man_id.assign("LVZMWJLAEDSYQBFFZXSCHCHUXYEHVIUQRFFPJVAEAIQSCEIYYBUDFTOFHALABOSVCTOTQRBJVMTOLPWFRIFLGDNTYKXQSIPKQMSUZLOETGUTYLXWWTBPFIAIPGAEHRXIJBZNHDMBSYGVZHWNLOBVXYKN");
    msg.man_type = 35160U;
    msg.man_eta = -529973659;
    msg.last_outcome = 220U;

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
    msg.setTimeStamp(0.7118020578);
    msg.setSource(30344U);
    msg.setSourceEntity(97U);
    msg.setDestination(6496U);
    msg.setDestinationEntity(76U);
    msg.state = 186U;
    msg.plan_id.assign("IIDHOREBCR");
    msg.plan_eta = -1965556773;
    msg.plan_progress = 0.500875416868;
    msg.man_id.assign("FRVNSBOWLCUCRMTPPEKTQNGVRSNMPFTIAKNQPFWKEZPYBSMUVUDESEKXUOQTOJWJWXVUZIIWRDLDEDCJUSBHYNOTAIHXRBWQVLPDFTYJNDGGFVPHLPYVGGHIKOCMOTJOTILJDQGWJREPXUGCNXSVENCKXHKMUZEZDVEHAXY");
    msg.man_type = 47366U;
    msg.man_eta = 1935092434;
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
    msg.setTimeStamp(0.69375606676);
    msg.setSource(53445U);
    msg.setSourceEntity(95U);
    msg.setDestination(31909U);
    msg.setDestinationEntity(33U);
    msg.name.assign("DUFWCBZNIJULKOMRKPSYVMWXCDZLSNYHDDJNHQPYIHGIFZWRCONEATOBBVSIGGACAQRBVRSLHLUFXWPZTJYGFEXHFQGRGLPGJVXUEXEWJKTEI");
    msg.value.assign("AKTHFIOBHPQYIQKGWLRTPMWKLMTSKOXUGJWTELIUGOHBORDAQQKGSWURNYNNECSOWUYCBRFC");
    msg.type = 37U;
    msg.access = 74U;

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
    msg.setTimeStamp(0.290304799737);
    msg.setSource(17550U);
    msg.setSourceEntity(182U);
    msg.setDestination(32610U);
    msg.setDestinationEntity(77U);
    msg.name.assign("MFVIRQWTJZOMLYDJMOBYLKVLOZZSQAEMTJIXNGSQQTKXLPGBXMZTIEFEQPWJEBKIVSSCDESDFFWJVHTOZZRNGGUGUASFGRXRUJTBAGCUTELBKPCJFAYYVDQSJKKKSYKPJSLEWHIVFZWDWFVGDGPFLTOOJUPLXRYRNMWYGLBBDOMRBURYNCX");
    msg.value.assign("NBGYXNVOWTJDXRNIAXVAFCISHQSMREKKFFYGDBEKLGOLHRBQCWDMVCYQDDGUQJLMGFHWOSRLZYXKSMPJSUNEJSCGRBAGFXIWVWDLHJZMHVQCVUCHXOPXBYJJVFCWEXDRMUUZDNPRPSBJUBLGAQFICRTGWQLNPZTMLVIQUITRZAWAMZMONPHTOHETZQXG");
    msg.type = 81U;
    msg.access = 13U;

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
    msg.setTimeStamp(0.395895874878);
    msg.setSource(48581U);
    msg.setSourceEntity(117U);
    msg.setDestination(64212U);
    msg.setDestinationEntity(246U);
    msg.name.assign("MEIQLLOMCZMAWUTYTLLTYSDNFGQCUQMHBQIILJSWKOKBMAHDDUXGBVFQNZSVAPQWIHTXLOBAFIISUTTOGYVNFGLMMCJLHEYXUFJTSSXOVATZCDVKGDFWQRKEKKYBBGISODNPKHNHERCUZKXXHMJVJIHNMXLXEZAYRPDZABGCPNUOMESLOSREJRTPCYOFPOQDNIEPUBPJVCWJWKXTZWRRBYZNBGKDRUZZRGIFW");
    msg.value.assign("ZBEABEMKAJPKRQIVFPDDPNOXEZPMNCACJWQIHEPXDLUFTHZYDSCMHPNGWFVCHYMGOJBBSNTGALUWKJJSKNZFSKNP");
    msg.type = 158U;
    msg.access = 223U;

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
    msg.setTimeStamp(0.262709139074);
    msg.setSource(20592U);
    msg.setSourceEntity(44U);
    msg.setDestination(15637U);
    msg.setDestinationEntity(89U);
    msg.cmd = 252U;
    msg.op = 216U;
    msg.plan_id.assign("MXGTREEXJGRISUOGQYVUGDDYWZERSTVPFMCBSDEBLAMCJMQJUFSHBHREMBACIUIWGTWFTFFZLSWFBDJHNLLCJZQWMTPHGADIKDVTXEPIXQJIPOHADTGXHEMNKOAJBEHDKZUOQOZAWONCYYREAWUAARSMBBWHEGMPVUVKGIXNYYZLQXPTQZPNZCSXRXBFKLLIYYSRKKFLNCIZOCUOSOZQOVPNCDGARJUF");
    msg.params.assign("EQQMTMZGDPFJVUGNTHEAJKKVUTVTZGAXAWZLPAOZLFXNARCRJQABBCWEHVEBMHNIPNNOGCJTGQRDCCWZIBKDZGTUDEXVWHYYSGQXLIQUKCYPWEYGJXDYSPJSKPAKMYFXHXOLNSSVMTMBFDPDISLEVZIDOEAYEXSPIFNROSFMNJFVOTPDWKMBYKOGRWJFAILXMHFDKCLSUKCBHHXMBOBPIFWQR");

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
    msg.setTimeStamp(0.261586550113);
    msg.setSource(62978U);
    msg.setSourceEntity(87U);
    msg.setDestination(57462U);
    msg.setDestinationEntity(248U);
    msg.cmd = 196U;
    msg.op = 14U;
    msg.plan_id.assign("XAZCLIAOSYICJOPVNTMCBBEUPC");
    msg.params.assign("UOULBLDJFOXFFXBRTMEKDYXOMOGQILYNZAIILDVUWIKBPXMRUCWXMHWSQUZABPDACBTNVCYDZHMKZTIHQRPFHWWAVOUSQJWTQGMJHRGKIJBCCIYVHNTYQNGGLAGLAUVDERPXKHMNKJADRWCLIBZYTGKZNWVPVSPRBQKENDZIEQASKEUHRODZXEEISRPQFSWORJGLVTKNUXTYECHQYYSOMLZAODGPEFFJBOPTXTCAMFFSNXJEUVZLCFHWYSM");

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
    msg.setTimeStamp(0.0497038765021);
    msg.setSource(23121U);
    msg.setSourceEntity(196U);
    msg.setDestination(44846U);
    msg.setDestinationEntity(246U);
    msg.cmd = 148U;
    msg.op = 172U;
    msg.plan_id.assign("HSTIAEUSVCHFDLWDYUBEVXGQIJGNTTRCWVYESOWNJQOJDAVGAWDAPOZGEKCMKKDMPLKNONQCLTTTCFRMFLQKMFBWIWAVYYJDFXJRRDFPCGXMLSCRZEYODYRUXBPEHGJJAQKZTNXFZIROBOIMCJIWWRZJPXZEXMSYQINLBEAHOMSPAGQVXBSHOKIUTNTQYUOUZGZQYPHLRKNVTIIAXBPUXGGPUCDLHMZFZREBJFVLKVCBQV");
    msg.params.assign("POTNOETXIGFTIYUJPCRKEMDJBPOTSGCGSEHQRBAMJACEPPNYHSWCYVXHVZLVDBGFWSUAWBUZYXUHBNARCIPUVKYWM");

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
    msg.setTimeStamp(0.856548977118);
    msg.setSource(47336U);
    msg.setSourceEntity(89U);
    msg.setDestination(59997U);
    msg.setDestinationEntity(93U);
    msg.group_name.assign("IFOUSQVNUHNMEDXYIWECXTGGBDWAATPBUAGJOJPSMGKKRHTOEDFKBUSSEXYVHSGCBJHNHLSNRWOVAOQRQUVFKOOANYTFMJZYDQAPRSRPOUTUZGNDTNWGJJDTNBWVXWRMKSPDZMAYXGCHYYBOVIOAWKDKZCWHZCQRCYPMZZXQVWKMUEKIQBBEQJAZMGPMZZLLUFTULPIXTQRSEDYXKBJHNWSCFVCFR");
    msg.op = 247U;
    msg.lat = 0.124263630632;
    msg.lon = 0.599384406532;
    msg.height = 0.896278623789;
    msg.x = 0.794711104489;
    msg.y = 0.43762742536;
    msg.z = 0.390939823772;
    msg.phi = 0.664744018538;
    msg.theta = 0.406961827836;
    msg.psi = 0.871620841031;
    msg.vx = 0.158411337979;
    msg.vy = 0.459383138304;
    msg.vz = 0.238733594258;
    msg.p = 0.243339235848;
    msg.q = 0.685878739368;
    msg.r = 0.482104378628;
    msg.svx = 0.0595515849793;
    msg.svy = 0.724984752205;
    msg.svz = 0.567116770565;

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
    msg.setTimeStamp(0.934230924759);
    msg.setSource(23639U);
    msg.setSourceEntity(93U);
    msg.setDestination(45804U);
    msg.setDestinationEntity(77U);
    msg.group_name.assign("PNOSKPNTVWDATGMLZZEKTKJFDNNQIAFELPLNHLEVHARJLHDWJSNGBDSWOTUKCGBYLOIGMQWYKRFHEAVCFQWXCOQRBETGMUPFUYFMBSQDBQJDQYVJRNYZIWWIYGYKJFCJOKBGMRDCUXZXQPAPGQIOWHXBUNOXAAEUIWUBMPGUEUTOHBCVNVMLATSVZHZRZTCEKRLKICMKLXAYDRXFWZXCFOSBOTVQEHUDVIXMRSPHPFYNXRJTMILHPIYVZSJS");
    msg.op = 134U;
    msg.lat = 0.677232336186;
    msg.lon = 0.242598513945;
    msg.height = 0.224477031431;
    msg.x = 0.652570716978;
    msg.y = 0.973565846942;
    msg.z = 0.494806211495;
    msg.phi = 0.765493367123;
    msg.theta = 0.683115305327;
    msg.psi = 0.702314054595;
    msg.vx = 0.649207590714;
    msg.vy = 0.662019160631;
    msg.vz = 0.148607009577;
    msg.p = 0.988554200266;
    msg.q = 0.139406178867;
    msg.r = 0.152521923002;
    msg.svx = 0.6347691315;
    msg.svy = 0.868007625941;
    msg.svz = 0.734304651394;

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
    msg.setTimeStamp(0.375815393344);
    msg.setSource(54332U);
    msg.setSourceEntity(124U);
    msg.setDestination(38404U);
    msg.setDestinationEntity(202U);
    msg.group_name.assign("UWCHCYIUNJHPZJRPRDPGZLGFVCWWQKHOJGVXHGHRDPRXLFCTSZHZLCRYQUFOZRETOGAQFSWAPSGUO");
    msg.op = 75U;
    msg.lat = 0.628406666488;
    msg.lon = 0.702880913976;
    msg.height = 0.159599865505;
    msg.x = 0.519173421339;
    msg.y = 0.724287556563;
    msg.z = 0.0368398176793;
    msg.phi = 0.271146705616;
    msg.theta = 0.857837569824;
    msg.psi = 0.373714535098;
    msg.vx = 0.80555218074;
    msg.vy = 0.647311955708;
    msg.vz = 0.277081827205;
    msg.p = 0.998024511979;
    msg.q = 0.406807030487;
    msg.r = 0.316235654532;
    msg.svx = 0.171988626397;
    msg.svy = 0.269459890858;
    msg.svz = 0.617033158314;

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
    msg.setTimeStamp(0.30136432505);
    msg.setSource(1245U);
    msg.setSourceEntity(104U);
    msg.setDestination(1278U);
    msg.setDestinationEntity(41U);
    msg.plan_id.assign("OPILULBPAABRYGZCSGDMKYJRGJQABCNJJARGRVDGSBERSVFLCKKOUHSKVHVNZWLPXMMDCPRXTFFGYXDXEARKBRNYN");
    msg.type = 163U;
    msg.properties = 36U;
    msg.durations.assign("LGANVTLZGCEAKILKZITVZJEPIVIRUZHGBD");
    msg.distances.assign("ODTVIGKLVFTVAUXFOYZBHOTUULCUZNUXKCQOSSQRCYEXLQVYCLQKAVDRDIFJEDFLRCSVZORGNFJEXMZVPHHLEIIOLPFFRPOUMRBHRBSKHWWQMTEXYPC");
    msg.actions.assign("TTSZCXIKFDSIVLRBFLUBICKQEERKMURJBPYUZMOVJITDWTYCJDXHHMUONYYKDFQBKGHPWCYPOMAGJXGDEFTM");
    msg.fuel.assign("UPPOOHWQIRFWMIWAQN");

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
    msg.setTimeStamp(0.275552279084);
    msg.setSource(34843U);
    msg.setSourceEntity(73U);
    msg.setDestination(40416U);
    msg.setDestinationEntity(124U);
    msg.plan_id.assign("SLNGKNHLCZGEPUZNFCGZXEWCENDUYVMHAJYTKXTJTLXDOLOBLAHYFZNPXUKBAKJRCNVMJSIXUFHUWEVCXMVQVSLCVHAHRMFRESTXZAOSYMYODAPODOKALSIUMQWZIJXDFQOTUGTRJIGIUFRIDWMBSTKDJWFBQIKSBONPJDEGVNOPKSWUWWFPYGBXCQPKMUYDIGHNILNRWVWZHIMBAQRZBFVTQCDZYKE");
    msg.type = 238U;
    msg.properties = 239U;
    msg.durations.assign("ODXJJEVSPXSUHEVRMXOIFKMDLKWTOKPJOJZLLHMRTAEIWNYMNVGDTSXGDGRXTMYELAQXKUJDJVEQFHFEKFXRBVRTWYNTHUABBBOUYLFUNZPSVRQQQNTGBOLZHZQCZIIYVSVFIKAIJFUCPJLCAIYDZXDYFWAKKLTOGSLENPCGWCSKOBROHWZDLYBNCRPNYGPCMHIQDJSIGQBWZBFWCHUQFCYTXAHUQMDEUZEKOXRMSTAPWSNGEZVHWPAIAVNC");
    msg.distances.assign("SVKJVLTIAMYVNCYDYMAKXLVIESELMQRDZCJIFMOGPBMXPGPEGLBUKRHILCEKVFSXRBAJLOHTZBUYGMGINZKTFDWZGHWFBIBTNDUGODIRWBEPUZLFBGEMKAKSJXDRHLJBQZXPRZNXWIFUSXOENKFAVYHXNQKISUFRRODMCUBZQMETAHJOCTCGJ");
    msg.actions.assign("VTIURITCBBMDVSKYJTKCAKADCOPMSEAUIQWRKGPKNZCUEJQLMMYGWWYAFXTHPLKQRPESZYBXYBIZFRJTVNQBRLOJDXMWHZUEGWTZVVJLCHEGANYSWKYTEJRLEAGTNPSOHTRPGKFJNSMXLXUDPZDIWGDNLQZHYDXHJQCUDSMFCHUZXYOPIICMBAKMFTIBQFUVXOHBUSONIFLIJGFQHWJPYLEGQRRODAPAVZDQKNWFVZRGVSXO");
    msg.fuel.assign("YHOQNECEGFAKWVANXXPDOKKXIIHCZGZDIUNCPPSDWYZYLKJPYRBTOSOFASQRJBWDBEVTRHGRWITMMKNZUPKUWZVFAGV");

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
    msg.setTimeStamp(0.839748311476);
    msg.setSource(53912U);
    msg.setSourceEntity(242U);
    msg.setDestination(16477U);
    msg.setDestinationEntity(251U);
    msg.plan_id.assign("XPHVUAAUIMMRFNVOHLWQQCYYYDOZSJWIYKFOGDXZBBKZVPKDITMHRWQJVRLTKRGEZEREYCXDSBSGHTKCNSTWRFEICHBFIYUTBPKYJTPBEMZQLFUAUENSUXQJHLNZYJNAFDFVGDJXDOSJ");
    msg.type = 84U;
    msg.properties = 250U;
    msg.durations.assign("ZENRUQONIBSGNQDIVYKUJYLISLCAEOVMXFSQFRIMZMLNOTGQSFLTMLXSMCHCJMHVJZUVWLWPJVNUPAASHJTQQKBELKRZJCTVFXUHHMLNKTIKAAGVYZRPODUAGYEFWLPNDWXACQVWCRDBHYZTJJPBBRSEVXZESVDKKCZACOY");
    msg.distances.assign("KQHBRYROUBAEFNHBBDGXNIQOSUSLHWVRWKMHCQJUBTSUJVOGNEVBNTFGNULAAAEZSVLPPEQFFGPRCXYHXTIRWJICUVMYIOJCPLZENZNKOICKDCJWDNYEZDPKRZYOJFDWQXNXPXJFTTLRKYDBPPXSPLUXMCGETHQBYHTSLTXVSUOGBCZWON");
    msg.actions.assign("OAPFIUMUWTUGPKWSEUOITWRGFZCAAGRWPEROHYCHJHBAYMWXZKJCDBVVASKIIDBCZRXGCSILLMDLVXHQJNZOURTSQQLRZDCYKPHZPUDGXCITXEGDOMBUAQGQFQKVVUFTEKEIODP");
    msg.fuel.assign("YHAQLBNTUNXCWVBYKWLMNOJPLNRYNMPSZQTERJPPITQHFCBFSATBZXSMZ");

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
    msg.setTimeStamp(0.494827328509);
    msg.setSource(48971U);
    msg.setSourceEntity(180U);
    msg.setDestination(44945U);
    msg.setDestinationEntity(25U);
    msg.lat = 0.206206595293;
    msg.lon = 0.435429801628;
    msg.depth = 0.327360624008;
    msg.roll = 0.709315220328;
    msg.pitch = 0.442580586594;
    msg.yaw = 0.34093468507;
    msg.rcp_time = 0.356795340815;
    msg.sid.assign("RWBWWOLUVRAXIBHUCESFSIMZMOZEXFABLQBEWMYXONRWMQOIYYDOIJHYJXFVKYAFFKPDENYGKZCXULKTWVWCNKMZHQVXXJKLJGNPHXQCHLMBOAALNDSPJPXIGMKQDYCBXSVTUGPB");
    msg.s_type = 146U;

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
    msg.setTimeStamp(0.561416982046);
    msg.setSource(9422U);
    msg.setSourceEntity(205U);
    msg.setDestination(57624U);
    msg.setDestinationEntity(49U);
    msg.lat = 0.116210221099;
    msg.lon = 0.248659727856;
    msg.depth = 0.724506011002;
    msg.roll = 0.967385981689;
    msg.pitch = 0.811806182907;
    msg.yaw = 0.318657109608;
    msg.rcp_time = 0.872701845924;
    msg.sid.assign("JKGERQLDWGVFMMISDDFQPLDTLJQRREJLOZXJFVHGEDHAEAZYLMRKDABOCNYRRYUCPYPTVGBJWNAUYBZHNCYZBAWOLAYTETSLTHVFQMKGPKXNNPDYCKGIHQXIKGODWBAZJXTKORZJTSQUPHDHMJJCNMHVGSQIKGRPQBTXBIPIK");
    msg.s_type = 232U;

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
    msg.setTimeStamp(0.741686686673);
    msg.setSource(21571U);
    msg.setSourceEntity(48U);
    msg.setDestination(58031U);
    msg.setDestinationEntity(34U);
    msg.lat = 0.550220774256;
    msg.lon = 0.746127128649;
    msg.depth = 0.0288596105687;
    msg.roll = 0.187354545244;
    msg.pitch = 0.0783963478912;
    msg.yaw = 0.903186447957;
    msg.rcp_time = 0.292975999801;
    msg.sid.assign("CAJGFXUXTEQEHNPAQFCTBAWOHNMVKMSVCPZUQRSFQNLSSCGTNCKWTOGYIKRWJSPMAYKRWITGOSWHEVGJW");
    msg.s_type = 180U;

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
    msg.setTimeStamp(0.376300127211);
    msg.setSource(36259U);
    msg.setSourceEntity(233U);
    msg.setDestination(29150U);
    msg.setDestinationEntity(228U);
    msg.id.assign("XVFMWAJEIBQAXQCJUXXGVYHOPCGBGSHBPBUNNJFCKMRZSDDZAANZJMVSIAVKIBXYIYEQPWZKLAIQYVGYVKEETLWCCKQRLRLQXJPFERTUITTOQWRKVSBHPZJDBFRGPLLNILJXTPRRVJFISFCSAVLAODSUSEZHWGNKOTGJBVGCULEOMGFDFJHIGDWYWXHACYCDHDUROTHFMEKIPNMZKXMUTNSDTBPLMEYQZPHWRUMOFDZQOEBOHKYSOWQNNWMXNT");
    msg.sensor_class.assign("QLABAHQANCWQIMDIQRXSAWBQTYEDUJSSVZMGTOJJKPHFRGCAPTBTYD");
    msg.lat = 0.531961591951;
    msg.lon = 0.319185159529;
    msg.alt = 0.952794432278;
    msg.heading = 0.440730815664;
    msg.data.assign("PZGVUYMERRYJHBDGMYLKBVLVGMKSGATMUCFMARZPK");

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
    msg.setTimeStamp(0.152943015136);
    msg.setSource(63798U);
    msg.setSourceEntity(185U);
    msg.setDestination(37611U);
    msg.setDestinationEntity(78U);
    msg.id.assign("BRWYYJJVVIGYSIDBAEVFKNCEFGKTFRFPOWBMHLHAEHLWHSTYDNODCJSVTKGHAKDRQDXYVHXOISLHLNJWLAEXG");
    msg.sensor_class.assign("UFZWEJBNSHLULMVWNFHZCPKMSZHWJJYMOIKTJJI");
    msg.lat = 0.951539698019;
    msg.lon = 0.976164852448;
    msg.alt = 0.573656317258;
    msg.heading = 0.757023177927;
    msg.data.assign("IGRSSVHYTJHPTDZMVUNGBMCMRWFHIXNAMZHAJWWYJBSXVRIANHIAJLOXQPNBPMZGFYNOWBPZDVWFVUPEDOQLEQFBPUGRUFZPCGAG");

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
    msg.setTimeStamp(0.0342895151522);
    msg.setSource(53063U);
    msg.setSourceEntity(25U);
    msg.setDestination(1980U);
    msg.setDestinationEntity(164U);
    msg.id.assign("WQHAZFEYCQUWJFNRSESLCRSUPUNAKIKRZDQWDCLUTXBAPMFOGUVJREVVJSTLSWSDJMAOWTYBPDAJLIMBKWPALNCUYJSHOHVZYEGDPNXVOJCYIB");
    msg.sensor_class.assign("SFCJHJTARLFYBDTGLSUEDLRGAJKHWCAOQHZMGQPFIHYSQQDPVIGRNIXAHFAYTIEKYWENFVOXEMBRKXOIBMUMYRFGADLBDUWMJZDLOVZAMKZLZDKCTUIOYQVWPKIBPWQYUHTCKNTBPEZTRRBCISJNFUQMMBIOXWBNLOSGSPJPETXRPLMYDKSAHJPCHDZNCFGYLUNGZFQNHUQTJ");
    msg.lat = 0.933982720373;
    msg.lon = 0.578243366324;
    msg.alt = 0.800316590086;
    msg.heading = 0.0744251521007;
    msg.data.assign("BQPIUAKCZYBONEJPZSEMHFQFPUDWYLSCDROIAOOTBRNKKKDEHMJNSZRPXXTCDVGHYTLFEFLSGBCYMSYIXUUULIREXADIQFSTJPGDZDBVVIHCMFMJRYAUXOWGPEANTBJPBULWZKLDRRXLPZIMDBJTTMVJIYNMWAKRJCKWZCYKHSBZU");

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
    msg.setTimeStamp(0.449363894995);
    msg.setSource(18325U);
    msg.setSourceEntity(75U);
    msg.setDestination(13288U);
    msg.setDestinationEntity(30U);
    msg.msg_type.assign("WXTVHCVWHJZGHRHSNFCRRLNXSTLFXRFUWSQNSRMARLJKDPDMLXUIQGAAZILEETLYADOYZZMPUGMVHRXXPMYOEVDPTJDEKZJJQOPGXMDYBPAMCESYFSDONKGKWNOCITPIHBILFOBWGTHBAJLTEOOTPFVZPKTEYIGRUAHQNQGWIVQUIYSBCCJNYPQGNDISWBQLMAXUJUOKECZUFVLSJWZQUBCBKFM");
    msg.sensor_class.assign("USPBJPNKYAWEBJNYQMIKGXGLGQAFLKCNMWHNGQVRUUBUSUTFDFSP");
    msg.mmsi.assign("WWLTPIYWWWXGZPITQMSVXFDUFWJGMAXIEGPSFWLCVEXFXFZDUBHKQTYATPWOOYNZMTMTQZINKBXACHVINJESKWXCHNJRIEIJSBXSVFKRZIHKPPDGDZELLJYRYMALORJVQVZSOCCBLBVFKTZQNOMLKEMJBRUQPBHXRFMIUPNFSCBGYQDQBJOPPLGFOAMDSAZHNGYKTDWRHOVNVQNLGNSBEEELVYEUACYUGJAKTHRCHKDDMJUCXIZASURO");
    msg.callsign.assign("QMDGVJTBRJEVKHYHGNCSLHISOUODABTGYWIXOIBVADAPYPCHQXHILWZAINGQSSCFNTMRHPFYMMDRFKGWHVBIUDYCYLBQWWFXWOAGCNZALBWJTSWTALIVJKOJQUSSNUTQNLFITWSMTREEUDEXSVPXHMNJFYEVUCVRYZNGCBKX");
    msg.name.assign("QORFEHLRTUUAEDAOMYCAYMKXZCPEDYBBNQKGVEHKK");
    msg.nav_status = 154U;
    msg.type_and_cargo = 180U;
    msg.lat = 0.618212623064;
    msg.lon = 0.465615270149;
    msg.course = 0.382430570436;
    msg.speed = 0.0397737085836;
    msg.dist = 0.101059644796;
    msg.a = 0.877826791215;
    msg.b = 0.1897277791;
    msg.c = 0.72299292609;
    msg.d = 0.619416186554;
    msg.draught = 0.234266504368;

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
    msg.setTimeStamp(0.142507084079);
    msg.setSource(40507U);
    msg.setSourceEntity(220U);
    msg.setDestination(56915U);
    msg.setDestinationEntity(8U);
    msg.msg_type.assign("KEDRAKCMGJ");
    msg.sensor_class.assign("UTCALNOEIMDJZBQIWYAOMRSKMLHPDSVSPGXKHDZQZGBCEDZXEYVMYNSJIXFEZAIJMBCCLWIUBYWJFEBPWRZOKLHCBCUIUQHFFGTSXR");
    msg.mmsi.assign("FXWAVPBUWNFTGPJMEZCQRVGEERHQACTSZURXAKQJOXMCRKYHQNEDGTMTKZZOLFLFHFTURBRDTNGTDISMCVBAHDIJEKKPIEHBQALROZCGKDYHZKYWTOUDSPFIVROEZJHAPRBWQCTFHQBLJMBGNBSWQGYOVEJAFKDEXDMVSGFYPOWIHNJMIXIJELDGKPYYCCULQBMSLMDASZSYAAWLOUN");
    msg.callsign.assign("SNYHATBCGKCTFUZPEEBUVSJGXHEENSJBYMURBHVDUAJZVCHZYGSFCPOUXWZGTOMBPKDPOYBVIXRCJKFWLKOQCXFHAKYGJRKAIIDEYYWLRGPLFACQUAMMSMHDRMMOSWVWZWWXIQKIRNTBHEOQRIOATV");
    msg.name.assign("LTPKGZLJCRAZJBHYKYEFJLVHKRWJMPWAJXRSTTBKKFNJBWBIECRYFKOTQINQZEURPMNOCEEXCJVTYWDCBLNIZGQFGMLXNTTUUGMLZAAZUDDIQXTIDEVRDJVAHPUYNKYUGCXGFTHVCZAFOWDGPAGOEQSKCZLVGAZYSDEFNHVURQTNZWP");
    msg.nav_status = 16U;
    msg.type_and_cargo = 248U;
    msg.lat = 0.161563029462;
    msg.lon = 0.846920645436;
    msg.course = 0.0412521599481;
    msg.speed = 0.465170003735;
    msg.dist = 0.670867074739;
    msg.a = 0.55907320518;
    msg.b = 0.305757431282;
    msg.c = 0.0429957720541;
    msg.d = 0.33265656917;
    msg.draught = 0.594840978256;

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
    msg.setTimeStamp(0.360206064448);
    msg.setSource(5987U);
    msg.setSourceEntity(252U);
    msg.setDestination(61712U);
    msg.setDestinationEntity(190U);
    msg.msg_type.assign("UHIQPERWHYYVRFZJEWMXFQRNPJYKEQMRKPXXJGYYCONGLAKNTPFEWLKKSARDMNGEALLHNFRQZTDBFBLZTOOVYCDXGSGXKTHSERIX");
    msg.sensor_class.assign("UAOOXERITVFBWDVIEUADYOVMPOEGFNMPATAKBPETJKZDRICATLHRZQDLHTCBHJMEKZKBBUGXNTMQRFUTFCLLMOQHXYIYHRUAISTVIBXGQLGLGSOZDEXBMOHWXFWAQVJWIPRIZFPNSKSAFTGCNGWKSQNSEYRDTRYCPJKFCVWFXDKCIXMQLKPYMZNVCSPSBZCJPJVSNCLWNYJZUVGOKNMFDZXMA");
    msg.mmsi.assign("HYQHSRWTKEPKZORPJMRIADUCESTDHNGHTSQZBGZPHTGVMIPNIMYTLRNHFSMVPQQJPAXNRPIAZOBBRMIYWOYWIUSLCBHKQCCMDTWEKBLZFRFEPOVVDVQFWNLBSPCXGVOWUQLTEUISOBUFTQCBCNAVIUXZGOMYWXCHACKMSGZKJMKEIXKLUJDNGXFLTDJWHNLXZ");
    msg.callsign.assign("ELCSLBESITSTCMAWTJHRYHMGTEZKAFNCPJYHONKCMNOOWJWZVKAMBPKUEXDQHNVWYMVLCOURBWODOBLTEJMABLKKLXJIBNCPBYIYGQSFJXQYGUFZPGPJIGFWSIGNAQDTOTADMTJZWXDRXFNZFCEIPRKYKPLHCEZUSUPLHHUXQFVMBDAOEXSVTNCQMZRVFEJROHZZSQIWDBXVIWHFRAYIWFQXPTGZGMJVREDVQQ");
    msg.name.assign("VATZXAETRPGKHKUENNJUZKYCEMKJGKYXVUVIFRWJQOSZXFPCVDSEZIHNKLNAIQIOHDWLOKUMGAQICCTYYCMUXJC");
    msg.nav_status = 52U;
    msg.type_and_cargo = 79U;
    msg.lat = 0.27084844968;
    msg.lon = 0.000113411867901;
    msg.course = 0.527095424013;
    msg.speed = 0.268789489288;
    msg.dist = 0.428206251034;
    msg.a = 0.741390531933;
    msg.b = 0.909004495334;
    msg.c = 0.157469662754;
    msg.d = 0.120776249494;
    msg.draught = 0.666732805355;

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
    msg.setTimeStamp(0.465528954606);
    msg.setSource(36337U);
    msg.setSourceEntity(167U);
    msg.setDestination(18759U);
    msg.setDestinationEntity(241U);
    msg.id.assign("RDEIDWILFCBRQJLORIQMLJYHAPWKNKDHCQQLPZKXNQIGFTBKJJXUEDIKTPWMEIMAKUPEOVOFBLEUXOYOFCZEJZTZHOMVGIFUAQSWDWXDGKSLIPAJGTRYJNOOVNXRGSMTNARAIKREHQLMLPGVGDEWSYWMWSREXTHNLZYIDXHVQDQEYZWRKBWCGMHXTUAZJCUCCFNBSZNJSMVFHSXJBGSBYVHVYTFBOCLGVABPBXTMPVUTPYHFAO");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("YVDLNVYXVLTJOAHXRPJZRLTKGTE");
    tmp_msg_0.feature_type = 241U;
    tmp_msg_0.rgb_red = 17U;
    tmp_msg_0.rgb_green = 87U;
    tmp_msg_0.rgb_blue = 56U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.915963184811;
    tmp_tmp_msg_0_0.lon = 0.898365547701;
    tmp_tmp_msg_0_0.alt = 0.0556188443118;
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
    msg.setTimeStamp(0.27853834195);
    msg.setSource(31543U);
    msg.setSourceEntity(66U);
    msg.setDestination(20121U);
    msg.setDestinationEntity(54U);
    msg.id.assign("JYZIJEDLACQOXHKVAEUUHUWFSLZAKXHKXZAOGXKUPN");

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
    msg.setTimeStamp(0.924983107615);
    msg.setSource(10784U);
    msg.setSourceEntity(69U);
    msg.setDestination(5970U);
    msg.setDestinationEntity(157U);
    msg.id.assign("ZPSNNTWWSKPFTHUMMQKI");

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
    msg.setTimeStamp(0.760366918027);
    msg.setSource(24389U);
    msg.setSourceEntity(178U);
    msg.setDestination(57989U);
    msg.setDestinationEntity(67U);
    msg.id.assign("AQMMJRHPGOZZMNJYTBWEXAWBOOGJAQAXIXSUGDYVOFQRHZMLZKKZHOWBDJHOTJKDJTXNNKEIUTUNISCHNQLCMGCKRFQUDOQPZKCSWJPLFDYLXBZIEYSRBDVWBCFBSGIYHGS");
    msg.feature_type = 250U;
    msg.rgb_red = 61U;
    msg.rgb_green = 5U;
    msg.rgb_blue = 26U;

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
    msg.setTimeStamp(0.916352559979);
    msg.setSource(41787U);
    msg.setSourceEntity(208U);
    msg.setDestination(5181U);
    msg.setDestinationEntity(25U);
    msg.id.assign("LLGETKONDDXINKSPJDCBNRRPGFQEAEJOBHTP");
    msg.feature_type = 90U;
    msg.rgb_red = 198U;
    msg.rgb_green = 180U;
    msg.rgb_blue = 109U;

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
    msg.setTimeStamp(0.045588998074);
    msg.setSource(21897U);
    msg.setSourceEntity(245U);
    msg.setDestination(16495U);
    msg.setDestinationEntity(6U);
    msg.id.assign("JNNMUUGHKXACATPNDXDZTVZTNVQPSZBIFIDRFXFWQBSGRQMUKIOIWXVDJMPPRYAKQFROYNVARITWHVQOCENWDKVCLLTZBCFAMWCEUAOKPYGZYUJOZEMVJEXSAPVJSGLIJUGLORBHMILPDTVCBCBBRUYMAJKTRDMEHLGERHLXOFNOEBQOGXEXIFHUAZNZYQTLKYWKXPGNOLKGNFRXQAWYYLTJS");
    msg.feature_type = 57U;
    msg.rgb_red = 195U;
    msg.rgb_green = 214U;
    msg.rgb_blue = 226U;

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
    msg.setTimeStamp(0.586397213312);
    msg.setSource(35702U);
    msg.setSourceEntity(229U);
    msg.setDestination(55745U);
    msg.setDestinationEntity(90U);
    msg.lat = 0.63945447773;
    msg.lon = 0.174797356419;
    msg.alt = 0.906203892811;

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
    msg.setTimeStamp(0.84176539172);
    msg.setSource(45505U);
    msg.setSourceEntity(228U);
    msg.setDestination(54406U);
    msg.setDestinationEntity(97U);
    msg.lat = 0.683305942413;
    msg.lon = 0.965760340443;
    msg.alt = 0.424587797006;

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
    msg.setTimeStamp(0.120279883294);
    msg.setSource(53901U);
    msg.setSourceEntity(232U);
    msg.setDestination(16546U);
    msg.setDestinationEntity(105U);
    msg.lat = 0.128417416957;
    msg.lon = 0.484024444797;
    msg.alt = 0.882745864889;

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
    msg.setTimeStamp(0.100767545377);
    msg.setSource(34541U);
    msg.setSourceEntity(169U);
    msg.setDestination(8656U);
    msg.setDestinationEntity(67U);
    msg.type = 72U;
    msg.id.assign("TOYYHENAGXNVNADRQIJPPGTIODDUMKLWSZJZUQERMFYHSFAZSXUBEKPJBIEGEXVUQDSZLAFTJBUCULKYJNQKEODYTZNWHMBSSPLMVYWTWCRMUPFVRRZKLHMJSPWTJIMFOHKWQOQVZIXVOPUWFZXCLYXPJFZGHOCAEGJIAKRJNTPFOFCQAHCOUSAFQENRAHVBYWUBSZBEVVDGHTTXNANCSBXOIGRMBQGVYYI");
    IMC::PathControlState tmp_msg_0;
    tmp_msg_0.path_ref = 2681980339U;
    tmp_msg_0.start_lat = 0.233451569138;
    tmp_msg_0.start_lon = 0.174818472186;
    tmp_msg_0.start_z = 0.253283564216;
    tmp_msg_0.start_z_units = 204U;
    tmp_msg_0.end_lat = 0.728103866611;
    tmp_msg_0.end_lon = 0.0786100112317;
    tmp_msg_0.end_z = 0.574384373526;
    tmp_msg_0.end_z_units = 83U;
    tmp_msg_0.lradius = 0.508588922365;
    tmp_msg_0.flags = 202U;
    tmp_msg_0.x = 0.0239723322579;
    tmp_msg_0.y = 0.0998552923081;
    tmp_msg_0.z = 0.901692508127;
    tmp_msg_0.vx = 0.00333529419379;
    tmp_msg_0.vy = 0.869007528368;
    tmp_msg_0.vz = 0.36163200259;
    tmp_msg_0.course_error = 0.902906172536;
    tmp_msg_0.eta = 48707U;
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
    msg.setTimeStamp(0.0308100620115);
    msg.setSource(176U);
    msg.setSourceEntity(183U);
    msg.setDestination(45367U);
    msg.setDestinationEntity(197U);
    msg.type = 54U;
    msg.id.assign("NEWDMCQJCSTOPJLKKBJCIZZQXYTPXQVSFBLNMDJWHBVRYUUFAUNRZUGDKWAPBWJZGKAXMAVTEWOPLWZRUDLPASOWIYPBXZHOTKJYDQWNFKQFKWTHFUFBCPSQEQMKVCGUKYONLCCBJNHPGWBVHBAQXYBGD");
    IMC::CacheControl tmp_msg_0;
    tmp_msg_0.op = 14U;
    tmp_msg_0.snapshot.assign("AYCFIDKSFUWQNXSQAEJXSWOPEVRQNXQVQVXADRPOVWBBPWFHVMGEBVNAIXMD");
    IMC::CurrentProfile tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.beams = 172U;
    tmp_tmp_msg_0_0.cells = 11U;
    tmp_tmp_msg_0_0.coord_sys = 132U;
    tmp_msg_0.message.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.655496280557);
    msg.setSource(50729U);
    msg.setSourceEntity(72U);
    msg.setDestination(15813U);
    msg.setDestinationEntity(29U);
    msg.type = 200U;
    msg.id.assign("CYRLDSUAEQDBRVJPJGWADCCSVOMJRPJRVOEXSPNTZHTVPASYKEGXMDSJUNGKBELZBOQLBPQJZVDKMDFIMKCAQLQCAEVKHCDMCAEOIFFIFE");
    IMC::LblEstimate tmp_msg_0;
    IMC::LblBeacon tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.beacon.assign("POWXXRCHZCLWAFXGOSJTHQBJOHGYCDKHWJTUTCYUTTDWPXAASM");
    tmp_tmp_msg_0_0.lat = 0.515703886534;
    tmp_tmp_msg_0_0.lon = 0.645407123375;
    tmp_tmp_msg_0_0.depth = 0.676182804878;
    tmp_tmp_msg_0_0.query_channel = 237U;
    tmp_tmp_msg_0_0.reply_channel = 119U;
    tmp_tmp_msg_0_0.transponder_delay = 237U;
    tmp_msg_0.beacon.set(tmp_tmp_msg_0_0);
    tmp_msg_0.x = 0.503243275084;
    tmp_msg_0.y = 0.559853258952;
    tmp_msg_0.var_x = 0.224195670047;
    tmp_msg_0.var_y = 0.896069531691;
    tmp_msg_0.distance = 0.498787996359;
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
    msg.setTimeStamp(0.256607964884);
    msg.setSource(28731U);
    msg.setSourceEntity(248U);
    msg.setDestination(27785U);
    msg.setDestinationEntity(36U);
    msg.localname.assign("QWYXGCECNBBIRZBVKXFSAIALNGWFXKSQFBFHUJLILJZUPCNGQSDUFPOSBOOTGANQLUHVEQLNREYASNPWDEZMODTJXGRNVWTMZQCRWIKWRCHJVYUBJKPYQWCCKHMLHPIXSJFUVEUGPIAOGXLDRUKZJVNJNTZEQRPDTTWPAVEIOMZYQWHVHGSRFHKMKPTALOOHVADGDZDO");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("JGETXYMOOJCUVOHADZNTXHAPKNVTMUAQYAFRSKJBAWMTCDMKVFNQEGLPGILEGXPTITUBJPBKMOIWKPNPHBHDJQZRPVLLJNSUINSEEZGHCFZMXHITEVDBSCOVGPUZKNBYLHZXKQLXCBZVMODSWEJFCUDXWTKHSEAQPNODRIWUCLSRJYAFSAWZQDLEUARRPYRTINVWYISQBUIGMLUZRQLYGHFSQAJYKVXDXKRYEJFBCCQORFNWCZFIOMXWTBMD");
    tmp_msg_0.sys_type = 20U;
    tmp_msg_0.owner = 49559U;
    tmp_msg_0.lat = 0.307566830697;
    tmp_msg_0.lon = 0.115557834453;
    tmp_msg_0.height = 0.905127983724;
    tmp_msg_0.services.assign("KOCAVREXQBAQHXPWGAONJZBBIAWGUBACWDTEYXSCARXXFZPKZRMNJVOTYMDLPQMHSYG");
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
    msg.setTimeStamp(0.913008825427);
    msg.setSource(59351U);
    msg.setSourceEntity(233U);
    msg.setDestination(30336U);
    msg.setDestinationEntity(209U);
    msg.localname.assign("JJVBJNPJAIRCVWHKAUASQAFTSVMPWYMZFHFDJXRMEEIMPDXNTLZIOOVTNSTIHBKKTFDPVTMINKDLTEQPQLSSAHDJUXHMMNEXGTLOMGCQEHNLCYENXLBNBICGCBFZAPKZXEAEOCVUWJFDXUXWOYRBQJHRBYSGXBQZGDUFELUCOKBRYRGCTHKLGJIEZWWPFYUHZBTRPQIIXOVUNZONQDPAQYWLAJWDVHAIZMVPCQGGSWGYMVFOS");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("JVFWISGXPAEVJNINVYCQNCECMSTXUZWYVHHVXKNIUAKOSAGTGCKVCPIIUACZVKHKQRESRMHDMNVMPTWGNOYLHNQPSYJTCSBKGDAZTOQMNASIZDTNFDLBWLPYXEJUUORRHMZXLQQOEOFUEIZVOBEYMQKMWOHKMEPFBUYHCJYHVNRJODCULBTDRKZDQSGFWPRW");
    tmp_msg_0.sys_type = 37U;
    tmp_msg_0.owner = 30297U;
    tmp_msg_0.lat = 0.660144194923;
    tmp_msg_0.lon = 0.504052780773;
    tmp_msg_0.height = 0.156675630575;
    tmp_msg_0.services.assign("TJKXEESEZRQCHOLQAPDMRRCXUTLCHTDYXJCWUYEBWWYWMHCJPUBMFVLLQNIXKAXEUWVITHPYMIQWHVXRPSQBBUVONDFRDYJKASHIEDTDWTXPLWGJRLNNQSFMRKHZPNZYKNQDGMOESVVUHNAZSBOIMJVLCIMOVGUJBPBKGXSAZUOZBNBKFFMTQNYELRDOFGYUSCJKCOGWKADVDZQOYXZB");
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
    msg.setTimeStamp(0.327688691845);
    msg.setSource(53265U);
    msg.setSourceEntity(165U);
    msg.setDestination(2844U);
    msg.setDestinationEntity(90U);
    msg.localname.assign("TZZBSYOGVVXQDDEINEXZGTCMITKYSHRJZLAFNBZBPLPSGASDHXKUYLQHMIAJQKDOXWRBVHDGDONQMMYVBPTZTGKFECLPBPCCMZPPWEQIYUQXEONRFUJEBBWVNTEJLFSVHYEVRIOSUAHUGBQMLAITIKOSCCCINUSELFNVXJHLPJPYMKFWAUYTFDROARTWMQLFKYJRMXIGIKPWHZCOWRJUCWMHVSXQZJGGJNUXCGAFRAWTLSZEOODY");

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
    msg.setTimeStamp(0.137350359311);
    msg.setSource(29368U);
    msg.setSourceEntity(131U);
    msg.setDestination(4253U);
    msg.setDestinationEntity(52U);
    msg.timeline.assign("WCXEHJKCDEYQBYDUURDSDAIYKKIQZJPHKOUQTXQHOYJULFYXLQDZFIVLMSKHMZYVKVGTKHBNZZGPNMEQSPNSFWOJNSLYXBMOSDCMVSNVPLQTSCEGGMJHHHGMAARIZEDNUOWAQVGPRPTWEAKFNMLEFOPBGVDOTWTINCYEXUPFAEKQWVRCHCOKZM");
    msg.predicate.assign("IOKDAVTGTLAXQCQYWTEUNMMPXEQRSRJXIIESVPQMHDTAMHYLNKLSEZRWTGCXOMZAGBDOPOHEXPIRHPZLCAOIKTNVVTCYWUWUBFYZJMFIWFKYEFRGNINPTSRDHMDAKGDSCHTLFKKCCEUFMJGAAIXZFCDJHNEOWNQQUQFNOLBIXBSUAPCVJRBGSSBUXXSXHWAORZVRPQENBBFLDYGUCBOUYKEGZZYQLMTVPJKQGWWUOIBJZVJJFSZPHNRML");
    msg.attributes.assign("AMEZHJZXXFOKTUMZVJYHMZPZRBDDILUHOEQWLSTRPMSOOFMPSQLCRXULSUKYCBKJYUYGVQBYUOFNTUNTFJZTMHMEOLSYVWXHDIVSTOZAPVKZPTIDIANFRDXBCZGAMVQUCKQSLAJEQEVGJPGWDHCDIFNWBCCRIBQSEZWBVTBPQPBTRJWYWRNYXNNXGNLFK");

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
    msg.setTimeStamp(0.691784350906);
    msg.setSource(12924U);
    msg.setSourceEntity(28U);
    msg.setDestination(47885U);
    msg.setDestinationEntity(102U);
    msg.timeline.assign("YVRPSLARAZEIRGQDRADXHQQZGJIHHESOVPBZXSMJXWOHYTOWJLHA");
    msg.predicate.assign("VDPJOTFZLWOAIVWWIZRRMSBAYDAMGFUEMSNJABXXRUCHJQBTMEXVJYRCOWONITHUNPTZWJOMGNHCAKOECUKIGCDSMYYFOTMLLNAGKAJLBDKIPQWIDIHFUDGVVVWDHQFSKEPYGCTNFBLSDLKJYBQVMEHTLMUMZUPSHTNWUKSEFVZFICRSXHKGKVOS");
    msg.attributes.assign("CJRPBQAWGOAJWAOFXQJCIUSKCTXORRGWGWSTVKAAYMYXOXGMSDIKJZ");

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
    msg.setTimeStamp(0.472704495467);
    msg.setSource(50313U);
    msg.setSourceEntity(217U);
    msg.setDestination(54889U);
    msg.setDestinationEntity(40U);
    msg.timeline.assign("JQFSIMOIMAUGFUHMGQTLPBSNQFGTNKIPVFVX");
    msg.predicate.assign("EBMAXHJXNELQRQTXWCKJXUUMWFEKRTFVICZSJGVJRTPMK");
    msg.attributes.assign("SANIPQPLRDTWYITTFUTYDAIRFZNPOSVZBHMYMEXBAHVGETKUEYYRYOULFKILWCXLDYTJXDVZYCCVECHKCJZYMEKOUXMRCWTPNGOJUFUXZQNWUDRHJMYQQXABMDBLBKFRCSHRLXZTNOTIAWLMBEUMIJJGJSNOQVCSKLLRQBRAPPGGBVFGPEFDBKQVCQJVWIXGOGAINADUOEESVSWJFKFEBSPDSZKKWUNF");

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
    msg.setTimeStamp(0.180642955223);
    msg.setSource(53345U);
    msg.setSourceEntity(180U);
    msg.setDestination(14762U);
    msg.setDestinationEntity(188U);
    msg.command = 214U;
    msg.goal_id.assign("FUARILUEMSMNSBFEBFBLSOOFCRTFTJMNGBGJOROZHSFTQIPVNCMWYJDAERZAGDXZOYFKYHJJRZAENNMVQZCPXRVWBQANZXSBGYQNYDHJYTOKKWWULAUQKJEJRPLSAPXMGCSVWVDISVRCAZSWQCHPZUODHXYJLKWETKZCFOTNHBBXGNZNVVBHIOYHYDMGCTJRYGVEKTLFUTTPUGMWQQMIUDIUDPPKMR");
    msg.goal_xml.assign("ZHERLSXMQEPNBYBCRATWYNMHOZTFTYQZJLZIGVCDIJPHFZDHDYDQSIJFXONYAQVXFZKUMPGGPUJVTCPWNWFMMNEWYHWUWUXFRQAUHDOIQGTMLRXFBDKUUIJGBAVVBSS");

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
    msg.setTimeStamp(0.380220474273);
    msg.setSource(14449U);
    msg.setSourceEntity(221U);
    msg.setDestination(60466U);
    msg.setDestinationEntity(132U);
    msg.command = 83U;
    msg.goal_id.assign("AYLPVDOHSMLODAEPICYUDIZXXOPNIIWOXRFITTAXCVQDMMNELBXLNEGDCLNKWAVWIZGRKZPUQQXZOLMVLBUAAUFEKQYKCFJYHVOYBNKWQEJGDTDAYEPNHUEKBGZPRVGUTFSXMTJHPULRRURHIBQKSKMGPTJVZTQJRRTYUPOBVRQRSQBUZNLGIDSWD");
    msg.goal_xml.assign("QCQZINJKWLAMYFVGGIEBQIEGXZSDLXJAQWFFCPUJZNXOVTECLGWNFTUZWZYRMTIJIHRKURCZ");

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
    msg.setTimeStamp(0.528665979827);
    msg.setSource(53064U);
    msg.setSourceEntity(197U);
    msg.setDestination(37632U);
    msg.setDestinationEntity(173U);
    msg.command = 149U;
    msg.goal_id.assign("YWNTDPFGBWPZNLGRTNXQSHWUTLRKKQDFEXMEMVZMGCJOETYVYYVEYMERITCSWOPJURHSSJDKIIJIJGOAQZGYWPDXAHGILPLXJTXIOSGNKWUWRIYINPCFRKMEFUSFCBALBUQNDTT");
    msg.goal_xml.assign("SHZYIGOBJRXWQBBQHXJULQCLDTNUJFTSREHFUOHCCXTOZCVVJAXORIUFLCKKWBQFTYFMBOBJSPUEXONMJLNYZRQUDBIVIKRSOANHALYEOKJHFHIWVRMKSLKCLPPTPMCNOEVOFDRNBSDARZGGNZWIGNQWVIGEAJIJUYPGGLWTYYSEPUAGZXTQDZMADCZFMTW");

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
    msg.setTimeStamp(0.344347996576);
    msg.setSource(42877U);
    msg.setSourceEntity(134U);
    msg.setDestination(36736U);
    msg.setDestinationEntity(137U);
    msg.op = 115U;
    msg.goal_id.assign("ARUAUEHRAXBTOISMZMUGPOSCQJKBGSJPSDOGSNJKTPFNKXCFIHJVHZSSJNPOPRVNMEKJYQQETIBAWJZCORSFCBUPZNVRYUCXTWLDDZOIIBBYNEYWYVTDWUDPUVFZABBKGEHHWILMBICZMYKHCLNCREEFIVQVTDGNMKJOOPTZQJMFEPFKYOEGUWGLVKMDLNAYIHRCLUDGLAEWRGRXGA");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("WSLEMOBLFHXHBPFFJGWRDGTVOTNDVWXCHQVKXWXJPFCLQATKAZQEJXKXGYKYDIGEMUZBBYLHNMFIWRRSNYUIPEVLBYKRA");
    tmp_msg_0.predicate.assign("SHZOCOREKZXZZGDSFTDKBAXUTOZEHPFHVABNXDINQZNPTNCONJWFCROXLBXCQEYBSIBPBZIVGUDGJJUKARXTAKQEUTQAOYRKYJOUDVXFNYKWHQOGGWUMVJECKYRCYHRLNFCE");
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
    msg.setTimeStamp(0.130960967747);
    msg.setSource(8711U);
    msg.setSourceEntity(1U);
    msg.setDestination(5083U);
    msg.setDestinationEntity(126U);
    msg.op = 82U;
    msg.goal_id.assign("YTCQDAMCPRIKWSAZRFFXXISSBXFCSNCVYQHJFBBIOITKPJAWFGKTKNRBVXJLBKSSIYEFXOXIHOQDOQCUCSONFIPDXUHEBANZPMEZJAODSCTGEUPMPZUZZFWQTLKHIVGYPHXCRPAGVHPWVLNJKOFERYAMQAULEMKZBJKNLDIMEYHVTKMLOPJRELISRC");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("RCETUUIWWFGWOVDSXGVFXAMUPNLLHYCTRYKNXRBGIZJUTKIOCSIHWRKSKUDYFBLWIIFUMDDKNR");
    tmp_msg_0.predicate.assign("HESYCXSIOWJZFYIPWEWQFFXCUHJKKMCXOFXCIDXTLBGEZMHZLKGZUZFQIFVNZPLURQAMLTEVNBXCYDADIATRDINRBQKNTJKGWMDKEPAQOIGTCUMLSKIZDWAVRYQRCJGEZRHPBGLYHJOPWOSENLLXFTSGDEJMBTPVXHYVTMAOXPYIWPNOAJUJQNLUAFBCMUDVJEAONQTN");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("WFKKLCIPDAEWLYOQQBKXAMIBBOHNNALACLQGSQJRJTUKNWPRHNCYIURXRAJDCCZDUCAITHPXZXZWMJSWQYTOFJLUKGPVCWIIODDSDMLYEFTQUEBCVHWGE");
    tmp_tmp_msg_0_0.attr_type = 197U;
    tmp_tmp_msg_0_0.min.assign("RQLJKNBGYSHULSBAWVHVABUUPPAVMPMAZDRXOJFYEOIYYQYEEKMTKRLEBJBTV");
    tmp_tmp_msg_0_0.max.assign("TCGUJDHDSGIWBIWIKCFPGYMTJGCAQAOPXTYUVOSYMQBRVTNQZATNNDOWEAVPQKOLUPMAMTETRIBEXPSWGLXJEJDMQWYVIGNYHFFIZLSZAFYNYXZOPPKZVUMEOEHWXVMJSVHQRBJLPBFJANGBRSFJZXFCQDEKQCBLUPMIOIAECLHFIOUSLTCZKKSDXXMBZXHWQRBYTSUKRCESHXVMFLRYZAWJNOARNHLCCKQWKUHVWDGNKTYURDGZREJVB");
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
    msg.setTimeStamp(0.176554816445);
    msg.setSource(23512U);
    msg.setSourceEntity(138U);
    msg.setDestination(65500U);
    msg.setDestinationEntity(96U);
    msg.op = 2U;
    msg.goal_id.assign("TMGTHQIJCXOXV");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("EQFMYYKSVGBPUAAGOTDRPUJYZUUWECWKKMXJSXUJCCLHNCMROYZFXBEQWIBAYRUQFNGPQBWGNZROLNXLKAMCIPJVMNISXFXWJEYKBZIFZZOWKGSJRAHNHKUAMLDLLQMIIJGICKOBTSJGZXQYLFTVLWDMBGCYHPVZBIMVHDDWIMHRHBUVWNQZLNFEPEVTTSARSOEKO");
    tmp_msg_0.predicate.assign("OZGCKLLVZEJ");
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
    msg.setTimeStamp(0.286438314341);
    msg.setSource(22796U);
    msg.setSourceEntity(53U);
    msg.setDestination(29298U);
    msg.setDestinationEntity(130U);
    msg.name.assign("OBCMAJUDPXXVYUHRZBNKSUPGDXXIZGCNHVUYRYTQNBEDLMJPASHUKZNHP");
    msg.attr_type = 164U;
    msg.min.assign("PFLKRGPNHWIGAZDXICFGLHYGQXZIBESORYVZYNBWRULYTOMHDYMOZOBAQQEGXSWHRKGNJTBRIYUVVJHMXMZFXUDWTLRINQMPZXBETVEPCSJNJOEVHFV");
    msg.max.assign("MTLLJLEDKVHCVRSVLHGLJKGOUYEGGUROPQZVWNCCSTWWAJAXWHRLIKBQTMBGFBFRGDNVKEOBXCUWNRTWRKFBFVBQP");

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
    msg.setTimeStamp(0.957295093238);
    msg.setSource(9331U);
    msg.setSourceEntity(223U);
    msg.setDestination(10947U);
    msg.setDestinationEntity(91U);
    msg.name.assign("MOQEBMXABHZMGSCTXGGDCXRCGKBASVCKKRJYBYUXUMZJCWNNCVVPYITWRCFUPDIXAH");
    msg.attr_type = 128U;
    msg.min.assign("CELRIRONSUSPRLXAZLGGDUPLLTUOPCURVEBOASQIEIVTVNBRZYUQVLOJOVKQKMJRYGRJIPAMHQADIKTMAJECMKNGYEKFZHEKESIHPQHTKWBAPDHERZVBTPUDSBXZGUQCXOWYBSRNWKNUXCGFHEKSWTGPFLVTTWYFANWFZBMXSKOMGQCMXJQVCWFFMUI");
    msg.max.assign("XPSUKEZHFZYGTXVHRFUYZJNSCMKWHTXGMBGQZLRRQWFKRORCEIWPMJRDEVDAWPMPOWLNLGJSGJKYCRYHUCWUGYNSPQQSJODNMBHIDQLV");

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
    msg.setTimeStamp(0.711637065482);
    msg.setSource(12928U);
    msg.setSourceEntity(135U);
    msg.setDestination(30139U);
    msg.setDestinationEntity(217U);
    msg.name.assign("QBWZJHBYYPHMWRANECVPDBUIPCGTCZQKXUNPVVYBSRLYISVIZ");
    msg.attr_type = 114U;
    msg.min.assign("RMKWDHHMYPXHVTDJOGUJEVPRICWHAPDQAUAKUNTRCIJKFFEHNLXMMSBQSNCNPBOSWAPYRWODCXMEQBYPDTFEZZGTJRPBLFGAJXNZSRAQZKGKGKDPEWUQQGMNFRQYSXZZUDTEBHWEWVVBOYDTGKYSFANZJCCXFJUOWXVSUJIPLOYQBVEZHHFFKJUIEBOUSARTLLIILILVDXOKTYTPILFASQZMGTMLROCVINLWMAUZONSVDYGIHMRVBCBKCXW");
    msg.max.assign("WZYXBEAUEDQOLMKXGFTLNIHYFYSWUMUMDXKEMAZJ");

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
    msg.setTimeStamp(0.13945700706);
    msg.setSource(12755U);
    msg.setSourceEntity(30U);
    msg.setDestination(32216U);
    msg.setDestinationEntity(172U);
    msg.timeline.assign("ZYUFKHYHUKGVHFDMCAWBTQPSXRHMWTKSNLFTSJLATWUYDRFCZYHKBOYLPSAMSIAYWLESFXLGEPAWEPXGZTI");
    msg.predicate.assign("ZLJGUOGNHAFHRNRZHITXPYCKCFL");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("MPMLUDODEHTUAIGSCBZNGTRUMAFZEVXKAHPQBNQKIOXZCQZOYTQOEJXBBZWFKYHQPIHZWSDPLKEDUCJJOLKJLIFXSPTNUJEVWYJXFEFDHVMFVRCJEVPRQPKHRVWUIYGMLNBVLEQWITACQAZMIRTAASSDWICPMYNXTBDKMYZQGVLXBGCEOGZNYFWUIC");
    tmp_msg_0.attr_type = 104U;
    tmp_msg_0.min.assign("LPHENZCLDWOJZDBRBPNUUXQXLFCKOYAMKFAJTOOSWFWRLPGPSMNZDVFAHIXUHVINKEFIZUISIHVVEZEOTCDYVHVBNENHKORJCTCUVGRAAYTJZDPBYPO");
    tmp_msg_0.max.assign("WVWPZARMNQCPXTEGFWOSBAQLGLAECXYOZGNIEVMICMHDMUXHBJFASSJKVZYUTNDNXKOGDXUGPOENJDZKQBMEDYLNBJETYQUAZLKPQFKXTGNPVYWSDCLSKWFGRAZVKHGOGUSHIASTYIHPL");
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
    msg.setTimeStamp(0.85752996677);
    msg.setSource(17308U);
    msg.setSourceEntity(186U);
    msg.setDestination(33566U);
    msg.setDestinationEntity(35U);
    msg.timeline.assign("KZMNPGLNKDTFKYCOXHMKAPEUZWPLLWMCJWEUBLAQXPDJAO");
    msg.predicate.assign("TFMTYCZWYOKAJYRBWOZLSONRVJCWPQUITGSSWRYNVQPLAGCVHEQGKYLNABAHFSNHRNRLLOXMBXFKDBTSCWIUBVESWUXWICUGVJBCJMVTLJIDPXRVDTYRSNXAGHRYAFFHREMUUNGQILVTTGPZPKKELKBWNLIXXEMDMHRYIPQFHATBDKNZZEHXAKYQQOCOPTIOMEOMCUQGLHDGVJVJUKEXDSUJWSQHIQZZBEAFPASIDNKJZMOOEM");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("OLUXYNZRETVOPTGNIGBKZVMMKJFMDDZGPZMWNEADHRIVBZRSYEKFNUYKGMUBAEQZBTHUZIIZINEBCTIKPWAALYKIBBTSCWRJLFYCQVBWWJGACXTEHJDZOOEYJVOIVLUOEOHLSWXGCIYDNMQCFEVUWSGXUDDJRIFBPUPHPAFXNTRAJSQPOYRVCFRSXPQWAV");
    tmp_msg_0.attr_type = 210U;
    tmp_msg_0.min.assign("JVGLUTPNDCYCCTMSOULYDUGNIYYSRQFEUZRCMAXGQPIAGTSSYXYUNKNXHTRNPPLVTHZAWVELIEYSZKFVLNQJMFIUMOHFWCOJBVUZAEPIAEXHXTWROVZEPGLSQPXDIABQOKJEWAFRXWNUOVEGSMTJNKHMZUILBXADKBECJHKFMMVXVLZWZEOODILADFFPOVTWZKPRAIIQBXHHLZHBGBDGQYBCJYRKKDQBGHRSTRNCWJFMQUOBDS");
    tmp_msg_0.max.assign("PZTXLVWUTXPQKHASXHJTWETCOQVTFIWFYWZRCCILICPAKXGBNADSEHSRCHAILKVLZRYMSEQMOEHMQBQWXTFWDXKGFCDEENQBJNTAONAOKNIVFBVFFYOUHCUZYLNRPLOBUVOBVMLGYVUGPCRHEEHDMDWVDGJQDXLSZBYZCIABSYMPJOGKGRAAXJMDGTXFQKZMZYKNNJQSRHID");
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
    msg.setTimeStamp(0.636256827666);
    msg.setSource(8588U);
    msg.setSourceEntity(219U);
    msg.setDestination(30014U);
    msg.setDestinationEntity(50U);
    msg.timeline.assign("XTGRLZONZYARLFYDVGFGKSENIBZXVSKOBFAVTSULZ");
    msg.predicate.assign("XMIYOIJUVRBBMFPQNSPEVCGQEYYAULHPDJWIETVJDFVCJBSTCCZBCUAKNEAYFXAXAXHRAVFDSZWFKJYZMBSCZNEPIRNXTUJTVCRPSGTFYLMQWYSLEHLVNWTYPURKKUMWGCQHHFWLMIBSNKMJLIUHOAQWTUFIUXGJHOWTQLQXODDWZPKYPBFIQPKNVQKMLEDYDZUMPQAWHBISROZCMEROTDBVSGZDGCLOZENGGNXGXIROG");

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
    msg.setTimeStamp(0.646035802662);
    msg.setSource(30498U);
    msg.setSourceEntity(171U);
    msg.setDestination(8117U);
    msg.setDestinationEntity(236U);
    msg.reactor.assign("SKBFXGJLICLQDZLWPXOHPGUPHTUUORLWUQYTTTNSNIEUPYVRDQFIAWFIWTKHFVLXGJCQMMRBSAHFKFVBFUGBHBNWPZXBASKTUVAPIVGAQMDEHODKNDNGZNHTLEFTZNJAPOZHQANZYNBJGRSPMKMGWUEOVKJCJZAYXEEOFRXCVJRDRDEQQTPURPMKOHETMHDAGYSCOC");

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
    msg.setTimeStamp(0.211713558621);
    msg.setSource(37583U);
    msg.setSourceEntity(77U);
    msg.setDestination(8328U);
    msg.setDestinationEntity(105U);
    msg.reactor.assign("MLYANOUWVAAQYVRDOZJITYSPFBICTRCTQSFIEECLANLOZQRHBTYGGZRMHGZEOINKNDGAMUWQSDSCDKHIWJZOEWDAGPHPEUOKXSOQDHUVUYLVWFBLFJPGMVDPWMFEKLVMAKWNUTXNIRCCHXIQXMHKJARPOPAFWQNQEOYRPYJUGZDBLFEWIKKCTYVVTMXMJXTGDSVQSXMUEJIPQBNWFIHFXBJRBZRRACBSNBZZ");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("SNPABJJTLRPAMMKWSJQMZAWBSRHNMTYWTEUXGXNBUVEWQSLIEGTWDBDQOHFRDCLXUEVMUICPKAYVF");
    tmp_msg_0.predicate.assign("ZLZVDFUFANLPWJCUOPTWGYWVNNTQXMKJPGAGTIWLVRBCZWVTTRSPEHYSAIBREVSFVFOHFKJWAERYMLAJXBCKOTETZIXYXLQNBAXIBNLJHHOSAHNHGLCSOGRQRJUIGCQXZCIQVHPDBZFOIMKKZQEOCAFUDVYUSBWOVMGDMHDKDGQSUJA");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("JCJTRDXNMEPSXOKDWZBULZIAQMUHCWFEXSNUZZAXLSQGMXNFRQLAEFKKWSJSAWQHBEQVCVUMHYTLQZXDARPVGNBHKAIJQZUCPKDGEXTDXVHQKVCWUDFDPSYVFOHITGBFICZNROPOLWUGVZZXJGWOMGLTFYWBYVRHHCLMHCXIYOUETAGIKTG");
    tmp_tmp_msg_0_0.attr_type = 131U;
    tmp_tmp_msg_0_0.min.assign("VKIVMAQKIRSSKBANMZJNEGLUVBFWIAABLEZWXRDRGWBJTOVEPDNCGYTZXWFQFJMORQOKZHRLPTXNWLVXWJOECDLDBTHEHDNNDUPXDXQLGPWHGSMPQHKPFCRXOIHQQEWNTDYZJHYSIRHAMAUBLSYPCWFWKMUEMCMHZGLLAPVUTIUVEKRQOOUYKYAKTOPMYSAZUXXSIKJOSNPQCYFZZCDYFCGELRVIHVBVYUGQTZNJRBCFOG");
    tmp_tmp_msg_0_0.max.assign("WFYIBSDCZCQSOJDYUJLNTXBGLRSOCHROSEARKEICYZOVHCUFTQZBPWWGZDEIBIHTEQUNJJNNJHVIWMZOZSGYUGJZRVPNWDGFZMXTFHINUGICAKDRZKVHAGAWFQYTJ");
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
    msg.setTimeStamp(0.954090876177);
    msg.setSource(49560U);
    msg.setSourceEntity(32U);
    msg.setDestination(43776U);
    msg.setDestinationEntity(0U);
    msg.reactor.assign("LXDPBHYUQPZFBQGDZECKAOPSYXMSUJCJMTNBFQJQMNHBVKATVFFKBYNXNOFTRSUEEDLWVIKAVXZZEKYUETASDLMLUDTLXQOAPPTUWWGXKHPALVHHLBBNIAHUIZPTAGCSVZIESUVCWJGKCYYFEKOVWOWSVYFNCKTYOQWGDYDPCAMOGNHKMW");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("NCYPIXYPOSNHCSTSJXEPOOOUAWKUVEXJZVOANEFPAXCEWOYTFMHTMDEDJNKMRFKBZDCAQRJDCRBYAGWYEEDLEFLPVNFOMIJSNYHUXZ");
    tmp_msg_0.predicate.assign("AVIFWMNWDBJ");
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
    msg.setTimeStamp(0.82381015969);
    msg.setSource(17217U);
    msg.setSourceEntity(197U);
    msg.setDestination(26487U);
    msg.setDestinationEntity(177U);
    msg.topic.assign("ARATZXPKNDJTTDPHJUNUJPFGIZBCDWLJWHLBGBZSROAAILXLGMDTDQTLKKWONFYHOEXSRKEGFBYPJYKRXMIUMVWABIXAQEMMGQMSATNONXOPRKYVKHMXWBMSHPSQQGJOVUACOXTAWYMPJFHUZBRFZLGVKTZQEUQCOIBSQWLVVDKCZTCRG");
    msg.data.assign("FFPEYMUNOAEKWKAKYXDWJEHAJBXNABTDOAMCBBXXOSSMQHBQAM");

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
    msg.setTimeStamp(0.332540827555);
    msg.setSource(57984U);
    msg.setSourceEntity(191U);
    msg.setDestination(43474U);
    msg.setDestinationEntity(66U);
    msg.topic.assign("TISWILKYZHQXFZCZULKYVPNLOVRBPBWOYLQXZCQFNGXHAMNKKPLUGPAZBQLVUXDMUXJYUXAUCXMQTTCNFEWFTYROZCMBJSSGPYIRDLIWGCXR");
    msg.data.assign("MGYNSNSFODKFRIBHHYUPZILNWHYVDGRSUEKCXIQRPHDBTNFVYUSMZQRGKKMCVZVODUUMPOOKFQRIYGSAAKMYQJXSDCTVEXZTVQGXPHTRMUWAE");

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
    msg.setTimeStamp(0.68419458417);
    msg.setSource(56906U);
    msg.setSourceEntity(7U);
    msg.setDestination(44164U);
    msg.setDestinationEntity(91U);
    msg.topic.assign("RDMLSIFFZXBJWSMZJYFBKHXMZQMGLRVBUOFYEGQQOFXSJJIVYOPIGEHIDGRYUTPGXJKCCTPLJVHETTHSAQRFMRWCXBRNZNCAUHSTMHIZNJTZAHURWBYSQWCLKOATXWGHCKMWDJNAE");
    msg.data.assign("JSCOOZTXLASXFHPXRUJCAHQMIQSTLVYYHWTQUMWDGHQHWYEFMPZFCCERNTBLZRXRYVUWWGFONAPRUCGBAUWCBNNPFG");

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
    msg.setTimeStamp(0.127687987738);
    msg.setSource(50827U);
    msg.setSourceEntity(242U);
    msg.setDestination(43812U);
    msg.setDestinationEntity(98U);
    msg.frameid = 122U;
    const char tmp_msg_0[] = {-128, 85, -73, 125, -124, -20, 28, 11, 86, 87, -85, 83, 104, 0, 51, -2, 24, 82, -35, -38, 116, 63, -66, -106, 65, 25, 63, -101, 104, -86, 6, 47, -9, -118, 122, 8, -68, 41, -61, -96, -10, -111, 20, 44, 40, 62, 38, -25, -90, 38, -15, -76, 47, -109, -106, -121, 121, 122, 7, -93, -65, 91, -42, -89, 67, 23, -106, 20, -43, -105, -104, 30, 9, -63, -4, 82, -58, -88, 68, 95, -28, 92, 61, -93, -61, -111, -60, -90, -93, 95, 107, -17, 20, -36, -43, 116, -84, -51, -55, -56, 7, -103, 87, -120, -104, -87, 77, -44, -111, 10, -75, 121, 8, 111, 61, -106, -18, -5, -105, 74, -123, -40, 124, -54, -84, 125, -78, 92, -40, 70, -26, -125, 8, -119, -91, 34, -101, -93, 89, -25, 45, -12, -33, -93, 42, -91, 20, 47, -6, 124, -74, -11, -64, -20, 28, -77, 87, -33, 7, -3, -117, 74, -18, 3, 30, -53, -26, 5, -99, -28, 11, -29, 52, 92, 46, -18, -36, 100, 8, -113, -54, 71, -115, 106, 39, -102, -67, 71, -69, 89, -6, -109, -87, -48, -48};
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
    msg.setTimeStamp(0.575475350161);
    msg.setSource(62664U);
    msg.setSourceEntity(238U);
    msg.setDestination(16396U);
    msg.setDestinationEntity(157U);
    msg.frameid = 43U;
    const char tmp_msg_0[] = {-3, -121, 99, 43, 89, -38, 38, -77, -52, -121, 91, 115, 120, 48, -94, -108, 79, 73, -39, 62, 28, -78, 114, -22, -16, 14, 20, -54, -66, 47, -128, -94, 19, 53, -77, -62, -111, 19, -59, -55, 94, -23, 115, -4, 122, -125, -87, 31, 89, -2, 118, -10, 119, 86, -94, -21, 15, 6, 75, -65, -32, 50, -76, 9, -11, -109, 52, 115, 70, -109, 76, 113, 53, -26, 65, 6, -1, 50, -53, -63, 107, 17, 72};
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
    msg.setTimeStamp(0.0979636651144);
    msg.setSource(57072U);
    msg.setSourceEntity(248U);
    msg.setDestination(2503U);
    msg.setDestinationEntity(89U);
    msg.frameid = 94U;
    const char tmp_msg_0[] = {-33, 113, 57, -102, -58, 44, 19, -41, -93, 92, 102, 11, -85, 17, 28, 31, -54, -87, 28, -26, 92, 42, -84, 44, 119, 121, -15, 64, -70, -97, -31, 111, -44, 68, -3, 0, 58, 15, 70, -105, 64, 97, -42, -75, 92, -6, 56, 120, -27, 33, -48, -84, 27, 97, 62, 126, -86, 44, -84, -97, -36, -3, -6, -128, -111, 28, 59, -124, -17, -11, -103, -70, 77, 29, -47, -83, -45, 40, -87, -42, -5, 1, 116, 26, -42, -32, -41, 109, 113, -26, 95, -24, -114, 47, -46, -100, -128, 61, 33, 77, -79, 0, 95, -50, 63, -30, 102, -54, -19, -58, 75, -94, -115, 41, -23, 0, 78, -21, 42, 106, 12, -34, -66, 114, 66, 33, -102, -65, -111, 97, -18, 114, -103};
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
    msg.setTimeStamp(0.0980396524377);
    msg.setSource(10786U);
    msg.setSourceEntity(50U);
    msg.setDestination(57075U);
    msg.setDestinationEntity(51U);
    msg.fps = 150U;
    msg.quality = 250U;
    msg.reps = 241U;
    msg.tsize = 37U;

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
    msg.setTimeStamp(0.421520029437);
    msg.setSource(17503U);
    msg.setSourceEntity(165U);
    msg.setDestination(37096U);
    msg.setDestinationEntity(139U);
    msg.fps = 214U;
    msg.quality = 92U;
    msg.reps = 128U;
    msg.tsize = 80U;

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
    msg.setTimeStamp(0.578464459017);
    msg.setSource(33793U);
    msg.setSourceEntity(83U);
    msg.setDestination(35337U);
    msg.setDestinationEntity(75U);
    msg.fps = 36U;
    msg.quality = 53U;
    msg.reps = 248U;
    msg.tsize = 52U;

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
    msg.setTimeStamp(0.553040116153);
    msg.setSource(62065U);
    msg.setSourceEntity(108U);
    msg.setDestination(58160U);
    msg.setDestinationEntity(35U);
    msg.lat = 0.508167625879;
    msg.lon = 0.214043726653;
    msg.depth = 49U;
    msg.speed = 0.623492882633;
    msg.psi = 0.627269551947;

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
    msg.setTimeStamp(0.884632375251);
    msg.setSource(46264U);
    msg.setSourceEntity(218U);
    msg.setDestination(12078U);
    msg.setDestinationEntity(135U);
    msg.lat = 0.380144125526;
    msg.lon = 0.965186753508;
    msg.depth = 52U;
    msg.speed = 0.728205573192;
    msg.psi = 0.647791162052;

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
    msg.setTimeStamp(0.081237307913);
    msg.setSource(32925U);
    msg.setSourceEntity(86U);
    msg.setDestination(10180U);
    msg.setDestinationEntity(37U);
    msg.lat = 0.397066241417;
    msg.lon = 0.171123972839;
    msg.depth = 78U;
    msg.speed = 0.146249643767;
    msg.psi = 0.878699614541;

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
    msg.setTimeStamp(0.851352058226);
    msg.setSource(21705U);
    msg.setSourceEntity(173U);
    msg.setDestination(5927U);
    msg.setDestinationEntity(34U);
    msg.label.assign("UDMWQHFKCBZHRSLTETNMIGKQWOQVIQVEDPUGNKRTEYIPGKDHCLJMDEFXWMPQJLBZRMBRQBBCUJAANBWTJMIIMFJIJNXGVSUXQHTXEHRIETTSVFBKTSNULHFNSPICYORMCZDKEBKFCKWUFOAVGCO");
    msg.lat = 0.651409708615;
    msg.lon = 0.945487186964;
    msg.z = 0.579090296386;
    msg.z_units = 61U;
    msg.cog = 0.0323823836998;
    msg.sog = 0.791540214385;

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
    msg.setTimeStamp(0.0671889394855);
    msg.setSource(2074U);
    msg.setSourceEntity(11U);
    msg.setDestination(49230U);
    msg.setDestinationEntity(151U);
    msg.label.assign("UFNHBYOSWIZVTGNEFOTAWFWHPCXXXASTNUOBDLZAYSSQGRYMSSNJTPUUKJWNYMRPHKGJFEIQGSGYJLOWAUDXZJTADMMXJCBCLOOAOWQUKCMVYZVBIXIRLKCACVCMOLIVPCRNMIPLKGBXPCHWZRQBLEEHHXPVIJHEOQGIXPURKAWZEXRKZYVYGLLFJVVNDMQFEGDTNQZTMDSDBRBTHVPQKSDJHK");
    msg.lat = 0.568775737889;
    msg.lon = 0.396662783019;
    msg.z = 0.382843958597;
    msg.z_units = 235U;
    msg.cog = 0.858412510862;
    msg.sog = 0.702716830269;

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
    msg.setTimeStamp(0.00952561534272);
    msg.setSource(61824U);
    msg.setSourceEntity(19U);
    msg.setDestination(64390U);
    msg.setDestinationEntity(176U);
    msg.label.assign("ZZBTGAMEOAU");
    msg.lat = 0.196091089001;
    msg.lon = 0.697172243523;
    msg.z = 0.573299073557;
    msg.z_units = 69U;
    msg.cog = 0.257215258243;
    msg.sog = 0.34062249033;

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
    msg.setTimeStamp(0.0731558579166);
    msg.setSource(25836U);
    msg.setSourceEntity(120U);
    msg.setDestination(10280U);
    msg.setDestinationEntity(72U);
    msg.name.assign("CWUEGUMSJEXLBBERWMVFAFITOQJNPONVVZJDFYLVFNGPMHRSMXIMDZOHTIZKNJYPJYCPFRZNNPJLJMJCITECVPHQEDEWRZBXBIVQDCYUDBFTUNZWSAKRLFHGGOAIOUFOSLKTLMTLRYAETNZASMQQRUPAOSALGATLTYCDHXHZUQEBARYBHKBUOGCWQCOXSWXTWIOVNFDEXJGGMSIGF");
    msg.value.assign("RDDNCQOKAGVWTRGDCNTNYOMSYKABVFIOQWMGLLRFTZIIPUUJCXYNFPUBTILQSKKLPRIGAMPCBQMBOZTQDVDSTFACSQKUBXOHXLPMNYSOMLAXYLSYZGNPKZEV");

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
    msg.setTimeStamp(0.592110763966);
    msg.setSource(56693U);
    msg.setSourceEntity(32U);
    msg.setDestination(29913U);
    msg.setDestinationEntity(155U);
    msg.name.assign("QRBGIHSTJELWYXRECYWRMANGNBIGHMNZGQFWHZOLFBSTUVTXPOHYZQIYWHNONZIBCMIPYGSAURSSXFHWXHCBGKRDYOTQGYTDXAFWTLAJSNP");
    msg.value.assign("RHTCPMZYBQVBVDUJIJMWECLFYWIPNSZSAXDGZNUGESJAELDQYBHPXMOT");

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
    msg.setTimeStamp(0.163676606375);
    msg.setSource(65227U);
    msg.setSourceEntity(0U);
    msg.setDestination(42086U);
    msg.setDestinationEntity(181U);
    msg.name.assign("HYKQIYLBKMGEMBLKSIGDVJKSOGDYOSRPEEZ");
    msg.value.assign("SRHKGWMFYOQRDHHAWRZRZWIYEFZBODFQIZMPKVQJVJIOFGWBNYDHNJOL");

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
    msg.setTimeStamp(0.0439125519175);
    msg.setSource(34384U);
    msg.setSourceEntity(66U);
    msg.setDestination(30826U);
    msg.setDestinationEntity(76U);
    msg.name.assign("TMGMDPGJYNJIXBTIXPSHDYDXCKPUJNBRRYIONOIWYTXMYZGUUEVAZBGNXNTKOSKQRWSGGLFKFJPFQMVZLFRSUWEUTVCLECKNKDFPVZGIKHKQA");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("NULGJXQVVZEUGHGGFIMUQNFZILJYIHZOEJBCNAVDRTNBNUIMFJBEAMAOPCKILTFVEQZSFRKKPQXPDWBEJRXXJVBSDWUMORPWDYFEWMCGFZHRPSRLWJEPLNXYSNYQSOIWXZDHCTUEMFEJXKVMGLTKRLCSPHUBVIZXAGSKVO");
    tmp_msg_0.value.assign("DJFMUYEJYADCTGTULBDAYOHHENLYMCZMLJKRHMHNGEXJWZGFIPVBQSDFMBNRZXTQHKIVBEFADAYALAZPGTOSRQAZKMPQEVKBOAOKUBZSSZODXOJLDXEMTTFLKDHGCVWGHOGIJWBWFWNTPBRDQFECJXYSCSASGLSXQRPUTCHNXNOLMEPRK");
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
    msg.setTimeStamp(0.940404151664);
    msg.setSource(60000U);
    msg.setSourceEntity(80U);
    msg.setDestination(40748U);
    msg.setDestinationEntity(146U);
    msg.name.assign("SQCZEMTPUJEZEEQKDJZIOWVNBHATMYCBWTCFDCIATTJFCYQTBSNLWDUFGTMFBYNQYYXMGDKKVBLQSPPSDCKPDHYXHZINKONFRVFWLBGVUKAMTALLAFOYXUAHCDVPBYXMHUEUWRVJQJDZZRRXXGJVMLUMKXPTQKMSWROLIKVQEGHFILRNHWFZNZUAHGXSSXIIKFUDERVJQEGCBWBGWNWJLQIOIRRMSOCOBVOOGENDCYLAIPGNZHUXSAOPZSAJT");

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
    msg.setTimeStamp(0.205422681636);
    msg.setSource(53601U);
    msg.setSourceEntity(56U);
    msg.setDestination(46529U);
    msg.setDestinationEntity(188U);
    msg.name.assign("BIZMMEEWYFTYYJYDUVZIDIOCPZFPTPECUJGAHAAVLPWUPHNXKJVFDHFXRKBJDERPQOLGSOSLZGANRWZGHCIKLYZTPUGLAOJVSWAQQMVQIJKNOSNDZMCGCFKIZPTRGJGHLBXODAJFFWISXAFDBKIWNRLIEQSSXVMMSHUNAMSLVDYENEWDIKOGQDTTRGXWUPSOEBVKQWVMWNUBXPKHLCKZHVYZCFYCXNQURO");

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
    msg.setTimeStamp(0.603950638466);
    msg.setSource(10599U);
    msg.setSourceEntity(181U);
    msg.setDestination(57394U);
    msg.setDestinationEntity(8U);
    msg.name.assign("HFKWMJJRKFFSBLLSKUHDLKEMSBTSIOCDRNXOFOJLMQ");
    msg.visibility.assign("FKGQSQFJDMMOERHSNSPMPENLHSHAPKBYEGNBNLMAKUDEZQMCHCTSTOYUIXRUEXMVFPJWRLYVLN");
    msg.scope.assign("KRLHMJUFAXSYYOLXWLJTBZYKNHOPFJVEIHIIQMFHPNZKJTOHBXQEMFLKQVSZSEDWXVNFVTILCSRBKRGRIXQYMMWFSPPWMWXADAHXOURGCBKCSHFUDQLJLCTSBTYQMZJJBQDVOAXT");

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
    msg.setTimeStamp(0.084539577278);
    msg.setSource(34415U);
    msg.setSourceEntity(230U);
    msg.setDestination(41968U);
    msg.setDestinationEntity(3U);
    msg.name.assign("AXCXBNVRCSIPCXTMXWHVPEOAS");
    msg.visibility.assign("GMOSZSKGBRFSGCUQALVAANRZNXMFMPYCVKK");
    msg.scope.assign("ZUMUGIWFGRABLSPAPVLAEFRYNFDLRTZWSHRVWQQGRQNIKUJAQJVXXOYROMAIJDYBGGSSKXPMFAZWCUQZKZTBHVIASPEGCBVJKPZUTHQGEIXLBONLWVCJTECXPOCYQBTQIFUZKXIYBKXYOXVYMSYDWSMJACBNTCWDXPWRKDGDXJDQEYHHOPHFGNEQ");

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
    msg.setTimeStamp(0.488468607268);
    msg.setSource(64843U);
    msg.setSourceEntity(51U);
    msg.setDestination(26949U);
    msg.setDestinationEntity(178U);
    msg.name.assign("ERJFJWTDGPPQMJOMUNEVGEIGIMMETTXSRGRPZCRWHYTSBWXLSHBOFIANDCVZQHKENAVTLLFUSTXUVLLZCAKMNJSWSZNNXCZRPTIWJOINNAHDZVUZDKXBVGZDHRDDQGBSIYJOAPVAYOSZHOMYUEUQAHIXYZRGIFHJSKQWCQLWKHOYESBTLTNWQIEOMMFYAEPBOBGNIKQBUEBMUYXJVBFRYGQOJ");
    msg.visibility.assign("INBYDCHSCZYIIMFCEUTZLSEQMZFFPPAHWJIUKXPXXGONOEMQPFGKRKVHAFXGMTOBVKBXSKWVWNUZHHNIUFRKTZLVTWRVTLGHVDFWZSIQCCBRSEYVXEQWSNKRLTQBPJINHBVOSGNFCNBFMXELAWOTZXJJSKXOLJNTUAAAYWOBMIH");
    msg.scope.assign("YSTKANHRUOAQWOIWCWBULVDBLXAWZXOPBPJRXQERVBFHXDOFGQEQCXPTCQLZZXKDVKRCTASTJM");

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
    msg.setTimeStamp(0.542269114402);
    msg.setSource(15371U);
    msg.setSourceEntity(66U);
    msg.setDestination(12140U);
    msg.setDestinationEntity(66U);
    msg.name.assign("DIZYTLLKFOALCRCOWUDXXGNAEPFGZFORRNWLIASZWKFQDJGZNMGPQURPLPZVLJVIRHXUPWENIIBKHAEOCJAVUUBJMBTTDWTDVHRHQSEOEXUQLCEKXTNVXQCHZGIJTBPNMTM");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("MORETINMAGDVXNBRDMMRTLNKFBIGCRSEXDRTNKLVWZXJZUGVFKJYXJUYFCUOVRLECHJUBOYXPHQAIBHZDAAXRSEXQAIISJOICCHXECGKWGSHONLWYNPAZMWPPJCWTQSHSATUIIHGWZYAZZAUTDCBRWBCDYVSGQQFYYMTWPFCQJVTZ");
    tmp_msg_0.value.assign("LPZMOPXSUMIEEFDFENWIVFXTAUKCWUSBYJWDPKLYIYXGSLTJEPXOCMDNDEPLXMOPRMSGUOSPWHGUSHAGYITEKCAHZFBBTJHCZQQCORRQBVBMLMKNPDTXXWTNABVPWVDWMJVQNJQBRIDANGFCZGGLKKQSFSEKSNHNAZVLMLOFZIAIFYRERJHDHUGZQHYQXTJJBBEKVWCHNXPDZZQAYTDI");
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
    msg.setTimeStamp(0.0238451858776);
    msg.setSource(3757U);
    msg.setSourceEntity(46U);
    msg.setDestination(59646U);
    msg.setDestinationEntity(209U);
    msg.name.assign("FAQSEBTUHWJVGYIQAGTHJZTHLBRUBMLDZLBXYHUUQRAASHECVGLNRJMHULETWBKILPQVKMXKWCAYSAXMQPUSDRZZRLEIGZWRCDUNKUWYKWCFOPAEMOHYF");

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
    msg.setTimeStamp(0.690440783908);
    msg.setSource(46602U);
    msg.setSourceEntity(131U);
    msg.setDestination(50367U);
    msg.setDestinationEntity(211U);
    msg.name.assign("VWNLTPXBNPOHCJYZZIKAVGQPURXLMZSXWPVHPEORJUFQNRTUKMNSALOEIWJQVHZWHBJDCJISBDZJNBJJXIHYGAYXTQHREINDZXSMUDPCBMIWKYADWFNEOAUVEFTWRXVXCYDUMBCGWUSFGIATUNOZKMLLPTEQFOVUWRPCCKVAYGRDNMWCKQYZSOKCDMMLGHIZPFFFFJYGVEQLG");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("RJZUOIIDXAFADCNVOKKBDXVMNSLTMEGMNUNABGRERZREIJHRZGTXUKWBWGOKOTNIUCWQUTCTXVCHOMMAUKOXXLUMDIDOWYTHESVFWYZXISJBLFCPQYLNWCM");
    tmp_msg_0.value.assign("HYGMOWUUBPLREFEWTQSUHPUPJLHKGZPYEFEMQNXWRTDVHKFDOAYPNCGNQRIGNIMVDBEXUYDTCHAXKOEVAYBGTXTMARFHDDBQWBUQCSJAKNYSFQSKLGIKKQZMCZMRFAEVUVAQIWMEFSJSCVIPLIWVOMUJG");
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
    msg.setTimeStamp(0.258773830343);
    msg.setSource(36011U);
    msg.setSourceEntity(124U);
    msg.setDestination(12675U);
    msg.setDestinationEntity(183U);
    msg.name.assign("BWHNVKJWXBCWFCCUPSPUFKSYZTBIRHXSMTCEKP");

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
    msg.setTimeStamp(0.86879491482);
    msg.setSource(41781U);
    msg.setSourceEntity(247U);
    msg.setDestination(43488U);
    msg.setDestinationEntity(197U);
    msg.name.assign("BQVAQGQKZUXJREHRLLLVDHWZPNBCIYGQVCSIJNEOUJHMCRGIAJWBAXZXBHGTVWMPKQNPLPNZEJVFWZESHOTPYEVKMCOFPDGOCBFSFEWPTDZECMSYQAAPZYMROFRKNUHUOPFBWJLLMVFEQKXDG");

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
    msg.setTimeStamp(0.898730059506);
    msg.setSource(53004U);
    msg.setSourceEntity(93U);
    msg.setDestination(14169U);
    msg.setDestinationEntity(90U);
    msg.name.assign("LXDVRCLAHPXCRTM");

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
    msg.setTimeStamp(0.775128270716);
    msg.setSource(55204U);
    msg.setSourceEntity(178U);
    msg.setDestination(34924U);
    msg.setDestinationEntity(142U);
    msg.timeout = 2372189444U;

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
    msg.setTimeStamp(0.088043005479);
    msg.setSource(17838U);
    msg.setSourceEntity(67U);
    msg.setDestination(44968U);
    msg.setDestinationEntity(241U);
    msg.timeout = 1331332809U;

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
    msg.setTimeStamp(0.369041753709);
    msg.setSource(11813U);
    msg.setSourceEntity(38U);
    msg.setDestination(58005U);
    msg.setDestinationEntity(140U);
    msg.timeout = 1536475288U;

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
    msg.setTimeStamp(0.562426618107);
    msg.setSource(9112U);
    msg.setSourceEntity(25U);
    msg.setDestination(11767U);
    msg.setDestinationEntity(146U);
    msg.sessid = 2068810260U;

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
    msg.setTimeStamp(0.405822021447);
    msg.setSource(16686U);
    msg.setSourceEntity(37U);
    msg.setDestination(24149U);
    msg.setDestinationEntity(58U);
    msg.sessid = 805814194U;

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
    msg.setTimeStamp(0.884360051242);
    msg.setSource(21765U);
    msg.setSourceEntity(240U);
    msg.setDestination(48224U);
    msg.setDestinationEntity(49U);
    msg.sessid = 1306072429U;

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
    msg.setTimeStamp(0.29161363178);
    msg.setSource(44917U);
    msg.setSourceEntity(113U);
    msg.setDestination(13336U);
    msg.setDestinationEntity(186U);
    msg.sessid = 2784753067U;
    msg.messages.assign("ZUVIDHMHACKZGYAHYPRKZBEQABROJXWISIOFVDPRCJFXOENURZYLXTJTLBBZVGOVABRHHYSACTFXVQPXISPETBVAGQLDXLOTVQIZQMMPOWKGYKNRBTXEMGSGNFYURVDXBEDCMEZHIPCNPCYNFDRMNWWYXZYJTWSIIWLKFNHULKCSUZFMUCGCDFEQEJYGQLEMUJRJOKSNGF");

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
    msg.setTimeStamp(0.366815490138);
    msg.setSource(38834U);
    msg.setSourceEntity(210U);
    msg.setDestination(58824U);
    msg.setDestinationEntity(106U);
    msg.sessid = 3492300566U;
    msg.messages.assign("MYIGGXCRKUWHEUKPMEUGQOZEVAJYUJGXMJETPWBPMHUVCSIMDRZJQTUCINMRBOKSLEFXVTLZTTFZQRRFNYFAZBHNOCMWFOAWZARDNTLVDAHGXPLXGPGUSIRHDQQGJOECVUSTNXBOOKWZAIZYKMJLDCXUHNHEXADTNWPHGOKAHYPOQLQQVCSVBJPWFFSTQIVZIJAKLIUINYGMJLHRDELEPYRKLSWBFVDS");

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
    msg.setTimeStamp(0.313379140908);
    msg.setSource(23178U);
    msg.setSourceEntity(211U);
    msg.setDestination(53329U);
    msg.setDestinationEntity(244U);
    msg.sessid = 3845395658U;
    msg.messages.assign("DGBFMEHUNFCCOPMYFMZTDQEOIMSBXONJWBPBVMVEJDVESDSLGWRPZLVUZAXSJFKKSNTAAGXZOLJCLXACDEODBLALZOUHTIXHEMTRMHLSCDVQITHKMXNIKTYSNXJCTIWFPROGILEKDUFRPTGHQOPFFYBKWATHCMYQYLKJTQLRYXPEJRZNUROVJHCQNBIGFW");

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
    msg.setTimeStamp(0.322554734944);
    msg.setSource(30229U);
    msg.setSourceEntity(106U);
    msg.setDestination(20568U);
    msg.setDestinationEntity(228U);
    msg.sessid = 39414890U;

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
    msg.setTimeStamp(0.407185959745);
    msg.setSource(64554U);
    msg.setSourceEntity(55U);
    msg.setDestination(15911U);
    msg.setDestinationEntity(18U);
    msg.sessid = 1685510383U;

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
    msg.setTimeStamp(0.298638665434);
    msg.setSource(49151U);
    msg.setSourceEntity(185U);
    msg.setDestination(44350U);
    msg.setDestinationEntity(206U);
    msg.sessid = 1435588894U;

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
    msg.setTimeStamp(0.615799025796);
    msg.setSource(43665U);
    msg.setSourceEntity(212U);
    msg.setDestination(19436U);
    msg.setDestinationEntity(153U);
    msg.sessid = 3267161144U;
    msg.status = 195U;

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
    msg.setTimeStamp(0.448813335956);
    msg.setSource(38467U);
    msg.setSourceEntity(241U);
    msg.setDestination(48535U);
    msg.setDestinationEntity(186U);
    msg.sessid = 2920183490U;
    msg.status = 158U;

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
    msg.setTimeStamp(0.835243090053);
    msg.setSource(55387U);
    msg.setSourceEntity(237U);
    msg.setDestination(16220U);
    msg.setDestinationEntity(252U);
    msg.sessid = 2908977265U;
    msg.status = 89U;

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
    msg.setTimeStamp(0.103927645046);
    msg.setSource(25281U);
    msg.setSourceEntity(92U);
    msg.setDestination(18004U);
    msg.setDestinationEntity(97U);
    msg.name.assign("EPLXLLVRIMIIZIJAKTCKUHLEKBVLABGVPBRSIFGVMBDOXXOAJNNKUYGFIGWSWADHELVSYRSNARSGUEMZPTYGXQKVZDKYFOQLMONWXCZGYSJMZUXJHZRFVIWTSKOFPN");

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
    msg.setTimeStamp(0.641504011683);
    msg.setSource(21871U);
    msg.setSourceEntity(221U);
    msg.setDestination(14837U);
    msg.setDestinationEntity(174U);
    msg.name.assign("DMHCIXJXGDPBDACEPQDONJOAZZNTULXYBMDUUIGXWTWNWOKYCEDLZLNKRGSSFSSYEIMGJOFIJYAHMXJBXIHHDBVRTXGEORZWZARFQOUQJJW");

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
    msg.setTimeStamp(0.686668138494);
    msg.setSource(1508U);
    msg.setSourceEntity(69U);
    msg.setDestination(17049U);
    msg.setDestinationEntity(196U);
    msg.name.assign("DSYXQMLRVAXSGVDTUFUQFMEGYDJHOLPOIIVIDRXKOUWMPBUCZJBPVUM");

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
    msg.setTimeStamp(0.836355668349);
    msg.setSource(17685U);
    msg.setSourceEntity(97U);
    msg.setDestination(7469U);
    msg.setDestinationEntity(149U);
    msg.name.assign("ARZYJRBJTDEDNHASMMTFHHZBUDZVSGBAPQYISFRBFIGWUIBGYWMJCJPZCALFHMLMGEKKTIYZMJVBGFQOGXMAERXRVFKUAQWUYUYDNVAJGBVVHIWMQNCKKMSQWVLCRHYTAXPUNCDNQOZPEOEHPRXJXLUOIFQOQDLTPSXLLBLNQWUPXDZDEHWYERNKYDRQKGCVZCNTKMXCFA");

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
    msg.setTimeStamp(0.41044766235);
    msg.setSource(7225U);
    msg.setSourceEntity(76U);
    msg.setDestination(64636U);
    msg.setDestinationEntity(210U);
    msg.name.assign("UHMMGQUOBOWSIXYKIBBCLRIRFNEVHBGRSCEIADHAYKIJUYSMLZDMAFTSUTHKWOFETJSFSLRQQMOGZHZQKYAHWNTCIPCYWXZOFZHDTKNNREXTYLTDKYJGYNPPDLJFGERHZLDQXKPEGHERPXMWGFTSVJDWUWYMXZVASHLNPOLBQAUMVPKPCABZCCJXRWZAYEWIJP");

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
    msg.setTimeStamp(0.741041091628);
    msg.setSource(63165U);
    msg.setSourceEntity(138U);
    msg.setDestination(50278U);
    msg.setDestinationEntity(127U);
    msg.name.assign("DXRROPHYHLLBHWFSDWNRNKYDIKRZWETMDUARPNFQUTUEFRCMKIQVUTGBZIWFEJVPHEXOZIQTAIUCDCCXLJFMASPIQVDJBXSOZOBQMRGQVSEROTUMSYUCINSKBIZMVFNXWUOMPOWBLSZNBKGZAFJPDOLLAWNMACECCJEGGXHFOVHFTWKYTKQSZQBTLJDUBHPVJ");

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
    msg.setTimeStamp(0.84337577851);
    msg.setSource(34485U);
    msg.setSourceEntity(150U);
    msg.setDestination(60562U);
    msg.setDestinationEntity(212U);
    msg.type = 76U;
    msg.error.assign("APXIHKZJGDKXISEEPBNCRZWIYWCMVHJNUYVSYGXPMMBOWICXJULTBZKUZWRNUWNPBRRDDQRCVGGZDFVWZOJIHLOGDSABNONSOIZXTQUJTVATGRHKMFKTLZCDVSQGABDHBYNMQ");

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
    msg.setTimeStamp(0.970506231645);
    msg.setSource(26146U);
    msg.setSourceEntity(68U);
    msg.setDestination(2578U);
    msg.setDestinationEntity(240U);
    msg.type = 152U;
    msg.error.assign("ZUTZXMPFEVKSRPJGRSYWYOFUROHRGWELXWMTESDZYOMUZCYHAHCSUMXJFVPBVGVEKWBULRKMJYWDJOELTTJPIEEGRXHAFVPYJWAJGDTCNPIINBAOQQDNVZGXHIKLLNTPJLMFZTUFNYSPRZQKUQFAJBQKAPPQNQDMVBOWMWSHNWFZCDVBRLINZKOBSOVXQKTJHTQMUHCYGSOICITIGCBEAAFNINDUSWYGXUBXLIHLOACLQBDCFDZRKMEHDXCKV");

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
    msg.setTimeStamp(0.958987811887);
    msg.setSource(28622U);
    msg.setSourceEntity(120U);
    msg.setDestination(20758U);
    msg.setDestinationEntity(200U);
    msg.type = 95U;
    msg.error.assign("XLXFGYXQKKZMRATUKVCVSGEDMDLUGUHHAZJQDSAAFAUIHGPKBNYLVUZPMKDABDLAHFDRHABXOEPVYRJRFCSVUNRYPUIWVAPFGGQZBGJYMWGOWOETCAHNIMSJWRXODKGBLNUXPLMCYTFIIRZQTFNNNWMZSYODWCZTVECL");

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
    msg.setTimeStamp(0.000201868742832);
    msg.setSource(8606U);
    msg.setSourceEntity(125U);
    msg.setDestination(28047U);
    msg.setDestinationEntity(146U);
    msg.seq = 11013U;
    msg.sys_dst.assign("OZEOAGNXYGWHQNGKRRZCICBIRPWIAQBWFIKWEHTYAFGHDBENIQXYVPYDGJIIQTZUGNHCDSBZCJCFZNZYZMMWSFRDWOJRSEPNDXWUUCLJUPUBMYMNCHLSKSLFKFXVXMBM");
    msg.flags = 227U;
    const char tmp_msg_0[] = {-13, 11, -86, -28, -35, -114, 96, 104, 112, -82, -45, -37, -86, 101, 46, -37, -50, -14, 43, -15, 0, -6, 29, -106, -66, -103, -35, 49, 40, -98, -75, 121, -100, 38, 21, 68, -48, -10, -2, 111, -111, -48, 119, -92, 78, 93, -5, -19, -17, -1, 35, 105, -59, -23, -98, 16, -54, -90, 25, -3, 37, 24, -81, -23, -55, 42, 25, -52, -56, -95, -10, -50, 110, -75, -28, -3, -36, -121, 17, -2, -34, 38};
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
    msg.setTimeStamp(0.466344495838);
    msg.setSource(25659U);
    msg.setSourceEntity(155U);
    msg.setDestination(36058U);
    msg.setDestinationEntity(242U);
    msg.seq = 46199U;
    msg.sys_dst.assign("NKBAGOCBEZGTRWTWMAQQHSTQDXVCHFYWZHAKZEONOVPSIMYSEFNPQFAMXILGPNBWYBEJWHUGFVHOFRBDXGKPBXAIYBQTIQDINTLXVURMEWWLDECNIHOJMPKPZBCZTJYHYJKEUGUFKXGDMZESRKQKVCYGMDQKFCYOSAOSRRFUXJJSTOPTEICXUMCPMHRNDQJOMWZGBAJQUJIEALUALLTNFZJOLXZVFYUCSCNKXIVLABHUWGLRVSDTZRWP");
    msg.flags = 193U;
    const char tmp_msg_0[] = {98, 19, 7, -61, 95, 2, -40, 73, -93, -80, 110, -27, 65, 108, -68, 9, 58, -55, 77, -92, -29, -110, -35, -86, 72, 47, -73, 98, 13, 36, -106, -55, 110, -25, -105, -25, -82, 120, -16, 10, -118, 117};
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
    msg.setTimeStamp(0.634635460885);
    msg.setSource(58194U);
    msg.setSourceEntity(139U);
    msg.setDestination(54493U);
    msg.setDestinationEntity(13U);
    msg.seq = 45941U;
    msg.sys_dst.assign("PSTMCAUQALCVLKBYO");
    msg.flags = 122U;
    const char tmp_msg_0[] = {-50, -113, 107, 15, -91, -101, 69, 85, -59, -61, -33, -9, -73, -27, -96, 122, 112, 107, 46, -4, -40, -113, -66, -2, 4, -74, 47, 86, -62, -27, -14, -73, -100, -120, -23, -80, -37, 1, -99, 110, 39, -104, 62, 35, 86, -99, 1, -30, -34, 27, 90, -128, -68, 42, -106, 65, 22, -4, 71, 4, -18, 66, -63, -90, 38, -71, 89, -21, -57, -71, 80, 35, 56, 72, 86, -82, 39, 125, -59, 100, 76, -14, 77, 92, -106, 113, 46, 22, -110, 8, -110, 40, -68, 121, 107, 13, -75, 32, -74, 67, 71, -34, -99, 36, -33, 79, 78, 37, 29, -68, -15, -43, 126, 46, 87, -97, 47, 26, 84, -101, 27, -42, 37, -18, 8, 46, 106, -81, 94, 21, -91, -73, -57, 51, -6, 44, -45, -38, 83, 117, -95, -18, 77, -50, -66, -40, -89, 103, -37, 98, -79, 100, 108, -118, -6, 122, 6, 74, 1, 84, -128, 9, -29, 5, -70, 6, -45, 90, 68, 106, 54, -89, -99, -43, -49, -113, -43, -54, -115, 81, -41, 63, -49, -56, 96, -54, -75, 2, -16, 26, -71, 110, -63, 49, 88, 75, 17, -44, -111, 25, 32, 31, 7, 92, -89, 70, 119};
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
    msg.setTimeStamp(0.254972440889);
    msg.setSource(63679U);
    msg.setSourceEntity(106U);
    msg.setDestination(989U);
    msg.setDestinationEntity(32U);
    msg.sys_src.assign("YOOHTVDKGUOCRYFTPJRANRZRJNSTDLUWWYGHMFLWHEVFBJVHQHXNGXOZCGGDSYLWIAAPMSYFLZNFAZSBKC");
    msg.sys_dst.assign("SUIESTCXWFTVLJEHMVMECJWJHEIGFQPTDOMUOSFSYLVDOCNPWPQRIHSRGPYMTISQFARNNXZCTKRPCCOASNG");
    msg.flags = 173U;
    const char tmp_msg_0[] = {121, 125, -18, 115, 113, -106, -40, 115, -62, 62, -30, -100, -11, -38, -56, 107, -102, 14, -57, 60, 97, -59, -113, -106, -4, 96, 27, -83, -103, 46, 81, 81, -95, -6, -75, 88, 73, -115, 22, 27, 93, -101, 122, -106, 51, -61, 69, -63, -86, -79, 108, 83, -87, 85, -69, -73, -23, 59, 123, 24, -86, 75, 111, -6, -53, -64, 30, -26, 114, 14, 43, 111, 37, 72, 67, -101, 0, -111, -5, 33, -61, -77, 120, 95, -103, 93, 38, 2, 76, -56, 87, 27, 16, 57, -81, -110, 72, -33, 104, -24, -55, -43, -42, -100, -64, 39, 103, 98, -82, -108, -75, -40, -119, -23, 62, -60, 57, -32, 0, -33, 116, 115, -39, 25, 82, -62, -127, -72, 49, 86, -3, 106, -46, -61, 72, -1, 0, 90, -121, 54, 125, 81, 102, 95, 81, 78, 52, 99, -120, -51, 30, -123, -38, -96, -34, -65, -10, 3, 72, 92, -76, -110, 73, -34, 7, -104, -64, -74, -113, -18, -125, -2, -106, 52, -13, 108, 105, 123, -78, 111, 20, 12, -45, -51, -107, 22, 107, -59, 89, 24, -78, -25, -18, 123, 42, 2, -8, 27, 121, -61};
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
    msg.setTimeStamp(0.240183595222);
    msg.setSource(29656U);
    msg.setSourceEntity(208U);
    msg.setDestination(48434U);
    msg.setDestinationEntity(140U);
    msg.sys_src.assign("TNSFFFFECYADGCVHERCRLBWGEPGLJIWNNIBPMNCQAXQMXQUGVOIMEOIBKXLFDYHERPPTBIONYTQVD");
    msg.sys_dst.assign("WCEZDMSBKCRIPAJWSWKPAHQVFFYJNSZAKMZKWRAGJBOBNZGCNJUDNTGVQBHRVTDAQGVTBXCFEMHUOJMPGTZRNCKBQPUXPONZCBKYEYFXYUZQKPE");
    msg.flags = 191U;
    const char tmp_msg_0[] = {-87, 57, 90, -78, 18, 12, 123, -37, -8, 90, -61, 89, 18, 88, -48, 16, 40, 12, -84, -64, -123, -2, -117, -29, 6, 41, 2, 119, -35, -12, 10, -121, 85, -91, -74, 54, -70, -8, -46, 18, 12, -49, -1, -73, 67, 3, 15, -87, 117, -30, 4, -71, 71, 66, -55, 46, 43, -58, -93, -124, -17, 120, 108, -76, 101, 68, -59, 55, 65, 62, 30, -91, 37, 76, -54, 76, 27, -42, -68, -86, -10, 103, 59, -102, -74, -92, -84, -59, -123, -95, 103, -61, -46, 24, -76, -9, 70, 68, 86, 22, 59, 75, 91, -92, -44, -33, 12, 47, 28, 126, -24, -70, -23, -7, -11, 111, -105, 34, 109, -13, -82, 13, -56, 41, 26, -3, 64, 100, 11, 10, -11, -35, 49, 90, -48, -23, 21, -78, 17, -22, -123, 2, -119, -17, -99, -20, 118, 108, -97, 31, 50, -120, -108, -59, 61, 43, -17, -71, 85, 56, -101, -32, 122, -63, 35, -72, 107, -88, -22, -72, -16, -126, -68, -89, 39, -95, -34, -23, -106, 26, 48, -33, 59, 18, -43, -101, 70, -66, -35, 117, 59, -109, -99, -80, -85, -61, 74, 83, -103, 27, -92, 21, 28};
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
    msg.setTimeStamp(0.542960488651);
    msg.setSource(25695U);
    msg.setSourceEntity(56U);
    msg.setDestination(4932U);
    msg.setDestinationEntity(134U);
    msg.sys_src.assign("HZSMWZKXCKFLKTYFGGQAJGGMVLJXSVNFKXHZYIDSZOXAUDASMWVWHCOVWQSDCRZSJGPDTVOLQEUENQIFYHNOGKJOFIRHMJOFVWAEWFCFEMPRUW");
    msg.sys_dst.assign("XWABXEGXUYDUBWPKKPURQIYHQUJOVCLFETNRVYZGZYCSEJPXZIOFWAFWLFVHSYGFNIGXLJCZKBSFDBNOWPZUCTJQYOWRVGIQECCOVCZLXLKMYFIAKWKUMQAQJGHGPOMGVLMTFEMXEPREBEXDWACKYJMBLMJGYIBZQCTZNSUEFHURHNSBSKRDW");
    msg.flags = 23U;
    const char tmp_msg_0[] = {10, -111, 45, -29, 74, -71, -74, 44, -108, -79, -13, -2, 77, 67, -48};
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
    msg.setTimeStamp(0.70840382305);
    msg.setSource(29402U);
    msg.setSourceEntity(172U);
    msg.setDestination(53244U);
    msg.setDestinationEntity(122U);
    msg.seq = 17878U;
    msg.value = 208U;
    msg.error.assign("YUDLVRYUOHTFIKGLBLAABFJCSOHWWOJBTIIBHU");

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
    msg.setTimeStamp(0.631313919748);
    msg.setSource(10401U);
    msg.setSourceEntity(134U);
    msg.setDestination(10525U);
    msg.setDestinationEntity(219U);
    msg.seq = 33130U;
    msg.value = 250U;
    msg.error.assign("CFPTJQWBGAYVPSVERNXHMLFKXLBEDOKW");

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
    msg.setTimeStamp(0.392038096684);
    msg.setSource(32639U);
    msg.setSourceEntity(30U);
    msg.setDestination(43239U);
    msg.setDestinationEntity(101U);
    msg.seq = 30162U;
    msg.value = 87U;
    msg.error.assign("JNYSLGXAAJJOUIRZWIQA");

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
    msg.setTimeStamp(0.282309383005);
    msg.setSource(50034U);
    msg.setSourceEntity(91U);
    msg.setDestination(47438U);
    msg.setDestinationEntity(130U);
    msg.seq = 54585U;
    msg.sys.assign("HULSKRIZOUTMBXZQTQESQWSCDZVEKXXCPRHCFPCBVBWXEFMGGQESFCVWNHFSUMJIFELCAICYWRDWUGOIAQGQJUOFNZJVTURQBWYNKNVMPARRZJRKOYIMTXMNKLZEYATNYOVBBTAUPYJXJDUMYND");
    msg.value = 0.839245309578;

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
    msg.setTimeStamp(0.909080625742);
    msg.setSource(62151U);
    msg.setSourceEntity(169U);
    msg.setDestination(1515U);
    msg.setDestinationEntity(42U);
    msg.seq = 18550U;
    msg.sys.assign("SSZTQJXCGTERMCKSFPRWHMYWDTNSPIFVEHPLZBNFIDPWNBCKAYTRHKNXIQIBOYRQJMUBZNJSQNZTVADQUGRZKRQLDNNCJH");
    msg.value = 0.0834737781119;

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
    msg.setTimeStamp(0.51595528886);
    msg.setSource(11555U);
    msg.setSourceEntity(105U);
    msg.setDestination(62380U);
    msg.setDestinationEntity(195U);
    msg.seq = 20678U;
    msg.sys.assign("JZEMOTYVTLRMIYDMFKX");
    msg.value = 0.0234293200636;

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
    msg.setTimeStamp(0.835856804423);
    msg.setSource(33345U);
    msg.setSourceEntity(152U);
    msg.setDestination(49746U);
    msg.setDestinationEntity(51U);
    msg.action = 74U;
    msg.longain = 0.564025709754;
    msg.latgain = 0.30483739655;
    msg.bondthick = 1213934906U;
    msg.leadgain = 0.3208525035;
    msg.deconflgain = 0.463855567657;

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
    msg.setTimeStamp(0.641590382677);
    msg.setSource(45419U);
    msg.setSourceEntity(242U);
    msg.setDestination(6907U);
    msg.setDestinationEntity(241U);
    msg.action = 118U;
    msg.longain = 0.390188981383;
    msg.latgain = 0.829168572854;
    msg.bondthick = 2275828163U;
    msg.leadgain = 0.317914777584;
    msg.deconflgain = 0.177424915044;

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
    msg.setTimeStamp(0.954977775013);
    msg.setSource(19705U);
    msg.setSourceEntity(46U);
    msg.setDestination(53878U);
    msg.setDestinationEntity(223U);
    msg.action = 153U;
    msg.longain = 0.839662308204;
    msg.latgain = 0.0266113714849;
    msg.bondthick = 4121943349U;
    msg.leadgain = 0.608524082654;
    msg.deconflgain = 0.896200416937;

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
    msg.setTimeStamp(0.00257831393143);
    msg.setSource(621U);
    msg.setSourceEntity(60U);
    msg.setDestination(14064U);
    msg.setDestinationEntity(158U);
    msg.err_mean = 0.340431755167;
    msg.dist_min_abs = 0.467688687271;
    msg.dist_min_mean = 0.550867851426;

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
    msg.setTimeStamp(0.209357044178);
    msg.setSource(47587U);
    msg.setSourceEntity(155U);
    msg.setDestination(13282U);
    msg.setDestinationEntity(46U);
    msg.err_mean = 0.14655868405;
    msg.dist_min_abs = 0.701669735538;
    msg.dist_min_mean = 0.645691274181;

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
    msg.setTimeStamp(0.826810079251);
    msg.setSource(58370U);
    msg.setSourceEntity(210U);
    msg.setDestination(51056U);
    msg.setDestinationEntity(142U);
    msg.err_mean = 0.631456956597;
    msg.dist_min_abs = 0.490512114685;
    msg.dist_min_mean = 0.165619034098;

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
    msg.setTimeStamp(0.774660136108);
    msg.setSource(38279U);
    msg.setSourceEntity(9U);
    msg.setDestination(19430U);
    msg.setDestinationEntity(55U);
    msg.action = 2U;
    msg.lon_gain = 0.278003723736;
    msg.lat_gain = 0.548764565235;
    msg.bond_thick = 0.0248506898201;
    msg.lead_gain = 0.783497450045;
    msg.deconfl_gain = 0.540272653912;
    msg.accel_switch_gain = 0.817191306737;
    msg.safe_dist = 0.463476286256;
    msg.deconflict_offset = 0.98387343958;
    msg.accel_safe_margin = 0.0307441447326;
    msg.accel_lim_x = 0.961356489614;

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
    msg.setTimeStamp(0.683688477181);
    msg.setSource(60128U);
    msg.setSourceEntity(206U);
    msg.setDestination(47102U);
    msg.setDestinationEntity(11U);
    msg.action = 38U;
    msg.lon_gain = 0.264337311108;
    msg.lat_gain = 0.625371805024;
    msg.bond_thick = 0.475662334527;
    msg.lead_gain = 0.228950223029;
    msg.deconfl_gain = 0.257471512746;
    msg.accel_switch_gain = 0.716960032705;
    msg.safe_dist = 0.229503944521;
    msg.deconflict_offset = 0.377232017848;
    msg.accel_safe_margin = 0.517584476659;
    msg.accel_lim_x = 0.2441414963;

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
    msg.setTimeStamp(0.499197599287);
    msg.setSource(3321U);
    msg.setSourceEntity(145U);
    msg.setDestination(12546U);
    msg.setDestinationEntity(80U);
    msg.action = 207U;
    msg.lon_gain = 0.468257212444;
    msg.lat_gain = 0.654216757655;
    msg.bond_thick = 0.637413355926;
    msg.lead_gain = 0.0277152936684;
    msg.deconfl_gain = 0.447551802865;
    msg.accel_switch_gain = 0.283978379393;
    msg.safe_dist = 0.837695492009;
    msg.deconflict_offset = 0.859950053471;
    msg.accel_safe_margin = 0.513283586453;
    msg.accel_lim_x = 0.999439422146;

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
    msg.setTimeStamp(0.752528971582);
    msg.setSource(55548U);
    msg.setSourceEntity(144U);
    msg.setDestination(54496U);
    msg.setDestinationEntity(49U);
    msg.type = 210U;
    msg.op = 86U;
    msg.err_mean = 0.730060085626;
    msg.dist_min_abs = 0.274657152609;
    msg.dist_min_mean = 0.0569125245212;
    msg.roll_rate_mean = 0.259954248088;
    msg.time = 0.618501984309;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 52U;
    tmp_msg_0.lon_gain = 0.083235674604;
    tmp_msg_0.lat_gain = 0.315836369264;
    tmp_msg_0.bond_thick = 0.629114008728;
    tmp_msg_0.lead_gain = 0.011902689961;
    tmp_msg_0.deconfl_gain = 0.256465197797;
    tmp_msg_0.accel_switch_gain = 0.87526421373;
    tmp_msg_0.safe_dist = 0.362189203444;
    tmp_msg_0.deconflict_offset = 0.643020948712;
    tmp_msg_0.accel_safe_margin = 0.00583159122561;
    tmp_msg_0.accel_lim_x = 0.905116467928;
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
    msg.setTimeStamp(0.416489728119);
    msg.setSource(8397U);
    msg.setSourceEntity(70U);
    msg.setDestination(56234U);
    msg.setDestinationEntity(124U);
    msg.type = 65U;
    msg.op = 214U;
    msg.err_mean = 0.726085080697;
    msg.dist_min_abs = 0.938877793081;
    msg.dist_min_mean = 0.97712314748;
    msg.roll_rate_mean = 0.846382880106;
    msg.time = 0.160279040189;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 63U;
    tmp_msg_0.lon_gain = 0.456436463367;
    tmp_msg_0.lat_gain = 0.691552571824;
    tmp_msg_0.bond_thick = 0.997878161278;
    tmp_msg_0.lead_gain = 0.0636701975284;
    tmp_msg_0.deconfl_gain = 0.0199527147599;
    tmp_msg_0.accel_switch_gain = 0.740737526983;
    tmp_msg_0.safe_dist = 0.201749804104;
    tmp_msg_0.deconflict_offset = 0.881586262907;
    tmp_msg_0.accel_safe_margin = 0.738752561063;
    tmp_msg_0.accel_lim_x = 0.174087023731;
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
    msg.setTimeStamp(0.877922189738);
    msg.setSource(22024U);
    msg.setSourceEntity(69U);
    msg.setDestination(27230U);
    msg.setDestinationEntity(92U);
    msg.type = 214U;
    msg.op = 122U;
    msg.err_mean = 0.771665326252;
    msg.dist_min_abs = 0.907454776134;
    msg.dist_min_mean = 0.00991428229035;
    msg.roll_rate_mean = 0.788884437687;
    msg.time = 0.532821619407;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 238U;
    tmp_msg_0.lon_gain = 0.787028631034;
    tmp_msg_0.lat_gain = 0.627785349737;
    tmp_msg_0.bond_thick = 0.720275247693;
    tmp_msg_0.lead_gain = 0.642985381046;
    tmp_msg_0.deconfl_gain = 0.890698694933;
    tmp_msg_0.accel_switch_gain = 0.61818752341;
    tmp_msg_0.safe_dist = 0.834917218215;
    tmp_msg_0.deconflict_offset = 0.472811418365;
    tmp_msg_0.accel_safe_margin = 0.998936203983;
    tmp_msg_0.accel_lim_x = 0.64947434135;
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
    msg.setTimeStamp(0.454318793262);
    msg.setSource(48668U);
    msg.setSourceEntity(8U);
    msg.setDestination(7668U);
    msg.setDestinationEntity(226U);
    msg.lat = 0.241323851307;
    msg.lon = 0.596897733865;
    msg.eta = 521637086U;
    msg.duration = 3974U;

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
    msg.setTimeStamp(0.964011984008);
    msg.setSource(14986U);
    msg.setSourceEntity(174U);
    msg.setDestination(48803U);
    msg.setDestinationEntity(129U);
    msg.lat = 0.455243726807;
    msg.lon = 0.997324609359;
    msg.eta = 912847495U;
    msg.duration = 11205U;

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
    msg.setTimeStamp(0.820400545169);
    msg.setSource(14889U);
    msg.setSourceEntity(81U);
    msg.setDestination(34779U);
    msg.setDestinationEntity(251U);
    msg.lat = 0.909271633559;
    msg.lon = 0.56657060538;
    msg.eta = 533325415U;
    msg.duration = 23414U;

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
    msg.setTimeStamp(0.478940827991);
    msg.setSource(55218U);
    msg.setSourceEntity(22U);
    msg.setDestination(7606U);
    msg.setDestinationEntity(169U);
    msg.plan_id = 24396U;
    IMC::SoiWaypoint tmp_msg_0;
    tmp_msg_0.lat = 0.33995817339;
    tmp_msg_0.lon = 0.368108702475;
    tmp_msg_0.eta = 2598590213U;
    tmp_msg_0.duration = 27217U;
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
    msg.setTimeStamp(0.0793534577641);
    msg.setSource(52127U);
    msg.setSourceEntity(22U);
    msg.setDestination(28062U);
    msg.setDestinationEntity(179U);
    msg.plan_id = 11041U;

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
    msg.setTimeStamp(0.34142757865);
    msg.setSource(54365U);
    msg.setSourceEntity(159U);
    msg.setDestination(42734U);
    msg.setDestinationEntity(12U);
    msg.plan_id = 62424U;

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
    msg.setTimeStamp(0.419149309501);
    msg.setSource(19571U);
    msg.setSourceEntity(250U);
    msg.setDestination(58850U);
    msg.setDestinationEntity(37U);
    msg.type = 123U;
    msg.command = 71U;
    msg.settings.assign("TOXIKPPWIAEOWLDRHSWNBDVNTVPPXJGYSMFRWJJIQNTBUCJXRAQOBWT");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 23433U;
    IMC::SoiWaypoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.755696348103;
    tmp_tmp_msg_0_0.lon = 0.425608318823;
    tmp_tmp_msg_0_0.eta = 351362448U;
    tmp_tmp_msg_0_0.duration = 38955U;
    tmp_msg_0.waypoints.push_back(tmp_tmp_msg_0_0);
    msg.plan.set(tmp_msg_0);
    msg.info.assign("XWNMITXUSQZEMABCWEXUQXNDHAOFMPZFOFPLMIANKEKZCOQAZIBPSO");

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
    msg.setTimeStamp(0.610084335586);
    msg.setSource(16773U);
    msg.setSourceEntity(142U);
    msg.setDestination(47688U);
    msg.setDestinationEntity(166U);
    msg.type = 35U;
    msg.command = 196U;
    msg.settings.assign("QFOOMIQMYWDWOOCMKDJDOIGVDXCHELZPTUQTUULFKLGIZSRVPXJBZMVWAHHUJTZJCCVUWGCBBLYXJYZFKRFRWGNFWEMJNCNKJEPZDRZZRPOQZAKT");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 11138U;
    msg.plan.set(tmp_msg_0);
    msg.info.assign("BEFKDDLRRJAZXQGGWDLODFMJLTPVXAVOPPMWUTYSMIDLXBNCPKXUVVVXYNZICAXFLWLPFOSNFKBUJEKHECWYSRMCICRNQGHFAGOSJYCLHWQSWISQGYGXDJNAHYCTMWZZKFBK");

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
    msg.setTimeStamp(0.188426362555);
    msg.setSource(55802U);
    msg.setSourceEntity(129U);
    msg.setDestination(36752U);
    msg.setDestinationEntity(134U);
    msg.type = 9U;
    msg.command = 223U;
    msg.settings.assign("XXFMUDGSQXLBTEAYELXPRDSAZFLAYNDDGFOUGDTXFNWCRIUXVHWJOVRCBHCPCBBPTMGHCTERYIHLVQSOQYSHICJQIYIMHSKLKQAILCQOPNNJVKKRJRAKOWK");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 51223U;
    IMC::SoiWaypoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.601113828402;
    tmp_tmp_msg_0_0.lon = 0.800880616655;
    tmp_tmp_msg_0_0.eta = 1100651206U;
    tmp_tmp_msg_0_0.duration = 33912U;
    tmp_msg_0.waypoints.push_back(tmp_tmp_msg_0_0);
    msg.plan.set(tmp_msg_0);
    msg.info.assign("ANSNTTGXRVHRTHUVMPNOJXFLINJGQDECJXYBKBWCKBTZYUNDSBFIRKPURUIQKHPUOHVQCEGDTVBEZZKLKASPUNBHLTYUMATKEQWFWDWFFTZEOPEIMCXVAYBNQATJSTJSIOYGBOYOZYKFPRLILQWOZZAKEFXRYGFGURIAVXGXQCNRSPSWQDVDWZMJFIJIDMHRXGCSGVYWMPSLLOVHZCBJHAMMLXQOBSHMCMOVQCNAZDUI");

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
    msg.setTimeStamp(0.344928067675);
    msg.setSource(15198U);
    msg.setSourceEntity(252U);
    msg.setDestination(64807U);
    msg.setDestinationEntity(240U);
    msg.state = 192U;
    msg.plan_id = 36702U;
    msg.wpt_id = 7U;
    msg.settings_chk = 7637U;

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
    msg.setTimeStamp(0.211237508063);
    msg.setSource(24325U);
    msg.setSourceEntity(145U);
    msg.setDestination(26015U);
    msg.setDestinationEntity(90U);
    msg.state = 92U;
    msg.plan_id = 38637U;
    msg.wpt_id = 105U;
    msg.settings_chk = 40111U;

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
    msg.setTimeStamp(0.669991557681);
    msg.setSource(28981U);
    msg.setSourceEntity(212U);
    msg.setDestination(21992U);
    msg.setDestinationEntity(155U);
    msg.state = 216U;
    msg.plan_id = 17390U;
    msg.wpt_id = 141U;
    msg.settings_chk = 31616U;

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
    msg.setTimeStamp(0.655961782019);
    msg.setSource(40280U);
    msg.setSourceEntity(147U);
    msg.setDestination(55415U);
    msg.setDestinationEntity(113U);
    msg.uid = 230U;
    msg.frag_number = 88U;
    msg.num_frags = 232U;
    const char tmp_msg_0[] = {46, -66, 31, -12, -10, -30, 124, 28, -108, -60, 93, -54, -123, -104, -19, 61, -66, 62, -124, -119, 20, 13, 94, -121, 95, -38, 126, -93, 109, 31, 32, 3, -65, 64, -102, 4, 84, -94, 28, 81, 120, 120, 68, 11, 28, 36, -123, 31, -118, -10, -87, 54, 79, -40, -66, 13, -54, -107, -126, -13, -87, -126, -36, 22, 50, 107, -4, -40, 23, 50, -27, 90, 11, 41, 67, 30, -86, -101, -62, -62, -46, -67, 66, -13, 39, 79, -94, 45, 119, 38, -71, 73, -83, 88, -96, -10, 71, -48, 58, -19, -39, 96, -42, -40, 48, 116, -91, -67, 89, 115, -3, 32, 61, -17, -8, -89, 15, -112, -73, 43, 58, -99, -11, 44, -106, 21, 39, 113, 43, 87, 101, 7, -110, 78, 52, 123, -11, -98, 72, 67, -124, -4, 41, 106, 43, -4, 43, 92, 79, -123, 39, -14, 1, 98, -20, -11, 28, 64, 66, 60, -2, 119, -11, -69, 105, -110, 41, 89, -6, -87, 43, 4, -87, 27, -46, 45, -78, 97, 118, 51, -118, 47, -8, -70, -127, 35, -36, 21, -9, -98, 35, 93, 74, 104, 99, 10, 75, 115, 21, 92, 96, -34, -78, 37, 81, -114, 93, 92, 121, -83, -118, -35, -24};
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
    msg.setTimeStamp(0.388953408493);
    msg.setSource(3800U);
    msg.setSourceEntity(65U);
    msg.setDestination(27279U);
    msg.setDestinationEntity(55U);
    msg.uid = 163U;
    msg.frag_number = 2U;
    msg.num_frags = 71U;
    const char tmp_msg_0[] = {66, -109, -126, -116, -88, -88, 34, -10, 67, -76, -5, 76, 44};
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
    msg.setTimeStamp(0.312814675623);
    msg.setSource(24884U);
    msg.setSourceEntity(40U);
    msg.setDestination(44925U);
    msg.setDestinationEntity(216U);
    msg.uid = 197U;
    msg.frag_number = 174U;
    msg.num_frags = 250U;
    const char tmp_msg_0[] = {81, 0, 77, 67, 82, -118, 73, 16, -72, -43, -42, 45, 79, 33, -41, 52, 115, 19, 71, -26, -76, -76, -66, 84, 94, -27, 1, -49, 112, 95, 67, -39, 116, 71, 119, -108, -80, 45, -92, -36, 119, -15, 94, -3, -28, 73, -24, 76, -114, -12, 69, -124, -111, 70, -10, 118, 22, -100, 75, -120, -29, 116, 36, -124, 53, 34, 103, 78, -75, 52, -75, -4, 19, 121, -83, -70, 45, 100, 92, 106, -42, 3, 75, -104, 123, 114, -65, 110, 13, 118, 40, 66, -87, -80, 46, -65, -54, -115, 25, 63, -82, 8, -55, -68, -41, 106, 126, 112, -81, -95, -76, 56, 57, 47, 61, -110, 113, -45, -57, -89, -47, 82, -107, -33, -120, -111, 33, -109, -106, -14, 47, -117, 98, -69, -123, -37, -5, 117, 82, 120, 111, -83, 119, -26, 90, 84, 33, -62, -63, 61, 56, 31, 63, -91, -31, -43, 19, 88, -42, 108, -66, 8, 43, 108, -29, -88, 40, -110, 31, 112, 13, -11, 56, 117, 66, -93, -57, 121, -1, -44, 54, 107, -10, 96, 60, 79, 3, -99, -68, -42, -30, -51, 38, -88, 107, 67, 49, -80, 22, -68, 2, 53, -32, -21, 68, 1, -26, -6, -28, 11, -111, 110, -90, 65, 33, -122, -94, -1, 11, -57, 11, -77, -72, -63, -118, 95, 48, -20, -29, 46};
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
    msg.setTimeStamp(0.313434841046);
    msg.setSource(24914U);
    msg.setSourceEntity(188U);
    msg.setDestination(55931U);
    msg.setDestinationEntity(77U);
    msg.content_type.assign("HVTFYRLCFUDUPMDIGCHMQBILNDFWKXOGBAWOEGCQHPGRDOFTWTABQBFVOGJHMJJSLGZNVYNLWZKPSWBLHZIHSCRTEWVJMQPVLTENQKNEISYYXQUZTKFVWMYLCZOMJECUFWZEVGEDATXIBIPKUJZYCSQRZODHNPPMKLSGBNQAIDRWPYCAYPUQXJUKTKNJABSRAIWRDTRYHOBFHBSASAFLIAOMEENVMEXXDXHTJZIXMRGFVRDOUQPJCGXKO");
    const char tmp_msg_0[] = {-85, -25, 93, -74, 56, -56, 71, 73, 2, -127, 42, -107, -10, -44, 77, -113, 29, 108, -77, 119, -116, 89, 39, 57, 84, 57, -64, 81, -52, -96, 124, -21, 29, 41, 52, 4, 11, -70, -125, 121, 79, -120, -34, -19, 40, -22, -11, -34, -89, 112, -104, 77, 120, -93, 35, 123, 36, 27, -98, -77, 114, 6, -115, 29, 67, -45, 112, -116, -64, 118, 81, 123, 115, 90, -119, 0};
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
    msg.setTimeStamp(0.760366147085);
    msg.setSource(10048U);
    msg.setSourceEntity(181U);
    msg.setDestination(4023U);
    msg.setDestinationEntity(86U);
    msg.content_type.assign("VSJABAVRSAMHWSZTGWIFROEIVOBLKJBHNATYPLFK");
    const char tmp_msg_0[] = {-31, 114, -28, -58, 33, 116, -122, 47, -8, -99, -123, -117, 35, 31, -27, -90, 56, 121, -21, -76, -85, -101, -123, -43, -44, -92, -101, -19, -111, 18, -59, 109, -82, -125, -35, 119, -78, -2, 122, 49, 18, 20, -16, -47, 115, -60, -91};
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
    msg.setTimeStamp(0.7827551614);
    msg.setSource(5454U);
    msg.setSourceEntity(75U);
    msg.setDestination(2016U);
    msg.setDestinationEntity(90U);
    msg.content_type.assign("SMLOZSRNGMEFNRZSXZWEPQHQSMGOLJIBKUFEZLXUCSNEGXICSJIEVYAYDJMUQQNCAMHFAIKQBQNWXDBGLULQOLIKHFYRPNCHUQLTKXFWVRFGMHBLOITMCUVYLTOVABDJGFBUOHAYJYNKDJBOVVXRDXLPRDTIZHQVSDSPORBYUDPXETSOEPIMZTBEYHJHTRAUPFOXCTYQFIAYWVTWPMGNCM");
    const char tmp_msg_0[] = {45, 115, -64, -84, -57, 71, -49, 48, 29, 15, -127, 16, -14, 24, -60, -1, 102, -72, 110};
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
    msg.setTimeStamp(0.617337787552);
    msg.setSource(23137U);
    msg.setSourceEntity(44U);
    msg.setDestination(5549U);
    msg.setDestinationEntity(147U);

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
    msg.setTimeStamp(0.821660654408);
    msg.setSource(45118U);
    msg.setSourceEntity(216U);
    msg.setDestination(36829U);
    msg.setDestinationEntity(183U);

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
    msg.setTimeStamp(0.504158228202);
    msg.setSource(28785U);
    msg.setSourceEntity(53U);
    msg.setDestination(13781U);
    msg.setDestinationEntity(40U);

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
    msg.setTimeStamp(0.606429847162);
    msg.setSource(18041U);
    msg.setSourceEntity(192U);
    msg.setDestination(35247U);
    msg.setDestinationEntity(17U);
    msg.target = 1394U;
    msg.bearing = 0.781516329844;
    msg.elevation = 0.14472555032;

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
    msg.setTimeStamp(0.363784852077);
    msg.setSource(63278U);
    msg.setSourceEntity(217U);
    msg.setDestination(15160U);
    msg.setDestinationEntity(113U);
    msg.target = 55336U;
    msg.bearing = 0.250064534524;
    msg.elevation = 0.527202075409;

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
    msg.setTimeStamp(0.454539414838);
    msg.setSource(63666U);
    msg.setSourceEntity(118U);
    msg.setDestination(49190U);
    msg.setDestinationEntity(75U);
    msg.target = 12289U;
    msg.bearing = 0.617729275307;
    msg.elevation = 0.610784466845;

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
    msg.setTimeStamp(0.816330544488);
    msg.setSource(25702U);
    msg.setSourceEntity(245U);
    msg.setDestination(29833U);
    msg.setDestinationEntity(119U);
    msg.target = 11219U;
    msg.x = 0.79466346729;
    msg.y = 0.890160455844;
    msg.z = 0.801457234813;

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
    msg.setTimeStamp(0.0316885943082);
    msg.setSource(55877U);
    msg.setSourceEntity(107U);
    msg.setDestination(39870U);
    msg.setDestinationEntity(221U);
    msg.target = 38770U;
    msg.x = 0.541620799088;
    msg.y = 0.410135309729;
    msg.z = 0.452141567966;

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
    msg.setTimeStamp(0.687545338612);
    msg.setSource(29560U);
    msg.setSourceEntity(201U);
    msg.setDestination(62391U);
    msg.setDestinationEntity(0U);
    msg.target = 11576U;
    msg.x = 0.258440579482;
    msg.y = 0.406617694112;
    msg.z = 0.573435191892;

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
    msg.setTimeStamp(0.939140696432);
    msg.setSource(50603U);
    msg.setSourceEntity(31U);
    msg.setDestination(14455U);
    msg.setDestinationEntity(68U);
    msg.target = 14218U;
    msg.lat = 0.985825968295;
    msg.lon = 0.130542365372;
    msg.z_units = 92U;
    msg.z = 0.837421237563;

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
    msg.setTimeStamp(0.558749249127);
    msg.setSource(7498U);
    msg.setSourceEntity(76U);
    msg.setDestination(12433U);
    msg.setDestinationEntity(184U);
    msg.target = 23101U;
    msg.lat = 0.332411877654;
    msg.lon = 0.246760411562;
    msg.z_units = 28U;
    msg.z = 0.77481116297;

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
    msg.setTimeStamp(0.0972486827761);
    msg.setSource(38656U);
    msg.setSourceEntity(24U);
    msg.setDestination(24394U);
    msg.setDestinationEntity(10U);
    msg.target = 23609U;
    msg.lat = 0.928160314438;
    msg.lon = 0.0159764655523;
    msg.z_units = 214U;
    msg.z = 0.892042576015;

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
    msg.setTimeStamp(0.276003489026);
    msg.setSource(49691U);
    msg.setSourceEntity(150U);
    msg.setDestination(5244U);
    msg.setDestinationEntity(153U);
    msg.locale.assign("VCNQJLDBIMHPSALDFJUKXZNEKZYEMXORMRLWKNWOXJLLKZTYYWBZUOTMKRQLURMMSZHJFFNIWNFCJYAEJCIYDACLVPMTDAQJQHKNYJKGGROBFOPEUEPYOPWXXODBOFCTZBEUVVTYSHXQQBPNWGGRCSUQVXIUGHADDQGEHBRSZWNGKTXRKIZRMNHMOKALEPFSFUPY");
    const char tmp_msg_0[] = {25, 97, 6, -17, -53, -43, 124, -64, -48, -71, 100, 94, 86, 104, 81, 106, 113, -39, 5, -87, 65, -83, -110, -104, -20, 17, -99, 50, -112, -101, -103, -3, 63, -59, -89, 2, 121, 49, -40, -110, -94, -57, 108, 26, 55, 119, -26, 73, -2, 1, -56, 25, -4, 94, -94, 29, 95, 51, 32, 91, 27, -23, -54, -59, 3, 118, 57, -111, 62, -63, -58, 67, -44, 119, 77, 98, 66, 125, 71, 74, 93, -9, -103, -88, 81, -50, -82, 81, 70, 84, 48, 37, -51, -72, -56, -97, 17, 74, 0, 97, 42, -123, -85, -122, 17, -30, 85, 67, 14, -59, 6, -44, -97, -48, 98, -12, 16, -42, -56, 15, 101, -40, -32, -2, 63, 10, 117, -34};
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
    msg.setTimeStamp(0.808530381023);
    msg.setSource(29720U);
    msg.setSourceEntity(82U);
    msg.setDestination(12427U);
    msg.setDestinationEntity(83U);
    msg.locale.assign("WUKIRVXLDGJGWDVRTYTCYMXDRBBMMNZLDPTQKJOQNEEJAXMCGBKIYJX");
    const char tmp_msg_0[] = {33, 59, 22, -11, -101, -88, 70, -30, -37, -91, -63, 106, 72, 2, 70, -126, -106, 91, -2, 104, -48, 9, 104, 111, 67, 80, -98, 56, 24, 23, 116, 57, 28, -72, 18, -108, 9, -3, -17, -47, 2, -7, -126, 67, 63, -13, -58, -5, -17, -77, -101, 47, -102, -76, -99, 55, 9, 47, 88, 43, -106, -38, 57, -12, 94, 77, 19, -60, 124, -100, 60, 21, -8, -42, -50, -101, -77, 35, -46, -9, -32, 114, -48, 92, 5, -59, 70, -104, 67, 95, -84, -46, 76, 56, 9, 6, -123, 122, 19, 43, -4, -123, -21, 108, 101, -71, 69, -9, 104, -32, -59, 115, -64, 62, -7, -47, 23, 119, 18, -67, 102, -36, -98, -123, -30, 126, 59, 49, -65, -116, 107, 29, 74, -4, -45, -15, 17, 4, -47, 5, 2, -45, 61, -31, -1, -88, 106, 78, 1, 110, 35, -21, 24, 19, 20, -58, -124, -82, -76, -102, 80, -21, 113, -85, -3, 61, -9, 10, -41};
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
    msg.setTimeStamp(0.605526464694);
    msg.setSource(31298U);
    msg.setSourceEntity(102U);
    msg.setDestination(4215U);
    msg.setDestinationEntity(140U);
    msg.locale.assign("PCWSRTUSVPICBUADQYULKVIUOYRFVIQPEVPGWGDNDXNSBFQFQPKNGLPBMHMDZOJOBREUJFETRXVYUQDTCMSRIFUDLJJITMVSFSYNFZEOHARKZYRLCIEOMPYPAZMEQZBLOOWADNFLKIZHXANHVHSOMHXJDYMJCLWKHITTHCZQAKJCTUQLXVSZXKWEXNFKGTHTIESCGPQMB");
    const char tmp_msg_0[] = {-46, 41, -97, 84, 59, 104, 112, 46, 62, 108, 25, -34, -127, -116, -14, 32, -57, -34, 37, 89, 80, 34, -94, -66, 12, -22, 30, -22, 6, -111, 31, 57, -45, -30, -105, -12, -60, 120, 80, 97, -78, -122, -3, -102, -112, 2, -96, -39, -89, -18, -127, 25, 116, 54, -81, -99, -78, -30, 114, -35, 0, -68, 75, 58, 65, -68, -26, -110, 96, -25, 10, -92, -37, -76, -72, 71, 33, 114, -83, -110, 102, -26, 105, -65, 115, -24, 120, -43, -107, 17, -5, 114, -6, -105, 16, 41, -116, 92, 13, -78, 23, -82, -75, -28, -21, 42, 53, 85, 44, 118, 70, -92, 60, -74, 59, -29, -57, -20, -112, 77, 46, -17, -109, -102, 73, 92, -115, 18, 30, 122, -63, -114, -21, -2, 69, -54, 11, 15, 11, 126, -26, -21, -26, -76, 58, 32, 116, -59, -123, -4, -113, -88, 33, -49, -48, -67, 98, -34, -77, -22, -6, -104, -101, 37, 19, -122, 89, 56, -64, -115, -3, -4, -43, -34, 35, -32};
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
    msg.setTimeStamp(0.345641992707);
    msg.setSource(13444U);
    msg.setSourceEntity(133U);
    msg.setDestination(23282U);
    msg.setDestinationEntity(57U);

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
    msg.setTimeStamp(0.926947715836);
    msg.setSource(26820U);
    msg.setSourceEntity(197U);
    msg.setDestination(44028U);
    msg.setDestinationEntity(97U);

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
    msg.setTimeStamp(0.919701434227);
    msg.setSource(57487U);
    msg.setSourceEntity(28U);
    msg.setDestination(13294U);
    msg.setDestinationEntity(223U);

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
    msg.setTimeStamp(0.482396576683);
    msg.setSource(40323U);
    msg.setSourceEntity(165U);
    msg.setDestination(36931U);
    msg.setDestinationEntity(224U);
    msg.camid = 34U;
    msg.x = 21877U;
    msg.y = 29053U;

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
    msg.setTimeStamp(0.713213971492);
    msg.setSource(30772U);
    msg.setSourceEntity(177U);
    msg.setDestination(54219U);
    msg.setDestinationEntity(92U);
    msg.camid = 133U;
    msg.x = 58987U;
    msg.y = 25161U;

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
    msg.setTimeStamp(0.854285014588);
    msg.setSource(17434U);
    msg.setSourceEntity(89U);
    msg.setDestination(12032U);
    msg.setDestinationEntity(133U);
    msg.camid = 124U;
    msg.x = 11317U;
    msg.y = 8342U;

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
    msg.setTimeStamp(0.589426082674);
    msg.setSource(13958U);
    msg.setSourceEntity(224U);
    msg.setDestination(44306U);
    msg.setDestinationEntity(68U);
    msg.camid = 104U;
    msg.x = 22882U;
    msg.y = 17507U;

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
    msg.setTimeStamp(0.626641826213);
    msg.setSource(49897U);
    msg.setSourceEntity(22U);
    msg.setDestination(25443U);
    msg.setDestinationEntity(161U);
    msg.camid = 78U;
    msg.x = 12017U;
    msg.y = 15496U;

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
    msg.setTimeStamp(0.229141800161);
    msg.setSource(33061U);
    msg.setSourceEntity(70U);
    msg.setDestination(1710U);
    msg.setDestinationEntity(177U);
    msg.camid = 13U;
    msg.x = 32603U;
    msg.y = 64938U;

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
    msg.setTimeStamp(0.257731596574);
    msg.setSource(2032U);
    msg.setSourceEntity(39U);
    msg.setDestination(25409U);
    msg.setDestinationEntity(177U);
    msg.tracking = 98U;
    msg.lat = 0.629603869243;
    msg.lon = 0.459631060009;
    msg.x = 0.412392770976;
    msg.y = 0.34553616028;
    msg.z = 0.321516526125;

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
    msg.setTimeStamp(0.6042126627);
    msg.setSource(55920U);
    msg.setSourceEntity(37U);
    msg.setDestination(34970U);
    msg.setDestinationEntity(169U);
    msg.tracking = 180U;
    msg.lat = 0.852060590855;
    msg.lon = 0.032330557518;
    msg.x = 0.470336607718;
    msg.y = 0.0288691756053;
    msg.z = 0.787545021802;

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
    msg.setTimeStamp(0.36677317798);
    msg.setSource(52525U);
    msg.setSourceEntity(5U);
    msg.setDestination(5508U);
    msg.setDestinationEntity(169U);
    msg.tracking = 245U;
    msg.lat = 0.924056681681;
    msg.lon = 0.752547171698;
    msg.x = 0.139621442326;
    msg.y = 0.935205270572;
    msg.z = 0.957232927087;

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
    msg.setTimeStamp(0.742557013729);
    msg.setSource(22353U);
    msg.setSourceEntity(129U);
    msg.setDestination(7016U);
    msg.setDestinationEntity(28U);
    msg.target.assign("SOFVFRKJJWLODLAPF");
    msg.lbearing = 0.584175178999;
    msg.lelevation = 0.700182676673;
    msg.bearing = 0.376170840257;
    msg.elevation = 0.683222179496;
    msg.phi = 0.584842591749;
    msg.theta = 0.239388561703;
    msg.psi = 0.964586091424;
    msg.accuracy = 0.722860086809;

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
    msg.setTimeStamp(0.747143465434);
    msg.setSource(61817U);
    msg.setSourceEntity(53U);
    msg.setDestination(11070U);
    msg.setDestinationEntity(51U);
    msg.target.assign("BCHWJKCMICNGPAKPRQIOKSGWJFREZVZLJZJYFQEQKOZXRCXIPLLCBYVDKXNYMIOIQFNIYAOWFBTUFISMTTLMJDQVQPSOYDDAAUDSFXHDTQQEEIFORZNRZHHKNZVAHFYVMHLWEWVXUSOOPGJGRXTHWPXYHWPLCOUUAVCKAAXGITJNEDPWMQGUBTLXEGMRTDWBWLNVJCZZFIUSCNEMYKHGKUBUQSZGNFMVSRLEUJB");
    msg.lbearing = 0.233221724122;
    msg.lelevation = 0.0106484770837;
    msg.bearing = 0.179007754296;
    msg.elevation = 0.904391644309;
    msg.phi = 0.968866740727;
    msg.theta = 0.88046442229;
    msg.psi = 0.177807588089;
    msg.accuracy = 0.68686736839;

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
    msg.setTimeStamp(0.174851585614);
    msg.setSource(55435U);
    msg.setSourceEntity(89U);
    msg.setDestination(53083U);
    msg.setDestinationEntity(35U);
    msg.target.assign("WHACMTFAGLASZFISQQSGOKHXBZIKCCTYQ");
    msg.lbearing = 0.766622103649;
    msg.lelevation = 0.733606244289;
    msg.bearing = 0.524496344627;
    msg.elevation = 0.471631780638;
    msg.phi = 0.501896313624;
    msg.theta = 0.140218724307;
    msg.psi = 0.739432826559;
    msg.accuracy = 0.467538951045;

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
    msg.setTimeStamp(0.4881381237);
    msg.setSource(56900U);
    msg.setSourceEntity(245U);
    msg.setDestination(13875U);
    msg.setDestinationEntity(47U);
    msg.target.assign("QWDXKQENFRFMBDVZTCPEGFAVGHCHJPOAGYZUPFIADMEMGPETXWMDNTXTAEBDGGQLZOFKOZZDUGHUZIDQONXDENPKZTABAOVSIRBFRMNKCEXMBQRLVMTSCXLLIBWYPEKSWFHWXTWJSERILLHHWNNFUUITUUVOPGAJRUZJVROFLCVTGSJINWKYPYUSSDQUVNHRSCJWWJXR");
    msg.x = 0.119243895662;
    msg.y = 0.200616585197;
    msg.z = 0.7418841568;
    msg.n = 0.0184637503802;
    msg.e = 0.153633104356;
    msg.d = 0.143717097904;
    msg.phi = 0.150299468302;
    msg.theta = 0.269976096509;
    msg.psi = 0.357127326675;
    msg.accuracy = 0.208149784328;

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
    msg.setTimeStamp(0.667080522912);
    msg.setSource(40334U);
    msg.setSourceEntity(163U);
    msg.setDestination(7351U);
    msg.setDestinationEntity(187U);
    msg.target.assign("KBYNHXQJFXCFTZSLEEGOHZFJAAZMDYSPLBOYWWSDVUGKIDBZBVWFBIPLBYDSGODLPKAYVEUXKPBMECQRJLGCWQVITPWFSZNIGXHZUPUQQEJEDASCYTOHJLMSNCGFOMINTHUVFITQWPTNCKOAWIBULAWRCQFNRECDYRKDPIPQQAFBWQTLZMUHERUNTRAJHXNEZKJMRRKXOGICLJAGZHGJOGKHKTHVOUDTYLXNVSI");
    msg.x = 0.910284581765;
    msg.y = 0.0312843201188;
    msg.z = 0.0378357613938;
    msg.n = 0.199125512014;
    msg.e = 0.398376758783;
    msg.d = 0.701657590273;
    msg.phi = 0.681388831012;
    msg.theta = 0.525279531478;
    msg.psi = 0.752480675655;
    msg.accuracy = 0.231547443959;

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
    msg.setTimeStamp(0.384297784442);
    msg.setSource(41495U);
    msg.setSourceEntity(221U);
    msg.setDestination(3621U);
    msg.setDestinationEntity(37U);
    msg.target.assign("DFXUYHQFUFHZTOZOJLVBJCQFANQWAOLILDPONCQDWVLCBNXRYBDTOFRNMOBEGKECQUPIEPWDXNADGIAPYFGISRJIGTBKTCCYFAHQGJZKVYEXEMUPWOQERNGRZLQSJVZNFSWMVBAASDHGGNOZLDNEITBKKDXIORPYCYMFEXBU");
    msg.x = 0.506115943422;
    msg.y = 0.452976274732;
    msg.z = 0.176853080118;
    msg.n = 0.00566382075712;
    msg.e = 0.896487495378;
    msg.d = 0.934328904265;
    msg.phi = 0.279131650908;
    msg.theta = 0.524477722971;
    msg.psi = 0.629708320899;
    msg.accuracy = 0.00254495778575;

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
    msg.setTimeStamp(0.0720740659445);
    msg.setSource(18437U);
    msg.setSourceEntity(223U);
    msg.setDestination(2374U);
    msg.setDestinationEntity(88U);
    msg.target.assign("FJMSIZUANLTMIMCWXWKMRPBTZGSXXZMCOAASLOIKRDGHZBXQJICRDSNAXPQGQZHASLITLWGO");
    msg.lat = 0.631005528849;
    msg.lon = 0.91133586206;
    msg.z_units = 170U;
    msg.z = 0.0174778333159;
    msg.accuracy = 0.737673082667;

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
    msg.setTimeStamp(0.840244416705);
    msg.setSource(61103U);
    msg.setSourceEntity(123U);
    msg.setDestination(1441U);
    msg.setDestinationEntity(95U);
    msg.target.assign("FTLBNLAVYEVJLRRKTPDZBMPZMZJF");
    msg.lat = 0.246224665367;
    msg.lon = 0.51394647585;
    msg.z_units = 53U;
    msg.z = 0.0476735036571;
    msg.accuracy = 0.904008674373;

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
    msg.setTimeStamp(0.246503640747);
    msg.setSource(36360U);
    msg.setSourceEntity(71U);
    msg.setDestination(60012U);
    msg.setDestinationEntity(63U);
    msg.target.assign("DHOGVEQYCXDKVZNXWAWZSJGHAGUHJFFCTALYXLZZXMCITFYZGECTLPYQSGWJIDDVWHKPMTCFAOTPCFSVXOCTBBJREVXRIPNSYWOUIRTSFGAMPEMHGXYBKZMZRRPQJUCRNNMJRLUUUBHVFGDTUEWDNAOENQO");
    msg.lat = 0.916002009932;
    msg.lon = 0.740714111673;
    msg.z_units = 46U;
    msg.z = 0.43702433439;
    msg.accuracy = 0.763914344426;

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
    msg.setTimeStamp(0.663554120696);
    msg.setSource(35542U);
    msg.setSourceEntity(231U);
    msg.setDestination(49080U);
    msg.setDestinationEntity(122U);
    msg.name.assign("BKYVSVKGEYIAADTZVESPBDUKEEFUTC");
    msg.lat = 0.191283809221;
    msg.lon = 0.257377427851;
    msg.z = 0.882658067608;
    msg.z_units = 8U;

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
    msg.setTimeStamp(0.810306965892);
    msg.setSource(53641U);
    msg.setSourceEntity(239U);
    msg.setDestination(62426U);
    msg.setDestinationEntity(0U);
    msg.name.assign("EYKLFIIPXNWHIESBAOTBFPQLUXXDKDNCOIISESZXVBEDCJQHJNIBFQVBYWUBOYUUPBVEOHWDLAXYKCFUAJYEVRHMKTQXAZGZLSLHWRVDOMXSAVTCTGCCQPVKQJKWSPWMFRHHJZELEYSZVZUUHTKSGSTURMLFQYMRXQTPNYZMCGX");
    msg.lat = 0.114431649223;
    msg.lon = 0.408787778234;
    msg.z = 0.724350199959;
    msg.z_units = 83U;

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
    msg.setTimeStamp(0.584342777101);
    msg.setSource(11822U);
    msg.setSourceEntity(49U);
    msg.setDestination(30710U);
    msg.setDestinationEntity(27U);
    msg.name.assign("PDNESIIUJAQNTQVOFWESWPTZXJZQQGGZTJKKXWJGHZWBPDZXGSKDIOMZYGNORKPXFUPDHYHCTQQ");
    msg.lat = 0.406201749005;
    msg.lon = 0.336354055435;
    msg.z = 0.459936628326;
    msg.z_units = 215U;

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
    msg.setTimeStamp(0.742630856058);
    msg.setSource(55225U);
    msg.setSourceEntity(249U);
    msg.setDestination(61764U);
    msg.setDestinationEntity(172U);
    msg.op = 172U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("UZJKKOTEYQN");
    tmp_msg_0.lat = 0.0756709204333;
    tmp_msg_0.lon = 0.985170657487;
    tmp_msg_0.z = 0.507171381344;
    tmp_msg_0.z_units = 155U;
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
    msg.setTimeStamp(0.550480798347);
    msg.setSource(32394U);
    msg.setSourceEntity(141U);
    msg.setDestination(57617U);
    msg.setDestinationEntity(203U);
    msg.op = 38U;

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
    msg.setTimeStamp(0.522328372989);
    msg.setSource(59202U);
    msg.setSourceEntity(189U);
    msg.setDestination(13346U);
    msg.setDestinationEntity(73U);
    msg.op = 200U;

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
    msg.setTimeStamp(0.799018652105);
    msg.setSource(2089U);
    msg.setSourceEntity(236U);
    msg.setDestination(7996U);
    msg.setDestinationEntity(248U);
    msg.value = 0.683268717972;
    msg.type = 228U;

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
    msg.setTimeStamp(0.473458057805);
    msg.setSource(43287U);
    msg.setSourceEntity(154U);
    msg.setDestination(55878U);
    msg.setDestinationEntity(191U);
    msg.value = 0.044541504235;
    msg.type = 81U;

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
    msg.setTimeStamp(0.155176607461);
    msg.setSource(8830U);
    msg.setSourceEntity(179U);
    msg.setDestination(37961U);
    msg.setDestinationEntity(33U);
    msg.value = 0.181169687698;
    msg.type = 218U;

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
    msg.setTimeStamp(0.793718716243);
    msg.setSource(40337U);
    msg.setSourceEntity(229U);
    msg.setDestination(33091U);
    msg.setDestinationEntity(181U);
    msg.value = 0.528198959933;

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
    msg.setTimeStamp(0.519604787505);
    msg.setSource(30409U);
    msg.setSourceEntity(78U);
    msg.setDestination(43134U);
    msg.setDestinationEntity(201U);
    msg.value = 0.403179947948;

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
    msg.setTimeStamp(0.712152319763);
    msg.setSource(55502U);
    msg.setSourceEntity(152U);
    msg.setDestination(46374U);
    msg.setDestinationEntity(57U);
    msg.value = 0.352877287414;

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
    msg.setTimeStamp(0.111754346776);
    msg.setSource(43847U);
    msg.setSourceEntity(75U);
    msg.setDestination(60455U);
    msg.setDestinationEntity(237U);
    msg.timestamp_last_service = 0.0617046491284;
    msg.time_next_service = 0.0633624265503;
    msg.time_motor_next_service = 0.811966223589;
    msg.time_idle_ground = 0.0294629387088;
    msg.time_idle_air = 0.453642127879;
    msg.time_idle_water = 0.057020661339;
    msg.time_idle_underwater = 0.399568723963;
    msg.time_idle_unknown = 0.677513787315;
    msg.time_motor_ground = 0.0810804549561;
    msg.time_motor_air = 0.812284226232;
    msg.time_motor_water = 0.805409304919;
    msg.time_motor_underwater = 0.949222159511;
    msg.time_motor_unknown = 0.719366904488;
    msg.rpm_min = -15602;
    msg.rpm_max = 24563;
    msg.depth_max = 0.239673235382;

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
    msg.setTimeStamp(0.871542461307);
    msg.setSource(53830U);
    msg.setSourceEntity(11U);
    msg.setDestination(51188U);
    msg.setDestinationEntity(218U);
    msg.timestamp_last_service = 0.347942852598;
    msg.time_next_service = 0.359274060872;
    msg.time_motor_next_service = 0.898905126952;
    msg.time_idle_ground = 0.225727325029;
    msg.time_idle_air = 0.245767975108;
    msg.time_idle_water = 0.81607515578;
    msg.time_idle_underwater = 0.455814754117;
    msg.time_idle_unknown = 0.674199768674;
    msg.time_motor_ground = 0.0121758873292;
    msg.time_motor_air = 0.695269137139;
    msg.time_motor_water = 0.527936550437;
    msg.time_motor_underwater = 0.759409356423;
    msg.time_motor_unknown = 0.41839825868;
    msg.rpm_min = 7705;
    msg.rpm_max = -25086;
    msg.depth_max = 0.232949464873;

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
    msg.setTimeStamp(0.0643138734735);
    msg.setSource(31593U);
    msg.setSourceEntity(77U);
    msg.setDestination(17175U);
    msg.setDestinationEntity(39U);
    msg.timestamp_last_service = 0.913517798766;
    msg.time_next_service = 0.656885346857;
    msg.time_motor_next_service = 0.295543583019;
    msg.time_idle_ground = 0.167201312076;
    msg.time_idle_air = 0.868411924171;
    msg.time_idle_water = 0.165595414209;
    msg.time_idle_underwater = 0.498899853168;
    msg.time_idle_unknown = 0.270471241986;
    msg.time_motor_ground = 0.765748670328;
    msg.time_motor_air = 0.749102205884;
    msg.time_motor_water = 0.381042146682;
    msg.time_motor_underwater = 0.651724907771;
    msg.time_motor_unknown = 0.274571706179;
    msg.rpm_min = 9366;
    msg.rpm_max = 20810;
    msg.depth_max = 0.0417587989295;

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
    msg.setTimeStamp(0.494324869723);
    msg.setSource(446U);
    msg.setSourceEntity(14U);
    msg.setDestination(45501U);
    msg.setDestinationEntity(13U);
    msg.severity = 141U;
    msg.text.assign("UWQRPXFIHXYOJNXKMTCTQIXQUZVYPKDLBDBJLHHITFPEWODZWYUWPJSINEVKVKRRQZPAHWGPJYXSCLPGLNLSYDGNKCVVPTCUQMLOKNLYOVLXNUCSTXRNVWOAVDRMAAEMOSQUNJCEFFRSATCDFYSTQRQMKZNJYUVTEEGKLIMBBHQSAPBWZDZGKCFSOYOBMAIUWGNKAQEWSHPGUZGJIZWCXIAFFDMBI");

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
    msg.setTimeStamp(0.368490521124);
    msg.setSource(19461U);
    msg.setSourceEntity(147U);
    msg.setDestination(64317U);
    msg.setDestinationEntity(33U);
    msg.severity = 227U;
    msg.text.assign("RKLQXRDVDHNDKUVLARGLEQZMZBAKNNMUKKKHCLGBSAOOIZHRKKMLGXCQCDHJLROMYNVAGPPWIRBCTGCFQEWFAISYCGVNWRXNSE");

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
    msg.setTimeStamp(0.721102582132);
    msg.setSource(62540U);
    msg.setSourceEntity(143U);
    msg.setDestination(16935U);
    msg.setDestinationEntity(216U);
    msg.severity = 14U;
    msg.text.assign("LQODLBQWQFEVAZ");

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
    msg.setTimeStamp(0.956774832116);
    msg.setSource(37086U);
    msg.setSourceEntity(194U);
    msg.setDestination(55834U);
    msg.setDestinationEntity(210U);
    msg.channel = -77;
    msg.value = 684140254;
    msg.gain = 0U;

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
    msg.setTimeStamp(0.571250041916);
    msg.setSource(45276U);
    msg.setSourceEntity(209U);
    msg.setDestination(18771U);
    msg.setDestinationEntity(28U);
    msg.channel = 116;
    msg.value = 217038725;
    msg.gain = 25U;

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
    msg.setTimeStamp(0.866272622982);
    msg.setSource(2288U);
    msg.setSourceEntity(226U);
    msg.setDestination(54303U);
    msg.setDestinationEntity(247U);
    msg.channel = 30;
    msg.value = -1036606551;
    msg.gain = 179U;

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
    msg.setTimeStamp(0.397982432463);
    msg.setSource(45137U);
    msg.setSourceEntity(245U);
    msg.setDestination(7129U);
    msg.setDestinationEntity(56U);
    msg.ch01 = 0.394513266219;
    msg.ch02 = 0.852647448032;
    msg.ch03 = 0.0784362829668;
    msg.ch04 = 0.719155263326;
    msg.ch05 = 0.536996552444;
    msg.ch06 = 0.625036662906;
    msg.ch07 = 0.153878743622;
    msg.ch08 = 0.391956275728;
    msg.ch09 = 0.728615721317;
    msg.ch10 = 0.374722326039;
    msg.ch11 = 0.192228537717;
    msg.ch12 = 0.337760929587;
    msg.ch13 = 0.762922163413;
    msg.ch14 = 0.184280289457;
    msg.ch15 = 0.0264268291473;
    msg.ch16 = 0.369689751606;

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
    msg.setTimeStamp(0.694340761315);
    msg.setSource(40629U);
    msg.setSourceEntity(66U);
    msg.setDestination(27465U);
    msg.setDestinationEntity(253U);
    msg.ch01 = 0.77637665564;
    msg.ch02 = 0.107484069123;
    msg.ch03 = 0.437959563945;
    msg.ch04 = 0.670785031325;
    msg.ch05 = 0.547036016277;
    msg.ch06 = 0.0929450958128;
    msg.ch07 = 0.189713946474;
    msg.ch08 = 0.458353728639;
    msg.ch09 = 0.936428758235;
    msg.ch10 = 0.86723927256;
    msg.ch11 = 0.183578806452;
    msg.ch12 = 0.831265512917;
    msg.ch13 = 0.278828804765;
    msg.ch14 = 0.436126586169;
    msg.ch15 = 0.205217948125;
    msg.ch16 = 0.630022074819;

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
    msg.setTimeStamp(0.739429119983);
    msg.setSource(31085U);
    msg.setSourceEntity(5U);
    msg.setDestination(4430U);
    msg.setDestinationEntity(179U);
    msg.ch01 = 0.93709837926;
    msg.ch02 = 0.552507294961;
    msg.ch03 = 0.879638249175;
    msg.ch04 = 0.318595060882;
    msg.ch05 = 0.743621425835;
    msg.ch06 = 0.827737663783;
    msg.ch07 = 0.776548203772;
    msg.ch08 = 0.478575546083;
    msg.ch09 = 0.863384921297;
    msg.ch10 = 0.0189423107373;
    msg.ch11 = 0.896682723253;
    msg.ch12 = 0.910733500938;
    msg.ch13 = 0.879015067042;
    msg.ch14 = 0.204673684673;
    msg.ch15 = 0.010778882597;
    msg.ch16 = 0.80629837653;

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
    msg.setTimeStamp(0.352948647043);
    msg.setSource(12286U);
    msg.setSourceEntity(108U);
    msg.setDestination(15134U);
    msg.setDestinationEntity(112U);
    msg.time = 0.730413449146;
    msg.ang = 0.852938729988;

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
    msg.setTimeStamp(0.169829140575);
    msg.setSource(14659U);
    msg.setSourceEntity(236U);
    msg.setDestination(2125U);
    msg.setDestinationEntity(200U);
    msg.time = 0.91886611536;
    msg.ang = 0.495931897343;

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
    msg.setTimeStamp(0.274785093817);
    msg.setSource(37748U);
    msg.setSourceEntity(250U);
    msg.setDestination(18989U);
    msg.setDestinationEntity(14U);
    msg.time = 0.819316837317;
    msg.ang = 0.075874948944;

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
    msg.setTimeStamp(0.0200850173106);
    msg.setSource(37241U);
    msg.setSourceEntity(41U);
    msg.setDestination(52421U);
    msg.setDestinationEntity(163U);
    msg.value = 0.0575414203839;

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
    msg.setTimeStamp(0.10112218881);
    msg.setSource(43355U);
    msg.setSourceEntity(35U);
    msg.setDestination(49292U);
    msg.setDestinationEntity(91U);
    msg.value = 0.186856219021;

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
    msg.setTimeStamp(0.554582182541);
    msg.setSource(47730U);
    msg.setSourceEntity(113U);
    msg.setDestination(509U);
    msg.setDestinationEntity(176U);
    msg.value = 0.987919233809;

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
    msg.setTimeStamp(0.750334392418);
    msg.setSource(50052U);
    msg.setSourceEntity(191U);
    msg.setDestination(33948U);
    msg.setDestinationEntity(8U);
    msg.value = 0.246226306984;

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
    msg.setTimeStamp(0.1440694254);
    msg.setSource(4979U);
    msg.setSourceEntity(190U);
    msg.setDestination(60873U);
    msg.setDestinationEntity(100U);
    msg.value = 0.672709077889;

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
    msg.setTimeStamp(0.698152276157);
    msg.setSource(7720U);
    msg.setSourceEntity(120U);
    msg.setDestination(55403U);
    msg.setDestinationEntity(198U);
    msg.value = 0.816828721779;

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
    msg.setTimeStamp(0.875821716832);
    msg.setSource(57610U);
    msg.setSourceEntity(195U);
    msg.setDestination(32768U);
    msg.setDestinationEntity(45U);
    msg.value = 0.151524701511;

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
    msg.setTimeStamp(0.190673110907);
    msg.setSource(17779U);
    msg.setSourceEntity(18U);
    msg.setDestination(1695U);
    msg.setDestinationEntity(80U);
    msg.value = 0.0673007885422;

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
    msg.setTimeStamp(0.603162255358);
    msg.setSource(64007U);
    msg.setSourceEntity(85U);
    msg.setDestination(31742U);
    msg.setDestinationEntity(29U);
    msg.value = 0.242046375647;

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
    msg.setTimeStamp(0.289652536695);
    msg.setSource(3738U);
    msg.setSourceEntity(10U);
    msg.setDestination(39949U);
    msg.setDestinationEntity(152U);
    msg.l2 = 81;
    msg.l3 = 43;
    msg.iridium = -41;
    msg.modem = -128;
    msg.pumps = -26;
    msg.vhf = -50;

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
    msg.setTimeStamp(0.614905375407);
    msg.setSource(22274U);
    msg.setSourceEntity(171U);
    msg.setDestination(23106U);
    msg.setDestinationEntity(150U);
    msg.l2 = 74;
    msg.l3 = 62;
    msg.iridium = -75;
    msg.modem = -113;
    msg.pumps = -83;
    msg.vhf = 79;

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
    msg.setTimeStamp(0.967224554806);
    msg.setSource(47340U);
    msg.setSourceEntity(130U);
    msg.setDestination(6468U);
    msg.setDestinationEntity(160U);
    msg.l2 = 37;
    msg.l3 = -50;
    msg.iridium = -101;
    msg.modem = -119;
    msg.pumps = -111;
    msg.vhf = -84;

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
    msg.setTimeStamp(0.759444336068);
    msg.setSource(11123U);
    msg.setSourceEntity(243U);
    msg.setDestination(20210U);
    msg.setDestinationEntity(218U);
    msg.angle = 0.383224003685;
    msg.reference.assign("IPRCFCAQYFSYIBGPLYYNPCSCLOXVCZQNAMWWKIRHAVERQRGGLFZGNISDAIDJLBEDYUDGNVHCMBPJH");
    msg.speed = 0.918950339064;

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
    msg.setTimeStamp(0.2926206319);
    msg.setSource(64578U);
    msg.setSourceEntity(189U);
    msg.setDestination(25230U);
    msg.setDestinationEntity(201U);
    msg.angle = 0.059552821945;
    msg.reference.assign("CBXTMEBUDFDFSDQKLVFFJEZWZIWDTJRIJSZHXBNJDYFDMABNZOUQETYMJXCPHVEAJOPIIKGYDETUIRWOSGJFCTLGPNZYUISYLRKPQAIHFKYJEUKOSGYGCRLTMUAKAPEUSVEVCWZBNNCRRIQYHSHNAZXCGUNORNHKLZNSAWMFMTARGTWXOMGDTQQAKMBWHVWBCPMIBSVQWSPKRIXLVEPDBBHKUHQXXGAYUMLWZHVFYPOVFLO");
    msg.speed = 0.602140193939;

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
    msg.setTimeStamp(0.954647347784);
    msg.setSource(54999U);
    msg.setSourceEntity(142U);
    msg.setDestination(20479U);
    msg.setDestinationEntity(183U);
    msg.angle = 0.0481452522231;
    msg.reference.assign("GIATIDEHBMDKWTWBQQWS");
    msg.speed = 0.256815917322;

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
    msg.setTimeStamp(0.479411874601);
    msg.setSource(50285U);
    msg.setSourceEntity(243U);
    msg.setDestination(59878U);
    msg.setDestinationEntity(142U);
    msg.angle = 0.775747152748;
    msg.speed = 0.342932005466;

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
    msg.setTimeStamp(0.185754836039);
    msg.setSource(62889U);
    msg.setSourceEntity(72U);
    msg.setDestination(880U);
    msg.setDestinationEntity(151U);
    msg.angle = 0.716513640215;
    msg.speed = 0.788641569889;

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
    msg.setTimeStamp(0.338126783249);
    msg.setSource(27712U);
    msg.setSourceEntity(179U);
    msg.setDestination(25874U);
    msg.setDestinationEntity(203U);
    msg.angle = 0.703183771158;
    msg.speed = 0.702540776509;

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
    msg.setTimeStamp(0.618181312931);
    msg.setSource(28427U);
    msg.setSourceEntity(114U);
    msg.setDestination(17903U);
    msg.setDestinationEntity(161U);
    msg.dir = 0.438036303925;
    msg.speed = 0.51406597127;

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
    msg.setTimeStamp(0.452111343494);
    msg.setSource(61430U);
    msg.setSourceEntity(104U);
    msg.setDestination(40986U);
    msg.setDestinationEntity(1U);
    msg.dir = 0.723044727651;
    msg.speed = 0.453904033398;

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
    msg.setTimeStamp(0.149996372794);
    msg.setSource(16125U);
    msg.setSourceEntity(33U);
    msg.setDestination(12388U);
    msg.setDestinationEntity(228U);
    msg.dir = 0.237573107477;
    msg.speed = 0.120527519856;

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
    msg.setTimeStamp(0.326262318327);
    msg.setSource(44723U);
    msg.setSourceEntity(80U);
    msg.setDestination(30013U);
    msg.setDestinationEntity(129U);
    msg.x = 0.62380843568;
    msg.y = 0.0794280406722;
    msg.z1 = 0.111478568752;
    msg.z2 = 0.879086382747;

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
    msg.setTimeStamp(0.168265817813);
    msg.setSource(64003U);
    msg.setSourceEntity(46U);
    msg.setDestination(53647U);
    msg.setDestinationEntity(124U);
    msg.x = 0.83461089409;
    msg.y = 0.582362467922;
    msg.z1 = 0.7754261927;
    msg.z2 = 0.867180690031;

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
    msg.setTimeStamp(0.369924647463);
    msg.setSource(8842U);
    msg.setSourceEntity(251U);
    msg.setDestination(57152U);
    msg.setDestinationEntity(34U);
    msg.x = 0.29175861942;
    msg.y = 0.209744036795;
    msg.z1 = 0.917357026577;
    msg.z2 = 0.132546456164;

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
    msg.setTimeStamp(0.724812545868);
    msg.setSource(49308U);
    msg.setSourceEntity(99U);
    msg.setDestination(22502U);
    msg.setDestinationEntity(170U);
    msg.mmsi.assign("KYWRZYJCXNGDFEVJDLIDRNNXYDUIEUWVQDCLGACDFQMESOWXGRVPJNIJLLIYJPRLXMMGRIXOYALRPNHZTBBFMPQZMETHSRYSEIKMNNBMNDZKVGQAZYKFSVFEHVWXIVAXTTCHQNPJEIOLSDPSCQBCSTKGVOQXSGJAFLCFDAWHOAPRTZRSKFULUGOQBWUWOGCNOHPBZMCVJKHLEQBVHXUWEQTBBOFPMTHYTXGWIKURUJU");
    msg.lat = 0.486643521731;
    msg.lon = 0.172011981303;
    msg.x = 0.227724029007;
    msg.y = 0.204800315637;
    msg.speed = 0.0962070697783;
    msg.course = 0.842383473514;
    msg.dist = 0.468363846475;
    msg.length = 0.808897431519;
    msg.width = 0.366547928154;
    msg.o_vect = 0.702657790335;

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
    msg.setTimeStamp(0.285987376528);
    msg.setSource(60443U);
    msg.setSourceEntity(254U);
    msg.setDestination(8467U);
    msg.setDestinationEntity(183U);
    msg.mmsi.assign("QXZPHFWNXEZMTYUVNBIYRBLOASLBQOXNLSLEJEYTIEAFUGASSYGHPUCPHGPZFYNTEKUITZGJ");
    msg.lat = 0.0708406442415;
    msg.lon = 0.251125305155;
    msg.x = 0.0460333097914;
    msg.y = 0.574574979643;
    msg.speed = 0.666585144059;
    msg.course = 0.44696537405;
    msg.dist = 0.940331874452;
    msg.length = 0.593875777648;
    msg.width = 0.514475156581;
    msg.o_vect = 0.427398983755;

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
    msg.setTimeStamp(0.569592312405);
    msg.setSource(36918U);
    msg.setSourceEntity(219U);
    msg.setDestination(42921U);
    msg.setDestinationEntity(109U);
    msg.mmsi.assign("XKKNJACHAGOCNOOILLRTRKFBGAYMVXODKBPEOUJIEOGQYEPYYJREAPNAZYYVEHRZGXBODHBXAWMNIVIJBUTTIBTDTCOAAPOTPNPKFLEGQSWHDPIUVVMNVBKQCDJAKRXXTUBLEXNZSHUJFRUXTIYEMDQEML");
    msg.lat = 0.240852189702;
    msg.lon = 0.025691176562;
    msg.x = 0.719475232871;
    msg.y = 0.820300818445;
    msg.speed = 0.0411890820625;
    msg.course = 0.797376820751;
    msg.dist = 0.721469001229;
    msg.length = 0.491760419224;
    msg.width = 0.424997236364;
    msg.o_vect = 0.77337722422;

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
    msg.setTimeStamp(0.970608756936);
    msg.setSource(30186U);
    msg.setSourceEntity(202U);
    msg.setDestination(41698U);
    msg.setDestinationEntity(177U);
    msg.locations.assign("FVUASCOIUGTXWSIUFFOJCSQENBJEFAXJBNXQJUMSBJPNTCOYPHTKTVUEXNQQDRWERYHQTFOYVFUIAEPHLSRP");

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
    msg.setTimeStamp(0.838961537623);
    msg.setSource(20902U);
    msg.setSourceEntity(59U);
    msg.setDestination(39492U);
    msg.setDestinationEntity(155U);
    msg.locations.assign("CCALVSYURYPUEUZQTPBTXTUJFMZWFHBXCJXDCZGKBCUMFESHZMIMBGTAAHPEZERP");

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
    msg.setTimeStamp(0.601766476339);
    msg.setSource(52681U);
    msg.setSourceEntity(121U);
    msg.setDestination(25830U);
    msg.setDestinationEntity(138U);
    msg.locations.assign("IWEVSXWUIUMBPQABDXUQOFLHGFOQNSSOBUCMPKCKWNMYYBJERZBXLVRJFONLWGBKZOWPTFFQWYEKD");

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
    msg.setTimeStamp(0.474128190545);
    msg.setSource(23063U);
    msg.setSourceEntity(108U);
    msg.setDestination(483U);
    msg.setDestinationEntity(129U);
    msg.value = 0.00935174245924;

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
    msg.setTimeStamp(0.934098832131);
    msg.setSource(8160U);
    msg.setSourceEntity(64U);
    msg.setDestination(47054U);
    msg.setDestinationEntity(185U);
    msg.value = 0.538516826514;

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
    msg.setTimeStamp(0.909380179811);
    msg.setSource(34993U);
    msg.setSourceEntity(236U);
    msg.setDestination(233U);
    msg.setDestinationEntity(112U);
    msg.value = 0.0282591928385;

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
    msg.setTimeStamp(0.402751163529);
    msg.setSource(34798U);
    msg.setSourceEntity(47U);
    msg.setDestination(64949U);
    msg.setDestinationEntity(142U);
    msg.beam1 = 0.0983389936513;
    msg.beam2 = 0.984577873575;
    msg.beam3 = 0.520966375253;
    msg.beam4 = 0.20317524297;

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
    msg.setTimeStamp(0.767803019404);
    msg.setSource(10687U);
    msg.setSourceEntity(189U);
    msg.setDestination(31949U);
    msg.setDestinationEntity(235U);
    msg.beam1 = 0.101926498035;
    msg.beam2 = 0.124751291389;
    msg.beam3 = 0.488139729358;
    msg.beam4 = 0.0218999809394;

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
    msg.setTimeStamp(0.480841693982);
    msg.setSource(20124U);
    msg.setSourceEntity(150U);
    msg.setDestination(63157U);
    msg.setDestinationEntity(54U);
    msg.beam1 = 0.663485662138;
    msg.beam2 = 0.81414619711;
    msg.beam3 = 0.941738221159;
    msg.beam4 = 0.762794381663;

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
    msg.setTimeStamp(0.134068944719);
    msg.setSource(4265U);
    msg.setSourceEntity(227U);
    msg.setDestination(26407U);
    msg.setDestinationEntity(128U);
    msg.beam1 = 85U;
    msg.beam2 = 157U;
    msg.beam3 = 119U;
    msg.beam4 = 177U;

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
    msg.setTimeStamp(0.462856558401);
    msg.setSource(40210U);
    msg.setSourceEntity(76U);
    msg.setDestination(35753U);
    msg.setDestinationEntity(188U);
    msg.beam1 = 127U;
    msg.beam2 = 129U;
    msg.beam3 = 177U;
    msg.beam4 = 60U;

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
    msg.setTimeStamp(0.139409856341);
    msg.setSource(30401U);
    msg.setSourceEntity(20U);
    msg.setDestination(33662U);
    msg.setDestinationEntity(128U);
    msg.beam1 = 170U;
    msg.beam2 = 169U;
    msg.beam3 = 167U;
    msg.beam4 = 115U;

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
    msg.setTimeStamp(0.982805547401);
    msg.setSource(45325U);
    msg.setSourceEntity(92U);
    msg.setDestination(37249U);
    msg.setDestinationEntity(252U);
    msg.pos = 0.44941108743;
    IMC::ADCPBeam tmp_msg_0;
    tmp_msg_0.vel = 0.335184119371;
    tmp_msg_0.amp = 0.321880385243;
    tmp_msg_0.cor = 219U;
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
    msg.setTimeStamp(0.712942587342);
    msg.setSource(58900U);
    msg.setSourceEntity(144U);
    msg.setDestination(50497U);
    msg.setDestinationEntity(4U);
    msg.pos = 0.318968688461;
    IMC::ADCPBeam tmp_msg_0;
    tmp_msg_0.vel = 0.122057364308;
    tmp_msg_0.amp = 0.896583038582;
    tmp_msg_0.cor = 81U;
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
    msg.setTimeStamp(0.889716384852);
    msg.setSource(43922U);
    msg.setSourceEntity(147U);
    msg.setDestination(51946U);
    msg.setDestinationEntity(123U);
    msg.pos = 0.8466793973;

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
    msg.setTimeStamp(0.44599640974);
    msg.setSource(17692U);
    msg.setSourceEntity(3U);
    msg.setDestination(64779U);
    msg.setDestinationEntity(204U);
    msg.beams = 63U;
    msg.cells = 172U;
    msg.coord_sys = 74U;

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
    msg.setTimeStamp(0.373080843239);
    msg.setSource(45204U);
    msg.setSourceEntity(166U);
    msg.setDestination(59660U);
    msg.setDestinationEntity(42U);
    msg.beams = 120U;
    msg.cells = 201U;
    msg.coord_sys = 123U;
    IMC::CurrentProfileCell tmp_msg_0;
    tmp_msg_0.pos = 0.500867549146;
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
    msg.setTimeStamp(0.902134732848);
    msg.setSource(63359U);
    msg.setSourceEntity(78U);
    msg.setDestination(52202U);
    msg.setDestinationEntity(140U);
    msg.beams = 176U;
    msg.cells = 222U;
    msg.coord_sys = 138U;
    IMC::CurrentProfileCell tmp_msg_0;
    tmp_msg_0.pos = 0.0610180621235;
    IMC::ADCPBeam tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.vel = 0.44060425638;
    tmp_tmp_msg_0_0.amp = 0.0932145064298;
    tmp_tmp_msg_0_0.cor = 24U;
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
    msg.setTimeStamp(0.259052919918);
    msg.setSource(45850U);
    msg.setSourceEntity(140U);
    msg.setDestination(29169U);
    msg.setDestinationEntity(123U);
    msg.vel = 0.00462178121679;
    msg.amp = 0.381160598986;
    msg.cor = 182U;

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
    msg.setTimeStamp(0.386059750176);
    msg.setSource(730U);
    msg.setSourceEntity(248U);
    msg.setDestination(51559U);
    msg.setDestinationEntity(6U);
    msg.vel = 0.74404741974;
    msg.amp = 0.576250289155;
    msg.cor = 144U;

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
    msg.setTimeStamp(0.193647806627);
    msg.setSource(63685U);
    msg.setSourceEntity(19U);
    msg.setDestination(31387U);
    msg.setDestinationEntity(6U);
    msg.vel = 0.248509085386;
    msg.amp = 0.0938161092925;
    msg.cor = 5U;

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
    msg.setTimeStamp(0.891363875063);
    msg.setSource(37632U);
    msg.setSourceEntity(144U);
    msg.setDestination(27630U);
    msg.setDestinationEntity(161U);
    msg.serial_no = 2032860492U;
    msg.unix_timestamp = 1449754487U;
    msg.millis = 60479U;
    msg.trans_protocol = 108U;
    msg.trans_id = 2392435260U;
    msg.trans_data = 5878U;
    msg.snr = 146U;
    msg.trans_freq = 50U;
    msg.recv_mem_addr = 53197U;
    msg.lat = 0.820791545703;
    msg.lon = 0.379949341095;

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
    msg.setTimeStamp(0.975809580591);
    msg.setSource(2646U);
    msg.setSourceEntity(72U);
    msg.setDestination(5557U);
    msg.setDestinationEntity(96U);
    msg.serial_no = 3183386761U;
    msg.unix_timestamp = 2339038298U;
    msg.millis = 60469U;
    msg.trans_protocol = 218U;
    msg.trans_id = 179073964U;
    msg.trans_data = 25506U;
    msg.snr = 74U;
    msg.trans_freq = 133U;
    msg.recv_mem_addr = 22440U;
    msg.lat = 0.0499845051743;
    msg.lon = 0.57449929104;

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
    msg.setTimeStamp(0.844143470624);
    msg.setSource(6406U);
    msg.setSourceEntity(133U);
    msg.setDestination(34094U);
    msg.setDestinationEntity(203U);
    msg.serial_no = 2048013853U;
    msg.unix_timestamp = 4121331911U;
    msg.millis = 23532U;
    msg.trans_protocol = 128U;
    msg.trans_id = 3587757660U;
    msg.trans_data = 63192U;
    msg.snr = 228U;
    msg.trans_freq = 154U;
    msg.recv_mem_addr = 16991U;
    msg.lat = 0.956477549641;
    msg.lon = 0.120217214719;

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
    msg.setTimeStamp(0.726090801715);
    msg.setSource(49980U);
    msg.setSourceEntity(155U);
    msg.setDestination(49951U);
    msg.setDestinationEntity(144U);
    msg.serial_no = 887256926U;
    msg.unix_timestamp = 1364582105U;
    msg.temperature = 0.715363160585;
    msg.avg_noise_level = 192U;
    msg.peak_noise_level = 23U;
    msg.recv_listen_freq = 251U;
    msg.recv_mem_addr = 36533U;

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
    msg.setTimeStamp(0.630048870243);
    msg.setSource(51469U);
    msg.setSourceEntity(73U);
    msg.setDestination(5101U);
    msg.setDestinationEntity(38U);
    msg.serial_no = 4227671237U;
    msg.unix_timestamp = 2084102023U;
    msg.temperature = 0.732994177841;
    msg.avg_noise_level = 17U;
    msg.peak_noise_level = 218U;
    msg.recv_listen_freq = 214U;
    msg.recv_mem_addr = 50269U;

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
    msg.setTimeStamp(0.842140591683);
    msg.setSource(25585U);
    msg.setSourceEntity(89U);
    msg.setDestination(39750U);
    msg.setDestinationEntity(153U);
    msg.serial_no = 2104546487U;
    msg.unix_timestamp = 460580551U;
    msg.temperature = 0.147333088783;
    msg.avg_noise_level = 181U;
    msg.peak_noise_level = 153U;
    msg.recv_listen_freq = 4U;
    msg.recv_mem_addr = 9128U;

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
    msg.setTimeStamp(0.557518446037);
    msg.setSource(6040U);
    msg.setSourceEntity(8U);
    msg.setDestination(7370U);
    msg.setDestinationEntity(144U);
    msg.frequency = 1812711019U;
    msg.info.assign("JRFNMEQFRJHAGUVWTNVBNDWJNXPNLHOLCNBKGQPJZWVFGEQZDYXOOIQWOGSWQMLYJQCIVKVHLRXFNOWRHYURMCKZDWYCGLIPXVSWLNAXIXTTWMHFHYCEVLJDINTBMCUDLITJMWAHPGDSHSFZDXDOIJIASRMGIDJPAUOPAVKIEMEOZEYABLAQCYUUVTMBHFSRFZMEBTBRKCUKLOUPKQXSAYOQNEXPKS");

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
    msg.setTimeStamp(0.18576940546);
    msg.setSource(49306U);
    msg.setSourceEntity(249U);
    msg.setDestination(17850U);
    msg.setDestinationEntity(157U);
    msg.frequency = 3827806763U;
    msg.info.assign("MSBZUZKIOWYNWUJSPYOGTMEHTKXXAAEPBTMSYLNASAYNRKBSCDXQRIAAKPXBZPVETOJBXZLQLEGRJWZBPQRLIH");

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
    msg.setTimeStamp(0.97893785264);
    msg.setSource(37512U);
    msg.setSourceEntity(240U);
    msg.setDestination(44404U);
    msg.setDestinationEntity(107U);
    msg.frequency = 3631033177U;
    msg.info.assign("ONVTSDFZKPVOGGXEUOPEGJINYLPVJKNXJSBEJLFGDVRDUGZAQHGBIBJMJYMRURXUPXOQSJYDNHRAMXNZESGUTYUZFCHCHQQMWNFTRWINPZBYFYWLAEMIKPWMBSAFDXZWXKUHWLSFOHPLREIRGJUKFJBVDIKGTYAMIDZQSVWWYXSOCKFBBWYAZLACVQILEUV");

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
    msg.setTimeStamp(0.881927254673);
    msg.setSource(41963U);
    msg.setSourceEntity(235U);
    msg.setDestination(23043U);
    msg.setDestinationEntity(54U);
    msg.adcp = 107;
    msg.adcp_dur = 2152485815U;
    msg.adcp_fr = 3258770161U;
    msg.ctd = 32;
    msg.ctd_dur = 3586602647U;
    msg.ctd_fr = 4269110689U;
    msg.opt = 0;
    msg.opt_dur = 314436124U;
    msg.opt_fr = 1009015318U;
    msg.tbl = 49;
    msg.tbl_dur = 3416813461U;
    msg.tbl_fr = 1418323222U;
    msg.eco = -24;
    msg.eco_dur = 1640753983U;
    msg.eco_fr = 1839909353U;
    msg.par = -103;
    msg.par_dur = 2817357023U;
    msg.par_fr = 2528734670U;

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
    msg.setTimeStamp(0.356930197879);
    msg.setSource(61709U);
    msg.setSourceEntity(114U);
    msg.setDestination(15071U);
    msg.setDestinationEntity(65U);
    msg.adcp = 75;
    msg.adcp_dur = 1847152240U;
    msg.adcp_fr = 533801606U;
    msg.ctd = -76;
    msg.ctd_dur = 1729052822U;
    msg.ctd_fr = 562564303U;
    msg.opt = 53;
    msg.opt_dur = 726584899U;
    msg.opt_fr = 3733014761U;
    msg.tbl = -97;
    msg.tbl_dur = 1408546773U;
    msg.tbl_fr = 530655641U;
    msg.eco = 10;
    msg.eco_dur = 2549525426U;
    msg.eco_fr = 3462833325U;
    msg.par = 101;
    msg.par_dur = 4271930952U;
    msg.par_fr = 565895720U;

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
    msg.setTimeStamp(0.491587676402);
    msg.setSource(9887U);
    msg.setSourceEntity(134U);
    msg.setDestination(6864U);
    msg.setDestinationEntity(202U);
    msg.adcp = -14;
    msg.adcp_dur = 3228434992U;
    msg.adcp_fr = 1514422236U;
    msg.ctd = 15;
    msg.ctd_dur = 679810503U;
    msg.ctd_fr = 1885390502U;
    msg.opt = 77;
    msg.opt_dur = 2802629065U;
    msg.opt_fr = 1496411841U;
    msg.tbl = -86;
    msg.tbl_dur = 490658002U;
    msg.tbl_fr = 3387254496U;
    msg.eco = -23;
    msg.eco_dur = 145814295U;
    msg.eco_fr = 43498845U;
    msg.par = -40;
    msg.par_dur = 2621286452U;
    msg.par_fr = 2479555487U;

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
    msg.setTimeStamp(0.113471835058);
    msg.setSource(18851U);
    msg.setSourceEntity(89U);
    msg.setDestination(9245U);
    msg.setDestinationEntity(209U);
    msg.adcp = 101;
    msg.adcp_dur = 806494763U;
    msg.adcp_fr = 3877947765U;
    msg.ctd = 9;
    msg.ctd_dur = 1648149197U;
    msg.ctd_fr = 2961107104U;
    msg.opt = 82;
    msg.opt_dur = 3665819567U;
    msg.opt_fr = 556272567U;
    msg.tbl = 41;
    msg.tbl_dur = 3505004098U;
    msg.tbl_fr = 1178600046U;
    msg.eco = 87;
    msg.eco_dur = 4254022135U;
    msg.eco_fr = 1446556064U;
    msg.par = -112;
    msg.par_dur = 2608354645U;
    msg.par_fr = 2520281579U;

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
    msg.setTimeStamp(0.858053503753);
    msg.setSource(907U);
    msg.setSourceEntity(150U);
    msg.setDestination(23508U);
    msg.setDestinationEntity(104U);
    msg.adcp = -90;
    msg.adcp_dur = 3625604556U;
    msg.adcp_fr = 3838680090U;
    msg.ctd = 105;
    msg.ctd_dur = 2170940933U;
    msg.ctd_fr = 1354817179U;
    msg.opt = 75;
    msg.opt_dur = 2077850247U;
    msg.opt_fr = 3021712180U;
    msg.tbl = -124;
    msg.tbl_dur = 3658680012U;
    msg.tbl_fr = 3342979567U;
    msg.eco = 103;
    msg.eco_dur = 1401982935U;
    msg.eco_fr = 1202601151U;
    msg.par = -48;
    msg.par_dur = 3327393309U;
    msg.par_fr = 3974313684U;

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
    msg.setTimeStamp(0.762002723846);
    msg.setSource(18599U);
    msg.setSourceEntity(207U);
    msg.setDestination(40138U);
    msg.setDestinationEntity(186U);
    msg.adcp = 89;
    msg.adcp_dur = 1961161222U;
    msg.adcp_fr = 1766992518U;
    msg.ctd = -39;
    msg.ctd_dur = 1635620271U;
    msg.ctd_fr = 1985129743U;
    msg.opt = 117;
    msg.opt_dur = 1380027700U;
    msg.opt_fr = 987914337U;
    msg.tbl = -68;
    msg.tbl_dur = 4272287819U;
    msg.tbl_fr = 1357275276U;
    msg.eco = 84;
    msg.eco_dur = 2159042636U;
    msg.eco_fr = 225601853U;
    msg.par = -54;
    msg.par_dur = 1119559545U;
    msg.par_fr = 3801685022U;

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
    msg.setTimeStamp(0.976503457351);
    msg.setSource(9626U);
    msg.setSourceEntity(160U);
    msg.setDestination(58309U);
    msg.setDestinationEntity(191U);
    msg.value = 0.38891505344;

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
    msg.setTimeStamp(0.873645355141);
    msg.setSource(49816U);
    msg.setSourceEntity(137U);
    msg.setDestination(62449U);
    msg.setDestinationEntity(149U);
    msg.value = 0.566236858807;

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
    msg.setTimeStamp(0.793422701568);
    msg.setSource(10807U);
    msg.setSourceEntity(146U);
    msg.setDestination(47593U);
    msg.setDestinationEntity(142U);
    msg.value = 0.319632984416;

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
    msg.setTimeStamp(0.983792739165);
    msg.setSource(13322U);
    msg.setSourceEntity(101U);
    msg.setDestination(12126U);
    msg.setDestinationEntity(252U);
    msg.lat = 0.179002982987;
    msg.lon = 0.190143323909;
    msg.depth.assign("FJMEODNWAQOQGHANZULPUMGYQDNQCRHPUTRVJNUKLHUSOSMLFFTEPRQLAIJLNDWZUOAHBNDBRYKBIGRLMQOSLEQBLYKJZRYMZIOZXSYCCXUJLIRGXWEMWOCVGVJXYVERDUTOBLFTMNDDWJISDZCAPITVAKOYVYJSNXSCCJZHKBXPGYZPSWVCFKGFRCBKTEEHWXRTSPMEBKDQPXCFOAKWBAFHTIEAUXVYQIVFPNANZIGQVUTESZBWIHWPXDJMH");
    msg.vel.assign("SGYNZEPJEGJYVCOZSQHBLKKUCIHHINDQYJQZEBDPBTGHBJYOBMBCCWJNXWKSMTXKEMIVLRHRUEXSWWWLQYSPGOWDBFQPRIVLUVDLETMSKTZGMYOPKFAMEPTSQJNTGMKAFBWZRSRUFWROHJKHBGMGIQCRXCQVTXLLTUIDXKUAINXKCVOOUAFYRZOAOICFCWLAOFALRAP");
    msg.dir.assign("CKKPIVROBKJZPDZQEELDXSIHMQITTFXWETDNHHWBWSRFENKDLQLHEOPGIGQZZPERAOSJENPLBJFBHTZRUCDKVATRRLTSTRBUGBWVGYVNUUQTCMPDHKHOLYAHFBZAYYTMJYMUZX");

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
    msg.setTimeStamp(0.896327029181);
    msg.setSource(41397U);
    msg.setSourceEntity(118U);
    msg.setDestination(42483U);
    msg.setDestinationEntity(36U);
    msg.lat = 0.493534091668;
    msg.lon = 0.138430571759;
    msg.depth.assign("FCPEXUUBQTZZRSHGJIGJMQUDDVOOVAZTLFWYENIKFHAMSNMDLXKOEKDJEYGMPPXEYQRVDUSOZARHPJRJAXVMXIGZMTL");
    msg.vel.assign("OPWRIHJUXKJZUYSRBTMBLNTLLWINPUCGQWPEQASFODGBKDCORMUIHCFRGJIGAAGLUODEGWNJMDJADVVGZFCEDSDVJMMYYOYLNKBBBSVRKEKKLUKLIMFBAQTTCVCSYZNONHJHBAFRYAUYRFLQGSXPSPCTSZVWIZKGWWPHFQQCELNZFRSGVIIJHORF");
    msg.dir.assign("XWZMXQERYZDEMVXBYZCACMGMOHPIIEWLUWCPEFLHUMXKLVRHUKXPZTDCFWLXPUHBJEADNJJKQPXBZMFYNVNDVTKRWKBJSDOCWRYFO");

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
    msg.setTimeStamp(0.229766702547);
    msg.setSource(60984U);
    msg.setSourceEntity(238U);
    msg.setDestination(44955U);
    msg.setDestinationEntity(157U);
    msg.lat = 0.506091029492;
    msg.lon = 0.0322734381598;
    msg.depth.assign("CICXOKRMUVTXPJKGSOBZJWHCVWCPBIXYGVCBYDURRXCLPTZPYACFWIIBJPVOFARMDJMLPHFNKWXOOULNEWQYIEDKDGEDDVQHISOUXILZOLCWZGVKNQFUQNQZDZSDMYSYCKKFESNJQJBTYCMEWBFTSGUAXBRUFLTLHVWAIKNRQIUHFYANPVGSTGDOXGUXEHANEYMHFDUHLHQEAZQMZ");
    msg.vel.assign("UKTMMFSFJMENHGO");
    msg.dir.assign("XJNQKZBPKYDVVIIWGCZMJOOSXUMAAHVL");

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
    msg.setTimeStamp(0.764863363869);
    msg.setSource(4004U);
    msg.setSourceEntity(178U);
    msg.setDestination(9962U);
    msg.setDestinationEntity(68U);
    msg.source.assign("VPPRJBYGHWUTFCPEKZMEZXPJKKXIEVAUOLCXBEPRNKHIDYQEXLBASDHNXREFQLFGZJWKCTWRBFUYXXHAMKRVCDUMMEPPOZFJQBYHQBZLOAVJMDZCGWDWBIFTWZXDIUIOWNAVYKTOJPCRSRAMLVDNNOITHKWNER");
    msg.lat = 0.804894339442;
    msg.lon = 0.865134599207;
    msg.sog = 0.832766431974;
    msg.uc = 0.0192633808838;
    msg.depth = 0.474055103963;
    msg.value = 0.897115197709;

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
    msg.setTimeStamp(0.730537090538);
    msg.setSource(47715U);
    msg.setSourceEntity(118U);
    msg.setDestination(23481U);
    msg.setDestinationEntity(77U);
    msg.source.assign("YFOZWONXWYEFPSRZQMNBTQABQTHEIGQZSOQOGKAREZUNHMHKZUZAORDWIMJSRBMTOSXNYDSLLZT");
    msg.lat = 0.269159628006;
    msg.lon = 0.909112683132;
    msg.sog = 0.0851959348851;
    msg.uc = 0.226513922985;
    msg.depth = 0.221505577589;
    msg.value = 0.43540029141;

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
    msg.setTimeStamp(0.9694116271);
    msg.setSource(37605U);
    msg.setSourceEntity(20U);
    msg.setDestination(37022U);
    msg.setDestinationEntity(169U);
    msg.source.assign("ZOCRRZENEEBWLJWNJVPPCCROOCTBKTDUNXSQGIKYLBRCQC");
    msg.lat = 0.849645318454;
    msg.lon = 0.938625595831;
    msg.sog = 0.039190615669;
    msg.uc = 0.422075568553;
    msg.depth = 0.972184247698;
    msg.value = 0.723277707386;

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
    msg.setTimeStamp(0.891084017417);
    msg.setSource(26580U);
    msg.setSourceEntity(229U);
    msg.setDestination(14953U);
    msg.setDestinationEntity(104U);
    IMC::Acceleration tmp_msg_0;
    tmp_msg_0.time = 0.22697228184;
    tmp_msg_0.x = 0.823868342049;
    tmp_msg_0.y = 0.59712516771;
    tmp_msg_0.z = 0.149777952889;
    msg.acceleration.set(tmp_msg_0);
    IMC::AngularVelocity tmp_msg_1;
    tmp_msg_1.time = 0.989802525368;
    tmp_msg_1.x = 0.625188398774;
    tmp_msg_1.y = 0.709286028568;
    tmp_msg_1.z = 0.904473500132;
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
    msg.setTimeStamp(0.206169834896);
    msg.setSource(30053U);
    msg.setSourceEntity(91U);
    msg.setDestination(54100U);
    msg.setDestinationEntity(138U);
    IMC::Acceleration tmp_msg_0;
    tmp_msg_0.time = 0.37992530548;
    tmp_msg_0.x = 0.772321585616;
    tmp_msg_0.y = 0.363012594394;
    tmp_msg_0.z = 0.903277287177;
    msg.acceleration.set(tmp_msg_0);
    IMC::AngularVelocity tmp_msg_1;
    tmp_msg_1.time = 0.846722179962;
    tmp_msg_1.x = 0.571123833478;
    tmp_msg_1.y = 0.867301683674;
    tmp_msg_1.z = 0.288351374889;
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
    msg.setTimeStamp(0.590225164907);
    msg.setSource(38944U);
    msg.setSourceEntity(17U);
    msg.setDestination(5333U);
    msg.setDestinationEntity(39U);
    IMC::Acceleration tmp_msg_0;
    tmp_msg_0.time = 0.830664263344;
    tmp_msg_0.x = 0.756758732124;
    tmp_msg_0.y = 0.829489407577;
    tmp_msg_0.z = 0.643834793059;
    msg.acceleration.set(tmp_msg_0);
    IMC::AngularVelocity tmp_msg_1;
    tmp_msg_1.time = 0.882964201607;
    tmp_msg_1.x = 0.610837624947;
    tmp_msg_1.y = 0.426956834384;
    tmp_msg_1.z = 0.410793310061;
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

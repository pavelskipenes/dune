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
// IMC XML MD5: 524dbc97028101949af1a079da5b2e62                            *
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
    msg.setTimeStamp(0.818741118468);
    msg.setSource(2329U);
    msg.setSourceEntity(173U);
    msg.setDestination(8957U);
    msg.setDestinationEntity(241U);
    msg.state = 83U;
    msg.flags = 20U;
    msg.description.assign("FFKSVVHLEALIZMSUAOIFWUWZTTJBPGDXOFISKXJSMTHXUZGVXGYNZQBMJUTHTPKQZBQSBPXDGOBRAOSWQCLUIGIWOXEFSRZMVKAAKRVNOLGNYXGYMLYPLLNTHXJDPFKNDNCZKBAIFYCETOPXXUUAVHMVPGRMOWAHCNJYWRBARZLERUENIYRVPWWQWNWJNMBQGF");

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
    msg.setTimeStamp(0.323395170521);
    msg.setSource(4699U);
    msg.setSourceEntity(60U);
    msg.setDestination(4374U);
    msg.setDestinationEntity(152U);
    msg.state = 136U;
    msg.flags = 86U;
    msg.description.assign("UUIONAPIZXTIHWYCZYVBCOXXNGYJGRFBZKRHIKHPCTVMZNJOLYWNLVAPXAXJXGTILEJWBMEKXGKZDLOBGTIPURKNLFJQSESLFCBMEJARGIKREDPERUCOQKAYNLBQLCMJVQPJQXYEQVCBOBAHTWLFZMQUOQTINCNZRYZKTRWD");

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
    msg.setTimeStamp(0.895977874286);
    msg.setSource(44419U);
    msg.setSourceEntity(142U);
    msg.setDestination(18971U);
    msg.setDestinationEntity(212U);
    msg.state = 206U;
    msg.flags = 18U;
    msg.description.assign("HZCSKHQDTCGOLNSWVPKZUMNFYVTHQSFESEIABCEDDXRAIJCOQUXFEJJVFDFYDXXYNFELQNWNKTLBITBBZSOW");

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
    msg.setTimeStamp(0.232027376925);
    msg.setSource(26721U);
    msg.setSourceEntity(104U);
    msg.setDestination(9981U);
    msg.setDestinationEntity(72U);

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
    msg.setTimeStamp(0.260127853986);
    msg.setSource(36383U);
    msg.setSourceEntity(121U);
    msg.setDestination(34150U);
    msg.setDestinationEntity(113U);

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
    msg.setTimeStamp(0.236520357922);
    msg.setSource(30949U);
    msg.setSourceEntity(250U);
    msg.setDestination(45396U);
    msg.setDestinationEntity(246U);

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
    msg.setTimeStamp(0.171867592098);
    msg.setSource(13226U);
    msg.setSourceEntity(155U);
    msg.setDestination(50002U);
    msg.setDestinationEntity(227U);
    msg.id = 157U;
    msg.label.assign("ZZDSLURWPCHIXDFNNESAQFOTFFZJTEYCURIUFGYUYXBPSWINFUNDCWPOANSZZNMWCKGMMDIDXUVOTUOCAEQVPUMHHMWPOQARWCEJDXDBKBZQETVHRPXGIVBXRLKNKOYUXXK");
    msg.component.assign("XJVAWSTOOVPGFHAFBJSSWKTJZHYDGATQCPXVNRRIFQUWLYSCAFBTYRKGQAVUDYHBHSGGAATRXLPHKKGUVJPBPWIXKEKTDZWQBOEMRJEMXNULFNIGQHEGPDVVXECNHZOKMCPIMWSXLXISTKECLMQFOSAARLTKLKOZJFENZWMUFUHNYREPBSIORPUDNBZZ");
    msg.act_time = 36753U;
    msg.deact_time = 2542U;

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
    msg.setTimeStamp(0.635534276883);
    msg.setSource(41022U);
    msg.setSourceEntity(165U);
    msg.setDestination(47464U);
    msg.setDestinationEntity(116U);
    msg.id = 92U;
    msg.label.assign("ISYAPQATCIQFKBZRGTORTRFSXQXWXZZJTOOMBLUQWZCJZWUAIMQCSVORNWDUFPKLESBBYXPLVACTGYGHFHMGXOVPXZJULSPAWNQFGYJTISWTDGKMVASDSWHXBUUVQFFRKBDLOZNVCFDNFOLJHMCXAZHMYWCRZHOEEVMJSDESQMQEEQMCNUDMPOKFLNCGXUEJJNPGKJULGGLIAPYDRTPILYAODKNWZKTBBRYIYIRB");
    msg.component.assign("QZSKLCBDOXWNOVYPVQDAAMEUDIOCERZWKCVUPBTJGWKHHHVVPCPRMKSNSPMMMHJKCZBQTXSJZIRKHUECDJJFNZLQPQOTCDUROLMAZFTYXYGXFWEUKEFYIHNBHEAJPQALGYZIBQUCHNLWGNNVJSXDORLSCAWILHTJXKLKAQRIQJGRUIETSGGJAOEXVWFGUDMGASFQYPVZZRNWSBULBDNFGTMFXOSRNHYFCFBUXYYETIRKBZAMIVTYWVD");
    msg.act_time = 45691U;
    msg.deact_time = 12079U;

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
    msg.setTimeStamp(0.611466866919);
    msg.setSource(43823U);
    msg.setSourceEntity(102U);
    msg.setDestination(48856U);
    msg.setDestinationEntity(154U);
    msg.id = 6U;
    msg.label.assign("MQDRYKXLOWKZCAANSISDBVCYQYRXYVFDHJXFCPTTACERROFHAJXJGGITLYYQIVUPNZEIVQNPORUWXJBEDFMTJQWWGHCSJYJSPLBEITVXLFULCOKDMKTNNBWPKWGFHNZARJBUKEATQMGPLDVWGKFVUWGHSIMUBABWBAFRGHOVGXEQXNTCMERVTOFB");
    msg.component.assign("EIAIFDKRYQVHNJPJEKMSCLUAJRFVHSNBLCWYCZUGKKROAOPJECSXIXRCXTOOSDABIOYEJQLUZPUVXFGDXQHVAFDMMMVLTBXTXSWGLBVAQZTWFRDWHJUNZYCNDNYVZYTKIIBOIHGYOPSGDBZTYGMTJLGABWFNGVCPWK");
    msg.act_time = 18766U;
    msg.deact_time = 11637U;

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
    msg.setTimeStamp(0.975036623133);
    msg.setSource(8542U);
    msg.setSourceEntity(122U);
    msg.setDestination(24717U);
    msg.setDestinationEntity(43U);
    msg.id = 7U;

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
    msg.setTimeStamp(0.209201432255);
    msg.setSource(60846U);
    msg.setSourceEntity(125U);
    msg.setDestination(1332U);
    msg.setDestinationEntity(129U);
    msg.id = 223U;

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
    msg.setTimeStamp(0.881966363392);
    msg.setSource(44990U);
    msg.setSourceEntity(197U);
    msg.setDestination(10552U);
    msg.setDestinationEntity(254U);
    msg.id = 19U;

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
    msg.setTimeStamp(0.249329001813);
    msg.setSource(30765U);
    msg.setSourceEntity(173U);
    msg.setDestination(39985U);
    msg.setDestinationEntity(245U);
    msg.op = 178U;
    msg.list.assign("EWQCBYBYISFRMSSTROAVNORPSJTIUHJQUSGBFRGBNDZUSBIWIOUQTTCMWTCVNRPEGEMLNMQXZIAELAXREPFVGZFUHPWZEDLYSWURXBKMVDOADNMIKWHYXJDXWRRTYHYLFFICBBWLWTFJQPZPNFBDJAAMFOAHVAHKGXNGQOPEZYTPVWPCYGKKDQJKGEIFCLLHCMUOYZXKKTLDQ");

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
    msg.setTimeStamp(0.942745989623);
    msg.setSource(24841U);
    msg.setSourceEntity(252U);
    msg.setDestination(61525U);
    msg.setDestinationEntity(163U);
    msg.op = 7U;
    msg.list.assign("JLEPSAGZSNRDCXZALBIVWIDCBQYIRQQLBRQFKZQXJRWGOOWVSCXYCTYQWKQXBLEMHGHQUICAFSVXNUMFJDZNEXUEDWZGPKEZUFUZNFAPTHXFTHRVUETGCTBOHYSNKVPWAGBZSZWHRPWJSNSIPFVUDRYLUCYJVYZNMIYMFSOEMLDPDBFYFPGWIYRCOGIJVMRPO");

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
    msg.setTimeStamp(0.144702997838);
    msg.setSource(32811U);
    msg.setSourceEntity(104U);
    msg.setDestination(12507U);
    msg.setDestinationEntity(62U);
    msg.op = 99U;
    msg.list.assign("GGUVSCXHPDDTTSIPRJEZLYMNJTVYRAORFVGANOHUMFHHMFQKVSUMDQHWZESIQBJAOLASGZFWPPZFGQXOBKCXOOTTJNTSWVWUGJDLPNJI");

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
    msg.setTimeStamp(0.753354659489);
    msg.setSource(52265U);
    msg.setSourceEntity(75U);
    msg.setDestination(41811U);
    msg.setDestinationEntity(93U);
    msg.value = 28U;

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
    msg.setTimeStamp(0.242191774453);
    msg.setSource(26461U);
    msg.setSourceEntity(100U);
    msg.setDestination(21434U);
    msg.setDestinationEntity(87U);
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
    msg.setTimeStamp(0.66262193873);
    msg.setSource(57597U);
    msg.setSourceEntity(139U);
    msg.setDestination(28185U);
    msg.setDestinationEntity(225U);
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
    msg.setTimeStamp(0.12477737378);
    msg.setSource(24261U);
    msg.setSourceEntity(48U);
    msg.setDestination(16937U);
    msg.setDestinationEntity(77U);
    msg.consumer.assign("ADWRFAKRYOCXFSMUDTETNESDKXQXRUZUDJWTLDGYNJYTLMZVFEVVORDKOAUXADCACKWGBJJAJGXPTPBSSKZNHWNUKESJMJUQSGSHYKJWFNTAZBVPRGZGYBVLJZVIOMOBCHZLVZJH");
    msg.message_id = 47095U;

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
    msg.setTimeStamp(0.238687938808);
    msg.setSource(27073U);
    msg.setSourceEntity(0U);
    msg.setDestination(286U);
    msg.setDestinationEntity(130U);
    msg.consumer.assign("CSUOEQGTPPZNEJLMJXEYKYHBLCIGEAJZAFJNLRDXXQKDLJBDTBBAKUUVNGKDFKZXHDADOEWUDWBPIGHZCXYVVQTRANJSCUEHEOGBIRCBIHSHRIGUGWJVYZXATOYCUANFKPVGMTMHWXFW");
    msg.message_id = 50558U;

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
    msg.setTimeStamp(0.824015395637);
    msg.setSource(8957U);
    msg.setSourceEntity(56U);
    msg.setDestination(13123U);
    msg.setDestinationEntity(231U);
    msg.consumer.assign("EDYXYZVTVILEBBPWMOYLCWLMVAZLRGYIFJRKYNZZNJWEFKXAPJWGMNRQTDHTUODIUNAMHSIMCOSHQDARDEPAVRDHCB");
    msg.message_id = 11868U;

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
    msg.setTimeStamp(0.425099733375);
    msg.setSource(2766U);
    msg.setSourceEntity(15U);
    msg.setDestination(9473U);
    msg.setDestinationEntity(6U);
    msg.type = 126U;

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
    msg.setTimeStamp(0.417910506826);
    msg.setSource(59436U);
    msg.setSourceEntity(136U);
    msg.setDestination(33284U);
    msg.setDestinationEntity(252U);
    msg.type = 219U;

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
    msg.setTimeStamp(0.340099133192);
    msg.setSource(1979U);
    msg.setSourceEntity(98U);
    msg.setDestination(7010U);
    msg.setDestinationEntity(195U);
    msg.type = 62U;

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
    msg.setTimeStamp(0.967239889259);
    msg.setSource(47573U);
    msg.setSourceEntity(74U);
    msg.setDestination(32860U);
    msg.setDestinationEntity(237U);
    msg.op = 151U;

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
    msg.setTimeStamp(0.195291353788);
    msg.setSource(35641U);
    msg.setSourceEntity(229U);
    msg.setDestination(21365U);
    msg.setDestinationEntity(234U);
    msg.op = 123U;

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
    msg.setTimeStamp(0.153260069073);
    msg.setSource(46273U);
    msg.setSourceEntity(224U);
    msg.setDestination(64149U);
    msg.setDestinationEntity(187U);
    msg.op = 102U;

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
    msg.setTimeStamp(0.271336022075);
    msg.setSource(3072U);
    msg.setSourceEntity(101U);
    msg.setDestination(45540U);
    msg.setDestinationEntity(18U);
    msg.total_steps = 179U;
    msg.step_number = 244U;
    msg.step.assign("FCLWFAUZIVPSNMTVXOEVYKXWNVEHFMCUTWIFTHUEIMJQVDWAQGZTOYAPEHTYBCAFWWITLKYEHQGQDQRBJIPANAPETBBHROSQKVCVUKJWUDODKCCOENKZMGQYKDXHFYVLKJDXNLRPOGWMOJ");
    msg.flags = 6U;

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
    msg.setTimeStamp(0.933814599311);
    msg.setSource(18064U);
    msg.setSourceEntity(119U);
    msg.setDestination(59011U);
    msg.setDestinationEntity(37U);
    msg.total_steps = 4U;
    msg.step_number = 67U;
    msg.step.assign("OXTKANSVZVMJMWIPYKBTVH");
    msg.flags = 11U;

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
    msg.setTimeStamp(0.677775335857);
    msg.setSource(59153U);
    msg.setSourceEntity(69U);
    msg.setDestination(19702U);
    msg.setDestinationEntity(46U);
    msg.total_steps = 92U;
    msg.step_number = 176U;
    msg.step.assign("HZNTKAUYBUWNMDERDMBYWLBQYDUWJNBGNJQFWQIQSXDAHBLAKEIZOVJYABKIBUJAQYXPLSXQJASPSBXFLOOGIXHZRCGYRGFQRXKVQPGWCGCOSYVMHXZMJEIGBZCNFRLUDPDWWYFFKMHPSOMKZXOTEPIWKFQLNUTICATI");
    msg.flags = 7U;

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
    msg.setTimeStamp(0.900796682769);
    msg.setSource(30953U);
    msg.setSourceEntity(244U);
    msg.setDestination(31599U);
    msg.setDestinationEntity(73U);
    msg.state = 14U;
    msg.error.assign("XCCSHVQZYQCEIPLEKOGEIBBWNKACFBVZUANQUFLODEYSMZVBOVGKPNHMGGPYRUBDXWPQRYEJTVXIMBPOTPUEONJCTXTUGJUZVMDVUXSJCVLELFQHKAGEGRJQNMHLSXIQEWWCABRIWPTOCAKAXNYSARITNAWDSRFYOSHVJRYVQMWHZCBLFU");

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
    msg.setTimeStamp(0.536152053798);
    msg.setSource(30148U);
    msg.setSourceEntity(157U);
    msg.setDestination(43897U);
    msg.setDestinationEntity(216U);
    msg.state = 125U;
    msg.error.assign("MMGJYHTHAHDZNIMLDALXNSQEOKXRLSTYCIDQBQPCGFWFFRBIGQJKRXATWNPZXIKZBSZUGAHHOPQLAHUSJGMWEEO");

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
    msg.setTimeStamp(0.671451418116);
    msg.setSource(31077U);
    msg.setSourceEntity(216U);
    msg.setDestination(23112U);
    msg.setDestinationEntity(145U);
    msg.state = 110U;
    msg.error.assign("JSYFNIHQMGSPPHNEKNRNKVIMGZRIBIRDGFBRXUXYEKOMSHOPKEBIDVGESWGFOTHSVWAQQEOBBYPWTCRIEGZSFXFKEUYNZGVJRMHQIOAKKXUUCMJYOOZDPLBHGNCTWAACYLPPTCENLABDCOSWFGTQXQDRMZDPDTOLUJKCQFYETMMAVGROUZJRYIPLTVX");

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
    msg.setTimeStamp(0.139983563413);
    msg.setSource(1938U);
    msg.setSourceEntity(189U);
    msg.setDestination(23260U);
    msg.setDestinationEntity(73U);

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
    msg.setTimeStamp(0.243305676157);
    msg.setSource(28919U);
    msg.setSourceEntity(76U);
    msg.setDestination(61726U);
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
    msg.setTimeStamp(0.381182874793);
    msg.setSource(17369U);
    msg.setSourceEntity(93U);
    msg.setDestination(19170U);
    msg.setDestinationEntity(92U);

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
    msg.setTimeStamp(0.689896099761);
    msg.setSource(62949U);
    msg.setSourceEntity(11U);
    msg.setDestination(58768U);
    msg.setDestinationEntity(34U);
    msg.op = 216U;
    msg.speed_min = 0.140506952698;
    msg.speed_max = 0.0469449489048;
    msg.long_accel = 0.969667390564;
    msg.alt_max_msl = 0.315603544223;
    msg.dive_fraction_max = 0.121798268136;
    msg.climb_fraction_max = 0.728912748377;
    msg.bank_max = 0.758180564144;
    msg.p_max = 0.0716795534167;
    msg.pitch_min = 0.752020475393;
    msg.pitch_max = 0.15298815972;
    msg.q_max = 0.0444637188119;
    msg.g_min = 0.629338352506;
    msg.g_max = 0.299603681531;
    msg.g_lat_max = 0.616153292281;
    msg.rpm_min = 0.341507068199;
    msg.rpm_max = 0.885503652242;
    msg.rpm_rate_max = 0.348118459517;

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
    msg.setTimeStamp(0.318044273984);
    msg.setSource(3638U);
    msg.setSourceEntity(15U);
    msg.setDestination(16301U);
    msg.setDestinationEntity(11U);
    msg.op = 173U;
    msg.speed_min = 0.798701865868;
    msg.speed_max = 0.489192587477;
    msg.long_accel = 0.675308851849;
    msg.alt_max_msl = 0.0969778233158;
    msg.dive_fraction_max = 0.836295520169;
    msg.climb_fraction_max = 0.168110818724;
    msg.bank_max = 0.953928103041;
    msg.p_max = 0.574984535067;
    msg.pitch_min = 0.893267950517;
    msg.pitch_max = 0.992126491399;
    msg.q_max = 0.594507580196;
    msg.g_min = 0.204928615813;
    msg.g_max = 0.399704868356;
    msg.g_lat_max = 0.369045758689;
    msg.rpm_min = 0.780850042197;
    msg.rpm_max = 0.483976375712;
    msg.rpm_rate_max = 0.465769212045;

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
    msg.setTimeStamp(0.565603616326);
    msg.setSource(49950U);
    msg.setSourceEntity(238U);
    msg.setDestination(1840U);
    msg.setDestinationEntity(45U);
    msg.op = 214U;
    msg.speed_min = 0.874545723508;
    msg.speed_max = 0.77988901388;
    msg.long_accel = 0.0613410006897;
    msg.alt_max_msl = 0.958318616324;
    msg.dive_fraction_max = 0.669945474641;
    msg.climb_fraction_max = 0.210970172025;
    msg.bank_max = 0.154671926091;
    msg.p_max = 0.624773920033;
    msg.pitch_min = 0.0664792793405;
    msg.pitch_max = 0.462274793475;
    msg.q_max = 0.446516704037;
    msg.g_min = 0.197770341952;
    msg.g_max = 0.102816023862;
    msg.g_lat_max = 0.896794016486;
    msg.rpm_min = 0.863875906628;
    msg.rpm_max = 0.628450402897;
    msg.rpm_rate_max = 0.928820074926;

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
    msg.setTimeStamp(0.247071376196);
    msg.setSource(58063U);
    msg.setSourceEntity(27U);
    msg.setDestination(45237U);
    msg.setDestinationEntity(99U);

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
    msg.setTimeStamp(0.120888480461);
    msg.setSource(46454U);
    msg.setSourceEntity(176U);
    msg.setDestination(46185U);
    msg.setDestinationEntity(85U);
    IMC::RemoteActions tmp_msg_0;
    tmp_msg_0.actions.assign("RGPXGBEYGDXLTUHRZRYFFZHYWSIDNMARAUPAEHFQBQSZPPIFZWUBJXVQJJWCZKMOGZQOHFOMWVUTKXEUPKNDBKRNNHRONMPTEASCMINOZLUGXCXOVARDIFQMWSIKYSWUGCYEIVGOJIOLVYVCJMTCYNSDACNAKHFXAGBKDZHFEIDDVLNLIFKMOWGJFZCZW");
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
    msg.setTimeStamp(0.695311246057);
    msg.setSource(36012U);
    msg.setSourceEntity(117U);
    msg.setDestination(52141U);
    msg.setDestinationEntity(195U);
    IMC::Salinity tmp_msg_0;
    tmp_msg_0.value = 0.394348563298;
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
    msg.setTimeStamp(0.147847361743);
    msg.setSource(30334U);
    msg.setSourceEntity(151U);
    msg.setDestination(28942U);
    msg.setDestinationEntity(99U);
    msg.lat = 0.516679001557;
    msg.lon = 0.590624355847;
    msg.height = 0.00357779188141;
    msg.x = 0.986861196103;
    msg.y = 0.732724361315;
    msg.z = 0.116206376064;
    msg.phi = 0.199465198715;
    msg.theta = 0.0374571415265;
    msg.psi = 0.630395729425;
    msg.u = 0.811189451278;
    msg.v = 0.312167707092;
    msg.w = 0.00159022985642;
    msg.p = 0.595324367188;
    msg.q = 0.999856679256;
    msg.r = 0.773650003403;
    msg.svx = 0.837001436162;
    msg.svy = 0.241953253213;
    msg.svz = 0.75038106603;

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
    msg.setTimeStamp(0.956761362184);
    msg.setSource(63176U);
    msg.setSourceEntity(140U);
    msg.setDestination(22765U);
    msg.setDestinationEntity(105U);
    msg.lat = 0.676321879457;
    msg.lon = 0.64622825376;
    msg.height = 0.56917191874;
    msg.x = 0.0597415982556;
    msg.y = 0.387478678211;
    msg.z = 0.754466634686;
    msg.phi = 0.731012877536;
    msg.theta = 0.4898209969;
    msg.psi = 0.933897205957;
    msg.u = 0.371077163328;
    msg.v = 0.495133144597;
    msg.w = 0.432233242208;
    msg.p = 0.934597165453;
    msg.q = 0.812882100852;
    msg.r = 0.396763405289;
    msg.svx = 0.610655035941;
    msg.svy = 0.851876488238;
    msg.svz = 0.860441315533;

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
    msg.setTimeStamp(0.125933704869);
    msg.setSource(34234U);
    msg.setSourceEntity(27U);
    msg.setDestination(33890U);
    msg.setDestinationEntity(24U);
    msg.lat = 0.4450977487;
    msg.lon = 0.853796118728;
    msg.height = 0.113300101534;
    msg.x = 0.023105917963;
    msg.y = 0.0814071049995;
    msg.z = 0.0383326427854;
    msg.phi = 0.717960115918;
    msg.theta = 0.0181669158123;
    msg.psi = 0.254865287067;
    msg.u = 0.25261256222;
    msg.v = 0.335107596348;
    msg.w = 0.102741372093;
    msg.p = 0.0824835828157;
    msg.q = 0.499268652211;
    msg.r = 0.77777005714;
    msg.svx = 0.439699238432;
    msg.svy = 0.99392106488;
    msg.svz = 0.35410110451;

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
    msg.setTimeStamp(0.946326114214);
    msg.setSource(46974U);
    msg.setSourceEntity(193U);
    msg.setDestination(6606U);
    msg.setDestinationEntity(235U);
    msg.op = 36U;
    msg.entities.assign("FXCYPJBHIQIOZCJLAIFREBDCXHQFLTQEHVWPRAEDIOTHQKYXBPGSYXEQBORMMJEXFNTDJLMAZLMCMALWUZYSQDRPHYHKLWPGZRPPKWNHIJANIEYC");

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
    msg.setTimeStamp(0.56721694121);
    msg.setSource(48483U);
    msg.setSourceEntity(176U);
    msg.setDestination(2783U);
    msg.setDestinationEntity(198U);
    msg.op = 63U;
    msg.entities.assign("AZKBOGPQWZNTMVROXPPKICMZDHQYDAIDAEXGBORMATOIRGRTCDJMXUNEUBYEQAJCBCFLRSPTDJCYXIYOHLZUSTTXBEDJQPSXPUYOQABWLETCUJISFNCKKFBHFLJKZZLUWLSWZKHZDOC");

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
    msg.setTimeStamp(0.62231720432);
    msg.setSource(4335U);
    msg.setSourceEntity(173U);
    msg.setDestination(24755U);
    msg.setDestinationEntity(94U);
    msg.op = 181U;
    msg.entities.assign("FDZKBENAPOLTNTQLJKISETPDXOMFUOERPBVYVHCBJBTCXSSOCMJDWWSMBZGHJDVWBAWANFARBMEXUVIHQUERGNLCNH");

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
    msg.setTimeStamp(0.682163150329);
    msg.setSource(46406U);
    msg.setSourceEntity(177U);
    msg.setDestination(43006U);
    msg.setDestinationEntity(190U);
    msg.type = 31U;
    msg.speed = 40785U;
    const char tmp_msg_0[] = {-2, 63, 23, -37, -66, 44, 26, 126, -124, -26, -84, -120, -96, 97, -117, -103, -31, -123, 32, 24, 84, 112, -74, 108, -128, -102, 87, 43, 41, 95, 13, 117, 65, 3, 108, 62, -101, -114, 100, -66, 88, -121, 107, 100, -65, 1, -43, -34, 9, -115, -81, -43, -61, 47, -80, -2, -57, -14, 107, 66, 6, -60, -101, -21, -14, -21, 54, 109, 71, 102, -92, 79, -70, 40, -45, 115, 15, -116, -12, -75, -45, 117, 56, -61, 10, -28, -40, -50, -82, -75, -114, 64, -113, 113, 109, 26, -123, -46, -32, -107, -11, 12, 100, -57, -114, 107, -78, 45, -62, -13, 97, -93, -87, 106, 71, 48, 21, -65, 122, 116, 106, 83, 59, 50, 36, -13, -78, 10, -26, 54, -91, 74, -75, -103, 26, -111, -110, -110, -58, -18, -107, -16, -80, -32, 0, 37, 77, -121, 55, -35, -77, 110, 37, -127, -125, -74, -123, 126, -79, -82, -40, 121, -105, -24, -41, -30, -115, 88, 121, 9, -73, 12, -97, 19, 65, -54, 1, -120, 5, 97, -5, 115, 95, -44, -109, -10, 93, -83, 89, -74, 110, 22, 62, -3, 113, 121, 2, -46, -113, 89, -76, 12, -28, -47, 8, -87, 113, -77, -25, -73, 61, -16, -95, 120, -86, 45, 11, -91, 41, 116, 47, 49, -33, -93, -14, -64, 41, 61, 11, 51, 98, 94, 16, 3, 113, 6, 71, 90, -56, -121, -86, -63, 75, -34, 7, -65, 3, 25, -13, 41, -77};
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
    msg.setTimeStamp(0.223876165726);
    msg.setSource(1023U);
    msg.setSourceEntity(67U);
    msg.setDestination(50665U);
    msg.setDestinationEntity(251U);
    msg.type = 219U;
    msg.speed = 45284U;
    const char tmp_msg_0[] = {-89, 27, 0, -22, 118, 94, -60, 42, 68, 13, -30, 0, 19, 36, 99, 112, -17, 68, 50, 72, -110, -18, -15, 110, -37, -74, -92, -109, 7, -71, -51, 45, 30, 88, -88, 34, 41, -30, -110, 109, -44, -11, 31, 79, -45, 10, 78, -87, 67, 72, 104, -38, 48, 18, -10, -13, -105, 69, 65, -77, -19, -120, -119, -46, -24, 36, 67, 116, -66, 102, 121, 111, -13, -103, 22, -60, -5, 61, -115, 42, -112, 70, 40, 53, -116, -116, 49, -88, -120, 62, 37, 98, -30, -127, -111, 76, 63, -83, -29, 55, -44, -49, 28, 80, 83, -66, -32, -113, 28, 22, 95, 124};
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
    msg.setTimeStamp(0.35156038355);
    msg.setSource(54386U);
    msg.setSourceEntity(127U);
    msg.setDestination(38278U);
    msg.setDestinationEntity(222U);
    msg.type = 62U;
    msg.speed = 25288U;
    const char tmp_msg_0[] = {-57, -60, 115, -94, 111, -100, 12, 89, -39, -29, -10, 58, -45, -37, 8, 13, -35, 49, -56, -57, 121, -56, 14, -9, 110, 31, 51, 105, 56, -24, -81, 60, 91, -25, -127, -114, 75, 119, -95, 81, 32, -9, -68, 118, -44, -12, -92, 78, -82, -67, 54, -104, -107, -90, 50, -57};
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
    msg.setTimeStamp(0.0108761986284);
    msg.setSource(22614U);
    msg.setSourceEntity(142U);
    msg.setDestination(44539U);
    msg.setDestinationEntity(88U);
    msg.op = 63U;
    msg.tas2acc_pgain = 0.62505149796;
    msg.bank2p_pgain = 0.121146050843;

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
    msg.setTimeStamp(0.576478538841);
    msg.setSource(30540U);
    msg.setSourceEntity(9U);
    msg.setDestination(20534U);
    msg.setDestinationEntity(57U);
    msg.op = 254U;
    msg.tas2acc_pgain = 0.573495478383;
    msg.bank2p_pgain = 0.22895004785;

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
    msg.setTimeStamp(0.0545388936654);
    msg.setSource(55539U);
    msg.setSourceEntity(79U);
    msg.setDestination(22212U);
    msg.setDestinationEntity(184U);
    msg.op = 135U;
    msg.tas2acc_pgain = 0.745064907819;
    msg.bank2p_pgain = 0.256459055857;

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
    msg.setTimeStamp(0.362845030149);
    msg.setSource(11359U);
    msg.setSourceEntity(241U);
    msg.setDestination(27831U);
    msg.setDestinationEntity(116U);
    msg.available = 163214374U;
    msg.value = 3U;

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
    msg.setTimeStamp(0.0573052381101);
    msg.setSource(14438U);
    msg.setSourceEntity(66U);
    msg.setDestination(33030U);
    msg.setDestinationEntity(160U);
    msg.available = 4168096924U;
    msg.value = 50U;

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
    msg.setTimeStamp(0.24386219148);
    msg.setSource(31469U);
    msg.setSourceEntity(59U);
    msg.setDestination(31618U);
    msg.setDestinationEntity(61U);
    msg.available = 3746079357U;
    msg.value = 58U;

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
    msg.setTimeStamp(0.76175740195);
    msg.setSource(21858U);
    msg.setSourceEntity(149U);
    msg.setDestination(43470U);
    msg.setDestinationEntity(217U);
    msg.op = 239U;
    msg.snapshot.assign("BZHRRIKQBUXTODWANUNSBIDWMMYWNZDNSEPGCTVCJFFMH");
    IMC::PlanControlState tmp_msg_0;
    tmp_msg_0.state = 30U;
    tmp_msg_0.plan_id.assign("EAIWCEOIMWJRZUUOPHZSTZEO");
    tmp_msg_0.plan_eta = -1512337998;
    tmp_msg_0.plan_progress = 0.994767241422;
    tmp_msg_0.man_id.assign("NZIRCYGDEFHDZBPNYMBVAUHVZOQGFXWRXCBMMSTESEPF");
    tmp_msg_0.man_type = 10055U;
    tmp_msg_0.man_eta = 627135687;
    tmp_msg_0.last_outcome = 119U;
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
    msg.setTimeStamp(0.426753737388);
    msg.setSource(4194U);
    msg.setSourceEntity(94U);
    msg.setDestination(16670U);
    msg.setDestinationEntity(232U);
    msg.op = 65U;
    msg.snapshot.assign("NJSAAULKTPELCNXXVBMPRHEVGKYNKYQNRVIUAFHOSDIDHQFHXLIXCWXHAPPYFYISFDFCOGUOJONZOXKBEJCEFLBXVZ");
    IMC::VehicleMedium tmp_msg_0;
    tmp_msg_0.medium = 246U;
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
    msg.setTimeStamp(0.305731806245);
    msg.setSource(32152U);
    msg.setSourceEntity(130U);
    msg.setDestination(51392U);
    msg.setDestinationEntity(89U);
    msg.op = 17U;
    msg.snapshot.assign("XORECDKODTDSGSBHXUMEDJCGRJYKWHOUUGBKMETJPU");
    IMC::Rpm tmp_msg_0;
    tmp_msg_0.value = -25927;
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
    msg.setTimeStamp(0.546854496312);
    msg.setSource(22259U);
    msg.setSourceEntity(221U);
    msg.setDestination(24977U);
    msg.setDestinationEntity(49U);
    msg.op = 186U;
    msg.name.assign("HMXALRLPCNKCWMRYECEHTGHFNBTBDOGCMTJYXKDLBBZSKGTWQOVTFLMZLPVAJOUXYOIWBEQLKJWSWXPRPUZTEUERYGQJUXAFJCQVQS");

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
    msg.setTimeStamp(0.836597014125);
    msg.setSource(287U);
    msg.setSourceEntity(87U);
    msg.setDestination(39700U);
    msg.setDestinationEntity(22U);
    msg.op = 157U;
    msg.name.assign("GBMASCQTOYVQTYBFOXKULTWXKQTLJKHJYZRXPXJYHKSUHPFOAIEWMIPLWEFXRYGAUQMCAOQXANUCCPCGGJFFKNHVKJPZDZTSDLRJBH");

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
    msg.setTimeStamp(0.593236776856);
    msg.setSource(46223U);
    msg.setSourceEntity(148U);
    msg.setDestination(18037U);
    msg.setDestinationEntity(86U);
    msg.op = 219U;
    msg.name.assign("IJTMZBYYKETFYBGTCYWRAIUWPRBREXEWDJPTDGDOQGXIGISMOMVGZCSHGIVSXJIHKTVROTAJMFDIWSKEQUFBNFKWONNTNDNPDRLCFLVGWNQZRM");

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
    msg.setTimeStamp(0.96340958677);
    msg.setSource(46484U);
    msg.setSourceEntity(92U);
    msg.setDestination(23782U);
    msg.setDestinationEntity(112U);
    msg.type = 136U;
    msg.htime = 0.236048856559;
    msg.context.assign("OQQLESSMDKCTFERWNHHKQMVDROJYDEDAYYGIUTBNKWKZIVOZETACGERGLIEXCDWTPGFEPHSJZAIUGJVPIBLAJCDSDTYIVGFVSHWUCFYNLXHVPUAOSQBFEXFRTOPKBZAHNHUFWFHCEHDUYQLWITWAXKPGZNAPZBLAJFJOENMKJDIQNCKOZFGWXRZLMBJXJABBXXIDMKOQWLMMYVTPNYS");
    msg.text.assign("KTVNQARYHIMYUFIIZZCUJUZVATTDDRFEGCSTPCGNFPKOCXOEDBDLQMFDZAMSLIUEKNVIUBGRRZNOPPWWLMGEGEHMIYPTFQFQNLYXOGQKXDJNJDMAGPBTOVPAKDLYEVUHHUIKAUMQAVFEWANKTWZYBHKEDKJUMCVOPHCJJWRIMBFIBRLAXSZWZGGSLJUOMNPLYBLXSDEOZ");

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
    msg.setTimeStamp(0.554396760874);
    msg.setSource(10516U);
    msg.setSourceEntity(93U);
    msg.setDestination(38585U);
    msg.setDestinationEntity(240U);
    msg.type = 45U;
    msg.htime = 0.558967622255;
    msg.context.assign("OEIRXTMSRVMYPBDMHDALQKGJBYYNHRD");
    msg.text.assign("IGSDNWWZUWNKXCTDKFQGPVMFKNOEWUEVGCOPCMNRBMCILDRDXKUBYVAEGCTNTAVHROMSHKYSHTDLIXGLYZHTAZPFQJMWZDTGDSHUUAQKIWZSOQEEBNFCJCYVCNFTPMPWJURPGQJQMDRE");

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
    msg.setTimeStamp(0.524018204636);
    msg.setSource(2464U);
    msg.setSourceEntity(52U);
    msg.setDestination(18392U);
    msg.setDestinationEntity(99U);
    msg.type = 31U;
    msg.htime = 0.949838895798;
    msg.context.assign("CPLVAHFTMQDITLUZQGFIVEGILFRDXTNOJMEYGNJAIKGTUCUWRJQIVZZBBOHOJOOXTJT");
    msg.text.assign("APUYRZHVMPINCVDLTXWJZTIWLSIPOEFMUSRMJBOIYHDTAFAIUUVEQLSUUGOADFAC");

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
    msg.setTimeStamp(0.0971042790961);
    msg.setSource(18535U);
    msg.setSourceEntity(78U);
    msg.setDestination(7343U);
    msg.setDestinationEntity(89U);
    msg.command = 197U;
    msg.htime = 0.446357830976;

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
    msg.setTimeStamp(0.388147276462);
    msg.setSource(4458U);
    msg.setSourceEntity(97U);
    msg.setDestination(509U);
    msg.setDestinationEntity(231U);
    msg.command = 146U;
    msg.htime = 0.218564986849;

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
    msg.setTimeStamp(0.554091200171);
    msg.setSource(57619U);
    msg.setSourceEntity(213U);
    msg.setDestination(9787U);
    msg.setDestinationEntity(202U);
    msg.command = 14U;
    msg.htime = 0.0991255504436;

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
    msg.setTimeStamp(0.908922895898);
    msg.setSource(59183U);
    msg.setSourceEntity(1U);
    msg.setDestination(62743U);
    msg.setDestinationEntity(148U);
    msg.op = 36U;
    msg.file.assign("CPMMJQQKFBDPTRVWDRCODTQKZEAEJPXVKNBUNHRFDWTATNFVOAPRUZPWMHHSUZVJYRZAAZOLVXOJCCHCULTIMIKGWCPYPSMIRYCFDVOXSXDRXPUSTGCHNYOTLENXYXIMWYVQRZGSUNZBKQULFFICAHLIZKYJYANZXDWXMBHDGFPOGQJKLGNSVUCSJTOQFNLERVGUYIUGMXARWBEIEHKEJWOBFTNZHOVGPIALDISDKYLQJTQEESMJBB");

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
    msg.setTimeStamp(0.988241773878);
    msg.setSource(46562U);
    msg.setSourceEntity(21U);
    msg.setDestination(63307U);
    msg.setDestinationEntity(179U);
    msg.op = 119U;
    msg.file.assign("FPQZHILQSKGFWAESDKZTUJKAQDBQZSVHMDOMKMPOZDTFONCOIMEYMDYCLJNQSX");

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
    msg.setTimeStamp(0.352626312189);
    msg.setSource(54926U);
    msg.setSourceEntity(103U);
    msg.setDestination(13848U);
    msg.setDestinationEntity(164U);
    msg.op = 5U;
    msg.file.assign("XHVKWTMOZZLZLKFTSOHBTFFFZUVNTNEXJFVLXDJRITNQOMPYPQQWSPIYVBNQUUFIWZRJEOSAQ");

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
    msg.setTimeStamp(0.668232740047);
    msg.setSource(8831U);
    msg.setSourceEntity(86U);
    msg.setDestination(21284U);
    msg.setDestinationEntity(91U);
    msg.op = 60U;
    msg.clock = 0.346749100763;
    msg.tz = -88;

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
    msg.setTimeStamp(0.0329696398624);
    msg.setSource(50193U);
    msg.setSourceEntity(58U);
    msg.setDestination(14123U);
    msg.setDestinationEntity(24U);
    msg.op = 130U;
    msg.clock = 0.532040275135;
    msg.tz = 97;

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
    msg.setTimeStamp(0.39360527108);
    msg.setSource(61262U);
    msg.setSourceEntity(47U);
    msg.setDestination(23430U);
    msg.setDestinationEntity(208U);
    msg.op = 89U;
    msg.clock = 0.1104958949;
    msg.tz = -109;

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
    msg.setTimeStamp(0.133089840606);
    msg.setSource(30846U);
    msg.setSourceEntity(208U);
    msg.setDestination(32847U);
    msg.setDestinationEntity(126U);
    msg.conductivity = 0.964659281857;
    msg.temperature = 0.632378639973;
    msg.depth = 0.357658942799;

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
    msg.setTimeStamp(0.60907950237);
    msg.setSource(43551U);
    msg.setSourceEntity(138U);
    msg.setDestination(60084U);
    msg.setDestinationEntity(94U);
    msg.conductivity = 0.598777681106;
    msg.temperature = 0.726862343139;
    msg.depth = 0.782343869267;

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
    msg.setTimeStamp(0.260816596373);
    msg.setSource(48812U);
    msg.setSourceEntity(10U);
    msg.setDestination(45314U);
    msg.setDestinationEntity(128U);
    msg.conductivity = 0.928067094616;
    msg.temperature = 0.509473516984;
    msg.depth = 0.252317065039;

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
    msg.setTimeStamp(0.294648278413);
    msg.setSource(32006U);
    msg.setSourceEntity(61U);
    msg.setDestination(57423U);
    msg.setDestinationEntity(101U);
    msg.altitude = 0.457669194465;
    msg.roll = 24377U;
    msg.pitch = 7651U;
    msg.yaw = 7037U;
    msg.speed = 31808;

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
    msg.setTimeStamp(0.169949994487);
    msg.setSource(30549U);
    msg.setSourceEntity(80U);
    msg.setDestination(45048U);
    msg.setDestinationEntity(225U);
    msg.altitude = 0.678170441869;
    msg.roll = 47914U;
    msg.pitch = 9589U;
    msg.yaw = 121U;
    msg.speed = -9244;

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
    msg.setTimeStamp(0.249716356093);
    msg.setSource(3886U);
    msg.setSourceEntity(160U);
    msg.setDestination(45570U);
    msg.setDestinationEntity(128U);
    msg.altitude = 0.551759140865;
    msg.roll = 24048U;
    msg.pitch = 26469U;
    msg.yaw = 42948U;
    msg.speed = -19119;

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
    msg.setTimeStamp(0.420672962819);
    msg.setSource(46294U);
    msg.setSourceEntity(182U);
    msg.setDestination(27379U);
    msg.setDestinationEntity(95U);
    msg.altitude = 0.537302303311;
    msg.width = 0.0855477950718;
    msg.length = 0.654585396752;
    msg.bearing = 0.556271925267;
    msg.pxl = 25290;
    msg.encoding = 48U;
    const char tmp_msg_0[] = {3, -42, -48, -102, 44, 15, 68, 18, 102, 41, -52, -60, 55, -106, -103, 9, 33, -96, 124, 103, 70, 102, -128, -65, 74, 103, -112, 120, -74, 43, -105, -110, -20, -57, -18, -6, -54, -116, 74, -105, 18, 68, 124, 35, 91, -77, 104, 20, 59, -105, 115, 5, -118, 55, 64, 41, -16, -52, -110, -2, 68, -75, -124, 18, -23, -63, -124, -54};
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
    msg.setTimeStamp(0.0450838296013);
    msg.setSource(3441U);
    msg.setSourceEntity(232U);
    msg.setDestination(11297U);
    msg.setDestinationEntity(227U);
    msg.altitude = 0.249403005163;
    msg.width = 0.880807712343;
    msg.length = 0.301193844713;
    msg.bearing = 0.387736384946;
    msg.pxl = 7596;
    msg.encoding = 82U;
    const char tmp_msg_0[] = {-87, -92, -127, -30, 24, 89, 78, -90, 49, -30, -59, -2, 111, 6, -24, -72, -35, 1, 22, -97, -87, -104, -15, 102, 118, -24, -86, 47, 35, -106, -99, 24, 117, 28, 21, 6, -9, -92, -32, 91, 97, 30, -78, -107, 48, 117, -5, 2, 15, 89, -101, 112, 113, -7, 66, -99, 12, -95, -22, 62, -52, 68, -127, 94, -79, 124, -64, 29, 117, -19, -64, 79, 80, 123, 97, -77, 105, -25, 23, -89, -111, -16, -123, -45, 110, 40, -118, -42, 76, -30, -61, -24, 23, 94, 5, -84, -59, 117, 70, 85, -15, -72, -118, -85, -53, 69, 79, 41, -69, -46, 31, -109, -17, 28, -21, -18, 34, -126, -124, 51, 96, -47, 44, 16, -54, 106, -105, -33, 117, -114, -18, 43, -66, -62, 52, -88, -19, -120, -76, 114, 68, -30, 75, -92, -83, -128, -25, -58, 98, 38, 79, 100, 94, -114, 20, 113, -113, -122, 108, -121, -17, 81, -123, 50, 105, -43, 109, -26, -80, 115, 34, -122, 72, -68, 72, -41, -47, -108, -125, -14, 83, -21, -66, -74};
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
    msg.setTimeStamp(0.666943154157);
    msg.setSource(43908U);
    msg.setSourceEntity(172U);
    msg.setDestination(39633U);
    msg.setDestinationEntity(192U);
    msg.altitude = 0.872880620787;
    msg.width = 0.0882946080962;
    msg.length = 0.0655964554657;
    msg.bearing = 0.439351666087;
    msg.pxl = -7692;
    msg.encoding = 157U;
    const char tmp_msg_0[] = {119, 70, 76, -93, -64, -68, -35, 58, 96, -39, -76, -111, -81, -120, 17, 121, -85, 43, -49, -1, -98, 117, 26, 112, -91, -67, -105, 5, -35, -118, -4, 33, 10, -88, -119, 46, 75, 112, -20, -106, -7, -3, 11, -22, -106, -11, -29, 40, -112, -103, -72, -68, 16, -127, 79, -88, -15, -18, -68, -81, -41, 113, -78, -39, -44, 40, -43, -100, 70, -85, -105, -80, -18, 121, 89, 88, 17, -76, 7, 76, -92, 42, -20, -120, 16, 64, 92, -4, -49, 12, 94, -85, -98, 102, -43, -85, -41, 21, -113, 39, 112, 118, 3, -61, -65, 69, 7, 55, 109, 61, -63, -39, 103, 77, 2, -49, 112, 54, -67, -48, 124, 72, 9, 52, 126, 101, -111, -78, -90, -114, -16, 14, 73, 91, 105, 90, 38, -10, 88, 50, -73, -98, 28, -110, 65, 0, 45, 114, 87, 26, -30, -36, -102, -90, 11, 4, -115, -32, 116, 116, 3, -36, 1, 3, -14, 123, -1, 80, -98, 104, -91, -28, 11, 96, -33, 40, -108, 103, -9, 45, 59, -17, -101, -114, -67, 120, -18, -3, -48, -80, -83, 24, -13, -44, 54, -1, 72, -60, 59, -40, -120};
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
    msg.setTimeStamp(0.485297440359);
    msg.setSource(47707U);
    msg.setSourceEntity(241U);
    msg.setDestination(37163U);
    msg.setDestinationEntity(105U);
    msg.text.assign("AFTTYFPYAYCECJMZINVILSDTWZSZSQUKF");
    msg.type = 139U;

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
    msg.setTimeStamp(0.099755692091);
    msg.setSource(47797U);
    msg.setSourceEntity(28U);
    msg.setDestination(61505U);
    msg.setDestinationEntity(23U);
    msg.text.assign("DOCGFMHLREDWOYHIWGOQYUGMXJEMDZVMTNCMJXPUEHUHHRSICWECXZEILBVZTH");
    msg.type = 86U;

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
    msg.setTimeStamp(0.383640608382);
    msg.setSource(9219U);
    msg.setSourceEntity(196U);
    msg.setDestination(13149U);
    msg.setDestinationEntity(138U);
    msg.text.assign("BHYGWVPIAKKTLFYUWAHJIPTFTBJFQZNPIELZKXCUYFDVHELZIUEXGOCJRTKVJPFAIDEWEOXNYAPOAFFWZQQNRTBVNVOPPWJGNPWZDQWZBHDYDIUSITRH");
    msg.type = 20U;

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
    msg.setTimeStamp(0.0305330923678);
    msg.setSource(30297U);
    msg.setSourceEntity(231U);
    msg.setDestination(8930U);
    msg.setDestinationEntity(124U);
    msg.parameter = 220U;
    msg.numsamples = 28U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 29275U;
    tmp_msg_0.avg = 0.318418297198;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.96800655949;
    msg.lon = 0.42536100231;

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
    msg.setTimeStamp(0.249392300455);
    msg.setSource(34498U);
    msg.setSourceEntity(113U);
    msg.setDestination(861U);
    msg.setDestinationEntity(94U);
    msg.parameter = 235U;
    msg.numsamples = 140U;
    msg.lat = 0.720326457597;
    msg.lon = 0.368390328883;

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
    msg.setTimeStamp(0.413574550573);
    msg.setSource(4776U);
    msg.setSourceEntity(138U);
    msg.setDestination(37046U);
    msg.setDestinationEntity(227U);
    msg.parameter = 24U;
    msg.numsamples = 222U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 52581U;
    tmp_msg_0.avg = 0.514285094805;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.502286803357;
    msg.lon = 0.226798018763;

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
    msg.setTimeStamp(0.246643567783);
    msg.setSource(65244U);
    msg.setSourceEntity(59U);
    msg.setDestination(36690U);
    msg.setDestinationEntity(114U);
    msg.depth = 33880U;
    msg.avg = 0.575380818557;

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
    msg.setTimeStamp(0.496856783622);
    msg.setSource(15598U);
    msg.setSourceEntity(199U);
    msg.setDestination(46076U);
    msg.setDestinationEntity(18U);
    msg.depth = 53060U;
    msg.avg = 0.414509427471;

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
    msg.setTimeStamp(0.0946415195505);
    msg.setSource(2289U);
    msg.setSourceEntity(173U);
    msg.setDestination(60005U);
    msg.setDestinationEntity(62U);
    msg.depth = 22972U;
    msg.avg = 0.686074276509;

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
    msg.setTimeStamp(0.442730317217);
    msg.setSource(37812U);
    msg.setSourceEntity(32U);
    msg.setDestination(29625U);
    msg.setDestinationEntity(10U);

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
    msg.setTimeStamp(0.552638658527);
    msg.setSource(33296U);
    msg.setSourceEntity(135U);
    msg.setDestination(24988U);
    msg.setDestinationEntity(46U);

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
    msg.setTimeStamp(0.0373695135874);
    msg.setSource(21841U);
    msg.setSourceEntity(56U);
    msg.setDestination(30672U);
    msg.setDestinationEntity(119U);

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
    msg.setTimeStamp(0.347194491051);
    msg.setSource(29942U);
    msg.setSourceEntity(172U);
    msg.setDestination(50071U);
    msg.setDestinationEntity(232U);
    msg.sys_name.assign("OGGPLMUFTMHMXAJPHEJVJMMAKIHEOXDKYATSWPMPBREXBUCLYTPFOSVVBDZQCUUMDNOUQVXRGPQKABREYNMLYTFYOJONTCFEPSJUXBJQFDNABNIFKWDWNLXAGDJHZZVSUASBBCRIZFXYQKHVNXRJHNFZRDEBBCQWLWWMEWXKSGGUKJRSTOPOYKWLWEYEOAZCAVGVCZYFILTDPCIRNGQVTVTIKZQO");
    msg.sys_type = 10U;
    msg.owner = 59416U;
    msg.lat = 0.220714413792;
    msg.lon = 0.623770223062;
    msg.height = 0.373447961706;
    msg.services.assign("FIVQYPNVRJORSIQLBPLDELQZSKIOKUGGCSCHGBCMIADYJZGDVWYISBWTFCSJTBHKKZQPDBQQNXWQVQUEURATNPUFAYIEHRNHMLTLYYVADLXPJWZZIVHLMPFZOZMCMJZKXIYJRVVBUVEDJNWNREMUKXFLKTXXKCEUSHAXBTSOJAOWNFOZCWYTTMCCHERGX");

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
    msg.setTimeStamp(0.128382283557);
    msg.setSource(64208U);
    msg.setSourceEntity(135U);
    msg.setDestination(59901U);
    msg.setDestinationEntity(131U);
    msg.sys_name.assign("QFANQRADNYRKCDGDZGALHEBCVPOXRYBXGITLNDPOTVJUPOFJIASGCGAOVBPCLKKLIFXWTTFHKXEIFMVHBJRSSHQVKNMKMIGANXBEFWUDEATQHHBPJDWWWIQMULADZZJMWXD");
    msg.sys_type = 23U;
    msg.owner = 29077U;
    msg.lat = 0.960656969201;
    msg.lon = 0.948117007445;
    msg.height = 0.00782901672052;
    msg.services.assign("HFODPWQCSBVZQXNRRQTXPDEXHHB");

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
    msg.setTimeStamp(0.122410629355);
    msg.setSource(3213U);
    msg.setSourceEntity(10U);
    msg.setDestination(758U);
    msg.setDestinationEntity(188U);
    msg.sys_name.assign("JAZGKUOMOTWSMGOJUIYBQQRFVTXQRLTIHJUZYUFFJKLMTMMGEDYVSYOPRWBQDEPNRKGMNPTACLWXYBJOVECCOYNEEZWHKE");
    msg.sys_type = 148U;
    msg.owner = 12948U;
    msg.lat = 0.092029863702;
    msg.lon = 0.134185714279;
    msg.height = 0.486742701588;
    msg.services.assign("UYOONURZOAZBFAWWYOIDLXGGNPWTHFLNUINIA");

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
    msg.setTimeStamp(0.919753617436);
    msg.setSource(34501U);
    msg.setSourceEntity(52U);
    msg.setDestination(25244U);
    msg.setDestinationEntity(28U);
    msg.service.assign("LBMGXOMQFFDIQRGNJTVIEYXFJJETTEGMSQUPVZPPJCQIVAPODKHTZKBKEULQAPXBLFXRFCUQOOUICWALZJNGXNHCDZYHPCDZGYDKOLQYOZZBVPESVJKRGMEGTCSGIKDSORGUBRENWAKRTAJEWENH");
    msg.service_type = 162U;

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
    msg.setTimeStamp(0.98085379165);
    msg.setSource(41929U);
    msg.setSourceEntity(62U);
    msg.setDestination(12622U);
    msg.setDestinationEntity(28U);
    msg.service.assign("NWUJNTQPWYXKIIMINDFRGUAUAXELEAAXM");
    msg.service_type = 75U;

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
    msg.setTimeStamp(0.224758751922);
    msg.setSource(22297U);
    msg.setSourceEntity(99U);
    msg.setDestination(53970U);
    msg.setDestinationEntity(173U);
    msg.service.assign("QCLJNZCFNQBQTVFEADXDPOQTUUTXLBGLYJQUIUUCKSNULPLUIYAWPKVPFPJOUNJXRIXZHNRJYXOYHACAWVOIRPTLQHYTVGSUVGEVKGEZEZRKBKJWQOWHMDDRSOEAVNJKEZSYVSCZOZNEKIMVMCDYWYWCRFNIRNDMMRQMZDXRMIMINEGBJTKGPCGADBBAGMGMFDGABS");
    msg.service_type = 50U;

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
    msg.setTimeStamp(0.357739998859);
    msg.setSource(20722U);
    msg.setSourceEntity(133U);
    msg.setDestination(62998U);
    msg.setDestinationEntity(47U);
    msg.value = 0.387460104743;

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
    msg.setTimeStamp(0.252484789097);
    msg.setSource(12283U);
    msg.setSourceEntity(68U);
    msg.setDestination(23728U);
    msg.setDestinationEntity(243U);
    msg.value = 0.555533673424;

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
    msg.setTimeStamp(0.997812393192);
    msg.setSource(6117U);
    msg.setSourceEntity(110U);
    msg.setDestination(55749U);
    msg.setDestinationEntity(46U);
    msg.value = 0.739707970998;

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
    msg.setTimeStamp(0.398972821909);
    msg.setSource(26526U);
    msg.setSourceEntity(86U);
    msg.setDestination(53067U);
    msg.setDestinationEntity(20U);
    msg.value = 0.178444274289;

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
    msg.setTimeStamp(0.24358576913);
    msg.setSource(59022U);
    msg.setSourceEntity(242U);
    msg.setDestination(19679U);
    msg.setDestinationEntity(167U);
    msg.value = 0.178280081185;

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
    msg.setTimeStamp(0.915479754369);
    msg.setSource(55391U);
    msg.setSourceEntity(118U);
    msg.setDestination(51681U);
    msg.setDestinationEntity(175U);
    msg.value = 0.0612682670644;

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
    msg.setTimeStamp(0.238054425438);
    msg.setSource(57175U);
    msg.setSourceEntity(201U);
    msg.setDestination(30096U);
    msg.setDestinationEntity(155U);
    msg.value = 0.211390122342;

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
    msg.setTimeStamp(0.922797441392);
    msg.setSource(32648U);
    msg.setSourceEntity(212U);
    msg.setDestination(3930U);
    msg.setDestinationEntity(35U);
    msg.value = 0.776771623493;

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
    msg.setTimeStamp(0.685550805573);
    msg.setSource(23086U);
    msg.setSourceEntity(1U);
    msg.setDestination(11939U);
    msg.setDestinationEntity(210U);
    msg.value = 0.989670949251;

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
    msg.setTimeStamp(0.994711809116);
    msg.setSource(36420U);
    msg.setSourceEntity(153U);
    msg.setDestination(55790U);
    msg.setDestinationEntity(51U);
    msg.number.assign("PJDCAFGFOBBIKDXWLFQRFJKMPWFAIZYCYUJAFWXUMVSJYZZGXKZBACZDCWMNXROGETY");
    msg.timeout = 45140U;
    msg.contents.assign("MGVQZALWHEFVXESYASNICZGNXANSVOMBQI");

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
    msg.setTimeStamp(0.0948262945935);
    msg.setSource(16593U);
    msg.setSourceEntity(68U);
    msg.setDestination(49371U);
    msg.setDestinationEntity(26U);
    msg.number.assign("RPKSXCHHQUOYEDIIZLZAXFKGBITNXZJBUKFMAZFTDXJJOZKRSFBPOWBXSNKRJSMKKCQGRXHJANMGMJQXPTLIZVGEGMYZOWYEWXKZGWRHVKDNPUZYLFMIPUJHRCQLQORCONGERVTTDHNHUKYBYCBAJPHBVPLLSAFISTTTDCHQSAPCALEEYLVFFDCYLCWMODUROAICPEODOEFQMHILBZUWWQYTUBVNAQXYGRVUA");
    msg.timeout = 7998U;
    msg.contents.assign("ZUMLAWSUKDQSQUTPEDWJOVALYDXCNLJZABPBVQSQHWRSBEHKAEBEDDFHLCNVOGRPPLYCRPLFRSTWHBNXCSAUOGCQPIWGKTWTEVMPGOCRXWUQTACMUYUPYNJRFPBOZINDDOTUSZARMLOBTFIRYWZEGOXYREKJEGTYQISYJKVFXNXZENVUBLDFILMAICGOXYIKMVZJJVNXAXTHVIFZSSHEXZOJNJKD");

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
    msg.setTimeStamp(0.744832738056);
    msg.setSource(37433U);
    msg.setSourceEntity(60U);
    msg.setDestination(62596U);
    msg.setDestinationEntity(21U);
    msg.number.assign("GEJBAMZFRYCGLKFNEYOSTVTHZECMXDO");
    msg.timeout = 8807U;
    msg.contents.assign("GADZPKBZFWSBAKGGAGYQQKZWIHWPXXIOBUFTYRLVPTOMFUUCVHHACYFOVADSVQGORNTHPDDOXIJIPJCSKNPYNMZLCINYQUSH");

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
    msg.setTimeStamp(0.152323008418);
    msg.setSource(44198U);
    msg.setSourceEntity(180U);
    msg.setDestination(40605U);
    msg.setDestinationEntity(22U);
    msg.seq = 481967970U;
    msg.destination.assign("LDIIQEDBJZAMUJDBYGJMCRCCKQHBHANBUBTJUQCRFOUWLXAXOFAEPLWDJLMIMMDIPJWNQMWZGWYFMSKGNVTIYZ");
    msg.timeout = 10516U;
    const char tmp_msg_0[] = {-76, -38, -29, 12, -36, -89, -43, 91, -53, 46, -29, 110, 4, 54, -127, 54, 123, 66, -5, 29, -25, 121, -5, -95, -126, 70, 115, -91, -70, -34, 38, -76, -126, -10, -66, 7, 90, 8, -68, 112, -9, 104, -73, 71, -114, 54, -90, 75, 81, -98, -102, -108, -33, -104, -45, 92, 50, -16, 61, -53, 26};
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
    msg.setTimeStamp(0.884013812476);
    msg.setSource(55513U);
    msg.setSourceEntity(136U);
    msg.setDestination(24846U);
    msg.setDestinationEntity(136U);
    msg.seq = 3831639412U;
    msg.destination.assign("NWAVGLLTEGSUUQZAFLEYTNVOSJNKZCLARXXOLTMIETSVGWZGFXMEMHXCDQBJOVLEHOTZZYVJH");
    msg.timeout = 49786U;
    const char tmp_msg_0[] = {-47, -79, -121, -67, -18, 34, 92, -9, 5, -27, 106, 88};
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
    msg.setTimeStamp(0.798048644372);
    msg.setSource(64666U);
    msg.setSourceEntity(248U);
    msg.setDestination(42892U);
    msg.setDestinationEntity(51U);
    msg.seq = 3721362787U;
    msg.destination.assign("SFJQWZYWYPVEWITFAXMENCIGWIKY");
    msg.timeout = 43076U;
    const char tmp_msg_0[] = {-67, -121, -16, 6, -27, -81, 39, -105, -94, -52, -27, -118, 121, 30, 15, 69, -49, 17, 126, -14, 60, -36, -16, 74, -123, -111, 1, -3, -41, 114, -15, -99, -66, -55, 101, 24, -1, -118, 1, -34, 125, -24};
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
    msg.setTimeStamp(0.205220976393);
    msg.setSource(56684U);
    msg.setSourceEntity(188U);
    msg.setDestination(25657U);
    msg.setDestinationEntity(149U);
    msg.source.assign("HGWXWIDUJDMUNVSKXCBNOUHSRHLEXIAVFFXSYRRYAWUBHDVCIQJAKNRUPRLCYWJLCXVCERBMKFHZCQRPXYQUVOWBPDQLDATMFUMWMNWTPIFOOFVVHKPULKZSOXAWYIKTEYEGPFJDEWGHQRGWB");
    const char tmp_msg_0[] = {-65, -15, 50, -77, 64, 99, 31, -60, -42, -22, 77, 10, -10, -80, 18, 72, -59, 93, -47, 5, -76, -52, 18, 55, -14, 85, -112, -56, -53, 45, -20, -104, -63, 31, 100, -119, 109, 20, -1, -118, -80, -85, 30, -128, -46, 42, -58, 97, -57, -16, 101, 2, -71, -128, 115, -90, -1, 20, 15};
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
    msg.setTimeStamp(0.524308223779);
    msg.setSource(58412U);
    msg.setSourceEntity(171U);
    msg.setDestination(44907U);
    msg.setDestinationEntity(66U);
    msg.source.assign("IKRMKMITMNFMPUNIHEF");
    const char tmp_msg_0[] = {-95, 39, 66, -5, 8, 73, 122, -53, -11, -95, -19, -106, 77, -58, -91, -74, 2, -45, 37, -78, -71, 17, 13, -21, 57, 30, 39, -36, -76, -90, -30, 122, -2, -30, -99, 19, 30, -8, 25, 30, -35, 14, 123, -39, 32, 91, -55, -124, 66, -92, -56, -99, 53, 47, 22, 51, -34, -113, 119, -104, -6, 27, -119, 8, 15, 98, -88, -9, -45, 22, -107, -105, 44, -27, -27, 45, -8, -70, 37, -93, 121, 75, 8, 59, 112, -45, 99, 24, 28, 58, -51, -64, 0, 113, 119, 64, 21, -107, 114, -60, 43, 92, 104, -96, 96, 69, 61, -119, -23, 12, -20, 84, -100, 13, -51, -124, -21, 64, -114, -11, 92, 15, 87, 22, -57, -52, 81, 13, -114, -31, -10, -81, -75, 57, 44, 77, 23, 0, -33, -24, 36, -38, 113, 25, 74, -31, -32, -127, -40, -128, -33, 68, 59, 117, -66, -55, 74, 100, -84, 42, 24, 106, -122, 61, 124, 70, 11, -80, -19, 5, -68, -123, -48, -108, -24, -38, 64, 88, 41, -52, -105, 48, 15, -106, -77, -98, -116, 95, -111, -38, 12, -60, -21, -74, -123, 86, -24, 23, 43, 48, -24, 12, -70, 75, 63, -5, 80, -45, 26};
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
    msg.setTimeStamp(0.428213642065);
    msg.setSource(57427U);
    msg.setSourceEntity(23U);
    msg.setDestination(46943U);
    msg.setDestinationEntity(55U);
    msg.source.assign("GUXUWDZBXYLXLUMUKXWJGVRDPAZHAWICDJATMNTBEDLUMAVOVCJYHCRVFZJOFVZKIMBENRPBNRWRIHTBKSWENHKRGBQKLYIMPKFXRTJHSDEXACYZUKJRPJVLBKKTQQEQAOPURJCYWQVFHYGMYHUFQNLDXPXSMOGHLICZCPBGRJHNEUNFTADOZLSWTUQVGFDJAPNECW");
    const char tmp_msg_0[] = {-102, -82, -65, -26, 0, -29, 1, -120, -13, -117, -92, -5, -37, -42, 2, 73, -84, 42};
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
    msg.setTimeStamp(0.081204916908);
    msg.setSource(50405U);
    msg.setSourceEntity(141U);
    msg.setDestination(46096U);
    msg.setDestinationEntity(110U);
    msg.seq = 2356846062U;
    msg.state = 174U;
    msg.error.assign("MPXLEGPVGALEZLRDKTHKFPFMCGRCWJJMCYWZJEBHKZEZAZDDYZXKFULQRCWSJIOSHNKWWUBAIYCGJPOTUOFJZHNTBBNEVHERKVFPVQFSDYJGUDATSNQPDQXIJQRVHQXXITAKONG");

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
    msg.setTimeStamp(0.119305556999);
    msg.setSource(5491U);
    msg.setSourceEntity(184U);
    msg.setDestination(6354U);
    msg.setDestinationEntity(119U);
    msg.seq = 2196788775U;
    msg.state = 102U;
    msg.error.assign("USERTBVIVMWQCBOAXJGHTSNCYFBKXPDPGRBOPOGFDEPHWLZIMWLYYILFUVJDLCVMAAUNYWHKTOEOHGASKRBTVSRFEFFHXZWTXIXBPNCRCQQQSWWLKFDKNKYZIDRZEJYYQRATJGAWIKBSFOGSCQCPJOEGGUARYNMSOZRVDHKQJENJWTLNFUXVZDMUMGTAGMNUPOTZKBHXCTEZ");

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
    msg.setTimeStamp(0.35476944665);
    msg.setSource(32335U);
    msg.setSourceEntity(244U);
    msg.setDestination(60284U);
    msg.setDestinationEntity(64U);
    msg.seq = 1569352833U;
    msg.state = 72U;
    msg.error.assign("HPSXESGFHYMFMIUJJOTPSBZULGGXDZHZLWOYXKDRPWGBYMKLCTEOXCERACAQISHAJENQRMYNDNVWKFRLUPUESIAYUYBFSVBZOZWMQJIQPVNITMRPSFKQEZNJRWVDJZLKIWD");

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
    msg.setTimeStamp(0.610714503983);
    msg.setSource(6257U);
    msg.setSourceEntity(94U);
    msg.setDestination(57159U);
    msg.setDestinationEntity(127U);
    msg.origin.assign("BGSYUUXZEZXRBVAHHYDAOKXFOGBTITIGAYKPQRBNNQKSYCGHCUJBMUCAWRSLHOOKOITVYSLZPFNQDMWLJPQWANDUVGKOLPIBEXEGFEUHGJXOFCTAWHMTNFMJIBRCMFIVKPZKBZZFPWRPGSQMNINYRFAZYLSJDTRQNLJI");
    msg.text.assign("ATMQKZVGSXWEHLJZHTBKQQZBTDLJORMKNEFQFEMFLAJNVFZQOSCCFTTNXZUGZBNNWJPEIJ");

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
    msg.setTimeStamp(0.264124973658);
    msg.setSource(63822U);
    msg.setSourceEntity(167U);
    msg.setDestination(217U);
    msg.setDestinationEntity(180U);
    msg.origin.assign("SVSDBCTDTVIXQJSOOKTQSIXWYETZFPGGWRSRYTXYIJOLTDUDOURAFJKKNMLQCIWHEQVNGXFGEEFLBPJGNNPXWBYPSJIMHOAGJNRTFOZXKIEPUHUKGRZMQYDLDZCDIUVAKRYBTDJCNMVWARMHWLZOICKVGJUCYGPZBKNXYRCFMSPABUMMWJLQUTMNOVL");
    msg.text.assign("JOLLZDAINDWMDBBVFVZIHUYTFKHGCZKSEGNNAHKGOUXDCSMBYEKZGTJARQMEPUMWQGCPJXJIMPPGRYOARDEBUDLAZAFLPQXWOJTJYHRMVEUSEICAJVZGWFIMGKHFZZQKKAWZKQLOITXVJYBKMYBSPFIAOHODINFHXGCVLMNTDSWOUTRUWWTHPHQDYQ");

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
    msg.setTimeStamp(0.642189772716);
    msg.setSource(6892U);
    msg.setSourceEntity(209U);
    msg.setDestination(8132U);
    msg.setDestinationEntity(98U);
    msg.origin.assign("ZRCUEHCRMGUJTOBIZTMVNGTUPYLJDPOSPDHJMIFHAYXMXQQYJOPULEKNLJVKHXVKNWSRPZPTKSNXYEGGAGBIUIRVUWHIVYCWVHQWTJZOZGUIKCBFRAXAAIJPYAQUNCLOSNBMJWWDIWPL");
    msg.text.assign("TQHXVEUYVWJFIRHOCZKRZGMPBMERMQXMSQNPZCEESBGWVCVZKIJOJICJZBMHXXPZTQKYOFJTNIWDDEGYXXVKDSDTHABDGYAALUPAKAIILPENTUROSZBFSCAWOMHTXSWPDRUBWNFRBUGHFAVLPPHOFTMJKURYHXWDSGYNDFUHQQQFEIDGJUTRVCAITJEKNQMEVKSKVMMJXCYIYWLLNGNOCALBZSAJGBWNLQ");

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
    msg.setTimeStamp(0.646854890575);
    msg.setSource(57731U);
    msg.setSourceEntity(177U);
    msg.setDestination(2426U);
    msg.setDestinationEntity(185U);
    msg.origin.assign("GFAXOCSGHVURHWNONBZPKZJFGOTIIFCRGQJQXJDHHESRWOUUIVDLENHBTPUFKWUBBMUXIVCTAMFQYF");
    msg.htime = 0.707474042431;
    msg.lat = 0.739633276094;
    msg.lon = 0.202403608424;
    const char tmp_msg_0[] = {-37, -64, -9, -70, 91, 57, -7, 3, 16, -106, 3, 87, -14, 24, 48, -36, 108, -5, 16, -64, -94, -60, -55, -98, -65, -67, -92, -17, -7, 92, 97, -7, -96, -55, 45, -29, -101, 103, 50, -88, -66, 55, 9, -7, -88, 70, -57, 110, 48, -46, -39, -9, -83, 72, -89, 44, -29, 39, 13, 9, -8, -96, -112, 51, -112, 114, 33, -9, 10, -56, 29, -103, -111, 82, -40, -27, -41, -63, -118, 7, 115, -47, -93, 98, 113, -75, -101, 69, -43, 20, -48, -123, -108, 42, 120, -45, 39, -46, 4, -57, -70, -128, -16, -51, -109, -66, -106, 37, -92, -5, -127, 16, 93, 50, -31, 118, -27, -14, -19, -98, -116, -87, -53, -85, 60, -67, -115, 61, -98, 66, -71, 22, 22, -62, 5, -109, -63, 95, -4, -86, -94, -126, 100, -104, -25, 12, -52, -44, 10, 2, 104, 62, -59, -91, 111, -38, -117, 39, -39, 105, -107, 1, -50, -59, -1, 110, -25, -6, 37, 15, 79, -49, -13, -82, -17, 97, 118, 76, 43, 83, 7, 99, 112, 66, -44, 60, -21, 29, 102, 90, -97, 73, -120, -23, -34, 30, -128, 89, -63, -117, -15, -72, 86, -72, 96, 5, -106, 101, 110, -22, 80, -70, -65, -125, 4, 65, -117, 39, -28, -28, 104, 81, 73, 83, -66, 66, -27, -70, -2, -49, 100, 113, 92, -32, -29, 114, -86, -64, -18, 111, -41, 25, -99, 17, 56, -97, -82, 5};
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
    msg.setTimeStamp(0.916060548303);
    msg.setSource(57103U);
    msg.setSourceEntity(138U);
    msg.setDestination(10921U);
    msg.setDestinationEntity(29U);
    msg.origin.assign("XUVDGEURDCEHLLPXMOWAKFMDVZCKSPOIEHFDKVMUHPQWOQRDTELPNWISECBRVFRWTVMQSNITLYLNWTYTPBRBMBGYCQGBGWPSIZGYTAVSNWEKZYOVJTWJNQMDXJUJAFIRFSOEABRICMKUMZHGKJJIZGVZUXVSPINUNCKLJNZWWHXPYIRURZJAKHEAHQYQQBSXSQKIHHQGOXBNSACLADJ");
    msg.htime = 0.997686762051;
    msg.lat = 0.0034359310825;
    msg.lon = 0.510334019132;
    const char tmp_msg_0[] = {-96, 15, -125, -51, -109, 61, -100, 53, -122, 19, -8, 47, 102, 104, 81, 53, -103, 26, -56, 59, -97, 10, -104, -72, -12, 94, 46, -77, 87, -69, 49, -83, 111, -127, 121, 87, 15, 27, 110, -92, 21, 98, -90, 34, -74, -77, 38, 5, 102, 64, -52, 18, -38, 50, -18, 112, -18, 42, 28, 77, -44, -127, 109, -25, -51, 108, -32, -92, 17, -79, 11, -81, 119};
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
    msg.setTimeStamp(0.327543669291);
    msg.setSource(61799U);
    msg.setSourceEntity(155U);
    msg.setDestination(26752U);
    msg.setDestinationEntity(166U);
    msg.origin.assign("BPSAMLDXKSPCZPLAEMNRDETTGFQIRIOJJNMFD");
    msg.htime = 0.558760260037;
    msg.lat = 0.270676000477;
    msg.lon = 0.500770997868;
    const char tmp_msg_0[] = {-3, 45, 101, 13, -91, -8, 58, -100, -20, 50, 86, -70, 88, -107, 112, -96, 117, 9, -58, -17, 56, -127, 120, -35, 1, 42, 29, 62, 73, 99, -21, 105, 64, -44, 44, 9, 99, 54, -7, 75, 44, -112, 63, 10, 112, 71, 58, 65, 123, -49, -21, 118, 7, -93, 90, 10, 0, 43, -92, -113, 46, -120, -112, -34, -79, -71, -17, -120, 51, 56, -70, 26, -56, 35, -13, -91, 122, -89, -74, -109, -13, -106, 117, 81, -7, 113, 81, 35, -57, -114, 7, 123, -36, -16, 10, -110, -13, 11, -7, 102, -110, 15, -107, 11, 79, -127, -52, 14, 22, 12, 107, -116, -74, -15, 10, 68, 113, 122, -88, -16, 39, 93};
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
    msg.setTimeStamp(0.280039019998);
    msg.setSource(43882U);
    msg.setSourceEntity(147U);
    msg.setDestination(33891U);
    msg.setDestinationEntity(214U);
    msg.req_id = 34759U;
    msg.ttl = 43929U;
    msg.destination.assign("XDZZPSHAUSTLSYBKZORFBZJVLDSCKWQCAVJXAMCSCXDBEOWJOTJEAFWPLWPIORLUNAUYKXTFQIWQBFTYHGEINIKJUDGYEBHBJRBWYIKEYAENXCPNLCWOQSQALMGYGWCBCMTDAFPZTDGUREDMSZXZIQOGFQNDMGRVORJNNOCJESNZRFPXFZUYVBHHIVASDYQVPMHSURKDTNMPIQRKTLMXVHKYCJVOIXZPHVNAORLUUG");
    const char tmp_msg_0[] = {-72, -12, 51, -109, -4, 35, 89, 109, -4, -83, 34, 25, 48, -77, -118, 51, -13, -9, -48, 38, 41, 47, 91, 18, -1, 63, -6, 101, 55, -5, 68, 3, 60, -71, 111, -62, -32, 61, 96, 47, -92, 67, 116, -58, -76, 51, 100, -2, 45, 117, 55, 101, 100, -24, -33, 69, 50, 1, -60, -30, 30, 11, 15, -100, 109, 77, -21, -117, -108, -3, 56, 115, -33, 27, -106, -27, -99, -43, 68, -42, -107, -109, 0, 6, -52, 109, 8, -76, 85, 8, -5, 20, 117, -72, 124, 64, 49, -117, -26, -68, -70, -21, 111, 77, 37, 31, -106, 55, 45, 85, 29};
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
    msg.setTimeStamp(0.151566128386);
    msg.setSource(56382U);
    msg.setSourceEntity(26U);
    msg.setDestination(19606U);
    msg.setDestinationEntity(22U);
    msg.req_id = 15339U;
    msg.ttl = 35635U;
    msg.destination.assign("KAKEUYPENTANGRG");
    const char tmp_msg_0[] = {73, 86, -120, 105, -15, -83, 22, -13, -103, -5, 100};
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
    msg.setTimeStamp(0.583337164832);
    msg.setSource(11829U);
    msg.setSourceEntity(113U);
    msg.setDestination(12997U);
    msg.setDestinationEntity(145U);
    msg.req_id = 13342U;
    msg.ttl = 8705U;
    msg.destination.assign("VTWRHINGCVDYWTLJTRMEVCUGUZABMYBWMLHWLWPL");
    const char tmp_msg_0[] = {-28, -16, 5, -59, -83, 109, 114, 10, 16, -90, 123, -72, 99, -127, -57, 106, 114, 91, -106, -91, -92, -94, -20, 88, 120, -100, -84, -60, -101, -94, 30, -108, -125, -116, 37, -60, -49, 82, -107, 98, -40, -122, -93, -53, 121, 26, 31, 99, 99, -124, -112, 20, -39, -30, -105, 73, -104, -2, 71, 53, -4, 7, -54, 119, 40, -26, 82, 32, 121, 54, -105, 88, 66, -121, 30, 89, 103, 122, 22, 98, -72, 87, -104, -20, 79, 71, -31, -68, 102, -5, -94};
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
    msg.setTimeStamp(0.534881520134);
    msg.setSource(38191U);
    msg.setSourceEntity(154U);
    msg.setDestination(27599U);
    msg.setDestinationEntity(57U);
    msg.req_id = 60028U;
    msg.status = 23U;
    msg.text.assign("VLFICPWHVSSTMPKZMSSTLXTWMQZDNUCAXKTADKOS");

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
    msg.setTimeStamp(0.568075790193);
    msg.setSource(1660U);
    msg.setSourceEntity(185U);
    msg.setDestination(16097U);
    msg.setDestinationEntity(218U);
    msg.req_id = 13028U;
    msg.status = 239U;
    msg.text.assign("GYLJMHTOKJKPTYDQTBWMNOXXSTFGNGROYWNCDMVREGK");

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
    msg.setTimeStamp(0.576539925999);
    msg.setSource(14387U);
    msg.setSourceEntity(195U);
    msg.setDestination(63338U);
    msg.setDestinationEntity(203U);
    msg.req_id = 64009U;
    msg.status = 57U;
    msg.text.assign("BPMZZSXUTMMDMNANQJHQQLHDLJVXWRJNRFLUIBDTERTARIXVVDQHBWCSUXWCLZQGQQWDP");

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
    msg.setTimeStamp(0.792883264488);
    msg.setSource(39346U);
    msg.setSourceEntity(56U);
    msg.setDestination(8089U);
    msg.setDestinationEntity(178U);
    msg.group_name.assign("ZCIEUMATUAOLQFWKGHBPKNLSWITYQQDFGAUCVFNMVIRTVBCQZNGBYNZEPYRBOLCDHIUNSQAPOABDLFMSXBFELHTHGZZKDZNCRGVVJKTENBEEYHNHPOGXQNIKMKENLPSTRJYMXFVEDCTAUBUIDLZUOSKHJKVXOQRZGCPHRMWDBHSXDFRSXCTIVWIJPXAXFORISGPFACOWYGSJZJYKAMATTGJOUVSWRWQBX");
    msg.links = 579958291U;

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
    msg.setTimeStamp(0.167257535697);
    msg.setSource(10965U);
    msg.setSourceEntity(234U);
    msg.setDestination(61339U);
    msg.setDestinationEntity(238U);
    msg.group_name.assign("GSIGZKWJXWVORXRJKQAIWBKJJODYGROF");
    msg.links = 143683366U;

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
    msg.setTimeStamp(0.956722022605);
    msg.setSource(59349U);
    msg.setSourceEntity(102U);
    msg.setDestination(5545U);
    msg.setDestinationEntity(235U);
    msg.group_name.assign("PCRCGBATKFDLMSMTNDJUVEBZQQWGJIUHZQJENOTNOBRFDZXZBDMYZXWUVTAZQYUWKIOJHPHDJVSUJRZIMYFTKNCASJIWBBEHJVDNLUBEGZRUMKNVVVDROS");
    msg.links = 878412598U;

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
    msg.setTimeStamp(0.569547530517);
    msg.setSource(17573U);
    msg.setSourceEntity(27U);
    msg.setDestination(994U);
    msg.setDestinationEntity(102U);
    msg.groupname.assign("BVQRTGCSUBOPPADYGMNMSHOSGRLVYUYDDZFZXEMWIUJUTYTKICHUEFXJABKSWIBKVGVSCLBDMFPSTCJMOENNFAIZATQRDBQNZYDG");
    msg.action = 177U;
    msg.grouplist.assign("XTAMBUSYJUIKDSYOULZOWZVGQNJCCWADIVWJUSTVWHJPCWDLSSILQGPEPGXPVVUIBZLCMCKQHYRZRIDEBJSCOMCKRTXBUIRHBEMBFQXENTG");

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
    msg.setTimeStamp(0.919587137409);
    msg.setSource(62056U);
    msg.setSourceEntity(96U);
    msg.setDestination(56114U);
    msg.setDestinationEntity(240U);
    msg.groupname.assign("SOWLRWHMQKXXUSHDFAUYWUGIQGWRGBQFPCQRSKJCESJRNADUVDUBDIHJOFZVVLNPPLOXRMIWHSCXJBZBZBEDFIZQPJTFCGYOLENEYMKJCJRALDKOYYXBHWAUPJKWNLWFEGEPQICYNAVFOOJTSMQLUAMCYQDKAIFJOLTZESBVIGELUIDPYBPGTKZQXPGNHTVCGTZZCMBHYNXEHFAZMKOTSTWGXQHKMTNHNRADOVXIBXNVERDU");
    msg.action = 145U;
    msg.grouplist.assign("JKJOBLFVRHWKTLABVQAWGZFKDPUXPURFATSMGCABYTVCQOZXWIEGCYRILCGEYXGFRONBLBCEILXLCZROSDSRBDJKLJJYQMVPNVSEJXKAGSYRBOHQEZNFEUVZPKJIDQANQNHTMOCTHTQPDDVQEFHUZHPXVDMWZUGDFWRAWYHVULSCXD");

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
    msg.setTimeStamp(0.0832064378675);
    msg.setSource(60930U);
    msg.setSourceEntity(65U);
    msg.setDestination(59110U);
    msg.setDestinationEntity(143U);
    msg.groupname.assign("HDTVNXKOYLSDPIYURPTVXSDIHGNSAXQGRBCMBHHSECUWLKKQECFJVZKROWNBFOPXJJLWWZAHNLTDOYPMEDWYOYCZQAHVYSXME");
    msg.action = 249U;
    msg.grouplist.assign("WZKNNRVRLPXMLGZWABECJMUXPEAERYMDIJIMBFIVXYHOEMALMQUDXJAYDNTCNQTKWXESFZPROYMZODBEUHQCXSBIGYEECNULFBSIPULGRJUKUKDFXZABXXGNHNZFLVMDVGSVZCRBSZAIRQCVTGANTKYBIVLTSTYVJKGAUKHWRCFYSHHIAFZQHFBVPJAEMHOWWTWPJTWGOGTQCRQMPDLPZIFVOLDJSGOLOSTPJCSHCPEWIKORJKQYHDFUNBOW");

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
    msg.setTimeStamp(0.167631989126);
    msg.setSource(54733U);
    msg.setSourceEntity(93U);
    msg.setDestination(47065U);
    msg.setDestinationEntity(127U);
    msg.value = 0.059993902608;
    msg.sys_src = 57120U;

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
    msg.setTimeStamp(0.362073549314);
    msg.setSource(39244U);
    msg.setSourceEntity(49U);
    msg.setDestination(39379U);
    msg.setDestinationEntity(93U);
    msg.value = 0.558356357504;
    msg.sys_src = 168U;

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
    msg.setTimeStamp(0.2652323009);
    msg.setSource(58978U);
    msg.setSourceEntity(208U);
    msg.setDestination(12894U);
    msg.setDestinationEntity(68U);
    msg.value = 0.0661731346827;
    msg.sys_src = 55514U;

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
    msg.setTimeStamp(0.0663094933471);
    msg.setSource(26325U);
    msg.setSourceEntity(76U);
    msg.setDestination(30198U);
    msg.setDestinationEntity(35U);
    msg.value = 0.350150443785;
    msg.units = 70U;

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
    msg.setTimeStamp(0.0514214473539);
    msg.setSource(64381U);
    msg.setSourceEntity(112U);
    msg.setDestination(16096U);
    msg.setDestinationEntity(26U);
    msg.value = 0.910297862354;
    msg.units = 217U;

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
    msg.setTimeStamp(0.457576929156);
    msg.setSource(27012U);
    msg.setSourceEntity(0U);
    msg.setDestination(61099U);
    msg.setDestinationEntity(28U);
    msg.value = 0.913237193707;
    msg.units = 169U;

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
    msg.setTimeStamp(0.319027554928);
    msg.setSource(12183U);
    msg.setSourceEntity(170U);
    msg.setDestination(35372U);
    msg.setDestinationEntity(56U);
    msg.base_lat = 0.970979187855;
    msg.base_lon = 0.411026463619;
    msg.base_time = 0.298082233068;
    IMC::HistoricSample tmp_msg_0;
    tmp_msg_0.sys_id = 18606U;
    tmp_msg_0.priority = -96;
    tmp_msg_0.x = -2315;
    tmp_msg_0.y = 23014;
    tmp_msg_0.z = -19867;
    tmp_msg_0.t = -9314;
    IMC::Rows tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeout = 23691U;
    tmp_tmp_msg_0_0.lat = 0.471482781151;
    tmp_tmp_msg_0_0.lon = 0.824853734042;
    tmp_tmp_msg_0_0.z = 0.394542185433;
    tmp_tmp_msg_0_0.z_units = 10U;
    tmp_tmp_msg_0_0.speed = 0.509485605683;
    tmp_tmp_msg_0_0.speed_units = 179U;
    tmp_tmp_msg_0_0.bearing = 0.348240615871;
    tmp_tmp_msg_0_0.cross_angle = 0.616740310791;
    tmp_tmp_msg_0_0.width = 0.380029199154;
    tmp_tmp_msg_0_0.length = 0.125052250066;
    tmp_tmp_msg_0_0.hstep = 0.177997466092;
    tmp_tmp_msg_0_0.coff = 25U;
    tmp_tmp_msg_0_0.alternation = 109U;
    tmp_tmp_msg_0_0.flags = 190U;
    tmp_tmp_msg_0_0.custom.assign("LOEVHQNTGRXFWDHIUJFWRKSCBBHLPLMDUZMFQPDEXUVGKYGSTVCYACYPSCRZJNCBSHMCMWPVSMYBNZDARVIZUGEEPBWLZSYXVPGORIYYDUIQXZTPXEVKHJSQZEMEFEAMNQJUQZHYO");
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
    msg.setTimeStamp(0.910744962724);
    msg.setSource(24402U);
    msg.setSourceEntity(173U);
    msg.setDestination(55465U);
    msg.setDestinationEntity(6U);
    msg.base_lat = 0.211393714538;
    msg.base_lon = 0.0287469077733;
    msg.base_time = 0.46920288856;
    IMC::RemoteCommand tmp_msg_0;
    tmp_msg_0.original_source = 41273U;
    tmp_msg_0.destination = 29210U;
    tmp_msg_0.timeout = 0.147611997086;
    IMC::DesiredControl tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.x = 0.280778463522;
    tmp_tmp_msg_0_0.y = 0.579704473116;
    tmp_tmp_msg_0_0.z = 0.454732993814;
    tmp_tmp_msg_0_0.k = 0.160501276637;
    tmp_tmp_msg_0_0.m = 0.195345364164;
    tmp_tmp_msg_0_0.n = 0.812612792588;
    tmp_tmp_msg_0_0.flags = 137U;
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
    msg.setTimeStamp(0.244836432435);
    msg.setSource(65041U);
    msg.setSourceEntity(251U);
    msg.setDestination(17447U);
    msg.setDestinationEntity(50U);
    msg.base_lat = 0.657972274355;
    msg.base_lon = 0.528208514206;
    msg.base_time = 0.949464239353;
    IMC::HistoricSample tmp_msg_0;
    tmp_msg_0.sys_id = 57787U;
    tmp_msg_0.priority = 111;
    tmp_msg_0.x = -2213;
    tmp_msg_0.y = -11300;
    tmp_msg_0.z = -14047;
    tmp_msg_0.t = 23343;
    IMC::Event tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.topic.assign("WLFROMUFDFTCTCZDYAOQUCIAAKFQKJDJVNYVCMJGJBSUOZBPRTVKLQXFBLEJYCMPMIAXHZMEGUPVFDELHQMDJORULEKTAIDWUMIWBUXNXGVHHYZRRHRWSXUUTIEGYTOODXM");
    tmp_tmp_msg_0_0.data.assign("YELUEBIWIFOALWPGFXIMSJCKGYQQWAZFHCLHYBVIRWKCXCDOJQFMVPSYGQRPSVNAZRTOVZBNDLJHDLCHVUYYAMKSZVYEYXQUIXFNEHVFKYPNBXPZXGTTSMAJTBWGDUVLKYRHJALVJIUKRQGSDRDESKAAZDFQQSKZWMQXXTULXCN");
    tmp_msg_0.sample.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.143239024356);
    msg.setSource(50975U);
    msg.setSourceEntity(80U);
    msg.setDestination(13425U);
    msg.setDestinationEntity(100U);
    msg.base_lat = 0.818882097604;
    msg.base_lon = 0.621781822278;
    msg.base_time = 0.272624128572;
    const char tmp_msg_0[] = {73, -88, 125, -51, -108, 111, 4, 28, -29, 38, -25, -101, -127, 29, 102, 103, -9, 124, 56, 14, 119, 100, 48, 90, -18, 62, 28, -127, 37, 100, 103, 52, -38, -96, 66, 56, 0, -91, -48, -33, 77, -60, 100, -59, -44, -76, 19, -40, 120, 124, 54, 79, 9, 72, 65, 89, 119, -61, 90, -58, -113, -66, 16, 110, 45, 54, -73, -3, 68, 52, -87, -44, 41, -19, 6, 78, -121, -106, 3, -31, 107, -31, 99, -24, -121, 30, 99, -61, 81, 87, -37, 116, 94, -27, -75, 15, -82, 64, -44, 45};
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
    msg.setTimeStamp(0.257834804647);
    msg.setSource(20732U);
    msg.setSourceEntity(112U);
    msg.setDestination(46197U);
    msg.setDestinationEntity(158U);
    msg.base_lat = 0.202379330029;
    msg.base_lon = 0.585378873633;
    msg.base_time = 0.938869794216;
    const char tmp_msg_0[] = {31, -24, -56, -28, -116, -47, -46, 15, 71, -12, 71, 126, 23, -72, 33, 52, -60, -39, 38, 125, -119, -75, -42, 87, -10, -114, -128, 119, -32, 76, 23, 79, 19, 74, 81, -81, -128, -17, -74, 2, -12, 79, 125, 45, -5, -72, -54, 42, 9, -116, -40, 29, 16, -17, -43, -91, -78, 59, 75, -80, 19, -34, -124, 9, -2, 12, 74, 96, 103, 111, -13, -21, 34, 92, 80, -91, 55, -51, 85, 33, -16, -128, 43, -34, -27, 56, 2, 64, 84, -24, -69, 53, -68, 84, -85, 76, -92, -53, -77, 87, -6};
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
    msg.setTimeStamp(0.493315953335);
    msg.setSource(32480U);
    msg.setSourceEntity(131U);
    msg.setDestination(48634U);
    msg.setDestinationEntity(125U);
    msg.base_lat = 0.833791836453;
    msg.base_lon = 0.958523104347;
    msg.base_time = 0.372141857924;
    const char tmp_msg_0[] = {-48, -109, -123, -43, -94, 64, -107, 88, 40, -11, 90, 3, -128, -30, 52, -39, 66, -79, -47, -62, 78, 112, -24, 84, 11, 23, 4, -77, 11, 114, -45, -97, 48, 72, 97, -10, 8, 4, -21, -73, -16, -57, -31, -26, -17, -64, -111, 85, -37, -7, 31, -38, 72, 81, 54, 40, -103, 26, -75, 66, -35, 86, 101, -36, 79, 9, 25, -124, -51, 38, -32, -37, -38, 33, -121, 58, 0, -94, -19, -56, -98, 42, -75, 51, -94, -49, 31, 88, 50, 3, -42, 24, 117, 7, 111, -18, -14, 70, 15, -122, 51, 70, 87, -16, 91, 60, -2, 76, -51, 121, 59, 107, -77, 11, -106, 68, -41, -52, -58, -8, -98, -42, -6, 118, -62, -85, 118, -80, 51, -60, -4, -128, -61, -59, 90, 36, 40, -96, 78, 43, -8, -109, 115, 10, -103, -91, -41, -64, -62, 71, -21, 82, 89, 116, -44, -107, -62, -5, 109, 92, 84, 65, -16, -107, -66, 76, 114, -100, 102, -44, -78, 114, 83, -92, 124, 110, 41, -125, 31, 77, -108, 67, -85, 42, -113, -17, 82, -94, 108, -77, 73, -82, -40, -87, 56};
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
    msg.setTimeStamp(0.171173606503);
    msg.setSource(43286U);
    msg.setSourceEntity(91U);
    msg.setDestination(23610U);
    msg.setDestinationEntity(152U);
    msg.sys_id = 54561U;
    msg.priority = 53;
    msg.x = -4311;
    msg.y = -19557;
    msg.z = 8672;
    msg.t = 6831;
    IMC::CompressedHistory tmp_msg_0;
    tmp_msg_0.base_lat = 0.970127640132;
    tmp_msg_0.base_lon = 0.325960869805;
    tmp_msg_0.base_time = 0.518058060349;
    const char tmp_tmp_msg_0_0[] = {-127, -12, 66, 0, 10, 98, 65, 85, -108, 87, -12, 121, 79, 83, -5, -15, 66, -71, -28, -37, 2, 4, 16, 126, -20, 79, 77, 63, 119, 16, 48, 123, -126, 16, -56, -27, -23, -75, -27, -34, -46, -111, 82, 102, -84, 36, -122, 95, -120, 15, 38, 102, -33, 75, 15, 31, -120, -39, -48, -70, 10, 120, -42, -54, -10, 30, 76, 96, -4, 32, -86, 118, 124, 16, -18, -114, -75, -19, -99, -66, 77, 11, 26, 78, -75, -31, -5, -61, -60, -13, -77, 87, -67, 95, 45, 59, -58, 51, 10, 117, 114, -112, -125, -61, -101, -13, -124, 25, 54, 97, 77, -83, 61, -88, -14, 93, -57, 3, -20, -49, 123, -52, -5, -127, -6, 93, 78, -118, -84, -26, -56, -15, -43, 4, -109, -110, -76, -125, -83, -15, 36, 105, 70, 13, 78, -120, 74, 116, 125, -126, 22, -115, -115, -92, -121, -54, 31, -76, 29, 67, 48, -11, -32, -5, 93, -82, 125, 64, -101, 7, 51, -103, -118, 107, 66, -81, -59, 11, -83, 35, -128, 4, -54, 119, 106, 61, 37, 67, 73, -93, -32, -66, 32, -81, 40, -2, 82, -17, 85, -117, 3, -31, -33, -51, 31, 71, 94, -99, -8, 3, -74, -104, -128, -30, 32, 40, -83, 12, 117, 38, 97, -5, 36, 65, -5, -48, 26, -20, -73, -112, 81, -99, 40, 61, -112};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.220296002719);
    msg.setSource(17275U);
    msg.setSourceEntity(115U);
    msg.setDestination(37695U);
    msg.setDestinationEntity(153U);
    msg.sys_id = 56228U;
    msg.priority = -65;
    msg.x = 8985;
    msg.y = -935;
    msg.z = -29579;
    msg.t = 22411;
    IMC::ButtonEvent tmp_msg_0;
    tmp_msg_0.button = 180U;
    tmp_msg_0.value = 62U;
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
    msg.setTimeStamp(0.299668413628);
    msg.setSource(47114U);
    msg.setSourceEntity(174U);
    msg.setDestination(41768U);
    msg.setDestinationEntity(94U);
    msg.sys_id = 16430U;
    msg.priority = 124;
    msg.x = -4206;
    msg.y = 1635;
    msg.z = 5659;
    msg.t = 21103;
    IMC::PlanStatistics tmp_msg_0;
    tmp_msg_0.plan_id.assign("RKHKVFMYJKJVFTPMIXVYUUZMWVCEPSHFRRWYWTHYUKHGOWPTPLOXARUALRYDOLXPITGEEJDDCTNECZMGEQVPZMWNIGKVAGIZHSZLJJHJPPMSWXREDTTBLQBKACCORMDCORXFTHMMVHDJGLZTQKISDFOUNESLVLIUBNIACWBFSQR");
    tmp_msg_0.type = 8U;
    tmp_msg_0.properties = 183U;
    tmp_msg_0.durations.assign("GCFTSKKFAMT");
    tmp_msg_0.distances.assign("KAQEYMBGAQMBVE");
    tmp_msg_0.actions.assign("LQYFITPQJHSPPOWTCALOTESCXIUFFKCUPQVJVAXKUBYSDWPNIJQERNXASXEBKJCPTVVLEOFXOZNATXGBKOUYEHMZOWZJJURSLIZPYYDLHGYPUKNQERSWRRZCSQJABDWYNVIHFKDILGNLKFTWBQDHHKDACWMTQWERKJRVNVAFJQEZYBYVIMBTC");
    tmp_msg_0.fuel.assign("LIDWFKGILLEXHBKHGTJFYMEFGPWINAVQRIQUNIKCZGIDEJWYJCYAJXGVUJPAJMZFZMHYEOWODCCFNDLKZLEBRVOLMSWTTNQIZRTBEWSXGHNQGBYSZOPSLCXMUAKTFZANXPYJVAPLTTCBVRRJNPFDDCHXBLUFRZCSDBABRBRQIJWEFUPUWWCTVHMQUSDDOSMCEUWZNBXINFXVGXOTPVRHZEKQYOKDKSQAOVGGA");
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
    msg.setTimeStamp(0.471008437868);
    msg.setSource(40801U);
    msg.setSourceEntity(121U);
    msg.setDestination(34843U);
    msg.setDestinationEntity(234U);
    msg.req_id = 43089U;
    msg.type = 89U;
    msg.max_size = 14918U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.594311749088;
    tmp_msg_0.base_lon = 0.860038575013;
    tmp_msg_0.base_time = 0.607733859842;
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
    msg.setTimeStamp(0.602513364776);
    msg.setSource(48675U);
    msg.setSourceEntity(176U);
    msg.setDestination(15639U);
    msg.setDestinationEntity(210U);
    msg.req_id = 50202U;
    msg.type = 149U;
    msg.max_size = 36712U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.469669805303;
    tmp_msg_0.base_lon = 0.960135401431;
    tmp_msg_0.base_time = 0.439599373027;
    IMC::HistoricSample tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.sys_id = 27791U;
    tmp_tmp_msg_0_0.priority = -106;
    tmp_tmp_msg_0_0.x = 18832;
    tmp_tmp_msg_0_0.y = -25413;
    tmp_tmp_msg_0_0.z = 17357;
    tmp_tmp_msg_0_0.t = -8094;
    IMC::ReportedState tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.0566977271614;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.689856778381;
    tmp_tmp_tmp_msg_0_0_0.depth = 0.248930706958;
    tmp_tmp_tmp_msg_0_0_0.roll = 0.0763578934098;
    tmp_tmp_tmp_msg_0_0_0.pitch = 0.586467269973;
    tmp_tmp_tmp_msg_0_0_0.yaw = 0.470783161668;
    tmp_tmp_tmp_msg_0_0_0.rcp_time = 0.294685433286;
    tmp_tmp_tmp_msg_0_0_0.sid.assign("GIYATMGCQMHCBOEPDQK");
    tmp_tmp_tmp_msg_0_0_0.s_type = 208U;
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
    msg.setTimeStamp(0.290957361397);
    msg.setSource(37869U);
    msg.setSourceEntity(114U);
    msg.setDestination(22773U);
    msg.setDestinationEntity(174U);
    msg.req_id = 39118U;
    msg.type = 17U;
    msg.max_size = 17053U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.918388906601;
    tmp_msg_0.base_lon = 0.456172152362;
    tmp_msg_0.base_time = 0.614984314403;
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
    msg.setTimeStamp(0.623935219677);
    msg.setSource(21436U);
    msg.setSourceEntity(177U);
    msg.setDestination(61524U);
    msg.setDestinationEntity(97U);
    msg.original_source = 17097U;
    msg.destination = 14950U;
    msg.timeout = 0.825409322652;
    IMC::CompressedImage tmp_msg_0;
    tmp_msg_0.frameid = 148U;
    const char tmp_tmp_msg_0_0[] = {57, 1, -76, -75, -58, 33, 23, 18, 18, -120, -70, 89, 2, 29, 98, 65, 125, 94, -58, 102, 98, 83, 98, -35, -120, 7, -117, 95, -44, -116, 37, 20, -100, -79, -12, 44, -7, 119, -98, 85, 117, -85, -120, 57, 67, 15, 119, -41, -108, -122, -125, 89, 87, -125, -30, 99, -62, -84, -35, 53, 46, 45, -39, 26, -115, 53, 109, 4, -31, 29, -54, 100, -37, -109, -124, 38, 56, 7, -104, -97, 15, 92, 17, 106, -126, 99, -121, -28, -25, 49, -66, -116, 18, -116, 39, 8, 3, 49, -111, 41, 14, -11, -46, 113, 113, -49, 52, 27, -90, 107, -74, -88, -117, 83, -98, 33, -85, 22, -79, -41, 104, 39, 84, 9, -121, 77, 116, 73, -97, 13, -19, -103, -15, -128, 61, -78, 85, -45, 28, 107, -41, -77, 60, -59, 50, 10, 63, 97, 59, -74, -43, -73, -127, -89, -19, 119, 71, -43, 5, -72, 32, -91, 101, -48, 24, -127, -77, 64, 72, -26, 17, -109, -101, 46, 48, -54, 62, -89, -71, -42, 52, 109, 52, -96};
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
    msg.setTimeStamp(0.652846135152);
    msg.setSource(65508U);
    msg.setSourceEntity(157U);
    msg.setDestination(44454U);
    msg.setDestinationEntity(113U);
    msg.original_source = 51051U;
    msg.destination = 46604U;
    msg.timeout = 0.60454470188;
    IMC::LeakSimulation tmp_msg_0;
    tmp_msg_0.op = 154U;
    tmp_msg_0.entities.assign("ZLDFHCDSGRRUSETSDGGRYZBVYXPEEDIAEJFIXHHGIHCOAHLNUQWEMZTRPTVASVFJBUSEVNXWSKNTBQIWJDUEYRLDWOHZMJMPEYJMPIPFVVGYQLCBCZQRXZWKJZDIOKHSHOTZANAQVOOTFWBZGWJIIGYKQNOKMPCFPXJQBFACOHMMUXYSGUNNFAAKQJDNRXLKDWVIRVAGKMETCPSODGLBUFULCKLLRTPMRNKWWJTSICQXQOU");
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
    msg.setTimeStamp(0.800324797213);
    msg.setSource(42327U);
    msg.setSourceEntity(250U);
    msg.setDestination(15397U);
    msg.setDestinationEntity(254U);
    msg.original_source = 3267U;
    msg.destination = 48207U;
    msg.timeout = 0.811847665453;
    IMC::FollowSystem tmp_msg_0;
    tmp_msg_0.system = 24331U;
    tmp_msg_0.duration = 44126U;
    tmp_msg_0.speed = 0.715777604124;
    tmp_msg_0.speed_units = 175U;
    tmp_msg_0.x = 0.623420743854;
    tmp_msg_0.y = 0.307617924226;
    tmp_msg_0.z = 0.776802582446;
    tmp_msg_0.z_units = 116U;
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
    msg.setTimeStamp(0.816008556964);
    msg.setSource(61222U);
    msg.setSourceEntity(46U);
    msg.setDestination(49538U);
    msg.setDestinationEntity(248U);
    msg.type = 106U;
    msg.comm_interface = 47261U;
    msg.model = 39733U;
    msg.list.assign("CKDWRESBHHARLGKJWQXHDJ");

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
    msg.setTimeStamp(0.466081553656);
    msg.setSource(16797U);
    msg.setSourceEntity(152U);
    msg.setDestination(29110U);
    msg.setDestinationEntity(223U);
    msg.type = 60U;
    msg.comm_interface = 28850U;
    msg.model = 47663U;
    msg.list.assign("QFXUKZBBTVIGYSLROVHTNSDXUFYPOAEVKZNNDQQMHLJWSCDHWUWMUVSQHWGJCYZAAJISLZFHIXCAYEXTDKNPXALTTHFEHBBMKSMMRANQTRPUGGQLGLTOKEDGIYRJUGKVFMXYRSKGUCDJOEJOJQLZPXCYUWDPAOBMXBLWTEXEIECJPNTDTMW");

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
    msg.setTimeStamp(0.528077433562);
    msg.setSource(49997U);
    msg.setSourceEntity(236U);
    msg.setDestination(59031U);
    msg.setDestinationEntity(95U);
    msg.type = 165U;
    msg.comm_interface = 39205U;
    msg.model = 39455U;
    msg.list.assign("USUUQRFIONEYWXVWFMPYZPWALZMNGGDPZIEWWIHLJ");

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
    msg.setTimeStamp(0.561261495304);
    msg.setSource(49481U);
    msg.setSourceEntity(136U);
    msg.setDestination(7221U);
    msg.setDestinationEntity(49U);
    msg.type = 176U;
    msg.req_id = 3070661934U;
    msg.ttl = 10691U;
    msg.code = 107U;
    msg.destination.assign("HYSBRMUVPYNLWENROKRMBWAQHQLIBQICTMRBSXHGPUCSYHCWIFZZRRZHPSBLTGYYDKFAGEATQXNJIJXJZNTTWUJFWAYNKEFUVGWLLWPDZFMWJOVQSSUQZBCDMCXBVNJIOLUDCEOLGMASZLFDDYZRHPHDPVAUTBOACALYQVEOLUWFQJFIOPDXNJGKHYBOSUXTWGGCPAEQEFIJYEIRJIEPMXXPMKDTHU");
    msg.source.assign("IBYVESOHCBFPUEPXSTLVGZOVFGFJHRCIXKGXUKXEHHWQBRKFNJSNMOOINCBIDEUIAHGEMQVLFJLGVNVUDFYFITVULJXJMCRYTBPYKPTOACMSTIAHBMDYKPXJQTCGDSVUBQOCDWUEKZYMKFBPWEJZPMXRDCYDIZFNAEJWRSKHNDGUTMWDRQIZVKVIHPJHMWGLQYNSKAWZOSGLRDBLFAOLQHNBANZREZZLCXTCPSYXEXRPATTYZ");
    msg.acknowledge = 65U;
    msg.status = 51U;
    const char tmp_msg_0[] = {82, 71, 95, 87, -31, -64, -40, 111, 53, 76, 114, -14, 66, -21, 70, 51, 36, -106, 54, 14, -76, 64, -123, -128, -119, 100, 27, -44, 40, -96, -79, 46, -105, -67, 51, -14, -13, -3, 69, 76, 88, -63, -4, 74, -121, 52, 46, -94, 9, 39, 39, -56, -66, 3, 90, -28, 125, -128, -44, -15, 88, 89, 73, 1, -81, -93, 79, 53, 22, 99, -32, -9, -88, 75, 36, -32, -124, 80, -123, -19, -113, -13, 30, -78, 8, 124, 124, -120, -61, 50, -92, -2, -121, 65, -17, 117, -121, 74, 68, 82, 17, 100, 48, 63, 78, 94, 75, 98, -79, -42, -95, -100, 92, -76, -70, 43, -78, -17, 95, 26, -33, 4, -38, 86, -110, -79, 41, -30, -6, 13, 65, 99, 110, -25, 47, -23, -107, -23, -14, -54, 114, 75, -118, 86, -51, 18, -113, -16, -88, -69, -48, 5, -121, -109, -111, 25, -52, -56, 36, -6, -1, -2, 39};
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
    msg.setTimeStamp(0.241132818987);
    msg.setSource(47687U);
    msg.setSourceEntity(219U);
    msg.setDestination(39574U);
    msg.setDestinationEntity(164U);
    msg.type = 129U;
    msg.req_id = 3145733199U;
    msg.ttl = 32966U;
    msg.code = 110U;
    msg.destination.assign("BHCUWQTTVELYXTMBWKVVQVFZMURBRSHHZUMPTIFFGHOPOOFSDGHMFTKVAZTPIXEKUNQRHDWJXJJJIXDHMQA");
    msg.source.assign("LZRAWIMRCVVZPJBUHIPHNPLMMQLD");
    msg.acknowledge = 13U;
    msg.status = 35U;
    const char tmp_msg_0[] = {17, -66, 85, 29, -18, 81, -68, 19, -60, 118, -12, 123, 118, -85, -101, 37, 49, 54, -13, 58, 100, 93};
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
    msg.setTimeStamp(0.726897077226);
    msg.setSource(6706U);
    msg.setSourceEntity(123U);
    msg.setDestination(62665U);
    msg.setDestinationEntity(237U);
    msg.type = 105U;
    msg.req_id = 3282847529U;
    msg.ttl = 15998U;
    msg.code = 100U;
    msg.destination.assign("CFUSPRHCUXYXCKJNDHBFZSAZZBEHDVQXE");
    msg.source.assign("KQXIARYCZTMSPVWPVBKLKZBLBMOEHQCCRMHFJBDCKLIERMYXKPTNBUCMJVTBOWWVMTQYXIYBSQWYFWDMLJSGLJAUUJXGYAVWMSNOXJLXBFUEGIQVUJGDBGGNYNHKGFPAAEXGNIDKRYZPXHEIGSHZTUGEOFZTOSUHZQSQEXWEJCIAHNTPPOCNQFVRFDMAWQFQWYCDRVHOD");
    msg.acknowledge = 123U;
    msg.status = 132U;
    const char tmp_msg_0[] = {-73, 41, -80, 123, -19, -105, -123, -54, -18, -20, 41, -47, 23, 23, -108, 20, 117, 84, 35, 99, -30, -76, -126, -46, 102, -127, 28, -86, -99, -76, -93, 4, -73, -61, -123, -48, -14, -71, -128, 40, 40, -110, -11, -68, -88, 42, -128, -3, -53, -12, 55, -118, 32, 57, -23, -1, -88, 1, 111, -50, 60, -11, -26, 66, -16, -114, -35, 27, -61, 24, 107, 38, -100, -65, -86, 43, 35, -128, -74, 16, -22, 48, 103, 72, -50, -1, 53, 25, 10, -53, 97, 105, 19, 22, -73, 20, -36, 102, 76, -29, 67, -68, 81, -77, 13, 81, -98, 95, 38, -48, -24, 26, 123, -22, 18, -33, 103, 34, -93, -27, -5, -32, 60, -88, -29, 37, 25, 49, 97, -42, -45, -3, -123, 56, -67, -42, -52, 42, 85, 32, -107, -62, -112, -40, 74, -125, -11, -10, 25, 126, 114, -69, -104, 115, 56, -42, 84, -29, 3, -19, 125, -108, 20, 117, 2, -101, -87, 27, -54, 81, -124, -68, 89, -89, -68, 48, -28, 66, -49, 99, 122, -67, 87, -8, 101, 35, 79, 17, 96, -11, -49, -83, 37, -81, 41, 110, -70, -19, 39, 77, 17, -86, 47, -32, 103, -93, 109, 58, 11, -113, 42, -113, 54, -79, 84, 5, -98, 120, 38, -86, 112, -41, -67, 92, -118, 98, 57, -76, -65, -93, 106, -82, 30};
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
    msg.setTimeStamp(0.0425029602008);
    msg.setSource(25558U);
    msg.setSourceEntity(216U);
    msg.setDestination(64844U);
    msg.setDestinationEntity(237U);
    msg.id = 37U;
    msg.range = 0.0633687052498;

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
    msg.setTimeStamp(0.47096772735);
    msg.setSource(44867U);
    msg.setSourceEntity(20U);
    msg.setDestination(46450U);
    msg.setDestinationEntity(207U);
    msg.id = 96U;
    msg.range = 0.899753484088;

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
    msg.setTimeStamp(0.332897390026);
    msg.setSource(58201U);
    msg.setSourceEntity(19U);
    msg.setDestination(15029U);
    msg.setDestinationEntity(154U);
    msg.id = 164U;
    msg.range = 0.853009044146;

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
    msg.setTimeStamp(0.169060630447);
    msg.setSource(19613U);
    msg.setSourceEntity(82U);
    msg.setDestination(16401U);
    msg.setDestinationEntity(181U);
    msg.beacon.assign("ZAMGHPLVOSBQVOHHLBUUZDSMOSOXYIIGRGXHGCLSZKLGOLQATPTXOUWWRWPBUHQFAOJKSJWSFTJVVHWEESNZBQTNR");
    msg.lat = 0.831423858797;
    msg.lon = 0.551924556661;
    msg.depth = 0.343146078338;
    msg.query_channel = 54U;
    msg.reply_channel = 103U;
    msg.transponder_delay = 248U;

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
    msg.setTimeStamp(0.80352712318);
    msg.setSource(46462U);
    msg.setSourceEntity(168U);
    msg.setDestination(60651U);
    msg.setDestinationEntity(16U);
    msg.beacon.assign("QWANIBFDASGUCN");
    msg.lat = 0.651161954869;
    msg.lon = 0.189336716532;
    msg.depth = 0.388477287641;
    msg.query_channel = 90U;
    msg.reply_channel = 71U;
    msg.transponder_delay = 231U;

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
    msg.setTimeStamp(0.503232927);
    msg.setSource(65245U);
    msg.setSourceEntity(96U);
    msg.setDestination(36629U);
    msg.setDestinationEntity(93U);
    msg.beacon.assign("PJOVGZVYVUZILYVADEROOTNOIOKJMVJSZQNGUAXYNMSITVWAZQFKPINGZCCTKCBDMELXCIKUJTOAFLUFGPQHBVMLENOKZRGKXJVJCMJASNPHJWLHSBSGUQDIIHSEAFYXRWZOYDPHXUYYYNFMATVRVGTENOYHTEEQBFBXDUZRMDBDUWIWFXXDCWGMYZHUQJOLPZSWUGRSKQSXEPEBQTCBFHARCFKLLIBDKTQWHNRTGPAPQALKWCC");
    msg.lat = 0.0696355609017;
    msg.lon = 0.761051895383;
    msg.depth = 0.874489393737;
    msg.query_channel = 67U;
    msg.reply_channel = 116U;
    msg.transponder_delay = 163U;

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
    msg.setTimeStamp(0.983736350334);
    msg.setSource(51370U);
    msg.setSourceEntity(93U);
    msg.setDestination(53760U);
    msg.setDestinationEntity(223U);
    msg.op = 242U;

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
    msg.setTimeStamp(0.885218738811);
    msg.setSource(60292U);
    msg.setSourceEntity(43U);
    msg.setDestination(15757U);
    msg.setDestinationEntity(169U);
    msg.op = 227U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("OIMCHITIUBBNWHMTSQXCGKRHQJLODGWNORMMUEPCKJNESLPEUYNUVQOVQBXLBXARYSORCSEGWWZLJZWKPZZYPCBMSGIEAIJQJXHFZVMHWETYUTMNVLIVYFFZRMIRGTHFQDERLRQKAGYHIUNLAHSSFQKVNIWDSXEJFBXJDBZTPXCKBCDVJPHFKF");
    tmp_msg_0.lat = 0.775029345328;
    tmp_msg_0.lon = 0.275200658236;
    tmp_msg_0.depth = 0.228871331866;
    tmp_msg_0.query_channel = 232U;
    tmp_msg_0.reply_channel = 46U;
    tmp_msg_0.transponder_delay = 46U;
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
    msg.setTimeStamp(0.585466179099);
    msg.setSource(9209U);
    msg.setSourceEntity(48U);
    msg.setDestination(46567U);
    msg.setDestinationEntity(27U);
    msg.op = 207U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("MWEYIQERTMOZVNQAEQHLPBRSMEQPGDUJDESXQRUECWHYTDAXSVZKVZNGTGMVKLJWDA");
    tmp_msg_0.lat = 0.585298110508;
    tmp_msg_0.lon = 0.0187180730008;
    tmp_msg_0.depth = 0.615287253481;
    tmp_msg_0.query_channel = 155U;
    tmp_msg_0.reply_channel = 102U;
    tmp_msg_0.transponder_delay = 13U;
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
    msg.setTimeStamp(0.218489310874);
    msg.setSource(27221U);
    msg.setSourceEntity(130U);
    msg.setDestination(56179U);
    msg.setDestinationEntity(91U);
    IMC::QueryLedBrightness tmp_msg_0;
    tmp_msg_0.name.assign("GNBMYBZNNZCLGGMPPEELMMC");
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
    msg.setTimeStamp(0.484106589225);
    msg.setSource(8796U);
    msg.setSourceEntity(87U);
    msg.setDestination(15795U);
    msg.setDestinationEntity(142U);
    IMC::DesiredVerticalRate tmp_msg_0;
    tmp_msg_0.value = 0.824271990318;
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
    msg.setTimeStamp(0.0456235359609);
    msg.setSource(35143U);
    msg.setSourceEntity(96U);
    msg.setDestination(31201U);
    msg.setDestinationEntity(116U);
    IMC::TrueSpeed tmp_msg_0;
    tmp_msg_0.value = 0.860075670611;
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
    msg.setTimeStamp(0.827140145323);
    msg.setSource(23088U);
    msg.setSourceEntity(93U);
    msg.setDestination(19094U);
    msg.setDestinationEntity(197U);
    msg.op = 241U;
    msg.system.assign("KBGCISBKNPRMCHFPEYVUIXVPTMZRGBCGIALYTBSWFUJNXNLRHMOMSYSTKHCSROUUDBVBDVHWIOXGUWXXNLEWDZHMDWRHMMLQGTFODAUONLUVAEJKMCCGMCPBQBBPWYAPEDXXFYOLIWGPTIGPSNRBEJORLTXDLNHTRTKAHAFFZZAJJKETQGQVKZUQZQCKORYJAFSEE");
    msg.range = 0.509270616645;
    IMC::VesselWind tmp_msg_0;
    tmp_msg_0.angle = 0.307958234502;
    tmp_msg_0.reference.assign("OVJHGYVHKWLRMDUQGSKQRZSSDTNPTKCGOVUNUFDAOXKFNTJMNIMIIMQGMUEPHJBXWHIYWENJEDDGLCLHFJPXUDLWSRIZYOIKNNVRRFAVKSWZUQMOYOSOBEVHCRBQXZIBTWVAUEBGQMEXHNJXIRFTPSHPTFUNDQAPUDYSZWHYXCWVWJWBBJPIPCKSPLMQBGBENCLXAVCZGLLSEHLFQAURTIJARYODXJMCAYTOGMEFKETZPYYZL");
    tmp_msg_0.speed = 0.805548301332;
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
    msg.setTimeStamp(0.5796200329);
    msg.setSource(62137U);
    msg.setSourceEntity(23U);
    msg.setDestination(4537U);
    msg.setDestinationEntity(16U);
    msg.op = 38U;
    msg.system.assign("MLWEXDHLMKKYVAGESITZUWYFKQHYHCIZVYMNQKLEUVAUNRNXFLHIWKGLMNBPSLQZTLFAZFTGWOJXNJWRWEFDSPTU");
    msg.range = 0.994921433244;
    IMC::RSSI tmp_msg_0;
    tmp_msg_0.value = 0.48770844059;
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
    msg.setTimeStamp(0.937362683754);
    msg.setSource(21811U);
    msg.setSourceEntity(30U);
    msg.setDestination(45536U);
    msg.setDestinationEntity(110U);
    msg.op = 173U;
    msg.system.assign("QJZKXPZMUZDLHESWVTIFCGRUHXSSKDSDYCAOYVOADOFMVGWIAEARUTAFGNMCSRUPWXLGKDOITWSVNENYPITLJBETXFCFPLRVGWC");
    msg.range = 0.940471847396;
    IMC::IridiumReport tmp_msg_0;
    tmp_msg_0.frequency = 1858479594U;
    tmp_msg_0.info.assign("QSPKKUBINOIDPTFJDFXCVBBLJISORKOQXWIZWLLRYCYWALXAPFBGVMSUHFTEAWLDAFSJFSYIQOMMWBURTKQWHVTK");
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
    msg.setTimeStamp(0.200461818457);
    msg.setSource(22126U);
    msg.setSourceEntity(145U);
    msg.setDestination(209U);
    msg.setDestinationEntity(219U);

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
    msg.setTimeStamp(0.310427562769);
    msg.setSource(51808U);
    msg.setSourceEntity(48U);
    msg.setDestination(35138U);
    msg.setDestinationEntity(62U);

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
    msg.setTimeStamp(0.65521170687);
    msg.setSource(59187U);
    msg.setSourceEntity(40U);
    msg.setDestination(711U);
    msg.setDestinationEntity(122U);

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
    msg.setTimeStamp(0.730889105993);
    msg.setSource(23961U);
    msg.setSourceEntity(207U);
    msg.setDestination(16295U);
    msg.setDestinationEntity(154U);
    msg.list.assign("UEIATQFFTQOEQHQNMXLNOKBMQVJCGTULJJNRK");

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
    msg.setTimeStamp(0.595654687958);
    msg.setSource(7396U);
    msg.setSourceEntity(51U);
    msg.setDestination(10431U);
    msg.setDestinationEntity(239U);
    msg.list.assign("NJFWOJFPHTVBLYZIGFWLHVADUGJUMHCIYRQOJSHFKKVZEREMKEEFFMHMBTEQZCDGDUFNODXOTPLUJUSNBLJEOPUFQKBRIJXYBTLBJRLVRXNEUMGQVMSUNCGBEPXZOMEWJQCPWCQVKNTSYAASNCVLDJPKEUWMZAXTDZUAHZDSOPNILKKZYWSIAWGSD");

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
    msg.setTimeStamp(0.920036232449);
    msg.setSource(9039U);
    msg.setSourceEntity(48U);
    msg.setDestination(3199U);
    msg.setDestinationEntity(131U);
    msg.list.assign("POBEMYBEOJKLZUMDSYEZMZMVYHHONYQJZXOKIHMKIDHFBGXJAPBJMAWCEBGLFZF");

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
    msg.setTimeStamp(0.945857481402);
    msg.setSource(40726U);
    msg.setSourceEntity(221U);
    msg.setDestination(46735U);
    msg.setDestinationEntity(113U);
    msg.peer.assign("LXCCFBRTHOWAARBGXCXYSCQXYRHLAHNIDSXYEBGNMQPOVJAMJWIZEJNFPWTRYBNVSYQZPIHIIRFKNQRKFYIBJEQLSCFOYNIBUSFFWHGGHLZELALKVEZIEDPMVJLDTFOHTCGEAYPBMDFUTGAMUDILJUJAMMTROJCWDBGBPKCSLYVUDQSXPRUT");
    msg.rssi = 0.579364488379;
    msg.integrity = 31256U;

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
    msg.setTimeStamp(0.360034476958);
    msg.setSource(9056U);
    msg.setSourceEntity(51U);
    msg.setDestination(35717U);
    msg.setDestinationEntity(56U);
    msg.peer.assign("CNJTYIVTOTPSWIQIETTXEDVYLHOGBVMIEKJZNPUIWZNXFQRQTFNKEBOKONUSAKEPYFVWCPKLBAFWVDNGWWCEYHDFLAIWSDXCVLPPOPKUAHCSXAGXMRMLZUZRJXHJGOJIIJPDZKCZHYMDKXXKVSNNLNHRPEVECDMREHMJRGHBJJFRYUFZWSARYBZRBKYFM");
    msg.rssi = 0.84099638118;
    msg.integrity = 28460U;

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
    msg.setTimeStamp(0.429586528179);
    msg.setSource(46507U);
    msg.setSourceEntity(42U);
    msg.setDestination(23287U);
    msg.setDestinationEntity(223U);
    msg.peer.assign("ZUETUKFVBWTQBDOPQHWRVUOMAXBHKWJP");
    msg.rssi = 0.618558224907;
    msg.integrity = 16312U;

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
    msg.setTimeStamp(0.449556424478);
    msg.setSource(49498U);
    msg.setSourceEntity(208U);
    msg.setDestination(20595U);
    msg.setDestinationEntity(35U);
    msg.req_id = 63840U;
    msg.destination.assign("WZWYZKRWGKFQIJKQSGAOVVZSKFFOLHXHUNEGHCQNAQYEJSBOOWAXHUAFVKYGDPQQKRGNDVCDTSLBTLFMAKLYAXPPGWTCPOCVUERWGABNXKECTJZBYIJVFPRIJWZRHLMHFTEAURYHZNXHJASEXMILDRTBZSUZPJCSPPJGJLJHREOEINCXDZDPMWAFRBIVNBSOKOBLVMICUYXMPQXVYYZXQDSBKNFCTUHILEYQQWCMESTDTV");
    msg.timeout = 0.0579223730815;
    msg.range = 0.910169869489;
    msg.type = 248U;
    IMC::SoiCommand tmp_msg_0;
    tmp_msg_0.type = 97U;
    tmp_msg_0.command = 197U;
    tmp_msg_0.settings.assign("SRJMYNABPEMPWFZLXPBWFSAOGASDNKJQSRVFYACBAFCIQGSOGQMJIQGVCHRHZIDEYECHGJCYOFLXMKBMRONUVZWGSTDBLSLYLYGXHBAPUDEVHDKXGJQISURXUILCOCNQAXYPPKABTDVZMUIEDTKBEEWUZLRTVPWVEKJYWTPQZQTKWHTXEXSFWUZLVMOKOIVNOXFEFYHCAHUITIONSHXTGGJFQJNMCFIBRDAR");
    IMC::SoiPlan tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.plan_id = 13627U;
    IMC::SoiWaypoint tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.621378351506;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.195570298331;
    tmp_tmp_tmp_msg_0_0_0.eta = 310533394U;
    tmp_tmp_tmp_msg_0_0_0.duration = 42110U;
    tmp_tmp_msg_0_0.waypoints.push_back(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.plan.set(tmp_tmp_msg_0_0);
    tmp_msg_0.info.assign("XIQSXAYPYIVJHOVLTJAKUOKLHNKBZRCFSRQCGINLVTAYQDCCYOHJHXDASGAWBRKNKPGXPOJLZPZIUNL");
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
    msg.setTimeStamp(0.937769280669);
    msg.setSource(35359U);
    msg.setSourceEntity(49U);
    msg.setDestination(17312U);
    msg.setDestinationEntity(193U);
    msg.req_id = 18671U;
    msg.destination.assign("QVRIVKDTJGLDSNLKZQIPXRDTUAKLYQRPPAOXGWUKPBTQEAOVU");
    msg.timeout = 0.540966978461;
    msg.range = 0.0144572272;
    msg.type = 162U;
    IMC::PopEntityParameters tmp_msg_0;
    tmp_msg_0.name.assign("ODSBXMVNRXQYIIQZZWAKLTTBDFNPCMRHUZRXOWAFANFEWLQSPUECVTICDJAXQBSOWDLLYGFFEQAHKVDBCUQJKWWUMZQZIZKLUIBKWEGLNOYYVOSIHHMRZYHFYUJJUPLPJKVUGFYHHUYPCSCNXATJJOCBSTWEOVGHDSNJGRXGRVNRYDLBGZMFMQYRPNEETKPMKFMCJXMAAAAOZINIXLNTTSVKUEODPQWDKGVHPLSCBBXIRP");
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
    msg.setTimeStamp(0.0718180899145);
    msg.setSource(27015U);
    msg.setSourceEntity(64U);
    msg.setDestination(36553U);
    msg.setDestinationEntity(79U);
    msg.req_id = 26715U;
    msg.destination.assign("AWIXJWGOPXHQMMMHHCBJGNMTDFKDIALKUWGUEZCRYZZKFNVYGVIMKRINHXDOTCCSCQJGJAGCRECVYAYDOPCXHFURWQ");
    msg.timeout = 0.517759386442;
    msg.range = 0.542844040164;
    msg.type = 102U;
    IMC::GroundVelocity tmp_msg_0;
    tmp_msg_0.validity = 59U;
    tmp_msg_0.x = 0.61516345396;
    tmp_msg_0.y = 0.5149012145;
    tmp_msg_0.z = 0.830559992947;
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
    msg.setTimeStamp(0.448647433869);
    msg.setSource(28538U);
    msg.setSourceEntity(72U);
    msg.setDestination(18157U);
    msg.setDestinationEntity(43U);
    msg.req_id = 14320U;
    msg.type = 169U;
    msg.status = 129U;
    msg.info.assign("XHZUKFSNXRDA");
    msg.range = 0.861918704425;

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
    msg.setTimeStamp(0.181005229706);
    msg.setSource(39309U);
    msg.setSourceEntity(197U);
    msg.setDestination(5389U);
    msg.setDestinationEntity(237U);
    msg.req_id = 37996U;
    msg.type = 115U;
    msg.status = 110U;
    msg.info.assign("DHZBQUFXPETCJDXHEEWKIHRXZKBFBJLAQWBLHGYVPHBFZLERRKGDBVOKDTMARLRBIMUFNGOHLUEGRBWNCVUEFJCSGPRVGGMHJOPBOZOIDJVQIAEGAPKLPNMDSBGIXLVZSAQDTRSMINOTUJAFVETMCCHTXWPSMQNITRCLPMJFXYYYYVNQKAMWQFSEIDFCAUZGSZMLKZCLWQICUKTQWNUOHDKSOQJOWEVAJDOAJYZSYSFUYVKNHC");
    msg.range = 0.104732144853;

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
    msg.setTimeStamp(0.438085399224);
    msg.setSource(2225U);
    msg.setSourceEntity(205U);
    msg.setDestination(20240U);
    msg.setDestinationEntity(20U);
    msg.req_id = 47490U;
    msg.type = 201U;
    msg.status = 173U;
    msg.info.assign("XTQZQIHMRRQOXCUNXSUXFCZECEJJSMYWHITDSYZAFUNNERJQVOGKQCIPERIFUSBKTGUCZBVIYBAFPNSDSANJBJGGFBYWOMHHSFGVSTEFGYQZJLIIVQUHKVREDGKDWWBAROQNRTVFAXOUVMIYTKLCMPOXWKPPBXAAUAXCSUSBDBVIDMFGWCDBMZAYRYH");
    msg.range = 0.230162807374;

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
    msg.setTimeStamp(0.118080185563);
    msg.setSource(58607U);
    msg.setSourceEntity(4U);
    msg.setDestination(43913U);
    msg.setDestinationEntity(149U);
    msg.value = 17757;

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
    msg.setTimeStamp(0.460948786691);
    msg.setSource(45058U);
    msg.setSourceEntity(123U);
    msg.setDestination(51094U);
    msg.setDestinationEntity(179U);
    msg.value = 9135;

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
    msg.setTimeStamp(0.866589280967);
    msg.setSource(16418U);
    msg.setSourceEntity(225U);
    msg.setDestination(23850U);
    msg.setDestinationEntity(237U);
    msg.value = 3292;

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
    msg.setTimeStamp(0.912147411215);
    msg.setSource(46390U);
    msg.setSourceEntity(241U);
    msg.setDestination(49551U);
    msg.setDestinationEntity(209U);
    msg.value = 0.329073608557;

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
    msg.setTimeStamp(0.266005797376);
    msg.setSource(55974U);
    msg.setSourceEntity(95U);
    msg.setDestination(23885U);
    msg.setDestinationEntity(120U);
    msg.value = 0.409677760065;

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
    msg.setTimeStamp(0.468435350033);
    msg.setSource(33382U);
    msg.setSourceEntity(194U);
    msg.setDestination(23583U);
    msg.setDestinationEntity(72U);
    msg.value = 0.0700387735077;

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
    msg.setTimeStamp(0.820507304803);
    msg.setSource(31282U);
    msg.setSourceEntity(33U);
    msg.setDestination(37235U);
    msg.setDestinationEntity(150U);
    msg.value = 0.00145231402926;

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
    msg.setTimeStamp(0.244178242589);
    msg.setSource(19664U);
    msg.setSourceEntity(171U);
    msg.setDestination(26200U);
    msg.setDestinationEntity(233U);
    msg.value = 0.282997201755;

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
    msg.setTimeStamp(0.154757998209);
    msg.setSource(36403U);
    msg.setSourceEntity(168U);
    msg.setDestination(11067U);
    msg.setDestinationEntity(145U);
    msg.value = 0.754569620111;

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
    msg.setTimeStamp(0.567375535376);
    msg.setSource(51679U);
    msg.setSourceEntity(77U);
    msg.setDestination(55338U);
    msg.setDestinationEntity(37U);
    msg.validity = 24606U;
    msg.type = 103U;
    msg.utc_year = 22052U;
    msg.utc_month = 30U;
    msg.utc_day = 57U;
    msg.utc_time = 0.16423827442;
    msg.lat = 0.304955662971;
    msg.lon = 0.0029567050454;
    msg.height = 0.62754011676;
    msg.satellites = 149U;
    msg.cog = 0.642911329182;
    msg.sog = 0.179785485748;
    msg.hdop = 0.171331906393;
    msg.vdop = 0.0727353290974;
    msg.hacc = 0.0902497751602;
    msg.vacc = 0.209617898861;

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
    msg.setTimeStamp(0.258093617971);
    msg.setSource(18941U);
    msg.setSourceEntity(3U);
    msg.setDestination(27624U);
    msg.setDestinationEntity(45U);
    msg.validity = 14152U;
    msg.type = 219U;
    msg.utc_year = 21001U;
    msg.utc_month = 83U;
    msg.utc_day = 158U;
    msg.utc_time = 0.807284511278;
    msg.lat = 0.178101973289;
    msg.lon = 0.526094916543;
    msg.height = 0.0627433542292;
    msg.satellites = 132U;
    msg.cog = 0.87358333115;
    msg.sog = 0.607482430772;
    msg.hdop = 0.39292695496;
    msg.vdop = 0.272868061052;
    msg.hacc = 0.263039849161;
    msg.vacc = 0.32923604172;

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
    msg.setTimeStamp(0.759950568863);
    msg.setSource(41172U);
    msg.setSourceEntity(210U);
    msg.setDestination(50483U);
    msg.setDestinationEntity(63U);
    msg.validity = 14781U;
    msg.type = 172U;
    msg.utc_year = 26442U;
    msg.utc_month = 80U;
    msg.utc_day = 45U;
    msg.utc_time = 0.913228455327;
    msg.lat = 0.712903483475;
    msg.lon = 0.793183696765;
    msg.height = 0.819925056151;
    msg.satellites = 58U;
    msg.cog = 0.126526237755;
    msg.sog = 0.0308769849746;
    msg.hdop = 0.955442101745;
    msg.vdop = 0.982240078039;
    msg.hacc = 0.403175743452;
    msg.vacc = 0.278898499484;

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
    msg.setTimeStamp(0.545483655192);
    msg.setSource(8996U);
    msg.setSourceEntity(49U);
    msg.setDestination(31100U);
    msg.setDestinationEntity(90U);
    msg.time = 0.894317142702;
    msg.phi = 0.837950313784;
    msg.theta = 0.0440673614819;
    msg.psi = 0.0209872352247;
    msg.psi_magnetic = 0.704571961835;

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
    msg.setTimeStamp(0.794587721492);
    msg.setSource(36898U);
    msg.setSourceEntity(236U);
    msg.setDestination(53406U);
    msg.setDestinationEntity(43U);
    msg.time = 0.884272657064;
    msg.phi = 0.271220221558;
    msg.theta = 0.160810972827;
    msg.psi = 0.197467074458;
    msg.psi_magnetic = 0.0378243540104;

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
    msg.setTimeStamp(0.830729056133);
    msg.setSource(28118U);
    msg.setSourceEntity(80U);
    msg.setDestination(49644U);
    msg.setDestinationEntity(188U);
    msg.time = 0.248188093228;
    msg.phi = 0.892228448842;
    msg.theta = 0.495007184966;
    msg.psi = 0.0680510410327;
    msg.psi_magnetic = 0.268216979164;

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
    msg.setTimeStamp(0.748524936741);
    msg.setSource(59822U);
    msg.setSourceEntity(229U);
    msg.setDestination(54717U);
    msg.setDestinationEntity(77U);
    msg.time = 0.413544665824;
    msg.x = 0.283658107723;
    msg.y = 0.230630150318;
    msg.z = 0.575787739778;
    msg.timestep = 0.910906667132;

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
    msg.setTimeStamp(0.81024676304);
    msg.setSource(11780U);
    msg.setSourceEntity(152U);
    msg.setDestination(54925U);
    msg.setDestinationEntity(59U);
    msg.time = 0.0432793696826;
    msg.x = 0.237714840087;
    msg.y = 0.734589956627;
    msg.z = 0.2075679839;
    msg.timestep = 0.674023174657;

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
    msg.setTimeStamp(0.175598745241);
    msg.setSource(61520U);
    msg.setSourceEntity(100U);
    msg.setDestination(5454U);
    msg.setDestinationEntity(14U);
    msg.time = 0.239728442608;
    msg.x = 0.945551783021;
    msg.y = 0.648928001245;
    msg.z = 0.857229531037;
    msg.timestep = 0.364918812456;

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
    msg.setTimeStamp(0.615131036632);
    msg.setSource(17107U);
    msg.setSourceEntity(90U);
    msg.setDestination(18328U);
    msg.setDestinationEntity(226U);
    msg.time = 0.367197395991;
    msg.x = 0.675880288806;
    msg.y = 0.388567247731;
    msg.z = 0.0172069190634;

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
    msg.setTimeStamp(0.960075024389);
    msg.setSource(23423U);
    msg.setSourceEntity(125U);
    msg.setDestination(27921U);
    msg.setDestinationEntity(124U);
    msg.time = 0.492137590721;
    msg.x = 0.186631314814;
    msg.y = 0.86410174756;
    msg.z = 0.109451447322;

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
    msg.setTimeStamp(0.167917689173);
    msg.setSource(21958U);
    msg.setSourceEntity(2U);
    msg.setDestination(4030U);
    msg.setDestinationEntity(240U);
    msg.time = 0.490599429505;
    msg.x = 0.674021011393;
    msg.y = 0.262710611996;
    msg.z = 0.473556564958;

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
    msg.setTimeStamp(0.461776861573);
    msg.setSource(65189U);
    msg.setSourceEntity(100U);
    msg.setDestination(23590U);
    msg.setDestinationEntity(18U);
    msg.time = 0.81564213487;
    msg.x = 0.892547657239;
    msg.y = 0.374920851589;
    msg.z = 0.864776656255;

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
    msg.setTimeStamp(0.172381847152);
    msg.setSource(65237U);
    msg.setSourceEntity(60U);
    msg.setDestination(55716U);
    msg.setDestinationEntity(126U);
    msg.time = 0.646367353724;
    msg.x = 0.686933473595;
    msg.y = 0.134683580304;
    msg.z = 0.0871662950118;

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
    msg.setTimeStamp(0.68888574938);
    msg.setSource(3537U);
    msg.setSourceEntity(54U);
    msg.setDestination(20067U);
    msg.setDestinationEntity(150U);
    msg.time = 0.490982533374;
    msg.x = 0.791062707073;
    msg.y = 0.256983264827;
    msg.z = 0.611398538254;

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
    msg.setTimeStamp(0.594960470239);
    msg.setSource(61921U);
    msg.setSourceEntity(252U);
    msg.setDestination(31572U);
    msg.setDestinationEntity(79U);
    msg.time = 0.113573088456;
    msg.x = 0.187295816269;
    msg.y = 0.192013354277;
    msg.z = 0.148085863976;

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
    msg.setTimeStamp(0.696664165536);
    msg.setSource(51722U);
    msg.setSourceEntity(69U);
    msg.setDestination(24167U);
    msg.setDestinationEntity(36U);
    msg.time = 0.545711738226;
    msg.x = 0.808113590481;
    msg.y = 0.273522075001;
    msg.z = 0.690793479366;

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
    msg.setTimeStamp(0.561067749777);
    msg.setSource(14287U);
    msg.setSourceEntity(33U);
    msg.setDestination(22649U);
    msg.setDestinationEntity(167U);
    msg.time = 0.362906909186;
    msg.x = 0.622101783072;
    msg.y = 0.973680709785;
    msg.z = 0.18366476556;

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
    msg.setTimeStamp(0.150348965548);
    msg.setSource(64479U);
    msg.setSourceEntity(238U);
    msg.setDestination(18911U);
    msg.setDestinationEntity(27U);
    msg.validity = 72U;
    msg.x = 0.51936326885;
    msg.y = 0.439738294214;
    msg.z = 0.511718934552;

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
    msg.setTimeStamp(0.398402141763);
    msg.setSource(24033U);
    msg.setSourceEntity(88U);
    msg.setDestination(4523U);
    msg.setDestinationEntity(199U);
    msg.validity = 78U;
    msg.x = 0.728439281235;
    msg.y = 0.405293704202;
    msg.z = 0.3335542215;

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
    msg.setTimeStamp(0.531348693853);
    msg.setSource(53475U);
    msg.setSourceEntity(168U);
    msg.setDestination(55922U);
    msg.setDestinationEntity(26U);
    msg.validity = 137U;
    msg.x = 0.624962675856;
    msg.y = 0.0778886275862;
    msg.z = 0.676644598645;

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
    msg.setTimeStamp(0.456505782006);
    msg.setSource(28696U);
    msg.setSourceEntity(231U);
    msg.setDestination(49856U);
    msg.setDestinationEntity(173U);
    msg.validity = 248U;
    msg.x = 0.504880796585;
    msg.y = 0.533156617318;
    msg.z = 0.915693705359;

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
    msg.setTimeStamp(0.422586883023);
    msg.setSource(32098U);
    msg.setSourceEntity(190U);
    msg.setDestination(38490U);
    msg.setDestinationEntity(98U);
    msg.validity = 135U;
    msg.x = 0.788261449313;
    msg.y = 0.598514210246;
    msg.z = 0.677136384541;

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
    msg.setTimeStamp(0.83580063479);
    msg.setSource(2643U);
    msg.setSourceEntity(148U);
    msg.setDestination(42822U);
    msg.setDestinationEntity(178U);
    msg.validity = 26U;
    msg.x = 0.942202572567;
    msg.y = 0.584041585109;
    msg.z = 0.265436214686;

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
    msg.setTimeStamp(0.434748422636);
    msg.setSource(35007U);
    msg.setSourceEntity(232U);
    msg.setDestination(26632U);
    msg.setDestinationEntity(117U);
    msg.time = 0.291450326497;
    msg.x = 0.0111564146254;
    msg.y = 0.538418735287;
    msg.z = 0.699797614237;

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
    msg.setTimeStamp(0.861885941559);
    msg.setSource(1841U);
    msg.setSourceEntity(36U);
    msg.setDestination(3219U);
    msg.setDestinationEntity(180U);
    msg.time = 0.835316842145;
    msg.x = 0.428584798735;
    msg.y = 0.00231243923585;
    msg.z = 0.158392475539;

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
    msg.setTimeStamp(0.809670862199);
    msg.setSource(7944U);
    msg.setSourceEntity(118U);
    msg.setDestination(23849U);
    msg.setDestinationEntity(187U);
    msg.time = 0.238789331299;
    msg.x = 0.00677233069796;
    msg.y = 0.142694445393;
    msg.z = 0.812843860374;

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
    msg.setTimeStamp(0.398193154448);
    msg.setSource(21957U);
    msg.setSourceEntity(196U);
    msg.setDestination(63121U);
    msg.setDestinationEntity(170U);
    msg.validity = 219U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.408896905743;
    tmp_msg_0.y = 0.572068442429;
    tmp_msg_0.z = 0.119480612505;
    tmp_msg_0.phi = 0.753703545393;
    tmp_msg_0.theta = 0.52832185275;
    tmp_msg_0.psi = 0.99827657075;
    msg.location.push_back(tmp_msg_0);
    msg.value = 0.489249454264;

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
    msg.setTimeStamp(0.595574652785);
    msg.setSource(12524U);
    msg.setSourceEntity(179U);
    msg.setDestination(20536U);
    msg.setDestinationEntity(58U);
    msg.validity = 124U;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.911310684441;
    tmp_msg_0.beam_height = 0.975642104988;
    msg.beam_config.push_back(tmp_msg_0);
    msg.value = 0.900890556148;

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
    msg.setTimeStamp(0.425181811537);
    msg.setSource(63811U);
    msg.setSourceEntity(135U);
    msg.setDestination(46145U);
    msg.setDestinationEntity(226U);
    msg.validity = 15U;
    msg.value = 0.31085244756;

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
    msg.setTimeStamp(0.0116414075292);
    msg.setSource(39110U);
    msg.setSourceEntity(239U);
    msg.setDestination(42077U);
    msg.setDestinationEntity(114U);
    msg.value = 0.990536601173;

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
    msg.setTimeStamp(0.775009908974);
    msg.setSource(36112U);
    msg.setSourceEntity(234U);
    msg.setDestination(2053U);
    msg.setDestinationEntity(223U);
    msg.value = 0.857499865996;

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
    msg.setTimeStamp(0.131853761089);
    msg.setSource(42223U);
    msg.setSourceEntity(56U);
    msg.setDestination(9211U);
    msg.setDestinationEntity(47U);
    msg.value = 0.119962150359;

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
    msg.setTimeStamp(0.954547824037);
    msg.setSource(34848U);
    msg.setSourceEntity(135U);
    msg.setDestination(57309U);
    msg.setDestinationEntity(85U);
    msg.value = 0.761170488026;

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
    msg.setTimeStamp(0.326117786881);
    msg.setSource(11077U);
    msg.setSourceEntity(117U);
    msg.setDestination(50697U);
    msg.setDestinationEntity(26U);
    msg.value = 0.730882891774;

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
    msg.setTimeStamp(0.414650299546);
    msg.setSource(36939U);
    msg.setSourceEntity(159U);
    msg.setDestination(41077U);
    msg.setDestinationEntity(75U);
    msg.value = 0.110826970497;

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
    msg.setTimeStamp(0.913061723857);
    msg.setSource(7368U);
    msg.setSourceEntity(148U);
    msg.setDestination(9613U);
    msg.setDestinationEntity(32U);
    msg.value = 0.988159150755;

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
    msg.setTimeStamp(0.577288585318);
    msg.setSource(5051U);
    msg.setSourceEntity(236U);
    msg.setDestination(21307U);
    msg.setDestinationEntity(13U);
    msg.value = 0.534932419769;

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
    msg.setTimeStamp(0.817915877971);
    msg.setSource(44951U);
    msg.setSourceEntity(251U);
    msg.setDestination(16972U);
    msg.setDestinationEntity(184U);
    msg.value = 0.688667147606;

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
    msg.setTimeStamp(0.0388282903863);
    msg.setSource(16285U);
    msg.setSourceEntity(240U);
    msg.setDestination(33111U);
    msg.setDestinationEntity(88U);
    msg.value = 0.958111177015;

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
    msg.setTimeStamp(0.292636839159);
    msg.setSource(37973U);
    msg.setSourceEntity(57U);
    msg.setDestination(34969U);
    msg.setDestinationEntity(189U);
    msg.value = 0.840888654424;

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
    msg.setTimeStamp(0.795323510219);
    msg.setSource(39212U);
    msg.setSourceEntity(205U);
    msg.setDestination(13774U);
    msg.setDestinationEntity(157U);
    msg.value = 0.620336709832;

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
    msg.setTimeStamp(0.939628441423);
    msg.setSource(56575U);
    msg.setSourceEntity(249U);
    msg.setDestination(50772U);
    msg.setDestinationEntity(238U);
    msg.value = 0.619732107876;

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
    msg.setTimeStamp(0.930459522596);
    msg.setSource(14198U);
    msg.setSourceEntity(23U);
    msg.setDestination(42044U);
    msg.setDestinationEntity(98U);
    msg.value = 0.56791009761;

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
    msg.setTimeStamp(0.551903688081);
    msg.setSource(46126U);
    msg.setSourceEntity(188U);
    msg.setDestination(23756U);
    msg.setDestinationEntity(133U);
    msg.value = 0.371661098505;

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
    msg.setTimeStamp(0.773787198749);
    msg.setSource(25447U);
    msg.setSourceEntity(252U);
    msg.setDestination(58982U);
    msg.setDestinationEntity(18U);
    msg.value = 0.676750676038;

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
    msg.setTimeStamp(0.43106200876);
    msg.setSource(47889U);
    msg.setSourceEntity(139U);
    msg.setDestination(22626U);
    msg.setDestinationEntity(130U);
    msg.value = 0.0496215295192;

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
    msg.setTimeStamp(0.127058918599);
    msg.setSource(61270U);
    msg.setSourceEntity(239U);
    msg.setDestination(17869U);
    msg.setDestinationEntity(244U);
    msg.value = 0.429709881777;

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
    msg.setTimeStamp(0.550962478777);
    msg.setSource(20371U);
    msg.setSourceEntity(72U);
    msg.setDestination(53313U);
    msg.setDestinationEntity(219U);
    msg.value = 0.814819697092;

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
    msg.setTimeStamp(0.340944310377);
    msg.setSource(18500U);
    msg.setSourceEntity(22U);
    msg.setDestination(34252U);
    msg.setDestinationEntity(185U);
    msg.value = 0.384069348571;

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
    msg.setTimeStamp(0.14782388913);
    msg.setSource(1584U);
    msg.setSourceEntity(253U);
    msg.setDestination(44578U);
    msg.setDestinationEntity(249U);
    msg.value = 0.218114242741;

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
    msg.setTimeStamp(0.828005038306);
    msg.setSource(2027U);
    msg.setSourceEntity(46U);
    msg.setDestination(60289U);
    msg.setDestinationEntity(43U);
    msg.value = 0.319538589022;

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
    msg.setTimeStamp(0.178862639914);
    msg.setSource(42403U);
    msg.setSourceEntity(49U);
    msg.setDestination(46549U);
    msg.setDestinationEntity(167U);
    msg.value = 0.260867675236;

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
    msg.setTimeStamp(0.698722170817);
    msg.setSource(32367U);
    msg.setSourceEntity(5U);
    msg.setDestination(25112U);
    msg.setDestinationEntity(248U);
    msg.value = 0.60831563929;

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
    msg.setTimeStamp(0.784898417465);
    msg.setSource(29822U);
    msg.setSourceEntity(149U);
    msg.setDestination(9238U);
    msg.setDestinationEntity(108U);
    msg.direction = 0.985588720339;
    msg.speed = 0.167367412952;
    msg.turbulence = 0.0210801931888;

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
    msg.setTimeStamp(0.150478524213);
    msg.setSource(21040U);
    msg.setSourceEntity(219U);
    msg.setDestination(9084U);
    msg.setDestinationEntity(242U);
    msg.direction = 0.286297772793;
    msg.speed = 0.439476538562;
    msg.turbulence = 0.219298037501;

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
    msg.setTimeStamp(0.345718774943);
    msg.setSource(55113U);
    msg.setSourceEntity(64U);
    msg.setDestination(1401U);
    msg.setDestinationEntity(225U);
    msg.direction = 0.73432705396;
    msg.speed = 0.651013713232;
    msg.turbulence = 0.250944192056;

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
    msg.setTimeStamp(0.802553468618);
    msg.setSource(48851U);
    msg.setSourceEntity(149U);
    msg.setDestination(48342U);
    msg.setDestinationEntity(55U);
    msg.value = 0.446369029549;

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
    msg.setTimeStamp(0.119669566287);
    msg.setSource(1548U);
    msg.setSourceEntity(189U);
    msg.setDestination(47441U);
    msg.setDestinationEntity(74U);
    msg.value = 6.7164818813e-05;

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
    msg.setTimeStamp(0.0372496148121);
    msg.setSource(20163U);
    msg.setSourceEntity(89U);
    msg.setDestination(43058U);
    msg.setDestinationEntity(116U);
    msg.value = 0.742667848066;

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
    msg.setTimeStamp(0.938664200625);
    msg.setSource(27944U);
    msg.setSourceEntity(0U);
    msg.setDestination(2969U);
    msg.setDestinationEntity(244U);
    msg.value.assign("CSEFYIETMCULKXROMYQATBBPXZJGGAHZYTCJQQKDXENQCMGPKRLMXFSXRNDTQZEBYYOVSWUFRIKOAGEWOAJPPVM");

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
    msg.setTimeStamp(0.478078799869);
    msg.setSource(5156U);
    msg.setSourceEntity(225U);
    msg.setDestination(6865U);
    msg.setDestinationEntity(28U);
    msg.value.assign("AQSPFXDTVJXKCWBYOMBXGSZUATURHSEADHGRERYVJJZICORNVGNXXXPAFIFRPOJYOXEMMNLJSXYIFUPNOZOEAACMJTGYVVOEKTTIBWETFLYGJWTUQBLUKSZDLBESCZHPWVUSMQWYNGHOAPHMTUYFWCEQILROIIEVPKLSCWQZGRQIDAVIXJDIAMPCAVMLGYCPQWNBUUYPKKNJZSDXNWCQEHKBTFURQLDFZZHNFKRDKTBKDHFJGQHMNZDO");

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
    msg.setTimeStamp(0.471776389133);
    msg.setSource(33892U);
    msg.setSourceEntity(246U);
    msg.setDestination(17157U);
    msg.setDestinationEntity(76U);
    msg.value.assign("MTZECHMDCIDHAKHBECORPSOFDULKJJHMJRWFJZEYBQFSIFAMBTUCAHWWIEGGDBDVXNPIXNWCZGSWFWOZZMNAPRXSYURJDFSHIBXBVKWYQFELGWZXVFBSKVNOATROZ");

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
    msg.setTimeStamp(0.72526746068);
    msg.setSource(31180U);
    msg.setSourceEntity(172U);
    msg.setDestination(37243U);
    msg.setDestinationEntity(230U);
    const char tmp_msg_0[] = {-34, 100, 23, -36, 119, -94, 35, -56, -101, 101, -33, -23, -26, -93, -22, 66, -84, 2, 126, 113, 113, 42, -5, -99, 62, 54, -8, 61, 13, -15, 86, 77, 0, -17, -34, -81, 1, 88, 75, -107, -85, 62, 116, 125, 21, 68, -77, -24, 80, 5, 25, -119, 122, 77, 27, 49, 98, 118, 16, -48, 22, 73, -123, -79, 27, 68, -20, -108, -48, -92, 116, 113, 104, 43, -118, 102, 115, 45, -79, 103, -100, 9, -77, -74, 15, 73, -110, 36, 74, -72, 9, -85, 36, 54, 100, -55, -67, -15, -64, 68, -108, 95, -69, -85, 69, 36, -10, -6, -110, -123, 8, -84, -85, 43, 31, 95, -61, -56, 46, 40, -64, 109, -106, -56, -108, -14, -27, -114, 106, 69, -87, -120, -3, 75, -124, 62, -48, 84, 122};
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
    msg.setTimeStamp(0.0215085394624);
    msg.setSource(57797U);
    msg.setSourceEntity(117U);
    msg.setDestination(11016U);
    msg.setDestinationEntity(23U);
    const char tmp_msg_0[] = {-7, -19, 105, -105, -29, -64, 46, 0, 97, 59, -18, -57, 49, -100, 84, 77, -124, 61, 95, 97, -35, 72, -82, 59, -101, 64, -30, -90, 18, 115, -27, -10, -114, 86, 12, 1, 5, 55, -24, -63, 84, -43, -86, -94, -80, 101, -83, 21, 36, -48, 123, -78, 100, -114, -114, 50, 9, -77, -90, -26, -91, 30, 17, -63, 117, 109, -3, 26, -41, -88, -65, -12, -48, -107};
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
    msg.setTimeStamp(0.746679077899);
    msg.setSource(12960U);
    msg.setSourceEntity(239U);
    msg.setDestination(29691U);
    msg.setDestinationEntity(244U);
    const char tmp_msg_0[] = {22, -72, 13, 4, -76, -32, 21, 40, 3, -3, 89, -84, -39, 65, -83, 95, 71, -40, 89, -90, -95, 7, 76, -8, 126, -82, -51, -32, -35, -85, -125, -76, 120, 30, 32, -85, 62, -78, 65, -5, 79, 101, -84, 71, 120, -79, -96, 94, 66, 31, 33, 70, 38, -85, 51, -102, -128, -16, 64, -34, 58, -35, -62, 100, -20, 107, 25, 63, -26, -9, -21, -67, 48, 101, -40, 38, 72, -17, 85, 126, 95, 107, -90, 84, -49, 48, -88, 60, -125, -97, 53, -48, -96, 114, 13, -24, -117, -108, 15, -59, 61};
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
    msg.setTimeStamp(0.321131991753);
    msg.setSource(51100U);
    msg.setSourceEntity(129U);
    msg.setDestination(54134U);
    msg.setDestinationEntity(173U);
    msg.value = 0.540487108401;

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
    msg.setTimeStamp(0.706306102246);
    msg.setSource(49028U);
    msg.setSourceEntity(52U);
    msg.setDestination(14994U);
    msg.setDestinationEntity(130U);
    msg.value = 0.991700687496;

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
    msg.setTimeStamp(0.185364623902);
    msg.setSource(40292U);
    msg.setSourceEntity(221U);
    msg.setDestination(49365U);
    msg.setDestinationEntity(40U);
    msg.value = 0.723308957733;

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
    msg.setTimeStamp(0.227790474294);
    msg.setSource(29242U);
    msg.setSourceEntity(57U);
    msg.setDestination(25707U);
    msg.setDestinationEntity(241U);
    msg.type = 198U;
    msg.frequency = 560685585U;
    msg.min_range = 15428U;
    msg.max_range = 60702U;
    msg.bits_per_point = 16U;
    msg.scale_factor = 0.74939273452;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.0799829292086;
    tmp_msg_0.beam_height = 0.850287024723;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {-39, -120, -110, -59, -8, -20, -24, -93, 123, -108, -101, 20, -6, 4, -6, -1, -8, 22, -75, 21, -1, 96, 59};
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
    msg.setTimeStamp(0.350127679784);
    msg.setSource(64236U);
    msg.setSourceEntity(136U);
    msg.setDestination(44125U);
    msg.setDestinationEntity(20U);
    msg.type = 54U;
    msg.frequency = 1182764276U;
    msg.min_range = 35044U;
    msg.max_range = 24032U;
    msg.bits_per_point = 91U;
    msg.scale_factor = 0.916944383191;
    const char tmp_msg_0[] = {123, -10, -33, 8, 108, 101, -88, 121, -93, 90, -120, 22, -10, 84, -39, -62, -81, -43, 61, -114, 3, 104, 25, -116, -34, 47, 94, -86, -91, 95, 110, 87, 44, 74, 120, -58, -102, 107, -114, -6, 44, -108, 27, 44, 15, 106, 0, -33, 54, -52, 70, 125, 45, -17, -64, 100, -3, 34, -60, 51, -33, 5, 103, -61, 110, 66, -70, -112, -100, -12, 92, -110, 22, 55, -66, 104, -34, -60, 86, 9, 121, -112, 42, 21, 72, 59, 111, -41, 60, -60, -104, -19, -17, -35, 54, 0, -102, 117, -111, -25, -102, -65, -47, 50, -66, 75, -27, 65, 40, 90, 97, 58, -83, 102, 91, 96, -82, -95, -20, 21, 13, 101, 113, 65, -101, 102, 120, -19, -126, -18, 79, -67, -47, -77, 4, -74, 115, 87, 33, 113, 112, -98, 81, -20, -5, 114, 14, 77, -67, -79, -28, 22, -45, -93, -37, 88, -122, -30, 29, -122, 37, 90, -91, -57, -91, -101, -56, -41, -31, -1, 11, 25, -41, -47, 36, -59, -42, -41, 8, -65, -112, 104, 101, 65, 37, -36, -80, -55, -29, 27, -113, -117};
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
    msg.setTimeStamp(0.518375720511);
    msg.setSource(32439U);
    msg.setSourceEntity(210U);
    msg.setDestination(36212U);
    msg.setDestinationEntity(77U);
    msg.type = 62U;
    msg.frequency = 789662990U;
    msg.min_range = 49418U;
    msg.max_range = 31731U;
    msg.bits_per_point = 19U;
    msg.scale_factor = 0.98172517486;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.378424926288;
    tmp_msg_0.beam_height = 0.48491639271;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {-41, -33, 125, 123, -68, -7, 1, 116, 22, 43, -25, -124, -73, 5, 13, -5, 41, 43, -1, 15, 38, -110, -27, 8, -100, 30, -109, -108, 13, 118, -16, 32, 105, 3, -16, -34, -69, -83, -47, -87, 37, -89, -98, -67, 118, -117, 6, 101, -13, 38, -38, -108, -1, 72};
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
    msg.setTimeStamp(0.126270308713);
    msg.setSource(33091U);
    msg.setSourceEntity(238U);
    msg.setDestination(9303U);
    msg.setDestinationEntity(200U);

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
    msg.setTimeStamp(0.321367994762);
    msg.setSource(6226U);
    msg.setSourceEntity(130U);
    msg.setDestination(28573U);
    msg.setDestinationEntity(41U);

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
    msg.setTimeStamp(0.252942020328);
    msg.setSource(9355U);
    msg.setSourceEntity(141U);
    msg.setDestination(27774U);
    msg.setDestinationEntity(76U);

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
    msg.setTimeStamp(0.271735573019);
    msg.setSource(19037U);
    msg.setSourceEntity(242U);
    msg.setDestination(55160U);
    msg.setDestinationEntity(159U);
    msg.op = 82U;

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
    msg.setTimeStamp(0.145630056607);
    msg.setSource(4691U);
    msg.setSourceEntity(2U);
    msg.setDestination(60902U);
    msg.setDestinationEntity(65U);
    msg.op = 68U;

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
    msg.setTimeStamp(0.594472377501);
    msg.setSource(19015U);
    msg.setSourceEntity(16U);
    msg.setDestination(41467U);
    msg.setDestinationEntity(67U);
    msg.op = 70U;

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
    msg.setTimeStamp(0.561104477525);
    msg.setSource(22584U);
    msg.setSourceEntity(21U);
    msg.setDestination(25489U);
    msg.setDestinationEntity(94U);
    msg.value = 0.95900905727;
    msg.confidence = 0.188014279864;
    msg.opmodes.assign("YRRWWLBRRPOTNEYUNNGTPVOYAQZZAYUMBTVOHNVMVJEORIKAYMXGDJIBHDDCXKEWAKQZSPVEMBQIHWIDMZCDCXSNUQXGVCIBHLHFSQPJCJEKDFYTHXTOUTBZXGT");

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
    msg.setTimeStamp(0.541417692495);
    msg.setSource(49851U);
    msg.setSourceEntity(243U);
    msg.setDestination(36987U);
    msg.setDestinationEntity(105U);
    msg.value = 0.255903074918;
    msg.confidence = 0.773708880553;
    msg.opmodes.assign("CQOCRMUAPTAEGJPLMOGQTGKMUXMATEAQQQFMIIYIFTGSMSNGWOYPIOJFVEMUSNVDULHBKJBBQAJQREYYTPFSOJCLCPSJOTASWDUUWGDVEDQSXDGVXLLFGIPVXJJHRKZXKTWZYJCYHTLAMOOZUPZKFBMZPVIZXRPAHJBNO");

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
    msg.setTimeStamp(0.532041687898);
    msg.setSource(40723U);
    msg.setSourceEntity(184U);
    msg.setDestination(59950U);
    msg.setDestinationEntity(86U);
    msg.value = 0.622610914684;
    msg.confidence = 0.198188683779;
    msg.opmodes.assign("UFOCJEUYKPQNPVGMKEQSHXEQEZGTUCNAUVRQJIDCVTMHYILODSFPEL");

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
    msg.setTimeStamp(0.387455663782);
    msg.setSource(33855U);
    msg.setSourceEntity(199U);
    msg.setDestination(45255U);
    msg.setDestinationEntity(112U);
    msg.itow = 4096331314U;
    msg.lat = 0.551022797406;
    msg.lon = 0.727402287727;
    msg.height_ell = 0.612151351682;
    msg.height_sea = 0.160739155739;
    msg.hacc = 0.776592317796;
    msg.vacc = 0.117326465607;
    msg.vel_n = 0.765122619869;
    msg.vel_e = 0.923457082792;
    msg.vel_d = 0.52885928575;
    msg.speed = 0.0870327815884;
    msg.gspeed = 0.602020565077;
    msg.heading = 0.0780168185606;
    msg.sacc = 0.450518635627;
    msg.cacc = 0.323107363059;

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
    msg.setTimeStamp(0.575430556712);
    msg.setSource(62080U);
    msg.setSourceEntity(116U);
    msg.setDestination(60912U);
    msg.setDestinationEntity(244U);
    msg.itow = 2311130723U;
    msg.lat = 0.46476573697;
    msg.lon = 0.619177087301;
    msg.height_ell = 0.276364472796;
    msg.height_sea = 0.303330877428;
    msg.hacc = 0.358036612364;
    msg.vacc = 0.27673304101;
    msg.vel_n = 0.296015987889;
    msg.vel_e = 0.598720699165;
    msg.vel_d = 0.806036842762;
    msg.speed = 0.500155834486;
    msg.gspeed = 0.981990869105;
    msg.heading = 0.439971488405;
    msg.sacc = 0.832746180329;
    msg.cacc = 0.679756839638;

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
    msg.setTimeStamp(0.448889607555);
    msg.setSource(60306U);
    msg.setSourceEntity(108U);
    msg.setDestination(51690U);
    msg.setDestinationEntity(234U);
    msg.itow = 1331330899U;
    msg.lat = 0.192175019003;
    msg.lon = 0.0862324646484;
    msg.height_ell = 0.843001716982;
    msg.height_sea = 0.991971947014;
    msg.hacc = 0.473716443546;
    msg.vacc = 0.356803797438;
    msg.vel_n = 0.0514443969733;
    msg.vel_e = 0.458073836419;
    msg.vel_d = 0.757963160911;
    msg.speed = 0.939639894779;
    msg.gspeed = 0.704995320287;
    msg.heading = 0.304772951093;
    msg.sacc = 0.0372699925806;
    msg.cacc = 0.134941870092;

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
    msg.setTimeStamp(0.0105274696222);
    msg.setSource(59392U);
    msg.setSourceEntity(136U);
    msg.setDestination(25770U);
    msg.setDestinationEntity(83U);
    msg.id = 23U;
    msg.value = 0.428274926345;

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
    msg.setTimeStamp(0.883260957997);
    msg.setSource(18745U);
    msg.setSourceEntity(35U);
    msg.setDestination(18915U);
    msg.setDestinationEntity(116U);
    msg.id = 223U;
    msg.value = 0.458170257702;

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
    msg.setTimeStamp(0.804903426852);
    msg.setSource(62932U);
    msg.setSourceEntity(226U);
    msg.setDestination(49838U);
    msg.setDestinationEntity(236U);
    msg.id = 160U;
    msg.value = 0.752410052147;

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
    msg.setTimeStamp(0.267204082384);
    msg.setSource(19219U);
    msg.setSourceEntity(61U);
    msg.setDestination(38668U);
    msg.setDestinationEntity(163U);
    msg.x = 0.17782588564;
    msg.y = 0.0594808527373;
    msg.z = 0.299047044062;
    msg.phi = 0.426715924912;
    msg.theta = 0.897294440059;
    msg.psi = 0.803344843282;

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
    msg.setTimeStamp(0.583341599032);
    msg.setSource(51249U);
    msg.setSourceEntity(177U);
    msg.setDestination(22110U);
    msg.setDestinationEntity(188U);
    msg.x = 0.641345499788;
    msg.y = 0.411630560652;
    msg.z = 0.764681973421;
    msg.phi = 0.159890889265;
    msg.theta = 0.612335807071;
    msg.psi = 0.834126715803;

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
    msg.setTimeStamp(0.141179712694);
    msg.setSource(28173U);
    msg.setSourceEntity(186U);
    msg.setDestination(23789U);
    msg.setDestinationEntity(134U);
    msg.x = 0.611826467003;
    msg.y = 0.125789404123;
    msg.z = 0.959657821656;
    msg.phi = 0.292565993991;
    msg.theta = 0.0357307232846;
    msg.psi = 0.559213697194;

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
    msg.setTimeStamp(0.208138714625);
    msg.setSource(31320U);
    msg.setSourceEntity(116U);
    msg.setDestination(31605U);
    msg.setDestinationEntity(149U);
    msg.beam_width = 0.34140328007;
    msg.beam_height = 0.0856989797948;

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
    msg.setTimeStamp(0.364221067844);
    msg.setSource(62402U);
    msg.setSourceEntity(95U);
    msg.setDestination(34918U);
    msg.setDestinationEntity(6U);
    msg.beam_width = 0.531830613412;
    msg.beam_height = 0.399407074776;

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
    msg.setTimeStamp(0.576643594551);
    msg.setSource(15104U);
    msg.setSourceEntity(186U);
    msg.setDestination(20427U);
    msg.setDestinationEntity(44U);
    msg.beam_width = 0.801687728101;
    msg.beam_height = 0.830986462252;

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
    msg.setTimeStamp(0.318149122121);
    msg.setSource(31198U);
    msg.setSourceEntity(169U);
    msg.setDestination(30010U);
    msg.setDestinationEntity(190U);
    msg.sane = 154U;

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
    msg.setTimeStamp(0.594221181403);
    msg.setSource(53105U);
    msg.setSourceEntity(183U);
    msg.setDestination(32139U);
    msg.setDestinationEntity(153U);
    msg.sane = 205U;

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
    msg.setTimeStamp(0.458179446465);
    msg.setSource(20025U);
    msg.setSourceEntity(169U);
    msg.setDestination(10981U);
    msg.setDestinationEntity(25U);
    msg.sane = 244U;

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
    msg.setTimeStamp(0.2803379552);
    msg.setSource(41908U);
    msg.setSourceEntity(160U);
    msg.setDestination(17121U);
    msg.setDestinationEntity(19U);
    msg.value = 0.494558823624;

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
    msg.setTimeStamp(0.640330915545);
    msg.setSource(64413U);
    msg.setSourceEntity(226U);
    msg.setDestination(25142U);
    msg.setDestinationEntity(39U);
    msg.value = 0.498622536519;

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
    msg.setTimeStamp(0.981656436947);
    msg.setSource(3489U);
    msg.setSourceEntity(48U);
    msg.setDestination(27199U);
    msg.setDestinationEntity(31U);
    msg.value = 0.938295142478;

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
    msg.setTimeStamp(0.134668367828);
    msg.setSource(25844U);
    msg.setSourceEntity(240U);
    msg.setDestination(6924U);
    msg.setDestinationEntity(77U);
    msg.value = 0.447762427044;

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
    msg.setTimeStamp(0.843792974733);
    msg.setSource(38331U);
    msg.setSourceEntity(64U);
    msg.setDestination(60717U);
    msg.setDestinationEntity(74U);
    msg.value = 0.0900039903493;

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
    msg.setTimeStamp(0.0411658918004);
    msg.setSource(41627U);
    msg.setSourceEntity(167U);
    msg.setDestination(42924U);
    msg.setDestinationEntity(99U);
    msg.value = 0.170804330123;

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
    msg.setTimeStamp(0.316812243567);
    msg.setSource(60767U);
    msg.setSourceEntity(130U);
    msg.setDestination(14188U);
    msg.setDestinationEntity(137U);
    msg.value = 0.465452562505;

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
    msg.setTimeStamp(0.408363038179);
    msg.setSource(48821U);
    msg.setSourceEntity(153U);
    msg.setDestination(10979U);
    msg.setDestinationEntity(211U);
    msg.value = 0.72700046318;

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
    msg.setTimeStamp(0.401007398587);
    msg.setSource(35101U);
    msg.setSourceEntity(8U);
    msg.setDestination(55589U);
    msg.setDestinationEntity(197U);
    msg.value = 0.96327137941;

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
    msg.setTimeStamp(0.392377932373);
    msg.setSource(6066U);
    msg.setSourceEntity(95U);
    msg.setDestination(58052U);
    msg.setDestinationEntity(115U);
    msg.value = 0.051392720376;

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
    msg.setTimeStamp(0.0593819727308);
    msg.setSource(930U);
    msg.setSourceEntity(166U);
    msg.setDestination(36445U);
    msg.setDestinationEntity(181U);
    msg.value = 0.735793441628;

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
    msg.setTimeStamp(0.21019181297);
    msg.setSource(63684U);
    msg.setSourceEntity(102U);
    msg.setDestination(24020U);
    msg.setDestinationEntity(38U);
    msg.value = 0.794435597155;

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
    msg.setTimeStamp(0.372217688405);
    msg.setSource(48110U);
    msg.setSourceEntity(150U);
    msg.setDestination(19841U);
    msg.setDestinationEntity(245U);
    msg.value = 0.0385139512095;

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
    msg.setTimeStamp(0.477726464454);
    msg.setSource(31209U);
    msg.setSourceEntity(224U);
    msg.setDestination(21792U);
    msg.setDestinationEntity(59U);
    msg.value = 0.797596721097;

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
    msg.setTimeStamp(0.238967154791);
    msg.setSource(14689U);
    msg.setSourceEntity(113U);
    msg.setDestination(27242U);
    msg.setDestinationEntity(237U);
    msg.value = 0.00296060711978;

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
    msg.setTimeStamp(0.0301866668212);
    msg.setSource(31332U);
    msg.setSourceEntity(85U);
    msg.setDestination(23519U);
    msg.setDestinationEntity(118U);
    msg.value = 0.467243818011;

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
    msg.setTimeStamp(0.482470723894);
    msg.setSource(41508U);
    msg.setSourceEntity(60U);
    msg.setDestination(8341U);
    msg.setDestinationEntity(205U);
    msg.value = 0.123450990148;

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
    msg.setTimeStamp(0.946730713618);
    msg.setSource(12200U);
    msg.setSourceEntity(243U);
    msg.setDestination(65355U);
    msg.setDestinationEntity(129U);
    msg.value = 0.0481079769661;

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
    msg.setTimeStamp(0.773458636971);
    msg.setSource(19905U);
    msg.setSourceEntity(125U);
    msg.setDestination(33201U);
    msg.setDestinationEntity(28U);
    msg.value = 0.623278293545;

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
    msg.setTimeStamp(0.132583332394);
    msg.setSource(55042U);
    msg.setSourceEntity(250U);
    msg.setDestination(60991U);
    msg.setDestinationEntity(77U);
    msg.value = 0.892838866928;

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
    msg.setTimeStamp(0.623894944726);
    msg.setSource(30973U);
    msg.setSourceEntity(151U);
    msg.setDestination(36755U);
    msg.setDestinationEntity(169U);
    msg.value = 0.658764452282;

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
    msg.setTimeStamp(0.611175149758);
    msg.setSource(37455U);
    msg.setSourceEntity(226U);
    msg.setDestination(6861U);
    msg.setDestinationEntity(233U);
    msg.value = 0.159793880826;

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
    msg.setTimeStamp(0.979174793395);
    msg.setSource(8138U);
    msg.setSourceEntity(129U);
    msg.setDestination(22353U);
    msg.setDestinationEntity(178U);
    msg.value = 0.707004374228;

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
    msg.setTimeStamp(0.164304062037);
    msg.setSource(33308U);
    msg.setSourceEntity(135U);
    msg.setDestination(54014U);
    msg.setDestinationEntity(88U);
    msg.value = 0.683118303121;

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
    msg.setTimeStamp(0.637186210103);
    msg.setSource(33129U);
    msg.setSourceEntity(250U);
    msg.setDestination(21392U);
    msg.setDestinationEntity(195U);
    msg.validity = 30633U;
    msg.type = 113U;
    msg.tow = 2986128446U;
    msg.base_lat = 0.190094069599;
    msg.base_lon = 0.384728634492;
    msg.base_height = 0.955238405223;
    msg.n = 0.142185784091;
    msg.e = 0.121334348034;
    msg.d = 0.622125100873;
    msg.v_n = 0.252909937852;
    msg.v_e = 0.598857024782;
    msg.v_d = 0.128290342299;
    msg.satellites = 5U;
    msg.iar_hyp = 22874U;
    msg.iar_ratio = 0.497421377286;

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
    msg.setTimeStamp(0.302994053005);
    msg.setSource(27896U);
    msg.setSourceEntity(2U);
    msg.setDestination(43027U);
    msg.setDestinationEntity(14U);
    msg.validity = 54320U;
    msg.type = 121U;
    msg.tow = 3299604825U;
    msg.base_lat = 0.438386774155;
    msg.base_lon = 0.386196637816;
    msg.base_height = 0.947041755944;
    msg.n = 0.731222447848;
    msg.e = 0.768688371392;
    msg.d = 0.470493504735;
    msg.v_n = 0.250898592376;
    msg.v_e = 0.0618788459441;
    msg.v_d = 0.228663826555;
    msg.satellites = 42U;
    msg.iar_hyp = 48774U;
    msg.iar_ratio = 0.672251021295;

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
    msg.setTimeStamp(0.480710948563);
    msg.setSource(45607U);
    msg.setSourceEntity(153U);
    msg.setDestination(18037U);
    msg.setDestinationEntity(42U);
    msg.validity = 21488U;
    msg.type = 124U;
    msg.tow = 253648359U;
    msg.base_lat = 0.0209414449623;
    msg.base_lon = 0.19438175047;
    msg.base_height = 0.474916963988;
    msg.n = 0.645564115138;
    msg.e = 0.014613840772;
    msg.d = 0.73617755433;
    msg.v_n = 0.0571891597964;
    msg.v_e = 0.808495951772;
    msg.v_d = 0.123296089802;
    msg.satellites = 154U;
    msg.iar_hyp = 14825U;
    msg.iar_ratio = 0.834234423976;

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
    msg.setTimeStamp(0.394977770298);
    msg.setSource(10820U);
    msg.setSourceEntity(28U);
    msg.setDestination(7203U);
    msg.setDestinationEntity(14U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.307936753445;
    tmp_msg_0.lon = 0.437719873211;
    tmp_msg_0.height = 0.612176952671;
    tmp_msg_0.x = 0.29202271919;
    tmp_msg_0.y = 0.269570172667;
    tmp_msg_0.z = 0.243852230375;
    tmp_msg_0.phi = 0.384894907887;
    tmp_msg_0.theta = 0.396549809112;
    tmp_msg_0.psi = 0.843968218103;
    tmp_msg_0.u = 0.377901782634;
    tmp_msg_0.v = 0.650612658069;
    tmp_msg_0.w = 0.383601003639;
    tmp_msg_0.vx = 0.260982629053;
    tmp_msg_0.vy = 0.904684149936;
    tmp_msg_0.vz = 0.0200765793229;
    tmp_msg_0.p = 0.887165891554;
    tmp_msg_0.q = 0.659932179403;
    tmp_msg_0.r = 0.240495740772;
    tmp_msg_0.depth = 0.493301309197;
    tmp_msg_0.alt = 0.0488774136416;
    msg.state.set(tmp_msg_0);
    msg.type = 129U;

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
    msg.setTimeStamp(0.667580514554);
    msg.setSource(47576U);
    msg.setSourceEntity(173U);
    msg.setDestination(54638U);
    msg.setDestinationEntity(59U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.369771204298;
    tmp_msg_0.lon = 0.00729954727859;
    tmp_msg_0.height = 0.67461552668;
    tmp_msg_0.x = 0.0537166171786;
    tmp_msg_0.y = 0.108898739769;
    tmp_msg_0.z = 0.916016270924;
    tmp_msg_0.phi = 0.18308212888;
    tmp_msg_0.theta = 0.785592284835;
    tmp_msg_0.psi = 0.94837426524;
    tmp_msg_0.u = 0.413257234269;
    tmp_msg_0.v = 0.732163957725;
    tmp_msg_0.w = 0.758513168875;
    tmp_msg_0.vx = 0.0416082278658;
    tmp_msg_0.vy = 0.424789271069;
    tmp_msg_0.vz = 0.0513740283621;
    tmp_msg_0.p = 0.0521502218336;
    tmp_msg_0.q = 0.441470895707;
    tmp_msg_0.r = 0.240953239766;
    tmp_msg_0.depth = 0.752302063121;
    tmp_msg_0.alt = 0.0818477431765;
    msg.state.set(tmp_msg_0);
    msg.type = 17U;

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
    msg.setTimeStamp(0.325632126792);
    msg.setSource(37679U);
    msg.setSourceEntity(125U);
    msg.setDestination(5543U);
    msg.setDestinationEntity(31U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.0754916670833;
    tmp_msg_0.lon = 0.340429993162;
    tmp_msg_0.height = 0.32655374395;
    tmp_msg_0.x = 0.815254247426;
    tmp_msg_0.y = 0.63245330308;
    tmp_msg_0.z = 0.469300464518;
    tmp_msg_0.phi = 0.629224593634;
    tmp_msg_0.theta = 0.672099330638;
    tmp_msg_0.psi = 0.577394822578;
    tmp_msg_0.u = 0.426647635445;
    tmp_msg_0.v = 0.0731693554275;
    tmp_msg_0.w = 0.822391623332;
    tmp_msg_0.vx = 0.942259616147;
    tmp_msg_0.vy = 0.737951478563;
    tmp_msg_0.vz = 0.642250129803;
    tmp_msg_0.p = 0.889962850512;
    tmp_msg_0.q = 0.84415283421;
    tmp_msg_0.r = 0.570702109417;
    tmp_msg_0.depth = 0.369258591271;
    tmp_msg_0.alt = 0.938552058282;
    msg.state.set(tmp_msg_0);
    msg.type = 224U;

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
    msg.setTimeStamp(0.368758288489);
    msg.setSource(44640U);
    msg.setSourceEntity(195U);
    msg.setDestination(49947U);
    msg.setDestinationEntity(228U);
    msg.value = 0.312892676656;

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
    msg.setTimeStamp(0.453974603483);
    msg.setSource(24986U);
    msg.setSourceEntity(71U);
    msg.setDestination(4929U);
    msg.setDestinationEntity(141U);
    msg.value = 0.76824424464;

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
    msg.setTimeStamp(0.408318140055);
    msg.setSource(42126U);
    msg.setSourceEntity(134U);
    msg.setDestination(50176U);
    msg.setDestinationEntity(188U);
    msg.value = 0.769600875868;

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
    msg.setTimeStamp(0.97817406745);
    msg.setSource(4732U);
    msg.setSourceEntity(244U);
    msg.setDestination(6937U);
    msg.setDestinationEntity(252U);
    msg.value = 0.558087128715;

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
    msg.setTimeStamp(0.846210213696);
    msg.setSource(25927U);
    msg.setSourceEntity(122U);
    msg.setDestination(16792U);
    msg.setDestinationEntity(17U);
    msg.value = 0.744993544685;

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
    msg.setTimeStamp(0.466234355087);
    msg.setSource(65081U);
    msg.setSourceEntity(93U);
    msg.setDestination(33230U);
    msg.setDestinationEntity(6U);
    msg.value = 0.244078351719;

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
    msg.setTimeStamp(0.476502430692);
    msg.setSource(45542U);
    msg.setSourceEntity(59U);
    msg.setDestination(55945U);
    msg.setDestinationEntity(230U);
    msg.value = 0.755900374925;

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
    msg.setTimeStamp(0.378577984451);
    msg.setSource(31983U);
    msg.setSourceEntity(247U);
    msg.setDestination(63427U);
    msg.setDestinationEntity(167U);
    msg.value = 0.653245794033;

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
    msg.setTimeStamp(0.765154769257);
    msg.setSource(33931U);
    msg.setSourceEntity(16U);
    msg.setDestination(22911U);
    msg.setDestinationEntity(6U);
    msg.value = 0.16189220559;

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
    msg.setTimeStamp(0.238772675003);
    msg.setSource(54184U);
    msg.setSourceEntity(189U);
    msg.setDestination(56334U);
    msg.setDestinationEntity(81U);
    msg.value = 0.792089927306;

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
    msg.setTimeStamp(0.0477220778787);
    msg.setSource(8209U);
    msg.setSourceEntity(213U);
    msg.setDestination(38084U);
    msg.setDestinationEntity(215U);
    msg.value = 0.769914205432;

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
    msg.setTimeStamp(0.952497057607);
    msg.setSource(44641U);
    msg.setSourceEntity(146U);
    msg.setDestination(36762U);
    msg.setDestinationEntity(131U);
    msg.value = 0.110082211552;

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
    msg.setTimeStamp(0.284542231737);
    msg.setSource(61021U);
    msg.setSourceEntity(55U);
    msg.setDestination(56255U);
    msg.setDestinationEntity(12U);
    msg.value = 0.839987664557;

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
    msg.setTimeStamp(0.996278507424);
    msg.setSource(56192U);
    msg.setSourceEntity(56U);
    msg.setDestination(28885U);
    msg.setDestinationEntity(44U);
    msg.value = 0.27159250201;

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
    msg.setTimeStamp(0.930472954882);
    msg.setSource(18389U);
    msg.setSourceEntity(154U);
    msg.setDestination(25190U);
    msg.setDestinationEntity(119U);
    msg.value = 0.0331233577812;

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
    msg.setTimeStamp(0.766081081601);
    msg.setSource(61872U);
    msg.setSourceEntity(19U);
    msg.setDestination(61643U);
    msg.setDestinationEntity(144U);
    msg.id = 229U;
    msg.zoom = 201U;
    msg.action = 14U;

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
    msg.setTimeStamp(0.305379757755);
    msg.setSource(28841U);
    msg.setSourceEntity(4U);
    msg.setDestination(22567U);
    msg.setDestinationEntity(211U);
    msg.id = 104U;
    msg.zoom = 29U;
    msg.action = 4U;

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
    msg.setTimeStamp(0.470990963942);
    msg.setSource(4487U);
    msg.setSourceEntity(206U);
    msg.setDestination(65347U);
    msg.setDestinationEntity(38U);
    msg.id = 231U;
    msg.zoom = 219U;
    msg.action = 35U;

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
    msg.setTimeStamp(0.0283605276323);
    msg.setSource(8961U);
    msg.setSourceEntity(204U);
    msg.setDestination(21689U);
    msg.setDestinationEntity(137U);
    msg.id = 143U;
    msg.value = 0.287748789289;

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
    msg.setTimeStamp(0.593452251277);
    msg.setSource(27736U);
    msg.setSourceEntity(161U);
    msg.setDestination(32101U);
    msg.setDestinationEntity(0U);
    msg.id = 226U;
    msg.value = 0.989232323595;

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
    msg.setTimeStamp(0.294171768069);
    msg.setSource(35450U);
    msg.setSourceEntity(115U);
    msg.setDestination(6956U);
    msg.setDestinationEntity(226U);
    msg.id = 68U;
    msg.value = 0.581143305092;

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
    msg.setTimeStamp(0.350885244912);
    msg.setSource(61314U);
    msg.setSourceEntity(163U);
    msg.setDestination(39376U);
    msg.setDestinationEntity(204U);
    msg.id = 157U;
    msg.value = 0.566806175046;

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
    msg.setTimeStamp(0.943255339919);
    msg.setSource(33038U);
    msg.setSourceEntity(108U);
    msg.setDestination(2245U);
    msg.setDestinationEntity(156U);
    msg.id = 120U;
    msg.value = 0.420994068452;

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
    msg.setTimeStamp(0.204912555459);
    msg.setSource(39509U);
    msg.setSourceEntity(24U);
    msg.setDestination(37783U);
    msg.setDestinationEntity(126U);
    msg.id = 148U;
    msg.value = 0.266835951255;

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
    msg.setTimeStamp(0.565983519701);
    msg.setSource(44329U);
    msg.setSourceEntity(15U);
    msg.setDestination(24649U);
    msg.setDestinationEntity(22U);
    msg.id = 234U;
    msg.angle = 0.90254785711;

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
    msg.setTimeStamp(0.368615222063);
    msg.setSource(27749U);
    msg.setSourceEntity(236U);
    msg.setDestination(20826U);
    msg.setDestinationEntity(185U);
    msg.id = 25U;
    msg.angle = 0.390091903494;

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
    msg.setTimeStamp(0.83589288983);
    msg.setSource(61978U);
    msg.setSourceEntity(30U);
    msg.setDestination(63408U);
    msg.setDestinationEntity(222U);
    msg.id = 135U;
    msg.angle = 0.227478640423;

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
    msg.setTimeStamp(0.760803157972);
    msg.setSource(49967U);
    msg.setSourceEntity(212U);
    msg.setDestination(17130U);
    msg.setDestinationEntity(64U);
    msg.op = 134U;
    msg.actions.assign("RHSQEUVXUUIOXRENBS");

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
    msg.setTimeStamp(0.666979507618);
    msg.setSource(3655U);
    msg.setSourceEntity(79U);
    msg.setDestination(53448U);
    msg.setDestinationEntity(121U);
    msg.op = 178U;
    msg.actions.assign("PKCEVMLHTMMPJPIMEKGMPWLUSWXSDXCKYWQURVMPJDYTFQSHNXBWMPBULVAQFRHRTZFHQGYOMBCDSJXUSWPENKVJNNVOYWEAHHERULGJPKLCCOYMJADAFLIVZXBKEEIHJBKHUDBXCFBRKACZTSDTOIZTKRWXQAFQTPQS");

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
    msg.setTimeStamp(0.824285012989);
    msg.setSource(28811U);
    msg.setSourceEntity(208U);
    msg.setDestination(57624U);
    msg.setDestinationEntity(62U);
    msg.op = 42U;
    msg.actions.assign("MJGORYPNWNDJOEFHYJFHVMGGVTCGUXWSFWQUOTKPFELYEDQIKOTLONYNOCAVJRSFSXSFBJGIDYHBRDUDGIZLMVHFDRWYODKPLOJ");

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
    msg.setTimeStamp(0.88852189898);
    msg.setSource(41780U);
    msg.setSourceEntity(6U);
    msg.setDestination(45980U);
    msg.setDestinationEntity(104U);
    msg.actions.assign("VAGLAJVZVCCMIYOGKMEYLBTKUICOWCZEMUBVTJQMTNSOPGXXYPMBOELLHLBYVOGBHEDXGURHSKCTHQNHSJMGQWDNEPHDEZDBMJYUWQXDQFPTAMHRIFRRUE");

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
    msg.setTimeStamp(0.684672829125);
    msg.setSource(33431U);
    msg.setSourceEntity(106U);
    msg.setDestination(44871U);
    msg.setDestinationEntity(235U);
    msg.actions.assign("YZCZOEIJRKYKMEXJWSOAGYUGVTQHGDVQNEPHENCAPPWZIIHXTJNGIVHZBPDEURCCLANIODYKVWLHVOAUGMXVCUFRMXYBYTSXJEWFCYKRPILDXOSCQGKBOLYYRTHNQMXREKADTSXMILYGKFQNFVLPVHABLUHFNTXUQZFBPBBCIRLAUSUVNSFUAJTZLJMEEZSC");

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
    msg.setTimeStamp(0.641852609026);
    msg.setSource(58966U);
    msg.setSourceEntity(207U);
    msg.setDestination(42700U);
    msg.setDestinationEntity(37U);
    msg.actions.assign("NLSCFHATNXMNKHIKWRTTTEBXOFRWMJKAFCFQSLCVVIIAPLMDDEEDGKSHYPXCUHGYKYHXZIEUWKUZZPSHJJPMNWBVZIKMWWOSGZZBCVBLLGUZXYOB");

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
    msg.setTimeStamp(0.747895821307);
    msg.setSource(13651U);
    msg.setSourceEntity(20U);
    msg.setDestination(7768U);
    msg.setDestinationEntity(80U);
    msg.button = 0U;
    msg.value = 173U;

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
    msg.setTimeStamp(0.331737282234);
    msg.setSource(31326U);
    msg.setSourceEntity(106U);
    msg.setDestination(37762U);
    msg.setDestinationEntity(227U);
    msg.button = 2U;
    msg.value = 45U;

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
    msg.setTimeStamp(0.900822899141);
    msg.setSource(8620U);
    msg.setSourceEntity(36U);
    msg.setDestination(7827U);
    msg.setDestinationEntity(186U);
    msg.button = 134U;
    msg.value = 30U;

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
    msg.setTimeStamp(0.604459427519);
    msg.setSource(15427U);
    msg.setSourceEntity(21U);
    msg.setDestination(33709U);
    msg.setDestinationEntity(107U);
    msg.op = 184U;
    msg.text.assign("SSDCMHYETCUZYDSPJALPGQZJUIWEHPFFUBLWMSEWDEFLKLLHRGGMXKHESMRPFOWGNSNQOMQMYGQVZVUQURQPTEXKIWFJNYCFKHCSYBIXPWNBRZVZARPOKNAJZBXAVQDC");

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
    msg.setTimeStamp(0.0267314478097);
    msg.setSource(13422U);
    msg.setSourceEntity(84U);
    msg.setDestination(57913U);
    msg.setDestinationEntity(239U);
    msg.op = 177U;
    msg.text.assign("CHHPKKPVIJMZELEWXANITNLHTTXJJXYIAGBJJKNFGDSTSUYEPPKGQLUVVXYRXOCCRSNZHQZVCWALXDRKDMDHYQSFFOEQKCFMOLYWXSEKWNBNGQECDMSSWCGIMHGBLUMASIBVAVRDPNTUHFDBPLEZUVAUXQZFGJTKRANRUWAVWJFBBZUEOHYQLUOJIOMGTBQKYRDZGDXIPLHTHXTMQOIBYDNRPQWFJCSAOWIZGFYWRBETICYLZKO");

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
    msg.setTimeStamp(0.465704691418);
    msg.setSource(42343U);
    msg.setSourceEntity(254U);
    msg.setDestination(41167U);
    msg.setDestinationEntity(242U);
    msg.op = 67U;
    msg.text.assign("UQHPEOUVRCWCRUTPLPYFSZIQMOPKAYYVDPJICBNTVFFHZHDRJZKNWUSGDHIRRGONAIXGLOTAKUCDOEAJRFEBSBJZCGKQMBESQNOLMADSYFWTGXGNLSVZTDKGGBNOMUCBHFPEYBSVHDMMFZOUQNRFJXIAQJ");

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
    msg.setTimeStamp(0.366334479394);
    msg.setSource(15092U);
    msg.setSourceEntity(158U);
    msg.setDestination(46514U);
    msg.setDestinationEntity(188U);
    msg.op = 161U;
    msg.time_remain = 0.478006069611;
    msg.sched_time = 0.901579388121;

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
    msg.setTimeStamp(0.0322454683442);
    msg.setSource(56619U);
    msg.setSourceEntity(142U);
    msg.setDestination(48446U);
    msg.setDestinationEntity(210U);
    msg.op = 31U;
    msg.time_remain = 0.463753548311;
    msg.sched_time = 0.340379735723;

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
    msg.setTimeStamp(0.580972098542);
    msg.setSource(63716U);
    msg.setSourceEntity(192U);
    msg.setDestination(27416U);
    msg.setDestinationEntity(106U);
    msg.op = 232U;
    msg.time_remain = 0.184142695656;
    msg.sched_time = 0.495143447658;

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
    msg.setTimeStamp(0.233228346372);
    msg.setSource(7102U);
    msg.setSourceEntity(137U);
    msg.setDestination(12036U);
    msg.setDestinationEntity(68U);
    msg.name.assign("TBMUAHSXFZFKQHSOGWRIVLHBNMAMXVSVCVNATEJAHRFITJHHVXFOYLJBXBLDPUKIRBGUNDRAJUWUFDPPIEJQWKQCSFZMONPEGZPTCYVRSILWNKQYWBGYTPNPOFMXJLUEINFIYUFXQDIYMKAOLIRPDWA");
    msg.op = 114U;
    msg.sched_time = 0.701376436029;

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
    msg.setTimeStamp(0.864209151406);
    msg.setSource(32277U);
    msg.setSourceEntity(162U);
    msg.setDestination(38238U);
    msg.setDestinationEntity(57U);
    msg.name.assign("BNJNPFEGVHSQVUNZFJATAZKPTAXBNFXYROICFBDUXHXRLRNKYUVCHMTIJPAIYWXXWSEBIGIRNDQGLPIQCZQHQJDXTZZWXRSOEIWJUVPVCGVKBHGNVYRTYKSGSUAJVOCYBUMJJOHTHWIQSNQBKLLYBHFDDTODQXRSLNSTLFMRO");
    msg.op = 113U;
    msg.sched_time = 0.949027269179;

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
    msg.setTimeStamp(0.869294000508);
    msg.setSource(35207U);
    msg.setSourceEntity(147U);
    msg.setDestination(14311U);
    msg.setDestinationEntity(16U);
    msg.name.assign("FVXKLLCEYXILUBMQQUGGIFOATBNLODNWFSNREPSUAZKEULZIMKBQATMVPQOCSBAFHQNYAYSKOZRQYTBFZFYTX");
    msg.op = 35U;
    msg.sched_time = 0.920606861246;

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
    msg.setTimeStamp(0.35185308274);
    msg.setSource(6788U);
    msg.setSourceEntity(239U);
    msg.setDestination(52240U);
    msg.setDestinationEntity(115U);

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
    msg.setTimeStamp(0.911360071711);
    msg.setSource(10917U);
    msg.setSourceEntity(218U);
    msg.setDestination(64900U);
    msg.setDestinationEntity(232U);

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
    msg.setTimeStamp(0.808424801382);
    msg.setSource(58046U);
    msg.setSourceEntity(16U);
    msg.setDestination(50091U);
    msg.setDestinationEntity(40U);

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
    msg.setTimeStamp(0.0773849091282);
    msg.setSource(17720U);
    msg.setSourceEntity(23U);
    msg.setDestination(20962U);
    msg.setDestinationEntity(235U);
    msg.name.assign("TAUBWZGMZICTLUAIPPEORYMMRQKQGHKZGQEXCQBDHRZWBJUSWUETAOKLXEJLXFAGTNDPNSOVDSHZSHIUQYDUKTRHHVYZVPTNZDXRFUMQXZGHAEFMJWGYLJNBMTOXFNYNIDWTBOSNPQJESGYJEFZBJGOSYFKAXHRVIRUEXCRHWRUENMCALCIEFOWIZQDWXKOKIJMVVVCBCSMPLCKILYRFJNCWTFQLBQVSPBDYAVSKOLPT");
    msg.state = 47U;

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
    msg.setTimeStamp(0.572677865653);
    msg.setSource(62983U);
    msg.setSourceEntity(4U);
    msg.setDestination(63116U);
    msg.setDestinationEntity(48U);
    msg.name.assign("HSCZUYXDFZRRBDCQNJUNCDQVELIATUHXRMEGUSTIYUPOKLAQCNXPPKEIDQLOTESLLYIHHFQRVFYIVYENHWCXBLMRHZYWMSFEKQUMHGPVNLKMCXFOMVXBKCJJDDBXQZWRQ");
    msg.state = 12U;

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
    msg.setTimeStamp(0.710688924877);
    msg.setSource(19108U);
    msg.setSourceEntity(241U);
    msg.setDestination(55053U);
    msg.setDestinationEntity(105U);
    msg.name.assign("TQWHJWBUFCMLTPJATVRRQXGQZWFOMGRATXGCMZZYIMVDUDRLRHLXJSTEL");
    msg.state = 243U;

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
    msg.setTimeStamp(0.587316904424);
    msg.setSource(17640U);
    msg.setSourceEntity(37U);
    msg.setDestination(58727U);
    msg.setDestinationEntity(88U);
    msg.name.assign("AMVKSQYTGNBSESRDDMTFESPBZKURCXRTOWTEGGFHYAWGHOQQCIHOUDXUNIHZWNGYKFXLLPBNXHOLDEXIIWTNWHUCMKJCXQKWQBFYVSSLDODFGMTR");
    msg.value = 83U;

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
    msg.setTimeStamp(0.0935248731917);
    msg.setSource(51546U);
    msg.setSourceEntity(212U);
    msg.setDestination(53839U);
    msg.setDestinationEntity(118U);
    msg.name.assign("DJLUMZUADJC");
    msg.value = 70U;

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
    msg.setTimeStamp(0.0477200883667);
    msg.setSource(39224U);
    msg.setSourceEntity(67U);
    msg.setDestination(23903U);
    msg.setDestinationEntity(63U);
    msg.name.assign("RRYVZNMNVTJMICNWBKMCBWYGWYVHIFJLDIUJQGH");
    msg.value = 43U;

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
    msg.setTimeStamp(0.837472728527);
    msg.setSource(61575U);
    msg.setSourceEntity(24U);
    msg.setDestination(64797U);
    msg.setDestinationEntity(212U);
    msg.name.assign("HZNUZYNULBCLIMFSYZRTPSSKKCYJNSFUVWRYPVPGTSYTUWZONKNLJHTVXWEVOJBTFYRIBGWGXMOEQLVAWLLWCIGUBKNCYUBDGLGBZGVJQCDASVMHQQASMJRMRIUEBGJUNLFSQARIFAORVORXYDCAXZPLFUQBXJAAPTAVFXHY");

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
    msg.setTimeStamp(0.0664529116843);
    msg.setSource(5917U);
    msg.setSourceEntity(46U);
    msg.setDestination(28009U);
    msg.setDestinationEntity(146U);
    msg.name.assign("ZAUPFQCKWWJFKWVXXYUSHRRWTNBCPEOVBEXJRCBXSMBRAGURCDDMZBJHBRXVQPUGXSLLYMHAECIPSLEBVJAWRHUUOTZPTUQHDSRSVJZWIIHNNBVMHADQCKFPKVJPTXHYRKGZLNPQCZTEVYTDJELMZGNNYGHGQSNYFAOWYZMIICOQJANGVOYPMUKOOAESW");

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
    msg.setTimeStamp(0.704039138211);
    msg.setSource(55260U);
    msg.setSourceEntity(179U);
    msg.setDestination(60212U);
    msg.setDestinationEntity(50U);
    msg.name.assign("SCIYUBQGULFFIJMZYLYYFMZZXWNFZGAOHPWIBWVACEXPDFDUBLWLNBGJTLWUSKTSNMURHVJMLZB");

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
    msg.setTimeStamp(0.0354706922631);
    msg.setSource(3147U);
    msg.setSourceEntity(160U);
    msg.setDestination(42454U);
    msg.setDestinationEntity(234U);
    msg.name.assign("TFJPCBQACMSUFTRBNQARDXZJOGVPXHEOMUWGRDVHGSLMIPIRKQDPUBDDVBLWHRPWNDLKMGNWGGONZKKBNYYAUFFTJCJGGQCRBPWRVSZNKVXESOTQCIACOBDZEPJWHTWQKXQXEEWUUYKNZAFSFYIBEXEZYKVIPAPYOSDTOWAVJLMQGROAMTMKCLELVXCJALL");
    msg.value = 37U;

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
    msg.setTimeStamp(0.10254492794);
    msg.setSource(46678U);
    msg.setSourceEntity(245U);
    msg.setDestination(24725U);
    msg.setDestinationEntity(41U);
    msg.name.assign("IJQPAYYACMNPPJNHVCXVKOWBWDHBPMMQHDGHFVOVGHSPHPAYQEWBTWHKUONDTWSCXQCLXZKZRGLREDZBKBRKYLATFXYVFZOECLPLTIUHVIGWRRMGWILXSOGBJNFMQJOELIMEJPNIFYQKSJUKCAQTRNMNKZVGXZZCBZOXSUIFDEMFCAEBZNUFSVODVHFULRDSAENKEUTCGDXQNDQABOJIRLATGXVTJZ");
    msg.value = 15U;

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
    msg.setTimeStamp(0.813719561961);
    msg.setSource(33745U);
    msg.setSourceEntity(28U);
    msg.setDestination(31471U);
    msg.setDestinationEntity(87U);
    msg.name.assign("RHVAOCUDJLTBEYAN");
    msg.value = 198U;

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
    msg.setTimeStamp(0.826698449276);
    msg.setSource(23047U);
    msg.setSourceEntity(199U);
    msg.setDestination(8042U);
    msg.setDestinationEntity(63U);
    msg.id = 253U;
    msg.period = 2808476200U;
    msg.duty_cycle = 660077663U;

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
    msg.setTimeStamp(0.449022884231);
    msg.setSource(10085U);
    msg.setSourceEntity(196U);
    msg.setDestination(6105U);
    msg.setDestinationEntity(170U);
    msg.id = 6U;
    msg.period = 4215976217U;
    msg.duty_cycle = 3474117398U;

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
    msg.setTimeStamp(0.35358388542);
    msg.setSource(49444U);
    msg.setSourceEntity(132U);
    msg.setDestination(39691U);
    msg.setDestinationEntity(45U);
    msg.id = 40U;
    msg.period = 919374079U;
    msg.duty_cycle = 4279175924U;

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
    msg.setTimeStamp(0.32181156926);
    msg.setSource(44164U);
    msg.setSourceEntity(139U);
    msg.setDestination(11035U);
    msg.setDestinationEntity(141U);
    msg.id = 1U;
    msg.period = 3715566625U;
    msg.duty_cycle = 1607833174U;

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
    msg.setTimeStamp(0.0421091623199);
    msg.setSource(43591U);
    msg.setSourceEntity(83U);
    msg.setDestination(58148U);
    msg.setDestinationEntity(140U);
    msg.id = 68U;
    msg.period = 3216754786U;
    msg.duty_cycle = 1394195820U;

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
    msg.setTimeStamp(0.520852164601);
    msg.setSource(48116U);
    msg.setSourceEntity(201U);
    msg.setDestination(51596U);
    msg.setDestinationEntity(55U);
    msg.id = 231U;
    msg.period = 3091706822U;
    msg.duty_cycle = 264121752U;

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
    msg.setTimeStamp(0.94738156593);
    msg.setSource(36636U);
    msg.setSourceEntity(3U);
    msg.setDestination(42413U);
    msg.setDestinationEntity(72U);
    msg.lat = 0.324426100733;
    msg.lon = 0.212613436738;
    msg.height = 0.218200173961;
    msg.x = 0.827313962503;
    msg.y = 0.876932426145;
    msg.z = 0.832460106915;
    msg.phi = 0.969389790287;
    msg.theta = 0.319945758815;
    msg.psi = 0.133714972881;
    msg.u = 0.993924084803;
    msg.v = 0.555184616337;
    msg.w = 0.15977329705;
    msg.vx = 0.112275155386;
    msg.vy = 0.73437539927;
    msg.vz = 0.99644126467;
    msg.p = 0.236148429926;
    msg.q = 0.0463461782023;
    msg.r = 0.187136571876;
    msg.depth = 0.676358100705;
    msg.alt = 0.541835331548;

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
    msg.setTimeStamp(0.189755054418);
    msg.setSource(29596U);
    msg.setSourceEntity(199U);
    msg.setDestination(32534U);
    msg.setDestinationEntity(183U);
    msg.lat = 0.445098636514;
    msg.lon = 0.0158538041832;
    msg.height = 0.797465544339;
    msg.x = 0.545232379702;
    msg.y = 0.096990729766;
    msg.z = 0.207895118928;
    msg.phi = 0.292112864543;
    msg.theta = 0.910927284358;
    msg.psi = 0.744877340492;
    msg.u = 0.932448816224;
    msg.v = 0.81446420655;
    msg.w = 0.171658268563;
    msg.vx = 0.0654301708006;
    msg.vy = 0.497729780623;
    msg.vz = 0.89164325039;
    msg.p = 0.795354821748;
    msg.q = 0.147245366551;
    msg.r = 0.866741665521;
    msg.depth = 0.319758285923;
    msg.alt = 0.430772129856;

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
    msg.setTimeStamp(0.254223455108);
    msg.setSource(49655U);
    msg.setSourceEntity(82U);
    msg.setDestination(3058U);
    msg.setDestinationEntity(130U);
    msg.lat = 0.104920223511;
    msg.lon = 0.522630446928;
    msg.height = 0.666228599616;
    msg.x = 0.218297226987;
    msg.y = 0.0926408516339;
    msg.z = 0.0879782311128;
    msg.phi = 0.982285087075;
    msg.theta = 0.791633364773;
    msg.psi = 0.289500799782;
    msg.u = 0.133392414545;
    msg.v = 0.505081471314;
    msg.w = 0.687260114564;
    msg.vx = 0.974417816282;
    msg.vy = 0.445797183624;
    msg.vz = 0.998293780456;
    msg.p = 0.180620005711;
    msg.q = 0.773842604909;
    msg.r = 0.2563391028;
    msg.depth = 0.140251746855;
    msg.alt = 0.425800856815;

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
    msg.setTimeStamp(0.408523515553);
    msg.setSource(49675U);
    msg.setSourceEntity(128U);
    msg.setDestination(7090U);
    msg.setDestinationEntity(212U);
    msg.x = 0.131446610212;
    msg.y = 0.0438970819528;
    msg.z = 0.645130468525;

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
    msg.setTimeStamp(0.15689878486);
    msg.setSource(37188U);
    msg.setSourceEntity(32U);
    msg.setDestination(65178U);
    msg.setDestinationEntity(92U);
    msg.x = 0.732192720897;
    msg.y = 0.148190991642;
    msg.z = 0.785763301795;

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
    msg.setTimeStamp(0.927098350469);
    msg.setSource(1057U);
    msg.setSourceEntity(124U);
    msg.setDestination(63628U);
    msg.setDestinationEntity(163U);
    msg.x = 0.665342040766;
    msg.y = 0.86631038187;
    msg.z = 0.65457925893;

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
    msg.setTimeStamp(0.46956442788);
    msg.setSource(52224U);
    msg.setSourceEntity(242U);
    msg.setDestination(5253U);
    msg.setDestinationEntity(56U);
    msg.value = 0.620073357084;

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
    msg.setTimeStamp(0.716302786371);
    msg.setSource(33433U);
    msg.setSourceEntity(214U);
    msg.setDestination(16365U);
    msg.setDestinationEntity(180U);
    msg.value = 0.35150195334;

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
    msg.setTimeStamp(0.757751042926);
    msg.setSource(57852U);
    msg.setSourceEntity(53U);
    msg.setDestination(28928U);
    msg.setDestinationEntity(253U);
    msg.value = 0.805104568248;

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
    msg.setTimeStamp(0.488731098155);
    msg.setSource(47587U);
    msg.setSourceEntity(149U);
    msg.setDestination(8939U);
    msg.setDestinationEntity(67U);
    msg.value = 0.0530009097304;

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
    msg.setTimeStamp(0.457082181646);
    msg.setSource(52057U);
    msg.setSourceEntity(236U);
    msg.setDestination(1764U);
    msg.setDestinationEntity(176U);
    msg.value = 0.979151322199;

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
    msg.setTimeStamp(0.361830293138);
    msg.setSource(23032U);
    msg.setSourceEntity(51U);
    msg.setDestination(15170U);
    msg.setDestinationEntity(149U);
    msg.value = 0.748206247723;

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
    msg.setTimeStamp(0.0524704308748);
    msg.setSource(44848U);
    msg.setSourceEntity(34U);
    msg.setDestination(61431U);
    msg.setDestinationEntity(241U);
    msg.x = 0.777097935549;
    msg.y = 0.0299417988699;
    msg.z = 0.714586699679;
    msg.phi = 0.313792990226;
    msg.theta = 0.449286040827;
    msg.psi = 0.445922927337;
    msg.p = 0.445463534643;
    msg.q = 0.00735437410091;
    msg.r = 0.0306237782334;
    msg.u = 0.0936656993892;
    msg.v = 0.106705634668;
    msg.w = 0.744849514954;
    msg.bias_psi = 0.949403182743;
    msg.bias_r = 0.48026756589;

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
    msg.setTimeStamp(0.0251337764417);
    msg.setSource(47937U);
    msg.setSourceEntity(39U);
    msg.setDestination(38366U);
    msg.setDestinationEntity(54U);
    msg.x = 0.717796643269;
    msg.y = 0.401198975868;
    msg.z = 0.388406102882;
    msg.phi = 0.698345178916;
    msg.theta = 0.85450334522;
    msg.psi = 0.539054073894;
    msg.p = 0.0188637534341;
    msg.q = 0.368589328389;
    msg.r = 0.30533217431;
    msg.u = 0.700863091291;
    msg.v = 0.936603297215;
    msg.w = 0.496834300953;
    msg.bias_psi = 0.5267177795;
    msg.bias_r = 0.188890500127;

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
    msg.setTimeStamp(0.00942995697073);
    msg.setSource(48783U);
    msg.setSourceEntity(77U);
    msg.setDestination(43976U);
    msg.setDestinationEntity(181U);
    msg.x = 0.906512731428;
    msg.y = 0.305242364314;
    msg.z = 0.488137351801;
    msg.phi = 0.746136580362;
    msg.theta = 0.966653663549;
    msg.psi = 0.991966104314;
    msg.p = 0.275242103471;
    msg.q = 0.430300988527;
    msg.r = 0.71957093533;
    msg.u = 0.32599957732;
    msg.v = 0.733047789182;
    msg.w = 0.434891117841;
    msg.bias_psi = 0.59126127453;
    msg.bias_r = 0.341516426557;

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
    msg.setTimeStamp(0.159136736194);
    msg.setSource(30284U);
    msg.setSourceEntity(223U);
    msg.setDestination(33250U);
    msg.setDestinationEntity(84U);
    msg.bias_psi = 0.046616418101;
    msg.bias_r = 0.161657434349;
    msg.cog = 0.60673443607;
    msg.cyaw = 0.0701808005688;
    msg.gps_rej_level = 0.460309381665;
    msg.lbl_rej_level = 0.78654712834;
    msg.custom_x = 0.00957162985508;
    msg.custom_y = 0.0916317439699;
    msg.custom_z = 0.810796491156;

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
    msg.setTimeStamp(0.702241397897);
    msg.setSource(12829U);
    msg.setSourceEntity(70U);
    msg.setDestination(2744U);
    msg.setDestinationEntity(82U);
    msg.bias_psi = 0.712607538689;
    msg.bias_r = 0.444465896833;
    msg.cog = 0.81038725207;
    msg.cyaw = 0.887323319374;
    msg.gps_rej_level = 0.0849034653627;
    msg.lbl_rej_level = 0.183242573277;
    msg.custom_x = 0.428391471911;
    msg.custom_y = 0.405579435033;
    msg.custom_z = 0.755758216627;

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
    msg.setTimeStamp(0.582307934691);
    msg.setSource(27178U);
    msg.setSourceEntity(224U);
    msg.setDestination(50165U);
    msg.setDestinationEntity(117U);
    msg.bias_psi = 0.164613070522;
    msg.bias_r = 0.145869476727;
    msg.cog = 0.245354005782;
    msg.cyaw = 0.745710853021;
    msg.gps_rej_level = 0.756395344636;
    msg.lbl_rej_level = 0.381170881644;
    msg.custom_x = 0.577712409816;
    msg.custom_y = 0.809902687697;
    msg.custom_z = 0.871289496484;

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
    msg.setTimeStamp(0.345229280932);
    msg.setSource(28138U);
    msg.setSourceEntity(157U);
    msg.setDestination(5532U);
    msg.setDestinationEntity(222U);
    msg.utc_time = 0.258989239391;
    msg.reason = 160U;

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
    msg.setTimeStamp(0.239701280741);
    msg.setSource(1643U);
    msg.setSourceEntity(45U);
    msg.setDestination(64030U);
    msg.setDestinationEntity(81U);
    msg.utc_time = 0.699293194323;
    msg.reason = 249U;

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
    msg.setTimeStamp(0.0884265081193);
    msg.setSource(49646U);
    msg.setSourceEntity(94U);
    msg.setDestination(47866U);
    msg.setDestinationEntity(231U);
    msg.utc_time = 0.0278778654523;
    msg.reason = 179U;

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
    msg.setTimeStamp(0.555154611052);
    msg.setSource(13668U);
    msg.setSourceEntity(14U);
    msg.setDestination(33806U);
    msg.setDestinationEntity(15U);
    msg.id = 7U;
    msg.range = 0.474146949768;
    msg.acceptance = 5U;

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
    msg.setTimeStamp(0.240651995519);
    msg.setSource(1899U);
    msg.setSourceEntity(80U);
    msg.setDestination(17543U);
    msg.setDestinationEntity(171U);
    msg.id = 58U;
    msg.range = 0.88879108263;
    msg.acceptance = 88U;

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
    msg.setTimeStamp(0.566660562713);
    msg.setSource(26341U);
    msg.setSourceEntity(202U);
    msg.setDestination(32226U);
    msg.setDestinationEntity(118U);
    msg.id = 130U;
    msg.range = 0.468214758704;
    msg.acceptance = 178U;

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
    msg.setTimeStamp(0.0770313264287);
    msg.setSource(29479U);
    msg.setSourceEntity(103U);
    msg.setDestination(50298U);
    msg.setDestinationEntity(5U);
    msg.type = 119U;
    msg.reason = 47U;
    msg.value = 0.150436724796;
    msg.timestep = 0.51307887288;

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
    msg.setTimeStamp(0.423865252273);
    msg.setSource(15910U);
    msg.setSourceEntity(37U);
    msg.setDestination(56585U);
    msg.setDestinationEntity(62U);
    msg.type = 163U;
    msg.reason = 234U;
    msg.value = 0.347869010001;
    msg.timestep = 0.102928034212;

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
    msg.setTimeStamp(0.72923273856);
    msg.setSource(16476U);
    msg.setSourceEntity(16U);
    msg.setDestination(51731U);
    msg.setDestinationEntity(66U);
    msg.type = 52U;
    msg.reason = 27U;
    msg.value = 0.10698945044;
    msg.timestep = 0.887719615203;

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
    msg.setTimeStamp(0.839752986146);
    msg.setSource(31855U);
    msg.setSourceEntity(35U);
    msg.setDestination(55385U);
    msg.setDestinationEntity(197U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("ABKKAMULRXMQLTWYQYDXQYNRIOFUJGZGYVGBHCAKFPXDLFWHIMNJTQNNGVDWCXOXBPHEPURJIJZMTSYHEIFKKXPCPRWZDBCSWBPWFCCMCPBHPVETN");
    tmp_msg_0.lat = 0.219359034921;
    tmp_msg_0.lon = 0.302875532679;
    tmp_msg_0.depth = 0.998338235242;
    tmp_msg_0.query_channel = 10U;
    tmp_msg_0.reply_channel = 179U;
    tmp_msg_0.transponder_delay = 124U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.283026253914;
    msg.y = 0.442331493994;
    msg.var_x = 0.903492647668;
    msg.var_y = 0.284128887501;
    msg.distance = 0.85361990206;

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
    msg.setTimeStamp(0.234613677467);
    msg.setSource(31735U);
    msg.setSourceEntity(121U);
    msg.setDestination(30955U);
    msg.setDestinationEntity(195U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("JCHOGCBALSSZZRQCLXBFKQRJBMSETIPRYWVKTAMJQPIYEVXIOQHBUGJOLXTPVOWDIGIPNWCXCYZDUXPIAYTHHRVQTJVDVSZDSHNLBKHUXEZFJFRUSKOUQQYUME");
    tmp_msg_0.lat = 0.559820489441;
    tmp_msg_0.lon = 0.736855092875;
    tmp_msg_0.depth = 0.562317606105;
    tmp_msg_0.query_channel = 43U;
    tmp_msg_0.reply_channel = 45U;
    tmp_msg_0.transponder_delay = 8U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.303535705803;
    msg.y = 0.870931683074;
    msg.var_x = 0.937297372042;
    msg.var_y = 0.75825762194;
    msg.distance = 0.91627188586;

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
    msg.setTimeStamp(0.566583798756);
    msg.setSource(60963U);
    msg.setSourceEntity(63U);
    msg.setDestination(20358U);
    msg.setDestinationEntity(161U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("PGAPTMTKKEVMVNACCBAGBQPZOSPNNPMTXZIGFNAMERBQXXJZERXCYUFAPVZZMJJAUGQKSOVLEWRYNKIOJQPEFFXFLVRSXKSYXTSIXRWAOMCCUFLRWEXCIJSWHCGJIKCSQILDZBJHTAASGNBOBBNLVHIVNWQKUHHMWKZKVMSNCLBDB");
    tmp_msg_0.lat = 0.533534788707;
    tmp_msg_0.lon = 0.93169087957;
    tmp_msg_0.depth = 0.00349009780097;
    tmp_msg_0.query_channel = 27U;
    tmp_msg_0.reply_channel = 85U;
    tmp_msg_0.transponder_delay = 143U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.608733859184;
    msg.y = 0.761685506491;
    msg.var_x = 0.406703111354;
    msg.var_y = 0.252466055292;
    msg.distance = 0.807008679909;

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
    msg.setTimeStamp(0.742166480236);
    msg.setSource(28032U);
    msg.setSourceEntity(222U);
    msg.setDestination(48544U);
    msg.setDestinationEntity(137U);
    msg.state = 66U;

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
    msg.setTimeStamp(0.0253371575685);
    msg.setSource(15037U);
    msg.setSourceEntity(6U);
    msg.setDestination(57853U);
    msg.setDestinationEntity(84U);
    msg.state = 204U;

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
    msg.setTimeStamp(0.953606500792);
    msg.setSource(2414U);
    msg.setSourceEntity(217U);
    msg.setDestination(2799U);
    msg.setDestinationEntity(59U);
    msg.state = 163U;

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
    msg.setTimeStamp(0.472944989866);
    msg.setSource(21463U);
    msg.setSourceEntity(32U);
    msg.setDestination(11148U);
    msg.setDestinationEntity(111U);
    msg.x = 0.289456454839;
    msg.y = 0.415703629652;
    msg.z = 0.369208166167;

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
    msg.setTimeStamp(0.445782585299);
    msg.setSource(32927U);
    msg.setSourceEntity(202U);
    msg.setDestination(21202U);
    msg.setDestinationEntity(44U);
    msg.x = 0.756207334608;
    msg.y = 0.501461140526;
    msg.z = 0.918643664882;

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
    msg.setTimeStamp(0.238893467943);
    msg.setSource(18666U);
    msg.setSourceEntity(4U);
    msg.setDestination(8290U);
    msg.setDestinationEntity(150U);
    msg.x = 0.593052755392;
    msg.y = 0.430442139978;
    msg.z = 0.0585690824911;

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
    msg.setTimeStamp(0.0253055428932);
    msg.setSource(14207U);
    msg.setSourceEntity(166U);
    msg.setDestination(59944U);
    msg.setDestinationEntity(229U);
    msg.va = 0.880368829658;
    msg.aoa = 0.734776849598;
    msg.ssa = 0.956539941726;

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
    msg.setTimeStamp(0.268601109997);
    msg.setSource(24112U);
    msg.setSourceEntity(124U);
    msg.setDestination(61162U);
    msg.setDestinationEntity(240U);
    msg.va = 0.218243289325;
    msg.aoa = 0.0470169533063;
    msg.ssa = 0.254087224124;

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
    msg.setTimeStamp(0.0137814928514);
    msg.setSource(38744U);
    msg.setSourceEntity(186U);
    msg.setDestination(3158U);
    msg.setDestinationEntity(221U);
    msg.va = 0.882997759101;
    msg.aoa = 0.424873003223;
    msg.ssa = 0.580634020708;

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
    msg.setTimeStamp(0.201611394627);
    msg.setSource(28337U);
    msg.setSourceEntity(178U);
    msg.setDestination(15822U);
    msg.setDestinationEntity(48U);
    msg.value = 0.857053587474;
    msg.off = 0.246860801934;

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
    msg.setTimeStamp(0.70453574599);
    msg.setSource(54808U);
    msg.setSourceEntity(3U);
    msg.setDestination(15457U);
    msg.setDestinationEntity(236U);
    msg.value = 0.89974626703;
    msg.off = 0.142948676564;

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
    msg.setTimeStamp(0.412933701719);
    msg.setSource(6705U);
    msg.setSourceEntity(107U);
    msg.setDestination(34018U);
    msg.setDestinationEntity(239U);
    msg.value = 0.783911817985;
    msg.off = 0.826634495801;

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
    msg.setTimeStamp(0.110789368616);
    msg.setSource(18466U);
    msg.setSourceEntity(210U);
    msg.setDestination(53525U);
    msg.setDestinationEntity(45U);
    msg.value = 0.936892125804;
    msg.z_units = 67U;

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
    msg.setTimeStamp(0.196379441397);
    msg.setSource(9635U);
    msg.setSourceEntity(22U);
    msg.setDestination(57357U);
    msg.setDestinationEntity(8U);
    msg.value = 0.488494750252;
    msg.z_units = 253U;

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
    msg.setTimeStamp(0.0442678676121);
    msg.setSource(17442U);
    msg.setSourceEntity(117U);
    msg.setDestination(46175U);
    msg.setDestinationEntity(47U);
    msg.value = 0.439368055017;
    msg.z_units = 62U;

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
    msg.setTimeStamp(0.0011741739595);
    msg.setSource(30969U);
    msg.setSourceEntity(128U);
    msg.setDestination(15953U);
    msg.setDestinationEntity(191U);
    msg.value = 0.238865873715;
    msg.speed_units = 198U;

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
    msg.setTimeStamp(0.290039615168);
    msg.setSource(20124U);
    msg.setSourceEntity(91U);
    msg.setDestination(59788U);
    msg.setDestinationEntity(50U);
    msg.value = 0.838322321694;
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
    msg.setTimeStamp(0.664030597822);
    msg.setSource(28485U);
    msg.setSourceEntity(211U);
    msg.setDestination(23826U);
    msg.setDestinationEntity(247U);
    msg.value = 0.498257816877;
    msg.speed_units = 241U;

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
    msg.setTimeStamp(0.141545784741);
    msg.setSource(46546U);
    msg.setSourceEntity(230U);
    msg.setDestination(45521U);
    msg.setDestinationEntity(71U);
    msg.value = 0.385469066677;

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
    msg.setTimeStamp(0.874711626923);
    msg.setSource(47717U);
    msg.setSourceEntity(242U);
    msg.setDestination(32333U);
    msg.setDestinationEntity(151U);
    msg.value = 0.062120160255;

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
    msg.setTimeStamp(0.7833431516);
    msg.setSource(32513U);
    msg.setSourceEntity(76U);
    msg.setDestination(30777U);
    msg.setDestinationEntity(189U);
    msg.value = 0.253201035095;

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
    msg.setTimeStamp(0.435249633109);
    msg.setSource(49001U);
    msg.setSourceEntity(201U);
    msg.setDestination(64171U);
    msg.setDestinationEntity(173U);
    msg.value = 0.217549102207;

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
    msg.setTimeStamp(0.0562059631971);
    msg.setSource(24549U);
    msg.setSourceEntity(103U);
    msg.setDestination(7195U);
    msg.setDestinationEntity(76U);
    msg.value = 0.967856592519;

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
    msg.setTimeStamp(0.4140517617);
    msg.setSource(14465U);
    msg.setSourceEntity(38U);
    msg.setDestination(52721U);
    msg.setDestinationEntity(172U);
    msg.value = 0.319784222434;

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
    msg.setTimeStamp(0.546293110901);
    msg.setSource(6878U);
    msg.setSourceEntity(20U);
    msg.setDestination(35798U);
    msg.setDestinationEntity(199U);
    msg.value = 0.973260674872;

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
    msg.setTimeStamp(0.102465341424);
    msg.setSource(32904U);
    msg.setSourceEntity(148U);
    msg.setDestination(56739U);
    msg.setDestinationEntity(53U);
    msg.value = 0.086841129324;

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
    msg.setTimeStamp(0.093361558611);
    msg.setSource(19264U);
    msg.setSourceEntity(62U);
    msg.setDestination(59846U);
    msg.setDestinationEntity(22U);
    msg.value = 0.926099257359;

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
    msg.setTimeStamp(0.362260112588);
    msg.setSource(29402U);
    msg.setSourceEntity(168U);
    msg.setDestination(29631U);
    msg.setDestinationEntity(215U);
    msg.path_ref = 2893669572U;
    msg.start_lat = 0.758062036902;
    msg.start_lon = 0.383309021881;
    msg.start_z = 0.350375994203;
    msg.start_z_units = 150U;
    msg.end_lat = 0.674014474524;
    msg.end_lon = 0.749521824632;
    msg.end_z = 0.0993400554392;
    msg.end_z_units = 177U;
    msg.speed = 0.137452389052;
    msg.speed_units = 188U;
    msg.lradius = 0.351030226087;
    msg.flags = 178U;

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
    msg.setTimeStamp(0.307499884636);
    msg.setSource(26019U);
    msg.setSourceEntity(112U);
    msg.setDestination(22399U);
    msg.setDestinationEntity(75U);
    msg.path_ref = 1698182348U;
    msg.start_lat = 0.14970767784;
    msg.start_lon = 0.390699503965;
    msg.start_z = 0.784765039361;
    msg.start_z_units = 88U;
    msg.end_lat = 0.323856016289;
    msg.end_lon = 0.375621374978;
    msg.end_z = 0.602049220434;
    msg.end_z_units = 62U;
    msg.speed = 0.180342806058;
    msg.speed_units = 178U;
    msg.lradius = 0.87826078884;
    msg.flags = 106U;

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
    msg.setTimeStamp(0.545899400692);
    msg.setSource(60286U);
    msg.setSourceEntity(219U);
    msg.setDestination(25073U);
    msg.setDestinationEntity(173U);
    msg.path_ref = 3739106572U;
    msg.start_lat = 0.460666294257;
    msg.start_lon = 0.0722183971226;
    msg.start_z = 0.670139245393;
    msg.start_z_units = 223U;
    msg.end_lat = 0.61569014926;
    msg.end_lon = 0.611446741974;
    msg.end_z = 0.832402963575;
    msg.end_z_units = 94U;
    msg.speed = 0.833875360453;
    msg.speed_units = 92U;
    msg.lradius = 0.901204687981;
    msg.flags = 166U;

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
    msg.setTimeStamp(0.337380578762);
    msg.setSource(34305U);
    msg.setSourceEntity(32U);
    msg.setDestination(29864U);
    msg.setDestinationEntity(58U);
    msg.x = 0.495937810355;
    msg.y = 0.309260200262;
    msg.z = 0.329381342356;
    msg.k = 0.450105104765;
    msg.m = 0.0264474576585;
    msg.n = 0.13358215585;
    msg.flags = 49U;

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
    msg.setTimeStamp(0.690227455118);
    msg.setSource(52068U);
    msg.setSourceEntity(92U);
    msg.setDestination(4270U);
    msg.setDestinationEntity(173U);
    msg.x = 0.755021961698;
    msg.y = 0.461579118045;
    msg.z = 0.576933249491;
    msg.k = 0.627006860851;
    msg.m = 0.378052134214;
    msg.n = 0.687831562946;
    msg.flags = 47U;

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
    msg.setTimeStamp(0.868906222493);
    msg.setSource(4032U);
    msg.setSourceEntity(220U);
    msg.setDestination(2672U);
    msg.setDestinationEntity(51U);
    msg.x = 0.920636452157;
    msg.y = 0.0451601074416;
    msg.z = 0.95048775738;
    msg.k = 0.635649249177;
    msg.m = 0.35040202969;
    msg.n = 0.98103063755;
    msg.flags = 44U;

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
    msg.setTimeStamp(0.986134004192);
    msg.setSource(43427U);
    msg.setSourceEntity(147U);
    msg.setDestination(46002U);
    msg.setDestinationEntity(202U);
    msg.value = 0.193524815197;

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
    msg.setTimeStamp(0.0470905333711);
    msg.setSource(39363U);
    msg.setSourceEntity(50U);
    msg.setDestination(57060U);
    msg.setDestinationEntity(29U);
    msg.value = 0.85592479839;

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
    msg.setTimeStamp(0.54006876129);
    msg.setSource(48883U);
    msg.setSourceEntity(111U);
    msg.setDestination(19648U);
    msg.setDestinationEntity(193U);
    msg.value = 0.439062316619;

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
    msg.setTimeStamp(0.843864173338);
    msg.setSource(47721U);
    msg.setSourceEntity(139U);
    msg.setDestination(25367U);
    msg.setDestinationEntity(115U);
    msg.u = 0.0268379165225;
    msg.v = 0.140629792529;
    msg.w = 0.960121489362;
    msg.p = 0.0801137501622;
    msg.q = 0.54980520591;
    msg.r = 0.631382077301;
    msg.flags = 184U;

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
    msg.setTimeStamp(0.904791287783);
    msg.setSource(28310U);
    msg.setSourceEntity(139U);
    msg.setDestination(40666U);
    msg.setDestinationEntity(188U);
    msg.u = 0.991925980197;
    msg.v = 0.544988409462;
    msg.w = 0.267509246969;
    msg.p = 0.190911261328;
    msg.q = 0.395161885923;
    msg.r = 0.124132578156;
    msg.flags = 183U;

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
    msg.setTimeStamp(0.0996470587);
    msg.setSource(57166U);
    msg.setSourceEntity(167U);
    msg.setDestination(9001U);
    msg.setDestinationEntity(239U);
    msg.u = 0.165297923566;
    msg.v = 0.963514702529;
    msg.w = 0.455644208635;
    msg.p = 0.0342392458434;
    msg.q = 0.0986220211783;
    msg.r = 0.670029570447;
    msg.flags = 172U;

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
    msg.setTimeStamp(0.099780060282);
    msg.setSource(21133U);
    msg.setSourceEntity(205U);
    msg.setDestination(494U);
    msg.setDestinationEntity(39U);
    msg.path_ref = 58850123U;
    msg.start_lat = 0.737280069711;
    msg.start_lon = 0.065178019261;
    msg.start_z = 0.766260056631;
    msg.start_z_units = 145U;
    msg.end_lat = 0.602331362291;
    msg.end_lon = 0.153986250679;
    msg.end_z = 0.892021665048;
    msg.end_z_units = 57U;
    msg.lradius = 0.560064006246;
    msg.flags = 254U;
    msg.x = 0.80606111448;
    msg.y = 0.0914321552305;
    msg.z = 0.895243558836;
    msg.vx = 0.0355345070465;
    msg.vy = 0.181270763241;
    msg.vz = 0.854880316082;
    msg.course_error = 0.7997989104;
    msg.eta = 37378U;

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
    msg.setTimeStamp(0.693786956438);
    msg.setSource(30100U);
    msg.setSourceEntity(54U);
    msg.setDestination(39125U);
    msg.setDestinationEntity(105U);
    msg.path_ref = 1898437465U;
    msg.start_lat = 0.971835707475;
    msg.start_lon = 0.133027363421;
    msg.start_z = 0.0490291034624;
    msg.start_z_units = 72U;
    msg.end_lat = 0.260064290905;
    msg.end_lon = 0.95733552634;
    msg.end_z = 0.379036061818;
    msg.end_z_units = 90U;
    msg.lradius = 0.441712812289;
    msg.flags = 75U;
    msg.x = 0.783989081033;
    msg.y = 0.200911021209;
    msg.z = 0.708645812338;
    msg.vx = 0.337444855645;
    msg.vy = 0.700623193892;
    msg.vz = 0.286503047532;
    msg.course_error = 0.157296349126;
    msg.eta = 39263U;

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
    msg.setTimeStamp(0.762672326918);
    msg.setSource(16480U);
    msg.setSourceEntity(222U);
    msg.setDestination(49340U);
    msg.setDestinationEntity(60U);
    msg.path_ref = 1531875452U;
    msg.start_lat = 0.976404835168;
    msg.start_lon = 0.798338275216;
    msg.start_z = 0.579956725689;
    msg.start_z_units = 12U;
    msg.end_lat = 0.426050102412;
    msg.end_lon = 0.517305328285;
    msg.end_z = 0.209941461346;
    msg.end_z_units = 121U;
    msg.lradius = 0.112040583562;
    msg.flags = 251U;
    msg.x = 0.478459631781;
    msg.y = 0.997066193295;
    msg.z = 0.739596634566;
    msg.vx = 0.0894371820462;
    msg.vy = 0.6384072267;
    msg.vz = 0.505326329287;
    msg.course_error = 0.0653561307663;
    msg.eta = 25192U;

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
    msg.setTimeStamp(0.363109236008);
    msg.setSource(64268U);
    msg.setSourceEntity(148U);
    msg.setDestination(31104U);
    msg.setDestinationEntity(25U);
    msg.k = 0.816822271677;
    msg.m = 0.0178255722786;
    msg.n = 0.0388578769543;

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
    msg.setTimeStamp(0.518689559486);
    msg.setSource(26077U);
    msg.setSourceEntity(155U);
    msg.setDestination(19270U);
    msg.setDestinationEntity(108U);
    msg.k = 0.412101670203;
    msg.m = 0.184218545555;
    msg.n = 0.227759882558;

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
    msg.setTimeStamp(0.963216358514);
    msg.setSource(60594U);
    msg.setSourceEntity(155U);
    msg.setDestination(24449U);
    msg.setDestinationEntity(105U);
    msg.k = 0.672845685523;
    msg.m = 0.619165935822;
    msg.n = 0.215497985605;

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
    msg.setTimeStamp(0.164575859315);
    msg.setSource(55018U);
    msg.setSourceEntity(4U);
    msg.setDestination(15028U);
    msg.setDestinationEntity(137U);
    msg.p = 0.802023809449;
    msg.i = 0.287172254;
    msg.d = 0.82473554256;
    msg.a = 0.786927651298;

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
    msg.setTimeStamp(0.827295068059);
    msg.setSource(23162U);
    msg.setSourceEntity(229U);
    msg.setDestination(58925U);
    msg.setDestinationEntity(227U);
    msg.p = 0.705229397561;
    msg.i = 0.683347561557;
    msg.d = 0.700457828456;
    msg.a = 0.561363216615;

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
    msg.setTimeStamp(0.862842896177);
    msg.setSource(3525U);
    msg.setSourceEntity(82U);
    msg.setDestination(23723U);
    msg.setDestinationEntity(12U);
    msg.p = 0.972394253616;
    msg.i = 0.316030708635;
    msg.d = 0.821056168339;
    msg.a = 0.32834206191;

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
    msg.setTimeStamp(0.0488007242558);
    msg.setSource(34794U);
    msg.setSourceEntity(45U);
    msg.setDestination(7410U);
    msg.setDestinationEntity(32U);
    msg.op = 249U;

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
    msg.setTimeStamp(0.190992435367);
    msg.setSource(39702U);
    msg.setSourceEntity(30U);
    msg.setDestination(34938U);
    msg.setDestinationEntity(90U);
    msg.op = 183U;

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
    msg.setTimeStamp(0.430668761538);
    msg.setSource(6405U);
    msg.setSourceEntity(214U);
    msg.setDestination(20985U);
    msg.setDestinationEntity(177U);
    msg.op = 2U;

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
    msg.setTimeStamp(0.094256858401);
    msg.setSource(45391U);
    msg.setSourceEntity(104U);
    msg.setDestination(16870U);
    msg.setDestinationEntity(128U);
    msg.x = 0.397950185266;
    msg.y = 0.751302049173;
    msg.z = 0.617891913196;
    msg.vx = 0.101832829331;
    msg.vy = 0.970825631154;
    msg.vz = 0.532409633959;
    msg.ax = 0.123524747552;
    msg.ay = 0.362595832008;
    msg.az = 0.79366269995;
    msg.flags = 43764U;

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
    msg.setTimeStamp(0.714490805563);
    msg.setSource(20143U);
    msg.setSourceEntity(184U);
    msg.setDestination(20872U);
    msg.setDestinationEntity(129U);
    msg.x = 0.439797090208;
    msg.y = 0.210987051071;
    msg.z = 0.826644839352;
    msg.vx = 0.291751280942;
    msg.vy = 0.848997172552;
    msg.vz = 0.892292000118;
    msg.ax = 0.368918215592;
    msg.ay = 0.611224951244;
    msg.az = 0.996201286127;
    msg.flags = 59578U;

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
    msg.setTimeStamp(0.551219800416);
    msg.setSource(50302U);
    msg.setSourceEntity(117U);
    msg.setDestination(32576U);
    msg.setDestinationEntity(42U);
    msg.x = 0.565795202308;
    msg.y = 0.333378905369;
    msg.z = 0.655978487811;
    msg.vx = 0.416268147283;
    msg.vy = 0.666529125694;
    msg.vz = 0.55514572448;
    msg.ax = 0.170933482062;
    msg.ay = 0.105817697067;
    msg.az = 0.832411457191;
    msg.flags = 17084U;

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
    msg.setTimeStamp(0.244060851127);
    msg.setSource(20468U);
    msg.setSourceEntity(136U);
    msg.setDestination(20209U);
    msg.setDestinationEntity(177U);
    msg.value = 0.091567702367;

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
    msg.setTimeStamp(0.620082473178);
    msg.setSource(42305U);
    msg.setSourceEntity(147U);
    msg.setDestination(35219U);
    msg.setDestinationEntity(79U);
    msg.value = 0.650975217077;

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
    msg.setTimeStamp(0.749582010121);
    msg.setSource(36063U);
    msg.setSourceEntity(36U);
    msg.setDestination(64470U);
    msg.setDestinationEntity(197U);
    msg.value = 0.413942319164;

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
    msg.setTimeStamp(0.521733364284);
    msg.setSource(27040U);
    msg.setSourceEntity(80U);
    msg.setDestination(60334U);
    msg.setDestinationEntity(80U);
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.path_ref = 2045271566U;
    tmp_msg_0.start_lat = 0.516299578752;
    tmp_msg_0.start_lon = 0.625362268154;
    tmp_msg_0.start_z = 0.636615271779;
    tmp_msg_0.start_z_units = 180U;
    tmp_msg_0.end_lat = 0.348541055603;
    tmp_msg_0.end_lon = 0.826154578141;
    tmp_msg_0.end_z = 0.442007428951;
    tmp_msg_0.end_z_units = 225U;
    tmp_msg_0.speed = 0.833368649342;
    tmp_msg_0.speed_units = 152U;
    tmp_msg_0.lradius = 0.952535441559;
    tmp_msg_0.flags = 199U;
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
    msg.setTimeStamp(0.870676163852);
    msg.setSource(52059U);
    msg.setSourceEntity(219U);
    msg.setDestination(14446U);
    msg.setDestinationEntity(76U);
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.path_ref = 4152958402U;
    tmp_msg_0.start_lat = 0.352573406018;
    tmp_msg_0.start_lon = 0.838717766289;
    tmp_msg_0.start_z = 0.38611400259;
    tmp_msg_0.start_z_units = 159U;
    tmp_msg_0.end_lat = 0.258075679629;
    tmp_msg_0.end_lon = 0.872662752894;
    tmp_msg_0.end_z = 0.851101108206;
    tmp_msg_0.end_z_units = 38U;
    tmp_msg_0.speed = 0.58248547429;
    tmp_msg_0.speed_units = 146U;
    tmp_msg_0.lradius = 0.0899319830333;
    tmp_msg_0.flags = 89U;
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
    msg.setTimeStamp(0.147208866504);
    msg.setSource(21626U);
    msg.setSourceEntity(64U);
    msg.setDestination(48301U);
    msg.setDestinationEntity(64U);
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.path_ref = 3605795363U;
    tmp_msg_0.start_lat = 0.35316879988;
    tmp_msg_0.start_lon = 0.828212400597;
    tmp_msg_0.start_z = 0.981902099593;
    tmp_msg_0.start_z_units = 189U;
    tmp_msg_0.end_lat = 0.395963603214;
    tmp_msg_0.end_lon = 0.0232836823022;
    tmp_msg_0.end_z = 0.684443526636;
    tmp_msg_0.end_z_units = 225U;
    tmp_msg_0.speed = 0.0444262832905;
    tmp_msg_0.speed_units = 148U;
    tmp_msg_0.lradius = 0.665706339757;
    tmp_msg_0.flags = 182U;
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
    msg.setTimeStamp(0.159192314514);
    msg.setSource(5328U);
    msg.setSourceEntity(27U);
    msg.setDestination(59722U);
    msg.setDestinationEntity(143U);
    msg.timeout = 29590U;
    msg.lat = 0.277570426085;
    msg.lon = 0.871174651531;
    msg.z = 0.944040870767;
    msg.z_units = 79U;
    msg.speed = 0.58517356954;
    msg.speed_units = 62U;
    msg.roll = 0.861080530043;
    msg.pitch = 0.0361911742134;
    msg.yaw = 0.619671884929;
    msg.custom.assign("WANIOZZJEOMBALNCEOQLWTMJTWRZXDULYIUDEHLYWHQCXFHPKUYROYIZKHQGGULUPMGZLGEGXVXTFOUIXDLKTSBWNUSGOCTXJHMGDHWEMSGWBDGRTZILJKVFIFSZFQYIBCKTVBBENYKAQYODUBZCRWJIFPJRVHRPSAPVPUCWQJXKADANTCNOLISLFDDPRAOPCSRCKGYQMTNXUCYTBVENJPPXQENAJKMIFHESKJQMMXQDSRNFVVRSWYFBO");

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
    msg.setTimeStamp(0.753235782408);
    msg.setSource(29622U);
    msg.setSourceEntity(207U);
    msg.setDestination(13045U);
    msg.setDestinationEntity(0U);
    msg.timeout = 25669U;
    msg.lat = 0.309319405416;
    msg.lon = 0.483225771771;
    msg.z = 0.43805326062;
    msg.z_units = 89U;
    msg.speed = 0.150595535509;
    msg.speed_units = 189U;
    msg.roll = 0.626650058896;
    msg.pitch = 0.977766206557;
    msg.yaw = 0.548808118982;
    msg.custom.assign("WMEQDDRMCGKCHCXJGRMKWBMXTXSBAEZBQUJNVLFEDIUVROTHJTZUEFAACCDNNWYEVZRWRDKUZQSWPSULIFZOVQUMSPWIOAQGDJLSHBGWUTPNXYATMGNXDRKCGLUFVGQRNCSXEWVAOLXAQKSIVOAGGKPOIPLAMFINEJYRSVIUWLYQQOQRZNJHKNXTPLTSFIPDKBKFHWCOIHEDXLPMYAMREHJYUBVMBJTOFLYCSCYYGZIN");

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
    msg.setTimeStamp(0.0650004044995);
    msg.setSource(11162U);
    msg.setSourceEntity(92U);
    msg.setDestination(10068U);
    msg.setDestinationEntity(217U);
    msg.timeout = 14919U;
    msg.lat = 0.0463398012935;
    msg.lon = 0.648374664645;
    msg.z = 0.300185399222;
    msg.z_units = 221U;
    msg.speed = 0.320119847868;
    msg.speed_units = 198U;
    msg.roll = 0.0252985140751;
    msg.pitch = 0.529620915151;
    msg.yaw = 0.61437158913;
    msg.custom.assign("TVGIPCYICYGJDTLCSQRHSLGIXKAFNVRRMLQLYNJANEANXSQRMGMVZAOKRMAESZEUGSDJDLQCJBUGEDMAAXJFBOSHMYZPVFWKCZESQAYOHGKGJLQWUXNZSBWXBUUUPEUIDPHYCWNAVGRKLOPXKOTINSTEQBOZPXUQPCJOYBXBNZMM");

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
    msg.setTimeStamp(0.322628897755);
    msg.setSource(24645U);
    msg.setSourceEntity(219U);
    msg.setDestination(7314U);
    msg.setDestinationEntity(253U);
    msg.timeout = 49154U;
    msg.lat = 0.422086155586;
    msg.lon = 0.267948344224;
    msg.z = 0.982951016589;
    msg.z_units = 183U;
    msg.speed = 0.791433523914;
    msg.speed_units = 120U;
    msg.duration = 52857U;
    msg.radius = 0.735310031361;
    msg.flags = 165U;
    msg.custom.assign("VVZYAGPGMIRKDBBDXLZIZWQVCCGUYYSGUTJZKJSWUDRBZUELXICIFNKSAZMKATDNMHRTEVSVCJZAAOIDTJTXCWJABFKECKRZXVNBJEGMZTUQCUOCXHGPLURQFOOBWNJSGDIUHPEWHOOPWUAOWLHFBDPHPVBEFMYGPNQNNDWPDMBTXVFYDSIKXWAYHNTQRQXIENLEYOVFMXEISMSYIQGLVPKLTQQY");

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
    msg.setTimeStamp(0.00664867966873);
    msg.setSource(24203U);
    msg.setSourceEntity(6U);
    msg.setDestination(58891U);
    msg.setDestinationEntity(94U);
    msg.timeout = 62442U;
    msg.lat = 0.619379462428;
    msg.lon = 0.276591134109;
    msg.z = 0.940136400999;
    msg.z_units = 244U;
    msg.speed = 0.960666924759;
    msg.speed_units = 65U;
    msg.duration = 26512U;
    msg.radius = 0.859087459381;
    msg.flags = 186U;
    msg.custom.assign("DDPEZRSPIWDVNJRZFBBHVDYXHFAAFHJFRMEQRKKOYUTIZDYNWVSKUUXUHFQHWIBSXSXCWWMOLDHJOWIGFPFRIMGVCAAVMRLTGKRAUOJSCLKMQZYOYUTLNLXNFKVTYQGNEFMSOAXTCLLVKJVIZMLOATTNGDDFMDHSHETNUOLWKZIAESYVBPCZIQENVUXOKMJENCEHDPKEURRIGWQYC");

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
    msg.setTimeStamp(0.0558620366517);
    msg.setSource(44689U);
    msg.setSourceEntity(33U);
    msg.setDestination(45995U);
    msg.setDestinationEntity(166U);
    msg.timeout = 3198U;
    msg.lat = 0.754023218457;
    msg.lon = 0.445747931117;
    msg.z = 0.796937975367;
    msg.z_units = 1U;
    msg.speed = 0.786249444674;
    msg.speed_units = 106U;
    msg.duration = 19875U;
    msg.radius = 0.329844338155;
    msg.flags = 211U;
    msg.custom.assign("YCZDNDRJZESMAILOBNEVIKJNFKXPHGMR");

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
    msg.setTimeStamp(0.624813675475);
    msg.setSource(30971U);
    msg.setSourceEntity(16U);
    msg.setDestination(20420U);
    msg.setDestinationEntity(177U);
    msg.custom.assign("UGNBTRPHUCUPNWHPFJNHDJLXOBZMPYLECQGYWEKAWQBYFKEVVHSJCSEMQDIXGWIEKPNAJAKSRGNXKODCZQSVFONIMGSWVCX");

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
    msg.setTimeStamp(0.427567650818);
    msg.setSource(23739U);
    msg.setSourceEntity(53U);
    msg.setDestination(26082U);
    msg.setDestinationEntity(118U);
    msg.custom.assign("EGSLOSDVLABOQVCDZWCQYRVVPXZYZAIUEKCKKDQNLPEUIHCUTJVXZNYLHQXEUSFXRYWIBGNTOPLIHFGHOYTLPLAGPEZMQCUNTTYLLTGFJJRTGNYYJGACOKJEDZVWAGBINMZB");

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
    msg.setTimeStamp(0.139106828431);
    msg.setSource(37361U);
    msg.setSourceEntity(100U);
    msg.setDestination(33773U);
    msg.setDestinationEntity(38U);
    msg.custom.assign("YHGLVJVPFMD");

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
    msg.setTimeStamp(0.499542734947);
    msg.setSource(43470U);
    msg.setSourceEntity(226U);
    msg.setDestination(44686U);
    msg.setDestinationEntity(155U);
    msg.timeout = 19573U;
    msg.lat = 0.612507640178;
    msg.lon = 0.745473571839;
    msg.z = 0.341152304306;
    msg.z_units = 226U;
    msg.duration = 5650U;
    msg.speed = 0.214760212729;
    msg.speed_units = 235U;
    msg.type = 51U;
    msg.radius = 0.725451896183;
    msg.length = 0.800790164149;
    msg.bearing = 0.269588382086;
    msg.direction = 20U;
    msg.custom.assign("AYZWLXOMUHIKSVCZFDWPRXMWIYFQMKIOKHJZTINSHVVRMYNPSSQIJHLXPXYRSFZEDNBKBRZUKWCUGBACLHWUQCYAYEBQWSYMJDEIRMJQGPVOKVPVXFOTFJUZOMTMCJEHXGFABHUNLHGWATBDGXAWNQRCTBRNLAYVDEDATFJT");

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
    msg.setTimeStamp(0.427768319285);
    msg.setSource(54201U);
    msg.setSourceEntity(57U);
    msg.setDestination(2831U);
    msg.setDestinationEntity(165U);
    msg.timeout = 22027U;
    msg.lat = 0.231747306282;
    msg.lon = 0.241622960343;
    msg.z = 0.305489623597;
    msg.z_units = 13U;
    msg.duration = 7695U;
    msg.speed = 0.211306752477;
    msg.speed_units = 115U;
    msg.type = 169U;
    msg.radius = 0.847713399731;
    msg.length = 0.218769691751;
    msg.bearing = 0.321688278949;
    msg.direction = 179U;
    msg.custom.assign("GCPWONTPBXLXPDHKIVOLLEJAOYJKXDGORDXWQBCJWKTWNJIXQIUAREXKTFTHFMMZGPZBYHHMWIVXVJVMDZKFCKUUPFGCZCPSOHSOFHIGEZVCXNRMAPOJUAZYNTLERQTGQIASYLBTAEIHWQCCSQRGSWNJKMFEGMUMATUSKFVOJOQXNUDZXBKENTSVWBBVQEYLVHEGYIGHSRWFLULVPJFKDAIIUFADE");

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
    msg.setTimeStamp(0.599548646885);
    msg.setSource(56097U);
    msg.setSourceEntity(91U);
    msg.setDestination(40824U);
    msg.setDestinationEntity(148U);
    msg.timeout = 22448U;
    msg.lat = 0.984388705168;
    msg.lon = 0.65606866555;
    msg.z = 0.968654394258;
    msg.z_units = 137U;
    msg.duration = 19117U;
    msg.speed = 0.914518681295;
    msg.speed_units = 27U;
    msg.type = 102U;
    msg.radius = 0.130897801602;
    msg.length = 0.78626063859;
    msg.bearing = 0.0757949895264;
    msg.direction = 9U;
    msg.custom.assign("ZPYFSFTIYPOYQLFQTJGELFSVRDVVXAEHJVXNGIIFZMYJHNTWUROTOQTSIPNZKDHSFCZGMVAQBEKCDKMRTKBSOGJQHCMYVOCPMYXDGZDFLZPADJEPBBQEADKYZGCETQSGMMLINSTPEULAXBWBOIWWKVARUODJEGBARRZRIXHZVZUPGOLRXKNYKIHWYOLNTCCUAABTNEXQDNRFIWMPXBNHJDQUWH");

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
    msg.setTimeStamp(0.776058233375);
    msg.setSource(19920U);
    msg.setSourceEntity(200U);
    msg.setDestination(1396U);
    msg.setDestinationEntity(238U);
    msg.duration = 26182U;
    msg.custom.assign("YVOVTKTJSLDJXWFSHSJBMZUAOWKJVZREUHQPRVMVIEKZBSGYYJKMRRUBAELADIUTTXABEHBCEOXSIDSFXCABUZBAKHTWCQZFOBPWMPNWSNJOGIULBIEQRAWCDNHHVTTZPQNXXKPGAOQFCMMCUZYMDYELDKNVCNOMCUOWFPLWTMKILGNXIXFKGIHUYYDDSJXHRDGTRDGJQSVLFPRYUZOHFAEYPMROPCQAWZVGCQFP");

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
    msg.setTimeStamp(0.707558049562);
    msg.setSource(12267U);
    msg.setSourceEntity(145U);
    msg.setDestination(54332U);
    msg.setDestinationEntity(191U);
    msg.duration = 5907U;
    msg.custom.assign("ZNVHQDLZBHMNZUYIHLJEWZTUBDSTPVNKNXQWCSTLVCCRWBSPNZIZPPPOKXVTMRIDGFFXAGLZVHBDAYMEAJMCYMBSUVDKYIYSRRFWYUSQOUHWVZXOQOTBMRGWTXHLTRBKILQFYOOZ");

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
    msg.setTimeStamp(0.238890960408);
    msg.setSource(61497U);
    msg.setSourceEntity(164U);
    msg.setDestination(16446U);
    msg.setDestinationEntity(145U);
    msg.duration = 25828U;
    msg.custom.assign("GCKZCKJYVPLXIPRPMFQOUVITIBIMNVXPKJDRRTBQASXCPSGFIOQWEMDADQLBKRDRWKWIIDLFEHQNSZJFNENODHNFPZADZRFHGPYBLXUUABJGJCUQSQKMSEVYFQLWBWBZUCXWLBGMHRRBXTUGSOZAMCNDPGOUHTVUQELKIJAATETACOGHXSAZTCHLOIUKKZERJMLWOTHVKPHVRSFWVUVNXXDMLZ");

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
    msg.setTimeStamp(0.116229137152);
    msg.setSource(43471U);
    msg.setSourceEntity(171U);
    msg.setDestination(6946U);
    msg.setDestinationEntity(223U);
    IMC::DesiredPitch tmp_msg_0;
    tmp_msg_0.value = 0.622132351665;
    msg.control.set(tmp_msg_0);
    msg.duration = 8597U;
    msg.custom.assign("KXGPLTKEDUNRCTQJMQZDXFEMYXIIOJNPUWLJWFOSTVMPVKJASXKBAUVQAIOZBBOKJFYHRYSCBWNJVHIBWBJLAVPWGQFKEPAJBITHXRUTDGXYQNGLIBPQQYSVEUEKDGRMZCSLHLCYPHUITDTSHAQAWGMDPIPQKMFFJWZKEBOFZORZSRGESCLNGOONDGOYVBPAYRWOFZHI");

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
    msg.setTimeStamp(0.00428937842507);
    msg.setSource(2781U);
    msg.setSourceEntity(2U);
    msg.setDestination(8202U);
    msg.setDestinationEntity(177U);
    IMC::DesiredThrottle tmp_msg_0;
    tmp_msg_0.value = 0.247209092107;
    msg.control.set(tmp_msg_0);
    msg.duration = 15079U;
    msg.custom.assign("WNGGNVLHVBKGXHGVVYSRQIFKKTTQ");

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
    msg.setTimeStamp(0.132531169118);
    msg.setSource(56666U);
    msg.setSourceEntity(143U);
    msg.setDestination(9097U);
    msg.setDestinationEntity(44U);
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.145155847632;
    tmp_msg_0.speed_units = 161U;
    msg.control.set(tmp_msg_0);
    msg.duration = 8103U;
    msg.custom.assign("ITOTUHXELVALWUHHXQJGDIBHGUVCXHFKOZANMYFRBUGRXAFJURXWQKCFQSNSBPDSOTCNBPFVYGYNBKQZDEZSERLCMXEWWVRRGYYVXGGZJXDQIQLXICSALYNAXRSZVEMPWLIJZBDJYKMOACKEHLITFL");

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
    msg.setTimeStamp(0.0836204123414);
    msg.setSource(58947U);
    msg.setSourceEntity(250U);
    msg.setDestination(54002U);
    msg.setDestinationEntity(39U);
    msg.timeout = 25389U;
    msg.lat = 0.3192394494;
    msg.lon = 0.999856321332;
    msg.z = 0.640424934737;
    msg.z_units = 88U;
    msg.speed = 0.310627929421;
    msg.speed_units = 160U;
    msg.bearing = 0.354145099917;
    msg.cross_angle = 0.694929754754;
    msg.width = 0.486360029443;
    msg.length = 0.304677756919;
    msg.hstep = 0.96016328498;
    msg.coff = 156U;
    msg.alternation = 226U;
    msg.flags = 176U;
    msg.custom.assign("QFNUZVVQLRCKPFMPWLMUHOGIHMDXCIXULBZEKBWPQCHTWQPOMPLSGKFARHYTENALGENZKRJJUSEBUMOQ");

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
    msg.setTimeStamp(0.935511313082);
    msg.setSource(39895U);
    msg.setSourceEntity(70U);
    msg.setDestination(44955U);
    msg.setDestinationEntity(247U);
    msg.timeout = 42797U;
    msg.lat = 0.557633012301;
    msg.lon = 0.23512124879;
    msg.z = 0.473952340082;
    msg.z_units = 108U;
    msg.speed = 0.502409276477;
    msg.speed_units = 237U;
    msg.bearing = 0.45494477083;
    msg.cross_angle = 0.871947717502;
    msg.width = 0.0379351532054;
    msg.length = 0.708115129472;
    msg.hstep = 0.92609989431;
    msg.coff = 218U;
    msg.alternation = 94U;
    msg.flags = 34U;
    msg.custom.assign("AOUSWPGECKIIDYMHPVQIWREHZZDIARXFLKDLUAUCNBTMNLXYXVRGCJAXLOJYXJAXDPYHTROKHBBGWZRZEPDOSFIHFGUTWAIXSZHVYNLQOMHEGFTIIGHPFZQNTDOBCASXVJJNRXBFDTSURKEQAACJJZIBNQPEBQCBEPJYNHCWTMFZCVCUQGVNRHG");

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
    msg.setTimeStamp(0.659340118974);
    msg.setSource(18925U);
    msg.setSourceEntity(208U);
    msg.setDestination(6087U);
    msg.setDestinationEntity(102U);
    msg.timeout = 63366U;
    msg.lat = 0.509427657103;
    msg.lon = 0.877884235511;
    msg.z = 0.280800673215;
    msg.z_units = 128U;
    msg.speed = 0.502753063092;
    msg.speed_units = 117U;
    msg.bearing = 0.760184778366;
    msg.cross_angle = 0.502858844559;
    msg.width = 0.225341488355;
    msg.length = 0.790918675541;
    msg.hstep = 0.30165239433;
    msg.coff = 131U;
    msg.alternation = 236U;
    msg.flags = 89U;
    msg.custom.assign("SABKSFPAPIBEPQRFJLOMOFFWIUBHBCWHEVKHFKORSMCPEARAXGEESWSNUCPLXTN");

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
    msg.setTimeStamp(0.700010532837);
    msg.setSource(42780U);
    msg.setSourceEntity(209U);
    msg.setDestination(36663U);
    msg.setDestinationEntity(105U);
    msg.timeout = 46597U;
    msg.lat = 0.0957380827305;
    msg.lon = 0.22727139684;
    msg.z = 0.864202601859;
    msg.z_units = 20U;
    msg.speed = 0.977748937372;
    msg.speed_units = 165U;
    msg.custom.assign("SIPGRJCBHKXSCNZVMHGHGKQGLPMXPSRMRJBQLTEOUCTZDDUEKAAWEQJICEVDFGCJINWLPNJXUXPFMFAAEEHWKRYTGHPGJQUQQYSRTPVWHBAYJUWOTCNKNZUQUOCCZIDVAHGDMFHTRXTUIVAOAYNPZWJDLFIGBEKNBLTBFVNDTUVYB");

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
    msg.setTimeStamp(0.63902312796);
    msg.setSource(51298U);
    msg.setSourceEntity(199U);
    msg.setDestination(36897U);
    msg.setDestinationEntity(6U);
    msg.timeout = 60252U;
    msg.lat = 0.888882993179;
    msg.lon = 0.223086027884;
    msg.z = 0.232077413061;
    msg.z_units = 159U;
    msg.speed = 0.996143783331;
    msg.speed_units = 15U;
    msg.custom.assign("IRXWXUEOJHYOQBNDGNWCYVQGYSTBZIHTNETAWVZAGUJDQNFITFYFAUDDXMOQVTSWVHEECZPQLPKSKGMJVURAMEQOAACGJJPOZSFSRSSTDXULPAEPIMGIBLFCMEZPQWMMRIDVXYCFWBRXKXMIQPHRJUGA");

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
    msg.setTimeStamp(0.131930303997);
    msg.setSource(33963U);
    msg.setSourceEntity(213U);
    msg.setDestination(64231U);
    msg.setDestinationEntity(69U);
    msg.timeout = 12719U;
    msg.lat = 0.989424371855;
    msg.lon = 0.962515186;
    msg.z = 0.568158205652;
    msg.z_units = 253U;
    msg.speed = 0.48370137567;
    msg.speed_units = 87U;
    msg.custom.assign("WZYXOJXEGRDELDCPARMPUTHXISHJPWSAWGGEOKENRTVRAHVLYSYSXUUOVATIZEZOGGTFJYNEHDQFCVTSKICZL");

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
    msg.setTimeStamp(0.614897878567);
    msg.setSource(30864U);
    msg.setSourceEntity(157U);
    msg.setDestination(44456U);
    msg.setDestinationEntity(56U);
    msg.x = 0.879894491634;
    msg.y = 0.638111050063;
    msg.z = 0.975874569361;

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
    msg.setTimeStamp(0.809591252193);
    msg.setSource(49116U);
    msg.setSourceEntity(232U);
    msg.setDestination(28206U);
    msg.setDestinationEntity(246U);
    msg.x = 0.257792887587;
    msg.y = 0.595367470531;
    msg.z = 0.626702922704;

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
    msg.setTimeStamp(0.415184323845);
    msg.setSource(57789U);
    msg.setSourceEntity(239U);
    msg.setDestination(39389U);
    msg.setDestinationEntity(147U);
    msg.x = 0.881150507605;
    msg.y = 0.218226009173;
    msg.z = 0.132909449509;

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
    msg.setTimeStamp(0.802073859656);
    msg.setSource(41644U);
    msg.setSourceEntity(188U);
    msg.setDestination(13954U);
    msg.setDestinationEntity(148U);
    msg.timeout = 51656U;
    msg.lat = 0.591176639707;
    msg.lon = 0.758353814334;
    msg.z = 0.157471547408;
    msg.z_units = 218U;
    msg.amplitude = 0.557071139659;
    msg.pitch = 0.403523713848;
    msg.speed = 0.814258502718;
    msg.speed_units = 236U;
    msg.custom.assign("CDXQNRRNVYXSSBPCNUMYIMPVLNKRDFVKAZCIJQXQZHUPHCWULRSZNXEQVHKZWJMBNLXTTQJSAHFFJAPDCBFUNDSTNRDZLFADPHTGBEBBGPGJMMIGJWCUBYLPWBUAATFSJSPQMGFOXMKFSRPOUUISXWODZUZGHLCZLXFTNESIRIGIHIVCYZYYAOVKBOKAOVEDREQENGORWDWFHWOYIOAYWQQCHYL");

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
    msg.setTimeStamp(0.751617369706);
    msg.setSource(24514U);
    msg.setSourceEntity(3U);
    msg.setDestination(39750U);
    msg.setDestinationEntity(71U);
    msg.timeout = 313U;
    msg.lat = 0.315876480959;
    msg.lon = 0.67712600513;
    msg.z = 0.705172750097;
    msg.z_units = 7U;
    msg.amplitude = 0.796375619185;
    msg.pitch = 0.803803244084;
    msg.speed = 0.293079185415;
    msg.speed_units = 146U;
    msg.custom.assign("TBFJYFYBJKTPNGEVQEFYDCEJOLIWQKSHTAFMCZXFBIBGLUCXFKQMTJ");

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
    msg.setTimeStamp(0.761867347742);
    msg.setSource(20918U);
    msg.setSourceEntity(33U);
    msg.setDestination(45306U);
    msg.setDestinationEntity(243U);
    msg.timeout = 6988U;
    msg.lat = 0.400632400099;
    msg.lon = 0.885063793273;
    msg.z = 0.632290161967;
    msg.z_units = 203U;
    msg.amplitude = 0.88446374258;
    msg.pitch = 0.02924629891;
    msg.speed = 0.724901128434;
    msg.speed_units = 29U;
    msg.custom.assign("LDLFDKZNVCYXVHFVQALHLDTQULCSQTHZIAURMTVTGWUIGQIQBTLWEGMMVXHWPSYEAJBJMKBEMWKZYCYXEOOXFBNND");

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
    msg.setTimeStamp(0.705624423932);
    msg.setSource(27091U);
    msg.setSourceEntity(130U);
    msg.setDestination(51398U);
    msg.setDestinationEntity(0U);

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
    msg.setTimeStamp(0.685715465847);
    msg.setSource(6999U);
    msg.setSourceEntity(215U);
    msg.setDestination(48253U);
    msg.setDestinationEntity(27U);

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
    msg.setTimeStamp(0.579258319993);
    msg.setSource(59566U);
    msg.setSourceEntity(129U);
    msg.setDestination(13998U);
    msg.setDestinationEntity(14U);

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
    msg.setTimeStamp(0.854714574999);
    msg.setSource(44777U);
    msg.setSourceEntity(92U);
    msg.setDestination(34912U);
    msg.setDestinationEntity(125U);
    msg.lat = 0.559243396458;
    msg.lon = 0.633113596855;
    msg.z = 0.791914661541;
    msg.z_units = 11U;
    msg.radius = 0.29448209077;
    msg.duration = 7466U;
    msg.speed = 0.967524227733;
    msg.speed_units = 141U;
    msg.popup_period = 31376U;
    msg.popup_duration = 39706U;
    msg.flags = 86U;
    msg.custom.assign("VPTHTREFVWHJBMBFOXCYOMLYQZPTRIHKPTFDVZDPIGPFEZIJSGUJOJMOXLEMHLSVSLCWOJHQNZXNDL");

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
    msg.setTimeStamp(0.0263554425477);
    msg.setSource(21037U);
    msg.setSourceEntity(59U);
    msg.setDestination(52520U);
    msg.setDestinationEntity(137U);
    msg.lat = 0.759527540658;
    msg.lon = 0.69100162284;
    msg.z = 0.488632349383;
    msg.z_units = 70U;
    msg.radius = 0.927843927532;
    msg.duration = 34145U;
    msg.speed = 0.911456934798;
    msg.speed_units = 201U;
    msg.popup_period = 30619U;
    msg.popup_duration = 21653U;
    msg.flags = 194U;
    msg.custom.assign("LNAVMRUAOEKXCIZOQUBXHNMBBZFETBFUUZEPBQZFAAWHXCTCWFPTVMS");

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
    msg.setTimeStamp(0.16542323347);
    msg.setSource(6622U);
    msg.setSourceEntity(163U);
    msg.setDestination(35671U);
    msg.setDestinationEntity(57U);
    msg.lat = 0.187500706176;
    msg.lon = 0.196483020838;
    msg.z = 0.323483468205;
    msg.z_units = 23U;
    msg.radius = 0.393761234415;
    msg.duration = 46686U;
    msg.speed = 0.30445062464;
    msg.speed_units = 111U;
    msg.popup_period = 34049U;
    msg.popup_duration = 52105U;
    msg.flags = 217U;
    msg.custom.assign("PVZPCJZASUOJNGFVMMSUYNEWXFIHURJDEZMJLVUKIOXFQTCHSFEEEHYDXUZOILPLKHFFEBABIBNFSQNKTL");

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
    msg.setTimeStamp(0.430294486052);
    msg.setSource(3431U);
    msg.setSourceEntity(94U);
    msg.setDestination(324U);
    msg.setDestinationEntity(157U);
    msg.timeout = 20858U;
    msg.flags = 184U;
    msg.lat = 0.0410319879978;
    msg.lon = 0.674947683349;
    msg.start_z = 0.62910344784;
    msg.start_z_units = 42U;
    msg.end_z = 0.014710130086;
    msg.end_z_units = 142U;
    msg.radius = 0.987854872481;
    msg.speed = 0.399469448623;
    msg.speed_units = 21U;
    msg.custom.assign("UPHUZQQRKDYOENUXTJCGAFLCVLTVFJJPGLNPTROJYWSZXFQZTJWTKHMIIVXMAYESHUGUGXCYXFXDCHGLMVASXZRDOIQNLKHJHWPPDMSFRWNTLJBGKWLBVKUOYRUFIMKLZTMQSYODBMKFTSRAERRKBEAWRBDAQELKOAISSQFIJMWXINZFQPVZPKQFEOGVLNBUEUTZDCAOCIWEXONEZBJNANGZPWRNDMHOSPHYVVGECSAG");

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
    msg.setTimeStamp(0.724291555402);
    msg.setSource(55093U);
    msg.setSourceEntity(88U);
    msg.setDestination(31705U);
    msg.setDestinationEntity(61U);
    msg.timeout = 30243U;
    msg.flags = 185U;
    msg.lat = 0.213608258015;
    msg.lon = 0.777298873686;
    msg.start_z = 0.0884118765457;
    msg.start_z_units = 195U;
    msg.end_z = 0.974105631651;
    msg.end_z_units = 32U;
    msg.radius = 0.210360095225;
    msg.speed = 0.236587121679;
    msg.speed_units = 148U;
    msg.custom.assign("XTVHKTRAWVKYANACXFYJRMQLVDFEKNNGAOPITUPBEQWVIDMBELLEDWXMDIK");

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
    msg.setTimeStamp(0.306984457692);
    msg.setSource(40687U);
    msg.setSourceEntity(197U);
    msg.setDestination(44236U);
    msg.setDestinationEntity(32U);
    msg.timeout = 18122U;
    msg.flags = 228U;
    msg.lat = 0.532476098097;
    msg.lon = 0.515411671453;
    msg.start_z = 0.0615666056068;
    msg.start_z_units = 56U;
    msg.end_z = 0.140969204946;
    msg.end_z_units = 218U;
    msg.radius = 0.148843399247;
    msg.speed = 0.615710810129;
    msg.speed_units = 87U;
    msg.custom.assign("DQPFKTJCOQGXCMMUAPHIOHGBFBBNXOLOUQVQZUWWLWWENYAFGHVZBKDMDIKMXLKBIZXUYLPR");

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
    msg.setTimeStamp(0.760631424592);
    msg.setSource(1278U);
    msg.setSourceEntity(52U);
    msg.setDestination(50243U);
    msg.setDestinationEntity(114U);
    msg.timeout = 19997U;
    msg.lat = 0.0242755325393;
    msg.lon = 0.532639368345;
    msg.z = 0.0564111237089;
    msg.z_units = 72U;
    msg.speed = 0.0587985993662;
    msg.speed_units = 219U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.3473769002;
    tmp_msg_0.y = 0.487862788032;
    tmp_msg_0.z = 0.162037042116;
    tmp_msg_0.t = 0.39206170493;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("ERSVPGEUJFMUPSEQAAEOOBUZZOTMSDJJQXXULYJTKUHCGFUFBWZWHAJCIVIWUTYXHQEVCLHEHFRBVXQLYDOGUKOKNMDRDLWZJYBYPZWYWPSYIZKSQCENO");

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
    msg.setTimeStamp(0.078614315734);
    msg.setSource(49615U);
    msg.setSourceEntity(205U);
    msg.setDestination(41534U);
    msg.setDestinationEntity(216U);
    msg.timeout = 15670U;
    msg.lat = 0.00434989735627;
    msg.lon = 0.472989205325;
    msg.z = 0.835953851824;
    msg.z_units = 181U;
    msg.speed = 0.430643261912;
    msg.speed_units = 112U;
    msg.custom.assign("XRMSARBLIVDEXZKIMBFNUZJVORABLNAZVRHMWYVBTIILWZNYUPJVPTQMQJ");

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
    msg.setTimeStamp(0.9819083939);
    msg.setSource(21181U);
    msg.setSourceEntity(127U);
    msg.setDestination(39311U);
    msg.setDestinationEntity(164U);
    msg.timeout = 31090U;
    msg.lat = 0.676499932438;
    msg.lon = 0.517120070292;
    msg.z = 0.715919517572;
    msg.z_units = 23U;
    msg.speed = 0.227830457163;
    msg.speed_units = 81U;
    msg.custom.assign("KIWNMJXSLDUBYRITHXRQYZEUZWJQVOTZKBIIDGOCBEEBGGKJYCHRNSPJRHGZVIRXCHDCYBNYFAZZFGNTKZCKAXTGKXDOLXZEUSYVBSFZLOOSPQOGQQPLFX");

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
    msg.setTimeStamp(0.875691531698);
    msg.setSource(24240U);
    msg.setSourceEntity(216U);
    msg.setDestination(9745U);
    msg.setDestinationEntity(14U);
    msg.x = 0.686804914194;
    msg.y = 0.827979016047;
    msg.z = 0.881418420376;
    msg.t = 0.683787793149;

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
    msg.setTimeStamp(0.158920148739);
    msg.setSource(12378U);
    msg.setSourceEntity(117U);
    msg.setDestination(14673U);
    msg.setDestinationEntity(236U);
    msg.x = 0.462783646484;
    msg.y = 0.63079152961;
    msg.z = 0.615849819382;
    msg.t = 0.417208787173;

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
    msg.setTimeStamp(0.0484865730817);
    msg.setSource(51554U);
    msg.setSourceEntity(128U);
    msg.setDestination(40981U);
    msg.setDestinationEntity(164U);
    msg.x = 0.0776564392012;
    msg.y = 0.857025086908;
    msg.z = 0.570588005417;
    msg.t = 0.729291193769;

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
    msg.setTimeStamp(0.187551166492);
    msg.setSource(22024U);
    msg.setSourceEntity(67U);
    msg.setDestination(51534U);
    msg.setDestinationEntity(101U);
    msg.timeout = 3579U;
    msg.name.assign("MBRHHIASNETAZSNUXRIKQELFRGDFZMBDLPXDBUZDXMUWCHVQFXPFIURRSDWZPCLAHYKPJTCRMZBGTGLSHGCAEKKMITQOVLKNFYXROODENCREZDPWSWVVVTOFKWUYMHFQGUDQJGSXEAPKEJJVQTRDSGIHLCTPKVWXHWXMTHVYALAT");
    msg.custom.assign("YKHVMASJBVONTSEQEIWFZWUPWPTXBMMMIETLVKMQLGPIMGZZUIUBRYRFBRUJEKQDCYYLZSGGEDHARAGAFRLOLXEVNBIYSMXIMCHYTLJLJQXYQGLWGAZZVUN");

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
    msg.setTimeStamp(0.133689889505);
    msg.setSource(49492U);
    msg.setSourceEntity(78U);
    msg.setDestination(54276U);
    msg.setDestinationEntity(60U);
    msg.timeout = 28025U;
    msg.name.assign("PKRLDWMSOFSDZYXCWJBCEHDTB");
    msg.custom.assign("BGXSMIGYJOZDOQFWVTHVSUIDHAQXSHPTARMKCHJUXQKYBOAXCLCDYPOJRRUSQMMJQEGGRVTIYIVLAVFRZEAUPWWRBNAUZZKFZFXCJAHSKXYGWUWZNDPEQKUSJUNVBBVTYMLWBDALDCNRNWOCJTIKSGCPNZRONJTLCYEIVEQBTZFECPQPKFDWBOYZUNSVFMLLQSRWEHNLIGKFNJABKMYIDOWEPXTIHLY");

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
    msg.setTimeStamp(0.753686841653);
    msg.setSource(28238U);
    msg.setSourceEntity(128U);
    msg.setDestination(31472U);
    msg.setDestinationEntity(75U);
    msg.timeout = 63256U;
    msg.name.assign("LKMXRMVEKWRSRXDAEYLJYVZZWUIAZTBYNLNYJGHATMQXNPBBSTBEVTLMLXWCCJONRGNJYGGYFFOIAGMQVHEGJZLQDPWEUIKRBIDAOTPWGOUDVPDALZQKSKVEIIPH");
    msg.custom.assign("BFSPJPEHJNOQCRUOWXTPJOVHVDLHCHIRVSSRZDTRHWAIAIULAYAHXHNSPPSQSNKJBFNYVMWEUGDLUSFFUJUESXXPCITY");

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
    msg.setTimeStamp(0.305262024928);
    msg.setSource(56391U);
    msg.setSourceEntity(5U);
    msg.setDestination(35622U);
    msg.setDestinationEntity(94U);
    msg.lat = 0.940830052242;
    msg.lon = 0.0268500372906;
    msg.z = 0.954216497497;
    msg.z_units = 66U;
    msg.speed = 0.395577230949;
    msg.speed_units = 97U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.895921637963;
    tmp_msg_0.y = 0.793648785694;
    tmp_msg_0.z = 0.380770584031;
    tmp_msg_0.t = 0.86038733185;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.44648527285;
    msg.custom.assign("OTIOYQEXHUHBDGZPBMAPSLDZZVUJORBNIIQVEHYLSGSSRPRHXUKGEMLM");

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
    msg.setTimeStamp(0.286512951543);
    msg.setSource(17406U);
    msg.setSourceEntity(143U);
    msg.setDestination(46008U);
    msg.setDestinationEntity(235U);
    msg.lat = 0.878916964303;
    msg.lon = 0.431885039885;
    msg.z = 0.15073063182;
    msg.z_units = 189U;
    msg.speed = 0.29308167713;
    msg.speed_units = 202U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.721846627984;
    tmp_msg_0.y = 0.0970181457288;
    tmp_msg_0.z = 0.0319446527309;
    tmp_msg_0.t = 0.934608593067;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.480802833892;
    msg.custom.assign("XYYZQUQYPRDWNOIWFVUELXDXXSGIRWSICEOWZCOZYDFAKEOTSCBFGDLIBJCWASXZBVFHQKVVPRSOSTAMBMJCTHADAFUPPVMSXQJOJOVJTDJLOPCGIIIMGGPLRLZNMEDHLTQBSORESYRVDDJEWDWEEWKFVNYCYTEPHNUQYXHQTTFZYBMGVCRQEMSNNUFHBQLZFPAUBGUK");

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
    msg.setTimeStamp(0.396039544375);
    msg.setSource(25760U);
    msg.setSourceEntity(240U);
    msg.setDestination(48026U);
    msg.setDestinationEntity(74U);
    msg.lat = 0.367734322214;
    msg.lon = 0.387931896377;
    msg.z = 0.740385318449;
    msg.z_units = 147U;
    msg.speed = 0.990608500261;
    msg.speed_units = 52U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.626319177085;
    tmp_msg_0.y = 0.00617339212337;
    tmp_msg_0.z = 0.456684669258;
    tmp_msg_0.t = 0.942591027113;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.808805545143;
    msg.custom.assign("SYXSATXMYVBYQCJKXHRCURPTVGQPDFS");

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
    msg.setTimeStamp(0.77972410512);
    msg.setSource(787U);
    msg.setSourceEntity(108U);
    msg.setDestination(44869U);
    msg.setDestinationEntity(155U);
    msg.vid = 42554U;
    msg.off_x = 0.426586311099;
    msg.off_y = 0.655045638947;
    msg.off_z = 0.979417599263;

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
    msg.setTimeStamp(0.456619812274);
    msg.setSource(63015U);
    msg.setSourceEntity(112U);
    msg.setDestination(15035U);
    msg.setDestinationEntity(74U);
    msg.vid = 16898U;
    msg.off_x = 0.0721626179693;
    msg.off_y = 0.366464085358;
    msg.off_z = 0.523559786831;

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
    msg.setTimeStamp(0.542162023094);
    msg.setSource(62936U);
    msg.setSourceEntity(43U);
    msg.setDestination(54073U);
    msg.setDestinationEntity(223U);
    msg.vid = 27011U;
    msg.off_x = 0.826180051535;
    msg.off_y = 0.00891053939641;
    msg.off_z = 0.704421126914;

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
    msg.setTimeStamp(0.925206064836);
    msg.setSource(55174U);
    msg.setSourceEntity(172U);
    msg.setDestination(57569U);
    msg.setDestinationEntity(5U);

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
    msg.setTimeStamp(0.231913453934);
    msg.setSource(5741U);
    msg.setSourceEntity(77U);
    msg.setDestination(23346U);
    msg.setDestinationEntity(142U);

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
    msg.setTimeStamp(0.471208212052);
    msg.setSource(22333U);
    msg.setSourceEntity(254U);
    msg.setDestination(49207U);
    msg.setDestinationEntity(195U);

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
    msg.setTimeStamp(0.466071504764);
    msg.setSource(4183U);
    msg.setSourceEntity(87U);
    msg.setDestination(56774U);
    msg.setDestinationEntity(111U);
    msg.mid = 56400U;

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
    msg.setTimeStamp(0.486682792981);
    msg.setSource(17682U);
    msg.setSourceEntity(251U);
    msg.setDestination(31256U);
    msg.setDestinationEntity(61U);
    msg.mid = 52110U;

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
    msg.setTimeStamp(0.527802230905);
    msg.setSource(63490U);
    msg.setSourceEntity(179U);
    msg.setDestination(62747U);
    msg.setDestinationEntity(226U);
    msg.mid = 25942U;

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
    msg.setTimeStamp(0.439113975928);
    msg.setSource(351U);
    msg.setSourceEntity(90U);
    msg.setDestination(62866U);
    msg.setDestinationEntity(223U);
    msg.state = 14U;
    msg.eta = 7399U;
    msg.info.assign("QEBRKAGSHWVPHBJOPDMJRSEMCPGI");

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
    msg.setTimeStamp(0.490562166428);
    msg.setSource(54946U);
    msg.setSourceEntity(231U);
    msg.setDestination(41608U);
    msg.setDestinationEntity(228U);
    msg.state = 210U;
    msg.eta = 62444U;
    msg.info.assign("AOYULXRAKKDMQOKEKRPTXEJNJMIUTMNELCJBHLFBWYCVBIMUIOPATFWIISAWIZSLGUCSSAGZIBYSXXAPBTIYSYJFHSPGVHAUMKHRZGVREEDVDSNHENWRUCNQBHUCFZOS");

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
    msg.setTimeStamp(0.659015413161);
    msg.setSource(61394U);
    msg.setSourceEntity(111U);
    msg.setDestination(28785U);
    msg.setDestinationEntity(250U);
    msg.state = 11U;
    msg.eta = 38380U;
    msg.info.assign("WYCKNXUOPOBJSHKXDTINTOCCEZGBPKJHNLJZDQBPSWGJQMIHTVJPYGBUYPXLUIRRKYMJJBA");

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
    msg.setTimeStamp(0.606808841242);
    msg.setSource(19821U);
    msg.setSourceEntity(174U);
    msg.setDestination(48959U);
    msg.setDestinationEntity(175U);
    msg.system = 10914U;
    msg.duration = 28744U;
    msg.speed = 0.260214535658;
    msg.speed_units = 52U;
    msg.x = 0.455251793784;
    msg.y = 0.512623021763;
    msg.z = 0.319425620203;
    msg.z_units = 133U;

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
    msg.setTimeStamp(0.806707922959);
    msg.setSource(63308U);
    msg.setSourceEntity(202U);
    msg.setDestination(29622U);
    msg.setDestinationEntity(184U);
    msg.system = 11067U;
    msg.duration = 59773U;
    msg.speed = 0.615270516065;
    msg.speed_units = 192U;
    msg.x = 0.0387394815081;
    msg.y = 0.402126289825;
    msg.z = 0.152458545793;
    msg.z_units = 58U;

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
    msg.setTimeStamp(0.656099104589);
    msg.setSource(44104U);
    msg.setSourceEntity(210U);
    msg.setDestination(31454U);
    msg.setDestinationEntity(249U);
    msg.system = 42410U;
    msg.duration = 9197U;
    msg.speed = 0.916853008443;
    msg.speed_units = 92U;
    msg.x = 0.579981797189;
    msg.y = 0.635615472716;
    msg.z = 0.390513289437;
    msg.z_units = 95U;

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
    msg.setTimeStamp(0.867474730524);
    msg.setSource(12979U);
    msg.setSourceEntity(187U);
    msg.setDestination(41287U);
    msg.setDestinationEntity(221U);
    msg.lat = 0.256803712811;
    msg.lon = 0.133094225298;
    msg.speed = 0.886680430371;
    msg.speed_units = 55U;
    msg.duration = 45689U;
    msg.sys_a = 14690U;
    msg.sys_b = 10099U;
    msg.move_threshold = 0.133168504043;

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
    msg.setTimeStamp(0.143226476988);
    msg.setSource(30099U);
    msg.setSourceEntity(191U);
    msg.setDestination(22323U);
    msg.setDestinationEntity(214U);
    msg.lat = 0.762393815484;
    msg.lon = 0.579223253208;
    msg.speed = 0.410647009491;
    msg.speed_units = 137U;
    msg.duration = 473U;
    msg.sys_a = 35470U;
    msg.sys_b = 55593U;
    msg.move_threshold = 0.394821050708;

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
    msg.setTimeStamp(0.821826441759);
    msg.setSource(2944U);
    msg.setSourceEntity(52U);
    msg.setDestination(12878U);
    msg.setDestinationEntity(98U);
    msg.lat = 0.816512411114;
    msg.lon = 0.657189319473;
    msg.speed = 0.297281228886;
    msg.speed_units = 180U;
    msg.duration = 58514U;
    msg.sys_a = 10390U;
    msg.sys_b = 44325U;
    msg.move_threshold = 0.996434068223;

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
    msg.setTimeStamp(0.876468963841);
    msg.setSource(44597U);
    msg.setSourceEntity(251U);
    msg.setDestination(62366U);
    msg.setDestinationEntity(10U);
    msg.lat = 0.752162851299;
    msg.lon = 0.910259132819;
    msg.z = 0.391923104576;
    msg.z_units = 194U;
    msg.speed = 0.53127905046;
    msg.speed_units = 22U;
    msg.custom.assign("ZVPGZXQJUPWETHYWIKQRYLXHWZMDIFYZCYATEONCFJRANWKOCFBYMJSFVMZHAGXNCARZRHXTOXLYGTKHUVWUVNIPNNHYWGXAJVKQIWGIUULSVDOBUSRCFMJTMDRODSGUQRQSGOXLBTEZEKLAENOCWYIZXPORUPDQHNVGUMLQVSEUAHEYEDBTJNLHMFMFQJKEBMLIRGLKSJPSOCIWXVLGD");

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
    msg.setTimeStamp(0.487311299024);
    msg.setSource(19154U);
    msg.setSourceEntity(205U);
    msg.setDestination(22818U);
    msg.setDestinationEntity(32U);
    msg.lat = 0.281529514774;
    msg.lon = 0.623965297975;
    msg.z = 0.129821282386;
    msg.z_units = 77U;
    msg.speed = 0.318793717649;
    msg.speed_units = 83U;
    msg.custom.assign("OWBZXTXTKUKUFWIQERGMGWPUTDJPVASBROMUWRFHGFQPHYZDBYCOQRFOWCSQPXVNIBIAL");

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
    msg.setTimeStamp(0.635008333115);
    msg.setSource(4338U);
    msg.setSourceEntity(246U);
    msg.setDestination(48315U);
    msg.setDestinationEntity(18U);
    msg.lat = 0.747685814043;
    msg.lon = 0.0324564872659;
    msg.z = 0.747142991442;
    msg.z_units = 71U;
    msg.speed = 0.360525396678;
    msg.speed_units = 167U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.899996911468;
    tmp_msg_0.lon = 0.0695997817417;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("IFIDJDCGQSLRPXUOBWSELAJKFQBDZJPHMEBGLOQPYNLUXRLODIDFAZVMWRFRGTZEFUAKUWCYTSBYKJIYGFGWOWGWQJXNBSDIVFRAHIMTSFWCAECPRRXUONCVXTZTVNEHSPNBMLCGYHNVAOQ");

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
    msg.setTimeStamp(0.430946434999);
    msg.setSource(19659U);
    msg.setSourceEntity(245U);
    msg.setDestination(25023U);
    msg.setDestinationEntity(8U);
    msg.lat = 0.663120773827;
    msg.lon = 0.485110732318;

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
    msg.setTimeStamp(0.292016150099);
    msg.setSource(61283U);
    msg.setSourceEntity(141U);
    msg.setDestination(64743U);
    msg.setDestinationEntity(60U);
    msg.lat = 0.856575734402;
    msg.lon = 0.481085067659;

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
    msg.setTimeStamp(0.338601574634);
    msg.setSource(10530U);
    msg.setSourceEntity(24U);
    msg.setDestination(53460U);
    msg.setDestinationEntity(15U);
    msg.lat = 0.862888078794;
    msg.lon = 0.363995871589;

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
    msg.setTimeStamp(0.280729541375);
    msg.setSource(5526U);
    msg.setSourceEntity(142U);
    msg.setDestination(40250U);
    msg.setDestinationEntity(214U);
    msg.timeout = 52272U;
    msg.lat = 0.136265925989;
    msg.lon = 0.346507789008;
    msg.z = 0.992626410602;
    msg.z_units = 220U;
    msg.pitch = 0.413541279679;
    msg.amplitude = 0.871428832168;
    msg.duration = 47229U;
    msg.speed = 0.00916281231414;
    msg.speed_units = 183U;
    msg.radius = 0.0992468394134;
    msg.direction = 207U;
    msg.custom.assign("ZGVPFEPXPXFJZWYKOCZDYKUJGZHULMSLUHOTNCMTPQVIMIRUKNVXVFVDNWJJMUUSEDGJOLRZJWRHQMQFOZBAOXEOGNVICHWZRMLO");

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
    msg.setTimeStamp(0.91757291876);
    msg.setSource(42817U);
    msg.setSourceEntity(28U);
    msg.setDestination(38287U);
    msg.setDestinationEntity(204U);
    msg.timeout = 42311U;
    msg.lat = 0.733059850446;
    msg.lon = 0.863681116371;
    msg.z = 0.861254933519;
    msg.z_units = 37U;
    msg.pitch = 0.0885387570678;
    msg.amplitude = 0.583802066745;
    msg.duration = 41930U;
    msg.speed = 0.0692707326633;
    msg.speed_units = 174U;
    msg.radius = 0.139219324256;
    msg.direction = 177U;
    msg.custom.assign("RXDZQDBUKALLIEIYFWBJVOEFFEEDMUKHRNCYWXRLSWHKOJSQQCELBAWVVPQNYFMHMCHQIPULFTKSXEJHFPCNBASZGXEOVSTLWYQYKWJQVALNRBGRPGGMWHRNBLUIMWTLAXK");

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
    msg.setTimeStamp(0.520994398023);
    msg.setSource(56098U);
    msg.setSourceEntity(35U);
    msg.setDestination(15545U);
    msg.setDestinationEntity(122U);
    msg.timeout = 42493U;
    msg.lat = 0.357954687602;
    msg.lon = 0.0394405893115;
    msg.z = 0.849118990484;
    msg.z_units = 133U;
    msg.pitch = 0.124885071011;
    msg.amplitude = 0.115305597923;
    msg.duration = 20896U;
    msg.speed = 0.530638720198;
    msg.speed_units = 151U;
    msg.radius = 0.890721293501;
    msg.direction = 207U;
    msg.custom.assign("ZONWJDFHMDRSFFTCSKKZOLUADPABTMPHVDXGCYHWZAUSSKDGHHXNDBBEBFEGUUXQITNXIIGGIOPQAOKCJUBVQPXQVYUJNDMVKEFGMMSHOCUWLJY");

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
    msg.setTimeStamp(0.253356472689);
    msg.setSource(23843U);
    msg.setSourceEntity(51U);
    msg.setDestination(23276U);
    msg.setDestinationEntity(221U);
    msg.formation_name.assign("WPXLTCIAWSCRZZCATJANQVPKYUMTBKETBKVQSVTPXANAEOZDEJXQYZHXFIOACDGMCQIZNMQMKKSFMAXBBBQTUCNNHKDLVQSQBPLWHRBEDDMOTHZBRIUJBWRKLXLJZGYQJOAFPJEGWQWECRNSSCRSGINVFJXYRHUOUDY");
    msg.reference_frame = 67U;
    msg.custom.assign("TYGLOLFBNCSMBNZMRAMVPIRGAZUFJWDSXTCFRQOHMVDBXRSEIA");

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
    msg.setTimeStamp(0.45834884936);
    msg.setSource(27862U);
    msg.setSourceEntity(170U);
    msg.setDestination(12663U);
    msg.setDestinationEntity(231U);
    msg.formation_name.assign("RPHCSLVOQUJXDZTLCREPLIDXEJSGXIIQGWTIGUWJZEMTRXUCVMPOHOTQAJTALFUNESMHPYFCGDIDALTRBIKPXRBIVZCKBEBQXGJGXESDDYZNQNZVFPWBNLOMIJFUZYBVSKDIOPSWZHQQULMKCFCYVWENXMJDSHLBDEUPRXFTAKYTGOQAQYRMLFPDKVSNAOOYWQHYHFKZXSWFBZAGLMVUJCCYVUTERGNROMCW");
    msg.reference_frame = 71U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 11112U;
    tmp_msg_0.off_x = 0.349740040584;
    tmp_msg_0.off_y = 0.293705241504;
    tmp_msg_0.off_z = 0.490865293269;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("ZVTHLVDYDRTVLAQJEQLUICCLJQGSQXFUGYITRJKBOKYMRHDMREDNOBGXFTFVFCBIQZLXBWWKMXOXVAKGCMRHNGCLEOVRKSHENDXNZZOPEGVMUJFDJFNYLGMFPFNXHSIXQOBBPDYCLWBOPKQPGDDQTSMAZIASMHEW");

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
    msg.setTimeStamp(0.646507961401);
    msg.setSource(47784U);
    msg.setSourceEntity(71U);
    msg.setDestination(64938U);
    msg.setDestinationEntity(64U);
    msg.formation_name.assign("DLJQYECYYQUQFWOIOHTTASEAQSUKDVGIXPZHEDFNFWEQVEWUPMKWTSAWZJCRDVRACUBXVNGKVKBYJLEVGNXIYWMPYYZVMZGBMJBXGBKQMATIGNBHVKPTXKOTUQRSWRNQZEEZRSLZZJFCCSXBRMSWTHLOTHMDYCDXXTPEGZDNIPHQIUFIDVMAOBLOKRNAVSORUNLAFUHLYUM");
    msg.reference_frame = 240U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 27080U;
    tmp_msg_0.off_x = 0.597233407777;
    tmp_msg_0.off_y = 0.956202745346;
    tmp_msg_0.off_z = 0.742015184597;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("ITVBZBDHTCCVAXJDZQDZHEHDTNUIKUWDULETAJRYOLXSHRKFSCESAVSOHHOCMOJVGAQXEWINGWIVEZCDZIQIJVFNGHREALZVJZPKPSFZXVUXTPWTJQAI");

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
    msg.setTimeStamp(0.557905229629);
    msg.setSource(45699U);
    msg.setSourceEntity(234U);
    msg.setDestination(40286U);
    msg.setDestinationEntity(220U);
    msg.group_name.assign("ECOKUAYTABYSJSGMDTACCABBGQBYOWHAKLHKUDENETTJCWSNPIGBEFOYMIVRLGGFKXLFRHOMFQUDJWNDRNNBVZQWJRIIIRYKTGJLHLFYGEAWILZZRXLUWRMSJODHCIPMNGMMOYWVJLKTRMAWZWXPVYHDPFZSACBXGGQPEFQAQRQCXYPHCOJ");
    msg.formation_name.assign("XDCHVCKADANISFAUFBLJKTMYCRZGQACWJVPZVWOFEQEPUYXBUMQEZFLCOTXEJRM");
    msg.plan_id.assign("TSMCZHVCCEMFQVXFUXHGTJIMTQCWFBLBSHIZXUBEDPQMHFPALBKFOQHZRDBPKZJIOCIWYNCRJWNTVOWRENKSYDTZGLQBOWSIWLAWVRSFDJLYEAAYREQOGNTAHVUWUGJHYQPMYJWXKFUQINDKIPZJVJDOGUZPZOEGFOPXBSKRNVABKAYYQHEZBXAUMRKFDDUMNOIMITJGDTSXLBVLUCRE");
    msg.description.assign("ZNSANTJWCQTCQWQMUZXFEDZBOYVWLHLQYPXJRKFEKGPHMIMPEFPSPJYOZGXTMQQPTRUJUVGFDTIUOEFYLOWZMAFRAWXTGIOAYEDKBVFUJAMRALINVSSDNFYLAZPYHCPGGHHDHOBGBSTDCWUYPEVMOSVQKTQJNLJBNWFZCVKINTNBCSLKSYALRJBQVAKUHYUDRHEECHPX");
    msg.leader_speed = 0.178350225157;
    msg.leader_bank_lim = 0.354097532106;
    msg.pos_sim_err_lim = 0.88267452875;
    msg.pos_sim_err_wrn = 0.452520110772;
    msg.pos_sim_err_timeout = 12263U;
    msg.converg_max = 0.806898574018;
    msg.converg_timeout = 30511U;
    msg.comms_timeout = 29731U;
    msg.turb_lim = 0.410841811858;
    msg.custom.assign("JLSFWFYNKOWFGPOEMQJNTYQSFBWIRRKNEHJKXAMYFVZIFVQZYNUBKHJIVXLLRPCAXHBDHKEENAUEAABLENFBDPZTOOVMYVRZLKOPSFCSICITTEQHMGGWIUWTENQCMPQDUGPSVJRMZKQOCHRPZDMXBGGKNHRJBZLZMCNPUJXXOSWFYGIHSGFGCDGNYWWUMEQMTIBQVSWAXJ");

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
    msg.setTimeStamp(0.949122233318);
    msg.setSource(10555U);
    msg.setSourceEntity(48U);
    msg.setDestination(46330U);
    msg.setDestinationEntity(72U);
    msg.group_name.assign("OJHXGTQQRYICIJFNDNYWEBKUJENLSGALQDACXYTUKHLOWBQFABOIOSXZSWCVMPOMGMMXHLJCVMUAWFDFKJKFDFVWRG");
    msg.formation_name.assign("TOARTQGTXGUXKEVBDQBDKMMVFDFJIJATINDELD");
    msg.plan_id.assign("PBYDXSSRTYSNVVYMOQPKUTWXVYPGEUTVSYTNDNOOUIZLHMAOWWPUBQEZFTJZLDVWDXWVDQKAGCUPWFISDAMXMRJIUJJIEPCFALIRCBAGPJNZJWOVYVSAFNQTHBQCKAZFURNMTBUTCSQVLMHYXLVCJSDBBRNKZWNIGSEGRBKCKPGHEBHLQJRPPFGHEYDEFLRXWFJZZUKXXOAU");
    msg.description.assign("UMLHXCRHSVUTVZPKODZULJFQVWASQJXPLYBBEBYUWBYJ");
    msg.leader_speed = 0.301750056122;
    msg.leader_bank_lim = 0.347592530902;
    msg.pos_sim_err_lim = 0.169557028689;
    msg.pos_sim_err_wrn = 0.596509467786;
    msg.pos_sim_err_timeout = 61964U;
    msg.converg_max = 0.951179602332;
    msg.converg_timeout = 60371U;
    msg.comms_timeout = 38314U;
    msg.turb_lim = 0.631199440971;
    msg.custom.assign("VVROWALUYXVNHDFOSEYEUCHJNRKBVWYTADNGIFQMCRSABPHPUPCSWZTQABSMWLKHTOKJLACNLDIXOBCKNSTZVNCUGJUXKMRVGROSUKQYOUXLJALGGGCEPLPZDIKQYQHFPVJOMIHXNGRXKQWBEWYIZBEET");

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
    msg.setTimeStamp(0.865217900239);
    msg.setSource(11113U);
    msg.setSourceEntity(102U);
    msg.setDestination(31644U);
    msg.setDestinationEntity(254U);
    msg.group_name.assign("MREWUIQZTVFNWQK");
    msg.formation_name.assign("PGIIDWGNCLYTYZZCZSEOLXKHCREHRISDVXUTRRFJAVZZPRTPXGLNPEISDESPGGJDCDMAUOPAEHXXNGOJAOVVUGUAQYIAQRPQFNFIKFREJHSTXQGFFJQLQBQRYCLEUSKWKLCYVQBAVYPGYHEDOUYNUI");
    msg.plan_id.assign("VENIHMAYDDDZSQGUWWVX");
    msg.description.assign("HWESXURQSWPFDAWFHGZSXTDRSWTTZOUAKTLUXEJSVFTZUBGXDHOJCPKLEMRQAZPLUBOPIEADVDWNFXTMXKVCHOOSIMJRRYDJQYYDRHBKBQVZWCONBNFUNQDEGYNYXANOABRXGAIWEFZCKTGMLSAUSLMVHCFFLVVPVMEJQPYUUGSHDWMKNFTMKZPQJIJJVILCWTYGWIBLPZFHDYHPIMCCBLGORINKAOQCXPAQBVNOZXTGQ");
    msg.leader_speed = 0.284374883847;
    msg.leader_bank_lim = 0.946062629335;
    msg.pos_sim_err_lim = 0.503892182478;
    msg.pos_sim_err_wrn = 0.572103225186;
    msg.pos_sim_err_timeout = 58281U;
    msg.converg_max = 0.00965433463682;
    msg.converg_timeout = 12079U;
    msg.comms_timeout = 30737U;
    msg.turb_lim = 0.774050370195;
    msg.custom.assign("XYYZNJGANOULVXUHIAROVOZDKZVSFRVASWBWVEDALPGENIFHOHCMZWKQWWXZMNUYKEIZAYKYNJMLQGZPJQLYFCTHTJUASDPGTCFLFYUXCJHEDSZMMJFSCNRQFLGQWRABBTOAMGBXP");

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
    msg.setTimeStamp(0.275739810679);
    msg.setSource(11066U);
    msg.setSourceEntity(132U);
    msg.setDestination(32897U);
    msg.setDestinationEntity(210U);
    msg.control_src = 52022U;
    msg.control_ent = 92U;
    msg.timeout = 0.362553867071;
    msg.loiter_radius = 0.600284778203;
    msg.altitude_interval = 0.0115244355987;

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
    msg.setTimeStamp(0.608680149974);
    msg.setSource(14776U);
    msg.setSourceEntity(32U);
    msg.setDestination(62264U);
    msg.setDestinationEntity(46U);
    msg.control_src = 42335U;
    msg.control_ent = 248U;
    msg.timeout = 0.169390128868;
    msg.loiter_radius = 0.790670213846;
    msg.altitude_interval = 0.102803818991;

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
    msg.setTimeStamp(0.980368016503);
    msg.setSource(22491U);
    msg.setSourceEntity(75U);
    msg.setDestination(44341U);
    msg.setDestinationEntity(61U);
    msg.control_src = 54693U;
    msg.control_ent = 47U;
    msg.timeout = 0.380767074229;
    msg.loiter_radius = 0.385395945712;
    msg.altitude_interval = 0.511476241608;

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
    msg.setTimeStamp(0.297360351918);
    msg.setSource(12756U);
    msg.setSourceEntity(90U);
    msg.setDestination(62205U);
    msg.setDestinationEntity(102U);
    msg.flags = 8U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.260526738733;
    tmp_msg_0.speed_units = 8U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.899963749223;
    tmp_msg_1.z_units = 188U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.388292880437;
    msg.lon = 0.109473371726;
    msg.radius = 0.0777729688882;

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
    msg.setTimeStamp(0.690846627706);
    msg.setSource(35860U);
    msg.setSourceEntity(219U);
    msg.setDestination(39801U);
    msg.setDestinationEntity(183U);
    msg.flags = 121U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.635346249;
    tmp_msg_0.speed_units = 153U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.133089901245;
    tmp_msg_1.z_units = 142U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.137467768098;
    msg.lon = 0.343979539206;
    msg.radius = 0.817663128314;

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
    msg.setTimeStamp(0.318490522409);
    msg.setSource(41870U);
    msg.setSourceEntity(175U);
    msg.setDestination(49014U);
    msg.setDestinationEntity(160U);
    msg.flags = 227U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.24911345659;
    tmp_msg_0.speed_units = 192U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.0100503628523;
    tmp_msg_1.z_units = 70U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.713927252593;
    msg.lon = 0.41774619231;
    msg.radius = 0.753148041685;

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
    msg.setTimeStamp(0.581355818364);
    msg.setSource(29286U);
    msg.setSourceEntity(146U);
    msg.setDestination(28274U);
    msg.setDestinationEntity(54U);
    msg.control_src = 39817U;
    msg.control_ent = 247U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 43U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.887327157677;
    tmp_tmp_msg_0_0.speed_units = 189U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.141044537314;
    tmp_tmp_msg_0_1.z_units = 235U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.388998578334;
    tmp_msg_0.lon = 0.802098108505;
    tmp_msg_0.radius = 0.130397074386;
    msg.reference.set(tmp_msg_0);
    msg.state = 249U;
    msg.proximity = 207U;

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
    msg.setTimeStamp(0.401516254267);
    msg.setSource(28460U);
    msg.setSourceEntity(224U);
    msg.setDestination(60850U);
    msg.setDestinationEntity(14U);
    msg.control_src = 5923U;
    msg.control_ent = 106U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 182U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.872499797564;
    tmp_tmp_msg_0_0.speed_units = 65U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.588517045725;
    tmp_tmp_msg_0_1.z_units = 122U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.343662062185;
    tmp_msg_0.lon = 0.702126789537;
    tmp_msg_0.radius = 0.661988867528;
    msg.reference.set(tmp_msg_0);
    msg.state = 39U;
    msg.proximity = 61U;

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
    msg.setTimeStamp(0.849035292457);
    msg.setSource(11097U);
    msg.setSourceEntity(23U);
    msg.setDestination(4001U);
    msg.setDestinationEntity(108U);
    msg.control_src = 30597U;
    msg.control_ent = 124U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 212U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.71905001558;
    tmp_tmp_msg_0_0.speed_units = 122U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.0309254166268;
    tmp_tmp_msg_0_1.z_units = 123U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.0584084089119;
    tmp_msg_0.lon = 0.708624646789;
    tmp_msg_0.radius = 0.326035962817;
    msg.reference.set(tmp_msg_0);
    msg.state = 240U;
    msg.proximity = 103U;

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
    msg.setTimeStamp(0.53886004817);
    msg.setSource(29403U);
    msg.setSourceEntity(29U);
    msg.setDestination(31140U);
    msg.setDestinationEntity(247U);
    msg.ax_cmd = 0.858115060971;
    msg.ay_cmd = 0.988930877024;
    msg.az_cmd = 0.25001904501;
    msg.ax_des = 0.0446783969823;
    msg.ay_des = 0.755693729334;
    msg.az_des = 0.598367122824;
    msg.virt_err_x = 0.540415988674;
    msg.virt_err_y = 0.473723076304;
    msg.virt_err_z = 0.514853130908;
    msg.surf_fdbk_x = 0.107415936193;
    msg.surf_fdbk_y = 0.089449261037;
    msg.surf_fdbk_z = 0.736695748776;
    msg.surf_unkn_x = 0.929686375647;
    msg.surf_unkn_y = 0.460402033341;
    msg.surf_unkn_z = 0.0461573688358;
    msg.ss_x = 0.554161528566;
    msg.ss_y = 0.948194095203;
    msg.ss_z = 0.680631982761;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("UXMYXYFGYGGCNZZITIJLIBDVOCNQCATCFSQVPFHHHWDIVKGEGOKYBEUTIJKPDRPURBUORWMVSWCZPVYQTAJKAQBBWZLEAYSNPGHRYLAISAWIYJXREMQGOGULRILENJOJMFJZMUJNHZJTLYPEUAZSWRBREDIPRBYFJZVFMACMSXHOIEHGFRMTPEATDQMCFUPVSXDFVNQTPKBVCXWLSQAKLXQODNOWQDNCNCVHLKGXTKHUOEOXDUKTWDSS");
    tmp_msg_0.dist = 0.711485131234;
    tmp_msg_0.err = 0.983472198505;
    tmp_msg_0.ctrl_imp = 0.412543132832;
    tmp_msg_0.rel_dir_x = 0.228792330478;
    tmp_msg_0.rel_dir_y = 0.6026094316;
    tmp_msg_0.rel_dir_z = 0.352123515439;
    tmp_msg_0.err_x = 0.804343011367;
    tmp_msg_0.err_y = 0.508506042661;
    tmp_msg_0.err_z = 0.406522908812;
    tmp_msg_0.rf_err_x = 0.978594351453;
    tmp_msg_0.rf_err_y = 0.267687248429;
    tmp_msg_0.rf_err_z = 0.504327551783;
    tmp_msg_0.rf_err_vx = 0.620715349732;
    tmp_msg_0.rf_err_vy = 0.406121145091;
    tmp_msg_0.rf_err_vz = 0.594788466749;
    tmp_msg_0.ss_x = 0.718208547858;
    tmp_msg_0.ss_y = 0.594532360064;
    tmp_msg_0.ss_z = 0.0841992323762;
    tmp_msg_0.virt_err_x = 0.195562327788;
    tmp_msg_0.virt_err_y = 0.780074112869;
    tmp_msg_0.virt_err_z = 0.262123312732;
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
    msg.setTimeStamp(0.258563837581);
    msg.setSource(29415U);
    msg.setSourceEntity(104U);
    msg.setDestination(26708U);
    msg.setDestinationEntity(33U);
    msg.ax_cmd = 0.773092674881;
    msg.ay_cmd = 0.977257179741;
    msg.az_cmd = 0.455152945893;
    msg.ax_des = 0.606903612001;
    msg.ay_des = 0.870446743301;
    msg.az_des = 0.185879042178;
    msg.virt_err_x = 0.159446577157;
    msg.virt_err_y = 0.34356591787;
    msg.virt_err_z = 0.992840492037;
    msg.surf_fdbk_x = 0.913736191784;
    msg.surf_fdbk_y = 0.33248382233;
    msg.surf_fdbk_z = 0.692584305338;
    msg.surf_unkn_x = 0.818336595347;
    msg.surf_unkn_y = 0.553825394657;
    msg.surf_unkn_z = 0.611535387566;
    msg.ss_x = 0.964290586971;
    msg.ss_y = 0.114251103801;
    msg.ss_z = 0.482013946358;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("FOQBNDBHYRFXYKVGQXCCULRCMKVWOOPZNCZLPXUQMIODJDTRQTDDEMWIOEIPSHHXAMZLVYUTR");
    tmp_msg_0.dist = 0.976121805507;
    tmp_msg_0.err = 0.37169075179;
    tmp_msg_0.ctrl_imp = 0.247333755611;
    tmp_msg_0.rel_dir_x = 0.0642598052011;
    tmp_msg_0.rel_dir_y = 0.0801039555216;
    tmp_msg_0.rel_dir_z = 0.864380617875;
    tmp_msg_0.err_x = 0.71786486792;
    tmp_msg_0.err_y = 0.495754494728;
    tmp_msg_0.err_z = 0.839097389016;
    tmp_msg_0.rf_err_x = 0.160854682762;
    tmp_msg_0.rf_err_y = 0.145727272793;
    tmp_msg_0.rf_err_z = 0.0145304469321;
    tmp_msg_0.rf_err_vx = 0.114761128372;
    tmp_msg_0.rf_err_vy = 0.568551330266;
    tmp_msg_0.rf_err_vz = 0.706113845608;
    tmp_msg_0.ss_x = 0.0641652535486;
    tmp_msg_0.ss_y = 0.112730115639;
    tmp_msg_0.ss_z = 0.84965420177;
    tmp_msg_0.virt_err_x = 0.0556333312162;
    tmp_msg_0.virt_err_y = 0.559611148295;
    tmp_msg_0.virt_err_z = 0.0496331826214;
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
    msg.setTimeStamp(0.621820236433);
    msg.setSource(34924U);
    msg.setSourceEntity(60U);
    msg.setDestination(64866U);
    msg.setDestinationEntity(141U);
    msg.ax_cmd = 0.367918760535;
    msg.ay_cmd = 0.487370292704;
    msg.az_cmd = 0.71886744476;
    msg.ax_des = 0.948850985781;
    msg.ay_des = 0.469416876945;
    msg.az_des = 0.0510640149812;
    msg.virt_err_x = 0.203198830173;
    msg.virt_err_y = 0.694554737021;
    msg.virt_err_z = 0.521952928221;
    msg.surf_fdbk_x = 0.845441828761;
    msg.surf_fdbk_y = 0.399432409069;
    msg.surf_fdbk_z = 0.0128454986258;
    msg.surf_unkn_x = 0.83629734941;
    msg.surf_unkn_y = 0.882269843817;
    msg.surf_unkn_z = 0.505653850385;
    msg.ss_x = 0.765255157028;
    msg.ss_y = 0.140190281749;
    msg.ss_z = 0.911244300566;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("HXUSTFZFMICZUSTXEQECNCOFZJVHMAJOYMQGFLXGZAPVJJNMKQVRK");
    tmp_msg_0.dist = 0.441111463404;
    tmp_msg_0.err = 0.740129936358;
    tmp_msg_0.ctrl_imp = 0.792289565007;
    tmp_msg_0.rel_dir_x = 0.655120957015;
    tmp_msg_0.rel_dir_y = 0.246448938579;
    tmp_msg_0.rel_dir_z = 0.0469206798574;
    tmp_msg_0.err_x = 0.673283264487;
    tmp_msg_0.err_y = 0.192836246857;
    tmp_msg_0.err_z = 0.917279846997;
    tmp_msg_0.rf_err_x = 0.250456744381;
    tmp_msg_0.rf_err_y = 0.0338733811847;
    tmp_msg_0.rf_err_z = 0.995458090188;
    tmp_msg_0.rf_err_vx = 0.0194293060972;
    tmp_msg_0.rf_err_vy = 0.583746763964;
    tmp_msg_0.rf_err_vz = 0.908243865363;
    tmp_msg_0.ss_x = 0.229313067772;
    tmp_msg_0.ss_y = 0.994240053865;
    tmp_msg_0.ss_z = 0.160841659169;
    tmp_msg_0.virt_err_x = 0.255425324031;
    tmp_msg_0.virt_err_y = 0.855193110522;
    tmp_msg_0.virt_err_z = 0.488278712792;
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
    msg.setTimeStamp(0.456086764156);
    msg.setSource(14640U);
    msg.setSourceEntity(30U);
    msg.setDestination(63298U);
    msg.setDestinationEntity(11U);
    msg.s_id.assign("PJDKGXLGMWIOLMGTIEFZSEFYHJTPEYHIUGSCQHQHPGHIAPEPJSKLKNPEUINKXUBMQGEUJBOSDJBYBUFYBJCLQCNTRHVCLARBUADXYTRNENDKTKOZTWEDLXCOHEBVOBRPWXSMXMYLHWVI");
    msg.dist = 0.067232079933;
    msg.err = 0.606836930859;
    msg.ctrl_imp = 0.470289592931;
    msg.rel_dir_x = 0.440103724483;
    msg.rel_dir_y = 0.877876764821;
    msg.rel_dir_z = 0.583964796516;
    msg.err_x = 0.896387198738;
    msg.err_y = 0.354312964001;
    msg.err_z = 0.393616071144;
    msg.rf_err_x = 0.412194478834;
    msg.rf_err_y = 0.995070048017;
    msg.rf_err_z = 0.119459059396;
    msg.rf_err_vx = 0.576584824209;
    msg.rf_err_vy = 0.261654659904;
    msg.rf_err_vz = 0.178561544317;
    msg.ss_x = 0.864627962556;
    msg.ss_y = 0.158299847715;
    msg.ss_z = 0.742899594111;
    msg.virt_err_x = 0.34641176017;
    msg.virt_err_y = 0.548692396431;
    msg.virt_err_z = 0.022740808121;

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
    msg.setTimeStamp(0.226637291312);
    msg.setSource(52675U);
    msg.setSourceEntity(249U);
    msg.setDestination(48815U);
    msg.setDestinationEntity(17U);
    msg.s_id.assign("ARJBBZDLWFNOXTCWEWQCRFFWIZNKNTLAURPENIQUPYSSODKWIGVCJEEXDVQ");
    msg.dist = 0.802327432323;
    msg.err = 0.999394975279;
    msg.ctrl_imp = 0.938020062683;
    msg.rel_dir_x = 0.971383756278;
    msg.rel_dir_y = 0.842228053437;
    msg.rel_dir_z = 0.315548595832;
    msg.err_x = 0.855675001953;
    msg.err_y = 0.83950793743;
    msg.err_z = 0.290967437916;
    msg.rf_err_x = 0.0767289291107;
    msg.rf_err_y = 0.215905603666;
    msg.rf_err_z = 0.930385818411;
    msg.rf_err_vx = 0.668511008327;
    msg.rf_err_vy = 0.36656671626;
    msg.rf_err_vz = 0.186757505224;
    msg.ss_x = 0.247640509225;
    msg.ss_y = 0.505383401236;
    msg.ss_z = 0.279850202234;
    msg.virt_err_x = 0.787266787753;
    msg.virt_err_y = 0.785997899817;
    msg.virt_err_z = 0.937664381698;

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
    msg.setTimeStamp(0.802280962501);
    msg.setSource(46845U);
    msg.setSourceEntity(96U);
    msg.setDestination(54488U);
    msg.setDestinationEntity(41U);
    msg.s_id.assign("XSTHKIGMCLEOUYNMNVBUPLEWJTNHBHKLXUXKSYTCMBPFOBOYWHSCG");
    msg.dist = 0.669743722268;
    msg.err = 0.532922499505;
    msg.ctrl_imp = 0.560990295659;
    msg.rel_dir_x = 0.80335099297;
    msg.rel_dir_y = 0.635159130234;
    msg.rel_dir_z = 0.255091247308;
    msg.err_x = 0.68906065543;
    msg.err_y = 0.291456261135;
    msg.err_z = 0.416010112489;
    msg.rf_err_x = 0.771040237983;
    msg.rf_err_y = 0.933739869174;
    msg.rf_err_z = 0.765230050934;
    msg.rf_err_vx = 0.819849586254;
    msg.rf_err_vy = 0.771320798482;
    msg.rf_err_vz = 0.421296304415;
    msg.ss_x = 0.69828849411;
    msg.ss_y = 0.907399415956;
    msg.ss_z = 0.230886696764;
    msg.virt_err_x = 0.294995138955;
    msg.virt_err_y = 0.605155234978;
    msg.virt_err_z = 0.255870036777;

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
    msg.setTimeStamp(0.0769090343878);
    msg.setSource(50998U);
    msg.setSourceEntity(152U);
    msg.setDestination(30785U);
    msg.setDestinationEntity(61U);
    msg.timeout = 50369U;
    msg.rpm = 0.0649239314305;
    msg.direction = 11U;
    msg.custom.assign("WIYUEMIBKLRJRONJRFYHGTZPQXBDDPUELZCFFEQCTJUWKHVZSPSHKNXCIUIXKZVQJZEDBMOLRNJZXXSAJITYGSAQOTAEFPBLYCFMLENKTHKGRUHHOHFTEDNTQA");

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
    msg.setTimeStamp(0.0536909659534);
    msg.setSource(35019U);
    msg.setSourceEntity(9U);
    msg.setDestination(39512U);
    msg.setDestinationEntity(159U);
    msg.timeout = 20503U;
    msg.rpm = 0.212677979198;
    msg.direction = 156U;
    msg.custom.assign("CRDOJCTDAGIONBTHZGCRBFPBCXYKZHCRRJBDHMPDEAQJRCVSQQITDBAXSDNUDUQFKJIWGJMMVHOASFWBTCVMTAEPUHERLZSMCSWGKYORFGBOLVXOZGZNDQNJVUZVNVOYSWONIYGPTRKIXVBVUYEUGSILWTNQMCENONYUEATMTEAPFEUKYJZUWHIMKYZXTLKAMPFQZLRWSLDRPIXFHJLPG");

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
    msg.setTimeStamp(0.86057680515);
    msg.setSource(2992U);
    msg.setSourceEntity(195U);
    msg.setDestination(63535U);
    msg.setDestinationEntity(240U);
    msg.timeout = 30896U;
    msg.rpm = 0.396776264122;
    msg.direction = 168U;
    msg.custom.assign("EMMKDKLBLJMBLBFRDKBXZSIDSTZXSMQTVLNVGTOZATNZMUOBOSMPIKVDFZJCCVEGQNUNILWOHARNSPCGUHHJJWWAGGYYZCLDUXHYUAAFCQYQXJYRPQVSXHEMDLRSRDIF");

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
    msg.setTimeStamp(0.138826743842);
    msg.setSource(61711U);
    msg.setSourceEntity(89U);
    msg.setDestination(4414U);
    msg.setDestinationEntity(57U);
    msg.formation_name.assign("YKEPAMCBXFKBHUUFGVJCJNOFGMIXZUAFLOAKZVSHMCKAPVGPNNHUXQHJTXZLBRHKTGXWDOWJGGBEOVLVKUSAOQZEADZMETTOQLIRPQCJIDONDUUCYVRDCACITXWWLPBAKAYSPXYYPNUHMJZPLQWSGSJRJOORZDQDNMNXJFNVV");
    msg.type = 87U;
    msg.op = 194U;
    msg.group_name.assign("WPPMKOXGFKAQU");
    msg.plan_id.assign("HZABABNHNFORKHCGQYZCDIHMQYGTLOYKDSJOHJMMVAHEWJBISUVPWDBQUKQAEAKIUQFPVMDFTXEXYNAGFMRLPZTCWTYBEUWKGRYPJWJBADYZZTCQMLLOBMOSEGBOZTRIBCXPHMIKSRVVQWRYALFFWNDUJMUBWHCHGJJVWOUTCPASKHFEVTZEVTOIICPPUNOIJTWSJZXSZXKPELCLNXNQOKFL");
    msg.description.assign("SLIIOLUMKBEWQRJPNMBRIDMPAIALZAJOESRKTCHRTVKGDBCDAELFKSJVTRFJYGYNKMNJLJFFQBFEYWXLJOPGVXKTYZFDPCZSXYYFPNONSESDBUHLZQHBAVSWPRPEPMCMZIFYSVUYRCIHVEBBTBAQANOHCMIXDEOQKLWKZOQCTLYHNUVUERQWUTEQXJZFDGQLAZNOHXW");
    msg.reference_frame = 44U;
    msg.leader_bank_lim = 0.316604978883;
    msg.leader_speed_min = 0.442948856112;
    msg.leader_speed_max = 0.387255199205;
    msg.leader_alt_min = 0.184311083014;
    msg.leader_alt_max = 0.650748024303;
    msg.pos_sim_err_lim = 0.850239377007;
    msg.pos_sim_err_wrn = 0.784380679536;
    msg.pos_sim_err_timeout = 34433U;
    msg.converg_max = 0.00316139722041;
    msg.converg_timeout = 56377U;
    msg.comms_timeout = 15522U;
    msg.turb_lim = 0.984316692633;
    msg.custom.assign("XVZKJXZHLIQHLPNIWMFPNICFSFOFRTEWPQGBEUGELFDCRZMQJBEJFWRGYYSZJQUBCGUOHHXIGADVBEXCIADCNKAQNYEKNWLZEWBSOCKPHDPFBNPVZWGYIXQVMOMCMVWLVTFTXNLPTIYDPCZHRJQBUHOJZ");

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
    msg.setTimeStamp(0.15492024461);
    msg.setSource(33601U);
    msg.setSourceEntity(59U);
    msg.setDestination(39947U);
    msg.setDestinationEntity(21U);
    msg.formation_name.assign("MMKSSWITXACSNTHIQRMXENXGXCMILGSWUNWLJWYUWRHBARLNTWNGYGAIVZENKHDKRQQSPSROVFOAEUXMORGLMGXYBWBPCEPVESLEKVJBZZCQJJAICZVORUDDHIOYPPPYFSXXCDAJGYPZUGKETRJGNTVEDNWQTDCBIAQSEFHEKQQWDZCQBROXUZJCHJUHMDBIZTBAYCUVFUYDNWPFFHJPXKHBYAKBRQMKU");
    msg.type = 37U;
    msg.op = 89U;
    msg.group_name.assign("SPSQPRNVDSOLPRIWJFXCXWWXAYASXHZZMGKOHXLUQEBNCWGDJZYKAJFETVIGTXBELFHXCPUIBHMMGIFYYTKFXDCKSDJUMPZOUITPVCRGOVGQFYAAOVGVTKNHALQUBRREYSRLTVLOJBMNKZXVTUKQCFMRGPHHZYUPAFWJADFTYIWIWJPOZDDNDAQVQJBD");
    msg.plan_id.assign("IRVGUVDHCTXDNIMEEGGTCKGRLJFITXLRZHQBAEIFYBDKKMYISINPVBCXJBOGJKARAGXVENQYDUNQCPCWFIQSJOCYPGSXT");
    msg.description.assign("CGMGJVAOFMAFPYVT");
    msg.reference_frame = 190U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 6860U;
    tmp_msg_0.off_x = 0.117208637955;
    tmp_msg_0.off_y = 0.102592353924;
    tmp_msg_0.off_z = 0.54069372722;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.80932593858;
    msg.leader_speed_min = 0.55051871606;
    msg.leader_speed_max = 0.98259480839;
    msg.leader_alt_min = 0.519582358107;
    msg.leader_alt_max = 0.550891666542;
    msg.pos_sim_err_lim = 0.0828462907408;
    msg.pos_sim_err_wrn = 0.301112574639;
    msg.pos_sim_err_timeout = 35406U;
    msg.converg_max = 0.488229273928;
    msg.converg_timeout = 19108U;
    msg.comms_timeout = 60565U;
    msg.turb_lim = 0.700740174653;
    msg.custom.assign("DNHIQXJPMVASKJMJONKRSKWKWZERALPUYMFNSQMNBRNBJWDRCBXWWSOTOOKFYDZIZAYGWBIYDVUPDSGFJBHXAIWUNABSOIOFMR");

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
    msg.setTimeStamp(0.525965158141);
    msg.setSource(25716U);
    msg.setSourceEntity(195U);
    msg.setDestination(32536U);
    msg.setDestinationEntity(210U);
    msg.formation_name.assign("YCASVGHJFKABFEMEWGQCJUHEOKWZSRDAYONHYHMRTLVPJMBEIZKTZVYOTTMXZ");
    msg.type = 235U;
    msg.op = 59U;
    msg.group_name.assign("CGWPGDIOSLETOESZMKXEYLJKNQOIHKUWNCHZOAOAQTDITIMNJSMBALZANAHVOSOPYWGLFMMYUGFFW");
    msg.plan_id.assign("PXTUGQQWWSYMZVGPEQEDXKFSDNMROBZCGDFSDJHMEBQZOKTUTNRGWULIWAKAOH");
    msg.description.assign("XFEKZWKURLHTKYVCVANURAFPPQNYKSUQFZGXMTJMVZUNJKNCHTEZXYNFBIOVDDIOAXBJIATPGBSLOBTKKLDIZEXTBN");
    msg.reference_frame = 72U;
    msg.leader_bank_lim = 0.0300336409443;
    msg.leader_speed_min = 0.125701814946;
    msg.leader_speed_max = 0.855786880145;
    msg.leader_alt_min = 0.191964049221;
    msg.leader_alt_max = 0.220886331993;
    msg.pos_sim_err_lim = 0.528184168499;
    msg.pos_sim_err_wrn = 0.317756860734;
    msg.pos_sim_err_timeout = 15615U;
    msg.converg_max = 0.122403965334;
    msg.converg_timeout = 46387U;
    msg.comms_timeout = 58969U;
    msg.turb_lim = 0.284965214243;
    msg.custom.assign("NWEDRCLOBLZIDNMXQLYZVTFPXUUFIMAJXKQBKPHQQBCDWGSLEPGFTAYMAWDTKNYCJKSBHJMXNSJCAMDLXWWVIWCRIJHUPDTILWZEVYPMQQNGFFCQLZOZRZJVNFRKMUAEPAOVTQSPMGERSKDXZURROOTEAHNASXAUOXUGUTBHTOLDTY");

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
    msg.setTimeStamp(0.749992654216);
    msg.setSource(26726U);
    msg.setSourceEntity(195U);
    msg.setDestination(12412U);
    msg.setDestinationEntity(236U);
    msg.timeout = 56412U;
    msg.lat = 0.613667110619;
    msg.lon = 0.360035853316;
    msg.z = 0.388267471692;
    msg.z_units = 16U;
    msg.speed = 0.16522986494;
    msg.speed_units = 25U;
    msg.custom.assign("NDAZRWPQTNEUETEPIXJDINZOAESAEKSFTIWGNKNRFZHYHRYZMIVECPUHDQNBBSIGLRZSXVFLIMOLCQCASHVKMSQHHLVDGJYRWPPWDRKQLGRJNJQVFKQSGXWSMCN");

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
    msg.setTimeStamp(0.406905018768);
    msg.setSource(36796U);
    msg.setSourceEntity(6U);
    msg.setDestination(18507U);
    msg.setDestinationEntity(43U);
    msg.timeout = 29318U;
    msg.lat = 0.261140405803;
    msg.lon = 0.616509189218;
    msg.z = 0.825728773874;
    msg.z_units = 42U;
    msg.speed = 0.800932483477;
    msg.speed_units = 206U;
    msg.custom.assign("CGSLTYLSTTBJIAZBDTBRGPUIFAVKCJSBRFOVLZSFJMOMJHTUWVVTIPKRFNLMBAIVLOHLBWWCOPDJPMDGMAKRXZTWNYASQDCCRIGAEVFYIHFKCFZZQQUOQIDENHFGWUEQSIULTXSXWEMAIONVQYEHNNQKWQBJRYMBEOGVWALPIDEGEJRYDYXBYXJVDSSCXDZYXJUQUPHNOXKQHOZUPPFKHXNRXUAMHNUHGMWZRTEGNLKZWLCGFKYKBPATMOVZJC");

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
    msg.setTimeStamp(0.211304207624);
    msg.setSource(40571U);
    msg.setSourceEntity(171U);
    msg.setDestination(35376U);
    msg.setDestinationEntity(207U);
    msg.timeout = 53788U;
    msg.lat = 0.215276607932;
    msg.lon = 0.136239623145;
    msg.z = 0.141291099291;
    msg.z_units = 133U;
    msg.speed = 0.504794997658;
    msg.speed_units = 10U;
    msg.custom.assign("CDSREASZWPVMLMGRGIXENWYUHISLXBJIYGPIAOPVTIFJUQRWXEYCBTARBECAVADUKHYKOQPEVWCDTNRRIRETCVSQHVNGODWKHAKFFLCOVFCEZXZ");

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
    msg.setTimeStamp(0.949951166605);
    msg.setSource(53466U);
    msg.setSourceEntity(241U);
    msg.setDestination(49791U);
    msg.setDestinationEntity(229U);
    msg.timeout = 44037U;
    msg.lat = 0.344337281846;
    msg.lon = 0.996458644848;
    msg.z = 0.490173867898;
    msg.z_units = 17U;
    msg.speed = 0.0652088847716;
    msg.speed_units = 147U;
    msg.custom.assign("SSVZQGOQLRKYCTUYPRCVGFEUGGXMHBFLUPOPMCOUCHTKWULXWBBKYWNGYSNHDYDCFHXPFXINVKZBAUJODASDXFTVOTJOHJDIVSETKGTCLPPQJDLHHIXNAMBDOYGHOZVHBTGWNNSHFRUYBJENXMVZTUUEDCDLFAKFYOROPRVNPEZRZAXKXIAFZXSZJIEAAKEIGPPWIWEMMZCIAVTBWLBRMIUKCJRNLTRKMZQSWBMMEYFJLGQCQVDAJ");

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
    msg.setTimeStamp(0.158863331925);
    msg.setSource(55426U);
    msg.setSourceEntity(93U);
    msg.setDestination(54895U);
    msg.setDestinationEntity(11U);
    msg.timeout = 14961U;
    msg.lat = 0.233383958842;
    msg.lon = 0.798803315469;
    msg.z = 0.179654283083;
    msg.z_units = 89U;
    msg.speed = 0.371301678093;
    msg.speed_units = 84U;
    msg.custom.assign("HKWNRLYGXMGYHBDBJHERJJPGSRIOICSFOMQYOZKDIKTBLDIKLYEJZKBJLAWPAEOTSOQCPRNVCDIDTTMBNSOZPLTWKUPEMLBRKOJNJRTAVRYCXWJNYMWGWPNMGLCZAEEYSWXJDT");

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
    msg.setTimeStamp(0.260323033578);
    msg.setSource(63471U);
    msg.setSourceEntity(235U);
    msg.setDestination(46886U);
    msg.setDestinationEntity(33U);
    msg.timeout = 62238U;
    msg.lat = 0.0018536527935;
    msg.lon = 0.250889214607;
    msg.z = 0.0725991085009;
    msg.z_units = 177U;
    msg.speed = 0.0903113769877;
    msg.speed_units = 144U;
    msg.custom.assign("IDFGZWRZHBLZGFULOMTLFQJXVPYZGWVDWLPECMEBBNNJEVNJJWWCAVTVVSSOMHFMGBDFWGGLQTINBYTPQTKOVDADJSHJYRCEUZWQNCQNVXXTPKHBSLQKFKYOQFPURAZA");

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
    msg.setTimeStamp(0.780229784587);
    msg.setSource(24694U);
    msg.setSourceEntity(154U);
    msg.setDestination(25001U);
    msg.setDestinationEntity(176U);
    msg.arrival_time = 0.092792489578;
    msg.lat = 0.224807013222;
    msg.lon = 0.661303014974;
    msg.z = 0.439723985647;
    msg.z_units = 213U;
    msg.travel_z = 0.61190438665;
    msg.travel_z_units = 215U;
    msg.delayed = 206U;

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
    msg.setTimeStamp(0.752489630153);
    msg.setSource(20856U);
    msg.setSourceEntity(81U);
    msg.setDestination(26184U);
    msg.setDestinationEntity(163U);
    msg.arrival_time = 0.800073168095;
    msg.lat = 0.750845331363;
    msg.lon = 0.783167521263;
    msg.z = 0.983718838833;
    msg.z_units = 152U;
    msg.travel_z = 0.18589989374;
    msg.travel_z_units = 148U;
    msg.delayed = 106U;

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
    msg.setTimeStamp(0.739391683994);
    msg.setSource(48611U);
    msg.setSourceEntity(54U);
    msg.setDestination(19977U);
    msg.setDestinationEntity(159U);
    msg.arrival_time = 0.0280224812581;
    msg.lat = 0.590389123087;
    msg.lon = 0.0692215073285;
    msg.z = 0.52679760495;
    msg.z_units = 221U;
    msg.travel_z = 0.420065593555;
    msg.travel_z_units = 242U;
    msg.delayed = 201U;

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
    msg.setTimeStamp(0.529542445638);
    msg.setSource(32333U);
    msg.setSourceEntity(198U);
    msg.setDestination(52083U);
    msg.setDestinationEntity(232U);
    msg.lat = 0.993447237463;
    msg.lon = 0.696005851333;
    msg.z = 0.324990942262;
    msg.z_units = 74U;
    msg.speed = 0.602658236709;
    msg.speed_units = 203U;
    msg.bearing = 0.766374253897;
    msg.cross_angle = 0.134349283939;
    msg.width = 0.120735265884;
    msg.length = 0.280514174917;
    msg.coff = 231U;
    msg.angaperture = 0.594439316858;
    msg.range = 38364U;
    msg.overlap = 131U;
    msg.flags = 167U;
    msg.custom.assign("IKLPSZNAWJMMSEXWQDTTUMFWXBMKLUVVNOAETJDOXDPZIYHQYMYTKAVKLKQBWQNEHNPHENTUCJEYGKOPIGZFMOOYCHSR");

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
    msg.setTimeStamp(0.432097422547);
    msg.setSource(43379U);
    msg.setSourceEntity(24U);
    msg.setDestination(37671U);
    msg.setDestinationEntity(244U);
    msg.lat = 0.312647875343;
    msg.lon = 0.0915202608372;
    msg.z = 0.659684955701;
    msg.z_units = 130U;
    msg.speed = 0.224168307213;
    msg.speed_units = 207U;
    msg.bearing = 0.642461329143;
    msg.cross_angle = 0.948467863177;
    msg.width = 0.416100144153;
    msg.length = 0.993594013215;
    msg.coff = 209U;
    msg.angaperture = 0.849484582776;
    msg.range = 51156U;
    msg.overlap = 101U;
    msg.flags = 230U;
    msg.custom.assign("KJSEFHRSAZVIRCBLSWHPUEZNUNOGIAHITFWFNLMETYZZAZDXGAMCBBURXZTQVCELLXPEAXNADFSBFXBFUUDJOLRBSZCGEXYTRGVQLXKYTMWJUPSDSIHRWFZMNKCINQUUBMYCVMQTJDBIRFYQJONUCEJRCKXVYTJHSINCEBPGHVZAJFOMVDHIIMDOOREXGKWYLKWHFAKN");

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
    msg.setTimeStamp(0.035693477634);
    msg.setSource(59808U);
    msg.setSourceEntity(98U);
    msg.setDestination(50330U);
    msg.setDestinationEntity(225U);
    msg.lat = 0.947995530117;
    msg.lon = 0.101580738702;
    msg.z = 0.459170032448;
    msg.z_units = 172U;
    msg.speed = 0.0859629372669;
    msg.speed_units = 81U;
    msg.bearing = 0.249659465513;
    msg.cross_angle = 0.807902471328;
    msg.width = 0.958446671042;
    msg.length = 0.282862123393;
    msg.coff = 7U;
    msg.angaperture = 0.336053208438;
    msg.range = 64712U;
    msg.overlap = 221U;
    msg.flags = 209U;
    msg.custom.assign("LWTQBRJIPMGLZYVEOIGGFYZZWCMA");

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
    msg.setTimeStamp(0.406769067672);
    msg.setSource(46234U);
    msg.setSourceEntity(149U);
    msg.setDestination(31720U);
    msg.setDestinationEntity(156U);
    msg.timeout = 3117U;
    msg.lat = 0.250551717233;
    msg.lon = 0.412850542477;
    msg.z = 0.525233025393;
    msg.z_units = 187U;
    msg.speed = 0.323893129431;
    msg.speed_units = 26U;
    msg.syringe0 = 221U;
    msg.syringe1 = 115U;
    msg.syringe2 = 69U;
    msg.custom.assign("VDOUPJIFHERGDJHKWQETQMBRLGUDPASZPOCXCOMTVMUAGVXDTJIWHIQAUZXPTADURVEPMABOIETCFPLPSCXUEWBRYYWSOMCIKCZLRFOTGJGQKCZINASZUUNBZPNLVMRKAIMTJTZSOVHWUYBSHJWFLKBFNALXNYHGYMYBJFNOJGWIWSKKKGXQEHENBHQLWMKFERDZFLXQFI");

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
    msg.setTimeStamp(0.970143534631);
    msg.setSource(43674U);
    msg.setSourceEntity(159U);
    msg.setDestination(33560U);
    msg.setDestinationEntity(48U);
    msg.timeout = 9842U;
    msg.lat = 0.925482044661;
    msg.lon = 0.0663918802517;
    msg.z = 0.835824999398;
    msg.z_units = 242U;
    msg.speed = 0.820333783826;
    msg.speed_units = 178U;
    msg.syringe0 = 159U;
    msg.syringe1 = 0U;
    msg.syringe2 = 163U;
    msg.custom.assign("BVMDUCMMRKYNZEZXVSRZFWBRCTETIYHKALZCABTJQYVNZISHPYVJLWTLGWJMYVPLHVCZQKIQOPWYDABTSXZEXEIKFMPEPPTQCFKXHBIGQGJPWPAWEFIKOBQJDVUGUOHQDRXOTXXZSASSPWUMFQTQGYUILRERDVKCSTGGUJIMLZINSDUFLZXDWURFLVNABNAKRHLJYKOHODEBAKMUERMOU");

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
    msg.setTimeStamp(0.772751290194);
    msg.setSource(36411U);
    msg.setSourceEntity(66U);
    msg.setDestination(40467U);
    msg.setDestinationEntity(179U);
    msg.timeout = 41160U;
    msg.lat = 0.0631747989068;
    msg.lon = 0.857784672218;
    msg.z = 0.925970951712;
    msg.z_units = 48U;
    msg.speed = 0.124602371549;
    msg.speed_units = 109U;
    msg.syringe0 = 112U;
    msg.syringe1 = 14U;
    msg.syringe2 = 87U;
    msg.custom.assign("VRPBSYJAGCHYYNLFVFEVAKVRNRCGXBLQPWVUXGMQTOXZGINHKFQHSFGCSXSXRQQBNRTJBVLBDWPIDBTZCILCLAAGNQCHHSUWKZYNTJDETKYMNIHWOXVWKMYGGQZI");

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
    msg.setTimeStamp(0.89884499538);
    msg.setSource(8485U);
    msg.setSourceEntity(96U);
    msg.setDestination(7087U);
    msg.setDestinationEntity(250U);

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
    msg.setTimeStamp(0.0526116847537);
    msg.setSource(21298U);
    msg.setSourceEntity(0U);
    msg.setDestination(65466U);
    msg.setDestinationEntity(14U);

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
    msg.setTimeStamp(0.775978336306);
    msg.setSource(20955U);
    msg.setSourceEntity(84U);
    msg.setDestination(32234U);
    msg.setDestinationEntity(223U);

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
    msg.setTimeStamp(0.0331074230056);
    msg.setSource(4434U);
    msg.setSourceEntity(69U);
    msg.setDestination(2305U);
    msg.setDestinationEntity(22U);
    msg.lat = 0.46898340749;
    msg.lon = 0.739868700179;
    msg.z = 0.0978445255723;
    msg.z_units = 174U;
    msg.speed = 0.770841659575;
    msg.speed_units = 46U;
    msg.takeoff_pitch = 0.11222359841;
    msg.custom.assign("GHCWHRABUKNZARIICIMSJMJZIZMIWETW");

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
    msg.setTimeStamp(0.729931641216);
    msg.setSource(34223U);
    msg.setSourceEntity(136U);
    msg.setDestination(41154U);
    msg.setDestinationEntity(63U);
    msg.lat = 0.89268783528;
    msg.lon = 0.910428266517;
    msg.z = 0.1390364878;
    msg.z_units = 86U;
    msg.speed = 0.374570326705;
    msg.speed_units = 177U;
    msg.takeoff_pitch = 0.198333373389;
    msg.custom.assign("BMWRCNCQVLNSEKXCZNTWWMXZSPSRQNTRIXGKNASIVMDWWHOSQKTMENTDWIDULDPPCUAYXHLQFYCITIIAKFMDCMJUXWEHLRRLAOYRLMJLEIPECFIVCVKJFGOIODFXUXVKFTHOOGZRZLDOBVMJBJVQGKOTRBGVATMJUI");

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
    msg.setTimeStamp(0.426283185109);
    msg.setSource(35744U);
    msg.setSourceEntity(135U);
    msg.setDestination(1901U);
    msg.setDestinationEntity(74U);
    msg.lat = 0.304651628277;
    msg.lon = 0.206021253645;
    msg.z = 0.544580265798;
    msg.z_units = 234U;
    msg.speed = 0.50663913123;
    msg.speed_units = 65U;
    msg.takeoff_pitch = 0.269361935489;
    msg.custom.assign("RXPNXARTQWULOLSVYXCSQHQGMGUMFEDJWTOICYKBQQXJEJSUYNUYNKYOSRPZTDQHJPPHFDIVPIZOHUZFUOHMMNNSDJIEDAFUAICDCEDAGBXHXGLVENLGIMCYMWLMQBKVHWYZTIBAWKKUDERIBS");

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
    msg.setTimeStamp(0.838277251332);
    msg.setSource(38704U);
    msg.setSourceEntity(185U);
    msg.setDestination(52952U);
    msg.setDestinationEntity(82U);
    msg.lat = 0.504574755939;
    msg.lon = 0.986636173864;
    msg.z = 0.0941183032682;
    msg.z_units = 43U;
    msg.speed = 0.335862889101;
    msg.speed_units = 104U;
    msg.abort_z = 0.748814934215;
    msg.bearing = 0.905803989351;
    msg.glide_slope = 46U;
    msg.glide_slope_alt = 0.738683159104;
    msg.custom.assign("XCWGPNNHZRAMEUMVFLOZCJEOTKYKBNNSKGZHLTQSUIXFHBLSPZUHORJRYSFJWJHERWPPYFHDDBNLWQJT");

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
    msg.setTimeStamp(0.231621125297);
    msg.setSource(24270U);
    msg.setSourceEntity(35U);
    msg.setDestination(1010U);
    msg.setDestinationEntity(59U);
    msg.lat = 0.714088501763;
    msg.lon = 0.278260238031;
    msg.z = 0.972658496032;
    msg.z_units = 104U;
    msg.speed = 0.141749322739;
    msg.speed_units = 134U;
    msg.abort_z = 0.649480567408;
    msg.bearing = 0.415168369187;
    msg.glide_slope = 35U;
    msg.glide_slope_alt = 0.572620823745;
    msg.custom.assign("CFJHEZWVCRUSZGNRXCUNQWASVYNMGILWBMZAZXMBMRNOVJPCHTKQDIUAASUAYNUCDVQHFDOWCLMZHPIAWJXMKUWKEIMDZXHOHEXDRWPLVFOSPBESRMBPJQGPKKOJFEETP");

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
    msg.setTimeStamp(0.0182087832933);
    msg.setSource(20195U);
    msg.setSourceEntity(211U);
    msg.setDestination(7158U);
    msg.setDestinationEntity(45U);
    msg.lat = 0.442643106826;
    msg.lon = 0.947079950661;
    msg.z = 0.374436697813;
    msg.z_units = 71U;
    msg.speed = 0.241993446711;
    msg.speed_units = 115U;
    msg.abort_z = 0.107234107869;
    msg.bearing = 0.477041515875;
    msg.glide_slope = 191U;
    msg.glide_slope_alt = 0.662405491257;
    msg.custom.assign("AIPGWLBBVLAEAUSFENPRWMNSECHWIORVSJTUHCOCJCTUPREKJFPXPQJAOKNJVSOTXHSZXELJKKORKTDWDD");

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
    msg.setTimeStamp(0.193405737196);
    msg.setSource(10494U);
    msg.setSourceEntity(219U);
    msg.setDestination(44673U);
    msg.setDestinationEntity(163U);
    msg.lat = 0.013111456825;
    msg.lon = 0.20905685649;
    msg.speed = 0.160057550449;
    msg.speed_units = 61U;
    msg.limits = 110U;
    msg.max_depth = 0.471573283627;
    msg.min_alt = 0.385922460519;
    msg.time_limit = 0.075255363115;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.494676960495;
    tmp_msg_0.lon = 0.1756571418;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("DZBJSHSNLUULXXJJQSAQLRVHPBFBVNQGKCDXJPYYWAQXNBACCCGKAKJZKNXZMHUDFTOVBLHZYOYZKZWCQIQEUFERDNMWRCKHFFTGUTPRPSIRHMLMESREQBRZCOGRLWIYHWGUOYVMSGPYQTPEETDCUDAJSNNPIXIYEOQXLPJ");
    msg.custom.assign("OMSRLJGNCVCNSMCHKRMIOWVJRXAIFWCTZOFSOPCGIGLSKVKJFELUIQIIQKRMZTWJTDRZPEGPRUYABNZTYLJDCHWDXESPVQWGPEGEEMDTPFCFUFBPNAVDNTPCMADMMOAIAAHTNMGONBYBLDTSUWBXTED");

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
    msg.setTimeStamp(0.407611146716);
    msg.setSource(57695U);
    msg.setSourceEntity(43U);
    msg.setDestination(7814U);
    msg.setDestinationEntity(64U);
    msg.lat = 0.355949004906;
    msg.lon = 0.168489208781;
    msg.speed = 0.0703901941179;
    msg.speed_units = 139U;
    msg.limits = 96U;
    msg.max_depth = 0.803394943192;
    msg.min_alt = 0.617797582278;
    msg.time_limit = 0.80640387305;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.174868676756;
    tmp_msg_0.lon = 0.837072094349;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("JFPVEPONFIBGGRQBZPGFOLIKNIFCWXUQARZTCTYOAOZBJMVQKPULOMHOXQYJTDNDHAFGOVYCTDVJDZHVGXMRNMSPRJIVZEBUDSYCIMWBNODIRENKIYWJAKWLRWTSSXXHWANCFADXQWYWAMEXJOERJZJK");
    msg.custom.assign("WZRDPAWVKODNVMOUQCQBNXAJRGCQQMAXVKQWNYXUNEVPMVDXKKAZTPONYINQFSPPTMKJOOCVZUJFLFAD");

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
    msg.setTimeStamp(0.748357913224);
    msg.setSource(33566U);
    msg.setSourceEntity(177U);
    msg.setDestination(30746U);
    msg.setDestinationEntity(75U);
    msg.lat = 0.129597097241;
    msg.lon = 0.926902589517;
    msg.speed = 0.234145384058;
    msg.speed_units = 57U;
    msg.limits = 143U;
    msg.max_depth = 0.51209038404;
    msg.min_alt = 0.37953436528;
    msg.time_limit = 0.528466297543;
    msg.controller.assign("VARWDTGHBUOGUXEXTHFFJWYACGRIEKRGOSZEDWFMCQJBPTYZOPTCRBDSLZNUGHVVDGMRKAYYIOUKVMQFNKGVVIEGXESCHWSBICWXZYPSGKPYSJTJPQBTJJLLLZEFLOQKEQXMHNCXCMOADRAOHRORQTKSYQEANPXUIUNVJBJSBNKANINFWPXFFF");
    msg.custom.assign("WKYEWGDVRTOTWHSNIPXMHNGMFBWXPLEKEHPMGHNTARKYRQLNWKYVALGXHQUZYBAOHUZSDZHSSGSURNAZJCBZVASMBOJDVIIXOYXXOCLXYCFKBMZCADHNCBTDEWDPPYKWLPLTJBZWDZJULFKQMDFQWYGALFXOTUG");

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
    msg.setTimeStamp(0.938258891817);
    msg.setSource(55719U);
    msg.setSourceEntity(111U);
    msg.setDestination(29132U);
    msg.setDestinationEntity(27U);
    msg.target.assign("BOFUVNOUTNQMVYFRJQRYIBKESOTJDALXPAKYINRCWVUJLCSWAGUJMGCCCWAPWCYGSMGXZOOLOLCUJBYTHTLGVTNQQQFDVRSTDTMKJPHEOXNHOJWAFPFIZXMFCINDLBHZWXXEKPUFELBUHMABVOUDSSTWTEKLAGOGNQKCSIVGKYVIJGZDNCEDEIQPBXRZBLXURXMIDKEENMAEMBYYD");
    msg.max_speed = 0.0698451045556;
    msg.speed_units = 15U;
    msg.lat = 0.909407564387;
    msg.lon = 0.494367766005;
    msg.z = 0.412033404087;
    msg.z_units = 4U;
    msg.custom.assign("NOCTFKOECFSQQRWNPNPHBENUAAYGMYTZKSXHQPXBJKKAUAJMYHXXZVSHMPMOCXIRABNWENHLFIJGPDQBAOYEYLXNDJDIICDGVKGVMHIBOFXYLE");

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
    msg.setTimeStamp(0.243486359063);
    msg.setSource(11259U);
    msg.setSourceEntity(140U);
    msg.setDestination(9421U);
    msg.setDestinationEntity(227U);
    msg.target.assign("INORUMVPBETLAHXYPKWHDJZPNLACMJONNFCLIEXRVUUJCWSDBNDMAQXFJNTQGWDSYWNQESFXFFYZPVCNFGKKWCDTMSSFQYCTBHHEMKBGVLRMRHROEMRYOAUUIBAVZXPUGLSGUBGOBIKJKPEAXDIRUWQYDTG");
    msg.max_speed = 0.754679788684;
    msg.speed_units = 174U;
    msg.lat = 0.396204871401;
    msg.lon = 0.478124064008;
    msg.z = 0.382299529235;
    msg.z_units = 37U;
    msg.custom.assign("AZLAOSONRXDSICWZUZTENQBIIWBOFWZFTKNIOIIJQSYTBTKQAUCLZKNYRJPWSXFWWXWZAKGGNXSVAAHCCBUMNPSYJXEOLUNRPHKEMYTYRVXRHKTRTQHEOLDDRHMBGUVGDCEDJELIBHVMVVAHSEPZNGJYYPHDPFJEMOLOIFHCACFDGLROTLJBPLWTQKDCZ");

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
    msg.setTimeStamp(0.150153527837);
    msg.setSource(54963U);
    msg.setSourceEntity(60U);
    msg.setDestination(33678U);
    msg.setDestinationEntity(155U);
    msg.target.assign("MAZORHTSIMRNDVADTTGEUJYYUNATCJPPSUSWXXRHQEVQGKJDHFLRIFXMJNGKIVFGODMJJZZHYEWBZLVRYCLOWOJXBLBHECWKOFJTQVAWVSBREVGVTZSKMBQHHHIUAKMHLQBIDOTZVU");
    msg.max_speed = 0.124520812563;
    msg.speed_units = 172U;
    msg.lat = 0.0472940954926;
    msg.lon = 0.0547320336018;
    msg.z = 0.892520624162;
    msg.z_units = 60U;
    msg.custom.assign("NFSIAJMSBRKNZMFADHQLUPQORUZKJSDOPBXTPCSZVNEHIAEYJSYIZGLHRNWGCBEKMJUHAZMXRPBPDWIZFW");

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
    msg.setTimeStamp(0.345157744683);
    msg.setSource(193U);
    msg.setSourceEntity(115U);
    msg.setDestination(16022U);
    msg.setDestinationEntity(1U);
    msg.timeout = 65523U;
    msg.lat = 0.290503675509;
    msg.lon = 0.598649940204;
    msg.speed = 0.69956797336;
    msg.speed_units = 187U;
    msg.custom.assign("AGUIGHTXFAKHHXLQSDOSVTSEXTXCEBBXJUABYZLOHGYPONTNMVCSYUXDNHURAPKEKIYWTJKTNUDJZXGYELQTFZGVFOMSRWJBWJSWAQMITWPDJFWRKXSRTKRWMHCDFJQRMFBETLCHQVGDVCPOVCQYKIBLOKNXAMSCLQCFGVKIZUPRZBUQQLZJPLZEOYWYCEMJKGVDIIDNADWPUGIBHOOIMMHIVEBUNCOPGEZVNAERRZDPXPFRLNUYMQNSHBWF");

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
    msg.setTimeStamp(0.714526611568);
    msg.setSource(53838U);
    msg.setSourceEntity(106U);
    msg.setDestination(9879U);
    msg.setDestinationEntity(197U);
    msg.timeout = 15427U;
    msg.lat = 0.132236433227;
    msg.lon = 0.491612699439;
    msg.speed = 0.00159276639561;
    msg.speed_units = 235U;
    msg.custom.assign("EJILEMRYZOMVYQPLEHVFBBZNCVOKFOLTAKSFYDFJYONVXTMSCJHOFCQWRGUOVBIRECCRWSHLASXIMARCZLJVHDGPSMTELAXXHKNFQOSTMQAV");

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
    msg.setTimeStamp(0.905984130242);
    msg.setSource(5786U);
    msg.setSourceEntity(127U);
    msg.setDestination(45099U);
    msg.setDestinationEntity(63U);
    msg.timeout = 61653U;
    msg.lat = 0.489564695414;
    msg.lon = 0.866190027644;
    msg.speed = 0.508956599883;
    msg.speed_units = 67U;
    msg.custom.assign("CXCUNYOGJSIWBKZMAJBIMSDEETPYQBLUYNMVBQAZMXTCIHATOYVLHTXNQUFYVCPLHCJAQRMHJEDJYZPXHKCLIJAWNOKRVUAGRIWZUJIXSAZWYTREPPKVOLILALKSZPKMGOGQRDFFBVSQVDF");

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
    msg.setTimeStamp(0.127467904778);
    msg.setSource(23657U);
    msg.setSourceEntity(170U);
    msg.setDestination(5675U);
    msg.setDestinationEntity(18U);
    msg.lat = 0.310708417601;
    msg.lon = 0.757828461287;
    msg.z = 0.463915103474;
    msg.z_units = 244U;
    msg.radius = 0.906309035997;
    msg.duration = 15508U;
    msg.speed = 0.168445453261;
    msg.speed_units = 59U;
    msg.popup_period = 6716U;
    msg.popup_duration = 56093U;
    msg.flags = 168U;
    msg.custom.assign("JDRKRIRTFVBWTLBBFVAWTNJJRZDGHAXWFVARSGDTCWEMZOPNUIVQLQSXEPKWXZICMJHQRPNFGCACDMUNIEERLUKHWQKHCGBEDMS");

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
    msg.setTimeStamp(0.777133525652);
    msg.setSource(22061U);
    msg.setSourceEntity(79U);
    msg.setDestination(51721U);
    msg.setDestinationEntity(80U);
    msg.lat = 0.794688812472;
    msg.lon = 0.210206751509;
    msg.z = 0.979732267458;
    msg.z_units = 70U;
    msg.radius = 0.280197391504;
    msg.duration = 40143U;
    msg.speed = 0.0966092895416;
    msg.speed_units = 51U;
    msg.popup_period = 27902U;
    msg.popup_duration = 17417U;
    msg.flags = 126U;
    msg.custom.assign("VBIAJOTOPZECDJNSOLWFFXGKWWYHMVOTDCGXCTRGSAZWDHQBPIVYXQUJFXEHPUSUWSJYTMMGTIROCZKMDUUYPHXHYZOSDAPHAGQECKRJPKQABLXMSUBBYZYUGIIHURLYZXNQNCGGFBUNXRWVRZBQEAUFQKLLTJCOGOVAEKTNRFSMXKOJZWSFEDLVVEDH");

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
    msg.setTimeStamp(0.0778709323346);
    msg.setSource(340U);
    msg.setSourceEntity(153U);
    msg.setDestination(35426U);
    msg.setDestinationEntity(0U);
    msg.lat = 0.808144545419;
    msg.lon = 0.840938126743;
    msg.z = 0.789638818369;
    msg.z_units = 176U;
    msg.radius = 0.889362824127;
    msg.duration = 6225U;
    msg.speed = 0.819422746882;
    msg.speed_units = 41U;
    msg.popup_period = 20500U;
    msg.popup_duration = 5253U;
    msg.flags = 145U;
    msg.custom.assign("ICKIHUDHETJIMPIWWSRBGCQRWBVJZATOYMGVTDJURTYXCDFOVZNBVEKHXQAHCWZSIFMANAUMUEFOTJSTNTESUKWYEDUMNOOGNGIYXZURHRXISBRQERCMNLBWDYJDFBBDOFBONDIRPJPXQZFBLFQYJLXNRMOSAHZUJMPDPPJBSFWHKWYVZLGAATYEGALFKOAVHGMGENPCKRHUCAZGCKTHNSLVXDXKZQELLFYLTSPVEWGVUWVK");

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
    msg.setTimeStamp(0.750140703374);
    msg.setSource(53891U);
    msg.setSourceEntity(126U);
    msg.setDestination(51594U);
    msg.setDestinationEntity(165U);
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("YRUVKMDIMYBMEOITZKHFAXIRGTFUKGIJSJDKGZGVAMYUMYIQDIBFVNHMGEQWPSCXCLCZXIPYJVQTVSTXCJZRNNJYEPXARSTPCOOWHNZAOTBHDWSXSFSXGWJXGSHDNQFUABDPZGQDJLATLSRRFVSTWNIWVAQ");
    IMC::YoYo tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeout = 47877U;
    tmp_tmp_msg_0_0.lat = 0.802441662776;
    tmp_tmp_msg_0_0.lon = 0.714578487557;
    tmp_tmp_msg_0_0.z = 0.149664532259;
    tmp_tmp_msg_0_0.z_units = 180U;
    tmp_tmp_msg_0_0.amplitude = 0.443807504308;
    tmp_tmp_msg_0_0.pitch = 0.972791689256;
    tmp_tmp_msg_0_0.speed = 0.573754671782;
    tmp_tmp_msg_0_0.speed_units = 78U;
    tmp_tmp_msg_0_0.custom.assign("FCQUYOEFSGSAAGXTTRNDCRDORBVXSOHIDOGEIOWAFPOMLTSZYWRSCMRMUFBWVFSDYCFFUKNDRZWXUEEUMNGJ");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::StationKeepingExtended tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.lat = 0.532025270509;
    tmp_tmp_msg_0_1.lon = 0.612734581783;
    tmp_tmp_msg_0_1.z = 0.790499355474;
    tmp_tmp_msg_0_1.z_units = 20U;
    tmp_tmp_msg_0_1.radius = 0.460113451908;
    tmp_tmp_msg_0_1.duration = 34391U;
    tmp_tmp_msg_0_1.speed = 0.468670803184;
    tmp_tmp_msg_0_1.speed_units = 148U;
    tmp_tmp_msg_0_1.popup_period = 52136U;
    tmp_tmp_msg_0_1.popup_duration = 25619U;
    tmp_tmp_msg_0_1.flags = 29U;
    tmp_tmp_msg_0_1.custom.assign("KKYDSMYGCIKOCMAYPIIZOJVXUDRNFHWDILYYAEWFXNGZERCXGXHRAIYAWKBTQDWAEPTIIOCOSUXJDIBHPRBYQBGNOTJZZERFCLUQIPWXLVRXOPHGJWTXIZLQSOJAN");
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
    msg.setTimeStamp(0.940731027317);
    msg.setSource(56547U);
    msg.setSourceEntity(175U);
    msg.setDestination(37389U);
    msg.setDestinationEntity(80U);
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("CALOQMSYJEYRPRYWHNVNEKIRJTEZASJTUGCSPJUNGLXKLKOSRSPJQIGWTCVPSBVCPQALZVROHXHBDMINRAPHFIOGPNGLUNBTZWLRMDVAYS");
    IMC::ScheduledGoto tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.arrival_time = 0.768183253153;
    tmp_tmp_msg_0_0.lat = 0.0620190972781;
    tmp_tmp_msg_0_0.lon = 0.718517019065;
    tmp_tmp_msg_0_0.z = 0.770939388273;
    tmp_tmp_msg_0_0.z_units = 44U;
    tmp_tmp_msg_0_0.travel_z = 0.34739224764;
    tmp_tmp_msg_0_0.travel_z_units = 109U;
    tmp_tmp_msg_0_0.delayed = 122U;
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::ADCPBeam tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.vel = 0.587370378057;
    tmp_tmp_msg_0_1.amp = 0.854605578785;
    tmp_tmp_msg_0_1.cor = 5U;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    IMC::DevDataText tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.value.assign("FNMPTBJSEGMHLFHZPAGBZMJBKFSMYEIDYAXQOKAIQVCAVMKBJRTYZNDRJYXFLHOTPGIQQMLXJDBAGAYGKF");
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
    msg.setTimeStamp(0.0980348018581);
    msg.setSource(32463U);
    msg.setSourceEntity(10U);
    msg.setDestination(62979U);
    msg.setDestinationEntity(98U);
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("SMAOKATULSCJUMDORMMONSAYOHAQIKPYJLHKHWVWGJZKYXYZSROLXASNUWEIKZUEJBNTFTNVFXBZEBPWCDXKQITXEJPDOCPGGVPBXAAZMDVEUUZNRJZFKVUGGYEUNLVJSFHYVLQPE");
    IMC::IdleManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.duration = 23274U;
    tmp_tmp_msg_0_0.custom.assign("UIOHWPGKLWOHCWCVCNTTVEEIWTANGMARSHLYFFSOLXKNFNWZYLGNOBCEWROHGFSKZIJXABSQIUBJHOJPBWTLZULDNBYUBFVPQPSETEIOKZOSZUYVHLQFPKQSMRNKUXQQXMRIMFQUKYGYBAYSMWAHIRCMJKDKRVBJNRGEBVLZCMHQZPJEXOBCGAHPJDQXYTXJPPXLRXQTZUAIMWAHEYDSNDDFGLWZAJCEVDPSKJETDVGM");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::CommsRelay tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.lat = 0.211024265542;
    tmp_tmp_msg_0_1.lon = 0.484578224201;
    tmp_tmp_msg_0_1.speed = 0.983711757959;
    tmp_tmp_msg_0_1.speed_units = 157U;
    tmp_tmp_msg_0_1.duration = 35462U;
    tmp_tmp_msg_0_1.sys_a = 8370U;
    tmp_tmp_msg_0_1.sys_b = 40290U;
    tmp_tmp_msg_0_1.move_threshold = 0.177229846953;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
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
    msg.setTimeStamp(0.0757410346567);
    msg.setSource(47844U);
    msg.setSourceEntity(28U);
    msg.setDestination(11450U);
    msg.setDestinationEntity(164U);
    msg.timeout = 3339U;
    msg.lat = 0.21130995801;
    msg.lon = 0.0877906647211;
    msg.z = 0.99143970626;
    msg.z_units = 124U;
    msg.speed = 0.334248356491;
    msg.speed_units = 203U;
    msg.bearing = 0.831528951941;
    msg.width = 0.0543576582544;
    msg.direction = 41U;
    msg.custom.assign("GBANHDUGUGTBULMTQMNWIRZBKPHAIGY");

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
    msg.setTimeStamp(0.946908731812);
    msg.setSource(52591U);
    msg.setSourceEntity(183U);
    msg.setDestination(17191U);
    msg.setDestinationEntity(100U);
    msg.timeout = 22081U;
    msg.lat = 0.761977614091;
    msg.lon = 0.444102800029;
    msg.z = 0.649133711271;
    msg.z_units = 139U;
    msg.speed = 0.688973367867;
    msg.speed_units = 94U;
    msg.bearing = 0.577152596474;
    msg.width = 0.672308820864;
    msg.direction = 24U;
    msg.custom.assign("BAJWFBTUHANANSDZXYPJMKIAGFYQIMGGPKWJXOKHQWGNZZUITDXGILYMRRCXVQMQYSMRKYPDUCLXECZFDTNWZXOPYSXLEXQAEJOFCCAHLEVUZCSKZQQGMNPBVFWEICUSOBIMLRKNLWEYFHETYIJZGWCVOQFGPRFLTGLRBDVDZHHLPMRBDSIDTAT");

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
    msg.setTimeStamp(0.393403406963);
    msg.setSource(37118U);
    msg.setSourceEntity(21U);
    msg.setDestination(46815U);
    msg.setDestinationEntity(130U);
    msg.timeout = 504U;
    msg.lat = 0.814330600382;
    msg.lon = 0.709614725311;
    msg.z = 0.695657713504;
    msg.z_units = 152U;
    msg.speed = 0.109429582752;
    msg.speed_units = 13U;
    msg.bearing = 0.133176585832;
    msg.width = 0.433889460177;
    msg.direction = 127U;
    msg.custom.assign("CYFGHMIVXJOSZULVQVMJYMDRRXCLTHYAMOIWZZXBPCBLLISWNUBBQRLRDWDABZIYDDEONVPEMASGGDATTMVORYFNNJOJSNSKQXIDUQESVHEXUDQWLVKGHLMFXIVCYXCALQDLHKTFKGECAXXAHGRTYCEHFUTISKPYAZGVBWNNOBWFEHRCTZCRDWITIOPETOJJGWWJVSHANQUPTNRQPUESJCMBFOBWPA");

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
    msg.setTimeStamp(0.553505502909);
    msg.setSource(1509U);
    msg.setSourceEntity(213U);
    msg.setDestination(55629U);
    msg.setDestinationEntity(245U);
    msg.op_mode = 104U;
    msg.error_count = 75U;
    msg.error_ents.assign("KPNNPXNOCJQPYUSRBSJACUEHBOLXZGMMECDMBLYKTXIXPYEXFETVBIFUBJOGQGCNCOQZLNOVCMKVEOJDFGHSPANYQUTYXDSKRXIEUFZKQWJXFDRAXTNPSWKTDZJRZDXELGTHHEAUTFFVGLRYHWRJQPATMCQYOCDCAVAIBVMEBYBHRUWLDGKJIUJVZOGZWUKYWDSIBMLIAWHAHLWPWZLMRMKBRTGCZSFNMIWYFTHQNLVOVIQIJFKSVHZOQEGDAP");
    msg.maneuver_type = 37721U;
    msg.maneuver_stime = 0.944910469838;
    msg.maneuver_eta = 44093U;
    msg.control_loops = 2474560384U;
    msg.flags = 242U;
    msg.last_error.assign("ZHWHOEAAYQJZYFFTCUIVWWCGTWGBSJXNETSCSNDJXHKIEDDQMRXRBVLVJBFZJG");
    msg.last_error_time = 0.430114092985;

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
    msg.setTimeStamp(0.334515839225);
    msg.setSource(32774U);
    msg.setSourceEntity(4U);
    msg.setDestination(55449U);
    msg.setDestinationEntity(247U);
    msg.op_mode = 22U;
    msg.error_count = 59U;
    msg.error_ents.assign("RBZQMYLHHPDXMDLLAFRPHKGOXJWBJKJBEIBPXKPSNVLKTVQULYTZKYAWBQOPEPJCENZZKXCATUKMLITNYWREOQMMTBCOCNXUZJOBNUAGDVWIWQBYPCRVNXFSIFNNYIOSYHHRA");
    msg.maneuver_type = 13784U;
    msg.maneuver_stime = 0.959095554677;
    msg.maneuver_eta = 38649U;
    msg.control_loops = 1263708103U;
    msg.flags = 161U;
    msg.last_error.assign("DUEGQTOJUPIKKJIDLCPMCRWBTTQHFRLYXEFXMWKJMDOJJMEVQCWHBMZNVASKRQYHYLUSQYBKWAGANXXAPUNRIFPDNIBRARLVMXDHNUPOJISCJNKXIUSGDOACBITZTWLNZPEZRSFALXFUPAXESRGSZGODTHYHFIXW");
    msg.last_error_time = 0.115486542074;

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
    msg.setTimeStamp(0.623599299426);
    msg.setSource(50779U);
    msg.setSourceEntity(33U);
    msg.setDestination(6023U);
    msg.setDestinationEntity(179U);
    msg.op_mode = 164U;
    msg.error_count = 118U;
    msg.error_ents.assign("WNXFNSEDYCRPUNOIIQEXPRCVWVVHBTTSGAELGTZTRAYXIRHCQQQBNJBDXYRPGOXOCKYZNJFANNOBHRXDBMCLFIWEMVEQWBKKAQYUBKOIOHSZGJEAIMLVPEPMDITGUYEBATKPOAL");
    msg.maneuver_type = 64403U;
    msg.maneuver_stime = 0.187970551171;
    msg.maneuver_eta = 20271U;
    msg.control_loops = 101393867U;
    msg.flags = 100U;
    msg.last_error.assign("RPRYRWKGHUSNAXEJGDAY");
    msg.last_error_time = 0.675131165578;

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
    msg.setTimeStamp(0.077902367463);
    msg.setSource(53639U);
    msg.setSourceEntity(73U);
    msg.setDestination(56113U);
    msg.setDestinationEntity(133U);
    msg.type = 28U;
    msg.request_id = 21759U;
    msg.command = 201U;
    IMC::Takeoff tmp_msg_0;
    tmp_msg_0.lat = 0.332041710749;
    tmp_msg_0.lon = 0.09262163602;
    tmp_msg_0.z = 0.888448305925;
    tmp_msg_0.z_units = 6U;
    tmp_msg_0.speed = 0.530887625789;
    tmp_msg_0.speed_units = 158U;
    tmp_msg_0.takeoff_pitch = 0.349811895029;
    tmp_msg_0.custom.assign("FVYXNUPKTXIMHCTJFGKRGJBOVGBQQWGAACOTYYLPMQCIXEHEHENBSCAYXYSPA");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 24008U;
    msg.info.assign("VNYEPYVLNAGFKGKXUGPKXRGKVEFKHKAOJUCTEWJILQHCOQREKPYGUAFQMMNPYNPV");

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
    msg.setTimeStamp(0.694296345729);
    msg.setSource(12405U);
    msg.setSourceEntity(47U);
    msg.setDestination(21626U);
    msg.setDestinationEntity(157U);
    msg.type = 191U;
    msg.request_id = 28679U;
    msg.command = 110U;
    IMC::CustomManeuver tmp_msg_0;
    tmp_msg_0.timeout = 42225U;
    tmp_msg_0.name.assign("GUPOUVYMUIGJTDJCAIBBNP");
    tmp_msg_0.custom.assign("GHWZDNYEZBKNHMUNEFVPWTXJCDBCXYDEQCRODLRMYWHUVFKTNGEBWIFAZNZGBSFATOJWCUUQDCDSKRAVQQUQAKRKIJMOBJKQENLKUZHGSGLDHPHHSSIJUIMJXLOWGEVFWSVADOPKFXQCGLLIYYGXMSCEPJOVUBYPSOKPFVACTQUO");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 40609U;
    msg.info.assign("IKTJFFTFVDOHMXMMAMIIDEVNLXTLYLVULZNLSHSYPHMDSRRCQOYQWVJXGRZIDATHHPKVRBAVYBBVU");

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
    msg.setTimeStamp(0.461026632);
    msg.setSource(46613U);
    msg.setSourceEntity(251U);
    msg.setDestination(36689U);
    msg.setDestinationEntity(223U);
    msg.type = 14U;
    msg.request_id = 5302U;
    msg.command = 14U;
    IMC::StationKeeping tmp_msg_0;
    tmp_msg_0.lat = 0.719814942126;
    tmp_msg_0.lon = 0.309281401005;
    tmp_msg_0.z = 0.305865558174;
    tmp_msg_0.z_units = 147U;
    tmp_msg_0.radius = 0.475508953487;
    tmp_msg_0.duration = 18771U;
    tmp_msg_0.speed = 0.717366776704;
    tmp_msg_0.speed_units = 131U;
    tmp_msg_0.popup_period = 9563U;
    tmp_msg_0.popup_duration = 43349U;
    tmp_msg_0.flags = 135U;
    tmp_msg_0.custom.assign("EDTNZPAUWSOAPHZSQWHXDKKDTFSCYRPQBWAZGXKZEHIVY");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 56893U;
    msg.info.assign("PTLVPQOAHDQPTJKWOWHDXJXHFTKNGDDCWUYLCVYNGOONIUBSPTFRMUSAKUXYNNHIQZOIKRRIZYQLGZAKXUKTPYMQNTBQUDCJCETPVSVHCZHKFYESHSVMZRRPGFJGI");

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
    msg.setTimeStamp(0.05981230589);
    msg.setSource(14115U);
    msg.setSourceEntity(5U);
    msg.setDestination(58139U);
    msg.setDestinationEntity(48U);
    msg.command = 117U;
    msg.entities.assign("SUIHPVBYICONQGGOEUPBZTCEPQRWDLGFLTBJIKJULJEOKVRIEKNJHBQOULMEMIYCPTWICWPYXCPOWWMGYNWPDGQNFXKJXBKKFASLRFKEVDFMCAXLVNSMAFTHXHFHUXWTKUSZDRQWZDHLWELVYCHJVNHQITUAJIINZXEZNAOEJOYRSAZXAFZROZQKDVMYBAVM");

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
    msg.setTimeStamp(0.124704126868);
    msg.setSource(63313U);
    msg.setSourceEntity(34U);
    msg.setDestination(4172U);
    msg.setDestinationEntity(175U);
    msg.command = 100U;
    msg.entities.assign("LYAWLHLQDCAMEQHVXCEPBRVWZXNGLNTUSWSSXJIUOKTNDUUBRMLXDGUNHVDLRCNCKDMOAVAJCFIBITVVMAIWFSUJDMWKRJZFZGLONJAFYRYXGDVEQEUYYCDTFPPZWSUCTHERHPAFLZYICEESWFJXYBKBZQLJFPRHQCGPGVOBDHBHISGFETOKFWASHGXSUYQNJTPZWHBQIBQKAVLSRMQGYTAYKNVOBMIWNEZIPIMMKXT");

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
    msg.setTimeStamp(0.338654199105);
    msg.setSource(42015U);
    msg.setSourceEntity(28U);
    msg.setDestination(18676U);
    msg.setDestinationEntity(75U);
    msg.command = 125U;
    msg.entities.assign("SQNDOLRIFN");

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
    msg.setTimeStamp(0.464310845531);
    msg.setSource(16012U);
    msg.setSourceEntity(221U);
    msg.setDestination(11519U);
    msg.setDestinationEntity(231U);
    msg.mcount = 228U;
    msg.mnames.assign("VUVUEOLDPLRCZJAGEEEWZEFPGHJDFAWKBBCUYIOLUGFIMHIRDJQKMXRRAYO");
    msg.ecount = 27U;
    msg.enames.assign("AQBBLCSYPQUHOIKGAHVZKQCTVHUUBIMEJQMXYNWSIELXVJN");
    msg.ccount = 71U;
    msg.cnames.assign("ZMDBJBHJSZZDUAGYNNOKILYMFUSOBXFEMGHKTNKMVKFKUWFLBVVXJSSFJBBBHMJTLCHPONVNSGOOEETASIASRBS");
    msg.last_error.assign("PUAXFGIYPUEETTLNDKODIMWLVUPJQJHUJHHIFCMKRMWFSXOZDRWZVYQSIVEYKQNYTELRLFOVQGOCAYYRJDCLASYVABSSPZPRKNJKTJAQXEPBNACKTOFBODZIGIBZRKXAFIZWUBDCWMCKRCZORGCIXNFISHQHNWNFMSELWQUNGSVETALPQMLGSUQKYWFWGJAJELMEHTUTMXOVHDWDMBVTLHPIKVPBGXHBGBT");
    msg.last_error_time = 0.263215064562;

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
    msg.setTimeStamp(0.633674455595);
    msg.setSource(51272U);
    msg.setSourceEntity(63U);
    msg.setDestination(41624U);
    msg.setDestinationEntity(163U);
    msg.mcount = 89U;
    msg.mnames.assign("ODWMKGJHKQAZPOJZQVHCVFURZJBHPLKAJJLCEFMMJYGIRRUXXBCTFYGNGSBBQVFEGKTLDCNDGYWMICJXNTKRZPIAYCITHBVXIFWUSVMQDASDTWQNUKLVNTUAWWQQKLXRJGLIYNLRMXFFHZFEEJLKVAMIUBSOWOPVLYVYYXJOOBTAPYANETPM");
    msg.ecount = 48U;
    msg.enames.assign("SSMXNCNMIYGINUTSWYUPAPJPGNVKDFSQJWKHAXFZWVJZCAEDNMYQBYRFTVEBLBGRIKGRYYHBYOAMLAHPLFWTOGMFRREZTYGVHXNSPEVOJCBYZVBBUWSXGCKHFPZRUCJROUXUOK");
    msg.ccount = 197U;
    msg.cnames.assign("WASBJHEZKTIINTQFNQRWFKPZIYEP");
    msg.last_error.assign("SPVKZNDYUPRIRLRDGMZOUBGYFHSSYQEPPWWKFCADCXTOXQEYFYXDLADYRLLNLHGFANNZQIRAIOURXOMXSMFUVFHGRKYTIDFOHLNGRAUHYRNXJIJJHJNEWCZWUVJCKSVW");
    msg.last_error_time = 0.59811280518;

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
    msg.setTimeStamp(0.729655952717);
    msg.setSource(45249U);
    msg.setSourceEntity(55U);
    msg.setDestination(15040U);
    msg.setDestinationEntity(219U);
    msg.mcount = 182U;
    msg.mnames.assign("MVAHEPNYXOI");
    msg.ecount = 91U;
    msg.enames.assign("PZBOIDNOXXDLDGHGUKGYAQOWCHKUTJJKNFRZYHWIERHVLDGLJCEFZWVRAWVNGOBBLXSBYRFBUPFSYTJEEHJPDMEOOBPQDZIMIGACVHQPDKXBXQOSHEZ");
    msg.ccount = 70U;
    msg.cnames.assign("KUAPLTQDZTLBDJPBAUIDGHCQIRZUYZBTVZMCERWGIKIVHKGWSPWDBNHMMLJPJYRONERIXTQLVZYXLNSGCOMOGFRNUFJZIYAUYVKKFTFBQCVXFKAUOKPRSYGQCAYRRBUODQASUBTFHMWMPTQJBLWVWGFKIFCEGHZGZNJCWRJJSOCCAXDYHMLOHOVAHDTYQJPEDKVQMMQNSEWPFRZIETNNXYZLEXBNCXOVSJPEDAW");
    msg.last_error.assign("ZVFSZYWKYBQBRDNFQIOMHRFMRUBCHVAAUNTAMVRQCJCKEKQYTJKGLKSNIOZDDLGDNXHUIHWYFJIFLPHCYV");
    msg.last_error_time = 0.398450519867;

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
    msg.setTimeStamp(0.649685326881);
    msg.setSource(18038U);
    msg.setSourceEntity(12U);
    msg.setDestination(23412U);
    msg.setDestinationEntity(90U);
    msg.mask = 132U;
    msg.max_depth = 0.836558840841;
    msg.min_altitude = 0.627183794674;
    msg.max_altitude = 0.766710911376;
    msg.min_speed = 0.563719772123;
    msg.max_speed = 0.412878128399;
    msg.max_vrate = 0.00742126570436;
    msg.lat = 0.306548702041;
    msg.lon = 0.0688195662587;
    msg.orientation = 0.221989141268;
    msg.width = 0.346658373523;
    msg.length = 0.500922886921;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.171005258684;
    tmp_msg_0.lon = 0.471399729155;
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
    msg.setTimeStamp(0.246599035843);
    msg.setSource(54076U);
    msg.setSourceEntity(160U);
    msg.setDestination(51725U);
    msg.setDestinationEntity(211U);
    msg.mask = 230U;
    msg.max_depth = 0.797738303006;
    msg.min_altitude = 0.0247441247953;
    msg.max_altitude = 0.0945809469573;
    msg.min_speed = 0.641266874098;
    msg.max_speed = 0.936699031444;
    msg.max_vrate = 0.302671360605;
    msg.lat = 0.111536041845;
    msg.lon = 0.687673597799;
    msg.orientation = 0.422617325794;
    msg.width = 0.30778206782;
    msg.length = 0.247885197994;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.599170562529;
    tmp_msg_0.lon = 0.327977958548;
    msg.vertices.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.898884962011);
    msg.setSource(52885U);
    msg.setSourceEntity(106U);
    msg.setDestination(470U);
    msg.setDestinationEntity(60U);
    msg.mask = 120U;
    msg.max_depth = 0.081845830192;
    msg.min_altitude = 0.758029538378;
    msg.max_altitude = 0.56072227162;
    msg.min_speed = 0.384026836136;
    msg.max_speed = 0.0392079882103;
    msg.max_vrate = 0.227985960936;
    msg.lat = 0.494898707597;
    msg.lon = 0.97704628362;
    msg.orientation = 0.625733111185;
    msg.width = 0.109344963296;
    msg.length = 0.111538817141;

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
    msg.setTimeStamp(0.927386936207);
    msg.setSource(33676U);
    msg.setSourceEntity(143U);
    msg.setDestination(61067U);
    msg.setDestinationEntity(192U);

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
    msg.setTimeStamp(0.0758805966782);
    msg.setSource(15490U);
    msg.setSourceEntity(110U);
    msg.setDestination(63519U);
    msg.setDestinationEntity(206U);

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
    msg.setTimeStamp(0.906195568681);
    msg.setSource(41691U);
    msg.setSourceEntity(132U);
    msg.setDestination(52359U);
    msg.setDestinationEntity(44U);

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
    msg.setTimeStamp(0.594363085528);
    msg.setSource(26209U);
    msg.setSourceEntity(193U);
    msg.setDestination(7958U);
    msg.setDestinationEntity(63U);
    msg.duration = 7706U;

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
    msg.setTimeStamp(0.771464820671);
    msg.setSource(64261U);
    msg.setSourceEntity(178U);
    msg.setDestination(29127U);
    msg.setDestinationEntity(1U);
    msg.duration = 46679U;

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
    msg.setTimeStamp(0.3638237523);
    msg.setSource(44482U);
    msg.setSourceEntity(26U);
    msg.setDestination(48751U);
    msg.setDestinationEntity(5U);
    msg.duration = 65207U;

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
    msg.setTimeStamp(0.564519784376);
    msg.setSource(32587U);
    msg.setSourceEntity(167U);
    msg.setDestination(7228U);
    msg.setDestinationEntity(43U);
    msg.enable = 106U;
    msg.mask = 337406229U;
    msg.scope_ref = 1390548188U;

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
    msg.setTimeStamp(0.927078718414);
    msg.setSource(61499U);
    msg.setSourceEntity(142U);
    msg.setDestination(48902U);
    msg.setDestinationEntity(29U);
    msg.enable = 136U;
    msg.mask = 2969144249U;
    msg.scope_ref = 1665084805U;

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
    msg.setTimeStamp(0.856692144431);
    msg.setSource(49305U);
    msg.setSourceEntity(130U);
    msg.setDestination(64105U);
    msg.setDestinationEntity(231U);
    msg.enable = 159U;
    msg.mask = 688358702U;
    msg.scope_ref = 2875606325U;

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
    msg.setTimeStamp(0.855793437852);
    msg.setSource(28396U);
    msg.setSourceEntity(17U);
    msg.setDestination(24569U);
    msg.setDestinationEntity(130U);
    msg.medium = 70U;

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
    msg.setTimeStamp(0.985801476416);
    msg.setSource(33815U);
    msg.setSourceEntity(179U);
    msg.setDestination(57572U);
    msg.setDestinationEntity(27U);
    msg.medium = 157U;

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
    msg.setTimeStamp(0.0766379102389);
    msg.setSource(9870U);
    msg.setSourceEntity(18U);
    msg.setDestination(14179U);
    msg.setDestinationEntity(34U);
    msg.medium = 40U;

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
    msg.setTimeStamp(0.844770769646);
    msg.setSource(6282U);
    msg.setSourceEntity(135U);
    msg.setDestination(21974U);
    msg.setDestinationEntity(252U);
    msg.value = 0.241732717631;
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
    msg.setTimeStamp(0.688925349169);
    msg.setSource(28402U);
    msg.setSourceEntity(238U);
    msg.setDestination(52409U);
    msg.setDestinationEntity(227U);
    msg.value = 0.859944039561;
    msg.type = 147U;

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
    msg.setTimeStamp(0.713604490829);
    msg.setSource(32751U);
    msg.setSourceEntity(122U);
    msg.setDestination(10267U);
    msg.setDestinationEntity(91U);
    msg.value = 0.432557635468;
    msg.type = 59U;

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
    msg.setTimeStamp(0.0516665142299);
    msg.setSource(20872U);
    msg.setSourceEntity(254U);
    msg.setDestination(474U);
    msg.setDestinationEntity(52U);
    msg.possimerr = 0.100196080121;
    msg.converg = 0.936944795773;
    msg.turbulence = 0.52129031015;
    msg.possimmon = 229U;
    msg.commmon = 203U;
    msg.convergmon = 133U;

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
    msg.setTimeStamp(0.730052071718);
    msg.setSource(34214U);
    msg.setSourceEntity(253U);
    msg.setDestination(8540U);
    msg.setDestinationEntity(152U);
    msg.possimerr = 0.132192260831;
    msg.converg = 0.231434148549;
    msg.turbulence = 0.560231675033;
    msg.possimmon = 156U;
    msg.commmon = 123U;
    msg.convergmon = 59U;

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
    msg.setTimeStamp(0.873347568465);
    msg.setSource(35443U);
    msg.setSourceEntity(38U);
    msg.setDestination(15051U);
    msg.setDestinationEntity(48U);
    msg.possimerr = 0.41243495921;
    msg.converg = 0.345272546256;
    msg.turbulence = 0.853021832537;
    msg.possimmon = 252U;
    msg.commmon = 10U;
    msg.convergmon = 160U;

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
    msg.setTimeStamp(0.260106439789);
    msg.setSource(10212U);
    msg.setSourceEntity(150U);
    msg.setDestination(22256U);
    msg.setDestinationEntity(185U);
    msg.autonomy = 84U;
    msg.mode.assign("ALKFLFFGISNRPBMNKKJSXTMUFIMNUIPZDOCGHXDPBXZTFQZWVOQVVUHLYIOQNZRDJLBBVQMGDZUUBXJJAPXGYPYRHWJELVTEXNJYMPFPWZWJQUHDURYUFHCNDANBT");

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
    msg.setTimeStamp(0.688348728226);
    msg.setSource(11074U);
    msg.setSourceEntity(248U);
    msg.setDestination(1668U);
    msg.setDestinationEntity(51U);
    msg.autonomy = 231U;
    msg.mode.assign("XCIKIOMJERDJUVNLCFTFEPEVUGNIMBWHFXQJFQSYWEKKGXOPGLZTMFCCHRQUZYFHXOAHGHGSUKSAMWSOOZYCJTYZKRKWFHUVNAAKYYRPIPPHLXBMINXTQSJDTUSRTDFVWIHTVDMRDOLEIMYILJJUBYQNXAGKZFMEPQRLMEDBGAK");

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
    msg.setTimeStamp(0.620769266686);
    msg.setSource(34197U);
    msg.setSourceEntity(61U);
    msg.setDestination(3179U);
    msg.setDestinationEntity(227U);
    msg.autonomy = 82U;
    msg.mode.assign("CXEPOUARPYPUIKZWGAJZIFRFTFUEKOWMVOTZUDKGONRRITRLTXBOZCRBQWEKCKVAFLGXHYFHM");

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
    msg.setTimeStamp(0.786987962404);
    msg.setSource(23283U);
    msg.setSourceEntity(72U);
    msg.setDestination(4190U);
    msg.setDestinationEntity(225U);
    msg.type = 209U;
    msg.op = 88U;
    msg.possimerr = 0.832414212742;
    msg.converg = 0.945982584424;
    msg.turbulence = 0.428101778712;
    msg.possimmon = 79U;
    msg.commmon = 161U;
    msg.convergmon = 132U;

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
    msg.setTimeStamp(0.644576935784);
    msg.setSource(49922U);
    msg.setSourceEntity(242U);
    msg.setDestination(39723U);
    msg.setDestinationEntity(226U);
    msg.type = 58U;
    msg.op = 186U;
    msg.possimerr = 0.799595387583;
    msg.converg = 0.206073477001;
    msg.turbulence = 0.495660385069;
    msg.possimmon = 246U;
    msg.commmon = 196U;
    msg.convergmon = 178U;

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
    msg.setTimeStamp(0.177732311976);
    msg.setSource(64156U);
    msg.setSourceEntity(191U);
    msg.setDestination(5259U);
    msg.setDestinationEntity(89U);
    msg.type = 62U;
    msg.op = 209U;
    msg.possimerr = 0.636696767849;
    msg.converg = 0.640104685442;
    msg.turbulence = 0.633753418507;
    msg.possimmon = 36U;
    msg.commmon = 58U;
    msg.convergmon = 62U;

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
    msg.setTimeStamp(0.103695296956);
    msg.setSource(35173U);
    msg.setSourceEntity(253U);
    msg.setDestination(30430U);
    msg.setDestinationEntity(236U);
    msg.op = 44U;
    msg.comm_interface = 23U;
    msg.period = 51364U;
    msg.sys_dst.assign("XDPHLTFMPNBWRDRQWJJNJOCOOKUCXPPVSEYQMVUHKEUTWXSZXXKSILZFIBLPLMQOABMUGNSOTFCHQHBLMTATOPKTUIGZNARIKGPSQZOXCRULOLUDDSCSSGJPOVIDVVRNNDUPSCCEYIEUWYEKPBWYDGHBRRGWKNFTFHZAAYHIKUJQFWDTNZXHZVYCHVRBMFKMEGJDZEARBABKRLEILEFYXZMQJEVMFYYVAVWJSTQYOH");

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
    msg.setTimeStamp(0.135277200937);
    msg.setSource(14152U);
    msg.setSourceEntity(134U);
    msg.setDestination(6907U);
    msg.setDestinationEntity(237U);
    msg.op = 12U;
    msg.comm_interface = 247U;
    msg.period = 58326U;
    msg.sys_dst.assign("QMBEPJGTDKXOIJLGHQFJMGWUKLJBDCGRHLYFUIHVJTXDANGOUKESFREIQBZAKCZONJJFWVPGYMCNBRAGYYKJCXTZFBBKEEANCQPWFLRFONDOBUVPYISACVXIQUATVWMLCISLJXCLVPGMMWJZAXBMSKAGVROIPNYPQAUSIVITONSIOMTOTYWLGFALZRXYMQMKPWPHXUBCXNTEE");

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
    msg.setTimeStamp(0.515720878457);
    msg.setSource(7254U);
    msg.setSourceEntity(125U);
    msg.setDestination(54891U);
    msg.setDestinationEntity(127U);
    msg.op = 210U;
    msg.comm_interface = 88U;
    msg.period = 14869U;
    msg.sys_dst.assign("IHYEMJNKWMBTHLKJTADLCKLGUAIVHFASFQHZGOCSSZUGTIZRDUYJHEAVXDBWPLINSUXIDZVFOW");

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
    msg.setTimeStamp(0.391248406842);
    msg.setSource(3863U);
    msg.setSourceEntity(80U);
    msg.setDestination(49120U);
    msg.setDestinationEntity(64U);
    msg.stime = 1435575534U;
    msg.latitude = 0.304943777645;
    msg.longitude = 0.476526270808;
    msg.altitude = 35698U;
    msg.depth = 57516U;
    msg.heading = 65333U;
    msg.speed = 13665;
    msg.fuel = -52;
    msg.exec_state = 72;
    msg.plan_checksum = 59716U;

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
    msg.setTimeStamp(0.0363348340926);
    msg.setSource(36077U);
    msg.setSourceEntity(156U);
    msg.setDestination(284U);
    msg.setDestinationEntity(223U);
    msg.stime = 1968434259U;
    msg.latitude = 0.759602247121;
    msg.longitude = 0.135751809438;
    msg.altitude = 23925U;
    msg.depth = 54087U;
    msg.heading = 50494U;
    msg.speed = -26454;
    msg.fuel = 66;
    msg.exec_state = 61;
    msg.plan_checksum = 49748U;

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
    msg.setTimeStamp(0.00897529753923);
    msg.setSource(1177U);
    msg.setSourceEntity(223U);
    msg.setDestination(10684U);
    msg.setDestinationEntity(138U);
    msg.stime = 3969280245U;
    msg.latitude = 0.354921353621;
    msg.longitude = 0.791614824294;
    msg.altitude = 38213U;
    msg.depth = 49531U;
    msg.heading = 7920U;
    msg.speed = -4826;
    msg.fuel = 17;
    msg.exec_state = 36;
    msg.plan_checksum = 37219U;

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
    msg.setTimeStamp(0.658087701999);
    msg.setSource(6795U);
    msg.setSourceEntity(128U);
    msg.setDestination(8791U);
    msg.setDestinationEntity(144U);
    msg.req_id = 54780U;
    msg.comm_mean = 21U;
    msg.destination.assign("ANRKQQPKTFMXCTDZIKLWIXLVGVMTFSDEBBQBQGAVIQTPCFDHQFQDYBYGEECQCVGYVXZNYLTKHNORJYOIELZOSMMVNMMBOSRFLKPVTAVIRGBDZXNYCUYMMAJEPORPUUWIZDZHGUYNEPHAWLJ");
    msg.deadline = 0.885432616182;
    msg.range = 0.0129923185026;
    msg.data_mode = 242U;
    IMC::EntityActivationState tmp_msg_0;
    tmp_msg_0.state = 253U;
    tmp_msg_0.error.assign("SLMNIUVIBOJWMUCSBGGENATNWBAQGVYTTEJRUDIQGTRXXKUCNMKCITXRVEQFBMVZJITYPYEZCXXUMXZLYLFYTKMKKUOJZHBUNLHONVZQUSGJFTGDFBZAIRSIFMUPYRSXBEWDRJOQPAJOSMOQODYHVCLISQDVFQNHYAEBBPAKWFQWPJBXXGODPANWGSJAEHWQGCHKRPCZCULHZE");
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("IWRWRYINKFMRARULDARCIUYEFLUFHZJAFJAJZHMQAQXZWGIISVSXLJFYFGLHBQNHMSBKNHNNDCNFJGECPYWABDVVILCKBKKJXGVEFLOGQTQOQHEWISCOPLTKGPTPCNSSMIQTMUZNHG");
    const char tmp_msg_1[] = {-111, -10, 125, 60, 63, 48, -46, 41, 123, 86, -117, -72, 56, -93, -17, -42, -119, -127, -10, 55, -90, -15, 86, 120, 60, -34, -75, 31, 84, -107, 35, 69, 105, 67, -84, -19, 42, 50, 46, 124, 92, -128, -84, -10, -97};
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
    msg.setTimeStamp(0.143333249576);
    msg.setSource(40098U);
    msg.setSourceEntity(245U);
    msg.setDestination(1227U);
    msg.setDestinationEntity(172U);
    msg.req_id = 22492U;
    msg.comm_mean = 53U;
    msg.destination.assign("EHWCMHVPFYUGERNYJFSASFFWSIYEYDVHDRNVKBLIZAMZCSICPXPVWXDOEFDSUKHMURGLTUIFTLZVLGNAMJOQHIPXSQYRKXXVXRWEPRUBGGJXCVMHRUBNTEPHRALHQSSPFCGYUQLLGMOZTOVTNOWCGQNCJIXZXWABIKEJKYFNXQKLJYBUVACBQQONBTMNIJEWLPARPBNBMCDPSJWAHZDASKRGTOOMTDTVHMTFEZZJWDOWAIKF");
    msg.deadline = 0.0576360555672;
    msg.range = 0.382917768081;
    msg.data_mode = 209U;
    IMC::NavigationUncertainty tmp_msg_0;
    tmp_msg_0.x = 0.170124017667;
    tmp_msg_0.y = 0.904186367468;
    tmp_msg_0.z = 0.706246278419;
    tmp_msg_0.phi = 0.217000850387;
    tmp_msg_0.theta = 0.0745961230048;
    tmp_msg_0.psi = 0.546410751496;
    tmp_msg_0.p = 0.451495556216;
    tmp_msg_0.q = 0.521995159887;
    tmp_msg_0.r = 0.924685396348;
    tmp_msg_0.u = 0.164337655097;
    tmp_msg_0.v = 0.889325279292;
    tmp_msg_0.w = 0.559808685308;
    tmp_msg_0.bias_psi = 0.514944334414;
    tmp_msg_0.bias_r = 0.0903572496316;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("LLFGMSYULCXWDGCRUOOYEOABZYFTMCESYOBOCBZKZJUUODIMYNPREHQVTMZDLUKMXTPUHIAKLPRJANEMXIPVWPMNFGKSRVBWRGZXAHSFKRYJKLCFBQVHLREYVCNULSIPQWACSUTNIINLHXZQVWFWERBEOAYPQKEAAIMBJFNZT");
    const char tmp_msg_1[] = {16, -98, 100, -69, 88, -76, -70, 16, -82, 75, 60, 76, -69, 48, -59, -87, 104, -62, -44, 41, -24, 112, -34, 47, -45, -32, 41, 43, -1, 3, -83, -94, 51, 119, 51, -89, 90, -92, -95, 17, -7, -127, -51, -95, -66, -28, 102, 68, 9, 24, -107, 35, -120, 0, -103, -84, 44, -34, 46, 98, 10, 21, -2, -100, -3, -6, 46, -120, 123, -57, -17, 77, -55, -1, -101, -104, 118, -2, 119, -108, 39, -65, -11, 71, -80, 120, 10, -37, -83, -83, -17, -46, -3, -68, -112, 114, 108, -85, -118, -38, 41, 81, 52, 65, -47, 50, 12, 113, 41, 81, -56, -12, -121, -4, -9, 40, 43, 97, -36, 70, 31, 116, -75, 109, -14, -106, -80, -4, 116, 70, 13, 119, 72, 8, -108, -81, -113, -97, -70, -30, 74, 99, -31, 115, 101, 35, -58, 117, -123, -40, 55, 46, 16, -128, -5, 92, 21, 98, -101, -107, -124, 4, -6, -36, 49, 3, 20, -97, -39, -108, -14, -62, -55, -127, 55, -2, -109, 32, -106, 20, -117, -52, -37, 87};
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
    msg.setTimeStamp(0.791660174415);
    msg.setSource(55754U);
    msg.setSourceEntity(138U);
    msg.setDestination(2039U);
    msg.setDestinationEntity(32U);
    msg.req_id = 22974U;
    msg.comm_mean = 172U;
    msg.destination.assign("UADBPALFNPMHNHLAVENCUHQZMTYRZPAQPYSLYDYGARZPEOVFMTQJ");
    msg.deadline = 0.106296711877;
    msg.range = 0.0563866543527;
    msg.data_mode = 157U;
    IMC::FormationEval tmp_msg_0;
    tmp_msg_0.err_mean = 0.751078158613;
    tmp_msg_0.dist_min_abs = 0.608655864643;
    tmp_msg_0.dist_min_mean = 0.370030034566;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("NDELORJJNLJZWDWCQURIQNRACCQRMWDAQTWVPKIHAFUFJNPMEEIAAGXESFACLFUMAMJLKPBYFBKDHBRXLFOZORMZPZUPWXXVYQXJAVRKKSPLLVYLPIWZZFLDFUIYMSHYSOOTGOJATFOVDYYGISTJQGBBGOCSGGNTHSBRCDC");
    const char tmp_msg_1[] = {-26, 99, -19, 7, 95, 123, -3, -39, -33, -124, 30, 28, 28, 27, 13, 118, 107, 24, 62, -27, -55, -108, -114, 96, 38, 39, -3, -37, 66, 122, 3, 26, -122, 22, 124, -112, 118, -37, 87, 26, 3, -117};
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
    msg.setTimeStamp(0.721299524144);
    msg.setSource(32799U);
    msg.setSourceEntity(81U);
    msg.setDestination(15676U);
    msg.setDestinationEntity(78U);
    msg.req_id = 3341U;
    msg.status = 51U;
    msg.range = 0.631596542925;
    msg.info.assign("UDRQPQKISMLFXSYLLUTGBHGGBKZAUSTQKEKRDJVIQZLWUNIORMLSGKRTDPYALCHORMBCUQLRTHXYFEBJJK");

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
    msg.setTimeStamp(0.623397498455);
    msg.setSource(25467U);
    msg.setSourceEntity(25U);
    msg.setDestination(30178U);
    msg.setDestinationEntity(248U);
    msg.req_id = 50317U;
    msg.status = 103U;
    msg.range = 0.137828239188;
    msg.info.assign("PRMPETONEXSJHBZVBUOYFXWDDIMDNNKKPJQBGUFFSLAZCTWCNITXOFPEWIAIVMKZIKOHQ");

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
    msg.setTimeStamp(0.279907524476);
    msg.setSource(37697U);
    msg.setSourceEntity(157U);
    msg.setDestination(30267U);
    msg.setDestinationEntity(160U);
    msg.req_id = 56454U;
    msg.status = 62U;
    msg.range = 0.417892638563;
    msg.info.assign("KAMMTGJOCXWETQPKWVVXBYLJMESMZTZJMOSFOXKPQAKRANEXVPVPYOMFEAGZGWHBLGHXSILYKPCORTCZEZBHBUTPSNCJJKPGIZWHVINKDXEGWRZXXQYKMFYHMNBJUAQORVOUGILQYAHZZUUZWWELQDNOCIAEQAKBDBSRSGIDXPIGRDOJDJFLUSVRCQUBSATIYDWTLVNLJNLHTESDNDFYAKCIQYWHOFVERCVPTRRJLPHBTUNIUXGC");

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
    msg.setTimeStamp(0.744616294266);
    msg.setSource(17047U);
    msg.setSourceEntity(73U);
    msg.setDestination(37878U);
    msg.setDestinationEntity(238U);
    msg.req_id = 62617U;
    msg.destination.assign("XKPDQVQVITQGFRDCBQSTOXGQTYNRHUMSOIXBJDMZAJSCGWAOTJWFMUDPXERSBHYIBPBNFCSNPYGMEZUKSBNWBEAGNUGKHJMKNFZUZYYAMOGTQRBUWRRFZVVEXDCGFELZXUHIKIFLQAM");
    msg.timeout = 0.423690085975;
    msg.sms_text.assign("TOXBGFJTWNEKSROJDYEDAGFYNXQRDEEUJZHMIYLIQHPOABIYQEJGDQWVKPLZPIQUZMSIGXSCABXKHCTQJLCKQVSSFDNBDELTPNNAJZUYDXDXDPLXNOVZUTPUTGXNFEQPSKPYIBMJVMTHRNOVZPQZNVUAAFKGD");

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
    msg.setTimeStamp(0.4910078025);
    msg.setSource(30914U);
    msg.setSourceEntity(195U);
    msg.setDestination(56715U);
    msg.setDestinationEntity(100U);
    msg.req_id = 35449U;
    msg.destination.assign("YANSGLMPJDJQOOQMZLXIIEXUSEUCRUVCAYZILJUGDRHVTIRWPNMRHMLYGIRMFWOWUFNOMBEOGAOTNZXARJBNCSHTCOMFDBYQLLJFHYALUVSWALVRZEAHADYBHCXXKKTVSTDQCKZHTAWGDCCRIZKUPQSGLIEOQQWOBQGBOBNKZFKJGYIMMV");
    msg.timeout = 0.356890451282;
    msg.sms_text.assign("VRIPOVFMXPBQWITVFNZOXLPWQOWDICAJAMPNGXGHXNEIDYNZXYHURKAOUSYFEXVVUAIBQKJKJTSHFTJPMYYJFHORPLCBMNIMSOUTEYNCPNQYGQRMEEJQNFCKWEEVOYZXPRTUPSDAMHQCLUHHWCRZNDXO");

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
    msg.setTimeStamp(0.1641846973);
    msg.setSource(51381U);
    msg.setSourceEntity(100U);
    msg.setDestination(7708U);
    msg.setDestinationEntity(41U);
    msg.req_id = 24390U;
    msg.destination.assign("SEFLTLTPHHLINUKBNIFQCNCRYTEQCXUNMKPBRYZSXZMOCJDZAGSUKECSIXZTPURWNUYHGDFRDJDQALPOVYPWOOSNMVFHUIYTOMIWJEOMVLFGPOOIKMVVLHPPZBTEJRQJIOEAWABWX");
    msg.timeout = 0.574320733468;
    msg.sms_text.assign("DSZNPLRZZJGYKIOUWPQHFICXYIAZXIAWMMUSZWBGMTDEBERJKZHAJUTYOBWOVXJPELYTQFSOGRYSITETJLTRNRHHZGCDAQTXASKIYQRNEMLYPXBHYSPHUEXUUERSFYWXTXCK");

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
    msg.setTimeStamp(0.610416355507);
    msg.setSource(14756U);
    msg.setSourceEntity(24U);
    msg.setDestination(36510U);
    msg.setDestinationEntity(253U);
    msg.req_id = 36522U;
    msg.status = 194U;
    msg.info.assign("UCADNLQZBPLEEJIUTIIOICQNTVCFEDENZPNOKOXSHSEFCALYALYTZKXDVSDHJJUAMKOHZPGQJILWUFISDUQVYGFTWPYSM");

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
    msg.setTimeStamp(0.617558681778);
    msg.setSource(8053U);
    msg.setSourceEntity(7U);
    msg.setDestination(36440U);
    msg.setDestinationEntity(98U);
    msg.req_id = 25049U;
    msg.status = 28U;
    msg.info.assign("JCCOFZFQRTZJYFCBYIQYMDAPLWENKSJTDIITXJQCFMAKHSQUGSBBROUDQEPZIHTHMNJVZXQOPPUREVQZDAPZEPWNYGUWYTMNYXNITDSKWARRTHBAJCXLSRLKJMGQSPEMBLNZMMDHWNALVALGOOVMGXGHSENACFVOYKWRSUBDELFUHPPZGIRJNCGDHIKVLSWPXGXZL");

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
    msg.setTimeStamp(0.554932151705);
    msg.setSource(49164U);
    msg.setSourceEntity(214U);
    msg.setDestination(49919U);
    msg.setDestinationEntity(172U);
    msg.req_id = 33419U;
    msg.status = 82U;
    msg.info.assign("GNWQXYAWZQYBDISCFTQZNFROXUZWQFTCOPKIDMEGYHUSEWJMDRADJWYGLYGTHNKTPVFLPHZJDBQWWVNPIOOYWMLPZAD");

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
    msg.setTimeStamp(0.5311249192);
    msg.setSource(8991U);
    msg.setSourceEntity(204U);
    msg.setDestination(17322U);
    msg.setDestinationEntity(9U);
    msg.state = 69U;

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
    msg.setTimeStamp(0.405306890799);
    msg.setSource(42578U);
    msg.setSourceEntity(66U);
    msg.setDestination(3171U);
    msg.setDestinationEntity(48U);
    msg.state = 28U;

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
    msg.setTimeStamp(0.871895878039);
    msg.setSource(17645U);
    msg.setSourceEntity(126U);
    msg.setDestination(58394U);
    msg.setDestinationEntity(212U);
    msg.state = 142U;

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
    msg.setTimeStamp(0.810078892374);
    msg.setSource(635U);
    msg.setSourceEntity(92U);
    msg.setDestination(53640U);
    msg.setDestinationEntity(25U);
    msg.state = 224U;

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
    msg.setTimeStamp(0.251659001388);
    msg.setSource(57558U);
    msg.setSourceEntity(161U);
    msg.setDestination(35547U);
    msg.setDestinationEntity(246U);
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
    msg.setTimeStamp(0.0766201986551);
    msg.setSource(49926U);
    msg.setSourceEntity(253U);
    msg.setDestination(38214U);
    msg.setDestinationEntity(237U);
    msg.state = 238U;

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
    msg.setTimeStamp(0.093268610122);
    msg.setSource(58118U);
    msg.setSourceEntity(233U);
    msg.setDestination(26678U);
    msg.setDestinationEntity(169U);
    msg.req_id = 26798U;
    msg.destination.assign("FHUQIDZQRQYZVWGAKMZWKICKEBGPDDHPBFTYSXYPGZMLTJNLFMJJNVWQGIUNAMNZDGYLXIHBTCQNTRDRYUJDRSZJOCEKKYNKHAUINBPKBSVLGCAYWLFHUKVUHXVDOXAWEXODP");
    msg.timeout = 0.564455296925;
    IMC::IridiumMsgTx tmp_msg_0;
    tmp_msg_0.req_id = 49643U;
    tmp_msg_0.ttl = 12595U;
    tmp_msg_0.destination.assign("NHIQLKZVPZNZJQWPBASLPLQNTUZBCKEWGFORILCHSJTABDUTCRGCPU");
    const char tmp_tmp_msg_0_0[] = {113, -59, 122, -35, -67, 60, 1, -128, -108, 99, 15, 106, -128, -77, 86, -1, -51, -67, 43, -78, -48, -70, -21, 109, 30, -65, -36, 22, 19, -92, -24, 97, -121, 51, 55, 61, 27, -111, -108, 47, -32, -80, -57, 51, 45, -24, 15, 31, 78, 41, -105, -38, 89, -14, 86, 19, 70, 4, -47, 14, -43, -43, -38, -97, 69, -88, -23, 35, 59, -9, 38, -106, -56, -34, 53, 10, -43, 66, -92, -100, 68, -68, -40, 18, -69, -74, -41, 82, -41, 33, -87, -95, 108, -48, 26, 42, -42, -82, -39, 37, -117, 17, 21, 125, 3, 85, 22, -37, 64, -55, 9, -92, -45, -76, 36, 123};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.124831960264);
    msg.setSource(65350U);
    msg.setSourceEntity(99U);
    msg.setDestination(57854U);
    msg.setDestinationEntity(83U);
    msg.req_id = 34704U;
    msg.destination.assign("SPWBQHTDCOAXQWNYUHONCIWYYXBQGKWTWYEPGKCBEEBPEJTDOHRSTUBVSXZQUOMHQUVTFDZJKDEOGQZTCABUDIPJIVALIHPZWLBTSBHFLAQXCGMEXVVFRYFFCYJRFRJPYLJLMJCJMAVQXJNSVVYAJPPMXFHWK");
    msg.timeout = 0.557031408524;
    IMC::DevDataBinary tmp_msg_0;
    const char tmp_tmp_msg_0_0[] = {-121, -121, -105, 73, -92, -62, -81, -107, 33, 33, 58, -23, -68, -123, 50, -4, 120, 92, 117, -35, 102, 0, 105, -102, -106, 51, -108, -114, 104, 84, -113, 44, 58, 93, -83, 79, 85, 124, -64, 46, -43, 39, 94, 76, 101, 98, -22, -16, 12, 32, -45, 35, 45, 98, -58, -18, -115, 12, -103, -105, 84, -79, -104, 52, 76, 93, -18, -47, -101, -74, 10, 16, 123, -40, 87, 55, 15, -2, -41, -10, -45, 112, 17, 31, -122, 53, -54, -70, -27, 53, 46, -49, -5, -86, -61, -29, 72, 67, 3, 45, 25, 39, -119, -53, -34, 85, -19, 52, 60, -121, 59, 63, -122, -20, -114, 21, -44, 92, 115, 28, -33, -93, 124, -46, -15, 64, 78, 113, 94, -77, -96, -8, 59, -52, 67, 2, -113, -80, -23, -51, 69, 71, -36, -94, 115, 20, -9, -97, -120, -20, 125, -114, -121, 13, 70, -46, 113, 116, -88, 9, -108, -78, -85, 74, -23, -119, -104, -94, -6};
    tmp_msg_0.value.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.583192831138);
    msg.setSource(15613U);
    msg.setSourceEntity(222U);
    msg.setDestination(50796U);
    msg.setDestinationEntity(72U);
    msg.req_id = 51066U;
    msg.destination.assign("GFBYYFGLYPSMZFHPVZCKLNXCGTRKGXZGESAFFKDKYULYZNSXTURSVLXSQBMVAPFTZSJRNQJWHHOGEIFPDUHDWZIZOMHCYATRWRQTNLQXUJPOQDUZLVCRBEHIMIGMOAHXIUZOLPCNMKZCHGDEWBSMYJOJKWKEIEJXQLHPQTUYRVGOOVFBDW");
    msg.timeout = 0.503955376102;
    IMC::TCPStatus tmp_msg_0;
    tmp_msg_0.req_id = 57734U;
    tmp_msg_0.status = 235U;
    tmp_msg_0.info.assign("AZYNYQIRPXVIAWRJDPJJEFHQOUUXCZLQDKXWQCCUKWVDDYKHBKRXQSPNZAXJMCEYVUAQNXZYSPORZRBDNGCAICPSXEJZTTTIEHDRBOWYPEBZTOBYIMPKMKOUSWLLTSQWXMXANRUJBQGGRNATKTLFOFGEFSDAJJNEGIKZYHRGNCCMQTZHFVMIMPBYSCVEVXTODPGULDLSHHMNMWSBGFBWEIYBALVUIU");
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
    msg.setTimeStamp(0.49940976365);
    msg.setSource(4934U);
    msg.setSourceEntity(35U);
    msg.setDestination(4883U);
    msg.setDestinationEntity(206U);
    msg.req_id = 42505U;
    msg.status = 151U;
    msg.info.assign("OZCSBEIEMPDTJKJDQPRZQQSFMTOENYFYHUJSDOFJHWAFKUEUGQXECOWVXZNQNBNIWQHOZCSYUSXEDYKSFLNKMIKZIWVALBFQTNAZPREZLMLBGICEHTOTDBGGOTCAQAVISWVTRF");

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
    msg.setTimeStamp(0.526010024379);
    msg.setSource(63526U);
    msg.setSourceEntity(27U);
    msg.setDestination(32931U);
    msg.setDestinationEntity(137U);
    msg.req_id = 61772U;
    msg.status = 179U;
    msg.info.assign("XOLTPKJRZHLMNRAZHKEZYWGUDNUVCHHVPZSDRVQYUVFJTXEQEBTYSXONWAKCXLYGZPWLEXANSIMUUQRFRKAKAWUJFTBWHVHDM");

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
    msg.setTimeStamp(0.5459280222);
    msg.setSource(12883U);
    msg.setSourceEntity(37U);
    msg.setDestination(57662U);
    msg.setDestinationEntity(122U);
    msg.req_id = 25252U;
    msg.status = 225U;
    msg.info.assign("CMTLZKEUHGSCGDKQPSLYJNQZDPNFOQIRFWLRVKCOZMLKCIVMFLHTHUIQHRJRQTUQXXBKNCSSITYWIXZOGSEOREJJTKTCSPNANWMNKNASFBDOZCOUFJYRZXDAMKYLIGL");

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
    msg.setTimeStamp(0.388379227328);
    msg.setSource(4944U);
    msg.setSourceEntity(61U);
    msg.setDestination(9507U);
    msg.setDestinationEntity(244U);

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
    msg.setTimeStamp(0.213303462356);
    msg.setSource(26179U);
    msg.setSourceEntity(52U);
    msg.setDestination(31454U);
    msg.setDestinationEntity(154U);

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
    msg.setTimeStamp(0.797932322805);
    msg.setSource(29344U);
    msg.setSourceEntity(169U);
    msg.setDestination(29497U);
    msg.setDestinationEntity(179U);

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
    msg.setTimeStamp(0.115430317005);
    msg.setSource(31620U);
    msg.setSourceEntity(123U);
    msg.setDestination(39556U);
    msg.setDestinationEntity(134U);
    msg.plan_id.assign("BTVQNWHYHPNOEJWZGCIDFPQHQFXCEQHMAILJLDJXQDYVFJEDYAWNRKJEFMZTJZ");
    msg.description.assign("NYZPLQYYYBHSPICIBPTZEDHFLXYGDWWKCWNDNCASLZYDCGMTMGJKEZEHVOUBFIVDLRPPOFTBTQIMYJBXBNUMWKAMCAVNOUTRJOKKKCUCAQXDYQPXUCRBYWXDEQNKSSGQPEKSJOWUOLMTXMVOIRKQFKBZLS");
    msg.vnamespace.assign("KRDMJYHCFHEMVEZZUIZOETGPPDZLINVJRMEXFBQIRRETAXUQYKWFMPDXVCPWOHOYQSYYIIBSOQVINHOCCPKFPXLIBBZQDGHQSCVSEULDGWGNZKDYASGANOUPVPGIEQTFXUTFLCRBNEBBHVEAXTSNJKLLBQJNIHYNHGMANXWOAJUTOJLKLTSMOFKHTGWUZGRBAZRMTXV");
    msg.start_man_id.assign("RMJHOZWFUVIJZVSNSBXXERQHFHCYIPDSBETEAHUMLAPFYCAJWTRNRG");
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("HRTLZWTMHSJMGVAMZFZFZMWGNTJNRBJLNEEUEJBQITYAAYFTUHEWUBPQSOCKUWBBJNQIFEKJKRQCCDDVJAPYFLIOXRNPCGBKLSNZMESTXAREUXAOQQSDLNYUIZHZPIIZYWRRSRPKNNBLXSLTDGPKRFWXJDQCORVGAYOHIZTUMYXVGMKFCBSDESFGDUHPQXNWXGQJOVWVMOEHVDCIKYPBVWYDVTM");
    IMC::Drop tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeout = 21157U;
    tmp_tmp_msg_0_0.lat = 0.406854653938;
    tmp_tmp_msg_0_0.lon = 0.156576675746;
    tmp_tmp_msg_0_0.z = 0.6257175542;
    tmp_tmp_msg_0_0.z_units = 179U;
    tmp_tmp_msg_0_0.speed = 0.871930572089;
    tmp_tmp_msg_0_0.speed_units = 146U;
    tmp_tmp_msg_0_0.custom.assign("DMUQJAABMFKGXTZWXBVQXXDYZUWQZDROHUMBHXTDHENPMYCCZIPOFZWPARGRPWQKESGSACNJADEXSILQKMYIIGLINNUNTCIZSWTJVDAFE");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::Salinity tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.945727614096;
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_1);
    msg.maneuvers.push_back(tmp_msg_0);
    IMC::PlanTransition tmp_msg_1;
    tmp_msg_1.source_man.assign("SOOOAIDMYMEKWSTAPDQPKWLRVZNRXKNLMKUGNJZEWZSSFKTUQNGLVXIQTZTHTNWHFRGVOCENYNJEQSBIBQTMXPDGUVXRQNDZTAALYQSKYKGFQLWIZHEYPVOCNBMUSGJUFNROIHWOVEIIDYVUGVDJXYZPTMLCHROJMCEBWCAFXGEMHSLWWBKJRBFYXAJHADUQYCBJJHVZXUGXDAZIMAPEYICXJSRHTPRUDOFIOFBRWCLFH");
    tmp_msg_1.dest_man.assign("IHIXPFNUCHBYUPJYDJCYEBLYXOCAMOJHWYECOGAKJRTKPKRMFMERTEURZMVTNGVHQWBJACSZUDVFWSNILYHGPXUGCLUHGPXIVHBKNBEKJKXZHPORUQYPDNBZLOLXSLZODGTKCFLQCMCAEVDMBIYUIWJVDNGJTNBQSEASAVVNPZRZHSYWAFGRMKRPBLFTOVUQSDXWQMDRGHSXXSQRWJQKWWFNOKIEBGQJLLY");
    tmp_msg_1.conditions.assign("SBZRJCEOWXNOAXHVJONLKYQILSNIIWBPPSTNHSXUURFZXBDWLL");
    IMC::CurrentProfileCell tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.pos = 0.643274764074;
    IMC::ADCPBeam tmp_tmp_tmp_msg_1_0_0;
    tmp_tmp_tmp_msg_1_0_0.vel = 0.847009860934;
    tmp_tmp_tmp_msg_1_0_0.amp = 0.123873365051;
    tmp_tmp_tmp_msg_1_0_0.cor = 133U;
    tmp_tmp_msg_1_0.beams.push_back(tmp_tmp_tmp_msg_1_0_0);
    tmp_msg_1.actions.push_back(tmp_tmp_msg_1_0);
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
    msg.setTimeStamp(0.855053456369);
    msg.setSource(29723U);
    msg.setSourceEntity(249U);
    msg.setDestination(14777U);
    msg.setDestinationEntity(149U);
    msg.plan_id.assign("AAIKESJGXBB");
    msg.description.assign("XCSNCFZMRVALNTGQIQGNFHOKXQXRQKNRHJNFGXWVBHOHVJPSUZMAGXNLZYIIQFVZTTVWBCIMJPYVHOZWNSRRUJOFMUUIESKODAZDKSYYCFUVEHGWKWLRLLVEMLZUEPJFJQAPCCEURZQDSISUKXDYMCDJNILGIHTEKYOXAIJQWDQPWVABBWEKCBRXLZAEWULJOPAZTHYOPCBSAGNCBFM");
    msg.vnamespace.assign("SMPDDZAERMREBBLDOBXHTWJJDDVZOUAIXENCUMRWVKWHWKXZTLMZJACCTCZTCGOFLTFMVVPUIHQGSRQQKQJPZFHYKIIQOUSAANXI");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("SJANFOPZVTNGWJOERSVLIBTRMZEXRAVNTQPQEHJRWTUONISTCHAKQLNTCKYJVQHLZSKFDBDJGYIUIHKCJFJSMWGZDGLUCMXJF");
    tmp_msg_0.value.assign("QRYZXADDECTSJBTEDDUXAYMUBAJVUSWGFUHOPQBZWDLLJFIQVQLNFLJFSZOQEYMNFBMUAXJZCFCVLAVDPPHCSKIYCTREZVADBRRTZJNVRIGYEHDTFHGKGLGJPQXGMIQZHCTIZUKMGRCUBODJCAPDYZMWNPTNFOLNSGAOSXEFLFP");
    tmp_msg_0.type = 31U;
    tmp_msg_0.access = 108U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("JPIWESMDTBEGBAKYMHPZYGYZSZTOPFEXOOUBKUHXVHOLAVJWSZB");
    IMC::UsblAnglesExtended tmp_msg_1;
    tmp_msg_1.target.assign("VXJATGZAHUMSRHKVMUCZVXDLZBENORZIRMOGKXTXGFIRVNYDHPCFNJGIEEFYZTLWHYATWJTXWCNHLNMAEARFITOPBJMPLIFYSYPQMWJHYSCQC");
    tmp_msg_1.lbearing = 0.550400608187;
    tmp_msg_1.lelevation = 0.202207801199;
    tmp_msg_1.bearing = 0.463300277514;
    tmp_msg_1.elevation = 0.896070080953;
    tmp_msg_1.phi = 0.153091884488;
    tmp_msg_1.theta = 0.00394858971718;
    tmp_msg_1.psi = 0.776366634631;
    tmp_msg_1.accuracy = 0.52111099346;
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
    msg.setTimeStamp(0.808064691052);
    msg.setSource(53051U);
    msg.setSourceEntity(92U);
    msg.setDestination(58269U);
    msg.setDestinationEntity(144U);
    msg.plan_id.assign("ZBZUCRZDCUOTDFMYYLHDAVIQMSEPVMBYSXFWJZJUXBPXMACOEFLAPPQGYSKEGAWAFRMFGRGZVCQUFHBHBEZLSHHZJUZQOITRAXQRCBUWZMIVTNJVHFDBKUCHGWTKJKXTKEG");
    msg.description.assign("HYIQCETNOVAFBPDWZCWNSPXMUBTRUCWEQQADVDWTZYVNIEYOGQJRMKBVULRDBENREHJAVQZMDJMRJYSMXILXUQXPEWMPVGZSAYRUVGOAWCLLHODHTOFTKROKHCCHBQPXMLJAHYJIXPHXATEVIBNCFKXLWCGIQFLETTQFSUYFSMXPXSKJQZBVDLZFSWSRVKKEGOJNDWGANZPHJDZKDNAUSFIBUPLCUGEIJTHMGAOG");
    msg.vnamespace.assign("ZQUAQRCPXSDPYMRAHNOLSZIIFIYRUHKBJVSXZXMXANMTZGXUGGYGLCYFIRRLPTWAMUGCDSVHAMTPLEYATBBSTJGEFQHWOBFDYV");
    msg.start_man_id.assign("LRTMGZVLQNTMPFHNVTICP");

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
    msg.setTimeStamp(0.10403610462);
    msg.setSource(59250U);
    msg.setSourceEntity(150U);
    msg.setDestination(7880U);
    msg.setDestinationEntity(137U);
    msg.maneuver_id.assign("GHORGQBMOBJULTADIPYZGSMDLPZWUZDJYMWPZNDZLMHNSYZJMQGFUQKHZZISILVXGNXJXCLVETLBBACWVRGSXJWQYJTCEYBCISOHVCDDFEEDHUTCITKRENFNBKSKWXMJKGLKFVYAHPAXHRJVCADFMRNQ");
    IMC::LowLevelControl tmp_msg_0;
    IMC::DesiredPath tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.path_ref = 2081472292U;
    tmp_tmp_msg_0_0.start_lat = 0.678268174975;
    tmp_tmp_msg_0_0.start_lon = 0.0874547675674;
    tmp_tmp_msg_0_0.start_z = 0.61782659007;
    tmp_tmp_msg_0_0.start_z_units = 222U;
    tmp_tmp_msg_0_0.end_lat = 0.507926123276;
    tmp_tmp_msg_0_0.end_lon = 0.0455500440939;
    tmp_tmp_msg_0_0.end_z = 0.608488583854;
    tmp_tmp_msg_0_0.end_z_units = 22U;
    tmp_tmp_msg_0_0.speed = 0.826176040534;
    tmp_tmp_msg_0_0.speed_units = 162U;
    tmp_tmp_msg_0_0.lradius = 0.0220069844323;
    tmp_tmp_msg_0_0.flags = 137U;
    tmp_msg_0.control.set(tmp_tmp_msg_0_0);
    tmp_msg_0.duration = 6971U;
    tmp_msg_0.custom.assign("QSPOFNJHCDYASFNVYMHXLKLCDJEACOFMHPZQNACTDKBGTICHWJBSYUOTDLIWKBIAJHQBQMUNPOFPM");
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
    msg.setTimeStamp(0.0633134343451);
    msg.setSource(12331U);
    msg.setSourceEntity(91U);
    msg.setDestination(18781U);
    msg.setDestinationEntity(36U);
    msg.maneuver_id.assign("RKPJVMYFHHSEZHBBQNMEPKQNCGJFNRQGLIOTGSCZCTFCXFLEUFPBPKKBNNEVAWJRWQOXUTWDBHWNGPCUHAYZCZC");
    IMC::RowsCoverage tmp_msg_0;
    tmp_msg_0.lat = 0.169278934778;
    tmp_msg_0.lon = 0.649281228475;
    tmp_msg_0.z = 0.217514088485;
    tmp_msg_0.z_units = 24U;
    tmp_msg_0.speed = 0.341487999165;
    tmp_msg_0.speed_units = 149U;
    tmp_msg_0.bearing = 0.918455230609;
    tmp_msg_0.cross_angle = 0.179022869779;
    tmp_msg_0.width = 0.390495681211;
    tmp_msg_0.length = 0.622977085264;
    tmp_msg_0.coff = 172U;
    tmp_msg_0.angaperture = 0.602245125025;
    tmp_msg_0.range = 25839U;
    tmp_msg_0.overlap = 24U;
    tmp_msg_0.flags = 82U;
    tmp_msg_0.custom.assign("FZUEFLGREYVUDPBTRJHEOAHTAHPGTAMBJRWWTURLPGKQYZUPYJSHQDCENDEMCUUCLAVFOXYMUCXUAGRVNIPYAYELDTCERIQIW");
    msg.data.set(tmp_msg_0);
    IMC::ScienceSensors tmp_msg_1;
    tmp_msg_1.adcp = -22;
    tmp_msg_1.adcp_dur = 1719039473U;
    tmp_msg_1.adcp_fr = 2597544964U;
    tmp_msg_1.ctd = -69;
    tmp_msg_1.ctd_dur = 3593431009U;
    tmp_msg_1.ctd_fr = 911666607U;
    tmp_msg_1.opt = -36;
    tmp_msg_1.opt_dur = 3870983755U;
    tmp_msg_1.opt_fr = 3926099823U;
    tmp_msg_1.tbl = 107;
    tmp_msg_1.tbl_dur = 3556739569U;
    tmp_msg_1.tbl_fr = 4010822160U;
    tmp_msg_1.eco = -5;
    tmp_msg_1.eco_dur = 3666617745U;
    tmp_msg_1.eco_fr = 283316791U;
    tmp_msg_1.par = 120;
    tmp_msg_1.par_dur = 3878276821U;
    tmp_msg_1.par_fr = 1238161649U;
    msg.end_actions.push_back(tmp_msg_1);

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
    msg.setTimeStamp(0.446384251627);
    msg.setSource(53445U);
    msg.setSourceEntity(223U);
    msg.setDestination(28177U);
    msg.setDestinationEntity(91U);
    msg.maneuver_id.assign("PULAYKTAVFICQUDFORXHEJPPHQJMCSVLM");
    IMC::FollowPoint tmp_msg_0;
    tmp_msg_0.target.assign("NYBFITNRUTGVNPLCDSPWGMTGFNUMNOZFGJCLSCTZPCBRUWQHQJQEBPISWMIFULEKDSYJFTKSRMGOIBAFHDRZXPAFDYSLECGGMMYUOSUQVOKYEWTKVTZJVHFALHJMXBOTLLDPOQKHLQMZUGDBCXKUO");
    tmp_msg_0.max_speed = 0.105516515754;
    tmp_msg_0.speed_units = 179U;
    tmp_msg_0.lat = 0.0889119227173;
    tmp_msg_0.lon = 0.0307075305915;
    tmp_msg_0.z = 0.291540682949;
    tmp_msg_0.z_units = 121U;
    tmp_msg_0.custom.assign("NWCMGUGBMVPIUCGPLQWSBLUMEZUHBEIDXDLLSWCWMKRFSIXABVKDPCLYMYJEOHLMTNQDRRCXIQDUAPPOFOOYJHTZOTHTAJIYSY");
    msg.data.set(tmp_msg_0);
    IMC::HistoricSonarData tmp_msg_1;
    tmp_msg_1.altitude = 0.929680201108;
    tmp_msg_1.width = 0.197702136733;
    tmp_msg_1.length = 0.506348061339;
    tmp_msg_1.bearing = 0.716760961406;
    tmp_msg_1.pxl = 18875;
    tmp_msg_1.encoding = 186U;
    const char tmp_tmp_msg_1_0[] = {-50, -63, -112, 28, -114, 28, 54, -12, -69, 125, 25, 27, 89, -89, 45, 107, -21, 66, 100, 97, 59, -36, 103, -119, -51, -48, 106, 20, -4, 115, 65, -98, 13, -73, 104, -47, 71, 9, 56, -117, -60, -27, 42, 45, 106, -123, -67, -95, -56, 3, -78, -52, -27, 75, -84, -22, 36, -108, -111, -37, 95, 90, -7, -76, -38, 45, 96, -81, 85, -79, -62, -90, 107, 50, 121, -105, -66, 39, -83, 124, 0, -107, 15, 57, 29, 8, 106, -85, 96, -82, -83, -70, 106, -51, 45, 24, -20, -29, 96, 119};
    tmp_msg_1.sonar_data.assign(tmp_tmp_msg_1_0, tmp_tmp_msg_1_0 + sizeof(tmp_tmp_msg_1_0));
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
    msg.setTimeStamp(0.906132888624);
    msg.setSource(35308U);
    msg.setSourceEntity(80U);
    msg.setDestination(14899U);
    msg.setDestinationEntity(203U);
    msg.source_man.assign("MLMBKEZTFNYCODETTMAODEIAPKSWZO");
    msg.dest_man.assign("IRSAOKVLFRILORQUNRYXFZOHAAZKPKMILXRWXBLOVWEJURUGVLKVYQUJOPWIMTWMVNGLSMPTYZRUPICBTWSQAMAUDJDELTYEFCPNHZEFXDKGBFCCMPY");
    msg.conditions.assign("OUDSWJHETOKLISOUKASNEJXTVMNMVFGHEBHBKVVFRXBYQYJMJYACWFFVYQWHBFNPRZIXSTUTDZIDASVEUFGETUFEL");

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
    msg.setTimeStamp(0.177323818412);
    msg.setSource(34919U);
    msg.setSourceEntity(70U);
    msg.setDestination(34136U);
    msg.setDestinationEntity(6U);
    msg.source_man.assign("ITVPFWBHRIFTTNHGDKJELCMAMEHRYWRBZECPKUOXFLSQGSWGFJW");
    msg.dest_man.assign("GJXKBVWYTVFONOHYTIYSTYFBLWWPPEBOBITCAXVNNLRGHXEMUIHTJIKUUDPIZQEQQGHTMWFVTJGCLKWCLDSMZBFLBHDQEYEDPFRFMSAUJQYAXVKFUOOYWTHJDKNCQHZQHXYITLEAOSUVLCMIXGDNCJEMXMSBNNW");
    msg.conditions.assign("CIJLOLHQVRVBWHLBKXOPQXKMBFZGIRYYOVSVYELFFLNXRZNIPTGSMALWYUGVHSDRQIRDUCWCYZBMMGLJTZNHVHKRKQFWRPIKFKTKCNCCGHCSIPQJOSDEQIYOPTOQVQNUUXJATVZCABFDAXWTDBZTGZEVUPT");

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
    msg.setTimeStamp(0.495535532985);
    msg.setSource(59093U);
    msg.setSourceEntity(120U);
    msg.setDestination(20321U);
    msg.setDestinationEntity(219U);
    msg.source_man.assign("BCVYXLLBKYQAZQAZUSMLAOKCPREJHOVDEYFYLUSXCORFLZEBKXNXNSWGFBTBULUYMCFVKHIVJYXTISRBTNYKCMPIKNO");
    msg.dest_man.assign("OZHSHJBIKOZUGUXIJMBHADPVZTXSNVFBBCEWZNMPRTWOCCWXVLENZOCDMPHOINKVYZDEUBMRUOTDFKGEXKGIOFRPJSGYTLHGFQDSVBQNFE");
    msg.conditions.assign("YFPKRMJRQODAFKTBELMXQAAITTMNCNSCWUAMCQXISCZPIFBTYXGUDMLINRNIVEANLHTLUTNPDBSLPQY");

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
    msg.setTimeStamp(0.709345430538);
    msg.setSource(22586U);
    msg.setSourceEntity(126U);
    msg.setDestination(662U);
    msg.setDestinationEntity(67U);
    msg.command = 1U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("CXNIEGQYWRYZJTPOEXKZAQVGLTIARCCVSLZYONFCXFKQPUDRYLQAWQTUSXBAJMNEQYTUCROVENTCQBDMDUWDMVWFJXBHDTHFVYMYXUQJYRCBPPKOUWGKIBETGRZYSUHIPDBZWMZMMUJLOVDKERZHOICYGDNWXSNFSLOKHQSNERFGRGMQFKZCTULBEHJVAXGXLVKSCSJVJANFSKPFLNHLIANJ");
    tmp_msg_0.description.assign("WPNDRQTCAYRRYMAYLYNIZSXPRUMAOGEGSXMFWOIAHHDKVLJHGFZQOLEWCZZQUNLEYAICUQTBOMUKJFDNBVOWBVEEDIQBUNWQEVOXHBDBDVCXHVZKOALTCBVFMHSUKIWTXHXGDCCFBUZPJASOQKWFLJRIIMVKVPAFNJJWWJPZRFXLSLCATGBPXOX");
    tmp_msg_0.vnamespace.assign("HPDNMEYFYJWOPVRKJA");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("WADDUROSWLROXYXMEQEZO");
    tmp_tmp_msg_0_0.value.assign("IEAKNZDOHKJSLHPRQPOMHMXBWQSODQHMFCGUFBPVOVCPESTCVZAXSPVQRGGQTLKIHZFNAAZKLOTJRMETANVUWSDWGAFNOCWTENKUHRRYKGFYIKCGQWPFBCTPKXGHYIDJIJWEUMUIFLO");
    tmp_tmp_msg_0_0.type = 195U;
    tmp_tmp_msg_0_0.access = 225U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("UJAGRBUKHLKFWSVCMMOIESESCTDGOZEVPMKLSTQDBCJSTAWEUNFNGDYKMQXEZDKAALKPDQDULDPLTBGAWDXHWKCMRIJJGICZRRKVLPKBCLOMSNKBWRREHENOHAZFYSNPQTFRYQBHMOSJNS");
    IMC::PlanManeuver tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.maneuver_id.assign("DWIJOMPLGQZZJGTPYAHBKWBLMCYWBXRJAWSAAVGTFRZPHRPMCGRJQ");
    IMC::Goto tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.timeout = 24136U;
    tmp_tmp_tmp_msg_0_1_0.lat = 0.0587146007467;
    tmp_tmp_tmp_msg_0_1_0.lon = 0.0388201655752;
    tmp_tmp_tmp_msg_0_1_0.z = 0.680177985465;
    tmp_tmp_tmp_msg_0_1_0.z_units = 10U;
    tmp_tmp_tmp_msg_0_1_0.speed = 0.974012625628;
    tmp_tmp_tmp_msg_0_1_0.speed_units = 208U;
    tmp_tmp_tmp_msg_0_1_0.roll = 0.272628890495;
    tmp_tmp_tmp_msg_0_1_0.pitch = 0.341607007385;
    tmp_tmp_tmp_msg_0_1_0.yaw = 0.463481759074;
    tmp_tmp_tmp_msg_0_1_0.custom.assign("OIATNHRMEIUXJSOOXJRZBRJEOLCLDCPZVFVXHIUBZYDHOMGFOILUWMUQLAOIRBSFMKSGTTXNYOZWHPDESTGHLIQQRQUKJEYYERNLKGBFVAJWZZLCGDXCWAUQKPXFGASHPMPZXWBSTJX");
    tmp_tmp_msg_0_1.data.set(tmp_tmp_tmp_msg_0_1_0);
    IMC::PH tmp_tmp_tmp_msg_0_1_1;
    tmp_tmp_tmp_msg_0_1_1.value = 0.363344637836;
    tmp_tmp_msg_0_1.end_actions.push_back(tmp_tmp_tmp_msg_0_1_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_1);
    IMC::Distance tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.validity = 31U;
    IMC::BeamConfig tmp_tmp_tmp_msg_0_2_0;
    tmp_tmp_tmp_msg_0_2_0.beam_width = 0.742666296152;
    tmp_tmp_tmp_msg_0_2_0.beam_height = 0.193355601342;
    tmp_tmp_msg_0_2.beam_config.push_back(tmp_tmp_tmp_msg_0_2_0);
    tmp_tmp_msg_0_2.value = 0.18726693856;
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
    msg.setTimeStamp(0.634794591046);
    msg.setSource(47093U);
    msg.setSourceEntity(167U);
    msg.setDestination(53387U);
    msg.setDestinationEntity(62U);
    msg.command = 245U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("UGZTJTTBJELOPCJSPYZZTCEMDQOWRICGZKMAVLYDYIZHDIBQ");
    tmp_msg_0.description.assign("IKCJUYPJIKOHHJBBPQIPAQBEAHXTCCBWPUFSRJWDMZVVWZLBYGQGYULNDFOGPSORYKRPVSTXKPOYQZYEFMTIMARJJNBGLMUIUIZOEDCITZFFSTMHNQBTFAXCBKPDKZPWLMEVCRYXRDWSASMWVRQNLZBXAUWQRYXLOPVLKDNGUMENZITXMVDNAAUKLVEFESMSJNWTHODARZDJXHLVUCHQEHCJ");
    tmp_msg_0.vnamespace.assign("YYWQUBWMDJXUABYFKVPPAAXJTBHCBEGGFZPEOCNTCPPNBAVMSEOWXSPKAMERFWSJCBGGJTPODVITFGHZUMXXDRNKQUHVXBHFOZTZMVSZHIYOYKDYIOCDRGNRIZTFEVSVYWKFHGQRCCKNAIMADONPNFSLZSWVEK");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("WNOHGJGAHBBEVTNMNXYDDRMUCVHQCTKSRFRHUSRFIZGAMZTJAVAHABADPUYOKIBRELCVPF");
    tmp_tmp_msg_0_0.value.assign("EJIFDRLBZUAKIMMGQPQQNTEZPLPHDRLXUMPWCJXKGZFWNCJGZYGIVQFNZKRRVOHOUJSXUYPMSHTDVFVJKVNRPOZWTEHCVEMHNIAT");
    tmp_tmp_msg_0_0.type = 28U;
    tmp_tmp_msg_0_0.access = 17U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("GQOEDZPWHS");
    IMC::PlanManeuver tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.maneuver_id.assign("RPWAFUQEWKSKWLHBMBWXWAYSKATNCWUNTZFYEEQCTVQBBEPGGCOEFNSPFAOADBDBUMFDVZEENPBYTBHMMJQIYFZBOHRYRPLGZFIZDPSZFDPYJEKQHRQDJOVVTUDGRZGQTDJIABRILFNSJVZAAXO");
    IMC::FormationPlanExecution tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.group_name.assign("HJODVTQYUEZIAHDRNSYJKWNYYUPIBKEBATRKRXZHAOCNZGAWSZIZQSNUMCVWMWBKCAPFQLPRCQBGEOFQCDBNAUFNUJ");
    tmp_tmp_tmp_msg_0_1_0.formation_name.assign("XPBPJZQHIWFFJTGATTGVEFMVEUSSKYSOFREATZSECDTINYCXBAYBWJALFQJZNKWDIOUZLVIWIZWRNWSCOQDZYLXUDHPOFFRBWWMVIRQOFCXRUETAKBLHDUOHSWMBZQYIH");
    tmp_tmp_tmp_msg_0_1_0.plan_id.assign("ECCARPBDINGVVBMHZSTOOZVPYOESXRWFJLSWVWCDFYUGOZHTKKQXPCZPIMPBREOYMDRFAYKLGSAJWVSJHDQPGZTRFQZMNMFAIXBZRBBROKDELKMCKNWFJVJAHWGHRWYAMQTVUQAOGPKDCXBUUQLDTQOHRLIEPKGVXDFI");
    tmp_tmp_tmp_msg_0_1_0.description.assign("WNESZPRSDGWZERHUSUDWLSJTRIYCIDQCWHKQJWAKOVBLJCSGNVRIHNXPFJSWITKISVQUXNDPQBPENOYUKUKOOXJHUZHOPKCCYTWAZJORIBSAQMBMRJPITJZBVMNEATFVTNKF");
    tmp_tmp_tmp_msg_0_1_0.leader_speed = 0.991418252316;
    tmp_tmp_tmp_msg_0_1_0.leader_bank_lim = 0.819798970628;
    tmp_tmp_tmp_msg_0_1_0.pos_sim_err_lim = 0.381518951321;
    tmp_tmp_tmp_msg_0_1_0.pos_sim_err_wrn = 0.0969888909034;
    tmp_tmp_tmp_msg_0_1_0.pos_sim_err_timeout = 56851U;
    tmp_tmp_tmp_msg_0_1_0.converg_max = 0.661357782396;
    tmp_tmp_tmp_msg_0_1_0.converg_timeout = 46290U;
    tmp_tmp_tmp_msg_0_1_0.comms_timeout = 29547U;
    tmp_tmp_tmp_msg_0_1_0.turb_lim = 0.224618796444;
    tmp_tmp_tmp_msg_0_1_0.custom.assign("TXFTDRPOSJWZCUODMNGTEQFGAPHLTKNJGJLYEQRAXACFIYPFVA");
    tmp_tmp_msg_0_1.data.set(tmp_tmp_tmp_msg_0_1_0);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_1);
    IMC::EstimatedStreamVelocity tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.x = 0.457228627068;
    tmp_tmp_msg_0_2.y = 0.663012059693;
    tmp_tmp_msg_0_2.z = 0.358348750421;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_2);
    IMC::PH tmp_tmp_msg_0_3;
    tmp_tmp_msg_0_3.value = 0.71413146723;
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_3);
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
    msg.setTimeStamp(0.459944335199);
    msg.setSource(21859U);
    msg.setSourceEntity(69U);
    msg.setDestination(44065U);
    msg.setDestinationEntity(123U);
    msg.command = 244U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("LYXUHUBSQVIKSHEGZFTUJVVRXGAPALYFJQVUCTSTKLVZPQKGNJRUEZPEYPDPTHXGQDNDJIDRZWUAKEHOVHYMFMANIRXOXPDGQKMZXGPCARUIWFYLSSCOURPZBKVKHQCAJGFYGKUWDETBOGXRSUFBEPYMEHLMPLWRSBHOZBNDXCFCIHSJJFXCYZWQBGSCOYHBJWWVTVXKNJEIDNTCCIOENBOMDBRWMLET");
    tmp_msg_0.description.assign("OVXLJJPCBHNAZSPVZJXUGKCWOYIWFRESFDCJMEZDTRTVYVUACEXCRBYJJVXKODBDTUHTSYTTXIWWPEHIAHLAIUSENHVPKULQKZYNNYJOGECWAMSAQCFOFQHFXJJOAQLUTUQGBAMGMZIZRNMIRUFDMMHINKEGRBZOSKPIQHPLZUMV");
    tmp_msg_0.vnamespace.assign("EUMFPZIDMC");
    tmp_msg_0.start_man_id.assign("VTRVEADBCLWETXGVJKKNDARDLKHWOWSCPJOKDGZJEXXYOJRFBOSQNNXPPICHJLFVZJNIATULBYHZDLKXEVCMURJIKYXKYORDIFAQOZJFBMNGFCHFLVPIISCPWUYLDUQLXXAASVTBDSXJOUOGYTVLFUPQWGTWCCEFKKWCJNCEUOPMHQNEMAUHWHSYMHEGHSPYRVBMQMWIDERZQKBBGRTMVSIFNWPUIFM");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("LNDAJOOCSIVRSKDQJPCIQXRQFBGUJUHCYRYVHXBEXRNPMNPEOMCVCPZHJDBFLGTTYIQVDRDXWFXUMAPXAGMPKUJSHFOEOSHKGWBGYTUWGRULYNBIELKSWGMUAVRQIEADGAHWTLKDVMYDAYLZKSTNZBYWOMVEHXQEMBVYJCUWRCFHOTIFLRKAXZNJFGPIPLZXWJATRMEQBPOITOOJTUZHQDEFSZSZ");
    IMC::Drop tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.timeout = 11542U;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.897376225017;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.548108861382;
    tmp_tmp_tmp_msg_0_0_0.z = 0.872027929054;
    tmp_tmp_tmp_msg_0_0_0.z_units = 128U;
    tmp_tmp_tmp_msg_0_0_0.speed = 0.749030340904;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 22U;
    tmp_tmp_tmp_msg_0_0_0.custom.assign("BOJXRUCUKQDEIWVLZCEAPLNWHUYGKIIXXEIMKCJEKUMQAMHZJZIHJVQSSUTOYGMDPTMLBFOITEBVRTWRTTRRSZZNEULFJ");
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    IMC::VehicleFormationParticipant tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.vid = 30309U;
    tmp_tmp_tmp_msg_0_0_1.off_x = 0.110847861514;
    tmp_tmp_tmp_msg_0_0_1.off_y = 0.634458413632;
    tmp_tmp_tmp_msg_0_0_1.off_z = 0.740739412034;
    tmp_tmp_msg_0_0.start_actions.push_back(tmp_tmp_tmp_msg_0_0_1);
    IMC::GroupMembershipState tmp_tmp_tmp_msg_0_0_2;
    tmp_tmp_tmp_msg_0_0_2.group_name.assign("ZFMCPYNJOBUXKIBIRCEAYCZABFLUXYCTTJTTMDKVXUHASQTIXVFUZYWJFNXZMWSKRWHRXSFOPCWZOLOVBLKWNMDHYEJPTADRGHFVKWLIVDPLVLTSMDWTGEAJEBFRIIAOHYLQBC");
    tmp_tmp_tmp_msg_0_0_2.links = 369041519U;
    tmp_tmp_msg_0_0.end_actions.push_back(tmp_tmp_tmp_msg_0_0_2);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
    IMC::FormationEvaluation tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.type = 103U;
    tmp_tmp_msg_0_1.op = 211U;
    tmp_tmp_msg_0_1.err_mean = 0.030494232935;
    tmp_tmp_msg_0_1.dist_min_abs = 0.905212176089;
    tmp_tmp_msg_0_1.dist_min_mean = 0.378938672512;
    tmp_tmp_msg_0_1.roll_rate_mean = 0.943566488732;
    tmp_tmp_msg_0_1.time = 0.399054443517;
    IMC::FormationControlParams tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.action = 233U;
    tmp_tmp_tmp_msg_0_1_0.lon_gain = 0.410198412533;
    tmp_tmp_tmp_msg_0_1_0.lat_gain = 0.76330774586;
    tmp_tmp_tmp_msg_0_1_0.bond_thick = 0.569595416767;
    tmp_tmp_tmp_msg_0_1_0.lead_gain = 0.10571040318;
    tmp_tmp_tmp_msg_0_1_0.deconfl_gain = 0.758898512365;
    tmp_tmp_tmp_msg_0_1_0.accel_switch_gain = 0.0171281710953;
    tmp_tmp_tmp_msg_0_1_0.safe_dist = 0.0344257460312;
    tmp_tmp_tmp_msg_0_1_0.deconflict_offset = 0.222802477539;
    tmp_tmp_tmp_msg_0_1_0.accel_safe_margin = 0.739008335593;
    tmp_tmp_tmp_msg_0_1_0.accel_lim_x = 0.833527464829;
    tmp_tmp_msg_0_1.controlparams.set(tmp_tmp_tmp_msg_0_1_0);
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    IMC::EmergencyControlState tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.state = 142U;
    tmp_tmp_msg_0_2.plan_id.assign("CVCSSOYZVBDUGBYRDLFVPBPBZKFHIPUSCCDCPSIXJQBKQENAXTYRFOINASNDAOUETOUMVBYKZGLSEYXSMIPLNPTJQJRIJTMNDAAVLMHXMSWIBTAFXROWUFHPLFZOCNRJGCRKQMLBNPVDUBHDIGFYZQGOWEDXWQCU");
    tmp_tmp_msg_0_2.comm_level = 122U;
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
    msg.setTimeStamp(0.12031094076);
    msg.setSource(35593U);
    msg.setSourceEntity(176U);
    msg.setDestination(33203U);
    msg.setDestinationEntity(6U);
    msg.state = 6U;
    msg.plan_id.assign("XNGUXRITTQAUZGHRQEWHBDITJTMUTPRSSMSPDVZZEWHKXSCBRQNFSIUJNNDYGUVVWVDMPPPCTPSRTKYYJBLMHWDDOLGQKEOLZCOZYFAQSJOJGVWMCTWHPBBMYDXHEPEWLYBXCHHKZIIKOYFUNEFKOJYAOINBVSHMVAFR");
    msg.comm_level = 146U;

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
    msg.setTimeStamp(0.661136316007);
    msg.setSource(39967U);
    msg.setSourceEntity(97U);
    msg.setDestination(37612U);
    msg.setDestinationEntity(71U);
    msg.state = 158U;
    msg.plan_id.assign("MFGAUPCAXVJGLAWYLAJSGILPPKEVEHYXJCIRDQMZIXAJKTRVOPSBFTBLMARKRVYCCKAYSZCQSOJBVIDPGTQGDUHHMZVURDEBDFWCWXQUNOTGFKSNSETAQOJZONPYHBLILXVIPHGQKDSTPZCVJXWNLIBEHUHDIBXETLOOZZHEOMYTZAGUWGUDCEQZKJLTDQHWDUMELNFFNFKZMMMYINXRUBWJBAFPNHMGFSYVSUVQENOTJCXFNRKPWYO");
    msg.comm_level = 148U;

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
    msg.setTimeStamp(0.253678808674);
    msg.setSource(32902U);
    msg.setSourceEntity(139U);
    msg.setDestination(52489U);
    msg.setDestinationEntity(107U);
    msg.state = 41U;
    msg.plan_id.assign("WDKFHULKDPLLXXBEJKOLYQECUZVCYWHBYOAFRAMOSWILIQGNCTNLGMUUQJHWBZDMTYADBXOQSHFOUSTINBSDMEIHUDSZNPNERVWMJZGQTPWXYPBODRYZVWTBHJARNBQKVGOFZZGUEJKVVMTJGOIQULJRYIKSPXMTZPNWHCLRAMPKHKPXJECWXIRFGVAZYARSRPGXBUZIPNBMNFGDSOWYMVFHLOVFRSALCSQQDIFCKXTGUQJADCCEYXE");
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
    msg.setTimeStamp(0.777123597343);
    msg.setSource(46391U);
    msg.setSourceEntity(55U);
    msg.setDestination(58380U);
    msg.setDestinationEntity(245U);
    msg.type = 215U;
    msg.op = 215U;
    msg.request_id = 6712U;
    msg.plan_id.assign("CFMGODQJRFHFVODZVTAHLCABZYTFXSGUKNRPPQDVRWKRSHONQWECICBMHEBOVLGAGONTWZBRFRWRXUUYCWOIQSJBSKABWOJYQMPJVRIXSFDDRNBSYZXDEBSKLDNIPGHMFGKLEMJQOMJVYWGHOYCOZAYNUVXQUFJXEFSEPPBAJ");
    IMC::DmsDetection tmp_msg_0;
    tmp_msg_0.ch01 = 0.0321632053646;
    tmp_msg_0.ch02 = 0.0507028495163;
    tmp_msg_0.ch03 = 0.700070095827;
    tmp_msg_0.ch04 = 0.254846756199;
    tmp_msg_0.ch05 = 0.455370041735;
    tmp_msg_0.ch06 = 0.00104533094111;
    tmp_msg_0.ch07 = 0.226645259139;
    tmp_msg_0.ch08 = 0.840597726541;
    tmp_msg_0.ch09 = 0.61126072801;
    tmp_msg_0.ch10 = 0.833590961971;
    tmp_msg_0.ch11 = 0.636128089587;
    tmp_msg_0.ch12 = 0.467565993006;
    tmp_msg_0.ch13 = 0.667373927451;
    tmp_msg_0.ch14 = 0.521018252039;
    tmp_msg_0.ch15 = 0.411415944315;
    tmp_msg_0.ch16 = 0.898581382211;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("HPORBBHAPCOJISWKFFNHVKQKGXURW");

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
    msg.setTimeStamp(0.0896365203737);
    msg.setSource(33997U);
    msg.setSourceEntity(34U);
    msg.setDestination(48125U);
    msg.setDestinationEntity(38U);
    msg.type = 95U;
    msg.op = 218U;
    msg.request_id = 22650U;
    msg.plan_id.assign("PFMXZEDDDSTAGKYGVSFQYJTANFOXVXRWNUMWJPXWUYEEEWJHXGOOPXIYEKMZEPDXRPWELQMIDPJPAUVZLQVJHBZNXCGKMWOLHFJOQMLLICVCWNBGAUCLTKRTKXHYYTBSPWAHPRKXICBQVUNZCSIMBTGNLBAASMTODETWIZIOGJQGRHFISQ");
    IMC::CcuEvent tmp_msg_0;
    tmp_msg_0.type = 122U;
    tmp_msg_0.id.assign("NINRRUXZOAUYDUTZUVZTIFWKSPQDKZLOMABGBVMMLGHW");
    IMC::SadcReadings tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.channel = -16;
    tmp_tmp_msg_0_0.value = -2130306485;
    tmp_tmp_msg_0_0.gain = 154U;
    tmp_msg_0.arg.set(tmp_tmp_msg_0_0);
    msg.arg.set(tmp_msg_0);
    msg.info.assign("XTMYWPPZRIFVOQSNRZHDPKHUGRHODAJZZNPJGRAJJVCDPITVYFRTYNWDDMFBOTCRGTSKUSBISFBVHIDKEIXABSFWQZHXELUPGLXYRJBK");

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
    msg.setTimeStamp(0.859736659455);
    msg.setSource(52424U);
    msg.setSourceEntity(93U);
    msg.setDestination(19187U);
    msg.setDestinationEntity(94U);
    msg.type = 120U;
    msg.op = 199U;
    msg.request_id = 56462U;
    msg.plan_id.assign("SARIEMQWXOZTRFSKYMPPCRLZNEJBJKRYIKQJEHBZQHOCJWNDWYXMTWOUGDDHYBRQQSVMEEKQAHZRZNIAKCHLOINNYGLNNYTEQDWCJCFEBVGWLVZKUDBOHGZLLAPAOVIPGGMYREAABCJVVFRTNXKKYXELSPZFSVDOFITQNHJZYUCWGZIQQXXSILFUET");
    IMC::Sms tmp_msg_0;
    tmp_msg_0.number.assign("ERNQOOCBRHCDCLSJUQEJFHHRMMOANVFSKKAVFHZVLBXAGWXPBTQLBHMIEJNQXBGLUMKPVHHALDSUQSEZSYQUDZYNJULPIIABZRZKGRAKSNBVNPZTSZEEULTKHGYIFYFPIDWRCOGR");
    tmp_msg_0.timeout = 25888U;
    tmp_msg_0.contents.assign("PGEKGEFXBRWTDBKHQSKJOTISGWDCOYWOEFYVZLBQNWNSTNACDQNDVZVVHFSKFHUTBTQPPZTZKACIDXKWAHOGICNAOEJPZMBTPLXNJSRUWISCFXXIGYLDYUUBEWMCBQKLYVQUMQVDGFKSSKJGRVQZOUYNLFIYAELRRTHOHIRRDPMIYBJOMOHGXJOJJZMJHXHUPAXEBGEAWNPIMEADSPCABIKNZQFFALPRYLUULVEQRVZCWCYMGXMHXUSNRLZM");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("NYGNBSMLYGBGPCVRVPOFOSON");

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
    msg.setTimeStamp(0.0291196547141);
    msg.setSource(19960U);
    msg.setSourceEntity(45U);
    msg.setDestination(46154U);
    msg.setDestinationEntity(140U);
    msg.plan_count = 5510U;
    msg.plan_size = 3130270962U;
    msg.change_time = 0.678127064997;
    msg.change_sid = 31144U;
    msg.change_sname.assign("ODERBMDZEVLSTZMCFBLIXJVBPTRLGTZOAQDEZUOOCFCZUGQQG");
    const char tmp_msg_0[] = {83, 113, -121, -67, 92, 78, 51, -105, 12, 30, 13, 59, -97, 46, 80, -71, -26, 11, 57, -15, -36, -78, 62, 55, 81, 119, -16, -98, 105, 28, -94, 35, -128, -14, -9, -55, -54, -2, 52, 28, 84, -124, 32, 90, 125, -8, 13, -121, -34, 37, -4, -29, 28, 26, 72, 74, 73, -118, -35, 83, -10, 97, -107, -62, -29, -48, -109, -32, 95, -35, 39, -39, -6, 41, 65, 78, 5, -82, -3, -68, -65, -102, -19, -54, 109, -101, -71, -108, 18, -34, -78, 108, 76, 123, -63, 94, 3, 21, -5, 35, -32, -93, -114, 112, 117, -21, 110, 104, 12, 103, -31, -72, 25, 7, -58, 121, -57, -76, -112, -67, 45, 92, 85, 54, -64, 35, -100, -99, -36, 86, -17, 74, -85, 96, 49, -19, 115, -128, 105, 28, 72, 117, -103, -70, -20, 42, 108, 64, 1, -126, -110, 0, 32, -44, -46, 97, -14, 98, 40, 126, -57, -22, 92, -12, -64, -12, -63};
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
    msg.setTimeStamp(0.111170939778);
    msg.setSource(39108U);
    msg.setSourceEntity(186U);
    msg.setDestination(1917U);
    msg.setDestinationEntity(71U);
    msg.plan_count = 28361U;
    msg.plan_size = 1226383455U;
    msg.change_time = 0.871612709134;
    msg.change_sid = 9220U;
    msg.change_sname.assign("XCMJEHKTXKKCEYLQTXGRBKHIRLHAZVDCMMJBSJNFMNYPZRQUSOSBTJNUNRIWCDOIDHSAEYYZEXORHDGQINDVESZQJFZRVCEABPTPAOHFOBIIEUPKLDLJUYBCTCSCTUFPWMDDGAHGBVZIATPNYFCLAQHTBZQWFZSLOSYGJVUMWNWPFFRKGKBXKLTGWKDXPWMVBIGLFPJQJUYPCUOVGRLNQYZJXLOAAIRXGMV");
    const char tmp_msg_0[] = {124, 112, 58, -93, -43, 75, 21, -49, 1, 67, -113, 70, -100, -69, 101, -102, 48, -120, -4, -94, -64, 65, -99, 100, -90, -28, -114, 50, 119, -53, 25, -9, 83, -73, 21, 80, 37, 40, 52};
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
    msg.setTimeStamp(0.441209045232);
    msg.setSource(7629U);
    msg.setSourceEntity(100U);
    msg.setDestination(59305U);
    msg.setDestinationEntity(205U);
    msg.plan_count = 38309U;
    msg.plan_size = 2446475838U;
    msg.change_time = 0.678718238781;
    msg.change_sid = 19548U;
    msg.change_sname.assign("JROUGXTDDWLPETXIOJNTKRQOUJSXOLVUZIZMALQXFLDYNKBFCERKVATKUVUFNCYVDYDSJATMBZIDWAHRNMCNOPBECRGQZLVLIUMQSEIPCJDFHFNYTENTWDSBIOCAFKZWTXCKGPLRVPJXXCCLFHHGHKOHSXUWMBMKQNPNMPUQYCWGEZBKFXJGNWQRPYARMSXAKHSWYTBAEZMIBHYHRLVIFI");
    const char tmp_msg_0[] = {89, -94, 43, -46, -64, 115, -30, -101, -75, -11};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("DFNKOGJIHZYZCNDCYCVHHHHBXUNFIRUGUGCUIJVLQNSUOOPMAZPXJXEPQBQKLNOTQCPNDVBWCKVWLSTTGXSOWVRZIVADXKZKUXEVYTGETRSNBEWQGEMPDCQSLFBHMAYEHUSITPYLPREGSNJQFSJEXLIFAWTYBDQMDZOJMVHMYLPYWKMWASZZNAIQAMULTRIOASBNXOEXKYDXGVORHROWACHDIRZUYPTBJQCELRMWKFRPFMGK");
    tmp_msg_1.plan_size = 47236U;
    tmp_msg_1.change_time = 0.891683121248;
    tmp_msg_1.change_sid = 42208U;
    tmp_msg_1.change_sname.assign("OQIUBUEWOCIKIMBACMEFSEVZLZYDYSRPZQKLTFZOJZBIVUKOQVCCGBP");
    const char tmp_tmp_msg_1_0[] = {0, -83, -125, 94, 117, 113, -114, 29, 27, 21, 31, -125, 63, 47, 25, 101, 57, -94, -11, -82, -104, 60, -95, -62, 96, 101, 53, 57, 100, -65, 33, -71, 10, 33, -67, 114, 89, 60, 30, -126, 56, -47, -52, 113, 52, 24, 42, -24, 109, -3, 53, 90, -18, 108, 15, 116, -128, 111, -39, -49, -36, -29, 94, 75, -125, 105, -52, 103, -13, -121, -13, -12, -96, 105, -109, 24, -44, 118, 92, -48, -75, -112, -126, -81, -125, 67, -80, 86, 61, 114, -117, -76, -61, 70, 2, 6, 4, -121, -69, -38, 4, 31, -49, -127, 25, -95, 34, -33, 51, 116, -92, 110, -123, 18, -58, 54, 20, -45, 38, -12, -118, -106, 66, -30, -115, 35, -11, 37, 22, 114, 16, -29, -79, -2, -32, -101, 118, 2, -10, -126, 92, -40, -121, -122, 43, -112, -68, 116, 112, -61, -81, -56, 91, 115, 58, 46, 106, 69, 43, -124, 57, -30, 108, 90, -60, -113, -13, -10, -66, -104, 121, -38, -2, -72, -70, 111, -32, -75, 78, -61, -106, 61};
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
    msg.setTimeStamp(0.47880228069);
    msg.setSource(11462U);
    msg.setSourceEntity(205U);
    msg.setDestination(50571U);
    msg.setDestinationEntity(110U);
    msg.plan_id.assign("FWSARHBTOCFUGECCUKHZFLIVXPYRYVWGHDQZNANYAPAVDDKKSBYUJRKIZQUTAVWDJSHGOWZRLNGHFTNARELMNPVJMMEPRATXQOOMYKHFXPPOCIZNGMJSXCJJEUPYBUYQQTYJTSQMJNTCCVLNRTHGXRQHKRKAWG");
    msg.plan_size = 63326U;
    msg.change_time = 0.116701499552;
    msg.change_sid = 61866U;
    msg.change_sname.assign("OPPASINFZTPSEWQYJQWOTAQKIDCOOFDBRPCICEPRLWSBCZUBOKABBVVSJXKJXVFBZQDDTORDNUE");
    const char tmp_msg_0[] = {-100, 4, 100, 48, 76, -29, -117, 26, -26, -19, 103, 36, -38, 50, 96, 59, 48, 29, -59, 103, 103, 93, -116, -90, -106, 28, 98, 106, -75, 81, -116, -53, -101, 79, 18, -87, -33, -79, -122, -32, 21, 44, 21, 109, -81, -24, -21, 37, -42, -76, 91, 12, 70, -53};
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
    msg.setTimeStamp(0.982161571812);
    msg.setSource(57425U);
    msg.setSourceEntity(99U);
    msg.setDestination(58542U);
    msg.setDestinationEntity(196U);
    msg.plan_id.assign("KIDSFNAIMVCZYZCHUFERGGBIHPBSNJUPUNISONXIVATHEGVGVHMUKYXUMJRTWZOHBWOFJRPMEJCYPFKOPLOZELDPMWYTYBOIFIWQYLRGRCRDQJUNHITKDWKOHKWLCWACVUQXADJHXEUFWVATWPRKLYSQQLHJYZXXRNEJLQNAFCCSPYQMBZDZETAINUSMXGDQZBAVLQTIZMSTCKOVRNBKCDFVTPGEKUSGLBVPTJRSQBBZEAGGLYXOOH");
    msg.plan_size = 35908U;
    msg.change_time = 0.407848953332;
    msg.change_sid = 64944U;
    msg.change_sname.assign("BPCQNQNYCQLBGZGOLBLCGITPMSRHISVEFOYUHFNFIITDJRCUDZUWVPQXQWNSVCAZVXAKWJBTPYOMFFDMMUVRTCPQAKCJRFNVENUQUDEEDXRZZXVPDJLTQGUEHMPOXUDAONGVHHKZKIYYGPBBSFWDZOXGWZCTMHIPSJWCAIBRYLEKXTLOHKSUHAOFERNQHHJWNTIZRDPARXIVLZKKXOMJSEBGMYKTYMLFXGTBM");
    const char tmp_msg_0[] = {24, -29, -6, -50, -36, 50, -18, 85, -82, 82, -70, 83, -28, 67, -114, -102, 5, -112, -35, 117, -37, 84, 90, 23, -86, -102, -108, -47, 51, -25, 53, -119, 86, -110, 83, 62, 125, 71, -60, -2, 92, 74, -19, -26, -114, 3, -76, -12, -127, -114, -107, -114, -27, 7, 23, -103, -9, -57, -41, 122, 10, -41, -24, -126, -25, 100, 23, -118, 111, -79, -96, 50, -34, -66, -20, -80, 126, -77, -30, 73, 78, 44, 12, 115, -48, 50, 93, 76, 32, -113, -25, -67, -111, 106, 123, 108, -18, -78, -22, -72, -108, -15, -87, -43, 85, 98, -14, 45, 58, 112, -45, 35, 34, 126, -111, -60, 59, 4, -50, 73, -40, -49, -9, 8, -59, -16, -31, -19, 6, -28, 40, 28, 35, 111, 88, -83, 48, -80, -8, -56, -50, -67, 84, -21, 102, -89, 35, -32, -37, 4, -38, 93, -80, -56, -100, -70, 22, 31, 7, 43, -51, -124, -13, 48, -89, -92, 110, 41, 121, 95, 92, 17, 18, 9, -9, -73, 66, 53, 108, -31, -17, 54, 49, 79, -31, -120, -9, -126, 34, -15, 95, -61, -96, -8, -113, -6, 55, -42, 113, -66, -103, -96, 72, -45, -80, 48, -109, 1, -49, -112, -77, -74, -42, 39, 123, 106, 21, -128, 42, -68, -21, -43, -109, -4, 14, 101, -79, -72, -102, -1, -18, 36, -97, -66, -96, -74, -88, 20, -41, 64, 12, -1, -123, -56, -23, -94, 37, 33};
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
    msg.setTimeStamp(0.124830127917);
    msg.setSource(15701U);
    msg.setSourceEntity(179U);
    msg.setDestination(47578U);
    msg.setDestinationEntity(200U);
    msg.plan_id.assign("UTNBOTESWLKEXBPFAKBMJBHCRQHQURCRCCMJYAHQWZLGYFDKNYLGHVUYFRHGSDXSFEOPMNHCJBUKRCKDKVDPMFWTLXDWYYSUIGINTBROALOMEIZTQOFKSZVNZJRYFUCIQXOZFXXXXDJVZVJLWEDZIEMGULZMAM");
    msg.plan_size = 19776U;
    msg.change_time = 0.0597596478165;
    msg.change_sid = 50203U;
    msg.change_sname.assign("DRLPUDRBVFOBQGMMQXRWUJFLWKZRCXSGHSEDVRUVNIETGORFIYDUJMKAPRKIIPAPZAKBWMZCMUATJGUGSGLVODNXHUZMXJIYPDQGHPWZHSIUOEXSMSSCZLHTYIYLFFBAPNYCJITYKEWFCMHWZNUAWSCCEOHRDVLAWEGFXROZLTQMJQQUZLBJFOBYVDFTGSHYIE");
    const char tmp_msg_0[] = {-58, 54, 36, -68, -10, 117, -74, -20, -77, -12, 64, -98, 125, 102, -29, 97, 96, -69, -114, 39, 121, -33, -63, 93, -98, -13, -62, -7, 100, -95, -59, 118, 80, 58, 26, 29, -51, 45, -103, -7, -40, -37, -22, 117, -66, -27, 76, 94, -35, -58, -122, -37, -128, -14, 41, -79, -67, 113, 58, 105, -44, -1, 103, 93, -46, -46, 85, -24, 109, -111, 85, 54, 20, -11, 109, 117, -39, 42, -126, -119, 36, -109, 44, 14, -12, 51, -87, -62, 66, -97, 109, 18};
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
    msg.setTimeStamp(0.145952088784);
    msg.setSource(32525U);
    msg.setSourceEntity(102U);
    msg.setDestination(28713U);
    msg.setDestinationEntity(98U);
    msg.type = 172U;
    msg.op = 96U;
    msg.request_id = 3733U;
    msg.plan_id.assign("LWWVVNBVRZWGPPDLVCLUFKJQRKPTFODYNWDKJCHJORIFDCGGQTSIISIYFHSMOBLODM");
    msg.flags = 49735U;
    IMC::StateReport tmp_msg_0;
    tmp_msg_0.stime = 1328489997U;
    tmp_msg_0.latitude = 0.182882971932;
    tmp_msg_0.longitude = 0.0839509077198;
    tmp_msg_0.altitude = 51246U;
    tmp_msg_0.depth = 7100U;
    tmp_msg_0.heading = 43483U;
    tmp_msg_0.speed = -10650;
    tmp_msg_0.fuel = -115;
    tmp_msg_0.exec_state = -69;
    tmp_msg_0.plan_checksum = 21901U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("IRWRUHEVTGYQLWOISMBHNEUDKDTJXFZHCMYPYFNDMJNQZVSCFJOHDEHCUBJGLTVQYNAMWEFEWZFXTMGNVEZVHSAHGOXSBRSPSIAMRLQQBZYOEPXTKRKODXJVLRSWUOVACYPPLZJKEFTKDVTAWCKLQYDJCJBNQUGTRGYDSINOUQLBYXRCUKAGZZFDHMZIXNMRGSOVQXQWZPPDATKETO");

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
    msg.setTimeStamp(0.782029179783);
    msg.setSource(36533U);
    msg.setSourceEntity(190U);
    msg.setDestination(44295U);
    msg.setDestinationEntity(30U);
    msg.type = 166U;
    msg.op = 9U;
    msg.request_id = 15826U;
    msg.plan_id.assign("GZMLKDGMKSQKLHLKTUMUBJDHIODUYPSJRBYYXOQAZMDPVXKMARONVTSI");
    msg.flags = 42545U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 16866U;
    tmp_msg_0.off_x = 0.705454011259;
    tmp_msg_0.off_y = 0.370872106472;
    tmp_msg_0.off_z = 0.929914437686;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("TPGPAGQJKZSZCWPTNBIPLLRKSXCOTERVOFCJRBVQVGMRLJTJTQZBXSVYDGUQQGTDHKYWYKJZPQIMCZREEYIVBUEMKEDR");

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
    msg.setTimeStamp(0.276947633803);
    msg.setSource(42274U);
    msg.setSourceEntity(5U);
    msg.setDestination(872U);
    msg.setDestinationEntity(112U);
    msg.type = 164U;
    msg.op = 69U;
    msg.request_id = 25412U;
    msg.plan_id.assign("PCPZWTEDYRSKXVZYEVRZKBILEHOFCXBTHGFQSJNFOGKAZZGBBKOBGKTBXMUGDJCUECPYNUEFEMHVXQGUTDCNKMCWNALEDLLWWPVTIBYPNJPVPGIQVLYQOUHJODOTOOANLVLSRJADUJYUDOTRTGMDCZUECSWAKWJVUNWSIQKLSJXWFAHGTMZZI");
    msg.flags = 20858U;
    IMC::TBRFishTag tmp_msg_0;
    tmp_msg_0.serial_no = 2414927642U;
    tmp_msg_0.unix_timestamp = 1137811468U;
    tmp_msg_0.millis = 1422U;
    tmp_msg_0.trans_protocol = 249U;
    tmp_msg_0.trans_id = 3681378357U;
    tmp_msg_0.trans_data = 60130U;
    tmp_msg_0.snr = 172U;
    tmp_msg_0.trans_freq = 199U;
    tmp_msg_0.recv_mem_addr = 27942U;
    tmp_msg_0.lat = 0.153800043436;
    tmp_msg_0.lon = 0.628431574353;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("SFQAEHNRTBYDGCTJIYUPBRXSAZGPINYNTFCTEEKDONWLLDNNZXSPMCNQXZSTVZHGFKKHQRPQXPTIQAHJQSFVLGYDTQXHDSMKCENLZKDEJOPTWDMHGUOBKJUHUWFZSKAARQXZCLGRUTOINVXMPXVRPPKVYCMJWWBJIWCAIVEVMJULFCGVAWEWMBKOMNEYHURAOEZYIUMJBIGEHLQBOPAVMFABUOBDGBYJXCKVWR");

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
    msg.setTimeStamp(0.147520025899);
    msg.setSource(3439U);
    msg.setSourceEntity(158U);
    msg.setDestination(56610U);
    msg.setDestinationEntity(9U);
    msg.state = 173U;
    msg.plan_id.assign("KIQMTSDLVFNTQLVKWMPOTVQAAKJPPSFZLIPJGDKZHTXEFEGBJSXZAGCOEUQQCWLUADHUVRICAMYCGYKSZVBQJBVRZLXYBHQRUFMFOJZRTDVCVCBGBGHRFWKBTJTBQMROAHEXWRWQNNKHHMOZSOTJLDOWGAXRRKBGAOSUAVJZHKOXOUEQZVXNDDTCSLNFFYLNXMICIXEXYUPIIKYYNNUDMLPDB");
    msg.plan_eta = -1950619420;
    msg.plan_progress = 0.748340662873;
    msg.man_id.assign("LOCMZJTHMBAMGEFMLIJSZVGLYHGQAYDIEXNUKBAJRCHEEYKEOFKXTGOSUFDUWPEZHWLLTOAINGSRATHPQIYVSKAMYHYPCVRFJNONDONIWHZYQPNHDUDWGICPROXBAEZMKUHXBMTYSXPBIDDENXJR");
    msg.man_type = 30702U;
    msg.man_eta = 1701663058;
    msg.last_outcome = 184U;

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
    msg.setTimeStamp(0.180771206327);
    msg.setSource(9600U);
    msg.setSourceEntity(139U);
    msg.setDestination(44757U);
    msg.setDestinationEntity(19U);
    msg.state = 90U;
    msg.plan_id.assign("OXGKWNNADAOJJRVFTPXXEOLZFWKMWMPUNIFQTUJPTFXGPEHLKLEPEWPCURENAVQFOSMYIBKXCZYKWWQTNMUGHASSNEAVZFISBVLDAUOGERQBHYCZROIDFDCVDYJCSALEMNXNYBXWWZGJKSOBQZLJPTYXQNKNRJSVHGZLTLVLUREQQGZPUBAGRMUQCVYPDYGVCDBIQEHKYHSAHOHIMFM");
    msg.plan_eta = -1081596831;
    msg.plan_progress = 0.60881971251;
    msg.man_id.assign("UIKELGOCYGOMIMBPDBEONAGHYVURSOIAUUYGTMDWEURYYYHQTHKWLMDLXASLPFOLCVXZGFQFLMLGQNITTNRUCKDRQHKNXTNKWSZCSCTPKDYEGPJQVJXPKNIVMVSB");
    msg.man_type = 43781U;
    msg.man_eta = -18023152;
    msg.last_outcome = 32U;

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
    msg.setTimeStamp(0.884519786617);
    msg.setSource(9624U);
    msg.setSourceEntity(61U);
    msg.setDestination(17901U);
    msg.setDestinationEntity(39U);
    msg.state = 40U;
    msg.plan_id.assign("WAKJKNBISNKPXJLASQGRZPIXGFWMYKRIZEJSHAZXVPQIPJBQUMEDJVHLQEDGBNFFMATBWWKWUNZWOYDYBRNCRTCWTHBEKJHUUYKPQFUEMAUYUPHEGZFYSHAUZEYAOFHCGUZTKKQUZACIYSTSVPCICJHGFFMHPLOQOJDWQFTGXHDSKLPBQOGYCIXRGLRXONYCD");
    msg.plan_eta = -734475794;
    msg.plan_progress = 0.194673136282;
    msg.man_id.assign("BYHFZLLCVHPSEYMEGJNARCEVNQMLCVLSXPAHDOXVEODEWIT");
    msg.man_type = 1556U;
    msg.man_eta = -1708025716;
    msg.last_outcome = 174U;

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
    msg.setTimeStamp(0.374044687918);
    msg.setSource(8574U);
    msg.setSourceEntity(145U);
    msg.setDestination(22807U);
    msg.setDestinationEntity(102U);
    msg.name.assign("OEOTECZDUGSMFCFXDZFGWGTSTNVBEKELXNJRBYXIUDAWCASRHMNHTPKVSBVSKJBBNLUNITSHBTCUDYPWYFCMJLEIMPOOAQBEQHZORYPTGLVAHCXYZFDWYQFXBIRDOALQPUJGGDRMPWZSHZVGLONJQIWJVRYHVUNXNKXRETCAPGQUIGHTPITLUQWKXBJFZOCZUHKAADKGDYMNJIVMIUCEWQKVRWKMXWQLMAMSLEYCERHFDFOJZFYQ");
    msg.value.assign("YYFEPZYUMTGSKSLZRJUWZPHVYVLYHNZNIBGMOXAYSAPFLJKODRZHOJHRDVOXHCUEELVRJLRYQHQQWBWMIVQWQPSEESPFWZXWYIELTXIJIAIVYKMUPUFCMNNKODCLCSBQPKIAOGLEGKNDC");
    msg.type = 144U;
    msg.access = 25U;

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
    msg.setTimeStamp(0.912706320348);
    msg.setSource(25858U);
    msg.setSourceEntity(204U);
    msg.setDestination(22125U);
    msg.setDestinationEntity(192U);
    msg.name.assign("NYBSMTOFRDZTTRNJEDEPYHVSJITVIYNCBZAUUARTEJJUGNPNWWVTOOBPZQYLYWXEPTFAXCLAMMNLBQZIOUKRMPCHKHWDFLVQXIKLUCLFMADSSHXBAKRSMPGSNXMUCHHVUKNBTIZEORJWCYFYBWMOGQHZLYBHIJQFFSPXAGWMBJRGWVNRYVSEUDFQARIZPWCLZQJGTE");
    msg.value.assign("KMRMHEBVKMGGLMBJGXXNZOLZSVSA");
    msg.type = 52U;
    msg.access = 224U;

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
    msg.setTimeStamp(0.375426461458);
    msg.setSource(19082U);
    msg.setSourceEntity(69U);
    msg.setDestination(26859U);
    msg.setDestinationEntity(102U);
    msg.name.assign("RRNOWQCVNCKVIFPKHXXPHPNDWIKBEUMMLTLHGBVXOPNWQGVHZYSPJYEJTZKJUWZGDFFLASWSAPNNKEHLEYHWGAYKGGRYLTUFMJPGUMDASSXEQBFOYDSWKZRKMSCOIJHYIQBALLBRSXQXTVQGWMJOVBZAQTMRNWOJVEQIFLEZFBCDHTH");
    msg.value.assign("NFBZZRUUPDKKHGVVHXJJSXZWXAZTFVEEVCWHDRLUEY");
    msg.type = 19U;
    msg.access = 202U;

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
    msg.setTimeStamp(0.405540670141);
    msg.setSource(11069U);
    msg.setSourceEntity(166U);
    msg.setDestination(53792U);
    msg.setDestinationEntity(170U);
    msg.cmd = 248U;
    msg.op = 46U;
    msg.plan_id.assign("QICYSPYMUNKBQVVCMUKHQRHJFHLRGZPDLRIAZZGYQJRPDGIFKITRRDNEFQVEEDWRZMAASOLVAVPHCTXBCFIQUXNTIBXTJCCEHAXWBCJWUZLGDTRUYSOUQAGMCQZNTUUPWVYKFJVYNQ");
    msg.params.assign("WBOFQZRVDGAYBCDHBRTJBAYXQIAMGFKBNDCVPUGZOXIVHUERIXFHEPCLPPTRAYTIJLOZQHMRMQUIMIDWSNK");

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
    msg.setTimeStamp(0.470128409674);
    msg.setSource(55025U);
    msg.setSourceEntity(35U);
    msg.setDestination(37078U);
    msg.setDestinationEntity(103U);
    msg.cmd = 219U;
    msg.op = 208U;
    msg.plan_id.assign("DPINUAYGNUAXRHSQEXNHRSUHQVQCVIMFWATNSNPGPCHWCSQEOVKEIRWFFZMYQQBRYWYIUMFOETLVOAIEYMKKHILKZDBTMBNTJAJUVHQBLGUCVGBMSPZZUDBEKGJOBRSYHRCIRZACTZBSDJGNKDVNTDDLREFCMILINKXDYPAHWJHZUVZFOQXMJAWFJTRSGOKEBDCDJNOBMOPLEYPULQJSAXOZLPFVXLKLWPRTF");
    msg.params.assign("HFLLIVAWREZYVOTDKMYUHUUYWAUKDIFHRTJOGSZLVUDPGKJPWJZASJVEQKKIUSNQSNABQDXDXOKCTLMFMGSCEWTCMGSFGQCPQHENSIAXEKOHPYXCLRGCLZVXJ");

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
    msg.setTimeStamp(0.294369355085);
    msg.setSource(30686U);
    msg.setSourceEntity(211U);
    msg.setDestination(15933U);
    msg.setDestinationEntity(201U);
    msg.cmd = 199U;
    msg.op = 78U;
    msg.plan_id.assign("XZCBCGOWTOAWEFSTFOMVAMXJFYMZEPWLNJYKPLCLZSOOXMDJFVWGCJXWBHYCPZISXUKDOTTEIVKPUPQURXUTKIHDDCBZFCIIJPTVFVGOIRSYMPEDQNMHDHMKUPXBVBUOKZNYGKYITRJGKAWMCUSLQGNLDYZHHJZRORAHWHNK");
    msg.params.assign("JAZJBFFKSOQGDELEKRQDUTDEKYDZLQSDASIZBGIFQOECTMYJLNFPNWTCMXGDXFKVKEZIRZLPTCHBIWSKVVCIALZTWISPCSNVUTWDHRPEA");

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
    msg.setTimeStamp(0.828977565174);
    msg.setSource(38885U);
    msg.setSourceEntity(161U);
    msg.setDestination(27328U);
    msg.setDestinationEntity(251U);
    msg.group_name.assign("JYTHFLHZAIUFTJUEHUBFPFTDVZIHLAFZVHPHWKLJOGPLJBBDJNIWTWUAVSFBKUWITFMZOEADFCHBSCANROOAUYFQQVVYRQPZGNPLCZKLKDYDPYVY");
    msg.op = 57U;
    msg.lat = 0.0308882704538;
    msg.lon = 0.162614818995;
    msg.height = 0.73354801274;
    msg.x = 0.410858211909;
    msg.y = 0.506997158416;
    msg.z = 0.871243489033;
    msg.phi = 0.202958916262;
    msg.theta = 0.935402325253;
    msg.psi = 0.577736150356;
    msg.vx = 0.324324299105;
    msg.vy = 0.588573548359;
    msg.vz = 0.575589307459;
    msg.p = 0.24232765979;
    msg.q = 0.86087913399;
    msg.r = 0.0261136576435;
    msg.svx = 0.401304626296;
    msg.svy = 0.615540151458;
    msg.svz = 0.0267266484432;

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
    msg.setTimeStamp(0.088202233572);
    msg.setSource(30702U);
    msg.setSourceEntity(79U);
    msg.setDestination(14825U);
    msg.setDestinationEntity(81U);
    msg.group_name.assign("BDIPPRXXXMLQHWCGRYPTEZLFGZFUGKLBFZOUHRYNP");
    msg.op = 196U;
    msg.lat = 0.0844858920614;
    msg.lon = 0.544098361189;
    msg.height = 0.794115336402;
    msg.x = 0.61777622937;
    msg.y = 0.246613772225;
    msg.z = 0.365472739216;
    msg.phi = 0.405716428541;
    msg.theta = 0.610637004152;
    msg.psi = 0.59401992144;
    msg.vx = 0.500471202491;
    msg.vy = 0.393707736165;
    msg.vz = 0.303400396623;
    msg.p = 0.0325438860586;
    msg.q = 0.269786956218;
    msg.r = 0.260620735562;
    msg.svx = 0.017569854183;
    msg.svy = 0.963230054043;
    msg.svz = 0.330691984342;

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
    msg.setTimeStamp(0.485137036521);
    msg.setSource(41895U);
    msg.setSourceEntity(7U);
    msg.setDestination(13236U);
    msg.setDestinationEntity(83U);
    msg.group_name.assign("ILRBHYMNJTDXIUATAKTEHRLPBMHGCYEKZDWGYVFUDMXDECFDWLAONOBWVXAGEJKNPBUOHFNVRFDAEDWPABYGNRCFIUWCGKTMJOJKKYZOISEEJPZGSMYGQTOMLSYXJHZXQDXNBGPQYOJ");
    msg.op = 71U;
    msg.lat = 0.962748801619;
    msg.lon = 0.342987730142;
    msg.height = 0.402135402456;
    msg.x = 0.407136524748;
    msg.y = 0.509114267899;
    msg.z = 0.316493699466;
    msg.phi = 0.472073659286;
    msg.theta = 0.665460942121;
    msg.psi = 0.684498537538;
    msg.vx = 0.853303249108;
    msg.vy = 0.841065764341;
    msg.vz = 0.156025019884;
    msg.p = 0.761178557878;
    msg.q = 0.832248495979;
    msg.r = 0.142282140181;
    msg.svx = 0.180940754969;
    msg.svy = 0.0603808277729;
    msg.svz = 0.14842940818;

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
    msg.setTimeStamp(0.521339309115);
    msg.setSource(64274U);
    msg.setSourceEntity(2U);
    msg.setDestination(50555U);
    msg.setDestinationEntity(87U);
    msg.plan_id.assign("YITBCOTNGLDQHBIVJMGDTRFHBISSWCZXAPHJPSGCWMNCSOJDGXWMWKPUWXVFDQCKEVDAOFRLBCZTMVKGNRAJUONYBNFOUGGTNOIRXFFYLURAMOJJSCXKPHYLZSETRQNDPZQLUSEIEQPWJAAITCSVTHPMEAPMSHGYSBWHLEQLWYRFVHXKXKZZQAJDV");
    msg.type = 130U;
    msg.properties = 135U;
    msg.durations.assign("CKXCVQJUGTAHWIJDETJNRFGOMPODLPEEVKRFCWUAWYQALIJSBWZODYPXKLVIDBXSB");
    msg.distances.assign("SSFYXVMFSKRMCKFJRWMXBGBFTMPXQSJ");
    msg.actions.assign("EPWCMROFRRPIDJSCZNGKLAOMYQCYZFGFAFXSJUDNXDDBWAPSWJEZNWLYZJRIBAIZEDTGXXOPYIEAKLSGLUSVKIJB");
    msg.fuel.assign("UWCKOLEESBZCHSQLXFMYPGUXNFZNLJYASBBADXVMIDHKDPNXJABHXZHSTOCOYEBFHDGIYVQRTFYNLMRUJKLGHFFKLSTOMCQTJHRVUSTCXIFVJNGWDDBJQWXSHDGQLAKXOWQEQCPJUTRPQEGGIZCWTWBTSZAPOOIUCJNMZZVNBREAJLRKRSDKVMUVIFYXFPMWNA");

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
    msg.setTimeStamp(0.630318475914);
    msg.setSource(849U);
    msg.setSourceEntity(191U);
    msg.setDestination(13287U);
    msg.setDestinationEntity(90U);
    msg.plan_id.assign("BTMVHMBGVDNULJHAMDXDLXKGEGBFTGKZNQXKOVKUJRLQLNOMAQPWVJZYWRGWZVAFMLUQEFGMRFMDFTZDKVSILADVNFRYEYGTJRFSQKOHITNNVNLJCZXQADWVBXFTUK");
    msg.type = 4U;
    msg.properties = 209U;
    msg.durations.assign("VBJWQZHUQJQTTVWDRCRFJSXUORNIVYWGOPSGCEIWLEILZHEDWWVYXGAEMLXMXZDKYBBFCZPXAKVOL");
    msg.distances.assign("THOSGLYGPWSYWBSNLWVXJUKYAAZXBFEFONANLDJKDJYFIPXWCURBUGTPBABOOEOQYGAEZDXCVMITOSRHPHRYLTFUOTREKQWUQIRSSPHCMVCFUXJDWYVEYQEVPKTXTAGAVOFUCNAALGPQCWUDFMSDWDINDHNZSZKPZCFWKUMVGFABMIRLLNKEHKRZIEZYEDGHVMUTNWS");
    msg.actions.assign("ZTCUQMPKEDGCJBYGFIPBKMTXSTUIKFPUGXVAIVAIEEFEANKQQZUHNYUOHZVBYWTYGABHQOFPYZIPMKRFLYETNPGLZISLJMCXHWNDNDZMVXDJUQRVDCBWMSWXJWSMNSVQWZLFBUPOGVSDNJHETLAJRPWAKLAUDWOXGXFDOOIMPWLGBFZDQENEQRCGPFTZKYNIAXBLJKYGCUVXOWEBCQVCSRBTHJLRKNHCSTUR");
    msg.fuel.assign("RGPUQYKAADMDQLYNADKKFGDR");

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
    msg.setTimeStamp(0.584529821731);
    msg.setSource(33993U);
    msg.setSourceEntity(143U);
    msg.setDestination(30401U);
    msg.setDestinationEntity(136U);
    msg.plan_id.assign("DJEBIWDTVJXBHSWNUAUAYTOBIHPCSJGLIPULHBRWYCSVOOOVGZPKNULRNVBNLDHRTONMYZOBUJYHMUNRDRSMJFGLQTSCIORMLGKWCKCVPQFQXBGTCFIJQBGCHFMXZFAPQAJXYLIE");
    msg.type = 155U;
    msg.properties = 46U;
    msg.durations.assign("WIJGNYKJDZABJBRDHLVVBDZYBGNLAJFKKTZRVYNKNKGCGSACAFJWEZE");
    msg.distances.assign("XIYQEKCJCHRYGPIXKYDYFEUHXRXWILJBZFHHYLIXRCPDBFMZRUUEZGKMWVHDZWFJOMSPEAYFMQQJUPFFDDGINORIWWIKAYGNHFTAXLWHJVTUCNESAOZSAEDVQHDVKZTMQLQOVLISBPOVBBKDMYMAYVBTKQRZAXGOBXKFNJNWFQTT");
    msg.actions.assign("RKUBGOIKEGWANRBJVDOSODGJBCLVPNKBSWBLSINWUAZJGVYYMFUABRFICGVZZMTOPQACINPECUZPOXPEMFBLLHQIVYQRKXPTUIQUIGODOZJESRZJTTYASWIIVJUEXYSDLNHMRAKBQELUJIPWQAAMEYKCJLPQFHTFAFGTNXOZMCHFGXPYKCQQDBKKWRCSODVSTL");
    msg.fuel.assign("KNMIXKDHEEKWEBRQQCFQQITXRZUFHZHSUSFNPVUPTOIAKJGCPQUZWPSXGGOSTLZVMGMDSXWCVLILGRFFSFJCDOXHLQNZJFBBONDZP");

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
    msg.setTimeStamp(0.247616032212);
    msg.setSource(19954U);
    msg.setSourceEntity(78U);
    msg.setDestination(30819U);
    msg.setDestinationEntity(85U);
    msg.lat = 0.243823846657;
    msg.lon = 0.574218901036;
    msg.depth = 0.57337940725;
    msg.roll = 0.951517718613;
    msg.pitch = 0.712426805853;
    msg.yaw = 0.654197397133;
    msg.rcp_time = 0.113018619015;
    msg.sid.assign("VLVNXNAXQPDRJZVAYSSQUGUGTWUNOFYLHOKMUZNCREQYJAGALXEXSBONWVJZOXRDXLIMYYOSHWIUTYGMITLQFXEFOESCFAOMTCKMFYZTIJVJPPBGYDGBWKUGJNMCIHJFLNRPUERGPRBUWZXTOSVPKDGFHUSDKBRNNVZXLQDVSHUEBTHZWQHQIVIOTMARFDZBWZLRIMPJHPWWKXYGOCTPHVJZMQRIBLCYJFHES");
    msg.s_type = 127U;

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
    msg.setTimeStamp(0.0866237295349);
    msg.setSource(23553U);
    msg.setSourceEntity(217U);
    msg.setDestination(9670U);
    msg.setDestinationEntity(68U);
    msg.lat = 0.170354046001;
    msg.lon = 0.396955115739;
    msg.depth = 0.515964721844;
    msg.roll = 0.976267921058;
    msg.pitch = 0.605442193939;
    msg.yaw = 0.985178587923;
    msg.rcp_time = 0.814789729188;
    msg.sid.assign("MFYDWGJLUYCUWPTOSELYJXDVCNTCQIKHYLNJRAFMROIDWBXTSFXYEVRNZYAGKLVJRIIDDWYTJOXBLHIEHGWBMVDBMTFZHXTQIVNZEEFUGJHEMHLFARXKTTRWLXWOXCLSMRKOHQLDNCNEAZUAKWQPKVQ");
    msg.s_type = 92U;

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
    msg.setTimeStamp(0.478880044892);
    msg.setSource(6855U);
    msg.setSourceEntity(141U);
    msg.setDestination(42299U);
    msg.setDestinationEntity(177U);
    msg.lat = 0.9159980621;
    msg.lon = 0.014134802806;
    msg.depth = 0.401959791158;
    msg.roll = 0.719629562413;
    msg.pitch = 0.793086959739;
    msg.yaw = 0.718611706167;
    msg.rcp_time = 0.804421345565;
    msg.sid.assign("OAEGMEKPZKOORIHMFIWIVWWOJUKCWULAJLGBUFSYIXYBZEDHMMSUQZZGNFQIFQQTDIEZFOGOEFTBTHWSARPDJTTZCCZVCQFJKUBNDIEDXVPSMTPZGPYNXGOHGQFLFJKKRDVKPWAZNSRYLSAXQVGTNCTVBDMWJFYGHLXUBIPGRBKSLLHMUHXWBCPOATRCYCQSUANUXPREMEBYVRBOXYD");
    msg.s_type = 88U;

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
    msg.setTimeStamp(0.184908795832);
    msg.setSource(7121U);
    msg.setSourceEntity(182U);
    msg.setDestination(28633U);
    msg.setDestinationEntity(160U);
    msg.id.assign("YSQUIUADRDRBYMCXHVEWNPBAFXHDJRJOOLAZGLIJLHYTKTKBVGINOFYMISWWYBYPJBFIVOPIBQNUTEEMYFKBDSUQJFNKXRGLEWMTLQSVSWUYQJORCNPHYWJXCZWDAGEVTACRGMMQEWUAMNOVZXEPZJHLFKHGSAVNNPMRPCRGCTGCDOXXAZIDKKFBJDAWZPLZQTFXUCFKRITLXMQGVDERKGZLTMZWLVSQZHNFUHSO");
    msg.sensor_class.assign("QRAJMIOMGVLEQZGGKJADYTDQEOJIJXWJCKYEUHJFEURPTTGHBCFAYTHBGYHGRHIKEYQBMIKXNWZHLFWNNGBVXKKHWTPRGJQPSALPUFAVAHBKSFOLDPOVSUZXTMCPYISWQODUOLLJGBZRWDXLWAIXSUDCMX");
    msg.lat = 0.645328864272;
    msg.lon = 0.188490888602;
    msg.alt = 0.531851320906;
    msg.heading = 0.543797001795;
    msg.data.assign("EVKTMVCGFKAPHNMBBHMIGX");

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
    msg.setTimeStamp(0.744048423585);
    msg.setSource(30921U);
    msg.setSourceEntity(120U);
    msg.setDestination(12860U);
    msg.setDestinationEntity(85U);
    msg.id.assign("ZBJSOYNQFBCNVFAGKYADXLMXKWRTPENIACSBZJUREM");
    msg.sensor_class.assign("VRVWHTGJTLFJACOEPYYXQROUWDNWAEFDFFJKYDPSASTCCKCJLTIUURTBBPOJZNLFYNQKMBDHEFKZUXGXXPYEBHFQCHOLNYUKFQMOBZXNZGRZKRBPFKQDZBHILHWTGOPPVUWPCPVADYWQLVXEMWHLNUMTRTXCHGASXWUGMAZIIDBMOBKSWRYBOZSWREEHKLIGYVQDTQRNKVJICSSXJXEJIIMNDVZMMEUSSJU");
    msg.lat = 0.674639693529;
    msg.lon = 0.712155270014;
    msg.alt = 0.727936016012;
    msg.heading = 0.961487937974;
    msg.data.assign("KTZROQHNVGSWPLDPHQXXRSIWWGDRDJKZOBVXAMQIDCLVMAIBTXZYYREHIGJYZVBMDZUTDFWEIUMLXKMTLETBTPYEAHTH");

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
    msg.setTimeStamp(0.270754531623);
    msg.setSource(17791U);
    msg.setSourceEntity(62U);
    msg.setDestination(50483U);
    msg.setDestinationEntity(192U);
    msg.id.assign("DSNZEUPBHBBMARVZVOHXIPYLLYESGGTSMXARBVPUPIYOZDNFJEAQEHQQTTDWWXWXWKPMFJUGCNFXYHJILXEAADHKSKGFHUULGTYETKRWVKSZBYOPJVNTV");
    msg.sensor_class.assign("BOPJXYBNISFMUHBJGAUGRGURAATYDMIQIWKPRNWPZLZXFBCHXZSSRTIRJOHEAKAADPBUTELRFNLKO");
    msg.lat = 0.32202013387;
    msg.lon = 0.505110814626;
    msg.alt = 0.86655435538;
    msg.heading = 0.832156185862;
    msg.data.assign("YZCKUVLIDGYUHISALPGXTQNJABSAWKBQSDYOXZAFJWXVAWVRBMWLGJUGQGCHOELJKCHCRLUSDNOLMHNYWLQQXNARJMVEKPEPMUXSWIFMZVPNTDWVEVXVMSARUZXBKGHQNTQRIVSUFODLXMFDKHZPJEOOZZNTTKHIOCJPNECUMSHPBQJTZU");

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
    msg.setTimeStamp(0.59858287666);
    msg.setSource(50618U);
    msg.setSourceEntity(229U);
    msg.setDestination(4316U);
    msg.setDestinationEntity(138U);
    msg.msg_type.assign("WUFBDZZPKBKJPVBNNGZXBFXRUBPFVUYAZOOFUHGMIOCXILPYLBGJXNDCKEAGVEODGHSBMXIAVWMLDSHEKRSFRCZQVLPMXOTXBZWNYOCPWNTXAUAVWSADCDOLAP");
    msg.sensor_class.assign("GHLHIHLAVYRTCSHUBKPQSQDUTEALVDJZSBHGFWPZCUCMHROZOIEKSRWNSCJSMNPAPXJJUETYNJNILIX");
    msg.mmsi.assign("QQQSDEHLJQNUKFMYCHVQTIYECPZKNXVHFUURKLNIIDTORBZVYLMGSHCVPAGYNOSSVAUBMHELFEMWJOAZOCWIINYFEPOSKT");
    msg.callsign.assign("ZHOFJYERJWQDWEOQXKNFTUNUKZJDRXWCFWYGJKHYVP");
    msg.name.assign("SVXKVUUYYLMBUCURNBKETUYQMFHVHHZHEQMBTIQXXDJONKJWRSUFYI");
    msg.nav_status = 18U;
    msg.type_and_cargo = 22U;
    msg.lat = 0.772921502837;
    msg.lon = 0.68211421629;
    msg.course = 0.0659930037787;
    msg.speed = 0.0675557667657;
    msg.a = 0.476104470867;
    msg.b = 0.802591560052;
    msg.c = 0.314957390181;
    msg.d = 0.439118303998;
    msg.draught = 0.790300152679;

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
    msg.setTimeStamp(0.10147921303);
    msg.setSource(30578U);
    msg.setSourceEntity(115U);
    msg.setDestination(36142U);
    msg.setDestinationEntity(208U);
    msg.msg_type.assign("TLNQVMHVFWFACMVRDKZIMIJFOEVMBENUPRJNWXZGZTHLSEHGXRPUHQPCQMDXBFYOIRSBCUZLXKAIYKVVRGAFUMWNYPBUHGTXHZLLGHZDIIASECWJLCERBHHMOJIYTZQRBFNSWPKKMCDZDQHNFUJJLDPSYVSLO");
    msg.sensor_class.assign("FOMSIUJOYMQEDCZUUQDPVRCVFBSZMPRGVDQNCTXBPZTRKVTIEDBVMYHHGJRJJXBDMVVDJAEQJDIHWDCSUTQNHTSYKNOTGEACXLLXWFLUPPXZRVPBUZFJNBKPCBGQHYMRSINJRLOWLGUICYTJVZYZFHYSXLBEEXCWWQAGTIHOMZFXWJAFYXIQTNPSFUOKHKAQCVSLIMKSONOYSIMMURXEPAKGKYGPALLEGIFADDNEQKHKOAZE");
    msg.mmsi.assign("NJYKULIOBOFQHRKRTNEAVKPWIBVEWKCCFTTXGHMUJRJQLABMUWGBUCRZNJNUXDOCGSGSJHHHCIKCSXDSJOWDAPATHDTFRDUESBOCYISWKUGTXZGBOFJAVSQLWHYKLZPQXFL");
    msg.callsign.assign("QJQTPELZEUBJSFUCFBJDBGJHWIKNUOFSNOOCYZFBLRMPOCBONZQRSBUWKLMVEFQUAJYOCNQWYWPQCDSLYMAHYXGATWASIKDATFIXENBWICZRLPWWXKJJIVLYPQKXMXDAFCVZLHSDKADEIMGSMMKHTJIHVSGUXUTTIJNXOKYAEETHMFUHGKX");
    msg.name.assign("AEULCVXXDIAZRAGLSOQWXSDMOYNEZCFQFOTHIFLJCRPQMMCFAMVLZNYLJBSXGKRWPXPIKOKFVKALIDVGUOBXWBVVHHNHWWSSPMWGZUTMFTBDCXYIXHNSJKBPQELJFYUWZGKTFXPAXZYNBQLQBQNMTEQCPKRRAHGONDJMUZTMHYHEZAITLGUSYECRWJJOUINUJUSEDKWGWDRBJEVFTLVSHBGGQEIIBDRCCYZNDVYONDAKHQTFOEORSPTUCY");
    msg.nav_status = 129U;
    msg.type_and_cargo = 130U;
    msg.lat = 0.394187500678;
    msg.lon = 0.0276018627398;
    msg.course = 0.265888773703;
    msg.speed = 0.885603730144;
    msg.a = 0.190386317278;
    msg.b = 0.301217014348;
    msg.c = 0.580755781568;
    msg.d = 0.378881584907;
    msg.draught = 0.0697727057679;

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
    msg.setTimeStamp(0.489113336229);
    msg.setSource(49210U);
    msg.setSourceEntity(242U);
    msg.setDestination(60216U);
    msg.setDestinationEntity(235U);
    msg.msg_type.assign("JBNWXDBBXXRRXIBVENEVHINAECZBAGQWCLUTNVKMJTKAUFXFULCNAPEQSDPTNYQVZPDICCJDNQVOSAWENHEMRLBXIDRGYGGPVJTIXSQGWWAHZHWLOUNHZYKXHLCGLUMESJUHSCNYOWWGEZUPVQVCOFYFAKTTOWFPACMCEHBIJRYTFRZUMSZOPZVQFFQAOSLVKPMJMTB");
    msg.sensor_class.assign("HHLLFGZQRIFZMFUMACDHGVUOAFPPYOLWNXRLVQTKMOWWNDDCOICX");
    msg.mmsi.assign("VTMPYNJOJTYZQSXSBUIVWURARGQLNEMMHLKPITVTCNOVXOBTPIGHVXHGKSZDAXJFPBUSZOLATCTJPGFWKIKRYTCAMJDZRPGBCLBZBWYGRESLWZABZNCRJQLZFNKGWMIMWHYVFDNCMFAOKMBIFXKFYLKHFDXNHDXAWCUEPXOEINQYEOIJJEGDOIQF");
    msg.callsign.assign("VWTWMQHOLWFZVNCDGYTKACSZODENDVUKGGSOEAYSISIXWIGRFOABNHCPUJHOLVKADLULHGOCTNBIVJQYKNWZEZEACTREEVQMBDHIRKPISNRGBJBYDIPMJRWQNETUCSCVPYRZJXZBHZUVXSLIZD");
    msg.name.assign("XNWYYLQHIDIRMKWIDZKYYJAHUARDIIQYCOZFKPYIALNYNQUJJEVG");
    msg.nav_status = 233U;
    msg.type_and_cargo = 223U;
    msg.lat = 0.0297916296501;
    msg.lon = 0.842628890916;
    msg.course = 0.858292726216;
    msg.speed = 0.606813162271;
    msg.a = 0.186651234859;
    msg.b = 0.298461366435;
    msg.c = 0.302273198831;
    msg.d = 0.363205240668;
    msg.draught = 0.856000068058;

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
    msg.setTimeStamp(0.471933450895);
    msg.setSource(6331U);
    msg.setSourceEntity(125U);
    msg.setDestination(44166U);
    msg.setDestinationEntity(89U);
    msg.id.assign("FYKIOVAVCHVCFXIATWYNKPEJQSVTLXKJKAPPNXRRNXMBGRWWJCCUYOZVNYSFGHFLZKSZPJYCGBTDJFEHFLJFUXSMTRRZXP");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("WHEBGMZKPRETSKXVGDOWZZIABHGNMJEVYUHXUJRCNFETYRQPMXVEHAJZKZKDUWVRIRYWAPWVUQMYNREEEIUFCKXLKCSBBZARUQSFIJTISOYPMZNSFQJKHTKXTXVIMCUEXLWLTMJOBYZGDNJPCLUQDDQIQILRBFLWTPFQZDGOHNRCGTHHJVYGSWOILAOVOONYFGBYBWLONOSBTQZHMJRAAPTDSDCCPGWQXNDBAEFLLNKDFHUXFJGYUVXIVKSMP");
    tmp_msg_0.feature_type = 174U;
    tmp_msg_0.rgb_red = 28U;
    tmp_msg_0.rgb_green = 100U;
    tmp_msg_0.rgb_blue = 94U;
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
    msg.setTimeStamp(0.509479301644);
    msg.setSource(61389U);
    msg.setSourceEntity(140U);
    msg.setDestination(23553U);
    msg.setDestinationEntity(136U);
    msg.id.assign("ZDAFKOJNWQLCXIHFLYLVHUNQEVCKXPHOSUYZJEPVETFPEBXGGPUDERVVUTZMMTEONJUQJYLCPGGDVZKOIKTRTHCBSUUIMOMWGCPZMZLOOQDSQIBNJYFZRALAJDWSQAYIROHJNAXSNRGKXFBCKSQZDANDCQYEKARASGRKTHMIBFKYCOLPMBISFFFXDWEVTYJWPEIZMWDZJPCLTBOHUQIXXU");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("AFKFIBYHCFPVNZKNYUHKTNNLOUCUDVLXTNWHITYJIAZHXXSBYESAFCEIDDHOMBJALTYYDKIDJPNDWTFKRUWRCCAYPCCLXEXMQIIVOYJROP");
    tmp_msg_0.feature_type = 14U;
    tmp_msg_0.rgb_red = 72U;
    tmp_msg_0.rgb_green = 76U;
    tmp_msg_0.rgb_blue = 53U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.393106664338;
    tmp_tmp_msg_0_0.lon = 0.405144618638;
    tmp_tmp_msg_0_0.alt = 0.0290430127581;
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
    msg.setTimeStamp(0.324619811008);
    msg.setSource(43U);
    msg.setSourceEntity(15U);
    msg.setDestination(32464U);
    msg.setDestinationEntity(182U);
    msg.id.assign("HVIQPJMGZFETBUQBSSKYBLLPRK");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("ONRTBCIDQEKQLERDYSNNLTRDELPIZACOJRYWHFKUXSUWJKNXSIUQAYRZHTTECGVBZOBQWBPCCSIHLNMQFAQMLHEWBSKGHMZRZFCJTNWJMDYIVULNZCDAVPXGPEBJUK");
    tmp_msg_0.feature_type = 121U;
    tmp_msg_0.rgb_red = 98U;
    tmp_msg_0.rgb_green = 211U;
    tmp_msg_0.rgb_blue = 88U;
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
    msg.setTimeStamp(0.735628257825);
    msg.setSource(45734U);
    msg.setSourceEntity(254U);
    msg.setDestination(9820U);
    msg.setDestinationEntity(83U);
    msg.id.assign("JPJBISIQTFMWIYMNQDGWFRXWBVQDWOSTIVQTNAJBKOYOVIZWUSRUGAQVRHZMMARBTNESPPNLYKOHYFXCFAAXNSCGMXSLEDKKDYBPECXNLWCHROGJUNYLHRFESUTLGHUGVTEJJEGEAHOYOEKRIHVLYKKOJIYFWJQGUDHXCFUOUCANHDPJVXTZDXIBELVGBCPFPWNRGCPBFKSWPIMZJBXXPCOQDDYZDQQVNQMTEMZC");
    msg.feature_type = 61U;
    msg.rgb_red = 159U;
    msg.rgb_green = 45U;
    msg.rgb_blue = 19U;

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
    msg.setTimeStamp(0.705771073939);
    msg.setSource(40785U);
    msg.setSourceEntity(4U);
    msg.setDestination(15459U);
    msg.setDestinationEntity(24U);
    msg.id.assign("EIKMUGZEXBFSJDVGDYALJTIOXVCYYPBTZVTKENCTXVBCONNTPBSFHPONOHZDZQJOMHXCSUDDAZEUYBYWYNCRVOEDWWLULDQNBKXCNNLALOAZUKIGHUGJHEZFYFRQWLJ");
    msg.feature_type = 118U;
    msg.rgb_red = 156U;
    msg.rgb_green = 157U;
    msg.rgb_blue = 17U;

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
    msg.setTimeStamp(0.0561769034179);
    msg.setSource(31845U);
    msg.setSourceEntity(192U);
    msg.setDestination(43858U);
    msg.setDestinationEntity(93U);
    msg.id.assign("AEFJQUNJVAWGFJKOSOTMAZZXEJNKLUXRXAMDXYHIUHPAHDINWMWITGIOMDWLWGZRICTQDXAUMRGLOKEANZSOUQFFSUZSGOTBPQPLVLHJV");
    msg.feature_type = 242U;
    msg.rgb_red = 29U;
    msg.rgb_green = 254U;
    msg.rgb_blue = 76U;

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
    msg.setTimeStamp(0.881145764129);
    msg.setSource(38862U);
    msg.setSourceEntity(73U);
    msg.setDestination(36485U);
    msg.setDestinationEntity(160U);
    msg.lat = 0.614180516799;
    msg.lon = 0.180619688546;
    msg.alt = 0.278932687308;

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
    msg.setTimeStamp(0.193272530318);
    msg.setSource(17536U);
    msg.setSourceEntity(16U);
    msg.setDestination(24055U);
    msg.setDestinationEntity(252U);
    msg.lat = 0.0832732852628;
    msg.lon = 0.586296161374;
    msg.alt = 0.719467518333;

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
    msg.setTimeStamp(0.0663170956015);
    msg.setSource(31142U);
    msg.setSourceEntity(212U);
    msg.setDestination(62102U);
    msg.setDestinationEntity(158U);
    msg.lat = 0.31114683607;
    msg.lon = 0.1791580894;
    msg.alt = 0.807571562481;

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
    msg.setTimeStamp(0.0705542541222);
    msg.setSource(22617U);
    msg.setSourceEntity(246U);
    msg.setDestination(63146U);
    msg.setDestinationEntity(34U);
    msg.type = 41U;
    msg.id.assign("JYCWAKHYABIUICTBGAADZYUWBZIXDFLVIGZACMCNKHZEJHCOJYEJESROONRFAVMSDGPYYGOLTFBARTQQVGEJBLPMY");
    IMC::UsblPositionExtended tmp_msg_0;
    tmp_msg_0.target.assign("FXRDMAVMHGAPURFZHMPKCFUSJNRXTWQOTZRBRMNKFOCEFNBBVCQIQDQRTZWWVILV");
    tmp_msg_0.x = 0.965814526917;
    tmp_msg_0.y = 0.620319512034;
    tmp_msg_0.z = 0.924637311803;
    tmp_msg_0.n = 0.619751900635;
    tmp_msg_0.e = 0.615471309685;
    tmp_msg_0.d = 0.287331936147;
    tmp_msg_0.phi = 0.95061464813;
    tmp_msg_0.theta = 0.229928795271;
    tmp_msg_0.psi = 0.0392870242154;
    tmp_msg_0.accuracy = 0.872939578841;
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
    msg.setTimeStamp(0.888133329361);
    msg.setSource(61389U);
    msg.setSourceEntity(40U);
    msg.setDestination(29161U);
    msg.setDestinationEntity(84U);
    msg.type = 135U;
    msg.id.assign("ARSETQBKNFKANDKSYXNOAUCFFPESYTZGQBGBOIVHUAJRGUXWXQNJKJZRZCUJONZGOEIXOLUZHPRIHFWQKOCETVLMRDLGCIVZVMTGSIUDHLLZONKHYYUSURALERMFBDTFMWYIBKYTVMEZGFNL");
    IMC::FormationParameters tmp_msg_0;
    tmp_msg_0.formation_name.assign("RTGHWRPEEXKMSHVVQICUJFXPZGQDRRNHYMGNNAFANPWCXVMYF");
    tmp_msg_0.reference_frame = 116U;
    IMC::VehicleFormationParticipant tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.vid = 54723U;
    tmp_tmp_msg_0_0.off_x = 0.156863490168;
    tmp_tmp_msg_0_0.off_y = 0.869233310578;
    tmp_tmp_msg_0_0.off_z = 0.930797025692;
    tmp_msg_0.participants.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.custom.assign("MCDISUJLRPNUVKPMGTATGXRTHKWNFHNBXYOYYZWOQZMYJNTKEKIJUGXUULEAIYHPDKLEBHQQVRZFHXZKSQVTSWGFBBYOWVVPBMMBJTLFMLVORGAUYWSKRZNLCCOQLPYMMHSIRBVIWVKFRYPGZRHCGFLRJDKDGDMJAFXEJFIJOMNDUAOEIBVSXGSWGJPOOPDBAXCFCIXTEEYTBTLXNQPKQR");
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
    msg.setTimeStamp(0.376995389161);
    msg.setSource(8889U);
    msg.setSourceEntity(151U);
    msg.setDestination(4502U);
    msg.setDestinationEntity(79U);
    msg.type = 168U;
    msg.id.assign("VEMYLBQVIHWNWQAYSIPJSEPMIMVDVUIAZZPJXGFTQRUBVYBQZHUSLXSDKCTSCDRFBEDTORZCCEZONWQFLNTIKSKDWERKJEMSNHHFZXSVTVEBKFZGCXVCVUMBYYGOLWOQECIBLHXDWOYDGDIGNPJCMIMMUUKHYAJ");
    IMC::Phycoerythrin tmp_msg_0;
    tmp_msg_0.value = 0.617882982546;
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
    msg.setTimeStamp(0.806297233307);
    msg.setSource(57738U);
    msg.setSourceEntity(11U);
    msg.setDestination(4427U);
    msg.setDestinationEntity(161U);
    msg.localname.assign("SLATMRSUUWHKRVQFGLKKBTMPACAXHGOJDBQZPYYEOMNDUVIEKEQLSEYNPBTVCXLKFMPOJJOCTDALYNQKBPBXYSWDJNGLOYBUGCZTMIXTUOVMFHRRTNOBZTURRFIHLJNWQNGSSCG");

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
    msg.setTimeStamp(0.120776215703);
    msg.setSource(14879U);
    msg.setSourceEntity(158U);
    msg.setDestination(27454U);
    msg.setDestinationEntity(223U);
    msg.localname.assign("RKAURDPWNRUWORQBEWDCABSFJJTFWASYDJCMYNHORUCVLDVSUGLVITTBHFOZEGAGOGJLSHTHUDXUIQNJPJIYIFBEMTWOXBPQKKZFCXGPSXMNMNPYCRSLYWVLRJPUCAOYFDAXSMSMNNZKMTVBDHZUQUFFBZZLEJIHLLXSKMYKOZIHTVCIMCE");

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
    msg.setTimeStamp(0.656338348973);
    msg.setSource(9156U);
    msg.setSourceEntity(189U);
    msg.setDestination(37796U);
    msg.setDestinationEntity(230U);
    msg.localname.assign("ZOZYIUXBQYYXLFDCKRVHKBPEKVCWRBAKMESQLRPESWUASIQCKHNWEMZWIVTFYPLXYDPUIUDGTNXUFNCINABITSUKQGMZAHGMCXZIKOBDFVSGJBFQOCNNWMDZOEYHTXLRSCDXRQJNJDFEGAWLVXQUTGVGPVHEEXMOQMLSMPPTZSAAUDZYELHVYHIPKYINHLTYAJJFOJFIONBMRJPGLLZSM");

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
    msg.setTimeStamp(0.559126303624);
    msg.setSource(19998U);
    msg.setSourceEntity(193U);
    msg.setDestination(61739U);
    msg.setDestinationEntity(190U);
    msg.timeline.assign("NSICKLTUTCGYAYALHJEDJBDLNWSRFIHJSAPCBZEKWHQBLFQAQWLOOTRNJPVGCCEQWMJVHIKYSKWMNXLTPNBWNPXUMRSLFPUHBHGLEZXZQDFGSXMZYQZXTVRKDDNAG");
    msg.predicate.assign("DVVITVBTRCMMNLATXRCEMACUJUREEAVMFRRDUJKUYQGQKTGPQABKBOEFEOLWAKBKOWHEMZGPIWRFWBFMYIIODSNXOFHTCVYMNAMQCZVSWYGXBULAOJQL");
    msg.attributes.assign("TZPHPXVUYXMYLDXZLPUMDSORRWPMEKZCHFEESKIYUNNDJERUCOQMTICICJSDOZMOZWNFBKBYYKMFNXHCLLRWWILUKFYEPTILXGERAWHYDUPIEOINDVDVZQHNVQQRBJNTIJQMYUGQBLTAGSROEQMFUUBKSPFAJLSVJBXJJUMHCYBWDWZCSWOFGCHTTBHAAYGAKGQOFXVHTEZFBXWDWCBQVPGNGCJKVKDNXAEFMVHPZRSLRGVNS");

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
    msg.setTimeStamp(0.24545932866);
    msg.setSource(61655U);
    msg.setSourceEntity(12U);
    msg.setDestination(59351U);
    msg.setDestinationEntity(16U);
    msg.timeline.assign("EKXQAVRRRBBQCV");
    msg.predicate.assign("OUCSETMYTNGDYLEPEMNWVHCYHXPQJJNLSGDYTOWRZRHXAUOCFXVWIHZPXPCFGURAKLSQZOEJWSDGNBUPWMLCIZSEYLBPAANANQQVMRATCKHQZSTLVEGOYAPMKORLDASBXRHECIVMGBTNJUEJVTYXOXZURPGTQIKWORWKVRKKINRVHIXJPKFZCTQZYGGBKJFU");
    msg.attributes.assign("WUXSNBLJDSLYSHCCXNOGICEOWNZRBKVNXPQHCNNPIVXZUUYLKDWHCJSDZEVOCRESUJYVFTXARQUDJLVRLKSPWWWRKUVIHQCLPERMZFPJYGTFAGDQXLWKCFZOYWOEFIGBKVHDOYZGIABAHSFENAMOGAUNQMFXBZAMWLGPTUPAMKLBIJOKQJBTQCJFAMIYVCPSZGDBEUHRDURVOHPPMXEZKDQFSMENXYFTQGHDITRBXYEIQVNMMWGYBITJAJ");

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
    msg.setTimeStamp(0.690968578057);
    msg.setSource(53521U);
    msg.setSourceEntity(143U);
    msg.setDestination(40406U);
    msg.setDestinationEntity(229U);
    msg.timeline.assign("OMLBMEUFRVSCROVCGQFZLSGXAXGZXDHYPRHHFKDOWTPCLBGSJZ");
    msg.predicate.assign("FIWEXVEXNHLGKRJQTSXSPLUHNNGMJKLEACNRPSLMCXKIHUGTPQIRUQWAVYZDULJBRIBDFTKHAUAHAHZKZFMHOVZOYOYBELITSKFDDAWQZRKCBCGTYXNYWYOMTSEGRDIWWYZFXN");
    msg.attributes.assign("KGEDQHEVLCIDKOJESJQJFCUMQMGYHRILEZHQDWJINNEYAKZWKLCANYXQBWDVALKLXDGMBNSPFTIACVFPHYZXYGJLPSWFFGHWTNOTGQPMCDDBPCOFZQ");

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
    msg.setTimeStamp(0.994326145322);
    msg.setSource(62456U);
    msg.setSourceEntity(48U);
    msg.setDestination(12388U);
    msg.setDestinationEntity(161U);
    msg.command = 173U;
    msg.goal_id.assign("VNWIIEPWFRAHYKXSQJDAFZUSGZEISZUJKDAXPCOUCAMJSHWOMSHCPBRLCEKQNRQDTVBUJNZIDGXYGUCGQZDEVHYWCJGDNLOENFYGIMWWBBVBRKJMZRZYPHAOHZQNLOVCAPIUKTNAETF");
    msg.goal_xml.assign("TRVIYRURBCKUMEKLECTNDQGPRYWCAAHPJLMWNQJJEHRDKQRXBSCUIHHGQKUAZNGJAIDXLHBHLBABWMTTOOXPIQVJYPQBNJFNQCVF");

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
    msg.setTimeStamp(0.391648087764);
    msg.setSource(41451U);
    msg.setSourceEntity(26U);
    msg.setDestination(2492U);
    msg.setDestinationEntity(251U);
    msg.command = 37U;
    msg.goal_id.assign("LKCEJMDGGXSYVZUYZGDWNVJPGVTZMEYPFLXMUTDPWYHMSBJJETHTWDEBMUCPRMIPMDTECQVYNXYESNOFKWPAYPWQOFAXLBQLFLWZXSOCTDXWRMNJBPQVNKIHCHAYUGIRGQKNQFROXKP");
    msg.goal_xml.assign("CJNLCSIYINIWTOQYKVJEJGJROCMHLIBSNDOPCYYNAQKMSMBSVVGENHXXFFIRWDTSKFOWUAVOYAJLPTQKKMHWWFZDXZEIOXYQKXHXNNJDGMPBSOTMPVPCTBGFGARMYLBTDTHAPIBWNVHAGEYWPCVPZGHKUCJLIASQQEFHCYZDJLDEUSRWXTOEGEVANKUPGPCXJZAEZKARMRDEXWL");

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
    msg.setTimeStamp(0.641130131934);
    msg.setSource(48605U);
    msg.setSourceEntity(201U);
    msg.setDestination(38662U);
    msg.setDestinationEntity(240U);
    msg.command = 126U;
    msg.goal_id.assign("QERUMBIWEFELHLTHXCYJG");
    msg.goal_xml.assign("YHVOUIKEKWFZDQDLGNJRZMVYHFXBHWUIJJEBPPQUNTETLFBCSOUVARIXSLBXGKDPWJSJDKOXKLWAWHATMHCZHSWZOBJVJWNPFRBSUWRXIMZCFEXQYMBQTTZFHALLEGWCFDLOTYKYQKJXYRQXXGTYTERNGZCIEIMUVKOIWSBOUYLNAKJREIBCVNSCGDQARKQAQMXPDDRANGZEOMHDOFMLDCPUFPRTHSNIPVIPEVSLYNJNGAZQCVS");

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
    msg.setTimeStamp(0.106246584526);
    msg.setSource(44080U);
    msg.setSourceEntity(183U);
    msg.setDestination(47532U);
    msg.setDestinationEntity(232U);
    msg.op = 50U;
    msg.goal_id.assign("CWFDEHXCNLVGLKDDKWGRGTEOPNZIQORFHNQPMXLVKIYVZUQOHIGGJICWHVPFZSWTRLEYQUPHJBRNHCPNIPJVDSEKKPHOYCDJWJQMTHLBYUFVZFXESWXLUYWXDVFZTVOSWGWIPGXSFDKAZXREBKAURSMNIFGQTEXRDVTAMOFCIBOYIMINLZKL");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("XPCVDZOPOXTDAGNYINQSRROKUEVLHEPWOGXXGOBJCRNZDJTDPSEWOSJXJRSDKSGGRMRCBBAUHFMJFKDVUGIMNEIYMTHWBJTMYPINFTSIKEAVHFWQHEQAVLHZCKXBYLXJAFAAEQVUTCUFYLIOTZIPIHDK");
    tmp_msg_0.predicate.assign("NXQOWYMRDVPJYDEUUZIBZV");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("KUKUHNIXINISIZMHZRAFAAGSJRQXCTGSOFJXC");
    tmp_tmp_msg_0_0.attr_type = 183U;
    tmp_tmp_msg_0_0.min.assign("OZJYSLNFQHCSPMOSMEJESBCROMRUMTVUZBVDONKNRYCVDLJIXONQAOSTABYTULGGAV");
    tmp_tmp_msg_0_0.max.assign("HCQAGKBBNLDCPXCIMARNOITOOYPJUOHMHREFASACYYJUEVBZNPLCNFZMZQWSWMPYVGGVWESZFMVFJIBYISSTDNLLTIIQMKLMXNFZQDKXEGKEPCGOQAHDJHCJFKNLRHWDWIXGJERMZNXHZWHLQBJGUXLDYOKCEUJPFCDEQLACSOODTNVNBULPQBZVVIVJPQHTMTRKGSBUZRRYBSOTXXZMTHWYSIWXB");
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
    msg.setTimeStamp(0.58959653631);
    msg.setSource(5139U);
    msg.setSourceEntity(117U);
    msg.setDestination(36584U);
    msg.setDestinationEntity(222U);
    msg.op = 46U;
    msg.goal_id.assign("IGFARJUQXQXDDAW");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("XXNAMBDSKJDAKLJRHTOBCYCTMBXCKG");
    tmp_msg_0.predicate.assign("NRDSFMQGURFJHHPLIQWUJGYKHKUAPBJMMDKBMCNAABZKPYLWTSLTLMRJJDCPYSKFAGLHDVXWKNIJYCEZWPETRDZSYESYWPDTNYXLMEDIVMOGIABHNQIYEQZRXDKTEVGTIATHAXFQNJPEOUFXDLHTQLLVZN");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("OJTNDBFRJMFLSPFMSPFRMRITLSQAURLECRZJWCFJSHBIEOHNBBXKGZHCDNDAFVUCFVAGBFMXXDSIDMWRMMETAQZDYQYWCNUUHHODAUSWJXTGCMRCKTQAGMBPQEYYKPBCTBPO");
    tmp_tmp_msg_0_0.attr_type = 135U;
    tmp_tmp_msg_0_0.min.assign("MHNKICRZVWGBWQCKPVUNBREARSFNQQDOVKHODGALUYBEBBNMSBEIXREYUSILBYHKTTPIWWHHWGDXLOFYUJTCIVCZJ");
    tmp_tmp_msg_0_0.max.assign("UWXCLIDQRCAAEMRFEGYFGNJMIOLDPCLCJ");
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
    msg.setTimeStamp(0.936597722827);
    msg.setSource(28129U);
    msg.setSourceEntity(11U);
    msg.setDestination(61794U);
    msg.setDestinationEntity(72U);
    msg.op = 194U;
    msg.goal_id.assign("AICEHTVAEMXTLQPATJGVIDKNTUBCSMMYLKZXIQVURDKHJCBBZRSWQEMBUPOGDJUMJCSIUOQZQZNTYWDJDYHSYEPMNVYKWKDHFJHPRZNDZWUFITVOGGFHREOLGWCRZRZJLLAYDIBPNIKSHUKYLXPBJKFHTASOHYKGARCPDGUSVWMVSMJJWXTQPNFLXQNEIBTWPYFLOSCELIIZC");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("DXOWFHCXRNOPLPCUOHQGWARODRXHFNFJCAJASSZAZDOPPRHLNFKGZIQXYJWUSAJJLMQSVDWONBWFMCZGMRNKDVSEHQYXJTGKSIMMZIDRTUMBHXTLZHEQQOAJBNCWLHCAPFCKKEIUPXSOGYMTFIUYMRVNTLHYIIKWLBAZXTEKKTMQIZQUXFRBBCJWCDTRI");
    tmp_msg_0.predicate.assign("TUFMDXQEIGYVXUJCKXPPDWHBHJJPRMQMVNWICUZORIAZBAKCEYMZDLQOHKATBUXOSLDKMOQSFQUZFZYQYXFEOPXQGSIEPQNAVHOZTTDGSCWOEUWMYPBCVBQGVRLCMOLFGPMHOBNTAVWFYFSTIWBRLKDXLNHSRIFANBXNCZNSADBRZJBGJUHSNTJYJEHTHKKVAIKNSLUSKCCUNDQGIJGPPLGWRZ");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("OJUZKINDZPWYUXCFXNMLKOETXPLKMPHGICJQWFRZULFLTOLXJTTCHQJRFAEQGSVTAII");
    tmp_tmp_msg_0_0.attr_type = 117U;
    tmp_tmp_msg_0_0.min.assign("NCDKUEDUOEDVKRRSGSPVDQRTOCDLCHEHCFBLQPKOYLXEJOWWVZWDTUURVWVIAFPSHJOYMNIHXRYXVFKECNLKRTBUYYQHNLUGAMZQSSOCJQRMBJEXYPTMBFUXPSVVJMZFMQW");
    tmp_tmp_msg_0_0.max.assign("FCSORLXMXVJNOGQWIDFKWOVQYAAMYQPGRWLNWM");
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
    msg.setTimeStamp(0.307172944592);
    msg.setSource(6932U);
    msg.setSourceEntity(172U);
    msg.setDestination(43887U);
    msg.setDestinationEntity(160U);
    msg.name.assign("QPSAIRBKYNUNBZDVMWKGBPTIPAWHREXUTPEZBSKZEOYPQKFYNWQPGJSGBIDAVZDHEOVJDVQSYCTGREVMGTFSEDSBDDODBGQYUXDNMXAFNMFLFZQCWGUYMMOOPOLOLJSGCLHSHJKCAUBATMLINWKEWCQXRUIWXJOUQNHPJKXYIRAIBFZTSOJBFTAIEESJKCNIXUNVCQJNHLZATCVLUPTKAWHFOHHRRPVFUMXZJLWIGWYRLGFMCZKRZCDELYTR");
    msg.attr_type = 61U;
    msg.min.assign("LDWDUZJEMKMUFVARKVXSIOLCMGNEIKSBXNOSGZAPGLGCPZXJTVIXYLKGVUCBFGHCRBBWTQXTIVIAJBRMEBOMWRRQVVOGLMALRQYNFDZZSPMFUEHICTFMWTZNYOLYPWVETJSHABSYYJETHCCXWGBJLYUFTXADDCLHRNUNDHJUAJNZKPABTUGRHOGFQWWIPUDQRHOEYRNIQDAMYCKOQVZOQDWVQSAHKLQIP");
    msg.max.assign("HRHLNFURYDZUERRXFELXKUZSUOZSBRGY");

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
    msg.setTimeStamp(0.396059819643);
    msg.setSource(59634U);
    msg.setSourceEntity(202U);
    msg.setDestination(52751U);
    msg.setDestinationEntity(116U);
    msg.name.assign("QGPOKOIZMCXBHZJULYRDELITECVVJXGOTZELLOCMUCO");
    msg.attr_type = 37U;
    msg.min.assign("MDHHDGHSJZQRVLRGKCJHAVCOYDNGVTFANBXINBMOUSPVXBZDNWEOILVTSOXPRUYFAUPFLQFEEHKZWIWKRGLGYBYUZFSWLTVTUFIDTORREDZBJKJQCXKAWQDKTPSE");
    msg.max.assign("IYYBIBCLJMFGAVBAKZMKDHWFXNFXEPCSKQXPRJYUGSBLXKLRQTDZQXHVORCUGEEBSHNFAQTTCMVJFMQDSWVEQYLZWC");

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
    msg.setTimeStamp(0.906658192525);
    msg.setSource(18668U);
    msg.setSourceEntity(37U);
    msg.setDestination(21340U);
    msg.setDestinationEntity(6U);
    msg.name.assign("JECTNCRRFITHJQINVVELCKFSOJTRUXWDAQBNDNBFEVXOXQQFBOHFQHDVBIGOYVWMESJOPHBDDLLCEUPPDYSXGWGSFMDCVWYCZGHKBPQPLMZGSI");
    msg.attr_type = 41U;
    msg.min.assign("UKGPCPVTMPYEMXFZGDMXZKKNGSYCOWALUAISOJHGSVXAZXEYAJDIWYCLSHUQRL");
    msg.max.assign("RWUIGFWBBEOOOIBQUIAYMWNRBVXWTKQXZARJJGHUGSXSVGHPPPIEDSBPHVUKCTLRWRIZYZLHCKIGOFECHHXETPBPVXYVLSSPAIDOMSFASNTMFGXZGACNUSZAQRAYTQPUCWKLRPYQDQSJRHDZRIRFLNTALEMNOAXOJWYWHQKMLVHUPCTEYKTMDTSXNKBCIKVCMZZEEICFNCJDNJDHLKJVMQYNMWOGJGXUVLXQLQJEYT");

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
    msg.setTimeStamp(0.744785719562);
    msg.setSource(55369U);
    msg.setSourceEntity(41U);
    msg.setDestination(58417U);
    msg.setDestinationEntity(20U);
    msg.timeline.assign("MEDCPZQEBZRQLRBMZFKNIAGBNNYUZSQEOBBOFPCBWNTTQYCQHGMYAXGCPQJDRTSTUZSNIRRXSSCHHGGXRMYFSADHFMWSPKGLNGNLMETTZXXVJPHUINAELFYCBPTDCCC");
    msg.predicate.assign("LEOACXBKSLIKVJMWTUEWDBGTAJGFVTGROTFFVWXVUURRRANIWDOTNFSVATIVZDWJRYMPPDJAHPBJONNKEQLRFMPCSUHKZBUQYFNXHSBORHHCDCLCZEFCPLDJVPTTYWLAOLJYURXCJQNHNQYQGXSZWDOKNIIISYSRQUIBBHOGHKFVZKLZQLLTUAEVTYFNWMSXPMYOGMSDGWWGZGQZJIPHEZYJXXPXDYHMNRBGMIADKVXAC");

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
    msg.setTimeStamp(0.813293525865);
    msg.setSource(60482U);
    msg.setSourceEntity(134U);
    msg.setDestination(21444U);
    msg.setDestinationEntity(230U);
    msg.timeline.assign("KEGDIVXTMLOWIVYKUDLNGIBSNKBUNJQARXBALRJYMWDMQHYZXSNJLAHBDFWYUTBQFUIEJYE");
    msg.predicate.assign("EIQQWRREFAQCWXUNOBSWCCLCRGOOJUVONNKCODCKMAWXDOLYNBMEUJGSEQTATVZHGQFBQDJIMGAJEGWIPFUTGHNYUKHKSIXKHDAJDVFMVLYVZDYWSRKLDKCRYXTLWZBAPPZPRNQUKSUOPIYJTSKXGJFCLITSSLNQUHXAZVKWH");

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
    msg.setTimeStamp(0.499290388416);
    msg.setSource(40719U);
    msg.setSourceEntity(112U);
    msg.setDestination(17095U);
    msg.setDestinationEntity(233U);
    msg.timeline.assign("BXHXBWWBIZNTJVQNJOBPUCQHZILENPVGETYTOLQTWJUKQFYSWPRCHTIGUMYGDQHVXODYUVRPMDOFHORVXSI");
    msg.predicate.assign("ERKULJNQRHUWTEZEXQQVSDYEAFADXSGSDCADQ");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("PHDDFYSDWGJMAYLIRSUTTOESCOVTYRNUFXRYRBSOYAXXHNEKHRQUTMYBPIBIUQWFILHRJJGPHYCHCBPVTZMWO");
    tmp_msg_0.attr_type = 52U;
    tmp_msg_0.min.assign("DELNZPGGRFZHRJRABZYKJVSJGOXSXAXFUUDYCBOCFJRNPHHTVWIGNPEEXBZVRSYOWJMVMSHDTSKYXVKMGTDEUIQEYQAVDMOHOKJWWIPTPLSBCMJZRXZBBKQBZAP");
    tmp_msg_0.max.assign("PMOCSJZERDFPNOEWYACLDTFLEWGCCTPCRMYQNHIJYMGKXUYVKLHNASUIXXKVRDXILQURNMWBVPLMTXZEBHVSSSIXKDBFYJZCTWOFTGDQVIHFQDEJLGATNIRCXYUOUFXMCBNUUOEEAZQYMHLMCFIWNLVGOHRVPPUPDVMZEGKPRLABGZTLZSAEVWTFSPWFNGVYPDGIKGOONHXQJAINH");
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
    msg.setTimeStamp(0.65660073238);
    msg.setSource(34878U);
    msg.setSourceEntity(187U);
    msg.setDestination(11205U);
    msg.setDestinationEntity(193U);
    msg.reactor.assign("RKVGGRTUKEALDCTKVSHNRVALZDPIFFCKPWOSULYELXSPGLONNQIOBDOBDIGAUFSIHXUZYDTZPE");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("YAAQXEDQZSXSBQEJBKEGTPJMSNKFIIUMWHFMWSGHZWHIGOYBCJVLJVGQHYYNVFXOAGIPURCGHGORLJCQWAFISEYBYTXTRBSFQDFGLFVZJSYDEHKDDRJSCNHCBANADUMOEKLBPTVTVZZLQOYHDOUWMKYMDPMZCRQTYNLPINDXUBAQNWOVZMTXNJNAIPLZVKXOCPCDJKXLTHIRAURMXWONEBPEHFZWSUUSKVXOFW");
    tmp_msg_0.predicate.assign("LIHFKJPFVTOSQFJXYNVMIECIVBHR");
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
    msg.setTimeStamp(0.2820835765);
    msg.setSource(49642U);
    msg.setSourceEntity(6U);
    msg.setDestination(40144U);
    msg.setDestinationEntity(37U);
    msg.reactor.assign("PBOKGXDLFVECEDGYXUTOICEQPONHDSNCCVWUIJEBNTGDISKHHKOMPJEIZOHQPNKQFVZDCBGIYXAPEZJGIFXHWWDTWTUCLVGLRRREISHAUHLLPESKCYIVFQYMBMVJMLYQJXKBNWVXUQIDENYUHUKLUAMRNATBBFYLGAFXQONASBTVBQFWNTAOVSSWHRMUJMMSIFZRGWDAKYLCZZPVFKRCOZXMDTGN");

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
    msg.setTimeStamp(0.588741816685);
    msg.setSource(53227U);
    msg.setSourceEntity(128U);
    msg.setDestination(4978U);
    msg.setDestinationEntity(242U);
    msg.reactor.assign("KENDDCYJPNVLMUGSIUZGWYTFDOERMWOGCACKBOQRLRWETULTBYASTHHANHNVGNBUKTJAYUSEVKAXYERCTPTHPZLMFISXNAPFKQKXPERVBWZCOCPJPMSFKMLVCLZAKNDFWXRANPFURUJOXDTDVUXLIENWVQIJMZCRHGBAGFHZQNISXYYEWQBKSZXOFGMLPBXSRVJ");

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
    msg.setTimeStamp(0.943062145191);
    msg.setSource(29228U);
    msg.setSourceEntity(144U);
    msg.setDestination(59798U);
    msg.setDestinationEntity(110U);
    msg.topic.assign("HDQTHXDERKOOPAJHNPENMCGFHLUPIBXMKVKFDXOLWYPWXTPEUGCWVDXQBMGTRQOHUYIAURAGYSUNEMGHUXIUVFNMAFGQRKATORAFXEUZQOGDCWTOCFVOWWWLXKVIYKKK");
    msg.data.assign("PJCCDZWNBUWYRTJWJKMFYLQQVLU");

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
    msg.setTimeStamp(0.324223538884);
    msg.setSource(58226U);
    msg.setSourceEntity(230U);
    msg.setDestination(4008U);
    msg.setDestinationEntity(8U);
    msg.topic.assign("YDNANTJIHBGRILKJPZLMVOZOCQDFZQPUMENFUGBJHPRJSOUTQXUXZJSXRIEVWYLMHBAOGDXRCKNDOPFJXKLAZWQDBGWQCRWLVVBUQSPQWCMKYIONTWHJWMJXYUDKZHABPPCGTAQSNYFAHETZZBDENUCCLFVIULODAVVTUDJVLFGEQTTMRVHRSHKFECNWMKGUIHSFVWRSPOIKRBIYKAYGR");
    msg.data.assign("IXMWCOSPDIGLZ");

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
    msg.setTimeStamp(0.31086219464);
    msg.setSource(14936U);
    msg.setSourceEntity(66U);
    msg.setDestination(10576U);
    msg.setDestinationEntity(190U);
    msg.topic.assign("WBHRZBYMXYQVQVHZIWECISCLQBKFSEJRZHMUZOS");
    msg.data.assign("CKOZRYAETDRSUO");

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
    msg.setTimeStamp(0.472108177974);
    msg.setSource(43234U);
    msg.setSourceEntity(198U);
    msg.setDestination(25486U);
    msg.setDestinationEntity(77U);
    msg.frameid = 141U;
    const char tmp_msg_0[] = {-90, 70, 68, -98, 32, -51, 114, 84, -25, -42, -56, -55, 107, 24, -81, -28, 112, 104, 107, 77, -14, -73, 28, 120, 110, 34, 97, 36, 91, 50, 11, -99, 70, 31, -4, 53, 95, -41, 114, -88, -35, 51, 112, 32, 7, -78, 34, 19, -72, -7, 17, -98, 114, -127, -44};
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
    msg.setTimeStamp(0.778181662386);
    msg.setSource(50265U);
    msg.setSourceEntity(124U);
    msg.setDestination(5967U);
    msg.setDestinationEntity(104U);
    msg.frameid = 169U;
    const char tmp_msg_0[] = {82, -94, 58, -40, -94, -60, -117, -113, -88, -97, 104, -127, 21, -126, -15, -33, 25, 9, -54, 54, 98, 81, 104, -41, 9, 101, -104, -14, 96, 48, -42, -111, -97, 5, -18, -82, -126, -49, 14, -27, -23, 67, 17, -63, 67, 15, 84, -2, -2, 89, -25, -114, 97, 28, -25, 29, 47, -67, 69, -127, -103, 56, 103, -109, -119, -28, -42, 28, 55, 5, -103, 110, 86, -94, -77, -38, 112, 87, -100, 24, 15, 70, 13, -122, -126, -90, -13, -63, -39, 43, -14, 42, -22, -63, -56, -127, -100, 83, -72, 111, -66, -100, 3, 31, -47, 0, 120, -94, -75, -42, 59, -79, -97, 25, -73, 11, -4, 38, 15, 69, 115, 45, -16, 73, -78, 16, 63, -77, 28, 86};
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
    msg.setTimeStamp(0.467064082076);
    msg.setSource(63789U);
    msg.setSourceEntity(35U);
    msg.setDestination(39771U);
    msg.setDestinationEntity(159U);
    msg.frameid = 9U;
    const char tmp_msg_0[] = {70, 76, -24, 44, 68, -44, -72, -21, 122, 37, 46, -109, 92, -79, 14, -31, 106, -45, 17, 41, 42, -9, -45, -107, -33, -86, 117, 98, 17};
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
    msg.setTimeStamp(0.96046211434);
    msg.setSource(28075U);
    msg.setSourceEntity(221U);
    msg.setDestination(34543U);
    msg.setDestinationEntity(112U);
    msg.fps = 124U;
    msg.quality = 101U;
    msg.reps = 83U;
    msg.tsize = 150U;

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
    msg.setTimeStamp(0.530885816563);
    msg.setSource(54984U);
    msg.setSourceEntity(214U);
    msg.setDestination(51972U);
    msg.setDestinationEntity(195U);
    msg.fps = 104U;
    msg.quality = 58U;
    msg.reps = 123U;
    msg.tsize = 4U;

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
    msg.setTimeStamp(0.137082947733);
    msg.setSource(10379U);
    msg.setSourceEntity(187U);
    msg.setDestination(30388U);
    msg.setDestinationEntity(149U);
    msg.fps = 163U;
    msg.quality = 81U;
    msg.reps = 234U;
    msg.tsize = 50U;

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
    msg.setTimeStamp(0.831515551481);
    msg.setSource(48952U);
    msg.setSourceEntity(219U);
    msg.setDestination(8001U);
    msg.setDestinationEntity(206U);
    msg.lat = 0.597270188066;
    msg.lon = 0.277608575627;
    msg.depth = 210U;
    msg.speed = 0.164003691888;
    msg.psi = 0.419658312731;

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
    msg.setTimeStamp(0.140827741707);
    msg.setSource(50742U);
    msg.setSourceEntity(24U);
    msg.setDestination(7333U);
    msg.setDestinationEntity(250U);
    msg.lat = 0.580601193966;
    msg.lon = 0.584747298126;
    msg.depth = 10U;
    msg.speed = 0.994952911616;
    msg.psi = 0.41502955864;

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
    msg.setTimeStamp(0.252195277122);
    msg.setSource(12566U);
    msg.setSourceEntity(34U);
    msg.setDestination(1403U);
    msg.setDestinationEntity(141U);
    msg.lat = 0.857042403632;
    msg.lon = 0.325160891218;
    msg.depth = 7U;
    msg.speed = 0.793250119486;
    msg.psi = 0.684884167228;

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
    msg.setTimeStamp(0.441535548044);
    msg.setSource(61697U);
    msg.setSourceEntity(8U);
    msg.setDestination(33518U);
    msg.setDestinationEntity(229U);
    msg.label.assign("LYEUWGUKNRDZCQBNJNRVEUXCWHOJIZMMTHPTSRXZXZJBWFXAKLLAHPSHDTKAKLFAFSQASBQVSYIYESGCHFLIWYHBJAMTINOMGVTLQRBMQSJOCOVSACBINVXVEMXTKNOSWXDMGWUGEPEXRYJEKLPUBPBKGYCZCAPZZCSUZDVOCUODBQOHOYRUHFBVPPFJVEQCNGOTJF");
    msg.lat = 0.165919753984;
    msg.lon = 0.912533048086;
    msg.z = 0.673867983621;
    msg.z_units = 211U;
    msg.cog = 0.363120816299;
    msg.sog = 0.856072947003;

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
    msg.setTimeStamp(0.699647109735);
    msg.setSource(55519U);
    msg.setSourceEntity(42U);
    msg.setDestination(8247U);
    msg.setDestinationEntity(208U);
    msg.label.assign("JMVEFXJYIMWJOUXGFOVAWGDIWPZSESZCVQULUJZOMRNBQKUGJYOEGLOCAQVDRPWUXFUQIRWEMDYNGMIMQKBLTWAP");
    msg.lat = 0.838818699613;
    msg.lon = 0.679960596805;
    msg.z = 0.664436337543;
    msg.z_units = 113U;
    msg.cog = 0.732715081388;
    msg.sog = 0.149637188194;

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
    msg.setTimeStamp(0.485903615602);
    msg.setSource(31873U);
    msg.setSourceEntity(217U);
    msg.setDestination(22432U);
    msg.setDestinationEntity(50U);
    msg.label.assign("RBPHXWQKFWEMDUBYEKQILOXUMDLBOCPZROMFFGFFCHRNWLFRHFPVYVYGALDGCNVHVPKZAEGNTNQSDNJGCYTSJYPCLRXRGWQXCHGJMAZGIVABWAJZQKAINYXEDMSCKXWNZBOJUKLDIZHJXISSBUEAWOMWQSLHAQURISTKYTYOLTZZBXSTMKYPMRZGONOSJJTGDZAVEUBOTFTIFEQRYIVHMNROXWDLHDTFKUWIEPCVPDVPQJPCQUUCAUL");
    msg.lat = 0.0042759551009;
    msg.lon = 0.80844555906;
    msg.z = 0.223003332421;
    msg.z_units = 60U;
    msg.cog = 0.234948212038;
    msg.sog = 0.617628779864;

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
    msg.setTimeStamp(0.679624436598);
    msg.setSource(56416U);
    msg.setSourceEntity(11U);
    msg.setDestination(55332U);
    msg.setDestinationEntity(43U);
    msg.name.assign("UABNHBPSFNIUNUPWZAHYHYEVWYQXWCSZQRUSRLYSDFIRJWTCFWIKFFSVQVBXSLWSRBVJTJLXGCLPVRVNRKPMBOGKLYCIBQQYGBZZJYQGAQEFHMTDORLOAUIXHLZJWXDJPSDLBTMOCAAYMGBBDEF");
    msg.value.assign("XTLZSTOUOYPRAQYHUXECRONWEONPJEKGFUMMWIPCXGZCJQHGSHXXHYDSFYBRMFQOTWKIVKKWZCAIFEGVT");

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
    msg.setTimeStamp(0.19316226939);
    msg.setSource(55526U);
    msg.setSourceEntity(168U);
    msg.setDestination(48803U);
    msg.setDestinationEntity(40U);
    msg.name.assign("QGOBPMGOYTRCXSDNVVIVDGZCRBXGGFRLXLPXKNIBLLDXIZKPLDKAQPHXTIYEMEYFKTZIVWIHWZUOOEFKNGAMUVQRCAVHKNIDMNREXJVODOKIUQSJNEABHFMARUQNFTYWLLGRPZKTFOTSGUELZJMAWHSYPPAWMTNJALNQHMBUFF");
    msg.value.assign("OKYSRBPZCJOAGBQWPWFRTNYJBVYNYYKRDFPIGTOSUZQBUHJHNJDRXLVLMGFTHFCUGLZIYQVRRHVAFJQMKFI");

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
    msg.setTimeStamp(0.679059850029);
    msg.setSource(60144U);
    msg.setSourceEntity(31U);
    msg.setDestination(26894U);
    msg.setDestinationEntity(29U);
    msg.name.assign("NVRTFAEYKDAJDDQSAXJFWVMISYTFICESARRGXMIUZMODESPHNWZKXJSTUHZHJKVGFXQMPLZITHGJXYFOTDEHPDLVODZMEQJERSXCJFVNNGDCROZUWPYRGGCXRLCNWLWQBDLPKUIPBYBWJKKBOYQAPFUEKLWMZBNWEBHIMSATBTQAANOCVSZFLXWNOKF");
    msg.value.assign("LYGUPAEPOFPVUJEBJIDHISLGKNUQMONBZLJXOTAWBPSEKGPBJMJLTAYLCJSDDGWYAUVXOFVMHXMRENLJTYFCVTSWDVFDMCJNOMDCSJZPQRGQCUZRRPRBLCLTHVMQLNAKHHRBXPKPXMTINWVGXK");

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
    msg.setTimeStamp(0.690370199339);
    msg.setSource(7715U);
    msg.setSourceEntity(207U);
    msg.setDestination(30773U);
    msg.setDestinationEntity(165U);
    msg.name.assign("DKLMMKHNZVTTHDOYRYPGBWCUXALQVHLILPUZRVIFDXYTKAVMIUJVIPHSWKYKGIBSZFYWFPRTEJQQIAJJGXUENSPIQFWAOMCDLJBFHTXTCKPFMDHCVAMZEQMWXNBMQVBYEYPTQKGDXQSIUCEOUZEXQDNLASOXVYBYWSASORHUHOFGIKLUBRZJSOWWZLACBJZRCTCVRINRNHURLJGEEEFDLKWVOEUNNSRNCTJB");

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
    msg.setTimeStamp(0.751676149199);
    msg.setSource(7719U);
    msg.setSourceEntity(230U);
    msg.setDestination(32523U);
    msg.setDestinationEntity(86U);
    msg.name.assign("IVFCAUAQMWQLDOSSZJOYVYKWKLBOJEWVGACLHCHYUXJLXTLCHEWWGKNDFYBEFNHLMQMOSPFKLBOUPZHNZXPQERTFXONESRNCGFGIVDIXZWACCHFQBRBXKDNJWORDYKJECXDKJBMHCSVSGQRVWJTHKBSEQTYZAWJSZOTIYXMGUDGVERQON");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("TJRIHCMISYOCTPVTRGINUOYLRNJBWKFQUBDHBPXODNYYXLFJSSIWLJPGGDCOEJGHNYRFSENWZCCEKDTTZMBTVVPQSWJKWBLMINFXOLHDQKUAQIZVWADDFNSPPMXUOMOHHYWHTABGFXUUROXADYVDLFLCZEISVIKZMNMCYKZINCACXNZQFUHVAJOSEQARPPLMM");
    tmp_msg_0.value.assign("AHQAWNVXKLQXMJGJRBSOPFQUGUVRIVONYAYRDDYPOSLWWWJWHZFDSFCIUFCJXMQATJDWMGJGNLTYXCGRXESLLJQHHZPVOZ");
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
    msg.setTimeStamp(0.840163039618);
    msg.setSource(31820U);
    msg.setSourceEntity(253U);
    msg.setDestination(44412U);
    msg.setDestinationEntity(12U);
    msg.name.assign("UKAQUKPFSBISYVJYHCUIVUMTFZFNCVHTNSBWWRKMXZWLAWQEPZECXBGHRLLTKEPETPPMWBIDGIPEYESZYMBGYYJIDSU");

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
    msg.setTimeStamp(0.751269177365);
    msg.setSource(51042U);
    msg.setSourceEntity(10U);
    msg.setDestination(21316U);
    msg.setDestinationEntity(176U);
    msg.name.assign("SWXTLRJIIPEQXZIDPRMBYBYKCJYWTRNABQUNXDLPZJVVZPDOPQUYRFDFFHAWGTCSKLGS");
    msg.visibility.assign("UEOIHPONLWCYZOSCNSWCDVLKUGVMVHBYWEWQXCBRVZEOQRQTEDYUZDZALXBYQYTKBSKBTGRBITMPJLLOVNIQPOKNXIHNRDWRTHDTJBEZCPTFKYJDRWGULZZSHMSMNOVPAUBCMHHEPMWVQASYIEYFYLJOLRDATEWASFBXGXCYJXGGHXSXIHLX");
    msg.scope.assign("GZZHKRPPCQLTVTABCSTIND");

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
    msg.setTimeStamp(3.15079214487e-05);
    msg.setSource(48240U);
    msg.setSourceEntity(162U);
    msg.setDestination(2931U);
    msg.setDestinationEntity(75U);
    msg.name.assign("XVDSRLSRYNKBFGOYKNGZHAMPUKUPXYUGCLKSDTFHECNRKDOCPJITJCETMIHFSYUZHFXMHDNJUWMKEGJSRLWETRWQVSPNUSATXULRGNLJCZZPTTFAOVBUWUTEZDFVQHCDOQCHIHOBOBKNLGPWITGKDZEAGJONEQQMDXZIXABMZAVUPGIFLLDBXPKOVSPQIYSAAVZXWLIYNMQJEJQJATMDAVBYHLW");
    msg.visibility.assign("LMCFYPYJDYNSJGTQG");
    msg.scope.assign("SKDDSNSZXMIYJVNRFNBVTUEWBGIHCARCWOJEBPYFMMAYSZCKDSNTHHNYKAZICKEXCFBJTQMDDTJSAFLNVMZOQKNUVIPRJBDDIGPQXAVRMBFHLEDIGURTXXBKPGJYHGSBIKKWPH");

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
    msg.setTimeStamp(0.591231878354);
    msg.setSource(17268U);
    msg.setSourceEntity(90U);
    msg.setDestination(28339U);
    msg.setDestinationEntity(149U);
    msg.name.assign("RDGWKVOTFZVHWYOVIWFVMBULPLVJQJTWCZGZAKUERDBDAOKUGAXMOXIEFYDKCTYKPLBNQRFNXBLCMFSZGDJWWSNLUYMUFHLPTYQAMDTLYQNSVIRSXKBTCMOMPHQCCHNPEDQIUEUMSNV");
    msg.visibility.assign("WHBJQVFBRVCIRNXVHPSXWCGLXWEPRJTIYDIHBPPVVWBQSOMDURXOLEYCYYHSDWLKFJPQLOFXTVNNVGDKTIZUPXEWUZQNNOCGEPRRFNOLAHMDUYYMNBQHHAHRATBITIJVSVUHBYDMT");
    msg.scope.assign("TUGEYKRICTDNLJWHIPLNCICIIZOBXFAFXGDNPMBSQFSVTKCZSJLGWFV");

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
    msg.setTimeStamp(0.141973928474);
    msg.setSource(15674U);
    msg.setSourceEntity(226U);
    msg.setDestination(60211U);
    msg.setDestinationEntity(253U);
    msg.name.assign("YGVBMLRAOLGTJXWWZQUKYMSYXXTLTRWIBNUTWHXWZICOKPVJXYNAHNYRJISWKOEASFMRRAOUVTGNLUJOIXSFZJADPZHHVBEVOEMNMGLZISCLDSDZXAVCEPCVFZBNCXDSTYAZELMCLKHKHQJMJIKOGNUUVWQIFTQ");

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
    msg.setTimeStamp(0.228024482029);
    msg.setSource(51150U);
    msg.setSourceEntity(218U);
    msg.setDestination(19032U);
    msg.setDestinationEntity(68U);
    msg.name.assign("BBEPMXXVNENCPMKPQFQWLJLGVIQMAQEWWSVGKNWTAZRWOHZHWOPBQQCLULNHRYMSTJYQKDYLXLOIRHGAGTJMHUJORAGEVGGIEQTECHUFVWSAUD");

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
    msg.setTimeStamp(0.724287549889);
    msg.setSource(30152U);
    msg.setSourceEntity(249U);
    msg.setDestination(24341U);
    msg.setDestinationEntity(93U);
    msg.name.assign("ZNRIHCJDTWUADIDQHVFSJMWCIKNULREXCCVDJQKVKZMXUXQGHZYFPMSFPDFULSTXFUPVRAOVEPKOFOLCORUWSLSPOBXPENYZCEXYOYYVTYCAUTTATBQZGSNDRLFMBXVULBASKDQYGHAYRKFBKQRZZRNJHCGAGWHWWPFBNOBGMJBMXIICEERMNGAOIXJYNJDPDWVHTWGSRWZQOJGTJMKYAKLEGHVKENUI");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("VSOWGRRTMVNIEDZNZDWVWQAKEPWDPMUVNRYYPUTCLBRDZALFTVGBZQMIEBHLZLRSQNQNYVBGDHSGQKJCA");
    tmp_msg_0.value.assign("OPPGDOIJVTMJVAKOXYZETTLINPYLHROIWGNPURXUSCHYW");
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
    msg.setTimeStamp(0.316002096182);
    msg.setSource(4042U);
    msg.setSourceEntity(21U);
    msg.setDestination(40911U);
    msg.setDestinationEntity(135U);
    msg.name.assign("BFZTRZJQJGHWCOXNGODZYLXYNBKLJHSGESOUAZXMRKAJVTGQCBYUMBYVKSXDHHCSTFOFKWJOWQABAWOTAPQGDLEKTDRQUOPIPYZSGINVSOHKCBAUNDLVLNDMNIIRFVZSKCCMYZFURWFLXCKQHAZYUGTFQRDIMQLMSEABEEHNNERCGZFXJPEVURHZMJWCFDPSXYI");

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
    msg.setTimeStamp(0.340992975609);
    msg.setSource(27603U);
    msg.setSourceEntity(210U);
    msg.setDestination(13354U);
    msg.setDestinationEntity(104U);
    msg.name.assign("BAPBTAFRCHFHLWQWRRDYYHKAGOIXNKHZYLFZUCWFFZYHEXLCKVZOTETCULGHKEPOMVMIFJHLBGPQKXDGHVLNBSOUCQXMHRBRJMNJGICADEPDTVZBPJETJSIPOIDSFFLQKWUJSYLSKKDQPYMUTUVPCDUMXDIBRWSVUCRTWNBZSNGXPNGAFPQSEMESSIWVTUNREWKBACIDEAQHLAWXYNOTYIORQDMZGEQXVZMJI");

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
    msg.setTimeStamp(0.515190698419);
    msg.setSource(20869U);
    msg.setSourceEntity(239U);
    msg.setDestination(16310U);
    msg.setDestinationEntity(111U);
    msg.name.assign("JZSFVDABSDLHRKFQNLKZOXUWXVOCQRBGNAGKSUBHDVTFAQXWSPIZHOQDCGEFLPJHUOUEOUNSOMKKZVCSUFITYDQXJPPRMGYKRAIUTLUAMAC");

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
    msg.setTimeStamp(0.962563312906);
    msg.setSource(12354U);
    msg.setSourceEntity(245U);
    msg.setDestination(6553U);
    msg.setDestinationEntity(250U);
    msg.timeout = 1701474894U;

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
    msg.setTimeStamp(0.608076029447);
    msg.setSource(7697U);
    msg.setSourceEntity(41U);
    msg.setDestination(8640U);
    msg.setDestinationEntity(204U);
    msg.timeout = 3528087153U;

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
    msg.setTimeStamp(0.585627740802);
    msg.setSource(31463U);
    msg.setSourceEntity(88U);
    msg.setDestination(38978U);
    msg.setDestinationEntity(104U);
    msg.timeout = 3458015646U;

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
    msg.setTimeStamp(0.68177030145);
    msg.setSource(21234U);
    msg.setSourceEntity(238U);
    msg.setDestination(385U);
    msg.setDestinationEntity(65U);
    msg.sessid = 218020793U;

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
    msg.setTimeStamp(0.985061175621);
    msg.setSource(32935U);
    msg.setSourceEntity(158U);
    msg.setDestination(5479U);
    msg.setDestinationEntity(138U);
    msg.sessid = 3340633291U;

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
    msg.setTimeStamp(0.133446996231);
    msg.setSource(11488U);
    msg.setSourceEntity(70U);
    msg.setDestination(27267U);
    msg.setDestinationEntity(162U);
    msg.sessid = 3700584790U;

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
    msg.setTimeStamp(0.00684939564523);
    msg.setSource(15795U);
    msg.setSourceEntity(125U);
    msg.setDestination(30285U);
    msg.setDestinationEntity(101U);
    msg.sessid = 1569791512U;
    msg.messages.assign("JOBXQXLHIELBTXLDNFJPHNFZTPKUKMSJBWMDKHUBRSQQQJYJWZWEXXVKFITUUNYYJFQONZRIDSOCDEWUAYPWRVCXGBMLRQAYEDTYBXYGNOPVXUAVKQIDINOUANUSGIZMXQJJSAOCAXYQAOFVDKHOYWHGJ");

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
    msg.setTimeStamp(0.505450719868);
    msg.setSource(2069U);
    msg.setSourceEntity(151U);
    msg.setDestination(59013U);
    msg.setDestinationEntity(96U);
    msg.sessid = 1925106926U;
    msg.messages.assign("UCBPBPVWIQHWPTARHFDXXEVLEHFZUAPURSISJIUGISVRKSPXTZRPJXHWNQLSJTOJAUFQPJIBBCKGGHOYRFMXOOBDSVTBWWCTIVUCDPCXJHFUMKESMPQYZWUONKRHLGAVFXDHELXWBGDFEDNYHMFCLARZKZX");

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
    msg.setTimeStamp(0.853568506646);
    msg.setSource(36254U);
    msg.setSourceEntity(19U);
    msg.setDestination(21538U);
    msg.setDestinationEntity(171U);
    msg.sessid = 3314905075U;
    msg.messages.assign("VTPMOMTVXPRRYXBMPKJCYMWDUMUTAKYZGPPESWGZYVSNFOINZZHDQDLDYIJAMDQKMVGWKIFRNCDQPVQQJSACUQPXXOQHBPHDRSALLEFXVGVFSELVFGWGUSEOBDSRFEZC");

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
    msg.setTimeStamp(0.0430941874576);
    msg.setSource(45553U);
    msg.setSourceEntity(1U);
    msg.setDestination(19248U);
    msg.setDestinationEntity(71U);
    msg.sessid = 3608666952U;

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
    msg.setTimeStamp(0.906576617467);
    msg.setSource(19649U);
    msg.setSourceEntity(41U);
    msg.setDestination(53523U);
    msg.setDestinationEntity(239U);
    msg.sessid = 746140961U;

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
    msg.setTimeStamp(0.753007608777);
    msg.setSource(24112U);
    msg.setSourceEntity(42U);
    msg.setDestination(62469U);
    msg.setDestinationEntity(12U);
    msg.sessid = 1753345964U;

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
    msg.setTimeStamp(0.367378952206);
    msg.setSource(34659U);
    msg.setSourceEntity(234U);
    msg.setDestination(30755U);
    msg.setDestinationEntity(2U);
    msg.sessid = 3947302524U;
    msg.status = 20U;

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
    msg.setTimeStamp(0.13891128782);
    msg.setSource(46196U);
    msg.setSourceEntity(129U);
    msg.setDestination(26580U);
    msg.setDestinationEntity(101U);
    msg.sessid = 2900099889U;
    msg.status = 167U;

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
    msg.setTimeStamp(0.391520708937);
    msg.setSource(43213U);
    msg.setSourceEntity(10U);
    msg.setDestination(16576U);
    msg.setDestinationEntity(77U);
    msg.sessid = 2195740342U;
    msg.status = 122U;

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
    msg.setTimeStamp(0.977464942051);
    msg.setSource(56793U);
    msg.setSourceEntity(111U);
    msg.setDestination(34531U);
    msg.setDestinationEntity(190U);
    msg.name.assign("ZIFRDGTJFFWGMYRNMTNVNCTBOGBXISNXXYJMUZRWBAJFKHIAGMOILSVZJPSNXPAABXOUDMQJFRFMOQXSKKEPFDVYJRABIEZCPYPWTEQQBSDTJQWKGFODFZYTZLSUOHWHOKCHDICLSHCQBHVGEWLMPCW");

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
    msg.setTimeStamp(0.378975944105);
    msg.setSource(12559U);
    msg.setSourceEntity(51U);
    msg.setDestination(61585U);
    msg.setDestinationEntity(97U);
    msg.name.assign("XIDULWZTILNITUYQDNVRWPPPUJDZTVWBHADGCMNHMZSEQBPNKVGAVCHOOQOFMIBCESCZTFIYTLEHPNWSSBJXDOLSEHXFLYVABZKJUYIEIACQLEWQLFYVQDPCRRMSVSRKUJGAJXXMERHEYSRKBQFGPTZLRUXTLNQJJPCVMUGRPEWNUDMGBHOYUXIFALDVHWIAGNMOOHXKZKZYIGKROTWJARCB");

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
    msg.setTimeStamp(0.236694461036);
    msg.setSource(2273U);
    msg.setSourceEntity(139U);
    msg.setDestination(39723U);
    msg.setDestinationEntity(160U);
    msg.name.assign("RLZLVQIGFQUDXHHEFARIXCXDVJEUXXFNBPUHMNUNXZANALRSNMBYOHMIZKYCEGMTDQJILSVOBQJCRTCWPDLSQWPRDRFSOOWBVFGBLNKQYYPOIUZYVMCDRGPECMWKXKLUGGFTGBWTPMWFZDAKJJWKSUSMSNQDCGQZKSJYTLMEEHJKASLTEZPXNBEPXHVKT");

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
    msg.setTimeStamp(0.783579564553);
    msg.setSource(60137U);
    msg.setSourceEntity(26U);
    msg.setDestination(20563U);
    msg.setDestinationEntity(93U);
    msg.name.assign("FKGWHZGUGOAWCCJMXMFTHEYYTYCNDUADBXPRTDUILSTWCKBTQPJNUQUASJTBOZDYOTRDRGQEIKMXMKZCIZHBHMNXFHQDOLDFEABHJSIPBJQJOFNRTPWGVGVAMJYIYVTBXOGMSRONBYRAFHNDYCUEWOVVEQBGANLORIRFSHROLEZHFWXZLULEJQLUXJSPVULZTMQIZQFKCVNXAMZLWQPDIADCLNKKEKPZWYEYSSGMFECVJSPNXWIKPGVCUPWKVH");

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
    msg.setTimeStamp(0.26763188153);
    msg.setSource(41686U);
    msg.setSourceEntity(53U);
    msg.setDestination(15866U);
    msg.setDestinationEntity(68U);
    msg.name.assign("ULZKKPRHFCOJGTPMNKRQIREUHECKJNAXB");

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
    msg.setTimeStamp(0.25409883657);
    msg.setSource(33219U);
    msg.setSourceEntity(18U);
    msg.setDestination(60590U);
    msg.setDestinationEntity(108U);
    msg.name.assign("LMDRRHAVSGGYPUROKHCXDYQQVUXPAPATBGCJZYJJCUXLFTUBUWYYPMAKZUANYIARLZIRITJNMFGXI");

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
    msg.setTimeStamp(0.442069224026);
    msg.setSource(31734U);
    msg.setSourceEntity(155U);
    msg.setDestination(55605U);
    msg.setDestinationEntity(98U);
    msg.type = 221U;
    msg.error.assign("GBVUBTWMXSVTCIGJBLFMJZVQSWBONPQAMMONINYCSPGQTIFGDEGHEZUGVYXRYZBIWYKRMVHFRKWYPHUEYKLLGSHIODYIXJPCRBAFOMJZAEOYQHWAECDVKWGDFICIEETRZXDJVMCASXCDSNNEKROLKQXONZYHQIJMHWPVAXHUYRQKX");

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
    msg.setTimeStamp(0.375222712894);
    msg.setSource(18663U);
    msg.setSourceEntity(216U);
    msg.setDestination(36645U);
    msg.setDestinationEntity(89U);
    msg.type = 1U;
    msg.error.assign("XQMRJBKPBLGLFBFQRSHPHNZEQLULSSXDCSPTGVIFOIRMFL");

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
    msg.setTimeStamp(0.0958411379272);
    msg.setSource(53713U);
    msg.setSourceEntity(121U);
    msg.setDestination(51078U);
    msg.setDestinationEntity(194U);
    msg.type = 15U;
    msg.error.assign("WGEXYRJZFZCCAUEOKGABGFVMZWFIUCMMXLOPOSOTLMFOETRRWXCDGMQHRKYNWRMKSTIPYJPKFIMJQITRCSUEQYIGBTHCTTHJNDPPRBLQIVQDIBMNIUJRFYVSDWAHBZNXAPLJXZKPUVHUSBKHJ");

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
    msg.setTimeStamp(0.846626207381);
    msg.setSource(3085U);
    msg.setSourceEntity(28U);
    msg.setDestination(18916U);
    msg.setDestinationEntity(249U);
    msg.seq = 48288U;
    msg.sys_dst.assign("UCAHOTYNTMPKPLUCOYJFQWGJUXDZUBEVHVQNIAQAVSRFYEQGGPVKPPYWTKHVPETIAPIFFKVRDJXDSEEEIRVDLNNWZXKJMHNJWTQBNAUHSXZGBNVOHBGGXGJMGJISKKWYNEJFFQSHISJUOSLBENNLKCECIQC");
    msg.flags = 176U;
    const char tmp_msg_0[] = {41, 103, 44, -50, 72, -118, -43, -126, 8, -57, 88, -110, 37, -59, -124, -56, -3, -111, -119, -3, 44, 72, 66, 84, 70, 2, 52, -13, -128, 108, 97, -91, -113, 2, 73, 8, -38, 67, 49, 126, -29, -83, -100, -86, 13, 27, -11, -18, 97, 12, -43, 52, -45, -7, -103, -86, 99, 0, -47, -12, -56, -114, 32, 98, -15, 55, -20, -64, 108, -88, 25, -119, 98, -112, -16, -106, -5, -85, -70, -66, 63, -6};
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
    msg.setTimeStamp(0.370756256848);
    msg.setSource(4950U);
    msg.setSourceEntity(188U);
    msg.setDestination(30557U);
    msg.setDestinationEntity(161U);
    msg.seq = 16200U;
    msg.sys_dst.assign("VWATBBKYTOGXDGXULPVUNEONAEBCLEHXQPQYGPGJCYGKAXKWNPWTUWLPSZWDIUFRBLSKOINWHJOUEZTHBPRLJSDXRQCOPMBENNZAOFNIAOIMRCJEWZBLCQCVGQXNSYXZMSAR");
    msg.flags = 146U;
    const char tmp_msg_0[] = {105, -39, -52, -73, -70, -109, 113, 101, -105, -44, -7};
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
    msg.setTimeStamp(0.676182710314);
    msg.setSource(55542U);
    msg.setSourceEntity(202U);
    msg.setDestination(43444U);
    msg.setDestinationEntity(133U);
    msg.seq = 48202U;
    msg.sys_dst.assign("RKWKRPIDZELUARZGGVLRPIWYPXPKMZBMKQHRAMCVRLVQKSJBERQLEZJTYAWVJOLKQXVFLDKEOMVAUWDUOSUFENFVCSMQWNGUHSBNQPCXPTBRFKFIMJAZGDDNZEGPCIIDEZTTCHLMPXJTYBBJDOHLAAOGGDSXGJFZZCPXNPNWVHYSNQFSEXHKOVUIMXDAGBFTTIOYKRZJJN");
    msg.flags = 136U;
    const char tmp_msg_0[] = {-15, -99, -127, 121, -40, -47, -46, 63, -103, -125, -16, -58, -107, 16, -94, -14, -122, 71, 112, -71, -105, -41, 2, 74, 63, -66};
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
    msg.setTimeStamp(0.870616165724);
    msg.setSource(28787U);
    msg.setSourceEntity(217U);
    msg.setDestination(65083U);
    msg.setDestinationEntity(248U);
    msg.sys_src.assign("UIBFBICXWMEJZETFBFNVUYUQSYQAIWGNJAJZMXOAMOUKJVVXYULSPKHPVRGCPQTQKRCNXCSWYELGZTRQDDNUAJIOPTVADNPSXVWYDOOZMRPAYMBLBLQWDXPFKVOC");
    msg.sys_dst.assign("IDNFARGHFYMVQEWUJGWMETLXMIGKIZMPYYCOYKDSHRLQWJMFPGNJWHKUFHCUTOSNQVUKLSPOAHOH");
    msg.flags = 225U;
    const char tmp_msg_0[] = {9, -104, 59, -8, -90, -60, 23, 32, -121, -102, 40, -39, 108, -107, -2, -24, -39, -66, -73, -3, -50, 75, -15, 64, 92, 28, 24, 116, -111, 121, -31, -119, -108, 97, -63, -83, 119, 119, -56, 126, -6, 32, -112, -9, 90, 55, 92, -76, -105, -118, -14, -39, 44, 1, -119, 123, -109, -105, 96, 7, 23, 67, 24, 92, 119, 61, 39, 126, 86, -104, -54, 99, 52, 16, -97, 78, 8, 73};
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
    msg.setTimeStamp(0.446710008341);
    msg.setSource(44915U);
    msg.setSourceEntity(220U);
    msg.setDestination(23833U);
    msg.setDestinationEntity(28U);
    msg.sys_src.assign("IKLRRYNHVAEHHXJUULJBUVDLOCYGFDJQKNFRAHOPMAPMLVFLSWXOQITSCGCOIVXBHEJIQYFWTIUBNTFRSNZALJFRKLMIDEZHBKVPMTCQOEQTRWCSDHYVEYWMWKXYXWFQDCTAAMQQWIPGZZXFWLKLKJGVASSAGHOGETYEIVBTXACNCDOOOPFTGXEXNDBNTJHUABMPQRU");
    msg.sys_dst.assign("YCHVQAVORMUQQNRPLOIYYYDZEULAMJOXULDLSEBEPZNXOTNMXQQTGWLJRBJSKWWSKBIASXNFQIHUVIUBXSEGMFAWVLRGFOOHCWBJQQFDHZAKNLCSZGOCCTFKHGIFPHPRLTAKQBTKJNAYXFZHMPYEKDUGRDZASVBJXH");
    msg.flags = 119U;
    const char tmp_msg_0[] = {126, 91, -107, -127, -41, -89, -71, -123, 63, 0, 39, -68, 20, -61, 35, 114, 56, -109, 6, 98, 64, 72, 111, 55, -127, 90, 98, 52, 41, -66, -120, 71, 29, 102, -29, -8, -110, -128, 4, 38, -54, 111, -30, -93, 66, 108, 118, 11, -87, -5, 58, -5, -35, 69, -94, 64, 26, 38, -85, 10, -23, 3, -31, -5, -49, -101, 14, -21, -31, 12, -40, -126, 61, 84, -104, 71, -81, -27, -119, -121, -105, 32, -60, 63, -128, 20, -29, -41, 96, -38, 22, -29, -45, 53, 86, -32, 30, -126, 103, -61, -117, -74, 123, -61, 94, -120, 34, 18, -119, -59, -112, -100, 66, 18, 114, -123, 107, 3, -8, 120, 23, 90, 5, -121, 13, 41, -29, 9, 84, 65, 70, 105, 14, 44, -117, 33, 115};
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
    msg.setTimeStamp(0.0953048755045);
    msg.setSource(51360U);
    msg.setSourceEntity(9U);
    msg.setDestination(51640U);
    msg.setDestinationEntity(56U);
    msg.sys_src.assign("JJBGDWTLKLGZWANUIQPCAXXYLPTBRJDHSQMQGTVAIGVQWSYOHR");
    msg.sys_dst.assign("PRZPQZBCYDQUKQECJXIKJTLTDXFEBZJMZNOPQHSQVPGIDWVBXMKRHIXEFBHDRANKPDVIEEGOIYWJSAOSDKBLXLTVXGATSOPUDSKFOQZIEEXLUWZJJCGDMHSINACTFOJHUSPLMYRETAEGRHCQAUFSMTMMGPWLFJOLYMTISQYAGYUTUWDCFGCLGJUNVBSVIPFKDMNBOBZOTEVHBQRRVLFHAVJLRUNRCKIWBWWG");
    msg.flags = 19U;
    const char tmp_msg_0[] = {66, 95, -46, 89, -56, -124, -101, 21, -31, 72, -20, 42, 37, 71, -52, 48, -122, 70, -94, -46};
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
    msg.setTimeStamp(0.25101745485);
    msg.setSource(27589U);
    msg.setSourceEntity(85U);
    msg.setDestination(10192U);
    msg.setDestinationEntity(189U);
    msg.seq = 62858U;
    msg.value = 35U;
    msg.error.assign("AIDFCBDNBBZOIZDULYLVJPJNDZVCUNCUQXMFOP");

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
    msg.setTimeStamp(0.00786077503159);
    msg.setSource(18104U);
    msg.setSourceEntity(233U);
    msg.setDestination(2064U);
    msg.setDestinationEntity(174U);
    msg.seq = 8331U;
    msg.value = 129U;
    msg.error.assign("ZUYJICCRFHSMLOOHBCBBOSXLGYZQSEMWQBRCAYVFUGEGYVIYXRIHOZUAHYCIIUBBDLMPFUYNRKDDPKVAINHNGVLEQUKJRSARDJMGEEKSTWHEWKJHMQTWVPLNPYGQXPEFWSFAJWTKMBPUCHORRJSKPGNLVZASPFQQIVIZZSHAZQAZVVFDMXBXWCQNNNBJGQNJKMTPRLHBOLKCOAVNCEOESODDXRWZGWYMOJTXKMPYFIGTAXXULEDLDTFFU");

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
    msg.setTimeStamp(0.993232859839);
    msg.setSource(62106U);
    msg.setSourceEntity(251U);
    msg.setDestination(8245U);
    msg.setDestinationEntity(1U);
    msg.seq = 31261U;
    msg.value = 68U;
    msg.error.assign("MUAJNCCXGZHNOIYJCKJGGEXSSULBTBALEYQDZMKLSSQULXIZXINIMTKZUPLMKDRYOAYQIFCZKJPGSERKXTKZIEWWMXNRCIABZXOPSHF");

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
    msg.setTimeStamp(0.669189692451);
    msg.setSource(61920U);
    msg.setSourceEntity(68U);
    msg.setDestination(26605U);
    msg.setDestinationEntity(82U);
    msg.seq = 42693U;
    msg.sys.assign("JPCXEYVZCUQFTHBKIFPABMFEMAASOLHOCKGZUMTNTSCORUTPJRMKOOZDHGLYNFKFQCRMOQEWSNBJJMGOZYKXUEXTLYWIBUWPJWPYTJSVMKUCWLHZHOYJQYNIJHSNLFAATVKMFLP");
    msg.value = 0.290818740369;

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
    msg.setTimeStamp(0.409358793068);
    msg.setSource(33471U);
    msg.setSourceEntity(91U);
    msg.setDestination(25150U);
    msg.setDestinationEntity(46U);
    msg.seq = 58086U;
    msg.sys.assign("IHKUHHXLPIEZRJYBDLFBYYJOCEVIHLKOAKSLWMMTLKKHACBVWNDECXLILOXMYMRGFOCMKJVIYENNNFUERPQADERCTUGXBWUUQPSQWQZRARBYPNJDTVFXOLWWWBIBQDAAHUNDICTGFHTJSGTGZJGXRO");
    msg.value = 0.538667893042;

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
    msg.setTimeStamp(0.338793748458);
    msg.setSource(27986U);
    msg.setSourceEntity(78U);
    msg.setDestination(5389U);
    msg.setDestinationEntity(204U);
    msg.seq = 14581U;
    msg.sys.assign("TLRIRRMNJOHBQHYRFIIBAJUOCHOIBPUEOEEYOMZWXUKASQHDSLF");
    msg.value = 0.631808954437;

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
    msg.setTimeStamp(0.547840013167);
    msg.setSource(29344U);
    msg.setSourceEntity(28U);
    msg.setDestination(27386U);
    msg.setDestinationEntity(211U);
    msg.action = 81U;
    msg.longain = 0.882118633555;
    msg.latgain = 0.877018482186;
    msg.bondthick = 2310435183U;
    msg.leadgain = 0.544972028227;
    msg.deconflgain = 0.345852611514;

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
    msg.setTimeStamp(0.869095890107);
    msg.setSource(38537U);
    msg.setSourceEntity(162U);
    msg.setDestination(38311U);
    msg.setDestinationEntity(233U);
    msg.action = 110U;
    msg.longain = 0.0458174851296;
    msg.latgain = 0.725252552559;
    msg.bondthick = 4240813948U;
    msg.leadgain = 0.809342042915;
    msg.deconflgain = 0.981942262988;

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
    msg.setTimeStamp(0.652535916693);
    msg.setSource(61108U);
    msg.setSourceEntity(15U);
    msg.setDestination(55470U);
    msg.setDestinationEntity(45U);
    msg.action = 200U;
    msg.longain = 0.391477248181;
    msg.latgain = 0.924746752065;
    msg.bondthick = 1810513206U;
    msg.leadgain = 0.617365078679;
    msg.deconflgain = 0.350819581394;

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
    msg.setTimeStamp(0.520171107873);
    msg.setSource(56256U);
    msg.setSourceEntity(232U);
    msg.setDestination(21432U);
    msg.setDestinationEntity(90U);
    msg.err_mean = 0.199843305164;
    msg.dist_min_abs = 0.466817354546;
    msg.dist_min_mean = 0.050529420719;

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
    msg.setTimeStamp(0.193159910508);
    msg.setSource(30254U);
    msg.setSourceEntity(207U);
    msg.setDestination(3295U);
    msg.setDestinationEntity(224U);
    msg.err_mean = 0.533151760657;
    msg.dist_min_abs = 0.935891395036;
    msg.dist_min_mean = 0.790549439046;

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
    msg.setTimeStamp(0.328854425511);
    msg.setSource(45817U);
    msg.setSourceEntity(232U);
    msg.setDestination(43226U);
    msg.setDestinationEntity(208U);
    msg.err_mean = 0.78236576594;
    msg.dist_min_abs = 0.742372191278;
    msg.dist_min_mean = 0.140492089761;

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
    msg.setTimeStamp(0.623675629615);
    msg.setSource(12308U);
    msg.setSourceEntity(83U);
    msg.setDestination(34U);
    msg.setDestinationEntity(161U);
    msg.action = 102U;
    msg.lon_gain = 0.995212922161;
    msg.lat_gain = 0.0934755896064;
    msg.bond_thick = 0.0940787386201;
    msg.lead_gain = 0.390466745182;
    msg.deconfl_gain = 0.268427811954;
    msg.accel_switch_gain = 0.0126654247383;
    msg.safe_dist = 0.311277890542;
    msg.deconflict_offset = 0.110111251457;
    msg.accel_safe_margin = 0.692351565533;
    msg.accel_lim_x = 0.0392295730942;

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
    msg.setTimeStamp(0.231849831724);
    msg.setSource(35339U);
    msg.setSourceEntity(103U);
    msg.setDestination(47660U);
    msg.setDestinationEntity(151U);
    msg.action = 11U;
    msg.lon_gain = 0.999140687472;
    msg.lat_gain = 0.0019596818195;
    msg.bond_thick = 0.641411365939;
    msg.lead_gain = 0.170084839516;
    msg.deconfl_gain = 0.274768362034;
    msg.accel_switch_gain = 0.624050908403;
    msg.safe_dist = 0.297017559308;
    msg.deconflict_offset = 0.620919290314;
    msg.accel_safe_margin = 0.000230903079143;
    msg.accel_lim_x = 0.031548589606;

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
    msg.setTimeStamp(0.407901338219);
    msg.setSource(41455U);
    msg.setSourceEntity(93U);
    msg.setDestination(4743U);
    msg.setDestinationEntity(207U);
    msg.action = 115U;
    msg.lon_gain = 0.0722644988853;
    msg.lat_gain = 0.403379405357;
    msg.bond_thick = 0.925833682218;
    msg.lead_gain = 0.0271786381981;
    msg.deconfl_gain = 0.736848765064;
    msg.accel_switch_gain = 0.714686003405;
    msg.safe_dist = 0.49096752775;
    msg.deconflict_offset = 0.074182740288;
    msg.accel_safe_margin = 0.79223093527;
    msg.accel_lim_x = 0.884835459959;

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
    msg.setTimeStamp(0.849283898478);
    msg.setSource(51615U);
    msg.setSourceEntity(20U);
    msg.setDestination(8565U);
    msg.setDestinationEntity(65U);
    msg.type = 167U;
    msg.op = 12U;
    msg.err_mean = 0.737818764762;
    msg.dist_min_abs = 0.714137573049;
    msg.dist_min_mean = 0.368056002586;
    msg.roll_rate_mean = 0.684295852535;
    msg.time = 0.0626318886353;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 211U;
    tmp_msg_0.lon_gain = 0.15099507166;
    tmp_msg_0.lat_gain = 0.778594431116;
    tmp_msg_0.bond_thick = 0.701516106582;
    tmp_msg_0.lead_gain = 0.0894513682753;
    tmp_msg_0.deconfl_gain = 0.330910806515;
    tmp_msg_0.accel_switch_gain = 0.557231416292;
    tmp_msg_0.safe_dist = 0.709107306298;
    tmp_msg_0.deconflict_offset = 0.294718246062;
    tmp_msg_0.accel_safe_margin = 0.320205740588;
    tmp_msg_0.accel_lim_x = 0.0446225403478;
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
    msg.setTimeStamp(0.325217667569);
    msg.setSource(27123U);
    msg.setSourceEntity(132U);
    msg.setDestination(8393U);
    msg.setDestinationEntity(223U);
    msg.type = 119U;
    msg.op = 233U;
    msg.err_mean = 0.551387819539;
    msg.dist_min_abs = 0.932468519074;
    msg.dist_min_mean = 0.804750503506;
    msg.roll_rate_mean = 0.567703074943;
    msg.time = 0.483457074664;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 27U;
    tmp_msg_0.lon_gain = 0.188423731101;
    tmp_msg_0.lat_gain = 0.227976381337;
    tmp_msg_0.bond_thick = 0.198612135449;
    tmp_msg_0.lead_gain = 0.741331160156;
    tmp_msg_0.deconfl_gain = 0.838520991984;
    tmp_msg_0.accel_switch_gain = 0.965360933402;
    tmp_msg_0.safe_dist = 0.374730125116;
    tmp_msg_0.deconflict_offset = 0.753350477554;
    tmp_msg_0.accel_safe_margin = 0.865091824605;
    tmp_msg_0.accel_lim_x = 0.0985017175856;
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
    msg.setTimeStamp(0.958682767557);
    msg.setSource(4042U);
    msg.setSourceEntity(47U);
    msg.setDestination(30077U);
    msg.setDestinationEntity(243U);
    msg.type = 61U;
    msg.op = 145U;
    msg.err_mean = 0.0450037653246;
    msg.dist_min_abs = 0.164984217858;
    msg.dist_min_mean = 0.174823693733;
    msg.roll_rate_mean = 0.804714123741;
    msg.time = 0.0834600313386;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 51U;
    tmp_msg_0.lon_gain = 0.422020249098;
    tmp_msg_0.lat_gain = 0.35832531247;
    tmp_msg_0.bond_thick = 0.141575969204;
    tmp_msg_0.lead_gain = 0.244862859057;
    tmp_msg_0.deconfl_gain = 0.17743796357;
    tmp_msg_0.accel_switch_gain = 0.330118475531;
    tmp_msg_0.safe_dist = 0.133329902753;
    tmp_msg_0.deconflict_offset = 0.569043136686;
    tmp_msg_0.accel_safe_margin = 0.695692524549;
    tmp_msg_0.accel_lim_x = 0.243654333975;
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
    msg.setTimeStamp(0.634275133402);
    msg.setSource(58902U);
    msg.setSourceEntity(141U);
    msg.setDestination(37007U);
    msg.setDestinationEntity(212U);
    msg.lat = 0.220788895617;
    msg.lon = 0.452678445423;
    msg.eta = 4130111566U;
    msg.duration = 14576U;

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
    msg.setTimeStamp(0.00784228095257);
    msg.setSource(40710U);
    msg.setSourceEntity(165U);
    msg.setDestination(53541U);
    msg.setDestinationEntity(221U);
    msg.lat = 0.709002923965;
    msg.lon = 0.681938975169;
    msg.eta = 1455181861U;
    msg.duration = 47915U;

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
    msg.setTimeStamp(0.219750476873);
    msg.setSource(32219U);
    msg.setSourceEntity(230U);
    msg.setDestination(30134U);
    msg.setDestinationEntity(232U);
    msg.lat = 0.588399865885;
    msg.lon = 0.557010981413;
    msg.eta = 1860116555U;
    msg.duration = 52357U;

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
    msg.setTimeStamp(0.822320651641);
    msg.setSource(41129U);
    msg.setSourceEntity(211U);
    msg.setDestination(54845U);
    msg.setDestinationEntity(28U);
    msg.plan_id = 1057U;

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
    msg.setTimeStamp(0.543206664391);
    msg.setSource(33191U);
    msg.setSourceEntity(74U);
    msg.setDestination(61570U);
    msg.setDestinationEntity(146U);
    msg.plan_id = 22847U;

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
    msg.setTimeStamp(0.504385959234);
    msg.setSource(59928U);
    msg.setSourceEntity(139U);
    msg.setDestination(5516U);
    msg.setDestinationEntity(199U);
    msg.plan_id = 4636U;

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
    msg.setTimeStamp(0.816948864911);
    msg.setSource(57789U);
    msg.setSourceEntity(66U);
    msg.setDestination(22023U);
    msg.setDestinationEntity(65U);
    msg.type = 184U;
    msg.command = 156U;
    msg.settings.assign("GNLWRRSYPUYXKDEVZUCBLPJCAHMDKGRLTNYLTUKDWHECNZUHJHWJPBGCODEUPQXHMOXMATIDUTNXXSVLSORTICVWIXBDQAXQFNWNLONKEGOPVSZBFCDWLXKNGEOJKDZAKIHORQGHGGRSRTBFUGIWPAOPJQRBBANFFOCULSTMJQTFIJVTKQKEBVRIISZZYZDXYJXTJYCMZWFMEFVCSURZYHPFBSSAGMMAZVQYKWVMYNDPWAJCEYOEU");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 12182U;
    msg.plan.set(tmp_msg_0);
    msg.info.assign("PKJSXTTJCAFLDNIPUNVMYPXAYECMWSLGPDIBSSDJQEEFHHORLJPVUAYGIPJOHEUOUUVLNSGOXGWJNTVDGIJXRDMHWEIKQRZEGHYHOWSKRDCFHWRUKILIXKOZXMDFAWYNOWZYYKPIIDWZGRQFVLSWKTYRLCAYQMGFUDUTETKZFHBMVQNZDKZXJNQCQIXJGMBH");

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
    msg.setTimeStamp(0.306673898866);
    msg.setSource(58697U);
    msg.setSourceEntity(135U);
    msg.setDestination(56951U);
    msg.setDestinationEntity(224U);
    msg.type = 121U;
    msg.command = 245U;
    msg.settings.assign("YILQOFAWLMUALFWOINQPCZHRPJYSTGUNHWWKMUXSOBQQJENQFNXZIWBLDZSACFYDHLZHTBHOMTOCKVUDFFDHQKYBIZTROQXXDOGMPZGPBXPDQGASKBNGFBECUICSGBYDQRUHCPZCELKEOYTHHLSWWMPFRIVRNMMETVYSURYPDARGTJSVEMVIXNADFAKSKKGSG");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 23999U;
    IMC::SoiWaypoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.618103232881;
    tmp_tmp_msg_0_0.lon = 0.211882129241;
    tmp_tmp_msg_0_0.eta = 3438596576U;
    tmp_tmp_msg_0_0.duration = 10488U;
    tmp_msg_0.waypoints.push_back(tmp_tmp_msg_0_0);
    msg.plan.set(tmp_msg_0);
    msg.info.assign("AZEYGQOIJCSOBQPOGGSPQKSTTWVWCJUQPHQVSPOQQZLSEEUAZFJGOHUAWNYZINWUXMHAXDKOHADBEIKWNXMTBDULFFLRTDNVYSUGFQXJPLJAFPMRIHLKRUBFOZLALYPXJBNQKTSERRMNFVJMABBXRMIYBPWVNZGCEFZHDLGRCDGNMZWCK");

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
    msg.setTimeStamp(0.915745313067);
    msg.setSource(36392U);
    msg.setSourceEntity(140U);
    msg.setDestination(48637U);
    msg.setDestinationEntity(86U);
    msg.type = 244U;
    msg.command = 128U;
    msg.settings.assign("EFZCWQGGRMOIPVYEDBVGAFZCZOUFFITYTEJLVOUSM");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 36434U;
    IMC::SoiWaypoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.0841151490919;
    tmp_tmp_msg_0_0.lon = 0.715734261704;
    tmp_tmp_msg_0_0.eta = 52509374U;
    tmp_tmp_msg_0_0.duration = 49160U;
    tmp_msg_0.waypoints.push_back(tmp_tmp_msg_0_0);
    msg.plan.set(tmp_msg_0);
    msg.info.assign("DCUUZFDKBJXAFRZKHIMBXPSSGBSHVKPQFCFTHBSOWBMWFHZLMGZQRQTRGDCKFHPHTGHKGYJSXPTYJPXPWGELUZENDXOHFWNMJUSCWSYPGAIZIRECKONPMRUCFNBVESWCONNQZWEDVYUSVLNVBKAEAOCTLMAICEQHWJYYDYIJAOAZMRBSYTIQRUDXVJVDGOLIKMRYEFNUVQZABLLPLAYKAQIEKHRLGWZPQDGLXRUVOEJTXODONMXFICTWJIV");

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
    msg.setTimeStamp(0.0188593386375);
    msg.setSource(13969U);
    msg.setSourceEntity(17U);
    msg.setDestination(18936U);
    msg.setDestinationEntity(222U);
    msg.state = 48U;
    msg.plan_id = 50377U;
    msg.wpt_id = 59U;
    msg.settings_chk = 49835U;

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
    msg.setTimeStamp(0.250261326582);
    msg.setSource(49988U);
    msg.setSourceEntity(124U);
    msg.setDestination(63748U);
    msg.setDestinationEntity(87U);
    msg.state = 43U;
    msg.plan_id = 49542U;
    msg.wpt_id = 43U;
    msg.settings_chk = 52167U;

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
    msg.setTimeStamp(0.454327425731);
    msg.setSource(50603U);
    msg.setSourceEntity(83U);
    msg.setDestination(51498U);
    msg.setDestinationEntity(134U);
    msg.state = 104U;
    msg.plan_id = 24498U;
    msg.wpt_id = 113U;
    msg.settings_chk = 11472U;

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
    msg.setTimeStamp(0.545128518724);
    msg.setSource(12567U);
    msg.setSourceEntity(121U);
    msg.setDestination(18347U);
    msg.setDestinationEntity(9U);
    msg.uid = 206U;
    msg.frag_number = 187U;
    msg.num_frags = 249U;
    const char tmp_msg_0[] = {68, 117, -102, -47, 19, 121, 105, 4, 29, 38, -84, -100, -58, -88, 55, 36, 116, -87, -2, 83, -5, 74, 17, -27, 98, -99, 103, -83, -31, -85, 75, -59, 121, 100, 24, 63, 35, 72, 48, -12, -80, 33, 125, -121, -21, 117, -94, 124, -112, 63, 74, -53, 100, 62, 103, -21, 94, -88, -107, 117, -51, -24, -60, -49, 73, -83, 65, -118, -6, 101, 19, -31, -47, 52, 22, 119, -27, 70, -51, 120, 82, -91, -115, -107, 122, 75, -82, 86, -62, -34, -30, -100, -46, 5, -47, -91, 121, 111, 100, -49, 14, 33, -97, 36, -115, -69, 24, 120, -101, -11, 59, 60, 23, -128, -109, -119, 46, -24, 27, 45, 75, 36, -99, -104, -9, -89, -36, -118, -46, 67, -30, -53, 39, -126, -59, -44, -102, -67, -93, -58, 104, -32, 107, 27, 54, -33, 12, -23, -69, -115, 80, 95, -112, -27, -106};
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
    msg.setTimeStamp(0.741338746528);
    msg.setSource(15104U);
    msg.setSourceEntity(180U);
    msg.setDestination(65175U);
    msg.setDestinationEntity(79U);
    msg.uid = 146U;
    msg.frag_number = 162U;
    msg.num_frags = 155U;
    const char tmp_msg_0[] = {23, 101, 0, 40, 103, 96, -17, -36, 123, -103, 28, 78, 110, 4, 123, -120, -91, 126, 70, -56, -20, 30, 63, -76, 21, 99, 64, -26, -61, 22, 104, -22, -13, -5, 67, 9, -126, -55, 5, -59, -115, -117};
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
    msg.setTimeStamp(0.788499095386);
    msg.setSource(21829U);
    msg.setSourceEntity(188U);
    msg.setDestination(61213U);
    msg.setDestinationEntity(230U);
    msg.uid = 222U;
    msg.frag_number = 144U;
    msg.num_frags = 238U;
    const char tmp_msg_0[] = {15, 2, 33, 94, -101, 93, 11, -127, -94, -21, -95, -39, 7, -122, 45, -63, 110, -19, 107, 122, 22, -89, 116, -93, -73, 29, -13, -122, 125, 4, -8, 95, 5, -16, -96, 37, 96, -88, 97, -117, -50, -26, 24, -66, -90, 65, -126, 30, -88, 55, 100, -122, -106, 2, -26, 37, -94, 17, -79, 9, -24, -41, 40, -26, -60, 40, 9, 16, -70, 119, -67, 16, 116, 13, 69, -109, 59, -76, 110, 61, -82, 0, -123, -60, 103, 59, -27, -19, 115, -45, 30, 107, 120, -18, -49, -126, -13, -42, -82, 49, 94, -110, -15, 40, 121, 3, -78, 109, -127, 2, -98, 6, 116, 91, 23, -6, 60, 17, -58, -88, 8, -21, -127, 14, 30, 25, -119, 81, -10};
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
    msg.setTimeStamp(0.378786534555);
    msg.setSource(50915U);
    msg.setSourceEntity(31U);
    msg.setDestination(35296U);
    msg.setDestinationEntity(189U);
    msg.content_type.assign("VXQTKRYRLCVPUENZ");
    const char tmp_msg_0[] = {-116, -35, 49, 84, -22, -104, -41, -6, 22, 90, -4, -57, -94, 59, -121, 71, 10, 35, 103, -34, 95, 120, 38, 108, -128, 121, -9, 95, -88, 115, 23, 22, -76, 75, -109, -53, -50, -21, -81, -60, -97, 89, 126, 27, 62, 60, -5, 124, -97, 55, 71, 2, 0, -66, -46, 35, 5, -96, -69, -103, 67, -104, 72, 49, -73, -79, 40, -121, -114, 2, 80, -6, -40, -45, -14, -128, 73, 52, -64, 39, 12, 47, 43, 21, -16, -79, 102, 100, -92, 92, -96, -121, -28, 5, 111, 7, 37, 126, -106, -50, 36, 111, 17, -115, 14, -122, -128, 87, -24, 100, -62, -57, -68, 126, -44, -37, -77, -101, 42, 29, 64, -58, 89, 45, -23, 47, -80, -3, 40};
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
    msg.setTimeStamp(0.587414598566);
    msg.setSource(4552U);
    msg.setSourceEntity(15U);
    msg.setDestination(50613U);
    msg.setDestinationEntity(3U);
    msg.content_type.assign("MEAWPLUGIVHNUQDELXWCSDCIHBHIBKPMPUZAEKJWNIHQFSEPWSZXLQMSMNNOFKORCFLSD");
    const char tmp_msg_0[] = {8, -57, -116, -122, 21, 71, -117, 15, -119, -105, 86, 109, 91, -6, -69, -13, -82, -11, -33, -83, 20, 6, 56, 72, -121, 80, -63, 117, 109, 59, -128, 118, 102, 56, -120, 26, -41, -6};
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
    msg.setTimeStamp(0.551335832046);
    msg.setSource(39694U);
    msg.setSourceEntity(71U);
    msg.setDestination(56604U);
    msg.setDestinationEntity(73U);
    msg.content_type.assign("ASHYJIDSUCRYSPFANKGXAPREMTCCBUJYYTXDMVHWITFJHOQMNGUWXRAWMCXZKMBVTRRGLRVSZEDMOPFJYPNFDL");
    const char tmp_msg_0[] = {-19, -91, 61, -121, -42, 108, 119, 81, -31, -70, 24, -89, -96, 35, 22, 59, -27, 22, 8, -64, 86, -14, 95, 24, 67, 20, -65, -78, -18, 122, 66, -127, 13, -102, 42, -121, -49, -107, -94, -48, -50, -89, 104, -3, -20, 32, -68, -40, 61, -35, 27, -82, 22, 14, 91, 27, 115, 1, 58, -101, -60, -48, -106, -33, 57, 80, -95, -65, 27, -96, -104, 111, -98, 111, 120, -25, -35, 117, -105, 76, 108, 26, 49, -11, 34, 3, 19, -71, -54, 38, -79, -7, 121, 13, 124, 77, -108, 64, -8, -88, -2, 69, -30, 57, 73, -56, 38, 37, -126, 114, -118, -124, -80, -99, 43, -85, -30, -68, -104, 119, 49, 54, -83, 19, 101, 53, -102, -79, 33, 20, 116, 48, 65, 16, 67, 3, 56, -79, -2, 57, -42, 100, 11, 73, -120, 1, 111, -83, -17, 13, 35, -45, 21, 76, -10, 111, -19, -105, 29, 96, -26, -42, -66, -84, -37, 33, 36, 99, -24, -85, -8, 125, 93, 125, 24, -13, -19, 59, 76, -2, 6, 63, -27, -54, -54, -55, -14, -56, 43, 27, 121, 126, -95, -36, 43, -13, 43, 47, 73, -25, -62, 28, 21, 41, 18, 8, 30, -14, -28, 123, 79, -62, -34, 82, 100, -69, -94, 44, 56, -68, 77, 27, -36, -66, -98};
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
    msg.setTimeStamp(0.327143722732);
    msg.setSource(39229U);
    msg.setSourceEntity(175U);
    msg.setDestination(39929U);
    msg.setDestinationEntity(247U);

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
    msg.setTimeStamp(0.463689727076);
    msg.setSource(18555U);
    msg.setSourceEntity(153U);
    msg.setDestination(15246U);
    msg.setDestinationEntity(73U);

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
    msg.setTimeStamp(0.840518122428);
    msg.setSource(57342U);
    msg.setSourceEntity(252U);
    msg.setDestination(51933U);
    msg.setDestinationEntity(161U);

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
    msg.setTimeStamp(0.857659484942);
    msg.setSource(22405U);
    msg.setSourceEntity(199U);
    msg.setDestination(43045U);
    msg.setDestinationEntity(209U);
    msg.target = 61140U;
    msg.bearing = 0.0091944540993;
    msg.elevation = 0.783768337992;

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
    msg.setTimeStamp(0.000502307442046);
    msg.setSource(58595U);
    msg.setSourceEntity(125U);
    msg.setDestination(34195U);
    msg.setDestinationEntity(177U);
    msg.target = 30179U;
    msg.bearing = 0.0178961032184;
    msg.elevation = 0.807068069867;

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
    msg.setTimeStamp(0.998295002407);
    msg.setSource(29039U);
    msg.setSourceEntity(159U);
    msg.setDestination(34245U);
    msg.setDestinationEntity(192U);
    msg.target = 19573U;
    msg.bearing = 0.455269711099;
    msg.elevation = 0.193782379303;

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
    msg.setTimeStamp(0.171169130277);
    msg.setSource(8853U);
    msg.setSourceEntity(78U);
    msg.setDestination(43310U);
    msg.setDestinationEntity(94U);
    msg.target = 46293U;
    msg.x = 0.326131641756;
    msg.y = 0.262258425833;
    msg.z = 0.496348602968;

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
    msg.setTimeStamp(0.513838474135);
    msg.setSource(43619U);
    msg.setSourceEntity(232U);
    msg.setDestination(14716U);
    msg.setDestinationEntity(39U);
    msg.target = 50857U;
    msg.x = 0.884571872566;
    msg.y = 0.559691298491;
    msg.z = 0.468368620927;

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
    msg.setTimeStamp(0.0323397283279);
    msg.setSource(19619U);
    msg.setSourceEntity(188U);
    msg.setDestination(7305U);
    msg.setDestinationEntity(34U);
    msg.target = 53697U;
    msg.x = 0.124885238327;
    msg.y = 0.241412114802;
    msg.z = 0.0415328667529;

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
    msg.setTimeStamp(0.781891182601);
    msg.setSource(59407U);
    msg.setSourceEntity(234U);
    msg.setDestination(6704U);
    msg.setDestinationEntity(99U);
    msg.target = 31870U;
    msg.lat = 0.972406156514;
    msg.lon = 0.300849142226;
    msg.z_units = 197U;
    msg.z = 0.693173357583;

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
    msg.setTimeStamp(0.0167348477008);
    msg.setSource(56417U);
    msg.setSourceEntity(21U);
    msg.setDestination(15158U);
    msg.setDestinationEntity(150U);
    msg.target = 60418U;
    msg.lat = 0.999848569897;
    msg.lon = 0.0535734646167;
    msg.z_units = 11U;
    msg.z = 0.873566421841;

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
    msg.setTimeStamp(0.490051118166);
    msg.setSource(52466U);
    msg.setSourceEntity(173U);
    msg.setDestination(58021U);
    msg.setDestinationEntity(113U);
    msg.target = 15089U;
    msg.lat = 0.921278711438;
    msg.lon = 0.220866687182;
    msg.z_units = 98U;
    msg.z = 0.543734420182;

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
    msg.setTimeStamp(0.286778447964);
    msg.setSource(33877U);
    msg.setSourceEntity(148U);
    msg.setDestination(54373U);
    msg.setDestinationEntity(190U);
    msg.locale.assign("GGHDMSLXRGJFOOITOIWH");
    const char tmp_msg_0[] = {-86, 38, -66, -89, -34, -34, 38, -128, -60, 62, -63, -97, -28, -6, 72, -46, -105, -57, 72, -7, -41, 78, -81, -125, 126, -79, 122, -120, 44, -72, 30, -78, 26, 93, 90, 73, -92, 61, -28, -38, -50, -21, -96, 47, 28, -33, 62, 81, 69, -14, -69, -30, -123, -110, -44, 4, -125, -17, -51, 116, -59, 76, 49, 17, 25, 32, -78, 27, 6, -105, -128, -52, -17, 110, -81, 59, 105, -51, -70, 80, -97, 34, -98, -87, 33, -5, -12, 31, 82, 31, 79, 125, 50, -11, -69, -99, 86, -121, -54, 103, -40, 51, 60, 64, -16, -125, -58, -54, -38, 82, 9, -3, 53, -11, 123, 42, 109, -3, 27, -49, -8, 8, -120, 73, -18, -45, 43, -102, 108, 36, 62, 61, 110, -112, -87, 84, -55, -67, -95, -110, 121, -121, -101, -44, -105, 110, 7, 88, 47, 52, -45, -60, -66};
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
    msg.setTimeStamp(0.736523852386);
    msg.setSource(9516U);
    msg.setSourceEntity(178U);
    msg.setDestination(40697U);
    msg.setDestinationEntity(127U);
    msg.locale.assign("ITOWMYKGMJHTYQHJOMPHKQGFNMPXXFACZBJVWYNQRDYPWAJSSQH");
    const char tmp_msg_0[] = {89, 92, -76, -32, -31, -60, -26, 32, -110, 89, 27, -94, -96, -71, -67, 17, -121, 93, -69, -109, -11, -99, 76, 126, 84, 114, 121, 12, -66, 23, 22, 24, 110, 112, -87, 37, -90, 83, -70, 73, -81, 42, 108, 67, 125, -30, 49, 97, -64, 104, -54, 22, -121, -34, -36, 86, -98, 71, -49, 36, -111, 97, 85, 67, 44, 14, -33, 91, 21, -66, -19, 109, -21, 27, 46, 122, 111, 117, 20, -85, 115, -120, 96, -57, 97, 18, 30, -9, -118, -124, 35, 110, 34, -59, -119, -41, -113, 87, 35, 14, 39, -6, 76, -43, 84, 115, -9, -27, -58, -29, -3, -55, -12, 9, 100, -58, -71, 102, 3, -89, 95, -72, -18, -66, 109, 63, -8, 11, 101, -83, -5, -118, 125, 64, -109, -16, -122, 64, 23, 117, 34, 90, -89, 88, 126, 34, -97, 115, -96, 105, 28, 36, -26, 47, 69, -33, -115, -49, 34, -105, 39, 104, 25, -5, -83, -83, 54, 51, 33, -27, -74, 81, -2, -60, 117, 41, -77, -53, -70, -74, -82, 4, -86, -126, 97, -23, -57, 123, -24, -122, 74, -41, 80, 118, 24, 7, 83, -64};
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
    msg.setTimeStamp(0.324225022159);
    msg.setSource(55080U);
    msg.setSourceEntity(17U);
    msg.setDestination(48315U);
    msg.setDestinationEntity(184U);
    msg.locale.assign("AZIPVLEKLTLWIXGWQWYFQJOXXUQNKDRIKZSTURCHPKJHPNNOIGOUNUAFZGIBLSVZLJPHBYBZFGDTQSDDMASDTXFMAEATIIKNAT");
    const char tmp_msg_0[] = {110, -105, 28, -2, 44, -57, 8, -103, 111, 17, -53, 74, 110, -120, 32, 52, -117, 69, 63, 114, -30, 104, -3, 67, 46, 97, 102, 112, -51, -37, -107, -95, -2, -87, 88, 63, -128, 106, -21, 9, -116, -35, -7, 83, -19, 118, 39, -103, -69, -10, -18, -28, -127, -10, -47, -97, 124, -50, -32, 39, -18, -71, 37, -107, 65, 103, -12, 26, 113, 17, 55, 69, 125, 87, 45, 26, -20, -27, -96, -76, -110, -128, 90, -28, 20, 34, -100, 44, -93, 89, 100, -2, 50, -77, 4, -10, -13, -127, -5, -35, -54, -6, 105, -98, 15, -43, -63, -22, -24, 26, -120, 46, -101, -33, -5, 33, -101, -104, -54, -5, -59, -21, -115, 73, -73, 66, 15, -80, -95, 95, -39, 61, 121};
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
    msg.setTimeStamp(0.0580314531935);
    msg.setSource(61650U);
    msg.setSourceEntity(247U);
    msg.setDestination(12428U);
    msg.setDestinationEntity(19U);

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
    msg.setTimeStamp(0.688671189658);
    msg.setSource(54856U);
    msg.setSourceEntity(147U);
    msg.setDestination(48949U);
    msg.setDestinationEntity(27U);

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
    msg.setTimeStamp(0.753061352533);
    msg.setSource(19740U);
    msg.setSourceEntity(132U);
    msg.setDestination(2648U);
    msg.setDestinationEntity(231U);

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
    msg.setTimeStamp(0.489012174573);
    msg.setSource(28306U);
    msg.setSourceEntity(67U);
    msg.setDestination(21829U);
    msg.setDestinationEntity(2U);
    msg.camid = 140U;
    msg.x = 9408U;
    msg.y = 39409U;

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
    msg.setTimeStamp(0.93087956503);
    msg.setSource(16104U);
    msg.setSourceEntity(113U);
    msg.setDestination(55365U);
    msg.setDestinationEntity(3U);
    msg.camid = 248U;
    msg.x = 47482U;
    msg.y = 40152U;

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
    msg.setTimeStamp(0.42819748437);
    msg.setSource(56640U);
    msg.setSourceEntity(148U);
    msg.setDestination(29076U);
    msg.setDestinationEntity(40U);
    msg.camid = 198U;
    msg.x = 44519U;
    msg.y = 59307U;

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
    msg.setTimeStamp(0.453115237863);
    msg.setSource(57786U);
    msg.setSourceEntity(231U);
    msg.setDestination(20415U);
    msg.setDestinationEntity(162U);
    msg.camid = 15U;
    msg.x = 52664U;
    msg.y = 16632U;

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
    msg.setTimeStamp(0.885296152271);
    msg.setSource(1692U);
    msg.setSourceEntity(129U);
    msg.setDestination(26438U);
    msg.setDestinationEntity(18U);
    msg.camid = 187U;
    msg.x = 17385U;
    msg.y = 63304U;

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
    msg.setTimeStamp(0.538247279189);
    msg.setSource(56710U);
    msg.setSourceEntity(251U);
    msg.setDestination(53480U);
    msg.setDestinationEntity(57U);
    msg.camid = 27U;
    msg.x = 7647U;
    msg.y = 9769U;

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
    msg.setTimeStamp(0.977619226318);
    msg.setSource(49323U);
    msg.setSourceEntity(147U);
    msg.setDestination(50761U);
    msg.setDestinationEntity(16U);
    msg.tracking = 121U;
    msg.lat = 0.2634136627;
    msg.lon = 0.47762496412;
    msg.x = 0.872878196894;
    msg.y = 0.797554543801;
    msg.z = 0.941473642243;

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
    msg.setTimeStamp(0.9697857983);
    msg.setSource(40621U);
    msg.setSourceEntity(38U);
    msg.setDestination(33279U);
    msg.setDestinationEntity(196U);
    msg.tracking = 179U;
    msg.lat = 0.493559361924;
    msg.lon = 0.13646446839;
    msg.x = 0.177125816545;
    msg.y = 0.213581257187;
    msg.z = 0.241743306976;

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
    msg.setTimeStamp(0.338185828674);
    msg.setSource(56458U);
    msg.setSourceEntity(9U);
    msg.setDestination(49371U);
    msg.setDestinationEntity(159U);
    msg.tracking = 143U;
    msg.lat = 0.843316533014;
    msg.lon = 0.396447547073;
    msg.x = 0.0776132399686;
    msg.y = 0.371089735031;
    msg.z = 0.281603062802;

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
    msg.setTimeStamp(0.604581739478);
    msg.setSource(45074U);
    msg.setSourceEntity(28U);
    msg.setDestination(17777U);
    msg.setDestinationEntity(230U);
    msg.target.assign("LTGWQJFYLBJDZLFPSQSIEIZAEOBDECQHTONCZDGBXAPICGHSCPBKOAQBCQIKTOETIHDYEAQRDJDGHLKWFVMOSMMNQJVTXGTWFTEWORZYOLTSGXLDVISEPWMUSJNYUEKXJZRMXTHBDIHBYMKRWZQOUGRCNFMNUCQAIICFEWKWYROUDBFLE");
    msg.lbearing = 0.535515996758;
    msg.lelevation = 0.802039229431;
    msg.bearing = 0.344668686486;
    msg.elevation = 0.916250819483;
    msg.phi = 0.0967373722626;
    msg.theta = 0.551484262374;
    msg.psi = 0.928381941634;
    msg.accuracy = 0.342092436016;

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
    msg.setTimeStamp(0.294870053344);
    msg.setSource(54360U);
    msg.setSourceEntity(92U);
    msg.setDestination(16919U);
    msg.setDestinationEntity(52U);
    msg.target.assign("TEXECSUWTPDDAHXBDNKQRPDWEKFDCTYGKMLSZOURYIICKIVNPJZBEFYMAJZIBBUHMNCFJTEDXJQUKQTFIIVICBKYAHLDYJGPBOUJFRJGMQMRHZTKYLQSTFCAONWAXKPAGJSCYWGCURSIXGBOMZWVLXHUTUMMHRUEIFWJDQGEWAKXPNQWNSJOHOHQRWYXQFGLNAMIURSZZNOPVWGVXLVQSVVBPSTHLEZOHBKVOLPAPYNR");
    msg.lbearing = 0.0164304181547;
    msg.lelevation = 0.891537765924;
    msg.bearing = 0.0853627330226;
    msg.elevation = 0.228506595736;
    msg.phi = 0.241804282653;
    msg.theta = 0.518204035516;
    msg.psi = 0.458170921878;
    msg.accuracy = 0.399092239382;

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
    msg.setTimeStamp(0.0248055007849);
    msg.setSource(31849U);
    msg.setSourceEntity(247U);
    msg.setDestination(2569U);
    msg.setDestinationEntity(77U);
    msg.target.assign("KMQCAPDHZLIDXDGHFGPLPNFYTNAITMIEKYABFWQLRPRDTVOFLBEUYXJXVGJITEGSYZHUZXRTGCBBCZNJUMBNGYLLMCDIROWLXAFXCEBFYHUXRADPISJCQGSTKZSXQMZKHJEHJHANGUXCWUHMFARQTKBYPQIEFSVVEBOBNM");
    msg.lbearing = 0.902998929649;
    msg.lelevation = 0.635172633628;
    msg.bearing = 0.823107889734;
    msg.elevation = 0.550733000856;
    msg.phi = 0.699757645691;
    msg.theta = 0.774953665902;
    msg.psi = 0.819333134877;
    msg.accuracy = 0.264086879415;

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
    msg.setTimeStamp(0.632714401545);
    msg.setSource(63336U);
    msg.setSourceEntity(108U);
    msg.setDestination(46570U);
    msg.setDestinationEntity(249U);
    msg.target.assign("WKHBAQTAFQECHXQWCBKYKUUPMEXSCUDDQCTAPGBXHJHHQNVBQSXQZETVVZISWNESUJUPWXSCJBUEQRORMSDGEXYSRZKOBYWXIYWTDTDENDOJNZIZPRVCGMKDPPZDDBSMFLIIJFDYPNOLWOSHNNZNQHZOAXRUEUGFMGCKUGR");
    msg.x = 0.955936521437;
    msg.y = 0.472982754177;
    msg.z = 0.0730104852245;
    msg.n = 0.814190377814;
    msg.e = 0.0130653027472;
    msg.d = 0.452691297545;
    msg.phi = 0.37446905677;
    msg.theta = 0.584332065749;
    msg.psi = 0.0798703191933;
    msg.accuracy = 0.959229769788;

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
    msg.setTimeStamp(0.812467720244);
    msg.setSource(43301U);
    msg.setSourceEntity(106U);
    msg.setDestination(61974U);
    msg.setDestinationEntity(58U);
    msg.target.assign("LBDHJIWYKQVTZEZXMPAEQLUMJYRICPSUBHWYOYUPKHEFDLCCUQYQTDZSQXNRTGDIFJVBNMRXWNJEXJFDPHXOJHQCVYELWEVDTKANIQVAUYKGGEGBESVKVVZUKBWAKJJPIDFOUBLIBDWTBIBXKFLSGRZSKZHIWNXVXWMDNNLMYIBCSUOJEVLRPPHAZROSTPJTCZPMYAOGTGHOQQTRMHWFYZDNRNRMGMSCXCZAUORLTSAGEHC");
    msg.x = 0.361725991497;
    msg.y = 0.555997243447;
    msg.z = 0.487560416089;
    msg.n = 0.955471609295;
    msg.e = 0.624596178186;
    msg.d = 0.366291262014;
    msg.phi = 0.444977231008;
    msg.theta = 0.969196548813;
    msg.psi = 0.130840139402;
    msg.accuracy = 0.34092220741;

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
    msg.setTimeStamp(0.222776602446);
    msg.setSource(6862U);
    msg.setSourceEntity(160U);
    msg.setDestination(62512U);
    msg.setDestinationEntity(24U);
    msg.target.assign("UMQIQGDPWLUFETDBWKLYTZRRCKTPGWFWIWZQTXTSMBDXIEFWYHFOSEJZTJSZFF");
    msg.x = 0.0708676205873;
    msg.y = 0.0231672099427;
    msg.z = 0.783758434943;
    msg.n = 0.948486117563;
    msg.e = 0.186394510056;
    msg.d = 0.880351355619;
    msg.phi = 0.309422254485;
    msg.theta = 0.505461398899;
    msg.psi = 0.00335840754642;
    msg.accuracy = 0.719697652705;

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
    msg.setTimeStamp(0.809664725099);
    msg.setSource(52445U);
    msg.setSourceEntity(44U);
    msg.setDestination(792U);
    msg.setDestinationEntity(107U);
    msg.target.assign("HWQNEJOGHAZHYNWMQOODEFHPTFNFPEXKEOAAAONHXVSJQZDGYDYVTBSCXNJSGCEMAGDPLJZZXLKQPMIBQDZGSHAGPRGJPCSCZAESOHAQYBINEMRMKVJTYGRYRZTDUTWJHR");
    msg.lat = 0.0909270011797;
    msg.lon = 0.284403455467;
    msg.z_units = 52U;
    msg.z = 0.120185297923;
    msg.accuracy = 0.41805904267;

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
    msg.setTimeStamp(0.70624755314);
    msg.setSource(54134U);
    msg.setSourceEntity(246U);
    msg.setDestination(64672U);
    msg.setDestinationEntity(206U);
    msg.target.assign("DAKYHVQJSQINFGTZIRTPWICJPZJNUFBVSIZIFBMOTOALUVVWNUDRERVTFAXVOXKJPELCQOGWQHKUWZEZKDLXKENFDQPJTBOOBSCEDCOTCKAJGICTLBHRDNUUCISHSLAXOZBSDBXSGYFMRJGQYHGRWEMXFYJMHFZENUCHASYYQFXDIEZFUNKQMPZNSDTBEELYWPZCVMPLDANBXGAWMPYKLMSOUVQVTHNHMROVWYPMIHYRGWGJBGTRWXJAPKKQRU");
    msg.lat = 0.499216494777;
    msg.lon = 0.627225523901;
    msg.z_units = 230U;
    msg.z = 0.382100598563;
    msg.accuracy = 0.38503960424;

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
    msg.setTimeStamp(0.76236890084);
    msg.setSource(50952U);
    msg.setSourceEntity(25U);
    msg.setDestination(41034U);
    msg.setDestinationEntity(133U);
    msg.target.assign("DEKVDOBBNVINJGTNMYJZEUUGCRAXQUTNOAXOLCESWUBLPXDDOBLCBGSQBYQHKXOIQCBCVAMATHZQOSWHRHGKIKSGGQICYABPRHXUVHRVLEFMFXBUSZFLPZCAJKLWIJGTWSCLGYDLWXQUPCEJYDFFNONJSNPALTMHFUGGQ");
    msg.lat = 0.106162716546;
    msg.lon = 0.402778871366;
    msg.z_units = 156U;
    msg.z = 0.407666702834;
    msg.accuracy = 0.373866438588;

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
    msg.setTimeStamp(0.296927802585);
    msg.setSource(39574U);
    msg.setSourceEntity(128U);
    msg.setDestination(54673U);
    msg.setDestinationEntity(132U);
    msg.name.assign("JOOPIQTZEPVBKNXTEDSGWABNNDDDSHBWELTYWLGHTOFRLKVCLOPUPTHPVQTAWGKOSNHPICMFHPARYMBCAWYZWODBNALQCTMYFWYACISGYSWRUGUFVIMVJSCFNGQGAZNCKYK");
    msg.lat = 0.482657677957;
    msg.lon = 0.17452705415;
    msg.z = 0.132467888167;
    msg.z_units = 189U;

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
    msg.setTimeStamp(0.755260994021);
    msg.setSource(34020U);
    msg.setSourceEntity(189U);
    msg.setDestination(4004U);
    msg.setDestinationEntity(126U);
    msg.name.assign("XEAZEWUTLKPPNATTCBYREXHFBXHJAWBUWQIYCCWVVQLJVBPCLYYQRSGKURTIQMHSZODRGBZISPLFZVMJNGWNHGOZUPNUGJBXUERKMFYOLCRSIMDXDKDSDPUEIEQCZPKOXWDRXRALFXDUNAESSTBUOIYTGJKBEJVWHKGVMZVSSHEZIFAARJFC");
    msg.lat = 0.771568766271;
    msg.lon = 0.616734790375;
    msg.z = 0.925063380144;
    msg.z_units = 124U;

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
    msg.setTimeStamp(0.908939083779);
    msg.setSource(20609U);
    msg.setSourceEntity(23U);
    msg.setDestination(23367U);
    msg.setDestinationEntity(36U);
    msg.name.assign("HFRTNSBMVTBMWEEUIYWTWKCTLLGQIBIOAQSUKSKDDXFOBPRPPDLFTWMXJEUYTAMMZQYFHCDGBJOIFURGCYNGNGOEHBLFJERJPBZCILKWSZZXIPZDAVZQORXKEOUWXJSHLFNGILVMPLYVXTMWOKKSECGQSEWO");
    msg.lat = 0.253737030588;
    msg.lon = 0.404545672042;
    msg.z = 0.200933336837;
    msg.z_units = 70U;

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
    msg.setTimeStamp(0.280368154971);
    msg.setSource(4172U);
    msg.setSourceEntity(13U);
    msg.setDestination(55083U);
    msg.setDestinationEntity(95U);
    msg.op = 51U;

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
    msg.setTimeStamp(0.120952820922);
    msg.setSource(27822U);
    msg.setSourceEntity(207U);
    msg.setDestination(51559U);
    msg.setDestinationEntity(240U);
    msg.op = 213U;

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
    msg.setTimeStamp(0.521373920476);
    msg.setSource(29887U);
    msg.setSourceEntity(154U);
    msg.setDestination(25210U);
    msg.setDestinationEntity(80U);
    msg.op = 254U;

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
    msg.setTimeStamp(0.682556746061);
    msg.setSource(34689U);
    msg.setSourceEntity(120U);
    msg.setDestination(64373U);
    msg.setDestinationEntity(229U);
    msg.value = 0.254282010502;
    msg.type = 84U;

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
    msg.setTimeStamp(0.529944171419);
    msg.setSource(20071U);
    msg.setSourceEntity(254U);
    msg.setDestination(32883U);
    msg.setDestinationEntity(32U);
    msg.value = 0.473481013144;
    msg.type = 110U;

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
    msg.setTimeStamp(0.635120737286);
    msg.setSource(64188U);
    msg.setSourceEntity(239U);
    msg.setDestination(58365U);
    msg.setDestinationEntity(87U);
    msg.value = 0.510386571641;
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
    msg.setTimeStamp(0.435342939215);
    msg.setSource(31251U);
    msg.setSourceEntity(179U);
    msg.setDestination(43724U);
    msg.setDestinationEntity(172U);
    msg.value = 0.355341905454;

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
    msg.setTimeStamp(0.166141574501);
    msg.setSource(45420U);
    msg.setSourceEntity(18U);
    msg.setDestination(44438U);
    msg.setDestinationEntity(17U);
    msg.value = 0.255323979992;

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
    msg.setTimeStamp(0.0602710745951);
    msg.setSource(8678U);
    msg.setSourceEntity(92U);
    msg.setDestination(40847U);
    msg.setDestinationEntity(78U);
    msg.value = 0.476533416318;

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
    msg.setTimeStamp(0.528602990186);
    msg.setSource(22426U);
    msg.setSourceEntity(254U);
    msg.setDestination(51764U);
    msg.setDestinationEntity(151U);
    msg.timestamp_last_service = 0.779902734849;
    msg.time_next_service = 0.0193322104063;
    msg.time_motor_next_service = 0.416674650372;
    msg.time_idle_ground = 0.865216274294;
    msg.time_idle_air = 0.163341755971;
    msg.time_idle_water = 0.654415391579;
    msg.time_idle_underwater = 0.809983330059;
    msg.time_idle_unknown = 0.544656813417;
    msg.time_motor_ground = 0.961904835084;
    msg.time_motor_air = 0.583393467038;
    msg.time_motor_water = 0.479228123639;
    msg.time_motor_underwater = 0.936467009569;
    msg.time_motor_unknown = 0.101176472356;
    msg.rpm_min = -4041;
    msg.rpm_max = 15348;
    msg.depth_max = 0.284537163547;

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
    msg.setTimeStamp(0.180642419578);
    msg.setSource(60427U);
    msg.setSourceEntity(205U);
    msg.setDestination(3411U);
    msg.setDestinationEntity(245U);
    msg.timestamp_last_service = 0.444810671684;
    msg.time_next_service = 0.285262407569;
    msg.time_motor_next_service = 0.806096875102;
    msg.time_idle_ground = 0.149061591573;
    msg.time_idle_air = 0.87746890653;
    msg.time_idle_water = 0.877380567296;
    msg.time_idle_underwater = 0.653601222045;
    msg.time_idle_unknown = 0.969416401828;
    msg.time_motor_ground = 0.258625200364;
    msg.time_motor_air = 0.831893086733;
    msg.time_motor_water = 0.436220658958;
    msg.time_motor_underwater = 0.298834438541;
    msg.time_motor_unknown = 0.932103893064;
    msg.rpm_min = -19260;
    msg.rpm_max = 29587;
    msg.depth_max = 0.674912075918;

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
    msg.setTimeStamp(0.504277527802);
    msg.setSource(9522U);
    msg.setSourceEntity(157U);
    msg.setDestination(39005U);
    msg.setDestinationEntity(237U);
    msg.timestamp_last_service = 0.568323504356;
    msg.time_next_service = 0.292588519368;
    msg.time_motor_next_service = 0.405574016755;
    msg.time_idle_ground = 0.783961443712;
    msg.time_idle_air = 0.726186654061;
    msg.time_idle_water = 0.714141179359;
    msg.time_idle_underwater = 0.335586047343;
    msg.time_idle_unknown = 0.254020964054;
    msg.time_motor_ground = 0.602031344481;
    msg.time_motor_air = 0.73640068959;
    msg.time_motor_water = 0.83688650822;
    msg.time_motor_underwater = 0.589890962464;
    msg.time_motor_unknown = 0.0628787842218;
    msg.rpm_min = -25569;
    msg.rpm_max = 29305;
    msg.depth_max = 0.185563379369;

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
    msg.setTimeStamp(0.469226006858);
    msg.setSource(8648U);
    msg.setSourceEntity(212U);
    msg.setDestination(31848U);
    msg.setDestinationEntity(94U);
    msg.severity = 163U;
    msg.text.assign("OQIZCGYLXYFIXKCCTAQWRSKVDHTQAHJAMXGZDIQGEUSHBLTSTJQSSIXZNROQNFHSAXYKOVPPGBLFSWPUXWVNHGMYFHECZMBODJBPVEWNOHKIOAXYUOCFZUSFYVZGUAUPBAIBFLPBNWHWLLSETCGJKGZJNVIEWRTEMLRYNDKJRITBFRPKUGIVMVMUEJMQDBCNJLMYLWDPZJKHTIDEAYGPTOMDKVA");

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
    msg.setTimeStamp(0.0973582419075);
    msg.setSource(6491U);
    msg.setSourceEntity(224U);
    msg.setDestination(52253U);
    msg.setDestinationEntity(165U);
    msg.severity = 54U;
    msg.text.assign("JHZVLTDGPZYNSLWMKNEAHFKXDRPOHQZPXYFLBUAGTCWSONBRYMNVZDJBFUADIWKRZJQLIDIIOMVUYLMSTQCXGTSJWNFXMRXJNANHCPXBIBORUJKAKSXYTDKDPOMFATWCFDUSITIXFE");

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
    msg.setTimeStamp(0.957427682399);
    msg.setSource(46682U);
    msg.setSourceEntity(149U);
    msg.setDestination(46851U);
    msg.setDestinationEntity(53U);
    msg.severity = 88U;
    msg.text.assign("JCBVWYTXUSDMNVEIAOJSTJELVPXVZOIVDNLJDZAZQZLAELADEOFTRFJIFRXCICGTXKUSZSEOLAOKPUVUCNXWBSDNAPCQRRLGSKYJQNWRETMKUZXKBHAAFU");

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
    msg.setTimeStamp(0.913190462678);
    msg.setSource(40658U);
    msg.setSourceEntity(127U);
    msg.setDestination(18509U);
    msg.setDestinationEntity(234U);
    msg.channel = -32;
    msg.value = -1528636496;
    msg.gain = 2U;

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
    msg.setTimeStamp(0.161752040027);
    msg.setSource(38634U);
    msg.setSourceEntity(63U);
    msg.setDestination(63534U);
    msg.setDestinationEntity(157U);
    msg.channel = 17;
    msg.value = 1100288226;
    msg.gain = 239U;

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
    msg.setTimeStamp(0.245049095461);
    msg.setSource(17888U);
    msg.setSourceEntity(109U);
    msg.setDestination(31116U);
    msg.setDestinationEntity(169U);
    msg.channel = -30;
    msg.value = -286573735;
    msg.gain = 206U;

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
    msg.setTimeStamp(0.643347471963);
    msg.setSource(8343U);
    msg.setSourceEntity(170U);
    msg.setDestination(38268U);
    msg.setDestinationEntity(246U);
    msg.ch01 = 0.385738982609;
    msg.ch02 = 0.756885318917;
    msg.ch03 = 0.993079718909;
    msg.ch04 = 0.2157064153;
    msg.ch05 = 0.289599536236;
    msg.ch06 = 0.278868912556;
    msg.ch07 = 0.778537260742;
    msg.ch08 = 0.348252378901;
    msg.ch09 = 0.443995985247;
    msg.ch10 = 0.255692422995;
    msg.ch11 = 0.777918318405;
    msg.ch12 = 0.685371452405;
    msg.ch13 = 0.708246825542;
    msg.ch14 = 0.801246736101;
    msg.ch15 = 0.246536385381;
    msg.ch16 = 0.683238507474;

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
    msg.setTimeStamp(0.507904897916);
    msg.setSource(45805U);
    msg.setSourceEntity(155U);
    msg.setDestination(5164U);
    msg.setDestinationEntity(208U);
    msg.ch01 = 0.566598056056;
    msg.ch02 = 0.975696177919;
    msg.ch03 = 0.427406500414;
    msg.ch04 = 0.625593187569;
    msg.ch05 = 0.141643992419;
    msg.ch06 = 0.953491833968;
    msg.ch07 = 0.571583677474;
    msg.ch08 = 0.69532929403;
    msg.ch09 = 0.137278484096;
    msg.ch10 = 0.337617152313;
    msg.ch11 = 0.281999283208;
    msg.ch12 = 0.507976524676;
    msg.ch13 = 0.389473430468;
    msg.ch14 = 0.850744357624;
    msg.ch15 = 0.643266469831;
    msg.ch16 = 0.358632900678;

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
    msg.setTimeStamp(0.168270003382);
    msg.setSource(42823U);
    msg.setSourceEntity(211U);
    msg.setDestination(4739U);
    msg.setDestinationEntity(188U);
    msg.ch01 = 0.0443927150635;
    msg.ch02 = 0.0578664929042;
    msg.ch03 = 0.132384419795;
    msg.ch04 = 0.104535341627;
    msg.ch05 = 0.37363234534;
    msg.ch06 = 0.301713455197;
    msg.ch07 = 0.0776083282902;
    msg.ch08 = 0.867380371895;
    msg.ch09 = 0.422086630003;
    msg.ch10 = 0.134347663979;
    msg.ch11 = 0.942285803572;
    msg.ch12 = 0.329534527023;
    msg.ch13 = 0.683726253285;
    msg.ch14 = 0.334247106324;
    msg.ch15 = 0.472845008511;
    msg.ch16 = 0.868257112157;

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
    msg.setTimeStamp(0.244603795313);
    msg.setSource(11505U);
    msg.setSourceEntity(174U);
    msg.setDestination(48062U);
    msg.setDestinationEntity(245U);
    msg.time = 0.344042292648;
    msg.ang = 0.568641182401;

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
    msg.setTimeStamp(0.046655957651);
    msg.setSource(17475U);
    msg.setSourceEntity(110U);
    msg.setDestination(13479U);
    msg.setDestinationEntity(151U);
    msg.time = 0.983739381297;
    msg.ang = 0.893836356668;

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
    msg.setTimeStamp(0.256658640028);
    msg.setSource(50367U);
    msg.setSourceEntity(231U);
    msg.setDestination(24991U);
    msg.setDestinationEntity(246U);
    msg.time = 0.15033270903;
    msg.ang = 0.778818378652;

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
    msg.setTimeStamp(0.529396695324);
    msg.setSource(29488U);
    msg.setSourceEntity(180U);
    msg.setDestination(19380U);
    msg.setDestinationEntity(8U);
    msg.value = 0.969559329528;

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
    msg.setTimeStamp(0.249419796576);
    msg.setSource(13486U);
    msg.setSourceEntity(71U);
    msg.setDestination(17243U);
    msg.setDestinationEntity(169U);
    msg.value = 0.260241223179;

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
    msg.setTimeStamp(0.535245159477);
    msg.setSource(41908U);
    msg.setSourceEntity(21U);
    msg.setDestination(59281U);
    msg.setDestinationEntity(146U);
    msg.value = 0.148497539617;

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
    msg.setTimeStamp(0.737342079419);
    msg.setSource(45814U);
    msg.setSourceEntity(34U);
    msg.setDestination(5996U);
    msg.setDestinationEntity(98U);
    msg.value = 0.824863931106;

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
    msg.setTimeStamp(0.16223061428);
    msg.setSource(40931U);
    msg.setSourceEntity(2U);
    msg.setDestination(58326U);
    msg.setDestinationEntity(243U);
    msg.value = 0.165618502666;

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
    msg.setTimeStamp(0.833694040712);
    msg.setSource(12302U);
    msg.setSourceEntity(12U);
    msg.setDestination(11389U);
    msg.setDestinationEntity(39U);
    msg.value = 0.119547122861;

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
    msg.setTimeStamp(0.585905446939);
    msg.setSource(38846U);
    msg.setSourceEntity(24U);
    msg.setDestination(53061U);
    msg.setDestinationEntity(133U);
    msg.value = 0.223471257917;

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
    msg.setTimeStamp(0.600054900501);
    msg.setSource(35073U);
    msg.setSourceEntity(9U);
    msg.setDestination(63996U);
    msg.setDestinationEntity(107U);
    msg.value = 0.356731433073;

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
    msg.setTimeStamp(0.0963927687068);
    msg.setSource(26406U);
    msg.setSourceEntity(33U);
    msg.setDestination(48408U);
    msg.setDestinationEntity(37U);
    msg.value = 0.675507061679;

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
    msg.setTimeStamp(0.354406775438);
    msg.setSource(18254U);
    msg.setSourceEntity(86U);
    msg.setDestination(27365U);
    msg.setDestinationEntity(118U);
    msg.l2 = 56;
    msg.l3 = -125;
    msg.iridium = 103;
    msg.modem = -14;
    msg.pumps = 107;
    msg.vhf = -9;

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
    msg.setTimeStamp(0.843524896301);
    msg.setSource(45048U);
    msg.setSourceEntity(38U);
    msg.setDestination(54317U);
    msg.setDestinationEntity(82U);
    msg.l2 = 66;
    msg.l3 = 34;
    msg.iridium = 2;
    msg.modem = 57;
    msg.pumps = 43;
    msg.vhf = -24;

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
    msg.setTimeStamp(0.455415812127);
    msg.setSource(3548U);
    msg.setSourceEntity(249U);
    msg.setDestination(52165U);
    msg.setDestinationEntity(93U);
    msg.l2 = 30;
    msg.l3 = 12;
    msg.iridium = -77;
    msg.modem = -48;
    msg.pumps = 68;
    msg.vhf = -2;

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
    msg.setTimeStamp(0.683525685876);
    msg.setSource(36525U);
    msg.setSourceEntity(202U);
    msg.setDestination(60182U);
    msg.setDestinationEntity(51U);
    msg.angle = 0.01355573535;
    msg.reference.assign("MHYHLATJOFBNUIGKERURIAKAPEXXJOKBYGGQCNJZHLDGNQNBTOGVOMSIEVMFZVMBSUBJTTFKVXCKLKXDPXQYEGKFTOALPXXPBFYHVJDVSBSZLVIYTAYSWUOQR");
    msg.speed = 0.373687194712;

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
    msg.setTimeStamp(0.858148396471);
    msg.setSource(45241U);
    msg.setSourceEntity(225U);
    msg.setDestination(26104U);
    msg.setDestinationEntity(28U);
    msg.angle = 0.892348078026;
    msg.reference.assign("PQMPWJNINDVOKJYVIVYCHFPZMCAAKXTXBVYLTJOQSUOVHRBYPXZDANWCZKANIEVLNBHHRHBBJUKPKJRGCMLIJDZXFBOLZLDHWEFWTFQFXCPGDZTLDTSYPMBQKEGEQUWFYJLVOSJWMQ");
    msg.speed = 0.847149424874;

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
    msg.setTimeStamp(0.255044181145);
    msg.setSource(10226U);
    msg.setSourceEntity(213U);
    msg.setDestination(46298U);
    msg.setDestinationEntity(154U);
    msg.angle = 0.435516508119;
    msg.reference.assign("JMRNHBSXIUFLVCDZYKWYEEXQZTBDDEQQTICZTTZPLJQRLAMTNUMJCYIOXKFVDONIW");
    msg.speed = 0.508506199849;

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
    msg.setTimeStamp(0.660045333573);
    msg.setSource(27234U);
    msg.setSourceEntity(146U);
    msg.setDestination(37498U);
    msg.setDestinationEntity(49U);
    msg.angle = 0.987034196954;
    msg.speed = 0.248360318398;

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
    msg.setTimeStamp(0.51124153395);
    msg.setSource(18346U);
    msg.setSourceEntity(107U);
    msg.setDestination(1863U);
    msg.setDestinationEntity(243U);
    msg.angle = 0.275878727396;
    msg.speed = 0.751021341144;

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
    msg.setTimeStamp(0.833487485546);
    msg.setSource(18683U);
    msg.setSourceEntity(244U);
    msg.setDestination(63891U);
    msg.setDestinationEntity(61U);
    msg.angle = 0.207682130912;
    msg.speed = 0.96378572543;

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
    msg.setTimeStamp(0.438647778756);
    msg.setSource(50957U);
    msg.setSourceEntity(33U);
    msg.setDestination(23591U);
    msg.setDestinationEntity(113U);
    msg.dir = 0.0221818235931;
    msg.speed = 0.555019893986;

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
    msg.setTimeStamp(0.65809889542);
    msg.setSource(51628U);
    msg.setSourceEntity(95U);
    msg.setDestination(34094U);
    msg.setDestinationEntity(18U);
    msg.dir = 0.496577007064;
    msg.speed = 0.275426267159;

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
    msg.setTimeStamp(0.974885278044);
    msg.setSource(41895U);
    msg.setSourceEntity(53U);
    msg.setDestination(15415U);
    msg.setDestinationEntity(201U);
    msg.dir = 0.0883369139876;
    msg.speed = 0.483227482866;

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
    msg.setTimeStamp(0.807735772173);
    msg.setSource(55244U);
    msg.setSourceEntity(85U);
    msg.setDestination(15782U);
    msg.setDestinationEntity(10U);
    msg.x = 0.762916866835;
    msg.y = 0.267401580725;
    msg.z1 = 0.98325776503;
    msg.z2 = 0.313505219443;

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
    msg.setTimeStamp(0.433162934689);
    msg.setSource(45705U);
    msg.setSourceEntity(136U);
    msg.setDestination(45912U);
    msg.setDestinationEntity(144U);
    msg.x = 0.633076544401;
    msg.y = 0.927390283648;
    msg.z1 = 0.388606388986;
    msg.z2 = 0.608325517678;

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
    msg.setTimeStamp(0.399704426155);
    msg.setSource(48222U);
    msg.setSourceEntity(67U);
    msg.setDestination(37678U);
    msg.setDestinationEntity(189U);
    msg.x = 0.0581351217868;
    msg.y = 0.431449048058;
    msg.z1 = 0.589758931653;
    msg.z2 = 0.923962823196;

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
    msg.setTimeStamp(0.0992291798865);
    msg.setSource(19577U);
    msg.setSourceEntity(132U);
    msg.setDestination(48605U);
    msg.setDestinationEntity(230U);
    msg.mmsi = 0.83848459259;
    msg.lat = 0.498372515179;
    msg.lon = 0.807957551668;
    msg.x = 0.796933388263;
    msg.y = 0.902512373831;
    msg.speed = 0.555524562833;
    msg.course = 0.606052593561;
    msg.dist = 0.442173619907;
    msg.length = 0.294335353024;
    msg.width = 0.988632101063;
    msg.o_vect = 0.378226321636;

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
    msg.setTimeStamp(0.182767623767);
    msg.setSource(19598U);
    msg.setSourceEntity(36U);
    msg.setDestination(49798U);
    msg.setDestinationEntity(227U);
    msg.mmsi = 0.515734919099;
    msg.lat = 0.810622228083;
    msg.lon = 0.555340440992;
    msg.x = 0.225057264058;
    msg.y = 0.884931060506;
    msg.speed = 0.910691350787;
    msg.course = 0.935506183892;
    msg.dist = 0.453916138558;
    msg.length = 0.476625520925;
    msg.width = 0.776180466758;
    msg.o_vect = 0.0563515682639;

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
    msg.setTimeStamp(0.0875450252651);
    msg.setSource(7070U);
    msg.setSourceEntity(122U);
    msg.setDestination(57197U);
    msg.setDestinationEntity(108U);
    msg.mmsi = 0.678109871115;
    msg.lat = 0.000273260398685;
    msg.lon = 0.174164876098;
    msg.x = 0.0494713478922;
    msg.y = 0.177838267977;
    msg.speed = 0.773250336216;
    msg.course = 0.985196105463;
    msg.dist = 0.801285779221;
    msg.length = 0.832132233101;
    msg.width = 0.910743262166;
    msg.o_vect = 0.443959400456;

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
    msg.setTimeStamp(0.621815215634);
    msg.setSource(49403U);
    msg.setSourceEntity(141U);
    msg.setDestination(61279U);
    msg.setDestinationEntity(133U);
    msg.locations.assign("DQAKZEEGJLYCZNMFFRMLKWOQERVPEVNPRTNGCPAHOMWFNAAJSIGJHX");

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
    msg.setTimeStamp(0.318259134007);
    msg.setSource(45617U);
    msg.setSourceEntity(4U);
    msg.setDestination(50518U);
    msg.setDestinationEntity(31U);
    msg.locations.assign("NSANWNUQQPHCBYVLPISLCGDVELJOOHYZQBDSAP");

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
    msg.setTimeStamp(0.456159020762);
    msg.setSource(7087U);
    msg.setSourceEntity(85U);
    msg.setDestination(59939U);
    msg.setDestinationEntity(2U);
    msg.locations.assign("KEWVSDMOKMPNIKIBDJTGFSAOEINHLZHPSUHLJNUJOLGQYZILGGTZSGQTXUVCVOGCPNAGSPLVFERXRVRDBKXHLLCOPSCTHRKDAUEHLYGJJRRTITSBJRFMCXVZGKQCEVWOQWEEYYBADQZLJNDKKNHWTQZJSVDGMDYWMQXHUZUXYIZPPFNCLWBXSJHIUWNMBRAUPABNBFMYAFDYMIAQTWUEXZQFOJOBKHCMVPYFWKMOBTUFAVDPNWFTXYCESECO");

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
    msg.setTimeStamp(0.929506097631);
    msg.setSource(61670U);
    msg.setSourceEntity(177U);
    msg.setDestination(16979U);
    msg.setDestinationEntity(229U);
    msg.value = 0.927638877168;

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
    msg.setTimeStamp(0.821651528117);
    msg.setSource(31198U);
    msg.setSourceEntity(78U);
    msg.setDestination(48484U);
    msg.setDestinationEntity(225U);
    msg.value = 0.763661464718;

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
    msg.setTimeStamp(0.533926654256);
    msg.setSource(8686U);
    msg.setSourceEntity(142U);
    msg.setDestination(25424U);
    msg.setDestinationEntity(137U);
    msg.value = 0.462808668741;

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
    msg.setTimeStamp(0.280247298322);
    msg.setSource(5762U);
    msg.setSourceEntity(37U);
    msg.setDestination(38246U);
    msg.setDestinationEntity(181U);
    msg.beam1 = 0.804686168269;
    msg.beam2 = 0.446075887119;
    msg.beam3 = 0.878570684443;
    msg.beam4 = 0.970115900779;

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
    msg.setTimeStamp(0.709429105654);
    msg.setSource(28239U);
    msg.setSourceEntity(173U);
    msg.setDestination(16839U);
    msg.setDestinationEntity(233U);
    msg.beam1 = 0.613817527327;
    msg.beam2 = 0.616762396071;
    msg.beam3 = 0.850159790085;
    msg.beam4 = 0.403682816306;

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
    msg.setTimeStamp(0.918584343276);
    msg.setSource(14912U);
    msg.setSourceEntity(198U);
    msg.setDestination(15262U);
    msg.setDestinationEntity(216U);
    msg.beam1 = 0.0874869721505;
    msg.beam2 = 0.842509032074;
    msg.beam3 = 0.0905702855489;
    msg.beam4 = 0.622588787258;

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
    msg.setTimeStamp(0.659411135182);
    msg.setSource(56434U);
    msg.setSourceEntity(104U);
    msg.setDestination(19902U);
    msg.setDestinationEntity(187U);
    msg.beam1 = 113U;
    msg.beam2 = 153U;
    msg.beam3 = 22U;
    msg.beam4 = 59U;

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
    msg.setTimeStamp(0.937556339343);
    msg.setSource(26509U);
    msg.setSourceEntity(116U);
    msg.setDestination(33676U);
    msg.setDestinationEntity(158U);
    msg.beam1 = 155U;
    msg.beam2 = 43U;
    msg.beam3 = 161U;
    msg.beam4 = 237U;

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
    msg.setTimeStamp(0.033318164314);
    msg.setSource(63559U);
    msg.setSourceEntity(237U);
    msg.setDestination(27032U);
    msg.setDestinationEntity(143U);
    msg.beam1 = 74U;
    msg.beam2 = 30U;
    msg.beam3 = 19U;
    msg.beam4 = 210U;

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
    msg.setTimeStamp(0.813182593042);
    msg.setSource(37553U);
    msg.setSourceEntity(218U);
    msg.setDestination(56480U);
    msg.setDestinationEntity(145U);
    msg.pos = 0.812504391873;

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
    msg.setTimeStamp(0.774439511683);
    msg.setSource(14487U);
    msg.setSourceEntity(58U);
    msg.setDestination(2552U);
    msg.setDestinationEntity(117U);
    msg.pos = 0.0321603268532;
    IMC::ADCPBeam tmp_msg_0;
    tmp_msg_0.vel = 0.0707292714104;
    tmp_msg_0.amp = 0.186184733324;
    tmp_msg_0.cor = 216U;
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
    msg.setTimeStamp(0.0639000759583);
    msg.setSource(12286U);
    msg.setSourceEntity(248U);
    msg.setDestination(15614U);
    msg.setDestinationEntity(104U);
    msg.pos = 0.390029184364;

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
    msg.setTimeStamp(0.462245322812);
    msg.setSource(58918U);
    msg.setSourceEntity(190U);
    msg.setDestination(45264U);
    msg.setDestinationEntity(3U);
    msg.beams = 43U;
    msg.cells = 163U;
    msg.coord_sys = 238U;
    IMC::CurrentProfileCell tmp_msg_0;
    tmp_msg_0.pos = 0.959437310013;
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
    msg.setTimeStamp(0.643179239401);
    msg.setSource(25855U);
    msg.setSourceEntity(162U);
    msg.setDestination(10150U);
    msg.setDestinationEntity(43U);
    msg.beams = 1U;
    msg.cells = 132U;
    msg.coord_sys = 226U;
    IMC::CurrentProfileCell tmp_msg_0;
    tmp_msg_0.pos = 0.119848579187;
    IMC::ADCPBeam tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.vel = 0.615044498231;
    tmp_tmp_msg_0_0.amp = 0.694299211205;
    tmp_tmp_msg_0_0.cor = 22U;
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
    msg.setTimeStamp(0.424851145282);
    msg.setSource(43305U);
    msg.setSourceEntity(129U);
    msg.setDestination(65439U);
    msg.setDestinationEntity(115U);
    msg.beams = 108U;
    msg.cells = 163U;
    msg.coord_sys = 239U;
    IMC::CurrentProfileCell tmp_msg_0;
    tmp_msg_0.pos = 0.387068013676;
    IMC::ADCPBeam tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.vel = 0.113123972529;
    tmp_tmp_msg_0_0.amp = 0.549041113112;
    tmp_tmp_msg_0_0.cor = 153U;
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
    msg.setTimeStamp(0.443579555804);
    msg.setSource(26121U);
    msg.setSourceEntity(52U);
    msg.setDestination(64916U);
    msg.setDestinationEntity(186U);
    msg.vel = 0.549771525065;
    msg.amp = 0.899898423654;
    msg.cor = 76U;

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
    msg.setTimeStamp(0.516389674957);
    msg.setSource(37360U);
    msg.setSourceEntity(2U);
    msg.setDestination(32226U);
    msg.setDestinationEntity(145U);
    msg.vel = 0.200253437621;
    msg.amp = 0.275668521194;
    msg.cor = 243U;

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
    msg.setTimeStamp(0.189229217455);
    msg.setSource(60745U);
    msg.setSourceEntity(150U);
    msg.setDestination(43148U);
    msg.setDestinationEntity(118U);
    msg.vel = 0.147693065834;
    msg.amp = 0.691406602767;
    msg.cor = 172U;

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
    msg.setTimeStamp(0.765725800477);
    msg.setSource(15896U);
    msg.setSourceEntity(236U);
    msg.setDestination(53043U);
    msg.setDestinationEntity(123U);
    msg.serial_no = 996316447U;
    msg.unix_timestamp = 772205239U;
    msg.millis = 56628U;
    msg.trans_protocol = 110U;
    msg.trans_id = 1038050535U;
    msg.trans_data = 65168U;
    msg.snr = 0U;
    msg.trans_freq = 156U;
    msg.recv_mem_addr = 56522U;
    msg.lat = 0.872226054008;
    msg.lon = 0.622741622372;

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
    msg.setTimeStamp(0.443822457092);
    msg.setSource(24930U);
    msg.setSourceEntity(67U);
    msg.setDestination(56803U);
    msg.setDestinationEntity(140U);
    msg.serial_no = 588849680U;
    msg.unix_timestamp = 812645212U;
    msg.millis = 6854U;
    msg.trans_protocol = 22U;
    msg.trans_id = 4102685526U;
    msg.trans_data = 63748U;
    msg.snr = 99U;
    msg.trans_freq = 100U;
    msg.recv_mem_addr = 55204U;
    msg.lat = 0.108578575417;
    msg.lon = 0.204283534881;

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
    msg.setTimeStamp(0.785032593893);
    msg.setSource(41200U);
    msg.setSourceEntity(229U);
    msg.setDestination(23693U);
    msg.setDestinationEntity(171U);
    msg.serial_no = 826954927U;
    msg.unix_timestamp = 4130703719U;
    msg.millis = 25493U;
    msg.trans_protocol = 189U;
    msg.trans_id = 36630015U;
    msg.trans_data = 52357U;
    msg.snr = 14U;
    msg.trans_freq = 73U;
    msg.recv_mem_addr = 36218U;
    msg.lat = 0.789865677616;
    msg.lon = 0.333725498201;

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
    msg.setTimeStamp(0.650732935655);
    msg.setSource(29531U);
    msg.setSourceEntity(112U);
    msg.setDestination(48166U);
    msg.setDestinationEntity(203U);
    msg.serial_no = 765937966U;
    msg.unix_timestamp = 1953139990U;
    msg.temperature = 0.973362744226;
    msg.avg_noise_level = 100U;
    msg.peak_noise_level = 16U;
    msg.recv_listen_freq = 179U;
    msg.recv_mem_addr = 12195U;

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
    msg.setTimeStamp(0.414340878305);
    msg.setSource(54638U);
    msg.setSourceEntity(237U);
    msg.setDestination(24851U);
    msg.setDestinationEntity(115U);
    msg.serial_no = 1320374U;
    msg.unix_timestamp = 2913826781U;
    msg.temperature = 0.904492311288;
    msg.avg_noise_level = 227U;
    msg.peak_noise_level = 77U;
    msg.recv_listen_freq = 63U;
    msg.recv_mem_addr = 49331U;

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
    msg.setTimeStamp(0.892196734476);
    msg.setSource(4429U);
    msg.setSourceEntity(111U);
    msg.setDestination(33647U);
    msg.setDestinationEntity(67U);
    msg.serial_no = 4217183042U;
    msg.unix_timestamp = 1351989298U;
    msg.temperature = 0.147311609651;
    msg.avg_noise_level = 15U;
    msg.peak_noise_level = 139U;
    msg.recv_listen_freq = 142U;
    msg.recv_mem_addr = 39350U;

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
    msg.setTimeStamp(0.197333975856);
    msg.setSource(11526U);
    msg.setSourceEntity(137U);
    msg.setDestination(62482U);
    msg.setDestinationEntity(53U);
    msg.frequency = 462742539U;
    msg.info.assign("CXSMEVWQYGZVDLEEPGSBAFIKWNKGEJZGFPBKWZTZRHOMCHDWAOBAMHVWSIXZGOAQVPROCUKQDAHILRYHZDYLDJROACQIWTQEBX");

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
    msg.setTimeStamp(0.00841856426127);
    msg.setSource(31293U);
    msg.setSourceEntity(40U);
    msg.setDestination(3704U);
    msg.setDestinationEntity(53U);
    msg.frequency = 3585205466U;
    msg.info.assign("ZZWNIDVZSYBDMLFFOUBBTYBHLXLZPLCKCULPBBONUZVUXTGUPRAYRXCYZNROWPXSXPIWYYHMEEFVRETHZOXOJIHJXIVNGL");

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
    msg.setTimeStamp(0.147697584893);
    msg.setSource(58216U);
    msg.setSourceEntity(45U);
    msg.setDestination(9831U);
    msg.setDestinationEntity(142U);
    msg.frequency = 2011477815U;
    msg.info.assign("GRYEHDBVDHVVATQBYNRLNFDHSMJRIKORPTMJHTURMQRAYFKAYMGKNJPNSXZKXYVKIPEUVETVZPUSOFWFCXTOXRBBFCZCIYBBCZUHJSYKMNXLOMEGVGGCBPZSZYIHXCGODVUKDINUQAFWWLAHLNVXUJGWUSZAXNPFOXDULDWTPWRLMITJSLWWFZHEKIOCHWLQSFJQFAEDPEWJOYKULMEBEXGDILTZQQPQNYKCRQOJCGTJ");

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
    msg.setTimeStamp(0.258301135149);
    msg.setSource(18893U);
    msg.setSourceEntity(89U);
    msg.setDestination(44703U);
    msg.setDestinationEntity(241U);
    msg.adcp = 10;
    msg.adcp_dur = 3070287615U;
    msg.adcp_fr = 2529063110U;
    msg.ctd = 82;
    msg.ctd_dur = 3695932403U;
    msg.ctd_fr = 2148197114U;
    msg.opt = 19;
    msg.opt_dur = 3496046639U;
    msg.opt_fr = 2309906565U;
    msg.tbl = -7;
    msg.tbl_dur = 1338200487U;
    msg.tbl_fr = 4269148036U;
    msg.eco = -74;
    msg.eco_dur = 3249375609U;
    msg.eco_fr = 4209991639U;
    msg.par = -96;
    msg.par_dur = 3321665790U;
    msg.par_fr = 3991764701U;

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
    msg.setTimeStamp(0.265855894949);
    msg.setSource(26840U);
    msg.setSourceEntity(224U);
    msg.setDestination(44947U);
    msg.setDestinationEntity(90U);
    msg.adcp = 73;
    msg.adcp_dur = 199482581U;
    msg.adcp_fr = 2020316896U;
    msg.ctd = 101;
    msg.ctd_dur = 3075526374U;
    msg.ctd_fr = 938568550U;
    msg.opt = -92;
    msg.opt_dur = 2860775533U;
    msg.opt_fr = 804557220U;
    msg.tbl = -47;
    msg.tbl_dur = 66777206U;
    msg.tbl_fr = 3857710715U;
    msg.eco = 103;
    msg.eco_dur = 2766548361U;
    msg.eco_fr = 2460027927U;
    msg.par = -55;
    msg.par_dur = 566241685U;
    msg.par_fr = 1954036591U;

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
    msg.setTimeStamp(0.877460048095);
    msg.setSource(44795U);
    msg.setSourceEntity(180U);
    msg.setDestination(49450U);
    msg.setDestinationEntity(86U);
    msg.adcp = 43;
    msg.adcp_dur = 409430939U;
    msg.adcp_fr = 3710695754U;
    msg.ctd = -38;
    msg.ctd_dur = 4278169545U;
    msg.ctd_fr = 309804160U;
    msg.opt = 103;
    msg.opt_dur = 589652778U;
    msg.opt_fr = 1469569090U;
    msg.tbl = -51;
    msg.tbl_dur = 442846058U;
    msg.tbl_fr = 2802134129U;
    msg.eco = -93;
    msg.eco_dur = 1170641266U;
    msg.eco_fr = 3228170549U;
    msg.par = -79;
    msg.par_dur = 638445919U;
    msg.par_fr = 2221664178U;

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
    msg.setTimeStamp(0.838240859424);
    msg.setSource(42859U);
    msg.setSourceEntity(45U);
    msg.setDestination(53110U);
    msg.setDestinationEntity(176U);
    msg.adcp = 34;
    msg.adcp_dur = 1189812097U;
    msg.adcp_fr = 1239000818U;
    msg.ctd = -33;
    msg.ctd_dur = 3587305781U;
    msg.ctd_fr = 1055502702U;
    msg.opt = -112;
    msg.opt_dur = 741857753U;
    msg.opt_fr = 2545686336U;
    msg.tbl = -21;
    msg.tbl_dur = 205943676U;
    msg.tbl_fr = 2815300453U;
    msg.eco = -82;
    msg.eco_dur = 4232091682U;
    msg.eco_fr = 674392392U;
    msg.par = 111;
    msg.par_dur = 808106943U;
    msg.par_fr = 3549866853U;

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
    msg.setTimeStamp(0.681776792335);
    msg.setSource(36676U);
    msg.setSourceEntity(157U);
    msg.setDestination(26264U);
    msg.setDestinationEntity(69U);
    msg.adcp = -78;
    msg.adcp_dur = 1921829942U;
    msg.adcp_fr = 3990911728U;
    msg.ctd = -121;
    msg.ctd_dur = 3945423391U;
    msg.ctd_fr = 826787399U;
    msg.opt = 2;
    msg.opt_dur = 1990317681U;
    msg.opt_fr = 2494957649U;
    msg.tbl = 93;
    msg.tbl_dur = 1725335875U;
    msg.tbl_fr = 1754388486U;
    msg.eco = -80;
    msg.eco_dur = 3370189478U;
    msg.eco_fr = 362982052U;
    msg.par = 125;
    msg.par_dur = 485708245U;
    msg.par_fr = 2870209798U;

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
    msg.setTimeStamp(0.860116613557);
    msg.setSource(9445U);
    msg.setSourceEntity(67U);
    msg.setDestination(38102U);
    msg.setDestinationEntity(20U);
    msg.adcp = -41;
    msg.adcp_dur = 3733177754U;
    msg.adcp_fr = 880066418U;
    msg.ctd = -97;
    msg.ctd_dur = 982829548U;
    msg.ctd_fr = 696615363U;
    msg.opt = 61;
    msg.opt_dur = 2006050159U;
    msg.opt_fr = 630743707U;
    msg.tbl = 111;
    msg.tbl_dur = 4231528894U;
    msg.tbl_fr = 1949619829U;
    msg.eco = -75;
    msg.eco_dur = 3812930618U;
    msg.eco_fr = 1637082850U;
    msg.par = -45;
    msg.par_dur = 2796051019U;
    msg.par_fr = 2080309250U;

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
    msg.setTimeStamp(0.346674325322);
    msg.setSource(41171U);
    msg.setSourceEntity(221U);
    msg.setDestination(5720U);
    msg.setDestinationEntity(41U);
    msg.value = 0.32616892232;

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
    msg.setTimeStamp(0.152472937438);
    msg.setSource(59841U);
    msg.setSourceEntity(209U);
    msg.setDestination(36868U);
    msg.setDestinationEntity(54U);
    msg.value = 0.811801280746;

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
    msg.setTimeStamp(0.93074903344);
    msg.setSource(48426U);
    msg.setSourceEntity(158U);
    msg.setDestination(39857U);
    msg.setDestinationEntity(157U);
    msg.value = 0.821257175323;

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
    msg.setTimeStamp(0.160495326651);
    msg.setSource(10144U);
    msg.setSourceEntity(83U);
    msg.setDestination(9473U);
    msg.setDestinationEntity(248U);
    msg.lat = 0.0742962177637;
    msg.lon = 0.222925209214;
    msg.depth.assign("NVEIHLLTJFPUBNWNBARAGHOBXSKEMDCWFVCSEXKVVHSRHYPMNNKRKSJFGLBHYKMMTVMUXCWBQBYCABADFPRZUYRBEMGXERVAOIWITYJJMUD");
    msg.vel.assign("DHBITCDLQONXLSUMVPNVGPNINGHZAUKXHLHQBUFXJQTEWWENPXEQIZXDOETRZJLHQWPIUJWAKRZ");
    msg.dir.assign("QWJYJXMSKCTWKMKJFJEIOWXFYHGPPTBHDACNIUNBQAXZIXVOIGOBBOTOPGHQNNNDADTOMGRHOLYRSSPUVTEVDCDLITFRFZMYMDZZZDWWERJHFLPECDLQIHTTKKSARIURRZQYZLZVKGXMFWBOCLEIKFMYMUDUPCOYCKJEUPNCGAULUQNJG");

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
    msg.setTimeStamp(0.785940519853);
    msg.setSource(54562U);
    msg.setSourceEntity(216U);
    msg.setDestination(51377U);
    msg.setDestinationEntity(65U);
    msg.lat = 0.131797319568;
    msg.lon = 0.334224171657;
    msg.depth.assign("OIMWDBJJSYHGHAKTCUJIYJNESPVXOMRSYDCEGFBENQILMBTJGPOQTNOPSLHVQIWICTNEUQZWUGYIHVIIPVBAJKZAYZCYADUMUVHAJNVNDQGQTMNOCOEFXEBTLDCRPFXXRUZMWREFRRCKHEDGRMBTUKACDWQISXGUVPZXWLPONNOWVUEQJVTQFNJCMSGXAVRBHSLTPKBKZSYWHUZWYBZLTAKFZSHCFHKGISFWYOKXQLXRAJPGAZOXRDBEMFYLLF");
    msg.vel.assign("VKYWONIFDNYGCBPMZPAYIBUVYFPJJFPDUIRBTVJVZKYSNLXULERWEJMHJKQPLRRSNDGZIXASHXS");
    msg.dir.assign("BNIWPYQATJAKIRYYKZSQTGHMJQEJWIQQTDNZPHUDLAUIOGRVLVZEOJHYZHNEOKPBSVNRRVTENMZSTHXNPMJCQPBSKWISZIUSCOWDEPIOFXXSXWCOQLMKTTSVAPOZKKCCFHALBBPGDBZWNTTVVBAFAJFXPSLIJTMZGL");

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
    msg.setTimeStamp(0.676949805784);
    msg.setSource(35784U);
    msg.setSourceEntity(1U);
    msg.setDestination(32587U);
    msg.setDestinationEntity(236U);
    msg.lat = 0.349123637342;
    msg.lon = 0.854761304451;
    msg.depth.assign("FFTBNRGZGCNQUMUDZTTIUYSAWORNFTDRYBGGLLHBCMPKOSWXRUEXEWYGLFEZHZSKXNUFWKRKAHWOCOSODNOKOJWANMUQENWXQUXDRPJTAWLZNAZAQKCFEFYHUGQQSOVPBDJPTAHLXTLCJYYKMPIIQBHEVJGMXITVRJVWFQQCSDYCBXCMNLJADNFIGRYPBUETMPYIYZPXKMHPSHDEVZVJIIKXRCI");
    msg.vel.assign("VXESELBHPABODUOYPMTLYRHQVAGEDGBUCMDMQOMMROJWIDSSQKXGREIFLXIQWQHKZLZUUTAZOFYMWKBYYKVNPAUGMIPZQWFSJNDHLJVNCCWLXJESAFCVLDYPACALUXFHWNUGCOQOBWJHJEYKISYJNXYPKTAPTMTRZREHRG");
    msg.dir.assign("YGFAEFTOETADNHBURQCJNMXLBLRHCEQEQBXYGIRNTXNFWJYIURMZXPWUKWVXICIXICNLCUSIVKUDPIMOCRSAZUGRRHJPNHKJCQBTDYPIMELWYZGRWAXMFZVDWANZGQIKPSOZDPLTTVTKSFCVJQHPAFZAGVJRZCYHYGSWTB");

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
    msg.setTimeStamp(0.448546145589);
    msg.setSource(22805U);
    msg.setSourceEntity(57U);
    msg.setDestination(49437U);
    msg.setDestinationEntity(166U);
    msg.source.assign("XOGVVHZPDTFZFKSCFJJSCJFJDHBKMKGSOUCGTNUHLMAMZBBVLFHSQBMEKCXXIGKRHSQRIYRQNPDZCNJCATYYPORELMTMGYCAPXEXRTDAEBUEGBWHQKHPBYSCDWCLSQF");
    msg.lat = 0.433011397912;
    msg.lon = 0.13713183263;
    msg.sog = 0.96380200975;
    msg.uc = 0.586663561602;
    msg.depth = 0.466828507897;
    msg.value = 0.210570514117;

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
    msg.setTimeStamp(0.279953107817);
    msg.setSource(38837U);
    msg.setSourceEntity(11U);
    msg.setDestination(2766U);
    msg.setDestinationEntity(186U);
    msg.source.assign("XCSWPYFEDBWCANRYMUBQPUJVQMZUVWTVECBXXFMILZYSUJAEZHEWSZOYYBNGEWUSFGSJKWGJDZTIREMROQYYJTXKDKCBGNCBATHCXNFOVGMNXKTWLDCQZHKYJDUAJAASVHWQPLOTNHPCVDTGMRIKQDARRLVLOVHCZIZB");
    msg.lat = 0.23563034382;
    msg.lon = 0.895303807943;
    msg.sog = 0.436334600349;
    msg.uc = 0.676538253524;
    msg.depth = 0.0423637374663;
    msg.value = 0.875713408103;

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
    msg.setTimeStamp(0.32442929787);
    msg.setSource(40109U);
    msg.setSourceEntity(41U);
    msg.setDestination(50888U);
    msg.setDestinationEntity(108U);
    msg.source.assign("EFNOTMIIGYHLTFHUSAJTTOVWXAWBMTCFVTOBANINZKTMQCEVSOZINYPJYEQAQZVQDGK");
    msg.lat = 0.0304575219206;
    msg.lon = 0.525640544541;
    msg.sog = 0.758553598067;
    msg.uc = 0.019348145558;
    msg.depth = 0.0948979905003;
    msg.value = 0.275357706322;

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
    msg.setTimeStamp(0.456116788699);
    msg.setSource(42021U);
    msg.setSourceEntity(158U);
    msg.setDestination(35201U);
    msg.setDestinationEntity(169U);
    IMC::Acceleration tmp_msg_0;
    tmp_msg_0.time = 0.187213624969;
    tmp_msg_0.x = 0.446654668048;
    tmp_msg_0.y = 0.162604969178;
    tmp_msg_0.z = 0.490009772237;
    msg.acceleration.set(tmp_msg_0);
    IMC::AngularVelocity tmp_msg_1;
    tmp_msg_1.time = 0.39723792734;
    tmp_msg_1.x = 0.620070858279;
    tmp_msg_1.y = 0.101337213415;
    tmp_msg_1.z = 0.671455056253;
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
    msg.setTimeStamp(0.469622044535);
    msg.setSource(16212U);
    msg.setSourceEntity(104U);
    msg.setDestination(27283U);
    msg.setDestinationEntity(208U);
    IMC::Acceleration tmp_msg_0;
    tmp_msg_0.time = 0.15953444811;
    tmp_msg_0.x = 0.874313618139;
    tmp_msg_0.y = 0.86775137591;
    tmp_msg_0.z = 0.00567042882227;
    msg.acceleration.set(tmp_msg_0);
    IMC::AngularVelocity tmp_msg_1;
    tmp_msg_1.time = 0.213341228607;
    tmp_msg_1.x = 0.398060037594;
    tmp_msg_1.y = 0.124295249247;
    tmp_msg_1.z = 0.951194550557;
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
    msg.setTimeStamp(0.734894682541);
    msg.setSource(11670U);
    msg.setSourceEntity(164U);
    msg.setDestination(32529U);
    msg.setDestinationEntity(136U);
    IMC::Acceleration tmp_msg_0;
    tmp_msg_0.time = 0.0373322888518;
    tmp_msg_0.x = 0.232734048961;
    tmp_msg_0.y = 0.722872683723;
    tmp_msg_0.z = 0.0519200657619;
    msg.acceleration.set(tmp_msg_0);
    IMC::AngularVelocity tmp_msg_1;
    tmp_msg_1.time = 0.209781710553;
    tmp_msg_1.x = 0.518683348674;
    tmp_msg_1.y = 0.90299287745;
    tmp_msg_1.z = 0.696682470211;
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

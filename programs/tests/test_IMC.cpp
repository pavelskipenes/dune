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
// IMC XML MD5: 901f6dd4f601ffa92241429227590b0b                            *
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
    msg.setTimeStamp(0.20647564016);
    msg.setSource(39859U);
    msg.setSourceEntity(136U);
    msg.setDestination(37741U);
    msg.setDestinationEntity(117U);
    msg.state = 35U;
    msg.flags = 24U;
    msg.description.assign("CQKOGOKLGSTPSSOPBGUTPPDJLATFHKXKJBRSWIBSEDYBESDWIOZVRHJKFQYBUVLIBTXZNUXGEYTGVEDSYCZXVRWAQTAFKMGHJKRBNSQIHLNMBVDZXMXLHFGNJCBOJFDCR");

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
    msg.setTimeStamp(0.72132496029);
    msg.setSource(36789U);
    msg.setSourceEntity(49U);
    msg.setDestination(10375U);
    msg.setDestinationEntity(123U);
    msg.state = 230U;
    msg.flags = 212U;
    msg.description.assign("DCUJXRNATCWUYBSLMIOYXIMWWSEECZXTALARLYVKYXYLMEUBWWKOSZLOKTOUMSRGSPTGUVJDCQMHJDCKUHTAMEHDKCOAFVWGPZEHKOL");

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
    msg.setTimeStamp(0.588534656573);
    msg.setSource(55887U);
    msg.setSourceEntity(20U);
    msg.setDestination(42401U);
    msg.setDestinationEntity(147U);
    msg.state = 123U;
    msg.flags = 121U;
    msg.description.assign("WTDISYMAFFSFYMDWJUCZCPRNUBAATGXIEZOFCQQRIGICVRKIMVMUWKCVNEVQADGGWEYXSWMVTSDCFMQTDXUUONIUZTORCLBXYLXKBEODEIUJHBPAWXLYAXOFOXZYZRAPLVJDRGOMLQVKKWQTQWSNJEJTCD");

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
    msg.setTimeStamp(0.926476147756);
    msg.setSource(25527U);
    msg.setSourceEntity(197U);
    msg.setDestination(11916U);
    msg.setDestinationEntity(176U);

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
    msg.setTimeStamp(0.690819994011);
    msg.setSource(25168U);
    msg.setSourceEntity(51U);
    msg.setDestination(37715U);
    msg.setDestinationEntity(17U);

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
    msg.setTimeStamp(0.827472336204);
    msg.setSource(55044U);
    msg.setSourceEntity(157U);
    msg.setDestination(16544U);
    msg.setDestinationEntity(250U);

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
    msg.setTimeStamp(0.148004839509);
    msg.setSource(27073U);
    msg.setSourceEntity(6U);
    msg.setDestination(14797U);
    msg.setDestinationEntity(175U);
    msg.id = 14U;
    msg.label.assign("PIVUKFSGFNROEBUJSHZCMDULQVYDAVSLDXRTXOAJXUZWINBUTLIJBMBNWGQQWXOCHKBSCQAZIPDWCHEELTWGVZFPJMRBBCENSVKDPOLTYYQNSTXLGKYDMMQAHGUIECBGTYADYUZGFERNUABVVECVWHSLRRCAEPMXZYIIPSDOQHZUAJJPREGIKLAROPPUQFJXMWZXLCJWNFLVOOHWRRXOIZEWTDVNSFBTKJHTFKKQF");
    msg.component.assign("LWRXDIWBTGTABZJUXRLVMOBZYWSCOFUKEQIMSKURNBCASPYGY");
    msg.act_time = 5238U;
    msg.deact_time = 19056U;

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
    msg.setTimeStamp(0.707615881763);
    msg.setSource(5114U);
    msg.setSourceEntity(216U);
    msg.setDestination(2428U);
    msg.setDestinationEntity(110U);
    msg.id = 55U;
    msg.label.assign("GAHTXAOYHSQORWINSUMAHCESTEYAHIWHAEQLBKSSOCUDLZRRPXSQWPTUKTLXIFFVIXZYNKUMWGWFLQNYULCBAPOXBUEHEXQBDOCKTJBMPQVXLHONRMPXBGDHIQRGDKZZBJWVDVJNNTJEAKVXDWMFDDFYMNRIGUFKYLWUTQLGOVSGKUELBVYKWJPOBQDICJFTRLPZPAOMYVSIJTRTKGYMVARQJCMIFEZUCOEPRSHCNPBCNXGFWJZYFNDA");
    msg.component.assign("ORKTCLKBVJSNRA");
    msg.act_time = 65246U;
    msg.deact_time = 46142U;

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
    msg.setTimeStamp(0.928915495167);
    msg.setSource(1484U);
    msg.setSourceEntity(73U);
    msg.setDestination(29282U);
    msg.setDestinationEntity(15U);
    msg.id = 151U;
    msg.label.assign("CFQIEAREUNRSSMBPGQDCRKEBDZAUJRXXTBNVHOVOFSGBIDSCQGJBEOROWKRUXYKBODJZOIVXELIVYTMNDIHFNXKKQPAEYYWQKMRMSLNHNMAPLMCUASUIAGKMWWGZPLJYEBNHVDGNZYPSKCWTSLIQLTDYPQTZHATUJTCINGVVBOWFGNBFFTZLVALLTHWCHQGMZSWOITYCFAOCUXVJKXZWJFYPUZBDAJGRQUWO");
    msg.component.assign("YKOMUNBGUWJFVBYXZNUKYMKSNPDLJEUWKEWRLQFCBHLISRAJFXSAWMRQDYRTOUPX");
    msg.act_time = 56859U;
    msg.deact_time = 20677U;

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
    msg.setTimeStamp(0.429174051957);
    msg.setSource(62011U);
    msg.setSourceEntity(39U);
    msg.setDestination(55776U);
    msg.setDestinationEntity(29U);
    msg.id = 180U;

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
    msg.setTimeStamp(0.475005712354);
    msg.setSource(47089U);
    msg.setSourceEntity(217U);
    msg.setDestination(34144U);
    msg.setDestinationEntity(113U);
    msg.id = 83U;

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
    msg.setTimeStamp(0.0281255013215);
    msg.setSource(43632U);
    msg.setSourceEntity(112U);
    msg.setDestination(56004U);
    msg.setDestinationEntity(129U);
    msg.id = 219U;

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
    msg.setTimeStamp(0.412244287385);
    msg.setSource(24692U);
    msg.setSourceEntity(196U);
    msg.setDestination(35333U);
    msg.setDestinationEntity(122U);
    msg.op = 11U;
    msg.list.assign("EIXPTWYONWUFETNFTSTNRRCZIYNAIQCCAKIZQVFWOUXRAZKJHKYKIVCGFPYAAZYWDQQUYOWOETLDGJJKELXXBMXDPBJSASVROMMUSDVLEXCRITJNJMRWHUDLBVHLLANFFROSVXLTLSCSIUWPKDCNZVKQDSGONHZOZQVLHTESKRVXIFQAWGMPYPPZBBMKDBXCQVEUGGJMJOGFQEHFHDYZNCSUHKZHMNXUHEJ");

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
    msg.setTimeStamp(0.242638344232);
    msg.setSource(55982U);
    msg.setSourceEntity(122U);
    msg.setDestination(33272U);
    msg.setDestinationEntity(39U);
    msg.op = 134U;
    msg.list.assign("LGWIDJHQKCPFYITQUAXLGXBJRUXFACIAVAGGUQSZZKCYHNBATNYMMJTGJZHQWKMMPNCRKTYLWVZCOJCSEXRIUBETZLKVEFAZDAKIEJPTTRPBJFQONIUQWQDYVCGPZOQWNESGRUYMUVOIHEHRPZNFOMYF");

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
    msg.setTimeStamp(0.819003358015);
    msg.setSource(19985U);
    msg.setSourceEntity(219U);
    msg.setDestination(27360U);
    msg.setDestinationEntity(112U);
    msg.op = 58U;
    msg.list.assign("DQQNLOZXVNKHUWBOPLSBKBAJGZBVAAZISRYCJCRUSLVHGSLDDJIYFILCEVFHNSDFPGQOJDVJMKXGLPEKEKCTDEOVWUYSYMVBKXFQMYDANWXRARKEIGHUDCJHLHGSHTIGWAURWIHMQQYOWNRLFATNBQKUQTIVZOLJSUNDSPOPMWVXPOCRSZCJUCNGGRMPUIFQPXFBYXXJLXHAYFMIBATEGZZKOBCEATRPTM");

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
    msg.setTimeStamp(0.744533300798);
    msg.setSource(61027U);
    msg.setSourceEntity(77U);
    msg.setDestination(37110U);
    msg.setDestinationEntity(137U);
    msg.value = 173U;

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
    msg.setTimeStamp(0.707578796787);
    msg.setSource(47157U);
    msg.setSourceEntity(9U);
    msg.setDestination(47691U);
    msg.setDestinationEntity(46U);
    msg.value = 0U;

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
    msg.setTimeStamp(0.378503779904);
    msg.setSource(14851U);
    msg.setSourceEntity(119U);
    msg.setDestination(49191U);
    msg.setDestinationEntity(32U);
    msg.value = 131U;

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
    msg.setTimeStamp(0.659250333226);
    msg.setSource(63438U);
    msg.setSourceEntity(222U);
    msg.setDestination(42533U);
    msg.setDestinationEntity(169U);
    msg.consumer.assign("AZHSIPMPNURJVEWPRUBIMPSACBEBSFXYZLJTNGNWLBTJHOIECXPSLYZYTOALRWBANQCWOZVHRSIJNIOGQJGBNUMXFXTNNNDCQVZCJHITYXIXLRZGKDKRHJGEASHZCYLKGFUEJUBW");
    msg.message_id = 52598U;

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
    msg.setTimeStamp(0.406599712867);
    msg.setSource(29606U);
    msg.setSourceEntity(227U);
    msg.setDestination(48195U);
    msg.setDestinationEntity(128U);
    msg.consumer.assign("GEUBFZXQRMGXQFHXQDEUFVBCUAQNDVOCVYBJOELNMZPREMDQO");
    msg.message_id = 57150U;

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
    msg.setTimeStamp(0.499471706018);
    msg.setSource(28264U);
    msg.setSourceEntity(98U);
    msg.setDestination(56456U);
    msg.setDestinationEntity(91U);
    msg.consumer.assign("IBRVLRSUFYXGQYNCDWJKIUXXGGKVTBGAYELODEHTXVHKYJEAZAOLBLRMIGGUXQSLGULPZNWFSWNHUMBVWLPVEQOANHJPFJCIMJQKJASMYFHAWTDXQDYCUCIWPEZNHKEWONQRZAAVYOWLVOCARFNHGZBBHZLOSONQWSJUKCDNONYERKPZXKEIEUQSRIQPUFK");
    msg.message_id = 26365U;

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
    msg.setTimeStamp(0.66265155687);
    msg.setSource(13039U);
    msg.setSourceEntity(177U);
    msg.setDestination(58634U);
    msg.setDestinationEntity(128U);
    msg.type = 133U;

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
    msg.setTimeStamp(0.422612955652);
    msg.setSource(4828U);
    msg.setSourceEntity(22U);
    msg.setDestination(12188U);
    msg.setDestinationEntity(96U);
    msg.type = 34U;

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
    msg.setTimeStamp(0.397280712812);
    msg.setSource(9985U);
    msg.setSourceEntity(118U);
    msg.setDestination(19274U);
    msg.setDestinationEntity(198U);
    msg.type = 171U;

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
    msg.setTimeStamp(0.584958671019);
    msg.setSource(22974U);
    msg.setSourceEntity(218U);
    msg.setDestination(22828U);
    msg.setDestinationEntity(224U);
    msg.op = 241U;

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
    msg.setTimeStamp(0.0364340509445);
    msg.setSource(22786U);
    msg.setSourceEntity(24U);
    msg.setDestination(49616U);
    msg.setDestinationEntity(216U);
    msg.op = 193U;

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
    msg.setTimeStamp(0.109139200788);
    msg.setSource(3301U);
    msg.setSourceEntity(129U);
    msg.setDestination(49327U);
    msg.setDestinationEntity(212U);
    msg.op = 75U;

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
    msg.setTimeStamp(0.956022259742);
    msg.setSource(60587U);
    msg.setSourceEntity(78U);
    msg.setDestination(8996U);
    msg.setDestinationEntity(102U);
    msg.total_steps = 39U;
    msg.step_number = 63U;
    msg.step.assign("ZJINMTKNDFKVKPXSFKILTTEZPONGJQZNJKJRORXSMORWWFUPTYMZUWZPIGKEVFBEYQEXYOJLFIULHJFQNBMGQUCUBDAGHYOGWCVSNHPYNTIHHLDXYFTLMEYEVDJKBALBOHQPRDIXGASASZRGLBACYUGDZRSGDUIWHLOQWPAWLTEERIKMPVBCGDYQABFROOVZPW");
    msg.flags = 225U;

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
    msg.setTimeStamp(0.684538261562);
    msg.setSource(19301U);
    msg.setSourceEntity(236U);
    msg.setDestination(43610U);
    msg.setDestinationEntity(141U);
    msg.total_steps = 159U;
    msg.step_number = 59U;
    msg.step.assign("HFYKNEUTMYNSEEAWZMFLLLZDXGVTFBYGHGPBMQUBQTGDCNVXJHUKMVZAVIDCSKDQXMRGIDGWSWLASNJFAIZPLFMVNUXGORARIPZJRQQUUJYZRQJTCVPFLLCDDYBNIBORZWBEZVVWXZYISCWICUXXBJTOSPLFTJOHKYOFMQVWXUOYHHDIRCPAOWLFLFKINETRCPQJNKRJXGJCSOAWHXKTYEOIHHMAGSGH");
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
    msg.setTimeStamp(0.58401716741);
    msg.setSource(13097U);
    msg.setSourceEntity(147U);
    msg.setDestination(60369U);
    msg.setDestinationEntity(169U);
    msg.total_steps = 154U;
    msg.step_number = 201U;
    msg.step.assign("KRPNPNXYWHTVVKTPMCCMEDTOVXTNGNESYSMGOYBXP");
    msg.flags = 129U;

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
    msg.setTimeStamp(0.491551620832);
    msg.setSource(37928U);
    msg.setSourceEntity(146U);
    msg.setDestination(38062U);
    msg.setDestinationEntity(235U);
    msg.state = 225U;
    msg.error.assign("QVRDHWCJEGFLIEGOXAYFKUAJDJCIXWOPXRVJTSROUDCKNUXEMQVJUCCKNIGPFQUPFVKJQXYYXHAYIKDGZELCPQMTWCBNQTPTLXGZLCBEQGHIJESNBG");

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
    msg.setTimeStamp(0.065837458907);
    msg.setSource(33772U);
    msg.setSourceEntity(81U);
    msg.setDestination(29308U);
    msg.setDestinationEntity(218U);
    msg.state = 109U;
    msg.error.assign("JAWGLOZMFCREANGQNGOGVEJZMHDZLVPRMMOSLMQBBEBXIWIMFMDRLFAIZIUDEHLPULKCPYJVHUAJUGODGLDEPWQKZSMJTEFSKWHKPWTXXNHOWWCQVNOFU");

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
    msg.setTimeStamp(0.997948112371);
    msg.setSource(59445U);
    msg.setSourceEntity(47U);
    msg.setDestination(51279U);
    msg.setDestinationEntity(3U);
    msg.state = 188U;
    msg.error.assign("ROLCAIAVVHFFJJMLHNELQKFQEEAJSXYPUJORDZFIWRVOZPBHBDPYSYQRHCBUFTUYHUZCXJTBHAAKAWOCDTRCZIDIUUKINSIGPBSTHVHIGLYIMVQQDISYGRKKSNSOMRCXXCMOBDOZRQCTSZBUAQLGXFULNFJWDHPGQQ");

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
    msg.setTimeStamp(0.938708939087);
    msg.setSource(6205U);
    msg.setSourceEntity(109U);
    msg.setDestination(32204U);
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
    msg.setTimeStamp(0.350884639611);
    msg.setSource(53069U);
    msg.setSourceEntity(111U);
    msg.setDestination(3099U);
    msg.setDestinationEntity(122U);

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
    msg.setTimeStamp(0.525627460646);
    msg.setSource(61400U);
    msg.setSourceEntity(23U);
    msg.setDestination(19508U);
    msg.setDestinationEntity(240U);

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
    msg.setTimeStamp(0.53080303336);
    msg.setSource(12138U);
    msg.setSourceEntity(20U);
    msg.setDestination(35505U);
    msg.setDestinationEntity(113U);
    msg.op = 87U;
    msg.speed_min = 0.110040304331;
    msg.speed_max = 0.839746176964;
    msg.long_accel = 0.382839792102;
    msg.alt_max_msl = 0.0698970253792;
    msg.dive_fraction_max = 0.965860103676;
    msg.climb_fraction_max = 0.737433224434;
    msg.bank_max = 0.27960540736;
    msg.p_max = 0.691544649387;
    msg.pitch_min = 0.63487393983;
    msg.pitch_max = 0.590843254125;
    msg.q_max = 0.0337354656141;
    msg.g_min = 0.0230623326078;
    msg.g_max = 0.685810381698;
    msg.g_lat_max = 0.0932899823982;
    msg.rpm_min = 0.109990715789;
    msg.rpm_max = 0.120838976016;
    msg.rpm_rate_max = 0.544678008989;

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
    msg.setTimeStamp(0.365229169823);
    msg.setSource(36149U);
    msg.setSourceEntity(109U);
    msg.setDestination(33824U);
    msg.setDestinationEntity(193U);
    msg.op = 241U;
    msg.speed_min = 0.0137784263823;
    msg.speed_max = 0.0379772589071;
    msg.long_accel = 0.216663251322;
    msg.alt_max_msl = 0.21116574431;
    msg.dive_fraction_max = 0.258206435713;
    msg.climb_fraction_max = 0.0101715296358;
    msg.bank_max = 0.58333797296;
    msg.p_max = 0.850858914185;
    msg.pitch_min = 0.827699470306;
    msg.pitch_max = 0.445590867544;
    msg.q_max = 0.984043827175;
    msg.g_min = 0.262810190169;
    msg.g_max = 0.106567545199;
    msg.g_lat_max = 0.048477499362;
    msg.rpm_min = 0.122912839186;
    msg.rpm_max = 0.811443882305;
    msg.rpm_rate_max = 0.704361416408;

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
    msg.setTimeStamp(0.506138495708);
    msg.setSource(33246U);
    msg.setSourceEntity(85U);
    msg.setDestination(48587U);
    msg.setDestinationEntity(245U);
    msg.op = 26U;
    msg.speed_min = 0.664164447347;
    msg.speed_max = 0.0362011104574;
    msg.long_accel = 0.169818158253;
    msg.alt_max_msl = 0.383158799454;
    msg.dive_fraction_max = 0.841837491278;
    msg.climb_fraction_max = 0.10842715087;
    msg.bank_max = 0.603820187373;
    msg.p_max = 0.229208118933;
    msg.pitch_min = 0.0741148853393;
    msg.pitch_max = 0.000526536427537;
    msg.q_max = 0.0639665701264;
    msg.g_min = 0.778064138193;
    msg.g_max = 0.483585206837;
    msg.g_lat_max = 0.208411690787;
    msg.rpm_min = 0.81566991699;
    msg.rpm_max = 0.140878473338;
    msg.rpm_rate_max = 0.524306512941;

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
    msg.setTimeStamp(0.234981500193);
    msg.setSource(41426U);
    msg.setSourceEntity(166U);
    msg.setDestination(47585U);
    msg.setDestinationEntity(227U);
    IMC::FormationState tmp_msg_0;
    tmp_msg_0.type = 223U;
    tmp_msg_0.op = 3U;
    tmp_msg_0.possimerr = 0.216371090113;
    tmp_msg_0.converg = 0.666886279264;
    tmp_msg_0.turbulence = 0.273124401047;
    tmp_msg_0.possimmon = 150U;
    tmp_msg_0.commmon = 118U;
    tmp_msg_0.convergmon = 136U;
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
    msg.setTimeStamp(0.107124341767);
    msg.setSource(20923U);
    msg.setSourceEntity(81U);
    msg.setDestination(9860U);
    msg.setDestinationEntity(60U);

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
    msg.setTimeStamp(0.67627756822);
    msg.setSource(3249U);
    msg.setSourceEntity(168U);
    msg.setDestination(51014U);
    msg.setDestinationEntity(188U);
    IMC::IridiumTxStatus tmp_msg_0;
    tmp_msg_0.req_id = 54143U;
    tmp_msg_0.status = 95U;
    tmp_msg_0.text.assign("EBZSQRIPLCQXRTVNXCONZYLMNQAJXJAQEIKUEGKERGKVHODVOGBWHLSLRNUVFLSOXFLPISHOHUIRECQVKCDPDJCZSKUWBMVJRQJDGQDXWDFFJHOKUBMWULQSRYSQYKZNGEFTKYUGCCAXPQDSRTZJZNDHMJ");
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
    msg.setTimeStamp(0.989722362412);
    msg.setSource(40366U);
    msg.setSourceEntity(52U);
    msg.setDestination(62167U);
    msg.setDestinationEntity(99U);
    msg.lat = 0.808335187004;
    msg.lon = 0.543106426378;
    msg.height = 0.527774222766;
    msg.x = 0.113306840971;
    msg.y = 0.467600690012;
    msg.z = 0.621620023208;
    msg.phi = 0.975986694682;
    msg.theta = 0.73923184291;
    msg.psi = 0.428407727173;
    msg.u = 0.178349351398;
    msg.v = 0.995721429419;
    msg.w = 0.40994868439;
    msg.p = 0.335720056374;
    msg.q = 0.0728542300355;
    msg.r = 0.736748281363;
    msg.svx = 0.595820329915;
    msg.svy = 0.26423643905;
    msg.svz = 0.833934566711;

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
    msg.setTimeStamp(0.0955836305029);
    msg.setSource(34020U);
    msg.setSourceEntity(10U);
    msg.setDestination(34581U);
    msg.setDestinationEntity(107U);
    msg.lat = 0.447581882268;
    msg.lon = 0.683951158938;
    msg.height = 0.272629007083;
    msg.x = 0.189384146756;
    msg.y = 0.71510170983;
    msg.z = 0.0504279655718;
    msg.phi = 0.336960144702;
    msg.theta = 0.958948935221;
    msg.psi = 0.465395481662;
    msg.u = 0.173180131963;
    msg.v = 0.753791006136;
    msg.w = 0.832464358525;
    msg.p = 0.163478296844;
    msg.q = 0.818073833484;
    msg.r = 0.12404055401;
    msg.svx = 0.748395032612;
    msg.svy = 0.638278435504;
    msg.svz = 0.274524681437;

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
    msg.setTimeStamp(0.0993970574453);
    msg.setSource(27336U);
    msg.setSourceEntity(70U);
    msg.setDestination(47317U);
    msg.setDestinationEntity(155U);
    msg.lat = 0.231422147316;
    msg.lon = 0.71665046403;
    msg.height = 0.751907621298;
    msg.x = 0.348697934325;
    msg.y = 0.557064722874;
    msg.z = 0.592252073796;
    msg.phi = 0.69305114655;
    msg.theta = 0.368232804003;
    msg.psi = 0.98842126569;
    msg.u = 0.677531700301;
    msg.v = 0.473824005931;
    msg.w = 0.923310940783;
    msg.p = 0.161831180208;
    msg.q = 0.614901046538;
    msg.r = 0.512936364459;
    msg.svx = 0.194155118185;
    msg.svy = 0.77293424396;
    msg.svz = 0.0311199268738;

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
    msg.setTimeStamp(0.805898467802);
    msg.setSource(31071U);
    msg.setSourceEntity(28U);
    msg.setDestination(14615U);
    msg.setDestinationEntity(223U);
    msg.op = 167U;
    msg.entities.assign("URBBFYUQFVGTTLKHIESJPZNLWHIKCQXMOHBXEMCFM");

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
    msg.setTimeStamp(0.090810673567);
    msg.setSource(10043U);
    msg.setSourceEntity(172U);
    msg.setDestination(13830U);
    msg.setDestinationEntity(238U);
    msg.op = 41U;
    msg.entities.assign("IUMDXXPIIWLHMZRSJFUBKRVOBWNXSUNCCWRZQOTCYVENWFVKDOJDGMUTOMGVCGBEKGPNRCDAWQNGLDGJ");

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
    msg.setTimeStamp(0.227710919554);
    msg.setSource(24217U);
    msg.setSourceEntity(175U);
    msg.setDestination(44984U);
    msg.setDestinationEntity(225U);
    msg.op = 144U;
    msg.entities.assign("MIOQKNOXNFTQAYLGBUIIQXLEJYAWELKXNTFILQVXRMYZOCWZTMIIGJHSTVBPCFXTVSGCLUPURZBETPHDDPHKVRNUQDDHDNUSJYKNXYURDAJWKHZEVUGEBEWFJCHDUBDWECTMIKWIFCCTLQCWAQZSWZYIYEVNZMPQMCJGDBFUSRFNTRZQTLAHAJORXSABXCABPOEAZMKHGUMIMLGNBWMO");

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
    msg.setTimeStamp(0.167068123526);
    msg.setSource(57624U);
    msg.setSourceEntity(222U);
    msg.setDestination(65431U);
    msg.setDestinationEntity(35U);
    msg.type = 93U;
    msg.speed = 44886U;
    const char tmp_msg_0[] = {5, -106, 80, 67, 68, -41, 29, -96, 113, 33, -35, -26, -107, 1, 34, 10, 114, 43, -57, -82, 59, -128, 25, 117, 109, 101, -33, 90, 19, 32, 57, -4, -89, 104, -71, -78, -50, 33, -65, 122, -127, 43};
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
    msg.setTimeStamp(0.364974980102);
    msg.setSource(15422U);
    msg.setSourceEntity(225U);
    msg.setDestination(29703U);
    msg.setDestinationEntity(171U);
    msg.type = 51U;
    msg.speed = 5142U;
    const char tmp_msg_0[] = {-23, 43, -51, -99, 24, 104, 97, -44, 43, 84, 121, 16, 124, 93, 119, -40, -80, -7, 40, -59, 103, -88, 115, 29, -98, 87, 109, 89, 11, 114, 92, 20, -20, 84, 51, -5, 81, -94, 71, 92, 53, 35, -90, -10, -22, 51, 88, 75, 76, 36, 107, 11, 72, 2, 101, -63, 77, -95, 118, 4, 109, 85, 16, 113, 45, 122, 79, 27, -117, -58, 13, 72, 89, 97, -120, 119, 57, 104, 61, 50, -27, 112, 107, 92, -95, 123, -72, -17, 96, -24, 126, 47, -97, -1, -18, -25, 86, -18, 42, -67, 56, 82};
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
    msg.setTimeStamp(0.646577532944);
    msg.setSource(61723U);
    msg.setSourceEntity(177U);
    msg.setDestination(60108U);
    msg.setDestinationEntity(40U);
    msg.type = 243U;
    msg.speed = 6021U;
    const char tmp_msg_0[] = {88, -73, 99, 82, -19, 80, -9, -106, 77, 80, 45, -118, 46, 115, -74, 74, 22, -83, 120, -80, -79, -18, -31, -56, 82, 107, 63, 120, 104, 118, 48, 9, 49, 34, -64, 2, -85, -20, 21, -12, -121, 97, 95, 123, 63, -97, 60, 118, -22, 20, 2, -8, -85, -1, -106, -51, 64, 12, -12, -75, -108, -85, -33, 55, -127, 70, -20, -90, 122, 80, 119, 6, 64, -106, 7, -73, -94, 63, -45, 43, 110, 85, -8, 101, -114, 89, 101, -112, -24, 3, -108, 74, -39, 5, 20, 9, -3, 78, -29, -107, -24, 87, 5, 85, -43, -41, -65, -47, 68, -64, -16, 52, 120, -11, -58, -106, 97, 20, -128, 96, 48, -35, -90, 122, 118, 126, -19, -11, -40, 32, 113, -63, 57, 92, -62, -21, -65, 116, -106, 104, -127, 15, -45, 58, 25, -124, -100, -93, -46, -56, -123, 82, 122, 42, 7, 91, 75, -8, -32, -80, 56, -112, -23, 71, 56, 110, 47, 112, 69, -110, 71, 19, -16, -95, 7, 94, 94, -34, 13, 75, -32, -32, 92, 112, 34, 124, 62, -117, -107, 55, -63, -100, -72, -95, 36, -117, 79, 91, 22, 32, 107, -102, -63, -68, -110, -120, -92, 34, -116, -100, -119, 100, -80, -62, 49, 53, -45, 69, -23, -53, -87, -128, -110, -66, -89, 81, -8, -120, 4, -103, -62};
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
    msg.setTimeStamp(0.783469160713);
    msg.setSource(42355U);
    msg.setSourceEntity(17U);
    msg.setDestination(29513U);
    msg.setDestinationEntity(220U);
    msg.op = 77U;
    msg.tas2acc_pgain = 0.103902554331;
    msg.bank2p_pgain = 0.286902625256;

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
    msg.setTimeStamp(0.402346908755);
    msg.setSource(10272U);
    msg.setSourceEntity(98U);
    msg.setDestination(24037U);
    msg.setDestinationEntity(250U);
    msg.op = 15U;
    msg.tas2acc_pgain = 0.399561189779;
    msg.bank2p_pgain = 0.735775871638;

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
    msg.setTimeStamp(0.0911080381567);
    msg.setSource(718U);
    msg.setSourceEntity(226U);
    msg.setDestination(59710U);
    msg.setDestinationEntity(37U);
    msg.op = 54U;
    msg.tas2acc_pgain = 0.372735565308;
    msg.bank2p_pgain = 0.56779968716;

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
    msg.setTimeStamp(0.149573450534);
    msg.setSource(3775U);
    msg.setSourceEntity(46U);
    msg.setDestination(1205U);
    msg.setDestinationEntity(219U);
    msg.available = 1932756985U;
    msg.value = 225U;

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
    msg.setTimeStamp(0.69075573361);
    msg.setSource(27005U);
    msg.setSourceEntity(204U);
    msg.setDestination(9714U);
    msg.setDestinationEntity(1U);
    msg.available = 97616161U;
    msg.value = 72U;

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
    msg.setTimeStamp(0.737257823075);
    msg.setSource(33553U);
    msg.setSourceEntity(82U);
    msg.setDestination(24698U);
    msg.setDestinationEntity(115U);
    msg.available = 4086310698U;
    msg.value = 150U;

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
    msg.setTimeStamp(0.427901162797);
    msg.setSource(196U);
    msg.setSourceEntity(121U);
    msg.setDestination(10173U);
    msg.setDestinationEntity(102U);
    msg.op = 150U;
    msg.snapshot.assign("XNDBDCTXRUALMNOGGONDHASMFFCCJMXKBRYPJMIDEEMOEXSDVYSCIAPFWDXNZFWFUYVXYWLLAISBACUKQDPMYGUDKURMPQMTONYGUEXJXSOWTWCBHRQYAKMLUGSTLVESRHDTTYHWHKNJZIPRHVJHGFQPUMKVEIIEFHCIWZQEAIECSJLHVFGPZWPVCSGUOBLLXPARQTZJHUTLSBYXDTLCBKGKTOABJRJEPVGKVRZVQIOZZQYFRQINFN");
    IMC::UamTxFrame tmp_msg_0;
    tmp_msg_0.seq = 8181U;
    tmp_msg_0.sys_dst.assign("CEWPZCVRPJXEBFMAJGSRSDVCIERFCPIHKCXQWSLGYYFMRLOOQTCEXTVUZYRXNIPDBPGTOFLNBHDTABVSFTXLKSZAQASYUFSWAZCJKOMKWPDECSQVJXFUMVIUGHLKBWARDRINWYCMYXLIOQDUAHBHEOHUZYRMTIT");
    tmp_msg_0.flags = 49U;
    const char tmp_tmp_msg_0_0[] = {109, 8, 81, -58, 58, -39, 21, -49, -6, -58, 103, -76, 61, -125, -93, 69, -27, -119, 92, -53, 103, -84, -106, -87, 20, 35, -55, 10, -90, 33, 115, 52, 23, 55, 52, -113, -97, 16, 78, 117, 64, 19, 124, 64, -72, -123, 21, 12, 52, 30, 111, -75, 24, -33, -85, -76, 115, 93, 82, 96, 10, -125, -31, 105, -21, -53, -43, 109, 92, -6, 78};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.982395007593);
    msg.setSource(14960U);
    msg.setSourceEntity(9U);
    msg.setDestination(36105U);
    msg.setDestinationEntity(115U);
    msg.op = 53U;
    msg.snapshot.assign("GMHKADBVEGAMRIMKUTYFUQWJNGACSBHOCZVROMCEBMHHVGROXABURDOCSRWSYGWYFYASQIECPTSVRVENJRMNNQEUFOWJPUTJQZFUWXZLNNZHRLJSEZHMDIZZABKMCLYJKQCLHLGCSALSSTOYQLPVZTRQGIKKUIJGBDDPXNPVFKKPTEPOBMLQKWXWVQFFNIWHFJTTIOBXACYXJXHUPDAXEHDNYLTOFZVDEYY");
    IMC::WaterVelocity tmp_msg_0;
    tmp_msg_0.validity = 245U;
    tmp_msg_0.x = 0.921314821899;
    tmp_msg_0.y = 0.387701160644;
    tmp_msg_0.z = 0.562375684037;
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
    msg.setTimeStamp(0.0507472332628);
    msg.setSource(4589U);
    msg.setSourceEntity(154U);
    msg.setDestination(35893U);
    msg.setDestinationEntity(67U);
    msg.op = 84U;
    msg.snapshot.assign("OULFMXNMNYNKNPUDFHMWQDYXNQJCMHLEJRBFUIGQGDLGYAUDWIYSFSNNGFXEVDOFPCETASUETIRLBPHOPLMBCQWRRXRKMGIFPSZDIISUHEZQYYJHWJRRRKJZQNPOTCAPOVOBVIKEIATATTMLZBWDSUHGKKXRVSKSISBZZNGGHSVQCGYVMKCPBOHDWYBATCTXWQVTUEAQYDEEUAJLJZXJ");
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 190U;
    tmp_msg_0.lon_gain = 0.731016004862;
    tmp_msg_0.lat_gain = 0.420408957411;
    tmp_msg_0.bond_thick = 0.573841585701;
    tmp_msg_0.lead_gain = 0.0471161721496;
    tmp_msg_0.deconfl_gain = 0.0563201097915;
    tmp_msg_0.accel_switch_gain = 0.0439528944381;
    tmp_msg_0.safe_dist = 0.843091093999;
    tmp_msg_0.deconflict_offset = 0.40648905502;
    tmp_msg_0.accel_safe_margin = 0.0256543839898;
    tmp_msg_0.accel_lim_x = 0.745351152627;
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
    msg.setTimeStamp(0.744870382403);
    msg.setSource(15425U);
    msg.setSourceEntity(26U);
    msg.setDestination(15907U);
    msg.setDestinationEntity(35U);
    msg.op = 187U;
    msg.name.assign("PJLELTEOAALWTSWSEEDMVWXQMFWJPIXUMADZUGMAMCARRUXEZQVLQXEKYNJDCTBAUYFLHNCSFTIIBREZGRMYWIMP");

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
    msg.setTimeStamp(0.342059676294);
    msg.setSource(36026U);
    msg.setSourceEntity(217U);
    msg.setDestination(925U);
    msg.setDestinationEntity(47U);
    msg.op = 81U;
    msg.name.assign("NYAZFDPIIZBEUTYMRVQOQZOSDBSKTGQYKEPXCRVGQDYWMGEIBDAWZNDHUDLZCAVHWSCOHMXKRLFBACHEVFKYAYOPWRQJCOIFJYDTZJRJFWTLWKLCNHMEMCLTXXCUIMAGPHJJNXBZPHNZDOBRVETLWBOSQFYNFTUIHKGYBEIENWYAAXSFVVUIJCUUGRIWQXOODPVBTHBEQRMGPPMGQXKJINSMXKHRGAURFLZXPONACMKTEJZ");

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
    msg.setTimeStamp(0.954252920686);
    msg.setSource(22041U);
    msg.setSourceEntity(16U);
    msg.setDestination(2555U);
    msg.setDestinationEntity(37U);
    msg.op = 133U;
    msg.name.assign("ICNHNDYVJRNIEEOHIONOWGWLMUPJMZQRMNRFJTZCBSMNBBKGDDOGGXFQPMGCDNELHXYJNRSXRZESEHPQUTZCWOYKPZCINEHURVFLKIOQFWVSXLUVAJBYWSHXSOEZVTLFLRARZZIMLGPQGYWKPXQPKSJUFYOIKBJXJTLBATQE");

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
    msg.setTimeStamp(0.660273723562);
    msg.setSource(1887U);
    msg.setSourceEntity(73U);
    msg.setDestination(55586U);
    msg.setDestinationEntity(13U);
    msg.type = 67U;
    msg.htime = 0.40728958029;
    msg.context.assign("QECYCYUTZIXZDPLWNNZVHOAFVNWTRZLEBTRQGKLXCXYIQNSUDOJEYZPFPIWNVTLJWEUYVDTIESBYJIFDFANRDCMHXMEGCEYBDQPPOJMHKFFBVRRFAPJWVDDZXUPHAVJSZRVFLGSKUNBUKJDLMOXXHKATESBAZYNJCCBXQMOLKBAERAPKNTHBAURVSZPRIWMGHPUZXVUQIIH");
    msg.text.assign("HITJJLJGNBXZTZPFQTKKKGVDZQFTWBRGHDGUJJVFEMXXSSBBYULDWQFXODCRRCYVNUHBCYVYALNMEBJDSHZHLHLIYLSXUJZSQJUFREZVGGEZEWABUOLCAEIIQYORTFBPACVAONPPKIFQEAYKIRESXUMPUVKTMPOSGQKFNRAINKITTVVXROWRMMCGWJSBYIDWRGOHMVHQSCJUZFCDBXYOANHPGOSXKAWWDNMIPTXKCPUNLDZEMQW");

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
    msg.setTimeStamp(0.911055691311);
    msg.setSource(34772U);
    msg.setSourceEntity(173U);
    msg.setDestination(48992U);
    msg.setDestinationEntity(17U);
    msg.type = 152U;
    msg.htime = 0.365777630688;
    msg.context.assign("TRBUOWYJGEEOVZHQEHILECAONPPRDKYSSZFFVZRBAIZFZNVENMPORTMAMNUINAGCNSHZGDS");
    msg.text.assign("GIWDEYGLYZJBZWLBC");

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
    msg.setTimeStamp(0.0214118103388);
    msg.setSource(45266U);
    msg.setSourceEntity(111U);
    msg.setDestination(29282U);
    msg.setDestinationEntity(240U);
    msg.type = 98U;
    msg.htime = 0.177979468954;
    msg.context.assign("RYGAUWVIEXAOQBRKXEAYXAFBTCWNDEEFWRKQJHYOMXQCNUFJUCXHBZZOJDBDKTEFIDVGMHXMKVGKOVMPNLHIJRZUGPSDVSVJIXIGSKAUVMVHQBKCWSFFGCUTYKENKLLZUPAZBBRZQ");
    msg.text.assign("IZSDAXKDAZSEONOYHZBEHMWDYATDFHBADJTFCUQEYOQDEIBDLGNRZJWUHELSPPVLJVGMTYKPVNZSFQJQOOMFGQXCHJKWJBXRNULTZZRNPBJVAUYOOSBCJNDTKGYAMLVTBQSUFWWC");

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
    msg.setTimeStamp(0.456357117261);
    msg.setSource(62793U);
    msg.setSourceEntity(235U);
    msg.setDestination(2258U);
    msg.setDestinationEntity(204U);
    msg.command = 43U;
    msg.htime = 0.49087157851;

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
    msg.setTimeStamp(0.302120548976);
    msg.setSource(53281U);
    msg.setSourceEntity(211U);
    msg.setDestination(13109U);
    msg.setDestinationEntity(21U);
    msg.command = 210U;
    msg.htime = 0.291258845367;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 227U;
    tmp_msg_0.htime = 0.718123706505;
    tmp_msg_0.context.assign("MGCYWEBPTS");
    tmp_msg_0.text.assign("DTHVDVLKKGBUNQTMVIGYQZDSHLSOJOEMDUJZRMPWHXWQSVJEBLMWGZGKIPFCFPZGAJIIL");
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
    msg.setTimeStamp(0.198223030295);
    msg.setSource(39025U);
    msg.setSourceEntity(176U);
    msg.setDestination(14785U);
    msg.setDestinationEntity(61U);
    msg.command = 102U;
    msg.htime = 0.168682797403;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 90U;
    tmp_msg_0.htime = 0.485071524454;
    tmp_msg_0.context.assign("YFDJCEMTFBUOMQRHKBPOLP");
    tmp_msg_0.text.assign("XBBLOITPEKNYEVDSXTDDJBSFXWATLDVXJUKMXUJIHSIVGMRTWHHRQULFFZRZWMAJNLKERQHJLGYTGZIEZLJQDGAKOICPFRJCMHBHVWBRQMGFLXAVCIFHQOJXWZNBLKRNLZWRGCWEOYCYQUIUTYQOQMMXSDETOKPBKUPWZKOKXWVSDBPZEPPVVNCONFSSCBMGZRESRIHHYVNEVNWSFQSGZYXAMUAYPGFJCIY");
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
    msg.setTimeStamp(0.235912875793);
    msg.setSource(21999U);
    msg.setSourceEntity(62U);
    msg.setDestination(20038U);
    msg.setDestinationEntity(100U);
    msg.op = 157U;
    msg.file.assign("GWVTSNCGWMCIHIULPHRPLCHUUKLBANGSYTUGXOWDTNYIDGTNNHZXMSKAEREOHRZPUIMBAIMJTDPJDWPZOZYRUIRVOEMNRXGVNOYBBWGVWLEAKUESPW");

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
    msg.setTimeStamp(0.0993717234812);
    msg.setSource(43331U);
    msg.setSourceEntity(227U);
    msg.setDestination(20150U);
    msg.setDestinationEntity(158U);
    msg.op = 50U;
    msg.file.assign("XKVJVEVVSPRXKHVZGFWUCTAIQHZSYBMKLOFJHOXVORDAJFHUROAQEXKUHLTCZBZLYMXNINCZGRJZSWOIEQTLDARFWJVAYIMYGBIAZDIQCWLUOGDFOUXMFNPURMGJPUKTSIAL");

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
    msg.setTimeStamp(0.774759859126);
    msg.setSource(1594U);
    msg.setSourceEntity(218U);
    msg.setDestination(34364U);
    msg.setDestinationEntity(90U);
    msg.op = 142U;
    msg.file.assign("RBVKPDRWAYFXNNNQIAVRMXKTWXEEKQZPPHLCLXFBCFGNJDKLWMBHBMUSZLCKRXUJEHZTGDNDLBZHAOTVIGSHWUXIJVETFIZCGCSGPSGTUJGAWDCBYWXFAOPNQQLJWFTKPOVEQPHOGOSLVPMLPRUCAKIICYQUSORJVGIUKDE");

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
    msg.setTimeStamp(0.690938519793);
    msg.setSource(3455U);
    msg.setSourceEntity(209U);
    msg.setDestination(36795U);
    msg.setDestinationEntity(66U);
    msg.op = 72U;
    msg.clock = 0.0469607297734;
    msg.tz = -51;

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
    msg.setTimeStamp(0.374767940101);
    msg.setSource(53480U);
    msg.setSourceEntity(100U);
    msg.setDestination(28240U);
    msg.setDestinationEntity(153U);
    msg.op = 83U;
    msg.clock = 0.30344819454;
    msg.tz = 122;

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
    msg.setTimeStamp(0.71346017819);
    msg.setSource(11835U);
    msg.setSourceEntity(131U);
    msg.setDestination(6904U);
    msg.setDestinationEntity(97U);
    msg.op = 179U;
    msg.clock = 0.385722052538;
    msg.tz = -102;

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
    msg.setTimeStamp(0.686768460033);
    msg.setSource(14272U);
    msg.setSourceEntity(191U);
    msg.setDestination(39349U);
    msg.setDestinationEntity(208U);
    msg.conductivity = 0.987425572204;
    msg.temperature = 0.285347758931;
    msg.depth = 0.196884547366;

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
    msg.setTimeStamp(0.9070445775);
    msg.setSource(57955U);
    msg.setSourceEntity(24U);
    msg.setDestination(56329U);
    msg.setDestinationEntity(93U);
    msg.conductivity = 0.281506801098;
    msg.temperature = 0.806361317093;
    msg.depth = 0.430582674794;

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
    msg.setTimeStamp(0.427471836096);
    msg.setSource(28302U);
    msg.setSourceEntity(95U);
    msg.setDestination(51998U);
    msg.setDestinationEntity(23U);
    msg.conductivity = 0.60601940942;
    msg.temperature = 0.682523857929;
    msg.depth = 0.712352562741;

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
    msg.setTimeStamp(0.317872733564);
    msg.setSource(45191U);
    msg.setSourceEntity(50U);
    msg.setDestination(6080U);
    msg.setDestinationEntity(224U);
    msg.altitude = 0.753626935869;
    msg.roll = 13083U;
    msg.pitch = 35849U;
    msg.yaw = 19119U;
    msg.speed = 6178;

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
    msg.setTimeStamp(0.57936278366);
    msg.setSource(13835U);
    msg.setSourceEntity(33U);
    msg.setDestination(54003U);
    msg.setDestinationEntity(94U);
    msg.altitude = 0.683816913741;
    msg.roll = 45893U;
    msg.pitch = 60395U;
    msg.yaw = 6996U;
    msg.speed = -32025;

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
    msg.setTimeStamp(0.807689986496);
    msg.setSource(17036U);
    msg.setSourceEntity(85U);
    msg.setDestination(21261U);
    msg.setDestinationEntity(18U);
    msg.altitude = 0.398166053724;
    msg.roll = 32593U;
    msg.pitch = 59630U;
    msg.yaw = 55635U;
    msg.speed = 32028;

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
    msg.setTimeStamp(0.336574521255);
    msg.setSource(18538U);
    msg.setSourceEntity(177U);
    msg.setDestination(25953U);
    msg.setDestinationEntity(204U);
    msg.altitude = 0.194886483594;
    msg.width = 0.791756359856;
    msg.length = 0.559942052238;
    msg.bearing = 0.156978216116;
    msg.pxl = 21334;
    msg.encoding = 207U;
    const char tmp_msg_0[] = {-82, -10, 85, 93, -23, 119, -84, -109, -92, 96, -125, 47, -26, 112, 5, -86, -38, 24, -113, 13, 12, 67, 85, 66, -97, 1, 29, -78, 108, -58, -105, -107, -64, 32, -82, 114, 99, 86, 49, -122, 87, 85, -3, 22, 49, 35, -65, -120, -13, 102, 21, -109, -53, 88, -42, -5, -104, -43, 12, 26, -14, -61, -15, 74, -61, 124, 62, 104, 92, 53, 95, 69, 12, -55, -102, 73, 78, 1, -97, 62, 112, 104, -82, -22, 31, 59, -71, 97, 98, 98, 111, 95, 46, 5, -46, 36, 31, -10, 7, 37, 89, 108, 102, -62, -19, -19, -107, -6, 8, 116, 121, -47, 5, -52, -76, -13, -2, -91, -85, -87, -120, -21, 85, -42, 4, 100, 115, 91, -70, 108, 92, 7, -30, 40, -62, -76, 85, 108, -39, 16, 50, -77, -53, -8, -27, -22, -97, 103, -41, -43, 27, -103, 22, -75, 71, 24, -128, 107, 102, -111, -20, 30, -97, -6, 102, 90, -81, -95, -28, 102, -15, 57, 38, -55, -25, 7, -117, -26, -84, 118, -22, 44, -99, -42, 39, 60, -24, 50, 33, -110, -12, 118, 1, 118, -94, 53, 50, 25, 105, -127, -58, 43, 10, -97, -115, -57, 90, -87, 83, -94, -80, -2, -56, 20, 42, 5, -27, 31, -21, 101, 42, -42, -118, -107, 58, -116};
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
    msg.setTimeStamp(0.246794963626);
    msg.setSource(58610U);
    msg.setSourceEntity(219U);
    msg.setDestination(34096U);
    msg.setDestinationEntity(141U);
    msg.altitude = 0.0516015549322;
    msg.width = 0.501488258694;
    msg.length = 0.793774783855;
    msg.bearing = 0.0542972114194;
    msg.pxl = 10995;
    msg.encoding = 183U;
    const char tmp_msg_0[] = {-102, -34, -128, 90, -103, 56, 6, -101, 122, 36, -12, -101, 32, 43, -102, 12, -48, 67, 95, -72, -113, 52, -58, 51, -94, -30, -51, -105, -65, 80, 101, 13, 102, -122, 107, -114, -4, -98, -42, 79, -27, -51, -66, 16, -124, 74, 50, 112, 90, -72, 13, 64, 119, 93, -114, -125, -13, -76, 108, 40, -11, -121, 30, 40, -56, 27, -30, -65, 70, -19, 126, 40, 94, -71, 74, -46, -117, -11, 22, 92, -63, 40, -77, 86, -31, 119, 23, -60, 3, 31, 14, 109, -1, -68, 25, 108, 117, -85, 108, -50, -93, -11, 19, -33, -28, 31, -89, 46, -4, -21, 73, 6, 62, 25, 115, 116, 23, 120, -49, 98, 97, 8, 102, 102, -84, -123, -56, 117, 95, -49, -3, 72, 119, -119, -32, 32, -34, -87, 17, 119, -55, -37, -110, -16, -4, -45, -97, 115, 77, 78, -33, 28, -34, 12, -83, -57, 97, 68, -104, -28, 12, -101, 117, 87, -55, 23, 71, -70, 20, -93, 50, 91, -106, 106, -39, 45, -13};
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
    msg.setTimeStamp(0.20338432658);
    msg.setSource(53714U);
    msg.setSourceEntity(98U);
    msg.setDestination(9729U);
    msg.setDestinationEntity(185U);
    msg.altitude = 0.75204487965;
    msg.width = 0.773033099615;
    msg.length = 0.631897245717;
    msg.bearing = 0.762351780785;
    msg.pxl = -14129;
    msg.encoding = 155U;
    const char tmp_msg_0[] = {-111, 67, 53, -16, 113, -12, -100, 32, 123, -100, -123, 93, 103, -7, -6, -48, 117, 77, -14, -6, 40, -31, -50, -24, -31, 92, 16, 103, -102, -31, -15, -125, -11, 20, -12, -98, -93, -59, 1, -42, -59, -22, 43, 60, -39, -123, 49, 97, -76, 22, -117, 126, -119, -120, 43, 0, 11, 104, -21, 61, 72, 99, 42, 118, 100, -37, 59, 71, -55, 120, -14, 60, 22, 108, -30, -80, -46, 118, -60, 6, -83, -92, 2, -122, 5, -54, -17, 24, -78, 103, -94, 103, -36, 112, -40, 114, 80, 74, 107, 85, -92, -90, 40, -8, -62, -4, 37, 98, -122, 97, 108, 105, -73, 80, 102, 13, -14, 83, -52, -47, 117, -113, -94, -109, -103, -59, -45, -103, 34, 112, -2, -63, 64, 85, 103, -119, -4, -21, 106, 27, 61, -13, 20, 26, -90, 75, -66, -9, -59, 17, -32, 120, -96, -52, 117, -61, 23, 8, -53, 40, -9, 118, 76, -52, 33, 81, -36, 18, -94, -112, -40, -43, 107, 37, -106, 102, -116, 22, 0, -108, -107, -115, 101, 126, 8, -6, -115, 124, -32, 0, 103, -21};
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
    msg.setTimeStamp(0.860166769925);
    msg.setSource(2827U);
    msg.setSourceEntity(153U);
    msg.setDestination(53018U);
    msg.setDestinationEntity(185U);
    msg.text.assign("MKQMSEHQBSHNSTCUYNSEDCEHIZYALDXITJNSLIZQJRCTMAUWZRMLREJYRMTHUIHAFBNFFOSPAMJXUWCILTOBNXKBLJMWYTOAHGCLMJGFXNOLBORQVEIBGPQKQOWUPGLQOHUXEAEFZORCDVQF");
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
    msg.setTimeStamp(0.919507323384);
    msg.setSource(46883U);
    msg.setSourceEntity(74U);
    msg.setDestination(53537U);
    msg.setDestinationEntity(44U);
    msg.text.assign("UVLGUYWWEYQXDEMDTZMSLOGIGFEDOZRKZZIFHZJIWILDCPXROOJSHZYKGYPIMETNQGUJTWGIVTDKWVFRXXIAVJUSBBUJRBGCBMSYHCNQFNICEKSMCJSRKSYZNDTUCRXPQAXMDWEPRSUVLQPWFLQQEBUADNZFJOPABYALTNZTGWVTAMLWWHVGYYOBBHHCTAJTAF");
    msg.type = 5U;

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
    msg.setTimeStamp(0.811922470425);
    msg.setSource(40837U);
    msg.setSourceEntity(24U);
    msg.setDestination(32866U);
    msg.setDestinationEntity(65U);
    msg.text.assign("ENREFRXIJUTLQGEPLCUWFEVFLLGFIFEXUICXCNLKIVZPPBDXOJKLALQTVFTMBLWEORPSYVMHBZTDSMVMWYESUIRBQONJHXDRLOPZYQSQRJZJDAKIUGSBUHYRWCJDNRWJYFWNAUMSMEWCVZATIAVYQVEOCGKTWDNKBZPWXXIAOSFNXQTOIPKPHAXCHQKBUBTBVGTPRSNOWRH");
    msg.type = 241U;

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
    msg.setTimeStamp(0.479021218631);
    msg.setSource(65025U);
    msg.setSourceEntity(152U);
    msg.setDestination(43889U);
    msg.setDestinationEntity(4U);
    msg.parameter = 46U;
    msg.numsamples = 170U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 4710U;
    tmp_msg_0.avg = 0.499095917702;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.530299772225;
    msg.lon = 0.186036229547;

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
    msg.setTimeStamp(0.48359087213);
    msg.setSource(16886U);
    msg.setSourceEntity(237U);
    msg.setDestination(10849U);
    msg.setDestinationEntity(47U);
    msg.parameter = 20U;
    msg.numsamples = 2U;
    msg.lat = 0.227913975435;
    msg.lon = 0.574442003903;

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
    msg.setTimeStamp(0.449244285287);
    msg.setSource(26139U);
    msg.setSourceEntity(29U);
    msg.setDestination(48879U);
    msg.setDestinationEntity(8U);
    msg.parameter = 242U;
    msg.numsamples = 140U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 61431U;
    tmp_msg_0.avg = 0.807282892385;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.178297819412;
    msg.lon = 0.588795255627;

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
    msg.setTimeStamp(0.359076954662);
    msg.setSource(29959U);
    msg.setSourceEntity(87U);
    msg.setDestination(3500U);
    msg.setDestinationEntity(14U);
    msg.depth = 412U;
    msg.avg = 0.523944408283;

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
    msg.setTimeStamp(0.877700678278);
    msg.setSource(13248U);
    msg.setSourceEntity(22U);
    msg.setDestination(21682U);
    msg.setDestinationEntity(62U);
    msg.depth = 20847U;
    msg.avg = 0.177888117535;

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
    msg.setTimeStamp(0.165547398181);
    msg.setSource(44960U);
    msg.setSourceEntity(5U);
    msg.setDestination(32031U);
    msg.setDestinationEntity(54U);
    msg.depth = 16422U;
    msg.avg = 0.897617947994;

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
    msg.setTimeStamp(0.59053412488);
    msg.setSource(8236U);
    msg.setSourceEntity(62U);
    msg.setDestination(54163U);
    msg.setDestinationEntity(137U);

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
    msg.setTimeStamp(0.935993549824);
    msg.setSource(31111U);
    msg.setSourceEntity(97U);
    msg.setDestination(17441U);
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
    msg.setTimeStamp(0.967886091905);
    msg.setSource(25605U);
    msg.setSourceEntity(167U);
    msg.setDestination(40665U);
    msg.setDestinationEntity(147U);

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
    msg.setTimeStamp(0.0848042133329);
    msg.setSource(10778U);
    msg.setSourceEntity(235U);
    msg.setDestination(1673U);
    msg.setDestinationEntity(227U);
    msg.sys_name.assign("DRSJUUWLTHCJVIXTCLZLSBHMYCCEYIDBSVCVHTKCAGLCFKTIPMVNLHSARUQJUEKLSANMRDNPXGFMYMWZVMOBXRZUTNNZGRIXUTNPENJVTBJZBODSZEGSIXFLLPYGDBEAJRDYUQFQIWVEHFJPDWLVYWOHPCAXOUJOISSZAQGTITQPPEMHYGRWHMKNSNFGUBTKXQFKOFQOIKMLVFWRPEYFXAQNMQEKIXUZEGWJXORYVZADBORBDJKW");
    msg.sys_type = 70U;
    msg.owner = 44660U;
    msg.lat = 0.168874952461;
    msg.lon = 0.543350851067;
    msg.height = 0.201041980552;
    msg.services.assign("BJSXTFDNIAHLTVRJRLRJZIDLEFTRPWKIVMTOTKHGAPLXAUJSFODCGBEIKBOANECQBG");

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
    msg.setTimeStamp(0.0115531434534);
    msg.setSource(53912U);
    msg.setSourceEntity(38U);
    msg.setDestination(32179U);
    msg.setDestinationEntity(169U);
    msg.sys_name.assign("GQROMQZBLTRYKFAOSASJYJLWPFFNAREPNKUSPYZNKZLRVLWVXCTNWYLDQOJCJDLKDVCTIPZTXQTFACOMBJUPKVUXTRSLPRRAXMIFP");
    msg.sys_type = 45U;
    msg.owner = 44290U;
    msg.lat = 0.824257396029;
    msg.lon = 0.639855753555;
    msg.height = 0.519963206535;
    msg.services.assign("EBSAOLVKLPPILNPCYMUGTSNWOFPDZBWWMMEHSCIKVBFARCYOAIQRVZAUENZCFXVDAFUTVKJTCLDUIZKEWVUEYIMNSOGPLTHZNWPGDVDQEHJQTYXOWJQYONDKIQKQTJYQDUVOESCXYDJHYSBLIXQFTX");

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
    msg.setTimeStamp(0.669113539412);
    msg.setSource(48816U);
    msg.setSourceEntity(215U);
    msg.setDestination(5727U);
    msg.setDestinationEntity(177U);
    msg.sys_name.assign("OGEDIPJLADDOYBVYOBONRFTMFUCRWDNZDAEITRHZXMJTQRYQALNFKJCCMBTVPYIAPUWKQGHSOGPLEAQPUXGVNSKPXLKEZOLYORLZMWJSCVMAGPEIXVWGJKDFZUPZQLJYERNIWUXWZCFFNEKJTXFNJBALXWCHJADOXRBLVESLHIRMOHTCRUVUVGTBGDEYVKEHQIMMTISCMZGQYASBKNZDGTHXS");
    msg.sys_type = 54U;
    msg.owner = 22093U;
    msg.lat = 0.283749766322;
    msg.lon = 0.916189350978;
    msg.height = 0.261486486062;
    msg.services.assign("JPVRTOBPBLMQPAJFKIBVIMEECHSAVFFNNEXCULOYHODEKCGIFCCZAZLXSBWJMDCHIZUGCTPCAVYXNJOSPPQIZUEHBZIUHDGOIOGERKSDOQFURWLMNNJSWHVGRSXYNWOMUADDVGUKSTSYZQTYKXWGZKIEFJGQTVMYDADVZMRQNLWZAKYYBXDHXPMMUNWKSOCTAGORBTBKXFWWTAQMFBIPRTNYQEYPRKHAVQFJJBILEJZGFESWXLHNRJVUX");

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
    msg.setTimeStamp(0.827150229815);
    msg.setSource(26560U);
    msg.setSourceEntity(31U);
    msg.setDestination(36929U);
    msg.setDestinationEntity(100U);
    msg.service.assign("YDCRLCBMSRREEGSJGUIPIBLPGKFMBLGROOALATNVHVFSWXBEOVOUPTZWVWKO");
    msg.service_type = 159U;

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
    msg.setTimeStamp(0.325059936842);
    msg.setSource(50328U);
    msg.setSourceEntity(155U);
    msg.setDestination(46616U);
    msg.setDestinationEntity(223U);
    msg.service.assign("YJXKSFLATRPGROMDCOWULBXBLAKDRSEGJRLDYZJIKXMVBYWJUTILQGJYUBYBNIZYRTPIMHTAJNDBSRFOHRXJWVQDZIRHMUEHPNGLCDYHEAPMLTTXMKXLUZWSNVFINQCMUASSFSSNYFQZDOPXGWQHSNGGZZYHJJR");
    msg.service_type = 122U;

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
    msg.setTimeStamp(0.42802644813);
    msg.setSource(3534U);
    msg.setSourceEntity(158U);
    msg.setDestination(51230U);
    msg.setDestinationEntity(99U);
    msg.service.assign("RTGPUGWIRPCVDJQEHNISMZECEPHMBEUBXKJBFDYHFFIWBTAOPZAFWYRYPINLJDOOFXZUXNYWPSILEAKSKHXYVWNCBBIBKPFVZRXCAILNNVOOZVFVHIHMEQGGRSQEQUMWRWSIEFJJOUK");
    msg.service_type = 49U;

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
    msg.setTimeStamp(0.12783952672);
    msg.setSource(15500U);
    msg.setSourceEntity(6U);
    msg.setDestination(64142U);
    msg.setDestinationEntity(111U);
    msg.value = 0.215906576307;

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
    msg.setTimeStamp(0.0919529602359);
    msg.setSource(21605U);
    msg.setSourceEntity(201U);
    msg.setDestination(46777U);
    msg.setDestinationEntity(209U);
    msg.value = 0.0564897190862;

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
    msg.setTimeStamp(0.622923478319);
    msg.setSource(63359U);
    msg.setSourceEntity(176U);
    msg.setDestination(50747U);
    msg.setDestinationEntity(167U);
    msg.value = 0.948404068495;

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
    msg.setTimeStamp(0.515385992172);
    msg.setSource(24720U);
    msg.setSourceEntity(41U);
    msg.setDestination(63849U);
    msg.setDestinationEntity(227U);
    msg.value = 0.453842737663;

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
    msg.setTimeStamp(0.522628903461);
    msg.setSource(55933U);
    msg.setSourceEntity(25U);
    msg.setDestination(62073U);
    msg.setDestinationEntity(241U);
    msg.value = 0.0858566452819;

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
    msg.setTimeStamp(0.647962903234);
    msg.setSource(40478U);
    msg.setSourceEntity(175U);
    msg.setDestination(28137U);
    msg.setDestinationEntity(146U);
    msg.value = 0.750883030259;

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
    msg.setTimeStamp(0.40384333823);
    msg.setSource(2809U);
    msg.setSourceEntity(54U);
    msg.setDestination(64383U);
    msg.setDestinationEntity(225U);
    msg.value = 0.853673572576;

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
    msg.setTimeStamp(0.393106896807);
    msg.setSource(55515U);
    msg.setSourceEntity(112U);
    msg.setDestination(14282U);
    msg.setDestinationEntity(169U);
    msg.value = 0.608711324489;

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
    msg.setTimeStamp(0.96376351943);
    msg.setSource(27430U);
    msg.setSourceEntity(120U);
    msg.setDestination(33480U);
    msg.setDestinationEntity(206U);
    msg.value = 0.715748565681;

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
    msg.setTimeStamp(0.64908660144);
    msg.setSource(22403U);
    msg.setSourceEntity(52U);
    msg.setDestination(2865U);
    msg.setDestinationEntity(135U);
    msg.number.assign("CCBIECSNUGSZERQSYFSWNQLQMASFVFKEGIBBUKKKHJSKQDGLCOOEGMQCMQRZGUGLGEXHBPNZMEYTAAORIWCIDFUYLJDHQOJBVOIMJFUETUPDRJBTSHXINAM");
    msg.timeout = 8518U;
    msg.contents.assign("DZEWKPKPQLHOWEGKZRMJAFCTYIRMXMVDPGRMVCFNANWCEFFGUVAPOZYSCHZKNTWKLVQLMYJLHJKKARZSLDWUGTQXKHDBJRIAOQPYIEWRUIQDCOZQMPGXMQPWYUMSATVZJMBRIUIHRPBSNYXOBADJECQOEYUFOPSSQGHMFXRNXWTBLUHTQXTAUKBCAFD");

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
    msg.setTimeStamp(0.341289092407);
    msg.setSource(49442U);
    msg.setSourceEntity(136U);
    msg.setDestination(28093U);
    msg.setDestinationEntity(145U);
    msg.number.assign("ULEXEXMVZDUSOQALUZGJASHRJABBYTXNEVKFBAUDBMXVMRVZLKFSBDRKSEQJQVJBRHXJJBGJOZUGMNCHABCHWOIJOTRQKQTDRYIFRGYZOQPVHQKFDYEIMAZNIHLWNIIEDQLZTREDUCGWGXAUKVYGRWPCMHWSOYZMKNJNTBPWXSEGOWAHXHNELPUOYFDZFSNDLIYGOPCPXRCMM");
    msg.timeout = 20418U;
    msg.contents.assign("IBZBQAVWYLWEZHKSADDTJEUTXKJSQQDMVAYGRMMRSLMOHMSQJBXKAEMKZRIMXUBJHCKVNWYRLFYHNKDPYOOELQLXNJOUPVZRUPJBTETOBFGJNAXXURRDGOBKLPOWFZVGIHXNGHUZHCVEAGGOZFVDIBYTWETVBCQSQJBAKDJIMCNZECKCIUHUERHUTQCDCFCXPWPQHSSGPNFJIYMNPPOFAYAI");

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
    msg.setTimeStamp(0.989615972317);
    msg.setSource(12205U);
    msg.setSourceEntity(193U);
    msg.setDestination(48632U);
    msg.setDestinationEntity(85U);
    msg.number.assign("OIXFNBUTHHERQNPCOCU");
    msg.timeout = 33203U;
    msg.contents.assign("MQVUQOHCIVLERHUGGFDEKXWTWITYYSMPJKUXAERVACKQRHXIOBQCMUHYTBAFUXXHNCOBREEMHZNSYFXKJWBGSWFUXMDSMRHILPIPLGZJVTSTSKSFUSKTUPJJWLDCAPVFBHIP");

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
    msg.setTimeStamp(0.285143399504);
    msg.setSource(56507U);
    msg.setSourceEntity(190U);
    msg.setDestination(1525U);
    msg.setDestinationEntity(109U);
    msg.seq = 897940640U;
    msg.destination.assign("FWZMMDRYJEZBSUWZJXCZFFGPOEXXAXEZRPXMRIQELRVPDFPIWYDVNTAIQWGXHYUDSLNSNTNTMS");
    msg.timeout = 26025U;
    const char tmp_msg_0[] = {74, 93, -83, -112, 99, -28, -5, 69, 20, -41, 125, -33, -84, 126, -48, 25, -49, 110, 41, 84, 120, -88, -39, 40, -17, 85, 9, 48, -23, -5, -53, 47, 19, 69, -59, -30, -112, 105, -34, 41, -51, -31, 93, 99, -41, 9, -58, 21, -55, 68, -60, 31, -99, 22, -81, -92, 34, 112, 64, 40, -53, -124, 83, -96, -108, -74, -70, 126, -77, 8, -17, 52, -45};
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
    msg.setTimeStamp(0.48034220505);
    msg.setSource(35965U);
    msg.setSourceEntity(63U);
    msg.setDestination(63911U);
    msg.setDestinationEntity(38U);
    msg.seq = 816136007U;
    msg.destination.assign("SZAVIDLFSEQELRUWEDOSZTVESGHNCBDZWUHCJCUKKPKIQRGLXVTPGXGI");
    msg.timeout = 18179U;
    const char tmp_msg_0[] = {-128, 102, 56, -6, -42, 80, -42, 51, 21, 37, 7, 47, -19, 16, 7, -81, 20, -76, -53, 22, 16, -1, -114, -97, -50, 59, -94, -45, -14, 11, -112, 10, -40, 9, 19, -71, -103, 25, -121, 51, -29, 126, -123, -121, -15, 104, -47, -58, -7, 73, -126, 118, 80, -53, 102, 87, -37, 5, -49, -30, 104, -8, 122, 64, 102, -52, 70, -65, 62, 5, -62, -9, -119, -101, 39, 67, 27, 10, 70, 46, 61, -60, -46, 59, -53, -48, 117, -4, 14, -97, -89};
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
    msg.setTimeStamp(0.409610954452);
    msg.setSource(25663U);
    msg.setSourceEntity(46U);
    msg.setDestination(10000U);
    msg.setDestinationEntity(234U);
    msg.seq = 2533883448U;
    msg.destination.assign("ZYLJFCSHQEKYCCB");
    msg.timeout = 52U;
    const char tmp_msg_0[] = {-110, 24, 29, -76, -29, -123, -23, 27, 13, 120, 123, -81, -13, -52, 30, -100, -104, -104, 33, 8, -75, -14, -32, -17, -109, 70, -19, 35, 86, 36, 21, 125, -13, -56, -33, 16, 89, -39, 119, 120, -87, -51, -30, 108, 35, -69, -14, -95, 92, 14, -20, 111, 116, -86, -104, 98, 116, -115, -11, -72, -4, 123, -71, 96, -78, -73, -16, 66, -59, -100, 97, 31, 104, -46, 14, -110, 87, -120, -71, 18, 105, -127, 87, -102, 98, -80, 31, -22, 109, 30, -117, -49, -126, 31, 11, 30, -23, 28, -9, 67, -88, -12, -84, -51, 91, 111, -4, -126, 82, 63, -111, -119, -55, -28, 85, -7, 56, -25, -18, -27, 60, 47, 43, -37, 39, -82, 100, -51, 58, 8, -5, -122, 85, 15, 85, -34, 61, -67, -63, 21, 89, -40, -48, 22, -9, 82, -123, -39, -29, 103, -90};
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
    msg.setTimeStamp(0.894551169739);
    msg.setSource(48248U);
    msg.setSourceEntity(102U);
    msg.setDestination(41518U);
    msg.setDestinationEntity(146U);
    msg.source.assign("QJBEYQZOHWNMLDKCTRGTBEELVBJJPQEZPHBNGWZVGXETFMRCRKLXOFANIEZHVROSSOYLJHTUPJEAFBRCENUPLXMUXXYJUFRASISQZGFKOUMCXVGTBWPGGJSOICMHDWOAWRUDAHDVLWTHQYJFLFBDVYPNAKVVCARU");
    const char tmp_msg_0[] = {-123, -113, -119, 78, 103, 126, 40, 85, 121, 47, -68, -62, 75, -59, 90, -128, -50, -81, -4, 5, -62, 56, 95, -48, 78, 83, 79, -47, 120, 106, -54, 61, 8, -117, 26, -111, 80, -104, -22, 74, -117, -122, -65, 101, -62, -110, -38, 80, -9, -120, 71, -22, 81, 51, -61, 73, 66, -94, -109, -101, -33, -80, 5, -44, 75, -51, -95, 54, 60, -58, 43, -79, 36, 122, 34, 96, 15, 123, 52, 119, 93, 76, 48, -81, -23, 43, -126, -127, 9, -90, 96, -48, 100, -14, 76, 55, -5, -67, -28, -123, 35, 71, 126, -117, 44};
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
    msg.setTimeStamp(0.023437927342);
    msg.setSource(33542U);
    msg.setSourceEntity(165U);
    msg.setDestination(20893U);
    msg.setDestinationEntity(174U);
    msg.source.assign("WVTEQOUFJRRDNEADKDXTOHBTJPKXZGGVJFIZVHAFNUGORUTMUIIICENNKFDPEDWLEWJPYRFDLFEWMWKZYXCZKTBNCLTXZYQRROWXPQCVIWMKDAUBCPSHKQSYZUJPOFAMVCEQHATMMDZSQK");
    const char tmp_msg_0[] = {95, 107, 34, -46, -39, -97, 15, -91, 38, -123, 113, 115, 27, -35, -82, -17, 18, 0, 50, -35, 0, -92, -89, -119, -111, 113, 30, 51, -70, 46, -4, -60, -49, 70, -116, -52, 79, 63, 6, -40, -114, 41, -85, 112, 11, -122, 85, 18, 45, 105, -6, 96, 108, -28, 121, -83, -109, 12, 3, -85, -96, 100, 111, 35, -78, -89, 14, 95, -70, 84, 107, 116, 122, -54, 52, -118, 122, 64, -68, 126, 56, 90, -91, 87, 87, 96, 13, 32, -104, -89, 123, -16, -1, 43, -32, -105, -126, -68, 59, -55};
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
    msg.setTimeStamp(0.47257522052);
    msg.setSource(40622U);
    msg.setSourceEntity(64U);
    msg.setDestination(8644U);
    msg.setDestinationEntity(224U);
    msg.source.assign("QUEGSHEZNDRVVGWBCHQYDSEURTTCBKLBSOPHPJHPZHYSOAFCVPQCSHROKAFPMBVZVAPZBBASJRJILYEXMVOIPWCQQQEMWPGXUYAHLYSFKZWXLSIWJERYYKGIATEDAJAPVZKHZLWLIJEBDYGELDRHWUFETRUGJRDXKDNATFJNXMTTMCOWCNSJU");
    const char tmp_msg_0[] = {89, 27, -125, -70, 25, -33, 101, 54, -22, -26, -66, -57, -64, -99, -63, 36, 37, -42, 14, 43, -123, -8, -25, 95, 101, 64, 26, -39, 19, -92, -113, 96, -76, 0, -68, 102, 58, -21, -114, -26, 109, -93, 4, -106, 69, -98, 83, 90, 97, 111, 37, -10, 115, -79, -10, 74, 59, -127, 93, -62, 89, 71, -125, -98, 111, -18, -23, -116, -117, 107, 34, 77, -119, 123, -73, 78, -49, 53, -121, 12, -14, -124, 81, -26, -40, -117, 53, 33, -126, 79, 16, -114, 62, 35, -80, 65, -10, 50, 84, 84, 65, 3, 42, -93, -126, 31, 98, 86, 60, 80, -77, 8, 46, -50, -1, 116, 98, -74, -87, -29, -110, 126, 44, 0, -67, -68, -96, 109, -126, -2, -73, -103};
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
    msg.setTimeStamp(0.403148491069);
    msg.setSource(11562U);
    msg.setSourceEntity(104U);
    msg.setDestination(23850U);
    msg.setDestinationEntity(191U);
    msg.seq = 3646624879U;
    msg.state = 59U;
    msg.error.assign("UBCDDJRXTIBXXDXKLSBJTFUWHNLIWYKPWXQKSBSFOOZCOONUHSNYZKPYJUOPNTRJAHWCPFILKSSHVZELQXLYJCGBHGRVQNZAXCDDRIWQBUOPGDVEOKABYNBPEQLRKGIJXLARZFWYHXACPGNNAIRTYVRZEEGCOTYHWCIBDVCJBNEMFUPEVQHAOZNAMVTTPELGZWKMTXTDGADMSJVRMFROTUMQMFILHDF");

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
    msg.setTimeStamp(0.338741841618);
    msg.setSource(65343U);
    msg.setSourceEntity(180U);
    msg.setDestination(32299U);
    msg.setDestinationEntity(244U);
    msg.seq = 3220318475U;
    msg.state = 196U;
    msg.error.assign("RQAVGDMGYHHK");

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
    msg.setTimeStamp(0.391277577103);
    msg.setSource(51406U);
    msg.setSourceEntity(112U);
    msg.setDestination(45843U);
    msg.setDestinationEntity(116U);
    msg.seq = 1245017811U;
    msg.state = 241U;
    msg.error.assign("MIECXBSSPHLQQNWJKNOMKZTYDBUCLJJRDLPKCQLAWVZGKMVULVMGCZCJBHTYOXQPZVUPTTCGNDSIBEVRSKKLFDIGXAZUQRGUZOVMDFNAEMXFICETYKTHIDR");

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
    msg.setTimeStamp(0.784664557034);
    msg.setSource(31691U);
    msg.setSourceEntity(241U);
    msg.setDestination(6298U);
    msg.setDestinationEntity(145U);
    msg.origin.assign("XAGNUHTMOHJXQYRTZJKEBMXWAWDFZIDCJAVTCGOJFCPYZOAKLZVWNJANSTNDIZOBIDIYWLSAHDGPHRSBLIVLQBTHQRUYVJXWGMPISOMUDLPHPVZNJ");
    msg.text.assign("ILUDZGRDCBSFTCMJKONDMSPPPAGLRKDQGXMLMQRXQFORHLTWOINNHHGMXKMWJBVNPSKEIBUUCTFRWPXFSMWUGPVAGKJDOFAVLCCXXFEVFQANZINUEUWOZOUWWNYAHXREIYEJCOKJUEEVPLBADMHXQGTFYMJKTBGO");

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
    msg.setTimeStamp(0.0887934262705);
    msg.setSource(51146U);
    msg.setSourceEntity(27U);
    msg.setDestination(15498U);
    msg.setDestinationEntity(119U);
    msg.origin.assign("YDUHIJIYXFYFNPVPACNOHMMZLGVOCAEGJASSDMTRABOKKETEVBZHYGSPTHWUSYETNOWUHJJUUUKRJDAQGWZCMPLVQXJZWJCTVOEQFBBWRGDMRYO");
    msg.text.assign("RKXYEJKFYXUFTIPLQGAUPXQMNZWVZICLZSZHDEJYBYDIWJTJVJWBKAKPCUOKUQIHCJSGWOEULCFRGJVUXPXLEMSPCSZK");

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
    msg.setTimeStamp(0.87220447997);
    msg.setSource(15300U);
    msg.setSourceEntity(68U);
    msg.setDestination(63176U);
    msg.setDestinationEntity(241U);
    msg.origin.assign("JDODUCETYTSAURPUSCQINZYFFDSFZJVSIMNBLHKIHDHQNAJBLKNRAHMOLGWTSKYETROEOAFUKLCJKLTQAEIEWJPEGYFGJMBPSXDWNCUBMOOIPZHWUBXKKHDVNBAIRVSPVVXYXFOGAADGHDTGUOCHLZUXLVLZQEYZOWGEPZLMNVDPUXRSTUMSIQRVTZCIRGVYKIXFJTMMAQRVPZJELWAMXBMFNGBWNSQ");
    msg.text.assign("NXYPRXJYPWCISVJKDBCWWVIMEEGADTHUABTCSLJMLUSLLRBSUZXZCMPYIDHDOAZTYMCITVKCPLNPVETQGWGJJGKONYAFRFBDPVOYUUWLEELFVSXTMRIEBICMAGXGUYOOGRQKZUFVIQSPRSVXZZRZMTNDFKHNGJKXHYEEQWSDMFPJWTFEKNYXHALJHPRCVDAQUHURQLNXHQLFNDXCZWSGCBDOKMNYOTJAEITBOVHAZPHSOROMAFIKQW");

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
    msg.setTimeStamp(0.745606479216);
    msg.setSource(9316U);
    msg.setSourceEntity(210U);
    msg.setDestination(593U);
    msg.setDestinationEntity(231U);
    msg.origin.assign("IHOXYLDTKRGMCTWYPMOSBAHHYAKBWGUXTTJHWDNPZHIGDDVXKSCIVSYQRXHGZPGRGNVQHSELXUENFZKHLCFLW");
    msg.htime = 0.054153016036;
    msg.lat = 0.71662469471;
    msg.lon = 0.819655434191;
    const char tmp_msg_0[] = {57, -110, -93, 87, 76, 88, -1, 101, -55, -91, -112, 29, 69, -62, 50, 38, 12, -81, 93, -26, 68, -73, -20, -87, 70, -84, -28, 106, -18, -43, 111, -81, 41, -23, 32, -79, 20, -25, -1, 120, -98, 92, 29, 113, -47, 114, -90, 24, -39, 29, -45, -101, 17, -35, -62, 82, 125, 99, 78, -21, 9, -93, -3, 4, -85, -88, -5};
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
    msg.setTimeStamp(0.500024449605);
    msg.setSource(41870U);
    msg.setSourceEntity(70U);
    msg.setDestination(49561U);
    msg.setDestinationEntity(98U);
    msg.origin.assign("OUIRVTNFDTWBKACWXLAIITCUDKEOWTHLHUHQCFRAQVQFEUOBKWMMRVZEGYTQRUZDKQKPLDNGJJU");
    msg.htime = 0.579794678601;
    msg.lat = 0.387133246829;
    msg.lon = 0.914528787019;
    const char tmp_msg_0[] = {-103, 115, 17, 49, -107, -87, 23, 100, 24, 26, 45, -96, -30, 14, -21, -65, -9, 126, -95, -10, 77, -68, -14, 115, 57, 12, 43, -106, -75, -61, 50, 73, 77, -98, 82, -49, -26, 91, -70, -114, -86, 86, -125, 21, 31, 71, 2, -51, -14, -43, -91, 103, 109, -112, 50, 50, -106, 105, -31, -127, 88, -95, 76, -54, 119, 22, -6, 89, -45, 25, -61, 48, 111, 107, -75, 102, 125, 124, 93, 31, 76, 42, -76, -110, 17, 88, -79, -52, -67, -111, 33, -59, 91, -26, 70, -79, -59, 72, 108, 9, -9, -56, 58, 76, 19, -69, -95, -127, -46, -22, -126, -57, 55, 96, 17, -2, -80, 76, -109, -16, -53, -120, 7, -26, 1, 83, -36, -72, -107, -95, 67, -120, 106, -84, -104, 77, -29, 7, 93, 75, -120, -48, 49, -128, -36, -32, -13, 124, -51, -91, -120, 22, -26, 10, 68, -120, 44};
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
    msg.setTimeStamp(0.615679731337);
    msg.setSource(16725U);
    msg.setSourceEntity(222U);
    msg.setDestination(63786U);
    msg.setDestinationEntity(96U);
    msg.origin.assign("ERFWQGRDZWQHBAUWFJTPNLTAWAVUCGNJZXYJOIALCERHSJZYESTXSWBGYKWLQHUDGKLIITTVIQESXJUPHMSKOYJFBKTORCJYMEQZCFQKLEASVKEOZTOXMBEPPKEDADIJZVOMFWCHKPULWYFGVDZZXDPDBOCVGTDMOHIAYBLGXSIQMSVMWPUQST");
    msg.htime = 0.466510991882;
    msg.lat = 0.436485588307;
    msg.lon = 0.333557793745;
    const char tmp_msg_0[] = {-89, 109, -42, 52, -41, -87, 71, 6, 91, -109, -101, 125, -43, 2, 88, -53, 69, 101, 28, 117, 73, -115, 60, -26, -93, 101, 60, -3, -105, 104, 101, -8, -43, -128, 67, 70, 51, -31, 75, 71, -121, 104, 52, -120, -104, 122, -128, -34, 37, 54, 83, -87, 34, -85, -122, 124, -125, -9, 30, -28, -118, -94, -97, -108, 28, 67, 79, -58, 18, 1, 0, -31, -119, -36, -1, -52, 100, 70, 71, -34, 114, 103, 102, -7, 7, -74, -44, -123, -95, -34, -97, 105, -79, 108, -54, 116, -102, -122, -37, -60, -59, 115, 25, -107, 4, -28, 69, -113, 1, 9, 4, -26, -54, 36, 40, -66, -46, -112, -112, 46, -46, 56, 45, -51, -115, -49, 16, -39, -76, 10, 10, 76, -47, 87, 113, -72, -12, -110, -11, -93, -34, -59, 17, 65, -71, -37, 24, -43, 55, 109, -47, 100, -33, -45, -74, -94, -30, 68, 52, -116, -46, -60, 46, 22, -115, -18, -95, 41, -113, 32, 81, 36, 81, 21, 57, -48, 118, 123, 19, -25, -117, -72, 88, -24, -58, 69, 104, -16, 11, -59};
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
    msg.setTimeStamp(0.246688347133);
    msg.setSource(10236U);
    msg.setSourceEntity(120U);
    msg.setDestination(51790U);
    msg.setDestinationEntity(217U);
    msg.req_id = 10491U;
    msg.ttl = 9984U;
    msg.destination.assign("HXRSWUTXUFVONKFCSEZUYATSGCFAPXRYPFZAJEGEFCMHWRQDTBAUJJRYYCZHGBZMHNCWEBUDTLAJLKZJUMEPAVLIZNDQNJCCHAKMXSTOBVIPUNSPYFBGMHZXDEQYDWXOBOXYMKDLLINPIIEBNWTYFVQJDGONI");
    const char tmp_msg_0[] = {41, 52, -70, 88, 124, 69, -54, -27, -95, -120, 15, -16, -41, 5, -41, -24, -109, -74, -85, -76, -83, -34, 49, -13, 98, -40, 123, 17, 124, -28, 28, -101, -47, 22, -74, -3, 113, 62, -30, -114, 44, 20, -97, -12, -90, 89, 120, -117, -14, 78, 27, -59, -38, -39, 48, -49, -28, 63, -17, -6, 37, 95, -125, 41, -45, -21, -73, -98, 102, 104, 105, 9, 57, 55, -31, 112, -45, 70, -116, 65, -39, -98, -59, 48, -74, -101, 49, 65, 102, -100, -117, -32, 86, -97, 27, -106, 44, -41, -128, -114, -62, 31};
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
    msg.setTimeStamp(0.97833619293);
    msg.setSource(46788U);
    msg.setSourceEntity(150U);
    msg.setDestination(27954U);
    msg.setDestinationEntity(60U);
    msg.req_id = 29481U;
    msg.ttl = 24784U;
    msg.destination.assign("LPKHMAFSJZVUMIYTJXODYOTUTQRVMGDSLQUOESCNJSZCUXTGONVXESEXALBILSYWAFPNQVOXZIBBQY");
    const char tmp_msg_0[] = {1, -93, -17, 85, -59, 117, 0, 69, 23, -97, -33, 5, -39, 5, 1, -23, -19, -14, -67, 19, 106, -101, -71, 11, 122, 54, 70, 12, -107, 77, 37, -83, -107, 114, -36, -27, 37, -98, -59, -38, -75, -60, 30, 2, 64, -39, 12, -20, -89, 19, 57, -64, -1, 66, -21, -14, -67, -74, 24, 74, -66, 37, 49, 55, -31, 90, -19, 122, 102, 86, -52, 92, 101, 45, -122, 43, 96, 119, 59, 31, 101, -111, 95, -75, 75, 41, 115, -89, -30, 29, 117, -8, 120, 62, -68, -11, 118, 3, -109, 113, -125, -77, -78, -12, -96, -43, 61, 70, 88, -70, -75, 81, 13, -25, -1, 104, -56, 13, -37, -127, 27, 40, 26, 125, 119, 103, -15, 101, -37, -10, 118, 59, 123, -33, 41, -100, -88, 11, -61, 76, -120, -39, 60, -34, 58, 60, 100, -124, 3, -91, 4, 107, -98, 25, 126, -96, -45, -54, -47, 66, 63, -5, -21, -82, -70, -45, -47};
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
    msg.setTimeStamp(0.0869016384781);
    msg.setSource(7961U);
    msg.setSourceEntity(38U);
    msg.setDestination(46069U);
    msg.setDestinationEntity(190U);
    msg.req_id = 35590U;
    msg.ttl = 33835U;
    msg.destination.assign("JJYGOFOZCOUZHPKNMABXSNHUJRHURQLTHXOAARQTMCSWKFDPKNPDBMXXSCMLMYETDENFZIIPWJMLCLYZLXSVGXPTPTGKVRKYVDSATVHFHRSEERRUUFNCUQFAJDESUIGOGESNSIYQCTWZWEVWFALMJIXHWPJFBXTEBEBORACELQFQLBDIBWNKPZYLUMMUCYOAXAQWUQ");
    const char tmp_msg_0[] = {31, -30, -35, 76, -61, -23, 114, 96, -94, -34, -97, -128, -30, -18, 32, 106, 15, -82, 99, -29, -39, -68, 74, -4, -37, 61, 96, -90, -78, 77, 56, -27, -57, -94, -90, -117, 104, 61, 84, -20, -119, 12, 80, 107, 32, 43, -127, 97, 85, 100, -87, -119, 74, -11, 117, -45, 7, -2, -78, 40, 22, -79, 75, -89, -97, 81, 107, -105, 44, -57, -80, -14, -53, 5, 124, -1, 71, 41, 62, -31, 126, -46, -87, -99, -92, 118, -124, -12, 9, 43, 63, -106, 83, -15, 108, -54, 98, -125, -4, -53, -94, -126, -72, -79, -58, 79, -14, -18, 111, -42, -87, 90, -16, 51, 71, -96, 99, -121, 42, -77, 78, 13, 3, -107, -85, 80, 81, -59, -113, -40, 50, -44, 34, 110, -32, -85, 123, -63, -99, -91, 68, -23, -60, -39, -60, 65, -32, -89, 26, 100, -81, 14, 122, 22, 108, -43, -87};
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
    msg.setTimeStamp(0.357795381675);
    msg.setSource(42654U);
    msg.setSourceEntity(147U);
    msg.setDestination(65532U);
    msg.setDestinationEntity(133U);
    msg.req_id = 57882U;
    msg.status = 228U;
    msg.text.assign("XZYRGXTSHHOOAHXJHNICTWXEWRFDNBSPEKAMSKUYCVVFAKCNVLKOVIBYXQRBKJICHNULOCIB");

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
    msg.setTimeStamp(0.18042228687);
    msg.setSource(41415U);
    msg.setSourceEntity(114U);
    msg.setDestination(49812U);
    msg.setDestinationEntity(182U);
    msg.req_id = 26225U;
    msg.status = 247U;
    msg.text.assign("UDCVAQYGQLFIYEDVZBMTJMYUEGSIKQKXESCSMINIHPNDORXYUTCMBGKIMRXLZTOPQPVSDJQCLRCACAWPAGUHPDPTGBLPROOYULLQYUKGFXWBOXVTDCHNSKWHHARNEYOZBOPGKEYTTJVFLZHZFQFVRZGFFVSKNZKOIXDYNTSF");

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
    msg.setTimeStamp(0.278176524684);
    msg.setSource(23706U);
    msg.setSourceEntity(134U);
    msg.setDestination(22509U);
    msg.setDestinationEntity(74U);
    msg.req_id = 453U;
    msg.status = 106U;
    msg.text.assign("WJFUMXDTLIMUJJKYBSYMJVIPSAOTMPKISJ");

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
    msg.setTimeStamp(0.460481948485);
    msg.setSource(38677U);
    msg.setSourceEntity(99U);
    msg.setDestination(19910U);
    msg.setDestinationEntity(20U);
    msg.group_name.assign("JBAFPLBNEZUQLTJUIHGWWCSWS");
    msg.links = 2319366207U;

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
    msg.setTimeStamp(0.413306642073);
    msg.setSource(27307U);
    msg.setSourceEntity(75U);
    msg.setDestination(23725U);
    msg.setDestinationEntity(222U);
    msg.group_name.assign("WOMNLNBYJINFFOEERDCLXIOFSTGSOSEBDBPKISKIFYZPUNWJQQJVZCTXTEWTOGDRJAHSFCZLMCPYMEWPDHDTCGKNIF");
    msg.links = 398090555U;

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
    msg.setTimeStamp(0.65276543911);
    msg.setSource(41725U);
    msg.setSourceEntity(142U);
    msg.setDestination(13677U);
    msg.setDestinationEntity(44U);
    msg.group_name.assign("HNQUBIKAREBJDHTAOLJUATFGVAKYORPWFOREMCASGDSCIN");
    msg.links = 2102510306U;

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
    msg.setTimeStamp(0.098489220741);
    msg.setSource(18780U);
    msg.setSourceEntity(231U);
    msg.setDestination(36315U);
    msg.setDestinationEntity(215U);
    msg.groupname.assign("RRCAHQEOJNISUZDUQWVZHEMKWNWPSQZKMOAPLH");
    msg.action = 105U;
    msg.grouplist.assign("DHWULZUKTFLHYEWGVBXKIODDPJMBHGSSUGQCUKEYJUBPSOOXFPXKTCVAZRRGOEGSPRHMKQOAWBHRVYDNDYGATTZLYMAMAWNUSPZYQBLCBMIRHLCWKLGKHREHJYECIICNJBEDNSUACBMOVTOZHVHIUDMMSYJQFQZFLEINZIQVTWMNDQAVBPOVWYCOPPFXXRKRQAICXSEFSXZMVWJJXIZTJKFJ");

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
    msg.setTimeStamp(0.111046997475);
    msg.setSource(18469U);
    msg.setSourceEntity(163U);
    msg.setDestination(40667U);
    msg.setDestinationEntity(250U);
    msg.groupname.assign("VECRHLENYGJXJWLSEJFWFYDMDFSPTAPXPHFGRDAKNNUZYCYIMGNCLTRDHHFQKNOMMOKBVKRSQWUPSBTLGLJCMCMQZFUKPTLWIEOIWCVHCLMOHAPOJVAGMOEUPEJLYNWRSBVWTCVXQUWYWQDSLASOBFIUTWBD");
    msg.action = 37U;
    msg.grouplist.assign("HDGENVTBWOBEMUKVQZUTRITBGPNDXAGUTVKSPVCHZWRPUDZZMSBDCSYBPLKBFONKQEMLNLOVHUQPVQRNKICMXFEHVRMHWAKYVJHPIYWFGLAOAOWJSJITEUFYDQPVLFYGXANKCTCSYFNYDRHMCKSMLWAAQJVIJDYTZPOJWBEDLCZFXQFKCZHJRSXUNBRGBHTZGFEUUROXSMOCNADIKSSUFWCOMEIDIW");

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
    msg.setTimeStamp(0.643840554667);
    msg.setSource(61582U);
    msg.setSourceEntity(252U);
    msg.setDestination(14508U);
    msg.setDestinationEntity(192U);
    msg.groupname.assign("PVNMDPSEADCXGNSUSKUQPQPKDBXCHBTONOWMMAGNFBWFIQMIGFHLEMXZSHFUVEGRIYBJOQDJWOLOJKZAZMTYAHSKOUAIITZTTRVVDEKXSMRDPSUEG");
    msg.action = 174U;
    msg.grouplist.assign("SFYMEJKPPZZPZEURNGOLPOEJWEOMYCZGHNNFUSICCPHZDIMOKMSCRAAIFDXMCEISRXGEJMXDPWNCHODNJRMTTDIKKBISEYUVQROTLBJSNRUFHBUMPFQVEJYKORDXSWWBNSVHHKJDVHGFCWGQCYILANFWEHKTBGSQYVAWAILGNBPFLJYZWHUQWIILRZVTVLKOGBGQLXQGTDNXXYKQSOLAUUBJATRBRFQPAEOTDFYTACXJMXQUXBZVK");

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
    msg.setTimeStamp(0.780469951517);
    msg.setSource(42987U);
    msg.setSourceEntity(199U);
    msg.setDestination(4327U);
    msg.setDestinationEntity(0U);
    msg.value = 0.679405388231;
    msg.sys_src = 24683U;

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
    msg.setTimeStamp(0.124645818968);
    msg.setSource(23395U);
    msg.setSourceEntity(3U);
    msg.setDestination(55076U);
    msg.setDestinationEntity(63U);
    msg.value = 0.93017557258;
    msg.sys_src = 31219U;

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
    msg.setTimeStamp(0.717829473701);
    msg.setSource(52434U);
    msg.setSourceEntity(170U);
    msg.setDestination(44346U);
    msg.setDestinationEntity(184U);
    msg.value = 0.605890820321;
    msg.sys_src = 32315U;

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
    msg.setTimeStamp(0.455280441003);
    msg.setSource(15817U);
    msg.setSourceEntity(209U);
    msg.setDestination(359U);
    msg.setDestinationEntity(37U);
    msg.value = 0.399494205163;
    msg.units = 199U;

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
    msg.setTimeStamp(0.475374052727);
    msg.setSource(38482U);
    msg.setSourceEntity(23U);
    msg.setDestination(2299U);
    msg.setDestinationEntity(36U);
    msg.value = 0.123720425691;
    msg.units = 105U;

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
    msg.setTimeStamp(0.0320096346034);
    msg.setSource(49972U);
    msg.setSourceEntity(165U);
    msg.setDestination(26271U);
    msg.setDestinationEntity(12U);
    msg.value = 0.71180502502;
    msg.units = 235U;

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
    msg.setTimeStamp(0.955723573607);
    msg.setSource(65486U);
    msg.setSourceEntity(184U);
    msg.setDestination(51164U);
    msg.setDestinationEntity(16U);
    msg.base_lat = 0.269798193419;
    msg.base_lon = 0.937800781631;
    msg.base_time = 0.601309898629;

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
    msg.setTimeStamp(0.876062680505);
    msg.setSource(158U);
    msg.setSourceEntity(133U);
    msg.setDestination(58756U);
    msg.setDestinationEntity(60U);
    msg.base_lat = 0.958207387533;
    msg.base_lon = 0.720596846109;
    msg.base_time = 0.115326388405;
    IMC::RemoteCommand tmp_msg_0;
    tmp_msg_0.original_source = 12228U;
    tmp_msg_0.destination = 22211U;
    tmp_msg_0.timeout = 0.854168091252;
    IMC::DesiredControl tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.x = 0.0848188583097;
    tmp_tmp_msg_0_0.y = 0.0167675399315;
    tmp_tmp_msg_0_0.z = 0.291831156513;
    tmp_tmp_msg_0_0.k = 0.577560544213;
    tmp_tmp_msg_0_0.m = 0.207333705071;
    tmp_tmp_msg_0_0.n = 0.164457336783;
    tmp_tmp_msg_0_0.flags = 208U;
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
    msg.setTimeStamp(0.287273064032);
    msg.setSource(39100U);
    msg.setSourceEntity(142U);
    msg.setDestination(53974U);
    msg.setDestinationEntity(25U);
    msg.base_lat = 0.121416081246;
    msg.base_lon = 0.773405990315;
    msg.base_time = 0.296019467443;

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
    msg.setTimeStamp(0.476632694892);
    msg.setSource(10866U);
    msg.setSourceEntity(87U);
    msg.setDestination(20617U);
    msg.setDestinationEntity(120U);
    msg.base_lat = 0.643693776939;
    msg.base_lon = 0.897845731219;
    msg.base_time = 0.377155964173;
    const char tmp_msg_0[] = {-59, -48, -120, -30, 19, -32, 57, 45, -43, 68, 6, 106, -31, -61, -77, 9, -28, -54, -39, -103, -19, 83, 59, -6, 46, -109, -39, 121, 89, 30, -62, -2, -77, -39, 103, -116, 27, 84, -51, 2, -94, -30};
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
    msg.setTimeStamp(0.532389846803);
    msg.setSource(46709U);
    msg.setSourceEntity(48U);
    msg.setDestination(45105U);
    msg.setDestinationEntity(139U);
    msg.base_lat = 0.591505435098;
    msg.base_lon = 0.626163115569;
    msg.base_time = 0.420764019842;
    const char tmp_msg_0[] = {62, 28, -67, -109, 8, -110, 42, -105, -93, -16, -50, -35, -97, -3, -39, -109, 121, -87, -12, 13, 92, 92, 96, 59, -3, -69, 100, 105, 33, 56, 80, 11, 111, -128, -10, 65, 100, -10, -50, 80, -68, 41, 107, -100, -110, 42, -80, 19, 16, -76, 51, -103, 55, -86, -87, -9, 17, 92, -105, -13, -1, 67, 99, -84, 64, 24, -2, 100, -16, -117, 113, 35, 25, -97, -21, 93, 33, 23, 41, -15, 11, -56, -37, -122, 102, -99, 41, -80, -30, 20, -21, -105, 92, -74, -66, 17, -74, 23, 12, 115, -65, -87, 32, -33, -22, -105, 125, 38, -50, 123, -108, 11, 40, -120, -89, -116, -98, -112, 21, -85, -94, 108, 4, -43, 24, -34, -82, -15, 28, -9, 45, 78, 26, 20, 88, -127, -17, 85, 15, 46, 2, 27, 113, 5, -18, 120, 66, 125, -84, -20, -46, 61, -114, -2, -39, 114, 113, 102, 87, 83, 95, 119, 74};
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
    msg.setTimeStamp(0.331941076931);
    msg.setSource(24633U);
    msg.setSourceEntity(215U);
    msg.setDestination(53013U);
    msg.setDestinationEntity(47U);
    msg.base_lat = 0.153699388163;
    msg.base_lon = 0.804497498993;
    msg.base_time = 0.146954924933;
    const char tmp_msg_0[] = {-122, -119, 118, 114, -97, -88, 73, 33, 71, 2, 106, -51, 56, 119, -112, 66, -68, -37, 87, -107, -122, 61, 65, -100, -10, -112, 78, -25, -118, -51, 62, -113, -32, 86, -94, -20, 118, -62, 126, -85, -58, -51, -55, 10, 46, -25, -87, 123, 5, 23, -109, 29, -7, 89, 83, -107, 59, 93, -109, 60, 121, -126, -65, 106, -45, 121, -87, -5, -100, 96, 25, 27, -81, 80, 57, 81, 8, 113, 44, 92, -128, -113, -121, 121, 15, 56, 38, 90, 45, -9, -16, -90, -13, 10, 33, 86, 97, -73, 119, -73, -43, -25, 71, 46, 24, 115, 47, 116, -50, -102, -43, -15, -119, 103, -110, 66, -64, 103, -71, 36, -106, 72, 112, -6, 112, 92, -76, -116, -85, 112, 44, 104, 9, 49, -94, 90, 48, -106, 71, -4, -110, -91, -70, 7};
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
    msg.setTimeStamp(0.814203084275);
    msg.setSource(13409U);
    msg.setSourceEntity(106U);
    msg.setDestination(3611U);
    msg.setDestinationEntity(172U);
    msg.sys_id = 30269U;
    msg.priority = -34;
    msg.x = 3093;
    msg.y = 4434;
    msg.z = 24483;
    msg.t = -32339;
    IMC::IridiumMsgRx tmp_msg_0;
    tmp_msg_0.origin.assign("NTXLWIEKTCLOWXWEUAGSSPQYNAHVFKZUTAZUATVAQZBUSQZFSOSCPNDKJOESYLNDKAZCAPLWIHBIIIMEYSHRVLOPGBITJRSFLYOSICSFYDFYTXNVXGHVBKGPQJQAMCRWRREBQFMMEVRUHHLJDPLZKNYBLJDKMYYOPEQXTVXIDKDNOMWAUCRQTUREHGKVBYUNFMCGUNAIBIXVOCZQQGXXZNOTHFCWORBMJCK");
    tmp_msg_0.htime = 0.51461166023;
    tmp_msg_0.lat = 0.0718419358113;
    tmp_msg_0.lon = 0.78758326072;
    const char tmp_tmp_msg_0_0[] = {106, -84, -83, 123, -128, 96, 21, -89, -22, -106, -12, 76, 99, -4, 34, 78, 23, 25, -123, -56, 15, -63, -89, -23, -109, 105, 15, 91, 96, 103, -46, 111, -111, 51, -72, -38, 48, -9, 100, 103, 2, 8, -120, 5, 24, 14, -86, 113, 33, -76, 16, 38, 2, -85, 38, -7, -119, 40, 24, -124, 75, -7, -12, -66, 11, 110, 63, -76, 108, -10, -70, -74, -105, -111, 104, -44, 96, 83, 40, -111, 17, -117, -101, 91, 75, 6, 68, -74, -60, -44, -65, -107, -94, -64, 34, 121, 19, 69, -1, -21, 118, 56, -126, 68, 15, 110, 120, 76, 6, -38, -127, -120, -101, -114, 47, 125, -60, -24, 23, -81, 70, 120, -102, 98, -55, 44, 120, 85, 62, -123, 63, 92, -58, 99, -30, -90, 17, 35, 38, 6, -36, -82, 65, 120, -62, -121, -90, -109, 112, -10, -54, -33, -13, 61, 40, -102, -103, -49, 12, 21, 48, 10, 91, -110, 106, 30, -80, -90, -18, -87, -104, -94, 5, 9, -100, 72, 94, -35, -88, 79, -16, -70, 39, 39, -44, -39, -105, 96, 54, 22, -60, 75, 25, -38, -13, -39, 77, 111, 24, 1, -29, -77, 108, 115, -59, 87, 90, 94, -125, 69, 111, 48, -88, -110, -126};
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
    msg.setTimeStamp(0.471707601834);
    msg.setSource(48331U);
    msg.setSourceEntity(158U);
    msg.setDestination(10437U);
    msg.setDestinationEntity(240U);
    msg.sys_id = 38920U;
    msg.priority = -22;
    msg.x = 24056;
    msg.y = -5583;
    msg.z = -13075;
    msg.t = -22685;
    IMC::AllocatedControlTorques tmp_msg_0;
    tmp_msg_0.k = 0.974396307906;
    tmp_msg_0.m = 0.00889725873021;
    tmp_msg_0.n = 0.302612891293;
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
    msg.setTimeStamp(0.96761199136);
    msg.setSource(44219U);
    msg.setSourceEntity(54U);
    msg.setDestination(49488U);
    msg.setDestinationEntity(188U);
    msg.sys_id = 50739U;
    msg.priority = -80;
    msg.x = 4200;
    msg.y = -19071;
    msg.z = -1952;
    msg.t = -21571;
    IMC::OpticalBackscatter tmp_msg_0;
    tmp_msg_0.value = 0.0829517727932;
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
    msg.setTimeStamp(0.286275448794);
    msg.setSource(8541U);
    msg.setSourceEntity(31U);
    msg.setDestination(5057U);
    msg.setDestinationEntity(199U);
    msg.req_id = 61849U;
    msg.type = 186U;
    msg.max_size = 64005U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.396673236763;
    tmp_msg_0.base_lon = 0.770057447603;
    tmp_msg_0.base_time = 0.249137156556;
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
    msg.setTimeStamp(0.898410776197);
    msg.setSource(5022U);
    msg.setSourceEntity(231U);
    msg.setDestination(1714U);
    msg.setDestinationEntity(97U);
    msg.req_id = 39644U;
    msg.type = 165U;
    msg.max_size = 41710U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.604133477231;
    tmp_msg_0.base_lon = 0.303073786745;
    tmp_msg_0.base_time = 0.0756153693759;
    IMC::RemoteCommand tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.original_source = 8047U;
    tmp_tmp_msg_0_0.destination = 14795U;
    tmp_tmp_msg_0_0.timeout = 0.942549916305;
    IMC::Sms tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.number.assign("UJTEHTVTHYPKRAFGJDNJEFSQZMDVUZEPXNRKUZUSPPRWCDVADWOSFMTIYTPVMVUEWCYQOQZZ");
    tmp_tmp_tmp_msg_0_0_0.timeout = 58876U;
    tmp_tmp_tmp_msg_0_0_0.contents.assign("ZDKNRRZYLHCBDPHMNKFVBQBGORWHQNHQCNITMMQQNHXZBDQCFSUQJFJBCIWKAGJZMOEEGMIWAIOQYXLCRMFSJVUKUAOTDYLHXPDIZ");
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
    msg.setTimeStamp(0.236134820332);
    msg.setSource(52278U);
    msg.setSourceEntity(0U);
    msg.setDestination(28934U);
    msg.setDestinationEntity(192U);
    msg.req_id = 55993U;
    msg.type = 195U;
    msg.max_size = 45617U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.716724320069;
    tmp_msg_0.base_lon = 0.329587842394;
    tmp_msg_0.base_time = 0.5861972413;
    IMC::RemoteCommand tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.original_source = 41042U;
    tmp_tmp_msg_0_0.destination = 61300U;
    tmp_tmp_msg_0_0.timeout = 0.74887097199;
    IMC::UamRxRange tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.seq = 15333U;
    tmp_tmp_tmp_msg_0_0_0.sys.assign("EBUYUOKDBWZTUEQKSROFHTNEJUTAHQCBRJWCYKWLIYPRFVFAGOMSNFJDXTAX");
    tmp_tmp_tmp_msg_0_0_0.value = 0.602369050471;
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
    msg.setTimeStamp(0.713831944968);
    msg.setSource(18076U);
    msg.setSourceEntity(54U);
    msg.setDestination(52150U);
    msg.setDestinationEntity(46U);
    msg.original_source = 47091U;
    msg.destination = 45876U;
    msg.timeout = 0.277439322117;
    IMC::PlanTransition tmp_msg_0;
    tmp_msg_0.source_man.assign("ZWJFBHXORFYLLUKIWVTQNPCBZKXJYCJTCOGGQUNNVIFVIDLQROQAUIGHQVXGZHNOZGSCSDOWAVRKLXNSBUVKPTUHHVRKOLTAOCLREJQFSXBOFTSGAZWQHJEDNCHCEMYPEUZGICNIMDFWBTUXGCEJFZATNMYQLJYVIHYWSMWEVRATDRBSGSVWTAZKKPJCDPMNDXMQJDUIRFGRERWEEBZFUBJTYPLPBPAPLSLKAOZMHYQIKDXMNEWHPSAK");
    tmp_msg_0.dest_man.assign("CYAKPLPJWVBWWYEAWPYHQMQYBRXQBVRUYYGFXIJQSTTMKPFTJZMQOXLHZWGOHMNFDDSCGSXOMKSRFSCVOTYZQPTDVGROULLASDGBISVFPAQUMVGFCGJJUJZQZWIUNHZQRYAENSCTKAZHAMFCMTKHBHPWURKLLUZJXNBNZJVBEJRIDUAZONSEBIIRYGPNEKMJCHKDOAXXDIYUGQMVKHOPEEDODT");
    tmp_msg_0.conditions.assign("NVWMFXSJMYTNKKSMKBLIHQNNTLTYXJBKCCAIDCOEKVWWSXFPKAXDCXEOCRCDYP");
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
    msg.setTimeStamp(0.998101326863);
    msg.setSource(41015U);
    msg.setSourceEntity(193U);
    msg.setDestination(13912U);
    msg.setDestinationEntity(93U);
    msg.original_source = 22707U;
    msg.destination = 50863U;
    msg.timeout = 0.569062129619;
    IMC::Dislodge tmp_msg_0;
    tmp_msg_0.timeout = 25596U;
    tmp_msg_0.rpm = 0.421756048446;
    tmp_msg_0.direction = 31U;
    tmp_msg_0.custom.assign("NZFFNRYZLXURHFOINJIBQVTEILLBULKNZVCUDSGNEHMTQHJLPANZPWYAQDQVOLSGTCOLIIMDTGGHOBMEALJCZYOWBSBATAMKREOMZUZUHYKPMXFUGKCXWVVBKXATQECLTPHDXCXFRIUNQHJMMWPTREVKSODBEKPAMGRAVFUHSLYJIAJPKBKKUYDNDSAWOECZVDHW");
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
    msg.setTimeStamp(0.901280833888);
    msg.setSource(18755U);
    msg.setSourceEntity(5U);
    msg.setDestination(48357U);
    msg.setDestinationEntity(44U);
    msg.original_source = 31145U;
    msg.destination = 2634U;
    msg.timeout = 0.497639586601;
    IMC::Event tmp_msg_0;
    tmp_msg_0.topic.assign("LOBHEXKQKRJFWLPJVEBENEUJSRMUUMQTVCOJIRYUUGDEPLTDYZVWZHGNILOEZSAQYTKWCSQLPVVZWFIFTHBNZWJKRIGGGTBPNOQDOSSGKIXOCIGFZUCPIMN");
    tmp_msg_0.data.assign("RHAYUKPXLVDRSJBIOREHKZTLPKTQAWWPQMDGDXUOJVQXYNWRMQFYSIHKGYUEYXQJSQGTOSEVRZFZZZFNQOKSHBIIRWLYVHIYGIASLJLCDCERHVVBILNXJGMBAGNFUNMNUOHTYCOMWVZLKAACTNLILUCNEFNDEAUFOKJXRWFUGOZPJBMDAYOUGBQTCWMHMIFZCEJEEGAIBEBMXDTGWSCTKHZVPZSFXLPNDXTQSFCDXRWMHJVKBQUPVRBA");
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
    msg.setTimeStamp(0.814875172163);
    msg.setSource(7614U);
    msg.setSourceEntity(160U);
    msg.setDestination(51813U);
    msg.setDestinationEntity(116U);
    msg.type = 248U;
    msg.comm_interface = 37928U;
    msg.model = 33489U;
    msg.list.assign("WNHWMFTIRAPCTJEXURYHPTFHDPGLPVJFUKRVJOMBCNHUPGSXYZSZLVUEDPMBWUMVGYFTNVNBGEJGHRHAQIABCQOYIMVCLWWZCLVLZMIERDUIHJEGMATSHOJFIGUKIIJKGRUOXYJNSDJZYOLEQTFNXBEMOQTYEZQPSJVQAIRLXSYGKBWZXDUGPZRMCQKUCWNMKZEQCDHCTKLAIXOSOLFDTNQXKDBAVEKOAYCWA");

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
    msg.setTimeStamp(0.669158651639);
    msg.setSource(26203U);
    msg.setSourceEntity(91U);
    msg.setDestination(57989U);
    msg.setDestinationEntity(65U);
    msg.type = 99U;
    msg.comm_interface = 21597U;
    msg.model = 19528U;
    msg.list.assign("JAWPIFKGSOMUQHTDBGSPBS");

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
    msg.setTimeStamp(0.162872075059);
    msg.setSource(9108U);
    msg.setSourceEntity(98U);
    msg.setDestination(30555U);
    msg.setDestinationEntity(248U);
    msg.type = 159U;
    msg.comm_interface = 33868U;
    msg.model = 5507U;
    msg.list.assign("WFCFOPNIUWQUROCDBTPOTIQVYHAUSUR");

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
    msg.setTimeStamp(0.50185282999);
    msg.setSource(10990U);
    msg.setSourceEntity(107U);
    msg.setDestination(57696U);
    msg.setDestinationEntity(73U);
    msg.type = 197U;
    msg.req_id = 4205856091U;
    msg.ttl = 3811U;
    msg.code = 234U;
    msg.destination.assign("ZYFINMALMPCI");
    msg.source.assign("EQXMBZYJIWBNFFNEMYIEMDAHLBGDIHUOMBPFXNUCRPZDHOISTZAJNYGJFODUORSHMARRJVFJCVQHBTVLXVLXSEZAVGKSZHFYVUT");
    msg.acknowledge = 3U;
    msg.status = 239U;
    const char tmp_msg_0[] = {21, -102, 112, 126, 81, 21, -99, -99, -17, 49, 27, -85, 86, 3, -29, -38, 89, -57, -68, 69, 104, -50, -78, -8, 121, 0, -83, 35, -91, -40, -17, 94, -47, -14, -23, 24, -55, 24, -114, -71, -39, 121, -105, -96, -80, -9, 107, 125, -57, 29, 100, 81, 70, -47, 69, -38, -48, 40, 26, 52, 120, -116, -113, 86, 31, -50, 9, 45, -53, -10, 46, 75, 119, 34, -56, -25, 49, -75, 21, 76, 102, -65, 36, -64, -31, 78, 23, -21, -29, -4, -53, -101, 57, -123, -89, -71, 86, -50, 48, -41, -99, -65, -4, -74, 115, 121, 15, -55, 63, -77, 108, -50, -70, -76, 36, 106, -62, 113, 76, 48, -40, -123, 103, 116, 114, 42, -74, 11, -10, 91, -78, 93, -49, -57, -73, -67, -49, 99, -106, -23, 5, -112, 85, -93, -65, 7, 22, 35, -4, 86, 100, -63, -109, -123, 101, -24, -120, -10, -47, 108, -51, -20, 47, -66, 19, 88, 26, -109, 87, 102, 11, 14, 16, -77, -108, 21, -34, 122, -65, -100, 116, -30, 44, -33};
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
    msg.setTimeStamp(0.776930851069);
    msg.setSource(58176U);
    msg.setSourceEntity(70U);
    msg.setDestination(54349U);
    msg.setDestinationEntity(51U);
    msg.type = 242U;
    msg.req_id = 1315779517U;
    msg.ttl = 36117U;
    msg.code = 55U;
    msg.destination.assign("TFWOFYZMJQXQFJLAGHENCDZMOMSTEJDIMUXGFURJIWRLINVHSAXAOPGXCLDBIEAJLEUNNAVVYTGKRGMPOKVCVYRTKMFHKRJHUJHPSDSCRCPQOZHYABIRUQNJZZAKXXYDBFBDYVAKBTWR");
    msg.source.assign("OVJUWFTTMFJGPPCDNAZXMQMLAQQFQHCBVDCGSYVRKLTJDVEZUPGKYYQRUFQOXEDVETCWWCIRKGKXREFIJPNLNYYOIICOEOBABNPUHFBHXZTSPPWGELXCIRKSK");
    msg.acknowledge = 129U;
    msg.status = 147U;
    const char tmp_msg_0[] = {-50, 23, 19, 87, -84, -107, -126, 35, 61, -8, 54, 64, 53, 21, -33, -8, 43};
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
    msg.setTimeStamp(0.605190582938);
    msg.setSource(58821U);
    msg.setSourceEntity(15U);
    msg.setDestination(2775U);
    msg.setDestinationEntity(240U);
    msg.type = 12U;
    msg.req_id = 1702560023U;
    msg.ttl = 32086U;
    msg.code = 231U;
    msg.destination.assign("IHNAKGCEBERXJQGCIVQVYSQDRFXEFACINNFYKXJSBMNLDDISCLDSDTIARZYMMFGTPQCFVAINMZGGGFGLWYORPBTPKWHTZOZDHPALUECHZGKJUOLRAVOBWLFSRPBUOXYTUDGTXYBHOUHZKKYLVMUSM");
    msg.source.assign("YLRGKSYIARFDZUBTAHYUFGATDDPXKNLPXPMBZICHAYNSGWXUCYQHKHHKQXQJFCWEOEGMBOPFKVZUVQJDKNJWXPMOZNWIMRUMJBRNWXTZRYEYKBFFTOFETNNTELECVWGRVUWDALDMEIDSCPRZMDOLGLQFXHZSLZVCWPNIRMAOSBCIKIKGTWYJAPVE");
    msg.acknowledge = 240U;
    msg.status = 47U;
    const char tmp_msg_0[] = {-79, 10, -88, -44, 93, 85, -83, 109, -21, -12, -99, 15, -121, -46, 123, 106, -25, 77, -122, -24, -11, -96, -10, 57, 42, 102, 36, 17, 24, 112, -3, -114, -88, -96, -47, -45, 112, -115, 104, 111, -78, -111, 79, 91, -127, -39, 49, 79, 28, 83, 71, 4, -117, -40, 55, 93, -108, 53, -73, -60, -17, 23, -109, -128, -53, 103, -112, -30, -57, 66, 7, 115, -128, 15, 5, 96, -66, 56, 66, 46, -56, -79, -51, -128, 34, -21, 37, 48, 89, -54, 113, -40, -117, 57, 11, -17, -118, -90, -94, -91, -37, -13, -64, 121, -21, 110, 71, 109, -11, -75, -122, 31, -64, 107, -6, -61, 76, -54, 50, 53, 90, 99, 19, -40, 110, -93, 49, 101, 39, -30, -29, 87, 64, 93, -72, 60, 110, -117, -17, -23, 114, -54, -75, -11, -92, -114, 15, 107, 6, 20, -80, -74, 15, -11, 100, 95, -123, 46, -90, 99, -48, 81, 88, 44, 69, -58};
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
    msg.setTimeStamp(0.878862144874);
    msg.setSource(13269U);
    msg.setSourceEntity(94U);
    msg.setDestination(48857U);
    msg.setDestinationEntity(236U);
    msg.id = 89U;
    msg.range = 0.344401950706;

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
    msg.setTimeStamp(0.792119652531);
    msg.setSource(23660U);
    msg.setSourceEntity(125U);
    msg.setDestination(57075U);
    msg.setDestinationEntity(152U);
    msg.id = 4U;
    msg.range = 0.44033190635;

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
    msg.setTimeStamp(0.560606031586);
    msg.setSource(63577U);
    msg.setSourceEntity(68U);
    msg.setDestination(21106U);
    msg.setDestinationEntity(129U);
    msg.id = 183U;
    msg.range = 0.992200752725;

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
    msg.setTimeStamp(0.460673704695);
    msg.setSource(37625U);
    msg.setSourceEntity(49U);
    msg.setDestination(42852U);
    msg.setDestinationEntity(168U);
    msg.beacon.assign("UNPIVCNWTGCCPNLAXPVQOMKMDEJAYEYYVIVBBRHXCRFXTYDRGXMWINIWMEWNOPCOBTEODRCCFVPKWPFFKGBJRFTTIZHLZLBJSYBZGNDARNSLZXISVATV");
    msg.lat = 0.0211363082713;
    msg.lon = 0.252778315965;
    msg.depth = 0.640864078063;
    msg.query_channel = 243U;
    msg.reply_channel = 110U;
    msg.transponder_delay = 218U;

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
    msg.setTimeStamp(0.589358756619);
    msg.setSource(41169U);
    msg.setSourceEntity(192U);
    msg.setDestination(2757U);
    msg.setDestinationEntity(251U);
    msg.beacon.assign("ORHIPJRIDSKOJTZEFIRGJHLPMEKDNYGIVYNWDURTRABUPKQQYSJEZXMQDBAFIDBXXSEVFQWNSACCCQXYJYPWXFGEATGNMENABTULVZFUIGBKXCRZUULVJTWZCU");
    msg.lat = 0.0717728052763;
    msg.lon = 0.330632433794;
    msg.depth = 0.237501151481;
    msg.query_channel = 199U;
    msg.reply_channel = 91U;
    msg.transponder_delay = 54U;

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
    msg.setTimeStamp(0.887112406365);
    msg.setSource(16584U);
    msg.setSourceEntity(192U);
    msg.setDestination(26126U);
    msg.setDestinationEntity(254U);
    msg.beacon.assign("QMLMRUOLFAJYNUGZOEWXCAOODVLAMRTBEQSDCTWHPTDLYSPDKZVIQNEKBXBSIWZTGTAJHSHGRUYIHASTGBARDJIGUECJQNWZCAQHRXDLNIXFTSBHHPFKBKMWJKPZBBWRQXDFQP");
    msg.lat = 0.280960567868;
    msg.lon = 0.188615688149;
    msg.depth = 0.277122969944;
    msg.query_channel = 43U;
    msg.reply_channel = 38U;
    msg.transponder_delay = 36U;

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
    msg.setTimeStamp(0.0153186805808);
    msg.setSource(12415U);
    msg.setSourceEntity(76U);
    msg.setDestination(6132U);
    msg.setDestinationEntity(246U);
    msg.op = 207U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("XITCIRXVHSONOLOIYUBONFXLWMZGIWQXVDUNQPZNSVBQZBTJRPWWJUVQFVXG");
    tmp_msg_0.lat = 0.920775598415;
    tmp_msg_0.lon = 0.239228203393;
    tmp_msg_0.depth = 0.352798517436;
    tmp_msg_0.query_channel = 204U;
    tmp_msg_0.reply_channel = 106U;
    tmp_msg_0.transponder_delay = 120U;
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
    msg.setTimeStamp(0.387595991407);
    msg.setSource(34377U);
    msg.setSourceEntity(98U);
    msg.setDestination(16840U);
    msg.setDestinationEntity(89U);
    msg.op = 243U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("IFOSTAUXLQGAQCDNJZABQBEHAIAGFPMLGFNHTXZI");
    tmp_msg_0.lat = 0.57930668024;
    tmp_msg_0.lon = 0.104612424895;
    tmp_msg_0.depth = 0.728009736106;
    tmp_msg_0.query_channel = 248U;
    tmp_msg_0.reply_channel = 221U;
    tmp_msg_0.transponder_delay = 194U;
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
    msg.setTimeStamp(0.240950317935);
    msg.setSource(5428U);
    msg.setSourceEntity(34U);
    msg.setDestination(7892U);
    msg.setDestinationEntity(101U);
    msg.op = 196U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("ALBYDDJASBXVHYRQEYLLPDIWWRDCRCRNWJGTEIZVVMKDTZQXLMZTDGEKWPUFMGOCEFNOPRXJPRZGIMKYCBQAYWCCLNNFSJJGUZVSTPSUUOGONXBAQALAFMKWSSLLZIOREMHNDHKYPZFIPROUXQVNKZYTEFRQBVSNA");
    tmp_msg_0.lat = 0.880686755145;
    tmp_msg_0.lon = 0.191258278501;
    tmp_msg_0.depth = 0.594594621788;
    tmp_msg_0.query_channel = 69U;
    tmp_msg_0.reply_channel = 11U;
    tmp_msg_0.transponder_delay = 109U;
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
    msg.setTimeStamp(0.527486099529);
    msg.setSource(56988U);
    msg.setSourceEntity(215U);
    msg.setDestination(20910U);
    msg.setDestinationEntity(248U);
    IMC::Elevator tmp_msg_0;
    tmp_msg_0.timeout = 53890U;
    tmp_msg_0.flags = 109U;
    tmp_msg_0.lat = 0.326382566258;
    tmp_msg_0.lon = 0.282581078992;
    tmp_msg_0.start_z = 0.934704717407;
    tmp_msg_0.start_z_units = 199U;
    tmp_msg_0.end_z = 0.162715099568;
    tmp_msg_0.end_z_units = 249U;
    tmp_msg_0.radius = 0.98541155077;
    tmp_msg_0.speed = 0.112250162962;
    tmp_msg_0.speed_units = 149U;
    tmp_msg_0.custom.assign("TPVKEAQGMHQHSNMSYFIQRVVODBZGVVHJUAGTOZLMSWFQIMGXFCJYLURFEZTWONM");
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
    msg.setTimeStamp(0.284430681145);
    msg.setSource(44800U);
    msg.setSourceEntity(242U);
    msg.setDestination(55819U);
    msg.setDestinationEntity(226U);
    IMC::CacheControl tmp_msg_0;
    tmp_msg_0.op = 230U;
    tmp_msg_0.snapshot.assign("MNBXOKAPXPLGBFSTDXUMVZHWZGVZYRWCSLKJZEQRKD");
    IMC::Pulse tmp_tmp_msg_0_0;
    tmp_msg_0.message.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.168565494321);
    msg.setSource(1757U);
    msg.setSourceEntity(223U);
    msg.setDestination(61345U);
    msg.setDestinationEntity(150U);
    IMC::SmsTx tmp_msg_0;
    tmp_msg_0.seq = 1874314266U;
    tmp_msg_0.destination.assign("XNCPJKKKEMGTWIBIBAGFHJGNCBFVLUCQUCLYQITXULJIBJEHHXKIRZLMDOQIWLRARCUQBYNAWKWYFGXSENQSBPMQTZSNVWTHGDIPYQPICEQNTARVGSZDVVTGSUAFEAQPRTHFPWJUGPZPHXFNNYOUMOWYXSDGHJRSSBORRYOOJKVCAFWWMMAB");
    tmp_msg_0.timeout = 31416U;
    const char tmp_tmp_msg_0_0[] = {-22, 54, 58, -1, 46, 121, -100, -98, -81, -37, 8, 54, -95, -85, -31, -7, 69, 89, 85, -40, -124, 66, -115, 65, -110, -34, 77, 75, 20, 92, 46, 65, 72, 118, -65, -65, -112, 16, -59, 16, 124, -17, -100, -40, 80, -127, 101, 79, 110, 82, -49, -9, 121, -128, 10, 41, 106, -63, 77, 41, -55, -98, 29, -26, -118, 3, -126, 107, -20, -54, -30, -68, -20, 44, 12, 44, -82, 124, 78, 57, -57, -91, -107, 87, 30, -13, -107, -5, 106, 126, -62, -21, 84, -77, -88, 62, -87, -15, 103, 87, 126, 86, -28, -81, -37, 117, 57, 110, -54, 78, 16, 30, 120, 98, 79, 86, -62, 106, 84, -59, -77, 49, 109, -61, 37, -119, -47, 121, -9, 52};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.680686427516);
    msg.setSource(57051U);
    msg.setSourceEntity(40U);
    msg.setDestination(41188U);
    msg.setDestinationEntity(250U);
    msg.op = 16U;
    msg.system.assign("LFEVHVLZNOWJPKVMHYLHHBEQCWXTELDULPYIRGROOKUHMCZHUOQXAGQQBPXZWWRKMFORKZCBSZBBAPOFXAPMYCBUHBCSMQEDBKFJDOQYSTTKSTVRYEGSJDYKUKRIICGZIMDKARSRVHDZNQASIJPGDLWINJMFCFQSFJTXHGNGEOMRIIFWKVVOTWCYEUMLNTJLRATUBXVYNENPVXGXOZPAQAAYINWESCNTTLUGJWEPLMPDJUSFDVQAGXNHFBZCI");
    msg.range = 0.902846784768;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.0399794586483;
    tmp_msg_0.y = 0.414173302398;
    tmp_msg_0.z = 0.607056141792;
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
    msg.setTimeStamp(0.236612883197);
    msg.setSource(61440U);
    msg.setSourceEntity(146U);
    msg.setDestination(22207U);
    msg.setDestinationEntity(208U);
    msg.op = 120U;
    msg.system.assign("BVHIODIPEQVWOAWBCKPRNFJVTGTCEASXUVYOZONDSGMHXLHYTMYBJKBJJJYNRDBEICJVTCXFDLSZYQTKUGUPJULQVOAKZPWARQWRMEDNLRAKMYEPXRRWYNDSEBEUMPTGYELQUVTZPCUZHKKOUMVKCQIKZWUWXNQURZQNHDMZFOJBNGSFGFTLNHKPZBIISNEIGMPYSCWYCWJIDQBLAAHTVZVGQMXLPXMRFECOAXDHC");
    msg.range = 0.272671762375;
    IMC::EntityActivationState tmp_msg_0;
    tmp_msg_0.state = 137U;
    tmp_msg_0.error.assign("ZYBUMHAXHWUQJDIIGUPJFSVTWKKMHUFNVGEYFOXVSAVMWAEPVFDQHTORBBQEDJYMGCFWLIEAZSNKHQKXIFCACGQPAJOJMGYZNNKWVQEYSYFMSIOYZCGXCGTAPIIZLIWBSQUEGBHXNLOORBIHUWVMEQHRJEMCRXCREOTSUTKNCTDSXJURWDWZDLAAVCUGPYYOJITLJUHQKRPDLQFNBZOPALKRRWKXLMSRBDZLSZNHKVJCBPEN");
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
    msg.setTimeStamp(0.492718835188);
    msg.setSource(58184U);
    msg.setSourceEntity(225U);
    msg.setDestination(2139U);
    msg.setDestinationEntity(101U);
    msg.op = 227U;
    msg.system.assign("NYHMPJAZLNAPOGUCEELXLQFRMIVQZLYMDZFCGKSANLBUCYFACEJRRZKHZUSPNQQZRKJWKCRBBPVFOKRCGLLYEUYTQNPGEXVMQIZNJQVVQHAKDHSCDDUJPUAHJBYYCVWO");
    msg.range = 0.235967681619;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 49557U;
    tmp_msg_0.off_x = 0.0151693935878;
    tmp_msg_0.off_y = 0.000837436995449;
    tmp_msg_0.off_z = 0.536712254881;
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
    msg.setTimeStamp(0.354209140461);
    msg.setSource(55250U);
    msg.setSourceEntity(185U);
    msg.setDestination(30993U);
    msg.setDestinationEntity(62U);

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
    msg.setTimeStamp(0.373362207051);
    msg.setSource(16340U);
    msg.setSourceEntity(210U);
    msg.setDestination(29377U);
    msg.setDestinationEntity(36U);

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
    msg.setTimeStamp(0.511869157879);
    msg.setSource(33622U);
    msg.setSourceEntity(0U);
    msg.setDestination(24098U);
    msg.setDestinationEntity(65U);

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
    msg.setTimeStamp(0.519230334817);
    msg.setSource(61840U);
    msg.setSourceEntity(185U);
    msg.setDestination(64801U);
    msg.setDestinationEntity(94U);
    msg.list.assign("KRFDLYMIYSZPOCABOTXMRXBSJJGITQCZBMNEVWCVCYBUMSKHGKETXSOSVJVWFJJUHSQCUKDIZVNERCYODHAKDCGUYINTDOKQLOHAPKBNHPPRIEBUACSGDXRNBTMQMEQHUIDZQAXRJBWEWVWDWXQYEJNMOIEMHXJPXUVLWQKFTAFEZGIGHFRSZLTTPJGLAMDEPATFBKNRAXNWHYS");

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
    msg.setTimeStamp(0.54430394235);
    msg.setSource(4848U);
    msg.setSourceEntity(63U);
    msg.setDestination(34530U);
    msg.setDestinationEntity(250U);
    msg.list.assign("GZJCXNOAADVDQEBKULBPSNKLGGPCNUWFXCFHSJKXGPPMTUDJXKUHZIDDXMDKTMYRJCHNVLNVVBOZ");

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
    msg.setTimeStamp(0.306531012053);
    msg.setSource(13260U);
    msg.setSourceEntity(105U);
    msg.setDestination(15314U);
    msg.setDestinationEntity(157U);
    msg.list.assign("WUKPWTBYYIZERPWQIDHZAJDSLLKIATZITJGOUTDSNHEJFKDKVECMUVRXSNZEXCJLTOMQXFMNNRHSJEZUEDPEHLFWCPYARSYFSXVLXMYHDVBKHPBGXVC");

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
    msg.setTimeStamp(0.459458575281);
    msg.setSource(22153U);
    msg.setSourceEntity(20U);
    msg.setDestination(23519U);
    msg.setDestinationEntity(224U);
    msg.peer.assign("MLDLOQCVHRJSMSKVXONFFHXXGLDJFGPKBYZWPUWIROAOZTKPPNIZDKOVZBACZBQQTTLHITKISLYOSFZKFENGATUNCRIJZSFWDRQQATYSHBURNMQJVXPXJFJEYVDSCMIPTUFCCHEFLVYUNISZYQ");
    msg.rssi = 0.158024576356;
    msg.integrity = 22729U;

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
    msg.setTimeStamp(0.0334959414876);
    msg.setSource(38516U);
    msg.setSourceEntity(96U);
    msg.setDestination(12783U);
    msg.setDestinationEntity(177U);
    msg.peer.assign("VOIAZWDPTFVAGEFEQPEMKMROKDWMAPBRJOQUUBAMLRPRBXCUSFOGNWTIVJCJTELKGSZHOTGYEPXBUGUUYOWYMLAWBESXNWLAJDIGIALRXQJCSLPYYKDCZJCNZJBGQMTBMOTMTENSZXFRTQLROYSEMPPJFXXKZDWVXZOTIQHQFVGZNSSIGICFXVDANDSULANOUWYLKJWQKVHTCJYNNYFHDCEPLSHQWKCZ");
    msg.rssi = 0.684153238456;
    msg.integrity = 16842U;

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
    msg.setTimeStamp(0.989878296912);
    msg.setSource(56227U);
    msg.setSourceEntity(75U);
    msg.setDestination(59909U);
    msg.setDestinationEntity(162U);
    msg.peer.assign("RJUWTXCZOXPNSGRIBWEGHFGDSNWPVEHLGFGCNWHNPGKWEJRLZWNMUJVDTKADDLLYZTUKBOCBMLWGWBQKKPHPKHOQNQCYSLTXUMOFSVICJHDVLJXVOTQIIACGFFPEIKHSDERXBTMNESGRKOBRPZDFDRMALAYYXJFOOOPPDNUIDVQVCZWYJFMTMIXKIZUYRZTLSHCBFSPMSIUEHANVUUBIKYNRAV");
    msg.rssi = 0.495483628892;
    msg.integrity = 44709U;

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
    msg.setTimeStamp(0.455499881278);
    msg.setSource(21707U);
    msg.setSourceEntity(141U);
    msg.setDestination(47427U);
    msg.setDestinationEntity(145U);
    msg.req_id = 25036U;
    msg.destination.assign("WNSHDAKDWEOXGKTYLYPSQPYJKNBTMAZXINHNHTSEMZZESVYYGVRVMPFHBLKZWACHQDXWHYPPQOIXUKLNOCHARZCONOGFRDIRFWUJQSROVFPIFGVBIESETMBEIYJZIAZCGJNSEBNQUYMRVUBTAOTRRAACGJMUKXFDGTGTLIMRZDWYDXWDQBSUBYZZJCFEUFLUUXVJSHDPFCIDNAWPXCPJSKL");
    msg.timeout = 0.964716258816;
    msg.range = 0.108390513098;
    msg.type = 74U;
    IMC::Tachograph tmp_msg_0;
    tmp_msg_0.timestamp_last_service = 0.977667774963;
    tmp_msg_0.time_next_service = 0.904472691877;
    tmp_msg_0.time_motor_next_service = 0.475492321978;
    tmp_msg_0.time_idle_ground = 0.655175650769;
    tmp_msg_0.time_idle_air = 0.0508129570069;
    tmp_msg_0.time_idle_water = 0.646677565293;
    tmp_msg_0.time_idle_underwater = 0.979078973381;
    tmp_msg_0.time_idle_unknown = 0.0717404594641;
    tmp_msg_0.time_motor_ground = 0.573179090581;
    tmp_msg_0.time_motor_air = 0.519267982273;
    tmp_msg_0.time_motor_water = 0.0777421628805;
    tmp_msg_0.time_motor_underwater = 0.250507660313;
    tmp_msg_0.time_motor_unknown = 0.107408256564;
    tmp_msg_0.rpm_min = 3557;
    tmp_msg_0.rpm_max = -372;
    tmp_msg_0.depth_max = 0.158640983709;
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
    msg.setTimeStamp(0.0814285504429);
    msg.setSource(33228U);
    msg.setSourceEntity(172U);
    msg.setDestination(14980U);
    msg.setDestinationEntity(102U);
    msg.req_id = 48939U;
    msg.destination.assign("LKNFWSCBKSHIQOGOVWWMPQEIPQAFLJEWGZRLCOYXSLQIRBKVYCGDNBZDGTJLQWXAKUIVLAROGSVPHTDAXAJMJBRGZWEYJINVMEXOYLYQUEIPYFNIRSTTEGFJNJXXPBBRJTGOYNZVZGKMNAHELXAUCUVD");
    msg.timeout = 0.00975549873253;
    msg.range = 0.716303775087;
    msg.type = 106U;
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("JHVHWFVKQO");
    tmp_msg_0.sys_type = 97U;
    tmp_msg_0.owner = 61703U;
    tmp_msg_0.lat = 0.44224569321;
    tmp_msg_0.lon = 0.679144318334;
    tmp_msg_0.height = 0.272917582413;
    tmp_msg_0.services.assign("IGEHJJDYCXVYXNBCWIWAFHMKEFTUTPPQXHFLQUIYYDIJKXWXUOQYVDKPRRMIOWCCNPBCMDASZZRBKZSTAASSNQAVSKJTELGXIROXYYVGUFZOJFKAEZVTQBPBHDQBNCPUHMGNAVVNDVCVWXLKNLJMZKMMLGPCLDRGZRHNGDUSRYHELLLORZIERKETTKZDJ");
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
    msg.setTimeStamp(0.465599633587);
    msg.setSource(47763U);
    msg.setSourceEntity(21U);
    msg.setDestination(734U);
    msg.setDestinationEntity(17U);
    msg.req_id = 46664U;
    msg.destination.assign("YDQNPABDUMHCWNVAOKIOQQFLLYONAFJFJUWRXOHEGVUMGHENIFXALHSBY");
    msg.timeout = 0.929147955647;
    msg.range = 0.93781116542;
    msg.type = 119U;
    IMC::AnnounceService tmp_msg_0;
    tmp_msg_0.service.assign("VLOBHCLWDQLNTRQEHRRKENZBPQPUCJSHCZODLGPCYXDIIKVXTZEQRDFZGKMJDFOZIMXBFHCYHMBGUSOQWMJJXMDCTATFSBEHTGWIFWZRKYUTAXKFOPWXJTZLHSXDROIKSRAUAOYUNGLKSMFUAOBWJHNCWLUJJFCBASKKAGPBCMIIDYQVJYSMCVQOQGIEZWIBPUPGOLTADYXNWWUVSAVEDNNXRZLFEQVYTVN");
    tmp_msg_0.service_type = 55U;
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
    msg.setTimeStamp(0.750198209498);
    msg.setSource(12757U);
    msg.setSourceEntity(167U);
    msg.setDestination(9563U);
    msg.setDestinationEntity(17U);
    msg.req_id = 58691U;
    msg.type = 172U;
    msg.status = 208U;
    msg.info.assign("PUSDONHYBSDBGJLRWUREAKFBDKBAFYQIGLXHOUEJJOLGUHZECXUCHOMIKNUEXTIASYQKVCKJGJYRLJAXVTLSNBEYVGQHTYHMCFRAETRWSBTDZWPKIRCLSKFLMNEYDSQP");
    msg.range = 0.791341587776;

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
    msg.setTimeStamp(0.93639708861);
    msg.setSource(52391U);
    msg.setSourceEntity(15U);
    msg.setDestination(46202U);
    msg.setDestinationEntity(33U);
    msg.req_id = 14182U;
    msg.type = 167U;
    msg.status = 208U;
    msg.info.assign("DAKACXQMWNFIWYDMALSZXFMLOBZQXOIWGMOZKINUDUABOVVHXTXCMDZZEFNVFAICGGRBMTPNDAVENGBOJNIDLWRCJVIJCULEYOXFLTJJUHVTMOSMFXUPNBFPORUTYRYCZUQNQHIHEWKRT");
    msg.range = 0.78198958527;

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
    msg.setTimeStamp(0.376767666296);
    msg.setSource(13302U);
    msg.setSourceEntity(86U);
    msg.setDestination(25897U);
    msg.setDestinationEntity(239U);
    msg.req_id = 47243U;
    msg.type = 125U;
    msg.status = 86U;
    msg.info.assign("QSGRTVPNTTCEAIMEIAMUUGBNLSDYHVAJOWHOYMMYVEPYPBCFGBTNOULRMEHLJTULOQXKYXPTWEJRHMEFQBEQKHYIIBBDHRJMTHTISFLOKZCZZCJYFXWQWGXOQZMVBAVSDVWFURUSYNABEKTHUCNZXGGDXIAENPDXUPKRJRLOFZJAWYBXFRSOGADNKIJNBW");
    msg.range = 0.517369501026;

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
    msg.setTimeStamp(0.991628376238);
    msg.setSource(33304U);
    msg.setSourceEntity(162U);
    msg.setDestination(59275U);
    msg.setDestinationEntity(12U);
    msg.value = 31777;

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
    msg.setTimeStamp(0.245559733438);
    msg.setSource(12158U);
    msg.setSourceEntity(116U);
    msg.setDestination(38601U);
    msg.setDestinationEntity(220U);
    msg.value = -29474;

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
    msg.setTimeStamp(0.332297042721);
    msg.setSource(22422U);
    msg.setSourceEntity(164U);
    msg.setDestination(28586U);
    msg.setDestinationEntity(3U);
    msg.value = -4070;

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
    msg.setTimeStamp(0.0339807366381);
    msg.setSource(42347U);
    msg.setSourceEntity(110U);
    msg.setDestination(62150U);
    msg.setDestinationEntity(53U);
    msg.value = 0.616971457867;

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
    msg.setTimeStamp(0.442671720337);
    msg.setSource(12907U);
    msg.setSourceEntity(218U);
    msg.setDestination(35555U);
    msg.setDestinationEntity(250U);
    msg.value = 0.170648684163;

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
    msg.setTimeStamp(0.947960783426);
    msg.setSource(45810U);
    msg.setSourceEntity(111U);
    msg.setDestination(23878U);
    msg.setDestinationEntity(205U);
    msg.value = 0.415849213905;

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
    msg.setTimeStamp(0.822656144287);
    msg.setSource(57259U);
    msg.setSourceEntity(12U);
    msg.setDestination(64188U);
    msg.setDestinationEntity(115U);
    msg.value = 0.722000251566;

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
    msg.setTimeStamp(0.414398378892);
    msg.setSource(63695U);
    msg.setSourceEntity(160U);
    msg.setDestination(8307U);
    msg.setDestinationEntity(111U);
    msg.value = 0.415425624691;

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
    msg.setTimeStamp(0.375138394841);
    msg.setSource(50301U);
    msg.setSourceEntity(138U);
    msg.setDestination(14971U);
    msg.setDestinationEntity(205U);
    msg.value = 0.32636540108;

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
    msg.setTimeStamp(0.111269082166);
    msg.setSource(21114U);
    msg.setSourceEntity(210U);
    msg.setDestination(6864U);
    msg.setDestinationEntity(205U);
    msg.validity = 16470U;
    msg.type = 94U;
    msg.utc_year = 17075U;
    msg.utc_month = 104U;
    msg.utc_day = 234U;
    msg.utc_time = 0.0419980370216;
    msg.lat = 0.60034338871;
    msg.lon = 0.310227491073;
    msg.height = 0.698391996589;
    msg.satellites = 167U;
    msg.cog = 0.253961768425;
    msg.sog = 0.739782239984;
    msg.hdop = 0.732669405672;
    msg.vdop = 0.461484211674;
    msg.hacc = 0.59149761674;
    msg.vacc = 0.179058025896;

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
    msg.setTimeStamp(0.565226571532);
    msg.setSource(15181U);
    msg.setSourceEntity(12U);
    msg.setDestination(63011U);
    msg.setDestinationEntity(193U);
    msg.validity = 12900U;
    msg.type = 73U;
    msg.utc_year = 64418U;
    msg.utc_month = 184U;
    msg.utc_day = 186U;
    msg.utc_time = 0.163329025823;
    msg.lat = 0.246041991824;
    msg.lon = 0.479793557005;
    msg.height = 0.0376830625238;
    msg.satellites = 199U;
    msg.cog = 0.483957277941;
    msg.sog = 0.924329179115;
    msg.hdop = 0.697477603067;
    msg.vdop = 0.314140634112;
    msg.hacc = 0.360087940417;
    msg.vacc = 0.939693637054;

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
    msg.setTimeStamp(0.997862090789);
    msg.setSource(26291U);
    msg.setSourceEntity(61U);
    msg.setDestination(6625U);
    msg.setDestinationEntity(66U);
    msg.validity = 53751U;
    msg.type = 120U;
    msg.utc_year = 13204U;
    msg.utc_month = 176U;
    msg.utc_day = 242U;
    msg.utc_time = 0.646729659567;
    msg.lat = 0.0144091782105;
    msg.lon = 0.0208420571577;
    msg.height = 0.195180701838;
    msg.satellites = 225U;
    msg.cog = 0.47353762561;
    msg.sog = 0.0495199105612;
    msg.hdop = 0.136291508859;
    msg.vdop = 0.249570591785;
    msg.hacc = 0.605514439049;
    msg.vacc = 0.865681203526;

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
    msg.setTimeStamp(0.36480589305);
    msg.setSource(60123U);
    msg.setSourceEntity(248U);
    msg.setDestination(44U);
    msg.setDestinationEntity(57U);
    msg.time = 0.36167273007;
    msg.phi = 0.634463848704;
    msg.theta = 0.232482585308;
    msg.psi = 0.998765508898;
    msg.psi_magnetic = 0.107255608288;

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
    msg.setTimeStamp(0.0945935478425);
    msg.setSource(22573U);
    msg.setSourceEntity(153U);
    msg.setDestination(47635U);
    msg.setDestinationEntity(116U);
    msg.time = 0.10561602137;
    msg.phi = 0.720221321802;
    msg.theta = 0.666550509648;
    msg.psi = 0.981227846268;
    msg.psi_magnetic = 0.304638040735;

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
    msg.setTimeStamp(0.268719619581);
    msg.setSource(1108U);
    msg.setSourceEntity(192U);
    msg.setDestination(63295U);
    msg.setDestinationEntity(224U);
    msg.time = 0.283901319326;
    msg.phi = 0.227582155876;
    msg.theta = 0.45958150467;
    msg.psi = 0.0808106754961;
    msg.psi_magnetic = 0.873546268531;

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
    msg.setTimeStamp(0.92255036395);
    msg.setSource(5022U);
    msg.setSourceEntity(81U);
    msg.setDestination(12645U);
    msg.setDestinationEntity(108U);
    msg.time = 0.898168439738;
    msg.x = 0.0779815409322;
    msg.y = 0.982011398829;
    msg.z = 0.771589298196;
    msg.timestep = 0.413877160488;

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
    msg.setTimeStamp(0.249880734083);
    msg.setSource(8524U);
    msg.setSourceEntity(40U);
    msg.setDestination(21659U);
    msg.setDestinationEntity(25U);
    msg.time = 0.437627177262;
    msg.x = 0.91692521912;
    msg.y = 0.593053670787;
    msg.z = 0.610449413073;
    msg.timestep = 0.0897887636114;

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
    msg.setTimeStamp(0.113642709692);
    msg.setSource(30554U);
    msg.setSourceEntity(25U);
    msg.setDestination(43649U);
    msg.setDestinationEntity(184U);
    msg.time = 0.763431298651;
    msg.x = 0.588548437645;
    msg.y = 0.154938190454;
    msg.z = 0.957040077751;
    msg.timestep = 0.232859437217;

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
    msg.setTimeStamp(0.629426373038);
    msg.setSource(49954U);
    msg.setSourceEntity(46U);
    msg.setDestination(52524U);
    msg.setDestinationEntity(74U);
    msg.time = 0.88999570364;
    msg.x = 0.490668985094;
    msg.y = 0.678515387806;
    msg.z = 0.264935598444;

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
    msg.setTimeStamp(0.0713151538819);
    msg.setSource(37845U);
    msg.setSourceEntity(234U);
    msg.setDestination(63745U);
    msg.setDestinationEntity(11U);
    msg.time = 0.272773185595;
    msg.x = 0.364806588093;
    msg.y = 0.558252547399;
    msg.z = 0.219564500615;

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
    msg.setTimeStamp(0.97831496886);
    msg.setSource(60022U);
    msg.setSourceEntity(132U);
    msg.setDestination(1486U);
    msg.setDestinationEntity(105U);
    msg.time = 0.34062132193;
    msg.x = 0.182904806859;
    msg.y = 0.611019654436;
    msg.z = 0.431524176775;

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
    msg.setTimeStamp(0.990010535327);
    msg.setSource(13836U);
    msg.setSourceEntity(79U);
    msg.setDestination(43579U);
    msg.setDestinationEntity(249U);
    msg.time = 0.925510788916;
    msg.x = 0.874273933441;
    msg.y = 0.0853248549515;
    msg.z = 0.89999449814;

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
    msg.setTimeStamp(0.891921917765);
    msg.setSource(45709U);
    msg.setSourceEntity(233U);
    msg.setDestination(10875U);
    msg.setDestinationEntity(170U);
    msg.time = 0.76366399524;
    msg.x = 0.660132784871;
    msg.y = 0.113073965893;
    msg.z = 0.885726517257;

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
    msg.setTimeStamp(0.813902513899);
    msg.setSource(30232U);
    msg.setSourceEntity(233U);
    msg.setDestination(780U);
    msg.setDestinationEntity(66U);
    msg.time = 0.77407114817;
    msg.x = 0.105288004512;
    msg.y = 0.541947184049;
    msg.z = 0.634661175963;

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
    msg.setTimeStamp(0.117733935994);
    msg.setSource(8513U);
    msg.setSourceEntity(37U);
    msg.setDestination(1499U);
    msg.setDestinationEntity(217U);
    msg.time = 0.971416119908;
    msg.x = 0.040819697716;
    msg.y = 0.629901076311;
    msg.z = 0.432293630538;

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
    msg.setTimeStamp(0.319053697063);
    msg.setSource(54715U);
    msg.setSourceEntity(124U);
    msg.setDestination(23443U);
    msg.setDestinationEntity(204U);
    msg.time = 0.455620119109;
    msg.x = 0.892926664783;
    msg.y = 0.177449111392;
    msg.z = 0.382492680597;

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
    msg.setTimeStamp(0.798127169279);
    msg.setSource(63117U);
    msg.setSourceEntity(173U);
    msg.setDestination(5561U);
    msg.setDestinationEntity(241U);
    msg.time = 0.616343351913;
    msg.x = 0.848462383004;
    msg.y = 0.562246651762;
    msg.z = 0.480268542346;

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
    msg.setTimeStamp(0.100662127471);
    msg.setSource(62028U);
    msg.setSourceEntity(108U);
    msg.setDestination(29203U);
    msg.setDestinationEntity(100U);
    msg.validity = 76U;
    msg.x = 0.873359317499;
    msg.y = 0.0113357631928;
    msg.z = 0.180863659242;

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
    msg.setTimeStamp(0.458111458061);
    msg.setSource(7048U);
    msg.setSourceEntity(171U);
    msg.setDestination(28223U);
    msg.setDestinationEntity(132U);
    msg.validity = 127U;
    msg.x = 0.459613916031;
    msg.y = 0.958736003885;
    msg.z = 0.0183836596124;

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
    msg.setTimeStamp(0.146508865595);
    msg.setSource(2489U);
    msg.setSourceEntity(38U);
    msg.setDestination(29110U);
    msg.setDestinationEntity(135U);
    msg.validity = 31U;
    msg.x = 0.555672804873;
    msg.y = 0.440758300613;
    msg.z = 0.96108984246;

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
    msg.setTimeStamp(0.943299863473);
    msg.setSource(49245U);
    msg.setSourceEntity(83U);
    msg.setDestination(14376U);
    msg.setDestinationEntity(103U);
    msg.validity = 242U;
    msg.x = 0.79503244252;
    msg.y = 0.0886832481523;
    msg.z = 0.409952992586;

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
    msg.setTimeStamp(0.941559373321);
    msg.setSource(21259U);
    msg.setSourceEntity(85U);
    msg.setDestination(11491U);
    msg.setDestinationEntity(56U);
    msg.validity = 94U;
    msg.x = 0.81684635082;
    msg.y = 0.504276166115;
    msg.z = 0.23039703102;

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
    msg.setTimeStamp(0.358259296387);
    msg.setSource(34496U);
    msg.setSourceEntity(153U);
    msg.setDestination(21653U);
    msg.setDestinationEntity(25U);
    msg.validity = 54U;
    msg.x = 0.548844120055;
    msg.y = 0.575557601969;
    msg.z = 0.0263455178475;

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
    msg.setTimeStamp(0.373811829286);
    msg.setSource(48864U);
    msg.setSourceEntity(31U);
    msg.setDestination(19414U);
    msg.setDestinationEntity(85U);
    msg.time = 0.820264531971;
    msg.x = 0.414793826679;
    msg.y = 0.0217490879697;
    msg.z = 0.955455100618;

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
    msg.setTimeStamp(0.272383187307);
    msg.setSource(24273U);
    msg.setSourceEntity(12U);
    msg.setDestination(50700U);
    msg.setDestinationEntity(58U);
    msg.time = 0.23288629288;
    msg.x = 0.999118712855;
    msg.y = 0.070277358672;
    msg.z = 0.0140558533781;

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
    msg.setTimeStamp(0.343480627044);
    msg.setSource(16188U);
    msg.setSourceEntity(1U);
    msg.setDestination(3866U);
    msg.setDestinationEntity(247U);
    msg.time = 0.100845461328;
    msg.x = 0.913843391075;
    msg.y = 0.654205472721;
    msg.z = 0.482861674779;

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
    msg.setTimeStamp(0.122151293556);
    msg.setSource(39179U);
    msg.setSourceEntity(152U);
    msg.setDestination(12001U);
    msg.setDestinationEntity(92U);
    msg.validity = 177U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.908176351651;
    tmp_msg_0.y = 0.0130231791976;
    tmp_msg_0.z = 0.404628655092;
    tmp_msg_0.phi = 0.328139957108;
    tmp_msg_0.theta = 0.20223213622;
    tmp_msg_0.psi = 0.0953318396503;
    msg.location.push_back(tmp_msg_0);
    IMC::BeamConfig tmp_msg_1;
    tmp_msg_1.beam_width = 0.651276100338;
    tmp_msg_1.beam_height = 0.480649965914;
    msg.beam_config.push_back(tmp_msg_1);
    msg.value = 0.558045049356;

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
    msg.setTimeStamp(0.406631050455);
    msg.setSource(32793U);
    msg.setSourceEntity(173U);
    msg.setDestination(5191U);
    msg.setDestinationEntity(215U);
    msg.validity = 217U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.421183618075;
    tmp_msg_0.y = 0.101908668361;
    tmp_msg_0.z = 0.726488551451;
    tmp_msg_0.phi = 0.942776878534;
    tmp_msg_0.theta = 0.523039616341;
    tmp_msg_0.psi = 0.358813024252;
    msg.location.push_back(tmp_msg_0);
    IMC::BeamConfig tmp_msg_1;
    tmp_msg_1.beam_width = 0.601134430729;
    tmp_msg_1.beam_height = 0.213973196027;
    msg.beam_config.push_back(tmp_msg_1);
    msg.value = 0.225384601031;

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
    msg.setTimeStamp(0.00266474782085);
    msg.setSource(52949U);
    msg.setSourceEntity(37U);
    msg.setDestination(60428U);
    msg.setDestinationEntity(182U);
    msg.validity = 74U;
    msg.value = 0.00225507644309;

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
    msg.setTimeStamp(0.0268201106108);
    msg.setSource(4167U);
    msg.setSourceEntity(242U);
    msg.setDestination(31497U);
    msg.setDestinationEntity(111U);
    msg.value = 0.349337334879;

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
    msg.setTimeStamp(0.128392733405);
    msg.setSource(37768U);
    msg.setSourceEntity(183U);
    msg.setDestination(37487U);
    msg.setDestinationEntity(86U);
    msg.value = 0.673927886608;

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
    msg.setTimeStamp(0.240794754792);
    msg.setSource(47395U);
    msg.setSourceEntity(154U);
    msg.setDestination(65287U);
    msg.setDestinationEntity(122U);
    msg.value = 0.469027600178;

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
    msg.setTimeStamp(0.761974486473);
    msg.setSource(41644U);
    msg.setSourceEntity(250U);
    msg.setDestination(36894U);
    msg.setDestinationEntity(108U);
    msg.value = 0.650290256278;

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
    msg.setTimeStamp(0.439313577158);
    msg.setSource(11591U);
    msg.setSourceEntity(176U);
    msg.setDestination(59072U);
    msg.setDestinationEntity(164U);
    msg.value = 0.423199531994;

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
    msg.setTimeStamp(0.193285781047);
    msg.setSource(57495U);
    msg.setSourceEntity(161U);
    msg.setDestination(48588U);
    msg.setDestinationEntity(150U);
    msg.value = 0.322301779893;

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
    msg.setTimeStamp(0.165000870436);
    msg.setSource(408U);
    msg.setSourceEntity(98U);
    msg.setDestination(57641U);
    msg.setDestinationEntity(193U);
    msg.value = 0.50645342351;

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
    msg.setTimeStamp(0.250297318616);
    msg.setSource(35453U);
    msg.setSourceEntity(229U);
    msg.setDestination(49654U);
    msg.setDestinationEntity(213U);
    msg.value = 0.6672489453;

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
    msg.setTimeStamp(0.961190149609);
    msg.setSource(31725U);
    msg.setSourceEntity(64U);
    msg.setDestination(60199U);
    msg.setDestinationEntity(42U);
    msg.value = 0.955531722214;

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
    msg.setTimeStamp(0.306645378368);
    msg.setSource(18776U);
    msg.setSourceEntity(16U);
    msg.setDestination(18551U);
    msg.setDestinationEntity(105U);
    msg.value = 0.206748394576;

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
    msg.setTimeStamp(0.0957093154046);
    msg.setSource(37690U);
    msg.setSourceEntity(237U);
    msg.setDestination(10815U);
    msg.setDestinationEntity(34U);
    msg.value = 0.929918248947;

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
    msg.setTimeStamp(0.408420885122);
    msg.setSource(41248U);
    msg.setSourceEntity(39U);
    msg.setDestination(58155U);
    msg.setDestinationEntity(113U);
    msg.value = 0.274513537639;

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
    msg.setTimeStamp(0.646053093778);
    msg.setSource(9027U);
    msg.setSourceEntity(244U);
    msg.setDestination(4414U);
    msg.setDestinationEntity(39U);
    msg.value = 0.938875051349;

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
    msg.setTimeStamp(0.815477956573);
    msg.setSource(48543U);
    msg.setSourceEntity(236U);
    msg.setDestination(3630U);
    msg.setDestinationEntity(45U);
    msg.value = 0.599317495638;

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
    msg.setTimeStamp(0.196618376589);
    msg.setSource(42338U);
    msg.setSourceEntity(103U);
    msg.setDestination(48260U);
    msg.setDestinationEntity(79U);
    msg.value = 0.420728114188;

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
    msg.setTimeStamp(0.248945517661);
    msg.setSource(10453U);
    msg.setSourceEntity(154U);
    msg.setDestination(15912U);
    msg.setDestinationEntity(62U);
    msg.value = 0.349382053593;

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
    msg.setTimeStamp(0.861277291882);
    msg.setSource(42475U);
    msg.setSourceEntity(21U);
    msg.setDestination(23200U);
    msg.setDestinationEntity(202U);
    msg.value = 0.735972880943;

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
    msg.setTimeStamp(0.913148301487);
    msg.setSource(36927U);
    msg.setSourceEntity(14U);
    msg.setDestination(7349U);
    msg.setDestinationEntity(67U);
    msg.value = 0.899722946486;

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
    msg.setTimeStamp(0.042639566225);
    msg.setSource(23746U);
    msg.setSourceEntity(174U);
    msg.setDestination(7005U);
    msg.setDestinationEntity(239U);
    msg.value = 0.757348758723;

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
    msg.setTimeStamp(0.975910199559);
    msg.setSource(49899U);
    msg.setSourceEntity(118U);
    msg.setDestination(27238U);
    msg.setDestinationEntity(201U);
    msg.value = 0.780945498467;

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
    msg.setTimeStamp(0.381813585746);
    msg.setSource(41950U);
    msg.setSourceEntity(149U);
    msg.setDestination(6315U);
    msg.setDestinationEntity(232U);
    msg.value = 0.423198313238;

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
    msg.setTimeStamp(0.593550138555);
    msg.setSource(15540U);
    msg.setSourceEntity(50U);
    msg.setDestination(13391U);
    msg.setDestinationEntity(249U);
    msg.value = 0.613147342234;

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
    msg.setTimeStamp(0.841642358038);
    msg.setSource(47647U);
    msg.setSourceEntity(138U);
    msg.setDestination(63514U);
    msg.setDestinationEntity(131U);
    msg.value = 0.248983436016;

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
    msg.setTimeStamp(0.0727819217178);
    msg.setSource(44922U);
    msg.setSourceEntity(92U);
    msg.setDestination(51161U);
    msg.setDestinationEntity(209U);
    msg.value = 0.269472127522;

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
    msg.setTimeStamp(0.285037683344);
    msg.setSource(37272U);
    msg.setSourceEntity(241U);
    msg.setDestination(27758U);
    msg.setDestinationEntity(241U);
    msg.direction = 0.39091841071;
    msg.speed = 0.144678186206;
    msg.turbulence = 0.734177546559;

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
    msg.setTimeStamp(0.88164779099);
    msg.setSource(29441U);
    msg.setSourceEntity(62U);
    msg.setDestination(6971U);
    msg.setDestinationEntity(157U);
    msg.direction = 0.842849883897;
    msg.speed = 0.748018652411;
    msg.turbulence = 0.547868946777;

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
    msg.setTimeStamp(0.565541989118);
    msg.setSource(55773U);
    msg.setSourceEntity(112U);
    msg.setDestination(23971U);
    msg.setDestinationEntity(226U);
    msg.direction = 0.0237123432149;
    msg.speed = 0.67005991335;
    msg.turbulence = 0.183798851817;

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
    msg.setTimeStamp(0.0609269726931);
    msg.setSource(1613U);
    msg.setSourceEntity(182U);
    msg.setDestination(7625U);
    msg.setDestinationEntity(39U);
    msg.value = 0.907955679865;

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
    msg.setTimeStamp(0.242357223985);
    msg.setSource(26885U);
    msg.setSourceEntity(188U);
    msg.setDestination(15625U);
    msg.setDestinationEntity(182U);
    msg.value = 0.0843339345496;

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
    msg.setTimeStamp(0.0826364292779);
    msg.setSource(966U);
    msg.setSourceEntity(170U);
    msg.setDestination(6280U);
    msg.setDestinationEntity(223U);
    msg.value = 0.571979799355;

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
    msg.setTimeStamp(0.116719670943);
    msg.setSource(18211U);
    msg.setSourceEntity(207U);
    msg.setDestination(31105U);
    msg.setDestinationEntity(245U);
    msg.value.assign("ZUMCIRVPLEYUEAZSWGKVIVLCWZVPJUDURHPIDXHCEWLOQQTFQAXBAHRXGTIVSMTAWLD");

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
    msg.setTimeStamp(0.655217315959);
    msg.setSource(27397U);
    msg.setSourceEntity(30U);
    msg.setDestination(4152U);
    msg.setDestinationEntity(20U);
    msg.value.assign("AFFHCCGTLSGCKIMIEZZIVLQMQBJWYSLILMBWLSZYVSEQYYWAGQYBKUNADYBUPNGHEFEHNSQCPELRIVOWHJOVUDJXXZTLGUUGRTPFDOYRPOSX");

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
    msg.setTimeStamp(0.75019907332);
    msg.setSource(54744U);
    msg.setSourceEntity(177U);
    msg.setDestination(47435U);
    msg.setDestinationEntity(21U);
    msg.value.assign("FBQAAYOAUIGQOWWOLTPKFKYVIROTRZINMRQHZEEHJIJGNJTSFAYZXBMQMHAVPYNVMITWBUDBEENPHOGHSMCNVCGFYCPNDZOLHQHCVUSLAKJWEXPAWLKFRTSRJUWCZBHOCNWVOKQFXEVIWLGAUZYTGNMFBKJJDUXHIKVXBQPPRVKGXTUXWZYRJRTEEAXTDKSQSQIRBYCJIZGVSDHXZSYEGLLUMQCLUDO");

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
    msg.setTimeStamp(0.537318032025);
    msg.setSource(54058U);
    msg.setSourceEntity(53U);
    msg.setDestination(15189U);
    msg.setDestinationEntity(152U);
    const char tmp_msg_0[] = {-66, -75, 100, -123, -65, -15, 2, -77, 68, 30, -98, 119, 19, 19, -22, 109, -43, 28, 7, 49, -62, -86, 103, 90, 42, -5, -85, -107, 23, -62, 40, -64, -97, 54, 88, 22, -127, 105, -78, -82, -10, 59, -114, 58, 97, -61, -70, -117, -116, -33, 56, -85, -97, -52, 28, -22, 35, -53, -114, 38, -16, 84, -111, 110, 73, -103, 44, 85, -45, 19, -17, 60, 110, 37, -49, -48, -1, -30, 83, 68, 51, 3, 85, 83, 17, 21, 5, -50, -127, 3, 40, -96, 62, -76, -13, 70, 81, 47, 97, 87, 117, 61, 111, 10, 103, -86, 97, -115, 11, -88, 28, -35, 91, 21, -27, -70, -44, 33, 109, 85, 3, -88, 51, -40, 30, 101, 15, -84, 118, -2, 32, 87, -2, -57, -22, 1, -57, 22, 11, 67, -57, 21, 78, -116, 94, -108, -85, -83, -4, -62, 104, 43, 75, 57, -81, -115, 73, -59, -42, 32, -91, 116, -41, 6, 61, 50, -32, 24, 59, 46, 22, -122, 88, 113, 41, -37, -75, -127, 36, 109, -37, 8, 19, -1, -46, 19, 79, -71, -52, -13, -94, 38, -61, 48, 120, 1, -56, -34, -46, 24, -32, -91, 37, 5, 24, -80, 78, 21, -56, -96, 89, -107, 5, 46, -74, 121, 87, 107, -81, 100, 24, -82, -79, -41, -111, -21, 40, 77, 5, 38, 21, -25, -33, -94, -29, 0, 34, 7, 120, 113};
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
    msg.setTimeStamp(0.288064688029);
    msg.setSource(48834U);
    msg.setSourceEntity(154U);
    msg.setDestination(59608U);
    msg.setDestinationEntity(172U);
    const char tmp_msg_0[] = {79, -80, 109, -122, -128, 108, -90, -66, -121, -37, -100, -127, -126, 15, -65, 106, -125, 31, 62, -55, 125, -104, -43, -111, -101, -51, -127, -116, 104, -78, 15, -30, -76, -98, -48, -60, -26, -19, -112, 5, 69, -39, -4, 16, 50, 56, 40, -122, -120, 116, -46, 35, -71, 39, 48, -89, -39, 2, 109, -58, 75, -69, 110, -98, 89, 15, -74, -29, -112, -62, 17, -34, 38, -112, 56, 118, -104, -113, 106, -86, 61, -53, -122, 52, 100, -21, -40, 96, -85, -11, 122, 59, 65, -15, -104, 49, 93, 63, 82, -86, 11, 103, 72, -76, -63, -97, -49, 0, -16, 93, -67, -116, -124, 122, -14, -18, -6, 2, 20, 60, -93, -86, -44, -14, 50, 19, -79, 76, -63, -32, -41, 18, 43, -71, -125, 68, -85, 33, 79, -52, 125, 22, -27, -58, -17, -1, -71, -37, 92, 71, 66, -104, -125, -50, -23, -6, -36, 11, -124, 30, -11, -56, 13, 1, 42, 101, 32, -49, 57, 50, 60, 25, -128, -33, 58, -78, -61, 94, -13, 55, -66, -34, 69, -9, 73, 40, -46, -29, 71, 24, -116, 86, -62, -44, -96, 48, 23, -50, -97, 102, -54, 1, -57, -57, 60, 86, -49};
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
    msg.setTimeStamp(0.300416255087);
    msg.setSource(59617U);
    msg.setSourceEntity(142U);
    msg.setDestination(51208U);
    msg.setDestinationEntity(96U);
    const char tmp_msg_0[] = {101, -30, -114, -25, -14, 21, 102, 91, -46, -84, -67, 85, 18, -6, 1, -16, 78, 43, -114, -70, 101, 67, -21, 36, -125, 51, 11, 40, 99, -51, -47, -24, -18, -20, -9, 105, -25, -85, 112, -83, -96, -46, -115, -58, 96, -61, 45, 5, 11, -111, 107, -61, -31, -111, 0, 73, 109, -119, -96, 12, 10, -86, -66, 71, 27, -47, 116, -66, -84, 59, -82, 25, 108, 7, 23, -35, -82, 81, 14, -14, 92, -19, -99, 125, -74, -78, 73, 74, -100, 66, -97, -54, -95, -22, 32, 21, 22, -59, -78, -30, -38, 59, 75, 3, -27, -61, 16, 92, -7, 87, -4, 0, 114};
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
    msg.setTimeStamp(0.0267847646949);
    msg.setSource(60078U);
    msg.setSourceEntity(1U);
    msg.setDestination(11979U);
    msg.setDestinationEntity(111U);
    msg.value = 0.638722502191;

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
    msg.setTimeStamp(0.467028591312);
    msg.setSource(40532U);
    msg.setSourceEntity(102U);
    msg.setDestination(3000U);
    msg.setDestinationEntity(90U);
    msg.value = 0.612909809551;

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
    msg.setTimeStamp(0.337275114839);
    msg.setSource(14302U);
    msg.setSourceEntity(192U);
    msg.setDestination(50020U);
    msg.setDestinationEntity(146U);
    msg.value = 0.631868621331;

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
    msg.setTimeStamp(0.0327873131313);
    msg.setSource(563U);
    msg.setSourceEntity(58U);
    msg.setDestination(21842U);
    msg.setDestinationEntity(128U);
    msg.type = 62U;
    msg.frequency = 2268987921U;
    msg.min_range = 55062U;
    msg.max_range = 36769U;
    msg.bits_per_point = 194U;
    msg.scale_factor = 0.0993877938916;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.651235703968;
    tmp_msg_0.beam_height = 0.665327711414;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {96, -89, 27, -118, -26, -46, 2, 111, -22, 111, -56, 4, -66, -18, -75, -105, -6, -70, 79, 46, 13, -61, 66, 44, 37, 23, -105, -81, -108, -126, -4, -94, -43, -36, 77, 125, -109, 126, -45, 4, -44, 2, 121, -44, -4, 65, -105, -80, -66, -123, -26, 112, 63, 31, 22, -108, 102, -27, -40, 17, -65, 29, -102, 41, -14, 68, 115, -68, 77, -33, -95, -112, -83, 21, -88, 9, -71, -106, -22, 75, 15, -99, -71, -121, 67, -75, 0, -28, 85, 61, 110, -26, 54, -10, 125, 117, 28, -24, 5, 124, -107, -80, 76, -94, -24, -98, -81, -2, -122, -127, -68, 78, -124, 17, 102, -60, -1, 73, -72, -46, 37, -78, 53, -121, -114, 103, 68, 95, -59, 28, 51, -82, -71, -98, 10, -81, -91, -63, -84, 48, -100, -79, -9, -66, 9, -30, -96, 9, 22, 86, -112, -57, -84, 54, -32, -96, 9, -22, -4, -93, -120, 29, -3, -30, -2, 43, -14, -65, -24, 82, -10, -91, 41};
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
    msg.setTimeStamp(0.994395454901);
    msg.setSource(59797U);
    msg.setSourceEntity(159U);
    msg.setDestination(63760U);
    msg.setDestinationEntity(10U);
    msg.type = 140U;
    msg.frequency = 2307216635U;
    msg.min_range = 57444U;
    msg.max_range = 41970U;
    msg.bits_per_point = 190U;
    msg.scale_factor = 0.861039038276;
    const char tmp_msg_0[] = {86, 123, 96, 89, 117, -64, 46, -96, -88, -121, 103, 84, -99, -93, -13, 46, -79, 122, -92, 65, -71, -16, -23, -67, 15, 7, -6, 98, 29, 88, 89, 26, -2, 0, -68, 113, -90, 49, 97, 60, -101, 16, -38, 123, 84, 29, -29, -63, -126, -67, 78, 11, 104, -13, 35, -102, 110, 11, -92, -83, -2, 46, -5, -8, 22, 29, 24, 76, 73, 111, -118, -67, -123, -116, 72, 76, -55, 54, 12, 36, -70, 106, 76, 112, 1, 115, 89, 114, 22, -83, 79, 124, 123, 61, 99, 48, -66, 44, -96, -66, 118, -121, -122, -29, 81, 122, 17, 14, -41, -39, -114, 101, 51, 26, -25, 60, -32, -89, -50, 97, 100, 64, -87, 79, -38, 58, 31, 78, 47, 32, 51, -25, -46, -114, 31, -81, -72, -4, -127, -45, -2, -74, 72, -128, 95, -115, -15, 73, 84, -103, -79, -21, -108, 18, 14, 101, -86, 72, 14, 73, 101, 71, 78, 79, 85, 82, -87, -22};
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
    msg.setTimeStamp(0.594199071569);
    msg.setSource(25397U);
    msg.setSourceEntity(169U);
    msg.setDestination(61774U);
    msg.setDestinationEntity(38U);
    msg.type = 125U;
    msg.frequency = 2806165887U;
    msg.min_range = 42368U;
    msg.max_range = 22930U;
    msg.bits_per_point = 50U;
    msg.scale_factor = 0.152208361312;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.209125374708;
    tmp_msg_0.beam_height = 0.561460224949;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {98, 112, 74, 51, -64, 48, -28, -18, -63, 60, -14, -28, 67, -1, 90, 88, -43, 112, 108, -120, -60, 121, -27, -32, -49, -3, 67, 15, 42, -97, -45, -15, -19, -86, 126, 75, 89, -32, 84, 56, 15, 2, -61, 103, -10, 5, 34, -40, -110, -90, 26, -14, 14, 82, 75, -82, -57, -100, 62, 91, 122, -119, 80, -78, -24, -97, -43, 54, -72, 65, 77, 36, 24, 32, 125, 60, -59, -3, -99, -8, 43, 70, 121, 76, -89, 26, -47, 11, 9, -4, -52, 3, -100, -72, 20, -74, 45, 92, -97, -60, 49, -15, -81, -15, -97, -21, -7, 10, 71, 56, 1, 33, 11, -76, 52, -105, 40, 21, -81, 12, 118, 1, 16, -37, -79, 55, 112, 14, -89, -115, 124, -11, -81, 119, 27, -39, -7, -69, -8, -72, 4, 112, -78, -40, 50, -70, 86, 98, 106, 125, -118, 56, -37, 67, -49, 123, -83, -104, -53, 13, 66, 78, -31, -66, -85, -61, 63, 18, 7, -22, 33, 109, -119, -109, -67, -39, -91, -10, -91, 100, -106, -4, -69, 94, -34};
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
    msg.setTimeStamp(0.939930673889);
    msg.setSource(44550U);
    msg.setSourceEntity(27U);
    msg.setDestination(58450U);
    msg.setDestinationEntity(21U);

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
    msg.setTimeStamp(0.030382667286);
    msg.setSource(16653U);
    msg.setSourceEntity(26U);
    msg.setDestination(39571U);
    msg.setDestinationEntity(203U);

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
    msg.setTimeStamp(0.356612369631);
    msg.setSource(17700U);
    msg.setSourceEntity(45U);
    msg.setDestination(53131U);
    msg.setDestinationEntity(105U);

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
    msg.setTimeStamp(0.423271287189);
    msg.setSource(53276U);
    msg.setSourceEntity(226U);
    msg.setDestination(64688U);
    msg.setDestinationEntity(117U);
    msg.op = 47U;

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
    msg.setTimeStamp(0.76091161625);
    msg.setSource(27943U);
    msg.setSourceEntity(217U);
    msg.setDestination(29274U);
    msg.setDestinationEntity(72U);
    msg.op = 163U;

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
    msg.setTimeStamp(0.864493835572);
    msg.setSource(62897U);
    msg.setSourceEntity(8U);
    msg.setDestination(9130U);
    msg.setDestinationEntity(93U);
    msg.op = 50U;

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
    msg.setTimeStamp(0.562940670014);
    msg.setSource(56565U);
    msg.setSourceEntity(4U);
    msg.setDestination(57755U);
    msg.setDestinationEntity(229U);
    msg.value = 0.209498566626;
    msg.confidence = 0.805886424604;
    msg.opmodes.assign("QNRAWLEPSKNZSBEEHGDKPMLJUXGHRZNFGIPSKAUCYOGZTVTDCXVDFXWAWUKMQRQPHUDGIPYNQBRFOSUWHTAHGICXHVLBXBLBCIQ");

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
    msg.setTimeStamp(0.0150276415509);
    msg.setSource(51288U);
    msg.setSourceEntity(251U);
    msg.setDestination(27289U);
    msg.setDestinationEntity(105U);
    msg.value = 0.378507685095;
    msg.confidence = 0.308836398779;
    msg.opmodes.assign("HDSCNNQXYIYYZYQUAAJMVVDSOTLMMKRYONDIHARXZMWACUWQUCCVWSDXXJOASOWFDHQLVVLIENERUEZIGTTJPTATHQRJSYBBLAUMBDHZ");

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
    msg.setTimeStamp(0.782387306518);
    msg.setSource(44805U);
    msg.setSourceEntity(48U);
    msg.setDestination(24543U);
    msg.setDestinationEntity(73U);
    msg.value = 0.443859731679;
    msg.confidence = 0.970412435533;
    msg.opmodes.assign("GGOWTEQWIKCMDLFPBCOFOBCVIVDDWMLQNORUQKAZWQRSHRUZUFCMKOJAQPUWZFDWVGQIMMEJDPVVUPJYKIXOAHYUWOLTNEAWRWAJZYFABHYSGPDINHFVLJETUGRFUXKSCYNKSDBCGEQGYXIQPPLJXFLGAXAKCRIGQTJBLZBJHL");

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
    msg.setTimeStamp(0.124099071605);
    msg.setSource(30984U);
    msg.setSourceEntity(99U);
    msg.setDestination(64677U);
    msg.setDestinationEntity(194U);
    msg.itow = 1903230199U;
    msg.lat = 0.729522743787;
    msg.lon = 0.338291586597;
    msg.height_ell = 0.107366892394;
    msg.height_sea = 0.575485450365;
    msg.hacc = 0.473385924616;
    msg.vacc = 0.173080247823;
    msg.vel_n = 0.139916013847;
    msg.vel_e = 0.561259757964;
    msg.vel_d = 0.959394295671;
    msg.speed = 0.488113825301;
    msg.gspeed = 0.877002234655;
    msg.heading = 0.109744809694;
    msg.sacc = 0.691784097677;
    msg.cacc = 0.595443798587;

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
    msg.setTimeStamp(0.624766690996);
    msg.setSource(3518U);
    msg.setSourceEntity(119U);
    msg.setDestination(44790U);
    msg.setDestinationEntity(218U);
    msg.itow = 1418684420U;
    msg.lat = 0.279292773081;
    msg.lon = 0.470555297808;
    msg.height_ell = 0.00364988434887;
    msg.height_sea = 0.0763249474887;
    msg.hacc = 0.623826020707;
    msg.vacc = 0.147291585209;
    msg.vel_n = 0.813384208221;
    msg.vel_e = 0.0712222966639;
    msg.vel_d = 0.234985073745;
    msg.speed = 0.202933765228;
    msg.gspeed = 0.410280659924;
    msg.heading = 0.490527248091;
    msg.sacc = 0.890930357244;
    msg.cacc = 0.97698164182;

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
    msg.setTimeStamp(0.00627505691958);
    msg.setSource(5494U);
    msg.setSourceEntity(216U);
    msg.setDestination(51127U);
    msg.setDestinationEntity(117U);
    msg.itow = 730857827U;
    msg.lat = 0.650061156973;
    msg.lon = 0.193165303211;
    msg.height_ell = 0.631340901213;
    msg.height_sea = 0.212240511428;
    msg.hacc = 0.729192818652;
    msg.vacc = 0.000158503255824;
    msg.vel_n = 0.434235238881;
    msg.vel_e = 0.482730687164;
    msg.vel_d = 0.239450645535;
    msg.speed = 0.830934500028;
    msg.gspeed = 0.947797983798;
    msg.heading = 0.456903607991;
    msg.sacc = 0.162154891457;
    msg.cacc = 0.215987418616;

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
    msg.setTimeStamp(0.323024198837);
    msg.setSource(19146U);
    msg.setSourceEntity(165U);
    msg.setDestination(63327U);
    msg.setDestinationEntity(224U);
    msg.id = 209U;
    msg.value = 0.237501189111;

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
    msg.setTimeStamp(0.474936119537);
    msg.setSource(27800U);
    msg.setSourceEntity(77U);
    msg.setDestination(10113U);
    msg.setDestinationEntity(223U);
    msg.id = 146U;
    msg.value = 0.376320500975;

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
    msg.setTimeStamp(0.180494157325);
    msg.setSource(9076U);
    msg.setSourceEntity(139U);
    msg.setDestination(19955U);
    msg.setDestinationEntity(69U);
    msg.id = 67U;
    msg.value = 0.711432714209;

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
    msg.setTimeStamp(0.514806140321);
    msg.setSource(9998U);
    msg.setSourceEntity(171U);
    msg.setDestination(33686U);
    msg.setDestinationEntity(95U);
    msg.x = 0.416278273477;
    msg.y = 0.219635780407;
    msg.z = 0.57788709561;
    msg.phi = 0.271988756471;
    msg.theta = 0.138808706076;
    msg.psi = 0.0302602598948;

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
    msg.setTimeStamp(0.879037958616);
    msg.setSource(58610U);
    msg.setSourceEntity(41U);
    msg.setDestination(35133U);
    msg.setDestinationEntity(187U);
    msg.x = 0.494458474569;
    msg.y = 0.423129153225;
    msg.z = 0.387824550204;
    msg.phi = 0.932775186866;
    msg.theta = 0.860371244844;
    msg.psi = 0.330478163891;

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
    msg.setTimeStamp(0.556663604366);
    msg.setSource(50433U);
    msg.setSourceEntity(222U);
    msg.setDestination(10453U);
    msg.setDestinationEntity(220U);
    msg.x = 0.817834570756;
    msg.y = 0.131931618818;
    msg.z = 0.147278573523;
    msg.phi = 0.270699329059;
    msg.theta = 0.75972446689;
    msg.psi = 0.136228575977;

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
    msg.setTimeStamp(0.646523469397);
    msg.setSource(54102U);
    msg.setSourceEntity(26U);
    msg.setDestination(65498U);
    msg.setDestinationEntity(192U);
    msg.beam_width = 0.163695634027;
    msg.beam_height = 0.172150843353;

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
    msg.setTimeStamp(0.857456715377);
    msg.setSource(47231U);
    msg.setSourceEntity(161U);
    msg.setDestination(13881U);
    msg.setDestinationEntity(188U);
    msg.beam_width = 0.0285631873176;
    msg.beam_height = 0.565521556145;

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
    msg.setTimeStamp(0.588944487758);
    msg.setSource(931U);
    msg.setSourceEntity(171U);
    msg.setDestination(33863U);
    msg.setDestinationEntity(243U);
    msg.beam_width = 0.42334544122;
    msg.beam_height = 0.341357541729;

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
    msg.setTimeStamp(0.00366576854117);
    msg.setSource(43064U);
    msg.setSourceEntity(31U);
    msg.setDestination(1309U);
    msg.setDestinationEntity(18U);
    msg.sane = 56U;

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
    msg.setTimeStamp(0.0411151307498);
    msg.setSource(21976U);
    msg.setSourceEntity(159U);
    msg.setDestination(5147U);
    msg.setDestinationEntity(176U);
    msg.sane = 166U;

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
    msg.setTimeStamp(0.354171781109);
    msg.setSource(3327U);
    msg.setSourceEntity(137U);
    msg.setDestination(18199U);
    msg.setDestinationEntity(241U);
    msg.sane = 129U;

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
    msg.setTimeStamp(0.417177357865);
    msg.setSource(12630U);
    msg.setSourceEntity(73U);
    msg.setDestination(43191U);
    msg.setDestinationEntity(161U);
    msg.value = 0.0693055045461;

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
    msg.setTimeStamp(0.534313735512);
    msg.setSource(44748U);
    msg.setSourceEntity(85U);
    msg.setDestination(28675U);
    msg.setDestinationEntity(143U);
    msg.value = 0.181476912836;

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
    msg.setTimeStamp(0.473328421994);
    msg.setSource(59139U);
    msg.setSourceEntity(50U);
    msg.setDestination(10177U);
    msg.setDestinationEntity(32U);
    msg.value = 0.466189076522;

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
    msg.setTimeStamp(0.636219579114);
    msg.setSource(13298U);
    msg.setSourceEntity(135U);
    msg.setDestination(732U);
    msg.setDestinationEntity(55U);
    msg.value = 0.748115261799;

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
    msg.setTimeStamp(0.899196692458);
    msg.setSource(22940U);
    msg.setSourceEntity(179U);
    msg.setDestination(53827U);
    msg.setDestinationEntity(214U);
    msg.value = 0.405060661354;

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
    msg.setTimeStamp(0.847752529508);
    msg.setSource(57406U);
    msg.setSourceEntity(118U);
    msg.setDestination(44508U);
    msg.setDestinationEntity(95U);
    msg.value = 0.0154403725114;

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
    msg.setTimeStamp(0.751040815672);
    msg.setSource(18304U);
    msg.setSourceEntity(43U);
    msg.setDestination(28041U);
    msg.setDestinationEntity(110U);
    msg.value = 0.507273876587;

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
    msg.setTimeStamp(0.809874303967);
    msg.setSource(25342U);
    msg.setSourceEntity(32U);
    msg.setDestination(28759U);
    msg.setDestinationEntity(4U);
    msg.value = 0.568931787693;

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
    msg.setTimeStamp(0.969328227266);
    msg.setSource(61158U);
    msg.setSourceEntity(242U);
    msg.setDestination(24718U);
    msg.setDestinationEntity(55U);
    msg.value = 0.0218963462132;

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
    msg.setTimeStamp(0.488775253316);
    msg.setSource(35446U);
    msg.setSourceEntity(161U);
    msg.setDestination(24104U);
    msg.setDestinationEntity(74U);
    msg.value = 0.414286123236;

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
    msg.setTimeStamp(0.237319496369);
    msg.setSource(57659U);
    msg.setSourceEntity(144U);
    msg.setDestination(46098U);
    msg.setDestinationEntity(187U);
    msg.value = 0.578642945532;

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
    msg.setTimeStamp(0.961833209068);
    msg.setSource(17648U);
    msg.setSourceEntity(70U);
    msg.setDestination(54470U);
    msg.setDestinationEntity(112U);
    msg.value = 0.878130596107;

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
    msg.setTimeStamp(0.136014855617);
    msg.setSource(56574U);
    msg.setSourceEntity(8U);
    msg.setDestination(54844U);
    msg.setDestinationEntity(234U);
    msg.value = 0.48870726637;

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
    msg.setTimeStamp(0.163455611721);
    msg.setSource(44013U);
    msg.setSourceEntity(165U);
    msg.setDestination(17233U);
    msg.setDestinationEntity(129U);
    msg.value = 0.844586281823;

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
    msg.setTimeStamp(0.592698858906);
    msg.setSource(19204U);
    msg.setSourceEntity(225U);
    msg.setDestination(40439U);
    msg.setDestinationEntity(94U);
    msg.value = 0.0798564239464;

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
    msg.setTimeStamp(0.240020330294);
    msg.setSource(54961U);
    msg.setSourceEntity(24U);
    msg.setDestination(8232U);
    msg.setDestinationEntity(252U);
    msg.value = 0.439229523792;

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
    msg.setTimeStamp(0.539674458449);
    msg.setSource(61260U);
    msg.setSourceEntity(45U);
    msg.setDestination(56024U);
    msg.setDestinationEntity(105U);
    msg.value = 0.762071300428;

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
    msg.setTimeStamp(0.907992227233);
    msg.setSource(58647U);
    msg.setSourceEntity(81U);
    msg.setDestination(47223U);
    msg.setDestinationEntity(8U);
    msg.value = 0.881410619833;

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
    msg.setTimeStamp(0.124268460938);
    msg.setSource(64036U);
    msg.setSourceEntity(2U);
    msg.setDestination(65534U);
    msg.setDestinationEntity(57U);
    msg.value = 0.745803332372;

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
    msg.setTimeStamp(0.78199920359);
    msg.setSource(27406U);
    msg.setSourceEntity(19U);
    msg.setDestination(18590U);
    msg.setDestinationEntity(215U);
    msg.value = 0.768923191999;

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
    msg.setTimeStamp(0.348553900275);
    msg.setSource(64780U);
    msg.setSourceEntity(52U);
    msg.setDestination(35420U);
    msg.setDestinationEntity(241U);
    msg.value = 0.6362337451;

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
    msg.setTimeStamp(0.658574050776);
    msg.setSource(19511U);
    msg.setSourceEntity(88U);
    msg.setDestination(31267U);
    msg.setDestinationEntity(23U);
    msg.value = 0.0537247958173;

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
    msg.setTimeStamp(0.806824243113);
    msg.setSource(43685U);
    msg.setSourceEntity(82U);
    msg.setDestination(20402U);
    msg.setDestinationEntity(186U);
    msg.value = 0.258043995367;

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
    msg.setTimeStamp(0.824095238351);
    msg.setSource(41819U);
    msg.setSourceEntity(108U);
    msg.setDestination(62192U);
    msg.setDestinationEntity(81U);
    msg.value = 0.175142562377;

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
    msg.setTimeStamp(0.651619628701);
    msg.setSource(48141U);
    msg.setSourceEntity(8U);
    msg.setDestination(51645U);
    msg.setDestinationEntity(150U);
    msg.validity = 26368U;
    msg.type = 20U;
    msg.tow = 1718857001U;
    msg.base_lat = 0.561503253126;
    msg.base_lon = 0.621809638785;
    msg.base_height = 0.421708446789;
    msg.n = 0.236110983375;
    msg.e = 0.15586778094;
    msg.d = 0.477720364576;
    msg.v_n = 0.845110800688;
    msg.v_e = 0.332988790237;
    msg.v_d = 0.662946658104;
    msg.satellites = 210U;
    msg.iar_hyp = 14553U;
    msg.iar_ratio = 0.314939760187;

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
    msg.setTimeStamp(0.776344406205);
    msg.setSource(7558U);
    msg.setSourceEntity(94U);
    msg.setDestination(526U);
    msg.setDestinationEntity(126U);
    msg.validity = 58815U;
    msg.type = 111U;
    msg.tow = 554013424U;
    msg.base_lat = 0.546899372449;
    msg.base_lon = 0.240062008167;
    msg.base_height = 0.640001329303;
    msg.n = 0.585426200075;
    msg.e = 0.0132430393554;
    msg.d = 0.844477763106;
    msg.v_n = 0.641322137873;
    msg.v_e = 0.875826244444;
    msg.v_d = 0.952750709841;
    msg.satellites = 239U;
    msg.iar_hyp = 34254U;
    msg.iar_ratio = 0.352595942969;

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
    msg.setTimeStamp(0.576726557584);
    msg.setSource(65190U);
    msg.setSourceEntity(239U);
    msg.setDestination(52765U);
    msg.setDestinationEntity(129U);
    msg.validity = 61957U;
    msg.type = 59U;
    msg.tow = 1870953769U;
    msg.base_lat = 0.453792695925;
    msg.base_lon = 0.828387803612;
    msg.base_height = 0.391984659307;
    msg.n = 0.657452036244;
    msg.e = 0.633898821818;
    msg.d = 0.968814398432;
    msg.v_n = 0.374253042333;
    msg.v_e = 0.320977473535;
    msg.v_d = 0.124311557562;
    msg.satellites = 45U;
    msg.iar_hyp = 64133U;
    msg.iar_ratio = 0.0761355523941;

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
    msg.setTimeStamp(0.850664254174);
    msg.setSource(65404U);
    msg.setSourceEntity(204U);
    msg.setDestination(45645U);
    msg.setDestinationEntity(76U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.327527555403;
    tmp_msg_0.lon = 0.458527540075;
    tmp_msg_0.height = 0.0115539967032;
    tmp_msg_0.x = 0.974523908295;
    tmp_msg_0.y = 0.916347910382;
    tmp_msg_0.z = 0.445737253694;
    tmp_msg_0.phi = 0.399982799369;
    tmp_msg_0.theta = 0.161296013495;
    tmp_msg_0.psi = 0.458838068473;
    tmp_msg_0.u = 0.669369495635;
    tmp_msg_0.v = 0.567322372827;
    tmp_msg_0.w = 0.372019692608;
    tmp_msg_0.vx = 0.317230018818;
    tmp_msg_0.vy = 0.668557542985;
    tmp_msg_0.vz = 0.196563008301;
    tmp_msg_0.p = 0.305054755366;
    tmp_msg_0.q = 0.781211102472;
    tmp_msg_0.r = 0.688442893022;
    tmp_msg_0.depth = 0.917043355308;
    tmp_msg_0.alt = 0.663174673306;
    msg.state.set(tmp_msg_0);
    msg.type = 116U;

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
    msg.setTimeStamp(0.061838921553);
    msg.setSource(42226U);
    msg.setSourceEntity(28U);
    msg.setDestination(49602U);
    msg.setDestinationEntity(209U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.115091790196;
    tmp_msg_0.lon = 0.390966164489;
    tmp_msg_0.height = 0.89287982889;
    tmp_msg_0.x = 0.315510112625;
    tmp_msg_0.y = 0.208079042571;
    tmp_msg_0.z = 0.194295255768;
    tmp_msg_0.phi = 0.906377729415;
    tmp_msg_0.theta = 0.679021172555;
    tmp_msg_0.psi = 0.197505922755;
    tmp_msg_0.u = 0.35123096157;
    tmp_msg_0.v = 0.79197004334;
    tmp_msg_0.w = 0.405642057409;
    tmp_msg_0.vx = 0.29344243998;
    tmp_msg_0.vy = 0.403492899978;
    tmp_msg_0.vz = 0.43572569505;
    tmp_msg_0.p = 0.14834564159;
    tmp_msg_0.q = 0.609182734654;
    tmp_msg_0.r = 0.680081793039;
    tmp_msg_0.depth = 0.277351870334;
    tmp_msg_0.alt = 0.321757622077;
    msg.state.set(tmp_msg_0);
    msg.type = 85U;

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
    msg.setTimeStamp(0.42163410848);
    msg.setSource(64140U);
    msg.setSourceEntity(191U);
    msg.setDestination(12793U);
    msg.setDestinationEntity(119U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.550098357778;
    tmp_msg_0.lon = 0.0158231455604;
    tmp_msg_0.height = 0.652467645534;
    tmp_msg_0.x = 0.304300637102;
    tmp_msg_0.y = 0.913684684503;
    tmp_msg_0.z = 0.0733594179307;
    tmp_msg_0.phi = 0.791059025922;
    tmp_msg_0.theta = 0.098452914991;
    tmp_msg_0.psi = 0.954140390297;
    tmp_msg_0.u = 0.466608625662;
    tmp_msg_0.v = 0.689682182607;
    tmp_msg_0.w = 0.331065528857;
    tmp_msg_0.vx = 0.76898693684;
    tmp_msg_0.vy = 0.815080455024;
    tmp_msg_0.vz = 0.44613364221;
    tmp_msg_0.p = 0.894867216259;
    tmp_msg_0.q = 0.699288438297;
    tmp_msg_0.r = 0.0735347383761;
    tmp_msg_0.depth = 0.228603209075;
    tmp_msg_0.alt = 0.993838355202;
    msg.state.set(tmp_msg_0);
    msg.type = 94U;

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
    msg.setTimeStamp(0.922755688785);
    msg.setSource(55489U);
    msg.setSourceEntity(114U);
    msg.setDestination(41441U);
    msg.setDestinationEntity(36U);
    msg.value = 0.269986907917;

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
    msg.setTimeStamp(0.674088154352);
    msg.setSource(26843U);
    msg.setSourceEntity(151U);
    msg.setDestination(62572U);
    msg.setDestinationEntity(34U);
    msg.value = 0.250200672289;

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
    msg.setTimeStamp(0.869299029323);
    msg.setSource(2374U);
    msg.setSourceEntity(78U);
    msg.setDestination(27627U);
    msg.setDestinationEntity(35U);
    msg.value = 0.138786002051;

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
    msg.setTimeStamp(0.423877919918);
    msg.setSource(62272U);
    msg.setSourceEntity(125U);
    msg.setDestination(14751U);
    msg.setDestinationEntity(155U);
    msg.value = 0.843318400632;

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
    msg.setTimeStamp(0.403671889011);
    msg.setSource(292U);
    msg.setSourceEntity(155U);
    msg.setDestination(58161U);
    msg.setDestinationEntity(254U);
    msg.value = 0.435967102418;

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
    msg.setTimeStamp(0.423700986756);
    msg.setSource(46712U);
    msg.setSourceEntity(221U);
    msg.setDestination(51279U);
    msg.setDestinationEntity(66U);
    msg.value = 0.240691307704;

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
    msg.setTimeStamp(0.773370860512);
    msg.setSource(9891U);
    msg.setSourceEntity(186U);
    msg.setDestination(65218U);
    msg.setDestinationEntity(104U);
    msg.value = 0.490687581849;

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
    msg.setTimeStamp(0.49263615409);
    msg.setSource(46876U);
    msg.setSourceEntity(123U);
    msg.setDestination(27355U);
    msg.setDestinationEntity(242U);
    msg.value = 0.865674615703;

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
    msg.setTimeStamp(0.0070142740239);
    msg.setSource(11057U);
    msg.setSourceEntity(74U);
    msg.setDestination(36134U);
    msg.setDestinationEntity(14U);
    msg.value = 0.435379186013;

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
    msg.setTimeStamp(0.264475768541);
    msg.setSource(919U);
    msg.setSourceEntity(79U);
    msg.setDestination(33654U);
    msg.setDestinationEntity(80U);
    msg.value = 0.175267626647;

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
    msg.setTimeStamp(0.413198098185);
    msg.setSource(45395U);
    msg.setSourceEntity(177U);
    msg.setDestination(28053U);
    msg.setDestinationEntity(151U);
    msg.value = 0.271561697305;

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
    msg.setTimeStamp(0.53102021398);
    msg.setSource(24818U);
    msg.setSourceEntity(205U);
    msg.setDestination(29818U);
    msg.setDestinationEntity(79U);
    msg.value = 0.611273985209;

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
    msg.setTimeStamp(0.909321393578);
    msg.setSource(29868U);
    msg.setSourceEntity(212U);
    msg.setDestination(24640U);
    msg.setDestinationEntity(36U);
    msg.value = 0.558062333909;

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
    msg.setTimeStamp(0.791593418164);
    msg.setSource(19789U);
    msg.setSourceEntity(195U);
    msg.setDestination(19560U);
    msg.setDestinationEntity(55U);
    msg.value = 0.617178875532;

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
    msg.setTimeStamp(0.36922721228);
    msg.setSource(47439U);
    msg.setSourceEntity(173U);
    msg.setDestination(28326U);
    msg.setDestinationEntity(21U);
    msg.value = 0.155794960417;

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
    msg.setTimeStamp(0.112505424375);
    msg.setSource(21998U);
    msg.setSourceEntity(147U);
    msg.setDestination(10171U);
    msg.setDestinationEntity(40U);
    msg.id = 147U;
    msg.zoom = 228U;
    msg.action = 243U;

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
    msg.setTimeStamp(0.78518733276);
    msg.setSource(40207U);
    msg.setSourceEntity(118U);
    msg.setDestination(57309U);
    msg.setDestinationEntity(79U);
    msg.id = 239U;
    msg.zoom = 19U;
    msg.action = 133U;

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
    msg.setTimeStamp(0.0274964880834);
    msg.setSource(60519U);
    msg.setSourceEntity(22U);
    msg.setDestination(54350U);
    msg.setDestinationEntity(168U);
    msg.id = 13U;
    msg.zoom = 253U;
    msg.action = 159U;

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
    msg.setTimeStamp(0.743200148008);
    msg.setSource(31347U);
    msg.setSourceEntity(1U);
    msg.setDestination(19790U);
    msg.setDestinationEntity(120U);
    msg.id = 134U;
    msg.value = 0.610137170827;

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
    msg.setTimeStamp(0.678947556548);
    msg.setSource(30976U);
    msg.setSourceEntity(143U);
    msg.setDestination(50137U);
    msg.setDestinationEntity(26U);
    msg.id = 104U;
    msg.value = 0.0968214877953;

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
    msg.setTimeStamp(0.529464747646);
    msg.setSource(48042U);
    msg.setSourceEntity(247U);
    msg.setDestination(45245U);
    msg.setDestinationEntity(177U);
    msg.id = 76U;
    msg.value = 0.914092309779;

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
    msg.setTimeStamp(0.314877237936);
    msg.setSource(19679U);
    msg.setSourceEntity(116U);
    msg.setDestination(23221U);
    msg.setDestinationEntity(51U);
    msg.id = 155U;
    msg.value = 0.664238369754;

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
    msg.setTimeStamp(0.0871248830137);
    msg.setSource(61701U);
    msg.setSourceEntity(23U);
    msg.setDestination(63565U);
    msg.setDestinationEntity(184U);
    msg.id = 34U;
    msg.value = 0.360915773684;

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
    msg.setTimeStamp(0.519227268884);
    msg.setSource(3370U);
    msg.setSourceEntity(218U);
    msg.setDestination(23926U);
    msg.setDestinationEntity(148U);
    msg.id = 13U;
    msg.value = 0.317264850501;

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
    msg.setTimeStamp(0.739368319063);
    msg.setSource(29833U);
    msg.setSourceEntity(114U);
    msg.setDestination(60057U);
    msg.setDestinationEntity(11U);
    msg.id = 17U;
    msg.angle = 0.295138386928;

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
    msg.setTimeStamp(0.804874724156);
    msg.setSource(32268U);
    msg.setSourceEntity(249U);
    msg.setDestination(23817U);
    msg.setDestinationEntity(59U);
    msg.id = 115U;
    msg.angle = 0.159053468539;

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
    msg.setTimeStamp(0.856634245502);
    msg.setSource(20898U);
    msg.setSourceEntity(52U);
    msg.setDestination(12400U);
    msg.setDestinationEntity(212U);
    msg.id = 113U;
    msg.angle = 0.253837163168;

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
    msg.setTimeStamp(0.553149544518);
    msg.setSource(62353U);
    msg.setSourceEntity(106U);
    msg.setDestination(19799U);
    msg.setDestinationEntity(104U);
    msg.op = 52U;
    msg.actions.assign("EVMFZWQNTTFRKRUONSXBQGSUQSAVCKFPJQGQGRMLUZLZIGZIYSZRDBQHUKBKSYNFOHMAHIHJVAXESFBMUBBNHPEHVPMILDU");

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
    msg.setTimeStamp(0.508198110346);
    msg.setSource(47290U);
    msg.setSourceEntity(251U);
    msg.setDestination(5418U);
    msg.setDestinationEntity(58U);
    msg.op = 69U;
    msg.actions.assign("ZFVXUQPPAANXHSYZSAWQRBYGMENCSNRQZKHLORPAZKQJTVIRLXOBIILLMELFHKXCQDDGNPSZZSVBRQAHFOPPVEXAODAOJURFCJLIFCSRDKLTITPYNVHQTASKJWEINUTJJICQKWZPXTIMEFKOSYYLOTNQZJLHHANFIXGJCT");

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
    msg.setTimeStamp(0.471829771529);
    msg.setSource(61697U);
    msg.setSourceEntity(110U);
    msg.setDestination(43276U);
    msg.setDestinationEntity(122U);
    msg.op = 191U;
    msg.actions.assign("OYDAHCHRAEWJGENJLJEMXSFQQSAXCPTJQJUSGVTASMZVRZJVVOBUVNQZOPJIYXFYNEMAUDWICSDTTOYFTMPFICMCJUBPMXTUZISLWCZLSIOWKVXXTXWBAEJKWPNNIMLOBNSGDGOCKVNCDBHFHYPQWHEGUAZBRQRIAJMPEHOLOCTETWMPKFLCGUNUDDXZHBRKZLRBYDNPZQLNYFXIRRESAYUQHHFWELGVIGTYGARDQFQLBHDGRXWKKFPIBKM");

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
    msg.setTimeStamp(0.567690971467);
    msg.setSource(51504U);
    msg.setSourceEntity(145U);
    msg.setDestination(42857U);
    msg.setDestinationEntity(8U);
    msg.actions.assign("FUDOIQBTQEJGFDQJUBYEVZUPAYHGVFEWFMZQXKMDAZVISGKSRSLWFHRSAWEQPRXINWCWTIJOGKKOOYFUFYNLHTQNTCRVFRIQNDPOJJRFDNSXMVAHXSZRQWABFIOSMHMLICSNUWLEZXBLJXGNYLMZDKIKZGVRDNQEKTOCHEPDZLCYGPBTELDCCLKHAUYPCAYNUMYAZVQTMKUCAISUPHIZEOBXSOTWKVVNMJXAJHXDWYHGPWCOMJER");

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
    msg.setTimeStamp(0.794813757728);
    msg.setSource(4016U);
    msg.setSourceEntity(40U);
    msg.setDestination(57443U);
    msg.setDestinationEntity(6U);
    msg.actions.assign("KZKIXJBKJZHWUBHJAYAMQNEPGJNOROQETYTRDRGHLDMXGOAVXSYMLCQTSXKFIAFOUWVBZWMTXIRSBADHJPGLTAVUWGMXFZMBDTFFIIAIHUJJGAHXVECKPFUKYVHPTHLOIMEBPCCPNSLLHCZEMDDDISWPLMGADSNGKMRRFYEQJPURLICKQQWZZNJQANRQKXVSRCCZESOEVQBZLUGZNJFOVSCYBEFYOUWEOTHPNYRW");

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
    msg.setTimeStamp(0.974056075812);
    msg.setSource(62629U);
    msg.setSourceEntity(112U);
    msg.setDestination(7U);
    msg.setDestinationEntity(233U);
    msg.actions.assign("PICWHPHBGRPNWJVOLZOTKDJVZNMTNMHDCBYOMXDGVJEGATKTTFMNQBDZEQPLBUYKXGSVYYCEAHIJVIWNHANZIHTROPUXUFBRTUEBWGNUPXRLVSCTVPZDKOLMYFF");

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
    msg.setTimeStamp(0.678318720559);
    msg.setSource(1581U);
    msg.setSourceEntity(110U);
    msg.setDestination(19046U);
    msg.setDestinationEntity(242U);
    msg.button = 41U;
    msg.value = 247U;

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
    msg.setTimeStamp(0.482529114364);
    msg.setSource(33474U);
    msg.setSourceEntity(109U);
    msg.setDestination(19104U);
    msg.setDestinationEntity(185U);
    msg.button = 201U;
    msg.value = 160U;

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
    msg.setTimeStamp(0.832705506479);
    msg.setSource(33499U);
    msg.setSourceEntity(30U);
    msg.setDestination(54794U);
    msg.setDestinationEntity(211U);
    msg.button = 70U;
    msg.value = 243U;

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
    msg.setTimeStamp(0.190031752683);
    msg.setSource(9506U);
    msg.setSourceEntity(38U);
    msg.setDestination(39962U);
    msg.setDestinationEntity(48U);
    msg.op = 244U;
    msg.text.assign("UXOPSKECRVCCRFASNCRJUIRDMPPUTDHAMBNKTGSFFVHWRCOOAAUGKNLIKAQPPWREDAYHOSFVJZLGMLYMXKDMOMNIZLZLETKKEJP");

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
    msg.setTimeStamp(0.862930290639);
    msg.setSource(8691U);
    msg.setSourceEntity(83U);
    msg.setDestination(27441U);
    msg.setDestinationEntity(251U);
    msg.op = 170U;
    msg.text.assign("WSPYTBBMHKXUHSIVTUMERIYLHFHIMETBCINELGHGOPEUZFETMYQNRWKICFDSUTWQHYVJZAJZSQAGPPBNJOBLLGZPBQGIGHPVKXNTOVDRKZAZJSWXMDRSKKINEKUZWQEJDARQYHDWQRNLPRJUWCAGBIUZAXXKOIQQDIAGDFSVPMPCOYMNYVLCZCVEFRBKJTZXYFVWFXJKDLMAHGVOCWHWOXEJEAMSTONQG");

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
    msg.setTimeStamp(0.102198215222);
    msg.setSource(13836U);
    msg.setSourceEntity(227U);
    msg.setDestination(63726U);
    msg.setDestinationEntity(4U);
    msg.op = 195U;
    msg.text.assign("IROUCIVPKUTZBFHAMDBIFSUOOSDPZGDHUAZVCKNGBNTKYCCVSALEWPWKTAGMZAHELWBRZLFBVNKIAGOJFQTSQQSRVPNQLLNOXPWLQYVN");

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
    msg.setTimeStamp(0.309049598538);
    msg.setSource(32650U);
    msg.setSourceEntity(178U);
    msg.setDestination(3329U);
    msg.setDestinationEntity(13U);
    msg.op = 132U;
    msg.time_remain = 0.241068661177;
    msg.sched_time = 0.69639050293;

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
    msg.setTimeStamp(0.684481445026);
    msg.setSource(46253U);
    msg.setSourceEntity(188U);
    msg.setDestination(21905U);
    msg.setDestinationEntity(128U);
    msg.op = 236U;
    msg.time_remain = 0.508585638635;
    msg.sched_time = 0.341809598374;

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
    msg.setTimeStamp(0.601598839637);
    msg.setSource(9432U);
    msg.setSourceEntity(214U);
    msg.setDestination(47188U);
    msg.setDestinationEntity(221U);
    msg.op = 47U;
    msg.time_remain = 0.860011654784;
    msg.sched_time = 0.902025645467;

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
    msg.setTimeStamp(0.87392650235);
    msg.setSource(1450U);
    msg.setSourceEntity(200U);
    msg.setDestination(17450U);
    msg.setDestinationEntity(59U);
    msg.name.assign("BLUYIVIVEBUTDJUMLJWTKTMWYPTRKFXHQYEFZUCVJETSGDWZIXYMLRSBBFTTDHXMVSJHGESQZYVSXYOWILWBNRGBPKFKZGOONAXANGBW");
    msg.op = 229U;
    msg.sched_time = 0.523827623848;

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
    msg.setTimeStamp(0.767292576071);
    msg.setSource(44563U);
    msg.setSourceEntity(34U);
    msg.setDestination(57861U);
    msg.setDestinationEntity(27U);
    msg.name.assign("ZTHNJMJUBQCWFLVEQHO");
    msg.op = 209U;
    msg.sched_time = 0.398373596751;

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
    msg.setTimeStamp(0.00720116947997);
    msg.setSource(16694U);
    msg.setSourceEntity(128U);
    msg.setDestination(41544U);
    msg.setDestinationEntity(238U);
    msg.name.assign("GJNUNZPVQQHDNBFIOBMECOWKHRWTUXNNBRGNOMZCUAKQMNBSVHUCLXVURQJFRTFTGZIUHQSCYALGYPEWLMOSZZRJZTXDAZFJSNACGHKDKRYGWAIDIGVFYKQEQPEXKSAIFMRQBOWIUTPOKVXIHJXMJYBAEPLMLLXPRD");
    msg.op = 212U;
    msg.sched_time = 0.701441163994;

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
    msg.setTimeStamp(0.300604686);
    msg.setSource(14877U);
    msg.setSourceEntity(131U);
    msg.setDestination(17065U);
    msg.setDestinationEntity(110U);

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
    msg.setTimeStamp(0.905474563859);
    msg.setSource(30997U);
    msg.setSourceEntity(26U);
    msg.setDestination(29256U);
    msg.setDestinationEntity(143U);

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
    msg.setTimeStamp(0.333250564697);
    msg.setSource(36025U);
    msg.setSourceEntity(122U);
    msg.setDestination(31905U);
    msg.setDestinationEntity(116U);

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
    msg.setTimeStamp(0.145417510769);
    msg.setSource(43872U);
    msg.setSourceEntity(124U);
    msg.setDestination(43832U);
    msg.setDestinationEntity(240U);
    msg.name.assign("DFVZBLYBYLTFDNFGAEVDOIZFXVPDJKQVEREORXPOHEREMPKRGVOJUPZRHHXNWXZEABCKVTRTNAPMMKIVDPSZHRFSEUYKXQQLXNWYTIJAUYWLQPRBDXIXNGMEWMRXWZFM");
    msg.state = 58U;

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
    msg.setTimeStamp(0.0502739671907);
    msg.setSource(56248U);
    msg.setSourceEntity(172U);
    msg.setDestination(6194U);
    msg.setDestinationEntity(45U);
    msg.name.assign("YOIESPNZPYFLXYJBWPTBGWYOVPDUJUZTIHHAZLVDXAFYNVEGFALOUDXIVTAQBXGGGQNUCRUCFKITQZKYPRUSAMKJQHSQOFVCDSSZIWXXNXEMTNILLZKRQSUDGJGWBNEPPTEVMEKMNRWQWEJAQSGUDZILMBT");
    msg.state = 182U;

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
    msg.setTimeStamp(0.277127061804);
    msg.setSource(38152U);
    msg.setSourceEntity(226U);
    msg.setDestination(57698U);
    msg.setDestinationEntity(52U);
    msg.name.assign("EJYMWKUEOMJJBXCNKPCZJSAYYZGBPNMBGQQDERWBGXCTPFPTJBUTKDDLADLMXYZSFHYDDFYJCKRCPRKTDIBZXXKZHWOBGVOJSTF");
    msg.state = 178U;

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
    msg.setTimeStamp(0.779273845901);
    msg.setSource(903U);
    msg.setSourceEntity(228U);
    msg.setDestination(40094U);
    msg.setDestinationEntity(234U);
    msg.name.assign("YFDOORJEZMIQRMBWQQXSYNPGOIFRXTDOGEMPIVNRLTBUZVVHEJQNFCQPNRMWKJVMVPODVBNZHHXCQLOPOJAFHSIENHIOGPILEHKRZBXGXGAAHNLPVMCKZMUZXCCCUSQJTVWLDTASZXMYDWVUJLSDYOGEOXFUGATAQUAEREHHJ");
    msg.value = 66U;

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
    msg.setTimeStamp(0.925084502232);
    msg.setSource(56667U);
    msg.setSourceEntity(241U);
    msg.setDestination(7277U);
    msg.setDestinationEntity(61U);
    msg.name.assign("MSCHQGYCDDCSAFEFPWDAVUOGJTKMTWCUMJUOLVOREMFCDITBQRSUMIYBDQPWYLYXAJIKJXURHMWFFGTZRBQIHSILOTPCFXLFAAJRELKNVNBWLCLPOEHIQZGVQJSNJYIWEKXPKIADNAUTOXHSSXWDNDDGGKQPVTPRZNLJBYXFYUEKVFVUJXTXSUYZSMKOOZXEWZUCBNGBWBDQQANZPVGZGIHTEVEBNVOAYAKMESOHIJ");
    msg.value = 57U;

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
    msg.setTimeStamp(0.392927680059);
    msg.setSource(54610U);
    msg.setSourceEntity(209U);
    msg.setDestination(931U);
    msg.setDestinationEntity(253U);
    msg.name.assign("SRAZMTCDIEIROCLBYYKIRUMTSEKYVJFHCPZEKKWKPHOTXDOXNXOLBCKTDUQKNMPXBYMZSJTQSCERLJZPQZNBFGFVOUAZNPPTPQHLDXIRQBSTQAQUSSNJ");
    msg.value = 0U;

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
    msg.setTimeStamp(0.479512453534);
    msg.setSource(10104U);
    msg.setSourceEntity(200U);
    msg.setDestination(6003U);
    msg.setDestinationEntity(158U);
    msg.name.assign("ESAOVXVMICSVXBGWNCQNSZAIHEMFHGSZPDXURRWNPRKUHVWLCCYTAIOYYMYCOQHEJOVGWSXZUFTFZYVAKTZBRGDNFDZFLHLRCBAUPESTJREJTZQNYPKXGDQXFBVWDAUZNAQDXEWTMXWWIOPYWTMDGRTUEJTKTOFJQDPGXKUSLBZPYEHVYCLIFSOCNDPXNWINE");

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
    msg.setTimeStamp(0.438721478886);
    msg.setSource(52993U);
    msg.setSourceEntity(4U);
    msg.setDestination(12905U);
    msg.setDestinationEntity(243U);
    msg.name.assign("MZFCMLVPGKAVGS");

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
    msg.setTimeStamp(0.959784269049);
    msg.setSource(456U);
    msg.setSourceEntity(113U);
    msg.setDestination(48156U);
    msg.setDestinationEntity(219U);
    msg.name.assign("EDWFKVBFGOKTRTLBYRQXSYDNDVIGCRWRPHVMNNDQNNXBOMBAYEZGHSMPXLSZOCOUUKTWGVMLKVNDXEYPBWIVXGPXRPIRPFMAPSFTYJKOWCZWQNVLHXDJGGBKDKNBJZHKSJLAKWHRIZARYIYJBQCBXUOJASSFCICDCXPIUTCAUFWUVEERSATPMFEQEVUUOUDGMHJDHCIQUSZEYXNFTFWYSBOHTHAMTQREZJMEZOPLJLZYZIQ");

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
    msg.setTimeStamp(0.0645146353071);
    msg.setSource(34465U);
    msg.setSourceEntity(168U);
    msg.setDestination(12629U);
    msg.setDestinationEntity(199U);
    msg.name.assign("AGMTWDMWOFCMCRBCGRIXGYBGWQIJSCQZNSR");
    msg.value = 29U;

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
    msg.setTimeStamp(0.193926470054);
    msg.setSource(54735U);
    msg.setSourceEntity(224U);
    msg.setDestination(25091U);
    msg.setDestinationEntity(201U);
    msg.name.assign("FOZZYMLFEOJTPOMKWMYJHTRJMALDEUIWYTDYQASWLNIDKKFNZJICQXGNWUHXZBGLMGKLRJGDYEXVNNUXPRTFLPBKDNPSJSNRXWEODBHUXTVBVGVNBDRSHQQSBOAPIKAFOPJCBDBEMMWCCGKYGCWGOHOHTIADECUCV");
    msg.value = 123U;

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
    msg.setTimeStamp(0.341653131783);
    msg.setSource(3939U);
    msg.setSourceEntity(124U);
    msg.setDestination(6164U);
    msg.setDestinationEntity(127U);
    msg.name.assign("DPOGMOZCXERHANBXMCPVYRWZTSOQTGHFTYIYULSDEPHHTUMZFRMOZQQYBOLRFEKQHDRBIZMUPAXPGTODSSZVEDRXKCXLNRUSMKMQNTHHCFDACWF");
    msg.value = 213U;

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
    msg.setTimeStamp(0.564469052909);
    msg.setSource(42177U);
    msg.setSourceEntity(110U);
    msg.setDestination(20865U);
    msg.setDestinationEntity(97U);
    msg.id = 181U;
    msg.period = 1126122090U;
    msg.duty_cycle = 4140031225U;

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
    msg.setTimeStamp(0.723662608247);
    msg.setSource(27138U);
    msg.setSourceEntity(118U);
    msg.setDestination(34820U);
    msg.setDestinationEntity(93U);
    msg.id = 82U;
    msg.period = 4077098198U;
    msg.duty_cycle = 733454839U;

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
    msg.setTimeStamp(0.898225955529);
    msg.setSource(35712U);
    msg.setSourceEntity(235U);
    msg.setDestination(5657U);
    msg.setDestinationEntity(72U);
    msg.id = 62U;
    msg.period = 719183944U;
    msg.duty_cycle = 908276374U;

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
    msg.setTimeStamp(0.239746955016);
    msg.setSource(32988U);
    msg.setSourceEntity(141U);
    msg.setDestination(13571U);
    msg.setDestinationEntity(246U);
    msg.id = 107U;
    msg.period = 345875932U;
    msg.duty_cycle = 3248483886U;

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
    msg.setTimeStamp(0.860261586425);
    msg.setSource(61525U);
    msg.setSourceEntity(24U);
    msg.setDestination(9473U);
    msg.setDestinationEntity(95U);
    msg.id = 15U;
    msg.period = 156443672U;
    msg.duty_cycle = 2906445470U;

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
    msg.setTimeStamp(0.193092145374);
    msg.setSource(56523U);
    msg.setSourceEntity(235U);
    msg.setDestination(27550U);
    msg.setDestinationEntity(47U);
    msg.id = 174U;
    msg.period = 1292228207U;
    msg.duty_cycle = 1522033397U;

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
    msg.setTimeStamp(0.702355370236);
    msg.setSource(61476U);
    msg.setSourceEntity(171U);
    msg.setDestination(4742U);
    msg.setDestinationEntity(226U);
    msg.lat = 0.457212280387;
    msg.lon = 0.619252421494;
    msg.height = 0.484701132621;
    msg.x = 0.0294443608741;
    msg.y = 0.555135597632;
    msg.z = 0.175783171331;
    msg.phi = 0.964067739235;
    msg.theta = 0.344425222402;
    msg.psi = 0.110416587054;
    msg.u = 0.777056075952;
    msg.v = 0.244446654891;
    msg.w = 0.630486424974;
    msg.vx = 0.108014229954;
    msg.vy = 0.919201727966;
    msg.vz = 0.739775093334;
    msg.p = 0.834605990686;
    msg.q = 0.240414376073;
    msg.r = 0.444099186932;
    msg.depth = 0.830040461847;
    msg.alt = 0.0154150217698;

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
    msg.setTimeStamp(0.52190912147);
    msg.setSource(57101U);
    msg.setSourceEntity(106U);
    msg.setDestination(57771U);
    msg.setDestinationEntity(251U);
    msg.lat = 0.834539933231;
    msg.lon = 0.655688335281;
    msg.height = 0.0646479026913;
    msg.x = 0.181863766261;
    msg.y = 0.96673698545;
    msg.z = 0.826132903326;
    msg.phi = 0.301540056238;
    msg.theta = 0.742411424297;
    msg.psi = 0.50332225682;
    msg.u = 0.0157442637714;
    msg.v = 0.780950089077;
    msg.w = 0.499236589623;
    msg.vx = 0.800329846906;
    msg.vy = 0.406997084439;
    msg.vz = 0.314271091;
    msg.p = 0.76443740757;
    msg.q = 0.236980482883;
    msg.r = 0.0303823175485;
    msg.depth = 0.804442010228;
    msg.alt = 0.35163512694;

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
    msg.setTimeStamp(0.336395994363);
    msg.setSource(916U);
    msg.setSourceEntity(230U);
    msg.setDestination(25092U);
    msg.setDestinationEntity(140U);
    msg.lat = 0.0229354287724;
    msg.lon = 0.471016624248;
    msg.height = 0.569609943229;
    msg.x = 0.72501758898;
    msg.y = 0.59141637395;
    msg.z = 0.223975401888;
    msg.phi = 0.35738310444;
    msg.theta = 0.22003707006;
    msg.psi = 0.994049117327;
    msg.u = 0.36889883977;
    msg.v = 0.901406899219;
    msg.w = 0.934215004064;
    msg.vx = 0.566064183809;
    msg.vy = 0.483377986741;
    msg.vz = 0.459929334476;
    msg.p = 0.195176522488;
    msg.q = 0.436718895021;
    msg.r = 0.973545613874;
    msg.depth = 0.65968129324;
    msg.alt = 0.593512935804;

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
    msg.setTimeStamp(0.00296124173499);
    msg.setSource(12601U);
    msg.setSourceEntity(236U);
    msg.setDestination(8512U);
    msg.setDestinationEntity(21U);
    msg.x = 0.908708586066;
    msg.y = 0.280667472781;
    msg.z = 0.274531760053;

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
    msg.setTimeStamp(0.550137869498);
    msg.setSource(36757U);
    msg.setSourceEntity(184U);
    msg.setDestination(45439U);
    msg.setDestinationEntity(11U);
    msg.x = 0.759752688091;
    msg.y = 0.123633939308;
    msg.z = 0.834785008302;

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
    msg.setTimeStamp(0.368300956031);
    msg.setSource(8238U);
    msg.setSourceEntity(47U);
    msg.setDestination(60815U);
    msg.setDestinationEntity(225U);
    msg.x = 0.0716107226623;
    msg.y = 0.218638637057;
    msg.z = 0.111186488259;

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
    msg.setTimeStamp(0.0065690813498);
    msg.setSource(7028U);
    msg.setSourceEntity(27U);
    msg.setDestination(52738U);
    msg.setDestinationEntity(212U);
    msg.value = 0.330924468432;

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
    msg.setTimeStamp(0.984242764224);
    msg.setSource(14920U);
    msg.setSourceEntity(239U);
    msg.setDestination(4074U);
    msg.setDestinationEntity(2U);
    msg.value = 0.573207712784;

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
    msg.setTimeStamp(0.957708674746);
    msg.setSource(1178U);
    msg.setSourceEntity(241U);
    msg.setDestination(31222U);
    msg.setDestinationEntity(147U);
    msg.value = 0.150951819933;

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
    msg.setTimeStamp(0.440766248861);
    msg.setSource(56861U);
    msg.setSourceEntity(101U);
    msg.setDestination(54002U);
    msg.setDestinationEntity(147U);
    msg.value = 0.176052209879;

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
    msg.setTimeStamp(0.701471573224);
    msg.setSource(60416U);
    msg.setSourceEntity(163U);
    msg.setDestination(44608U);
    msg.setDestinationEntity(153U);
    msg.value = 0.396517174225;

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
    msg.setTimeStamp(0.716977816583);
    msg.setSource(61319U);
    msg.setSourceEntity(247U);
    msg.setDestination(1052U);
    msg.setDestinationEntity(86U);
    msg.value = 0.337059203609;

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
    msg.setTimeStamp(0.220323456125);
    msg.setSource(13229U);
    msg.setSourceEntity(54U);
    msg.setDestination(42285U);
    msg.setDestinationEntity(231U);
    msg.x = 0.200987565273;
    msg.y = 0.696558506653;
    msg.z = 0.65472481148;
    msg.phi = 0.792875063425;
    msg.theta = 0.224793672863;
    msg.psi = 0.537109860231;
    msg.p = 0.051933911293;
    msg.q = 0.326741182382;
    msg.r = 0.0580229221757;
    msg.u = 0.156986386945;
    msg.v = 0.00944718845619;
    msg.w = 0.452048698899;
    msg.bias_psi = 0.698108947831;
    msg.bias_r = 0.905539275141;

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
    msg.setTimeStamp(0.134163936246);
    msg.setSource(59388U);
    msg.setSourceEntity(131U);
    msg.setDestination(39052U);
    msg.setDestinationEntity(71U);
    msg.x = 0.60304355411;
    msg.y = 0.326871355158;
    msg.z = 0.765104937693;
    msg.phi = 0.439584735475;
    msg.theta = 0.0126954832054;
    msg.psi = 0.46898925018;
    msg.p = 0.961047647586;
    msg.q = 0.273226681484;
    msg.r = 0.502852484943;
    msg.u = 0.770510402382;
    msg.v = 0.460421503251;
    msg.w = 0.0733284151845;
    msg.bias_psi = 0.63803095744;
    msg.bias_r = 0.261397436248;

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
    msg.setTimeStamp(0.892149887353);
    msg.setSource(38748U);
    msg.setSourceEntity(182U);
    msg.setDestination(63922U);
    msg.setDestinationEntity(206U);
    msg.x = 0.6786906258;
    msg.y = 0.878282161075;
    msg.z = 0.654643404023;
    msg.phi = 0.801993211948;
    msg.theta = 0.395781966399;
    msg.psi = 0.334932070233;
    msg.p = 0.165401445693;
    msg.q = 0.382709069236;
    msg.r = 0.0253991867775;
    msg.u = 0.0917643604296;
    msg.v = 0.254756657456;
    msg.w = 0.483278359346;
    msg.bias_psi = 0.247937047085;
    msg.bias_r = 0.437222793739;

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
    msg.setTimeStamp(0.283743083565);
    msg.setSource(63597U);
    msg.setSourceEntity(233U);
    msg.setDestination(10887U);
    msg.setDestinationEntity(197U);
    msg.bias_psi = 0.480231936333;
    msg.bias_r = 0.541831139998;
    msg.cog = 0.383096041464;
    msg.cyaw = 0.190359012072;
    msg.gps_rej_level = 0.795810133027;
    msg.lbl_rej_level = 0.500926661098;
    msg.custom_x = 0.175431625928;
    msg.custom_y = 0.33092219321;
    msg.custom_z = 0.416336850249;

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
    msg.setTimeStamp(0.778219768656);
    msg.setSource(51060U);
    msg.setSourceEntity(120U);
    msg.setDestination(22197U);
    msg.setDestinationEntity(164U);
    msg.bias_psi = 0.826999400526;
    msg.bias_r = 0.878301588274;
    msg.cog = 0.95533935376;
    msg.cyaw = 0.219984857654;
    msg.gps_rej_level = 0.938371366191;
    msg.lbl_rej_level = 0.330196881503;
    msg.custom_x = 0.693203219866;
    msg.custom_y = 0.0719702084466;
    msg.custom_z = 0.47172039375;

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
    msg.setTimeStamp(0.93799283792);
    msg.setSource(3183U);
    msg.setSourceEntity(172U);
    msg.setDestination(51395U);
    msg.setDestinationEntity(236U);
    msg.bias_psi = 0.817421538755;
    msg.bias_r = 0.0295170686854;
    msg.cog = 0.773786772287;
    msg.cyaw = 0.99136215212;
    msg.gps_rej_level = 0.667816657092;
    msg.lbl_rej_level = 0.943486215725;
    msg.custom_x = 0.171645230189;
    msg.custom_y = 0.71314526555;
    msg.custom_z = 0.102168302826;

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
    msg.setTimeStamp(0.606009188211);
    msg.setSource(36934U);
    msg.setSourceEntity(42U);
    msg.setDestination(47741U);
    msg.setDestinationEntity(197U);
    msg.utc_time = 0.732071268711;
    msg.reason = 151U;

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
    msg.setTimeStamp(0.502322185288);
    msg.setSource(10154U);
    msg.setSourceEntity(134U);
    msg.setDestination(60676U);
    msg.setDestinationEntity(202U);
    msg.utc_time = 0.840179919168;
    msg.reason = 133U;

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
    msg.setTimeStamp(0.0804399595291);
    msg.setSource(23036U);
    msg.setSourceEntity(131U);
    msg.setDestination(16726U);
    msg.setDestinationEntity(243U);
    msg.utc_time = 0.931380256472;
    msg.reason = 116U;

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
    msg.setTimeStamp(0.500170262209);
    msg.setSource(64493U);
    msg.setSourceEntity(155U);
    msg.setDestination(29455U);
    msg.setDestinationEntity(34U);
    msg.id = 219U;
    msg.range = 0.742517253932;
    msg.acceptance = 64U;

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
    msg.setTimeStamp(0.143928046402);
    msg.setSource(17758U);
    msg.setSourceEntity(103U);
    msg.setDestination(25414U);
    msg.setDestinationEntity(155U);
    msg.id = 9U;
    msg.range = 0.907374221115;
    msg.acceptance = 55U;

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
    msg.setTimeStamp(0.612539028046);
    msg.setSource(63680U);
    msg.setSourceEntity(54U);
    msg.setDestination(38582U);
    msg.setDestinationEntity(5U);
    msg.id = 73U;
    msg.range = 0.794288805059;
    msg.acceptance = 165U;

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
    msg.setTimeStamp(0.940979613513);
    msg.setSource(20661U);
    msg.setSourceEntity(111U);
    msg.setDestination(38646U);
    msg.setDestinationEntity(82U);
    msg.type = 85U;
    msg.reason = 225U;
    msg.value = 0.724322321495;
    msg.timestep = 0.361868435639;

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
    msg.setTimeStamp(0.189453776711);
    msg.setSource(23140U);
    msg.setSourceEntity(195U);
    msg.setDestination(24102U);
    msg.setDestinationEntity(214U);
    msg.type = 95U;
    msg.reason = 89U;
    msg.value = 0.64914420868;
    msg.timestep = 0.386666107747;

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
    msg.setTimeStamp(0.0749949084089);
    msg.setSource(37490U);
    msg.setSourceEntity(199U);
    msg.setDestination(17405U);
    msg.setDestinationEntity(59U);
    msg.type = 41U;
    msg.reason = 123U;
    msg.value = 0.100713330032;
    msg.timestep = 0.781643268409;

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
    msg.setTimeStamp(0.429400545908);
    msg.setSource(5213U);
    msg.setSourceEntity(77U);
    msg.setDestination(6386U);
    msg.setDestinationEntity(105U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("IFERYVYLNJWAHBFFJEVHKXYWZSUKNQUUXKEDLCAZTWRWIMSCV");
    tmp_msg_0.lat = 0.948044533874;
    tmp_msg_0.lon = 0.845780350615;
    tmp_msg_0.depth = 0.942349601585;
    tmp_msg_0.query_channel = 50U;
    tmp_msg_0.reply_channel = 235U;
    tmp_msg_0.transponder_delay = 20U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.856714568153;
    msg.y = 0.758304274784;
    msg.var_x = 0.947432050497;
    msg.var_y = 0.549941639616;
    msg.distance = 0.215248384804;

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
    msg.setTimeStamp(0.166463384901);
    msg.setSource(28698U);
    msg.setSourceEntity(195U);
    msg.setDestination(846U);
    msg.setDestinationEntity(176U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("HKDBIPQUHJYXJZKNPUSEKLDHTBJSVZVYUGYGAQQQYMLHOOLWBRWOZAOVQSESJSZEXQGJELEOFQRNGFKOFNZJILFPFKIKZTNSFPQXVAXM");
    tmp_msg_0.lat = 0.531400768396;
    tmp_msg_0.lon = 0.18898172609;
    tmp_msg_0.depth = 0.936005716063;
    tmp_msg_0.query_channel = 16U;
    tmp_msg_0.reply_channel = 243U;
    tmp_msg_0.transponder_delay = 221U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.992116239578;
    msg.y = 0.371246926863;
    msg.var_x = 0.607321577146;
    msg.var_y = 0.706656966103;
    msg.distance = 0.152863134334;

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
    msg.setTimeStamp(0.0313880588291);
    msg.setSource(47017U);
    msg.setSourceEntity(136U);
    msg.setDestination(32821U);
    msg.setDestinationEntity(184U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("RVJFZCOEKEWEKHWMPZSLHOHGZPJEBMFFBJIMSYJYQJRNGPRXCTRQQSBOBYHOOAVIDAPEXXDHEPLYPTTIXIWMAYYOGGXDHUCOYZGPFLOLKSHSTNKJKOXHBZWGFRZPXWQWICZYLKSYVEJQJLAEKNAJZIAVDNMQCAVZQSCIKBTEHXHWVRNRTNY");
    tmp_msg_0.lat = 0.70722511495;
    tmp_msg_0.lon = 0.0622484620673;
    tmp_msg_0.depth = 0.861694621925;
    tmp_msg_0.query_channel = 143U;
    tmp_msg_0.reply_channel = 143U;
    tmp_msg_0.transponder_delay = 122U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.841234273196;
    msg.y = 0.887301719565;
    msg.var_x = 0.260837629378;
    msg.var_y = 0.648672029925;
    msg.distance = 0.31381332114;

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
    msg.setTimeStamp(0.447025717099);
    msg.setSource(14645U);
    msg.setSourceEntity(207U);
    msg.setDestination(40395U);
    msg.setDestinationEntity(61U);
    msg.state = 34U;

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
    msg.setTimeStamp(0.951346716653);
    msg.setSource(62490U);
    msg.setSourceEntity(103U);
    msg.setDestination(41529U);
    msg.setDestinationEntity(131U);
    msg.state = 97U;

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
    msg.setTimeStamp(0.611240492068);
    msg.setSource(36697U);
    msg.setSourceEntity(238U);
    msg.setDestination(24044U);
    msg.setDestinationEntity(142U);
    msg.state = 37U;

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
    msg.setTimeStamp(0.871065072337);
    msg.setSource(59885U);
    msg.setSourceEntity(176U);
    msg.setDestination(55795U);
    msg.setDestinationEntity(46U);
    msg.x = 0.900113290628;
    msg.y = 0.086203205864;
    msg.z = 0.418057748022;

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
    msg.setTimeStamp(0.777846100215);
    msg.setSource(10778U);
    msg.setSourceEntity(151U);
    msg.setDestination(2173U);
    msg.setDestinationEntity(64U);
    msg.x = 0.637696150226;
    msg.y = 0.246489731489;
    msg.z = 0.929865075157;

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
    msg.setTimeStamp(0.539149528193);
    msg.setSource(49874U);
    msg.setSourceEntity(139U);
    msg.setDestination(41763U);
    msg.setDestinationEntity(33U);
    msg.x = 0.845149121029;
    msg.y = 0.740472750257;
    msg.z = 0.269064407166;

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
    msg.setTimeStamp(0.732887891644);
    msg.setSource(47458U);
    msg.setSourceEntity(28U);
    msg.setDestination(25575U);
    msg.setDestinationEntity(1U);
    msg.va = 0.670494005305;
    msg.aoa = 0.00752503490749;
    msg.ssa = 0.476913619509;

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
    msg.setTimeStamp(0.911824802836);
    msg.setSource(31033U);
    msg.setSourceEntity(235U);
    msg.setDestination(33875U);
    msg.setDestinationEntity(125U);
    msg.va = 0.898692635733;
    msg.aoa = 0.618081696427;
    msg.ssa = 0.679238683766;

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
    msg.setTimeStamp(0.841246521808);
    msg.setSource(46942U);
    msg.setSourceEntity(136U);
    msg.setDestination(44566U);
    msg.setDestinationEntity(223U);
    msg.va = 0.499912525307;
    msg.aoa = 0.316689070136;
    msg.ssa = 0.721135972642;

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
    msg.setTimeStamp(0.183815848864);
    msg.setSource(40469U);
    msg.setSourceEntity(139U);
    msg.setDestination(61964U);
    msg.setDestinationEntity(183U);
    msg.mmsi = 4188836208U;
    msg.lon = 0.985329461358;
    msg.lat = 0.410842528432;
    msg.x = 0.426855627713;
    msg.y = 0.259338922551;
    msg.psi = 0.111554066141;
    msg.u = 0.853826278566;
    msg.v = 0.993702018013;
    msg.a = 0.844515134085;
    msg.b = 0.156278527629;
    msg.c = 0.979759207493;
    msg.d = 0.874841272367;

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
    msg.setTimeStamp(0.458899552878);
    msg.setSource(11376U);
    msg.setSourceEntity(150U);
    msg.setDestination(6060U);
    msg.setDestinationEntity(195U);
    msg.mmsi = 1988764559U;
    msg.lon = 0.185269016622;
    msg.lat = 0.713703120582;
    msg.x = 0.707977689374;
    msg.y = 0.69411314112;
    msg.psi = 0.143706346583;
    msg.u = 0.288302531083;
    msg.v = 0.993153026453;
    msg.a = 0.834957055132;
    msg.b = 0.0133104655179;
    msg.c = 0.168332625322;
    msg.d = 0.225346217656;

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
    msg.setTimeStamp(0.92052326503);
    msg.setSource(2411U);
    msg.setSourceEntity(32U);
    msg.setDestination(952U);
    msg.setDestinationEntity(117U);
    msg.mmsi = 3048359948U;
    msg.lon = 0.823431443199;
    msg.lat = 0.874314783798;
    msg.x = 0.899348057474;
    msg.y = 0.462366252768;
    msg.psi = 0.599052076485;
    msg.u = 0.232759998145;
    msg.v = 0.926772769599;
    msg.a = 0.882710368166;
    msg.b = 0.201140998103;
    msg.c = 0.0376552062945;
    msg.d = 0.622232516287;

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
    msg.setTimeStamp(0.310473243133);
    msg.setSource(24998U);
    msg.setSourceEntity(124U);
    msg.setDestination(19771U);
    msg.setDestinationEntity(128U);
    msg.value = 0.259731459475;

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
    msg.setTimeStamp(0.31878213927);
    msg.setSource(57748U);
    msg.setSourceEntity(5U);
    msg.setDestination(33693U);
    msg.setDestinationEntity(90U);
    msg.value = 0.0423848060566;

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
    msg.setTimeStamp(0.206931470805);
    msg.setSource(11623U);
    msg.setSourceEntity(131U);
    msg.setDestination(59525U);
    msg.setDestinationEntity(48U);
    msg.value = 0.274686680978;

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
    msg.setTimeStamp(0.405388105971);
    msg.setSource(6052U);
    msg.setSourceEntity(251U);
    msg.setDestination(41501U);
    msg.setDestinationEntity(217U);
    msg.value = 0.414658831901;
    msg.z_units = 113U;

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
    msg.setTimeStamp(0.982245364931);
    msg.setSource(42350U);
    msg.setSourceEntity(243U);
    msg.setDestination(45538U);
    msg.setDestinationEntity(114U);
    msg.value = 0.833483860552;
    msg.z_units = 144U;

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
    msg.setTimeStamp(0.432620848674);
    msg.setSource(32218U);
    msg.setSourceEntity(142U);
    msg.setDestination(28139U);
    msg.setDestinationEntity(120U);
    msg.value = 0.704782841071;
    msg.z_units = 132U;

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
    msg.setTimeStamp(0.293521826609);
    msg.setSource(48115U);
    msg.setSourceEntity(89U);
    msg.setDestination(48056U);
    msg.setDestinationEntity(207U);
    msg.value = 0.793829172146;
    msg.speed_units = 154U;

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
    msg.setTimeStamp(0.0219033905645);
    msg.setSource(61686U);
    msg.setSourceEntity(56U);
    msg.setDestination(2792U);
    msg.setDestinationEntity(198U);
    msg.value = 0.625471312243;
    msg.speed_units = 96U;

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
    msg.setTimeStamp(0.357024239987);
    msg.setSource(64226U);
    msg.setSourceEntity(162U);
    msg.setDestination(46809U);
    msg.setDestinationEntity(215U);
    msg.value = 0.381948340183;
    msg.speed_units = 57U;

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
    msg.setTimeStamp(0.861897520386);
    msg.setSource(51689U);
    msg.setSourceEntity(232U);
    msg.setDestination(47635U);
    msg.setDestinationEntity(212U);
    msg.value = 0.873061832921;

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
    msg.setTimeStamp(0.3262628523);
    msg.setSource(40462U);
    msg.setSourceEntity(50U);
    msg.setDestination(40390U);
    msg.setDestinationEntity(118U);
    msg.value = 0.708008393891;

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
    msg.setTimeStamp(0.949479658063);
    msg.setSource(22537U);
    msg.setSourceEntity(35U);
    msg.setDestination(25867U);
    msg.setDestinationEntity(80U);
    msg.value = 0.775275146766;

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
    msg.setTimeStamp(0.787200485216);
    msg.setSource(2361U);
    msg.setSourceEntity(233U);
    msg.setDestination(54576U);
    msg.setDestinationEntity(211U);
    msg.value = 0.0711282036974;

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
    msg.setTimeStamp(0.320769793643);
    msg.setSource(296U);
    msg.setSourceEntity(242U);
    msg.setDestination(45207U);
    msg.setDestinationEntity(5U);
    msg.value = 0.320511835372;

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
    msg.setTimeStamp(0.60732124786);
    msg.setSource(60677U);
    msg.setSourceEntity(23U);
    msg.setDestination(32804U);
    msg.setDestinationEntity(33U);
    msg.value = 0.230839250511;

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
    msg.setTimeStamp(0.907931369344);
    msg.setSource(36526U);
    msg.setSourceEntity(39U);
    msg.setDestination(31980U);
    msg.setDestinationEntity(117U);
    msg.value = 0.775899865878;

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
    msg.setTimeStamp(0.771380104511);
    msg.setSource(34292U);
    msg.setSourceEntity(174U);
    msg.setDestination(7911U);
    msg.setDestinationEntity(61U);
    msg.value = 0.127142978724;

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
    msg.setTimeStamp(0.930962342264);
    msg.setSource(22210U);
    msg.setSourceEntity(68U);
    msg.setDestination(8458U);
    msg.setDestinationEntity(201U);
    msg.value = 0.134642457211;

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
    msg.setTimeStamp(0.845469540492);
    msg.setSource(44382U);
    msg.setSourceEntity(219U);
    msg.setDestination(49280U);
    msg.setDestinationEntity(156U);
    msg.path_ref = 2120804359U;
    msg.start_lat = 0.921218105149;
    msg.start_lon = 0.269508146734;
    msg.start_z = 0.388772115992;
    msg.start_z_units = 33U;
    msg.end_lat = 0.382863906765;
    msg.end_lon = 0.506469430695;
    msg.end_z = 0.774792684447;
    msg.end_z_units = 240U;
    msg.speed = 0.488590266326;
    msg.speed_units = 115U;
    msg.lradius = 0.206512314635;
    msg.flags = 40U;

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
    msg.setTimeStamp(0.491932339159);
    msg.setSource(31889U);
    msg.setSourceEntity(139U);
    msg.setDestination(22138U);
    msg.setDestinationEntity(220U);
    msg.path_ref = 2938067605U;
    msg.start_lat = 0.949924536397;
    msg.start_lon = 0.145801708996;
    msg.start_z = 0.782381143311;
    msg.start_z_units = 82U;
    msg.end_lat = 0.209904291704;
    msg.end_lon = 0.609623715428;
    msg.end_z = 0.612566485409;
    msg.end_z_units = 224U;
    msg.speed = 0.0835195395723;
    msg.speed_units = 143U;
    msg.lradius = 0.0308515934907;
    msg.flags = 193U;

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
    msg.setTimeStamp(0.26703276783);
    msg.setSource(41673U);
    msg.setSourceEntity(249U);
    msg.setDestination(6338U);
    msg.setDestinationEntity(91U);
    msg.path_ref = 1585850267U;
    msg.start_lat = 0.1183076547;
    msg.start_lon = 0.550735911014;
    msg.start_z = 0.553054676153;
    msg.start_z_units = 250U;
    msg.end_lat = 0.0731799735672;
    msg.end_lon = 0.972050062176;
    msg.end_z = 0.231019403865;
    msg.end_z_units = 65U;
    msg.speed = 0.544361974829;
    msg.speed_units = 7U;
    msg.lradius = 0.267577199847;
    msg.flags = 83U;

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
    msg.setTimeStamp(0.160149483365);
    msg.setSource(36306U);
    msg.setSourceEntity(129U);
    msg.setDestination(20286U);
    msg.setDestinationEntity(23U);
    msg.x = 0.703308720954;
    msg.y = 0.397370017693;
    msg.z = 0.29599618642;
    msg.k = 0.0407999700408;
    msg.m = 0.496024068488;
    msg.n = 0.668786790468;
    msg.flags = 179U;

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
    msg.setTimeStamp(0.893420232616);
    msg.setSource(36424U);
    msg.setSourceEntity(167U);
    msg.setDestination(31946U);
    msg.setDestinationEntity(134U);
    msg.x = 0.978483087717;
    msg.y = 0.163332761279;
    msg.z = 0.791020059482;
    msg.k = 0.0172138860522;
    msg.m = 0.169373340585;
    msg.n = 0.0213575178267;
    msg.flags = 227U;

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
    msg.setTimeStamp(0.720375714268);
    msg.setSource(18717U);
    msg.setSourceEntity(210U);
    msg.setDestination(15569U);
    msg.setDestinationEntity(244U);
    msg.x = 0.286854163737;
    msg.y = 0.957509847614;
    msg.z = 0.885505499029;
    msg.k = 0.937819056693;
    msg.m = 0.425631444998;
    msg.n = 0.731594268473;
    msg.flags = 36U;

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
    msg.setTimeStamp(0.678923725108);
    msg.setSource(16251U);
    msg.setSourceEntity(101U);
    msg.setDestination(29421U);
    msg.setDestinationEntity(95U);
    msg.value = 0.86956435158;

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
    msg.setTimeStamp(0.282572628153);
    msg.setSource(3653U);
    msg.setSourceEntity(174U);
    msg.setDestination(61227U);
    msg.setDestinationEntity(68U);
    msg.value = 0.863667053731;

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
    msg.setTimeStamp(0.850601846152);
    msg.setSource(27365U);
    msg.setSourceEntity(217U);
    msg.setDestination(50069U);
    msg.setDestinationEntity(124U);
    msg.value = 0.213214997935;

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
    msg.setTimeStamp(0.182960118715);
    msg.setSource(6992U);
    msg.setSourceEntity(78U);
    msg.setDestination(9765U);
    msg.setDestinationEntity(111U);
    msg.u = 0.22415411301;
    msg.v = 0.713426731573;
    msg.w = 0.201363890811;
    msg.p = 0.0675134950864;
    msg.q = 0.493004734239;
    msg.r = 0.720119849631;
    msg.flags = 102U;

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
    msg.setTimeStamp(0.3826498905);
    msg.setSource(39974U);
    msg.setSourceEntity(142U);
    msg.setDestination(36179U);
    msg.setDestinationEntity(86U);
    msg.u = 0.704419365811;
    msg.v = 0.743801403866;
    msg.w = 0.793820813483;
    msg.p = 0.669727494952;
    msg.q = 0.70609690634;
    msg.r = 0.00381540068894;
    msg.flags = 113U;

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
    msg.setTimeStamp(0.591871246003);
    msg.setSource(42959U);
    msg.setSourceEntity(239U);
    msg.setDestination(28599U);
    msg.setDestinationEntity(130U);
    msg.u = 0.00626586256036;
    msg.v = 0.0602485267738;
    msg.w = 0.774219479809;
    msg.p = 0.786531113881;
    msg.q = 0.546051373241;
    msg.r = 0.639910394562;
    msg.flags = 252U;

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
    msg.setTimeStamp(0.311584208879);
    msg.setSource(48020U);
    msg.setSourceEntity(227U);
    msg.setDestination(53429U);
    msg.setDestinationEntity(63U);
    msg.path_ref = 2639495231U;
    msg.start_lat = 0.444357777296;
    msg.start_lon = 0.343510177613;
    msg.start_z = 0.576473242907;
    msg.start_z_units = 84U;
    msg.end_lat = 0.562903242773;
    msg.end_lon = 0.10657620148;
    msg.end_z = 0.646989426734;
    msg.end_z_units = 133U;
    msg.lradius = 0.851702225725;
    msg.flags = 201U;
    msg.x = 0.165070966498;
    msg.y = 0.105006759412;
    msg.z = 0.245449775149;
    msg.vx = 0.250553814341;
    msg.vy = 0.913588851508;
    msg.vz = 0.792850692553;
    msg.course_error = 0.67046961219;
    msg.eta = 16907U;

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
    msg.setTimeStamp(0.452427765487);
    msg.setSource(29232U);
    msg.setSourceEntity(64U);
    msg.setDestination(63925U);
    msg.setDestinationEntity(240U);
    msg.path_ref = 1343343770U;
    msg.start_lat = 0.206623770074;
    msg.start_lon = 0.740821702353;
    msg.start_z = 0.0921789026169;
    msg.start_z_units = 91U;
    msg.end_lat = 0.230741063414;
    msg.end_lon = 0.966012182768;
    msg.end_z = 0.75273479506;
    msg.end_z_units = 243U;
    msg.lradius = 0.189172970649;
    msg.flags = 148U;
    msg.x = 0.409935051309;
    msg.y = 0.0304088964215;
    msg.z = 0.300716833533;
    msg.vx = 0.0780624621433;
    msg.vy = 0.101183975018;
    msg.vz = 0.441401108185;
    msg.course_error = 0.341889449164;
    msg.eta = 40703U;

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
    msg.setTimeStamp(0.972538040586);
    msg.setSource(6532U);
    msg.setSourceEntity(133U);
    msg.setDestination(27694U);
    msg.setDestinationEntity(135U);
    msg.path_ref = 2372727979U;
    msg.start_lat = 0.166846973026;
    msg.start_lon = 0.188852137302;
    msg.start_z = 0.11152472223;
    msg.start_z_units = 26U;
    msg.end_lat = 0.96448265909;
    msg.end_lon = 0.625474638154;
    msg.end_z = 0.216864394046;
    msg.end_z_units = 145U;
    msg.lradius = 0.556352675341;
    msg.flags = 180U;
    msg.x = 0.806675423234;
    msg.y = 0.0200513990311;
    msg.z = 0.163599171108;
    msg.vx = 0.761036821414;
    msg.vy = 0.754038325902;
    msg.vz = 0.534508291171;
    msg.course_error = 0.367186689459;
    msg.eta = 62829U;

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
    msg.setTimeStamp(0.699864025502);
    msg.setSource(45825U);
    msg.setSourceEntity(154U);
    msg.setDestination(9515U);
    msg.setDestinationEntity(165U);
    msg.k = 0.620370896592;
    msg.m = 0.38185706129;
    msg.n = 0.332241447206;

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
    msg.setTimeStamp(0.596174302732);
    msg.setSource(27507U);
    msg.setSourceEntity(119U);
    msg.setDestination(37083U);
    msg.setDestinationEntity(179U);
    msg.k = 0.373704620727;
    msg.m = 0.292972591889;
    msg.n = 0.0395231283082;

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
    msg.setTimeStamp(0.603766095881);
    msg.setSource(50962U);
    msg.setSourceEntity(102U);
    msg.setDestination(60299U);
    msg.setDestinationEntity(83U);
    msg.k = 0.8297541409;
    msg.m = 0.833587802544;
    msg.n = 0.832830291476;

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
    msg.setTimeStamp(0.957240209999);
    msg.setSource(59250U);
    msg.setSourceEntity(249U);
    msg.setDestination(28674U);
    msg.setDestinationEntity(82U);
    msg.p = 0.799743761398;
    msg.i = 0.517189898485;
    msg.d = 0.172906285495;
    msg.a = 0.856498124205;

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
    msg.setTimeStamp(0.211408410876);
    msg.setSource(3340U);
    msg.setSourceEntity(109U);
    msg.setDestination(63181U);
    msg.setDestinationEntity(215U);
    msg.p = 0.0727364103779;
    msg.i = 0.423287867615;
    msg.d = 0.954776823516;
    msg.a = 0.942180853421;

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
    msg.setTimeStamp(0.641532543726);
    msg.setSource(62894U);
    msg.setSourceEntity(18U);
    msg.setDestination(45387U);
    msg.setDestinationEntity(112U);
    msg.p = 0.868626998093;
    msg.i = 0.668029852875;
    msg.d = 0.398751110621;
    msg.a = 0.0732060274811;

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
    msg.setTimeStamp(0.142429795764);
    msg.setSource(15274U);
    msg.setSourceEntity(37U);
    msg.setDestination(36887U);
    msg.setDestinationEntity(244U);
    msg.op = 132U;

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
    msg.setTimeStamp(0.980096879299);
    msg.setSource(45652U);
    msg.setSourceEntity(27U);
    msg.setDestination(18122U);
    msg.setDestinationEntity(8U);
    msg.op = 17U;

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
    msg.setTimeStamp(0.923802727575);
    msg.setSource(34166U);
    msg.setSourceEntity(70U);
    msg.setDestination(17496U);
    msg.setDestinationEntity(115U);
    msg.op = 202U;

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
    msg.setTimeStamp(0.78761876554);
    msg.setSource(54611U);
    msg.setSourceEntity(49U);
    msg.setDestination(34834U);
    msg.setDestinationEntity(254U);
    msg.x = 0.0931063144058;
    msg.y = 0.962260208735;
    msg.z = 0.99362858291;
    msg.vx = 0.842734817675;
    msg.vy = 0.74608450471;
    msg.vz = 0.699488988032;
    msg.ax = 0.910788611313;
    msg.ay = 0.123703523758;
    msg.az = 0.703741254433;
    msg.flags = 42991U;

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
    msg.setTimeStamp(0.434003581184);
    msg.setSource(40393U);
    msg.setSourceEntity(37U);
    msg.setDestination(21060U);
    msg.setDestinationEntity(106U);
    msg.x = 0.552715559156;
    msg.y = 0.77223431474;
    msg.z = 0.084676168165;
    msg.vx = 0.0879294702577;
    msg.vy = 0.0805949702837;
    msg.vz = 0.150877067439;
    msg.ax = 0.240824173808;
    msg.ay = 0.358460974877;
    msg.az = 0.857495711242;
    msg.flags = 5401U;

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
    msg.setTimeStamp(0.113200713396);
    msg.setSource(64003U);
    msg.setSourceEntity(76U);
    msg.setDestination(35896U);
    msg.setDestinationEntity(44U);
    msg.x = 0.0708112404258;
    msg.y = 0.253479861072;
    msg.z = 0.992677656798;
    msg.vx = 0.304272750153;
    msg.vy = 0.114529242169;
    msg.vz = 0.334624396921;
    msg.ax = 0.899275057332;
    msg.ay = 0.519410475284;
    msg.az = 0.982431913681;
    msg.flags = 58487U;

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
    msg.setTimeStamp(0.801930975496);
    msg.setSource(955U);
    msg.setSourceEntity(216U);
    msg.setDestination(32283U);
    msg.setDestinationEntity(149U);
    msg.value = 0.734299995215;

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
    msg.setTimeStamp(0.59897954231);
    msg.setSource(52835U);
    msg.setSourceEntity(162U);
    msg.setDestination(39321U);
    msg.setDestinationEntity(94U);
    msg.value = 0.0179214405658;

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
    msg.setTimeStamp(0.205160917259);
    msg.setSource(61692U);
    msg.setSourceEntity(142U);
    msg.setDestination(10146U);
    msg.setDestinationEntity(49U);
    msg.value = 0.457813640546;

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
    msg.setTimeStamp(0.546211661656);
    msg.setSource(41265U);
    msg.setSourceEntity(199U);
    msg.setDestination(23021U);
    msg.setDestinationEntity(58U);
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.path_ref = 1813453421U;
    tmp_msg_0.start_lat = 0.79926338775;
    tmp_msg_0.start_lon = 0.800182516368;
    tmp_msg_0.start_z = 0.589820597943;
    tmp_msg_0.start_z_units = 11U;
    tmp_msg_0.end_lat = 0.593680661565;
    tmp_msg_0.end_lon = 0.986896262895;
    tmp_msg_0.end_z = 0.368812723087;
    tmp_msg_0.end_z_units = 12U;
    tmp_msg_0.speed = 0.941326042203;
    tmp_msg_0.speed_units = 204U;
    tmp_msg_0.lradius = 0.531170030852;
    tmp_msg_0.flags = 250U;
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
    msg.setTimeStamp(0.253285238527);
    msg.setSource(33144U);
    msg.setSourceEntity(223U);
    msg.setDestination(35494U);
    msg.setDestinationEntity(81U);
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.path_ref = 3967646550U;
    tmp_msg_0.start_lat = 0.93351771248;
    tmp_msg_0.start_lon = 0.881480395967;
    tmp_msg_0.start_z = 0.5154465641;
    tmp_msg_0.start_z_units = 215U;
    tmp_msg_0.end_lat = 0.51965045799;
    tmp_msg_0.end_lon = 0.95523294411;
    tmp_msg_0.end_z = 0.684084431056;
    tmp_msg_0.end_z_units = 239U;
    tmp_msg_0.speed = 0.0666610225457;
    tmp_msg_0.speed_units = 156U;
    tmp_msg_0.lradius = 0.0654259262747;
    tmp_msg_0.flags = 25U;
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
    msg.setTimeStamp(0.834363764122);
    msg.setSource(33525U);
    msg.setSourceEntity(198U);
    msg.setDestination(36567U);
    msg.setDestinationEntity(66U);
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.path_ref = 1092482429U;
    tmp_msg_0.start_lat = 0.985151327549;
    tmp_msg_0.start_lon = 0.683471105241;
    tmp_msg_0.start_z = 0.678780071573;
    tmp_msg_0.start_z_units = 11U;
    tmp_msg_0.end_lat = 0.118907680598;
    tmp_msg_0.end_lon = 0.0387412340171;
    tmp_msg_0.end_z = 0.0293050466399;
    tmp_msg_0.end_z_units = 90U;
    tmp_msg_0.speed = 0.978065164386;
    tmp_msg_0.speed_units = 46U;
    tmp_msg_0.lradius = 0.598972438702;
    tmp_msg_0.flags = 160U;
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
    msg.setTimeStamp(0.0945280510807);
    msg.setSource(58287U);
    msg.setSourceEntity(208U);
    msg.setDestination(788U);
    msg.setDestinationEntity(32U);
    msg.timeout = 5884U;
    msg.lat = 0.92890666921;
    msg.lon = 0.60555503944;
    msg.z = 0.959055584298;
    msg.z_units = 134U;
    msg.speed = 0.563075084989;
    msg.speed_units = 118U;
    msg.roll = 0.231489996666;
    msg.pitch = 0.861347349648;
    msg.yaw = 0.359923724274;
    msg.custom.assign("VRSEBDOJDEWIZYFEIWMBOKSAUERQOXMDBBNZQOHQONXBGWRDSSJVIYZSPJEHTBTHKRYLIVYFVIAUCAQFNGATSZQYOLAICMFPFDWVHHYFTYBLPJTUGQXLDOGVDSPXVVKXKCUEQHQF");

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
    msg.setTimeStamp(0.56600823188);
    msg.setSource(41971U);
    msg.setSourceEntity(87U);
    msg.setDestination(62651U);
    msg.setDestinationEntity(14U);
    msg.timeout = 37286U;
    msg.lat = 0.706885361592;
    msg.lon = 0.957578538401;
    msg.z = 0.340092681884;
    msg.z_units = 93U;
    msg.speed = 0.111780152941;
    msg.speed_units = 20U;
    msg.roll = 0.920688812962;
    msg.pitch = 0.0416596003279;
    msg.yaw = 0.340831313894;
    msg.custom.assign("RFLYEPUEWUMAHAIKYSRLSMPCVUWFHCYQGSZXBDCFBRJHDVBEINIZUFKAAOEFGAMPSLDKRZXFWIKKOTBBY");

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
    msg.setTimeStamp(0.166820293572);
    msg.setSource(42137U);
    msg.setSourceEntity(64U);
    msg.setDestination(28468U);
    msg.setDestinationEntity(25U);
    msg.timeout = 45685U;
    msg.lat = 0.80174889505;
    msg.lon = 0.776894313624;
    msg.z = 0.585189776389;
    msg.z_units = 100U;
    msg.speed = 0.698321599815;
    msg.speed_units = 55U;
    msg.roll = 0.595445706181;
    msg.pitch = 0.679134232214;
    msg.yaw = 0.897136556323;
    msg.custom.assign("CPQBHLJRQESPYLPMAXTOYKCWQSISBDJPVVDURHWJJCBTPIPIHPYBXNGTMDOXSCBGFMMEAUALFATXOPDGLVZCOLYIEJLFEETNWIUEVOUUJLWFJPTQODZWKYTMRULYKGRLHOYOQZAXQRNBORAYKIGNCWHJCGAXEVNKFZNKEGIQFWVZBJZCDKDXVTUSBIUGADWPYKHTDNXRVILC");

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
    msg.setTimeStamp(0.812749688196);
    msg.setSource(54983U);
    msg.setSourceEntity(173U);
    msg.setDestination(59157U);
    msg.setDestinationEntity(57U);
    msg.timeout = 63736U;
    msg.lat = 0.685992169318;
    msg.lon = 0.795999355261;
    msg.z = 0.0429357038022;
    msg.z_units = 237U;
    msg.speed = 0.63944282169;
    msg.speed_units = 138U;
    msg.duration = 34097U;
    msg.radius = 0.226728337286;
    msg.flags = 246U;
    msg.custom.assign("KTYWOFZENLBCKJTKMDRFOWMJMBQLHNSBKVYMGFPAHSDZODWXSTIZZPJUFLTQXZPQITTMEFDAYSXTKRGLTNRCVABCWMHARLYOCQXWUJUOVUSYIPRSPEJDVDWWYEZITLYVGGWUOGQSRXULCAURPH");

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
    msg.setTimeStamp(0.709960344323);
    msg.setSource(9082U);
    msg.setSourceEntity(42U);
    msg.setDestination(64257U);
    msg.setDestinationEntity(119U);
    msg.timeout = 45179U;
    msg.lat = 0.00537354349794;
    msg.lon = 0.580697400476;
    msg.z = 0.864813223086;
    msg.z_units = 28U;
    msg.speed = 0.461432083627;
    msg.speed_units = 104U;
    msg.duration = 56388U;
    msg.radius = 0.552918898625;
    msg.flags = 179U;
    msg.custom.assign("USWKPIVJAGQVFYUQRFEOJUZARPOMTNNEUAZBPVVHAEZWJJGYOXSJNLOIECDGMLTWEGPTIYZZKBXXZYSQQNCAGRHCUHKMSAMMZYKEPSBXEVALKOTXNLWYXMPMXLIDBAMJNINSPWHLXQFBOVQFYARNGGWTTXYMSIJCIBBTBDTFSWYRZKRBUOIFDCVHPQDEGHVRGJSWEJYHFKZDCNVFWKDWHF");

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
    msg.setTimeStamp(0.788411775362);
    msg.setSource(36464U);
    msg.setSourceEntity(248U);
    msg.setDestination(13127U);
    msg.setDestinationEntity(109U);
    msg.timeout = 28365U;
    msg.lat = 0.214218584696;
    msg.lon = 0.909221447589;
    msg.z = 0.170627317943;
    msg.z_units = 166U;
    msg.speed = 0.738817190568;
    msg.speed_units = 47U;
    msg.duration = 16837U;
    msg.radius = 0.704075298841;
    msg.flags = 165U;
    msg.custom.assign("QEZAPZDGZCSZPXDSEHBUXRRJINZJIVZNJMSMX");

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
    msg.setTimeStamp(0.383070185269);
    msg.setSource(56969U);
    msg.setSourceEntity(185U);
    msg.setDestination(32582U);
    msg.setDestinationEntity(73U);
    msg.custom.assign("COXUSMQVWUDLOIZXXWMYFWOKZBTLSMDWNNMPFIWIYYUAPJGVFAUEYHRIMEVHJJLABNEFIEAVAJQZ");

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
    msg.setTimeStamp(0.666523749019);
    msg.setSource(55635U);
    msg.setSourceEntity(157U);
    msg.setDestination(36338U);
    msg.setDestinationEntity(1U);
    msg.custom.assign("EVSOBARDUVUGDMERXKAKIPDZLWCDGTGFWKPFMJSEYKZIMTWZQJZMAHXAVFFGTKESJHCDNXWEAXTYXEJCOBIFWWTZDSUYO");

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
    msg.setTimeStamp(0.317439685902);
    msg.setSource(51440U);
    msg.setSourceEntity(146U);
    msg.setDestination(62847U);
    msg.setDestinationEntity(146U);
    msg.custom.assign("NVZLQVILVPQRTYZTPDHHVNDKXGYQQUBGSSNRKJIRAVRLTUYOMMMSWJIWHOJQYSOFGLFPBKUJTQIDCPVPJKCGBHZNYHEXUPEGZXBLFNTLQLPXQMKOOCMWHWPKMUXNNFVKSLOFKRZRSCWNBAYFHZSJZGICIRUCXMBPFBAOITAHSRDDJEFYDZRWAVDOUEQBPIWTADWXHBNFMECDLVVWZXHAOBUYUXDZYAITESEGEKTGSEJOCJNLCFXGWCYQAMA");

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
    msg.setTimeStamp(0.517406363493);
    msg.setSource(64399U);
    msg.setSourceEntity(128U);
    msg.setDestination(33582U);
    msg.setDestinationEntity(81U);
    msg.timeout = 5327U;
    msg.lat = 0.538191079183;
    msg.lon = 0.00523129566398;
    msg.z = 0.0179509131542;
    msg.z_units = 215U;
    msg.duration = 61252U;
    msg.speed = 0.655378153145;
    msg.speed_units = 101U;
    msg.type = 84U;
    msg.radius = 0.206129369905;
    msg.length = 0.144172721384;
    msg.bearing = 0.62816099021;
    msg.direction = 28U;
    msg.custom.assign("RHFUYFNRKCLXUSMSABSHLSWIHCHNIBBXAOZNDWGNKQCRXITFSMTQAUWEEHEHTRKQZVIC");

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
    msg.setTimeStamp(0.149926027317);
    msg.setSource(12681U);
    msg.setSourceEntity(154U);
    msg.setDestination(24765U);
    msg.setDestinationEntity(209U);
    msg.timeout = 28902U;
    msg.lat = 0.778922374776;
    msg.lon = 0.35091126227;
    msg.z = 0.695056085089;
    msg.z_units = 153U;
    msg.duration = 33989U;
    msg.speed = 0.196846260518;
    msg.speed_units = 218U;
    msg.type = 149U;
    msg.radius = 0.469756651574;
    msg.length = 0.22205992458;
    msg.bearing = 0.44705594996;
    msg.direction = 212U;
    msg.custom.assign("RTMGEWQVNSZKOGOMFWHVGUHIMBFWYGBSPKVXKHMYJUKVZRYVDTOZZNIOCKCPGFLTHLMSWNGJBHKHFYWDINQBRBYGCHHPJPCVLMLOSJCDBBFTQSOURSYZENQXQJQUSONLRAERQNRILPTXWVARKIXBXXUOPWIAOJPMVEZVPMPCAODRGIELSZ");

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
    msg.setTimeStamp(0.587655068483);
    msg.setSource(6054U);
    msg.setSourceEntity(128U);
    msg.setDestination(63228U);
    msg.setDestinationEntity(99U);
    msg.timeout = 16654U;
    msg.lat = 0.949501161529;
    msg.lon = 0.628961081268;
    msg.z = 0.57208434907;
    msg.z_units = 166U;
    msg.duration = 61603U;
    msg.speed = 0.219617255527;
    msg.speed_units = 27U;
    msg.type = 194U;
    msg.radius = 0.646369332837;
    msg.length = 0.372321815611;
    msg.bearing = 0.290814014646;
    msg.direction = 99U;
    msg.custom.assign("ARFSNUKDHWKEGHDGQFYNSVZMCGVGLHYZOOIFQORADDZUIYXBUTTKAXWPSMFBZSRQIWNJGYSERNDQZZGAZCLDEIWPBEBOFSVVYWIJMDAUVPVDHVRRYHLXAIQWXKYNFQHKMPTNQLTZUORFZOKILXCRELBSFUHKEBVYQCNRWMJUKMTTCEFBCLIAT");

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
    msg.setTimeStamp(0.507199703726);
    msg.setSource(371U);
    msg.setSourceEntity(75U);
    msg.setDestination(57165U);
    msg.setDestinationEntity(117U);
    msg.duration = 814U;
    msg.custom.assign("QLVHKRQTEGKLQCGWCPSDZDMJXMLDMQYGANHZOJFBPOAOQMIEDIQEPAHKYHYWNPXMMEIZX");

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
    msg.setTimeStamp(0.949007243493);
    msg.setSource(48829U);
    msg.setSourceEntity(43U);
    msg.setDestination(20195U);
    msg.setDestinationEntity(110U);
    msg.duration = 41474U;
    msg.custom.assign("EBSNZAMKIVVRNSNUALUSJKJOOHXAYORJNGBWETIDLNUSYIKSSDDPCOLEEINRFCLFTEZDWZTOMJPHISJZESVWTBAACKMXYWKGRAUFGGDBJQDUQVCIBYFHCXGQTRWZGBUACZFRPRLTUBGZCSQCXKRTDOWJRFNLGHVYPMJVEIUMMEPNWHDQVUFYWKHOANFZQTPQWMLXLOBQQIAGHYOH");

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
    msg.setTimeStamp(0.711327650255);
    msg.setSource(57016U);
    msg.setSourceEntity(223U);
    msg.setDestination(25932U);
    msg.setDestinationEntity(9U);
    msg.duration = 30686U;
    msg.custom.assign("OOMQRMKPVVDSXERJICRHOXWIPGXWVRPMHHMTAAFBBAAGVTCJSDKLWPWHPMQXNODGJHQZFWVBLOUZSHYKLWGETLMXXZESRXYCDNIOOYJFRJTNKMGMUTVQJSNCQIVWOPIRZLPZIEEEBBJHQERBHBTUPZQAOYPEZCYTTHUACFFUDUNUVLEGQZFDNUBDYZXKANFGQKM");

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
    msg.setTimeStamp(0.14617274634);
    msg.setSource(39461U);
    msg.setSourceEntity(60U);
    msg.setDestination(12468U);
    msg.setDestinationEntity(229U);
    IMC::DesiredThrottle tmp_msg_0;
    tmp_msg_0.value = 0.0750861378896;
    msg.control.set(tmp_msg_0);
    msg.duration = 3981U;
    msg.custom.assign("LCQICOQLHWRGFWDKLJOSYBHWXXBQZGHZSUGPYOCLHTXCVNWRIWEQNAAXITMUPKFLFNZZIUMYMRXHELGUAKGUGVPZSRDRHTDCTMYUTUABCTWQIBOWHQEOBDFZSEVRICLDUDFDNPLZXZRPJBBDMNQBXDGAJATCPEVECBPTKMKJJNRYYPKORVALGVNEDKMFMWQAVAYJYIGJIHNRIGZJSUJHFSNKAF");

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
    msg.setTimeStamp(0.322268233462);
    msg.setSource(35966U);
    msg.setSourceEntity(184U);
    msg.setDestination(27902U);
    msg.setDestinationEntity(20U);
    IMC::DesiredThrottle tmp_msg_0;
    tmp_msg_0.value = 0.0618181649977;
    msg.control.set(tmp_msg_0);
    msg.duration = 2944U;
    msg.custom.assign("JSEBQZGPAVHJMMXGDMOLLZNFPRCDDNSDKDGVFYOYGBDCLWFMUWQPNBRVIZIWTJAGZYRIVIQLPAUDZYHDIJNKWCQAWOYUUJFQRPGUJESYUTMBCSWVVZONSXKCUGGOPNXUXHSANOABIVFKKHTJSXIFZKPXFSQYZMQXKFONBLHLHPKHPWKECHJILLEMRYEYTBMARBTCL");

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
    msg.setTimeStamp(0.470259967674);
    msg.setSource(35386U);
    msg.setSourceEntity(37U);
    msg.setDestination(21943U);
    msg.setDestinationEntity(134U);
    IMC::DesiredPitch tmp_msg_0;
    tmp_msg_0.value = 0.452175113575;
    msg.control.set(tmp_msg_0);
    msg.duration = 11746U;
    msg.custom.assign("ISBIRXUECTQDGOFTBYSIHTSXVVWPSALCHPGKKFSVNZHESEOVQHHXABKTQFFYXEGFNRNYXBERPMCUUCDDLCJOGWUINQWIQSUI");

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
    msg.setTimeStamp(0.872788022928);
    msg.setSource(2168U);
    msg.setSourceEntity(188U);
    msg.setDestination(43125U);
    msg.setDestinationEntity(4U);
    msg.timeout = 43813U;
    msg.lat = 0.490187910458;
    msg.lon = 0.363453200603;
    msg.z = 0.463079480868;
    msg.z_units = 12U;
    msg.speed = 0.283825268467;
    msg.speed_units = 166U;
    msg.bearing = 0.700822335756;
    msg.cross_angle = 0.605718346756;
    msg.width = 0.944035031944;
    msg.length = 0.976152473333;
    msg.hstep = 0.979531767449;
    msg.coff = 105U;
    msg.alternation = 181U;
    msg.flags = 193U;
    msg.custom.assign("RENJTYLJQWJOAQIYOBOZRVWXVORWCIDSOLBEXQTSXJTVNOJKDKWCPQCPRJZFSMLXLRALJALXDMUBXPQLYBWBAZZHNWHYUKYVONZFCAUVSEPJBKFGPGUETHHMERQSNTIZO");

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
    msg.setTimeStamp(0.164666660449);
    msg.setSource(47794U);
    msg.setSourceEntity(23U);
    msg.setDestination(29999U);
    msg.setDestinationEntity(174U);
    msg.timeout = 29031U;
    msg.lat = 0.621520670902;
    msg.lon = 0.394977696736;
    msg.z = 0.562772439666;
    msg.z_units = 31U;
    msg.speed = 0.433520539738;
    msg.speed_units = 7U;
    msg.bearing = 0.444994312144;
    msg.cross_angle = 0.406111554774;
    msg.width = 0.964788369623;
    msg.length = 0.898761587533;
    msg.hstep = 0.834312830486;
    msg.coff = 65U;
    msg.alternation = 102U;
    msg.flags = 254U;
    msg.custom.assign("LHVQZRXHZWLWJPYZLQHGJUCBXCDLWAUEAHPKEXDTFDJLWKFFQCEOMPSQQIBOUXXUBCAVUVGRGGWZHKWJJ");

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
    msg.setTimeStamp(0.01985772792);
    msg.setSource(53766U);
    msg.setSourceEntity(129U);
    msg.setDestination(46087U);
    msg.setDestinationEntity(134U);
    msg.timeout = 64811U;
    msg.lat = 0.228251395009;
    msg.lon = 0.846822454352;
    msg.z = 0.0901268446041;
    msg.z_units = 26U;
    msg.speed = 0.419733309757;
    msg.speed_units = 233U;
    msg.bearing = 0.635213763611;
    msg.cross_angle = 0.356372808289;
    msg.width = 0.788015267619;
    msg.length = 0.312926985835;
    msg.hstep = 0.126339031691;
    msg.coff = 173U;
    msg.alternation = 112U;
    msg.flags = 100U;
    msg.custom.assign("AYZKLHSFSLKCIHKERLDBKNOAGJWNTFEZNOGBDIZSVFUGHXHZGBCFRRBRUSTDUIWAG");

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
    msg.setTimeStamp(0.442873262368);
    msg.setSource(56225U);
    msg.setSourceEntity(214U);
    msg.setDestination(37883U);
    msg.setDestinationEntity(39U);
    msg.timeout = 11506U;
    msg.lat = 0.995753072462;
    msg.lon = 0.393058080117;
    msg.z = 0.321125564281;
    msg.z_units = 54U;
    msg.speed = 0.42839841239;
    msg.speed_units = 205U;
    msg.custom.assign("EFIVZDDETXAKAUJAUBUGNKNQBCTTYCMKOVVNQWBBOLDTIMIXJNAICMHPKJX");

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
    msg.setTimeStamp(0.955327565772);
    msg.setSource(63188U);
    msg.setSourceEntity(221U);
    msg.setDestination(23259U);
    msg.setDestinationEntity(64U);
    msg.timeout = 26730U;
    msg.lat = 0.733530657479;
    msg.lon = 0.24047728315;
    msg.z = 0.668411729618;
    msg.z_units = 252U;
    msg.speed = 0.576805487257;
    msg.speed_units = 225U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.172295843836;
    tmp_msg_0.y = 0.880209704905;
    tmp_msg_0.z = 0.522303036668;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("FSLLQTMDAPOFYKFMIGWYNIZFQVWONMIYYCPKBHVELDVDYGGDDVQEXEZOQCFJOGYSZESUVQFSOSJNWBUWPPQRCSIPXZRDIAQWBMKLEJTDLTOIGOJBPQTJCMINHTCLECUVABHLOAXQJZTROEZEZWTDMXACPMMAHLSFZRFGWAKBPDVVPKUGGXZXJEZWNRXFUANPKXTNXRISROUCUTHBVRKYJXKUUDIINUHNAYWKBMSSCVBCYTRHALFGHHHQJJYM");

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
    msg.setTimeStamp(0.712680808351);
    msg.setSource(20525U);
    msg.setSourceEntity(99U);
    msg.setDestination(58015U);
    msg.setDestinationEntity(34U);
    msg.timeout = 61833U;
    msg.lat = 0.700912434692;
    msg.lon = 0.227003831192;
    msg.z = 0.584418826784;
    msg.z_units = 44U;
    msg.speed = 0.287462553389;
    msg.speed_units = 13U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.866791028083;
    tmp_msg_0.y = 0.246167658459;
    tmp_msg_0.z = 0.169606966118;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("OUXXPHBPZYXJNFNPCZRWCXXLSEJYOKTOJBGQVRKSDJGMOAOWULUCKCTGYTYHWLLFWIGVAVDECZONNHSTQFLQJOWQEGTAQBHHYMZWDWLEKTYIDBSFWAQZIKDGLQCYHBAZBCVEEWMBEBXCPMYISTFIFDZCRZTYUFDXXUMLIIU");

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
    msg.setTimeStamp(0.396229576115);
    msg.setSource(2751U);
    msg.setSourceEntity(80U);
    msg.setDestination(17581U);
    msg.setDestinationEntity(90U);
    msg.x = 0.258969299506;
    msg.y = 0.444533290153;
    msg.z = 0.426856852311;

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
    msg.setTimeStamp(0.22164371144);
    msg.setSource(6649U);
    msg.setSourceEntity(40U);
    msg.setDestination(50455U);
    msg.setDestinationEntity(12U);
    msg.x = 0.961035987339;
    msg.y = 0.196404291114;
    msg.z = 0.427231194786;

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
    msg.setTimeStamp(0.863431386869);
    msg.setSource(16282U);
    msg.setSourceEntity(249U);
    msg.setDestination(48896U);
    msg.setDestinationEntity(13U);
    msg.x = 0.605409313485;
    msg.y = 0.631741707093;
    msg.z = 0.135330572977;

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
    msg.setTimeStamp(0.55410541946);
    msg.setSource(20757U);
    msg.setSourceEntity(72U);
    msg.setDestination(51031U);
    msg.setDestinationEntity(243U);
    msg.timeout = 32086U;
    msg.lat = 0.890184443995;
    msg.lon = 0.73682470075;
    msg.z = 0.182533120514;
    msg.z_units = 139U;
    msg.amplitude = 0.935260958996;
    msg.pitch = 0.029696381432;
    msg.speed = 0.432119141506;
    msg.speed_units = 102U;
    msg.custom.assign("ABHRHYBOOCFTTQODXTFTQSFZMAOAPOTHSJMSFEJQMKWEABRCCW");

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
    msg.setTimeStamp(0.318360112284);
    msg.setSource(26980U);
    msg.setSourceEntity(17U);
    msg.setDestination(33629U);
    msg.setDestinationEntity(89U);
    msg.timeout = 44798U;
    msg.lat = 0.613615992481;
    msg.lon = 0.785536538906;
    msg.z = 0.5767076455;
    msg.z_units = 121U;
    msg.amplitude = 0.0127300370441;
    msg.pitch = 0.975422628954;
    msg.speed = 0.802042372289;
    msg.speed_units = 227U;
    msg.custom.assign("TBKOLOJRKFRCGCOYZCGDYEZDLQEQZZUNURGFWDRWCNIRPQLDIWTSVYPTEYQVUAUOKWBUGXKRFHPRLBEFK");

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
    msg.setTimeStamp(0.630164081781);
    msg.setSource(60321U);
    msg.setSourceEntity(212U);
    msg.setDestination(16467U);
    msg.setDestinationEntity(162U);
    msg.timeout = 5926U;
    msg.lat = 0.454939521094;
    msg.lon = 0.792595169261;
    msg.z = 0.839140866235;
    msg.z_units = 9U;
    msg.amplitude = 0.258279132952;
    msg.pitch = 0.661696779684;
    msg.speed = 0.593013816756;
    msg.speed_units = 217U;
    msg.custom.assign("GRZNFWNCHGFPKLQCYGOPONZIRAAUMLIWCHPSJOFZGTVLSUASSHQJUXQTIDRPDYZGXQWKQMADSILEAWEFZHLXTDVFWEKEWUPQDKIEAROEZLRBKFXAURJHDCUCGSQYXPGBVYKMFFEPQLTRTLBMPV");

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
    msg.setTimeStamp(0.158884993178);
    msg.setSource(2199U);
    msg.setSourceEntity(35U);
    msg.setDestination(48892U);
    msg.setDestinationEntity(236U);

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
    msg.setTimeStamp(0.614370906145);
    msg.setSource(27782U);
    msg.setSourceEntity(70U);
    msg.setDestination(44626U);
    msg.setDestinationEntity(189U);

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
    msg.setTimeStamp(0.228552393508);
    msg.setSource(17838U);
    msg.setSourceEntity(58U);
    msg.setDestination(30422U);
    msg.setDestinationEntity(110U);

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
    msg.setTimeStamp(0.553899546402);
    msg.setSource(11064U);
    msg.setSourceEntity(41U);
    msg.setDestination(2158U);
    msg.setDestinationEntity(118U);
    msg.lat = 0.766699211391;
    msg.lon = 0.682703983893;
    msg.z = 0.0447908007376;
    msg.z_units = 57U;
    msg.radius = 0.432278228536;
    msg.duration = 34592U;
    msg.speed = 0.763621352549;
    msg.speed_units = 148U;
    msg.popup_period = 4213U;
    msg.popup_duration = 53841U;
    msg.flags = 197U;
    msg.custom.assign("QQWEDKITCKUIBJYRCROBGNBFQJPTIOOTPRQLVJVDRKSWPCNDOSPLGSQWXYEWWKIAFIPNLMXGRRMAAGAQWPHTCVESDYVSGUQEYEBCZVYXLEBSNMBSGRDFSVKXEHOAXTAPZBIKVMBKXHDFCYMLDTZEZIVQUOYMBGRIXHPNCYRWUGVJNFEMIHTMLAPLJAJKHFDHBCUZOTCLVHLZAMOYIREZMXQSJPTUXZXSLUUTHOUHAFQWNUNYZNCFJG");

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
    msg.setTimeStamp(0.894235163587);
    msg.setSource(26546U);
    msg.setSourceEntity(164U);
    msg.setDestination(56970U);
    msg.setDestinationEntity(210U);
    msg.lat = 0.309809596515;
    msg.lon = 0.880619853092;
    msg.z = 0.657232391581;
    msg.z_units = 39U;
    msg.radius = 0.381136536207;
    msg.duration = 45102U;
    msg.speed = 0.789216884201;
    msg.speed_units = 93U;
    msg.popup_period = 36557U;
    msg.popup_duration = 12731U;
    msg.flags = 46U;
    msg.custom.assign("FKMQVTACTFBWUOUPEKBKLHUSJMNWTHLSXTHJPNIQVDCUQOLDDHJDDBYOZUATVHFYVZRJISCHUVRAODVZGMBVSFZIKDPGLOUSPCQWMRMISGWNQQVCBSBNCUPCVXNOERBKIXEPSQFXEANEGBCZYGAPWMEKQHXHYGMBXFUWTZLJTRMPJEOELRLSKISTVWETGPDIA");

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
    msg.setTimeStamp(0.415884142362);
    msg.setSource(55972U);
    msg.setSourceEntity(207U);
    msg.setDestination(5817U);
    msg.setDestinationEntity(151U);
    msg.lat = 0.0943612562638;
    msg.lon = 0.759595281062;
    msg.z = 0.336635617605;
    msg.z_units = 96U;
    msg.radius = 0.360845697188;
    msg.duration = 3385U;
    msg.speed = 0.170320440449;
    msg.speed_units = 20U;
    msg.popup_period = 30390U;
    msg.popup_duration = 60456U;
    msg.flags = 28U;
    msg.custom.assign("ZTGVYBXREHHVJOGMUKQXSCVKSIQLHXDBGOGPAPZFKTVWJIAYEYJOSNLMGZHPDQGJRHTSNKWPHEUCAZJDTHRFIJBZLAOJSVZNXMYSUMGKORQYWSHNXNPOSUYAIKCUBTSUGEACQTICWNUPFLWYEVMFUCZXBACHLDORPWYQYTQMTKQABRKCNMFILLIRDZEBLZRMABABXZWIDUEFIIUTRJXYWQONDKDSEXEVFLWGQPOOMPXCNRLKFGNMVW");

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
    msg.setTimeStamp(0.506552114876);
    msg.setSource(15309U);
    msg.setSourceEntity(37U);
    msg.setDestination(16749U);
    msg.setDestinationEntity(48U);
    msg.timeout = 30227U;
    msg.flags = 48U;
    msg.lat = 0.588698871737;
    msg.lon = 0.480052849892;
    msg.start_z = 0.181687242531;
    msg.start_z_units = 24U;
    msg.end_z = 0.871980955676;
    msg.end_z_units = 155U;
    msg.radius = 0.199587516097;
    msg.speed = 0.714361753319;
    msg.speed_units = 170U;
    msg.custom.assign("FAJWEUFTJGNYBMJIRKQHQOYU");

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
    msg.setTimeStamp(0.163370641735);
    msg.setSource(35380U);
    msg.setSourceEntity(85U);
    msg.setDestination(7553U);
    msg.setDestinationEntity(68U);
    msg.timeout = 55812U;
    msg.flags = 37U;
    msg.lat = 0.854803741925;
    msg.lon = 0.257412314047;
    msg.start_z = 0.807831891349;
    msg.start_z_units = 72U;
    msg.end_z = 0.313948819953;
    msg.end_z_units = 18U;
    msg.radius = 0.881615311492;
    msg.speed = 0.0619515568109;
    msg.speed_units = 175U;
    msg.custom.assign("NQFVRMQNJBEGNAHTXBFESXLSTFMWLRGYKPGHJOSODMXDNHYNXUOBYVHZGEPSWKRRCYTAAPKTSGIXDOUOLOYFGHUDATSJDJYAXKABZFZCGIIMBWBNNWBZXCYQJLVITCWAQIMRVGEUBUSVTQPGKKL");

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
    msg.setTimeStamp(0.792940882869);
    msg.setSource(28436U);
    msg.setSourceEntity(238U);
    msg.setDestination(32350U);
    msg.setDestinationEntity(130U);
    msg.timeout = 18201U;
    msg.flags = 250U;
    msg.lat = 0.0289538052489;
    msg.lon = 0.364688996415;
    msg.start_z = 0.600438610572;
    msg.start_z_units = 8U;
    msg.end_z = 0.921275846139;
    msg.end_z_units = 209U;
    msg.radius = 0.64140757727;
    msg.speed = 0.277847742757;
    msg.speed_units = 93U;
    msg.custom.assign("HIAXPIWEYOZSPMJFYJEWBJHIAMQTKKLGMKYLAHBWGDXAGMFJBXLUMXRTQSSCXGOAKHPZVHNRKGOWHFZXHRTQPCKEOSLMCDYUITR");

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
    msg.setTimeStamp(0.110803244854);
    msg.setSource(62807U);
    msg.setSourceEntity(205U);
    msg.setDestination(1990U);
    msg.setDestinationEntity(78U);
    msg.timeout = 11605U;
    msg.lat = 0.886387454838;
    msg.lon = 0.472180960869;
    msg.z = 0.313561150748;
    msg.z_units = 131U;
    msg.speed = 0.833062665189;
    msg.speed_units = 177U;
    msg.custom.assign("HNHATYLCSFCSGGZYWOHRXHJRPGCZFCNDGQERPRUOCVPKXMZWNGPIORVWHLFBTTMOBUOYIMBAUTAVKSECUPOOKQITVMTBLSJZXYTKSGNSPXUYDBWRNWFADQNQWPYCIOEYSTFNXVHVFIBHPEZLISKZUZEEMWAQMVRJDRFFKFVMD");

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
    msg.setTimeStamp(0.388169520254);
    msg.setSource(29121U);
    msg.setSourceEntity(207U);
    msg.setDestination(61017U);
    msg.setDestinationEntity(99U);
    msg.timeout = 24197U;
    msg.lat = 0.919592643038;
    msg.lon = 0.216103492158;
    msg.z = 0.1274905938;
    msg.z_units = 160U;
    msg.speed = 0.0108534714441;
    msg.speed_units = 214U;
    msg.custom.assign("YCQAWMNUESYRSMHHEADFLPZJHUOJZGNHXADWNNTFXLZTBYXSQCEPCUIPVDQTZOABTKNYRJQTGFMNKSOFVKWODYFDUXBJSV");

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
    msg.setTimeStamp(0.314566027292);
    msg.setSource(11030U);
    msg.setSourceEntity(145U);
    msg.setDestination(51111U);
    msg.setDestinationEntity(5U);
    msg.timeout = 65107U;
    msg.lat = 0.372109826162;
    msg.lon = 0.152805341746;
    msg.z = 0.833500184173;
    msg.z_units = 142U;
    msg.speed = 0.773967384417;
    msg.speed_units = 78U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.135230615186;
    tmp_msg_0.y = 0.939059713335;
    tmp_msg_0.z = 0.0363531190487;
    tmp_msg_0.t = 0.907740569503;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("LBYLMWOBHQCTUGPQQSNYWJCFSLGZDJVPFRBKVECLUIPEWRFLDMNHLNFOHKYFGUMHDVYMBURQAHNZXHPZYLASXQPQVRMETMCYUBIFPWMJDYEMVWFVXAQTKRIXVMRYLJJDGZCCWBPEUKSXQTRMOCGXRNGIRAWUIVCDIGU");

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
    msg.setTimeStamp(0.962629984103);
    msg.setSource(47247U);
    msg.setSourceEntity(116U);
    msg.setDestination(29329U);
    msg.setDestinationEntity(171U);
    msg.x = 0.921480443568;
    msg.y = 0.467181494795;
    msg.z = 0.373821060694;
    msg.t = 0.717397300507;

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
    msg.setTimeStamp(0.0741505168444);
    msg.setSource(13383U);
    msg.setSourceEntity(62U);
    msg.setDestination(43989U);
    msg.setDestinationEntity(234U);
    msg.x = 0.419553314849;
    msg.y = 0.355484409785;
    msg.z = 0.68602332402;
    msg.t = 0.539997831731;

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
    msg.setTimeStamp(0.504473248036);
    msg.setSource(160U);
    msg.setSourceEntity(165U);
    msg.setDestination(54072U);
    msg.setDestinationEntity(74U);
    msg.x = 0.7610217781;
    msg.y = 0.416258378343;
    msg.z = 0.252503366385;
    msg.t = 0.160231752106;

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
    msg.setTimeStamp(0.903206850644);
    msg.setSource(13804U);
    msg.setSourceEntity(3U);
    msg.setDestination(56690U);
    msg.setDestinationEntity(116U);
    msg.timeout = 57206U;
    msg.name.assign("BSDTLUHXZMHLWTBFCWTEAGVXBFJLBNCRDGOHBJZNFSGQS");
    msg.custom.assign("VTRSTKRHWJDSDXEOVZDQFNZAAVDIGSGKTBIGGUMABSANIQKFUJWHZVTTZBZQWXYOUJPVCTDBGNYUDEQLPWECOWHGLJMLSEZZQHIKQXSICRMCQUDJLZYZMHFJRMTMLXYXBBFGOEGFSUXTDMNVDPEAVNMFPCECOPQOWJFLOVYQAZKONAYPBJ");

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
    msg.setTimeStamp(0.478791666496);
    msg.setSource(55433U);
    msg.setSourceEntity(40U);
    msg.setDestination(21783U);
    msg.setDestinationEntity(81U);
    msg.timeout = 25782U;
    msg.name.assign("JZSXZIGRQPQBNNMCNLGFWWUTXPJCEWCDDMEICQBUQFGFBPKIVOTGCPZHFTZUOPBGGYUBVQXAFMZRKQKBPSLTILILNNENJTTLOXPD");
    msg.custom.assign("ACBJXLQHENFCXRZEXBTVFTUEQKVHKWBREWAAOJAHZCJIOURUOLOZJARKIFUXPUDEISYHHVOYBDYDPTXXRXFDQCYNCPGLOYVGJICSPEWRMPGBNRMOZPSKNLGOGJPIFIJLZZGMUDTMVXAJV");

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
    msg.setTimeStamp(0.250024873457);
    msg.setSource(44842U);
    msg.setSourceEntity(249U);
    msg.setDestination(7947U);
    msg.setDestinationEntity(196U);
    msg.timeout = 12901U;
    msg.name.assign("ICBFGRHAXPTAPODKQVZXTWLOOKIHFVAIETUERXLIMPFUEAUTZZVIDEOVNZGUXPQGHUVEYEDNCPACDRTITTDCYPQIOSEZUJARNMQTWVVSSTWNBDIWJUFWZLKRQJRZGSCHXKBLGVKPLKQDYXMEWNMNBABJMOQBQDGLHOCPNJRMOSCSQHWRZQSNGCMOISXENMDUYYFASGYIKWGGLEVHYKBFJKMMRPC");
    msg.custom.assign("XQHUNPEOYGMXTYLJJOCZABJIKEYNOAIQREPYMRNHPGNGUPTSKZSAYBJFDPIVEMGAXMTVNWMXXDHHZHUWSIPWTRCILESERONYZGQGNOJVDILWJFVDFSEMRCXGCAFAVSFBTTAZBKVYWLUBSLPEPYMRLHZMMZQDDUTBKBGTKIAFHJUDLIXOHBQSLILTBFJVQGFODTVNJQ");

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
    msg.setTimeStamp(0.453269121129);
    msg.setSource(60269U);
    msg.setSourceEntity(120U);
    msg.setDestination(21218U);
    msg.setDestinationEntity(17U);
    msg.lat = 0.869702381508;
    msg.lon = 0.159293058483;
    msg.z = 0.288701274852;
    msg.z_units = 161U;
    msg.speed = 0.306501937013;
    msg.speed_units = 84U;
    msg.start_time = 0.759977790734;
    msg.custom.assign("HHLGGFDFSCCQUQXVLUJEQAYGKTENKTQWZINGSVVEOTSZMLOOVWHPSJEUUXUNLPDCFLTOUHVDGWMEMRKOIZOYLBARPRPMMKAIXNJAAKPXNYVYOSZLRRHMMHODBERYXMMJLRQIIAEJWFHSNICZXTFKCTCZJSYYOGGXGFIZSXBRIQQPXMGIHACPNDRINOJJCTEABRYBYDECEKSGKFDQHPKCXPHFPTQZBUJWVDBQDUABWBZVSTLUDTAFKWJNVYWZ");

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
    msg.setTimeStamp(0.735669450679);
    msg.setSource(2489U);
    msg.setSourceEntity(105U);
    msg.setDestination(54969U);
    msg.setDestinationEntity(12U);
    msg.lat = 0.548228577404;
    msg.lon = 0.105060550299;
    msg.z = 0.513274060781;
    msg.z_units = 122U;
    msg.speed = 0.920627270055;
    msg.speed_units = 198U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.805366698336;
    tmp_msg_0.y = 0.488974419282;
    tmp_msg_0.z = 0.153075573179;
    tmp_msg_0.t = 0.637267895342;
    msg.points.push_back(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 53437U;
    tmp_msg_1.off_x = 0.486111394193;
    tmp_msg_1.off_y = 0.243362648596;
    tmp_msg_1.off_z = 0.56288875708;
    msg.participants.push_back(tmp_msg_1);
    msg.start_time = 0.118669532518;
    msg.custom.assign("DIYQLDLNRHDOSENCYFZMOAQFQSNIWXRJMKCLFCTASUOPCKZSGJJLXVZUMVUQMQKSFDHERETPYAHUIPDVUNGJAIXEWZYVBTBPUWNXLOXJBAFMEUBZEIJRYPPTKWTIPZKSOWJNMXGKURFJFHHROOABPPWZROSSVDIFWLLXYVQVXAUULTBGNTAKCEONSEDQNCOATXYDFACNGEMISGYQLHKGZMMHQGRIZVJFKKBGVVCYCXTDBPHBMRWIZ");

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
    msg.setTimeStamp(0.800405021508);
    msg.setSource(52576U);
    msg.setSourceEntity(251U);
    msg.setDestination(18799U);
    msg.setDestinationEntity(252U);
    msg.lat = 0.539788491434;
    msg.lon = 0.201962775438;
    msg.z = 0.650775413551;
    msg.z_units = 163U;
    msg.speed = 0.342722673188;
    msg.speed_units = 8U;
    msg.start_time = 0.710017044698;
    msg.custom.assign("EDQUHTJZXOMEVXCESBEHSJVHUPTPXFQTY");

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
    msg.setTimeStamp(0.686120287793);
    msg.setSource(55471U);
    msg.setSourceEntity(108U);
    msg.setDestination(64609U);
    msg.setDestinationEntity(214U);
    msg.vid = 45652U;
    msg.off_x = 0.421315570114;
    msg.off_y = 0.303363592931;
    msg.off_z = 0.0699996904061;

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
    msg.setTimeStamp(0.572695373624);
    msg.setSource(14538U);
    msg.setSourceEntity(219U);
    msg.setDestination(37757U);
    msg.setDestinationEntity(134U);
    msg.vid = 40560U;
    msg.off_x = 0.318166817469;
    msg.off_y = 0.331535831243;
    msg.off_z = 0.147505635819;

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
    msg.setTimeStamp(0.792642888902);
    msg.setSource(26293U);
    msg.setSourceEntity(242U);
    msg.setDestination(6874U);
    msg.setDestinationEntity(224U);
    msg.vid = 12865U;
    msg.off_x = 0.452500729952;
    msg.off_y = 0.910206937746;
    msg.off_z = 0.928342560358;

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
    msg.setTimeStamp(0.0307639292234);
    msg.setSource(12979U);
    msg.setSourceEntity(123U);
    msg.setDestination(41480U);
    msg.setDestinationEntity(96U);

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
    msg.setTimeStamp(0.592291329706);
    msg.setSource(53209U);
    msg.setSourceEntity(166U);
    msg.setDestination(34274U);
    msg.setDestinationEntity(249U);

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
    msg.setTimeStamp(0.612382536474);
    msg.setSource(7199U);
    msg.setSourceEntity(130U);
    msg.setDestination(34489U);
    msg.setDestinationEntity(30U);

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
    msg.setTimeStamp(0.839959630453);
    msg.setSource(65524U);
    msg.setSourceEntity(185U);
    msg.setDestination(40622U);
    msg.setDestinationEntity(37U);
    msg.mid = 42645U;

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
    msg.setTimeStamp(0.681185527983);
    msg.setSource(60396U);
    msg.setSourceEntity(118U);
    msg.setDestination(60446U);
    msg.setDestinationEntity(27U);
    msg.mid = 59063U;

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
    msg.setTimeStamp(0.146604171065);
    msg.setSource(20084U);
    msg.setSourceEntity(170U);
    msg.setDestination(65530U);
    msg.setDestinationEntity(24U);
    msg.mid = 59230U;

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
    msg.setTimeStamp(0.688922146255);
    msg.setSource(30067U);
    msg.setSourceEntity(213U);
    msg.setDestination(5884U);
    msg.setDestinationEntity(14U);
    msg.state = 135U;
    msg.eta = 8856U;
    msg.info.assign("UUHEDZEOFTCOHYEAPRPWBSLKPQCJIYTBQYRRVLEUUCJAFMBONMWBNBWVNYJLF");

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
    msg.setTimeStamp(0.908219285299);
    msg.setSource(43730U);
    msg.setSourceEntity(94U);
    msg.setDestination(17191U);
    msg.setDestinationEntity(156U);
    msg.state = 48U;
    msg.eta = 11518U;
    msg.info.assign("JXCQVKMIATQYANUCUTDQIAKWHACBHVMDBLMJZPVTZGXTQGKEZSKPOBZGCJQLBKHAHLHOSOIJTSBHRBWINVVHIQKKDDZSBYMKGSWXAVRFOFPJRTGRPYNBFIKEHQFYGQALERLUDRCFNNEOMASLDFUSUZFMOUSJMVGZRYGYWFGENZTSUNOQKZ");

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
    msg.setTimeStamp(0.267107107156);
    msg.setSource(57255U);
    msg.setSourceEntity(41U);
    msg.setDestination(18477U);
    msg.setDestinationEntity(201U);
    msg.state = 164U;
    msg.eta = 64860U;
    msg.info.assign("FYMDJAQNFMF");

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
    msg.setTimeStamp(0.911215408449);
    msg.setSource(22174U);
    msg.setSourceEntity(103U);
    msg.setDestination(2577U);
    msg.setDestinationEntity(235U);
    msg.system = 3860U;
    msg.duration = 56637U;
    msg.speed = 0.659061404024;
    msg.speed_units = 13U;
    msg.x = 0.927656032498;
    msg.y = 0.487016899629;
    msg.z = 0.226346782039;
    msg.z_units = 195U;

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
    msg.setTimeStamp(0.80615278715);
    msg.setSource(30204U);
    msg.setSourceEntity(60U);
    msg.setDestination(9835U);
    msg.setDestinationEntity(125U);
    msg.system = 15313U;
    msg.duration = 16300U;
    msg.speed = 0.874461863309;
    msg.speed_units = 20U;
    msg.x = 0.892019316479;
    msg.y = 0.41449277592;
    msg.z = 0.326364535755;
    msg.z_units = 85U;

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
    msg.setTimeStamp(0.111822087252);
    msg.setSource(34525U);
    msg.setSourceEntity(201U);
    msg.setDestination(13153U);
    msg.setDestinationEntity(212U);
    msg.system = 59974U;
    msg.duration = 35980U;
    msg.speed = 0.263956148918;
    msg.speed_units = 22U;
    msg.x = 0.484185663844;
    msg.y = 0.664208576617;
    msg.z = 0.762064747188;
    msg.z_units = 248U;

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
    msg.setTimeStamp(0.406712309793);
    msg.setSource(23818U);
    msg.setSourceEntity(192U);
    msg.setDestination(6466U);
    msg.setDestinationEntity(81U);
    msg.lat = 0.00320440359125;
    msg.lon = 0.222906806179;
    msg.speed = 0.444942786551;
    msg.speed_units = 220U;
    msg.duration = 2786U;
    msg.sys_a = 22749U;
    msg.sys_b = 42864U;
    msg.move_threshold = 0.0894406561871;

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
    msg.setTimeStamp(0.552930114069);
    msg.setSource(35610U);
    msg.setSourceEntity(124U);
    msg.setDestination(30578U);
    msg.setDestinationEntity(18U);
    msg.lat = 0.896437044354;
    msg.lon = 0.51814065112;
    msg.speed = 0.441105201551;
    msg.speed_units = 22U;
    msg.duration = 357U;
    msg.sys_a = 13047U;
    msg.sys_b = 50013U;
    msg.move_threshold = 0.809569358793;

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
    msg.setTimeStamp(0.715733764725);
    msg.setSource(37646U);
    msg.setSourceEntity(167U);
    msg.setDestination(38478U);
    msg.setDestinationEntity(187U);
    msg.lat = 0.977613513392;
    msg.lon = 0.609438498368;
    msg.speed = 0.775941175261;
    msg.speed_units = 211U;
    msg.duration = 3142U;
    msg.sys_a = 15062U;
    msg.sys_b = 993U;
    msg.move_threshold = 0.787244213502;

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
    msg.setTimeStamp(0.562036448891);
    msg.setSource(54473U);
    msg.setSourceEntity(204U);
    msg.setDestination(53869U);
    msg.setDestinationEntity(190U);
    msg.lat = 0.578313506962;
    msg.lon = 0.699839400324;
    msg.z = 0.0102040642414;
    msg.z_units = 101U;
    msg.speed = 0.870420510919;
    msg.speed_units = 123U;
    msg.custom.assign("UDUUYVFOOTERDLPXIWHKXVMFYKAOMILMWYHEIDENPNKIZDTCBGQJHPZXBPATQZDBNLIXYMWRZJEANFTR");

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
    msg.setTimeStamp(0.796689909802);
    msg.setSource(64283U);
    msg.setSourceEntity(91U);
    msg.setDestination(26962U);
    msg.setDestinationEntity(229U);
    msg.lat = 0.0187720526732;
    msg.lon = 0.85396905589;
    msg.z = 0.886468414986;
    msg.z_units = 152U;
    msg.speed = 0.639063870387;
    msg.speed_units = 242U;
    msg.custom.assign("WIXFQXOGGKDCWJJMZIUNJWSGHLLSVOLVEXTHPOSNDAEYFEFPCBPPNWNAEPPIMTSRHRXXQDGKAYDUQPYCVGXLXZUHODRBYWFTIBTRDNBFTQXCLKOOJJWZUNFGULBBOGCEJHQVZMSYZSRHQOFAERFWWETIZNTKIRVMKTUYXMPXDLLKBKEGFRSBHVWPKPIHVUJMGJAMNCCDSBVIAITRBONZLCJEUZHRTEQYCKKDAYOVQMIA");

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
    msg.setTimeStamp(0.806642142371);
    msg.setSource(28115U);
    msg.setSourceEntity(237U);
    msg.setDestination(17115U);
    msg.setDestinationEntity(29U);
    msg.lat = 0.697704072509;
    msg.lon = 0.415004214977;
    msg.z = 0.755399711147;
    msg.z_units = 16U;
    msg.speed = 0.53849503594;
    msg.speed_units = 73U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.63344620189;
    tmp_msg_0.lon = 0.0211116279144;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("DJBAKIXFVAJRDJFDJOGUGOPADPDUNZSJBPWHSMTGIFVWJEPIRFRESROALYBXWULZXAWVFTCNQHBTEHGZVQCXKCQZLTGHQ");

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
    msg.setTimeStamp(0.993839024065);
    msg.setSource(59992U);
    msg.setSourceEntity(184U);
    msg.setDestination(60417U);
    msg.setDestinationEntity(153U);
    msg.lat = 0.617110638633;
    msg.lon = 0.458670509757;

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
    msg.setTimeStamp(0.300117378919);
    msg.setSource(3563U);
    msg.setSourceEntity(247U);
    msg.setDestination(49432U);
    msg.setDestinationEntity(62U);
    msg.lat = 0.558206781013;
    msg.lon = 0.5561105731;

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
    msg.setTimeStamp(0.295813909373);
    msg.setSource(50510U);
    msg.setSourceEntity(60U);
    msg.setDestination(21877U);
    msg.setDestinationEntity(70U);
    msg.lat = 0.682802178087;
    msg.lon = 0.428755313549;

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
    msg.setTimeStamp(0.608648910712);
    msg.setSource(54990U);
    msg.setSourceEntity(80U);
    msg.setDestination(18952U);
    msg.setDestinationEntity(1U);
    msg.timeout = 24970U;
    msg.lat = 0.360136998549;
    msg.lon = 0.934956785775;
    msg.z = 0.687250885941;
    msg.z_units = 5U;
    msg.pitch = 0.295794424644;
    msg.amplitude = 0.144839857313;
    msg.duration = 13383U;
    msg.speed = 0.603580744197;
    msg.speed_units = 140U;
    msg.radius = 0.97841115186;
    msg.direction = 0U;
    msg.custom.assign("JIZDODXPEPFL");

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
    msg.setTimeStamp(0.886038741742);
    msg.setSource(45371U);
    msg.setSourceEntity(188U);
    msg.setDestination(64773U);
    msg.setDestinationEntity(245U);
    msg.timeout = 55346U;
    msg.lat = 0.414967367651;
    msg.lon = 0.00408622432293;
    msg.z = 0.629634043336;
    msg.z_units = 135U;
    msg.pitch = 0.0243585143598;
    msg.amplitude = 0.898327973386;
    msg.duration = 449U;
    msg.speed = 0.942250567998;
    msg.speed_units = 113U;
    msg.radius = 0.750203476613;
    msg.direction = 223U;
    msg.custom.assign("ATDTZPVGNKQYGLQRPBORSWEHY");

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
    msg.setTimeStamp(0.176421404652);
    msg.setSource(27540U);
    msg.setSourceEntity(80U);
    msg.setDestination(3839U);
    msg.setDestinationEntity(12U);
    msg.timeout = 57684U;
    msg.lat = 0.799176810043;
    msg.lon = 0.2422923636;
    msg.z = 0.903030051341;
    msg.z_units = 34U;
    msg.pitch = 0.381709211082;
    msg.amplitude = 0.964175716657;
    msg.duration = 11031U;
    msg.speed = 0.722148524558;
    msg.speed_units = 135U;
    msg.radius = 0.3126128374;
    msg.direction = 97U;
    msg.custom.assign("ZSBVDXZXPVYBJFLPUJUJRTDYEAGYKRQBPSCIMPKJKHKYKVGMYCHDKQSMPNTLWBRWENOXROQKJTUZADOUFRLVHQEXASZVJAUOLDBBYTOASCHQBNBXCCGBPFDWIPNXDAMMUG");

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
    msg.setTimeStamp(0.758417647175);
    msg.setSource(120U);
    msg.setSourceEntity(44U);
    msg.setDestination(42970U);
    msg.setDestinationEntity(128U);
    msg.formation_name.assign("CVLDMJCWFRRAGYRCIZBPSIDVRAVBANSFISWGJUDLYAMBTJUKCVMKWKQXUITWCDOONTPMQFEBBZIGWWVPSVPLPYKHJNMAZHPZGSYYOUJUAPTFQJESEOHJCOREZSGUONRRQNNMXQHQITTEMUNRBAIKODLZQYCRGFCFRLJUOCLFVXZYKDEKFSKXXXNZ");
    msg.reference_frame = 18U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 13904U;
    tmp_msg_0.off_x = 0.24863082598;
    tmp_msg_0.off_y = 0.266761907615;
    tmp_msg_0.off_z = 0.65687733199;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("AIROAKXHJTKYJCAWWUXRUGOHKYPFJMNXLSDBPYJCQAQUVQJQENFQHBBYLGSALRZHUZETTBTJCIKZEDLPCNKDRXFTIUHBWHCDHMSEBTRDPCMMEJPKSHFBGGNUJASOORSZTZYAGOWHYOVVFQULKZGKTMIXBZQCOKOCLKZFERSLXWYTIILXAQVXPQXCBVRPWPSSGVMWVYNEDNQIVOULSYMGEUWMERGIRT");

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
    msg.setTimeStamp(0.827817441125);
    msg.setSource(62362U);
    msg.setSourceEntity(213U);
    msg.setDestination(39338U);
    msg.setDestinationEntity(221U);
    msg.formation_name.assign("GLBGHVUBBFAOHFMLEZBCQCTKJGRKORDKJKWBYZRFRJCJBGUDKQMJTINQECWJGNKSIULIFHBHWHPPOULTFXUNOTJBONUWFYEMNRVSMQEGSLTIYIBRQROXPDDJDAPXMXTZVAUNUCQVYHKJERHYAWYIZNDTBCSGOIDNEXGRPAWFVFZCCVGNZWWZMVYFSSDTIWXXSYLQIQYERHCTHKSJEQPNAZPLEPXWYVVKAXHCSDIVFMELSUQADMMAOUZK");
    msg.reference_frame = 207U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 17908U;
    tmp_msg_0.off_x = 0.761566072699;
    tmp_msg_0.off_y = 0.672645963584;
    tmp_msg_0.off_z = 0.272044054244;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("NOOYBOKYFSVLECMGGZZFYGQCZWYUVILRRHFSVXZZWXJY");

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
    msg.setTimeStamp(0.110036711414);
    msg.setSource(43433U);
    msg.setSourceEntity(49U);
    msg.setDestination(6988U);
    msg.setDestinationEntity(227U);
    msg.formation_name.assign("JVNFJWGHPHWXZKORSKPPAWDHPIT");
    msg.reference_frame = 96U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 37289U;
    tmp_msg_0.off_x = 0.234230912941;
    tmp_msg_0.off_y = 0.0834870858237;
    tmp_msg_0.off_z = 0.643423962756;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("BJZAXDPYLELRGMFHXCBJDGOZJYNZZSERACHWHSJQBSRBLXQCTLIVHAPTKUNXIVGDBSHXBXUGDZFTLXGZEUCHKGFIPBRVYLIIFSWFQSZFIPRYGWOAWRHEFMJDUNFYIZWOWHKKOEUMEBVALPCQGVYJFICZKDUT");

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
    msg.setTimeStamp(0.974261300296);
    msg.setSource(27776U);
    msg.setSourceEntity(234U);
    msg.setDestination(65150U);
    msg.setDestinationEntity(150U);
    msg.group_name.assign("SPYNZFJDWBLQAEBSEOTPRWRYXTKWXDP");
    msg.formation_name.assign("LKMTYIXXRYFILSGOSMPEZIDZIECWDGNOIORREARDQOUCXWHFHKNMJGNHYACEBVEFLIFAZAENJZUUTSFWOBQPBWGYITBKOGMLLXLUWBFBGAFCQDHZHGDHWJYZLDOQAPGXMWYTRDOCFBZTUGKDXQUMPCJNJIQTVIMYKKHXPVTANXSVSRIBUCPVJVTNWPPSTBVYAESURQFFBOVOXPDEJSUCYZQKLDHVK");
    msg.plan_id.assign("DBXVPDNGALTZPFSHNEJASXZCAGNASULSWHLDKCMODEKZENQAZXYOFYIHMZKJLKQSKKCCPGGLRVQJULGSZCJOOQMGWIYPCLJYGIAQNQMWYVOUTDCWETIITFHOOFJGMWYKRRVGYXMZQAFJBXTWKZBODHRUWBPAEAEVQSYIWTZEEBUCRIYIPFFKLFVBUMMOXX");
    msg.description.assign("REEWDVPJHWANUILSQQSEIOYDCRTVVTYJPUXRPWSPETAZLWZLKOCCSXZNYJRPHNLCTOQRGWZUVYOLXXZUIWYHKAFBRIMUGSEEAGECCJKTXHNVNFSUHZYXGCQMV");
    msg.leader_speed = 0.360586084919;
    msg.leader_bank_lim = 0.242466422728;
    msg.pos_sim_err_lim = 0.477422209454;
    msg.pos_sim_err_wrn = 0.000197172518225;
    msg.pos_sim_err_timeout = 42691U;
    msg.converg_max = 0.0291300809625;
    msg.converg_timeout = 1353U;
    msg.comms_timeout = 14235U;
    msg.turb_lim = 0.0840669375602;
    msg.custom.assign("YEYQMBCGXIIOJAEKRYKYXWJOQYQFVHLBPNDWHSJXKVLIXSLHVHOIDHSIBDSPSSUTJNRNUQGCFBTCOTAKBRPOLUUKNFURWEXBMEKHMVFIEGCHUXODRPJTDHLZWUWCDNEELOWHALAVVUPMGMPVEEUZXNFJROWZVNQSUZLDVPAGXIMMNNBHTKBKQFOFBLQXGDGIKYSLYYDXYCTKZZATGSI");

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
    msg.setTimeStamp(0.511942600695);
    msg.setSource(49050U);
    msg.setSourceEntity(20U);
    msg.setDestination(7303U);
    msg.setDestinationEntity(43U);
    msg.group_name.assign("FBWMSGLKVZAYQIFIXJARSUWCUJMVYVIQVLSJEUTRODWXDOEVCJOKXAZVHXAPMLCURSKTDNGAZLVUJPOWXHXQEGFQHDIIGYZYESTHXZJGVYPEYQRLIUTMRPNJZGDCBCUFAJYFKBLPQGFMF");
    msg.formation_name.assign("JYDCXDSQUBWSQE");
    msg.plan_id.assign("IWIOAWKWGDCGEKYTEYBNDUFXJOLDDKNBYBQIZZRAQCRYNAGKTYGYWGCLPQPFNVKTTURHUADKULHMIFRJXPPFZXEQTVVEHQLZQCWCSYVMJCLJZIKRCEOEUIDQOJIMIPXMXWJWYSNWFUBVAPKHTSRBMUDTICLJNMREUSLNEZXDHNRSFRKKLPGXHTJAOG");
    msg.description.assign("LHOMNNCIMVPPXUTAMVXCTZFYLMLADXPHNLWDIWJBAUKICZAJAZCEPDDKOBEYTLBOTHBISWDJDBLUBTQRNKZVZGKGUOQXCPWXCEGGGUJXAAXQUYLAKEDIRWVEEXFLOHZGHZBGFKYEQSNFTQIUOBIFSOJIQVWXEVYUSNKERKDGLPEIYMMYRJSHMHJKATYQWFIWDRSTVZRGKTMMNOQJVTFRCPJOHUPWPXLDYQQWFGVAF");
    msg.leader_speed = 0.393703280093;
    msg.leader_bank_lim = 0.953835290202;
    msg.pos_sim_err_lim = 0.48002030904;
    msg.pos_sim_err_wrn = 0.393258444537;
    msg.pos_sim_err_timeout = 31085U;
    msg.converg_max = 0.302398628348;
    msg.converg_timeout = 27104U;
    msg.comms_timeout = 8949U;
    msg.turb_lim = 0.176112871621;
    msg.custom.assign("HNFBMQNPYHSEKHTRCSPUDAFINFANLZPERDDTJHCSWZFSIISVFVBLWVIDYPZALIZQRBUYCSXTJNVQWBUPEQXNU");

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
    msg.setTimeStamp(0.495291040362);
    msg.setSource(28644U);
    msg.setSourceEntity(74U);
    msg.setDestination(39163U);
    msg.setDestinationEntity(222U);
    msg.group_name.assign("XHSFCJFFRVUEGECWOASDHRETZJSWQHQBVLVARUQGCWEUKQYTAUCGVMFMTKVA");
    msg.formation_name.assign("JRSPKNSKJABCBJKEGXQWZXRYNIZDUEGXLVZCDAENTJGOKLXZTNFGVDVKVNMJQUKSFXWFMUYHCRYHMIFEFVIUTDHTJOBLQURYIOZAQRFYGYOKUJSRLOTTRGESPBNBHUWNZFNFMBOSLOSBIJQXEBCGHSHGLNLIAKQWBYRVCDCUWDWATTCLMWAEOQNARLHMVZPJCPQAPJIYCPIYKYZBUSEEDHGVWZPAXWMQFQIVOALPDPPFTDVOWMGIMXXESKD");
    msg.plan_id.assign("JCIBFGMFZLAXUSGYWRVTUUWKNSYDKFXUYWEORSIYBATXETABDKXYDIDVHHVNHCNLLGPQTPQXALJBFZEDQHBCAVNLEQOSOHIQKZMMRAGJZINBVJRXEPIBWGHSRUZICKPJMPWUQVFRBJDSTMPFRJLJOMCPGTNZGIFZIZWOLHYOMMIXRKUCGAARDONQXSTXENUKDSEQBOPMVVOWKHOHJADGAWETPLNFCWQSUXCDGTKEPYC");
    msg.description.assign("FIBEAUHLOOFNKHZGSKTGWHLSLZDBMINYPIMDKGYXSEDFOMHTCMQABPFOWRIOXUYYPQXEAMTDXFCCCNGLAIVRYSRCULKL");
    msg.leader_speed = 0.694604438946;
    msg.leader_bank_lim = 0.904108017718;
    msg.pos_sim_err_lim = 0.643982713121;
    msg.pos_sim_err_wrn = 0.883026104434;
    msg.pos_sim_err_timeout = 58362U;
    msg.converg_max = 0.111687910632;
    msg.converg_timeout = 8633U;
    msg.comms_timeout = 9002U;
    msg.turb_lim = 0.502816057552;
    msg.custom.assign("OQJCYOPSYIJLCYUADHNPFWPSQVYDHVUTJSQRGAGSAVHNGIXVOBOSDTETRGXKCURQ");

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
    msg.setTimeStamp(0.165241294333);
    msg.setSource(3803U);
    msg.setSourceEntity(88U);
    msg.setDestination(42304U);
    msg.setDestinationEntity(16U);
    msg.control_src = 31085U;
    msg.control_ent = 73U;
    msg.timeout = 0.575251084075;
    msg.loiter_radius = 0.496299374627;
    msg.altitude_interval = 0.634765857347;

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
    msg.setTimeStamp(0.964455187343);
    msg.setSource(58158U);
    msg.setSourceEntity(86U);
    msg.setDestination(57102U);
    msg.setDestinationEntity(138U);
    msg.control_src = 50744U;
    msg.control_ent = 102U;
    msg.timeout = 0.694039562108;
    msg.loiter_radius = 0.06632812842;
    msg.altitude_interval = 0.44513159211;

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
    msg.setTimeStamp(0.838137606862);
    msg.setSource(14084U);
    msg.setSourceEntity(206U);
    msg.setDestination(6330U);
    msg.setDestinationEntity(83U);
    msg.control_src = 62003U;
    msg.control_ent = 188U;
    msg.timeout = 0.758710870505;
    msg.loiter_radius = 0.823358001307;
    msg.altitude_interval = 0.317830921349;

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
    msg.setTimeStamp(0.512507353069);
    msg.setSource(11967U);
    msg.setSourceEntity(228U);
    msg.setDestination(38855U);
    msg.setDestinationEntity(187U);
    msg.flags = 68U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.502993323805;
    tmp_msg_0.speed_units = 47U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.126505681281;
    tmp_msg_1.z_units = 189U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.960463103536;
    msg.lon = 0.795371608727;
    msg.radius = 0.35051744313;

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
    msg.setTimeStamp(0.47488801493);
    msg.setSource(57966U);
    msg.setSourceEntity(40U);
    msg.setDestination(21885U);
    msg.setDestinationEntity(125U);
    msg.flags = 62U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.983615889158;
    tmp_msg_0.speed_units = 150U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.83250454123;
    tmp_msg_1.z_units = 91U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.793778566245;
    msg.lon = 0.940949868567;
    msg.radius = 0.936958446826;

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
    msg.setTimeStamp(0.602147571455);
    msg.setSource(4761U);
    msg.setSourceEntity(183U);
    msg.setDestination(47214U);
    msg.setDestinationEntity(118U);
    msg.flags = 5U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.968357065889;
    tmp_msg_0.speed_units = 137U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.396925527094;
    tmp_msg_1.z_units = 218U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.00357431582083;
    msg.lon = 0.953282562544;
    msg.radius = 0.438887990111;

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
    msg.setTimeStamp(0.735584248725);
    msg.setSource(53992U);
    msg.setSourceEntity(173U);
    msg.setDestination(30344U);
    msg.setDestinationEntity(254U);
    msg.control_src = 50762U;
    msg.control_ent = 119U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 139U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.69586199483;
    tmp_tmp_msg_0_0.speed_units = 52U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.422572376941;
    tmp_tmp_msg_0_1.z_units = 77U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.276226507925;
    tmp_msg_0.lon = 0.826796304698;
    tmp_msg_0.radius = 0.814156833912;
    msg.reference.set(tmp_msg_0);
    msg.state = 206U;
    msg.proximity = 165U;

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
    msg.setTimeStamp(0.360891716616);
    msg.setSource(64989U);
    msg.setSourceEntity(24U);
    msg.setDestination(19574U);
    msg.setDestinationEntity(231U);
    msg.control_src = 4918U;
    msg.control_ent = 230U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 235U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.804308956302;
    tmp_tmp_msg_0_0.speed_units = 202U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.433621440878;
    tmp_tmp_msg_0_1.z_units = 25U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.851290740473;
    tmp_msg_0.lon = 0.801451112432;
    tmp_msg_0.radius = 0.548957202303;
    msg.reference.set(tmp_msg_0);
    msg.state = 16U;
    msg.proximity = 22U;

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
    msg.setTimeStamp(0.606402243433);
    msg.setSource(49649U);
    msg.setSourceEntity(232U);
    msg.setDestination(61251U);
    msg.setDestinationEntity(210U);
    msg.control_src = 24359U;
    msg.control_ent = 43U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 61U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.934931691353;
    tmp_tmp_msg_0_0.speed_units = 10U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.373897223303;
    tmp_tmp_msg_0_1.z_units = 117U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.794270104283;
    tmp_msg_0.lon = 0.752741538241;
    tmp_msg_0.radius = 0.730843728845;
    msg.reference.set(tmp_msg_0);
    msg.state = 49U;
    msg.proximity = 235U;

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
    msg.setTimeStamp(0.589529237297);
    msg.setSource(46519U);
    msg.setSourceEntity(159U);
    msg.setDestination(54362U);
    msg.setDestinationEntity(102U);
    msg.ax_cmd = 0.641739562141;
    msg.ay_cmd = 0.409644288027;
    msg.az_cmd = 0.566270218876;
    msg.ax_des = 0.126188784991;
    msg.ay_des = 0.344435470301;
    msg.az_des = 0.402127191185;
    msg.virt_err_x = 0.541604672031;
    msg.virt_err_y = 0.757746491773;
    msg.virt_err_z = 0.0794734727231;
    msg.surf_fdbk_x = 0.91295550229;
    msg.surf_fdbk_y = 0.137108616157;
    msg.surf_fdbk_z = 0.37113411881;
    msg.surf_unkn_x = 0.285535366722;
    msg.surf_unkn_y = 0.992432885549;
    msg.surf_unkn_z = 0.740487059857;
    msg.ss_x = 0.865305483231;
    msg.ss_y = 0.997899157413;
    msg.ss_z = 0.788894059398;

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
    msg.setTimeStamp(0.552821185492);
    msg.setSource(38917U);
    msg.setSourceEntity(218U);
    msg.setDestination(9770U);
    msg.setDestinationEntity(93U);
    msg.ax_cmd = 0.211859861662;
    msg.ay_cmd = 0.0549728271364;
    msg.az_cmd = 0.409278997603;
    msg.ax_des = 0.865090887031;
    msg.ay_des = 0.914217446928;
    msg.az_des = 0.689543555381;
    msg.virt_err_x = 0.969340321178;
    msg.virt_err_y = 0.949656201781;
    msg.virt_err_z = 0.638985331165;
    msg.surf_fdbk_x = 0.396872873737;
    msg.surf_fdbk_y = 0.467073670037;
    msg.surf_fdbk_z = 0.93472675257;
    msg.surf_unkn_x = 0.583022033493;
    msg.surf_unkn_y = 0.992452179789;
    msg.surf_unkn_z = 0.792634115394;
    msg.ss_x = 0.30403298898;
    msg.ss_y = 0.993358566548;
    msg.ss_z = 0.113004988411;

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
    msg.setTimeStamp(0.476454568107);
    msg.setSource(65417U);
    msg.setSourceEntity(56U);
    msg.setDestination(49720U);
    msg.setDestinationEntity(210U);
    msg.ax_cmd = 0.912877064804;
    msg.ay_cmd = 0.804369782195;
    msg.az_cmd = 0.815310155295;
    msg.ax_des = 0.609901459506;
    msg.ay_des = 0.263551760516;
    msg.az_des = 0.217109378056;
    msg.virt_err_x = 0.679804098413;
    msg.virt_err_y = 0.614151179627;
    msg.virt_err_z = 0.546782932229;
    msg.surf_fdbk_x = 0.542729397405;
    msg.surf_fdbk_y = 0.588109850556;
    msg.surf_fdbk_z = 0.943805334413;
    msg.surf_unkn_x = 0.506833174256;
    msg.surf_unkn_y = 0.460749237054;
    msg.surf_unkn_z = 0.681354755746;
    msg.ss_x = 0.376718824135;
    msg.ss_y = 0.715883132548;
    msg.ss_z = 0.640421361804;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("HDQFWSOMIHUPFUXNQAVJRPCCCSBDULKDQAUUENIWPYKLTBIZOBYRSGJQXMPA");
    tmp_msg_0.dist = 0.403897498064;
    tmp_msg_0.err = 0.552756779037;
    tmp_msg_0.ctrl_imp = 0.711815122621;
    tmp_msg_0.rel_dir_x = 0.0968916420205;
    tmp_msg_0.rel_dir_y = 0.440500107834;
    tmp_msg_0.rel_dir_z = 0.270428213478;
    tmp_msg_0.err_x = 0.504356455015;
    tmp_msg_0.err_y = 0.443006635265;
    tmp_msg_0.err_z = 0.59984698244;
    tmp_msg_0.rf_err_x = 0.721654140642;
    tmp_msg_0.rf_err_y = 0.782660378864;
    tmp_msg_0.rf_err_z = 0.538015714477;
    tmp_msg_0.rf_err_vx = 0.260327235237;
    tmp_msg_0.rf_err_vy = 0.263755264936;
    tmp_msg_0.rf_err_vz = 0.220898637339;
    tmp_msg_0.ss_x = 0.465529894906;
    tmp_msg_0.ss_y = 0.891698173994;
    tmp_msg_0.ss_z = 0.288456940229;
    tmp_msg_0.virt_err_x = 0.582406118381;
    tmp_msg_0.virt_err_y = 0.601572476896;
    tmp_msg_0.virt_err_z = 0.424636417572;
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
    msg.setTimeStamp(0.462516948568);
    msg.setSource(58723U);
    msg.setSourceEntity(190U);
    msg.setDestination(59850U);
    msg.setDestinationEntity(39U);
    msg.s_id.assign("WWQMWJQNMCOPJYAGEXRDSUVOAFOQTXDUPRZHMTVIWFUHBGRSOKPQXSMOVXYUFZFNQLZJPZCNRTCYJIWPPRECIYKAKEGLASDGLINIXCFMJLYA");
    msg.dist = 0.0326690159455;
    msg.err = 0.320900909402;
    msg.ctrl_imp = 0.182906656401;
    msg.rel_dir_x = 0.350126357046;
    msg.rel_dir_y = 0.405388225648;
    msg.rel_dir_z = 0.390517878548;
    msg.err_x = 0.759893351709;
    msg.err_y = 0.504844130199;
    msg.err_z = 0.851391492432;
    msg.rf_err_x = 0.151713933136;
    msg.rf_err_y = 0.818415247739;
    msg.rf_err_z = 0.280214679049;
    msg.rf_err_vx = 0.894150905798;
    msg.rf_err_vy = 0.239812872655;
    msg.rf_err_vz = 0.609333278797;
    msg.ss_x = 0.470759227631;
    msg.ss_y = 0.399996574474;
    msg.ss_z = 0.334305353541;
    msg.virt_err_x = 0.544909868264;
    msg.virt_err_y = 0.904695907251;
    msg.virt_err_z = 0.810355044578;

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
    msg.setTimeStamp(0.141364120613);
    msg.setSource(5318U);
    msg.setSourceEntity(152U);
    msg.setDestination(3757U);
    msg.setDestinationEntity(65U);
    msg.s_id.assign("QSUHCWPKISUSVWRLAYGLEAXQPTXGESSWWDUTFDKLCKPDMBPDSDJZKZBXBRIEHBIRUQVQWDENTBDHNOQJWGRLVQABTMZYCHEIBW");
    msg.dist = 0.143904394062;
    msg.err = 0.620966723435;
    msg.ctrl_imp = 0.298945852646;
    msg.rel_dir_x = 0.753966451917;
    msg.rel_dir_y = 0.71709317616;
    msg.rel_dir_z = 0.582758126433;
    msg.err_x = 0.484444817577;
    msg.err_y = 0.404940913407;
    msg.err_z = 0.725260747052;
    msg.rf_err_x = 0.8240661344;
    msg.rf_err_y = 0.272079093907;
    msg.rf_err_z = 0.0146896544554;
    msg.rf_err_vx = 0.154442102074;
    msg.rf_err_vy = 0.46992793444;
    msg.rf_err_vz = 0.243978158172;
    msg.ss_x = 0.0813232020102;
    msg.ss_y = 0.406743631606;
    msg.ss_z = 0.585506118476;
    msg.virt_err_x = 0.912473137465;
    msg.virt_err_y = 0.0646413955353;
    msg.virt_err_z = 0.52606837333;

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
    msg.setTimeStamp(0.90512791421);
    msg.setSource(63305U);
    msg.setSourceEntity(176U);
    msg.setDestination(61789U);
    msg.setDestinationEntity(123U);
    msg.s_id.assign("CJGCSLJLTDNRIPAUNTZHBUVCNTHZFQZIHQNSXWAUTXOWJMXGGJ");
    msg.dist = 0.0587174431924;
    msg.err = 0.396500735785;
    msg.ctrl_imp = 0.206140094829;
    msg.rel_dir_x = 0.054772682962;
    msg.rel_dir_y = 0.167823977619;
    msg.rel_dir_z = 0.815481394016;
    msg.err_x = 0.0331899089532;
    msg.err_y = 0.401939053594;
    msg.err_z = 0.631274053726;
    msg.rf_err_x = 0.815125314245;
    msg.rf_err_y = 0.954352352535;
    msg.rf_err_z = 0.731524256384;
    msg.rf_err_vx = 0.825059826428;
    msg.rf_err_vy = 0.885157229661;
    msg.rf_err_vz = 0.876562575801;
    msg.ss_x = 0.977045186026;
    msg.ss_y = 0.203062105146;
    msg.ss_z = 0.12659361152;
    msg.virt_err_x = 0.693137785812;
    msg.virt_err_y = 0.434369268624;
    msg.virt_err_z = 0.0750000542693;

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
    msg.setTimeStamp(0.923270880839);
    msg.setSource(61651U);
    msg.setSourceEntity(174U);
    msg.setDestination(1219U);
    msg.setDestinationEntity(19U);
    msg.timeout = 49268U;
    msg.rpm = 0.0873680501511;
    msg.direction = 93U;
    msg.custom.assign("SWGPHGZPJNJIWIKYAGWKEVMTEBXKSCGRCSSAXCJPZYHMOZAMUKQXQVHRGIRHTIVLLTGFMAKDBFXBHMXKLMTC");

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
    msg.setTimeStamp(0.0817032634398);
    msg.setSource(4386U);
    msg.setSourceEntity(139U);
    msg.setDestination(18022U);
    msg.setDestinationEntity(71U);
    msg.timeout = 46513U;
    msg.rpm = 0.0243661368969;
    msg.direction = 51U;
    msg.custom.assign("ZHSDSRQMWZLNVSKKBUPNTPEPVJXJEFYVBWAQTWLNDQKFLIZEUFEQHVENKIKGGTTUCVVYXOEDMQDICPUCHROFRCOFNBALJHNJBLUZXOMCSXHODWRWGZCIEIVOSNYGFRAMGYXIJMZASYALWCFYARPBFHTXRWQTDGLDHZQPOPKTIYGNFMJOLQDGYPMIRHLABNGYJXQUAYKXXPWOUCDLEVZZMKUHWBEESGWJSUIBOJBDCJVN");

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
    msg.setTimeStamp(0.0092835266098);
    msg.setSource(20360U);
    msg.setSourceEntity(205U);
    msg.setDestination(34533U);
    msg.setDestinationEntity(92U);
    msg.timeout = 59601U;
    msg.rpm = 0.94200392782;
    msg.direction = 7U;
    msg.custom.assign("XHWLNJAIEQDPLMGWMTGSWFORMEGHVIZRDOPUXPINPPCLKOCQUNRLDUHFHIKSBNONUHRAUQKSETXPHWYPBZHJSDOYKEPAYYCXWTNQFTMZDVTDIVOXCNTBSZICCDURJIVQFGAJMHHRCPDDFBNGBWFPLKOSXRZWYYRJILSKFEUVMJOFUFIXBGKCVYTUWUTVIGDMZYELEHXAZWRSBVAN");

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
    msg.setTimeStamp(0.844793664966);
    msg.setSource(26346U);
    msg.setSourceEntity(95U);
    msg.setDestination(5362U);
    msg.setDestinationEntity(86U);
    msg.formation_name.assign("UKZKCWWIDZTGGKZLPSFTIWQXKAJXGDEQXLQZVTAKAEO");
    msg.type = 240U;
    msg.op = 241U;
    msg.group_name.assign("GFPAOHTPOACUQDYGGIEWTIHWRVRKJDXBTMMVJCQXXELWXSDKBVWSACRQUVXEHPWQBMQRORMHSECKMGWTKNZJNGDXCRJSBGNUFZTPTFVKXUWPDWEVMJLLPSJDFEOTINJMPEYUNZAZNYZUXBNOAQNLQBOEULVCPTEYHZCBDFKAGAXZYYTSZYODV");
    msg.plan_id.assign("ZOCFICEMEZYRXLWODEPXLRWWZSWIPINNBQBVGKVOLZTWQGJQPVJYMYXBTEAEUEUEQUKPWZOGKZNPRXOEWKALRRJVBE");
    msg.description.assign("AKCYUOBBUNMZAPPWFQVJPWOCHGNFGALXHLRTMNLWRUXIXJOBHI");
    msg.reference_frame = 24U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 13917U;
    tmp_msg_0.off_x = 0.745958219861;
    tmp_msg_0.off_y = 0.736114185497;
    tmp_msg_0.off_z = 0.375102258122;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.731256413764;
    msg.leader_speed_min = 0.120405658699;
    msg.leader_speed_max = 0.987881838999;
    msg.leader_alt_min = 0.314815896046;
    msg.leader_alt_max = 0.305712871029;
    msg.pos_sim_err_lim = 0.476958978957;
    msg.pos_sim_err_wrn = 0.00994570108692;
    msg.pos_sim_err_timeout = 17059U;
    msg.converg_max = 0.776948552104;
    msg.converg_timeout = 56297U;
    msg.comms_timeout = 3701U;
    msg.turb_lim = 0.0453515208243;
    msg.custom.assign("HPEJJXXGHRUCQAAGNUUSBZCFDSTBYTSALLIXZBV");

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
    msg.setTimeStamp(0.236240042385);
    msg.setSource(52285U);
    msg.setSourceEntity(165U);
    msg.setDestination(37080U);
    msg.setDestinationEntity(127U);
    msg.formation_name.assign("LYDRICYZMOMWTFOABAJVLUCFHWCHTWGPEPTRPZVGMENGXJRMWBILGAWGKDACEVOXUKJENXCLQQNRNDUJQBVSSKXZQQFHZKBYYOEZQDZJBVLXPDBSJIIJZYJRGLEHYZLUCPSAOFRKHHROSUXXQABGUIJD");
    msg.type = 91U;
    msg.op = 8U;
    msg.group_name.assign("RNXVDJBRBONEEREBDZAOYNGKGQRPKUIZFJIPETVIFSWSDJSOZKGOFIRGUAWQBCTH");
    msg.plan_id.assign("EXDNOUWWMEZDBQSZKMULAUABDNPO");
    msg.description.assign("XFIXVFKRAYHPWIGDGELAYYLKREHTCXTOTZJXJPHVJUVGZDUWHFHBDHOAKCXCMZFKWATQAKDRZILGNRCWLHOIDVAALNHQSZASUVLBNXTKFESBETNXQPCNQFVDJCQGSMBYBOOWOGNSNNFRIKFEHSCDGHTWBXMBZUSLCPCTAXVYPZVRMJYINISRDOMNFFAYGQMWZLQUIKQJGGOPJVQESVQMEXTDSWBRPTZRUKEUWUKMYIIMLBPYPOPUJLRUM");
    msg.reference_frame = 21U;
    msg.leader_bank_lim = 0.176201909303;
    msg.leader_speed_min = 0.529502733524;
    msg.leader_speed_max = 0.287763059419;
    msg.leader_alt_min = 0.585004652517;
    msg.leader_alt_max = 0.868998553256;
    msg.pos_sim_err_lim = 0.511808431778;
    msg.pos_sim_err_wrn = 0.0240785090657;
    msg.pos_sim_err_timeout = 64526U;
    msg.converg_max = 0.195051675566;
    msg.converg_timeout = 38159U;
    msg.comms_timeout = 2676U;
    msg.turb_lim = 0.469213621238;
    msg.custom.assign("GOOPQCTMYRRYSYYRGPWCBIIDSAPCVCBPENJIJKPUHWACZMKPRIOMJNSQULETKNVRRJFJNEOXEAWXDTKOSZQFH");

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
    msg.setTimeStamp(0.229858940864);
    msg.setSource(11542U);
    msg.setSourceEntity(45U);
    msg.setDestination(193U);
    msg.setDestinationEntity(247U);
    msg.formation_name.assign("OIUMJQNWKQEZTHPOOJEYXLGFAXYWVSUXMBMKWNUPQWDSPQMDVVOGILBIPGSOSSYYIYPERLNMDRAVGYDIWRUERZHIIVMNZRAXUQDFJPCKTHISFXCCNFIHELYDBNZRWZBNLADDRQNATGAUGJLJBNX");
    msg.type = 69U;
    msg.op = 97U;
    msg.group_name.assign("DOIZDJLWFBRNPVUCZGKDDNLASXHPNEBJBKQSSXLBDUVTIMTUKJVHHLREDHPVQWGNFLYCZPUAIPKTAXUGXCTKEMSRRYOZSGTWOIQABLQCBMKZTJFQZOJFYPHGSHUATPIZKQJCVLMJWVADTFGCINMOUNNBAVXOJSLWRFQIRSHBPXYTXYWHZFBGVTFLM");
    msg.plan_id.assign("NUVADZLWKHCGSKTUCNN");
    msg.description.assign("HGJFPBYLDXUXNNYIGSGQOUHJPEWLBQIEGHDUFOYMDQAWHMDKMSWIHYFZTWKTIQXCDNFUFGPNYCLVRVLMWQENTXCCTJAKEGRFCXTKIKSFSREPZUOULWSAIWYWMGAFCDB");
    msg.reference_frame = 109U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 5885U;
    tmp_msg_0.off_x = 0.955408148668;
    tmp_msg_0.off_y = 0.491264678094;
    tmp_msg_0.off_z = 0.231182646971;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.809778901906;
    msg.leader_speed_min = 0.482025049376;
    msg.leader_speed_max = 0.833719308482;
    msg.leader_alt_min = 0.0102272655307;
    msg.leader_alt_max = 0.713955063957;
    msg.pos_sim_err_lim = 0.730621878467;
    msg.pos_sim_err_wrn = 0.0927832037774;
    msg.pos_sim_err_timeout = 16306U;
    msg.converg_max = 0.181467762351;
    msg.converg_timeout = 61463U;
    msg.comms_timeout = 25841U;
    msg.turb_lim = 0.894056963859;
    msg.custom.assign("UZAEXDMATAZCHBZGIUWNHKNIXWUERSVRGLYFEBUDJMFYDNYBEBRMILCHUAAXSQWWVGVKVZHBJOJWKMWZCCXQAPFJZEOSFMJNAVSDACVUGGTTXLJUMDVQOQRPVTTETNEKBOUCMLFTQIJFZHPYFIWPDKKTHGCOIFNQRDQGXYNOQ");

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
    msg.setTimeStamp(0.904785795849);
    msg.setSource(5042U);
    msg.setSourceEntity(110U);
    msg.setDestination(19140U);
    msg.setDestinationEntity(58U);
    msg.timeout = 61847U;
    msg.lat = 0.181231944348;
    msg.lon = 0.0928355611081;
    msg.z = 0.752302438411;
    msg.z_units = 160U;
    msg.speed = 0.0274876723174;
    msg.speed_units = 240U;
    msg.custom.assign("KUPAEJIOBDXNPFFGQFEGOOYZLZSBQZZHJVNGKEWTICCMGYDYKDXFSFWPYPSQOMSWDIMCRVPQYACLLGMPKOWPAWTQYUYWHF");

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
    msg.setTimeStamp(0.122612311129);
    msg.setSource(48227U);
    msg.setSourceEntity(166U);
    msg.setDestination(42295U);
    msg.setDestinationEntity(142U);
    msg.timeout = 14236U;
    msg.lat = 0.530895431922;
    msg.lon = 0.349750380728;
    msg.z = 0.532965442535;
    msg.z_units = 166U;
    msg.speed = 0.078327601062;
    msg.speed_units = 36U;
    msg.custom.assign("EAMAKBBPLMKGXQITJOVNNWLZPVHNGHWFRAGLGNNBLOOMEADPIBTWHIUFLDTDXCIMLLOCEFSKGYIIHJMATDYIWYDXUESFYACBXBXHLSGWQDUYPFVMVAYJHZUVEKSNZOMUVNTQLVZYPREHZKT");

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
    msg.setTimeStamp(0.541894235134);
    msg.setSource(49082U);
    msg.setSourceEntity(113U);
    msg.setDestination(32154U);
    msg.setDestinationEntity(42U);
    msg.timeout = 46700U;
    msg.lat = 0.577845398674;
    msg.lon = 0.606842425975;
    msg.z = 0.491673705143;
    msg.z_units = 102U;
    msg.speed = 0.501730594748;
    msg.speed_units = 30U;
    msg.custom.assign("FYWPAYDLRFHJZOLGSVDWNKPQOYIOMWOTZRIHFIQNWGJYRMKBBOTQCDZSTBRHYLOCP");

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
    msg.setTimeStamp(0.282015013477);
    msg.setSource(1512U);
    msg.setSourceEntity(127U);
    msg.setDestination(13273U);
    msg.setDestinationEntity(46U);
    msg.timeout = 55759U;
    msg.lat = 0.767977621618;
    msg.lon = 0.149482493791;
    msg.z = 0.770262990187;
    msg.z_units = 206U;
    msg.speed = 0.853620531011;
    msg.speed_units = 82U;
    msg.custom.assign("UOHZVRNLDBDELVELXHUTGRWCZOWUWRXFEDPXJYYAZHFWCKPLDDOQUBBJKUENNFQDHFVPAFHIGWMAZUTOTLAMMRVCJZJGXAUICSVVTFALXSOVNHKGLCYWYNJCTSXMBYBPRIVWITLPMWWTUGYJPEAERRZWCMRAPGXCGQOMENKTYTGLOKBFROJDAEICPXSJQSPVYOGNHMCEFNBBYKEKS");

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
    msg.setTimeStamp(0.413515298791);
    msg.setSource(61593U);
    msg.setSourceEntity(21U);
    msg.setDestination(21609U);
    msg.setDestinationEntity(196U);
    msg.timeout = 36229U;
    msg.lat = 0.660729578856;
    msg.lon = 0.886012867863;
    msg.z = 0.868476839328;
    msg.z_units = 88U;
    msg.speed = 0.333006432753;
    msg.speed_units = 130U;
    msg.custom.assign("OQCBBCCWYMAXTSMMKMHRGXQEGTUFJQZSRNPYUWPWBFRXSALIVSTZBNEPOOXZQZMGDWLVZYIUWPTDKJILDROTLFICNGVVABRUHMNZJCGYODSFHBKGZNQYHKPHZFGEDKNCXALFIXOJWHYRLADPYEPMWEUXGDSLBJEESJFQSYWBCHHQCTPAOIGWAXFDEQPVZNTMWKPOOIXIBSMVRNLSEVULFOKLUENGVHKUFRAXJAHVRNKDTQZVJBTQITKCUJ");

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
    msg.setTimeStamp(0.818023750491);
    msg.setSource(43218U);
    msg.setSourceEntity(251U);
    msg.setDestination(57633U);
    msg.setDestinationEntity(149U);
    msg.timeout = 5411U;
    msg.lat = 0.979394043016;
    msg.lon = 0.383270530374;
    msg.z = 0.395798621422;
    msg.z_units = 12U;
    msg.speed = 0.483269636971;
    msg.speed_units = 135U;
    msg.custom.assign("RYNDMKEOALHQRTSIDDYKZPIXZAOFHUFNTPZSHTOTVESNVGZBFLMYQVPSNXSTAOPVFRLDSUZCOSCAKJAVBQWYQHFCSWQQSRJGWXKIJCYWLMTALOWBCDOWNGCMEUUG");

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
    msg.setTimeStamp(0.433231060094);
    msg.setSource(34964U);
    msg.setSourceEntity(69U);
    msg.setDestination(5211U);
    msg.setDestinationEntity(118U);
    msg.arrival_time = 0.185388732193;
    msg.lat = 0.0671098252177;
    msg.lon = 0.0815825890368;
    msg.z = 0.203278422243;
    msg.z_units = 181U;
    msg.travel_z = 0.430162686719;
    msg.travel_z_units = 70U;
    msg.delayed = 178U;

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
    msg.setTimeStamp(0.819682393541);
    msg.setSource(50964U);
    msg.setSourceEntity(46U);
    msg.setDestination(55885U);
    msg.setDestinationEntity(194U);
    msg.arrival_time = 0.445349046103;
    msg.lat = 0.303989216236;
    msg.lon = 0.329638129164;
    msg.z = 0.638074982018;
    msg.z_units = 203U;
    msg.travel_z = 0.316401866601;
    msg.travel_z_units = 175U;
    msg.delayed = 95U;

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
    msg.setTimeStamp(0.850474215881);
    msg.setSource(34177U);
    msg.setSourceEntity(180U);
    msg.setDestination(35113U);
    msg.setDestinationEntity(227U);
    msg.arrival_time = 0.633757531174;
    msg.lat = 0.567245608621;
    msg.lon = 0.998681855806;
    msg.z = 0.458613438262;
    msg.z_units = 198U;
    msg.travel_z = 0.618988625723;
    msg.travel_z_units = 181U;
    msg.delayed = 164U;

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
    msg.setTimeStamp(0.333155268853);
    msg.setSource(662U);
    msg.setSourceEntity(85U);
    msg.setDestination(21912U);
    msg.setDestinationEntity(127U);
    msg.lat = 0.249660020505;
    msg.lon = 0.220353520242;
    msg.z = 0.936847171256;
    msg.z_units = 21U;
    msg.speed = 0.200473544082;
    msg.speed_units = 204U;
    msg.bearing = 0.0401426642101;
    msg.cross_angle = 0.618143657768;
    msg.width = 0.161314339469;
    msg.length = 0.900107287039;
    msg.coff = 105U;
    msg.angaperture = 0.562104066829;
    msg.range = 15367U;
    msg.overlap = 80U;
    msg.flags = 97U;
    msg.custom.assign("AKLZZLMMXUSZYITWMACSVOBDPMGW");

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
    msg.setTimeStamp(0.195469054479);
    msg.setSource(23452U);
    msg.setSourceEntity(215U);
    msg.setDestination(10717U);
    msg.setDestinationEntity(146U);
    msg.lat = 0.570617224174;
    msg.lon = 0.854102628356;
    msg.z = 0.251205390951;
    msg.z_units = 202U;
    msg.speed = 0.695654618512;
    msg.speed_units = 19U;
    msg.bearing = 0.585148104426;
    msg.cross_angle = 0.635891733652;
    msg.width = 0.899197268224;
    msg.length = 0.797752884754;
    msg.coff = 204U;
    msg.angaperture = 0.954218329451;
    msg.range = 17310U;
    msg.overlap = 176U;
    msg.flags = 80U;
    msg.custom.assign("HPZUUIRRKXOCJJKWDTBKPJNTCAVTQRJRFQUEBPFEDHHLAOOAAPAMQPNCKGIFBEPKPIECEBEBWBWNDMLFCAGQHKYZYSFRRIZHWOGCVBFEIQDESPKWETMOSYOKZTSWLFQAQVYHAPYVZYBLLGGJWGNZZMMBQXMJLRNHDOXJGVCSTDLNIGVFWBNYCHUVULXZMXZMSUUTVMSNJCZDDICSOYUNDKTMXYAATIFUV");

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
    msg.setTimeStamp(0.68070261914);
    msg.setSource(840U);
    msg.setSourceEntity(2U);
    msg.setDestination(35256U);
    msg.setDestinationEntity(98U);
    msg.lat = 0.670555776421;
    msg.lon = 0.837718383752;
    msg.z = 0.181228097454;
    msg.z_units = 62U;
    msg.speed = 0.0815775956244;
    msg.speed_units = 22U;
    msg.bearing = 0.740476591356;
    msg.cross_angle = 0.583862231561;
    msg.width = 0.385955628212;
    msg.length = 0.583787221727;
    msg.coff = 40U;
    msg.angaperture = 0.281499437827;
    msg.range = 23707U;
    msg.overlap = 136U;
    msg.flags = 56U;
    msg.custom.assign("GZVCZAVUNTWFWKZJWASTNCKEGDPCENZWDKOUIQPWIKOTMRRCJYGWVYPSEENZFLEZVAYPYHUOVBESIGLFXZJAQAIZOXUWQIALRYFJJEAPNLYUEMARDBHYDICQLZAVNMBJIFUFKXHOCBJXHTBRSXXSRMTGRTBUMRCMGXERRQPWVVPVHLCFWIDHHOKYGTFSPTSNJYUMCKPLTQLHFETWNMNQUIKQGQDNBSULKQJHSBDXHAXJGOB");

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
    msg.setTimeStamp(0.0539285269371);
    msg.setSource(21793U);
    msg.setSourceEntity(100U);
    msg.setDestination(45532U);
    msg.setDestinationEntity(29U);
    msg.timeout = 34334U;
    msg.lat = 0.710865950614;
    msg.lon = 0.271382253698;
    msg.z = 0.444203704647;
    msg.z_units = 117U;
    msg.speed = 0.531609782374;
    msg.speed_units = 158U;
    msg.syringe0 = 200U;
    msg.syringe1 = 34U;
    msg.syringe2 = 164U;
    msg.custom.assign("HJLZDFYPGLWZPZIESNVMVFNUSEGPYXKSLPQDCZOIAUZLUUICSAHHPMYOFCLXQADUGDYRYFQUNUIJVKVOMNGVIXEHEUHQEKPGOGPMIWLWVHCRBNPKDTAIGJBMDMQBLJNITTEEFQVYYAVRRCBNXRUFBLYBSHKBKFZFQQMGWXCPXZUKHQYCEEXSITGRMMKOWSZAACOTOIJZNKJJRXOFNKLXCWDWH");

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
    msg.setTimeStamp(0.385687433283);
    msg.setSource(16854U);
    msg.setSourceEntity(95U);
    msg.setDestination(26065U);
    msg.setDestinationEntity(145U);
    msg.timeout = 21078U;
    msg.lat = 0.735574634772;
    msg.lon = 0.0971378785368;
    msg.z = 0.514259355125;
    msg.z_units = 217U;
    msg.speed = 0.279585933085;
    msg.speed_units = 56U;
    msg.syringe0 = 170U;
    msg.syringe1 = 131U;
    msg.syringe2 = 134U;
    msg.custom.assign("AWKVPDEBCLRVSEOYTDDGIWHUMZLNKHRQFKNMWBOFCSNALXQQRHOXZQVNDFBRYCNLVMLMXIQHDEQDSJSVLPCERAUVUNKTUGARCGWAXJWEOYHVTPGBPXJ");

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
    msg.setTimeStamp(0.0543287519439);
    msg.setSource(22216U);
    msg.setSourceEntity(38U);
    msg.setDestination(38735U);
    msg.setDestinationEntity(24U);
    msg.timeout = 200U;
    msg.lat = 0.0762594577271;
    msg.lon = 0.350001423836;
    msg.z = 0.508652530317;
    msg.z_units = 201U;
    msg.speed = 0.0145789780301;
    msg.speed_units = 17U;
    msg.syringe0 = 157U;
    msg.syringe1 = 19U;
    msg.syringe2 = 41U;
    msg.custom.assign("BTMLPDESASPQPAVZMCJWPFLBZTLJMGIHXYVECXWCVTTCBNGFVMDKFHJUGHNITFQJQOESQDCZYRUGFKKEMRKWUYQGINEODFYEXLATIOPSZGVXWKLWWBAPWDECODZAJUSBXWPMKRZNNZDJVIVSHRSASJIBKSTGESRYWNBOFKQCLRNMZMRIBGYBJZURTPXHIJCXFHUPTHOXLQTYEAIONEXFALYQKLIVXBUZMLUMOONVDDQYCWRGFKAC");

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
    msg.setTimeStamp(0.955533643992);
    msg.setSource(57156U);
    msg.setSourceEntity(2U);
    msg.setDestination(64972U);
    msg.setDestinationEntity(194U);

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
    msg.setTimeStamp(0.576488015113);
    msg.setSource(23090U);
    msg.setSourceEntity(123U);
    msg.setDestination(60012U);
    msg.setDestinationEntity(237U);

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
    msg.setTimeStamp(0.267079643085);
    msg.setSource(7555U);
    msg.setSourceEntity(248U);
    msg.setDestination(59368U);
    msg.setDestinationEntity(104U);

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
    msg.setTimeStamp(0.130098716552);
    msg.setSource(62512U);
    msg.setSourceEntity(193U);
    msg.setDestination(39873U);
    msg.setDestinationEntity(139U);
    msg.lat = 0.00863785239199;
    msg.lon = 0.410596025013;
    msg.z = 0.106500958264;
    msg.z_units = 37U;
    msg.speed = 0.83752226652;
    msg.speed_units = 138U;
    msg.takeoff_pitch = 0.257806332606;
    msg.custom.assign("JKLOMAFPMGJKKSKJUVCTMTAFKPRKKMIBGNVAFWLOMOVBNTXPYZLLGVDOEXDPRJVTALVUNBZMRGUDNQUEJYRSBICXTESTAERWYQUYRKCACLHXZFZTYSNBMSLGCYYOYNXSBPPDWCANSULDIIYURWHJKXGBZAPFQPTCVEIWDYZQHSZVMQJOQRCHQAJEBJXGQQWODHLQZRIIDWAHHVGFONEPIIEKFDXBVN");

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
    msg.setTimeStamp(0.70919425665);
    msg.setSource(52486U);
    msg.setSourceEntity(254U);
    msg.setDestination(26169U);
    msg.setDestinationEntity(72U);
    msg.lat = 0.698705781198;
    msg.lon = 0.487707025242;
    msg.z = 0.356456177491;
    msg.z_units = 80U;
    msg.speed = 0.800018643516;
    msg.speed_units = 5U;
    msg.takeoff_pitch = 0.230854477255;
    msg.custom.assign("UTMKRBUKFSTSVHDOTEPPSRPXJQBXAYAJCKUTWNPVTVHILUX");

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
    msg.setTimeStamp(0.904161061348);
    msg.setSource(45720U);
    msg.setSourceEntity(75U);
    msg.setDestination(38246U);
    msg.setDestinationEntity(224U);
    msg.lat = 0.589612263965;
    msg.lon = 0.508705271095;
    msg.z = 0.533058166465;
    msg.z_units = 163U;
    msg.speed = 0.122028378394;
    msg.speed_units = 161U;
    msg.takeoff_pitch = 0.756178203306;
    msg.custom.assign("XTQIRNZWNUJDIVSGCZWMDOPUNSAGDPSBLBXWKVZJIJCTAFLEDHRHBRXKZVSVJYXIDXWELSZTATTXKYHRAI");

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
    msg.setTimeStamp(0.00229432229376);
    msg.setSource(10470U);
    msg.setSourceEntity(216U);
    msg.setDestination(13554U);
    msg.setDestinationEntity(26U);
    msg.lat = 0.384253592006;
    msg.lon = 0.70460155008;
    msg.z = 0.962050965712;
    msg.z_units = 15U;
    msg.speed = 0.96834359863;
    msg.speed_units = 91U;
    msg.abort_z = 0.218758256563;
    msg.bearing = 0.847340119104;
    msg.glide_slope = 18U;
    msg.glide_slope_alt = 0.86833116123;
    msg.custom.assign("FRXZBLINCUFFKPHUQMDRBJGCGKMZLUQDFIVWUCMFRPGTNNVTCWXXJPINWYUHMQWBGMVSQKQOILSWLYJKQSVARNSTMOEKMPDELSEHWCUGKDQDAGLYWVCQQJTEAXVRPJZBMEFNJIIUDPVHFSRMZYJHXEITFHWUGBCACKBBZXWDHUNOYMPOFAJZWORHDURNEZAAKGVSLHKPYCXTKOZGANLBTRYBDPCVVSXI");

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
    msg.setTimeStamp(0.905625909142);
    msg.setSource(58151U);
    msg.setSourceEntity(199U);
    msg.setDestination(16975U);
    msg.setDestinationEntity(71U);
    msg.lat = 0.182091105003;
    msg.lon = 0.698843588107;
    msg.z = 0.179347533773;
    msg.z_units = 40U;
    msg.speed = 0.949724613528;
    msg.speed_units = 218U;
    msg.abort_z = 0.505905954582;
    msg.bearing = 0.116007892151;
    msg.glide_slope = 254U;
    msg.glide_slope_alt = 0.783087947221;
    msg.custom.assign("HEOGFHPRACQBVGHMCGQOJWXPODRFQDYEHNWWKABEVULRDXEMEMHLVMICBFMDEYDRCZOXBPKWOXKNSMRZZGFPHIDFUIXMTGKBBOIAKYUSYQBJWCWUNNLVRYXGVRDVYMQTIENFXSHNVTTEFIXRAKFOJKWUJHLSHITPUQZG");

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
    msg.setTimeStamp(0.236770446906);
    msg.setSource(34237U);
    msg.setSourceEntity(93U);
    msg.setDestination(50561U);
    msg.setDestinationEntity(92U);
    msg.lat = 0.923556102553;
    msg.lon = 0.316343803608;
    msg.z = 0.810044359191;
    msg.z_units = 114U;
    msg.speed = 0.956849182363;
    msg.speed_units = 254U;
    msg.abort_z = 0.746658927123;
    msg.bearing = 0.426726707251;
    msg.glide_slope = 174U;
    msg.glide_slope_alt = 0.430342161814;
    msg.custom.assign("VWNSMRUNZRQGEURVSZBXVYVLGPUJWZTDJCCTKKHPHJXQOQEZFXHSSPNSJMIFTXHAMDUVNDLIDLFBCFKPOHBQVOJEMOHDKKSEHCTIUBRICDELYYIGZORPWTMWKMNIAEDJZFUURQTVQAKWWJXQXRLHHENTTQOEBEICABWKBSXMZNFFHWOPQDGQXZCCDNOAUXBVAYFPZMKJTVLLLBLMYSIIWRAFZSDULMCOJYPCRGENSXGPYYNVIGARYGFK");

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
    msg.setTimeStamp(0.631699088327);
    msg.setSource(17450U);
    msg.setSourceEntity(130U);
    msg.setDestination(21868U);
    msg.setDestinationEntity(148U);
    msg.lat = 0.400085483076;
    msg.lon = 0.935019028256;
    msg.speed = 0.563416720575;
    msg.speed_units = 47U;
    msg.limits = 226U;
    msg.max_depth = 0.794055757476;
    msg.min_alt = 0.91379503916;
    msg.time_limit = 0.540365238823;
    msg.controller.assign("GVHBZOJERAEYHAAKMWZMTSOHGZAKQXQYXUZHEPMCVZVXNOAHRGUYFQDIZIFWAUQCFVPYGSPGVMEZIAMGESFFPKMPPIRLNBVWTMGDOJMVKEGRDZPRJPYRAQNULRBLEKTDKVNCUCBCVNHLCATINCTSWXBSSTQUBCBSEPRUPAQJDNDOXXYIRJHUDFDXZYOHKGFUMXGKQBLNLWFJMOWZL");
    msg.custom.assign("LMQKHZNDOWMDRDEZZNV");

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
    msg.setTimeStamp(0.457977171907);
    msg.setSource(14253U);
    msg.setSourceEntity(76U);
    msg.setDestination(61434U);
    msg.setDestinationEntity(248U);
    msg.lat = 0.542537611867;
    msg.lon = 0.522007020476;
    msg.speed = 0.347425489936;
    msg.speed_units = 229U;
    msg.limits = 18U;
    msg.max_depth = 0.849345913206;
    msg.min_alt = 0.816079616428;
    msg.time_limit = 0.604007145443;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.450083360271;
    tmp_msg_0.lon = 0.734117496437;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("AUQAUJWUFHRUDMZAQMWEGLPPEYORNPLFLCGQWDAZOYDQVTGXXTVPFBQKILTJDEPRNCRDXFIT");
    msg.custom.assign("BDGAZJNXLRXIVQLVYRSZNTKWUXIICOQNHYKUASYSDUMBGAWCUVSTURMWEQFGZQJISNPDOAWRRXMXIBEKTGJKWXUMTKHGKITUDIPAMYVHIZOSDPXVBJHQWPBYMPZSOEOPHPUNAWOGFUGA");

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
    msg.setTimeStamp(0.672757883354);
    msg.setSource(29299U);
    msg.setSourceEntity(193U);
    msg.setDestination(22000U);
    msg.setDestinationEntity(193U);
    msg.lat = 0.36880525743;
    msg.lon = 0.873496136066;
    msg.speed = 0.724443513652;
    msg.speed_units = 170U;
    msg.limits = 100U;
    msg.max_depth = 0.981295792401;
    msg.min_alt = 0.034170634393;
    msg.time_limit = 0.124915221121;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.902537771124;
    tmp_msg_0.lon = 0.132296861658;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("MADXOSAWDGJFCUWOHZNAVKLKCGOVPZZOAYIERKJKKAVAGFIHFKJJJBJSCEBKOXTMBFIHDPMBPETUZKRQRPMFYLGECURXIYQQQDHILTYNRWDANIBTQLTYBLAEBVVVRLGPKPTGTYHYCHHMVUPOJNWQZRXPWCSTQQPSNBRTXIAUOHQMZUIZNDLOEGOZFMWCPUFVZESRSGUDLJAUMNWXWMFYEZG");
    msg.custom.assign("MEJPBRAYZFBACSIARSPWJVIGWBPKCKQOYQGBSTOGCHWBCUFEYVSCHFQOOILFQRPHNITASXAWYMKGSUCMYLMSTZQZBPTGKCJHUBUOUTTVUXMKEIDOVMTVHPVEDORXERUHMOYDAGLBDJUNLCHAYXKQXVWQLDGNHDZXFONFFQCIANKRVNRZHWNWFUYJLJRFSHAEPAXIJYKZNLXDDNJTXIIQSMWRMJPWUCQIGXKGGWZNBKEDVYVSFRTDLZLJEETEZ");

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
    msg.setTimeStamp(0.551197197914);
    msg.setSource(18157U);
    msg.setSourceEntity(230U);
    msg.setDestination(39947U);
    msg.setDestinationEntity(187U);
    msg.target.assign("WRCQZHEVUDXGUXVCNMQPELBIUCAIMXKJUOVCENZIOCHDZZSNWMSMTNSBKFYPTQKMBKIPZHHPMEV");
    msg.max_speed = 0.944222177463;
    msg.speed_units = 6U;
    msg.lat = 0.48727853836;
    msg.lon = 0.016091753022;
    msg.z = 0.515500549572;
    msg.z_units = 213U;
    msg.custom.assign("KVVSMQSYNUTJFAARCNWYKJNMYAZQIRPFLZGJLXEDAMXQNZKVDLZRACJBCXAHBDPJDQOEPUDTGJFIZGRTMXQADXSFOFIDYNBOIYOBHSLJZTXURHWZVUESOQOGIOGWGEUQLQCHTMKJCGNFANVKNMSUOEGQTLWGPEDCEKXLUKMTFBKJZEJKXCLHWAYEWHICIMNRUHBHVPBSBQKFBWPUTSFNWCYTVSWMRRMPYVYVBPPTEVIRIPXLLSOHIADDYW");

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
    msg.setTimeStamp(0.173149851212);
    msg.setSource(31848U);
    msg.setSourceEntity(252U);
    msg.setDestination(50333U);
    msg.setDestinationEntity(35U);
    msg.target.assign("MQDDXJYOFRDFZVQAETUCYTYOGWMXDQUZNJIEHBKBYYSZAYUBZCASMPRJVCNWLHZIHFWQIJZUOQRTUIQANBDK");
    msg.max_speed = 0.562882918839;
    msg.speed_units = 39U;
    msg.lat = 0.448765230675;
    msg.lon = 0.778240920879;
    msg.z = 0.48513799333;
    msg.z_units = 69U;
    msg.custom.assign("BMAVJLHSAATFGHWFBEGNXVOZCVAJJYFYHBGSQEQLUZNIATNYPHVBFGKKBZGLTNFCFEPDJZ");

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
    msg.setTimeStamp(0.858373294881);
    msg.setSource(13581U);
    msg.setSourceEntity(229U);
    msg.setDestination(39234U);
    msg.setDestinationEntity(194U);
    msg.target.assign("HLFCUKSKWXRDIYMZRIBZCCITTVJXQPGDJZUXBMHLZHTKKATSPEAAXNRQDUZBHFOUVUFJQMYOQPCSGYWGSKBTIUOPFEJQBLPDQOIAQCNBNLY");
    msg.max_speed = 0.209551674438;
    msg.speed_units = 188U;
    msg.lat = 0.0924867622189;
    msg.lon = 0.719996646819;
    msg.z = 0.920213059922;
    msg.z_units = 63U;
    msg.custom.assign("AAQRCYFETRYEPOZJXLVNFBAOSQYAJNPFZHPGKUQTTMCDGVYDGKUEKTWPJSASNIHHGBTPENVEIUSWORCCQCNMPNYDHFIXJAXUHWIZIQMSBZLLUOZIKHJWVZOPCGLDXWLFMNIBBGXIQCMYBKLVRVYOMAEVLIFTPSGBSGEIMBFVFJFDJRSSZHKWNPWRHQJEYRCAYDCMBDTWAALLXUFRZDTRXUGWQHZCKEMXJVJKDXBUOOSXZLNTREWNQGDUK");

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
    msg.setTimeStamp(0.641905809689);
    msg.setSource(16794U);
    msg.setSourceEntity(155U);
    msg.setDestination(23217U);
    msg.setDestinationEntity(120U);
    msg.timeout = 46764U;
    msg.lat = 0.190181262362;
    msg.lon = 0.788222326469;
    msg.speed = 0.992144563505;
    msg.speed_units = 92U;
    msg.custom.assign("MJYEDAXBXXXJSTZOINQPXJRUHEZBRNLMMKNJDGYBRXNGRPUCYMMRSPVNGTWVVDPIMUFSVIEQJMR");

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
    msg.setTimeStamp(0.307436819113);
    msg.setSource(15394U);
    msg.setSourceEntity(119U);
    msg.setDestination(46927U);
    msg.setDestinationEntity(34U);
    msg.timeout = 9730U;
    msg.lat = 0.390111507083;
    msg.lon = 0.29786329436;
    msg.speed = 0.740068997127;
    msg.speed_units = 77U;
    msg.custom.assign("OEOCOBGKWLZNKCNGUGEPGSGKXTKRZOBQOULTGHWNHFAVUVYTAHPHOXLPLIXSMUCPXXRFJJWFDBLRLDHRJRQDMYJFAAIMOZQLYXFIIEDDEBWPPRMCNMPFQFIJNLZFUWQMTSJYRREKACKSKTHHYGTJUJZVQVMJ");

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
    msg.setTimeStamp(0.0927995841438);
    msg.setSource(63064U);
    msg.setSourceEntity(159U);
    msg.setDestination(30672U);
    msg.setDestinationEntity(35U);
    msg.timeout = 25791U;
    msg.lat = 0.056734677211;
    msg.lon = 0.559246328975;
    msg.speed = 0.217832238909;
    msg.speed_units = 68U;
    msg.custom.assign("QAHYSYZWYKZDJZQQCYKJUKRDSTBVRGLTGIFXNTAJTGPOZFWOBRMOXILQCRVXQFYWXGINYBNKQDVNVZVPTSLTZPHD");

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
    msg.setTimeStamp(0.850893972517);
    msg.setSource(10305U);
    msg.setSourceEntity(20U);
    msg.setDestination(24145U);
    msg.setDestinationEntity(57U);
    msg.lat = 0.0492652865488;
    msg.lon = 0.800660243711;
    msg.z = 0.536653584902;
    msg.z_units = 157U;
    msg.radius = 0.936066656113;
    msg.duration = 47826U;
    msg.speed = 0.672058713732;
    msg.speed_units = 153U;
    msg.popup_period = 28623U;
    msg.popup_duration = 62104U;
    msg.flags = 127U;
    msg.custom.assign("HDTZSIBSRVJAZZNMITCJCDKGBUZYXTWHWZKOJATFNUNBOOEFPYUGMLJYIEJXYXWMFURLYUJPRBCNPPLFNEFQPKKGXSDGIT");

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
    msg.setTimeStamp(0.121822372868);
    msg.setSource(33013U);
    msg.setSourceEntity(220U);
    msg.setDestination(55423U);
    msg.setDestinationEntity(51U);
    msg.lat = 0.530842060722;
    msg.lon = 0.41982308237;
    msg.z = 0.358245354394;
    msg.z_units = 35U;
    msg.radius = 0.568436712554;
    msg.duration = 7413U;
    msg.speed = 0.233112899011;
    msg.speed_units = 88U;
    msg.popup_period = 9950U;
    msg.popup_duration = 25694U;
    msg.flags = 183U;
    msg.custom.assign("HTOODDDJXQHJDBRUTXZQOSAXAZZYPXLMICZCCWGSTHHUISFVMQJOXNAZMUNWVDQHPFKPNQZWZUVSHDPMQJPJYRKCXPKEEEKZJHYKNFBIQDNIIGBUWFGUBLVASCDNLPYEHTENMJIRSWOEJAMFSGYVZNFPQWNTUCXIECIYNUASRLGMXBLWAYPSMXRYCKOQ");

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
    msg.setTimeStamp(0.829391178659);
    msg.setSource(14591U);
    msg.setSourceEntity(103U);
    msg.setDestination(18488U);
    msg.setDestinationEntity(172U);
    msg.lat = 0.57393405265;
    msg.lon = 0.726070568774;
    msg.z = 0.944642006192;
    msg.z_units = 90U;
    msg.radius = 0.24115531106;
    msg.duration = 61577U;
    msg.speed = 0.490919824529;
    msg.speed_units = 179U;
    msg.popup_period = 44870U;
    msg.popup_duration = 15104U;
    msg.flags = 153U;
    msg.custom.assign("ZHXPISPAVUETVYRAOGLPXLIZACHWNZMONPBBTRNNRPFEEUSXMRXZMBBQUHGKWTPDDMSDMQKCTFGRFQCBBNYLTWASANOKJOEVVWEUOIYBGKDJSFCYAXWLNRKFRLHTTCYXVJZFKFYHMDZWNYIWEIKAUWXUF");

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
    msg.setTimeStamp(0.682533581444);
    msg.setSource(3995U);
    msg.setSourceEntity(214U);
    msg.setDestination(30289U);
    msg.setDestinationEntity(146U);
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("SPWAUHYZUJJNCIOIVMSGSQKZGKLNWZTOURSEELRMOHRJLKTFABGHFWRQNHBXSLFTRWOCBCWXGVMSQBUYKTKLYCFGDTERIYJCBYZTVARMFFGPPVEZYNXIWPIYJOJETTIWPLHODDMVMNZLXQJBFHOQKXUED");
    IMC::RowsCoverage tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.398214678447;
    tmp_tmp_msg_0_0.lon = 0.176787613483;
    tmp_tmp_msg_0_0.z = 0.982359362448;
    tmp_tmp_msg_0_0.z_units = 177U;
    tmp_tmp_msg_0_0.speed = 0.211188792824;
    tmp_tmp_msg_0_0.speed_units = 150U;
    tmp_tmp_msg_0_0.bearing = 0.0479614163409;
    tmp_tmp_msg_0_0.cross_angle = 0.322825316323;
    tmp_tmp_msg_0_0.width = 0.0345851560056;
    tmp_tmp_msg_0_0.length = 0.71732548373;
    tmp_tmp_msg_0_0.coff = 13U;
    tmp_tmp_msg_0_0.angaperture = 0.489428676267;
    tmp_tmp_msg_0_0.range = 40766U;
    tmp_tmp_msg_0_0.overlap = 131U;
    tmp_tmp_msg_0_0.flags = 70U;
    tmp_tmp_msg_0_0.custom.assign("OWDNGODWWVFAIGOFZFHF");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::DesiredPath tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.path_ref = 229152849U;
    tmp_tmp_msg_0_1.start_lat = 0.347309060569;
    tmp_tmp_msg_0_1.start_lon = 0.595056503223;
    tmp_tmp_msg_0_1.start_z = 0.868516726352;
    tmp_tmp_msg_0_1.start_z_units = 188U;
    tmp_tmp_msg_0_1.end_lat = 0.931010342846;
    tmp_tmp_msg_0_1.end_lon = 0.454598786053;
    tmp_tmp_msg_0_1.end_z = 0.899034002791;
    tmp_tmp_msg_0_1.end_z_units = 48U;
    tmp_tmp_msg_0_1.speed = 0.651473764302;
    tmp_tmp_msg_0_1.speed_units = 78U;
    tmp_tmp_msg_0_1.lradius = 0.210705359476;
    tmp_tmp_msg_0_1.flags = 195U;
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
    msg.setTimeStamp(0.27713532758);
    msg.setSource(52316U);
    msg.setSourceEntity(133U);
    msg.setDestination(15396U);
    msg.setDestinationEntity(102U);
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("SCQQYXBAUMTUCGXAETNJDJKMOZZMWBJGKBJNBRTXQZRKEGIIQBFDBDBTWWCYATNTDZLHWGVCRFRFOPWPUQURRVOPDPXNMMIMXISPVVVGPHCSUNUALDWTKKOZOVCFYGMQOYQELOFAZIXEBAGFBDHLJIABEKLRMKFCANGMQSLXOTLDNJIWEZUZHLSFHTCIUSVRLXKRXVADNJZPHAYWPIFYPSKXRJMLVCCHQHVE");
    IMC::CoverArea tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.082932612218;
    tmp_tmp_msg_0_0.lon = 0.519778414508;
    tmp_tmp_msg_0_0.z = 0.907891123662;
    tmp_tmp_msg_0_0.z_units = 225U;
    tmp_tmp_msg_0_0.speed = 0.384261129154;
    tmp_tmp_msg_0_0.speed_units = 238U;
    tmp_tmp_msg_0_0.custom.assign("CVLAIIYTWDSBKYQDJSATFGOYNSXWOVSFGPGLUGURVZPSGCVODCEUEKOXNJPRMQIEWGCISBFMPNRLDLWSJJNVZHVXPXJRQZKWQUZQOIUAVJEWUTZNGWXQLRQRBJZYKDWPZXECYTCGQNTFJOLHVXSAJSRCZMBNQOUZYPMTFLLKKYYLHBHHOFNPBEADPMEKCSMTWBABREERKMFODFQFHVTIXXVDYBHMUNHIHGAXDCRNUKAAZKUDL");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::EmergencyControlState tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.state = 152U;
    tmp_tmp_msg_0_1.plan_id.assign("EEBTVNYQCSASYMZBF");
    tmp_tmp_msg_0_1.comm_level = 46U;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    IMC::EntityParameter tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.name.assign("EGRFTZONBPNOVNRAJRSPFRRNMYUTN");
    tmp_tmp_msg_0_2.value.assign("YFWQANVLRTVGDUUGNNEXFMXWIZRBQLSKZTBFWQUHXOKCAGJEYUVNMBKKOGKXGTSIYFKQOLGHQOBQPSQSZMZECPUYMLDIRJUDMYVUZFSDWBRHAYCBBWLTJYCKCEIKIS");
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
    msg.setTimeStamp(0.569025063651);
    msg.setSource(57490U);
    msg.setSourceEntity(58U);
    msg.setDestination(30129U);
    msg.setDestinationEntity(207U);
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("BSMXYHXTHMIMILEPKNCARTIBUJJJZHTNYAQQXA");
    IMC::PopUp tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeout = 22471U;
    tmp_tmp_msg_0_0.lat = 0.663532606337;
    tmp_tmp_msg_0_0.lon = 0.915475685855;
    tmp_tmp_msg_0_0.z = 0.978081815449;
    tmp_tmp_msg_0_0.z_units = 27U;
    tmp_tmp_msg_0_0.speed = 0.509927350002;
    tmp_tmp_msg_0_0.speed_units = 176U;
    tmp_tmp_msg_0_0.duration = 22802U;
    tmp_tmp_msg_0_0.radius = 0.0784550397655;
    tmp_tmp_msg_0_0.flags = 233U;
    tmp_tmp_msg_0_0.custom.assign("JYKMYCXEPQPZHPETAYHCRTUNSVNLPKMVFCFQDXVJGFVWEBXOQALMNZZOGREXJSUJYCTDMHRXNSTZYSETITXNQGJKKWOFNR");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::UsblFix tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.target = 35996U;
    tmp_tmp_msg_0_1.lat = 0.2421429031;
    tmp_tmp_msg_0_1.lon = 0.994111248761;
    tmp_tmp_msg_0_1.z_units = 21U;
    tmp_tmp_msg_0_1.z = 0.2846592746;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    IMC::SetServoPosition tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.id = 9U;
    tmp_tmp_msg_0_2.value = 0.733356074654;
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
    msg.setTimeStamp(0.823285650858);
    msg.setSource(57393U);
    msg.setSourceEntity(97U);
    msg.setDestination(4854U);
    msg.setDestinationEntity(120U);
    msg.timeout = 62145U;
    msg.lat = 0.0774806437463;
    msg.lon = 0.0236504694219;
    msg.z = 0.242962195164;
    msg.z_units = 135U;
    msg.speed = 0.0845985048774;
    msg.speed_units = 52U;
    msg.bearing = 0.795669575379;
    msg.width = 0.339275215304;
    msg.direction = 64U;
    msg.custom.assign("AWLPEFGFAJKLKUHMOXOIQQOWEQREDSCMTQERZGASKNKEBTZNDDLFVGZBDEKZFMFUBHQSNBLWEVEKPBMPIYUPWGYUCXEBHCJLUDRVSTMTTMXAHLYIPKQYDYUM");

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
    msg.setTimeStamp(0.642268700714);
    msg.setSource(51229U);
    msg.setSourceEntity(3U);
    msg.setDestination(25013U);
    msg.setDestinationEntity(15U);
    msg.timeout = 44088U;
    msg.lat = 0.499032000543;
    msg.lon = 0.122639511378;
    msg.z = 0.151754926696;
    msg.z_units = 145U;
    msg.speed = 0.413208257541;
    msg.speed_units = 27U;
    msg.bearing = 0.298451742901;
    msg.width = 0.252414970193;
    msg.direction = 69U;
    msg.custom.assign("OOHHVDHEBRSFKYFNTECICHFAKDMRYLHUMFHAEQJIIRPUITRSXNDFEAAGTVRQICKMGFGNDBWCCFKMIZFEJEIRQTGBLINSBLZLFNEWLGQUCBDXKDSQWTXPHCOGSTSZMTVBQWAZXUXYKXJKMX");

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
    msg.setTimeStamp(0.140665488648);
    msg.setSource(49255U);
    msg.setSourceEntity(122U);
    msg.setDestination(2071U);
    msg.setDestinationEntity(84U);
    msg.timeout = 47784U;
    msg.lat = 0.850187831052;
    msg.lon = 0.337648285708;
    msg.z = 0.903884012257;
    msg.z_units = 165U;
    msg.speed = 0.205291887284;
    msg.speed_units = 232U;
    msg.bearing = 0.641335723113;
    msg.width = 0.611425473833;
    msg.direction = 61U;
    msg.custom.assign("LGTFQZKZJKKMCQNUFHRBXJYOHCXLROUWNBQVAVPWBVCZSUUJPZYOYXPDVTWXEWDABMKHDSAUHNZXOLTTVBOEJTYWVSRWNPEVHIJAFMRYYBNSSRKNKJWGXEQKPMIZDQVUIJCNYVQZTDZCS");

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
    msg.setTimeStamp(0.570817225188);
    msg.setSource(17360U);
    msg.setSourceEntity(5U);
    msg.setDestination(16957U);
    msg.setDestinationEntity(69U);
    msg.op_mode = 181U;
    msg.error_count = 221U;
    msg.error_ents.assign("CFJRTQTLKMZYDBRBBKRIEZCKSHDMUVGVIGRZMMXMBLEOBEQTCAPYUIKQERNONXONDATUOAUFWQTLRVVYVHLTYBIMIAOTDVUWPMCYEFZWFXBRDSNGKGAFSWPFSQSUVJKIVXZNKJFWZCSHPPWSPXNBHWKCTAPTVXXGLHHISECLOJUGAAVQEHGJCRDQKYPNYLJTEDEECJMMIRDBLJXCXSLZOQWARAUFHKOOILYZNS");
    msg.maneuver_type = 58777U;
    msg.maneuver_stime = 0.690940061774;
    msg.maneuver_eta = 43495U;
    msg.control_loops = 1602275612U;
    msg.flags = 174U;
    msg.last_error.assign("PQNKRITWLSOBIWPFFCGIFJERHCMDUFHHMRXDHKVWTVXTWXSDVLIYQEUOYUICVVHIRDDFSGLHIMUPYMALXWJDNQYASDMFGWDGWTXTAQJORJNBLFEAQBYNQKEGOGCZTWP");
    msg.last_error_time = 0.189984765499;

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
    msg.setTimeStamp(0.018436086849);
    msg.setSource(22266U);
    msg.setSourceEntity(247U);
    msg.setDestination(21434U);
    msg.setDestinationEntity(63U);
    msg.op_mode = 20U;
    msg.error_count = 156U;
    msg.error_ents.assign("JUNGBKQHRJYWPTTGTPTWGTUPODWEV");
    msg.maneuver_type = 40337U;
    msg.maneuver_stime = 0.117624264893;
    msg.maneuver_eta = 61149U;
    msg.control_loops = 2380627407U;
    msg.flags = 152U;
    msg.last_error.assign("QVGSNZHPHOGHUTKNGYHYLTMGORUNMDKTFPVUKFPIFIFWSOGFSCEPMTHVEVTTODGKAUSNDYWJTZWTERVRBBOLXQRTUGBESYNOYMRHXBELXGPPWXJIFJZKCPHYIXLZJHOPLQAXRQUAFWMQONNMUAYMAGWDDHXWZAZCEREHENZD");
    msg.last_error_time = 0.727419102615;

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
    msg.setTimeStamp(0.935858580575);
    msg.setSource(22296U);
    msg.setSourceEntity(37U);
    msg.setDestination(31973U);
    msg.setDestinationEntity(127U);
    msg.op_mode = 248U;
    msg.error_count = 33U;
    msg.error_ents.assign("OCVOETMMLGDCSYSUADNRYIVXDHNKBQGFNITTDVOWWDZQHTABHYYCDAKGQZVRRNNMKXIWLPWMNFPFDKJBLRCKSHYKUQQFUALFYEIYEAVSLQPTXVHJEWMTSSNOSKHPPXPQQUKVPOJIPKCZJTOT");
    msg.maneuver_type = 52649U;
    msg.maneuver_stime = 0.641644128977;
    msg.maneuver_eta = 51438U;
    msg.control_loops = 3247856150U;
    msg.flags = 136U;
    msg.last_error.assign("OHSFDMONCWULAPGNQZSHLPWKKHXWXVAQZSUUYINDLKYSKBEMGAKOQFCANJBRTHIQWHPDBWMTLFMBKELSFMYVPOYLCDSAKZVTJRIUJAOEZCMGWVFJVUPEUVRXIPEILRCSOTTTTSYCGVXXKBEIGSI");
    msg.last_error_time = 0.868893655536;

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
    msg.setTimeStamp(0.462359441689);
    msg.setSource(7118U);
    msg.setSourceEntity(48U);
    msg.setDestination(3012U);
    msg.setDestinationEntity(218U);
    msg.type = 161U;
    msg.request_id = 61837U;
    msg.command = 182U;
    IMC::Drop tmp_msg_0;
    tmp_msg_0.timeout = 15526U;
    tmp_msg_0.lat = 0.697653508694;
    tmp_msg_0.lon = 0.861001755049;
    tmp_msg_0.z = 0.172459123718;
    tmp_msg_0.z_units = 204U;
    tmp_msg_0.speed = 0.0744591704565;
    tmp_msg_0.speed_units = 157U;
    tmp_msg_0.custom.assign("UNLIFGOQBJWGXVMSVHTYDYTVUDJKOFWXBNVZGANZBSNZCKDLUTXJYRBYMPHGTOOSYDCWVSPEJRMXFBPDZIHRLVXZPUXO");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 62231U;
    msg.info.assign("APVLMPUQWCNJTONMKGLXUMTRFJVJITSNIHOIBEHCOSYOGJOWLZAROSBQWZTRXXMUEHWULGHNLJSFPEPSXRMDDFBRKXWIFFPYIZSFDSJDQLRKDAZQAMTKOYVOWFAYYFUGZUSSOVVYHBVHJPIREIKSAJQXDWNNIMNAMLPHQBJNYEQDTBUBHZKYEAGTCCCZNFZXEVMXAJRGY");

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
    msg.setTimeStamp(0.795367215168);
    msg.setSource(32269U);
    msg.setSourceEntity(15U);
    msg.setDestination(52916U);
    msg.setDestinationEntity(234U);
    msg.type = 234U;
    msg.request_id = 2654U;
    msg.command = 102U;
    IMC::FollowReference tmp_msg_0;
    tmp_msg_0.control_src = 34375U;
    tmp_msg_0.control_ent = 185U;
    tmp_msg_0.timeout = 0.604812512047;
    tmp_msg_0.loiter_radius = 0.69830317434;
    tmp_msg_0.altitude_interval = 0.610907613891;
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 31546U;
    msg.info.assign("EVNSLFKOQNSXBAJMAMXGMDREAYIMSOQIFVJDEUCFRTKSHAGARAPGOPOLSJQFWESDNRIVPCTTBWUHPFEWMXEPWDYBQBCSZFBQDMXOWCFLPJTCBTUFWHLGEIZMRJIHOVCLTDWDKYKNKTJPYZVIKIXWOGKHAFCCGBBUYNZHZOZHWTALUZMXBIELUVGCCXNSPDYQYKDVZQNTZRYPXLQJELHKGXRGZNKIAEJRLTUDVSS");

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
    msg.setTimeStamp(0.305791593748);
    msg.setSource(54245U);
    msg.setSourceEntity(73U);
    msg.setDestination(31430U);
    msg.setDestinationEntity(72U);
    msg.type = 162U;
    msg.request_id = 1739U;
    msg.command = 178U;
    IMC::Takeoff tmp_msg_0;
    tmp_msg_0.lat = 0.181906312173;
    tmp_msg_0.lon = 0.756547322306;
    tmp_msg_0.z = 0.274673471474;
    tmp_msg_0.z_units = 184U;
    tmp_msg_0.speed = 0.406048098739;
    tmp_msg_0.speed_units = 151U;
    tmp_msg_0.takeoff_pitch = 0.195650889573;
    tmp_msg_0.custom.assign("DZQOPQKKWBULEVOHYCRCRDJLQGXUPAKIYM");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 39782U;
    msg.info.assign("CKAHBEQLHSIBWMKVTDCDXJGGMFALXOYFOYPIBGKTAJSFPYHWHJZMMAYWQCWFRQHDQBVRYZYULVTIDUGTORCIRDNGPGYYVKFRYJLFKOZPKCNAXWUVZXOFLBRZPLJKZWCPMTHWDBGDUEZLIAJMQNAGKGNXOVWLSDFPZCAJZITTFNSNGSBDHQPJWFVLZUCVUSEQMNVNOKSEOJXNRUQBBIERHQXIUXMC");

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
    msg.setTimeStamp(0.979923484113);
    msg.setSource(17552U);
    msg.setSourceEntity(30U);
    msg.setDestination(63961U);
    msg.setDestinationEntity(77U);
    msg.command = 18U;
    msg.entities.assign("SBUXHXDWPKNVTNMRBAHIEMJDDWEFEUVFHGZAFUJBDOKSLXRTRWQPLMOCTDLJTHPAVUBCVWKZPCQQNVSCMIGXVWHWPCCXPVIZPIVRRO");

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
    msg.setTimeStamp(0.814264084958);
    msg.setSource(14517U);
    msg.setSourceEntity(84U);
    msg.setDestination(44181U);
    msg.setDestinationEntity(99U);
    msg.command = 101U;
    msg.entities.assign("PLCYZZYSUTHJINYTEZKBICQOHUDGBMBCYHCIVCXFTLWFXWPREQLEFWJVHQQFMXQLISWLXXFMTDIYJRDGRZJFDYJQYAXZKCCLNJNUZWSZNIMWSGBSANNPAPTGDUPOBRTBASMJKEKUTVBKCUEVRAYOFHNTIEVVOGERKDRKWORKPFDABGBSMUDVQXSXMAHXZDZEIGIKNPJGOLFGAHRQDLVMWPHX");

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
    msg.setTimeStamp(0.345104517354);
    msg.setSource(22327U);
    msg.setSourceEntity(226U);
    msg.setDestination(57666U);
    msg.setDestinationEntity(239U);
    msg.command = 234U;
    msg.entities.assign("WHRRWOAPTMUTWDXDDXALUSQESLEUTMBCNKRXOVJITIUJEBKDERPPVBBZDEIQYHQWGCVHTNIZOFSBMKSPQKNRYGU");

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
    msg.setTimeStamp(0.534575095047);
    msg.setSource(56407U);
    msg.setSourceEntity(90U);
    msg.setDestination(53380U);
    msg.setDestinationEntity(143U);
    msg.mcount = 122U;
    msg.mnames.assign("IZTMXBDOMDKLWGEPUSWEBRXBJJGUOWOFHGTMNFVHSKOJSYBOVTRIKJVVEXSTYHSNQNRQUIILTUPXCXAZAGOAGFXTNCKKFDACYAWULTAYMUTGLQXNQKUNCPLUYFSEVEVLCXZOYNJUIPCPJVBZFILTMQIDSR");
    msg.ecount = 41U;
    msg.enames.assign("PWSNJUSVCXYWTPWHRCBEILFGVMAELVXYBJXMYRKMKUNDLWEDXMQYIGMNTONYIYRYCHXOTRDZZVBYPAGRETILMAKFGVUNDJOUDBQDZRWHJUZFPLPZBBFXASXLNZQKITPVAPHRNPNKLKBFDOLZIQZFXFKIVHSTUQDWKMGVHSYAHBEEVKFGFDOGDMLSYQQOWXCRTUCQZEOHSMGWHVIZPCQFSMCXWS");
    msg.ccount = 246U;
    msg.cnames.assign("CEHYHVOKEIAYILCRWMDYHNNPYSTAHPZKRWFEKPUXTTCXFENJAHIXJGNMODLUWGYNZFXEQHSWZJNNSFDJBLVUYZAFHCLFTSUIQRJYMBTOUNUEJFKFPBFESDPNQYVGSDTUGSQYHJHMVDORIPKKBRZXLVUAXDPZPQQWRBOCVMIKBICLERNABMPTZGDGIUGQEUGJWXZKHMLMXIPRGWACCRLOTMMLWJATQADAEBL");
    msg.last_error.assign("AECHHHDXQYSGLTKCIKVHDKJPAHLEEWLJDPRYIELFUFPHFFSNUGOPUPOBGBLLGZEIVIMNOAREIXSXBZEUSLPGCWQXRFRNOFLGVDWWVNTHDSTTZAUFSXTKCGMAVJRIJMRBKZRDKYKQMZRDDIBVCYYZQHMYAJVZCARITNZOMGJCJBKUWSLTPYPVYZQCFPGMJQIQGQEAWTMKSCUNXQBOFY");
    msg.last_error_time = 0.756977861883;

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
    msg.setTimeStamp(0.85716773351);
    msg.setSource(44038U);
    msg.setSourceEntity(97U);
    msg.setDestination(49015U);
    msg.setDestinationEntity(170U);
    msg.mcount = 48U;
    msg.mnames.assign("ARDCUEKEFAFHAGLKPSBNSQDMEYNMHUZPQLSQWOTBKJDSGWNGTDIHWILOBIHM");
    msg.ecount = 197U;
    msg.enames.assign("ERXGWAUWYIKZSCZZBJKQTJTRPQISGQTMTXMXEQXLDJXFXJFRFVGGHEFHCZACOMLYYJHLYAGMPHAVUZUNKNCUBHBMKMWLLYTPUCDBOYPONOXGJJSTSVDHLAEIGKKI");
    msg.ccount = 158U;
    msg.cnames.assign("MMMIVHPEEXBRIWYZSCDLLFGEMDRYOTVUDBZSFFLNZGOTNGQXAEBEAPSLIRRVBGVKKAKJVJWGSJUAZSHAYJHCRIUAFLOTFQDUNRRATHISJIEGJQILKAYTNMEHQZYBHCARZOPQXRJYTQPQKPFIWWMXHYKVUONNPOUODWYHFDDCRBLWWWMBQXJQXSPCFDLJNGBCTCTWYGPZDNCZKHAIXZOEEBXYJULEVOIZWMCUK");
    msg.last_error.assign("KDXDLCVPYKOOIFTXSBOXRFBSQ");
    msg.last_error_time = 0.967777112305;

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
    msg.setTimeStamp(0.462025088823);
    msg.setSource(62472U);
    msg.setSourceEntity(47U);
    msg.setDestination(5730U);
    msg.setDestinationEntity(27U);
    msg.mcount = 86U;
    msg.mnames.assign("GOKXQMGPAYSLCCDODZAIBFDQAIAFAGNHLKFZGSEARTQKRCNISDXLDPYTABMKPFRAQRPIXRIRIDYVKUODVTBKGFNHYRGTZIUCMJURKKQQSZU");
    msg.ecount = 149U;
    msg.enames.assign("PAVOLOAILBKUUUWIGMAORPNXEMHDKGZZQFMPPS");
    msg.ccount = 48U;
    msg.cnames.assign("UMEYOIYNLMHUOIDEOYLNPVKZFUOBFAKGXQK");
    msg.last_error.assign("VPWWPRLVICFNDHQFASACCMMNLHTMSFZFWCBKISZUBILTKXWSXDXLHPVMRXSEZRTCDUYBGQIEKDJTULMKIBCUXPQNMVCDZUKIJHUJWPDZQYPSTSKBOTUROMNBZMJTUDGRRABDVOGWVXDVRHONYWQNTYDLAIEGARYHVVIEHEPOILLPCGLWQNEEO");
    msg.last_error_time = 0.453869411055;

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
    msg.setTimeStamp(0.883776286681);
    msg.setSource(2136U);
    msg.setSourceEntity(86U);
    msg.setDestination(44285U);
    msg.setDestinationEntity(178U);
    msg.mask = 165U;
    msg.max_depth = 0.99889861655;
    msg.min_altitude = 0.691653128035;
    msg.max_altitude = 0.730018624454;
    msg.min_speed = 0.311747293435;
    msg.max_speed = 0.455311403607;
    msg.max_vrate = 0.268085056326;
    msg.lat = 0.0174146137309;
    msg.lon = 0.76997348701;
    msg.orientation = 0.182934299557;
    msg.width = 0.388245938005;
    msg.length = 0.0736470524679;

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
    msg.setTimeStamp(0.0154960718195);
    msg.setSource(29751U);
    msg.setSourceEntity(146U);
    msg.setDestination(7218U);
    msg.setDestinationEntity(120U);
    msg.mask = 82U;
    msg.max_depth = 0.849159336945;
    msg.min_altitude = 0.598956965432;
    msg.max_altitude = 0.748767135923;
    msg.min_speed = 0.465871764002;
    msg.max_speed = 0.569127597381;
    msg.max_vrate = 0.396729321168;
    msg.lat = 0.843730416313;
    msg.lon = 0.482094276873;
    msg.orientation = 0.705510687256;
    msg.width = 0.593128298913;
    msg.length = 0.740745368698;

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
    msg.setTimeStamp(0.895979090967);
    msg.setSource(44798U);
    msg.setSourceEntity(147U);
    msg.setDestination(48463U);
    msg.setDestinationEntity(4U);
    msg.mask = 23U;
    msg.max_depth = 0.322938278544;
    msg.min_altitude = 0.392238175464;
    msg.max_altitude = 0.897124061044;
    msg.min_speed = 0.127869811285;
    msg.max_speed = 0.502300736007;
    msg.max_vrate = 0.196496376552;
    msg.lat = 0.196052643035;
    msg.lon = 0.902826943979;
    msg.orientation = 0.377777348186;
    msg.width = 0.0775629470808;
    msg.length = 0.644310266314;

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
    msg.setTimeStamp(0.679715598987);
    msg.setSource(16113U);
    msg.setSourceEntity(111U);
    msg.setDestination(43288U);
    msg.setDestinationEntity(31U);

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
    msg.setTimeStamp(0.423934498211);
    msg.setSource(6262U);
    msg.setSourceEntity(111U);
    msg.setDestination(50163U);
    msg.setDestinationEntity(74U);

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
    msg.setTimeStamp(0.108729663405);
    msg.setSource(53451U);
    msg.setSourceEntity(96U);
    msg.setDestination(47202U);
    msg.setDestinationEntity(239U);

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
    msg.setTimeStamp(0.0536855842863);
    msg.setSource(13581U);
    msg.setSourceEntity(96U);
    msg.setDestination(35659U);
    msg.setDestinationEntity(29U);
    msg.duration = 55423U;

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
    msg.setTimeStamp(0.00268275907735);
    msg.setSource(2576U);
    msg.setSourceEntity(169U);
    msg.setDestination(47500U);
    msg.setDestinationEntity(43U);
    msg.duration = 60615U;

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
    msg.setTimeStamp(0.818724664254);
    msg.setSource(57351U);
    msg.setSourceEntity(178U);
    msg.setDestination(30844U);
    msg.setDestinationEntity(114U);
    msg.duration = 41407U;

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
    msg.setTimeStamp(0.312712262771);
    msg.setSource(20007U);
    msg.setSourceEntity(41U);
    msg.setDestination(58269U);
    msg.setDestinationEntity(104U);
    msg.enable = 155U;
    msg.mask = 1815994574U;
    msg.scope_ref = 1781619850U;

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
    msg.setTimeStamp(0.84380938297);
    msg.setSource(39325U);
    msg.setSourceEntity(52U);
    msg.setDestination(15888U);
    msg.setDestinationEntity(25U);
    msg.enable = 45U;
    msg.mask = 1608833311U;
    msg.scope_ref = 1581646860U;

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
    msg.setTimeStamp(0.184119788145);
    msg.setSource(6745U);
    msg.setSourceEntity(3U);
    msg.setDestination(32153U);
    msg.setDestinationEntity(176U);
    msg.enable = 60U;
    msg.mask = 2205460836U;
    msg.scope_ref = 3394981477U;

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
    msg.setTimeStamp(0.910857080684);
    msg.setSource(17697U);
    msg.setSourceEntity(220U);
    msg.setDestination(36919U);
    msg.setDestinationEntity(218U);
    msg.medium = 6U;

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
    msg.setTimeStamp(0.282918212877);
    msg.setSource(26971U);
    msg.setSourceEntity(65U);
    msg.setDestination(15847U);
    msg.setDestinationEntity(175U);
    msg.medium = 226U;

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
    msg.setTimeStamp(0.143685959258);
    msg.setSource(40390U);
    msg.setSourceEntity(133U);
    msg.setDestination(20200U);
    msg.setDestinationEntity(125U);
    msg.medium = 136U;

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
    msg.setTimeStamp(0.721612209517);
    msg.setSource(59692U);
    msg.setSourceEntity(53U);
    msg.setDestination(60874U);
    msg.setDestinationEntity(219U);
    msg.value = 0.656572210565;
    msg.type = 4U;

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
    msg.setTimeStamp(0.37768356879);
    msg.setSource(60906U);
    msg.setSourceEntity(232U);
    msg.setDestination(58876U);
    msg.setDestinationEntity(114U);
    msg.value = 0.181993773567;
    msg.type = 236U;

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
    msg.setTimeStamp(0.00750082167953);
    msg.setSource(25681U);
    msg.setSourceEntity(182U);
    msg.setDestination(31869U);
    msg.setDestinationEntity(198U);
    msg.value = 0.112523021774;
    msg.type = 154U;

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
    msg.setTimeStamp(0.60022752296);
    msg.setSource(15920U);
    msg.setSourceEntity(185U);
    msg.setDestination(40454U);
    msg.setDestinationEntity(190U);
    msg.possimerr = 0.205961321425;
    msg.converg = 0.281224439351;
    msg.turbulence = 0.853663130328;
    msg.possimmon = 241U;
    msg.commmon = 178U;
    msg.convergmon = 15U;

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
    msg.setTimeStamp(0.947560984051);
    msg.setSource(46791U);
    msg.setSourceEntity(36U);
    msg.setDestination(23609U);
    msg.setDestinationEntity(251U);
    msg.possimerr = 0.280935798677;
    msg.converg = 0.682953596571;
    msg.turbulence = 0.818673856741;
    msg.possimmon = 213U;
    msg.commmon = 186U;
    msg.convergmon = 22U;

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
    msg.setTimeStamp(0.696550319908);
    msg.setSource(57169U);
    msg.setSourceEntity(8U);
    msg.setDestination(53224U);
    msg.setDestinationEntity(205U);
    msg.possimerr = 0.504006764824;
    msg.converg = 0.750149302921;
    msg.turbulence = 0.872773818224;
    msg.possimmon = 76U;
    msg.commmon = 61U;
    msg.convergmon = 247U;

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
    msg.setTimeStamp(0.299866312539);
    msg.setSource(26878U);
    msg.setSourceEntity(20U);
    msg.setDestination(18732U);
    msg.setDestinationEntity(148U);
    msg.autonomy = 122U;
    msg.mode.assign("MVIOYBHAZLDNLTCYADIQRCCAIFHCLKAMSNMOQKOMFDBTTVMRVZSUWEWSYNAUBUAOKZQHDUSOGLJTPZBFJTFSPNNEEGKZFHAURFEZBDHDDAEVIFVUIYWBLXYTQHO");

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
    msg.setTimeStamp(0.184871753451);
    msg.setSource(55219U);
    msg.setSourceEntity(155U);
    msg.setDestination(7299U);
    msg.setDestinationEntity(72U);
    msg.autonomy = 61U;
    msg.mode.assign("OLQOXUGEHINESANXLRKZXAVEUPKAOBVPPKWIFMCQFNAUDECTKFUHEFUEBMFORYAIRFBTLRYLHPGMQVRODOUPBLJGIHYKCEDUUN");

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
    msg.setTimeStamp(0.628141308655);
    msg.setSource(36072U);
    msg.setSourceEntity(77U);
    msg.setDestination(12736U);
    msg.setDestinationEntity(50U);
    msg.autonomy = 193U;
    msg.mode.assign("ZWRJMJZERGHUGXKNOVOMXNJHLAUZQYFSHIHFFPPDPUAAWPCPLDNKOTREXJHEVSDSXDCGDASVYGJM");

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
    msg.setTimeStamp(0.979141824642);
    msg.setSource(51324U);
    msg.setSourceEntity(1U);
    msg.setDestination(58168U);
    msg.setDestinationEntity(98U);
    msg.type = 206U;
    msg.op = 166U;
    msg.possimerr = 0.0906493322954;
    msg.converg = 0.82814304326;
    msg.turbulence = 0.364996061631;
    msg.possimmon = 171U;
    msg.commmon = 30U;
    msg.convergmon = 95U;

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
    msg.setTimeStamp(0.875733560402);
    msg.setSource(47788U);
    msg.setSourceEntity(132U);
    msg.setDestination(53256U);
    msg.setDestinationEntity(185U);
    msg.type = 58U;
    msg.op = 36U;
    msg.possimerr = 0.655707000498;
    msg.converg = 0.712592953343;
    msg.turbulence = 0.449194618321;
    msg.possimmon = 34U;
    msg.commmon = 234U;
    msg.convergmon = 76U;

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
    msg.setTimeStamp(0.314744663598);
    msg.setSource(37402U);
    msg.setSourceEntity(172U);
    msg.setDestination(21660U);
    msg.setDestinationEntity(207U);
    msg.type = 18U;
    msg.op = 188U;
    msg.possimerr = 0.725007607147;
    msg.converg = 0.355692450176;
    msg.turbulence = 0.0304705565673;
    msg.possimmon = 84U;
    msg.commmon = 106U;
    msg.convergmon = 212U;

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
    msg.setTimeStamp(0.941637193427);
    msg.setSource(48108U);
    msg.setSourceEntity(149U);
    msg.setDestination(19647U);
    msg.setDestinationEntity(221U);
    msg.op = 194U;
    msg.comm_interface = 56U;
    msg.period = 61629U;
    msg.sys_dst.assign("VMJXRNUWCITRXIALQBTLIINSEATIKRKFVGCWPHNQGURCTALSWRKMJDSZLMCGCOWGSUVHXSOTHSXNJRVQIKLEHNYBBGDDYFEEJQHYFVNBICYXPOWTVFAPQAMVOLDZGODSKBYX");

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
    msg.setTimeStamp(0.194264279778);
    msg.setSource(62675U);
    msg.setSourceEntity(128U);
    msg.setDestination(50964U);
    msg.setDestinationEntity(89U);
    msg.op = 164U;
    msg.comm_interface = 54U;
    msg.period = 21610U;
    msg.sys_dst.assign("ZPXDHGPVFSQVXJOGTPXAZDWCIVWBQWYWBVSULYAXHACBNJWJFVYRSLJJLLBRCXVQJFFULAIOWRYGVKGEHUYXIORZSLKIXKCIMTKOGZDZNUYSYZZGNSDYHBTQIRBSTHCRLMENWTPVIHYME");

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
    msg.setTimeStamp(0.0157799493654);
    msg.setSource(35310U);
    msg.setSourceEntity(243U);
    msg.setDestination(10227U);
    msg.setDestinationEntity(125U);
    msg.op = 226U;
    msg.comm_interface = 226U;
    msg.period = 30407U;
    msg.sys_dst.assign("FQVHUXJTBMGKGXHBOZARELPXVIMPAMUDPZHIEEMJIWEASOZKCYPTZGJITZDNHSYTLIRNRXBQRTJVC");

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
    msg.setTimeStamp(0.96143455314);
    msg.setSource(45054U);
    msg.setSourceEntity(146U);
    msg.setDestination(9346U);
    msg.setDestinationEntity(202U);
    msg.stime = 3516565231U;
    msg.latitude = 0.99403408631;
    msg.longitude = 0.170747129258;
    msg.altitude = 20740U;
    msg.depth = 60311U;
    msg.heading = 31688U;
    msg.speed = -12250;
    msg.fuel = 0;
    msg.exec_state = 10;
    msg.plan_checksum = 62469U;

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
    msg.setTimeStamp(0.77322104582);
    msg.setSource(64344U);
    msg.setSourceEntity(200U);
    msg.setDestination(3352U);
    msg.setDestinationEntity(126U);
    msg.stime = 1053654918U;
    msg.latitude = 0.980382542707;
    msg.longitude = 0.33211046039;
    msg.altitude = 58293U;
    msg.depth = 57734U;
    msg.heading = 13308U;
    msg.speed = 21695;
    msg.fuel = -8;
    msg.exec_state = -44;
    msg.plan_checksum = 43721U;

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
    msg.setTimeStamp(0.665663173229);
    msg.setSource(23408U);
    msg.setSourceEntity(217U);
    msg.setDestination(11425U);
    msg.setDestinationEntity(208U);
    msg.stime = 3625594123U;
    msg.latitude = 0.780998094164;
    msg.longitude = 0.820242956919;
    msg.altitude = 42751U;
    msg.depth = 36938U;
    msg.heading = 18592U;
    msg.speed = 28850;
    msg.fuel = 73;
    msg.exec_state = 125;
    msg.plan_checksum = 14051U;

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
    msg.setTimeStamp(0.345119147423);
    msg.setSource(45600U);
    msg.setSourceEntity(188U);
    msg.setDestination(16433U);
    msg.setDestinationEntity(190U);
    msg.req_id = 6541U;
    msg.comm_mean = 177U;
    msg.destination.assign("ICZLQUMVHRDYNUNVFXQOJKSYRLLFXQUPOLEXEBBMVSGWOPGQIUBOFBQJYQREATNNYLNJUXZVYCJHLPNEJDSAWVIHHWWKI");
    msg.deadline = 0.778825893659;
    msg.range = 0.992277235261;
    msg.data_mode = 232U;
    IMC::AcousticSystemsQuery tmp_msg_0;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("OCDJUBGVWMISVHKJJKUYNHQXVDQGBINJAMCUAZDBSCSAWXGMIHYHVGREDEHVCMDCFFOXKPOSSSXRFZZTUTBCCMNWXDDRJKEAZTBVIBXWHLZYIQMLLPLZMRBSFTAFETKBLSQBWNFVKVMIOWGCLJKKPHRYW");
    const char tmp_msg_1[] = {-29, 23, 75, -101, -2, 96, -10, -60, 94, 36, 70, -96, 45, -65, -49, 91, -58, -58, -10, 17, 108, -92, -35, -49, -105, 107, -60, 112, -81, -125, -53, 111, 113, 114, 10, 92, -41, -101, 22, -103, -96, -78, -123, -113, -97, -109, 64, -6, -53, 106, -76, -82, -7, 44, 52, 84, -58, 10, 8, 65, 77, -88, 44, 112, 123, -124, 50, -115, -112, 49, -16, -80, 51, -70, -126, 86, 84, -43, -88, 87, 68, -54, 60, -83, 60, 79, -36, -115, -74, 72, 64, 115, 93, -78, 70, -29, -47, 16, 78, 121, 56, -106, -4, 65, -17, -85, -78, -76, -79, -38, 102, -124, -128, -43, -90, -87, 8, -22, -93, 44, -118, 43, -53, -108, 100, 74, 56};
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
    msg.setTimeStamp(0.810178778222);
    msg.setSource(5040U);
    msg.setSourceEntity(9U);
    msg.setDestination(5378U);
    msg.setDestinationEntity(135U);
    msg.req_id = 34686U;
    msg.comm_mean = 161U;
    msg.destination.assign("RUYDPRISMDAKSECLLJFFPBKVWGUENOEXVTXWTEHMXHSVVQQRDRXJGMIOCXSTZOOLOAUVWNXOYQUTAIJVHQEZEBTCRRZGKAYYKYYQKLLQXMHAYZSFHXQUGRXHZMPKAOUOSFDWSPSYWDIRTMTFIKEM");
    msg.deadline = 0.156520961583;
    msg.range = 0.37594045981;
    msg.data_mode = 39U;
    IMC::ExternalNavData tmp_msg_0;
    IMC::EstimatedState tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.114228085316;
    tmp_tmp_msg_0_0.lon = 0.219372685973;
    tmp_tmp_msg_0_0.height = 0.805624832547;
    tmp_tmp_msg_0_0.x = 0.402645274565;
    tmp_tmp_msg_0_0.y = 0.448185010877;
    tmp_tmp_msg_0_0.z = 0.044245890152;
    tmp_tmp_msg_0_0.phi = 0.21190419574;
    tmp_tmp_msg_0_0.theta = 0.136085786197;
    tmp_tmp_msg_0_0.psi = 0.443779588802;
    tmp_tmp_msg_0_0.u = 0.353714159042;
    tmp_tmp_msg_0_0.v = 0.0685792296648;
    tmp_tmp_msg_0_0.w = 0.631766298998;
    tmp_tmp_msg_0_0.vx = 0.2237930475;
    tmp_tmp_msg_0_0.vy = 0.0264907249921;
    tmp_tmp_msg_0_0.vz = 0.53918329197;
    tmp_tmp_msg_0_0.p = 0.837787417716;
    tmp_tmp_msg_0_0.q = 0.373106998558;
    tmp_tmp_msg_0_0.r = 0.864196719734;
    tmp_tmp_msg_0_0.depth = 0.435614340707;
    tmp_tmp_msg_0_0.alt = 0.121245129411;
    tmp_msg_0.state.set(tmp_tmp_msg_0_0);
    tmp_msg_0.type = 178U;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("ISBBHKUKVEZFQUMZXHYNYYREEIGXHGNRQOVDURCDGFCKALVPXZTMFNRXFTTCLBOHQFNQYSNHRMDKEACOOXFVUPVPYJWTDKZZLXBSUXHPBGBJCYLXFADMBWGEMNJDPVPUCLLGMMWNTSRCIATZFWSDIYDNJOIUYKRLWSRPDKCBWIKZMERLHPCXQWWCSHZLGRQBEGUAZTWJIEYKSAXOIAYBOSNJVUHTNDWGAKJOETQSALHPMJZTO");
    const char tmp_msg_1[] = {58, 79, -92, -119, -73, -71, -27, 87, 122, 125, 79, -6, 77, 78, -75, 77, 30, -97, 5, 30, 95, 91, -17, -30, 109, -107, -92, 29, -113, -5, 47, 93, -48, 6, 126, 44, 77, 83, 122, 49, 80, -43, 62, -94, 18, 117, 119, 74, -33, 32, -25, -79, 55, -92, 93, 116, -59, -91, -80, -81, -17, -66, 25, 64, 80, -84, 122, 21, -109, 19, 23, -28, -110, 45, -114, -70, -27, -97, 81, -112, -121, -43, 70, -33, -37, -37, 65, 92, 35, -38, -40, -11, 100, -108, -117, -39, 53, 113, 77, 74, 46, -115, 57, -10, -27, 102, 58, 45, 121, -83, -67, 11, -79, -35, 121, -118, -42, 46, 33, 22, 104, 51, 15, -108, 105, 79, -69, 58, 4, 124, 117, 114, 108, -79, 102, 60, -108, -28, 122, -45, 10, -37, -46, 95, 26, -74, 51, -48, -25, 70, 17, -70, 67, 56, 70, 60, -25, -42, 66, -21, -59, -71, 123, -30, 15, 45, -115, 1, -34, -95, 36, -103, 31, 8, 124, 85, 42, -107, 93, -48, -74, -10, 107, 20, -78, -122, -21, 31, 12, 83, -38, -9, -120, 32, -3, 0};
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
    msg.setTimeStamp(0.198560808506);
    msg.setSource(12877U);
    msg.setSourceEntity(175U);
    msg.setDestination(38702U);
    msg.setDestinationEntity(120U);
    msg.req_id = 45589U;
    msg.comm_mean = 41U;
    msg.destination.assign("PUGTMMAZHFAQSBRTLUIURRYCIWEYDBQKPJCFXOQENJBOKSVSMTAVGBOYHDJYFYVCBNKMSEMJJXJKDLQSAEBMGNIVKJDONPYMQQLSPMRUUWOPTDLUO");
    msg.deadline = 0.676044679741;
    msg.range = 0.538883794124;
    msg.data_mode = 192U;
    IMC::CommsRelay tmp_msg_0;
    tmp_msg_0.lat = 0.148717024374;
    tmp_msg_0.lon = 0.651983944695;
    tmp_msg_0.speed = 0.474842593735;
    tmp_msg_0.speed_units = 221U;
    tmp_msg_0.duration = 44610U;
    tmp_msg_0.sys_a = 52703U;
    tmp_msg_0.sys_b = 4875U;
    tmp_msg_0.move_threshold = 0.102650033432;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("FEDTVBHCWJGHNOXZSSMWOUJHPSVTIMFMEJFUNLASEABZMXIBNPXRJSYMYKHYBFUUYLEJQUYDVDKPXIW");
    const char tmp_msg_1[] = {-98, -44, -76, -120, 85, 59, 78, 101, 104, -96, 88, -88, -33, 9, -21, 125, 30, 21, -48, 7, 88, 59, 84, 126, -21, 84, 24, -106, -64, -79, -90, -70, 59, 3, -22, 59, 69, 13, 58, -46, -20, 83, 71, -70, 60, 122, -103, -87, -126, -99, -57, -3, -83, -70, -59, -21, -38, 101, 86, -94, 84, 126, 98, -89, 43, 85, 120, 2, 123, -94, 121, -8, 3, -71, 81, 68, -12, -40, -17, 44, 96, 9, 74, 122, 44, -92, 46, -99, 42, 80, -4, 57, -18, -105, -17, -54, -45, 16, -85, 85, -2, 117, -23, 89, 2, -120, 35, -83, 33, -46, -97, 6, 15, -34, -102};
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
    msg.setTimeStamp(0.07338964535);
    msg.setSource(21043U);
    msg.setSourceEntity(251U);
    msg.setDestination(22548U);
    msg.setDestinationEntity(116U);
    msg.req_id = 61557U;
    msg.status = 206U;
    msg.range = 0.651731024796;
    msg.info.assign("NVTFCGGEUXSFUXQWYRCICURHKFEMTYMPPGDFUYBNWOCHIESZQMALADBTAONPSLYIKUQMJNEQPGJQHOTBCVIWRZRJYNYEPTDVBADEDAUGHRMCKNVHLZEOTQHQCEBEXIISMLJEMGDFATOVYC");

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
    msg.setTimeStamp(0.153308197017);
    msg.setSource(8203U);
    msg.setSourceEntity(114U);
    msg.setDestination(8919U);
    msg.setDestinationEntity(26U);
    msg.req_id = 19635U;
    msg.status = 73U;
    msg.range = 0.832146815446;
    msg.info.assign("FRWQGXTVCALVFONJVDHECWAPHECXDZDIGIIKATUTF");

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
    msg.setTimeStamp(0.809095964432);
    msg.setSource(31192U);
    msg.setSourceEntity(132U);
    msg.setDestination(50409U);
    msg.setDestinationEntity(43U);
    msg.req_id = 55940U;
    msg.status = 224U;
    msg.range = 0.752997441315;
    msg.info.assign("VFPLVPAQYHOQKZDIDHHGRMHTKYBFEGJLACFNAIEWMOG");

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
    msg.setTimeStamp(0.699638128682);
    msg.setSource(31719U);
    msg.setSourceEntity(117U);
    msg.setDestination(13984U);
    msg.setDestinationEntity(88U);
    msg.req_id = 56282U;
    msg.destination.assign("XHZGBONFFPFQJZJQGMFLQBVMHDEKCDWGSTEZDVKCQVOBVDAOYBXPUCFZSCGJDHJAGSREVIORHEDRAXUGMHJSMTKOJYQOUUICUOIVUUSYQZBPIWOEIADHS");
    msg.timeout = 0.0322206858209;
    msg.sms_text.assign("LFOPQTUAJVTEMNAHCYLYBSZSNPGKWWV");

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
    msg.setTimeStamp(0.771778851097);
    msg.setSource(62472U);
    msg.setSourceEntity(229U);
    msg.setDestination(50712U);
    msg.setDestinationEntity(42U);
    msg.req_id = 13851U;
    msg.destination.assign("WNYOJMPXYJLDFGJLPRKNEKTBLINHMGJKZDTCKJTTFYWTERNSZXRKLVRHOWSLIMCMPYXXUGQUDCFQOPEMJWZEEVBWIPQUSJAUHONTGTIBMRGKPIUVUINXYUATLRYYVVANIZONFAKFDAOUGBCVHQZHVUWZKYYDGRPXDQHCXQWFKJDPXMOZIXAFTDZCE");
    msg.timeout = 0.381615786955;
    msg.sms_text.assign("BTVOYVJUMVYJSGJLZBOGAWMTYEUCNC");

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
    msg.setTimeStamp(0.541627591453);
    msg.setSource(2420U);
    msg.setSourceEntity(8U);
    msg.setDestination(275U);
    msg.setDestinationEntity(177U);
    msg.req_id = 15394U;
    msg.destination.assign("UOFEYQIWQMAESKVPFVOFSCRHQFAKOGYGVHOZHNEUHXMBEGUSJWFUOMEDTCDSVWPIDXQAYCJJVCUQQSNWNQTP");
    msg.timeout = 0.745907330508;
    msg.sms_text.assign("ONXTLGTKDPGMSZXFDLNARUNOBXTBDVTPIZVAJJXJTVJYKFGBFCWCIUQBVLCJYMOMQBQLHWDMMLDDFHEUFNRKLPNRRTWIEWVZKFXGVSCVJOUGGSBEIEFVWQZQQPOCQQFCYEIAFZBRDUQXUIWOIGSHYMGRRYAELHYKYHSPMJIYAUNJMUKEQVASPEXHJBKKCHBZZVCGHYXWRPTPADCLAIWWJLPETZGKHDEDSZSMOC");

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
    msg.setTimeStamp(0.96990970226);
    msg.setSource(43979U);
    msg.setSourceEntity(241U);
    msg.setDestination(56417U);
    msg.setDestinationEntity(86U);
    msg.req_id = 833U;
    msg.status = 50U;
    msg.info.assign("YKTVNFODUOLTEJAUTLDDGAXOLYULUSHZZFDERKRIYNQYQQBWYURKPBMTFQXSOUAWIGRAHKEDWJBRCFGCBDUJMQBIFVFPCXGHFQBWPITAHPPCLEISPWJIPFXRQCASVHUVHYKDCTX");

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
    msg.setTimeStamp(0.990034029692);
    msg.setSource(62900U);
    msg.setSourceEntity(33U);
    msg.setDestination(25211U);
    msg.setDestinationEntity(105U);
    msg.req_id = 19632U;
    msg.status = 201U;
    msg.info.assign("VCIATGBJONDPQLAULZMUVQEYYLVIXRJSMVHYCZIWKBTUJUNIRKKQUMMOPDPFVSXRNFZYMRAVTSQCSFHCUCPZLOOSTFZXCBRQIDAFMEVUIJKMNLHEYYJYWFOLIGPQTAHUSOXVWXCYSSMOTHBDZNXWMREKGNFQLEEWWLFSSKG");

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
    msg.setTimeStamp(0.448049736158);
    msg.setSource(46847U);
    msg.setSourceEntity(178U);
    msg.setDestination(59102U);
    msg.setDestinationEntity(45U);
    msg.req_id = 24836U;
    msg.status = 27U;
    msg.info.assign("BRYMDQIVRCGTNZQDIDNVCFTKZLEUEDYXRNESBKAFYODVPIBLJLFSPCRUHLDVYJVQGIOLJOEYPKSWSYCAXXPBJZKNTPWYFAFPYDKEDN");

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
    msg.setTimeStamp(0.049825834894);
    msg.setSource(6830U);
    msg.setSourceEntity(223U);
    msg.setDestination(31937U);
    msg.setDestinationEntity(227U);
    msg.state = 208U;

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
    msg.setTimeStamp(0.580632236593);
    msg.setSource(52916U);
    msg.setSourceEntity(251U);
    msg.setDestination(43851U);
    msg.setDestinationEntity(56U);
    msg.state = 189U;

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
    msg.setTimeStamp(0.317201993334);
    msg.setSource(9229U);
    msg.setSourceEntity(107U);
    msg.setDestination(59638U);
    msg.setDestinationEntity(71U);
    msg.state = 144U;

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
    msg.setTimeStamp(0.629082387967);
    msg.setSource(54370U);
    msg.setSourceEntity(160U);
    msg.setDestination(26540U);
    msg.setDestinationEntity(11U);
    msg.state = 40U;

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
    msg.setTimeStamp(0.115250316274);
    msg.setSource(63174U);
    msg.setSourceEntity(240U);
    msg.setDestination(38245U);
    msg.setDestinationEntity(92U);
    msg.state = 18U;

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
    msg.setTimeStamp(0.892994895569);
    msg.setSource(188U);
    msg.setSourceEntity(195U);
    msg.setDestination(16563U);
    msg.setDestinationEntity(123U);
    msg.state = 216U;

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
    msg.setTimeStamp(0.0664906494957);
    msg.setSource(11093U);
    msg.setSourceEntity(172U);
    msg.setDestination(62350U);
    msg.setDestinationEntity(52U);
    msg.req_id = 661U;
    msg.destination.assign("DWWVRUMUYOPKQAYFBUYKWMKQEJNJPUKEYGMPICDSWGUGEEH");
    msg.timeout = 0.516709361832;
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("BGVNZHAXNTMKNUZSZUYYHWBVUYNLZFGGNNIKLOZBARSRTJIMFBUOBMHFDOCITBOWBUYMTIDHYISELXGNKQLXRLOYASDFLETHFQTHLDFWQAWRSYXKBKPCJEHPQLNVAJRPSFSFPYXMVJWOGRCTLQPIDHRKRXRDOTCPCVOGQOEWMBZNDEHPZKMQNCJWLYEOQXVGIGG");
    tmp_msg_0.sys_type = 49U;
    tmp_msg_0.owner = 36397U;
    tmp_msg_0.lat = 0.434340994656;
    tmp_msg_0.lon = 0.649202504401;
    tmp_msg_0.height = 0.839604708333;
    tmp_msg_0.services.assign("VJJKGGTRJWJQISFYZSGKOWDBZDLIPJLDGSLZJSQGQEFFOVEITMKCLABIQOQICMFLIQIRNTGPETZTPNLMFBUXCYKUERSDWXLAAUNUPLEDEYXKCDVFURJRPVNXREKOPBPBHWY");
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
    msg.setTimeStamp(0.0487994522085);
    msg.setSource(2172U);
    msg.setSourceEntity(146U);
    msg.setDestination(65080U);
    msg.setDestinationEntity(145U);
    msg.req_id = 65280U;
    msg.destination.assign("JISKGFZXHMIKAQOZUPFFCHARLABOYHIBDVUQIQLUZAJJDGIKSCYMVJKEQNPYYZOICUJVCLTDKNTA");
    msg.timeout = 0.900470519992;
    IMC::EulerAnglesDelta tmp_msg_0;
    tmp_msg_0.time = 0.0791007081896;
    tmp_msg_0.x = 0.315808820404;
    tmp_msg_0.y = 0.0944833377112;
    tmp_msg_0.z = 0.738405907553;
    tmp_msg_0.timestep = 0.113194443188;
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
    msg.setTimeStamp(0.613258975837);
    msg.setSource(5517U);
    msg.setSourceEntity(123U);
    msg.setDestination(18994U);
    msg.setDestinationEntity(175U);
    msg.req_id = 40534U;
    msg.destination.assign("FDQUVPDQTNPGEHQNSMBEJZRNBVUKWCODJLHOEPWJJHSASBAOIUOMPXEVBF");
    msg.timeout = 0.274979871379;
    IMC::HistoricTelemetry tmp_msg_0;
    tmp_msg_0.altitude = 0.948605260718;
    tmp_msg_0.roll = 11098U;
    tmp_msg_0.pitch = 42047U;
    tmp_msg_0.yaw = 63977U;
    tmp_msg_0.speed = -25128;
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
    msg.setTimeStamp(0.813854088213);
    msg.setSource(10365U);
    msg.setSourceEntity(173U);
    msg.setDestination(56144U);
    msg.setDestinationEntity(125U);
    msg.req_id = 29782U;
    msg.status = 81U;
    msg.info.assign("AFYOVHHRICXTCJDELAZJMAFMPGETLEKUXC");

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
    msg.setTimeStamp(0.459504661926);
    msg.setSource(12795U);
    msg.setSourceEntity(138U);
    msg.setDestination(14901U);
    msg.setDestinationEntity(223U);
    msg.req_id = 64004U;
    msg.status = 208U;
    msg.info.assign("ZSXUYBXLDZWRDUHQRBVJDGTMKHYGALDWMXFCQXCIVJHLVZWFPTAPWJPPFCEOKYLZCNNOFKDDWNHNKISUAUWEPPLUHJYUSVJ");

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
    msg.setTimeStamp(0.91088377167);
    msg.setSource(8227U);
    msg.setSourceEntity(203U);
    msg.setDestination(15236U);
    msg.setDestinationEntity(191U);
    msg.req_id = 20179U;
    msg.status = 126U;
    msg.info.assign("EHTMJPPOOBYNWXTFMVRHVWVHCGUIPIYLKNXGGZVZYEFTQHIHXUVZIDESRJVLAFQFDRAZVHBMWDOKKNINUGLKDAONVWNULBYCAKELQFKJUSCQNDJPOMTHGYGZIWPFIZBFAVEOHXEXUCQHGAQXFWJRJCMRLMGEQSDOJBOTDYXBTOBUFZDIQCSEBKRESARMEYWNSNIHWAUWPRBAW");

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
    msg.setTimeStamp(0.107774837387);
    msg.setSource(38522U);
    msg.setSourceEntity(133U);
    msg.setDestination(50265U);
    msg.setDestinationEntity(246U);

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
    msg.setTimeStamp(0.33043589828);
    msg.setSource(4556U);
    msg.setSourceEntity(95U);
    msg.setDestination(14014U);
    msg.setDestinationEntity(28U);

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
    msg.setTimeStamp(0.385451194683);
    msg.setSource(31317U);
    msg.setSourceEntity(104U);
    msg.setDestination(61713U);
    msg.setDestinationEntity(205U);

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
    msg.setTimeStamp(0.609418573268);
    msg.setSource(35281U);
    msg.setSourceEntity(202U);
    msg.setDestination(38740U);
    msg.setDestinationEntity(24U);
    msg.plan_id.assign("KFIFNVERAVHFSTFFFIKRQKKKNXZVPJBMPHRBOAZFRXVWOWXKMEVGMDZCFQPJDTMDNPGSUEBTJNUEAGQDEQMRHXWHSDUPACOOCCIQDYQPIYUGYSXVFEQLWOXPYLCDCNBSGGURXAQOYOYVPYOWJWNBRIAGHKNIRJDDBLARXUXWMTGBUOSHGJMBGZU");
    msg.description.assign("JDZBEPDTXQKUQHKTTYLYMEBQOFJZTVAODQPBHJNTMWEAZWYJYUHOGPDOKNJZASXZQVVXUBWQDLIVSPKVBEQBLHWNUSCKBYTDAYGTFFLKAGMVPUUCICEIUOGYJMASNZIVCDICXNILXDCFFWRMXQPJOZNCLHWBMMISMTRZWFSRRZRSFWLCGYKKZKAGRJLRXGJAPCAAQSWWNYYESFUKUOCGDERVOVODTXJMHSVNBEEPLNHPMXBEGGNHH");
    msg.vnamespace.assign("LJURSZGNBRFIZCAYJBYMKWHGJMPQMMUJXYPYUZBTSEALZDNATZVMVIIZWROQKIKXSGHGUFYPPILZSVPZGULDKGQBRFDIPZLK");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("MEPRTBTSKYOEOLHOKSVZGNBUCVRPHPOYFWWKMCXSEYVVRUFKPDMFPAUYBIKHBZXEAOPUPXMJCVNYFVNXNFOYQJILEIXBLMQAHOBGGCUKDNAHBMLQSRBZWMNZUEHMQZQVXFASLWGNIIXDSYGLALWNQCMDEHIFLUTZNSPYTGTJJFBRPLW");
    tmp_msg_0.value.assign("UMPLFMXZIPFTQGTFRYUBZNQJRJXAOTVLSVCDCKSZALXIRDYNFEXKLLNSVXRLAOIVCFXYEJESZVAUAUG");
    tmp_msg_0.type = 188U;
    tmp_msg_0.access = 167U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("UKTUPNMNLYYCECTXHAOJVOLREHNGHWOVTMIEOYOBGME");
    IMC::PlanTransition tmp_msg_1;
    tmp_msg_1.source_man.assign("ZAGFUYDKHRXWWOPNLQZIXQGYBSDPZIYCSPJJRVVVCUZXYUTPHRTYTDJH");
    tmp_msg_1.dest_man.assign("EXLZWXQZUDWSMYUPTLLRWKIWCLRPFYSDDLJTOS");
    tmp_msg_1.conditions.assign("ZCJDJPTOBSIXWQAJIUQBCMNHERNYZADOLXQBCYBOXITUERPEMYKUEVUFCK");
    IMC::Abort tmp_tmp_msg_1_0;
    tmp_msg_1.actions.push_back(tmp_tmp_msg_1_0);
    msg.transitions.push_back(tmp_msg_1);
    IMC::TCPStatus tmp_msg_2;
    tmp_msg_2.req_id = 61644U;
    tmp_msg_2.status = 121U;
    tmp_msg_2.info.assign("AANKHMRQHZRTNKZVXNRUDLGMUAXXDGUCCRTDVMPE");
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
    msg.setTimeStamp(0.964501112974);
    msg.setSource(619U);
    msg.setSourceEntity(125U);
    msg.setDestination(52332U);
    msg.setDestinationEntity(142U);
    msg.plan_id.assign("MLAIFJUHLBBECUQOXDAITTUBSSQDSZFAQTRNEGIZXGVEGYOCKYOXXOKYFBRWKS");
    msg.description.assign("ELYLLGUPMVDSYVSJHGVDYQM");
    msg.vnamespace.assign("FQHZEDUVJJDHLCUUJYEIKGUVBVTDLFIUYLNLVDXKHBJBJGGWNRYWPCJIZPGKHIBKUZEAGAXDPFLIMWSJDDVUHJOXOQFSSSWTJYLTTRKMRBQEFJNTWAMPPSERFOYOTELMXCG");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("TBTAXXXOOAGAVMGHGOAEHMBNSZYFILBDUVWVHCMCLSZNUSYGXGZRTWSF");
    tmp_msg_0.value.assign("AXOFXWRDRYTLBHVENFGIHRWIRQBTDTWYOUXDBZNZYBSIXDZIVUTEKNFBMCJQBDJBQBVUWAHWVIHPMZWSNOEBEGAMUHGAUOGEEKHXLBCOXTUC");
    tmp_msg_0.type = 116U;
    tmp_msg_0.access = 122U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("BELVEKNQNXKPDFMQRMQTVXUWVYIHVEUTGKHGLGGXHWKCGMCDOWFKSORLNVYVXUZIMHTLPMNVYDCNOJJBETWVIMSPDEJRWXJLVQYDFRAJUAEAOZSKFDHOHYWHYYXCRUOPAMSCDTZBGIRLRETZJSLJUQSSNXLGDPKZBPQJHTKJUIIYCIREGGXURAZKHQPFLWBSOXVCOYRFJCYNZIMCDABMACDOWBZZPTBNOPPFXQLQFWUFBAITHZNMBEASN");
    IMC::GetWorldCoordinates tmp_msg_1;
    tmp_msg_1.tracking = 173U;
    tmp_msg_1.lat = 0.339857209565;
    tmp_msg_1.lon = 0.573358580534;
    tmp_msg_1.x = 0.71297520895;
    tmp_msg_1.y = 0.565103825048;
    tmp_msg_1.z = 0.241908974021;
    msg.start_actions.push_back(tmp_msg_1);
    IMC::CreateSession tmp_msg_2;
    tmp_msg_2.timeout = 3486805527U;
    msg.end_actions.push_back(tmp_msg_2);

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
    msg.setTimeStamp(0.662740050923);
    msg.setSource(39481U);
    msg.setSourceEntity(149U);
    msg.setDestination(39128U);
    msg.setDestinationEntity(162U);
    msg.plan_id.assign("TFDKLDOCKFAKVMYTZJGFUHCGIVCPOWFSRZAEFRLZQFBRSOKJMNSXKSLILBEVNHVPTBXDSWSLHV");
    msg.description.assign("OFWFMXAWSBIGBKUHVYTMSQQRKVACZHKCUXJZGLFPBQUNSHENQQGNSXANJNZLRHFMLGOGQMVPACNLXIWVERLOCUYNOWXHFPORFXPNHGVQQIFSYKDUHRMIKVIIJYGJWTDYOUYWROJWBDBAPSDPECIYZIIZGTAHCHPAYGFRTIUELMPGXDLMUCROSOJXDKVPKWXEXFAJVMJJBYUZCDEDKETDKEFQCTMZBNQNSKEZZESCLBAYWMBDBZOLHTJUPTAL");
    msg.vnamespace.assign("SCSSTAXDDLUBYJCMMIJSDWEGQRWMHSTSLAEVCDLROVYGCZXUJFUOVTNQNNGIYKZPEFPBEZWHUGPXAQNDMQIMGBONTUVTXZECZZVU");
    msg.start_man_id.assign("DJVZPMEBXOAKJHSSIOCHLRZQLRZKZPQIPQZGBRPATXIGSZZNKENKTDTKNJYUYRAMVVHSDFMPFGKDGBHQSYSDKYLAJBEXQSQPBVXCLXTONKAIICWYYQNEORRUB");
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("JUUGBVHPCQAFSVZAEPDJJMTVQLNAFAZA");
    IMC::Launch tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeout = 27340U;
    tmp_tmp_msg_0_0.lat = 0.970452756319;
    tmp_tmp_msg_0_0.lon = 0.514145833354;
    tmp_tmp_msg_0_0.z = 0.845060088031;
    tmp_tmp_msg_0_0.z_units = 46U;
    tmp_tmp_msg_0_0.speed = 0.655171369702;
    tmp_tmp_msg_0_0.speed_units = 244U;
    tmp_tmp_msg_0_0.custom.assign("QZFBXZEYGDCFDBSWWCIQPJLDOVOEYPPQUUVTQQOF");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::DesiredHeadingRate tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.124882279789;
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_1);
    msg.maneuvers.push_back(tmp_msg_0);
    IMC::PlanTransition tmp_msg_1;
    tmp_msg_1.source_man.assign("JRTEFLVCOXXGHIIWTUAPSYVWNAKYUKWHZAQDAEEPLNJVCWRVZDWUGSMVUAEJEQAUZZJKWYJGDVGNIFMGGKBVNMOOBTKQDDOMCXJIMDRYZOIOFUPHYNRORCXARSQRXCYWSUEZKDEIVPVPCOLJGLFETAKMTMJGFSDOFYWHCKFPLXFHMGQBLKUHPLYQSJPCFS");
    tmp_msg_1.dest_man.assign("BSOQGHIVEEPGUQHDSZDHUIRCTGKBBLCIWXCVGOAKXJNELXDEKPTBZVZYHFJTISJYFKVCWVYMBUZHZQDFBRCWBQBDADYTMUEZL");
    tmp_msg_1.conditions.assign("FBLSLJMAIMGQECBVPETUEPIRJRITXNPNFFYCKIIQJOXXLEUAVAHRAHWYKGBKHMRSNPACFTZXGSOHDVTGKBJTVHTDERNZROJWJMTNZYYFQHCWTFIIUVXFYMIQQVFWBYTLJD");
    msg.transitions.push_back(tmp_msg_1);
    IMC::ArmingState tmp_msg_2;
    tmp_msg_2.state = 27U;
    msg.start_actions.push_back(tmp_msg_2);

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
    msg.setTimeStamp(0.524732233775);
    msg.setSource(19530U);
    msg.setSourceEntity(252U);
    msg.setDestination(39142U);
    msg.setDestinationEntity(219U);
    msg.maneuver_id.assign("CQSWXEFJTTNBNWHETVMRWCKSBUDOKAZQARNKMQRCVODVZJDQGDCIZUOQAFLNVMQULACLSNFVBHYNAOFTXDXZGEAQXDHIQBPDMBPP");
    IMC::Sample tmp_msg_0;
    tmp_msg_0.timeout = 39196U;
    tmp_msg_0.lat = 0.953118488634;
    tmp_msg_0.lon = 0.341017692517;
    tmp_msg_0.z = 0.772401973095;
    tmp_msg_0.z_units = 150U;
    tmp_msg_0.speed = 0.245498811033;
    tmp_msg_0.speed_units = 44U;
    tmp_msg_0.syringe0 = 135U;
    tmp_msg_0.syringe1 = 171U;
    tmp_msg_0.syringe2 = 224U;
    tmp_msg_0.custom.assign("XCBFYDNMNCKRZOXQZZUDIRIMJWLVVSMITJICOOHXWTRQWGYAXAZXFKYUNQELAFJNXPAFKCYIYLKFKQZQGQULFSCDDELMGPHKDUAPTISRHMIHLCUBHSHGJWTAIWWGELGPKVAFNJZUO");
    msg.data.set(tmp_msg_0);
    IMC::VelocityDelta tmp_msg_1;
    tmp_msg_1.time = 0.568536498071;
    tmp_msg_1.x = 0.781008160352;
    tmp_msg_1.y = 0.693592685157;
    tmp_msg_1.z = 0.270816440039;
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
    msg.setTimeStamp(0.627106197885);
    msg.setSource(1964U);
    msg.setSourceEntity(19U);
    msg.setDestination(5875U);
    msg.setDestinationEntity(239U);
    msg.maneuver_id.assign("OXKGMJZKYGWBTFQGNSVDKQDYDZXSBBFUIOJHGNVLE");
    IMC::StationKeepingExtended tmp_msg_0;
    tmp_msg_0.lat = 0.761299507309;
    tmp_msg_0.lon = 0.244168264607;
    tmp_msg_0.z = 0.782660196818;
    tmp_msg_0.z_units = 90U;
    tmp_msg_0.radius = 0.347150138237;
    tmp_msg_0.duration = 32155U;
    tmp_msg_0.speed = 0.717361751461;
    tmp_msg_0.speed_units = 243U;
    tmp_msg_0.popup_period = 57778U;
    tmp_msg_0.popup_duration = 63827U;
    tmp_msg_0.flags = 24U;
    tmp_msg_0.custom.assign("JVIQBMAGEKOYQFSOHBCDGPMDMXNZSUTLYCXGIVWDNENWHLHDZWKYETCCACWJXIESJUFQKVGWUBERJUDTXLMARLTZMORCOSHOQHERIPQMAFXXVNLDQNWLVWEMZPKTFTQDVNYUFLSAFGVJIRZPZDPLACGSXIPGMVPBUNKNZKIXOSAXKBAHYFJCJCZUHQTMUYJCRDSTQKGUVMJFOYYBNRYQSZBGPRLBFORWEXVAPZEWKOTIJRBOILHHEAPBHSN");
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
    msg.setTimeStamp(0.244435557421);
    msg.setSource(43692U);
    msg.setSourceEntity(115U);
    msg.setDestination(62927U);
    msg.setDestinationEntity(249U);
    msg.maneuver_id.assign("OFDATIJKHETGOYWCRXINNUTQTVXJYNWYSAPXAULETSYVRMKMGFRHFMHVLRGVDKWEBOETUYKVBRLFLNXZJKYUZDFBMYGCJQCUBNXTJTPCLJEAMCSJUQSBOPODWQINXOGUMPBAQWVHZA");
    IMC::StationKeepingExtended tmp_msg_0;
    tmp_msg_0.lat = 0.0212737192899;
    tmp_msg_0.lon = 0.448195192977;
    tmp_msg_0.z = 0.428903659581;
    tmp_msg_0.z_units = 1U;
    tmp_msg_0.radius = 0.919611483554;
    tmp_msg_0.duration = 44676U;
    tmp_msg_0.speed = 0.035251881532;
    tmp_msg_0.speed_units = 116U;
    tmp_msg_0.popup_period = 9134U;
    tmp_msg_0.popup_duration = 52254U;
    tmp_msg_0.flags = 146U;
    tmp_msg_0.custom.assign("VTHSZHASIJNBOINEXCMEKUQUHQUWEOKNPEWHDOIVYRTDEMHYCV");
    msg.data.set(tmp_msg_0);
    IMC::PowerOperation tmp_msg_1;
    tmp_msg_1.op = 83U;
    tmp_msg_1.time_remain = 0.798835617842;
    tmp_msg_1.sched_time = 0.82871428267;
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
    msg.setTimeStamp(0.402265983565);
    msg.setSource(31272U);
    msg.setSourceEntity(106U);
    msg.setDestination(28277U);
    msg.setDestinationEntity(23U);
    msg.source_man.assign("PKRXRWONQNGFOKDILYRIKYPFYTQIEUTFHCBWSMLJHJBUEAOZSHLOGZHONFSYZYJNRWLCKAZXIAFQRKQCZDTWKWOC");
    msg.dest_man.assign("YYBWHQSJYWQBQHLAXIVFHHPJBOFWCMPXPDUVYH");
    msg.conditions.assign("PNWKEIZOEQLZYBCLSCERQKWORFWZQGDPMCSIFQUJSKLECXWYXTORTPHOMLEJZNGIYQPJZTAHVACOXNFHUWINKVTXCKBFTLHALO");
    IMC::Sms tmp_msg_0;
    tmp_msg_0.number.assign("GIYGBCBXKDDJAYIXBKYCQNTZBEBRLTLKZUIFPXEWPUYVTTJUBHCVJEWIHRKMQUCXNFPFIZXTBLWMAKQMHNVZTSLSDLTYOQMOSJFPNWXDLYHZOUEPQCOEHANZAORMQOURVSJVWVKDGALRDQTWDPXYRYJGVINUDHGGWENSPJJLQUEWRMDNC");
    tmp_msg_0.timeout = 5131U;
    tmp_msg_0.contents.assign("AVLNONKQLQNHTOCHYWJPWGNCOWEVUA");
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
    msg.setTimeStamp(0.829030821026);
    msg.setSource(482U);
    msg.setSourceEntity(124U);
    msg.setDestination(43073U);
    msg.setDestinationEntity(123U);
    msg.source_man.assign("RHHFSZRBSNTOTATYEXOFBLHNYKYAWN");
    msg.dest_man.assign("NPVYJHGOKZYIQLLXKXHNOLPODTSFFTBPSFDOAMXQFZJEIUAJQCMWLIRBEQCFKVUHVKHKHUNMJLNDLXUOPZSYPABWHY");
    msg.conditions.assign("IEEYQLVYZTXYEQLQHGSTKFEOWVUQPAWCJRGMKTPOWLNTKAVFQGVNGFOJQNVSHC");

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
    msg.setTimeStamp(0.581789654964);
    msg.setSource(22579U);
    msg.setSourceEntity(135U);
    msg.setDestination(49274U);
    msg.setDestinationEntity(127U);
    msg.source_man.assign("PFZWEUPCIVDEBAXXFZFZJHNACVDJQNDANYOQKUSMWDRRBLQUCKLDCPLRCSSPHOCXHJAOXOHHSWSYFJZSFVFTMHIIORBOECIEBKODUTIEEDETPGBIAGUWMRJXUPKTFJZ");
    msg.dest_man.assign("SIGGODWFFNWACLOKIBRLEBFYATGPQOTMWHPRXKKHGWFUHACDYDKYLLWJYGLBPFHFXLMLSIPADVFZQREJEVD");
    msg.conditions.assign("NBQTHSKAXEBOYEAIDGWP");

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
    msg.setTimeStamp(0.635481200773);
    msg.setSource(3108U);
    msg.setSourceEntity(234U);
    msg.setDestination(33060U);
    msg.setDestinationEntity(67U);
    msg.command = 33U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("BAHJQWXMUYGXIACDTOQODEQUOHYERWFYBNNEHRBNQMFMVXVDHBGPYNCLAKZGCVKCTEWGKNHKSWSQVUHBYNFXAAERPVZJCMUIPFSW");
    tmp_msg_0.description.assign("HNQXOTAQNUPALIRTMKVWPZZTIDLYAJBKOISVHGQSEDLZYR");
    tmp_msg_0.vnamespace.assign("OFBZUCHPKRXPCAVVJCMNRBYAEJOUBMXFOMCOYXZGAADDAPSVYSGQPALLDUCNVVFZPZMKWQNROYIJQRSWMLFGIYLSDULPHJWQXFXTYDIPLDUIYZQESBDXBSBGPSEQROKEAZVKEZUHJDYWHLGWMAOIBICOFTCHWWKNMGWGEJKTNUJLUFJZOYFTWTMPNQDMXVNIHLUNFKQDRVTHGRHOBNUJBSCGTHVMTITZCEFXKABGYRITQVIZX");
    tmp_msg_0.start_man_id.assign("HXEMNBILYFLRGOVPAOUDRKKBZMWMMTUZHKOQIOJQQVNIXEGFWIHTFBLCXTJGROVDIAPTQKXCFTKAZFCPHKCCCQICMZVMAXCSNGXDVYKIDMHEITKVSDLTYOZAZAFESJS");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("UYJXNYMQYBRGA");
    IMC::CustomManeuver tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.timeout = 10293U;
    tmp_tmp_tmp_msg_0_0_0.name.assign("NPNZHCKWSVJBEROBHMLGPGFIYILLSKRTEYNCUJFFEMZUUXBTPDEBCJAAMZSSTY");
    tmp_tmp_tmp_msg_0_0_0.custom.assign("AESLVOYVHQLZTWRKNLKORCVNCHVHBIJFFMSAXCLXYOJRXEQPRKMLACNWZCPSAUFDISUHDOFNTTPIYSMJVDGOJBAMSNZJEXBSWBHLPCPVVDGDAXURGGZHBRZWZUT");
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("QHGZXLFLLBGKOFHUMPFFCAJKYJQVBYGZUPQNYTDQWVQZZDWOBLTXYPIRWIHDHUDXCNQNQBTWQKSE");
    tmp_tmp_msg_0_1.dest_man.assign("HWLOYYFEDVLQUSGJWVBGVDQYNJIQUFAJYTHJGRYGAXSCFNTWMYJDUSLTJDGJKBRMDFUFHISBCKOWXRNEHKDPQFNEALDUEIMZSTJONCRVOGRLXMQKPCKLPRZOONZ");
    tmp_tmp_msg_0_1.conditions.assign("DGOWTGPENBPFZCVXIBENECOPLSQAZZTLPYVTRTDPQRASGMZRJNUHLTGBRDWHQACMJXLAXUMYXZTILWOYBDAVSFLMTFTBEUIXOVKCEGVDKENZQOYOBIORPMXYHHDYIQSJJBLWDKKIQTUWSRXKNZVBJZHYGCPGUGNCWHPAQNFEFSDJDIDFXOMNRSMKCVZPZHILUUAOEBFJ");
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_1);
    IMC::QueryPowerChannelState tmp_tmp_msg_0_2;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_2);
    IMC::IoEvent tmp_tmp_msg_0_3;
    tmp_tmp_msg_0_3.type = 111U;
    tmp_tmp_msg_0_3.error.assign("HFIRFCNKRJQQLCYGDAGICNWYRYOABPCJUBSNXUHBTMXOHOAJMVVZCMHOKPPBXDEROFJGOYTOSVYHKGCKZQKEYXTUCZXVLLEJCLOWSNBSQAUMIUTJMXLWZSPTYQHVUVB");
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_3);
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
    msg.setTimeStamp(0.164350692253);
    msg.setSource(44798U);
    msg.setSourceEntity(111U);
    msg.setDestination(47991U);
    msg.setDestinationEntity(193U);
    msg.command = 168U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("BGSDEYWRUDAVJRUGHXHUZIXHDNTJOOTJC");
    tmp_msg_0.description.assign("WDIDVSNHFYSJSWMNEXAPYTRWZZSOXTBRTNCFLIPNPZMLZGAHWNYTFNYWVXMYCKRIVLBTBQIPQOA");
    tmp_msg_0.vnamespace.assign("FIFXAUVSPNQULZVAEDYLWNZTLFSCLWOHIKWEIIWPPEQKTWWTEJZBRYMPFNJLRMABALXRK");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("EDHFQGWXQIWTOCUUZUAPMGTIPMCSZJUALJZELAPZKSOCXPKBMXHVIMQRHN");
    tmp_tmp_msg_0_0.value.assign("TGPQODIGQEAFITMEFWLBPNTVSTJVXVNOUTTVODXSMWRNXDRQNRZMJNUSMCJJJMTMOZAPW");
    tmp_tmp_msg_0_0.type = 91U;
    tmp_tmp_msg_0_0.access = 14U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("ZNECCMPMUQIDPKNIYXIDFHCQYCSUERQDXVUSJGYKIKORTUVLPTARMBDKXVJFOAETGNHTXNDQ");
    IMC::PlanManeuver tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.maneuver_id.assign("HBAVFHREIQJRQBFGOTPKLHLEUWMGMCJWPDAJXWFWPUIIYQCPJPHZMOTNCADLGLSFRHACBRTXVDKUZRDAXNHBJELZDMCCXNLMANGADKKWGVYDVQTUBARXOZJLPMLZNVQSJOHCFRKSOPCUOGSGSUIWVVWJIKWFTYHNNYQNXYBRQOKETNEQPZDGEFZFCUZBUGMBQWKEIEJEXYBXYPVSMOBMUU");
    IMC::LowLevelControl tmp_tmp_tmp_msg_0_1_0;
    IMC::DesiredPath tmp_tmp_tmp_tmp_msg_0_1_0_0;
    tmp_tmp_tmp_tmp_msg_0_1_0_0.path_ref = 2412547018U;
    tmp_tmp_tmp_tmp_msg_0_1_0_0.start_lat = 0.563155602101;
    tmp_tmp_tmp_tmp_msg_0_1_0_0.start_lon = 0.839422521268;
    tmp_tmp_tmp_tmp_msg_0_1_0_0.start_z = 0.145336738842;
    tmp_tmp_tmp_tmp_msg_0_1_0_0.start_z_units = 41U;
    tmp_tmp_tmp_tmp_msg_0_1_0_0.end_lat = 0.529540508891;
    tmp_tmp_tmp_tmp_msg_0_1_0_0.end_lon = 0.450595534663;
    tmp_tmp_tmp_tmp_msg_0_1_0_0.end_z = 0.349959999689;
    tmp_tmp_tmp_tmp_msg_0_1_0_0.end_z_units = 105U;
    tmp_tmp_tmp_tmp_msg_0_1_0_0.speed = 0.717054490092;
    tmp_tmp_tmp_tmp_msg_0_1_0_0.speed_units = 225U;
    tmp_tmp_tmp_tmp_msg_0_1_0_0.lradius = 0.903541735965;
    tmp_tmp_tmp_tmp_msg_0_1_0_0.flags = 94U;
    tmp_tmp_tmp_msg_0_1_0.control.set(tmp_tmp_tmp_tmp_msg_0_1_0_0);
    tmp_tmp_tmp_msg_0_1_0.duration = 10218U;
    tmp_tmp_tmp_msg_0_1_0.custom.assign("AVNDLKUSLSRPSNPVXRGMJHOKQZMRZYMNQBXFONXWTWUVIVBWCZVKWCOKFNCQAROFMVRJHOHKBZHGJMENASAYLZGZDKGCKYKEYZTCNIDHASVPPWQSOHRCJFJQRN");
    tmp_tmp_msg_0_1.data.set(tmp_tmp_tmp_msg_0_1_0);
    IMC::RowsCoverage tmp_tmp_tmp_msg_0_1_1;
    tmp_tmp_tmp_msg_0_1_1.lat = 0.83133208885;
    tmp_tmp_tmp_msg_0_1_1.lon = 0.843656510092;
    tmp_tmp_tmp_msg_0_1_1.z = 0.102886958361;
    tmp_tmp_tmp_msg_0_1_1.z_units = 6U;
    tmp_tmp_tmp_msg_0_1_1.speed = 0.544396254473;
    tmp_tmp_tmp_msg_0_1_1.speed_units = 165U;
    tmp_tmp_tmp_msg_0_1_1.bearing = 0.679842998001;
    tmp_tmp_tmp_msg_0_1_1.cross_angle = 0.515192231854;
    tmp_tmp_tmp_msg_0_1_1.width = 0.58183361054;
    tmp_tmp_tmp_msg_0_1_1.length = 0.882070835884;
    tmp_tmp_tmp_msg_0_1_1.coff = 117U;
    tmp_tmp_tmp_msg_0_1_1.angaperture = 0.210127048439;
    tmp_tmp_tmp_msg_0_1_1.range = 47245U;
    tmp_tmp_tmp_msg_0_1_1.overlap = 161U;
    tmp_tmp_tmp_msg_0_1_1.flags = 97U;
    tmp_tmp_tmp_msg_0_1_1.custom.assign("GVMAQAIDQFBTKQYUYWAXOXUFFVJHUZCBIAYCRUDMNPVRJCPABNSHOGLJQRFRPERHNUHNKLJPKPYRMBQ");
    tmp_tmp_msg_0_1.start_actions.push_back(tmp_tmp_tmp_msg_0_1_1);
    IMC::Conductivity tmp_tmp_tmp_msg_0_1_2;
    tmp_tmp_tmp_msg_0_1_2.value = 0.161604664603;
    tmp_tmp_msg_0_1.end_actions.push_back(tmp_tmp_tmp_msg_0_1_2);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_1);
    IMC::PlanTransition tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.source_man.assign("CFFMHZMUBDLAFRNCXWATTPGQRQZYRXEBGDZLJPBBAJRRIJTKWZLWYCKFHBFKDROMQVPWFYICTKYUSYXKMG");
    tmp_tmp_msg_0_2.dest_man.assign("OBHFMYOZRAMXXTIBZGOKPUCXGYKJDVTQSXKLGCVOWYQVPRIUTTIYQJUIAKOLRLBAUBXLUENRBPVVGHSXZERKFSZMNYNVITPVPOMMWQFGJYUMQNLSXHSNLYDJQKKKDWCOQWFHDGVKTFSWFIBSG");
    tmp_tmp_msg_0_2.conditions.assign("RCQZIUNZGVLBWEZKROJZTBGHGHZBYVETNYGQRASWFJC");
    IMC::IridiumMsgRx tmp_tmp_tmp_msg_0_2_0;
    tmp_tmp_tmp_msg_0_2_0.origin.assign("UIOTDKKYZNZSHBQZEOXCWMLJELZLXICCGYQHOFHOSTDPIJBAGTFYJSXTAKFPOLJESRAWBVBSMLAOPVQYAIUEFKIHMIWGQJWVLMZWGNMNOVHHYUXQIVCUQBEDJMGUPZDMVXXRTJPYGFKNRKFATVRDNCGKRMCOLLJTAETBYGRRIDRVSSUHPPDNEUVFEUXQIWPKSNIWZKGWQYCFEUXBJSVZMOAJWBZQWPNDKTUGHBEZYRCA");
    tmp_tmp_tmp_msg_0_2_0.htime = 0.604040503902;
    tmp_tmp_tmp_msg_0_2_0.lat = 0.194475455206;
    tmp_tmp_tmp_msg_0_2_0.lon = 0.61713194707;
    const char tmp_tmp_tmp_tmp_msg_0_2_0_0[] = {-53, 20, 11, 67, -60, 90, 34, 100, -61, -84, 100, -10, 41, -32, 95, 72, -53, -11, -74, -15, -74, -11, 42, 12, -125, 68, 44, 67, 26, 5, -127, 47, -119, 13, 70, -4, 20, -18, -1, 59, 2, -123, -20, -26, -82, -75, 49, -60, -95, -113, 118, 121, -121, 41, 123, -20, 89, 26, -79, 41, -34, 57, 8, 43, 72, 91, 105, -30, -9, -64, -68, -105, 49, -47, -86, 62, -98, 29, -65, -126, -60, 122, -91, -10, -100, -53, -61, -105, 15, 53, -17, -23, 114, -92, -67, -25, -103, 44, 116, -14, -57, -39, -80, -88, 37, -28, -80, -28, 125, -25, -7, 100, -38, -28, 120, -1, -77, 75, -23, -71, -64, 86, -29, -57, 20, -55, 93, 21, 97, 87, -119, 9, -44, -6, -9, 103, -53, 7, 38, 61, -47, 33, 14, -121, -33, -102, -113, 62, -74, -32, -34, 109, -42, -80, 11, -108, -123, 57, 63, -82, 70, 69, -49, 5, 96, -50, 80, 66, -28, 41, -99, 83, -29, 14, -125, -92, -55, 121, -109, 94, -45, -94, -72, -76, 35, -5, -30, -68, -82, -81, 56, -24, 83, 75, 60, 68, 118, -89, -62, -97, -121, 43, -115, 44, -118, 68, 84, 42, -41, -104, 59, 27, 15, -122, -76};
    tmp_tmp_tmp_msg_0_2_0.data.assign(tmp_tmp_tmp_tmp_msg_0_2_0_0, tmp_tmp_tmp_tmp_msg_0_2_0_0 + sizeof(tmp_tmp_tmp_tmp_msg_0_2_0_0));
    tmp_tmp_msg_0_2.actions.push_back(tmp_tmp_tmp_msg_0_2_0);
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_2);
    IMC::Announce tmp_tmp_msg_0_3;
    tmp_tmp_msg_0_3.sys_name.assign("QYQBWDVHVZONGEAABLATWRIRADUGFFBRXZRNOTJFJCFOXYBNPLUOHHIWNZHSTV");
    tmp_tmp_msg_0_3.sys_type = 26U;
    tmp_tmp_msg_0_3.owner = 5041U;
    tmp_tmp_msg_0_3.lat = 0.86492683886;
    tmp_tmp_msg_0_3.lon = 0.51800915879;
    tmp_tmp_msg_0_3.height = 0.422284014;
    tmp_tmp_msg_0_3.services.assign("ZXUIIMJHMUIENLVWDFKCYEALAXIELBDUVHJFNHLYSXDCXAZBFIBJIDSTUJOLCJJOPFVYYOSTTTSPXHZPEBORTCGNWKPRQSXNGZFDLRSUTYREKNVGZMENOIMRVNHVYMVLSBXDRRPGTCRUMJYSWCQFAEBZMOQNSHEQBQGOHPQJICXVNWMPX");
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
    msg.setTimeStamp(0.679921436895);
    msg.setSource(2927U);
    msg.setSourceEntity(54U);
    msg.setDestination(34001U);
    msg.setDestinationEntity(241U);
    msg.command = 127U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("OJYGBRJSWEZMJOXGKJXBECIIMKDSUFTMKEJZEHXNNRDOIOSAIKPAETCLUYARRBOZKZYHVVCCBYDGINYQMBUELGCACLZDZPLQSFIXUVPQMSWGPINTXCRHGAWKJLWLXDUJHV");
    tmp_msg_0.description.assign("GHAOSEXTDQZRMYJJHBJCYN");
    tmp_msg_0.vnamespace.assign("OQXPYTTNZFEIZIFEAELBBQUSJMREUFLIOPKLVMDSJCSGJKWFKHMWAMJKVBWLYFJAYKMWAQBJEVNZITAYMBSQWDYOZISLMHAHFBZRYNDSRKTBDCGHKERYBOTG");
    tmp_msg_0.start_man_id.assign("ARSGBFQIAJQYZVVYCBISKOZTHJORUHCOGKLFUODMNFGUEJFAYLWUYJEBWLV");
    IMC::SetPWM tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.id = 96U;
    tmp_tmp_msg_0_0.period = 2425852170U;
    tmp_tmp_msg_0_0.duty_cycle = 2401746101U;
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.579923820675);
    msg.setSource(10357U);
    msg.setSourceEntity(244U);
    msg.setDestination(25994U);
    msg.setDestinationEntity(159U);
    msg.state = 34U;
    msg.plan_id.assign("ZPSRXLKTLGZLYSTMOBUVZEKOWIFWZSVPWGXOYATVUKZCXZESTXNAVMCWLGKCJXFNDMINMLRZQAQSHDURKWJAKHYLFDMJWPLIVEEMPJRLXSXFDABYBTBAPYSORTXJDVRCWWUIEHUMGISYFKCC");
    msg.comm_level = 115U;

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
    msg.setTimeStamp(0.951111939315);
    msg.setSource(58694U);
    msg.setSourceEntity(37U);
    msg.setDestination(46531U);
    msg.setDestinationEntity(143U);
    msg.state = 224U;
    msg.plan_id.assign("WKCKFYUYFOGFIDVNDEXEUQSIQPZTXCPDMAQGMVOSVECPUMAOFABXFNDZJVRWTHIRFRZDJVRSZOCFRSYEHXPKWJCPMQYBPCKOKQOUEZTPCQUZHNNNUBVLHEKBWVDWLNLAAMGZRBILTEYEAUSHSXOWAAMJJKBVYYWJHCYXVITLXGFDNCIKPE");
    msg.comm_level = 183U;

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
    msg.setTimeStamp(0.770140581595);
    msg.setSource(43401U);
    msg.setSourceEntity(84U);
    msg.setDestination(21941U);
    msg.setDestinationEntity(151U);
    msg.state = 112U;
    msg.plan_id.assign("KFHUMFDTXGVYZHMIXEXUUVZUOJCFKHKDBRIPYLBDSKWDSWZNNGJGXFPAHAMIWFJUOIYKSAZUQNNRGIXNEQALWOKFPFZGRIDCIWPNIQXQTTRJNLSTXLSOVEAMRZYDBEONDLPYSQRTLDQCRKSVZTPOGEJBGQHSJOBFXMTAMLZAVOWWAAMECYTUJGYMUBZVYJSUQVIKH");
    msg.comm_level = 74U;

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
    msg.setTimeStamp(0.780111599479);
    msg.setSource(10507U);
    msg.setSourceEntity(145U);
    msg.setDestination(8943U);
    msg.setDestinationEntity(199U);
    msg.type = 117U;
    msg.op = 12U;
    msg.request_id = 48443U;
    msg.plan_id.assign("RNXPBRUKBBOUDBZKGXMYLJFZCALVJKQUMXVSZXPSCKTRYIFUTJCJRVXABMRITNQSUEZJQLKOTYQMOSDFBRPMQHBYMSJYBWKKWTWHFDIEOUJGESHDJNHONAELEHDDIWAZTBCGGPRUEFCLWSGDSQVHUXLQDVFYGXTLVHNUQIFHQZVGNYZAGKMZWTBIOAEOCGQYJXDEMMPPNORMCWOYVVNN");
    IMC::AutopilotMode tmp_msg_0;
    tmp_msg_0.autonomy = 133U;
    tmp_msg_0.mode.assign("ESXZIUEUJVRPCRGOMXDHDETFFYIJTHDZKNLONXXQTHPSMYKQUNBN");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("AKTIVBFJTXPEMZHHQDIZCTMIRRQNVDDOCJVLSORHEBZGRSNFDMXXGKUWWDQHCPCELDZFNZGLY");

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
    msg.setTimeStamp(0.418147217877);
    msg.setSource(15367U);
    msg.setSourceEntity(240U);
    msg.setDestination(15098U);
    msg.setDestinationEntity(7U);
    msg.type = 143U;
    msg.op = 253U;
    msg.request_id = 14826U;
    msg.plan_id.assign("MDQKHHAGXVTPIHGFXLVBIIOZTUCHFZBRHVJNMCCOZPJQBZRGCJRACOLRUYYCPZIKUIOBNMHAYVNRJEITOOU");
    IMC::AlignmentState tmp_msg_0;
    tmp_msg_0.state = 100U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("XSNFGLIXXYVJQHZEAXKGKILHAAVABXYLDWHHPWTZ");

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
    msg.setTimeStamp(0.168138785002);
    msg.setSource(23386U);
    msg.setSourceEntity(239U);
    msg.setDestination(59487U);
    msg.setDestinationEntity(204U);
    msg.type = 164U;
    msg.op = 247U;
    msg.request_id = 28597U;
    msg.plan_id.assign("MDCODOKCTPBTGREBLLBPIZYANMTKXSFIMSARUWB");
    IMC::CreateSession tmp_msg_0;
    tmp_msg_0.timeout = 696838249U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("RRFKRYRSDYGNAIQSUQYGYUSQXZBIESTEJFPTVTAMVEHUKBQELRKSRMFRVEEUYTOOXTHITWIXEYHDVJSPYLQ");

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
    msg.setTimeStamp(0.295195394092);
    msg.setSource(20861U);
    msg.setSourceEntity(11U);
    msg.setDestination(62156U);
    msg.setDestinationEntity(237U);
    msg.plan_count = 4181U;
    msg.plan_size = 3765523092U;
    msg.change_time = 0.413210171757;
    msg.change_sid = 47571U;
    msg.change_sname.assign("GNFIGDBEGBUQXHOXCSZAMWKEWRKULXVWBRBKIJRNOXJJNXLFHPJZSXZLGMJNYMQBHGAQYCAOZYSQWJHWFTWIUOYSVNILMKABNSTKQGEVMLYSIVRPIMGUEWZNYLTNUQOERUCGCJQIDZAFCTMTCCPHBHJFADTTPYYLVDLLKHUEDPTPTFFMXLEPZSCUXZKPIPCYDBXWEOVHXFRMKFSRHYFEDVQVMVWTBDCWIDOSKKPDRRAIJHAVZQROGNA");
    const char tmp_msg_0[] = {-5, -25, 3, -28, 99, -74, 41, 26, -50, 121, -20, 71, 63, 69, 57, -81, 95, -41, 39, 89, -95, -19, 64, 80, 17, 33, -32, 25, 80, -14, 73, -58, -16, 37, 116, 48, -43, 73, 77, 106, 72, -59, 84, 33, -101, -84, -29, 8, 35, 9, 3, -123, 32, -59, 34, 123, 38, -50, -45, -7, 50, 104, 2, 75, -81, -16, -59, 54, 25, -89, 40, 5, -77, 57, 80, -81, -48, 107, 64, -88, -96, -78, 18, 90, 3, -31, -79, -93, 31, 113, -92, 95, 54, 14, -56, 52, 5, -31, 121, 82, -13, 17, 46, 103, 58, -117, -75, -111, -69, 101, -64, 88, -103, -80, 23, -28, 4, -112, -29, -58, 65, -113, 37, 116, 74, -31, -108, 77, -78, 85, -75, 9, 70, -56, 118, -54, 84, -105, 40, -110, 40, -118, -82, -105, -15, 80, 125, 119, -127, 5, 16, -20, -7, -54, -109, -62, -79, -60, -106, 120, -104, -18, -16, -3, 80, 43, -40, 14, 97, 9, -89, 35, -40, 105, -108, -96, -85, 123, 12, -99, 105, 64, -46, 116, 114, 96, 24, 111, 76, 80, -92, -22, -90, -123, 0, 47, 18, 81, -23, 101, 105, -121, 126, -42, 80, -37, -98, 107, -2, 16, -83, 125, 112, 89, 50, 42, 116, 91, -93, -52, -35, 126, -26, -93, 19, -40, 1, -40, -105};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("HWKBJVCTTHORFYUMWBUNCSTNRGPVSLCVPQGQDTIXFRTZQLVSQSVUUHBMFHSQDYPFBXBZMLAEJZEASHVGBRBXIGCFKPCACMWUUKLIMMGOKWYQNJNBUKPHYV");
    tmp_msg_1.plan_size = 38002U;
    tmp_msg_1.change_time = 0.262087358422;
    tmp_msg_1.change_sid = 15524U;
    tmp_msg_1.change_sname.assign("IZWHJGFJNQBXTVYUOHJGDVXLXHNZITIARNVADEKAPNVZAYEVWYYGLYPDLBFRXFBNZOAGNNJREIXIPUIWUWKBBHXEXEJLCQKPKFWITLAPVDUJDOEDWAUHGFGFECRILQCCLQQFQBTOQBRMRSQOJMRYVMESPMPITLOFITYXSSCJONDHOVYVQEOUGZGUKGNYHZTZVYBHPAMAMMUTRWWFPFMCQKSXLJGNWMXKCEBCJCZZHZDHROSWAS");
    const char tmp_tmp_msg_1_0[] = {-13, -122, 26, 22, 118, 54, -128, 57, -73, -31, 63, 52, 44, 82, 123, 121, -22, -122, -18, 77, -88, -35, 34, 102, -104, -92, -12, 13, 88, 120, -53, 26, 102, -17, -124, -114, -70, -102, 112, -12, 125, 3, -100, 10, 47, 82, -100, 30, -114, 56, -127, -37, 116, -87, -20, 64, -10, 13, 18, 26, 43, -93, 113, -117, 95, 21, 7, 35, 117, 14, 117, -89, -3, -39, -31, 6, -70, -126, 91, 125, -90, 90, 5, 119, -93, -44, -3, -14, 90, 62, -67, 83, 33, 37, -17, -117, -42, -112, -94, 21, -29, -68, -24, -30, -39, -102, -29, -71, -128, -58, -86, 122, 19, -103, 88, 100, -80, -77, 55, -19, 1, 68, -4, -119, 6, -27, 57, 80, 41, 94, 33, 53, -107, -89, 67, 114, 69, -31, 17, 23, -52, -71, -115, 60, -93, -37, -60, 70, 48, 58, -123, 108, 8, -88};
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
    msg.setTimeStamp(0.113185492096);
    msg.setSource(46420U);
    msg.setSourceEntity(145U);
    msg.setDestination(2645U);
    msg.setDestinationEntity(223U);
    msg.plan_count = 7844U;
    msg.plan_size = 431727985U;
    msg.change_time = 0.469111214746;
    msg.change_sid = 61694U;
    msg.change_sname.assign("IGNJZEJWTASDIJZXOPMLVLNULTAYYDPHDITJHAYXRJGQFDRCWQPTDTLWXOUSYUXCNVTFIEYRGEDBAFYJPOKTIKBMEJGXGKKGZVZLUQLFEKQUCQMYGEPICWQBRHCPWCTNCTZVBXXVMINVVYEHPFAANSLELRIGUJBMIRFQWOZWDPBBDHSLUHWROVYEIYALZXQQBJDHOMFQVRDPMCKNBOMCWARKNWAGMUXHNTSXASVOFMSKOHJS");
    const char tmp_msg_0[] = {110, 85, 84, 90, -125, 69, -116, 125, -12, 44, 22, -54, -73, -16, -50, 9, -110, 75, -13, 43, 25, -43, -86, -15, -106, -105, 10, 19, 72, 47, 86, -20, 125, 79, 92, 121, 107, -56, -41, 68, 97, -59, 124, 94, -46, -18, 106, -43, -28, 11, 11, 48, -115, 41, -41, -77, 56, -97, -30, -63, 18, 60, 17, -48, -120, 26, -83, 91, -13, -55, 37, -41, 14, 82, 100, 14, 33, -58, -76, 77, 5, -114, -90, -122, 69, -17, 56, -86, 62, 53, 15, 51, -21, -55, -20, -87, 63, 55, 124, -84, 75, 33, 48, 54, 121, 115, 36, -125, -64, 114, -122, -31, 104, 6, 39, 89, 107, 103, 111, 63, 126, 102, 38, -98, 51, -56, -65, -83, 18, 84, 82, -38, -65, -74, -94, 18, -93, 80, -77, -72, 8, -47, 108, -114, -9, 79, 7, -38, 22, 81, 82, 100, -81, 100, 48, 23, 65, 124, 48, 72, 53, 15, -124, -54, -93, 56, -17};
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
    msg.setTimeStamp(0.320619821757);
    msg.setSource(49777U);
    msg.setSourceEntity(118U);
    msg.setDestination(44731U);
    msg.setDestinationEntity(25U);
    msg.plan_count = 58370U;
    msg.plan_size = 3380301840U;
    msg.change_time = 0.760928302747;
    msg.change_sid = 59595U;
    msg.change_sname.assign("ZQGTBNKHRLQYRWGXSOXMJVFOAHOVIMDBZDTSPZIHLWMTHDNNQUJLHACYAFEJMUMLWRELAKDYBTYIPBYIYSVJVFVODGYRETPFJEDCCXQFRKRKOKHNTZSSGBOQCZLFPQHHPIWSNQHIDGACTWQAJDKEZQXZMCMNGOGRUXATXERNCOTOETWPGLVUJYMVELNSMBGKIFBKUIKODPDCXCIZEBNJFWHUVQJSZLKRGVANWMUCZWJLSI");
    const char tmp_msg_0[] = {7, 104, 126, -114, 72, 60, 112, 11, -92, 99, 118, 30, 5, 70, -77, -108, 27, 98, 123, 27, -23, 97, -100, -103, 34, 86, 108, 80, -71, -28, -72, 78, 25, -117, -100, -14, 85, 11, -119, 116, 70, -45, -39, -42, -69, 94, 2, -112, 38, 5, -118, -27, 46, 126, -52, 35, 104, 78, -59, 19, 78, -49, -32, -120, 15, 82, 29, 71, 95, 67, -66, 30, 3, 124, -11, -116, 38, -126, 71, 98, -3, -17, -66, 75, -100, 72, -35, 123, -77, 44, -53, 97, -120, -57, 23, 23, -92, 24, 88, -46, 42, 92, -32, -120, -53, -52, -104, -30, 29, -25, -116, 59, -124, 94, -128, -54, -38, 98, 3, -43, -48, -36, 84, -58, 21, 76, -9, 35, 75, -85, -114, -1, -113, 79, 101, 92, -87, -63, 92, -64, 78, 96, -26, -88, 47, 94, -37, -96, 76, 15, -118, -100, -116, 36, -52, 68, 95, -116, 62, -103, -1, 35, -66, 91, 96, -63, -63, -44, 66, -1, -35, 25, -27, 3, 91, -91, -62, -12, -74, -76, 81, -118, -128, 116, 63, -57, 119, 120, -13, 63, 59, -60, 4, -106, -94, 12, -106, 118, 66, -55, -34, -50, -48, -94, 115, 18, 35, 65, 3, -7, 8, -82, 28, 98, 68, -36, -87, -104, -108, 109, -94, 39, 126, 43, -112, 121, 110, -60, 120, -38, 8, 47, -77, 46, -80, 33, -108, -73, 61, -77, -66, 22, -89, 18, -46, -111, 33, -75};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("NUKLMFJREXYMZ");
    tmp_msg_1.plan_size = 63765U;
    tmp_msg_1.change_time = 0.508380703674;
    tmp_msg_1.change_sid = 18017U;
    tmp_msg_1.change_sname.assign("LYLXFAKUOUSDAZGHPPTVJEZCOSWJJWXGIQZDQFWRVTGIKREOP");
    const char tmp_tmp_msg_1_0[] = {-79, -71, -92, 88, -40, 37, -86, -51, -47, -110, -13, 11, -116, 113, -63, -32, -8, 19, -31, -119, -54, -63, 10, 106, 58, -114, 103, -110, 68, 40, 6, 32, -34, -89, 34, -87, 10, 102, -8, -10, 64, 114, 2, 50, 42, 95, -46, -10, -28, 115, 97, -93, -41, -21, 14, -34, -109, 14, -21, -124, -55, -103, -45, 72, 72, -120, -87, -98, -84, -68, 115, -27, 29, -22, 91, 19, 49, -103, -99, -101, 32};
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
    msg.setTimeStamp(0.167187178955);
    msg.setSource(7392U);
    msg.setSourceEntity(43U);
    msg.setDestination(31272U);
    msg.setDestinationEntity(66U);
    msg.plan_id.assign("PJUZRBDCCRFOHEOFQKIIFXQBLFVNBKCBOFYVUDLGZHCKZWBGWZPRGRXIBSVNYOMONOMEPHAGWUIGUVCUPKYSLJQFMKWMASJNTYPEWAHLJJTILORVLXTUNELTMAXIYXEKAOHCQVPDFRAXIQBCDTBQWDAVCXYANFJZIJSXZGQTCDHMFRSEHOGIVGQSNLWURK");
    msg.plan_size = 10096U;
    msg.change_time = 0.345971864509;
    msg.change_sid = 38417U;
    msg.change_sname.assign("FCJDSHHIPUULYZFCRIBKZLWCHOMSQKIJKNSGECYOYFMVRVZZKXVTROBOLYAXGHAUSMRXQAOAPHWZMDGTGOXWLHYITWHRFONUKRGAQEYENLJTXFQWEZJSPTHUTGWAKJBWQPEXLGYDPPQHSDGTASFYCEPDVWFLVNUZMBRBOIVVJAPZQRKTVMZMNFDZCCJJMVXCDLLTINPJJXKU");
    const char tmp_msg_0[] = {-40, 96, 15, 119, 118, 53, -98, 41, 105, 11, -96, 36, -63, 88, 29, -85, 40, 29, -13, 75, -105, 104, -94, -125, -105, -109, 97, -82, 34, 34, -104, 36, -97, -90, -99, -41, -37, 51, 124, 40, 11, 63, -97, 88, 45, 9, 109, 48, -62, -68, -19, 13, -95, -59, -122, 40, 5, -120, -4, -127, -125, -92};
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
    msg.setTimeStamp(0.0905991534135);
    msg.setSource(25349U);
    msg.setSourceEntity(102U);
    msg.setDestination(64422U);
    msg.setDestinationEntity(47U);
    msg.plan_id.assign("OXUCVHQSWYPIWQGOJIBCZMZNGYJTBMZDYWMZYUTRVKNFGIKLQSIAJUFETHFWNXJELZDHUFRGVEYFNGORDTAWCIIKGFGVQLCJPWV");
    msg.plan_size = 2554U;
    msg.change_time = 0.729709987876;
    msg.change_sid = 49324U;
    msg.change_sname.assign("BEDWBGVEUTIKHQGBEGAEYNGDOLOFMBCKUWLIPLIHAUPCLRMRGJTTVQJDZ");
    const char tmp_msg_0[] = {20, -10, -53, -115, -104, 31, -47, -112, 121, -113, 62, -73, 101, 20, -50, -43, 92, -19, -36, -54, 45, 114, -16, -64, 112, 38, 123, -115, -21, -13, 68, -44, -80, 119, -100, -47, -33, 126, -106, 35, 74, -94, -125, -113, 54, 100, 92, -100, -51, -125, -16, 124, 31, 64, -9, -124, 62, 51, -51, 57, 117, 60, -25, 123, -120, -63, -72, 10, -56, 13, 70, -42, 41, 105, -114, 70, 37, -35, -74, 59, 76, 110, 27, -14, -125, 66, 117, 63, 78, 20, -22, 89, 109, 97, -10, 55, 126, -89, -115, 121, 79, 55, 90, 38, -81, -77, -50, -44, 72, 109, -43, -30, 109, -4, -84, 35, 76, 119, 61, -63, 6, 40, 109, -36, 79, -96, -29, 75, -70, 117, 14, -127, -117, 110, 121, 46, 54, -5, -87, 74, -127, -47, -20, -92, -14, -97, 15, 116, 92, -122, -67, -100, -100, -34, 29, -23, -17, -79, 59, -48, 106, 103, -117, 95, -72, -48, 65, 62, 75, 124, 106, -60, 9, 55, 50, 9, 58, 0, -128, 96, -60, -49, -46, -120, -5, -47, 36, -101, -31, -111, 92, -63, -3, 124, 57, -78, -85, 118, -103, -106, -28, 22, -81, 26, -127, -63, -15, 38, -69, 15, -68, -84, -41};
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
    msg.setTimeStamp(0.18125886538);
    msg.setSource(27956U);
    msg.setSourceEntity(198U);
    msg.setDestination(13786U);
    msg.setDestinationEntity(219U);
    msg.plan_id.assign("EHNMTUIONXDLXRTSCXGSMVMHQWYWHGCABFZDSIZEULKOYKGCVTGTITEBPVEUGKJDBPQOIGRNPPULGMKVHMFTOBALHISPTBPQKQWCHKWBYOHTHNHFCVDCQCLYOIAUJUPXDXKQMDSXBDUOSMMNWXUSDNGNJPKFJBLKCGCQIRTOWWWWFAPUVQARRAEFISJDZJRIFTMZJPZYNEVVXZZRMYQECXAONEYDOZ");
    msg.plan_size = 63529U;
    msg.change_time = 0.457414943991;
    msg.change_sid = 7323U;
    msg.change_sname.assign("STVKJDHJFRPPHTXKVWJMAIUROIBLHMNGIMYGBOYKZLIFADTNQFQDLYWCWPFYBXMKWACWYLRKSMFXTSSUPJOUOFFEYLFSODQHEHXHTCPUSJIPJKNUBXVCPDUCNDHYYQZYEMEGGEFIPABJCTIBSNBRCDKGTCVVXBJICLEGROXXIIZMGRUVOLADOHVRUZDJWNKYWGZTGPQMOUVEXWOQANNWSNQZLXZC");
    const char tmp_msg_0[] = {-51, -79, -15, -110, -97, 42, 77, 66, 26, -113, -48, 27, -115, 92, 37, -98, -17, 67, 126, 6, -61, -76, -21, -79, 59, -51, 27, 88, -70, -13, -103, -126, 123, -66, -16, -64, 89, 21, -65, -117, -52, 11, -74, 126, 53, 102, 85, -50, 11, -40, 101, 70, -126, -67, 89, -45, 112, -30, 68, -50, -90, 33, -14, 5};
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
    msg.setTimeStamp(0.88870359496);
    msg.setSource(50347U);
    msg.setSourceEntity(4U);
    msg.setDestination(9311U);
    msg.setDestinationEntity(2U);
    msg.type = 202U;
    msg.op = 187U;
    msg.request_id = 61225U;
    msg.plan_id.assign("WQEYOETUDMKQAHSLUWJJOUOONPVHHJJNUBNWVEHLPMVDRWNXUMQGJYZIANDDCPEXKBXVKCISHLAEILKEEYMCJZGDZZKKRQXXMITUYARSPZHQCWZIRXMWZZOLFLGTWFVVGVPFGBEQUAET");
    msg.flags = 35015U;
    IMC::CrudeOil tmp_msg_0;
    tmp_msg_0.value = 0.660488821342;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("XARLNRXKKXVTRBHYKCFLDSXIJPZGHC");

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
    msg.setTimeStamp(0.880057444228);
    msg.setSource(47402U);
    msg.setSourceEntity(226U);
    msg.setDestination(41053U);
    msg.setDestinationEntity(11U);
    msg.type = 246U;
    msg.op = 111U;
    msg.request_id = 65529U;
    msg.plan_id.assign("KARFABWWVJLTWODMCMGELNPTAMFKFFXUOAWLUVUCLQZYAQYYZNFILRNB");
    msg.flags = 18850U;
    IMC::DmsDetection tmp_msg_0;
    tmp_msg_0.ch01 = 0.510709611568;
    tmp_msg_0.ch02 = 0.292396676046;
    tmp_msg_0.ch03 = 0.96155602568;
    tmp_msg_0.ch04 = 0.401285170486;
    tmp_msg_0.ch05 = 0.616710097096;
    tmp_msg_0.ch06 = 0.19235398852;
    tmp_msg_0.ch07 = 0.905878248943;
    tmp_msg_0.ch08 = 0.758712374362;
    tmp_msg_0.ch09 = 0.970326806644;
    tmp_msg_0.ch10 = 0.375544129027;
    tmp_msg_0.ch11 = 0.621896391346;
    tmp_msg_0.ch12 = 0.503483739142;
    tmp_msg_0.ch13 = 0.943313364476;
    tmp_msg_0.ch14 = 0.85444656115;
    tmp_msg_0.ch15 = 0.861386152335;
    tmp_msg_0.ch16 = 0.752063040306;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("FSBBHUVEPRTDCQCAB");

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
    msg.setTimeStamp(0.119234502749);
    msg.setSource(50636U);
    msg.setSourceEntity(18U);
    msg.setDestination(54467U);
    msg.setDestinationEntity(202U);
    msg.type = 157U;
    msg.op = 88U;
    msg.request_id = 12350U;
    msg.plan_id.assign("HGHNNPPFQERZKIUAQIYYNNBZYRNJKWXRKFPLXQCSWYZZGSTODPFHCVJVQXKNTEYOCFGDVMEOLQBUENYYRBCSJDYRLLGSPNUTBWMZNOSAUIDWAUSUTBXZVWHKSEUPWLLZFGFPCGIDVKEYCLQDIBDLJQJMQJCUQSRLKHDKRTCVJMMPZIMCXRZTAXTBSHIRCATPMOHTEXXOAVIFAONDWHYDOZQJEHMOFWVTGFGFVJOHEMSG");
    msg.flags = 46215U;
    IMC::PlanDB tmp_msg_0;
    tmp_msg_0.type = 140U;
    tmp_msg_0.op = 33U;
    tmp_msg_0.request_id = 31636U;
    tmp_msg_0.plan_id.assign("EULNHWVEOEGMYJSIHEPBMKYNYXTJLBFRNLOBWHOSUZWRZELEIGJIWVJUMTAFPHMCYXPIOTDZPMARWTIFVRPHBBSQQCUFNDKFGUVZQIDQHUXEVDCQWLVMPOZKARCAIMRFJEKUKAYGYZIX");
    IMC::PopUp tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeout = 57900U;
    tmp_tmp_msg_0_0.lat = 0.48925205865;
    tmp_tmp_msg_0_0.lon = 0.700354875376;
    tmp_tmp_msg_0_0.z = 0.553631763835;
    tmp_tmp_msg_0_0.z_units = 101U;
    tmp_tmp_msg_0_0.speed = 0.953451560741;
    tmp_tmp_msg_0_0.speed_units = 44U;
    tmp_tmp_msg_0_0.duration = 6112U;
    tmp_tmp_msg_0_0.radius = 0.812830702253;
    tmp_tmp_msg_0_0.flags = 137U;
    tmp_tmp_msg_0_0.custom.assign("CJEXCWBWDOMRHPKWHEEOAFMGVEVLVQCLOPIPNADEKYFPLLJPZNYKYXZTCWFMQZEBXLWROAVBQPMTATSZDCMGZWRUHFWJTUDUYGSPLVZBNJUILRIGRRYDSQATIBKINWJMNHGSEQAQDBHLFYJMSGUVAUEDVHJCTXLFCXEQIKKBGOHQNTJBSNNTNOCWUGYODNEKFJZPKUPMKZIYOAYRLOXGDIDMWBQXKARUXSTTFCUVBSZHXHGVIZMFJRSP");
    tmp_msg_0.arg.set(tmp_tmp_msg_0_0);
    tmp_msg_0.info.assign("PMBPQODUFVPGMLOHNKRCVKFTPRNJKTKAIPTFKUZRLCDGIZEFNUYEXHOARJNGEUQFIJIJVWHOMWHAGBWNPQDBCPKQAZZUZRKIJEAXWECBXTXCGLJZEPOVUSMNLZHHGSYAOSZUDSVETVDWIBLRCH");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("CKXGIRRNBIOPSYTOGWFSTJWMQBFARADTJCOUCATPZRJPWVDMJWUNZNJIQTPFEUNMWSHCDEPSHMYZHYDAYVKWDCJDHJHNZVSFAMGXKJYLWHRUXKJRZUQSILQFQUMPWLMKEUWBXGUMLNLICNQBEZQQBAGOVZFJEUEOEXEGIEKXEABOHRIPFRR");

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
    msg.setTimeStamp(0.851070195495);
    msg.setSource(34914U);
    msg.setSourceEntity(93U);
    msg.setDestination(59940U);
    msg.setDestinationEntity(108U);
    msg.state = 250U;
    msg.plan_id.assign("LEFBISXGIVPRXDYYWFUQZZDFZASEMFKOXNVVXLGTIHRYLQONDTWIJAOVNZJWBZPHUTFKASTSNHQAUJPAJZCCUGXQKZOKJCWQIUENRGIKANWVMPZNGQANZCRRIVBHHRCFSYQDD");
    msg.plan_eta = 1381238700;
    msg.plan_progress = 0.866868842786;
    msg.man_id.assign("RFGNVDYREQGZYZYISHOWNEATSXDNBPCBIQANMOQZVYVTWQHJYLZWTBLFMFZPMAHMYECKRPLHEJDNRLALDWGQJCGGLDZCVEXUITQVYSEJPIFAICJYUSKNNXBKWQRUUKEOOBSQTWEFSPSJMECFUAPGACOSZOFPMYZILHDZIIXOKZUWKCDBMJURKUUVYLHFVEAAWGHUQVSXHXIBBFWXGMNISRGDRCTAL");
    msg.man_type = 31072U;
    msg.man_eta = -327929088;
    msg.last_outcome = 146U;

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
    msg.setTimeStamp(0.938062165004);
    msg.setSource(13442U);
    msg.setSourceEntity(221U);
    msg.setDestination(16405U);
    msg.setDestinationEntity(39U);
    msg.state = 142U;
    msg.plan_id.assign("LMGUHKKNNGYJOFGVZQMWSVSBCXEENQTSJEISKOYZDLZJLOYGHSXZEBKMIQQEZNCGGHXYYHKDHVICUBGAPIZOPWMCBJFIIBAEQVFUWDRTZTRVAFMMELBUCCHVGUFPPMQZDLVRFQNJNYNUXJKBSNBZFGYDKXPYODYEWAVWTMXKQILTPKCWXC");
    msg.plan_eta = 2044462138;
    msg.plan_progress = 0.890355901464;
    msg.man_id.assign("GADVLBIOKDEWUYLBQDQJCNCYPUAUBKTTYPRKQMSNIIEDHPWELVSKNJFQJYATBUEJHIQFAPLOGLFEFIIRTSOGMXCZEWXIHSNPAFUZFMRVHWZLDKI");
    msg.man_type = 57967U;
    msg.man_eta = 252954024;
    msg.last_outcome = 158U;

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
    msg.setTimeStamp(0.722149060119);
    msg.setSource(5621U);
    msg.setSourceEntity(148U);
    msg.setDestination(44404U);
    msg.setDestinationEntity(8U);
    msg.state = 179U;
    msg.plan_id.assign("OSTJXFQCOLFHTZBXOLSXZRMRFGHCMAABYLQSPJMTBXOJRNFENXKEDUQZORVYUTTOBRYPDTYIQXWWQKLZPEAIJDGLIJFZROVQKOEIYKKZWQCOJFAGNZRIPEAVDFUUHHWSMTWSKDIHNMNXSLAIYGEWUIWTDZWEHBSFUMVVMUTCZAMNWXUDRPLIRBQERENLDNVANKLAGMFGWVXDZDHVTCBCJVUPPPKJYKIOSGHBVEJJBSXGYYQG");
    msg.plan_eta = 1359624620;
    msg.plan_progress = 0.525569498978;
    msg.man_id.assign("FKQDUFSMYGAOTJNADZXUHBUWFYUBHMTPWH");
    msg.man_type = 49037U;
    msg.man_eta = -104352507;
    msg.last_outcome = 30U;

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
    msg.setTimeStamp(0.428547918447);
    msg.setSource(50156U);
    msg.setSourceEntity(152U);
    msg.setDestination(45704U);
    msg.setDestinationEntity(119U);
    msg.name.assign("CSMRAVCMWVL");
    msg.value.assign("GSJSCGOICEDAENSJITRARHNMOQUNQSRBBUFMFKEHBUWTGZYEXMLVNPSDEJFNUCMIIIKMRCAJPJDZGPBFLRWHOMQCPSDLYFWBUNWNVQXVPMDYXKCMGOQVDASTOHJBEJOWXLNZIGKPYWPIZVBILVWTJXQTKQYOAQBTXHZN");
    msg.type = 87U;
    msg.access = 28U;

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
    msg.setTimeStamp(0.374178680225);
    msg.setSource(57594U);
    msg.setSourceEntity(139U);
    msg.setDestination(48150U);
    msg.setDestinationEntity(100U);
    msg.name.assign("XIOWUAFJGMLFMENDQIIJZLDZWBQAGWINFSHFJPFKHMVFELWKNGPTUTLMVKWHRSGOKTZCBQHVQHVFBSYFHVMZLCZTLVESRHPUTZWDPLRQKORWEYUMPUVWUYUDDQCVCNUOXBAXGGLEXSEDXNOGONRSNBKMJIIBTJKO");
    msg.value.assign("BPKADFOOOCQIHFEHIVBUKRBVEZLHXVTIEAZKCBXEXAUZJJRWRTSKTKTDLPFDAGVPUPCZIONASEPRYFNKQNNXZHRMENPXTWCODVTWFJYREFYYIYZRBXEFVGQJRSDVMHMEMFJQDLNWCKGCMUVUJMIKYCISUDHXUTWOIUPKQJBPYXDWYBQLNGL");
    msg.type = 1U;
    msg.access = 5U;

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
    msg.setTimeStamp(0.444401261626);
    msg.setSource(60928U);
    msg.setSourceEntity(51U);
    msg.setDestination(24072U);
    msg.setDestinationEntity(160U);
    msg.name.assign("RYREYJDJPQNKIOABLLOZBTCBEFQUHMUQVRZFZQJKVYDNZEMVNUSSMGABYNWLAVWNJHHWIGWXOTESTYYYKMGXSHVUZKWEODIADMZOMZADBRBKFTNLIUSAWWKIEYPDSSILZPGOKCIMQFCJSCDVTIAKPQOFVTACBMR");
    msg.value.assign("YBKBHRFJDSOVXIWJNHDMBHYGKAQDPPTUCLYDNNZKBSATKXRCRCSQQEFFCDREIAYERQRSPCKZDPWNIOMJPEBQYWZOGHGY");
    msg.type = 180U;
    msg.access = 254U;

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
    msg.setTimeStamp(0.670388318934);
    msg.setSource(63260U);
    msg.setSourceEntity(208U);
    msg.setDestination(4653U);
    msg.setDestinationEntity(24U);
    msg.cmd = 26U;
    msg.op = 117U;
    msg.plan_id.assign("XCWUYNUZGPBGPRVFWNTRAEQTQMSKTGLAEZKSLERZIDFURITDXFOUHCYXNRHFLNHPBPWWDGKLLSUWQIDWFZOFOUIRYZZLPDCFVWPHXDVBYMJXSRJBBJTGKSZKIGCPDOVJHHVLCQRFAQCQSOXAGXAEEKFDSO");
    msg.params.assign("WKCXJQKWFYGVGMGDCEMWLVDALDEONKSEPDMTNHKSMEPAQABSPITUDFHQBXTFFFQFWKLFWZTDAVZJQTVHUPROMMHYDULUQSKZPVEEOCHZAQSNSXWJHLLNRMLIGPHRWOULYRASIUFZNPQCXBVJZAHLXVIBMYOGBUVGIJBUNYIBTXKDSNAONJG");

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
    msg.setTimeStamp(0.862441066168);
    msg.setSource(53448U);
    msg.setSourceEntity(74U);
    msg.setDestination(10692U);
    msg.setDestinationEntity(17U);
    msg.cmd = 154U;
    msg.op = 233U;
    msg.plan_id.assign("ZHEQHIMRJGUXKCGACRQXRRQMUAMETMIDYARGVOALWDUBTPTBREPBZHDZWHSSMLCFUVXRYXXRFNNVNNDOSBWAFOIXPCFHUYKNCLJZYETQSJIPTXKMRKGJVONIODHYHLWTOFGYBNQKJAEWVKOVOKZQXPTEMKZUDIYMLWTQWCJVUGBHLCLFNFYEEOLSWVAENLWGPDPQZSTAFCKZMGJVT");
    msg.params.assign("UYINFTJJCQXXLVQIFKMUOMKNLXOOFIRSFBWVIHITDJKCESTWNFHPAVZDMPBWCTN");

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
    msg.setTimeStamp(0.958735756926);
    msg.setSource(62881U);
    msg.setSourceEntity(12U);
    msg.setDestination(4576U);
    msg.setDestinationEntity(115U);
    msg.cmd = 242U;
    msg.op = 155U;
    msg.plan_id.assign("OWYFOQWFBBVEQNAIERJAPGQSCTYZJSISUHUNEIKIYRITWSGCJMMKMEYOJIIXGQMGOLPXRDQXHYODBIFQMTBMDYXHGLPWFGFJUTEOPTSRKLTLOVNLUVTRECPQEZYXAAPMWJWNNVSLVEEDSBNHCFDKYFDQAXCWZJAZRUSNUGRIXMVHRDEADKTLVFPYHXHMJTGQKUDCCNVFUPZZZIOHRUVLBZCAO");
    msg.params.assign("YFEYIPKQMDIOGWI");

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
    msg.setTimeStamp(0.473447202127);
    msg.setSource(54746U);
    msg.setSourceEntity(34U);
    msg.setDestination(2956U);
    msg.setDestinationEntity(186U);
    msg.group_name.assign("MFFPOQTTSNAFWXPYEGUSDTZYXSRN");
    msg.op = 249U;
    msg.lat = 0.0649278245905;
    msg.lon = 0.283751029187;
    msg.height = 0.281096122126;
    msg.x = 0.963550305592;
    msg.y = 0.454250325706;
    msg.z = 0.447363728023;
    msg.phi = 0.793657308026;
    msg.theta = 0.0648738368481;
    msg.psi = 0.71404275248;
    msg.vx = 0.75942926107;
    msg.vy = 0.736223271999;
    msg.vz = 0.0203121819322;
    msg.p = 0.493140117186;
    msg.q = 0.610752944936;
    msg.r = 0.289734067455;
    msg.svx = 0.640469750446;
    msg.svy = 0.426213395419;
    msg.svz = 0.936291026632;

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
    msg.setTimeStamp(0.485845272672);
    msg.setSource(3370U);
    msg.setSourceEntity(157U);
    msg.setDestination(38946U);
    msg.setDestinationEntity(77U);
    msg.group_name.assign("CUJVLIBJMYEYYPOZEJRNEZDCWTPAVOGMUWKZOXLITOECJEFQUNGFXBQHYYKYWMAHRCPHWUHAJALTRUXDMZSSKCBGOORNNFQTHLRXDSAMKIOPFAGCXAEDCBTHIVGUMWKABUGRRVWHJNISVTTSQOHEPKJOXILRZMCLGSIWESKWYMJBLLISMOQVYNIUNUGFPBQDVBQPGBSDAZHVFQ");
    msg.op = 184U;
    msg.lat = 0.308301017414;
    msg.lon = 0.568645011184;
    msg.height = 0.758263486191;
    msg.x = 0.699855525811;
    msg.y = 0.40771951568;
    msg.z = 0.733941767228;
    msg.phi = 0.261991213901;
    msg.theta = 0.824047772118;
    msg.psi = 0.822714249518;
    msg.vx = 0.11233876099;
    msg.vy = 0.260903596445;
    msg.vz = 0.399719578847;
    msg.p = 0.130214951133;
    msg.q = 0.414227033319;
    msg.r = 0.151934445013;
    msg.svx = 0.900975370434;
    msg.svy = 0.525197379022;
    msg.svz = 0.465938165868;

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
    msg.setTimeStamp(0.352472239062);
    msg.setSource(30902U);
    msg.setSourceEntity(140U);
    msg.setDestination(51011U);
    msg.setDestinationEntity(37U);
    msg.group_name.assign("PMYGKYVRLGCKLDPNHJSTVXCOXHXNYESANRVZUOSAOCEBRDGJNROGFUEFTPMQHIMHEISQZNJNUANFHKIJMSAIOZFDIVEWCJRWPKDVTTGQRJDOHDBQBFZTCXLQULRPILXXDCBWZZPYBACYG");
    msg.op = 170U;
    msg.lat = 0.712713894399;
    msg.lon = 0.579969338134;
    msg.height = 0.397275187386;
    msg.x = 0.0394367055946;
    msg.y = 0.93062631918;
    msg.z = 0.0870906727649;
    msg.phi = 0.880460302033;
    msg.theta = 0.410087573715;
    msg.psi = 0.628139317765;
    msg.vx = 0.584824014143;
    msg.vy = 0.166068834303;
    msg.vz = 0.617124855444;
    msg.p = 0.597356170781;
    msg.q = 0.744154760546;
    msg.r = 0.364956915896;
    msg.svx = 0.03657828094;
    msg.svy = 0.13749181253;
    msg.svz = 0.461165328839;

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
    msg.setTimeStamp(0.846529041364);
    msg.setSource(50534U);
    msg.setSourceEntity(26U);
    msg.setDestination(12393U);
    msg.setDestinationEntity(11U);
    msg.plan_id.assign("CQVTUWSGCAXIEBVOLPEHVKTHBUIJCAKVSWDQQOZLTTMZEREVPYJWXJVYYDJTXQANYTWUDNYIMWFFKRLNEUGCKPVGZLZXQSDUBBUZKHQPIFCJKSRNCLZRXNRCVWKZYLUXFIGTATHIXOGUJOAOUENWYDSAZSHMKJYBEMACGARSYFAXRPNCYKHNQFOLZMFDGMH");
    msg.type = 14U;
    msg.properties = 35U;
    msg.durations.assign("IAFTIXBZJPIYXHWEFNACUPPXWHIKSHDHVBSHTPFMTFXZIKSTROMOJGOELCLEJJLDERVBPQKARWYGMESBAPGOWJDLUNKQZJFRNWIZIKPQWEUWYYKOBSXBFVNRBNBEWYUMZWUDNVKQDIGFZYNRDKCJSASGAIRTOQHLACZMHOTOQHXCJLVXUWZHSVCDGXTFEKUGGTHCPPAOQOMQSRXVMQCLYDJMMZKFNQPYMCLBGVNGTUERXEYCYIRDULDVFZ");
    msg.distances.assign("AZESVVDJLKWZXMVNIGHKNDUECQMXBNHJUHTHLJZYYGLZTIFMBCFAXNEFCFZOOCNRVTZPOAXQHNPIUPLOCRIEFATTZVTFZXMIGCBGPQMODJDVEUAQTFZWJAHTUXMRJVBSJEKKBSKWQUQYVRJEXDDDWNMRVUYWNOAQPRAYJVXKAYWLPFUUGYOHEWNEYMBJCSDGAYKBLXHLPFPIYBWGC");
    msg.actions.assign("YCTYFVRXWZURAZRWDAXTICUJENWSCNHZMWXWYFDPGBPOYZKAGHHNRSUVICQXBPQBOMQGGQCMZBLTKLUFPVXLQYLFWXCDKOJIJNTBAYJPWQNFLLLMCSEGSDAZBKDIVSYOIMRRGQDK");
    msg.fuel.assign("TDUEFOWVTMBBXEBVHAWLBVHZIZFWBKMFXJMRKHYTVXYVKFIKRUZRGRNBOTIZBGOEUNMGUEWDESEJDQNSCONXPAQCCMXFDHIUOPDCUYBAKWWBVMJJCUA");

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
    msg.setTimeStamp(0.422956189876);
    msg.setSource(53832U);
    msg.setSourceEntity(160U);
    msg.setDestination(44896U);
    msg.setDestinationEntity(118U);
    msg.plan_id.assign("QIOTZNEDFPOARZPQOKMZRSTHDSOBIMRQQBEVYSNV");
    msg.type = 65U;
    msg.properties = 222U;
    msg.durations.assign("BZINMWZOXLIFTEXVGJNCMSDLIUMPHKTXKNPFGFTNHDZKTCUQWQCTVQBFXWCRJABPURDPADPUGIBJRIRTEOAXQVNNBOZWKXMDDBFOUVPLBUCUDYPJHNVWAYJAEDMZQIPYXSBGQUMJQWFNOOTGKBZSEKSGMVSRPAYRZRJAPHYVEXSGLLNHLVMFWCSQRJNXHIYYSQRZDKOSEEYEKHXHLKDKOURATWYIGBUWIHOCACTMCVLMAG");
    msg.distances.assign("YIVJDGMXIEXEYKUSLTVXLZSLZGBUPQYPUCAVNDLVPSSJBMCOGNMTUKJCMMHSLRQBVMBERIXRKCOJHNTOELYDZDRHIBYPAWQGURFYSQUBGTCPCFJNRCFENPGKVZTFWWIZZ");
    msg.actions.assign("MUKYPAZUYWIBXKYDCBOLWOPVTTVOLXLDJXPQMRCAPNMHFDFVQJMDELDYBJKMUWZRFTCFSEYTAQZQJSSEPIEVLUHYNYHRIKYWLCGXGAOUDRJGDKRNZBXACGEVFGUUJONBKEBUIXJQUWEIQSQPHRHWBJNRFHVVBGFTOZWOVAPW");
    msg.fuel.assign("HKEYJKFBIVKCKTZUCUDLDBEGQEHPEJOMEYHRXKWZCZNPYVUGPMQTGAWOCOYPVAJLBAALLVHIUFUFCWSLUYWGDZKSAMYBARXWRCYSHFAPJFBENQGYIJBFCMETPSSFXWRJIDBTDTXKXSOKIZORHNTQHMSRAQHJUMVYOIUVPNKCPZWEQSAORFIGAVVTKIPXBQMSLRWMFDVRBDOBVGHPXCXXJMDJLWLNQODWGEMZZGJUCXSUGNNT");

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
    msg.setTimeStamp(0.151868995325);
    msg.setSource(54771U);
    msg.setSourceEntity(122U);
    msg.setDestination(16519U);
    msg.setDestinationEntity(59U);
    msg.plan_id.assign("TYXZHVWSAFTYNYIVHYCHKQNHLBNXLYFBQRESRLOUQRTPERCLILDZGKHDSFMELDNWWQVXCFJGHPZGFXDFUBKSOMQWNLVBBEOSUOTBIIDEBZXVYCTUMSFVJBGIUCTHZJGCZAAQOPDBHSBSRQMTVNXZRIJPUJYNPCHRFNUYZCFFYGIYMOWIORCKNXOPWLJWZSPIDLEEOATWSULDETKMPWVK");
    msg.type = 216U;
    msg.properties = 85U;
    msg.durations.assign("OLBNWNPMNCTHXLOMKLVAJAATAPMJKUNNVLLWJCZQTEKZEGECXRLYJABJRMVUKMDMCZEIRXBJPGIIGFWRMTYQSTQGYFJKFCQIRRAVPZTUBHYNYISDIAWFYMSXKHBUBAKDQFGBFUASOSMRYWY");
    msg.distances.assign("WBXYMVHFALLVZDRKWYNJDTAIQRFETHLRLCMWIZYRNOWAEGJUCPJMNOUTVMIGMHXQEZHOCIPVCZUZCNWVPHNLTYIQAIIRFUJQBZQFFQOBLHUGKFEUVKFKFESVGIOWZADVSCFEOQMXSAXYUMXBNWNBDZYBJIYGDHKXSSPXADLVJWROPJQUSXXKISJKSDEORCUTDMGSCORWTGOBETAYNDMXFRKZKPGVDPBYLCYJAKNHEMSBJBLPPQGRWGTUCT");
    msg.actions.assign("WODSWNXTGVMLILGPRGVWKSQYICWQEHHHUBTIEYGBPFQRLYNBMYOFXGOFRBDQSWLGIPAJMJWKRNGDGHCYEPVGTETDEUXUEVAHOJYNKUDZXYDTSGKBPTJLEKXOXASHFKFHKCZEIZJLZNPDWYMZHSTBQETSMRMVVSNNNPO");
    msg.fuel.assign("IKUBHBFJTHMQJYOCEPSISNYFHHVMEIKJDRVGFETLKAWQOWNXELSBTSDXPRGDVAUUHRRZLQZEFCTWPJIWLZRSHFOCTGXDVNHPBZMNHRALMWQCGKOARNQZJJSERWXYOVVRUCOECMTYULUPBXXZBKQYGYBPZTOWYZQJFPENIIXLADJICUDSGBYGPGPQDVSWAKEOSIKMT");

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
    msg.setTimeStamp(0.687408481614);
    msg.setSource(1758U);
    msg.setSourceEntity(187U);
    msg.setDestination(17572U);
    msg.setDestinationEntity(240U);
    msg.lat = 0.324598535744;
    msg.lon = 0.789695260254;
    msg.depth = 0.0250933981804;
    msg.roll = 0.199438435439;
    msg.pitch = 0.578184314796;
    msg.yaw = 0.728574413288;
    msg.rcp_time = 0.44704135711;
    msg.sid.assign("EXWQJKLWAEGJMKYRMGSFOGZARISVAJZGULBDFPCJKTWCPYOFSTGFQLYUNOBTRYUJ");
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
    msg.setTimeStamp(0.13830927949);
    msg.setSource(23204U);
    msg.setSourceEntity(20U);
    msg.setDestination(39014U);
    msg.setDestinationEntity(192U);
    msg.lat = 0.12396216558;
    msg.lon = 0.119862669508;
    msg.depth = 0.492498467318;
    msg.roll = 0.718689323301;
    msg.pitch = 0.68055551517;
    msg.yaw = 0.673286513465;
    msg.rcp_time = 0.873205700774;
    msg.sid.assign("GDPWSCOHYWQKEOMLIYMSTGFBVBQLFRYQPSZPNFMERCOZNWBFDDZDFABCNRTJVMJPMTPMUJZRRZBTENQWKMNTUYXHSKPOJXFLKYXOAOILPSJUKOMHWGVBDEAPUJWCLUSRTBSMBKSIQXZTRJNAXTDCNKUXKUXNVNBIEGDHEIVQFIGLYLTLDZC");
    msg.s_type = 234U;

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
    msg.setTimeStamp(0.379823443806);
    msg.setSource(5537U);
    msg.setSourceEntity(185U);
    msg.setDestination(3789U);
    msg.setDestinationEntity(212U);
    msg.lat = 0.00785567524628;
    msg.lon = 0.756297289658;
    msg.depth = 0.353668162146;
    msg.roll = 0.586224231566;
    msg.pitch = 0.511750669132;
    msg.yaw = 0.486296336555;
    msg.rcp_time = 0.275532040892;
    msg.sid.assign("YLTZIFDBQDXEYBJZVIKAMUSFHSEMSODVSAHNTPOH");
    msg.s_type = 217U;

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
    msg.setTimeStamp(0.751913918778);
    msg.setSource(12379U);
    msg.setSourceEntity(203U);
    msg.setDestination(11077U);
    msg.setDestinationEntity(246U);
    msg.id.assign("SCJBCIOLBXUHAWLXKXDHPTFIANGYSOOZRFETEONKAGUKMHYANHUYRFXVODIWQIVXJDOUKMSZSWTDRPSMEIHRPUDPTWBEQHFMCJGYDCHKBJNQLMEZLLJGJXJPAWNZBACCTFYUSEKGBQLYYEGEZYANLPHFFGOYEZNVNDQXIRYWUUFMVKALZKQWLMVITVHOCORAEKBQGJWG");
    msg.sensor_class.assign("MAUKJLXZSRVFWOXAUVGGKDVRVTURUAGGHXATAAXKBOTCILQNJBSOJHSJMNTYUVGSYZRJ");
    msg.lat = 0.441191412446;
    msg.lon = 0.00562331272162;
    msg.alt = 0.900568341143;
    msg.heading = 0.660652851073;
    msg.data.assign("UYMZWAIFDJVVWFIPMSWYGYSJKLEDOSBYDSXBKMLIRZSPOJZCVKYERITQVASYANBOEMHVXZNWHAYUHHKXPVOVCZHOXTQLIDRWQNRLQRAUJFJWDNGARDITHVEMMPEBDUAHAUZOUDEWQGEUQOWSMICUZBQXXKAPN");

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
    msg.setTimeStamp(0.324035150754);
    msg.setSource(10359U);
    msg.setSourceEntity(60U);
    msg.setDestination(50423U);
    msg.setDestinationEntity(155U);
    msg.id.assign("UNPBFLURXXQWWMUWJCTKIRGFNZLOVRHNOZRTSFJHKUOBIKTXMTYBEDCFKWTSTEUJNMEIVCGLXXYAAMPHZUYOOYQNMRSQCIPFVLTHGRMALEJNWGI");
    msg.sensor_class.assign("UWZMWEDJLDKSEAPAGYSXGHMOIIPLOTBPFGHBBKNTRQLHJPCXEIUNJNAFVTOWTWGZSQELNEPGEIDBPMFMJHSCRYHVEILRTAQTXYIUYVWRP");
    msg.lat = 0.258387508468;
    msg.lon = 0.601760833863;
    msg.alt = 0.419737460348;
    msg.heading = 0.226268150567;
    msg.data.assign("BBNMKIQDMNEZGJTBESRYXLOXVTSNPQPUHHBNYRFGUTZLAUSIXJWHIDYVKEXYRCTBIEEIDFIFUZQYTNBEHUOISMZVKARAZDZMLBJWXFZNEFMMCFQBRVKKOXWRCBJVQPPGHDWPQAVTVCYUAQMUJLCOIPEXNTFVSOHUADVPRCMASOJQOZOXGEIFKQG");

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
    msg.setTimeStamp(0.17193084749);
    msg.setSource(38146U);
    msg.setSourceEntity(135U);
    msg.setDestination(57578U);
    msg.setDestinationEntity(236U);
    msg.id.assign("GSLRVZJRFWMEWJHOVQRWRRLIELHHNPZYDEKVCUCBEPAVFYZNOGNMNFBCPQNFTWMCEIRUJUNXKGILEFTLMJKXKNTFYKABQBXQVHUGKOOWZLUCIDSSXXMMEYADNQIJLOPDKJRDSGBZ");
    msg.sensor_class.assign("RAKMGIGUBUMXCYYZCKYHJJKQNTCQPDUBUBKWYFWFYMDEIHCEKAVUCNZNAIVSZOKSBCSCDJTUOXXBHFWXAXMBVQMJRTIWGRDRHJHL");
    msg.lat = 0.327355933661;
    msg.lon = 0.29443854595;
    msg.alt = 0.925875416969;
    msg.heading = 0.721153346401;
    msg.data.assign("OMZCWVBHPUGCVJWAFPDHQIJYIVDMDJYGKFPHYCRROWTTZLUWNREWCFTVHKLRBVMIZPFWAISBJTOMXAIYBYTOEJGEHPAEFKBICRYBACTKGYSQLNQDCNBHLXPOIRQVXLOMIGNUVODAXQLJUMZFAESEDUXDJSILCLKOVDQ");

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
    msg.setTimeStamp(0.841853199594);
    msg.setSource(61975U);
    msg.setSourceEntity(172U);
    msg.setDestination(31678U);
    msg.setDestinationEntity(61U);
    msg.id.assign("KOJHMLSRGTZKWAOCMMLGWPJUECRWZNACDSIHNSYHMZNKHWOFQVSLEFHMLYFFNCCQKSBGFJYPGTIUUBLBPQYJYENIUMTPGELWBRSITQUYCPGETQEULRXXQXCKSRNJHEZNIWHAQZAFBEFBUAMYZQDWINTXVUKDPWMJTPXZLRBPOCWFWGVGMFVXD");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("TNPYZWVYAIRVFYMOKKOIFFRUCENXMWYGPAAZJAFBDRBJFZVCDOEOFTX");
    tmp_msg_0.feature_type = 244U;
    tmp_msg_0.rgb_red = 250U;
    tmp_msg_0.rgb_green = 101U;
    tmp_msg_0.rgb_blue = 165U;
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
    msg.setTimeStamp(0.578985363673);
    msg.setSource(47225U);
    msg.setSourceEntity(172U);
    msg.setDestination(27393U);
    msg.setDestinationEntity(229U);
    msg.id.assign("ZYCBDXRZURHROZQRTBENGYPXTUGLJLKDKXPULOCBN");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("ZMTVCBDRUGDCFHGGOBXSHGXJSQNPUOMIUMVQEHWVCYKZLPZDGLNAXRCIDFALJNSUZANBTIZCFFRHLTOODIWJURKEVAUOWNAVVKYCIYKLSHKYPAQSIRCIGDXZCYPUOXDEOAMSNEPKWCYXSNQBJZWQXGATFJEYDHQNWFSWMGTULPMKZSBLKXPHVODJ");
    tmp_msg_0.feature_type = 24U;
    tmp_msg_0.rgb_red = 1U;
    tmp_msg_0.rgb_green = 221U;
    tmp_msg_0.rgb_blue = 171U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.633234962899;
    tmp_tmp_msg_0_0.lon = 0.860845797531;
    tmp_tmp_msg_0_0.alt = 0.0990721880681;
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
    msg.setTimeStamp(0.236059632745);
    msg.setSource(55540U);
    msg.setSourceEntity(88U);
    msg.setDestination(918U);
    msg.setDestinationEntity(24U);
    msg.id.assign("VRZYYDEJADAIBKFZIBYXGOVOXTSQORSNDXIWQLEYOPKACZWMAVSMA");

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
    msg.setTimeStamp(0.852619900646);
    msg.setSource(25475U);
    msg.setSourceEntity(59U);
    msg.setDestination(11531U);
    msg.setDestinationEntity(242U);
    msg.id.assign("ADVYZYQIFSEOMZKVDBWPJAHMSFRIEFPDUNARZTHULLCIDWMXOJNGYUFDJBCSSTCUTGMBBEHHGBIJSN");
    msg.feature_type = 204U;
    msg.rgb_red = 83U;
    msg.rgb_green = 112U;
    msg.rgb_blue = 176U;

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
    msg.setTimeStamp(0.834479259779);
    msg.setSource(37765U);
    msg.setSourceEntity(232U);
    msg.setDestination(20407U);
    msg.setDestinationEntity(14U);
    msg.id.assign("RQDPQGKQUFXCTPDGVUY");
    msg.feature_type = 228U;
    msg.rgb_red = 95U;
    msg.rgb_green = 87U;
    msg.rgb_blue = 188U;

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
    msg.setTimeStamp(0.668945215674);
    msg.setSource(62470U);
    msg.setSourceEntity(129U);
    msg.setDestination(5979U);
    msg.setDestinationEntity(128U);
    msg.id.assign("IQCYNWBDXKOUWWJUELZQ");
    msg.feature_type = 109U;
    msg.rgb_red = 34U;
    msg.rgb_green = 100U;
    msg.rgb_blue = 40U;

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
    msg.setTimeStamp(0.392904166284);
    msg.setSource(4697U);
    msg.setSourceEntity(14U);
    msg.setDestination(13867U);
    msg.setDestinationEntity(128U);
    msg.lat = 0.997631768223;
    msg.lon = 0.12130220324;
    msg.alt = 0.256549633897;

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
    msg.setTimeStamp(0.304351693422);
    msg.setSource(26389U);
    msg.setSourceEntity(181U);
    msg.setDestination(54745U);
    msg.setDestinationEntity(83U);
    msg.lat = 0.724897326945;
    msg.lon = 0.146127296226;
    msg.alt = 0.955933504927;

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
    msg.setTimeStamp(0.276282690791);
    msg.setSource(16445U);
    msg.setSourceEntity(207U);
    msg.setDestination(41016U);
    msg.setDestinationEntity(242U);
    msg.lat = 0.0312765626905;
    msg.lon = 0.226073184585;
    msg.alt = 0.554474673871;

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
    msg.setTimeStamp(0.560649632281);
    msg.setSource(8219U);
    msg.setSourceEntity(139U);
    msg.setDestination(40360U);
    msg.setDestinationEntity(15U);
    msg.type = 135U;
    msg.id.assign("QOFDCLDMUBPFEFAJQBMOGMWEZZYXORSERNSBBIVIPVQHTKNYCSWSQILCKMVWMJRCPHJGFUSMJOAUBWYZDXUTIIVDIKKNNUHCGVXTPVNZMKJWTQHGNHMKHTMLZAEEUQIZTOSHCXZXOFMKSPDAPE");
    IMC::TeleoperationDone tmp_msg_0;
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
    msg.setTimeStamp(0.30046506338);
    msg.setSource(57456U);
    msg.setSourceEntity(56U);
    msg.setDestination(54211U);
    msg.setDestinationEntity(1U);
    msg.type = 174U;
    msg.id.assign("ESAMCIJBJCXKKXGGBHHTVGOZZGBCXAYZRNWRKBXAELTUIZVYUSRRFMQAVSOZBNJCJXFDLMOLQCOJWXXHFWOHZAVHNFSNRYHIWBDIHOVUASTUELIAYHONDTUCSUFNLCGAGPUOCMDHZQNQTQKUDVMUMRSEVFWINRAYEDQIJXDTIDRPHMUPADYWKBKFOPZPLPQEQTVIGGKWEZMMGGLFECXJRFRXMVKBCEYQDSLPKLWSYPVJYJPOWBN");
    IMC::RelativeHumidity tmp_msg_0;
    tmp_msg_0.value = 0.703356555369;
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
    msg.setTimeStamp(0.437150892393);
    msg.setSource(19361U);
    msg.setSourceEntity(188U);
    msg.setDestination(18204U);
    msg.setDestinationEntity(190U);
    msg.type = 105U;
    msg.id.assign("AJCRIPFJZQGEPKYPQDTGXTAAKURLXYQYQGEXFISSQWRGMKCYERBWKZOBRLAELEMNDJP");
    IMC::SoiWaypoint tmp_msg_0;
    tmp_msg_0.lat = 0.199556401707;
    tmp_msg_0.lon = 0.999009906616;
    tmp_msg_0.eta = 231109099U;
    tmp_msg_0.duration = 22609U;
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
    msg.setTimeStamp(0.65485389415);
    msg.setSource(44242U);
    msg.setSourceEntity(227U);
    msg.setDestination(22769U);
    msg.setDestinationEntity(52U);
    msg.id.assign("HRYCARCVUKJOOSPWAZWEWTNAFQELIKLVKVMTJKKURRANYENBGVKIIHXOAOEBCFSGP");
    msg.callsign.assign("JPLPBBAKAMZYNIRUBQGWGLKIWSLEZGPVQHCVDRGEMCEJJC");
    msg.name.assign("GBARMUUFWWKOPQXLWZFINRRXITLLPPKJJTXBEBIOHNMZKIANIFVFUJTVHWJSUYJYGITHZWFRODEQUSGUTYVHNYHKGRNKQOWCJKJDZDCIMMTBQKVOMYULOQMHYTPQRQJDOJWASESCLUVPDVDZAFAWBESFRMGGVXCGDZGIEEVGPGFPXSFMJAIDHAOHHMCKAAXRSBONNCYYZDMYL");
    msg.type_and_cargo = 243U;
    msg.a = 0.33759960025;
    msg.b = 0.559388022799;
    msg.c = 0.5179256051;
    msg.d = 0.166848881537;

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
    msg.setTimeStamp(0.610176340265);
    msg.setSource(14273U);
    msg.setSourceEntity(100U);
    msg.setDestination(27315U);
    msg.setDestinationEntity(170U);
    msg.id.assign("TYSAEREMTIXBRUNRFNQTZLBPBTPQE");
    msg.callsign.assign("UZATJZMPEDA");
    msg.name.assign("XFGTBVHKSRNVJZUVIJHQJSVRSEMOUONLFHTYUHZJJNRHKOAOIZEWYSWNDJUASFDLRMKIDVGMMYTDCROVAMDXBYBXZDLLBTXSQYUKNREPYUGVRICAKMWWWGGBGNFDKVQRPUPFUAEKXAPPTYINAKOCWNAEQZHIRDTBMYKXSOFFE");
    msg.type_and_cargo = 11U;
    msg.a = 0.686312910313;
    msg.b = 0.79654784099;
    msg.c = 0.658807862469;
    msg.d = 0.94065614452;

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
    msg.setTimeStamp(0.0792384860802);
    msg.setSource(43098U);
    msg.setSourceEntity(110U);
    msg.setDestination(46963U);
    msg.setDestinationEntity(67U);
    msg.id.assign("WBCEATVSFBKPKXYGQUJKRMLUGHGNHAHRQCXUWGRYPUIYPIVEALUBDZBUHQVYVSBSSDBJFVETOXRLIPXHQLOXMDJEBERNJSJEQBTWJHMZRAEKRTFDEYIIKDZSZNSAAIIKJLBGNNHNDWQCWFGHPLGJMFNTWEYUYMJMMCUPZOVMYRXVMFFP");
    msg.callsign.assign("IRNXUDOTGVNDPCFGNZVHXEXUWEJNNZDKUMHHMJVYSYVERXBVTACCUYEFCGQMVBEKIQAUKHEMYHF");
    msg.name.assign("ITFXXTSOPMULWSKKBAACHOPPBDTJYRPGCZUQAYXUTPQRZLXODGFQGYKJJFHSUMDHKOYFVOKBWVIIEKFZJNLSHKBXNJGZGHAEGGEQHEETCYYVDIGHWMAVLWCILUDRKTQVORDZSCSWIBSUYAVLEHBMNQMABWWREPQMZPDYDERIFTJLTBVENNUBOZAPOXHCMFVOHNUEQUVCILYXWCCIDUNYCSM");
    msg.type_and_cargo = 106U;
    msg.a = 0.27017717713;
    msg.b = 0.592202839972;
    msg.c = 0.587021110594;
    msg.d = 0.333756903016;

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
    msg.setTimeStamp(0.348785323751);
    msg.setSource(49995U);
    msg.setSourceEntity(138U);
    msg.setDestination(33317U);
    msg.setDestinationEntity(162U);
    msg.localname.assign("FPYXJHCXGHEYKKAZSMECRMYMUZITVVWNJQZAZBYTLSXTIGMOZDCKSZPMHVIGWRLHMPLNYLRCJHCJTXCHDXKQHRZWKNAJKFMTBZIJGUVHIYLYFIAXERDFAVCVUABIOLLBSGUNQTVGPTAPEXPDDGINKCZQPFFQJYCOSGLW");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("QQQJSLYJXXYLORCJYFTVBQJNPXAAYWMTESZZKGDQENZBQEWGGCANQKFMPDCWIXUHVFGBBINOQLKZVBKGMFRNNDIATFDSHXMNTVOBHLWIFYZXVILXULVTPUVBPHCDCVAGMTJPDFGWEZUIJKOXMZWCAFLEFECWSFYKIKZZTCTDRMEHOAJOURILEAQOLNEDBRMAYRREQVRGVDTPOUIGOHSYWPPIHKWOTSJRXXKCHLDAUM");
    tmp_msg_0.sys_type = 46U;
    tmp_msg_0.owner = 42313U;
    tmp_msg_0.lat = 0.104122509307;
    tmp_msg_0.lon = 0.488191880309;
    tmp_msg_0.height = 0.841745151215;
    tmp_msg_0.services.assign("JLKPTDODHRMPRQFEOHNKYXREGVMNTCCZLCVFIAAGHYJUOQHCJVWXXQKBWROASMWSAQQYAWJXZQSBNWVLFNPGHXELPWEFTNQAEDIDBMEFMYVFFESYUWJZLXXJXNRDXMKIULXQJJOFHAZLJOTAKFPUBMNCHZUCDUDRPHSELGOIECWIKAMMWBELDLPUYVGOGTGNPACHPRSQIOZYRSQBSNCGBNRVKG");
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
    msg.setTimeStamp(0.848150597254);
    msg.setSource(24203U);
    msg.setSourceEntity(232U);
    msg.setDestination(37436U);
    msg.setDestinationEntity(47U);
    msg.localname.assign("CAPMOVWSSAIPHOXVWGIYCBPPKEMMLLIRQJPZEEBEEDDWYJITXFXL");

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
    msg.setTimeStamp(0.0747508528223);
    msg.setSource(26079U);
    msg.setSourceEntity(48U);
    msg.setDestination(2951U);
    msg.setDestinationEntity(177U);
    msg.localname.assign("ZGDBFJOPESHTQSKSJESMNXYEISYDBHZYTQWXSIVICWPXFGQINPZRGXIJRBPRRKEMZGPEMNEHIOBYLMXCSWNUNOTMRIDSNJYAJCJURBWFCTGBDETHDTLLEPKHNVQFZCAPVG");

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
    msg.setTimeStamp(0.876132836376);
    msg.setSource(5269U);
    msg.setSourceEntity(10U);
    msg.setDestination(55421U);
    msg.setDestinationEntity(187U);
    msg.timeline.assign("LXVFTIZMUWZJUCADABVIGCKLQHXNHWTTQFPESYAAQXLRNGTAWYKTJFNHASMRKSDQKESVPYVZIVMVRLOLMXPDUWDZNRIXHBYXITTWERZORJYIVEBEPLBQVGMESGIALRXCXWWAPBGY");
    msg.predicate.assign("JIOUMIOKSLEBDHCQVOMGBOCGWMREXEKZDUSIMKCBAJFQWHZIUMRVDPDSDRZFSUSHFRWKXESITXNJFNVEWNXYAANAYNVYQCWGDRDYKKZPTISAWGBSHGRKNVTLMETTQTPTFAZJISLTUCGFIUXZZAKLXPHYG");
    msg.attributes.assign("SETCKFFGLTWSAVTWOAKBKLEHRKUMPQIZDJHXTEGLLQKKXZRASGIXYRVVRHBFTNFQQQJYLLCNVGVFYZWZWVABIYMUIBFGZSBMTSENMZBAQUVCPCUERMUCQZXFHJOPSPOQOJJMUIELHDWDSAYPDUIOZSOQKOCYPGNIEHHATCXIFDMMEAXGVIADRRGIOHNLYPDBJ");

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
    msg.setTimeStamp(0.303497053241);
    msg.setSource(41072U);
    msg.setSourceEntity(74U);
    msg.setDestination(51787U);
    msg.setDestinationEntity(67U);
    msg.timeline.assign("DRUMFKIGZKYHVYFTKCJNPGFDPPPBHHVWXKKLVRRQLAUGHVZBYWBXIANPEGULMRXEZFGNLLSCQQYKXXJKNIHQEHSTYQNJOJOMILICOMOQ");
    msg.predicate.assign("BYMRKGMKGHGTKKZOEEHMWLCWOFMQRLPCNIYCUVHORRRCKXBYFTUBJAJTDFIMUYKVWJJMQOYWOIYFVDUVSUBNPHZOWPBTFSNGXQCWDUIPAQGALOEXITNPQXALIAPDAZXZZRQHELDVKUIIUPXNLBKQPF");
    msg.attributes.assign("IYYNBPTLBFXVLATYNFEVETZNGJWSEENKAMSVZEHIYWJXDUXJOKJAVSOLQQCMZGDGLUSZSINUJFDWOQCE");

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
    msg.setTimeStamp(0.655812952533);
    msg.setSource(19264U);
    msg.setSourceEntity(217U);
    msg.setDestination(36628U);
    msg.setDestinationEntity(216U);
    msg.timeline.assign("EPPVDQIMXATHZQANSMAFOEGYWBDKYPZJAYGMWJYOWCCQXSOPYJJZLINCTUTVCFOROCBYVBSIENMPUTNWXFKBSUFGRQSUSCZTKHQYGZNDFDHMPGCERJFKDRICHMAZWPGIVXIWINZPGVNLRJIFQUVSVBZIOZERLICJBOMJOMKXRWDEQSJRLXVWELHXCDHOSZFMAVXBDTLBTBNQ");
    msg.predicate.assign("BBVWBLMCTWHMXJ");
    msg.attributes.assign("BAGHKMGZVJRSJJQFSDDTNVW");

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
    msg.setTimeStamp(0.544731434795);
    msg.setSource(2840U);
    msg.setSourceEntity(174U);
    msg.setDestination(17218U);
    msg.setDestinationEntity(196U);
    msg.command = 62U;
    msg.goal_id.assign("BNNTVICYHWOHKNGHRMNDBTYMSMESQBTSHZWJHKSRYVUOLTGTEUQYGIEFVPIUMICOACQVWYSXBDPDPWLNRJUFOHXZRBPGMGJAOYAEFCSZRAHDKMOSKINUXWDUNLHAXUAFJJUKDGEHOSKGXQCYEOZV");
    msg.goal_xml.assign("ZVDOJJITWERKDMQZIDODCSFVXZPVZXBHWBSGKGQIIJWHLKBL");

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
    msg.setTimeStamp(0.434763710975);
    msg.setSource(62192U);
    msg.setSourceEntity(1U);
    msg.setDestination(53288U);
    msg.setDestinationEntity(239U);
    msg.command = 133U;
    msg.goal_id.assign("SREBDPNMEGQMTJCGBHPIDQGXBKIRHJOPCLXAYKTJTBXVCOQVYPDKMIHHXFCVQKBVVDBYQQFQYWUHADUOJGTKFEQUFOFNNPJAPYIXDFSCUWYDRBFAZOSWKYIKYVSABSZTRNUILLZJNABSNFCXCEPZWUMOMKEGAGNQRFJSCQWCHEIMWPZXBXRGDMAONLTHEUTSSAJLZORUZAWYRVYJVLLZRXKHITIOFVMZEUMNLGRUPOXHLGJWWZGTVMKIDTD");
    msg.goal_xml.assign("CJBBHWPDAWYVKZRBNTNGOHCARZPUJLEWOAMAWVFTHVUOIEUASNSEQXJVIXYNDEQ");

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
    msg.setTimeStamp(0.778935523034);
    msg.setSource(28921U);
    msg.setSourceEntity(82U);
    msg.setDestination(65184U);
    msg.setDestinationEntity(240U);
    msg.command = 146U;
    msg.goal_id.assign("JPZRFZLSQNIKNBHKCZWFHLAJYWAUHOFXEPNVBGTHETNNDXSYMAULHIVUDKVCUAQEKKJXODKIGTOGIDWWTHMRYFDQXWXCVRTSTZXESDSBXPJWMGZIXSINGQTTAKZZQEFLYEDYMKMBJYMPHYRSGLHCGBPNRLJAADWCCZIBTOWLEFCPHJOFVHIQKLDOGFOWGEITXANROMAFVQELFZBYCSVSUIVOMRJQ");
    msg.goal_xml.assign("QNQTWSBNVGFGZEAWJLYBDHNFTCWETLV");

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
    msg.setTimeStamp(0.399692380213);
    msg.setSource(59872U);
    msg.setSourceEntity(85U);
    msg.setDestination(3703U);
    msg.setDestinationEntity(4U);
    msg.op = 215U;
    msg.goal_id.assign("KWAYYLAHPRNOGACNLRHWNHVOYISDIKYADVJTHGYKCDDTFPBLPKTWAWUVSCRGVMUSRMJTLQICZPSYJAJQLVZIXGMBESGWFSCUUMBMRZADHQHKEP");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("XSRZDOBPJTPEWEBYYGMVQUMSVATWEWUO");
    tmp_msg_0.predicate.assign("YDSSLCMTPOIINBMSDYNZMQVJMEOJ");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("FHKAUKFBYKLDWEIBDRBCWJMCNXULTIXOWZUGCCVHBMOQWCUXMKFNBRDELANYVMEDTSGDSNTRMNVPFOIRMJELNYQVIKJBGAOTJJDUYTGZZUXSFVLFTQSHAHFUYMJKSEBMGEBHHJOTVKGPPAILPNPQCDCCKGAWOCEXOYPE");
    tmp_tmp_msg_0_0.attr_type = 118U;
    tmp_tmp_msg_0_0.min.assign("YSOEOKKPJLQMLNFAXRRNSTRAMIEADFYVZZUBCYLXLWVIAQIPSRRRTJYGYNNLARWKTULKGQBJEWQYEOOOFDXVMASVQJDGKFJESDAPMTGEHERCAWICDXRNFSFIGTNFUWFSBJMNDPRLFWVJVBVKOYJODBUNIIKEZCCQPWPQPVWWZHZHDCBUXBNSAGETXEYIGHBCPUXQZZXLZPMGJCZUTHKMZ");
    tmp_tmp_msg_0_0.max.assign("RPWGPAIHQSKVFFOTZTOOECKWYZDRPEGLXJAYBGHDJMAJDOXYKGVRYBBKFJTGORSMDDLNBKLQQLZQHCVWANYWQDHMIGDEEDLUFUEZAIQKUTMUREYOPTHHWNFJVSVOJNUTFVFBRICMUZRGLHFKSWHXDCPSBXDZTBAXEGYCIXWJIM");
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
    msg.setTimeStamp(0.384880498344);
    msg.setSource(50985U);
    msg.setSourceEntity(209U);
    msg.setDestination(60941U);
    msg.setDestinationEntity(203U);
    msg.op = 226U;
    msg.goal_id.assign("HGOESXIJNUXXBFBLKPEWUBMULWVRIQVCYCPLYQVLRKJIIFNNNIKSEAFAXBPPECRQXDMQYBWKCEOELZHMTBIZXSOKIZVHTSSPLTBEJGYYYFODODGMLCASFRSUVVRRFAMTPGHGKPOPJNGMGTYXYQOABZKCWTZMHJXHSGLTDUNAQDCNOJIDUDNUWQERYVWUJIEXMNKTIRAPQQRJZWZLDGWTRHWHJFJFOKUBVFZQUXODMVCPC");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("UDGXJKYHXUXXUCRNMBZGGWWTYVXPQENHWPNYDGCYCARKMUMBEOKDQDILSYBSOWMIAEZJEMDREGLJFPXPKWFCXHCRQBADAVVAQUCISKVBTXDDGIWTFPOLSCEZZXOAPKINIMTIFYOMQZEONTSLOCFVSCQTFDGNOONMJYBLOKRDHTUPSEPLZUCJMLZRAQHWNAKFJHZMVJPBBQKJZHJQBIYFRRXEFZRSBSLVGYGKWYHTNNVPLVWU");
    tmp_msg_0.predicate.assign("VFVOKICYQBACQPPACGQJLLJXYOVCGWZKWLEFARJYHPHZXCSVOMLLISSOZEPDOQJDDNNATHHVVDMKSZMRLMQGRQEITBAHYXINPZZPPNCSRVRNBHEKOJDFKQZXWDRMLOAMGPUEWLHOIGPSAHFBSYHOFDJGWFRHBWZW");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("IRIVMBCMWGJANPKAFUNKBEWMOXDWWAIIYFPPKCDUKUVHUZRHXYYQTZBWHBCCOYRBSMGNLWOLDTATFJJNATERGDVBRSTNSMYZNVHTUEJAFOIKKGEQIJSXUCGUIFZMXKOWSDBJMHVNGVCNUSOTCTJXCYSOOILMKLTZEWFVYPYCLLPDCLYFBFSEYAHGEQQITKJGEUHROMALNHUJVZOEDQGHAZZDBXD");
    tmp_tmp_msg_0_0.attr_type = 108U;
    tmp_tmp_msg_0_0.min.assign("WXEMHBFROVOANXUNKGFDYPVGXJROIJSEZJTWLCWUQCOSHUIMYHOQWTTUECQHGKPBCAXPVEITDPCLFILBLKFRZHSGKBNPXMCPSNBONKUOYHYYDVWBMK");
    tmp_tmp_msg_0_0.max.assign("KUBJCKRZYQCDRPSOEBBODDOITHQWHLLFSRIXZYWFWUDJA");
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
    msg.setTimeStamp(0.286635949803);
    msg.setSource(38712U);
    msg.setSourceEntity(30U);
    msg.setDestination(63444U);
    msg.setDestinationEntity(24U);
    msg.op = 66U;
    msg.goal_id.assign("XMTDDTJJQXBJMEGXGPCOU");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("YFMOBNZDKQMWGTEWANPFFLRAVABOXFVTVBJREZVVGPTRPVVVHCZOEDTQXRVAXHLQZMKGAXSZFHXMRBTLFKZGZSDULEIRUKDNRLYKNWEBCNDXCDFEJRXPXIEMULSNYCWSTSCHBTKDYEGSQWHYGDRYNHLUMTYHBGNQNXFUOBCAMSCJYWPHOLSOPTQDFIYPQMDQBMGWKEOJJHLCIJINASTXZGIYJWOUUICBKGJMAIEFQV");
    tmp_msg_0.predicate.assign("GBAPMHTAWQNQEBIRIOMRECMNKXZXCLXMIFJFHHURCYSARZYUAJMZWAEPWZORUFQDPHNKNTTPKWKGFOSELAPJSXGUMZVVQYCGBGPXNDAMNVVLZNQLIDYHJGECDBRWNPDUTQSOXVEJZCUYOBKCBCTFIZFTJKLQSYIEXUVKCGETLTMLIARYEYJWHBWXFDGC");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("NDKTEFIJGPHOKZUSHSJHYOPMYULEROQYYVVBRCLXFGEMABSFCNXLPHDJAJOSNG");
    tmp_tmp_msg_0_0.attr_type = 219U;
    tmp_tmp_msg_0_0.min.assign("QJNVOQARBROZGUWMVUZWQXOQYZXREJILZACUPRINHGAKAHGAAWOTNWWTBCDBWYJEEXHCTDVFGFPKWNQICSLPRQSQUYSGDZSXVDOIXKUJDO");
    tmp_tmp_msg_0_0.max.assign("XZZJQGAMDGJHBVPJRZYKAYDLVICSIUHMFLKFAKTTHJVWPQQHOLQOUVKOEAXEIIRELPMAFNRBPGQNRNGS");
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
    msg.setTimeStamp(0.0605237259348);
    msg.setSource(60559U);
    msg.setSourceEntity(247U);
    msg.setDestination(53556U);
    msg.setDestinationEntity(85U);
    msg.name.assign("XTFIHFPRQDLTCIKWIDOBLDGIREOHIRLBVAAUBZJQFYKSSUASYKDONPEMEJGBUYPNJXDZTCMXWSFZPORNRGMAWYVETOSPMENDFTEMXYJKAZLJVNZVDGEPSOFBFQXBHLKUFXCRXMNUKNUHWVCATVCHSHBLSQTKDPGMIJOTLRW");
    msg.attr_type = 207U;
    msg.min.assign("MDYUWDBOUXHZZOIPWYWNTRXPKSGQAJMNEODSUDOLCPPSBAZNQBLHILAJEFUZHMSTOTVMSECZINHNCRXXUNAWGRUYDGUSOLBEOHXIAKXBCQZYIQODYGBQVGYLBRVWZEUJPJKGQOWUVAYCCYVPHKPNY");
    msg.max.assign("OPAAPUQVCAPQABUIETWRZZYFWMCKSCLTHHEIWNJNMSFFWCOJQGTOIPGEOYZQKLQJXLEHEWQIOIXMGYGDMMPFKAJLRTZDYVUNE");

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
    msg.setTimeStamp(0.608532366019);
    msg.setSource(22591U);
    msg.setSourceEntity(87U);
    msg.setDestination(13485U);
    msg.setDestinationEntity(84U);
    msg.name.assign("ZAICGMZGAAPSHFYKHYVFDXJOLTYDRWQ");
    msg.attr_type = 4U;
    msg.min.assign("PGOFLTIMCANJVBGHPANXRZVEJCNISVVANZZHFWBPTYYMVWSUOEJTKUGHMRWZWQFBXTRZSXDQEWEYATZJMKPYJHCFBRCKNWUATFBRYDWLAGLPPCPZRRGGVZBPMOSOIYFHLQLCUJIBWQVSHQEUHGKSSXIDGQUMDOWGHYNKUOLLMEQNKYXEKKCCPDORUFMDBANELNDFAITDXAZQSKJ");
    msg.max.assign("ETCAMEDEWPEDBSJCUKFNQXGVOZKDLVGGSUDPEWPKBFHOTAPMIOBQAWHCBKRTOSEBWYZZCVRZMXNYNNDZAPCQASDXLENRVMNCVQGYUKHUSQJTIBUUAFDVOQWKHSUKJMWQZFLRRXJMPXYFBBOTGVDMLSFHVFUKDYGFAJ");

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
    msg.setTimeStamp(0.594375969466);
    msg.setSource(55558U);
    msg.setSourceEntity(214U);
    msg.setDestination(19252U);
    msg.setDestinationEntity(46U);
    msg.name.assign("IKONQTYTBLQUXXJFEMFFVAEMCVHQINUVPLTABGDLLMNVCCRPLXCRSUSFOEQWKDYOTNDYKMFIGMOISDGDBGROJAYKOEPVHMMCBJTUWHZHAPXLSVRFDRKJXDBFOGSZXFPZDTTEIIUUMYMJEBTGKSZLYPABHXJBGWC");
    msg.attr_type = 99U;
    msg.min.assign("MKYCYJJZKJQKJZRJRCLHMTTXDIXTAITOOUTSCKYFFHZXCWSLZPBXOQWBKTNNCMHEDLTRPZNASDYWGSZYZUOEIHIGGEFCDRQVXDUVLORVVFPFGONZUQIHPMCENWBRAJHHNDVAKFOGURPQ");
    msg.max.assign("DHLJSDAAQHVXEGZFWXVHGBPCJNUOGXQYESVURRNIFFGOHOYEZBDAVYZCIFQADXOCTGRPSUAOYKBNCMKPBXSTXMUREAKIJSHXWTCEGVDSMNLIGEDPSCPKUZYZALTNOMUIFVNCTEUGVMDMYMXQWRWBQHLSNTOIBDZRVLW");

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
    msg.setTimeStamp(0.864276724742);
    msg.setSource(4541U);
    msg.setSourceEntity(48U);
    msg.setDestination(349U);
    msg.setDestinationEntity(95U);
    msg.timeline.assign("YEEBAGRHARUQPXOACNVHAKGZQASBRKMEKZBLFOVJBENZRAJXWXDXMZBSQMIBSZODXAYIWGQVCDDVVLYXNVECRZBSLEFBUMZWHPQUDCYDVKCZAHJQYXYWVJFFTABINLFMNFCFWTPTMIMTJGRNHREMDKOPWGHEOTTZJBLKRTRUJEWLHSAYVGDKDUICN");
    msg.predicate.assign("LPWOLLGOFQWHKKEQRECASLRIDDYCZJMNDOAUNCIZAYRFAHAWM");

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
    msg.setTimeStamp(0.355572900872);
    msg.setSource(56133U);
    msg.setSourceEntity(116U);
    msg.setDestination(42963U);
    msg.setDestinationEntity(102U);
    msg.timeline.assign("UJNSURSYTHRKBRWYJWTDHPVCRBVKREZPNOHONHOGQCOMNWQFENZGMOHJBWLEASYUQZTXIIYPBKYCQVTLABWZPXPJHGMTUWZEMAEQLIVGLWIEVOHVJLFEMFRSNVUKEVXWZNCSWZ");
    msg.predicate.assign("DCYMBIZNLXAIVIOKGREYLWWPANSDHNMXFNTSHNDEJBFZQXZNPXMRJPZKBQFMFTAJOROOSVPADBBGPXPYUVZGUBLYLGAFYEBARCCOXGIZWWLPWKHLJCOUQFWJWXEHZQUXIGDXQUTEPFORCDDGRYTETSJGHWHAVPBQELCMRCMGXMJUSWDYIQUBVNARKSLZSCRBLVIUWUCVQAYHMZZVJPKOTQOEEMKVIFFTDEJGIN");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("ICXVXMGXYFANSFLSFRHANEISEVTVCUGXPQTAAYBVYDNZVYQBJHZDPKIWCCRRJZFKRMWZLMUVNLWFFLUNRPLCMQKIDSUIPHPYBZTLMHHXOWGJWDZGBTWQMHURNWDJPBTLWHKYQOFPIVDXLEXTJYIOSGUKNTMQJOJERXRGKAJES");
    tmp_msg_0.attr_type = 250U;
    tmp_msg_0.min.assign("GHNKMPSUKRXFMFFQBFCBIPDXQLHSNRFRJZFOBJNZVCYUOLVGVQMHWTREXEMDEZGDOUJNRTZUNTEGYDSOVXPTKCXDAHFWLBGPKIVSJZVJMUAYCBAYADBMSDULIDWRKHBWHQERYZIHAHKBECAQOIUDWUCFNQITPSJXQITZKXCWGWKVOJJEIRETYFLJNCGTPAXIYLOLESVYWAPCNEXRLHQMSBUZGMRJMGLVYQSBHVZAPGKILCDZAXWTPWS");
    tmp_msg_0.max.assign("MUFUSDHCFGXLASESQDVCTGUBRTOJUXGLNZLNNYVNVTHAVQJAHDBEJEEAPQILZSNOMLEYDZNTOTYRCPAJVICMKZYYHGWCLITYSQPWFRHZJMSPPOQNRMWKMDRMJVBOTSWGGVHXUOJSWFWBBUNIMBUQJLKVYWIZRHGYPYWIXLZHIMEGTKDAZDOKXTFGVPAAJFTBICHDRCFBHCDEWIXR");
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
    msg.setTimeStamp(0.0621275138548);
    msg.setSource(17322U);
    msg.setSourceEntity(24U);
    msg.setDestination(15699U);
    msg.setDestinationEntity(240U);
    msg.timeline.assign("HTYWIUMTDCOUT");
    msg.predicate.assign("DOYMYLCPYJDXEPBRPZXULNIFCHIYBVXZMVCXFPILHRSSBGOWTVZKLXJYCAUARJRL");

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
    msg.setTimeStamp(0.0220228875102);
    msg.setSource(21535U);
    msg.setSourceEntity(23U);
    msg.setDestination(30555U);
    msg.setDestinationEntity(24U);
    msg.reactor.assign("YKZNXGEMLNAFLHLDHXOEUNBKWXYMHTIEJFQUBFSMRIZSSRRXWZARNAWCCIRGLBNJVFWCDKDIZALUSINIXPGWAJPWTPOQPPCZTJGEUIFJOBMJZHCVEGZXDSUUQLYKBDTFALDHDMPMTIBJRXTVORASOKAO");

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
    msg.setTimeStamp(0.888710194185);
    msg.setSource(8092U);
    msg.setSourceEntity(170U);
    msg.setDestination(1990U);
    msg.setDestinationEntity(94U);
    msg.reactor.assign("OAOCQWNTPFXVQDSYMQRFMWCYRJAPGYMCBNWQBUILWQNTVDKSRFALGUXMGHYLVQGMXRXVKYFWEJZWPJZLIFJEFMTZOVBDUMKVCBGMIBORUTXHLOPZNLBNHSCQKHNYIUBQWSINXGAZPFAWMOZXHXVSSUJRXELDZARNUQKGKIKWEEHCITIDBT");

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
    msg.setTimeStamp(0.150029628311);
    msg.setSource(52382U);
    msg.setSourceEntity(42U);
    msg.setDestination(9657U);
    msg.setDestinationEntity(206U);
    msg.reactor.assign("ICQLLACMLSHZEMFWLYTONSNDUAYRICQEONYV");

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
    msg.setTimeStamp(0.70747800436);
    msg.setSource(7468U);
    msg.setSourceEntity(137U);
    msg.setDestination(40459U);
    msg.setDestinationEntity(44U);
    msg.topic.assign("DUIPVTSTAMOLRKWDNPJVTYXLAIFEUXDMOQEQWXNIYLGRQXMOWFRBAOQCRBPKFDIOZJOEDSOYOQAKYICRNVQWMZIJLGBWVGACTJHKQXZSMZYJWYDEGBHRHKQBNTQUUVKFXPYWUNO");
    msg.data.assign("OHYYFUVCCFLNMAPHTSIVJMLOUNFPEJBNTGIWZATZOPUAMLBGQLCYRSPAFGYTRRXOVUKCJFIO");

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
    msg.setTimeStamp(0.570719785017);
    msg.setSource(42848U);
    msg.setSourceEntity(90U);
    msg.setDestination(11952U);
    msg.setDestinationEntity(119U);
    msg.topic.assign("NIWHIZABYNAWHBSSEDVIJIZDDIVBTOZSIHSZUBOZAYIYOAFVSIIHGUXVIEKPAXRKPETFSJHEYZRFPAJJMGL");
    msg.data.assign("DURSTWBFYBAQPRGVKPOLALKUDUOANWQLNYJPEGRGAWQZSEKBZQJGTBUWMBXTQBHXOZZOTEAWZPGNLRGZZTYSICIHCMJPIAIDCFHDXUFJPLITJMHVRDWFBKHLDGRKVIXMESPKZSITQCNIMTSXSCH");

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
    msg.setTimeStamp(0.082039836031);
    msg.setSource(3336U);
    msg.setSourceEntity(157U);
    msg.setDestination(18382U);
    msg.setDestinationEntity(62U);
    msg.topic.assign("ZPAIHCXHRZAMXGTMCVTUAYCUNCSGQTUJSQYEOBLTFGXZDCVECSQLLOARGUEQWZBNKWRZQXLYUZLLIBOIQQDRXD");
    msg.data.assign("AIKNFYJKNMQBSBQMERPMLRBSPNRWXSCAKUDWYWKHZRGUYOAOYAKVIIEECQWEOEEOJZBSCJFQIXYQMFLKCNRNWGFNQZTGTZVLBDAROMDMRADVLVLTZPAYSAANCGZRWBVXUHNYSODCPAHUJXGPVDDKZCLXITCKWJGGHLWUBHLIMLVOTMKDNTIWQYHPZQLOXVYPTXWPGSJCKNHOUXDEIEETTVGFEFXPTMJJORVFUXJFG");

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
    msg.setTimeStamp(0.686248026748);
    msg.setSource(3189U);
    msg.setSourceEntity(129U);
    msg.setDestination(30265U);
    msg.setDestinationEntity(193U);
    msg.frameid = 123U;
    const char tmp_msg_0[] = {-28, -111, -78, -59, 76, 57, -79, 94, 68, 123, 43, -105, 30, 14, -59, -33, 109, -63, -77, -121, 16, -3, 68, 48, 7, -110, 6, -37, 109, -20, -69, 121, 105, -31, 62, -33, 69, -78, -22, 5, -68, 82, -70, -71, 8, -74, -51, -77, 13, 103, 86, -73, 93, 27, -14, -72, -61, -102, -87, -96, 56, -78, 7, 119, 52, -40, -68, -86, -98, -32, -13, 69, -79, -56, -21, 120, -32, 47, 86, -118, 61, 61, -31, -112, 94, -92, -93, -7, 75, 107, 111, 62, -105, 19, -30, -81, -93, -74, 10, -113, 107, 76, -78, -56, 126, -79, 98, 44, 16, -126, 43, -21, 74, -85, 46, 125, 97, 57, 1, -53, -124, 37, 25, -81, -101, 99, 63, 15, 31, -103, 48, -1, 117, -127, 52, -15, 44, -12, 29, -5, -124, -82, 38, -58, 34, 56, 27, -69, 12, -63, -40, -17, 9, -72, -57, -43, 70, 60, -114, -123, 64, -49, 11, -54, 87, -16, -18, -69, 43, 111, 30, 35, 66, 109, 63, 47, 45, 0, 14, 75, 9, 116, 101, 81, -26, 59, -84, 15, -1, 50, 59, -93, -40, 93, 64, 17, 53, 91, -68, 121, 42, 117, -31, 41, -126, -53, -70, -27, -89, -125};
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
    msg.setTimeStamp(0.757180147158);
    msg.setSource(17191U);
    msg.setSourceEntity(67U);
    msg.setDestination(18283U);
    msg.setDestinationEntity(65U);
    msg.frameid = 14U;
    const char tmp_msg_0[] = {-127, -51, -82, -17, -82, 74, 118, -62, 126, -87, 80, -37, 7, 41, -101, -79, -106, -77, -111, -95, -65, -96, 79, -118, 110, -124, -118, -53, -20, -22, -14, 88, -53, 63, 116, 70, 0, -125, 25, 82, 2, 49, -119, 83, 107, -69, -95, 107, 11};
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
    msg.setTimeStamp(0.290762885519);
    msg.setSource(10012U);
    msg.setSourceEntity(107U);
    msg.setDestination(48821U);
    msg.setDestinationEntity(117U);
    msg.frameid = 61U;
    const char tmp_msg_0[] = {49, 20, -59, 14, 74, -34, 47, -27, 84, -113, -98, -52, -21, -23, 73, -17, 90, 66, 98, -126, 10, -54, -97, 92, -124, -25, -103, 18};
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
    msg.setTimeStamp(0.631639304304);
    msg.setSource(6091U);
    msg.setSourceEntity(53U);
    msg.setDestination(34849U);
    msg.setDestinationEntity(75U);
    msg.fps = 71U;
    msg.quality = 83U;
    msg.reps = 42U;
    msg.tsize = 151U;

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
    msg.setTimeStamp(0.477006836294);
    msg.setSource(24633U);
    msg.setSourceEntity(9U);
    msg.setDestination(62907U);
    msg.setDestinationEntity(129U);
    msg.fps = 240U;
    msg.quality = 144U;
    msg.reps = 55U;
    msg.tsize = 178U;

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
    msg.setTimeStamp(0.18896797899);
    msg.setSource(43473U);
    msg.setSourceEntity(164U);
    msg.setDestination(13298U);
    msg.setDestinationEntity(93U);
    msg.fps = 41U;
    msg.quality = 239U;
    msg.reps = 15U;
    msg.tsize = 206U;

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
    msg.setTimeStamp(0.679385509915);
    msg.setSource(31146U);
    msg.setSourceEntity(122U);
    msg.setDestination(15501U);
    msg.setDestinationEntity(137U);
    msg.lat = 0.845206154253;
    msg.lon = 0.401900616659;
    msg.depth = 125U;
    msg.speed = 0.0135759378953;
    msg.psi = 0.97900984059;

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
    msg.setTimeStamp(0.629726368171);
    msg.setSource(9930U);
    msg.setSourceEntity(187U);
    msg.setDestination(58035U);
    msg.setDestinationEntity(68U);
    msg.lat = 0.735999574851;
    msg.lon = 0.346262809172;
    msg.depth = 188U;
    msg.speed = 0.389899826277;
    msg.psi = 0.12578413719;

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
    msg.setTimeStamp(0.314271373847);
    msg.setSource(33602U);
    msg.setSourceEntity(105U);
    msg.setDestination(58397U);
    msg.setDestinationEntity(120U);
    msg.lat = 0.919755077083;
    msg.lon = 0.793729514405;
    msg.depth = 223U;
    msg.speed = 0.0695787663574;
    msg.psi = 0.462207971372;

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
    msg.setTimeStamp(0.106751067423);
    msg.setSource(43761U);
    msg.setSourceEntity(70U);
    msg.setDestination(40366U);
    msg.setDestinationEntity(116U);
    msg.label.assign("CIXEOVDDLP");
    msg.lat = 0.299298085089;
    msg.lon = 0.149522208049;
    msg.z = 0.107514214905;
    msg.z_units = 197U;
    msg.cog = 0.0306337610479;
    msg.sog = 0.297831823657;

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
    msg.setTimeStamp(0.154478917756);
    msg.setSource(19418U);
    msg.setSourceEntity(188U);
    msg.setDestination(30361U);
    msg.setDestinationEntity(6U);
    msg.label.assign("CVLWZMZWWPICDBLZLHQBQTEBDSXPGUNJGEWEGVVKWNKHZTTEKVXCHLAQQNSWKVHSTLMSFTQYNNAEIULWOFIYRMHOIRYKPUNFRPQMBHIIZXLPFEHJABCEDYBTMCWVTXXEXMGCJHAROFMUCJKIGSGXTSYAVKBRUDGJ");
    msg.lat = 0.555102846576;
    msg.lon = 0.366220872983;
    msg.z = 0.871206081961;
    msg.z_units = 204U;
    msg.cog = 0.763102064068;
    msg.sog = 0.370521326009;

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
    msg.setTimeStamp(0.932942428491);
    msg.setSource(42625U);
    msg.setSourceEntity(81U);
    msg.setDestination(33646U);
    msg.setDestinationEntity(16U);
    msg.label.assign("MWYZXQILXMTHNIBKPENAEPMHIEHCVKQVGMMLAFRBLVZOTZNWQJNVPHCOPQKURLNGRFTHHGIU");
    msg.lat = 0.0376159054133;
    msg.lon = 0.201412483181;
    msg.z = 0.766431675023;
    msg.z_units = 169U;
    msg.cog = 0.603747616672;
    msg.sog = 0.534467810977;

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
    msg.setTimeStamp(0.899308448182);
    msg.setSource(23086U);
    msg.setSourceEntity(245U);
    msg.setDestination(16044U);
    msg.setDestinationEntity(175U);
    msg.name.assign("TXNGUFMZYRQZAFBYIFBSHLBEXDBWQHHDSTLHDKZEUUHZJQILNGWSAOCGIFQYLHJYXDJRKNMKHPZAJJBFSKPRINSVJYXOFIOTDIIMAVLDD");
    msg.value.assign("MAJEVSBLTKAYVLOLBEQEIGDMSWILQARBEUQRRPBZKUSJYSXXULYZQICDVXUHOKPNWVDJSZTTVGTODPYEWNDQGXZATDEYXFNFBJFFBP");

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
    msg.setTimeStamp(0.413681739433);
    msg.setSource(10697U);
    msg.setSourceEntity(209U);
    msg.setDestination(14683U);
    msg.setDestinationEntity(100U);
    msg.name.assign("YIPISRHPRWQKEWNCMQHXGHFYSOQLFRFDAFZXJNLPNYVBZAQNZBHRDIEKALGJXMJSTBBNVOVBFSRJUJIUWQEMFTEGUCWYDOFPTLBAZLRPXQOKAVGSKNHZILNDFZOLTBKAYDQNXXCLDWWOCODCRAJQWTUFVWVUIVPMWEKBXUGTQEHMPDRHIGWZOMTIYKLJSUSYMCHUTIPCSNDJSXPVUPGZVZYGCYBAQCAMAHDBFIJSXKEEYT");
    msg.value.assign("FKOVUDXKZDWQFZRLAIUJFBVUZKWVARCXZLLKVVNHUYGQAOPRVKEGOYNYEDKJJBNMSMFTCJOCXLBHGZKHXWZEOYWGBQTPXBGLNJFBAHALRJCCPTQTPASWBYCWXMUNMYIPPMKVFHDIRYLIMYQNDWRRDFIPIEKQZVFJPEQLDHCXSTG");

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
    msg.setTimeStamp(0.488351080615);
    msg.setSource(983U);
    msg.setSourceEntity(92U);
    msg.setDestination(49852U);
    msg.setDestinationEntity(252U);
    msg.name.assign("ETDADRIIXRXDJUWZBOBVIHBLBCUESVOIDZWKFMLEKTABKGMQWJNNAHZSRDNQLSRKIAYUZCNQCIHDJMCJGZKPGSJLOEQGXHXFTPQVTMVYWYNONEVJRZUJHCUSCMYUXKHVYPJCEBTDFTFWWRLQPTOXZNJEOBCQWZSQBYWJGTPMVXNGDTGYUVKOPWHHEOMKBDRPIINFUSSOPWCRFAAXHIAOQHLPLKYZLZDTBARY");
    msg.value.assign("MIYSPYADKBBHEFYDXJG");

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
    msg.setTimeStamp(0.0876705247658);
    msg.setSource(6886U);
    msg.setSourceEntity(34U);
    msg.setDestination(4783U);
    msg.setDestinationEntity(8U);
    msg.name.assign("NXVFZPUXAMLUDMJADIARJUVNVTUTEMSYSNEVSRBRUGJKTEXZXLWAOGCYJUQDQOZHFYUGBSPLZMDKKBLBNCTYRSORTPIPIWJNAMZZMHETXUGPVGGSVAJRCNHFODYPLSSJWKGTEUQVNBOHDPCQFMQXIQYRMFIKIWSLANRUWCDERIALBHIJFGZVAOCXRKJYQPXQFZEOXCHBWGHKFITKBAWPTQ");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("XGCCPXNTNFPDVTDGQZNXXZCPFZFKJJDS");
    tmp_msg_0.value.assign("AELDLVJYUFCCAFLMCNIJRYZXFHUWWALZSQDAHGJVOIWDPBJKSIOMZNZCFBPRHTDRWVBESVOYIFVPLKBMTLNIBQDQXYROHHHTLAWXGWFYLMOXVKJSXEDRIUGAUSDPZQOUBRZLQCMNMZWXFJPCQAMFONUXKKBCARJYKNDQHPJZRUVAFBPKLOOPRBITSTKQZVEHUUSBVMTGEEIIGWGPYSUYVMHQCMWEGTDIGGONGRXTSPJHNASQWJY");
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
    msg.setTimeStamp(0.933618582171);
    msg.setSource(56170U);
    msg.setSourceEntity(16U);
    msg.setDestination(1353U);
    msg.setDestinationEntity(59U);
    msg.name.assign("ULFWTITRSTNKTDVIOBSDWYJSXFANWGOSDNVERXZNATEGCJCKHCOHQQMLMRZGCICTLAPLOCHWMPWOXZHIMUREHFJFMJVZUYOJSQFBDYXCRAEHOTSBYWPEYJPTMXBDCXINPQAOYUVLSZOVBDWJDBVEDFXRBVGZNUWQNWZNSUHAUHAJKVQYFIEUDQCIMMLGJFVKKGU");

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
    msg.setTimeStamp(0.793176139391);
    msg.setSource(32574U);
    msg.setSourceEntity(30U);
    msg.setDestination(27505U);
    msg.setDestinationEntity(151U);
    msg.name.assign("CTYLVMOZWPYMWZTPALGEZDYDHYOJJZKLZAHPQPGGRJLMWRADWVGVTSYTACVNDNSFSBNRIXLXPLXLEEZKYEKTTMGQXGXLKSBKH");

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
    msg.setTimeStamp(0.281715470848);
    msg.setSource(3177U);
    msg.setSourceEntity(34U);
    msg.setDestination(19278U);
    msg.setDestinationEntity(68U);
    msg.name.assign("BYZGNMJYNEGRLUYUNQ");
    msg.visibility.assign("USZRFKCWZLTLQNYTBHOMQSKHSQYIQFLHZCWFIFFEYADORYYBIZKGGUXJPLREMOWSPEOXVOJKRDIMGIXXIMUQZTONXDSQUVKKELEJHBNBVIBDRZZFRBATPUKYRAXLTHPNDVUZXQCNTUIYNLQDFL");
    msg.scope.assign("ENMWALGQSGWLLFOUPOKCGWUWZUMHLYXTBWEVIUQURGAAYZZTIRMGPODXRKWMLCFJILYBUQEVACDQAAKBEDUMFNLNFAVKVGHEMLSBQSSPMAYXBJSPWKXHMJCUOYDHIVYSDFCITJQDKJJDZQJKCBKGYTQAVMZRFETPIHRZUPOYNIHXSM");

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
    msg.setTimeStamp(0.905252031805);
    msg.setSource(14554U);
    msg.setSourceEntity(93U);
    msg.setDestination(17269U);
    msg.setDestinationEntity(174U);
    msg.name.assign("MVDFDVRTKOSOXGHJXNRKPVCKLKSMBSMDJAUGWZWWVHERUQNFFCMBINGMPYQSZXPUDOIHHPZRRESLDHWGPJXCQHRFVZXIWAYUBDEXLFCSMTECGWGPYASQHITFJLWXABOEQPERYVOUCCYQFNBTZLNYKVALSAORJBUEGIJENQZDOETWAFYIBKEVG");
    msg.visibility.assign("GPQLILSYIOYBRFQUMJQVWVSSEHZOGDHKKCPNCDFOETFRMYCGHRMKDTXIYIBVHLSDLQPUHJVYEYJDDQSMYWGCKKMIEHWDKFRSVOUFXRQANPWTCNEOPBWMIDNZLOUXZMNKEBPJKDVGUQZCYZULXEHRAPMG");
    msg.scope.assign("GPZBGHLKKKUHWMWWIRYTMYVPYDMSFIACLZTXGSSJRWUENVUSKFGUXCXSEEZYOEHQTMJVXLTCZXIFCSCBJRUSPTEHDKBYOAIMFPWOFNVSNLJDNLQPLNMCJAHAWGTDDOQRYJGCBFTUDKGQBXRGQIMNWBHPJRMDRUWNVZFKALSUQCRRQTXONZDEKIIKBENGOFYRXHFJDBOATPHAIVCYVDMUYUVWKJOPZHLJLNAZHACFQZGEVIIOAWBQMQTXEZEXBL");

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
    msg.setTimeStamp(0.109988796845);
    msg.setSource(46499U);
    msg.setSourceEntity(33U);
    msg.setDestination(28074U);
    msg.setDestinationEntity(188U);
    msg.name.assign("JAGQLPOAAGYLDYNIIMLYGQNDJFBXFDXZECAAIRTPHRHYLPBKWDYOBXMIWMHZIJLCOFWUUYCDKHUQXECEGPIDHFXHJZXQYEOCPZNRKCZNRWLOURWMGGDAFLVGZWJUPKOWVUIVEIJMSVEGJRNICVTOFRIURKZYFVLMUYAXNVE");
    msg.visibility.assign("MBAJFEATDAUWD");
    msg.scope.assign("FBWAHCVEBXMHWZUYYBJXOVLPHPCFHFODGWIVUNOSFTEXQGQHNWIRXDYPOFHFSCITQPSDJPQQOBMOEWQKJLICXWMVYPTKGLMZZBAPTSNNDAZRGBOCRKLIBJAETOEDFUNGVZURMECSZTEXJNVWLVJGZNSLIGEYTJKVXUGUHDFWTEC");

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
    msg.setTimeStamp(0.618913265523);
    msg.setSource(58511U);
    msg.setSourceEntity(118U);
    msg.setDestination(49737U);
    msg.setDestinationEntity(138U);
    msg.name.assign("TDSKEMOFQGXOWZCFCSWLPXRTCYIEOMLOHAILWNGYZTPRXPUZS");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("JTFAXGXZUHCCNAMFPJSBYIBMYIEUAIESHRIWBZELVIOWLVQGDZKJCQWWOXHILDNSICCJKAPRTKUGWHZQYQWBYVVCSXGFCBHAJLQFSNLTWTTTGGJUQYRGEEEHLLXOGRRENGXKUYZTAKRKWKYVYTVMDAEXVOFUBOYKRODQFJMLPOSZAAOLPANZBHDSMDPBQGIZNWSUIMIJETCUPJNUXNXPUPDCXNDKHJQFBBLFROSEZCRVQPMW");
    tmp_msg_0.value.assign("BURYKOMHHJISFOVMXEZNXTFYAPCKIJQITVSTSMLTHLK");
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
    msg.setTimeStamp(0.177140254559);
    msg.setSource(29013U);
    msg.setSourceEntity(237U);
    msg.setDestination(8317U);
    msg.setDestinationEntity(199U);
    msg.name.assign("YWYTSVPRYKMMBFXQBASHNMSTFOLVGHJAPCGKEKSBIIHVBTLCQWFAWKXSAOHSBHOGEDLCDDJTGUPTFSHREKXYZZTIWYCMSGVRWIOKBXZYNWARJMWUZQPUTWFFKHNAOQYMZUIRFAOELUISGNVLCXNDQZWVGUBLUNEJ");

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
    msg.setTimeStamp(0.568125744759);
    msg.setSource(25055U);
    msg.setSourceEntity(3U);
    msg.setDestination(17350U);
    msg.setDestinationEntity(163U);
    msg.name.assign("URSKTKAQOHOOFEGGDLQDUVAEGJTQYFZBXSKNGCLPZGIPUUWNDPISLJMXADFTTEWRWUHAQQQYQIKBHF");

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
    msg.setTimeStamp(0.170137026591);
    msg.setSource(4850U);
    msg.setSourceEntity(205U);
    msg.setDestination(12072U);
    msg.setDestinationEntity(112U);
    msg.name.assign("LBJZTZWHYLMEOOASIXABKSIGAXVFXMFFKWGVDJBPFPVQEZRLDRFZEOALEWFCBPYXFHSJGDUZRQURGSRZTBOCIMCNJGIPJNYEKVBNISTQBQYILBKVXC");

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
    msg.setTimeStamp(0.172181082285);
    msg.setSource(34483U);
    msg.setSourceEntity(209U);
    msg.setDestination(28529U);
    msg.setDestinationEntity(70U);
    msg.name.assign("CYQNISOBSQPJJMKKIABIKPMTJOEHHCOMPEMHLVJCPZTZNDYVMVJNURBYUFUVKDYNKCVNEODCCGYZTGXVQYGDRYSXWAZPOESJTZBTCSBWSFQQFEKTXYPIRDRMDZSREWGWDGVAOUIGYHTSCLHXNUAFUGUOSRLHQAUABGPPKIENKGKAFUONHZXRBDJRFRYQFAFLH");

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
    msg.setTimeStamp(0.889160337271);
    msg.setSource(10972U);
    msg.setSourceEntity(163U);
    msg.setDestination(25172U);
    msg.setDestinationEntity(25U);
    msg.name.assign("KAZZVLOFJZYHFLZPBTSLUGBFRSHYKWEGRWVRZSGNGOGSVYRIATVXXWRMEEFDROCPBUKPLXXAPRRUBMLZKQDSEROPDDQCGSXMOKNQHCJXNFFWAATEVASXEOUZJBHEBKWMDDAIFBTQHELXLGHPJXHHWCDQDJUII");

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
    msg.setTimeStamp(0.330872617322);
    msg.setSource(51290U);
    msg.setSourceEntity(242U);
    msg.setDestination(45028U);
    msg.setDestinationEntity(52U);
    msg.timeout = 3732012443U;

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
    msg.setTimeStamp(0.771719612886);
    msg.setSource(37921U);
    msg.setSourceEntity(44U);
    msg.setDestination(39073U);
    msg.setDestinationEntity(70U);
    msg.timeout = 718168113U;

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
    msg.setTimeStamp(0.396819809129);
    msg.setSource(48439U);
    msg.setSourceEntity(142U);
    msg.setDestination(59955U);
    msg.setDestinationEntity(3U);
    msg.timeout = 2735720068U;

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
    msg.setTimeStamp(0.219745632646);
    msg.setSource(20820U);
    msg.setSourceEntity(63U);
    msg.setDestination(22303U);
    msg.setDestinationEntity(91U);
    msg.sessid = 2611247841U;

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
    msg.setTimeStamp(0.893436915322);
    msg.setSource(38313U);
    msg.setSourceEntity(158U);
    msg.setDestination(50761U);
    msg.setDestinationEntity(22U);
    msg.sessid = 3462512047U;

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
    msg.setTimeStamp(0.761457910555);
    msg.setSource(22518U);
    msg.setSourceEntity(18U);
    msg.setDestination(43355U);
    msg.setDestinationEntity(16U);
    msg.sessid = 3831057713U;

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
    msg.setTimeStamp(0.455549830433);
    msg.setSource(34726U);
    msg.setSourceEntity(132U);
    msg.setDestination(62666U);
    msg.setDestinationEntity(35U);
    msg.sessid = 987054887U;
    msg.messages.assign("UMHYOJKJWWCHIDRFRGZNUJJQVXCPLYJDFECDLPWXBPWYZOZYUTZBTBQATVTZXQKWMDKHGGMRLHAPLEJMBBEOZLORVVEDUYPNG");

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
    msg.setTimeStamp(0.720966037935);
    msg.setSource(1745U);
    msg.setSourceEntity(230U);
    msg.setDestination(40918U);
    msg.setDestinationEntity(52U);
    msg.sessid = 3546525354U;
    msg.messages.assign("JHBVOZOHJMRHOTGQLARTIUZZGHPXMCLGDAZGKUYKDRAWMWCKWRVXPUUYOWQAHTBGWNAVZLSNWROMHFLCJILENVODVNKSYTURQLCNLNQRBDEJUTDKYIYMSMHJBZEMEYQKKUPJHYIQEFUYHWLPFDAJGANSZBEBXJFOGRMYCIGTLXMVZQSOXZRZLFMPDECWFUY");

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
    msg.setTimeStamp(0.0475648307295);
    msg.setSource(41966U);
    msg.setSourceEntity(132U);
    msg.setDestination(8395U);
    msg.setDestinationEntity(8U);
    msg.sessid = 742557126U;
    msg.messages.assign("NEWIVHBASWSIWGDEDNDNZIWAZQXPLJRYRSFQAZDEKTFFGOWHXFIJQGFZKSJTOZAMRPBUVLXYIWJOKUYTNUEDSXKNDAVZTKSRIXTHLZXPNGMKCOSEJPBWBGIQLTOKVIMLMCKQOXYMAPLQILGDDBRQTXPHRWJACEHMQOZGRYZME");

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
    msg.setTimeStamp(0.909181661345);
    msg.setSource(60667U);
    msg.setSourceEntity(226U);
    msg.setDestination(49712U);
    msg.setDestinationEntity(204U);
    msg.sessid = 1216631063U;

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
    msg.setTimeStamp(0.483755313113);
    msg.setSource(49123U);
    msg.setSourceEntity(205U);
    msg.setDestination(48586U);
    msg.setDestinationEntity(152U);
    msg.sessid = 1268860808U;

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
    msg.setTimeStamp(0.387612794529);
    msg.setSource(36480U);
    msg.setSourceEntity(210U);
    msg.setDestination(40600U);
    msg.setDestinationEntity(33U);
    msg.sessid = 2212590711U;

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
    msg.setTimeStamp(0.528350504119);
    msg.setSource(48878U);
    msg.setSourceEntity(182U);
    msg.setDestination(56094U);
    msg.setDestinationEntity(113U);
    msg.sessid = 2934049189U;
    msg.status = 123U;

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
    msg.setTimeStamp(0.888480516283);
    msg.setSource(55029U);
    msg.setSourceEntity(150U);
    msg.setDestination(58195U);
    msg.setDestinationEntity(140U);
    msg.sessid = 4236324966U;
    msg.status = 163U;

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
    msg.setTimeStamp(0.327130810787);
    msg.setSource(17729U);
    msg.setSourceEntity(136U);
    msg.setDestination(64947U);
    msg.setDestinationEntity(136U);
    msg.sessid = 1366055726U;
    msg.status = 237U;

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
    msg.setTimeStamp(0.775351300171);
    msg.setSource(25295U);
    msg.setSourceEntity(78U);
    msg.setDestination(56010U);
    msg.setDestinationEntity(135U);
    msg.name.assign("TGPMZOLNFHZBQCKPCBKLDKQXMMLTFNSPIEIMEGNRZGXVVYSYSZZUHRFHUVDQONOJVAIXRYPOADXXLPYLCFCLCWPLRPGSNDTFKRTIGJALHXAJJZYWQIBQSOGAJCDAQDUGWEFZVBMIAVRCWRHONBGUZAKFYBWRCOJCINTYNVKUPXPFUXMEMMQREOVXEBDGKPKJEYTLUFJDLWXIUIQMAYJOAWYBZHHHNSHNBCTRWGVTODDZSVKSQSEHEJUTKIBTW");

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
    msg.setTimeStamp(0.752810683307);
    msg.setSource(11400U);
    msg.setSourceEntity(13U);
    msg.setDestination(6037U);
    msg.setDestinationEntity(39U);
    msg.name.assign("WPRAIXYKIWCROPPVLCXKETAVHYTJKFTAIWVMW");

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
    msg.setTimeStamp(0.130210329837);
    msg.setSource(37188U);
    msg.setSourceEntity(152U);
    msg.setDestination(55725U);
    msg.setDestinationEntity(223U);
    msg.name.assign("LADUMVLJJBXXOXGKCPBNBIUHQLSBAEODLRKXJZGMMFRKVSQSMEIXKVPWYUOGBMHRLIRAUZGNUTKWECCJOVIQCSVVDQEOHQZJYEZQRYQGUMSMZFEIDZHXKOSFJFATKHIYTPBKZCTZNZDAKDDTZYPGDCYYTQTQOGAPFMDHLYSOFPNWXAXLWQCYFWMRCVNTNRPXRBAUYJSNJTUVBCHWISVLLRERBHJBPGNAWWCMTGPPDJWFGHO");

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
    msg.setTimeStamp(0.675588953358);
    msg.setSource(24539U);
    msg.setSourceEntity(230U);
    msg.setDestination(52174U);
    msg.setDestinationEntity(14U);
    msg.name.assign("UFJRRLCCQWLHGHDWUDJYKSOHQOQNDFIPERKCXXNUVASEOZPPJNJISO");

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
    msg.setTimeStamp(0.270122011549);
    msg.setSource(7200U);
    msg.setSourceEntity(220U);
    msg.setDestination(63064U);
    msg.setDestinationEntity(8U);
    msg.name.assign("QEQROPSOTHFCQDGBZXQEESVWTRVVIXXAGNSCYMWJUCBAUDWSVLBFRYTFZWEERUQLAWJKKIPVLCDZIFOKHPUXZVITHBSGSWDBTGCDOMMVTHIGYUZOZFJVONLOPOALAMUIFRQHMMTDIDUWM");

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
    msg.setTimeStamp(0.235753647315);
    msg.setSource(28954U);
    msg.setSourceEntity(152U);
    msg.setDestination(49704U);
    msg.setDestinationEntity(128U);
    msg.name.assign("JYGJWYRQMSFSBJUKKQFZBEFLPWGICGPINVBIDNTWXAIVOZPZURFTFUXDJHRWYMKDJHBCIVJJNHLUYEI");

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
    msg.setTimeStamp(0.0656780173999);
    msg.setSource(40292U);
    msg.setSourceEntity(225U);
    msg.setDestination(52330U);
    msg.setDestinationEntity(84U);
    msg.type = 4U;
    msg.error.assign("MFRDQRMQYZPJHLFRDMOKBWSUEDYKLOLJPGAOVCUZPYIYDIGTVREAILNPIUFWSUUFXGCDKUJDOPNUOHX");

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
    msg.setTimeStamp(0.0710403730146);
    msg.setSource(12046U);
    msg.setSourceEntity(161U);
    msg.setDestination(22180U);
    msg.setDestinationEntity(56U);
    msg.type = 241U;
    msg.error.assign("IQNHPOVLOHDZIDCTBZMHRQZBWVOMWOVUPEFCYYCGCWQRDWJVKAOAFGINSXYLFIBBXNRZWEQSFKSDRLZWNEWIGEFNKIBSDJGTYDTWJTPTLJMULBECZVWJSJUEHNBXVRTOOLZQACJPTUFKAENKSLCVHMHKYNUMMFFQTYGNYIJQETQCXAQARJX");

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
    msg.setTimeStamp(0.549828242937);
    msg.setSource(10156U);
    msg.setSourceEntity(70U);
    msg.setDestination(43086U);
    msg.setDestinationEntity(126U);
    msg.type = 205U;
    msg.error.assign("OULGEXIJSPRRLVLYQTOWCKHZGJTULACYYUKXRTGSICYJFTGNUJSJBENGSFIJZJUDIVLNVXMFAPVTIKQOGBLBUVYNCZPNURSZVTHDJPWTXYHQFCSMFXDTZHFBPKXWWRIRTCNMDMEHGENZYPKMYFNOZWQOFQUSSWUDPDVLRSEESWQEHLCJWATMZNNAMUXARZRJPAFQY");

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
    msg.setTimeStamp(0.121867356704);
    msg.setSource(22644U);
    msg.setSourceEntity(139U);
    msg.setDestination(15601U);
    msg.setDestinationEntity(78U);
    msg.seq = 25520U;
    msg.sys_dst.assign("VXYEKWHXWWESGVSZGTNDQATCLUEAFHDYVRLDEIDIVLWYF");
    msg.flags = 123U;
    const char tmp_msg_0[] = {55, -37, 102, 87, -44, -93, -70, 70, 14, -122, -88, -10, -88, 82, -120, -62, 107, -14, -96, 28, 41, 101, -97, 58, -111, 48, 104, 120, -88, -126, 71, -83, 45, -3, -105, -67, -123, 108, 66, -121, 52, -110, -100, -27, -120, 119, -90, 38, -35, 74, -68, 74, 6, -95, 3, 17, 120, -67, 32, -95, -82, -105, 23, 87, -57, -121, -37, -26, 39, -60, 71, 115};
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
    msg.setTimeStamp(0.11286068333);
    msg.setSource(51690U);
    msg.setSourceEntity(109U);
    msg.setDestination(13028U);
    msg.setDestinationEntity(133U);
    msg.seq = 10879U;
    msg.sys_dst.assign("KPBHMKLBEOJUDYMLPSYXCTQWCWRIBGTAGSGUXUVONBKZTYOQRKFCBXICGTHBSPNPCLGPXKCNDXZUMANIUUBNTZALKTHZEWWFFYGIFQSI");
    msg.flags = 40U;
    const char tmp_msg_0[] = {-28, 56, -32, -114, 109, 10, 22, 57, -99, -23, -115, 103, -63, 74, -106, 22, -37, -49, -45, 45, -30, -93, -106, -101, -22, -82, -27, -89, 85, -97, -128, -69, -80, 12, -19, 47, 79, -107, 67, -28, 93, -13, 108, 10, 41, 114, -4, 0, -6, -56, -25, -29, 105, 23, 82, -67, -2, -94, 31, 97, 26, -46, -9, -73, 38, -64, -93, 104, 23, 72, -10, 72, -126, 95, 100, 110, 19, -55, 89, -85, -128, 88, 40, 76, -105, 45, -78, 76, 125, 53, 36, -87, -12, -75, 9, -122, 38, -74, 91, 37, 8, 91, -91, 100, 47, 108, 79, 0, 40, 33, -28, -64, 42, -123, -53, -82, -79, 86, -75, -6, -44, 32, -69, 47, -13, 29, 80, -59, 85, -102, 96, 8, 91, 31, -22, -110, 27, 97, -52, -118, -30, 38, -66, -125, -36, -81, -41, -107, -120, 22, 56, 107, 35, -4, -61};
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
    msg.setTimeStamp(0.496821829119);
    msg.setSource(56582U);
    msg.setSourceEntity(179U);
    msg.setDestination(14567U);
    msg.setDestinationEntity(36U);
    msg.seq = 8535U;
    msg.sys_dst.assign("IEMSYPUILYHVBRWCBSHMQATGMPTZWPVOKQXWXMXEKOUHPXQSRBCWRTYT");
    msg.flags = 88U;
    const char tmp_msg_0[] = {18, 37, -5, -105, -119, -58, 125, -31, 16, -51, -125, -70, 41, -91, -83, -69, 125, 73, 73, -47, -46, 11, -2, -18, 73, 109, -44, 1, -102, 9, 36, 63, 28, 97, -28, -114, 64, -36, 94, -31, -83, 51, -107, 1, -125, 13, -11, 116, 60, 21, -126, -25, 33, -119, 87, 73, -16, -46, 48, -124, -41, 80, 1, -90, 76, 4, -11, -49, 83, 112, -97, -120, 24, 26, 104, -57, 79, 9, -4, -47, -36, -77, 65, -67, 126, -118, -45, -52, 119, -73, -25, -119, 121, -11, -109, -94, 62, 9, -107, -85, 96, -8, 84, -46, 74, 110, -61, 43, 121, 21, -117, 82, -65, 30, 43, 36, 94, -8, 74, -92, 124, 73, 115, -83, 126, 124, -36, -89, 7, -66, 13, 71, 83, 100, -122, -33, 94, -69, -46, -82, -65, 109, 16, 34, -32, 9, 65, -1, -76, 10, -25, 91, -82, 126, 64, 110, 120, 33, 34, -73, -115, 70, -109, 23, -48, -70, 4, -27, 62, -9, 38, -24, 85, 84, -40, 105, -113, 20};
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
    msg.setTimeStamp(0.234231143529);
    msg.setSource(42157U);
    msg.setSourceEntity(195U);
    msg.setDestination(10671U);
    msg.setDestinationEntity(130U);
    msg.sys_src.assign("HGKRENNXVKPGCTUCBBCBRHDKRHBUXJYOTKXLSLFXTDKTTUSXDXXMPEOBPQDSZFWKUOFYVSAJCQPAJLHWBIKF");
    msg.sys_dst.assign("TQYGMHXEALYWQRZYRBDZLBJHNBXMVAFGGCPEEJBPHHNJDAFNTSBSAODHLUOMSBZDCVRDCTSDKCHLKUDPIXANNKPYRBEEKJZWYOFWGIJWJJMOJHBLDGWRWZLYTPWLZSXSXFQUHNXGHCGUFDKGAMAXVIKOKJQOMAXIEFPIMSZOSMGIMNXQURASQIVZEPOFIKYKCYHUSECGCWYRNQVTPMFDWOULNTVUOBAYTILCUQCVRZPEEVZRLI");
    msg.flags = 178U;
    const char tmp_msg_0[] = {45, 126, 121, 90, -66, 117, 29, 42, 60, -18, 58, -4, 19, -77, 24, 30, 26, 126, 66, -41, -4, 65, -34, 48, 81, 73, -15, -20, -116, -43, 100, 10, 23, 57, 95, -23, -23, -97, -22, 86, 81, 30, 103, 90, -61, -37, 74, -90, -44, 12, 67, 100, -101, -73, 17, 117, -12, 98, -73, -61, -41, 5, -5, 13, 99, 12, 64, -103, -60, 116, 63, 99, 119, 81, -75, -107, -54, 48, -45, 34, 39, -21, 49, -85, -33, 49, 108, 10, -8, -31, -16, 85, -46, 18, 77, -92, -114, 114, 21, 101, 118, -58, 21, -93, 30, 102, 65, -106, 20, 14, -98, -97, -47, 101, -108, 58, 84, -67, -22, 103, -73, -113, 69, -40, -12, -26, 89, 20, 84, -5, 24, 54, -103, 88, -102, 90, 9, 115, 77, -49, -84, 108, 27, 74, 112, -9, -10, 6, -86, 5, -124, 35, -74, -67, 34, 56, -83, -62, -64, 107, 96, 43, -94, 6, 42, -38, 44, 87, -49, -19, -54, -96, -103, -47, 34, 17, -69, -9, 3, 55, -100, -92, 61, -75, 12, 78, 44, 25, 107, 91, -11, -85, -23, -31, 115, 22, -87, -115, 71, 20, 20, -70, -27};
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
    msg.setTimeStamp(0.641116137435);
    msg.setSource(33895U);
    msg.setSourceEntity(204U);
    msg.setDestination(60718U);
    msg.setDestinationEntity(22U);
    msg.sys_src.assign("IUBSYMJYLUTQKIQBBUJBATUBSYMHYAZALHVGPDYFFCYWYEXOVOHIUTKCVRNZXAUILHSRHGMZDZWQEWQQFVGJKZPIFRGKNZCPTGEUJWNDTDQMKJAHOETUO");
    msg.sys_dst.assign("CWCDPIAWHZZRPBLSQGNOTOQFKXSDEBAMMHSJWPNEUXWJFQRVCNEILGZZIUZWUZEFVPJDGPRXGQIZNQCDYWTOSBFRIEANSMTEOFFRAJRWAMNZUYTLNGSDKLYCSEKNSQDJUBBQVWYHXVBIHCDTDJJKLWVAVAIHPUHLVTYFMUCOOJPSRBJRKHFOGMHVOPBYALXQXGUIQYITBXKJKH");
    msg.flags = 208U;
    const char tmp_msg_0[] = {52, 17, 50, -57, -28, 115, 113, 77, 42, 7, -78, -65, 40, -4, -61, -42, -2, -49, -86, -99, 113, 30, 126, 74, 54, 14, -113, -50, -37, 80, -110, 116, 24, 91, -101, -108, 66, 50, 2, 102, -123, 24, 102, -120, -41, -61, -124, -123, 122, -89, -84, 63, -31, -60, 119, -83, -125, 70, 21, -58, -78, -87, 40, -44, -54, 61, -125, 17, -104, 118, -70, -96, -114, -106, -5, 32, 26, 124, -62, -25, 126, 104, 82, 26, 71, -26, -34, 78, -81, -7, -105, 122, 103, 78, 25, 13, 47, 124, 118, -24, 59, 34, 6, 15, -82, -103, -68, -101, -39, 61, 81, -88, 0, -88, -55, 52, 42, 94, -88, -14, -74, -54, -126, 48, 62, 7, 15, 76, -108, 34, 2, 78, 61, 62, -35, 9, 79, -63, 59, -114, 49, -48, 52, 55, -92, -98, -56, -61, -26, 36, 67, -44, 104, -53, -93, 3, 94, 27, -1, -2, -112, 23, 19, -95, -95, -53, 88, 4, 89, 16, 2, 47, 53, -62, -21, -62, -85, 115, 117, -98, 119, -83, -66, 50, -65, 54, 84, -9, -13, 67, -76, -26, 110, 38, -67, -20, -109, 100, -48};
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
    msg.setTimeStamp(0.344069643531);
    msg.setSource(56287U);
    msg.setSourceEntity(114U);
    msg.setDestination(8249U);
    msg.setDestinationEntity(210U);
    msg.sys_src.assign("GOWLFTFLBBGJZYJKSISYVNVHZWBDYSUJQCEBSUEKBRCJPZMZFDJRPKMVLVIKPRXUBLRPCAZMNTOXXAUWEGAYJAOGHXJUHKTBSPQLRHZKR");
    msg.sys_dst.assign("CGKUMXPGHAURXJMDTQYTATLZEWYZOQTXZQYJSAKNNOMFABRDQDJQOBCAGFMDELQLFZGMRHHXPRTUCWVRICQUCVVLKCJUVCOYVWVPOGWEGTYJABQCWSYPNLBSSRNAGRBRWZFEZDSOMDXGFBSIVDEFJJIHNONGHPHKGVFXMIAQVWQYRKVBRNEDEXALTSUPKKHXTPCMXHUJYLINPHOSWZALUEIOMIMJFOPXYHCBFKUIBZWDSYSLIZ");
    msg.flags = 41U;
    const char tmp_msg_0[] = {24, 94, -106, 18, 98, 49, 17, 80, -15, -116, -91, 119, 54, -123, -84, -1, -42, -19, 45, -51, -64, -17, -87, 73, -29, -13, -29, -22, 85, -119, 52, 53, -77, -84, 82, -39, 17, -73, -2, 81, -67, 104, 51, -97, -48, -7, 105, -40, -54, 0, -23, 86, -96, 34, 27, 59, -78, 100, 111, -85, 71, -9, -82, -76, 66, -21, 96, -20, -35, -13, 29, -88, -111, 24, 96, 46, -87, 36, -105, -99, 30, 102, -9, 47, 48, 73, -78, -23, -121, 41, 116, -112, -57, 66, 12, -57, 20, -57, 51};
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
    msg.setTimeStamp(0.578778930308);
    msg.setSource(61819U);
    msg.setSourceEntity(125U);
    msg.setDestination(28635U);
    msg.setDestinationEntity(16U);
    msg.seq = 40082U;
    msg.value = 187U;
    msg.error.assign("BLVWJSWHKFHQUKFQXNYCDIMXSFLWIMINLJGXQWVUSKQBGTEEFOBHVFLEARUSCEHRWCBWTTKZUHGTTOOQERDAZOGJTMXBVMNORGDPZAPYQNPDERXZYSMNPDPGBXHOKVZMIZFLSIJCUDTVYBNCKPNSUHKALAOVUMDNPFOQIWYYBFXQGKEXHJUYXPOWEI");

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
    msg.setTimeStamp(0.460250849158);
    msg.setSource(47028U);
    msg.setSourceEntity(75U);
    msg.setDestination(47931U);
    msg.setDestinationEntity(146U);
    msg.seq = 18980U;
    msg.value = 132U;
    msg.error.assign("WTONAZYYMHHWGEBZSFDZUVSIVUTELQCWTXNRRMNQYFOXWLASOOJEJJIRXGKJHSQEMKMBCPOWNLCHNPHXBGDSAGQHKGDIGWPOPAKTHNFFEWSIJLEDUUQAAAOZLKPBFTMHIJ");

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
    msg.setTimeStamp(0.0148514491113);
    msg.setSource(40268U);
    msg.setSourceEntity(189U);
    msg.setDestination(52875U);
    msg.setDestinationEntity(189U);
    msg.seq = 4789U;
    msg.value = 48U;
    msg.error.assign("KDGOVURRPMBQTBHZSQKQXJAPHMOCRZDVEFNOLFDYSOVJFTLKIRHGOSUTADVBRNCONICCJYZYJCWINUNCQFBNTZHMHRAEPDEHWQEGNKMWLCXUEPXGUIXRJSZQWFXOVAZKSJJMBFLKDUZXKIOJPSCAGLLGOWVVFPZHXWRNYFTTEHTWDUXRAPPSBIIXLUYIZLKNRDMIZ");

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
    msg.setTimeStamp(0.59578912846);
    msg.setSource(56332U);
    msg.setSourceEntity(110U);
    msg.setDestination(27241U);
    msg.setDestinationEntity(179U);
    msg.seq = 3807U;
    msg.sys.assign("MAHGPDVUNXUANZZQMUULTYKXBKOOVOGIHEZHRVYWPXSADVTLARKNRCNJEIZNYSGLXOYEPEVQIAYUOQZISIXLFCEWEZRYDZMXWOJKMCDHBKCZGBITMQRFRIUWQXTJSJFDTYPZHEEGRPHFWWBNUSQBKLMKWOTPALRMBMGIFCFCSLQJXAVWQALXJPYRAO");
    msg.value = 0.43290165985;

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
    msg.setTimeStamp(0.600297836485);
    msg.setSource(57957U);
    msg.setSourceEntity(247U);
    msg.setDestination(15386U);
    msg.setDestinationEntity(78U);
    msg.seq = 64021U;
    msg.sys.assign("LQODETZMODRALJJJQHDDZZXTHHSGXVHRJBIWUEUJALHPFAXVIHAEKZTADRCQ");
    msg.value = 0.465431160618;

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
    msg.setTimeStamp(0.0649614550327);
    msg.setSource(20397U);
    msg.setSourceEntity(107U);
    msg.setDestination(4908U);
    msg.setDestinationEntity(3U);
    msg.seq = 15270U;
    msg.sys.assign("HROOAPYTTUSCVHPSAMAPSKZRFSEEUDQUYJLBWRIRXY");
    msg.value = 0.350295656446;

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
    msg.setTimeStamp(0.0603507380814);
    msg.setSource(10014U);
    msg.setSourceEntity(147U);
    msg.setDestination(41048U);
    msg.setDestinationEntity(189U);
    msg.action = 172U;
    msg.longain = 0.71821278247;
    msg.latgain = 0.24054744267;
    msg.bondthick = 1179026542U;
    msg.leadgain = 0.434178073542;
    msg.deconflgain = 0.26551692476;

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
    msg.setTimeStamp(0.355580938946);
    msg.setSource(41413U);
    msg.setSourceEntity(40U);
    msg.setDestination(47884U);
    msg.setDestinationEntity(179U);
    msg.action = 182U;
    msg.longain = 0.993327007759;
    msg.latgain = 0.378201759329;
    msg.bondthick = 496448765U;
    msg.leadgain = 0.724733059539;
    msg.deconflgain = 0.804467896731;

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
    msg.setTimeStamp(0.61181531135);
    msg.setSource(44299U);
    msg.setSourceEntity(199U);
    msg.setDestination(55098U);
    msg.setDestinationEntity(108U);
    msg.action = 2U;
    msg.longain = 0.62633057752;
    msg.latgain = 0.551203691918;
    msg.bondthick = 1539446979U;
    msg.leadgain = 0.539480412391;
    msg.deconflgain = 0.793936263701;

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
    msg.setTimeStamp(0.844726015144);
    msg.setSource(7841U);
    msg.setSourceEntity(162U);
    msg.setDestination(50323U);
    msg.setDestinationEntity(47U);
    msg.err_mean = 0.0377525973311;
    msg.dist_min_abs = 0.0230954841088;
    msg.dist_min_mean = 0.651716374421;

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
    msg.setTimeStamp(0.0282406768009);
    msg.setSource(48722U);
    msg.setSourceEntity(229U);
    msg.setDestination(33664U);
    msg.setDestinationEntity(76U);
    msg.err_mean = 0.368818661301;
    msg.dist_min_abs = 0.00751703709177;
    msg.dist_min_mean = 0.205820319762;

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
    msg.setTimeStamp(0.626318248908);
    msg.setSource(63795U);
    msg.setSourceEntity(3U);
    msg.setDestination(57055U);
    msg.setDestinationEntity(32U);
    msg.err_mean = 0.724339801587;
    msg.dist_min_abs = 0.362281951113;
    msg.dist_min_mean = 0.981708630053;

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
    msg.setTimeStamp(0.486971530803);
    msg.setSource(17614U);
    msg.setSourceEntity(20U);
    msg.setDestination(22991U);
    msg.setDestinationEntity(21U);
    msg.action = 30U;
    msg.lon_gain = 0.383123691966;
    msg.lat_gain = 0.208526095671;
    msg.bond_thick = 0.689314273475;
    msg.lead_gain = 0.576385739794;
    msg.deconfl_gain = 0.0639745645314;
    msg.accel_switch_gain = 0.573675462836;
    msg.safe_dist = 0.599241436567;
    msg.deconflict_offset = 0.26733694337;
    msg.accel_safe_margin = 0.381123276332;
    msg.accel_lim_x = 0.584178587554;

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
    msg.setTimeStamp(0.895979892999);
    msg.setSource(22866U);
    msg.setSourceEntity(192U);
    msg.setDestination(62130U);
    msg.setDestinationEntity(138U);
    msg.action = 67U;
    msg.lon_gain = 0.829488300812;
    msg.lat_gain = 0.249278530882;
    msg.bond_thick = 0.707529454618;
    msg.lead_gain = 0.819026609962;
    msg.deconfl_gain = 0.11764501715;
    msg.accel_switch_gain = 0.650276045578;
    msg.safe_dist = 0.0341795891888;
    msg.deconflict_offset = 0.0870948714126;
    msg.accel_safe_margin = 0.708390716286;
    msg.accel_lim_x = 0.288071205181;

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
    msg.setTimeStamp(0.165504539793);
    msg.setSource(64973U);
    msg.setSourceEntity(2U);
    msg.setDestination(2460U);
    msg.setDestinationEntity(214U);
    msg.action = 4U;
    msg.lon_gain = 0.0735316096898;
    msg.lat_gain = 0.682438622008;
    msg.bond_thick = 0.0941790636594;
    msg.lead_gain = 0.871722431001;
    msg.deconfl_gain = 0.844357492248;
    msg.accel_switch_gain = 0.640192889243;
    msg.safe_dist = 0.631359470581;
    msg.deconflict_offset = 0.425448769543;
    msg.accel_safe_margin = 0.033985487451;
    msg.accel_lim_x = 0.734516624619;

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
    msg.setTimeStamp(0.913252919699);
    msg.setSource(59281U);
    msg.setSourceEntity(96U);
    msg.setDestination(19211U);
    msg.setDestinationEntity(247U);
    msg.type = 57U;
    msg.op = 131U;
    msg.err_mean = 0.102569459071;
    msg.dist_min_abs = 0.30585873528;
    msg.dist_min_mean = 0.98439048588;
    msg.roll_rate_mean = 0.757412418663;
    msg.time = 0.723418726835;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 215U;
    tmp_msg_0.lon_gain = 0.357778704022;
    tmp_msg_0.lat_gain = 0.900295077627;
    tmp_msg_0.bond_thick = 0.61914399922;
    tmp_msg_0.lead_gain = 0.0133646017727;
    tmp_msg_0.deconfl_gain = 0.961638734287;
    tmp_msg_0.accel_switch_gain = 0.822641165978;
    tmp_msg_0.safe_dist = 0.652008419602;
    tmp_msg_0.deconflict_offset = 0.263523018522;
    tmp_msg_0.accel_safe_margin = 0.556642593246;
    tmp_msg_0.accel_lim_x = 0.266240691253;
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
    msg.setTimeStamp(0.0143165208048);
    msg.setSource(42813U);
    msg.setSourceEntity(7U);
    msg.setDestination(22340U);
    msg.setDestinationEntity(230U);
    msg.type = 36U;
    msg.op = 72U;
    msg.err_mean = 0.514714412019;
    msg.dist_min_abs = 0.508875554226;
    msg.dist_min_mean = 0.81166412579;
    msg.roll_rate_mean = 0.559625915103;
    msg.time = 0.0608640874045;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 57U;
    tmp_msg_0.lon_gain = 0.50796758278;
    tmp_msg_0.lat_gain = 0.338824526205;
    tmp_msg_0.bond_thick = 0.262439396396;
    tmp_msg_0.lead_gain = 0.194298665935;
    tmp_msg_0.deconfl_gain = 0.99306054781;
    tmp_msg_0.accel_switch_gain = 0.704756605652;
    tmp_msg_0.safe_dist = 0.594914357863;
    tmp_msg_0.deconflict_offset = 0.0804960113315;
    tmp_msg_0.accel_safe_margin = 0.401543613235;
    tmp_msg_0.accel_lim_x = 0.83477186545;
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
    msg.setTimeStamp(0.181619068997);
    msg.setSource(17323U);
    msg.setSourceEntity(141U);
    msg.setDestination(17859U);
    msg.setDestinationEntity(183U);
    msg.type = 239U;
    msg.op = 18U;
    msg.err_mean = 0.191367168121;
    msg.dist_min_abs = 0.0755164215301;
    msg.dist_min_mean = 0.961071571967;
    msg.roll_rate_mean = 0.757628787859;
    msg.time = 0.465653527184;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 0U;
    tmp_msg_0.lon_gain = 0.53766416985;
    tmp_msg_0.lat_gain = 0.513536369944;
    tmp_msg_0.bond_thick = 0.159513771587;
    tmp_msg_0.lead_gain = 0.483787313269;
    tmp_msg_0.deconfl_gain = 0.333864711216;
    tmp_msg_0.accel_switch_gain = 0.980133778469;
    tmp_msg_0.safe_dist = 0.978388075867;
    tmp_msg_0.deconflict_offset = 0.527185510528;
    tmp_msg_0.accel_safe_margin = 0.962333050678;
    tmp_msg_0.accel_lim_x = 0.632997857382;
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
    msg.setTimeStamp(0.577557439636);
    msg.setSource(46988U);
    msg.setSourceEntity(80U);
    msg.setDestination(14486U);
    msg.setDestinationEntity(153U);
    msg.lat = 0.622184817088;
    msg.lon = 0.514190377899;
    msg.eta = 1037628544U;
    msg.duration = 20798U;

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
    msg.setTimeStamp(0.183623688678);
    msg.setSource(28369U);
    msg.setSourceEntity(179U);
    msg.setDestination(49407U);
    msg.setDestinationEntity(216U);
    msg.lat = 0.0968058396887;
    msg.lon = 0.71509979221;
    msg.eta = 2508004998U;
    msg.duration = 36363U;

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
    msg.setTimeStamp(0.273428100673);
    msg.setSource(21653U);
    msg.setSourceEntity(15U);
    msg.setDestination(13860U);
    msg.setDestinationEntity(174U);
    msg.lat = 0.225450054307;
    msg.lon = 0.623883949228;
    msg.eta = 436768431U;
    msg.duration = 26655U;

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
    msg.setTimeStamp(0.660556444535);
    msg.setSource(7795U);
    msg.setSourceEntity(235U);
    msg.setDestination(48001U);
    msg.setDestinationEntity(3U);
    msg.plan_id = 28246U;

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
    msg.setTimeStamp(0.228654965381);
    msg.setSource(55863U);
    msg.setSourceEntity(95U);
    msg.setDestination(20676U);
    msg.setDestinationEntity(52U);
    msg.plan_id = 62235U;

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
    msg.setTimeStamp(0.0699489144194);
    msg.setSource(17426U);
    msg.setSourceEntity(214U);
    msg.setDestination(45868U);
    msg.setDestinationEntity(221U);
    msg.plan_id = 21369U;
    IMC::SoiWaypoint tmp_msg_0;
    tmp_msg_0.lat = 0.911656906297;
    tmp_msg_0.lon = 0.128891951836;
    tmp_msg_0.eta = 3503586827U;
    tmp_msg_0.duration = 44880U;
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
    msg.setTimeStamp(0.882248598892);
    msg.setSource(23440U);
    msg.setSourceEntity(202U);
    msg.setDestination(63078U);
    msg.setDestinationEntity(164U);
    msg.type = 199U;
    msg.command = 110U;
    msg.settings.assign("OCRBYNVLOBWLHNQVNKFMVEKGMRFTDKUEJZTJMSTBMHEGELRELQIWXHVCYCYWGQQVKXTZXDLAAXCPWQTCSMPUIMUYVABRIUPDHCFYCSQTXFJFMHPXKDMORIEIVJHABHWUJOORKANQGHAUADNKKYSOHEFACCLPGBNFAOLJPXZZEMOOBRWTQNBJZCZDFJPEX");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 25368U;
    msg.plan.set(tmp_msg_0);
    msg.info.assign("RBLPJPUPNAKEVZMDFPJLGKMNXZSLISMDKCQDEROCAUAGQQPLBQCDDZSYRTFXPIPBWZOLOAUHHBLVHRHNPJSYRBQXJUTJTIYBHBIRXZFUIFTSCGCOXVWZJKOTZOYIBDKWRNKHNSFILYYASIQKFEEHTDRYYESCFETWVVNHXWASD");

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
    msg.setTimeStamp(0.128814726185);
    msg.setSource(58531U);
    msg.setSourceEntity(208U);
    msg.setDestination(6502U);
    msg.setDestinationEntity(34U);
    msg.type = 139U;
    msg.command = 9U;
    msg.settings.assign("DZPKVWPUPUTNSESSHVCBDLSKAFTBQKRLUYJJOMEBRTGWRWGADMZPMJRGEZATYTKGCQFXXQYHIKHOFYXKLABVZLGLZWEHVFBIGDXAREJOHDRHS");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 50333U;
    msg.plan.set(tmp_msg_0);
    msg.info.assign("YQBKFADMMAROOODHGBKJGZKRVZVUSBLVUSOHWUAVTQQVZSYHKIQNLDZXACNNWWYOIOPBTTLNNTERPGBCAMEYIXXSREUSDCPZWGPFLZXUBKRQNYGHTBZWLJFFORHHGJMBNQGMNIIHQLWWILEKDXSJAUJJETAIUMHTQSEZJCVJXNOCCQCKEXJMTTXV");

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
    msg.setTimeStamp(0.946123203164);
    msg.setSource(63975U);
    msg.setSourceEntity(135U);
    msg.setDestination(202U);
    msg.setDestinationEntity(241U);
    msg.type = 140U;
    msg.command = 239U;
    msg.settings.assign("IBDKIFMXQQFWBGJKZCJOEBUBCFTDEMRDVVPVXWTGTZPYYBXRSCUIOXLMKWFJWDJXOYWDLKNAAUGHCSHRJSQTAQTJKZNOCWVJRDXMNFDKPMUUGYYRIQYHYVFWZALHQNRAHSQONVRGTGASOAQXCHRGSYRCRSFFMGUUDILGYKIXNJFWBOHEZNWPQSCQJ");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 64292U;
    IMC::SoiWaypoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.325554486787;
    tmp_tmp_msg_0_0.lon = 0.587113644006;
    tmp_tmp_msg_0_0.eta = 1168431161U;
    tmp_tmp_msg_0_0.duration = 55247U;
    tmp_msg_0.waypoints.push_back(tmp_tmp_msg_0_0);
    msg.plan.set(tmp_msg_0);
    msg.info.assign("BWRAVWKKZYCDPJZKHFEACUKVZYNDTVSRDWNBLVSNJYNWHCSRKJFVBHNAGIXMSCJIFIDBSEWONTDDISUGFEQUIOAUDDXEMVHOYYEXNGIUYFSOQIBESLTOQW");

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
    msg.setTimeStamp(0.526871998391);
    msg.setSource(59843U);
    msg.setSourceEntity(152U);
    msg.setDestination(35992U);
    msg.setDestinationEntity(3U);
    msg.state = 133U;
    msg.plan_id = 41594U;
    msg.wpt_id = 25U;
    msg.settings_chk = 3845U;

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
    msg.setTimeStamp(0.766578664356);
    msg.setSource(1396U);
    msg.setSourceEntity(139U);
    msg.setDestination(2646U);
    msg.setDestinationEntity(236U);
    msg.state = 175U;
    msg.plan_id = 48718U;
    msg.wpt_id = 16U;
    msg.settings_chk = 5008U;

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
    msg.setTimeStamp(0.151227577115);
    msg.setSource(20935U);
    msg.setSourceEntity(91U);
    msg.setDestination(9307U);
    msg.setDestinationEntity(251U);
    msg.state = 98U;
    msg.plan_id = 28318U;
    msg.wpt_id = 14U;
    msg.settings_chk = 30632U;

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
    msg.setTimeStamp(0.116672829086);
    msg.setSource(48895U);
    msg.setSourceEntity(21U);
    msg.setDestination(11411U);
    msg.setDestinationEntity(205U);
    msg.uid = 212U;
    msg.frag_number = 192U;
    msg.num_frags = 167U;
    const char tmp_msg_0[] = {82, 48, 45, -13, 19, -19, 69, 70, -64, -49, 71, -108, 108, -60, -88, 52, 16, 92, -25, -59, 90, 26, 16, 19, -94, 108, 101, -35, 101, 37, -2, 33, 124, -46, 49, 79, 4, 45, 26, -41, 102, 6, -46, -53, 33, -102, 90, 80, -68, 67, -78, -29, -5, 11, 98, 66, 8, 11, 80, 60, -81, 20, -105, 30, -80, 20, 67, -24, -128, -57, 90, -64, -25, 116, 5, 15, -45, 103, -66, -75};
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
    msg.setTimeStamp(0.11059059445);
    msg.setSource(35089U);
    msg.setSourceEntity(189U);
    msg.setDestination(32382U);
    msg.setDestinationEntity(131U);
    msg.uid = 225U;
    msg.frag_number = 251U;
    msg.num_frags = 177U;
    const char tmp_msg_0[] = {98, -15, -82, 96, 55, -111, 126, -83, 34, -62, -103, 93, -74, 48, -3, 55, -58, 5, -25, 24, -36, 50, -38, 14, -65, 107, -76, -116, 33, -96, -49, -61, 29, -125, -125, 63, -76, 35, -19, -95, 90, -25, -57, 121, 57, -99, -120, 42, -86, -62, -14, 64, -3, 40, -47, -58, -120, 98, 101, 52, 99, -40, 16, -106, -95, -74, 113, -107, 52, 19};
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
    msg.setTimeStamp(0.846755833171);
    msg.setSource(19506U);
    msg.setSourceEntity(46U);
    msg.setDestination(55045U);
    msg.setDestinationEntity(77U);
    msg.uid = 225U;
    msg.frag_number = 94U;
    msg.num_frags = 249U;
    const char tmp_msg_0[] = {-106, 39, 124, 51, 115, 18, -88, -105, 10, 107, -68, 77, -33, 10, -22, -74, -78, -33, 11, -59, 7, 92, 44, -13, 48, 115, 75, -127, 124, -72, 126, -10, 63, 33, -57, 73, 30, -5, -4, -95, 12, 19, -25, -3, 70, -41, -28, 71, -66, 44, -101, 87, -4, -67, -97, -45, 3, -89, -120, 103, 87, 34, -66, -44, 29, -8, -119, 103, -5, -126, 99, -7, 23, -73, -127, 104, -46, 104, -78, 108, -31, 55, -121, 89, -124, 55, 114, -17};
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
    msg.setTimeStamp(0.247793471628);
    msg.setSource(53284U);
    msg.setSourceEntity(247U);
    msg.setDestination(39155U);
    msg.setDestinationEntity(88U);
    msg.content_type.assign("QCBSQKHSQFHAWEYRIKLBASCURJHVXYDMBVHTGCNNNUFFGDYXUAZFNMUPOTYGLYOCIXITQKRBQEADEARPNHOJUVPFDLBBJKAEUTBKSFLOJHUGLSTQEAIHPOYUMWVJZVZPNWWXQJVXVZLCTELLI");
    const char tmp_msg_0[] = {65, 75, -90, 57, -3, 4, 107, -4, 116, 110, 31, 125, 43, -94, -90, -59, 73, -115, -30, -97, -84, 8, -15, 35, -40, 57, 43, 68, -25, 13, -83, -29, -4, 14, 56, -44, -44, 5, -69, 123, -33, -107, 66, -66, -117, -58, -122, 4, -13, -19, 121, 79, 70, -27, 75, 110, 69, 83, -59, 24, 78, 5, 90, 63, -76, -115, -77, -17, -34, 54, -27, 50, 76, 42, -42, 25, 38, -110, -16, -102, 45, -75, 50, -92, 1, 28, -15, 86, 48, -52, 95, -103, 27, -77, 84, -79, -41, -61, -111, 80, 15};
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
    msg.setTimeStamp(0.259167025799);
    msg.setSource(47941U);
    msg.setSourceEntity(214U);
    msg.setDestination(4913U);
    msg.setDestinationEntity(117U);
    msg.content_type.assign("IVNEYDVLUCKRUHADX");
    const char tmp_msg_0[] = {-128, -53, 67, -40, -19, 47, -66, 24, 121, 27, -97, -57, -90, 111, -17, 101, -113, -82, -103, 79, -105, -88, 64, -16, 115, -126, -43, 124, 3, 102, 6, -73, 16, -34, 64, -67, 62, 38, 44, 94, 79, 63, 35, 57, 96, 59, 82, 22, -61, -16, -40, -27, -10, -9, 40, 32, 83, 43, 48, -5, 99, -115, -76, 4, 112, -109, 107, 17, 22, 105, 30, -19, -20, -72, -75, 16, 120, -38, 77, -87, -121, -126, 14, -32, -27, -126, 40, -53, -101, -46, -108, 91, -98, -62, 81, -8, 50, -21, 52, -114, -104, 71, 6, 43, -103, -102, 103, 37, -33, -31};
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
    msg.setTimeStamp(0.7126784154);
    msg.setSource(13219U);
    msg.setSourceEntity(135U);
    msg.setDestination(10482U);
    msg.setDestinationEntity(128U);
    msg.content_type.assign("AMJWYVUNYVZHRFPONXBCAUEHLLHQKXZRUFBSPCVXNLVCAITKCMMAROROHEUUUIYUGBODTKTIHYGHEQEUWDGSQIRBZKDSLVXSATJKCGONWZAKEJED");
    const char tmp_msg_0[] = {-124, 122, -14, 11, 59, -94, 17, 43, -54, -121, -121, -12, -94, 97, -75, 75, -70, -67, -12, 35, -66, 27, -67, 83, -6, -33, -12, -54, 59, 65, -49, 87, 12, 120, -40, 51, 56, -120, -25, 107, -95, -65, -19, 124, 81, 43, -122, 22, -73, 57, 50, -106, -45, -14, 66, 86, 38, -108, 55, -84, 0, -39, 90, -95, 64, -50, 66, -110, -109, -63, -35, -65, -74, -80, 61, 24, 80, -68, -124, -20, -119, -9, 111, -91, -56, 17, 85, 6, -46, 16, -96, -31, -88, 2, 6, 13, -122, -37, -126, 32, -34, 48, 120, -50, -91, -65, -66, 72, -44, -15, -29, -39, 99, 118, -69, -41, 49, -87, 94, -34, -18, -101, 43, -78, -82, -111, -91, 17, -58, 82, -28, 106, 53, 122, 19, 15, -122, 1, 13, 28, -33, -86, -28, 106, 33, 74, 26, 119, 87, 7, -44, 63, -58, 85, 30, -11, -50, -54, -21, 121, 6, 63, -94, -11, 105, 72, -96, -29, 122, -26, -18, -45, 93, 11, 101, 108, 67, 89, 75, -33, -39, -55, -113, 53, -4, 118, -63, -113, 5, -72, 0, 52, 35, 95, 46};
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
    msg.setTimeStamp(0.778019818508);
    msg.setSource(50799U);
    msg.setSourceEntity(54U);
    msg.setDestination(64060U);
    msg.setDestinationEntity(149U);

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
    msg.setTimeStamp(0.0276523326015);
    msg.setSource(56932U);
    msg.setSourceEntity(114U);
    msg.setDestination(1269U);
    msg.setDestinationEntity(229U);

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
    msg.setTimeStamp(0.648088267333);
    msg.setSource(7185U);
    msg.setSourceEntity(199U);
    msg.setDestination(30848U);
    msg.setDestinationEntity(123U);

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
    msg.setTimeStamp(0.986518788363);
    msg.setSource(65087U);
    msg.setSourceEntity(253U);
    msg.setDestination(16856U);
    msg.setDestinationEntity(160U);
    msg.target = 34229U;
    msg.bearing = 0.859475549427;
    msg.elevation = 0.80195481617;

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
    msg.setTimeStamp(0.42197489796);
    msg.setSource(27157U);
    msg.setSourceEntity(220U);
    msg.setDestination(47924U);
    msg.setDestinationEntity(207U);
    msg.target = 41192U;
    msg.bearing = 0.085752472384;
    msg.elevation = 0.195220001772;

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
    msg.setTimeStamp(0.850923074534);
    msg.setSource(55413U);
    msg.setSourceEntity(240U);
    msg.setDestination(30196U);
    msg.setDestinationEntity(98U);
    msg.target = 8110U;
    msg.bearing = 0.809962137657;
    msg.elevation = 0.429438575724;

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
    msg.setTimeStamp(0.980286513173);
    msg.setSource(19978U);
    msg.setSourceEntity(242U);
    msg.setDestination(49480U);
    msg.setDestinationEntity(10U);
    msg.target = 50065U;
    msg.x = 0.702341840524;
    msg.y = 0.67170721087;
    msg.z = 0.15979419611;

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
    msg.setTimeStamp(0.0475932472705);
    msg.setSource(3259U);
    msg.setSourceEntity(201U);
    msg.setDestination(23509U);
    msg.setDestinationEntity(47U);
    msg.target = 61128U;
    msg.x = 0.0505465656576;
    msg.y = 0.256072116733;
    msg.z = 0.785798570356;

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
    msg.setTimeStamp(0.966654331526);
    msg.setSource(31321U);
    msg.setSourceEntity(218U);
    msg.setDestination(45265U);
    msg.setDestinationEntity(64U);
    msg.target = 52544U;
    msg.x = 0.789452780282;
    msg.y = 0.0044800661211;
    msg.z = 0.526950300411;

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
    msg.setTimeStamp(0.931010634449);
    msg.setSource(65471U);
    msg.setSourceEntity(79U);
    msg.setDestination(11495U);
    msg.setDestinationEntity(209U);
    msg.target = 64142U;
    msg.lat = 0.935776326945;
    msg.lon = 0.73052307548;
    msg.z_units = 26U;
    msg.z = 0.0696375430001;

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
    msg.setTimeStamp(0.664993195429);
    msg.setSource(6521U);
    msg.setSourceEntity(164U);
    msg.setDestination(54790U);
    msg.setDestinationEntity(126U);
    msg.target = 24709U;
    msg.lat = 0.819126040903;
    msg.lon = 0.0960746246064;
    msg.z_units = 250U;
    msg.z = 0.0374380795474;

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
    msg.setTimeStamp(0.969342756735);
    msg.setSource(29878U);
    msg.setSourceEntity(90U);
    msg.setDestination(40436U);
    msg.setDestinationEntity(238U);
    msg.target = 37934U;
    msg.lat = 0.218348427945;
    msg.lon = 0.623274862933;
    msg.z_units = 237U;
    msg.z = 0.524653541786;

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
    msg.setTimeStamp(0.464487139257);
    msg.setSource(64608U);
    msg.setSourceEntity(21U);
    msg.setDestination(43025U);
    msg.setDestinationEntity(121U);
    msg.locale.assign("KKEHAHGAWQUCSAWKHMXSRLNVXVGDVWJIPBRUKQCOFLDTRWMEEBXTWJDFLLEHEBGQDRCEVJNJBGMLDQBQOBHPOWLIAEZYWSHLXFCEYMXYFVDXVACQMTZDZUTFGHPPYSKJCDNCANQYZSTMKYBJVPLZJJGQJMXFRXOVBEILYSFI");
    const char tmp_msg_0[] = {-110, -42, -106, 80, 19, 49, 67, -79, 31, 57, 77, 44, 97, 91, 18, -125, -20, -54, -91, 65, 93, 24, -61, -13, 20, 60, -27, -36, -38, 106, -111, -62, 103, -24, 49, -114, -84, 53, -25, -91, -82, -67, -100, -90, -85, -56, -96, -50, 19, -107, 108, -50, 57, 45, 90, -87, 11, 122, -63, -2, 92, 63, 69, 44, -25, -77, -65, -14, -43, 70, 84, -96, -125, -82, -15, 89, 2, 17, 110, 95, -100, -57, -61, -69, -86, 101, 88, 92, 80, 27, 62, 114, 0, 75, -100, 74, -19, 17, -61, 123, -3, 105, 46, 43, 25, 111, 126, 56, 54, 59, -30, -104, -83, -34, 35, -4, 117, 5, -3, -106, 119, -60, -60, -107, -105, 22, -52, -120, -114, -96, 98, 56, 86, -120, 70, -68, 118, -75, 107, 28, 57, -40, -52, -41, -113, -15, -63};
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
    msg.setTimeStamp(0.341193630669);
    msg.setSource(56255U);
    msg.setSourceEntity(184U);
    msg.setDestination(36574U);
    msg.setDestinationEntity(116U);
    msg.locale.assign("LTGCYAWIFPZNEBSPVBGYCJDCCHKIHFAEYUZQXSTKCVZRFDLOPWXUABONXVHRQWBFYKWJQGJWYMRXJOLPVAQWSSLBDAYBVHAUDTDRLHLZXHBSKTPMEEIPVEZXDEUFSTMRHTWVGJIRFKETUQUNJIHTJDHETNDZNMLFKMIRRZRCBWMNNOGIBUQDACCKOCUYPOSXVYWA");
    const char tmp_msg_0[] = {-80, 97, -41, -22, 114, -32, 124, 45, 83, -112, 119, -70, 105, 14, 76, 53, -108, 76, 13, -82, 79, 59, -21, 89, -62, -124, 12, -49, 97, -111, 23, 52, -75, -123, -56, 78, 113, -75, 13, -14, 12, -71, 81, 116, -7, -19, 16, -99, 26, -27, 85, -120, 14, 77, -9, 19, -12, 16, -68, -108, -24, 26, -4, 113, -93, -28, 115, 25, -64, 17, 99, 16, 117, 67, -76, 58, -116, 3, -40, 45, -43, -26, -2, -112, -64, -24, -3, -108, 44, -60, -9, -84, -126, 103, 86, 115, -43, 117, -71, -79, 2, 0, 33, 112, 90, -123, 38, 88, -110, -116, -59, 15, -56, -121, 65, 21, 93, 12, 14, -2, -63, 21, -112, 65, 117, 105, -119, -107, -17, -22, 126, -104, 90, 16, 47, 87, -11, 48, -57, 88, 6, 73, 93, -99, 86, -77, 96, -78, 113, -99, 23, -79, 9, -104};
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
    msg.setTimeStamp(0.764744074669);
    msg.setSource(46246U);
    msg.setSourceEntity(179U);
    msg.setDestination(29068U);
    msg.setDestinationEntity(67U);
    msg.locale.assign("FNGRBIBEHUUQTDTHRTIPKCJZNYVJZHRKAFJIVTEPCXSBSSMWYGCTERYCQLWRLXSBZGSYMGPUOZDSMQKIXVUINQUCNASDJMOUDMEEWMHHACSYEXIJQZHBPVMENANANVFOKGONXUELUELYVQFKNLWKGHZYIFOUHJKHVJJMIDPACFQYSTRTAVAMBJFYXVLQP");
    const char tmp_msg_0[] = {-21, 123, -68, 72, -119, -69, 75, -88, 30, 12, 69, 116, -55, -50, 87, 81, 23, 59, -73, 56, 62};
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
    msg.setTimeStamp(0.0986943784616);
    msg.setSource(539U);
    msg.setSourceEntity(103U);
    msg.setDestination(46080U);
    msg.setDestinationEntity(117U);

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
    msg.setTimeStamp(0.767399540984);
    msg.setSource(45609U);
    msg.setSourceEntity(182U);
    msg.setDestination(46775U);
    msg.setDestinationEntity(125U);

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
    msg.setTimeStamp(0.40470860334);
    msg.setSource(30002U);
    msg.setSourceEntity(199U);
    msg.setDestination(43607U);
    msg.setDestinationEntity(12U);

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
    msg.setTimeStamp(0.487812122719);
    msg.setSource(49715U);
    msg.setSourceEntity(112U);
    msg.setDestination(19613U);
    msg.setDestinationEntity(73U);
    msg.camid = 173U;
    msg.x = 24241U;
    msg.y = 38548U;

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
    msg.setTimeStamp(0.686288863944);
    msg.setSource(30964U);
    msg.setSourceEntity(8U);
    msg.setDestination(9205U);
    msg.setDestinationEntity(67U);
    msg.camid = 211U;
    msg.x = 41267U;
    msg.y = 43402U;

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
    msg.setTimeStamp(0.602723197185);
    msg.setSource(596U);
    msg.setSourceEntity(171U);
    msg.setDestination(15638U);
    msg.setDestinationEntity(201U);
    msg.camid = 180U;
    msg.x = 60888U;
    msg.y = 3652U;

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
    msg.setTimeStamp(0.937032823748);
    msg.setSource(51825U);
    msg.setSourceEntity(230U);
    msg.setDestination(48933U);
    msg.setDestinationEntity(80U);
    msg.camid = 227U;
    msg.x = 36838U;
    msg.y = 44514U;

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
    msg.setTimeStamp(0.242207245753);
    msg.setSource(23840U);
    msg.setSourceEntity(119U);
    msg.setDestination(64204U);
    msg.setDestinationEntity(77U);
    msg.camid = 75U;
    msg.x = 35244U;
    msg.y = 8645U;

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
    msg.setTimeStamp(0.363373288445);
    msg.setSource(55499U);
    msg.setSourceEntity(206U);
    msg.setDestination(33582U);
    msg.setDestinationEntity(204U);
    msg.camid = 144U;
    msg.x = 20351U;
    msg.y = 6850U;

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
    msg.setTimeStamp(0.495890322315);
    msg.setSource(49118U);
    msg.setSourceEntity(182U);
    msg.setDestination(19839U);
    msg.setDestinationEntity(61U);
    msg.tracking = 159U;
    msg.lat = 0.309985514311;
    msg.lon = 0.238886337229;
    msg.x = 0.701415676233;
    msg.y = 0.341014936436;
    msg.z = 0.833749697923;

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
    msg.setTimeStamp(0.313925507447);
    msg.setSource(31895U);
    msg.setSourceEntity(43U);
    msg.setDestination(38224U);
    msg.setDestinationEntity(183U);
    msg.tracking = 44U;
    msg.lat = 0.676397518756;
    msg.lon = 0.344068919984;
    msg.x = 0.683644663427;
    msg.y = 0.868014324069;
    msg.z = 0.27333918009;

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
    msg.setTimeStamp(0.190107144399);
    msg.setSource(48783U);
    msg.setSourceEntity(117U);
    msg.setDestination(2547U);
    msg.setDestinationEntity(220U);
    msg.tracking = 97U;
    msg.lat = 0.181981963995;
    msg.lon = 0.683602736468;
    msg.x = 0.953575136193;
    msg.y = 0.432124876558;
    msg.z = 0.393078533159;

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
    msg.setTimeStamp(0.855260708836);
    msg.setSource(29373U);
    msg.setSourceEntity(142U);
    msg.setDestination(49065U);
    msg.setDestinationEntity(93U);
    msg.target.assign("ZUFDAHWUERFOKVQOZPSXMSVGNLWIQGSHVTICISDMKXPREGDOEFWSMXOSZZXSYMVAIDKVGGEKHBYAULLAJTODYKHKXAQVIVRNPMCPFHDMLVNUVCSRYWABLHCMW");
    msg.lbearing = 0.0933892524092;
    msg.lelevation = 0.535959904777;
    msg.bearing = 0.888242141825;
    msg.elevation = 0.255623086813;
    msg.phi = 0.186136590675;
    msg.theta = 0.402288345281;
    msg.psi = 0.156832971038;
    msg.accuracy = 0.91716732236;

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
    msg.setTimeStamp(0.344453768905);
    msg.setSource(19421U);
    msg.setSourceEntity(158U);
    msg.setDestination(22215U);
    msg.setDestinationEntity(48U);
    msg.target.assign("OJQLKWXQRHYSXUZNCXOVQCLWEAMHXPTSGVNUTNMIVXKOZPJDEUUCHFDFTTYRFWYDVYJPIFBQZBLSODSKNADTRADLMWYLIYBNCLVZRRGQMEIEGWISZUJGDX");
    msg.lbearing = 0.549369231627;
    msg.lelevation = 0.976335616093;
    msg.bearing = 0.0834824630228;
    msg.elevation = 0.259223081812;
    msg.phi = 0.0622376681324;
    msg.theta = 0.409923962952;
    msg.psi = 0.534974540662;
    msg.accuracy = 0.953153929536;

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
    msg.setTimeStamp(0.667411207018);
    msg.setSource(29735U);
    msg.setSourceEntity(76U);
    msg.setDestination(50996U);
    msg.setDestinationEntity(113U);
    msg.target.assign("PVAZSVTTMNDMFOXFTFQMLJUJVUKMZCHEFURRRSJXDAEAOBFGKMWMPKLOOPAUILHMMZLLRTZCLLROSEKCWAGGSNTLXLKGBWYNUTUJEXJIPBQETNQJQIRHOWOICANBJZYZPIQDIAYBQYXIGWNFWNUQQCCXKRIMIXBJVZKDDBNFMVHVOSVSTGSNXYTHVYCQDYWBWHEBEFHGDYKDPGHADORUSYZPPCOQHUAWVHJYKZDCFS");
    msg.lbearing = 0.483628512207;
    msg.lelevation = 0.582951596137;
    msg.bearing = 0.245425527392;
    msg.elevation = 0.0483652144741;
    msg.phi = 0.0514546498404;
    msg.theta = 0.780736851;
    msg.psi = 0.186653985338;
    msg.accuracy = 0.901039969252;

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
    msg.setTimeStamp(0.692383143272);
    msg.setSource(37053U);
    msg.setSourceEntity(144U);
    msg.setDestination(48537U);
    msg.setDestinationEntity(114U);
    msg.target.assign("DYUJPGPILTUAOLJBFJFKDJXAXQDEKCTFKBKCZTRIBSPCHJEEYLDZQCHFZXNQHYSPACVIGACKMHFXIHPCWVESVDAXOVXAKEEMZPLTFNUUJLMCRSBUZENLFLICBWYRRZPGFGHVDIWOIURFNVBTKDJUBNMQRXZMMUTSTRQTKURDFHSSYINABSPVJGZGQUDMEZVTCRQPPZRIBHNWOAMYKAQOOOYAWWML");
    msg.x = 0.372018756226;
    msg.y = 0.0755417512693;
    msg.z = 0.262827096777;
    msg.n = 0.842605774112;
    msg.e = 0.679633016357;
    msg.d = 0.803610483195;
    msg.phi = 0.830760984437;
    msg.theta = 0.630845685893;
    msg.psi = 0.227098495302;
    msg.accuracy = 0.149432922949;

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
    msg.setTimeStamp(0.319036104719);
    msg.setSource(41878U);
    msg.setSourceEntity(238U);
    msg.setDestination(10712U);
    msg.setDestinationEntity(49U);
    msg.target.assign("KXPFHVZMGQHUZFBLMDANREZPJQAHTEFBLLTRSNQEWWJYOFYKJXJLSZMEHFXSTYOFTDRWJUCPEUPGQZCRWOYEMPCKKKIIYDANGIIBAMMQDBLIPFAGXCIZCIOCAQJCRKNAGOGOUASUHUOMKBSJAQBHPQLVHYXXYCSTLXOZXDZWNVXJIKGLEPWIHRVLUYKF");
    msg.x = 0.595563754077;
    msg.y = 0.184156229571;
    msg.z = 0.224163751394;
    msg.n = 0.0458688353847;
    msg.e = 0.890457472861;
    msg.d = 0.0456051280281;
    msg.phi = 0.658889198764;
    msg.theta = 0.596359243647;
    msg.psi = 0.296490134253;
    msg.accuracy = 0.179851324285;

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
    msg.setTimeStamp(0.180590968599);
    msg.setSource(25884U);
    msg.setSourceEntity(2U);
    msg.setDestination(38544U);
    msg.setDestinationEntity(59U);
    msg.target.assign("UEOBGXXBMPGNHFOZDTDWVAIBFEMGNFYWVSRGOLUUVXNSPGYCZXHZYBZLEJRPMIJPOFVKNVVZSQHDKMETINVNOHDNXGLCNWESWMLKL");
    msg.x = 0.42135409917;
    msg.y = 0.0937600466116;
    msg.z = 0.569364628743;
    msg.n = 0.753459525125;
    msg.e = 0.665019886269;
    msg.d = 0.292054229295;
    msg.phi = 0.901874784337;
    msg.theta = 0.998046390232;
    msg.psi = 0.620695765534;
    msg.accuracy = 0.371268837035;

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
    msg.setTimeStamp(0.224048181754);
    msg.setSource(53824U);
    msg.setSourceEntity(6U);
    msg.setDestination(23402U);
    msg.setDestinationEntity(233U);
    msg.target.assign("THLNEFQLILBJIUQAXUYMPBQQUAJEYQPIPCNZTWSVBFAGDIOLWKSXZNSZPSFHJECALHKGSQQDWVMNZHREZLGXGKFWVJHIYUJEDFTNPHLQSAKCQDSVVCBHNVMRNENCPRRBVZPKTXXPVQFHREVORYTWJCGMITLYUDKBKGJDSUKMMCUTZMGOUEPPOTZBASDOUYYLIWWTMXBLBYZWSWGCX");
    msg.lat = 0.313424058736;
    msg.lon = 0.107235541764;
    msg.z_units = 156U;
    msg.z = 0.189861406832;
    msg.accuracy = 0.825428091565;

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
    msg.setTimeStamp(0.381065717059);
    msg.setSource(34974U);
    msg.setSourceEntity(171U);
    msg.setDestination(64794U);
    msg.setDestinationEntity(40U);
    msg.target.assign("PTQGCYTDKQEIALFKYUIWMRNRJTDLIWQGNCLWYPDERBONXEIGBSBHVVRGEN");
    msg.lat = 0.217555323545;
    msg.lon = 0.0807870808093;
    msg.z_units = 86U;
    msg.z = 0.188553298685;
    msg.accuracy = 0.35433278648;

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
    msg.setTimeStamp(0.00532539866682);
    msg.setSource(2770U);
    msg.setSourceEntity(151U);
    msg.setDestination(14437U);
    msg.setDestinationEntity(104U);
    msg.target.assign("UZNHYFUOUNQYICNXVEQIDGAVUXVFJCGBYGGQM");
    msg.lat = 0.223220011309;
    msg.lon = 0.165364582191;
    msg.z_units = 55U;
    msg.z = 0.050818087293;
    msg.accuracy = 0.332691796117;

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
    msg.setTimeStamp(0.971062341841);
    msg.setSource(62540U);
    msg.setSourceEntity(149U);
    msg.setDestination(15506U);
    msg.setDestinationEntity(252U);
    msg.name.assign("TMKAHIFYGMQNFNLJSIVIEBZYGMYJCLESCKIWJVIDVHBORIDXVDYYTAAPPBLHSPSWUXTMWVKYZQKRZGHQLVJOWQPXNUKYT");
    msg.lat = 0.725896556279;
    msg.lon = 0.848739990639;
    msg.z = 0.633140210747;
    msg.z_units = 145U;

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
    msg.setTimeStamp(0.381076518028);
    msg.setSource(14058U);
    msg.setSourceEntity(174U);
    msg.setDestination(4538U);
    msg.setDestinationEntity(193U);
    msg.name.assign("ADZMPBZYZRPKIJJRRAGVNXEROUQFDLYSCWBBYLOUCNCKJNSGNWDQSEVGWOIQBFNVEJDHJOLGHLXBFXLEWECRXWTTHF");
    msg.lat = 0.203255305557;
    msg.lon = 0.379138255366;
    msg.z = 0.711317993832;
    msg.z_units = 63U;

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
    msg.setTimeStamp(0.301944592743);
    msg.setSource(9519U);
    msg.setSourceEntity(164U);
    msg.setDestination(22990U);
    msg.setDestinationEntity(3U);
    msg.name.assign("CJEOIPORNHKDJRJFVRWPZRMHUXETAQFTNZCQGCXEKZUGVIPRJZFYYBDNWQPCEHQXEGCXJNVBPDYEINFMZODJVOFCZVVULKUQGIORQBZKSLBHMIIOHUBOOLHPTWXEDXYHCYWDBFVLTGQXVJAGMAPLYCJLSDATIT");
    msg.lat = 0.97974753845;
    msg.lon = 0.308723691277;
    msg.z = 0.275706357358;
    msg.z_units = 83U;

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
    msg.setTimeStamp(0.522433355764);
    msg.setSource(63756U);
    msg.setSourceEntity(34U);
    msg.setDestination(52103U);
    msg.setDestinationEntity(150U);
    msg.op = 221U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("CUTLHJRWWVJSHANNBJUHIUXUGHMVXCQAPOYEJEOFSIVGPYVIDMNTYZDZ");
    tmp_msg_0.lat = 0.658767835045;
    tmp_msg_0.lon = 0.431313981931;
    tmp_msg_0.z = 0.494041850471;
    tmp_msg_0.z_units = 42U;
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
    msg.setTimeStamp(0.185712263907);
    msg.setSource(9797U);
    msg.setSourceEntity(210U);
    msg.setDestination(683U);
    msg.setDestinationEntity(106U);
    msg.op = 209U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("EVHOVMFYSIKNCFXTUFEISWUFRUYDGNSBUHTTSTXINYZJNIMIDOUDGPLWKMJKIPWLCTDHXCUHWUKAQCXCGCVFKBBZMVITDZHPYRLEGRXFYCZMVSNLQXKEGQJROTXFPCBHGXVBPQMUAAQGJLOGSHDMLVEEJKXJXBFMLKS");
    tmp_msg_0.lat = 0.512969592317;
    tmp_msg_0.lon = 0.0395559899668;
    tmp_msg_0.z = 0.965853051725;
    tmp_msg_0.z_units = 108U;
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
    msg.setTimeStamp(0.814604446785);
    msg.setSource(14853U);
    msg.setSourceEntity(67U);
    msg.setDestination(20935U);
    msg.setDestinationEntity(137U);
    msg.op = 113U;

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
    msg.setTimeStamp(0.963118775817);
    msg.setSource(33531U);
    msg.setSourceEntity(23U);
    msg.setDestination(39174U);
    msg.setDestinationEntity(205U);
    msg.value = 0.640159661459;
    msg.type = 198U;

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
    msg.setTimeStamp(0.624517464217);
    msg.setSource(10104U);
    msg.setSourceEntity(254U);
    msg.setDestination(2617U);
    msg.setDestinationEntity(99U);
    msg.value = 0.637099811727;
    msg.type = 96U;

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
    msg.setTimeStamp(0.467986373288);
    msg.setSource(43199U);
    msg.setSourceEntity(170U);
    msg.setDestination(45686U);
    msg.setDestinationEntity(93U);
    msg.value = 0.25738506834;
    msg.type = 84U;

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
    msg.setTimeStamp(0.522137431814);
    msg.setSource(37758U);
    msg.setSourceEntity(183U);
    msg.setDestination(7558U);
    msg.setDestinationEntity(158U);
    msg.value = 0.362982021152;

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
    msg.setTimeStamp(0.105985496417);
    msg.setSource(51710U);
    msg.setSourceEntity(242U);
    msg.setDestination(35418U);
    msg.setDestinationEntity(131U);
    msg.value = 0.799008677437;

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
    msg.setTimeStamp(0.962540495718);
    msg.setSource(21637U);
    msg.setSourceEntity(115U);
    msg.setDestination(41398U);
    msg.setDestinationEntity(106U);
    msg.value = 0.0194164682492;

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
    msg.setTimeStamp(0.355810427359);
    msg.setSource(17529U);
    msg.setSourceEntity(109U);
    msg.setDestination(23184U);
    msg.setDestinationEntity(86U);
    msg.timestamp_last_service = 0.78462608268;
    msg.time_next_service = 0.091214744326;
    msg.time_motor_next_service = 0.654785860672;
    msg.time_idle_ground = 0.355893295943;
    msg.time_idle_air = 0.29156858225;
    msg.time_idle_water = 0.947856645003;
    msg.time_idle_underwater = 0.37889375409;
    msg.time_idle_unknown = 0.662740137682;
    msg.time_motor_ground = 0.0185948520459;
    msg.time_motor_air = 0.255571593414;
    msg.time_motor_water = 0.0223867176179;
    msg.time_motor_underwater = 0.64792852245;
    msg.time_motor_unknown = 0.995035015191;
    msg.rpm_min = 5297;
    msg.rpm_max = -26340;
    msg.depth_max = 0.916979109803;

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
    msg.setTimeStamp(0.903383550247);
    msg.setSource(20163U);
    msg.setSourceEntity(239U);
    msg.setDestination(20848U);
    msg.setDestinationEntity(16U);
    msg.timestamp_last_service = 0.235699466421;
    msg.time_next_service = 0.527309966177;
    msg.time_motor_next_service = 0.27044339533;
    msg.time_idle_ground = 0.154114909201;
    msg.time_idle_air = 0.823205092176;
    msg.time_idle_water = 0.875030165796;
    msg.time_idle_underwater = 0.434997924752;
    msg.time_idle_unknown = 0.164078230335;
    msg.time_motor_ground = 0.278151868787;
    msg.time_motor_air = 0.590755484048;
    msg.time_motor_water = 0.116947449485;
    msg.time_motor_underwater = 0.739112127153;
    msg.time_motor_unknown = 0.641218941308;
    msg.rpm_min = 1581;
    msg.rpm_max = 11223;
    msg.depth_max = 0.41309181567;

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
    msg.setTimeStamp(0.538343193487);
    msg.setSource(54549U);
    msg.setSourceEntity(165U);
    msg.setDestination(56183U);
    msg.setDestinationEntity(173U);
    msg.timestamp_last_service = 0.719363720447;
    msg.time_next_service = 0.739564132026;
    msg.time_motor_next_service = 0.0762209671302;
    msg.time_idle_ground = 0.846607969131;
    msg.time_idle_air = 0.230672419035;
    msg.time_idle_water = 0.179642495844;
    msg.time_idle_underwater = 0.0110561908651;
    msg.time_idle_unknown = 0.743109132077;
    msg.time_motor_ground = 0.887035611194;
    msg.time_motor_air = 0.789521898882;
    msg.time_motor_water = 0.811909900227;
    msg.time_motor_underwater = 0.801471367355;
    msg.time_motor_unknown = 0.0935064604475;
    msg.rpm_min = 3366;
    msg.rpm_max = -5956;
    msg.depth_max = 0.785785547667;

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
    msg.setTimeStamp(0.0223189823749);
    msg.setSource(20807U);
    msg.setSourceEntity(140U);
    msg.setDestination(55503U);
    msg.setDestinationEntity(97U);
    msg.severity = 27U;
    msg.text.assign("HHXWALYUGNRYFXQUNYAREIKDWCOBYSGWUVEHOTIROZLQNFQDPOKSUBMPAGVJEIHLZKYGKERYUUJHEXUACZJDDNYMHQNTENBQDXTJIFGSPZBGZQVDMVVCMNVFZPDPHFIGZBQKJCPMUCNTDJJKGRIGCHJCYIEFTPROPLAXVWQXLREFQLFBHEPBNAXZLOXALSTWSFWVAFTMZJMVYEMTQWBSCLRUMKAXNTGIXWLMIDYOKVDRKB");

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
    msg.setTimeStamp(0.573343789504);
    msg.setSource(1691U);
    msg.setSourceEntity(16U);
    msg.setDestination(12324U);
    msg.setDestinationEntity(117U);
    msg.severity = 49U;
    msg.text.assign("MIMBKGGOAVIBTPSARQEPCCMZFTEOWYYBXPVTWEXEZUEJMDMQZFTEZFXILXFADXOOLONJEDKSGQBYWYKSNLJQJMPRUAVJATSLDRHCFSPJZGJZQAHQNGGDADVRLPHSJGKUUZCLGHFPHUUMBKRIVDWOUPVTGMKQNFLFIXNSUFNVSKYIWCRRSUAJHUAKTHMEEBZJYQLER");

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
    msg.setTimeStamp(0.690896535001);
    msg.setSource(47830U);
    msg.setSourceEntity(43U);
    msg.setDestination(61929U);
    msg.setDestinationEntity(95U);
    msg.severity = 71U;
    msg.text.assign("PDQDJAHFAOZIMGXWKNROOTLVHWWWXGNYFDRHBUXHGCGZESQKSRNBJEEPEIOTQUWYJDBTLOXKDBQBGFBNYNKMCUQPFVGOIRLUHMXRONALIZISWTURMVJQHQRTYJFMAEMPKVJVS");

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
    msg.setTimeStamp(0.339434769921);
    msg.setSource(49000U);
    msg.setSourceEntity(115U);
    msg.setDestination(21528U);
    msg.setDestinationEntity(201U);
    msg.channel = -37;
    msg.value = 1103788645;
    msg.gain = 219U;

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
    msg.setTimeStamp(0.952959742872);
    msg.setSource(29971U);
    msg.setSourceEntity(127U);
    msg.setDestination(4681U);
    msg.setDestinationEntity(124U);
    msg.channel = -44;
    msg.value = 1331716957;
    msg.gain = 207U;

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
    msg.setTimeStamp(0.140653753742);
    msg.setSource(62842U);
    msg.setSourceEntity(223U);
    msg.setDestination(53236U);
    msg.setDestinationEntity(196U);
    msg.channel = -23;
    msg.value = 1286322324;
    msg.gain = 136U;

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
    msg.setTimeStamp(0.485534885596);
    msg.setSource(1238U);
    msg.setSourceEntity(197U);
    msg.setDestination(34226U);
    msg.setDestinationEntity(252U);
    msg.ch01 = 0.807915564341;
    msg.ch02 = 0.984418764695;
    msg.ch03 = 0.992458097556;
    msg.ch04 = 0.553693666193;
    msg.ch05 = 0.954538620809;
    msg.ch06 = 0.892088221957;
    msg.ch07 = 0.660343445824;
    msg.ch08 = 0.0617303936797;
    msg.ch09 = 0.627647136288;
    msg.ch10 = 0.189778605285;
    msg.ch11 = 0.725122570095;
    msg.ch12 = 0.702418549169;
    msg.ch13 = 0.287362724648;
    msg.ch14 = 0.319702296289;
    msg.ch15 = 0.152459393106;
    msg.ch16 = 0.253135123431;

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
    msg.setTimeStamp(0.566303642587);
    msg.setSource(39245U);
    msg.setSourceEntity(143U);
    msg.setDestination(10868U);
    msg.setDestinationEntity(5U);
    msg.ch01 = 0.129424175583;
    msg.ch02 = 0.876133068537;
    msg.ch03 = 0.311829465239;
    msg.ch04 = 0.801033245859;
    msg.ch05 = 0.596434108446;
    msg.ch06 = 0.40044000233;
    msg.ch07 = 0.635056321054;
    msg.ch08 = 0.0631546576178;
    msg.ch09 = 0.627914258361;
    msg.ch10 = 0.183992020364;
    msg.ch11 = 0.411377450271;
    msg.ch12 = 0.111010688875;
    msg.ch13 = 0.639061361735;
    msg.ch14 = 0.443963488551;
    msg.ch15 = 0.751840259108;
    msg.ch16 = 0.886804219031;

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
    msg.setTimeStamp(0.537585021749);
    msg.setSource(1084U);
    msg.setSourceEntity(21U);
    msg.setDestination(20301U);
    msg.setDestinationEntity(117U);
    msg.ch01 = 0.992239420048;
    msg.ch02 = 0.230704280629;
    msg.ch03 = 0.353712877182;
    msg.ch04 = 0.614411879578;
    msg.ch05 = 0.397795876901;
    msg.ch06 = 0.753129287456;
    msg.ch07 = 0.326501356807;
    msg.ch08 = 0.616336422778;
    msg.ch09 = 0.71005845535;
    msg.ch10 = 0.525374934467;
    msg.ch11 = 0.440108793316;
    msg.ch12 = 0.55634340571;
    msg.ch13 = 0.864699840955;
    msg.ch14 = 0.648991768379;
    msg.ch15 = 0.967337843799;
    msg.ch16 = 0.435248922305;

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
    msg.setTimeStamp(0.609722626749);
    msg.setSource(31396U);
    msg.setSourceEntity(228U);
    msg.setDestination(23978U);
    msg.setDestinationEntity(189U);
    msg.time = 0.385367189094;
    msg.ang = 0.509909573578;

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
    msg.setTimeStamp(0.249718943049);
    msg.setSource(55503U);
    msg.setSourceEntity(130U);
    msg.setDestination(1170U);
    msg.setDestinationEntity(206U);
    msg.time = 0.55829332732;
    msg.ang = 0.353339601076;

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
    msg.setTimeStamp(0.191328415354);
    msg.setSource(8988U);
    msg.setSourceEntity(183U);
    msg.setDestination(14029U);
    msg.setDestinationEntity(163U);
    msg.time = 0.0619581272454;
    msg.ang = 0.806727398459;

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
    msg.setTimeStamp(0.863784146336);
    msg.setSource(41265U);
    msg.setSourceEntity(1U);
    msg.setDestination(18359U);
    msg.setDestinationEntity(79U);
    msg.value = 0.852402289318;

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
    msg.setTimeStamp(0.986346257317);
    msg.setSource(59311U);
    msg.setSourceEntity(25U);
    msg.setDestination(18603U);
    msg.setDestinationEntity(18U);
    msg.value = 0.715620544362;

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
    msg.setTimeStamp(0.11673559616);
    msg.setSource(19976U);
    msg.setSourceEntity(172U);
    msg.setDestination(60230U);
    msg.setDestinationEntity(92U);
    msg.value = 0.0470008408338;

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
    msg.setTimeStamp(0.750763638212);
    msg.setSource(10070U);
    msg.setSourceEntity(158U);
    msg.setDestination(58789U);
    msg.setDestinationEntity(92U);
    msg.value = 0.128624100028;

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
    msg.setTimeStamp(0.738748441882);
    msg.setSource(17152U);
    msg.setSourceEntity(100U);
    msg.setDestination(29416U);
    msg.setDestinationEntity(78U);
    msg.value = 0.772684275464;

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
    msg.setTimeStamp(0.5534306328);
    msg.setSource(9623U);
    msg.setSourceEntity(27U);
    msg.setDestination(42509U);
    msg.setDestinationEntity(45U);
    msg.value = 0.111364051296;

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
    msg.setTimeStamp(0.686014045254);
    msg.setSource(56602U);
    msg.setSourceEntity(54U);
    msg.setDestination(16596U);
    msg.setDestinationEntity(76U);
    msg.value = 0.88231159512;

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
    msg.setTimeStamp(0.207661907055);
    msg.setSource(34914U);
    msg.setSourceEntity(209U);
    msg.setDestination(36761U);
    msg.setDestinationEntity(188U);
    msg.value = 0.0255240285038;

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
    msg.setTimeStamp(0.16019422025);
    msg.setSource(48876U);
    msg.setSourceEntity(10U);
    msg.setDestination(34342U);
    msg.setDestinationEntity(192U);
    msg.value = 0.122716974804;

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
    msg.setTimeStamp(0.631748778867);
    msg.setSource(54576U);
    msg.setSourceEntity(123U);
    msg.setDestination(2315U);
    msg.setDestinationEntity(8U);
    msg.l2 = -17;
    msg.l3 = -62;
    msg.iridium = -47;
    msg.modem = -103;
    msg.pumps = -73;
    msg.vhf = -123;

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
    msg.setTimeStamp(0.757800828582);
    msg.setSource(10479U);
    msg.setSourceEntity(247U);
    msg.setDestination(24486U);
    msg.setDestinationEntity(143U);
    msg.l2 = 63;
    msg.l3 = 101;
    msg.iridium = 13;
    msg.modem = -113;
    msg.pumps = 74;
    msg.vhf = -85;

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
    msg.setTimeStamp(0.842254641755);
    msg.setSource(34655U);
    msg.setSourceEntity(4U);
    msg.setDestination(10478U);
    msg.setDestinationEntity(81U);
    msg.l2 = 0;
    msg.l3 = 48;
    msg.iridium = -116;
    msg.modem = 70;
    msg.pumps = 3;
    msg.vhf = -83;

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
    msg.setTimeStamp(0.967066689347);
    msg.setSource(38590U);
    msg.setSourceEntity(195U);
    msg.setDestination(37819U);
    msg.setDestinationEntity(242U);
    msg.angle = 0.105226071327;
    msg.reference.assign("VENEAXSPUPIYSHBVRUQWKQMCNAXIGYBJGJGGKLIWVENKWFMTZYUEECOYMFEOEVKTVFHSVHACKYNXTXKDFMQM");
    msg.speed = 0.623817937793;

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
    msg.setTimeStamp(0.520734104117);
    msg.setSource(26657U);
    msg.setSourceEntity(247U);
    msg.setDestination(48564U);
    msg.setDestinationEntity(27U);
    msg.angle = 0.480691820251;
    msg.reference.assign("XZTETXNQODLRLJRUXAKOODSC");
    msg.speed = 0.405261772121;

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
    msg.setTimeStamp(0.629639230528);
    msg.setSource(14403U);
    msg.setSourceEntity(60U);
    msg.setDestination(26574U);
    msg.setDestinationEntity(3U);
    msg.angle = 0.0215438675859;
    msg.reference.assign("KBCIYCYGLLJFMQQNHNRXSXVUOPPMMHWYTCFQJ");
    msg.speed = 0.869723736276;

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
    msg.setTimeStamp(0.683024503785);
    msg.setSource(64155U);
    msg.setSourceEntity(5U);
    msg.setDestination(50818U);
    msg.setDestinationEntity(191U);
    msg.angle = 0.289963954601;
    msg.direction.assign("VJJPLAKPTWFZSTT");
    msg.speed = 0.788106938349;

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
    msg.setTimeStamp(0.740298624722);
    msg.setSource(29537U);
    msg.setSourceEntity(63U);
    msg.setDestination(20119U);
    msg.setDestinationEntity(200U);
    msg.angle = 0.867284090921;
    msg.direction.assign("RHUVTWGUQLXIPFBPKBHKWAOLUREFQPVNASGQDQSLWUFYQCJMQKGCSSCSBGLAQSXKWUDYBJTHTVZMORDITXKMLGDEJXVLGTEQWCFHDQOWWPJEYZWGLERPHBMMFQUI");
    msg.speed = 0.925672753719;

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
    msg.setTimeStamp(0.936780162477);
    msg.setSource(22944U);
    msg.setSourceEntity(216U);
    msg.setDestination(64604U);
    msg.setDestinationEntity(91U);
    msg.angle = 0.718468572763;
    msg.direction.assign("ZZHBRYXMYBLMXFRMFOIJGFNADQYSLHBZUSSOHWWUOISASXLGJ");
    msg.speed = 0.245906551309;

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

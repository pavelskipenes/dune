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
// IMC XML MD5: 0a76bfc0317d1fc588b25a655365160f                            *
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
    msg.setTimeStamp(0.0122601736174);
    msg.setSource(41848U);
    msg.setSourceEntity(115U);
    msg.setDestination(29592U);
    msg.setDestinationEntity(146U);
    msg.state = 235U;
    msg.flags = 7U;
    msg.description.assign("QOPQFADVKAUHGKFRXTPNKLUPKJZWIMSZUOTFBPDAFDJMLWTFPBWTOBUNLFSZEOBTIHJWRAGEZBNUNGVRTYWGEXVDCGDGAWDBSVPJUQYTZNYXVSQDQSJYCCDVRETFNQHZCVPYSRMMY");

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
    msg.setTimeStamp(0.388149013283);
    msg.setSource(18481U);
    msg.setSourceEntity(62U);
    msg.setDestination(59840U);
    msg.setDestinationEntity(227U);
    msg.state = 251U;
    msg.flags = 43U;
    msg.description.assign("CYHYFUDADTDFRREAVYIFZAGNQDBKELQKVRLVTEOKAVCHTJBVPELEBDBNGXGUKQLNYWNOSIUIHJFSTIFHIQJMUHTEYMUEKOFCSFRHLVIWQQUOTGBQBRAJKITVEMEVGXCZCNPDGZDQLZKXIYRGWOBWMIUDDDASKANMCFZCVTUWNXSJTWLZ");

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
    msg.setTimeStamp(0.57211464397);
    msg.setSource(41800U);
    msg.setSourceEntity(14U);
    msg.setDestination(52089U);
    msg.setDestinationEntity(9U);
    msg.state = 241U;
    msg.flags = 134U;
    msg.description.assign("UITERZUPVPRHCPJWJVWUWSAXYCGJKQXTWVEPMBLBOCWQLREITSMZOSGXGXFSKALFVZCJBHAYUZFLQRDMINZEBROWJNTDUALJGORKQLIGGKPFDJVKCOAJYIQMNMWQNUXVHTOGUKYKCEUHNLWZMPBCHOZYUSBBOWGXB");

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
    msg.setTimeStamp(0.48501703125);
    msg.setSource(52944U);
    msg.setSourceEntity(102U);
    msg.setDestination(21993U);
    msg.setDestinationEntity(41U);

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
    msg.setTimeStamp(0.361193741092);
    msg.setSource(45704U);
    msg.setSourceEntity(178U);
    msg.setDestination(54350U);
    msg.setDestinationEntity(59U);

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
    msg.setTimeStamp(0.127609325941);
    msg.setSource(39149U);
    msg.setSourceEntity(238U);
    msg.setDestination(37301U);
    msg.setDestinationEntity(131U);

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
    msg.setTimeStamp(0.588076527135);
    msg.setSource(27526U);
    msg.setSourceEntity(254U);
    msg.setDestination(31276U);
    msg.setDestinationEntity(176U);
    msg.id = 2U;
    msg.label.assign("FWGFWUOYVZQPVMCRYHFIWUOMJYEQCDJYNANHXXGJVMGWKNCDQADZNNLLYIBUBYUAOUKGAYZMX");
    msg.component.assign("IUEOSAQWXGYIWQFLPQKLDAVJKUKTWYLFOBXVJMXJWGBETSPSPDTNGYSWMUCLTGVURMCQNDDUKTDRAUQLKBBMIJFTNODVZXYEBHNXBQKAZDZCAWMFMFBJDVHPHBVRLIBZFOHREHFEGIJSCHVEVRNRQGXCPWJPWMEWCKCFPQEIGNQLOMJSLSY");
    msg.act_time = 35150U;
    msg.deact_time = 61369U;

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
    msg.setTimeStamp(0.50908420343);
    msg.setSource(40858U);
    msg.setSourceEntity(101U);
    msg.setDestination(7400U);
    msg.setDestinationEntity(38U);
    msg.id = 174U;
    msg.label.assign("QBXVXACSTUOGZAXEFIFBABVNWSJXVJSZOGRJPGEBESOVGBERRHLYJLXWBUFEVKWPIVDJYAHEBUFUFVQQNHWFMHKVEPKUWZJMOWOIDSLOCJINLYPMKDIRVYGFLACMRMMKRTCNJBQNPKQRZPNEUCXKPANGDMCHKDTZNXHTXUP");
    msg.component.assign("KGYQIDGHWYZUIUQDESHZQRCNZCBOFMLCUYNTIBUCSETXWKEMZZVABJIDYILORGGUVETAMPPCBAXWXPTSUVFPCHFSTNWQNOCQVIQLZRKNYETOQGCTDHPKLOGJNMRJJMREVEOJIYQWJZAUHDLWZWZHVVXTPAWRHSXVRBASJQNVCIFUOMWAXYEDBGIYFLOMNDPXGHMKIUYKOHDHXJSYCKNEBPWQXA");
    msg.act_time = 64082U;
    msg.deact_time = 31443U;

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
    msg.setTimeStamp(0.580395510671);
    msg.setSource(38826U);
    msg.setSourceEntity(74U);
    msg.setDestination(18738U);
    msg.setDestinationEntity(3U);
    msg.id = 252U;
    msg.label.assign("TJTKLJELKNHJYKMCIFCGOPXIPRARBQEVSMPQDFSGGGEKHHUZFOBOETMAPMDVAPZTKBKYFUAJGRCDVWYWPZEVWCFOQZANFNVSAOG");
    msg.component.assign("DXMWJXWRAYEOBPBOKGH");
    msg.act_time = 32600U;
    msg.deact_time = 36115U;

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
    msg.setTimeStamp(0.642063756413);
    msg.setSource(54446U);
    msg.setSourceEntity(62U);
    msg.setDestination(18976U);
    msg.setDestinationEntity(45U);
    msg.id = 134U;

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
    msg.setTimeStamp(0.402369745411);
    msg.setSource(31031U);
    msg.setSourceEntity(120U);
    msg.setDestination(19197U);
    msg.setDestinationEntity(61U);
    msg.id = 193U;

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
    msg.setTimeStamp(0.253155164402);
    msg.setSource(19299U);
    msg.setSourceEntity(95U);
    msg.setDestination(3188U);
    msg.setDestinationEntity(50U);
    msg.id = 106U;

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
    msg.setTimeStamp(0.685875861491);
    msg.setSource(6092U);
    msg.setSourceEntity(178U);
    msg.setDestination(59928U);
    msg.setDestinationEntity(119U);
    msg.op = 195U;
    msg.list.assign("MAWEYCQTXMFWXMHSBJSKKTQTZZJPLITHWLLBLAEKFYOWUNCYILOXHGBHSSYTJKRTMXFPNGGFKNITONCIVPVJHSGTBBUZPYMZCUAACLCMERFXQKFVNOBUAUDDOKXZPXPITJUJDXIDJGW");

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
    msg.setTimeStamp(0.348523687586);
    msg.setSource(31808U);
    msg.setSourceEntity(59U);
    msg.setDestination(30196U);
    msg.setDestinationEntity(20U);
    msg.op = 206U;
    msg.list.assign("NFNJQAPZRUGRGDNHABSVCLHMREZMPKZRLMTIMCDZDYWSTJSMAPQCXLZGBAROMOJWCFVXAIKBSTYKKLJUXNGYTCYMAYFCHW");

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
    msg.setTimeStamp(0.291477762214);
    msg.setSource(63600U);
    msg.setSourceEntity(34U);
    msg.setDestination(45617U);
    msg.setDestinationEntity(37U);
    msg.op = 27U;
    msg.list.assign("WSIUKEPOLVEECTLUXPJPJNMVTJOPLYTQNYOMHWVGZJAHUUSXNHAENTVTNCHSDWKVAXHDAQBSCJOKELFFLHNXQODUPPVDRMYWMWXAKZFOKLRGQVYRIGOFQRLBTHXSBQDEZJEBYYDXHBNGTLYWFNVXGKAMQUUKEVOFQDH");

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
    msg.setTimeStamp(0.315418815038);
    msg.setSource(42408U);
    msg.setSourceEntity(133U);
    msg.setDestination(37978U);
    msg.setDestinationEntity(178U);
    msg.value = 49U;

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
    msg.setTimeStamp(0.241744673512);
    msg.setSource(28980U);
    msg.setSourceEntity(187U);
    msg.setDestination(36938U);
    msg.setDestinationEntity(73U);
    msg.value = 213U;

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
    msg.setTimeStamp(0.915340442993);
    msg.setSource(45985U);
    msg.setSourceEntity(61U);
    msg.setDestination(30672U);
    msg.setDestinationEntity(8U);
    msg.value = 185U;

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
    msg.setTimeStamp(0.36270436484);
    msg.setSource(9411U);
    msg.setSourceEntity(2U);
    msg.setDestination(51921U);
    msg.setDestinationEntity(221U);
    msg.consumer.assign("KOESWXDXSOXQWCFJNCHDKFOTSYAVPT");
    msg.message_id = 11622U;

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
    msg.setTimeStamp(0.214978921472);
    msg.setSource(19415U);
    msg.setSourceEntity(237U);
    msg.setDestination(15526U);
    msg.setDestinationEntity(183U);
    msg.consumer.assign("JCUFQUNKWWVNHN");
    msg.message_id = 10583U;

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
    msg.setTimeStamp(0.341213187443);
    msg.setSource(17322U);
    msg.setSourceEntity(208U);
    msg.setDestination(43028U);
    msg.setDestinationEntity(67U);
    msg.consumer.assign("DAFVYJWDSMSHORAUALVFPGBHXOPVKSQZKBCCZSYOYPBXSWKAVVQNXNGXFCWOIVNYMWTFPGUKBNCTBNZHRLKMBQSWVKXJPTENGUNVBZEWODMAHIUAQCICEGDWKRBULIXLJQJLHJFIACIQFZPRDMPMTQRQJDKDLBLXHGEUOEHKMAXOFFEHRCOPPOVINWW");
    msg.message_id = 21019U;

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
    msg.setTimeStamp(0.366146933273);
    msg.setSource(35398U);
    msg.setSourceEntity(229U);
    msg.setDestination(57612U);
    msg.setDestinationEntity(74U);
    msg.type = 11U;

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
    msg.setTimeStamp(0.0953222793255);
    msg.setSource(6753U);
    msg.setSourceEntity(212U);
    msg.setDestination(11131U);
    msg.setDestinationEntity(32U);
    msg.type = 238U;

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
    msg.setTimeStamp(0.805025647426);
    msg.setSource(17160U);
    msg.setSourceEntity(67U);
    msg.setDestination(23159U);
    msg.setDestinationEntity(216U);
    msg.type = 212U;

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
    msg.setTimeStamp(0.496444338277);
    msg.setSource(34973U);
    msg.setSourceEntity(97U);
    msg.setDestination(17894U);
    msg.setDestinationEntity(73U);
    msg.op = 216U;

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
    msg.setTimeStamp(0.183921883176);
    msg.setSource(31340U);
    msg.setSourceEntity(76U);
    msg.setDestination(15523U);
    msg.setDestinationEntity(8U);
    msg.op = 113U;

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
    msg.setTimeStamp(0.96934930117);
    msg.setSource(42397U);
    msg.setSourceEntity(107U);
    msg.setDestination(6478U);
    msg.setDestinationEntity(65U);
    msg.op = 134U;

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
    msg.setTimeStamp(0.292138497067);
    msg.setSource(38381U);
    msg.setSourceEntity(11U);
    msg.setDestination(37563U);
    msg.setDestinationEntity(138U);
    msg.total_steps = 43U;
    msg.step_number = 71U;
    msg.step.assign("UMOPJBXVSGGEZSOSVFXHMCJRVEMEZYZRCNAIIPFJHTHKLWFJYBQKDIIGLCEDFRYLXMMZAFBOUQTKVWCBJHOIPHYIPQLXSRBWUJRSUNIXSTSENEDMHPFBOQUZJMTDFZCGLUURSBSDNUPLYLEZGGKVAPOIGQQGYIMKCVANONHFWHQLUKQGXPHNZVOLVTWDFTXZXJGQMYBACDEDKEARTYWPITCADJV");
    msg.flags = 86U;

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
    msg.setTimeStamp(0.684018404572);
    msg.setSource(9920U);
    msg.setSourceEntity(87U);
    msg.setDestination(38707U);
    msg.setDestinationEntity(56U);
    msg.total_steps = 46U;
    msg.step_number = 47U;
    msg.step.assign("YTGQUGJISLTXCQYBKQKNPALPMJMBNZGSJGQHLFWJQXLTOJEYCIJUHUUCSMEIOCIZLKJCVXGUJLYIDMTASPSOARICBGPVFWBOKEFKVPEUQUHOXHREQBTMNWHOLCVDCCNXMZSWADXHXNUKCZSNVKXMEPQEGRISSLWLAWUZDFAUKTVD");
    msg.flags = 28U;

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
    msg.setTimeStamp(0.0722578493598);
    msg.setSource(14346U);
    msg.setSourceEntity(238U);
    msg.setDestination(10982U);
    msg.setDestinationEntity(183U);
    msg.total_steps = 1U;
    msg.step_number = 230U;
    msg.step.assign("ROELAWHSBTUJUZDFUVJUVFKSODUDLWUPGLOKQWBRLQHLBLERPNAPPPCSMOOPUKDVPMYZLGFSIXFQIIVPJGEOZYXXNBBCMFWCAEHFCOCZBHNGHYXKDZHPVKHUAEQBXAXZMPJXECAZWYNROSYAKVMRUYLATJXRETDCWIRQGCXDHIKYYMGCSIQNMJWHSTLBYLXWSGJVRTZGTFDSICZMSVNKRNDEOQNNFDTWQGJFMTUBAMQJTVJGWHIAIFNE");
    msg.flags = 8U;

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
    msg.setTimeStamp(0.544930675162);
    msg.setSource(11678U);
    msg.setSourceEntity(9U);
    msg.setDestination(6975U);
    msg.setDestinationEntity(130U);
    msg.state = 64U;
    msg.error.assign("HJYUSOKJVDRYZQWGGVLEARKJPVKELXDKVEGBLHGILFOBMNVHSCSTYZEBHJKRAQVCQQIFFZUQMEIDUEGR");

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
    msg.setTimeStamp(0.392479256447);
    msg.setSource(53287U);
    msg.setSourceEntity(44U);
    msg.setDestination(51592U);
    msg.setDestinationEntity(178U);
    msg.state = 5U;
    msg.error.assign("KPFMZMQOHCFVQIWNRLCZUXYSODUJLKXBEVZHBURSRLTMOHMWNABJZKWQQHIECSTDCSWJMRMEPDJEHEFKGZPKYYQKPKDANCULTTIXERNHJFVPTGDFVDUHNQZYOUZSLJILXGMWTXSXDGDEOFNTEBGLIBMVOZWIRIAVWLEFRJVQFYKSKMAHYZGYXJATTPAAVPPSSXFQWVGPBDLCXSG");

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
    msg.setTimeStamp(0.536802755138);
    msg.setSource(25573U);
    msg.setSourceEntity(132U);
    msg.setDestination(28812U);
    msg.setDestinationEntity(73U);
    msg.state = 132U;
    msg.error.assign("TBEUCSPAKLGXMWROVUOZMQTJGFIAFQQPQANFQJKFPBVUMEKBIVWUYKRBOYCGXYMFWAFNMPYXMYOLVCJWDVJHWKNWSTBORVNLQLIKHYUHVVBNMDLZRUMTXGMFNDH");

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
    msg.setTimeStamp(0.643165909681);
    msg.setSource(24518U);
    msg.setSourceEntity(218U);
    msg.setDestination(29562U);
    msg.setDestinationEntity(160U);

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
    msg.setTimeStamp(0.12889723722);
    msg.setSource(61569U);
    msg.setSourceEntity(95U);
    msg.setDestination(52944U);
    msg.setDestinationEntity(186U);

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
    msg.setTimeStamp(0.0999478418254);
    msg.setSource(37091U);
    msg.setSourceEntity(98U);
    msg.setDestination(58200U);
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
    msg.setTimeStamp(0.831853044381);
    msg.setSource(26480U);
    msg.setSourceEntity(72U);
    msg.setDestination(21579U);
    msg.setDestinationEntity(138U);
    msg.op = 162U;
    msg.speed_min = 0.76415150451;
    msg.speed_max = 0.781558036534;
    msg.long_accel = 0.937884441977;
    msg.alt_max_msl = 0.87212527947;
    msg.dive_fraction_max = 0.220390137914;
    msg.climb_fraction_max = 0.87185669091;
    msg.bank_max = 0.210805819397;
    msg.p_max = 0.158468239935;
    msg.pitch_min = 0.459158731165;
    msg.pitch_max = 0.638174648169;
    msg.q_max = 0.743547551765;
    msg.g_min = 0.483437415994;
    msg.g_max = 0.532839441345;
    msg.g_lat_max = 0.45630766654;
    msg.rpm_min = 0.679390298794;
    msg.rpm_max = 0.122953500092;
    msg.rpm_rate_max = 0.330067894788;

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
    msg.setTimeStamp(0.768592858597);
    msg.setSource(63673U);
    msg.setSourceEntity(230U);
    msg.setDestination(23665U);
    msg.setDestinationEntity(79U);
    msg.op = 143U;
    msg.speed_min = 0.294169930387;
    msg.speed_max = 0.495199733495;
    msg.long_accel = 0.167114393683;
    msg.alt_max_msl = 0.0575719161276;
    msg.dive_fraction_max = 0.570148767764;
    msg.climb_fraction_max = 0.223414605894;
    msg.bank_max = 0.863682115317;
    msg.p_max = 0.228439758494;
    msg.pitch_min = 0.749937629692;
    msg.pitch_max = 0.686267178959;
    msg.q_max = 0.0223328334163;
    msg.g_min = 0.421798441869;
    msg.g_max = 0.0718015826263;
    msg.g_lat_max = 0.692703383496;
    msg.rpm_min = 0.371604728713;
    msg.rpm_max = 0.438375381508;
    msg.rpm_rate_max = 0.209944454684;

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
    msg.setTimeStamp(0.19338537538);
    msg.setSource(38509U);
    msg.setSourceEntity(66U);
    msg.setDestination(33560U);
    msg.setDestinationEntity(187U);
    msg.op = 126U;
    msg.speed_min = 0.259134326873;
    msg.speed_max = 0.0277976598752;
    msg.long_accel = 0.973748739515;
    msg.alt_max_msl = 0.032464920716;
    msg.dive_fraction_max = 0.385204665399;
    msg.climb_fraction_max = 0.592804817289;
    msg.bank_max = 0.501386636675;
    msg.p_max = 0.0591414338792;
    msg.pitch_min = 0.850579750999;
    msg.pitch_max = 0.712669182401;
    msg.q_max = 0.973459668736;
    msg.g_min = 0.635578461372;
    msg.g_max = 0.536085559385;
    msg.g_lat_max = 0.964534700178;
    msg.rpm_min = 0.222099458994;
    msg.rpm_max = 0.185221723656;
    msg.rpm_rate_max = 0.668544806763;

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
    msg.setTimeStamp(0.0280574711612);
    msg.setSource(22617U);
    msg.setSourceEntity(141U);
    msg.setDestination(36750U);
    msg.setDestinationEntity(157U);

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
    msg.setTimeStamp(0.135742017989);
    msg.setSource(19878U);
    msg.setSourceEntity(120U);
    msg.setDestination(8529U);
    msg.setDestinationEntity(142U);

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
    msg.setTimeStamp(0.974960408598);
    msg.setSource(22660U);
    msg.setSourceEntity(99U);
    msg.setDestination(6554U);
    msg.setDestinationEntity(74U);
    IMC::PowerSettings tmp_msg_0;
    tmp_msg_0.l2 = 97;
    tmp_msg_0.l3 = -1;
    tmp_msg_0.iridium = -70;
    tmp_msg_0.modem = -21;
    tmp_msg_0.pumps = 26;
    tmp_msg_0.vhf = -90;
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
    msg.setTimeStamp(0.589048840595);
    msg.setSource(11175U);
    msg.setSourceEntity(198U);
    msg.setDestination(36486U);
    msg.setDestinationEntity(178U);
    msg.lat = 0.758765835041;
    msg.lon = 0.87908276801;
    msg.height = 0.0830585400714;
    msg.x = 0.897470746532;
    msg.y = 0.78621458452;
    msg.z = 0.197081774729;
    msg.phi = 0.203897092002;
    msg.theta = 0.607100445538;
    msg.psi = 0.482852765334;
    msg.u = 0.816979355588;
    msg.v = 0.272812247628;
    msg.w = 0.7011674435;
    msg.p = 0.74281841307;
    msg.q = 0.825174815306;
    msg.r = 0.382001154382;
    msg.svx = 0.039450403569;
    msg.svy = 0.266711903193;
    msg.svz = 0.00911884911906;

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
    msg.setTimeStamp(0.842741681644);
    msg.setSource(29577U);
    msg.setSourceEntity(165U);
    msg.setDestination(12496U);
    msg.setDestinationEntity(22U);
    msg.lat = 0.402995533644;
    msg.lon = 0.533429732293;
    msg.height = 0.00173991528364;
    msg.x = 0.0107189007456;
    msg.y = 0.699615378333;
    msg.z = 0.913920467406;
    msg.phi = 0.788684927782;
    msg.theta = 0.672037388888;
    msg.psi = 0.994048861693;
    msg.u = 0.0162157145218;
    msg.v = 0.510138678905;
    msg.w = 0.929578098101;
    msg.p = 0.133571869986;
    msg.q = 0.362466135595;
    msg.r = 0.357893226214;
    msg.svx = 0.521922139151;
    msg.svy = 0.963253355751;
    msg.svz = 0.481319313291;

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
    msg.setTimeStamp(0.428430529866);
    msg.setSource(25158U);
    msg.setSourceEntity(209U);
    msg.setDestination(19880U);
    msg.setDestinationEntity(236U);
    msg.lat = 0.945359031431;
    msg.lon = 0.855009574925;
    msg.height = 0.271600409701;
    msg.x = 0.299187911842;
    msg.y = 0.0389251075621;
    msg.z = 0.0100312126337;
    msg.phi = 0.398367023987;
    msg.theta = 0.0920031582068;
    msg.psi = 0.0921995237548;
    msg.u = 0.496329898265;
    msg.v = 0.475977842721;
    msg.w = 0.597383355122;
    msg.p = 0.935473928137;
    msg.q = 0.523116139934;
    msg.r = 0.00743634492873;
    msg.svx = 0.0127417918433;
    msg.svy = 0.681425948526;
    msg.svz = 0.808830443253;

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
    msg.setTimeStamp(0.0681162008477);
    msg.setSource(59245U);
    msg.setSourceEntity(102U);
    msg.setDestination(48636U);
    msg.setDestinationEntity(189U);
    msg.op = 47U;
    msg.entities.assign("FIAAKWJPDFHNOTMXZNCWQXKQCJVDRRLPDTMGSYHSOVKFESSCFPVINZEYLZWTJGMVXVGZJGWQYSVOBPEAORJIIKWACFTGKYPXIQQNCSEMCJTBEXANEKMRTBEWFBCOEYUSIPTZWEBZJDXKSQMVTJ");

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
    msg.setTimeStamp(0.824060389551);
    msg.setSource(59099U);
    msg.setSourceEntity(84U);
    msg.setDestination(33081U);
    msg.setDestinationEntity(48U);
    msg.op = 155U;
    msg.entities.assign("KXQJXCPVAOLRPRUIMCGUYRBFRUWPDIELTESX");

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
    msg.setTimeStamp(0.422275991975);
    msg.setSource(31479U);
    msg.setSourceEntity(154U);
    msg.setDestination(62556U);
    msg.setDestinationEntity(171U);
    msg.op = 73U;
    msg.entities.assign("RFSPLDEOOSAPXTJJYIAZIAQJLLMLWDDPOHABRJRCHADUINKMBWQKZZBYOPUUEEYHHHKWDSAJLGCRLDPFMABZNGWCEWFTQNOJ");

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
    msg.setTimeStamp(0.403509369458);
    msg.setSource(17107U);
    msg.setSourceEntity(243U);
    msg.setDestination(42437U);
    msg.setDestinationEntity(31U);
    msg.type = 238U;
    msg.speed = 24966U;
    const char tmp_msg_0[] = {-7, 72, -12, -76, 88, 56, 116, -98, -16, -25, 101, -120, -117, 54, -107, -9, 1, -38, -61, -45, -76, -118, 122, 37, -89, -91, -88, 55, 42, 54, 118, 3, -52, -16, -26, -68, 14, -39, -46, 64, -35, -117, -73, 35, 0, 15, -69, -120, 78, 33, 90, -2, -95, -24, 105, -35, -83, 74, -40, -60, 3, 83, 53, 9, 34, -57, 41, 7, -82, -100, 69, 94, 35, -88, 16, 47, -79, -20, -20, 123, -19, 30, -80, 67, -98, 3, 13, -89, 44, -18, 106, 10, -40, -24, -105, 20, 49, 4, -96, -124, 71, 66, 42, -11, -59, -122, -115, 60, 20, 2, 30, -79, 98, -88, -94, -26, 93, -67, 23, 123, 19, -61, -75, 58, 41, 46, 33, 104, 33, 20, -35, 69, 82, 85, 11, -31, 52, -47, -115, 117, -43, -92, -74, -108, 87, -91, -99, -54, -61, 102, -7, 54, -50, 97, 11, 90, -53, -127, -10, -13, 47, -91, 116, -81, -117, 54, -75, -99, -38, -11, -14, 83, -7, -71, 4, 9, -6, 73, 115, -9, 55, 18, 30, -68, 47, 57, 64, 96, -110, -110, 11, 10, -63, -46, 86, -30, -108, -99, -53, 122, 62, 21, -1, -59, -123, -116, -17, 62, -41, -12, -11, 101, 108, 72, 67, 126, -28, 27, 41};
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
    msg.setTimeStamp(0.429740940528);
    msg.setSource(16337U);
    msg.setSourceEntity(147U);
    msg.setDestination(18450U);
    msg.setDestinationEntity(174U);
    msg.type = 140U;
    msg.speed = 33739U;
    const char tmp_msg_0[] = {39, -70, 42, 31, 59, 11, 50, -90, 38, -9, -65, -59, 125, 82, -93, 80, -7, -45, -5, -3, 56, 0, 122, 124, 52, 121, 21, 21, -99, -117, 106, -17, -107, 0, 7, -29, 117, -125, 92, -19, 117, 108, 121, -102, 34, 49, -115, 25, -82, -103, 65, -111, 118, 103, 9, -115, 73, 97, 42, 21, 50, 114, 14, 26, 24, -121, 69, -125, -90, -77, -73, -57, -18, -66, 48, -82, 49, 33, -95, -61, -106, 125, 76, -88, 38, 10, -116, 75, 97, 122, 107, 57, -53, -58, -4, -98, 47, -76, 98, -39, -119, 86, -6, -43, -3, 84, 56, 99, -108, 13, 98, 94, 111, -82, -63, -74, 68, 106, 8, -56, -7, -16, -117, 42, 32, -37, 69, 0, 19, -102, -121, -125, -26, -56, -120, 34, -31, -66, 60, -115, -116, 57, 88, 75, -5, -85, -43, 60, -4, -116, -101, 120, 30, 60, 25, -122, -53, 12, -71, -101, 17, -3, -35, 115, 77, -127, -69, -109, -27, -6, -96, 1, -21, 72, -126, 111, 116, 40, -96, -29, 40, 26, 80, -85, 54, -18, 116, 65, 110, 31, 62, 74, 113, 94, -105, -35, -19, -35, 74, 36, -11, -47, -78, 44, -128, 71, -22, 23, 70, 82, 113, -78, 80, -19, -96, 49, -51, 92, -8, 66, 23, 45, -7, -111, 115, -94, -96, 87, 32, -53, 96, 74, 28, -40, -9, -128, -56};
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
    msg.setTimeStamp(0.0218854636604);
    msg.setSource(9515U);
    msg.setSourceEntity(173U);
    msg.setDestination(50039U);
    msg.setDestinationEntity(221U);
    msg.type = 203U;
    msg.speed = 47638U;
    const char tmp_msg_0[] = {-75, -90, -111, 6, 68, 52, -123, 35, 112, 57, -17, 62, 61, 102, -86, 10, 72, 54, 94, -58, 54, 54, -101, -37, -45, -21, -86, -22, -121, 72, 120, -33, -119, -49, 78, 60, 31, -61, -125, 67, 121, -64, 38};
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
    msg.setTimeStamp(0.422466882022);
    msg.setSource(39360U);
    msg.setSourceEntity(34U);
    msg.setDestination(16398U);
    msg.setDestinationEntity(240U);
    msg.op = 206U;
    msg.tas2acc_pgain = 0.913886876851;
    msg.bank2p_pgain = 0.719257852506;

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
    msg.setTimeStamp(0.96397397415);
    msg.setSource(4700U);
    msg.setSourceEntity(163U);
    msg.setDestination(6854U);
    msg.setDestinationEntity(180U);
    msg.op = 128U;
    msg.tas2acc_pgain = 0.458842230578;
    msg.bank2p_pgain = 0.0027579708808;

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
    msg.setTimeStamp(0.308906431537);
    msg.setSource(4808U);
    msg.setSourceEntity(78U);
    msg.setDestination(20580U);
    msg.setDestinationEntity(124U);
    msg.op = 48U;
    msg.tas2acc_pgain = 0.146823791022;
    msg.bank2p_pgain = 0.855883977446;

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
    msg.setTimeStamp(0.725458968252);
    msg.setSource(60270U);
    msg.setSourceEntity(6U);
    msg.setDestination(28040U);
    msg.setDestinationEntity(76U);
    msg.available = 2759009239U;
    msg.value = 174U;

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
    msg.setTimeStamp(0.884312215315);
    msg.setSource(54783U);
    msg.setSourceEntity(69U);
    msg.setDestination(9752U);
    msg.setDestinationEntity(103U);
    msg.available = 2096473215U;
    msg.value = 144U;

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
    msg.setTimeStamp(0.446120114982);
    msg.setSource(27806U);
    msg.setSourceEntity(2U);
    msg.setDestination(45192U);
    msg.setDestinationEntity(94U);
    msg.available = 1386292095U;
    msg.value = 35U;

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
    msg.setTimeStamp(0.290873855493);
    msg.setSource(1700U);
    msg.setSourceEntity(243U);
    msg.setDestination(13595U);
    msg.setDestinationEntity(220U);
    msg.op = 93U;
    msg.snapshot.assign("DESLGGMNDYLCMJPWJKBDTFTJATCRKUYQKEFOGXTMIXZXQFPNRZZSHYHJZIWGFBGWYVOFUDIJBXXCMTSCJODVKOMOEAIOTNFVAYZYPHZBMASLMAJDBJITKEHDZSBVCLUQHZFWPWNKSJPBAXCALHFQKDXSONWKQUAGF");
    IMC::IridiumMsgRx tmp_msg_0;
    tmp_msg_0.origin.assign("NNGGDSAUQXTJMBUTCIPESCIKOAPUJSHLZOIGEEAJFPRDVVODLBQRHGJNYBLUMUJGDCYZOIDCNQERTGYOJLIRTTSDQAYLZPQBXYHRWVWSJGME");
    tmp_msg_0.htime = 0.529177053131;
    tmp_msg_0.lat = 0.35898092376;
    tmp_msg_0.lon = 0.310545102692;
    const char tmp_tmp_msg_0_0[] = {-79, 122, 52, 11, 104, 95, 31, 80, -54, -60, 8, 15, -84, 91, -100, 75, 99, 82, -108, -69, -85, -69, 84, -110, -83, 56, 93, -69, -32, 21, 20, -93, -85, -126, 126, 47, 121, -36, 26, -47, -88, -6, -28, -63, -16, 114, 105, -51, -38, -53, -52, -122, 98, -93, 97, -59, -58, -91, 117, -50, 44, -101, -122, -53, 74, 41, 26, 110, 27, -58, -102, -106, -59, 27, 76, -71, -119, 115, 41, -57, -17, -93, 40, 84, 98, 63, -13, -88, 99, -94, 66, -116, -20, -23, 47, 120, 75, -112, -83, 0, 96, 47, 17, 80, -10, 93, 23, 33, -79, 125, -27, -99, -11, 84, -117, -85, 123, 39, -9, 16, 126, -86, 23, -54, 84, 71, -127, 9, 44, 98, -56, -87, -125, 38, 99, -31, -86, 62, 73, 53, 10, 54, -109, -120, -28, -42, 77, -98, -44, -79, 121, -11, 45, 94, 95, 48, 92, 0, 38, 77, 29, -27, -83, 44, 13, -5, 73, -49, 68, 116, -89, -29, -41, -52, -86, -99, -66, -35, -18, 88, -50, -32, 101, -106, -95, 16, 78, 119, 29, -54, -98, 19, -86, -39, 5, -61, 43, 105, 48, -86, -68, 110, -14, 66, -30, 65, -28, 91, -55, -6, 94, -38, 3, 24, -103, -39, -83, -100, 43, -19, -28, 37, 94, -75, -105, 76, 26, -27, 22, 24, 9, 61, 16, -118, 4, 94, 111, -96};
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
    msg.setTimeStamp(0.528870559695);
    msg.setSource(29427U);
    msg.setSourceEntity(141U);
    msg.setDestination(63606U);
    msg.setDestinationEntity(48U);
    msg.op = 243U;
    msg.snapshot.assign("CFVIQWSWAJQVBUAHLPOHWNHFIAMRBEXXGPJSBXPBYKGYLQPIMGKUPAEMWRQSXCATJDZDTFOMSZEVYXUQPTCSHFKUXJEOFYOMJLOYLHYNOMZEQ");
    IMC::Turbidity tmp_msg_0;
    tmp_msg_0.value = 0.405896577415;
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
    msg.setTimeStamp(0.69061377151);
    msg.setSource(15799U);
    msg.setSourceEntity(165U);
    msg.setDestination(63760U);
    msg.setDestinationEntity(201U);
    msg.op = 60U;
    msg.snapshot.assign("OYCVFAMPQZGTRVKTQXVRYMECGBXNRVFOYJCAUGNEOHSWIJTXTFFLLILTYUDIHBNSUJJSALDEUBVULTTNAPCZDQZPJMEPIYH");
    IMC::SmsTx tmp_msg_0;
    tmp_msg_0.seq = 2080427093U;
    tmp_msg_0.destination.assign("TDOVWQVHTBOACHNJPIWCUJIKAYYXPFGFMBGXIXIPWODHSYRDKEBWAKGWNTBMUJSKH");
    tmp_msg_0.timeout = 11730U;
    const char tmp_tmp_msg_0_0[] = {-38, 61, 10, -26, 41, -118, 7, -102, 111, -16, 79, -60, 72, 125, -18, -60, 79, 93, 54, 85, -70, -120, -87, 80, -115, 50, 115, -20, -90, 92, 115, 26, -79, -68, -70, 31, 26, -66, -100, 56, 18, 34, -49, 1, -95, -30, 86, 69, -72, -18, -92, -4, 112, 28, -119, 64, -105, -58, -53, -5, -24, -115, 11, -107, 96, 100, -6, 32, 109, -116, 1, 123, -108, -126, -97, -74, 1, -6, -104, -80, -101, -59, 29, -127, -41, 117, -118, 74, -44, -110, 111, -110};
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
    msg.setTimeStamp(0.0478940373571);
    msg.setSource(54240U);
    msg.setSourceEntity(118U);
    msg.setDestination(36644U);
    msg.setDestinationEntity(234U);
    msg.op = 250U;
    msg.name.assign("RZBDVWTXIQGQXXIQFBZJNVJCKKWCK");

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
    msg.setTimeStamp(0.540060221349);
    msg.setSource(4497U);
    msg.setSourceEntity(11U);
    msg.setDestination(39620U);
    msg.setDestinationEntity(99U);
    msg.op = 103U;
    msg.name.assign("TZUKRGHWUZMXHEVEEGFAYPQVCYNNTBQOJEFCOXDCLCJBZWJQNPCSAZWILCHDSNYDCLWYYDWGIDBNFDJRWGDTFWMZFKLKZFOYXXGSOBVZSKKTVTYMIOHNJOBSRHSYPVMXRRVWZWLAKBIJFPJEEIEANSGLZVAITGRQMJLZU");

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
    msg.setTimeStamp(0.183231890484);
    msg.setSource(17341U);
    msg.setSourceEntity(197U);
    msg.setDestination(29670U);
    msg.setDestinationEntity(71U);
    msg.op = 111U;
    msg.name.assign("YLSEGSLTLAGTKGTXSOWNTASBTQGMQFCCULFKPYNVXKLJMRUBKPFHNWPMPJLVABUHIPSKSBQEBADMJDCUJGITDVDQADRZCFXOIMROEUEISSLHOPRSNOWRUTVNWDRIKNDEXGWKBDLYTZ");

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
    msg.setTimeStamp(0.584519681182);
    msg.setSource(18242U);
    msg.setSourceEntity(148U);
    msg.setDestination(24964U);
    msg.setDestinationEntity(35U);
    msg.type = 133U;
    msg.htime = 0.70667522376;
    msg.context.assign("DKLXVLYDAZFEKJFTFFBGGNQPPRCGJHIYVEGMZXDEYLBPLABSUBVIZFJZSGSHTSEMNVONUXSPNCDTHWNKHYWQQ");
    msg.text.assign("MJPMUYPRNELZXXEEZAKIKKERNPZYBLNWZDMQNBJFWXGOPSLMETYBRWAATUTUQOXVVURNYTVCRTLYGXVOBIKAJDGEGVAMJILUVGMMQNKWQPIZQACQSBTREPCBPLTQMXPECZKNPYLYVFUWAAFMOHUHRIJSODVHGWDFIHHDSZTDAWXBCCQEHKOWHBRDYXSWSDIPKDOKEKRJBACNQRHOCIDTMVTXILVCOFSUBGGOFNCZJN");

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
    msg.setTimeStamp(0.300505544593);
    msg.setSource(19743U);
    msg.setSourceEntity(190U);
    msg.setDestination(34710U);
    msg.setDestinationEntity(180U);
    msg.type = 155U;
    msg.htime = 0.829396539189;
    msg.context.assign("QMGSLBZCBSWNQHVODFPLKLZN");
    msg.text.assign("FPLETQXLQIUERRYRSRBRDYFCSWTOYCEFUDRGUCIJXLRGPVALKKTBXPSQMWIQ");

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
    msg.setTimeStamp(0.780223406614);
    msg.setSource(2665U);
    msg.setSourceEntity(96U);
    msg.setDestination(20455U);
    msg.setDestinationEntity(251U);
    msg.type = 201U;
    msg.htime = 0.805808534955;
    msg.context.assign("GFFKBWUCWSZFEYEQLXESGWTCPYMFOSCVYAPZXOTUKJCEEOBVOCUHAXQYRYSPGIUMDELNWDGILNAXIAKDROZHKJXQLWTCQIIWFLHGOPFWABDPKMRRPCLHXAVAVBUSZTHOZXJRZNJSJEUMKXVNNWURSFUDBTDIHMRVRTQMJNCPNOWCNVTIQHUBHGEVRLTYLFZJKGXIHNZGPIBEFJBVMJASVYSZGEKYXZAKPDNYPCQMMLWQHGBDJSOBOILTQRQ");
    msg.text.assign("LTQPSOGNDJQSEMAFZAQOOLZSOMSUUBGJJRKQHQWBHLUEYEHYPZUOTHUADRKAXXREQSRYRLSTOIOXDXMVADNXXMDVGLMJJHPPATCGLFWDPFUXEPOVMCCDYWFETWONQPSEKYTUHWFNKHTUFEAZVTLWRZSDIWJCQBGCNGZETIMMPCNNXHFABVNJFKBSIPDTJMWKZBWQLLBIKAFFIKBRIMWZLYRZGYCIXRHIACJC");

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
    msg.setTimeStamp(0.920034063516);
    msg.setSource(61320U);
    msg.setSourceEntity(229U);
    msg.setDestination(30719U);
    msg.setDestinationEntity(151U);
    msg.command = 183U;
    msg.htime = 0.856088423799;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 141U;
    tmp_msg_0.htime = 0.364283563338;
    tmp_msg_0.context.assign("YHHXAFZXYVAUDZFTVDRSJOHCZGCMPVFGAJPWGCWQHKPRCOREUYXSUGTSQCPSCSOTIRBNDFAFUPTTHKIWUHPRV");
    tmp_msg_0.text.assign("APPOBSMPXDUOWQHRBQUFZCAXYTHGXSKMNGIELQDMEUTROSPLOVUJBFGOFCCSNNAELLTYYGNBSECBYATKNNJGZQBVLYOMVMDQWCTEIXAPRKJNQVZITJYJPFHRQJAZWPOJCYDRIGNFHY");
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
    msg.setTimeStamp(0.793605807884);
    msg.setSource(17871U);
    msg.setSourceEntity(16U);
    msg.setDestination(15193U);
    msg.setDestinationEntity(220U);
    msg.command = 149U;
    msg.htime = 0.954699134371;

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
    msg.setTimeStamp(0.46014524234);
    msg.setSource(37586U);
    msg.setSourceEntity(115U);
    msg.setDestination(27603U);
    msg.setDestinationEntity(229U);
    msg.command = 125U;
    msg.htime = 0.679979786312;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 199U;
    tmp_msg_0.htime = 0.37089109459;
    tmp_msg_0.context.assign("ALNVYWOIMAQSDQONSVGLYWMQBMTZ");
    tmp_msg_0.text.assign("ZHTFPQCWJQOPVTMRMLWMIFNFIRRHVSWFZKMAWUZQVQHYXBHIHFDLEGJSDUAVBEDNENYTJYKIGSSADSVBUGSDNRSGYTJAJFXIHXCRXIBBNZLTVKQQMUPXJUEGABDCEYJGCPTWMQLFVEYWBDIAEZAJZLKAYLTNCPMDCBVVOUKVRTBWPOKPZCTGGOOZDFIWWOUGYXPJNRXZHIQLXKKENYUA");
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
    msg.setTimeStamp(0.327686810696);
    msg.setSource(15028U);
    msg.setSourceEntity(193U);
    msg.setDestination(14850U);
    msg.setDestinationEntity(62U);
    msg.op = 225U;
    msg.file.assign("CRTTXMJKEKSOFDYXUDNIODMGCUUIYGKFWYLQILUSKYWGWIYTTLRVHEUPEVHIEHJBXZCJAMCLIQZZILYXYTAQBKOPTKYHBHKFYPEBQXPRLMTDRDIWPWKOWQOFLOECRRDAQMLMFZRLQXVSTQNMUVBOVSBIAGNOWSHDCJABOGPQPNKNDNUZCFHNVUZBRCFSCDEAWXVFGQXZSITKZNPAFUXJAJHGMVJHNEZUBPVHRLFY");

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
    msg.setTimeStamp(0.470032912254);
    msg.setSource(28680U);
    msg.setSourceEntity(184U);
    msg.setDestination(13889U);
    msg.setDestinationEntity(48U);
    msg.op = 195U;
    msg.file.assign("IQOUSQWSKARLFGSNQFIGFQGMJNXOFGREWGXCYQNDDUBELAJCMUASRHMV");

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
    msg.setTimeStamp(0.352927089157);
    msg.setSource(12966U);
    msg.setSourceEntity(36U);
    msg.setDestination(8624U);
    msg.setDestinationEntity(135U);
    msg.op = 231U;
    msg.file.assign("XVIJBYTJECQOXOURTYBYNTPQMSPXEDQAHAKHVOHDOLMFMPNGKTIMDYZOFAMJUWPQPUVMUGLQUBADWCCHIYCQELCOHGZVBZQTRUOUVTRKCAAXVRKJNWABNBSFRYSXBDTPFSDTSAWQGNKYGVZIQFGNKFHCCPLISRMVDEK");

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
    msg.setTimeStamp(0.62851018088);
    msg.setSource(26710U);
    msg.setSourceEntity(93U);
    msg.setDestination(54498U);
    msg.setDestinationEntity(189U);
    msg.op = 146U;
    msg.clock = 0.26816486272;
    msg.tz = -62;

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
    msg.setTimeStamp(0.32104797835);
    msg.setSource(59722U);
    msg.setSourceEntity(207U);
    msg.setDestination(9903U);
    msg.setDestinationEntity(10U);
    msg.op = 86U;
    msg.clock = 0.0804174476438;
    msg.tz = 54;

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
    msg.setTimeStamp(0.687074076266);
    msg.setSource(35436U);
    msg.setSourceEntity(74U);
    msg.setDestination(34654U);
    msg.setDestinationEntity(244U);
    msg.op = 79U;
    msg.clock = 0.414229684001;
    msg.tz = 83;

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
    msg.setTimeStamp(0.707455988806);
    msg.setSource(6362U);
    msg.setSourceEntity(183U);
    msg.setDestination(11604U);
    msg.setDestinationEntity(169U);
    msg.conductivity = 0.651864219222;
    msg.temperature = 0.590689169798;
    msg.depth = 0.843257315101;

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
    msg.setTimeStamp(0.694630013591);
    msg.setSource(23161U);
    msg.setSourceEntity(192U);
    msg.setDestination(30311U);
    msg.setDestinationEntity(158U);
    msg.conductivity = 0.404296628546;
    msg.temperature = 0.231092058707;
    msg.depth = 0.0788571527961;

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
    msg.setTimeStamp(0.757331009368);
    msg.setSource(32010U);
    msg.setSourceEntity(4U);
    msg.setDestination(14727U);
    msg.setDestinationEntity(165U);
    msg.conductivity = 0.0193983874073;
    msg.temperature = 0.0968466917452;
    msg.depth = 0.407771526322;

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
    msg.setTimeStamp(0.678808432773);
    msg.setSource(31552U);
    msg.setSourceEntity(100U);
    msg.setDestination(1671U);
    msg.setDestinationEntity(155U);
    msg.altitude = 0.0338493066695;
    msg.roll = 33569U;
    msg.pitch = 44978U;
    msg.yaw = 40123U;
    msg.speed = 13360;

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
    msg.setTimeStamp(0.893680561127);
    msg.setSource(3943U);
    msg.setSourceEntity(141U);
    msg.setDestination(27406U);
    msg.setDestinationEntity(21U);
    msg.altitude = 0.118114389506;
    msg.roll = 8536U;
    msg.pitch = 48411U;
    msg.yaw = 58077U;
    msg.speed = -20792;

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
    msg.setTimeStamp(0.777226076495);
    msg.setSource(27927U);
    msg.setSourceEntity(93U);
    msg.setDestination(11624U);
    msg.setDestinationEntity(119U);
    msg.altitude = 0.754300755014;
    msg.roll = 60058U;
    msg.pitch = 61413U;
    msg.yaw = 47440U;
    msg.speed = -12790;

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
    msg.setTimeStamp(0.851110358699);
    msg.setSource(26499U);
    msg.setSourceEntity(80U);
    msg.setDestination(48689U);
    msg.setDestinationEntity(228U);
    msg.altitude = 0.98441005625;
    msg.width = 0.709236325115;
    msg.length = 0.376474262035;
    msg.bearing = 0.896357437633;
    msg.pxl = 13671;
    msg.encoding = 2U;
    const char tmp_msg_0[] = {-21, 125, -17, 107, -35, -61, -53, 56, -9, 122, -8, -18, 58, 90, 97, 65, 44, -113, -21, -114, 15, -107, -55, -68, -68, 70, 89, 1, 57, -120, 31, 100, 97, 25, 80, -42, -65, 39, 8, 121, 74, -99, -23, -35, 8, 46, -23, -92, -88, 7, -52, 119, -125, 80, 24, 73, 76, -12, -17, -58, -29, -116, 56, 74, -99, -44, 45, -84, 38, -45, -66, -16, 61, 28, -1, 97, -45, 70, -82, 48, 124, -100, 20, -7, 23, 73, 7, -13, -124, 108, -120, 10, 63, -122, -54, -27, 100, -66, -112, 58, -17, 68, -72, 100, 100, 88, -33, -43, 10, -41, 34, -111, -124, -28, 20, -103, -44, -60, -121, 32, -40, -35, 69, -44, -117, -117, -100, 61, -116, 78, -77, -85, -79, 103, 16, 53, -126, -52, 70, -32, -69, 70, -61, -27, 90, 7, -4, 29, -88, -19, -21, -99, 84, 86, 123, -14, 80, -75, 74, -122, -72, 111, 45, 45, 37, -78, 23, 118, 69, -26, 26, 64, -63, -118, 51, -48, -9, 22, 28, 51, -125, -100, 21, -75, -21, 47, -17, -126, 88, -6, 85, 95, -29, -127, 55, 73, -63, -2, -62, -54, -32, 104, -27, 25, 92, 74, -120, -123, 113, -81, 87, 0, -76, 22, 102, -1, -85, -100, -62, 75, 108, -109, -62, 82, 99, 122, 20, 0, 36, 66, -101, 88, 119, -74, 36, -126, 73, -9, -5, 80, 26, -2, -87, 17, 100, -78, -128, 95};
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
    msg.setTimeStamp(0.413731867509);
    msg.setSource(3172U);
    msg.setSourceEntity(23U);
    msg.setDestination(64991U);
    msg.setDestinationEntity(176U);
    msg.altitude = 0.130237077541;
    msg.width = 0.701353754575;
    msg.length = 0.707663338101;
    msg.bearing = 0.279089145704;
    msg.pxl = -27127;
    msg.encoding = 214U;
    const char tmp_msg_0[] = {101, 76, -127, 85, -89, 20, 122, -63, -5, -26, -84, -128, 104, -3, 71, 83, 12, 110, -23, -63, 11, -32, 8, -119, -38, 68, 79, 123, 80, 95, -123, 111, -65, -126, -13, 87, 14, 29, -8, -22, 106, 32, 5, -106, -115, -43, 23, -128, -72, 42, 25, -71, -20, 125, 2, 122, -126, 21, 4, 60, 21, 46, -92, 45, -40, 48, 49, 68, -14, -23, -89, 6, 63, -53, -61, 126, 125, -52, -100, 115, -92, 104, -104, 7, 31, 62, 31, -30, 92, -3, 72, -112, -88, -51, 32, 61, 120, 47, 3, -107, 85, 111, -42, -15, 49, 80, 91, 49, -42, 21};
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
    msg.setTimeStamp(0.129588448987);
    msg.setSource(24248U);
    msg.setSourceEntity(94U);
    msg.setDestination(58511U);
    msg.setDestinationEntity(171U);
    msg.altitude = 0.704660354749;
    msg.width = 0.721592164988;
    msg.length = 0.445145366555;
    msg.bearing = 0.0381308798252;
    msg.pxl = 15392;
    msg.encoding = 82U;
    const char tmp_msg_0[] = {-108, -101, 26, -31, 96, 88, -128, 82, 44, -127, 41, -22, -1, -29, 34, 2, 42, 50, -127, 120, -56, 93, 116, 24, 30, -29, 39, 90, -92, -75, -28, -65, -95, -83, 31, -62, 32, -26, -104, -51, 77, 84, -124, -69, -106, 79, -22, 81, -13, 0, -49, -56, 88, -106, 92, -20, -109, 39, 120, 99, -113, 33, 77, -60, 90, 9, -127, 63, -14, -92, -85, -51, -116, 88, -82, 42, -65, -111, 70, -12, -124, -98, 71, 100, -74, 3, 22, 116, 52, 26};
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
    msg.setTimeStamp(0.303323094357);
    msg.setSource(56291U);
    msg.setSourceEntity(112U);
    msg.setDestination(56053U);
    msg.setDestinationEntity(242U);
    msg.text.assign("GOFTMTKIBQOVXCXYIKNBERFKERSOSBWSEQPTKNXCEDWGJFAUUDXCTXKWDFAFKQXRVIKDTQVLKLQNCZNFNPBHZLUHQRYWAOAHYSPFHGQSAHISLJMYQCLWDVRVSHZ");
    msg.type = 97U;

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
    msg.setTimeStamp(0.238026420107);
    msg.setSource(40083U);
    msg.setSourceEntity(102U);
    msg.setDestination(16589U);
    msg.setDestinationEntity(246U);
    msg.text.assign("ZSARWUDHQCGTJUB");
    msg.type = 250U;

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
    msg.setTimeStamp(0.877742076146);
    msg.setSource(19243U);
    msg.setSourceEntity(247U);
    msg.setDestination(8205U);
    msg.setDestinationEntity(211U);
    msg.text.assign("HCZZRBQAMHTRALNLJPHTYSDWCUJNXQSCPUGBOITHEZEPYIBPKLGDJXJETYZFGHGTIVHMYQFVZPNCSOBORMNWIIBYCVKIQFMVPJUTGDWKVCRURKENWQ");
    msg.type = 180U;

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
    msg.setTimeStamp(0.530228619824);
    msg.setSource(22449U);
    msg.setSourceEntity(34U);
    msg.setDestination(27131U);
    msg.setDestinationEntity(35U);
    msg.parameter = 122U;
    msg.numsamples = 239U;
    msg.lat = 0.00151198026963;
    msg.lon = 0.813983452794;

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
    msg.setTimeStamp(0.904801710241);
    msg.setSource(23650U);
    msg.setSourceEntity(53U);
    msg.setDestination(16552U);
    msg.setDestinationEntity(83U);
    msg.parameter = 60U;
    msg.numsamples = 225U;
    msg.lat = 0.861366548004;
    msg.lon = 0.985518672952;

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
    msg.setTimeStamp(0.0652024867098);
    msg.setSource(53540U);
    msg.setSourceEntity(28U);
    msg.setDestination(11803U);
    msg.setDestinationEntity(75U);
    msg.parameter = 111U;
    msg.numsamples = 224U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 65132U;
    tmp_msg_0.avg = 0.126982697411;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.407588652406;
    msg.lon = 0.877388688573;

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
    msg.setTimeStamp(0.251406677987);
    msg.setSource(15079U);
    msg.setSourceEntity(106U);
    msg.setDestination(19519U);
    msg.setDestinationEntity(35U);
    msg.depth = 39531U;
    msg.avg = 0.264963210117;

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
    msg.setTimeStamp(0.899466744216);
    msg.setSource(10414U);
    msg.setSourceEntity(125U);
    msg.setDestination(59639U);
    msg.setDestinationEntity(61U);
    msg.depth = 27502U;
    msg.avg = 0.812553658626;

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
    msg.setTimeStamp(0.672849422885);
    msg.setSource(2968U);
    msg.setSourceEntity(124U);
    msg.setDestination(21497U);
    msg.setDestinationEntity(180U);
    msg.depth = 31930U;
    msg.avg = 0.753529301736;

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
    msg.setTimeStamp(0.316221787253);
    msg.setSource(51228U);
    msg.setSourceEntity(89U);
    msg.setDestination(46481U);
    msg.setDestinationEntity(229U);

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
    msg.setTimeStamp(0.28124518033);
    msg.setSource(5950U);
    msg.setSourceEntity(66U);
    msg.setDestination(43129U);
    msg.setDestinationEntity(218U);

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
    msg.setTimeStamp(0.197788111637);
    msg.setSource(27005U);
    msg.setSourceEntity(15U);
    msg.setDestination(58223U);
    msg.setDestinationEntity(126U);

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
    msg.setTimeStamp(0.184403135599);
    msg.setSource(21956U);
    msg.setSourceEntity(229U);
    msg.setDestination(11248U);
    msg.setDestinationEntity(58U);
    msg.sys_name.assign("KQGNZYZTPTNABFUKIQBXDEQGGRKQRIDWCSJRNFSQSWMLLOGWCQHVMJGAEIKDCPZAUCMLCWHPYLYTREYMTKGAJDSHIHVXTIRUZEGDCLRECZ");
    msg.sys_type = 76U;
    msg.owner = 62159U;
    msg.lat = 0.250476534279;
    msg.lon = 0.151643014005;
    msg.height = 0.671396769477;
    msg.services.assign("NSKWPCDIXJUIVGZORKEFSLGROWNYTJOKHTCYWZVVPAJVCDSGHCFYMJXHJUOJUEAPGDAJXSEASRCUMQOYFGA");

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
    msg.setTimeStamp(0.0658819981124);
    msg.setSource(3859U);
    msg.setSourceEntity(51U);
    msg.setDestination(26917U);
    msg.setDestinationEntity(163U);
    msg.sys_name.assign("VPNBRWDOSVIUVLIIZVAAKZNWVSHFPPFNQGHAVLRGVKHJSYFHSMRNGXTGDCERNSYTVKYTTUZNMGAKURKTBDAQZYYSWIOFWMXXJMZFOCHQPGBVDXTMKHOWLLJQSZKCGLAAUYZXWLJZZPDXQRIERXPXUXFDEHJBQKMSUGCNNBFMUEIEADAYGHECLQWQCCUIBMIKCKDAWPFETYBBOOJVWLYPTWN");
    msg.sys_type = 139U;
    msg.owner = 63577U;
    msg.lat = 0.585671910354;
    msg.lon = 0.622429302802;
    msg.height = 0.794917632942;
    msg.services.assign("UAHQOJVKEFZIWUJIYMCNCFMSBVJRWDWTAGRAOPCMXXCJGGIBTVERNOHQURAFCWWLYNENHVQLXDXQZSUNEJDU");

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
    msg.setTimeStamp(0.0717514918569);
    msg.setSource(35242U);
    msg.setSourceEntity(69U);
    msg.setDestination(15363U);
    msg.setDestinationEntity(136U);
    msg.sys_name.assign("VUYVFMBSEAIXLXSUCYHNBOM");
    msg.sys_type = 95U;
    msg.owner = 41924U;
    msg.lat = 0.67874894666;
    msg.lon = 0.715563011935;
    msg.height = 0.711185904063;
    msg.services.assign("DJUIRTJJDDJBSTFQDHDNPKCNSNOBZWMZOQVXFOTCWDXRTEJKSOPLNQPFQZDXBJTHPETWQZCZBITXFLBCFUGSVXTQWFYWAWZPFCCSXGZHKQGSXVTNKFZKWLBDHHEGLMVIAKHXMINAKANLHUBIOCOOJGARMURILDSMHYGILEKOVRRHBYVIAHJVULNMMXQGQAAGXMLCGVIQJFVYAPIPWYYSYJUUMREGBFUPYEWEENUWERKYDUCV");

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
    msg.setTimeStamp(0.859846023489);
    msg.setSource(43208U);
    msg.setSourceEntity(231U);
    msg.setDestination(44208U);
    msg.setDestinationEntity(154U);
    msg.service.assign("EFYDXNPSCKRPPKZKTCRAQBVSKZSRLTAEYVRJRCISAOCFWMHPDLRLVKOLZHGMDSIYBCWOKHWDYTWHCHXVZXNUAXIHTEDUQMGPOEJKFABYWTBTUFJTLUYBFBQWYAGNMHNKRGOPUQIMNEEEFTZQQXNGLUSMBVIZENJDXXHYHYRPJDFZPQNOGOCUUDVJQCWAWNPXUCLAITMGVLUKBMVZMSJORMIDFVQWSZXYIJZPADS");
    msg.service_type = 21U;

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
    msg.setTimeStamp(0.0111378500069);
    msg.setSource(38261U);
    msg.setSourceEntity(230U);
    msg.setDestination(24226U);
    msg.setDestinationEntity(47U);
    msg.service.assign("QAILPZTZTCDRZHBJPAAOVZLIIUGYBNGJVCEPCFSZSKMIJMXSHEPNIUZIBWMFGRPFQYAGUDBWVIVGLKPWQXPANEAUQCRAOQEVJZWFZQTSQBDLHLJUPXCFXESJNKXREWLHMEQDRACONMYHRTBWJBHNNMSOKEJKVRAOHDGBTMSGKUOKMOYBVDWYLFIAITRY");
    msg.service_type = 9U;

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
    msg.setTimeStamp(0.514339125783);
    msg.setSource(23343U);
    msg.setSourceEntity(82U);
    msg.setDestination(64267U);
    msg.setDestinationEntity(162U);
    msg.service.assign("MDVVJQCMKSLFJOTSEMYXGPPXLAYMTBTINRAWWOZJHHCXSZ");
    msg.service_type = 177U;

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
    msg.setTimeStamp(0.289237431921);
    msg.setSource(6461U);
    msg.setSourceEntity(37U);
    msg.setDestination(50025U);
    msg.setDestinationEntity(114U);
    msg.value = 0.598073593077;

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
    msg.setTimeStamp(0.714734840477);
    msg.setSource(3166U);
    msg.setSourceEntity(245U);
    msg.setDestination(35911U);
    msg.setDestinationEntity(92U);
    msg.value = 0.781911212461;

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
    msg.setTimeStamp(0.442362624785);
    msg.setSource(50387U);
    msg.setSourceEntity(85U);
    msg.setDestination(12980U);
    msg.setDestinationEntity(76U);
    msg.value = 0.783177615367;

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
    msg.setTimeStamp(0.104647579487);
    msg.setSource(62431U);
    msg.setSourceEntity(40U);
    msg.setDestination(53251U);
    msg.setDestinationEntity(154U);
    msg.value = 0.280074946495;

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
    msg.setTimeStamp(0.0422332690841);
    msg.setSource(30748U);
    msg.setSourceEntity(227U);
    msg.setDestination(24412U);
    msg.setDestinationEntity(130U);
    msg.value = 0.0997842612477;

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
    msg.setTimeStamp(0.816472179097);
    msg.setSource(20937U);
    msg.setSourceEntity(104U);
    msg.setDestination(19667U);
    msg.setDestinationEntity(161U);
    msg.value = 0.578568457666;

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
    msg.setTimeStamp(0.998115223973);
    msg.setSource(41549U);
    msg.setSourceEntity(82U);
    msg.setDestination(60456U);
    msg.setDestinationEntity(202U);
    msg.value = 0.231608061969;

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
    msg.setTimeStamp(0.342603326761);
    msg.setSource(38145U);
    msg.setSourceEntity(214U);
    msg.setDestination(52950U);
    msg.setDestinationEntity(213U);
    msg.value = 0.553356450225;

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
    msg.setTimeStamp(0.731067603473);
    msg.setSource(21060U);
    msg.setSourceEntity(122U);
    msg.setDestination(63541U);
    msg.setDestinationEntity(72U);
    msg.value = 0.221150403496;

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
    msg.setTimeStamp(0.00733676214026);
    msg.setSource(8660U);
    msg.setSourceEntity(200U);
    msg.setDestination(24500U);
    msg.setDestinationEntity(245U);
    msg.number.assign("HRTJYRSCKYBTPBEKZMLRFFMSJPUDJSGHWPNTQLICZHQAHIYIVLSUIARNMFLFJEWEVFCUXMNBQWWKCTLBFUTKJFPSTBBLLXQPGXTPCAMOGEGMNEYRDONPFHOWDROVASADQ");
    msg.timeout = 35256U;
    msg.contents.assign("YVEOEEOBCSMTODQFQNRLDHSZCCFESVQFTICPAUYQXAIMMLTKNVBJWZFWHRWZKNFFHRUTWUDSQJYVPRDUZEMIFYDZUOZLKNVJTSJGIBNWLECYLXDPPJCXPVOQYPXXGNHIHNEFBLISXM");

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
    msg.setTimeStamp(0.249069188383);
    msg.setSource(7169U);
    msg.setSourceEntity(201U);
    msg.setDestination(16377U);
    msg.setDestinationEntity(11U);
    msg.number.assign("ODNVQXVPSGKRAACPJJGJHTOLTERIYCBIZGWXBWVXTSOCPAQDREKNRFZIYKEUBJXRAQBGZVWPWQHAKJNWEBCZFODZFGIDGVKKLLFNIVSYIQABHFMEYMUYOUSMHBGFYKWFOYAUFUUUNSSXLMLXZZWTOQKXEENHTBBPLSPWHITFIVQNRLO");
    msg.timeout = 34790U;
    msg.contents.assign("VLZKFQMXGLIBRDBOERVMANFUBGQWCGSZZKSPWFZLUXVODCXFVSSUKJALENSNJFNAHJYKWPDQJUAWUNAOJBU");

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
    msg.setTimeStamp(0.734171339667);
    msg.setSource(45456U);
    msg.setSourceEntity(54U);
    msg.setDestination(42210U);
    msg.setDestinationEntity(8U);
    msg.number.assign("GAROWILXUOHZPSLZWJNBDYKYQIGWCZEWFKHPGHLSUZFFMQUSNBJFVECWXYUUILSECCHMSXMSQDDZXFPPCOQLZAXAFKPUCMWBYWAJKFJGQDBYBCQOOETYEUGNCMQPLEVNDFTNMNTK");
    msg.timeout = 24991U;
    msg.contents.assign("INUTMKRWNEPKLMNXWTLRAYETLXWMIYKSCFHSYIAPPJESRAZOBCGPBTNIAWYAEXMRSEQBIYCCFNVKUDOVURHOJQXDJJJNJTFZGYVKGLBHZVIDXNCORQEBYOVKOZGIHCAEZPXZUNZDUTQNSSDDOMVFOFYIJDDLQJYGTSTLKMXWWSSFHRUMXAWVWUGYHCZXRNDUAJPPAKGXABQKBIEQMLDRL");

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
    msg.setTimeStamp(0.0715521407868);
    msg.setSource(14668U);
    msg.setSourceEntity(253U);
    msg.setDestination(1687U);
    msg.setDestinationEntity(95U);
    msg.seq = 790043416U;
    msg.destination.assign("AOCBHOPJAOTDMLAQSRYZRLYUWTSPEGJUQEHJESNKKMXQJWLIUHLAPMHWFIGMPDDWWNOIDUXXRTYDIVPEXINCULCADGYIFGSQCCSPCGSJWDQKNYYHPEBLGKQNGWNTGOZINWAMDFOBZAEVEOVJMUVKVBFVAQMEFTEWJFKLFZHCZLQYNMUSIIJZRQMVTFMBKRBGHULYZOHAYTCTRORFPJXRZXBFWVXUPQIRXSPRLEBTKTZABXCHOYSNBGSXVKH");
    msg.timeout = 34677U;
    const char tmp_msg_0[] = {82, 109, 10, 81, -5, -73, 72, -97, 101, -106, 110, -66, 16, -23, 60, 76, -103, 26, 90, 69, 89, 106, -42, -16, 16, 15, 68, 68, -88};
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
    msg.setTimeStamp(0.573939617886);
    msg.setSource(22306U);
    msg.setSourceEntity(154U);
    msg.setDestination(63812U);
    msg.setDestinationEntity(119U);
    msg.seq = 2884860202U;
    msg.destination.assign("QUSYVJBWRBPOYSEKLWMVWTGRFUFMCQPUTBJOCTNXMIGCKQIEGATUVJOVNANSJSHTYGHCOFTZVDZWTMRXIJEIRTPDZSOADRYQKCLVASYSMTLKABQFZMJLOUXQNKXUHWHBE");
    msg.timeout = 28105U;
    const char tmp_msg_0[] = {74, -59, -97, -118, 43, 4, -124, -110, -74, -2, -16, 79, 119, 15, -31, -58, -7, -110, 59, 121, -115, 74, 108, 28, -94, 112, -105, -83, -98, 72, 124, -41, 53, -110, 106, 76, -30, -108, 36, 18, 77, 73, 48, 44, 24, -50, -84, 37, 107, 78, 86, -101, 49, 104, 68, 104, 4, -80, 104, -49, 118, 90, 78, -114, 124, -75, 126, -78, 79, -111, -60, 37, -25, -120, -83, -3, -15, 100, 60, 52, 68, 5, 32, -102, -73, -77, -76, -110, 88, 89, 125, -126, -50, -19, 22, 35};
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
    msg.setTimeStamp(0.428277478731);
    msg.setSource(14474U);
    msg.setSourceEntity(225U);
    msg.setDestination(62485U);
    msg.setDestinationEntity(96U);
    msg.seq = 3826621985U;
    msg.destination.assign("LDQSWUXWEIGGVPKNHAKLWURYLIAAFJQRDOZ");
    msg.timeout = 8732U;
    const char tmp_msg_0[] = {64, 126, -14, 85, -124, 47, 3, -39, 24, 51, 51, 56, 123, -24, -57, 106, 72, -100, -49, -27, 89, -67, -76, -15, 28, 18, -56, 10, -82, -110, 89, -126, -106, 1, 28, -55, 47, 15, 93, 18, -35, -8, -42, 43, 47, 73, 22, 103, -74, -27, 13, 29, 1, -100, 89, 72, -7, 35, 106, 116, -83, 112, 125, 36, 56, -18, -114, 102, 113, 125, 108, -43, 99, -34, 84, -88, 102, 103, 51, -99, 68, 96, 120, 117, -126, -32, -124, 27, 37, -29, 2, -40, -80, -12, 78, -35, 122, 110, -81, 99, 21, 124, -19, -56, -95, -107, -30, -15, 101, 65, 33, -12, 33, 114, 29, -93, 100, 1, -85, 93, -119, 16, 65, 34, -49, -117, 31, -77, -43, 64, -71, 123, 102, 92, 125, 32, -106, 97, 118, 62, -60, 20, -37, -28, -31, -110, -122, 101, 43, 37, 38, 48, 28, 116, -113, -8, 88, 86, 64, -35, -91, -69, 16, 55, 44, 113, 111, -43, 115, 18, 69, 91, -64, 39, -6, 126, 60, -59, -119, 36, 30, 43, 27, 36, 74, -84, -80, -112, 28, 74, -73, 96, -99, 98, -117, 54, -13};
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
    msg.setTimeStamp(0.828542528508);
    msg.setSource(47554U);
    msg.setSourceEntity(140U);
    msg.setDestination(36644U);
    msg.setDestinationEntity(3U);
    msg.source.assign("TLXEUPVMXHHMTPYTBCXHOBGEVGEKMVBECOVWZHPMKOAQBONVSKBYTSSNJVGCKZVAZNNURVIKGNTJEWLJOXGL");
    const char tmp_msg_0[] = {-25, -73, -62, 30, -21, 120, -44, 35, 42, -18, 17, -45, 62, 110, -32, 52, -119, -122, 63, -21, -12, 67, 4, 46, 31, 51, 21, 82, 98, 18, -107, -4, 101, -20, 112, -10, -118, -88, 29, -6, -112, 40, -127, 100, 118, -62, 116, 74, -80, -26, 95, -117, -27, -8, -97, 106, 95, 97, -35, -1, 28, 37, -111, -124, 59, -32, -71, 47, -54, 52, -63, 78, -110, -21, -117, -48, -88, -36, -118, -111, -78, -18, 56, 119, -81, -74, -54, 2, 64, 51, -5, 64, 27, 6, 77, -128, 22, 51, -67, -37, -64, -56, 98, 78, -72, 84, 114, -109, 44, 66, 24, -30, 35, 78, -30, 7, -20, 103, -94, 32, -106, -124, 84, -22, 85, -67, 6};
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
    msg.setTimeStamp(0.665099872014);
    msg.setSource(23614U);
    msg.setSourceEntity(139U);
    msg.setDestination(35054U);
    msg.setDestinationEntity(200U);
    msg.source.assign("QXRIRDAMUBJZJAAXJHYPLEDWWRPYRONECXSGAOJMIDJUADHQOSPIBDBMQICPNWTZNJCWSZGQTAHXEXHRZOUQGGVVDQKHLFVTCYAPFLKVKCZXSKLKGKLHPUDFONPDNBGFNUJBY");
    const char tmp_msg_0[] = {-33, 78, -5, -18, 113, -128, 10, -83, -121, -37, -26, -119, -36, 99, -79, -49, -62, 31, -34, 61, 24, -50, 14, 94, -47, 71, 58, 64, 119, 116, 33, 125, 43, 41, -105, 104, 120, -90, 60, -97, -55, -85, -128, 69, 37, -124, -65, -36, 115, -34, 67, 21, -59, 25, 66, 27, 19, 102, -1, -60, 72, 116, -18, 38, -26, 17, -58, 59, -27, 65, 114, 120, -68, 43, 124, -98, -19, 118, 95, 53, 122, -114, -95, 125, -40, -87, -110, -47, 99, -82, -16, 8, -83};
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
    msg.setTimeStamp(0.208164262221);
    msg.setSource(65104U);
    msg.setSourceEntity(42U);
    msg.setDestination(33529U);
    msg.setDestinationEntity(250U);
    msg.source.assign("ZSUVEPFOFEFBHXXKSXGIHRNDTURSGDEBPVTLJNNXFEFBMKVZXMRHKOGQCVJLZVBHTNSBFOKYRBKDNUDAVPWXDNFZYFHXVQSCGJHSIOJGSYIOLGCEHNGJLNGWIZFWTCPMYUQKDPCPYMUWICNCASUYMWQSJEBMLZUAKWQDRHGWLYUHXBDQALADBFCPKITLUUQRTKXGIBETZIEJWRMRSLCZLOMYERVZAVDNQCYEQKAOWAROOJIOPH");
    const char tmp_msg_0[] = {-83, -122, -16, 94, -95, -81, -117, -34, 66, 67, 31, -41, -96, -93, -117, 123, 51, -84, 7, -73, 55, -66, -24, 91, -54, 60, 44, -47, 30, -23, 70, 38, 37, -66, 66, -9, -120, -9, 18, 52, -15, -42, -2, -60, -92, 37, -58, 48, 20, 112, 27, 73, -19, -2, -59, 91, 30, 11, -82, 106, -98, 125, 121, -54, -125, 114, 79, -103, -25, -60, 11, 105, 85, 4, 111, -26, -120, 0, -10, 20, 67, 37, 124, -128, -41, 79, 106, 6, -18, -106, 17, 26, -78, 11, 124, -30, -72, -24, 103, 49, 55, 126, -75, -12, -66, -79};
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
    msg.setTimeStamp(0.633629149598);
    msg.setSource(53760U);
    msg.setSourceEntity(156U);
    msg.setDestination(54167U);
    msg.setDestinationEntity(22U);
    msg.seq = 3357582902U;
    msg.state = 85U;
    msg.error.assign("ATHOUBXWFHRMFBJVHEBVXOHJOPWDJIZIYECEMWLFILAKUSZLTONPVMGLWNNFBXFEUFYRVGVJCKRKOTPKMYDSEBGRRDJKLZGUDMLMAIFAWJXUHISKCZQGPZ");

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
    msg.setTimeStamp(0.084329498362);
    msg.setSource(53032U);
    msg.setSourceEntity(118U);
    msg.setDestination(49766U);
    msg.setDestinationEntity(178U);
    msg.seq = 1127473513U;
    msg.state = 142U;
    msg.error.assign("WMAJLDOAUYNRXMGDTOFKDSWYNRMTOVSOFAMTUSKDOXFYFNIPZQCPFEKUIULXILNIGCJJFVQWZYCVQJHNKDWYMCMNTADCEVTYOEEFPHZHPSXSDNJZRBCJUZZYFDMMDVROQNJGZSTBWQAFBEBVPAPNLXLHGQYSQGOLAJKVHBMEMZGPWVTSBGVHHPRIHTIIURQQNLVYWGBFEWKBICIISXPASDOALEWLHPTTURK");

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
    msg.setTimeStamp(0.355594381032);
    msg.setSource(49098U);
    msg.setSourceEntity(192U);
    msg.setDestination(7852U);
    msg.setDestinationEntity(221U);
    msg.seq = 1070972932U;
    msg.state = 94U;
    msg.error.assign("RZWIHVOGIOHIJHBRPLTKCAPTQNPGVXZRKRLXNVARSWZPNFLHANKXUMEIQBSLPKMUGFXJDYOAQUHRGOELEASKJVPSDYWGEUQQFWDUVEDHCMLSDXJIBJDAIOJVVKFJCWIFRMNEPAXEMYKOSGBMQDRLNNWQBZXMMJZGDCYOYWOCLHEQRUUY");

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
    msg.setTimeStamp(0.32444028692);
    msg.setSource(32998U);
    msg.setSourceEntity(42U);
    msg.setDestination(59489U);
    msg.setDestinationEntity(54U);
    msg.origin.assign("OWKGLTBQJUNSJXMADHRPMSKMTQBZOXAZLYLHDNFFMDPNSFOIRUKTMUIONSWYIVEZUQXBDAKDKNZLTVWLALGPFYGNRMOCMOKVAVUNARCWRSSCSJUKRLHMMUGUJIAEPGGEOSIUIBPFXFENPJQHXCYKLQCTFEXYHXDPQBOWJWXRCFJSIHZPALEEYVQGIPZYJTZZKHCWRJHDGEEGBMHDTGDQUKXCVHWAVIFCFICQYLVBZ");
    msg.text.assign("ZWVYNHXKVGWIYHGDCKABRVAOKFQYVGXOXHFEZWDATNNFPIVYMYINXEZMDQOALKQKIRUCAJWZDMPCCLYQFNRSOCOBFEYIZOTLPLRGQKHTGYWVPNUQIEBWBYETOFRCXGMZTWTRFETBAUXCBKIJPJUVBSLXRKXSYVDNRDVXMUZHHE");

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
    msg.setTimeStamp(0.324534613034);
    msg.setSource(26240U);
    msg.setSourceEntity(87U);
    msg.setDestination(3099U);
    msg.setDestinationEntity(88U);
    msg.origin.assign("CNNHJBGZHFDUTZANKYKHXJICAYIPDCXNIWADEJDSORLRPBVTQTUBCIRUSASQXQZJPFGUMBPEKMJKZONWBITJEOAYKEWDOCCNVLXVDYZPZLVXVIXOFSLUOJHVGYWPRFTIBYSDRGDY");
    msg.text.assign("GTIUUYDVLNCRPEJJQDCHDUNPQYBFRZMVUUFQZFWXXQWURWEFAMRSNQIKTYGCLGLYKAORXNGJICHIEJCISMICSBRQHAVFJPKOGLPODPWKDMXTBJMSFDBPBYURFRDKMLGZNIOXCQOTGPUOHLNHKTXEHNAVFQLIVPKWNZVAMDVOTABYXSCQKELCSLKJZWCVEAHVAI");

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
    msg.setTimeStamp(3.89245458901e-05);
    msg.setSource(60634U);
    msg.setSourceEntity(230U);
    msg.setDestination(40401U);
    msg.setDestinationEntity(80U);
    msg.origin.assign("YDKHKCNMQCTCYWRQWBHIUZTAKNBRJCKTVOWFRAWVAJVFDWLDQOVVUIVIRHGOTSKEPUVHMYYRQIWNMZPKAIOHOTHSUBCDSTGKSBKPQIFNGDZHSLJUXLFIXJRXZNKMBTJQHYGJTOEMGEYHLXBXFEOYCBMHMSSRIYEMOFEYOAZDEPJCSNZDAMLDSBYCNWGXZBWPSUZAR");
    msg.text.assign("BODPPCQSKNCFNQTOEUMYR");

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
    msg.setTimeStamp(0.892624662738);
    msg.setSource(36733U);
    msg.setSourceEntity(9U);
    msg.setDestination(20011U);
    msg.setDestinationEntity(128U);
    msg.origin.assign("GOZZWIJDVDCJERPXDHFIAOXSTKLSDATQFMGZXBSJAJGQNJKDJNRKEIUBMUIBLJRBBSYDLLVVBLCHLMWGUYESWBRHONCODPGEMYGNOVMGWQQRTCFAPTXUSWEQJFNSEXNRFCDFJTKINTYWFWOVTZYOLSFUAK");
    msg.htime = 0.441611106683;
    msg.lat = 0.346357175568;
    msg.lon = 0.212081826441;
    const char tmp_msg_0[] = {-28, -52, 59, 41, -53, 14, 21, 9, -89, 116, -107, 104, -100, 12, -85, -32, 18, -119, -38, -93, -102, -46, 32, -103, 78, 43, 107, -6, -78, -104, 40, -122, 52, -74, -4, -34, -43, -71, 114, 16, 5, -120, -102, -54, 102, 48, -93, 24, 101, 15, -127, -106, 44, -34, -23, 14, 68, -84, 94, 126, -116, -42, 121, -122, -105, -72, -9, 3, -20, -13, -63, -14, 4, 65, 101, 117, -7, -38, -63, 20, -57};
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
    msg.setTimeStamp(0.73049524682);
    msg.setSource(53552U);
    msg.setSourceEntity(192U);
    msg.setDestination(14103U);
    msg.setDestinationEntity(57U);
    msg.origin.assign("HZKVWSZOYUXLUWNNUJYMBWATRMVADLVEKEWCXNXOQJPQVC");
    msg.htime = 0.589777033917;
    msg.lat = 0.857565851791;
    msg.lon = 0.0335044992315;
    const char tmp_msg_0[] = {9, 84, 54, -75, -53, 121, -33, -54, -67, -110, 20, -49, 44, -122, 42, -76, -119, -73, -105, 46, -24, -51, -23, -28, -21, -71, 45, 79, -26, -29, -48, -70, -124, 96, -83, -115, 86, 71, 58, -74, -70, -16, 75, -63, -53, -115, -81, -121, 7, -107, 90, -11, -81, 34, 20, -97, -84, 84, 60, -117, -37, -49, 12, 27, -78, -6, -12, -69, 122, 34, 80, -14, 59, 67, 103, 11, 53, 40, 105, -87, 20, 119, 103, 103, -44, 79, 56, -48, 94, -84, -14, 59, -22, 93, -106, 113, -116, 10, -11, 38, -123, -77, -66, 113, 2, -71, 92, -11, 89, -77, 5, -91, -127, 68, 10, 91, 72, -89, -11, 7, 16, -86, 81, -40, 121, -40, 46, -118, 105, 41, -114, -102, -124, 45, 93, 47, -37, -40, -14, -123, 0, -22, 126, 98, 26, -4, -58, 19, -36, -52, -39, -112, -61, -93, 89, 26, -30, -69, 48, -108, -115, -114, 118, -95, 98, 74, 98, -41, 106, 40, 22, 56, 124};
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
    msg.setTimeStamp(0.298838440342);
    msg.setSource(11722U);
    msg.setSourceEntity(14U);
    msg.setDestination(48960U);
    msg.setDestinationEntity(132U);
    msg.origin.assign("IHDQJAEOTXYDJIHKPOXGFHODZDBDBMPGQJACYHPMSUFQWTZVIWIBNXDOCMUXMAQVSLWALKPIWKUUVZNOERAYJDLJZECYIHJHEUJWABTONTMBMRIKZMVFLFWJVSLLQCHMXPGGNSYFOXZXTEECRTYSQYPZGDLQEBYOPXKLEBUSI");
    msg.htime = 0.879204419134;
    msg.lat = 0.681043324207;
    msg.lon = 0.0139074261246;
    const char tmp_msg_0[] = {-112, 45, -59, 103, -54, -68, 112, 3, 36, 13, 102, -83, -69, 51, -7, 50, -14, 88, 10, -126, 77, -64, -104, 95, -67, 29, -128, -115, 108, 39, -74, -62, -65, -13, -38, 26, 103, 65, 35, 86, -119, 11, 64, 96, -77, -15, 125, 34, -104, -65, 52, 52, 108, 112, 12, -98, -58, -13, 73, -57, 12, 80, 47, -26, 82, -97, 71, -95, -71, -48, 31, 96, -10, 62, -11, -120, 81, 27, 33, -36, -39, 89, 15, -88, 8, -29, 93, 88, -109, 99, -1, 35, -78, -73, -122, -7, -14, -16, -60, -25, -73, -8, 86, 14};
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
    msg.setTimeStamp(0.93457046914);
    msg.setSource(51383U);
    msg.setSourceEntity(27U);
    msg.setDestination(17664U);
    msg.setDestinationEntity(41U);
    msg.req_id = 59269U;
    msg.ttl = 30801U;
    msg.destination.assign("ZWXVRRBCAIMPJLUQHNAKIRZBWCQGFAKVLQGNJFVZWYELLFHAXLLDONZBMGNNPYIHUYUJSWAVUBZOGSDKBERMTVPYITBEOWOIGAAJJJDYLFIMSMFPCHTPSKIHDUMHKF");
    const char tmp_msg_0[] = {59, -82, 100, 56, 20, 70, -119, 42, -126, 116, -27, 112, -24, 30, -25, 32, 12, 11, 41, 86, -6, -53, -43, 9, 6, 13, -122, 115, 19, 95, 68, -49, 124, -16, 72, -92, -103, -42, 44, 58, -110, -112, 109, 33, -116, -40, 99, -60, -98, 51, -33, -23, 65, -40, -52, -108, 105, -45, 50, 32, -128, -123, -15, 70, -85, 58, -71, 77, 119, 122, -75, 118, 95, 48, 79, -93, -91, -46, -123, -111, 21, -53, 18, 11, 103, -39, -90, -11, -55, 118, 99, 9, 28, 81, 15};
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
    msg.setTimeStamp(0.00741740438263);
    msg.setSource(46681U);
    msg.setSourceEntity(205U);
    msg.setDestination(36523U);
    msg.setDestinationEntity(101U);
    msg.req_id = 16787U;
    msg.ttl = 61244U;
    msg.destination.assign("JZNHQTWEYWGWGNGWKNBHPFKBTPGEDWEQEOGACICTXIOFHVJCQPDOYZXZJJADRZOFLYMVIJIAFMZLRXFMDPMPUSUDPYBTJWNKGPBLCBRQVMLHSLONOQOSBGSHIDEQVKEL");
    const char tmp_msg_0[] = {-18, 4, -57, -71, 69, -69, -18, -92, 27, 92, -41, -7, 49, 62, 45, -49, -13, -43, -108, 65, -110, 114, -125, 69, -28, -101, -75, 118, -52, 48, 121, -125, -110, -14, -41, -124, 109, 113, -123, -22, 75, -26, 62, -125, -58, 78, -10, 81, -12, -124, 66, -64, 102, -17, -95, -41, 49, 90, -34, -53, 121, 88, -20, -23, -60, -65, -96, 85, -3, -27, 89, 20, 118, 49, -125, 46, -128, -45, -44, -105, -71, 73, 61, 18, -22, -114, 60, -37, -66, -44, 8, -81, -1, 105, 124, -10, 113, -48, 65, -26, -128, 6, -28, -31, 85, -97, 115, 74, -58, -17, -33, -31, 3, -25, -83, -17, 62, -48, -120, -81, -42, -26, -22, -26, 11, 120, 119, -69, -116, 102, 15, -115, -49, 91, 65, -48, 2, 51, -94, 51, -83, -80, 112, 36, -85, 115, 52};
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
    msg.setTimeStamp(0.436625946749);
    msg.setSource(42835U);
    msg.setSourceEntity(106U);
    msg.setDestination(55626U);
    msg.setDestinationEntity(214U);
    msg.req_id = 52198U;
    msg.ttl = 4995U;
    msg.destination.assign("CYWROVSUBHZOLMJMSNEVFHPTFVXLMXYQWWWGGTWOKPFNBWKFPURNPYIPIADESQGVRUAMYAZAVGFNMXEMOUJRTWLFIBZHYTJYPQOLBDWXUOZDHGILBXIKLQSZWNGGGUDINVJCJEVPMXFHVIAARMEJCCKUINNGTFNQSFTQIUY");
    const char tmp_msg_0[] = {-93, -82, -65, 82, 28, -57, -62, -96, 85, 107, 124, -11, -120, -108, 105, 107, -54, -45, 96, -119, -64, 50, 65, 120, 116, -50, -114, 120, -106, 59, -65, 16, 59, -31, 119, 51, -124, 123, 95, 31, 106, 10, 120, -91, -80, -93, -64, 12, 58, -55, -25, 50, 68, -46, 51, -98, 90, 100, 108, 99, 45, 49, -7, -124, -90, -36, 71, 99, -67, -123, 37, 108, -105, -57, -78, -124, -120, 66, 82, -69, 26, -115, 65, -88, -116, 10, 47, 23, 30, 81, -64, -74, 64, 8, -93, 8, -31, -120, 99, -121, -53, 99, -57, 63, -14, 76, -75, 17, 98, -37, -26, 1, 99, 62, 15, 62, 11, 97, -35, -44, -108, 93, 53, 76, -14, -55, 94, -101, 107, 11, 1, -25, 123, -79, 2, 103, 85, 32, 21, -94, 86, 120, 13, 23, 84, 53, -18, -10, -21, 86, -82, -5, 58, 107, 7, 43, -120, -34, -79, -75, -127, -55, -92, -75, -80, -57, 44, 91, 85, -19, -79, 83, 98, -1, 42, -60, 19, 101, 125, -95, -125, -45, 68, 49, 121, -128, 78, -113, 88, 124, 42, -9, -77, 21, -34, 95, 20};
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
    msg.setTimeStamp(0.106395700875);
    msg.setSource(16344U);
    msg.setSourceEntity(223U);
    msg.setDestination(40855U);
    msg.setDestinationEntity(218U);
    msg.req_id = 27254U;
    msg.status = 98U;
    msg.text.assign("UQBQOHSMXOOGENSLQGVFOEBAKHGQBTEILUJRLUMLLQZVGAHINJMRWKNGEXJGSIQXYXCVVTZGXFJCMXPUFPTPIFUHTXLCHSYAMYBOBZIZNWDVIKKOWCZRGBUQMKJWRFBMHYNAPKRMNUQIVJEYGUVSCBKRCTKAPZRDRLVRYXZUJXVFDEDHEBOJAATPDYYLOSIBDPECSFXZRMWHTUSQNLOZHDEHTWAJTWFWGVJFCPWEOKKWIPADYMCT");

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
    msg.setTimeStamp(0.115002520426);
    msg.setSource(31687U);
    msg.setSourceEntity(169U);
    msg.setDestination(60326U);
    msg.setDestinationEntity(157U);
    msg.req_id = 36380U;
    msg.status = 179U;
    msg.text.assign("ZUJWDNANVIXKPNAFJJZKWUTFIQUUOYAFCBNOLOGVNHQKOTDYXPQJGLXGIVGWUDMQSMYVDJUEIXWZECXCHMEMSTZVZTAACDWXICDFXYPSV");

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
    msg.setTimeStamp(0.615790715699);
    msg.setSource(24759U);
    msg.setSourceEntity(205U);
    msg.setDestination(18902U);
    msg.setDestinationEntity(204U);
    msg.req_id = 58009U;
    msg.status = 137U;
    msg.text.assign("IJKRHBDRQOOFKGGVAOUFWIBUKIUHEJJDKKWBNWTQYCXYTDUAHVSWTVQPPNJTOCMNQWBGVCBQYNSAEHTCDGAOHAFZLLSPXJNCFLHPSNQOV");

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
    msg.setTimeStamp(0.0914817961803);
    msg.setSource(43737U);
    msg.setSourceEntity(152U);
    msg.setDestination(26177U);
    msg.setDestinationEntity(245U);
    msg.group_name.assign("LWANPXKDUJHSGMVLTPGQZJHDOUTBAVNIEYJHQZMWYQJLOXFWCZFMYFVWQASIPINDWBDQBWDAYAYQZXJNQUAUCSNRRSHBHJBFGSRONFMBQMISFGSRMYEOIHCZGLPAPCFELTKGWGZTF");
    msg.links = 2501635188U;

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
    msg.setTimeStamp(0.449309646071);
    msg.setSource(33992U);
    msg.setSourceEntity(181U);
    msg.setDestination(8554U);
    msg.setDestinationEntity(106U);
    msg.group_name.assign("SRZJASYLRCBIDNCLNMBEQBHFEKRSTKSVOBHHZEQRATQCGVJNTJVSURRUXTDQPHFJFEHFJYKFFQKGWUYGHFTZMWWXJKPQWAIJILLJCWUBVSUMDEYUVMBLOGTHIHWLGWAVPDKPKEBOQHPTUXZHFMQLRLYXGCAFEGFDCDOBOVJWNIIGRXPUNQVAPZXXIXATPRUQRNVEDZXJYLSZWYDICCTBGDKAZNICOPOMBOYZUNMMNSOAZWVSIE");
    msg.links = 1099033811U;

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
    msg.setTimeStamp(0.58753708246);
    msg.setSource(7253U);
    msg.setSourceEntity(103U);
    msg.setDestination(33713U);
    msg.setDestinationEntity(56U);
    msg.group_name.assign("XNJHVOOWDILIXAIVKRBKILYJLTUZHAXYDRXYONVMNGVSBPMFOYZAZEOUHJFSWTHHJSPBOXBZJAEZSCWRZLCNDKRGSAZNLXBYKQBYDMXFADLPEWINEKEMROMTNGSTIDNQZYVLVSJTRMEGTFROZBILAFPYQVOESQGUDQBEHULXXGTACQHVWKQQPRJDUFWZUFPWCLGTUPHBNMXOAWIIKMIRSFPWWAJFKYGPTUEHQ");
    msg.links = 1276938074U;

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
    msg.setTimeStamp(0.0389420260571);
    msg.setSource(11047U);
    msg.setSourceEntity(54U);
    msg.setDestination(40219U);
    msg.setDestinationEntity(50U);
    msg.groupname.assign("DUXEOXKLYMJGVTIIGYVPTLCQISDNKGHEGOTBLMHZUHQBANIUOLONOZJVDHDACSZHAQAMSCVZRSDHVAXCLNRAQAYLTFGKTZUKDXWPWQTBN");
    msg.action = 156U;
    msg.grouplist.assign("LRHHDZRIHXFUXLPOFUQXBQMSWDNAGZNAGUOHRMKBBWNDJKABNXKBGYSCKTIOZNOFBEOICLOAMNTFIJVSDEIPHGNDOVTKFPCOWXIQSWHMVMAIGEKFCUPWXTPCPFWMTRBIZLQSQXJSSLLOCESSCAXVJTYDFUL");

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
    msg.setTimeStamp(0.416897998712);
    msg.setSource(57230U);
    msg.setSourceEntity(166U);
    msg.setDestination(41766U);
    msg.setDestinationEntity(117U);
    msg.groupname.assign("DZVQNGSSBCQHITFYAHNHGUSIZAHPQXLKMZYGRRJFBOVZONSPPFPUGPQRJWRTAXULLJLJKSKUTHGACOOFITRRYVUTDDCUINQIGEBCBZNQYZJIMVFVXFBSLJOHPOZIELBXNADNSXYCVMGEWJMSAPXPOWELTRMFWMMEBMCTAIXQWLKKWEKHMKUCGHYLLONYMBAYKKBQVRUPEXGVWKZCTRTTCIYJZG");
    msg.action = 218U;
    msg.grouplist.assign("TPHZNETGGNFIKJHWAYTUTAQTOKSRFXQARVWJJGIADMVSOTHEXMMSHCJQKWIMUGGZVVQBKMRRZPMTPNSLIJHFGIPXBOWDOYRZDBCKSJEEYBKDSDIBOYXAGMOYFVWYLUFPQRXHBZQSUZCNBZXYUPQNDLHOMMYQXLDJJEVTQXDZKLOBNDCVKIVRULBPYHEAIEZRCLNCOMAAICGFLAEUEFZNTRADNGJFPWXWLSPSXJIUBCOVU");

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
    msg.setTimeStamp(0.0132129319165);
    msg.setSource(35303U);
    msg.setSourceEntity(82U);
    msg.setDestination(56372U);
    msg.setDestinationEntity(50U);
    msg.groupname.assign("CNKBGGVTIBFSQTVFXMDPQDONDFZAELZUSYOJRSVFMKKQHYITRXZCNVECELERXHOPKMMWHKCSTLDNPILWSHUXQAOPYZHWBNOVYAOAOCRTFBXQWSUQMVXHMGMBPCQYZBUJEIFYXENIDROSECAUVDAEAMWRLWHVYXVJBPGRZYUTJNQZFWYUYJKMP");
    msg.action = 95U;
    msg.grouplist.assign("LLKOUFGUUSAGHQDSTADSZMYBXVQVHGJVTYVHSAPQPVYCWRHDVQFJGEFTJUMXTVJORTREABXC");

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
    msg.setTimeStamp(0.0235486806093);
    msg.setSource(11668U);
    msg.setSourceEntity(169U);
    msg.setDestination(54923U);
    msg.setDestinationEntity(164U);
    msg.value = 0.915166405666;
    msg.sys_src = 239U;

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
    msg.setTimeStamp(0.588392266438);
    msg.setSource(39121U);
    msg.setSourceEntity(34U);
    msg.setDestination(46526U);
    msg.setDestinationEntity(222U);
    msg.value = 0.417837298715;
    msg.sys_src = 64537U;

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
    msg.setTimeStamp(0.15957664822);
    msg.setSource(52725U);
    msg.setSourceEntity(93U);
    msg.setDestination(15575U);
    msg.setDestinationEntity(181U);
    msg.value = 0.66598667242;
    msg.sys_src = 2990U;

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
    msg.setTimeStamp(0.214859806442);
    msg.setSource(34197U);
    msg.setSourceEntity(67U);
    msg.setDestination(50825U);
    msg.setDestinationEntity(210U);
    msg.value = 0.403121918917;
    msg.units = 192U;

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
    msg.setTimeStamp(0.769058038262);
    msg.setSource(15620U);
    msg.setSourceEntity(194U);
    msg.setDestination(59244U);
    msg.setDestinationEntity(2U);
    msg.value = 0.357591354321;
    msg.units = 146U;

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
    msg.setTimeStamp(0.180225049031);
    msg.setSource(3510U);
    msg.setSourceEntity(9U);
    msg.setDestination(33257U);
    msg.setDestinationEntity(73U);
    msg.value = 0.801521666887;
    msg.units = 128U;

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
    msg.setTimeStamp(0.757545404736);
    msg.setSource(21192U);
    msg.setSourceEntity(91U);
    msg.setDestination(18399U);
    msg.setDestinationEntity(28U);
    msg.base_lat = 0.297449756165;
    msg.base_lon = 0.0872018764386;
    msg.base_time = 0.046758722939;
    IMC::RemoteCommand tmp_msg_0;
    tmp_msg_0.original_source = 49790U;
    tmp_msg_0.destination = 2890U;
    tmp_msg_0.timeout = 0.134505181084;
    IMC::EmergencyControl tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.command = 61U;
    IMC::PlanSpecification tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.plan_id.assign("HSNAYJXPLSOCBBEHGKFEZNQVI");
    tmp_tmp_tmp_msg_0_0_0.description.assign("VXLUEUSZNVFCUIIJDXIRVXEQTDDZFOUDSIVSXNTYLSPHJJMZJZMTHSSCQLZLBVQTIFNRUIFUYKOKDZGPWDYHYPAAIFHBKWGRDGRBAJUUGCHCYLJPJWVZELRMCBTXOUFRSPPTPQEYRNHAAGGESYEEPBNOVTBEGOCYKLTSZHOAMIBKNKBWFQHAKKNVYLGCLQJTJAZDEUXOVRHQAHRMDPZJOGQFMWOIPFNMDWKLMQWWACW");
    tmp_tmp_tmp_msg_0_0_0.vnamespace.assign("TENPIAQJBUMOMYHZLOASQDQQNYAKGNVGDCSNSHBLV");
    tmp_tmp_tmp_msg_0_0_0.start_man_id.assign("UDFQLIFBOSRQCNYLWWYGTXCHBWSKVNITACVZOYPO");
    IMC::PlanManeuver tmp_tmp_tmp_tmp_msg_0_0_0_0;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.maneuver_id.assign("OTALEADKXALQPTVWOEAEFILWZCGMNMIPNZORQBRSCFKAGOKAWPBFQPMGBHKYIJULBMDFMJGRDYIMFPALBRZCSLBNFHJUPZTXUGTSXTVDMUIOSPCPZXSNDJCYTOZHTJEYQNQODZFMIAWGRKZMEYCJUXKIKZEUTGHEXHSUPVJMV");
    IMC::StationKeepingExtended tmp_tmp_tmp_tmp_tmp_msg_0_0_0_0_0;
    tmp_tmp_tmp_tmp_tmp_msg_0_0_0_0_0.lat = 0.336022675953;
    tmp_tmp_tmp_tmp_tmp_msg_0_0_0_0_0.lon = 0.269001571062;
    tmp_tmp_tmp_tmp_tmp_msg_0_0_0_0_0.z = 0.233360546716;
    tmp_tmp_tmp_tmp_tmp_msg_0_0_0_0_0.z_units = 5U;
    tmp_tmp_tmp_tmp_tmp_msg_0_0_0_0_0.radius = 0.875687732344;
    tmp_tmp_tmp_tmp_tmp_msg_0_0_0_0_0.duration = 16239U;
    tmp_tmp_tmp_tmp_tmp_msg_0_0_0_0_0.speed = 0.98768803173;
    tmp_tmp_tmp_tmp_tmp_msg_0_0_0_0_0.speed_units = 153U;
    tmp_tmp_tmp_tmp_tmp_msg_0_0_0_0_0.popup_period = 14383U;
    tmp_tmp_tmp_tmp_tmp_msg_0_0_0_0_0.popup_duration = 16277U;
    tmp_tmp_tmp_tmp_tmp_msg_0_0_0_0_0.flags = 13U;
    tmp_tmp_tmp_tmp_tmp_msg_0_0_0_0_0.custom.assign("ZGCSGONDNYRFR");
    tmp_tmp_tmp_tmp_msg_0_0_0_0.data.set(tmp_tmp_tmp_tmp_tmp_msg_0_0_0_0_0);
    IMC::SoundSpeed tmp_tmp_tmp_tmp_tmp_msg_0_0_0_0_1;
    tmp_tmp_tmp_tmp_tmp_msg_0_0_0_0_1.value = 0.486669826323;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.start_actions.push_back(tmp_tmp_tmp_tmp_tmp_msg_0_0_0_0_1);
    IMC::RelativeState tmp_tmp_tmp_tmp_tmp_msg_0_0_0_0_2;
    tmp_tmp_tmp_tmp_tmp_msg_0_0_0_0_2.s_id.assign("MFEWMDPMJJOHCMNOZXCWWGYYESGFDAPHIVCGAVFIBBZIEHDUWCSJHFZOQZGRZTZKY");
    tmp_tmp_tmp_tmp_tmp_msg_0_0_0_0_2.dist = 0.381652289747;
    tmp_tmp_tmp_tmp_tmp_msg_0_0_0_0_2.err = 0.0769034369369;
    tmp_tmp_tmp_tmp_tmp_msg_0_0_0_0_2.ctrl_imp = 0.992751878177;
    tmp_tmp_tmp_tmp_tmp_msg_0_0_0_0_2.rel_dir_x = 0.606627456984;
    tmp_tmp_tmp_tmp_tmp_msg_0_0_0_0_2.rel_dir_y = 0.444080223624;
    tmp_tmp_tmp_tmp_tmp_msg_0_0_0_0_2.rel_dir_z = 0.368155099977;
    tmp_tmp_tmp_tmp_tmp_msg_0_0_0_0_2.err_x = 0.351926422011;
    tmp_tmp_tmp_tmp_tmp_msg_0_0_0_0_2.err_y = 0.0449120288546;
    tmp_tmp_tmp_tmp_tmp_msg_0_0_0_0_2.err_z = 0.149731818641;
    tmp_tmp_tmp_tmp_tmp_msg_0_0_0_0_2.rf_err_x = 0.276817571276;
    tmp_tmp_tmp_tmp_tmp_msg_0_0_0_0_2.rf_err_y = 0.992183143068;
    tmp_tmp_tmp_tmp_tmp_msg_0_0_0_0_2.rf_err_z = 0.296190337184;
    tmp_tmp_tmp_tmp_tmp_msg_0_0_0_0_2.rf_err_vx = 0.276615810494;
    tmp_tmp_tmp_tmp_tmp_msg_0_0_0_0_2.rf_err_vy = 0.0103286759926;
    tmp_tmp_tmp_tmp_tmp_msg_0_0_0_0_2.rf_err_vz = 0.154360526824;
    tmp_tmp_tmp_tmp_tmp_msg_0_0_0_0_2.ss_x = 0.936259817194;
    tmp_tmp_tmp_tmp_tmp_msg_0_0_0_0_2.ss_y = 0.10829391464;
    tmp_tmp_tmp_tmp_tmp_msg_0_0_0_0_2.ss_z = 0.991864602313;
    tmp_tmp_tmp_tmp_tmp_msg_0_0_0_0_2.virt_err_x = 0.674263187287;
    tmp_tmp_tmp_tmp_tmp_msg_0_0_0_0_2.virt_err_y = 0.674896978513;
    tmp_tmp_tmp_tmp_tmp_msg_0_0_0_0_2.virt_err_z = 0.409134931131;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.end_actions.push_back(tmp_tmp_tmp_tmp_tmp_msg_0_0_0_0_2);
    tmp_tmp_tmp_msg_0_0_0.maneuvers.push_back(tmp_tmp_tmp_tmp_msg_0_0_0_0);
    IMC::PlanTransition tmp_tmp_tmp_tmp_msg_0_0_0_1;
    tmp_tmp_tmp_tmp_msg_0_0_0_1.source_man.assign("OHIEKRIRNCBOODLFVKYZBAXXHPPKTUPUCNNRSCUHQWMSZMAFDPEALDDVQPMLMUOIVEPYPITQLPCXGIFTXJGQYBMFLXNGNNEMYAOVVHSVQEISIYGLEAZLKSJRTZEMJDAKDQTQIKYHRFQRZOGMVBWDTBOUFUIWRGXWHQGRGAXJZUTSDYCBTLSJNKFEWRBSVNTXAAFMWHAWDPBGHCBZJERKWSZUQSLCYTGYCBOHWOZJKLDJ");
    tmp_tmp_tmp_tmp_msg_0_0_0_1.dest_man.assign("QUCUMCSHBSEHCHHSVBSENJILQNVFUOPQHJOCJFFNBTECBZMNKNDSITJQVGPFCYYLKEHKQPKNYYPAACFWCQIJBWRLMROVIIATHZWJRWFOHDDRKGFHTKZZJXYZOBWLKJDAKDXJVPXSWETNXSEARAGUGGLJPXZBUGRQTYLXTBODSMUAYZOFRXIUI");
    tmp_tmp_tmp_tmp_msg_0_0_0_1.conditions.assign("EFARKZNJRMJJEZFGIYMXUATIXVCHZJWZKIRNOESEBUCSFTTQHRGKMOLUURODPAYFOJFNMEOCNBDMQADFHLWRXNYGQNCFVJPHJEHAALZSUYVXWZDNQTBGTWELUDIBNCOIURLNEQJWHQDPGTCPCALKWTRBVMF");
    tmp_tmp_tmp_msg_0_0_0.transitions.push_back(tmp_tmp_tmp_tmp_msg_0_0_0_1);
    IMC::SetEntityParameters tmp_tmp_tmp_tmp_msg_0_0_0_2;
    tmp_tmp_tmp_tmp_msg_0_0_0_2.name.assign("ZTFHNXCRJCOFDKJIYAHFNCKPPTJBTUBFRLUILEHSIWGZVEOSXPJDADEBQPLMZTRNLJYCTBQWMIGLDOTDVVYNAALQSKTYAKXKQUFNGCORJUWVILXHXUCNBZYX");
    IMC::EntityParameter tmp_tmp_tmp_tmp_tmp_msg_0_0_0_2_0;
    tmp_tmp_tmp_tmp_tmp_msg_0_0_0_2_0.name.assign("VSIEBNZPCGAUUGGBSQAFFKEPZLBRXZALGLOOCKTFWYAQBZAACMFSCWEJOMKAIRUTXOVNTNYRPNFRFEDQOFTMJTUDWOGKBJWTYZHNXNPDRYMSRUJJQNEQRKFGPVYYDXWIMMHEFGIOU");
    tmp_tmp_tmp_tmp_tmp_msg_0_0_0_2_0.value.assign("MSXAVKTYLWNCEGPMGWIRMYTGNZSSJNMPZVALQLUBVLHSVQECCJUTGUODDVRAUELWDRTJIMNGKYNGUGQPPWXRLWUBNMIBPHMKUCOHAABZDTVIBOMDDFRBOHSZJTXGSOFEIBUYXJFZFLAPHRSZEKBESJLEGRCAPCLHCVCWRRFTJJWYYPEAQKNFVUIYXQTYFHKTACFDDCOJOYEDPXQKGXIKMYMQKJEFZQODZXX");
    tmp_tmp_tmp_tmp_msg_0_0_0_2.params.push_back(tmp_tmp_tmp_tmp_tmp_msg_0_0_0_2_0);
    tmp_tmp_tmp_msg_0_0_0.start_actions.push_back(tmp_tmp_tmp_tmp_msg_0_0_0_2);
    tmp_tmp_msg_0_0.plan.set(tmp_tmp_tmp_msg_0_0_0);
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
    msg.setTimeStamp(0.302362345032);
    msg.setSource(41580U);
    msg.setSourceEntity(144U);
    msg.setDestination(37253U);
    msg.setDestinationEntity(112U);
    msg.base_lat = 0.750261166619;
    msg.base_lon = 0.618608549889;
    msg.base_time = 0.291693528162;

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
    msg.setTimeStamp(0.930129603672);
    msg.setSource(22485U);
    msg.setSourceEntity(74U);
    msg.setDestination(1505U);
    msg.setDestinationEntity(67U);
    msg.base_lat = 0.264033400919;
    msg.base_lon = 0.307808920743;
    msg.base_time = 0.536730137756;

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
    msg.setTimeStamp(0.680779829258);
    msg.setSource(21800U);
    msg.setSourceEntity(61U);
    msg.setDestination(27178U);
    msg.setDestinationEntity(171U);
    msg.base_lat = 0.272260051539;
    msg.base_lon = 0.340146589044;
    msg.base_time = 0.535803268694;
    const char tmp_msg_0[] = {14, -110, -6, 23, 18, 19, -128, 84, 119, 50, 85, -34, 81, -18, 124, -50, -106, -111, 111, 18, 50, -95, -110, 125, -18, 20, -91, -88, -115, -1, -108, -80, -117, -72, -54, -101, 31, -123, 47, 91, 5, 49, 105, -84, -47, 66, 71, 111, 29, -30, 118, 84, -64, -51, 11, -59, 12, 103, 66, -2, -120, -118, -8, -28, -67, -46, 118, 35, 54, 93, 107, -26, -100, -128, 42, -59, -79, -97, 123, 29, 14, -3, 77, -51, 107, 46, -61, 23, 17, -128, -126, 82, -89, -13, 28, 126, 96, -30, 96, -103, 10, 76, 101, -28, 60, -18, 125, 102, -44, -62, -80, -9, 48, 24, 10, -45, 27, -69, 0, 124, -2, 50, 102, -53, -75, 32, 96, -76};
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
    msg.setTimeStamp(0.717516779593);
    msg.setSource(3032U);
    msg.setSourceEntity(128U);
    msg.setDestination(51377U);
    msg.setDestinationEntity(148U);
    msg.base_lat = 0.832488193389;
    msg.base_lon = 0.17655835698;
    msg.base_time = 0.379219834786;
    const char tmp_msg_0[] = {23, 118, -60, 116, 64, -25, -78, -108, -60, 24, 114, 0, -59, -84, -38, -21, -48, 48, 52, -95, 66, 0, -34, 8, 73, -110, 9, -89, -91, 35, 55, 10, 36, -14, -75, -123, 119, -105, 82, -16, 37, 71, -92, -28, -107, 5, 118, 110, 100, 111, 126, 66, -107, -5, -65, 26, -72, 62, -59, 120, -114, -5, 96, 88, 111, 119, 89, 111, 75, -18, 121, 23, -58, 41, 122, -29, 94, -84, -4, 113, -42, -94, -27, -6, 89, 121, -22, 4, 81, -36, 56, 67, 92, -97, 115, 24, 44, 95, 54, -35, -59, 69, -127, -42, 69, -113, -62, -128, -54, 13, -90, 47, 50, -17, 2, 79, -11, 43, 93, -18, 89, -18, -122, -94, -100, 26, -48, 65, -106, 36, 113, 110, 50, 67, -68, -3, -99, -3, 47, -30, -90, -128, -62, -55, -97, 55, -96, 98, -122, 100, 125, -54, -85, -74, 98, 36, -81, 50, -83, 75, 0, 114, 65, -53, -4, -128, -54, 75, 101, -58, -49, -62, -96, 115, 118, 30, -41, 87, 98, -25, -44, -39, -125, -69, 3, -65, 66, 16, 70, -124, -80, 92, -109, -121, 3, -55, 99, 93, 18, -99, 27, 21, 39, -69, -86, -113, -35, -25, -119, -4, 8, -20, 41, -94, 66, -36, 109};
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
    msg.setTimeStamp(0.63149287665);
    msg.setSource(36969U);
    msg.setSourceEntity(77U);
    msg.setDestination(12625U);
    msg.setDestinationEntity(249U);
    msg.base_lat = 0.349868973066;
    msg.base_lon = 0.0834337648478;
    msg.base_time = 0.884345894321;
    const char tmp_msg_0[] = {15, -82, -13, 16, 26, -14, 56, -16, 106, 49, -95, -45, 119, 22, 26, 41, 124, -26, -55, 84, 2, -111, 59, -45, 77, -28, 90, -127, 113, -72, 115, -80, -70, 66, -103, -124, 122, -73, 29, 58, 121, -51, -57, -9, 31, -20, 90, -58, 99, 108, -84, -109, -75, -85, 120, 50, -26, -51, 106, 42, 46, 123, 112, -41, 105, -78, -42, 43, -9, 96, 27, 48, -107, -34, -34};
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
    msg.setTimeStamp(0.154992829425);
    msg.setSource(54922U);
    msg.setSourceEntity(221U);
    msg.setDestination(60232U);
    msg.setDestinationEntity(60U);
    msg.sys_id = 33929U;
    msg.priority = -57;
    msg.x = 7683;
    msg.y = 29610;
    msg.z = 6177;
    msg.t = 1202;
    IMC::ExtendedRSSI tmp_msg_0;
    tmp_msg_0.value = 0.615750065032;
    tmp_msg_0.units = 140U;
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
    msg.setTimeStamp(0.65834776996);
    msg.setSource(13345U);
    msg.setSourceEntity(214U);
    msg.setDestination(43573U);
    msg.setDestinationEntity(53U);
    msg.sys_id = 40817U;
    msg.priority = 108;
    msg.x = 21420;
    msg.y = 8372;
    msg.z = 18387;
    msg.t = 18160;
    IMC::Magnetometer tmp_msg_0;
    tmp_msg_0.timeout = 49994U;
    tmp_msg_0.lat = 0.418218175122;
    tmp_msg_0.lon = 0.888087518665;
    tmp_msg_0.z = 0.298026249225;
    tmp_msg_0.z_units = 203U;
    tmp_msg_0.speed = 0.831119560406;
    tmp_msg_0.speed_units = 135U;
    tmp_msg_0.bearing = 0.269399707427;
    tmp_msg_0.width = 0.497628247847;
    tmp_msg_0.direction = 40U;
    tmp_msg_0.custom.assign("DIOJDUNRXIWMIUQQHTXMBOWPOXCPBGQZDJFOVSMARCPSDOAZWHTOFUYGYFZGEINEGLHDPWULURHJVENUTSCFVYASEWNFQNRXUJDIKQLRBKZVHLZAUHAOHZLPWTKJFQLBDNKBVQILWBRIWKENSLXDJGZOXALCUSECUMSNEWKKKYMBYMKASRHQYPCDISFVROCRJFVNISMRJZEAXVGVCBFBEYPBZTH");
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
    msg.setTimeStamp(0.554973986475);
    msg.setSource(32674U);
    msg.setSourceEntity(8U);
    msg.setDestination(3312U);
    msg.setDestinationEntity(6U);
    msg.sys_id = 3537U;
    msg.priority = -10;
    msg.x = 11713;
    msg.y = -3712;
    msg.z = -23109;
    msg.t = -23935;
    IMC::SmsState tmp_msg_0;
    tmp_msg_0.seq = 1137042718U;
    tmp_msg_0.state = 59U;
    tmp_msg_0.error.assign("VMMCSABQGEJWCEYRGKNAZJTCPDLONXJZVRKEJJTQWUKPNGIQXDNDKOSPBRUYSWROISNAMGDDKAFXSSVBPRKLWETPYYMRFHFABVLGAIUZFMHQOCWLXIENLINGZBDPUWXEPRTBHEVLBMMIVJHQMQPJTCKAJZVYTNUZGSUTWOANDHXHZDYPF");
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
    msg.setTimeStamp(0.120987926582);
    msg.setSource(63486U);
    msg.setSourceEntity(41U);
    msg.setDestination(58144U);
    msg.setDestinationEntity(4U);
    msg.req_id = 45743U;
    msg.type = 173U;
    msg.max_size = 34163U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.203357774792;
    tmp_msg_0.base_lon = 0.847257633567;
    tmp_msg_0.base_time = 0.400972343401;
    IMC::RemoteCommand tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.original_source = 9741U;
    tmp_tmp_msg_0_0.destination = 25466U;
    tmp_tmp_msg_0_0.timeout = 0.350243904896;
    IMC::ProfileSample tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.depth = 30703U;
    tmp_tmp_tmp_msg_0_0_0.avg = 0.640282432456;
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
    msg.setTimeStamp(0.181933874374);
    msg.setSource(4298U);
    msg.setSourceEntity(194U);
    msg.setDestination(58638U);
    msg.setDestinationEntity(254U);
    msg.req_id = 8203U;
    msg.type = 236U;
    msg.max_size = 36791U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.334615560221;
    tmp_msg_0.base_lon = 0.487410517482;
    tmp_msg_0.base_time = 0.760408146824;
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
    msg.setTimeStamp(0.476483774692);
    msg.setSource(14590U);
    msg.setSourceEntity(226U);
    msg.setDestination(53660U);
    msg.setDestinationEntity(30U);
    msg.req_id = 20944U;
    msg.type = 96U;
    msg.max_size = 35793U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.792415442404;
    tmp_msg_0.base_lon = 0.532074428541;
    tmp_msg_0.base_time = 0.768910775133;
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
    msg.setTimeStamp(0.521937115626);
    msg.setSource(20975U);
    msg.setSourceEntity(131U);
    msg.setDestination(21265U);
    msg.setDestinationEntity(163U);
    msg.original_source = 49866U;
    msg.destination = 45058U;
    msg.timeout = 0.747585743137;
    IMC::ScheduledGoto tmp_msg_0;
    tmp_msg_0.arrival_time = 0.615230311823;
    tmp_msg_0.lat = 0.538785771838;
    tmp_msg_0.lon = 0.618085296276;
    tmp_msg_0.z = 0.88580834382;
    tmp_msg_0.z_units = 68U;
    tmp_msg_0.travel_z = 0.0185393051166;
    tmp_msg_0.travel_z_units = 62U;
    tmp_msg_0.delayed = 74U;
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
    msg.setTimeStamp(0.989187771889);
    msg.setSource(33560U);
    msg.setSourceEntity(153U);
    msg.setDestination(47581U);
    msg.setDestinationEntity(65U);
    msg.original_source = 24758U;
    msg.destination = 19493U;
    msg.timeout = 0.867934285448;
    IMC::Loiter tmp_msg_0;
    tmp_msg_0.timeout = 15518U;
    tmp_msg_0.lat = 0.266469970856;
    tmp_msg_0.lon = 0.693383245187;
    tmp_msg_0.z = 0.608876374573;
    tmp_msg_0.z_units = 100U;
    tmp_msg_0.duration = 5418U;
    tmp_msg_0.speed = 0.868606906703;
    tmp_msg_0.speed_units = 115U;
    tmp_msg_0.type = 131U;
    tmp_msg_0.radius = 0.150674668689;
    tmp_msg_0.length = 0.341074621205;
    tmp_msg_0.bearing = 0.527347081815;
    tmp_msg_0.direction = 183U;
    tmp_msg_0.custom.assign("WTBYQUBUSAKUQBNURNJQDBKPAPPFFQIIMPQZYCCYCVFIBKLXHUVWPACOMZRJHRFLVXOUVDREKQEHNGPFZMUECHATLBYTTENW");
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
    msg.setTimeStamp(0.674208929572);
    msg.setSource(51575U);
    msg.setSourceEntity(195U);
    msg.setDestination(43356U);
    msg.setDestinationEntity(189U);
    msg.original_source = 44548U;
    msg.destination = 23594U;
    msg.timeout = 0.265998872954;
    IMC::IoEvent tmp_msg_0;
    tmp_msg_0.type = 220U;
    tmp_msg_0.error.assign("SQLESCROHUTEONSJRZFNTHDFDDPBSCBXCSTAEFEEVQFBDUVQDTPHTWLBRQQQENQUZFZERGEFLFRBCVCAODUIFWNHYOOCLIHURCXNHNMSARUSGUKZHYWDKVRGAPBMAXTIQFWODCIMAKMFRTATLPWMMOPGJYMKKVHRWGBIXXLYDGYWKVJYVOVWJJKSINOZGPKIIXPCPZ");
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
    msg.setTimeStamp(0.651273524281);
    msg.setSource(20967U);
    msg.setSourceEntity(122U);
    msg.setDestination(50379U);
    msg.setDestinationEntity(115U);
    msg.type = 206U;
    msg.comm_interface = 57581U;
    msg.model = 51929U;
    msg.list.assign("PTCSQYWRXBFOOPUHYMDVBLEWSVZHVHWPHDBMRWKNSMXKRDJKUYZACUXIMCEDWCORVPNZQZNHFYCFZIOQABULCYJVAANXSJJXXJMQODMPEWNITWKTFDETVEOGGHARZTCCKVXOITAYLLPNSRFQSQRPOIOCZKSFIDKBZXTTIDDUZRGWLPDRGKFSVNQILGEAYSBIB");

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
    msg.setTimeStamp(0.377230874541);
    msg.setSource(50813U);
    msg.setSourceEntity(100U);
    msg.setDestination(47258U);
    msg.setDestinationEntity(144U);
    msg.type = 91U;
    msg.comm_interface = 35661U;
    msg.model = 22867U;
    msg.list.assign("ZONWBBRXAYOWMGDXQXWFLMZEJCXUIQUTYONKMXCNDSCVF");

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
    msg.setTimeStamp(0.7237071241);
    msg.setSource(27781U);
    msg.setSourceEntity(39U);
    msg.setDestination(64369U);
    msg.setDestinationEntity(200U);
    msg.type = 252U;
    msg.comm_interface = 25348U;
    msg.model = 62634U;
    msg.list.assign("YSYSIARKYLRVEPCVWRSHEGXLUAKQSFQBEJJCRTCKZBFWWUKQBPZNZJBOTCAREMIPNNDODFPCVDCUWRLKHAOTXPIVJDVONFSQHKISDXPHKKVOASIDGBYBYBYMWCFFGELDFTUQIMGSAHVRGTWPLQJAMYURZLXGHINZMJBWTFZYMWIXSYPSLLJVRWTPAGJUVKYBEHDXUNAOMUKQOCXTBZL");

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
    msg.setTimeStamp(0.0149029713926);
    msg.setSource(59911U);
    msg.setSourceEntity(215U);
    msg.setDestination(24778U);
    msg.setDestinationEntity(147U);
    msg.type = 108U;
    msg.req_id = 2708898192U;
    msg.ttl = 42804U;
    msg.code = 19U;
    msg.destination.assign("QSZLYREUCBCFYPDTQGLOGURDNEMWXAKLDJTIJLBSVYUAOTFAYVNBXKDKLHHLXGJXTHZDQAHZRNMCYUEVOTMIKQMUPXCBKSOOJSAZGNJFOKKJNQDOYHQDSIHBNZUZSWWWYAJIAKZBRZXCZFHRMFLONOWUUTNCCETVJNCI");
    msg.source.assign("QCTIICGWHABOZQRIIPKDNXWNSUQYFUMFGYEVVOTDOIXUKFQFVJTEBIBDZUZIMRYFBASIKNMWMJGQFESUCYN");
    msg.acknowledge = 39U;
    msg.status = 245U;
    const char tmp_msg_0[] = {92, 8, -49, -90, 107, -25, -27, -51, 25, -110, -77, -40, -106, -103, -59, 118, -69, 111, 125, 44, 93, -67, 55, 6, 59, 5, -120, -79, 106, 21, -105, -116, -2, -83, 13, 65, 27, 86, -17, 98, 70, -6, 99, 7, 3, 41, -95, -75, 1, 83, 104, 85, 68, 38, 86, -2, 37, -108, 82, 114, -99, -23, -87, 7, -17, -124, 96, -41, -82, 64, -118, -47, -112, 102, -108, -10, -82, -83};
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
    msg.setTimeStamp(0.521394881629);
    msg.setSource(38796U);
    msg.setSourceEntity(211U);
    msg.setDestination(55367U);
    msg.setDestinationEntity(10U);
    msg.type = 18U;
    msg.req_id = 122879322U;
    msg.ttl = 35561U;
    msg.code = 92U;
    msg.destination.assign("BUOYZCPGFEWALWZK");
    msg.source.assign("JLEOXSSLGNEETDBNDUBJMYSWKLAJWOHGKYTZDAVBBPLOVS");
    msg.acknowledge = 214U;
    msg.status = 236U;
    const char tmp_msg_0[] = {-50, -124, -23, -23, 78, -29, 34, -105, -85, 6, -14, 72, 46, 12, 94, -27, -127, 20, 67, -19, 44, -9, -122, 100, -18, 42, 72, -24, 55, 111, 108, -13, -55, -9, -47, 78, -17, -86, -22, -24, -56, 117, 79, -80, -46, -47, -113, 64, 8, -71, 100, -81, 33, 44, 51, -124, -59, -96, 78, -84, 4, -67, 3, 84, 104, -95, -56, 15, 95, -12, 78, -81, -111, -71, 104, -56, 51, -78, -67, -113, 77, -44, -14, 39, 23, 81, 109, 75, 44, -31, -125, -64, -7, 65, 116, -46, 76, -89, 98, 12, -18, -100, 7, 123, 6, 43, 71, -9, 54, -66, -60, -22, -93, 86, -117, -20, -44, 118, -121, 51, -84, 81, -3, -72, -127, 83, -59, 58, -93, -69, -119, 82, -83, 37, -41, 16, 2, -97, -107, 38, 2, 69, 86, -67, 108, -101, 5, 58, 43, 48, 42, 65, -118, -51, -98, 53, 62, -82, 96, 24, -121, 120, -82, -57, -93, -116, 58, 117, 88, 122, 2, -104, 20, -36, 85, -40, 57, -110, -81, 71, 66, -76, -25, -18, 80, -70, 11, -43, 29, 102, 115, -116, 27, 89, -47, -10, -90, 15, 18, -10, -90, -127, 117, -27, -4, 91, 75, -127, -97};
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
    msg.setTimeStamp(0.435359963592);
    msg.setSource(29003U);
    msg.setSourceEntity(182U);
    msg.setDestination(2382U);
    msg.setDestinationEntity(103U);
    msg.type = 59U;
    msg.req_id = 3714024263U;
    msg.ttl = 43467U;
    msg.code = 76U;
    msg.destination.assign("ASNSGKUWVDICUOJNKINUDRKCMTRTECHTVCWLIOVAODUOTRNFZEPABJTXKSYOFJRUZPAMCNKXAAWHXZJBGNUXQVMIIWBSVDQK");
    msg.source.assign("VJKQCSLTKFHEJUWEAJLZSFEUO");
    msg.acknowledge = 51U;
    msg.status = 196U;
    const char tmp_msg_0[] = {-26, 122, -84, -107, 48, 55, 126, 28, -91, 97, -1, 102, 120, -9, -83, 40, -3, -15, 9, -55, -31, 27, 124, 81, 7, 22, -36, 87, 7, -73, -87, -7, 2, -43, 18, -20, 49, 56, 15, -100, -50, -74, -110, 56, 92, -54, 87, 72, 17, -26, -60, -20, -13, 73, 39, -9, 89, 51, -80, -51, -61, -110, -39, -63, 104, -66, -56, -21, 125, 63, 30, 102, 3, -22, -73, 73, 58, -94, 61, -125, -26, 32, 81, -81, 90, 46, 85, 74, -89, 80, 61, -91, -41, -3, 9, -85, 81, 19, 9, 23, 14, -97, 110, -72, 122, -33, 7, 72, -18, -42, 96, -87, -81, 41, 76, 73, 60, -56, 31, -95, 12, -8, 79, -52, -69};
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
    msg.setTimeStamp(0.456881360957);
    msg.setSource(42526U);
    msg.setSourceEntity(10U);
    msg.setDestination(54975U);
    msg.setDestinationEntity(183U);
    msg.id = 142U;
    msg.range = 0.946608149899;

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
    msg.setTimeStamp(0.338663968007);
    msg.setSource(53504U);
    msg.setSourceEntity(248U);
    msg.setDestination(15265U);
    msg.setDestinationEntity(104U);
    msg.id = 117U;
    msg.range = 0.337064759675;

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
    msg.setTimeStamp(0.916115418462);
    msg.setSource(19782U);
    msg.setSourceEntity(155U);
    msg.setDestination(5736U);
    msg.setDestinationEntity(90U);
    msg.id = 78U;
    msg.range = 0.945356193955;

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
    msg.setTimeStamp(0.973877848618);
    msg.setSource(24873U);
    msg.setSourceEntity(233U);
    msg.setDestination(34491U);
    msg.setDestinationEntity(61U);
    msg.beacon.assign("RUYDZUZTRCIHDHULORFKDAJFGLAMJPZJOQKVDQRGHKOFFMTTWORSO");
    msg.lat = 0.893136838306;
    msg.lon = 0.573126534735;
    msg.depth = 0.769607282218;
    msg.query_channel = 137U;
    msg.reply_channel = 138U;
    msg.transponder_delay = 113U;

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
    msg.setTimeStamp(0.16790118088);
    msg.setSource(15751U);
    msg.setSourceEntity(41U);
    msg.setDestination(54588U);
    msg.setDestinationEntity(114U);
    msg.beacon.assign("IRJEMIVMBEFGYTYEVHSJIDSYMDMZTLQGRKJUGSLPCTJMVORXOKINHAKOAZZBZLLZLTWEFHRIWPXMGQOMTCHYXFCQDOIRDPLEWFCSPNTMNNKUPKBVSGKYLUVBSPGPOGBGXCR");
    msg.lat = 0.172299132384;
    msg.lon = 0.967434982753;
    msg.depth = 0.0498691135148;
    msg.query_channel = 204U;
    msg.reply_channel = 206U;
    msg.transponder_delay = 46U;

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
    msg.setTimeStamp(0.788703492236);
    msg.setSource(10765U);
    msg.setSourceEntity(163U);
    msg.setDestination(27027U);
    msg.setDestinationEntity(74U);
    msg.beacon.assign("EHGYYBJKJIZNTTBDVDWEBBPYARXPCLMBPBAYXAOYXIORZDJNAOMQOLUXNIWFQMTLZNJXHZHSSXTYNUGPURGKEOIVJMHLMJXESMFOWBWGYPZNJNSNZSAZ");
    msg.lat = 0.29717947152;
    msg.lon = 0.366742484388;
    msg.depth = 0.127810412737;
    msg.query_channel = 21U;
    msg.reply_channel = 108U;
    msg.transponder_delay = 66U;

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
    msg.setTimeStamp(0.557464964551);
    msg.setSource(60159U);
    msg.setSourceEntity(50U);
    msg.setDestination(46480U);
    msg.setDestinationEntity(179U);
    msg.op = 107U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("GRIGNEYKMNDHWRSUBLQIIKPCCECYFPOPUTKHMBRVOXSWSBVTWVAUDXIBXCRCYLGGVQQLWTLWRSZLXBO");
    tmp_msg_0.lat = 0.86951607921;
    tmp_msg_0.lon = 0.570241687183;
    tmp_msg_0.depth = 0.148695855481;
    tmp_msg_0.query_channel = 72U;
    tmp_msg_0.reply_channel = 215U;
    tmp_msg_0.transponder_delay = 217U;
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
    msg.setTimeStamp(0.376831950303);
    msg.setSource(9566U);
    msg.setSourceEntity(3U);
    msg.setDestination(57857U);
    msg.setDestinationEntity(99U);
    msg.op = 53U;

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
    msg.setTimeStamp(0.395275089485);
    msg.setSource(31784U);
    msg.setSourceEntity(43U);
    msg.setDestination(59854U);
    msg.setDestinationEntity(4U);
    msg.op = 24U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("WARBWUNOWVJPBVUKOJEVJAQTGNPXIIHSOQNPFMUANGJPCBRIVJSYIKMYMLKVNDAUFZSXPVCKZHYPNJFFKTQSYEDMESPZUKQWBDEMSOQMHEBRXGUAOTWAXSXFKDFIYLLNSZHKYFPVTMOHXDWXLQ");
    tmp_msg_0.lat = 0.709742734123;
    tmp_msg_0.lon = 0.504077398408;
    tmp_msg_0.depth = 0.375212346738;
    tmp_msg_0.query_channel = 104U;
    tmp_msg_0.reply_channel = 84U;
    tmp_msg_0.transponder_delay = 231U;
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
    msg.setTimeStamp(0.510725288477);
    msg.setSource(47540U);
    msg.setSourceEntity(58U);
    msg.setDestination(52475U);
    msg.setDestinationEntity(223U);
    IMC::SmsRequest tmp_msg_0;
    tmp_msg_0.req_id = 57028U;
    tmp_msg_0.destination.assign("IZLDKSTCZLVCODJZQYHDTRMJWGQQBYXNCWGLEDAJJHLSEGDUOFIYZLBUTSUBHEJWNVCUILXPZQTASEVMQUHPGVOSSSMPIUVRADUYYGNYVITEAWVRPXVCFEZAIHXTYYCKXMMJYJGXFOBGNEIIKPENAQQOMBWLEUSAWEOBNCNAWZFQWKONKXTAMUFFMMLPIKJHTQDNZXLZKRDGHFZWG");
    tmp_msg_0.timeout = 0.128988608405;
    tmp_msg_0.sms_text.assign("ENYEUZYEKGISLBDYEOUFUYVTEGMZCLKKEDSZFIZBNPDKHNOPPEHAXOOGLVAUGJGZSZDJVRPXQHSFWQRDTRONMXIXHJRCWRZCIXYSTPJUAXLMKMDFXFJWSBRZWNSMOIYLESHIYOCCVUDBCBRZTKLFRUXMQFHVLJTBYMOPKYQNURNHLMYGOIBBZTLJUCFNEFSAA");
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
    msg.setTimeStamp(0.742083751928);
    msg.setSource(34907U);
    msg.setSourceEntity(69U);
    msg.setDestination(11205U);
    msg.setDestinationEntity(34U);
    IMC::DesiredPitch tmp_msg_0;
    tmp_msg_0.value = 0.505485671348;
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
    msg.setTimeStamp(0.693971968689);
    msg.setSource(53324U);
    msg.setSourceEntity(186U);
    msg.setDestination(24622U);
    msg.setDestinationEntity(194U);
    IMC::EstimatedFreq tmp_msg_0;
    tmp_msg_0.value = 0.440360880085;
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
    msg.setTimeStamp(0.996239716356);
    msg.setSource(37573U);
    msg.setSourceEntity(157U);
    msg.setDestination(22880U);
    msg.setDestinationEntity(190U);
    msg.op = 172U;
    msg.system.assign("KJSNYTADGHMDTYLHKCWPFGDXOBSNENVYZAEGCCJOWFEGEBAHFQTKICMLZKVMLLUKRWWUSTIOUXYOJRFIAQJCMZJWZZEOZCARIYAQSJYGNMMIRSHTGWPXCUIIXXEQZNFMQNGBTUBTBWLBUZGJDMVLXORFSFCQLUHRYWHTFBARZTYJHBA");
    msg.range = 0.665168040016;
    IMC::AutopilotMode tmp_msg_0;
    tmp_msg_0.autonomy = 11U;
    tmp_msg_0.mode.assign("EZWTAUDTCJUECZHNZXRFCDAQADGMZSJRRLIWJPJKPZBWBJDOJAEFBMXFMOOLLCCYACDYGDGFMTGRCFYXNYIQURNBFPGNKAPWPKTHQGXSSYPEWLLVAUCTUUXGQUKZPYRYBWTQETVIIODVVVKOKDHOJVKVRLWJDGASXWTALBHEHSYJWSLBOAZMXIGYYQPZNNFIVMCHZQEUEFNQSJI");
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
    msg.setTimeStamp(0.798978054552);
    msg.setSource(17874U);
    msg.setSourceEntity(207U);
    msg.setDestination(5539U);
    msg.setDestinationEntity(246U);
    msg.op = 135U;
    msg.system.assign("KXCVOAYYAGFIVDZFLHJJNFFCBPUBNAXTRBQXDRUAJZKPCICITXRETIOSUTSYJDDWCIVGDNVYDWIBLDLNTKHGWWGVHFVSQLWKXOTYZADKYSQXMNSZHUGQZAVERTSOCTMHUWZFQTJLMFHRCOQRVPPPUCGOQBEHZFGINKVMBZEJPGXKMGRBQRUPJSYOCPQLIEFLPYMNJSYKEPHMXWAMFKXHLDOVEBBWWNERAOBDXLUIQEITUSJKN");
    msg.range = 0.304205534179;
    IMC::Heartbeat tmp_msg_0;
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
    msg.setTimeStamp(0.532627321268);
    msg.setSource(39856U);
    msg.setSourceEntity(78U);
    msg.setDestination(35516U);
    msg.setDestinationEntity(17U);
    msg.op = 180U;
    msg.system.assign("BAMTCSGMJUYNASBYUGKKHOCJYTKYIWSPWLLFZSJFXNLUBEFQLFQLBZTCXFOFRGWIPQOIQKVUWWOAIZQAMJKTBDMRRBOPYNPXKSDUHDXZKDUEHXVFXJGHTMBQVRPCTAQZRHDKAPGRTVJOZPEZNFYJIKEEHNQEPDLESNXCOLGOU");
    msg.range = 0.0474676227019;
    IMC::PopUp tmp_msg_0;
    tmp_msg_0.timeout = 32427U;
    tmp_msg_0.lat = 0.478696340808;
    tmp_msg_0.lon = 0.535161868321;
    tmp_msg_0.z = 0.968035513804;
    tmp_msg_0.z_units = 215U;
    tmp_msg_0.speed = 0.42091060427;
    tmp_msg_0.speed_units = 243U;
    tmp_msg_0.duration = 1U;
    tmp_msg_0.radius = 0.331147140009;
    tmp_msg_0.flags = 237U;
    tmp_msg_0.custom.assign("GLCEHFDBDUBDKXUVVHTKDGHPWMRUPZXDZGXIJUPOORQJMBEWOKLICKYSZPHGPAYSTZNVFTCLLZHFMETAJLLESHIONXLGPZSGWKBFCOJENAMMKFJTYSGAFWOSDQCRANWSPRIJIYVNJBXVMQYLAHXIFKCUDVUTNEOIOTRVYPGWJGRWMGCUDLWRFFLTRSKFNQBQWUJAZDNICUVYNAEOHYQKSZYVMXOXWQRSRAIXZBZTBTBBAJMNDECVMPQPCYIK");
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
    msg.setTimeStamp(0.43595686667);
    msg.setSource(41794U);
    msg.setSourceEntity(177U);
    msg.setDestination(52830U);
    msg.setDestinationEntity(111U);

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
    msg.setTimeStamp(0.452924291441);
    msg.setSource(27185U);
    msg.setSourceEntity(75U);
    msg.setDestination(2844U);
    msg.setDestinationEntity(88U);

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
    msg.setTimeStamp(0.797297955256);
    msg.setSource(18319U);
    msg.setSourceEntity(194U);
    msg.setDestination(3803U);
    msg.setDestinationEntity(108U);

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
    msg.setTimeStamp(0.0032673710499);
    msg.setSource(10808U);
    msg.setSourceEntity(249U);
    msg.setDestination(1898U);
    msg.setDestinationEntity(146U);
    msg.list.assign("BULTMMHPDYVDTCITZKEJOOWQTFNLTAONNNNLGBNVBKTXSEXGNUZORTKZYLPZDTSAHKRIROCMTWZWGAHSVYWXFIQGAKQUPMSFBYIDXGHXOTIJDEVUDPGHFLVZUWMRCZLYEASWNAVSKLJPVLEOBFLOCMLPCRGAJCSMXXFFXRAENJCZKPYQIHRYJIWHMFKCVUQDWFGBHVDBRIQM");

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
    msg.setTimeStamp(0.874420225164);
    msg.setSource(20691U);
    msg.setSourceEntity(237U);
    msg.setDestination(54231U);
    msg.setDestinationEntity(212U);
    msg.list.assign("GOHVJKCAYVGYAHHCFEHVWGAKFREERTVGGIQWUSNQUYOCMEIKBGBTWCSVPXNJOKLGTLKTZIWLITKCYUKHMUAKPXQLRABBVWHNELTFWOUZWWLFIDUPBCJROZSGNOYQFXXDAVRQ");

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
    msg.setTimeStamp(0.817147139254);
    msg.setSource(16256U);
    msg.setSourceEntity(134U);
    msg.setDestination(10637U);
    msg.setDestinationEntity(34U);
    msg.list.assign("YEYJWVKAHQRNHVQHIABWVSTRLUCQUORWEEBNHWEBLTDPMIXOTZZREFXMSIJFSNRANQBOCXCPLCYCDGIZNMMUUKSDTDFPXLUYSPWJZDLHMECGEUSLYHLAPFCFXABMGESYZJGGYATBXEYNEXROUTLSRJDOWRPGRGMDYMVRUPVJOFBJKV");

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
    msg.setTimeStamp(0.708253219483);
    msg.setSource(7230U);
    msg.setSourceEntity(128U);
    msg.setDestination(59687U);
    msg.setDestinationEntity(208U);
    msg.peer.assign("ZCVFHGWETAZZVMTCKPSANTISLTQBXKOGGBKJKNIMURXRAYDHTNDNEVXWVBLAUIUIXLBZPDOEAWLITEBOPFVVRVCWBUZIFMRUPLXZMICJSEBQYQFDEROAN");
    msg.rssi = 0.434006229625;
    msg.integrity = 43232U;

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
    msg.setTimeStamp(0.643431503808);
    msg.setSource(54090U);
    msg.setSourceEntity(137U);
    msg.setDestination(48865U);
    msg.setDestinationEntity(129U);
    msg.peer.assign("ZHMWBTWDCBZNOOZUUACRJRHYINYWVGGLNXRHGAAJKYOGZCBYMKDYITGNNOWYGZFQDPTPZXNPQQFYMBKPTAUUBPSBRFCJIJUQEEFIXKPEWMFDQGARMOYUESFKJWLKRTEFSLHOOXGSZJQQKRRQDFTCGIRZIEVXNLCHEVHDBCTKWWTLVOMTSEVLWPPINLEVX");
    msg.rssi = 0.620122569712;
    msg.integrity = 48733U;

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
    msg.setTimeStamp(0.40554301805);
    msg.setSource(57551U);
    msg.setSourceEntity(198U);
    msg.setDestination(32052U);
    msg.setDestinationEntity(105U);
    msg.peer.assign("YUBRXKSQHZSAJIMLMHQRDATTEHWDWYNBCUEGPDXYBODBXQLAGXGIFNFPWATQHPOLCENURSOHIXKRENOJXLDJZCVFXXJPLBUYRWDOXNQPKVUZKZMSRYRSXSLJVMVBRENGDQJQOPGFIYOVWPSGFFQDBUKSLMTRKZTEWAIOYPIDCMEKHHUJLNUEABVTAFCBMIAUYHMNFBVQADGOGJUHCZTGCKWLWZFFSAWOMLGYCTSIZCWEYQEJJKMPV");
    msg.rssi = 0.110613701047;
    msg.integrity = 51302U;

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
    msg.setTimeStamp(0.660841927822);
    msg.setSource(52443U);
    msg.setSourceEntity(204U);
    msg.setDestination(23532U);
    msg.setDestinationEntity(202U);
    msg.req_id = 437U;
    msg.destination.assign("FGYCSOIYXMSUQE");
    msg.timeout = 0.337119529836;
    msg.range = 0.02726936352;
    msg.type = 235U;
    IMC::Elevator tmp_msg_0;
    tmp_msg_0.timeout = 43730U;
    tmp_msg_0.flags = 244U;
    tmp_msg_0.lat = 0.499576528801;
    tmp_msg_0.lon = 0.328527631015;
    tmp_msg_0.start_z = 0.891456874967;
    tmp_msg_0.start_z_units = 245U;
    tmp_msg_0.end_z = 0.287131236364;
    tmp_msg_0.end_z_units = 202U;
    tmp_msg_0.radius = 0.65088895869;
    tmp_msg_0.speed = 0.54810828398;
    tmp_msg_0.speed_units = 247U;
    tmp_msg_0.custom.assign("QREUUAXFKODIHOBCWFBCPSRKOWYZUCLSNUPBUVIRXREVFNCGVTMSYYJWMQBQLWBNLXBPWQUDVNEPAJPPMVIBEZHXWKAQDCNOBSDKOPMZLYDDEVQCXOH");
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
    msg.setTimeStamp(0.157694038136);
    msg.setSource(11075U);
    msg.setSourceEntity(188U);
    msg.setDestination(62664U);
    msg.setDestinationEntity(179U);
    msg.req_id = 31683U;
    msg.destination.assign("YLGIUBTWXHZNJZUOZNDLKCYNYRBHFWZITMMXOMBCIPSYSPPSNCLRLEVLTFGCMRHKSRNBAWVPTDGDPANNPRULWOIAZABCEPBUOXSGTERJSAOAIALBKGUVVGYEHSNNVHRSVCDEOXPDKIJJTI");
    msg.timeout = 0.0415662371066;
    msg.range = 0.23429760519;
    msg.type = 191U;
    IMC::Heartbeat tmp_msg_0;
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
    msg.setTimeStamp(0.976418521566);
    msg.setSource(58151U);
    msg.setSourceEntity(233U);
    msg.setDestination(23637U);
    msg.setDestinationEntity(33U);
    msg.req_id = 27116U;
    msg.destination.assign("MDJHUJMMFDKXIJOKJVECXCUSIUBTHUGWGJJTRAGLPBOZLDDPYRLOXEBYNPGANZBIVMRTNEWPWFVMQEHFTOTRWRZTMQGXJZUOVOWPCLVDOECAUCAWGVENTZXJISLVWGIIHAKFKKJCTSSQNSPOSFHALJDYVVQTBNEZHKAYMWYMQSENXDZKRGGQSDVLQKUFBTLHYUXSRQQZIKFZNZBDUBIFWAWFAUYPHPXIRRNYLFEBMYCPPDIK");
    msg.timeout = 0.628352643354;
    msg.range = 0.0599177618243;
    msg.type = 87U;
    IMC::FollowSystem tmp_msg_0;
    tmp_msg_0.system = 46307U;
    tmp_msg_0.duration = 55257U;
    tmp_msg_0.speed = 0.707926231333;
    tmp_msg_0.speed_units = 213U;
    tmp_msg_0.x = 0.186573558188;
    tmp_msg_0.y = 0.901430741071;
    tmp_msg_0.z = 0.0830373474708;
    tmp_msg_0.z_units = 6U;
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
    msg.setTimeStamp(0.992140756874);
    msg.setSource(33889U);
    msg.setSourceEntity(55U);
    msg.setDestination(5505U);
    msg.setDestinationEntity(234U);
    msg.req_id = 33597U;
    msg.type = 176U;
    msg.status = 49U;
    msg.info.assign("KSFAUEAEDDBAKIZLRQPXEZEFZTPWDXGMBYPSHVQLRGVDWHBMDWDLMKUWRNRQRJKCOZNXNSATPZPGNJOJIAALEVXYOJCKOKQAIFBTMWEBSYNGHFLJVSDFTOBREYZHEZHBCJCOSTWCLFKSIQUSXRYRIURVGWOTXHCVMTCQFKXRHFSIOMWBBIGGTXVMKHADYANWHPESWKFUJBLZUVAGULQTNOGZDPMLIYUNPYTMQZDJMNV");
    msg.range = 0.577867626726;

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
    msg.setTimeStamp(0.390859993413);
    msg.setSource(20432U);
    msg.setSourceEntity(219U);
    msg.setDestination(51342U);
    msg.setDestinationEntity(64U);
    msg.req_id = 16416U;
    msg.type = 48U;
    msg.status = 166U;
    msg.info.assign("NZRPOXMKRAWPKOBGJHBTGZEGNNXEKPJWUOWGXAEQSTZIDTLJMCYGWIBYFLXLGFJMEFOXGFDAFKKDLSYIGFPJMTYPUSYMSSPEDLHNAWWHGSHNHMRNZBKROZDCLYVGMPDOMVDIYAQUCLUJQVWHNIFQWTZIIVVUPEZUUTPQJQCKALLJEVCNLIEYRXTRBZOHWVEACCMFRRIWNCJBSZKCXVBAHHYFSVBAFXSTVMQIQH");
    msg.range = 0.108689896237;

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
    msg.setTimeStamp(0.981367953702);
    msg.setSource(42447U);
    msg.setSourceEntity(169U);
    msg.setDestination(48835U);
    msg.setDestinationEntity(40U);
    msg.req_id = 54368U;
    msg.type = 135U;
    msg.status = 145U;
    msg.info.assign("PHIKENODANBTPLDMXVHLSRCVBWGJFAVCQSSPUYKVOS");
    msg.range = 0.522553002724;

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
    msg.setTimeStamp(0.320527291766);
    msg.setSource(18756U);
    msg.setSourceEntity(89U);
    msg.setDestination(63256U);
    msg.setDestinationEntity(185U);
    msg.value = 20878;

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
    msg.setTimeStamp(0.11368071835);
    msg.setSource(57563U);
    msg.setSourceEntity(138U);
    msg.setDestination(21550U);
    msg.setDestinationEntity(246U);
    msg.value = 16621;

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
    msg.setTimeStamp(0.205535668574);
    msg.setSource(8016U);
    msg.setSourceEntity(183U);
    msg.setDestination(36063U);
    msg.setDestinationEntity(46U);
    msg.value = 30063;

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
    msg.setTimeStamp(0.518337819453);
    msg.setSource(38734U);
    msg.setSourceEntity(50U);
    msg.setDestination(48278U);
    msg.setDestinationEntity(71U);
    msg.value = 0.343409307166;

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
    msg.setTimeStamp(0.790606361389);
    msg.setSource(19998U);
    msg.setSourceEntity(23U);
    msg.setDestination(47965U);
    msg.setDestinationEntity(166U);
    msg.value = 0.309892495302;

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
    msg.setTimeStamp(0.744172646464);
    msg.setSource(49506U);
    msg.setSourceEntity(34U);
    msg.setDestination(17584U);
    msg.setDestinationEntity(155U);
    msg.value = 0.770644959053;

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
    msg.setTimeStamp(0.870755394339);
    msg.setSource(51439U);
    msg.setSourceEntity(252U);
    msg.setDestination(21156U);
    msg.setDestinationEntity(130U);
    msg.value = 0.925794047748;

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
    msg.setTimeStamp(0.868502304653);
    msg.setSource(16581U);
    msg.setSourceEntity(102U);
    msg.setDestination(27086U);
    msg.setDestinationEntity(193U);
    msg.value = 0.833466331517;

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
    msg.setTimeStamp(0.239616051517);
    msg.setSource(44611U);
    msg.setSourceEntity(88U);
    msg.setDestination(24698U);
    msg.setDestinationEntity(49U);
    msg.value = 0.620471363492;

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
    msg.setTimeStamp(0.52917589945);
    msg.setSource(24073U);
    msg.setSourceEntity(99U);
    msg.setDestination(44548U);
    msg.setDestinationEntity(45U);
    msg.validity = 9472U;
    msg.type = 152U;
    msg.utc_year = 18715U;
    msg.utc_month = 79U;
    msg.utc_day = 72U;
    msg.utc_time = 0.43366867434;
    msg.lat = 0.427555647284;
    msg.lon = 0.181709449462;
    msg.height = 0.960144537809;
    msg.satellites = 181U;
    msg.cog = 0.582651805594;
    msg.sog = 0.250753013478;
    msg.hdop = 0.645090180083;
    msg.vdop = 0.451571678093;
    msg.hacc = 0.181739197678;
    msg.vacc = 0.651941231326;

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
    msg.setTimeStamp(0.246504067282);
    msg.setSource(48328U);
    msg.setSourceEntity(97U);
    msg.setDestination(19845U);
    msg.setDestinationEntity(116U);
    msg.validity = 14988U;
    msg.type = 0U;
    msg.utc_year = 33954U;
    msg.utc_month = 119U;
    msg.utc_day = 218U;
    msg.utc_time = 0.121212846536;
    msg.lat = 0.0114560603123;
    msg.lon = 0.637001662468;
    msg.height = 0.900178590975;
    msg.satellites = 49U;
    msg.cog = 0.591840843727;
    msg.sog = 0.300561803952;
    msg.hdop = 0.328668816275;
    msg.vdop = 0.428517907217;
    msg.hacc = 0.471659746264;
    msg.vacc = 0.0611191737005;

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
    msg.setTimeStamp(0.0593396053193);
    msg.setSource(31146U);
    msg.setSourceEntity(45U);
    msg.setDestination(15733U);
    msg.setDestinationEntity(192U);
    msg.validity = 58506U;
    msg.type = 68U;
    msg.utc_year = 44294U;
    msg.utc_month = 183U;
    msg.utc_day = 238U;
    msg.utc_time = 0.0503309492322;
    msg.lat = 0.768907950851;
    msg.lon = 0.28490313339;
    msg.height = 0.732550179683;
    msg.satellites = 23U;
    msg.cog = 0.643725900461;
    msg.sog = 0.69653709784;
    msg.hdop = 0.88265782061;
    msg.vdop = 0.853651475303;
    msg.hacc = 0.386137674412;
    msg.vacc = 0.8061964746;

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
    msg.setTimeStamp(0.379338610329);
    msg.setSource(15575U);
    msg.setSourceEntity(164U);
    msg.setDestination(64713U);
    msg.setDestinationEntity(221U);
    msg.time = 0.936986198989;
    msg.phi = 0.751388860499;
    msg.theta = 0.942212952969;
    msg.psi = 0.585971027621;
    msg.psi_magnetic = 0.737848724194;

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
    msg.setTimeStamp(0.562216420566);
    msg.setSource(20951U);
    msg.setSourceEntity(71U);
    msg.setDestination(22273U);
    msg.setDestinationEntity(160U);
    msg.time = 0.965036903748;
    msg.phi = 0.809018133334;
    msg.theta = 0.644568640169;
    msg.psi = 0.846438934008;
    msg.psi_magnetic = 0.931424903895;

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
    msg.setTimeStamp(0.00673508491597);
    msg.setSource(26653U);
    msg.setSourceEntity(123U);
    msg.setDestination(43692U);
    msg.setDestinationEntity(241U);
    msg.time = 0.060338358708;
    msg.phi = 0.806621177505;
    msg.theta = 0.896328368349;
    msg.psi = 0.373151198798;
    msg.psi_magnetic = 0.897845223226;

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
    msg.setTimeStamp(0.286227259354);
    msg.setSource(4534U);
    msg.setSourceEntity(4U);
    msg.setDestination(3803U);
    msg.setDestinationEntity(101U);
    msg.time = 0.392936661087;
    msg.x = 0.976672774209;
    msg.y = 0.203059325493;
    msg.z = 0.88132150455;
    msg.timestep = 0.159951201179;

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
    msg.setTimeStamp(0.143188852562);
    msg.setSource(34312U);
    msg.setSourceEntity(97U);
    msg.setDestination(31640U);
    msg.setDestinationEntity(90U);
    msg.time = 0.354252188562;
    msg.x = 0.120713707696;
    msg.y = 0.0476923072497;
    msg.z = 0.775304910084;
    msg.timestep = 0.769531067422;

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
    msg.setTimeStamp(0.750459474963);
    msg.setSource(16669U);
    msg.setSourceEntity(205U);
    msg.setDestination(19060U);
    msg.setDestinationEntity(251U);
    msg.time = 0.413519177909;
    msg.x = 0.66870821831;
    msg.y = 0.686914297642;
    msg.z = 0.493891686972;
    msg.timestep = 0.446856776361;

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
    msg.setTimeStamp(0.684037763087);
    msg.setSource(62331U);
    msg.setSourceEntity(29U);
    msg.setDestination(45383U);
    msg.setDestinationEntity(79U);
    msg.time = 0.310761734926;
    msg.x = 0.701766205103;
    msg.y = 0.192448350857;
    msg.z = 0.739571121995;

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
    msg.setTimeStamp(0.758131092311);
    msg.setSource(64843U);
    msg.setSourceEntity(86U);
    msg.setDestination(31544U);
    msg.setDestinationEntity(194U);
    msg.time = 0.594805924549;
    msg.x = 0.529809228302;
    msg.y = 0.44349784113;
    msg.z = 0.382667369233;

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
    msg.setTimeStamp(0.177172788951);
    msg.setSource(5296U);
    msg.setSourceEntity(91U);
    msg.setDestination(9997U);
    msg.setDestinationEntity(176U);
    msg.time = 0.210120381266;
    msg.x = 0.609468399806;
    msg.y = 0.287071873294;
    msg.z = 0.622820897127;

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
    msg.setTimeStamp(0.0162008979511);
    msg.setSource(20418U);
    msg.setSourceEntity(200U);
    msg.setDestination(1884U);
    msg.setDestinationEntity(238U);
    msg.time = 0.704290524009;
    msg.x = 0.34503006572;
    msg.y = 0.231340022704;
    msg.z = 0.730785382053;

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
    msg.setTimeStamp(0.472162808455);
    msg.setSource(65026U);
    msg.setSourceEntity(175U);
    msg.setDestination(50610U);
    msg.setDestinationEntity(187U);
    msg.time = 0.277865234831;
    msg.x = 0.865355771358;
    msg.y = 0.335154030935;
    msg.z = 0.0282285515709;

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
    msg.setTimeStamp(0.853047977526);
    msg.setSource(44505U);
    msg.setSourceEntity(217U);
    msg.setDestination(13242U);
    msg.setDestinationEntity(226U);
    msg.time = 0.0759106687751;
    msg.x = 0.197564571084;
    msg.y = 0.11873372338;
    msg.z = 0.21555047424;

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
    msg.setTimeStamp(0.028309559231);
    msg.setSource(55481U);
    msg.setSourceEntity(190U);
    msg.setDestination(24593U);
    msg.setDestinationEntity(35U);
    msg.time = 0.961075794543;
    msg.x = 0.666235634019;
    msg.y = 0.15166970809;
    msg.z = 0.597378230955;

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
    msg.setTimeStamp(0.0498529819607);
    msg.setSource(63462U);
    msg.setSourceEntity(142U);
    msg.setDestination(18541U);
    msg.setDestinationEntity(176U);
    msg.time = 0.148021727242;
    msg.x = 0.31393005724;
    msg.y = 0.0509939437344;
    msg.z = 0.0837347079578;

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
    msg.setTimeStamp(0.509833500963);
    msg.setSource(31589U);
    msg.setSourceEntity(195U);
    msg.setDestination(52728U);
    msg.setDestinationEntity(28U);
    msg.time = 0.829966665827;
    msg.x = 0.861597976891;
    msg.y = 0.42456428995;
    msg.z = 0.906245526384;

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
    msg.setTimeStamp(0.545919626067);
    msg.setSource(49652U);
    msg.setSourceEntity(120U);
    msg.setDestination(6395U);
    msg.setDestinationEntity(110U);
    msg.validity = 57U;
    msg.x = 0.123846769936;
    msg.y = 0.78376121501;
    msg.z = 0.342939680955;

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
    msg.setTimeStamp(0.115184410659);
    msg.setSource(48795U);
    msg.setSourceEntity(124U);
    msg.setDestination(57222U);
    msg.setDestinationEntity(233U);
    msg.validity = 10U;
    msg.x = 0.702000582739;
    msg.y = 0.340925298611;
    msg.z = 0.82567778115;

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
    msg.setTimeStamp(0.45628657372);
    msg.setSource(56628U);
    msg.setSourceEntity(166U);
    msg.setDestination(13327U);
    msg.setDestinationEntity(131U);
    msg.validity = 236U;
    msg.x = 0.981293867625;
    msg.y = 0.838947136794;
    msg.z = 0.71677179032;

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
    msg.setTimeStamp(0.5539551693);
    msg.setSource(1133U);
    msg.setSourceEntity(4U);
    msg.setDestination(43506U);
    msg.setDestinationEntity(6U);
    msg.validity = 52U;
    msg.x = 0.749472742075;
    msg.y = 0.909272430418;
    msg.z = 0.22808100469;

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
    msg.setTimeStamp(0.95929578393);
    msg.setSource(31270U);
    msg.setSourceEntity(102U);
    msg.setDestination(7923U);
    msg.setDestinationEntity(217U);
    msg.validity = 252U;
    msg.x = 0.880177536157;
    msg.y = 0.87197291341;
    msg.z = 0.578973815184;

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
    msg.setTimeStamp(0.01342049724);
    msg.setSource(14433U);
    msg.setSourceEntity(230U);
    msg.setDestination(47698U);
    msg.setDestinationEntity(247U);
    msg.validity = 230U;
    msg.x = 0.954441028512;
    msg.y = 0.0283883252329;
    msg.z = 0.152057223633;

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
    msg.setTimeStamp(0.101140033713);
    msg.setSource(15534U);
    msg.setSourceEntity(218U);
    msg.setDestination(24195U);
    msg.setDestinationEntity(137U);
    msg.time = 0.684244039006;
    msg.x = 0.559463947577;
    msg.y = 0.209772214528;
    msg.z = 0.360482553169;

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
    msg.setTimeStamp(0.271690840523);
    msg.setSource(62267U);
    msg.setSourceEntity(64U);
    msg.setDestination(15427U);
    msg.setDestinationEntity(23U);
    msg.time = 0.113921962094;
    msg.x = 0.972165099346;
    msg.y = 0.189247313641;
    msg.z = 0.995096471448;

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
    msg.setTimeStamp(0.503904945609);
    msg.setSource(55446U);
    msg.setSourceEntity(74U);
    msg.setDestination(31590U);
    msg.setDestinationEntity(254U);
    msg.time = 0.0978024529782;
    msg.x = 0.757253983266;
    msg.y = 0.336262064823;
    msg.z = 0.782731555076;

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
    msg.setTimeStamp(0.69894067588);
    msg.setSource(45443U);
    msg.setSourceEntity(148U);
    msg.setDestination(41788U);
    msg.setDestinationEntity(10U);
    msg.validity = 91U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.896615539594;
    tmp_msg_0.y = 0.269777832221;
    tmp_msg_0.z = 0.870027835989;
    tmp_msg_0.phi = 0.771879038682;
    tmp_msg_0.theta = 0.515776175701;
    tmp_msg_0.psi = 0.0109590864936;
    msg.location.push_back(tmp_msg_0);
    IMC::BeamConfig tmp_msg_1;
    tmp_msg_1.beam_width = 0.116355262001;
    tmp_msg_1.beam_height = 0.0678003364306;
    msg.beam_config.push_back(tmp_msg_1);
    msg.value = 0.440211635315;

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
    msg.setTimeStamp(0.495454256879);
    msg.setSource(23054U);
    msg.setSourceEntity(126U);
    msg.setDestination(10597U);
    msg.setDestinationEntity(56U);
    msg.validity = 7U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.492380534546;
    tmp_msg_0.y = 0.239218012526;
    tmp_msg_0.z = 0.179199287927;
    tmp_msg_0.phi = 0.64510343816;
    tmp_msg_0.theta = 0.617861262847;
    tmp_msg_0.psi = 0.813053816068;
    msg.location.push_back(tmp_msg_0);
    msg.value = 0.224441457577;

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
    msg.setTimeStamp(0.685013441486);
    msg.setSource(7886U);
    msg.setSourceEntity(68U);
    msg.setDestination(27979U);
    msg.setDestinationEntity(234U);
    msg.validity = 87U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.707395184285;
    tmp_msg_0.y = 0.603230029231;
    tmp_msg_0.z = 0.195423171403;
    tmp_msg_0.phi = 0.786748730966;
    tmp_msg_0.theta = 0.780312368882;
    tmp_msg_0.psi = 0.486623140935;
    msg.location.push_back(tmp_msg_0);
    msg.value = 0.314997970058;

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
    msg.setTimeStamp(0.59443163777);
    msg.setSource(61753U);
    msg.setSourceEntity(138U);
    msg.setDestination(22774U);
    msg.setDestinationEntity(78U);
    msg.value = 0.939060185163;

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
    msg.setTimeStamp(0.903235330756);
    msg.setSource(36727U);
    msg.setSourceEntity(4U);
    msg.setDestination(59889U);
    msg.setDestinationEntity(157U);
    msg.value = 0.559499500131;

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
    msg.setTimeStamp(0.693666429071);
    msg.setSource(19198U);
    msg.setSourceEntity(133U);
    msg.setDestination(31959U);
    msg.setDestinationEntity(237U);
    msg.value = 0.429418215306;

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
    msg.setTimeStamp(0.373436720046);
    msg.setSource(28402U);
    msg.setSourceEntity(104U);
    msg.setDestination(1625U);
    msg.setDestinationEntity(61U);
    msg.value = 0.265288863561;

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
    msg.setTimeStamp(0.516089214445);
    msg.setSource(57346U);
    msg.setSourceEntity(151U);
    msg.setDestination(41827U);
    msg.setDestinationEntity(31U);
    msg.value = 0.60266772111;

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
    msg.setTimeStamp(0.0116445010499);
    msg.setSource(15358U);
    msg.setSourceEntity(61U);
    msg.setDestination(59135U);
    msg.setDestinationEntity(192U);
    msg.value = 0.371728160694;

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
    msg.setTimeStamp(0.565825168422);
    msg.setSource(12739U);
    msg.setSourceEntity(121U);
    msg.setDestination(28474U);
    msg.setDestinationEntity(69U);
    msg.value = 0.585702851979;

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
    msg.setTimeStamp(0.121423632116);
    msg.setSource(53676U);
    msg.setSourceEntity(48U);
    msg.setDestination(44796U);
    msg.setDestinationEntity(3U);
    msg.value = 0.307381959758;

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
    msg.setTimeStamp(0.793408258913);
    msg.setSource(37556U);
    msg.setSourceEntity(87U);
    msg.setDestination(52925U);
    msg.setDestinationEntity(89U);
    msg.value = 0.134938798221;

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
    msg.setTimeStamp(0.522191315044);
    msg.setSource(39761U);
    msg.setSourceEntity(37U);
    msg.setDestination(3721U);
    msg.setDestinationEntity(91U);
    msg.value = 0.119160246288;

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
    msg.setTimeStamp(0.885914981631);
    msg.setSource(8828U);
    msg.setSourceEntity(57U);
    msg.setDestination(20000U);
    msg.setDestinationEntity(30U);
    msg.value = 0.488556386046;

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
    msg.setTimeStamp(0.0209070220799);
    msg.setSource(31573U);
    msg.setSourceEntity(177U);
    msg.setDestination(24133U);
    msg.setDestinationEntity(23U);
    msg.value = 0.91662058046;

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
    msg.setTimeStamp(0.195778826677);
    msg.setSource(28246U);
    msg.setSourceEntity(51U);
    msg.setDestination(19531U);
    msg.setDestinationEntity(47U);
    msg.value = 0.641438910509;

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
    msg.setTimeStamp(0.0876365930169);
    msg.setSource(21078U);
    msg.setSourceEntity(26U);
    msg.setDestination(37241U);
    msg.setDestinationEntity(62U);
    msg.value = 0.581608727511;

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
    msg.setTimeStamp(0.201147848835);
    msg.setSource(39592U);
    msg.setSourceEntity(119U);
    msg.setDestination(52063U);
    msg.setDestinationEntity(112U);
    msg.value = 0.677277825015;

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
    msg.setTimeStamp(0.466770397592);
    msg.setSource(44880U);
    msg.setSourceEntity(120U);
    msg.setDestination(5661U);
    msg.setDestinationEntity(142U);
    msg.value = 0.967816965039;

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
    msg.setTimeStamp(0.440236429785);
    msg.setSource(692U);
    msg.setSourceEntity(1U);
    msg.setDestination(4375U);
    msg.setDestinationEntity(231U);
    msg.value = 0.26159513026;

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
    msg.setTimeStamp(0.323221662606);
    msg.setSource(54931U);
    msg.setSourceEntity(87U);
    msg.setDestination(27564U);
    msg.setDestinationEntity(86U);
    msg.value = 0.104585164753;

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
    msg.setTimeStamp(0.460233765382);
    msg.setSource(5852U);
    msg.setSourceEntity(10U);
    msg.setDestination(62231U);
    msg.setDestinationEntity(213U);
    msg.value = 0.377404737609;

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
    msg.setTimeStamp(0.766082712337);
    msg.setSource(55168U);
    msg.setSourceEntity(233U);
    msg.setDestination(24787U);
    msg.setDestinationEntity(102U);
    msg.value = 0.250177648206;

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
    msg.setTimeStamp(0.685517507567);
    msg.setSource(22590U);
    msg.setSourceEntity(30U);
    msg.setDestination(552U);
    msg.setDestinationEntity(234U);
    msg.value = 0.504043084622;

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
    msg.setTimeStamp(0.850825067326);
    msg.setSource(11000U);
    msg.setSourceEntity(202U);
    msg.setDestination(46298U);
    msg.setDestinationEntity(112U);
    msg.value = 0.926933722634;

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
    msg.setTimeStamp(0.902558579092);
    msg.setSource(47771U);
    msg.setSourceEntity(101U);
    msg.setDestination(19133U);
    msg.setDestinationEntity(180U);
    msg.value = 0.38457185784;

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
    msg.setTimeStamp(0.0604189321449);
    msg.setSource(4089U);
    msg.setSourceEntity(67U);
    msg.setDestination(16111U);
    msg.setDestinationEntity(188U);
    msg.value = 0.808382574118;

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
    msg.setTimeStamp(0.949344443061);
    msg.setSource(46937U);
    msg.setSourceEntity(52U);
    msg.setDestination(349U);
    msg.setDestinationEntity(49U);
    msg.direction = 0.473780351218;
    msg.speed = 0.846268768506;
    msg.turbulence = 0.875958920881;

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
    msg.setTimeStamp(0.985102987234);
    msg.setSource(47431U);
    msg.setSourceEntity(99U);
    msg.setDestination(41556U);
    msg.setDestinationEntity(165U);
    msg.direction = 0.347603482782;
    msg.speed = 0.412037664013;
    msg.turbulence = 0.489281244922;

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
    msg.setTimeStamp(0.497809486399);
    msg.setSource(20278U);
    msg.setSourceEntity(208U);
    msg.setDestination(10701U);
    msg.setDestinationEntity(130U);
    msg.direction = 0.195461723103;
    msg.speed = 0.0790064496547;
    msg.turbulence = 0.670677583698;

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
    msg.setTimeStamp(0.805716019951);
    msg.setSource(33245U);
    msg.setSourceEntity(99U);
    msg.setDestination(4536U);
    msg.setDestinationEntity(32U);
    msg.value = 0.466099810442;

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
    msg.setTimeStamp(0.111490073626);
    msg.setSource(9699U);
    msg.setSourceEntity(23U);
    msg.setDestination(60769U);
    msg.setDestinationEntity(104U);
    msg.value = 0.222507096502;

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
    msg.setTimeStamp(0.866341154062);
    msg.setSource(31794U);
    msg.setSourceEntity(165U);
    msg.setDestination(39338U);
    msg.setDestinationEntity(111U);
    msg.value = 0.972096427275;

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
    msg.setTimeStamp(0.40346993053);
    msg.setSource(37168U);
    msg.setSourceEntity(136U);
    msg.setDestination(16722U);
    msg.setDestinationEntity(19U);
    msg.value.assign("QSMZWTHGXNEMBKATUZLEZYHVOBEROLXOIZOTCVRWEGVKZNLDCWISKYMQRICIYWBJPSFNQIKJKARROKQOVBXDSIACUNUALXOXKWVLJGBMVQMBVFQYIJAMGYUZTGXKEKNSYUHFZAWDMFJQUNENJPRGHHWAYDPSFHMCIDZPZCFFQOHDJFVAKJFDHALVSTISPBWFJIZPTTUUHTLCUPCRABBRXNOLCSDPNYQQDNWDYXWVREUXLG");

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
    msg.setTimeStamp(0.981612548392);
    msg.setSource(12730U);
    msg.setSourceEntity(32U);
    msg.setDestination(21067U);
    msg.setDestinationEntity(169U);
    msg.value.assign("ORSFXJRXZNKAZCQSQYPNIUPHGDEKXGFLZULEYLNTNDEHZBEVGYNMVAHUPWYY");

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
    msg.setTimeStamp(0.18784483031);
    msg.setSource(57577U);
    msg.setSourceEntity(227U);
    msg.setDestination(63577U);
    msg.setDestinationEntity(247U);
    msg.value.assign("TLVENZVSWKOLANPJYVVPVHEGLXBRWAGDZUWOBFQIRTMEOELDQJJPFYYFDQPCXGIMSVKMJSHCO");

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
    msg.setTimeStamp(0.754606162337);
    msg.setSource(35208U);
    msg.setSourceEntity(222U);
    msg.setDestination(5941U);
    msg.setDestinationEntity(151U);
    const char tmp_msg_0[] = {-5, 121, -88, 121, 30, -34, 76, 49, -86, -20, 80, -110, 13, -60, 19, -126, -97, -126, 85, -74, 79, 69, -13, -58, 1, -36, 39, -2, 76, 30, -8, 107, -22, 103, -4, 73, 107, 96, -128, 2, 108, -17, 51, -127, -125, 99, -101, -8, 90, 73, 40, 121, -43, 28, 88, -92, 66, -34, -67, 22, 54, -1, -42, 79, -23, 48, 91, 70, -74, -126, -85, -87, 50, 69, -100, -87, 29, 18, 64, -51, 90, -4, -125, -74, 62, -6, -83, -32, -54, -95, 29, -93, -116, -88, 30, -88, 71, 82, 120, 116, -49, 46, 34, 103, 107, -6, 32, -26, 66, -30, -19, 110, -44, 91, 55, 86, -84, -56, -25, -50, -124, 117, -33, -110, 66, -74, -92, -51, 62, 83, 60, 44, -104, -56, 65, 64, 119, 8, -123, -41, -126, -12, -98, -21, -57, -112, 72};
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
    msg.setTimeStamp(0.00968100494706);
    msg.setSource(41400U);
    msg.setSourceEntity(154U);
    msg.setDestination(9743U);
    msg.setDestinationEntity(235U);
    const char tmp_msg_0[] = {30, 126, -91, -82, 56, 75, -118, -100, 39, -59, 15, 19, 11, -43, 84, -14, -67, -83, 63, -12, 53, 15, 110, 118, 126, -103, -72, 100, 120, 37, -83, -109, 61, 35, 123, 83, 98, -74, 22, 117, 17, -22, 41, 62, 54, -15, -43, -2, 34, -124, -15, -99, -27, -57, -91, 71, 36, -112, 84, -75, -43, -64, 35, -81, -124, 50, 103, 47, 76, -48, -54, -38, 6, -76, -98, 28, -37, 125, -81, 73, 11, -48, 33, -86, -32, 6, -13, -84, -25, 88, 70, 102, 2, 103, -66, -44, -81, -107, -11, -32, -60, 88, -53, 26, 60, 90, -29, -23, -117, 103, -125, -52, -63, -101, 97, 48, 114, 114, 37, 55, 20, 14, 71, 24, 119, 107, 100, 107, -86, -97, -74, -101, 75, -52, 97, 61, -64, 15, 89, 69, 98, -126, 101, -46, 79, -58, 65, 84, 12, 66, 63, -47, -33, -74, -3, 73, -73, -23, 29, -22, 93, -115, 38, 114, -10, 29, 77, -22, 106, -110, -127, -112, 89, -72, -49, -33, 105, 79, -41};
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
    msg.setTimeStamp(0.166178350041);
    msg.setSource(34317U);
    msg.setSourceEntity(151U);
    msg.setDestination(14048U);
    msg.setDestinationEntity(204U);
    const char tmp_msg_0[] = {-103, -14, -1, 16, 110, -125, -3, -57, -8, 1, 111, 85, 118, 16, -47, -98, -59, -5, 112, -75, -49, 95, 32, -31, -71, 115, 43, 109, 93, 102, 81, 79, -7, 94, -95, -102, -37, -14, 35, -64, -96, 101, 81, -116, 12, -49, -71, -57, -17, 92, 56, 36, 50, 64, 44, 110, -28, 87, 76, -90, 122, -24, 83, -8, -33, -24, 66, 113, 52, 126, 67, -100, 28, -19, 90, 27, -116, 5, -108, 101, 28, -85, 24, -8, 126, 120, -103, -114, -109, -70, -12, -50, 45, -48, -18, -84, 6, 25, 19, -5, -21, 4, -30, 0, -74, -91, -61, 59, 112, 66, 25, 126, 41, -39, -9, -54, 76, -17, -44, -13, 106, 103, -20, 51, -51, -4, 76, 109, 93, -34, -87, -24, -73, 1, -113, -128, -30, -8, 3, 60, -122, -34, -13, -7, -6, -100, 125, 71, -43, 64, 121, 30, 66, 57, -41, -80, -3, -49, -17, -34, 14, -56, 74, -91, -13, 56, 81, 29, -62, -99, -119, 81, -33, -45, -19, -59, -84};
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
    msg.setTimeStamp(0.830108967867);
    msg.setSource(4791U);
    msg.setSourceEntity(125U);
    msg.setDestination(11142U);
    msg.setDestinationEntity(168U);
    msg.value = 0.998355113662;

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
    msg.setTimeStamp(0.205737033882);
    msg.setSource(51683U);
    msg.setSourceEntity(113U);
    msg.setDestination(45938U);
    msg.setDestinationEntity(36U);
    msg.value = 0.171375220096;

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
    msg.setTimeStamp(0.569083798695);
    msg.setSource(25951U);
    msg.setSourceEntity(217U);
    msg.setDestination(54715U);
    msg.setDestinationEntity(58U);
    msg.value = 0.852686511492;

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
    msg.setTimeStamp(0.896861074281);
    msg.setSource(27712U);
    msg.setSourceEntity(30U);
    msg.setDestination(24443U);
    msg.setDestinationEntity(64U);
    msg.type = 107U;
    msg.frequency = 2400342533U;
    msg.min_range = 8703U;
    msg.max_range = 38934U;
    msg.bits_per_point = 47U;
    msg.scale_factor = 0.0545840733505;
    const char tmp_msg_0[] = {-5, -113, 74, 14, 54, -94, 42, 11, 44, -70, 33, 51, 63, -61, -48, -18, 31, -5, -120, -37, -56, -39, -46, 61, -48, 6, -3, -112, 124, -47, -18, -116, -21, 21, 92, -23, -34, 56, -108, -32, -4, 74, 56, 6, -29, -34, 14, 22, -89, 112, 15, 69, 9, 47, 45, 31, 1, -107, 59, -25, 78, 4, 9, -115, 34, 117, -86, 13, 21, 58, -47, -98, 114, 26, -54, 119, 73, -91, 95, 104, -76, 94, -119, -81, -85, -42, -103, -12, -39, 83, 18, -60, -50, -16, 91, 92, -91, 29, 86, -64, -6, -73, -31, -7, 7, 105, 18, 58, 126, -13, -92, 23, 83, -104, 118, -43, -28, -72, 7, -65, -101, 64, 64, 86, -18, 30, 102, -119, -35, -18, 43, 96, 111, 15, -44, 2, -10, -107, -108, 76, -46, -105, 50, 60, 74, 13, -68, 0, -25, 42, 80, 8, -18, 87, 86, 76, 10, -46, -9, -92, 85, -122, -64, -93, 117, -91, 11, -115, -115, 54, -9, -127, 39, -61, -70, 78, -17, 9, 126, 9, -14, -33, -93, 71, 33, -64, 82, -79, -122, 2, -82, -45};
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
    msg.setTimeStamp(0.0554950825699);
    msg.setSource(20478U);
    msg.setSourceEntity(3U);
    msg.setDestination(47632U);
    msg.setDestinationEntity(94U);
    msg.type = 97U;
    msg.frequency = 2978995295U;
    msg.min_range = 52009U;
    msg.max_range = 62816U;
    msg.bits_per_point = 36U;
    msg.scale_factor = 0.275846017288;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.431555225247;
    tmp_msg_0.beam_height = 0.408030221134;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {-115, 41, -100, -45, 59, 49, 0, -6, 105, -85, -53, 52, -51, 40, -110, -66, -55, 38, -92, 119, 71, 33, 65, -100, 95, 11, 27, 27, -50, 25, 6, 37, -23, 52, -64, 124, -90, 90, 40, -87, 79, 34, -100, 34, 40, -54, 33, 29, -13, -50, -117, 6, 52, 1, -7, 109, -37, 100, 5, -5, 68, -97, 99, -77, 89, -34, 80, -80, -99, -79, 39, -26, 109, 98, 49, 0, 98, 81, 18, -4, -44, -31, -36, 92, 73, -44, 95, 35, -107, -104, 75, -114, -118, -124, -16, -32, 99, 10, 90, -34, 34, -64, 112, 14, -103, 41, 109, -119, -115, -94, -117, 4, -82, 101, -99, 115, -87, -38, 20, -121, -103, -10, -104, -57, 39, 41, 33, -118, -72, -32, -43, -14, 26, 20, 93};
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
    msg.setTimeStamp(0.669390404488);
    msg.setSource(50842U);
    msg.setSourceEntity(133U);
    msg.setDestination(47469U);
    msg.setDestinationEntity(39U);
    msg.type = 126U;
    msg.frequency = 338663728U;
    msg.min_range = 20468U;
    msg.max_range = 47299U;
    msg.bits_per_point = 0U;
    msg.scale_factor = 0.0934088398325;
    const char tmp_msg_0[] = {-76, -24, -12, -50, 82, -53, -31, -59, 105, 59, -26, 22, -112, 8, 35, 72, -58, -25, -40, -91, 22, 125, -108, 47, 109, 81, 36, -28, 73, 71, -120, -117, 91, -60, -61, 67, -56, -66, 34, -45, -63, -10, 95, -82, 50, -44, -111, 52, 66, -99, 75, -41, 14, 58, 114, -54, -126, 53, -36, 68, 86, -29, 65, -94, 111, 15, -27, 77, 30, 34, -37, 121, -87, 77, -37, -102, 102, 6, -75, -75, -63, 27, -45, -32, -92, -19, 89, -21, 96, 8, 96, -32, 124, 104, -119, -90, -100, 14, -5, 81, -48, 104, -126, -25, -119, -29, 24, -81, -31, -3, -11, -31, -81, 109, 0, 70, -35, -40, 50, -65, 1, -51, -76, 87, 51, -90, -75, -2, 107, 115, -103, -62, 116, -122, 45, 38, 9, 50, 104};
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
    msg.setTimeStamp(0.947664565207);
    msg.setSource(2990U);
    msg.setSourceEntity(168U);
    msg.setDestination(35844U);
    msg.setDestinationEntity(203U);

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
    msg.setTimeStamp(0.403313036838);
    msg.setSource(854U);
    msg.setSourceEntity(159U);
    msg.setDestination(23065U);
    msg.setDestinationEntity(91U);

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
    msg.setTimeStamp(0.640398754478);
    msg.setSource(4037U);
    msg.setSourceEntity(197U);
    msg.setDestination(22849U);
    msg.setDestinationEntity(250U);

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
    msg.setTimeStamp(0.737352439356);
    msg.setSource(62292U);
    msg.setSourceEntity(122U);
    msg.setDestination(54207U);
    msg.setDestinationEntity(227U);
    msg.op = 249U;

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
    msg.setTimeStamp(0.576829341192);
    msg.setSource(5093U);
    msg.setSourceEntity(236U);
    msg.setDestination(16584U);
    msg.setDestinationEntity(208U);
    msg.op = 231U;

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
    msg.setTimeStamp(0.77472980849);
    msg.setSource(34203U);
    msg.setSourceEntity(2U);
    msg.setDestination(46775U);
    msg.setDestinationEntity(162U);
    msg.op = 158U;

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
    msg.setTimeStamp(0.432952169424);
    msg.setSource(45014U);
    msg.setSourceEntity(184U);
    msg.setDestination(57092U);
    msg.setDestinationEntity(34U);
    msg.value = 0.658225036879;
    msg.confidence = 0.661277928755;
    msg.opmodes.assign("QWHZXVIOKEWISXGHBOXOJMJMFFPTKDMNSQHHOXNPTYXPDCNWYFVMTOPEUEIZTVCYLOATZIREIVBAKPIGNCERCXXGABDFJQKROEDQWAAAESLGSBLDHGNJZZGSLHLUXLUXRCYCNMDFQPVWHIWCUEQVHKTRKDIBYLPQXG");

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
    msg.setTimeStamp(0.538294865152);
    msg.setSource(58807U);
    msg.setSourceEntity(38U);
    msg.setDestination(38050U);
    msg.setDestinationEntity(9U);
    msg.value = 0.0172105940545;
    msg.confidence = 0.573841966289;
    msg.opmodes.assign("BOWYBCPRGHEBKUIPFSUBLJCUZVQKZILRUHHRMRMFUQPENARXGRMOUKKJTBQHYMIJZZCVBODAPDPZHVEDYVKRIKNJGTVXRDMXFEWSDMAKHFXYWUXYCQLCQEDIJABNQBHTGXWEMPNDOSUTFSMFXTNWIKAHACMOIYQMLF");

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
    msg.setTimeStamp(0.443190707801);
    msg.setSource(28242U);
    msg.setSourceEntity(219U);
    msg.setDestination(63574U);
    msg.setDestinationEntity(118U);
    msg.value = 0.281680612997;
    msg.confidence = 0.997777599491;
    msg.opmodes.assign("IQNRNYUAPGJXCRAEHKXJLVVXTOBMTFEFEGFGQZXWXLCEYNPBGTOTMSSJJTBSINWXOIIBQHIRNKBTFMKBGYHWUZMWYOITDJJOOGZKBJHCBPDTAURRZZPHFYNZKLWFEKVPDAYDTEXSFCFIVDNCVWMNFEUFKSJMSVYEJAHVHCACGOZRMYONZDLCYTKQWRHVRXMXLAQHQGYMBIKZLPXLMWSGBILQAUSDVPOAURDUGCVWSAEPCDEUDI");

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
    msg.setTimeStamp(0.812075786383);
    msg.setSource(19241U);
    msg.setSourceEntity(39U);
    msg.setDestination(40228U);
    msg.setDestinationEntity(57U);
    msg.itow = 1109322214U;
    msg.lat = 0.470332394336;
    msg.lon = 0.11401505386;
    msg.height_ell = 0.763924950561;
    msg.height_sea = 0.707440592214;
    msg.hacc = 0.372882717443;
    msg.vacc = 0.45808883543;
    msg.vel_n = 0.324122604751;
    msg.vel_e = 0.754245324187;
    msg.vel_d = 0.740774906974;
    msg.speed = 0.0155015780204;
    msg.gspeed = 0.504308346377;
    msg.heading = 0.771594866528;
    msg.sacc = 0.115266237624;
    msg.cacc = 0.0918541633479;

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
    msg.setTimeStamp(0.163508063326);
    msg.setSource(42047U);
    msg.setSourceEntity(201U);
    msg.setDestination(15533U);
    msg.setDestinationEntity(38U);
    msg.itow = 1507607528U;
    msg.lat = 0.158790487664;
    msg.lon = 0.403404932803;
    msg.height_ell = 0.353407088479;
    msg.height_sea = 0.531675398776;
    msg.hacc = 0.494027663262;
    msg.vacc = 0.393028241222;
    msg.vel_n = 0.203440265658;
    msg.vel_e = 0.0829123422607;
    msg.vel_d = 0.505766330996;
    msg.speed = 0.898722845811;
    msg.gspeed = 0.841850403687;
    msg.heading = 0.0735120303318;
    msg.sacc = 0.438227929305;
    msg.cacc = 0.96365349834;

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
    msg.setTimeStamp(0.835300680789);
    msg.setSource(40588U);
    msg.setSourceEntity(224U);
    msg.setDestination(21036U);
    msg.setDestinationEntity(65U);
    msg.itow = 84770921U;
    msg.lat = 0.221607658487;
    msg.lon = 0.301310592396;
    msg.height_ell = 0.161274296186;
    msg.height_sea = 0.249809755486;
    msg.hacc = 0.923410415962;
    msg.vacc = 0.612991445702;
    msg.vel_n = 0.956469813694;
    msg.vel_e = 0.99558942185;
    msg.vel_d = 0.811059667254;
    msg.speed = 0.0364844047728;
    msg.gspeed = 0.776089247006;
    msg.heading = 0.647818177053;
    msg.sacc = 0.869916012813;
    msg.cacc = 0.989521015342;

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
    msg.setTimeStamp(0.367533912566);
    msg.setSource(6143U);
    msg.setSourceEntity(80U);
    msg.setDestination(32435U);
    msg.setDestinationEntity(101U);
    msg.id = 38U;
    msg.value = 0.390875897766;

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
    msg.setTimeStamp(0.24188846104);
    msg.setSource(52679U);
    msg.setSourceEntity(19U);
    msg.setDestination(51922U);
    msg.setDestinationEntity(115U);
    msg.id = 180U;
    msg.value = 0.701962598244;

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
    msg.setTimeStamp(0.95176802374);
    msg.setSource(30792U);
    msg.setSourceEntity(97U);
    msg.setDestination(17436U);
    msg.setDestinationEntity(78U);
    msg.id = 8U;
    msg.value = 0.152007040593;

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
    msg.setTimeStamp(0.6530701999);
    msg.setSource(47679U);
    msg.setSourceEntity(198U);
    msg.setDestination(56160U);
    msg.setDestinationEntity(146U);
    msg.x = 0.130089328647;
    msg.y = 0.607313947134;
    msg.z = 0.813123120009;
    msg.phi = 0.353776521505;
    msg.theta = 0.979965341078;
    msg.psi = 0.396898081408;

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
    msg.setTimeStamp(0.978063000718);
    msg.setSource(58004U);
    msg.setSourceEntity(132U);
    msg.setDestination(55694U);
    msg.setDestinationEntity(170U);
    msg.x = 0.787621058526;
    msg.y = 0.415138875936;
    msg.z = 0.737675044377;
    msg.phi = 0.52897950696;
    msg.theta = 0.142505814666;
    msg.psi = 0.521945000416;

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
    msg.setTimeStamp(0.135287085471);
    msg.setSource(18336U);
    msg.setSourceEntity(2U);
    msg.setDestination(43766U);
    msg.setDestinationEntity(1U);
    msg.x = 0.520497241543;
    msg.y = 0.640223648682;
    msg.z = 0.577529482089;
    msg.phi = 0.387406195222;
    msg.theta = 0.644059369981;
    msg.psi = 0.412754022157;

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
    msg.setTimeStamp(0.700052723149);
    msg.setSource(17264U);
    msg.setSourceEntity(89U);
    msg.setDestination(4004U);
    msg.setDestinationEntity(47U);
    msg.beam_width = 0.459655683983;
    msg.beam_height = 0.403938803724;

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
    msg.setTimeStamp(0.354166393961);
    msg.setSource(29991U);
    msg.setSourceEntity(79U);
    msg.setDestination(27869U);
    msg.setDestinationEntity(248U);
    msg.beam_width = 0.289681013249;
    msg.beam_height = 0.565037099223;

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
    msg.setTimeStamp(0.756001665419);
    msg.setSource(30550U);
    msg.setSourceEntity(238U);
    msg.setDestination(14460U);
    msg.setDestinationEntity(145U);
    msg.beam_width = 0.0385173836403;
    msg.beam_height = 0.797539131703;

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
    msg.setTimeStamp(0.391572207935);
    msg.setSource(59699U);
    msg.setSourceEntity(81U);
    msg.setDestination(23274U);
    msg.setDestinationEntity(62U);
    msg.sane = 19U;

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
    msg.setTimeStamp(0.0694624149896);
    msg.setSource(11354U);
    msg.setSourceEntity(233U);
    msg.setDestination(38464U);
    msg.setDestinationEntity(87U);
    msg.sane = 22U;

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
    msg.setTimeStamp(0.137161367196);
    msg.setSource(50180U);
    msg.setSourceEntity(245U);
    msg.setDestination(4942U);
    msg.setDestinationEntity(87U);
    msg.sane = 19U;

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
    msg.setTimeStamp(0.5357732473);
    msg.setSource(27545U);
    msg.setSourceEntity(253U);
    msg.setDestination(44444U);
    msg.setDestinationEntity(1U);
    msg.value = 0.956704436297;

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
    msg.setTimeStamp(0.835928842834);
    msg.setSource(59159U);
    msg.setSourceEntity(74U);
    msg.setDestination(36503U);
    msg.setDestinationEntity(105U);
    msg.value = 0.965644035591;

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
    msg.setTimeStamp(0.307869091617);
    msg.setSource(14800U);
    msg.setSourceEntity(27U);
    msg.setDestination(37167U);
    msg.setDestinationEntity(73U);
    msg.value = 0.0709190809979;

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
    msg.setTimeStamp(0.485729386612);
    msg.setSource(26825U);
    msg.setSourceEntity(39U);
    msg.setDestination(36042U);
    msg.setDestinationEntity(138U);
    msg.value = 0.354179824222;

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
    msg.setTimeStamp(0.230144267371);
    msg.setSource(63869U);
    msg.setSourceEntity(123U);
    msg.setDestination(38341U);
    msg.setDestinationEntity(103U);
    msg.value = 0.116146436085;

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
    msg.setTimeStamp(0.522131386536);
    msg.setSource(52007U);
    msg.setSourceEntity(167U);
    msg.setDestination(36158U);
    msg.setDestinationEntity(208U);
    msg.value = 0.314884109097;

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
    msg.setTimeStamp(0.394963708758);
    msg.setSource(27813U);
    msg.setSourceEntity(21U);
    msg.setDestination(36140U);
    msg.setDestinationEntity(243U);
    msg.value = 0.0281473567734;

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
    msg.setTimeStamp(0.0909089041898);
    msg.setSource(65473U);
    msg.setSourceEntity(86U);
    msg.setDestination(33667U);
    msg.setDestinationEntity(189U);
    msg.value = 0.947520521827;

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
    msg.setTimeStamp(0.390210870964);
    msg.setSource(51467U);
    msg.setSourceEntity(115U);
    msg.setDestination(4365U);
    msg.setDestinationEntity(46U);
    msg.value = 0.310752170326;

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
    msg.setTimeStamp(0.334268036104);
    msg.setSource(12538U);
    msg.setSourceEntity(220U);
    msg.setDestination(42724U);
    msg.setDestinationEntity(193U);
    msg.value = 0.511287886808;

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
    msg.setTimeStamp(0.299436888936);
    msg.setSource(35718U);
    msg.setSourceEntity(235U);
    msg.setDestination(23020U);
    msg.setDestinationEntity(248U);
    msg.value = 0.502430320109;

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
    msg.setTimeStamp(0.851646627724);
    msg.setSource(46417U);
    msg.setSourceEntity(127U);
    msg.setDestination(60575U);
    msg.setDestinationEntity(85U);
    msg.value = 0.322733898006;

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
    msg.setTimeStamp(0.958661046326);
    msg.setSource(27182U);
    msg.setSourceEntity(52U);
    msg.setDestination(16763U);
    msg.setDestinationEntity(115U);
    msg.value = 0.298152453744;

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
    msg.setTimeStamp(0.959167326779);
    msg.setSource(27514U);
    msg.setSourceEntity(48U);
    msg.setDestination(32431U);
    msg.setDestinationEntity(69U);
    msg.value = 0.808151883438;

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
    msg.setTimeStamp(0.799204225853);
    msg.setSource(12081U);
    msg.setSourceEntity(54U);
    msg.setDestination(31439U);
    msg.setDestinationEntity(61U);
    msg.value = 0.474144325608;

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
    msg.setTimeStamp(0.520569806878);
    msg.setSource(9527U);
    msg.setSourceEntity(53U);
    msg.setDestination(44395U);
    msg.setDestinationEntity(39U);
    msg.value = 0.520251306664;

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
    msg.setTimeStamp(0.389469722621);
    msg.setSource(18633U);
    msg.setSourceEntity(11U);
    msg.setDestination(44957U);
    msg.setDestinationEntity(224U);
    msg.value = 0.154861592934;

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
    msg.setTimeStamp(0.472371904322);
    msg.setSource(64186U);
    msg.setSourceEntity(17U);
    msg.setDestination(41770U);
    msg.setDestinationEntity(128U);
    msg.value = 0.955827379881;

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
    msg.setTimeStamp(0.302959745387);
    msg.setSource(44723U);
    msg.setSourceEntity(44U);
    msg.setDestination(43641U);
    msg.setDestinationEntity(1U);
    msg.value = 0.26303015491;

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
    msg.setTimeStamp(0.82730630502);
    msg.setSource(21499U);
    msg.setSourceEntity(196U);
    msg.setDestination(38683U);
    msg.setDestinationEntity(2U);
    msg.value = 0.217375522444;

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
    msg.setTimeStamp(0.0369907553553);
    msg.setSource(49422U);
    msg.setSourceEntity(44U);
    msg.setDestination(58384U);
    msg.setDestinationEntity(27U);
    msg.value = 0.175861890559;

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
    msg.setTimeStamp(0.302376402555);
    msg.setSource(4054U);
    msg.setSourceEntity(85U);
    msg.setDestination(25256U);
    msg.setDestinationEntity(143U);
    msg.value = 0.674005397774;

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
    msg.setTimeStamp(0.364993533313);
    msg.setSource(21878U);
    msg.setSourceEntity(108U);
    msg.setDestination(45724U);
    msg.setDestinationEntity(91U);
    msg.value = 0.0230546499632;

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
    msg.setTimeStamp(0.720770828136);
    msg.setSource(63227U);
    msg.setSourceEntity(12U);
    msg.setDestination(59182U);
    msg.setDestinationEntity(123U);
    msg.value = 0.799871187391;

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
    msg.setTimeStamp(0.210914794508);
    msg.setSource(58932U);
    msg.setSourceEntity(65U);
    msg.setDestination(51077U);
    msg.setDestinationEntity(139U);
    msg.validity = 23194U;
    msg.type = 154U;
    msg.tow = 3963890163U;
    msg.base_lat = 0.795960105336;
    msg.base_lon = 0.756922667718;
    msg.base_height = 0.0105822581753;
    msg.n = 0.732167609231;
    msg.e = 0.368083693292;
    msg.d = 0.415656982053;
    msg.v_n = 0.505695198296;
    msg.v_e = 0.560779380407;
    msg.v_d = 0.145526945077;
    msg.satellites = 116U;
    msg.iar_hyp = 43981U;
    msg.iar_ratio = 0.0163890020256;

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
    msg.setTimeStamp(0.598707277686);
    msg.setSource(31439U);
    msg.setSourceEntity(140U);
    msg.setDestination(53394U);
    msg.setDestinationEntity(91U);
    msg.validity = 10839U;
    msg.type = 100U;
    msg.tow = 4280044959U;
    msg.base_lat = 0.636822926173;
    msg.base_lon = 0.946346437144;
    msg.base_height = 0.448303165803;
    msg.n = 0.439489363274;
    msg.e = 0.534007815135;
    msg.d = 0.879438495285;
    msg.v_n = 0.516839394506;
    msg.v_e = 0.492021064618;
    msg.v_d = 0.502846862944;
    msg.satellites = 156U;
    msg.iar_hyp = 28664U;
    msg.iar_ratio = 0.903043297782;

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
    msg.setTimeStamp(0.566479188677);
    msg.setSource(24715U);
    msg.setSourceEntity(132U);
    msg.setDestination(8067U);
    msg.setDestinationEntity(89U);
    msg.validity = 11621U;
    msg.type = 84U;
    msg.tow = 4154147036U;
    msg.base_lat = 0.962072264309;
    msg.base_lon = 0.0286022380214;
    msg.base_height = 0.829863450435;
    msg.n = 0.172607197336;
    msg.e = 0.941957378095;
    msg.d = 0.0638506676975;
    msg.v_n = 0.302278868008;
    msg.v_e = 0.145533181712;
    msg.v_d = 0.157583893891;
    msg.satellites = 141U;
    msg.iar_hyp = 34891U;
    msg.iar_ratio = 0.531339620077;

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
    msg.setTimeStamp(0.550349828635);
    msg.setSource(882U);
    msg.setSourceEntity(169U);
    msg.setDestination(63982U);
    msg.setDestinationEntity(102U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.0392772792696;
    tmp_msg_0.lon = 0.88246800493;
    tmp_msg_0.height = 0.0200085667412;
    tmp_msg_0.x = 0.128215598629;
    tmp_msg_0.y = 0.777768184942;
    tmp_msg_0.z = 0.466784843645;
    tmp_msg_0.phi = 0.661243866317;
    tmp_msg_0.theta = 0.578698976509;
    tmp_msg_0.psi = 0.467960646682;
    tmp_msg_0.u = 0.767358784008;
    tmp_msg_0.v = 0.794460061024;
    tmp_msg_0.w = 0.207593388095;
    tmp_msg_0.vx = 0.482875251668;
    tmp_msg_0.vy = 0.322722043257;
    tmp_msg_0.vz = 0.107566240876;
    tmp_msg_0.p = 0.274663671007;
    tmp_msg_0.q = 0.386853866687;
    tmp_msg_0.r = 0.829276094254;
    tmp_msg_0.depth = 0.294597340992;
    tmp_msg_0.alt = 0.62964154462;
    msg.state.set(tmp_msg_0);
    msg.type = 183U;

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
    msg.setTimeStamp(0.260602063589);
    msg.setSource(54135U);
    msg.setSourceEntity(143U);
    msg.setDestination(44902U);
    msg.setDestinationEntity(8U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.178541774514;
    tmp_msg_0.lon = 0.136518792048;
    tmp_msg_0.height = 0.156396145651;
    tmp_msg_0.x = 0.0695112602103;
    tmp_msg_0.y = 0.441716570016;
    tmp_msg_0.z = 0.179919173258;
    tmp_msg_0.phi = 0.130123498088;
    tmp_msg_0.theta = 0.984684670517;
    tmp_msg_0.psi = 0.542900365861;
    tmp_msg_0.u = 0.445251771463;
    tmp_msg_0.v = 0.506062863004;
    tmp_msg_0.w = 0.688198290637;
    tmp_msg_0.vx = 0.140201800384;
    tmp_msg_0.vy = 0.9226349004;
    tmp_msg_0.vz = 0.738671433337;
    tmp_msg_0.p = 0.642385874848;
    tmp_msg_0.q = 0.152227859507;
    tmp_msg_0.r = 0.529167929396;
    tmp_msg_0.depth = 0.716598924571;
    tmp_msg_0.alt = 0.575889773147;
    msg.state.set(tmp_msg_0);
    msg.type = 233U;

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
    msg.setTimeStamp(0.964060288985);
    msg.setSource(23903U);
    msg.setSourceEntity(248U);
    msg.setDestination(32446U);
    msg.setDestinationEntity(77U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.157098693683;
    tmp_msg_0.lon = 0.885689902552;
    tmp_msg_0.height = 0.960302294456;
    tmp_msg_0.x = 0.719479652742;
    tmp_msg_0.y = 0.484269968728;
    tmp_msg_0.z = 0.802328112441;
    tmp_msg_0.phi = 0.400664285884;
    tmp_msg_0.theta = 0.616564768292;
    tmp_msg_0.psi = 0.405001191427;
    tmp_msg_0.u = 0.593580359876;
    tmp_msg_0.v = 0.595224741307;
    tmp_msg_0.w = 0.710383586657;
    tmp_msg_0.vx = 0.492836019524;
    tmp_msg_0.vy = 0.579578265723;
    tmp_msg_0.vz = 0.197245495048;
    tmp_msg_0.p = 0.88981014288;
    tmp_msg_0.q = 0.432608223232;
    tmp_msg_0.r = 0.291265518368;
    tmp_msg_0.depth = 0.456225764573;
    tmp_msg_0.alt = 0.108007499394;
    msg.state.set(tmp_msg_0);
    msg.type = 88U;

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
    msg.setTimeStamp(0.729246848446);
    msg.setSource(17270U);
    msg.setSourceEntity(10U);
    msg.setDestination(13028U);
    msg.setDestinationEntity(117U);
    msg.value = 0.971396276896;

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
    msg.setTimeStamp(0.147646689893);
    msg.setSource(43757U);
    msg.setSourceEntity(170U);
    msg.setDestination(46728U);
    msg.setDestinationEntity(110U);
    msg.value = 0.879588719729;

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
    msg.setTimeStamp(0.999627723955);
    msg.setSource(27440U);
    msg.setSourceEntity(191U);
    msg.setDestination(49012U);
    msg.setDestinationEntity(136U);
    msg.value = 0.204456065646;

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
    msg.setTimeStamp(0.871425463092);
    msg.setSource(48146U);
    msg.setSourceEntity(254U);
    msg.setDestination(28980U);
    msg.setDestinationEntity(53U);
    msg.value = 0.0547880616011;

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
    msg.setTimeStamp(0.214492389829);
    msg.setSource(36863U);
    msg.setSourceEntity(111U);
    msg.setDestination(7870U);
    msg.setDestinationEntity(250U);
    msg.value = 0.0620733163862;

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
    msg.setTimeStamp(0.881012841377);
    msg.setSource(4259U);
    msg.setSourceEntity(168U);
    msg.setDestination(37587U);
    msg.setDestinationEntity(34U);
    msg.value = 0.485763304328;

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
    msg.setTimeStamp(0.854863038981);
    msg.setSource(58338U);
    msg.setSourceEntity(169U);
    msg.setDestination(15764U);
    msg.setDestinationEntity(86U);
    msg.value = 0.819196967859;

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
    msg.setTimeStamp(0.443138316757);
    msg.setSource(9826U);
    msg.setSourceEntity(133U);
    msg.setDestination(1266U);
    msg.setDestinationEntity(148U);
    msg.value = 0.322022316315;

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
    msg.setTimeStamp(0.766926205582);
    msg.setSource(447U);
    msg.setSourceEntity(59U);
    msg.setDestination(30470U);
    msg.setDestinationEntity(71U);
    msg.value = 0.741124493172;

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
    msg.setTimeStamp(0.00659802573826);
    msg.setSource(40560U);
    msg.setSourceEntity(53U);
    msg.setDestination(35882U);
    msg.setDestinationEntity(141U);
    msg.value = 0.158772795924;

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
    msg.setTimeStamp(0.252115875199);
    msg.setSource(25874U);
    msg.setSourceEntity(218U);
    msg.setDestination(26492U);
    msg.setDestinationEntity(31U);
    msg.value = 0.964935058394;

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
    msg.setTimeStamp(0.754222855955);
    msg.setSource(37543U);
    msg.setSourceEntity(130U);
    msg.setDestination(44393U);
    msg.setDestinationEntity(103U);
    msg.value = 0.115948082426;

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
    msg.setTimeStamp(0.464768082419);
    msg.setSource(57884U);
    msg.setSourceEntity(253U);
    msg.setDestination(17152U);
    msg.setDestinationEntity(53U);
    msg.value = 0.40769035577;

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
    msg.setTimeStamp(0.957675049203);
    msg.setSource(10670U);
    msg.setSourceEntity(111U);
    msg.setDestination(12997U);
    msg.setDestinationEntity(20U);
    msg.value = 0.109200394455;

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
    msg.setTimeStamp(0.294883699391);
    msg.setSource(3587U);
    msg.setSourceEntity(57U);
    msg.setDestination(9797U);
    msg.setDestinationEntity(156U);
    msg.value = 0.73044075664;

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
    msg.setTimeStamp(0.249227789135);
    msg.setSource(42546U);
    msg.setSourceEntity(54U);
    msg.setDestination(55720U);
    msg.setDestinationEntity(15U);
    msg.id = 79U;
    msg.zoom = 26U;
    msg.action = 111U;

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
    msg.setTimeStamp(0.63397391636);
    msg.setSource(59550U);
    msg.setSourceEntity(195U);
    msg.setDestination(60250U);
    msg.setDestinationEntity(179U);
    msg.id = 48U;
    msg.zoom = 115U;
    msg.action = 1U;

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
    msg.setTimeStamp(0.366573106873);
    msg.setSource(64759U);
    msg.setSourceEntity(97U);
    msg.setDestination(26657U);
    msg.setDestinationEntity(163U);
    msg.id = 239U;
    msg.zoom = 46U;
    msg.action = 166U;

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
    msg.setTimeStamp(0.9068719721);
    msg.setSource(56809U);
    msg.setSourceEntity(222U);
    msg.setDestination(13436U);
    msg.setDestinationEntity(167U);
    msg.id = 103U;
    msg.value = 0.513064637351;

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
    msg.setTimeStamp(0.435463919022);
    msg.setSource(11754U);
    msg.setSourceEntity(58U);
    msg.setDestination(36279U);
    msg.setDestinationEntity(169U);
    msg.id = 206U;
    msg.value = 0.0332341370632;

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
    msg.setTimeStamp(0.873942192122);
    msg.setSource(52972U);
    msg.setSourceEntity(97U);
    msg.setDestination(57776U);
    msg.setDestinationEntity(80U);
    msg.id = 174U;
    msg.value = 0.846558330189;

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
    msg.setTimeStamp(0.31599929464);
    msg.setSource(10992U);
    msg.setSourceEntity(82U);
    msg.setDestination(13314U);
    msg.setDestinationEntity(238U);
    msg.id = 101U;
    msg.value = 0.770399669165;

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
    msg.setTimeStamp(0.0125187028673);
    msg.setSource(23781U);
    msg.setSourceEntity(151U);
    msg.setDestination(30985U);
    msg.setDestinationEntity(28U);
    msg.id = 9U;
    msg.value = 0.0119273910335;

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
    msg.setTimeStamp(0.829576218511);
    msg.setSource(6100U);
    msg.setSourceEntity(243U);
    msg.setDestination(42146U);
    msg.setDestinationEntity(99U);
    msg.id = 165U;
    msg.value = 0.744993022022;

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
    msg.setTimeStamp(0.499297357664);
    msg.setSource(1842U);
    msg.setSourceEntity(154U);
    msg.setDestination(22616U);
    msg.setDestinationEntity(119U);
    msg.id = 114U;
    msg.angle = 0.380294869843;

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
    msg.setTimeStamp(0.387980948913);
    msg.setSource(14744U);
    msg.setSourceEntity(83U);
    msg.setDestination(54092U);
    msg.setDestinationEntity(126U);
    msg.id = 165U;
    msg.angle = 0.17264378475;

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
    msg.setTimeStamp(0.398066776324);
    msg.setSource(45137U);
    msg.setSourceEntity(111U);
    msg.setDestination(46204U);
    msg.setDestinationEntity(132U);
    msg.id = 9U;
    msg.angle = 0.627388061005;

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
    msg.setTimeStamp(0.732412560977);
    msg.setSource(64584U);
    msg.setSourceEntity(165U);
    msg.setDestination(33143U);
    msg.setDestinationEntity(108U);
    msg.op = 240U;
    msg.actions.assign("ZOEPPAQNXLHZSNJRJKBQTGIVKVFPOYZLREDGDJESOIYTZBMPECGCVIOUPABJAVGAAEXBUJAYSXYCGHLGTBBTFWVFOFBEQDOFEULGUWQJVYGYBUQWSQHMWNHMWRTHLMSCWENPDMSXZOHJKFVLAXMQXDXHBIMWCVVDWEINQCDRNUSWJKKXNOZKPPHTZLDNOPCUTRKMYEFJUCNSUFDZIAKHGTKSXRLIWURXNBGRKIYICFAMQRMYPZRVTSHQDYALIL");

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
    msg.setTimeStamp(0.516453195627);
    msg.setSource(23935U);
    msg.setSourceEntity(64U);
    msg.setDestination(49786U);
    msg.setDestinationEntity(14U);
    msg.op = 14U;
    msg.actions.assign("NPADSCREOQCODEIONXEBK");

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
    msg.setTimeStamp(0.953528579901);
    msg.setSource(15191U);
    msg.setSourceEntity(49U);
    msg.setDestination(46415U);
    msg.setDestinationEntity(177U);
    msg.op = 90U;
    msg.actions.assign("BXUVFCYAXIZZGBHMNGFOMFPZEXPGJBWKECZEHDHYWXRMQVWQAVYWUGQNGSPQOSOXBVEBZO");

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
    msg.setTimeStamp(0.076209450509);
    msg.setSource(37989U);
    msg.setSourceEntity(54U);
    msg.setDestination(23206U);
    msg.setDestinationEntity(55U);
    msg.actions.assign("JLCVWEKLYBROFYASMYHXYFKJCIKIGBHDMLTVNXJBZARGAJHSAQOCJLTVTNOXZOGABQLQBWMLDQNGPIUNDUYUIHAKJWEUVCSUWGBXBMRXPMFTFORJNTSRIJEZYMKPUVJWAMWTZCGTFMVGEADRLZIDEXHOKCZBDLSYSMHOXOAELWTIQKNNMXFDIU");

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
    msg.setTimeStamp(0.642264068671);
    msg.setSource(21400U);
    msg.setSourceEntity(163U);
    msg.setDestination(12910U);
    msg.setDestinationEntity(176U);
    msg.actions.assign("NCBYIGJWQQMYFLFUXCXFZOUWHMGHOXBPNKDCAPHSWCUQXJIYSSDQDMTELIUNTUOFELWGGHVSVQJLLTGMARNLMYAHYXLTSXIDEVYIAUDNMUQOFDZFBPIFHWJLMQVIJBYUHJDTZBOKFKRDOEUJMJFIZYKAGWZINOCL");

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
    msg.setTimeStamp(0.661021964682);
    msg.setSource(30519U);
    msg.setSourceEntity(194U);
    msg.setDestination(38682U);
    msg.setDestinationEntity(210U);
    msg.actions.assign("EBWXUCHJTMAXSEQVHJPLWIOEBLWTRRQNXQXS");

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
    msg.setTimeStamp(0.680506719527);
    msg.setSource(53317U);
    msg.setSourceEntity(187U);
    msg.setDestination(523U);
    msg.setDestinationEntity(19U);
    msg.button = 24U;
    msg.value = 156U;

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
    msg.setTimeStamp(0.553592724886);
    msg.setSource(40102U);
    msg.setSourceEntity(159U);
    msg.setDestination(32360U);
    msg.setDestinationEntity(115U);
    msg.button = 167U;
    msg.value = 194U;

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
    msg.setTimeStamp(0.508073783072);
    msg.setSource(1385U);
    msg.setSourceEntity(211U);
    msg.setDestination(32924U);
    msg.setDestinationEntity(220U);
    msg.button = 134U;
    msg.value = 172U;

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
    msg.setTimeStamp(0.113144703694);
    msg.setSource(17788U);
    msg.setSourceEntity(85U);
    msg.setDestination(3039U);
    msg.setDestinationEntity(208U);
    msg.op = 42U;
    msg.text.assign("MEHLOJWGPATRFCJQSVWWCCNKYVGBCXDVWHLVIXLZGNEHHDYWEZJTTGVCCRXOAFNLUYZJGWOOIZUCMAQOKDXMVSAXKBOJBLRUPOIFJSPFDNIXQUMXEFKYSHSVPVUNZJEBKQATDFDSVYIOBMUHCUQJRDYBXXBGXJTRAREYCGTFTPRIFZDUHZPABLHZPEEIAADHPQONNWSMQMHRLKUKMF");

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
    msg.setTimeStamp(0.240097463382);
    msg.setSource(45912U);
    msg.setSourceEntity(159U);
    msg.setDestination(58225U);
    msg.setDestinationEntity(144U);
    msg.op = 89U;
    msg.text.assign("CTAAMQCTRMDQTZFOEHRYLUZIVROWTAJKONXIZWEIPOJIQWZJEILVZYSUKTGZAQGYRJRXVFTAKWAAQDZCMDXRCUSWFALDKBNNPWRUOSXVYEVEPLSVBPLXNYYMSFBWXMLUDIKMPMQUSKKXGEIHRCGLDQPCAKWLCOPUPDLQJWXYB");

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
    msg.setTimeStamp(0.19987310441);
    msg.setSource(47734U);
    msg.setSourceEntity(249U);
    msg.setDestination(61291U);
    msg.setDestinationEntity(37U);
    msg.op = 139U;
    msg.text.assign("YBNROKSVJRRCWXUTMXROFAGCBWFEPGKIRUXTMDEXBUO");

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
    msg.setTimeStamp(0.563592106707);
    msg.setSource(42644U);
    msg.setSourceEntity(157U);
    msg.setDestination(23704U);
    msg.setDestinationEntity(60U);
    msg.op = 113U;
    msg.time_remain = 0.261838220439;
    msg.sched_time = 0.911309391878;

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
    msg.setTimeStamp(0.187792137049);
    msg.setSource(28608U);
    msg.setSourceEntity(125U);
    msg.setDestination(21330U);
    msg.setDestinationEntity(141U);
    msg.op = 195U;
    msg.time_remain = 0.637243594051;
    msg.sched_time = 0.565257008698;

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
    msg.setTimeStamp(0.522326018349);
    msg.setSource(40252U);
    msg.setSourceEntity(79U);
    msg.setDestination(8734U);
    msg.setDestinationEntity(99U);
    msg.op = 229U;
    msg.time_remain = 0.707144252457;
    msg.sched_time = 0.175337519228;

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
    msg.setTimeStamp(0.158375271623);
    msg.setSource(5174U);
    msg.setSourceEntity(147U);
    msg.setDestination(59655U);
    msg.setDestinationEntity(183U);
    msg.name.assign("TQMAUKULCFJLNSLUCBAGKZGYEVIIRIZPEOAHLJHGFWWAAJBWKFRXLSNWFGGZHEGFURQYTSIHTBSUKNAHVZMPXNINFIEAYKRBSOAVOMYCROEXRIZDVQHQKYTOXAPUBZQJTPTFPMNQDTUNXCYNIGOSTDMGHXMZUKLHSCKLOBZJUPXVSVWKDXDBJWWQQNYIVMMRZOEBVDWCIWPPRCTFJBYMPDMDSFWOPLFLQDHRJVJGAEEKQCEJGUNCYOHXZDB");
    msg.op = 49U;
    msg.sched_time = 0.323226486691;

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
    msg.setTimeStamp(0.825546211777);
    msg.setSource(49906U);
    msg.setSourceEntity(139U);
    msg.setDestination(58659U);
    msg.setDestinationEntity(200U);
    msg.name.assign("NYXCKDKNKSHNFUWOBTQMKMUXREZLUARWMKNBMAPMCCMAGOSFNVCPOXJRZNXOYNYBJZAF");
    msg.op = 124U;
    msg.sched_time = 0.226075615023;

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
    msg.setTimeStamp(0.269292769426);
    msg.setSource(47899U);
    msg.setSourceEntity(15U);
    msg.setDestination(1955U);
    msg.setDestinationEntity(163U);
    msg.name.assign("CRADCESJOZVBPEPTUJEBZLXXEUVPDYAXKVWIPEHLTPGQJUTHNCOEQKUNLFBMFPBTPDMZZTGUVBEGHKUFNKLCAGDBFVWVNCODJPHUHXWEIQZRGGSYIXSCOIPDTZMNAXXPLYCSJJFMADLLJSKEOBDGBBICKMHHGWFFSBUCCLKWVAWYORTXJDKMZWXQQOVIXMOSRMRLYZR");
    msg.op = 88U;
    msg.sched_time = 0.904671916533;

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
    msg.setTimeStamp(0.743515992288);
    msg.setSource(17738U);
    msg.setSourceEntity(184U);
    msg.setDestination(44124U);
    msg.setDestinationEntity(20U);

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
    msg.setTimeStamp(0.825538373471);
    msg.setSource(57479U);
    msg.setSourceEntity(162U);
    msg.setDestination(59545U);
    msg.setDestinationEntity(8U);

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
    msg.setTimeStamp(0.63196910643);
    msg.setSource(24142U);
    msg.setSourceEntity(65U);
    msg.setDestination(58725U);
    msg.setDestinationEntity(163U);

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
    msg.setTimeStamp(0.00915447369204);
    msg.setSource(24059U);
    msg.setSourceEntity(251U);
    msg.setDestination(45726U);
    msg.setDestinationEntity(195U);
    msg.name.assign("KCBNBVBRJJGHUQXVMECXLCNRAFLJGPVEOYAPWZOQDAWSZBWPGWTYDFFVFAHSIUMSEHQRDLPHRWEAKXOJNUUEIKPYYUTSPZZULKNPTSUGJPZTZOMDHBDGMENJPGUITDXFKGOOVAJYRLSQSTYXERFQOVNQNLCDMCEKLYANAMMGLTIONMKQCQQTJMUBRDHHXKBIILICZFYVM");
    msg.state = 28U;

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
    msg.setTimeStamp(0.77904797606);
    msg.setSource(12599U);
    msg.setSourceEntity(110U);
    msg.setDestination(14400U);
    msg.setDestinationEntity(150U);
    msg.name.assign("HBQFNISGLPOQPREITWZLCXMTRAKKOLBCPGLTUYNESTMLJUTJFNWGKA");
    msg.state = 172U;

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
    msg.setTimeStamp(0.653267452769);
    msg.setSource(4561U);
    msg.setSourceEntity(168U);
    msg.setDestination(29852U);
    msg.setDestinationEntity(97U);
    msg.name.assign("LDYTFGAJZKAPEKHXFPNCRJSJMLDQRCTYWURIQAACBBMGZVUDWPJFXQNOGQRRYXEWZKUUNWUCGUVTTCDDXYQEFAZANMBHPMQNOTCSHDWSYEHMCAHZXDEYBINKLJFDMLOUFWU");
    msg.state = 170U;

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
    msg.setTimeStamp(0.663547452811);
    msg.setSource(7770U);
    msg.setSourceEntity(111U);
    msg.setDestination(35890U);
    msg.setDestinationEntity(126U);
    msg.name.assign("LCJCFLWRQKFRSPHZPRJXJGIGTYAYSOTMFEPPFQWDJAYYXOECNZAYQXJGWOGUVTUBYWIOZTSVHOSSRBAUTELNOIEZPTKEUYJNNSNVMCVKLDHIIQUHTNCPZVLQUXCADGTJYAAKDHPZWKSWLBSDZFVWROFBHRDFCZWLDHWHQMMBSYMBZIOGEJDKUAVPQLMMOCKOKNRRACVYDVBLPBEKBFECINRXMUEIQUXEUXJIZBQLGQN");
    msg.value = 232U;

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
    msg.setTimeStamp(0.593328135626);
    msg.setSource(20846U);
    msg.setSourceEntity(231U);
    msg.setDestination(51545U);
    msg.setDestinationEntity(233U);
    msg.name.assign("JGHPPDQDCYYYPPKVOQTSNWBKTEOJVYITOBWEVUNILFXKXVDEFQRMIOXMKRAVXLMYAHFGCLKXGAEFZCUCAPJGJYBSQEIQVENYPMWPTOLCPIJPDICOXOSDNCWHTRXFBSCROXFDBSTMRZCUSGN");
    msg.value = 86U;

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
    msg.setTimeStamp(0.749971319028);
    msg.setSource(7711U);
    msg.setSourceEntity(142U);
    msg.setDestination(12473U);
    msg.setDestinationEntity(29U);
    msg.name.assign("EGNGTWFZPWOZXKXCVWZBYYFUSCHUYUKPFHMBVDBJGFJGUHLMTDXITOIRNMJDEDMLUD");
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
    msg.setTimeStamp(0.0305830867256);
    msg.setSource(35437U);
    msg.setSourceEntity(166U);
    msg.setDestination(35485U);
    msg.setDestinationEntity(83U);
    msg.name.assign("AJRNEPWDDXYBWTZNOFXMCBNEEIKVLQYWBBPSUZARHRCZJJKHJMATYRIAKGBEMLCHUUYPOOXKZXJEVHHMFJSPYNGXCNYIBALRBNFQYCPPQIZELWCGGTDISSZOINYVQFQZNWPDMDTYGUPFNBMXZL");

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
    msg.setTimeStamp(0.758695512279);
    msg.setSource(21597U);
    msg.setSourceEntity(158U);
    msg.setDestination(22317U);
    msg.setDestinationEntity(235U);
    msg.name.assign("XBCSXTNORMSKLEXQPAKPPNYZFYIQOVMGDPMYGALWHK");

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
    msg.setTimeStamp(0.813653674868);
    msg.setSource(39358U);
    msg.setSourceEntity(13U);
    msg.setDestination(5127U);
    msg.setDestinationEntity(119U);
    msg.name.assign("FWVRVALCXDIBVGKESRCBFMEJGFMTLLWRFAUDPAUTZEHUXUVOASBRCILUOHWAWBKCDGUTDEKURVJXITDWTZPXNZXUDJWTGVOCCNAUOIANPXYBSZMXLGDOGHTBRVGLJYFKBRQKDNFPJPIICVDIHYZQSMXHDYHXMSYIYJAOFSMWTRSKKBOBNKULRFLKTZGLETYZPEFQMSNAZQJWOQQVMIYENNMPJOHZOSNHWIPKWAXGLNMPSREJHBVFEYZQP");

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
    msg.setTimeStamp(0.572243257465);
    msg.setSource(62957U);
    msg.setSourceEntity(17U);
    msg.setDestination(42041U);
    msg.setDestinationEntity(52U);
    msg.name.assign("BMDYDGOIHOZUPJOZIAUZFDICAHBLBLYFNXJMVQLHKZIVSWOXVDSFURCPBBUMWRODJDUJYVWHHXNSNWCMXPKNIMJATKGMRFTLEFINTRVNWQWO");
    msg.value = 103U;

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
    msg.setTimeStamp(0.888415313885);
    msg.setSource(56131U);
    msg.setSourceEntity(235U);
    msg.setDestination(47975U);
    msg.setDestinationEntity(30U);
    msg.name.assign("SCKEYXNJHYRPUCUOEHADCUNBXUWZDMIPHQIJTNZT");
    msg.value = 188U;

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
    msg.setTimeStamp(0.626237445782);
    msg.setSource(6188U);
    msg.setSourceEntity(63U);
    msg.setDestination(45153U);
    msg.setDestinationEntity(197U);
    msg.name.assign("EUQSVIRRIQZUWCOXB");
    msg.value = 206U;

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
    msg.setTimeStamp(0.533777484738);
    msg.setSource(50146U);
    msg.setSourceEntity(153U);
    msg.setDestination(49072U);
    msg.setDestinationEntity(104U);
    msg.id = 112U;
    msg.period = 4072632014U;
    msg.duty_cycle = 3688645042U;

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
    msg.setTimeStamp(0.972270177793);
    msg.setSource(30843U);
    msg.setSourceEntity(8U);
    msg.setDestination(50060U);
    msg.setDestinationEntity(174U);
    msg.id = 18U;
    msg.period = 2797645548U;
    msg.duty_cycle = 3811798794U;

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
    msg.setTimeStamp(0.776513110605);
    msg.setSource(37592U);
    msg.setSourceEntity(17U);
    msg.setDestination(44304U);
    msg.setDestinationEntity(101U);
    msg.id = 85U;
    msg.period = 2022127635U;
    msg.duty_cycle = 1364600851U;

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
    msg.setTimeStamp(0.196293519914);
    msg.setSource(46035U);
    msg.setSourceEntity(234U);
    msg.setDestination(41885U);
    msg.setDestinationEntity(12U);
    msg.id = 112U;
    msg.period = 33883207U;
    msg.duty_cycle = 4087492608U;

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
    msg.setTimeStamp(0.627492969883);
    msg.setSource(48244U);
    msg.setSourceEntity(85U);
    msg.setDestination(10977U);
    msg.setDestinationEntity(205U);
    msg.id = 23U;
    msg.period = 736440019U;
    msg.duty_cycle = 3575831182U;

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
    msg.setTimeStamp(0.283210837071);
    msg.setSource(40096U);
    msg.setSourceEntity(158U);
    msg.setDestination(5672U);
    msg.setDestinationEntity(89U);
    msg.id = 42U;
    msg.period = 1719051701U;
    msg.duty_cycle = 1087366901U;

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
    msg.setTimeStamp(0.925658319503);
    msg.setSource(14534U);
    msg.setSourceEntity(129U);
    msg.setDestination(13348U);
    msg.setDestinationEntity(173U);
    msg.lat = 0.133114558383;
    msg.lon = 0.17106064793;
    msg.height = 0.827885818668;
    msg.x = 0.1435775838;
    msg.y = 0.644299924943;
    msg.z = 0.86005105653;
    msg.phi = 0.681742450639;
    msg.theta = 0.137122781045;
    msg.psi = 0.873589661292;
    msg.u = 0.421550016162;
    msg.v = 0.935593257659;
    msg.w = 0.324927879008;
    msg.vx = 0.841831491896;
    msg.vy = 0.0976714467719;
    msg.vz = 0.213201847502;
    msg.p = 0.295510092292;
    msg.q = 0.340406405597;
    msg.r = 0.771953231672;
    msg.depth = 0.247768861012;
    msg.alt = 0.524890922423;

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
    msg.setTimeStamp(0.888752664586);
    msg.setSource(24778U);
    msg.setSourceEntity(71U);
    msg.setDestination(6535U);
    msg.setDestinationEntity(142U);
    msg.lat = 0.336497926672;
    msg.lon = 0.191672056423;
    msg.height = 0.346584144687;
    msg.x = 0.665524689449;
    msg.y = 0.583594431293;
    msg.z = 0.196680326322;
    msg.phi = 0.501444299651;
    msg.theta = 0.795534062803;
    msg.psi = 0.471008574685;
    msg.u = 0.717954252798;
    msg.v = 0.0212798126158;
    msg.w = 0.250279479073;
    msg.vx = 0.0280960307482;
    msg.vy = 0.585049262412;
    msg.vz = 0.150637159251;
    msg.p = 0.124598112858;
    msg.q = 0.833656123041;
    msg.r = 0.0217890544051;
    msg.depth = 0.887974964435;
    msg.alt = 0.854955461108;

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
    msg.setTimeStamp(0.243567327029);
    msg.setSource(50803U);
    msg.setSourceEntity(55U);
    msg.setDestination(703U);
    msg.setDestinationEntity(223U);
    msg.lat = 0.44845269139;
    msg.lon = 0.78199629852;
    msg.height = 0.958153832205;
    msg.x = 0.607999804883;
    msg.y = 0.454740368231;
    msg.z = 0.513026378208;
    msg.phi = 0.676494197513;
    msg.theta = 0.554981141386;
    msg.psi = 0.862630810475;
    msg.u = 0.0570672815155;
    msg.v = 0.16170456996;
    msg.w = 0.729290534173;
    msg.vx = 0.904202423934;
    msg.vy = 0.383907160394;
    msg.vz = 0.487551262677;
    msg.p = 0.479920908806;
    msg.q = 0.305845501228;
    msg.r = 0.802337355692;
    msg.depth = 0.302609286052;
    msg.alt = 0.062908815425;

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
    msg.setTimeStamp(0.516068247912);
    msg.setSource(20652U);
    msg.setSourceEntity(95U);
    msg.setDestination(64545U);
    msg.setDestinationEntity(214U);
    msg.x = 0.818106339139;
    msg.y = 0.164463298472;
    msg.z = 0.600123689778;

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
    msg.setTimeStamp(0.60627940498);
    msg.setSource(40691U);
    msg.setSourceEntity(10U);
    msg.setDestination(8656U);
    msg.setDestinationEntity(169U);
    msg.x = 0.747987766172;
    msg.y = 0.744404634555;
    msg.z = 0.664843535763;

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
    msg.setTimeStamp(0.949133189219);
    msg.setSource(15298U);
    msg.setSourceEntity(130U);
    msg.setDestination(13444U);
    msg.setDestinationEntity(81U);
    msg.x = 0.564030100278;
    msg.y = 0.103372931682;
    msg.z = 0.32122590451;

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
    msg.setTimeStamp(0.327036510121);
    msg.setSource(10306U);
    msg.setSourceEntity(74U);
    msg.setDestination(9991U);
    msg.setDestinationEntity(201U);
    msg.value = 0.590996518197;

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
    msg.setTimeStamp(0.936315068098);
    msg.setSource(19194U);
    msg.setSourceEntity(217U);
    msg.setDestination(29885U);
    msg.setDestinationEntity(240U);
    msg.value = 0.823382646054;

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
    msg.setTimeStamp(0.290058214123);
    msg.setSource(55773U);
    msg.setSourceEntity(193U);
    msg.setDestination(50445U);
    msg.setDestinationEntity(0U);
    msg.value = 0.36235682561;

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
    msg.setTimeStamp(0.536546196948);
    msg.setSource(58791U);
    msg.setSourceEntity(235U);
    msg.setDestination(231U);
    msg.setDestinationEntity(76U);
    msg.value = 0.499535238525;

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
    msg.setTimeStamp(0.150196249501);
    msg.setSource(35523U);
    msg.setSourceEntity(50U);
    msg.setDestination(26372U);
    msg.setDestinationEntity(169U);
    msg.value = 0.492256192123;

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
    msg.setTimeStamp(0.888705197374);
    msg.setSource(29621U);
    msg.setSourceEntity(225U);
    msg.setDestination(42446U);
    msg.setDestinationEntity(141U);
    msg.value = 0.568968200672;

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
    msg.setTimeStamp(0.402153223879);
    msg.setSource(60760U);
    msg.setSourceEntity(104U);
    msg.setDestination(2158U);
    msg.setDestinationEntity(78U);
    msg.x = 0.647605773032;
    msg.y = 0.619466079418;
    msg.z = 0.12305854845;
    msg.phi = 0.471666420719;
    msg.theta = 0.185000947559;
    msg.psi = 0.0913590709088;
    msg.p = 0.759834657293;
    msg.q = 0.465677541126;
    msg.r = 0.783514743814;
    msg.u = 0.496006555171;
    msg.v = 0.0592108400422;
    msg.w = 0.198143028449;
    msg.bias_psi = 0.200956231626;
    msg.bias_r = 0.922588932659;

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
    msg.setTimeStamp(0.90649871458);
    msg.setSource(44355U);
    msg.setSourceEntity(131U);
    msg.setDestination(39243U);
    msg.setDestinationEntity(34U);
    msg.x = 0.345932101646;
    msg.y = 0.682472082137;
    msg.z = 0.672824143321;
    msg.phi = 0.777729943444;
    msg.theta = 0.00683736377812;
    msg.psi = 0.583539109164;
    msg.p = 0.660130941431;
    msg.q = 0.259891675562;
    msg.r = 0.134226063281;
    msg.u = 0.968799851069;
    msg.v = 0.236432375824;
    msg.w = 0.343822799408;
    msg.bias_psi = 0.473096386758;
    msg.bias_r = 0.944485471733;

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
    msg.setTimeStamp(0.37151395375);
    msg.setSource(40291U);
    msg.setSourceEntity(119U);
    msg.setDestination(45922U);
    msg.setDestinationEntity(93U);
    msg.x = 0.306613357877;
    msg.y = 0.633874796756;
    msg.z = 0.591292723951;
    msg.phi = 0.495571642034;
    msg.theta = 0.261942800373;
    msg.psi = 0.550784276712;
    msg.p = 0.169752922255;
    msg.q = 0.261428613557;
    msg.r = 0.838876426747;
    msg.u = 0.142269000394;
    msg.v = 0.404194535114;
    msg.w = 0.311970463629;
    msg.bias_psi = 0.43802614773;
    msg.bias_r = 0.857989951806;

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
    msg.setTimeStamp(0.628179305389);
    msg.setSource(8739U);
    msg.setSourceEntity(82U);
    msg.setDestination(54760U);
    msg.setDestinationEntity(169U);
    msg.bias_psi = 0.726660788835;
    msg.bias_r = 0.632351722305;
    msg.cog = 0.295148228969;
    msg.cyaw = 0.00484893041473;
    msg.gps_rej_level = 0.627696897805;
    msg.lbl_rej_level = 0.981313410736;
    msg.custom_x = 0.314835514172;
    msg.custom_y = 0.551526242614;
    msg.custom_z = 0.70936545286;

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
    msg.setTimeStamp(0.81791546131);
    msg.setSource(40889U);
    msg.setSourceEntity(1U);
    msg.setDestination(33320U);
    msg.setDestinationEntity(2U);
    msg.bias_psi = 0.085558012175;
    msg.bias_r = 0.618533197633;
    msg.cog = 0.316680096802;
    msg.cyaw = 0.919582032558;
    msg.gps_rej_level = 0.0626831165595;
    msg.lbl_rej_level = 0.920757697245;
    msg.custom_x = 0.842849518653;
    msg.custom_y = 0.160614741574;
    msg.custom_z = 0.678017936676;

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
    msg.setTimeStamp(0.596480337945);
    msg.setSource(23318U);
    msg.setSourceEntity(182U);
    msg.setDestination(635U);
    msg.setDestinationEntity(3U);
    msg.bias_psi = 0.621564005168;
    msg.bias_r = 0.0173761877359;
    msg.cog = 0.786732657764;
    msg.cyaw = 0.896914751093;
    msg.gps_rej_level = 0.631833866194;
    msg.lbl_rej_level = 0.847531078814;
    msg.custom_x = 0.655868412924;
    msg.custom_y = 0.489055866664;
    msg.custom_z = 0.96346718605;

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
    msg.setTimeStamp(0.375078607756);
    msg.setSource(42875U);
    msg.setSourceEntity(56U);
    msg.setDestination(11974U);
    msg.setDestinationEntity(126U);
    msg.utc_time = 0.809071842831;
    msg.reason = 234U;

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
    msg.setTimeStamp(0.125576944617);
    msg.setSource(33066U);
    msg.setSourceEntity(27U);
    msg.setDestination(2478U);
    msg.setDestinationEntity(100U);
    msg.utc_time = 0.549937217774;
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
    msg.setTimeStamp(0.358468734942);
    msg.setSource(16830U);
    msg.setSourceEntity(81U);
    msg.setDestination(9073U);
    msg.setDestinationEntity(156U);
    msg.utc_time = 0.601188196823;
    msg.reason = 77U;

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
    msg.setTimeStamp(0.517079486956);
    msg.setSource(38082U);
    msg.setSourceEntity(204U);
    msg.setDestination(7373U);
    msg.setDestinationEntity(191U);
    msg.id = 76U;
    msg.range = 0.484636114633;
    msg.acceptance = 227U;

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
    msg.setTimeStamp(0.718303639736);
    msg.setSource(51822U);
    msg.setSourceEntity(105U);
    msg.setDestination(25445U);
    msg.setDestinationEntity(4U);
    msg.id = 167U;
    msg.range = 0.856391263264;
    msg.acceptance = 116U;

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
    msg.setTimeStamp(0.0528932126383);
    msg.setSource(32779U);
    msg.setSourceEntity(246U);
    msg.setDestination(37561U);
    msg.setDestinationEntity(213U);
    msg.id = 148U;
    msg.range = 0.84917885797;
    msg.acceptance = 96U;

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
    msg.setTimeStamp(0.127266546463);
    msg.setSource(52066U);
    msg.setSourceEntity(83U);
    msg.setDestination(35168U);
    msg.setDestinationEntity(73U);
    msg.type = 250U;
    msg.reason = 103U;
    msg.value = 0.929378058048;
    msg.timestep = 0.868045004385;

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
    msg.setTimeStamp(0.761788481985);
    msg.setSource(13314U);
    msg.setSourceEntity(114U);
    msg.setDestination(57784U);
    msg.setDestinationEntity(135U);
    msg.type = 152U;
    msg.reason = 114U;
    msg.value = 0.363028456401;
    msg.timestep = 0.529546994618;

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
    msg.setTimeStamp(0.797249419332);
    msg.setSource(9133U);
    msg.setSourceEntity(178U);
    msg.setDestination(34977U);
    msg.setDestinationEntity(228U);
    msg.type = 240U;
    msg.reason = 20U;
    msg.value = 0.431235997863;
    msg.timestep = 0.859248195426;

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
    msg.setTimeStamp(0.365627436863);
    msg.setSource(61482U);
    msg.setSourceEntity(62U);
    msg.setDestination(14239U);
    msg.setDestinationEntity(40U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("PULBBTKHJPELGHKGXCXSGRFFIXUCFMCRHRNYJQXIRROGHOPJOQEDBCJWDXSGZMWVFTAMHTFRANHLWWZHSVSSWUXLLGJAVTRPDKQMQQTNKESLKMQIKVFUUSDUEBYDBACPTWOAGFDGBCDQETPYLBNRHXHESNCZWNYMALBRHVFOKQZMYLVODTN");
    tmp_msg_0.lat = 0.14207485782;
    tmp_msg_0.lon = 0.490999295028;
    tmp_msg_0.depth = 0.688048124311;
    tmp_msg_0.query_channel = 21U;
    tmp_msg_0.reply_channel = 114U;
    tmp_msg_0.transponder_delay = 223U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.902263072913;
    msg.y = 0.770781760053;
    msg.var_x = 0.89169534297;
    msg.var_y = 0.800987287215;
    msg.distance = 0.0462557765079;

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
    msg.setTimeStamp(0.372938021936);
    msg.setSource(39004U);
    msg.setSourceEntity(249U);
    msg.setDestination(59416U);
    msg.setDestinationEntity(252U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("JKWMRRVPTSFNQSJOVXYWQMVEYWFXIPQKYJODNAXUVYYMQPLJTQYGEYTCQONRBWJUTDKZSSAUXEFBRRNSJNTALSDJZOUPDFKZDCPHNYCMXCGGPUAJZGXCQFZHAFZPWYQBIQKVWHADNRKABAJWWBENJFAHIUWLGGMCOMIIMIUBOBFVLZPWHZCUVKYERMUVHRIENGMFSCCNDMRBTBQGPOVKVBPKALTKOFUXOXTCDHDXRLS");
    tmp_msg_0.lat = 0.906514965242;
    tmp_msg_0.lon = 0.147961375051;
    tmp_msg_0.depth = 0.610166540465;
    tmp_msg_0.query_channel = 170U;
    tmp_msg_0.reply_channel = 128U;
    tmp_msg_0.transponder_delay = 56U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.913998035334;
    msg.y = 0.171850309586;
    msg.var_x = 0.0596884901531;
    msg.var_y = 0.811222180291;
    msg.distance = 0.185093560925;

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
    msg.setTimeStamp(0.746301226431);
    msg.setSource(11284U);
    msg.setSourceEntity(137U);
    msg.setDestination(17674U);
    msg.setDestinationEntity(232U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("JKQUNCSENVJMBUBYTYNCFHVKIDFWYHBFLYJPCVDZFMKDSDBIXYSURIBRMVXJJGROAHTMNOUODUGOMYTLNFSFOSFHPTWRMZOWPRXKNPTPCAQXGMSUQBCULAXLCSDJIZXKYAPILRALIHEPZCASQSMU");
    tmp_msg_0.lat = 0.433602303766;
    tmp_msg_0.lon = 0.325890986884;
    tmp_msg_0.depth = 0.0415742083253;
    tmp_msg_0.query_channel = 76U;
    tmp_msg_0.reply_channel = 18U;
    tmp_msg_0.transponder_delay = 39U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.398368379975;
    msg.y = 0.983321916371;
    msg.var_x = 0.980347200029;
    msg.var_y = 0.472641003144;
    msg.distance = 0.577873277846;

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
    msg.setTimeStamp(0.787716421908);
    msg.setSource(35991U);
    msg.setSourceEntity(247U);
    msg.setDestination(891U);
    msg.setDestinationEntity(139U);
    msg.state = 160U;

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
    msg.setTimeStamp(0.595417501597);
    msg.setSource(19700U);
    msg.setSourceEntity(197U);
    msg.setDestination(50787U);
    msg.setDestinationEntity(251U);
    msg.state = 230U;

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
    msg.setTimeStamp(0.062922623074);
    msg.setSource(8413U);
    msg.setSourceEntity(23U);
    msg.setDestination(49199U);
    msg.setDestinationEntity(213U);
    msg.state = 216U;

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
    msg.setTimeStamp(0.822730442314);
    msg.setSource(57468U);
    msg.setSourceEntity(87U);
    msg.setDestination(39938U);
    msg.setDestinationEntity(213U);
    msg.x = 0.571486807002;
    msg.y = 0.672845523746;
    msg.z = 0.146651964877;

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
    msg.setTimeStamp(0.52593069789);
    msg.setSource(51664U);
    msg.setSourceEntity(205U);
    msg.setDestination(9044U);
    msg.setDestinationEntity(51U);
    msg.x = 0.32690662522;
    msg.y = 0.227734068219;
    msg.z = 0.644068487223;

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
    msg.setTimeStamp(0.479494226461);
    msg.setSource(5598U);
    msg.setSourceEntity(39U);
    msg.setDestination(61964U);
    msg.setDestinationEntity(130U);
    msg.x = 0.74406583462;
    msg.y = 0.256711277142;
    msg.z = 0.309816856247;

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
    msg.setTimeStamp(0.68830284307);
    msg.setSource(58001U);
    msg.setSourceEntity(241U);
    msg.setDestination(2216U);
    msg.setDestinationEntity(204U);
    msg.va = 0.391222998548;
    msg.aoa = 0.633847021024;
    msg.ssa = 0.106779624373;

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
    msg.setTimeStamp(0.732569911128);
    msg.setSource(42621U);
    msg.setSourceEntity(215U);
    msg.setDestination(17536U);
    msg.setDestinationEntity(7U);
    msg.va = 0.0388217737307;
    msg.aoa = 0.142618703109;
    msg.ssa = 0.022736800548;

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
    msg.setTimeStamp(0.145655370159);
    msg.setSource(34432U);
    msg.setSourceEntity(29U);
    msg.setDestination(53427U);
    msg.setDestinationEntity(91U);
    msg.va = 0.301037368476;
    msg.aoa = 0.130539322842;
    msg.ssa = 0.15837888572;

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
    msg.setTimeStamp(0.744360910684);
    msg.setSource(43887U);
    msg.setSourceEntity(189U);
    msg.setDestination(41354U);
    msg.setDestinationEntity(147U);
    msg.value = 0.896652814222;
    msg.off = 0.424000738785;

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
    msg.setTimeStamp(0.686305460055);
    msg.setSource(16990U);
    msg.setSourceEntity(67U);
    msg.setDestination(63937U);
    msg.setDestinationEntity(221U);
    msg.value = 0.140107548567;
    msg.off = 0.740721285955;

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
    msg.setTimeStamp(0.909819876533);
    msg.setSource(50776U);
    msg.setSourceEntity(157U);
    msg.setDestination(21053U);
    msg.setDestinationEntity(159U);
    msg.value = 0.444375087967;
    msg.off = 0.480796310576;

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
    msg.setTimeStamp(0.104000671821);
    msg.setSource(64267U);
    msg.setSourceEntity(90U);
    msg.setDestination(12423U);
    msg.setDestinationEntity(81U);
    msg.value = 0.757057750781;
    msg.z_units = 150U;

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
    msg.setTimeStamp(0.380217279058);
    msg.setSource(38984U);
    msg.setSourceEntity(53U);
    msg.setDestination(25888U);
    msg.setDestinationEntity(249U);
    msg.value = 0.607353182342;
    msg.z_units = 226U;

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
    msg.setTimeStamp(0.0130394258564);
    msg.setSource(44101U);
    msg.setSourceEntity(89U);
    msg.setDestination(14610U);
    msg.setDestinationEntity(44U);
    msg.value = 0.493539083509;
    msg.z_units = 82U;

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
    msg.setTimeStamp(0.279106580684);
    msg.setSource(23655U);
    msg.setSourceEntity(13U);
    msg.setDestination(58539U);
    msg.setDestinationEntity(3U);
    msg.value = 0.636903142953;
    msg.speed_units = 32U;

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
    msg.setTimeStamp(0.20118362127);
    msg.setSource(46445U);
    msg.setSourceEntity(32U);
    msg.setDestination(45728U);
    msg.setDestinationEntity(51U);
    msg.value = 0.880731700452;
    msg.speed_units = 51U;

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
    msg.setTimeStamp(0.382803519885);
    msg.setSource(60565U);
    msg.setSourceEntity(1U);
    msg.setDestination(12895U);
    msg.setDestinationEntity(238U);
    msg.value = 0.0147170461183;
    msg.speed_units = 103U;

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
    msg.setTimeStamp(0.520985152176);
    msg.setSource(11579U);
    msg.setSourceEntity(122U);
    msg.setDestination(61902U);
    msg.setDestinationEntity(231U);
    msg.value = 0.503967878601;

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
    msg.setTimeStamp(0.160891974895);
    msg.setSource(33248U);
    msg.setSourceEntity(159U);
    msg.setDestination(48477U);
    msg.setDestinationEntity(165U);
    msg.value = 0.0429897436282;

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
    msg.setTimeStamp(0.880183260611);
    msg.setSource(50481U);
    msg.setSourceEntity(48U);
    msg.setDestination(10226U);
    msg.setDestinationEntity(57U);
    msg.value = 0.473389796214;

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
    msg.setTimeStamp(0.32626030338);
    msg.setSource(33817U);
    msg.setSourceEntity(173U);
    msg.setDestination(12209U);
    msg.setDestinationEntity(235U);
    msg.value = 0.0203122445341;

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
    msg.setTimeStamp(0.894583503933);
    msg.setSource(29144U);
    msg.setSourceEntity(80U);
    msg.setDestination(51401U);
    msg.setDestinationEntity(224U);
    msg.value = 0.783516798105;

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
    msg.setTimeStamp(0.846267967977);
    msg.setSource(49006U);
    msg.setSourceEntity(154U);
    msg.setDestination(25322U);
    msg.setDestinationEntity(56U);
    msg.value = 0.32485897062;

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
    msg.setTimeStamp(0.314142104185);
    msg.setSource(36772U);
    msg.setSourceEntity(237U);
    msg.setDestination(50915U);
    msg.setDestinationEntity(74U);
    msg.value = 0.576574281455;

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
    msg.setTimeStamp(0.000948860944155);
    msg.setSource(11116U);
    msg.setSourceEntity(242U);
    msg.setDestination(10011U);
    msg.setDestinationEntity(169U);
    msg.value = 0.978675278122;

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
    msg.setTimeStamp(0.616035936586);
    msg.setSource(54985U);
    msg.setSourceEntity(48U);
    msg.setDestination(14180U);
    msg.setDestinationEntity(35U);
    msg.value = 0.478694501242;

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
    msg.setTimeStamp(0.963703865744);
    msg.setSource(19478U);
    msg.setSourceEntity(247U);
    msg.setDestination(17624U);
    msg.setDestinationEntity(196U);
    msg.path_ref = 406486452U;
    msg.start_lat = 0.400219072282;
    msg.start_lon = 0.732571552698;
    msg.start_z = 0.51366046364;
    msg.start_z_units = 214U;
    msg.end_lat = 0.281456049476;
    msg.end_lon = 0.297800071514;
    msg.end_z = 0.142482670276;
    msg.end_z_units = 114U;
    msg.speed = 0.860430709801;
    msg.speed_units = 18U;
    msg.lradius = 0.886186669318;
    msg.flags = 147U;

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
    msg.setTimeStamp(0.519190729735);
    msg.setSource(219U);
    msg.setSourceEntity(242U);
    msg.setDestination(59150U);
    msg.setDestinationEntity(69U);
    msg.path_ref = 1609262257U;
    msg.start_lat = 0.494100176482;
    msg.start_lon = 0.980468177517;
    msg.start_z = 0.612611113307;
    msg.start_z_units = 156U;
    msg.end_lat = 0.918101600838;
    msg.end_lon = 0.703369515626;
    msg.end_z = 0.664074318949;
    msg.end_z_units = 137U;
    msg.speed = 0.928498522032;
    msg.speed_units = 84U;
    msg.lradius = 0.167213231434;
    msg.flags = 242U;

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
    msg.setTimeStamp(0.145611274689);
    msg.setSource(44756U);
    msg.setSourceEntity(125U);
    msg.setDestination(31841U);
    msg.setDestinationEntity(97U);
    msg.path_ref = 3537366057U;
    msg.start_lat = 0.828883333351;
    msg.start_lon = 0.742927551116;
    msg.start_z = 0.989858147567;
    msg.start_z_units = 189U;
    msg.end_lat = 0.185584429289;
    msg.end_lon = 0.37188841059;
    msg.end_z = 0.235430577752;
    msg.end_z_units = 41U;
    msg.speed = 0.672410653436;
    msg.speed_units = 23U;
    msg.lradius = 0.6043448792;
    msg.flags = 111U;

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
    msg.setTimeStamp(0.0579050560523);
    msg.setSource(18352U);
    msg.setSourceEntity(192U);
    msg.setDestination(29765U);
    msg.setDestinationEntity(188U);
    msg.x = 0.911956633397;
    msg.y = 0.479007931532;
    msg.z = 0.53625575337;
    msg.k = 0.572197089506;
    msg.m = 0.493728336706;
    msg.n = 0.344456391874;
    msg.flags = 166U;

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
    msg.setTimeStamp(0.00295275866009);
    msg.setSource(24013U);
    msg.setSourceEntity(48U);
    msg.setDestination(18067U);
    msg.setDestinationEntity(71U);
    msg.x = 0.235933665973;
    msg.y = 0.51381267701;
    msg.z = 0.189115928961;
    msg.k = 0.0944202999123;
    msg.m = 0.300603771968;
    msg.n = 0.167826315827;
    msg.flags = 244U;

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
    msg.setTimeStamp(0.190579936083);
    msg.setSource(22648U);
    msg.setSourceEntity(115U);
    msg.setDestination(736U);
    msg.setDestinationEntity(81U);
    msg.x = 0.42696461649;
    msg.y = 0.470582944242;
    msg.z = 0.770311219898;
    msg.k = 0.0329801733582;
    msg.m = 0.0486627464548;
    msg.n = 0.944556123805;
    msg.flags = 158U;

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
    msg.setTimeStamp(0.63120272198);
    msg.setSource(52433U);
    msg.setSourceEntity(155U);
    msg.setDestination(42903U);
    msg.setDestinationEntity(66U);
    msg.value = 0.767470214902;

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
    msg.setTimeStamp(0.971754870173);
    msg.setSource(39059U);
    msg.setSourceEntity(150U);
    msg.setDestination(50523U);
    msg.setDestinationEntity(19U);
    msg.value = 0.0763661435288;

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
    msg.setTimeStamp(0.739631876026);
    msg.setSource(38190U);
    msg.setSourceEntity(157U);
    msg.setDestination(18246U);
    msg.setDestinationEntity(141U);
    msg.value = 0.332312975888;

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
    msg.setTimeStamp(0.569811747712);
    msg.setSource(113U);
    msg.setSourceEntity(58U);
    msg.setDestination(148U);
    msg.setDestinationEntity(198U);
    msg.u = 0.141979175624;
    msg.v = 0.426242423682;
    msg.w = 0.587744357309;
    msg.p = 0.575460715047;
    msg.q = 0.304650964131;
    msg.r = 0.703118872592;
    msg.flags = 168U;

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
    msg.setTimeStamp(0.67465528924);
    msg.setSource(6963U);
    msg.setSourceEntity(165U);
    msg.setDestination(4882U);
    msg.setDestinationEntity(27U);
    msg.u = 0.703384945165;
    msg.v = 0.715905103014;
    msg.w = 0.801195137466;
    msg.p = 0.191955891991;
    msg.q = 0.84386293747;
    msg.r = 0.882160201613;
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
    msg.setTimeStamp(0.276429906236);
    msg.setSource(18143U);
    msg.setSourceEntity(35U);
    msg.setDestination(23694U);
    msg.setDestinationEntity(223U);
    msg.u = 0.327868567064;
    msg.v = 0.717952644461;
    msg.w = 0.476634344944;
    msg.p = 0.961804493587;
    msg.q = 0.394729503643;
    msg.r = 0.851077926222;
    msg.flags = 12U;

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
    msg.setTimeStamp(0.794859136911);
    msg.setSource(7524U);
    msg.setSourceEntity(56U);
    msg.setDestination(39827U);
    msg.setDestinationEntity(13U);
    msg.path_ref = 2770682541U;
    msg.start_lat = 0.618942033799;
    msg.start_lon = 0.758979565065;
    msg.start_z = 0.807751248211;
    msg.start_z_units = 65U;
    msg.end_lat = 0.188202936888;
    msg.end_lon = 0.226730904816;
    msg.end_z = 0.0160929735392;
    msg.end_z_units = 72U;
    msg.lradius = 0.0581717814923;
    msg.flags = 87U;
    msg.x = 0.245140570279;
    msg.y = 0.262799187447;
    msg.z = 0.245214766937;
    msg.vx = 0.921431365225;
    msg.vy = 0.856887549179;
    msg.vz = 0.705016003335;
    msg.course_error = 0.902279874641;
    msg.eta = 22312U;

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
    msg.setTimeStamp(0.82468615724);
    msg.setSource(31496U);
    msg.setSourceEntity(3U);
    msg.setDestination(46092U);
    msg.setDestinationEntity(34U);
    msg.path_ref = 3177099331U;
    msg.start_lat = 0.571022614522;
    msg.start_lon = 0.622172481115;
    msg.start_z = 0.339519156298;
    msg.start_z_units = 82U;
    msg.end_lat = 0.151130202689;
    msg.end_lon = 0.494234725059;
    msg.end_z = 0.881630033926;
    msg.end_z_units = 150U;
    msg.lradius = 0.0549714186973;
    msg.flags = 119U;
    msg.x = 0.998666225777;
    msg.y = 0.951218793074;
    msg.z = 0.560892012737;
    msg.vx = 0.0276848932344;
    msg.vy = 0.104842197022;
    msg.vz = 0.048151899258;
    msg.course_error = 0.684554904842;
    msg.eta = 34389U;

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
    msg.setTimeStamp(0.357870525791);
    msg.setSource(4889U);
    msg.setSourceEntity(133U);
    msg.setDestination(14022U);
    msg.setDestinationEntity(33U);
    msg.path_ref = 2930428053U;
    msg.start_lat = 0.342429089693;
    msg.start_lon = 0.876900642211;
    msg.start_z = 0.945306787028;
    msg.start_z_units = 129U;
    msg.end_lat = 0.573242846932;
    msg.end_lon = 0.0232582287578;
    msg.end_z = 0.128051407056;
    msg.end_z_units = 29U;
    msg.lradius = 0.0720768074235;
    msg.flags = 131U;
    msg.x = 0.60366601797;
    msg.y = 0.960705810877;
    msg.z = 0.531739128305;
    msg.vx = 0.445884063942;
    msg.vy = 0.221678025113;
    msg.vz = 0.0240018540904;
    msg.course_error = 0.312303204788;
    msg.eta = 30286U;

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
    msg.setTimeStamp(0.110141052551);
    msg.setSource(34785U);
    msg.setSourceEntity(179U);
    msg.setDestination(8215U);
    msg.setDestinationEntity(82U);
    msg.k = 0.280156372637;
    msg.m = 0.150832081992;
    msg.n = 0.935050419416;

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
    msg.setTimeStamp(0.793650910364);
    msg.setSource(43378U);
    msg.setSourceEntity(75U);
    msg.setDestination(28211U);
    msg.setDestinationEntity(178U);
    msg.k = 0.0184306517031;
    msg.m = 0.778622061895;
    msg.n = 0.653694701619;

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
    msg.setTimeStamp(0.780094916366);
    msg.setSource(18502U);
    msg.setSourceEntity(206U);
    msg.setDestination(48690U);
    msg.setDestinationEntity(65U);
    msg.k = 0.299934605417;
    msg.m = 0.243142404954;
    msg.n = 0.682518078431;

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
    msg.setTimeStamp(0.502582617443);
    msg.setSource(7010U);
    msg.setSourceEntity(12U);
    msg.setDestination(32155U);
    msg.setDestinationEntity(222U);
    msg.p = 0.739719130055;
    msg.i = 0.177243784794;
    msg.d = 0.17847763143;
    msg.a = 0.973451856181;

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
    msg.setTimeStamp(0.773987668607);
    msg.setSource(19067U);
    msg.setSourceEntity(254U);
    msg.setDestination(8624U);
    msg.setDestinationEntity(238U);
    msg.p = 0.381729200102;
    msg.i = 0.227620878613;
    msg.d = 0.176779756896;
    msg.a = 0.127987538465;

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
    msg.setTimeStamp(0.883346733918);
    msg.setSource(59235U);
    msg.setSourceEntity(124U);
    msg.setDestination(47624U);
    msg.setDestinationEntity(176U);
    msg.p = 0.590618078399;
    msg.i = 0.86092471988;
    msg.d = 0.761537097251;
    msg.a = 0.540447007735;

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
    msg.setTimeStamp(0.157238350828);
    msg.setSource(11344U);
    msg.setSourceEntity(101U);
    msg.setDestination(242U);
    msg.setDestinationEntity(242U);
    msg.op = 187U;

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
    msg.setTimeStamp(0.72496945453);
    msg.setSource(5428U);
    msg.setSourceEntity(180U);
    msg.setDestination(60236U);
    msg.setDestinationEntity(66U);
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
    msg.setTimeStamp(0.931939028155);
    msg.setSource(1523U);
    msg.setSourceEntity(103U);
    msg.setDestination(10719U);
    msg.setDestinationEntity(52U);
    msg.op = 99U;

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
    msg.setTimeStamp(0.429786805162);
    msg.setSource(22410U);
    msg.setSourceEntity(179U);
    msg.setDestination(38397U);
    msg.setDestinationEntity(181U);
    msg.x = 0.321905142893;
    msg.y = 0.955388919099;
    msg.z = 0.213074871834;
    msg.vx = 0.821844133513;
    msg.vy = 0.994882402538;
    msg.vz = 0.288721802865;
    msg.ax = 0.977376043671;
    msg.ay = 0.193493495726;
    msg.az = 0.327934722007;
    msg.flags = 40049U;

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
    msg.setTimeStamp(0.627412723213);
    msg.setSource(35601U);
    msg.setSourceEntity(180U);
    msg.setDestination(52144U);
    msg.setDestinationEntity(166U);
    msg.x = 0.57622509038;
    msg.y = 0.103463340543;
    msg.z = 0.272983271026;
    msg.vx = 0.553893619743;
    msg.vy = 0.211585712697;
    msg.vz = 0.923746289173;
    msg.ax = 0.870457506015;
    msg.ay = 0.536162679666;
    msg.az = 0.641900264356;
    msg.flags = 28304U;

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
    msg.setTimeStamp(0.786808272362);
    msg.setSource(46071U);
    msg.setSourceEntity(11U);
    msg.setDestination(60800U);
    msg.setDestinationEntity(127U);
    msg.x = 0.250039588873;
    msg.y = 0.638221134257;
    msg.z = 0.237464619838;
    msg.vx = 0.0152585082331;
    msg.vy = 0.433441460013;
    msg.vz = 0.510172759153;
    msg.ax = 0.936096129596;
    msg.ay = 0.753881705036;
    msg.az = 0.420871333816;
    msg.flags = 57522U;

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
    msg.setTimeStamp(0.540829958419);
    msg.setSource(60250U);
    msg.setSourceEntity(241U);
    msg.setDestination(6658U);
    msg.setDestinationEntity(225U);
    msg.value = 0.320615254293;

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
    msg.setTimeStamp(0.0239674779652);
    msg.setSource(49143U);
    msg.setSourceEntity(103U);
    msg.setDestination(36955U);
    msg.setDestinationEntity(90U);
    msg.value = 0.562736126601;

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
    msg.setTimeStamp(0.665442799634);
    msg.setSource(38071U);
    msg.setSourceEntity(14U);
    msg.setDestination(58162U);
    msg.setDestinationEntity(81U);
    msg.value = 0.332258568805;

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
    msg.setTimeStamp(0.288597084193);
    msg.setSource(57345U);
    msg.setSourceEntity(151U);
    msg.setDestination(3639U);
    msg.setDestinationEntity(136U);
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.path_ref = 2289381195U;
    tmp_msg_0.start_lat = 0.803872415244;
    tmp_msg_0.start_lon = 0.714175528601;
    tmp_msg_0.start_z = 0.864286083216;
    tmp_msg_0.start_z_units = 34U;
    tmp_msg_0.end_lat = 0.108448982408;
    tmp_msg_0.end_lon = 0.26481866827;
    tmp_msg_0.end_z = 0.516482733991;
    tmp_msg_0.end_z_units = 22U;
    tmp_msg_0.speed = 0.428509148614;
    tmp_msg_0.speed_units = 238U;
    tmp_msg_0.lradius = 0.81362897986;
    tmp_msg_0.flags = 217U;
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
    msg.setTimeStamp(0.976096817169);
    msg.setSource(29556U);
    msg.setSourceEntity(4U);
    msg.setDestination(51022U);
    msg.setDestinationEntity(194U);
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.path_ref = 806144727U;
    tmp_msg_0.start_lat = 0.605324222863;
    tmp_msg_0.start_lon = 0.750283903615;
    tmp_msg_0.start_z = 0.216806978072;
    tmp_msg_0.start_z_units = 94U;
    tmp_msg_0.end_lat = 0.703702983683;
    tmp_msg_0.end_lon = 0.0535865407811;
    tmp_msg_0.end_z = 0.413918563096;
    tmp_msg_0.end_z_units = 39U;
    tmp_msg_0.speed = 0.358261378543;
    tmp_msg_0.speed_units = 88U;
    tmp_msg_0.lradius = 0.572323944579;
    tmp_msg_0.flags = 162U;
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
    msg.setTimeStamp(0.462813822115);
    msg.setSource(3229U);
    msg.setSourceEntity(219U);
    msg.setDestination(36053U);
    msg.setDestinationEntity(138U);
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.path_ref = 3820421447U;
    tmp_msg_0.start_lat = 0.674857506483;
    tmp_msg_0.start_lon = 0.626911702205;
    tmp_msg_0.start_z = 0.840736573942;
    tmp_msg_0.start_z_units = 208U;
    tmp_msg_0.end_lat = 0.256869623453;
    tmp_msg_0.end_lon = 0.435978962195;
    tmp_msg_0.end_z = 0.429515641893;
    tmp_msg_0.end_z_units = 113U;
    tmp_msg_0.speed = 0.34156094525;
    tmp_msg_0.speed_units = 129U;
    tmp_msg_0.lradius = 0.291730373561;
    tmp_msg_0.flags = 172U;
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
    msg.setTimeStamp(0.411036811373);
    msg.setSource(5203U);
    msg.setSourceEntity(14U);
    msg.setDestination(39621U);
    msg.setDestinationEntity(75U);
    msg.timeout = 4708U;
    msg.lat = 0.847598527043;
    msg.lon = 0.569240901035;
    msg.z = 0.53677119295;
    msg.z_units = 215U;
    msg.speed = 0.042398006652;
    msg.speed_units = 212U;
    msg.roll = 0.145219445645;
    msg.pitch = 0.065399263773;
    msg.yaw = 0.476576775872;
    msg.custom.assign("TTSEUWWWKFCRTZNGWD");

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
    msg.setTimeStamp(0.0260557874801);
    msg.setSource(19476U);
    msg.setSourceEntity(131U);
    msg.setDestination(52182U);
    msg.setDestinationEntity(6U);
    msg.timeout = 57704U;
    msg.lat = 0.670150461393;
    msg.lon = 0.150200293958;
    msg.z = 0.718528658333;
    msg.z_units = 164U;
    msg.speed = 0.479649367172;
    msg.speed_units = 108U;
    msg.roll = 0.979289434214;
    msg.pitch = 0.254772930065;
    msg.yaw = 0.453256020558;
    msg.custom.assign("DZTLGAEKSPUUVGKQEYIEUYWFBRWQZXQTOZWOUSDDRPWOKBMYCFKVRVFBMLDOATYCJGHMHISINVCJZHGPJXFNPEHQFIAAFEAMTDPHXXQIUFTOSVJQHKZTKNZOYPNAIQSONOKMYLBGBEXXSCJRRGJTAHUDICJBQMXSBQKRVHHCWALVXVZDUREWOPCWAHWPCLJZLKRLOPGKGRSVIJIBAMZDDLNEIFUB");

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
    msg.setTimeStamp(0.498880402075);
    msg.setSource(29528U);
    msg.setSourceEntity(94U);
    msg.setDestination(17835U);
    msg.setDestinationEntity(56U);
    msg.timeout = 31266U;
    msg.lat = 0.0398878298722;
    msg.lon = 0.511839559726;
    msg.z = 0.0222574152189;
    msg.z_units = 222U;
    msg.speed = 0.284244374474;
    msg.speed_units = 223U;
    msg.roll = 0.0958412037023;
    msg.pitch = 0.539438689807;
    msg.yaw = 0.0605188138611;
    msg.custom.assign("ZJPCUBLMCFCKWLNLDAYXOBRYVEBDZQFEOLYNDLRZGOJWZITEQGYWEXBQCMDIIPJQHEIYUQWIOMWOVSRRVZCSCZYOB");

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
    msg.setTimeStamp(0.398031720282);
    msg.setSource(11629U);
    msg.setSourceEntity(171U);
    msg.setDestination(10314U);
    msg.setDestinationEntity(195U);
    msg.timeout = 44883U;
    msg.lat = 0.0239719072332;
    msg.lon = 0.550160487924;
    msg.z = 0.834286019481;
    msg.z_units = 200U;
    msg.speed = 0.116025744999;
    msg.speed_units = 248U;
    msg.duration = 22713U;
    msg.radius = 0.391384019354;
    msg.flags = 169U;
    msg.custom.assign("QLODGDRNCNFSPZZUKOLCIJKQRRBENESTZLIWZOKREFLDFEOYRXDACOKZHSCEEBUBAHIUSOMZUVHPDBWJALMTKUVRUHFJILHJQZFIMSCGEYFJPXXWYHDGXPPUWNQDEVCXGIJNASFMCKDTKMTYPYQBVSBCNKODRUWKEIQATDYJYVQVMMGWPPQXNTOGJBQYXABBGAFIACSCGLHMTXIYFRUKTXHLWSLBMGVTNOZHNVIQJSPXFWJLGPR");

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
    msg.setTimeStamp(0.795761980554);
    msg.setSource(18178U);
    msg.setSourceEntity(36U);
    msg.setDestination(50402U);
    msg.setDestinationEntity(0U);
    msg.timeout = 45978U;
    msg.lat = 0.154454916038;
    msg.lon = 0.799178694247;
    msg.z = 0.979033919247;
    msg.z_units = 25U;
    msg.speed = 0.148860900684;
    msg.speed_units = 128U;
    msg.duration = 14924U;
    msg.radius = 0.107195798021;
    msg.flags = 181U;
    msg.custom.assign("TACKCQSBUJJYXXEHOYFDNGKYDFZYYI");

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
    msg.setTimeStamp(0.664688004349);
    msg.setSource(6153U);
    msg.setSourceEntity(34U);
    msg.setDestination(6756U);
    msg.setDestinationEntity(183U);
    msg.timeout = 10571U;
    msg.lat = 0.344654274186;
    msg.lon = 0.277780584321;
    msg.z = 0.642216762099;
    msg.z_units = 214U;
    msg.speed = 0.216597124893;
    msg.speed_units = 18U;
    msg.duration = 40053U;
    msg.radius = 0.35526285152;
    msg.flags = 21U;
    msg.custom.assign("OXYUAVSMRVBOIIQMOUMUEZGQETVWKTYNTLGSNQTNMMZMLBVYRWDBVOQNQNFKTPGFAHRDBRWIDZIUNQMKBAESTTELXUDFWQGVBJYUDVPULBJLLXQHLQSCFDXWKXHPJSAXDPHDXIEROWPFIKEFZIVOZRJLSEPNSFSFGHHJZFGGKEGISYJXRPGYCWMHOERFJATCVU");

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
    msg.setTimeStamp(0.969372167514);
    msg.setSource(41687U);
    msg.setSourceEntity(153U);
    msg.setDestination(59795U);
    msg.setDestinationEntity(83U);
    msg.custom.assign("RZOJPMVUTQUQODDVEISIIASSUJIAKGGCLSPIYYYPYBKASAJRQWMUDLZIWWKFNBZTRKSEWTPOEYCDUHGJCGMADEBTHLYCFCRAVPPRZJEZICRLIPABBJMVKOXHHOTCXWOQNTGMMZDBKSNFQLBBAWHXJXPQCPXGNBNSGZHESGHLJGTYVOFOUOSENLFRVCVHKFEHQDQWNBQJXVURXPNVNTACKUIREYFMHMUOYM");

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
    msg.setTimeStamp(0.805708190669);
    msg.setSource(46313U);
    msg.setSourceEntity(24U);
    msg.setDestination(38508U);
    msg.setDestinationEntity(37U);
    msg.custom.assign("TQGMLREFFMWGTIWSVDISGAAGOVRCYXNIXMYQIMEIXDFJJBSSK");

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
    msg.setTimeStamp(0.375943917943);
    msg.setSource(14154U);
    msg.setSourceEntity(169U);
    msg.setDestination(56377U);
    msg.setDestinationEntity(93U);
    msg.custom.assign("NUOEBXFJOWSKVOGITYBZIZJUCIDQP");

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
    msg.setTimeStamp(0.474129435534);
    msg.setSource(16116U);
    msg.setSourceEntity(214U);
    msg.setDestination(35331U);
    msg.setDestinationEntity(171U);
    msg.timeout = 37007U;
    msg.lat = 0.891519808761;
    msg.lon = 0.641730402651;
    msg.z = 0.618848455055;
    msg.z_units = 213U;
    msg.duration = 61201U;
    msg.speed = 0.732640274455;
    msg.speed_units = 98U;
    msg.type = 188U;
    msg.radius = 0.161512763416;
    msg.length = 0.33230118711;
    msg.bearing = 0.543130766532;
    msg.direction = 166U;
    msg.custom.assign("WEITXFXYGKPYOBPBZHDUUIGXPOAESAVHAEJXZQVFOYOGJNGNDZAKNEZUJXASSJIXRSXYKMCYCOFGSKMWDARVYBCVOIKSODJYNMYVXAXWP");

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
    msg.setTimeStamp(0.49338589729);
    msg.setSource(36728U);
    msg.setSourceEntity(65U);
    msg.setDestination(18672U);
    msg.setDestinationEntity(117U);
    msg.timeout = 64011U;
    msg.lat = 0.519880933282;
    msg.lon = 0.284148287562;
    msg.z = 0.84662689093;
    msg.z_units = 52U;
    msg.duration = 6178U;
    msg.speed = 0.942131714386;
    msg.speed_units = 213U;
    msg.type = 13U;
    msg.radius = 0.750889309628;
    msg.length = 0.183787879358;
    msg.bearing = 0.981445183234;
    msg.direction = 82U;
    msg.custom.assign("MJVOTDMHTNXENPYMRFVVKKJRNPZRJIPLBAZSQLAALEBYRSDMAUJHKXAKBBBDVGHYCWSISWPDGGDGUEHJHUREFVYZPAHZNMOHIKYQSJMSCUAEQGRLEGNQDWSCCKTACUJOTTQGSFRWXVPCUZIMVTUMXGQ");

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
    msg.setTimeStamp(0.00261173689767);
    msg.setSource(54049U);
    msg.setSourceEntity(245U);
    msg.setDestination(47711U);
    msg.setDestinationEntity(253U);
    msg.timeout = 17713U;
    msg.lat = 0.937022979747;
    msg.lon = 0.426786037453;
    msg.z = 0.683455221213;
    msg.z_units = 30U;
    msg.duration = 22270U;
    msg.speed = 0.180074990757;
    msg.speed_units = 52U;
    msg.type = 24U;
    msg.radius = 0.816371925732;
    msg.length = 0.102676061088;
    msg.bearing = 0.415433417633;
    msg.direction = 73U;
    msg.custom.assign("PBNERFUMPCGHSUAOVGADWXDHTWNAUSBBYZZZWKIUUZKABSWCUX");

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
    msg.setTimeStamp(0.42272136282);
    msg.setSource(42176U);
    msg.setSourceEntity(52U);
    msg.setDestination(15356U);
    msg.setDestinationEntity(198U);
    msg.duration = 6309U;
    msg.custom.assign("YBJMYRNMJIEPJTWLBOLA");

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
    msg.setTimeStamp(0.549175832182);
    msg.setSource(18138U);
    msg.setSourceEntity(253U);
    msg.setDestination(13592U);
    msg.setDestinationEntity(229U);
    msg.duration = 58114U;
    msg.custom.assign("HEGCFAWLCLYHQOTZVDHKDEBZIOOALFMTNVIXZPRXUDMQYUAOJSQWPD");

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
    msg.setTimeStamp(0.46909884329);
    msg.setSource(20474U);
    msg.setSourceEntity(105U);
    msg.setDestination(64893U);
    msg.setDestinationEntity(29U);
    msg.duration = 18388U;
    msg.custom.assign("AOMRFXUSHEJVBTKRPMWCJGEIMAISINWMOOOHHKOKLKZKFXQOVARUGXVLNTFZWBGFMRDFGIOEIUJWSQIXDVXBWMJCCGBPBYTGXBCHIUNUFZCZGNRRTYNVEGMXNROJAYA");

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
    msg.setTimeStamp(0.693170206381);
    msg.setSource(20270U);
    msg.setSourceEntity(97U);
    msg.setDestination(41750U);
    msg.setDestinationEntity(168U);
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.path_ref = 553869526U;
    tmp_msg_0.start_lat = 0.379003292798;
    tmp_msg_0.start_lon = 0.153554888005;
    tmp_msg_0.start_z = 0.133454505378;
    tmp_msg_0.start_z_units = 206U;
    tmp_msg_0.end_lat = 0.528098513135;
    tmp_msg_0.end_lon = 0.0222713622973;
    tmp_msg_0.end_z = 0.612822982163;
    tmp_msg_0.end_z_units = 220U;
    tmp_msg_0.speed = 0.0313482839501;
    tmp_msg_0.speed_units = 56U;
    tmp_msg_0.lradius = 0.468545477605;
    tmp_msg_0.flags = 252U;
    msg.control.set(tmp_msg_0);
    msg.duration = 65301U;
    msg.custom.assign("PJTOOTXISFSEBXYJBOTQVBYENNMXYTRYACGRGWQLKBKOFXAMNGCXSQNFMNMIDJGTQXPSWIFUZAIYADYLVBCTWGVCMDHFFRDTKJRATKKUIVSIHVAXJKVDHDHUWWZZVKRBFYRYZULDUVEYALFORFUPVHGORDTHMEQQJAUZFLZPEQSQHBJVHJDCPMGHJEINPNHONMKLBDEJEKLZBPLSYCQWBPCWPMCSZUOUSOKGXWEW");

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
    msg.setTimeStamp(0.631640380014);
    msg.setSource(47591U);
    msg.setSourceEntity(204U);
    msg.setDestination(33987U);
    msg.setDestinationEntity(250U);
    IMC::DesiredPitch tmp_msg_0;
    tmp_msg_0.value = 0.379652166147;
    msg.control.set(tmp_msg_0);
    msg.duration = 49795U;
    msg.custom.assign("GVUHWOVUZBKRMBFRXMOMJOCSZVPMCEYEVDNFEGMLQJVBQNFOZUCEQAXSDTUSUNZIBQWPUQAVWDIYEBDQFRNYEEXPFNXEKRUCHBWPIJSTKIRSLQRSATVGJPLTDYHBVTMQMTJWNVISKMWYKMHYXLLJZKLXWFHDGGPBCZLCYHCYJVWBAXXQHYPOKRNZADIROLOGUDFUJWP");

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
    msg.setTimeStamp(0.696972764698);
    msg.setSource(49585U);
    msg.setSourceEntity(138U);
    msg.setDestination(28321U);
    msg.setDestinationEntity(207U);
    IMC::DesiredZ tmp_msg_0;
    tmp_msg_0.value = 0.578825906682;
    tmp_msg_0.z_units = 187U;
    msg.control.set(tmp_msg_0);
    msg.duration = 49993U;
    msg.custom.assign("KLFRAOBSGAHYXOUUYRFXNYPCDCDKVCRBQLTCZFKJBIRVGKQZIZEAPVSSHQOTONAVRZDGAZOWPZWKZOQAOHMXWESWZLGIZDSYVTLFHFGMPFLJAIPUGBQGXNUBSQHRQEOKDUFTPYPMJUMJIMHYWEBXBDYLEXPCEUNJUYLULEMDPXUMWNKQIXIVCIMXTCPBCHELSYKQNBFRCSJVJWSCTTTXDAKDBNKNGVMHEMGDWGQOAVLERIHWWS");

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
    msg.setTimeStamp(0.665272105996);
    msg.setSource(410U);
    msg.setSourceEntity(198U);
    msg.setDestination(40190U);
    msg.setDestinationEntity(52U);
    msg.timeout = 61988U;
    msg.lat = 0.97656403522;
    msg.lon = 0.661586459889;
    msg.z = 0.699152573106;
    msg.z_units = 154U;
    msg.speed = 0.802224566995;
    msg.speed_units = 173U;
    msg.bearing = 0.63354357958;
    msg.cross_angle = 0.770097699437;
    msg.width = 0.571376720912;
    msg.length = 0.971284381865;
    msg.hstep = 0.215814236004;
    msg.coff = 148U;
    msg.alternation = 4U;
    msg.flags = 153U;
    msg.custom.assign("XUQVICUHHCLCJSNQJHHEXNEKKQEOJWGBUANXOVWHCDOMXTBMAOPBKUTJQM");

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
    msg.setTimeStamp(0.342124254213);
    msg.setSource(19053U);
    msg.setSourceEntity(117U);
    msg.setDestination(28753U);
    msg.setDestinationEntity(54U);
    msg.timeout = 53070U;
    msg.lat = 0.65534118427;
    msg.lon = 0.15569942174;
    msg.z = 0.943290491889;
    msg.z_units = 85U;
    msg.speed = 0.342727748521;
    msg.speed_units = 223U;
    msg.bearing = 0.733862671192;
    msg.cross_angle = 0.143728734414;
    msg.width = 0.780074320643;
    msg.length = 0.375708231838;
    msg.hstep = 0.331729275662;
    msg.coff = 249U;
    msg.alternation = 50U;
    msg.flags = 179U;
    msg.custom.assign("CVOFMMDFWEAHXCEESKRHQRWLPYLUIYATKCFAQOEDFAWFORBJPZFRMJOSYNQTBHFXCHWILCAEBHIPFJXZPMISAYSYFQQVNLDQVLSKIGIUJBTGZUVBIWDXYPNSCMPWANGGTGSJDLOTVKLZOVNODYVXNZDCPGHRDHPEUNQWUAHQUDBJIBZQFTYZVKWRTNHUTPTZXQABXROCMUNLGSTOYSAUPGWXVMVJZRERSKJIEGXIRJBWDHKGELLMMCYZOBKNE");

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
    msg.setTimeStamp(0.427784953064);
    msg.setSource(51551U);
    msg.setSourceEntity(133U);
    msg.setDestination(58061U);
    msg.setDestinationEntity(71U);
    msg.timeout = 3667U;
    msg.lat = 0.205137899294;
    msg.lon = 0.424450195553;
    msg.z = 0.364976183055;
    msg.z_units = 210U;
    msg.speed = 0.457818719689;
    msg.speed_units = 9U;
    msg.bearing = 0.304031174321;
    msg.cross_angle = 0.286641526175;
    msg.width = 0.165726938557;
    msg.length = 0.777145031145;
    msg.hstep = 0.556465453614;
    msg.coff = 213U;
    msg.alternation = 193U;
    msg.flags = 104U;
    msg.custom.assign("NZKLSSPLJISRUXIZLURSGIVLRGLLRZBVHABFBIQAUGWZXODFDDKMUXOBYMVTFMUEMPCUEPCHXQ");

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
    msg.setTimeStamp(0.970939443513);
    msg.setSource(22184U);
    msg.setSourceEntity(132U);
    msg.setDestination(14254U);
    msg.setDestinationEntity(28U);
    msg.timeout = 34843U;
    msg.lat = 0.777068556932;
    msg.lon = 0.46244293097;
    msg.z = 0.263435696469;
    msg.z_units = 42U;
    msg.speed = 0.104401422592;
    msg.speed_units = 46U;
    msg.custom.assign("WFVZMXUXBUOSQHCLQJTDNEVULJHOKXCYLZTSEMFJMKNNCRUALYAWKCLBWQGQGBSVYDAFCMZCIBAQZSAWFRCWBYNH");

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
    msg.setTimeStamp(0.329159591297);
    msg.setSource(51681U);
    msg.setSourceEntity(77U);
    msg.setDestination(55510U);
    msg.setDestinationEntity(108U);
    msg.timeout = 21793U;
    msg.lat = 0.743370811514;
    msg.lon = 0.492026830731;
    msg.z = 0.235897780089;
    msg.z_units = 104U;
    msg.speed = 0.832463004247;
    msg.speed_units = 149U;
    msg.custom.assign("TUMKFEYRFRDNFREAMCZHDOJLSCIJGCUBVNVWYETVQWORVSKGYHHWMNRUBZCZZQACCYAJXGLYLPFXVILODEMWAPIUVIPKYPXQCDONFWGUUNOHBAWSXTVPKHNNBHGOBYFNUGZZAZXQKFRCPWAEOLLKPMMDIQIMXOSITAKMNBILJQSSZTXYFQUPYQUEMAWWGHBLQDZSGHPQAFODERREHJXIRHEKJJ");

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
    msg.setTimeStamp(0.0316350073433);
    msg.setSource(40673U);
    msg.setSourceEntity(13U);
    msg.setDestination(64437U);
    msg.setDestinationEntity(120U);
    msg.timeout = 54321U;
    msg.lat = 0.341490587237;
    msg.lon = 0.523604459438;
    msg.z = 0.880624349106;
    msg.z_units = 188U;
    msg.speed = 0.670450268825;
    msg.speed_units = 14U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.421936221795;
    tmp_msg_0.y = 0.68314471765;
    tmp_msg_0.z = 0.857433541438;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("VGGUINHBWNCIPYPSMPYHLFRXNDWQPXYBQBJLFFYZFTSAZXGZYEKWUECJRDTKMTTTLNCCSRWQOKBMRLCXONVNWGLRVEJWAZQJJYOFKITAEIIVZXMZIWDLNXMODSXVUVAOBCPYLHJBPQDWNSTPNMEUEZGTRVQKHD");

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
    msg.setTimeStamp(0.996172096632);
    msg.setSource(47892U);
    msg.setSourceEntity(250U);
    msg.setDestination(43836U);
    msg.setDestinationEntity(168U);
    msg.x = 0.407930259526;
    msg.y = 0.518666599215;
    msg.z = 0.65792453605;

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
    msg.setTimeStamp(0.414120507404);
    msg.setSource(37530U);
    msg.setSourceEntity(173U);
    msg.setDestination(52835U);
    msg.setDestinationEntity(45U);
    msg.x = 0.496720362177;
    msg.y = 0.674083418334;
    msg.z = 0.664388731209;

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
    msg.setTimeStamp(0.875490887846);
    msg.setSource(63781U);
    msg.setSourceEntity(211U);
    msg.setDestination(37787U);
    msg.setDestinationEntity(138U);
    msg.x = 0.966185702872;
    msg.y = 0.996006627015;
    msg.z = 0.854974753908;

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
    msg.setTimeStamp(0.724666481578);
    msg.setSource(34999U);
    msg.setSourceEntity(126U);
    msg.setDestination(2997U);
    msg.setDestinationEntity(176U);
    msg.timeout = 56712U;
    msg.lat = 0.560064108551;
    msg.lon = 0.109255920281;
    msg.z = 0.373491177163;
    msg.z_units = 188U;
    msg.amplitude = 0.299871521713;
    msg.pitch = 0.82082611359;
    msg.speed = 0.539912559566;
    msg.speed_units = 1U;
    msg.custom.assign("PREVSGENPGHYAFBPGLALCBRSVSAUUVNEUMDXXJHHYTHQXJTFBVMWORELHNXVZTMLEWLLMTDJIUFCOENFDZUKCQAUGKZSQRQUQXKJNGOOIMYIHJQUSNLSXCOJOGIFMTBCDRTSHGTSBOAVKAOPELBVNFDWPIYL");

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
    msg.setTimeStamp(0.100951530671);
    msg.setSource(10056U);
    msg.setSourceEntity(242U);
    msg.setDestination(25867U);
    msg.setDestinationEntity(254U);
    msg.timeout = 2445U;
    msg.lat = 0.69505667159;
    msg.lon = 0.14317410915;
    msg.z = 0.596610281925;
    msg.z_units = 48U;
    msg.amplitude = 0.641692074752;
    msg.pitch = 0.189205939116;
    msg.speed = 0.684737197718;
    msg.speed_units = 219U;
    msg.custom.assign("DHZJZYHMZOVOFKYJGVSLKBHNOPTCHOIAFFBVXXDWSPXCEHENRLLSFMZPKCQDIIBBQWAMOXDPLIGUKSKSKBMOHIRECWOGQKTNSNQBNZXYZNJMCXVNJNLAHWAFMIUBCPLDFCVEAEPKYGWLLDFUEJARHJPMVAJXQJCYYDRYZFTDWZSBGOPME");

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
    msg.setTimeStamp(0.749986767027);
    msg.setSource(17780U);
    msg.setSourceEntity(20U);
    msg.setDestination(29256U);
    msg.setDestinationEntity(235U);
    msg.timeout = 2465U;
    msg.lat = 0.928829410975;
    msg.lon = 0.0710518278854;
    msg.z = 0.698602847113;
    msg.z_units = 191U;
    msg.amplitude = 0.662469115677;
    msg.pitch = 0.254352772001;
    msg.speed = 0.135949930446;
    msg.speed_units = 69U;
    msg.custom.assign("UTXWRTEIFJHGTREFHPTGWNFPHDBQMFIRQAZLCIMTOSMPGUBLQEOFOBCFSOLOJ");

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
    msg.setTimeStamp(0.215880562159);
    msg.setSource(64859U);
    msg.setSourceEntity(52U);
    msg.setDestination(46465U);
    msg.setDestinationEntity(64U);

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
    msg.setTimeStamp(0.809791287303);
    msg.setSource(40136U);
    msg.setSourceEntity(86U);
    msg.setDestination(26720U);
    msg.setDestinationEntity(180U);

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
    msg.setTimeStamp(0.26914431426);
    msg.setSource(7478U);
    msg.setSourceEntity(151U);
    msg.setDestination(8063U);
    msg.setDestinationEntity(175U);

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
    msg.setTimeStamp(0.825883777315);
    msg.setSource(48250U);
    msg.setSourceEntity(176U);
    msg.setDestination(57207U);
    msg.setDestinationEntity(142U);
    msg.lat = 0.393262675382;
    msg.lon = 0.570496388119;
    msg.z = 0.635895806029;
    msg.z_units = 26U;
    msg.radius = 0.305995007713;
    msg.duration = 52185U;
    msg.speed = 0.990682334448;
    msg.speed_units = 178U;
    msg.popup_period = 28554U;
    msg.popup_duration = 7278U;
    msg.flags = 80U;
    msg.custom.assign("NGVVFWDCIFHPADKUNICLMSEXCGXVJWAZQAOVBYTVSNHWHICVMOLTQSMQFKYYWRAELDPBNAKRKPEPRDXLBVTCIIFDXZEJAUWURCWVBZGIHPQMTWW");

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
    msg.setTimeStamp(0.300504322415);
    msg.setSource(36171U);
    msg.setSourceEntity(35U);
    msg.setDestination(30875U);
    msg.setDestinationEntity(118U);
    msg.lat = 0.34901911701;
    msg.lon = 0.762730372802;
    msg.z = 0.575917842269;
    msg.z_units = 205U;
    msg.radius = 0.904938664851;
    msg.duration = 36492U;
    msg.speed = 0.0913555885654;
    msg.speed_units = 37U;
    msg.popup_period = 25951U;
    msg.popup_duration = 28060U;
    msg.flags = 148U;
    msg.custom.assign("WQSDHZXUDEVRCDOTKUXXGNWDJTTFGKYXDHADVFISBHPLJEMSAYYMRCLJQKBVHSQTWBAFRWYQLZINPRKDHUZPIBMYNSEFBIOPVUBNXYHWPFSKPDGOMEAWAWACQONXEYYGHFZOVJBVOGLVGIK");

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
    msg.setTimeStamp(0.320019342573);
    msg.setSource(42573U);
    msg.setSourceEntity(163U);
    msg.setDestination(8043U);
    msg.setDestinationEntity(23U);
    msg.lat = 0.0514200538636;
    msg.lon = 0.650088614292;
    msg.z = 0.218757884413;
    msg.z_units = 47U;
    msg.radius = 0.775690128703;
    msg.duration = 5098U;
    msg.speed = 0.174247455291;
    msg.speed_units = 58U;
    msg.popup_period = 32387U;
    msg.popup_duration = 32126U;
    msg.flags = 130U;
    msg.custom.assign("CPPNQOCIBAGCHORTTEMLLOXSMHTYNQPFKDQKFSBZEEGGJEIMXWWMBFOHNYJMUXFMWNDEHXSSBUILJXVFDAUPCEZZMATBKIJYFWDRDHYBNFPHVKGOYELANPKHYAFLTWPZGOXLZKIMOGUQGSIFHTBUYIKETWVEQVABITNKNUROJHQOVSQCAJPVUWUPSAHAINZUKLBXYWELUKVCRWILWGDCGSRXRCVDRSDLXRYBJMJJYSNRDQZAVTCJD");

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
    msg.setTimeStamp(0.782903234242);
    msg.setSource(54754U);
    msg.setSourceEntity(254U);
    msg.setDestination(32129U);
    msg.setDestinationEntity(136U);
    msg.timeout = 977U;
    msg.flags = 191U;
    msg.lat = 0.86462991019;
    msg.lon = 0.130582503994;
    msg.start_z = 0.575502816304;
    msg.start_z_units = 141U;
    msg.end_z = 0.564816378012;
    msg.end_z_units = 76U;
    msg.radius = 0.809396901139;
    msg.speed = 0.572279979494;
    msg.speed_units = 84U;
    msg.custom.assign("GKYQFOPVHQWXZDUHTUMBKBIAPNYSKAEKCZXOVCFVDDCHJAEFMTEXSTGJWOILBKOQBECXVTJJOVAYGSYEHFACYIXQZTELBNNPJHAOWYKVIVCLWIRSJCDSDSNG");

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
    msg.setTimeStamp(0.450005192049);
    msg.setSource(25099U);
    msg.setSourceEntity(127U);
    msg.setDestination(56707U);
    msg.setDestinationEntity(171U);
    msg.timeout = 13335U;
    msg.flags = 182U;
    msg.lat = 0.520776515941;
    msg.lon = 0.898224451809;
    msg.start_z = 0.455773347332;
    msg.start_z_units = 124U;
    msg.end_z = 0.355027309542;
    msg.end_z_units = 1U;
    msg.radius = 0.695181061266;
    msg.speed = 0.156569030073;
    msg.speed_units = 90U;
    msg.custom.assign("VOLPNCAPWKKHCZQBDTRYCCQJAWXEYMOUZBFVYWLQPBOBZJEHXIJGGTKHTJIGSAKLRIRTDWZPAZLIHZEQOGYVONZVJIACTULYYHFDXEIGEBVANPMLPDYXDPAXBMXMKLWSTFQHZUQJOXHRFVMMGE");

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
    msg.setTimeStamp(0.457635958578);
    msg.setSource(39976U);
    msg.setSourceEntity(200U);
    msg.setDestination(51292U);
    msg.setDestinationEntity(194U);
    msg.timeout = 19015U;
    msg.flags = 220U;
    msg.lat = 0.885999236534;
    msg.lon = 0.394279473079;
    msg.start_z = 0.163627481992;
    msg.start_z_units = 108U;
    msg.end_z = 0.261300368119;
    msg.end_z_units = 164U;
    msg.radius = 0.5725786107;
    msg.speed = 0.313645268381;
    msg.speed_units = 118U;
    msg.custom.assign("YRRLHDNLBVXPYZZOGBCDWJTINMERRUBNHPEXGQUELZFNVJOX");

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
    msg.setTimeStamp(0.900426153898);
    msg.setSource(22399U);
    msg.setSourceEntity(80U);
    msg.setDestination(13261U);
    msg.setDestinationEntity(150U);
    msg.timeout = 54577U;
    msg.lat = 0.729626352785;
    msg.lon = 0.155375167598;
    msg.z = 0.36181771183;
    msg.z_units = 31U;
    msg.speed = 0.661380433415;
    msg.speed_units = 137U;
    msg.custom.assign("SSLRLATMPOBWGHIAGISFFSAWULRBABZMUJFOBZIKQLMZUJZXHNKBEIDWQBLMUCJPMTHMWYZADUHCMEZCAKARTYVWPJGODZZLQUKBFLTNWCFEMCERVQPNSYKPDJRTFHNKYCPCRSSOVNHWDMEHYXFJLGBPNGJAMXVWRGJTDAXYVHS");

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
    msg.setTimeStamp(0.589549620486);
    msg.setSource(49786U);
    msg.setSourceEntity(156U);
    msg.setDestination(32966U);
    msg.setDestinationEntity(35U);
    msg.timeout = 61106U;
    msg.lat = 0.677711624741;
    msg.lon = 0.578353191392;
    msg.z = 0.745008542508;
    msg.z_units = 244U;
    msg.speed = 0.142443414972;
    msg.speed_units = 170U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.597533669433;
    tmp_msg_0.y = 0.087198171568;
    tmp_msg_0.z = 0.920880456366;
    tmp_msg_0.t = 0.986878888228;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("FWWVUFKQLHQQ");

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
    msg.setTimeStamp(0.0704689070096);
    msg.setSource(19618U);
    msg.setSourceEntity(222U);
    msg.setDestination(25786U);
    msg.setDestinationEntity(123U);
    msg.timeout = 26341U;
    msg.lat = 0.215697089423;
    msg.lon = 0.690635654295;
    msg.z = 0.635929209811;
    msg.z_units = 121U;
    msg.speed = 0.613034007237;
    msg.speed_units = 121U;
    msg.custom.assign("XVNAPBDYFXQMGAUPZSDCUBSYUTLKXRDINZFBTRYHXCRFELHAWJYVTUUKYAVKRMCYGQQVIMHPJVTOZIITIIWXEVNWHZCWFSJNCGBUWA");

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
    msg.setTimeStamp(0.472841507057);
    msg.setSource(39655U);
    msg.setSourceEntity(232U);
    msg.setDestination(36355U);
    msg.setDestinationEntity(86U);
    msg.x = 0.752813264127;
    msg.y = 0.690501123722;
    msg.z = 0.823004145338;
    msg.t = 0.92792759786;

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
    msg.setTimeStamp(0.0609604042109);
    msg.setSource(17707U);
    msg.setSourceEntity(64U);
    msg.setDestination(46281U);
    msg.setDestinationEntity(239U);
    msg.x = 0.314953174392;
    msg.y = 0.0698160426126;
    msg.z = 0.731710706457;
    msg.t = 0.463392228282;

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
    msg.setTimeStamp(0.995520801711);
    msg.setSource(49562U);
    msg.setSourceEntity(27U);
    msg.setDestination(33951U);
    msg.setDestinationEntity(224U);
    msg.x = 0.0934165593011;
    msg.y = 0.453569182848;
    msg.z = 0.263787352541;
    msg.t = 0.38164943642;

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
    msg.setTimeStamp(0.18032342455);
    msg.setSource(29981U);
    msg.setSourceEntity(172U);
    msg.setDestination(13124U);
    msg.setDestinationEntity(16U);
    msg.timeout = 6628U;
    msg.name.assign("CBJJPDSKYUFSQTCBEVUXXJWNOCKLBTSHWMSTQA");
    msg.custom.assign("GWXXLFUEXMPEBBPFEEIDFSTTNOQMXQGLWDDYACRQFBBCXQYUZNNOGRXREOMYVQYYJWLKEDKMZGVMFMOCHJPUNCCYNUOCVAXKRHMAFDFFALAEUL");

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
    msg.setTimeStamp(0.681311936505);
    msg.setSource(31128U);
    msg.setSourceEntity(61U);
    msg.setDestination(60011U);
    msg.setDestinationEntity(191U);
    msg.timeout = 22085U;
    msg.name.assign("YCRGSLCXJZNJTTMIFCHNPACJTNJAHEDHSTDATWUJHMNBZHXQALGSYDSLUMWHWGEWAAWKEONFVDKOCRLU");
    msg.custom.assign("PKIIFMDJDWVMFYLSKVZUCXQUTXMBZLHOPSVAAKDPSPWGYVHCKLPEMKDCAIWMNFRAXCBGVHXGNAEQCXUGBUJJJSBXDQFMNBLOVBWECXNLU");

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
    msg.setTimeStamp(0.286601058291);
    msg.setSource(2774U);
    msg.setSourceEntity(226U);
    msg.setDestination(33183U);
    msg.setDestinationEntity(85U);
    msg.timeout = 44584U;
    msg.name.assign("OURPLZPYXAHVTKRBBQIACAKWZEYOUFTFDCWARIVJMJRETBJSINDPSCZPNMPVNVQIQTHWEEZBRMETUASZWLBSPLCNYNBNELS");
    msg.custom.assign("FKYGCOCJGQZIDSNBULZCHAIIQKXHUDEVAVVYMLGISUPYUSVRQHRSFYTBSTEAHAQRHSIYRZGQJLMBUKTEAOJUNOCHTOXEBJIDFGLAKU");

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
    msg.setTimeStamp(0.117355472557);
    msg.setSource(63996U);
    msg.setSourceEntity(218U);
    msg.setDestination(17593U);
    msg.setDestinationEntity(55U);
    msg.lat = 0.881984680963;
    msg.lon = 0.943676166517;
    msg.z = 0.511700755461;
    msg.z_units = 202U;
    msg.speed = 0.466910853819;
    msg.speed_units = 14U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.659041903377;
    tmp_msg_0.y = 0.882278314886;
    tmp_msg_0.z = 0.483150551473;
    tmp_msg_0.t = 0.105979830791;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.165103345455;
    msg.custom.assign("BNUOISFQZTVOELFOPCPITFJJCTYZJMCDQDBBUCFXWUCHASAEJCRWLEPGVBTJSSDMLHLZGRK");

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
    msg.setTimeStamp(0.893415882598);
    msg.setSource(50212U);
    msg.setSourceEntity(49U);
    msg.setDestination(46116U);
    msg.setDestinationEntity(4U);
    msg.lat = 0.334479874815;
    msg.lon = 0.157672123028;
    msg.z = 0.643210908968;
    msg.z_units = 160U;
    msg.speed = 0.899856629453;
    msg.speed_units = 104U;
    msg.start_time = 0.0363849331653;
    msg.custom.assign("SFRJFQBDLXRQNNTBPIZZUEAOPPTPDEQXZIWKXGHCCQOHXMUJCOVONLGNCSRFAWUSNGTOANGRGLHULNVPSBLQIKACYEGMPDBMQVREUYOVKUZPXHFSXYJNQAYXEUBEIQAP");

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
    msg.setTimeStamp(0.488488462875);
    msg.setSource(61019U);
    msg.setSourceEntity(47U);
    msg.setDestination(50209U);
    msg.setDestinationEntity(115U);
    msg.lat = 0.942467425351;
    msg.lon = 0.949157954439;
    msg.z = 0.442668700512;
    msg.z_units = 128U;
    msg.speed = 0.0659117130798;
    msg.speed_units = 113U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.784320496706;
    tmp_msg_0.y = 0.786419663053;
    tmp_msg_0.z = 0.00546607485747;
    tmp_msg_0.t = 0.332171219818;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.653858655719;
    msg.custom.assign("FZBHWCVUWVBKNCZSJZRTRRXXGQKUETINRMWSOCXZHBTZQYFQHFEJYHQVLTBZAIXSMANGOENQNJWVLDLL");

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
    msg.setTimeStamp(0.321158186642);
    msg.setSource(65168U);
    msg.setSourceEntity(127U);
    msg.setDestination(63557U);
    msg.setDestinationEntity(178U);
    msg.vid = 9126U;
    msg.off_x = 0.283548072686;
    msg.off_y = 0.0976241322119;
    msg.off_z = 0.170594463327;

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
    msg.setTimeStamp(0.898776484366);
    msg.setSource(52779U);
    msg.setSourceEntity(151U);
    msg.setDestination(5784U);
    msg.setDestinationEntity(156U);
    msg.vid = 36635U;
    msg.off_x = 0.398642830648;
    msg.off_y = 0.980866152399;
    msg.off_z = 0.717695033928;

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
    msg.setTimeStamp(0.0279018895348);
    msg.setSource(42279U);
    msg.setSourceEntity(124U);
    msg.setDestination(49996U);
    msg.setDestinationEntity(198U);
    msg.vid = 39220U;
    msg.off_x = 0.707328138556;
    msg.off_y = 0.16263921243;
    msg.off_z = 0.283776275265;

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
    msg.setTimeStamp(0.565672083807);
    msg.setSource(17979U);
    msg.setSourceEntity(208U);
    msg.setDestination(48533U);
    msg.setDestinationEntity(111U);

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
    msg.setTimeStamp(0.455981155828);
    msg.setSource(32426U);
    msg.setSourceEntity(183U);
    msg.setDestination(22067U);
    msg.setDestinationEntity(52U);

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
    msg.setTimeStamp(0.715768262307);
    msg.setSource(33819U);
    msg.setSourceEntity(97U);
    msg.setDestination(29812U);
    msg.setDestinationEntity(181U);

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
    msg.setTimeStamp(0.0939415864183);
    msg.setSource(47673U);
    msg.setSourceEntity(197U);
    msg.setDestination(52373U);
    msg.setDestinationEntity(51U);
    msg.mid = 42284U;

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
    msg.setTimeStamp(0.277100710972);
    msg.setSource(10828U);
    msg.setSourceEntity(248U);
    msg.setDestination(588U);
    msg.setDestinationEntity(179U);
    msg.mid = 45949U;

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
    msg.setTimeStamp(0.153786661025);
    msg.setSource(16788U);
    msg.setSourceEntity(18U);
    msg.setDestination(53094U);
    msg.setDestinationEntity(64U);
    msg.mid = 14997U;

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
    msg.setTimeStamp(0.592881352945);
    msg.setSource(7748U);
    msg.setSourceEntity(35U);
    msg.setDestination(35283U);
    msg.setDestinationEntity(70U);
    msg.state = 249U;
    msg.eta = 42625U;
    msg.info.assign("NVTNLEZOHLABYLHOWBTRGBKOSHMMMPNJCQUQFWFSZNQEHDJZXYIUVJHCRCRCMUBTBCJUCQMEZXIFYXUUGKGWIFNSIPJCWQFXPRMDLACMZRGPAPDSIYBLHVIDQAAKDRPGXTGUQTOETWOXKYLTNRWLWISUNYQDJZNWKVDEVOSKASGKEZMVFANRVXVJSZTYH");

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
    msg.setTimeStamp(0.235340455994);
    msg.setSource(57818U);
    msg.setSourceEntity(48U);
    msg.setDestination(48701U);
    msg.setDestinationEntity(84U);
    msg.state = 43U;
    msg.eta = 46000U;
    msg.info.assign("POQERMLACAOIVJMUTFVNWDXFOMHPTYCHNZQUUKXKQSPYZCSEQZRSPPJFZFCWDRBHKXDSBMSWTWWBRVELGUYNSKONHJDBFMUIYGQMGFGWBWHCDXYQIOUJOBKXCRTRMHJDVVJNIIDBDVGUYLANKXWLRCCAYVNEATNBZHIJZXFZZMODUALHJROMSLIAAESTAFXNZNHPGLMGEDJTVSXPPYEBGPULWQFHIPTKTVEBZGS");

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
    msg.setTimeStamp(0.312318802388);
    msg.setSource(39644U);
    msg.setSourceEntity(38U);
    msg.setDestination(52761U);
    msg.setDestinationEntity(100U);
    msg.state = 136U;
    msg.eta = 21248U;
    msg.info.assign("VSUYIKUHXZEGTISSAOZMBTECLWBCRRUBMXXCEJAMTSVPTKNANGDTQWPMPHBMOUFODXETWITWTRHLQCELNAVQYPZNBKDOIOZFNNRJTSBBMQALKQFWRDKOWGPOHPYCEHZLKLVSEAGGYAHSLYXEOTMOIHFYFSJG");

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
    msg.setTimeStamp(0.611438953226);
    msg.setSource(21803U);
    msg.setSourceEntity(185U);
    msg.setDestination(46215U);
    msg.setDestinationEntity(99U);
    msg.system = 45874U;
    msg.duration = 50021U;
    msg.speed = 0.918143955869;
    msg.speed_units = 112U;
    msg.x = 0.0451095123863;
    msg.y = 0.0752108901857;
    msg.z = 0.637592187297;
    msg.z_units = 95U;

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
    msg.setTimeStamp(0.74530175763);
    msg.setSource(64152U);
    msg.setSourceEntity(118U);
    msg.setDestination(30915U);
    msg.setDestinationEntity(51U);
    msg.system = 18055U;
    msg.duration = 63038U;
    msg.speed = 0.83387753856;
    msg.speed_units = 145U;
    msg.x = 0.159027893273;
    msg.y = 0.106612582928;
    msg.z = 0.550319963068;
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
    msg.setTimeStamp(0.0354740719454);
    msg.setSource(46245U);
    msg.setSourceEntity(76U);
    msg.setDestination(38311U);
    msg.setDestinationEntity(218U);
    msg.system = 97U;
    msg.duration = 42793U;
    msg.speed = 0.997394135279;
    msg.speed_units = 74U;
    msg.x = 0.944691838693;
    msg.y = 0.784709526229;
    msg.z = 0.30072430056;
    msg.z_units = 39U;

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
    msg.setTimeStamp(0.920919589298);
    msg.setSource(9728U);
    msg.setSourceEntity(203U);
    msg.setDestination(50502U);
    msg.setDestinationEntity(83U);
    msg.lat = 0.169571595622;
    msg.lon = 0.718348747825;
    msg.speed = 0.906570170193;
    msg.speed_units = 34U;
    msg.duration = 43026U;
    msg.sys_a = 9945U;
    msg.sys_b = 52767U;
    msg.move_threshold = 0.310912330993;

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
    msg.setTimeStamp(0.347964074616);
    msg.setSource(32540U);
    msg.setSourceEntity(130U);
    msg.setDestination(52445U);
    msg.setDestinationEntity(68U);
    msg.lat = 0.457183428457;
    msg.lon = 0.641384246856;
    msg.speed = 0.96263836945;
    msg.speed_units = 209U;
    msg.duration = 58312U;
    msg.sys_a = 1715U;
    msg.sys_b = 1077U;
    msg.move_threshold = 0.293189484044;

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
    msg.setTimeStamp(0.0595006171584);
    msg.setSource(28066U);
    msg.setSourceEntity(62U);
    msg.setDestination(58823U);
    msg.setDestinationEntity(237U);
    msg.lat = 0.919023516974;
    msg.lon = 0.777889025754;
    msg.speed = 0.588588006104;
    msg.speed_units = 8U;
    msg.duration = 18888U;
    msg.sys_a = 13848U;
    msg.sys_b = 13742U;
    msg.move_threshold = 0.0840027200606;

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
    msg.setTimeStamp(0.379548299782);
    msg.setSource(19067U);
    msg.setSourceEntity(181U);
    msg.setDestination(27387U);
    msg.setDestinationEntity(201U);
    msg.lat = 0.301500378899;
    msg.lon = 0.654533260359;
    msg.z = 0.553898919849;
    msg.z_units = 216U;
    msg.speed = 0.823454635536;
    msg.speed_units = 55U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.490727979809;
    tmp_msg_0.lon = 0.0617066602548;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("ZBNFDOUQULOQZITSHBXPMDELOSNNEMOSQTKYAYYDXJSHHMCWNEHTVLTIXCDLNJYLFPJZGTWZWAPLQWJDQBOXRJUYXQZJUKFPZKJQSATFGDMOIEAFFMOHRHPWVBDDVWUUKKNPIUEERBQEWAFHWYYKAIZRPCPRSINXACIBZAUKRZURFINPYOXVCAVMSFOGYVBTK");

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
    msg.setTimeStamp(0.0810890829201);
    msg.setSource(36075U);
    msg.setSourceEntity(73U);
    msg.setDestination(17643U);
    msg.setDestinationEntity(194U);
    msg.lat = 0.271823952987;
    msg.lon = 0.0389299093817;
    msg.z = 0.152352755906;
    msg.z_units = 200U;
    msg.speed = 0.405044709963;
    msg.speed_units = 18U;
    msg.custom.assign("DEPVDNBNNFBFBWURDWAEGTHQXKMHYMPUTIMFCOONWESJZSGZLDHLRKUUDCYXXLSNQQQHPNWITHEMTQAWICUDVKKVVWYAZSIZIAETCWUHQJGFBVWJRNKJVNGJVMSRFPUOFPZLWTYDGYEALLBTGLLAMLRXCPNSAFPCEBSAXQXYJXVMCUGTBTOSKRXRQFQECCKJPDGZIXOFARCHIOMJGQZHJ");

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
    msg.setTimeStamp(0.178349348859);
    msg.setSource(51843U);
    msg.setSourceEntity(108U);
    msg.setDestination(64547U);
    msg.setDestinationEntity(248U);
    msg.lat = 0.78845819118;
    msg.lon = 0.400526688107;
    msg.z = 0.174276008511;
    msg.z_units = 244U;
    msg.speed = 0.98956189239;
    msg.speed_units = 244U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.912448422906;
    tmp_msg_0.lon = 0.946305317474;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("RUTCUSXDMZKPPEFOBXMHIIRPZMHZEPQTIPLVIGZMJOZJFQXTBYYKBEMEDJFONXJAWGEWUUSYXIZORLNPMTFHWXRRAXLGXZIUBDNAKHVQKSYFADBSQIUQOWTXSRTNTGJKJ");

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
    msg.setTimeStamp(0.632660938087);
    msg.setSource(11137U);
    msg.setSourceEntity(143U);
    msg.setDestination(63144U);
    msg.setDestinationEntity(119U);
    msg.lat = 0.108511953102;
    msg.lon = 0.231992601538;

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
    msg.setTimeStamp(0.401535274613);
    msg.setSource(6409U);
    msg.setSourceEntity(42U);
    msg.setDestination(61466U);
    msg.setDestinationEntity(200U);
    msg.lat = 0.70708595003;
    msg.lon = 0.109605070667;

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
    msg.setTimeStamp(0.203705397876);
    msg.setSource(12063U);
    msg.setSourceEntity(49U);
    msg.setDestination(59086U);
    msg.setDestinationEntity(92U);
    msg.lat = 0.82895610188;
    msg.lon = 0.446646752543;

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
    msg.setTimeStamp(0.0959012920972);
    msg.setSource(389U);
    msg.setSourceEntity(248U);
    msg.setDestination(17990U);
    msg.setDestinationEntity(162U);
    msg.timeout = 46924U;
    msg.lat = 0.0571859212259;
    msg.lon = 0.325248213115;
    msg.z = 0.0459440465782;
    msg.z_units = 82U;
    msg.pitch = 0.0409298711374;
    msg.amplitude = 0.292852551095;
    msg.duration = 6378U;
    msg.speed = 0.567505538235;
    msg.speed_units = 48U;
    msg.radius = 0.438857786702;
    msg.direction = 203U;
    msg.custom.assign("QLKEMDXPBMFZHKYPLDXKWMZPUAEUCIFJOVGZGRNRELMPVZMYYPIENBURTHPZNECIJCBUJCOAJYFTCAQVHXOPBBBKDQVPAEWOANSKZYHJJXBXSFULLIXQXGTCGDCOZODRKTVSJJCWFQBFKNWVSEJRMSYSWUUBGFZVCAEIULCZINYXHUIXYTPIYRKTJMWHRDHMOGO");

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
    msg.setTimeStamp(0.715338876705);
    msg.setSource(30588U);
    msg.setSourceEntity(180U);
    msg.setDestination(6336U);
    msg.setDestinationEntity(154U);
    msg.timeout = 20478U;
    msg.lat = 0.431797649041;
    msg.lon = 0.991205196311;
    msg.z = 0.984308558145;
    msg.z_units = 229U;
    msg.pitch = 0.728851016486;
    msg.amplitude = 0.875045158471;
    msg.duration = 17502U;
    msg.speed = 0.102828489275;
    msg.speed_units = 12U;
    msg.radius = 0.94369443323;
    msg.direction = 126U;
    msg.custom.assign("PHQZVDDAVGABLZVTAVNEJKHFRABBRGIXEWLOKAIXMZAPYRDWH");

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
    msg.setTimeStamp(0.961400293857);
    msg.setSource(57129U);
    msg.setSourceEntity(37U);
    msg.setDestination(42921U);
    msg.setDestinationEntity(175U);
    msg.timeout = 15589U;
    msg.lat = 0.0599549155709;
    msg.lon = 0.925503238285;
    msg.z = 0.578156678644;
    msg.z_units = 213U;
    msg.pitch = 0.00755364811225;
    msg.amplitude = 0.0303749996876;
    msg.duration = 53872U;
    msg.speed = 0.747086393047;
    msg.speed_units = 116U;
    msg.radius = 0.210416671456;
    msg.direction = 126U;
    msg.custom.assign("SMKWRTYNWTZXDEWCVEYTUXLHOZRIDLQQYKYQKPXSZTNUXBTODLVCPBDYIOUBBMWPWZVJFMBRICSRXALCWOYBTPZIZTAGIFAARPFPCUNYBAMHIRSSBEPPXLMHFJKEVUECDFGXKGUQJIPWUKHGCGDJHOLQFNKCERNMTVJCBTFJNSZOSHWEFGMLGMNCXPAXVFQNFWZKOSHBNIKGHHRUDLDJHIAKYDAQSGZYTLEDNIVZJQOAOVMGLJVWEA");

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
    msg.setTimeStamp(0.541751444605);
    msg.setSource(15000U);
    msg.setSourceEntity(68U);
    msg.setDestination(10414U);
    msg.setDestinationEntity(107U);
    msg.formation_name.assign("WBQQOORMSNUHVTFEJBJTIFTPQKRVRGXVVCAXYPCOCVBZYGPKGZULXHEWEUGDLRCYBHNHRFIPXCANFXLNUDTKMIQEHDGSGHLSQDVDPFHBQOKWJUGLWNRAFDJRKRZZWZLYEXMWJAPAIHFILOXNSEOIJCNJMTUKTVQSEPRIUYZBUKWRONAMCXMZOSUTCMTDFJBYGYZXSXQGDWYLAFEWEIISHDKWASNYFMJPQKAIBTHGLCZBB");
    msg.reference_frame = 13U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 44679U;
    tmp_msg_0.off_x = 0.801801736606;
    tmp_msg_0.off_y = 0.0577137025998;
    tmp_msg_0.off_z = 0.0130994224416;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("UXHPOIGNZJVCRKVMPVYCZBIYHAMTDPGQVNSPOPCBEXJCFHPISFFTQILNWJBKYEQEGLVBXRCZIXWWATFQEDLTSUOMLRWUNSACQYXEKHXBRVULUEMJRHSCHGVMATXFSXVCOXTLFJTZDZYOPRNBBEJRGWKJAUNXGKIUDOVKLGSEBWEFTRDPLGTYRMAWPPYMIZNWQDAFMLFBFVCDMIKJUQNZQCARWHSDAIQUSJOHQAHZ");

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
    msg.setTimeStamp(0.280284722849);
    msg.setSource(38922U);
    msg.setSourceEntity(122U);
    msg.setDestination(28715U);
    msg.setDestinationEntity(92U);
    msg.formation_name.assign("GMJOZFTOADNVMHEGXPQWDVWFQBEKJMLQXYUETPFQGHBWUAIBCPJSVPQISDPLQQUHXFAIFDJZEDCYPTLRLUHCTMEWIJYMUUQKSGPBGFRUKTOVAWJJYRICBKYRIXTXZRZYAOIGBQEIJHSSNWYXFMLFJOBKCXOZBZLAOVHSYCXTKDVMENIODNYHORTTNNHFZHUDGCCDLURWBHWNSKNNGZSKCJKPXLQWSRKGIMZUALRNVVRAY");
    msg.reference_frame = 243U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 32365U;
    tmp_msg_0.off_x = 0.692202442817;
    tmp_msg_0.off_y = 0.939711209486;
    tmp_msg_0.off_z = 0.394544786336;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("SAPLTVTWMFSHWP");

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
    msg.setTimeStamp(0.01383548749);
    msg.setSource(34816U);
    msg.setSourceEntity(112U);
    msg.setDestination(38250U);
    msg.setDestinationEntity(132U);
    msg.formation_name.assign("CVUNJXKHNAGTELZSMHRTTXIHUIKCJLDKAMSTVPWCPEDWSDBIEBAUZBJCGOJVGKVLVKQRAPOZXWIYHAYUDQWAIJINQCFUFFSETHMSUILZEPZJBFNOOVJFQE");
    msg.reference_frame = 124U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 21032U;
    tmp_msg_0.off_x = 0.547393964584;
    tmp_msg_0.off_y = 0.0873233213622;
    tmp_msg_0.off_z = 0.167586541626;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("YOPDUQNXBGXZNFKHWLOTNEVSBUNFNVDLWCNYBOKUOAHEEUAYIQLYSXFDXAVJYGGAMMXPGDJCDPCMULDEAUBWWZBJIDSUNEFHCAXFVAXLSKVUYMHJRTHDGCKYUKDRFMLLSIRRDIZNYIZZOOUPBWKKZFWKSAQQPRHQRCTCQAICQEWXJTSCXVMIVXMJFFONCFIJMPREETPWBSGGWIMJTKQLVPZZGOPTY");

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
    msg.setTimeStamp(0.0114234769831);
    msg.setSource(34285U);
    msg.setSourceEntity(201U);
    msg.setDestination(65466U);
    msg.setDestinationEntity(61U);
    msg.group_name.assign("PQREVWKCZPFGJYEEXLLLOGYNRIZADKHUPNOQWCURWNFGUJKTCBOWOOSYIJYXKPZPVIQUKHDPTVBQTEGAAUSBYRAIMXCWBNVSVKOCQQFQXFGT");
    msg.formation_name.assign("CWTPLSVSQTUQECFJQFTQPYEQLSJJDFDATXFRKSWAMUZHZFPIUEEMPJHRSZLCRMUHCAFQMKOSKHCRABKNGENQUPTORMLJRAVDKQZKQOWOORZFNRKGXOAZSXILGSOYXBUDKYEZCWZTHFFPIJWUBJLCRDVBOHBLBJMUMHKVLGVOIVTIPNXXYXJEVXDAMTVDAXQGHHVCBWYBCWPADYTUPTYVYNU");
    msg.plan_id.assign("NZIBBMEWPMGVFYWTQQQWXZNCDWEQOEKHKCUBXWSUHRVNPOUOFXBOUXVLMCFAHHTBSZAF");
    msg.description.assign("UDNLCSAJNAUVCRMEJJGIBTSMTDUKFQCJPFUSKJMJEDZPNRBVNTRFCIXVSEADFGJWAUGFO");
    msg.leader_speed = 0.774172640675;
    msg.leader_bank_lim = 0.694742971422;
    msg.pos_sim_err_lim = 0.448319765199;
    msg.pos_sim_err_wrn = 0.365569758267;
    msg.pos_sim_err_timeout = 86U;
    msg.converg_max = 0.529319965043;
    msg.converg_timeout = 57784U;
    msg.comms_timeout = 9912U;
    msg.turb_lim = 0.266203200034;
    msg.custom.assign("PLHUKNUMRSVNXKKNTMPYHDPPDBMNIDEHPZMYGNOMGNEEHSEKDDU");

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
    msg.setTimeStamp(0.543138148941);
    msg.setSource(42622U);
    msg.setSourceEntity(71U);
    msg.setDestination(35161U);
    msg.setDestinationEntity(20U);
    msg.group_name.assign("IFOYGHCBKTCRNOFWTLHYCFEKDJUQLISMJZJJ");
    msg.formation_name.assign("PWCJBZDXRVNMGAVWDJOZZBVWKZUZPGMDKPOFMLLMBZAUWCNRDIUSCCFBRDXYLNDFBQCQCVHVCIIHKGALIJRLKIBRSUVTQTUYOLSYRDAYYKKDEYURJPOSIXZBCMOFIGPYEQMUBMLYHQKNJRGZSVXVWXLITPBFSEEGNRQTGNP");
    msg.plan_id.assign("CZLWAKKPYGGKFITOKUGPSQPKNDHVQVOQZMUBTEFHIHMJMHKTWCLFQNHAXINHDMOQYCNTACGJEJIVILSBNBGRIKOZELYRUSBUXYOWGJTAICDXPJBLNURTYQPW");
    msg.description.assign("ZVHVGANIEJKWECHWJNYHIGIOBPTFOKUIDBUZMENFFDXXQYPYSJQWCAUGSXKPUROGFCIHQIQVYXWHUBTNDQXMAMRQTMDSQVTIZNHRARMXWPPUEEZSMMIGUJFONNDFTNLDBLBCKPFHPSRLSBKJUGLZ");
    msg.leader_speed = 0.0301446581923;
    msg.leader_bank_lim = 0.272435608664;
    msg.pos_sim_err_lim = 0.789649001852;
    msg.pos_sim_err_wrn = 0.617890263536;
    msg.pos_sim_err_timeout = 47720U;
    msg.converg_max = 0.932099154834;
    msg.converg_timeout = 17182U;
    msg.comms_timeout = 12203U;
    msg.turb_lim = 0.326076191134;
    msg.custom.assign("GEIUTISFOUGPOCJVYUGRABYSUXYPZFQJRAKWXJHEDKYIMQIQRFVLPQPEZSANJPIGZOFQXBBYLRKPORFDKGKHWYNBAMLWDJSVWDPMBDYCMFBQDBYNQUJPTMXSFWNX");

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
    msg.setTimeStamp(0.50186240989);
    msg.setSource(8026U);
    msg.setSourceEntity(221U);
    msg.setDestination(24480U);
    msg.setDestinationEntity(253U);
    msg.group_name.assign("VCGWHPXZIOQCLFRVVKNLPHBKRBUJIRKTAFBHCEWRYTEVUFDSXTXNMFUMIZQZYFDMAPGRLANYSJIXDSBOEAYZCJJWSEWGCWLDVPDLQKUOXWSHIYBUFEAVLCJCMTWFZHQTXYOGGQJYZMBRKPLBMBHKDWIXSIJEJOWNTNAQBPAARIZDKATTOEXW");
    msg.formation_name.assign("RPPMFZDFIHPEDGCVNBDRPYSHVWGFNCUVNHGJSYGORXXKFDXKZTYFKKMGAIEZSSTBYZXUVOOYXUQOHJZLAMAZDWVPPNYHHOFNBAOTSFBEZMIQVRCQQRYCIOUBPYXGQXJ");
    msg.plan_id.assign("MDPJLQJAYLEZMBAGTXTHDSDBQYTVAXXCWWVAIQGPNBLYNEEWZHNTEXNXRXMKFIESBWTWJFSJIONVKFJSHFKGPQNMCOSRCLQXBRMZIOCRWPUNHNFHYYJTKDKIKSXPCAIIPQAYKOMZAVSWLYJFBJRDKVDMVBQVCULRMGRKILGWSOAFFPQHLRCJTUGOAMOWZBCUVZHHDBDQHZPIOQGKUZAUHGNZULBYXMEXJYRUNEDWP");
    msg.description.assign("EFYKECYMCJKZLRDUSXIHPADBJZJNRYRWFQSHMUFQGFJQCZMWHEXWWBHAXKWMTKBVLGROPLTOPCHOZGXDUN");
    msg.leader_speed = 0.43442232015;
    msg.leader_bank_lim = 0.577510143409;
    msg.pos_sim_err_lim = 0.582597482164;
    msg.pos_sim_err_wrn = 0.654391920626;
    msg.pos_sim_err_timeout = 40936U;
    msg.converg_max = 0.945106806437;
    msg.converg_timeout = 54364U;
    msg.comms_timeout = 42937U;
    msg.turb_lim = 0.0348405946825;
    msg.custom.assign("TYNYLHWFUIBJNXVMFWUZRZZDTEFCVKCNNRKJMQUSKYVLYJDVDKQTUOOAFBUSIWGURCLOLMUDOF");

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
    msg.setTimeStamp(0.908813799576);
    msg.setSource(22498U);
    msg.setSourceEntity(89U);
    msg.setDestination(63099U);
    msg.setDestinationEntity(210U);
    msg.control_src = 40134U;
    msg.control_ent = 40U;
    msg.timeout = 0.547459121222;
    msg.loiter_radius = 0.847618960009;
    msg.altitude_interval = 0.698347113225;

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
    msg.setTimeStamp(0.0497668925972);
    msg.setSource(32505U);
    msg.setSourceEntity(110U);
    msg.setDestination(51173U);
    msg.setDestinationEntity(202U);
    msg.control_src = 24002U;
    msg.control_ent = 116U;
    msg.timeout = 0.545777136599;
    msg.loiter_radius = 0.154257609013;
    msg.altitude_interval = 0.396369952625;

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
    msg.setTimeStamp(0.281115841516);
    msg.setSource(11187U);
    msg.setSourceEntity(125U);
    msg.setDestination(54959U);
    msg.setDestinationEntity(176U);
    msg.control_src = 45535U;
    msg.control_ent = 2U;
    msg.timeout = 0.363473484995;
    msg.loiter_radius = 0.338438430951;
    msg.altitude_interval = 0.601571798623;

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
    msg.setTimeStamp(0.343007681327);
    msg.setSource(35995U);
    msg.setSourceEntity(249U);
    msg.setDestination(20190U);
    msg.setDestinationEntity(107U);
    msg.flags = 115U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.0826075332291;
    tmp_msg_0.speed_units = 106U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.983095654054;
    tmp_msg_1.z_units = 143U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.114716751991;
    msg.lon = 0.57285617652;
    msg.radius = 0.425571193495;

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
    msg.setTimeStamp(0.0850905610731);
    msg.setSource(62343U);
    msg.setSourceEntity(160U);
    msg.setDestination(44969U);
    msg.setDestinationEntity(98U);
    msg.flags = 210U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.014745940882;
    tmp_msg_0.speed_units = 158U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.720038675657;
    tmp_msg_1.z_units = 178U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.955848612127;
    msg.lon = 0.967217873265;
    msg.radius = 0.0434237207406;

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
    msg.setTimeStamp(0.16105927763);
    msg.setSource(57557U);
    msg.setSourceEntity(128U);
    msg.setDestination(48007U);
    msg.setDestinationEntity(153U);
    msg.flags = 130U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.848364449651;
    tmp_msg_0.speed_units = 198U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.214524910615;
    tmp_msg_1.z_units = 150U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.76833190621;
    msg.lon = 0.886019105551;
    msg.radius = 0.427763944169;

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
    msg.setTimeStamp(0.146055640082);
    msg.setSource(1052U);
    msg.setSourceEntity(187U);
    msg.setDestination(29007U);
    msg.setDestinationEntity(226U);
    msg.control_src = 9400U;
    msg.control_ent = 112U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 170U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.392154233141;
    tmp_tmp_msg_0_0.speed_units = 219U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.687463886488;
    tmp_tmp_msg_0_1.z_units = 108U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.725950874213;
    tmp_msg_0.lon = 0.371681466043;
    tmp_msg_0.radius = 0.346428728242;
    msg.reference.set(tmp_msg_0);
    msg.state = 241U;
    msg.proximity = 128U;

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
    msg.setTimeStamp(0.89622435864);
    msg.setSource(49974U);
    msg.setSourceEntity(155U);
    msg.setDestination(7548U);
    msg.setDestinationEntity(55U);
    msg.control_src = 51180U;
    msg.control_ent = 241U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 37U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.243990583728;
    tmp_tmp_msg_0_0.speed_units = 142U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.0666794700256;
    tmp_tmp_msg_0_1.z_units = 118U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.0597573939479;
    tmp_msg_0.lon = 0.0239957647275;
    tmp_msg_0.radius = 0.225832414172;
    msg.reference.set(tmp_msg_0);
    msg.state = 72U;
    msg.proximity = 5U;

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
    msg.setTimeStamp(0.62819314024);
    msg.setSource(52705U);
    msg.setSourceEntity(64U);
    msg.setDestination(22236U);
    msg.setDestinationEntity(245U);
    msg.control_src = 63875U;
    msg.control_ent = 250U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 137U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.667366670896;
    tmp_tmp_msg_0_0.speed_units = 151U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.37023953167;
    tmp_tmp_msg_0_1.z_units = 32U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.506986432959;
    tmp_msg_0.lon = 0.553481976124;
    tmp_msg_0.radius = 0.274193321828;
    msg.reference.set(tmp_msg_0);
    msg.state = 81U;
    msg.proximity = 188U;

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
    msg.setTimeStamp(0.581598510784);
    msg.setSource(13205U);
    msg.setSourceEntity(63U);
    msg.setDestination(35389U);
    msg.setDestinationEntity(109U);
    msg.ax_cmd = 0.324672321825;
    msg.ay_cmd = 0.775355088849;
    msg.az_cmd = 0.95908641928;
    msg.ax_des = 0.928213926587;
    msg.ay_des = 0.185845141355;
    msg.az_des = 0.671554072165;
    msg.virt_err_x = 0.779387007073;
    msg.virt_err_y = 0.212823988206;
    msg.virt_err_z = 0.604176569603;
    msg.surf_fdbk_x = 0.854465537195;
    msg.surf_fdbk_y = 0.603013118023;
    msg.surf_fdbk_z = 0.958890345864;
    msg.surf_unkn_x = 0.132124534977;
    msg.surf_unkn_y = 0.547243208721;
    msg.surf_unkn_z = 0.225294863156;
    msg.ss_x = 0.00334150750414;
    msg.ss_y = 0.968836208978;
    msg.ss_z = 0.751333867151;

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
    msg.setTimeStamp(0.288257872008);
    msg.setSource(25848U);
    msg.setSourceEntity(7U);
    msg.setDestination(29610U);
    msg.setDestinationEntity(60U);
    msg.ax_cmd = 0.504803136655;
    msg.ay_cmd = 0.0422587635368;
    msg.az_cmd = 0.339070269672;
    msg.ax_des = 0.412508319619;
    msg.ay_des = 0.714160005546;
    msg.az_des = 0.345377053982;
    msg.virt_err_x = 0.0301052378218;
    msg.virt_err_y = 0.548136241765;
    msg.virt_err_z = 0.149088210416;
    msg.surf_fdbk_x = 0.138556078063;
    msg.surf_fdbk_y = 0.104459734358;
    msg.surf_fdbk_z = 0.0167267587256;
    msg.surf_unkn_x = 0.152138459343;
    msg.surf_unkn_y = 0.661139765969;
    msg.surf_unkn_z = 0.248595977435;
    msg.ss_x = 0.617365730951;
    msg.ss_y = 0.957965034418;
    msg.ss_z = 0.160808978746;

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
    msg.setTimeStamp(0.665955130625);
    msg.setSource(10548U);
    msg.setSourceEntity(36U);
    msg.setDestination(2160U);
    msg.setDestinationEntity(196U);
    msg.ax_cmd = 0.864325614641;
    msg.ay_cmd = 0.238089219426;
    msg.az_cmd = 0.358101627588;
    msg.ax_des = 0.984708634789;
    msg.ay_des = 0.94943673856;
    msg.az_des = 0.381174298051;
    msg.virt_err_x = 0.432929252443;
    msg.virt_err_y = 0.32437531771;
    msg.virt_err_z = 0.0965351164003;
    msg.surf_fdbk_x = 0.130476550935;
    msg.surf_fdbk_y = 0.808796360436;
    msg.surf_fdbk_z = 0.364225446254;
    msg.surf_unkn_x = 0.893564387715;
    msg.surf_unkn_y = 0.456078192624;
    msg.surf_unkn_z = 0.823485154185;
    msg.ss_x = 0.714468760999;
    msg.ss_y = 0.43598682109;
    msg.ss_z = 0.765033669778;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("DKTRCTFHMSZCZRAWIGYEBLYMWVAROKGYKKHQIIOLMUOLROPZVQIYSZEDHUCOJONTUFOB");
    tmp_msg_0.dist = 0.774770248913;
    tmp_msg_0.err = 0.949344357825;
    tmp_msg_0.ctrl_imp = 0.522723372756;
    tmp_msg_0.rel_dir_x = 0.970262600032;
    tmp_msg_0.rel_dir_y = 0.757314410831;
    tmp_msg_0.rel_dir_z = 0.340006873513;
    tmp_msg_0.err_x = 0.133343231039;
    tmp_msg_0.err_y = 0.0585079860184;
    tmp_msg_0.err_z = 0.996992002487;
    tmp_msg_0.rf_err_x = 0.926702346366;
    tmp_msg_0.rf_err_y = 0.934600446976;
    tmp_msg_0.rf_err_z = 0.0467385129212;
    tmp_msg_0.rf_err_vx = 0.569610863695;
    tmp_msg_0.rf_err_vy = 0.821571343169;
    tmp_msg_0.rf_err_vz = 0.375143506869;
    tmp_msg_0.ss_x = 0.994211533713;
    tmp_msg_0.ss_y = 0.26295444517;
    tmp_msg_0.ss_z = 0.587472147366;
    tmp_msg_0.virt_err_x = 0.496218994331;
    tmp_msg_0.virt_err_y = 0.0673116500782;
    tmp_msg_0.virt_err_z = 0.803463945019;
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
    msg.setTimeStamp(0.829800376826);
    msg.setSource(17673U);
    msg.setSourceEntity(174U);
    msg.setDestination(6246U);
    msg.setDestinationEntity(65U);
    msg.s_id.assign("GKAOXEWKDLJMALTRZPKNTCELPRPYUMGTJSQGYPKSLEOQJEPSVTRQNBUXZDIYYFFMOJFLGFJUQALBWKTQWFAWWAHUVIWYHUBFZXZADWFRODTVHKHCANFMUHTCYWOGNUNXCVSXANQBKIICMPJQEFMBEVOHDKZLMIKURCSZPZRGXZCXUQNLGIVTEBPJCQSCSXJWGSJOODILLPNDYHHYHUIXMDTXB");
    msg.dist = 0.0322201543613;
    msg.err = 0.490098091834;
    msg.ctrl_imp = 0.259079670266;
    msg.rel_dir_x = 0.918437464415;
    msg.rel_dir_y = 0.387743685617;
    msg.rel_dir_z = 0.425266466104;
    msg.err_x = 0.26699152487;
    msg.err_y = 0.228985029813;
    msg.err_z = 0.377940655472;
    msg.rf_err_x = 0.357018686399;
    msg.rf_err_y = 0.393440288787;
    msg.rf_err_z = 0.0239967862603;
    msg.rf_err_vx = 0.114614222816;
    msg.rf_err_vy = 0.771818871751;
    msg.rf_err_vz = 0.185705251493;
    msg.ss_x = 0.42256618181;
    msg.ss_y = 0.612671439725;
    msg.ss_z = 0.0753377246111;
    msg.virt_err_x = 0.764799179044;
    msg.virt_err_y = 0.84784739169;
    msg.virt_err_z = 0.636900305308;

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
    msg.setTimeStamp(0.876250382649);
    msg.setSource(52799U);
    msg.setSourceEntity(205U);
    msg.setDestination(57640U);
    msg.setDestinationEntity(248U);
    msg.s_id.assign("AGOJGBBKJZACMGWYJPPCBDCIKEQBBDZNHUNJTHHRCGBLLXXWWDDTBFRMHZWOGPVVAGWYNBZWDISKVYGWMPZYHMWNXDAELJAZRZHPTVPECAFEFLZMSHJOXRCSIJEXHUCIPFRRVNJUTMDOCLKKVOVUAH");
    msg.dist = 0.125689367613;
    msg.err = 0.859677483583;
    msg.ctrl_imp = 0.0423822138906;
    msg.rel_dir_x = 0.296520631061;
    msg.rel_dir_y = 0.0600650557866;
    msg.rel_dir_z = 0.0436437717215;
    msg.err_x = 0.32323244377;
    msg.err_y = 0.522741772408;
    msg.err_z = 0.651871765244;
    msg.rf_err_x = 0.66837286672;
    msg.rf_err_y = 0.86315671545;
    msg.rf_err_z = 0.990009963041;
    msg.rf_err_vx = 0.789589647411;
    msg.rf_err_vy = 0.284970942104;
    msg.rf_err_vz = 0.994895121375;
    msg.ss_x = 0.817939302914;
    msg.ss_y = 0.416538644051;
    msg.ss_z = 0.277107287655;
    msg.virt_err_x = 0.733180670265;
    msg.virt_err_y = 0.936698903355;
    msg.virt_err_z = 0.397597763285;

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
    msg.setTimeStamp(0.383182544739);
    msg.setSource(34114U);
    msg.setSourceEntity(53U);
    msg.setDestination(16974U);
    msg.setDestinationEntity(33U);
    msg.s_id.assign("CTQOGDWBXYIKUVOENZOJZRUTNGCXMYLCVPARHYLNUBJUWAWZPWCDERASPGUEIRVYPLPNVTIPEKRYHGKSVRZAEZTKWALNKX");
    msg.dist = 0.842865655586;
    msg.err = 0.0310093829822;
    msg.ctrl_imp = 0.634497334902;
    msg.rel_dir_x = 0.0634447259892;
    msg.rel_dir_y = 0.959680961735;
    msg.rel_dir_z = 0.886671159102;
    msg.err_x = 0.823357636667;
    msg.err_y = 0.700051702618;
    msg.err_z = 0.46435302435;
    msg.rf_err_x = 0.456712015284;
    msg.rf_err_y = 0.785481091784;
    msg.rf_err_z = 0.199945254209;
    msg.rf_err_vx = 0.504135894293;
    msg.rf_err_vy = 0.399787606203;
    msg.rf_err_vz = 0.981872724684;
    msg.ss_x = 0.95831430249;
    msg.ss_y = 0.837538228399;
    msg.ss_z = 0.438476438581;
    msg.virt_err_x = 0.44831698118;
    msg.virt_err_y = 0.869136932233;
    msg.virt_err_z = 0.5955523771;

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
    msg.setTimeStamp(0.812571382082);
    msg.setSource(56644U);
    msg.setSourceEntity(74U);
    msg.setDestination(32371U);
    msg.setDestinationEntity(225U);
    msg.timeout = 45779U;
    msg.rpm = 0.181399192924;
    msg.direction = 156U;
    msg.custom.assign("RDFAXFSBTGEGEPNYLMGTHEQRUUMPMKVOKMXUHFRWXBWYXJLNFYMISJLKCTVIOLEFOORBCBHQZBEDXLQPFVNEWNFTZGEXVRRTUODLQCKKYYZUHPGOPBTITMWOZHHNQGDRLPUAWCVWNFGDCKSXSZIVIDGBZZQMMJPWDJSQMNDJFJSJGHZOAAJPIYYLNNIBKKAYIYSVIHSWDANCHFXEE");

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
    msg.setTimeStamp(0.663193403013);
    msg.setSource(15462U);
    msg.setSourceEntity(209U);
    msg.setDestination(17752U);
    msg.setDestinationEntity(68U);
    msg.timeout = 5573U;
    msg.rpm = 0.174170050099;
    msg.direction = 245U;
    msg.custom.assign("RXBZBZIUPMCFIVSWEDVUYZCOSUGGCAAZLNODWIGRLYRTJFEJPGUZAYPVBMKSHJXQBIHIERNINBGVQYDROWJUEHEBTEFFYLMWDGQOQQNGSFUNGKCYLAFNZYABXRLQRCFHETSAUMEXRVMAPOHODJXLAKWMLZWIWFJPKWQCBEJDGWLTMOMNQKUGHJRQVKTSYZHLZPSVURHCNKDEHVXANSIZOFXILIVSTCOJMC");

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
    msg.setTimeStamp(0.0343652809948);
    msg.setSource(48543U);
    msg.setSourceEntity(171U);
    msg.setDestination(28144U);
    msg.setDestinationEntity(54U);
    msg.timeout = 33117U;
    msg.rpm = 0.933148080304;
    msg.direction = 6U;
    msg.custom.assign("MYVTUHMAIUCQMJCWJYKHDWVADXLFZWJJIOKBTXHNKTGIAXOVFSYCKMHSUIMZILCGEOAURQYTDRKXQPALGTDHUYIKNXVJFHNRNKUADGLFMSNWDQODJHCPWCZEROPCSBOETQHVVABT");

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
    msg.setTimeStamp(0.712486979685);
    msg.setSource(13841U);
    msg.setSourceEntity(188U);
    msg.setDestination(3119U);
    msg.setDestinationEntity(4U);
    msg.formation_name.assign("PODDVPQKMUAHEEQAUGXLKNXZEBUQJZPZXSYSRZFFZYFBHRBWSZMTUDRWMNRKUOCFTJBLSOCDXECISSBZTMOSQAWKRGEGIYIPVLYCIVXVMKUALHYTXVLVNNNQEOLVMOKNVGLGHNMUIQXHWJWJMTXTEZRUWPURIFLAXIJGD");
    msg.type = 0U;
    msg.op = 210U;
    msg.group_name.assign("LAYZRJOTMDWFCWMQIOADEHQWGZOGRXOAUVYNSPDTDGZZVKFVRNVJDYXPBSOFXUFEARTKIQCSATPWYOUBPBLCGCOANJBRKJTUAHKQLZNUAXWNZWBJCWKPHDGIYNFCVHTBRUBWXFMCMVWTHKEDZNJMJKYPRYICHPMLHIVREEJPDZSMKSHGEQVIHJGZXQMNNWOUFIIQSZDRALRXEAUGITYLQTLMLSFVXHM");
    msg.plan_id.assign("DZBSGAVVPHTBINDCXPPAFJYHTBWFXCSXNPMGEZIRXAEJLZOZQCPBRTZQOGSMWDFFVQEXTLUCECUDIMRLNNJUYQVVYQJJGYJTADACIIBKGDAFRRVSMGYZBAZENDZX");
    msg.description.assign("UPYFGHPCKEJVVTWCLYWTZ");
    msg.reference_frame = 4U;
    msg.leader_bank_lim = 0.879134664835;
    msg.leader_speed_min = 0.30689240082;
    msg.leader_speed_max = 0.352834073513;
    msg.leader_alt_min = 0.0206645642988;
    msg.leader_alt_max = 0.365664104627;
    msg.pos_sim_err_lim = 0.292885139057;
    msg.pos_sim_err_wrn = 0.955414338466;
    msg.pos_sim_err_timeout = 40844U;
    msg.converg_max = 0.472432265752;
    msg.converg_timeout = 25375U;
    msg.comms_timeout = 48254U;
    msg.turb_lim = 0.995841679746;
    msg.custom.assign("AJBZTUNDTZVFARMLFSHPWCYHZRNDCZQJFQONCYWPXUHJPSJRNHZGCNKIQBCVZDBCLXTKITJIGDSQOMHXGLALCOHGPSSVHREE");

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
    msg.setTimeStamp(0.438852594992);
    msg.setSource(28040U);
    msg.setSourceEntity(215U);
    msg.setDestination(37634U);
    msg.setDestinationEntity(37U);
    msg.formation_name.assign("OREWJXYPQUVBMGDHZJMDIQJMHJVCLZXWCJKZQKKWBGITIQTLSNYSICKDZJFWRABUXRSKDNFUBQRGBCLHPOUPZMSHIUFBJMMAULFEIGRYCFZHXWZDDGKHOFGPGUOHHARYATOTUOXUZTGXYCCLRLKIPDFVGOKMTAEEKRCLATSLEDGSVRT");
    msg.type = 140U;
    msg.op = 152U;
    msg.group_name.assign("MKRKFUYOEQQIPXHUJXOAFULRHQFWZHNRIGFSXBULGAKLGUZRHWDHHBENNCPKHQXJOUSLPARSTFXZERJIZDCNPVXOWUXVFMBLCJJWBFWADIQBTCYOOZTUSMEVSZPBTIQZVCNHGGIAWSLYJQTVENMBVMDLIPAVTOSJMZKRDGHIFRETMEEJDTAYTOARCCDRQNQYPOQNOYJSVINMHKEYBVZ");
    msg.plan_id.assign("BOWUYJDWFYVOPVXGXHIZITPYJERCCNEETMJKVOOZIVMNUXGHRBWHYCNQYLERBFHQQSBKBRURUBTADJWLRLRMJAISAMOAFGVCRUYFXMXSXIXZOAEEHAUTVEPSDRHTBUBSVKSGLIFGWAGJIQHKHCAKXFGNFQIDSNMPVPDXAJEHTXKOBPIPDJZYESDPNWWZZKEWVNGLMQYP");
    msg.description.assign("QSIPLQWHVMDGIVSZBPANJHPOXPUQUHSNTMGTIIEOGOHEJKHSVZFDJUCCLIVFBBEHKSYXBYFICRKLOXKGXNIZGFFQXGSERZGMBWNDYWKKDTVUYVOSYELCYWGSMZERWTDOAQEBJOAWEKYDXUDHKAUEXWVQIZVTFMXTAGMOKFNRECJAWTJPMCZCPLAWLUHBNNDMQMFJQUBLRSCALZJPTDISUAJNJKQNXTIFYLOWNFCRROZRTRQCXBHDUL");
    msg.reference_frame = 248U;
    msg.leader_bank_lim = 0.135005146421;
    msg.leader_speed_min = 0.64316391271;
    msg.leader_speed_max = 0.44723159682;
    msg.leader_alt_min = 0.1499091121;
    msg.leader_alt_max = 0.407448438786;
    msg.pos_sim_err_lim = 0.397075564155;
    msg.pos_sim_err_wrn = 0.772847652004;
    msg.pos_sim_err_timeout = 43675U;
    msg.converg_max = 0.0659515586071;
    msg.converg_timeout = 56768U;
    msg.comms_timeout = 64052U;
    msg.turb_lim = 0.0769369203646;
    msg.custom.assign("DVMCXWLLYUYCMDOHELFLHPKJZIZRKHAQRXFSXKEGTLEDKYMFAWZEKAQJQFZHULYAB");

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
    msg.setTimeStamp(0.577175372794);
    msg.setSource(57207U);
    msg.setSourceEntity(240U);
    msg.setDestination(53275U);
    msg.setDestinationEntity(43U);
    msg.formation_name.assign("IJXGNAIZXLIZTHGNEUFSBFJKDODUEOWKUNBUBGLLPDHZVMDBQRVSFDWEYLAWHGSLSMTBC");
    msg.type = 46U;
    msg.op = 203U;
    msg.group_name.assign("NFVWHHUNSXBQFECDWQEORVQSTTDYCSRMDYVPSDQFOZMOOHCTICOVNTSGDBSBDNPKCKJXFNMUEHZEYAYRAIMRFKWIOMABGRJUQEDNINIKEKDCDTPCCGXYJLRARBYKQUTULFXYSJUWICZXHUGKERHVBAEFTPQWHPAIPOEHPVSLQIBMLVYEJTZPXLMSTLGUGUONJBLWWKFVGKKAOBBORGGQZVYPDXJMZAANJCJSMXTXLFWX");
    msg.plan_id.assign("PTQBACDCPQANWHWIEQDKXBUIOXXLKJHMQZQBIGSLBRLYLUVCTGSZEIZMOBMNGCJQGOAMKYSJWPJOVGRHBYQJUDHSAPAKLWEA");
    msg.description.assign("XBAGCSJKAFLDHVLKJPVDCPYNZGBQVGLSZAWDBLKMFMOTFWXXJBKZNWIXFNTTJLMPCEKBAUTPJEBJLWCYPSGLUVOMOQZDHYMQRENTHEKADYABKIVNDMGITFGXVCLRNQEQAJCZYEIHWBCRZWXOASQPPOZTSFSYHUBVFRWAUOFDUFVXYASWHXQEHEGWMKGMZOGQ");
    msg.reference_frame = 92U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 1274U;
    tmp_msg_0.off_x = 0.630657425997;
    tmp_msg_0.off_y = 0.420669416718;
    tmp_msg_0.off_z = 0.37081188666;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.2140032505;
    msg.leader_speed_min = 0.502647549589;
    msg.leader_speed_max = 0.114610138154;
    msg.leader_alt_min = 0.886944274658;
    msg.leader_alt_max = 0.267275377912;
    msg.pos_sim_err_lim = 0.438756004463;
    msg.pos_sim_err_wrn = 0.0484316176364;
    msg.pos_sim_err_timeout = 18723U;
    msg.converg_max = 0.301619111076;
    msg.converg_timeout = 22040U;
    msg.comms_timeout = 714U;
    msg.turb_lim = 0.979350096732;
    msg.custom.assign("KVEJGWKTOCDAXOMYWXEVMXTTZHSVROCPUHHCORZTCDJBZJLUSLNDWQYOLQPYDTRZWRHYJACGXAOAYAPXALNULWN");

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
    msg.setTimeStamp(0.208012042465);
    msg.setSource(7402U);
    msg.setSourceEntity(101U);
    msg.setDestination(53208U);
    msg.setDestinationEntity(76U);
    msg.timeout = 53722U;
    msg.lat = 0.656016577422;
    msg.lon = 0.00840293292596;
    msg.z = 0.877223366524;
    msg.z_units = 170U;
    msg.speed = 0.790281380562;
    msg.speed_units = 20U;
    msg.custom.assign("XZGSFAYALOWCLWZWNWVMXKYBQVCNCBTHGBYBWEMLNUDAHKDXHCNAMTBQLGGZDIYZHOWKIEICLKENMAPVLCLUXUMOECRIQHPNOXYQGVZDUJKSPUOICJGUENQPTUOGQRDTRNPZLTZD");

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
    msg.setTimeStamp(0.224945841913);
    msg.setSource(49605U);
    msg.setSourceEntity(125U);
    msg.setDestination(31944U);
    msg.setDestinationEntity(213U);
    msg.timeout = 20493U;
    msg.lat = 0.0478699334766;
    msg.lon = 0.728900933078;
    msg.z = 0.310150455235;
    msg.z_units = 118U;
    msg.speed = 0.42243549964;
    msg.speed_units = 117U;
    msg.custom.assign("CIISYHWKOYNLJWGQFEVPHARDMOGSZWOWGEBTTNZEDUEHLGBGKUFGXXWBOVLCIWMDYAPCNBCSQGEUMRNILANXFVRUMUTNAJKTBZXLOBZKAMYTWJZJTRRCSXMFG");

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
    msg.setTimeStamp(0.723828002214);
    msg.setSource(22065U);
    msg.setSourceEntity(227U);
    msg.setDestination(2501U);
    msg.setDestinationEntity(230U);
    msg.timeout = 63725U;
    msg.lat = 0.245995876288;
    msg.lon = 0.575913550003;
    msg.z = 0.1683009651;
    msg.z_units = 113U;
    msg.speed = 0.536600966577;
    msg.speed_units = 239U;
    msg.custom.assign("QSHIFHHLHIVZGCPAXSSCSDAUTMWGGQVDJPQAWVQWGFRULMMOFRNLPIGCYZ");

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
    msg.setTimeStamp(0.588066093887);
    msg.setSource(12267U);
    msg.setSourceEntity(247U);
    msg.setDestination(16234U);
    msg.setDestinationEntity(101U);
    msg.timeout = 9208U;
    msg.lat = 0.706171809995;
    msg.lon = 0.349293236449;
    msg.z = 0.709070895672;
    msg.z_units = 216U;
    msg.speed = 0.958140849283;
    msg.speed_units = 156U;
    msg.custom.assign("HWSZAFZBDOXMTRENIJKNYAAJGLCYQPTOXQHEITQFYUXGCZLQIPNOCHPIFRJUMQBBVVEQWTVKNRWGEMTIWPXLXCENSMBWYFLLCVRNSYVDUKHVYHQAGSJSROCVALUTJZEJQKVFDN");

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
    msg.setTimeStamp(0.367425078936);
    msg.setSource(42046U);
    msg.setSourceEntity(64U);
    msg.setDestination(55311U);
    msg.setDestinationEntity(135U);
    msg.timeout = 62941U;
    msg.lat = 0.507600085677;
    msg.lon = 0.900450682592;
    msg.z = 0.825496627662;
    msg.z_units = 85U;
    msg.speed = 0.961009564394;
    msg.speed_units = 142U;
    msg.custom.assign("CGVYFUNSILMLAEXSSLFIEQUBNLRQWGQRGZADCLCJTWXYYLXMSZGPCFDZDXDQPKKTQN");

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
    msg.setTimeStamp(0.828366263519);
    msg.setSource(56765U);
    msg.setSourceEntity(130U);
    msg.setDestination(58961U);
    msg.setDestinationEntity(102U);
    msg.timeout = 3613U;
    msg.lat = 0.178888667306;
    msg.lon = 0.764946614654;
    msg.z = 0.893971107492;
    msg.z_units = 47U;
    msg.speed = 0.310978401375;
    msg.speed_units = 62U;
    msg.custom.assign("ZVTCJEGGRLCNHNQT");

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
    msg.setTimeStamp(0.798997694512);
    msg.setSource(18019U);
    msg.setSourceEntity(169U);
    msg.setDestination(30149U);
    msg.setDestinationEntity(108U);
    msg.arrival_time = 0.271150331026;
    msg.lat = 0.240844972544;
    msg.lon = 0.890584441916;
    msg.z = 0.872792383506;
    msg.z_units = 183U;
    msg.travel_z = 0.322870729151;
    msg.travel_z_units = 217U;
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
    msg.setTimeStamp(0.938427757861);
    msg.setSource(64822U);
    msg.setSourceEntity(221U);
    msg.setDestination(2371U);
    msg.setDestinationEntity(143U);
    msg.arrival_time = 0.681150577315;
    msg.lat = 0.578799857771;
    msg.lon = 0.233437491427;
    msg.z = 0.15546298171;
    msg.z_units = 145U;
    msg.travel_z = 0.801081965225;
    msg.travel_z_units = 73U;
    msg.delayed = 110U;

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
    msg.setTimeStamp(0.603791459724);
    msg.setSource(10325U);
    msg.setSourceEntity(107U);
    msg.setDestination(54196U);
    msg.setDestinationEntity(68U);
    msg.arrival_time = 0.789804126336;
    msg.lat = 0.904085796859;
    msg.lon = 0.989615169768;
    msg.z = 0.199885505801;
    msg.z_units = 131U;
    msg.travel_z = 0.593449582979;
    msg.travel_z_units = 217U;
    msg.delayed = 203U;

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
    msg.setTimeStamp(0.83248901881);
    msg.setSource(27134U);
    msg.setSourceEntity(69U);
    msg.setDestination(48604U);
    msg.setDestinationEntity(245U);
    msg.lat = 0.528770281711;
    msg.lon = 0.683247107939;
    msg.z = 0.0635878427618;
    msg.z_units = 49U;
    msg.speed = 0.675843490145;
    msg.speed_units = 33U;
    msg.bearing = 0.181180283081;
    msg.cross_angle = 0.920432156674;
    msg.width = 0.478875933106;
    msg.length = 0.41728424688;
    msg.coff = 249U;
    msg.angaperture = 0.18603316976;
    msg.range = 42993U;
    msg.overlap = 186U;
    msg.flags = 83U;
    msg.custom.assign("NYNCBWLYZJLSQONNUMPKHESNMYSZGSERDAWAWVUEZUPNBGTMXRAVRIUPMMETOFMIDPDHVWOLORHJHUNGBIPKQCTFOOYCVBKOSWQXQBHEZYJETZDOLWKIRGITVOHVFTKPJLHSWFHZRQULEBGHAJKNIYLHAVRLQFBYIBTPJWCAMUQTNCOXJXXDMZKGDGICVRXCBFIECKKEXDTCBWZFPDRAAYLDSVIGXMUUA");

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
    msg.setTimeStamp(0.0905834050167);
    msg.setSource(25303U);
    msg.setSourceEntity(143U);
    msg.setDestination(1517U);
    msg.setDestinationEntity(204U);
    msg.lat = 0.068998053499;
    msg.lon = 0.0780336227763;
    msg.z = 0.132024322843;
    msg.z_units = 84U;
    msg.speed = 0.381021418406;
    msg.speed_units = 146U;
    msg.bearing = 0.195048759065;
    msg.cross_angle = 0.313600821771;
    msg.width = 0.621325092892;
    msg.length = 0.717303671346;
    msg.coff = 60U;
    msg.angaperture = 0.240719241361;
    msg.range = 64269U;
    msg.overlap = 208U;
    msg.flags = 37U;
    msg.custom.assign("XBPNCCGCLLUOOXZKVZKMWCLSSNSGRYBYHFOVKCCTKCYSGYSBTEXQXVQUMODQLUJFPRFHUTAFRHPEJ");

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
    msg.setTimeStamp(0.0415586686223);
    msg.setSource(47236U);
    msg.setSourceEntity(112U);
    msg.setDestination(31482U);
    msg.setDestinationEntity(232U);
    msg.lat = 0.782126467637;
    msg.lon = 0.308467711866;
    msg.z = 0.639767687287;
    msg.z_units = 254U;
    msg.speed = 0.666945346431;
    msg.speed_units = 199U;
    msg.bearing = 0.0803127563382;
    msg.cross_angle = 0.0364144366224;
    msg.width = 0.819444180389;
    msg.length = 0.131031620223;
    msg.coff = 15U;
    msg.angaperture = 0.119900920042;
    msg.range = 57937U;
    msg.overlap = 215U;
    msg.flags = 191U;
    msg.custom.assign("VYWZYAMHIJCNZLCPSCMSZALJBMPKWBWFGIJTBZMYUBAWUAHHXUUJOHTCEPRXHDGNQXTIPROXAVMJNCQBSLVBORO");

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
    msg.setTimeStamp(0.341826061732);
    msg.setSource(55715U);
    msg.setSourceEntity(73U);
    msg.setDestination(33532U);
    msg.setDestinationEntity(196U);
    msg.timeout = 4447U;
    msg.lat = 0.754237217227;
    msg.lon = 0.967974179884;
    msg.z = 0.889643622723;
    msg.z_units = 63U;
    msg.speed = 0.64564624462;
    msg.speed_units = 248U;
    msg.syringe0 = 183U;
    msg.syringe1 = 68U;
    msg.syringe2 = 193U;
    msg.custom.assign("DEHFPNLWOKHUILUHGFZNQWBTYC");

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
    msg.setTimeStamp(0.0289692089253);
    msg.setSource(61941U);
    msg.setSourceEntity(174U);
    msg.setDestination(54316U);
    msg.setDestinationEntity(25U);
    msg.timeout = 50317U;
    msg.lat = 0.806894264381;
    msg.lon = 0.77822836562;
    msg.z = 0.792286324813;
    msg.z_units = 164U;
    msg.speed = 0.0352666164108;
    msg.speed_units = 20U;
    msg.syringe0 = 111U;
    msg.syringe1 = 252U;
    msg.syringe2 = 253U;
    msg.custom.assign("SKDLWCPGULXBYMHROORFSQNAMKUOWUJBHALFKLVBPGTYHJTLTOXUNFYCAEACHIAJBPQTUZSOOFPQYEGNXUMUJCAAGRBCBWZERVINHQJQAKCGGMPYCIDTFZAHIFDWNRRUVIEEZJELCKVNKWVNQMWBDVVNTWXOSXVOHKYWTXVLVYPQEXGSEWESZGTZFIZSDXFCZPHDSOJPQJDIEDP");

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
    msg.setTimeStamp(0.412829432225);
    msg.setSource(55971U);
    msg.setSourceEntity(6U);
    msg.setDestination(6218U);
    msg.setDestinationEntity(33U);
    msg.timeout = 6479U;
    msg.lat = 0.104342739686;
    msg.lon = 0.521058259838;
    msg.z = 0.680781205119;
    msg.z_units = 35U;
    msg.speed = 0.254909697553;
    msg.speed_units = 244U;
    msg.syringe0 = 166U;
    msg.syringe1 = 106U;
    msg.syringe2 = 164U;
    msg.custom.assign("DXBRCBKWEJKDHJHAZMBUMHFBKCXOCTLNUSNKDDEMRWBVNWXWIGRTXGFTJCNZLYIHTYGAEIJZZUOGAZCRFWJYUEHLSPZFX");

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
    msg.setTimeStamp(0.0405586733609);
    msg.setSource(8925U);
    msg.setSourceEntity(66U);
    msg.setDestination(59076U);
    msg.setDestinationEntity(177U);

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
    msg.setTimeStamp(0.341225730563);
    msg.setSource(55681U);
    msg.setSourceEntity(239U);
    msg.setDestination(37583U);
    msg.setDestinationEntity(149U);

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
    msg.setTimeStamp(0.421884295172);
    msg.setSource(5816U);
    msg.setSourceEntity(251U);
    msg.setDestination(49998U);
    msg.setDestinationEntity(4U);

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
    msg.setTimeStamp(0.320414992571);
    msg.setSource(4319U);
    msg.setSourceEntity(5U);
    msg.setDestination(25189U);
    msg.setDestinationEntity(138U);
    msg.lat = 0.0978927425572;
    msg.lon = 0.816838504498;
    msg.z = 0.212090492807;
    msg.z_units = 222U;
    msg.speed = 0.239280811814;
    msg.speed_units = 204U;
    msg.takeoff_pitch = 0.864571528408;
    msg.custom.assign("DLQLJQNRSLCOWOFBBTRAJKMIQFKKAGJABFQEJNNSEGEVETVLYSUGVLOONIHNWSKIKVNPFQQHIZNTKCVAPBHXYWKQSCORDZCXFMDZLYVDYPGJM");

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
    msg.setTimeStamp(0.151650947958);
    msg.setSource(29729U);
    msg.setSourceEntity(148U);
    msg.setDestination(33934U);
    msg.setDestinationEntity(235U);
    msg.lat = 0.286361391471;
    msg.lon = 0.286325687514;
    msg.z = 0.603913912428;
    msg.z_units = 241U;
    msg.speed = 0.982799206822;
    msg.speed_units = 168U;
    msg.takeoff_pitch = 0.780622984886;
    msg.custom.assign("BJUGSHGQHGSRIDZTMVF");

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
    msg.setTimeStamp(0.400197836539);
    msg.setSource(20771U);
    msg.setSourceEntity(63U);
    msg.setDestination(8655U);
    msg.setDestinationEntity(211U);
    msg.lat = 0.672592814546;
    msg.lon = 0.0708882490019;
    msg.z = 0.019671944339;
    msg.z_units = 219U;
    msg.speed = 0.50980646113;
    msg.speed_units = 206U;
    msg.takeoff_pitch = 0.671401812258;
    msg.custom.assign("SPUQMWOIOLTGSUHRWDZDFYAKLKQLRDNXPHWAIKCTNDEZCXVFNLETXMMWSXHMANGRSGSECTAKXBSMZRDBVHBFTPEOGWIEKFGZUQSIKATHWUAGZZLYMWPXAQPKJJMMX");

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
    msg.setTimeStamp(0.45762526254);
    msg.setSource(34414U);
    msg.setSourceEntity(249U);
    msg.setDestination(29415U);
    msg.setDestinationEntity(128U);
    msg.lat = 0.899300249099;
    msg.lon = 0.953217423043;
    msg.z = 0.368945974964;
    msg.z_units = 106U;
    msg.speed = 0.371586413117;
    msg.speed_units = 5U;
    msg.abort_z = 0.266622615643;
    msg.bearing = 0.943374974977;
    msg.glide_slope = 134U;
    msg.glide_slope_alt = 0.964978780562;
    msg.custom.assign("KIHRJUXPXHTKQOXUNLEGMFNQSRQXJSBUDZKAKRZVAJYJHLXUJLCICDBVUXMESJBINSWXRYDPSWWOCYNJWCOCFOKLVWCDAZJAOINLTAOASROWIFQYMRNTHBQKEDLDUKGZYWRUDRVEKCHFEEFPGVYIIPELGKEIXVGPMLRCLZQBGWNGHQTIUDMYBTAVMSAHMXZABTDGQIKDBXPHMTPSGTVUUZMRYOJQQLFPEVZPZGNAFTJFCVYNFSF");

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
    msg.setTimeStamp(0.30988211029);
    msg.setSource(30785U);
    msg.setSourceEntity(165U);
    msg.setDestination(24478U);
    msg.setDestinationEntity(95U);
    msg.lat = 0.129514913065;
    msg.lon = 0.540118486852;
    msg.z = 0.0492377144373;
    msg.z_units = 125U;
    msg.speed = 0.501395571721;
    msg.speed_units = 2U;
    msg.abort_z = 0.391884872851;
    msg.bearing = 0.185247238666;
    msg.glide_slope = 164U;
    msg.glide_slope_alt = 0.981300021422;
    msg.custom.assign("VCZAJHFLMUTDGMREDKCLKWYBWFFIJAUHVOBKWRTNUDWPUTTBATYXIFKRAIFROYBTOXUWGEAGNSAXIOGCAGDYTNURUEUNJTYSSQVJRXNMZXLZNEDELPVSICBLPOWZZPBAJWFKDHPGRJMOEPYHRBIH");

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
    msg.setTimeStamp(0.626311791298);
    msg.setSource(12023U);
    msg.setSourceEntity(39U);
    msg.setDestination(41776U);
    msg.setDestinationEntity(235U);
    msg.lat = 0.607473168683;
    msg.lon = 0.0878545596419;
    msg.z = 0.957214027008;
    msg.z_units = 117U;
    msg.speed = 0.533608628269;
    msg.speed_units = 8U;
    msg.abort_z = 0.93483588984;
    msg.bearing = 0.770965831957;
    msg.glide_slope = 249U;
    msg.glide_slope_alt = 0.845068801322;
    msg.custom.assign("UWKFCLRPVUZJJLCROUSHESNZJTIMKHSTRMNZKRLYKXOCLHZSPZEHLCDBMAOWGNQ");

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
    msg.setTimeStamp(0.439884671348);
    msg.setSource(50752U);
    msg.setSourceEntity(76U);
    msg.setDestination(27949U);
    msg.setDestinationEntity(227U);
    msg.lat = 0.838313226301;
    msg.lon = 0.08864024838;
    msg.speed = 0.816883727182;
    msg.speed_units = 147U;
    msg.limits = 186U;
    msg.max_depth = 0.695202299151;
    msg.min_alt = 0.435531795831;
    msg.time_limit = 0.465478334418;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.215087507716;
    tmp_msg_0.lon = 0.880798633817;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("OLOIARUETFAHCCFNCTLOLPVYITYAXXDUYBDBEGOZGBPUFZVXZCJWTKDBWEDXRUAYCYSCGKPBIMUUPPJVJLQZYHJWHPRMTX");
    msg.custom.assign("TYPOFUHNOPZSTUKLWASXESGQVIXDAIIACVKQFRYSUQLPCJZOJMXWHGNAUNRHNIJUMZBAZETEQWVFGTJIEKVYVPHLTLOUSY");

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
    msg.setTimeStamp(0.507366680725);
    msg.setSource(37660U);
    msg.setSourceEntity(237U);
    msg.setDestination(47041U);
    msg.setDestinationEntity(128U);
    msg.lat = 0.549066661297;
    msg.lon = 0.31300768466;
    msg.speed = 0.914786151874;
    msg.speed_units = 152U;
    msg.limits = 36U;
    msg.max_depth = 0.496129589168;
    msg.min_alt = 0.0534033620621;
    msg.time_limit = 0.153597972654;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.20298080888;
    tmp_msg_0.lon = 0.780028325959;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("OIYVFAGCMJNXKQJSSTDLJTEAPKEWREQDZQSRKNNSYDIXQZGHKJGJYXSTCTQXUDZEUWNIKHKFCBNSFUDXHSFDOQSFCIWWIEPVYTXJUOPZPYJRLBXQTEARIBHSVPOMGPCYFREUBOTQNAHJGQVZNWLWHMBVXLTBMCHFVQTAJGFIKEXVOVFNHBYSPZLJLBKVGZUZIMAKACDRYEMUFOCRCURPPWLBROMGHIVGCYOAMXYHUKWOTANIBZPLDMW");
    msg.custom.assign("MIZQRCLMHUXLTUBZJYJENWUVKERXUOYHWKXBKXZZJHJQMOSKMHTWDJNEIBORLYSNFQNTIKKCGXRUPBLUXDFDAQVAGUJKTXUAQXOAYCYCQRAEIVHPJMGOFGLOLDJZVXGOZLFQCYSIWEGCTEKVNFROCSKCOBMDINABRENTPEPPGWRWQSNMIBDAWJZVZRVRLFIMTMQPFESPTSDNFZWUCMUBTWPJOHADGVHQFDSLDANTKYBFPIYHGYSXSH");

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
    msg.setTimeStamp(0.458276667873);
    msg.setSource(24613U);
    msg.setSourceEntity(182U);
    msg.setDestination(49475U);
    msg.setDestinationEntity(236U);
    msg.lat = 0.723939426637;
    msg.lon = 0.961784237232;
    msg.speed = 0.415549388381;
    msg.speed_units = 177U;
    msg.limits = 78U;
    msg.max_depth = 0.195038418875;
    msg.min_alt = 0.768848460329;
    msg.time_limit = 0.663498616623;
    msg.controller.assign("NJHTMQYLEXMBNYPTZFMWCDXGQMTWDDGYACEJGKRYOVXASWPUZRADFJTX");
    msg.custom.assign("QFAEKMDKRRTUGIZHLYWESVDJBOUIDCPAJHYQWOOHYTOSSHNRSXGGWTXQBYFFNQQSBXWZEJBELIVJPJIDFOGRTWGBNGLOAPAKIZLTSBXKTMVGREIXZXZFNDYAPPF");

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
    msg.setTimeStamp(0.192452056538);
    msg.setSource(34374U);
    msg.setSourceEntity(157U);
    msg.setDestination(2227U);
    msg.setDestinationEntity(176U);
    msg.target.assign("UBLCLEJUHHWPPXCNXQRNVKWOIPQQHAMZSTDTRHBPZTXHMMUXOZNBPCTBRQHTDGUCHLLFYNFOZSGKYWODEJCGNCWIYTCTJFWIZSIEMFOFFYVEFEMEGHUKUWPJKJLLFP");
    msg.max_speed = 0.297635025809;
    msg.speed_units = 229U;
    msg.lat = 0.0403003816333;
    msg.lon = 0.593779837086;
    msg.z = 0.768628177153;
    msg.z_units = 112U;
    msg.custom.assign("COHPLUDDFJKOXQLZKLPQXJGDOYYBWUREVMCIXMYZDQNQKK");

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
    msg.setTimeStamp(0.394332167829);
    msg.setSource(8109U);
    msg.setSourceEntity(156U);
    msg.setDestination(59778U);
    msg.setDestinationEntity(189U);
    msg.target.assign("IVLWXPYCUGZQ");
    msg.max_speed = 0.420162643396;
    msg.speed_units = 30U;
    msg.lat = 0.418129261751;
    msg.lon = 0.788184043757;
    msg.z = 0.782865575053;
    msg.z_units = 15U;
    msg.custom.assign("PKTEWUQHPTBMSHPKMUIMFJZEYCCEOVOKGLXETHNFGUYWQGKIJGHYUJBYPVMDJZNYCWIXITRFPDDPPJAVGLNZNPRILCHPAVWMEJJBXDNAZONMIDFDVBQIWCKQDEKAIWCYSRLVSLTARFZQZYSOKGULYOLNYSJREXVFSW");

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
    msg.setTimeStamp(0.0687667173408);
    msg.setSource(39090U);
    msg.setSourceEntity(237U);
    msg.setDestination(49045U);
    msg.setDestinationEntity(78U);
    msg.target.assign("STNQCPZMLKFOBDYCRDTQJGVYKWIULQPRDMWIAVZBSMLDWIVOWDRKOCNPEOHLWYMZATGESEBFALKBOJBSJWVXXYUPERNNYHTBQJPGPLRDUXPUWPOGEHGFOXMFYEDNYUMOSZGOHVHIJIGRVKHKCVNBWEBYFMXNNMKABFEWFSTZMXRIHXVCKFAHJJDYTVGKRHZXNASTLAXRWDULBISCPSCJQJZYEQJZKAGICACHETUIQUPFVGQQLTNUT");
    msg.max_speed = 0.2781962854;
    msg.speed_units = 177U;
    msg.lat = 0.0100816920064;
    msg.lon = 0.591797666043;
    msg.z = 0.970157700641;
    msg.z_units = 209U;
    msg.custom.assign("TLIVQHPPNENIKSNIVCGGRQECRABLJWWMMJHRICSKLZZPHXEATIXSKDJKAFJJAZPWBYBZCBNN");

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
    msg.setTimeStamp(0.146927299703);
    msg.setSource(39025U);
    msg.setSourceEntity(146U);
    msg.setDestination(62529U);
    msg.setDestinationEntity(152U);
    msg.timeout = 64673U;
    msg.lat = 0.51050652316;
    msg.lon = 0.917698332216;
    msg.speed = 0.42221356621;
    msg.speed_units = 143U;
    msg.custom.assign("TFYURFCYCAZKAKBWRINJSUWNQVBTJSYCVLCDXBIZPUFXCPRQMUCQQLQDXMQBPOMDMYLGDVFJSZEYZWHEWVPJAFGUHECGOGEHGHXPXRVAEJUSPBEOBBIVKZTJJQFYEXBWNYTYIURIHHKXCRPDTXZDYSWKSAEFLSFHWCPSVNSATOVLNZRMAONPPNYLMKSNMGGBOUQILXGIODRUWOGFMHDOZBQDNEMOLWHKIMZKAJAKNXWVTRDUJ");

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
    msg.setTimeStamp(0.505318833334);
    msg.setSource(47665U);
    msg.setSourceEntity(142U);
    msg.setDestination(65004U);
    msg.setDestinationEntity(67U);
    msg.timeout = 3931U;
    msg.lat = 0.299935761684;
    msg.lon = 0.674237011931;
    msg.speed = 0.189467457507;
    msg.speed_units = 209U;
    msg.custom.assign("VZWOWYSZSQGJASMIDQBTVHFBOFTGRGRSTNHCJJOQXTCCYWOVBOKGFXIUHSZUIDIMPDXIEBKNUHWWAGUEUJXZBOLCWKNIPAPNJNHGOVCCPSIVKRXTFGFFIAMRMTHLYLKSZRKLGAVAERMMUZDABNJCQMYDLOVZXPWJFCYEHYDTRXZTIQZQSZQOWIRONGUKHSHANLCMXHYJKDDXLYPM");

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
    msg.setTimeStamp(0.111754339168);
    msg.setSource(36969U);
    msg.setSourceEntity(211U);
    msg.setDestination(51457U);
    msg.setDestinationEntity(174U);
    msg.timeout = 60928U;
    msg.lat = 0.323421934188;
    msg.lon = 0.803011650132;
    msg.speed = 0.0518009071963;
    msg.speed_units = 130U;
    msg.custom.assign("ZHZOMYIFKAWLOEUNITXRLPYLGDVCZSAAHRDMJE");

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
    msg.setTimeStamp(0.0203076399305);
    msg.setSource(26223U);
    msg.setSourceEntity(20U);
    msg.setDestination(1922U);
    msg.setDestinationEntity(234U);
    msg.lat = 0.2048439229;
    msg.lon = 0.325768769599;
    msg.z = 0.0496263377356;
    msg.z_units = 153U;
    msg.radius = 0.996611180237;
    msg.duration = 64995U;
    msg.speed = 0.25831524425;
    msg.speed_units = 76U;
    msg.popup_period = 58424U;
    msg.popup_duration = 2752U;
    msg.flags = 104U;
    msg.custom.assign("CQUNXWLACBHAZGGYPOPHFJCKSRLBBTXOASGXZNXFAZTFRTHHQVSLNQQQYRFBKGYIWKCKVKHEFVWBVUDIFAPJODGIHJSYMKJDK");

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
    msg.setTimeStamp(0.45397815928);
    msg.setSource(13886U);
    msg.setSourceEntity(188U);
    msg.setDestination(42394U);
    msg.setDestinationEntity(18U);
    msg.lat = 0.565018269961;
    msg.lon = 0.58694312163;
    msg.z = 0.268969621081;
    msg.z_units = 237U;
    msg.radius = 0.524818953853;
    msg.duration = 25783U;
    msg.speed = 0.030248730378;
    msg.speed_units = 44U;
    msg.popup_period = 59693U;
    msg.popup_duration = 57962U;
    msg.flags = 209U;
    msg.custom.assign("BLWDIYGMUKBWDUEESDSISFP");

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
    msg.setTimeStamp(0.3526428369);
    msg.setSource(53207U);
    msg.setSourceEntity(18U);
    msg.setDestination(37111U);
    msg.setDestinationEntity(108U);
    msg.lat = 0.0443617019517;
    msg.lon = 0.175096919713;
    msg.z = 0.43763121732;
    msg.z_units = 201U;
    msg.radius = 0.826012975566;
    msg.duration = 26160U;
    msg.speed = 0.00268208831724;
    msg.speed_units = 184U;
    msg.popup_period = 11107U;
    msg.popup_duration = 57732U;
    msg.flags = 72U;
    msg.custom.assign("GYDGPFZRQNLTBWMJJYVMEPUYOCJMFNAKSGJYMAMOAEJFCRHROPWGKLBBVVIXHRUZNXZQKCKSNHKPLAQTMSCOTUTHIQANCXGXHGQWQM");

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
    msg.setTimeStamp(0.440657189289);
    msg.setSource(27231U);
    msg.setSourceEntity(110U);
    msg.setDestination(7291U);
    msg.setDestinationEntity(107U);
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("VALIETVPALOKHHYPZITURQFHUOZMDKTNXKSUVXCRLCGMZKTXTASVWFWJYLPPTHXNBQNWQFZKOKUNWRRXCYRSXNJQVDDDOXGVAJCIBLCUJHJYPWFEQESAEHYJPIZHCCFUYTLISIGTELKRATADWFXDQNOOBKBFBWRJMMJSAXLFUQEPWNB");
    IMC::RowsCoverage tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.799041113662;
    tmp_tmp_msg_0_0.lon = 0.456649791351;
    tmp_tmp_msg_0_0.z = 0.568988247712;
    tmp_tmp_msg_0_0.z_units = 44U;
    tmp_tmp_msg_0_0.speed = 0.144945503196;
    tmp_tmp_msg_0_0.speed_units = 105U;
    tmp_tmp_msg_0_0.bearing = 0.80623758115;
    tmp_tmp_msg_0_0.cross_angle = 0.793269594913;
    tmp_tmp_msg_0_0.width = 0.27005243585;
    tmp_tmp_msg_0_0.length = 0.150954774287;
    tmp_tmp_msg_0_0.coff = 113U;
    tmp_tmp_msg_0_0.angaperture = 0.554691333782;
    tmp_tmp_msg_0_0.range = 35651U;
    tmp_tmp_msg_0_0.overlap = 132U;
    tmp_tmp_msg_0_0.flags = 64U;
    tmp_tmp_msg_0_0.custom.assign("NYOXSIJZTWKBNQYGPPNRBKPKUZWOLPEIXKFEEQGXDMJSTHATQTKWBRJOKAISJRDXFIYRVCTVKYLAWYLCHBHIUAGCIQUELZVJOCPOQQIFFGASQSFVNLTNCGJNVOUOUMHYLCYRQPGZEWMUTNAVWFKVOXVBWLKTMZZMAHQT");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::ControlParcel tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.p = 0.298641058363;
    tmp_tmp_msg_0_1.i = 0.682448827308;
    tmp_tmp_msg_0_1.d = 0.255204051661;
    tmp_tmp_msg_0_1.a = 0.947805041502;
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
    msg.setTimeStamp(0.692949035142);
    msg.setSource(61588U);
    msg.setSourceEntity(227U);
    msg.setDestination(10289U);
    msg.setDestinationEntity(58U);
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("PXSIKTSAREZHSZDGPGWHDROWBXKQRNRWQVNCATODULUFGBRLYMNHITCTPXWVPPQFYLUMIQXYOVHEJJYBEIZHUNZNDOGXICJCTXKADOWIGVLNMHJJEADMULAXSKXFYTYKJQIXDVBWEIGQUAJKZEYZQHBZQKMFKGAOQEPSBFPWDUBKHZULAHARCSQEL");
    IMC::FormationPlanExecution tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.group_name.assign("VLQEDZTVOPAXOFEAHKJCPLXNDMRESPIJNNCYWVCSUJWUDDYWIVDATRPZVDTPOJWTIGVUINWFQAIKHMIWTQBSCHNVXZGDAZKGOMEAQYFUBJOHGBAQHCLYFCMJCGQBFCHLRXLOGVRZXEKQAKWKF");
    tmp_tmp_msg_0_0.formation_name.assign("CNHIGQIDDXCTNZTDWIWBGISJLEKPGVSQSOCWYUPHTZNRKEQHOFCHQFESNJ");
    tmp_tmp_msg_0_0.plan_id.assign("IDGWJQKFASUKPLMNULQCRPQOHAHSUBECMOPBDGQQAITVSMMGRWRJBDREMXGZZWZKTUCGYVYUHNIBFFSFJUMXQELHBSHWGODBIEEOLLEZVOQCSPBRFYVJJSRUUKGYZLINRYDQGNAZATNOKOBYWHPZCDK");
    tmp_tmp_msg_0_0.description.assign("WCNEAAEBSNSMPBDJPELHJAMSHIZWFICXWIEKYCRUCMWXBJIQUOLVWUIUWMATZYGDGYAOOBYRMFOTKIVJXRQRVQGECMYRQAKOTMYRONIATQDGBWPDSRDHWUVKTODMKVHCLMECQDXZUZYXRLVOHPKSSKUZFGLNVDN");
    tmp_tmp_msg_0_0.leader_speed = 0.343861667271;
    tmp_tmp_msg_0_0.leader_bank_lim = 0.692729459566;
    tmp_tmp_msg_0_0.pos_sim_err_lim = 0.770536737937;
    tmp_tmp_msg_0_0.pos_sim_err_wrn = 0.425777454851;
    tmp_tmp_msg_0_0.pos_sim_err_timeout = 17025U;
    tmp_tmp_msg_0_0.converg_max = 0.809612129236;
    tmp_tmp_msg_0_0.converg_timeout = 7043U;
    tmp_tmp_msg_0_0.comms_timeout = 1561U;
    tmp_tmp_msg_0_0.turb_lim = 0.779182829715;
    tmp_tmp_msg_0_0.custom.assign("QHRYYTHIZCKYFZHNEEGCEXRUPWFHAXIVZKSFBEJCQZSXEZQJVQMDQCGMBNAXNWYTMYSVQOUESOAQFNGUTPMRTKXGNXBJHFLBPJCYALSRFUNELGLVBXAIPTNRAIVSPBOVPVAOWBHLPCKWSORMAWWJTTMAWOXTUCZOWNWGEBKTLYSZGDBLRDDVRKHUQDHXICSNGIYD");
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
    msg.setTimeStamp(0.441113860175);
    msg.setSource(59289U);
    msg.setSourceEntity(25U);
    msg.setDestination(27727U);
    msg.setDestinationEntity(69U);
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("OPCZGHCXQKUYSTTAEGNUIWJYUXSGZHXRWCNYJIVTDTEJHGMJPIIVAISXYSXOZXHLQVAZKOUPZHJAXXENQFXGUPMDIWHLKQGLL");
    IMC::CompassCalibration tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeout = 38866U;
    tmp_tmp_msg_0_0.lat = 0.264132730184;
    tmp_tmp_msg_0_0.lon = 0.455522374338;
    tmp_tmp_msg_0_0.z = 0.457549033167;
    tmp_tmp_msg_0_0.z_units = 225U;
    tmp_tmp_msg_0_0.pitch = 0.343665127951;
    tmp_tmp_msg_0_0.amplitude = 0.902753700579;
    tmp_tmp_msg_0_0.duration = 65060U;
    tmp_tmp_msg_0_0.speed = 0.509996095019;
    tmp_tmp_msg_0_0.speed_units = 119U;
    tmp_tmp_msg_0_0.radius = 0.261592280779;
    tmp_tmp_msg_0_0.direction = 153U;
    tmp_tmp_msg_0_0.custom.assign("AFNXGFWYQVAFGJDPUNZQPOGXIOLCEMTWTJUPBXLXNNXKHZABYMYCWQGCJQDERJSIYAOYREHKPDLGIQWCFBEGNVLOVJBIYPNUJBNEJJRVXPANWYSVITIQD");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::FormationEvaluation tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.type = 17U;
    tmp_tmp_msg_0_1.op = 54U;
    tmp_tmp_msg_0_1.err_mean = 0.895742339187;
    tmp_tmp_msg_0_1.dist_min_abs = 0.658816762782;
    tmp_tmp_msg_0_1.dist_min_mean = 0.553884771964;
    tmp_tmp_msg_0_1.roll_rate_mean = 0.603019067634;
    tmp_tmp_msg_0_1.time = 0.327868940845;
    IMC::FormationControlParams tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.action = 123U;
    tmp_tmp_tmp_msg_0_1_0.lon_gain = 0.693966145943;
    tmp_tmp_tmp_msg_0_1_0.lat_gain = 0.158468223369;
    tmp_tmp_tmp_msg_0_1_0.bond_thick = 0.403348109685;
    tmp_tmp_tmp_msg_0_1_0.lead_gain = 0.844094695127;
    tmp_tmp_tmp_msg_0_1_0.deconfl_gain = 0.73982848736;
    tmp_tmp_tmp_msg_0_1_0.accel_switch_gain = 0.207147113261;
    tmp_tmp_tmp_msg_0_1_0.safe_dist = 0.855041096512;
    tmp_tmp_tmp_msg_0_1_0.deconflict_offset = 0.73856362944;
    tmp_tmp_tmp_msg_0_1_0.accel_safe_margin = 0.97315758856;
    tmp_tmp_tmp_msg_0_1_0.accel_lim_x = 0.905856668694;
    tmp_tmp_msg_0_1.controlparams.set(tmp_tmp_tmp_msg_0_1_0);
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    IMC::PathPoint tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.x = 0.247266681579;
    tmp_tmp_msg_0_2.y = 0.758153456029;
    tmp_tmp_msg_0_2.z = 0.757022175165;
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
    msg.setTimeStamp(0.460449207274);
    msg.setSource(19596U);
    msg.setSourceEntity(31U);
    msg.setDestination(11237U);
    msg.setDestinationEntity(164U);
    msg.timeout = 17161U;
    msg.lat = 0.815669321373;
    msg.lon = 0.780331869469;
    msg.z = 0.961939222794;
    msg.z_units = 198U;
    msg.speed = 0.336238311894;
    msg.speed_units = 164U;
    msg.bearing = 0.547588946485;
    msg.width = 0.708905506902;
    msg.direction = 157U;
    msg.custom.assign("JGTGAWPZMLPLSGNNXXPCPMKYKZFCPLZKHCENQESVBNIXDFAZEWOMJQHVZMWYIBB");

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
    msg.setTimeStamp(0.359732052936);
    msg.setSource(9313U);
    msg.setSourceEntity(10U);
    msg.setDestination(45248U);
    msg.setDestinationEntity(183U);
    msg.timeout = 19445U;
    msg.lat = 0.78210960748;
    msg.lon = 0.527140132181;
    msg.z = 0.355398532729;
    msg.z_units = 110U;
    msg.speed = 0.886936781974;
    msg.speed_units = 101U;
    msg.bearing = 0.0887607578895;
    msg.width = 0.737359708341;
    msg.direction = 191U;
    msg.custom.assign("WUDHFGCTDFIODPU");

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
    msg.setTimeStamp(0.226046407115);
    msg.setSource(37558U);
    msg.setSourceEntity(236U);
    msg.setDestination(55134U);
    msg.setDestinationEntity(45U);
    msg.timeout = 44513U;
    msg.lat = 0.015444542056;
    msg.lon = 0.75968077032;
    msg.z = 0.351929384308;
    msg.z_units = 65U;
    msg.speed = 0.380305320958;
    msg.speed_units = 232U;
    msg.bearing = 0.919777776004;
    msg.width = 0.575870211076;
    msg.direction = 100U;
    msg.custom.assign("EBZARNIOJKZGXTYFMHPOHEHQXXNCRYNPGUSLBFJRBJKUSFAB");

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
    msg.setTimeStamp(0.508686118123);
    msg.setSource(45067U);
    msg.setSourceEntity(72U);
    msg.setDestination(27966U);
    msg.setDestinationEntity(137U);
    msg.op_mode = 246U;
    msg.error_count = 178U;
    msg.error_ents.assign("ANDACNVWEBWKOPZJWUBROZQKTLSJECSTJZ");
    msg.maneuver_type = 23796U;
    msg.maneuver_stime = 0.663245875566;
    msg.maneuver_eta = 1134U;
    msg.control_loops = 1272010155U;
    msg.flags = 212U;
    msg.last_error.assign("SOSBGVAPTJFGCIZYQHKQTMKPIXANZJAQCDZPQQKOWRTOWJGCZDFSGPVYIXD");
    msg.last_error_time = 0.881133345651;

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
    msg.setTimeStamp(0.638906670135);
    msg.setSource(16312U);
    msg.setSourceEntity(95U);
    msg.setDestination(2547U);
    msg.setDestinationEntity(231U);
    msg.op_mode = 64U;
    msg.error_count = 234U;
    msg.error_ents.assign("PIRQXEWCWIHPXVUWTDBVENNUCOBOWGGQPRECKKWDIQSLLWTCIUEXADAASWAUSOBLMXYMZKXVLYCXUNYJNURQJXHZZTFMYDFSRBLNPAUJKPMRPMFJLCJLFIDDLTNKPTZFRABEMEZTVGXITBWCPTJYVQKUHKNSO");
    msg.maneuver_type = 8376U;
    msg.maneuver_stime = 0.501845802826;
    msg.maneuver_eta = 181U;
    msg.control_loops = 2917766725U;
    msg.flags = 103U;
    msg.last_error.assign("YNZQAIRVFEAIWHLGUHKDQZBCTMIABWSTJNXDLPEWLOSPUMFGNLZAKCMMBBYOSUQSMFPCKSYXOJJVLWJZLCJTTUOGYDQTTUSQEEYGSWALXEMHAQHRYTUGNSGNMRPDVKKVBCEGPDCHAUOLEOCXCKNXRZVJRRDDZYAVWPFPXOSWUMBXIIFCXZXOWNZUEKIDFVXYNQVRRMHJLWOADOPBCEWZDJHJYHLKBVKPQGJHHTFFVT");
    msg.last_error_time = 0.187343765405;

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
    msg.setTimeStamp(0.276081478044);
    msg.setSource(50002U);
    msg.setSourceEntity(196U);
    msg.setDestination(48897U);
    msg.setDestinationEntity(180U);
    msg.op_mode = 90U;
    msg.error_count = 122U;
    msg.error_ents.assign("ZQYMOBFGCOMEFNIWCVUKHERPPCFYOAQIBFLXBJRGMUEGTRVTVARWDTGQEZDAYNPOURMEBGIEJHVDDKORPJNCNEAHNNMKHZYNLZLOLFDVUPWJFPUVXMEGUUWVTPSNYIEHGOWLFPSDCQSBSOSYWZVJUJPTNAYHQEHIZVQQWRKXKJIUZKHJTMCQHHMIYRGYGOLZYAIZXBJLQTAXTFWLMBOUPXXNXDSWLQKZMATBFXCSCWDICBIGBSRS");
    msg.maneuver_type = 36851U;
    msg.maneuver_stime = 0.54504037632;
    msg.maneuver_eta = 33635U;
    msg.control_loops = 2109628690U;
    msg.flags = 202U;
    msg.last_error.assign("UWFHQPNWFCMPDNAROPRJTJDCT");
    msg.last_error_time = 0.482437739657;

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
    msg.setTimeStamp(0.982183022035);
    msg.setSource(3554U);
    msg.setSourceEntity(103U);
    msg.setDestination(21394U);
    msg.setDestinationEntity(20U);
    msg.type = 58U;
    msg.request_id = 30425U;
    msg.command = 71U;
    IMC::IdleManeuver tmp_msg_0;
    tmp_msg_0.duration = 21430U;
    tmp_msg_0.custom.assign("NXHPLNBSWWALBNNKPBVNUORYCGXPQHDXNIHAAIEPMOZHKCGEKVSDOSUMQWEQYEDQWQVJCAAQPLXGXHPXTZXTVMMUILKFQLTVKESVRLYFCJJK");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 9634U;
    msg.info.assign("MLESTXPWLKPGDMEBXOOXSULPIBQVGZHSZZBJDNUQJBE");

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
    msg.setTimeStamp(0.891918673933);
    msg.setSource(21589U);
    msg.setSourceEntity(107U);
    msg.setDestination(57476U);
    msg.setDestinationEntity(134U);
    msg.type = 125U;
    msg.request_id = 30224U;
    msg.command = 72U;
    IMC::Magnetometer tmp_msg_0;
    tmp_msg_0.timeout = 4631U;
    tmp_msg_0.lat = 0.728711992078;
    tmp_msg_0.lon = 0.652120062339;
    tmp_msg_0.z = 0.665346943569;
    tmp_msg_0.z_units = 13U;
    tmp_msg_0.speed = 0.211553650917;
    tmp_msg_0.speed_units = 144U;
    tmp_msg_0.bearing = 0.773189315346;
    tmp_msg_0.width = 0.392370400716;
    tmp_msg_0.direction = 206U;
    tmp_msg_0.custom.assign("UXUKTJJUQONZIBRCCKDVIYEOPEHOSAESMIYRZDBVRFHEGAPMPZIEJEZNTJMQLSOUCAFCHJTSCRVVDOTNWISZCPULRYKEHZAJEBKGRQFDWXIHJFOKXBTLHNPMWVCJFIPZVQZKQSDQPTBHIBSRIHCDAHWGFBOWGKYCQOKNORLPSRIXHNMBKXGMZVXJDWYTMYAUAXDTXQFBAKUGTLVALND");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 7043U;
    msg.info.assign("ZMHQPLGBAHUYKSNYNPSGAZYNUNHRZRJXXMGSSOBVJROIWYNWQUDNFKBVNQILOEYLYHAQPAKCHRKRCQOBVBGWZJYOVJKOFIJGFWMTPMNYPEPOAAFTVUUWMEXDYBHZQABIEFVIIAMRRSTLMKYCUMWSCIHVOZJXFFBRDNTTWVSRAGWDLBDTCMHWEEVCWLLGOHUNVKXFJRCJZLIGTPEPSXFCZGQEUQQJCFOEX");

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
    msg.setTimeStamp(0.863602991608);
    msg.setSource(5269U);
    msg.setSourceEntity(174U);
    msg.setDestination(33470U);
    msg.setDestinationEntity(81U);
    msg.type = 209U;
    msg.request_id = 43225U;
    msg.command = 23U;
    IMC::FollowReference tmp_msg_0;
    tmp_msg_0.control_src = 65122U;
    tmp_msg_0.control_ent = 242U;
    tmp_msg_0.timeout = 0.836994427181;
    tmp_msg_0.loiter_radius = 0.584962504601;
    tmp_msg_0.altitude_interval = 0.045917772983;
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 33863U;
    msg.info.assign("TTIKYHALEHJLNXYARVMTGPYFFREIKXFMOOWUBZTZQSIMHBPOYDXAKVYFKOMKWHPAXVSDWDWILNBBNJBOFVQHCIWQJUDCLIUSDBKWRVEGVNTLXQJZQFKOGJPOZODMBCOHXVELULYKBGSZFCLPQCFATRPIQEAUJUSGXJAHCNMYZHAYSRIVDBYQRHVPZCKGEGZT");

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
    msg.setTimeStamp(0.230167050939);
    msg.setSource(36809U);
    msg.setSourceEntity(117U);
    msg.setDestination(41952U);
    msg.setDestinationEntity(162U);
    msg.command = 236U;
    msg.entities.assign("HEKRAVCNSDFYSBJLOQAKKXNRAPOBVRIZOULVEXODFKXQZUDZATA");

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
    msg.setTimeStamp(0.444926814694);
    msg.setSource(10992U);
    msg.setSourceEntity(50U);
    msg.setDestination(42109U);
    msg.setDestinationEntity(63U);
    msg.command = 158U;
    msg.entities.assign("OYETWJDPWRZBDSPTLXITQFHDFFYUKCIXYDLLBMSVKBGUWIPVDUKYGIUGQVJKPINOWYGOKRRNZJSGHZFPMVRUNLIHMXMMZXBDXWRNCFUVLNATWREYXTEBEZLGMCFQJFVXCRXVIBOYOLHEAAJNXWJOCSQPCBHUQFJUNYSTEFRBTSCJKIDMBSNTZTAZAHO");

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
    msg.setTimeStamp(0.0498450001814);
    msg.setSource(2780U);
    msg.setSourceEntity(127U);
    msg.setDestination(34959U);
    msg.setDestinationEntity(168U);
    msg.command = 246U;
    msg.entities.assign("APNSPEZIHGOQFAACMCFBMENJKDRLNXHIKADWBWXMYNQJWTKVM");

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
    msg.setTimeStamp(0.880916132017);
    msg.setSource(14171U);
    msg.setSourceEntity(78U);
    msg.setDestination(54593U);
    msg.setDestinationEntity(190U);
    msg.mcount = 108U;
    msg.mnames.assign("XMMYDIYVAYSBZVMLBUMIWXOOWXFZGXLYKMEBPNULBXDHPEIKANWARGFPYVJEWASDHJTKUBYWIASLUVWUMTOZGSHRNDPEUGSMFVUIJ");
    msg.ecount = 20U;
    msg.enames.assign("APKCHPRKYCFESTKWGUYQUVJRRSASQZMXOYPOQAAXOQNKKLDIVIRWYGWMQDFTGMFDJMVCKXXCPPEORGIBVDDJGIBEIWTPEGEPOCLZBFBMJICNSHZSWTFLYQQLRNEMDUIUVTBYXBTHDVKFJHFZNCOCWMUTJUSNVJHOBQHWZJUPDCSJHHMOBBMYUBQM");
    msg.ccount = 154U;
    msg.cnames.assign("SGZQUGEIEJRMVVZPTNTMQQBNOJQAFMCZPOUTMTSWDUSIGTLLSKJEFWEQVHHBURADEONPKDYLZYOVSKCDQIZJLXRFKTPEHIMCFMWGWUHBSHAPJMBEXFNNDXAYJNXLUDWFFPHHKANOGIEURBGDZWKMYPKQCTFRMOONJCSOEIWUXCUCOVZCFBPBSWARLHRHFRJDYEGOVWGYVZTGSNCDHPBJTKYTXQBILCPLVXVW");
    msg.last_error.assign("RAXGLMGKASQXPDNQPBAFNOWKDUFIQMVKGGSCUVYXWCIPYFAJVVUDYOEVZRJNEWHOKXKNADSFBULANLZHUPCZPBOIQREAJVMFCBQHIQQKTEAEJLBJLYGDYKLMOQDYRFJSPTUTJZSMLAIDCMGERSDTJYIBELSWZICBPZFNOKOYNUBSWXEZGHRVMSTWCOKCTH");
    msg.last_error_time = 0.414294827961;

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
    msg.setTimeStamp(0.527128233388);
    msg.setSource(58923U);
    msg.setSourceEntity(42U);
    msg.setDestination(15825U);
    msg.setDestinationEntity(111U);
    msg.mcount = 234U;
    msg.mnames.assign("AWENGYTUTJYRUDNTPQPLKRJORMSYNNLUNHOCWJUKDTFOEIHUKVVPQKVSXCFUAQLICAKBWLOAXFBNBFJWLDEKECNSCBIZGXREWGLBZDRMLFZJQJRZEGDDTXFGTXEDZRWGXJGLECDRMAVRUMIPSHWIWDHMMMBSQPVGQQHZEJTKJFNLBHVIYATQNPXSOYHBMUOKUOVYAATOJGILBVSAQTKKQSFIWEZYZMIPSSVXRANVHBHYYZIHMXCDYOUCPPOXZF");
    msg.ecount = 43U;
    msg.enames.assign("UTURDXMDFHOIENPKDEFSQHEVRUMXACDHCWIYLBGZERNIOZQOYHIJZBLMXBVGKANVWHCZUFPLKJMDWJOKTBXRBIPSYQQNSJRVVGBVBPLRHFTLCQKZCDCFLTDGTWZZTAQWFUKABAMQUDKFHAURPTMMFEYWGSCTONGCNLJKGWTCANJISAROWQBYJESUMYGPPELYVRDZFXXJMLYQWXIV");
    msg.ccount = 232U;
    msg.cnames.assign("XWEHDYLMOHNZJAUYNDIFGRRZAMRZTEZPMEKPLNFGEJZNTSSFEIHLWXXPULJRSUCUUVCTAQEFHAQWEVWGKKXVMBHNFKACKYJXCGPQQZRMDQLQUOPTISLDPDWBUCJJRIRPAYFMNHWNVZBYLLPFO");
    msg.last_error.assign("XTICGFIPCAAVVDXLHRIUDHBQAYHOECGTLQIJUFQNPCFYCOQMRWSTAGQKCEHEBKNKBAZPJRKIHFRI");
    msg.last_error_time = 0.238618857074;

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
    msg.setTimeStamp(0.315290861105);
    msg.setSource(10350U);
    msg.setSourceEntity(14U);
    msg.setDestination(26163U);
    msg.setDestinationEntity(98U);
    msg.mcount = 246U;
    msg.mnames.assign("NKZRROZKROJIMPSQEGZDOMBVWTTPUWJYZDXOIHDZTIVNXN");
    msg.ecount = 95U;
    msg.enames.assign("YTTAXFHQRMFJWEWSSIIOADLRDHBWOSZBBGQKVARZUHTVZVPWRQPTGPNKKXBOJYGEOUBSWAAXSRNTKXRIZHECKSRTWUXPKRILOUHTABQCCCLJIOIDYRISQQENDAMKLJMHFJFNBZUCPLILPBLOPOMUYUFESDVDDAWPYZOYGZZGWXHJQLXCUIHCFGLNGSGVAXJRTDUWVGKCTGEPILHJQXKJMY");
    msg.ccount = 27U;
    msg.cnames.assign("DWKPMOTTUJCNKPCCGSBRNDNXCOUUGUSBBFPZGUHTYSBSAQOCNAXSSNBHZHZNWHLQHBXIHNGFORPTDEOZAJIEVPBSVJMAGKEIWWKVMYYIKKJCXWKJMVVEWPXTDWVLKNHQRFDGRFQMMVBWQIAVJDXVBYQFCJPEYJGOORCWMIKFXYGTQZXAPGLBUZRCTETLLRGLEUDASRZQVCIFMEZQ");
    msg.last_error.assign("TNWQRPMOYEYBTGFSAPNIQCJVACEREAYWIYDRBBTIHPXDIHDZOQLZPNZKMFUJELRGKRAALNDCPFSDTFCVINVEITZAMJYKWQK");
    msg.last_error_time = 0.729601451151;

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
    msg.setTimeStamp(0.102147986264);
    msg.setSource(18380U);
    msg.setSourceEntity(227U);
    msg.setDestination(22651U);
    msg.setDestinationEntity(158U);
    msg.mask = 7U;
    msg.max_depth = 0.234089884489;
    msg.min_altitude = 0.746671957409;
    msg.max_altitude = 0.0376244959381;
    msg.min_speed = 0.1625106817;
    msg.max_speed = 0.884573203154;
    msg.max_vrate = 0.894631627703;
    msg.lat = 0.957133461791;
    msg.lon = 0.370765195541;
    msg.orientation = 0.356806161383;
    msg.width = 0.602943709276;
    msg.length = 0.156239069156;

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
    msg.setTimeStamp(0.462714881154);
    msg.setSource(12753U);
    msg.setSourceEntity(50U);
    msg.setDestination(8893U);
    msg.setDestinationEntity(201U);
    msg.mask = 244U;
    msg.max_depth = 0.348766211802;
    msg.min_altitude = 0.341501095282;
    msg.max_altitude = 0.698866966417;
    msg.min_speed = 0.988406912129;
    msg.max_speed = 0.413840351873;
    msg.max_vrate = 0.934611947092;
    msg.lat = 0.214196195323;
    msg.lon = 0.189676678918;
    msg.orientation = 0.0553848145327;
    msg.width = 0.971081214444;
    msg.length = 0.939938323288;

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
    msg.setTimeStamp(0.442604324032);
    msg.setSource(4213U);
    msg.setSourceEntity(142U);
    msg.setDestination(53277U);
    msg.setDestinationEntity(165U);
    msg.mask = 176U;
    msg.max_depth = 0.10742680099;
    msg.min_altitude = 0.864360929779;
    msg.max_altitude = 0.469706637345;
    msg.min_speed = 0.0972657450826;
    msg.max_speed = 0.960292092282;
    msg.max_vrate = 0.693511879488;
    msg.lat = 0.981033335691;
    msg.lon = 0.909959826391;
    msg.orientation = 0.947710617864;
    msg.width = 0.88213492734;
    msg.length = 0.454214768051;

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
    msg.setTimeStamp(0.515333913098);
    msg.setSource(17867U);
    msg.setSourceEntity(18U);
    msg.setDestination(6998U);
    msg.setDestinationEntity(186U);

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
    msg.setTimeStamp(0.0387397593022);
    msg.setSource(56288U);
    msg.setSourceEntity(217U);
    msg.setDestination(59106U);
    msg.setDestinationEntity(27U);

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
    msg.setTimeStamp(0.0651670852975);
    msg.setSource(24651U);
    msg.setSourceEntity(171U);
    msg.setDestination(23792U);
    msg.setDestinationEntity(191U);

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
    msg.setTimeStamp(0.0740113557157);
    msg.setSource(19302U);
    msg.setSourceEntity(32U);
    msg.setDestination(100U);
    msg.setDestinationEntity(64U);
    msg.duration = 15636U;

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
    msg.setTimeStamp(0.823165145918);
    msg.setSource(17509U);
    msg.setSourceEntity(193U);
    msg.setDestination(39288U);
    msg.setDestinationEntity(41U);
    msg.duration = 37413U;

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
    msg.setTimeStamp(0.335522586555);
    msg.setSource(46112U);
    msg.setSourceEntity(223U);
    msg.setDestination(1851U);
    msg.setDestinationEntity(245U);
    msg.duration = 20481U;

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
    msg.setTimeStamp(0.105138592861);
    msg.setSource(59170U);
    msg.setSourceEntity(85U);
    msg.setDestination(29547U);
    msg.setDestinationEntity(66U);
    msg.enable = 187U;
    msg.mask = 464502026U;
    msg.scope_ref = 2792093144U;

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
    msg.setTimeStamp(0.98355295609);
    msg.setSource(3505U);
    msg.setSourceEntity(163U);
    msg.setDestination(18063U);
    msg.setDestinationEntity(2U);
    msg.enable = 241U;
    msg.mask = 882287266U;
    msg.scope_ref = 183292397U;

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
    msg.setTimeStamp(0.618800367758);
    msg.setSource(19031U);
    msg.setSourceEntity(3U);
    msg.setDestination(18042U);
    msg.setDestinationEntity(49U);
    msg.enable = 100U;
    msg.mask = 2445905956U;
    msg.scope_ref = 2368727870U;

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
    msg.setTimeStamp(0.632203708695);
    msg.setSource(64088U);
    msg.setSourceEntity(173U);
    msg.setDestination(50476U);
    msg.setDestinationEntity(17U);
    msg.medium = 145U;

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
    msg.setTimeStamp(0.893036768681);
    msg.setSource(40737U);
    msg.setSourceEntity(160U);
    msg.setDestination(35U);
    msg.setDestinationEntity(64U);
    msg.medium = 229U;

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
    msg.setTimeStamp(0.414741789029);
    msg.setSource(10509U);
    msg.setSourceEntity(43U);
    msg.setDestination(18539U);
    msg.setDestinationEntity(173U);
    msg.medium = 157U;

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
    msg.setTimeStamp(0.335898576834);
    msg.setSource(24284U);
    msg.setSourceEntity(180U);
    msg.setDestination(12561U);
    msg.setDestinationEntity(238U);
    msg.value = 0.889989653279;
    msg.type = 21U;

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
    msg.setTimeStamp(0.19731749155);
    msg.setSource(11292U);
    msg.setSourceEntity(152U);
    msg.setDestination(45466U);
    msg.setDestinationEntity(108U);
    msg.value = 0.818750299531;
    msg.type = 224U;

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
    msg.setTimeStamp(0.471392359543);
    msg.setSource(47042U);
    msg.setSourceEntity(163U);
    msg.setDestination(5273U);
    msg.setDestinationEntity(22U);
    msg.value = 0.294115296769;
    msg.type = 97U;

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
    msg.setTimeStamp(0.0669993573394);
    msg.setSource(33453U);
    msg.setSourceEntity(152U);
    msg.setDestination(30871U);
    msg.setDestinationEntity(128U);
    msg.possimerr = 0.0249736987057;
    msg.converg = 0.511447101649;
    msg.turbulence = 0.104766397966;
    msg.possimmon = 13U;
    msg.commmon = 74U;
    msg.convergmon = 245U;

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
    msg.setTimeStamp(0.97735659162);
    msg.setSource(15318U);
    msg.setSourceEntity(220U);
    msg.setDestination(10770U);
    msg.setDestinationEntity(155U);
    msg.possimerr = 0.83376257344;
    msg.converg = 0.19243111996;
    msg.turbulence = 0.325282085527;
    msg.possimmon = 143U;
    msg.commmon = 34U;
    msg.convergmon = 118U;

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
    msg.setTimeStamp(0.114213828138);
    msg.setSource(36171U);
    msg.setSourceEntity(164U);
    msg.setDestination(40297U);
    msg.setDestinationEntity(94U);
    msg.possimerr = 0.202108988162;
    msg.converg = 0.286997652342;
    msg.turbulence = 0.282579431013;
    msg.possimmon = 58U;
    msg.commmon = 56U;
    msg.convergmon = 199U;

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
    msg.setTimeStamp(0.826664970804);
    msg.setSource(1574U);
    msg.setSourceEntity(161U);
    msg.setDestination(24075U);
    msg.setDestinationEntity(22U);
    msg.autonomy = 8U;
    msg.mode.assign("TVYJPEAGHNDBCJRWCFBDOMJJIEIKU");

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
    msg.setTimeStamp(0.139711926101);
    msg.setSource(11437U);
    msg.setSourceEntity(185U);
    msg.setDestination(54730U);
    msg.setDestinationEntity(58U);
    msg.autonomy = 132U;
    msg.mode.assign("ADTRSDRJTMFELIMVKXICXYXZHKQBVBPDHQATXMNQDHVUCWPREMDIXHWJOOIFCHJKQYFOVFCSFXIZCAJKCLPAJIMGGNNLSARJUOZODESLVGNWXPWHXYDGTBRTPOQMRCOWBIVHFVPLFSDWZQCXALEMEIGJQZGTDYORFLZSVYBNCGRMBLTSOHBUKGEBYNHZPKAQUYWVOSYGFISBKCKNKEQYVUPXPHLUUJUR");

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
    msg.setTimeStamp(0.93216300909);
    msg.setSource(4505U);
    msg.setSourceEntity(48U);
    msg.setDestination(24563U);
    msg.setDestinationEntity(188U);
    msg.autonomy = 31U;
    msg.mode.assign("TKJMBRLMROKDURHWABFGSVORIKIBQPTHIDFTWCUQJMLEQLKBFAVSKZQYSWHAUMYUXDSNFLCLPNDAXNPGFZOSO");

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
    msg.setTimeStamp(0.270812599195);
    msg.setSource(61471U);
    msg.setSourceEntity(83U);
    msg.setDestination(39889U);
    msg.setDestinationEntity(254U);
    msg.type = 166U;
    msg.op = 110U;
    msg.possimerr = 0.49746893166;
    msg.converg = 0.274952698216;
    msg.turbulence = 0.220807427595;
    msg.possimmon = 88U;
    msg.commmon = 206U;
    msg.convergmon = 187U;

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
    msg.setTimeStamp(0.839838914724);
    msg.setSource(2913U);
    msg.setSourceEntity(246U);
    msg.setDestination(29158U);
    msg.setDestinationEntity(216U);
    msg.type = 87U;
    msg.op = 96U;
    msg.possimerr = 0.141673476112;
    msg.converg = 0.428374120162;
    msg.turbulence = 0.0189042597609;
    msg.possimmon = 235U;
    msg.commmon = 67U;
    msg.convergmon = 13U;

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
    msg.setTimeStamp(0.022863577156);
    msg.setSource(56574U);
    msg.setSourceEntity(251U);
    msg.setDestination(47608U);
    msg.setDestinationEntity(6U);
    msg.type = 223U;
    msg.op = 191U;
    msg.possimerr = 0.2924428451;
    msg.converg = 0.0906213740896;
    msg.turbulence = 0.70164832076;
    msg.possimmon = 138U;
    msg.commmon = 6U;
    msg.convergmon = 185U;

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
    msg.setTimeStamp(0.457318149791);
    msg.setSource(28327U);
    msg.setSourceEntity(21U);
    msg.setDestination(44165U);
    msg.setDestinationEntity(189U);
    msg.op = 252U;
    msg.comm_interface = 137U;
    msg.period = 3293U;
    msg.sys_dst.assign("YARAVIHFTCYUOJFPSROAHAUEZAIMFSUNUEHMLLZRYVKKMIPWEOOYIELAV");

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
    msg.setTimeStamp(0.779069784333);
    msg.setSource(44319U);
    msg.setSourceEntity(238U);
    msg.setDestination(60016U);
    msg.setDestinationEntity(124U);
    msg.op = 186U;
    msg.comm_interface = 83U;
    msg.period = 9189U;
    msg.sys_dst.assign("DCCFPENQZGEFUMGQNMPSJKZDYTOVTLGUSJLABFYLOOVSIRYFWRTKOFUXZLXNCMOAVYRZSCUADNXMGYBSRYQQLJPAMOMLDIWCKLSHGUAIAXLIIFSHJNHLSEPBRVXGXWVTDJANQJRMRKLDUVKVBBJCQREKVHUCIZBZJTCGOQIZTYCOKYHIMUHTWVMBPCZBAED");

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
    msg.setTimeStamp(0.428042204171);
    msg.setSource(42590U);
    msg.setSourceEntity(232U);
    msg.setDestination(48213U);
    msg.setDestinationEntity(131U);
    msg.op = 154U;
    msg.comm_interface = 146U;
    msg.period = 11922U;
    msg.sys_dst.assign("HNABAYCPDPTMUWFLKPCZTHYYGCAWOSSIONIRQDVIMJQGQJTJFKGREUUEJNXKDFMASLMTWZQVLKEEQUTPBCOSNKYSROKMIHJKLYRLGXLEDAXNTAGJWRZTHHTOWPYWMEBPCLJZQDHFZBRMTMRFOMDHAXDNJHJLYWIQBWXXBPDVWKDSDUCQGFXOVJINOLSNGAGZRGBVPEUPCZBTSFKFAV");

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
    msg.setTimeStamp(0.0990231391842);
    msg.setSource(41281U);
    msg.setSourceEntity(130U);
    msg.setDestination(57013U);
    msg.setDestinationEntity(96U);
    msg.stime = 65816454U;
    msg.latitude = 0.817164781052;
    msg.longitude = 0.469241143908;
    msg.altitude = 483U;
    msg.depth = 54281U;
    msg.heading = 61470U;
    msg.speed = -21787;
    msg.fuel = -110;
    msg.exec_state = 24;
    msg.plan_checksum = 13175U;

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
    msg.setTimeStamp(0.0932138677417);
    msg.setSource(9744U);
    msg.setSourceEntity(97U);
    msg.setDestination(27836U);
    msg.setDestinationEntity(88U);
    msg.stime = 3871009121U;
    msg.latitude = 0.754205008001;
    msg.longitude = 0.552092580434;
    msg.altitude = 29009U;
    msg.depth = 10548U;
    msg.heading = 21252U;
    msg.speed = 31108;
    msg.fuel = -113;
    msg.exec_state = 89;
    msg.plan_checksum = 62978U;

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
    msg.setTimeStamp(0.107851162345);
    msg.setSource(20374U);
    msg.setSourceEntity(62U);
    msg.setDestination(33963U);
    msg.setDestinationEntity(73U);
    msg.stime = 3681023668U;
    msg.latitude = 0.124672669394;
    msg.longitude = 0.755701594399;
    msg.altitude = 32396U;
    msg.depth = 24309U;
    msg.heading = 47626U;
    msg.speed = -22425;
    msg.fuel = 65;
    msg.exec_state = -21;
    msg.plan_checksum = 51858U;

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
    msg.setTimeStamp(0.128080941831);
    msg.setSource(55175U);
    msg.setSourceEntity(7U);
    msg.setDestination(55221U);
    msg.setDestinationEntity(189U);
    msg.req_id = 47176U;
    msg.comm_mean = 175U;
    msg.destination.assign("OMPDXUDSNXY");
    msg.deadline = 0.473515534818;
    msg.range = 0.514526606663;
    msg.data_mode = 113U;
    IMC::TrexOperation tmp_msg_0;
    tmp_msg_0.op = 28U;
    tmp_msg_0.goal_id.assign("DJYIVBCNSVFQYLVHLUTGNOOMNMCEMONBIAVTDRUMONLXRQMFUWKVIGIGXTSGUSPEA");
    IMC::TrexToken tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeline.assign("QAXDYIGFCNZQIVTJNTNJPLVZNUPAZJZHANSKEGTRHJMPPNXKAIKGIBXDMRTQHOLOY");
    tmp_tmp_msg_0_0.predicate.assign("FIGITYMTQMYVKGRZPZSXVWRU");
    tmp_msg_0.token.set(tmp_tmp_msg_0_0);
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("TRTBFVBTNPRODJBEKXHMVGZWAUQNCTFCLNLMZLYBVKNLWKCYGWLSOXJHJSFAUPMDHZAMREIKQYTFFUUVZMRIKXZODXUROCKGJXYOKPRPHJPPTUWACKQLWDREWVYNIUYHYY");
    const char tmp_msg_1[] = {-44, 69, -52, 74, 77, -25, -25, 76, 89, -9, -91, -84, 45, 28, 48, -124, -59, 59, -2, -78, -92, -83, -77, 42, -98, -27, -93, 114, 64, -6, 60, 58, 95, -49, 13, -105};
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
    msg.setTimeStamp(0.532585303043);
    msg.setSource(48566U);
    msg.setSourceEntity(40U);
    msg.setDestination(31209U);
    msg.setDestinationEntity(206U);
    msg.req_id = 49958U;
    msg.comm_mean = 153U;
    msg.destination.assign("WDSHQDSMGQPLABMDYRQPXCQAVIDJOOFZYFGXQMBXURUWNFYIZTQUVWDCUEOEZNMKVAJUHNLBVSRTOWTELLWMPFZBBGRRQCUCSUPKGZFELRKWFFEIWKNXLIZXHXDAPSFXYGRXSWHPHULSNVBXKMN");
    msg.deadline = 0.907329102428;
    msg.range = 0.947252897335;
    msg.data_mode = 123U;
    IMC::Alignment tmp_msg_0;
    tmp_msg_0.timeout = 31545U;
    tmp_msg_0.lat = 0.868074451009;
    tmp_msg_0.lon = 0.508641024336;
    tmp_msg_0.speed = 0.437344825059;
    tmp_msg_0.speed_units = 240U;
    tmp_msg_0.custom.assign("KPNHVTEXINPHJDWHEJ");
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("YYDXFEQMVWPBETNCZBLUWJOMPQUYPSZUBUHESMDQMWCCGTGSRXEJTWCHVTVMJSBRGTFMBHZPWOERFVVSBCUKGOMSABJNRT");
    const char tmp_msg_1[] = {126, 40, -96, 93, 123, -36, 124, 61, 98, 45, 94, -112, 126, -35, 9, -31, -116, -97, 119, -119, -29, -62, 76, -43, -127, -45, -77, 78, -118, -72, 3, 9, 11, 64, -82, -110, 66, 92, 84, 120, -103, 29, -53, 0, -121, 94, 59, 25, -80, -125, 21, 106, -111, -114, -37, 4, -10, -117, 23, -49, -90, 95, -19, -105, 85, -87, -42, 9, -4, -84, -42, 3, -15, -122, 6, -14, 68, 84, -92, -98, -91, -73, -77, 68, 6, -92, -22, 111, -40, -82, -78, -102, -46, -1, -49, 19, -70, 0, -105, -48, 69, -116, 90, 112, -95, 1, -89, -103, -11, -63, 36, -104, -77, -121, 88, 121, 80, 9, -39, 11, -64};
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
    msg.setTimeStamp(0.407046345723);
    msg.setSource(31402U);
    msg.setSourceEntity(1U);
    msg.setDestination(14878U);
    msg.setDestinationEntity(142U);
    msg.req_id = 30076U;
    msg.comm_mean = 66U;
    msg.destination.assign("QZFGUXBKWWVACJUFJCBGYERLQLWMEWHEHPYJTHRSUJCITVUASNGFHHEAITSCYVQBTCUKRMDZDKSNYXKKIVXVDLDRDKAKWXPT");
    msg.deadline = 0.380626297983;
    msg.range = 0.281429621898;
    msg.data_mode = 143U;
    IMC::Throttle tmp_msg_0;
    tmp_msg_0.value = 0.845529000057;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("JGTNFVHMDJJWQJOAYDHRBSTZSWSPQOFTYNYJJPNTKCEGZRACOHQGMNEKKWCOMPXDLKLUZZRVEETQTXAVXYWCVUNOXCWNBVBPUKINWGJICTQFRHYXWDFUUXLQGOPIERPVIQORSHIMLHBQUHVJCSKJPVAGNHXSAAFCFRCMRZYZSSRPZUKMBGQDOHMSMZNXGAVDDKYWSJLUTGBBIBXIDGBIZWE");
    const char tmp_msg_1[] = {-82, 8, 23, -23, -114, 90, -51, -37, -74, -40, 109, 113, -123, -9, -84, -86, -26, -95, -57};
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
    msg.setTimeStamp(0.42228405992);
    msg.setSource(1133U);
    msg.setSourceEntity(126U);
    msg.setDestination(4206U);
    msg.setDestinationEntity(155U);
    msg.req_id = 11837U;
    msg.status = 212U;
    msg.range = 0.938199803002;
    msg.info.assign("WHNSJZIQFQFMALAYXFEQZPKTWRKVDMUXMGSXZKINKVRAGOCQMYSBNRDDVMGXHSDZGWBSLAOXSWHLLZUISSFUDBEUNNHTATKVCYXZITRJORIZPFFMBJJUBRTSDOHHPKPNQXLRCJJPTVLEAVEHJAGOTYIEOSIUGCAGXAOBFZLJVFWQWHLBGULTDTYEURVEAGIBNPCYKFYPIVKNOQIM");

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
    msg.setTimeStamp(0.803036903984);
    msg.setSource(58214U);
    msg.setSourceEntity(63U);
    msg.setDestination(18282U);
    msg.setDestinationEntity(43U);
    msg.req_id = 31177U;
    msg.status = 121U;
    msg.range = 0.75796641561;
    msg.info.assign("KPTDKGFMDKJMRMVTEBYDUYJRIRGGTOKNESRCHQVAPGXHBKSWHGJKTZRSLYODWQJVYREXRFZZLZWQWHVOSVTVSDXWSQCUOQLTTMDIOLESSNWLCJUAFCYLFEIUIOOKHPECXR");

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
    msg.setTimeStamp(0.415444639247);
    msg.setSource(13841U);
    msg.setSourceEntity(75U);
    msg.setDestination(33437U);
    msg.setDestinationEntity(237U);
    msg.req_id = 23577U;
    msg.status = 218U;
    msg.range = 0.230746222712;
    msg.info.assign("SSWNMUHHHZXYDJSVIAKMXEAPPZLMZOLXNAKPFUVJGVCXQMQTAKWYMFLMUTIALVJQYDWHCYIFXLYEVEFJYQARGEGFQTPGSXRSRWZPZWCEPRITUSADNRUMBJCODDDUYBWGLKRNDUHXNIN");

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
    msg.setTimeStamp(0.346514112953);
    msg.setSource(4233U);
    msg.setSourceEntity(67U);
    msg.setDestination(26370U);
    msg.setDestinationEntity(242U);
    msg.req_id = 25949U;
    msg.destination.assign("RPAJCLOXZYCMEDCKNPTNWNDPRUIDOSHZUMGXLYTBXTAKXHDFZSVDOVAOQXJLZBGMBRIDVAAOCJHZEFPOQHGRFQYFNWUVVTBGVUEARZTJKLIODUROEJSPNHKIIWILEKUHNLCW");
    msg.timeout = 0.180669269983;
    msg.sms_text.assign("IXUVTNRQFLRGUCRDQEKUPYGNWUBWLDOFQHVEDOYBMSJVLETCPTPUTESFZEJUFMDAOXPYBCRJKQEGSTWYAPKWNUIXPFLRNXXMYOLFNVDBJAQYAMABBPOGSKKPMYUPZEYSHOTZJIDEASBAQGVSZNGXXVILRTCHTZRMQVBWWCHZCTJTMEXLNDXDII");

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
    msg.setTimeStamp(0.0564591059394);
    msg.setSource(1267U);
    msg.setSourceEntity(198U);
    msg.setDestination(14260U);
    msg.setDestinationEntity(44U);
    msg.req_id = 15298U;
    msg.destination.assign("VYWIVCMRURQZZDNMPLEIQJOTJZKYLUXGP");
    msg.timeout = 0.149855775178;
    msg.sms_text.assign("ZGVHFYVFHJLFTQOITCNEOZZBWCLCVFDPCHFYIVKRWDEJUVNWZUYRUMKRSJTOSXHRQ");

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
    msg.setTimeStamp(0.526501647231);
    msg.setSource(45677U);
    msg.setSourceEntity(34U);
    msg.setDestination(58180U);
    msg.setDestinationEntity(88U);
    msg.req_id = 6351U;
    msg.destination.assign("YCNELEQGJVQIKLTMLQRIWASMFIJCZWWRHTETOKAFNPSCXBFIGVSIMOXKHXNJDH");
    msg.timeout = 0.993706457885;
    msg.sms_text.assign("HDJKMVCLJDVYDGEXCOYMQWWDQULANVEPBGCVMTRVSIRUPHHPUTPGUENGIKWFJKHEUQKRIFFDYFXXLNFJPZAAKTXHZOGRINCOTKSUXYJHZPAOQAYIERHYRDARHWFZXEPYUEZGBQLPWUVLBASACASES");

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
    msg.setTimeStamp(0.0530940172812);
    msg.setSource(29096U);
    msg.setSourceEntity(114U);
    msg.setDestination(15093U);
    msg.setDestinationEntity(13U);
    msg.req_id = 46777U;
    msg.status = 109U;
    msg.info.assign("YFCZFVTBCMZJMWWPRLARFSSBEDEGEOMGXAMUKCJBDDGMUDINXCFVIAIHROJNFQJPGKLUBODLNQTUYLHTHFTFGPKKXYCNKEZOFUNDCTTYBVBJMSVQLJWIBSSUYCPTPOHOWPZMTURZXAXAJIHCVEWISFUKOYEYVKQJLHZEWJDREZGDQGXPPSWRQFHIEHWWCALNLOOHLOBSTSXQKAMN");

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
    msg.setTimeStamp(0.0404590601815);
    msg.setSource(7396U);
    msg.setSourceEntity(250U);
    msg.setDestination(46965U);
    msg.setDestinationEntity(27U);
    msg.req_id = 29237U;
    msg.status = 204U;
    msg.info.assign("TEPBGTGMHUEOGBIOIMTEBMQTESEFLXRKROTFDWGOLFDMDWTASTFBXVAHRNOURAVHSFQWXMKPQZJDPLWPJFVAZWDRNHPXVFUFBF");

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
    msg.setTimeStamp(0.586842347993);
    msg.setSource(26780U);
    msg.setSourceEntity(178U);
    msg.setDestination(30112U);
    msg.setDestinationEntity(107U);
    msg.req_id = 7884U;
    msg.status = 94U;
    msg.info.assign("UYXDMWNICPFQNKLZHYVBBUODFHIAIIOOZJSRTYHFEJAGJNVW");

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
    msg.setTimeStamp(0.727887333964);
    msg.setSource(32911U);
    msg.setSourceEntity(109U);
    msg.setDestination(2847U);
    msg.setDestinationEntity(183U);
    msg.state = 199U;

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
    msg.setTimeStamp(0.252463635756);
    msg.setSource(60980U);
    msg.setSourceEntity(168U);
    msg.setDestination(50530U);
    msg.setDestinationEntity(21U);
    msg.state = 208U;

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
    msg.setTimeStamp(0.625873917963);
    msg.setSource(15601U);
    msg.setSourceEntity(29U);
    msg.setDestination(30592U);
    msg.setDestinationEntity(134U);
    msg.state = 240U;

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
    msg.setTimeStamp(0.553579291921);
    msg.setSource(19922U);
    msg.setSourceEntity(122U);
    msg.setDestination(11562U);
    msg.setDestinationEntity(28U);
    msg.state = 168U;

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
    msg.setTimeStamp(0.471097972584);
    msg.setSource(22422U);
    msg.setSourceEntity(235U);
    msg.setDestination(25473U);
    msg.setDestinationEntity(93U);
    msg.state = 134U;

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
    msg.setTimeStamp(0.0400694101028);
    msg.setSource(34958U);
    msg.setSourceEntity(85U);
    msg.setDestination(30868U);
    msg.setDestinationEntity(144U);
    msg.state = 61U;

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
    msg.setTimeStamp(0.166588130745);
    msg.setSource(32313U);
    msg.setSourceEntity(207U);
    msg.setDestination(40226U);
    msg.setDestinationEntity(37U);
    msg.req_id = 2051U;
    msg.destination.assign("ZQOXECSYENYZLRNXYAOSAYFEUJHZFYXPHIKZMSYDDMFIGGSIHVXHPNQEDQY");
    msg.timeout = 0.0435533247784;
    IMC::ArmingState tmp_msg_0;
    tmp_msg_0.state = 238U;
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
    msg.setTimeStamp(0.212405185591);
    msg.setSource(42681U);
    msg.setSourceEntity(41U);
    msg.setDestination(31673U);
    msg.setDestinationEntity(42U);
    msg.req_id = 59715U;
    msg.destination.assign("OZNPPXVCUJGUDIHDJDORZAUMZOFILPHWWKDCDLGCTQZAXTMTSAFXFVBPDBVVQOXGOJMJMJSUHUDSKISMBGTIZEBZENYFCXPDZQGYVHTQHEILLUPFBVNKWQFWRRCGCHFYDGAXEQQNUJ");
    msg.timeout = 0.909318810271;
    IMC::PowerSettings tmp_msg_0;
    tmp_msg_0.l2 = -118;
    tmp_msg_0.l3 = 123;
    tmp_msg_0.iridium = 122;
    tmp_msg_0.modem = -127;
    tmp_msg_0.pumps = 81;
    tmp_msg_0.vhf = -62;
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
    msg.setTimeStamp(0.196550601457);
    msg.setSource(38191U);
    msg.setSourceEntity(65U);
    msg.setDestination(30657U);
    msg.setDestinationEntity(140U);
    msg.req_id = 28722U;
    msg.destination.assign("BJGFKTYHFDNXXNZVWBJJBMQTQOLGTHJEZPSEZUGYDPLQNAYQXJLKDACFUADGQNUPCWKBSHJZSPCMIDLEUFHCYKGWVIBBOEXCJLRQCLZHSXMCNFIXHDCFBEGFKVUMVCMADENIVUWPZRQKRWCZHOLGGENNO");
    msg.timeout = 0.604404436165;
    IMC::RSSI tmp_msg_0;
    tmp_msg_0.value = 0.637255685918;
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
    msg.setTimeStamp(0.706149164746);
    msg.setSource(45382U);
    msg.setSourceEntity(173U);
    msg.setDestination(27200U);
    msg.setDestinationEntity(138U);
    msg.req_id = 50894U;
    msg.status = 126U;
    msg.info.assign("IHPZPLWUADHDWICASSXTFUOVXDZGYTFNSJSEOCIKVALNCQJUMIHVORTXTJWDMGBLJBYYQBRZHSBGNOUT");

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
    msg.setTimeStamp(0.565647560453);
    msg.setSource(13072U);
    msg.setSourceEntity(171U);
    msg.setDestination(45725U);
    msg.setDestinationEntity(37U);
    msg.req_id = 7480U;
    msg.status = 52U;
    msg.info.assign("ZLKFVFWCPATLUDOEPNHXAZIUYAWEYQMQZDJBWNKPICPZVCBOFZBJIHUQARXIXMTSCQOQPRGMSFRVNGNULHPNEMEQFTRJOISJKMXIXBZYSKRVQWGCEVMYPJKCLIDHVEWZGCELINGHJWKQYDUKLPMTLSJMJDELCWXSTSPFKUO");

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
    msg.setTimeStamp(0.047187518666);
    msg.setSource(60965U);
    msg.setSourceEntity(92U);
    msg.setDestination(39896U);
    msg.setDestinationEntity(5U);
    msg.req_id = 32424U;
    msg.status = 134U;
    msg.info.assign("ZOVGPJTGSTIDXBDNQNXDBJHASVOCRYVVYGZFZOUBYBPETFURWUICIWXGHRFPEISHSMLRDTFVEIHJBQPYJKOQIOVLGMCFDHWXLPEMNSQGRFKNBWCUXLKQKBQIKXPEONJFTDNIIKFLBXALENQTXGZAZHHAMRMZCRMPSVUVYOENDFOOMZPQYWAHHYAJVLMQZKCBTCPHRJLXSUTLJWNGRFBMZJJQZUTKUGOCILYDAWAWEYXTVGEWUKD");

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
    msg.setTimeStamp(0.946944317661);
    msg.setSource(16211U);
    msg.setSourceEntity(244U);
    msg.setDestination(31482U);
    msg.setDestinationEntity(240U);

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
    msg.setTimeStamp(0.913555111239);
    msg.setSource(14955U);
    msg.setSourceEntity(152U);
    msg.setDestination(52327U);
    msg.setDestinationEntity(247U);

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
    msg.setTimeStamp(0.89538233706);
    msg.setSource(19474U);
    msg.setSourceEntity(196U);
    msg.setDestination(45964U);
    msg.setDestinationEntity(192U);

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
    msg.setTimeStamp(0.172161427715);
    msg.setSource(56073U);
    msg.setSourceEntity(219U);
    msg.setDestination(1861U);
    msg.setDestinationEntity(197U);
    msg.plan_id.assign("IRTBYAKONKCNFRIXCFCHOBEBUGJQQDNMLQQDZQTOTVHAMKEASWSJAPQUQGSEHPJMWTOYCLLTWOCILHBPSUGEYYUBCDGJOGFZYKNLRZPVPJEGMZVUEDSYMBOVGSTVIDHXYIDFRIJVGYDHKSHIZYDCRTXBWWUDZJWNSXQEN");
    msg.description.assign("GHESTOVLSLPUZMFDWDVVXBJMFIJIRVGNSJZYCJJXNDGLSRQPNXTHBAGPRJJAJORPPFINXYPHZTBYQSEFZUCCGYQWQAXIFXKFGZYQRL");
    msg.vnamespace.assign("HJCFVUSWPLCGJAMMSYBZFOIKXRJNTRJHFXEBFJBZTGJVLQZUUGAQUDWVRSYDQOQIHYLIACERTVVJOOTXNHXTKKSSBWEIJHGMPBDMPNZHYJZIYTUULDOFEMKHVDVZLTFNUYOZRMQWXREKZTRXCKKFCAPJDOZPCB");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("RKLUGWANYBDTZAONJEPPSRUNHKFUADTEBAJEQZPHYLOTRFMVMQFGKUJLRFEHNMNYCIAEEVRHBSWKWXLXZRCKOCQJHBZSQCOPIHJDOLRWMYFXYVBHGABOTCHUKUQIKYLDWZRVSGWMVTAYJNVGPKRAYTCJIPWLBNGQXOBFHIENIGVSDLIDLDVHSBGYTZDZRPISQMIKMCTMDBANFFWQVCCTJJPWQFSGPCXYPDXXT");
    tmp_msg_0.value.assign("LKGNJZQXZRDJECEEWMOXEHCTRLRFCYOYDPIGPJDWYBTJVTMKSD");
    tmp_msg_0.type = 67U;
    tmp_msg_0.access = 241U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("BGMJYDXZQTZGAFZNOTQUWDHYRABAAVRNGZFHTLFOKUNVKXLFFNYXZBMLBWNQPCSVEEUQERYSBAUPHUMUGWTVPCOBKJXVDPBDABVJGJGRIIIPLWOXWCSOLKOZRCJFELNRUSATCSAMUQIRJKDQGEBUKDRTZCJFNM");
    IMC::UamTxStatus tmp_msg_1;
    tmp_msg_1.seq = 64204U;
    tmp_msg_1.value = 102U;
    tmp_msg_1.error.assign("ROCTYADUIACPPABFZJADEYTIYMDRTNQRJIEKELXSPDETOWYKFTXDFEVGMWQASZUSNKCXJLHQMSMZKHVJOGSWZZVOIDILGLGWRRVEIUHTXYLBCWYCKFKFHIMETNAGFCHXJCFOHWEYLSZQOUMUNPGKBSGRPLYHNWGZKJXDENMPBTJRVANWUQVBCVIQOOUJQPWSMKRLSTWIZFQUMPBJZXLRBAHYVNPUGNNHGXQBXPVSYDCKMJRADUOVADFBTLEF");
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
    msg.setTimeStamp(0.507386479402);
    msg.setSource(5916U);
    msg.setSourceEntity(86U);
    msg.setDestination(32209U);
    msg.setDestinationEntity(201U);
    msg.plan_id.assign("WREIXWQKSAYXLJEACJCBUTDGXLJHADPAZUKSREXTUKKAQKIZGXHVSPFFOZJDVBRSVXEUSKWRVLKYREGOHYMZVUPJMMPIEGPZAUGQQCUZFHOBFYLGCYTZITQUVNJFPNMCXXTCIHIZBMTBJCSLPHNYATNEDFFVNNLHFJRDWDHNBPKMXWDZOQCIFUZHQTOTVVIGNREEQMAALCPDODIWBUTYSORNOPYGBQJCIODMSLXWSWRHKVQAMOGKS");
    msg.description.assign("UWKJPPDSMGVVHPRRBRGIWUCFMFXJFWTZKUQGYENJLJQINFSWGJWUAAUEEYFKHRSJCSNJCDIYBQCNSDMBBXPIZPNQBQEGKYYCDQIDZOLATCLTVSEHULD");
    msg.vnamespace.assign("QVKHGWIKAEWJENTCFSRDXYLXAGUFFEZAKTVFLCNQQESQMHZIKZLTCUNJHSEIVDJHAGBCHXEQAUFJRSZSPLQFZTXTFNMPORKQPOJKASZYDYJOHTKHSROMEJOBUCZMQJPGOCMPBVUIKGXNPNLMPVBDEZAWVQRDIMLDXYYUIOMGRUITSVIHAYBZBBINDTQSAUYIURFNWMEUGHOCBWVREVLWDKAYDWTDGCYHYGLBRXNTCNKGLMBXWOJWCPRZXLJF");
    msg.start_man_id.assign("RTSINGHWJKQRPOUJKLJEZZMNJOPQHHSMFYPINROKDIFQKYABKDZMZLSWXVMRNHDIMYZHL");
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("GFMYMYXHTKTVBRZUQBQLEVALVCBJJKWNMSGIPOCEBNOFQDSWDYRBFIWEVGZUXAPHWTGQJYIHZGWSYFWMMOZQK");
    IMC::Land tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.892641879509;
    tmp_tmp_msg_0_0.lon = 0.523939301582;
    tmp_tmp_msg_0_0.z = 0.987819807951;
    tmp_tmp_msg_0_0.z_units = 213U;
    tmp_tmp_msg_0_0.speed = 0.577692968521;
    tmp_tmp_msg_0_0.speed_units = 87U;
    tmp_tmp_msg_0_0.abort_z = 0.394482513686;
    tmp_tmp_msg_0_0.bearing = 0.782588580359;
    tmp_tmp_msg_0_0.glide_slope = 63U;
    tmp_tmp_msg_0_0.glide_slope_alt = 0.0402735481849;
    tmp_tmp_msg_0_0.custom.assign("OLDCMFCASDKIHVAMRHROKXLDNEHKTFPJCLCDUZKYIOATHYIQEJWQSGINNBTENVKZIPFWFNKYHOWWXZVUUSBMUJPTMQMXQQXVMPXYJAUUGFXYOMKFTTFEEROBWEMNOWYDCIXGVJNXHVDEBGJUPKAEPZEYUJDNLFRHZDBRGWRTCGTTSCR");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::Heave tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.669766464701;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    IMC::VehicleOperationalLimits tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.op = 131U;
    tmp_tmp_msg_0_2.speed_min = 0.910178202299;
    tmp_tmp_msg_0_2.speed_max = 0.471053347378;
    tmp_tmp_msg_0_2.long_accel = 0.994159888566;
    tmp_tmp_msg_0_2.alt_max_msl = 0.0158260271138;
    tmp_tmp_msg_0_2.dive_fraction_max = 0.167208561131;
    tmp_tmp_msg_0_2.climb_fraction_max = 0.0865616836947;
    tmp_tmp_msg_0_2.bank_max = 0.548031429359;
    tmp_tmp_msg_0_2.p_max = 0.86758126929;
    tmp_tmp_msg_0_2.pitch_min = 0.750878861939;
    tmp_tmp_msg_0_2.pitch_max = 0.1686504228;
    tmp_tmp_msg_0_2.q_max = 0.974097042128;
    tmp_tmp_msg_0_2.g_min = 0.370402383067;
    tmp_tmp_msg_0_2.g_max = 0.316082778919;
    tmp_tmp_msg_0_2.g_lat_max = 0.251369537753;
    tmp_tmp_msg_0_2.rpm_min = 0.153647382292;
    tmp_tmp_msg_0_2.rpm_max = 0.67837241256;
    tmp_tmp_msg_0_2.rpm_rate_max = 0.34284186465;
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_2);
    msg.maneuvers.push_back(tmp_msg_0);
    IMC::PlanTransition tmp_msg_1;
    tmp_msg_1.source_man.assign("WBWXQJZFRDWBSTDKSGTBCJZSUCZNLUPRGFOCSWJZQNAABPMVNEBKHDPAUZUZVPRJQEFDAXFERJECHIJIAQFXTFXBYSJKMYVQIRBVIGENDHMSPNANRLCYYCDKBULILMSWINTGEICLFOOHIT");
    tmp_msg_1.dest_man.assign("CRHRIHMKFUKIGGDPPWVORQNZUSHIJBWTLH");
    tmp_msg_1.conditions.assign("UIOZGQOHVKRKOYAYBCTMWRPZINCSJCVETDKQSLMKOEDVYEWDDLNNQOBPMFYOCMKEKVNJNRINPSLXBUECXJVLVFGTWXYCLZFGATQZKOE");
    IMC::FormationPlanExecution tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.group_name.assign("KLMBIJHYPGMMXLPBXXEMLRNLZYPWBNMTZNKSTSPMEUDSKDDMHRCCOHQS");
    tmp_tmp_msg_1_0.formation_name.assign("DRBLKYGJFFPOFJMEOKOAEBFCGDNMDXZBKJFWDQSAKPITLUKXLPCNNCVCMCQGMHXEDIVMYUQJBYUVHLYAYQOQIULGVHBARSHHJPLHEBZDSSPOQXCUNPUJUTECZQYWIFWBTZRNWFUGKVGXCIHSXHBGAVLETQRAHMZWKDPLIARYFMEATBWRXBXKTQOTPCCGOTFDSAWZSLZNRYIP");
    tmp_tmp_msg_1_0.plan_id.assign("EZONAFCNIDRJWPMYAZTYKNJLZUPVHFRIBJCISBCLWGARWOB");
    tmp_tmp_msg_1_0.description.assign("CBCYZFCMXXDOFZHJHIWPHMKGLGSPYGWBJGHGWXDPIHO");
    tmp_tmp_msg_1_0.leader_speed = 0.244146257419;
    tmp_tmp_msg_1_0.leader_bank_lim = 0.974804984359;
    tmp_tmp_msg_1_0.pos_sim_err_lim = 0.402220497557;
    tmp_tmp_msg_1_0.pos_sim_err_wrn = 0.63192606708;
    tmp_tmp_msg_1_0.pos_sim_err_timeout = 39296U;
    tmp_tmp_msg_1_0.converg_max = 0.102475418925;
    tmp_tmp_msg_1_0.converg_timeout = 11138U;
    tmp_tmp_msg_1_0.comms_timeout = 47147U;
    tmp_tmp_msg_1_0.turb_lim = 0.965516048492;
    tmp_tmp_msg_1_0.custom.assign("JYGPJYTVPEORBJLWPVONATMNKDXMFFZHCKDMNDACWTHGSVZKXKTUELHNQAGKSXBQOYFPOAZESDFFLRZWWYH");
    tmp_msg_1.actions.push_back(tmp_tmp_msg_1_0);
    msg.transitions.push_back(tmp_msg_1);

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
    msg.setTimeStamp(0.282798406916);
    msg.setSource(29232U);
    msg.setSourceEntity(173U);
    msg.setDestination(11804U);
    msg.setDestinationEntity(19U);
    msg.plan_id.assign("XCDPXYDIUMNCAETXRLQWNCPAYMCVAUARJCBEELUOUWQXZ");
    msg.description.assign("ZBJHKWZEKTGEYAPEOPEZYPPNFTRHLMJSVIDRSJWHKHRZBUYBIQADNYFDUSVPILWNYOFTLUOHUHAULJSPDICHLNCVNKAWEAXVEQKMJGWYANVTQORQSODGDRXLBAVITUNMRTVKKZDCTBJICCTGBUNQVUGCPJTXZEXEBGQZZQMFIUSXFAIQSOFWS");
    msg.vnamespace.assign("CTNCGHWXBETVFAJNOZQNURLRHIEUNUWIBGXGAPMSLMPXIGZFCQVMQLRYWOVOQJYDERFOWQBUJSNYLRZDHLHBUWYKXMLGPRVCTEKGBTIIZWPXHFBAOWHUZSQTNLEFYEDZKQAHGAYOATFGDWYEFDOJPKNJIKUCJZRPHMY");
    msg.start_man_id.assign("FCUOATECLEEXALWJOTPPQLOXRYLRTVTMQUDPRQLKIVTFAIIIGLZKSUDVCIXHBZUUWSCJSNEYWYFWSDGMHGGQXQKQ");
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("AYEYUWASSRQNJMUXTVXOTTZQBNXGFCAIVXXZQEIYUFFSLBZPGWBXCCDDEOONBXOPCKVJHQYZZEREYUKBAIJXNXKWMEHOWRDYMYAJBULEUHVCKFDZSGVMBZSGLJOQFMDFHAJKOWSMJWWXRFTISPMVMNQCIDAVSIRPREBTNLAZFTAVKRVHDOGRFEUYGGCBICNKHHDQEWPLAJNIFPILYZ");
    IMC::Takeoff tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.472961748956;
    tmp_tmp_msg_0_0.lon = 0.23465782092;
    tmp_tmp_msg_0_0.z = 0.922323993098;
    tmp_tmp_msg_0_0.z_units = 203U;
    tmp_tmp_msg_0_0.speed = 0.99493620706;
    tmp_tmp_msg_0_0.speed_units = 207U;
    tmp_tmp_msg_0_0.takeoff_pitch = 0.28541678744;
    tmp_tmp_msg_0_0.custom.assign("MUKRCQYADHIUGASXBFFWZZLNFOBHBIZDOKWQJYXRUGAYFACSRMNTKMQFGJPIQVNMFEUNAEZQXGQXISUZLNTMORCLLKCXPJHAQEZBSJSVWOKMDENSJNDFUNAI");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::Depth tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.94857819286;
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_1);
    msg.maneuvers.push_back(tmp_msg_0);
    IMC::Distance tmp_msg_1;
    tmp_msg_1.validity = 88U;
    IMC::DeviceState tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.x = 0.530859701489;
    tmp_tmp_msg_1_0.y = 0.808171306061;
    tmp_tmp_msg_1_0.z = 0.14431711841;
    tmp_tmp_msg_1_0.phi = 0.390706179269;
    tmp_tmp_msg_1_0.theta = 0.211656818644;
    tmp_tmp_msg_1_0.psi = 0.91619733152;
    tmp_msg_1.location.push_back(tmp_tmp_msg_1_0);
    IMC::BeamConfig tmp_tmp_msg_1_1;
    tmp_tmp_msg_1_1.beam_width = 0.332953113602;
    tmp_tmp_msg_1_1.beam_height = 0.648019543184;
    tmp_msg_1.beam_config.push_back(tmp_tmp_msg_1_1);
    tmp_msg_1.value = 0.227981887883;
    msg.start_actions.push_back(tmp_msg_1);

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
    msg.setTimeStamp(0.83211587056);
    msg.setSource(316U);
    msg.setSourceEntity(22U);
    msg.setDestination(18641U);
    msg.setDestinationEntity(112U);
    msg.maneuver_id.assign("XDUCOFDLVZRPTERLSAYHYNWXEGCMUTWHVZZIRZBUBEOTGVUBRFJZWLAHKFSPLKVRAETDMVJXFLFZTGXIQKPJWQTHEWNVBCKHDSTOFICHASHOOJDGOLLMSSUWMGHFWPUCVIPFZNYNYVPMYYAMQXSUKPDAYGWJBCBRXKJDYK");
    IMC::Rows tmp_msg_0;
    tmp_msg_0.timeout = 38302U;
    tmp_msg_0.lat = 0.495117885684;
    tmp_msg_0.lon = 0.330989175791;
    tmp_msg_0.z = 0.213251598923;
    tmp_msg_0.z_units = 154U;
    tmp_msg_0.speed = 0.353547250186;
    tmp_msg_0.speed_units = 14U;
    tmp_msg_0.bearing = 0.44679585311;
    tmp_msg_0.cross_angle = 0.0821286551652;
    tmp_msg_0.width = 0.127782170092;
    tmp_msg_0.length = 0.243815938728;
    tmp_msg_0.hstep = 0.998438289036;
    tmp_msg_0.coff = 1U;
    tmp_msg_0.alternation = 253U;
    tmp_msg_0.flags = 119U;
    tmp_msg_0.custom.assign("HRHXHDBUMSMCBAJUEGMXLIOHWCCIJWZJSLXPYRPPXM");
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
    msg.setTimeStamp(0.152201902034);
    msg.setSource(60922U);
    msg.setSourceEntity(132U);
    msg.setDestination(41128U);
    msg.setDestinationEntity(147U);
    msg.maneuver_id.assign("FVGOWNRJZGRUDUGLIZZVOSHGLIGVCSJCEIDATADZZKEINBURQNEUVWPLXYPXPCIAHIUKRUQCZJKLPMTBYGQMNRJXLSFSLMQOXPHWKCWRJCEWCXGQTOOOOZANIVHYFGMVGMDTVCMGARFYWMPFLFAYTSJQURNTBBJMQNNOTWWSHTFXKVJOCEUVDWBJLX");
    IMC::CoverArea tmp_msg_0;
    tmp_msg_0.lat = 0.45384786575;
    tmp_msg_0.lon = 0.328938915404;
    tmp_msg_0.z = 0.255286298837;
    tmp_msg_0.z_units = 121U;
    tmp_msg_0.speed = 0.965754200146;
    tmp_msg_0.speed_units = 242U;
    tmp_msg_0.custom.assign("IHPFWYBUBPTDYBLRUUARQYVABKWNWJERZVFHIICUNHQCCDZXXFTASFQMRJFSLPIQRMVTWQAOPIAUHERDCFSHBLDXFIOQFEPOUKMGBBYNEDEPNACXGWLHMDUKETYEOOJRPSGSVHWBTZZZXQFCMLEXSVWSMGVDMPKELYMYARIVJTZBIKWGOOXWASSYHYAFQLJXTKDPWTZJTLCXNCKDGSKGJVECUKJV");
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
    msg.setTimeStamp(0.088024160517);
    msg.setSource(35929U);
    msg.setSourceEntity(236U);
    msg.setDestination(11208U);
    msg.setDestinationEntity(84U);
    msg.maneuver_id.assign("TRYDTQFWAXEUBMNQVUSGNWJXAKXSCFELMNKKXTXZVXKJSLGMMKNJKULCTKNMAFTAJAGFAYZFOFPDVGZIZGPNPWTWSTJIILXJCHD");
    IMC::Dislodge tmp_msg_0;
    tmp_msg_0.timeout = 36568U;
    tmp_msg_0.rpm = 0.765830009411;
    tmp_msg_0.direction = 188U;
    tmp_msg_0.custom.assign("DRKPNGXVBGICAHGNCVHWCTGWXIOMELNTVQQYIPEUYWYJEUMDJMLUDYNULSSDKOKJISWHSNA");
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
    msg.setTimeStamp(0.497109764988);
    msg.setSource(55934U);
    msg.setSourceEntity(162U);
    msg.setDestination(289U);
    msg.setDestinationEntity(52U);
    msg.source_man.assign("JIGBHRIMKWYKITBEVEINXTGCWLQWTYLXVYRZTQZFKKHGNCWRVZXYXLUWCJGOKYFLFYMICENHPBRNWXZJVLZMFSCXKWDLIDNATJEOAOLNNPMEBQYFHKTOQIPJ");
    msg.dest_man.assign("MUYAOEUGRJLUMEPZYXMYPRGROLCIFPXUCUHBOTRVWJVPSQPOQVNMDOEXLNKGXCLVGIYNJQBSBZWMAHWOGKJDRXAKDSIJSNDQTFMIQYRYDNUYVDLGF");
    msg.conditions.assign("MRCJHMVTAFEVTLRUPZOVPPVSKJAHGXBZSUAQLHMEYSXOLB");

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
    msg.setTimeStamp(0.162185240766);
    msg.setSource(35457U);
    msg.setSourceEntity(218U);
    msg.setDestination(13515U);
    msg.setDestinationEntity(197U);
    msg.source_man.assign("JAJXPCHGXRWRNWCBJYBCJZGZEXRPNWKQDUKSROBJISDPYHAJNBXYJKNZQOXPMFGVNUIGUUFEUJDCTHYKFMVGTFHIXPOHMLSSVRUXQQFDYQGPFKRAINQAR");
    msg.dest_man.assign("WKINXLOPHJVEBPUKTQSUMIAHHERWXXGPBYPOQGFVUYVJWNCNPFTGOKQMRWTVNKXGBHAKHBXHJZDCNMGPIRQYUZRDVHXLACITXFNTNZUYGCAKPTZQJVRPOODWRUZWQUXBDTOJMZZITKAESISMOEHASTNJYRCMQQLLZXFMRXVLEVALLCIUWDKTCLRLIVMFJUSDPLHBDGEVRFWPCEYYKSWOGAMOFOYSYAFIDASGQBMUCDFNYBJFZSHKDSBW");
    msg.conditions.assign("NNBGOYNYGWXXDSDRMLSFHIUZSRWVQTEJNJIHGFPFYKUAHZVWBJBLCEPZREELGLNSCTLMZUOGODPUFMPXSQNPJWWEWIKZHAERMXSXCEILZYTBGGFLTOEJLIZWAHTEKRKOMKRGDBUAWACFOFQZOIKKDXVGRWTVQTVBBHMMARBQDJUJUCAYZCSXCAPFHVIKBQVHQJYIHCQRCZPUVPJUGFPXXNRCLDIJHYDOAMTPTQMBODWXMNKYSS");
    IMC::Event tmp_msg_0;
    tmp_msg_0.topic.assign("GZMHGTXDPOVOVGMIYQEISOSZRUAPKKRKMJGWVYDOBYLCUMKBVTYCUQCDLJXXNLVAUYGZGYAAXRCAZRAMPFFKGEFOHJZX");
    tmp_msg_0.data.assign("MIBVJLPCWWUWABVMXCCNRBQGKSVSXOZN");
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
    msg.setTimeStamp(0.683469483861);
    msg.setSource(25373U);
    msg.setSourceEntity(143U);
    msg.setDestination(42592U);
    msg.setDestinationEntity(15U);
    msg.source_man.assign("PNAOEUBVYKYVNUFDLJYEQXDGMYLNJWMHQGMZESLGQMVYDBZYHCLYFDCZIINNMRPCYTAHQFSQUMOQBEZROZPTAHHLHILJKJMSOSWEIWXNADPCUSGLTPTVFQCLBFWQVELABKRIUWKPU");
    msg.dest_man.assign("TOAVXCIDMHOWBGRWPDMGKVYSKEFBTQRGHQFZRGUZTJELAWHAWVZKMFKFAOFDAXWGXYFWUKCLBYETXZUNHNESLZHWSKQMFBDSAYKFZPSHTEKZQVJUOXJYACIUBUJZCGTJBNBIVYAMIGSOKMYUYNTZCRBWHPARQCNJLMDQ");
    msg.conditions.assign("MTFKDCYGZDHMHAWTHUJEFQYGFAYMCJIYBRNPUBTQXORNSGKOELYESTZDZKRXENAVDLNNYPLDUSZKAVTOJCKOMKWONBPIBQZTMEQHOLLLTSJVWOOGHDPCINUXZNISHEJJDUQGWAFWGORTILWGBLM");

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
    msg.setTimeStamp(0.856507538705);
    msg.setSource(11758U);
    msg.setSourceEntity(180U);
    msg.setDestination(61893U);
    msg.setDestinationEntity(133U);
    msg.command = 1U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("ECRVXMQPLLVNTTMNAUKZTQJJLGNVBNEEAWBEIWPZWMOKOUFBOYYAMRFLPUSHFSAJGRQCLTYDZORYPWXEWOEGDGXDVEYVQOVDCAWNDKPSUKXCSLCQGGZPGDHGKSCXAMJZMBIWRHIJSTBOVHKXFYVIKBXFUNREQXPYBMUOILBDPZIPTEWADNLCQNHRUZLZCJDCAAIHFIWSQTBLHDEOFUTFRNJZWJMSMCUHY");
    tmp_msg_0.description.assign("FEVCPSETZKQOCYBETZUWRLHYYDCHTGBRPIAONMPGRFDSRTELWSVVDNLIZOXGODZJKHZKHWODRRIVKMZCBVJNFPQYJBSJRKDAQYOGJQQXTWEFVKBGXMXSFUXUAAIRLNXKWPUUJTEPJUEKUTKMWHLLGH");
    tmp_msg_0.vnamespace.assign("XDYQEMXOOBZUATXRFPJLDOCUVRPARFOETCNHCFISSGACNRSQBFHMLAGQZEVMMOZZHGYFKLQBJHLCLODJWKNBQQMTZFXMPIHTFYBPCTBFYERYUWWZVHBGREFJEWRUNDCOGMEGBLCFIADYMLUVMHVKIXETBVTKXNQZADWCISOSDUSWNTSEKPKKILAAOSHVJBUIH");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("LIOWKOEMBFBAAIJOAGXUVAI");
    tmp_tmp_msg_0_0.value.assign("ECPEKSLRXAIDLUXQFJETGDEINXUWBGYZTJESFURRLOZTAALDQXHHSIFXKAINVKJWUPCXQVOFGXYIQPYNMCFPJHEDWVYQDOSIZMNSBEGDGSKVZBTWCNZSHLNLWGHMBWSFCQSRMOZHXTYUJIDGGMWCATZAYJCKIKFINXOZQBBPMOFRCBPBEHPVHEULVKKNNKNP");
    tmp_tmp_msg_0_0.type = 161U;
    tmp_tmp_msg_0_0.access = 248U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("HYEMNNPFVPLIQLEWHQAKUKPDVFDTWCIRYQTDOMWTTHOYWZJBIALFXMHVCJMQQDEMDJBDGRRGKREEVOTOKAXANKWELBABBILDXWWUANPYXJQBGMULATVZWSVJJKKPROIWHGKMABIBEYGXCVQZZMUOVFPHJUDLPNGSELNTCXUXUSFHYBHCRZFSZINROXTZQNUWTFDOGSHGRUMJTIJUYONFAXCKYVZESFIMYSGFPZOEQKPCCCY");
    IMC::PlanManeuver tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.maneuver_id.assign("EODJPGSILMCXPGKCTNJRDDQIUSWVXUPJAHNSCFTUIKKWTCDJLECAQKERFFIRMGZASEFOWPJZJHOFXTBBGNMHOYRUTSENCKGMVBHGVSPQROUCILXSBMC");
    IMC::Sample tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.timeout = 5076U;
    tmp_tmp_tmp_msg_0_1_0.lat = 0.837413738178;
    tmp_tmp_tmp_msg_0_1_0.lon = 0.200766193176;
    tmp_tmp_tmp_msg_0_1_0.z = 0.307504720942;
    tmp_tmp_tmp_msg_0_1_0.z_units = 218U;
    tmp_tmp_tmp_msg_0_1_0.speed = 0.738515970625;
    tmp_tmp_tmp_msg_0_1_0.speed_units = 84U;
    tmp_tmp_tmp_msg_0_1_0.syringe0 = 138U;
    tmp_tmp_tmp_msg_0_1_0.syringe1 = 219U;
    tmp_tmp_tmp_msg_0_1_0.syringe2 = 72U;
    tmp_tmp_tmp_msg_0_1_0.custom.assign("JAOFBVXSQMGPDSHGJFYXFIZADLYPCAFEVNQARLKRVIDWEJAKTGCGQSTRYPINNPWXEUKHBFNCCCCBQKJZXLNZSJYOX");
    tmp_tmp_msg_0_1.data.set(tmp_tmp_tmp_msg_0_1_0);
    IMC::ScienceSensors tmp_tmp_tmp_msg_0_1_1;
    tmp_tmp_tmp_msg_0_1_1.adcp = 78;
    tmp_tmp_tmp_msg_0_1_1.adcp_dur = 1828985625U;
    tmp_tmp_tmp_msg_0_1_1.adcp_fr = 450063113U;
    tmp_tmp_tmp_msg_0_1_1.ctd = 124;
    tmp_tmp_tmp_msg_0_1_1.ctd_dur = 362941301U;
    tmp_tmp_tmp_msg_0_1_1.ctd_fr = 3887565841U;
    tmp_tmp_tmp_msg_0_1_1.opt = 40;
    tmp_tmp_tmp_msg_0_1_1.opt_dur = 441480155U;
    tmp_tmp_tmp_msg_0_1_1.opt_fr = 1055571266U;
    tmp_tmp_tmp_msg_0_1_1.tbl = -40;
    tmp_tmp_tmp_msg_0_1_1.tbl_dur = 1239327983U;
    tmp_tmp_tmp_msg_0_1_1.tbl_fr = 2411674469U;
    tmp_tmp_tmp_msg_0_1_1.eco = 70;
    tmp_tmp_tmp_msg_0_1_1.eco_dur = 3477114034U;
    tmp_tmp_tmp_msg_0_1_1.eco_fr = 2784077588U;
    tmp_tmp_tmp_msg_0_1_1.par = 68;
    tmp_tmp_tmp_msg_0_1_1.par_dur = 2607983911U;
    tmp_tmp_tmp_msg_0_1_1.par_fr = 795388550U;
    tmp_tmp_msg_0_1.start_actions.push_back(tmp_tmp_tmp_msg_0_1_1);
    IMC::VehicleCommand tmp_tmp_tmp_msg_0_1_2;
    tmp_tmp_tmp_msg_0_1_2.type = 246U;
    tmp_tmp_tmp_msg_0_1_2.request_id = 11991U;
    tmp_tmp_tmp_msg_0_1_2.command = 190U;
    IMC::Alignment tmp_tmp_tmp_tmp_msg_0_1_2_0;
    tmp_tmp_tmp_tmp_msg_0_1_2_0.timeout = 17894U;
    tmp_tmp_tmp_tmp_msg_0_1_2_0.lat = 0.453852861233;
    tmp_tmp_tmp_tmp_msg_0_1_2_0.lon = 0.26988328907;
    tmp_tmp_tmp_tmp_msg_0_1_2_0.speed = 0.0248354216;
    tmp_tmp_tmp_tmp_msg_0_1_2_0.speed_units = 169U;
    tmp_tmp_tmp_tmp_msg_0_1_2_0.custom.assign("YIYPMWHPFMBLSFNSNJXUGSYTVJPWPCQKQEFGIWWBIFUAHQOHPNWIKQVXOMFWEQTJVDTDZNHAJYRNGSSRDETACVPKURKMHXNQXTOARZEVLZBRDIJICTBKMRKTJEGGCOYFRZIWAJZLYRDHKLYYDRDKONMYVFARHBDTMCLIIQUGPNKSJXXGCQSTENN");
    tmp_tmp_tmp_msg_0_1_2.maneuver.set(tmp_tmp_tmp_tmp_msg_0_1_2_0);
    tmp_tmp_tmp_msg_0_1_2.calib_time = 54267U;
    tmp_tmp_tmp_msg_0_1_2.info.assign("AZLJSOEIOYKFGMPJMDVYCPMHWLZVMGZLOJRMCIZUNLSJCIDGKIGFPNJLOKUEIJMWSSRYTQHKBCFLXINPIUDXUXBBXBYEWLWANKSTFRZFZBVIPDPJPWQKNHVJFIRAWTEGUCTTRCGINOTMSUDPBYCUOAHWS");
    tmp_tmp_msg_0_1.end_actions.push_back(tmp_tmp_tmp_msg_0_1_2);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_1);
    IMC::UsblPosition tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.target = 51006U;
    tmp_tmp_msg_0_2.x = 0.812171305818;
    tmp_tmp_msg_0_2.y = 0.207842240591;
    tmp_tmp_msg_0_2.z = 0.310546950172;
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
    msg.setTimeStamp(0.78320548273);
    msg.setSource(6873U);
    msg.setSourceEntity(73U);
    msg.setDestination(61103U);
    msg.setDestinationEntity(226U);
    msg.command = 206U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("BHATDGJVBWGAMFXVBEPAJQDICSYDXLNZFKUBCMDEWKAEEYRKOGYYPRZLRMWKTQIOHCHEYUMSLVUGUFXQKWSLGIZJMIPPZBQGEWEXQSECNHRIVWPQSDMOKIIIXQLLOKBTADHPUETUSYBFXGTQNDOBGF");
    tmp_msg_0.description.assign("MXFMBXEBFJMLVSWNJZAVUOIAMURXBMYSMVOICFDHRLCDJCUZNEAHIJLTJBWFDRQXNDOSBYZWZCGUTRJJLPRDVKZCXGSHAEQTBLKVKLLUYOUYETJKIEMLOOHNKVGYQIITETVUTFSCIUHREHZPQHYXTBSOUFQSNOWKCYMQAPAZPAYIBQGCDZBVCPGBQRDVYKOEWSWHFLPWFXWSTJMPJNHGWANKMZQVNGZGSGCWRIKRQFPKNP");
    tmp_msg_0.vnamespace.assign("LXVENYNMCBSHTHUVZOBBGBMQNZGULEPMWRQHNEUZUXZTNTKAWXXOIYIQBDFAZRVKDLRMSRSOQATTOISQSWYCNJN");
    tmp_msg_0.start_man_id.assign("GCUQXYCRMMZNZJUWGQRMHHWWKRTBWORZABOXGXFVIESKVMZZPAZOOMBJYUZVIGFTZCUZLCQRKEDAGRALNFCNODNRKHYAEDUFOVHSEPVCWCJEABWFMPNRFQDPMNXGXSPFDKUXGOAJMSJYJKGBLBEDWHFIWHQKNZQDPTFPDMWIAKGYQDKPIJHLTXURIJJBQVTTNNBYESTCFCSLEH");
    IMC::PlanTransition tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.source_man.assign("FIEFZVPENLIKUENWCECGJJMPWKQRCIKOORSCLCYOYSUBVGIFXNQRMUSDW");
    tmp_tmp_msg_0_0.dest_man.assign("XNRWLSFBLXMVBDWZIHBVKIZYPSITGNWHEUFRKQUXDKJAEZYTBNPASTBRVMUDPJAQEACFRGVBQVKEMCTBSHKGMFLWXTLNZOTPVWODNZGWTICAUVCQPHCOSDKCUWRDMGZZDHBPYRAHXICJJTQCGHEJWTXXIFPVSKOQQDERVIJUGEYXFLOROS");
    tmp_tmp_msg_0_0.conditions.assign("NGBJGAPJZDSFKYEOYKVUGLYFZYGETMNRCLWMVWNRVXQBFKJZXAFSGDRABTOHPZUAHQPAQVCKNTOEMMLHDLWUBUSBOFCJQNDEIOKYMULNIWMDHODUSIHQAHEZSFLYPEWUMJACSQWMLTZNVHVSJCVJJXKRP");
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_0);
    IMC::SoiPlan tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.plan_id = 64372U;
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
    msg.setTimeStamp(0.945670715043);
    msg.setSource(22983U);
    msg.setSourceEntity(209U);
    msg.setDestination(32970U);
    msg.setDestinationEntity(55U);
    msg.command = 242U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("JXBHMSENJWNPOZBBUR");
    tmp_msg_0.description.assign("ZKFGQGBJHKSHUXFCHALLZNBEPOZSUSQGPPTOTFISXJQOLZOYMDIGFJULMEZAUYKRIIXCHCYEWFKAVWPXYRSFQZCQINDIRQNXFMVJLPSDRCM");
    tmp_msg_0.vnamespace.assign("GTVZPKASQRVTJLHYASXKZFEDHWOMRXZPEMACUOKFJWYONTPNDDIXXLUFPZGLXWMOYVATWHVYSWGPOQZQC");
    tmp_msg_0.start_man_id.assign("BKYOGINVCIQBDZFJFWZLNQNLJVMFNKBJO");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("SRKAYLCFSRGPZYSXYOWUJNEGGETPOAFVEIXQBSURGFBRBKAXOLIJMUQMYGFKZFQWMZTJKPYHPZINGCUJJHAXBICWZMNLNUQXTWYVVRQHQDUMTNSRPTJDOOZDADEVYRKHFXUICMOVTIDBBRBLQLWCCNRWRHMXQHBEVBZHFTTAGAMDEFSKIKKAZXDTUVTYGBPFVNCMGAAPLSEXNLKCOIVQLNGCPZLOHINYECEVJZJHDHQMLPWWFSD");
    IMC::RowsCoverage tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.93159893591;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.26784041947;
    tmp_tmp_tmp_msg_0_0_0.z = 0.83048533984;
    tmp_tmp_tmp_msg_0_0_0.z_units = 219U;
    tmp_tmp_tmp_msg_0_0_0.speed = 0.320889916607;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 119U;
    tmp_tmp_tmp_msg_0_0_0.bearing = 0.542901459167;
    tmp_tmp_tmp_msg_0_0_0.cross_angle = 0.86946564311;
    tmp_tmp_tmp_msg_0_0_0.width = 0.302675194718;
    tmp_tmp_tmp_msg_0_0_0.length = 0.170438562295;
    tmp_tmp_tmp_msg_0_0_0.coff = 211U;
    tmp_tmp_tmp_msg_0_0_0.angaperture = 0.429033306073;
    tmp_tmp_tmp_msg_0_0_0.range = 64687U;
    tmp_tmp_tmp_msg_0_0_0.overlap = 133U;
    tmp_tmp_tmp_msg_0_0_0.flags = 173U;
    tmp_tmp_tmp_msg_0_0_0.custom.assign("ATKJMDXIKBKODCZAVDWUOPVZQTNUJMNRFXWFMRBICFGQIPOIHJXYFLLTUZOLHYTPKXLPKZUHSGMVBUPEKMOHARYRCWDVZCNSKTNWIXWQMQJVEEJJCTTTNWQYWCGEVKMXUOBLMBHVTQRYNVZISPDRBJFVSONPETAIWCXQKSZJDUXDEGFHWBIYEAYBCAGEMGJCSDLQBYEWPDUROALILXGPALHHFSCFZNHUOSZMOJEGRQPFYRKARG");
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
    IMC::PushEntityParameters tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.name.assign("GEEWYOOZHCVVTWAA");
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_1);
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
    msg.setTimeStamp(0.210586208594);
    msg.setSource(50455U);
    msg.setSourceEntity(89U);
    msg.setDestination(43770U);
    msg.setDestinationEntity(197U);
    msg.state = 224U;
    msg.plan_id.assign("GRJODLXTWGBTMYHNBSQHJRYEMARUFZRUTLDBYRSMWZZTVAGILQHKAPFDYPOVSPRFVUISCUNKWCSCOCXBTQWHFWLAVQWEVSOANSTVVIQGOFTLUKLBLPPDIXNCJARWYXKAENNJOZEFTAMZFDUIGKKCLHLEGOBMPMVSG");
    msg.comm_level = 230U;

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
    msg.setTimeStamp(0.229110936304);
    msg.setSource(30112U);
    msg.setSourceEntity(245U);
    msg.setDestination(37894U);
    msg.setDestinationEntity(60U);
    msg.state = 164U;
    msg.plan_id.assign("TQDHCNTVSRQEYBAOYNNLPTGYPSLOHWYIPUGCQDRDOKVQETGGFRMVVJBWFJUYDXYMPIDMPSCIRAGJHBGZOWBBEYFVHAMOAPKOJBFKBLDGTXNUQKWHYVOTFAHEPOVTPWRDSUALKNXXNLXWUJKGVLLZYFEFACMKBSBTUICVDAJNCJL");
    msg.comm_level = 6U;

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
    msg.setTimeStamp(0.308306622313);
    msg.setSource(50671U);
    msg.setSourceEntity(134U);
    msg.setDestination(12868U);
    msg.setDestinationEntity(210U);
    msg.state = 48U;
    msg.plan_id.assign("RXCEHQYKUXFBNIFNYCOAPQZAONOBMKJBLWRRHSPDYDHDZYKQAZXWFYMGBJXQICYTSNXLRETOFJVDMGVZALJKCZSYMDPRARGNHDLOKQBIDBZIEBEDPTNJLCVIAGTVWISNVPKVPPHMFTHTHKQUERXLECKOAWHKCGBLWCZJWJHLGLHWMYPJSSVDGAXQLMIUBZXTWIOMFOMFEITCXETIDENAWAUUWFYGPUSNYUZEURORQUSZTFJJCSBXKO");
    msg.comm_level = 197U;

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
    msg.setTimeStamp(0.733228333114);
    msg.setSource(39193U);
    msg.setSourceEntity(176U);
    msg.setDestination(42267U);
    msg.setDestinationEntity(121U);
    msg.type = 7U;
    msg.op = 100U;
    msg.request_id = 51453U;
    msg.plan_id.assign("CSPKNIOKNLCJBIFNVDYXIZTWTAJODAJOFRXXEZXIVUQVEPKOUZTQAGCJBIBZDQADTKWUJFUPBQSSRAKHEOLCLOLYXTRMXRFYETIKDVHNAHKNIUCNMTGHBXYYUQHWOBKUV");
    IMC::Formation tmp_msg_0;
    tmp_msg_0.formation_name.assign("AWDQGSIMZNQTPONUOBTFVNEAWCUQNZXMZUGKJVAHKLJIEWVQPIZKBPISXBILFJBJEQXCKAPXQQOVGISKEIOELYODLCKNVWTLEHEROPGUAVBAAHZBYAWRHPQXJSD");
    tmp_msg_0.type = 254U;
    tmp_msg_0.op = 140U;
    tmp_msg_0.group_name.assign("WODJVCDKPWJNWEMQMH");
    tmp_msg_0.plan_id.assign("KQNBCYMTALYRFRPLYQZGRPVXTLOJBKLSSWZSPWTVILKMXGHGOOVEDJHCCNKABUOOZHNSYEHQOQXYURYXSHDMFMGEJBZFDTMVUCPWWNBBGWFPLOEDNJNYCIJHSZZLTQIIDSFWOPLAFBONTSIJSVJWLIDVRQKCWATACEUXCIKXCEIFZUUHCERMNKADVTUOZPUNFMQTKGZAIUQXWZHHTVXUGBEJRYPYGGKVAARMBPDXFVEPWMQJRNXFDIKQES");
    tmp_msg_0.description.assign("DIOKKSDQGLDHRPXYUZVTERFDIOKJGYOAJKYOTMLRPGYQMBFUMZVNLZCNHIZFBSTCRVWKZRYHYXDTATAMFCHWAOVJSAQALSKINXXLOTAUBDFXJYHEMBCDEJGEQHPDRNHJNPSUKTFKCESZLWEESLVLBLDOYXPBNYXYMFGWTACZQNAGERELMUWMSJVNKMHPBRGKPTUPFZ");
    tmp_msg_0.reference_frame = 32U;
    tmp_msg_0.leader_bank_lim = 0.0423407396504;
    tmp_msg_0.leader_speed_min = 0.386466546122;
    tmp_msg_0.leader_speed_max = 0.256231337994;
    tmp_msg_0.leader_alt_min = 0.632909908479;
    tmp_msg_0.leader_alt_max = 0.362228112645;
    tmp_msg_0.pos_sim_err_lim = 0.445554018923;
    tmp_msg_0.pos_sim_err_wrn = 0.913696494647;
    tmp_msg_0.pos_sim_err_timeout = 38038U;
    tmp_msg_0.converg_max = 0.768095945513;
    tmp_msg_0.converg_timeout = 15075U;
    tmp_msg_0.comms_timeout = 14757U;
    tmp_msg_0.turb_lim = 0.116511413983;
    tmp_msg_0.custom.assign("XYNGURRQHBOTADJPFGLXRZYLJCYTCARBZPVHLXWHCXUUQ");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("XWQXHQUQXBTEHCREMYVIAZDIV");

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
    msg.setTimeStamp(0.454913766795);
    msg.setSource(63128U);
    msg.setSourceEntity(106U);
    msg.setDestination(48987U);
    msg.setDestinationEntity(68U);
    msg.type = 77U;
    msg.op = 207U;
    msg.request_id = 30922U;
    msg.plan_id.assign("CTTVFAATWNJXDRPKXCYGPRTVZMAKVQCSFLKHHLURAVMXLWSUEJYRWRKFUQEUZZBPOQCLOAEWELBHJPWYMUYGSLXKQSXBFMEOEOHFTNTKBFBRDDPBXZJSXOZANIUPTOCNOGAQYQPVGVNISNJJAUCVDTMWBAMDIWJEPUJQKRLGRBXLOJLYYSHMMDYCICCJGGZYSLKIFFCUWDDQVKMDGIHBUEOYNPGEEVNIAQZQSWRTZSHIZ");
    IMC::DynamicsSimParam tmp_msg_0;
    tmp_msg_0.op = 13U;
    tmp_msg_0.tas2acc_pgain = 0.0782273117349;
    tmp_msg_0.bank2p_pgain = 0.624514163184;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("YOQNVURNQTNTAAGJWIQMCNVOLJASJHXFFL");

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
    msg.setTimeStamp(0.856010663922);
    msg.setSource(59792U);
    msg.setSourceEntity(253U);
    msg.setDestination(49585U);
    msg.setDestinationEntity(95U);
    msg.type = 248U;
    msg.op = 2U;
    msg.request_id = 4211U;
    msg.plan_id.assign("BCBPZJVDBBKNUUHKTUDKZROMOUURPVGOSFIETQQSBTJMXFJEDYSPYKGWOZCZLGUIQDEDFVDXHOQKUSLJAVFMWRZCDWOAAVTXBTIBKIRPQNNUELYCTQAFSBQSXMXH");
    IMC::CcuEvent tmp_msg_0;
    tmp_msg_0.type = 177U;
    tmp_msg_0.id.assign("JHKPVECRMHLKBTDIZYTLSMNHTPOUCGYQVYMUZVWTIWXQAKRTKIFSZLUGQGLVHPCQCBHWFAWRCINPYBRBT");
    IMC::ExternalNavData tmp_tmp_msg_0_0;
    IMC::EstimatedState tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.064270898913;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.500887725286;
    tmp_tmp_tmp_msg_0_0_0.height = 0.481312253519;
    tmp_tmp_tmp_msg_0_0_0.x = 0.135070177987;
    tmp_tmp_tmp_msg_0_0_0.y = 0.278791444063;
    tmp_tmp_tmp_msg_0_0_0.z = 0.405902177328;
    tmp_tmp_tmp_msg_0_0_0.phi = 0.570792265923;
    tmp_tmp_tmp_msg_0_0_0.theta = 0.314599368815;
    tmp_tmp_tmp_msg_0_0_0.psi = 0.492794797178;
    tmp_tmp_tmp_msg_0_0_0.u = 0.729105546242;
    tmp_tmp_tmp_msg_0_0_0.v = 0.85724316489;
    tmp_tmp_tmp_msg_0_0_0.w = 0.478871124831;
    tmp_tmp_tmp_msg_0_0_0.vx = 0.0239813584644;
    tmp_tmp_tmp_msg_0_0_0.vy = 0.380776129441;
    tmp_tmp_tmp_msg_0_0_0.vz = 0.529020547219;
    tmp_tmp_tmp_msg_0_0_0.p = 0.730982755192;
    tmp_tmp_tmp_msg_0_0_0.q = 0.764957486822;
    tmp_tmp_tmp_msg_0_0_0.r = 0.765312836116;
    tmp_tmp_tmp_msg_0_0_0.depth = 0.0115700034117;
    tmp_tmp_tmp_msg_0_0_0.alt = 0.925264737454;
    tmp_tmp_msg_0_0.state.set(tmp_tmp_tmp_msg_0_0_0);
    tmp_tmp_msg_0_0.type = 205U;
    tmp_msg_0.arg.set(tmp_tmp_msg_0_0);
    msg.arg.set(tmp_msg_0);
    msg.info.assign("LQZGFSJPXCYHJANBLDBMEUYWRPMWVAKZMMRVGIUEWFQPGGCDQJFLXVZWLTUPJK");

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
    msg.setTimeStamp(0.81511620157);
    msg.setSource(49430U);
    msg.setSourceEntity(35U);
    msg.setDestination(34957U);
    msg.setDestinationEntity(241U);
    msg.plan_count = 52673U;
    msg.plan_size = 4285457108U;
    msg.change_time = 0.855641109318;
    msg.change_sid = 3090U;
    msg.change_sname.assign("OLWBMKSYFDIPYMPTZGQVRLVXQVSUJRYJDDZMVGIXGMCCMKIYUUGRQXLYNGVSFAHUZMBAYRTWGGMIEESHBZABZZAEWOIQICEKPHZKSHDQECYLLVJIF");
    const char tmp_msg_0[] = {94, -117, 19, 107, 66, -35, -40, 46, 54, -54, 115, -18, 75, -60, 3, -123, 122, 107, 107, 79, 49, -124, -77, 116, 5, -46, -8, 85, -9, -101, 25, -20, 28, -72, -86, 7, 78, 85, 95, 27, -120, 49, 103, -8, -57, -54, -46, -116, -10, -6, -70, -19, -112, -93, -104, -125, 65, -58, -107, 98, -45, -55, 50, 80, 94, -16, -44, -74, 110, 80, -3, 56, 63, -51, 47, 71, 19, -23, -113, -50, 42, 78, 107, -27, 55, 32, -100, 39, -83, 125, -16, 82, -33, 26, -14, 88, 67, 122, 71, 124, -100, -94, -52, 21, 36};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("TGZCHUUVQBFQCJYUECJWYAO");
    tmp_msg_1.plan_size = 54453U;
    tmp_msg_1.change_time = 0.804767393356;
    tmp_msg_1.change_sid = 49367U;
    tmp_msg_1.change_sname.assign("OYLIYFHSGVUSGVXHPUJRHTKOSLAUTKPMJQUTXPCWFRWWBPZYZSVLUWMRRNKEBDJIUTILQCVTKNQZZHJIVMQFTFPKICDWBMYFDINENMJSXZVXBVSAAGCIBVEJHWKXAXYUGPBOQWCBLCPRMOVHOEXJDGLAEQIRUNLFSSLTZFQRHJSZNVRPG");
    const char tmp_tmp_msg_1_0[] = {-38, -78, -23, -105, 76, 69, -112, -95, 52, -89, -112, 35, 123, -102, 88, -79, 112, 90, 56, -9, -109, -13, -77, 106, -86, 78, -109, 45, 46, 78, 12, 45, 17, 50, 6, 11, -44, 62, 74, 67, -117, -89, 115, 84, -37, -106, 81, 23, -40, 92, -26, -38, 2, -126, 70, 16, 47, 60, 14, -121, 56, -4, 126, 24, -91, 58, 59, 77, -103, -56, -35, -72, 34, 107, 119, 68, -87, -64, -122, 85, -28, -31, -126, 123, 0, 126, 80, 102, -47, 119, 117, 53, 99, -115, -1, -15, -93, 25, -84, -73};
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
    msg.setTimeStamp(0.22208023133);
    msg.setSource(26532U);
    msg.setSourceEntity(93U);
    msg.setDestination(30122U);
    msg.setDestinationEntity(176U);
    msg.plan_count = 35179U;
    msg.plan_size = 2165155055U;
    msg.change_time = 0.847491580627;
    msg.change_sid = 29585U;
    msg.change_sname.assign("RXMJZHJGMLOYUITFHSFHWJISASRINGLECNPYZTKQCUCWNPONFWQHUYIBNVOAUURAMJQSARBBRDAMRQCZYCR");
    const char tmp_msg_0[] = {35, 102, 14, -91, 111, -100, -31, 41, 120, -35, -59, -77, -107, -2, 96, 7, 77, 57, 50, -111, -96, 61, 48, 59, 37, -54, -43, -59, 31, -96, -89, -89, -93, 31, -15, -114, 105, 42, 51, -43, -77, 37, -9, -45, 25, 51, -39, 36, -30, 75, -116, -60, -67, 68};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("UXPWKOVMRKOVTJGQEQXUOVRURNXKJMIGYIAHXRFEHNTXOOCHLXYOJWLRNMMDUYHPGOFIINRPDBMKTUEFVMUAEPGWBBNKPPJKTSQWWVFHJVSCHXCEWZZLBKQETQCJOIVCRYCKWYCY");
    tmp_msg_1.plan_size = 40370U;
    tmp_msg_1.change_time = 0.6377241887;
    tmp_msg_1.change_sid = 40823U;
    tmp_msg_1.change_sname.assign("YTZVPUGHNSJDDJZVBBAWGDAFJGILAWDNWIBPKFTAOVKERQRWWDQJRCJXXSCYQCHRBVDHTGCNUAIERQEPHYKZULDKWILFRYTCLTAARXGMNFWSFPHIYOREFKETYMMIGYEONQZZEXNJZSLWFJKNTWFXUATJYVKEDOWBIETQNQKPBEKXMXSLMMUVGLHCSFIQZKZUUS");
    const char tmp_tmp_msg_1_0[] = {97, -112, 41, -45, 97, 85, -29, -56, -119, 19, -103, 58, -92, -118, 120, -6, 7, -56, -81, 125, -54, 58, -70, 8, -49, 102, -87, -52, -45, 114, -10, 15, -31, -78, -102, 41, 56, -78, 44, -93, 67, 54, 75, 22, -90, 46, -12, -61, 93, 72, -60, 10, -62, 77, -79, 45, -112, 51, -89, 46, 102, -100, -20, -70, -24, 23, 63, -6, 123, -75, -67, 47, 91, 111, 81, 125, 3, -79, 84, 37, 17, -24, 9, -56, 14, -101, -113, -64, -69, 15, 122, -41, -124, 12, 7, -122, 5, -121, -3, -6, -36, 120, -100, 71, 0, 110, 33, -3, 23, -85, 81, -101, -12, 108, -22, 93, -103, -119, -35, -9, 13, -76, -102, 97, 45, 96, 57};
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
    msg.setTimeStamp(0.466492312192);
    msg.setSource(4110U);
    msg.setSourceEntity(231U);
    msg.setDestination(11491U);
    msg.setDestinationEntity(83U);
    msg.plan_count = 36201U;
    msg.plan_size = 3694105174U;
    msg.change_time = 0.819680327627;
    msg.change_sid = 51840U;
    msg.change_sname.assign("OWIXNYSJOGLPYOXKQZQUHXWEDAJKYBKITPCDCUWVNKMZKXZQOTSDPIZ");
    const char tmp_msg_0[] = {105, -31, 98, 91, -51, -63, 61, -114, -88, -18, -44, 28, -118, 81, -104, 46, -56, -87, 34, 1, 36, 67, 32, -34, 9, 48, -77, -46, -81, -76, -70, -53, 42, -5, -68, -70, 58, 44, -2, -94, 68, 107, 17, 116, -36, -63, 53, -24, -69, 31, -88, 72, 0, 15, -54, -99, 105, -114, 120, 9, 49, -125, 67, -122, -128, -110, 14, 122, 70, 113, 37, -29, -123, 34, -118, -88, -26, -26, -57, -4, 53, -58, -74, -84, -14, 67, -98, 28, 4, -91, 45, -64, 88, 12, 28, 85, -80, 17, -39, -10, 28, -64, 54, -127, 95, 66, 46, -84};
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
    msg.setTimeStamp(0.325031520494);
    msg.setSource(18393U);
    msg.setSourceEntity(139U);
    msg.setDestination(58750U);
    msg.setDestinationEntity(239U);
    msg.plan_id.assign("VFLRIGDKJVLGLCAGEGESWTQQOENXZIPVWHK");
    msg.plan_size = 61314U;
    msg.change_time = 0.182436898432;
    msg.change_sid = 54272U;
    msg.change_sname.assign("ZLHFUBVBRIPWGSEFVHERTWNJCHKEXUTHKXFNHKYINNDCDNJMBXBUNJAJWHVVCBQ");
    const char tmp_msg_0[] = {-62, 52, 87, 12, 72, -105, 80, 34, 12, -90, -64, -52, 49, 91, 5, -53, 123, 23, -94, 87, 26, -74, -104, -28, -25, -119, 79, -72, 112, 93, -80, 49, 40, 47, 114, -73, -19, -119, -69, -48, 113, 94, 52, 1, 22, 59, 1, 80, -110, 82, 52, -104, -25, 29, 63, 55, -13, 14, -15, 28, -59, 1, -72, 11, -23, -56, -65, -89, -60, -47, 78, 33, -28, 104, -22, -111, -127, -23, -88, 102, 118, -72, 36, -74, -12, 68, -38, 29, 53, -63, -114, 83, -71, -25, 76, -80, 88, 99, 114, 68, -28, -114, 45, 50, 86, 36, -28, 125, -50, 65, 24, -67, -74, -41, 7, 124, -62, -96, -5, 37, -110, 21, 34, -126, -29, -102, -74, 89, -8, -73, -59, 94, 96, -13, 116, -17, -30, 95, -114, -16, -50, -50, -107, -127, 62, 114, 82, -109, -24, -5, -50, 88, 17, -43, 49, -25, 25, -23, -50, -22, -73, 65, -13, -102, -127, 91, -5};
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
    msg.setTimeStamp(0.638458295965);
    msg.setSource(22723U);
    msg.setSourceEntity(73U);
    msg.setDestination(55127U);
    msg.setDestinationEntity(6U);
    msg.plan_id.assign("OXYMJWZASHNEQGRRCLXPANJFWWPYNBKZGDTFCKWKX");
    msg.plan_size = 1234U;
    msg.change_time = 0.109180413425;
    msg.change_sid = 35692U;
    msg.change_sname.assign("VOSDNCAEXAYDGWMDEEZJBPWBNVXZIVJKYPKPLILFRNFRZJGQUZWFTANKQRGMBAKZQPYDWLBTBBKHUFHTHYWGIRKVOZWDRQTNVEPAOTBZYPQMXMEUELUTEYWYRJQHWIHSHZYDCZKASTFAOTLMCHGNSMFJVWPXPACNTHLBRCDIGCQXFMJXBLAULSHGOELXFQCVVIFOUSRKRUOS");
    const char tmp_msg_0[] = {119, -43, 6, 60, 85, -72, 34, 28, -83, 96, -57, 124, -73, -116, 67, -20, 107, -89, 43, -89, -7, 102, 124, 6, 99, 77, 112, -84, 49, -2, -28, 104, -40, -29, 29, 91, -32, 60, -1, -104, 57, 85, -17, -4, 122, 97, -26, 91, -33, 81, 51, 70, 63, 92, -54, 101, -15, 91, 81, 9, -10, 126, -107, 5, 49, -74, -38, -8, 72, 115, -68, -2, -4, 16, 119, 17, -115, -19, 64, -4, -34, -94, 72, -87, -72, 71, -11, -51, -94, 17, 114, 31, -31, -109, -127, -89, 55, -99, 57, 80, 98, 14, -122, -18, -88, 72, -90, 103, -20, -51, -31, -24, -99, 22, -6, -77, 104, 105, 120, -39, 26, 54, 101, -49, -19, 116, 114, 10, 6, -48, 102, -2, 23, -64, -126, 46, 110, -30, -91, -58, 64, -108, -5, -36, 14, 32, 38, 91, 121, 4, -20, -60, 61, 37, -1, 77, -64, -128, -32, 80, -4, -88, 95, 96, -36, 110, 50, -24, 30, -61, -75, 113, -54, -103, 14, -127, -32, -46, -126, 50, -111, -114, 95, -27, 11, 112, -120, 76, -81, 15, 36, 90, -106, 13, 27, 23, 3, 103, -57, 51, -68, 94, -61, 87, -12, 16, 98, -72, 52, 8, 51, 33, 97, -26, -113, -36, -22, -32, -29, -110, 17, -13, -116, -74, 111, 34, -114, 66, 78, 78, -99, -37, 40, -29, -101, -47, -8, -4, -41, 73};
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
    msg.setTimeStamp(0.167728116214);
    msg.setSource(63109U);
    msg.setSourceEntity(153U);
    msg.setDestination(23687U);
    msg.setDestinationEntity(106U);
    msg.plan_id.assign("XLFVDLQUZWWGXEIHZAFXCMGEKEZLYUDHZOHWPYPNRKILJOMQAEQHPGEBMYQJXACHPXGCFOENDNYDISXLHRKYZZTOSRQKQBCMUKYNFRPLPMAVZUMVOSUZTLCRKKDBGBBEGSQRRPOOYDTUAZMUMHJMSLNGFJBWQFUNCTPLKWRTESVPVBFEDFAMBUPZCNDYSATGXONKWYJHDHSBCRFJJIJXGIAEOLIWITIVKVWSDNTTJSYBCWGRAIHTVQ");
    msg.plan_size = 30003U;
    msg.change_time = 0.578045280884;
    msg.change_sid = 62557U;
    msg.change_sname.assign("ONILLFFKNXCLMZKHXMSDYWWPBACZPBKLONCXSKVQTRBSDOUGBTOYEWOIFEHCQLHQTINHRJBRHWVYEWDJDQRRBVBEUTPGCWESRJEPFNZAZZYKPVZEQGXMAIPPKARLTCUQQSYMRCXFURWLIVFGESDMAOSTKPJFYXIMGMXCLZBCWGTLFULOJYUUNJJHANQVIDHSMAUNPTIGXGZKMGODVAKEJYSHNTJUXABXZHRIQVCGFNYOO");
    const char tmp_msg_0[] = {72, -106, 2, 57, 119, -3, 114, -65, 117, 53, 55, -116, -53, -51, 34, -37, -70, -37, 27, -52, 37, -117, -63, 74, 81, 2, -16, -33, -5, -18, 103, -62, -122, 121, -52, 37, -45, 18, 46, -44, 85, -49, -6, -128, -125, 96, 16, -61, -67, 19, 64, 61, -59, -79, -81, -96, -18, -77, 27, -37, 52, 78, -70, 23, -99, 44, 20, 45, -94, 28, -94, 112, 83, 72, 124, -115, -112, 74, -59, -49, 117, 103, -106, 19, -19, -99, 1, -63, -4, 90, -111, 88, 15, 113, -122, -92, -80, 69, -107, -105, 19, -23, 120, -110, 115, 76, -111, -37, 105, -28, 31, 98, 48, -28, -111, -25, 15, -73, 5, 120, -126, 35, -125, -68, 119, 54, 8, 6, -27, 64, 77, -4, 52, -4, -34, 57, -49, -114, 114, 24, 62, 97, 125, -7, -19, -125, -26, 59, 47, 6, 89, -95, 86, 22, 115};
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
    msg.setTimeStamp(0.22363818485);
    msg.setSource(58910U);
    msg.setSourceEntity(207U);
    msg.setDestination(36060U);
    msg.setDestinationEntity(237U);
    msg.type = 121U;
    msg.op = 176U;
    msg.request_id = 64713U;
    msg.plan_id.assign("XSAOQFCOLJGTGWNVMGDKZFPPDKLNCXMQUCFVJHZUBIAERHIIGLBQBJNZEMNYSRDSFMSSIKJXITYRWVKXDPKNIEWSNQCEKXSGBBHLGEDMQKGPLRMZRAEBCUFTFJVLHUSFTLRIWXLOAFRYHRHRCMNCIYX");
    msg.flags = 46139U;
    IMC::Formation tmp_msg_0;
    tmp_msg_0.formation_name.assign("KQXEMYOPNYOCHWYYCREWUWTHJIIUKSFOYTDTXDRDBTIKWRQVSQPCJULIOXQKLHUCPPXEDMLZXWHEGGHWJKFYBFDGATZADMDNSOMEHFGIMZXBZAAXERQUEPOUCWDUFJOZVXJAUEOFQNPJLQPUWSWXMNKHJZBRHBEYYLGVVZLRCMMOQVVJAET");
    tmp_msg_0.type = 245U;
    tmp_msg_0.op = 192U;
    tmp_msg_0.group_name.assign("LFDRYFSZXVZAKIOJBLYLMKVXWLAPNERBPECLRMYIVCBTFONOCYYLGPZRM");
    tmp_msg_0.plan_id.assign("UKQCPKRYEGFSRDXLZEFCQURZRSGBZQMGEZSMYBIGXBDJGFBPGNULWZDFGQGWDPVRFLAOFWUOWQXGYMIHPPDNHUERLOWRIACTHYSJIRAMCYTXUJMSQTCLEXELDOGVOCJJKHNHATPQNVJLTFOAVOBHZTPSHRJVAXKSDSMBCLARVQWVCZTVADBZAMETJHAXQMFBQTJ");
    tmp_msg_0.description.assign("HYEEQWTLWBSSCRXWJLHMNELVYHVEFVVNVRUMCRRWSBZITZGQHSPIGU");
    tmp_msg_0.reference_frame = 67U;
    tmp_msg_0.leader_bank_lim = 0.887863772375;
    tmp_msg_0.leader_speed_min = 0.0384758777482;
    tmp_msg_0.leader_speed_max = 0.49418350251;
    tmp_msg_0.leader_alt_min = 0.159657067366;
    tmp_msg_0.leader_alt_max = 0.552071647723;
    tmp_msg_0.pos_sim_err_lim = 0.830964501323;
    tmp_msg_0.pos_sim_err_wrn = 0.565040514356;
    tmp_msg_0.pos_sim_err_timeout = 63151U;
    tmp_msg_0.converg_max = 0.990940747308;
    tmp_msg_0.converg_timeout = 53577U;
    tmp_msg_0.comms_timeout = 25026U;
    tmp_msg_0.turb_lim = 0.276979080802;
    tmp_msg_0.custom.assign("XTDTEIVXXQDLSSIDROFIHLDQWSGSYGCWEZUBPUPTBRTFAYNYXUNOFFVZOHLVIYJPIUCWNSWFFDXQBMDHCKPGHGMNIRGCHECAMWMTUAVTGWGRJAAJKZZKNKPPHXNHEUOADQGDOYKZCMJYNWNSTZOVERRTULZLNHZRRJTLIUVRVJLMME");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("ZTVKYVKNQXOPMQYQHVFMBEBDEUESBIDZDREGUZCGDIYNXMQABNMDLCLWKQKKQYDVYVRJDNFRHKIRVIBBKIONTXPOFWCXMSGUIZRLJSCHADXCTFZOPGYVAZSNDCMFEEYHTASLZKIXPPNU");

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
    msg.setTimeStamp(0.163878335473);
    msg.setSource(34003U);
    msg.setSourceEntity(143U);
    msg.setDestination(30900U);
    msg.setDestinationEntity(184U);
    msg.type = 108U;
    msg.op = 29U;
    msg.request_id = 39814U;
    msg.plan_id.assign("IUSRFRQFCTFQACNKGOZPAJJYFLVHLZXGKUEPIZZODEDTCJWSASBPCEQKLQJZNKONEEMLBPNRGFJZSVYDPIUJWMGSTTPLYAFPFRUMHZWZNVIKPTHXBIKMEQMDRJTZPDMKMHOUHNOJURYBNHKYCWFIRUVYNFBWAECXBIDHVMMXLDVAUVIHBOGW");
    msg.flags = 12323U;
    IMC::UASimulation tmp_msg_0;
    tmp_msg_0.type = 87U;
    tmp_msg_0.speed = 14269U;
    const char tmp_tmp_msg_0_0[] = {40, 30, -110, -34, 81, 77, -84, 101, -20, -100, -11, 51, 38, 62, -126, -34, -3, -90, 26, 101, -63, 6, 116, -16, -10, -73, 30, 45, 21, -38, 87, 91, 12, -90, 17, -61, -41, 92, 68, -81, 49, 117, 96, -44, -109, 97, 120, -63, -48, -80, -127, 83, -119, 50, 0, 92, -98, 110, -98, -65, 93, -51};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
    msg.arg.set(tmp_msg_0);
    msg.info.assign("AKNTGUVXAJQPXRRWWZBJSJSLEHGDCACIARDXHHJZZINPVZ");

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
    msg.setTimeStamp(0.930509252998);
    msg.setSource(54042U);
    msg.setSourceEntity(79U);
    msg.setDestination(138U);
    msg.setDestinationEntity(23U);
    msg.type = 228U;
    msg.op = 102U;
    msg.request_id = 46767U;
    msg.plan_id.assign("JYXXORIJUCPGPISSXBCMTKAYAPPPUNDAVOMRVLROZSYJWRGYRINLVJRYSTMRMAFAASYZKTCKHOGZNFCZWPWYSDOKEUQBMNEEIRCGVXYDVBBMHRLGEIGXPTQGPHLZKVYDCXHQBJQWCDTMUUILONPLHFTUZQDETLZYXBKOOAQEMZFVLWIGHKQLBXGHDJHICFZUNCMKXENW");
    msg.flags = 8707U;
    IMC::OpticalBackscatter tmp_msg_0;
    tmp_msg_0.value = 0.0975708867945;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("VAZRRUXUDMERFDTZAIWWCNXVSEYLSXZHUPNOPWDVQAVTJYIJDGFNDCXPBTGYJGGBSIQAZNFVLOPLMBLDSTUCKFDCFQNLIRTZKOJSCMGYRYISFXBLWJBOWDTVEWLSIDHAHNXVOIHBYSKAKEHDCCWKYEHQATIJHMTEENYNLRVXGKVWMTKQYIBWEMNUHKOCPAIUXPMGQZBFWBXJFZEOHZUJJPUGJH");

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
    msg.setTimeStamp(0.805870472982);
    msg.setSource(14481U);
    msg.setSourceEntity(138U);
    msg.setDestination(26389U);
    msg.setDestinationEntity(116U);
    msg.state = 227U;
    msg.plan_id.assign("GCRPNEIENMKBWPCDGNHDECEXDGHEOKZQUWYSXLCXCDESTFKHGZIFHOUAQVPURBTGZPVAXZKFSMXTTALYZCPJHSAMSINYAXSNLEJAJQHJHQJDTJBUIYIMZELBRCNQVNOVRONE");
    msg.plan_eta = 2057593578;
    msg.plan_progress = 0.672314956465;
    msg.man_id.assign("XDQDCKMDXNIFHAHUSE");
    msg.man_type = 53467U;
    msg.man_eta = 707332382;
    msg.last_outcome = 123U;

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
    msg.setTimeStamp(0.5831806478);
    msg.setSource(53418U);
    msg.setSourceEntity(153U);
    msg.setDestination(26038U);
    msg.setDestinationEntity(238U);
    msg.state = 203U;
    msg.plan_id.assign("GSSARBPISTXGJVBHIJGWWVDJMIUJSZQEXEXYFDLMHKFMVVGLWBZRXYCGPTCUDACXHSABKKSRUPYIGTMTJUXUOQYHIBDOETTHHCJBDUILRPPFSACHWWSOLKCNTVACHXEQNJEYSOMEEZVMAYHLAOPQKIJEBLGZKZNYZQMORAYJWUMFKFBUBNQWANNVNQYZFGQAOOIKPXDZPQLV");
    msg.plan_eta = -264601314;
    msg.plan_progress = 0.730515315863;
    msg.man_id.assign("IQTXRAGWTVLMMAELDUEAJUQONUHXGDUZXJMYCDJXUPISQHOSEYSVYBMFGGNAMSOBNRMTVBKCNBLTQBQNUNWZPUSFXOBSEEOXBDFFVNHIZHPMWIEYB");
    msg.man_type = 44642U;
    msg.man_eta = 966039085;
    msg.last_outcome = 170U;

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
    msg.setTimeStamp(0.361978430681);
    msg.setSource(47286U);
    msg.setSourceEntity(217U);
    msg.setDestination(51364U);
    msg.setDestinationEntity(185U);
    msg.state = 13U;
    msg.plan_id.assign("WWYBHHTGDQJMIYXIKSNAJWZTYMBGHSVTCREDQFFKUJFNXEKYXBFOGXJBGRBLAFMRHCXAKJSTZYUNM");
    msg.plan_eta = -1231542314;
    msg.plan_progress = 0.966240024929;
    msg.man_id.assign("ELMPSPCEWRQBHLVTHUUUJLJQBNKDHKSYSFMMJJMRXOLSCAVZDXRDABBDEWWOKGYGMJBADJPQFVRLUHKMIRHYTBAEEAVQWLGFAGALXXUUNHICGPZBFECSVQELNOXNIWYOHOJOITIWLPDFCACIATMTTXTOSXOSFCRZ");
    msg.man_type = 51389U;
    msg.man_eta = 144234385;
    msg.last_outcome = 239U;

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
    msg.setTimeStamp(0.470794937492);
    msg.setSource(16411U);
    msg.setSourceEntity(87U);
    msg.setDestination(18901U);
    msg.setDestinationEntity(37U);
    msg.name.assign("BSLWXCBYHAIUQDETHCITWPSDRYUYVNNUYNJQEUVJINOSNVFICXXZRORTCRTFEXZYAFNBFHOXWAEDDKZDMQTPGJMCUSPQRIVZUTGZMXPHOGQRLTEVJONNPCBXNSVIPLIKMWWLJAKRGJZDDJKEHBTBVWHGQVHPZDMVMMOFZDCPSGLS");
    msg.value.assign("YJCRZTUWDWJWZCXCKHSBLJZCLWVHQVLHMMNNYLRSDUJMMOKOPQEHIDRXSRVAGPAHGYRQBNXIXIHZFKKJWTDGEUAWMCAKVJFOSEHNVXMOLQHTHSTDABGLIFJFBRJTZEXPZDZXLBXOCQYLLBZIVPYBEOFEDAONEVBXSQUAAIBCKUUUSIVTZCVTJCMNW");
    msg.type = 222U;
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
    msg.setTimeStamp(0.514583182425);
    msg.setSource(39773U);
    msg.setSourceEntity(33U);
    msg.setDestination(39222U);
    msg.setDestinationEntity(41U);
    msg.name.assign("FQEPNFOOAQJTYAXTCNHUVIQWENLQGRPSUFNELV");
    msg.value.assign("ZYXHXWNLMYVQWQVTCTKWQRVSDGDJJRPFNOJWGEGUDRTOEIXUXDQNEUXFPNHCWUCOI");
    msg.type = 134U;
    msg.access = 36U;

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
    msg.setTimeStamp(0.622770676891);
    msg.setSource(15009U);
    msg.setSourceEntity(39U);
    msg.setDestination(26231U);
    msg.setDestinationEntity(16U);
    msg.name.assign("MBHDPYTQPGSXQQJATWTKCREOWYYTUGBELRDGKVEGHZNIMPTAWVWGOWHURDJSHTBICJUFRNNJQGRRCTVRSJWXULYSEEKUPXINYFRHHNQLCOFXGZZLQLMBWVVNBMSZNIGVPAGLJCOSTEMLAMWOGWKIPXKSJUBXKQYMVWCCICEB");
    msg.value.assign("DFNAOTQMBFBACZPUOYHJVVFYPVKWAWWUMDYEQYYLSOHTEUSSZZJXCNESAFPGIDEAISBGMTBXXNISFIDVZHRXHXTRMHMSZPNPDHLQXEFPIBLBQVTWZHACGQBDUANTYCZGZOG");
    msg.type = 139U;
    msg.access = 126U;

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
    msg.setTimeStamp(0.618690163722);
    msg.setSource(30153U);
    msg.setSourceEntity(254U);
    msg.setDestination(26338U);
    msg.setDestinationEntity(47U);
    msg.cmd = 18U;
    msg.op = 10U;
    msg.plan_id.assign("GBRPBOWJVWUNXSIGFLELEJZTOIODRYEJBZCHSWYLDQLMKAZYGFGDNZLQCQLJHKTQGMYCHMKELHXUUWVAACUSAWTHPPASUJTVMRNVGRIQMSUWQWAZNVPZKHHBGTMOITOFMZHBUURRNDVOAHWSYJGMWWGKDSETMILXQRDXOFBVPEIP");
    msg.params.assign("VBOEEJOJYCKFSHRTGPSFIKCNTPCGYJOUCEIDHEOUAHXLZJRFVPSKLIDMPMZJQKPWQJNKUE");

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
    msg.setTimeStamp(0.939605113689);
    msg.setSource(8792U);
    msg.setSourceEntity(196U);
    msg.setDestination(2980U);
    msg.setDestinationEntity(207U);
    msg.cmd = 208U;
    msg.op = 212U;
    msg.plan_id.assign("UGKPZRGJOSEENEWAXBMDMOSNTPXIQOJRBFACSWZAWVRBWHDPYSNOQLXDRZHPFPLMFKTRMUMHNTEJXQLRXNZYZSLBLCTDUJQERSTXVJYCICTGFQMNFZIIWWDFQGIYXEOJFIAF");
    msg.params.assign("NEQUWCXTGXEPDDKTPXCBWUNRYBAEZLTIJOFOYDISSUCEEMRTAEAKQEFHOZANFLPNBYUBAGRDMJRLOBZEHPOVCGQOVHKGIYULWALLQAZQKPWMNHJSMVJLJZKFTUJHGKKXXUXGDSPVAMOAQISODZDXAWSFGYQTCPZNIVNFDHSBMBUTPIQBEXUNNZIVDYYHJMIHRNLKQVSHJ");

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
    msg.setTimeStamp(0.31502844569);
    msg.setSource(30329U);
    msg.setSourceEntity(190U);
    msg.setDestination(23131U);
    msg.setDestinationEntity(201U);
    msg.cmd = 158U;
    msg.op = 192U;
    msg.plan_id.assign("BHBEEJETVOXLRBIBXXNPQHJAGCDRZIZNNWIRUZCVBCVPVRUWHICMWESGUWWGLGSFWTNNYBAISKTANGTTFWVUWIUXMFQKJZGXKIPFIJYFLKHBYONDQLMEHDRDMVLYTEDCTDRESOUKR");
    msg.params.assign("TWOEEDNPHVAQICFWEJXAVSLINYHQBLUZXQQQMLIXRBFFYHBPMZVWWUDMGZNYRAKPETFJGPJRFXKYJPOY");

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
    msg.setTimeStamp(0.179497869892);
    msg.setSource(4639U);
    msg.setSourceEntity(215U);
    msg.setDestination(21201U);
    msg.setDestinationEntity(176U);
    msg.group_name.assign("DXOPKKSNPHYOBWADSIVGEUAQKZDCQGLUWMMUWZZTVZLRRLXIFXJTDRQIQBPBMURMWVJLLCWQNDCWIODMCNTNZXSKFXRGRKEQOCJOPUHKJHCVIFBGFTLBVRIBWHBCOHFULYKXPENWVCMJAAAYNUXYOUHPEFJYQSPDGSDYLLFGONQJYQDPYASPQCBZTNYAHFIMEOJKAGEXZMVHRKYAZDLTNTZIHGBMCAFUEOWIEUZEE");
    msg.op = 15U;
    msg.lat = 0.274575486338;
    msg.lon = 0.973415636574;
    msg.height = 0.414814274783;
    msg.x = 0.975858719784;
    msg.y = 0.640426570523;
    msg.z = 0.521672900523;
    msg.phi = 0.979913492889;
    msg.theta = 0.305169029209;
    msg.psi = 0.976533590122;
    msg.vx = 0.72263492941;
    msg.vy = 0.663456039787;
    msg.vz = 0.423669483344;
    msg.p = 0.291370937959;
    msg.q = 0.477165465238;
    msg.r = 0.418948612455;
    msg.svx = 0.762092440202;
    msg.svy = 0.795013323211;
    msg.svz = 0.425827288197;

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
    msg.setTimeStamp(0.33982900894);
    msg.setSource(15437U);
    msg.setSourceEntity(249U);
    msg.setDestination(18548U);
    msg.setDestinationEntity(206U);
    msg.group_name.assign("CLWKZEAZRJBLHMYGAWJLERDLFIZMQSYFKEWVKNQQPHWPXGPIGBKXDSOLYHCQPZQ");
    msg.op = 183U;
    msg.lat = 0.576513507278;
    msg.lon = 0.702098247999;
    msg.height = 0.427447544525;
    msg.x = 0.0797396730077;
    msg.y = 0.684004033972;
    msg.z = 0.681134170857;
    msg.phi = 0.869929550639;
    msg.theta = 0.468709842075;
    msg.psi = 0.795784872224;
    msg.vx = 0.0818771312949;
    msg.vy = 0.826041707342;
    msg.vz = 0.866564224421;
    msg.p = 0.72974104591;
    msg.q = 0.431576654699;
    msg.r = 0.203812529607;
    msg.svx = 0.898486585364;
    msg.svy = 0.651864276714;
    msg.svz = 0.402266843345;

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
    msg.setTimeStamp(0.448262353448);
    msg.setSource(55341U);
    msg.setSourceEntity(45U);
    msg.setDestination(9937U);
    msg.setDestinationEntity(138U);
    msg.group_name.assign("CGPVOXIOGTBHKUDBBSLAXPYKECEBCUYQTUAIDNNHVFHZIQZKFHPRTVOWH");
    msg.op = 138U;
    msg.lat = 0.00979060200131;
    msg.lon = 0.717987766055;
    msg.height = 0.959500901244;
    msg.x = 0.309385471886;
    msg.y = 0.760197146126;
    msg.z = 0.713083301848;
    msg.phi = 0.229549349354;
    msg.theta = 0.617716722622;
    msg.psi = 0.924068752556;
    msg.vx = 0.850792073438;
    msg.vy = 0.759722062833;
    msg.vz = 0.111699771748;
    msg.p = 0.419441026344;
    msg.q = 0.275300461418;
    msg.r = 0.964250664816;
    msg.svx = 0.878682869167;
    msg.svy = 0.556860754508;
    msg.svz = 0.278191585734;

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
    msg.setTimeStamp(0.334535300509);
    msg.setSource(33554U);
    msg.setSourceEntity(0U);
    msg.setDestination(45632U);
    msg.setDestinationEntity(85U);
    msg.plan_id.assign("FMUBGANJLNHP");
    msg.type = 32U;
    msg.properties = 0U;
    msg.durations.assign("KCTJBUIOEYXTVBLRVMJIZWADLJZZKEFX");
    msg.distances.assign("MYXHJNQYTEOLPNDUISCHZVHJKULUGEMIPTKYKLNBPCMSFSLAGEXQSWDVBXTCRWQACUFCRBVQVDWDGLRIOYZAGJLIOHFXIHFPJIEQCKUVZYKCJTENDSNOWVGUQXAUTTKABMXPAFGLKAYZBLMMANDKXOWOSVFJTJORSDNZR");
    msg.actions.assign("VXWXGICHOLOJUGTCYK");
    msg.fuel.assign("FSZNFDMDMRCPCYZXINIXOUZLDNLMILHSXUZSMNOAOJOVXLERJWCAHDGAPGGTHAVUCYJJMCBLZQDCGJUTFXGTVWXSZGTMOZPJUNVPPAHYSDEYWNFJTMCRIIEIRWUPUQMTDQRBEKOCSEBKKOWMADQQEGVNKKZWNJBUSGNREKQWLSDOAVXCTJHQHXFUXUNGRTBPYYFPYIWAYWDKLAQVOHSRBFLSMRWKV");

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
    msg.setTimeStamp(0.423740563132);
    msg.setSource(22204U);
    msg.setSourceEntity(166U);
    msg.setDestination(28355U);
    msg.setDestinationEntity(116U);
    msg.plan_id.assign("JCIOALMFYAPIJYMMMBVJQROTXBUJXSIATHBXNUHZFXUEZOJNMMKTNRGKBLGEAWSGKJSXDBPBVOKDOJTCDXZPBYFKGNRAYQCCZCKNIYQEZIHBWWZSVUTJFNPNVDKTSFKNOQUVXMICVLKBDOCCIPWEQEXQRLSQGHLOM");
    msg.type = 222U;
    msg.properties = 109U;
    msg.durations.assign("XNPWDXZOZOFZMFZWFDLKBGPROUVUQHLYRTXJUAIHCKSOFSYVXRMKNAYRFCMOUKCBPVDAQWNCZSLSIDHCFLIFIRLMWXJJOBJTKGPLRBZNYXHPBWTQIJKEVRGPNCKLXWGWQTLEUAIMYSQTHFHDPYQZKKFATEMJXFBWVLTZYVUEMBAEPNYSGULJQQTQVCXDIIHUWCXA");
    msg.distances.assign("OFKTRIBNCDBVRMZMHPPAYOKJKDWTGGUSLVOIQEXMVMEBZVKEZRJVAGNVMQFRCQUVVLAPYZATTOUDWPGPWHXPJFSEYQGDTUAMKYGNBKNXSLYGRFLHUZYZEXSLQFDBOISLDJFTNHSFPQKJBOINCSHHQOEGBCHBQVOLHI");
    msg.actions.assign("GNTURUAOJNDRKVWKVWDQGJPWYR");
    msg.fuel.assign("DMJBGPKSJWQEZVRTNIEKNKQXPQDHOAROHWFGQHGLYAHPPLTWIBYIIRJUTGSROHIOPLCUSUXVRMFKMJGXHYCUJZQZBBRDUDVZNQMXXOLSIQLFASEJXPFLOTPRITBSKYGBYEWMVBCWCFKWAOLODCCRTHZTVMUIHMYCMJZHQVMWFAFKDUUNFZVDCRATUKLKZYNJEEDGTXEJXVVZXBIYHNWYDGDAW");

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
    msg.setTimeStamp(0.972005898403);
    msg.setSource(4810U);
    msg.setSourceEntity(114U);
    msg.setDestination(57501U);
    msg.setDestinationEntity(150U);
    msg.plan_id.assign("ZHWJWLHHVYNTQBIZMBBVQAVKRVYREESWJSNSMHUTKYFZD");
    msg.type = 37U;
    msg.properties = 185U;
    msg.durations.assign("CECNTOTICFBYIOSMQNBOBIGWUFQXRHCFAPAKTUWRRLSQDDJFSKTSWATRVAVXLNZJLQREETHNEAQMRAZXH");
    msg.distances.assign("MSDXTIIRCVXCYSUJPRAGWJDASTGXONPPYDRO");
    msg.actions.assign("TEBGIBRJJGGVSRBLEZXCH");
    msg.fuel.assign("CLNVJOHMSGWXUDMTPHHOQR");

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
    msg.setTimeStamp(0.299773059006);
    msg.setSource(22167U);
    msg.setSourceEntity(41U);
    msg.setDestination(1240U);
    msg.setDestinationEntity(141U);
    msg.lat = 0.166421486672;
    msg.lon = 0.933956548862;
    msg.depth = 0.0492093584616;
    msg.roll = 0.683574692416;
    msg.pitch = 0.516593745152;
    msg.yaw = 0.312219837507;
    msg.rcp_time = 0.87535006907;
    msg.sid.assign("WIACVFBUBLEVHHAGVOJQ");
    msg.s_type = 80U;

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
    msg.setTimeStamp(0.324165056689);
    msg.setSource(9066U);
    msg.setSourceEntity(56U);
    msg.setDestination(61357U);
    msg.setDestinationEntity(191U);
    msg.lat = 0.806505440785;
    msg.lon = 0.455396708946;
    msg.depth = 0.0734450885814;
    msg.roll = 0.516920391564;
    msg.pitch = 0.0634814969816;
    msg.yaw = 0.645853764258;
    msg.rcp_time = 0.696768824295;
    msg.sid.assign("SVQGAKKHJNBWCAKPXXIIRDIVYYZEUUMHKIEQPCSNXZOTYCKWDJGY");
    msg.s_type = 148U;

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
    msg.setTimeStamp(0.86679080909);
    msg.setSource(2104U);
    msg.setSourceEntity(174U);
    msg.setDestination(9259U);
    msg.setDestinationEntity(60U);
    msg.lat = 0.708631008539;
    msg.lon = 0.956230161186;
    msg.depth = 0.832670266467;
    msg.roll = 0.510037462022;
    msg.pitch = 0.117544006823;
    msg.yaw = 0.993684959643;
    msg.rcp_time = 0.383847463955;
    msg.sid.assign("ZPBAYEZMEUBYGZRBEUVCLRJRO");
    msg.s_type = 193U;

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
    msg.setTimeStamp(0.734140174223);
    msg.setSource(18480U);
    msg.setSourceEntity(53U);
    msg.setDestination(9534U);
    msg.setDestinationEntity(68U);
    msg.id.assign("KNODPAIUFSG");
    msg.sensor_class.assign("TOQDCZEUBYRADJXDCHNTYKQGLROUCGHEQVSWWETCFBSRQWWEFTKTPLAFYLSBIHKYLIBFKNXWDHNKSJAJMRCSLXCLNOWVOKJNEEEIPUWHRYJCXGPUYRBVUZXKEHVIDLTMIPZYBNUXBKBRPYNZQPCDGNJQODISGOHOYGHDUOAVYJCVLSOQXVWXFFSTFARMSLIMLIUZXTKSZICQFRJAEMZD");
    msg.lat = 0.675214785821;
    msg.lon = 0.598337194494;
    msg.alt = 0.32758915943;
    msg.heading = 0.902818519842;
    msg.data.assign("KFTSXMJXXAYGAYJZLCTKTLJDRXNJMJSIVGTAPHKBJEINMXXZRNTSPNKAPSZSXESVLCWPIUBEWLJLRZDDDAHVULNAIKTEDSBZHEJYEFMCVXFWNH");

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
    msg.setTimeStamp(0.225402621768);
    msg.setSource(43759U);
    msg.setSourceEntity(99U);
    msg.setDestination(37877U);
    msg.setDestinationEntity(230U);
    msg.id.assign("OXPSNXVYNGKVXWFHWRVFZLMPEJLDABYLOSEKFOXADPECTAMVJJDRYJZHWXRBGETQJMMZMKCESDYUWUEHDAZVSJULFBSDNZLBCIXDPTIMKOYUAGRGKKPDZOCUNXFNHSMIFUUKOYLCEMZPPYMQXJFORWONQAQIFMQBDQHTYGUTIHPRJQOLZTBVAZVHLWXSCFKBCYKHBCIWVDPJGLEPEISARCBTFGIL");
    msg.sensor_class.assign("HJKVFILIJUZDFKRDGIERBWLTGNFPAIXEZVNAGUEROUPSBLUDHXDKOIXAGPDXCSNV");
    msg.lat = 0.129635513975;
    msg.lon = 0.647504696163;
    msg.alt = 0.779273081276;
    msg.heading = 0.995766991982;
    msg.data.assign("GSFSNJZLDAFWWBPSRTGSDHNILPTHDLOBTBWOVTCGBIXYYLNUOUJJCKVUOYSSHXXRZZUZOEMQWTDPBKKNQXIMKFSFDVEDRXGPJOWPZNMVUBLUVJPRVQYVKTYLK");

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
    msg.setTimeStamp(0.689940309713);
    msg.setSource(59658U);
    msg.setSourceEntity(3U);
    msg.setDestination(39267U);
    msg.setDestinationEntity(183U);
    msg.id.assign("XWVRKSWFVOPQVAJMEPOCYHXNJTRWX");
    msg.sensor_class.assign("JSDZKVWVXAHFNYKQRCXJVGVWVIJQOMNJCBLSVGECYHPZXOQDHWGFWBQESUBKSMJRIHKOYHLQKFUWUGKVLBANTWPYQRWZSUSETSRRYOZGOTHDAERPPDSCZTBLBKHEIGXRIXZBVFDJTNSYYQCWNWLQHNZLPCGETMMDECXMJDAFDPXFPIXLELWRAMAUBXUSDMUPYETKBUAROOMFOGREGLKAOINIFBFHDZTNJQ");
    msg.lat = 0.0903990967217;
    msg.lon = 0.248466311354;
    msg.alt = 0.993514180397;
    msg.heading = 0.553848181406;
    msg.data.assign("IADFWWLRUKSISKGSSLCMRRTXXJBCOEDRVPYNSCKZZJZDUQBXYBVMHTUIRJQTAIMSWTPVNKPKOCHGFOJPNWAGUYMAEYFEEZRKPWTPILIQUGAVKXXPYSDMYMUYBDAOCQTLFXXYRLLJAIHNBHZKWINMKUVTAWEROBTEAUDVEFWGJJBZSDNEMQQREWNTVUHYBXGONADNBM");

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
    msg.setTimeStamp(0.0848026695413);
    msg.setSource(6849U);
    msg.setSourceEntity(0U);
    msg.setDestination(52262U);
    msg.setDestinationEntity(48U);
    msg.msg_type.assign("CNWRDZLBBZRNDJMPVGBQRCEQFNASDKUVGUIWBBIQJHMGVLGARIOSPBTEKYYXRIMUERHRRZLCMXDHFUVMCEDTTGNPAOUYYPFJDTPKMOWPXUNJTLPJZFPMWKAAEQXKCMAUXNUCTCGTDTSTOWAKRFKOINQJHXIBWLFFOOIFIPEVNXQLHQESFKMZQHCELGLRXESVAKGLSNBWYZQMCOOUHJOFVIBHYXQHWPZ");
    msg.sensor_class.assign("KHNHMSEVIMZSRVZDXRTJNDOFZYSTDQCCWHLPQAWURYBVMVREYIFPTKZNMDTKXAOSMVUXVHBBLCGVNOFPN");
    msg.mmsi.assign("USBDBMLAZKLVVKRXDIIMPZNDJALLFHZZIVXCUECFOVROGMSWCFJMHZQVCBSYNJEGRTYZQKQKETMUKEXQTTIYQMIJYDNEXOXIOUEYCQYWPLZAAPEWCSCTURKOBZHAZTDFFLJHMGXPOBS");
    msg.callsign.assign("QDSGQDNAPTPYHJCRKMIQUEWLAVIHAVLWWICECKPEAKBSQZAMMOVIWEQDNTIFBCWAENGSDLQDFPQJLBYSBPYJJRQZSJTWEULAONEGPXMLLVOZOUUHKMCXEHNWKRVUZCYENTMMOLETLVJHMVSFFNRGXGCCBRXHSTXAJQTYDIOKHDTVKPKPPIIFUROBVAFKGJZTXHKBHODBRUG");
    msg.name.assign("TGONORIKWUILCYK");
    msg.nav_status = 195U;
    msg.type_and_cargo = 97U;
    msg.lat = 0.623113576337;
    msg.lon = 0.548376678582;
    msg.course = 0.392404053248;
    msg.speed = 0.537090544543;
    msg.a = 0.400461033334;
    msg.b = 0.453154943728;
    msg.c = 0.546845102854;
    msg.d = 0.162389706103;
    msg.draught = 0.137129875753;

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
    msg.setTimeStamp(0.934879986038);
    msg.setSource(21704U);
    msg.setSourceEntity(42U);
    msg.setDestination(2677U);
    msg.setDestinationEntity(213U);
    msg.msg_type.assign("SWYFADYDSTGTQHNVJNOXDFMHLIFTPPICWBSAPTNJERNRAIKZWJETMCYYEKMPUVXZNWEXSWOXBKGBPMEUQAOSYGKALULHNBHMETGQUTUZELKSBOAFCBEDRLYUICYSQZRVSIHOXHCXLLYNUBDWFQXKNRULPOD");
    msg.sensor_class.assign("CWLLMBFFSKBLQXKFEATLXNRLHGIDYGXNPSRUWRCAFTOSHCYYEGTHDEZZCJOHRNKJEWVFQWSSIKEPISBFGZPDVQKJRQDXUGIJFTBVBIM");
    msg.mmsi.assign("GEXTBNGFSRVLGYMZTACLINLYIHQJPOKONHHJWXYMSYRHSSWLNHVIRKFZZENLGYFFLDWWKEOMQ");
    msg.callsign.assign("KYWDJVCVHVOQLZNPRKTTOUKCNXYWXHCDAPNVWNUHRWAOTWSALJRRYLGVGMHENOVIXRLOCBOTQDVBNBZYIHLUZRCUZDEBISALSYNHDYFUJKFQMHCRNRROZIYBPKPMC");
    msg.name.assign("FRHHWPUPVZVXTDYHLTSVHOECWEAEOISLMBXKIZMKJIFKABFNJKQYLUUIXOWKCGMFSPFJIVUAQZYKDOFMIPYGZTCMKXYOPMTUGQSDHB");
    msg.nav_status = 182U;
    msg.type_and_cargo = 207U;
    msg.lat = 0.244336932588;
    msg.lon = 0.862210029786;
    msg.course = 0.19769551759;
    msg.speed = 0.285161210124;
    msg.a = 0.88238050541;
    msg.b = 0.531324145617;
    msg.c = 0.916995572762;
    msg.d = 0.731673889715;
    msg.draught = 0.793243200436;

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
    msg.setTimeStamp(0.582347366608);
    msg.setSource(24595U);
    msg.setSourceEntity(31U);
    msg.setDestination(18704U);
    msg.setDestinationEntity(66U);
    msg.msg_type.assign("PIPAMJNRHRBZPSQKLYERBZMHAKOLFZKKOKWYEULJDWJSTZMZTCCQJXYGORMIDTLPUFWQY");
    msg.sensor_class.assign("RRQMIVGRRTWUDQMFVZEJTFSAHUIBOPFGBTJHGXUBEEBCDXKVKNPYQUQNZKZSJGYVPQA");
    msg.mmsi.assign("QOFUKPANOPTMHYZRKJZIBEZQREWODIQUNNJBCBTNSLXRVWQGBXTFNUAEEWJTVZMMLXXZYDPGCJKPJHBORLJHNFUSCCXVDZLYAGSYKWDKNFOCZVIIQHBLTWUSPHMAZJDVOGWXPIA");
    msg.callsign.assign("HSERJSNZVGQUOWKJJVQNEJEFJTIXFTJODZPHGCHQINRWYDZBAHMACACIVTJENHR");
    msg.name.assign("BEHRVGNSUZMRXBPKSAFASWPDRGLBAFEMGCWFNMCPIEHOFNTKYSYXXMO");
    msg.nav_status = 235U;
    msg.type_and_cargo = 40U;
    msg.lat = 0.423187960072;
    msg.lon = 0.122223784534;
    msg.course = 0.224887491241;
    msg.speed = 0.564391986483;
    msg.a = 0.721646992915;
    msg.b = 0.352682210222;
    msg.c = 0.330222398227;
    msg.d = 0.929270373762;
    msg.draught = 0.539489095628;

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
    msg.setTimeStamp(0.947145234599);
    msg.setSource(753U);
    msg.setSourceEntity(143U);
    msg.setDestination(20729U);
    msg.setDestinationEntity(111U);
    msg.id.assign("YJLYMXAZEVINDDBOTCSYZBQBBSUMEFJUVJPHAWVDQDTUKMVRRNGMHMFQLQPCQCKXXTITBDGSHRWZEMTFQGOCUKCXTEEWXGWALXEBOAKIRSFGPNPKEXAPHGAQZNRSZHHVSZHUSAMLIUI");

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
    msg.setTimeStamp(0.085145506604);
    msg.setSource(34712U);
    msg.setSourceEntity(244U);
    msg.setDestination(52617U);
    msg.setDestinationEntity(20U);
    msg.id.assign("GLFYRRNTLYKJKNPPKZZXNCFBBXKKYYCAUCWCYZTQAROSTXZUWMHDMWUNCJPJSSMUBPYXFPZIAFYHQECOOWNWISJIJMFVIREEWQAOUWDVQTSNUHCOOUHQULPGAT");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("QPJHBIIDHKPKXUBSQOEIVTBGESWXZCKJRMGFBHQULFGHEFWYOHDYCPPQAILUVAJAONCXVNDVMUMWLHHSNGGTFBPGMSYXAKMMCGFYJAZNTUINARYKPQJ");
    tmp_msg_0.feature_type = 36U;
    tmp_msg_0.rgb_red = 81U;
    tmp_msg_0.rgb_green = 130U;
    tmp_msg_0.rgb_blue = 26U;
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
    msg.setTimeStamp(0.0186473401258);
    msg.setSource(2552U);
    msg.setSourceEntity(52U);
    msg.setDestination(19532U);
    msg.setDestinationEntity(11U);
    msg.id.assign("NCPPMILKHGVJSNEFBXCOOBKFNNMKBGSFBPQVTMQBMQVHUJQLTRILEKCYXULFUJKXWMCIOACNDD");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("MWOUCWFJGMGQPJSDTTYCIVWRTJFYVRNEHZNGZULYXKBZOKVIJEWBSQLDCEBJIYGXYSDVPQJDHFPJVCSMTLAUKYVETDBRUHZYGJGCZHXNKXMOEZCIWXUUGJFQORQBHDLZRSIRZEQCMOHIHNNHAZLAILOOELFWMFENOSKFLIGQSXPXERWABMGSNIQBPRKKQCTHMSJPFUUPTTMLAN");
    tmp_msg_0.feature_type = 54U;
    tmp_msg_0.rgb_red = 84U;
    tmp_msg_0.rgb_green = 63U;
    tmp_msg_0.rgb_blue = 167U;
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
    msg.setTimeStamp(0.570798582721);
    msg.setSource(14847U);
    msg.setSourceEntity(76U);
    msg.setDestination(42612U);
    msg.setDestinationEntity(47U);
    msg.id.assign("OGTBVOPNOBBUFUIRDDWXHSTWWWKNPRPEPEAUDFEUNGBAPZSSWEEESGBHAYTZFJICIECOLMLKSMPOTXGLXFSVBSFFXLGPQUYXVQYDGWFZCBNRMQEJDJKAIWHUJDKMHXFEZCJZFYVYSNWJKZOXUKMMKYAUDDKQIRAHMGLVCYLUHONTBQLLTCQ");
    msg.feature_type = 225U;
    msg.rgb_red = 57U;
    msg.rgb_green = 78U;
    msg.rgb_blue = 188U;

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
    msg.setTimeStamp(0.546428674092);
    msg.setSource(3521U);
    msg.setSourceEntity(28U);
    msg.setDestination(18853U);
    msg.setDestinationEntity(67U);
    msg.id.assign("WHEHKCMQBIYYLTOAUGQVPTRPMSZRJLFBQIEYVNFLJQDLTLKLENXTVHZKJEOX");
    msg.feature_type = 188U;
    msg.rgb_red = 181U;
    msg.rgb_green = 225U;
    msg.rgb_blue = 116U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.479999698528;
    tmp_msg_0.lon = 0.983383646669;
    tmp_msg_0.alt = 0.594083314057;
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
    msg.setTimeStamp(0.629973934942);
    msg.setSource(14784U);
    msg.setSourceEntity(217U);
    msg.setDestination(29738U);
    msg.setDestinationEntity(254U);
    msg.id.assign("IKBUMSSJGOTGVWUERJCEFBJOQBDPNZUCBVUHHETLSTAQMLRPBVAGVHOTLFVLSRGANQOVBXZJXUHNHFFQFRTLHXZDTGBFMTZTXTYBUNDG");
    msg.feature_type = 197U;
    msg.rgb_red = 174U;
    msg.rgb_green = 26U;
    msg.rgb_blue = 148U;

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
    msg.setTimeStamp(0.290486622864);
    msg.setSource(35771U);
    msg.setSourceEntity(113U);
    msg.setDestination(49587U);
    msg.setDestinationEntity(229U);
    msg.lat = 0.225084429234;
    msg.lon = 0.374941946303;
    msg.alt = 0.714984443557;

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
    msg.setTimeStamp(0.343108637014);
    msg.setSource(65040U);
    msg.setSourceEntity(191U);
    msg.setDestination(9537U);
    msg.setDestinationEntity(170U);
    msg.lat = 0.182895957259;
    msg.lon = 0.646668368269;
    msg.alt = 0.370716124558;

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
    msg.setTimeStamp(0.920079045593);
    msg.setSource(29187U);
    msg.setSourceEntity(77U);
    msg.setDestination(34786U);
    msg.setDestinationEntity(142U);
    msg.lat = 0.922502442969;
    msg.lon = 0.0291297033642;
    msg.alt = 0.660870581965;

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
    msg.setTimeStamp(0.0421234868643);
    msg.setSource(19665U);
    msg.setSourceEntity(104U);
    msg.setDestination(41197U);
    msg.setDestinationEntity(138U);
    msg.type = 241U;
    msg.id.assign("UEOIZYEWDMVQCGDSJGEXYZOUCXWCPAOYUZLUWSOBBJVSGAAAHAJPDOZPJNRVRZPTCCFGDIVZBREFKTQEBYQHXQLVWYAOTTVWHAWIJUAYYEMLBMHKPNKWEGFFMKBUVDSLLBUSZDJKXYADBWPMOEQHKGXXJQTVPLCEFNISMRLNXVDLCGHPRCIZNOBTWKXGTAKO");
    IMC::ApmStatus tmp_msg_0;
    tmp_msg_0.severity = 168U;
    tmp_msg_0.text.assign("TFMJJVSUJVVHQINYRAPIWONNARWMAKYQBADKWGISYYKVSEPKVXVWAZGRAUCNBXWOBLOISUJXOAGUCMRDPXOVGCXNKPTTCTXLSUPYQKUJZPYXLUPZLEQSFZPBECEXUUOJQPMDEBTSHGDVWRNDHFRAFZIBEBCBLQTUYZYBIFZQDKCHMXOHHWFGOZGPSVNTREOLJFRJVMRSASGQMQK");
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
    msg.setTimeStamp(0.419284639064);
    msg.setSource(60243U);
    msg.setSourceEntity(11U);
    msg.setDestination(48167U);
    msg.setDestinationEntity(36U);
    msg.type = 178U;
    msg.id.assign("YHXKOPWKUWLKYRMOGZZULEXTZCNTVBABCKFCYHITTRUCNAZBQOEGPUYWLAGYIWMSCMAHIAIECVVFRUJGTKJDJFDDSEPXUHJHDWXQBJOMOYPFAJESCLBROSLLJTUZAPNTZGWDMFGAIJTKKCGIEXKQRNVHVOVTMXZGQGHX");
    IMC::SessionStatus tmp_msg_0;
    tmp_msg_0.sessid = 1351781717U;
    tmp_msg_0.status = 236U;
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
    msg.setTimeStamp(0.853649048645);
    msg.setSource(52509U);
    msg.setSourceEntity(82U);
    msg.setDestination(37341U);
    msg.setDestinationEntity(8U);
    msg.type = 110U;
    msg.id.assign("OEPGKMLOFUYCYATLXKPRNSRDQCCJSNLADAQGKIKGDCXOEUIJSLFJYRKMQLGWLWYXOYAYPHQFZDHVZWDRXBWEXJVDGBPKUUMZMSJCEPFRGSTOSMTLNEUWFRVNLZTHWLHWISRUPFXTKYHRHGXOA");
    IMC::CpuUsage tmp_msg_0;
    tmp_msg_0.value = 197U;
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
    msg.setTimeStamp(0.917428518685);
    msg.setSource(26530U);
    msg.setSourceEntity(1U);
    msg.setDestination(64377U);
    msg.setDestinationEntity(178U);
    msg.localname.assign("WQFXUVARSWMQCIEDYMKBPNWSXBAZFZ");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("HRHXGXJNPLJRQZFVIOVDQSNMJCBNLAOIADDEYYAYEBPGGXVRAQZSDLXGBQUXAJNUTEALRBYTFWNCSNLRPDFFZNRSOHTMSEPLYURTUZLSWADQDKYLAWKTGPXMMKYOIEUMHGYBVIRAMKIFVIQ");
    tmp_msg_0.sys_type = 243U;
    tmp_msg_0.owner = 6807U;
    tmp_msg_0.lat = 0.0201742346672;
    tmp_msg_0.lon = 0.0286689516839;
    tmp_msg_0.height = 0.285368343217;
    tmp_msg_0.services.assign("TQZJUYBHOPOXDDRXCIRUUCCLSDVKPDMZTJYEJRKWHSMYFSPRZQJWYLFNWZUUGWPLJAEVZRBYKEGUICXHBNQCLKXZIZPQLPPAIBW");
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
    msg.setTimeStamp(0.256764386578);
    msg.setSource(65512U);
    msg.setSourceEntity(133U);
    msg.setDestination(6250U);
    msg.setDestinationEntity(17U);
    msg.localname.assign("IMEKQTMGOJJWHBPLFNGBETYALZGVYJLXTLCUDFSYXNCJPIAFNNWDKFVVIGAAOZSBGRJAHHEEOQOIVANXRXTZQMWKBFLPEZSCMXDMMNZLUDIVJMSPPRFUWFVWRPZNUCEKESPWVWUMORCKHEOKBDUXYZOYTKTMNSHSLSUQAHRXBCBPQ");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("REUHAVQYSSHUWYXCBHYEZJKHVNIDIDTNFNSOEUDNQSHEFBPIZPTMFLUCRVDZCUYDFFBETXKYLDDOLYNEGBUOURAUJIZAWPFCPZVKIZQXONZRVTDGGVJHBULASWXKIYOWRMSOJIDTMJMTQSHXGWCATCWFNOWJTRXPLBHYYLIFGHKUGVMBJHM");
    tmp_msg_0.sys_type = 65U;
    tmp_msg_0.owner = 39315U;
    tmp_msg_0.lat = 0.996117468302;
    tmp_msg_0.lon = 0.304831457004;
    tmp_msg_0.height = 0.510464083714;
    tmp_msg_0.services.assign("CDKRDZBVWDGIFHEJCAIRTLVCAA");
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
    msg.setTimeStamp(0.514535481744);
    msg.setSource(26375U);
    msg.setSourceEntity(216U);
    msg.setDestination(19831U);
    msg.setDestinationEntity(11U);
    msg.localname.assign("RQGUPJOCNDAXVTZELMSTAGRMCFWRRYKELAYWEOPPBUOACY");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("SGMQKYRHOLIYWFMPWEEDNJZYKFKZPIHCYCUJSJHEKVVZVOLADCTQDFAPWGNIODGKSWJQNFRHRRSOODGATUNDCFNHDMJMZIL");
    tmp_msg_0.sys_type = 19U;
    tmp_msg_0.owner = 11200U;
    tmp_msg_0.lat = 0.228152163886;
    tmp_msg_0.lon = 0.662419417384;
    tmp_msg_0.height = 0.858126129555;
    tmp_msg_0.services.assign("IBWORGTKYMRLFASJAAQDPWBVIMFWPWCJEJWYKFPLETGNLFXUNTBMINYGXQGBUZ");
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
    msg.setTimeStamp(0.552989697906);
    msg.setSource(40137U);
    msg.setSourceEntity(112U);
    msg.setDestination(36892U);
    msg.setDestinationEntity(35U);
    msg.timeline.assign("AHDGZWEIMMPFVKNTUZXRJKLVDWYVLQETORHEPZHGRYDYIMJFXBBSBSVFHGXFKALPKAEOPEXYKIASDEDMOZWVTMARZPVBSMQJRWXHMIHDWUQHOWRGZCXIHVNCVUFDFITGVQPYDBPMCLJOQOHXUTOKNYWKISLARNBEGNZCUQJRTTTJUYXCYDKGHSOVUXZLRDNTTUOGYFSWSFKFEQCPLSPBGZWSIJECWLMIQBQLNAKUYJGACJNRCPZJ");
    msg.predicate.assign("HUHMCSHWVVQLYOJIXLFTVXYZKOSQUNXKDFPOUPAFIJEYBNICCMJDROUALBANXKTYQZFKZNXWQVUNSLZTYJAUBDYHLJFCUQHTXRJGEBIEZJBKHGGCGGVSCLUSRWQGQAIVQCBODWGXEWOOLTGLPIRBIFZPYYYZCSXSKHWAPZEDPEBVDDTGSAKDBMEKRILINMOPTEZPRMEWGHRDFVYNFREHMSQWZPTJFMOHDA");
    msg.attributes.assign("GHLYZXOSSTHWYYGXBONCUTPINPFGHOJKQODXUVVOYQGJTWABKAYVGPYSFBDONVVXUFSKDUCINPTLFUPIUJEWDERTMPEHRRZBNXDQQYJKFDALTMOUCZGBOEOVMBSAZEBXWJXCPCSJMCUHPVCKWIRRFHJZEIQZKWMDHNEUVRQPRDFSHYAKRJZQZMNXXWZLNGAJCPIZEACBOGMLSFYHLIKVAJLLTHIRDMITSK");

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
    msg.setTimeStamp(0.195134927009);
    msg.setSource(13012U);
    msg.setSourceEntity(39U);
    msg.setDestination(6599U);
    msg.setDestinationEntity(104U);
    msg.timeline.assign("XBITHBKEUFPAZLWDXYTPNBOXSMPFVLFISYPHJRYRLHYYHSOTIJRGAEBTXPRTBCFGMOAQDBCEVYPIMRYNVYHOGWACWYDCGVHVQZIAUOGWSEPTNXVHIMCUUPJKZQGSQFVDXNIGOTZLFSAKQXNLRJJZZEJNMKCWRSKMKDAIMUKFFVQQTYXGEHHCPGZJDQULAVBOJDCFZMNWNF");
    msg.predicate.assign("VGLGOLRSTFWUKIKCCRUABHFQGKSTZUJYJRAMSMHNPDFTNKZQAFJQBSLMXELRVOQEEWTOOANSNGEJDWOGBJFYQPEQR");
    msg.attributes.assign("DGLIRIHATPQBQHCVFQHQEKWWYNRKUBEFUJDJEIHIQXSOLQRMIFJPHKWLPKUZVZDXPOJD");

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
    msg.setTimeStamp(0.409776607241);
    msg.setSource(50605U);
    msg.setSourceEntity(83U);
    msg.setDestination(54963U);
    msg.setDestinationEntity(195U);
    msg.timeline.assign("CDGPUGLACEWZABWBSFFSCENACZJTMIQMFQTAWLMOZX");
    msg.predicate.assign("USXDTHIXOQFREEXACSFOAJANLPQWJRZHWRZUOVBHPIWDTSVDQOFOINZXLIOUPY");
    msg.attributes.assign("XZEVXKPRPBTJSDDBZLCRABAKXZMSCTOJGLQRYOPCTDHFAVGVOUSLANSQGYZJKSYGEOSOMDVFTQXQUUYMDWKAHFJEHEBIDOCZZUAFVNCJOGRPMBNQFXSFQNHIWZDBQLMBDMIBMPOKNIYSGWEYXKVGQQTRAXTVCLAUEFMCWPFIO");

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
    msg.setTimeStamp(0.0504868902966);
    msg.setSource(60039U);
    msg.setSourceEntity(224U);
    msg.setDestination(51559U);
    msg.setDestinationEntity(160U);
    msg.command = 109U;
    msg.goal_id.assign("FMIOJUVBJXARGNZFACNEAJXBELJOLMHGHDHYMEDRYAOUFKSHIMUWVPDGSMXUBJFVZCQEYHHHWSPVUQLXSTKESAAJSBYVCPOERFMQNJUQKXKPXOGWZZGSRQLNNCXSIMTCUVOFPGDYGIIVIZFGWWIDUJEYKOIPWARFWRQGZCCMXTZXBMCHVYRAPFDHYPSRDDJTLCIYZFGNDRTIQPHPZTOLDNWMBBKKNWONKBSLKTTAUOTBURAVLE");
    msg.goal_xml.assign("FKBNKDQECJLYEYOCXHMEFGUMCNDJCHKDIRJZOVUYQGOWUBFAVVXKIBPXQQTCRKAZANXTJOTIZQWLGQDXNXMJUSUBENELXMWZSYABGAPWYOJWL");

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
    msg.setTimeStamp(0.976490363366);
    msg.setSource(4176U);
    msg.setSourceEntity(173U);
    msg.setDestination(35027U);
    msg.setDestinationEntity(140U);
    msg.command = 73U;
    msg.goal_id.assign("TCVNURXEWQYNMTKTAMKHUUBOIRIKJMPCIEOSDASGVLXJEJRPVHKUDACFANZXYHSJRCAOYSJWYAPZGEZYBSKNBEVCYCRULQOILTUQDLLQCODBFJNWMGHJTFMODGMLXRQDZHFWWMAUNOPIYSVCKDGZGBTKLMNHGWW");
    msg.goal_xml.assign("JAKJXYRBCUJYYDYDMXBOZAKITXSXZMJLJMPWJSAZPSGQBECTBFITZDRCIZPJGNVYFGZNYNCZAGHLZQKTOC");

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
    msg.setTimeStamp(0.628407047513);
    msg.setSource(30428U);
    msg.setSourceEntity(219U);
    msg.setDestination(58627U);
    msg.setDestinationEntity(244U);
    msg.command = 120U;
    msg.goal_id.assign("TELCHROQWGMCXAPDESBRRFAVSFENUMSNJPKZULMGDRBXUCBTDDTQHKCZYVSZNNGDADTCRUOSWUOABDLLWLQVWM");
    msg.goal_xml.assign("RMHJQJWLRSWBGXDRIRQKBVUODWQNDXURWOZPUTTAZVLIOESFEFUOMXEZDHFPRGFCTZVPYUJKBFDALQVMWLUWAGTYHABGLWJTXRWHTUKKTPSHQKEZKKFVOLYJNVC");

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
    msg.setTimeStamp(0.531782270186);
    msg.setSource(48486U);
    msg.setSourceEntity(250U);
    msg.setDestination(51804U);
    msg.setDestinationEntity(128U);
    msg.op = 125U;
    msg.goal_id.assign("NYWMEYOGNRWFKZIICMHLXV");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("OVHLXQIARCBRHBWCPSJPKQHSCUMHTFZLLCMDVEUVYHSSXQBTAWBEPGIXYSYXPNJZFQQOKYBRISTDOBXDCAUA");
    tmp_msg_0.predicate.assign("BECVCPNNDIIHSCKRFTDKRBJYYNEQKNPTEFHLLMHYMGWSNUWSTSGOESITCKOH");
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
    msg.setTimeStamp(0.992410533877);
    msg.setSource(30637U);
    msg.setSourceEntity(183U);
    msg.setDestination(53252U);
    msg.setDestinationEntity(42U);
    msg.op = 43U;
    msg.goal_id.assign("ZSRRPOIHOJUCTUYOSEEPBDELAITXSUSUBKYSEYOHTKQFQMUQBCCXFYZKDHOAIHJAPZQNFZNCXTPBJXHWBWVYAMBQYGCYDUXCEBTFBMWUUALPCXEQYMFVOLIGOWSNFTHIITPGIVMGGXTJVMEJVGAVLQODQIJKERMDVEBDJRUFPWNHPSSMZNMTLQFJRVDHNHILNZLLTWLF");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("FFVMYTVLFGRSAZNEYBXSPYCRAZGCIGTMXMCUISPTPHSNFWOAZNYFJUDZIWDHBANCHUWGUSJWGPTOAYXCXBXBXWEKXJFTAWOQKMPFHFEJDGRENDKMEIJZUCHTNBZBGYNAGVPLKPHJFZRWVSDIRAHYVVQLURCXPLOJBWDOKCWUGDVQVUBOQSTZULHLGSOJKYVHXOLZJMTWQTNNRKQIIFRSV");
    tmp_msg_0.predicate.assign("IUDFTRCXBOYRWJHEPGGCCPEFGSMYALNGCPQYDHFEFWZR");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("SETUYZEEDIGQDMBB");
    tmp_tmp_msg_0_0.attr_type = 107U;
    tmp_tmp_msg_0_0.min.assign("ONBDKTXTYGHLIPUCXMJRYICADMKICVVTJCXZBQURTUANDAHZY");
    tmp_tmp_msg_0_0.max.assign("ZXKEYBTNMNGHZJDDNQTDTZBWFSLLJRNFSQASYLBQWKBQNILGAPCWXRVYYJMPINJFZGKHVOSBDECGPLRRQUVITRZALMEOJOKHOYZLTEDUXIESLXFWKYNRKIWTJOQIUHFYMUGUZQVIMEJZCVMUEXKBBVAYROCIETPJXJARVPMJWEPSXMLRHUCMXFYASNFSHCPPWOQFDSDLBTHXCOUIDGGGAMCKGCEKOG");
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
    msg.setTimeStamp(0.689696815949);
    msg.setSource(3313U);
    msg.setSourceEntity(104U);
    msg.setDestination(2939U);
    msg.setDestinationEntity(182U);
    msg.op = 108U;
    msg.goal_id.assign("DIIGENXLACNPZCNVTAOAXCFDREQNBGCGLDVLLBUTYGZPYXSQWTUPMFKTDCMLWZSWPLEZHBRIEVNYKOQVSSIWZABGNNXDH");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("BEOLRNNCWGJCBSYPGYHJVWGGLZFPZHEMTNJZDYNISFLJNIZWGBYHKGQDMFHTTNQQXEVXDSLAREOZFWJVUYBMEBUWOAENAPCGFQFHMVISVUAADXIEQTRVSWTMTGKKAXMDZFCOTVCHDUXBTSEDDNOHKSFOARBLQCJDXZRLCIKCPPXORKFULUCXOCRZMIESGVUPGDBKSQBXIRZPUNIKMJEJULWRHYAIAWFJJWKL");
    tmp_msg_0.predicate.assign("HHKOXQLXRQFCCLCPSSWADQDXGMHVMZGOVXLPOIRJSNYKRWJRPWFSNVVCGRTHRICLFUPZHZZIAHTUKSLZMXHBPGFUWNTVNEMMYTWAUNJAFTOIOFDJNWJJPNUEELKUAODVYDJWBXIBBVCQBUKINTMGUKTEHYVYXNLGBCAYCVXOPFPLZSDRCLEXEYYMHBDNDMIQJIBSDQFUHJXVAFTZAPRZZBQAQQ");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("XDLXUJJMHWOXIOFVQQYGGCXJUZPYLTPBKIWRRFXZZAHCKATBALWDOQSVYZBSVAGTRBFZPPKOMUONNCRLYENGOWCMNMANYPHKINKMSGSKIBLLSTTQSGEJVBUFCPAITNVPPUYMZUGCICJEJERRBWRHNDPXJUEVKIEYTKLKQKASPFUIDYJWMZYXEDHSQLMIVWDBWVZRLTGVFQSROBNZJGHZ");
    tmp_tmp_msg_0_0.attr_type = 66U;
    tmp_tmp_msg_0_0.min.assign("OKUEEBOTHUOSSGDYXIEDYPUYNNBUJITFSLGXLKQASMKHXQJGAVVPJDZFOJMCWMICTTDEZETTVJOSXBQYJBKVTPFHEXJWCQATGDDQRNRZILVQVXIT");
    tmp_tmp_msg_0_0.max.assign("FIYUOIEBNDVNFRQMESKSQKZDELBPAUEODZHZVLFVXHMSJUFXWQSIMOSMUOZKVOLKQPTSWNTCFYKFWPKOWQJBEUGCFCGYPTTWOREIDVMMNUARRQPLCJBKGTZJILSDRZFZNDMVCGPMMEZIJQGUEQRIDVOJYYNSXLPAKRVNVHLXZMCAPADHNYXLJUAAJBBGWYLTTCXYUHAJXSHZXTGBWCIBDQFH");
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
    msg.setTimeStamp(0.342961441614);
    msg.setSource(60125U);
    msg.setSourceEntity(104U);
    msg.setDestination(25839U);
    msg.setDestinationEntity(92U);
    msg.name.assign("MWHVFIGSDHFYMGMCQZUCLEETCSXPKANNIOCWTRJOEBIAAGDBNAQYAPBWOKYMWLSTYXZCWRAGYIJRYHWEWDARQXZGZRCPPNGJDHUTSIBXQJHRKYOJPTXXNBVKMPTLUHLBVLYQFWDKSWQCCHFMUUSFLUENVDQTXOGFEFHDOOIVJZHATJRNMEMSPIIXBFKUJJBJFZEPNYZDKTBSASLRZSVLVIUGLUVOOGGRTZFBDOKWHPCX");
    msg.attr_type = 46U;
    msg.min.assign("OCPNAWPCJULIABUJZNYVVESENYJRFEYWROYFKWKETQSPDHZIIBTXZIAEUMYNJUEKEGVWKOQDNZAKOMDXHIDQFXHUDGJMOHVRLHFSTFZTZTTQLMWQOPHGMIKUFPQRFXAOUJGDNKQDIHNBXLZAEUXRBTNJPRISHEOLWBTWL");
    msg.max.assign("MUUUNWISVJOPGYAWKCVGCMDYBWHSTNSRSAZDLQDQRVSCVUOBOIOCABHZZTAFMVQ");

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
    msg.setTimeStamp(0.00734592305206);
    msg.setSource(64118U);
    msg.setSourceEntity(249U);
    msg.setDestination(43101U);
    msg.setDestinationEntity(211U);
    msg.name.assign("GKQMSWFUIQLEYJBWDUBSBIFWRKVROLCYDKYEVTLOSMJTMPIIPUACXUYD");
    msg.attr_type = 125U;
    msg.min.assign("QMPLVQACHMDNNDTCHLWKPFVSGKCYFSDURWZKMVGXYHTJVSLLOCEKJIPGIIVAAOURUZNLNMOFGUJXLFNABBTXORBAHEIFWQXZKENLWIUJXQDHSFWBBTNXDNKDYTCVSZLGMNOAIEZGQZZBLRUTDWVFMZAAWRPSPIUOORMJHXYEHCFIRQETLPWXKPAWIXOPJBVDUQ");
    msg.max.assign("DWMPZBEXDSKAZTMZXRXKMQPCGSOQPYWAMANQIRHLYTEFLZKXDIFAQGJVFXHHQUFIKOFIACCWRCNE");

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
    msg.setTimeStamp(0.83920718826);
    msg.setSource(9239U);
    msg.setSourceEntity(85U);
    msg.setDestination(16238U);
    msg.setDestinationEntity(180U);
    msg.name.assign("KHZTERVQXDVXCFJLMZLWGMXVMOPJBBIRUKPQTFPWYNOFNOHULGEUEOYSSXALUZHRCXPNPWWDGOCXGHGIQFECSBPJZYYBAAIHWTXRKARCDXYQWDSWFUYUELEDMRYLYMQYJNUDOZTKWBSZLVTIVOZV");
    msg.attr_type = 104U;
    msg.min.assign("KSKXGPTLAYNCUMDMUIDQYYMVODLVSJHBWPYWCWWIMVULEXELSKXSKICKNKZWHQRIBWFXUMNSZGQAMXJFPDFGAFEMFCVJLECFYQDABRKRTHBETTPJNZNSBOAJAQEVXWDXOXVVNGOJRZOEHBSTGBQNUOTICILWGYWBZURHSJQRIPCHVODJMRVIOBJTAXDENPEPQHUAKFHWRTQNDYMHPEQOZZNBPULVOGZYZFCCKATMLUDGZLRYRXSAPUYIGF");
    msg.max.assign("TJPBUCICQTEVCUSTNJPCJSDUQJVHEEIIFMTCNEAMWRDIXNBDSAIYMYCXTVZGIDBLOZWEEYVPDNRFUHWVLEYBAOXXQVHKBIKOFYHFJCXZULKSRJTXCFQGWHTSWGZOSSLLHYUHLUMZBWLYMLAVXGRNYGKQWQBWPRMQKKGFAPRKALIDTDKMDKTFSXUFGIJMVWEBCKNRAGWOAPZNJRQXDQPHIVGOTPGPZNJRZSOONMABSVEUOZHFQEHNYZCLBXOJ");

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
    msg.setTimeStamp(0.51147492894);
    msg.setSource(41519U);
    msg.setSourceEntity(130U);
    msg.setDestination(44053U);
    msg.setDestinationEntity(144U);
    msg.timeline.assign("GVTHPXAGWKCESEUTUMBR");
    msg.predicate.assign("ENCMNSSAFWWGZFZFGLYZVQMSUDUIZXEXDBOTYVPSPJZLZHUBNCMSEYYRKXWLBDDZCDPUNHJVJOAIQMWBZKNTFRVVFLITRSGFTCCVQUXQEA");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("AMBNXPQIRMKKVTGDCDUVIOKOYEAVVBFVKUFHKTLVBYWDTQXEAAZGCTRYQPKDCVDLTJJMHKFUDLSMPTJYYQQGWONSWCFGAOPXJNSCDQFBZXNQESHIXZDELPWMSFZGSD");
    tmp_msg_0.attr_type = 11U;
    tmp_msg_0.min.assign("ANSTWUPHDVHKVJIKUFBBKCPVPZGFJZSCNDTYJEFSBETSLQTQAMMDWELVBUOLARKGDGXUGNNYVSYDOKGJOTQFXCIVWXIIOBITLDBOKZMPWYIVAKJZCUKAMGEULNIGOVMSMHADZIZPSFRHEFNWQEUMRXTMMDRHTQCYBQKFGAQZDBVAHDEYIAOHYWJXQNIRQNTEYUWTCXVGHLLXXUXWQSRRJEOXHRJLFESRPLPOSJWJBZPYAFWNG");
    tmp_msg_0.max.assign("TFUSILBBOSOHUMBQXVFWWAAFIAMCYPSKHHACYGTFKJAZPDUEWUIVSUGKHGLGRSQZTMQZCEPEXTIJRVXXEGUNUBWHPQFXVHMRNKGCAFRGGUWROBEFNOLNJKSQZIYMCKYDYALJLBVSZNSYDVCMIUHVNATZPAJIHMLYEROLHXITDFNGQGKZXDPPXJ");
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
    msg.setTimeStamp(0.655730736486);
    msg.setSource(41333U);
    msg.setSourceEntity(121U);
    msg.setDestination(21355U);
    msg.setDestinationEntity(176U);
    msg.timeline.assign("STXPGEBPUPGAZGDHSWAHLECDEAIAFFHNOEYGTPXMXNREIFWPFIQTJZNHVUUQKFYLAQLODKTNLMQDJAWNCSGMKUZTROLCHCFRDYJSNWYVIYWXGRVFERITGERPKRVQICKYJXZERYKSMKOXBXPFJBMZONKVXAMACJJWYYCLIBUBSDEMULWRZSWWIOZGUXTLEQDWBPOKZBJOGNSLBBXMDCTHDZMYVHNAP");
    msg.predicate.assign("HKRSKIGZHIVSBBGF");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("OLKSKJHEOZHRAFYPQFBSCNOXAROWKNSYJFBPNMTWUVAGLEUNSINGSFKXXWCJERSRQBAIJDUBDSZZLNVQIVZXALXILB");
    tmp_msg_0.attr_type = 167U;
    tmp_msg_0.min.assign("ZETLRGVURORPPBVZDGTOXAKPFQJMEGONJNIEVEITPNNOXUQJUTGWFLZBWNGDCQNX");
    tmp_msg_0.max.assign("CBSOJKJVTGATKDHJLYLZRYOONPTOCKTIIQYUOYXBIIIFPAUAZSXHEHEMXJXGVGRIFGJFYELINCMWJEZOMMBGLWKSFWHPMYTQRQMDEABRRMKJMJHOKKJHZIVRSU");
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
    msg.setTimeStamp(0.163134657678);
    msg.setSource(41895U);
    msg.setSourceEntity(30U);
    msg.setDestination(12019U);
    msg.setDestinationEntity(241U);
    msg.timeline.assign("TMBSCJACBMMNYJUZIIJICJYTOQGGEIPITWCJDLLVOLLAAIWSQRDJZNCODOFDHKPVOQRHBKZSHZPXHTCCLJWENXBMTAOAFXXKYEBKLEKYAEOPEHSFDGEIHUPPPGENSLW");
    msg.predicate.assign("VWFERCPVDBWBHNICNIUGBGTZGZSSXZKQMZRYGKFRLSPMCXXMVYRLDXFQPIMUOEAYKIGBFXZTQHKPETHPMHAONBYVNSRBCEZWYUZAEKMUHDKRUITHOPKMICEHHDJWOSGLBTOVTUFLCDHXILEVZFJZFLUVWECYAUCOLFJKMLQGOIHQSTYTDSBZTGQQAPGUMDBWDTQISJXYQPYALJLOWA");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("LYQYFWNFRSROXUEXZKIOLFWUFDXMVLCIPMASGPNMYFJHRXRZCBXIPOJHQXUKPBTNEAAJWIVZCMZALFKMFQGBVRXDTYJSPZASREEQWKKNJURJLJATSCLCNVVKAUBWOWSBDGUWMSOIDXLRJOPHZVDZBQYJICURNWMQBLYGPHSXZQDNSPFEMQMUGELAIDTTFEEDOUTGWCHYOOILTKODNHB");
    tmp_msg_0.attr_type = 128U;
    tmp_msg_0.min.assign("QRHPSJICUTKEBQWWPBBSXNONMHZESLPRSALCXKWETEQDBVJSYZOWTIYUAPJMLKCWRWMOBPCGTICBTRAGWDBQVWL");
    tmp_msg_0.max.assign("VIROMMARJBK");
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
    msg.setTimeStamp(0.433867404753);
    msg.setSource(23102U);
    msg.setSourceEntity(40U);
    msg.setDestination(19381U);
    msg.setDestinationEntity(210U);
    msg.reactor.assign("SKXZDBVKBTVUPPXUYTLLQBEPJGGGNRMSCYFMOAUPZEKEYKNUYUWVNGIJFRUEWOIALBCIBXFWJFUJYOJPSBDHUQMQMTIGNIEPXGEZDQTQWNVHWLDYLMFDWKZERIVCCVTLASTCHLTHRSSFNEXDJTEAHCSNFDA");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("KXSYJYVXMMQTSRGWVSTGZOQONFWHCQNUEAQATFMCIHNOHLYFLUQUGBWAWDCHIOPETOQRKPKXDMAWZJMXL");
    tmp_msg_0.predicate.assign("IVBGSTRJSHIVZDVNCPYJCZWMWURYXEOIZKNGASQCLTBTGXDAZQNQPSWDKMBAZTPGQKYDEVOUCOBGQLHFHIXDMPKBUAORKPJNFLKMRXWTUJLQWBBGCMRIWHKXHLWDFJLCNRKCIOOZUENYSAPVAZFQMBJNJDPOROBXGNCTEEXICXALEKWUULMFOYKTHTO");
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
    msg.setTimeStamp(0.655785723407);
    msg.setSource(38669U);
    msg.setSourceEntity(234U);
    msg.setDestination(27303U);
    msg.setDestinationEntity(145U);
    msg.reactor.assign("EADPXILUWCBCTJOIHRRAEWDPZKZYIIQXXLDRJKTVUGDPZRKRNOWIOWOVXCABPORQKWLKLMYGJXCYXAQEETQDJCNHHYBAUGWVIHUFSBPMPHGUKOJXCEMJBBIDRXVNHLGQYRSZUHTP");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("UKHZYPZLAYTADLROWLDXOFHTVNMEBIKIKRWTKGONMBYGSURQWUEPNFQSMHKHXWRXGMEUPURCIHBJEHSPQQAP");
    tmp_msg_0.predicate.assign("UJYMCCGITRKBZSBLTMMLMJXHLSTAEDTNBITGEXJSZFYJPLECVWANVWZPKNWKCVRMCQKDWCPNXEBBXCZRSFGITPDZOOEJWLUACQDITGRTQHOAAKU");
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
    msg.setTimeStamp(0.711196665146);
    msg.setSource(6364U);
    msg.setSourceEntity(158U);
    msg.setDestination(60043U);
    msg.setDestinationEntity(73U);
    msg.reactor.assign("MCKUUWNNCIMXHNZMELHGINWKWNQAASPREWLMKRFGLKKUBXTNFOBTYXWWCKEAYQIONYSXQMKEUUBFIDLQMSOYGBTGRCDVDACTPFWCOSLJ");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("TQDACLFYKVMZDNJFJMTPXQTTOKGSQBIBXAVRDRMEGYPDRMUYNMZHLHJEFOHXGWGLPFJPKODUCRDPADDRJMFYUPBGIO");
    tmp_msg_0.predicate.assign("GUJHLJUKXOLUFVCVIQFQAVQJTPHLKDXAACEQRHMWIGCZFCZIWZZNHVHFDLJSWEKWPGUKDLCKCTISIKQGOEBBBAVNJYHETAQVRYCBUTLPXMXYUFPPDMTMROQYYOFYJZPFRENTANWOHTXYBGWLLGZAKDRRZWJQMEHDISABYLIOPRFEQWDSUNINPUNKXXNTJJSWMVXOGSEMKPOBHREUDWR");
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
    msg.setTimeStamp(0.78637654819);
    msg.setSource(33369U);
    msg.setSourceEntity(172U);
    msg.setDestination(34420U);
    msg.setDestinationEntity(238U);
    msg.topic.assign("SVLMTZYTYSTCTUIADGUPBAMYXPYDQMQSXQC");
    msg.data.assign("IJEGLKRAMUZKWMHQPAJZJKEUHNKYTESFFRNYBIHNXMZGZJFQGEZBBASSSBYSITMCXOBCSIOECDTGLRPPUEBKKXNUKUDFHFALPVYFLFHQVADXCNELDHVVJRKRYWJAGIMSUOJWCBCYBMVQYQJEDNPMGZNTQUZXFHNQQEUXUPDOVSLFGCHOJIQJKNYCHIZRXVWSBRWAXOLLWEFTLMTWXTYIMNVVAIPXPOCBRWLQ");

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
    msg.setTimeStamp(0.126325328764);
    msg.setSource(33769U);
    msg.setSourceEntity(65U);
    msg.setDestination(40648U);
    msg.setDestinationEntity(127U);
    msg.topic.assign("TVIBYTGTHVVMXKQQWJYWY");
    msg.data.assign("ELSRIVYRJFBDIHKWRXJBFBLUQQUPAHJPEHUIVAOBXZZFNNETGWRDDPVUOVJOREPPSHSTCYVSVWLBNIAEYMPOQKPFAQXOUBCARKYTWRWOZFESGVJHRIYNALMGXHDBUCSQMCTZYKDMLXEDHSMLFOQKLKAVOOUXKWTGMCPIKZFWUJFQQTYSXHBIYNTCTGCLOFPJUEWZAJRAULNNQDQXGITMLBCPGZDMHETXEIAVSSKGM");

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
    msg.setTimeStamp(0.479169542986);
    msg.setSource(9411U);
    msg.setSourceEntity(11U);
    msg.setDestination(30500U);
    msg.setDestinationEntity(6U);
    msg.topic.assign("XMVMSDZFSWGGFNWUVKOAOOYSQCHCRAPTOJSXVUANZJEXIBZWPHBWBTQXDMBQDMSVLBTXLTIYCXHMCZZ");
    msg.data.assign("RYADYCMZGBNRFMGFIBCALUIWEBPHCYPKFXNQOXEHPIVWUQHCXEVYOQARACJIWWNZKHVIM");

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
    msg.setTimeStamp(0.992062528458);
    msg.setSource(16214U);
    msg.setSourceEntity(124U);
    msg.setDestination(40467U);
    msg.setDestinationEntity(130U);
    msg.frameid = 151U;
    const char tmp_msg_0[] = {92, -110, -105, 116, 30, -77, -62, 5, 113, -81, -90, 104, -4, -55, 126, -122, 18, 15, 64, -37, -106, 49, 91, -34, 113, -66, -17, -66, 111, -81, 21, 27, 94, -62, 77, 57, -34, 36, 44, -100, -3, 79, 108, -109, 90, 67, 46, -38, 70, 97, -103, 26, 10, -47, -122, -12, -83, -33, -127, -126, 126, -14, -108, 69, -17, -122, -52, 55, -94, -5, -109, -27, 75, 95, -7, 67, 47, 44, 121, -98, 33, -55, 68, 0, 100, -108, 59, -26, 42, 55, -75};
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
    msg.setTimeStamp(0.491040041202);
    msg.setSource(53960U);
    msg.setSourceEntity(157U);
    msg.setDestination(14537U);
    msg.setDestinationEntity(235U);
    msg.frameid = 217U;
    const char tmp_msg_0[] = {46, 117, 91, 38, 3, 51, 94, 4, 29, 76, 122, -124, -27, 19, 62, 115, -51, 37, 104, 37, 51, -38, -80, -49, 119, -14, -64, 123, -12, 81, 46, -85, 68, 44, -109, -68, 60, -22, -49, 74, 69, -32, -66, -53, -57, -59, 100, -36, -86, -27, -110, -93, 60, 15, -68, 90, -64, 118, 113, -78, -74, -60, 109, 87, -10, -13, 83, -20, 58, 117, 9, -112, -24, 82, -94, -28, -28, -42, 64, -52, -53, 115, 57, 22, -5, -87, -115, -15, 99, 108, 95, -104, 109, -30, -88, -117, 110, -38, -24, 40, 108, -18, -64, 11, 47, 56, -104, -10, -74, 120, 118, 31, 35, 63, -82, 59, 65, -37, -51, -47, -25, 108, 14, 36, 32, 13, -59, -29, -71, 68, -9, 123, -29, -64, 55, 6, 68, 72, 110, -79, -27, 20, -69, 1, 48, -94, -19, -14, 75, 108, -112, -44, 39, -51, -79, 17, 100, -107, 58, 31, -48, -124, -63, -22, 24, -50, -105, 113, 68, 5, 65, 77, 116, 19, 68, 76, -75, 93, 1, -44, -50, -100, 28, 23, -85, -97, 109, 69, 26, 16, 86, -99, -40, -74, -49, -49, -126, 27, -52, 62, 64, 44, 102, -48, -120, -37, 85, -12, 50, -95, -111, 44, 26, 90, 121, 89, 12, 104, -92, 94, -23, 67, 72, -80, 66, -22, 121, -106, 99, 20, 9, 45, 47, -65, -77};
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
    msg.setTimeStamp(0.666442831338);
    msg.setSource(25340U);
    msg.setSourceEntity(116U);
    msg.setDestination(33395U);
    msg.setDestinationEntity(242U);
    msg.frameid = 22U;
    const char tmp_msg_0[] = {23, 93, 104, -11, -47, 68, 12, 47, 2, 109, 66, -86, 37, -43, -46, -58, -56, -40, 86, 114, -25, -107, -70, -11, -50, 61, -39, -30, 82, 124, 47, 126, -51, -21, 92, 70, -42, -75, 120, 44, -93, -19, 65, -92, 2};
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
    msg.setTimeStamp(0.217243709377);
    msg.setSource(3534U);
    msg.setSourceEntity(67U);
    msg.setDestination(36306U);
    msg.setDestinationEntity(54U);
    msg.fps = 176U;
    msg.quality = 67U;
    msg.reps = 164U;
    msg.tsize = 58U;

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
    msg.setTimeStamp(0.6427246029);
    msg.setSource(62692U);
    msg.setSourceEntity(62U);
    msg.setDestination(57448U);
    msg.setDestinationEntity(7U);
    msg.fps = 221U;
    msg.quality = 166U;
    msg.reps = 72U;
    msg.tsize = 248U;

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
    msg.setTimeStamp(0.532033901935);
    msg.setSource(28052U);
    msg.setSourceEntity(68U);
    msg.setDestination(26460U);
    msg.setDestinationEntity(202U);
    msg.fps = 36U;
    msg.quality = 63U;
    msg.reps = 191U;
    msg.tsize = 45U;

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
    msg.setTimeStamp(0.197531699879);
    msg.setSource(14169U);
    msg.setSourceEntity(61U);
    msg.setDestination(16817U);
    msg.setDestinationEntity(221U);
    msg.lat = 0.855609009024;
    msg.lon = 0.311839799771;
    msg.depth = 75U;
    msg.speed = 0.666396585459;
    msg.psi = 0.279000217146;

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
    msg.setTimeStamp(0.387349315791);
    msg.setSource(31769U);
    msg.setSourceEntity(131U);
    msg.setDestination(55697U);
    msg.setDestinationEntity(34U);
    msg.lat = 0.394956572323;
    msg.lon = 0.082576340961;
    msg.depth = 120U;
    msg.speed = 0.245050462021;
    msg.psi = 0.884847914592;

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
    msg.setTimeStamp(0.596867654843);
    msg.setSource(23467U);
    msg.setSourceEntity(84U);
    msg.setDestination(43527U);
    msg.setDestinationEntity(183U);
    msg.lat = 0.864065457714;
    msg.lon = 0.479141984333;
    msg.depth = 135U;
    msg.speed = 0.537292289674;
    msg.psi = 0.479598884625;

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
    msg.setTimeStamp(0.633696954489);
    msg.setSource(22372U);
    msg.setSourceEntity(234U);
    msg.setDestination(16884U);
    msg.setDestinationEntity(43U);
    msg.label.assign("JENTPXVYHXEPBSBCLQQFVBHQXKXHOHHYNZTWWOIOKKMUTUPQFBLDDXEWSQVDDOAHAOIGBJPUUAETGTIEOXNJGMCSRQJAZAITRKMRRFGBCYYVKTKIMYVZLQQXDCNBEJSMJRLDPCZESRVCFURSPAZLTZIPWEYKCRGSHUWNSNJKJSNVYURGWAAADX");
    msg.lat = 0.69698053761;
    msg.lon = 0.745336487454;
    msg.z = 0.921789517124;
    msg.z_units = 31U;
    msg.cog = 0.580104693286;
    msg.sog = 0.509499019918;

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
    msg.setTimeStamp(0.738821575131);
    msg.setSource(43578U);
    msg.setSourceEntity(172U);
    msg.setDestination(181U);
    msg.setDestinationEntity(76U);
    msg.label.assign("HMDJMKQRSSSDXQHQRXEGXCXOOVMRQBJICWCGVAKEOZFNDAFWIHSKGLVWNRSBFWZOUDDHQQUIPRQLQADLMYURYXBHXMSKEGGIOWIVKPFZTMTVJXAVXMCPMBIXPHONBAQTBLNAZYBOAGHETIEZTNUVWCWJZRGPTIGIQYNMHRCUWLFEHZLSXHOFDJYGKOUDSEL");
    msg.lat = 0.230988612263;
    msg.lon = 0.541566090856;
    msg.z = 0.833428912364;
    msg.z_units = 164U;
    msg.cog = 0.535917829948;
    msg.sog = 0.387456436429;

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
    msg.setTimeStamp(0.540886400381);
    msg.setSource(18900U);
    msg.setSourceEntity(31U);
    msg.setDestination(25670U);
    msg.setDestinationEntity(104U);
    msg.label.assign("DXTGPMRDPMYDJNIQGRLJIZOFSQJXEBULDZUAZOFKFEPVSYAGZSDCZQKSWJUKJUXUBGALFNXRIOHVHWAIHLVBAUEAVQYGBZJOSLZYPWLGWUKTLHFDNSHITBUHFDEBEKAEJJINKAVBQREPTAXWMCYVSVWNPFHOKWCTRMTNGGIWMNFCOIINQOLHIOYPSNBUKCQPCMXFDPRTHTRRGMCKGPDYVVCUXJNQYYHCDSX");
    msg.lat = 0.750104656194;
    msg.lon = 0.46142218386;
    msg.z = 0.475177219457;
    msg.z_units = 138U;
    msg.cog = 0.746080105342;
    msg.sog = 0.871954625146;

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
    msg.setTimeStamp(0.628865681896);
    msg.setSource(64724U);
    msg.setSourceEntity(6U);
    msg.setDestination(42342U);
    msg.setDestinationEntity(67U);
    msg.name.assign("WDIXBSQDJBNHMIRWYPDBQANDAPHPMOMREVIBYYYXBEQMHEVMLLAHJFIAHGFIPQZCJNCWEAXNTHRWCHUSNESKGDXBGWSCTZSISLZQNKGIRQRRMOG");
    msg.value.assign("AIJMFOBIUCMWYDB");

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
    msg.setTimeStamp(0.369925673694);
    msg.setSource(51608U);
    msg.setSourceEntity(64U);
    msg.setDestination(17265U);
    msg.setDestinationEntity(6U);
    msg.name.assign("USETJOTIBEPJPCZOLNGGPBIMAFCJMFPLPJHQGAUDATFFZPYSCSLMIQIFDLRSJOUXYUSXFAZVQJQLZIZIBAJDDMZBIQVRMWDXSWB");
    msg.value.assign("UWSHZFUCARENFWMJKGKIJFBHVTETMGPTWQKGMFXYEMSDIBLFFYOISNSTUDRYXXCKOEONYHJDY");

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
    msg.setTimeStamp(0.576030448029);
    msg.setSource(36860U);
    msg.setSourceEntity(207U);
    msg.setDestination(2454U);
    msg.setDestinationEntity(73U);
    msg.name.assign("YWZCADCCLZEDUDRCFCMRYYCDHACOIMSXDQLFH");
    msg.value.assign("YRIEVHYDPFRAWELFKMAXMIEAVNOWLBVZHJSJJOTPVPQPOAHUCKOFPTSBIYQXWTSTNUINYDHXAANAFOBOZGHUQEMMGBGQSJTXQYOCMKGZRGULHVWZNHTDQBVWFNCRDKCEVBLKKIWGCMEYSRHSLUEQKCMBIZNSERGQRZJKZCUEJUQNISWVRXHFLCPEVCPKJFQMOXDUGTJPSY");

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
    msg.setTimeStamp(0.784187220932);
    msg.setSource(25486U);
    msg.setSourceEntity(5U);
    msg.setDestination(8533U);
    msg.setDestinationEntity(241U);
    msg.name.assign("AKXDDOTDEMEPZLBKLWLWSDMTBKBEMKTKFI");

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
    msg.setTimeStamp(0.267957658951);
    msg.setSource(9727U);
    msg.setSourceEntity(13U);
    msg.setDestination(60327U);
    msg.setDestinationEntity(202U);
    msg.name.assign("ABFDBJTKLJGGAOUJHOJKPW");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("RHYFREYQNQXAVBFZMMMTBNVXWUIHZVUACRVAMURPVYWWMTTXTULEXCHLRBPDVPWJBNXDKCMDODBGSODSIIBQUTPAAFJCEGZANVWYDGHFDUHXTMHBYWSLIECYNOPEQJFHOXHQOPGQSLWJMNWVTYRIYAVOGOXDCFQNHKGLJAEDZNWEOPSSNFSGERLPQXUAFD");
    tmp_msg_0.value.assign("QQOEXSDKKELRFTMCIJXFZZSOBNVQENUBHJQDNXCOAAMTNEFWWVHMDKZGVQVZDCLLIIPUMPHPUPWZSSGVQIXKOTQUXLWWAUTYYABCUHMCRKFDNNO");
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
    msg.setTimeStamp(0.421465996775);
    msg.setSource(41033U);
    msg.setSourceEntity(225U);
    msg.setDestination(25821U);
    msg.setDestinationEntity(36U);
    msg.name.assign("DXXAJJCIXMUKJGHDRSBEDCYTUTWAXPIHIKHMONEWUFVGCSVPXEBIZNOFJALZSCHNOOTUWVAQVDDNDTGYSNYMBIJAVNLEEFBWJOEPCGYLLZBQNDHUYAABKTOYNLFKCU");

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
    msg.setTimeStamp(0.784137279612);
    msg.setSource(6577U);
    msg.setSourceEntity(174U);
    msg.setDestination(57030U);
    msg.setDestinationEntity(134U);
    msg.name.assign("FUEUDFNVBZEFCAVRTDRYBUVAICMOOGYUJKCQRIYRKUWGVHBWXCGGYJOCMQSQMWFIOWPBXSOHKAXUKAYJISZLVJAMXUSVALDPBVYCEQKLDMENZNPTQMAVONPRECTMH");
    msg.visibility.assign("ASPVWONTBIQREWJHMJMHCEZPNMEZAOQHKCYZRWWKRRSGNECDOJOWTKUETJFUVVLPNCFVCMFSNVDZUSZQOUHBMCYQXKAHFXBIMJZKSBTCAZGAELATVPJQZMIBYNBGRFGRXGEWKAJTDRKRPELOVHCECUYYUXYDHYSDPXAWIFQIUPNQGTLXATDLOLXUDXIIDNQGVQISJWDGA");
    msg.scope.assign("ARAHLCZJTUTVBILOHPLAMDOUWISJKTLCOSGVJCTXKXWAYKDPKEHMQNPGUGMUYDZMPOZRTSGEOKHSJKEQRZFHHYCUISOKMQXKGJDFFBUNFNOFCHGZPABJYLBIURXWZOFDWCYMBUXSHXOJHVFQNTCXFMXWVVTRRMBINVUKSNNSNFRTQVTQEYEENSEJCJZBBIEGWIIYBLBDFPQPMRLEAYWVSAOGXJRAYLPQD");

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
    msg.setTimeStamp(0.430683225689);
    msg.setSource(39163U);
    msg.setSourceEntity(111U);
    msg.setDestination(59725U);
    msg.setDestinationEntity(35U);
    msg.name.assign("JMEUQARKLBYTEXLMKVWKPKQAFXOVQGWIAONVTLCNCOHSALIQYFPCMLNXXBIEIRNQSIZKYXPPUGQOJCDWCUHJDUDRMZFXMTGVTMGVNPMQDGFOJYSRUHRBJPTFHZRUCAMIHENZXPWPFEXCYKLHCPFLZSNOVRTVOHTBUDIKEWASSBBGVWTPHJEYJBDKGJAQDIYBZMFVOALWRVAZUBQLFRTXHZSGDJGJDQAE");
    msg.visibility.assign("UTXNDZPWBWGSUYXVJBRGIWERFJPXWHPBNMRVKSSHKHAEODUQCCDJOUVYMYKFVBLSIUJTBKBWZWSBZXOMXAHIHKWMMHTCOVRNSIRTFOLMUKMDIYGSOZKNYJFZLTQFAIQTXZNFIERGTJCJVBFDQOVEGTMINSCPCKYPGDXUIABAEFGQNJMCNKARVYLARLDHYEOZQNEUBPOZPYQGJECQWPHATEPCVLIFMSX");
    msg.scope.assign("BPFPRIQEOEAAXNSCSCHRISIGIRZULTPHVKLCUDMOFABSPZBAGXNVRIVPEAOTVUVDTGQMCHGHPFCLJSQZGRVAMWHDOPJNECQEHDQQJYKLFZTTXIEWZXYSRUEMYDLMBRSQOTNFLAIUGBXLOWKKNTSJJFROQZLJGDCYUWJXUBFOFYPVGKHHDTIZKDOTANEKQMUHIRXX");

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
    msg.setTimeStamp(0.158298517565);
    msg.setSource(37734U);
    msg.setSourceEntity(82U);
    msg.setDestination(26832U);
    msg.setDestinationEntity(29U);
    msg.name.assign("ADYIFWRCIZGLSOREMHVRELDOZVWDOYIXTXQRPMPPTYZQNNUQPBKSZGFEUIYVBTSLFYXYBIHXLLKTMUZRSZTHKQUMDAMIAS");
    msg.visibility.assign("GOBNIGWUYQCCTGETQJPTPRUFYRLBRRDOLTZEPWRPHXBJPFOQFFYQGUASMNPHXZXINLISZWJDIJJKMBZARFDMWZZSPEVWQHTTUANHUTZVK");
    msg.scope.assign("EPCCQWLLOYLYBNUPPIHFWKELYGJGMEQJHXSMRMOFLACZFACKAIULOTVSNJPSQYZJKOAVKDHSZAYNSTWQIUMKMMWVAWHVGTXXPCDRESEYZBUTNAIYRVEMMBX");

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
    msg.setTimeStamp(0.545274537621);
    msg.setSource(17761U);
    msg.setSourceEntity(46U);
    msg.setDestination(4579U);
    msg.setDestinationEntity(80U);
    msg.name.assign("DYFUTWWVEQCEHAGBZJPAHOMTDFAXLQSMIRRNDFJWYBLBGVNLOCHLAFNFQBOYBAONZZRBKUEXYICPTZSJFRYVPJTUSZLGXPTTKLJEMSCYUPAMENQXXWVSGCUBQPDVPSRKW");

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
    msg.setTimeStamp(0.209461540281);
    msg.setSource(56323U);
    msg.setSourceEntity(17U);
    msg.setDestination(30224U);
    msg.setDestinationEntity(160U);
    msg.name.assign("APAFAOBEYVUNJRIFUSCVWUPNVESWYCUBJLPHSTZEQCLIIKJDGWWVBINAZBRQZRZIVDIMOWCCUCRHJHMLXMSUETDYMPYERTIRJCVYQBNTOLSGXBZBKUNGBAZDMKQTHKWPFJVLOPLIWXFSBMGIXAOFDMERJZ");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("VNOHOGORHQZGJBSACAODJHXGJBVVGQQIZCWDTGMCWQTBNKWMSMMMWPWDYXZUMUTCCGFOREHGZECJLUYUHEJDAAJQULGMSVKAIHERCRERXFHKDNBJUSURQAOTIJ");
    tmp_msg_0.value.assign("XBFWUUYCWEZZNWQXVIGIQBMXEAVSRANJJRRLCWQOALZRLYMKHODLLWFRZYSCGPWOOSTFBCGNPMBAUTJEQKKHDUSKDPBBYONWTGQORGSDNZPHRVEWMTYRGPZBUJOEXPLDNPKIIXXYTJLBGDMIFVEOPKJSUTCDAIOBIYCACRINVJUNXHASQTWOXTHGNFUJDFKQPYMLLCE");
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
    msg.setTimeStamp(0.690562369673);
    msg.setSource(19021U);
    msg.setSourceEntity(63U);
    msg.setDestination(60829U);
    msg.setDestinationEntity(226U);
    msg.name.assign("PLJCHQWKZTLSLBKUEUAKJQTEWXRSVGTUFTOMQHPWSWOINHNGJEIMTQSSCDRABPFJCXSHOLAVNCFIGRYLRMDCNWDDWGVSFXQDOEEAVICOOUEZMGZGAYLEZHPVBZVBLJNBQVYFVNLKQXTHLBKSQUYDIJVK");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("LYEXFEDDPQPIAXHPIDRDKNAPDQYPPYFUZ");
    tmp_msg_0.value.assign("RXMXRFJGGKBAFCBXNWLZGIJWZAXLMCWLSNYHWULJDBMTIOZYPT");
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
    msg.setTimeStamp(0.575235786369);
    msg.setSource(46740U);
    msg.setSourceEntity(12U);
    msg.setDestination(64270U);
    msg.setDestinationEntity(102U);
    msg.name.assign("AWGDCYEMSHWFAJTRVFDOWYCMEHABJWQOZLOANDTVACUIMGZNFVTFMHSSHILNZNIPOUAFBGVQUXTREPAEDSMKFBZDMYGIKLRIDHCPVUMCXBJYEISIXTEKJZPEJNLOWAQQUJOQIRYNBAXWTFJEHRDXGJLXYAEENYQNCSOPZQVUJPXKIOLLFPDPCYRTVUFRRRSWJZOMYH");

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
    msg.setTimeStamp(0.971581223534);
    msg.setSource(15276U);
    msg.setSourceEntity(40U);
    msg.setDestination(39746U);
    msg.setDestinationEntity(145U);
    msg.name.assign("UXBCJQCUDBMVPKIKPKGAJMURCWEMBWRVTJEKCMCBUFPCNCVTGBONAWHTKOXWAXEPNGFDGDVKRZVKMFZHOCFGZURACOBMTVZLZQBRDZHLUONPRJHVFDVYXHYBSLXMUHTEOWZOWYUYLAQCJWYISODBSOAFKPSGBRGDLHQZOFNLSDHLYSSENIPYTESMTGFJSHIRAPRLIQXJNWAPNTYJWXVKNYXUJXTEURIPIQYDF");

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
    msg.setTimeStamp(0.172383336219);
    msg.setSource(57893U);
    msg.setSourceEntity(201U);
    msg.setDestination(57555U);
    msg.setDestinationEntity(183U);
    msg.name.assign("YCUVHJBNGFJBQFXAGISTKCVDOLPWRNUBEDTMIPZFHQPLQLREHKGITSKYWGFWADXMTPFCABHFZFSJDKOABZBXATGDEYXQXMHSLWNCQLOCWQOCMQFURAHOXITVCTESRUJJPTQYBYMUJXNOGRUIEDMEGALXLVOHCPKOUHZIYWYSPSWSGVNJYMLZARKZYDENIZMJVWSEQQTUZZMTNNEOPROHNWGMZFDBAVKAVPVLUIGJKFCYWNDUERXRKB");

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
    msg.setTimeStamp(0.949262319698);
    msg.setSource(41917U);
    msg.setSourceEntity(252U);
    msg.setDestination(48712U);
    msg.setDestinationEntity(127U);
    msg.timeout = 1597026587U;

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
    msg.setTimeStamp(0.00786691558081);
    msg.setSource(48216U);
    msg.setSourceEntity(12U);
    msg.setDestination(3727U);
    msg.setDestinationEntity(98U);
    msg.timeout = 3499625211U;

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
    msg.setTimeStamp(0.348959357523);
    msg.setSource(18056U);
    msg.setSourceEntity(134U);
    msg.setDestination(38360U);
    msg.setDestinationEntity(209U);
    msg.timeout = 976085393U;

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
    msg.setTimeStamp(0.433662738129);
    msg.setSource(29640U);
    msg.setSourceEntity(120U);
    msg.setDestination(54319U);
    msg.setDestinationEntity(0U);
    msg.sessid = 3599011020U;

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
    msg.setTimeStamp(0.0273991637692);
    msg.setSource(56240U);
    msg.setSourceEntity(53U);
    msg.setDestination(26262U);
    msg.setDestinationEntity(96U);
    msg.sessid = 3325888643U;

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
    msg.setTimeStamp(0.935905969415);
    msg.setSource(407U);
    msg.setSourceEntity(199U);
    msg.setDestination(27895U);
    msg.setDestinationEntity(61U);
    msg.sessid = 4183457073U;

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
    msg.setTimeStamp(0.563837214556);
    msg.setSource(48970U);
    msg.setSourceEntity(176U);
    msg.setDestination(61938U);
    msg.setDestinationEntity(202U);
    msg.sessid = 4118558504U;
    msg.messages.assign("AUEONPGVWHQNZAQNOISVAOTRZFUPMHNPORWHVGVILPBLTC");

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
    msg.setTimeStamp(0.172856981525);
    msg.setSource(31221U);
    msg.setSourceEntity(123U);
    msg.setDestination(39746U);
    msg.setDestinationEntity(95U);
    msg.sessid = 2169756282U;
    msg.messages.assign("WPSWVYSEATDOC");

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
    msg.setTimeStamp(0.192448849115);
    msg.setSource(3808U);
    msg.setSourceEntity(10U);
    msg.setDestination(23711U);
    msg.setDestinationEntity(72U);
    msg.sessid = 4102884389U;
    msg.messages.assign("GAKFYRQEXOBOPZRTYRUJBERBKJWDEMMHCFBXQAHMFDGZNQTGJJOFSXTACEEABLRXHSSETUOKONOUOCLBZDOFXUESIQPIBVLVXJDMSYUWQZALHJQDCVYJCUFSFPWFZWHDBVQVLPQJXYNIQVONEGGGHTXANTINHYRGRCFYMJTZVTICYFYBCMPKRUQKMCDLMIRTWXINGADSLKTMI");

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
    msg.setTimeStamp(0.704627761785);
    msg.setSource(18199U);
    msg.setSourceEntity(151U);
    msg.setDestination(59170U);
    msg.setDestinationEntity(207U);
    msg.sessid = 3647485820U;

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
    msg.setTimeStamp(0.95740972841);
    msg.setSource(12424U);
    msg.setSourceEntity(29U);
    msg.setDestination(48466U);
    msg.setDestinationEntity(109U);
    msg.sessid = 2648047571U;

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
    msg.setTimeStamp(0.188537990973);
    msg.setSource(12473U);
    msg.setSourceEntity(161U);
    msg.setDestination(17241U);
    msg.setDestinationEntity(207U);
    msg.sessid = 4159530418U;

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
    msg.setTimeStamp(0.957274789388);
    msg.setSource(36285U);
    msg.setSourceEntity(147U);
    msg.setDestination(50543U);
    msg.setDestinationEntity(27U);
    msg.sessid = 2703631820U;
    msg.status = 46U;

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
    msg.setTimeStamp(0.710273966834);
    msg.setSource(24432U);
    msg.setSourceEntity(117U);
    msg.setDestination(36736U);
    msg.setDestinationEntity(146U);
    msg.sessid = 3610064924U;
    msg.status = 202U;

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
    msg.setTimeStamp(0.230833101031);
    msg.setSource(27178U);
    msg.setSourceEntity(37U);
    msg.setDestination(31861U);
    msg.setDestinationEntity(2U);
    msg.sessid = 1247533367U;
    msg.status = 198U;

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
    msg.setTimeStamp(0.643094736284);
    msg.setSource(6176U);
    msg.setSourceEntity(116U);
    msg.setDestination(57162U);
    msg.setDestinationEntity(166U);
    msg.name.assign("MTYIUZKYEMJTBIZJRKDPPXYSPNFFFIHYSBDLLVJBSZFXHMSCIOFFFYIBQGQXAGCGVXNPLOYYBEOJLBGUGWLTONCEDSZMEMAXQDPCGAAMQAWNVJMOHXCREURJHWK");

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
    msg.setTimeStamp(0.679744813191);
    msg.setSource(14767U);
    msg.setSourceEntity(114U);
    msg.setDestination(49017U);
    msg.setDestinationEntity(195U);
    msg.name.assign("RYQZPESXIRFHJFVFNTMWSBODCQMTALZSUFLUPWWPHYLCDBPBGDGPNHTVIENVCUTABXHICRIGOLEGKDCXPKAWQVZNWRMZEUORSRQWCFPGSVEVKDJMOYODIQAZY");

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
    msg.setTimeStamp(0.903547700174);
    msg.setSource(958U);
    msg.setSourceEntity(92U);
    msg.setDestination(23387U);
    msg.setDestinationEntity(131U);
    msg.name.assign("QKWXLTAAYNOSJITHAHNRUBCHQUWPJFVHQXFRXMDBMDNAUFKYOEULWLZFVEETAYPHQOWYNAHIWELSJRVQHBWPKOKRMCGMLGZFOUUNVCPKQKXHSIEGGPVSSDCFSXXYKRTNOCLGIPAGIWNLNBIDMIJPATKSBQAWSEOKBLYJOOEEWGZQAMUUXSCZVVJERCZTDUDCFBQLWJITJPCYYPNJZEBZUQXTRHNRTFXMYGL");

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
    msg.setTimeStamp(0.388985994141);
    msg.setSource(26558U);
    msg.setSourceEntity(42U);
    msg.setDestination(17641U);
    msg.setDestinationEntity(186U);
    msg.name.assign("NNLDUTKVSFNWZCOBEHJREWLBGFCFBTXNAIIZHQNXHBDHSTSTPGNSCMJIFAMEWKAWQYQYGRBDULIRMARJFVJEONEQOPAFSPVHTNLMCRGXEHZVJWYBLGZYUFGDUCKYIQNC");

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
    msg.setTimeStamp(0.597360547354);
    msg.setSource(38809U);
    msg.setSourceEntity(75U);
    msg.setDestination(5498U);
    msg.setDestinationEntity(150U);
    msg.name.assign("QIFTIXGXGTJTJAYNEYLOAHEFVWORJGVO");

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
    msg.setTimeStamp(0.756391214786);
    msg.setSource(14627U);
    msg.setSourceEntity(89U);
    msg.setDestination(13325U);
    msg.setDestinationEntity(253U);
    msg.name.assign("WBHGDAIINCPYCOCRAHSJILUJOCDJUDVFCQEBCCWIHGPVZFJNWLZXPNSBGPNXOYXKMWPDMGPPEBBVVWDWGQOMKXNIZZTLHOKTTNHLLYFSIRSRWRUONKFQKGENUMIWMLYEAEEKW");

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
    msg.setTimeStamp(0.141105481596);
    msg.setSource(7563U);
    msg.setSourceEntity(114U);
    msg.setDestination(14743U);
    msg.setDestinationEntity(19U);
    msg.type = 14U;
    msg.error.assign("PBZHGYDJLUTBEYFHYMBRGQVQBFXRVUQBIFBGRYFNEETYEISTSKDAXOIFVSMVHUUFXDWPCZYOJNUXSSPZWDJOXLOMUAXGZX");

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
    msg.setTimeStamp(0.634815282673);
    msg.setSource(1332U);
    msg.setSourceEntity(38U);
    msg.setDestination(13419U);
    msg.setDestinationEntity(111U);
    msg.type = 112U;
    msg.error.assign("SERVOIXLVPYRVBUFLTQDCWLZGVCIDLRKCSEJDXHGHXTOGASYPHYEMAPIIQQDLOQBMAKYKLLPKWJECTHJQUYMGJEUKHJFAOKWNDUGVYWULFCFTXHEIUODFBMJVDVJNHJASSOQGCVTNMCIWRSJXTKHZAPBUNNSSZTPBFERGIZTPNMBOGNFRXOGNOXUPCVYEDZBCQGTRZZAITRWMFUYWEXXPIVBKUBWIKCYEZRYHD");

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
    msg.setTimeStamp(0.253905846812);
    msg.setSource(63820U);
    msg.setSourceEntity(16U);
    msg.setDestination(15715U);
    msg.setDestinationEntity(211U);
    msg.type = 222U;
    msg.error.assign("EHUALOABFXZZRMBTRLXTXRWZYEHSNCBGMSAQMFPRSWQXPRUJNYXRFBSYFJTQYJWIBTEDHGZLTAMALGIDPVBRUUVBLYFYWPCFCVNWIAKKKIGHFHNSBVDHWOXEOCNPVOLNMIAJQAOIDDSKTJCQNMJGQVUWRKMZRPRSWXSDTEGHKIAZLBSHPKDKGUTOFLO");

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
    msg.setTimeStamp(0.52807804272);
    msg.setSource(44258U);
    msg.setSourceEntity(145U);
    msg.setDestination(47370U);
    msg.setDestinationEntity(239U);
    msg.seq = 33391U;
    msg.sys_dst.assign("FTTMOAPSWQMKWMPGRIXKPYJCLHDWWIOKTQDHAIMOACZZEQSJBCRWKNIIYLKMBPXYHSDHJNPRVYQGDZRHOYWIKZNXIRNXFFGYTEYVQUFSBWCGRTEZLXLVROLNATEDVMGUXNZMUBVQSJFJPPFXULCQLGOPAJVQTXKRZBSTFWVRCX");
    msg.flags = 199U;
    const char tmp_msg_0[] = {-105, 12, -125, -62, 47, 58, -29, -77, -71, 56, -28, 54, -10, -53, -23, 71, 107, 35, -114, 20, 74, 51, 103, 14, 112, 11, 122, -6, -106, -1, 79, 105, 94, 18, -20, -128, -35, 49, 11, -64, 46, -40, 25, 104, -32, -102, -5, -96, -8, 65, 74, 50, 27, 86, -93, -33, -58, -117, 125, -29, 53, 64, -61, 70, -127, -109, 118, 52, 6, 45, -95, -105, -16, -29, 17, 28, 121, 34, 18, -25, 10, -26, 49, -117, -66, 30, -92, 42, 95, -1, 2, -38, -55, -7, -124, -120, -34, -78, -28, 93, -55, -10, -31, 48, -28, 97, -113, 77, -98, -102, 38, -76, 25, -60, -85, -34, 28, 38, -73, 76, -85, 4, -105, -51, -111, -85, 60, -8, -109, -4, 85, -122, 104, -92, 115, 107, 107, -35, 66, 54, -100, 21, -24, -51, -7, -119, -48, 43, 108, 114, -97, -87, 124, -87, -125, -122, 6, -108};
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
    msg.setTimeStamp(0.818187937922);
    msg.setSource(56473U);
    msg.setSourceEntity(135U);
    msg.setDestination(43149U);
    msg.setDestinationEntity(106U);
    msg.seq = 33873U;
    msg.sys_dst.assign("HYLIVARIKFQOJJSDSFWMTNDFLYQOIXXLJKBEDXUFTULZWWKJCDXBWNYLUZDRATPQPLGFKJESHQPZTYORUVGRHRSWRGFVNHEHHSHSGNWUTKEWZMOKPGYNXVMGIMRWISSVFEAIVCNBQYROCBZJDZJRJMNFAOCUXCVIJEGPSNCUZTIVXQZHMPTKUXERMFDOYCVWCBELDTBEBLLAYDPQATBMGOAPCTDUAQY");
    msg.flags = 78U;
    const char tmp_msg_0[] = {47, 21, 41, -34, 13, -74, 22, 19, 110, 86, 105, 118, 56, -27, -65, 1, -122, 1, 11, 97, -15, 113, 84, 17, 46, -45, -99, -61, 60, -15, -116, 115, 118, 18, -7, 99, 105, -51, 0, -76, 107, -84, 87, 61};
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
    msg.setTimeStamp(0.413577984607);
    msg.setSource(19403U);
    msg.setSourceEntity(142U);
    msg.setDestination(4879U);
    msg.setDestinationEntity(200U);
    msg.seq = 18781U;
    msg.sys_dst.assign("ZCKCYYXFVSTNMMDKRPBYHLWNYRCJDSQENUZMBUIOZNKQUBCVOWFFWVJYBFGBPPUBVUIMEUVSQIDPJJJKEGQGAHOOTOSLOSSQAFXIPAHYGNZJIAHKOHSXFFRLRHTREGIRAIXXQTLXKNRPVDJWEWJERDDTUBPUTQLTZAZENYCGYFGQXZNOMRSOMDHWWXVKFLGHGHGMAQKECVYKCSMZVBBWUTAVITZPWAZBDQEMXLDUCXRASJKNIP");
    msg.flags = 214U;
    const char tmp_msg_0[] = {-33, -111, 26, 96, 15, -36, -14, -111, 113, 118, -47, -2, 50, -44, -107, 37, 119, 29, 125, -24, -6, 55, 46, 119, 50, -53, 2, 51, 26, -121, 96, -9, 63, 118, 72, -113, 41, -27, -4, -32, 57, 108, -25, -113, 67, 61, -14, -65, 112, 47, 96, -11};
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
    msg.setTimeStamp(0.876373450674);
    msg.setSource(44164U);
    msg.setSourceEntity(16U);
    msg.setDestination(21707U);
    msg.setDestinationEntity(74U);
    msg.sys_src.assign("NXEWXYPPLTSCOIQJVOUH");
    msg.sys_dst.assign("IHLMGTPFZUJXGCKTFHCGVLLMDPDUCVHAJJOIOORXFRTLLAYFKRQDLYXKVRSNN");
    msg.flags = 78U;
    const char tmp_msg_0[] = {-65, 121, -2, -117, 58, -46, -92, -29, 27, -105, 36, -29, -76, -22, -37, 19, 16, 110, 83, 122, -18, -68, 77, -113, 100, 125, -50, -105, -44, 54, 102, -107, 103, -53, 110, -20, -5, -15, 20, 59, -50, 112, -95, 25, -38, -87, 21, 108, 17, 124, -55, -94, -106, -100, 97, -126, 34, -90, -63, 23, -62, 30, 9, 64, -78, 109, 5, 83, -36, -86, 38, -53, 86, -30, -50, -63, 87, -77, -103, -14, -50, -11, 9, -62, -56, -101, 37, 60, -75, -47, -49, 25, 88, 25, -99, -21, 87, 8, -5, -74, 59, 95, 33, 76, 101, -33, 31, 96, 92, -6, -53, 89, 83, -13, 86, 53, -126, -106, -52, -74, 89, 27, 61, -58, 87, 116, 74, 123, 36, 46, 20, -93, -15, -92, -27, -41, 92, 59, -114, -111, 39, 57, -22, -73, 66, -1, -105, -60, -64, -9, -102, -15, 41, 73, -72, 22, 98, -20, 80, 98, -120, -108, -65, 30, 59, 91, -123, 97, 52, -31, -29, -44, 93, 3, 123, 69, -40, -91, 124, -123, 81, 106, -81, -104, 96, -30, 70, 105, 118, 56, -117, 77, -94, -35, -103, 10, 25, -13};
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
    msg.setTimeStamp(0.675459058294);
    msg.setSource(19391U);
    msg.setSourceEntity(204U);
    msg.setDestination(42114U);
    msg.setDestinationEntity(125U);
    msg.sys_src.assign("NICVFOKOAVHGIZEPKTWQIAPMBEUARHTWRVXWHVKQBVIIJXEGSYOXEAFBKX");
    msg.sys_dst.assign("NPGKTWCYKJIQZOZLXGOJBBXAHIPQDVZEDVFVPKVWYOHBDGKZGTRRFLUSXDCFVTQYWCJEKILFHKLXSTCMJMBIRRAWRGPI");
    msg.flags = 196U;
    const char tmp_msg_0[] = {-57, -124, 39, 73, 22, -106, -66, 7, 9, -1, 96, 35, 122, 16, -80, -81, 7, 34, 54, -18, -77, -104, -59, 92, -72, 94, -10, -55, -46, -70, -98, 60, 21, 94, -41, 16, 77, 76, 29, 122, 45, -18, 26, 19, 4, -13, 24, 31, -34, 89, -102, -67, 6, 93, -48, -120, -9, 62, -44, -10, -54, 74, 44, -56, -29, -93, 19, 9, -68, 2, 126, 18, 63, -37, 3, -88, -90, 120, -64, 86, -6, -77, -80, -18, 75, 72, 92, -95, -116, 57, -81, 11, 3, 113, 85, 24, 124, 55, 59, 124, 18, -39, -116, -101, -81, -30, -115, -95, -72, -127, -102, -88, 113, -4, 81, -39, -18, -37, 60, -125, 6, 124, -79, -46, -98, -122, -83, 85, -65, -47, -50, -10, -19, -81, 65, 0, 42, 40, -87, -18, 8, -33, 88, -86, 45, -110, -124, -107, -73, -109, -81, -95, -64, 91, 72, -38, 89, -105, 24, 58, -52, 5, 29, -102, -28, 96, 25, 36, -127, 42, 91, -110, 99, -83, -31, -4, 126, -47, -29, -119, 50, 36, 7, -54};
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
    msg.setTimeStamp(0.872578653202);
    msg.setSource(54977U);
    msg.setSourceEntity(184U);
    msg.setDestination(1601U);
    msg.setDestinationEntity(170U);
    msg.sys_src.assign("ZMKPQWXNFKJQIXDNMACRRETSUBIETDHLYDRNCVUSZHWNNWIVSUKTMQMFVFIBPFNZQZRPVWYDELCOSLPWJGYZFEKTTKVCEWOJYNQSEYRQBIOVGCGZKIDPLBPRVDEIUU");
    msg.sys_dst.assign("OYVCUPVOIQSGLCILKBYYMXZCLUDZHTZPHZSUEEBUCXPDATZJVWCAUPFMVTPCKEENZWJRYAOOGCSJDNEFPWLUJQNERBXQTGSEXVDHRPCXHFKWBHITJMTQZNYBKCHULKMAPXHQAQIARRZPNAOCNEYORDFJ");
    msg.flags = 89U;
    const char tmp_msg_0[] = {24, 119, -100, 37, -50, -5, -98, 86, -49, -68, -37, -38, 102, 39, -122, 77, -88, 84, -77, 88, 22, 106, 31, 11, -100, -108, 1, -79, -85, 113, -110, -29, -86, 73, -2, -65, 117, -55, -71, 15, -103, 78, 107, 87, 78, -33, -59, -64, 47, -68, 74, -28, 21, -96, -66, -12, 45, -111, -116, 61, -66, -119, 105, 2, -123, -79, 82, -54, 85, 91, -127, 96, 79, -47, 19, 124, 45, -105, -12, 60, -6, 72, -50, 62, -43, -78, -109, 14, -121, 4, 123, -78, -8, 87, 41, -114, -26, -104, 76, -59, -123, 5, 101, 33, 78, -13, 97, 50, 49, -82, 4, -110, 87, 52, -49, -37, 14, 72, 120, 4, -40, 95, -1, 120, 95, 79};
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
    msg.setTimeStamp(0.723340330236);
    msg.setSource(29685U);
    msg.setSourceEntity(190U);
    msg.setDestination(16820U);
    msg.setDestinationEntity(233U);
    msg.seq = 7471U;
    msg.value = 87U;
    msg.error.assign("JXOHMNELRDTWTVEOMYOHPVAKNRKFPFCSLJPEPSKXZJHTOZRZULPEFOUMKUDJJUGNVCPQXCVWNTQSBKOIBKKDCEQJISNRRNKGJJSRREYCQGSXIZNEYZHVHUIQWZKMZVTTFBUISXVKTOOPZAANHUAMCQGVBXWDCXYREAIETUHNFLSYJPMXBWTVLZDYGGAH");

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
    msg.setTimeStamp(0.671323346967);
    msg.setSource(60945U);
    msg.setSourceEntity(198U);
    msg.setDestination(58256U);
    msg.setDestinationEntity(35U);
    msg.seq = 19615U;
    msg.value = 54U;
    msg.error.assign("WMRTTKEHNUGTXNAHRYBLWBMJJILQCGII");

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
    msg.setTimeStamp(0.458689982594);
    msg.setSource(23072U);
    msg.setSourceEntity(66U);
    msg.setDestination(29586U);
    msg.setDestinationEntity(223U);
    msg.seq = 63575U;
    msg.value = 238U;
    msg.error.assign("BVWFEOYHLCWNUPNKLZOJWVLSDYPRLIDANJTLQDFIOQZXTRYOHCOXSW");

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
    msg.setTimeStamp(0.666665703598);
    msg.setSource(37591U);
    msg.setSourceEntity(204U);
    msg.setDestination(6083U);
    msg.setDestinationEntity(124U);
    msg.seq = 65229U;
    msg.sys.assign("QYNROCIGUOGFKIOSMAZWZFDLQUKPYVCWZIDPMOUPEIYJYVWQWXXGIGVNYWYUEGVRCLAVXTQMWVSLKBGBDUYMGAXDLTMCFAMWUZUSZWKASDBANEXJPSLRNJCMAIOBFKYBNQEUZNACVAFLGPB");
    msg.value = 0.179291412717;

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
    msg.setTimeStamp(0.206946537714);
    msg.setSource(24409U);
    msg.setSourceEntity(12U);
    msg.setDestination(27507U);
    msg.setDestinationEntity(26U);
    msg.seq = 64800U;
    msg.sys.assign("UQSLPHYQBCTVWXXPFOGVEYKSDLYRFEXCJVNMDFMNZZGLIHKVUASDOIYLJLCDBCPMMQHTSXRPAWXRDAEZVYUXLNGZINBMYYGLEAWUUQALSAIRSKQUPVVFVDCGTBBFPFSHYECBKDGWICLABFMJIATGCIKYPKDWJ");
    msg.value = 0.114371731345;

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
    msg.setTimeStamp(0.630618255227);
    msg.setSource(14515U);
    msg.setSourceEntity(159U);
    msg.setDestination(61437U);
    msg.setDestinationEntity(143U);
    msg.seq = 17562U;
    msg.sys.assign("ZLIONEOJONVVCGBCSNFUHEKYZGTGFYUXJEUMKWCBBXPKTEMYMQJFAJACTQHRLHJWQQSCRZJRLSWUJXRGAMBGFBLBARTSHHCDZIPBCSHOJXZQPADADXEFYQJYUZEHR");
    msg.value = 0.0495577202323;

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
    msg.setTimeStamp(0.20344791519);
    msg.setSource(51981U);
    msg.setSourceEntity(42U);
    msg.setDestination(9295U);
    msg.setDestinationEntity(152U);
    msg.action = 147U;
    msg.longain = 0.690607620934;
    msg.latgain = 0.477323615124;
    msg.bondthick = 2379355012U;
    msg.leadgain = 0.250873565578;
    msg.deconflgain = 0.799437977538;

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
    msg.setTimeStamp(0.394672987819);
    msg.setSource(42429U);
    msg.setSourceEntity(130U);
    msg.setDestination(17988U);
    msg.setDestinationEntity(39U);
    msg.action = 191U;
    msg.longain = 0.45965743125;
    msg.latgain = 0.258390607659;
    msg.bondthick = 1395383564U;
    msg.leadgain = 0.795484627803;
    msg.deconflgain = 0.702796125578;

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
    msg.setTimeStamp(0.86668655465);
    msg.setSource(60410U);
    msg.setSourceEntity(2U);
    msg.setDestination(25503U);
    msg.setDestinationEntity(78U);
    msg.action = 157U;
    msg.longain = 0.489810997203;
    msg.latgain = 0.156367257823;
    msg.bondthick = 2007406255U;
    msg.leadgain = 0.162133279415;
    msg.deconflgain = 0.842699426299;

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
    msg.setTimeStamp(0.85812814602);
    msg.setSource(20152U);
    msg.setSourceEntity(146U);
    msg.setDestination(45967U);
    msg.setDestinationEntity(45U);
    msg.err_mean = 0.238380162329;
    msg.dist_min_abs = 0.203300862466;
    msg.dist_min_mean = 0.0858697632707;

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
    msg.setTimeStamp(0.813751326792);
    msg.setSource(59668U);
    msg.setSourceEntity(191U);
    msg.setDestination(11958U);
    msg.setDestinationEntity(210U);
    msg.err_mean = 0.874210096495;
    msg.dist_min_abs = 0.456374968819;
    msg.dist_min_mean = 0.778840756442;

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
    msg.setTimeStamp(0.593502677788);
    msg.setSource(23248U);
    msg.setSourceEntity(87U);
    msg.setDestination(13424U);
    msg.setDestinationEntity(127U);
    msg.err_mean = 0.389469669383;
    msg.dist_min_abs = 0.96341893205;
    msg.dist_min_mean = 0.584793011757;

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
    msg.setTimeStamp(0.880991090194);
    msg.setSource(7690U);
    msg.setSourceEntity(106U);
    msg.setDestination(2672U);
    msg.setDestinationEntity(195U);
    msg.action = 224U;
    msg.lon_gain = 0.922044074348;
    msg.lat_gain = 0.216053141181;
    msg.bond_thick = 0.224283112136;
    msg.lead_gain = 0.0982507130059;
    msg.deconfl_gain = 0.723421403104;
    msg.accel_switch_gain = 0.256491204039;
    msg.safe_dist = 0.995702146065;
    msg.deconflict_offset = 0.388302312542;
    msg.accel_safe_margin = 0.391927681795;
    msg.accel_lim_x = 0.551599254359;

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
    msg.setTimeStamp(0.995387668444);
    msg.setSource(43398U);
    msg.setSourceEntity(113U);
    msg.setDestination(14742U);
    msg.setDestinationEntity(108U);
    msg.action = 188U;
    msg.lon_gain = 0.00762439029264;
    msg.lat_gain = 0.85248030779;
    msg.bond_thick = 0.18996877292;
    msg.lead_gain = 0.920031425323;
    msg.deconfl_gain = 0.614791001904;
    msg.accel_switch_gain = 0.648531497237;
    msg.safe_dist = 0.382998819865;
    msg.deconflict_offset = 0.56979904229;
    msg.accel_safe_margin = 0.649965560813;
    msg.accel_lim_x = 0.103745757886;

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
    msg.setTimeStamp(0.968771897268);
    msg.setSource(35491U);
    msg.setSourceEntity(18U);
    msg.setDestination(557U);
    msg.setDestinationEntity(200U);
    msg.action = 226U;
    msg.lon_gain = 0.980737813712;
    msg.lat_gain = 0.373224133578;
    msg.bond_thick = 0.931327102344;
    msg.lead_gain = 0.875126864644;
    msg.deconfl_gain = 0.0988526663449;
    msg.accel_switch_gain = 0.163475736192;
    msg.safe_dist = 0.154664807859;
    msg.deconflict_offset = 0.0677849147367;
    msg.accel_safe_margin = 0.762508813264;
    msg.accel_lim_x = 0.736501788874;

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
    msg.setTimeStamp(0.178691476105);
    msg.setSource(25829U);
    msg.setSourceEntity(206U);
    msg.setDestination(50148U);
    msg.setDestinationEntity(9U);
    msg.type = 149U;
    msg.op = 94U;
    msg.err_mean = 0.0560209057878;
    msg.dist_min_abs = 0.705721229454;
    msg.dist_min_mean = 0.923477154224;
    msg.roll_rate_mean = 0.324230247689;
    msg.time = 0.679719316587;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 243U;
    tmp_msg_0.lon_gain = 0.170470060655;
    tmp_msg_0.lat_gain = 0.00928782798677;
    tmp_msg_0.bond_thick = 0.810127090165;
    tmp_msg_0.lead_gain = 0.0801535740342;
    tmp_msg_0.deconfl_gain = 0.457924982627;
    tmp_msg_0.accel_switch_gain = 0.241555044205;
    tmp_msg_0.safe_dist = 0.693780652635;
    tmp_msg_0.deconflict_offset = 0.488977291789;
    tmp_msg_0.accel_safe_margin = 0.371607530229;
    tmp_msg_0.accel_lim_x = 0.313313296101;
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
    msg.setTimeStamp(0.245931834981);
    msg.setSource(42665U);
    msg.setSourceEntity(144U);
    msg.setDestination(10527U);
    msg.setDestinationEntity(122U);
    msg.type = 8U;
    msg.op = 225U;
    msg.err_mean = 0.940943741777;
    msg.dist_min_abs = 0.200886924498;
    msg.dist_min_mean = 0.5576460568;
    msg.roll_rate_mean = 0.389630770906;
    msg.time = 0.167256381691;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 145U;
    tmp_msg_0.lon_gain = 0.438867052099;
    tmp_msg_0.lat_gain = 0.687825094308;
    tmp_msg_0.bond_thick = 0.739851904109;
    tmp_msg_0.lead_gain = 0.678087872247;
    tmp_msg_0.deconfl_gain = 0.530385597406;
    tmp_msg_0.accel_switch_gain = 0.619072651433;
    tmp_msg_0.safe_dist = 0.509160143705;
    tmp_msg_0.deconflict_offset = 0.94075322328;
    tmp_msg_0.accel_safe_margin = 0.850774618879;
    tmp_msg_0.accel_lim_x = 0.890900142153;
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
    msg.setTimeStamp(0.094179030907);
    msg.setSource(16443U);
    msg.setSourceEntity(5U);
    msg.setDestination(24342U);
    msg.setDestinationEntity(127U);
    msg.type = 56U;
    msg.op = 95U;
    msg.err_mean = 0.780443500064;
    msg.dist_min_abs = 0.233985406605;
    msg.dist_min_mean = 0.789847415829;
    msg.roll_rate_mean = 0.35051031814;
    msg.time = 0.0253085460375;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 90U;
    tmp_msg_0.lon_gain = 0.0683781413357;
    tmp_msg_0.lat_gain = 0.658930653506;
    tmp_msg_0.bond_thick = 0.155622998739;
    tmp_msg_0.lead_gain = 0.761450641892;
    tmp_msg_0.deconfl_gain = 0.855684567321;
    tmp_msg_0.accel_switch_gain = 0.491527260382;
    tmp_msg_0.safe_dist = 0.959927585158;
    tmp_msg_0.deconflict_offset = 0.34298599563;
    tmp_msg_0.accel_safe_margin = 0.981034527694;
    tmp_msg_0.accel_lim_x = 0.437774176206;
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
    msg.setTimeStamp(0.775568772184);
    msg.setSource(26656U);
    msg.setSourceEntity(76U);
    msg.setDestination(10378U);
    msg.setDestinationEntity(37U);
    msg.lat = 0.44648486205;
    msg.lon = 0.364788460857;
    msg.eta = 92516151U;
    msg.duration = 55314U;

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
    msg.setTimeStamp(0.755693913951);
    msg.setSource(15543U);
    msg.setSourceEntity(44U);
    msg.setDestination(43689U);
    msg.setDestinationEntity(97U);
    msg.lat = 0.614153574695;
    msg.lon = 0.690901652573;
    msg.eta = 2305297346U;
    msg.duration = 5820U;

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
    msg.setTimeStamp(0.34101313058);
    msg.setSource(42961U);
    msg.setSourceEntity(42U);
    msg.setDestination(9036U);
    msg.setDestinationEntity(133U);
    msg.lat = 0.641096976386;
    msg.lon = 0.425569824079;
    msg.eta = 3322510800U;
    msg.duration = 53567U;

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
    msg.setTimeStamp(0.381306262353);
    msg.setSource(19516U);
    msg.setSourceEntity(232U);
    msg.setDestination(50363U);
    msg.setDestinationEntity(252U);
    msg.plan_id = 18571U;

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
    msg.setTimeStamp(0.208951301446);
    msg.setSource(19701U);
    msg.setSourceEntity(132U);
    msg.setDestination(19370U);
    msg.setDestinationEntity(141U);
    msg.plan_id = 53015U;
    IMC::SoiWaypoint tmp_msg_0;
    tmp_msg_0.lat = 0.528447794582;
    tmp_msg_0.lon = 0.990542130811;
    tmp_msg_0.eta = 2321260104U;
    tmp_msg_0.duration = 29390U;
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
    msg.setTimeStamp(0.436892381621);
    msg.setSource(27195U);
    msg.setSourceEntity(85U);
    msg.setDestination(34256U);
    msg.setDestinationEntity(226U);
    msg.plan_id = 34442U;

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
    msg.setTimeStamp(0.277670610257);
    msg.setSource(18924U);
    msg.setSourceEntity(7U);
    msg.setDestination(15606U);
    msg.setDestinationEntity(76U);
    msg.type = 30U;
    msg.command = 11U;
    msg.settings.assign("DOJJLABAJNCDKIZCRHXJVVBTLAQZXBSYNWLWOJBOTPVEPPOAVBPSFNDBPJKBCXZMFZHLZWISJVHDEUATKVGMLWNGCSGFCFRUGGWFWAFCSWMKAXNETRGYCKZYCOSDTHSPWUXIOVLIRNISEYDXAMRP");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 9816U;
    msg.plan.set(tmp_msg_0);
    msg.info.assign("BICAWIXKRCPSYLMIOYZLDETTPRKQVGHXDYSETOPJNXLABROZFZDDQFOIZKMXUNOCOGMUSHWXPLKFQMDMLLHOXIPGEXJPIJGGKVZAIXWSEDDZQNTKJCANOOBSRTBKFBQFAYUFCNTHAAPIBVNJAYZRJBDZGGNQHYJETUYYMHFBWWCSEDZCQMZUFJVLB");

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
    msg.setTimeStamp(0.0630933558816);
    msg.setSource(44993U);
    msg.setSourceEntity(118U);
    msg.setDestination(11191U);
    msg.setDestinationEntity(27U);
    msg.type = 95U;
    msg.command = 39U;
    msg.settings.assign("STNDQNUOBFODICTAYSWTVWNOEBRFSWKUGPJAVPZVTJFYGZBTKCFLITMSGRWDNXAMSXYKDMBSGKDQGYILFCGKKWPEOFVNONUBZXVNVPJTIAMEJTRRLCCPALTMGQJXHSCVZQONPWANUXDRSOOYRVBIDFQXMIWTESDGWQYQBGMYJLULLPKZDEYLHCVHJZUPBMOXAASZLHRMHPCYUABVHHQHZEBKKFJAELKWWC");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 33196U;
    msg.plan.set(tmp_msg_0);
    msg.info.assign("KPFYRDSTXQAYYIIWORNXKUBANVLMSHVAUPJIVCNXDJLPCMWDQASKMRHNLTRYUVPQBHADYZCYVPOLQTVFAZZEWMEGTRHZVMKFETTGJCPFEUCSMOTCIBJOAKUKFGTFALENYPWWOWROLUEFZJBLQMTQWOGOSAJLRIJTBQGYVEDPDNSEVKWIGYBXUJBMZNRQXDKHXIBSMGCBIIAQHBPXXOZJHNRLCZOYKGXG");

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
    msg.setTimeStamp(0.603644615867);
    msg.setSource(61588U);
    msg.setSourceEntity(67U);
    msg.setDestination(52620U);
    msg.setDestinationEntity(113U);
    msg.type = 145U;
    msg.command = 52U;
    msg.settings.assign("GQARVMLKFOFUYQPUMYPKUCXOOHNBJDNPZAFGLKRJJVNLTBIUMBOBWNGLDWYWLNXSFOQMQODZSAXJIZXCXFHPXXLTEZPMNHATBAXABYHYJDXTCTWGEYRURPBAKIIRCRZTFWBEWWMHQKGGCCPPJEMZYIDPCAVUSKSVFDMNJESDLFSQV");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 10323U;
    IMC::SoiWaypoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.411264855806;
    tmp_tmp_msg_0_0.lon = 0.940943318511;
    tmp_tmp_msg_0_0.eta = 1091244127U;
    tmp_tmp_msg_0_0.duration = 15781U;
    tmp_msg_0.waypoints.push_back(tmp_tmp_msg_0_0);
    msg.plan.set(tmp_msg_0);
    msg.info.assign("IYUKNFJXQXSWJILTQPJFHTSYGONFQTBUAKCRJMGQVUEGFWUNIQBDWRCAUEEYZBFUEZHWETCFLPIEDFLZYKPNDKT");

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
    msg.setTimeStamp(0.132842826669);
    msg.setSource(28108U);
    msg.setSourceEntity(231U);
    msg.setDestination(16680U);
    msg.setDestinationEntity(195U);
    msg.state = 244U;
    msg.plan_id = 9035U;
    msg.wpt_id = 225U;
    msg.settings_chk = 51048U;

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
    msg.setTimeStamp(0.993815804811);
    msg.setSource(2392U);
    msg.setSourceEntity(137U);
    msg.setDestination(48062U);
    msg.setDestinationEntity(79U);
    msg.state = 251U;
    msg.plan_id = 54726U;
    msg.wpt_id = 4U;
    msg.settings_chk = 63055U;

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
    msg.setTimeStamp(0.477510503499);
    msg.setSource(49410U);
    msg.setSourceEntity(42U);
    msg.setDestination(28346U);
    msg.setDestinationEntity(54U);
    msg.state = 159U;
    msg.plan_id = 22601U;
    msg.wpt_id = 220U;
    msg.settings_chk = 23658U;

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
    msg.setTimeStamp(0.954013859622);
    msg.setSource(17623U);
    msg.setSourceEntity(32U);
    msg.setDestination(40228U);
    msg.setDestinationEntity(211U);
    msg.uid = 55U;
    msg.frag_number = 159U;
    msg.num_frags = 38U;
    const char tmp_msg_0[] = {76, 11, 122, 34, -25, -21, 73, -117, 112, 119, 114, 38, -45, -26, -20, -22, -100, 65, -12, -115, -42, 12, 82, 57, -78, 28, 70, 116, -53, -29, 103, -11, -72, 29, -33, 111, -40, 66, 111, 29, 4, -19, 51, 102, 102, -49, -43, -2, 108, 100, 94, 93, 62, -98, -43, 125, -9, -75, 66, 0, -18, 29, 65, -1, -64, -124, -65, 34, -92, 53, 72, -16, 65, 105, 93, 108, 46, -78, -8, -83, 51, -71, 21, 68, 98, -1, -42, 48, 105, 29, -27, -15, 38, 36, -35, -18, -102, 118, 91, 104, 19, -14, 99, -4, -95, -62, -21, -70, -26, -102, -114, 92, 93, 67, -95, -25, -124, -16, 8, -100, -77, -97, -128, -48, -75, 56, -91, -22, -121, -62, -57, -38, 77, -121, 126, -113, -67, 15, -32, 41, 55, 54, 0, -79, 60, -102, -11, -7, -111, -10, 125, -81, -77, 125, -44, 8, -116, 0, -42, 120, 84, 15, -56, 89, -125, 95, -91};
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
    msg.setTimeStamp(0.469505329591);
    msg.setSource(34121U);
    msg.setSourceEntity(185U);
    msg.setDestination(11780U);
    msg.setDestinationEntity(170U);
    msg.uid = 215U;
    msg.frag_number = 154U;
    msg.num_frags = 136U;
    const char tmp_msg_0[] = {-47, -113, -4, 44, 45, 5, -108, 31, 20, -64, 35, 10, 126, 65, -13, 61, -55, 106, 13, 100, 68, -12, -62, -43, -103, -92, -67, -106, -61, -128, -16, -58, 95, 94, -96, 23, -93, -94, -123, -125, 8, 110, -79, -54, 69, -54, 77, -56, 15, 27, 65, -50, -32, 57, -40, -54, 20, 43, 68, 50, 99, 31, -33, -45, -33, 113, -13, 67, -69, 73, 111, -42, 35, 112, 72, -122, -40, 107, -92, -107, 40, -50, -91, 42, 76, 45, 1, 87, -114, 50, 75, 5, -114, -9, 75, 17, 120, -83};
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
    msg.setTimeStamp(0.664859584175);
    msg.setSource(34533U);
    msg.setSourceEntity(242U);
    msg.setDestination(11972U);
    msg.setDestinationEntity(214U);
    msg.uid = 133U;
    msg.frag_number = 219U;
    msg.num_frags = 18U;
    const char tmp_msg_0[] = {-92, -64, -4, -32, -26, -23, 114, 22, -99, 69, 102, 0, -52, -70, -63, 85, 125, -99, 10, 117, -80, -13, -55, 87, 110, -76, 106, 94, -80, 33, -35, -104, 101, 101, 2};
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
    msg.setTimeStamp(0.233501243624);
    msg.setSource(15456U);
    msg.setSourceEntity(12U);
    msg.setDestination(54586U);
    msg.setDestinationEntity(209U);
    msg.content_type.assign("BKZEDWECOLUZNTVJXWJMCQWHRHLZSAXHIQFVEGJOFLNNOSRMIYFEJITDIOM");
    const char tmp_msg_0[] = {-37, -55, -98, 41, -41, -111, 57, -70, 125, -12, 86, 48, -3, -114, -88, 117, -75, -63, 30, 52, 7, 82, -81, -38, 77, 118, -36, 75, 117, 115, 63, 48, -90, -92, -16, 60, 56, 82, -92, -79, -17, 115, 56, -113, 20, -108, -117, -61, -51, 2, 5, 104, -41, 48, 97, -68, -23, -40, 33, 76, 8, -9, -13, -71, -91, -21, 98, -54, 108, 36, -14, 97, -65, 116, 28, -22, -30, 95, 38, 122, 87, -38, -113, 87, 70, -51, 66, -78, 89, 1, -93, 2, -84, 66, -121, -75, 99, -105, -107, 85, 2, 95, 42, 45, -76, 25, 61, -29, -17, -16, 57, 70, 7, 120, 101, -82, -15, -123, 40, 124, -57, -97, 10, 33, -109, 76, 30, -94, -20, -90, 23, 36, 18, 87, -6, -18, -118, -97, 89, -49, 92, -42, 111, 35, -50, 50, 17, 2, -114, 44, -30, 70, -117, -5, 112, 111, 71, 42, 29, 106, 100, 10, 95, -57, 32, 66, -48, -109, -112, -47, 91, -83, -85, -104, -85, -92, -63, 70, -125, -92, -101, 20, -78, -72, -57, -19, 8, -27, -37, 104, 26, -57, 4, 93, -122, 3, -44, 99, 41, -12, -65, -69, 54, 49, 78, -41, 103, 45, -108, -61, 61, 42, -17, 126};
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
    msg.setTimeStamp(0.47955608105);
    msg.setSource(30659U);
    msg.setSourceEntity(67U);
    msg.setDestination(7412U);
    msg.setDestinationEntity(143U);
    msg.content_type.assign("QGYXPKBXVGCNQFYDPMTHEQLQBXKHSJIKDMEBPSDWOJIOXWJHKKPFCSJNYAUNOUDPSLFRWDRNNRGHEJETVEGINWTIJQJOIUBM");
    const char tmp_msg_0[] = {33, 43, 53, -15, 48, -21, -65, -60, 123, -99, -9, 32, -1, 59, 113, -93, -96, 97, -58, 40, 48, 68, -37, 8, -20, 124, 34, -15, 45, -83, -101, -104, 92, 97, 92, -17, 78, -9, 1, -21, -56, -83, 119, -54, 104, -108, 54, 49, -114, 73, -118, -44, -1, -39, -75, 110, 118, -65, 115, 7, -5, 3, -41, 121, 115, 24, -29, 60, 1, -51, -57, -126, 74, -47, 31, 95, 125, -78, 16, 37, -113, 67, 17, 84, 102, 82, -128, 13, 93, -84, 21};
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
    msg.setTimeStamp(0.0401740239316);
    msg.setSource(6168U);
    msg.setSourceEntity(68U);
    msg.setDestination(9537U);
    msg.setDestinationEntity(109U);
    msg.content_type.assign("ZJMQGNSIANOHSBNPOUYQSQDBFTKUAYNTYWEQRIMWJHWCKLENMFAXYZCTCCFHZOMOATXWHSDKNQJYNDUIPUZLJSRXBBZDAUIAPEJBDPLWYAVKOTZKEESIGEDRDTCHKFMYNHDJHUKLREPLJKEOCLQWLZYTGCGSLLXVFGGGHCDNVIQFJZVZATERWTMMIRBXXSODGXQUSVFHBVHKMISXVNTUJFQABRYVPVJG");
    const char tmp_msg_0[] = {-32, 90, -15, 79, -72, -57, 126, -62, 45, -124, -121, 106, 30, -52, 95, 122, 90, 121, -120, -104, 90, 106, 85, -111, 113, 28};
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
    msg.setTimeStamp(0.943655640682);
    msg.setSource(46100U);
    msg.setSourceEntity(111U);
    msg.setDestination(22085U);
    msg.setDestinationEntity(158U);

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
    msg.setTimeStamp(0.415835328153);
    msg.setSource(23729U);
    msg.setSourceEntity(153U);
    msg.setDestination(43817U);
    msg.setDestinationEntity(234U);

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
    msg.setTimeStamp(0.534903750524);
    msg.setSource(16138U);
    msg.setSourceEntity(223U);
    msg.setDestination(27329U);
    msg.setDestinationEntity(71U);

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
    msg.setTimeStamp(0.777605564054);
    msg.setSource(49923U);
    msg.setSourceEntity(94U);
    msg.setDestination(44231U);
    msg.setDestinationEntity(129U);
    msg.target = 51203U;
    msg.bearing = 0.143697283156;
    msg.elevation = 0.512827732959;

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
    msg.setTimeStamp(0.993178523926);
    msg.setSource(64973U);
    msg.setSourceEntity(91U);
    msg.setDestination(17267U);
    msg.setDestinationEntity(13U);
    msg.target = 63218U;
    msg.bearing = 0.405235128453;
    msg.elevation = 0.131857723937;

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
    msg.setTimeStamp(0.224677690108);
    msg.setSource(50348U);
    msg.setSourceEntity(179U);
    msg.setDestination(25643U);
    msg.setDestinationEntity(41U);
    msg.target = 20587U;
    msg.bearing = 0.750852680209;
    msg.elevation = 0.675772804922;

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
    msg.setTimeStamp(0.890767582377);
    msg.setSource(45109U);
    msg.setSourceEntity(28U);
    msg.setDestination(13527U);
    msg.setDestinationEntity(54U);
    msg.target = 54662U;
    msg.x = 0.486017453257;
    msg.y = 0.106699952004;
    msg.z = 0.995661578351;

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
    msg.setTimeStamp(0.0353266970408);
    msg.setSource(60037U);
    msg.setSourceEntity(137U);
    msg.setDestination(46598U);
    msg.setDestinationEntity(28U);
    msg.target = 2159U;
    msg.x = 0.766295211195;
    msg.y = 0.462445726379;
    msg.z = 0.74176440043;

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
    msg.setTimeStamp(0.133818186134);
    msg.setSource(32083U);
    msg.setSourceEntity(192U);
    msg.setDestination(21545U);
    msg.setDestinationEntity(189U);
    msg.target = 2045U;
    msg.x = 0.513788144344;
    msg.y = 0.522013598678;
    msg.z = 0.162329393982;

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
    msg.setTimeStamp(0.337008785281);
    msg.setSource(58235U);
    msg.setSourceEntity(130U);
    msg.setDestination(52198U);
    msg.setDestinationEntity(94U);
    msg.target = 48663U;
    msg.lat = 0.691346843718;
    msg.lon = 0.512879017057;
    msg.z_units = 0U;
    msg.z = 0.53580350447;

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
    msg.setTimeStamp(0.272659308594);
    msg.setSource(62968U);
    msg.setSourceEntity(145U);
    msg.setDestination(9554U);
    msg.setDestinationEntity(228U);
    msg.target = 22975U;
    msg.lat = 0.802674504074;
    msg.lon = 0.672622171742;
    msg.z_units = 208U;
    msg.z = 0.310913523555;

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
    msg.setTimeStamp(0.433575620076);
    msg.setSource(48113U);
    msg.setSourceEntity(50U);
    msg.setDestination(27857U);
    msg.setDestinationEntity(25U);
    msg.target = 27472U;
    msg.lat = 0.0533629242022;
    msg.lon = 0.0868116706293;
    msg.z_units = 132U;
    msg.z = 0.881419513882;

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
    msg.setTimeStamp(0.620817118878);
    msg.setSource(8498U);
    msg.setSourceEntity(0U);
    msg.setDestination(29598U);
    msg.setDestinationEntity(59U);
    msg.locale.assign("DRLDHDRFAMECVEAJNKABGKJOCBKYNWYPYPYAFXJRXSZLYRFPZKNTDPKGCNFJFSMQHTFTXDGJILARWOCTLSDHLEMBGINOSBJGZVQFQDLUDMRHPVWUUPUTAAEKCHBBZQTAMCMKUHWCXOISZUNTGIALRIR");
    const char tmp_msg_0[] = {-79, -119, 96, -20, 94, -125, 84, 54, 125, 16, -99, 82, -98, 57, 51, -11, -3, -99, 32, 58, -49, -26, -64, 98, -2, -62, 125, -7, 78, -81, 50, 86, 30, -57, -41, -14, 60, -2, 101, -114, -10, 25, 62, -80, 59, -103, -77, 92, 101, -104, 31, -79, -2, 29, -78, -84, 12, 69, -33, -58, 90, 33, -47, 91, 100, -94, -12, 56, 92, -87, 120, 43, -15, 105, 7, -84, -28, 3, 40, 90, -9, 52, 112, 104, -71, -94, -91, -121, -105, 86, 34, -71, -124, -18, -54, -28, 85, -72, 22, -93, -18, -62, 125, -104, -125, -28, -21, -42, -4, -106, -64, 69, 55, 50, -61, -47};
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
    msg.setTimeStamp(0.619551826691);
    msg.setSource(8993U);
    msg.setSourceEntity(80U);
    msg.setDestination(40098U);
    msg.setDestinationEntity(61U);
    msg.locale.assign("AQLODXXPICLVJMVKBTGPNWULUAAIHQGADHPXYNSZCHFNIKQTSELLISWSPDXBQCOKWVSCKHGKXHWDCLWMUOWGBRJKRQRJNOOBFJXIFI");
    const char tmp_msg_0[] = {-11, -63, 50, -38, 39, -76, 101, 52, 59, 102, -101, -122, 98, 66, 35, 43, 119, -78, 121, 114, -13, -24, -26, 3, -67, -37, -107, 20, -37, -72, 73, -61, -70, -55, -7, 61, -124, -53, -124, 34, -20, -26, -7, 34, -44, -41, -119, -97, 5, 9, 111, -49, -18, 58, 117, 0, 23, -31, -31, -14, 91, -10, -67, -45, 82, 63, -36, 100, -47, 35, -99, 102, 11, 13, 31, 54, -73, 74, -72, -114, -10, -14, 56, -107, 69, -33, 91, 56, 16, 39, 109, -58, -13, -5, -103, -57, -118, 121, -85, -7, 93, -91, -35, 12, -98, 97, 121, -102, 43, -7, 95, 63, -67, -28, -66, 65, 17, 123, 89, -73, -31, -84, 107, -108, -1, -84, -102, -54, -7, 26, -82, 42, -127, -109, 37, 102, -41, 75, -124, 12, 71, -22, 67, 29, 41, -48, -42, -42, 33, -43, 51, 33, 60, 49, 76, -23, -99, -55, -4, 79, -38, 18, 45, 91, 120, -60, 80, 65, -23, 30, 16, -114, -11, 80, 119, 22, 100, 33, 55, 124, -15, -102, 67, 53, -82, 70, -124, -92, 68, -117, -9, 84, 60, 24, -39, 51};
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
    msg.setTimeStamp(0.85177061619);
    msg.setSource(33273U);
    msg.setSourceEntity(168U);
    msg.setDestination(26478U);
    msg.setDestinationEntity(83U);
    msg.locale.assign("SYEELUOSJUBCFOLFRUKDGQTLLMWYQEXDOLYOJMWCHSMGFYPIMWDWMNNNQRTPPUQSRCVECYQKKHZFPXBBIQGPPZZIFNXZTKWAVHOKI");
    const char tmp_msg_0[] = {-42, -52, 88, 23, -12, -92, 41, 35, -108, -115, 102, -66, -36, -69, -55, -59, 73, 48, 53, -35, -39, -66, 9, -91, -99, 73, -126, -110, 17, -80, 39, 69, -48, -22, -105, 42, -17, -66, -39, -39, -96, -29, -74, 75, 83, -35, 64, 58, 33, 58, -108, 75, 57, 22, -12, -15, 17, 15, -59, -108, -47, 70, -77, -114, 70, -3, 108, -103, -116, -59, -112, -10, -27, 85, 72, -13, -52, 95, -116, -24, 97, -8, -17, 28, 43, -104, -102, -76, 50, -19, -52, -103, 7, -100, 90, -82, -85, -22, 16, -83, 58, 123, 30, -71, -100, -16, 101, 75, -126, 75, 29, 119, 30, -32, -40, -127, 33, -10, -45, 10, 35, -24, 82, -60, 56, -92, -103, 60, -25, -93, -21, -55, 74, 31, -16, 63, 42, 73, 21, -112, 7, 21, 123, 71, 78, 96, -48, -71, 3, 33, 59, 122, -113, -41, 91, -77, 116, -61, 66, -7, -91, 30, 81, 122, -43, 96, 20, -6, 91, 0, -15, -116, -62, -86, -16, -77, -127, 12, 103, -7, -108, -77, -40, -125, 76, 100, -66, -86, -47, -30, 65, -6, 45, -69, -123, 53, 33, -14, 50, -66, 56, 65, -125, -83, 42, 120, 7, -109, -60, -26, 55, -71, 16, 10, 85, -16, -51, 37, -41, -32, 67, 11, -77, -122, 18, -39, 58, 13, -33, -30, -35, -12, 16, -91, -19, -122, 101};
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
    msg.setTimeStamp(0.399203795309);
    msg.setSource(39964U);
    msg.setSourceEntity(10U);
    msg.setDestination(34446U);
    msg.setDestinationEntity(192U);

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
    msg.setTimeStamp(0.962331710117);
    msg.setSource(10208U);
    msg.setSourceEntity(142U);
    msg.setDestination(37015U);
    msg.setDestinationEntity(170U);

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
    msg.setTimeStamp(0.169610309375);
    msg.setSource(30527U);
    msg.setSourceEntity(252U);
    msg.setDestination(18591U);
    msg.setDestinationEntity(74U);

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
    msg.setTimeStamp(0.39875710478);
    msg.setSource(50769U);
    msg.setSourceEntity(86U);
    msg.setDestination(59243U);
    msg.setDestinationEntity(47U);
    msg.camid = 181U;
    msg.x = 41463U;
    msg.y = 58726U;

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
    msg.setTimeStamp(0.862408773431);
    msg.setSource(5002U);
    msg.setSourceEntity(143U);
    msg.setDestination(44629U);
    msg.setDestinationEntity(104U);
    msg.camid = 243U;
    msg.x = 30201U;
    msg.y = 23268U;

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
    msg.setTimeStamp(0.489106327551);
    msg.setSource(35776U);
    msg.setSourceEntity(186U);
    msg.setDestination(39851U);
    msg.setDestinationEntity(185U);
    msg.camid = 219U;
    msg.x = 15100U;
    msg.y = 57786U;

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
    msg.setTimeStamp(0.730397166096);
    msg.setSource(3986U);
    msg.setSourceEntity(236U);
    msg.setDestination(38813U);
    msg.setDestinationEntity(160U);
    msg.camid = 177U;
    msg.x = 49353U;
    msg.y = 38120U;

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
    msg.setTimeStamp(0.362163735128);
    msg.setSource(2813U);
    msg.setSourceEntity(227U);
    msg.setDestination(45475U);
    msg.setDestinationEntity(181U);
    msg.camid = 146U;
    msg.x = 64173U;
    msg.y = 15363U;

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
    msg.setTimeStamp(0.997419806731);
    msg.setSource(64874U);
    msg.setSourceEntity(83U);
    msg.setDestination(4850U);
    msg.setDestinationEntity(80U);
    msg.camid = 44U;
    msg.x = 47905U;
    msg.y = 13309U;

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
    msg.setTimeStamp(0.241843345321);
    msg.setSource(11161U);
    msg.setSourceEntity(147U);
    msg.setDestination(7909U);
    msg.setDestinationEntity(43U);
    msg.tracking = 87U;
    msg.lat = 0.995013063264;
    msg.lon = 0.141785818071;
    msg.x = 0.772905454084;
    msg.y = 0.598090131819;
    msg.z = 0.61527719926;

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
    msg.setTimeStamp(0.621052727305);
    msg.setSource(12028U);
    msg.setSourceEntity(247U);
    msg.setDestination(42349U);
    msg.setDestinationEntity(231U);
    msg.tracking = 19U;
    msg.lat = 0.799124105283;
    msg.lon = 0.217089374235;
    msg.x = 0.603367846802;
    msg.y = 0.25421965974;
    msg.z = 0.998091008619;

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
    msg.setTimeStamp(0.708806535463);
    msg.setSource(42074U);
    msg.setSourceEntity(124U);
    msg.setDestination(50713U);
    msg.setDestinationEntity(125U);
    msg.tracking = 231U;
    msg.lat = 0.382333630759;
    msg.lon = 0.0227093242529;
    msg.x = 0.0448936141531;
    msg.y = 0.702731470027;
    msg.z = 0.849439916093;

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
    msg.setTimeStamp(0.0996549856313);
    msg.setSource(4393U);
    msg.setSourceEntity(18U);
    msg.setDestination(23236U);
    msg.setDestinationEntity(12U);
    msg.target.assign("KUBWVYUCBKQCVTXMHKTWFKSVVPAKOCCFAKJGVNAOL");
    msg.lbearing = 0.770390951151;
    msg.lelevation = 0.0390497737764;
    msg.bearing = 0.976684372409;
    msg.elevation = 0.913483041922;
    msg.phi = 0.94667448437;
    msg.theta = 0.441959260175;
    msg.psi = 0.820267092626;
    msg.accuracy = 0.439208353574;

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
    msg.setTimeStamp(0.179542550659);
    msg.setSource(53719U);
    msg.setSourceEntity(175U);
    msg.setDestination(37607U);
    msg.setDestinationEntity(68U);
    msg.target.assign("BJGEYTAZIBCCSRGOFVBXBWYBEDSKYGOIFJXIMJPJOGSVFNNSPGUADHHUQMDRSKSFOAMBUKQEVWXCWYRIAKPJYMDSEZTTPMLQCRAOLGZSQIXBLNTLDWUXTBILFVE");
    msg.lbearing = 0.434495219608;
    msg.lelevation = 0.263417741419;
    msg.bearing = 0.449907085961;
    msg.elevation = 0.331049868046;
    msg.phi = 0.938663584576;
    msg.theta = 0.549230960414;
    msg.psi = 0.744797770424;
    msg.accuracy = 0.245307147932;

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
    msg.setTimeStamp(0.150995360828);
    msg.setSource(50675U);
    msg.setSourceEntity(36U);
    msg.setDestination(42081U);
    msg.setDestinationEntity(178U);
    msg.target.assign("NNIGGLFZJROMYUJDOULYTPKSRCLHODNGWIEBLVXBJASFFKCWFGNMAOQJEBNFAQQP");
    msg.lbearing = 0.915636336948;
    msg.lelevation = 0.561219757517;
    msg.bearing = 0.79139628251;
    msg.elevation = 0.196306878429;
    msg.phi = 0.066595498916;
    msg.theta = 0.581499424112;
    msg.psi = 0.375130084993;
    msg.accuracy = 0.367088617418;

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
    msg.setTimeStamp(0.235309349603);
    msg.setSource(48762U);
    msg.setSourceEntity(10U);
    msg.setDestination(42262U);
    msg.setDestinationEntity(74U);
    msg.target.assign("OTBBFHHHLHWSVBDLKKAXEQXYPXMRWXLNPJVIWVMDRHKOHAUZDMDWYSYWGEGGBZTUTGWIJUIXOLHWNSGFIMMUJCTANMDQCCAJOSJDZJSKNCSRXKSFQPIHWDZCEKUOEGACLJGLIXEAUVBUVVRZNTFRZLPNRBRNTRVWPZD");
    msg.x = 0.100990586805;
    msg.y = 0.983624392618;
    msg.z = 0.407009006445;
    msg.n = 0.596922581335;
    msg.e = 0.397679983707;
    msg.d = 0.355494759329;
    msg.phi = 0.517021050556;
    msg.theta = 0.574956746441;
    msg.psi = 0.390249934364;
    msg.accuracy = 0.200297565109;

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
    msg.setTimeStamp(0.54500476598);
    msg.setSource(38770U);
    msg.setSourceEntity(38U);
    msg.setDestination(45149U);
    msg.setDestinationEntity(173U);
    msg.target.assign("BDLOCMSQTYWYMGKNFTDNIXYEPGBUKPCXVUFVWHFONZVLCRFZCXLJKVKBUOXIFECJMTEJYNRUKTCPAUJDBGTAETMMXJNIUIRLSWOIFZQRQDPNGKWYUXLHFTIFQAKZBHJODLSSEHJAJVOKLSYWWZLSLSZHMPGYRRJDNNLSGABBDXQVYEQAAGA");
    msg.x = 0.694441202981;
    msg.y = 0.0840896089235;
    msg.z = 0.0617061134771;
    msg.n = 0.41868780574;
    msg.e = 0.154762899411;
    msg.d = 0.122443732837;
    msg.phi = 0.682168073294;
    msg.theta = 0.604481897196;
    msg.psi = 0.179728658485;
    msg.accuracy = 0.0444222938416;

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
    msg.setTimeStamp(0.07583333168);
    msg.setSource(17406U);
    msg.setSourceEntity(52U);
    msg.setDestination(42274U);
    msg.setDestinationEntity(205U);
    msg.target.assign("IBMXREIUMXGYIFCJZGKXHIIHPJXCCSHHLVOXLPQRJMKCAKXAUORSZFRRISGLETOHFAPNVRTKBAIVYNLSBKWHVSNGJNNZFZFMOGLMDRUNYTEXCWIUZASEYKCQPLBIYAUGEANFORVUQWDUHRYHJEYMEJBXFQZMNUBLTGEMRWWGWAELTDDQUDCSZQFQCDOVTKTOZWNYLOGEPNKADTPCSJBXVDFZPBSKY");
    msg.x = 0.405034058529;
    msg.y = 0.114536445429;
    msg.z = 0.252404389809;
    msg.n = 0.110453670881;
    msg.e = 0.635355282791;
    msg.d = 0.962939593554;
    msg.phi = 0.716660202248;
    msg.theta = 0.948135890423;
    msg.psi = 0.49384189576;
    msg.accuracy = 0.525614274273;

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
    msg.setTimeStamp(0.383583314724);
    msg.setSource(17322U);
    msg.setSourceEntity(47U);
    msg.setDestination(39175U);
    msg.setDestinationEntity(4U);
    msg.target.assign("CATOMQHQSHQDEQRLHKHVACFKLWKLSZMEAYHWULOJOYCJNULLBLQIDHJPSNIFKOYGWNSYWILXSZFHSJNVXRYLNCUZPDEOCEKYPOYDIDNAFGHEXAREOJDBBODAWCOTY");
    msg.lat = 0.574986093702;
    msg.lon = 0.629281888385;
    msg.z_units = 98U;
    msg.z = 0.843988792873;
    msg.accuracy = 0.504600875794;

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
    msg.setTimeStamp(0.0710602622678);
    msg.setSource(14036U);
    msg.setSourceEntity(28U);
    msg.setDestination(50281U);
    msg.setDestinationEntity(74U);
    msg.target.assign("ZIJOEHVUNBHVKORMDQG");
    msg.lat = 0.110567925137;
    msg.lon = 0.0317664071824;
    msg.z_units = 219U;
    msg.z = 0.69932403951;
    msg.accuracy = 0.01258504054;

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
    msg.setTimeStamp(0.982048855025);
    msg.setSource(38920U);
    msg.setSourceEntity(246U);
    msg.setDestination(63366U);
    msg.setDestinationEntity(30U);
    msg.target.assign("SKEGAYRHEHXLCSYDHQMFOOLKPLDRSZVFNCSIUHIRWYECWYOGENXEJFESFIUWDUMCMTQXXJQBNXMCATGUWHOZSVZMYAJBCULRPXDFNZATKJZIDOFQDRZNLPTEHAWXAIYCSYQLPOKQTOKJATNYBPDIBUVZHHEMZQQGOEOMKFLURDIWPLMGVXWTGKSRZQVKJNGPWITLFJAGIMHWTBOYLGUVSVFJGDBPKCBXRMJNN");
    msg.lat = 0.197156606571;
    msg.lon = 0.990040355664;
    msg.z_units = 232U;
    msg.z = 0.74733183799;
    msg.accuracy = 0.0838774900344;

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
    msg.setTimeStamp(0.703730836854);
    msg.setSource(60882U);
    msg.setSourceEntity(150U);
    msg.setDestination(61325U);
    msg.setDestinationEntity(229U);
    msg.name.assign("KKVKSMMAXGOEARUMTSOPYUFCCJKWWGMTPOXMQIDKNEOVETJNDZVDGVCWTZOANVNEOEPSRVHDOJYLRACDBXGBGLZKJWIZQFBIHLMFWJSRHBIAFYYTCFJAHNHXXVUQSCFJLKMIEQATBPQTQMSWFN");
    msg.lat = 0.34789536111;
    msg.lon = 0.694020226837;
    msg.z = 0.223488424773;
    msg.z_units = 1U;

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
    msg.setTimeStamp(0.486379077037);
    msg.setSource(1892U);
    msg.setSourceEntity(68U);
    msg.setDestination(56767U);
    msg.setDestinationEntity(30U);
    msg.name.assign("UTSWLZQRXXMMFRKCGXDNVJFMENJXUKYBMOYAZCNUIPGDGNEODPUKTSAEAHOLQZXLICVGYIIRMSRNGKRRNJQVETMVWNPDBOBKUYWTWRKFZVCCIUTJFMOUZ");
    msg.lat = 0.375635030699;
    msg.lon = 0.787930231498;
    msg.z = 0.350566054645;
    msg.z_units = 3U;

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
    msg.setTimeStamp(0.142345092155);
    msg.setSource(17459U);
    msg.setSourceEntity(146U);
    msg.setDestination(52709U);
    msg.setDestinationEntity(199U);
    msg.name.assign("VCUSUXGFLEGJTDTYWAHVDUEFPZIPVFXZNQGSFQEHRRCLPTXRAHNKQAFIPYYGTEGNKDSOOXOEEIXMABCWDVKBOQJJNQLMFFJAVDEWISWHUNRLGLDVZYWRUKLMYIYOEZAMPHAWJUBRSVCZKEKIXHZNJPOZWBJUYAUNPEOBLRXWLGAMZSFGHCRMBPHDPIBSDNQBGRTWMUBYTGVXJOCTVYUMPKQOCCSS");
    msg.lat = 0.0778103597519;
    msg.lon = 0.903752693341;
    msg.z = 0.0538233902556;
    msg.z_units = 77U;

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
    msg.setTimeStamp(0.803980699987);
    msg.setSource(64097U);
    msg.setSourceEntity(98U);
    msg.setDestination(22002U);
    msg.setDestinationEntity(51U);
    msg.op = 171U;

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
    msg.setTimeStamp(0.259197468615);
    msg.setSource(36409U);
    msg.setSourceEntity(182U);
    msg.setDestination(34478U);
    msg.setDestinationEntity(134U);
    msg.op = 25U;

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
    msg.setTimeStamp(0.83247874115);
    msg.setSource(3726U);
    msg.setSourceEntity(195U);
    msg.setDestination(15098U);
    msg.setDestinationEntity(104U);
    msg.op = 112U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("MULKWSHYWNBUAYHGKHNFTQYUNKDGQIQFHDORZPZTCBLTRGKMEZJQTJRZFMBUDAIHGOCVNLJBSIIM");
    tmp_msg_0.lat = 0.041367411502;
    tmp_msg_0.lon = 0.787765192918;
    tmp_msg_0.z = 0.45771961574;
    tmp_msg_0.z_units = 53U;
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
    msg.setTimeStamp(0.704949888865);
    msg.setSource(28930U);
    msg.setSourceEntity(19U);
    msg.setDestination(12076U);
    msg.setDestinationEntity(44U);
    msg.value = 0.176620495913;
    msg.type = 190U;

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
    msg.setTimeStamp(0.521882733842);
    msg.setSource(47291U);
    msg.setSourceEntity(253U);
    msg.setDestination(22365U);
    msg.setDestinationEntity(193U);
    msg.value = 0.297168825226;
    msg.type = 231U;

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
    msg.setTimeStamp(0.65445288362);
    msg.setSource(37177U);
    msg.setSourceEntity(37U);
    msg.setDestination(49463U);
    msg.setDestinationEntity(228U);
    msg.value = 0.981973741236;
    msg.type = 199U;

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
    msg.setTimeStamp(0.367341824707);
    msg.setSource(21665U);
    msg.setSourceEntity(215U);
    msg.setDestination(58470U);
    msg.setDestinationEntity(4U);
    msg.value = 0.430302754782;

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
    msg.setTimeStamp(0.549222643366);
    msg.setSource(61824U);
    msg.setSourceEntity(100U);
    msg.setDestination(65254U);
    msg.setDestinationEntity(95U);
    msg.value = 0.200350618752;

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
    msg.setTimeStamp(0.139241934188);
    msg.setSource(9570U);
    msg.setSourceEntity(107U);
    msg.setDestination(23874U);
    msg.setDestinationEntity(226U);
    msg.value = 0.2822842555;

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
    msg.setTimeStamp(0.256499959414);
    msg.setSource(11425U);
    msg.setSourceEntity(148U);
    msg.setDestination(25193U);
    msg.setDestinationEntity(206U);
    msg.timestamp_last_service = 0.832869584934;
    msg.time_next_service = 0.575368062632;
    msg.time_motor_next_service = 0.653409266609;
    msg.time_idle_ground = 0.680702682442;
    msg.time_idle_air = 0.845475464875;
    msg.time_idle_water = 0.586956520161;
    msg.time_idle_underwater = 0.573870228531;
    msg.time_idle_unknown = 0.129482879777;
    msg.time_motor_ground = 0.796466603126;
    msg.time_motor_air = 0.180281550829;
    msg.time_motor_water = 0.412400209205;
    msg.time_motor_underwater = 0.166984179867;
    msg.time_motor_unknown = 0.621462982291;
    msg.rpm_min = 24993;
    msg.rpm_max = 32751;
    msg.depth_max = 0.398563730445;

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
    msg.setTimeStamp(0.218011322521);
    msg.setSource(17552U);
    msg.setSourceEntity(94U);
    msg.setDestination(65370U);
    msg.setDestinationEntity(185U);
    msg.timestamp_last_service = 0.490747692897;
    msg.time_next_service = 0.642230498578;
    msg.time_motor_next_service = 0.648403157558;
    msg.time_idle_ground = 0.766045397396;
    msg.time_idle_air = 0.85795384548;
    msg.time_idle_water = 0.879616132059;
    msg.time_idle_underwater = 0.966583080808;
    msg.time_idle_unknown = 0.0169594626051;
    msg.time_motor_ground = 0.617633780863;
    msg.time_motor_air = 0.0849222417413;
    msg.time_motor_water = 0.47874289797;
    msg.time_motor_underwater = 0.15288181544;
    msg.time_motor_unknown = 0.622775761417;
    msg.rpm_min = -13306;
    msg.rpm_max = -28824;
    msg.depth_max = 0.22485720045;

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
    msg.setTimeStamp(0.935415350843);
    msg.setSource(47676U);
    msg.setSourceEntity(150U);
    msg.setDestination(41540U);
    msg.setDestinationEntity(243U);
    msg.timestamp_last_service = 0.445247036786;
    msg.time_next_service = 0.394017277176;
    msg.time_motor_next_service = 0.857437285443;
    msg.time_idle_ground = 0.29472691741;
    msg.time_idle_air = 0.603582487107;
    msg.time_idle_water = 0.731017531716;
    msg.time_idle_underwater = 0.003061521728;
    msg.time_idle_unknown = 0.043530111419;
    msg.time_motor_ground = 0.0377482596234;
    msg.time_motor_air = 0.255965952789;
    msg.time_motor_water = 0.794574367075;
    msg.time_motor_underwater = 0.75191616397;
    msg.time_motor_unknown = 0.201652701157;
    msg.rpm_min = -2495;
    msg.rpm_max = 10547;
    msg.depth_max = 0.342510571697;

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
    msg.setTimeStamp(0.634264017452);
    msg.setSource(7844U);
    msg.setSourceEntity(103U);
    msg.setDestination(20663U);
    msg.setDestinationEntity(5U);
    msg.severity = 229U;
    msg.text.assign("CRJRCNDVCFUYUQZKMXBJWUHZJAITVBXEMDFTHCLSAQFEFSTABSITCKXUYPCLHPWQFIUQHSOHGYVDDNCXMNUCILBMIOAQZGTHYBZYTQTTPVOHEPVYNPDNLNXGAULKSFGMXQXDSZDGMJCYULKWNQRISVFWOLYRSZEPDAMJMIYRNHOPJLWCRKGTPLWOKWISBAGVFRDXNORJGZAEJVAIZQBURHNIWEWDOVHZKQJOWUEBYRTBGKVB");

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
    msg.setTimeStamp(0.435004471658);
    msg.setSource(22306U);
    msg.setSourceEntity(101U);
    msg.setDestination(43595U);
    msg.setDestinationEntity(36U);
    msg.severity = 116U;
    msg.text.assign("MRSEYFBBFTWRPIHNBDDCAYJMCDENAGATHQVIWHEXWAGLXEEUQJFRTIGXSGSOZHNWFWTDBYH");

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
    msg.setTimeStamp(0.609748824151);
    msg.setSource(35546U);
    msg.setSourceEntity(73U);
    msg.setDestination(54764U);
    msg.setDestinationEntity(89U);
    msg.severity = 9U;
    msg.text.assign("DXFWRPORBALTBMNSVEWUVMCXKBZUBCPBMPQUDRNLVCUQFDFIJQNKRYLLKEUVQYZLWJYMCSNNMECHDXRAQSDHHAXECASOOFKDSYCHBEBTIINZWOESDEYVAYSLWVGJHZHGPVXZPMNGJGLBEAIZITVTOKROPWOMYAIQDDFMWORBVCEZJRDTRIFHZFGGWOIZUNLWHYPTYKPGSIXQYFJQ");

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
    msg.setTimeStamp(0.276530329149);
    msg.setSource(30953U);
    msg.setSourceEntity(84U);
    msg.setDestination(22883U);
    msg.setDestinationEntity(226U);
    msg.channel = 1;
    msg.value = 195921410;
    msg.gain = 181U;

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
    msg.setTimeStamp(0.159717114355);
    msg.setSource(4395U);
    msg.setSourceEntity(15U);
    msg.setDestination(10047U);
    msg.setDestinationEntity(148U);
    msg.channel = -29;
    msg.value = -1716568528;
    msg.gain = 183U;

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
    msg.setTimeStamp(0.834302428454);
    msg.setSource(39529U);
    msg.setSourceEntity(98U);
    msg.setDestination(11954U);
    msg.setDestinationEntity(153U);
    msg.channel = -66;
    msg.value = 1163581565;
    msg.gain = 16U;

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
    msg.setTimeStamp(0.699658235961);
    msg.setSource(44800U);
    msg.setSourceEntity(105U);
    msg.setDestination(34037U);
    msg.setDestinationEntity(129U);
    msg.ch01 = 0.0680954275986;
    msg.ch02 = 0.680958358538;
    msg.ch03 = 0.734061708908;
    msg.ch04 = 0.415780315389;
    msg.ch05 = 0.975817001489;
    msg.ch06 = 0.885525949641;
    msg.ch07 = 0.236998535378;
    msg.ch08 = 0.121762147397;
    msg.ch09 = 0.0272243343578;
    msg.ch10 = 0.0498257681579;
    msg.ch11 = 0.260662957577;
    msg.ch12 = 0.31212772189;
    msg.ch13 = 0.12432538851;
    msg.ch14 = 0.214388203053;
    msg.ch15 = 0.990941056581;
    msg.ch16 = 0.923107445576;

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
    msg.setTimeStamp(0.48764009195);
    msg.setSource(6258U);
    msg.setSourceEntity(226U);
    msg.setDestination(32088U);
    msg.setDestinationEntity(24U);
    msg.ch01 = 0.421923075581;
    msg.ch02 = 0.281571429974;
    msg.ch03 = 0.658154440067;
    msg.ch04 = 0.660646734128;
    msg.ch05 = 0.240502997587;
    msg.ch06 = 0.522099730327;
    msg.ch07 = 0.583736629977;
    msg.ch08 = 0.324307405465;
    msg.ch09 = 0.00983297612759;
    msg.ch10 = 0.0358126710379;
    msg.ch11 = 0.338995985604;
    msg.ch12 = 0.249208309719;
    msg.ch13 = 0.663583721589;
    msg.ch14 = 0.050284403477;
    msg.ch15 = 0.304706531758;
    msg.ch16 = 0.83764260752;

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
    msg.setTimeStamp(0.27857581751);
    msg.setSource(8095U);
    msg.setSourceEntity(84U);
    msg.setDestination(3540U);
    msg.setDestinationEntity(83U);
    msg.ch01 = 0.907456293338;
    msg.ch02 = 0.614222410456;
    msg.ch03 = 0.896130425348;
    msg.ch04 = 0.341819222926;
    msg.ch05 = 0.391864580794;
    msg.ch06 = 0.22739997521;
    msg.ch07 = 0.0749427740303;
    msg.ch08 = 0.573809707188;
    msg.ch09 = 0.961510500144;
    msg.ch10 = 0.207994999119;
    msg.ch11 = 0.707609148359;
    msg.ch12 = 0.74366724994;
    msg.ch13 = 0.57539103362;
    msg.ch14 = 0.303890826136;
    msg.ch15 = 0.645140951319;
    msg.ch16 = 0.174615197128;

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
    msg.setTimeStamp(0.0232751845953);
    msg.setSource(32338U);
    msg.setSourceEntity(247U);
    msg.setDestination(43477U);
    msg.setDestinationEntity(176U);
    msg.time = 0.263821884504;
    msg.ang = 0.353797181224;

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
    msg.setTimeStamp(0.0445880701585);
    msg.setSource(59920U);
    msg.setSourceEntity(102U);
    msg.setDestination(8958U);
    msg.setDestinationEntity(176U);
    msg.time = 0.112922722609;
    msg.ang = 0.152983804379;

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
    msg.setTimeStamp(0.213889581902);
    msg.setSource(36051U);
    msg.setSourceEntity(175U);
    msg.setDestination(39286U);
    msg.setDestinationEntity(220U);
    msg.time = 0.718638432392;
    msg.ang = 0.254127913509;

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
    msg.setTimeStamp(0.885950070113);
    msg.setSource(6478U);
    msg.setSourceEntity(187U);
    msg.setDestination(494U);
    msg.setDestinationEntity(219U);
    msg.value = 0.556537226088;

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
    msg.setTimeStamp(0.737824748432);
    msg.setSource(37881U);
    msg.setSourceEntity(205U);
    msg.setDestination(23058U);
    msg.setDestinationEntity(62U);
    msg.value = 0.122001199101;

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
    msg.setTimeStamp(0.430116899553);
    msg.setSource(18813U);
    msg.setSourceEntity(223U);
    msg.setDestination(31751U);
    msg.setDestinationEntity(191U);
    msg.value = 0.453022608448;

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
    msg.setTimeStamp(0.570663701338);
    msg.setSource(32523U);
    msg.setSourceEntity(231U);
    msg.setDestination(22794U);
    msg.setDestinationEntity(71U);
    msg.value = 0.260811367615;

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
    msg.setTimeStamp(0.0802275826172);
    msg.setSource(5494U);
    msg.setSourceEntity(25U);
    msg.setDestination(16329U);
    msg.setDestinationEntity(167U);
    msg.value = 0.807771040698;

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
    msg.setTimeStamp(0.578137562465);
    msg.setSource(18227U);
    msg.setSourceEntity(200U);
    msg.setDestination(56002U);
    msg.setDestinationEntity(6U);
    msg.value = 0.112787530351;

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
    msg.setTimeStamp(0.325188904118);
    msg.setSource(41206U);
    msg.setSourceEntity(201U);
    msg.setDestination(59973U);
    msg.setDestinationEntity(36U);
    msg.value = 0.0431150032527;

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
    msg.setTimeStamp(0.329086337806);
    msg.setSource(10187U);
    msg.setSourceEntity(33U);
    msg.setDestination(59310U);
    msg.setDestinationEntity(32U);
    msg.value = 0.702462745726;

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
    msg.setTimeStamp(0.769394053495);
    msg.setSource(3719U);
    msg.setSourceEntity(75U);
    msg.setDestination(15706U);
    msg.setDestinationEntity(97U);
    msg.value = 0.107021129789;

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
    msg.setTimeStamp(0.71278446405);
    msg.setSource(6992U);
    msg.setSourceEntity(4U);
    msg.setDestination(36149U);
    msg.setDestinationEntity(161U);
    msg.l2 = 92;
    msg.l3 = -28;
    msg.iridium = 60;
    msg.modem = -123;
    msg.pumps = -46;
    msg.vhf = -58;

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
    msg.setTimeStamp(0.0936540351408);
    msg.setSource(48869U);
    msg.setSourceEntity(56U);
    msg.setDestination(11188U);
    msg.setDestinationEntity(79U);
    msg.l2 = 92;
    msg.l3 = -62;
    msg.iridium = 125;
    msg.modem = -90;
    msg.pumps = -23;
    msg.vhf = -107;

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
    msg.setTimeStamp(0.714755648937);
    msg.setSource(14918U);
    msg.setSourceEntity(115U);
    msg.setDestination(61734U);
    msg.setDestinationEntity(24U);
    msg.l2 = 51;
    msg.l3 = -102;
    msg.iridium = -37;
    msg.modem = -110;
    msg.pumps = 113;
    msg.vhf = 96;

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
    msg.setTimeStamp(0.471143996842);
    msg.setSource(54961U);
    msg.setSourceEntity(41U);
    msg.setDestination(54985U);
    msg.setDestinationEntity(38U);
    msg.angle = 0.602263751162;
    msg.reference.assign("SCLGDAPIZLXZMMGBWCWIFQBVYPJDVWAVENZZORPXWOUXDHPYERHUZGJFTROWAUNQFVCBDJMAGJUSUCFIPPLBYTXJAXAXNUERNTGQBQXVMHRTVQSNNTUTSQVGQTLXDVFLHOEALKCOFBCHDAYNRJGYWBDMAFRYIFGBXRZJSPUWPYIEDLLJCKCQSLSKYOKVRKWZHNWCTTNKKOHAMJHHHSKOFYIMSEPPJZIQUBXFKD");
    msg.speed = 0.350996875735;

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
    msg.setTimeStamp(0.940604367045);
    msg.setSource(38758U);
    msg.setSourceEntity(15U);
    msg.setDestination(11523U);
    msg.setDestinationEntity(77U);
    msg.angle = 0.271350949772;
    msg.reference.assign("WCVKXAMJMSMFGDSTJOKJQPCZADCPIUEGAKPFAYPDNONUPKDCVMRQSVGYLVVEQULFUKPIBEVBTPFESHDKYCYYKWICGQHHDFBTMHOEJLGLXURLRHLSKSFWTBALWPZJWUTYFEXLXFILXGRWUMJRGYPJZHBEFHQKAZZJJBNQVTIQMFOBLUEDYBOTZAVNZZIIRNCABKQOEPHHVYSSQTUT");
    msg.speed = 0.386232902601;

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
    msg.setTimeStamp(0.414785530221);
    msg.setSource(16113U);
    msg.setSourceEntity(121U);
    msg.setDestination(11594U);
    msg.setDestinationEntity(47U);
    msg.angle = 0.934897851359;
    msg.reference.assign("XBRBFVMIHHQQ");
    msg.speed = 0.719153937251;

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
    msg.setTimeStamp(0.088531922741);
    msg.setSource(11261U);
    msg.setSourceEntity(38U);
    msg.setDestination(39998U);
    msg.setDestinationEntity(166U);
    msg.angle = 0.705413455542;
    msg.speed = 0.709280145103;

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
    msg.setTimeStamp(0.558884799751);
    msg.setSource(47392U);
    msg.setSourceEntity(248U);
    msg.setDestination(59709U);
    msg.setDestinationEntity(12U);
    msg.angle = 0.442917092206;
    msg.speed = 0.0437786170931;

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
    msg.setTimeStamp(0.917039771291);
    msg.setSource(30803U);
    msg.setSourceEntity(149U);
    msg.setDestination(37165U);
    msg.setDestinationEntity(138U);
    msg.angle = 0.935923926138;
    msg.speed = 0.0531424098833;

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
    msg.setTimeStamp(0.431386907791);
    msg.setSource(44272U);
    msg.setSourceEntity(202U);
    msg.setDestination(49642U);
    msg.setDestinationEntity(133U);
    msg.dir = 0.69039016078;
    msg.speed = 0.19165022621;

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
    msg.setTimeStamp(0.128652735784);
    msg.setSource(7485U);
    msg.setSourceEntity(100U);
    msg.setDestination(31202U);
    msg.setDestinationEntity(211U);
    msg.dir = 0.0857088271199;
    msg.speed = 0.848235692911;

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
    msg.setTimeStamp(0.00351166610459);
    msg.setSource(57296U);
    msg.setSourceEntity(137U);
    msg.setDestination(15459U);
    msg.setDestinationEntity(212U);
    msg.dir = 0.141639695027;
    msg.speed = 0.556125908039;

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
    msg.setTimeStamp(0.368373851182);
    msg.setSource(10678U);
    msg.setSourceEntity(105U);
    msg.setDestination(63171U);
    msg.setDestinationEntity(16U);
    msg.x = 0.622735241876;
    msg.y = 0.0419061589739;
    msg.z1 = 0.821554165954;
    msg.z2 = 0.302926724906;

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
    msg.setTimeStamp(0.77441648136);
    msg.setSource(53897U);
    msg.setSourceEntity(115U);
    msg.setDestination(53094U);
    msg.setDestinationEntity(209U);
    msg.x = 0.869548506225;
    msg.y = 0.383051644478;
    msg.z1 = 0.281082143579;
    msg.z2 = 0.0549362525039;

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
    msg.setTimeStamp(0.206194260331);
    msg.setSource(8181U);
    msg.setSourceEntity(186U);
    msg.setDestination(4218U);
    msg.setDestinationEntity(178U);
    msg.x = 0.244571718963;
    msg.y = 0.555623791202;
    msg.z1 = 0.0726827320432;
    msg.z2 = 0.403445503331;

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
    msg.setTimeStamp(0.351716324349);
    msg.setSource(49605U);
    msg.setSourceEntity(217U);
    msg.setDestination(26876U);
    msg.setDestinationEntity(12U);
    msg.mmsi = 0.478767385228;
    msg.lat = 0.960106960852;
    msg.lon = 0.773832033722;
    msg.x = 0.296181090272;
    msg.y = 0.416635003164;
    msg.speed = 0.837322090084;
    msg.course = 0.774055058916;
    msg.dist = 0.151414316821;
    msg.length = 0.302952658227;
    msg.width = 0.880319271836;
    msg.o_vect = 0.414114466618;

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
    msg.setTimeStamp(0.605816560289);
    msg.setSource(10549U);
    msg.setSourceEntity(149U);
    msg.setDestination(27553U);
    msg.setDestinationEntity(225U);
    msg.mmsi = 0.105677504827;
    msg.lat = 0.817276442026;
    msg.lon = 0.500073242548;
    msg.x = 0.185797492893;
    msg.y = 0.0315255663147;
    msg.speed = 0.558326837981;
    msg.course = 0.0944338295016;
    msg.dist = 0.822525932247;
    msg.length = 0.749060373277;
    msg.width = 0.572157366836;
    msg.o_vect = 0.0101739160277;

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
    msg.setTimeStamp(0.518844451227);
    msg.setSource(14692U);
    msg.setSourceEntity(127U);
    msg.setDestination(52120U);
    msg.setDestinationEntity(68U);
    msg.mmsi = 0.982214310416;
    msg.lat = 0.909801307052;
    msg.lon = 0.263340605873;
    msg.x = 0.487970922999;
    msg.y = 0.465704213171;
    msg.speed = 0.792007762019;
    msg.course = 0.965881343146;
    msg.dist = 0.885308365848;
    msg.length = 0.0867786138148;
    msg.width = 0.808772761651;
    msg.o_vect = 0.0798625184171;

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
    msg.setTimeStamp(0.888782705311);
    msg.setSource(26767U);
    msg.setSourceEntity(3U);
    msg.setDestination(10645U);
    msg.setDestinationEntity(88U);
    msg.locations.assign("MDNGBCTBNVIFQFNYKFTJYHVAGERVUDZIAFNIBIAPIVDYGRXCEUUASZYJKUNBKJLOQTTPBXGXVCGORNKAJLUACEWPPXTKOPSESCWHIIXRADZHJESZHVBOGMAOGSPNFEQQGWVGWZDYOHXHOKJTION");

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
    msg.setTimeStamp(0.956210736062);
    msg.setSource(58752U);
    msg.setSourceEntity(90U);
    msg.setDestination(4078U);
    msg.setDestinationEntity(42U);
    msg.locations.assign("ACNRXNYAZUSAFXRWZFRRHOMKRIMQIJZYMYMTPFDCGJLCCYOUBOFHPZCWQCSDZTIVIMDVUYENEJHXVHJMLAMKFZQLSVIPFPWPDFGKNQVDOUMDWXNKSHLRRGQAE");

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
    msg.setTimeStamp(0.421904777478);
    msg.setSource(391U);
    msg.setSourceEntity(58U);
    msg.setDestination(60985U);
    msg.setDestinationEntity(154U);
    msg.locations.assign("SDNNLKAGXWLFOCRKHQIRBAMAMYWOQUJHNFKVCWKSGDDMTONUGVARZIZHBFICJSGJGTVIIYIQYOBMJPWNYWWFSPGJOUUURXHQXGAPYTLUNBVPBULDFGBYSZOMXWJIDKGTZQETRRPNLAHHCBIVVYFJZQOWZFYEERNKFHGTQCX");

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
    msg.setTimeStamp(0.0628039694474);
    msg.setSource(35545U);
    msg.setSourceEntity(57U);
    msg.setDestination(31306U);
    msg.setDestinationEntity(74U);
    msg.value = 0.924136742462;

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
    msg.setTimeStamp(0.370314789214);
    msg.setSource(7343U);
    msg.setSourceEntity(175U);
    msg.setDestination(49264U);
    msg.setDestinationEntity(64U);
    msg.value = 0.32076710215;

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
    msg.setTimeStamp(0.445055587142);
    msg.setSource(18385U);
    msg.setSourceEntity(215U);
    msg.setDestination(14841U);
    msg.setDestinationEntity(195U);
    msg.value = 0.456929177465;

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
    msg.setTimeStamp(0.25680715549);
    msg.setSource(14426U);
    msg.setSourceEntity(62U);
    msg.setDestination(1486U);
    msg.setDestinationEntity(175U);
    msg.beam1 = 0.394800119334;
    msg.beam2 = 0.0656994011049;
    msg.beam3 = 0.650828539976;
    msg.beam4 = 0.697075077212;

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
    msg.setTimeStamp(0.862482387182);
    msg.setSource(26772U);
    msg.setSourceEntity(51U);
    msg.setDestination(28004U);
    msg.setDestinationEntity(165U);
    msg.beam1 = 0.906465525579;
    msg.beam2 = 0.000860900435253;
    msg.beam3 = 0.615040150024;
    msg.beam4 = 0.658562986372;

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
    msg.setTimeStamp(0.249796871848);
    msg.setSource(59357U);
    msg.setSourceEntity(149U);
    msg.setDestination(39411U);
    msg.setDestinationEntity(112U);
    msg.beam1 = 0.690536464686;
    msg.beam2 = 0.801228470463;
    msg.beam3 = 0.859299092178;
    msg.beam4 = 0.745884315864;

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
    msg.setTimeStamp(0.274331071934);
    msg.setSource(38351U);
    msg.setSourceEntity(17U);
    msg.setDestination(17344U);
    msg.setDestinationEntity(214U);
    msg.beam1 = 76U;
    msg.beam2 = 104U;
    msg.beam3 = 199U;
    msg.beam4 = 76U;

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
    msg.setTimeStamp(0.709644667922);
    msg.setSource(21278U);
    msg.setSourceEntity(179U);
    msg.setDestination(31107U);
    msg.setDestinationEntity(252U);
    msg.beam1 = 43U;
    msg.beam2 = 52U;
    msg.beam3 = 60U;
    msg.beam4 = 137U;

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
    msg.setTimeStamp(0.00764549808206);
    msg.setSource(11746U);
    msg.setSourceEntity(193U);
    msg.setDestination(63326U);
    msg.setDestinationEntity(212U);
    msg.beam1 = 238U;
    msg.beam2 = 187U;
    msg.beam3 = 50U;
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
    msg.setTimeStamp(0.0288182810535);
    msg.setSource(28543U);
    msg.setSourceEntity(138U);
    msg.setDestination(36006U);
    msg.setDestinationEntity(69U);
    msg.cellposition = 0.198273379898;

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
    msg.setTimeStamp(0.831239795591);
    msg.setSource(22911U);
    msg.setSourceEntity(165U);
    msg.setDestination(27392U);
    msg.setDestinationEntity(51U);
    msg.cellposition = 0.0391245758742;

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
    msg.setTimeStamp(0.808135924732);
    msg.setSource(3191U);
    msg.setSourceEntity(69U);
    msg.setDestination(9011U);
    msg.setDestinationEntity(132U);
    msg.cellposition = 0.33438923367;

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
    msg.setTimeStamp(0.0593455099799);
    msg.setSource(12862U);
    msg.setSourceEntity(144U);
    msg.setDestination(61996U);
    msg.setDestinationEntity(22U);
    msg.beams = 154U;
    msg.cells = 116U;
    msg.coord_sys = 189U;

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
    msg.setTimeStamp(0.670172995126);
    msg.setSource(14797U);
    msg.setSourceEntity(152U);
    msg.setDestination(45475U);
    msg.setDestinationEntity(39U);
    msg.beams = 233U;
    msg.cells = 108U;
    msg.coord_sys = 217U;
    IMC::CurrentProfileCell tmp_msg_0;
    tmp_msg_0.cellposition = 0.298210990504;
    IMC::ADCPBeam tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.vel = 0.701723089207;
    tmp_tmp_msg_0_0.amp = 0.443000965551;
    tmp_tmp_msg_0_0.cor = 187U;
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
    msg.setTimeStamp(0.116761352179);
    msg.setSource(40430U);
    msg.setSourceEntity(81U);
    msg.setDestination(27333U);
    msg.setDestinationEntity(184U);
    msg.beams = 6U;
    msg.cells = 211U;
    msg.coord_sys = 28U;
    IMC::CurrentProfileCell tmp_msg_0;
    tmp_msg_0.cellposition = 0.126940669091;
    IMC::ADCPBeam tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.vel = 0.507890738139;
    tmp_tmp_msg_0_0.amp = 0.242296897774;
    tmp_tmp_msg_0_0.cor = 19U;
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
    msg.setTimeStamp(0.635380383165);
    msg.setSource(47795U);
    msg.setSourceEntity(5U);
    msg.setDestination(56453U);
    msg.setDestinationEntity(0U);
    msg.vel = 0.485425777192;
    msg.amp = 0.144056734221;
    msg.cor = 98U;

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
    msg.setTimeStamp(0.0607513652003);
    msg.setSource(37434U);
    msg.setSourceEntity(234U);
    msg.setDestination(38641U);
    msg.setDestinationEntity(181U);
    msg.vel = 0.667767474769;
    msg.amp = 0.00527407840201;
    msg.cor = 189U;

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
    msg.setTimeStamp(0.465288533192);
    msg.setSource(40121U);
    msg.setSourceEntity(62U);
    msg.setDestination(31831U);
    msg.setDestinationEntity(237U);
    msg.vel = 0.385091639605;
    msg.amp = 0.351217471962;
    msg.cor = 229U;

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
    msg.setTimeStamp(0.0108259995907);
    msg.setSource(26063U);
    msg.setSourceEntity(43U);
    msg.setDestination(62629U);
    msg.setDestinationEntity(122U);
    msg.serial_no = 3184487627U;
    msg.unix_timestamp = 2238619572U;
    msg.millis = 41661U;
    msg.trans_protocol = 206U;
    msg.trans_id = 166302881U;
    msg.trans_data = 46037U;
    msg.snr = 22U;
    msg.trans_freq = 204U;
    msg.recv_mem_addr = 52236U;
    msg.lat = 0.680253554652;
    msg.lon = 0.867773199844;

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
    msg.setTimeStamp(0.527310370006);
    msg.setSource(30043U);
    msg.setSourceEntity(162U);
    msg.setDestination(30940U);
    msg.setDestinationEntity(160U);
    msg.serial_no = 3524772814U;
    msg.unix_timestamp = 3916238423U;
    msg.millis = 42052U;
    msg.trans_protocol = 27U;
    msg.trans_id = 1309447337U;
    msg.trans_data = 12898U;
    msg.snr = 11U;
    msg.trans_freq = 228U;
    msg.recv_mem_addr = 31038U;
    msg.lat = 0.88303870508;
    msg.lon = 0.187940826822;

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
    msg.setTimeStamp(0.511759646308);
    msg.setSource(25403U);
    msg.setSourceEntity(214U);
    msg.setDestination(51667U);
    msg.setDestinationEntity(218U);
    msg.serial_no = 2120406285U;
    msg.unix_timestamp = 2942867585U;
    msg.millis = 40508U;
    msg.trans_protocol = 222U;
    msg.trans_id = 1732831478U;
    msg.trans_data = 7160U;
    msg.snr = 43U;
    msg.trans_freq = 215U;
    msg.recv_mem_addr = 58617U;
    msg.lat = 0.359678789563;
    msg.lon = 0.0971631404882;

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
    msg.setTimeStamp(0.988560526996);
    msg.setSource(48623U);
    msg.setSourceEntity(103U);
    msg.setDestination(8556U);
    msg.setDestinationEntity(217U);
    msg.serial_no = 2754526198U;
    msg.unix_timestamp = 2624976004U;
    msg.temperature = 0.93154722466;
    msg.avg_noise_level = 192U;
    msg.peak_noise_level = 104U;
    msg.recv_listen_freq = 31U;
    msg.recv_mem_addr = 12739U;

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
    msg.setTimeStamp(0.00758771249712);
    msg.setSource(4535U);
    msg.setSourceEntity(4U);
    msg.setDestination(41840U);
    msg.setDestinationEntity(164U);
    msg.serial_no = 1559381034U;
    msg.unix_timestamp = 1172113670U;
    msg.temperature = 0.801725516084;
    msg.avg_noise_level = 187U;
    msg.peak_noise_level = 232U;
    msg.recv_listen_freq = 208U;
    msg.recv_mem_addr = 54368U;

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
    msg.setTimeStamp(0.677667141598);
    msg.setSource(30935U);
    msg.setSourceEntity(107U);
    msg.setDestination(40805U);
    msg.setDestinationEntity(23U);
    msg.serial_no = 2169826940U;
    msg.unix_timestamp = 3603045747U;
    msg.temperature = 0.219934085819;
    msg.avg_noise_level = 42U;
    msg.peak_noise_level = 216U;
    msg.recv_listen_freq = 83U;
    msg.recv_mem_addr = 61378U;

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
    msg.setTimeStamp(0.988005839119);
    msg.setSource(34826U);
    msg.setSourceEntity(121U);
    msg.setDestination(44802U);
    msg.setDestinationEntity(13U);
    msg.frequency = 3700291484U;
    msg.info.assign("QHUJOJNPPYQMISGQVDUIWACBBGKBUKJMZVSHWZXGMOGDRPSBSWLEZ");

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
    msg.setTimeStamp(0.263089024497);
    msg.setSource(12912U);
    msg.setSourceEntity(190U);
    msg.setDestination(54268U);
    msg.setDestinationEntity(63U);
    msg.frequency = 92293718U;
    msg.info.assign("EJFBMCDPFQYOMDCBRGSWGZGSINBQUDTOQBZUDXGAXZXPILNUFQGQBNTVSWTFYKKOTE");

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
    msg.setTimeStamp(0.0865004330616);
    msg.setSource(2673U);
    msg.setSourceEntity(178U);
    msg.setDestination(33477U);
    msg.setDestinationEntity(211U);
    msg.frequency = 173293977U;
    msg.info.assign("XFZGBBRQCSDHIGWPZBSCSXHNRTIOZIJWUROEYJEYMVBANVACFFTLQIWNZSYCHMSQYGWKIDDBLVXUMQABEUYAUZGIHEUUILADEJQEYZLMTUKMYCOGPXKFFXNWKHAHJBRTJJQEVUDRVPENGWRALTICKLGFZWADMKMTRRVWUNBPWZJTXCMMCSBOVGXOYXLPATTRSYOPMEEIBFXJGPKQFFTVDQPLOOKUIJNJXHHGCKLANDSQ");

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
    msg.setTimeStamp(0.0508489100225);
    msg.setSource(45806U);
    msg.setSourceEntity(13U);
    msg.setDestination(17742U);
    msg.setDestinationEntity(133U);
    msg.adcp = 16;
    msg.adcp_dur = 3218155032U;
    msg.adcp_fr = 1416029435U;
    msg.ctd = 31;
    msg.ctd_dur = 1900126655U;
    msg.ctd_fr = 3594244079U;
    msg.opt = 96;
    msg.opt_dur = 2584927294U;
    msg.opt_fr = 462515516U;
    msg.tbl = -74;
    msg.tbl_dur = 2346381531U;
    msg.tbl_fr = 1022308438U;
    msg.eco = 42;
    msg.eco_dur = 3504754933U;
    msg.eco_fr = 3570082183U;
    msg.par = -67;
    msg.par_dur = 1234072415U;
    msg.par_fr = 3986451600U;

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
    msg.setTimeStamp(0.797251441917);
    msg.setSource(64595U);
    msg.setSourceEntity(13U);
    msg.setDestination(6239U);
    msg.setDestinationEntity(235U);
    msg.adcp = -84;
    msg.adcp_dur = 242437570U;
    msg.adcp_fr = 2793747249U;
    msg.ctd = -38;
    msg.ctd_dur = 1508593288U;
    msg.ctd_fr = 1612759829U;
    msg.opt = -29;
    msg.opt_dur = 981419894U;
    msg.opt_fr = 3628395187U;
    msg.tbl = 126;
    msg.tbl_dur = 524307768U;
    msg.tbl_fr = 1277494027U;
    msg.eco = -60;
    msg.eco_dur = 1887737918U;
    msg.eco_fr = 521552912U;
    msg.par = 0;
    msg.par_dur = 4186744345U;
    msg.par_fr = 2455910653U;

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
    msg.setTimeStamp(0.886625185467);
    msg.setSource(62262U);
    msg.setSourceEntity(189U);
    msg.setDestination(5055U);
    msg.setDestinationEntity(236U);
    msg.adcp = 71;
    msg.adcp_dur = 2629538199U;
    msg.adcp_fr = 1817472642U;
    msg.ctd = -36;
    msg.ctd_dur = 1405476747U;
    msg.ctd_fr = 2952128617U;
    msg.opt = -61;
    msg.opt_dur = 2843810785U;
    msg.opt_fr = 2492383853U;
    msg.tbl = 58;
    msg.tbl_dur = 2580831845U;
    msg.tbl_fr = 2196365968U;
    msg.eco = 64;
    msg.eco_dur = 2729384653U;
    msg.eco_fr = 2606486954U;
    msg.par = -94;
    msg.par_dur = 2932004896U;
    msg.par_fr = 392979497U;

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
    msg.setTimeStamp(0.0340396008201);
    msg.setSource(6404U);
    msg.setSourceEntity(219U);
    msg.setDestination(36257U);
    msg.setDestinationEntity(134U);
    msg.adcp = -55;
    msg.adcp_dur = 3795740511U;
    msg.adcp_fr = 2124419653U;
    msg.ctd = 32;
    msg.ctd_dur = 3523892240U;
    msg.ctd_fr = 2026977307U;
    msg.opt = 60;
    msg.opt_dur = 2387142557U;
    msg.opt_fr = 3061203322U;
    msg.tbl = -81;
    msg.tbl_dur = 2182280159U;
    msg.tbl_fr = 925618177U;
    msg.eco = -85;
    msg.eco_dur = 3755115296U;
    msg.eco_fr = 4236473879U;
    msg.par = -125;
    msg.par_dur = 1344298603U;
    msg.par_fr = 1707745809U;

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
    msg.setTimeStamp(0.61035735261);
    msg.setSource(63115U);
    msg.setSourceEntity(91U);
    msg.setDestination(25388U);
    msg.setDestinationEntity(4U);
    msg.adcp = 2;
    msg.adcp_dur = 1951206531U;
    msg.adcp_fr = 783242953U;
    msg.ctd = -73;
    msg.ctd_dur = 2960222267U;
    msg.ctd_fr = 3392039858U;
    msg.opt = -105;
    msg.opt_dur = 3234672374U;
    msg.opt_fr = 3695508413U;
    msg.tbl = 23;
    msg.tbl_dur = 2380590013U;
    msg.tbl_fr = 3922736444U;
    msg.eco = 122;
    msg.eco_dur = 1890367963U;
    msg.eco_fr = 394664880U;
    msg.par = -115;
    msg.par_dur = 2730080231U;
    msg.par_fr = 1546867383U;

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
    msg.setTimeStamp(0.951527272946);
    msg.setSource(65222U);
    msg.setSourceEntity(2U);
    msg.setDestination(59935U);
    msg.setDestinationEntity(127U);
    msg.adcp = 65;
    msg.adcp_dur = 1190356175U;
    msg.adcp_fr = 964829355U;
    msg.ctd = -118;
    msg.ctd_dur = 1717276289U;
    msg.ctd_fr = 1926186051U;
    msg.opt = -54;
    msg.opt_dur = 629677815U;
    msg.opt_fr = 2598681517U;
    msg.tbl = 36;
    msg.tbl_dur = 859035087U;
    msg.tbl_fr = 2237580863U;
    msg.eco = -69;
    msg.eco_dur = 3965303980U;
    msg.eco_fr = 1694979213U;
    msg.par = 46;
    msg.par_dur = 4189727553U;
    msg.par_fr = 553119913U;

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
    msg.setTimeStamp(0.529961325573);
    msg.setSource(18034U);
    msg.setSourceEntity(85U);
    msg.setDestination(17919U);
    msg.setDestinationEntity(240U);
    msg.value = 0.694649553201;

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
    msg.setTimeStamp(0.798367579253);
    msg.setSource(55728U);
    msg.setSourceEntity(91U);
    msg.setDestination(33665U);
    msg.setDestinationEntity(36U);
    msg.value = 0.592835146982;

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
    msg.setTimeStamp(0.814259382199);
    msg.setSource(21859U);
    msg.setSourceEntity(161U);
    msg.setDestination(35714U);
    msg.setDestinationEntity(211U);
    msg.value = 0.451384982471;

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
    IMC::AisGpsFix msg;
    msg.setTimeStamp(0.24374892567);
    msg.setSource(55649U);
    msg.setSourceEntity(6U);
    msg.setDestination(43381U);
    msg.setDestinationEntity(37U);
    msg.validity = 9115U;
    msg.type = 53U;
    msg.utc_year = 42239U;
    msg.utc_month = 40U;
    msg.utc_day = 40U;
    msg.utc_time = 0.436005184428;
    msg.lat = 0.248694745232;
    msg.lon = 0.246678021062;
    msg.height = 0.92284146418;
    msg.satellites = 167U;
    msg.cog = 0.925769409689;
    msg.sog = 0.331736396714;
    msg.hdop = 0.976205441617;
    msg.vdop = 0.0485720133914;
    msg.hacc = 0.9317574167;
    msg.vacc = 0.0829535375349;

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
    msg.setTimeStamp(0.0276677539656);
    msg.setSource(17018U);
    msg.setSourceEntity(62U);
    msg.setDestination(22099U);
    msg.setDestinationEntity(142U);
    msg.validity = 35176U;
    msg.type = 231U;
    msg.utc_year = 36878U;
    msg.utc_month = 14U;
    msg.utc_day = 129U;
    msg.utc_time = 0.651905657756;
    msg.lat = 0.325924159362;
    msg.lon = 0.0399265706307;
    msg.height = 0.0813329139644;
    msg.satellites = 24U;
    msg.cog = 0.467503477284;
    msg.sog = 0.674996903012;
    msg.hdop = 0.775369217703;
    msg.vdop = 0.964269405445;
    msg.hacc = 0.228434355626;
    msg.vacc = 0.598190015251;

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
    msg.setTimeStamp(0.719668648628);
    msg.setSource(26541U);
    msg.setSourceEntity(44U);
    msg.setDestination(26152U);
    msg.setDestinationEntity(44U);
    msg.validity = 62266U;
    msg.type = 111U;
    msg.utc_year = 3019U;
    msg.utc_month = 180U;
    msg.utc_day = 235U;
    msg.utc_time = 0.161860777026;
    msg.lat = 0.847654346133;
    msg.lon = 0.0456678113872;
    msg.height = 0.812186176782;
    msg.satellites = 139U;
    msg.cog = 0.735034622861;
    msg.sog = 0.313155488004;
    msg.hdop = 0.165289731284;
    msg.vdop = 0.93014562099;
    msg.hacc = 0.496563684738;
    msg.vacc = 0.127145661454;

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

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
    msg.setTimeStamp(0.306820214216);
    msg.setSource(18142U);
    msg.setSourceEntity(11U);
    msg.setDestination(64181U);
    msg.setDestinationEntity(24U);
    msg.state = 244U;
    msg.flags = 103U;
    msg.description.assign("HINKZPAYRHFSOXQAGJKDTYWAKTNOBBHRWESMUSGPXXUTFJLPIADVDFTRYCJKXSZITOBCTCWDTSJAQRKLUJVELHXHBRQCQZPRJGBHICFSOFNGQNBDFWBBDOWASYQTYPRPZBEZDXVZGLCIAUZIJZLGNVFXGUSRSMPVMXUUTMKONHQNERDDMICJLQAUVKRYAHQSEXUYPINJHIZWCLWCOC");

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
    msg.setTimeStamp(0.23480824235);
    msg.setSource(5888U);
    msg.setSourceEntity(58U);
    msg.setDestination(62263U);
    msg.setDestinationEntity(5U);
    msg.state = 63U;
    msg.flags = 248U;
    msg.description.assign("EYAISEPKFFONYIFRBTKGZZFLBT");

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
    msg.setTimeStamp(0.104533653764);
    msg.setSource(62051U);
    msg.setSourceEntity(176U);
    msg.setDestination(38259U);
    msg.setDestinationEntity(100U);
    msg.state = 44U;
    msg.flags = 125U;
    msg.description.assign("TROWCLVLMG");

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
    msg.setTimeStamp(0.429357333862);
    msg.setSource(19619U);
    msg.setSourceEntity(33U);
    msg.setDestination(52018U);
    msg.setDestinationEntity(84U);

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
    msg.setTimeStamp(0.149831322655);
    msg.setSource(35925U);
    msg.setSourceEntity(106U);
    msg.setDestination(2074U);
    msg.setDestinationEntity(203U);

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
    msg.setTimeStamp(0.0978103511045);
    msg.setSource(19886U);
    msg.setSourceEntity(122U);
    msg.setDestination(50249U);
    msg.setDestinationEntity(177U);

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
    msg.setTimeStamp(0.484670535052);
    msg.setSource(57537U);
    msg.setSourceEntity(238U);
    msg.setDestination(10883U);
    msg.setDestinationEntity(53U);
    msg.id = 60U;
    msg.label.assign("QVEEOHYIWEDNQEOURIXX");
    msg.component.assign("CNNIYRMTKDBXFKTEDMCAYGIZCQMZWODYPVYZTYRPYQTPHHLIXNIJRBRFTUUYMVWOGXCBYHLHXZFKGALDESGWXBUSRXGAROLPCGWZTHFHJFRLVNEBVYZJEOIVCQSWTSASKIGONKFSQPCUPVUSSJLGQMBOULONIMXKKTEHHAQCKIFWWPJM");
    msg.act_time = 3293U;
    msg.deact_time = 52761U;

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
    msg.setTimeStamp(0.316089720369);
    msg.setSource(59716U);
    msg.setSourceEntity(79U);
    msg.setDestination(42408U);
    msg.setDestinationEntity(108U);
    msg.id = 40U;
    msg.label.assign("RPSUITCFHEPFBNNJLKRKYZQOEXMTEMDVHYQAKVHUCQYNKVLOSGFDPBMCZEMHEQEJJJWDZUTAANQJWAZKSWFBHFPYJSXADEXTVNMDQIIXUHVRTWUKZVYSXOBPAZQRBOLISYFNZKOTOQTEALAJMKBIRGJWHWHBVHGCZJPGOGLILIDRKMRHVUCSSYRGSNQFLMPATNEUWIXIKXBLCZAWCPCVDWU");
    msg.component.assign("GZXHPDFFSLGSJPLKDEDJUWIXWSUQLGYBEJNBNGHCHCFPMJRRQRVUKYVKSRXTZYOMZOMIKPYWKIAFDVXEEIZAJJLUOOHPFNVIPCCDRZLWWWCQTFWVAXWIAQBCHQOEDHZPGXOCTHYLLKTMKXWPCSFKZRSACVUQBDLNXGQTBHMFYINQBMEYDYAHBQZSRKDOIVNEP");
    msg.act_time = 44857U;
    msg.deact_time = 36107U;

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
    msg.setTimeStamp(0.641524071909);
    msg.setSource(31853U);
    msg.setSourceEntity(119U);
    msg.setDestination(8932U);
    msg.setDestinationEntity(251U);
    msg.id = 29U;
    msg.label.assign("ATYMELAFIAOOTJFWBELYWUWSMXSLCHWXYQEXQVQUNKRWQYMVPFRZAGHTGVEHGGXBCFWFHROIDPNXJMIQTHRBVUJDJTQJRSMCLNNLKFMIMKGXUWVCTOKZPQFZOUPEJLJCIDCKG");
    msg.component.assign("SELGHPXZGCILZYVVWXUHFNGMXEOPJZGEOZEXMJCRGCSSRCULIDGMRAFNXGHBWHHETOUFDIEHNOTALKTKXQWSMJMYQSBZLYANSGTPTOHTMYNJCPDEWUURZTBPCGHECOAWEJQZYDSIOOCIFUOFJIAQRABMJFKRQPKUCWUDYL");
    msg.act_time = 36347U;
    msg.deact_time = 30924U;

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
    msg.setTimeStamp(0.836335561163);
    msg.setSource(62696U);
    msg.setSourceEntity(236U);
    msg.setDestination(48709U);
    msg.setDestinationEntity(124U);
    msg.id = 110U;

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
    msg.setTimeStamp(0.463513318254);
    msg.setSource(7857U);
    msg.setSourceEntity(111U);
    msg.setDestination(32442U);
    msg.setDestinationEntity(250U);
    msg.id = 185U;

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
    msg.setTimeStamp(0.416903980632);
    msg.setSource(39773U);
    msg.setSourceEntity(147U);
    msg.setDestination(46345U);
    msg.setDestinationEntity(3U);
    msg.id = 102U;

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
    msg.setTimeStamp(0.873657104645);
    msg.setSource(37541U);
    msg.setSourceEntity(254U);
    msg.setDestination(60212U);
    msg.setDestinationEntity(62U);
    msg.op = 191U;
    msg.list.assign("ZMDQWKERNQZISLUOHVSWHECDRCWVACBXGFQIPSPIKKYHQWIYYPOVTGJRYMLHQLNROBMEACQSPBRARFNCSTOSGNUIATSUJAXSFNGFEZDKKWPVKRGBOGLXYVXCIXJDMUNLCKVYQDBBPPLADRXMEKUMSTHOJUWIFXPXYGAZVGWFNOLZJTZAZTEEDJTCVXWFO");

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
    msg.setTimeStamp(0.354501364234);
    msg.setSource(65519U);
    msg.setSourceEntity(36U);
    msg.setDestination(48788U);
    msg.setDestinationEntity(174U);
    msg.op = 75U;
    msg.list.assign("CUYZKDJUQYNBAYLUQWGMKTUCJRIIXREPREAKZSTUGRKPUFJHKNGQGBSKHQPTRZVWONLDRNKFFTQAYCTSLHYYPBLVVLDGWTJAEHOWQVXDMAIVJISFNSLZOHTEMDFTISQHJZJOOAEBOCRRDNYWIZLUWBFWVOGBLWOCGODUZUMIUMJBCTHHCMQZYFX");

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
    msg.setTimeStamp(0.717727058936);
    msg.setSource(54543U);
    msg.setSourceEntity(111U);
    msg.setDestination(206U);
    msg.setDestinationEntity(6U);
    msg.op = 17U;
    msg.list.assign("OQMHKRCKNGGMVDGVCJJZUXBQFGHJPEXITPEOCHLKJRBIZSHUWWMJFFMHTJCCGZRJXOIMWROEXUWYNTUTWKOZSLHIRUSWLZOHENVDQCTDVEAOQEKNUAJNYDLBRFNBHXUPWIDYNTGSIMLCGETKSAKLDPQKYQQICRFEGIPONXYAJLYDKZQAFTSMNXUYPZXMLOQJVFDINYPRAEZIMXFPBYALU");

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
    msg.setTimeStamp(0.506393111527);
    msg.setSource(6514U);
    msg.setSourceEntity(166U);
    msg.setDestination(56079U);
    msg.setDestinationEntity(248U);
    msg.value = 213U;

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
    msg.setTimeStamp(0.989058763482);
    msg.setSource(37091U);
    msg.setSourceEntity(207U);
    msg.setDestination(38744U);
    msg.setDestinationEntity(23U);
    msg.value = 225U;

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
    msg.setTimeStamp(0.425296176477);
    msg.setSource(47576U);
    msg.setSourceEntity(197U);
    msg.setDestination(41227U);
    msg.setDestinationEntity(219U);
    msg.value = 50U;

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
    msg.setTimeStamp(0.415560261012);
    msg.setSource(57918U);
    msg.setSourceEntity(136U);
    msg.setDestination(24560U);
    msg.setDestinationEntity(92U);
    msg.consumer.assign("YOQQNVCFYVPDUFOXTJAJTWGQGJTQPCPHWBEZF");
    msg.message_id = 32061U;

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
    msg.setTimeStamp(0.25077752332);
    msg.setSource(41815U);
    msg.setSourceEntity(63U);
    msg.setDestination(3825U);
    msg.setDestinationEntity(83U);
    msg.consumer.assign("LQMZIBTEKGCZKYDAMAPYXQPVLDMWLEXSGLYTEOJVRFVGCFROHGZYTRHIJXUNEASVPHRDBOXWOTJVZJHOLMWFGVVGNTVIPFAJMWWJS");
    msg.message_id = 51950U;

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
    msg.setTimeStamp(0.343710372377);
    msg.setSource(27266U);
    msg.setSourceEntity(194U);
    msg.setDestination(48981U);
    msg.setDestinationEntity(71U);
    msg.consumer.assign("LUYRBXIKBVCTAYVECAMPTVDDVQGBXHHBGOWJXMKMOIJZNUWRPRLNXYXJUDCRWQZHRCMJEKGFWIFPXNSAZTFFMQHNMGDYQGYKPKNDGKDLKTSFJQREPOKILYOHUPKIWUOTEFGEABLMYQTNUNBLWZGTEJZZXHLNTYWZBHCQZIXNOJKBCFSISQCADCGSVJSLUWRPHVYSOIOH");
    msg.message_id = 30481U;

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
    msg.setTimeStamp(0.265169928898);
    msg.setSource(7913U);
    msg.setSourceEntity(43U);
    msg.setDestination(28743U);
    msg.setDestinationEntity(201U);
    msg.type = 28U;

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
    msg.setTimeStamp(0.820372576175);
    msg.setSource(62787U);
    msg.setSourceEntity(96U);
    msg.setDestination(10382U);
    msg.setDestinationEntity(180U);
    msg.type = 31U;

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
    msg.setTimeStamp(0.691392832094);
    msg.setSource(16304U);
    msg.setSourceEntity(216U);
    msg.setDestination(13141U);
    msg.setDestinationEntity(243U);
    msg.type = 100U;

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
    msg.setTimeStamp(0.89269929827);
    msg.setSource(14799U);
    msg.setSourceEntity(209U);
    msg.setDestination(48217U);
    msg.setDestinationEntity(248U);
    msg.op = 131U;

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
    msg.setTimeStamp(0.718908991688);
    msg.setSource(44148U);
    msg.setSourceEntity(42U);
    msg.setDestination(14870U);
    msg.setDestinationEntity(123U);
    msg.op = 75U;

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
    msg.setTimeStamp(0.848638884652);
    msg.setSource(14111U);
    msg.setSourceEntity(144U);
    msg.setDestination(19591U);
    msg.setDestinationEntity(179U);
    msg.op = 21U;

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
    msg.setTimeStamp(0.827507667524);
    msg.setSource(13693U);
    msg.setSourceEntity(238U);
    msg.setDestination(3656U);
    msg.setDestinationEntity(149U);
    msg.total_steps = 22U;
    msg.step_number = 104U;
    msg.step.assign("WJNZNHOADWMPSAORVUOXSFUCVDAPCAIIZKXNWEBYSPRGKLYUGVFKFQALCQFIBLJQIPUDRXYBFMGGDPMNKSQQFRBSWBIHHGNGTSYYBRCKEIIZQOMAPK");
    msg.flags = 42U;

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
    msg.setTimeStamp(0.837642708264);
    msg.setSource(2951U);
    msg.setSourceEntity(49U);
    msg.setDestination(13142U);
    msg.setDestinationEntity(170U);
    msg.total_steps = 139U;
    msg.step_number = 249U;
    msg.step.assign("VEGBDTWUPTNUCOIKYNAZGGOITZQZKJBOKSAHSIBDBEMLGCVJYAHPIHOMRNMDIBLQRXXSXPODNFAWOWMMGBGMSRCXJGKBWQGOMSNULOXLDDQVUYHOCJCKFRNNAHHYVZEQKFLPNPWCARUJUCSIVQHTFSSAXGTMEPFHYTAQWRTWFBYEEK");
    msg.flags = 89U;

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
    msg.setTimeStamp(0.409520830619);
    msg.setSource(53913U);
    msg.setSourceEntity(50U);
    msg.setDestination(6213U);
    msg.setDestinationEntity(92U);
    msg.total_steps = 16U;
    msg.step_number = 48U;
    msg.step.assign("WQRNAKEHPBPGMGJFLBSMPRSPAYSJWUYSPDEQJEDBAKFEIL");
    msg.flags = 84U;

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
    msg.setTimeStamp(0.0796940086698);
    msg.setSource(156U);
    msg.setSourceEntity(97U);
    msg.setDestination(63981U);
    msg.setDestinationEntity(192U);
    msg.state = 221U;
    msg.error.assign("PPDYLSPPRGKNXNIOCSCMQPRQGWDVNBSMLNTQZZSYKBGNWXBHBOAZWDIOZPKQOBIWFOAWAEJVRAKFKGTUKYLCPTQKLEEQFCVCGHGWJEYZZCJYBFNKCMXTFUMTTJYJDHLXVXTGUFEKARWHDFIPHDUQJYDIRMUAAUCYPQZSYJMEXCRONSOXGXTSIMBFUUHVJKOWDHOIAFCLBXDVAUUTEHQLMVOZGVNZZRLHRWHVVEIBRLLMMISPYJAWESBF");

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
    msg.setTimeStamp(0.641854510102);
    msg.setSource(39157U);
    msg.setSourceEntity(47U);
    msg.setDestination(1142U);
    msg.setDestinationEntity(47U);
    msg.state = 83U;
    msg.error.assign("ZTRWREMUWSITPKWSKANWUCKBCSKXQQHMEBFUPZLXGJPBDJFCDSDZAJLOFNAXVNQCRPMSFCYUGFHJYRMRECBVNFFQZUZHYXPEOJELFTIZNRXOYGNAHJEKVNKLDPLYJIQXBXTIDSAGGHRPAJZDHMVJRZGGBQIMLYLHWWCLPRDKRBVIVIWXQETADOCLNXHVVBOSFCO");

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
    msg.setTimeStamp(0.9218544919);
    msg.setSource(65239U);
    msg.setSourceEntity(208U);
    msg.setDestination(2904U);
    msg.setDestinationEntity(173U);
    msg.state = 215U;
    msg.error.assign("SJRXGDQDAOCRUVRRDNWHZFUIIHSPNCXEVAJHIXUNAKTMBBUZQXERPOQZPBOJOICKFHQKIRBZXSDAYVCFHBLQYWWJVCWGYBLQLMSAOOJUBTPNDNTFXWPMCYODKSYPHCFGTAVWPOTMZASE");

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
    msg.setTimeStamp(0.653360365087);
    msg.setSource(20323U);
    msg.setSourceEntity(226U);
    msg.setDestination(32788U);
    msg.setDestinationEntity(207U);

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
    msg.setTimeStamp(0.770930289279);
    msg.setSource(28092U);
    msg.setSourceEntity(248U);
    msg.setDestination(17319U);
    msg.setDestinationEntity(150U);

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
    msg.setTimeStamp(0.469038537942);
    msg.setSource(59426U);
    msg.setSourceEntity(77U);
    msg.setDestination(1832U);
    msg.setDestinationEntity(245U);

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
    msg.setTimeStamp(0.405174110283);
    msg.setSource(26942U);
    msg.setSourceEntity(200U);
    msg.setDestination(41354U);
    msg.setDestinationEntity(244U);
    msg.op = 218U;
    msg.speed_min = 0.266866339807;
    msg.speed_max = 0.317329569623;
    msg.long_accel = 0.985432737716;
    msg.alt_max_msl = 0.409331658465;
    msg.dive_fraction_max = 0.444068559782;
    msg.climb_fraction_max = 0.894573888061;
    msg.bank_max = 0.118979415968;
    msg.p_max = 0.597762322853;
    msg.pitch_min = 0.0639812975069;
    msg.pitch_max = 0.894953811371;
    msg.q_max = 0.553651802613;
    msg.g_min = 0.800129412907;
    msg.g_max = 0.185112394474;
    msg.g_lat_max = 0.816990042758;
    msg.rpm_min = 0.110152150486;
    msg.rpm_max = 0.407685499571;
    msg.rpm_rate_max = 0.893039570628;

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
    msg.setTimeStamp(0.998609165489);
    msg.setSource(44507U);
    msg.setSourceEntity(145U);
    msg.setDestination(62731U);
    msg.setDestinationEntity(86U);
    msg.op = 38U;
    msg.speed_min = 0.460589999437;
    msg.speed_max = 0.867340802282;
    msg.long_accel = 0.440529277675;
    msg.alt_max_msl = 0.0092154676682;
    msg.dive_fraction_max = 0.41298819006;
    msg.climb_fraction_max = 0.358164547362;
    msg.bank_max = 0.336419382153;
    msg.p_max = 0.596672437371;
    msg.pitch_min = 0.270642683777;
    msg.pitch_max = 0.613293159647;
    msg.q_max = 0.754809421542;
    msg.g_min = 0.533633883824;
    msg.g_max = 0.0609762610273;
    msg.g_lat_max = 0.52128455742;
    msg.rpm_min = 0.0709650137346;
    msg.rpm_max = 0.24698050303;
    msg.rpm_rate_max = 0.267106474635;

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
    msg.setTimeStamp(0.273461702463);
    msg.setSource(59824U);
    msg.setSourceEntity(177U);
    msg.setDestination(48252U);
    msg.setDestinationEntity(206U);
    msg.op = 126U;
    msg.speed_min = 0.339932122095;
    msg.speed_max = 0.715215076619;
    msg.long_accel = 0.154103184876;
    msg.alt_max_msl = 0.637278877038;
    msg.dive_fraction_max = 0.976777543401;
    msg.climb_fraction_max = 0.872253761061;
    msg.bank_max = 0.313816269232;
    msg.p_max = 0.0587423115353;
    msg.pitch_min = 0.195547659499;
    msg.pitch_max = 0.310288835823;
    msg.q_max = 0.26292014396;
    msg.g_min = 0.719103862227;
    msg.g_max = 0.973056200725;
    msg.g_lat_max = 0.18342331331;
    msg.rpm_min = 0.52174008353;
    msg.rpm_max = 0.201799294383;
    msg.rpm_rate_max = 0.642237956526;

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
    msg.setTimeStamp(0.95671310253);
    msg.setSource(54620U);
    msg.setSourceEntity(254U);
    msg.setDestination(54482U);
    msg.setDestinationEntity(88U);
    IMC::AutopilotMode tmp_msg_0;
    tmp_msg_0.autonomy = 168U;
    tmp_msg_0.mode.assign("BTXHNWQAIGREHELZZUZUXMYVKTQUDUZGKHWAPJXOQHUATXKJVGXVVURPSMLYJDTXOFFSHMNJNGDAMIDMFNFWVW");
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
    msg.setTimeStamp(0.339800791167);
    msg.setSource(55165U);
    msg.setSourceEntity(117U);
    msg.setDestination(2054U);
    msg.setDestinationEntity(208U);
    IMC::FormationParameters tmp_msg_0;
    tmp_msg_0.formation_name.assign("BJVQFTKTNPSHTUYILBRRHXMYMTYGHLGKYEAWOPZNEYBRIDKZQYTIMECGL");
    tmp_msg_0.reference_frame = 63U;
    IMC::VehicleFormationParticipant tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.vid = 3387U;
    tmp_tmp_msg_0_0.off_x = 0.256983790138;
    tmp_tmp_msg_0_0.off_y = 0.695368198218;
    tmp_tmp_msg_0_0.off_z = 0.0389136391582;
    tmp_msg_0.participants.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.custom.assign("BWQZMAPZIEMJRVUWNCZAPOSYOICMTWTVNBHMUDFOQKYQHWHAFUDTPQDENWDEYNTPQVETGGRGLBXHIFOSASDTRMNROMFVBGEQADFBTEIXKESAQRUZLWBFFOZIQCRSOUMALLSQYCOCVLIPOIDZHBLVAXYSJFJPXZGSRVADLZWJNVGRLZXNDCXMTUXCJJHJIKXMGKLCYUNXDLNPE");
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
    msg.setTimeStamp(0.706892338633);
    msg.setSource(12343U);
    msg.setSourceEntity(132U);
    msg.setDestination(8701U);
    msg.setDestinationEntity(47U);
    IMC::EntityActivationState tmp_msg_0;
    tmp_msg_0.state = 72U;
    tmp_msg_0.error.assign("QQQCHHKZXABKHVFILSPMRDLSSMBXQLRBTAZGKYJTTMBJIFNYDDFUGOTGOXXIZIMGVMGNJKVINSJTGTQGYJOSBFAWEWHBOBLFFQAPCWUPUMVQDWLDNDPLKJCNRAEFJUKRBNNZDGDOYXHELSZNZOELHAUVCLMXIPPQCKRAPSYHQW");
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
    msg.setTimeStamp(0.908071541503);
    msg.setSource(19470U);
    msg.setSourceEntity(122U);
    msg.setDestination(48327U);
    msg.setDestinationEntity(225U);
    msg.lat = 0.0732660009502;
    msg.lon = 0.650502855876;
    msg.height = 0.536854692787;
    msg.x = 0.216148271918;
    msg.y = 0.177704974951;
    msg.z = 0.312470255083;
    msg.phi = 0.724582777218;
    msg.theta = 0.226610343462;
    msg.psi = 0.447333771353;
    msg.u = 0.83387351296;
    msg.v = 0.41612259377;
    msg.w = 0.304321543583;
    msg.p = 0.223185676148;
    msg.q = 0.110783744473;
    msg.r = 0.63959352537;
    msg.svx = 0.335105927873;
    msg.svy = 0.616766789685;
    msg.svz = 0.219051724295;

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
    msg.setTimeStamp(0.0199850460766);
    msg.setSource(6130U);
    msg.setSourceEntity(59U);
    msg.setDestination(60703U);
    msg.setDestinationEntity(124U);
    msg.lat = 0.334499020022;
    msg.lon = 0.514250694813;
    msg.height = 0.847016439711;
    msg.x = 0.0177572987224;
    msg.y = 0.307734414746;
    msg.z = 0.349491009009;
    msg.phi = 0.482528627561;
    msg.theta = 0.445638407716;
    msg.psi = 0.194746178225;
    msg.u = 0.174558687416;
    msg.v = 0.458370925386;
    msg.w = 0.489462743922;
    msg.p = 0.293265496938;
    msg.q = 0.412000190205;
    msg.r = 0.399486208306;
    msg.svx = 0.229408924483;
    msg.svy = 0.315613240189;
    msg.svz = 0.423338121478;

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
    msg.setTimeStamp(0.426870356565);
    msg.setSource(47770U);
    msg.setSourceEntity(169U);
    msg.setDestination(49547U);
    msg.setDestinationEntity(52U);
    msg.lat = 0.26814188988;
    msg.lon = 0.817972317521;
    msg.height = 0.917993693195;
    msg.x = 0.739674434568;
    msg.y = 0.365393807544;
    msg.z = 0.988514294586;
    msg.phi = 0.177434821372;
    msg.theta = 0.802022311925;
    msg.psi = 0.275220515502;
    msg.u = 0.328068688254;
    msg.v = 0.761847890224;
    msg.w = 0.317123892506;
    msg.p = 0.901983683908;
    msg.q = 0.708363232157;
    msg.r = 0.147788091867;
    msg.svx = 0.40506192637;
    msg.svy = 0.740981669271;
    msg.svz = 0.0721540370425;

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
    msg.setTimeStamp(0.260816200219);
    msg.setSource(32462U);
    msg.setSourceEntity(96U);
    msg.setDestination(33141U);
    msg.setDestinationEntity(140U);
    msg.op = 240U;
    msg.entities.assign("DSVXSPZQBTEILHMCNGJRNUSYUYTNZBMRNYBHKCNRUHORMRNTQUFOYXXGJGFOWBFXCVGETPADPARBEZDVQLRAUWERUGAWKVIIJUTOXEMVVIGZYGASBIGPHQQJITMALSDXLBFWOHFCZGWCYEVHCQ");

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
    msg.setTimeStamp(0.122327915472);
    msg.setSource(14511U);
    msg.setSourceEntity(124U);
    msg.setDestination(35642U);
    msg.setDestinationEntity(77U);
    msg.op = 225U;
    msg.entities.assign("HGKJNUNYAFPDFHHZMWBACTTVIQTBOXVTFKKGQDYRDGYTPNFJIGFYOHUUGZAUEWSCOYWYPBXSBOSKSSFVZXOKEQIJHECWCRWVJXVOXLRERJWOWHMGBDLOJMCNDM");

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
    msg.setTimeStamp(0.309653619648);
    msg.setSource(47751U);
    msg.setSourceEntity(119U);
    msg.setDestination(16197U);
    msg.setDestinationEntity(62U);
    msg.op = 250U;
    msg.entities.assign("KYSCDFOXEWLBOHRBTVEWHCKHYMDFMPYWPPZJUQSWIDZICWFUHVWAQHASDRBYKJUSQBDXPCYOOKYMLVKNTTQRMUTXNGVVNEIZCHISQLQXTDONGMAZSJJGJDXPJRIKIOHNLFTQGNZLRNXLRRTNPUEVPXJVHMPMYMRSJEOZECIGBUAWZKVAGLYZWGJWMGFIDABSMFUFQFEBLGCESOCXJLCHWDUKBIOSQBXNGIUVQF");

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
    msg.setTimeStamp(0.451011115309);
    msg.setSource(25647U);
    msg.setSourceEntity(160U);
    msg.setDestination(16316U);
    msg.setDestinationEntity(187U);
    msg.type = 142U;
    msg.speed = 29454U;
    const char tmp_msg_0[] = {-10, 1, -117, 44, -54, 91, -81, -15, 92, -62, -8, -82, 87, -25, 23, 23, -55, -82, -6, -127, 108, -84, -76, -89, -68, -116, -85, 37, -69, -65, 25, 21, 91, 85, -73, 61, 84, 10, -75, 73, -82, 16, -37, -57, 45, 83, -42, -67, -59, -85, -123, -88, 21, 122, -100, 103, 126, 109, 93, -94, -124, -81, -56, 58, -26, 77, -47, -78, -116, -122, 114, -62, -97, -128, 70, -107, 93, -61, -50, 80, -113, -106, 75, 102, -63, 56, 16, 7, -52, 103, -16, 67, -100, -72, 27, -77, -72, -93, 3, 82, -78, -20, 86, 2, -81, -43, 106, 76, 34, 22, -70, -13, -67, -36, -57, -105, -125, -110, 29, 126, -20, -7, -106, -60, 78, -92, 126, 102, 88, 17, -7, 86, 45, -19, -105, -7, 0, 69, 125, 104, -84, 14, 63, -46, 126, -70, -69, 122, 90, 71, 32, -14, 6, 83, 1, 29, -70, -115, 26, -56, 16, -49, -112, -103, -109, 38, -115, -89, 97, 22};
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
    msg.setTimeStamp(0.888899504127);
    msg.setSource(34625U);
    msg.setSourceEntity(79U);
    msg.setDestination(43422U);
    msg.setDestinationEntity(175U);
    msg.type = 13U;
    msg.speed = 19536U;
    const char tmp_msg_0[] = {16, -102, 38, -7, -32, -43, 21, -76, 18, 93, 3, -99, -22, 61, -14, -33, 94, 122, -116, -40, -37, -72, -15, 21, 110, -22, 57, -71, -20, 61, 82, 98, 27, 99, -13, -41, -1, 24, 92, -2, 96, -26, -74, -35, -54, -26, 119, 103, 107, -56, -115, 91, -125, -77, -83, -12, 104, 86, 4, 88, -34, 30, -50, -65, -38, 78, -42, 107, 2, 106, 62, 18, 62, -121, 35, -33, 25, 75, -16, -45, -45, -122, 3};
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
    msg.setTimeStamp(0.926709704882);
    msg.setSource(10391U);
    msg.setSourceEntity(188U);
    msg.setDestination(48358U);
    msg.setDestinationEntity(151U);
    msg.type = 225U;
    msg.speed = 25527U;
    const char tmp_msg_0[] = {106, 116, -26, 91, -38, 33, -103, -14, -105, 63, -32, 24, -97, 91, -117, -29, 97, -11, -13, 49, 80, 76, 2, -34, 10, -51, -79, -63, -3, -37, -52, -106, -35, 87, -91, 88, -26, -56, -2, -22, -125, 124, -47, -94, -111, -74, 37, -18, -11, 63, -90, 81, -22, -43, 20, -55, 3, 77, 32, 118, -119, 62, 60, -112, 63, -104, 90, 4, -121, -10, 102, -16, -61, 23, -55, -93, -121, 88, -107, -28, -84, -39, -90, -13, 52, 59, 116, 99, -49, -36, 101, 99, 13, -99, 29, -122, 2, 47, -59, 116, -39, -2, -4, -125, -51, 76, -9, 103, -107, 22, -78, 25, -24, 105, 116, -112, -93, 51, -72, 10, -116, -65, -61, -97};
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
    msg.setTimeStamp(0.275729036678);
    msg.setSource(6511U);
    msg.setSourceEntity(3U);
    msg.setDestination(16071U);
    msg.setDestinationEntity(230U);
    msg.op = 209U;
    msg.tas2acc_pgain = 0.710445947259;
    msg.bank2p_pgain = 0.353691797808;

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
    msg.setTimeStamp(0.688915893084);
    msg.setSource(26015U);
    msg.setSourceEntity(117U);
    msg.setDestination(36177U);
    msg.setDestinationEntity(192U);
    msg.op = 28U;
    msg.tas2acc_pgain = 0.587826777176;
    msg.bank2p_pgain = 0.219345073937;

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
    msg.setTimeStamp(0.128208869231);
    msg.setSource(24188U);
    msg.setSourceEntity(193U);
    msg.setDestination(27144U);
    msg.setDestinationEntity(47U);
    msg.op = 98U;
    msg.tas2acc_pgain = 0.380400452968;
    msg.bank2p_pgain = 0.614150471604;

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
    msg.setTimeStamp(0.349805451559);
    msg.setSource(62371U);
    msg.setSourceEntity(39U);
    msg.setDestination(6192U);
    msg.setDestinationEntity(175U);
    msg.available = 3870503379U;
    msg.value = 30U;

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
    msg.setTimeStamp(0.153199197734);
    msg.setSource(40389U);
    msg.setSourceEntity(220U);
    msg.setDestination(14356U);
    msg.setDestinationEntity(220U);
    msg.available = 2249936524U;
    msg.value = 108U;

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
    msg.setTimeStamp(0.0121950613172);
    msg.setSource(6072U);
    msg.setSourceEntity(99U);
    msg.setDestination(18746U);
    msg.setDestinationEntity(104U);
    msg.available = 1306575129U;
    msg.value = 44U;

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
    msg.setTimeStamp(0.281337790433);
    msg.setSource(57010U);
    msg.setSourceEntity(223U);
    msg.setDestination(44181U);
    msg.setDestinationEntity(239U);
    msg.op = 122U;
    msg.snapshot.assign("NMUUGPMQKJHGDHNGNROEKRTUFEDZKTLLSWNAWSONCOJYYFRIFALWTJMLWUMMLXEQTSYTHAWPRS");
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 41U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.553443586721;
    tmp_tmp_msg_0_0.speed_units = 154U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.0200198872523;
    tmp_tmp_msg_0_1.z_units = 214U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.663086840448;
    tmp_msg_0.lon = 0.934193317444;
    tmp_msg_0.radius = 0.837994167208;
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
    msg.setTimeStamp(0.872796364117);
    msg.setSource(53293U);
    msg.setSourceEntity(227U);
    msg.setDestination(58234U);
    msg.setDestinationEntity(75U);
    msg.op = 128U;
    msg.snapshot.assign("OSTTYJQNYWVRPUYBSSPGSLDSXUDEHAZJQCSTBODKNBLTRNWRJZMFCBQXEWNUXADLRVMGHLLAINRBI");
    IMC::Conductivity tmp_msg_0;
    tmp_msg_0.value = 0.475174501993;
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
    msg.setTimeStamp(0.896814249781);
    msg.setSource(58028U);
    msg.setSourceEntity(60U);
    msg.setDestination(40481U);
    msg.setDestinationEntity(161U);
    msg.op = 85U;
    msg.snapshot.assign("VSIPFQZRKMKVCXGOJVXXNRNFSTLWBAEZMNUQPVPBLIZOYUYDIXKZUMGKOUESWUTLMLPSTXRTROIJGHYKQDICIBZNAKFWPFQFMULGNHNEBWUISCPWTQHAAFXSKAGQWVQTKGIQBBDWVSBFAMZWCGGOWBDUCVVQZYGTVPHEDOPEYCNMAZCEOOYSKYCDMXDJLXRRHFFHRAPYYSHHGDEJCC");
    IMC::SmsState tmp_msg_0;
    tmp_msg_0.seq = 529643068U;
    tmp_msg_0.state = 151U;
    tmp_msg_0.error.assign("TNONFESTBKNTEVCCM");
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
    msg.setTimeStamp(0.589548070793);
    msg.setSource(54955U);
    msg.setSourceEntity(240U);
    msg.setDestination(63742U);
    msg.setDestinationEntity(106U);
    msg.op = 218U;
    msg.name.assign("GTGLZMMIMUFEZHNYOSPDXMQTBLXPZMUFNMVGFFNIQVUWDCBWOWAQRI");

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
    msg.setTimeStamp(0.451027736188);
    msg.setSource(6911U);
    msg.setSourceEntity(51U);
    msg.setDestination(9509U);
    msg.setDestinationEntity(21U);
    msg.op = 224U;
    msg.name.assign("KQVQNOPHBSFGQHDGKNSEESCHTRPRGKRDBNHJCGPCWBZVPWTNFIHZKDPALNWBLYJZHIOMAPUFAVERLZCKSBXKQZQIGYSITJUAALQLWTRUXOAXRZCENORWKQFBLUMGATJOTKGUOXWZMNIURQQR");

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
    msg.setTimeStamp(0.988092687649);
    msg.setSource(6393U);
    msg.setSourceEntity(171U);
    msg.setDestination(56075U);
    msg.setDestinationEntity(159U);
    msg.op = 91U;
    msg.name.assign("FUDJBGPWMBETPQYFJFJRLMGNNKKMAVCZGZHUWNOOJGLSGNOLEMZCDSZOPOPPTRYXTZKZWXEWIKKVDYJJVUVGWAYSOOHZTIIARULDDP");

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
    msg.setTimeStamp(0.549458344029);
    msg.setSource(18710U);
    msg.setSourceEntity(203U);
    msg.setDestination(1209U);
    msg.setDestinationEntity(63U);
    msg.type = 36U;
    msg.htime = 0.138681410806;
    msg.context.assign("JFPLCNBSWYDZHJWAANCXFEVXMZSIXNFPBUBNSUYIIOKFRWCGCPQYSAUOMZOCVAGOLKMZMZUTSNQXMKTQEBWPGLFIBRHCQOMFRBJXJUNVPMLKLIBSOYQTDGBZHJQDEWVEOGAVWYBTCLGYVNWBCVDWATFREUPDIPDDMYTJLPGV");
    msg.text.assign("SNLWJRVTAXXBBKZJUXYUTJFCEFJWYYWCWOJHUDLIUVCLSDFPORADMXSQLXSEGKNQBDCUTOKAMJZIGGRVBOMJRWFPBGSQGBQZETIXMIIYGERTNGTQYGGIKKNHMPQMBBNCCPTDVWUHHYEEXAIYYFWLBAD");

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
    msg.setTimeStamp(0.72938022204);
    msg.setSource(15664U);
    msg.setSourceEntity(197U);
    msg.setDestination(35046U);
    msg.setDestinationEntity(208U);
    msg.type = 57U;
    msg.htime = 0.603777759433;
    msg.context.assign("EARDFBIFFQVGKMBCQUIPHRJMDBMOQOWZLMOZWBGNW");
    msg.text.assign("OKLZGJQHUNTGKAKYBVW");

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
    msg.setTimeStamp(0.120970721203);
    msg.setSource(20167U);
    msg.setSourceEntity(178U);
    msg.setDestination(1915U);
    msg.setDestinationEntity(114U);
    msg.type = 173U;
    msg.htime = 0.278025901513;
    msg.context.assign("YQNIEMIOZCVTULABJGPCVZZKRBNH");
    msg.text.assign("PHEQSQYRSITDKSOTKE");

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
    msg.setTimeStamp(0.808708830173);
    msg.setSource(14817U);
    msg.setSourceEntity(108U);
    msg.setDestination(27789U);
    msg.setDestinationEntity(156U);
    msg.command = 29U;
    msg.htime = 0.371275813459;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 161U;
    tmp_msg_0.htime = 0.502705033921;
    tmp_msg_0.context.assign("VRTHHSNLVDWPNUSTTSJURQZDLFZLRXOKUNLTITUPVGYWNAFYHSJETHGGPRTOZKTIXZDHQHIOJIPVCONXPUYMESQCFSAHLLLOQRXHIWPNQGCTYQMOBSYEEVSRNMZUCHICJMFNUAKERCOANXKDFAFQYKXBZLEAUMAYIGBYIWDXXJSVWBJZCDBWLWYMQEKCPUURQPMDBEGIXCAGEMJZNFWBXMHQPWJMJEVKL");
    tmp_msg_0.text.assign("VGTHTDWOTZOVZPLJGUZMCIOSQUIOBKJHCIPBLAECLRUXHVNWCAEVKBWESVJSQCTQSQCCCYIKNFPNKUOFAYUPWRTGZYXWZJPVRKNUGVDFAWQLPZKSWHTIJFQMTRIZRQRUBASDXYXFMEXIUYPNRTXNULWHSEOANDNHMFAMBKLXHXOQKZHMSJEEMBAIYNKSOGJWERIVFUQYMLDJYRLSGDEVHXVGJL");
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
    msg.setTimeStamp(0.14678291678);
    msg.setSource(42306U);
    msg.setSourceEntity(41U);
    msg.setDestination(31188U);
    msg.setDestinationEntity(62U);
    msg.command = 12U;
    msg.htime = 0.0216040765343;

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
    msg.setTimeStamp(0.0920453626294);
    msg.setSource(38354U);
    msg.setSourceEntity(29U);
    msg.setDestination(19026U);
    msg.setDestinationEntity(8U);
    msg.command = 60U;
    msg.htime = 0.34741868421;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 78U;
    tmp_msg_0.htime = 0.674297528096;
    tmp_msg_0.context.assign("JUZPNVNKJPUGLUSYIWYAOVJLCGYRAHPTZHLCSZZUGSSVLWRJPAVFMWOKANHDAQFUXPUEVDIFTWEOJEYNRYUBFBXIIGGRFKKNGVMNYWPECNHKMJEXTVCOYHVFLCUDEISMXAQPIAKCUQCZDSFBZXTHXWFISWLSQM");
    tmp_msg_0.text.assign("AQQKGIDLGTPYSWZVFVRGLLNYHHWVQZMRFXPSJEEBXVHLWAPPGJGZGVWFQLDTUHKWYMMCUYHKJBOYYPDVLLECNNEBIJOUYRNJGUDTVMOIBMRPMMRFHSSHRBUGIUSTLYDOPDEHUDFLXVCOTPNZSXQMRUBIMXWQVUOTZCWAEEFKUDKQEWBXITILARWQNNZASOCJOJWDGCMYNXKVCTXAKNEJZHZFNPJGIFKFXOECRIJTSTS");
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
    msg.setTimeStamp(0.684178798016);
    msg.setSource(10107U);
    msg.setSourceEntity(104U);
    msg.setDestination(64679U);
    msg.setDestinationEntity(181U);
    msg.op = 68U;
    msg.file.assign("PISSMXZDUFCZGOOTKHQEGUVSQAT");

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
    msg.setTimeStamp(0.761611329587);
    msg.setSource(23005U);
    msg.setSourceEntity(8U);
    msg.setDestination(30397U);
    msg.setDestinationEntity(77U);
    msg.op = 17U;
    msg.file.assign("DJAWCJIPUACSHFAVOBRERXAVPXQXGGWQWOOLAONFOYHYOOGPHFIVCYAZERZUCJAOPKFMLZCHRCRKITQDXRUHBKKBUTGWQLPRMGTZNLZKKRGBAONNJJCDESYIFJSAPWTUFLABPDVPDWZBFUWTMVXFKJIFNSIBESWQVTBYPHYYZKUXURG");

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
    msg.setTimeStamp(0.241084677386);
    msg.setSource(14062U);
    msg.setSourceEntity(254U);
    msg.setDestination(38751U);
    msg.setDestinationEntity(196U);
    msg.op = 231U;
    msg.file.assign("OORCQWSUEBUJNODVQYWYVGIUACAEWZEBSRFLTMPVQINSYZGRMPHTAKILXSBBABLPFOYJRFUVOYZEARULLKAKADPOBQMUQWFHMIWETFCGXIHXCWLOQKDLHGXOJEBBNHNPHKVDVRKJMGMMICYVN");

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
    msg.setTimeStamp(0.0197702726017);
    msg.setSource(59388U);
    msg.setSourceEntity(180U);
    msg.setDestination(42271U);
    msg.setDestinationEntity(133U);
    msg.op = 83U;
    msg.clock = 0.00899971056982;
    msg.tz = 112;

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
    msg.setTimeStamp(0.556355011);
    msg.setSource(21664U);
    msg.setSourceEntity(133U);
    msg.setDestination(44162U);
    msg.setDestinationEntity(226U);
    msg.op = 179U;
    msg.clock = 0.158015858504;
    msg.tz = -52;

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
    msg.setTimeStamp(0.227777360438);
    msg.setSource(50434U);
    msg.setSourceEntity(94U);
    msg.setDestination(16849U);
    msg.setDestinationEntity(182U);
    msg.op = 67U;
    msg.clock = 0.872632211186;
    msg.tz = 59;

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
    msg.setTimeStamp(0.667954584767);
    msg.setSource(9672U);
    msg.setSourceEntity(220U);
    msg.setDestination(6231U);
    msg.setDestinationEntity(154U);
    msg.conductivity = 0.144993475784;
    msg.temperature = 0.820452197331;
    msg.depth = 0.323764793226;

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
    msg.setTimeStamp(0.883759889452);
    msg.setSource(40737U);
    msg.setSourceEntity(106U);
    msg.setDestination(21860U);
    msg.setDestinationEntity(100U);
    msg.conductivity = 0.580604065117;
    msg.temperature = 0.0779827035873;
    msg.depth = 0.880410824964;

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
    msg.setTimeStamp(0.120964088117);
    msg.setSource(6522U);
    msg.setSourceEntity(177U);
    msg.setDestination(13324U);
    msg.setDestinationEntity(18U);
    msg.conductivity = 0.863386609044;
    msg.temperature = 0.649282486001;
    msg.depth = 0.711055286561;

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
    msg.setTimeStamp(0.872273950761);
    msg.setSource(13039U);
    msg.setSourceEntity(65U);
    msg.setDestination(58025U);
    msg.setDestinationEntity(150U);
    msg.altitude = 0.0775093898424;
    msg.roll = 60096U;
    msg.pitch = 23230U;
    msg.yaw = 63728U;
    msg.speed = -16578;

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
    msg.setTimeStamp(0.74764090945);
    msg.setSource(45412U);
    msg.setSourceEntity(58U);
    msg.setDestination(55842U);
    msg.setDestinationEntity(114U);
    msg.altitude = 0.107312196505;
    msg.roll = 23826U;
    msg.pitch = 14423U;
    msg.yaw = 34548U;
    msg.speed = 20848;

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
    msg.setTimeStamp(0.510665191078);
    msg.setSource(19505U);
    msg.setSourceEntity(103U);
    msg.setDestination(33616U);
    msg.setDestinationEntity(12U);
    msg.altitude = 0.738396047454;
    msg.roll = 46561U;
    msg.pitch = 38937U;
    msg.yaw = 63771U;
    msg.speed = -1325;

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
    msg.setTimeStamp(0.0580861657808);
    msg.setSource(13590U);
    msg.setSourceEntity(200U);
    msg.setDestination(20755U);
    msg.setDestinationEntity(88U);
    msg.altitude = 0.808187050932;
    msg.width = 0.455038559193;
    msg.length = 0.572769390994;
    msg.bearing = 0.737774668405;
    msg.pxl = -28394;
    msg.encoding = 14U;
    const char tmp_msg_0[] = {-127, -68, 99, -96, -36, -9, 51, -22, -128, 83, 100, -61, -81, -2, 124, 27, 33, -92, -116, 69, 115, -115, 64, -62, 101, 81, -102, -82, 102, -123, 83, -69, 30, -70, -48, 121, 73, -69, 116, 97, 11, 60, -118, 42, -66, 2, 16, -120, 71, 41, -90, -62, -106, -114, 89, 8, 40, 67, 52, 27, 104, 33, -17, 97, -6, -31, -123, 109, 92, 110, 39, 22, -96, -104, 104, -83, 104, -82, 122, 24, 68, -57, 72, -82, 18, -116, -48, 90, -90, 64, -80, 75, 12, 79, 63, -18, -37, 1, 108, 48, 111, 67, -83, -127, 91, -17, -64, -107, 43, 52, -97, 120, -22, 40, 22, -125, -38, 89};
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
    msg.setTimeStamp(0.849631854142);
    msg.setSource(48845U);
    msg.setSourceEntity(184U);
    msg.setDestination(23656U);
    msg.setDestinationEntity(175U);
    msg.altitude = 0.938528377326;
    msg.width = 0.820879805537;
    msg.length = 0.713033698454;
    msg.bearing = 0.874166502806;
    msg.pxl = -31652;
    msg.encoding = 178U;
    const char tmp_msg_0[] = {-128, 3, 37, -95, 117, 114, -62, -41, 125, 104, -116, -49, -3, -110, -126, -113, -84, 26, -82, 45, 70, -107, -84, 50, -32, 19, -109, 65, -126, -24, -48, 76, -99, -111, 30, -25, -64, 65, -66, 81, 21, 17, 39, 71, -4, -11, -56, -6, -40, -48, 31, 60, -128, -116, -40, -16, 19, -95, -53, -68, 31, 18, 22, -43, -79, -116, 65, 81, 117, 24, -124, -51, 46, -66, 114, 34, 110, 84, 59, -53, -101, 34, -32, -29, -81, 108, 47, -53, -80, -124, 25, 59, 118, 14, 69, 14, -8, 26, -26, 56, 14, 33, 1, -51, -107, -70, -116, -79, 85, -120, -83, 9, 107, -57, -21, 34, 91, -42, 112, 14, 111, 7, -89, -27, 69, 75, -86, -64, 36, 31, 116, 0, 120, -85, 93, 121, -76, -36, 92, -8, -22, 30, -80, -53, 31, -82, 59, 81, -126, 76, 9, 2, -106, 20, 29, 13, -54, -85, 52, 74, 91, 29, 82, 95, -61, -13, 100, 34, 50, -4, 58, 94, -103, -71, 113, 99, 15, -82, 72, -94, -81, 52, 13, -78, 107, 74, 88, 117, 13, -99, -13, 118, 29, 16, 52, 75, -96, 36, 91, -124};
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
    msg.setTimeStamp(0.166536337107);
    msg.setSource(9868U);
    msg.setSourceEntity(240U);
    msg.setDestination(46897U);
    msg.setDestinationEntity(239U);
    msg.altitude = 0.634052234694;
    msg.width = 0.371606344891;
    msg.length = 0.816254400692;
    msg.bearing = 0.648404461604;
    msg.pxl = 26426;
    msg.encoding = 170U;
    const char tmp_msg_0[] = {42, 11, 107, 23, 6, 78, -126, 5, -29, 45, 70, -49, -22, -10, 115, -28, -33, 95, 97, 26, -84, -62, 6, 69, -104, 109, 3, 84, -43, -88, -24, 119, 1, 101, 69, 47, 44, 107, -46, -102, -3, 108, -115, 38, -20, -11, 66, 72, 64, -93, -128, -118, 63, 7, 14, -106, -23, 53, -82, 98, -80, 11, -82, -88, -24, 89, 34, -60, -73, -4, 9, -103, 50, 74, 109, 7, 27, 17, -119, -121, 100, -88, 67, 26, 24, 59, -93, 102, -31, 111, -48, -23, -122, -27, -108, 89, 43, 64, -70, -99, 56, 59, 112, -30, -12, 78, -30, 123, -47, 80, 18, 47, -103, 41, -33, -37, 57, 52, -72, 10, 26, 54, -69, 94, 96, 82, -117, -29, -25, 63, 117, -99, -76, 87, 19, 27, 119, -91, -56, 75, -128, -32, 35, 42, 31, -6, 100, -62, 50, -18, -51, 35, 104, 44, 53, 121, 68, -34, -126, -51, 47, -103, -25, 122, -94, -5, -31, -9, -96, -101, 62, 83, 8, 11, 104, 14, 48, 53, 55, 17, 7, 26, -94, 9, 32, 126, -8, 119, -55, -97, 32, -80, -21, 30, 42, -126, -74, 99, -65, -33};
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
    msg.setTimeStamp(0.0818312509291);
    msg.setSource(1992U);
    msg.setSourceEntity(216U);
    msg.setDestination(38561U);
    msg.setDestinationEntity(118U);
    msg.text.assign("CZKFYSBWXSDNXMNHKEXXUVMPARQDUJMZYKMLCZHIGUNTBIGWKFOMVRNSTIBONQRVJPCYLYTJMHEKTDUHUESBWQJGWZHFPVDSIQCMLXOLAKFLPRUGYLVLSQPWFLOEKJZXPAGEAOCBDOMJGVOITQFHNGYDGIKRWHNBMQKIJSXEDNTMCZQCYWZEJIZPOLZEXQIP");
    msg.type = 59U;

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
    msg.setTimeStamp(0.482066115254);
    msg.setSource(33461U);
    msg.setSourceEntity(206U);
    msg.setDestination(2294U);
    msg.setDestinationEntity(180U);
    msg.text.assign("CRLJZHWBEXOKCVJKOHMWWSYFIKPKAAASBWVWKXAASTCNUDCRHMJYIPKVWUYOSROIAXAQBQBLLWDVFJNIROQETESZNFQXZDTMEPNQIRTVFBWTTJRAMJVELYGZPEUBPFYWGJXFDPVLFGGOLTXIJMNYZXESUQDVKOJMCSDZNHUNLYNETKMH");
    msg.type = 167U;

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
    msg.setTimeStamp(0.627524808352);
    msg.setSource(9790U);
    msg.setSourceEntity(157U);
    msg.setDestination(8707U);
    msg.setDestinationEntity(83U);
    msg.text.assign("VPCIPFXNYOKDQFQKLCDPUZWTSHLMFAYWJIIERGNQXOHJSXKSDTVMIUBQKKKGHTCLUEDMZXHAXEQBFLPRHYRDOTIXDPOQTMOGXNIAIAJWSTPJZRBBMCQ");
    msg.type = 232U;

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
    msg.setTimeStamp(0.898502234563);
    msg.setSource(32735U);
    msg.setSourceEntity(238U);
    msg.setDestination(17425U);
    msg.setDestinationEntity(107U);
    msg.parameter = 91U;
    msg.numsamples = 139U;
    msg.lat = 0.685269190082;
    msg.lon = 0.358202460272;

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
    msg.setTimeStamp(0.0659716927393);
    msg.setSource(18277U);
    msg.setSourceEntity(141U);
    msg.setDestination(3633U);
    msg.setDestinationEntity(197U);
    msg.parameter = 91U;
    msg.numsamples = 66U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 35149U;
    tmp_msg_0.avg = 0.163949490239;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.45541554235;
    msg.lon = 0.128420337891;

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
    msg.setTimeStamp(0.620925888696);
    msg.setSource(25038U);
    msg.setSourceEntity(26U);
    msg.setDestination(59158U);
    msg.setDestinationEntity(53U);
    msg.parameter = 28U;
    msg.numsamples = 163U;
    msg.lat = 0.480736590693;
    msg.lon = 0.690624701521;

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
    msg.setTimeStamp(0.941410346218);
    msg.setSource(888U);
    msg.setSourceEntity(195U);
    msg.setDestination(59706U);
    msg.setDestinationEntity(18U);
    msg.depth = 6133U;
    msg.avg = 0.692286293727;

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
    msg.setTimeStamp(0.815342324867);
    msg.setSource(11490U);
    msg.setSourceEntity(63U);
    msg.setDestination(17786U);
    msg.setDestinationEntity(93U);
    msg.depth = 42753U;
    msg.avg = 0.899911584117;

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
    msg.setTimeStamp(0.958468919575);
    msg.setSource(24315U);
    msg.setSourceEntity(222U);
    msg.setDestination(57262U);
    msg.setDestinationEntity(62U);
    msg.depth = 30578U;
    msg.avg = 0.328283219647;

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
    msg.setTimeStamp(0.638910600929);
    msg.setSource(62636U);
    msg.setSourceEntity(137U);
    msg.setDestination(59490U);
    msg.setDestinationEntity(174U);

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
    msg.setTimeStamp(0.0839450117421);
    msg.setSource(21107U);
    msg.setSourceEntity(20U);
    msg.setDestination(25212U);
    msg.setDestinationEntity(59U);

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
    msg.setTimeStamp(0.64268546265);
    msg.setSource(36031U);
    msg.setSourceEntity(129U);
    msg.setDestination(55251U);
    msg.setDestinationEntity(75U);

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
    msg.setTimeStamp(0.731546387696);
    msg.setSource(5968U);
    msg.setSourceEntity(239U);
    msg.setDestination(26549U);
    msg.setDestinationEntity(133U);
    msg.sys_name.assign("SOEQDZMHTRFLVOKBGNNYPMHNMRZFBZNBYDRGCNWBPAJPJLAESFNZMKPYYLRUXPMMWJVTXNSEMRLBQEZBKWHIIJUIVTREHGHKOIGIJYTOPXFTCFJUDDQSJFJMABNYRSWDEYPOUCTEOSSRYLEPWPITWNSKWXKORSWXQLWXGVGZGUKTGGKZUCAAB");
    msg.sys_type = 247U;
    msg.owner = 55971U;
    msg.lat = 0.897974215505;
    msg.lon = 0.6157539957;
    msg.height = 0.484281497319;
    msg.services.assign("DFQPVWZYYCTMNYGXRQWZAOHMTVNCEOCUFUTRIUPSMUPYIBDZUSTKXDQWAGQIPGQYHKFLWHVLUMFUTLTLZXEKNDWJXAPSVUCVGPUEKENHNJSDJJJILEZZCIDEKATGOCMPQNRJXENQXWSFABMSZBRMISIGUOWHOFHHRNTKOPPOVRGVYRTGGMLWYAAQSXZCNRLRIODYPIBXA");

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
    msg.setTimeStamp(0.903997126081);
    msg.setSource(3307U);
    msg.setSourceEntity(82U);
    msg.setDestination(52304U);
    msg.setDestinationEntity(37U);
    msg.sys_name.assign("PTYXMLCGPLCQNELYIVKZAXRLUOGWSYPGYFBHSDRIENQAQWEMIAIHJMYHIECYMADUJJGTT");
    msg.sys_type = 149U;
    msg.owner = 34501U;
    msg.lat = 0.0913066459196;
    msg.lon = 0.190767790513;
    msg.height = 0.00909128298433;
    msg.services.assign("IUSYMQBBKITLFPKEAFLXVCMRHTJEQTIODBFLYNMWSOXSJJYFNGGAAKXQAIGGNRBCZFSXTUUCKFSHWMYAXZHNJETZIOKVNWYZOAVNTYLVFMQQRMGGWWBPPJHKSLUCQBONDDBEFITWZVSDQJFTOERESDSCQMZOKUYHMRVNHSELGMROIUZPCABWBJUHNOCVAOALPUYXEZYTZRUHKIHHTZQYLXKWDDLVMXQPCGLRXRIVRI");

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
    msg.setTimeStamp(0.573703214487);
    msg.setSource(28047U);
    msg.setSourceEntity(139U);
    msg.setDestination(3679U);
    msg.setDestinationEntity(232U);
    msg.sys_name.assign("GULXSALTBIOVSJSDCKKUXXSLLDTCPYGRJFOVMKBYAUWCHQVYNWHIMBRQLAZYZWSHLGIVRBQJRBFSTCWAAEYZQIZFXZONZSFQCYWRKGJBHIYHYLSZVDHIDDPCWPNQKVHAEDXLTWIUZUNTPMODUFUTNPXD");
    msg.sys_type = 51U;
    msg.owner = 56558U;
    msg.lat = 0.161426699876;
    msg.lon = 0.682712694125;
    msg.height = 0.5237599219;
    msg.services.assign("FGQSYBXHDFMNPDWWPRHTVXNPHMNXWEFUECSZ");

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
    msg.setTimeStamp(0.827546958284);
    msg.setSource(7540U);
    msg.setSourceEntity(217U);
    msg.setDestination(31853U);
    msg.setDestinationEntity(1U);
    msg.service.assign("IEYFTJXSGBGACOAZRUETACZALVEWHKTZMHJBKCQHTJSQVEANGURRMPKONMXBYEYOKYRLG");
    msg.service_type = 40U;

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
    msg.setTimeStamp(0.880816515472);
    msg.setSource(11857U);
    msg.setSourceEntity(9U);
    msg.setDestination(25364U);
    msg.setDestinationEntity(197U);
    msg.service.assign("ZRCBCIQQWGFZXVMITIEVQ");
    msg.service_type = 162U;

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
    msg.setTimeStamp(0.382181436155);
    msg.setSource(7045U);
    msg.setSourceEntity(89U);
    msg.setDestination(13946U);
    msg.setDestinationEntity(166U);
    msg.service.assign("ASLXYOYGPZKFYGPTLOQDMBWHSRPRIEEZWDRUAUEVKOCZHBYQFHEIFMCEQCABYHSHRDXSEVMDYMSVLOMGQKTOIJBMIQVJUBTPNZDNNJETWJCHZJWXSNTGIBAIXUKKOTXLYAXVFJFQPTUWMEUTNRGFWSUVADQKZGICWERJAQLGMFDOYPFOLKRKVCPHARDXRIKBVSNXHZLBVQIGLEQUPDMPWDRBLFGTHACHCFAPZN");
    msg.service_type = 153U;

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
    msg.setTimeStamp(0.905227723286);
    msg.setSource(56218U);
    msg.setSourceEntity(90U);
    msg.setDestination(13077U);
    msg.setDestinationEntity(82U);
    msg.value = 0.563126678878;

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
    msg.setTimeStamp(0.876151284259);
    msg.setSource(7369U);
    msg.setSourceEntity(180U);
    msg.setDestination(51817U);
    msg.setDestinationEntity(179U);
    msg.value = 0.955239925013;

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
    msg.setTimeStamp(0.274241786815);
    msg.setSource(6565U);
    msg.setSourceEntity(143U);
    msg.setDestination(62708U);
    msg.setDestinationEntity(254U);
    msg.value = 0.890802768396;

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
    msg.setTimeStamp(0.273888202033);
    msg.setSource(36240U);
    msg.setSourceEntity(231U);
    msg.setDestination(29720U);
    msg.setDestinationEntity(211U);
    msg.value = 0.0661389589603;

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
    msg.setTimeStamp(0.665056797128);
    msg.setSource(4540U);
    msg.setSourceEntity(77U);
    msg.setDestination(1515U);
    msg.setDestinationEntity(232U);
    msg.value = 0.587970665281;

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
    msg.setTimeStamp(0.886429957477);
    msg.setSource(16310U);
    msg.setSourceEntity(99U);
    msg.setDestination(57645U);
    msg.setDestinationEntity(172U);
    msg.value = 0.993627163763;

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
    msg.setTimeStamp(0.710263585198);
    msg.setSource(27329U);
    msg.setSourceEntity(36U);
    msg.setDestination(37600U);
    msg.setDestinationEntity(116U);
    msg.value = 0.587807123281;

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
    msg.setTimeStamp(0.713229330732);
    msg.setSource(33216U);
    msg.setSourceEntity(237U);
    msg.setDestination(1860U);
    msg.setDestinationEntity(191U);
    msg.value = 0.649257572985;

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
    msg.setTimeStamp(0.57907944954);
    msg.setSource(9014U);
    msg.setSourceEntity(245U);
    msg.setDestination(30550U);
    msg.setDestinationEntity(158U);
    msg.value = 0.336133881981;

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
    msg.setTimeStamp(0.0633600165343);
    msg.setSource(14677U);
    msg.setSourceEntity(162U);
    msg.setDestination(51068U);
    msg.setDestinationEntity(88U);
    msg.number.assign("DLNUPLLDDVWTBKUG");
    msg.timeout = 31446U;
    msg.contents.assign("JIBGLYMCZKHMTQRKHUOTYAAMBSYMSFWBLHQVQYYGFIJRFWMWTYXXPWXBWOZAKEXEVJWECENKZCVNDZVJRNKDWITXCKLBCDBOPCLNVMZALZXNLYFPGPUFODICLZBVPQCDXGQYHFUYSOKBQHPGPDOEMHFPOIEHP");

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
    msg.setTimeStamp(0.872688130764);
    msg.setSource(30109U);
    msg.setSourceEntity(24U);
    msg.setDestination(58998U);
    msg.setDestinationEntity(252U);
    msg.number.assign("EJPCCVCOVSAURRQAFFJXFVSZHSLNCPFPPBNBSMRYCDXTRNIWLZDBNFWHXDBQJYFLUYAPMGVWQPTGHQYIYTLANKJLUJHCIICNIMVEUGMLEDHXPGZBLEUGUIBBXWJTNUQOZAZGJARQINPWKCQYHHHPOADDDLNKHOSISATMTJRVBEMWLIKM");
    msg.timeout = 57673U;
    msg.contents.assign("GFVJUPLSCVAXBHPOVYZXMLFRSHHRIOFTDWKAJNINSDXVOKYQTAHUZCMQMWKOJEEUCBLBPSMHBEXIBTGBZD");

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
    msg.setTimeStamp(0.333932360478);
    msg.setSource(22992U);
    msg.setSourceEntity(171U);
    msg.setDestination(37243U);
    msg.setDestinationEntity(55U);
    msg.number.assign("RLPFSRBTPNJLZAGEEDOKPCKYVRYSQXQQBVXAPIXTQMEARFKWKAFPHQTUDLCEURGIFGSZHCHSOHGODYXRIZXRVENUPDOTNSMJFEYCOFJKYHUTKLANZOQQAVIIUZ");
    msg.timeout = 39339U;
    msg.contents.assign("NWHXKBHLRJWYNNWVIVNZTWCRVQXAFFNLKVAHMJWDNNOPYTOAIXNOBMHABWUFRFPVDMAQVZBLJYXLCCRCGEMKCFDUAYTEZYXFUGPQLJXEZKTMHTXEQLZPXBZYUCSHSRECSOU");

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
    msg.setTimeStamp(0.00766318058711);
    msg.setSource(62714U);
    msg.setSourceEntity(75U);
    msg.setDestination(61893U);
    msg.setDestinationEntity(75U);
    msg.seq = 3894782196U;
    msg.destination.assign("VHHEXGYYIQMOGCSWWKOWXAHWNNJIFVMBCITSURQLPNBCUXQYIEKYTEBFRUUTVUTAJPSSTDJCXDJYJOERJIJGBTYUFAUJSDKVGIDRXNCTVZOQKGPORVSIBMZIJRUDZVTSXXICEFYXHDPEMWCZVLZMQAYWOCEOBZCZPNZBQSBHGADFRRKLLOYXDAFHBPEAUALLVMGQPNJOPLCUMKBQYFZWPKSFTAEQRENGNSHATWKFN");
    msg.timeout = 62094U;
    const char tmp_msg_0[] = {-21, 29, 103, -20, -94, -9, 123, 91, 83, 10, -16, 91, 33, 14, 74, 52, 11, -54, -61, -106, 53, -36, -69, 42, -66, 31, 74, -28, 57, 99, -57, -20, 87, -19, -28, -54, 72, -47, -115, 42, 2, 26, 17, 16, -37, -113, 11, 13, -63, 7, -95, -101, -56, 112, -7, 42, -95, 82, 63, 12, 98, -70, -80, -83, 9, 72, -118, -112, -15, 89, -66, -79, -86, 9, -120, -46, -53, -122, 97, 57, -74, 56, -46, -115, 118, -2, 81, 5, -43, -12, 31, 6, -117, 22, -56, 112, -16, -108, 59, -28, -19, 100, 25, 13, 42, 51, 58, -49, 125, -112, 54, 7, 40, 35, 122, -45, 90, 43, 34, -14, -60, -55, -81, 76, 107, 100, 118, -35, -76, 58, 123, -19, 34, 58, -14, 109, -108, 26, 81, 7, -20, -1, 121, 45, 70, 8, -126, -94, -33, 14, -47, -20, -76, -81, -2, 92, -35, -64, -69, 5, 85, -69, 0, 41, 29, 0, -22, -10, -73, 25, 53, 96, -116, 26, -39, 68, -33, -50, 113, 47, 77, 114, -11, 35, -122, 32, 82, -112, -40, 116, 30, -18, 53, -35, -106, 94, 10, 90, -115, 71, -26, 114};
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
    msg.setTimeStamp(0.510079686422);
    msg.setSource(44292U);
    msg.setSourceEntity(0U);
    msg.setDestination(18378U);
    msg.setDestinationEntity(64U);
    msg.seq = 236215510U;
    msg.destination.assign("DYIDUVGZQGGPGVUEKGCCXGDDKBLGKZCECRPZHPQRIBIWTLEPJVHTSBJSYMHNRTQFJOVHQGVHEYIAASJYTFACPAVFUMYZTSMOLLMDTWCMNNURUXWLBRUSVRJQXZTXAKWFRYOZZTPECYPWJNNQJQNOWVKHNDXXFOHOFAZLZ");
    msg.timeout = 40346U;
    const char tmp_msg_0[] = {107, -42, 71, -29, -91, -52, 28, 93, -24, 99, 68, 3, -68, -33, -110, -99, -32, 26, 59, -41, -5, 34, 60, -9, -28, 98, -38, 75, 32, -12, 92, -83, 118, 46, -34, 12, -18, 7, -45, 89, 105, -22, 16, 113, -72, -42, -42, 51, 15, -60, 88, 102, -49, 21, -64, 80, -13, 62, 89, 83, -55, -108, 78, -93, -30, 67, -80, 54, -105, 58, 49, -87, -50, 115, 100, 20, -101, -33, 39, -20, -64, -106, -117, -48, 29, 13, 120, -117, 62, -125, -105, 87, -101, -39, 101, 63, -77, -53, -70, 18, -105, -118, -58, 51, 95, -28, -70, 124, 126, -72, -114, 20, 20, -57, -85, 22, 88, -2, 63, -52, 0, -111, 101, 39, -109, -41, -19, 97, 13, -4, -28, 99, 27, -53, -13, 106, 126, 118, -74, -74, 90, 33, -16, -102, -50, 91, -101, 40, -69, 101, 73, 40, 31, -8, -49, 36, -28, -42, 3, 57, -121, -98, 52, 88, -31, 32, -108, 36, 6, 49, 64, -27, -66, 14, 33, 38, -107, -125, 53, 125, 85, -66, -4, -63, -92, -128, -69, -29, -56, 36, -93, 98, -123, 37, 121, -121, 42, -91, -112, -65, 18, -58, -101, 7, 85, 4, -116, -7, -57, -126, -70, -5, 53, 91, -67, -57};
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
    msg.setTimeStamp(0.936655945992);
    msg.setSource(14151U);
    msg.setSourceEntity(72U);
    msg.setDestination(33545U);
    msg.setDestinationEntity(15U);
    msg.seq = 1292504277U;
    msg.destination.assign("CUSRHYLOBDEIQIBXNDBIWZFGADPZBNTGJVYOCUKFKDODKVAHNRRIYEGO");
    msg.timeout = 61347U;
    const char tmp_msg_0[] = {-91, 26, -122, 36, 13, 21, 124, -71, -86, -111, 49, -60, 61, -124, 120, -7, 113, -101, -32, -39, -81, -33, 122, 47, -23, -98, -56, -109};
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
    msg.setTimeStamp(0.514349035894);
    msg.setSource(7807U);
    msg.setSourceEntity(9U);
    msg.setDestination(5011U);
    msg.setDestinationEntity(227U);
    msg.source.assign("HNHFVLTSPZNCZFTLXBLYKRUJXCXDGJLHREZKZIDUIUBYWXCXHINWMSNWWMSVVOYBGUNNCGFPTBCELJSQVCBQFPJVKRUSRBDQJEZJWCVZTHRRPDGTPINZDRLDOMAOOWTEBFQHFSIGZAKGXITKAZYQA");
    const char tmp_msg_0[] = {110, 84, 67, 106, -120, -53, 29, -51, 55, -121, 108, -3, 100, -88, 14, 18, 101, 25, 21, 101, 26, -83, -27, -75, 18, -11, 16, 45, 126, -10, -70, -48, -55, 115, -56, -65, 7, 63, -62, 108, -26, 91, 81, -61, 87, -18, 71, 33, -80, 64, -2, -33, 78, -60, 46, 122, -59, -70, -46, -88, 11, 19, -42, 31, 16, -64, 77, 59, -106, 67, -85, 98, 49, 112, 126, -65, 40, -111, -16, -9, 15, 82, -47, -119, 29, -15, -92, 10, -80, -13, -37, -85, 126, -106, -94, -73, -69, -32, 123, 22, 89, -127, -82, -100, -88, 120, 68, -5, -96, 14, -37, 108, -77, 27, -16, 25, -81, 108, 1, 72, -13, -113, 89, 22, 122, 121, 65, 112, 83, -67};
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
    msg.setTimeStamp(0.0865979160102);
    msg.setSource(60787U);
    msg.setSourceEntity(88U);
    msg.setDestination(50893U);
    msg.setDestinationEntity(176U);
    msg.source.assign("HPXRLTBBNZM");
    const char tmp_msg_0[] = {-99, -42, 18, 32, 94, 10, 76, -36, 80, -85, 21, 107, 107, -23, 17, -96, -57, -110, -54, -63, -123, -113, -107, 36, 45, 115, 58, 30, -112, -58, -8, 6, 23, -92, 89, 22, 89, -102, 44, -58, 98, -100, 77, 26, 107, 37, -116, -51, -118, -22, 104, 36, 88, -96, 56, -126, -25, 115, -88, -65, -125, -59, -55, 80, 93, 28};
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
    msg.setTimeStamp(0.272518048533);
    msg.setSource(40857U);
    msg.setSourceEntity(57U);
    msg.setDestination(41142U);
    msg.setDestinationEntity(50U);
    msg.source.assign("LPOHAGIJIZSBMSJCHNQWPBRUFZEOLUHIGUXYSHJVEFWGCTZYKZQVTGWXIDVTSKUMTOGAOWPGTYKZLPYVRCFJKNXDRADMXYYJNKQQIFZNLUZTVINHWMABMAHUNMRPDZSQXLAXFYNRDV");
    const char tmp_msg_0[] = {17, 94, -122, -4, 126, 47, 15, 37, -75, -12, -49, -9, -58, -87, 20, 95, -18, 85, -96, -1, -76, 31, -96, -25, -2, -70, 122, 125, 61, -39, 6, -84, 21, 48, 125, -103, 64, -118, 111, -40, 33, 39, -31, 49, -9, 120, 26, 97, 86, 111, 68, 95, -10, -53, -122, -97, 65, -1, 62, 95, 38, 18, 27, -123, 71, -47, 43, -6, -37, 94, -20, 69, -55, 4, -120, 55, -16, -72, 62, -58, 17, -14, 48, 56, -117, 1, -98, -124, 119, -75, 78, 120, 56, -19, 81, 116, 69, -108, 57, -115, 55, 51, 33, 70, -30, -75, -3, 29, 19, -79, -49, -35, 78, -101, 126, 107, -50, 96};
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
    msg.setTimeStamp(0.465364925832);
    msg.setSource(36909U);
    msg.setSourceEntity(195U);
    msg.setDestination(31480U);
    msg.setDestinationEntity(77U);
    msg.seq = 3454940488U;
    msg.state = 148U;
    msg.error.assign("APZPQUTEHJVFRTAMJBEUIGDLLYQWBG");

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
    msg.setTimeStamp(0.793553548115);
    msg.setSource(33638U);
    msg.setSourceEntity(156U);
    msg.setDestination(5288U);
    msg.setDestinationEntity(203U);
    msg.seq = 4071724449U;
    msg.state = 58U;
    msg.error.assign("WMTLHDOUAALZZHXFYQGHVYXNZDNYGZMRROJLBIYOFUQACBFGKNYIROKKQKENLPNHVNVVUSXAOTOTCDXTVYGESCQVAHEBUGMKZYJHFBZZMSXEAPOLSFIQZXEUDDVMCAWJJCEDBNGEUMHSWEJWHWDHYPGAU");

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
    msg.setTimeStamp(0.711495643077);
    msg.setSource(15948U);
    msg.setSourceEntity(202U);
    msg.setDestination(60988U);
    msg.setDestinationEntity(68U);
    msg.seq = 4140173557U;
    msg.state = 204U;
    msg.error.assign("HVXXJTOVANWRSJAZLPZCLYEHUYBSXIGQVMFQVDKDKQROEMWCZAQPFGVJRNSBRWCMNXXQRFPIJUDCNYLXVHIJTGKCCELDFJQAEGYRDAUAUJDIXZKUZSPIBY");

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
    msg.setTimeStamp(0.916556892861);
    msg.setSource(16158U);
    msg.setSourceEntity(100U);
    msg.setDestination(31550U);
    msg.setDestinationEntity(34U);
    msg.origin.assign("AMXIHWQWXXGEYYNSCBNRUHXSNDBHYVFOFDLOXSTJRJHDQLRBXZTPPPTKCTDKHFTNRCFDESQKAQDQJZ");
    msg.text.assign("OVZKZRSQEUJBZZLHSOSCZPBNJBCJHLXBGRWCKJBMWSAOETQTHCNZNYPKRLOPGTZBWDTOAIJLUJEGYFYHXTIXLQSRILYWOFVANFBHVPULCGUVPGICHUWAYOFNGISUOSRSQMTPMYVXXLGJXSGVW");

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
    msg.setTimeStamp(0.426657881108);
    msg.setSource(49899U);
    msg.setSourceEntity(105U);
    msg.setDestination(49547U);
    msg.setDestinationEntity(124U);
    msg.origin.assign("EAWCVIWMGBZYOEIJHGBXQYMXREQCETDLSSIEVYZEKWJHBRYQOPSMXNRNNMUODBUMJTUUGQFHJDXTMORGWVOIXYVVZCYBAPHZTBKGISLHQPORFLEVNVFNUCAPRYJMUXKLCTINQTTRNWJJPAGDVOBRMYCYKKFSJRLEYIZUDKKWFATTXDDCXOUGHSASSQLPFNMLDFLLFN");
    msg.text.assign("XGXSKYSWYODKGLBSPKIHJNJKFHWOKDVGNURURTMNUEMPUFXASMDNWLPJQZQRLNRTLOAWLY");

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
    msg.setTimeStamp(0.536269307962);
    msg.setSource(16089U);
    msg.setSourceEntity(161U);
    msg.setDestination(63486U);
    msg.setDestinationEntity(23U);
    msg.origin.assign("CMIGAHHGTBMZQYDVAQZVXWBUDHNAZBHSJXLZVDJYKPMIWLOYHHKJEUGEODEHRGHSHGZUOSDRLFWAS");
    msg.text.assign("MWFMBJLWFPKPPBLGGEYEZQEIGKRUCNYOZPAYELUVMWJVOID");

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
    msg.setTimeStamp(0.968257220753);
    msg.setSource(49579U);
    msg.setSourceEntity(132U);
    msg.setDestination(16094U);
    msg.setDestinationEntity(86U);
    msg.origin.assign("FGMQUAZPBJVHIQTSLTWOBXMXFWXERSHYIOZJJOABNKDZGWMDTVOUTGBAFVVSOWWPKIXQCHBCUTGPINCMFZBKTVPDRDARENEFXEEIKRZMHNJIJLGXPZQCLJLGCLEYWDKFZNSYWOESUDIQDVBRUHHYYTOWYYHMRRJEMSPLHQYXLQQBTYRXAFOPXDQSYGUH");
    msg.htime = 0.200400400476;
    msg.lat = 0.0352770621393;
    msg.lon = 0.779876897389;
    const char tmp_msg_0[] = {-82, -74, 42, -3, -122, -58, 38, 93, -33, 108, -26, 60, -47, 38, 115, -111, 17, -128, -96, 75, 40, -92, 54, 35, 62, -32, -41, -114, -81, 98, -70, 59, 72, -82, -45, -87, -111, 79, 45, 23, -31, 19, -51, -79, 30, 122, -117, -91, -127, 70, -55, 97, -58, -37, -60, 11, -71, -48, 45, -122, 102, -22, -116, 108, -42, 112, 58, 16, 52, -46, 9, -56, -9, -85, 82, 52, -3, -99, 107, 53, 38, -71, 93, -96, 108, -35, -60, -14, 83, -91, 115, -65, -25, 116, 109, 37, -65, 75, 78, -69, 112, -19, 114, 33, -40, 0, -60, 88, 108, -48, 61, 73, -49, 51, 111, 28, 25, 72, -56, -28, 35, -37, 72, -82, -84, -116, 54, 64, -35, -14, -103, 58, 40, -47, 105, 63, 62, -69, -33, -48, -35, -11, -107, 118, -65, -4, -127, -44, -62, 49, 73, 17, -44, 124, -59, -33, -101, 50, -100, -94, -5, 111, -73, -23, -127, 95, -83, -53, -61, -11, 119, -107, -108, -120, 72, -44, -48, 111, -51, -93, -62, -120, -1, -103, 68, 121, 15, 72, -96, -76, 96, 39, -12, -97, 69, -126, 68, 95, 41, 31, 110, 105, 119, -49, 50, 92, -54, -58, -47, -26, -57, 61, 81, -120, 83, 84, -64, -74, 72, 53, -62, 68, 54, 15, 104, -84, 82, -123, -109, -85, -84, -39, 23, 83, -11, 101, 39, 56, 106, -58, -102, 50};
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
    msg.setTimeStamp(0.0552857550816);
    msg.setSource(54327U);
    msg.setSourceEntity(137U);
    msg.setDestination(18253U);
    msg.setDestinationEntity(32U);
    msg.origin.assign("KBWABQHIQNFTPLVZEOOMRIUYXSYTGVJBCVEDDJXKKNHPGDPNMJLSUXMODQGDCXFNVBVCOLMZFRNAQLUQHBSEQRMEBHWCOSFLNBUSCNRMISVVREAUPZEGPRALPWUGPTUTW");
    msg.htime = 0.836078471034;
    msg.lat = 0.989842210982;
    msg.lon = 0.128103310263;
    const char tmp_msg_0[] = {-80, 104, -121, -61, 32, -99, 99, 7, -112, 9, -123, 11, 52, -11, 90, 106, -59, 30, 101, 110, 32, 122, 5, -51, 6, -23, 36, 41, 105, -3, -47, -118, 49, 5, 101, -121, 86};
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
    msg.setTimeStamp(0.43336706113);
    msg.setSource(31445U);
    msg.setSourceEntity(177U);
    msg.setDestination(15471U);
    msg.setDestinationEntity(242U);
    msg.origin.assign("BXVXOLVGDDWYISSHICSQTUESTZIORK");
    msg.htime = 0.550155686879;
    msg.lat = 0.355334265109;
    msg.lon = 0.844788810283;
    const char tmp_msg_0[] = {-57, -12, 48, 126, 44, 125, 62, 109, -103, -110, -119, 95, 35, -5, 82, 46, 96, -54, 59, -45, 21, -25, 65, 30, 14, 64, -96, -8, -56, 43, 24, 92, 21, -68, -75, -74, -8, -40, 46, -59, -4, -121, 126, 124, -37, 55, -45, -124, -123, 16, -128, 23, -39, -51, -8, -60, -55, 68, 97, -11, 72, 39, -12, 63, -7, -93, 117, -3, -106, -71, 91, 49, 37, -73, -79, -30, 113, -44, 61, 54, -70, 108, -112, -37, -18, 77, -98, 86, -18, 103, -57, -30, -68, 15, -88, -29, -61, -39, 45, 98, 123, 8, 10, 0, 64, -127, 91, 7, 73, -110, -124, -108, -117, -96, -22, -43, -57, -82, 74, -122, 41, -36, -104, -128, 2, 45, -24, -87, -83, -75, 104, 29, -128, -118, -92, 15, 50, 59, 111, 59, 116, -34, -53, 17, -30, -118, 67, -56, 33, 15, 44, -119, 23, -94, -41, 46, -127, 0, 95, 5, 28, 13, -54, 6, 126, 54, 68, -70, -18, -8, -72, -23, -68, -32, 26, 29, -110, 33, -58, 63, 71, 8, -107, -96, 120, -10, 23, 6, -39, -7, 59};
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
    msg.setTimeStamp(0.662719827487);
    msg.setSource(14006U);
    msg.setSourceEntity(233U);
    msg.setDestination(44047U);
    msg.setDestinationEntity(71U);
    msg.req_id = 8277U;
    msg.ttl = 5770U;
    msg.destination.assign("CMHZASZYFRXNUPYEIPJIVBYYZQRYGDIHHQXJETEK");
    const char tmp_msg_0[] = {-25, -88, 86, -98, 72, 6, 110, 16, -87, 77, 83, 23, 118, -94, -56, -62, -1, 55, 63, -90, 41, 12, -79, 38, 82, 0, -16, -85, 51, -36, 21, 71, 111, 83, -64, -13, 90, 76, 11, 38, -97, 3, 13, 110, -99, -60, -62, 63};
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
    msg.setTimeStamp(0.000578429443015);
    msg.setSource(63285U);
    msg.setSourceEntity(115U);
    msg.setDestination(56519U);
    msg.setDestinationEntity(171U);
    msg.req_id = 63572U;
    msg.ttl = 45982U;
    msg.destination.assign("SFJWJZLRYVOFFBOUGENWVSTHBEEXRROALEQWIPWHNLZCVFGQBCLDZLTKDPSIYTWGMRFGBQGQUDKEPGHSAQSQPZNNZIEPISQAWSZHAVRTLUSUYXGYYBMOTGRFDICKMUNAOHOFSYMNXYIJEZEQANPXKWZLPJPVCQNIDULDIYLXCTYUMJVBUNVXNZAHKWTMBCGJCHKRLAACIACUJKCTOKBFOHMGSVE");
    const char tmp_msg_0[] = {-111, -13, -120, -126, -76, 62, 32, 98, 61, -105, -30, -4, -56, 49, -64, 85, 37, 36, 70, 25, -25, -119, 16, 58, 82, -32, -28, -127, 22, -58, 65, 92, 103, 54, 23, -98, -80, 77, 40, -126, 111, -59, 6, -66, 67, -124, -92, -102, 103, 122, -81, 4, 57, -70, -101, -5, 37, -103, 110, 105, 94, -88, -52, -107, 14, -56, -126, -56, 58, 41, -2, -23, -124, -1, 20, 61, -107, 87, -92, 47, -128, 24, 24, -105, -110, 63, -91, -8, 114, -126, 30, -119, -50, 46, 124, 16, 89, 123, 51, -33, 52, -49, -3, -39, -54, 86, 106, 64, -70, 10, -29, -23, 66, 88, -100, 23, 73, 81, 77, 97, -117, 95, 37, 119, 34, -7, -29, 36, 45, 124, -1, 108, -70, -57, 43, -15, -8, -19, -106, -23, -69, 45, 14, -29, 10, -58, 103, -34, -64, 79, -34, -118, 23, 27, 81, 91, -17, 19, 94, 99, -105, 16, -122, -78, 2, -13, -50, 113, 28, 85, -111, 76, -120, 45, -9, 0, 96, -42, 80, 55, -72, -11, -24, -69};
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
    msg.setTimeStamp(0.4941612996);
    msg.setSource(51653U);
    msg.setSourceEntity(113U);
    msg.setDestination(38759U);
    msg.setDestinationEntity(232U);
    msg.req_id = 59442U;
    msg.ttl = 58108U;
    msg.destination.assign("CSOICGNLRZHVYQWZWNVICGOYKHUDKHJVGEAVYWXQUOADTLDGWCHZDBQEFALQTZHNXUWMCQVIOGLNGFACTUMBAFIJCOPEVPFGRABYHSRAHHRMSOWYBKUTJGXRNIFNQBRPESSJDPXGJARZFKMCJIXPSBJMZMVFYKPIOIKUBLLEVWERZSKXYQJEHJSML");
    const char tmp_msg_0[] = {-5, -17, -91, 48, -110, -115, -19, 59, -119, -39, -98, -119, 121, 10, -9, 45, -2, 44, -117, -67, -39, -109, -29, 110, 109, -95, 6, 117, -24, -93, -111, -8, -59, -58, -75, -117, 90, 66, -105, -19, -1, -50, 7, 50, -19, 67, 75, -113, 101, 13, 5, 57, -96, -105, -55, 11, -80, -119, 30, 6, 61, 65, 51, -20, 119, 112, 11, -125, -43, 110, 82, -36, 10, -2, -30, -118, -95, 43, 108, -30, 35, 61, 32, -49, -60, -4, 108, -3, -18, -18, -127, -98, 116, -11, -49, -103, 32, 23, 83, 106, 24, -55, -37, -78, 70, -91, -98, 75, -35, -82, 93, -100, 35, -54, -80, 106, -50, -58, 54, -82, 31, 15, -89, 95, -31, 118, 2, -82, -105, 31, 59, -72, -125, -68, -85, 25, 100, -62, -82, -85, -70, 105, 65, -64, 66, 2, 63, -37, 115, -101, 92, 8, 92, -125, 101, -44, -32, 35, -10, -52, -110, 86, 82, -86, 42, 30, 48, -7, 16, -74, 27, -75, -73, 88, 44, -76, 126, 112, -21, 112, 85, -90, -73, 82, -45, -41, 71, -77, -14, -58, -9, -35, -48, -33, 51, 26, -81, -83, -58, -126, 54, -88, -71, 115, 62, -28, -124};
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
    msg.setTimeStamp(0.902002906149);
    msg.setSource(43767U);
    msg.setSourceEntity(142U);
    msg.setDestination(31983U);
    msg.setDestinationEntity(90U);
    msg.req_id = 16394U;
    msg.status = 95U;
    msg.text.assign("NOKSOSIQXCBL");

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
    msg.setTimeStamp(0.436840838667);
    msg.setSource(60360U);
    msg.setSourceEntity(148U);
    msg.setDestination(5942U);
    msg.setDestinationEntity(119U);
    msg.req_id = 58143U;
    msg.status = 81U;
    msg.text.assign("JAXIEHZVHWPUKVLFPFBHDIGHZCIYXDGYTKYUCJNJMUHYDYIQSPSLFOAPTLJDPWNGPRMSHCFBAXQKMYRTIAEDNRMLVDZGZWWTOLHVFKOURGVEVONIOLZE");

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
    msg.setTimeStamp(0.898899878632);
    msg.setSource(20360U);
    msg.setSourceEntity(247U);
    msg.setDestination(63893U);
    msg.setDestinationEntity(47U);
    msg.req_id = 275U;
    msg.status = 73U;
    msg.text.assign("PWJGVAWGNQKWITDNYHADKILFQTBXKKYPGRSIVXXIKGTPZZCXMHHGSWQXWBYEIUKMEROJRGPFRKHLSNIDVTFYVJNFCWPXXQCZHEUCFWZLAGDYMZLKSILMIKHTIDJSCPDBLZVWSHLVEXOFOEGBRVPKDUUOMFXJMAUBTOPERNTCBMBVIDTJDNAOHLNHUJTYSWQBEFAOPUDAESQAHORNWGLV");

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
    msg.setTimeStamp(0.608465678036);
    msg.setSource(43273U);
    msg.setSourceEntity(218U);
    msg.setDestination(60601U);
    msg.setDestinationEntity(115U);
    msg.group_name.assign("OKKABPAMECTOLCJVGBBFK");
    msg.links = 4058926643U;

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
    msg.setTimeStamp(0.194424602644);
    msg.setSource(58883U);
    msg.setSourceEntity(63U);
    msg.setDestination(65059U);
    msg.setDestinationEntity(66U);
    msg.group_name.assign("WPYOCSVVHXKLHRTMLSJKUJYEYLPAXZGVVHXHGCBTKBIUZAXQDDXIKNPESHDOEHAYVAARMPBJNLNVFDKRLJPEUKPJZJVDGXYWQZJWAZRKXJLBSCOKWWEWMTRYWZNCYYQIZHGKNQSTMERFZFOMHMATOCOCCRIQPCIPQPIPTOGLGCXEBQMEUVAIEDMNUHSOIABXFQJBFMZGRVNDUWWNRLSISQUTGALYXBUDITCFSDVWFR");
    msg.links = 1559943781U;

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
    msg.setTimeStamp(0.91187494944);
    msg.setSource(7128U);
    msg.setSourceEntity(9U);
    msg.setDestination(18148U);
    msg.setDestinationEntity(217U);
    msg.group_name.assign("GASLOOSVLYRULFVCRZZEJNEDRBHTTHR");
    msg.links = 1972932642U;

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
    msg.setTimeStamp(0.881681787425);
    msg.setSource(4883U);
    msg.setSourceEntity(147U);
    msg.setDestination(2304U);
    msg.setDestinationEntity(78U);
    msg.groupname.assign("KTXQCVRJAMUVJTRNIMQQFULXOBAWUOQCIJXIJPVTQOTZEAGCJKMRKMZSMPDRCXDLISZAAJFEGHPRMTJHFVRTTFVLLBOFIUWKQUAPBSYSQOCLEZYPDBXGVQOUABOXLZBPEDGVDWKAUUBHDHNGWVGUKWWLJMIXSIFEZHTGERGINZWBSZCAPGNJRLWECBRYDTCYNYXQDROFFPYWOJBOHCHSITIXVDZFSNYNYKAHNPCKWVEGHL");
    msg.action = 30U;
    msg.grouplist.assign("XRNVYQHROTVMYOJQQZPHQWDZLZWXPDTRBFZANBJOSRHSERHMJMYGLDZVCFOPGAQPAOMTWPZEIVNVKOKGCXXDSQLYTFLWWVAUHLIVUGBECEQOWNJUZGRXITKAZLIUTJUUOYAMFGAFPFTQBLPIOXYNIRBBQMGLXEGFNDZXAMYUJACNDJTCJUMAHRSSKYTBBEUESIEPNISCWSCQFOKENRCVKKRWSXHXBIHKSMJLCDGDWYBFWHDVTCHGKPUJZ");

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
    msg.setTimeStamp(0.262534376595);
    msg.setSource(51957U);
    msg.setSourceEntity(38U);
    msg.setDestination(55005U);
    msg.setDestinationEntity(87U);
    msg.groupname.assign("WURNDNBXYDRCTEXOSVOCGHRFG");
    msg.action = 194U;
    msg.grouplist.assign("YKUKZVHIKCVBGRXNPSTHAKPPOBAYOCBTZYY");

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
    msg.setTimeStamp(0.409280366402);
    msg.setSource(14213U);
    msg.setSourceEntity(120U);
    msg.setDestination(48344U);
    msg.setDestinationEntity(93U);
    msg.groupname.assign("MTNUYQAEORIBYRIVCHZOTWMFPZKBXWUIYCTONPEVKXWVHNLVNJJTPMAEJOMCHDPFVNEAGJLOBJJAYUDSBSLAAFYZBKAGHSEVTQNIWOTBIWOKIODAMWMSLENACQWK");
    msg.action = 240U;
    msg.grouplist.assign("RBIXSVNEMCRHBLUQRMUTLXDKXJWIVFQPS");

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
    msg.setTimeStamp(0.159860365921);
    msg.setSource(1813U);
    msg.setSourceEntity(103U);
    msg.setDestination(22964U);
    msg.setDestinationEntity(198U);
    msg.value = 0.63127896224;
    msg.sys_src = 61809U;

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
    msg.setTimeStamp(0.290984983953);
    msg.setSource(10153U);
    msg.setSourceEntity(166U);
    msg.setDestination(48049U);
    msg.setDestinationEntity(221U);
    msg.value = 0.0774460698754;
    msg.sys_src = 18638U;

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
    msg.setTimeStamp(0.169744835432);
    msg.setSource(32286U);
    msg.setSourceEntity(227U);
    msg.setDestination(19555U);
    msg.setDestinationEntity(248U);
    msg.value = 0.345836370288;
    msg.sys_src = 43678U;

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
    msg.setTimeStamp(0.046786629711);
    msg.setSource(36245U);
    msg.setSourceEntity(176U);
    msg.setDestination(64794U);
    msg.setDestinationEntity(19U);
    msg.value = 0.441962043718;
    msg.units = 82U;

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
    msg.setTimeStamp(0.200280880234);
    msg.setSource(26223U);
    msg.setSourceEntity(179U);
    msg.setDestination(56461U);
    msg.setDestinationEntity(42U);
    msg.value = 0.253511544365;
    msg.units = 218U;

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
    msg.setTimeStamp(0.117707799123);
    msg.setSource(4990U);
    msg.setSourceEntity(4U);
    msg.setDestination(56590U);
    msg.setDestinationEntity(109U);
    msg.value = 0.997076125409;
    msg.units = 172U;

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
    msg.setTimeStamp(0.672915840909);
    msg.setSource(37634U);
    msg.setSourceEntity(226U);
    msg.setDestination(29595U);
    msg.setDestinationEntity(158U);
    msg.base_lat = 0.136173483547;
    msg.base_lon = 0.746914277596;
    msg.base_time = 0.974367858359;

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
    msg.setTimeStamp(0.813149646954);
    msg.setSource(12587U);
    msg.setSourceEntity(129U);
    msg.setDestination(19087U);
    msg.setDestinationEntity(29U);
    msg.base_lat = 0.480538226618;
    msg.base_lon = 0.709295300728;
    msg.base_time = 0.493389555461;
    IMC::RemoteCommand tmp_msg_0;
    tmp_msg_0.original_source = 14908U;
    tmp_msg_0.destination = 183U;
    tmp_msg_0.timeout = 0.529007898665;
    IMC::PolygonVertex tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.618208426921;
    tmp_tmp_msg_0_0.lon = 0.385054318303;
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
    msg.setTimeStamp(0.299871311278);
    msg.setSource(15530U);
    msg.setSourceEntity(160U);
    msg.setDestination(18297U);
    msg.setDestinationEntity(147U);
    msg.base_lat = 0.966626706797;
    msg.base_lon = 0.197701045456;
    msg.base_time = 0.387705006978;
    IMC::HistoricSample tmp_msg_0;
    tmp_msg_0.sys_id = 20238U;
    tmp_msg_0.priority = -28;
    tmp_msg_0.x = -9197;
    tmp_msg_0.y = 30789;
    tmp_msg_0.z = 11688;
    tmp_msg_0.t = 16640;
    IMC::LowLevelControl tmp_tmp_msg_0_0;
    IMC::DesiredSpeed tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.value = 0.555101736455;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 208U;
    tmp_tmp_msg_0_0.control.set(tmp_tmp_tmp_msg_0_0_0);
    tmp_tmp_msg_0_0.duration = 826U;
    tmp_tmp_msg_0_0.custom.assign("EIFFCHMBMKRJEZGDFMUZNNEKZADVXPTLONQPOZJVCIAAPOCPERFSGOKMSIULVWBKDLRTEFUUYLXJCRYZLMGJPMDTHSJCKVAHTSAZRWEICXKSGBWVPTXNFWCIHMVDHSUKEZUSQSQFACXNOBYAQJRDUDGPGUYXBYKSITHFQALTNVQJRBWHN");
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
    msg.setTimeStamp(0.373572803679);
    msg.setSource(21270U);
    msg.setSourceEntity(75U);
    msg.setDestination(43098U);
    msg.setDestinationEntity(92U);
    msg.base_lat = 0.553260030101;
    msg.base_lon = 0.930540739051;
    msg.base_time = 0.0224348053971;
    const char tmp_msg_0[] = {124, 118, 108, -107, 10, 50, 92, 97, 107, 3, -124, -128, -68, -99, -101, -98, -57, -80, -67, -38, 27, 103, 124, -117, -54, -60, -47, 20, -31, 74, -35, -77, -87, 49, 110, -122, 12, -118, -2, -37, 81, -28, -98, 77, 116, 54, -98, -53, 38, -80, -125, 116, -93, 100, 91, -71, 64, 125, 20, 7, -16, -32, 42, 102, -51, 63, -49, 96, -41, 78, -32, -45, -108, -103, 38, -47, -56, -65, 40, 11, -77, 119, 72, 115, 62, 93, 34, -108, -17, 125, 9, 124, -37, -98, 67, -60, 58, 9, 47, 18, -36, -59, 43, -18, 36, 95, 4, -16, -84, -59, 76, -76, 40, -71, 3, -89, 6, 63, -117, -94, -98, -56, 90, -66, -57, -58, 20, -63, 21, 39, -19, 35, -96, -77, -7, 102, -69, 12, -7, -46, -55, 117, -46, 114, 31, 36, 121, 24, 104, -49, 103, -5, 43, -101, -5, 17, -121, -126, -55, -38, 113, -69, -78, 78, -110, 19, 6};
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
    msg.setTimeStamp(0.805992079867);
    msg.setSource(2144U);
    msg.setSourceEntity(113U);
    msg.setDestination(46423U);
    msg.setDestinationEntity(18U);
    msg.base_lat = 0.771837032929;
    msg.base_lon = 0.617483872016;
    msg.base_time = 0.103119483911;
    const char tmp_msg_0[] = {47, 117, 125, -54, -97, -43, -19, -48, -44, -99, -117, -14, -37, -98, 7, -107, -118, 5, -43, 74, -32, 120, -114, 78, 24, -34, -60, 106, -20, -4, 50, -47, -56, -91, -59, 24, 112, -119, -46, -125, -117, -29, 119, 93, 63, 75, -28, -1, 95, -124, 73, -97, 12, 2, 3, -61, -59, -29, -80, -27, -10, 48, 116, 44, -63, 13, -68, 26, -67, 42, -121, 33, 103, -108, 95, -121, -48, -88, -52, -20, 53, 42, -13};
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
    msg.setTimeStamp(0.803290303578);
    msg.setSource(40307U);
    msg.setSourceEntity(194U);
    msg.setDestination(65183U);
    msg.setDestinationEntity(142U);
    msg.base_lat = 0.821463833498;
    msg.base_lon = 0.610095553364;
    msg.base_time = 0.778251166503;
    const char tmp_msg_0[] = {39, 12, 32, -66, 91, -46, -102, -16, -12, 97, -120, -19, 40, 51, -64, -45, 84, 54, -27, 97, -54, 26, 108, -12, -104, -32, 105, -42, 31, 63, -64, 68, 47, -45, 61, 100, -122, -121, -99, -80, 35, -48, -98, 45, -54, 115, 37, -32, 62, 94, 43, 91, 72, 106, -73, 61, -58, -111, 46, 27, 74, 61, -54, 54, -92, 62, 55, -32, 71, 70, -28, -21, 58, 84, -36, -128, -116, -61, 106, -72, -119, 79, -54, 97, -7, -15, 39, 116, 84, 110, 124, -60, -7, 91, -73, 78, -43, 14, -12, 14, 68, -55, -8, 32, 4, 93, -78, 58, -13, 88, -123, -83, 92, -75, -118, 82, -80, 93, 102, 84, 19};
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
    msg.setTimeStamp(0.72107847283);
    msg.setSource(41823U);
    msg.setSourceEntity(99U);
    msg.setDestination(64627U);
    msg.setDestinationEntity(130U);
    msg.sys_id = 56562U;
    msg.priority = -18;
    msg.x = 28085;
    msg.y = 9452;
    msg.z = 31980;
    msg.t = 2858;
    IMC::SmsState tmp_msg_0;
    tmp_msg_0.seq = 1433439013U;
    tmp_msg_0.state = 47U;
    tmp_msg_0.error.assign("FRHFXMNOWRKDP");
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
    msg.setTimeStamp(0.90054804648);
    msg.setSource(35734U);
    msg.setSourceEntity(4U);
    msg.setDestination(10355U);
    msg.setDestinationEntity(65U);
    msg.sys_id = 13774U;
    msg.priority = -6;
    msg.x = -15275;
    msg.y = -7055;
    msg.z = -28439;
    msg.t = 3505;
    IMC::AcousticMessage tmp_msg_0;
    IMC::LedBrightness tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("ZTJCTYXUTRRTFAMSYDJQYPYIHOAUVXBVHMVVULUAQROFMUICYURFANXNFGLESUGSKWNLDHJFMQEQKOQEYRAYDMBIZQJQUNRLXDDTCJXOYDETJSMPPNKLNVHBACCPJCAHKLWGPNZWEKGJIQHWGCTOBSKOHZER");
    tmp_tmp_msg_0_0.value = 27U;
    tmp_msg_0.message.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.708221291817);
    msg.setSource(55373U);
    msg.setSourceEntity(113U);
    msg.setDestination(28942U);
    msg.setDestinationEntity(99U);
    msg.sys_id = 7988U;
    msg.priority = -63;
    msg.x = -19030;
    msg.y = -196;
    msg.z = -2678;
    msg.t = -21585;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.558324221519;
    tmp_msg_0.y = 0.678447632103;
    tmp_msg_0.z = 0.4033281948;
    tmp_msg_0.t = 0.249933565533;
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
    msg.setTimeStamp(0.215303518942);
    msg.setSource(42259U);
    msg.setSourceEntity(170U);
    msg.setDestination(14280U);
    msg.setDestinationEntity(111U);
    msg.req_id = 18728U;
    msg.type = 145U;
    msg.max_size = 29241U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.257997486479;
    tmp_msg_0.base_lon = 0.091021839132;
    tmp_msg_0.base_time = 0.945782664816;
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
    msg.setTimeStamp(0.388194909968);
    msg.setSource(48606U);
    msg.setSourceEntity(212U);
    msg.setDestination(7148U);
    msg.setDestinationEntity(226U);
    msg.req_id = 17813U;
    msg.type = 47U;
    msg.max_size = 39776U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.981682942092;
    tmp_msg_0.base_lon = 0.0509150544382;
    tmp_msg_0.base_time = 0.389874907707;
    IMC::HistoricSample tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.sys_id = 46885U;
    tmp_tmp_msg_0_0.priority = -115;
    tmp_tmp_msg_0_0.x = -11180;
    tmp_tmp_msg_0_0.y = 2255;
    tmp_tmp_msg_0_0.z = -11797;
    tmp_tmp_msg_0_0.t = 10335;
    IMC::ScienceSensors tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.adcp = -97;
    tmp_tmp_tmp_msg_0_0_0.adcp_dur = 1265307650U;
    tmp_tmp_tmp_msg_0_0_0.adcp_fr = 516360933U;
    tmp_tmp_tmp_msg_0_0_0.ctd = 9;
    tmp_tmp_tmp_msg_0_0_0.ctd_dur = 2424353055U;
    tmp_tmp_tmp_msg_0_0_0.ctd_fr = 3523765606U;
    tmp_tmp_tmp_msg_0_0_0.opt = -40;
    tmp_tmp_tmp_msg_0_0_0.opt_dur = 518438000U;
    tmp_tmp_tmp_msg_0_0_0.opt_fr = 2009046325U;
    tmp_tmp_tmp_msg_0_0_0.tbl = 1;
    tmp_tmp_tmp_msg_0_0_0.tbl_dur = 1814915370U;
    tmp_tmp_tmp_msg_0_0_0.tbl_fr = 3212237711U;
    tmp_tmp_tmp_msg_0_0_0.eco = 112;
    tmp_tmp_tmp_msg_0_0_0.eco_dur = 583694688U;
    tmp_tmp_tmp_msg_0_0_0.eco_fr = 2256270601U;
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
    msg.setTimeStamp(0.0157637758173);
    msg.setSource(38652U);
    msg.setSourceEntity(155U);
    msg.setDestination(10031U);
    msg.setDestinationEntity(40U);
    msg.req_id = 14109U;
    msg.type = 115U;
    msg.max_size = 54312U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.575639523578;
    tmp_msg_0.base_lon = 0.446959386236;
    tmp_msg_0.base_time = 0.844002259839;
    IMC::RemoteCommand tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.original_source = 6926U;
    tmp_tmp_msg_0_0.destination = 29671U;
    tmp_tmp_msg_0_0.timeout = 0.268327940922;
    IMC::SessionKeepAlive tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.sessid = 2164769284U;
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
    msg.setTimeStamp(0.865752849581);
    msg.setSource(2180U);
    msg.setSourceEntity(245U);
    msg.setDestination(38053U);
    msg.setDestinationEntity(26U);
    msg.original_source = 18390U;
    msg.destination = 3431U;
    msg.timeout = 0.331201065277;
    IMC::ExtendedRSSI tmp_msg_0;
    tmp_msg_0.value = 0.920604142454;
    tmp_msg_0.units = 38U;
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
    msg.setTimeStamp(0.998557780473);
    msg.setSource(63036U);
    msg.setSourceEntity(196U);
    msg.setDestination(64103U);
    msg.setDestinationEntity(253U);
    msg.original_source = 6554U;
    msg.destination = 20396U;
    msg.timeout = 0.200462762432;
    IMC::Formation tmp_msg_0;
    tmp_msg_0.formation_name.assign("WQEKRFJYNDONDXUAMHWQCRMAWBDCQIOAXFTZGJQJODPWNCDBTYXCVXRGLKNLSBAKVITEUEKSAZGYRTPXJSMHZOEGLSLHCRDEZJFRASZOJGNAANMVPBWJFLUUEFFTYYHQRMBUGH");
    tmp_msg_0.type = 121U;
    tmp_msg_0.op = 167U;
    tmp_msg_0.group_name.assign("ZAAHBETIPLRDDDPULMXAUHTJBKOQHJSHRELWQZUAJCZTLOONEKMGVRSNXBOEXUJOYHIICXVXFCCINALZDYKQPPJNFSIK");
    tmp_msg_0.plan_id.assign("HEHGXXYAXLIDQWKUMIVVOWMLDCGGOMQFFJZPBUYDNWATTOZSWZELOMEIREKNFJHISJBFPSLZPMBNKXXVTQNCOHNGJOCGLRPYRUDYITJCHMAHYXVRSGUQOATJNERMZF");
    tmp_msg_0.description.assign("BGIKJIEXLJTEVZSKANRVPZQLMOCIZMJQQNHHAODLBXBYFZOGUTSGYSHJFWNFROOCCUUPNPVFRABJXQKACYMOT");
    tmp_msg_0.reference_frame = 242U;
    IMC::VehicleFormationParticipant tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.vid = 37683U;
    tmp_tmp_msg_0_0.off_x = 0.56588178285;
    tmp_tmp_msg_0_0.off_y = 0.709457340117;
    tmp_tmp_msg_0_0.off_z = 0.337760384476;
    tmp_msg_0.participants.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.leader_bank_lim = 0.644242327978;
    tmp_msg_0.leader_speed_min = 0.289971033118;
    tmp_msg_0.leader_speed_max = 0.0968996940874;
    tmp_msg_0.leader_alt_min = 0.255625236086;
    tmp_msg_0.leader_alt_max = 0.665324875166;
    tmp_msg_0.pos_sim_err_lim = 0.620484421813;
    tmp_msg_0.pos_sim_err_wrn = 0.587377002876;
    tmp_msg_0.pos_sim_err_timeout = 62717U;
    tmp_msg_0.converg_max = 0.685412528454;
    tmp_msg_0.converg_timeout = 43151U;
    tmp_msg_0.comms_timeout = 8847U;
    tmp_msg_0.turb_lim = 0.722990776645;
    tmp_msg_0.custom.assign("NLJWARGTSTMSSMKGTGLMTPDIHXSFDUAYTUVKQUOHRJXADOBYKNJTPDNDMYAEWNEXBNUWVIIOVUDVEEGJITRCKEVEODIXZHFEYNLAFCZOWPQZEKRISAQTLFSIWKJWOMUJRMHWXM");
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
    msg.setTimeStamp(0.92773248907);
    msg.setSource(63930U);
    msg.setSourceEntity(198U);
    msg.setDestination(18019U);
    msg.setDestinationEntity(226U);
    msg.original_source = 14619U;
    msg.destination = 23760U;
    msg.timeout = 0.130039882635;
    IMC::PlanControlState tmp_msg_0;
    tmp_msg_0.state = 149U;
    tmp_msg_0.plan_id.assign("AZTXLFQFYBULXXFTMLKTCDMNTCJAKKTQACBRJZDRWORGCOWPWVZJSDJJGEHRRAUEJWNFQJEOMHBYJVQBBINUEP");
    tmp_msg_0.plan_eta = -1184978392;
    tmp_msg_0.plan_progress = 0.205844176456;
    tmp_msg_0.man_id.assign("ACLRECZRZAUWKCJPWYOCUHOVGNLBUFBHMOZSDNZQTLMVKWMGBLMFJTGDOTKMOHQIUCQJAXYFZTZSKCNRKLWIVQBVHYACSXJAIGEZOGPTE");
    tmp_msg_0.man_type = 16271U;
    tmp_msg_0.man_eta = 187030323;
    tmp_msg_0.last_outcome = 243U;
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
    msg.setTimeStamp(0.155805118787);
    msg.setSource(27081U);
    msg.setSourceEntity(241U);
    msg.setDestination(38359U);
    msg.setDestinationEntity(208U);
    msg.type = 122U;
    msg.comm_interface = 62869U;
    msg.model = 37569U;
    msg.list.assign("SBOINJKMQLYFKNJZZATVSAKINRQPQXYADLMVPRWHILZXXDYKZBJDBWWTZLGONJHKHSUKXIWSMUYGXOKXFCEFXAEWTVIWNHQCHJSLYMBVQPHFQRAFOYMDEUTUHJDCUCESKRYURMHCPDCSGUFDQTCBSWWMNPGCRVB");

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
    msg.setTimeStamp(0.558878771503);
    msg.setSource(14932U);
    msg.setSourceEntity(206U);
    msg.setDestination(12510U);
    msg.setDestinationEntity(56U);
    msg.type = 176U;
    msg.comm_interface = 9909U;
    msg.model = 257U;
    msg.list.assign("QQSNSEWCLPGTTVOORWXMDBUEAVULYZRFUIYNAOKWEQAUMBZEIDTZUWOZCCWSCPENODZYFGVCHSUZOMBUKEZXFYBRKLQLARLSTTKYDHDLYFIBKUJGLRHTWAAJVRFKYOXAWMBRCLISCKGTNNJYJISHXXXFKX");

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
    msg.setTimeStamp(0.742710463861);
    msg.setSource(19076U);
    msg.setSourceEntity(22U);
    msg.setDestination(57224U);
    msg.setDestinationEntity(6U);
    msg.type = 88U;
    msg.comm_interface = 58591U;
    msg.model = 3613U;
    msg.list.assign("JSCCYVZCPADGPWZZXGOIWURKPOKACFBGOKNOKSMMBYHIQFVEJRQORKVZKAFFCQYMXJROZHLWVOHGHVXE");

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
    msg.setTimeStamp(0.576544508054);
    msg.setSource(14308U);
    msg.setSourceEntity(44U);
    msg.setDestination(34321U);
    msg.setDestinationEntity(47U);
    msg.type = 196U;
    msg.req_id = 1101883250U;
    msg.ttl = 23674U;
    msg.code = 15U;
    msg.destination.assign("SIBQAXMIQGYWUCOBVHIUFWTZOMCJCQLZOOKNWQTBYPYVGE");
    msg.source.assign("ROVHRNZBEXEPMYZGXPWENUYQBY");
    msg.acknowledge = 33U;
    msg.status = 87U;
    const char tmp_msg_0[] = {-9, 55, -125, 52, 122, -29, -100, 0, -60, 74, -90, 63, 44, -5, 117, -120, -67, 60, 45, 71, 68, -44, 49, -37, -19, 101, -43, 25, 7, 86, 12, -46, 91, 24, -80, -33, -17, 30, -128, -91, 97, -107, 50, 92, 60, -43, 89, 52, 37, -6, 68, 30, -23, 16, 30, -116, 70, -117, -50, 99, -53, 121, -78, -1, -100, 98, 27, 122, -6, -40, -3, 78, 59, -20, 27, 12, -8, -23, -89, -117, -80, 17, -80, 57, -32, -78, 0, -36, 90, -118, 87, 21, -89, 12, -125, 39, 52, -108, -48, -108, 119, 96, 84, -22, -33, -103, -32, -6, -74, -106, 111, 19, -85, 83, 103, 49, 111, 120, -52, -58, 124, 32, -20, -107, 60, -11, -85, -75, 26};
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
    msg.setTimeStamp(0.121609321493);
    msg.setSource(16491U);
    msg.setSourceEntity(117U);
    msg.setDestination(53559U);
    msg.setDestinationEntity(169U);
    msg.type = 245U;
    msg.req_id = 1134463124U;
    msg.ttl = 43042U;
    msg.code = 49U;
    msg.destination.assign("WZIUUKYMJBJSDOQUWYGPGGQXABQNDAUHRAGQHKYTIIAKABZPDITJCQNFOYDBSTVWHHWYSGPUIGYDKVGSTLFLPTMFTEUXVBQBZEFSGMXRKEOLMZNXEGYZFCUVBLKZDACHXFMJBEWLLSKRVVCAIZPXTOTCUXOFSPOAN");
    msg.source.assign("WFKZYCAOBNMEQJYSRQRGGHWHILTVLQOWOXCUCSGPRZQAFFGXPMHOVDIKCISTTVXMELMSPRHPYVSNXAAHKDJTMUFOLWYBFAZMCFNBHQSSNDKSREFMRIQFUC");
    msg.acknowledge = 76U;
    msg.status = 86U;
    const char tmp_msg_0[] = {116, 94, -115, -117, 19, 37, -89, 44, -59, -117, -49, -69, 84, -90, -67, -113, 57, 98, 1, 6, 126, -67, -71, 123, -58, -27, 22, 12, -7, 43, -63, -68, 16, 87, 38, -6, -70, -101, 109, 82, -37, -43, -13, 77, 89, -50, -69, 32, -100, -57, -51, -29, 23, -7, 90, 1, 122, 86, 73, -10, 77, -60, 52, -118, -90, -42, -78, -3, -111, 5, -14, 38, -9, -32, -76, 101, -25, -37, -75, -44, 117, 82, -26, 41, -17, -33, -10, -45, -82, -43, 39, -112, -84, 80, -22, -83, 120, 18, 102, 117, 2, 119, -83, -77, -3, -93, 85, -97, -51, -124, 29, 67, -127, 36, -66, -56, 103, -61, 92, 53, -73, 69, 6, 106, 73, -95, -53, -33, -90, 79, 101, 109, -10, -34, -31, 121, -84, -37, -35, -70, 1, 115, -25, -40, -89, 66, -46, -123, 77, 78, 26, -37, 87, -99, 47, 100, 9};
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
    msg.setTimeStamp(0.533047669683);
    msg.setSource(35149U);
    msg.setSourceEntity(111U);
    msg.setDestination(50928U);
    msg.setDestinationEntity(166U);
    msg.type = 7U;
    msg.req_id = 3926324138U;
    msg.ttl = 23467U;
    msg.code = 125U;
    msg.destination.assign("QYHKLGLNWQIHXQDLSEUWNYUAJOMJQHJZUJMWCPMMUGCAQAXASKMAPBBUDQFTLLRXULNPRSGFZFQYDBQDPQIECHWETJWXMXZVTIZEMCNLEKOGHIOTJCBZRTCEWXXGSPRVVVPIZHCTMXKSREUYIFOSSKULKNBRKLOIYQVNHGWZDOEVDITRVANXXJYBDECHWJPWUZ");
    msg.source.assign("QGGCANVLKMVSLHYIHYUQKKOXPWOTDXUEC");
    msg.acknowledge = 170U;
    msg.status = 206U;
    const char tmp_msg_0[] = {-71, 11, -112, 120, -33, 89, 54, -97, -16, 30, 89, 38, 95, 14, -76, 76, -89, -109, 59, -8, -40, -91, -4, 54, -73, -8, -109, -109, 125, 7, 62, -115, -11, -4, 72, -9, 40, -55, 24, -74, 77, -33, 75, 96, 45, 91, -110, 121, -10, 75, 66, -13, -61, 62, 34, 57, 77, 10, -78, 64, 113, -123, 9};
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
    msg.setTimeStamp(0.866356159964);
    msg.setSource(17249U);
    msg.setSourceEntity(90U);
    msg.setDestination(39006U);
    msg.setDestinationEntity(127U);
    msg.id = 17U;
    msg.range = 0.350426931914;

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
    msg.setTimeStamp(0.181565818572);
    msg.setSource(53740U);
    msg.setSourceEntity(72U);
    msg.setDestination(20865U);
    msg.setDestinationEntity(121U);
    msg.id = 34U;
    msg.range = 0.0849964572292;

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
    msg.setTimeStamp(0.482233979661);
    msg.setSource(29630U);
    msg.setSourceEntity(21U);
    msg.setDestination(21918U);
    msg.setDestinationEntity(60U);
    msg.id = 53U;
    msg.range = 0.297198653926;

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
    msg.setTimeStamp(0.826636530362);
    msg.setSource(46500U);
    msg.setSourceEntity(32U);
    msg.setDestination(63770U);
    msg.setDestinationEntity(88U);
    msg.beacon.assign("NRZONCZIZAQMJRANUTRKZXKDNTYSZWLRUANIXQHENUZJWFCPVBGNEEHKDHTIVTMAYRYDCYUEDTOWHUZFBPXDWVBAAFVSQXPPDTZSUWYYKTISVKCLXSCCPLBMXSFDAQXHFLEYQWGFGRJNALCKTOOEWOOMBLGRSFVWBOSPALWDIFRCJBQMUZXHJVEUYULRPLIYOGKGZGEJIEFKPQYHTQVJDGVBNBIMSMGB");
    msg.lat = 0.539462337682;
    msg.lon = 0.37060707219;
    msg.depth = 0.127860523223;
    msg.query_channel = 106U;
    msg.reply_channel = 168U;
    msg.transponder_delay = 107U;

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
    msg.setTimeStamp(0.797420150981);
    msg.setSource(2890U);
    msg.setSourceEntity(157U);
    msg.setDestination(39655U);
    msg.setDestinationEntity(228U);
    msg.beacon.assign("HVVWRNUXFTTTQPGESYE");
    msg.lat = 0.480592643203;
    msg.lon = 0.64875792498;
    msg.depth = 0.0308499515056;
    msg.query_channel = 181U;
    msg.reply_channel = 90U;
    msg.transponder_delay = 67U;

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
    msg.setTimeStamp(0.649881064288);
    msg.setSource(34961U);
    msg.setSourceEntity(229U);
    msg.setDestination(3321U);
    msg.setDestinationEntity(88U);
    msg.beacon.assign("WZEPQXMJLATHBQURTSDIIEJNKF");
    msg.lat = 0.0738628463726;
    msg.lon = 0.909258968064;
    msg.depth = 0.958302578071;
    msg.query_channel = 124U;
    msg.reply_channel = 229U;
    msg.transponder_delay = 9U;

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
    msg.setTimeStamp(0.530243590115);
    msg.setSource(61173U);
    msg.setSourceEntity(138U);
    msg.setDestination(50314U);
    msg.setDestinationEntity(41U);
    msg.op = 195U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("QZGYAIIKORPVGROJHGBBEDEHACCKVFLYECMWUMMBDTMQJWTPCTOQWEAESDROILODGSWZWMSLLCYLKJXXWDCWUTLEF");
    tmp_msg_0.lat = 0.0329943189722;
    tmp_msg_0.lon = 0.56639318373;
    tmp_msg_0.depth = 0.560126615061;
    tmp_msg_0.query_channel = 62U;
    tmp_msg_0.reply_channel = 66U;
    tmp_msg_0.transponder_delay = 206U;
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
    msg.setTimeStamp(0.635455140087);
    msg.setSource(21149U);
    msg.setSourceEntity(92U);
    msg.setDestination(36857U);
    msg.setDestinationEntity(88U);
    msg.op = 119U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("YYCYKMRQDKFZIQIYHZWJSHCARXGTXXBZVJULKMGCFCVRKMXHBECFIBDYSBJPVNMOXBGGVDDEQASFCMIETRAGUULVWYTHGLMABFHPPACVWHNXTOBRQTFMSPLQIVMULJAZNWWZIAPJLJMUNHLHTRWZCQYAICRPKZHFJXNXDIJNDNOXUVWWBDWUGWQEVTEKDKIJFEEPZAFVEOR");
    tmp_msg_0.lat = 0.75064294894;
    tmp_msg_0.lon = 0.0821499987277;
    tmp_msg_0.depth = 0.942584424809;
    tmp_msg_0.query_channel = 74U;
    tmp_msg_0.reply_channel = 54U;
    tmp_msg_0.transponder_delay = 114U;
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
    msg.setTimeStamp(0.915192840412);
    msg.setSource(36981U);
    msg.setSourceEntity(162U);
    msg.setDestination(8655U);
    msg.setDestinationEntity(137U);
    msg.op = 193U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("SGOWJMMCBWTOXXDEVCEHCLFHKXPGJFKQATZTUPHLYPIYVZYOTZRVBUKIYOXDVOBVBINJDQCLRADSSOPIGYAQPXYDLPLDASWZIZHKHLUNEEAUSYEXWJCJNZJQRWEQZRQETBCJINRBTYJNHSXQBWKCFSRZUUKMKPBVSTMUNANHVMQFGFGVKVAMFOXORLYDAOAWBITLGNIJPFPMCUFMQHCQWSERLUJZVRGFE");
    tmp_msg_0.lat = 0.241529215036;
    tmp_msg_0.lon = 0.310245804799;
    tmp_msg_0.depth = 0.154535351797;
    tmp_msg_0.query_channel = 226U;
    tmp_msg_0.reply_channel = 194U;
    tmp_msg_0.transponder_delay = 201U;
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
    msg.setTimeStamp(0.534076890182);
    msg.setSource(48294U);
    msg.setSourceEntity(105U);
    msg.setDestination(25044U);
    msg.setDestinationEntity(203U);
    IMC::DesiredLinearState tmp_msg_0;
    tmp_msg_0.x = 0.884774617029;
    tmp_msg_0.y = 0.383609613426;
    tmp_msg_0.z = 0.313760687992;
    tmp_msg_0.vx = 0.894566272623;
    tmp_msg_0.vy = 0.427364476004;
    tmp_msg_0.vz = 0.834002534167;
    tmp_msg_0.ax = 0.429023255472;
    tmp_msg_0.ay = 0.523399060393;
    tmp_msg_0.az = 0.724368030635;
    tmp_msg_0.flags = 60959U;
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
    msg.setTimeStamp(0.144335153049);
    msg.setSource(60356U);
    msg.setSourceEntity(101U);
    msg.setDestination(31319U);
    msg.setDestinationEntity(31U);
    IMC::IridiumTxStatus tmp_msg_0;
    tmp_msg_0.req_id = 15126U;
    tmp_msg_0.status = 62U;
    tmp_msg_0.text.assign("DGIKWDRKUDOSGOFGVKHICZAEBFRSYAULRKCFZBENZTFQJMXDXRKGBWLIJLJDIAQXUQPFBVTHETNPGSVNJTNZMZTTCPVXIKMOVLDJQYWYYCYKWUSSSEHIZTQVBEERKAEDMSZJLBEUOHHWFGVDZXWVHFXTLAXUAAHQBURVKCQWAZVLPPGOJRCILRQC");
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
    msg.setTimeStamp(0.259373829168);
    msg.setSource(36773U);
    msg.setSourceEntity(237U);
    msg.setDestination(43254U);
    msg.setDestinationEntity(246U);
    IMC::SimulatedState tmp_msg_0;
    tmp_msg_0.lat = 0.287538562817;
    tmp_msg_0.lon = 0.998313693158;
    tmp_msg_0.height = 0.31861655226;
    tmp_msg_0.x = 0.363431074019;
    tmp_msg_0.y = 0.468146634877;
    tmp_msg_0.z = 0.226720435346;
    tmp_msg_0.phi = 0.620915133881;
    tmp_msg_0.theta = 0.363574945685;
    tmp_msg_0.psi = 0.090049761787;
    tmp_msg_0.u = 0.8675202686;
    tmp_msg_0.v = 0.297674862426;
    tmp_msg_0.w = 0.854310369801;
    tmp_msg_0.p = 0.337342494058;
    tmp_msg_0.q = 0.760159233036;
    tmp_msg_0.r = 0.123831762136;
    tmp_msg_0.svx = 0.709643350431;
    tmp_msg_0.svy = 0.604451918033;
    tmp_msg_0.svz = 0.623258321137;
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
    msg.setTimeStamp(0.81845517488);
    msg.setSource(24775U);
    msg.setSourceEntity(193U);
    msg.setDestination(20884U);
    msg.setDestinationEntity(85U);
    msg.op = 124U;
    msg.system.assign("RQRVPYPRFAHSEAFBZQUXJDQLDZRDHJXFSJXUSNWKNVCVBULQIWMCYBHCANWODYENCMOXAYTFGCQTYGZAQNXRTDWEXWPKZIOIRVGLQBCTFGKTLWKAEHJDODUFAGILXNFPOUMSGTEBKPZJRUTBUYJZYZPCMRUTLKBPCBOMJHIQEMOHQHNSARSGLYZAIVWIKSZCMLWDVEERKKUJDOMNGJWKNTLBGIPVMFVXHTCHBMVSFHSXQPFJWIPAUSDL");
    msg.range = 0.56121332872;
    IMC::AbsoluteWind tmp_msg_0;
    tmp_msg_0.dir = 0.215254580569;
    tmp_msg_0.speed = 0.867561909428;
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
    msg.setTimeStamp(0.76165255703);
    msg.setSource(28468U);
    msg.setSourceEntity(106U);
    msg.setDestination(44377U);
    msg.setDestinationEntity(166U);
    msg.op = 193U;
    msg.system.assign("OKQUGBZFVKWMAYNZVNBWCFZUKRXALAYWABGPHAXYFJIDYYCAESLEQSZMEIBZCJPSOBMPVBPFERNZJCFDLGIYKAKIRPXUYZKXCVYOJMUUGBWOTSMIWNDNRPPLHTFJNMEGGJLGJNCZHOXVUYGKTYBQCUSBRSIODJPXQVCIAOISIBTRSMEXEFMEEVFRKJMLOTQSHVQTFUGSQVJZLDMHEQWTLXNHUC");
    msg.range = 0.694369462599;
    IMC::DesiredVelocity tmp_msg_0;
    tmp_msg_0.u = 0.112994723669;
    tmp_msg_0.v = 0.415547705856;
    tmp_msg_0.w = 0.249579772937;
    tmp_msg_0.p = 0.219278454424;
    tmp_msg_0.q = 0.115704604945;
    tmp_msg_0.r = 0.272114832946;
    tmp_msg_0.flags = 51U;
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
    msg.setTimeStamp(0.00737623788276);
    msg.setSource(50162U);
    msg.setSourceEntity(231U);
    msg.setDestination(39996U);
    msg.setDestinationEntity(99U);
    msg.op = 92U;
    msg.system.assign("YEBUIUZEHUTEVTNJMBIDWQNEIPMONOSLJCYLBUCQALTHJUGLMBPKSYHYNVYRXWXVIHPMBVAAWFCOKNKLDCUTQXGMGEBWSKYPLHTHINDGUZNEGQOJOYOEIGOCDRZXXIWYXVDJZQBJFEABRVPUUCUVAVXNGLMKSCWCZQW");
    msg.range = 0.244992310246;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.0360131554308;
    tmp_msg_0.base_lon = 0.573157954319;
    tmp_msg_0.base_time = 0.168791765273;
    IMC::HistoricSample tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.sys_id = 56070U;
    tmp_tmp_msg_0_0.priority = -109;
    tmp_tmp_msg_0_0.x = 16481;
    tmp_tmp_msg_0_0.y = -18016;
    tmp_tmp_msg_0_0.z = 8175;
    tmp_tmp_msg_0_0.t = -17153;
    IMC::PathPoint tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.x = 0.904540267626;
    tmp_tmp_tmp_msg_0_0_0.y = 0.221483271964;
    tmp_tmp_tmp_msg_0_0_0.z = 0.863669850001;
    tmp_tmp_msg_0_0.sample.set(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.data.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.716631020269);
    msg.setSource(10822U);
    msg.setSourceEntity(14U);
    msg.setDestination(53408U);
    msg.setDestinationEntity(47U);

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
    msg.setTimeStamp(0.789051444889);
    msg.setSource(16482U);
    msg.setSourceEntity(202U);
    msg.setDestination(24393U);
    msg.setDestinationEntity(203U);

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
    msg.setTimeStamp(0.88541064567);
    msg.setSource(5894U);
    msg.setSourceEntity(55U);
    msg.setDestination(14692U);
    msg.setDestinationEntity(115U);

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
    msg.setTimeStamp(0.860081974105);
    msg.setSource(24112U);
    msg.setSourceEntity(117U);
    msg.setDestination(20627U);
    msg.setDestinationEntity(212U);
    msg.list.assign("EHIIRBTNQGMWKBVURWCRMJYWGXTTWQHVJPLUSMYZGPKLPVFZLKFZDZKNXBVSOFIOWATMGFLFEKLSRKGZDNVGOEMCROGOOSNXDQAFNWARLXCYNASPRYUUSDTMVQQLAERXAYUULMEYBWEF");

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
    msg.setTimeStamp(0.612577184689);
    msg.setSource(2816U);
    msg.setSourceEntity(230U);
    msg.setDestination(35791U);
    msg.setDestinationEntity(44U);
    msg.list.assign("VCFWVNYOSMMVDVHOQRPQNHBSINPOZTANJGBEDFAIIAXSEDXUQHJLEBWQAIQYRRSFSTXAGWDHQJQYDJXSNFRWKLZPYOTJBPFBHKSQGMKIFYBHZRMLEGUPSFIGZWDPDLPIXBGOKCXXJCNWCRYLCFUCEJTJMOTFKXEUMZHVPEUICOTOZK");

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
    msg.setTimeStamp(0.761786955092);
    msg.setSource(1580U);
    msg.setSourceEntity(94U);
    msg.setDestination(5922U);
    msg.setDestinationEntity(17U);
    msg.list.assign("UHVFGTHWDUVILMVDHUBUTPCCGDZOESLCVWOMQKIJYQZAKFWDBAEZUXYJWOPFRWFPBRGSFQQYJTNNWEGLEXZAAVEYTYGSSKXGPXOQDOCBMQZQSAHLFMGHZESRXLDSMLKBBJCRSZXMKTDRKONNIXYOT");

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
    msg.setTimeStamp(0.508188596308);
    msg.setSource(60148U);
    msg.setSourceEntity(48U);
    msg.setDestination(58381U);
    msg.setDestinationEntity(154U);
    msg.peer.assign("TECYJLRMKRFEUIVJHMXYHUBEACFOAKWGZMQXFVPC");
    msg.rssi = 0.603613498554;
    msg.integrity = 53479U;

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
    msg.setTimeStamp(0.824311975275);
    msg.setSource(61894U);
    msg.setSourceEntity(244U);
    msg.setDestination(63281U);
    msg.setDestinationEntity(2U);
    msg.peer.assign("WWPHOQUMHRBSMZVVRHSLDAQAYWAAMNVIJGRTJMCCTEWOBKBJCUZFHRHFYNAJUWKZKPFGVSMCTZXNQLBKNNZSEMWJHDV");
    msg.rssi = 0.572288007617;
    msg.integrity = 29118U;

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
    msg.setTimeStamp(0.259034827796);
    msg.setSource(52497U);
    msg.setSourceEntity(125U);
    msg.setDestination(32508U);
    msg.setDestinationEntity(110U);
    msg.peer.assign("HDFYOEWCFFXDLBZSQWQXV");
    msg.rssi = 0.455314944568;
    msg.integrity = 45224U;

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
    msg.setTimeStamp(0.461041528225);
    msg.setSource(60879U);
    msg.setSourceEntity(21U);
    msg.setDestination(46058U);
    msg.setDestinationEntity(136U);
    msg.req_id = 39369U;
    msg.destination.assign("WBRVWDMWGWLNVPYKVWLCZSTHBYE");
    msg.timeout = 0.671323878982;
    msg.range = 0.739690624778;
    msg.type = 90U;
    IMC::SetEntityParameters tmp_msg_0;
    tmp_msg_0.name.assign("YHTCWCGKYFORMUEVNILBYORNSTAUDTTDPPESWPIBREOTZZCSAXUJVIAXAYBNIDLSVUQFNWHAKGFKXNJXSREEJXXFJKYOKNZBDUILWCFKIWQVOWNBMHEJYBFQVDHTHQJSIUEWZDR");
    IMC::EntityParameter tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("VHDNUDJZHUCPVJMXAIFAQOXTRCFPE");
    tmp_tmp_msg_0_0.value.assign("TUCJBBBLEPZYXVPNEVBEZCXYVZJMQQKRXGRKRWMECVRYFSIIMP");
    tmp_msg_0.params.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.782635141906);
    msg.setSource(13703U);
    msg.setSourceEntity(234U);
    msg.setDestination(56632U);
    msg.setDestinationEntity(237U);
    msg.req_id = 33151U;
    msg.destination.assign("OHRABPHGVLQIUTPTLQHJKKCMAFMLXUNMLJYGUQSVDUNEEWRWCETVZVTMTHHYXYBOUIBYRFHXGJYFKNQBRTWKKLTHGKQEEKYAVOMPFGAOTEWSVQGICJVNFLNCWLSUQDQCNOSOSIDGCBUZKJRKWMKOXBFSEMBIRNPZDXDQIYVWFLBXSTXXBWHSYJLAEHEJCUUZRMEZFGJWCZRFHOPVOPDIPJAZSIRABQDDXPOGRLIMAZGDN");
    msg.timeout = 0.756076430361;
    msg.range = 0.679079228257;
    msg.type = 38U;
    IMC::AcousticMessage tmp_msg_0;
    IMC::GetParametersXml tmp_tmp_msg_0_0;
    tmp_msg_0.message.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.644118947848);
    msg.setSource(39842U);
    msg.setSourceEntity(136U);
    msg.setDestination(54414U);
    msg.setDestinationEntity(29U);
    msg.req_id = 29721U;
    msg.destination.assign("FYZQKYKTSLYKNCXFJCTRSCKALKEEADUWXMPKAFHIPZTZEHDRHPAQRDHDWZFDILOKGSGSVKVROTQSHYPVNKIQLZAGXUODYTBVRJUCYJLAYUJAFGHJPZNHCURXHUENIGBABMCXEWWRJPZCJOQUTHLWJM");
    msg.timeout = 0.345956258248;
    msg.range = 0.339008562074;
    msg.type = 140U;
    IMC::PlanTransition tmp_msg_0;
    tmp_msg_0.source_man.assign("LALUNBPCGLYKLYARQUTUJORNERYTOZKLQHJHKBODNXYKAUMHVUCTMSHPRFQFQWRBZMQXVVANVOCHXZKDIETLHSCHIIZONSQPEZTNWYBMEI");
    tmp_msg_0.dest_man.assign("CJJRXBLUXXYINSAJXQTIELFKXVGKFBISFJCOB");
    tmp_msg_0.conditions.assign("KBRNWEUFNOOLISDCWZLJDMOYSEVBKEQSUPYEFGHURWQIXSENSFUFIWZYKBUOUTXUNQUBBWPSMTPLQKEOERTQKWJJYOHXANPJVWSSGVTD");
    IMC::SmsRx tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.source.assign("JBWTNUVXTDAPOJMRQLGHSBWXVEMOJXBNFHROQRKEBPWDLKFODVVWQZLDHCHFPXMWRATJQGRFTMLZVJXZWFYIKLAYHKWASCRAEUCBLKFHKHERGDQBFYNTNLJGTOUVAMZNNESHMEPKQTDYELFPTIUGSZQSXQNLGDNGVZJOCOHCDCSZFJIWURUOYNXZEHCIGIDUXVUOIKIFBRBGPYCZWSXPA");
    const char tmp_tmp_tmp_msg_0_0_0[] = {-21, 119, -69, 98, -24, 107, 89, -45, 49, 39, 56, -51, -9, 24, -59, 109, -38, 115, 55, -54, -122, -102, 106, 42, -123, -116, -33, 83, -91, -19, -92, 25, -60, 94, -58, 74, -55, 119, 34, 107, 42, -46, -39, 46, 14, -92, 6, -119, -93, 69, -35, 85, -126, -39, -22, 78, -24, -71, 115, 81, 62, -93, 57, 100, -63, 5, 126, 92, -74, -19, 25, 33, 95, -92, 38, -71, 114, -15, 75, -57, 47, -71, -88, -4, 1, 65, 100, -56};
    tmp_tmp_msg_0_0.data.assign(tmp_tmp_tmp_msg_0_0_0, tmp_tmp_tmp_msg_0_0_0 + sizeof(tmp_tmp_tmp_msg_0_0_0));
    tmp_msg_0.actions.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.237788685364);
    msg.setSource(44092U);
    msg.setSourceEntity(215U);
    msg.setDestination(43807U);
    msg.setDestinationEntity(122U);
    msg.req_id = 57401U;
    msg.type = 100U;
    msg.status = 95U;
    msg.info.assign("HDOMIOSGLYCTILYHNHQNECQNXVTRWOLEDYKWRDTJGISFDVLPFAPMZEZGKCPEUCZHTCULYYBZMPBAFEAVQVRQFQDPMGTXMEEQXKWURVGJVNXZUFWXAKBILRSGODTTCDWPXXNWHFAVRXHSIMKKMSOAZPLJZRPWSKFNIOTCKYEAAXFJQIEQBWSUH");
    msg.range = 0.210031239262;

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
    msg.setTimeStamp(0.776039447461);
    msg.setSource(46068U);
    msg.setSourceEntity(239U);
    msg.setDestination(28781U);
    msg.setDestinationEntity(184U);
    msg.req_id = 5647U;
    msg.type = 49U;
    msg.status = 209U;
    msg.info.assign("RLWDQBBRJECFHKGQHYQJKCQYQAFXVDTOPTZOFTVMCJLFCKCNBAHXPONTSNQTPYPIJTETIAWZEVKMPSCFGGPIIKIFJSDLRPAHIOLKUIYNGHPGWKYXAMULXFDJXXZWCBSMIINWLNRUBNJXGERWUBAVMYEBFQENMETLHWLXVSSAYWOZDPOSCUZQNZVNYSMK");
    msg.range = 0.286715597837;

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
    msg.setTimeStamp(0.633377568939);
    msg.setSource(52581U);
    msg.setSourceEntity(247U);
    msg.setDestination(44853U);
    msg.setDestinationEntity(232U);
    msg.req_id = 42655U;
    msg.type = 111U;
    msg.status = 68U;
    msg.info.assign("RZUQLOYVHQEMBIZNCDWWKXXMHGIBAFPCBNQPKVJFLUWUAKBFMFDOENLDTEKEGZUYTEKTVGJCRPEQOQFDAEJJLMIKJLAGWYSEQJEIRGNXCAPFRPWLUFUCYKTUHZJAMWTGIGVWSPNNQLDMROSQSMUNCKHZZLPGZHMXCTDUSTVIBAOATOKSJXWHHPONGVDJLCFYNXSBFYYICIQPTIDYZBBHRUJVYDNLAXSOPXVEMFXZSORXH");
    msg.range = 0.735870059189;

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
    msg.setTimeStamp(0.510616603377);
    msg.setSource(12350U);
    msg.setSourceEntity(124U);
    msg.setDestination(21453U);
    msg.setDestinationEntity(121U);
    msg.value = -28956;

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
    msg.setTimeStamp(0.639849210344);
    msg.setSource(45529U);
    msg.setSourceEntity(168U);
    msg.setDestination(64030U);
    msg.setDestinationEntity(108U);
    msg.value = 7881;

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
    msg.setTimeStamp(0.630644095181);
    msg.setSource(38509U);
    msg.setSourceEntity(52U);
    msg.setDestination(37999U);
    msg.setDestinationEntity(1U);
    msg.value = 13283;

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
    msg.setTimeStamp(0.636937718103);
    msg.setSource(34799U);
    msg.setSourceEntity(131U);
    msg.setDestination(17027U);
    msg.setDestinationEntity(39U);
    msg.value = 0.652343473861;

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
    msg.setTimeStamp(0.824023126736);
    msg.setSource(60146U);
    msg.setSourceEntity(175U);
    msg.setDestination(12020U);
    msg.setDestinationEntity(47U);
    msg.value = 0.0353558149096;

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
    msg.setTimeStamp(0.546967223054);
    msg.setSource(53204U);
    msg.setSourceEntity(19U);
    msg.setDestination(35480U);
    msg.setDestinationEntity(27U);
    msg.value = 0.131209728228;

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
    msg.setTimeStamp(0.26358646744);
    msg.setSource(45335U);
    msg.setSourceEntity(206U);
    msg.setDestination(4427U);
    msg.setDestinationEntity(80U);
    msg.value = 0.319807002809;

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
    msg.setTimeStamp(0.312728254729);
    msg.setSource(3985U);
    msg.setSourceEntity(41U);
    msg.setDestination(40141U);
    msg.setDestinationEntity(47U);
    msg.value = 0.28477459397;

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
    msg.setTimeStamp(0.048917327453);
    msg.setSource(29399U);
    msg.setSourceEntity(154U);
    msg.setDestination(16606U);
    msg.setDestinationEntity(226U);
    msg.value = 0.387616782387;

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
    msg.setTimeStamp(0.0316424763922);
    msg.setSource(62230U);
    msg.setSourceEntity(77U);
    msg.setDestination(8456U);
    msg.setDestinationEntity(54U);
    msg.validity = 1161U;
    msg.type = 96U;
    msg.utc_year = 7161U;
    msg.utc_month = 184U;
    msg.utc_day = 44U;
    msg.utc_time = 0.615656930323;
    msg.lat = 0.927269870708;
    msg.lon = 0.55453331139;
    msg.height = 0.419508370644;
    msg.satellites = 31U;
    msg.cog = 0.362116154809;
    msg.sog = 0.220260933238;
    msg.hdop = 0.938549191707;
    msg.vdop = 0.546900316233;
    msg.hacc = 0.0244027967472;
    msg.vacc = 0.492593935047;

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
    msg.setTimeStamp(0.436549864883);
    msg.setSource(47810U);
    msg.setSourceEntity(209U);
    msg.setDestination(50554U);
    msg.setDestinationEntity(221U);
    msg.validity = 5799U;
    msg.type = 182U;
    msg.utc_year = 7502U;
    msg.utc_month = 162U;
    msg.utc_day = 75U;
    msg.utc_time = 0.782633192547;
    msg.lat = 0.701027065812;
    msg.lon = 0.900419290035;
    msg.height = 0.413269587786;
    msg.satellites = 201U;
    msg.cog = 0.716759582491;
    msg.sog = 0.59601648056;
    msg.hdop = 0.475417694615;
    msg.vdop = 0.13381378302;
    msg.hacc = 0.594244625367;
    msg.vacc = 0.282282893783;

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
    msg.setTimeStamp(0.915473039657);
    msg.setSource(20265U);
    msg.setSourceEntity(33U);
    msg.setDestination(2415U);
    msg.setDestinationEntity(200U);
    msg.validity = 17607U;
    msg.type = 158U;
    msg.utc_year = 35611U;
    msg.utc_month = 63U;
    msg.utc_day = 245U;
    msg.utc_time = 0.276937738198;
    msg.lat = 0.0871877467631;
    msg.lon = 0.564817754588;
    msg.height = 0.769834387461;
    msg.satellites = 40U;
    msg.cog = 0.367098090894;
    msg.sog = 0.325143327727;
    msg.hdop = 0.829619754638;
    msg.vdop = 0.6081759243;
    msg.hacc = 0.380740688128;
    msg.vacc = 0.0410879829849;

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
    msg.setTimeStamp(0.092872840528);
    msg.setSource(15U);
    msg.setSourceEntity(106U);
    msg.setDestination(4651U);
    msg.setDestinationEntity(91U);
    msg.time = 0.00125044246405;
    msg.phi = 0.0889799067738;
    msg.theta = 0.632752849191;
    msg.psi = 0.909695772447;
    msg.psi_magnetic = 0.96657430504;

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
    msg.setTimeStamp(0.859387880216);
    msg.setSource(26954U);
    msg.setSourceEntity(64U);
    msg.setDestination(62247U);
    msg.setDestinationEntity(44U);
    msg.time = 0.88222717407;
    msg.phi = 0.456042293223;
    msg.theta = 0.695800445094;
    msg.psi = 0.164392487187;
    msg.psi_magnetic = 0.929036400575;

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
    msg.setTimeStamp(0.901425843826);
    msg.setSource(4947U);
    msg.setSourceEntity(50U);
    msg.setDestination(7562U);
    msg.setDestinationEntity(233U);
    msg.time = 0.491695055842;
    msg.phi = 0.70033296951;
    msg.theta = 0.620408128952;
    msg.psi = 0.805175176022;
    msg.psi_magnetic = 0.773683551827;

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
    msg.setTimeStamp(0.508722807945);
    msg.setSource(41025U);
    msg.setSourceEntity(164U);
    msg.setDestination(51322U);
    msg.setDestinationEntity(121U);
    msg.time = 0.793914703004;
    msg.x = 0.945561956299;
    msg.y = 0.928057245492;
    msg.z = 0.147936598366;
    msg.timestep = 0.468712735758;

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
    msg.setTimeStamp(0.18772035027);
    msg.setSource(19556U);
    msg.setSourceEntity(248U);
    msg.setDestination(49100U);
    msg.setDestinationEntity(232U);
    msg.time = 0.445633545031;
    msg.x = 0.683247439942;
    msg.y = 0.444511629423;
    msg.z = 0.296189275801;
    msg.timestep = 0.605983273474;

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
    msg.setTimeStamp(0.719290919698);
    msg.setSource(51615U);
    msg.setSourceEntity(201U);
    msg.setDestination(57824U);
    msg.setDestinationEntity(226U);
    msg.time = 0.703176404312;
    msg.x = 0.49403334209;
    msg.y = 0.489551767369;
    msg.z = 0.436743948447;
    msg.timestep = 0.341594054459;

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
    msg.setTimeStamp(0.728194425224);
    msg.setSource(28531U);
    msg.setSourceEntity(16U);
    msg.setDestination(5828U);
    msg.setDestinationEntity(221U);
    msg.time = 0.408215831371;
    msg.x = 0.0478437789935;
    msg.y = 0.867718265642;
    msg.z = 0.281327404341;

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
    msg.setTimeStamp(0.638047044952);
    msg.setSource(7528U);
    msg.setSourceEntity(236U);
    msg.setDestination(51252U);
    msg.setDestinationEntity(169U);
    msg.time = 0.468451992324;
    msg.x = 0.128781952464;
    msg.y = 0.456542615439;
    msg.z = 0.596470126258;

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
    msg.setTimeStamp(0.767921584096);
    msg.setSource(62032U);
    msg.setSourceEntity(27U);
    msg.setDestination(56742U);
    msg.setDestinationEntity(212U);
    msg.time = 0.670913152562;
    msg.x = 0.635781320751;
    msg.y = 0.61653747458;
    msg.z = 0.545521956939;

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
    msg.setTimeStamp(0.266829070203);
    msg.setSource(31241U);
    msg.setSourceEntity(170U);
    msg.setDestination(43957U);
    msg.setDestinationEntity(29U);
    msg.time = 0.73953575467;
    msg.x = 0.322052723672;
    msg.y = 0.979418571408;
    msg.z = 0.290498983862;

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
    msg.setTimeStamp(0.0625480239748);
    msg.setSource(8984U);
    msg.setSourceEntity(229U);
    msg.setDestination(19721U);
    msg.setDestinationEntity(221U);
    msg.time = 0.0194326103;
    msg.x = 0.931560342959;
    msg.y = 0.830665434524;
    msg.z = 0.180244003053;

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
    msg.setTimeStamp(0.323629774298);
    msg.setSource(32764U);
    msg.setSourceEntity(145U);
    msg.setDestination(58480U);
    msg.setDestinationEntity(129U);
    msg.time = 0.644274412943;
    msg.x = 0.513875943286;
    msg.y = 0.874735821996;
    msg.z = 0.0248766295541;

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
    msg.setTimeStamp(0.84848600597);
    msg.setSource(8426U);
    msg.setSourceEntity(70U);
    msg.setDestination(49747U);
    msg.setDestinationEntity(84U);
    msg.time = 0.579758303908;
    msg.x = 0.404251316721;
    msg.y = 0.766101545266;
    msg.z = 0.566940558848;

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
    msg.setTimeStamp(0.530587326362);
    msg.setSource(11888U);
    msg.setSourceEntity(58U);
    msg.setDestination(21153U);
    msg.setDestinationEntity(108U);
    msg.time = 0.18735278056;
    msg.x = 0.959206571396;
    msg.y = 0.592941338733;
    msg.z = 0.269183762561;

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
    msg.setTimeStamp(0.155025728826);
    msg.setSource(28863U);
    msg.setSourceEntity(127U);
    msg.setDestination(46740U);
    msg.setDestinationEntity(123U);
    msg.time = 0.510526519898;
    msg.x = 0.122657475663;
    msg.y = 0.0720549450689;
    msg.z = 0.947177926019;

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
    msg.setTimeStamp(0.842701844646);
    msg.setSource(22074U);
    msg.setSourceEntity(193U);
    msg.setDestination(43765U);
    msg.setDestinationEntity(178U);
    msg.validity = 23U;
    msg.x = 0.289307991208;
    msg.y = 0.0387969256631;
    msg.z = 0.836465851783;

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
    msg.setTimeStamp(0.367704900783);
    msg.setSource(24121U);
    msg.setSourceEntity(104U);
    msg.setDestination(34255U);
    msg.setDestinationEntity(177U);
    msg.validity = 127U;
    msg.x = 0.401745270776;
    msg.y = 0.750098333624;
    msg.z = 0.134607209527;

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
    msg.setTimeStamp(0.21362842255);
    msg.setSource(32114U);
    msg.setSourceEntity(156U);
    msg.setDestination(56283U);
    msg.setDestinationEntity(185U);
    msg.validity = 189U;
    msg.x = 0.115615602039;
    msg.y = 0.053389079476;
    msg.z = 0.54040254095;

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
    msg.setTimeStamp(0.121959942195);
    msg.setSource(27429U);
    msg.setSourceEntity(203U);
    msg.setDestination(47461U);
    msg.setDestinationEntity(107U);
    msg.validity = 99U;
    msg.x = 0.666286875043;
    msg.y = 0.230394914942;
    msg.z = 0.341485692125;

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
    msg.setTimeStamp(0.230112454349);
    msg.setSource(43641U);
    msg.setSourceEntity(207U);
    msg.setDestination(8864U);
    msg.setDestinationEntity(240U);
    msg.validity = 108U;
    msg.x = 0.648863095339;
    msg.y = 0.221705480187;
    msg.z = 0.810456701197;

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
    msg.setTimeStamp(0.583254785015);
    msg.setSource(50968U);
    msg.setSourceEntity(100U);
    msg.setDestination(7318U);
    msg.setDestinationEntity(230U);
    msg.validity = 220U;
    msg.x = 0.96169450106;
    msg.y = 0.227417135444;
    msg.z = 0.962523060295;

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
    msg.setTimeStamp(0.687879054807);
    msg.setSource(17510U);
    msg.setSourceEntity(110U);
    msg.setDestination(64774U);
    msg.setDestinationEntity(20U);
    msg.time = 0.177983984958;
    msg.x = 0.943903943107;
    msg.y = 0.426147032018;
    msg.z = 0.0877103347431;

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
    msg.setTimeStamp(0.312764016189);
    msg.setSource(4804U);
    msg.setSourceEntity(74U);
    msg.setDestination(16237U);
    msg.setDestinationEntity(68U);
    msg.time = 0.433911912667;
    msg.x = 0.655154185025;
    msg.y = 0.0129503091749;
    msg.z = 0.74501264957;

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
    msg.setTimeStamp(0.687491051145);
    msg.setSource(55734U);
    msg.setSourceEntity(52U);
    msg.setDestination(40021U);
    msg.setDestinationEntity(76U);
    msg.time = 0.442710519024;
    msg.x = 0.377101899271;
    msg.y = 0.278179835349;
    msg.z = 0.811447538084;

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
    msg.setTimeStamp(0.391996694253);
    msg.setSource(14193U);
    msg.setSourceEntity(153U);
    msg.setDestination(15262U);
    msg.setDestinationEntity(209U);
    msg.validity = 211U;
    msg.value = 0.89068455004;

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
    msg.setTimeStamp(0.39015581889);
    msg.setSource(26668U);
    msg.setSourceEntity(193U);
    msg.setDestination(4323U);
    msg.setDestinationEntity(21U);
    msg.validity = 183U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.0403209718688;
    tmp_msg_0.y = 0.827976070949;
    tmp_msg_0.z = 0.957857268661;
    tmp_msg_0.phi = 0.951668498377;
    tmp_msg_0.theta = 0.642095938269;
    tmp_msg_0.psi = 0.330103109293;
    msg.location.push_back(tmp_msg_0);
    msg.value = 0.294726896365;

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
    msg.setTimeStamp(0.0887431152186);
    msg.setSource(12309U);
    msg.setSourceEntity(241U);
    msg.setDestination(30196U);
    msg.setDestinationEntity(89U);
    msg.validity = 175U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.414970794034;
    tmp_msg_0.y = 0.839076719784;
    tmp_msg_0.z = 0.80994914431;
    tmp_msg_0.phi = 0.0279964413756;
    tmp_msg_0.theta = 0.374056909158;
    tmp_msg_0.psi = 0.517666336005;
    msg.location.push_back(tmp_msg_0);
    IMC::BeamConfig tmp_msg_1;
    tmp_msg_1.beam_width = 0.429033508335;
    tmp_msg_1.beam_height = 0.37357262696;
    msg.beam_config.push_back(tmp_msg_1);
    msg.value = 0.265673758204;

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
    msg.setTimeStamp(0.173567278661);
    msg.setSource(7399U);
    msg.setSourceEntity(155U);
    msg.setDestination(104U);
    msg.setDestinationEntity(69U);
    msg.value = 0.347298119249;

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
    msg.setTimeStamp(0.116818445968);
    msg.setSource(4681U);
    msg.setSourceEntity(90U);
    msg.setDestination(54102U);
    msg.setDestinationEntity(73U);
    msg.value = 0.199674144899;

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
    msg.setTimeStamp(0.220150833066);
    msg.setSource(33282U);
    msg.setSourceEntity(8U);
    msg.setDestination(19265U);
    msg.setDestinationEntity(20U);
    msg.value = 0.898010612653;

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
    msg.setTimeStamp(0.651144119263);
    msg.setSource(6664U);
    msg.setSourceEntity(108U);
    msg.setDestination(59210U);
    msg.setDestinationEntity(139U);
    msg.value = 0.859496105098;

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
    msg.setTimeStamp(0.651216035624);
    msg.setSource(37630U);
    msg.setSourceEntity(100U);
    msg.setDestination(37394U);
    msg.setDestinationEntity(165U);
    msg.value = 0.222390269453;

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
    msg.setTimeStamp(0.298296396467);
    msg.setSource(54528U);
    msg.setSourceEntity(57U);
    msg.setDestination(13506U);
    msg.setDestinationEntity(151U);
    msg.value = 0.338927541771;

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
    msg.setTimeStamp(0.642697554596);
    msg.setSource(17957U);
    msg.setSourceEntity(195U);
    msg.setDestination(10235U);
    msg.setDestinationEntity(146U);
    msg.value = 0.672760432464;

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
    msg.setTimeStamp(0.167229398606);
    msg.setSource(31509U);
    msg.setSourceEntity(58U);
    msg.setDestination(24642U);
    msg.setDestinationEntity(246U);
    msg.value = 0.299317234258;

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
    msg.setTimeStamp(0.920244891018);
    msg.setSource(7989U);
    msg.setSourceEntity(38U);
    msg.setDestination(12725U);
    msg.setDestinationEntity(202U);
    msg.value = 0.35857138034;

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
    msg.setTimeStamp(0.692577855613);
    msg.setSource(48507U);
    msg.setSourceEntity(153U);
    msg.setDestination(21478U);
    msg.setDestinationEntity(35U);
    msg.value = 0.72729782627;

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
    msg.setTimeStamp(0.94732534126);
    msg.setSource(30045U);
    msg.setSourceEntity(89U);
    msg.setDestination(32001U);
    msg.setDestinationEntity(62U);
    msg.value = 0.649664694267;

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
    msg.setTimeStamp(0.43337816612);
    msg.setSource(46875U);
    msg.setSourceEntity(153U);
    msg.setDestination(6573U);
    msg.setDestinationEntity(21U);
    msg.value = 0.0966051224589;

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
    msg.setTimeStamp(0.973502341884);
    msg.setSource(61244U);
    msg.setSourceEntity(2U);
    msg.setDestination(49197U);
    msg.setDestinationEntity(145U);
    msg.value = 0.463066691559;

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
    msg.setTimeStamp(0.485369548488);
    msg.setSource(46235U);
    msg.setSourceEntity(74U);
    msg.setDestination(32987U);
    msg.setDestinationEntity(180U);
    msg.value = 0.253787147943;

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
    msg.setTimeStamp(0.481143008778);
    msg.setSource(291U);
    msg.setSourceEntity(97U);
    msg.setDestination(58133U);
    msg.setDestinationEntity(2U);
    msg.value = 0.461002056793;

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
    msg.setTimeStamp(0.667566093071);
    msg.setSource(26342U);
    msg.setSourceEntity(195U);
    msg.setDestination(26506U);
    msg.setDestinationEntity(221U);
    msg.value = 0.691889098992;

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
    msg.setTimeStamp(0.489008658409);
    msg.setSource(22945U);
    msg.setSourceEntity(56U);
    msg.setDestination(45319U);
    msg.setDestinationEntity(76U);
    msg.value = 0.562784419518;

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
    msg.setTimeStamp(0.16935082126);
    msg.setSource(20580U);
    msg.setSourceEntity(182U);
    msg.setDestination(53487U);
    msg.setDestinationEntity(207U);
    msg.value = 0.842021028026;

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
    msg.setTimeStamp(0.922212345968);
    msg.setSource(60973U);
    msg.setSourceEntity(213U);
    msg.setDestination(46250U);
    msg.setDestinationEntity(113U);
    msg.value = 0.0841369172282;

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
    msg.setTimeStamp(0.698297391333);
    msg.setSource(43711U);
    msg.setSourceEntity(252U);
    msg.setDestination(31592U);
    msg.setDestinationEntity(237U);
    msg.value = 0.344845170897;

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
    msg.setTimeStamp(0.063064952743);
    msg.setSource(47144U);
    msg.setSourceEntity(15U);
    msg.setDestination(53565U);
    msg.setDestinationEntity(248U);
    msg.value = 0.347162694276;

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
    msg.setTimeStamp(0.672909791483);
    msg.setSource(38205U);
    msg.setSourceEntity(182U);
    msg.setDestination(8850U);
    msg.setDestinationEntity(250U);
    msg.value = 0.695277144534;

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
    msg.setTimeStamp(0.213712896816);
    msg.setSource(42242U);
    msg.setSourceEntity(204U);
    msg.setDestination(49113U);
    msg.setDestinationEntity(17U);
    msg.value = 0.572258424992;

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
    msg.setTimeStamp(0.470651468455);
    msg.setSource(17624U);
    msg.setSourceEntity(184U);
    msg.setDestination(32026U);
    msg.setDestinationEntity(168U);
    msg.value = 0.733330024533;

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
    msg.setTimeStamp(0.910615499284);
    msg.setSource(7243U);
    msg.setSourceEntity(116U);
    msg.setDestination(4667U);
    msg.setDestinationEntity(144U);
    msg.direction = 0.473013795447;
    msg.speed = 0.21208319359;
    msg.turbulence = 0.93847107963;

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
    msg.setTimeStamp(0.125115465701);
    msg.setSource(28825U);
    msg.setSourceEntity(203U);
    msg.setDestination(48752U);
    msg.setDestinationEntity(186U);
    msg.direction = 0.762422889278;
    msg.speed = 0.169122483811;
    msg.turbulence = 0.200293914463;

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
    msg.setTimeStamp(0.861279302548);
    msg.setSource(28345U);
    msg.setSourceEntity(80U);
    msg.setDestination(41930U);
    msg.setDestinationEntity(214U);
    msg.direction = 0.467192278218;
    msg.speed = 0.621955610793;
    msg.turbulence = 0.444668577842;

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
    msg.setTimeStamp(0.853122367669);
    msg.setSource(64998U);
    msg.setSourceEntity(111U);
    msg.setDestination(34423U);
    msg.setDestinationEntity(105U);
    msg.value = 0.842018333193;

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
    msg.setTimeStamp(0.678564390635);
    msg.setSource(3757U);
    msg.setSourceEntity(119U);
    msg.setDestination(55171U);
    msg.setDestinationEntity(234U);
    msg.value = 0.881222598174;

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
    msg.setTimeStamp(0.705851317094);
    msg.setSource(38700U);
    msg.setSourceEntity(198U);
    msg.setDestination(33301U);
    msg.setDestinationEntity(55U);
    msg.value = 0.000490513094219;

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
    msg.setTimeStamp(0.261489821799);
    msg.setSource(30184U);
    msg.setSourceEntity(66U);
    msg.setDestination(39423U);
    msg.setDestinationEntity(65U);
    msg.value.assign("QZLQAUXEFHOMDXRWETBWGHAOJEBQOWQVMKTTGMJLAVCLARAUXTYIXRGRYUCMT");

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
    msg.setTimeStamp(0.145332427999);
    msg.setSource(56760U);
    msg.setSourceEntity(37U);
    msg.setDestination(4535U);
    msg.setDestinationEntity(89U);
    msg.value.assign("YFURESYESPISMOTPLDADRIPXMWBBTPYWITJFPBMVZGOIVVZEMUATSLOVAKLUEHJDROEMWQBBPKUNEXBQWCSFHJWGQDZFAUEJXWHKGROODNPIFFDRVNZPJYRNAQGHGZHVKKTYLCBQXJKJXPMZYHCCWD");

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
    msg.setTimeStamp(0.489292375374);
    msg.setSource(47262U);
    msg.setSourceEntity(35U);
    msg.setDestination(63557U);
    msg.setDestinationEntity(5U);
    msg.value.assign("LQXAFLEEQPAFMSOFEEZCRHYPIBFAOBMTUWLEPHONKMYSUJKUUIRZNZNNDBWGCZCYTQGCULUWTMOPXBLRPGZDJKTGLMGVSFAVJCWUXBJDVNDYXBCMRJOEZLQDRIQYKQCTPYHGZWUESHELRXDRJOKINJHNVWSFCSFAKWPVCVNIIDIY");

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
    msg.setTimeStamp(0.157300833766);
    msg.setSource(19927U);
    msg.setSourceEntity(146U);
    msg.setDestination(49154U);
    msg.setDestinationEntity(188U);
    const char tmp_msg_0[] = {3, 11, 28, 49, 116, -20, 31, 100, 83, 0, -111, -63, 28, 104, -127, -69, -63, -43, 60, -91, 19, 105, -72, 107, -58, 78, -35, 9, 44, 88, 125, -124, -51, -41, 27, -112, 55, 43, -15, -107, -66, 69, -18, 115, 117, -84, 41, -86, -88, -73, -109, -93, 16, -30, 66, -18, -43, 29, -78, -47, 66, -31, 79, 75, -2, -56, -41, -4, 16, -83, 102, -115, 120, 33, -90, -109, 97, 68, 36, -128, -52, 28, -69, 118, -109, -99, -42, -80, -51, -23, -80, -34, -62, 99, 101, -18, 113, -37, 60, -2, -6, -17, 87, -88, -20, -116, -127, 65, -80, -5, -82, 39, 37, -52, 122, -44, -37, 31, -40, 42, 114, 68, -103, -90, -108, -40, -124, -57, 70, -115, 23, 36, -104, 82, -127, 112, 76, 44, -62, -5, 11, -95, 106, -13, -58, 94, -65, -32, 65, -90, -10, 45, 39, -5, -13, 26, 73, 17, 120, 5, -84, -36, -45, -31, 25, -24, -96, 65, -83, 40, 91, 100, 32, 10, 69, 54, -77, 109, -101, -18, 7, 38, 48, 26, -17, 101, -34, -5, -50, 42, -79, 46, 0, -76, 72, 71, -68, -39, -9, 115, -98, 34, 11, -76, 2, -82, -6, -36, -21, 32, 6, -51, 40, -76, 16, -18, 90, 85, 112, 11, -41, -80, 84, -91, -24, -118, 0, -38, -78, -92, 58, 110, 102, -36, 58, 50, 93, -65, 78, -120};
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
    msg.setTimeStamp(0.97213885391);
    msg.setSource(6704U);
    msg.setSourceEntity(176U);
    msg.setDestination(39450U);
    msg.setDestinationEntity(119U);
    const char tmp_msg_0[] = {-71, 76, 37, 78, 88, -98, 41, -48, 79, 65, -109, -71, 113, -78, 79, 0, 24, 82, 28, -96, -66, 111, -104, -106, -126, 10, 23, -45, 60, -69, -94, -95, -30, -46, 72, 21, 81, -67, -80, 89, -71, -75, 64, 12};
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
    msg.setTimeStamp(0.681236256106);
    msg.setSource(11377U);
    msg.setSourceEntity(36U);
    msg.setDestination(16352U);
    msg.setDestinationEntity(213U);
    const char tmp_msg_0[] = {-57, 45, -79, -65, 32, 87, -107, -87, -105, -79, -119, 114, 40, -15, -76, -96, -65, -73, -83, 87, -96, -116, -26, 108, 118, 106, 14, -47, -76, -38, 111, 90, 11, -32, -40, 72, 116, -116, -118, -120, -25, -45, 15, -63, 65, -128, -9, 35, 16, 91, 44, -75, -89, -79, -100, 116, -124, 112, 97, -80, 101, -62, 10, -23, 20, 55, 42, 98, 16, 34, 76, -77, 95, 56, 30, 1, -6, 57, 104, -126, -76, -98, -124, 76, -63, 15, 119, 69, 58, 112, -90, -80, -106, 95, -83, 88, -111, 28, -15, -14, -92, 118, -22, -124, -104, -101, 21, -106, -72, -41, -111, 109, -98, -64, 38, -87, -119, -83, 83, 77, 48, 39, 55, -116, 11, -31, 0, -102, 41, -86, 21, -7, 15, 112, 65, 49, -39, 70, 59, 65, 98, -9, -103, 12, -117, -8, -79, 9, 48, 91, 37, -70, -110, -75, 46, 53, 55, -83, 61, 3, -15, -73, -2, 52, -65, 39, 7, 63, -108};
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
    msg.setTimeStamp(0.299388530077);
    msg.setSource(45580U);
    msg.setSourceEntity(40U);
    msg.setDestination(44314U);
    msg.setDestinationEntity(179U);
    msg.value = 0.356177992529;

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
    msg.setTimeStamp(0.80188344205);
    msg.setSource(62769U);
    msg.setSourceEntity(143U);
    msg.setDestination(25118U);
    msg.setDestinationEntity(60U);
    msg.value = 0.547544057296;

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
    msg.setTimeStamp(0.479173014909);
    msg.setSource(41882U);
    msg.setSourceEntity(1U);
    msg.setDestination(25314U);
    msg.setDestinationEntity(169U);
    msg.value = 0.232697111299;

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
    msg.setTimeStamp(0.244571623711);
    msg.setSource(8546U);
    msg.setSourceEntity(64U);
    msg.setDestination(39546U);
    msg.setDestinationEntity(154U);
    msg.type = 115U;
    msg.frequency = 3517277340U;
    msg.min_range = 24717U;
    msg.max_range = 18690U;
    msg.bits_per_point = 186U;
    msg.scale_factor = 0.671851617192;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.395053807169;
    tmp_msg_0.beam_height = 0.149046729168;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {-29, 68, -63, 36, 91, -39, 118, 97, 74, 95, 115, -116, 30, -2, -111, 70, -110, 121, -72, 112, 18, -104, -11, 118, -88, 50, -67, 73, -2, 103, -111, -66, 102, 8, -27, 14, 28, 120, -38, 67, -28, 75, -76, -28, -87, 87, 29, 80, -64, 97, -89, -120, -118, -109, -119, -92, -51, -120, -56, 1, 43, -64, -105, -17, -117, -103, 31, 112, -99, -85, 36, -7};
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
    msg.setTimeStamp(0.313206801941);
    msg.setSource(40841U);
    msg.setSourceEntity(147U);
    msg.setDestination(7942U);
    msg.setDestinationEntity(66U);
    msg.type = 98U;
    msg.frequency = 3530768291U;
    msg.min_range = 3498U;
    msg.max_range = 21320U;
    msg.bits_per_point = 201U;
    msg.scale_factor = 0.617917389413;
    const char tmp_msg_0[] = {-76, 103, -114, 55, -121, 102, 31, 123, -23, 7, -5, 84, -15, -103, 27, 71, -40, -19, -52, 36, 84, 18, 91, 6, 17, 12, 32, -33, -85, -27, 68, -72, 83, -37, 124, -128, -4, 119, 109, 35, -28, -14, 86, 101, -23, 51, -42, -3, -123, -103, -104, 37, -41, 33, 12, -63, -108, 47, 2, 30, 122, 78, 115, -102, 118, -106, -6, -25, -105, 7, 111, -71, -109, 45, -85, 102, 40, 8, 24, 47, -18, -117, -71, -67, 78, 81, 22, 17, -3, 42, -47, -124, 51, -2, -3, -57, 58, -30, 26, 31, -15, -19, -25, 11, -7, 113, 115, -62, 87, -54, 124, -83, 3, -14, -123, 3, -94, -97, -76, 46, -67, -94, 57, -56, 18, 1, -2, 121, -104, -83, -116, -46, -19, -118, -37, 55, -97, -36, 62, 106, -16, 73, -128, 3, -113, 98, -6, 84, 98, 11, 35, -37, -54, 111, 48, -66, -93, -11, -52, -122, 18, -73, -13, 112, -42, -46, 46, -47, -85, -114, 99, 115, -4, 10, -103, 99, 20, 77, 29, -109, 44, 79, -58, 81, 123, 53, 11, -116, 58, 80, 38};
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
    msg.setTimeStamp(0.0316172889869);
    msg.setSource(24514U);
    msg.setSourceEntity(86U);
    msg.setDestination(51197U);
    msg.setDestinationEntity(66U);
    msg.type = 174U;
    msg.frequency = 2162993463U;
    msg.min_range = 27895U;
    msg.max_range = 2265U;
    msg.bits_per_point = 138U;
    msg.scale_factor = 0.38178603003;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.424896882543;
    tmp_msg_0.beam_height = 0.33458202922;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {-119, 49, -29, -27, 71, -64, -47, 19, 67, 75, 10, 91, 3, -78, 46, 54, 16, -83, -104, 94, 87, 110, -121, 80, 89, -39, -99, 98, -63, -16, -4, 71, 97, 40, 81, 25, 27, -86, -90, 109, 80, -53, -42};
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
    msg.setTimeStamp(0.620510494583);
    msg.setSource(41375U);
    msg.setSourceEntity(214U);
    msg.setDestination(25642U);
    msg.setDestinationEntity(222U);

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
    msg.setTimeStamp(0.911582316059);
    msg.setSource(6827U);
    msg.setSourceEntity(153U);
    msg.setDestination(21872U);
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
    msg.setTimeStamp(0.352178621596);
    msg.setSource(17966U);
    msg.setSourceEntity(29U);
    msg.setDestination(39102U);
    msg.setDestinationEntity(19U);

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
    msg.setTimeStamp(0.981747561045);
    msg.setSource(34710U);
    msg.setSourceEntity(62U);
    msg.setDestination(65021U);
    msg.setDestinationEntity(175U);
    msg.op = 55U;

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
    msg.setTimeStamp(0.128828441414);
    msg.setSource(11574U);
    msg.setSourceEntity(156U);
    msg.setDestination(52238U);
    msg.setDestinationEntity(81U);
    msg.op = 133U;

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
    msg.setTimeStamp(0.0736312932309);
    msg.setSource(34101U);
    msg.setSourceEntity(46U);
    msg.setDestination(64466U);
    msg.setDestinationEntity(241U);
    msg.op = 108U;

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
    msg.setTimeStamp(0.165523410042);
    msg.setSource(31496U);
    msg.setSourceEntity(68U);
    msg.setDestination(48U);
    msg.setDestinationEntity(181U);
    msg.value = 0.348896502159;
    msg.confidence = 0.790574710302;
    msg.opmodes.assign("VUUXCUUOMDHRXENWYXHACQANBDBKYKUZGYWRJZIZQWCFEKHWBLUIFXSQOJFA");

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
    msg.setTimeStamp(0.108102622969);
    msg.setSource(59745U);
    msg.setSourceEntity(40U);
    msg.setDestination(58435U);
    msg.setDestinationEntity(132U);
    msg.value = 0.810758391596;
    msg.confidence = 0.430842751219;
    msg.opmodes.assign("PAEEKRZPYCNHSZAJFMJGBQGAANBVOFBDXVFWWRIXEGQRDDYZDIFJGYMZPLVTKJFUWQHMIKBKHNPTYNYMI");

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
    msg.setTimeStamp(0.843834216687);
    msg.setSource(41566U);
    msg.setSourceEntity(169U);
    msg.setDestination(50252U);
    msg.setDestinationEntity(184U);
    msg.value = 0.949703630323;
    msg.confidence = 0.0408006079616;
    msg.opmodes.assign("OAINNMQGTICXZWMTPYZSVGYGLITGKJCNYQBSXNPXABDJHWHILKDTTBAOWIDDOZWKHSLXXGZWFVRNQPUTPRPJIURRQLVKACWVAOHDFELMOZEYTDCQUVKZESTQCIYKWGFGTSPXJHPNGBDXNFLDFJYNQSRHFUGHMA");

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
    msg.setTimeStamp(0.398780900346);
    msg.setSource(50478U);
    msg.setSourceEntity(75U);
    msg.setDestination(35600U);
    msg.setDestinationEntity(173U);
    msg.itow = 2211972488U;
    msg.lat = 0.390107146905;
    msg.lon = 0.0432799069372;
    msg.height_ell = 0.409879272881;
    msg.height_sea = 0.000920266812171;
    msg.hacc = 0.18060215796;
    msg.vacc = 0.072851120765;
    msg.vel_n = 0.202249736009;
    msg.vel_e = 0.995860090525;
    msg.vel_d = 0.218057795914;
    msg.speed = 0.699207063428;
    msg.gspeed = 0.323314421262;
    msg.heading = 0.963547199309;
    msg.sacc = 0.803882101111;
    msg.cacc = 0.32960300957;

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
    msg.setTimeStamp(0.940754370745);
    msg.setSource(55801U);
    msg.setSourceEntity(154U);
    msg.setDestination(13544U);
    msg.setDestinationEntity(242U);
    msg.itow = 4041377987U;
    msg.lat = 0.776726676013;
    msg.lon = 0.702180241223;
    msg.height_ell = 0.636078563468;
    msg.height_sea = 0.437870624157;
    msg.hacc = 0.0306924182871;
    msg.vacc = 0.937278834116;
    msg.vel_n = 0.206830706994;
    msg.vel_e = 0.831143944663;
    msg.vel_d = 0.811549959017;
    msg.speed = 0.979156849381;
    msg.gspeed = 0.642589587553;
    msg.heading = 0.124990871802;
    msg.sacc = 0.0302904514275;
    msg.cacc = 0.620005010124;

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
    msg.setTimeStamp(0.690916867615);
    msg.setSource(60381U);
    msg.setSourceEntity(196U);
    msg.setDestination(46679U);
    msg.setDestinationEntity(207U);
    msg.itow = 3111943225U;
    msg.lat = 0.608319432969;
    msg.lon = 0.0591713683021;
    msg.height_ell = 0.460211158803;
    msg.height_sea = 0.697957447067;
    msg.hacc = 0.90020949957;
    msg.vacc = 0.734191247276;
    msg.vel_n = 0.84914883094;
    msg.vel_e = 0.813233137997;
    msg.vel_d = 0.0168956122153;
    msg.speed = 0.99330488261;
    msg.gspeed = 0.616591976858;
    msg.heading = 0.792525190487;
    msg.sacc = 0.909716147305;
    msg.cacc = 0.547179533064;

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
    msg.setTimeStamp(0.620549285573);
    msg.setSource(26062U);
    msg.setSourceEntity(242U);
    msg.setDestination(50279U);
    msg.setDestinationEntity(232U);
    msg.id = 82U;
    msg.value = 0.20397977978;

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
    msg.setTimeStamp(0.779411390497);
    msg.setSource(44649U);
    msg.setSourceEntity(85U);
    msg.setDestination(62241U);
    msg.setDestinationEntity(21U);
    msg.id = 161U;
    msg.value = 0.306445594969;

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
    msg.setTimeStamp(0.541329488629);
    msg.setSource(48839U);
    msg.setSourceEntity(170U);
    msg.setDestination(48889U);
    msg.setDestinationEntity(157U);
    msg.id = 247U;
    msg.value = 0.0478594760527;

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
    msg.setTimeStamp(0.288592577967);
    msg.setSource(23120U);
    msg.setSourceEntity(49U);
    msg.setDestination(21846U);
    msg.setDestinationEntity(0U);
    msg.x = 0.0169318402496;
    msg.y = 0.667970717294;
    msg.z = 0.2743849336;
    msg.phi = 0.522852686697;
    msg.theta = 0.283609229739;
    msg.psi = 0.105068479626;

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
    msg.setTimeStamp(0.374470806945);
    msg.setSource(50878U);
    msg.setSourceEntity(87U);
    msg.setDestination(26262U);
    msg.setDestinationEntity(111U);
    msg.x = 0.0955004918591;
    msg.y = 0.543379858612;
    msg.z = 0.53988548637;
    msg.phi = 0.662810249871;
    msg.theta = 0.165734765921;
    msg.psi = 0.789899968939;

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
    msg.setTimeStamp(0.415467933234);
    msg.setSource(31358U);
    msg.setSourceEntity(86U);
    msg.setDestination(44483U);
    msg.setDestinationEntity(73U);
    msg.x = 0.280741594384;
    msg.y = 0.20128445847;
    msg.z = 0.410181721808;
    msg.phi = 0.095986552755;
    msg.theta = 0.411964820393;
    msg.psi = 0.692412594769;

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
    msg.setTimeStamp(0.789619719626);
    msg.setSource(35774U);
    msg.setSourceEntity(67U);
    msg.setDestination(39421U);
    msg.setDestinationEntity(79U);
    msg.beam_width = 0.352780357663;
    msg.beam_height = 0.396877619835;

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
    msg.setTimeStamp(0.82167081115);
    msg.setSource(2142U);
    msg.setSourceEntity(239U);
    msg.setDestination(1123U);
    msg.setDestinationEntity(107U);
    msg.beam_width = 0.903879407786;
    msg.beam_height = 0.483806735092;

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
    msg.setTimeStamp(0.678102591729);
    msg.setSource(52823U);
    msg.setSourceEntity(134U);
    msg.setDestination(32634U);
    msg.setDestinationEntity(3U);
    msg.beam_width = 0.697642929398;
    msg.beam_height = 0.894612343959;

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
    msg.setTimeStamp(0.568013241324);
    msg.setSource(7663U);
    msg.setSourceEntity(252U);
    msg.setDestination(15255U);
    msg.setDestinationEntity(86U);
    msg.sane = 88U;

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
    msg.setTimeStamp(0.0348789660157);
    msg.setSource(17795U);
    msg.setSourceEntity(39U);
    msg.setDestination(13U);
    msg.setDestinationEntity(119U);
    msg.sane = 19U;

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
    msg.setTimeStamp(0.522934431665);
    msg.setSource(38868U);
    msg.setSourceEntity(32U);
    msg.setDestination(2894U);
    msg.setDestinationEntity(179U);
    msg.sane = 78U;

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
    msg.setTimeStamp(0.229744361288);
    msg.setSource(44703U);
    msg.setSourceEntity(91U);
    msg.setDestination(34862U);
    msg.setDestinationEntity(34U);
    msg.value = 0.111567312112;

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
    msg.setTimeStamp(0.973959287006);
    msg.setSource(62046U);
    msg.setSourceEntity(70U);
    msg.setDestination(40170U);
    msg.setDestinationEntity(50U);
    msg.value = 0.544093785312;

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
    msg.setTimeStamp(0.190053607059);
    msg.setSource(53039U);
    msg.setSourceEntity(190U);
    msg.setDestination(52559U);
    msg.setDestinationEntity(11U);
    msg.value = 0.262222425746;

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
    msg.setTimeStamp(0.231816609413);
    msg.setSource(4319U);
    msg.setSourceEntity(23U);
    msg.setDestination(40050U);
    msg.setDestinationEntity(152U);
    msg.value = 0.942155740928;

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
    msg.setTimeStamp(0.364685346657);
    msg.setSource(56592U);
    msg.setSourceEntity(217U);
    msg.setDestination(5488U);
    msg.setDestinationEntity(81U);
    msg.value = 0.52267831973;

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
    msg.setTimeStamp(0.826858198114);
    msg.setSource(18695U);
    msg.setSourceEntity(224U);
    msg.setDestination(61491U);
    msg.setDestinationEntity(124U);
    msg.value = 0.665785041283;

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
    msg.setTimeStamp(0.411915429252);
    msg.setSource(61518U);
    msg.setSourceEntity(75U);
    msg.setDestination(44602U);
    msg.setDestinationEntity(13U);
    msg.value = 0.404533509919;

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
    msg.setTimeStamp(0.378062089589);
    msg.setSource(835U);
    msg.setSourceEntity(200U);
    msg.setDestination(62547U);
    msg.setDestinationEntity(106U);
    msg.value = 0.225701801455;

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
    msg.setTimeStamp(0.397103982715);
    msg.setSource(44751U);
    msg.setSourceEntity(69U);
    msg.setDestination(50590U);
    msg.setDestinationEntity(115U);
    msg.value = 0.578859444297;

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
    msg.setTimeStamp(0.742867605);
    msg.setSource(56206U);
    msg.setSourceEntity(36U);
    msg.setDestination(19790U);
    msg.setDestinationEntity(133U);
    msg.value = 0.339485496517;

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
    msg.setTimeStamp(0.604151970653);
    msg.setSource(34839U);
    msg.setSourceEntity(35U);
    msg.setDestination(34446U);
    msg.setDestinationEntity(124U);
    msg.value = 0.547375323258;

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
    msg.setTimeStamp(0.834681092828);
    msg.setSource(45922U);
    msg.setSourceEntity(164U);
    msg.setDestination(29138U);
    msg.setDestinationEntity(174U);
    msg.value = 0.62966138846;

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
    msg.setTimeStamp(0.690642928075);
    msg.setSource(56567U);
    msg.setSourceEntity(11U);
    msg.setDestination(29603U);
    msg.setDestinationEntity(74U);
    msg.value = 0.482191250349;

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
    msg.setTimeStamp(0.701025571746);
    msg.setSource(2671U);
    msg.setSourceEntity(222U);
    msg.setDestination(50830U);
    msg.setDestinationEntity(7U);
    msg.value = 0.545573081589;

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
    msg.setTimeStamp(0.354093466142);
    msg.setSource(60228U);
    msg.setSourceEntity(13U);
    msg.setDestination(31672U);
    msg.setDestinationEntity(184U);
    msg.value = 0.63900770688;

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
    msg.setTimeStamp(0.719584663512);
    msg.setSource(37444U);
    msg.setSourceEntity(224U);
    msg.setDestination(62340U);
    msg.setDestinationEntity(227U);
    msg.value = 0.771977182662;

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
    msg.setTimeStamp(0.700018116296);
    msg.setSource(9546U);
    msg.setSourceEntity(136U);
    msg.setDestination(23920U);
    msg.setDestinationEntity(99U);
    msg.value = 0.0692233628483;

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
    msg.setTimeStamp(0.725175855216);
    msg.setSource(2358U);
    msg.setSourceEntity(104U);
    msg.setDestination(34930U);
    msg.setDestinationEntity(13U);
    msg.value = 0.0767728896672;

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
    msg.setTimeStamp(0.724466413007);
    msg.setSource(65041U);
    msg.setSourceEntity(179U);
    msg.setDestination(10152U);
    msg.setDestinationEntity(206U);
    msg.value = 0.586042767517;

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
    msg.setTimeStamp(0.677826552362);
    msg.setSource(10319U);
    msg.setSourceEntity(217U);
    msg.setDestination(52541U);
    msg.setDestinationEntity(1U);
    msg.value = 0.47431373416;

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
    msg.setTimeStamp(0.401579004168);
    msg.setSource(46484U);
    msg.setSourceEntity(153U);
    msg.setDestination(56857U);
    msg.setDestinationEntity(244U);
    msg.value = 0.368045840056;

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
    msg.setTimeStamp(0.989363210554);
    msg.setSource(61939U);
    msg.setSourceEntity(247U);
    msg.setDestination(23124U);
    msg.setDestinationEntity(221U);
    msg.value = 0.550098261411;

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
    msg.setTimeStamp(0.473547839363);
    msg.setSource(43916U);
    msg.setSourceEntity(47U);
    msg.setDestination(43782U);
    msg.setDestinationEntity(173U);
    msg.value = 0.875171981422;

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
    msg.setTimeStamp(0.939747562307);
    msg.setSource(55030U);
    msg.setSourceEntity(170U);
    msg.setDestination(57345U);
    msg.setDestinationEntity(12U);
    msg.value = 0.417991424234;

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
    msg.setTimeStamp(0.0643268214105);
    msg.setSource(34433U);
    msg.setSourceEntity(155U);
    msg.setDestination(10248U);
    msg.setDestinationEntity(90U);
    msg.validity = 65248U;
    msg.type = 161U;
    msg.tow = 1868890782U;
    msg.base_lat = 0.229736787925;
    msg.base_lon = 0.599586770346;
    msg.base_height = 0.0182199075925;
    msg.n = 0.254029442253;
    msg.e = 0.539907339685;
    msg.d = 0.654704418867;
    msg.v_n = 0.422083721278;
    msg.v_e = 0.290359808839;
    msg.v_d = 0.763036906535;
    msg.satellites = 203U;
    msg.iar_hyp = 53275U;
    msg.iar_ratio = 0.307316015984;

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
    msg.setTimeStamp(0.997514234773);
    msg.setSource(1713U);
    msg.setSourceEntity(14U);
    msg.setDestination(23867U);
    msg.setDestinationEntity(105U);
    msg.validity = 37804U;
    msg.type = 115U;
    msg.tow = 2803422075U;
    msg.base_lat = 0.695898123213;
    msg.base_lon = 0.0169300010753;
    msg.base_height = 0.789363366234;
    msg.n = 0.132661262767;
    msg.e = 0.552694626803;
    msg.d = 0.273745659098;
    msg.v_n = 0.665448291878;
    msg.v_e = 0.184048353703;
    msg.v_d = 0.735738272381;
    msg.satellites = 213U;
    msg.iar_hyp = 3702U;
    msg.iar_ratio = 0.677876320308;

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
    msg.setTimeStamp(0.951459260973);
    msg.setSource(8075U);
    msg.setSourceEntity(84U);
    msg.setDestination(59800U);
    msg.setDestinationEntity(48U);
    msg.validity = 32392U;
    msg.type = 163U;
    msg.tow = 749241548U;
    msg.base_lat = 0.896646656842;
    msg.base_lon = 0.909290062337;
    msg.base_height = 0.288665932586;
    msg.n = 0.284083658041;
    msg.e = 0.764861689588;
    msg.d = 0.552561684544;
    msg.v_n = 0.928094494896;
    msg.v_e = 0.0734544463814;
    msg.v_d = 0.977036714875;
    msg.satellites = 22U;
    msg.iar_hyp = 43546U;
    msg.iar_ratio = 0.770369157815;

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
    msg.setTimeStamp(0.0615474642015);
    msg.setSource(33523U);
    msg.setSourceEntity(34U);
    msg.setDestination(14283U);
    msg.setDestinationEntity(3U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.406682207201;
    tmp_msg_0.lon = 0.174473951186;
    tmp_msg_0.height = 0.442827780377;
    tmp_msg_0.x = 0.995473257723;
    tmp_msg_0.y = 0.542485303479;
    tmp_msg_0.z = 0.406760778404;
    tmp_msg_0.phi = 0.583884664784;
    tmp_msg_0.theta = 0.2109379304;
    tmp_msg_0.psi = 0.940294439619;
    tmp_msg_0.u = 0.962768861304;
    tmp_msg_0.v = 0.791461856349;
    tmp_msg_0.w = 0.776415138468;
    tmp_msg_0.vx = 0.0596229612044;
    tmp_msg_0.vy = 0.157394939133;
    tmp_msg_0.vz = 0.794620271686;
    tmp_msg_0.p = 0.546784242258;
    tmp_msg_0.q = 0.0622936513818;
    tmp_msg_0.r = 0.771841325459;
    tmp_msg_0.depth = 0.580303422548;
    tmp_msg_0.alt = 0.241700642948;
    msg.state.set(tmp_msg_0);
    msg.type = 165U;

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
    msg.setTimeStamp(0.514825314638);
    msg.setSource(41718U);
    msg.setSourceEntity(231U);
    msg.setDestination(40695U);
    msg.setDestinationEntity(156U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.0566859220885;
    tmp_msg_0.lon = 0.393595822432;
    tmp_msg_0.height = 0.202065406655;
    tmp_msg_0.x = 0.951994515285;
    tmp_msg_0.y = 0.820652903097;
    tmp_msg_0.z = 0.313980149496;
    tmp_msg_0.phi = 0.551039684363;
    tmp_msg_0.theta = 0.768016559364;
    tmp_msg_0.psi = 0.228254427443;
    tmp_msg_0.u = 0.0469707264475;
    tmp_msg_0.v = 0.695108936381;
    tmp_msg_0.w = 0.846247856614;
    tmp_msg_0.vx = 0.720585404868;
    tmp_msg_0.vy = 0.0707123095324;
    tmp_msg_0.vz = 0.24204334778;
    tmp_msg_0.p = 0.922222008119;
    tmp_msg_0.q = 0.736649269141;
    tmp_msg_0.r = 0.7656099962;
    tmp_msg_0.depth = 0.198248454612;
    tmp_msg_0.alt = 0.645352715294;
    msg.state.set(tmp_msg_0);
    msg.type = 226U;

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
    msg.setTimeStamp(0.00212570734741);
    msg.setSource(10560U);
    msg.setSourceEntity(62U);
    msg.setDestination(46614U);
    msg.setDestinationEntity(102U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.312946144241;
    tmp_msg_0.lon = 0.294475753663;
    tmp_msg_0.height = 0.470404147631;
    tmp_msg_0.x = 0.181130930641;
    tmp_msg_0.y = 0.676312588996;
    tmp_msg_0.z = 0.20167632861;
    tmp_msg_0.phi = 0.886423847942;
    tmp_msg_0.theta = 0.0768463895351;
    tmp_msg_0.psi = 0.952224637511;
    tmp_msg_0.u = 0.116799522003;
    tmp_msg_0.v = 0.684358238744;
    tmp_msg_0.w = 0.471277859029;
    tmp_msg_0.vx = 0.275475290955;
    tmp_msg_0.vy = 0.13958789008;
    tmp_msg_0.vz = 0.812360778625;
    tmp_msg_0.p = 0.839619538012;
    tmp_msg_0.q = 0.929804032852;
    tmp_msg_0.r = 0.457432027134;
    tmp_msg_0.depth = 0.534360194367;
    tmp_msg_0.alt = 0.0902330054365;
    msg.state.set(tmp_msg_0);
    msg.type = 5U;

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
    msg.setTimeStamp(0.644872936102);
    msg.setSource(56332U);
    msg.setSourceEntity(161U);
    msg.setDestination(59692U);
    msg.setDestinationEntity(63U);
    msg.value = 0.00946496606899;

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
    msg.setTimeStamp(0.302305582185);
    msg.setSource(9440U);
    msg.setSourceEntity(3U);
    msg.setDestination(950U);
    msg.setDestinationEntity(61U);
    msg.value = 0.00963429815901;

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
    msg.setTimeStamp(0.836623656664);
    msg.setSource(7685U);
    msg.setSourceEntity(80U);
    msg.setDestination(16709U);
    msg.setDestinationEntity(111U);
    msg.value = 0.85976922376;

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
    msg.setTimeStamp(0.231134810081);
    msg.setSource(35385U);
    msg.setSourceEntity(140U);
    msg.setDestination(21549U);
    msg.setDestinationEntity(182U);
    msg.value = 0.546017059291;

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
    msg.setTimeStamp(0.297811782762);
    msg.setSource(11692U);
    msg.setSourceEntity(107U);
    msg.setDestination(50231U);
    msg.setDestinationEntity(152U);
    msg.value = 0.715230726696;

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
    msg.setTimeStamp(0.617963607697);
    msg.setSource(40258U);
    msg.setSourceEntity(9U);
    msg.setDestination(17686U);
    msg.setDestinationEntity(90U);
    msg.value = 0.0771814162764;

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
    msg.setTimeStamp(0.777274082724);
    msg.setSource(4782U);
    msg.setSourceEntity(42U);
    msg.setDestination(61114U);
    msg.setDestinationEntity(243U);
    msg.value = 0.0416544937744;

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
    msg.setTimeStamp(0.467573290639);
    msg.setSource(38853U);
    msg.setSourceEntity(2U);
    msg.setDestination(52854U);
    msg.setDestinationEntity(129U);
    msg.value = 0.656778541602;

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
    msg.setTimeStamp(0.663831614342);
    msg.setSource(18438U);
    msg.setSourceEntity(114U);
    msg.setDestination(55987U);
    msg.setDestinationEntity(118U);
    msg.value = 0.781621549762;

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
    msg.setTimeStamp(0.964679964463);
    msg.setSource(23873U);
    msg.setSourceEntity(101U);
    msg.setDestination(15673U);
    msg.setDestinationEntity(217U);
    msg.value = 0.247830512951;

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
    msg.setTimeStamp(0.241309230941);
    msg.setSource(8721U);
    msg.setSourceEntity(31U);
    msg.setDestination(47739U);
    msg.setDestinationEntity(17U);
    msg.value = 0.234165754907;

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
    msg.setTimeStamp(0.358030702427);
    msg.setSource(54580U);
    msg.setSourceEntity(191U);
    msg.setDestination(57199U);
    msg.setDestinationEntity(124U);
    msg.value = 0.870848093481;

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
    msg.setTimeStamp(0.79664915419);
    msg.setSource(34801U);
    msg.setSourceEntity(153U);
    msg.setDestination(62107U);
    msg.setDestinationEntity(26U);
    msg.value = 0.321547485203;

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
    msg.setTimeStamp(0.604366525993);
    msg.setSource(2754U);
    msg.setSourceEntity(18U);
    msg.setDestination(43262U);
    msg.setDestinationEntity(144U);
    msg.value = 0.654265892518;

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
    msg.setTimeStamp(0.178868305867);
    msg.setSource(30869U);
    msg.setSourceEntity(128U);
    msg.setDestination(40415U);
    msg.setDestinationEntity(154U);
    msg.value = 0.0557443390752;

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
    msg.setTimeStamp(0.243012348338);
    msg.setSource(17833U);
    msg.setSourceEntity(181U);
    msg.setDestination(7023U);
    msg.setDestinationEntity(165U);
    msg.id = 194U;
    msg.zoom = 220U;
    msg.action = 225U;

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
    msg.setTimeStamp(0.85265376763);
    msg.setSource(11366U);
    msg.setSourceEntity(82U);
    msg.setDestination(32018U);
    msg.setDestinationEntity(30U);
    msg.id = 23U;
    msg.zoom = 222U;
    msg.action = 225U;

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
    msg.setTimeStamp(0.293993911048);
    msg.setSource(50655U);
    msg.setSourceEntity(137U);
    msg.setDestination(48037U);
    msg.setDestinationEntity(22U);
    msg.id = 225U;
    msg.zoom = 249U;
    msg.action = 113U;

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
    msg.setTimeStamp(0.0482874271549);
    msg.setSource(31864U);
    msg.setSourceEntity(206U);
    msg.setDestination(48979U);
    msg.setDestinationEntity(191U);
    msg.id = 162U;
    msg.value = 0.28912523971;

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
    msg.setTimeStamp(0.437436835369);
    msg.setSource(20957U);
    msg.setSourceEntity(195U);
    msg.setDestination(57408U);
    msg.setDestinationEntity(210U);
    msg.id = 181U;
    msg.value = 0.468801408825;

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
    msg.setTimeStamp(0.754329257731);
    msg.setSource(20460U);
    msg.setSourceEntity(192U);
    msg.setDestination(32806U);
    msg.setDestinationEntity(182U);
    msg.id = 180U;
    msg.value = 0.724345350441;

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
    msg.setTimeStamp(0.21761459873);
    msg.setSource(37942U);
    msg.setSourceEntity(40U);
    msg.setDestination(43092U);
    msg.setDestinationEntity(192U);
    msg.id = 193U;
    msg.value = 0.691432448364;

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
    msg.setTimeStamp(0.908348572523);
    msg.setSource(35023U);
    msg.setSourceEntity(117U);
    msg.setDestination(41660U);
    msg.setDestinationEntity(76U);
    msg.id = 56U;
    msg.value = 0.986377005689;

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
    msg.setTimeStamp(0.538554402175);
    msg.setSource(32694U);
    msg.setSourceEntity(127U);
    msg.setDestination(7828U);
    msg.setDestinationEntity(193U);
    msg.id = 186U;
    msg.value = 0.574429990658;

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
    msg.setTimeStamp(0.890111681376);
    msg.setSource(6681U);
    msg.setSourceEntity(180U);
    msg.setDestination(52891U);
    msg.setDestinationEntity(210U);
    msg.id = 179U;
    msg.angle = 0.100831079902;

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
    msg.setTimeStamp(0.501050517269);
    msg.setSource(45090U);
    msg.setSourceEntity(222U);
    msg.setDestination(6592U);
    msg.setDestinationEntity(7U);
    msg.id = 95U;
    msg.angle = 0.91372169447;

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
    msg.setTimeStamp(0.498034881778);
    msg.setSource(14670U);
    msg.setSourceEntity(154U);
    msg.setDestination(7838U);
    msg.setDestinationEntity(112U);
    msg.id = 32U;
    msg.angle = 0.165719026347;

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
    msg.setTimeStamp(0.392666355721);
    msg.setSource(35981U);
    msg.setSourceEntity(37U);
    msg.setDestination(43818U);
    msg.setDestinationEntity(6U);
    msg.op = 72U;
    msg.actions.assign("CWRECQQUQLLBCBXMVQEUGDXEXHKAOUWECGBHTPGCYSJUPHJDYLDDVWKWQSGOKLUERMJKHEKRWBUFTYJBDLZOZVERWFXWNMJOCRANFBJPXEQNZFAAPRFTOEZRHXQBDOTMHXBKJUTIPZGSZLNLDITSNOKDVQRINUZEFYSQBNSMDJTILVOGXAIYAFSZLJAIGPJKCTUZMTFMXCVYAOCHKMXAYYHAZDCVSGWI");

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
    msg.setTimeStamp(0.419696152147);
    msg.setSource(2057U);
    msg.setSourceEntity(184U);
    msg.setDestination(35228U);
    msg.setDestinationEntity(254U);
    msg.op = 147U;
    msg.actions.assign("JREJAJXSJXEYNGWNKLZIAOOOPMRQZQZBATCTCIVTNBYRIDAYBSETPZDPHZYUCDWLOAPXMSLKOGDQQXVHPLCURNKOWHIYD");

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
    msg.setTimeStamp(0.257174813425);
    msg.setSource(34934U);
    msg.setSourceEntity(129U);
    msg.setDestination(454U);
    msg.setDestinationEntity(22U);
    msg.op = 184U;
    msg.actions.assign("RPWPASWRSNPWURBDCLUSDMIEUVCJGZDDGUJNOUMJKPGJFLKQOFVWIQLXATOZBKFFHLABCFFPMPTELZZTYERNBKXZSKQLEHCICBJUVTLCCTAWKJRMMVTXSSIDCMXHTRNFNCZOIVXPQJAJNIYBHTIGTZGVKQVOCONXERHDERAPMTLGEVAMGFNKQQALAUYGQSSEFGEHOUHO");

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
    msg.setTimeStamp(0.371460104857);
    msg.setSource(9319U);
    msg.setSourceEntity(150U);
    msg.setDestination(36235U);
    msg.setDestinationEntity(91U);
    msg.actions.assign("VJAPNDTSDCELAHLJMTNUNXZMMVHOIFTFZINGCCGDSOXYCCUZGUSLWOUZVWWAZJEXKACXFCILZWMQPBWQFLJWSXLJFZBAJPSQHKVSUXNORSWYTPLEFPHDWKVQGBKVYAPBNIVPMNXYDGJKQQVLYTBMCLCOARZNGMRIERFKCJFAHGSJSAUZYEOHRHVXKKDLUTTUEOEMWDRYRUQBAHTRR");

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
    msg.setTimeStamp(0.0773964313301);
    msg.setSource(32128U);
    msg.setSourceEntity(121U);
    msg.setDestination(54569U);
    msg.setDestinationEntity(91U);
    msg.actions.assign("TQNLVUBLRAPZNWALFFROGHRUZGTBHWLPAYIKNBXMQPFMMELFQMIANUMRHXBVJHYPCAMBKGHYJEKOQBFCNZVATVCFEWUWJSGZTQDRXRQNMMUOVWNCMOZKHDNPFZZZVCLSKIXWXFKCVBJXPSZDJHPRTLTYPWCCARSIGUDIDJPISGVSSXTTJHQKWEJXWIZEOJYTSLFOUOKOIVNDLLGHJOSUYYIGYAEEEDHMYKKD");

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
    msg.setTimeStamp(0.931842474658);
    msg.setSource(49259U);
    msg.setSourceEntity(156U);
    msg.setDestination(33487U);
    msg.setDestinationEntity(54U);
    msg.actions.assign("YNPJDLSYOGGTYHDIXUVPATEKMEFIQBGAOGRMDNTITABWYQOCPNECJURLOKGUWKYBAMSNURGHMNCYZRXWZQONZPLEXLACDQCBICKRHGPDTWJDPXGAOLXUKVKJTJELZTMMBNFQFUOMHERJBNYZFULWKSMUPZBZSMIXVXBATCHDLRVXKYFNFOWIFXNFUHSVGOTAMCEZIQLIGCHFSIWAVEQZPJKQVXUQSVWDDSPLYFHCRTW");

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
    msg.setTimeStamp(0.388995889937);
    msg.setSource(55588U);
    msg.setSourceEntity(162U);
    msg.setDestination(50453U);
    msg.setDestinationEntity(224U);
    msg.button = 109U;
    msg.value = 163U;

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
    msg.setTimeStamp(0.0227162790843);
    msg.setSource(3079U);
    msg.setSourceEntity(65U);
    msg.setDestination(32111U);
    msg.setDestinationEntity(248U);
    msg.button = 134U;
    msg.value = 56U;

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
    msg.setTimeStamp(0.488497050239);
    msg.setSource(19714U);
    msg.setSourceEntity(166U);
    msg.setDestination(46643U);
    msg.setDestinationEntity(16U);
    msg.button = 19U;
    msg.value = 13U;

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
    msg.setTimeStamp(0.29146003145);
    msg.setSource(56729U);
    msg.setSourceEntity(187U);
    msg.setDestination(61038U);
    msg.setDestinationEntity(138U);
    msg.op = 209U;
    msg.text.assign("ZHCZAENAJOFVYLFWTCDSDQFDGHSLXBUUCHARIAGNCQYXAIKVRYHPJDVGXHVJIEAEKBOXLXIFFNQSSWPNYMNFYLBATPRGPEMPDOKYMSHSMFCWIJFBTZLLGTCGJGZHRSKVPKAKEUZIYPTKPRWVXQXJJPUUEZMLXKLDYHGUBGMDTVNSQZDWJHTWQOAOMWZCZADVSHOLKTQIBBORRNU");

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
    msg.setTimeStamp(0.876616762902);
    msg.setSource(3591U);
    msg.setSourceEntity(252U);
    msg.setDestination(26779U);
    msg.setDestinationEntity(68U);
    msg.op = 31U;
    msg.text.assign("QYYBCUDVELUBUJPGPESTNCIYZBRTBUXISBGELIFGQMGJEFTPHQAMVMLIRWDKLNJAOGVUBXOCSZPFOZJHFJRWFOYIMDCHEOSWSFLYNLWRJTRHRGRWSRUQXCTVFLXQAAPPBCHKNUETFIYKONEJKVQMPXVWGYKBKQNLHSTPTAOKXOIWXFDHINFVBJDJROYMSSEDMNNUQOACLIZUGCMXVINCUVEAZKMCQDGAWWVXZSAZ");

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
    msg.setTimeStamp(0.331351488422);
    msg.setSource(18420U);
    msg.setSourceEntity(13U);
    msg.setDestination(25530U);
    msg.setDestinationEntity(169U);
    msg.op = 141U;
    msg.text.assign("MUPVVCKZCITSXAOKTQDPSWMSUXAMUAALQLIMFNZFXTGXFBXTHIKEDHOECFULCHYAYWBJWLTULJFOJOYDGZ");

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
    msg.setTimeStamp(0.550037436142);
    msg.setSource(30974U);
    msg.setSourceEntity(165U);
    msg.setDestination(47479U);
    msg.setDestinationEntity(131U);
    msg.op = 40U;
    msg.time_remain = 0.414475803467;
    msg.sched_time = 0.888537041781;

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
    msg.setTimeStamp(0.595829976753);
    msg.setSource(27238U);
    msg.setSourceEntity(76U);
    msg.setDestination(37270U);
    msg.setDestinationEntity(131U);
    msg.op = 216U;
    msg.time_remain = 0.675068546078;
    msg.sched_time = 0.927505158842;

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
    msg.setTimeStamp(0.324968497042);
    msg.setSource(21336U);
    msg.setSourceEntity(101U);
    msg.setDestination(51439U);
    msg.setDestinationEntity(216U);
    msg.op = 146U;
    msg.time_remain = 0.558892395103;
    msg.sched_time = 0.271675512305;

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
    msg.setTimeStamp(0.461288485712);
    msg.setSource(2093U);
    msg.setSourceEntity(245U);
    msg.setDestination(18885U);
    msg.setDestinationEntity(172U);
    msg.name.assign("JBGYBEPIKEWVIRUCSWHQWCEDSHJSYRMUAGIBSKDZQOBLTFWYDKMSRPUHFEZUHLDCZQJOATVSMHLGTMLIFLPNVXWHNCOXGNQZURTKRTMZBVEGHIMDQJANOOVASOXUGLXPHYCBLASBESIQPKFPRLSUQZWJFPTXCYIGGJMFKGYVMAJFNXDMOTWZCBCVTNQFPZWKVICXNEHAIIDDZGNJTYOVUNLRLDWEEFFZNQWRXCMETAAUXOKBPDJPORRYUX");
    msg.op = 8U;
    msg.sched_time = 0.791216440675;

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
    msg.setTimeStamp(0.0892126825851);
    msg.setSource(2113U);
    msg.setSourceEntity(67U);
    msg.setDestination(33283U);
    msg.setDestinationEntity(19U);
    msg.name.assign("QFCWLLXKXJBQEBKMKGGHXNWHYEQYHIPGNPQWLMRAOILRZTTFCZTWGCAFRDLNUNGIFDTCGLUODQYIMHNSSDDJHAORYTBKJSCPBTRMXLGCFAYITJLRHMISIMFIHZPFYJUMJPVFTNDZQLVEUVZZONRAKSDPCDQOKBVWXPNMAZB");
    msg.op = 44U;
    msg.sched_time = 0.952507271048;

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
    msg.setTimeStamp(0.361563543645);
    msg.setSource(63935U);
    msg.setSourceEntity(76U);
    msg.setDestination(8150U);
    msg.setDestinationEntity(249U);
    msg.name.assign("OWKCEWSUBMHSKUZEYWVEHIDCFXWKYJEXCONCROOQXMWSUJUJQRADGQHIJJLKTABRFIDUWGECSGVGPMKTXHDGQLZCAPNZTYETSVTVWTRSYZOLHFMJMKGZMWLCYLFDPWILB");
    msg.op = 30U;
    msg.sched_time = 0.081164614208;

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
    msg.setTimeStamp(0.68858633742);
    msg.setSource(56057U);
    msg.setSourceEntity(117U);
    msg.setDestination(29737U);
    msg.setDestinationEntity(123U);

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
    msg.setTimeStamp(0.847878431578);
    msg.setSource(10372U);
    msg.setSourceEntity(239U);
    msg.setDestination(38714U);
    msg.setDestinationEntity(109U);

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
    msg.setTimeStamp(0.215161466545);
    msg.setSource(33779U);
    msg.setSourceEntity(233U);
    msg.setDestination(28226U);
    msg.setDestinationEntity(181U);

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
    msg.setTimeStamp(0.0448146855371);
    msg.setSource(2361U);
    msg.setSourceEntity(240U);
    msg.setDestination(60260U);
    msg.setDestinationEntity(240U);
    msg.name.assign("BNQEBTMTTSGEEJJCKHTRUKNVDUFSVIWMFSROKMYELGKMYRPBROHHPIHKORFUWZMQWYLTQLAILKYSIBSPQBAGTHPXDTEJXQHAGMDVBFUBWEFDVZKUCZPJPRBYQOYILTTXGPZWWVUZASXXWECEGSJDNQJHJWFWICMONWSAXAPFQXHMDCLMRQYDGPERZRYVIVDTSLFIBNAAGOGQHZJINPVUKSCVZNNRDNJZZMAXI");
    msg.state = 50U;

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
    msg.setTimeStamp(0.736189718541);
    msg.setSource(42724U);
    msg.setSourceEntity(164U);
    msg.setDestination(58870U);
    msg.setDestinationEntity(116U);
    msg.name.assign("QORIPWDLYVSKVPFEVXXCCHHWUSHTXKQ");
    msg.state = 168U;

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
    msg.setTimeStamp(0.547362451058);
    msg.setSource(3264U);
    msg.setSourceEntity(237U);
    msg.setDestination(54711U);
    msg.setDestinationEntity(57U);
    msg.name.assign("KQJBSJCDKNSEYLEPWACLQOWXINQCPFOFLMKODJKDTYGDXLQMBXNYJTZRTOUZKOXUAUFHEGBYVMQXHVEIPCRAYQFDXYDDKQTVPCPBSSSRHEJNGLILCUYWIFYQEZOLHDIACDWOEUSIBYRVHTVGRDPNPRXAGJXMCUHKKWWUUFGZMTJPBZFCMNEGAPHOGGNJTK");
    msg.state = 97U;

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
    msg.setTimeStamp(0.394759529969);
    msg.setSource(59738U);
    msg.setSourceEntity(238U);
    msg.setDestination(30883U);
    msg.setDestinationEntity(231U);
    msg.name.assign("PLKLXQASSXKZFOPROAOLMFGEJXWCYLUUNAKYGBBHVERRZUBOWNBDHNRQEIOVTJJXAAXUEZFYWZIFOOAESFQWRTVJDMFJKBZBKYTDNTNTVFTEBUCRZUDLDGRMPRMXCSOZMLPMCKLSCQMQQWZGMMCUXSSFQKIYXKHWDPTYCGBZIEELQJVCJGXVFAMWHHVQPJVWBANWKGQHSNIYUPDITHXEYFJOPYUDZNDIILVSGHEUPCGPIBT");
    msg.value = 93U;

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
    msg.setTimeStamp(0.152089214317);
    msg.setSource(46639U);
    msg.setSourceEntity(73U);
    msg.setDestination(65270U);
    msg.setDestinationEntity(179U);
    msg.name.assign("AFOTLKEQBZWLHZOVHRJTSYDXCZLNZSSQCFXHHIMHPDARUKBUGNNFCPF");
    msg.value = 228U;

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
    msg.setTimeStamp(0.297996965743);
    msg.setSource(49376U);
    msg.setSourceEntity(142U);
    msg.setDestination(12738U);
    msg.setDestinationEntity(119U);
    msg.name.assign("VPYPESOASVWVDOOIZGVAXJGUKYFVFUIOMOCWBQTBAKEXZINQNSXDNTLLFPETRGWGZQCXRQWPHZTJWKOBAOSRHWFRCCULKBQLRHLTBPLETDPCSCTTNLUHSH");
    msg.value = 214U;

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
    msg.setTimeStamp(0.784030782997);
    msg.setSource(37250U);
    msg.setSourceEntity(223U);
    msg.setDestination(35536U);
    msg.setDestinationEntity(40U);
    msg.name.assign("RWCCWIEKYJNCBHGUPDUUGTHCFNHCURIQWHQAGSUTXKVLSDYZWYERDTLFCFMAYZWNHKFJDHLOCEEHFCVJFZDLAOSOPUOMIPHRXXGQGBJEQPWJRBIXLWABLMFGOIEJYVYSZBDDUPKOXZHJOMWYETFGVRZNQSYOZYTVEUEDGIPNAFQLTFVLOPARKRMIKBNDMINARBMJNMIVKQMEVPBWQUKST");

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
    msg.setTimeStamp(0.650447488715);
    msg.setSource(12037U);
    msg.setSourceEntity(226U);
    msg.setDestination(32758U);
    msg.setDestinationEntity(213U);
    msg.name.assign("MEHZOEZDXHOGLOBWCRLQAKEAUQNTIRDISBFIJXHFRJWLUJ");

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
    msg.setTimeStamp(0.24992131435);
    msg.setSource(64655U);
    msg.setSourceEntity(235U);
    msg.setDestination(11491U);
    msg.setDestinationEntity(6U);
    msg.name.assign("EKKSWPDRJTHFSYYHTPGJUCWFTNBQXEPTLHSDFIFHHQBEIKSSIIUCFTHXBNHAANGJGMCAGYBCDFGXHEYQKNVONYUBOVGFQJUAUOEYMAXYXAZYNMZLWYWXNTKFZPUFLGZBVOBOODRSPMMSQASMCLKDQIVW");

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
    msg.setTimeStamp(0.886057155347);
    msg.setSource(32974U);
    msg.setSourceEntity(197U);
    msg.setDestination(27890U);
    msg.setDestinationEntity(164U);
    msg.name.assign("FLVCMYNMJCUXJJCXYZESTLSZQUXVUOWZFOBMHXGLKKWVDZBVOTITUBOFSSPGKFNLDPKHJLEEHDZSVWXIEAAOSDDYGATCMJJSQWFQUPIYRVVAIWHMOADYDCPUUORLENOIPKRNTQVRTQYPHFFPIUMWRMBHJEGRKFLABXCDAAQPFMQYQHXNNEVTILPXCDMNUYEZWGFEICNXQLHBDBTZU");
    msg.value = 232U;

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
    msg.setTimeStamp(0.276167421314);
    msg.setSource(0U);
    msg.setSourceEntity(246U);
    msg.setDestination(49826U);
    msg.setDestinationEntity(155U);
    msg.name.assign("YDAWUAAINZBFEQVMIWMXDPNTFMPPZGWCJHLRUNQSYILJUQOSCZKNIQUGLADBFQWMDVMFIBA");
    msg.value = 154U;

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
    msg.setTimeStamp(0.390560328911);
    msg.setSource(60514U);
    msg.setSourceEntity(239U);
    msg.setDestination(3030U);
    msg.setDestinationEntity(69U);
    msg.name.assign("HMWJWOBELYQGBPWBDVRMOBLIVTYEHZYLEEDKGBZTESCDZJHJUWXLDPAFTJKAJAQIWVVESNZOSNJQFUNSRRMGCE");
    msg.value = 158U;

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
    msg.setTimeStamp(0.527850067247);
    msg.setSource(59930U);
    msg.setSourceEntity(16U);
    msg.setDestination(11626U);
    msg.setDestinationEntity(143U);
    msg.id = 197U;
    msg.period = 608066803U;
    msg.duty_cycle = 439848499U;

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
    msg.setTimeStamp(0.181219269314);
    msg.setSource(33483U);
    msg.setSourceEntity(185U);
    msg.setDestination(48014U);
    msg.setDestinationEntity(3U);
    msg.id = 135U;
    msg.period = 1385189459U;
    msg.duty_cycle = 2275867130U;

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
    msg.setTimeStamp(0.241133634518);
    msg.setSource(33609U);
    msg.setSourceEntity(125U);
    msg.setDestination(46784U);
    msg.setDestinationEntity(50U);
    msg.id = 92U;
    msg.period = 899739506U;
    msg.duty_cycle = 1542588999U;

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
    msg.setTimeStamp(0.181597350201);
    msg.setSource(9456U);
    msg.setSourceEntity(109U);
    msg.setDestination(57617U);
    msg.setDestinationEntity(210U);
    msg.id = 87U;
    msg.period = 3118881255U;
    msg.duty_cycle = 1697210430U;

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
    msg.setTimeStamp(0.718705279587);
    msg.setSource(12335U);
    msg.setSourceEntity(34U);
    msg.setDestination(4027U);
    msg.setDestinationEntity(95U);
    msg.id = 98U;
    msg.period = 1681320108U;
    msg.duty_cycle = 1628226398U;

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
    msg.setTimeStamp(0.396235545574);
    msg.setSource(35628U);
    msg.setSourceEntity(49U);
    msg.setDestination(8878U);
    msg.setDestinationEntity(69U);
    msg.id = 198U;
    msg.period = 1310697244U;
    msg.duty_cycle = 4280903427U;

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
    msg.setTimeStamp(0.306863257414);
    msg.setSource(50425U);
    msg.setSourceEntity(37U);
    msg.setDestination(5010U);
    msg.setDestinationEntity(139U);
    msg.lat = 0.756753239116;
    msg.lon = 0.0658302769262;
    msg.height = 0.548218375307;
    msg.x = 0.783820499542;
    msg.y = 0.836764405811;
    msg.z = 0.481749269182;
    msg.phi = 0.37642641187;
    msg.theta = 0.305914434812;
    msg.psi = 0.443888105208;
    msg.u = 0.139251469147;
    msg.v = 0.849243908212;
    msg.w = 0.501141022649;
    msg.vx = 0.360338803736;
    msg.vy = 0.856097839144;
    msg.vz = 0.394102808547;
    msg.p = 0.852336758353;
    msg.q = 0.0526221369105;
    msg.r = 0.76777905172;
    msg.depth = 0.324494070408;
    msg.alt = 0.260910656987;

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
    msg.setTimeStamp(0.818059847693);
    msg.setSource(51172U);
    msg.setSourceEntity(213U);
    msg.setDestination(20182U);
    msg.setDestinationEntity(116U);
    msg.lat = 0.271139083615;
    msg.lon = 0.276398339586;
    msg.height = 0.174308547467;
    msg.x = 0.486646928398;
    msg.y = 0.377325972344;
    msg.z = 0.975881030383;
    msg.phi = 0.158395532533;
    msg.theta = 0.508725795699;
    msg.psi = 0.330516381078;
    msg.u = 0.705621651901;
    msg.v = 0.0357940376277;
    msg.w = 0.684362534823;
    msg.vx = 0.435628107678;
    msg.vy = 0.71804295511;
    msg.vz = 0.740878154675;
    msg.p = 0.10864230945;
    msg.q = 0.507740976995;
    msg.r = 0.060964760041;
    msg.depth = 0.61693897292;
    msg.alt = 0.0305532898317;

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
    msg.setTimeStamp(0.0282041666796);
    msg.setSource(4680U);
    msg.setSourceEntity(161U);
    msg.setDestination(2697U);
    msg.setDestinationEntity(116U);
    msg.lat = 0.859171895133;
    msg.lon = 0.0849182780084;
    msg.height = 0.390828784988;
    msg.x = 0.655894870308;
    msg.y = 0.318748530743;
    msg.z = 0.843435799086;
    msg.phi = 0.821797541697;
    msg.theta = 0.167826336339;
    msg.psi = 0.357656025333;
    msg.u = 0.168653843645;
    msg.v = 0.514519549056;
    msg.w = 0.14278021178;
    msg.vx = 0.95691361199;
    msg.vy = 0.914544697344;
    msg.vz = 0.679653519394;
    msg.p = 0.112445669798;
    msg.q = 0.58320133306;
    msg.r = 0.629488333428;
    msg.depth = 0.19214377103;
    msg.alt = 0.746717333012;

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
    msg.setTimeStamp(0.282641142814);
    msg.setSource(22650U);
    msg.setSourceEntity(65U);
    msg.setDestination(62658U);
    msg.setDestinationEntity(222U);
    msg.x = 0.870596587994;
    msg.y = 0.720875218688;
    msg.z = 0.674039153496;

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
    msg.setTimeStamp(0.275520876821);
    msg.setSource(7907U);
    msg.setSourceEntity(252U);
    msg.setDestination(29578U);
    msg.setDestinationEntity(119U);
    msg.x = 0.680617386308;
    msg.y = 0.493602443527;
    msg.z = 0.346032047919;

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
    msg.setTimeStamp(0.68605322421);
    msg.setSource(29845U);
    msg.setSourceEntity(22U);
    msg.setDestination(28091U);
    msg.setDestinationEntity(76U);
    msg.x = 0.426783819585;
    msg.y = 0.785668717458;
    msg.z = 0.703911304137;

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
    msg.setTimeStamp(0.942555839018);
    msg.setSource(6807U);
    msg.setSourceEntity(133U);
    msg.setDestination(23056U);
    msg.setDestinationEntity(208U);
    msg.value = 0.276611183648;

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
    msg.setTimeStamp(0.69011282176);
    msg.setSource(35967U);
    msg.setSourceEntity(26U);
    msg.setDestination(46003U);
    msg.setDestinationEntity(198U);
    msg.value = 0.918625816367;

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
    msg.setTimeStamp(0.341189495074);
    msg.setSource(17020U);
    msg.setSourceEntity(124U);
    msg.setDestination(20678U);
    msg.setDestinationEntity(199U);
    msg.value = 0.602757369158;

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
    msg.setTimeStamp(0.44398413677);
    msg.setSource(25567U);
    msg.setSourceEntity(236U);
    msg.setDestination(9647U);
    msg.setDestinationEntity(133U);
    msg.value = 0.19995030371;

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
    msg.setTimeStamp(0.509983311638);
    msg.setSource(63313U);
    msg.setSourceEntity(123U);
    msg.setDestination(33514U);
    msg.setDestinationEntity(243U);
    msg.value = 0.0388640152403;

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
    msg.setTimeStamp(0.900366595497);
    msg.setSource(20192U);
    msg.setSourceEntity(166U);
    msg.setDestination(55055U);
    msg.setDestinationEntity(84U);
    msg.value = 0.444219431688;

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
    msg.setTimeStamp(0.722368483496);
    msg.setSource(34745U);
    msg.setSourceEntity(184U);
    msg.setDestination(2285U);
    msg.setDestinationEntity(101U);
    msg.x = 0.161886267013;
    msg.y = 0.707063643604;
    msg.z = 0.15832938465;
    msg.phi = 0.310846341269;
    msg.theta = 0.843475269185;
    msg.psi = 0.0868111377274;
    msg.p = 0.247911258539;
    msg.q = 0.844124663598;
    msg.r = 0.901314291139;
    msg.u = 0.628055828513;
    msg.v = 0.65366175425;
    msg.w = 0.408572295014;
    msg.bias_psi = 0.631728537656;
    msg.bias_r = 0.109987593874;

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
    msg.setTimeStamp(0.569148455233);
    msg.setSource(32607U);
    msg.setSourceEntity(195U);
    msg.setDestination(14032U);
    msg.setDestinationEntity(122U);
    msg.x = 0.470891746205;
    msg.y = 0.0882087544116;
    msg.z = 0.626087809255;
    msg.phi = 0.733499696173;
    msg.theta = 0.302796372197;
    msg.psi = 0.551895418805;
    msg.p = 0.675728825393;
    msg.q = 0.1646057813;
    msg.r = 0.329733930314;
    msg.u = 0.00337359257936;
    msg.v = 0.440557344164;
    msg.w = 0.490800117566;
    msg.bias_psi = 0.035290523792;
    msg.bias_r = 0.734471981456;

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
    msg.setTimeStamp(0.828967651536);
    msg.setSource(2369U);
    msg.setSourceEntity(182U);
    msg.setDestination(55443U);
    msg.setDestinationEntity(113U);
    msg.x = 0.778118131089;
    msg.y = 0.357849983127;
    msg.z = 0.923699597011;
    msg.phi = 0.375829595415;
    msg.theta = 0.508660951387;
    msg.psi = 0.153818940031;
    msg.p = 0.180810868247;
    msg.q = 0.891968290594;
    msg.r = 0.274226508688;
    msg.u = 0.838731121992;
    msg.v = 0.511531857911;
    msg.w = 0.899653541323;
    msg.bias_psi = 0.438418995394;
    msg.bias_r = 0.599786277872;

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
    msg.setTimeStamp(0.237227325348);
    msg.setSource(63255U);
    msg.setSourceEntity(112U);
    msg.setDestination(25536U);
    msg.setDestinationEntity(108U);
    msg.bias_psi = 0.631965478382;
    msg.bias_r = 0.970984551525;
    msg.cog = 0.557816647873;
    msg.cyaw = 0.616646951886;
    msg.gps_rej_level = 0.740170303273;
    msg.lbl_rej_level = 0.379852913604;
    msg.custom_x = 0.240591751796;
    msg.custom_y = 0.45974939475;
    msg.custom_z = 0.0883074134025;

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
    msg.setTimeStamp(0.303345597083);
    msg.setSource(63495U);
    msg.setSourceEntity(63U);
    msg.setDestination(2948U);
    msg.setDestinationEntity(135U);
    msg.bias_psi = 0.646666117797;
    msg.bias_r = 0.919407508537;
    msg.cog = 0.220856009054;
    msg.cyaw = 0.822899470309;
    msg.gps_rej_level = 0.331893151261;
    msg.lbl_rej_level = 0.386482429961;
    msg.custom_x = 0.677955776208;
    msg.custom_y = 0.0892636425337;
    msg.custom_z = 0.98805797659;

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
    msg.setTimeStamp(0.164509617427);
    msg.setSource(19430U);
    msg.setSourceEntity(59U);
    msg.setDestination(34683U);
    msg.setDestinationEntity(182U);
    msg.bias_psi = 0.492549774041;
    msg.bias_r = 0.608113682877;
    msg.cog = 0.58940220687;
    msg.cyaw = 0.955277413487;
    msg.gps_rej_level = 0.0206027359274;
    msg.lbl_rej_level = 0.274978748107;
    msg.custom_x = 0.775670287752;
    msg.custom_y = 0.53531226232;
    msg.custom_z = 0.628121116293;

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
    msg.setTimeStamp(0.0980798526745);
    msg.setSource(5061U);
    msg.setSourceEntity(128U);
    msg.setDestination(38776U);
    msg.setDestinationEntity(178U);
    msg.utc_time = 0.633759648826;
    msg.reason = 44U;

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
    msg.setTimeStamp(0.867212588396);
    msg.setSource(19900U);
    msg.setSourceEntity(4U);
    msg.setDestination(56190U);
    msg.setDestinationEntity(56U);
    msg.utc_time = 0.983688733607;
    msg.reason = 182U;

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
    msg.setTimeStamp(0.766444373701);
    msg.setSource(10856U);
    msg.setSourceEntity(205U);
    msg.setDestination(52886U);
    msg.setDestinationEntity(190U);
    msg.utc_time = 0.168409368416;
    msg.reason = 237U;

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
    msg.setTimeStamp(0.581073541017);
    msg.setSource(17899U);
    msg.setSourceEntity(181U);
    msg.setDestination(5879U);
    msg.setDestinationEntity(62U);
    msg.id = 37U;
    msg.range = 0.105937661374;
    msg.acceptance = 31U;

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
    msg.setTimeStamp(0.369936310208);
    msg.setSource(45621U);
    msg.setSourceEntity(21U);
    msg.setDestination(15245U);
    msg.setDestinationEntity(66U);
    msg.id = 207U;
    msg.range = 0.712467167407;
    msg.acceptance = 56U;

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
    msg.setTimeStamp(0.763002207167);
    msg.setSource(27002U);
    msg.setSourceEntity(177U);
    msg.setDestination(5491U);
    msg.setDestinationEntity(70U);
    msg.id = 32U;
    msg.range = 0.351440242077;
    msg.acceptance = 254U;

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
    msg.setTimeStamp(0.975604011468);
    msg.setSource(1739U);
    msg.setSourceEntity(151U);
    msg.setDestination(48879U);
    msg.setDestinationEntity(53U);
    msg.type = 203U;
    msg.reason = 239U;
    msg.value = 0.504651267028;
    msg.timestep = 0.81060096208;

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
    msg.setTimeStamp(0.698363189644);
    msg.setSource(28508U);
    msg.setSourceEntity(61U);
    msg.setDestination(50423U);
    msg.setDestinationEntity(147U);
    msg.type = 98U;
    msg.reason = 140U;
    msg.value = 0.293443720526;
    msg.timestep = 0.631861747068;

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
    msg.setTimeStamp(0.231421272355);
    msg.setSource(17258U);
    msg.setSourceEntity(251U);
    msg.setDestination(33954U);
    msg.setDestinationEntity(242U);
    msg.type = 203U;
    msg.reason = 174U;
    msg.value = 0.0164801130447;
    msg.timestep = 0.23482568132;

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
    msg.setTimeStamp(0.944765320415);
    msg.setSource(57766U);
    msg.setSourceEntity(99U);
    msg.setDestination(792U);
    msg.setDestinationEntity(131U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("OUYUGNXEXSDOUBIXWXEZGXFIBZNTZQKYJTIBTFGGPOMHVXTRMRQITFSQSQEGNFMRGUAMLSAZVEHRYBTHLCWGBMWPIYAVKYHQQDXJEDIMWUPCKIQUCPRTJSINERAZYLCXBHZLSEPVNRWFPJCWIAEBDTMDLEUNHGLLPZOK");
    tmp_msg_0.lat = 0.927699051904;
    tmp_msg_0.lon = 0.165318350074;
    tmp_msg_0.depth = 0.380979503567;
    tmp_msg_0.query_channel = 88U;
    tmp_msg_0.reply_channel = 169U;
    tmp_msg_0.transponder_delay = 99U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.872170537577;
    msg.y = 0.818049069988;
    msg.var_x = 0.8989035434;
    msg.var_y = 0.146854507366;
    msg.distance = 0.830952473714;

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
    msg.setTimeStamp(0.136097494208);
    msg.setSource(59761U);
    msg.setSourceEntity(9U);
    msg.setDestination(25978U);
    msg.setDestinationEntity(24U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("XDGYUMHKZSYCTDKTYXIWYVMGMEPGXXGSMSHNHBDMUDVBVQPGZINEKBAHVCROJSMYQFLHACYKDRHAHWTVRPXCJOABFB");
    tmp_msg_0.lat = 0.69061722804;
    tmp_msg_0.lon = 0.728111501369;
    tmp_msg_0.depth = 0.85017029949;
    tmp_msg_0.query_channel = 181U;
    tmp_msg_0.reply_channel = 96U;
    tmp_msg_0.transponder_delay = 16U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.494242419835;
    msg.y = 0.511495501416;
    msg.var_x = 0.494107234333;
    msg.var_y = 0.251063978847;
    msg.distance = 0.925850637116;

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
    msg.setTimeStamp(0.931078626492);
    msg.setSource(45364U);
    msg.setSourceEntity(201U);
    msg.setDestination(60511U);
    msg.setDestinationEntity(45U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("DYMFNGRCOZELTISUFOGRCVYZKFKGBGZAESHCUQRSAXXBPATVEMZSLQIVRRJDTKTNNGRIPZSJESGSQYPAQBDDQKXKPUPOTQGFAHVPJWVLPUWYZBYYJAKJSRRHWXRQDHOPDOLMXRHBWNLTMWGHCXLJQUWVHULDAUIBYIVCYYLQDUNMXHCWFVXJNWFAJIFBNQEBKBKTNMIIAOCMHGWXZOBP");
    tmp_msg_0.lat = 0.169610654633;
    tmp_msg_0.lon = 0.147580281723;
    tmp_msg_0.depth = 0.00924850097038;
    tmp_msg_0.query_channel = 249U;
    tmp_msg_0.reply_channel = 126U;
    tmp_msg_0.transponder_delay = 37U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.540104849997;
    msg.y = 0.0400448687336;
    msg.var_x = 0.219188455657;
    msg.var_y = 0.377107401707;
    msg.distance = 0.794123569044;

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
    msg.setTimeStamp(0.738098273322);
    msg.setSource(41642U);
    msg.setSourceEntity(108U);
    msg.setDestination(13264U);
    msg.setDestinationEntity(119U);
    msg.state = 167U;

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
    msg.setTimeStamp(0.253453268783);
    msg.setSource(64035U);
    msg.setSourceEntity(175U);
    msg.setDestination(63483U);
    msg.setDestinationEntity(177U);
    msg.state = 242U;

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
    msg.setTimeStamp(0.504532759983);
    msg.setSource(47950U);
    msg.setSourceEntity(190U);
    msg.setDestination(43761U);
    msg.setDestinationEntity(90U);
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
    msg.setTimeStamp(0.461560637763);
    msg.setSource(5662U);
    msg.setSourceEntity(81U);
    msg.setDestination(6370U);
    msg.setDestinationEntity(130U);
    msg.x = 0.0844284701873;
    msg.y = 0.266504407177;
    msg.z = 0.527569010935;

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
    msg.setTimeStamp(0.404337436811);
    msg.setSource(53999U);
    msg.setSourceEntity(192U);
    msg.setDestination(49383U);
    msg.setDestinationEntity(141U);
    msg.x = 0.744269603361;
    msg.y = 0.875843212137;
    msg.z = 0.403267792072;

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
    msg.setTimeStamp(0.154303059245);
    msg.setSource(63992U);
    msg.setSourceEntity(43U);
    msg.setDestination(64232U);
    msg.setDestinationEntity(112U);
    msg.x = 0.0804420838779;
    msg.y = 0.535355277533;
    msg.z = 0.856237281665;

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
    msg.setTimeStamp(0.561534950318);
    msg.setSource(55732U);
    msg.setSourceEntity(248U);
    msg.setDestination(6819U);
    msg.setDestinationEntity(190U);
    msg.va = 0.746748146306;
    msg.aoa = 0.458086274402;
    msg.ssa = 0.264409792155;

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
    msg.setTimeStamp(0.774194433365);
    msg.setSource(47501U);
    msg.setSourceEntity(112U);
    msg.setDestination(26964U);
    msg.setDestinationEntity(163U);
    msg.va = 0.151667902403;
    msg.aoa = 0.902831808502;
    msg.ssa = 0.881277715155;

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
    msg.setTimeStamp(0.240301963645);
    msg.setSource(29524U);
    msg.setSourceEntity(17U);
    msg.setDestination(42455U);
    msg.setDestinationEntity(253U);
    msg.va = 0.459924658387;
    msg.aoa = 0.780365680422;
    msg.ssa = 0.979542242684;

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
    msg.setTimeStamp(0.647972229022);
    msg.setSource(3562U);
    msg.setSourceEntity(83U);
    msg.setDestination(17104U);
    msg.setDestinationEntity(41U);
    msg.value = 0.220286384333;
    msg.off = 0.655498381335;

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
    msg.setTimeStamp(0.966541907004);
    msg.setSource(3704U);
    msg.setSourceEntity(190U);
    msg.setDestination(1806U);
    msg.setDestinationEntity(229U);
    msg.value = 0.932143066764;
    msg.off = 0.796557763028;

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
    msg.setTimeStamp(0.788507832253);
    msg.setSource(30188U);
    msg.setSourceEntity(91U);
    msg.setDestination(53649U);
    msg.setDestinationEntity(208U);
    msg.value = 0.586757873336;
    msg.off = 0.0767172128855;

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
    msg.setTimeStamp(0.690783331409);
    msg.setSource(61221U);
    msg.setSourceEntity(217U);
    msg.setDestination(29933U);
    msg.setDestinationEntity(132U);
    msg.value = 0.531003411749;
    msg.z_units = 64U;

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
    msg.setTimeStamp(0.518172898157);
    msg.setSource(24382U);
    msg.setSourceEntity(82U);
    msg.setDestination(33685U);
    msg.setDestinationEntity(246U);
    msg.value = 0.317335162857;
    msg.z_units = 247U;

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
    msg.setTimeStamp(0.718827442955);
    msg.setSource(24436U);
    msg.setSourceEntity(183U);
    msg.setDestination(42760U);
    msg.setDestinationEntity(100U);
    msg.value = 0.810179623851;
    msg.z_units = 85U;

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
    msg.setTimeStamp(0.717826184999);
    msg.setSource(6099U);
    msg.setSourceEntity(173U);
    msg.setDestination(12788U);
    msg.setDestinationEntity(122U);
    msg.value = 0.785064827708;
    msg.speed_units = 176U;

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
    msg.setTimeStamp(0.335698563727);
    msg.setSource(44812U);
    msg.setSourceEntity(226U);
    msg.setDestination(45648U);
    msg.setDestinationEntity(171U);
    msg.value = 0.246597580741;
    msg.speed_units = 246U;

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
    msg.setTimeStamp(0.478494867375);
    msg.setSource(52927U);
    msg.setSourceEntity(122U);
    msg.setDestination(64623U);
    msg.setDestinationEntity(186U);
    msg.value = 0.914670201252;
    msg.speed_units = 179U;

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
    msg.setTimeStamp(0.472370259793);
    msg.setSource(16831U);
    msg.setSourceEntity(21U);
    msg.setDestination(47381U);
    msg.setDestinationEntity(249U);
    msg.value = 0.056325661281;

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
    msg.setTimeStamp(0.784335552889);
    msg.setSource(49183U);
    msg.setSourceEntity(233U);
    msg.setDestination(49826U);
    msg.setDestinationEntity(51U);
    msg.value = 0.881483199432;

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
    msg.setTimeStamp(0.332933697541);
    msg.setSource(51859U);
    msg.setSourceEntity(112U);
    msg.setDestination(11038U);
    msg.setDestinationEntity(236U);
    msg.value = 0.70351786504;

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
    msg.setTimeStamp(0.604504880554);
    msg.setSource(61721U);
    msg.setSourceEntity(232U);
    msg.setDestination(60225U);
    msg.setDestinationEntity(21U);
    msg.value = 0.571462008924;

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
    msg.setTimeStamp(0.296995183957);
    msg.setSource(25826U);
    msg.setSourceEntity(30U);
    msg.setDestination(40837U);
    msg.setDestinationEntity(218U);
    msg.value = 0.450716292086;

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
    msg.setTimeStamp(0.525057869702);
    msg.setSource(27687U);
    msg.setSourceEntity(243U);
    msg.setDestination(2737U);
    msg.setDestinationEntity(70U);
    msg.value = 0.943098720291;

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
    msg.setTimeStamp(0.441849312735);
    msg.setSource(18978U);
    msg.setSourceEntity(104U);
    msg.setDestination(46103U);
    msg.setDestinationEntity(17U);
    msg.value = 0.697649683529;

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
    msg.setTimeStamp(0.844148169712);
    msg.setSource(63067U);
    msg.setSourceEntity(188U);
    msg.setDestination(33790U);
    msg.setDestinationEntity(164U);
    msg.value = 0.243476685979;

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
    msg.setTimeStamp(0.141324635427);
    msg.setSource(31421U);
    msg.setSourceEntity(245U);
    msg.setDestination(55150U);
    msg.setDestinationEntity(100U);
    msg.value = 0.604877240064;

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
    msg.setTimeStamp(0.940434120251);
    msg.setSource(40500U);
    msg.setSourceEntity(53U);
    msg.setDestination(29805U);
    msg.setDestinationEntity(148U);
    msg.path_ref = 626144570U;
    msg.start_lat = 0.0921094783036;
    msg.start_lon = 0.598380874665;
    msg.start_z = 0.776568929314;
    msg.start_z_units = 152U;
    msg.end_lat = 0.13324968589;
    msg.end_lon = 0.283923386407;
    msg.end_z = 0.234849147949;
    msg.end_z_units = 155U;
    msg.speed = 0.347882152251;
    msg.speed_units = 241U;
    msg.lradius = 0.560236407795;
    msg.flags = 200U;

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
    msg.setTimeStamp(0.115787226282);
    msg.setSource(4157U);
    msg.setSourceEntity(129U);
    msg.setDestination(51208U);
    msg.setDestinationEntity(61U);
    msg.path_ref = 1972462753U;
    msg.start_lat = 0.871330690817;
    msg.start_lon = 0.635349167157;
    msg.start_z = 0.466819896371;
    msg.start_z_units = 153U;
    msg.end_lat = 0.957885585978;
    msg.end_lon = 0.117665237897;
    msg.end_z = 0.99807810246;
    msg.end_z_units = 217U;
    msg.speed = 0.868181605231;
    msg.speed_units = 221U;
    msg.lradius = 0.731520635293;
    msg.flags = 41U;

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
    msg.setTimeStamp(0.656335896846);
    msg.setSource(55250U);
    msg.setSourceEntity(68U);
    msg.setDestination(3237U);
    msg.setDestinationEntity(88U);
    msg.path_ref = 2190323983U;
    msg.start_lat = 0.838160794835;
    msg.start_lon = 0.930987841847;
    msg.start_z = 0.493517470356;
    msg.start_z_units = 29U;
    msg.end_lat = 0.650914896923;
    msg.end_lon = 0.979444314225;
    msg.end_z = 0.247263063054;
    msg.end_z_units = 65U;
    msg.speed = 0.269609046838;
    msg.speed_units = 8U;
    msg.lradius = 0.647940555174;
    msg.flags = 188U;

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
    msg.setTimeStamp(0.534591464715);
    msg.setSource(3137U);
    msg.setSourceEntity(190U);
    msg.setDestination(57778U);
    msg.setDestinationEntity(56U);
    msg.x = 0.0198543896087;
    msg.y = 0.396790190313;
    msg.z = 0.132040169532;
    msg.k = 0.0517294358871;
    msg.m = 0.0125626208635;
    msg.n = 0.89555059916;
    msg.flags = 55U;

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
    msg.setTimeStamp(0.823824031294);
    msg.setSource(45809U);
    msg.setSourceEntity(33U);
    msg.setDestination(54960U);
    msg.setDestinationEntity(19U);
    msg.x = 0.591103148099;
    msg.y = 0.690118380498;
    msg.z = 0.701079281991;
    msg.k = 0.236932216213;
    msg.m = 0.0381657840512;
    msg.n = 0.169305020209;
    msg.flags = 223U;

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
    msg.setTimeStamp(0.895364020034);
    msg.setSource(54186U);
    msg.setSourceEntity(8U);
    msg.setDestination(3379U);
    msg.setDestinationEntity(177U);
    msg.x = 0.706999485968;
    msg.y = 0.61050744632;
    msg.z = 0.457824665186;
    msg.k = 0.171983558113;
    msg.m = 0.412674051886;
    msg.n = 0.252380791605;
    msg.flags = 206U;

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
    msg.setTimeStamp(0.238069455823);
    msg.setSource(41089U);
    msg.setSourceEntity(94U);
    msg.setDestination(11870U);
    msg.setDestinationEntity(239U);
    msg.value = 0.753141514813;

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
    msg.setTimeStamp(0.704357058006);
    msg.setSource(44953U);
    msg.setSourceEntity(23U);
    msg.setDestination(47476U);
    msg.setDestinationEntity(49U);
    msg.value = 0.864798846922;

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
    msg.setTimeStamp(0.674721629088);
    msg.setSource(39730U);
    msg.setSourceEntity(175U);
    msg.setDestination(29353U);
    msg.setDestinationEntity(10U);
    msg.value = 0.271368663199;

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
    msg.setTimeStamp(0.506080575941);
    msg.setSource(34466U);
    msg.setSourceEntity(156U);
    msg.setDestination(40235U);
    msg.setDestinationEntity(8U);
    msg.u = 0.234330342444;
    msg.v = 0.0307145627297;
    msg.w = 0.473138337895;
    msg.p = 0.775579479011;
    msg.q = 0.65713336222;
    msg.r = 0.988798242675;
    msg.flags = 42U;

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
    msg.setTimeStamp(0.362196893106);
    msg.setSource(50103U);
    msg.setSourceEntity(201U);
    msg.setDestination(42591U);
    msg.setDestinationEntity(188U);
    msg.u = 0.297232581847;
    msg.v = 0.643672595523;
    msg.w = 0.85202390425;
    msg.p = 0.138645026255;
    msg.q = 0.570466373229;
    msg.r = 0.193991923559;
    msg.flags = 32U;

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
    msg.setTimeStamp(0.620211713029);
    msg.setSource(25805U);
    msg.setSourceEntity(160U);
    msg.setDestination(33080U);
    msg.setDestinationEntity(218U);
    msg.u = 0.623654006333;
    msg.v = 0.0609729142604;
    msg.w = 0.865628889849;
    msg.p = 0.880558565336;
    msg.q = 0.763345457121;
    msg.r = 0.878178987373;
    msg.flags = 220U;

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
    msg.setTimeStamp(0.507535374112);
    msg.setSource(26825U);
    msg.setSourceEntity(251U);
    msg.setDestination(35841U);
    msg.setDestinationEntity(37U);
    msg.path_ref = 712567994U;
    msg.start_lat = 0.0726219252579;
    msg.start_lon = 0.1402209006;
    msg.start_z = 0.280589332603;
    msg.start_z_units = 62U;
    msg.end_lat = 0.760322493832;
    msg.end_lon = 0.547681686364;
    msg.end_z = 0.13058601204;
    msg.end_z_units = 212U;
    msg.lradius = 0.657250759943;
    msg.flags = 74U;
    msg.x = 0.62402887486;
    msg.y = 0.361289612482;
    msg.z = 0.885421643435;
    msg.vx = 0.8277641662;
    msg.vy = 0.0929085965993;
    msg.vz = 0.5329494641;
    msg.course_error = 0.0750985077775;
    msg.eta = 35277U;

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
    msg.setTimeStamp(0.100692677561);
    msg.setSource(16006U);
    msg.setSourceEntity(37U);
    msg.setDestination(32286U);
    msg.setDestinationEntity(227U);
    msg.path_ref = 2328476469U;
    msg.start_lat = 0.0687423881015;
    msg.start_lon = 0.689281790722;
    msg.start_z = 0.109840929343;
    msg.start_z_units = 61U;
    msg.end_lat = 0.242243636706;
    msg.end_lon = 0.278746127705;
    msg.end_z = 0.561435552284;
    msg.end_z_units = 45U;
    msg.lradius = 0.0572449622616;
    msg.flags = 16U;
    msg.x = 0.145707771081;
    msg.y = 0.663740785336;
    msg.z = 0.571368434511;
    msg.vx = 0.862605192443;
    msg.vy = 0.00409037006158;
    msg.vz = 0.730062289807;
    msg.course_error = 0.122115507008;
    msg.eta = 34306U;

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
    msg.setTimeStamp(0.0729967214067);
    msg.setSource(14096U);
    msg.setSourceEntity(112U);
    msg.setDestination(52528U);
    msg.setDestinationEntity(35U);
    msg.path_ref = 3539758354U;
    msg.start_lat = 0.665940437667;
    msg.start_lon = 0.306194559674;
    msg.start_z = 0.221990229088;
    msg.start_z_units = 253U;
    msg.end_lat = 0.384145991786;
    msg.end_lon = 0.603263095584;
    msg.end_z = 0.724720642562;
    msg.end_z_units = 175U;
    msg.lradius = 0.682484529468;
    msg.flags = 198U;
    msg.x = 0.671773575119;
    msg.y = 0.559032489352;
    msg.z = 0.53702263381;
    msg.vx = 0.935358246931;
    msg.vy = 0.0755545596953;
    msg.vz = 0.115290240476;
    msg.course_error = 0.717990618778;
    msg.eta = 36492U;

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
    msg.setTimeStamp(0.907786961561);
    msg.setSource(21922U);
    msg.setSourceEntity(243U);
    msg.setDestination(572U);
    msg.setDestinationEntity(245U);
    msg.k = 0.970187379114;
    msg.m = 0.819666638002;
    msg.n = 0.58700018811;

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
    msg.setTimeStamp(0.284050793175);
    msg.setSource(41642U);
    msg.setSourceEntity(69U);
    msg.setDestination(64643U);
    msg.setDestinationEntity(55U);
    msg.k = 0.826337305788;
    msg.m = 0.688435798959;
    msg.n = 0.896628964013;

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
    msg.setTimeStamp(0.336931192007);
    msg.setSource(40581U);
    msg.setSourceEntity(102U);
    msg.setDestination(56461U);
    msg.setDestinationEntity(247U);
    msg.k = 0.699549633019;
    msg.m = 0.272371802254;
    msg.n = 0.462832013389;

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
    msg.setTimeStamp(0.217418278264);
    msg.setSource(16087U);
    msg.setSourceEntity(13U);
    msg.setDestination(14963U);
    msg.setDestinationEntity(185U);
    msg.p = 0.829354162222;
    msg.i = 0.422505326126;
    msg.d = 0.178642571432;
    msg.a = 0.908462522769;

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
    msg.setTimeStamp(0.917069306973);
    msg.setSource(53442U);
    msg.setSourceEntity(118U);
    msg.setDestination(16650U);
    msg.setDestinationEntity(235U);
    msg.p = 0.239699947506;
    msg.i = 0.993110582783;
    msg.d = 0.441463207604;
    msg.a = 0.541964242152;

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
    msg.setTimeStamp(0.80378811515);
    msg.setSource(11646U);
    msg.setSourceEntity(70U);
    msg.setDestination(3611U);
    msg.setDestinationEntity(40U);
    msg.p = 0.936901489412;
    msg.i = 0.646584435253;
    msg.d = 0.188867954752;
    msg.a = 0.945720617615;

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
    msg.setTimeStamp(0.887130763953);
    msg.setSource(20984U);
    msg.setSourceEntity(217U);
    msg.setDestination(1357U);
    msg.setDestinationEntity(86U);
    msg.op = 24U;

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
    msg.setTimeStamp(0.361171332836);
    msg.setSource(30100U);
    msg.setSourceEntity(48U);
    msg.setDestination(17070U);
    msg.setDestinationEntity(27U);
    msg.op = 14U;

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
    msg.setTimeStamp(0.686452682401);
    msg.setSource(16045U);
    msg.setSourceEntity(209U);
    msg.setDestination(55711U);
    msg.setDestinationEntity(43U);
    msg.op = 39U;

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
    msg.setTimeStamp(0.0117485287035);
    msg.setSource(47021U);
    msg.setSourceEntity(16U);
    msg.setDestination(59331U);
    msg.setDestinationEntity(56U);
    msg.x = 0.824512295892;
    msg.y = 0.672892107042;
    msg.z = 0.718731081627;
    msg.vx = 0.455483667021;
    msg.vy = 0.361153726932;
    msg.vz = 0.950635007184;
    msg.ax = 0.681993756438;
    msg.ay = 0.447294668236;
    msg.az = 0.0626759384117;
    msg.flags = 27142U;

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
    msg.setTimeStamp(0.752647432247);
    msg.setSource(53172U);
    msg.setSourceEntity(193U);
    msg.setDestination(62818U);
    msg.setDestinationEntity(141U);
    msg.x = 0.0390965198141;
    msg.y = 0.462321291083;
    msg.z = 0.0906738801803;
    msg.vx = 0.491592529455;
    msg.vy = 0.81374250409;
    msg.vz = 0.9543271074;
    msg.ax = 0.477404431151;
    msg.ay = 0.819216457057;
    msg.az = 0.134530190693;
    msg.flags = 51222U;

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
    msg.setTimeStamp(0.346812085533);
    msg.setSource(65090U);
    msg.setSourceEntity(216U);
    msg.setDestination(21724U);
    msg.setDestinationEntity(159U);
    msg.x = 0.547213490479;
    msg.y = 0.77403033153;
    msg.z = 0.662518517214;
    msg.vx = 0.552872321904;
    msg.vy = 0.762738950245;
    msg.vz = 0.104904695486;
    msg.ax = 0.561040450463;
    msg.ay = 0.978353548705;
    msg.az = 0.854594000777;
    msg.flags = 28502U;

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
    msg.setTimeStamp(0.757088352697);
    msg.setSource(29144U);
    msg.setSourceEntity(75U);
    msg.setDestination(64949U);
    msg.setDestinationEntity(52U);
    msg.value = 0.0780379051896;

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
    msg.setTimeStamp(0.622788445543);
    msg.setSource(2316U);
    msg.setSourceEntity(214U);
    msg.setDestination(21905U);
    msg.setDestinationEntity(163U);
    msg.value = 0.838507536962;

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
    msg.setTimeStamp(0.189524077409);
    msg.setSource(5134U);
    msg.setSourceEntity(157U);
    msg.setDestination(62903U);
    msg.setDestinationEntity(75U);
    msg.value = 0.339533340724;

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
    msg.setTimeStamp(0.542594771307);
    msg.setSource(10800U);
    msg.setSourceEntity(233U);
    msg.setDestination(45080U);
    msg.setDestinationEntity(56U);
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.path_ref = 1149976577U;
    tmp_msg_0.start_lat = 0.0462311451278;
    tmp_msg_0.start_lon = 0.578240628458;
    tmp_msg_0.start_z = 0.0982193034932;
    tmp_msg_0.start_z_units = 104U;
    tmp_msg_0.end_lat = 0.808809777107;
    tmp_msg_0.end_lon = 0.497387112617;
    tmp_msg_0.end_z = 0.281782101717;
    tmp_msg_0.end_z_units = 100U;
    tmp_msg_0.speed = 0.430105440109;
    tmp_msg_0.speed_units = 208U;
    tmp_msg_0.lradius = 0.948465542463;
    tmp_msg_0.flags = 174U;
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
    msg.setTimeStamp(0.149077015296);
    msg.setSource(48589U);
    msg.setSourceEntity(134U);
    msg.setDestination(38360U);
    msg.setDestinationEntity(95U);
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.path_ref = 439721604U;
    tmp_msg_0.start_lat = 0.785642979551;
    tmp_msg_0.start_lon = 0.45268494472;
    tmp_msg_0.start_z = 0.194923833158;
    tmp_msg_0.start_z_units = 250U;
    tmp_msg_0.end_lat = 0.646094156977;
    tmp_msg_0.end_lon = 0.322388861368;
    tmp_msg_0.end_z = 0.158838369813;
    tmp_msg_0.end_z_units = 190U;
    tmp_msg_0.speed = 0.644695269516;
    tmp_msg_0.speed_units = 125U;
    tmp_msg_0.lradius = 0.590119071378;
    tmp_msg_0.flags = 158U;
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
    msg.setTimeStamp(0.454485293302);
    msg.setSource(12867U);
    msg.setSourceEntity(113U);
    msg.setDestination(16986U);
    msg.setDestinationEntity(114U);
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.path_ref = 4120750952U;
    tmp_msg_0.start_lat = 0.315772448966;
    tmp_msg_0.start_lon = 0.953791666425;
    tmp_msg_0.start_z = 0.746757629905;
    tmp_msg_0.start_z_units = 198U;
    tmp_msg_0.end_lat = 0.921427214313;
    tmp_msg_0.end_lon = 0.633774138525;
    tmp_msg_0.end_z = 0.276309278274;
    tmp_msg_0.end_z_units = 189U;
    tmp_msg_0.speed = 0.286040951601;
    tmp_msg_0.speed_units = 190U;
    tmp_msg_0.lradius = 0.624082275201;
    tmp_msg_0.flags = 179U;
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
    msg.setTimeStamp(0.714833298139);
    msg.setSource(45578U);
    msg.setSourceEntity(66U);
    msg.setDestination(65464U);
    msg.setDestinationEntity(173U);
    msg.timeout = 34094U;
    msg.lat = 0.910299656361;
    msg.lon = 0.11302663786;
    msg.z = 0.995558648704;
    msg.z_units = 171U;
    msg.speed = 0.645377935305;
    msg.speed_units = 252U;
    msg.roll = 0.469375610465;
    msg.pitch = 0.651014014214;
    msg.yaw = 0.730838705272;
    msg.custom.assign("AXLOOXITJEVDMNKKAZ");

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
    msg.setTimeStamp(0.0252341155658);
    msg.setSource(25256U);
    msg.setSourceEntity(244U);
    msg.setDestination(42495U);
    msg.setDestinationEntity(161U);
    msg.timeout = 44832U;
    msg.lat = 0.894712231513;
    msg.lon = 0.0798763270998;
    msg.z = 0.0767612733131;
    msg.z_units = 134U;
    msg.speed = 0.781601058525;
    msg.speed_units = 146U;
    msg.roll = 0.359063186169;
    msg.pitch = 0.175278896408;
    msg.yaw = 0.347441522863;
    msg.custom.assign("IAXWAWQKYLSJBFDVGYVENOTZTXQTYSLUDTJFJWWIYZJZQJUODWGZKLNHIQDBVVMPDVVCATJCDHQWECCRZCRXNYUAOVGFCSWRLERGWHCGSZPHUPJERPQBEUYOWBDBFYNKPLIIOIEKNBSFUTLQKIMQNNLZSJXCOAESZFLAVTYGHIDNHXAASGZRGCHYQZTKSBMUTHQHOO");

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
    msg.setTimeStamp(0.841535734768);
    msg.setSource(38465U);
    msg.setSourceEntity(228U);
    msg.setDestination(45518U);
    msg.setDestinationEntity(147U);
    msg.timeout = 34962U;
    msg.lat = 0.179200366958;
    msg.lon = 0.334876869718;
    msg.z = 0.0920057996898;
    msg.z_units = 44U;
    msg.speed = 0.693389253711;
    msg.speed_units = 214U;
    msg.roll = 0.484061323261;
    msg.pitch = 0.455214378355;
    msg.yaw = 0.379683530984;
    msg.custom.assign("VSJPAOHFLPEUFQAOQCGWTASCCZTXUVCNYEDSXWSFVGMLNSEPJEZYKLEBKDPGNUHKFYTLIKHMFVVLHPKPDLDFDGGQBOSMDWJXABNRDTJRXHBZBJCOLM");

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
    msg.setTimeStamp(0.542210694299);
    msg.setSource(57602U);
    msg.setSourceEntity(81U);
    msg.setDestination(58781U);
    msg.setDestinationEntity(241U);
    msg.timeout = 48986U;
    msg.lat = 0.876219908087;
    msg.lon = 0.254326195196;
    msg.z = 0.207750198618;
    msg.z_units = 196U;
    msg.speed = 0.938331120204;
    msg.speed_units = 104U;
    msg.duration = 46566U;
    msg.radius = 0.723681899616;
    msg.flags = 74U;
    msg.custom.assign("LTASRCVRALZLPBHZIUTPEFFUSGJJKRCYWTFSYQYPDGCNDLXQSFCOGCZGSICNKJEIBVAYGYLJWOKSOBJQRTAATQWLYSQQMRYNOKGCHUEVSGMINXERCHORBPBDUXA");

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
    msg.setTimeStamp(0.820811938966);
    msg.setSource(33361U);
    msg.setSourceEntity(203U);
    msg.setDestination(56420U);
    msg.setDestinationEntity(143U);
    msg.timeout = 21081U;
    msg.lat = 0.545368668032;
    msg.lon = 0.392145595682;
    msg.z = 0.376647665683;
    msg.z_units = 114U;
    msg.speed = 0.286449233597;
    msg.speed_units = 27U;
    msg.duration = 61705U;
    msg.radius = 0.102223936172;
    msg.flags = 242U;
    msg.custom.assign("BNROOEXJZHBMNYNXDHKGQGDJWAQCNFBWXIBRRVKCNCDESLJUJUSJGRNKWATGUTADIOHXAJCHTSZGHEIMEDBXRFKOBGAOVIBYFMVPFTNUVPZWPZLAMQMKSIFMWXXPSWDZXPCYEIYHHEGDRKPALDUTKKGVSGFQELTFWCAOLKJHFUAPSMOIJJCPQRQFMNROTBDQQHYCTZSMVGFXZNUQLYYJZEOTWIVUPBPEHKYNYUREIORVXBZWY");

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
    msg.setTimeStamp(1.70777795905e-07);
    msg.setSource(10982U);
    msg.setSourceEntity(39U);
    msg.setDestination(53187U);
    msg.setDestinationEntity(59U);
    msg.timeout = 41435U;
    msg.lat = 0.0650410259998;
    msg.lon = 0.616168095806;
    msg.z = 0.709532685917;
    msg.z_units = 189U;
    msg.speed = 0.305447473496;
    msg.speed_units = 248U;
    msg.duration = 22569U;
    msg.radius = 0.149595861765;
    msg.flags = 163U;
    msg.custom.assign("EPSHWOWBUW");

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
    msg.setTimeStamp(0.164988378327);
    msg.setSource(37250U);
    msg.setSourceEntity(7U);
    msg.setDestination(12596U);
    msg.setDestinationEntity(93U);
    msg.custom.assign("SUPTOYPNHBHMLEMRVIPJDEJKTOAJOMDITMEWFZLJOGDXKQWXVWLFRIOZUPFHQMKOUWUQDLVQVELKBBCSTEJJGIFMDEGSUSWTAYNZDRQEUXUVQCNOVEZXACACKTWQCFMFFQNYSQYWWHBRSUKPTVZOPLGJPXFSYVAGYRRSDAIGIRMWHYGNKPEIAOC");

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
    msg.setTimeStamp(0.641077165672);
    msg.setSource(62298U);
    msg.setSourceEntity(163U);
    msg.setDestination(16020U);
    msg.setDestinationEntity(103U);
    msg.custom.assign("JLPARZSTZHYARHKIBWCVJHKUHAPOBYQUCEWMSWEIRXQSHLYUEEFSYMZBMMJZYLWVWXIPUDVPCOIAEXXBCYFIJVNWSXZBVGOGILDRDFLIYVLBNXZARDMQQIFARBSPCQFAHCUSKGFKBHTVHKTROJOOKDCSAKLXRWFBCMOZPQXNDEYTNQCGGJGLKNJJEDWFEUVDUTHO");

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
    msg.setTimeStamp(0.857065682667);
    msg.setSource(33668U);
    msg.setSourceEntity(58U);
    msg.setDestination(30779U);
    msg.setDestinationEntity(22U);
    msg.custom.assign("UCXQAGYZOUTVEBTOQOKOEHJHCQMKIRIYINNPJTYGNRJJBWSFGUPFCLADRYLLQABKNQFSJHHPFQCWHWBVWRBJLLFZRUXXKSQPROKMIMFDPPNUMC");

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
    msg.setTimeStamp(0.489393983399);
    msg.setSource(32686U);
    msg.setSourceEntity(203U);
    msg.setDestination(61171U);
    msg.setDestinationEntity(155U);
    msg.timeout = 3550U;
    msg.lat = 0.670112809872;
    msg.lon = 0.0221179714702;
    msg.z = 0.0666809460336;
    msg.z_units = 151U;
    msg.duration = 52722U;
    msg.speed = 0.955685579257;
    msg.speed_units = 157U;
    msg.type = 26U;
    msg.radius = 0.249945491423;
    msg.length = 0.699960401844;
    msg.bearing = 0.571449993747;
    msg.direction = 123U;
    msg.custom.assign("LAYVNRUTRDNDOGNFYQPUPDOQSTQQYWYKVMMLTBWSPPB");

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
    msg.setTimeStamp(0.882141166332);
    msg.setSource(12257U);
    msg.setSourceEntity(107U);
    msg.setDestination(6212U);
    msg.setDestinationEntity(244U);
    msg.timeout = 46476U;
    msg.lat = 0.568512267461;
    msg.lon = 0.982208322136;
    msg.z = 0.193550883807;
    msg.z_units = 128U;
    msg.duration = 25307U;
    msg.speed = 0.488721724533;
    msg.speed_units = 94U;
    msg.type = 192U;
    msg.radius = 0.342601331508;
    msg.length = 0.106538282278;
    msg.bearing = 0.929100333423;
    msg.direction = 240U;
    msg.custom.assign("JGRXPMRTJQCFHOPSKFSIXGRGLZVTLEYDBSCEOUYYZXXIAZWDLRXSBHLJUDIFGHELNQNKSQPU");

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
    msg.setTimeStamp(0.512812914954);
    msg.setSource(27983U);
    msg.setSourceEntity(55U);
    msg.setDestination(8546U);
    msg.setDestinationEntity(106U);
    msg.timeout = 21164U;
    msg.lat = 0.0628070294671;
    msg.lon = 0.916159155863;
    msg.z = 0.421658896787;
    msg.z_units = 55U;
    msg.duration = 53654U;
    msg.speed = 0.998045382487;
    msg.speed_units = 137U;
    msg.type = 153U;
    msg.radius = 0.358782001732;
    msg.length = 0.722289387738;
    msg.bearing = 0.2406003179;
    msg.direction = 95U;
    msg.custom.assign("FGIBINQWKWJVOHLCQXHQHFMNCWUYNJLDZTVXNRTGPWFZSGKDYPIAAUHGYMTPHWANRXVVSDXTVBUJZMIQEZHPBTJEOZOILGFBACFMXKY");

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
    msg.setTimeStamp(0.610693540318);
    msg.setSource(45189U);
    msg.setSourceEntity(8U);
    msg.setDestination(6731U);
    msg.setDestinationEntity(156U);
    msg.duration = 20155U;
    msg.custom.assign("KZZJPNEYQMERXJUBNBYDXCFRK");

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
    msg.setTimeStamp(0.687369132164);
    msg.setSource(29291U);
    msg.setSourceEntity(212U);
    msg.setDestination(7865U);
    msg.setDestinationEntity(70U);
    msg.duration = 47337U;
    msg.custom.assign("UTYGLHNKRTKEPZVCXOADOGYOOEVEFHGBDTXFOETLIEXAXMPBMWFVSIJKSRDOVMFGDRUVJCWNHSTQDHLLJVMDNEIUABNGCEQPJJUAARARUTENATFRUIGDXSRGSWCQBTBXNJWMRLDKMGTLIWHKKCCSKFXMJPYCIV");

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
    msg.setTimeStamp(0.877349786686);
    msg.setSource(33670U);
    msg.setSourceEntity(252U);
    msg.setDestination(5132U);
    msg.setDestinationEntity(236U);
    msg.duration = 38998U;
    msg.custom.assign("JEKBUYGZCEDYYQFIRDKGQYWHNDHNMHFKJHWMRDEPBTVAPVBHLAPQTSECKRELDYVTSNTXJMGSPNNPXSORNVALVCYUSTTETWZABXDPNWAEBDFCYJCI");

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
    msg.setTimeStamp(0.184631332968);
    msg.setSource(49781U);
    msg.setSourceEntity(140U);
    msg.setDestination(4784U);
    msg.setDestinationEntity(205U);
    IMC::DesiredThrottle tmp_msg_0;
    tmp_msg_0.value = 0.646864465692;
    msg.control.set(tmp_msg_0);
    msg.duration = 31557U;
    msg.custom.assign("OJIUPVQAXPGWRHSSSUUPCJQVVCQXSHVWRRQNKPIILOZQ");

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
    msg.setTimeStamp(0.432715431038);
    msg.setSource(47924U);
    msg.setSourceEntity(57U);
    msg.setDestination(23670U);
    msg.setDestinationEntity(112U);
    IMC::DesiredZ tmp_msg_0;
    tmp_msg_0.value = 0.137005919503;
    tmp_msg_0.z_units = 230U;
    msg.control.set(tmp_msg_0);
    msg.duration = 14838U;
    msg.custom.assign("BRHEUTUVXTIJVGEXUJESFKGRNAAQHBKOIUNUUMLWDJPVCHRS");

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
    msg.setTimeStamp(0.120145573666);
    msg.setSource(4924U);
    msg.setSourceEntity(114U);
    msg.setDestination(30533U);
    msg.setDestinationEntity(36U);
    IMC::DesiredThrottle tmp_msg_0;
    tmp_msg_0.value = 0.0484984716265;
    msg.control.set(tmp_msg_0);
    msg.duration = 37196U;
    msg.custom.assign("IERTFITZYZXRJIUFJEKQYJASJUDUQVQSUTYOVAQJAVPSBAMPCWMDBWOUEFZJDKBNMACCLMIUEXTQZBVLKGLCPFAQYTOCRULFXAEERTNSXNQNYSCRNWKTDEMZOVMXILRZVNXKRDGZPHSGKGLOIHJAKGZPFYKAGFMKWBCOFIVXOFJNQPMWPGBNOSNZGHOTHOYTQPKHPRWSLCHE");

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
    msg.setTimeStamp(0.00133323019674);
    msg.setSource(19390U);
    msg.setSourceEntity(165U);
    msg.setDestination(36386U);
    msg.setDestinationEntity(201U);
    msg.timeout = 11540U;
    msg.lat = 0.775750079478;
    msg.lon = 0.490096615741;
    msg.z = 0.313208620915;
    msg.z_units = 209U;
    msg.speed = 0.767286853269;
    msg.speed_units = 43U;
    msg.bearing = 0.331621768347;
    msg.cross_angle = 0.800502584562;
    msg.width = 0.435114408186;
    msg.length = 0.767185392114;
    msg.hstep = 0.517043147151;
    msg.coff = 191U;
    msg.alternation = 205U;
    msg.flags = 131U;
    msg.custom.assign("OHVUFDPTEXGXCEIXKDGGHCSFVQCPHTOCGOLDOMTIFMGVOZCKVXFLWJGNLBPWANZUNUNPTQQNJFWEGNBRZPEYBHYDPWWBFAJCBESEJODXFBSUTUQTIRBWRZOEAJVJPBAWVSERHXKTHCMJJTTRUUXZYAKWXMVEVNDINROBSRMFKAPZCLAGLZYS");

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
    msg.setTimeStamp(0.0141146605038);
    msg.setSource(49735U);
    msg.setSourceEntity(65U);
    msg.setDestination(35041U);
    msg.setDestinationEntity(203U);
    msg.timeout = 21783U;
    msg.lat = 0.174499288383;
    msg.lon = 0.477105026373;
    msg.z = 0.0202403898683;
    msg.z_units = 237U;
    msg.speed = 0.581594599887;
    msg.speed_units = 225U;
    msg.bearing = 0.833811509914;
    msg.cross_angle = 0.196507947286;
    msg.width = 0.727174600007;
    msg.length = 0.207050888476;
    msg.hstep = 0.00331756907335;
    msg.coff = 156U;
    msg.alternation = 157U;
    msg.flags = 106U;
    msg.custom.assign("FNNBZMDNQTMUXMOJFBXPMWPATJOIRXYHLUXPYKWOKPGUCBLEXYIEBDVEMJIEYTGQLJGVFGCETPDVNXATOQZHBQQATKEULZDBNNJLLKVJKRIAWDFDPQLUXIVHCZYZKSCDURZVOJZG");

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
    msg.setTimeStamp(0.0413288873672);
    msg.setSource(31448U);
    msg.setSourceEntity(52U);
    msg.setDestination(4120U);
    msg.setDestinationEntity(50U);
    msg.timeout = 24882U;
    msg.lat = 0.380150693865;
    msg.lon = 0.246507888727;
    msg.z = 0.663914143019;
    msg.z_units = 2U;
    msg.speed = 0.0693549573761;
    msg.speed_units = 90U;
    msg.bearing = 0.452760806108;
    msg.cross_angle = 0.748127850756;
    msg.width = 0.750082568736;
    msg.length = 0.763024557572;
    msg.hstep = 0.641086571984;
    msg.coff = 250U;
    msg.alternation = 85U;
    msg.flags = 4U;
    msg.custom.assign("UZQNNKGYVLLTNTNPNWXHAGCFVJUAUOPEWCSIWPCQDNDJNTEZIGKMGNBJLTLLYVAOFAEZXZHUHGMQITKROXFDYUOSWDOFIWFMYTDFPDBIUTDEPVOFIXCOOVZGVCKQKWHKANAFIFRUZVRCBRHJQBVXYQTMEHZ");

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
    msg.setTimeStamp(0.202718253752);
    msg.setSource(61366U);
    msg.setSourceEntity(169U);
    msg.setDestination(11719U);
    msg.setDestinationEntity(141U);
    msg.timeout = 51514U;
    msg.lat = 0.685142957131;
    msg.lon = 0.429282030679;
    msg.z = 0.409589681638;
    msg.z_units = 50U;
    msg.speed = 0.00790719059966;
    msg.speed_units = 195U;
    msg.custom.assign("GWVPOVEFJJJNCPJUIWPAHOFOOZDQIBNOZGEKYWMTUBGCNGRDXUXGTRWCTDSQFSTIFLQYUIQRGLUBSIMRMGHNWCJPWMBICUQPYXOHBPWBUJVNTYXKSNYHRLBSLHUOKAFKDCEXXBPRRVAZCKAODGBMAYSVSAFGVFTNXJBQVWEKJYEHIZLMFVDTNVWIWQRYRDLAZKLTADUEXCPTIPJYLOEEMFDVZZRLHNAZOMHQXCMEHNEZKQH");

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
    msg.setTimeStamp(0.701003814563);
    msg.setSource(18011U);
    msg.setSourceEntity(17U);
    msg.setDestination(37014U);
    msg.setDestinationEntity(110U);
    msg.timeout = 38693U;
    msg.lat = 0.783189743158;
    msg.lon = 0.961825021447;
    msg.z = 0.966739438428;
    msg.z_units = 250U;
    msg.speed = 0.97954547789;
    msg.speed_units = 31U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.271973918195;
    tmp_msg_0.y = 0.148050738595;
    tmp_msg_0.z = 0.038660045377;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("ZYLAWYOJLNYYETKZGVOXVNMUHLTIRLACTMCXCCLBFGLALPYAEJIWWFUZQSOWBEVFNVKZGAWBLHJ");

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
    msg.setTimeStamp(0.932788767651);
    msg.setSource(13279U);
    msg.setSourceEntity(232U);
    msg.setDestination(33047U);
    msg.setDestinationEntity(238U);
    msg.timeout = 3204U;
    msg.lat = 0.234047043565;
    msg.lon = 0.442864806229;
    msg.z = 0.126044400474;
    msg.z_units = 41U;
    msg.speed = 0.968173676655;
    msg.speed_units = 126U;
    msg.custom.assign("CXCMKRIOXNJEFFSZNIJDY");

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
    msg.setTimeStamp(0.367258790531);
    msg.setSource(64923U);
    msg.setSourceEntity(108U);
    msg.setDestination(64332U);
    msg.setDestinationEntity(213U);
    msg.x = 0.28817128952;
    msg.y = 0.176780848342;
    msg.z = 0.494343492386;

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
    msg.setTimeStamp(0.426940744919);
    msg.setSource(60536U);
    msg.setSourceEntity(86U);
    msg.setDestination(13189U);
    msg.setDestinationEntity(189U);
    msg.x = 0.883657720369;
    msg.y = 0.485355510983;
    msg.z = 0.887298185523;

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
    msg.setTimeStamp(0.0942226030873);
    msg.setSource(31723U);
    msg.setSourceEntity(118U);
    msg.setDestination(40689U);
    msg.setDestinationEntity(180U);
    msg.x = 0.717631617074;
    msg.y = 0.995158643287;
    msg.z = 0.44708271535;

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
    msg.setTimeStamp(0.099012703704);
    msg.setSource(5703U);
    msg.setSourceEntity(33U);
    msg.setDestination(63010U);
    msg.setDestinationEntity(243U);
    msg.timeout = 37417U;
    msg.lat = 0.743288825423;
    msg.lon = 0.763340177659;
    msg.z = 0.330321021595;
    msg.z_units = 123U;
    msg.amplitude = 0.550659209658;
    msg.pitch = 0.485538187913;
    msg.speed = 0.770500980199;
    msg.speed_units = 235U;
    msg.custom.assign("PIWWDZDKJIIGFHPLNWFCSPLYTZJHTAKXXSMYEBYHXOOMNQESOTQCNNZERDGDJJALGWBNMIEHOVXVFCCKETKLRFWDKNSCGPAOVNTRAIPGSCEAJRTTBKQPZTAODAYVPLUBLYRMHAFQVPHIRZXZJQQWREAUWRURC");

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
    msg.setTimeStamp(0.0531786947871);
    msg.setSource(49195U);
    msg.setSourceEntity(184U);
    msg.setDestination(41233U);
    msg.setDestinationEntity(140U);
    msg.timeout = 29118U;
    msg.lat = 0.594155214329;
    msg.lon = 0.944907549;
    msg.z = 0.243782753664;
    msg.z_units = 228U;
    msg.amplitude = 0.877659446997;
    msg.pitch = 0.149330940164;
    msg.speed = 0.3433091654;
    msg.speed_units = 12U;
    msg.custom.assign("REKUJUWONMRDRTEFHWZUYGULBYAPTIXPPSDIURXTCSBTMOYWALEJTDYMTQFJXOJCJRJERCUBNWBKOSCLMBFITGFOLZQEIEZESPCPZWEKBCKDXCQVVVK");

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
    msg.setTimeStamp(0.366574154504);
    msg.setSource(65430U);
    msg.setSourceEntity(2U);
    msg.setDestination(54398U);
    msg.setDestinationEntity(127U);
    msg.timeout = 4284U;
    msg.lat = 0.237253919942;
    msg.lon = 0.520577608482;
    msg.z = 0.911917161284;
    msg.z_units = 81U;
    msg.amplitude = 0.170905284504;
    msg.pitch = 0.825764828084;
    msg.speed = 0.110427864629;
    msg.speed_units = 219U;
    msg.custom.assign("JEAJHXDNISHWLHCMRDDFLKZ");

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
    msg.setTimeStamp(0.706268508108);
    msg.setSource(53482U);
    msg.setSourceEntity(216U);
    msg.setDestination(32831U);
    msg.setDestinationEntity(187U);

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
    msg.setTimeStamp(0.8462278346);
    msg.setSource(30526U);
    msg.setSourceEntity(165U);
    msg.setDestination(8278U);
    msg.setDestinationEntity(250U);

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
    msg.setTimeStamp(0.524649325473);
    msg.setSource(14717U);
    msg.setSourceEntity(129U);
    msg.setDestination(63393U);
    msg.setDestinationEntity(23U);

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
    msg.setTimeStamp(0.449419706943);
    msg.setSource(18043U);
    msg.setSourceEntity(223U);
    msg.setDestination(43974U);
    msg.setDestinationEntity(185U);
    msg.lat = 0.678369709551;
    msg.lon = 0.121284622431;
    msg.z = 0.403322353134;
    msg.z_units = 158U;
    msg.radius = 0.605038550466;
    msg.duration = 25208U;
    msg.speed = 0.260481147414;
    msg.speed_units = 52U;
    msg.popup_period = 22179U;
    msg.popup_duration = 28783U;
    msg.flags = 164U;
    msg.custom.assign("XMFFQSWYIOVJYPCVXHDLELPPXTVMFFDUZZTCOSAJTRAUJTRNJJAWXQLSTWNVRGNMWHISNKQVGMSVXDWOENLTUVEAEYNJKHFPUHVTHWKYWFGZPBFXKGNYKYGYWFKODDJQUZFLASKWBSHGABPGQHIQGMRIVZMSRSUYIAORLBTHEPMWRIVJUBQYHAQBKSXNZTNGICIMRCJXRFDCALZ");

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
    msg.setTimeStamp(0.877187180459);
    msg.setSource(44305U);
    msg.setSourceEntity(236U);
    msg.setDestination(44720U);
    msg.setDestinationEntity(193U);
    msg.lat = 0.696389463662;
    msg.lon = 0.359986888398;
    msg.z = 0.718933038222;
    msg.z_units = 239U;
    msg.radius = 0.399739066826;
    msg.duration = 19751U;
    msg.speed = 0.570482785309;
    msg.speed_units = 240U;
    msg.popup_period = 64479U;
    msg.popup_duration = 63641U;
    msg.flags = 158U;
    msg.custom.assign("EWBSPZTIXTZLRMHVORARIEHFGOIACPNDROIDQNRWMBDURWRDXUVAONJAYTJFAJKUMFOLJPGRZPCKWXKEMYKGHIHZTEGEQEQSTIPVTSUW");

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
    msg.setTimeStamp(0.504871766676);
    msg.setSource(32197U);
    msg.setSourceEntity(253U);
    msg.setDestination(55062U);
    msg.setDestinationEntity(148U);
    msg.lat = 0.375595484613;
    msg.lon = 0.00117034577157;
    msg.z = 0.144969701931;
    msg.z_units = 47U;
    msg.radius = 0.785019418463;
    msg.duration = 15327U;
    msg.speed = 0.7245822763;
    msg.speed_units = 158U;
    msg.popup_period = 30149U;
    msg.popup_duration = 56280U;
    msg.flags = 150U;
    msg.custom.assign("OYNSLSDYSXCXKTXHZJMLSIBQDPMPRKBUYPQVVFBNPZIEVRQYLWCDCAGEWHEOTAMXCEIJOCFJRBULIKUPGZCVOVEHELL");

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
    msg.setTimeStamp(0.656422925297);
    msg.setSource(37717U);
    msg.setSourceEntity(235U);
    msg.setDestination(59379U);
    msg.setDestinationEntity(26U);
    msg.timeout = 63406U;
    msg.flags = 50U;
    msg.lat = 0.659525195978;
    msg.lon = 0.488996973674;
    msg.start_z = 0.723696497198;
    msg.start_z_units = 128U;
    msg.end_z = 0.138336942886;
    msg.end_z_units = 63U;
    msg.radius = 0.983591379145;
    msg.speed = 0.306061141325;
    msg.speed_units = 170U;
    msg.custom.assign("VGOIFDLNJESDNULDIAXZVMQSALMRCXHFRNFVZSEYHLPGMQHUKMFCTXNUMFNHRAYPOLTLYWLXBSROKWBXUPEXUEDNICNYGZNWWYDURKPDBUXOKYWXHOFRGZMJCWFWVEGMRXZEEEPOVJSUEIYZLFRJDCLJYSHJABKAAUXSMTHTVARWLPZQGFKCHCTNQVQIISQZCTMVICZKZTSYJDAAOKBTDBQJFPPTPVGIUBBBNORYKSPOWHVWAQTEJCQMDIGBHO");

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
    msg.setTimeStamp(0.959476668109);
    msg.setSource(36567U);
    msg.setSourceEntity(65U);
    msg.setDestination(43165U);
    msg.setDestinationEntity(31U);
    msg.timeout = 6294U;
    msg.flags = 39U;
    msg.lat = 0.189277575382;
    msg.lon = 0.424654835297;
    msg.start_z = 0.617808131982;
    msg.start_z_units = 192U;
    msg.end_z = 0.495833034765;
    msg.end_z_units = 114U;
    msg.radius = 0.234399539705;
    msg.speed = 0.464574173693;
    msg.speed_units = 155U;
    msg.custom.assign("PCRIBIRIHQSDPDKGCDRIGEYBXEXCGCGDZKQBOIWLIBOYGPTTZHMUKBJYYKTDZIGKFKAX");

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
    msg.setTimeStamp(0.822957975174);
    msg.setSource(33500U);
    msg.setSourceEntity(240U);
    msg.setDestination(30252U);
    msg.setDestinationEntity(7U);
    msg.timeout = 33743U;
    msg.flags = 129U;
    msg.lat = 0.0839587220421;
    msg.lon = 0.684813862207;
    msg.start_z = 0.738697021811;
    msg.start_z_units = 182U;
    msg.end_z = 0.234963390434;
    msg.end_z_units = 235U;
    msg.radius = 0.898553235244;
    msg.speed = 0.807220419498;
    msg.speed_units = 189U;
    msg.custom.assign("AQBYUCUZOWMSMOERSLNIQFRQBDDQVKICXNYKTKLEWHPHPZTVEVFTRYBZKEWNFVJOCDJCBXTBQEUGZGDJKXURKXBHNTNZOXSTRQNMAPTVAUKZBSUQSYZFMPERDJPSMHOQPYCYNWFIPLDECEXHIVLQLAWFPBXJIGARESWLMBECKCJGOUJJRYPFIRINLWWYKAYZGPTWDOXQFJBSYACOHHVGGVRDNIZXUKTAMLWDSOGX");

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
    msg.setTimeStamp(0.0265752419382);
    msg.setSource(992U);
    msg.setSourceEntity(143U);
    msg.setDestination(64286U);
    msg.setDestinationEntity(55U);
    msg.timeout = 11975U;
    msg.lat = 0.900680195894;
    msg.lon = 0.461873920829;
    msg.z = 0.677477595764;
    msg.z_units = 44U;
    msg.speed = 0.892246563897;
    msg.speed_units = 243U;
    msg.custom.assign("WFZISSNFEXUSWCELSZORHBQCSMEWFMPGLBOFOGPEVUHCLUYKCOJUDWPKJLITSVRHGYVTCTMGTVSPDAZHZWHPKARGUXNKKDAZIYJLUXKANEBSIFOPGZCWDJJCKYGXTXAKYMDBEIFQRXUAYM");

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
    msg.setTimeStamp(0.529794115166);
    msg.setSource(24857U);
    msg.setSourceEntity(127U);
    msg.setDestination(32737U);
    msg.setDestinationEntity(195U);
    msg.timeout = 10262U;
    msg.lat = 0.211983807504;
    msg.lon = 0.081741874175;
    msg.z = 0.614724478267;
    msg.z_units = 140U;
    msg.speed = 0.585257246571;
    msg.speed_units = 156U;
    msg.custom.assign("MPAILKYBGTFNCTGKYALCIOSHIVBSIYCDJQUZCXGQABLNKOJMKWASSHMRZSIROTWVGBQAMPOZEXZYHFIGUUDTPLQSKXKPKVFVXUKEMESGLYBRZUGTUUFENACCUWXM");

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
    msg.setTimeStamp(0.815119616087);
    msg.setSource(42045U);
    msg.setSourceEntity(154U);
    msg.setDestination(55147U);
    msg.setDestinationEntity(92U);
    msg.timeout = 52242U;
    msg.lat = 0.163481093979;
    msg.lon = 0.311087770627;
    msg.z = 0.216434875692;
    msg.z_units = 32U;
    msg.speed = 0.175237999294;
    msg.speed_units = 167U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.294466288288;
    tmp_msg_0.y = 0.498115361744;
    tmp_msg_0.z = 0.506992615925;
    tmp_msg_0.t = 0.981546218617;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("HVUFBIHSVRGHFUSDOCOPVJGZFLOSZDYVBNZAPJAMKOQERIWQHSFMUSTMKRRSQMTQSNLRWDYGYECUEXTBCTCGLTWZJCKKOKHUWJRNUTRIXNYIBMIAFZDYPAIXQXJLNWQNIYVXAFIGDPMCCWEDUFMLLHVDZBBBZZCMQKA");

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
    msg.setTimeStamp(0.668584984443);
    msg.setSource(52528U);
    msg.setSourceEntity(14U);
    msg.setDestination(36900U);
    msg.setDestinationEntity(218U);
    msg.x = 0.175453466239;
    msg.y = 0.332464654382;
    msg.z = 0.209456689027;
    msg.t = 0.382341632292;

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
    msg.setTimeStamp(0.0997085011972);
    msg.setSource(20035U);
    msg.setSourceEntity(76U);
    msg.setDestination(53062U);
    msg.setDestinationEntity(210U);
    msg.x = 0.525419043621;
    msg.y = 0.405522963798;
    msg.z = 0.288280829189;
    msg.t = 0.607997108207;

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
    msg.setTimeStamp(0.553761145617);
    msg.setSource(21250U);
    msg.setSourceEntity(75U);
    msg.setDestination(48236U);
    msg.setDestinationEntity(79U);
    msg.x = 0.809820909797;
    msg.y = 0.227667143104;
    msg.z = 0.567168917525;
    msg.t = 0.857561244771;

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
    msg.setTimeStamp(0.646448166222);
    msg.setSource(57837U);
    msg.setSourceEntity(111U);
    msg.setDestination(54232U);
    msg.setDestinationEntity(182U);
    msg.timeout = 11482U;
    msg.name.assign("EYMTUADCLHWKRSIUHYVYSNBLJCIGGBZHUAJLJKCEWJVXVUDGBQXCNONZHHCAFEOFKKJVLGDZRZAZSHOQJMSIDOMLVKQWQOURLWEHMBJIIFTSOWAVRIPUHTADVOQPGADNUPQXGSVTDRTQJGFRWEWOEGVTUNTRENRNQCJOBYITNUFLBBKYGLPNPXPTMWMFZZKRQLFGYCKIBDESKFQMUXPEIZIZSCYXFHBFYEZVSCMXYAKSH");
    msg.custom.assign("POMPTKNWOVGGSPAFDBZYXGOVQTODSUOZIMABBRQFJONAXFJWOYDTCRYVYXXPNIOBWXDGFITSUWQUCVZLYSIMVLQLCMCKIDRBVMYIRIMUPJXEEQGFTOLJFHELVLNKBCPAKMFDPAZHWEMHEWWZDDEHTZGHAECUWZPDUNWQQLYAOLCGKGEASZCXUJJKNQSRVARAPVHWIQSDRNRIKBGVBYYKBJGXCIQLZULUTKTUHHSHNFRFXSENC");

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
    msg.setTimeStamp(0.563489948534);
    msg.setSource(62769U);
    msg.setSourceEntity(252U);
    msg.setDestination(33367U);
    msg.setDestinationEntity(93U);
    msg.timeout = 40542U;
    msg.name.assign("PSAEDTWRCNGRYHZLAMSXTBSIBNQNCFSMYMBGMDWVSBRABTBPLUUCTFFSIVMTQROEEGKZWYGZDLKQZWFFTFFVUCAJLGJUEAJDJGVKMDKGNXNJBGRKCHYIQIUXDXLRLYOPDTCIASDRRJAKNFVIEZQEBWOKVVP");
    msg.custom.assign("PAFSGECORNILVEPBPFWTZMHXWVABNTWUJDMHIIUVCHVAOEPPKDHJZNZYQYLOTNDFLRMOWLADGZYLKWFSXHIBHWJNPXHSCKSMEQCQVRDOPOQETQSTBRRDJNUPVGLDRDEMEAYBZZG");

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
    msg.setTimeStamp(0.377668514055);
    msg.setSource(46128U);
    msg.setSourceEntity(97U);
    msg.setDestination(14297U);
    msg.setDestinationEntity(55U);
    msg.timeout = 29615U;
    msg.name.assign("SVYEEJYKSRKSFHVUFJBKPSCMZPWIDHEYTMZWQBLVNLIQPJYR");
    msg.custom.assign("KPPXBWGFJRAINALTFMRMCMFPZMSSLSXNTFTQGHSRLUOJXGVTZYNCQRWYDUXAJQCJBEIASNZYPQKAAPKVZNIWOLWSEEKYBGBXIZTWEYUHFAKEZUZQLCRWGJAFDSVYOZTSOKKHMHUJFQMIEBVUFTVYRLUKEGFDVZLQGWCHYTGRDELHXDCTVPNEJYVMHFDOOSMBWVXPBJDBQDDPUDYBHRVNSAXUCZHAXIJO");

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
    msg.setTimeStamp(0.718070805864);
    msg.setSource(62194U);
    msg.setSourceEntity(84U);
    msg.setDestination(4171U);
    msg.setDestinationEntity(34U);
    msg.lat = 0.647879838686;
    msg.lon = 0.702420428453;
    msg.z = 0.0646179054583;
    msg.z_units = 117U;
    msg.speed = 0.563723340508;
    msg.speed_units = 232U;
    msg.start_time = 0.579475209965;
    msg.custom.assign("WYZBFHOWFXZJAXZEUAPHHLWCFGPJXSITXJQTMAVJEXAFYNLOWUHQWHKVJPTBPAQRSNJLEKLHYGIDKGZJMXQZLRTGKOVWEIXZJDOMZVGNOVEIMKMCCRIBXMTRESLGSKKNGDDSBLUEAVZYYROYPRZBNDSFEIIVKNQQMNWQQOUINOYLMHFUBUPTSPTIFIDPHG");

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
    msg.setTimeStamp(0.498711937983);
    msg.setSource(25466U);
    msg.setSourceEntity(113U);
    msg.setDestination(36814U);
    msg.setDestinationEntity(65U);
    msg.lat = 0.285939718183;
    msg.lon = 0.364708196363;
    msg.z = 0.993987562934;
    msg.z_units = 102U;
    msg.speed = 0.251719581861;
    msg.speed_units = 16U;
    msg.start_time = 0.601169349329;
    msg.custom.assign("DAHKTYSXOGTCGFMFKAROTSWRDQSKLWBCLBPVBMYBNZGKGFQSEMBAUAHIQORBTEDGDSCVFAXHJZBDPUNQAQE");

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
    msg.setTimeStamp(0.8459049453);
    msg.setSource(2124U);
    msg.setSourceEntity(160U);
    msg.setDestination(39305U);
    msg.setDestinationEntity(91U);
    msg.lat = 0.72729466101;
    msg.lon = 0.251318266313;
    msg.z = 0.587376604054;
    msg.z_units = 178U;
    msg.speed = 0.302905228639;
    msg.speed_units = 236U;
    msg.start_time = 0.259420166692;
    msg.custom.assign("UJVHWVMLVYIACOQVGGRNDINWXNKJUSRTKAMNYIUGHCEOGNBXFRYMAJYZJOOUOHSSYNPGRJLEYEVPYFRIBSPXETRTHZBUYOEHTU");

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
    msg.setTimeStamp(0.612925364289);
    msg.setSource(25266U);
    msg.setSourceEntity(37U);
    msg.setDestination(52154U);
    msg.setDestinationEntity(97U);
    msg.vid = 9336U;
    msg.off_x = 0.746290983296;
    msg.off_y = 0.233736378657;
    msg.off_z = 0.516335504278;

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
    msg.setTimeStamp(0.347638449306);
    msg.setSource(14006U);
    msg.setSourceEntity(214U);
    msg.setDestination(62416U);
    msg.setDestinationEntity(115U);
    msg.vid = 6469U;
    msg.off_x = 0.731716876464;
    msg.off_y = 0.0527946036741;
    msg.off_z = 0.120890032719;

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
    msg.setTimeStamp(0.866008840492);
    msg.setSource(9180U);
    msg.setSourceEntity(242U);
    msg.setDestination(55803U);
    msg.setDestinationEntity(78U);
    msg.vid = 45875U;
    msg.off_x = 0.54399455539;
    msg.off_y = 0.619540115084;
    msg.off_z = 0.489775754295;

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
    msg.setTimeStamp(0.435907085233);
    msg.setSource(35859U);
    msg.setSourceEntity(243U);
    msg.setDestination(22278U);
    msg.setDestinationEntity(233U);

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
    msg.setTimeStamp(0.44034148515);
    msg.setSource(33854U);
    msg.setSourceEntity(137U);
    msg.setDestination(47498U);
    msg.setDestinationEntity(234U);

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
    msg.setTimeStamp(0.34411258516);
    msg.setSource(63746U);
    msg.setSourceEntity(179U);
    msg.setDestination(3030U);
    msg.setDestinationEntity(18U);

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
    msg.setTimeStamp(0.657087209671);
    msg.setSource(53937U);
    msg.setSourceEntity(160U);
    msg.setDestination(50351U);
    msg.setDestinationEntity(208U);
    msg.mid = 6159U;

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
    msg.setTimeStamp(0.727526750941);
    msg.setSource(36660U);
    msg.setSourceEntity(99U);
    msg.setDestination(44540U);
    msg.setDestinationEntity(170U);
    msg.mid = 22692U;

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
    msg.setTimeStamp(0.302261378415);
    msg.setSource(55835U);
    msg.setSourceEntity(118U);
    msg.setDestination(2316U);
    msg.setDestinationEntity(225U);
    msg.mid = 22741U;

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
    msg.setTimeStamp(0.437999211188);
    msg.setSource(59860U);
    msg.setSourceEntity(130U);
    msg.setDestination(19446U);
    msg.setDestinationEntity(64U);
    msg.state = 167U;
    msg.eta = 30449U;
    msg.info.assign("FGBXTICIBVSHWWGIRFLNADOAROENWWMXQBFJKRZNPQGNHOZAGVQJBLWICBFLFEJWTQAUXNECUMZPXFXNHEGMZVJLHQGTPIDHZTIMPCYXEJTZIKZDMLQDPWNDMGKYFFVSAJUPUCXMDYIUXCDGVBDSEPKLWMEB");

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
    msg.setTimeStamp(0.456779740772);
    msg.setSource(46287U);
    msg.setSourceEntity(104U);
    msg.setDestination(54085U);
    msg.setDestinationEntity(132U);
    msg.state = 179U;
    msg.eta = 61815U;
    msg.info.assign("PPVPFEDAWYMOEIKCGNAOSHGULQJTGEAQBFSAXXMODMKEYGJHYHNZEOKNUDNWZLBUZMOQPNRSACFPRCJFIZWYNVHLTGAPCIPJLVHNDIICXWZCKECRXILSHOSKXWYNQVVZFBDTKLOYZJFJDHGKEAEZTJGCVRIMKJQOWURLWHDXTYUUZXYSIFMXWVBPJRYYMEAKTRTBMBQRPBCEACVMXRLNQOZXOVFSNBHWABUGRBMFWGDSHDQSTKD");

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
    msg.setTimeStamp(0.713721039072);
    msg.setSource(23565U);
    msg.setSourceEntity(253U);
    msg.setDestination(31422U);
    msg.setDestinationEntity(198U);
    msg.state = 221U;
    msg.eta = 8352U;
    msg.info.assign("PDZZLKFMLJFCPAQKEAPMVAMEJHVKNEDHRFPWXEZGZVXIUNHIOYWCHSGJICMJYHXNQLYDKZMIAWUXHAKNINBCLCSXMTDKTVQWCWMROFQNPKTUOLRYANVTEFELHPSGJOTZQJDGBKEGFPBBR");

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
    msg.setTimeStamp(0.498212446347);
    msg.setSource(13119U);
    msg.setSourceEntity(161U);
    msg.setDestination(44359U);
    msg.setDestinationEntity(138U);
    msg.system = 50436U;
    msg.duration = 10729U;
    msg.speed = 0.342803415652;
    msg.speed_units = 105U;
    msg.x = 0.816151208526;
    msg.y = 0.59301734144;
    msg.z = 0.657194655564;
    msg.z_units = 167U;

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
    msg.setTimeStamp(0.351671484955);
    msg.setSource(62355U);
    msg.setSourceEntity(117U);
    msg.setDestination(40997U);
    msg.setDestinationEntity(250U);
    msg.system = 8578U;
    msg.duration = 14561U;
    msg.speed = 0.199400267168;
    msg.speed_units = 220U;
    msg.x = 0.329169994734;
    msg.y = 0.636055940062;
    msg.z = 0.954862487383;
    msg.z_units = 244U;

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
    msg.setTimeStamp(0.923392321856);
    msg.setSource(4688U);
    msg.setSourceEntity(110U);
    msg.setDestination(18845U);
    msg.setDestinationEntity(183U);
    msg.system = 866U;
    msg.duration = 17368U;
    msg.speed = 0.501237293742;
    msg.speed_units = 32U;
    msg.x = 0.962426385073;
    msg.y = 0.107481119882;
    msg.z = 0.808904877153;
    msg.z_units = 90U;

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
    msg.setTimeStamp(0.177600008243);
    msg.setSource(13145U);
    msg.setSourceEntity(214U);
    msg.setDestination(10693U);
    msg.setDestinationEntity(235U);
    msg.lat = 0.973609831438;
    msg.lon = 0.057603286726;
    msg.speed = 0.898413836932;
    msg.speed_units = 122U;
    msg.duration = 55183U;
    msg.sys_a = 2891U;
    msg.sys_b = 8510U;
    msg.move_threshold = 0.940699808218;

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
    msg.setTimeStamp(0.409311593376);
    msg.setSource(1412U);
    msg.setSourceEntity(246U);
    msg.setDestination(62269U);
    msg.setDestinationEntity(196U);
    msg.lat = 0.812181043175;
    msg.lon = 0.196194779501;
    msg.speed = 0.1272719535;
    msg.speed_units = 12U;
    msg.duration = 42661U;
    msg.sys_a = 42139U;
    msg.sys_b = 47381U;
    msg.move_threshold = 0.494621453095;

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
    msg.setTimeStamp(0.7193207884);
    msg.setSource(21548U);
    msg.setSourceEntity(154U);
    msg.setDestination(34329U);
    msg.setDestinationEntity(163U);
    msg.lat = 0.040060464564;
    msg.lon = 0.548054147916;
    msg.speed = 0.278459603109;
    msg.speed_units = 207U;
    msg.duration = 49083U;
    msg.sys_a = 392U;
    msg.sys_b = 39184U;
    msg.move_threshold = 0.18656966466;

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
    msg.setTimeStamp(0.141862451297);
    msg.setSource(39497U);
    msg.setSourceEntity(215U);
    msg.setDestination(17425U);
    msg.setDestinationEntity(154U);
    msg.lat = 0.445416710457;
    msg.lon = 0.688796770915;
    msg.z = 0.0598386351312;
    msg.z_units = 229U;
    msg.speed = 0.594406506663;
    msg.speed_units = 117U;
    msg.custom.assign("QDVTFSNDKLGSDUZIWLXYZGKCGJKEISJDBGMQSDSYXUXYTFMYXVMRPGBEGSBNJGWIEOIAWXMXLBRUKZKZFQBHFOPJSUNTGWVOQNDSTVPMBHJHERMHCMNZFRBAWUCUWVPQQTYYCTYQMKBWYRKZMKTEIJDIEIHLAFQXRPXUBVZFUVHAREUYSRGCPNA");

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
    msg.setTimeStamp(0.276316961409);
    msg.setSource(12805U);
    msg.setSourceEntity(191U);
    msg.setDestination(53507U);
    msg.setDestinationEntity(141U);
    msg.lat = 0.513263432744;
    msg.lon = 0.686446133185;
    msg.z = 0.0694597412277;
    msg.z_units = 200U;
    msg.speed = 0.451004136573;
    msg.speed_units = 33U;
    msg.custom.assign("DZXZSBLTXRFHOJLDUQOVNZTQDOMHCLGPMABTZUTIBXGNNFUYVXEYAYJIETPVSOMJGRKQKFLZWVNEQPDLTBEIYNJSAVUGVZBEKGSMYXEFJKPCUJCBZKVDLFMTICNXJWDDCJLMNIMCWJQRKO");

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
    msg.setTimeStamp(0.403365897898);
    msg.setSource(25958U);
    msg.setSourceEntity(138U);
    msg.setDestination(7855U);
    msg.setDestinationEntity(229U);
    msg.lat = 0.107247294672;
    msg.lon = 0.741431826853;
    msg.z = 0.467610094718;
    msg.z_units = 227U;
    msg.speed = 0.206755935772;
    msg.speed_units = 236U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.187988733939;
    tmp_msg_0.lon = 0.159487368618;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("IQVJOLNKWSYRCTGLSGVNZITAMGDMOUSDFKMTRLJBRZEPHNIHHDXCUKOV");

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
    msg.setTimeStamp(0.703543543511);
    msg.setSource(14237U);
    msg.setSourceEntity(174U);
    msg.setDestination(53274U);
    msg.setDestinationEntity(111U);
    msg.lat = 0.554817709303;
    msg.lon = 0.651380303827;

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
    msg.setTimeStamp(0.372682794056);
    msg.setSource(47281U);
    msg.setSourceEntity(47U);
    msg.setDestination(59331U);
    msg.setDestinationEntity(76U);
    msg.lat = 0.5688946656;
    msg.lon = 0.882527649673;

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
    msg.setTimeStamp(0.851918494589);
    msg.setSource(27406U);
    msg.setSourceEntity(110U);
    msg.setDestination(19328U);
    msg.setDestinationEntity(224U);
    msg.lat = 0.0407757042907;
    msg.lon = 0.429224496533;

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
    msg.setTimeStamp(0.25794640994);
    msg.setSource(20037U);
    msg.setSourceEntity(110U);
    msg.setDestination(57615U);
    msg.setDestinationEntity(236U);
    msg.timeout = 41322U;
    msg.lat = 0.308398412436;
    msg.lon = 0.186612380882;
    msg.z = 0.123652892926;
    msg.z_units = 20U;
    msg.pitch = 0.158394531838;
    msg.amplitude = 0.366723944972;
    msg.duration = 44656U;
    msg.speed = 0.222682135934;
    msg.speed_units = 100U;
    msg.radius = 0.903793858815;
    msg.direction = 5U;
    msg.custom.assign("BCBYQIPQVZUXZRMWVNORCEPBVGOHUSSYGYLJOUTYPXMMKVCDROHZRAGVMZJKGILDCDRUUOZZVBDAAGIWHYXAELQNFTAQY");

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
    msg.setTimeStamp(0.396289790518);
    msg.setSource(13126U);
    msg.setSourceEntity(207U);
    msg.setDestination(27930U);
    msg.setDestinationEntity(184U);
    msg.timeout = 17828U;
    msg.lat = 0.291729827244;
    msg.lon = 0.155216618235;
    msg.z = 0.985303699605;
    msg.z_units = 242U;
    msg.pitch = 0.305591755562;
    msg.amplitude = 0.909069570771;
    msg.duration = 42582U;
    msg.speed = 0.228511162066;
    msg.speed_units = 74U;
    msg.radius = 0.39288083635;
    msg.direction = 158U;
    msg.custom.assign("HGHECQPPIYOUWNLARVSHDDAWWZFYTPOFUVZUOJAMQCCEQHNNETZEWXXMCVKBHIHTRTKQFSHQNTIYYDVYFBEJRERXKBLXYQNWKFBXJFFPXPSFLPHYRUBGQLTPUNUJTLGXQDGNELEKZWRPCNKKZYAJGRLCIYKBOMXWEIJPPJAMIAVBSSGZTBMUVXASJOUSMOWOAZKQXFBMLJGTRJUBMAWVVEGGIZRDDKMADCVFILUOCYCDOVNZMDLWOQHTI");

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
    msg.setTimeStamp(0.147184581364);
    msg.setSource(42343U);
    msg.setSourceEntity(253U);
    msg.setDestination(49532U);
    msg.setDestinationEntity(105U);
    msg.timeout = 65088U;
    msg.lat = 0.101481901062;
    msg.lon = 0.539479223894;
    msg.z = 0.680644023118;
    msg.z_units = 243U;
    msg.pitch = 0.349215558419;
    msg.amplitude = 0.742844347681;
    msg.duration = 63489U;
    msg.speed = 0.960025445057;
    msg.speed_units = 216U;
    msg.radius = 0.617551340158;
    msg.direction = 99U;
    msg.custom.assign("BGQUGDEIGVJWNXJTISYNXHGNKVU");

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
    msg.setTimeStamp(0.217840641194);
    msg.setSource(14686U);
    msg.setSourceEntity(67U);
    msg.setDestination(47551U);
    msg.setDestinationEntity(23U);
    msg.formation_name.assign("TIBOJTKBCIVXQHMUORECHFYWAHYLKOVRLTZIBQDORYMQBDFLCIHGGNFHEENHZRUEEWZTKDBIIOPTSPETCBPNQEJUJAQCUIVNFLTKCKDWGEYUZFCDAOYW");
    msg.reference_frame = 167U;
    msg.custom.assign("UBDLDCNWQVNAEHRWPGLSPGIZNSDURNCJOQGHHHVEEIRYNBPUZPLIUHJRGSYOVNLORMNTFTBBOXIFVMHUGKILULEOFEFPMQLATJ");

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
    msg.setTimeStamp(0.414123641484);
    msg.setSource(64505U);
    msg.setSourceEntity(86U);
    msg.setDestination(31128U);
    msg.setDestinationEntity(181U);
    msg.formation_name.assign("BPTBZICEXCTDPYHRPHDGBERICCMNEHEQVZQWQPMLATJGVPHQOZTDHQVRATBQADBWCSLCWXXIYGWLDYZMXUHJWUIIIMOOUEVYORJPXQKRIPKYVUNLKHLAAWAVUMKTMPLVMTLEJSIXFKQSHXGNFZVUKECTBJSDWBVNMWKGGWXKDJOAGNEBYRMIUYXNCRJGOFPEJHZNRSDGYJF");
    msg.reference_frame = 10U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 19442U;
    tmp_msg_0.off_x = 0.788717296938;
    tmp_msg_0.off_y = 0.797228784309;
    tmp_msg_0.off_z = 0.732367963616;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("VOWZZEBRHABUTGFQXDBAAEFZFHMWGARQWYNXJELCMTQHACCVNAMKHPPAEZFMPLLPONQNDOHMYGMVKCSJXMHJKEHSAZSCLGEJUUWVITMZLSNSDUYOFKUUPGUEJUXBRYVWIKITVJTYXYTFCPXGTIXFXSKGRPKRWXUJFLWYKVCIILODAVJDOWZSPFDBKRDOCNOWTNYZIGLMDEQOKTNESALISBRXWJBVHTIODJRYVBQSQQCRLNZHRENFMPCBUH");

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
    msg.setTimeStamp(0.650556296826);
    msg.setSource(36177U);
    msg.setSourceEntity(15U);
    msg.setDestination(60613U);
    msg.setDestinationEntity(252U);
    msg.formation_name.assign("IABWJIMVMJLVHGURCSBYBZTRVEUFZXXCQRLJZP");
    msg.reference_frame = 199U;
    msg.custom.assign("MQJBPKDLIQDGUGWJMJZ");

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
    msg.setTimeStamp(0.427054110949);
    msg.setSource(27566U);
    msg.setSourceEntity(130U);
    msg.setDestination(43333U);
    msg.setDestinationEntity(109U);
    msg.group_name.assign("LFFZVJZXIRUWZBFDJNXYWPRDZJUBTJDYMPMNWFKWFEOAWCMLVESZFRYTIWSGEUOTIUYYPTQTGXEROULRYGLHVQJXBTXGBNCOOICBB");
    msg.formation_name.assign("FYLLZAZIYDOJTPTSJERQTQXGWWRPORQUWIZHIUNLKWOZVXURYIEJTKXLJFLHKQXJSREBTNXGTENOVASFMOCNZKDQRMAIYPXDJDZOUDGHTIQSQPZWAWVFRGDQJUNFSJVBUHKGZBBLRKXBYUHGTZVHYMVPMACGOAFGKWPWBSGDCFEPTLLKUMSCBAKENYIHAHMMEEVMCJJTDKZRYGCESIPONDMBICNRDFNSQBSLBUHFWFOPVQ");
    msg.plan_id.assign("LZVXLXJNXUONMTTLEPSLHSFSMQMRGVPVCPETYWBOHKZNXNPNIFZGXSNNYMJAMCWZDGAEQJCDGBGLMOPUSWNIGQUASKZERLSXARRBUTCTWYYKSTQOZIDVCCADWGVMDQECKHPSAFMMLZXCDGDFKQBYVIMFZJRTEDVJARFDPFWKIVQOIUCUHWEGUYIYIJTBHCZPZQWJOEBBVYKQYKIXROOLTGFLJPRUABJOPNYJWAFRUUIXKFNS");
    msg.description.assign("RMLRFBBUCZAPKCJDCTITMJLICEIJPODYWHZHNLVCDGZ");
    msg.leader_speed = 0.534314835908;
    msg.leader_bank_lim = 0.335019657604;
    msg.pos_sim_err_lim = 0.418882368064;
    msg.pos_sim_err_wrn = 0.74466769581;
    msg.pos_sim_err_timeout = 3324U;
    msg.converg_max = 0.787194265874;
    msg.converg_timeout = 10255U;
    msg.comms_timeout = 6499U;
    msg.turb_lim = 0.357580150169;
    msg.custom.assign("XTRWXIMFLOBQEKIVDFCWPOMMHDHCRLBUCOPPABXRDNNNZMYIOURCAALS");

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
    msg.setTimeStamp(0.905584739571);
    msg.setSource(49152U);
    msg.setSourceEntity(48U);
    msg.setDestination(59827U);
    msg.setDestinationEntity(185U);
    msg.group_name.assign("ECDAAJYAKMSZFEUDRIGLVWYWLRINVCBSMTZPIBGDLYTQKWFLUQVGYNCFDHRWBNOBHNTRYWYDAURRGPSJKMHYNSLGPJWGPSQFJXUTOUHIAFEEIZOAUNIZRQJIJXNRXCXUKKZXSEXMQH");
    msg.formation_name.assign("MUFYTUOFGCGDNBJXYSNOFTYMSPLWRZGAGRATPMFNPZYPZEAFDCUDTIQKSWKODXURQYEZRKLIIERTXKUJOBIITLHVEHIPMIWZMAJUGMJMIQQNHMFLPXLURDNUJYVCXGQJAGVQKLBSOZNIRRAEBTHCZBXKWVXESVEAQNBYHHRZTPDYAQVJFVGF");
    msg.plan_id.assign("QBSGHIJSYFYVBZJQSGEOQVLNZXUAVONWZJVHTANNLOMZNRPMIIHABPPLSUNILPUYJRRFWDOUTCMLOQHQKXUVPKIEFKGMSQYEBCIGPMNXXJEWVTFREDPTAYZCYURLBYWFZTGZURAJGBFHXECQVZMHWFUZLSYHIVYYMRIRTWMQQVPAOOKMOWGTSLITXEXEMKDKXHNCBEUDWSDTKA");
    msg.description.assign("INOZMXNKSCAAYISPPEFGWHUZUWYMCQURZDQSYOEARFHPYQKRITJXPUROZPDICUKWXYIUOGZIXLUVBKMQABORHWXVVTNQBGROFLDQACTPFORHJBVJSMFWN");
    msg.leader_speed = 0.0133475160955;
    msg.leader_bank_lim = 0.629442244833;
    msg.pos_sim_err_lim = 0.209620375754;
    msg.pos_sim_err_wrn = 0.834174289952;
    msg.pos_sim_err_timeout = 56788U;
    msg.converg_max = 0.390706570657;
    msg.converg_timeout = 21665U;
    msg.comms_timeout = 30287U;
    msg.turb_lim = 0.531544873104;
    msg.custom.assign("FZQESKDSEDHLDWJSYUGFYMCTRLIHVBAMGVDWGYBULHAXTTKRAWKIJWAIHZJOQPFSJJLPHWNULNQNMPGKQBNMFIEE");

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
    msg.setTimeStamp(0.114397383459);
    msg.setSource(40112U);
    msg.setSourceEntity(56U);
    msg.setDestination(13934U);
    msg.setDestinationEntity(50U);
    msg.group_name.assign("IPLZTWOVIARMROEEFAJFI");
    msg.formation_name.assign("GKVLWWSBDTZSENCWNJLJRNDSSKPXRHKMHEENJICXHXYBGQTQSLTCENNHYXHXASLYZXRHCQMSGFMPBUOIACCDKXZUGWGHVOUIIUOIPJAKZZLIYBOEKLPBLDGFTGRTWJBCITQOEAYUVDBUZQVYXNCMFMUMJENWMFGELQKGDRHFOWVQHVDFGVWPYBVFRQOWPVAIFAZYUJZKPYFDBRJADABSCTNTZEVMPPTSHUEWURNMRJKOYOITRFLAAXDQL");
    msg.plan_id.assign("XGYXLFSSZJFLZWKUMRFRDLTQGJYPRPGVTEROQEOPCQBDFUVUANVRHBBNHTZOGZTVRREBJCDAHDAXCFATGSZUSLNSQKOHKOIOWHQCGJFXMDKOEWKUUXVBPUNQGWIIPVUXKSCNPWAMVJPLIERYHDNIDBSNWBTYCGIKDLHHGXLMQLMMFKLKPSVJJUMMCPQQTCFZWJEAM");
    msg.description.assign("TBFFIKNPFBRLQRTKGNVOWLGPOVAXKZCCQVYPMJOZKHVOZUHIPXHWAJVGWJZKRQMECXGOJZAQJYOHUCMEOGIUSYWSNZKCECGLNRXNMMBAHEIGMDA");
    msg.leader_speed = 0.671127034926;
    msg.leader_bank_lim = 0.0540675040583;
    msg.pos_sim_err_lim = 0.748229119311;
    msg.pos_sim_err_wrn = 0.999272330857;
    msg.pos_sim_err_timeout = 34646U;
    msg.converg_max = 0.752303510494;
    msg.converg_timeout = 62957U;
    msg.comms_timeout = 38286U;
    msg.turb_lim = 0.55626440228;
    msg.custom.assign("GCVQGCCMIPFGRDNKKZDRAHVAVWDKJESHVJKQAZYWCEEPXTRKQVNXDDPRPKTIODSOPFWOTMAY");

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
    msg.setTimeStamp(0.424354874856);
    msg.setSource(20213U);
    msg.setSourceEntity(111U);
    msg.setDestination(3641U);
    msg.setDestinationEntity(87U);
    msg.control_src = 53606U;
    msg.control_ent = 64U;
    msg.timeout = 0.739050973644;
    msg.loiter_radius = 0.516174201695;
    msg.altitude_interval = 0.995358303695;

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
    msg.setTimeStamp(0.177242995867);
    msg.setSource(59034U);
    msg.setSourceEntity(158U);
    msg.setDestination(28580U);
    msg.setDestinationEntity(230U);
    msg.control_src = 9208U;
    msg.control_ent = 10U;
    msg.timeout = 0.397385407323;
    msg.loiter_radius = 0.176342076316;
    msg.altitude_interval = 0.96877173142;

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
    msg.setTimeStamp(0.858024711872);
    msg.setSource(14321U);
    msg.setSourceEntity(201U);
    msg.setDestination(11815U);
    msg.setDestinationEntity(32U);
    msg.control_src = 30241U;
    msg.control_ent = 56U;
    msg.timeout = 0.455285285276;
    msg.loiter_radius = 0.96913746603;
    msg.altitude_interval = 0.721860887713;

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
    msg.setTimeStamp(0.107933943364);
    msg.setSource(11547U);
    msg.setSourceEntity(16U);
    msg.setDestination(21197U);
    msg.setDestinationEntity(221U);
    msg.flags = 131U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.316719251767;
    tmp_msg_0.speed_units = 204U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.491439207767;
    tmp_msg_1.z_units = 74U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.655942625168;
    msg.lon = 0.377962124273;
    msg.radius = 0.0916348823516;

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
    msg.setTimeStamp(0.578364556032);
    msg.setSource(3400U);
    msg.setSourceEntity(251U);
    msg.setDestination(33175U);
    msg.setDestinationEntity(68U);
    msg.flags = 171U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.626300107322;
    tmp_msg_0.speed_units = 84U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.946886963714;
    tmp_msg_1.z_units = 187U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.369894257324;
    msg.lon = 0.671113885305;
    msg.radius = 0.707745022905;

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
    msg.setTimeStamp(0.0986042778305);
    msg.setSource(36094U);
    msg.setSourceEntity(160U);
    msg.setDestination(40598U);
    msg.setDestinationEntity(225U);
    msg.flags = 112U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.803063999363;
    tmp_msg_0.speed_units = 140U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.570316376937;
    tmp_msg_1.z_units = 139U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.315808072676;
    msg.lon = 0.398181723216;
    msg.radius = 0.249552329492;

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
    msg.setTimeStamp(0.990346393458);
    msg.setSource(44984U);
    msg.setSourceEntity(156U);
    msg.setDestination(33017U);
    msg.setDestinationEntity(6U);
    msg.control_src = 27808U;
    msg.control_ent = 169U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 191U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.670727735084;
    tmp_tmp_msg_0_0.speed_units = 242U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.506656828405;
    tmp_tmp_msg_0_1.z_units = 209U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.491024444769;
    tmp_msg_0.lon = 0.354913531915;
    tmp_msg_0.radius = 0.0353168346797;
    msg.reference.set(tmp_msg_0);
    msg.state = 61U;
    msg.proximity = 109U;

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
    msg.setTimeStamp(0.983317016082);
    msg.setSource(3343U);
    msg.setSourceEntity(54U);
    msg.setDestination(36677U);
    msg.setDestinationEntity(195U);
    msg.control_src = 24421U;
    msg.control_ent = 179U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 26U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.526576631977;
    tmp_tmp_msg_0_0.speed_units = 16U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.444803329933;
    tmp_tmp_msg_0_1.z_units = 233U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.959387448551;
    tmp_msg_0.lon = 0.323276116981;
    tmp_msg_0.radius = 0.331555967514;
    msg.reference.set(tmp_msg_0);
    msg.state = 163U;
    msg.proximity = 85U;

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
    msg.setTimeStamp(0.760464488574);
    msg.setSource(5816U);
    msg.setSourceEntity(252U);
    msg.setDestination(60712U);
    msg.setDestinationEntity(174U);
    msg.control_src = 29285U;
    msg.control_ent = 25U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 191U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.0628948998947;
    tmp_tmp_msg_0_0.speed_units = 253U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.589662012573;
    tmp_tmp_msg_0_1.z_units = 62U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.599085321554;
    tmp_msg_0.lon = 0.0318670018844;
    tmp_msg_0.radius = 0.341335488484;
    msg.reference.set(tmp_msg_0);
    msg.state = 251U;
    msg.proximity = 7U;

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
    msg.setTimeStamp(0.99591287462);
    msg.setSource(2039U);
    msg.setSourceEntity(45U);
    msg.setDestination(34195U);
    msg.setDestinationEntity(61U);
    msg.ax_cmd = 0.507844868568;
    msg.ay_cmd = 0.365331397555;
    msg.az_cmd = 0.870327901405;
    msg.ax_des = 0.645213713395;
    msg.ay_des = 0.976671368983;
    msg.az_des = 0.812809322519;
    msg.virt_err_x = 0.994312226945;
    msg.virt_err_y = 0.573792142101;
    msg.virt_err_z = 0.884671662183;
    msg.surf_fdbk_x = 0.678677474327;
    msg.surf_fdbk_y = 0.896673601106;
    msg.surf_fdbk_z = 0.900075605902;
    msg.surf_unkn_x = 0.375119910209;
    msg.surf_unkn_y = 0.268285770118;
    msg.surf_unkn_z = 0.405304996031;
    msg.ss_x = 0.913634989505;
    msg.ss_y = 0.891548783354;
    msg.ss_z = 0.666568302168;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("PPKPESQZOSVKALARYTNAUSTHIFXRTFCD");
    tmp_msg_0.dist = 0.171744906961;
    tmp_msg_0.err = 0.827097519842;
    tmp_msg_0.ctrl_imp = 0.244533099061;
    tmp_msg_0.rel_dir_x = 0.386543886252;
    tmp_msg_0.rel_dir_y = 0.296401346181;
    tmp_msg_0.rel_dir_z = 0.865599999955;
    tmp_msg_0.err_x = 0.72511399603;
    tmp_msg_0.err_y = 0.825881503683;
    tmp_msg_0.err_z = 0.408127296535;
    tmp_msg_0.rf_err_x = 0.304938632609;
    tmp_msg_0.rf_err_y = 0.138570376893;
    tmp_msg_0.rf_err_z = 0.671194149893;
    tmp_msg_0.rf_err_vx = 0.691658809292;
    tmp_msg_0.rf_err_vy = 0.901568101074;
    tmp_msg_0.rf_err_vz = 0.0186215082819;
    tmp_msg_0.ss_x = 0.877272752985;
    tmp_msg_0.ss_y = 0.343669610007;
    tmp_msg_0.ss_z = 0.607398827166;
    tmp_msg_0.virt_err_x = 0.252118124472;
    tmp_msg_0.virt_err_y = 0.344339999895;
    tmp_msg_0.virt_err_z = 0.186872506699;
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
    msg.setTimeStamp(0.253742969112);
    msg.setSource(13787U);
    msg.setSourceEntity(5U);
    msg.setDestination(51494U);
    msg.setDestinationEntity(134U);
    msg.ax_cmd = 0.081507077642;
    msg.ay_cmd = 0.786086775088;
    msg.az_cmd = 0.620450215183;
    msg.ax_des = 0.888135956738;
    msg.ay_des = 0.52155017595;
    msg.az_des = 0.581637657455;
    msg.virt_err_x = 0.816970953073;
    msg.virt_err_y = 0.4365177815;
    msg.virt_err_z = 0.225188056524;
    msg.surf_fdbk_x = 0.73863038183;
    msg.surf_fdbk_y = 0.0308326354531;
    msg.surf_fdbk_z = 0.47249195293;
    msg.surf_unkn_x = 0.191542979869;
    msg.surf_unkn_y = 0.488345571364;
    msg.surf_unkn_z = 0.218169171248;
    msg.ss_x = 0.0190451768102;
    msg.ss_y = 0.097207081989;
    msg.ss_z = 0.936457079178;

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
    msg.setTimeStamp(0.32961354006);
    msg.setSource(64695U);
    msg.setSourceEntity(35U);
    msg.setDestination(43214U);
    msg.setDestinationEntity(247U);
    msg.ax_cmd = 0.663398933267;
    msg.ay_cmd = 0.675504460337;
    msg.az_cmd = 0.512648106423;
    msg.ax_des = 0.576974258431;
    msg.ay_des = 0.929248502252;
    msg.az_des = 0.0475491871354;
    msg.virt_err_x = 0.280409986694;
    msg.virt_err_y = 0.452332254446;
    msg.virt_err_z = 0.373733256124;
    msg.surf_fdbk_x = 0.767692066042;
    msg.surf_fdbk_y = 0.603258246714;
    msg.surf_fdbk_z = 0.973259514001;
    msg.surf_unkn_x = 0.255873792498;
    msg.surf_unkn_y = 0.848990198144;
    msg.surf_unkn_z = 0.0663242131269;
    msg.ss_x = 0.425169234046;
    msg.ss_y = 0.154821815048;
    msg.ss_z = 0.88841451203;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("YKVNCKDORZPLXTMIELTGCKSFKZWNYJGGJVPPRIVFDZNSGRMLONMYGYTWNLBNBCUTLYIUETRUASXUUPZRGWKDQDVSERKXLDIMHBFHAWXXVDAHWBWDVBGVLLJIQZUUPRAVMR");
    tmp_msg_0.dist = 0.729129706935;
    tmp_msg_0.err = 0.0771031582507;
    tmp_msg_0.ctrl_imp = 0.594158611166;
    tmp_msg_0.rel_dir_x = 0.965827516906;
    tmp_msg_0.rel_dir_y = 0.244912782781;
    tmp_msg_0.rel_dir_z = 0.824699919275;
    tmp_msg_0.err_x = 0.247302670538;
    tmp_msg_0.err_y = 0.510927438033;
    tmp_msg_0.err_z = 0.596150327328;
    tmp_msg_0.rf_err_x = 0.792350928698;
    tmp_msg_0.rf_err_y = 0.817691603821;
    tmp_msg_0.rf_err_z = 0.825997471942;
    tmp_msg_0.rf_err_vx = 0.516195910197;
    tmp_msg_0.rf_err_vy = 0.605835128769;
    tmp_msg_0.rf_err_vz = 0.413999203742;
    tmp_msg_0.ss_x = 0.856206234065;
    tmp_msg_0.ss_y = 0.145860830926;
    tmp_msg_0.ss_z = 0.568446862868;
    tmp_msg_0.virt_err_x = 0.679198990368;
    tmp_msg_0.virt_err_y = 0.96324821533;
    tmp_msg_0.virt_err_z = 0.956298209388;
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
    msg.setTimeStamp(0.995346949795);
    msg.setSource(47760U);
    msg.setSourceEntity(116U);
    msg.setDestination(13083U);
    msg.setDestinationEntity(91U);
    msg.s_id.assign("GVPFJRPHLXTJBRHIRHEHXUOORAKHCMUTVYCDOVJCMNGWBWVIHGNLQYVJZLIBQGPEZUROUPJCKBQUBJXMIMNEAFKAQNKNWPBXWMHYLLQRTDITYDRGZETQSGECEDYASFYDBLFOVKOJDRWNKZOMJYPJUITUVBOVRPIZTAHQWFFPYTLXMAIWMSSHGESBAB");
    msg.dist = 0.634535330883;
    msg.err = 0.817995652514;
    msg.ctrl_imp = 0.139359303515;
    msg.rel_dir_x = 0.337937507425;
    msg.rel_dir_y = 0.798097829555;
    msg.rel_dir_z = 0.726539714371;
    msg.err_x = 0.127787203008;
    msg.err_y = 0.861364524012;
    msg.err_z = 0.0537701632762;
    msg.rf_err_x = 0.128902085705;
    msg.rf_err_y = 0.752103821713;
    msg.rf_err_z = 0.281620488385;
    msg.rf_err_vx = 0.35144501562;
    msg.rf_err_vy = 0.0460359291796;
    msg.rf_err_vz = 0.0248005599778;
    msg.ss_x = 0.252554739394;
    msg.ss_y = 0.237806237468;
    msg.ss_z = 0.295684429038;
    msg.virt_err_x = 0.326939742558;
    msg.virt_err_y = 0.93835759967;
    msg.virt_err_z = 0.574516092032;

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
    msg.setTimeStamp(0.847125847261);
    msg.setSource(47825U);
    msg.setSourceEntity(109U);
    msg.setDestination(2982U);
    msg.setDestinationEntity(40U);
    msg.s_id.assign("LCRZLQEKNJSMUVIVFXNOYQMGTFLISODLXVWVWGZNHZNHZEOEASSEBKEBUOQKAQHFHDPKPCCBOQNISQSLUNHBRAGIINURCAXRXORBTBKWXGXEXFDQCFGURKMBPZPVAYH");
    msg.dist = 0.4483432962;
    msg.err = 0.493777351452;
    msg.ctrl_imp = 0.185830701884;
    msg.rel_dir_x = 0.217906601564;
    msg.rel_dir_y = 0.690031251895;
    msg.rel_dir_z = 0.823829642978;
    msg.err_x = 0.613229978401;
    msg.err_y = 0.64203247108;
    msg.err_z = 0.761484056317;
    msg.rf_err_x = 0.502600130538;
    msg.rf_err_y = 0.84088054054;
    msg.rf_err_z = 0.164421456895;
    msg.rf_err_vx = 0.993962064583;
    msg.rf_err_vy = 0.784260338779;
    msg.rf_err_vz = 0.0579793752013;
    msg.ss_x = 0.0385696264265;
    msg.ss_y = 0.571642350403;
    msg.ss_z = 0.653820456281;
    msg.virt_err_x = 0.0500483621335;
    msg.virt_err_y = 0.772223469245;
    msg.virt_err_z = 0.0153044628452;

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
    msg.setTimeStamp(0.300860041274);
    msg.setSource(17675U);
    msg.setSourceEntity(89U);
    msg.setDestination(40853U);
    msg.setDestinationEntity(97U);
    msg.s_id.assign("XSCGEAUFCMJNBLFIKGNZPRYDKRYIDDWWRHRJCJWLPTKXTGLYWNEIALMUXFWGGEAMOZVXOGUIITJJRPQYPJGFOBBLSMJHABDTUBOFHBZMX");
    msg.dist = 0.450498784902;
    msg.err = 0.750920628666;
    msg.ctrl_imp = 0.594853949327;
    msg.rel_dir_x = 0.510978982136;
    msg.rel_dir_y = 0.0539004082884;
    msg.rel_dir_z = 0.616270564378;
    msg.err_x = 0.774541008548;
    msg.err_y = 0.994017872873;
    msg.err_z = 0.0619370064138;
    msg.rf_err_x = 0.370970395009;
    msg.rf_err_y = 0.762728859553;
    msg.rf_err_z = 0.532602576628;
    msg.rf_err_vx = 0.699837325982;
    msg.rf_err_vy = 0.118806546597;
    msg.rf_err_vz = 0.261549402462;
    msg.ss_x = 0.193390417036;
    msg.ss_y = 0.00497852846645;
    msg.ss_z = 0.502307135518;
    msg.virt_err_x = 0.196612794605;
    msg.virt_err_y = 0.856031018033;
    msg.virt_err_z = 0.691900013454;

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
    msg.setTimeStamp(0.624472558822);
    msg.setSource(23017U);
    msg.setSourceEntity(86U);
    msg.setDestination(32136U);
    msg.setDestinationEntity(232U);
    msg.timeout = 33669U;
    msg.rpm = 0.478975629955;
    msg.direction = 131U;
    msg.custom.assign("WFQDFXXVIPQERKHDMATVVSCVYQICLSYRYKNKFKSLLUEVOCCYNYQHZPAMWJHWMFJWNSOCEFMTBNGCYIFBQRWXNBGSEJOWRUMPAMQOCZYZTBGTLUVCFOYWIXMVOHNIMRUSZXALUGRQTSZDIITPZHEDKJSTZUBNPFXZFZJAERGBBTBSKB");

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
    msg.setTimeStamp(0.934359711517);
    msg.setSource(15129U);
    msg.setSourceEntity(194U);
    msg.setDestination(35784U);
    msg.setDestinationEntity(155U);
    msg.timeout = 57107U;
    msg.rpm = 0.450981636165;
    msg.direction = 24U;
    msg.custom.assign("ATAFCYDBPUDJVZGYSMRAOLSRQGLLMEGADKSPERPBYRZNNZJEJHSHXWUYOOFKCCDZBPVUVEPEMQHONIFPFOIHREOGRIAMXIQOLBIKILOSYGFSTKNBCWQRAWQQMHPVUAWMEGIKPNSVYWFTGLHZLMBHQYVUEBZPCTQXJCLKRTQVWCXDENMZRJBNIYFVAKAKSGJIHWOXJVKM");

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
    msg.setTimeStamp(0.840049829404);
    msg.setSource(56609U);
    msg.setSourceEntity(70U);
    msg.setDestination(24709U);
    msg.setDestinationEntity(237U);
    msg.timeout = 39225U;
    msg.rpm = 0.280404382625;
    msg.direction = 187U;
    msg.custom.assign("OSZKTGCMHQFRNSDKHMUEHTLUWNIWUSPBAFKTXOVICDJQXAKDCZPVIRYEGMBYAKNAHPJBWKLLQLXWZJLTTIXDKQPXOVFNAHYJAYFGLXRYYZFBNPIHOIWJOFFRSNDETEBODZHEYGQHPCOMJMLAVXFQAWLNSVBUUGSULUVPKMOOCVRXBV");

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
    msg.setTimeStamp(0.222528343249);
    msg.setSource(25773U);
    msg.setSourceEntity(86U);
    msg.setDestination(9484U);
    msg.setDestinationEntity(114U);
    msg.formation_name.assign("PLCROUQBAIGKGZJWSIADWNQQFHYWESHZKNUGDYZCJPIMLCEIRKFNDJAVHKFTGBDOSIOYWHJTICQTHXOVOPOREKWCUEJLWYUFDQIBLJKYEVAZFVRTGGLBGWLVZHHXJMHJKDUUSXPVFRYADWNZANBRGOEMXWTSQN");
    msg.type = 200U;
    msg.op = 141U;
    msg.group_name.assign("DGWJFZYJSIWKMUYRQXMZORVLYKSAGSLGEHOYDFRGZPDMOGEATHSLJBBQBDOCOVWTCVGCFAPDVZZIQAQTAMNLDYXYUXOBBHRHNUYDIMTAHHCRALCNXKPNJTKSTENWBVWPQTFKDCEQJLNBZZLKUZJKHMSOEFGUURVBWOFFNQYTIEDAURVADIIMB");
    msg.plan_id.assign("QIEYDLKCMZUKSDFFKXJGNEMRWBAYSDOWXABZBZSAQULMRSYEGFINCVSGISJQAYZTPRXHRKJIEMNPAEPXLQWQWDBWMAYNPYILCQFZZLGUEKY");
    msg.description.assign("FYAXSNREOJEBMFRPSVKGPQRYHESNDUPIXSKGOIXKQSAKZSAIDTMSGOYQCTMLFQ");
    msg.reference_frame = 238U;
    msg.leader_bank_lim = 0.880050587095;
    msg.leader_speed_min = 0.18365521923;
    msg.leader_speed_max = 0.981915851733;
    msg.leader_alt_min = 0.183523037586;
    msg.leader_alt_max = 0.396048198832;
    msg.pos_sim_err_lim = 0.268578925719;
    msg.pos_sim_err_wrn = 0.818293531483;
    msg.pos_sim_err_timeout = 20517U;
    msg.converg_max = 0.92619829017;
    msg.converg_timeout = 24640U;
    msg.comms_timeout = 5992U;
    msg.turb_lim = 0.590048545598;
    msg.custom.assign("ZEJQJRZOUGQEPUIDNIVBQJONHACRSHDCHSACONEKJQGVDTZWSIMLPKZYHUPSPIKKIOVWTHYSUBTSEUIDMVHWYAWYNRUPFGLGZYFCLGCNMHQJNIOFVMATNVFGYOWTABTYUBPAXNWKVAOXXGASJYFVRCBNXEQMMITCEPQAJEDRXGMPEDIORRLSPDBBOBHLFYODXBUUMTZZK");

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
    msg.setTimeStamp(0.317821588939);
    msg.setSource(51264U);
    msg.setSourceEntity(32U);
    msg.setDestination(21678U);
    msg.setDestinationEntity(135U);
    msg.formation_name.assign("BQHXITMTECMHCLPFO");
    msg.type = 80U;
    msg.op = 192U;
    msg.group_name.assign("GIWOALQLPLWJMMKHTAFSDQWOKFOJFBZCYGHAXRSXSSZFSAANUQSPLRFXEMHBLBEWCEVZGBUBQTICUHIIYUTIHGLQBROGTADDBOMOJQDKZAYYXWDRRGVNHYFEUDMCJKUTTGNXWJSLWONJZBOEUSXTYDHHHNQGINVPPXRMKNYFCWPPLMTPJIKKXCODNYVKLCFPHZLUBPVNQZQIVQTVIPCAXCYGEVAEFEJTODMDWZMKR");
    msg.plan_id.assign("KUNLZSMPYJRRFFSKAKEZNGJXGIWYRIWBKZXHYDNPFSTEIJYOWGNVANVKJZPXQZRAHMIZOHFDBBZTQNNEAOOUOTZAJASVBYIJGLGXFDMUYUHKXQHEURRESSWMKDSQHOFWQVVCRYKINKJQCFMBCLUWMCBPYBCMTQIPSHBPJOLQLSI");
    msg.description.assign("TQKMUTHWANX");
    msg.reference_frame = 121U;
    msg.leader_bank_lim = 0.0342508927615;
    msg.leader_speed_min = 0.797716963784;
    msg.leader_speed_max = 0.172487365054;
    msg.leader_alt_min = 0.852605509134;
    msg.leader_alt_max = 0.147099640915;
    msg.pos_sim_err_lim = 0.0191185627751;
    msg.pos_sim_err_wrn = 0.118279367022;
    msg.pos_sim_err_timeout = 18263U;
    msg.converg_max = 0.731660957729;
    msg.converg_timeout = 3942U;
    msg.comms_timeout = 52599U;
    msg.turb_lim = 0.507627172579;
    msg.custom.assign("CEUURTTWKCAPOJEHWDXWOSCLHLGFKSBIYNRWGVYMRFQAPPNPAJBFYYGDCVATQGWCKTXLDSDQJHKNXEHJXCHSVIVLHIEVWAJGTPYHKIVEPFSVTDSOFFUXMGVJSBVNMQYKMZQZRBOIPBBZITGLUMRQAPBKYEDKENADZCYXSYFJUJZLXRBYLLZDWZNQLXHGHMOZGFIULAAFUXOKPQ");

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
    msg.setTimeStamp(0.474593860396);
    msg.setSource(19896U);
    msg.setSourceEntity(126U);
    msg.setDestination(22860U);
    msg.setDestinationEntity(61U);
    msg.formation_name.assign("GQLVYDSDYULRVRAPZYJALZIPEGTSKOTBVAVMZSISHYLUCOAIHWOGCTKYEVXEWMVFCWTLFRJDFPUNGCGKJALAGFQBYXGCJQRHHNVXNSUYEGWNQEZXXIPADHNBISNSVKIPPZWGOFRRHMQK");
    msg.type = 87U;
    msg.op = 22U;
    msg.group_name.assign("PQVKOTSDOLIYRZWPCUWCYCAZXEBTHWZIMMRAQGWMVHIOWTPTFWVVKTEFRGRFAGEMLZKHUUDGMNOMLDNCWZYNXEYDHTPKGCQYSZJDVDETAISRLZJBSAKEUHJPDLAYFQQOKDIZUSKSKXXNTVSO");
    msg.plan_id.assign("JRPMPHWHITEOSWSSNOWKZLQJVCVKIIUZLTZODBPLMLKEFVIUDZWZGUXFGUMRYRJBSNTFPXWTWOPZRVRUBBYQUAGQNQTKXOAPKMGNTEFQFATHBYVDAMYUELICKPDDRCJGACHCXMYQMSZKXPGBBNHTLNYUHGEXJQVXOPSAWRAQJVDNBNKWCOWFVDOGSLHTLDEIKXVOGVJISHECAQ");
    msg.description.assign("JAUAKFPSTXZNIVBZNSGSPGBFUDYQCACQIUZRIGSCWTUVJFVOHCMUZNMGIOVFKNFLLMGNLYLPJPWGXIQYYCEELVZXPDSENYOAJTJCXJDQXTWEMJFRCRVHCUQGUBHGBFQAITTHKVDODQHZTKWSMVPFIKMOYBXUXMXBUYPSLJBAGZXZYLWPHTBCNIFMOYHDWPPRLDYIZOKWCRQIR");
    msg.reference_frame = 236U;
    msg.leader_bank_lim = 0.195930325811;
    msg.leader_speed_min = 0.745955631129;
    msg.leader_speed_max = 0.349803819214;
    msg.leader_alt_min = 0.979772790339;
    msg.leader_alt_max = 0.577446574392;
    msg.pos_sim_err_lim = 0.488773124524;
    msg.pos_sim_err_wrn = 0.765010798572;
    msg.pos_sim_err_timeout = 7003U;
    msg.converg_max = 0.856408537058;
    msg.converg_timeout = 50503U;
    msg.comms_timeout = 43926U;
    msg.turb_lim = 0.316135179905;
    msg.custom.assign("GBGLKCJFLEAXYYFIGKFMAK");

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
    msg.setTimeStamp(0.981017654381);
    msg.setSource(56145U);
    msg.setSourceEntity(249U);
    msg.setDestination(41526U);
    msg.setDestinationEntity(242U);
    msg.timeout = 55016U;
    msg.lat = 0.214766345349;
    msg.lon = 0.393222190561;
    msg.z = 0.991253083695;
    msg.z_units = 16U;
    msg.speed = 0.174996733063;
    msg.speed_units = 82U;
    msg.custom.assign("XIVCHRXFORLMTGKPVFWXSELHEZXLCFPZNYFFEVVCDTUWHBLZLECSHBYGIFAZDWHUQFCJAWRDTRSDBZPGUKSUWMKJPIEMAXJL");

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
    msg.setTimeStamp(0.0505640121838);
    msg.setSource(19741U);
    msg.setSourceEntity(190U);
    msg.setDestination(8804U);
    msg.setDestinationEntity(132U);
    msg.timeout = 27261U;
    msg.lat = 0.255519640504;
    msg.lon = 0.286063050019;
    msg.z = 0.461729077404;
    msg.z_units = 206U;
    msg.speed = 0.395117466636;
    msg.speed_units = 135U;
    msg.custom.assign("QWGVYHLERPIOWJPMBCIFJSWZVSTRBYXMMLSQVCWCTANLBUKNNYLDQRVP");

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
    msg.setTimeStamp(0.948577535835);
    msg.setSource(7261U);
    msg.setSourceEntity(108U);
    msg.setDestination(53061U);
    msg.setDestinationEntity(60U);
    msg.timeout = 19085U;
    msg.lat = 0.553069864138;
    msg.lon = 0.0389751557114;
    msg.z = 0.718967730196;
    msg.z_units = 245U;
    msg.speed = 0.307386293878;
    msg.speed_units = 46U;
    msg.custom.assign("WSDDTMVLRBFISSWGEZBBIXYJRROGIPHUCXLKAVYCQAPMQILGCRYTDVTXERJZXBBHZBKFHETMAVNLRAQNYQYKHUDMFPOXMAUFNQDWXDUUCRONYJKNTLUEPFWPLPESHCX");

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
    msg.setTimeStamp(0.624258642393);
    msg.setSource(60478U);
    msg.setSourceEntity(72U);
    msg.setDestination(55803U);
    msg.setDestinationEntity(127U);
    msg.timeout = 51136U;
    msg.lat = 0.211086623426;
    msg.lon = 0.503699390523;
    msg.z = 0.979795110926;
    msg.z_units = 168U;
    msg.speed = 0.109570607585;
    msg.speed_units = 226U;
    msg.custom.assign("RTREDGUIHNSJWEWJAZEZWSILEMFDMAORQZZBPAUVXYKLCCIDGKJHQLWEYQKGBFACAKWXS");

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
    msg.setTimeStamp(0.222532398106);
    msg.setSource(52950U);
    msg.setSourceEntity(253U);
    msg.setDestination(55375U);
    msg.setDestinationEntity(52U);
    msg.timeout = 31411U;
    msg.lat = 0.876431564421;
    msg.lon = 0.846264105068;
    msg.z = 0.345874778271;
    msg.z_units = 123U;
    msg.speed = 0.430616892819;
    msg.speed_units = 199U;
    msg.custom.assign("SOGPZTDRARKCDXQRXRUSEADYKBINOWNJWGYIRJEYANPFTGJSALTVRZHKXXUOLUPIOTYCKVEBHWPANFDLMECESGMXJZXVQFIJUJDTUVWNSHNHMLVJBNGPWEGRCIEKILBYIPIRCEBWKOQKWDBVZVAOVQWQKLGUFNCPBDADJLSGHZKUDXZXXFCHUTWMSCBQOKMGNJCOWZUFBEASRMCFTI");

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
    msg.setTimeStamp(0.279320300121);
    msg.setSource(54188U);
    msg.setSourceEntity(135U);
    msg.setDestination(292U);
    msg.setDestinationEntity(159U);
    msg.timeout = 64665U;
    msg.lat = 0.318169144432;
    msg.lon = 0.345711303839;
    msg.z = 0.901088243357;
    msg.z_units = 231U;
    msg.speed = 0.334633712554;
    msg.speed_units = 185U;
    msg.custom.assign("VFDSHMPOHZDFVFSYXSAZGUMOBFNXWBRGASGJDLYCVJEPIVTSXRGJZUCVUJOWBLJMYCNVQBWLQNLNYIHHFSASKRCZRKWCFE");

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
    msg.setTimeStamp(0.564792461224);
    msg.setSource(34146U);
    msg.setSourceEntity(22U);
    msg.setDestination(26989U);
    msg.setDestinationEntity(175U);
    msg.arrival_time = 0.925228347864;
    msg.lat = 0.989086983131;
    msg.lon = 0.309162217567;
    msg.z = 0.999244113381;
    msg.z_units = 167U;
    msg.travel_z = 0.0905099009758;
    msg.travel_z_units = 48U;
    msg.delayed = 190U;

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
    msg.setTimeStamp(0.43184571603);
    msg.setSource(54583U);
    msg.setSourceEntity(163U);
    msg.setDestination(48062U);
    msg.setDestinationEntity(59U);
    msg.arrival_time = 0.266658465003;
    msg.lat = 0.354826367509;
    msg.lon = 0.168447029248;
    msg.z = 0.0866294692844;
    msg.z_units = 138U;
    msg.travel_z = 0.720251060347;
    msg.travel_z_units = 56U;
    msg.delayed = 47U;

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
    msg.setTimeStamp(0.603533592902);
    msg.setSource(25317U);
    msg.setSourceEntity(82U);
    msg.setDestination(56408U);
    msg.setDestinationEntity(115U);
    msg.arrival_time = 0.41210267557;
    msg.lat = 0.966285711056;
    msg.lon = 0.0573666231178;
    msg.z = 0.844714633828;
    msg.z_units = 141U;
    msg.travel_z = 0.48181887134;
    msg.travel_z_units = 239U;
    msg.delayed = 5U;

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
    msg.setTimeStamp(0.469885679401);
    msg.setSource(15732U);
    msg.setSourceEntity(0U);
    msg.setDestination(33050U);
    msg.setDestinationEntity(109U);
    msg.lat = 0.014918866721;
    msg.lon = 0.323757715329;
    msg.z = 0.845816020781;
    msg.z_units = 241U;
    msg.speed = 0.887210110738;
    msg.speed_units = 12U;
    msg.bearing = 0.138107217672;
    msg.cross_angle = 0.733490733359;
    msg.width = 0.903306110445;
    msg.length = 0.0539631844135;
    msg.coff = 97U;
    msg.angaperture = 0.969001708933;
    msg.range = 13322U;
    msg.overlap = 35U;
    msg.flags = 52U;
    msg.custom.assign("POXRGYBPRZGZCFHVGIEMIWAOMTUQKYVDLXBWSQMKFYCWCHQIMFZJOS");

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
    msg.setTimeStamp(0.201929569273);
    msg.setSource(49862U);
    msg.setSourceEntity(63U);
    msg.setDestination(63070U);
    msg.setDestinationEntity(77U);
    msg.lat = 0.511023880246;
    msg.lon = 0.51956833652;
    msg.z = 0.695885023091;
    msg.z_units = 25U;
    msg.speed = 0.340232290241;
    msg.speed_units = 59U;
    msg.bearing = 0.419372024674;
    msg.cross_angle = 0.851414976745;
    msg.width = 0.333151438725;
    msg.length = 0.945434774642;
    msg.coff = 230U;
    msg.angaperture = 0.1355305731;
    msg.range = 61798U;
    msg.overlap = 134U;
    msg.flags = 66U;
    msg.custom.assign("SSLVPDZFXCUHGMHAUNNMJJRNBQDMPFDJPGNXQWGYJYICLCPPFYRAHGTIUJSVEHEWXKVRHTDHQOPIZVOGSQKHUIFXKRAOZRHFVLSQQILMNCEUINZEAGAKBZBYTGDTYBFLGJQCSLDLFOUGXPMMZFHWNIUBRTICSNFMEDMJLKVRXUBXEBEOGMMDLOYBPVZZSKN");

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
    msg.setTimeStamp(0.177957932232);
    msg.setSource(1920U);
    msg.setSourceEntity(178U);
    msg.setDestination(55334U);
    msg.setDestinationEntity(146U);
    msg.lat = 0.906345764563;
    msg.lon = 0.820753552915;
    msg.z = 0.172087116605;
    msg.z_units = 194U;
    msg.speed = 0.776948187034;
    msg.speed_units = 111U;
    msg.bearing = 0.713536890188;
    msg.cross_angle = 0.857823496599;
    msg.width = 0.779170850522;
    msg.length = 0.807136289033;
    msg.coff = 169U;
    msg.angaperture = 0.98344071779;
    msg.range = 21611U;
    msg.overlap = 112U;
    msg.flags = 188U;
    msg.custom.assign("CPENIBIIKDUBHCIVXCJTZVEMMJFHHNDJLKOBRAWZWNSJMLVRAFTJIHWRKRFQQLXGJRPWEHVVVOQXCWWZOZARELYAZMSKSDUYNLQKTYFSYVQGXFMMJUAIYFIYPCXATEOGWPKPQYGSPONKNOTKFFHUMSWCZJDTBLZMXZPMEITEAIGCTTSVTSJRDLLDRGOHXUEOCPLXSAUBKYNG");

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
    msg.setTimeStamp(0.850967579105);
    msg.setSource(30014U);
    msg.setSourceEntity(124U);
    msg.setDestination(19040U);
    msg.setDestinationEntity(176U);
    msg.timeout = 31670U;
    msg.lat = 0.839171398734;
    msg.lon = 0.31504393258;
    msg.z = 0.94620870152;
    msg.z_units = 121U;
    msg.speed = 0.233925448089;
    msg.speed_units = 221U;
    msg.syringe0 = 12U;
    msg.syringe1 = 191U;
    msg.syringe2 = 148U;
    msg.custom.assign("PSGNARDMEYDDFNSYLOZRFLDJQXOSKSWJLDGOMNWEBDBFCN");

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
    msg.setTimeStamp(0.0455562072936);
    msg.setSource(52551U);
    msg.setSourceEntity(92U);
    msg.setDestination(31823U);
    msg.setDestinationEntity(200U);
    msg.timeout = 38805U;
    msg.lat = 0.862762434273;
    msg.lon = 0.292099142629;
    msg.z = 0.179922927406;
    msg.z_units = 69U;
    msg.speed = 0.184069573605;
    msg.speed_units = 171U;
    msg.syringe0 = 42U;
    msg.syringe1 = 59U;
    msg.syringe2 = 97U;
    msg.custom.assign("GWGRFPMFLCCHMAAIINEPCLPWQAURSPZGAMMSWPHAEJHRRVYVUWJAIPSTMTLPIRKTVYIXHPZZZFBNFBOBZGKDWLQHWDNMGEFUIXNZIEKVXQYEZESMDDGEJTXKBSCRXOUAXVMQIWXEXTABSPJKLOSQJUFBTSZFONQXGNNLYNJNROYPHUCJOYG");

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
    msg.setTimeStamp(0.848981589294);
    msg.setSource(52628U);
    msg.setSourceEntity(73U);
    msg.setDestination(52458U);
    msg.setDestinationEntity(55U);
    msg.timeout = 13551U;
    msg.lat = 0.35696349023;
    msg.lon = 0.741353442917;
    msg.z = 0.00188123657523;
    msg.z_units = 50U;
    msg.speed = 0.963473708625;
    msg.speed_units = 252U;
    msg.syringe0 = 185U;
    msg.syringe1 = 79U;
    msg.syringe2 = 139U;
    msg.custom.assign("HPZMURHBCDBLICCQIVKYORVNVVADPYXZWWMLHXQEWTAATHTTUAN");

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
    msg.setTimeStamp(0.695046852396);
    msg.setSource(36858U);
    msg.setSourceEntity(2U);
    msg.setDestination(26020U);
    msg.setDestinationEntity(234U);

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
    msg.setTimeStamp(0.874095484723);
    msg.setSource(826U);
    msg.setSourceEntity(96U);
    msg.setDestination(14860U);
    msg.setDestinationEntity(1U);

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
    msg.setTimeStamp(0.628156666178);
    msg.setSource(17912U);
    msg.setSourceEntity(175U);
    msg.setDestination(64978U);
    msg.setDestinationEntity(61U);

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
    msg.setTimeStamp(0.639531068518);
    msg.setSource(57916U);
    msg.setSourceEntity(45U);
    msg.setDestination(56190U);
    msg.setDestinationEntity(207U);
    msg.lat = 0.0366502686114;
    msg.lon = 0.523083388752;
    msg.z = 0.559883463844;
    msg.z_units = 210U;
    msg.speed = 0.645558515463;
    msg.speed_units = 160U;
    msg.takeoff_pitch = 0.995888242758;
    msg.custom.assign("MCBIJPSLTMRXFZQQCQRGETLZPVEISIOWZPDGQAOKYNJCMSUYACRXRLKUHHEGALJWAMBKTEXJTUSHBQNOGDOZYVJCHZFHAXUDPNUFMDIUDUAKDNLEWKNXBTHCSWPMXWCISVBHYKETLIWSJPALBZYPBZYFKVQWEZUAXGRQAGBSTEWVRQROXOHRZVNFRAPMBIV");

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
    msg.setTimeStamp(0.333794874727);
    msg.setSource(50555U);
    msg.setSourceEntity(192U);
    msg.setDestination(8561U);
    msg.setDestinationEntity(33U);
    msg.lat = 0.533818142701;
    msg.lon = 0.815324339601;
    msg.z = 0.0500834606493;
    msg.z_units = 235U;
    msg.speed = 0.781327798456;
    msg.speed_units = 196U;
    msg.takeoff_pitch = 0.157101218522;
    msg.custom.assign("LGTUFNMVGHZCGVVYJSHWCVTOVIBUEDYEAPZOYQWEDVEXXNMQWEFJWNKEIIAAXUAHYLXMMVLJIZKJIKSTZBTATGVPIPGMCXPSBOTBORMXCBFQSLNODPOYTNZHRLFWHCLQPJNMBFNWUSCZSGBLQRBCQOWDFCDXNZGQHYO");

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
    msg.setTimeStamp(0.0715298570615);
    msg.setSource(29978U);
    msg.setSourceEntity(57U);
    msg.setDestination(26754U);
    msg.setDestinationEntity(184U);
    msg.lat = 0.743011384791;
    msg.lon = 0.484751359687;
    msg.z = 0.837392465559;
    msg.z_units = 191U;
    msg.speed = 0.701327970256;
    msg.speed_units = 232U;
    msg.takeoff_pitch = 0.281841774124;
    msg.custom.assign("YZNDSDCPMJKPJQPRSIXBSYTBYXVIYBUBHYWMDQMHHOVVQCELJZHZCVCCAJLQTZYGCCKWGSOSESERFEFPBRFKGNWWDIOXXABERZIGCXVKWLAQJLAPQTUTXEFITQHTGEFHYDFCVMIBOMJVPLEYRZSOIXKK");

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
    msg.setTimeStamp(0.67880585279);
    msg.setSource(44156U);
    msg.setSourceEntity(87U);
    msg.setDestination(36855U);
    msg.setDestinationEntity(149U);
    msg.lat = 0.370681352687;
    msg.lon = 0.604962719045;
    msg.z = 0.554412982851;
    msg.z_units = 26U;
    msg.speed = 0.640083896336;
    msg.speed_units = 174U;
    msg.abort_z = 0.616842845448;
    msg.bearing = 0.512984065399;
    msg.glide_slope = 233U;
    msg.glide_slope_alt = 0.934993842577;
    msg.custom.assign("MMIEXUZIRBDPW");

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
    msg.setTimeStamp(0.577388674841);
    msg.setSource(44584U);
    msg.setSourceEntity(55U);
    msg.setDestination(50109U);
    msg.setDestinationEntity(150U);
    msg.lat = 0.712897548311;
    msg.lon = 0.629220311053;
    msg.z = 0.956252148353;
    msg.z_units = 137U;
    msg.speed = 0.0463022380696;
    msg.speed_units = 47U;
    msg.abort_z = 0.31713041514;
    msg.bearing = 0.402206925067;
    msg.glide_slope = 160U;
    msg.glide_slope_alt = 0.338479621546;
    msg.custom.assign("FFSAQSHTRL");

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
    msg.setTimeStamp(0.510101495504);
    msg.setSource(36071U);
    msg.setSourceEntity(102U);
    msg.setDestination(31898U);
    msg.setDestinationEntity(221U);
    msg.lat = 0.687194283545;
    msg.lon = 0.63431729781;
    msg.z = 0.227319352965;
    msg.z_units = 253U;
    msg.speed = 0.568311624986;
    msg.speed_units = 40U;
    msg.abort_z = 0.823757470649;
    msg.bearing = 0.0736029480824;
    msg.glide_slope = 214U;
    msg.glide_slope_alt = 0.857587655168;
    msg.custom.assign("BNQOOTTZGLFYZHBQQFNGEJVRKGICCILSNHUVKPIZAKYTMBHKPWNQNSQIYWVWVSRGTMGRPSTLXHSMCTABZJJSORLBPXNTGYXMUKGFUEQYRYJMUTQXUMUYXOXJIATYFGKOYCAAFFUKWAIGDWEOFDWAQOJKFLCYEH");

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
    msg.setTimeStamp(0.84687538999);
    msg.setSource(55578U);
    msg.setSourceEntity(158U);
    msg.setDestination(15110U);
    msg.setDestinationEntity(220U);
    msg.lat = 0.353993199253;
    msg.lon = 0.730309814245;
    msg.speed = 0.286999171298;
    msg.speed_units = 185U;
    msg.limits = 133U;
    msg.max_depth = 0.232425258437;
    msg.min_alt = 0.471012991803;
    msg.time_limit = 0.11002243817;
    msg.controller.assign("QTHJSSYMGGFORWLHYIUVTTLYVKWIFUNCEEFIHKUEKAYZSYLULGALHFXACCDOBFAHCLZVIYMGBTOBHMAWRPDQM");
    msg.custom.assign("GNFUAYNYQAWUJJRXETRAOSWSURDXKQSGLMGPYWJMRTYNPDDEBORHMEKSCNCBGZJOIPHQHTRVEDCZPYAQFNRXUZGVFWHFWBKYFVIMQUQMLJVYSVUDEFFCIMBVOGMIITUCACYWHKDSKONJI");

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
    msg.setTimeStamp(0.677007282865);
    msg.setSource(6836U);
    msg.setSourceEntity(179U);
    msg.setDestination(48175U);
    msg.setDestinationEntity(178U);
    msg.lat = 0.343185507755;
    msg.lon = 0.587849821627;
    msg.speed = 0.724492532777;
    msg.speed_units = 197U;
    msg.limits = 183U;
    msg.max_depth = 0.0635642769331;
    msg.min_alt = 0.474819713468;
    msg.time_limit = 0.5214429267;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.398806669446;
    tmp_msg_0.lon = 0.434368271159;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("UATRIJYYXENEYPUAJLONWXKWTFRMDZMBFPDEDGEQKKOUBOZWWHUPLTCCMIDTVKHWDVGORVJGNSUNVOMQRYGGXCYNZHFMUEYFWTIJNZMAJVGCNBPCXRPJQLLKSLHISCHKALQXVSFDEHAJBKEASCKYO");
    msg.custom.assign("TPFLKBMQTNYUJLGIILVLZONPHFWSUYHRZKLGIFJHQFZAYZENCMMYQHYUUGBXPZSHTOOADCJTCJGKJOBQPWHBWADBBXAUNWBZFJIMADPORWRSQGRPAKVXFPGKRQEYOURLQVJKNPZUCEXDXADMPNRQILKZWNQEAJMCPHWBIOYOGLRSZGESXTXMTXEMSUWVHXHVVNXTODTIRGNFNBHQYGESATDIRVYKKFEV");

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
    msg.setTimeStamp(0.00767195313926);
    msg.setSource(60374U);
    msg.setSourceEntity(120U);
    msg.setDestination(10215U);
    msg.setDestinationEntity(47U);
    msg.lat = 0.532184482448;
    msg.lon = 0.916567599875;
    msg.speed = 0.886518742233;
    msg.speed_units = 0U;
    msg.limits = 198U;
    msg.max_depth = 0.473376840204;
    msg.min_alt = 0.0309297607848;
    msg.time_limit = 0.971075035625;
    msg.controller.assign("HBIMRGSQKANENOUZRUWGLFMUUNUODTRMCXARAKSJRAUZQTFWVRGKEOEVJXQFXXMOYCYPDEZTZPMYHYDSBGDVDUVBEDRHNCQCZBXDVGJTAIHVWCZHIICJEXLOSCLHUHXGLAWWZUQEPILYFJMPOKBAJZHRKCQGOPAXSYXVIJQGNSUISYJBJ");
    msg.custom.assign("IZYFRFDKMSOCNPSJWGLVOZTZSHLZBQTXISTUHAUJTKRGXXJHSVEWGYSTCRSXARVVAPIEPOUOIBRJNTAGFADIETSKHABBWLXYHIOWBDUNZ");

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
    msg.setTimeStamp(0.648401009632);
    msg.setSource(56492U);
    msg.setSourceEntity(99U);
    msg.setDestination(21759U);
    msg.setDestinationEntity(218U);
    msg.target.assign("WAFKRDLPZTSUIMTFLPLZSMNGCZRMXOTBXLFTWWKIOGKVOSYJYHXWWSYOAERGQQMXRPRDFAIRDNDXXAQFJUVEYAWBRNDVJWKKFKMVCSECSQIJDZWGTPCESBGQUITZMHOXGPKHTUKPVEJISEMZZCBAUTFO");
    msg.max_speed = 0.1069324538;
    msg.speed_units = 105U;
    msg.lat = 0.415071290412;
    msg.lon = 0.252993599754;
    msg.z = 0.819246568211;
    msg.z_units = 9U;
    msg.custom.assign("MJUHOBHUFMUPCMIXZWGYYZCIVHHZNSFTBFKUDXI");

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
    msg.setTimeStamp(0.677752906347);
    msg.setSource(61409U);
    msg.setSourceEntity(246U);
    msg.setDestination(30312U);
    msg.setDestinationEntity(99U);
    msg.target.assign("UATEJVBLXFDSZGIFQHJACMBMLWRLAITHQJKBRSIYVKUZYNJVRDTXBQNWVVMAXFESLZGFHCUWYLCOHJZCBFMNKQBUQKPSAKPHTGIGYPOXRDPDUIGGRBFCNWATVDUWEWXLHEXBNVBDQOJMSMAQBLNIKYRQDQEEZHOAXMWTSYONRGUTLEXPYQKNDJCAWETYSOVZ");
    msg.max_speed = 0.107418794939;
    msg.speed_units = 191U;
    msg.lat = 0.441537586039;
    msg.lon = 0.630942203033;
    msg.z = 0.477569625801;
    msg.z_units = 16U;
    msg.custom.assign("DCUSHUXCXDWONYVVKFMNYPJOBNZAYDLHTOCRABYNDKVRTZAXBANGWUHDKQIAJTNILAJUPSEQSPWXHMFNRMIZPWICGEKSXCULJPJYQLWEVPLFZBCYWIRHGQIGKIGOPTNZME");

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
    msg.setTimeStamp(0.700308674713);
    msg.setSource(63325U);
    msg.setSourceEntity(128U);
    msg.setDestination(65228U);
    msg.setDestinationEntity(213U);
    msg.target.assign("VACFGPSCITYPRKIZNSKFLGNOTXUQVIDECWGDFHKUHBZYBBQPIKZARSUVPIJLSSWUZRMCBQUHGHIYFENQFUJQLIDCQAUJTFKHWODHEDOOWJSH");
    msg.max_speed = 0.960770859939;
    msg.speed_units = 16U;
    msg.lat = 0.225345561386;
    msg.lon = 0.293198675477;
    msg.z = 0.849114566731;
    msg.z_units = 203U;
    msg.custom.assign("SNRNCUDFWZQXATDXFEIVUCKTLOJPDDYLUHTPCTO");

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
    msg.setTimeStamp(0.976527537051);
    msg.setSource(13087U);
    msg.setSourceEntity(45U);
    msg.setDestination(57424U);
    msg.setDestinationEntity(242U);
    msg.timeout = 10034U;
    msg.lat = 0.594718834175;
    msg.lon = 0.978141861025;
    msg.speed = 0.208942514547;
    msg.speed_units = 58U;
    msg.custom.assign("QBWEJMAMKMFCKOWWWCOTEOHCM");

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
    msg.setTimeStamp(0.960012439968);
    msg.setSource(20350U);
    msg.setSourceEntity(253U);
    msg.setDestination(12874U);
    msg.setDestinationEntity(205U);
    msg.timeout = 44614U;
    msg.lat = 0.00983383679483;
    msg.lon = 0.659172674874;
    msg.speed = 0.430803807425;
    msg.speed_units = 176U;
    msg.custom.assign("RGJBZVNQGPPJQDXXMNPCKOUNEOFZJCOJDREWKZLTIPKZQCBPDAIUXD");

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
    msg.setTimeStamp(0.112601811752);
    msg.setSource(62627U);
    msg.setSourceEntity(181U);
    msg.setDestination(62848U);
    msg.setDestinationEntity(161U);
    msg.timeout = 10070U;
    msg.lat = 0.962029445059;
    msg.lon = 0.61738777758;
    msg.speed = 0.968567521796;
    msg.speed_units = 203U;
    msg.custom.assign("UOHDKAHVVDMUIWOHCOMPPPXAJWLIQYVAEDBEGXPFAVANLSMXIZDXAHEQEYENDZGKUSFTYKPBRELSWQUTTNIARJPDOMCWEHTJOHIAZQLGNFOGKMFKVJTKSXSMBUVKJRRQUYH");

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
    msg.setTimeStamp(0.143669402797);
    msg.setSource(50679U);
    msg.setSourceEntity(44U);
    msg.setDestination(35148U);
    msg.setDestinationEntity(15U);
    msg.lat = 0.429615887121;
    msg.lon = 0.6261995558;
    msg.z = 0.909393440984;
    msg.z_units = 225U;
    msg.radius = 0.439356418697;
    msg.duration = 9843U;
    msg.speed = 0.372262432167;
    msg.speed_units = 84U;
    msg.popup_period = 40089U;
    msg.popup_duration = 61787U;
    msg.flags = 249U;
    msg.custom.assign("TEWOWKFDGIYKBZNIXREHEWOURDDQGXVIHBACOMDUDWZP");

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
    msg.setTimeStamp(0.234551308619);
    msg.setSource(60976U);
    msg.setSourceEntity(16U);
    msg.setDestination(30967U);
    msg.setDestinationEntity(35U);
    msg.lat = 0.984344331023;
    msg.lon = 0.0544381293574;
    msg.z = 0.980629512702;
    msg.z_units = 62U;
    msg.radius = 0.187242331469;
    msg.duration = 59893U;
    msg.speed = 0.924948844818;
    msg.speed_units = 94U;
    msg.popup_period = 57254U;
    msg.popup_duration = 52011U;
    msg.flags = 125U;
    msg.custom.assign("IABYKRXCVBRPHQBIKZKCAA");

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
    msg.setTimeStamp(0.0681388474842);
    msg.setSource(13743U);
    msg.setSourceEntity(22U);
    msg.setDestination(25570U);
    msg.setDestinationEntity(4U);
    msg.lat = 0.74532431941;
    msg.lon = 0.803763178017;
    msg.z = 0.037333601668;
    msg.z_units = 168U;
    msg.radius = 0.839968286406;
    msg.duration = 9661U;
    msg.speed = 0.952829298807;
    msg.speed_units = 120U;
    msg.popup_period = 5115U;
    msg.popup_duration = 2933U;
    msg.flags = 245U;
    msg.custom.assign("RNJWPSZIABRYGVONFLQOIXGHOVYRTGFKGFQJPCRTICYFKJJZDHLIZIBWUHYMTDCMAJKPUFWAAXKJTPYNSVLBXAUOHILJGHMLROSVMBOFSQNNJJIECAEKLUGIERVOJXUICLCTESXQZXHCZVBFPLBXMZEDUDHNUXWRHMAQTY");

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
    msg.setTimeStamp(0.809607123767);
    msg.setSource(63814U);
    msg.setSourceEntity(44U);
    msg.setDestination(38429U);
    msg.setDestinationEntity(192U);
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("HRNQPKFLISYSJDACXGAPJGVUMPLOHQBOFKKTZXUAVZWZCNYJBCMTHLORGEXRGSXMKLHQYRPDCIVZAEUL");
    IMC::LowLevelControl tmp_tmp_msg_0_0;
    IMC::DesiredPath tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.path_ref = 1104162121U;
    tmp_tmp_tmp_msg_0_0_0.start_lat = 0.406181163411;
    tmp_tmp_tmp_msg_0_0_0.start_lon = 0.515418841422;
    tmp_tmp_tmp_msg_0_0_0.start_z = 0.233616854081;
    tmp_tmp_tmp_msg_0_0_0.start_z_units = 118U;
    tmp_tmp_tmp_msg_0_0_0.end_lat = 0.367595124421;
    tmp_tmp_tmp_msg_0_0_0.end_lon = 0.0591616833666;
    tmp_tmp_tmp_msg_0_0_0.end_z = 0.641955187488;
    tmp_tmp_tmp_msg_0_0_0.end_z_units = 9U;
    tmp_tmp_tmp_msg_0_0_0.speed = 0.646374611903;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 77U;
    tmp_tmp_tmp_msg_0_0_0.lradius = 0.496547385181;
    tmp_tmp_tmp_msg_0_0_0.flags = 110U;
    tmp_tmp_msg_0_0.control.set(tmp_tmp_tmp_msg_0_0_0);
    tmp_tmp_msg_0_0.duration = 12597U;
    tmp_tmp_msg_0_0.custom.assign("GWKSVECVHFOOIIJVRHHFMIHRRXLMBKTGUQKHSCKBNPOIVZYQILQZFXQHAMOFGGEWIHLNOXTBKGAIYTUXEPUVVYBJKXLKSERYGUDQPDLIQWNPBRTDOSZIPAJMCYJSSKTMQROLFSWWSYCLNAREMXVZBPTCGEPUZCDORMHTJWFKH");
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
    msg.setTimeStamp(0.537925097277);
    msg.setSource(30705U);
    msg.setSourceEntity(31U);
    msg.setDestination(48167U);
    msg.setDestinationEntity(232U);
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("LHGJJCVYQUQDGYGKZFUMNNZNYYRLGZPRLXABBBJIMMZAWOFSUSWDCZNJKEAJZFVKXKFNKAHLJTXWGWPOYHCCFOPEOZUEBIDTWTOBJMTDBLQTDSCPQJXPIWTQSKWFPNSWSOIHGHSKNXAHHPRVIEPEMDDQLKSVVCYU");
    IMC::VehicleFormation tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.638019976428;
    tmp_tmp_msg_0_0.lon = 0.472715686218;
    tmp_tmp_msg_0_0.z = 0.099596986728;
    tmp_tmp_msg_0_0.z_units = 201U;
    tmp_tmp_msg_0_0.speed = 0.32288445498;
    tmp_tmp_msg_0_0.speed_units = 18U;
    tmp_tmp_msg_0_0.start_time = 0.141017172003;
    tmp_tmp_msg_0_0.custom.assign("PZOACWRAZIFSHARHWVJNAYPCLKNXICRWREANOQGKVVEELPJBMGIQEDTVJDSRPKDQCEIGMETKRPPXZYOSSADMUFQBFYHHFSDQSKLAFGJJBGBLWNGSHKZSISAXQYMYJUFCTFMAHFURXYPPOSZLPVBKTMUYKGOUDUNXBNYICIXWDBMTEMIYLPDWANMQHLBJRCDLQXBWFMQCDVQUOOCUXJVNKWXHNGZRIXGLTOWOVVZWTJZGN");
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
    msg.setTimeStamp(0.242155309987);
    msg.setSource(53803U);
    msg.setSourceEntity(221U);
    msg.setDestination(19042U);
    msg.setDestinationEntity(209U);
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("MFZTVMHOEXVPVOBMBSGMIWBNBGRIUAUZIPLJKXGUALOJRYFGWDWZNQXRQILNQVGLHICNXSFXGVSND");
    IMC::Rows tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeout = 34818U;
    tmp_tmp_msg_0_0.lat = 0.74319917427;
    tmp_tmp_msg_0_0.lon = 0.76513529158;
    tmp_tmp_msg_0_0.z = 0.395785481739;
    tmp_tmp_msg_0_0.z_units = 93U;
    tmp_tmp_msg_0_0.speed = 0.733949492098;
    tmp_tmp_msg_0_0.speed_units = 49U;
    tmp_tmp_msg_0_0.bearing = 0.872088021675;
    tmp_tmp_msg_0_0.cross_angle = 0.593520071116;
    tmp_tmp_msg_0_0.width = 0.843364596846;
    tmp_tmp_msg_0_0.length = 0.777336444159;
    tmp_tmp_msg_0_0.hstep = 0.0941140288635;
    tmp_tmp_msg_0_0.coff = 61U;
    tmp_tmp_msg_0_0.alternation = 209U;
    tmp_tmp_msg_0_0.flags = 78U;
    tmp_tmp_msg_0_0.custom.assign("YVEBGRAEGJPSMTNYPSKWFLJHVOHPAJJHNRUXEWIWGFRZJWCTNDVBZTSGUTMKDLYUXLACKYPFE");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::LogBookControl tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.command = 133U;
    tmp_tmp_msg_0_1.htime = 0.610119565622;
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
    msg.setTimeStamp(0.221919339289);
    msg.setSource(59968U);
    msg.setSourceEntity(60U);
    msg.setDestination(4708U);
    msg.setDestinationEntity(220U);
    msg.timeout = 9630U;
    msg.lat = 0.0730063178304;
    msg.lon = 0.657659184282;
    msg.z = 0.533387928206;
    msg.z_units = 218U;
    msg.speed = 0.531642200906;
    msg.speed_units = 3U;
    msg.bearing = 0.251332411198;
    msg.width = 0.0103172833123;
    msg.direction = 129U;
    msg.custom.assign("FAPQNFBVYUO");

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
    msg.setTimeStamp(0.346397271767);
    msg.setSource(43645U);
    msg.setSourceEntity(215U);
    msg.setDestination(34015U);
    msg.setDestinationEntity(139U);
    msg.timeout = 46868U;
    msg.lat = 0.446724722826;
    msg.lon = 0.429623898051;
    msg.z = 0.636190139057;
    msg.z_units = 23U;
    msg.speed = 0.748450913897;
    msg.speed_units = 146U;
    msg.bearing = 0.143357834773;
    msg.width = 0.386509694922;
    msg.direction = 213U;
    msg.custom.assign("LEGOLKPJIMMSNSSXVWRIWUUKSLHZRLZRYPWTDVENYFAVCYSHEHPZAURXCHAGWRHLBPCVTWKVSTEEBFRTSGNBIJAQXAWONXAMTDXOTECQDMTIMINFICZSGHGDYMUTOKGEJMORWLOKSFCJDFXNQYAYTZEZIVGRNVVSOFYJQMDVY");

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
    msg.setTimeStamp(0.321309608936);
    msg.setSource(23620U);
    msg.setSourceEntity(70U);
    msg.setDestination(45280U);
    msg.setDestinationEntity(244U);
    msg.timeout = 47042U;
    msg.lat = 0.866261022404;
    msg.lon = 0.357628441531;
    msg.z = 0.153658319436;
    msg.z_units = 237U;
    msg.speed = 0.206033253226;
    msg.speed_units = 113U;
    msg.bearing = 0.0781414845967;
    msg.width = 0.66837420611;
    msg.direction = 29U;
    msg.custom.assign("FTBVBEKWPZTKCPALJNGV");

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
    msg.setTimeStamp(0.221102977149);
    msg.setSource(7893U);
    msg.setSourceEntity(241U);
    msg.setDestination(49748U);
    msg.setDestinationEntity(138U);
    msg.op_mode = 142U;
    msg.error_count = 150U;
    msg.error_ents.assign("NZXPKLBSENOLFASAMNCJEXCJMIYUMVWADLFG");
    msg.maneuver_type = 53758U;
    msg.maneuver_stime = 0.506673177886;
    msg.maneuver_eta = 36493U;
    msg.control_loops = 2567334903U;
    msg.flags = 232U;
    msg.last_error.assign("UHUVFGQVRIRJDSCUPHFKUABJDXPXZKEDLCPIAREDUDXHTEAOSROWIQFVZGIEVZNIDGBQWYOOMPHYNJYAPHNJUEWDRTVTISGTKWDLRMEFBCMRZLGBOSHHPCZSIKJCUFNHLCBMNGAIUSFDNVZDLQLXJTMSFQBFEGJTVLWQAUXWYGAXMMLXQGXTTVASJOMCYWAO");
    msg.last_error_time = 0.611589250771;

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
    msg.setTimeStamp(0.267104354283);
    msg.setSource(37173U);
    msg.setSourceEntity(223U);
    msg.setDestination(12521U);
    msg.setDestinationEntity(176U);
    msg.op_mode = 1U;
    msg.error_count = 221U;
    msg.error_ents.assign("GAJJHJYYPRDAXBZXNDVENZMWQJJFSSMLWIVBAVMYEZUCPUBFWEOAEKZUUDMLGGCNSTYFGXLRGMGKNGQVQVAODRVLYIKKZRTXXXOAOHRHAMGQGSPBOZCNASZTLIAIHWRVDAPIBDUINDHEFWTRDBSZVSBCOOVRBIRPLHPYYKHCIFXNBJMQXLCDKLNWPYFECIUQPCEKT");
    msg.maneuver_type = 5164U;
    msg.maneuver_stime = 0.401446251091;
    msg.maneuver_eta = 60386U;
    msg.control_loops = 1027500100U;
    msg.flags = 195U;
    msg.last_error.assign("QGSVXWRVEUOUDHTKDHTXQZJDYKRTKBDRIIPA");
    msg.last_error_time = 0.724955783405;

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
    msg.setTimeStamp(0.110864795125);
    msg.setSource(16694U);
    msg.setSourceEntity(84U);
    msg.setDestination(2720U);
    msg.setDestinationEntity(114U);
    msg.op_mode = 84U;
    msg.error_count = 89U;
    msg.error_ents.assign("PQEEGSRCEWBLEPQTERCOLSSIQEYJNFCZHFCOPGXSYYCPGXADXDYAUGRBTOQDTOKUWZLZEZOKLBBVRWDEBOQAWGQFCNUHNKFBULIMLNVVVJWMFSCIRXNVZJWUBZRARTCGDLKRHPYJCIHGUAMVFNPATVLODGBIHTQOMXSDIVBEZPXJYXMEYSYIRHHFJKJOKFIQKZVXGJOFIMSFZMYSUPLQVQ");
    msg.maneuver_type = 42424U;
    msg.maneuver_stime = 0.536520180145;
    msg.maneuver_eta = 36407U;
    msg.control_loops = 1787195588U;
    msg.flags = 72U;
    msg.last_error.assign("PEBPLAFKKTBSLVPNIJNCAJQZLYRISELBAWMQXNHWZPNREBPLICJTD");
    msg.last_error_time = 0.607167579859;

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
    msg.setTimeStamp(0.333312999577);
    msg.setSource(337U);
    msg.setSourceEntity(150U);
    msg.setDestination(33283U);
    msg.setDestinationEntity(58U);
    msg.type = 117U;
    msg.request_id = 43279U;
    msg.command = 247U;
    IMC::CustomManeuver tmp_msg_0;
    tmp_msg_0.timeout = 31816U;
    tmp_msg_0.name.assign("EZFPJRWDEKNTOFTJDEABSOOECWMVZJMGLFYWHESZBOJIIQSREWQSDBHLRNCXGGHDBHEPJNTYMTXY");
    tmp_msg_0.custom.assign("RLSBSUPSGZDMMICVFHJYKIPNYI");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 49949U;
    msg.info.assign("QLBSVLUHLPNUWSFGSAWVKNIWJFDHUBPZHMOJRVTDSMNIYOTRFDXRTKXCITUVGDAMWISWDFQHNRVNFAXOZVSQNOLHJBNXGSJCVGWIYYKZTSATKBJOPCRXORUFZWHUBHNJQBGZZEHCYWKYEMLEFRJQYATLICHKAENVFRCIXQKZIUMSKKPZEJUZMVCYDWOGMWBUXOIOJFBLHZAEELNLRRGGGODAVPTPEXJCBXBPKMSCUQPAYCPQY");

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
    msg.setTimeStamp(0.873920613127);
    msg.setSource(23731U);
    msg.setSourceEntity(190U);
    msg.setDestination(56532U);
    msg.setDestinationEntity(70U);
    msg.type = 28U;
    msg.request_id = 62640U;
    msg.command = 1U;
    IMC::CustomManeuver tmp_msg_0;
    tmp_msg_0.timeout = 10554U;
    tmp_msg_0.name.assign("DCMLGUYHYEUZHQAGIVTPKAKLVBUOVZVNXBMZHDBOAOJIOZUAELLSHQFUIFCIXQJJQYSHYSVTSLVONRCLOGWKDXIZYSWMEEHYTBEDOPPPCUSKBBMVJZGGMFSWDMGWMHRDWLIBJBIQUCKANWDKRETACCLPNNKNKEJSWOUHIDQLZBWEPYVGQFRYFWXTDKQCYMRZFXSJAUWXRGTQAPITNPTICPGNXKUTXFABQXVRRVLRJMHNEYSOEFCOZAMG");
    tmp_msg_0.custom.assign("ZZMHDEFJKXGQGONRMLDURALLIROCQQFIMDBVASRIBLHDJNLWRFTNEZBJUAOVTRAUCNYKYFBVQIFDMVTEOXXXQCTPHZWBLJTFQAYUURIL");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 14669U;
    msg.info.assign("HDVIHVFKMPDVNOGXIEXXCACFLRYAVTFVJWCBAAZVTPJCKMHTIXMOEBJKEWZWOYEOKBHSVASADMUMHZPCDTAGUSTWAMONKIBFNYWOPOYJHPPKQGCPXQBMZUNMXCSUEYTTGBNKVDRBBUZZWGLPGVMAFBNBDILQYQOSZQJJLLFYEHWINGQROWFMNHUQCYRAITUZLKWYXIFRCIQLCLXDTHGNERDHRRPSLXUKJDOFRSKTQWJNGRUPXESJIEZFYZLSDS");

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
    msg.setTimeStamp(0.54941492687);
    msg.setSource(27388U);
    msg.setSourceEntity(222U);
    msg.setDestination(15554U);
    msg.setDestinationEntity(205U);
    msg.type = 138U;
    msg.request_id = 58904U;
    msg.command = 218U;
    IMC::Sample tmp_msg_0;
    tmp_msg_0.timeout = 29218U;
    tmp_msg_0.lat = 0.0785440385866;
    tmp_msg_0.lon = 0.0906587194572;
    tmp_msg_0.z = 0.860568186961;
    tmp_msg_0.z_units = 106U;
    tmp_msg_0.speed = 0.435414022437;
    tmp_msg_0.speed_units = 81U;
    tmp_msg_0.syringe0 = 15U;
    tmp_msg_0.syringe1 = 220U;
    tmp_msg_0.syringe2 = 230U;
    tmp_msg_0.custom.assign("TDASMFWPIDGHNJATDQDCGANEHJUIVPHNLSCBATWRXKIXVYACBWIPUVXWJBVTDZFDSNYSOLWNKAOXTXGWVOVOMPLYQDMYGMXIMJYFEZPQLQSOBOKWIQRKASYFZHGPWOQQNPKSHZR");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 4776U;
    msg.info.assign("YOHWQZXPLTILPSBYNNIXVVEBMGVPFYJTXZGECSFFDQTYKTJDFRMKQYPIQNJBUSEKXAICGDZOWCKAZDFPLNPEHNPTEUQLQHLEDFPXLJIOOSRKGHQSHRLQDFOUTOIOBUVIGJNEHRBITCDAKBWDMRMCUKNSSPWX");

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
    msg.setTimeStamp(0.0244896656773);
    msg.setSource(19381U);
    msg.setSourceEntity(137U);
    msg.setDestination(12387U);
    msg.setDestinationEntity(93U);
    msg.command = 95U;
    msg.entities.assign("NBLFJINEYLJDZDZEXTPYVJWJTDXWVQKSLQBTZWFFRRGCESKYQPVWYMZMOMOBQBWACOSHAQMIWLNENGNLSFIDFJKHZRAXFGIGHUKQERCOWNUIYHIYMYLHTTNLOUUUVSLDEZIPTQUKSKPAOCOAFMRXSGJVXTGZEJXDBHBQKBFCTXYXMEVAHJQVKJRQRZPUWRAOGELCNEHTHCISWRZXVYLAYOKIZDNADVPFGVDSFPPMBD");

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
    msg.setTimeStamp(0.836677083202);
    msg.setSource(57935U);
    msg.setSourceEntity(186U);
    msg.setDestination(753U);
    msg.setDestinationEntity(56U);
    msg.command = 210U;
    msg.entities.assign("UYDAMQHIKENBYTLHRAYVGMAZEVKGPVERRFJJQJMUMXRIJKUXIBNMJCGTCTDCGUVGZJWOVNBJNBSONFWHQLQEICCOSWLPXPATNVSFGSFGUNFDRHBEVSHDRXBNIPJQXCAKEWYXTFDPPYZAHWDVBOOUYZLBLPMDWZXLZVSNUTTYMOKOCHLZAGOUJXYALDKPXBRQDDRWOMEZQKGYPFFWHEFJCQAIZXOMSSKTH");

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
    msg.setTimeStamp(0.0579497074184);
    msg.setSource(28703U);
    msg.setSourceEntity(227U);
    msg.setDestination(5602U);
    msg.setDestinationEntity(83U);
    msg.command = 67U;
    msg.entities.assign("ZYEWSACJODZMMHSQYRQYSPGVQOQGRNOQPISOOPVLKVUPUGINCGWPWDLKQMSYVDSCAFWMHKEEHJXENAUMNWPGPIYZLTRITYKXVEIKBHALQNWFIMWFSTNJWDNFGSDGVFCXRWHHXZGFMMRHJICDUIZBEBLAXTDQIQECYZJ");

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
    msg.setTimeStamp(0.00282791504787);
    msg.setSource(52136U);
    msg.setSourceEntity(114U);
    msg.setDestination(61605U);
    msg.setDestinationEntity(124U);
    msg.mcount = 152U;
    msg.mnames.assign("JKMMOWFQEPNQEDAPERYJSHILALFSAETLLBKANQJNFHPVQCXJGREXWKCITVJVGHDQNUBIQRGMOVDASBDLUSWDHIMBTKJTAGCXVXFOCKBYBMNYFIZZHCK");
    msg.ecount = 38U;
    msg.enames.assign("TIXKUIFIJWYBDAUUPWTCIZZDRKRVBPJZTBPCGUQYNRJRJYYXMVXZOAGGLXXNVACDXOOMRIMCYNMZWKWGIDVEIRFBWNHOWRMYPQNASEIKUDDJBCSJFODOLQWVHMTGHFBJATMNSEZXFHEFBLRWFHR");
    msg.ccount = 209U;
    msg.cnames.assign("MFNHLYNZQBHHGEEOJUDMETGVCXPGUMMWYXVTJVOCPIGLOLWAWJKUSTNUEZDCSASFJOPOLFAYTGPZZVIJKDEXGTRZLRUNUINTKKFMCXKQPVF");
    msg.last_error.assign("YZFKQXNTEQIBPGQBFJZCXBFKNWDVZUADYXOXUCTHOQEJFDTNUPLVIWFETXRJUMJLFIUKRZOMMCSLKXPDHR");
    msg.last_error_time = 0.367932670101;

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
    msg.setTimeStamp(0.578398037231);
    msg.setSource(58040U);
    msg.setSourceEntity(114U);
    msg.setDestination(9596U);
    msg.setDestinationEntity(250U);
    msg.mcount = 125U;
    msg.mnames.assign("ZGGKYWJWKEXRPGILFVGTRZHGDLKMAXCQDJSCPLPAANZDQTTGHNFNALVRIIIFVLNNSLXFYEOURWKRIFTHRFBMQVCAAOGLPJDZHKELHTRYEXRYABIMMWVYWEWVQEAOGOYTCOYFXJUGEKISVMQOFWPUBBRVVUBSCSXPEPNQNJCJBXZWAJBHSOQSDMPAODTBYXIITWRSMMLUXDVKDJOKSCUJZUYZHKPKUNHQTXUNOL");
    msg.ecount = 138U;
    msg.enames.assign("YZCRBADBXIPJNRDCAPKEYPZKPFRMWMHHRAUJIYMPVANASEJETMBTQYZBSPICVSPTYMBKY");
    msg.ccount = 54U;
    msg.cnames.assign("PKQKTAVEHYUNXWPZUBXXSSSWIQAYDGZKEPGKPSIQTUIMHCWBUZBAHADMLKDNNGUAIFWZRPMVLFZLCCVGTIEQMMWNPLQCKGKOVNWVRMITOQGRUBVPACYLMTVHRINJECNBUGEFDSRQSBODKJJLCHOZPWGXJANLCVDYMBAJEPTIYJTOHLZXTIRKCSOJBEYRLZJEDKUFXFNHDSMWUHVQA");
    msg.last_error.assign("AIDFNSEOBIOUIBCFCUPAWLGNHTXRZKBLOMCRHOCJMDEXKUDUMFOPXCLDUOJGDQSJSXPVYRLZJAIYQBJTKAKBYNTWMUFDJMMJPRRFTPZLLCRZQTKURPYZCGGLBCXAIQVSFMEHXIXHCMVYWUOEVRPXUGYZSCORKHAJVXTGYNAFBLZSWYSGVIOQJADPSNNBKPVKHEWHJKKHXZNTWYTUNLSVEDWEEQMZZBGIEFAIPDBHR");
    msg.last_error_time = 0.851694233338;

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
    msg.setTimeStamp(0.678678244907);
    msg.setSource(44445U);
    msg.setSourceEntity(50U);
    msg.setDestination(65397U);
    msg.setDestinationEntity(81U);
    msg.mcount = 191U;
    msg.mnames.assign("GHLPXIELAHKNYQEYNTPLYOCPPQWZ");
    msg.ecount = 222U;
    msg.enames.assign("JMDTUELRZOHJVIVOBZKEYWJCPXMENORPKQGTYUBZDCTMVTQFXTZRSNQJPQDOZORHWBVYOSMZWWEWGNYRHCGMALYYWDVRPPRSLHLTISBJRLGDMTFUCFQVBASSTZOTHFSLWKFHNJAJLQFBEHVWIQVBWPKICWEPLYMGUACUHBMZIJDUNKXCQEANNUDXOODBNXIICSHR");
    msg.ccount = 4U;
    msg.cnames.assign("KYZNJLFWDMFHCZAAYTEFRNTAYRSSCEFFWQMITSHRBWWVERCLRTLHZOPLYIGKEYXOXNLTUVEVYCZWQTVYSUSJXJKMNXTYJRUOSUHAHQWDPWCKLHGKFEBEOKQDDDADMYKIIHPTQJJXGFSOCACBNSUQURZVJLIAHMIXZMNSNPBRLNOPYZI");
    msg.last_error.assign("TYZCSDBIWDRAKURKTKXGDUBNEJLMXDS");
    msg.last_error_time = 0.0246865964598;

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
    msg.setTimeStamp(0.321191341085);
    msg.setSource(57167U);
    msg.setSourceEntity(44U);
    msg.setDestination(63764U);
    msg.setDestinationEntity(9U);
    msg.mask = 205U;
    msg.max_depth = 0.289339959997;
    msg.min_altitude = 0.858396268535;
    msg.max_altitude = 0.978738775036;
    msg.min_speed = 0.50440898074;
    msg.max_speed = 0.706564956693;
    msg.max_vrate = 0.716465680584;
    msg.lat = 0.785760965851;
    msg.lon = 0.779475909067;
    msg.orientation = 0.161323316388;
    msg.width = 0.0131042877918;
    msg.length = 0.958347741832;

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
    msg.setTimeStamp(0.182895388992);
    msg.setSource(4404U);
    msg.setSourceEntity(128U);
    msg.setDestination(9507U);
    msg.setDestinationEntity(99U);
    msg.mask = 30U;
    msg.max_depth = 0.356096215886;
    msg.min_altitude = 0.721520070688;
    msg.max_altitude = 0.111959698185;
    msg.min_speed = 0.007081622081;
    msg.max_speed = 0.0874547713057;
    msg.max_vrate = 0.280244205397;
    msg.lat = 0.279048999082;
    msg.lon = 0.956316236179;
    msg.orientation = 0.21025481957;
    msg.width = 0.339416827871;
    msg.length = 0.566286063193;

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
    msg.setTimeStamp(0.0731820696982);
    msg.setSource(10437U);
    msg.setSourceEntity(159U);
    msg.setDestination(63025U);
    msg.setDestinationEntity(19U);
    msg.mask = 151U;
    msg.max_depth = 0.382744444429;
    msg.min_altitude = 0.0751505652597;
    msg.max_altitude = 0.908912867933;
    msg.min_speed = 0.624504772143;
    msg.max_speed = 0.625020251506;
    msg.max_vrate = 0.851925803748;
    msg.lat = 0.307940319188;
    msg.lon = 0.696507160697;
    msg.orientation = 0.993109021622;
    msg.width = 0.144684506523;
    msg.length = 0.668584523386;

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
    msg.setTimeStamp(0.626219063385);
    msg.setSource(54275U);
    msg.setSourceEntity(155U);
    msg.setDestination(64722U);
    msg.setDestinationEntity(217U);

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
    msg.setTimeStamp(0.825368055868);
    msg.setSource(21930U);
    msg.setSourceEntity(122U);
    msg.setDestination(62311U);
    msg.setDestinationEntity(89U);

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
    msg.setTimeStamp(0.0660369816454);
    msg.setSource(61262U);
    msg.setSourceEntity(121U);
    msg.setDestination(50283U);
    msg.setDestinationEntity(14U);

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
    msg.setTimeStamp(0.698971803889);
    msg.setSource(12207U);
    msg.setSourceEntity(200U);
    msg.setDestination(61559U);
    msg.setDestinationEntity(239U);
    msg.duration = 25030U;

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
    msg.setTimeStamp(0.93428359016);
    msg.setSource(33621U);
    msg.setSourceEntity(17U);
    msg.setDestination(23887U);
    msg.setDestinationEntity(247U);
    msg.duration = 44621U;

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
    msg.setTimeStamp(0.383094336637);
    msg.setSource(61007U);
    msg.setSourceEntity(62U);
    msg.setDestination(33640U);
    msg.setDestinationEntity(17U);
    msg.duration = 51661U;

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
    msg.setTimeStamp(0.152535049128);
    msg.setSource(9103U);
    msg.setSourceEntity(84U);
    msg.setDestination(36191U);
    msg.setDestinationEntity(109U);
    msg.enable = 22U;
    msg.mask = 3650657494U;
    msg.scope_ref = 302231518U;

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
    msg.setTimeStamp(0.329899823227);
    msg.setSource(22932U);
    msg.setSourceEntity(103U);
    msg.setDestination(33809U);
    msg.setDestinationEntity(59U);
    msg.enable = 202U;
    msg.mask = 285905441U;
    msg.scope_ref = 492477160U;

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
    msg.setTimeStamp(0.118283193047);
    msg.setSource(6908U);
    msg.setSourceEntity(104U);
    msg.setDestination(12935U);
    msg.setDestinationEntity(113U);
    msg.enable = 226U;
    msg.mask = 3618096751U;
    msg.scope_ref = 2997287948U;

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
    msg.setTimeStamp(0.452849656877);
    msg.setSource(18265U);
    msg.setSourceEntity(138U);
    msg.setDestination(17543U);
    msg.setDestinationEntity(115U);
    msg.medium = 158U;

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
    msg.setTimeStamp(0.0684564291396);
    msg.setSource(35309U);
    msg.setSourceEntity(0U);
    msg.setDestination(19400U);
    msg.setDestinationEntity(132U);
    msg.medium = 237U;

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
    msg.setTimeStamp(0.0437675459102);
    msg.setSource(58614U);
    msg.setSourceEntity(117U);
    msg.setDestination(9181U);
    msg.setDestinationEntity(83U);
    msg.medium = 158U;

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
    msg.setTimeStamp(0.85282222421);
    msg.setSource(54701U);
    msg.setSourceEntity(64U);
    msg.setDestination(11510U);
    msg.setDestinationEntity(161U);
    msg.value = 0.886977910381;
    msg.type = 107U;

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
    msg.setTimeStamp(0.195623205259);
    msg.setSource(60333U);
    msg.setSourceEntity(173U);
    msg.setDestination(43257U);
    msg.setDestinationEntity(158U);
    msg.value = 0.85177345499;
    msg.type = 85U;

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
    msg.setTimeStamp(0.985012991688);
    msg.setSource(3306U);
    msg.setSourceEntity(246U);
    msg.setDestination(25056U);
    msg.setDestinationEntity(176U);
    msg.value = 0.809271314717;
    msg.type = 33U;

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
    msg.setTimeStamp(0.906951733137);
    msg.setSource(17085U);
    msg.setSourceEntity(130U);
    msg.setDestination(15245U);
    msg.setDestinationEntity(149U);
    msg.possimerr = 0.763968827612;
    msg.converg = 0.015705074857;
    msg.turbulence = 0.541162550073;
    msg.possimmon = 161U;
    msg.commmon = 43U;
    msg.convergmon = 109U;

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
    msg.setTimeStamp(0.232665865812);
    msg.setSource(20680U);
    msg.setSourceEntity(71U);
    msg.setDestination(58694U);
    msg.setDestinationEntity(245U);
    msg.possimerr = 0.846656158195;
    msg.converg = 0.800686151203;
    msg.turbulence = 0.648477593755;
    msg.possimmon = 18U;
    msg.commmon = 180U;
    msg.convergmon = 198U;

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
    msg.setTimeStamp(0.612309804891);
    msg.setSource(8660U);
    msg.setSourceEntity(125U);
    msg.setDestination(25170U);
    msg.setDestinationEntity(246U);
    msg.possimerr = 0.67061472014;
    msg.converg = 0.766755388494;
    msg.turbulence = 0.0172970078382;
    msg.possimmon = 67U;
    msg.commmon = 18U;
    msg.convergmon = 214U;

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
    msg.setTimeStamp(0.910275550369);
    msg.setSource(6423U);
    msg.setSourceEntity(202U);
    msg.setDestination(33137U);
    msg.setDestinationEntity(177U);
    msg.autonomy = 21U;
    msg.mode.assign("EPVQQZENHHSMEVUTZDKYUQBNMDQEODLGZFZKJRPHAPCMSFRTXIUYHSCJCLVWSGFKTWLGYXYZLOFBWATPBNPJQXGNDXTYPFEUKRBEXNAQZGBFMXJDBBQZYAVRTRGOFDAVISTIUPIALBVEOGUUJNGALKYOVHMWKLCYCJJCHLUTOWKSBMMLKORKMAECDENJHPAXXVHQJSFVNCQSRUWHCIIZYGFGVNUITW");

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
    msg.setTimeStamp(0.104819458659);
    msg.setSource(7825U);
    msg.setSourceEntity(78U);
    msg.setDestination(58306U);
    msg.setDestinationEntity(92U);
    msg.autonomy = 90U;
    msg.mode.assign("ZITOMWJPOWILCHGGKASUWQOMEBDVGZCNHFVIWFAAUHQILHJTENEXDRCADRUVUPMQTWIGORFDZYXHVQEKGNBUKBAQYEUCQJFLNSZTHPPVINOMZYSNGKEYKQVEZHEXLBMJAQKFMVFLHTDCJTPDEXJLXXOOSMPDGWIFZTBWFZAKCOVGWYCLYQLFEPVROLYCTKRMNATNIUSSHGRGBXAXWU");

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
    msg.setTimeStamp(0.413492353718);
    msg.setSource(20735U);
    msg.setSourceEntity(74U);
    msg.setDestination(17080U);
    msg.setDestinationEntity(139U);
    msg.autonomy = 222U;
    msg.mode.assign("FUVLDVENLIDKOIXBFMJQGJSDKOVGCYACYTBSYQFZUCXICPHZTAKRVKQNM");

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
    msg.setTimeStamp(0.48173046298);
    msg.setSource(60185U);
    msg.setSourceEntity(132U);
    msg.setDestination(17027U);
    msg.setDestinationEntity(45U);
    msg.type = 129U;
    msg.op = 130U;
    msg.possimerr = 0.57892526737;
    msg.converg = 0.794632081438;
    msg.turbulence = 0.198907983555;
    msg.possimmon = 24U;
    msg.commmon = 213U;
    msg.convergmon = 245U;

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
    msg.setTimeStamp(0.270465268099);
    msg.setSource(13766U);
    msg.setSourceEntity(8U);
    msg.setDestination(30840U);
    msg.setDestinationEntity(55U);
    msg.type = 188U;
    msg.op = 6U;
    msg.possimerr = 0.62073408201;
    msg.converg = 0.37030660231;
    msg.turbulence = 0.173574903463;
    msg.possimmon = 58U;
    msg.commmon = 211U;
    msg.convergmon = 32U;

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
    msg.setTimeStamp(0.12966040697);
    msg.setSource(31190U);
    msg.setSourceEntity(188U);
    msg.setDestination(11562U);
    msg.setDestinationEntity(7U);
    msg.type = 114U;
    msg.op = 204U;
    msg.possimerr = 0.546845537234;
    msg.converg = 0.546932452966;
    msg.turbulence = 0.189496739045;
    msg.possimmon = 69U;
    msg.commmon = 5U;
    msg.convergmon = 174U;

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
    msg.setTimeStamp(0.462356040605);
    msg.setSource(30598U);
    msg.setSourceEntity(105U);
    msg.setDestination(58952U);
    msg.setDestinationEntity(43U);
    msg.op = 112U;
    msg.comm_interface = 76U;
    msg.period = 47836U;
    msg.sys_dst.assign("LXLOXRTTTDNYVGRVETTRPZJFUBLHZJFDKFKZJIHVBOOHZHXMGHKCCYMIPIIGEAZEPMNUUPQXYCQHMXOSJWLBREAUVLDRBZFMIXPAULMGTBEUVRRNXILIMAVMEKSWCCYHOQTBAYVPRTGSDQWWOGOYGK");

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
    msg.setTimeStamp(0.425846316685);
    msg.setSource(38288U);
    msg.setSourceEntity(92U);
    msg.setDestination(3947U);
    msg.setDestinationEntity(152U);
    msg.op = 232U;
    msg.comm_interface = 222U;
    msg.period = 678U;
    msg.sys_dst.assign("JAAHVFNRLBIKQLIMMOBFXHWMCOWOAFMQOZYAKJHLIWSVGRPLLCMYQIMYOMVLVXEGXYTTZCZBUXUQFXNGSRBVXUKWZTSMBIFNOVBDACZCAQQHXUJYIKTHBJOAQNNHGRMFPGSDLKURQNPLPHBBIDWFTEWZIRGUVBAJSGFJYNDJXILKPTVEVYRSNUHWDNCFPPFERZTUNJZQDSAWERQYKOLSIWEOUASCJPCTDE");

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
    msg.setTimeStamp(0.41586772978);
    msg.setSource(38846U);
    msg.setSourceEntity(58U);
    msg.setDestination(25381U);
    msg.setDestinationEntity(70U);
    msg.op = 227U;
    msg.comm_interface = 238U;
    msg.period = 30438U;
    msg.sys_dst.assign("EAMVYYPLFHCJSFFLNDAENGCDGDPZZMXJWUBKRCLNVGAYAQYSMOTIIGWQKHOAENGLEPIWIUVUQIZMBSRDXZTDQJXJTLUOSZBLNULPSTSBWAONLDCO");

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
    msg.setTimeStamp(0.873306572239);
    msg.setSource(63440U);
    msg.setSourceEntity(196U);
    msg.setDestination(16535U);
    msg.setDestinationEntity(116U);
    msg.stime = 2806038323U;
    msg.latitude = 0.515023262888;
    msg.longitude = 0.64924012465;
    msg.altitude = 25693U;
    msg.depth = 13019U;
    msg.heading = 39005U;
    msg.speed = 14733;
    msg.fuel = -90;
    msg.exec_state = 44;
    msg.plan_checksum = 56076U;

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
    msg.setTimeStamp(0.449859812757);
    msg.setSource(62584U);
    msg.setSourceEntity(210U);
    msg.setDestination(58710U);
    msg.setDestinationEntity(133U);
    msg.stime = 2874670164U;
    msg.latitude = 0.765035244999;
    msg.longitude = 0.224228318691;
    msg.altitude = 11559U;
    msg.depth = 41069U;
    msg.heading = 47323U;
    msg.speed = -7819;
    msg.fuel = -90;
    msg.exec_state = -102;
    msg.plan_checksum = 7061U;

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
    msg.setTimeStamp(0.946368868089);
    msg.setSource(50653U);
    msg.setSourceEntity(223U);
    msg.setDestination(34361U);
    msg.setDestinationEntity(90U);
    msg.stime = 3934358006U;
    msg.latitude = 0.953724719377;
    msg.longitude = 0.903344124928;
    msg.altitude = 50311U;
    msg.depth = 58966U;
    msg.heading = 49403U;
    msg.speed = 3935;
    msg.fuel = -71;
    msg.exec_state = 108;
    msg.plan_checksum = 33980U;

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
    msg.setTimeStamp(0.490107358316);
    msg.setSource(51638U);
    msg.setSourceEntity(171U);
    msg.setDestination(39744U);
    msg.setDestinationEntity(122U);
    msg.req_id = 26631U;
    msg.comm_mean = 81U;
    msg.destination.assign("FDICDIKEMWYBYXVMJVSPEQTKAUKXOQJNWOGGQMEYXCFSRTOXWHIBVBFNDZIPGVMOYBJULRGUCGNHIHNRWOAWHJSQCWBV");
    msg.deadline = 0.119978335159;
    msg.range = 0.198951691989;
    msg.data_mode = 202U;
    IMC::TCPRequest tmp_msg_0;
    tmp_msg_0.req_id = 25201U;
    tmp_msg_0.destination.assign("KDCVUXSJAHRFIOAVJKMZYOXQIYDIJEYRQYCFHRIQKLCUGOABWTRJKITSBRMXSFZYBDDLHTYGTWYPAJZPDSFMKLJGBPLWNAFQOUZNVCXC");
    tmp_msg_0.timeout = 0.355273120423;
    IMC::UamTxFrame tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.seq = 38022U;
    tmp_tmp_msg_0_0.sys_dst.assign("RSDTDFCASKECZDDZKFGXKWEXLQYMSWLEOIGTNZTTCMJIIMDOLXWHKIUFIHCJUZFAQPSGMCGUSQQULMXZUQNNBLBEPDDPGVUXNAOLXOPRTNVWHRJTWHLHKBMMGKFQRUMCVWWPRZTTJSGAZEXHJGNFTALVUJRIOEWYXKDEYZLFPBIPPVQOORWQBJABUCNZM");
    tmp_tmp_msg_0_0.flags = 214U;
    const char tmp_tmp_tmp_msg_0_0_0[] = {47, 83, -31, -110, -52, -74, 15, -77, 79, 121, -46, 30, 61, -89, -26, -107, -50, -72, 35, 41, 87, -15, -33, -51, -56, -73, -112, 104, 62, -99, 49, -112, 23, -85, -79, -113, 48, 80, 118, 26, 3, -99, -107, 28, -37, -30, -123, -67, -120, 46, 34, 22, -72, -118, 8, -119, -86, 65, 51, -31, -27, 72, 36, 99, -115, -128, 26, -95, 25, -94, 104, 11, 50, -65, -103, 91, 60, -47, 41, 44, 86, -47, 39, 113, 125, -75, -84, 112, -17, -119, -51, 48, -98, 110, -106, -16, 80, -53, -61, 90, -121, -50, -14, -125, 125, 100, -13, -106, 32, -67, -116, -57, -59, 122, 27, -104, 107, 80, 45, 79, -32, -49, -67, -46, 74, 18, -114, 46, 95, -34, 119, -11, -61, 69, -90, 6, -60, -36, 33, 92, 86, -32, 109, -72, -60, -104, -27, 106, -87, 42, 76, -24, 38, 91, 25, -65, -4, 32, -127, 125, -92, -3, 28, -71, -40, 91, -14, -56, 101, -114, -16, 8, -66, 101, -95, -115, -2, -5, 7, -101, 110, 7, -85, 105, -88, 123, -10, -53, 120, 50, 71, 103};
    tmp_tmp_msg_0_0.data.assign(tmp_tmp_tmp_msg_0_0_0, tmp_tmp_tmp_msg_0_0_0 + sizeof(tmp_tmp_tmp_msg_0_0_0));
    tmp_msg_0.msg_data.set(tmp_tmp_msg_0_0);
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("LAVKBPDFNELDDVQPMVLTYDYQBWZVAEAEJIZMQMUNZXEZVSCAGVSNZKHDGINYLPPXUKQKQTDBWEJKUXNRTSXYJARYFOHLYSOCATOUHFXSIMWKGSXMGNISFWEJSPLCGNIJSCJITHFERBTRXQHHPNYWAFDDJOIGGVLYWPCOVUDMTWWXAQRMROZE");
    const char tmp_msg_1[] = {52, -114, -12, -52, -89, -45, 20, 115, 84, -21, -67, 5, 108, -66, -41, 0, -84, 79, -93, -123, -76, 26, 109, 57, 46, -127, -88, -39, 25, -66, -76, -40, 6, 4, 76, 77, -26, -84, -122, -34, -36, -55, 108, 12, -25, 101, -31, -34, -117, -109, 4, -105, -63, -126, 5, 35, -75, -60, 99, -110, 102, 75, 33, 68, 93, -49, -45, 34, 55, -42, 71, 81, 104, 17, 101, -69, -10, -86, 125, 67, 75, 53, 8, 6, -111, 13, -109, -94, -54, -86, -106, -83, 51, -5, 20, -37, 77, 48, 51, 111, 54, -22, 56, -85, -98, 44, -123, 112, 38, 79, -94, -33, 24, -12, 39, 65, 99, -4, -82, 21, 30, -116, -40, 32, 97, 79, -77, 122, -55, 54, -33, 0, 17, 70, 40, 120, 62, 42, 6, 106, 71, -87, -43, -75, 28, -69, 52, -7, 37, 114, 114, 118, -8, -18, 118, 50, -123, 97, -52, 124, 83, -125, -29, -38, -11, 6, 90, 50, 97, -71, 34, -91, -89, -117, -83, -25, 55, 34, -76, 104, -9, 102, 6, 118, -56, -5, -113, -1, -95, 7, -92, 109, 72, -8, -122, -68, -49, 99, 56, 71, 107, -8};
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
    msg.setTimeStamp(0.377517955701);
    msg.setSource(4935U);
    msg.setSourceEntity(53U);
    msg.setDestination(23285U);
    msg.setDestinationEntity(119U);
    msg.req_id = 21372U;
    msg.comm_mean = 188U;
    msg.destination.assign("KDHMJKGMESIDXRRHDLPDKMXXNSBJEHSOLSLCSIZWAXLNZWTXALNCEPCWMOVDMFUTTERHISHQEKLOMOUQZJUOKBXIJOPIHQAYPTYELHHRZYCIOVTBQSQVZNFHTGCFAAVVFWTWUPBLJKDGCOFPYATSLIIBEJZREUYMNDKWGVVZPNXFG");
    msg.deadline = 0.764398043765;
    msg.range = 0.867575423294;
    msg.data_mode = 92U;
    IMC::CreateSession tmp_msg_0;
    tmp_msg_0.timeout = 3569501741U;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("MBUWQSOFBYKGDJIWJIAOBJDACRBZMKQIWRVOXLFCOGGCVHSNINTPNDSIRYTABQWCIFKNTMJOLZPIFXQLTHMPJCKPREXAEWSLKDKZDWMFFZDTMBJNVAOAZSLU");
    const char tmp_msg_1[] = {-77, 79, 42, -95, 84, 109, 55, 43, -104, -2, -15, -46, -107, 63, -124, -28, 99, -17, 61, -24, 34, 107, -35, 33, 60, -111, 99, -89, 70, -127, -78, -37, 75, 121, 70, 53, 22, 11, -28, -72, -108, 86, 23, -28, 100, 48, 102, 100, -94, -107, 51, -127, 82, -124, 110, 124, 62, 118, -127, 79, -110, 24, 86, 23, 57, -14, 124, -59, -45, -5, -20, -121, 73, -126, 65, 11};
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
    msg.setTimeStamp(0.771460793516);
    msg.setSource(7848U);
    msg.setSourceEntity(161U);
    msg.setDestination(4132U);
    msg.setDestinationEntity(76U);
    msg.req_id = 57291U;
    msg.comm_mean = 74U;
    msg.destination.assign("GYUPTXFECKBGIDCDKTQZVASBUXMFKAKYWHRZXBUCNXACNDGYSBSLNJERYRHEAXZFSDWGNIIIRSZTOFPCJWVQBYHIPEWRWRWKFWBZFAMNMWQEFRYLPLQHZEYXSBDTPSUBVCCHCAIUGQHMNIUTVTXOHAAOOVMTHRGYKNQGJEQEVFRQGHMPKTWPUNLZKZIYSMXJLAIZZFJPJAJPYLV");
    msg.deadline = 0.146691108171;
    msg.range = 0.863848571885;
    msg.data_mode = 12U;
    IMC::AnnounceService tmp_msg_0;
    tmp_msg_0.service.assign("SSKFTXGKAPUPGAFBUCYDJSNYAHDIOCWXSUNSCUAFTXQHIWBZOVTCVEIOMVLLPJGQ");
    tmp_msg_0.service_type = 105U;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("ASLOSNHQFJAVRNBLHXYMNLHDMDXUOQHVAZEWYXFKVPKKUTXECVGLTLFGAQFFDREOLXDWSJISPGKJZGVWFOYUMQXPJJQUYZUBMZEMVJCZ");
    const char tmp_msg_1[] = {-112, -39, -114, -96, 1, -91, 24, -17, -95, 76, 119, 2, 110, 107, 49, -124, -29, 54, 108, 72, -40, -68, 120, -56, -22, 55, -95, -95, -61, -97, -50, -120, 126, -55, 21, 123, -65, -108, -88, 93, -97, -106, -67, 125, -87, 106, -117, 67, -101, -74, 3, 103, 94, -33, -94, 65, 29, 49, -5, -10, 111, 65, -107, 114, 112, -81, 4, 123, -98, 53, -50, -69, 72, -84, 73, 10, -91, -6, -128, -92, 83, 48, -75, 52, 89, 20, -61, -115, 48, 81, 93, 26, -7, -60, 26, -102, -128, -71, 50, -128, 16, -92, -2, 67, -57, 29, -80, -39, -12, -93, 36, -110, 33, -36, 8, 30, -47, 85, -106, -26, 68, 11, -92, 58, 56, -120, -96, -82, -86, 32, -19, -96, -81, 48, -75, -115, 113, 69, -87, -40, -72, -107, 103, 57, -85, -35, -14, -1, -96, 2, -12, 101, 45, 120, 51, -25, -41, 46, 36, -116, 63, 97, -88, 111, -33, 43, -29, 15, -93, 52, 51, -23};
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
    msg.setTimeStamp(0.648661319704);
    msg.setSource(12279U);
    msg.setSourceEntity(253U);
    msg.setDestination(3015U);
    msg.setDestinationEntity(136U);
    msg.req_id = 3835U;
    msg.status = 198U;
    msg.range = 0.685581924285;
    msg.info.assign("FVELFYKFLIXGYNVNEAGTLEURPVWQBMTRUDGBJHTUOADOOIGGRZYEMUPIDVHZDLCXYDDSPBMWBHOQAVVJJFIZZHSSKAPDTKIAOICNBWXQHRYBWCKARRNSJKGRJBIWKTHPQQDSFKOVMFBSCRCEABKFHQQMHTLZCYQXSCLLDZTXTAYNUZTRWGVGUNAUKOGSXFOMTNONVWJPQQIWEXWZEUVBDYUMJJNHCOASPLC");

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
    msg.setTimeStamp(0.28096812574);
    msg.setSource(47552U);
    msg.setSourceEntity(191U);
    msg.setDestination(49540U);
    msg.setDestinationEntity(245U);
    msg.req_id = 1800U;
    msg.status = 78U;
    msg.range = 0.885775498924;
    msg.info.assign("IMXJGQKMWAGWDXBOAGLRHOMWFSVVHQITJNZXGIRTRAQTHZVEMRMFEVQYBAQZBVQTSCDUEUOSTUTTDRFYAOGRYJDLFMSJJCNAALCFFZWRTUWGUPWLVUKPGLKPQCKABMISNUOINXUKHJXYZPDJNSPHLDUCZEBZBHKNQEFLSBBVDVPHMAIENYKXRGYCCPFUBGNQCXPZRPYHCKSEMN");

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
    msg.setTimeStamp(0.0815093255486);
    msg.setSource(32343U);
    msg.setSourceEntity(178U);
    msg.setDestination(62550U);
    msg.setDestinationEntity(18U);
    msg.req_id = 44041U;
    msg.status = 57U;
    msg.range = 0.117833457204;
    msg.info.assign("CWAKUEJDZSJNEESIKCSJOAOYBDEUPYHRLVXDHVFKRUETMYHMRBHOLMUEXCHTCRYXMRZQKYSJAIVCTLXWNYWYVCMRLJCSTHSXPAJEBGFPOWGGBZTOPZUEZBSJQIUKJPTCEHFGVKZIVQNQGQTLUFQWNPYDLGKIWRKKDOGJMWOGOINCVNNBZDUBRUMZMVPPAXBGXOLRBQKSAFHZIAVSXRLNFPTNSWLDADOZY");

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
    msg.setTimeStamp(0.71853033598);
    msg.setSource(5530U);
    msg.setSourceEntity(145U);
    msg.setDestination(6998U);
    msg.setDestinationEntity(73U);
    msg.req_id = 35111U;
    msg.destination.assign("WITEMBOJSMCVDNOKKFONDXNERSFWXDFLGHLDJAAQUQPWGYLMGWQVSLDGZXYBTZONUTIIRPVTZXUKJHQCNFWZWXIPLJTWYQWCIKHVHDUXOZQRLWQVXIGPFXXSQSTUBFNYKRCBEUJVYAOGYGRHSESCHBACSZDAATSKAKHVNIMZZUAHUHQQKPDNYMKZIRRBJCVOSYUGEGYXCPEWV");
    msg.timeout = 0.723596955758;
    msg.sms_text.assign("NPKCHOFVZLEXWHTTDQKKFSXEVXIDWJEYBEWWVIJKSFYCAPPBSKTLRGONTQUIUJICLZBAJZZHUBEDFCITRBEAOGQJPLZHUVACYAHFEGVIULPUIQDWERACNBLCQARNMGPHXWRIPMWLGKMDYOUOQMUNPJOIRVKSWHJDZXVTCRGTDGAXJYSBUXHLCRQPEBVNDKMALMMGM");

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
    msg.setTimeStamp(0.948012287977);
    msg.setSource(6774U);
    msg.setSourceEntity(138U);
    msg.setDestination(17012U);
    msg.setDestinationEntity(24U);
    msg.req_id = 29817U;
    msg.destination.assign("CVHTBLLRDOFUDLBEKHYAJWMQUPMPCVFYPUVOXZZJOQPYGSNNZZTTLWBTLUPJTIANWEASMFOPHCOZENXEPYFGBFIZENLMVQAXJFIDLMGEXAXUBKPACMITHTCHCWQKNLQWSWYIFJSRNKRYBGXTAUDIRGIZWIXICTWWBUJXVRIEKPHNGLRDMATHQUDDVSKJNRZQUMZVVFFQSOCDKEGOPSXMCYCSHMJYHJASDRVBEQROKQUGXOKBOWSJL");
    msg.timeout = 0.67422101107;
    msg.sms_text.assign("XMQTZULIZRBBRIDNECJHQNUSKFMGFMDWOEILVVJYRKJXJTBZPNFTUIPZFNAKNYUETNTTFZWGSHYRLHBJQDKTUYNDVZZLROQCCYSUIQILLLEWKVLDGAUHNOBOCUFREEJVBMXKMQQZPSXHRSMHAJ");

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
    msg.setTimeStamp(0.566459618286);
    msg.setSource(39662U);
    msg.setSourceEntity(43U);
    msg.setDestination(48563U);
    msg.setDestinationEntity(183U);
    msg.req_id = 51723U;
    msg.destination.assign("PBRZFOTXXQJQQFOANMEKWOYGQVUP");
    msg.timeout = 0.0631650801647;
    msg.sms_text.assign("XLFPUKNROHQJZMCOHCYBFSKLCYBEZKHIJAQRSLQNQXBTTUYQRPOMMDGIPZGHQIUQLRNZOWAIWTZLRAPXDAMPDURYSMUFDAFMYKXVUKOOPRWRAYAYSXMYSZXBYNXCJNSGPIUKSFFBCHDOSLGTVCADZUDHLGJWKPMEVBLXVNFZOEPMWHTUHCCTNVJWDQLGQQTICFDTZBTXERPENMCIESSFGYFI");

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
    msg.setTimeStamp(0.651016482872);
    msg.setSource(11949U);
    msg.setSourceEntity(5U);
    msg.setDestination(49184U);
    msg.setDestinationEntity(147U);
    msg.req_id = 60440U;
    msg.status = 234U;
    msg.info.assign("EBYTPLKLQLREFDFLXTXRVYTMQVVQYRDBCCTWHAKOOMEKLSIIBOSIGHGDOSIXUFTEF");

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
    msg.setTimeStamp(0.196997862415);
    msg.setSource(8958U);
    msg.setSourceEntity(154U);
    msg.setDestination(41694U);
    msg.setDestinationEntity(27U);
    msg.req_id = 32480U;
    msg.status = 13U;
    msg.info.assign("RCRFTACSREZHSCZGIALJQTRVBDPOOLPWXRLSOYPQGIUEKHFDVWWETMCWTUBOTGKHSUNMRB");

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
    msg.setTimeStamp(0.845338779877);
    msg.setSource(11526U);
    msg.setSourceEntity(67U);
    msg.setDestination(19899U);
    msg.setDestinationEntity(11U);
    msg.req_id = 47511U;
    msg.status = 61U;
    msg.info.assign("ETCPTBXBRRNIEDCHWTIDNVKVUHWIZUYEKMCXJJFDQJONGBGGXDITLIQWCCLXQSCAYOKZBYBOFZFJRPDGBYXLQVCJVHYTLWOFRDAQNGWHKAJBRBJRYGZOEUIBDEVZER");

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
    msg.setTimeStamp(0.448663379378);
    msg.setSource(21051U);
    msg.setSourceEntity(153U);
    msg.setDestination(2240U);
    msg.setDestinationEntity(34U);
    msg.state = 134U;

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
    msg.setTimeStamp(0.0685730260119);
    msg.setSource(9439U);
    msg.setSourceEntity(217U);
    msg.setDestination(53775U);
    msg.setDestinationEntity(61U);
    msg.state = 244U;

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
    msg.setTimeStamp(0.951439418097);
    msg.setSource(11578U);
    msg.setSourceEntity(124U);
    msg.setDestination(4413U);
    msg.setDestinationEntity(160U);
    msg.state = 84U;

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
    msg.setTimeStamp(0.8229178236);
    msg.setSource(10515U);
    msg.setSourceEntity(108U);
    msg.setDestination(19590U);
    msg.setDestinationEntity(186U);
    msg.state = 210U;

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
    msg.setTimeStamp(0.91990901317);
    msg.setSource(51381U);
    msg.setSourceEntity(116U);
    msg.setDestination(51832U);
    msg.setDestinationEntity(98U);
    msg.state = 248U;

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
    msg.setTimeStamp(0.187765567888);
    msg.setSource(1484U);
    msg.setSourceEntity(9U);
    msg.setDestination(24831U);
    msg.setDestinationEntity(132U);
    msg.state = 235U;

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
    msg.setTimeStamp(0.00290220074572);
    msg.setSource(38051U);
    msg.setSourceEntity(131U);
    msg.setDestination(18024U);
    msg.setDestinationEntity(164U);
    msg.req_id = 9949U;
    msg.destination.assign("GEQUOIPNCJDIEAKAWLVCURPCTEZTCQJKOENMHQWMJKGIUSHVONYAQKVUIFNNPTXRJINUVSIVXPSYRNLFFBSOEZHDZRMTQWCPDMAVECYSNOGICRZABWQKWBZITJHNWBHGXCVDSAXHUXMKBLPKCHIKJHPBLYXSBFSCDXEMBQTFEWYOQDVRFQFXAGKJEDYWTTAGBHZUGRDWLWYFLPMUJAXLUFGKIZVMLEPOOVUTGJGYTNYLMZJRSZFZOABPRH");
    msg.timeout = 0.661781504705;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 250U;
    tmp_msg_0.lon_gain = 0.804219650915;
    tmp_msg_0.lat_gain = 0.854775803459;
    tmp_msg_0.bond_thick = 0.246314471168;
    tmp_msg_0.lead_gain = 0.127224546254;
    tmp_msg_0.deconfl_gain = 0.62387452416;
    tmp_msg_0.accel_switch_gain = 0.161651264127;
    tmp_msg_0.safe_dist = 0.96832399555;
    tmp_msg_0.deconflict_offset = 0.490834077368;
    tmp_msg_0.accel_safe_margin = 0.904963256686;
    tmp_msg_0.accel_lim_x = 0.662146534711;
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
    msg.setTimeStamp(0.994214900345);
    msg.setSource(42561U);
    msg.setSourceEntity(63U);
    msg.setDestination(42464U);
    msg.setDestinationEntity(93U);
    msg.req_id = 62965U;
    msg.destination.assign("ELHCXVXWWVQIPWTEJCCBVTBAPRQXHNOFGBZLPJVXTJOZKYDKOLRVZSXSOPDIKNPNSOJKCSHAETQEWMRBGVUKPSDOPORSQQMNVVYBTYWNCJAGFLFMAMFRYHBCLQDITNGJFINIXDUUAOGZHXRAEZXYUEFWYYMJUCFUIEHDGNASCHDJUBTKAPKFRGNMRYKZMKRUIZYWGTEWNJXKCQDLZHF");
    msg.timeout = 0.43994772424;
    IMC::CompassCalibration tmp_msg_0;
    tmp_msg_0.timeout = 21202U;
    tmp_msg_0.lat = 0.763016783587;
    tmp_msg_0.lon = 0.298650765822;
    tmp_msg_0.z = 0.940504051532;
    tmp_msg_0.z_units = 27U;
    tmp_msg_0.pitch = 0.782026071501;
    tmp_msg_0.amplitude = 0.126144727451;
    tmp_msg_0.duration = 12785U;
    tmp_msg_0.speed = 0.349290197905;
    tmp_msg_0.speed_units = 63U;
    tmp_msg_0.radius = 0.908296625573;
    tmp_msg_0.direction = 30U;
    tmp_msg_0.custom.assign("WIEYRURAHUVSCORSGIYSMB");
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
    msg.setTimeStamp(0.45683157387);
    msg.setSource(53716U);
    msg.setSourceEntity(253U);
    msg.setDestination(13252U);
    msg.setDestinationEntity(215U);
    msg.req_id = 5486U;
    msg.destination.assign("TBENXEMJLXWPNUAUODKIJNKJFEBVHDZLJSMAFTBHAXVZDCPXAFBHZNDXHQOQPLKUUZIUAJHSFUCG");
    msg.timeout = 0.800660877661;
    IMC::PWM tmp_msg_0;
    tmp_msg_0.id = 72U;
    tmp_msg_0.period = 3198006758U;
    tmp_msg_0.duty_cycle = 208108834U;
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
    msg.setTimeStamp(0.65200546818);
    msg.setSource(57274U);
    msg.setSourceEntity(182U);
    msg.setDestination(2892U);
    msg.setDestinationEntity(216U);
    msg.req_id = 51029U;
    msg.status = 66U;
    msg.info.assign("SRKALOOCGJBSCICLUZYKWDCOFDJMHBFYYFXRIQFPYYMQYAXECOELTGYDZQITGKZGIIWEOTUZWRKOTWAGHGEMXBEIXTVHPQVCVQYZKWQXLSOPRQWXKEGJUMBOANBLJMMHKXWEGJTFJNMNYPJBQSUNNSUFHWFTOYHRANDVEQVZZZTVUPCLZJAFRBMDLUUVLPFFACDRMPSXJHBHPNSAGNDIMPOKKKRQVZWTIGDHEDSRCVLNHTBSRCLAXVDE");

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
    msg.setTimeStamp(0.74820278432);
    msg.setSource(16041U);
    msg.setSourceEntity(112U);
    msg.setDestination(23138U);
    msg.setDestinationEntity(109U);
    msg.req_id = 1628U;
    msg.status = 81U;
    msg.info.assign("CQVKQTOWQHKYFSXBJSMAOVSOBUHKXCNIZRRVYDWAZEOHPTQNMUIEEUURHQBQFJLYVNZPJASGVBUCYDVZJFCBSEQKVPPYTTTXNTGWJKZDDVDIIEYGNEDCCPCHVRBWMNOEWJFMPIOTJCWWXHHMXX");

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
    msg.setTimeStamp(0.544252431448);
    msg.setSource(12336U);
    msg.setSourceEntity(154U);
    msg.setDestination(12382U);
    msg.setDestinationEntity(120U);
    msg.req_id = 20610U;
    msg.status = 169U;
    msg.info.assign("NGNCGKHSPJEZDLLNAMZICPTRRAZQYXMJLHIUDVLCWKKFVFMGLOH");

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
    msg.setTimeStamp(0.468849960447);
    msg.setSource(28352U);
    msg.setSourceEntity(66U);
    msg.setDestination(45369U);
    msg.setDestinationEntity(99U);

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
    msg.setTimeStamp(0.716520888244);
    msg.setSource(2687U);
    msg.setSourceEntity(247U);
    msg.setDestination(11286U);
    msg.setDestinationEntity(103U);

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
    msg.setTimeStamp(0.691671290998);
    msg.setSource(25074U);
    msg.setSourceEntity(184U);
    msg.setDestination(10287U);
    msg.setDestinationEntity(183U);

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
    msg.setTimeStamp(0.71552467136);
    msg.setSource(44403U);
    msg.setSourceEntity(73U);
    msg.setDestination(40008U);
    msg.setDestinationEntity(101U);
    msg.plan_id.assign("JJLHOCIHLRNHCWTPOPURYIVIPSJYVNMMGKRIBOFRACDTWBXSEHCVKEFCEWLXANNUHDWEFMTBDCZNOCHTUZYFZGZFNOUNGTZWAEIQWJGQETADXKXYVSGMQALLLEBSVUIHUQAGQAPJBG");
    msg.description.assign("NCLWYGQHOEPKCMTROSYJUZBTTXUIKTFFVCNIIAWDXVMAXXLDQZKMRPJFONUYEYGBEAQANVCYUSDBHLLOULWCHQJHBGGKOASNSVRNSDQWATMHOGQGGVXYBUETRYFCJJIHZRRVPQKNELDTFWRZZCQWBFHP");
    msg.vnamespace.assign("YVIJGNZDZZOVMMCXSAQJZJTEJLMERDPPIHECZNXHAIEYQLCHFCYMBKOTJOPCDHRYUNORAQPXGVTEFRJXOPNDRBWXHUAKIPPGIALSEDSGIEHVFOFVFSBKMWSTTTJVAJLRMZVWXXWMZWGXYEDANQDCAGRKUUHVJBOEQWPNFMKKUGBCUUQBLTYPDCQDCONQLTAHOKRHWOTWUIIUYXFKFSLNYYPWEBYZMVFLLSQCXSLHA");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("UEEAQKOCUWSYMRUNERUCTDDTAVGAGFKCKYVXEQLZEKVPXOLEFPOQWZJLKBLIWCTEVFU");
    tmp_msg_0.value.assign("GYVIAVRKEEEQBMEMEICYTZVZPSCNBTFPOWUNHRHXGYWHQFOGVEGBRREVOJPFIGLJWLSPWYFAEOUJPJCKVTBNGDSSZCBQYLPKFKHTSMZYTG");
    tmp_msg_0.type = 195U;
    tmp_msg_0.access = 103U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("RPHVLITIIGDZFNFYSBHJFDTQICMBDAWIORKQYXUQAGSEBESRVAOYZY");
    IMC::PlanTransition tmp_msg_1;
    tmp_msg_1.source_man.assign("HURNDZIKTZMWOPHQBZNYRGRXCVCVPGVSTBABPCZTKIHUWULHKHXVAOYPGSLGHXLFDOXSDAKUEGYZXPVJKJWFWGINZBUGRTDYPJSJQBBFCJQSACCQMKRWKQSSCJWPTKOAEWKFTGYIOMEJCDVTGJAMQNHZTYHNULZCOZFFSE");
    tmp_msg_1.dest_man.assign("IGGHXHQLRNBMPOHWFNDXNLCBBVLVIZREFQYRGEXPQBUGT");
    tmp_msg_1.conditions.assign("PYIFHDGTNQXSMOJEGJXPGVFYTCWBYEWIIRVLDCEVPODYVGNOHSZIUMXEDAKB");
    IMC::TrexObservation tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.timeline.assign("JVRJYBJLVGYQ");
    tmp_tmp_msg_1_0.predicate.assign("PGIBEZOBSQJDXZWDFHCIWRQNFYBFVZRKCDKPXIOZGITSYFBGLBPHXAEJQSJRCMHMPMBFPSGRFWMUYHEWRYPLLVRQELPWOGCOAOZYHNLRKESZLQKNMZTXPMORJNKIATJ");
    tmp_tmp_msg_1_0.attributes.assign("CYRMUNVWBBBQUDMLVGWYXNUTKFEMTYTWDCJSERYRFTOAFCEKXMIGFDBYVWAQBPCANHWGSQHZUCGSFBYMZJPXVICTMFARHVTPOZRNDPDMTHZHNXMKZLJAFSJGEIIWTCWOTUHFBQKGDIAKVUZWXSLWQEQGKOVIQLQGVFDMPPSKOLAEZLD");
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
    msg.setTimeStamp(0.269572589162);
    msg.setSource(48551U);
    msg.setSourceEntity(179U);
    msg.setDestination(57229U);
    msg.setDestinationEntity(217U);
    msg.plan_id.assign("XOSZQXUNJFTOQGICWTKVDESWJM");
    msg.description.assign("ALMWDXNDWCXTEMQJHAORZKKMZJUQICLGWHJLIPISEHKVKNYOUTOPTRBEEMVIJNHYOAERQFIXZPHBCDQYBDJSGBKMMJACTGLBMXXTWQQWMUZYUHUJPSXRPVXVPQKSXLHLJARVA");
    msg.vnamespace.assign("PEKAZNZELOLX");
    msg.start_man_id.assign("KETRFNWMJDRDOYLCVDYYCJUAMKWLVSYPLINJAYIVTWXMTIEYVZOFSKCXWMNNDCVKWKXIHQYJKSWSWKXMXTIDZDNFUQIDGMDORLGQMURPEPNGJWVXHJOEPZCYXEMQRYKTFAUTWLJMHUBKCSBGHPVFPZEZJOHFLYAOVOPQHGHLGVFECPXNGOFCNASIAGBSTZJNPUTCTXOPNGHXEBJRAQOALFA");
    IMC::SoiState tmp_msg_0;
    tmp_msg_0.state = 185U;
    tmp_msg_0.plan_id = 56512U;
    tmp_msg_0.wpt_id = 84U;
    tmp_msg_0.settings_chk = 10066U;
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
    msg.setTimeStamp(0.299048140151);
    msg.setSource(53337U);
    msg.setSourceEntity(218U);
    msg.setDestination(63500U);
    msg.setDestinationEntity(61U);
    msg.plan_id.assign("JFBROOAKKVITFMGBVRKMBUCNTZUDUERVPGHHGBJLZSMLNQYBFJVVDAUJAIZMCEZBSDJIYUZFITHLIMJQQXFFIMUSCRAXXWELJSFLPNYGSXGIAFNXHEEXYQNFEOHBHNZWIEDGTNVQWYFYEHTTWXOWPTYWPPACOAOPRPKSCHDDKNGQIDZNMJHTBYQADTKMKXWCQATSXRWRGZNOOCVWKMOJZVSKC");
    msg.description.assign("DOUPLGMPFPNLSKSIZRCMQVJFAZUABHFPSQGLALBZNCOEGWOCDUKDLHECKHBVSVONEETZNYZRMRTKIHVQWDMUMBAPFTINUWDYKIFKZEMRROBYNJGONMTNQUTEFUYISNWSOXIBXTHAQOMLQPGJBJDIARLXRHIFCHMUJVCAFJYYZIHBWYRCHXKELXDKTWOMPDYGTDGLVREFQNUPCWQAJXGBSLWEBJKJO");
    msg.vnamespace.assign("MUXHTBVWHIJPZOHWYTZTQVRKHEDQVLZWZOEGOP");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("OBKAPPXCZDFNIFSPYGHVTOBQUMLZZBDOFGRXKXFZTLYSWJIINMTTAVIQVRDJSULKPWUVQIYYRSKCGQENUZXOHDVLGPESYIHHCUTBVUTKPCCHMNCRBCACXSRSFGOXPTGUWTKDIHJLMJWCENKAMMNFWNLYZALNFEXLHHMYGVDPIMZGIFOLSWDAAJBBYIDRYNOJJHQQAOMREFQZYNZV");
    tmp_msg_0.value.assign("JWARAMLXZXTPXTQO");
    tmp_msg_0.type = 203U;
    tmp_msg_0.access = 141U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("NWJNNYKHYWWPDIZSNBJPEQMGXXFKAKSSBRQTHAQFSHFELVGOGCEFOURVXYWIYDXITARMKGADOVCFZCIHTJPVIZNOVBFEXDEWOMFOCQWHKHHZSCDUBJMSVSZHZPZSJKUOYETIUTKLFFGAMVGBXPNCAIPYVDPKJMRBEUQZAKXUTEYYRTJZFDRBMNVNNRUAWMJIXAHAJBWLOUVLEHQMZPUYWQTDGEGXIOOP");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("NMUSLQILGEXRTKJDEWQHXUCMUCOIPADRHWSBYCDILUNAABLQGDVXJHFPVHLTJHGMHVFDIKQWQOAQEPVZAHZSENEHYNCDTZBZQBQKZBSUOXKFFUCNRDWPKBROAKRIKRPZLSPRYPCLCJXSGB");
    IMC::Teleoperation tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.custom.assign("GJKMBGQTDVYKHACDKRZVXIWOJZUOJYMGRELPSXDQEYWPRKD");
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    IMC::GetWorldCoordinates tmp_tmp_msg_1_1;
    tmp_tmp_msg_1_1.tracking = 244U;
    tmp_tmp_msg_1_1.lat = 0.549925439626;
    tmp_tmp_msg_1_1.lon = 0.0603334839361;
    tmp_tmp_msg_1_1.x = 0.637014826949;
    tmp_tmp_msg_1_1.y = 0.478066087183;
    tmp_tmp_msg_1_1.z = 0.30495450783;
    tmp_msg_1.start_actions.push_back(tmp_tmp_msg_1_1);
    msg.maneuvers.push_back(tmp_msg_1);

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
    msg.setTimeStamp(0.195892370523);
    msg.setSource(34312U);
    msg.setSourceEntity(133U);
    msg.setDestination(40819U);
    msg.setDestinationEntity(254U);
    msg.maneuver_id.assign("ZFHSQFCOVMVKRHULRXJZJBMAHELGSAPNODP");
    IMC::Magnetometer tmp_msg_0;
    tmp_msg_0.timeout = 42299U;
    tmp_msg_0.lat = 0.836658560475;
    tmp_msg_0.lon = 0.20898809508;
    tmp_msg_0.z = 0.795495912309;
    tmp_msg_0.z_units = 63U;
    tmp_msg_0.speed = 0.808257907649;
    tmp_msg_0.speed_units = 243U;
    tmp_msg_0.bearing = 0.49138236179;
    tmp_msg_0.width = 0.868746463398;
    tmp_msg_0.direction = 182U;
    tmp_msg_0.custom.assign("DSMUYJEAEUCGHDTYRRCEUGAFX");
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
    msg.setTimeStamp(0.994310040559);
    msg.setSource(418U);
    msg.setSourceEntity(106U);
    msg.setDestination(45355U);
    msg.setDestinationEntity(31U);
    msg.maneuver_id.assign("MFJRMSSOFWXMVRWBQEVUKEYBHAFZELQZNGUTNWKHYJXCBTQPKZXUDUXBUJWLTOCPDOOQLNZQTIHRDIYLVGMMEOBCUTRJOCPIGHLCKTAHWVDEQBFDMONIDCAHXUSSIXJKIGGRUBHLGEYZNCCSJSHFFVYAOFHMAAEDBLPQYLNQAPIDMLVYDENVZVACGFOSTKFHY");
    IMC::Goto tmp_msg_0;
    tmp_msg_0.timeout = 39695U;
    tmp_msg_0.lat = 0.741623263346;
    tmp_msg_0.lon = 0.893627821239;
    tmp_msg_0.z = 0.789346139806;
    tmp_msg_0.z_units = 21U;
    tmp_msg_0.speed = 0.239608136639;
    tmp_msg_0.speed_units = 198U;
    tmp_msg_0.roll = 0.127351935244;
    tmp_msg_0.pitch = 0.80049690654;
    tmp_msg_0.yaw = 0.91338756027;
    tmp_msg_0.custom.assign("YNZSEORAMYYBTPGXVVXXQBWUCWXJHCHNJJEUMJTNKTCXDIAKGLFDHNOIPHSIJTQUBWZLRVFRQADBHTMKJZYDPQKYIOIHYUGDVGTRLCHLE");
    msg.data.set(tmp_msg_0);
    IMC::GroundVelocity tmp_msg_1;
    tmp_msg_1.validity = 138U;
    tmp_msg_1.x = 0.533862906671;
    tmp_msg_1.y = 0.932886521845;
    tmp_msg_1.z = 0.408007555306;
    msg.start_actions.push_back(tmp_msg_1);
    IMC::PWM tmp_msg_2;
    tmp_msg_2.id = 196U;
    tmp_msg_2.period = 1252807298U;
    tmp_msg_2.duty_cycle = 3087542474U;
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
    msg.setTimeStamp(0.587833136748);
    msg.setSource(58856U);
    msg.setSourceEntity(77U);
    msg.setDestination(35579U);
    msg.setDestinationEntity(84U);
    msg.maneuver_id.assign("KBLSXQALQJVSCARRDYSWQDZHLFWAKTAPGRJMZTXZOWVIPAVJDG");
    IMC::Launch tmp_msg_0;
    tmp_msg_0.timeout = 49863U;
    tmp_msg_0.lat = 0.0314782280549;
    tmp_msg_0.lon = 0.863457466058;
    tmp_msg_0.z = 0.906614264381;
    tmp_msg_0.z_units = 73U;
    tmp_msg_0.speed = 0.214436907993;
    tmp_msg_0.speed_units = 243U;
    tmp_msg_0.custom.assign("GKFJLJBMUNHYXWMJUNDPGLKAJILRXQCXTUQBVIIPMECCNIXVGUSBLZYNFARZCJWMQMVVLOJWDWPEFACNARZGTMWTJINHIRAQZGALKVAPJYADLDEYFHUKTXSZKWIQYOPRRZYCQNAHUDBNCYPPREXXSURBJHSPXCLDKIFFBOQGGHEBSUAETSXVWCRZOVOBOLHYSDMKMEVSQDXCKUUTOHGBPQIOKTNZS");
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
    msg.setTimeStamp(0.518863181852);
    msg.setSource(2730U);
    msg.setSourceEntity(132U);
    msg.setDestination(8596U);
    msg.setDestinationEntity(214U);
    msg.source_man.assign("FNQSZVIMAEEXEZLUDGTHQQLSJMRTGGWYZWTWIPTSMGMNWHITCAPZKOAJKRTDLVEPECRDXOBJZW");
    msg.dest_man.assign("NAGTLMWBBS");
    msg.conditions.assign("HUTWILMKRHXMXTSHWSZRHKKWGAIIMLNLAFOKNYKFPKLJLPYZQNHMAFPEDCGBUJBTRDRXGJJSIZTVDBPSLYRPXTEYPHXQRHBUOUODOJIYZMGCYGIQPMMUQSCOEEOTTLUKYREVCGINJPQLBOXKWIXRCZVQGGOEGLWVEIDNBZFXVTWWXZNSBUDCRVPFAAANWNHVDSSAEWOKLAG");
    IMC::EntityParameters tmp_msg_0;
    tmp_msg_0.name.assign("TMQPRPWYNLZJUOCXTIHTZJDVJMBQQOLZXPNWBINMBYGAXYWVMNEADBKCEXKMMLGIWIFCYNFVVTYTSUKBGXISWGLQTVLAVBGILMEZQBUVWBORDCEFVHNJDARTDEWSGUZCKXMCQ");
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
    msg.setTimeStamp(0.774299201748);
    msg.setSource(46330U);
    msg.setSourceEntity(247U);
    msg.setDestination(25801U);
    msg.setDestinationEntity(224U);
    msg.source_man.assign("BGIDOGCKXEIXKGPMFBFVEOEYUJDEWOOLHWBNDCCLYBAIBZAUFXYHTNQPEDTDXROAVSJZXRUZVISULTTMXPAJLNQCQRZCHCAGWGYFQRVAXVJCPIVVDQVWZYSGDSQLEJCBLDSEPSEYKIROGTIARXHSSFDKOYYVYMLXMJWUBTFJGQMJBNKRSGMIWVNOUIWJPLLAMFMHNKWUROAENBRDTTH");
    msg.dest_man.assign("ZJSULDOJFTMPJTMGVZCBEWISIWWOEXGPTCBEKBRXLBHBSHHPWUKSGEEIFVGTPNRWITKNUGWKQJRRDEADXSDCYHEOXMOYAAUOLSXPDHLNQELAWFXZYNTOAZSHECOXOVOFVMMANVGDLWYLZDIAJHXNVKPJP");
    msg.conditions.assign("REYXUPFWQZTWHJGIDMQSKCXBHAXJUEDZCCUPTFCYERECQMSQEYSTKXQAXHZFNIVVNHWIQAYZKNCHFXZGEUMCIHLDRBODQOAXORVTUKDIIJQNGHGJNFOPOPBVJLZMEZJVYIYPGFOGPURNMUFWOXZHNELFIEAPQLWVKRBBAQBMSJKDR");

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
    msg.setTimeStamp(0.639793335019);
    msg.setSource(46986U);
    msg.setSourceEntity(147U);
    msg.setDestination(21983U);
    msg.setDestinationEntity(246U);
    msg.source_man.assign("TUSTNRGDOKIVTCWQ");
    msg.dest_man.assign("WRAKOOQWMARPASSSMBZABEHBCPVYORGFJLQESKGNLHMEXJTWOFIXDPLIJGTEIMECSWEIYDQQAFXILAEPMQKHJNCCWTLFNFIXKGUZQQDBNBJGCLTKZFUXEUSFKORMSXDCVHDPULZZSPFPHBQLANHKGVDXBDWITNROHAYDKTXFNUVZYDPWMOCGWUYMULJJVIVPDYLWIKZYBHASCMUVHPJVNVCJITRAOGHQX");
    msg.conditions.assign("APQCEGLMBMJJCMIYCAONNTFCGVGSLBPFPFHEPKPOBFQMGE");

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
    msg.setTimeStamp(0.652712059337);
    msg.setSource(11256U);
    msg.setSourceEntity(166U);
    msg.setDestination(2867U);
    msg.setDestinationEntity(78U);
    msg.command = 233U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("HKPKJSQSJFDLNPONFLOGVIEIDPQCOXQQMMGDDIRGEXWLLRTDRUKWJIHSPPRETLDJTPGZWNSHWUDXCFWHCESMIIRFRVHOYVUUITNIFNLGMHAHAHEZMOWCULBVXQEOUWCBWBOJJXQQMVASVTBAAJF");
    tmp_msg_0.description.assign("RKJCPTVNINSAECICWXFEGSIDHEGQSFZBDATHFQNHRPTZNZYMKAKEDYAGLTBOUYFMZQWVVHWXKAVKWCMTLRTCVFPLGJJMMONUWVOKKEGFLLDQZMIJGQPJUSLLPKUAP");
    tmp_msg_0.vnamespace.assign("EQAJAPGQIVRTNCDQEHCEBRMOKPCUHNSZYNVPNSUABFOTERHQHWADLAYCSGGHWVRLUOPSDBLDVRQWKMJGZDFZIFULZYUWTLBNJWLDAMSA");
    tmp_msg_0.start_man_id.assign("UIJDBAFEOHOHCINBTMRLRVCFGTWXPVAEIKWLMKLECSMZQNTCKIGKHZMLWCOYHXGBWEEYFNHGWSVVKGTFAJPNBPJREZRNLXSMIPUURXYBXKBJCKDQAFLDVHFVTYLIXAQVINDWKWTZPCOFQBBJRSDESZZXZMPOSIGAMZJQMYRNCZOHHBTJELG");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("ULXGWCHKITQHHAIWDGXANQVLTJNSOCZQLCVBXYY");
    IMC::LowLevelControl tmp_tmp_tmp_msg_0_0_0;
    IMC::DesiredHeading tmp_tmp_tmp_tmp_msg_0_0_0_0;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.value = 0.00748737704563;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.off = 0.974016684369;
    tmp_tmp_tmp_msg_0_0_0.control.set(tmp_tmp_tmp_tmp_msg_0_0_0_0);
    tmp_tmp_tmp_msg_0_0_0.duration = 34888U;
    tmp_tmp_tmp_msg_0_0_0.custom.assign("VHYKAOWOHCSVCHGYXJHAYHSTKHQELNWINLXNHJJJBAPZYEBUQWFSJIFSRQMORWPCRPVYUXKINTRPWXXIJRXOWBFZEJIXTNZCVSVNKORUEFGWOEIGLCMTBSYEPUIGCXDLKTVTYDJSDKYMFDZQBKGGXYSZFASPMSLLDFMAVQKHBGP");
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    IMC::PlanStatistics tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.plan_id.assign("DWRYBUGNICUEFYXENROAVCCNFKALMYXNGTBGHIMVCOLCZVBQPABIDPLDJUFGTZFNWJOZZSENLNCJFJIJOSUGOLZJPRGNUVLOYLWIQPPTHGERKVQXC");
    tmp_tmp_tmp_msg_0_0_1.type = 57U;
    tmp_tmp_tmp_msg_0_0_1.properties = 158U;
    tmp_tmp_tmp_msg_0_0_1.durations.assign("BLBZIIUPLPDSKYTEBTQTXGPFTPBLFUFNEJZXTCRGIZETMYNWFZUVARMZWCOMHKQHTWMSNZGIVOCFPUFYHGVHIDZVERBCSWONYGSAFGZKPNCBCTDIAMUGEEFRVRSXMUOJVYWJLWVKQJMQLJQUIIHUAXBTJBR");
    tmp_tmp_tmp_msg_0_0_1.distances.assign("WADEBQSFOJTPIKWCUNQWNUATFFZFKBEHODHAKPPMXJBHRXSVXBZEGRGWZPQZHSGJIHOYFRDJSESJMOMJX");
    tmp_tmp_tmp_msg_0_0_1.actions.assign("JLGOPXATTKITDEHIGJRTQKQQBCNVUSSJKLCBXRACTIIEYJDJDNCEHIMLHZLIYNFVDFYNXRMJRBQOYZLFQKKTEXRAHQOSOMQOYMVYUDUE");
    tmp_tmp_tmp_msg_0_0_1.fuel.assign("HHONGSWHGJHXCPGNNUMBZZEBOLVQWPAXROAQQEOVOWEIHGCVHTZDCPKTYJEERAKNWUPPPSIEIFPKMVGOYFNRRAJLYDOYAFRWXDLVJPLNBYBFKKLFSIADBUILLPRCQTAZQMKATSXDTWHRVBSYIZKJTOJXIGQJXNGCIZNLBQYQGUKXLKYMUCZUDLFGHUFJQQZI");
    tmp_tmp_msg_0_0.start_actions.push_back(tmp_tmp_tmp_msg_0_0_1);
    IMC::LcdControl tmp_tmp_tmp_msg_0_0_2;
    tmp_tmp_tmp_msg_0_0_2.op = 31U;
    tmp_tmp_tmp_msg_0_0_2.text.assign("XTCFMYSWWOSEEFQPGHVXZQDYUWYNITCFZZJFTCBRBRZQFDSNUOMHQBIXHXUQZXSSGAUTCTDODWDQOJKALGJSAKBQGGWKMRDFPXECPTEPEINVYVYLYPMDIRHACCVEAKBYIOHFWXPLCADMJGSOIALWHBJKZVGD");
    tmp_tmp_msg_0_0.end_actions.push_back(tmp_tmp_tmp_msg_0_0_2);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("PUABOGUKAKMRZKYQQTYEBNPSZBUKVDCODFBISFCRACMHLCJZYLGVZNWBHTS");
    tmp_tmp_msg_0_1.dest_man.assign("YAQPVSDKMLBYLLRHUGEBLOZQZNWZJOVQNQDAUGJAMNTGTWMKJIXTHFPCIDPCRSSOMDXUEUUBMVOLBZMFWVSILQWCNYANTZPXTURAGUXDESQHESFHJMDXISHSYBPYYUVNHXGIYRFRVGWHWMILJKRYNODERTI");
    tmp_tmp_msg_0_1.conditions.assign("IBSEXRNSIBGWQAJTPYJMOVCOFYCRIHGJXPQUGHCBWLSQOFRMAJWWRFSNGJDXJPIGLHHHAPHPOJERWSFFIFFMGOGGWTDVFFACZLDBEPBSOXVOKYTBNQKOHYKZLMLGBZUSETMTKRPJLVUCCQHNPKEWVCUQWKDXMNZNMADUOBGSVYDKHZIQNDDNUATZDAYVXTXLVQLESQAK");
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
    msg.setTimeStamp(0.408767485887);
    msg.setSource(7106U);
    msg.setSourceEntity(81U);
    msg.setDestination(29652U);
    msg.setDestinationEntity(167U);
    msg.command = 154U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("ZOMSDMQHBCEILCAUJMRJIHUUVUERKABJLXTKJOFIQLNEGTUKHWPOTJPNFJIETYXSNFXSCZDVIDYUUHXJMLMFETLNABB");
    tmp_msg_0.description.assign("SMVZPBTJHYQPRVHVHNEAWLJEDZYSQRLYGPDDDZWZIQXZNBJVCKKDIOXXAOLKTHUXGIITBUOHJABLNKEUSPSAOWLWPJEMWIVHRQUIARFYRUECOAFPRMJFFZDOBCENNGGFWEVTHZTRYEJWQBZSZIXQDTMARRJAGHSYBDNSWCWQXQJOXYLMKAWMQFNHRGCUDYXFZKCXY");
    tmp_msg_0.vnamespace.assign("MXBUJLKMXHD");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("UXYXXSEUMMAIKTHDNSPZHQBLUIVEAAQKYRAIDSDVCLMWZPQJBMZHKYGHEKWPLRSOAUZMOCQSFYMTQOQQTDGHCCGMYOXVBPJHE");
    tmp_tmp_msg_0_0.value.assign("VQVMIBHSVVYPHMRFEHHZZXRARUPNGEVSKGXZ");
    tmp_tmp_msg_0_0.type = 163U;
    tmp_tmp_msg_0_0.access = 127U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("YSGQXMRWCJCOLEAOYLEJNHAFJIKEWEFZNDZAIOOBJRVQIYPGMFWWUCGSLVTGBLAJBBVTIAAPBHKBXJFXCDIITRFMNEHDXEDUSWZDOOXGOEORYVQAXBPUCPURNJSBLSMXIKCMVHXCTEFABGRQSSOTPPNKZFSUHZTFPIHTJYVNAQYVRCWNDATMYMDQCMLZH");
    IMC::DesiredSpeed tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.591836605791;
    tmp_tmp_msg_0_1.speed_units = 22U;
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
    msg.setTimeStamp(0.403689976166);
    msg.setSource(16346U);
    msg.setSourceEntity(121U);
    msg.setDestination(17880U);
    msg.setDestinationEntity(163U);
    msg.command = 195U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("EFNEZGBHUJTRBBCVTUMFJWVQNQJINVFPDTBOISOKHYAZUJILODLYKAYNIGYFXAYQGPEHTXSDJMOQISAEEURNRLMRTJGMZKFGFYZNOKRBDLIDWZQHBPFWWIWTPVDTCTHFNMKACHIVRZYBVYXVXXMRQLLMAUPYITRPBVEGXXCHHCVOKUBSWCJAQNQQXDLJASV");
    tmp_msg_0.description.assign("FZGGSIWCEJBASXKMHWOURRUTXMHKJOBQZWVNJIUHUNRVOKCICGASMPNLPFYWQTJSSZUNFIRQCRXMRDAOFRXWMSBLWIPMLVZEJEVOVVQGBBEL");
    tmp_msg_0.vnamespace.assign("WFKUVQIPDDQOJXTLXHSMOMSIYUXRVQOMNQKYRYNEMEIDWSJBDGTTSISWLBJNOIBPWLJTPZIJPJHQOBHUIGAPKSKVMVFNBDHGYKCSNPRUWQFHZXDXACDWNUZLGARCKKLYPFRIZEFAXBEGGWSRLOQUEYIVRNEIMLMZCUOFLRCUX");
    tmp_msg_0.start_man_id.assign("AMPSYNZNRCGIUIIXSQGHWWYWYZCOVHUFTHGACUOTEOUTZUQTVIDAXJQRMVSTXKBF");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("ALZQRGQXLVTJTGLSTBBDEDXUWTIQIOKDHDGOOGFYJSUBSYMMTOPJCZXJKEXUCXZPJIRQXJACLITMUPEBBMOPNQPMHPMDCRLBUPXVKSAFIWEGLLDKVSSZSVQYUZQXHUHVLFDXCCLCSURCZRMWERADGKHUCZAFTGBAPIOKEPDNZZGVBHPYVORANJQONFKWEITHVNYWNJYHMRDKYLSNIHWOYKEBXOWYFWJJ");
    IMC::Teleoperation tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.custom.assign("IZWFHIEMATJWLVYFPAAOLPYDROGCBYDEEPABZUOCJAKMBLKBOYAZXJDJBEXNKHMYXRSGLBEXJYVQQXJGVKSOUALYNCG");
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    IMC::DesiredThrottle tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.value = 0.412879328486;
    tmp_tmp_msg_0_0.start_actions.push_back(tmp_tmp_tmp_msg_0_0_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("TJPNJBQYKIRTBFWABRRIQFVGFHMLJMPBHNMPQKUSEACZJGIBHBVWFQXGACJFFILGHXSPKSUTVVFDNKBCKFATNAGNMHLXEAOTDUVRULTJCVSWWDOHUDLMOPQYIGQALBYDNCICOZHHEUOHWJJYKQLAWMGEZVPRKOJHRPMPUOTCDICSXSYIQXLXKZXTJELEVRWXZOTZQICRGGYRTOWUEA");
    tmp_tmp_msg_0_1.dest_man.assign("RZIKDUPVSBGCZNCIYWMZLWDEJQRVIXGSLKBZSATTLIYXDAEEKFVXRQWBJJJLZHDEOAOWEFQBVHLPWNMYBVILCSPQSDGTR");
    tmp_tmp_msg_0_1.conditions.assign("PQIHZZDJTERNUFMXYPMBVBLMYOXZLQFQMCEKYCSRUBERBFQNHWVWKLZJIKHNXNJURLNZCKIOZHJSBFARLCCXZRFQMXAMFSYSPTGLXOLDVVNHWTYUGWJHJDYVHJNLJKVLKYAYIWGMAVXMSDYUGUUTMDWRADOPRTIWBDCRGIQQPTSYOAPEHBLGFQNEPMKOFSHIEXQVEGTXHPXCSQSK");
    IMC::AirSaturation tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.value = 0.675966108574;
    tmp_tmp_msg_0_1.actions.push_back(tmp_tmp_tmp_msg_0_1_0);
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_1);
    IMC::Sample tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.timeout = 63255U;
    tmp_tmp_msg_0_2.lat = 0.527182574793;
    tmp_tmp_msg_0_2.lon = 0.787262024223;
    tmp_tmp_msg_0_2.z = 0.230433900958;
    tmp_tmp_msg_0_2.z_units = 22U;
    tmp_tmp_msg_0_2.speed = 0.329740470637;
    tmp_tmp_msg_0_2.speed_units = 118U;
    tmp_tmp_msg_0_2.syringe0 = 208U;
    tmp_tmp_msg_0_2.syringe1 = 114U;
    tmp_tmp_msg_0_2.syringe2 = 140U;
    tmp_tmp_msg_0_2.custom.assign("EYQAWYANLCXXOALKZMDPXLCHJRIFXRUJEUIZLMRUPHTEWGXCTECSZVKZIBVOTXQUFTUZYRVPRAGPVESWTYMWZXQESJHNDGQCBWBNQSAVMKONFLJAWKODNUPQEIZOHJVFVGAMLFHIUXLDQDLQFOMDW");
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_2);
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
    msg.setTimeStamp(0.473998743467);
    msg.setSource(47634U);
    msg.setSourceEntity(33U);
    msg.setDestination(52433U);
    msg.setDestinationEntity(108U);
    msg.state = 97U;
    msg.plan_id.assign("CKZUSYPBOZLYHDJWZUAPWKJDOTGGYTLAAFQSEMQISVIXFKBMBUUVRMLORHISNDXUQHDGELFCYLSPTREHIUKNEOOHVPDXZDULNFYPVEGPEESEACASXHRYQBOVDCAFNKQJDNTZXNQXOHICZVKZQPIFMTGXJWJOSPURRJKBWGLSRIGHAFVMFBNTXWVCJSAWCYQJIBTFBGLMLXNZZOREKTPLBYCKRQKGYVNGWMTYD");
    msg.comm_level = 203U;

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
    msg.setTimeStamp(0.672412512879);
    msg.setSource(41144U);
    msg.setSourceEntity(171U);
    msg.setDestination(20346U);
    msg.setDestinationEntity(39U);
    msg.state = 20U;
    msg.plan_id.assign("TMTBVEXXQHIAPXNFPNKWFNJKFKRNNELJOIVDJWIYMLEWHUOTSRSIGWVIARNFLGDSSCLMOMCUTGAEQKQZOGGVTSQYMIMTTUWECFEHRUTYMPFXHPGDDDCUKVEXJWLBJBPSMJOIOZYCMOAVKQBPXPVDZSPLBWYXYHIRDXZFRNJNZJGPKHRGFDVUEHLYSFDBCBFKAMBQKCCVKBRUUQEEA");
    msg.comm_level = 102U;

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
    msg.setTimeStamp(0.419568414646);
    msg.setSource(17874U);
    msg.setSourceEntity(221U);
    msg.setDestination(22499U);
    msg.setDestinationEntity(175U);
    msg.state = 189U;
    msg.plan_id.assign("KJVTJRMQIOCZLVZZUTPNHQRXNSBCTGIGTQSMSFPLMBCHOPNUXASJJXRSDWOJYRCAEHVWFHVDZUMFETLHUKVYTMBQNAGPGPVHLLIZDLQZLQEGWYCEXKZDUBNVECYXAOYDVKQJPJFEHXTZAGSYIZKHFLRFQR");
    msg.comm_level = 6U;

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
    msg.setTimeStamp(0.0550150982361);
    msg.setSource(50198U);
    msg.setSourceEntity(156U);
    msg.setDestination(64044U);
    msg.setDestinationEntity(44U);
    msg.type = 32U;
    msg.op = 37U;
    msg.request_id = 65208U;
    msg.plan_id.assign("EXNKELMHZFWDZNGTNRLSDSVROFQFXHTYJFPWNFLCMYSYXJIUZORCURAQMRJYHPZVLYWHEVZFIXMRIGGRJNPDHWVCJCMAHYKGOVPEHSTHBNQCOVTXLWSAWZEKDMM");
    IMC::RelativeHumidity tmp_msg_0;
    tmp_msg_0.value = 0.552981678195;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("IILEKGWQLUOVUKCAHGQEQHEKIBZMQTDYAPHNGBOPRVNMAGWFDMYTXPRHIWOXDINLPUSEIUDSQFDBRUTEAOMVJVXYFDDKXJMLJCOBXNTHGMFVQWIRPAVMLFMKXDOOJPSZPLGLPVHARTFQXWCQTNFKUYSSJKAXWCJUNYEBVYDITJBVXWHCLANIEKOJUECTKXR");

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
    msg.setTimeStamp(0.291207722311);
    msg.setSource(20594U);
    msg.setSourceEntity(178U);
    msg.setDestination(24175U);
    msg.setDestinationEntity(108U);
    msg.type = 136U;
    msg.op = 242U;
    msg.request_id = 6293U;
    msg.plan_id.assign("OAFTSEBEDEZXWCDRUMHEYHMHLRJQZCFSDLWQTUMRPZSZOCICBHETWVMVMAXXOTNNUHIICDELSKFNNIQDOJICUXFKWUXUVLHAIUGFGJMEDGBWRDTXXTPPVCXEQVTWMPIVKRRSXKOBLHBHUZTJLVO");
    IMC::TotalMagIntensity tmp_msg_0;
    tmp_msg_0.value = 0.46153347559;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("TCVEPQFNCWWRPTZXHTOIMMTPNKCUQCPOJRJREVXBKKRDVQWIQLESPUIPTCYNKHSXMDUOLOCRDFDAYIZTCXPVNKDEFIZERGWWJDYNYFGJGGZNMFHNXYDWLGYFLCHAIBXIMBBHWQTLMNWJRDLTHAVLUSAMAULZLXFYVTOFATHYBUBHJUGPPKOZFCGKLWIMEGIRHZWQYUOQASVERBEZQDJASKGNJUVVSOMSAQIYGXBEJNBEZS");

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
    msg.setTimeStamp(0.886800743085);
    msg.setSource(42781U);
    msg.setSourceEntity(202U);
    msg.setDestination(13207U);
    msg.setDestinationEntity(122U);
    msg.type = 235U;
    msg.op = 230U;
    msg.request_id = 58756U;
    msg.plan_id.assign("ZYUYTQFHHIKCVLNMTPYHVSBRUFVJUGIWZLQUBFMQGQTSMWGIMODXTSFTYDEGRWXQZXXLORZUKNJABCSITWZJEQNKXSURPUQGJJAAIRTNFPCCHKALSXRBGGMYVOGOMZWVKUNYHXMRQPDEFLGZUVMDQFIOFDLMINTOLPIEHCOEZVVVAWDWYHBZRPJDCROSXW");
    IMC::ServoPosition tmp_msg_0;
    tmp_msg_0.id = 125U;
    tmp_msg_0.value = 0.238796842216;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("YVEJPCSMGGEUJVTOPXVNMYSOSTDODRWUGNGZSUMEFXANAFRJLJPMGSQOTHYXCJBBPPOZPIZTWSEETHLIQYYRBAWALEUWSZKDNHVQQCPECMOYRKVTVLJCHDKCXCPIKZIQNCCRKIBHTFHGJRFUBBLHUALWEDBAQOFRBVD");

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
    msg.setTimeStamp(0.161557673023);
    msg.setSource(64426U);
    msg.setSourceEntity(138U);
    msg.setDestination(60065U);
    msg.setDestinationEntity(213U);
    msg.plan_count = 21336U;
    msg.plan_size = 1044760209U;
    msg.change_time = 0.311013107132;
    msg.change_sid = 36676U;
    msg.change_sname.assign("RMLBQRATCSWAYCYOKRBNGGRAPUJVZBNTCSAFBAWECBFZUVIBCZOGGFEJLZWRSJKCUMGMPGIAMMI");
    const char tmp_msg_0[] = {-85, 80, -16, -52, -123, -96, 101, 51, 0, 117, 62, 20, 0, 54, 58, 120, 110, 80, -101, -44, 43, -79, -1, -125, 26, 44, -6, 50, 59, -119, -112, -77, -79, 35, 103, 65, 87, -102, 104, -57, 99, -76, 109, -114, 83, 75, -123, 3, 119, -33, 23, -36, 111, -57, 46, 72, -86, -52, 51, -117, 58, -127, -82, 52, 95, 50, 87, 56, 63, -54, 117, -122, -29, -119, 14, 65, -40, 58, -68, 56, -126, -53, -65, -63, -70, 84, -84, -62, 102, 94, 45, -117, -36, 38, -91, 77, 35, 0, 21, -41, -21, -119, -67, -116, -8, -122, 100, -81, 85, -40, -24, -3, -51, -41, 85, 29, 35, -99, 7, 111, -19, 35, 62, -122, -117, -9, 76, -94, 98, -53, -28, -23, -60, -54, 19, -126, 15, 72, -31, 85, 108, -126, -37, 100, 72, 4, -109, 82, 28, -114, 80, -125, 1, 79, -56, 0, 7, 70, 34, -58, 111, 95, 63, 88, -57, 28, -123, 4, 61, 10, 34, -22, -78, -49, 14, 126, 9, -3, 89, -30, -113, 74, -85, -82, 40, 123, 101, -68, 115, 81, 37, 100, 3, -119, 33, 3, 2, -105, -26, 110, -40, -116, 113, 50, 30, -104, 123, -103, 78, 72, -66, -96, -111, -56, -52, 107, -44, 98, 78, -115, 9, -42, 104};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("HVGRZYYWYTNZGUHKBXJRYEPKUUIBZFLJBQEWAPCZRNCLVMJSOPWGXANQKTXDWWKJQVNFCBHJLOSGXQXVLUOHBQITCSSQEEGNIWVUIFUHJYPMGFOPLYXURFFSDPAFKKTDYADCVGDEKDJGBSOHAZNMAATMOTZCTKSZHAQIEJFCLQONEJGW");
    tmp_msg_1.plan_size = 1959U;
    tmp_msg_1.change_time = 0.470252740088;
    tmp_msg_1.change_sid = 35652U;
    tmp_msg_1.change_sname.assign("BEBCNYMGKBSRJMRHLVVZNKYMLHXWDXPULOSLXKVCDAOOTOQFPRNCGMGNEJQCPMHTUGYWRYSJZGWTFFTICDWCQVUGHKNRRYMVAWKHECFDXXKZRSEUBZQXXBNYCQYGCIEAIEPJWDIFYUAJFBITZEPFBMXDRDXIVJILALAFGKZTGZOVXBPSHR");
    const char tmp_tmp_msg_1_0[] = {-31, 15, 58, -40, -89, 48, -95, -19, -37, 98, 102, 53, -116, 114, -6, -109, 9, 122, 76, -46, 74, -35, -80, 85, -9, 101, -53, 100, 65, -22, 50, -75, -20, -3, -64, 70, 58, 16, -39, 44, 118, 89, -69, -73, 106, -58, 96, 38, 102, -51, 108, 100, -67, 41, 69, 94, -112, 14, -122, 18, 101, 56, 91, 74, -30, 107, -93, -41, 3, 68, -36, -91, 122, -56, -114, 74, 96, 82, -48, 33, 123, 10, 8, 15, 102, 75, -102, 58, 85, -26, -67, -104, -105, -118, -88, -119, 86, 39, -11, -51, 49, 53, -102, -29, -49, -9, -120, -80, -37, -68, -73, 9, 41, 87, -96, -46, 37, 96, -28, 125, -26, 97, -42, 51, 79};
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
    msg.setTimeStamp(0.601862800421);
    msg.setSource(43249U);
    msg.setSourceEntity(98U);
    msg.setDestination(36254U);
    msg.setDestinationEntity(26U);
    msg.plan_count = 15532U;
    msg.plan_size = 192488638U;
    msg.change_time = 0.863834129983;
    msg.change_sid = 25409U;
    msg.change_sname.assign("NZIBZQYOHWMNHFGJOHUGNRLGWMVPIRDITNOZZOAHEMLFCLDMKJATSAVNSAXOWKWTSZNLQIXYHEZZTHDWRVNTRMQUBOPJIDFAHVJWMDKCAPMVUIPKBZCYJWJFSPBLXXJDCOVRXQFWPGBHFQVYNKKYBSKQEFCSVAMDTYQPTY");
    const char tmp_msg_0[] = {-42, -116, 119, 75, -118, 73, 116, 33, -98, 18, -79, -24, -123, 112, 66, 119, -16, -14, -77, -7, 94, 85, 71, -124, 46, -16, 20, -61, -97, 23, -109, -42, 37, 94, -15, -23, -80, 44, -80, -88, -53, -82, 45, -22, -71, -53, -29, 12, -59, -61, 31, 64, -61, 29, 25, -7, -99, 76, -107, 96, 43, 31, -25, 15, -89, -5, -9, -1, 31, 92, -96, 92, -41, 91, -58, -70, -16, -74, 121, -18, 73, -87, -28, 51, 6, -122, 103, -10, 87, 86, -11, 126, -98, 100, -34, -68, 36, 49, -13, -76, -3, 123, 121, 65, -14, 6, -78, -70, -1, -13, -33, 63, -10, -84, 81, 120, 101, -128, -4, -126, -80, 23, -116, -30, 24, -100, 7, 82, 116, 12, -19, 113, 71, -74, 126, -7, 59, -4, -12, -125, 32, 2, 46, 76, 77, 42, 108, -33, -56, 70, -37, 111, 56, 16, 92, 11, -82, 50, 81, 12, 102, -69, 12, 24, -54, -48, -72, 83, 123, 7, -29, 20, 4, -60, -18, 36, 1, 95, -8, 120, 91, 16, -125, 15, 102, -108, -74, 103, -111, -33, -43, -106, -119, 111, -29, -115, 105, -93, -69, -108, -26, 60, 9, -126, -97, -56, -91, -11, -104, 3, 85, 74, 85, -102, -3, -16, 123, 88, 19, 51, -60, 60, 54, -118, -39, -113, -37, 47, -76};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("YCMVRGLPJNSBUTNANMJNXXHMRQYGRFXSHRWIJSYROPAUEBAEVJVOKOZNWZVULXMIIPDRQTOZQRTLXQOQBNIBHAPCQFSHWAPAEGGQCUPLHTXUWUBLEGVBLJHJYKCAFVAGTZPUBYIDGQXTGFFKMVZFHFSWTSWGAIRXKZWXVMYGQHHCDYNCLF");
    tmp_msg_1.plan_size = 59035U;
    tmp_msg_1.change_time = 0.584780602422;
    tmp_msg_1.change_sid = 21322U;
    tmp_msg_1.change_sname.assign("JZEOXFHHWNJSLVYVLVERJKOFVDCDHGPUCZOSCCHFMMNYQZMNYUANAXKVOWWXDAQXXYFYEZIAAMWSRNLLPTCMTKBTTONAUDPSTSGGWEKQBSRYDSXIPGRZMQJBVFUYFCQDECPEWRHWIEJMRCOXKDHJNRBTVUYOURKOMIRLZFEAFBLKTVVQFZQSYPHLDGBDLZQGAUIZO");
    const char tmp_tmp_msg_1_0[] = {2, 81, 70, 44, 121, 49, -81, -21, 2, 112, 126, -63, 39, -56, -91, -93, -111, 125, -81, -3, 69, -86, 61, -8, -64, -57, -60, -57, 95, 84, -101, -89, 20, 3, -84, -59, 73, 71, 97, 11, 124, 37, -70, -116, -52, 77, -62, -78, 40, 99, 19, 87, -113, 106, 30, -31, -53, 98, -88, 112, 53, -55, -37, 87, -10, -104, 18, 46, 73, -127, -57, 44, 97, -113, -54, -50, -23, 25, -16, -19, 24, 78, 62, -106, -10, -127, -74, 83, 4, -30, -43, -117, 2, -52, 107, 120, -30, -62, 16, 74, -62, 30, -34, -14, -42, 2, 113, -35, 73, 32, -101, 92, -49, -55, -69, 123, -115, 102, -57, 27, -37, -89, -72, -84, 59, -92, 7, -2, -110, -107, -97, 35, 42, -4, 80, 66, 43, -116, 48, -61, 35, 23, -50, 88, 76, -69, 113, -98, -90, -72, -105, -33, 46, 15, 3, 31, -45, 46, -74, -89, -126, -33, -5, 25, 36, -27, -81, -79, 124, 126, 69, 55, 73, 76, -87, 115, -109, 118, -29, 52, 4, -126, -124, -28, 101, -113, 87, 21, -123, -9, 54, -97, -112, -81, 94, -42, -38, 68, -46, 67, -113, 27, -94, 86, -89, -9, 72, -36, 38, 0, -83, -25, -74, 13, -63, -42, 122, -4, -26, -71, 79, 86, -97, 102, 97, -123, 59, -70, -40, 34, 29, -106, -65, -34, 112, 27, 16, -108, 107, 119, -56, 89, -85, 85, 107, -84, -106, 118, 63, 113, -2};
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
    msg.setTimeStamp(0.837366101413);
    msg.setSource(43974U);
    msg.setSourceEntity(251U);
    msg.setDestination(663U);
    msg.setDestinationEntity(193U);
    msg.plan_count = 60805U;
    msg.plan_size = 2331295265U;
    msg.change_time = 0.222160976681;
    msg.change_sid = 61039U;
    msg.change_sname.assign("KVDBGNWGYWMKEXISBTAUESZKXJVERPO");
    const char tmp_msg_0[] = {-57, 0, -90, -112, 50, 69, -8, -78, 0, 27, 13, 1, -93, -10, -101, 114, 124, 42, -89, 49, 9, 83, -112, -90, 71, -64, -97, 14, 82, -2, 96, -122, -114, -24, -55, -92, -20, -21, -11, -3, -52, -95, 53, -61, 93, -122, 48, 23, 56, -60, 61, -117, -95, -36, 89, 45, -12, -10, 67, 44, 56, 18, 97, 80, 5, 15, 73, -7, 103, 17, -1, 82, -48, -48, 104, -28, 105, -84, 87, -125, -65, -63, 23, -25, -15, -82, 93, -68, 96, 110, 15, 87, 60, -65, -94, -66, 86, -99, -32, 20, -106, 102, -18, 102, 113, -98, -44, -53, 19, 93, -115, 42, 30, 70, 1, 41, 14, -22, -89, -33, 13, 75, -13, -119, -59, 25, 54, -91, 81, 112, 86, 5, 111, 2, 49, -107, -66, -39, -128, -98, -117, 73, 61, 72, 21, 44, 119, -11, 36, -34, -120, -51, -74, 72, 124, -63, -83, -113, 69, -113, 58, -14, -48, -40, 94, -111, 81, 73, 25, 89, -45, -53, -127, 119, 75, -65, -14, 13, 54, 56, -80, -67, -124, -101, -23, -126, 95, 25, -44, 60, 46, -36, 116, 56, -36, 83, 119, 124};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("CIYFRWGGXMBARNKCOUZHSLEOIKMUSYAFVZWRTZUOMTPUEVIMYUAFSWDRLOJCIEDOB");
    tmp_msg_1.plan_size = 16818U;
    tmp_msg_1.change_time = 0.0264013802583;
    tmp_msg_1.change_sid = 8047U;
    tmp_msg_1.change_sname.assign("XIEHOVHJDPPOWPQRMWOMCCHXGUFTBHAKBDLMRFJYHVIUFQALDZLUAENDCLJDKYNXDNZDBCNCWPZPGXSJESXBPPTVORRCJHNTSQVIRKEUQVEIQGJLBKAMGEQITULQSWLXUINSKDYTCFKMETOPOKGYRZRMCKTOJGUHBZSFYJQTBJWOUQXIEFXAGMHUVBMRXLVLOWFCJWVUSNLSVKAYIGFZEWTYIYFAVZMZNGPZHBBRXI");
    const char tmp_tmp_msg_1_0[] = {6, 62, 76, -10, -45, 50, -67, 69, -116, 13, -47, -128, 13, -70, 2, -82, -120, -56, 110, -114, -87, 1, -21, -47, 80, -64, -126, 101, 26, -73, 58, -6, 80, -69, 38, 25, 69, -106, -27, 19, -35, 117, -101, -70, -32, -9, 19, 53, 73, -100, 3, 120, 1, 30, -32, 0, -28, 108, 4, 17, 81, -24, -61, -69, -66, -104, 118, -16, -91, -56, 40, -124, -38, 13, 96, -3, -5, 113, 5, 88, 43, -40, 32, -120, 12, 22, -25, 96, 102, -31, -77, 17, -55, -122, 91, 85, -58, -55, -7, 61, 10, -104, -99, 101, 49, -50, 117, -20, 111, 4, 11, -79, 84, 85, -7, 106, -57, 89, -117, 0, -38, -72, 12, -7, -26, -30, 45, 6, 90, -41, -17, -48, -35, 94, -54, 91, -27, 65, -88, -14, -53, -127, -32, 88, 33, -123, 105, 123, 29, 90, 19, -51, 20, 94, -100, -43, -17, 58, 22, 102, 64, 77, -103, -16, 116, -43, 108, -7, -37, -25, 100, -24, -46, 41, 112, -93, -64, 102, 18, 12, -49, 76, -46, 18, 89, -25, 99, -119, 11, -85, -33};
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
    msg.setTimeStamp(0.0304618363236);
    msg.setSource(16016U);
    msg.setSourceEntity(208U);
    msg.setDestination(10925U);
    msg.setDestinationEntity(3U);
    msg.plan_id.assign("KAHXRCMSMVRVIDAODOSNTHKOBEZIIUPPLSSHLVBQXWGDQXGCYLMFJUMKWYFZBSUNRYAGOENDBEWPGMZAXVUOBYZPEPCZEYZKMDVIROEQZTFVFHIJUJRXGSVXJGSRLBVACKALTPWOTHLKJXBWK");
    msg.plan_size = 57948U;
    msg.change_time = 0.0804998366;
    msg.change_sid = 29549U;
    msg.change_sname.assign("BHEAYPCSHHOSXRZUANRJZJANMUOCHVZMJUURHQDQGQWBACGRTMLBTV");
    const char tmp_msg_0[] = {-58, 51, 8, 87, -38, -9, 25, -108, -16, -29, -67, -24, 107, -63, -38, -78, -125, 26, -6, -112, 82, 51, -89, 48, -25, -48, 98, 75, 63, 78, 32, 43, 29, -115, 117, -87, -11, 44, 64, -110, -35, -42, -44, 42, 80, 107, 66, 98, 82, 96, 121, 96, -16, -32, 69, 99, 86, 105, 40, 27, -127, 96, -22, -91, -29, -76, 45, 107, -104, 77, -85, 80, -72, -120, -70, -67, 29, -28, 39, -7, 110, -115, 123, -10, 124, 24, 9, -79, -72, 95, -51, -40, -18, 112, -33, 11, -123, 117, -95, -13, -12, -73, -123, 116, 51, -121, 0, -112, 110, -68, -102, 82, 64, 43, -17, 18, 96, 95, -111, -53, -86, -41, -16, 27, -61, 30, -66, 57, 123, 58, 96, -5, 111, -26, -119, 123, -66, -82, 26, -97, 108, 53, 94, -115, 17, -37, 117, 115, -29, -24, -84, -64, -122, 88, -20, 7, 43, 31, -124, -72, -4, -78, 73, -13, 100, -80, -127, 63, 104, -126, 72, 29, 74, 34};
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
    msg.setTimeStamp(0.391585507008);
    msg.setSource(60674U);
    msg.setSourceEntity(224U);
    msg.setDestination(3165U);
    msg.setDestinationEntity(189U);
    msg.plan_id.assign("UJOJZKJICGJVQADHOMOVJNVWHLFYVYTFPDNSPXAIMUWBBWZIPHCLKQRXBKIHPVZZIJDEETZRPOVATKSBAEKLCUEDRIZLYQBHCPHONUSKXIBMMQYLOZOVUOFCQNKCGJPEOMWAASSRGTNEETXCOT");
    msg.plan_size = 30009U;
    msg.change_time = 0.570069691399;
    msg.change_sid = 37493U;
    msg.change_sname.assign("EOBQGHVOIOZJACCITATMJCNWSIGRHKRNWXFYGKMHTSELUMRRBWDGHRJEFTLDEAWUEOWSWDXQVQZTPBCNWPSOEAKDKYPLPYLTQUNHDYROSAYMTYBFNIDCMNBVVUVRTAQMDEJ");
    const char tmp_msg_0[] = {-81, -81, 24, -31, -7, -26, 98, 98, 71, -10, -29, 69, 50, 100, -65, 103, -36, -98, 53, 35, 77, 16, 22, 66, 1, -74, -88, 23, 46, 26, -82, -123, 113, 22, -50, 71, 19, 17, -73, 103, -115, 90, 28, -67, 43, 33, 94, 36, -111, 116, -19, 121, 107, -119, 69, 64, -70, 37, -118, -44, -34, 95, 6, -47, -125, -128, -98, 115, 97, -10, 49, 59, -40, 29, 26, 27, 86, 64, -49, 6, 83, 93, -53, 5, 32, -74, -19, 123, 72, 118, -117, 115, 37, -115, 66, 11, -42, -88, 2, -91, 0, 78, 68, -128, -79, 68, 31, 88, 59, -27, 16, 70, -90, 42, 85, -13, 87, -101};
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
    msg.setTimeStamp(0.782431728496);
    msg.setSource(45412U);
    msg.setSourceEntity(31U);
    msg.setDestination(23544U);
    msg.setDestinationEntity(184U);
    msg.plan_id.assign("ZGPTTIVLXBFFUJKNKNJKFIVSRQCWXUHBBMNEALBEHFBWUGPYCJBWPNOQCWMULNTYJGODDSXOOXVQYXUYHKMDRPDRSCIUCHJPEIWAUQCVAEPILDBJVOXMSSMKKDQNUIEAOHEYLGZZGLVNLZYXRQZLOZKDCDGVKYZRTMJLJMGVFSOEXAHHWSPLBIZWVMMIGNRAS");
    msg.plan_size = 56668U;
    msg.change_time = 0.904198610554;
    msg.change_sid = 12637U;
    msg.change_sname.assign("QMZDZDEJRJBDRDYMPWPAVHAFILWLHTEDEEJKSXFUCCFGDYOJUEFDZAXWLJHZLGZRRYCBVZWTVOHKOSXGOATKHICFVGNBPIIQAVLNCNGVZAPNZKWMELSIFJQNTJUTYSRXVXGTCRVFBXQMSEYRJYEUDYKBKLVUGQWFSYBYHGOIOXPOQHPNJBKXXIUPKMFTCGCACWSQQNDAPESKMPMOBMWPNOSOQM");
    const char tmp_msg_0[] = {-41, 54, 111, 70, -122, -51, -34, 33, -99, 45, -38, -5, 81, -89, 119, -87, -30, -117, 119, -24, -122, -92, -30, 27, 78, 23, -118, 22, -107, -61, -86, 35, -33, -116, -83, 66, -89, 14, -92, 69, 4, -121, -114, -68, -11, 120, 92, 81, -21, 91, -32, -20, -19, 73, -57, 14, 45, 15, 69, -79, -54, 5, 125, 80, 21, -43, -15, -9, 81, -20, 44, -69, 3, -28, -98, 85, 17, -42, -33, 64, 9, -43, -46, -48, 51, 6, 67, 98, 28, -82, -11, 80, 63, 5, 126, -110, -36, 27, 86, -82, 40, 51, -50, -89, -28, -121, -123, 71, 61, 26, 69, -115, -108, 47, 60, -42, -1, -46, 31, -120, 51, 44, -5, 91, 68, 16, 10, 32, 50, -97, -5, -65, 116, -7, -80, -91, 76, 50, -75, -81, 124, -40, -45, -112, -102, -8, 1, 102, -77, -93, -120, 43, 10, 100, -53, 68, 48, 92, 57, 106, 111, -85, 53, -97};
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
    msg.setTimeStamp(0.127035592939);
    msg.setSource(50667U);
    msg.setSourceEntity(13U);
    msg.setDestination(50394U);
    msg.setDestinationEntity(176U);
    msg.type = 248U;
    msg.op = 63U;
    msg.request_id = 26221U;
    msg.plan_id.assign("YHKYLQASJGZETWGXCWRSZHLIMYZUVLETOTPBCSFOUDHWEKYAVIVGQBSZCEKCGZWDJLLBMXSG");
    msg.flags = 64430U;
    IMC::SystemGroup tmp_msg_0;
    tmp_msg_0.groupname.assign("EJSUKSTUYSWSWVAIFYZKBJZWRCBMLCHAVLDLLPCJZVJVCGGASHNOZRBITXUGNGZQMPYFCEFHKTVNRPONOAMBKFNKSLIKHRKQFQKAIABUULYOICBXWC");
    tmp_msg_0.action = 104U;
    tmp_msg_0.grouplist.assign("AWMMLPKJHBQKAASXRWJDNZTOKLRRCLBZYYTNMVDNGGSOFNXMULWFZBHFSXVOWSCRPITEBDGYDQPMXIMHUXNQIIHAGTGKZRE");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("HXRHOLPUWBZZVTHKDYJRZ");

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
    msg.setTimeStamp(0.148325816955);
    msg.setSource(59475U);
    msg.setSourceEntity(188U);
    msg.setDestination(21780U);
    msg.setDestinationEntity(103U);
    msg.type = 99U;
    msg.op = 253U;
    msg.request_id = 50489U;
    msg.plan_id.assign("QXMPOPJMMNKLETIGYFFPJWNGKQFBJPWIAEDSPKYNREMGISXMJOORIYFNLDESVBADDIWBOGSCXV");
    msg.flags = 13554U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 5935U;
    tmp_msg_0.off_x = 0.493304387016;
    tmp_msg_0.off_y = 0.565785093509;
    tmp_msg_0.off_z = 0.984644916897;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("AENYTPITJRQXAJLL");

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
    msg.setTimeStamp(0.391300716904);
    msg.setSource(17264U);
    msg.setSourceEntity(126U);
    msg.setDestination(12026U);
    msg.setDestinationEntity(166U);
    msg.type = 220U;
    msg.op = 189U;
    msg.request_id = 47843U;
    msg.plan_id.assign("MNBIYKJFCWNEWAYHRWHZOJZATICZKSBNPCJVGWYGCZPJRPHHYZJUKHGFSDEIKVFVMBNTZFECABDTQBCGULDXMOUKADINPVIDNSUIGFUXQMXHSFSQDXEYREFFUYSLRTDBQOTOIZJLUXVJEGMNEQVWLOPUKSVRQCPINMKGHSBYWJFRHURVLBCBKTTNZOEWRADAAMBKLCEAAQXOTTZPHJTSOQXARQLHYPLXDIPVXGYQVKYGNMCEROGJPFDUMWZL");
    msg.flags = 1433U;
    IMC::DesiredVerticalRate tmp_msg_0;
    tmp_msg_0.value = 0.162203765112;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("MEDXJUYWBKSIDTKWWSCUPPKHJGVGIUZOCAWZUXTPNFHPCLYTKWPPILJHAKDXKFGXEZUTBJNETNNYQUMNABOFDYSRDCZQSVRLITNAMQQLRYYFOOURBGFFIWBDTHZLKMBUZSMXIRNZMSQEKBWPG");

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
    msg.setTimeStamp(0.401961674466);
    msg.setSource(51332U);
    msg.setSourceEntity(97U);
    msg.setDestination(7417U);
    msg.setDestinationEntity(234U);
    msg.state = 254U;
    msg.plan_id.assign("FMKLFSZRIGFLFYPABOTDYTECUXTPSWLMFBCBEAPHJIZUMTKBWFQZNVJDRCJVLKVDIIILPXZANWKKYQBWUKAENCGBLDM");
    msg.plan_eta = -176981900;
    msg.plan_progress = 0.330953432986;
    msg.man_id.assign("ISMSNJRDYXTTKWKBSKLYEIPMTDQALCOQLFUZZTFXTYLZVJDHLAGIGKXCJWNGURINCJDJJHHGPXQMCYZTOBPVKFDUSBAFCZTQOIZEFNWQLBMHKLCYVKG");
    msg.man_type = 12762U;
    msg.man_eta = -1348502683;
    msg.last_outcome = 158U;

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
    msg.setTimeStamp(0.950528036235);
    msg.setSource(47770U);
    msg.setSourceEntity(183U);
    msg.setDestination(28700U);
    msg.setDestinationEntity(25U);
    msg.state = 2U;
    msg.plan_id.assign("FDYRDDVPOHWPNFHOUKCTAKNODFXDWAHIOMZXBJMVWSEMFKAHSKXRPOQCPQSGRVKNBXIGTUQLJQXIFIZYSWTTKFVRVZRDHYBOEJOGKKOXGVQCWIAENTJUMODLGIUFBSEJSXANYYWGBBPPLMZYUBCJEQZTNAWLODYNRTEINSJRCTPFVCHRBJLIVGCUPGCEKDMESXZEXZ");
    msg.plan_eta = 1968756446;
    msg.plan_progress = 0.0624074565614;
    msg.man_id.assign("ZBSEFMYZPRQZVYAWPWEWGQDETXQVYXEVGYKOORSXBADDGNHVHIXAWCQBJTMNUJLVRJRHQCUNHNFIMWSUMMFGBXDKIZEALRFKNGCOCXKEUJMMYFVDJZILPONGQBMVOYZWUKRHBOWFPLUQPRCSDSJYVDWIFOATBASISCYMGUENOIRXSKTPIDPJXAKAPTAIQLCEGUKUVJDYICTEFJHQNMWAOOHGULLDBWFNSLXVZRJKTTNTHHTFZBZXYS");
    msg.man_type = 60197U;
    msg.man_eta = -384607880;
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
    msg.setTimeStamp(0.130458843837);
    msg.setSource(10386U);
    msg.setSourceEntity(82U);
    msg.setDestination(53541U);
    msg.setDestinationEntity(133U);
    msg.state = 100U;
    msg.plan_id.assign("KSAJJYBXQCBGAVBLICSEYLJDCQEVZAKUISBNKYWTXNHPYOQRWVCSCQHVUXMNBPYELFKSFEDTYTOQPNGRVZWOOZFZMMOGEJZNFUUNVQEPRIDARSLTYLXIBWIGGPFKFLJHMYDTQAVMEQUSANTZRTBTCVGEXRADXNTKBPOWVDWRMJQXKDTHPZPSHFIMLOLC");
    msg.plan_eta = -1304431022;
    msg.plan_progress = 0.144962031308;
    msg.man_id.assign("XAYNHMGPHDKISTWQHRBFDZMEUKWEQDKJXVHCIGGNUNBHYDALBPMHUXPQJQTNUAAGWDPQGZBPPFJJIXHUCLXIVFSFWSLKVOZFCBVJQ");
    msg.man_type = 59977U;
    msg.man_eta = -1436512503;
    msg.last_outcome = 50U;

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
    msg.setTimeStamp(0.512649645418);
    msg.setSource(2694U);
    msg.setSourceEntity(137U);
    msg.setDestination(10613U);
    msg.setDestinationEntity(27U);
    msg.name.assign("ZJAQXXOLUNZMNISKJBUQXBXNDDTSELBQDVXLBOPDJFUKRFYZJOCHDUIQWPVURCXPEGKIOYIKRRCEAAMWZKOHULAAPUQJCZJNJIGCJQPPGPPYROEHAPVTITAXMWGILZBWZSCNHTZKVKBWGKMNC");
    msg.value.assign("UNWPYMNLUJQPORKOXYUWCSDVHQTGODSOMPCOFLYZUMVPEBVLZFKXTRJGRSYBFMKHLRJREBOJAWNXGW");
    msg.type = 211U;
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
    msg.setTimeStamp(0.467578673026);
    msg.setSource(9584U);
    msg.setSourceEntity(105U);
    msg.setDestination(47954U);
    msg.setDestinationEntity(36U);
    msg.name.assign("MFAGTVUEONDXDQIRKUPYUEGOHAMZVTQTFVSNJZGEFVRMCTXHRKSOLHGUOYTWNVOVBYOTEZSJPKBCLDHIUASJDNVAQTEVGCGRUO");
    msg.value.assign("DGPTKXIDVGVPQWYOEPGOSUAWOWDMUBCRRHLUGEJFRFCNYXECPLVOWQLYAQDALRAWKOSZDNGIZJABMHMDERFXJ");
    msg.type = 252U;
    msg.access = 45U;

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
    msg.setTimeStamp(0.69735666491);
    msg.setSource(18949U);
    msg.setSourceEntity(153U);
    msg.setDestination(29703U);
    msg.setDestinationEntity(252U);
    msg.name.assign("ORHWQPQRJQNKNIXFAHCEVNGKZTJBJYDFJYGYNSAWDVFRXJGPABUTEVTHTMZNKSWDRYIAFPSJSFFDRMTLMYHHTVZZGSXSEMELOZDDUHOBMGMZKOPRUWKZGPBFKCEDZLYHUXUNWREUKVMPWQYTQXFWHAAQILCPBAYCCVNWGTULANOWLMEJGNYADCMXUSUPIEOXMINIBOLQGQJDRIKJOOCQ");
    msg.value.assign("LHIKEOWSJTBXELVAZXSVXAHTZNDYWJIFYGYENC");
    msg.type = 38U;
    msg.access = 35U;

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
    msg.setTimeStamp(0.084779184827);
    msg.setSource(51538U);
    msg.setSourceEntity(5U);
    msg.setDestination(274U);
    msg.setDestinationEntity(192U);
    msg.cmd = 125U;
    msg.op = 28U;
    msg.plan_id.assign("JGFEJEPDTNFHBDHPFZVFLGMDUQBNRSQGYVYUVMJHIEKJUNNRSZTPHLBNQMKIILPQVHXRJAJBAULEHQOZCXGFWYWMFVRCLKDXAFUSCYASJQKPBBEGYMXZWTIIVXYDMQSSBXEDFCCHAOOVWEYRQTARMYXGCQPDGIOGPCVTJZZIZLWFHOWDOTTUDNOXAPCZKUKTIWAEWNC");
    msg.params.assign("WMUHVTVUFAXLENTPPLJMGIEURSHEZOJMKJUSDHTDBTFXOTZISKJFHGWUUZYZUHKAIOCUBXMKKBNWEWIQLBHGXFSKEPEGSQFAPVCDARWZSFJODXVYOECSTRICVPVLGQAWQCWKZWRPANRBINDBABIAOCBXLGDMXUESXERYLYNZMMZKOQFHGEXQSJWMQUKYJYCVGMODPTSHIVMYLPAYHFDZXITJWKPVFLONJORPCJBNHLCLRBTCADIGDZRRNYNNV");

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
    msg.setTimeStamp(0.00390515286074);
    msg.setSource(6298U);
    msg.setSourceEntity(46U);
    msg.setDestination(31568U);
    msg.setDestinationEntity(60U);
    msg.cmd = 38U;
    msg.op = 37U;
    msg.plan_id.assign("ECSQSRTHEMDPUMOJYJUESOXUGTFVQMCLTYCKAEOZVDDLNIOZQJIPRTSKNAVFIRAWNZQDPJUYSLRZMKCUYLXDPVDWJYECAMVWISTMCIBFUYNXEBNBKWANVOFGYPXLGVIJXPFBIJMADLORNQLYSNZSCGHSPAWMWWKOUFBIZZLBCHPYQHRYBBGEQGVHUXZCWTPWJEXNCMKEFSGEITDKOBKNOAGOZTHTBRHVUDQAZJHXGFXTF");
    msg.params.assign("BCXWLGLEFSYPEHUZPAINRTYZIZMXAALQPSTPGJWMDDJCJHVFKXLDGIBTRAWUJDEMKQCJMLWZACANIVHHGIZSLFSSYBXJYFFGQNVRUXTBELXMGDJXMYMETKXJLQRZITPCZW");

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
    msg.setTimeStamp(0.922121479101);
    msg.setSource(49044U);
    msg.setSourceEntity(247U);
    msg.setDestination(45793U);
    msg.setDestinationEntity(219U);
    msg.cmd = 32U;
    msg.op = 239U;
    msg.plan_id.assign("YTWGNNUECPPZFHBIYVUMMQUIBQDUVBPOMHHLKMNDLNFFBAKVLSNXPZDXEWQEVKMIYUOLQQGZWYDCKVWP");
    msg.params.assign("ZOHEZYXACRCETNIPTLGSFWBXXUFJLPUFIIJOXKNGCHGMRCMBYIBTPRKNRAQPHJOMGRTREUKSUWTMHWDTTJRSEZNPSBHZSAPAOLLIZEWJDKDKOMUUAWELRICHDXSXVVJNDOGPXCIHWYZINSFFONVSQMMYQCHKNJZOJTIWPITVBWCFQASAMUFHVEXBDVNLQCRVYDLFAZGGZUQBQKZGTBKYYHDW");

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
    msg.setTimeStamp(0.333040261066);
    msg.setSource(54604U);
    msg.setSourceEntity(133U);
    msg.setDestination(42504U);
    msg.setDestinationEntity(222U);
    msg.group_name.assign("ETNAVURKHZJYTBZJVCOHCAKBWPGHSAVBOLGTINSMUZKWZGDVUDCXXPILVBQJIETJCKPNTXL");
    msg.op = 187U;
    msg.lat = 0.831570573168;
    msg.lon = 0.482583828842;
    msg.height = 0.73780146472;
    msg.x = 0.0365281488564;
    msg.y = 0.274606893449;
    msg.z = 0.573830706977;
    msg.phi = 0.538685903605;
    msg.theta = 0.144385092758;
    msg.psi = 0.297596620997;
    msg.vx = 0.243579894542;
    msg.vy = 0.359862768593;
    msg.vz = 0.716440450245;
    msg.p = 0.595471965799;
    msg.q = 0.494805877547;
    msg.r = 0.878450439193;
    msg.svx = 0.21369770844;
    msg.svy = 0.338128760992;
    msg.svz = 0.206333615434;

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
    msg.setTimeStamp(0.473248002438);
    msg.setSource(64838U);
    msg.setSourceEntity(159U);
    msg.setDestination(548U);
    msg.setDestinationEntity(5U);
    msg.group_name.assign("CCVOAZSRSLOLRGLKSUFXPFEZPPVALPEWUJTWFVGATOTEZPWXHRMDHVTOYRJTWIUYWJFELUIDXVTYONKFJWDPWCRDMSZZQVFHBZIUIQGGBLYKYIOWADFENNNNAISLSQQHXVCQSYYJUBSZUTUOQRHMLCDGKNDBLDHKEXPAMXZBOFCIQMMGVJOMJMUXHGPIGQQWKWDQGVKCTCJRJBHTOZARSYKKYNCHEMIYIHDANXXE");
    msg.op = 134U;
    msg.lat = 0.660440280791;
    msg.lon = 0.940910128975;
    msg.height = 0.860626681485;
    msg.x = 0.783041093419;
    msg.y = 0.899805162919;
    msg.z = 0.0612995170301;
    msg.phi = 0.466260115358;
    msg.theta = 0.485089262952;
    msg.psi = 0.546245559132;
    msg.vx = 0.566325284491;
    msg.vy = 0.580949345177;
    msg.vz = 0.919713877881;
    msg.p = 0.59735689643;
    msg.q = 0.133640965754;
    msg.r = 0.403928739476;
    msg.svx = 0.946003443157;
    msg.svy = 0.067844706799;
    msg.svz = 0.33853747946;

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
    msg.setTimeStamp(0.535306958992);
    msg.setSource(18120U);
    msg.setSourceEntity(8U);
    msg.setDestination(40193U);
    msg.setDestinationEntity(120U);
    msg.group_name.assign("WIHYWIVKWMRZLICXJHEZXQFXVDSNHTMFUSUHYPOTOGEKXYYYIXNAVQKSBJRFWNURJLCDBEBSUWNYGBLPLNDEKNOSERZCYLARROJMAPMWTTHARDVI");
    msg.op = 56U;
    msg.lat = 0.970498922877;
    msg.lon = 0.756863319789;
    msg.height = 0.854374209446;
    msg.x = 0.298787563227;
    msg.y = 0.455874802474;
    msg.z = 0.759522789277;
    msg.phi = 0.964739908673;
    msg.theta = 0.363052208332;
    msg.psi = 0.00508265737202;
    msg.vx = 0.897114668439;
    msg.vy = 0.741776021885;
    msg.vz = 0.0652074376746;
    msg.p = 0.790680672613;
    msg.q = 0.0984048659234;
    msg.r = 0.0484417957794;
    msg.svx = 0.998849337944;
    msg.svy = 0.316298027803;
    msg.svz = 0.230254815891;

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
    msg.setTimeStamp(0.458297209906);
    msg.setSource(45166U);
    msg.setSourceEntity(103U);
    msg.setDestination(56473U);
    msg.setDestinationEntity(62U);
    msg.plan_id.assign("KMGJPDCYASJPPABRBCNNHRUEFUJWNEGLDHQTCWYSDGOXJXRYUKORDQKMGTWSVCKJVGAHRJAYBZBIZBYUAWLFZQIBYGVMIWSEFCIKNZUBQIAJLNMGZVAITMMHONJRSKLLGOEXFHNDONROCOQDVDMYMZQDAWLM");
    msg.type = 47U;
    msg.properties = 86U;
    msg.durations.assign("ETSXDQOPOUISZIXXFAFSNUPVZGKLGKGWAFNRVENQWEIOORA");
    msg.distances.assign("QFDGNYEAGGNJPYSJVRYVDTAKQXNOCPLFRNCKLXCFYLOEVEHGLWADCWQDLRZR");
    msg.actions.assign("LLSCOLYUQPODYNBEIVVNKZYMYULGUOHXLCLXRNQHHNOWXJCCVPCRRXHMZISDCDTZAQSSPBKOJJXZVFUIWFDYMNEYKIFLDVUGPBVIYOMFHTHMAYNDAZRZLARMARZKGZLTXNEUWYWURMHCQEQPGQZZGPWGKMSBLNEFFCTMGXFKGPQJHBHSJIATMFARFPNDYCJDFBWRSIUWOEPWOW");
    msg.fuel.assign("KRCPKPBQPZLNQNEZWACVHXRFJZFNNXRENXQLYABTCBKUOMZVAIAHRJ");

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
    msg.setTimeStamp(0.172598300863);
    msg.setSource(60706U);
    msg.setSourceEntity(178U);
    msg.setDestination(22646U);
    msg.setDestinationEntity(39U);
    msg.plan_id.assign("NUQJWKRGUYMFZZNVCJDZBGUOVDIGFLZAWAWEXECMBNPEDNBMQRLHBSDATKALVFHVCVYGXICEEBJPELRQIATOCJFVYMIXKKUZXITVDKERHJAMRTMJNNVHSSVMBQOTBWRRWXAXJSUSZLHJQOHZLLKQITQRPIHSOABVKSMKZTLAKPSBNOJHFXYMPTJHNLTWSFDBPFQLFGPOHXWTXFRSQEYWIOUGGZWDQOUFK");
    msg.type = 96U;
    msg.properties = 58U;
    msg.durations.assign("YTSDDQCRQVOMGKWXNFQJWVPCKAAAPLNGTMGXAAYHPJLGOYSGVAXJIU");
    msg.distances.assign("ZXYWUNOBOQGNGLCCFXSEOFTFTKJCSNEDOISGJRJOLHIXHWQANDZDCEDLYLILAPCIGKUUJHQMRUPFYHSWUEQEOSDYRGXKWVWPVSSIKUHKAYPDLXTRKCIMMKAQOZMMGTKZATJDVNZTSXTEOMMEBYENWWLFLDAXVTGFIPWVLIORVUFDAYGPZMJMXWCBPHYQ");
    msg.actions.assign("VPVYAZQOPEGESILKRRCXQYMDKDITLTEMBWMLPOTNMRJPRAZOWWJNVGQUUETHDQSKFOYUCFZADAVNFTRTZFJXURTUDQYXYGYBDXBQQIBNISRNBRWSLKHBDBBISKFNECXIHJNVDPHHZENCWMFEAXABIEBZWVJRZPZZXVMSSXLFTJFRLKOTGJHCFLKJKYUGGHJMHICQMUVIGQACUCOWKLZVHYHWOPUSFXMTPSOACUKDPWYAJLENQAPWESNGL");
    msg.fuel.assign("HJRRGPSAKBXIGFUBRILPCSUVKEYWZKXIPHMLLDEFX");

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
    msg.setTimeStamp(0.102658432106);
    msg.setSource(8317U);
    msg.setSourceEntity(155U);
    msg.setDestination(26670U);
    msg.setDestinationEntity(175U);
    msg.plan_id.assign("KDRSYDRFIERSOBQSXENONUVXKJKHPJDGHIQBEZODHJPXTXGYGPRNXPMCYWMMLYCQCAKGAFIAUQVJGECBVXHVSVZTGHFAJFKTFDLUCZCCAYYDOSWEEIAXPYSJHLQMTPRRNNEMJLVOLQZNSHMYDIWWRMUZXYLNPSBKTUWEQBVKZMPKBVHTNHUILZUGGCBXKUTPZVRJOGCFVRGDOC");
    msg.type = 192U;
    msg.properties = 41U;
    msg.durations.assign("GOVXBLPLHPBGLLNXHGFDEFBNMIQCLTISDAVOTSJXQLHUASHXSOAPXFECNBKBHYJTFXMGZYKDONPKYHRUPAWKBUJKXIELCZVQERYAUISWECTIPZZMRIGSHHBQSQTTDKFMMAQVFBCDAYUQOJYWDAYOGNEZMVRNLEZHJZDRMLPREFQNNGNJFCZSYAOETVDWPRJEWIKCQXRRIIDFWJTZTJGFYDGUKROYCQONWUXWAWCMUVBZUT");
    msg.distances.assign("YQBCDDFVPTYFXLCVPFMUOWJHVNSEZFZYUTKRJELIWYFVRNGPG");
    msg.actions.assign("GGWJUVSNQAHXMVRELTVHFLSPORDKWYGZZUHXHCEOQIASZOYQBMTDZEGYHPNTLFMJJAKCYBW");
    msg.fuel.assign("NKZDASEOLVLKFKVXJRPMTZLVEBMUBPBQUANFULUAQJQQGKDMHPIQVSWUFHLIRUXDTMWEZMTPTEMIOWFYIFIZMYCQONFRDJBJEKOWIURRGANBJJQLACTNLSOPKDWH");

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
    msg.setTimeStamp(0.955020384986);
    msg.setSource(35875U);
    msg.setSourceEntity(216U);
    msg.setDestination(15953U);
    msg.setDestinationEntity(166U);
    msg.lat = 0.221866015751;
    msg.lon = 0.98667828274;
    msg.depth = 0.215887924936;
    msg.roll = 0.88459084018;
    msg.pitch = 0.231086875378;
    msg.yaw = 0.0937695805716;
    msg.rcp_time = 0.720164677703;
    msg.sid.assign("TYDMHMHSXVSOBXUQBUGVNQCAUPZYAYQUBEDWJDGQTDKQGLVZGRWZOHIQLNXDWFQKKSONCZAPCFCSCUIWWGCXLGCENTMYNAPLXPEKMFNEKUSLXSXZHYZERRLSJETOUMEAZKEHEKLMJYVCIMTORXRYKOUAHQSIPFLAZJCYPAXIFVQQPMHWABJOMDKOAHEHFGSGZTKVPORWROFJVVJNFBFINGUBVDBHRTZCGNRRDYJTPUIVITLJPLXFB");
    msg.s_type = 241U;

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
    msg.setTimeStamp(0.645189993578);
    msg.setSource(52418U);
    msg.setSourceEntity(40U);
    msg.setDestination(18349U);
    msg.setDestinationEntity(44U);
    msg.lat = 0.622797823469;
    msg.lon = 0.539510958592;
    msg.depth = 0.633740967375;
    msg.roll = 0.99250012948;
    msg.pitch = 0.460449177179;
    msg.yaw = 0.318869657692;
    msg.rcp_time = 0.450995946098;
    msg.sid.assign("NHFQCZYUGJLWFHXLGCOAPZOEYHECKNQJULIEEVJSONZKQLXHYIWUJVXOBFZTTNSLISCNKYPFVNRXBUOHBPPMWGIRHVNBGGOWAZWRFWVLCQRKVEANYEXNCUHTDMVBSDIATSBLWSEUGXVPRTZIMY");
    msg.s_type = 81U;

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
    msg.setTimeStamp(0.162088819255);
    msg.setSource(17698U);
    msg.setSourceEntity(132U);
    msg.setDestination(10351U);
    msg.setDestinationEntity(208U);
    msg.lat = 0.19686278058;
    msg.lon = 0.063419720408;
    msg.depth = 0.371744115144;
    msg.roll = 0.403620333503;
    msg.pitch = 0.684556290821;
    msg.yaw = 0.388084614732;
    msg.rcp_time = 0.297562155797;
    msg.sid.assign("QVZVOYKHTQTEKMGDWJVGIPAFCNHPCJELLSPJMMAYFHVQUN");
    msg.s_type = 14U;

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
    msg.setTimeStamp(0.815233189667);
    msg.setSource(37244U);
    msg.setSourceEntity(216U);
    msg.setDestination(18919U);
    msg.setDestinationEntity(228U);
    msg.id.assign("NLPHXRJGAZHLYCWVIEPICFSKDSUHSTHJIZGHDELYBWZLDSUMEBACKNTHZGYBMOJDAMCM");
    msg.sensor_class.assign("DYACAEQFTQXYHAUDMQGKVUJMOCWVTKJJPXTVKTTIFTCQVSIPTNFIMGKLSUORULKAPZWBDGXBZSM");
    msg.lat = 0.0632896147434;
    msg.lon = 0.0890943795135;
    msg.alt = 0.285247790388;
    msg.heading = 0.61364524727;
    msg.data.assign("HKDWFQYHWXOXWINGSLEAQGHAKLGXDWPHWMXKQJZUYVAVKFTTATBFDJUEAQTIPRVJCANSKJZYGMQQFFCTCAIFYSMYMJWPPKRFBJLLCNYHMLKLZMYBHWPUKGRJEIYBLWSTDUPRLXDUAPQNOUIMGZOGOPKERGVAZCVPFHDYNVNVZOSHOSRVXNZSX");

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
    msg.setTimeStamp(0.79337865357);
    msg.setSource(50445U);
    msg.setSourceEntity(100U);
    msg.setDestination(14248U);
    msg.setDestinationEntity(179U);
    msg.id.assign("ZXKMZGJAGJWSYQYMUMOZIRUWHHAEEPXWTQJANYFXKATKNRXLKTAKVTHATRTXCOYVWFGQZHSIIZNWTBOMAGYVLILRJNGSPFCV");
    msg.sensor_class.assign("NTLALLUDOTBSGANVOKDXWMHMZJBCXEVRMGNPNXNGXEUQKOE");
    msg.lat = 0.927482515716;
    msg.lon = 0.983543811446;
    msg.alt = 0.103609801015;
    msg.heading = 0.250966499924;
    msg.data.assign("RTKVPYBMNYHUDAFPCCZZSKOBUJKMCXIRRPQPMUKFXYEWVJTTYGPNAWTLXTRZWHIFARRYQSDGASXZRYELZVQGESNJKHEFAEOKGFXZTFBVEYLWLFBIQTMGKXOUBVDWMCJIDLJHNZZSD");

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
    msg.setTimeStamp(0.789381785546);
    msg.setSource(11990U);
    msg.setSourceEntity(228U);
    msg.setDestination(14298U);
    msg.setDestinationEntity(36U);
    msg.id.assign("CDOTZEQWZFBUZSYYXMGCXLKGTEKRZURKUBIOJKEUPRLVGLLNIRPDQIFTSEXVUIFDBMZXRHPYZT");
    msg.sensor_class.assign("UHHFDNIVSIYSOSUQRRZFSAGVCJIAJTGVAHPKONDCVBXBDZVWNWNGALREUKBVBGCYQKXGYKPLKEXUDFWMHFRT");
    msg.lat = 0.903248886913;
    msg.lon = 0.567240590042;
    msg.alt = 0.674353705173;
    msg.heading = 0.0114594086798;
    msg.data.assign("ZNRNUWWGITBSBUPYRROJOTGPBODCIXEHMQGJTLTCCFKDMQNRZLVMCLFWJAYZYZNSRYEXNXWQQNWULEFPDGJTZZCQJQIABMRZPDKZAXJBOFIHKDJJVXFQUOWPSNKYAVETQHYSLAHCEHYJSDVXEFONOUXFMPGLIHKTLUAJGESCMLPUSTPHMEKVCKFGRHXTSUYDSCGYKEWOA");

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
    msg.setTimeStamp(0.482320003268);
    msg.setSource(42341U);
    msg.setSourceEntity(216U);
    msg.setDestination(50508U);
    msg.setDestinationEntity(103U);
    msg.msg_type.assign("ILOVVELXCIJSNXDSZYWZIHPJUYMJBROATDVUBSDWAEQAYJYANVXUHPQVYGHHCZQNXGEGSWSPXAXAFLWUQICKCTRHCAHSUGOKXCYMQWFZGLXFMLYEGFEPQFDIMBQWCIHVIOZCHJLFUSEMBMNFLMZBGGSRKNYBCRYRKFNVMTCHKWEOLDBTPYHDWJAJJSFFQXZKVUKTRIOQ");
    msg.sensor_class.assign("YTFVPBSCDPQGBUJFYHINGKIXDDQSQETHYCSFDVZARNJIITGKGVEBVWUFXOEMOJTSLRKEJOXNUAWDXTVLKCYKFPLPOZXLMESAZQMTYRYEMUZUVOBTMDMCINNEACRNJHWCDDLOGZIKAPULXCUJMJAEBIWYHLRBXWQRVHFOMYBAVLQTFXJYROKHVAEFPPRCNSBHMGHQSZBTNQSUPNEIVCPLXDMGWWHAOZJBARZCGWZPQZKKOFJKSHY");
    msg.mmsi.assign("IVMVMMGHSBUBNCGATVQRQWRGTCUBBGEIIQJFDJENNVWAYRYONUJZPTR");
    msg.callsign.assign("LZEVMKAFQNILRADDXTYFQOISVYVNYBPGHFPHMELVZCVLEHJXPDCRNVTTOROXOMPKWLNTTMVAVHQEMKIPHFGDWZGEBQCARJ");
    msg.name.assign("FYVKVTWNCBPHXDPUXGXRRIBMUCAJSQBWWZNATKUZHTCXEYPCAPHXKSQNWVAFHSBQ");
    msg.nav_status = 251U;
    msg.type_and_cargo = 170U;
    msg.lat = 0.936352153076;
    msg.lon = 0.54433634143;
    msg.course = 0.806291973284;
    msg.speed = 0.49484704959;
    msg.a = 0.500268848017;
    msg.b = 0.36468566624;
    msg.c = 0.645056898612;
    msg.d = 0.403023374668;
    msg.draught = 0.370604749767;

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
    msg.setTimeStamp(0.202412355834);
    msg.setSource(33693U);
    msg.setSourceEntity(126U);
    msg.setDestination(57849U);
    msg.setDestinationEntity(52U);
    msg.msg_type.assign("NTXHNMCZOULDPSBRPGWESCRSPTBRUUXXIRMLPXAXJZOFATOKNTPPJIHFVLLKAKCGJYJBFJKFO");
    msg.sensor_class.assign("XJZJPVAOYRSKGDEQIYPMQGWHFFEFYLQKCPOFBKKHVGOKGMQPLLZIPJKYNLAXNIIX");
    msg.mmsi.assign("ODHCJHJEMQZVGTTXOBPULLPPVPEABQLYLERCJCXXIVZCFDLVLKCVFONBIHXZNFTZERFUOFSVQSXDRAXIBTFYNTDYEYWKPEJPYNCADVDAHPIDKJMISSLZPQLQRTXQKJEZKQZVTNWWHOHTAMKNRMYKCGBMMTOEOWJIVJKRXQDWSFZAUYHGOSRFUIYUHDGFXEWOJYIEWWJGDRUFAGUIUAYMPHLWXTNMC");
    msg.callsign.assign("MGVWUUSVDEQLWELRYCTKYGDQFVEFMOHYBUQMARYKDDPSIWPXPFXWORNFKIEGCBDJRKETESJQYZXYBCHXSWEZOGDJKXRDHICCWJO");
    msg.name.assign("CSIORJLSTXEHRVUYBBBVECLKQXZCZKEVXROFGCTTLRENJJZDPVDYGVMTWKKVULZXTAFGOMXGTFQPGHRHWLJSYCLCTDYNMBIPNOQUMTZQOUERPAO");
    msg.nav_status = 253U;
    msg.type_and_cargo = 204U;
    msg.lat = 0.86279605651;
    msg.lon = 0.755444971163;
    msg.course = 0.687316399682;
    msg.speed = 0.191884519058;
    msg.a = 0.379545739688;
    msg.b = 0.44490615238;
    msg.c = 0.758050928827;
    msg.d = 0.067874577937;
    msg.draught = 0.894469324586;

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
    msg.setTimeStamp(0.529128768649);
    msg.setSource(32717U);
    msg.setSourceEntity(192U);
    msg.setDestination(20857U);
    msg.setDestinationEntity(53U);
    msg.msg_type.assign("BGKHRQBIYUZZUEXGMBOGPWQVRDSBZXJAEEJPYVLKLTRGCIVYJTJWQOVCQPMRFEYYHLUXQEMTTDKYBSDSCDVHEYGQWEPJWGBPBBUAHNTGOSWRCFEUAFDFXTMA");
    msg.sensor_class.assign("YZVQYMGDLXVYELVMTTUZEKEPUUGGRSSLKHXQZUJFPCFJINQTPRLYIYXWEGWFJTIFCMQZWKTURWNCOGOZLOUBRWPQNBVOOMNNSSSGAQMAHWRYAHWHBBVENCKHJQMGPQZEODUDHNXEPIPRTXLUMJUDFKATKSDJWAFNBGE");
    msg.mmsi.assign("FVHGAFTHRCLTKDOYMFQJNWATJKWTOKGMCPBOHFJGBSSPUFCLCXGHYQOMFWN");
    msg.callsign.assign("ROZLFEJPFU");
    msg.name.assign("SZIFJTNYKWLLVTZQLGUNIUXWROACECKTNHCCCGRHHDJAFWHUYMFBWLFFKXZKNSEWRAGPIIZAPDRVLHZFQARNDSFXXQJINCPJEUOMBGHOPQJPVRPLUYIZHXJXUYSVPTKCNRODOTGGGVCXPBKOBABPDXNJLSDVUQFTS");
    msg.nav_status = 105U;
    msg.type_and_cargo = 106U;
    msg.lat = 0.471800436479;
    msg.lon = 0.913219878164;
    msg.course = 0.0547239035226;
    msg.speed = 0.695662703771;
    msg.a = 0.73106890404;
    msg.b = 0.958574286376;
    msg.c = 0.00241726232763;
    msg.d = 0.781618737397;
    msg.draught = 0.725588967306;

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
    msg.setTimeStamp(0.803693215158);
    msg.setSource(13383U);
    msg.setSourceEntity(19U);
    msg.setDestination(38196U);
    msg.setDestinationEntity(148U);
    msg.id.assign("GNPIDIJKAQPQFXBVAZBHBCOJXUYTZTSUBURHFQZLYNJVBTGHOJQYELRGCVXVAKDWLVBSLKSEQEXMTYORJXCCDWWGPATKPRSIHFZYULTZKZRMWTGKHGTAX");

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
    msg.setTimeStamp(0.769685518348);
    msg.setSource(61861U);
    msg.setSourceEntity(160U);
    msg.setDestination(7038U);
    msg.setDestinationEntity(232U);
    msg.id.assign("DXLUASMPZIWECDJPWWKYLWQTPPZMUCSQKBAJMYWBSHTVCPPZAYBUXYVGQNMKVYJQMBYOFFXNLWFTNADIOULK");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("UHTPRLVCJEQQPSRLJIDRZNWMVPGXNRISRUAZNUBVOPEKFLIVVOWADFXSIHDACHJAZYOQBXDMMSOCIUJUJHZOJTLIWTVEBYBPHXJHQMPFKHKZYBMTMXEGKBXTJXLLKWEQGZATTXUFZNFONTEGSOWBTGQGCNEWAWQMRVK");
    tmp_msg_0.feature_type = 10U;
    tmp_msg_0.rgb_red = 109U;
    tmp_msg_0.rgb_green = 138U;
    tmp_msg_0.rgb_blue = 125U;
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
    msg.setTimeStamp(0.978547280347);
    msg.setSource(61207U);
    msg.setSourceEntity(213U);
    msg.setDestination(32075U);
    msg.setDestinationEntity(87U);
    msg.id.assign("GKTBEUNIZAIYSFXVMENSMZSMKRIWHTURQYOPWBERGFYUWQAWVZNAIVODOQUGJHPSWXYCTQMWCQQTLILHMSADWJZYDPPLDMNWUTEASUXCECRKXOVAWZOFYGMBPITPVJMLNEXHIVXYYOJHVZLWJFKOHISRCSPJDPQIBFBEGFBZUJLRKDOCRPHJNZLYQNCAABYFRXMVPF");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("GQPCZODYKBYVCYSSEIXSMGZKGAFETMDYIWUOLYUHFHDLRGWPPDOMLUCVVMKAGSCDVJJQTULRRRFTBNMCMQPZJYDWGELZIUBAFLPLXYOWWLHFPKEXAQBCVRFNWHXRBIRGENBCJCQFDSKFJTBJROMTPWZJPADAHUQXMBHWBLJDAQAURYCZNUHSGBVUIOEOMNVIXAJWEOKSCZNKKQHSTSZQWTVI");
    tmp_msg_0.feature_type = 107U;
    tmp_msg_0.rgb_red = 134U;
    tmp_msg_0.rgb_green = 242U;
    tmp_msg_0.rgb_blue = 93U;
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
    msg.setTimeStamp(0.692931234531);
    msg.setSource(26441U);
    msg.setSourceEntity(27U);
    msg.setDestination(7873U);
    msg.setDestinationEntity(185U);
    msg.id.assign("OWQRHWPHESPGUYAZJZTHNXYIBMXZMJTODKTZGBXCFHEOYOPNDEYBDJWGLKKZJIDRKVUVMOHGZSPNJWVPKCGPQGCNJMEGOAWQLNYH");
    msg.feature_type = 94U;
    msg.rgb_red = 206U;
    msg.rgb_green = 72U;
    msg.rgb_blue = 70U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.115874479741;
    tmp_msg_0.lon = 0.123387638331;
    tmp_msg_0.alt = 0.408720855617;
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
    msg.setTimeStamp(0.00338368580857);
    msg.setSource(7447U);
    msg.setSourceEntity(40U);
    msg.setDestination(62073U);
    msg.setDestinationEntity(219U);
    msg.id.assign("SGZTTBDSIKIOEAHG");
    msg.feature_type = 95U;
    msg.rgb_red = 56U;
    msg.rgb_green = 165U;
    msg.rgb_blue = 39U;

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
    msg.setTimeStamp(0.623325496796);
    msg.setSource(4115U);
    msg.setSourceEntity(148U);
    msg.setDestination(48419U);
    msg.setDestinationEntity(240U);
    msg.id.assign("PQPOGXFLGWQNVLUOASRZKRYLWYNETQOILYZCRYBXSOTPMXMEOFCZFQNMGGKALRZWAKBSVQHROAXTCHUJNYSPVWJDSFTPDDJGXRISMBKQLMNBAWJUQJVSISUKBKWJIHXYEPLCTRZXJKLNIRUVBANFKYJXBVEQBVZCRGZJOLEOQDETCKWDCIQWFVHVEKYEAUHGW");
    msg.feature_type = 114U;
    msg.rgb_red = 166U;
    msg.rgb_green = 231U;
    msg.rgb_blue = 213U;

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
    msg.setTimeStamp(0.831467377525);
    msg.setSource(32032U);
    msg.setSourceEntity(82U);
    msg.setDestination(21130U);
    msg.setDestinationEntity(5U);
    msg.lat = 0.376840355101;
    msg.lon = 0.726098572796;
    msg.alt = 0.911282920356;

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
    msg.setTimeStamp(0.278293966486);
    msg.setSource(4096U);
    msg.setSourceEntity(43U);
    msg.setDestination(31918U);
    msg.setDestinationEntity(180U);
    msg.lat = 0.207175897099;
    msg.lon = 0.428150072614;
    msg.alt = 0.24703676929;

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
    msg.setTimeStamp(0.361811860763);
    msg.setSource(25118U);
    msg.setSourceEntity(224U);
    msg.setDestination(38146U);
    msg.setDestinationEntity(17U);
    msg.lat = 0.0376825450528;
    msg.lon = 0.926216397741;
    msg.alt = 0.310918075041;

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
    msg.setTimeStamp(0.818027350329);
    msg.setSource(14160U);
    msg.setSourceEntity(29U);
    msg.setDestination(15352U);
    msg.setDestinationEntity(177U);
    msg.type = 122U;
    msg.id.assign("PYCDJVLSGQNKESDMNQGKVLXWHIUSJAFCCETFVJVQRUBRMPGBGFDZMHEZIGHAUUQBCZNELBTPMDTTYJFXMVWXPZYXQRZGJOUKAXTSCOYFMSRRLYXBQSRKWLQNAIXMSVEEWGDOQJFKODWVQAUMOHOSNMW");
    IMC::CcuEvent tmp_msg_0;
    tmp_msg_0.type = 247U;
    tmp_msg_0.id.assign("WFOXTPDHJTJCYLGEHINAVBCDHBOZZOKEGKINBVMJSSHLTZWSBP");
    IMC::Turbidity tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.186579345709;
    tmp_msg_0.arg.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.878179843967);
    msg.setSource(48649U);
    msg.setSourceEntity(8U);
    msg.setDestination(62615U);
    msg.setDestinationEntity(0U);
    msg.type = 234U;
    msg.id.assign("JVPHEUGVMMOKCVWFFWFCMXHMPXPLZNZEALZDGUTMLOYWUPIWHOAGLTRSKDAXUUMGZCNFPDSAYITQVEOHORAGAVNZOQDXDNLANVRIJWYOMCKTNEVFUSGMJBTRVTQZIHERWSHSUNQFMOFGTHNXQPZLPTHJDJEAFGDKUDFBSQWKWJ");
    IMC::PlanStatistics tmp_msg_0;
    tmp_msg_0.plan_id.assign("KPEPZRIDWOLDWIWATPVDMHNMKBKINDWHZZYIDBSRWSFZWJJFVGNRBQPXCPFWDRDJGOLLCULFQUPANHPZRGSRSWEHL");
    tmp_msg_0.type = 197U;
    tmp_msg_0.properties = 159U;
    tmp_msg_0.durations.assign("BXXKDPFTKIMLZUZIWVNFSMIKPAINICNJKHFSERAZGLIIQEDZFXZESTMFLNTWFMXUPOQOGRZYPHPWCLQUTJCLYXGNVADCFTMWCRRKGVBHWNCSOQXEBQDVKJWJHYSCYUVDENVRVIOGHJPOBFMSJBODHAKTBIYTLAHYFRADWMJRYOKXCHUSYFTPJBMCGPZECAUXGNWNEORTJUDRWOZQAXRSEM");
    tmp_msg_0.distances.assign("CFTXUNRKVGSJIBEOEQFKVG");
    tmp_msg_0.actions.assign("MQDADUGAAQVZMBAZTWZGGUBXVNKFVJFZZPISTPCUHQPVOZFFIFZLSHXKYQW");
    tmp_msg_0.fuel.assign("RQODHYVAELZFAFBJREWGRCYPAIJTNWXBYTVQAVHOPEFHMCXATBBKUNKULNNKYTTAAGXLDIKZDFZLATIUSZWHEMDPQNSHMIFWMSTOPMGPWGTIRBCJYRQYBBMSA");
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
    msg.setTimeStamp(0.433691864316);
    msg.setSource(24469U);
    msg.setSourceEntity(37U);
    msg.setDestination(58232U);
    msg.setDestinationEntity(147U);
    msg.type = 27U;
    msg.id.assign("JVYPJEHLMKFDWEQGSEHTBPDBGDSPIDWEEZCXCURNAJIFOWGHAWTJNKHIPUHSKFWGXZLRRWLQPBGXLBMVJGGBCVYCCWLXTTEJYKMMUXMFJDTYKVFACASCFOTSFMICYEPKFSXXNCTQAANPNKDDIHVVEVEKHGMLNTCTQLXZUGOZDUXRNQRLSEQUBOVOHANYIPVJGRIASHUNROUOFBPWSIZKUOOAP");
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.636615513839;
    tmp_msg_0.y = 0.837064127637;
    tmp_msg_0.z = 0.135340789815;
    tmp_msg_0.t = 0.720807541296;
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
    msg.setTimeStamp(0.630656273477);
    msg.setSource(46478U);
    msg.setSourceEntity(50U);
    msg.setDestination(49640U);
    msg.setDestinationEntity(212U);
    msg.localname.assign("OFKJPPHGXETJTIRWWTELTYJGQEHVWEXFYSYQBUPQOYRHJVWASFFUGKECCMRHQVZCEXVYZLXPBFOTHBZWUARIBPD");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("MCFZEVMMNPATGBTAMHTUEJLGVWYVRNRSNQXIGXEOLWLZDBJEQPJBYCHGJPUTFXUYZWDPARUVNISYLKCQZUYNHCRRNKVSEVIUJZPHXYIJDQOKIYYHOLNEDAGMPKKTOZVFEWXRFFBAASAUEXFFCFTBYGKWZEOMRSMHGMJGRNKPWZBXABRFSMNHIHQXDXQIID");
    tmp_msg_0.sys_type = 138U;
    tmp_msg_0.owner = 50907U;
    tmp_msg_0.lat = 0.33131792951;
    tmp_msg_0.lon = 0.710675715234;
    tmp_msg_0.height = 0.711170029628;
    tmp_msg_0.services.assign("TNXBVADGCQDJNDUNDNOZCEPYQDLTESGKOPTBLKEWLORVMKHEKEXHVPVTUKURROHAAHBWPJCMINXIZDAYFNSCXAVXQLWKPQGWJTPULDICVCKLKZASZIWTNVXFFCZNJQBMRIGZHFUHBVIPLJSSSFCGUEJETZXSZCRRDLWUHYYBXFPJFAGKAQXNHASSJXVBWMYGKYEMRFQEOYMWQ");
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
    msg.setTimeStamp(0.681002181416);
    msg.setSource(10809U);
    msg.setSourceEntity(193U);
    msg.setDestination(217U);
    msg.setDestinationEntity(50U);
    msg.localname.assign("SMCXUIDLGLORXWHCJEBYYSSEZRDFQDXBJDOWNDNJVMFLOQCIKRQFGYYEHRESNXHCLTHJBFVKDOPWALKRKGJVZGIZEABRAZWWTCSLQGAQRABMODCYQEPKKCMUTONBAYRZKQIMOFMSEHFYZPZLBPSVIRNXLQLHFNTDWHADWQOGDYUIBEMAKPYLXQVIKAUUNINXEPVIXWKVVN");

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
    msg.setTimeStamp(0.687780542446);
    msg.setSource(17058U);
    msg.setSourceEntity(65U);
    msg.setDestination(2986U);
    msg.setDestinationEntity(140U);
    msg.localname.assign("AYDRLZDLFTJDSTWUIENYBGCCSKHETTZVSXGZIFKBCJXATEPRUWEGMDQOHBWHJZKCQMLXPINYATFEIDLGSOFZWXANVQMERUIVYPOQMLKORITEXHXCNUMCGLXNSVZOJSQAFWKVRRBZPSGUSVMEBBUCAFOLGJILNCIIPFDEOJUQLFNOHYXITBYMFN");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("ZOIHLVUVHHPLXGQNMNMWJFFDDMIJLXBMRVFASVUJJJGZJRGGFUYEVFLFWCTIPKQRZETKHIVPPSQPZUPEOUHMUTLAWACZNNWCBWKANHORXZEBEESPHCVMXKCSUKCNXTQTSQLLDSGGEBVCQZSBIAFXJDXGFBDDTGAYZYQ");
    tmp_msg_0.sys_type = 142U;
    tmp_msg_0.owner = 31496U;
    tmp_msg_0.lat = 0.370409808838;
    tmp_msg_0.lon = 0.576324438111;
    tmp_msg_0.height = 0.782031800083;
    tmp_msg_0.services.assign("LXPBKWLWADIOSYZASXRPNXQUAXTFDBSFKDZWOUAVTECUUNW");
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
    msg.setTimeStamp(0.732506911865);
    msg.setSource(56815U);
    msg.setSourceEntity(33U);
    msg.setDestination(61913U);
    msg.setDestinationEntity(116U);
    msg.timeline.assign("CJVTNXWKTYXBCPJYOZBPKXIRESKMVEMOBLCEHSNPDKBHSJHZJIIBYLUXZVRBJYDFNMRGESDESGOALCNOP");
    msg.predicate.assign("DTLDNHEMGEJTRPPILK");
    msg.attributes.assign("HAGRHOFFRCWAYBBPJZDVUGUTGQBDSIXDGYKHAZBXZXFFPTTBMEVULWZYLJYKMVDSJIWNZJESIPOQTOCXVKWDXMXZBNRENRAUNSRMPQMRMLFXOCQWFHFTKSTOJQIIWAOVZFHLTCKVIUGAAQQNWYSQOCELMJPIGSHIRBBNXRCOYPDYSNZOMUHHEDKYPWUIYHDRNEVLSFAQTURKJCESEZMIDPGBYTAWLGLFVKCCVJM");

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
    msg.setTimeStamp(0.863055860782);
    msg.setSource(56685U);
    msg.setSourceEntity(245U);
    msg.setDestination(59506U);
    msg.setDestinationEntity(133U);
    msg.timeline.assign("NUYSJJZTBLFISSAAGOFHZIGBDKFWAUDXVPKLAPWNVVJDTHNMEIFLAJPSMYBJZYQCINXIHBBFDTQCRJVULQCYZZJGRITAOPZEITNNMGVLUWGEFQFOKYMFQKRLVXPZAEWIKLKJUWJDOTYMRMRPBAOSOFXUSMHYXZQVTWDUFGEOHSQSKNWWPCBBRNUBGSGERNTVIZRCU");
    msg.predicate.assign("RNZKNFFYRXLUYURBKRAEOSHPCJMYUHQHZSVPZUWJMUNZVMBRDOGPVFTJHLNTMAEWQERKARTPSUBLSIKLCSWGFAEHIJOENIAQBDMCWSXRDICMLLZSPDQJSNEFOBVZHWOLXIYGARWIGPOMCZFTQFKDPCUQJCCTNHKVRIWTTXSXFVQBP");
    msg.attributes.assign("VEVSWZNCCYDQTYIPRXEXLCTQZFTBTZDLBAEZLWDJSO");

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
    msg.setTimeStamp(0.19651816741);
    msg.setSource(9278U);
    msg.setSourceEntity(13U);
    msg.setDestination(11735U);
    msg.setDestinationEntity(112U);
    msg.timeline.assign("TIXOSVCEXTFNYIYHOCCGBAXFQVVVAWARMDIRAUBLSXDBYSFLLPZSYQFWBMGWUBJYLYUNTOSDBGMUYXZJMGWCDVQGWORCCUNEFSMDHJPIVHMQEPKPXZKKKJNJDOTFSQDZRACMGTWUWUN");
    msg.predicate.assign("MFFLLCZVUSEAYKISYTUBLECZIGUTAWGQEFMOJNGJGPUTEMAZQLKGWLSOLAJJRIDRRZJVEWASKZIHYCJXILNXNOAMXPNTDUANJIFIDJXEYQWWCKQYUDXQPNBFORKPOWDUPSHVLTUZCGTMYYKPCCBHXHVTVEOPBHPVBSVDGSHFHOQSDTHCAEMEWNZRXYBYHMFFIBZWNMYKMGBRWGFOQAECRUXXVCQITRZVB");
    msg.attributes.assign("DFCGWRRGSQVOWWFZKKLRXMRXLPJGIIMSWFPYDJNQRPKICKJJMUQNDZXGVTLRHXEZOFJDHUQASUUODHCAATAVSBGEFDRIIBQPXDXVCKUJGVQUTAEHPTNMWVMEQEZLEFVMKAADPICWKYFEHPLTIMJION");

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
    msg.setTimeStamp(0.440206102103);
    msg.setSource(3189U);
    msg.setSourceEntity(239U);
    msg.setDestination(20520U);
    msg.setDestinationEntity(111U);
    msg.command = 173U;
    msg.goal_id.assign("KDBGFKUATRMWIIWANTJS");
    msg.goal_xml.assign("EMPDCQJTMX");

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
    msg.setTimeStamp(0.069274820921);
    msg.setSource(40159U);
    msg.setSourceEntity(182U);
    msg.setDestination(51519U);
    msg.setDestinationEntity(195U);
    msg.command = 74U;
    msg.goal_id.assign("UJZCORQPQDVXIMCCEDYUBVUBOCXYXOCAZJNEORZPROKKSLWEQYTVKJYWEHFIRGTQCHQPJYBZBWMDPLLOBTHIEVBAUAEFZQBTWSJCWKCSHQWBURMVHQSGTXDVWIGKABYEYJLEVLKZAFJHDUKQUIFNOSIM");
    msg.goal_xml.assign("XCBTXDHUSYXPQUZUTSSVKIGRRTGCUYFNVZACFRJXBQLFAVZVSXENSVQKZWMYVBDCHMOYZIAOCDHEWIRPGEGSRILNRQLBZCBGSVEVIEAZBCXXECRKKFOGBYPBFQFJAJMLEJMHUVTAFEBLYLEWOGGPFYWZTORAJQIWMUWDNADWMHS");

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
    msg.setTimeStamp(0.290173495982);
    msg.setSource(38854U);
    msg.setSourceEntity(206U);
    msg.setDestination(5114U);
    msg.setDestinationEntity(232U);
    msg.command = 47U;
    msg.goal_id.assign("FMUCMSOWFLIBAVVUZEOJPRQWARBNHMXCXUAUCZMLFHYDAFILDSSTQVQGOQIPDJEYGPMKXZVRDYNNEZWJWANCKTODOHBGGMSIOOMBFSSTHJKTNBHUYGIGQVUSHEYNUJWEWFNDRNZTCPMOKEWVFWEYKZXXLHJQQAVCGDWVQLYSIXWGLIPGXRSNXYBYCTFETZX");
    msg.goal_xml.assign("ZGTPWNOUSZVLUXGGIPXCNMQMBLMUVUIDMEHMOLRKTGNLWQUGPDISQCWKFVTBHEPBOESQDCZJEJNZJJPQBSXJWDXLRCFVBTKZOCCFNCPIZLRYNAOLAOSMPWQJOMXTYTAKYDVCYOAMDZAFIUWEHKQRCRKSSKFXHFYNRWMTRZITWRVDLJIYSQPVGMGZVRGQUKYEXAFBUJHK");

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
    msg.setTimeStamp(0.972519967376);
    msg.setSource(59992U);
    msg.setSourceEntity(232U);
    msg.setDestination(1168U);
    msg.setDestinationEntity(46U);
    msg.op = 238U;
    msg.goal_id.assign("EQJSKPUIQQNTGBFOZKDSOOLFXANTROMHXCGNWBQGZJRAXPSUHZBTJZOWTIEELPLJHCCWUAXJMLEEERZZDLQLNDCOACOMKI");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("UQGUMNTVAPPFWJZRBOTFXJYKIDYHJXEDWDYINYSDU");
    tmp_msg_0.predicate.assign("XBXHCRSXITOYNGHGLDBHGMGIHZIKFNTEYPYQLJZNPQTJGIWQQJDRFVBVIMEBYLAQMJTDLZMWQMGFXXEKPSRKUCKMYTKWLOBATCULPBUCFFBJOLOKSHODBQFLSOFMPTEDFZRBFKWQCHPECKIVVSNKLZUEWRTQ");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("NKAYNSEWPMRIWBVEXNTUBXZTZEXRDMLSCHZUHZFDVUONFHYNTBHVIWJUQRFIQMXCDMDGQCLMSVCATQWKQRILOYXJZYDELRPHPXXJWSKEGRFLGRSABSBDUZRZMVPSFBLPFHRKDMTGKIFJNTVEHESQBCCJNRDAWIQTYCGPZUGNGKUHAEAWXKJBYYWDOZJEZPMQILLALTMVDPMNUOVIBQCGANIKVGCOHPJKFSVSFBEUOPI");
    tmp_tmp_msg_0_0.attr_type = 210U;
    tmp_tmp_msg_0_0.min.assign("NQGTLQAZXGBPRLJCUBTXRVSKMAIDTIVKWTUGOSMLXXHLUKTEJBPZLEYZYKPFWURPAJEAVWNJQKSVJVTSPBDOMZZBBWHTGAMSDXWCKRHJGCEMXFLUHHLOSCVCMQNGTMXRFUDOAIZFLDNSGUZWAWEYOVEFLDJVNYTIMMVDXSEPAWAWOQHRECHQLWYVHUYKNBGS");
    tmp_tmp_msg_0_0.max.assign("INJNTGNCBBVSRTINZFLXACHFRDQGMYFHGHIIEVCSUSWXKYEFWKXGJLUBQZASDQBTSBRLQCQULVQIYDAPHFIZMWZOQJ");
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
    msg.setTimeStamp(0.690509909859);
    msg.setSource(53159U);
    msg.setSourceEntity(193U);
    msg.setDestination(4137U);
    msg.setDestinationEntity(45U);
    msg.op = 5U;
    msg.goal_id.assign("LZUWLKTEWFMSPQPDTRWXEIZYEIBHAMHOHIEVYPGVBHAFLIECMNIEFWOWFSCRG");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("UPRQILGFPOWNFUNPDJKFALOTVPXBQVSRTISDAMKRZZJCXWYGGYZSQZKRCYAGBCVQMCNKPWBSUYGDUABIW");
    tmp_msg_0.predicate.assign("OSAYXCHNROAPI");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("IXTSXISYTGSFTLKNYHGSAHQDLMBAEHQHLIZOZQEJGFCNGGJQCRPAJNTYUAUEFLMLBITCONQQUMVGYQTFGKRVIAMKKTTFQXMJOCCLEBFPULLUYPVPXWUMEMNDRPNGBMOZNWXNBHXKBTMSFOCYRRADANSRRHEBICAHPVKVHHKE");
    tmp_tmp_msg_0_0.attr_type = 169U;
    tmp_tmp_msg_0_0.min.assign("MFYYOJFHJZCIRNZXCUXKXUOZJQBYIBLGCOWMKPUKRJKJUUHPPSBIALCLTSNBDZRVCZPKEQEGHWJILGPZDCABTMQQNWIVFUXXJSATQKNQFOLJSURIBGGSDZLHMKLPOGRDXITKYZGVAVYYBVFTDFNUDRPXTDCOEOJOW");
    tmp_tmp_msg_0_0.max.assign("UHWUHPITKYTYRJSPORPJCFKOXDUAHFLITKZAKNVSYCVXUFDXRCMOSNQUMTXPBPPGIXFBWCDQOWLOSXJMFTZNXRQNVMVIVPAPAGAYGYEVAELRHGGYLPBISSVBOBDVNNEMDNDTZVHRNJWUCEWZVFSLBLHDYYWBJPXKWKQJTBCEJQIGSTDGDCHLKGLAWOGMOFEETQRWRQHKIAMOQMNCBUZRTUMRKLUEHSZJCICAIIEGFQJUXWYFELJBOXSZZ");
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
    msg.setTimeStamp(0.393241039727);
    msg.setSource(26214U);
    msg.setSourceEntity(119U);
    msg.setDestination(26654U);
    msg.setDestinationEntity(201U);
    msg.op = 218U;
    msg.goal_id.assign("EZXLBVIAHWGYNUQFQWOMWVAWPQAQTIZQZMIDYSXUFLUOSGJLPLVFJHLBYGOLPAVHEWIIRNWMNCPVE");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("SPSLTXWTYNGZNVPQMVFBNIRABFELRYOVOWNJUWGKHCPBUWSGXZYMCZWVKHDQXDMKTXRZMUWLY");
    tmp_msg_0.predicate.assign("SKGVCYRDRUEZXJKZKQFMKGBJAYGQIXWLUTVYSZBPTDIYQUQMHHDYKZAOITELIWBXVAYSSEUY");
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
    msg.setTimeStamp(0.403801148726);
    msg.setSource(12768U);
    msg.setSourceEntity(121U);
    msg.setDestination(14020U);
    msg.setDestinationEntity(188U);
    msg.name.assign("GGKZQBOJXMEOWTIABLONIXGZIBWLALFRBWATSQQISRHKKJSOBXGJQWBXGNCUBVEUEMCWVRYLHJOKSRFSMMPFENTYBOCHBDRYYLVUYZRWUQQHSGRVDTLGOGBCJGUNZHXJLCJJKPIFQCVEDRDDSKTKCEKZVQJEIYXMILXRKFANOPUTXMTWLPAPZYPVLMDOHAZCMXYGMA");
    msg.attr_type = 80U;
    msg.min.assign("MRNSXSWCFYOPAFHDFQLZXTEHFOODIGAQKNLDPQFEYP");
    msg.max.assign("WIFESZMEXEMUKMWHJVHYDIBHPWAGDPLSNUEHHNGAGTOCIQWRFHLHKPYZRNMNGGZSN");

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
    msg.setTimeStamp(0.896042877737);
    msg.setSource(20024U);
    msg.setSourceEntity(198U);
    msg.setDestination(34625U);
    msg.setDestinationEntity(29U);
    msg.name.assign("FQWOAQOGFAIJPZJTXPSTNPVGDBGUQTEFBRXVLYKUNXCTBWVSWHJEDAUAEXHMODZEJSTWHJIKWGHSFQDDINVIHYLOZGKIFIBRRCBCMCKDPXWNKZSOIKLPZMLEGUOSYMJQJDKKQVTFBVOUMFZVHUWIDVOKRTL");
    msg.attr_type = 223U;
    msg.min.assign("RFWXTTRVUBFSLEIKMGCZYJBMMBTIHB");
    msg.max.assign("LFYLFDXFRVWGYNDPXXHEZFJUCIYBTORLSXUIHDDLZWTCXLJZMMZLOWANJRQUKBFAPFUTRGUEVTWAHIJASIJLKGMMKECZUYYCWVKIKIJJKGZCBKEPFBYOBHCXNHJBQREHJTZXQFCUWRDEROOMTCQPVNMQCTYDSDBWVPUZOGTBYXMXRDHLOSSPHQAFZRVIDPIYSROFKZEGDNHPGVMGVXHALJEGQAWOUVVECNMKPSIGWQUKNLNBISNNWSMPESQBT");

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
    msg.setTimeStamp(0.519144544164);
    msg.setSource(26513U);
    msg.setSourceEntity(107U);
    msg.setDestination(57555U);
    msg.setDestinationEntity(174U);
    msg.name.assign("BZGIHKCSGQKRWRMCXXQTFZVPPSITVEJXIUTHABAUOURTHXFYQRXPSMIBVYUZGMLSFDKASWCDLJJQDTNHHQROFIOSG");
    msg.attr_type = 154U;
    msg.min.assign("YKJYXJGVLQUGPQMLBTMTXNHQQFQFAEPPTXWDDJJERTCNNYGCQELIOUWAASZVRKARHKBJHDWDTKKBFVFPUPFLERZIMEOHJIOUWOXARYCDEMQIMLJQVWZSWHBSDRDRZYRAILSSVYZVUFWGOBSPOCXCXHNM");
    msg.max.assign("XNWQPJEDKBQVWDRUVZQSWHWMRFKAMVLBIFRLXKOKJGVEISHMVWUMODOBZLDPVGYIYZTFAHGYQKMEADHNSYYMATXGQAYYPXVVLPJOCRJESJFTCPEWJZGLFOUAXFSEQWBTEBKLRDDTGALCPGILFNCZKJBCWDQWCPAZNHREM");

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
    msg.setTimeStamp(0.154916588096);
    msg.setSource(17006U);
    msg.setSourceEntity(196U);
    msg.setDestination(7383U);
    msg.setDestinationEntity(87U);
    msg.timeline.assign("ODJVRVLWZCNMFJFLKEUDOKBSZYGYYPZIYDQFECUHOILNFVYATPTISSVXNMYOSRYTQKHEGHWHAFDDGLJGBNOPRXPEGCHZHLW");
    msg.predicate.assign("UTSAXVRLZPNUWXTYJVNQIMFXKUGQJXYBTOBAZVGJUCEEPKMRCIGOCDPFRFORALXOJYSGKDZIOTZWCWFVLTEPBYBHBIJLAQQSIDTCIRVEMTUWUZHQOHJXWKEDEFMHHVUZDEVNLNYWLIDSYPHSMPWFMKNZ");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("CUKHFPBMAHKQABYYWKGEURUHZDJNQZSRSSWBLZWHJEMSJGDZPJNMLX");
    tmp_msg_0.attr_type = 96U;
    tmp_msg_0.min.assign("HXGTCIAWXTDFGVFERLUJHJVKLMQEZMZDMNDPBSIRAABIZJWLFMEVGBEZBWSRNOXIHGRNHSZFHHQSPKDYXVKAULOHLZPSUNUUEFUSSPIFNPVTMGGVMBXSCULRMWHTMOFZTNCPTWDCACRYFCCGWQOABMGJNBWJRQBQCPLKEEYURPWULTKQXDPNSTTGROQEIXXDAMJOYYQVSHYAKOUIYLRBKEVQLFVOKEHZXNWBYTYQOIFJIKDCNJAKVWXGJIPJD");
    tmp_msg_0.max.assign("RXHMZINQUVSZYHSAASBVGYQWHMPYTOROGDMCGVXRKEOLFGGJJZBICQVSVUXKMSVLJQTJRFZQEIPLGHTWHISPCQTNKXFMXAWOIAAKBRZNXKDENHNAUYIFDMJBVJWQHYOREKADGFZWPHVGGFDQDIEFTCTCVKSYFCWCDCUZNYPTWONXZ");
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
    msg.setTimeStamp(0.395437277177);
    msg.setSource(39447U);
    msg.setSourceEntity(133U);
    msg.setDestination(11589U);
    msg.setDestinationEntity(134U);
    msg.timeline.assign("MCQIALKDYRAUSDRBTTQKWDELDNPNPETQRGOTSMXASNEHBCZCJCINKPWLXYTTNHAWDAIAJWMUQHYCYOFXYOJCVBOXGYMVYFQEGGBCTHZUWVSFMQVNIPUKZUKBXCGGDZAYMOBSMORFGBPORG");
    msg.predicate.assign("VHFUUXFIDQGZZOKDPKLLXYPLPMSNPRYUWCHCCUTWXSWNYGYFQCOTNASTNZVUISMQCRLTPQFBOFRJZBIIBTZOXTSJCTIJUXICRYHGYAIMVAAPKSNRXYPEEIPTRHXBBECGMCJBXEQNDQKYIMUHUDJJSFNAZCYGMDABIVSJJBJAEQOEWVLLQVWOOWGGDKKLQBVWTSEFBMGKMLE");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("VLCPBBNUNVXVITOKXPJZWUSDRNDVGRQDYUBTBXRBHSZ");
    tmp_msg_0.attr_type = 95U;
    tmp_msg_0.min.assign("KHEJRUUZGLKTOVUNSVUKQNOVYZMWMDAQZWNCEICYBNNVHMFADQXYWXERBHPXAHAJBQDKPSZCWJGEDUSTQUZULGPAMZOOIOZQHAFESXYPRHTNAMGASJCBMFPTCQOGYJGYKSSEXPWRQTNFIOEIDRKVWDIFCHHVRWFRXRPMITLXGBSJWTDTPDTXZVHJZBLVX");
    tmp_msg_0.max.assign("SEOVNVFMKSBQALPOSNLEPAULJPYGBANXPUIUHOEWTFWNVYJIFKQERVZCIXPFSGLCZGYHEMKFZEQRUVGMXWUQDYMLDAIDTBTTKPYXYJYMPQSHIVFSUZDVVRWUMEDOCFYXOKOVVJWHPPLRHEIZUBOLCLWWRMZWXCHRKCRRZJHIZHGBKXJAUBACAIGJZMHBGISMADNXSG");
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
    msg.setTimeStamp(0.207920986429);
    msg.setSource(19812U);
    msg.setSourceEntity(29U);
    msg.setDestination(49936U);
    msg.setDestinationEntity(87U);
    msg.timeline.assign("BLDREYRWCJXZVMPCJYQKZYODHERLTPLSAZNIXSCHSGAPNECGRWUWTYEUQAUCKHBYATVLQYEXDGPLXHWTMDVJANVOXOVKIFSTBGZAPNUKRMGJVOFH");
    msg.predicate.assign("IRSNKIBHMLFHCIQYAVTWPFMEUQPNMYRBXYDHMBJAHKOKKDACDGDVDLCLFPFGCSWURYDTKNJJAXUNFRZBFQCXIIDWXGBVZASHRURJHOTXXABNFERKGQPJSCZNAXVXMVWLWGCUPQIJSZQGDNUYMEMNCDSGVVSPQUHHUIOGTYLEIQPWYOGVVWHMXU");

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
    msg.setTimeStamp(0.878147325872);
    msg.setSource(35901U);
    msg.setSourceEntity(149U);
    msg.setDestination(23621U);
    msg.setDestinationEntity(6U);
    msg.reactor.assign("NJDYVHKBKHSDSQCWMCQIFWICKIPGZIEEKYEHSXNBMXJXQJFBZJOTUKLQYCJNVMGGJSTFGCSBBNTLUVMNGGEVGUPEZJYAPUH");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("NUPYYIAPBFZEUMSJNOFJMMBXMEZWUONCXXEFHFIGPKYIZKTUWTGAEXFVOKSHKWZIRJDUZXUUBPVUUTPEVDZZAABXAAQEMIQKAHCBARA");
    tmp_msg_0.predicate.assign("HSPYIUEIRDIMLHYPBACLBFKISKWXRMGBNJRFIWYDOVVNGEBQAAPBCJCFUETCINOXHSYPNWASZBSXUDWZAJGPUYQMMNNEFGZVTNQLZVEHAMPUISS");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("NUCMMVNVBYJPAQBUFBDTWFVZWMPQOZZWRKUDWALQKXNRMEPWGRWMXEYUHYXTUSLSFTJAXSNSUNCOOLYI");
    tmp_tmp_msg_0_0.attr_type = 80U;
    tmp_tmp_msg_0_0.min.assign("QVEWORHHXRFMHAAUZFMQWCVKWGMIJTNCHOCCSZWXVTYSEBPKTBXGRHYBXFCMHWLGXPBGUZFKKCPOPNJLDYAEZINKBOOPYUZIEEFZEDHURFJVPGIRQCXDRQXSJIIJPCWNWFMEUKTMDOESQQASARTAYOTDSRCVYWDMD");
    tmp_tmp_msg_0_0.max.assign("NBZOTSTUFKSLCXNCYZFRMDQMNSCFOZFDOJAYCEBPKNWHQJCKXHJLERFNYODWJGXIVVQUYIUAHDLQPXXRRBABIWWVRYPRKEMZECYLIFOWTWMZKUDORDJAGDJIZPBCEAKSOQDSYPLIPGDWXQUFRDLQWSVTLMPBNXHUMCYFSHKHWNUVMVZFMLSMHBBGQXIIOHAOJFVESAAGVTUJXWBEVRXQYTJNGTCHTKSGGQ");
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
    msg.setTimeStamp(0.790428424156);
    msg.setSource(53058U);
    msg.setSourceEntity(241U);
    msg.setDestination(22925U);
    msg.setDestinationEntity(25U);
    msg.reactor.assign("YCLFMHPMNTDDPFXYTWBNUIEOKGVEPZJXHOHDQUHULHURKDYBBVYCVAWXWSWEQTPNEBFDPXSFLZTGVKGREQCKCSRGJFNVHIRLLMJTJAQJCCWMAFXNGCOYOGTPPAKUZXRHURRNWRSISMAQSWYDBMEJNAQARFBLWJCVZVKOGWYSZC");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("PKKJGWKDUOFOCCIJCAPJAHLTZALIGRWSFXIOQMBNAXGGQNOLSKVHAXBHSFPQQCMTPUUNUMKVZJRXZTUFNAJCXYEWGTDOLWQWZNIGPBLPMDMDERJOIMPESCQBQVLSTOOBMRWVHCJEVSSJZIQM");
    tmp_msg_0.predicate.assign("RXHIZVFKUXGEVAMHSMGHKDDGNLYSTHMGRLDBGXZSHRRXGJNWJYHNWAWUGXPPDBCPLVYJZIHMIWUHVFQLOEKIKFQJSROOVENUANMDBYOMFYUFUNGDUZSLYWNFBMWJNETJE");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("SCURZUQQFVTLDYUHXGOJEUYNVNXGPBIIHBOZCXQCXEQWXVCJIITMPWQWPSDIHDZZMMTJKMPSYIRKFQENBDJOXYDGLHTAMGYXHWYZLYKWSLQOFFLOEVAUDXBAPELHVANVSJDOWTFJBZBNWXUNEHNVPBFEFJCMMPRVYKTRGLRSMYFDOZCBKCVWGKKAMINJKQGDEQFZLNPRLBUAJGIIAISRUFHCTZUTEAHZTGNXJCWRL");
    tmp_tmp_msg_0_0.attr_type = 134U;
    tmp_tmp_msg_0_0.min.assign("AEXVLXBHHBCQXZPQOVGMNKFZITDFVDORPETCBCSFNPEHSTJSUPIEBESMEATLQHHAGUEGXAQWDONBRIEGIUCSCDZLNTCBVOTRXILDKOOYAKVQFXXPWWCFDDDZJCOUJGWRXAYLCLWJQZSVQYGMPTMJGLCKLQPYUVZRRGNTQSOZIAHYKFZINYNHBKKWMRNRAMDHEUYALJUSIXBNVWFUIGMJVMOKPFSPWABMVKJTMBPFUWFRNGRZ");
    tmp_tmp_msg_0_0.max.assign("ASGPMBZMTBJYWF");
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
    msg.setTimeStamp(0.171993589111);
    msg.setSource(24905U);
    msg.setSourceEntity(223U);
    msg.setDestination(45242U);
    msg.setDestinationEntity(75U);
    msg.reactor.assign("IPEIFIJZMUELKJSTHCVORFONKHQXXZPTIYNKTFURLHKTXQFHBWCUDMXONNGLSUEJVTCVENZDYSKIKDCNBSLTSFJMDSOFISCZWBTAGDGLWAIWVJYPWHLVCGOPGIBGVCLMLGDYEEZPGKERUDASQQCBKNWLCDJFQDRLHOIQBWAURMUMPFXYEXRBAZDJOVYJAAJCIQXZYMWTMPBGOXFSVMHZXNHKNJAYNWPQGYBQPVVBHRZER");

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
    msg.setTimeStamp(0.643913941842);
    msg.setSource(40055U);
    msg.setSourceEntity(192U);
    msg.setDestination(40052U);
    msg.setDestinationEntity(211U);
    msg.topic.assign("EGGXUCPPFNCQSBATOIGVHTFXEZBNQQJKLNRLSERMNSOSIAQTVZYPTXXUJKRJXPYZIMDOATKMWJETZXIDNQWCZCMDEFHRARWSJDUYZQHXGNGFPOLBNUZDFMCCBMRAIKKSZLRWPDRABRGRPL");
    msg.data.assign("IWBYTNPTYTLFXAJXAOWHIOOXAOYMBEDUEUEBVYCRLQOKGGAKPAVSQQRDYDQRKZLVLWZJXFJHNCECDERMSNPKDGLRCKUSXHEGNX");

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
    msg.setTimeStamp(0.090167477416);
    msg.setSource(30863U);
    msg.setSourceEntity(155U);
    msg.setDestination(24434U);
    msg.setDestinationEntity(213U);
    msg.topic.assign("HHCTUJEQMPDSXZVGZOPFFCJDODPGWPLJPHKTEGGAKVVLLRWXVKIXNZOEPZILSLMUTJGRFRUQKHLYTMEZMSHWAIGEOHLJYUKUKUTOMHOWTELNNGCIBCVHBLYSJQXBPZPXFYRXDNRZTXJDFNINWDIMY");
    msg.data.assign("CIFMHEJFLSWRXINFIZRICFNLGCZKKKDDHMGMWN");

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
    msg.setTimeStamp(0.333724137169);
    msg.setSource(59226U);
    msg.setSourceEntity(186U);
    msg.setDestination(39517U);
    msg.setDestinationEntity(219U);
    msg.topic.assign("MBYLKFWMCBIJWSOXJVSCAYKHWNSQUKXNWGLBVTBSZIXKLVTPCHYEJETANIZBXDOAUOEZAKPQMRKIADJGCWGHVGCDHXPLHAOJFNIFXLUNRDQQIEUTUULFDCPHAOXTTQTLOEQFJZUQOPFDRGYBWSINNBJCGWETMVBCRMPUSMYTFORUNVEUVFXLGHKGKLPMASONQHLEDBJVIRCCWVYJMWMFYQEYGSXKRPZAEZITSMZJOWVDAFRKHRDDZIXGHPRY");
    msg.data.assign("DBKWQCEJOVGZCDQJEIACWUVAOBHXROMXGMFXAKVHKXNVDTPYGLVQVIENCZSWJYUUWSYEIHLD");

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
    msg.setTimeStamp(0.0688625613511);
    msg.setSource(62671U);
    msg.setSourceEntity(100U);
    msg.setDestination(4464U);
    msg.setDestinationEntity(248U);
    msg.frameid = 48U;
    const char tmp_msg_0[] = {-89, -30, 23, -15, -64, 67, -48, 111, -55, -17, 27, 80, 119, -88, 68, -48, 2, 58, -49, 83, -36, -84, -27, 65, 126, -80, 91, 69, -51, 111, -113, -16, 4, -93, 27, -99, 83, -34, -126, 45, 116, 28, -93, 58, -119, -20, -86, 64, 82, 30, 98, 78, -107, 114, 78, 47, -68, -35, -44, 40, -29, 72, -53, 90, -122, -110, -38, -92, 116, 56, -5, -123, -101, 39, -14, -5, -50, 92, -1, -115, -44, 54, 123, 58, -93, 43, -80, 6, 73, -62, -107, 58, -84, -104, -44, 44, 94};
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
    msg.setTimeStamp(0.168707863511);
    msg.setSource(48273U);
    msg.setSourceEntity(100U);
    msg.setDestination(48481U);
    msg.setDestinationEntity(242U);
    msg.frameid = 237U;
    const char tmp_msg_0[] = {-41, -44, 8, 86, -90, 122, 44, -18, 21, -80, -23, 94, -50, -63, -32, -52, 72, 10, -12, -15, -9, -6, -93, 110, 37, -43, 44, 39, -68, -105, 6, 87, -114, 110, -99, 79, 89, -43, -105, 124, 5, 1, 59, -42, 32, -71, -85, 48, 94, 92, -54, -69, -66, -106, 32, 93, -39, -110, -27, 91, 97, -128, 29, -2, 119, -127, -71, -79, -68, 24, 67, 86, -61, 110, 95, 110, -69, -73, -114, -78, -74, -66, -15, 125, 76, 95, -51, -58, -14, -92, -74, 7, -45, 35, 63, 52, -22, -77, -34, -29, 2, -38, -119, 11, -11, -35, -74, 59, -77, 62, -41, -14, -5, 104, -95, 54, -68, 85, 87};
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
    msg.setTimeStamp(0.865778620301);
    msg.setSource(31701U);
    msg.setSourceEntity(63U);
    msg.setDestination(19083U);
    msg.setDestinationEntity(138U);
    msg.frameid = 201U;
    const char tmp_msg_0[] = {-44, -85, -11, 102, -75, -54, -73, 1, -3, 2, 57, 33, 14, 3, -12, -32, -17, 27, 102, 64, 40, 29, -50, -68, -47, 97, 80, 118, -72, 42, 21, -98, 108, -15, 27, 36, 73, -79, -92, 101, 104, 66, 104, 58, -47, -94, -4, 25, -5, 102, -55, 18, 99, -105, 21, 106, -35, 116, 93, -56, 76, -54, -103, -4, 109, -75, 26, 10, -17, 96, -75, 92, -124, 49, 33, -113, 37, 59, 26, 12, 32, 125, 15, 24, -108, -125, -55, -80, 36, 53, 120, -71, 31, -109, 50, 45, -42, -90, -74, -75, 65, -21, 106, 103, 57, 104, 108, -59, 96, -59, -12, 66, 55, -82, -82, 34, 2, -30, -40, 57, -116, -88};
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
    msg.setTimeStamp(0.837782387855);
    msg.setSource(3318U);
    msg.setSourceEntity(86U);
    msg.setDestination(57103U);
    msg.setDestinationEntity(48U);
    msg.fps = 232U;
    msg.quality = 231U;
    msg.reps = 181U;
    msg.tsize = 61U;

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
    msg.setTimeStamp(0.972148428552);
    msg.setSource(14387U);
    msg.setSourceEntity(228U);
    msg.setDestination(1721U);
    msg.setDestinationEntity(243U);
    msg.fps = 47U;
    msg.quality = 188U;
    msg.reps = 63U;
    msg.tsize = 105U;

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
    msg.setTimeStamp(0.0986289076899);
    msg.setSource(56069U);
    msg.setSourceEntity(195U);
    msg.setDestination(37077U);
    msg.setDestinationEntity(6U);
    msg.fps = 71U;
    msg.quality = 249U;
    msg.reps = 130U;
    msg.tsize = 226U;

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
    msg.setTimeStamp(0.882329113553);
    msg.setSource(21282U);
    msg.setSourceEntity(30U);
    msg.setDestination(26255U);
    msg.setDestinationEntity(19U);
    msg.lat = 0.640671522133;
    msg.lon = 0.178714763604;
    msg.depth = 161U;
    msg.speed = 0.946397174261;
    msg.psi = 0.522776394698;

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
    msg.setTimeStamp(0.994059006846);
    msg.setSource(35459U);
    msg.setSourceEntity(198U);
    msg.setDestination(32470U);
    msg.setDestinationEntity(207U);
    msg.lat = 0.476614851113;
    msg.lon = 0.466863501004;
    msg.depth = 39U;
    msg.speed = 0.911814208662;
    msg.psi = 0.874895222346;

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
    msg.setTimeStamp(0.0747901527154);
    msg.setSource(50288U);
    msg.setSourceEntity(227U);
    msg.setDestination(61065U);
    msg.setDestinationEntity(225U);
    msg.lat = 0.151811302916;
    msg.lon = 0.295563016826;
    msg.depth = 79U;
    msg.speed = 0.00532203644403;
    msg.psi = 0.279464886125;

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
    msg.setTimeStamp(0.828049159593);
    msg.setSource(34443U);
    msg.setSourceEntity(207U);
    msg.setDestination(47598U);
    msg.setDestinationEntity(222U);
    msg.label.assign("KJOIDRNMBGZTWGVC");
    msg.lat = 0.681369486638;
    msg.lon = 0.906441228717;
    msg.z = 0.696258722893;
    msg.z_units = 145U;
    msg.cog = 0.887193708079;
    msg.sog = 0.0349975555249;

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
    msg.setTimeStamp(0.756713718698);
    msg.setSource(51335U);
    msg.setSourceEntity(17U);
    msg.setDestination(21050U);
    msg.setDestinationEntity(218U);
    msg.label.assign("QOATYQJCDERWFYXZPBKGVVPFOTCQKTESPHMKESEZPDDGTJILZ");
    msg.lat = 0.629761574669;
    msg.lon = 0.858429815956;
    msg.z = 0.32168861798;
    msg.z_units = 8U;
    msg.cog = 0.210922431634;
    msg.sog = 0.173449030361;

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
    msg.setTimeStamp(0.976297259355);
    msg.setSource(53921U);
    msg.setSourceEntity(238U);
    msg.setDestination(44296U);
    msg.setDestinationEntity(77U);
    msg.label.assign("XGCDHSTMUBGCTLBSKYEIKMXCKKETBPRZLUUHQLVVDKNFTRMZAYRHVIBXNNEOCBAAQPEAUGQTFTFPFXOCQWTJROYBDCXHWXIGVDOKYJSGLLJCJYMUFDJOYWEMAZRYASQPRUYCGWHHMYPDZORSHGLWQIQVXVZLTHBNRNGFWZSUHKOVDAVPINFRANUWCM");
    msg.lat = 0.0204173689844;
    msg.lon = 0.10639082623;
    msg.z = 0.206881816599;
    msg.z_units = 179U;
    msg.cog = 0.205347772701;
    msg.sog = 0.0803689971902;

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
    msg.setTimeStamp(0.131562526892);
    msg.setSource(58797U);
    msg.setSourceEntity(69U);
    msg.setDestination(18735U);
    msg.setDestinationEntity(81U);
    msg.name.assign("VNRFVGDBAWKGXTDSGPUFEGJFBZYXTXRAYIXLDUZKPKNUAHXWZOALILZIQTTCROEBFLOOPNWEQDGVQAVHEQLVPQYGRHLQFVLTNXHNOQACEQKEFKREBKWWHPXOKJDNIHFTTMXGHVSUFHONKRSUIZTTZYHDI");
    msg.value.assign("GJTSDOHWDUDSPXJWHSQDAIPPHYKXEDRQMRVEVMJNQUIPSQBIIZCAQRKAYYSVXGBLCWIVVHKYMVIEZTHWQFGVTMWEVSTYDAPQFJTDPIEYTKTEAFUWLZYFBFKMAPOIBSZJXMPCEELUEQLHCJLTLJKYNUWBGLMXKADZNOTRSCVNCFBGJGIDRZC");

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
    msg.setTimeStamp(0.0946695567501);
    msg.setSource(45052U);
    msg.setSourceEntity(38U);
    msg.setDestination(39624U);
    msg.setDestinationEntity(17U);
    msg.name.assign("OLKRCLHECFLBSSPSTEKZAJAZLUYXBLCOHDLRNTISDAOXIYKTMYSXKAVNJJOCNIRRXQMSMNKKHNWUIFBDWEKBQIQJQBTYLLQWKXOTVNMVUTKPUJIUAHEIFZUJGEFAQFCGCAMNHGMQPVJIYFYQOPOCISZWRQVDENYPLZJHDGEVMERHLDPPBRW");
    msg.value.assign("UJVDDFQDNTEPDCLYGGDHVTMIGEAFECNSZOKFYANCRPDJNJXZCRXHQBRZMZBKKZLOLCOPKBIATJHINRXBHSZFQWGNLEAVPFBZDLODWMWQAXUCVOLGPTSPFRHMORNNKRBHCFRMWPLEIKYFUEMASWFNZUJ");

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
    msg.setTimeStamp(0.283527681856);
    msg.setSource(40226U);
    msg.setSourceEntity(236U);
    msg.setDestination(4387U);
    msg.setDestinationEntity(155U);
    msg.name.assign("HGUWSFAYCKPXPAUANBDLORQSHOSZXBSZTBYBDUBUWVTPMIQCEGHRBQMYJDPCFDXIETLVLAGZESWZEKLNRRTVLAIWEVKLAJOOPKNYKAIITWORHWLRXZJNDNNQMAFWHWYNUEQNDNQSYGHKFTYCXPXOQMRMKGLUXTRODJMQREFXKKZJCGCPFZCCSQHFVT");
    msg.value.assign("CHLTDBNWFDLDZLSGJGGOVRMASDFOSZNPYDGKJZA");

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
    msg.setTimeStamp(0.452258629407);
    msg.setSource(52336U);
    msg.setSourceEntity(194U);
    msg.setDestination(31101U);
    msg.setDestinationEntity(1U);
    msg.name.assign("BMKQYCBALMFIHTZJQKKFC");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("PMZIXRDLJEPENFJYDMIYITSMFGCQQZ");
    tmp_msg_0.value.assign("GLOAPDMOAAJWZ");
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
    msg.setTimeStamp(0.797585750681);
    msg.setSource(48341U);
    msg.setSourceEntity(144U);
    msg.setDestination(29839U);
    msg.setDestinationEntity(32U);
    msg.name.assign("DMZSJIOKIUVTNPZTSBDIMXANFRJDIPNMRVRJVEEKVSHQJTWBFFHWIVWHXCCVDELONWKHOHYCITMTGPHGMEPNEHSBOGRJMBQZBNIRHQXXNTGZBNUJLYXQCJFCGULWYMGPPKEAJSTFGSDYEZUIQWAQQWFCOTPEQJXOUXIMKBXUPYWQDLCYVRCKRYVPSLRXALBVFOXRTOFGUAQYAMTASDKZKASNHUY");

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
    msg.setTimeStamp(0.272083591355);
    msg.setSource(8986U);
    msg.setSourceEntity(111U);
    msg.setDestination(7924U);
    msg.setDestinationEntity(159U);
    msg.name.assign("BZEPDCVRMIVLPYSGQUWLYKRNQZEDNYAVLYMLJTJAGINVUXNINRTAGADTRHMOB");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("DDKWFMXTGJQODBJOIPDPTXZHOGENAFCSPEZPMOGYLYIYMPXFIIVNATURLZUXWSGEJLRRTFKBGMDFDWSNIKVAVGLWPTWLZMDBVEUGHQQXVKEZQRVPYWSMXUFRJJAJYAQXJNEJILEQURBKIWYFREHYWFGMODHNJZVNCUFSZVMYZALONZKSMAQBKTRUYCNEHCHRCKMBH");
    tmp_msg_0.value.assign("FUMGBXTIAHQIYFPYGAPVKGZLRWQVOBFEALYXBX");
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
    msg.setTimeStamp(0.628900825282);
    msg.setSource(14977U);
    msg.setSourceEntity(51U);
    msg.setDestination(60889U);
    msg.setDestinationEntity(19U);
    msg.name.assign("YUFPUTFYVFXQUCVNZQFTLKMERRGUQSTOHLSGAEWGYATIYMMCGXEQNXAPJDIXEGXKWQBAOVODBIWKHEZNKATBUFLKLFFCPGMWZVUKCMOLTPZRDEYBMMICHXMDZJSHVGYRXDCFEGOAOLWTWDAICYNBN");
    msg.visibility.assign("DVOTBPQHVKMDPTWKYZNSKDTLANABNGZUQZJGHZEKAPADUJLASIUHNFTXTEXTSZPS");
    msg.scope.assign("YMBCRLAMAOFXHGVMQCDBPJNAPSLBFODNACAOXDOMJWPVZUZTJLFJTUIZITPRJRUENTRVAGGFQBTSPEDLGUUOEDTHJQKSUXZNQYBEQYGFTDBXCWYVKYIXIARQGIIPMHYOHJCNEAANCHPLHDPBRLKMKZNGISWVZTOAYSRQIFYHKXZGKSCQTMLRMWEUDUHSVWHFMWUJKOVSGOSIQWKKNYBNSUFCEOXLMZCRTPWBHZGCXBJVVKXDFLYEPWEQLN");

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
    msg.setTimeStamp(0.324777995127);
    msg.setSource(62049U);
    msg.setSourceEntity(235U);
    msg.setDestination(35944U);
    msg.setDestinationEntity(11U);
    msg.name.assign("ULERYFAGNYWBNYLEITKFPDCBEJORWXWPXZKPNCNZZEODMFXCFKCKSLJDUIVQRNOWO");
    msg.visibility.assign("SWFTIWHMJCOOYAKIQVZXHXMNTRZZGCYYPNODJRRLIAKZWRUTAFKOQRCCPVMSFSUJDMYVPPLATSGBQIZLNMYXSHLMMFOKUZRBTNXWWJTVNDIOANETCVIFJZMKKEJQRNBUOAOZEWLVBHPUHLXVTBBHFRUDXBDCGTLQALCRKGJPDJSYOIUBPNWCGUIAFGPSSIUJQXTEBDQDAHGIFBVYAFMZQKCHXPZPG");
    msg.scope.assign("SPSAFFDPMIIZOFNUZPFJLLMZUIYYGDNITSRJRXXDQCDXELUBCVINKVHWOWYZGRICZZZLGHYNGZWFGKFMLELQYAHBYSCSXMOPHTRENWFFTXTABNSPKVPDTEUJHTJPQAMDECTOCBAZSMKGBYEEWWUUVYOWHBICUBTEQVRPKPNVGVSL");

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
    msg.setTimeStamp(0.255427323279);
    msg.setSource(51116U);
    msg.setSourceEntity(207U);
    msg.setDestination(7117U);
    msg.setDestinationEntity(215U);
    msg.name.assign("DXQHJSMCFKKISPVJIPENSHHHGJUJTEIUOGVNEQQEBGCXKYEKRKSTCSPLDBRIHTKBFANQMDTPUHODUUKGWDLFCINJHHULNAYBEWWFRCPEQAZVAVJMAWMUJYDSQRMMNDCYTLSOZRBDXRRSGZXSWCTFIOGZCVOZZUUGTXOLHESAFKVQYTCPMNGBNXRYFOIBCRKPFQOTZYFNVEQLWVMOYRLOAIA");
    msg.visibility.assign("WWIBUZUTNQBDTKAPUCNINQVOGWPM");
    msg.scope.assign("XZKYBTVCJWBRIKOOFEUVPUVEYTDICTLDSCGXMJAWRIDCMGHSRLMPAFFFXOGNNROEPGRCLDHDOMZNAGZQKCWHQSLQLXBTXXQZYUPZXUHRKSWSKGILMUWQEPMYJWPJVZMPBVGXJDSCOZQMNTQQINMLQYYWLOEETEDLOHMEIKXFBWHTCUWVJITEBZNKSNUY");

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
    msg.setTimeStamp(0.304186701512);
    msg.setSource(7901U);
    msg.setSourceEntity(10U);
    msg.setDestination(10746U);
    msg.setDestinationEntity(147U);
    msg.name.assign("KSRAWHPUSLFLEVIQHBCODUQNGEFWMSXSOFFVJTBHZZFVPJBDKTPOUOJQBZWDRJOYITYXJEVHEOAECDHLWNTCRPABSQFTZECELWQCYRVJAGLJBHZYUQIYIDXZTDCTFNKBQSLQGCGMKKBORCMIHNLIFKUQTSNYUGNDWWYXMVXDAPXADRSENYZZVGRMVIVILPVIQWOCJXMPWGOBRRAJDWKJKAMHSGZTXGOLPNLAUAHXX");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("ACOTDFOAAGQEYM");
    tmp_msg_0.value.assign("NTRMAEIMKQQBQREXHZMCXCZGVYOKPGGHZVUDCFURDAYBWVIPTPKYWPNCTCKKSQSFATNDERZDLMJOWGANFLCVZPBFBXNSVMKIHVLNCOLSAGUOUJORQWUNYYADGZSEEFWRJHABJNGPTBHIUVZZJYWOTXCEXHMQSDDLBPXXXNQHYALCXZLDRJFWRHTTINUMRLIMOESPTBTKLIEMYXAAJLJIJ");
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
    msg.setTimeStamp(0.790818389222);
    msg.setSource(26136U);
    msg.setSourceEntity(206U);
    msg.setDestination(33690U);
    msg.setDestinationEntity(171U);
    msg.name.assign("LUEAGIAWGPDQRRSMFPLPVQCHFEAEJUKWRKSPFWOVWCSYQMUWJCIJKOIHSEBFAZZUGOTVTNNQKXRRUXDTNDAWLEGZTDGBHEDSRZWCPKATFNPXYPUSUNMBDOHHNBJBKRMGJRJKIMZOIOS");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("SRNSETNWGYOUBO");
    tmp_msg_0.value.assign("NDMFDKRSRLLRNAOIFCMZIQDXOBTXYCTIPMXBTPBUCRIOLJPGRMIQZOLEGAROTYONHNVQHSQOGBCKKGPUVSIQYCBNWFAYIDTHXAAZAVZITGEUDWKEPOHWQFRXGVHKLMJEZUGNQQJVTGJKGFCPXFNJUMUYGKEPLHKMXPFJWBTYTWEFZROWSEST");
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
    msg.setTimeStamp(0.848741819924);
    msg.setSource(5717U);
    msg.setSourceEntity(77U);
    msg.setDestination(65496U);
    msg.setDestinationEntity(176U);
    msg.name.assign("PCDSPDZTWIHCOIOIIERUYVPNNMECFIOKWAWRVZEJPSFEGRXXDXNFWDQKHBJWFXBTAMSQXAJZYIZEVOPQKFLTMMBLBCPUFXQKUZLGJRYTHNZJFLPCDCHVTQUZVEYLZXNGWDJTGWNRRSOYYLAAPWAUKLIMEMUTQIGDS");

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
    msg.setTimeStamp(0.921862347818);
    msg.setSource(8811U);
    msg.setSourceEntity(79U);
    msg.setDestination(56054U);
    msg.setDestinationEntity(151U);
    msg.name.assign("OJVNKVXPZYLOECUVVZNWEADJVXVXLRFJKXWURNDZDIOXTKOBLSWNPXNMRCKEVNUNUILFVREQHPIR");

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
    msg.setTimeStamp(0.982119215394);
    msg.setSource(36564U);
    msg.setSourceEntity(207U);
    msg.setDestination(23046U);
    msg.setDestinationEntity(120U);
    msg.name.assign("IIRLKIWZBDVNKXVCHVNHJXZWBDQUFFQBACRGXJIRPWYARZKEJCOXDETBDIJRUOKOPBMNGHWZHDKXEUBMZPGCNJTXUVYNLPYFQCFAO");

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
    msg.setTimeStamp(0.351819720505);
    msg.setSource(13068U);
    msg.setSourceEntity(20U);
    msg.setDestination(62601U);
    msg.setDestinationEntity(221U);
    msg.name.assign("UKVDTBPESGZNNCJZTQJHRYOKBKGCRSXHGLWAEYXKRXBAMRLYSOHYIWTWNWTXCCNHJVJLUMYNCIQKSIPV");

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
    msg.setTimeStamp(0.988487154994);
    msg.setSource(42555U);
    msg.setSourceEntity(131U);
    msg.setDestination(39342U);
    msg.setDestinationEntity(248U);
    msg.timeout = 830646062U;

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
    msg.setTimeStamp(0.229088308949);
    msg.setSource(30848U);
    msg.setSourceEntity(138U);
    msg.setDestination(10363U);
    msg.setDestinationEntity(23U);
    msg.timeout = 1906262154U;

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
    msg.setTimeStamp(0.207190390895);
    msg.setSource(21373U);
    msg.setSourceEntity(167U);
    msg.setDestination(26439U);
    msg.setDestinationEntity(56U);
    msg.timeout = 3365781677U;

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
    msg.setTimeStamp(0.20324581266);
    msg.setSource(1334U);
    msg.setSourceEntity(228U);
    msg.setDestination(26822U);
    msg.setDestinationEntity(82U);
    msg.sessid = 2264459140U;

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
    msg.setTimeStamp(0.386562198288);
    msg.setSource(48717U);
    msg.setSourceEntity(178U);
    msg.setDestination(28737U);
    msg.setDestinationEntity(174U);
    msg.sessid = 625693409U;

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
    msg.setTimeStamp(0.551692458536);
    msg.setSource(54572U);
    msg.setSourceEntity(147U);
    msg.setDestination(34184U);
    msg.setDestinationEntity(186U);
    msg.sessid = 4097924689U;

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
    msg.setTimeStamp(0.932079817972);
    msg.setSource(674U);
    msg.setSourceEntity(47U);
    msg.setDestination(37697U);
    msg.setDestinationEntity(43U);
    msg.sessid = 3693302743U;
    msg.messages.assign("COBVXHSEMGWQYLTZFXOXIQTLIQFTWQQDNHVOKWLMYMNZKHHFGEVKBZAOTCOKXBBLWPAXAFJQLIMDICUZDNYRWNEVVSSCYUHFGRFHIGYSSMTKRJGEDGGIAPXTSMPRQPTHNDULZIUYEUZLPRFPVXQFXLONOKCRFEHIEOAZAIESRZIHVWRJBL");

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
    msg.setTimeStamp(0.342749247558);
    msg.setSource(58612U);
    msg.setSourceEntity(49U);
    msg.setDestination(42904U);
    msg.setDestinationEntity(144U);
    msg.sessid = 3154439024U;
    msg.messages.assign("KEPOPLLULHYYFIGFBNBFEYTYXHHIGGIORFJYTEVBYMUAXTBHQFVHCCWGESRKJSQPYYPSHMCXRXNLRVETMKUCIVRXTAQODIUALKDVARQBDMTNODLSZXUNQESBKOJLIQEVXMZBAMBVIXOZWPJVNGKKZATMSCGNWDWVZOCQNXEOZADPNIJTJTGECCKRHRPGSJFWRMJPLIOPMPIZJZKWUWHGFWFSWJLNAUYDFBMQEXFSNHBTVUC");

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
    msg.setTimeStamp(0.534133331539);
    msg.setSource(22918U);
    msg.setSourceEntity(45U);
    msg.setDestination(52535U);
    msg.setDestinationEntity(145U);
    msg.sessid = 3769058780U;
    msg.messages.assign("ICKLVHECCCZQHMNEDQPEWHWYBZN");

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
    msg.setTimeStamp(0.612291886506);
    msg.setSource(19019U);
    msg.setSourceEntity(216U);
    msg.setDestination(46258U);
    msg.setDestinationEntity(81U);
    msg.sessid = 1264053270U;

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
    msg.setTimeStamp(0.917055626054);
    msg.setSource(61445U);
    msg.setSourceEntity(125U);
    msg.setDestination(11310U);
    msg.setDestinationEntity(192U);
    msg.sessid = 3414086312U;

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
    msg.setTimeStamp(0.334861874397);
    msg.setSource(17704U);
    msg.setSourceEntity(228U);
    msg.setDestination(54797U);
    msg.setDestinationEntity(166U);
    msg.sessid = 1163417334U;

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
    msg.setTimeStamp(0.642260267577);
    msg.setSource(23846U);
    msg.setSourceEntity(5U);
    msg.setDestination(1276U);
    msg.setDestinationEntity(101U);
    msg.sessid = 2581628030U;
    msg.status = 209U;

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
    msg.setTimeStamp(0.0638884523484);
    msg.setSource(64381U);
    msg.setSourceEntity(128U);
    msg.setDestination(57391U);
    msg.setDestinationEntity(244U);
    msg.sessid = 583817844U;
    msg.status = 72U;

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
    msg.setTimeStamp(0.557059625058);
    msg.setSource(35128U);
    msg.setSourceEntity(203U);
    msg.setDestination(15936U);
    msg.setDestinationEntity(239U);
    msg.sessid = 1274462230U;
    msg.status = 11U;

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
    msg.setTimeStamp(0.955866846887);
    msg.setSource(31121U);
    msg.setSourceEntity(95U);
    msg.setDestination(35153U);
    msg.setDestinationEntity(51U);
    msg.name.assign("OSYJRVRCZETAHYYEAGANEOTEKPSVZTCXRIPDWRMAWLYQOIIKMUEDJNWCXSKUWCGSSFEVDALUBRQD");

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
    msg.setTimeStamp(0.399064281344);
    msg.setSource(60526U);
    msg.setSourceEntity(189U);
    msg.setDestination(22378U);
    msg.setDestinationEntity(220U);
    msg.name.assign("SCVLUZNVXUITSJXSJZVRGUQEQVDGRQKDGPPYNEDJMLKSRNTIGYOLEDJWWFDHZGQUGURJGMAQSAXPHINOZNXLPTWKQMUWHPXNOCPLGROKHZCMBQCVYECBOFEXOMHUPYCBRMMBVPDROFSFKFDRVZIALGTWUUIELDIEZAKVTSHHYNCT");

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
    msg.setTimeStamp(0.336943743213);
    msg.setSource(26260U);
    msg.setSourceEntity(246U);
    msg.setDestination(4671U);
    msg.setDestinationEntity(29U);
    msg.name.assign("KBICWYLUECUXRUTDTZRLQP");

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
    msg.setTimeStamp(0.389343839362);
    msg.setSource(55660U);
    msg.setSourceEntity(246U);
    msg.setDestination(27825U);
    msg.setDestinationEntity(30U);
    msg.name.assign("SVLNGQSZPURJIAODQBLFAFTKSIGTRWRYCMIFREIYEQVWYKLXXXRSUHOFYMDKCNVZYPTACZRFROEQTPWGLPWQCVNNIVQRNDJAIIDLMSXBAMTVZUADLHXKZVVXGQDZFKMCCGPGYJBHKXOEEPALDCONSPJXQYNVWOAIMFJBHUAWRHKUOXOGGTM");

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
    msg.setTimeStamp(0.825860346414);
    msg.setSource(4206U);
    msg.setSourceEntity(151U);
    msg.setDestination(4005U);
    msg.setDestinationEntity(201U);
    msg.name.assign("DCJZSTMGQBUXERDDYPBOTBEPRCKEXYCKNXFAZSSVLOQVQZVVUVMWRNTZRRCWIWZHFBVQSEBDSXUYWMAYSIYGKNPIOIAZUWACHFOWVHKEXNDMOLESLPPSCRWSNBNYMJQOJKIOGHTGT");

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
    msg.setTimeStamp(0.368949486678);
    msg.setSource(22616U);
    msg.setSourceEntity(9U);
    msg.setDestination(49489U);
    msg.setDestinationEntity(163U);
    msg.name.assign("IIAYYTWHNXKFTFALRERLUZZTBSPZMKSFCGYYXIPLYFIJMZECMRBEWHOEVSDVSMDWMZOMVFCROGSUNBNCWUXVSKDCHHJKHJTBGKYXRSUNWJQQERIQTASEJDMXQAPXIFZXQHAUKLDIINGZUBDVHPWNJBRAHCKQJGNYLOHWODCNFZVCADGVAFVYQUTPNOSXKXGEYSQOVTPOKAKWPLDGL");

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
    msg.setTimeStamp(0.860972081136);
    msg.setSource(59900U);
    msg.setSourceEntity(52U);
    msg.setDestination(6494U);
    msg.setDestinationEntity(159U);
    msg.type = 110U;
    msg.error.assign("NLPDVUHWJNWZNPDFFWPQMARGWDIPFZDYTPSCUQGIZPYJEGXKSDZTUMHGZOXQFROHJCIZMRSCRILHRVIEIBVJYVYKJOIHDJICRCVTNGPQEAXCXSVCYWWBVWADGRNQTEQBLUAJUPABVJIOIOKQXKMUMESTVYMKYADXMKBPSFWNYBJWUXKTPO");

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
    msg.setTimeStamp(0.324849665024);
    msg.setSource(64338U);
    msg.setSourceEntity(206U);
    msg.setDestination(55652U);
    msg.setDestinationEntity(38U);
    msg.type = 105U;
    msg.error.assign("JGKXTGCEUNOCJGZFBPKWLSDMHVQKKRGOQQRCRHJSBULIRFOLSNNATELZGDEIGYLOCVBQQWXFZNKWHWFOOLIJKEIBBDHFDVMPUDTURAILXDCPBNWUGDSBTCHEGPCEZJAUIZDTZYOQPZYUZWAIAMSHNYUGEMPAYJPEIEJJGQTRSFTSFJAJXYVNKHQPICCNVHLFKWXVLEARYMVMHXNYXBVXIRTCMYQMVPQMFSOYTOSD");

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
    msg.setTimeStamp(0.263061151701);
    msg.setSource(22288U);
    msg.setSourceEntity(90U);
    msg.setDestination(56927U);
    msg.setDestinationEntity(35U);
    msg.type = 73U;
    msg.error.assign("DFMLPXORCBPPSNZLSLNHFCALJOTGPKEVEMVUIOIVWIUOYFIJEMFEBCQNPNKVTSRNOANDSJEZCMLDQOASGZZFSNVNBTRRHWEFYWIGYBZDWNGHVJHKBLJFVXYZDJTOIALRVYRHZAWUXRWKHVDWCKCETQUQRZYXMLDIDMCOBPKUYJBIBCTPMAAPXKSOXESUQGQVDAXLMWTZGFKWMQIUGUEJGOXHLMXUAAJ");

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
    msg.setTimeStamp(0.717219398594);
    msg.setSource(8602U);
    msg.setSourceEntity(163U);
    msg.setDestination(31620U);
    msg.setDestinationEntity(202U);
    msg.seq = 9383U;
    msg.sys_dst.assign("KTHSRVMQZVFVSKGAJMDZXNUMBEBCELORIQRCSDJUVCLFFNMVSICYDRPPVWQXHXTXL");
    msg.flags = 104U;
    const char tmp_msg_0[] = {-48, -115, 78, 73, -79, 33, 81, -70, 78, -42, 29, -28, -66, -3, 55, 46, 122, 79, -34, 8, 79, 93, -16, 5, 51, -70, 35, -86, 99, 115, 26, -109, -96, -69, 33, 88, -99, 53, -6, -41, 61, 1, 123, -67, -88, -41, -121, 97, -54, 12, 69, 58, -35, 17, -79, 62, 19, 113, 47, -48, -29, -86, 27, -63, 33, -2, -76, 57, 10, -91, -34, 57, -118, 42, 109, -30, 43, 19, -4, -29, -111, -55, 71, -126, 58, -48, -121, 90, 60, -47, -70, -101, -123, 15, -94, -38, -53, -57, -45, -17, -63, 2, -35, -80, 104, 70, -115, 31, -16, -111, -76, -50, -73, 61, 78, 62, 5, 106, 56, -108, -50, -118, 60, -104, -18, 125, 36, 88, 73, -98, -48, -97, -119, 55, -5, -15, 68, 124, -47, -24, -89, -5, -82, 121, -122, 81, 89, -126, -106, 66, -81, -16, 47, -32, -114, 13, 101, -77};
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
    msg.setTimeStamp(0.834890160731);
    msg.setSource(46387U);
    msg.setSourceEntity(246U);
    msg.setDestination(61058U);
    msg.setDestinationEntity(41U);
    msg.seq = 50910U;
    msg.sys_dst.assign("ZKAUQFFHMWIQRPJWLNCAXTUTGDOTBKJCQY");
    msg.flags = 82U;
    const char tmp_msg_0[] = {-85, 20, 44, 116, 73, -55, -110, 42, -112, -27, -51, 121, -70, -43, 61, -58, 41, -75, 1, -61, -52, 46, 81, 121, -50, 38, -6, 47, 10, -125, 94, 123, 79, -3, -85, -97, 105, -96, -100, -41, -102, -100, 17, -2, 4, -81, 120};
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
    msg.setTimeStamp(0.352774947929);
    msg.setSource(8337U);
    msg.setSourceEntity(199U);
    msg.setDestination(3539U);
    msg.setDestinationEntity(128U);
    msg.seq = 48097U;
    msg.sys_dst.assign("SACGSRITDQNYVJYANMBAJITQQEJWNRQJDTTZBHNADQLPTUAKPSZFGWIOTNGHXUGQXPEUPBZOCLM");
    msg.flags = 143U;
    const char tmp_msg_0[] = {-1, -86, -51, -74, -22, 45, -40, -108, 71, 66, 120, -46, -97, 113, -79, 109, -42, -85, -85, 62, 118, 125, -19};
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
    msg.setTimeStamp(0.716421142297);
    msg.setSource(4275U);
    msg.setSourceEntity(121U);
    msg.setDestination(41010U);
    msg.setDestinationEntity(89U);
    msg.sys_src.assign("DPAMZCKOTLLXWBTCERBBZHNNRFJCOZDGBYMTKIWHFEEEMIIBAJRAAFVVKJUWQARAPYFMMVMPUDJNQVCTAGNNUZUBNTYSXQAHORCAIUPHJLCQKKFYGIROKNCLZXGSVJGJDQZGXWSQVWSELQOUEZDHEJKSHRUWHXSPDXTQZTYFRKCOO");
    msg.sys_dst.assign("RQPYBXAIXUUJDAPBYGVXRIYSNULDAGJKTLRHWMESIORGONDEZULDIUYFKAOFOKRFEVRAOBPRXBNFVZFVUCTSRQHDMYTWTERIVKOTLGKNGMSTQ");
    msg.flags = 179U;
    const char tmp_msg_0[] = {85, -46, -117, 34, -42, -24, -77, -117, -57, -59, 62, -118, -21, -21, -47, 27, -82, -118, -36, -46, 45, -114, 5, 22, 16, -27, 111, 61, 86, 101, 67, -35, 22, 4, -53, -67, 50, -124, 89, 107, -63, 85, -41, 40, 110, -4, -55, -66, -124, -54, -9, 103, 37, -109, -85, 120, -16, -61, 15, -29, -122, 35, 35, 2, -21, 110, 10, 102, -44, -49, -76, 67, -71, 42, -79, 86, 81, 19, -107, -82, -116, 109, -39, 88, 7, 75, 3, 50, 12, -65, 106, 42, 69, 35, -34, 95, -24, -76, -112, -7, 86, 28, 72, -118, -88, -32, -95, 83, -90, 7, -32, -124, 21, -88, 58, -110, -105, 67, 116, 111};
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
    msg.setTimeStamp(0.736319819459);
    msg.setSource(13996U);
    msg.setSourceEntity(46U);
    msg.setDestination(11998U);
    msg.setDestinationEntity(4U);
    msg.sys_src.assign("UJYFKAGOYBNRAOIXTEVRIZZRDFEQXTQFKCVCQOQBUCIZHYXCOADVEMOQRGZDUSWZHUDHNILRURDBWSRQ");
    msg.sys_dst.assign("NFXNANQZXJXHIPDQLFVJDGLOEGWCZDAEVLOJDQKWWQMMIIDDONXHPJKSDYMGTAUVSWIYFELPRSXSCZPFUECXKJFEHVVDRPJKKJRPAPKERMGIFUIOBKRXCESKHXVNACMUTNNNZTIQNSLSIOZWKZYTUYFJLHGCZRMWTACYYZRGFEGILTXCRADADTJHOGRLMAHICZBQBAEUWFPYQYCBQBSWMLOGSTPVHUWMHFQMGREXWUT");
    msg.flags = 182U;
    const char tmp_msg_0[] = {2, 102, 115, 29, -62, -125, -82, -6, -62, -87, -87, -30, -106, -125, 3, 53, -88, 106, 31, 90, 33, 119, -122, -3, 93, -59, 22, -70, 26, 59, -104, 120, 120, 81, -2, -66, 72, 106, -35, 21, 37, 104, 110, -109, -4, 109, -100, -1, 115, -4, 109, 57, -76, 21, -91, -110, 114, 10, -90, 125, -43, 29, -120, -84, -81, -50, 107, -15, -40, -19, 80, -46, 117, 41, 34, -20, 64, 124, -116, 42, 0, 94, 93, -38, -92, -51, 1, -113, 3, -15, -117, -71, -87, -19, 56, -52, -70, -71, -74, 29, 71, 108, -95, 64, -27, -54, 54, -61, -52, -18, -95, 10, -44, 69, 1, -99, -108, 114, 50, -2, 98, 30, 117, 95, 15, -3, 78, 117, 54, -77, -33, 98, 100, -111, 51, -96, -101, -37, -44, 61, -116, 3, 86, 20, -11, 98, 84, 75, 83, -41, 61, 101, 94, 105, 103, -37, 30, 79, 87, 14, -124, 27, -14, 1, 37, -56, 100, -67, -109, 15, -24, -110, 95, -35, 109, -93, 8, -103, 12, -40, 113, 28, -58, 110, 7, -33, 2, 42, -59, 60, 32, 98, 106, -50, 126, 30, -22, -49, -72, 95, 110, -28, 22, 58, 94, 42, 72, -104, 19, 91, 110, -8, -42, 38, 110, 27, -64, -41, 121, -43, -95, -17, -107, -116, -93, 74, 81, 79, 119, 12, 94, -100, -6, 91, -49, 39, -16, 67, -53, 110, -116, 87, 109, -53};
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
    msg.setTimeStamp(0.926044454114);
    msg.setSource(56830U);
    msg.setSourceEntity(235U);
    msg.setDestination(57436U);
    msg.setDestinationEntity(66U);
    msg.sys_src.assign("VLBIIXICBGPOOXDIGNXIEWDJMXCANYJMFMTLEWQBMGIDTWVQKOSLYNKZBMWSUSRNJKRQZAFRBYQTSTYDQUEJCSKVUDTHPQUXPQNPQNMCARWHRAXT");
    msg.sys_dst.assign("GDLBCXENBSLOCHWTJDATGKHTYFIAFZBIA");
    msg.flags = 138U;
    const char tmp_msg_0[] = {93, -35, -95, 77, 123, 90, -14, -68, -105, 22, 100, 84, 49, -105, 58, -32, -71, 56, 21, -90, 37, 58, 107, -42, 47, -98, -44, -24, 8, 11, -91, 80, -124, -55, 71, -102, -34, 8, -88, 26, 96, 39, -25};
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
    msg.setTimeStamp(0.731790558581);
    msg.setSource(37681U);
    msg.setSourceEntity(226U);
    msg.setDestination(2039U);
    msg.setDestinationEntity(181U);
    msg.seq = 62084U;
    msg.value = 154U;
    msg.error.assign("SIHSSQHTQBIMBPGTVPUHGAXEUFNPZRZEDZVXDXWOWBSZIAUCSHYEQJDFKPJOCYNVFQTLTVYXXKCIRIRRHYMBNLT");

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
    msg.setTimeStamp(0.181561937879);
    msg.setSource(48663U);
    msg.setSourceEntity(214U);
    msg.setDestination(44698U);
    msg.setDestinationEntity(112U);
    msg.seq = 40667U;
    msg.value = 197U;
    msg.error.assign("HKJMULZRITEEUNWYECJHDLZRNKKURRYQTYAMNWIFXJDGLGWQUCMNOGLLEHUMWYNQWSNMRYKQHQNREIDCIBYXVXPOUNDAPSHCTVDTGPSVCRIGSJWSQOBSYVCZODJQPGAPUDPLIDXVIJMKZPARCWGJATUGCLLOERAKWVYHSBZMBZHZUFFWMDZSBKOFLJKVHEASBFBCVGJF");

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
    msg.setTimeStamp(0.648842878523);
    msg.setSource(64576U);
    msg.setSourceEntity(212U);
    msg.setDestination(19996U);
    msg.setDestinationEntity(147U);
    msg.seq = 21070U;
    msg.value = 201U;
    msg.error.assign("BHHEDUYTIZHCGBYYVFAXTADLNMDDLTUJJDNVNMZWIMPPHZOMLFUCEEVSAGORAHJCXKNMZLGZXHGEQQTCMQTNPPOPTNMFSZQLXTBBUTBREWROIVFNOIFZKXEYKUALVOXFJCPHIMXYGSJWWYSBJKRCUHLBBYZIRRUVWFCLULHANLRYDSWIGKAAFWEGFEUHRORQCTMBUIJWINAPFXQDRQQTPGKCZVEK");

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
    msg.setTimeStamp(0.780184258727);
    msg.setSource(28090U);
    msg.setSourceEntity(141U);
    msg.setDestination(27488U);
    msg.setDestinationEntity(64U);
    msg.seq = 54111U;
    msg.sys.assign("YNCQRBSWNBYRBHAJFZEWHDBGTJTDWOAEL");
    msg.value = 0.0581670395553;

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
    msg.setTimeStamp(0.609297569626);
    msg.setSource(56028U);
    msg.setSourceEntity(158U);
    msg.setDestination(31358U);
    msg.setDestinationEntity(60U);
    msg.seq = 25879U;
    msg.sys.assign("AIIAEWMKPQMJRQQWDKHVIAEIMKZEOYTHTVYNJSUFXAIYBZEXQBAZUUNGNDUSICWOYVPHZRTYCETHNXEDLVLSXOVXZPEDOGQHIDAMSDRTWRTAGLLRDULHJJAZFDGMJQEUTQFUOKXBFCRYKVGOMPRJSTZQBB");
    msg.value = 0.806362488301;

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
    msg.setTimeStamp(0.0761282316708);
    msg.setSource(16191U);
    msg.setSourceEntity(235U);
    msg.setDestination(44422U);
    msg.setDestinationEntity(197U);
    msg.seq = 35583U;
    msg.sys.assign("BWRVNVWAFCZXYLDDIQPCXICGRRNVMRGECWVSDTSNATUJNIMWHBOUMZQMQKFRXIOAMXPHJGLVLOFVOGEKJCAGEGCYMZIDPAQBLUVPXIUHUSAQIAPTFSULFDHCDYYBTMFXLJOTEJJVSTTBTKMWZSNBZWSPOEKTMRGMBZZNYPJLNDQYFEDVKNWWBAAXWCPGJOKIJEGHUXSXFYH");
    msg.value = 0.665062029611;

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
    msg.setTimeStamp(0.665444904719);
    msg.setSource(7180U);
    msg.setSourceEntity(11U);
    msg.setDestination(4831U);
    msg.setDestinationEntity(63U);
    msg.action = 42U;
    msg.longain = 0.0152294474372;
    msg.latgain = 0.0361888578427;
    msg.bondthick = 770852048U;
    msg.leadgain = 0.626078632565;
    msg.deconflgain = 0.0896919619143;

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
    msg.setTimeStamp(0.13731661878);
    msg.setSource(27932U);
    msg.setSourceEntity(108U);
    msg.setDestination(46724U);
    msg.setDestinationEntity(130U);
    msg.action = 159U;
    msg.longain = 0.735314548636;
    msg.latgain = 0.0882930715363;
    msg.bondthick = 145370714U;
    msg.leadgain = 0.229270009639;
    msg.deconflgain = 0.140919476998;

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
    msg.setTimeStamp(0.0305922054769);
    msg.setSource(18534U);
    msg.setSourceEntity(50U);
    msg.setDestination(36807U);
    msg.setDestinationEntity(227U);
    msg.action = 117U;
    msg.longain = 0.817269493518;
    msg.latgain = 0.209687704879;
    msg.bondthick = 3895739978U;
    msg.leadgain = 0.0179163278221;
    msg.deconflgain = 0.788053345038;

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
    msg.setTimeStamp(0.322419966011);
    msg.setSource(11583U);
    msg.setSourceEntity(189U);
    msg.setDestination(7639U);
    msg.setDestinationEntity(73U);
    msg.err_mean = 0.927777628108;
    msg.dist_min_abs = 0.240749060115;
    msg.dist_min_mean = 0.243731711175;

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
    msg.setTimeStamp(0.745083484636);
    msg.setSource(12560U);
    msg.setSourceEntity(163U);
    msg.setDestination(60107U);
    msg.setDestinationEntity(43U);
    msg.err_mean = 0.363545759893;
    msg.dist_min_abs = 0.0346893777928;
    msg.dist_min_mean = 0.186980016076;

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
    msg.setTimeStamp(0.77984436141);
    msg.setSource(65051U);
    msg.setSourceEntity(63U);
    msg.setDestination(23047U);
    msg.setDestinationEntity(178U);
    msg.err_mean = 0.763758964263;
    msg.dist_min_abs = 0.430924621957;
    msg.dist_min_mean = 0.405546241462;

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
    msg.setTimeStamp(0.869964313401);
    msg.setSource(50283U);
    msg.setSourceEntity(236U);
    msg.setDestination(47572U);
    msg.setDestinationEntity(217U);
    msg.action = 233U;
    msg.lon_gain = 0.656722458574;
    msg.lat_gain = 0.903539034294;
    msg.bond_thick = 0.821769951284;
    msg.lead_gain = 0.0648325812455;
    msg.deconfl_gain = 0.272361636685;
    msg.accel_switch_gain = 0.0292802588906;
    msg.safe_dist = 0.315037138189;
    msg.deconflict_offset = 0.627489294495;
    msg.accel_safe_margin = 0.13724584026;
    msg.accel_lim_x = 0.200836078851;

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
    msg.setTimeStamp(0.808027427965);
    msg.setSource(28504U);
    msg.setSourceEntity(91U);
    msg.setDestination(18135U);
    msg.setDestinationEntity(98U);
    msg.action = 156U;
    msg.lon_gain = 0.300225315685;
    msg.lat_gain = 0.441439501917;
    msg.bond_thick = 0.336726760072;
    msg.lead_gain = 0.401154636332;
    msg.deconfl_gain = 0.930493413282;
    msg.accel_switch_gain = 0.616070919889;
    msg.safe_dist = 0.72862376532;
    msg.deconflict_offset = 0.482663512841;
    msg.accel_safe_margin = 0.848365364592;
    msg.accel_lim_x = 0.379995780379;

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
    msg.setTimeStamp(0.799797520343);
    msg.setSource(3842U);
    msg.setSourceEntity(38U);
    msg.setDestination(29850U);
    msg.setDestinationEntity(10U);
    msg.action = 100U;
    msg.lon_gain = 0.55250412444;
    msg.lat_gain = 0.41762727473;
    msg.bond_thick = 0.137970864395;
    msg.lead_gain = 0.977055996851;
    msg.deconfl_gain = 0.277892856937;
    msg.accel_switch_gain = 0.49575567096;
    msg.safe_dist = 0.0324029192437;
    msg.deconflict_offset = 0.163142511855;
    msg.accel_safe_margin = 0.942262356716;
    msg.accel_lim_x = 0.302508141673;

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
    msg.setTimeStamp(0.967715987768);
    msg.setSource(36667U);
    msg.setSourceEntity(7U);
    msg.setDestination(28937U);
    msg.setDestinationEntity(11U);
    msg.type = 123U;
    msg.op = 53U;
    msg.err_mean = 0.757072419232;
    msg.dist_min_abs = 0.855137162355;
    msg.dist_min_mean = 0.652620665945;
    msg.roll_rate_mean = 0.697815685118;
    msg.time = 0.526882799994;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 27U;
    tmp_msg_0.lon_gain = 0.475393895849;
    tmp_msg_0.lat_gain = 0.106052549562;
    tmp_msg_0.bond_thick = 0.410082056877;
    tmp_msg_0.lead_gain = 0.710239433588;
    tmp_msg_0.deconfl_gain = 0.815234714986;
    tmp_msg_0.accel_switch_gain = 0.922215357839;
    tmp_msg_0.safe_dist = 0.469133850619;
    tmp_msg_0.deconflict_offset = 0.572243671628;
    tmp_msg_0.accel_safe_margin = 0.637441021512;
    tmp_msg_0.accel_lim_x = 0.255294423793;
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
    msg.setTimeStamp(0.163799569087);
    msg.setSource(35413U);
    msg.setSourceEntity(8U);
    msg.setDestination(49205U);
    msg.setDestinationEntity(137U);
    msg.type = 20U;
    msg.op = 127U;
    msg.err_mean = 0.0795685944157;
    msg.dist_min_abs = 0.920844889267;
    msg.dist_min_mean = 0.807421208995;
    msg.roll_rate_mean = 0.154782824502;
    msg.time = 0.583165596536;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 179U;
    tmp_msg_0.lon_gain = 0.297515488303;
    tmp_msg_0.lat_gain = 0.164338394415;
    tmp_msg_0.bond_thick = 0.948979162799;
    tmp_msg_0.lead_gain = 0.952583847331;
    tmp_msg_0.deconfl_gain = 0.302924970566;
    tmp_msg_0.accel_switch_gain = 0.75063913102;
    tmp_msg_0.safe_dist = 0.241892764158;
    tmp_msg_0.deconflict_offset = 0.907476732881;
    tmp_msg_0.accel_safe_margin = 0.932739601351;
    tmp_msg_0.accel_lim_x = 0.495420295988;
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
    msg.setTimeStamp(0.759457081997);
    msg.setSource(26243U);
    msg.setSourceEntity(128U);
    msg.setDestination(11918U);
    msg.setDestinationEntity(157U);
    msg.type = 59U;
    msg.op = 48U;
    msg.err_mean = 0.612913188611;
    msg.dist_min_abs = 0.39161746946;
    msg.dist_min_mean = 0.984151260847;
    msg.roll_rate_mean = 0.913511751075;
    msg.time = 0.671750899256;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 97U;
    tmp_msg_0.lon_gain = 0.409350104043;
    tmp_msg_0.lat_gain = 0.787025109925;
    tmp_msg_0.bond_thick = 0.754888538352;
    tmp_msg_0.lead_gain = 0.795087146165;
    tmp_msg_0.deconfl_gain = 0.939484745232;
    tmp_msg_0.accel_switch_gain = 0.328801191478;
    tmp_msg_0.safe_dist = 0.97577502166;
    tmp_msg_0.deconflict_offset = 0.125002939687;
    tmp_msg_0.accel_safe_margin = 0.805212859002;
    tmp_msg_0.accel_lim_x = 0.867340200107;
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
    msg.setTimeStamp(0.520463247037);
    msg.setSource(7352U);
    msg.setSourceEntity(248U);
    msg.setDestination(15646U);
    msg.setDestinationEntity(159U);
    msg.lat = 0.65748927359;
    msg.lon = 0.180804374164;
    msg.eta = 2991882423U;
    msg.duration = 37698U;

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
    msg.setTimeStamp(0.24272467682);
    msg.setSource(22024U);
    msg.setSourceEntity(156U);
    msg.setDestination(2446U);
    msg.setDestinationEntity(48U);
    msg.lat = 0.367641270167;
    msg.lon = 0.280205551337;
    msg.eta = 2070098240U;
    msg.duration = 28540U;

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
    msg.setTimeStamp(0.4761798449);
    msg.setSource(61496U);
    msg.setSourceEntity(177U);
    msg.setDestination(29825U);
    msg.setDestinationEntity(107U);
    msg.lat = 0.355750271838;
    msg.lon = 0.598562581787;
    msg.eta = 3918221406U;
    msg.duration = 14847U;

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
    msg.setTimeStamp(0.370691328663);
    msg.setSource(39475U);
    msg.setSourceEntity(253U);
    msg.setDestination(59932U);
    msg.setDestinationEntity(78U);
    msg.plan_id = 64322U;
    IMC::SoiWaypoint tmp_msg_0;
    tmp_msg_0.lat = 0.890876030913;
    tmp_msg_0.lon = 0.953129306093;
    tmp_msg_0.eta = 2198991848U;
    tmp_msg_0.duration = 50720U;
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
    msg.setTimeStamp(0.208377171505);
    msg.setSource(8074U);
    msg.setSourceEntity(237U);
    msg.setDestination(32607U);
    msg.setDestinationEntity(162U);
    msg.plan_id = 54153U;
    IMC::SoiWaypoint tmp_msg_0;
    tmp_msg_0.lat = 0.357004604404;
    tmp_msg_0.lon = 0.924325489752;
    tmp_msg_0.eta = 2199479370U;
    tmp_msg_0.duration = 64673U;
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
    msg.setTimeStamp(0.205409093278);
    msg.setSource(58041U);
    msg.setSourceEntity(182U);
    msg.setDestination(30766U);
    msg.setDestinationEntity(19U);
    msg.plan_id = 45028U;
    IMC::SoiWaypoint tmp_msg_0;
    tmp_msg_0.lat = 0.656960212498;
    tmp_msg_0.lon = 0.362936830894;
    tmp_msg_0.eta = 2603562037U;
    tmp_msg_0.duration = 43202U;
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
    msg.setTimeStamp(0.351766835552);
    msg.setSource(43669U);
    msg.setSourceEntity(56U);
    msg.setDestination(34303U);
    msg.setDestinationEntity(36U);
    msg.type = 51U;
    msg.command = 70U;
    msg.settings.assign("RMFZOBJFMDESONMNYGLWKLLSZANGMOUZRVNTCTKQIUGUHOWJJRVOYIJDNFKFLSYRXHNNIGIPBZVKEITMDQXELNXUWAEQCJRGQSLVOHUGCCGUBPHDDKQFDYTXRWPAKHJLXUONFTTEPEZDCAQYSBFXJQBWDZWYPHXWMIMOMW");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 60726U;
    msg.plan.set(tmp_msg_0);
    msg.info.assign("QDIVZIKVLGVNCOEYNRZMGFRGCIPDFZKQNXOOWBNCCMXTPXCRJJMVYBMLHVGYOCPULTFPJKKWLSBLGTKSEWFIIQFDVUDENJJUAZYCSUSXMVBVMOOHALGOHRQTDJQIJLVYUMRFWEDPBHVYIZAHLTYWRFEHBDNITUKGYAXAEOKXXNDO");

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
    msg.setTimeStamp(0.518631659765);
    msg.setSource(38495U);
    msg.setSourceEntity(229U);
    msg.setDestination(13502U);
    msg.setDestinationEntity(11U);
    msg.type = 213U;
    msg.command = 9U;
    msg.settings.assign("BOPSKFEJVNFKVTGNLIMSLYSTBYMCELJUXLMXREMHMKXYKULPKCZEPVGRQFPRFCZOUYAVDISRSIYLDCDZIXBDTHUANZYCKSRUKGLYNMH");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 168U;
    IMC::SoiWaypoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.702355946595;
    tmp_tmp_msg_0_0.lon = 0.931867365998;
    tmp_tmp_msg_0_0.eta = 309187544U;
    tmp_tmp_msg_0_0.duration = 44135U;
    tmp_msg_0.waypoints.push_back(tmp_tmp_msg_0_0);
    msg.plan.set(tmp_msg_0);
    msg.info.assign("IFMESTUUYKYXSADILIRPZMSVEECJVDHIZLKJEKBGYPPOXZTHLVVPUNKMPTDZEQFOGAJWBZEQV");

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
    msg.setTimeStamp(0.634132519881);
    msg.setSource(28806U);
    msg.setSourceEntity(207U);
    msg.setDestination(2969U);
    msg.setDestinationEntity(177U);
    msg.type = 213U;
    msg.command = 57U;
    msg.settings.assign("ATMWFGYTYQJCYSPYLOKBEIDALUWFRJPLQHDGEHBGOQFLAVYUZSFUEMDEZMNINNXGKPWZZAQRMOSCRMQXBBSSKTAOHXRLXHJUOTLFNKQOVPQVLAKJINAZIIUNG");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 11567U;
    msg.plan.set(tmp_msg_0);
    msg.info.assign("FWXWPWXGHACYARRAYJYZOYBJSNVUQMTMYNOIUWZPKUPREYYPMLMUFFFEBSMSGTPQSKQNSDCABQZG");

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
    msg.setTimeStamp(0.19702042061);
    msg.setSource(64834U);
    msg.setSourceEntity(167U);
    msg.setDestination(52482U);
    msg.setDestinationEntity(154U);
    msg.state = 45U;
    msg.plan_id = 34406U;
    msg.wpt_id = 166U;
    msg.settings_chk = 25048U;

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
    msg.setTimeStamp(0.686139014707);
    msg.setSource(48637U);
    msg.setSourceEntity(131U);
    msg.setDestination(64457U);
    msg.setDestinationEntity(66U);
    msg.state = 35U;
    msg.plan_id = 26843U;
    msg.wpt_id = 223U;
    msg.settings_chk = 26892U;

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
    msg.setTimeStamp(0.405095510643);
    msg.setSource(46786U);
    msg.setSourceEntity(47U);
    msg.setDestination(24716U);
    msg.setDestinationEntity(169U);
    msg.state = 107U;
    msg.plan_id = 55582U;
    msg.wpt_id = 154U;
    msg.settings_chk = 49167U;

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
    msg.setTimeStamp(0.461466256924);
    msg.setSource(3151U);
    msg.setSourceEntity(229U);
    msg.setDestination(50384U);
    msg.setDestinationEntity(98U);
    msg.uid = 98U;
    msg.frag_number = 14U;
    msg.num_frags = 80U;
    const char tmp_msg_0[] = {-5, -99, -47, 12, -19, -36, -109, 15, 51, 85, 124, 110, -67, 96, -105, 25, -6, -53, -55, -17, 69, 19, 32, 11, 34, 66, 48, -91, 111, 96, -6, 86, -121, 100, -102, 63, 104, 81, -49, 17, 76, 21, -64, -49, -70, 57, -12, 48, -119, 81, 29, 104, 98, 38, 47, -108, -26, 18, -46, -28, -86, 59, -41, 49, -43, 12, -122, -22, -11, -75, -103, 70, 33, 25, -5, 45, 85, 3, -80, -23, 47, 88, 6, 4, 103, 110, 89, -64, -40, -108, 119, -8, 107, -60, 17, 96, 58, -116, -105, -116, 119, 72, 120, -66, 75, 66, 9, 126, 74, 10, -27, 121, 124, 90, 81, 44, 64, 112, 9, -78, -99, 16, -48, 65, 90, -41, 37, 48, 35, 78, 118, -49, 107};
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
    msg.setTimeStamp(0.659977775315);
    msg.setSource(49072U);
    msg.setSourceEntity(160U);
    msg.setDestination(54029U);
    msg.setDestinationEntity(212U);
    msg.uid = 9U;
    msg.frag_number = 134U;
    msg.num_frags = 24U;
    const char tmp_msg_0[] = {-50, -70, -43, -51, 52, 95, -61, 56, -16, -74, -55, -115, -61, -47, 26, 116, -77, -117, -40, 92, 65, -115, 36, 112, -79, 116, -41, 50, 34, -96, 13, -38, 90, 14, 71, 59, 63, 99, 53, -75, -35, 51, 15, 105, 23, -103, 48, -97, 34, -124, -44, 51, -13, 57, -126, 94, 77, 113, -31, -55, 97, -18, 98, -2, -6, -3, -69, -36, -102, -8, -123, -84, 106, 22, 125, 58, 123, 119, 16, -42, -95, 103, -11, 61, 99, 108, 64, -97, 16, -73, -16, 25, -20, 123, -118, 68, 123, 8, -20, -33};
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
    msg.setTimeStamp(0.0134842561937);
    msg.setSource(53776U);
    msg.setSourceEntity(107U);
    msg.setDestination(37458U);
    msg.setDestinationEntity(210U);
    msg.uid = 161U;
    msg.frag_number = 123U;
    msg.num_frags = 248U;
    const char tmp_msg_0[] = {-128, -12, 93, 38, -54, 77, 15, -72, 66, -52, -115, 63, 26, 116, -35, -110, 3, 116, -37, -16, -27, -49, 103, 15, -69, -119, 56, 123, -37, 40, -79, 88, 11, -68, 66, -21, 103, -110, -48, 48, -118, -5, 58, -14, -109, 30, -59, -40, 119, -70, 3, 56, -52, 48, -86, 25, -122, 4, 76, 48, -72, 58, -83, 32, 61, 96, -53, -57, -31, -98, 62, -63, -98, -64, -30, 7, 28, -120, 18, 113, 56, 14, 15, 84, -75, 113, 125, -21, 41, -42, 55, -11, 78, -77, -19, 47, 46, 111, 117, 72, 66, -32, 114, 24, -82, 84, -25, -57, 8, -123, 85, -83, 103, 117, 86, -120, -45, -52, -55, -83, 103, 63, 38, 38, -113, 113, -110, -78, -112, -101, 39, 59, 125, -97, -68, -41, -46, -71, -83, -22, -26, 4, -107, -35, 65, -55, 43, 75, -46, 62, -32, 56, -109, 69, 57, 106, -4, -99};
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
    msg.setTimeStamp(0.217139761454);
    msg.setSource(43577U);
    msg.setSourceEntity(9U);
    msg.setDestination(31352U);
    msg.setDestinationEntity(7U);
    msg.content_type.assign("GBQIPBBLKTIJCACIHJLCBJPWOVSNJDNIHWOJFMNPPZYPOLRFYZBFLRZGCHIXRKZXASPQQLNCALIQHTUEKTFSXDBJFDKDUVSNMDRYXJXEQKAKUEZCEWVNWTOQBTFAMRBYAOUIGPGKQCMRNPIOSALBVXMVJAVLWZTODRDGGNUEKICEAKIJQLYVTLUTCZUSOYEHZMYQUVAFHZOGNGEUUDRDYWZEEMXFTYPHXNQMRX");
    const char tmp_msg_0[] = {60, 17, -79, -69, 112, 116, -108, -17, -123, 44, 83, 83, -120, -116, 20, -59, 69, -128, -72, 78, 52, 74, 40, 104, -93, 116, 8, -20, 17, -20, -13, 56, 61, -107, 76, -57, -101, 103, 79, -57, 68, -91, -87, 22, -127, 77, -47, -86, 50, -72, 59, 30, -72, 98, 45, 117, -89, -29, -45, -80, -6, 106, -104, 86, -59, -124, 0, -10, -76, -41, 93, -62, 35, -122, 123, -124, -89, -89, 0, -65, -68, -59, 57, -128, -53, -20, -34, -40, 73, 97, -99, 126, 42, -62, 88, -51, 80, -107, -100, 16, 67, -21, -20, -81, -50, 26, -46, -61, -107, -100, -77, -57, 80, -50, 6, 28, 68, -113, -94, 109, -68, 15, -9, -102, -22, -7, -74, 126, -36, -55, -1, 41, 22, 37, -62, -1, -63, 63, -48, -93, -111, 113, -60, -38, 105, 66, -46, 109, -19, 80, 9, 49, 11, -87, 90, -30, -47, 77, -13, 0, 119, 70, 71, 65, 100, -88, -73, 30, 117, -48, -34, -16, 76, -82, 9, 105, -105, 118, 81, 111, -74, 30, -81, 35, -70, -55, 117, -2, 106, -112, 125, -17, 11, -69, -76, 102, -91, 9, -68, -17, 110, -20, 99, -60, 18, 1, 114, -113, 106, -18, 49, -121, 31, -61, -64, -3, -122, -75, -67, -121, 90, -127, 101, 108, -117, -58};
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
    msg.setTimeStamp(0.0671452394688);
    msg.setSource(39280U);
    msg.setSourceEntity(188U);
    msg.setDestination(17207U);
    msg.setDestinationEntity(139U);
    msg.content_type.assign("LHUZHBMPVAVDZFNIMAFINCAHFFRCVRRGUKCWZXRIUJZAAPSSYPKOKBTUXUHZPGJYXECQJJSDKNAQXHOAHPKYOIISZNDJBDOIQZSPCGLVTTHY");
    const char tmp_msg_0[] = {-74, -53, 117, 47, -39, -65, -44, -85, 109, -85, 126, 76, -13, -81, -116, 90, -106, -120, -96, -54, -23, -74, -60, -3, 113, 50, 76, -62, 71, -27, 13, 71, -86, 28, -98, -83, -110, 30, 105, 55, -47, -101, 72, 117, 126, 48, -38, 42, -94, -119, -16, 96, 28, 85, -80, 49, -16, -4, 24, 72, -102, -100, 88, -19, -49, 117, 24, 44, 0, -2, -86, -123, -68, -7, -33, 29, -109, 119, 95, 35, 37, 34, -1, -58, 64, -123, -120, 49, -107, 120, -42, -119, 59, -115, -8, 119, -59, -112, 29, 116, 122, -13, 69, -57, 93, -109};
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
    msg.setTimeStamp(0.0424191428027);
    msg.setSource(59598U);
    msg.setSourceEntity(209U);
    msg.setDestination(46089U);
    msg.setDestinationEntity(8U);
    msg.content_type.assign("PVIEVYLAVXJYSZFWLSAKAIHWILGKXPCWIUPAZJAWDFOGSEOBCLNKCCNIVBUCBDMSSJJAOTGMAIWTMCDTGHYDIXVJWKHNVBODHRXOVQTBMRPKUCGEGQEHKPEDYUESIQLQKGUEBHJHNFYNOTKZECHFXPJRBRIOCZRMZOZVFSVSMPLWHBKYQWXGQJRXUNMAVYUTMMLEQKJSZUX");
    const char tmp_msg_0[] = {48, -32, 2, -128, 45, 56, 83, 85, 108, 121, 1, -127, -82, -110, 65, 51, -77, -89, -21, -29, -115, 81, -37, -81, 97, -118, 103, 79, 112, 94, 35, -39, 1, -45, -68, -89, -83, 58, 52, 64, 125, -65, 82, 74, -102, 75, -111, -38, -103, 59, -2, 107, 71, 79, 120, -23, 109, 80, -29, -56, -37, 54, -47, -79, 30, -39, -115, -57, 64, -69, -95, -8, 116, 41, 62, 98, 119, 68, 115, 34, 77, -102, -120, 88, 110, 95, 66, 24, 4, -91, -56, -78, -48, 37, 54, 95, 110, -93, 41, -72, 54, -109, 69, -57, 45, 121, -21, -59, 5, 103, 83, 23, -79, 66, 33, -121, -60, 19, -125, -25, -20, 69, 118, 13, 1, 110, 73, -114, 65, 123, 56, -73, 3, -79, -122, -112, -98, 15, 48, -98, -24, -55, 9, -98, 9, 65, -102, -38, 125, 104, 87, 114, 65, -48, 42, -102, -54, -18, -4, -73, -117, -80, 47, 87, -114, 98, 0, 123, 12, 83, 23, 55, -73, 17, 58, 74, 91, -108, -74, 96, -29, 84, -82, -112, -112, 76, 11, -104, 61, 52, 92, -4, -55, 121, 33, -94, -101, 102, 84, 60, -70, 76, 73, -118, -63, 96, -2, 88, 57, 108, 97, -29, 0, -58, -67, -75, -6, 98, -115, 13, -93, -9, -44, 1, -2, 50, -6, -77, 92, 110, 12, 74, 68, 10, 32, 57, 82, -113, -91};
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
    msg.setTimeStamp(0.626217577384);
    msg.setSource(16091U);
    msg.setSourceEntity(65U);
    msg.setDestination(2116U);
    msg.setDestinationEntity(220U);

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
    msg.setTimeStamp(0.189240212591);
    msg.setSource(1713U);
    msg.setSourceEntity(179U);
    msg.setDestination(57523U);
    msg.setDestinationEntity(69U);

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
    msg.setTimeStamp(0.446279427863);
    msg.setSource(37417U);
    msg.setSourceEntity(241U);
    msg.setDestination(55535U);
    msg.setDestinationEntity(19U);

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
    msg.setTimeStamp(0.814987061238);
    msg.setSource(55284U);
    msg.setSourceEntity(242U);
    msg.setDestination(36930U);
    msg.setDestinationEntity(69U);
    msg.target = 64491U;
    msg.bearing = 0.285390862959;
    msg.elevation = 0.0290443487802;

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
    msg.setTimeStamp(0.212321805517);
    msg.setSource(39895U);
    msg.setSourceEntity(39U);
    msg.setDestination(45918U);
    msg.setDestinationEntity(226U);
    msg.target = 40114U;
    msg.bearing = 0.981891045811;
    msg.elevation = 0.634475368694;

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
    msg.setTimeStamp(0.0552605178504);
    msg.setSource(54714U);
    msg.setSourceEntity(133U);
    msg.setDestination(8552U);
    msg.setDestinationEntity(97U);
    msg.target = 52720U;
    msg.bearing = 0.0772690563285;
    msg.elevation = 0.135975788663;

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
    msg.setTimeStamp(0.287008219814);
    msg.setSource(31577U);
    msg.setSourceEntity(220U);
    msg.setDestination(15100U);
    msg.setDestinationEntity(23U);
    msg.target = 5817U;
    msg.x = 0.324734803228;
    msg.y = 0.938691858196;
    msg.z = 0.014839787365;

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
    msg.setTimeStamp(0.133950038894);
    msg.setSource(54171U);
    msg.setSourceEntity(254U);
    msg.setDestination(42621U);
    msg.setDestinationEntity(176U);
    msg.target = 43704U;
    msg.x = 0.563774225936;
    msg.y = 0.224760349101;
    msg.z = 0.574153529448;

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
    msg.setTimeStamp(0.591364378647);
    msg.setSource(41991U);
    msg.setSourceEntity(70U);
    msg.setDestination(7629U);
    msg.setDestinationEntity(141U);
    msg.target = 26753U;
    msg.x = 0.381409334821;
    msg.y = 0.416368592958;
    msg.z = 0.675960524328;

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
    msg.setTimeStamp(0.257364386596);
    msg.setSource(51862U);
    msg.setSourceEntity(220U);
    msg.setDestination(38424U);
    msg.setDestinationEntity(108U);
    msg.target = 44130U;
    msg.lat = 0.968745883437;
    msg.lon = 0.819903007872;
    msg.z_units = 216U;
    msg.z = 0.197152849487;

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
    msg.setTimeStamp(0.51437437365);
    msg.setSource(32795U);
    msg.setSourceEntity(169U);
    msg.setDestination(60158U);
    msg.setDestinationEntity(61U);
    msg.target = 61645U;
    msg.lat = 0.580125481257;
    msg.lon = 0.000421358826152;
    msg.z_units = 193U;
    msg.z = 0.518539845192;

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
    msg.setTimeStamp(0.146047377662);
    msg.setSource(52520U);
    msg.setSourceEntity(136U);
    msg.setDestination(1635U);
    msg.setDestinationEntity(108U);
    msg.target = 6594U;
    msg.lat = 0.337642176744;
    msg.lon = 0.412456923658;
    msg.z_units = 135U;
    msg.z = 0.416692952477;

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
    msg.setTimeStamp(0.00886448937309);
    msg.setSource(2046U);
    msg.setSourceEntity(228U);
    msg.setDestination(42045U);
    msg.setDestinationEntity(176U);
    msg.locale.assign("WDKSWIQVZFGTQGAVJIHOVIGGBDKKSSGOANMPYXFJYATVUDOSWOJTICUMPFEUHDCQEHUTMBJULNDIRBHEGCXVSRMBEZAQHANWTNZAAVQHCWTIZRUFNWYOLLEMSKAYTXOYRNKNKWPJHMXZFYXLSPQJBUSJPNYVCMXJSLSPRBEWDKXQFYPCXOFEBFCVWTEOIYPHZTWRHRFMZPLPODBZEVEDJIUCOIKJMMNDGNRAZRUQXGTFCZLAIBBKYHGCLVUR");
    const char tmp_msg_0[] = {-119, -10, -111, 124, 46, 45, 54, -114, 62, -90, -4, -88, 5, -33, -25, -128, 75, 104, -29, 75, -85, 87, -117, -14, 39, -81, -64, 111, -91, -19, -48, -93, 4, -92, 15, 38, -71, -26, -118, 21, 97, -87, 25, 45, 52, -123, 118, 66};
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
    msg.setTimeStamp(0.806570612637);
    msg.setSource(21288U);
    msg.setSourceEntity(217U);
    msg.setDestination(30752U);
    msg.setDestinationEntity(3U);
    msg.locale.assign("WRVYPGFRLYGLNCLPHINYIVQLDHMRULKHYOYUFHZUARDWTXVLVCQDDMAWXKCFOZRDPNJNLVVOTGAFUMDGMMBRKOTIAVMZKOPIGKIXUFAXTJUTEQNWMQMLPQZLEYVIDEAZJBCIFJRESWGHOKQXKSUIZOJXDYHZTSRPDJUYQRDMVYCFSLSTGNHZNTF");
    const char tmp_msg_0[] = {3, 55, 34, 12, 82, -71, -96, 32, 117, -112, -80, 18, -48, 56, -115, 36, -11, 0, 47, -13, -118, -21, -3, 14, 25, 0, -13, -39, 119, -67, 62, -24, -120, -33, -116, 12, 114, -64, -18, 120, 13, 114, -8, -71, 49, 55, 104, -104, -56, -38, -6, -3, 3, -97, 115, -11, 3, -89, 16, -98, -16, 81, 38, 103, 16, 63, -110, 6, -128, -48, 23, 103, -46, -28, 77, 75, -115, 115, -3, 23, 116, 73, 125, 98, -116, -9, -94, -34, -33, 28, -1, 3, -51, 50, -102, -61, -19, 8, 104, -13, 13, 112, 44, -18, -31, 40, -53, 69, 126, -107, -43, 91, 42, -120, 111, -109, -4, 93, -44, 79, -26, 123, -37, 99, -82, 37, 77, 32, -68, -85, 71, -4, -105, -82, 66, -90, -21};
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
    msg.setTimeStamp(0.153599494201);
    msg.setSource(5790U);
    msg.setSourceEntity(36U);
    msg.setDestination(27251U);
    msg.setDestinationEntity(251U);
    msg.locale.assign("UQPNLTUTTRDNDDSVYQVXWNTXGOBAPCYYEXMHKJIKCKEZUDOFQPEHJHUZSSUWGBMHE");
    const char tmp_msg_0[] = {-99, 101, 86, -84, -88, -94, -4, 113, -35, 63, -110, 66, -99, 18, -14, -47, 45, -14, 13, -93, -53, -53, 107, -15, -112, 57, -106, 4, -62, 83, 50, -5, -120, -82, -114, -91, 4, -75, -12, -93, 93, 82, 7, -123, -10, -106, 81, 75, -84, -1, -107, 28, -9, -127, -8, 117, -11, -14, -18, -6, -104, -7, -69, 17, -94, 33, -118, 80, -17, -6, 28, 0, 74, 71, -76, -93, 3, 111, 116, -105, 25, -19, -16, -84, 42, -30, -79, 123, 96, -114, -120, 37, -21, -93, 95, -14};
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
    msg.setTimeStamp(0.449670308118);
    msg.setSource(57051U);
    msg.setSourceEntity(108U);
    msg.setDestination(49873U);
    msg.setDestinationEntity(121U);

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
    msg.setTimeStamp(0.797452539481);
    msg.setSource(13047U);
    msg.setSourceEntity(238U);
    msg.setDestination(49094U);
    msg.setDestinationEntity(253U);

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
    msg.setTimeStamp(0.887834518282);
    msg.setSource(40713U);
    msg.setSourceEntity(136U);
    msg.setDestination(33441U);
    msg.setDestinationEntity(189U);

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
    msg.setTimeStamp(0.531448289627);
    msg.setSource(52019U);
    msg.setSourceEntity(112U);
    msg.setDestination(41221U);
    msg.setDestinationEntity(59U);
    msg.camid = 17U;
    msg.x = 25361U;
    msg.y = 33326U;

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
    msg.setTimeStamp(0.418982342939);
    msg.setSource(50785U);
    msg.setSourceEntity(172U);
    msg.setDestination(53082U);
    msg.setDestinationEntity(113U);
    msg.camid = 189U;
    msg.x = 26631U;
    msg.y = 38009U;

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
    msg.setTimeStamp(0.565821788086);
    msg.setSource(38122U);
    msg.setSourceEntity(181U);
    msg.setDestination(16972U);
    msg.setDestinationEntity(126U);
    msg.camid = 70U;
    msg.x = 6762U;
    msg.y = 15442U;

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
    msg.setTimeStamp(0.779848789932);
    msg.setSource(48943U);
    msg.setSourceEntity(176U);
    msg.setDestination(61609U);
    msg.setDestinationEntity(225U);
    msg.camid = 21U;
    msg.x = 17270U;
    msg.y = 30299U;

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
    msg.setTimeStamp(0.833399587487);
    msg.setSource(62818U);
    msg.setSourceEntity(138U);
    msg.setDestination(53259U);
    msg.setDestinationEntity(77U);
    msg.camid = 3U;
    msg.x = 30279U;
    msg.y = 48957U;

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
    msg.setTimeStamp(0.762399524171);
    msg.setSource(7858U);
    msg.setSourceEntity(87U);
    msg.setDestination(20580U);
    msg.setDestinationEntity(213U);
    msg.camid = 59U;
    msg.x = 19869U;
    msg.y = 2745U;

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
    msg.setTimeStamp(0.587303425637);
    msg.setSource(20084U);
    msg.setSourceEntity(47U);
    msg.setDestination(15923U);
    msg.setDestinationEntity(107U);
    msg.tracking = 176U;
    msg.lat = 0.661580908427;
    msg.lon = 0.019906068165;
    msg.x = 0.0440753791718;
    msg.y = 0.500650726874;
    msg.z = 0.558038664065;

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
    msg.setTimeStamp(0.122811419493);
    msg.setSource(32150U);
    msg.setSourceEntity(122U);
    msg.setDestination(23526U);
    msg.setDestinationEntity(55U);
    msg.tracking = 201U;
    msg.lat = 0.931193447029;
    msg.lon = 0.120489990067;
    msg.x = 0.235470831395;
    msg.y = 0.247510011414;
    msg.z = 0.292892944279;

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
    msg.setTimeStamp(0.473865718034);
    msg.setSource(16475U);
    msg.setSourceEntity(185U);
    msg.setDestination(9004U);
    msg.setDestinationEntity(40U);
    msg.tracking = 138U;
    msg.lat = 0.549115262388;
    msg.lon = 0.451347066321;
    msg.x = 0.0187987040227;
    msg.y = 0.0625812282695;
    msg.z = 0.810357088389;

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
    msg.setTimeStamp(0.0237070132907);
    msg.setSource(50947U);
    msg.setSourceEntity(110U);
    msg.setDestination(56927U);
    msg.setDestinationEntity(91U);
    msg.target.assign("EUSIVZMANYQFDCWPSPOTVFAUIKTEZFVBEEFFLXHC");
    msg.lbearing = 0.844742498623;
    msg.lelevation = 0.183572696678;
    msg.bearing = 0.648905594617;
    msg.elevation = 0.10203672845;
    msg.phi = 0.041043535037;
    msg.theta = 0.570685727968;
    msg.psi = 0.864990363814;
    msg.accuracy = 0.104417881845;

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
    msg.setTimeStamp(0.725381893139);
    msg.setSource(27351U);
    msg.setSourceEntity(247U);
    msg.setDestination(46101U);
    msg.setDestinationEntity(250U);
    msg.target.assign("PMTJGIIUORHZCWHNZBWRJGEYISBEIBRXEHCCWMMKCWTAYGQOIPPNOGZZENKLMCAMIJRRUZZJBFEYLZBIJLNEHHGUQSSYTPWOOFBYQVUNFMQRUYAACLETNDUIQOPQVDYNZNSNWXXFCEDESUMVSGBKXTPDXJVHTWDWFFDLLRAFOIESRZMPAPRDOBWXCHYVAJSVIAGGVQLVUXKFSJDKSKLTRHTUGFJOTPLXBFDMXQKDWKVCPZGQ");
    msg.lbearing = 0.240352409419;
    msg.lelevation = 0.0965893071483;
    msg.bearing = 0.903650468324;
    msg.elevation = 0.0426674863205;
    msg.phi = 0.192327484542;
    msg.theta = 0.766388891685;
    msg.psi = 0.639253212253;
    msg.accuracy = 0.513841042747;

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
    msg.setTimeStamp(0.134707093089);
    msg.setSource(43269U);
    msg.setSourceEntity(202U);
    msg.setDestination(1399U);
    msg.setDestinationEntity(92U);
    msg.target.assign("JPXAKVFQIHUWNFOSWYILZKLQDTHKGBNKPKEQQFWDWDYXDUSVYNGNPCPMJQSDZEYRHLTISCSRGDRFOWADHVQKLVRNOUFRFVOHLEXMBBMWTCZGRRCBCTXQZFKIOYSMOPBDXOLCRXJPVEJGEQOCIYPJQMBJATELZNBCCAKUEIPDJHHEUGUKW");
    msg.lbearing = 0.518932298595;
    msg.lelevation = 0.109991229101;
    msg.bearing = 0.0648159212893;
    msg.elevation = 0.893740916803;
    msg.phi = 0.980876905058;
    msg.theta = 0.667540962791;
    msg.psi = 0.424231331615;
    msg.accuracy = 0.302685075985;

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
    msg.setTimeStamp(0.280182439146);
    msg.setSource(48043U);
    msg.setSourceEntity(163U);
    msg.setDestination(50235U);
    msg.setDestinationEntity(197U);
    msg.target.assign("RHIMGZIORSFKNJDDZLZBUISCOQGRAFJQTMBNXPSLOUUONIGAHSPVJGSAGRMWHZHYNGIHVYHYVBPFFSFOIEEWYZEDYCPBQXPXOQTUZMOQDCTATJQFVYHNESWMTXXEWKNKPPCXHFVKCSGAWMQZTNLWPVBASYBOFWRUGJLAJQUALIKLTLZBNYRXRCGMJMCDCLRHDIUVDFNOEDPAGWP");
    msg.x = 0.378934452405;
    msg.y = 0.190349797082;
    msg.z = 0.14865331479;
    msg.n = 0.0714949895124;
    msg.e = 0.552250110436;
    msg.d = 0.649932278058;
    msg.phi = 0.132214597611;
    msg.theta = 0.362936295565;
    msg.psi = 0.934655308735;
    msg.accuracy = 0.964731722546;

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
    msg.setTimeStamp(0.509091932008);
    msg.setSource(54974U);
    msg.setSourceEntity(112U);
    msg.setDestination(38423U);
    msg.setDestinationEntity(17U);
    msg.target.assign("ODCZTFFTKMWLONDWANPOMKASDKCALZZQWTVS");
    msg.x = 0.742490679587;
    msg.y = 0.671429855562;
    msg.z = 0.390715215206;
    msg.n = 0.156104024733;
    msg.e = 0.269066206715;
    msg.d = 0.61886363301;
    msg.phi = 0.857344325941;
    msg.theta = 0.677534413725;
    msg.psi = 0.215706158449;
    msg.accuracy = 0.949368778605;

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
    msg.setTimeStamp(0.670714596705);
    msg.setSource(17171U);
    msg.setSourceEntity(138U);
    msg.setDestination(18183U);
    msg.setDestinationEntity(145U);
    msg.target.assign("VCHHXDAASXEWQSSXTMBJMPDLIWGPXEWTPHSMEUBFRIMFQGWTGEUNDELCVMIJJRULIDWALOQXDXYDNSQUENRHLMLGUSLFSGOMBGKWJTZZNZKNRANABPIPAEEHKOQMBDZOFNCOZOPQCGTYCAJXBUHCYHOYICCSQIGGIKINLQTTUVXXOBVVLTADVOFYJKB");
    msg.x = 0.45358697675;
    msg.y = 0.148072467693;
    msg.z = 0.687606328515;
    msg.n = 0.255150147839;
    msg.e = 0.0538362362724;
    msg.d = 0.623315098786;
    msg.phi = 0.490023995507;
    msg.theta = 0.363738996655;
    msg.psi = 0.943028775721;
    msg.accuracy = 0.286609237944;

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
    msg.setTimeStamp(0.488558354518);
    msg.setSource(60376U);
    msg.setSourceEntity(22U);
    msg.setDestination(27391U);
    msg.setDestinationEntity(246U);
    msg.target.assign("FDMAEPZMVJCGIYLZOYSZOLVFVUGNFAUOHUVA");
    msg.lat = 0.241740604694;
    msg.lon = 0.15760154353;
    msg.z_units = 61U;
    msg.z = 0.502868480084;
    msg.accuracy = 0.155245662401;

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
    msg.setTimeStamp(0.163831919969);
    msg.setSource(64466U);
    msg.setSourceEntity(42U);
    msg.setDestination(9918U);
    msg.setDestinationEntity(204U);
    msg.target.assign("DDJJEUWNQXVWTWPLNCSMALULBKNORWZFHUYCEDU");
    msg.lat = 0.639821770985;
    msg.lon = 0.798629609353;
    msg.z_units = 63U;
    msg.z = 0.940616653733;
    msg.accuracy = 0.181422161914;

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
    msg.setTimeStamp(0.537072793419);
    msg.setSource(9162U);
    msg.setSourceEntity(244U);
    msg.setDestination(20677U);
    msg.setDestinationEntity(182U);
    msg.target.assign("JATBMWZIUKTOJIFQYSRVPDCJXNPOOYZKROIGZJJNURXIKHWDIMYNWGCBZQVAHENNWJLKNLLBNSSXAGZOQRXXQAVFSOBXYMSDGSPVVHMMI");
    msg.lat = 0.0181335679332;
    msg.lon = 0.546208615;
    msg.z_units = 237U;
    msg.z = 0.0244224676535;
    msg.accuracy = 0.662200645821;

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
    msg.setTimeStamp(0.506112789306);
    msg.setSource(46885U);
    msg.setSourceEntity(178U);
    msg.setDestination(16705U);
    msg.setDestinationEntity(109U);
    msg.name.assign("TFMQTFHVDYGTNSNRMJGTCAXCVEZJANBVRBEEDMKIWTYQEUUXGXKXFAQLBAVGRIXSDEQOIHBVPUZSUBINRZOMATEFLQWKYVIBMTHSIPIJHAAUEQPGIXIRKBRWSFLYLULHCKCXCHOAFBHNSAYYJONGJWPZWZLGVAYLSRGPDTODWK");
    msg.lat = 0.742626678309;
    msg.lon = 0.19824022984;
    msg.z = 0.711071905813;
    msg.z_units = 10U;

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
    msg.setTimeStamp(0.723381244783);
    msg.setSource(21862U);
    msg.setSourceEntity(242U);
    msg.setDestination(17774U);
    msg.setDestinationEntity(51U);
    msg.name.assign("UMDCAHFPLMRPXPAKZUIJXNDYTHPZZLGYSISQPRVFETCXITSVMNZLOPJYUWBQWXGFQEUYXPDWAJKMWFDENDJDSEJWXAEFECTJMOKTVQKNGGBAFEVYZFGTFW");
    msg.lat = 0.272926640725;
    msg.lon = 0.714673684384;
    msg.z = 0.470512047622;
    msg.z_units = 220U;

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
    msg.setTimeStamp(0.692220364546);
    msg.setSource(41648U);
    msg.setSourceEntity(102U);
    msg.setDestination(15141U);
    msg.setDestinationEntity(220U);
    msg.name.assign("BOKMCAJXPPPJFTZHUANTMIZPZHRQUKPYVGOQELICTEJACWPGALVTGYFJSVZAHBTVGUKWTWDFONHYEMUDTQSINXDJVQMXWFKOIRDDBNUYULREJYOXFNMGPMMBRBFSSBYUKJRQGAVQXOAIWSFYGTLZXR");
    msg.lat = 0.197498169923;
    msg.lon = 0.133411889066;
    msg.z = 0.705874015296;
    msg.z_units = 37U;

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
    msg.setTimeStamp(0.346988961045);
    msg.setSource(4075U);
    msg.setSourceEntity(176U);
    msg.setDestination(47740U);
    msg.setDestinationEntity(237U);
    msg.op = 239U;

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
    msg.setTimeStamp(0.717621360487);
    msg.setSource(1067U);
    msg.setSourceEntity(109U);
    msg.setDestination(23741U);
    msg.setDestinationEntity(251U);
    msg.op = 19U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("LQGLZSOOWUKIXXBCQNPWVHGRFTDFRLJKLMWPTOQFKAUJIZNYXDDPHXEVLWP");
    tmp_msg_0.lat = 0.976549599348;
    tmp_msg_0.lon = 0.26032654624;
    tmp_msg_0.z = 0.048581238867;
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
    msg.setTimeStamp(0.677406910675);
    msg.setSource(22974U);
    msg.setSourceEntity(71U);
    msg.setDestination(54989U);
    msg.setDestinationEntity(61U);
    msg.op = 219U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("HPZZTUMEMLLVCKMFMFHXGSLCAGLIIKPERZYTBTBWDCEPWAETJEJQEDKRJGQNLYWHVUISLJWLOWYHZTGYTDBKFJCWWNFQXXQEKGWLMVJKDUNSOQXCUSFRRIXOOHQIFNNSGCOUXYDAHBQAKDHJVFBHUI");
    tmp_msg_0.lat = 0.921345548053;
    tmp_msg_0.lon = 0.756282416881;
    tmp_msg_0.z = 0.132422061231;
    tmp_msg_0.z_units = 204U;
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
    msg.setTimeStamp(0.918406597702);
    msg.setSource(22098U);
    msg.setSourceEntity(134U);
    msg.setDestination(50049U);
    msg.setDestinationEntity(48U);
    msg.value = 0.989244846002;
    msg.type = 48U;

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
    msg.setTimeStamp(0.36972547611);
    msg.setSource(59202U);
    msg.setSourceEntity(43U);
    msg.setDestination(34379U);
    msg.setDestinationEntity(129U);
    msg.value = 0.295305416366;
    msg.type = 34U;

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
    msg.setTimeStamp(0.354426724616);
    msg.setSource(15477U);
    msg.setSourceEntity(143U);
    msg.setDestination(50195U);
    msg.setDestinationEntity(123U);
    msg.value = 0.323850148822;
    msg.type = 208U;

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
    msg.setTimeStamp(0.209903060093);
    msg.setSource(18983U);
    msg.setSourceEntity(82U);
    msg.setDestination(9352U);
    msg.setDestinationEntity(157U);
    msg.value = 0.104752509438;

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
    msg.setTimeStamp(0.902534932613);
    msg.setSource(35725U);
    msg.setSourceEntity(93U);
    msg.setDestination(63396U);
    msg.setDestinationEntity(243U);
    msg.value = 0.630600794252;

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
    msg.setTimeStamp(0.241544437749);
    msg.setSource(37073U);
    msg.setSourceEntity(78U);
    msg.setDestination(7767U);
    msg.setDestinationEntity(185U);
    msg.value = 0.747961889012;

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
    msg.setTimeStamp(0.162103123099);
    msg.setSource(21259U);
    msg.setSourceEntity(117U);
    msg.setDestination(55159U);
    msg.setDestinationEntity(28U);
    msg.timestamp_last_service = 0.216987357264;
    msg.time_next_service = 0.902305981076;
    msg.time_motor_next_service = 0.469560441097;
    msg.time_idle_ground = 0.716139152526;
    msg.time_idle_air = 0.223166865865;
    msg.time_idle_water = 0.562496072584;
    msg.time_idle_underwater = 0.716013234776;
    msg.time_idle_unknown = 0.904457896614;
    msg.time_motor_ground = 0.887622990145;
    msg.time_motor_air = 0.135068490793;
    msg.time_motor_water = 0.926617357162;
    msg.time_motor_underwater = 0.114885309742;
    msg.time_motor_unknown = 0.262327900584;
    msg.rpm_min = -19577;
    msg.rpm_max = -14091;
    msg.depth_max = 0.814927905947;

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
    msg.setTimeStamp(0.110386719714);
    msg.setSource(30884U);
    msg.setSourceEntity(58U);
    msg.setDestination(32265U);
    msg.setDestinationEntity(123U);
    msg.timestamp_last_service = 0.979440603154;
    msg.time_next_service = 0.277262929014;
    msg.time_motor_next_service = 0.754030349959;
    msg.time_idle_ground = 0.844332441819;
    msg.time_idle_air = 0.132703165952;
    msg.time_idle_water = 0.470559609458;
    msg.time_idle_underwater = 0.358978756919;
    msg.time_idle_unknown = 0.38811956857;
    msg.time_motor_ground = 0.533344098892;
    msg.time_motor_air = 0.48025534677;
    msg.time_motor_water = 0.112898767269;
    msg.time_motor_underwater = 0.455871735865;
    msg.time_motor_unknown = 0.816892478921;
    msg.rpm_min = -12529;
    msg.rpm_max = 7476;
    msg.depth_max = 0.209229463076;

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
    msg.setTimeStamp(0.352218509366);
    msg.setSource(8125U);
    msg.setSourceEntity(96U);
    msg.setDestination(62350U);
    msg.setDestinationEntity(79U);
    msg.timestamp_last_service = 0.784284850649;
    msg.time_next_service = 0.209612767547;
    msg.time_motor_next_service = 0.850881191994;
    msg.time_idle_ground = 0.401058116305;
    msg.time_idle_air = 0.64432145356;
    msg.time_idle_water = 0.340126416755;
    msg.time_idle_underwater = 0.782287226046;
    msg.time_idle_unknown = 0.0268493831503;
    msg.time_motor_ground = 0.213734929094;
    msg.time_motor_air = 0.472349410113;
    msg.time_motor_water = 0.217717220178;
    msg.time_motor_underwater = 0.384535681354;
    msg.time_motor_unknown = 0.692832954156;
    msg.rpm_min = -28281;
    msg.rpm_max = 30648;
    msg.depth_max = 0.404664973524;

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
    msg.setTimeStamp(0.257210747754);
    msg.setSource(49893U);
    msg.setSourceEntity(223U);
    msg.setDestination(58862U);
    msg.setDestinationEntity(174U);
    msg.severity = 134U;
    msg.text.assign("UPFRNLLDMIVYZCGPHMDJWKVNKJGBHTIFJVLNMPTKGCOFAAIAZPPABHIRSCNYTQSMMKAHRXUCZKAXWIKEECTEBBSRWNSZPTUQFULHCIIQEXOZEFVJFBRQVFQRMALYXNVYJMDWYGEQHYQLFSAYAGSBDONKLUDIWBYVXWDTOHSWLELXJTQMKDFPODYCSXTRZHWGNQTJSJVIDBPTVZPM");

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
    msg.setTimeStamp(0.820663736845);
    msg.setSource(3812U);
    msg.setSourceEntity(238U);
    msg.setDestination(23402U);
    msg.setDestinationEntity(196U);
    msg.severity = 154U;
    msg.text.assign("GXICYOHTLYDNIXIFWNHBZUGUNLMHVRACKZWOEPWNCEYDUSNTOBOBBASYVQLYCESRHZSKTKQQXTGJMWPDAPODMMSAZRBAYIJGYKFXNXYSVCLBWZKOPJMJQFSKJGVLQLHISZOOLCJNKFUXSAIRWLXACAJIHHWFGUTMGDMNZHDFRBXPYQIPWNMVEWEUQPUEUTQQTIPUEZEXEW");

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
    msg.setTimeStamp(0.130194759301);
    msg.setSource(18454U);
    msg.setSourceEntity(253U);
    msg.setDestination(43189U);
    msg.setDestinationEntity(237U);
    msg.severity = 251U;
    msg.text.assign("XVZLTVNMJKLGRDBLLFFWQCKXVPIKOYYSXMPUUFIQTWNZYWUIFZSEJBVHMONGPOUDURMYONBLESEIQYHSXQRWAATHOJGAYSWBDKLICAINTJXGDMLATCTQNQJHXAKRSDGZCEVBPKFXANCRZILSFZROVRDEBAEWEJFEDNGTDUTSRUJPPUGSMHRHJVHIEMPYHJOUWCZMK");

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
    msg.setTimeStamp(0.493757903287);
    msg.setSource(29521U);
    msg.setSourceEntity(23U);
    msg.setDestination(15057U);
    msg.setDestinationEntity(210U);
    msg.channel = -93;
    msg.value = 778480627;
    msg.gain = 88U;

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
    msg.setTimeStamp(0.596862767467);
    msg.setSource(39537U);
    msg.setSourceEntity(71U);
    msg.setDestination(10736U);
    msg.setDestinationEntity(86U);
    msg.channel = -84;
    msg.value = -1612931999;
    msg.gain = 28U;

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
    msg.setTimeStamp(0.675431809148);
    msg.setSource(14685U);
    msg.setSourceEntity(105U);
    msg.setDestination(27494U);
    msg.setDestinationEntity(45U);
    msg.channel = -83;
    msg.value = 1125010883;
    msg.gain = 142U;

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
    msg.setTimeStamp(0.981388383742);
    msg.setSource(54660U);
    msg.setSourceEntity(23U);
    msg.setDestination(16406U);
    msg.setDestinationEntity(127U);
    msg.ch01 = 0.203211402098;
    msg.ch02 = 0.394838006256;
    msg.ch03 = 0.527557122525;
    msg.ch04 = 0.935265861373;
    msg.ch05 = 0.463041977354;
    msg.ch06 = 0.672977131666;
    msg.ch07 = 0.637018013131;
    msg.ch08 = 0.409430732368;
    msg.ch09 = 0.74514596588;
    msg.ch10 = 0.0604910068343;
    msg.ch11 = 0.421617400029;
    msg.ch12 = 0.925889112045;
    msg.ch13 = 0.476100080793;
    msg.ch14 = 0.184986569999;
    msg.ch15 = 0.557225605829;
    msg.ch16 = 0.13080671849;

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
    msg.setTimeStamp(0.584835827327);
    msg.setSource(45521U);
    msg.setSourceEntity(35U);
    msg.setDestination(37739U);
    msg.setDestinationEntity(90U);
    msg.ch01 = 0.970397426346;
    msg.ch02 = 0.99283455746;
    msg.ch03 = 0.919595420753;
    msg.ch04 = 0.57366299811;
    msg.ch05 = 0.345818099728;
    msg.ch06 = 0.950240582923;
    msg.ch07 = 0.82984873973;
    msg.ch08 = 0.476470159959;
    msg.ch09 = 0.333705212559;
    msg.ch10 = 0.783682756077;
    msg.ch11 = 0.0760867672528;
    msg.ch12 = 0.744021523053;
    msg.ch13 = 0.644928821476;
    msg.ch14 = 0.269093517052;
    msg.ch15 = 0.418188544555;
    msg.ch16 = 0.705126185062;

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
    msg.setTimeStamp(0.0440555100373);
    msg.setSource(27453U);
    msg.setSourceEntity(158U);
    msg.setDestination(55597U);
    msg.setDestinationEntity(172U);
    msg.ch01 = 0.762275830575;
    msg.ch02 = 0.725277054235;
    msg.ch03 = 0.505589102881;
    msg.ch04 = 0.0456575854637;
    msg.ch05 = 0.83570556007;
    msg.ch06 = 0.126535768698;
    msg.ch07 = 0.896779256034;
    msg.ch08 = 0.201697822406;
    msg.ch09 = 0.987852251023;
    msg.ch10 = 0.259101286373;
    msg.ch11 = 0.0339745519588;
    msg.ch12 = 0.663621413275;
    msg.ch13 = 0.941988902444;
    msg.ch14 = 0.0377884497011;
    msg.ch15 = 0.873436268687;
    msg.ch16 = 0.696375864464;

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
    msg.setTimeStamp(0.69142520108);
    msg.setSource(21023U);
    msg.setSourceEntity(247U);
    msg.setDestination(4228U);
    msg.setDestinationEntity(158U);
    msg.time = 0.397102232107;
    msg.ang = 0.376678408002;

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
    msg.setTimeStamp(0.515563756335);
    msg.setSource(19623U);
    msg.setSourceEntity(175U);
    msg.setDestination(38127U);
    msg.setDestinationEntity(197U);
    msg.time = 0.441455813486;
    msg.ang = 0.393584093818;

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
    msg.setTimeStamp(0.967291783162);
    msg.setSource(28007U);
    msg.setSourceEntity(200U);
    msg.setDestination(18336U);
    msg.setDestinationEntity(133U);
    msg.time = 0.17345626888;
    msg.ang = 0.641069744834;

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
    msg.setTimeStamp(0.250074291883);
    msg.setSource(29997U);
    msg.setSourceEntity(139U);
    msg.setDestination(4488U);
    msg.setDestinationEntity(113U);
    msg.value = 0.347539499396;

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
    msg.setTimeStamp(0.717133515899);
    msg.setSource(59220U);
    msg.setSourceEntity(159U);
    msg.setDestination(59762U);
    msg.setDestinationEntity(132U);
    msg.value = 0.545064322979;

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
    msg.setTimeStamp(0.483803873799);
    msg.setSource(7501U);
    msg.setSourceEntity(144U);
    msg.setDestination(58017U);
    msg.setDestinationEntity(47U);
    msg.value = 0.873537385525;

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
    msg.setTimeStamp(0.899134942641);
    msg.setSource(12424U);
    msg.setSourceEntity(242U);
    msg.setDestination(34073U);
    msg.setDestinationEntity(23U);
    msg.value = 0.240444173727;

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
    msg.setTimeStamp(0.431228074924);
    msg.setSource(7836U);
    msg.setSourceEntity(221U);
    msg.setDestination(58431U);
    msg.setDestinationEntity(67U);
    msg.value = 0.557742989024;

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
    msg.setTimeStamp(0.341276530355);
    msg.setSource(43008U);
    msg.setSourceEntity(84U);
    msg.setDestination(64449U);
    msg.setDestinationEntity(91U);
    msg.value = 0.175153249903;

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
    msg.setTimeStamp(0.871548107601);
    msg.setSource(21843U);
    msg.setSourceEntity(142U);
    msg.setDestination(29174U);
    msg.setDestinationEntity(247U);
    msg.value = 0.598846127226;

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
    msg.setTimeStamp(0.907076562138);
    msg.setSource(16063U);
    msg.setSourceEntity(45U);
    msg.setDestination(23647U);
    msg.setDestinationEntity(131U);
    msg.value = 0.108528471651;

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
    msg.setTimeStamp(0.722978451602);
    msg.setSource(1362U);
    msg.setSourceEntity(173U);
    msg.setDestination(19171U);
    msg.setDestinationEntity(13U);
    msg.value = 0.987398702919;

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
    msg.setTimeStamp(0.501020995076);
    msg.setSource(47363U);
    msg.setSourceEntity(30U);
    msg.setDestination(31978U);
    msg.setDestinationEntity(178U);
    msg.l2 = 58;
    msg.l3 = -51;
    msg.iridium = -70;
    msg.modem = -64;
    msg.pumps = 72;
    msg.vhf = -90;

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
    msg.setTimeStamp(0.350305446891);
    msg.setSource(32679U);
    msg.setSourceEntity(220U);
    msg.setDestination(7029U);
    msg.setDestinationEntity(152U);
    msg.l2 = 47;
    msg.l3 = 76;
    msg.iridium = 33;
    msg.modem = 38;
    msg.pumps = -29;
    msg.vhf = 43;

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
    msg.setTimeStamp(0.111715618165);
    msg.setSource(61217U);
    msg.setSourceEntity(7U);
    msg.setDestination(29165U);
    msg.setDestinationEntity(138U);
    msg.l2 = -12;
    msg.l3 = 12;
    msg.iridium = 68;
    msg.modem = -79;
    msg.pumps = -95;
    msg.vhf = 119;

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
    msg.setTimeStamp(0.0529581496537);
    msg.setSource(27420U);
    msg.setSourceEntity(51U);
    msg.setDestination(20191U);
    msg.setDestinationEntity(59U);
    msg.angle = 0.883813796246;
    msg.reference.assign("VQASTUOWIPNVYZQMKAIYNBQSWAIFJUXHWXWNBQSAEHDCKZHSIMUJXVGHZSERFXEGCJVGTDDBCOYDEEGWFHDLNUNYGDTLOBUCIBEBKCMYPKJVYDFKXQALLSQJZMOPNTGLBFEONJZVXRCQEPJKWVRTRROZZHHITVIHQBLAFYORLHOMPWQCNDRMNCPBZMGLIRGOWTXJUYCKDA");
    msg.speed = 0.827467771413;

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
    msg.setTimeStamp(0.292912885547);
    msg.setSource(53716U);
    msg.setSourceEntity(4U);
    msg.setDestination(27438U);
    msg.setDestinationEntity(172U);
    msg.angle = 0.150620823469;
    msg.reference.assign("IDJRXKMZZQMEVJLOUGOSYLNRXNGTNTWRCSQKPHKCSHFGDGHUQRIQ");
    msg.speed = 0.740270086149;

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
    msg.setTimeStamp(0.0673710956607);
    msg.setSource(3083U);
    msg.setSourceEntity(29U);
    msg.setDestination(40898U);
    msg.setDestinationEntity(208U);
    msg.angle = 0.590255077956;
    msg.reference.assign("SUXFGPVMAMBDWTPQGGPNCEFLXBHNHITOAHCLSKKUUYXFBBRSKOMAQNMBJZZNNTQIFKHCSTSQETEARGYOZVAUWSWCOUEYMPPYGKGHDVPDW");
    msg.speed = 0.350212637111;

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
    msg.setTimeStamp(0.267983417046);
    msg.setSource(33705U);
    msg.setSourceEntity(90U);
    msg.setDestination(29361U);
    msg.setDestinationEntity(26U);
    msg.angle = 0.76594616324;
    msg.speed = 0.555847302822;

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
    msg.setTimeStamp(0.821750629964);
    msg.setSource(56015U);
    msg.setSourceEntity(18U);
    msg.setDestination(24400U);
    msg.setDestinationEntity(177U);
    msg.angle = 0.0381676919826;
    msg.speed = 0.652307229046;

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
    msg.setTimeStamp(0.704038156522);
    msg.setSource(54619U);
    msg.setSourceEntity(125U);
    msg.setDestination(19134U);
    msg.setDestinationEntity(154U);
    msg.angle = 0.222294934397;
    msg.speed = 0.467680094837;

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
    msg.setTimeStamp(0.561280049716);
    msg.setSource(49784U);
    msg.setSourceEntity(27U);
    msg.setDestination(44487U);
    msg.setDestinationEntity(37U);
    msg.dir = 0.652692455833;
    msg.speed = 0.88149944945;

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
    msg.setTimeStamp(0.895886865407);
    msg.setSource(53689U);
    msg.setSourceEntity(246U);
    msg.setDestination(31203U);
    msg.setDestinationEntity(131U);
    msg.dir = 0.886145505726;
    msg.speed = 0.712272819963;

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
    msg.setTimeStamp(0.60647150263);
    msg.setSource(3001U);
    msg.setSourceEntity(142U);
    msg.setDestination(54718U);
    msg.setDestinationEntity(11U);
    msg.dir = 0.721135313971;
    msg.speed = 0.487987656465;

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
    msg.setTimeStamp(0.87027559363);
    msg.setSource(51997U);
    msg.setSourceEntity(23U);
    msg.setDestination(5931U);
    msg.setDestinationEntity(125U);
    msg.x = 0.773469408369;
    msg.y = 0.164484755626;
    msg.z1 = 0.0463330032816;
    msg.z2 = 0.341276783138;

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
    msg.setTimeStamp(0.836252562853);
    msg.setSource(44593U);
    msg.setSourceEntity(227U);
    msg.setDestination(41318U);
    msg.setDestinationEntity(233U);
    msg.x = 0.802030810893;
    msg.y = 0.48877998896;
    msg.z1 = 0.992310669535;
    msg.z2 = 0.826332841295;

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
    msg.setTimeStamp(0.961289256397);
    msg.setSource(51133U);
    msg.setSourceEntity(182U);
    msg.setDestination(48716U);
    msg.setDestinationEntity(213U);
    msg.x = 0.445762109598;
    msg.y = 0.64245757225;
    msg.z1 = 0.570647962381;
    msg.z2 = 0.249072456045;

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
    msg.setTimeStamp(0.936894810222);
    msg.setSource(40383U);
    msg.setSourceEntity(15U);
    msg.setDestination(10598U);
    msg.setDestinationEntity(171U);
    msg.mmsi = 0.894319060703;
    msg.lat = 0.791290309989;
    msg.lon = 0.25304369759;
    msg.x = 0.556694528989;
    msg.y = 0.678611200798;
    msg.speed = 0.583436301507;
    msg.course = 0.936935975064;
    msg.dist = 0.909025545778;
    msg.length = 0.229175799999;
    msg.width = 0.315257365635;
    msg.o_vect = 0.122973039605;

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
    msg.setTimeStamp(0.302795514484);
    msg.setSource(16169U);
    msg.setSourceEntity(98U);
    msg.setDestination(10859U);
    msg.setDestinationEntity(223U);
    msg.mmsi = 0.436070616794;
    msg.lat = 0.223495961721;
    msg.lon = 0.96356561559;
    msg.x = 0.0770893677542;
    msg.y = 0.449322017556;
    msg.speed = 0.34410546689;
    msg.course = 0.359275175327;
    msg.dist = 0.237219343605;
    msg.length = 0.253853874194;
    msg.width = 0.483992043471;
    msg.o_vect = 0.0670068045888;

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
    msg.setTimeStamp(0.334032106553);
    msg.setSource(7045U);
    msg.setSourceEntity(250U);
    msg.setDestination(10341U);
    msg.setDestinationEntity(88U);
    msg.mmsi = 0.253786256922;
    msg.lat = 0.109368702905;
    msg.lon = 0.165155855359;
    msg.x = 0.617636147153;
    msg.y = 0.889481578815;
    msg.speed = 0.358073021852;
    msg.course = 0.313062115386;
    msg.dist = 0.608102070802;
    msg.length = 0.855575397088;
    msg.width = 0.48095427917;
    msg.o_vect = 0.579771433929;

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
    msg.setTimeStamp(0.281576411551);
    msg.setSource(64001U);
    msg.setSourceEntity(224U);
    msg.setDestination(49304U);
    msg.setDestinationEntity(215U);
    msg.locations.assign("JUWAQPBLEWSVCDPNHNIXXVGTFMHRNKDLKNEGMCUTPCAANBICPJNCLPQKEQKUGDYZVWIRMXXFJHGQOXRKBXGTPBRRGENOLIVFNSTXPDYTQBMSRHVZVUBVFHEWDNMZWAPWTLSQCEVWYGDZDHVCIUMZXMFKYUAQYZYSCERLHRFZKRLBAUTOZJSWOOTGKMJIFXTIBPGMKQUAHIACUDFKWXGYHLTVEIFSOSWS");

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
    msg.setTimeStamp(0.0448206902615);
    msg.setSource(48618U);
    msg.setSourceEntity(75U);
    msg.setDestination(55037U);
    msg.setDestinationEntity(26U);
    msg.locations.assign("OAKHXEXPVPCQJXMUHQCLKSGICNTCFELXYJGBBZEJTYRBQLURQUSPEUCVLVATUFHBHBDHZSNUALCYKBGWJQZROVUUDTEZHBGPMMOQVYFDWNLTKMVEYKIVHWDZUSNRHCHXDJCDWNQARNBYYFMPJSIKOFXSVGWJTAOEBGYRWMTWMYOMZDKQLVOAQCIGZEOCWBRTAGHZXMFTLZWEVWIXFKIPDDIPKNDNSKSMFEJRNITRFLJGFJSZXAOYAN");

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
    msg.setTimeStamp(0.301852897227);
    msg.setSource(4611U);
    msg.setSourceEntity(62U);
    msg.setDestination(56835U);
    msg.setDestinationEntity(99U);
    msg.locations.assign("PMFMNIMPPHYCJHAYPHVBHWNDHJKBXCXOMTMVYOGTQQASFFQOUZTSANDDASRKLIKQBNCPPFKWEKTKJWIFMTBACQTZWJLFWVFRDRIXAZZFYRDGTYDDMFRCAPOBULZMKXJCYGEQENVVCRSHTHIQULNOZDNWVSGRGEBMSVHERIXLOEGSRSBXU");

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
    msg.setTimeStamp(0.223525282733);
    msg.setSource(19276U);
    msg.setSourceEntity(197U);
    msg.setDestination(416U);
    msg.setDestinationEntity(130U);
    msg.value = 0.119513648288;

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
    msg.setTimeStamp(0.164662229443);
    msg.setSource(39752U);
    msg.setSourceEntity(104U);
    msg.setDestination(9859U);
    msg.setDestinationEntity(241U);
    msg.value = 0.661406990343;

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
    msg.setTimeStamp(0.584579146825);
    msg.setSource(22800U);
    msg.setSourceEntity(135U);
    msg.setDestination(2178U);
    msg.setDestinationEntity(244U);
    msg.value = 0.344565626059;

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
    msg.setTimeStamp(0.637446083013);
    msg.setSource(5633U);
    msg.setSourceEntity(83U);
    msg.setDestination(8177U);
    msg.setDestinationEntity(7U);
    msg.beam1 = 0.705260831204;
    msg.beam2 = 0.145963447979;
    msg.beam3 = 0.277245691392;
    msg.beam4 = 0.983524537555;

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
    msg.setTimeStamp(0.568975775398);
    msg.setSource(28620U);
    msg.setSourceEntity(209U);
    msg.setDestination(32761U);
    msg.setDestinationEntity(201U);
    msg.beam1 = 0.730084644912;
    msg.beam2 = 0.41936385022;
    msg.beam3 = 0.469033235419;
    msg.beam4 = 0.90965035111;

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
    msg.setTimeStamp(0.292290521305);
    msg.setSource(16421U);
    msg.setSourceEntity(130U);
    msg.setDestination(36572U);
    msg.setDestinationEntity(37U);
    msg.beam1 = 0.0221836541456;
    msg.beam2 = 0.14465091052;
    msg.beam3 = 0.710388484155;
    msg.beam4 = 0.877123053643;

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
    msg.setTimeStamp(0.964235397719);
    msg.setSource(5566U);
    msg.setSourceEntity(183U);
    msg.setDestination(3036U);
    msg.setDestinationEntity(134U);
    msg.beam1 = 91U;
    msg.beam2 = 25U;
    msg.beam3 = 85U;
    msg.beam4 = 217U;

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
    msg.setTimeStamp(0.729282593272);
    msg.setSource(59066U);
    msg.setSourceEntity(44U);
    msg.setDestination(6356U);
    msg.setDestinationEntity(44U);
    msg.beam1 = 106U;
    msg.beam2 = 185U;
    msg.beam3 = 226U;
    msg.beam4 = 53U;

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
    msg.setTimeStamp(0.824061426222);
    msg.setSource(42354U);
    msg.setSourceEntity(251U);
    msg.setDestination(64231U);
    msg.setDestinationEntity(238U);
    msg.beam1 = 212U;
    msg.beam2 = 224U;
    msg.beam3 = 30U;
    msg.beam4 = 98U;

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
    msg.setTimeStamp(0.988431555441);
    msg.setSource(53258U);
    msg.setSourceEntity(10U);
    msg.setDestination(55215U);
    msg.setDestinationEntity(248U);
    msg.cellposition = 0.321778647303;

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
    msg.setTimeStamp(0.524632071766);
    msg.setSource(14869U);
    msg.setSourceEntity(103U);
    msg.setDestination(37075U);
    msg.setDestinationEntity(1U);
    msg.cellposition = 0.338812594864;

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
    msg.setTimeStamp(0.49314631166);
    msg.setSource(31461U);
    msg.setSourceEntity(35U);
    msg.setDestination(21524U);
    msg.setDestinationEntity(201U);
    msg.cellposition = 0.83903129682;

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
    msg.setTimeStamp(0.642729124876);
    msg.setSource(24549U);
    msg.setSourceEntity(162U);
    msg.setDestination(7847U);
    msg.setDestinationEntity(230U);
    msg.beams = 156U;
    msg.cells = 173U;
    msg.coord_sys = 25U;
    IMC::CurrentProfileCell tmp_msg_0;
    tmp_msg_0.cellposition = 0.207249966332;
    IMC::ADCPBeam tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.vel = 0.758565216762;
    tmp_tmp_msg_0_0.amp = 0.861940856911;
    tmp_tmp_msg_0_0.cor = 13U;
    tmp_msg_0.beams.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.858613811358);
    msg.setSource(59261U);
    msg.setSourceEntity(12U);
    msg.setDestination(2628U);
    msg.setDestinationEntity(232U);
    msg.beams = 174U;
    msg.cells = 47U;
    msg.coord_sys = 22U;
    IMC::CurrentProfileCell tmp_msg_0;
    tmp_msg_0.cellposition = 0.714025988935;
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
    msg.setTimeStamp(0.0545640291343);
    msg.setSource(627U);
    msg.setSourceEntity(163U);
    msg.setDestination(42948U);
    msg.setDestinationEntity(190U);
    msg.beams = 64U;
    msg.cells = 96U;
    msg.coord_sys = 66U;
    IMC::CurrentProfileCell tmp_msg_0;
    tmp_msg_0.cellposition = 0.0970190034147;
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
    msg.setTimeStamp(0.397870752195);
    msg.setSource(5866U);
    msg.setSourceEntity(32U);
    msg.setDestination(22008U);
    msg.setDestinationEntity(82U);
    msg.vel = 0.46392475367;
    msg.amp = 0.776750925931;
    msg.cor = 227U;

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
    msg.setTimeStamp(0.427828361619);
    msg.setSource(45854U);
    msg.setSourceEntity(40U);
    msg.setDestination(36829U);
    msg.setDestinationEntity(105U);
    msg.vel = 0.855723111751;
    msg.amp = 0.994835777817;
    msg.cor = 188U;

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
    msg.setTimeStamp(0.677038796358);
    msg.setSource(55320U);
    msg.setSourceEntity(67U);
    msg.setDestination(13111U);
    msg.setDestinationEntity(200U);
    msg.vel = 0.242375283932;
    msg.amp = 0.245308708713;
    msg.cor = 228U;

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
    msg.setTimeStamp(0.463462208955);
    msg.setSource(20602U);
    msg.setSourceEntity(227U);
    msg.setDestination(57802U);
    msg.setDestinationEntity(254U);
    msg.serial_no = 1078473918U;
    msg.unix_timestamp = 1535516240U;
    msg.millis = 39203U;
    msg.trans_protocol = 34U;
    msg.trans_id = 2005416108U;
    msg.trans_data = 28560U;
    msg.snr = 138U;
    msg.trans_freq = 109U;
    msg.recv_mem_addr = 46778U;
    msg.lat = 0.320425792284;
    msg.lon = 0.538066348337;

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
    msg.setTimeStamp(0.954864502203);
    msg.setSource(34568U);
    msg.setSourceEntity(34U);
    msg.setDestination(33757U);
    msg.setDestinationEntity(45U);
    msg.serial_no = 2177302771U;
    msg.unix_timestamp = 3622469599U;
    msg.millis = 6745U;
    msg.trans_protocol = 29U;
    msg.trans_id = 317188374U;
    msg.trans_data = 32663U;
    msg.snr = 96U;
    msg.trans_freq = 111U;
    msg.recv_mem_addr = 11469U;
    msg.lat = 0.824610033374;
    msg.lon = 0.0720265885073;

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
    msg.setTimeStamp(0.238672457924);
    msg.setSource(63320U);
    msg.setSourceEntity(230U);
    msg.setDestination(22804U);
    msg.setDestinationEntity(17U);
    msg.serial_no = 3308068894U;
    msg.unix_timestamp = 1703989605U;
    msg.millis = 44090U;
    msg.trans_protocol = 44U;
    msg.trans_id = 3124425558U;
    msg.trans_data = 7764U;
    msg.snr = 139U;
    msg.trans_freq = 66U;
    msg.recv_mem_addr = 54090U;
    msg.lat = 0.655383836362;
    msg.lon = 0.222764887567;

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
    msg.setTimeStamp(0.188383713469);
    msg.setSource(62149U);
    msg.setSourceEntity(153U);
    msg.setDestination(56918U);
    msg.setDestinationEntity(54U);
    msg.serial_no = 2563945892U;
    msg.unix_timestamp = 2382624208U;
    msg.temperature = 0.89547360102;
    msg.avg_noise_level = 252U;
    msg.peak_noise_level = 82U;
    msg.recv_listen_freq = 218U;
    msg.recv_mem_addr = 46337U;

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
    msg.setTimeStamp(0.253997190687);
    msg.setSource(24058U);
    msg.setSourceEntity(18U);
    msg.setDestination(12048U);
    msg.setDestinationEntity(176U);
    msg.serial_no = 3304713913U;
    msg.unix_timestamp = 2201403841U;
    msg.temperature = 0.335552852426;
    msg.avg_noise_level = 91U;
    msg.peak_noise_level = 179U;
    msg.recv_listen_freq = 115U;
    msg.recv_mem_addr = 37024U;

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
    msg.setTimeStamp(0.377657484549);
    msg.setSource(34055U);
    msg.setSourceEntity(247U);
    msg.setDestination(11690U);
    msg.setDestinationEntity(83U);
    msg.serial_no = 1309536017U;
    msg.unix_timestamp = 3285908297U;
    msg.temperature = 0.82186399361;
    msg.avg_noise_level = 28U;
    msg.peak_noise_level = 192U;
    msg.recv_listen_freq = 32U;
    msg.recv_mem_addr = 4964U;

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
    msg.setTimeStamp(0.967446927732);
    msg.setSource(52706U);
    msg.setSourceEntity(76U);
    msg.setDestination(43104U);
    msg.setDestinationEntity(75U);
    msg.frequency = 1047677505U;
    msg.info.assign("SHLOIFZBTQJJIXEWXWKIVTNPXLSQFKTUVJWHRPQCNSKYNHDQZSVYYUVDKSOWQCRSQMGBDARLXHDBOIPDNMQUEMGYJVFXAWHGYCLNCKOEQUSJZUMRKVCDYNLMGOBUKDQXKBZAPRYDOAMMUZPJJNEOLBEEMTREWORXANCZSQJKISWPBEYMTIPBCZRWAIFBVUUOGCVGLFGHEFPZIYLEGFDKVNTPFLTWZFZUHAALSCHNTTXRYGVHOWFAHRJAMB");

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
    msg.setTimeStamp(0.0254757828684);
    msg.setSource(20070U);
    msg.setSourceEntity(77U);
    msg.setDestination(55955U);
    msg.setDestinationEntity(120U);
    msg.frequency = 3285177554U;
    msg.info.assign("KFYSBYRSZWOHDFSCXSPIPFJCDNUTKZOXRHHNAHWOOXKMRBGUROCTXIMQCINWRLQYOMJGSJPDLKZYGNDAUIQBXLJITQPWZVKFYQHDJBAQGEFORMZEDLSXPTQVZFPRPKJLAUGFSXFHDIYICEZIOCZJETWWTUVYZEUSTMVOWUDMDZGWGPKBGBWLAHFQKJBNGKJOETMLMVSQIXAQLXHRFYELAEPUMDSVLXVAHWCIMCEBA");

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
    msg.setTimeStamp(0.130038112513);
    msg.setSource(31631U);
    msg.setSourceEntity(220U);
    msg.setDestination(25142U);
    msg.setDestinationEntity(152U);
    msg.frequency = 3348494237U;
    msg.info.assign("NQRMRPWMQFARNIVEKNOQOWETYMIEYLSOABIRZSECGZGBVQYUWQLPFVIBHDBDFPYBZJWXKGMQTQZMPZTDCLRKS");

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
    msg.setTimeStamp(0.399721673171);
    msg.setSource(29731U);
    msg.setSourceEntity(106U);
    msg.setDestination(6163U);
    msg.setDestinationEntity(130U);
    msg.adcp = 0;
    msg.adcp_dur = 2065515413U;
    msg.adcp_fr = 1772633582U;
    msg.ctd = 18;
    msg.ctd_dur = 726362564U;
    msg.ctd_fr = 2554626667U;
    msg.opt = 49;
    msg.opt_dur = 899915963U;
    msg.opt_fr = 3704749989U;
    msg.tbl = 5;
    msg.tbl_dur = 3440969057U;
    msg.tbl_fr = 2868746949U;
    msg.eco = 81;
    msg.eco_dur = 490432736U;
    msg.eco_fr = 372013234U;

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
    msg.setTimeStamp(0.0855956754261);
    msg.setSource(27828U);
    msg.setSourceEntity(62U);
    msg.setDestination(3690U);
    msg.setDestinationEntity(43U);
    msg.adcp = -67;
    msg.adcp_dur = 4126044487U;
    msg.adcp_fr = 117714471U;
    msg.ctd = 62;
    msg.ctd_dur = 2596917261U;
    msg.ctd_fr = 3042800026U;
    msg.opt = 9;
    msg.opt_dur = 2053110331U;
    msg.opt_fr = 2773489147U;
    msg.tbl = -107;
    msg.tbl_dur = 1158563522U;
    msg.tbl_fr = 3579620641U;
    msg.eco = 17;
    msg.eco_dur = 4151925194U;
    msg.eco_fr = 3756187330U;

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
    msg.setTimeStamp(0.659939777959);
    msg.setSource(36678U);
    msg.setSourceEntity(32U);
    msg.setDestination(25466U);
    msg.setDestinationEntity(116U);
    msg.adcp = 14;
    msg.adcp_dur = 3578625550U;
    msg.adcp_fr = 2508405916U;
    msg.ctd = 25;
    msg.ctd_dur = 4079267276U;
    msg.ctd_fr = 2177647915U;
    msg.opt = -99;
    msg.opt_dur = 1533145290U;
    msg.opt_fr = 4259949139U;
    msg.tbl = 42;
    msg.tbl_dur = 2380560157U;
    msg.tbl_fr = 4096566719U;
    msg.eco = 40;
    msg.eco_dur = 1152357688U;
    msg.eco_fr = 1428902965U;

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
    msg.setTimeStamp(0.988838716809);
    msg.setSource(3656U);
    msg.setSourceEntity(113U);
    msg.setDestination(27787U);
    msg.setDestinationEntity(57U);
    msg.validity = 8434U;
    msg.type = 88U;
    msg.utc_year = 20120U;
    msg.utc_month = 43U;
    msg.utc_day = 21U;
    msg.utc_time = 0.611072124824;
    msg.lat = 0.93464220684;
    msg.lon = 0.0974299035643;
    msg.height = 0.851660154672;
    msg.satellites = 175U;
    msg.cog = 0.809961814248;
    msg.sog = 0.697069151789;
    msg.hdop = 0.647550552428;
    msg.vdop = 0.452852050079;
    msg.hacc = 0.645810588975;
    msg.vacc = 0.0643706413689;

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
    msg.setTimeStamp(0.289351207224);
    msg.setSource(46192U);
    msg.setSourceEntity(93U);
    msg.setDestination(56917U);
    msg.setDestinationEntity(134U);
    msg.validity = 8262U;
    msg.type = 57U;
    msg.utc_year = 19951U;
    msg.utc_month = 216U;
    msg.utc_day = 120U;
    msg.utc_time = 0.248042170691;
    msg.lat = 0.551972119408;
    msg.lon = 0.027563287712;
    msg.height = 0.0825492810585;
    msg.satellites = 230U;
    msg.cog = 0.728866507159;
    msg.sog = 0.371664229425;
    msg.hdop = 0.773144076443;
    msg.vdop = 0.111940486467;
    msg.hacc = 0.959351196671;
    msg.vacc = 0.421827423985;

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
    msg.setTimeStamp(0.774276383174);
    msg.setSource(33233U);
    msg.setSourceEntity(163U);
    msg.setDestination(26937U);
    msg.setDestinationEntity(186U);
    msg.validity = 16599U;
    msg.type = 175U;
    msg.utc_year = 64295U;
    msg.utc_month = 58U;
    msg.utc_day = 23U;
    msg.utc_time = 0.428065249841;
    msg.lat = 0.804072954127;
    msg.lon = 0.48154369485;
    msg.height = 0.199793503431;
    msg.satellites = 68U;
    msg.cog = 0.897113462818;
    msg.sog = 0.203464185258;
    msg.hdop = 0.0629510487504;
    msg.vdop = 0.717471479465;
    msg.hacc = 0.793059085364;
    msg.vacc = 0.113697715523;

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
